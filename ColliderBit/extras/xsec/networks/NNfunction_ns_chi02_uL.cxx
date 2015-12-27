#include "NNfunction_ns_chi02_uL.h"
#include <cmath>

double NNfunction_ns_chi02_uL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2849)/15.1286;
   input1 = (in1 - 39.4365)/831.714;
   input2 = (in2 - 423.895)/473.212;
   input3 = (in3 - 243.864)/740.654;
   input4 = (in4 - 916.509)/778.678;
   input5 = (in5 - 812.261)/773.754;
   input6 = (in6 - 809.819)/768.93;
   input7 = (in7 - 808.854)/754.835;
   input8 = (in8 - 814.292)/798.071;
   input9 = (in9 - 807.891)/788.306;
   input10 = (in10 - 816.632)/792.966;
   input11 = (in11 - 545.548)/443.604;
   input12 = (in12 - 806.32)/710.382;
   input13 = (in13 - 605.37)/454.705;
   input14 = (in14 - 793.935)/666.161;
   input15 = (in15 - 799.935)/670.158;
   input16 = (in16 - 556.086)/452.987;
   input17 = (in17 - 821.012)/731.539;
   input18 = (in18 - 822.084)/733.798;
   input19 = (in19 - 819.654)/701.694;
   input20 = (in20 - -191.116)/491.056;
   input21 = (in21 - -251.156)/1045.09;
   input22 = (in22 - -9.17392)/1037.12;
   input23 = (in23 - -25.8527)/550.146;
   switch(index) {
     case 0:
         return neuron0x2e6cc20();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_uL::Value(int index, double* input) {
   input0 = (input[0] - 23.2849)/15.1286;
   input1 = (input[1] - 39.4365)/831.714;
   input2 = (input[2] - 423.895)/473.212;
   input3 = (input[3] - 243.864)/740.654;
   input4 = (input[4] - 916.509)/778.678;
   input5 = (input[5] - 812.261)/773.754;
   input6 = (input[6] - 809.819)/768.93;
   input7 = (input[7] - 808.854)/754.835;
   input8 = (input[8] - 814.292)/798.071;
   input9 = (input[9] - 807.891)/788.306;
   input10 = (input[10] - 816.632)/792.966;
   input11 = (input[11] - 545.548)/443.604;
   input12 = (input[12] - 806.32)/710.382;
   input13 = (input[13] - 605.37)/454.705;
   input14 = (input[14] - 793.935)/666.161;
   input15 = (input[15] - 799.935)/670.158;
   input16 = (input[16] - 556.086)/452.987;
   input17 = (input[17] - 821.012)/731.539;
   input18 = (input[18] - 822.084)/733.798;
   input19 = (input[19] - 819.654)/701.694;
   input20 = (input[20] - -191.116)/491.056;
   input21 = (input[21] - -251.156)/1045.09;
   input22 = (input[22] - -9.17392)/1037.12;
   input23 = (input[23] - -25.8527)/550.146;
   switch(index) {
     case 0:
         return neuron0x2e6cc20();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_uL::neuron0x2e37c90() {
   return input0;
}

double NNfunction_ns_chi02_uL::neuron0x2e37f40() {
   return input1;
}

double NNfunction_ns_chi02_uL::neuron0x2e38280() {
   return input2;
}

double NNfunction_ns_chi02_uL::neuron0x2e385c0() {
   return input3;
}

double NNfunction_ns_chi02_uL::neuron0x2e38900() {
   return input4;
}

double NNfunction_ns_chi02_uL::neuron0x2e38c40() {
   return input5;
}

double NNfunction_ns_chi02_uL::neuron0x2e38f80() {
   return input6;
}

double NNfunction_ns_chi02_uL::neuron0x2e392c0() {
   return input7;
}

double NNfunction_ns_chi02_uL::neuron0x2e39600() {
   return input8;
}

double NNfunction_ns_chi02_uL::neuron0x2e39940() {
   return input9;
}

double NNfunction_ns_chi02_uL::neuron0x2e39c80() {
   return input10;
}

double NNfunction_ns_chi02_uL::neuron0x2e39fc0() {
   return input11;
}

double NNfunction_ns_chi02_uL::neuron0x2e3a300() {
   return input12;
}

double NNfunction_ns_chi02_uL::neuron0x2e3a640() {
   return input13;
}

double NNfunction_ns_chi02_uL::neuron0x2e3a980() {
   return input14;
}

double NNfunction_ns_chi02_uL::neuron0x2e3acc0() {
   return input15;
}

double NNfunction_ns_chi02_uL::neuron0x2e3b000() {
   return input16;
}

double NNfunction_ns_chi02_uL::neuron0x2e3b560() {
   return input17;
}

double NNfunction_ns_chi02_uL::neuron0x2e3b8a0() {
   return input18;
}

double NNfunction_ns_chi02_uL::neuron0x2e3bbe0() {
   return input19;
}

double NNfunction_ns_chi02_uL::neuron0x2e3bf20() {
   return input20;
}

double NNfunction_ns_chi02_uL::neuron0x2e3c260() {
   return input21;
}

double NNfunction_ns_chi02_uL::neuron0x2e3c5a0() {
   return input22;
}

double NNfunction_ns_chi02_uL::neuron0x2e3c8e0() {
   return input23;
}

double NNfunction_ns_chi02_uL::input0x2e3cd50() {
   double input = 1.87438;
   input += synapse0x2e3d090();
   input += synapse0x2e3d0d0();
   input += synapse0x2e3d110();
   input += synapse0x2e3d150();
   input += synapse0x2e3d190();
   input += synapse0x2e3d1d0();
   input += synapse0x2e3d210();
   input += synapse0x2e3d250();
   input += synapse0x2e3d290();
   input += synapse0x2e3d2d0();
   input += synapse0x2e3d310();
   input += synapse0x2e3d350();
   input += synapse0x2e3d390();
   input += synapse0x2e3d3d0();
   input += synapse0x2e3d410();
   input += synapse0x2e3d450();
   input += synapse0x2e3cee0();
   input += synapse0x2e3cf20();
   input += synapse0x2bf4080();
   input += synapse0x2bf40c0();
   input += synapse0x2e3d490();
   input += synapse0x2e3d4d0();
   input += synapse0x2e3d510();
   input += synapse0x2e3d550();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e3cd50() {
   double input = input0x2e3cd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e3d590() {
   double input = 0.549406;
   input += synapse0x2e3d8d0();
   input += synapse0x2e3d910();
   input += synapse0x2e3d950();
   input += synapse0x2e3d990();
   input += synapse0x2e3d9d0();
   input += synapse0x2e3da10();
   input += synapse0x2e3da50();
   input += synapse0x2e3da90();
   input += synapse0x2e3dad0();
   input += synapse0x2bf3ed0();
   input += synapse0x2bf3f10();
   input += synapse0x2bf3f50();
   input += synapse0x2bf3f90();
   input += synapse0x2e3dd20();
   input += synapse0x2e3dd60();
   input += synapse0x2e3dda0();
   input += synapse0x2e3d720();
   input += synapse0x2e3d760();
   input += synapse0x2e3def0();
   input += synapse0x2e3df30();
   input += synapse0x2e3df70();
   input += synapse0x2e3dfb0();
   input += synapse0x2e3dff0();
   input += synapse0x2e3e030();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e3d590() {
   double input = input0x2e3d590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e3e070() {
   double input = 1.97426;
   input += synapse0x2e3e3b0();
   input += synapse0x2e3e3f0();
   input += synapse0x2e3e430();
   input += synapse0x2e3e470();
   input += synapse0x2e3e4b0();
   input += synapse0x2e3e4f0();
   input += synapse0x2e3e530();
   input += synapse0x2e3e570();
   input += synapse0x2e3e5b0();
   input += synapse0x2e3e5f0();
   input += synapse0x2e3e630();
   input += synapse0x2e3e670();
   input += synapse0x2e3e6b0();
   input += synapse0x2e3e6f0();
   input += synapse0x2e3e730();
   input += synapse0x2e3e770();
   input += synapse0x2e3e200();
   input += synapse0x2e3e240();
   input += synapse0x2c01d30();
   input += synapse0x2c01d70();
   input += synapse0x2e406a0();
   input += synapse0x2e406e0();
   input += synapse0x2e379d0();
   input += synapse0x2e37a10();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e3e070() {
   double input = input0x2e3e070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2c02490() {
   double input = 1.26412;
   input += synapse0x2c02620();
   input += synapse0x2e3dc30();
   input += synapse0x2e3dc70();
   input += synapse0x2e3dcb0();
   input += synapse0x2e3e8c0();
   input += synapse0x2e3e900();
   input += synapse0x2e3e940();
   input += synapse0x2e3e980();
   input += synapse0x2e3e9c0();
   input += synapse0x2e3ea00();
   input += synapse0x2e3ea40();
   input += synapse0x2e3ea80();
   input += synapse0x2e3eac0();
   input += synapse0x2e3eb00();
   input += synapse0x2e3eb40();
   input += synapse0x2e3eb80();
   input += synapse0x2e37a50();
   input += synapse0x2e37a90();
   input += synapse0x2e3ecd0();
   input += synapse0x2e3ed10();
   input += synapse0x2e3ed50();
   input += synapse0x2e3ed90();
   input += synapse0x2e3edd0();
   input += synapse0x2e3ee10();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2c02490() {
   double input = input0x2c02490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e3ee50() {
   double input = -2.02289;
   input += synapse0x2e3f190();
   input += synapse0x2e3f1d0();
   input += synapse0x2e3f210();
   input += synapse0x2e3f250();
   input += synapse0x2e3f290();
   input += synapse0x2e3f2d0();
   input += synapse0x2e3f310();
   input += synapse0x2e3f350();
   input += synapse0x2e3f390();
   input += synapse0x2e3f3d0();
   input += synapse0x2e3f410();
   input += synapse0x2e3f450();
   input += synapse0x2e3f490();
   input += synapse0x2e3f4d0();
   input += synapse0x2e3f510();
   input += synapse0x2e3f550();
   input += synapse0x2e3f6a0();
   input += synapse0x2e3efe0();
   input += synapse0x2e3f020();
   input += synapse0x2e407e0();
   input += synapse0x2e40820();
   input += synapse0x2e40860();
   input += synapse0x2e408a0();
   input += synapse0x2e408e0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e3ee50() {
   double input = input0x2e3ee50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e40920() {
   double input = -0.118163;
   input += synapse0x2e40c60();
   input += synapse0x2e40ca0();
   input += synapse0x2e40ce0();
   input += synapse0x2e40d20();
   input += synapse0x2e40d60();
   input += synapse0x2e40da0();
   input += synapse0x2e40de0();
   input += synapse0x2e40e20();
   input += synapse0x2e40e60();
   input += synapse0x2c02080();
   input += synapse0x2c020c0();
   input += synapse0x2c02100();
   input += synapse0x2c02140();
   input += synapse0x2c02180();
   input += synapse0x2c021c0();
   input += synapse0x2c02200();
   input += synapse0x2e40ab0();
   input += synapse0x2e40af0();
   input += synapse0x2c02350();
   input += synapse0x2c02390();
   input += synapse0x2c023d0();
   input += synapse0x2c02410();
   input += synapse0x2c02450();
   input += synapse0x2e416b0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e40920() {
   double input = input0x2e40920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e416f0() {
   double input = -2.25817;
   input += synapse0x2e41a30();
   input += synapse0x2e41a70();
   input += synapse0x2e41ab0();
   input += synapse0x2e41af0();
   input += synapse0x2e41b30();
   input += synapse0x2e41b70();
   input += synapse0x2e41bb0();
   input += synapse0x2e41bf0();
   input += synapse0x2e41c30();
   input += synapse0x2e41c70();
   input += synapse0x2e41cb0();
   input += synapse0x2e41cf0();
   input += synapse0x2e41d30();
   input += synapse0x2e41d70();
   input += synapse0x2e41db0();
   input += synapse0x2e41df0();
   input += synapse0x2e41880();
   input += synapse0x2e418c0();
   input += synapse0x2e41f40();
   input += synapse0x2e41f80();
   input += synapse0x2e41fc0();
   input += synapse0x2e42000();
   input += synapse0x2e42040();
   input += synapse0x2e42080();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e416f0() {
   double input = input0x2e416f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e420c0() {
   double input = 0.554061;
   input += synapse0x2e42400();
   input += synapse0x2e42440();
   input += synapse0x2e42480();
   input += synapse0x2e424c0();
   input += synapse0x2e42500();
   input += synapse0x2e42540();
   input += synapse0x2e42580();
   input += synapse0x2e425c0();
   input += synapse0x2e42600();
   input += synapse0x2e42640();
   input += synapse0x2e42680();
   input += synapse0x2e426c0();
   input += synapse0x2e42700();
   input += synapse0x2e42740();
   input += synapse0x2e42780();
   input += synapse0x2e427c0();
   input += synapse0x2e42250();
   input += synapse0x2e42290();
   input += synapse0x2e42910();
   input += synapse0x2e42950();
   input += synapse0x2e42990();
   input += synapse0x2e429d0();
   input += synapse0x2e42a10();
   input += synapse0x2e42a50();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e420c0() {
   double input = input0x2e420c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e42a90() {
   double input = 2.05287;
   input += synapse0x2e3b450();
   input += synapse0x2e3b490();
   input += synapse0x2e3b4d0();
   input += synapse0x2e3b510();
   input += synapse0x2e42fe0();
   input += synapse0x2e43020();
   input += synapse0x2e43060();
   input += synapse0x2e430a0();
   input += synapse0x2e430e0();
   input += synapse0x2e43120();
   input += synapse0x2e43160();
   input += synapse0x2e431a0();
   input += synapse0x2e431e0();
   input += synapse0x2e43220();
   input += synapse0x2e43260();
   input += synapse0x2e432a0();
   input += synapse0x2e42c20();
   input += synapse0x2e42c60();
   input += synapse0x2e433f0();
   input += synapse0x2e43430();
   input += synapse0x2e43470();
   input += synapse0x2e434b0();
   input += synapse0x2e434f0();
   input += synapse0x2e43530();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e42a90() {
   double input = input0x2e42a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e43570() {
   double input = -1.46976;
   input += synapse0x2e438b0();
   input += synapse0x2e438f0();
   input += synapse0x2e43930();
   input += synapse0x2e43970();
   input += synapse0x2e439b0();
   input += synapse0x2e439f0();
   input += synapse0x2e43a30();
   input += synapse0x2e43a70();
   input += synapse0x2e43ab0();
   input += synapse0x2e43af0();
   input += synapse0x2e43b30();
   input += synapse0x2e43b70();
   input += synapse0x2e43bb0();
   input += synapse0x2e43bf0();
   input += synapse0x2e43c30();
   input += synapse0x2e43c70();
   input += synapse0x2e43700();
   input += synapse0x2e43740();
   input += synapse0x2e43dc0();
   input += synapse0x2e43e00();
   input += synapse0x2e43e40();
   input += synapse0x2e43e80();
   input += synapse0x2e43ec0();
   input += synapse0x2e43f00();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e43570() {
   double input = input0x2e43570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e43f40() {
   double input = 3.89795;
   input += synapse0x2e44280();
   input += synapse0x2e442c0();
   input += synapse0x2e44300();
   input += synapse0x2e44340();
   input += synapse0x2e44380();
   input += synapse0x2e443c0();
   input += synapse0x2e44400();
   input += synapse0x2e44440();
   input += synapse0x2e44480();
   input += synapse0x2e444c0();
   input += synapse0x2e44500();
   input += synapse0x2e44540();
   input += synapse0x2e44580();
   input += synapse0x2e445c0();
   input += synapse0x2e44600();
   input += synapse0x2e44640();
   input += synapse0x2e440d0();
   input += synapse0x2e44110();
   input += synapse0x2e40ea0();
   input += synapse0x2e40ee0();
   input += synapse0x2e40f20();
   input += synapse0x2e40f60();
   input += synapse0x2e40fa0();
   input += synapse0x2e40fe0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e43f40() {
   double input = input0x2e43f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e41020() {
   double input = 1.81969;
   input += synapse0x2e41360();
   input += synapse0x2e413a0();
   input += synapse0x2e413e0();
   input += synapse0x2e41420();
   input += synapse0x2e41460();
   input += synapse0x2e414a0();
   input += synapse0x2e414e0();
   input += synapse0x2e41520();
   input += synapse0x2e41560();
   input += synapse0x2e415a0();
   input += synapse0x2e415e0();
   input += synapse0x2e41620();
   input += synapse0x2e41660();
   input += synapse0x2e457a0();
   input += synapse0x2e457e0();
   input += synapse0x2e45820();
   input += synapse0x2e411b0();
   input += synapse0x2e411f0();
   input += synapse0x2e45970();
   input += synapse0x2e459b0();
   input += synapse0x2e459f0();
   input += synapse0x2e45a30();
   input += synapse0x2e45a70();
   input += synapse0x2e45ab0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e41020() {
   double input = input0x2e41020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e45af0() {
   double input = -0.281883;
   input += synapse0x2e45e30();
   input += synapse0x2e45e70();
   input += synapse0x2e45eb0();
   input += synapse0x2e45ef0();
   input += synapse0x2e45f30();
   input += synapse0x2e45f70();
   input += synapse0x2e45fb0();
   input += synapse0x2e45ff0();
   input += synapse0x2e46030();
   input += synapse0x2e46070();
   input += synapse0x2e460b0();
   input += synapse0x2e460f0();
   input += synapse0x2e46130();
   input += synapse0x2e46170();
   input += synapse0x2e461b0();
   input += synapse0x2e461f0();
   input += synapse0x2e45c80();
   input += synapse0x2e45cc0();
   input += synapse0x2e46340();
   input += synapse0x2e46380();
   input += synapse0x2e463c0();
   input += synapse0x2e46400();
   input += synapse0x2e46440();
   input += synapse0x2e46480();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e45af0() {
   double input = input0x2e45af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e464c0() {
   double input = 0.892223;
   input += synapse0x2e46800();
   input += synapse0x2e46840();
   input += synapse0x2e46880();
   input += synapse0x2e468c0();
   input += synapse0x2e46900();
   input += synapse0x2e46940();
   input += synapse0x2e46980();
   input += synapse0x2e469c0();
   input += synapse0x2e46a00();
   input += synapse0x2e46a40();
   input += synapse0x2e46a80();
   input += synapse0x2e46ac0();
   input += synapse0x2e46b00();
   input += synapse0x2e46b40();
   input += synapse0x2e46b80();
   input += synapse0x2e46bc0();
   input += synapse0x2e46650();
   input += synapse0x2e46690();
   input += synapse0x2e46d10();
   input += synapse0x2e46d50();
   input += synapse0x2e46d90();
   input += synapse0x2e46dd0();
   input += synapse0x2e46e10();
   input += synapse0x2e46e50();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e464c0() {
   double input = input0x2e464c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e46e90() {
   double input = 0.270132;
   input += synapse0x2e471d0();
   input += synapse0x2e47210();
   input += synapse0x2e47250();
   input += synapse0x2e47290();
   input += synapse0x2e472d0();
   input += synapse0x2e47310();
   input += synapse0x2e47350();
   input += synapse0x2e47390();
   input += synapse0x2e473d0();
   input += synapse0x2e47410();
   input += synapse0x2e47450();
   input += synapse0x2e47490();
   input += synapse0x2e474d0();
   input += synapse0x2e47510();
   input += synapse0x2e47550();
   input += synapse0x2e47590();
   input += synapse0x2e47020();
   input += synapse0x2e47060();
   input += synapse0x2e476e0();
   input += synapse0x2e47720();
   input += synapse0x2e47760();
   input += synapse0x2e477a0();
   input += synapse0x2e477e0();
   input += synapse0x2e47820();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e46e90() {
   double input = input0x2e46e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e47860() {
   double input = -0.142078;
   input += synapse0x2e47ba0();
   input += synapse0x2e37e20();
   input += synapse0x2e37e60();
   input += synapse0x2e38160();
   input += synapse0x2e381a0();
   input += synapse0x2e384a0();
   input += synapse0x2e384e0();
   input += synapse0x2e387e0();
   input += synapse0x2e38820();
   input += synapse0x2e38b20();
   input += synapse0x2e38b60();
   input += synapse0x2e38e60();
   input += synapse0x2e38ea0();
   input += synapse0x2e391a0();
   input += synapse0x2e391e0();
   input += synapse0x2e394e0();
   input += synapse0x2e39520();
   input += synapse0x2e39820();
   input += synapse0x2e39860();
   input += synapse0x2e39b60();
   input += synapse0x2e39ba0();
   input += synapse0x2e39ea0();
   input += synapse0x2e39ee0();
   input += synapse0x2e3a1e0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e47860() {
   double input = input0x2e47860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e49670() {
   double input = 2.80232;
   input += synapse0x2e3a220();
   input += synapse0x2e3aee0();
   input += synapse0x2e3af20();
   input += synapse0x2e479f0();
   input += synapse0x2e47a30();
   input += synapse0x2e3b220();
   input += synapse0x2e3b260();
   input += synapse0x2e3b780();
   input += synapse0x2e3b7c0();
   input += synapse0x2e3bac0();
   input += synapse0x2e3bb00();
   input += synapse0x2e3be00();
   input += synapse0x2e3be40();
   input += synapse0x2e3c140();
   input += synapse0x2e3c180();
   input += synapse0x2e3c480();
   input += synapse0x2e3c4c0();
   input += synapse0x2e3c7c0();
   input += synapse0x2e3c800();
   input += synapse0x2e3cb00();
   input += synapse0x2e3cb40();
   input += synapse0x2e3a520();
   input += synapse0x2e3a560();
   input += synapse0x2e49910();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e49670() {
   double input = input0x2e49670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e49950() {
   double input = 2.71852;
   input += synapse0x2e49c90();
   input += synapse0x2e49cd0();
   input += synapse0x2e49d10();
   input += synapse0x2e49d50();
   input += synapse0x2e49d90();
   input += synapse0x2e49dd0();
   input += synapse0x2e49e10();
   input += synapse0x2e49e50();
   input += synapse0x2e49e90();
   input += synapse0x2e49ed0();
   input += synapse0x2e49f10();
   input += synapse0x2e49f50();
   input += synapse0x2e49f90();
   input += synapse0x2e49fd0();
   input += synapse0x2e4a010();
   input += synapse0x2e4a050();
   input += synapse0x2e49ae0();
   input += synapse0x2e49b20();
   input += synapse0x2e4a1a0();
   input += synapse0x2e4a1e0();
   input += synapse0x2e4a220();
   input += synapse0x2e4a260();
   input += synapse0x2e4a2a0();
   input += synapse0x2e4a2e0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e49950() {
   double input = input0x2e49950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e4a320() {
   double input = 0.374414;
   input += synapse0x2e4a660();
   input += synapse0x2e4a6a0();
   input += synapse0x2e4a6e0();
   input += synapse0x2e4a720();
   input += synapse0x2e4a760();
   input += synapse0x2e4a7a0();
   input += synapse0x2e4a7e0();
   input += synapse0x2e4a820();
   input += synapse0x2e4a860();
   input += synapse0x2e4a8a0();
   input += synapse0x2e4a8e0();
   input += synapse0x2e4a920();
   input += synapse0x2e4a960();
   input += synapse0x2e4a9a0();
   input += synapse0x2e4a9e0();
   input += synapse0x2e4aa20();
   input += synapse0x2e4a4b0();
   input += synapse0x2e4a4f0();
   input += synapse0x2e4ab70();
   input += synapse0x2e4abb0();
   input += synapse0x2e4abf0();
   input += synapse0x2e4ac30();
   input += synapse0x2e4ac70();
   input += synapse0x2e4acb0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e4a320() {
   double input = input0x2e4a320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e4acf0() {
   double input = -1.22982;
   input += synapse0x2e4b030();
   input += synapse0x2e4b070();
   input += synapse0x2e4b0b0();
   input += synapse0x2e4b0f0();
   input += synapse0x2e4b130();
   input += synapse0x2e4b170();
   input += synapse0x2e4b1b0();
   input += synapse0x2e4b1f0();
   input += synapse0x2e4b230();
   input += synapse0x2e4b270();
   input += synapse0x2e4b2b0();
   input += synapse0x2e4b2f0();
   input += synapse0x2e4b330();
   input += synapse0x2e4b370();
   input += synapse0x2e4b3b0();
   input += synapse0x2e4b3f0();
   input += synapse0x2e4ae80();
   input += synapse0x2e4aec0();
   input += synapse0x2e4b540();
   input += synapse0x2e4b580();
   input += synapse0x2e4b5c0();
   input += synapse0x2e4b600();
   input += synapse0x2e4b640();
   input += synapse0x2e4b680();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e4acf0() {
   double input = input0x2e4acf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e4b6c0() {
   double input = -0.287135;
   input += synapse0x2e4ba00();
   input += synapse0x2e4ba40();
   input += synapse0x2e4ba80();
   input += synapse0x2e4bac0();
   input += synapse0x2e4bb00();
   input += synapse0x2e4bb40();
   input += synapse0x2e4bb80();
   input += synapse0x2e4bbc0();
   input += synapse0x2e4bc00();
   input += synapse0x2e4bc40();
   input += synapse0x2e4bc80();
   input += synapse0x2e4bcc0();
   input += synapse0x2e4bd00();
   input += synapse0x2e4bd40();
   input += synapse0x2e4bd80();
   input += synapse0x2e4bdc0();
   input += synapse0x2e4b850();
   input += synapse0x2e4b890();
   input += synapse0x2e4bf10();
   input += synapse0x2e4bf50();
   input += synapse0x2e4bf90();
   input += synapse0x2e4bfd0();
   input += synapse0x2e4c010();
   input += synapse0x2e4c050();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e4b6c0() {
   double input = input0x2e4b6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e4c090() {
   double input = -4.14484;
   input += synapse0x2e4c3d0();
   input += synapse0x2e4c410();
   input += synapse0x2e4c450();
   input += synapse0x2e4c490();
   input += synapse0x2e4c4d0();
   input += synapse0x2e4c510();
   input += synapse0x2e4c550();
   input += synapse0x2e4c590();
   input += synapse0x2e4c5d0();
   input += synapse0x2e44790();
   input += synapse0x2e447d0();
   input += synapse0x2e44810();
   input += synapse0x2e44850();
   input += synapse0x2e44890();
   input += synapse0x2e448d0();
   input += synapse0x2e44910();
   input += synapse0x2e4c220();
   input += synapse0x2e4c260();
   input += synapse0x2e44a60();
   input += synapse0x2e44aa0();
   input += synapse0x2e44ae0();
   input += synapse0x2e44b20();
   input += synapse0x2e44b60();
   input += synapse0x2e44ba0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e4c090() {
   double input = input0x2e4c090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e44be0() {
   double input = 2.25763;
   input += synapse0x2e44f20();
   input += synapse0x2e44f60();
   input += synapse0x2e44fa0();
   input += synapse0x2e44fe0();
   input += synapse0x2e45020();
   input += synapse0x2e45060();
   input += synapse0x2e450a0();
   input += synapse0x2e450e0();
   input += synapse0x2e45120();
   input += synapse0x2e45160();
   input += synapse0x2e451a0();
   input += synapse0x2e451e0();
   input += synapse0x2e45220();
   input += synapse0x2e45260();
   input += synapse0x2e452a0();
   input += synapse0x2e452e0();
   input += synapse0x2e44d70();
   input += synapse0x2e44db0();
   input += synapse0x2e45430();
   input += synapse0x2e45470();
   input += synapse0x2e454b0();
   input += synapse0x2e454f0();
   input += synapse0x2e45530();
   input += synapse0x2e45570();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e44be0() {
   double input = input0x2e44be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e455b0() {
   double input = -0.872096;
   input += synapse0x2e45740();
   input += synapse0x2e4e7d0();
   input += synapse0x2e4e810();
   input += synapse0x2e4e850();
   input += synapse0x2e4e890();
   input += synapse0x2e4e8d0();
   input += synapse0x2e4e910();
   input += synapse0x2e4e950();
   input += synapse0x2e4e990();
   input += synapse0x2e4e9d0();
   input += synapse0x2e4ea10();
   input += synapse0x2e4ea50();
   input += synapse0x2e4ea90();
   input += synapse0x2e4ead0();
   input += synapse0x2e4eb10();
   input += synapse0x2e4eb50();
   input += synapse0x2e4e620();
   input += synapse0x2e4e660();
   input += synapse0x2e4eca0();
   input += synapse0x2e4ece0();
   input += synapse0x2e4ed20();
   input += synapse0x2e4ed60();
   input += synapse0x2e4eda0();
   input += synapse0x2e4ede0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e455b0() {
   double input = input0x2e455b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e4ee20() {
   double input = 1.02245;
   input += synapse0x2e4f160();
   input += synapse0x2e4f1a0();
   input += synapse0x2e4f1e0();
   input += synapse0x2e4f220();
   input += synapse0x2e4f260();
   input += synapse0x2e4f2a0();
   input += synapse0x2e4f2e0();
   input += synapse0x2e4f320();
   input += synapse0x2e4f360();
   input += synapse0x2e4f3a0();
   input += synapse0x2e4f3e0();
   input += synapse0x2e4f420();
   input += synapse0x2e4f460();
   input += synapse0x2e4f4a0();
   input += synapse0x2e4f4e0();
   input += synapse0x2e4f520();
   input += synapse0x2e4efb0();
   input += synapse0x2e4eff0();
   input += synapse0x2e4f670();
   input += synapse0x2e4f6b0();
   input += synapse0x2e4f6f0();
   input += synapse0x2e4f730();
   input += synapse0x2e4f770();
   input += synapse0x2e4f7b0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e4ee20() {
   double input = input0x2e4ee20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e4f7f0() {
   double input = 0.979023;
   input += synapse0x2e4fb30();
   input += synapse0x2e4fb70();
   input += synapse0x2e4fbb0();
   input += synapse0x2e4fbf0();
   input += synapse0x2e4fc30();
   input += synapse0x2e4fc70();
   input += synapse0x2e4fcb0();
   input += synapse0x2e4fcf0();
   input += synapse0x2e4fd30();
   input += synapse0x2e4fd70();
   input += synapse0x2e4fdb0();
   input += synapse0x2e4fdf0();
   input += synapse0x2e4fe30();
   input += synapse0x2e4fe70();
   input += synapse0x2e4feb0();
   input += synapse0x2e4fef0();
   input += synapse0x2e4f980();
   input += synapse0x2e4f9c0();
   input += synapse0x2e50040();
   input += synapse0x2e50080();
   input += synapse0x2e500c0();
   input += synapse0x2e50100();
   input += synapse0x2e50140();
   input += synapse0x2e50180();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e4f7f0() {
   double input = input0x2e4f7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e501c0() {
   double input = -0.797247;
   input += synapse0x2e50500();
   input += synapse0x2e50540();
   input += synapse0x2e50580();
   input += synapse0x2e505c0();
   input += synapse0x2e50600();
   input += synapse0x2e50640();
   input += synapse0x2e50680();
   input += synapse0x2e506c0();
   input += synapse0x2e50700();
   input += synapse0x2e50740();
   input += synapse0x2e50780();
   input += synapse0x2e507c0();
   input += synapse0x2e50800();
   input += synapse0x2e50840();
   input += synapse0x2e50880();
   input += synapse0x2e508c0();
   input += synapse0x2e50350();
   input += synapse0x2e50390();
   input += synapse0x2e50a10();
   input += synapse0x2e50a50();
   input += synapse0x2e50a90();
   input += synapse0x2e50ad0();
   input += synapse0x2e50b10();
   input += synapse0x2e50b50();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e501c0() {
   double input = input0x2e501c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e50b90() {
   double input = 0.521511;
   input += synapse0x2e50ed0();
   input += synapse0x2e50f10();
   input += synapse0x2e50f50();
   input += synapse0x2e50f90();
   input += synapse0x2e50fd0();
   input += synapse0x2e51010();
   input += synapse0x2e51050();
   input += synapse0x2e51090();
   input += synapse0x2e510d0();
   input += synapse0x2e51110();
   input += synapse0x2e51150();
   input += synapse0x2e51190();
   input += synapse0x2e511d0();
   input += synapse0x2e51210();
   input += synapse0x2e51250();
   input += synapse0x2e51290();
   input += synapse0x2e50d20();
   input += synapse0x2e50d60();
   input += synapse0x2e513e0();
   input += synapse0x2e51420();
   input += synapse0x2e51460();
   input += synapse0x2e514a0();
   input += synapse0x2e514e0();
   input += synapse0x2e51520();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e50b90() {
   double input = input0x2e50b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e51560() {
   double input = 0.234756;
   input += synapse0x2e518a0();
   input += synapse0x2e518e0();
   input += synapse0x2e51920();
   input += synapse0x2e51960();
   input += synapse0x2e519a0();
   input += synapse0x2e519e0();
   input += synapse0x2e51a20();
   input += synapse0x2e51a60();
   input += synapse0x2e51aa0();
   input += synapse0x2e51ae0();
   input += synapse0x2e51b20();
   input += synapse0x2e51b60();
   input += synapse0x2e51ba0();
   input += synapse0x2e51be0();
   input += synapse0x2e51c20();
   input += synapse0x2e51c60();
   input += synapse0x2e516f0();
   input += synapse0x2e51730();
   input += synapse0x2e51db0();
   input += synapse0x2e51df0();
   input += synapse0x2e51e30();
   input += synapse0x2e51e70();
   input += synapse0x2e51eb0();
   input += synapse0x2e51ef0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e51560() {
   double input = input0x2e51560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e51f30() {
   double input = -1.31243;
   input += synapse0x2e52270();
   input += synapse0x2e522b0();
   input += synapse0x2e522f0();
   input += synapse0x2e52330();
   input += synapse0x2e52370();
   input += synapse0x2e523b0();
   input += synapse0x2e523f0();
   input += synapse0x2e52430();
   input += synapse0x2e52470();
   input += synapse0x2e524b0();
   input += synapse0x2e524f0();
   input += synapse0x2e52530();
   input += synapse0x2e52570();
   input += synapse0x2e525b0();
   input += synapse0x2e525f0();
   input += synapse0x2e52630();
   input += synapse0x2e520c0();
   input += synapse0x2e52100();
   input += synapse0x2e52780();
   input += synapse0x2e527c0();
   input += synapse0x2e52800();
   input += synapse0x2e52840();
   input += synapse0x2e52880();
   input += synapse0x2e528c0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e51f30() {
   double input = input0x2e51f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e52900() {
   double input = 1.92188;
   input += synapse0x2e52c40();
   input += synapse0x2e52c80();
   input += synapse0x2e52cc0();
   input += synapse0x2e52d00();
   input += synapse0x2e52d40();
   input += synapse0x2e52d80();
   input += synapse0x2e52dc0();
   input += synapse0x2e52e00();
   input += synapse0x2e52e40();
   input += synapse0x2e52e80();
   input += synapse0x2e52ec0();
   input += synapse0x2e52f00();
   input += synapse0x2e52f40();
   input += synapse0x2e52f80();
   input += synapse0x2e52fc0();
   input += synapse0x2e53000();
   input += synapse0x2e52a90();
   input += synapse0x2e52ad0();
   input += synapse0x2e53150();
   input += synapse0x2e53190();
   input += synapse0x2e531d0();
   input += synapse0x2e53210();
   input += synapse0x2e53250();
   input += synapse0x2e53290();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e52900() {
   double input = input0x2e52900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e532d0() {
   double input = 0.757929;
   input += synapse0x2e53610();
   input += synapse0x2e47be0();
   input += synapse0x2e47c20();
   input += synapse0x2e47c60();
   input += synapse0x2e47eb0();
   input += synapse0x2e47ef0();
   input += synapse0x2e47f30();
   input += synapse0x2e48180();
   input += synapse0x2e481c0();
   input += synapse0x2e48410();
   input += synapse0x2e48450();
   input += synapse0x2e48490();
   input += synapse0x2e486e0();
   input += synapse0x2e48720();
   input += synapse0x2e48970();
   input += synapse0x2e489b0();
   input += synapse0x2e53460();
   input += synapse0x2e534a0();
   input += synapse0x2e48b00();
   input += synapse0x2e49010();
   input += synapse0x2e49050();
   input += synapse0x2e49090();
   input += synapse0x2e492e0();
   input += synapse0x2e49320();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e532d0() {
   double input = input0x2e532d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e49360() {
   double input = -0.541224;
   input += synapse0x2e48bd0();
   input += synapse0x2e48c10();
   input += synapse0x2e48c50();
   input += synapse0x2e48c90();
   input += synapse0x2e49610();
   input += synapse0x2e55960();
   input += synapse0x2e559a0();
   input += synapse0x2e559e0();
   input += synapse0x2e55a20();
   input += synapse0x2e55a60();
   input += synapse0x2e55aa0();
   input += synapse0x2e55ae0();
   input += synapse0x2e55b20();
   input += synapse0x2e55b60();
   input += synapse0x2e55ba0();
   input += synapse0x2e55be0();
   input += synapse0x2e494f0();
   input += synapse0x2e49530();
   input += synapse0x2e55d30();
   input += synapse0x2e55d70();
   input += synapse0x2e55db0();
   input += synapse0x2e55df0();
   input += synapse0x2e55e30();
   input += synapse0x2e55e70();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e49360() {
   double input = input0x2e49360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e55eb0() {
   double input = 0.14389;
   input += synapse0x2e561f0();
   input += synapse0x2e56230();
   input += synapse0x2e56270();
   input += synapse0x2e562b0();
   input += synapse0x2e562f0();
   input += synapse0x2e56330();
   input += synapse0x2e56370();
   input += synapse0x2e563b0();
   input += synapse0x2e563f0();
   input += synapse0x2e56430();
   input += synapse0x2e56470();
   input += synapse0x2e564b0();
   input += synapse0x2e564f0();
   input += synapse0x2e56530();
   input += synapse0x2e56570();
   input += synapse0x2e565b0();
   input += synapse0x2e56040();
   input += synapse0x2e56080();
   input += synapse0x2e56700();
   input += synapse0x2e56740();
   input += synapse0x2e56780();
   input += synapse0x2e567c0();
   input += synapse0x2e56800();
   input += synapse0x2e56840();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e55eb0() {
   double input = input0x2e55eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e56880() {
   double input = 0.47302;
   input += synapse0x2e56bc0();
   input += synapse0x2e56c00();
   input += synapse0x2e56c40();
   input += synapse0x2e56c80();
   input += synapse0x2e56cc0();
   input += synapse0x2e56d00();
   input += synapse0x2e56d40();
   input += synapse0x2e56d80();
   input += synapse0x2e56dc0();
   input += synapse0x2e56e00();
   input += synapse0x2e56e40();
   input += synapse0x2e56e80();
   input += synapse0x2e56ec0();
   input += synapse0x2e56f00();
   input += synapse0x2e56f40();
   input += synapse0x2e56f80();
   input += synapse0x2e56a10();
   input += synapse0x2e56a50();
   input += synapse0x2e570d0();
   input += synapse0x2e57110();
   input += synapse0x2e57150();
   input += synapse0x2e57190();
   input += synapse0x2e571d0();
   input += synapse0x2e57210();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e56880() {
   double input = input0x2e56880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e57250() {
   double input = 0.325577;
   input += synapse0x2e57590();
   input += synapse0x2e575d0();
   input += synapse0x2e57610();
   input += synapse0x2e57650();
   input += synapse0x2e57690();
   input += synapse0x2e576d0();
   input += synapse0x2e57710();
   input += synapse0x2e57750();
   input += synapse0x2e57790();
   input += synapse0x2e577d0();
   input += synapse0x2e57810();
   input += synapse0x2e57850();
   input += synapse0x2e57890();
   input += synapse0x2e578d0();
   input += synapse0x2e57910();
   input += synapse0x2e57950();
   input += synapse0x2e573e0();
   input += synapse0x2e57420();
   input += synapse0x2e57aa0();
   input += synapse0x2e57ae0();
   input += synapse0x2e57b20();
   input += synapse0x2e57b60();
   input += synapse0x2e57ba0();
   input += synapse0x2e57be0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e57250() {
   double input = input0x2e57250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e57c20() {
   double input = -1.03542;
   input += synapse0x2e57f60();
   input += synapse0x2e57fa0();
   input += synapse0x2e57fe0();
   input += synapse0x2e58020();
   input += synapse0x2e58060();
   input += synapse0x2e580a0();
   input += synapse0x2e580e0();
   input += synapse0x2e58120();
   input += synapse0x2e58160();
   input += synapse0x2e581a0();
   input += synapse0x2e581e0();
   input += synapse0x2e58220();
   input += synapse0x2e58260();
   input += synapse0x2e582a0();
   input += synapse0x2e582e0();
   input += synapse0x2e58320();
   input += synapse0x2e57db0();
   input += synapse0x2e57df0();
   input += synapse0x2e58470();
   input += synapse0x2e584b0();
   input += synapse0x2e584f0();
   input += synapse0x2e58530();
   input += synapse0x2e58570();
   input += synapse0x2e585b0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e57c20() {
   double input = input0x2e57c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e585f0() {
   double input = -0.583398;
   input += synapse0x2e58930();
   input += synapse0x2e58970();
   input += synapse0x2e589b0();
   input += synapse0x2e589f0();
   input += synapse0x2e58a30();
   input += synapse0x2e58a70();
   input += synapse0x2e58ab0();
   input += synapse0x2e58af0();
   input += synapse0x2e58b30();
   input += synapse0x2e58b70();
   input += synapse0x2e58bb0();
   input += synapse0x2e58bf0();
   input += synapse0x2e58c30();
   input += synapse0x2e58c70();
   input += synapse0x2e58cb0();
   input += synapse0x2e58cf0();
   input += synapse0x2e58780();
   input += synapse0x2e587c0();
   input += synapse0x2e58e40();
   input += synapse0x2e58e80();
   input += synapse0x2e58ec0();
   input += synapse0x2e58f00();
   input += synapse0x2e58f40();
   input += synapse0x2e58f80();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e585f0() {
   double input = input0x2e585f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e58fc0() {
   double input = -1.96892;
   input += synapse0x2e59300();
   input += synapse0x2e59340();
   input += synapse0x2e59380();
   input += synapse0x2e593c0();
   input += synapse0x2e59400();
   input += synapse0x2e59440();
   input += synapse0x2e59480();
   input += synapse0x2e594c0();
   input += synapse0x2e59500();
   input += synapse0x2e59540();
   input += synapse0x2e59580();
   input += synapse0x2e595c0();
   input += synapse0x2e59600();
   input += synapse0x2e59640();
   input += synapse0x2e59680();
   input += synapse0x2e596c0();
   input += synapse0x2e59150();
   input += synapse0x2e59190();
   input += synapse0x2e59810();
   input += synapse0x2e59850();
   input += synapse0x2e59890();
   input += synapse0x2e598d0();
   input += synapse0x2e59910();
   input += synapse0x2e59950();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e58fc0() {
   double input = input0x2e58fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e59990() {
   double input = -2.90274;
   input += synapse0x2e59cd0();
   input += synapse0x2e59d10();
   input += synapse0x2e59d50();
   input += synapse0x2e59d90();
   input += synapse0x2e59dd0();
   input += synapse0x2e59e10();
   input += synapse0x2e59e50();
   input += synapse0x2e59e90();
   input += synapse0x2e59ed0();
   input += synapse0x2e59f10();
   input += synapse0x2e59f50();
   input += synapse0x2e59f90();
   input += synapse0x2e59fd0();
   input += synapse0x2e5a010();
   input += synapse0x2e5a050();
   input += synapse0x2e5a090();
   input += synapse0x2e59b20();
   input += synapse0x2e59b60();
   input += synapse0x2e5a1e0();
   input += synapse0x2e5a220();
   input += synapse0x2e5a260();
   input += synapse0x2e5a2a0();
   input += synapse0x2e5a2e0();
   input += synapse0x2e5a320();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e59990() {
   double input = input0x2e59990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e5a360() {
   double input = -0.647078;
   input += synapse0x2e42dd0();
   input += synapse0x2e42e10();
   input += synapse0x2e42e50();
   input += synapse0x2e42e90();
   input += synapse0x2e42ed0();
   input += synapse0x2e42f10();
   input += synapse0x2e42f50();
   input += synapse0x2e42f90();
   input += synapse0x2e5aab0();
   input += synapse0x2e5aaf0();
   input += synapse0x2e5ab30();
   input += synapse0x2e5ab70();
   input += synapse0x2e5abb0();
   input += synapse0x2e5abf0();
   input += synapse0x2e5ac30();
   input += synapse0x2e5ac70();
   input += synapse0x2e5a4f0();
   input += synapse0x2e5a530();
   input += synapse0x2e5adc0();
   input += synapse0x2e5ae00();
   input += synapse0x2e5ae40();
   input += synapse0x2e5ae80();
   input += synapse0x2e5aec0();
   input += synapse0x2e5af00();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e5a360() {
   double input = input0x2e5a360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e5af40() {
   double input = 0.388422;
   input += synapse0x2e5b280();
   input += synapse0x2e5b2c0();
   input += synapse0x2e5b300();
   input += synapse0x2e5b340();
   input += synapse0x2e5b380();
   input += synapse0x2e5b3c0();
   input += synapse0x2e5b400();
   input += synapse0x2e5b440();
   input += synapse0x2e5b480();
   input += synapse0x2e5b4c0();
   input += synapse0x2e5b500();
   input += synapse0x2e5b540();
   input += synapse0x2e5b580();
   input += synapse0x2e5b5c0();
   input += synapse0x2e5b600();
   input += synapse0x2e5b640();
   input += synapse0x2e5b0d0();
   input += synapse0x2e5b110();
   input += synapse0x2e5b790();
   input += synapse0x2e5b7d0();
   input += synapse0x2e5b810();
   input += synapse0x2e5b850();
   input += synapse0x2e5b890();
   input += synapse0x2e5b8d0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e5af40() {
   double input = input0x2e5af40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e5b910() {
   double input = 0.243047;
   input += synapse0x2e5bc50();
   input += synapse0x2e5bc90();
   input += synapse0x2e5bcd0();
   input += synapse0x2e5bd10();
   input += synapse0x2e5bd50();
   input += synapse0x2e5bd90();
   input += synapse0x2e5bdd0();
   input += synapse0x2e5be10();
   input += synapse0x2e5be50();
   input += synapse0x2e5be90();
   input += synapse0x2e5bed0();
   input += synapse0x2e5bf10();
   input += synapse0x2e5bf50();
   input += synapse0x2e5bf90();
   input += synapse0x2e5bfd0();
   input += synapse0x2e5c010();
   input += synapse0x2e5baa0();
   input += synapse0x2e5bae0();
   input += synapse0x2e4c610();
   input += synapse0x2e4c650();
   input += synapse0x2e4c690();
   input += synapse0x2e4c6d0();
   input += synapse0x2e4c710();
   input += synapse0x2e4c750();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e5b910() {
   double input = input0x2e5b910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e4c790() {
   double input = -1.51913;
   input += synapse0x2e4cad0();
   input += synapse0x2e4cb10();
   input += synapse0x2e4cb50();
   input += synapse0x2e4cb90();
   input += synapse0x2e4cbd0();
   input += synapse0x2e4cc10();
   input += synapse0x2e4cc50();
   input += synapse0x2e4cc90();
   input += synapse0x2e4ccd0();
   input += synapse0x2e4cd10();
   input += synapse0x2e4cd50();
   input += synapse0x2e4cd90();
   input += synapse0x2e4cdd0();
   input += synapse0x2e4ce10();
   input += synapse0x2e4ce50();
   input += synapse0x2e4ce90();
   input += synapse0x2e4c920();
   input += synapse0x2e4c960();
   input += synapse0x2e4cfe0();
   input += synapse0x2e4d020();
   input += synapse0x2e4d060();
   input += synapse0x2e4d0a0();
   input += synapse0x2e4d0e0();
   input += synapse0x2e4d120();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e4c790() {
   double input = input0x2e4c790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e4d160() {
   double input = -1.07056;
   input += synapse0x2e4d4a0();
   input += synapse0x2e4d4e0();
   input += synapse0x2e4d520();
   input += synapse0x2e4d560();
   input += synapse0x2e4d5a0();
   input += synapse0x2e4d5e0();
   input += synapse0x2e4d620();
   input += synapse0x2e4d660();
   input += synapse0x2e4d6a0();
   input += synapse0x2e4d6e0();
   input += synapse0x2e4d720();
   input += synapse0x2e4d760();
   input += synapse0x2e4d7a0();
   input += synapse0x2e4d7e0();
   input += synapse0x2e4d820();
   input += synapse0x2e4d860();
   input += synapse0x2e4d2f0();
   input += synapse0x2e4d330();
   input += synapse0x2e4d9b0();
   input += synapse0x2e4d9f0();
   input += synapse0x2e4da30();
   input += synapse0x2e4da70();
   input += synapse0x2e4dab0();
   input += synapse0x2e4daf0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e4d160() {
   double input = input0x2e4d160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e4db30() {
   double input = -2.64774;
   input += synapse0x2e4de70();
   input += synapse0x2e4deb0();
   input += synapse0x2e4def0();
   input += synapse0x2e4df30();
   input += synapse0x2e4df70();
   input += synapse0x2e4dfb0();
   input += synapse0x2e4dff0();
   input += synapse0x2e4e030();
   input += synapse0x2e4e070();
   input += synapse0x2e4e0b0();
   input += synapse0x2e4e0f0();
   input += synapse0x2e4e130();
   input += synapse0x2e4e170();
   input += synapse0x2e4e1b0();
   input += synapse0x2e4e1f0();
   input += synapse0x2e4e230();
   input += synapse0x2e4dcc0();
   input += synapse0x2e4dd00();
   input += synapse0x2e4e380();
   input += synapse0x2e4e3c0();
   input += synapse0x2e4e400();
   input += synapse0x2e4e440();
   input += synapse0x2e4e480();
   input += synapse0x2e4e4c0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e4db30() {
   double input = input0x2e4db30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e60170() {
   double input = -1.3568;
   input += synapse0x2e60390();
   input += synapse0x2e603d0();
   input += synapse0x2e60410();
   input += synapse0x2e60450();
   input += synapse0x2e60490();
   input += synapse0x2e604d0();
   input += synapse0x2e60510();
   input += synapse0x2e60550();
   input += synapse0x2e60590();
   input += synapse0x2e605d0();
   input += synapse0x2e60610();
   input += synapse0x2e60650();
   input += synapse0x2e60690();
   input += synapse0x2e606d0();
   input += synapse0x2e60710();
   input += synapse0x2e60750();
   input += synapse0x2e4e500();
   input += synapse0x2e4e540();
   input += synapse0x2e608a0();
   input += synapse0x2e608e0();
   input += synapse0x2e60920();
   input += synapse0x2e60960();
   input += synapse0x2e609a0();
   input += synapse0x2e609e0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e60170() {
   double input = input0x2e60170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e60a20() {
   double input = 0.367004;
   input += synapse0x2e60d60();
   input += synapse0x2e60da0();
   input += synapse0x2e60de0();
   input += synapse0x2e60e20();
   input += synapse0x2e60e60();
   input += synapse0x2e60ea0();
   input += synapse0x2e60ee0();
   input += synapse0x2e60f20();
   input += synapse0x2e60f60();
   input += synapse0x2e60fa0();
   input += synapse0x2e60fe0();
   input += synapse0x2e61020();
   input += synapse0x2e61060();
   input += synapse0x2e610a0();
   input += synapse0x2e610e0();
   input += synapse0x2e61120();
   input += synapse0x2e60bb0();
   input += synapse0x2e60bf0();
   input += synapse0x2e61270();
   input += synapse0x2e612b0();
   input += synapse0x2e612f0();
   input += synapse0x2e61330();
   input += synapse0x2e61370();
   input += synapse0x2e613b0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e60a20() {
   double input = input0x2e60a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e613f0() {
   double input = 1.12077;
   input += synapse0x2e61730();
   input += synapse0x2e61770();
   input += synapse0x2e617b0();
   input += synapse0x2e617f0();
   input += synapse0x2e61830();
   input += synapse0x2e61870();
   input += synapse0x2e618b0();
   input += synapse0x2e618f0();
   input += synapse0x2e61930();
   input += synapse0x2e61970();
   input += synapse0x2e619b0();
   input += synapse0x2e619f0();
   input += synapse0x2e61a30();
   input += synapse0x2e61a70();
   input += synapse0x2e61ab0();
   input += synapse0x2e61af0();
   input += synapse0x2e61580();
   input += synapse0x2e615c0();
   input += synapse0x2e61c40();
   input += synapse0x2e61c80();
   input += synapse0x2e61cc0();
   input += synapse0x2e61d00();
   input += synapse0x2e61d40();
   input += synapse0x2e61d80();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e613f0() {
   double input = input0x2e613f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e61dc0() {
   double input = -0.436064;
   input += synapse0x2e62100();
   input += synapse0x2e62140();
   input += synapse0x2e62180();
   input += synapse0x2e621c0();
   input += synapse0x2e62200();
   input += synapse0x2e62240();
   input += synapse0x2e62280();
   input += synapse0x2e622c0();
   input += synapse0x2e62300();
   input += synapse0x2e62340();
   input += synapse0x2e62380();
   input += synapse0x2e623c0();
   input += synapse0x2e62400();
   input += synapse0x2e62440();
   input += synapse0x2e62480();
   input += synapse0x2e624c0();
   input += synapse0x2e61f50();
   input += synapse0x2e61f90();
   input += synapse0x2e62610();
   input += synapse0x2e62650();
   input += synapse0x2e62690();
   input += synapse0x2e626d0();
   input += synapse0x2e62710();
   input += synapse0x2e62750();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e61dc0() {
   double input = input0x2e61dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e68fc0() {
   double input = 0.891297;
   input += synapse0x2e3dba0();
   input += synapse0x2e3dbe0();
   input += synapse0x2e3f100();
   input += synapse0x2e3f140();
   input += synapse0x2e40bd0();
   input += synapse0x2e40c10();
   input += synapse0x2e419a0();
   input += synapse0x2e419e0();
   input += synapse0x2e42370();
   input += synapse0x2e423b0();
   input += synapse0x2e42d40();
   input += synapse0x2e42d80();
   input += synapse0x2e43820();
   input += synapse0x2e43860();
   input += synapse0x2e441f0();
   input += synapse0x2e44230();
   input += synapse0x2e412d0();
   input += synapse0x2e41310();
   input += synapse0x2e45da0();
   input += synapse0x2e45de0();
   input += synapse0x2e46770();
   input += synapse0x2e467b0();
   input += synapse0x2e47140();
   input += synapse0x2e47180();
   input += synapse0x2e47b10();
   input += synapse0x2e47b50();
   input += synapse0x2e3aba0();
   input += synapse0x2e3abe0();
   input += synapse0x2e49c00();
   input += synapse0x2e49c40();
   input += synapse0x2e4a5d0();
   input += synapse0x2e4a610();
   input += synapse0x2e4afa0();
   input += synapse0x2e4afe0();
   input += synapse0x2e4b970();
   input += synapse0x2e4b9b0();
   input += synapse0x2e4c340();
   input += synapse0x2e4c380();
   input += synapse0x2e44e90();
   input += synapse0x2e44ed0();
   input += synapse0x2e4e740();
   input += synapse0x2e4e780();
   input += synapse0x2e4f0d0();
   input += synapse0x2e4f110();
   input += synapse0x2e4faa0();
   input += synapse0x2e4fae0();
   input += synapse0x2e50470();
   input += synapse0x2e504b0();
   input += synapse0x2e50e40();
   input += synapse0x2e50e80();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e68fc0() {
   double input = input0x2e68fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e69360() {
   double input = 0.920063;
   input += synapse0x2e53580();
   input += synapse0x2e535c0();
   input += synapse0x2e48b40();
   input += synapse0x2e48b80();
   input += synapse0x2e56160();
   input += synapse0x2e561a0();
   input += synapse0x2e56b30();
   input += synapse0x2e56b70();
   input += synapse0x2e57500();
   input += synapse0x2e57540();
   input += synapse0x2e57ed0();
   input += synapse0x2e57f10();
   input += synapse0x2e588a0();
   input += synapse0x2e588e0();
   input += synapse0x2e59270();
   input += synapse0x2e592b0();
   input += synapse0x2e59c40();
   input += synapse0x2e59c80();
   input += synapse0x2e5a610();
   input += synapse0x2e5a650();
   input += synapse0x2e5b1f0();
   input += synapse0x2e5b230();
   input += synapse0x2e5bbc0();
   input += synapse0x2e5bc00();
   input += synapse0x2e4ca40();
   input += synapse0x2e4ca80();
   input += synapse0x2e4d410();
   input += synapse0x2e4d450();
   input += synapse0x2e4dde0();
   input += synapse0x2e4de20();
   input += synapse0x2e60300();
   input += synapse0x2e60340();
   input += synapse0x2e60cd0();
   input += synapse0x2e60d10();
   input += synapse0x2e616a0();
   input += synapse0x2e616e0();
   input += synapse0x2e62070();
   input += synapse0x2e620b0();
   input += synapse0x2e3d000();
   input += synapse0x2e3d040();
   input += synapse0x2e51810();
   input += synapse0x2e51850();
   input += synapse0x2e62790();
   input += synapse0x2e627d0();
   input += synapse0x2e62810();
   input += synapse0x2e62850();
   input += synapse0x2e69700();
   input += synapse0x2e69740();
   input += synapse0x2e69780();
   input += synapse0x2e697c0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e69360() {
   double input = input0x2e69360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e69800() {
   double input = -0.588306;
   input += synapse0x2e69b40();
   input += synapse0x2e69b80();
   input += synapse0x2e69bc0();
   input += synapse0x2e69c00();
   input += synapse0x2e69c40();
   input += synapse0x2e69c80();
   input += synapse0x2e69cc0();
   input += synapse0x2e69d00();
   input += synapse0x2e69d40();
   input += synapse0x2e69d80();
   input += synapse0x2e69dc0();
   input += synapse0x2e69e00();
   input += synapse0x2e69e40();
   input += synapse0x2e69e80();
   input += synapse0x2e69ec0();
   input += synapse0x2e69f00();
   input += synapse0x2e69990();
   input += synapse0x2e699d0();
   input += synapse0x2e6a050();
   input += synapse0x2e6a090();
   input += synapse0x2e6a0d0();
   input += synapse0x2e6a110();
   input += synapse0x2e6a150();
   input += synapse0x2e6a190();
   input += synapse0x2e6a1d0();
   input += synapse0x2e6a210();
   input += synapse0x2e6a250();
   input += synapse0x2e6a290();
   input += synapse0x2e6a2d0();
   input += synapse0x2e6a310();
   input += synapse0x2e6a350();
   input += synapse0x2e6a390();
   input += synapse0x2e69f40();
   input += synapse0x2e69f80();
   input += synapse0x2e69fc0();
   input += synapse0x2e6a000();
   input += synapse0x2e6a5e0();
   input += synapse0x2e6a620();
   input += synapse0x2e6a660();
   input += synapse0x2e6a6a0();
   input += synapse0x2e6a6e0();
   input += synapse0x2e6a720();
   input += synapse0x2e6a760();
   input += synapse0x2e6a7a0();
   input += synapse0x2e6a7e0();
   input += synapse0x2e6a820();
   input += synapse0x2e6a860();
   input += synapse0x2e6a8a0();
   input += synapse0x2e6a8e0();
   input += synapse0x2e6a920();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e69800() {
   double input = input0x2e69800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e6a960() {
   double input = -0.00703762;
   input += synapse0x2e6aca0();
   input += synapse0x2e6ace0();
   input += synapse0x2e6ad20();
   input += synapse0x2e6ad60();
   input += synapse0x2e6ada0();
   input += synapse0x2e6ade0();
   input += synapse0x2e6ae20();
   input += synapse0x2e6ae60();
   input += synapse0x2e6aea0();
   input += synapse0x2e6aee0();
   input += synapse0x2e6af20();
   input += synapse0x2e6af60();
   input += synapse0x2e6afa0();
   input += synapse0x2e6afe0();
   input += synapse0x2e6b020();
   input += synapse0x2e6b060();
   input += synapse0x2e6aaf0();
   input += synapse0x2e6ab30();
   input += synapse0x2e6b1b0();
   input += synapse0x2e6b1f0();
   input += synapse0x2e6b230();
   input += synapse0x2e6b270();
   input += synapse0x2e6b2b0();
   input += synapse0x2e6b2f0();
   input += synapse0x2e6b330();
   input += synapse0x2e6b370();
   input += synapse0x2e6b3b0();
   input += synapse0x2e6b3f0();
   input += synapse0x2e6b430();
   input += synapse0x2e6b470();
   input += synapse0x2e6b4b0();
   input += synapse0x2e6b4f0();
   input += synapse0x2e6b0a0();
   input += synapse0x2e6b0e0();
   input += synapse0x2e6b120();
   input += synapse0x2e6b160();
   input += synapse0x2e6b740();
   input += synapse0x2e6b780();
   input += synapse0x2e6b7c0();
   input += synapse0x2e6b800();
   input += synapse0x2e6b840();
   input += synapse0x2e6b880();
   input += synapse0x2e6b8c0();
   input += synapse0x2e6b900();
   input += synapse0x2e6b940();
   input += synapse0x2e6b980();
   input += synapse0x2e6b9c0();
   input += synapse0x2e6ba00();
   input += synapse0x2e6ba40();
   input += synapse0x2e6ba80();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e6a960() {
   double input = input0x2e6a960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e6bac0() {
   double input = -1.19846;
   input += synapse0x2e6be00();
   input += synapse0x2e6be40();
   input += synapse0x2e6be80();
   input += synapse0x2e6bec0();
   input += synapse0x2e6bf00();
   input += synapse0x2e6bf40();
   input += synapse0x2e6bf80();
   input += synapse0x2e6bfc0();
   input += synapse0x2e6c000();
   input += synapse0x2e6c040();
   input += synapse0x2e6c080();
   input += synapse0x2e6c0c0();
   input += synapse0x2e6c100();
   input += synapse0x2e6c140();
   input += synapse0x2e6c180();
   input += synapse0x2e6c1c0();
   input += synapse0x2e6bc50();
   input += synapse0x2e6bc90();
   input += synapse0x2e6c310();
   input += synapse0x2e6c350();
   input += synapse0x2e6c390();
   input += synapse0x2e6c3d0();
   input += synapse0x2e6c410();
   input += synapse0x2e6c450();
   input += synapse0x2e6c490();
   input += synapse0x2e6c4d0();
   input += synapse0x2e6c510();
   input += synapse0x2e6c550();
   input += synapse0x2e6c590();
   input += synapse0x2e6c5d0();
   input += synapse0x2e6c610();
   input += synapse0x2e6c650();
   input += synapse0x2e6c200();
   input += synapse0x2e6c240();
   input += synapse0x2e6c280();
   input += synapse0x2e6c2c0();
   input += synapse0x2e6c8a0();
   input += synapse0x2e6c8e0();
   input += synapse0x2e6c920();
   input += synapse0x2e6c960();
   input += synapse0x2e6c9a0();
   input += synapse0x2e6c9e0();
   input += synapse0x2e6ca20();
   input += synapse0x2e6ca60();
   input += synapse0x2e6caa0();
   input += synapse0x2e6cae0();
   input += synapse0x2e6cb20();
   input += synapse0x2e6cb60();
   input += synapse0x2e6cba0();
   input += synapse0x2e6cbe0();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e6bac0() {
   double input = input0x2e6bac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_uL::input0x2e6cc20() {
   double input = 7.55733;
   input += synapse0x2e6ce40();
   input += synapse0x2e6ce80();
   input += synapse0x2e6cec0();
   input += synapse0x2e6cf00();
   input += synapse0x2e6cf40();
   return input;
}

double NNfunction_ns_chi02_uL::neuron0x2e6cc20() {
   double input = input0x2e6cc20();
   return (input * 1)+0;
}

double NNfunction_ns_chi02_uL::synapse0x2e3d090() {
   return (neuron0x2e37c90()*-0.504761);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d0d0() {
   return (neuron0x2e37f40()*0.385028);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d110() {
   return (neuron0x2e38280()*0.137473);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d150() {
   return (neuron0x2e385c0()*0.819032);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d190() {
   return (neuron0x2e38900()*0.0916622);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d1d0() {
   return (neuron0x2e38c40()*0.805305);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d210() {
   return (neuron0x2e38f80()*-0.520272);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d250() {
   return (neuron0x2e392c0()*0.0604298);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d290() {
   return (neuron0x2e39600()*-0.510992);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d2d0() {
   return (neuron0x2e39940()*-0.245754);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d310() {
   return (neuron0x2e39c80()*-0.754274);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d350() {
   return (neuron0x2e39fc0()*-0.848851);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d390() {
   return (neuron0x2e3a300()*0.786271);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d3d0() {
   return (neuron0x2e3a640()*0.218421);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d410() {
   return (neuron0x2e3a980()*0.386345);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d450() {
   return (neuron0x2e3acc0()*0.0276474);
}

double NNfunction_ns_chi02_uL::synapse0x2e3cee0() {
   return (neuron0x2e3b000()*0.658828);
}

double NNfunction_ns_chi02_uL::synapse0x2e3cf20() {
   return (neuron0x2e3b560()*-0.99001);
}

double NNfunction_ns_chi02_uL::synapse0x2bf4080() {
   return (neuron0x2e3b8a0()*0.131095);
}

double NNfunction_ns_chi02_uL::synapse0x2bf40c0() {
   return (neuron0x2e3bbe0()*0.340579);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d490() {
   return (neuron0x2e3bf20()*-0.499341);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d4d0() {
   return (neuron0x2e3c260()*0.402815);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d510() {
   return (neuron0x2e3c5a0()*-0.636632);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d550() {
   return (neuron0x2e3c8e0()*-0.0874559);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d8d0() {
   return (neuron0x2e37c90()*-0.0621467);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d910() {
   return (neuron0x2e37f40()*-0.0271093);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d950() {
   return (neuron0x2e38280()*1.12638);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d990() {
   return (neuron0x2e385c0()*-0.138854);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d9d0() {
   return (neuron0x2e38900()*0.0794756);
}

double NNfunction_ns_chi02_uL::synapse0x2e3da10() {
   return (neuron0x2e38c40()*-0.14158);
}

double NNfunction_ns_chi02_uL::synapse0x2e3da50() {
   return (neuron0x2e38f80()*-0.0143214);
}

double NNfunction_ns_chi02_uL::synapse0x2e3da90() {
   return (neuron0x2e392c0()*0.0521475);
}

double NNfunction_ns_chi02_uL::synapse0x2e3dad0() {
   return (neuron0x2e39600()*0.0903146);
}

double NNfunction_ns_chi02_uL::synapse0x2bf3ed0() {
   return (neuron0x2e39940()*0.026128);
}

double NNfunction_ns_chi02_uL::synapse0x2bf3f10() {
   return (neuron0x2e39c80()*0.0132126);
}

double NNfunction_ns_chi02_uL::synapse0x2bf3f50() {
   return (neuron0x2e39fc0()*-0.979064);
}

double NNfunction_ns_chi02_uL::synapse0x2bf3f90() {
   return (neuron0x2e3a300()*-0.0866058);
}

double NNfunction_ns_chi02_uL::synapse0x2e3dd20() {
   return (neuron0x2e3a640()*0.0349952);
}

double NNfunction_ns_chi02_uL::synapse0x2e3dd60() {
   return (neuron0x2e3a980()*-0.117068);
}

double NNfunction_ns_chi02_uL::synapse0x2e3dda0() {
   return (neuron0x2e3acc0()*-0.0995264);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d720() {
   return (neuron0x2e3b000()*0.0911013);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d760() {
   return (neuron0x2e3b560()*-0.0879089);
}

double NNfunction_ns_chi02_uL::synapse0x2e3def0() {
   return (neuron0x2e3b8a0()*-0.00704579);
}

double NNfunction_ns_chi02_uL::synapse0x2e3df30() {
   return (neuron0x2e3bbe0()*-0.00677712);
}

double NNfunction_ns_chi02_uL::synapse0x2e3df70() {
   return (neuron0x2e3bf20()*-0.0457631);
}

double NNfunction_ns_chi02_uL::synapse0x2e3dfb0() {
   return (neuron0x2e3c260()*0.0849375);
}

double NNfunction_ns_chi02_uL::synapse0x2e3dff0() {
   return (neuron0x2e3c5a0()*0.00742301);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e030() {
   return (neuron0x2e3c8e0()*-0.0349156);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e3b0() {
   return (neuron0x2e37c90()*-0.228773);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e3f0() {
   return (neuron0x2e37f40()*0.00967962);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e430() {
   return (neuron0x2e38280()*-0.289977);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e470() {
   return (neuron0x2e385c0()*0.599021);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e4b0() {
   return (neuron0x2e38900()*-0.823815);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e4f0() {
   return (neuron0x2e38c40()*-0.291452);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e530() {
   return (neuron0x2e38f80()*0.58329);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e570() {
   return (neuron0x2e392c0()*-0.235151);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e5b0() {
   return (neuron0x2e39600()*0.326444);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e5f0() {
   return (neuron0x2e39940()*0.341259);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e630() {
   return (neuron0x2e39c80()*0.270603);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e670() {
   return (neuron0x2e39fc0()*-0.426198);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e6b0() {
   return (neuron0x2e3a300()*-0.280383);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e6f0() {
   return (neuron0x2e3a640()*-0.802834);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e730() {
   return (neuron0x2e3a980()*0.351466);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e770() {
   return (neuron0x2e3acc0()*0.160285);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e200() {
   return (neuron0x2e3b000()*-0.138633);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e240() {
   return (neuron0x2e3b560()*1.25945);
}

double NNfunction_ns_chi02_uL::synapse0x2c01d30() {
   return (neuron0x2e3b8a0()*-0.345034);
}

double NNfunction_ns_chi02_uL::synapse0x2c01d70() {
   return (neuron0x2e3bbe0()*-0.0556407);
}

double NNfunction_ns_chi02_uL::synapse0x2e406a0() {
   return (neuron0x2e3bf20()*0.0586804);
}

double NNfunction_ns_chi02_uL::synapse0x2e406e0() {
   return (neuron0x2e3c260()*-0.0670168);
}

double NNfunction_ns_chi02_uL::synapse0x2e379d0() {
   return (neuron0x2e3c5a0()*0.146167);
}

double NNfunction_ns_chi02_uL::synapse0x2e37a10() {
   return (neuron0x2e3c8e0()*0.48702);
}

double NNfunction_ns_chi02_uL::synapse0x2c02620() {
   return (neuron0x2e37c90()*-0.0617656);
}

double NNfunction_ns_chi02_uL::synapse0x2e3dc30() {
   return (neuron0x2e37f40()*0.00607789);
}

double NNfunction_ns_chi02_uL::synapse0x2e3dc70() {
   return (neuron0x2e38280()*0.539438);
}

double NNfunction_ns_chi02_uL::synapse0x2e3dcb0() {
   return (neuron0x2e385c0()*0.0516127);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e8c0() {
   return (neuron0x2e38900()*-0.0194596);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e900() {
   return (neuron0x2e38c40()*0.0176202);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e940() {
   return (neuron0x2e38f80()*-0.0202966);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e980() {
   return (neuron0x2e392c0()*0.00221895);
}

double NNfunction_ns_chi02_uL::synapse0x2e3e9c0() {
   return (neuron0x2e39600()*0.0168642);
}

double NNfunction_ns_chi02_uL::synapse0x2e3ea00() {
   return (neuron0x2e39940()*-0.00859514);
}

double NNfunction_ns_chi02_uL::synapse0x2e3ea40() {
   return (neuron0x2e39c80()*0.0332706);
}

double NNfunction_ns_chi02_uL::synapse0x2e3ea80() {
   return (neuron0x2e39fc0()*-0.0513707);
}

double NNfunction_ns_chi02_uL::synapse0x2e3eac0() {
   return (neuron0x2e3a300()*0.00897208);
}

double NNfunction_ns_chi02_uL::synapse0x2e3eb00() {
   return (neuron0x2e3a640()*0.0138072);
}

double NNfunction_ns_chi02_uL::synapse0x2e3eb40() {
   return (neuron0x2e3a980()*-0.0203161);
}

double NNfunction_ns_chi02_uL::synapse0x2e3eb80() {
   return (neuron0x2e3acc0()*-0.0180648);
}

double NNfunction_ns_chi02_uL::synapse0x2e37a50() {
   return (neuron0x2e3b000()*0.00967366);
}

double NNfunction_ns_chi02_uL::synapse0x2e37a90() {
   return (neuron0x2e3b560()*-5.45359e-05);
}

double NNfunction_ns_chi02_uL::synapse0x2e3ecd0() {
   return (neuron0x2e3b8a0()*0.0272893);
}

double NNfunction_ns_chi02_uL::synapse0x2e3ed10() {
   return (neuron0x2e3bbe0()*-4.38054e-05);
}

double NNfunction_ns_chi02_uL::synapse0x2e3ed50() {
   return (neuron0x2e3bf20()*-0.0211447);
}

double NNfunction_ns_chi02_uL::synapse0x2e3ed90() {
   return (neuron0x2e3c260()*0.0259041);
}

double NNfunction_ns_chi02_uL::synapse0x2e3edd0() {
   return (neuron0x2e3c5a0()*-0.00232409);
}

double NNfunction_ns_chi02_uL::synapse0x2e3ee10() {
   return (neuron0x2e3c8e0()*1.59005);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f190() {
   return (neuron0x2e37c90()*0.00891416);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f1d0() {
   return (neuron0x2e37f40()*-7.0946);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f210() {
   return (neuron0x2e38280()*-3.74519);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f250() {
   return (neuron0x2e385c0()*-0.0184593);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f290() {
   return (neuron0x2e38900()*-0.00584757);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f2d0() {
   return (neuron0x2e38c40()*-0.0171577);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f310() {
   return (neuron0x2e38f80()*0.0123574);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f350() {
   return (neuron0x2e392c0()*0.0170414);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f390() {
   return (neuron0x2e39600()*0.0440256);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f3d0() {
   return (neuron0x2e39940()*0.00679088);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f410() {
   return (neuron0x2e39c80()*0.0390653);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f450() {
   return (neuron0x2e39fc0()*-0.306868);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f490() {
   return (neuron0x2e3a300()*-0.00416435);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f4d0() {
   return (neuron0x2e3a640()*-0.0136955);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f510() {
   return (neuron0x2e3a980()*-0.0262249);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f550() {
   return (neuron0x2e3acc0()*-0.0134183);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f6a0() {
   return (neuron0x2e3b000()*0.00138634);
}

double NNfunction_ns_chi02_uL::synapse0x2e3efe0() {
   return (neuron0x2e3b560()*-2.04669e-06);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f020() {
   return (neuron0x2e3b8a0()*0.0280108);
}

double NNfunction_ns_chi02_uL::synapse0x2e407e0() {
   return (neuron0x2e3bbe0()*0.0308267);
}

double NNfunction_ns_chi02_uL::synapse0x2e40820() {
   return (neuron0x2e3bf20()*0.0230478);
}

double NNfunction_ns_chi02_uL::synapse0x2e40860() {
   return (neuron0x2e3c260()*0.0187812);
}

double NNfunction_ns_chi02_uL::synapse0x2e408a0() {
   return (neuron0x2e3c5a0()*-0.00700777);
}

double NNfunction_ns_chi02_uL::synapse0x2e408e0() {
   return (neuron0x2e3c8e0()*-0.0250777);
}

double NNfunction_ns_chi02_uL::synapse0x2e40c60() {
   return (neuron0x2e37c90()*0.0710239);
}

double NNfunction_ns_chi02_uL::synapse0x2e40ca0() {
   return (neuron0x2e37f40()*0.163596);
}

double NNfunction_ns_chi02_uL::synapse0x2e40ce0() {
   return (neuron0x2e38280()*-0.296941);
}

double NNfunction_ns_chi02_uL::synapse0x2e40d20() {
   return (neuron0x2e385c0()*-0.0990451);
}

double NNfunction_ns_chi02_uL::synapse0x2e40d60() {
   return (neuron0x2e38900()*-0.12659);
}

double NNfunction_ns_chi02_uL::synapse0x2e40da0() {
   return (neuron0x2e38c40()*-0.0714252);
}

double NNfunction_ns_chi02_uL::synapse0x2e40de0() {
   return (neuron0x2e38f80()*-0.249654);
}

double NNfunction_ns_chi02_uL::synapse0x2e40e20() {
   return (neuron0x2e392c0()*-0.147767);
}

double NNfunction_ns_chi02_uL::synapse0x2e40e60() {
   return (neuron0x2e39600()*0.244556);
}

double NNfunction_ns_chi02_uL::synapse0x2c02080() {
   return (neuron0x2e39940()*-0.22608);
}

double NNfunction_ns_chi02_uL::synapse0x2c020c0() {
   return (neuron0x2e39c80()*0.267336);
}

double NNfunction_ns_chi02_uL::synapse0x2c02100() {
   return (neuron0x2e39fc0()*-0.910468);
}

double NNfunction_ns_chi02_uL::synapse0x2c02140() {
   return (neuron0x2e3a300()*0.267582);
}

double NNfunction_ns_chi02_uL::synapse0x2c02180() {
   return (neuron0x2e3a640()*-0.117596);
}

double NNfunction_ns_chi02_uL::synapse0x2c021c0() {
   return (neuron0x2e3a980()*0.208547);
}

double NNfunction_ns_chi02_uL::synapse0x2c02200() {
   return (neuron0x2e3acc0()*-0.296989);
}

double NNfunction_ns_chi02_uL::synapse0x2e40ab0() {
   return (neuron0x2e3b000()*0.66275);
}

double NNfunction_ns_chi02_uL::synapse0x2e40af0() {
   return (neuron0x2e3b560()*-0.173863);
}

double NNfunction_ns_chi02_uL::synapse0x2c02350() {
   return (neuron0x2e3b8a0()*-0.394145);
}

double NNfunction_ns_chi02_uL::synapse0x2c02390() {
   return (neuron0x2e3bbe0()*-0.49454);
}

double NNfunction_ns_chi02_uL::synapse0x2c023d0() {
   return (neuron0x2e3bf20()*0.482814);
}

double NNfunction_ns_chi02_uL::synapse0x2c02410() {
   return (neuron0x2e3c260()*-0.242173);
}

double NNfunction_ns_chi02_uL::synapse0x2c02450() {
   return (neuron0x2e3c5a0()*0.24481);
}

double NNfunction_ns_chi02_uL::synapse0x2e416b0() {
   return (neuron0x2e3c8e0()*0.198142);
}

double NNfunction_ns_chi02_uL::synapse0x2e41a30() {
   return (neuron0x2e37c90()*0.0190439);
}

double NNfunction_ns_chi02_uL::synapse0x2e41a70() {
   return (neuron0x2e37f40()*-5.87485);
}

double NNfunction_ns_chi02_uL::synapse0x2e41ab0() {
   return (neuron0x2e38280()*-2.83802);
}

double NNfunction_ns_chi02_uL::synapse0x2e41af0() {
   return (neuron0x2e385c0()*-0.0106856);
}

double NNfunction_ns_chi02_uL::synapse0x2e41b30() {
   return (neuron0x2e38900()*-0.00347994);
}

double NNfunction_ns_chi02_uL::synapse0x2e41b70() {
   return (neuron0x2e38c40()*-0.0228268);
}

double NNfunction_ns_chi02_uL::synapse0x2e41bb0() {
   return (neuron0x2e38f80()*0.00124179);
}

double NNfunction_ns_chi02_uL::synapse0x2e41bf0() {
   return (neuron0x2e392c0()*0.0130438);
}

double NNfunction_ns_chi02_uL::synapse0x2e41c30() {
   return (neuron0x2e39600()*0.0328456);
}

double NNfunction_ns_chi02_uL::synapse0x2e41c70() {
   return (neuron0x2e39940()*-0.00413963);
}

double NNfunction_ns_chi02_uL::synapse0x2e41cb0() {
   return (neuron0x2e39c80()*0.0230046);
}

double NNfunction_ns_chi02_uL::synapse0x2e41cf0() {
   return (neuron0x2e39fc0()*0.0472512);
}

double NNfunction_ns_chi02_uL::synapse0x2e41d30() {
   return (neuron0x2e3a300()*0.0079563);
}

double NNfunction_ns_chi02_uL::synapse0x2e41d70() {
   return (neuron0x2e3a640()*-0.0121488);
}

double NNfunction_ns_chi02_uL::synapse0x2e41db0() {
   return (neuron0x2e3a980()*-0.0218323);
}

double NNfunction_ns_chi02_uL::synapse0x2e41df0() {
   return (neuron0x2e3acc0()*-0.0271407);
}

double NNfunction_ns_chi02_uL::synapse0x2e41880() {
   return (neuron0x2e3b000()*0.000359474);
}

double NNfunction_ns_chi02_uL::synapse0x2e418c0() {
   return (neuron0x2e3b560()*-0.00303896);
}

double NNfunction_ns_chi02_uL::synapse0x2e41f40() {
   return (neuron0x2e3b8a0()*0.023282);
}

double NNfunction_ns_chi02_uL::synapse0x2e41f80() {
   return (neuron0x2e3bbe0()*0.0202317);
}

double NNfunction_ns_chi02_uL::synapse0x2e41fc0() {
   return (neuron0x2e3bf20()*0.0128058);
}

double NNfunction_ns_chi02_uL::synapse0x2e42000() {
   return (neuron0x2e3c260()*0.00478297);
}

double NNfunction_ns_chi02_uL::synapse0x2e42040() {
   return (neuron0x2e3c5a0()*-0.00226192);
}

double NNfunction_ns_chi02_uL::synapse0x2e42080() {
   return (neuron0x2e3c8e0()*0.00463149);
}

double NNfunction_ns_chi02_uL::synapse0x2e42400() {
   return (neuron0x2e37c90()*-0.261376);
}

double NNfunction_ns_chi02_uL::synapse0x2e42440() {
   return (neuron0x2e37f40()*-0.112468);
}

double NNfunction_ns_chi02_uL::synapse0x2e42480() {
   return (neuron0x2e38280()*-0.243333);
}

double NNfunction_ns_chi02_uL::synapse0x2e424c0() {
   return (neuron0x2e385c0()*-2.07063);
}

double NNfunction_ns_chi02_uL::synapse0x2e42500() {
   return (neuron0x2e38900()*-0.656848);
}

double NNfunction_ns_chi02_uL::synapse0x2e42540() {
   return (neuron0x2e38c40()*0.0689355);
}

double NNfunction_ns_chi02_uL::synapse0x2e42580() {
   return (neuron0x2e38f80()*0.0178415);
}

double NNfunction_ns_chi02_uL::synapse0x2e425c0() {
   return (neuron0x2e392c0()*0.00899845);
}

double NNfunction_ns_chi02_uL::synapse0x2e42600() {
   return (neuron0x2e39600()*0.100953);
}

double NNfunction_ns_chi02_uL::synapse0x2e42640() {
   return (neuron0x2e39940()*0.0947885);
}

double NNfunction_ns_chi02_uL::synapse0x2e42680() {
   return (neuron0x2e39c80()*0.219583);
}

double NNfunction_ns_chi02_uL::synapse0x2e426c0() {
   return (neuron0x2e39fc0()*0.433532);
}

double NNfunction_ns_chi02_uL::synapse0x2e42700() {
   return (neuron0x2e3a300()*0.630059);
}

double NNfunction_ns_chi02_uL::synapse0x2e42740() {
   return (neuron0x2e3a640()*0.119773);
}

double NNfunction_ns_chi02_uL::synapse0x2e42780() {
   return (neuron0x2e3a980()*-0.699157);
}

double NNfunction_ns_chi02_uL::synapse0x2e427c0() {
   return (neuron0x2e3acc0()*0.239214);
}

double NNfunction_ns_chi02_uL::synapse0x2e42250() {
   return (neuron0x2e3b000()*0.617857);
}

double NNfunction_ns_chi02_uL::synapse0x2e42290() {
   return (neuron0x2e3b560()*0.0811386);
}

double NNfunction_ns_chi02_uL::synapse0x2e42910() {
   return (neuron0x2e3b8a0()*-0.294823);
}

double NNfunction_ns_chi02_uL::synapse0x2e42950() {
   return (neuron0x2e3bbe0()*-0.450142);
}

double NNfunction_ns_chi02_uL::synapse0x2e42990() {
   return (neuron0x2e3bf20()*0.356883);
}

double NNfunction_ns_chi02_uL::synapse0x2e429d0() {
   return (neuron0x2e3c260()*-0.516845);
}

double NNfunction_ns_chi02_uL::synapse0x2e42a10() {
   return (neuron0x2e3c5a0()*0.202254);
}

double NNfunction_ns_chi02_uL::synapse0x2e42a50() {
   return (neuron0x2e3c8e0()*0.0273814);
}

double NNfunction_ns_chi02_uL::synapse0x2e3b450() {
   return (neuron0x2e37c90()*0.0135234);
}

double NNfunction_ns_chi02_uL::synapse0x2e3b490() {
   return (neuron0x2e37f40()*0.0140348);
}

double NNfunction_ns_chi02_uL::synapse0x2e3b4d0() {
   return (neuron0x2e38280()*2.40488);
}

double NNfunction_ns_chi02_uL::synapse0x2e3b510() {
   return (neuron0x2e385c0()*-0.0112707);
}

double NNfunction_ns_chi02_uL::synapse0x2e42fe0() {
   return (neuron0x2e38900()*-0.0227424);
}

double NNfunction_ns_chi02_uL::synapse0x2e43020() {
   return (neuron0x2e38c40()*-0.0173861);
}

double NNfunction_ns_chi02_uL::synapse0x2e43060() {
   return (neuron0x2e38f80()*-0.00489341);
}

double NNfunction_ns_chi02_uL::synapse0x2e430a0() {
   return (neuron0x2e392c0()*-0.00757425);
}

double NNfunction_ns_chi02_uL::synapse0x2e430e0() {
   return (neuron0x2e39600()*-0.0155304);
}

double NNfunction_ns_chi02_uL::synapse0x2e43120() {
   return (neuron0x2e39940()*-0.00229985);
}

double NNfunction_ns_chi02_uL::synapse0x2e43160() {
   return (neuron0x2e39c80()*0.00989834);
}

double NNfunction_ns_chi02_uL::synapse0x2e431a0() {
   return (neuron0x2e39fc0()*-0.165802);
}

double NNfunction_ns_chi02_uL::synapse0x2e431e0() {
   return (neuron0x2e3a300()*0.00524389);
}

double NNfunction_ns_chi02_uL::synapse0x2e43220() {
   return (neuron0x2e3a640()*-0.0251862);
}

double NNfunction_ns_chi02_uL::synapse0x2e43260() {
   return (neuron0x2e3a980()*-0.0104544);
}

double NNfunction_ns_chi02_uL::synapse0x2e432a0() {
   return (neuron0x2e3acc0()*-0.00822375);
}

double NNfunction_ns_chi02_uL::synapse0x2e42c20() {
   return (neuron0x2e3b000()*-0.0221264);
}

double NNfunction_ns_chi02_uL::synapse0x2e42c60() {
   return (neuron0x2e3b560()*0.0131208);
}

double NNfunction_ns_chi02_uL::synapse0x2e433f0() {
   return (neuron0x2e3b8a0()*-0.0199694);
}

double NNfunction_ns_chi02_uL::synapse0x2e43430() {
   return (neuron0x2e3bbe0()*0.00054906);
}

double NNfunction_ns_chi02_uL::synapse0x2e43470() {
   return (neuron0x2e3bf20()*-0.0425391);
}

double NNfunction_ns_chi02_uL::synapse0x2e434b0() {
   return (neuron0x2e3c260()*0.00259048);
}

double NNfunction_ns_chi02_uL::synapse0x2e434f0() {
   return (neuron0x2e3c5a0()*0.0209656);
}

double NNfunction_ns_chi02_uL::synapse0x2e43530() {
   return (neuron0x2e3c8e0()*2.95534);
}

double NNfunction_ns_chi02_uL::synapse0x2e438b0() {
   return (neuron0x2e37c90()*-0.0621669);
}

double NNfunction_ns_chi02_uL::synapse0x2e438f0() {
   return (neuron0x2e37f40()*-14.1635);
}

double NNfunction_ns_chi02_uL::synapse0x2e43930() {
   return (neuron0x2e38280()*0.107301);
}

double NNfunction_ns_chi02_uL::synapse0x2e43970() {
   return (neuron0x2e385c0()*0.00480934);
}

double NNfunction_ns_chi02_uL::synapse0x2e439b0() {
   return (neuron0x2e38900()*-0.013498);
}

double NNfunction_ns_chi02_uL::synapse0x2e439f0() {
   return (neuron0x2e38c40()*0.0368204);
}

double NNfunction_ns_chi02_uL::synapse0x2e43a30() {
   return (neuron0x2e38f80()*0.00678334);
}

double NNfunction_ns_chi02_uL::synapse0x2e43a70() {
   return (neuron0x2e392c0()*0.07419);
}

double NNfunction_ns_chi02_uL::synapse0x2e43ab0() {
   return (neuron0x2e39600()*0.0186595);
}

double NNfunction_ns_chi02_uL::synapse0x2e43af0() {
   return (neuron0x2e39940()*-0.000739732);
}

double NNfunction_ns_chi02_uL::synapse0x2e43b30() {
   return (neuron0x2e39c80()*0.00752543);
}

double NNfunction_ns_chi02_uL::synapse0x2e43b70() {
   return (neuron0x2e39fc0()*0.310907);
}

double NNfunction_ns_chi02_uL::synapse0x2e43bb0() {
   return (neuron0x2e3a300()*-0.0175492);
}

double NNfunction_ns_chi02_uL::synapse0x2e43bf0() {
   return (neuron0x2e3a640()*0.0088908);
}

double NNfunction_ns_chi02_uL::synapse0x2e43c30() {
   return (neuron0x2e3a980()*-0.00656686);
}

double NNfunction_ns_chi02_uL::synapse0x2e43c70() {
   return (neuron0x2e3acc0()*-0.019651);
}

double NNfunction_ns_chi02_uL::synapse0x2e43700() {
   return (neuron0x2e3b000()*0.00755759);
}

double NNfunction_ns_chi02_uL::synapse0x2e43740() {
   return (neuron0x2e3b560()*-0.0129034);
}

double NNfunction_ns_chi02_uL::synapse0x2e43dc0() {
   return (neuron0x2e3b8a0()*0.0145323);
}

double NNfunction_ns_chi02_uL::synapse0x2e43e00() {
   return (neuron0x2e3bbe0()*-0.00390742);
}

double NNfunction_ns_chi02_uL::synapse0x2e43e40() {
   return (neuron0x2e3bf20()*-0.0333638);
}

double NNfunction_ns_chi02_uL::synapse0x2e43e80() {
   return (neuron0x2e3c260()*-0.0396997);
}

double NNfunction_ns_chi02_uL::synapse0x2e43ec0() {
   return (neuron0x2e3c5a0()*-0.0069077);
}

double NNfunction_ns_chi02_uL::synapse0x2e43f00() {
   return (neuron0x2e3c8e0()*-0.00523956);
}

double NNfunction_ns_chi02_uL::synapse0x2e44280() {
   return (neuron0x2e37c90()*0.106565);
}

double NNfunction_ns_chi02_uL::synapse0x2e442c0() {
   return (neuron0x2e37f40()*1.80963);
}

double NNfunction_ns_chi02_uL::synapse0x2e44300() {
   return (neuron0x2e38280()*2.25804);
}

double NNfunction_ns_chi02_uL::synapse0x2e44340() {
   return (neuron0x2e385c0()*-0.0558614);
}

double NNfunction_ns_chi02_uL::synapse0x2e44380() {
   return (neuron0x2e38900()*0.0185124);
}

double NNfunction_ns_chi02_uL::synapse0x2e443c0() {
   return (neuron0x2e38c40()*-0.0227165);
}

double NNfunction_ns_chi02_uL::synapse0x2e44400() {
   return (neuron0x2e38f80()*-0.0166905);
}

double NNfunction_ns_chi02_uL::synapse0x2e44440() {
   return (neuron0x2e392c0()*-0.0569069);
}

double NNfunction_ns_chi02_uL::synapse0x2e44480() {
   return (neuron0x2e39600()*-0.00253004);
}

double NNfunction_ns_chi02_uL::synapse0x2e444c0() {
   return (neuron0x2e39940()*0.00293062);
}

double NNfunction_ns_chi02_uL::synapse0x2e44500() {
   return (neuron0x2e39c80()*0.00162629);
}

double NNfunction_ns_chi02_uL::synapse0x2e44540() {
   return (neuron0x2e39fc0()*-0.342317);
}

double NNfunction_ns_chi02_uL::synapse0x2e44580() {
   return (neuron0x2e3a300()*0.0317033);
}

double NNfunction_ns_chi02_uL::synapse0x2e445c0() {
   return (neuron0x2e3a640()*-0.00304785);
}

double NNfunction_ns_chi02_uL::synapse0x2e44600() {
   return (neuron0x2e3a980()*0.00272151);
}

double NNfunction_ns_chi02_uL::synapse0x2e44640() {
   return (neuron0x2e3acc0()*0.0357127);
}

double NNfunction_ns_chi02_uL::synapse0x2e440d0() {
   return (neuron0x2e3b000()*-0.0652655);
}

double NNfunction_ns_chi02_uL::synapse0x2e44110() {
   return (neuron0x2e3b560()*-0.0152441);
}

double NNfunction_ns_chi02_uL::synapse0x2e40ea0() {
   return (neuron0x2e3b8a0()*-0.0392401);
}

double NNfunction_ns_chi02_uL::synapse0x2e40ee0() {
   return (neuron0x2e3bbe0()*0.0200767);
}

double NNfunction_ns_chi02_uL::synapse0x2e40f20() {
   return (neuron0x2e3bf20()*0.0483113);
}

double NNfunction_ns_chi02_uL::synapse0x2e40f60() {
   return (neuron0x2e3c260()*-0.000525041);
}

double NNfunction_ns_chi02_uL::synapse0x2e40fa0() {
   return (neuron0x2e3c5a0()*0.0660939);
}

double NNfunction_ns_chi02_uL::synapse0x2e40fe0() {
   return (neuron0x2e3c8e0()*-0.278205);
}

double NNfunction_ns_chi02_uL::synapse0x2e41360() {
   return (neuron0x2e37c90()*-0.304328);
}

double NNfunction_ns_chi02_uL::synapse0x2e413a0() {
   return (neuron0x2e37f40()*-0.215513);
}

double NNfunction_ns_chi02_uL::synapse0x2e413e0() {
   return (neuron0x2e38280()*0.367576);
}

double NNfunction_ns_chi02_uL::synapse0x2e41420() {
   return (neuron0x2e385c0()*-0.337098);
}

double NNfunction_ns_chi02_uL::synapse0x2e41460() {
   return (neuron0x2e38900()*0.105928);
}

double NNfunction_ns_chi02_uL::synapse0x2e414a0() {
   return (neuron0x2e38c40()*-0.391047);
}

double NNfunction_ns_chi02_uL::synapse0x2e414e0() {
   return (neuron0x2e38f80()*1.33483);
}

double NNfunction_ns_chi02_uL::synapse0x2e41520() {
   return (neuron0x2e392c0()*0.587181);
}

double NNfunction_ns_chi02_uL::synapse0x2e41560() {
   return (neuron0x2e39600()*0.167353);
}

double NNfunction_ns_chi02_uL::synapse0x2e415a0() {
   return (neuron0x2e39940()*0.102812);
}

double NNfunction_ns_chi02_uL::synapse0x2e415e0() {
   return (neuron0x2e39c80()*-0.367204);
}

double NNfunction_ns_chi02_uL::synapse0x2e41620() {
   return (neuron0x2e39fc0()*-0.0030975);
}

double NNfunction_ns_chi02_uL::synapse0x2e41660() {
   return (neuron0x2e3a300()*-1.1788);
}

double NNfunction_ns_chi02_uL::synapse0x2e457a0() {
   return (neuron0x2e3a640()*0.0103);
}

double NNfunction_ns_chi02_uL::synapse0x2e457e0() {
   return (neuron0x2e3a980()*0.505335);
}

double NNfunction_ns_chi02_uL::synapse0x2e45820() {
   return (neuron0x2e3acc0()*0.462687);
}

double NNfunction_ns_chi02_uL::synapse0x2e411b0() {
   return (neuron0x2e3b000()*0.237476);
}

double NNfunction_ns_chi02_uL::synapse0x2e411f0() {
   return (neuron0x2e3b560()*0.526141);
}

double NNfunction_ns_chi02_uL::synapse0x2e45970() {
   return (neuron0x2e3b8a0()*-0.0171189);
}

double NNfunction_ns_chi02_uL::synapse0x2e459b0() {
   return (neuron0x2e3bbe0()*-0.36745);
}

double NNfunction_ns_chi02_uL::synapse0x2e459f0() {
   return (neuron0x2e3bf20()*-0.502474);
}

double NNfunction_ns_chi02_uL::synapse0x2e45a30() {
   return (neuron0x2e3c260()*0.375117);
}

double NNfunction_ns_chi02_uL::synapse0x2e45a70() {
   return (neuron0x2e3c5a0()*0.331646);
}

double NNfunction_ns_chi02_uL::synapse0x2e45ab0() {
   return (neuron0x2e3c8e0()*1.00721);
}

double NNfunction_ns_chi02_uL::synapse0x2e45e30() {
   return (neuron0x2e37c90()*-0.000716814);
}

double NNfunction_ns_chi02_uL::synapse0x2e45e70() {
   return (neuron0x2e37f40()*0.00404079);
}

double NNfunction_ns_chi02_uL::synapse0x2e45eb0() {
   return (neuron0x2e38280()*0.0276021);
}

double NNfunction_ns_chi02_uL::synapse0x2e45ef0() {
   return (neuron0x2e385c0()*-2.67076);
}

double NNfunction_ns_chi02_uL::synapse0x2e45f30() {
   return (neuron0x2e38900()*0.00344577);
}

double NNfunction_ns_chi02_uL::synapse0x2e45f70() {
   return (neuron0x2e38c40()*-0.00381176);
}

double NNfunction_ns_chi02_uL::synapse0x2e45fb0() {
   return (neuron0x2e38f80()*-0.0076467);
}

double NNfunction_ns_chi02_uL::synapse0x2e45ff0() {
   return (neuron0x2e392c0()*0.00956616);
}

double NNfunction_ns_chi02_uL::synapse0x2e46030() {
   return (neuron0x2e39600()*0.00593541);
}

double NNfunction_ns_chi02_uL::synapse0x2e46070() {
   return (neuron0x2e39940()*0.00587065);
}

double NNfunction_ns_chi02_uL::synapse0x2e460b0() {
   return (neuron0x2e39c80()*-0.00887291);
}

double NNfunction_ns_chi02_uL::synapse0x2e460f0() {
   return (neuron0x2e39fc0()*-0.0841655);
}

double NNfunction_ns_chi02_uL::synapse0x2e46130() {
   return (neuron0x2e3a300()*-0.00783687);
}

double NNfunction_ns_chi02_uL::synapse0x2e46170() {
   return (neuron0x2e3a640()*-0.0192046);
}

double NNfunction_ns_chi02_uL::synapse0x2e461b0() {
   return (neuron0x2e3a980()*-0.00194618);
}

double NNfunction_ns_chi02_uL::synapse0x2e461f0() {
   return (neuron0x2e3acc0()*-0.00379311);
}

double NNfunction_ns_chi02_uL::synapse0x2e45c80() {
   return (neuron0x2e3b000()*-0.0144036);
}

double NNfunction_ns_chi02_uL::synapse0x2e45cc0() {
   return (neuron0x2e3b560()*0.00717351);
}

double NNfunction_ns_chi02_uL::synapse0x2e46340() {
   return (neuron0x2e3b8a0()*0.0105382);
}

double NNfunction_ns_chi02_uL::synapse0x2e46380() {
   return (neuron0x2e3bbe0()*0.00287117);
}

double NNfunction_ns_chi02_uL::synapse0x2e463c0() {
   return (neuron0x2e3bf20()*0.00650633);
}

double NNfunction_ns_chi02_uL::synapse0x2e46400() {
   return (neuron0x2e3c260()*0.00907323);
}

double NNfunction_ns_chi02_uL::synapse0x2e46440() {
   return (neuron0x2e3c5a0()*-0.0098361);
}

double NNfunction_ns_chi02_uL::synapse0x2e46480() {
   return (neuron0x2e3c8e0()*-0.0180322);
}

double NNfunction_ns_chi02_uL::synapse0x2e46800() {
   return (neuron0x2e37c90()*1.74502e-05);
}

double NNfunction_ns_chi02_uL::synapse0x2e46840() {
   return (neuron0x2e37f40()*0.142109);
}

double NNfunction_ns_chi02_uL::synapse0x2e46880() {
   return (neuron0x2e38280()*-0.858008);
}

double NNfunction_ns_chi02_uL::synapse0x2e468c0() {
   return (neuron0x2e385c0()*-0.00215268);
}

double NNfunction_ns_chi02_uL::synapse0x2e46900() {
   return (neuron0x2e38900()*0.021078);
}

double NNfunction_ns_chi02_uL::synapse0x2e46940() {
   return (neuron0x2e38c40()*-0.0325051);
}

double NNfunction_ns_chi02_uL::synapse0x2e46980() {
   return (neuron0x2e38f80()*0.00108769);
}

double NNfunction_ns_chi02_uL::synapse0x2e469c0() {
   return (neuron0x2e392c0()*-0.00271213);
}

double NNfunction_ns_chi02_uL::synapse0x2e46a00() {
   return (neuron0x2e39600()*-0.00224568);
}

double NNfunction_ns_chi02_uL::synapse0x2e46a40() {
   return (neuron0x2e39940()*-0.00394066);
}

double NNfunction_ns_chi02_uL::synapse0x2e46a80() {
   return (neuron0x2e39c80()*-0.0133635);
}

double NNfunction_ns_chi02_uL::synapse0x2e46ac0() {
   return (neuron0x2e39fc0()*-0.130763);
}

double NNfunction_ns_chi02_uL::synapse0x2e46b00() {
   return (neuron0x2e3a300()*-0.00236811);
}

double NNfunction_ns_chi02_uL::synapse0x2e46b40() {
   return (neuron0x2e3a640()*-0.00588645);
}

double NNfunction_ns_chi02_uL::synapse0x2e46b80() {
   return (neuron0x2e3a980()*0.00872341);
}

double NNfunction_ns_chi02_uL::synapse0x2e46bc0() {
   return (neuron0x2e3acc0()*0.00741135);
}

double NNfunction_ns_chi02_uL::synapse0x2e46650() {
   return (neuron0x2e3b000()*0.00760288);
}

double NNfunction_ns_chi02_uL::synapse0x2e46690() {
   return (neuron0x2e3b560()*-0.00214858);
}

double NNfunction_ns_chi02_uL::synapse0x2e46d10() {
   return (neuron0x2e3b8a0()*-0.0132105);
}

double NNfunction_ns_chi02_uL::synapse0x2e46d50() {
   return (neuron0x2e3bbe0()*-0.0390006);
}

double NNfunction_ns_chi02_uL::synapse0x2e46d90() {
   return (neuron0x2e3bf20()*0.0122863);
}

double NNfunction_ns_chi02_uL::synapse0x2e46dd0() {
   return (neuron0x2e3c260()*-0.0123248);
}

double NNfunction_ns_chi02_uL::synapse0x2e46e10() {
   return (neuron0x2e3c5a0()*0.0109693);
}

double NNfunction_ns_chi02_uL::synapse0x2e46e50() {
   return (neuron0x2e3c8e0()*-0.0176891);
}

double NNfunction_ns_chi02_uL::synapse0x2e471d0() {
   return (neuron0x2e37c90()*0.00975956);
}

double NNfunction_ns_chi02_uL::synapse0x2e47210() {
   return (neuron0x2e37f40()*0.0270394);
}

double NNfunction_ns_chi02_uL::synapse0x2e47250() {
   return (neuron0x2e38280()*0.295939);
}

double NNfunction_ns_chi02_uL::synapse0x2e47290() {
   return (neuron0x2e385c0()*-0.0136749);
}

double NNfunction_ns_chi02_uL::synapse0x2e472d0() {
   return (neuron0x2e38900()*0.0221704);
}

double NNfunction_ns_chi02_uL::synapse0x2e47310() {
   return (neuron0x2e38c40()*0.0148337);
}

double NNfunction_ns_chi02_uL::synapse0x2e47350() {
   return (neuron0x2e38f80()*-0.00615286);
}

double NNfunction_ns_chi02_uL::synapse0x2e47390() {
   return (neuron0x2e392c0()*-4.2078e-05);
}

double NNfunction_ns_chi02_uL::synapse0x2e473d0() {
   return (neuron0x2e39600()*0.00319829);
}

double NNfunction_ns_chi02_uL::synapse0x2e47410() {
   return (neuron0x2e39940()*0.00701196);
}

double NNfunction_ns_chi02_uL::synapse0x2e47450() {
   return (neuron0x2e39c80()*-0.0152257);
}

double NNfunction_ns_chi02_uL::synapse0x2e47490() {
   return (neuron0x2e39fc0()*-0.145797);
}

double NNfunction_ns_chi02_uL::synapse0x2e474d0() {
   return (neuron0x2e3a300()*0.00729751);
}

double NNfunction_ns_chi02_uL::synapse0x2e47510() {
   return (neuron0x2e3a640()*-0.00542757);
}

double NNfunction_ns_chi02_uL::synapse0x2e47550() {
   return (neuron0x2e3a980()*-0.00305271);
}

double NNfunction_ns_chi02_uL::synapse0x2e47590() {
   return (neuron0x2e3acc0()*0.0255563);
}

double NNfunction_ns_chi02_uL::synapse0x2e47020() {
   return (neuron0x2e3b000()*-0.0163212);
}

double NNfunction_ns_chi02_uL::synapse0x2e47060() {
   return (neuron0x2e3b560()*-0.0291708);
}

double NNfunction_ns_chi02_uL::synapse0x2e476e0() {
   return (neuron0x2e3b8a0()*0.00612504);
}

double NNfunction_ns_chi02_uL::synapse0x2e47720() {
   return (neuron0x2e3bbe0()*-0.0122615);
}

double NNfunction_ns_chi02_uL::synapse0x2e47760() {
   return (neuron0x2e3bf20()*0.0174376);
}

double NNfunction_ns_chi02_uL::synapse0x2e477a0() {
   return (neuron0x2e3c260()*-0.0169122);
}

double NNfunction_ns_chi02_uL::synapse0x2e477e0() {
   return (neuron0x2e3c5a0()*0.00821245);
}

double NNfunction_ns_chi02_uL::synapse0x2e47820() {
   return (neuron0x2e3c8e0()*-1.7781);
}

double NNfunction_ns_chi02_uL::synapse0x2e47ba0() {
   return (neuron0x2e37c90()*-0.285091);
}

double NNfunction_ns_chi02_uL::synapse0x2e37e20() {
   return (neuron0x2e37f40()*-0.156557);
}

double NNfunction_ns_chi02_uL::synapse0x2e37e60() {
   return (neuron0x2e38280()*0.421306);
}

double NNfunction_ns_chi02_uL::synapse0x2e38160() {
   return (neuron0x2e385c0()*-0.493593);
}

double NNfunction_ns_chi02_uL::synapse0x2e381a0() {
   return (neuron0x2e38900()*0.686271);
}

double NNfunction_ns_chi02_uL::synapse0x2e384a0() {
   return (neuron0x2e38c40()*-0.0136904);
}

double NNfunction_ns_chi02_uL::synapse0x2e384e0() {
   return (neuron0x2e38f80()*0.834978);
}

double NNfunction_ns_chi02_uL::synapse0x2e387e0() {
   return (neuron0x2e392c0()*0.249904);
}

double NNfunction_ns_chi02_uL::synapse0x2e38820() {
   return (neuron0x2e39600()*0.137732);
}

double NNfunction_ns_chi02_uL::synapse0x2e38b20() {
   return (neuron0x2e39940()*-0.124182);
}

double NNfunction_ns_chi02_uL::synapse0x2e38b60() {
   return (neuron0x2e39c80()*-0.338258);
}

double NNfunction_ns_chi02_uL::synapse0x2e38e60() {
   return (neuron0x2e39fc0()*-0.0603026);
}

double NNfunction_ns_chi02_uL::synapse0x2e38ea0() {
   return (neuron0x2e3a300()*0.0158272);
}

double NNfunction_ns_chi02_uL::synapse0x2e391a0() {
   return (neuron0x2e3a640()*0.801757);
}

double NNfunction_ns_chi02_uL::synapse0x2e391e0() {
   return (neuron0x2e3a980()*-0.158414);
}

double NNfunction_ns_chi02_uL::synapse0x2e394e0() {
   return (neuron0x2e3acc0()*-0.368054);
}

double NNfunction_ns_chi02_uL::synapse0x2e39520() {
   return (neuron0x2e3b000()*-0.725465);
}

double NNfunction_ns_chi02_uL::synapse0x2e39820() {
   return (neuron0x2e3b560()*0.755625);
}

double NNfunction_ns_chi02_uL::synapse0x2e39860() {
   return (neuron0x2e3b8a0()*0.506035);
}

double NNfunction_ns_chi02_uL::synapse0x2e39b60() {
   return (neuron0x2e3bbe0()*-0.172209);
}

double NNfunction_ns_chi02_uL::synapse0x2e39ba0() {
   return (neuron0x2e3bf20()*0.181235);
}

double NNfunction_ns_chi02_uL::synapse0x2e39ea0() {
   return (neuron0x2e3c260()*0.0253662);
}

double NNfunction_ns_chi02_uL::synapse0x2e39ee0() {
   return (neuron0x2e3c5a0()*0.577904);
}

double NNfunction_ns_chi02_uL::synapse0x2e3a1e0() {
   return (neuron0x2e3c8e0()*0.420195);
}

double NNfunction_ns_chi02_uL::synapse0x2e3a220() {
   return (neuron0x2e37c90()*0.000873977);
}

double NNfunction_ns_chi02_uL::synapse0x2e3aee0() {
   return (neuron0x2e37f40()*0.0377451);
}

double NNfunction_ns_chi02_uL::synapse0x2e3af20() {
   return (neuron0x2e38280()*0.0763511);
}

double NNfunction_ns_chi02_uL::synapse0x2e479f0() {
   return (neuron0x2e385c0()*-0.209572);
}

double NNfunction_ns_chi02_uL::synapse0x2e47a30() {
   return (neuron0x2e38900()*-0.0286747);
}

double NNfunction_ns_chi02_uL::synapse0x2e3b220() {
   return (neuron0x2e38c40()*0.01258);
}

double NNfunction_ns_chi02_uL::synapse0x2e3b260() {
   return (neuron0x2e38f80()*-0.0151503);
}

double NNfunction_ns_chi02_uL::synapse0x2e3b780() {
   return (neuron0x2e392c0()*0.0119243);
}

double NNfunction_ns_chi02_uL::synapse0x2e3b7c0() {
   return (neuron0x2e39600()*-0.0343526);
}

double NNfunction_ns_chi02_uL::synapse0x2e3bac0() {
   return (neuron0x2e39940()*0.0104221);
}

double NNfunction_ns_chi02_uL::synapse0x2e3bb00() {
   return (neuron0x2e39c80()*-0.0373107);
}

double NNfunction_ns_chi02_uL::synapse0x2e3be00() {
   return (neuron0x2e39fc0()*4.06622);
}

double NNfunction_ns_chi02_uL::synapse0x2e3be40() {
   return (neuron0x2e3a300()*-0.00888732);
}

double NNfunction_ns_chi02_uL::synapse0x2e3c140() {
   return (neuron0x2e3a640()*0.0351818);
}

double NNfunction_ns_chi02_uL::synapse0x2e3c180() {
   return (neuron0x2e3a980()*0.0152599);
}

double NNfunction_ns_chi02_uL::synapse0x2e3c480() {
   return (neuron0x2e3acc0()*0.0228839);
}

double NNfunction_ns_chi02_uL::synapse0x2e3c4c0() {
   return (neuron0x2e3b000()*0.0225538);
}

double NNfunction_ns_chi02_uL::synapse0x2e3c7c0() {
   return (neuron0x2e3b560()*0.0264749);
}

double NNfunction_ns_chi02_uL::synapse0x2e3c800() {
   return (neuron0x2e3b8a0()*0.0145133);
}

double NNfunction_ns_chi02_uL::synapse0x2e3cb00() {
   return (neuron0x2e3bbe0()*0.0110667);
}

double NNfunction_ns_chi02_uL::synapse0x2e3cb40() {
   return (neuron0x2e3bf20()*0.0398318);
}

double NNfunction_ns_chi02_uL::synapse0x2e3a520() {
   return (neuron0x2e3c260()*0.0143822);
}

double NNfunction_ns_chi02_uL::synapse0x2e3a560() {
   return (neuron0x2e3c5a0()*-0.0151261);
}

double NNfunction_ns_chi02_uL::synapse0x2e49910() {
   return (neuron0x2e3c8e0()*0.124375);
}

double NNfunction_ns_chi02_uL::synapse0x2e49c90() {
   return (neuron0x2e37c90()*0.0422815);
}

double NNfunction_ns_chi02_uL::synapse0x2e49cd0() {
   return (neuron0x2e37f40()*0.0127471);
}

double NNfunction_ns_chi02_uL::synapse0x2e49d10() {
   return (neuron0x2e38280()*3.25175);
}

double NNfunction_ns_chi02_uL::synapse0x2e49d50() {
   return (neuron0x2e385c0()*-0.0250069);
}

double NNfunction_ns_chi02_uL::synapse0x2e49d90() {
   return (neuron0x2e38900()*-0.0359526);
}

double NNfunction_ns_chi02_uL::synapse0x2e49dd0() {
   return (neuron0x2e38c40()*-0.0461473);
}

double NNfunction_ns_chi02_uL::synapse0x2e49e10() {
   return (neuron0x2e38f80()*0.000280031);
}

double NNfunction_ns_chi02_uL::synapse0x2e49e50() {
   return (neuron0x2e392c0()*-0.00671255);
}

double NNfunction_ns_chi02_uL::synapse0x2e49e90() {
   return (neuron0x2e39600()*-0.0222112);
}

double NNfunction_ns_chi02_uL::synapse0x2e49ed0() {
   return (neuron0x2e39940()*-0.00265604);
}

double NNfunction_ns_chi02_uL::synapse0x2e49f10() {
   return (neuron0x2e39c80()*0.010789);
}

double NNfunction_ns_chi02_uL::synapse0x2e49f50() {
   return (neuron0x2e39fc0()*0.0347479);
}

double NNfunction_ns_chi02_uL::synapse0x2e49f90() {
   return (neuron0x2e3a300()*0.00105098);
}

double NNfunction_ns_chi02_uL::synapse0x2e49fd0() {
   return (neuron0x2e3a640()*-0.0459556);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a010() {
   return (neuron0x2e3a980()*-0.0198538);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a050() {
   return (neuron0x2e3acc0()*-0.0146835);
}

double NNfunction_ns_chi02_uL::synapse0x2e49ae0() {
   return (neuron0x2e3b000()*-0.0510357);
}

double NNfunction_ns_chi02_uL::synapse0x2e49b20() {
   return (neuron0x2e3b560()*0.0235697);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a1a0() {
   return (neuron0x2e3b8a0()*-0.0422613);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a1e0() {
   return (neuron0x2e3bbe0()*0.00135799);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a220() {
   return (neuron0x2e3bf20()*-0.0733637);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a260() {
   return (neuron0x2e3c260()*0.00182948);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a2a0() {
   return (neuron0x2e3c5a0()*0.0290787);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a2e0() {
   return (neuron0x2e3c8e0()*3.73324);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a660() {
   return (neuron0x2e37c90()*0.228184);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a6a0() {
   return (neuron0x2e37f40()*0.102469);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a6e0() {
   return (neuron0x2e38280()*0.0627904);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a720() {
   return (neuron0x2e385c0()*0.113497);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a760() {
   return (neuron0x2e38900()*-0.301559);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a7a0() {
   return (neuron0x2e38c40()*-0.00958142);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a7e0() {
   return (neuron0x2e38f80()*0.25695);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a820() {
   return (neuron0x2e392c0()*0.288847);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a860() {
   return (neuron0x2e39600()*0.266645);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a8a0() {
   return (neuron0x2e39940()*0.231108);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a8e0() {
   return (neuron0x2e39c80()*0.0914563);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a920() {
   return (neuron0x2e39fc0()*0.867234);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a960() {
   return (neuron0x2e3a300()*-0.0428992);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a9a0() {
   return (neuron0x2e3a640()*0.512811);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a9e0() {
   return (neuron0x2e3a980()*-0.063703);
}

double NNfunction_ns_chi02_uL::synapse0x2e4aa20() {
   return (neuron0x2e3acc0()*-0.852834);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a4b0() {
   return (neuron0x2e3b000()*-0.164515);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a4f0() {
   return (neuron0x2e3b560()*0.226313);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ab70() {
   return (neuron0x2e3b8a0()*0.053163);
}

double NNfunction_ns_chi02_uL::synapse0x2e4abb0() {
   return (neuron0x2e3bbe0()*0.414346);
}

double NNfunction_ns_chi02_uL::synapse0x2e4abf0() {
   return (neuron0x2e3bf20()*0.318532);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ac30() {
   return (neuron0x2e3c260()*-0.0476235);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ac70() {
   return (neuron0x2e3c5a0()*-0.241654);
}

double NNfunction_ns_chi02_uL::synapse0x2e4acb0() {
   return (neuron0x2e3c8e0()*-0.587694);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b030() {
   return (neuron0x2e37c90()*0.0135462);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b070() {
   return (neuron0x2e37f40()*0.178458);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b0b0() {
   return (neuron0x2e38280()*0.219275);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b0f0() {
   return (neuron0x2e385c0()*-0.167627);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b130() {
   return (neuron0x2e38900()*0.0737618);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b170() {
   return (neuron0x2e38c40()*0.0229335);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b1b0() {
   return (neuron0x2e38f80()*0.0767289);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b1f0() {
   return (neuron0x2e392c0()*-0.0299473);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b230() {
   return (neuron0x2e39600()*0.0250178);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b270() {
   return (neuron0x2e39940()*-0.0580742);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b2b0() {
   return (neuron0x2e39c80()*0.0348945);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b2f0() {
   return (neuron0x2e39fc0()*-0.443361);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b330() {
   return (neuron0x2e3a300()*0.0553866);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b370() {
   return (neuron0x2e3a640()*-0.0492233);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b3b0() {
   return (neuron0x2e3a980()*0.138267);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b3f0() {
   return (neuron0x2e3acc0()*0.104635);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ae80() {
   return (neuron0x2e3b000()*-0.0832134);
}

double NNfunction_ns_chi02_uL::synapse0x2e4aec0() {
   return (neuron0x2e3b560()*-0.00645063);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b540() {
   return (neuron0x2e3b8a0()*0.0154031);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b580() {
   return (neuron0x2e3bbe0()*-0.00418028);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b5c0() {
   return (neuron0x2e3bf20()*-0.0608123);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b600() {
   return (neuron0x2e3c260()*0.0260299);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b640() {
   return (neuron0x2e3c5a0()*0.0347879);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b680() {
   return (neuron0x2e3c8e0()*0.000535605);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ba00() {
   return (neuron0x2e37c90()*-0.016362);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ba40() {
   return (neuron0x2e37f40()*-10.3799);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ba80() {
   return (neuron0x2e38280()*-0.127962);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bac0() {
   return (neuron0x2e385c0()*0.0118775);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bb00() {
   return (neuron0x2e38900()*-0.0452937);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bb40() {
   return (neuron0x2e38c40()*0.00634922);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bb80() {
   return (neuron0x2e38f80()*-0.0452009);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bbc0() {
   return (neuron0x2e392c0()*0.00121572);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bc00() {
   return (neuron0x2e39600()*-0.0320354);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bc40() {
   return (neuron0x2e39940()*0.0243008);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bc80() {
   return (neuron0x2e39c80()*0.0141897);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bcc0() {
   return (neuron0x2e39fc0()*0.434871);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bd00() {
   return (neuron0x2e3a300()*-0.0432565);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bd40() {
   return (neuron0x2e3a640()*-0.0203353);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bd80() {
   return (neuron0x2e3a980()*0.00708585);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bdc0() {
   return (neuron0x2e3acc0()*0.0199115);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b850() {
   return (neuron0x2e3b000()*-0.0270193);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b890() {
   return (neuron0x2e3b560()*-0.0220107);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bf10() {
   return (neuron0x2e3b8a0()*-0.0190818);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bf50() {
   return (neuron0x2e3bbe0()*-0.00274276);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bf90() {
   return (neuron0x2e3bf20()*-0.0697034);
}

double NNfunction_ns_chi02_uL::synapse0x2e4bfd0() {
   return (neuron0x2e3c260()*-0.0396552);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c010() {
   return (neuron0x2e3c5a0()*0.00715635);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c050() {
   return (neuron0x2e3c8e0()*6.02309);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c3d0() {
   return (neuron0x2e37c90()*-0.0633416);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c410() {
   return (neuron0x2e37f40()*8.13343);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c450() {
   return (neuron0x2e38280()*-4.57279);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c490() {
   return (neuron0x2e385c0()*0.0108748);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c4d0() {
   return (neuron0x2e38900()*0.0178611);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c510() {
   return (neuron0x2e38c40()*0.0348358);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c550() {
   return (neuron0x2e38f80()*-0.011406);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c590() {
   return (neuron0x2e392c0()*0.0143626);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c5d0() {
   return (neuron0x2e39600()*-0.0346363);
}

double NNfunction_ns_chi02_uL::synapse0x2e44790() {
   return (neuron0x2e39940()*0.0148285);
}

double NNfunction_ns_chi02_uL::synapse0x2e447d0() {
   return (neuron0x2e39c80()*0.028069);
}

double NNfunction_ns_chi02_uL::synapse0x2e44810() {
   return (neuron0x2e39fc0()*-0.0329634);
}

double NNfunction_ns_chi02_uL::synapse0x2e44850() {
   return (neuron0x2e3a300()*-0.0211028);
}

double NNfunction_ns_chi02_uL::synapse0x2e44890() {
   return (neuron0x2e3a640()*-0.0148817);
}

double NNfunction_ns_chi02_uL::synapse0x2e448d0() {
   return (neuron0x2e3a980()*-0.00658477);
}

double NNfunction_ns_chi02_uL::synapse0x2e44910() {
   return (neuron0x2e3acc0()*0.0255836);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c220() {
   return (neuron0x2e3b000()*0.00252103);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c260() {
   return (neuron0x2e3b560()*-9.6445e-05);
}

double NNfunction_ns_chi02_uL::synapse0x2e44a60() {
   return (neuron0x2e3b8a0()*-0.0114847);
}

double NNfunction_ns_chi02_uL::synapse0x2e44aa0() {
   return (neuron0x2e3bbe0()*0.0347171);
}

double NNfunction_ns_chi02_uL::synapse0x2e44ae0() {
   return (neuron0x2e3bf20()*-0.0219528);
}

double NNfunction_ns_chi02_uL::synapse0x2e44b20() {
   return (neuron0x2e3c260()*-0.0237439);
}

double NNfunction_ns_chi02_uL::synapse0x2e44b60() {
   return (neuron0x2e3c5a0()*-0.00520534);
}

double NNfunction_ns_chi02_uL::synapse0x2e44ba0() {
   return (neuron0x2e3c8e0()*-0.0302854);
}

double NNfunction_ns_chi02_uL::synapse0x2e44f20() {
   return (neuron0x2e37c90()*-0.0192264);
}

double NNfunction_ns_chi02_uL::synapse0x2e44f60() {
   return (neuron0x2e37f40()*-0.0201445);
}

double NNfunction_ns_chi02_uL::synapse0x2e44fa0() {
   return (neuron0x2e38280()*-0.0631897);
}

double NNfunction_ns_chi02_uL::synapse0x2e44fe0() {
   return (neuron0x2e385c0()*-1.37585);
}

double NNfunction_ns_chi02_uL::synapse0x2e45020() {
   return (neuron0x2e38900()*-0.00209509);
}

double NNfunction_ns_chi02_uL::synapse0x2e45060() {
   return (neuron0x2e38c40()*0.0413039);
}

double NNfunction_ns_chi02_uL::synapse0x2e450a0() {
   return (neuron0x2e38f80()*0.0136853);
}

double NNfunction_ns_chi02_uL::synapse0x2e450e0() {
   return (neuron0x2e392c0()*-0.00190213);
}

double NNfunction_ns_chi02_uL::synapse0x2e45120() {
   return (neuron0x2e39600()*-0.0275951);
}

double NNfunction_ns_chi02_uL::synapse0x2e45160() {
   return (neuron0x2e39940()*-0.0180961);
}

double NNfunction_ns_chi02_uL::synapse0x2e451a0() {
   return (neuron0x2e39c80()*0.00626815);
}

double NNfunction_ns_chi02_uL::synapse0x2e451e0() {
   return (neuron0x2e39fc0()*-0.41476);
}

double NNfunction_ns_chi02_uL::synapse0x2e45220() {
   return (neuron0x2e3a300()*0.0191878);
}

double NNfunction_ns_chi02_uL::synapse0x2e45260() {
   return (neuron0x2e3a640()*-0.0293772);
}

double NNfunction_ns_chi02_uL::synapse0x2e452a0() {
   return (neuron0x2e3a980()*0.0601326);
}

double NNfunction_ns_chi02_uL::synapse0x2e452e0() {
   return (neuron0x2e3acc0()*0.0309297);
}

double NNfunction_ns_chi02_uL::synapse0x2e44d70() {
   return (neuron0x2e3b000()*-0.0486632);
}

double NNfunction_ns_chi02_uL::synapse0x2e44db0() {
   return (neuron0x2e3b560()*0.0012397);
}

double NNfunction_ns_chi02_uL::synapse0x2e45430() {
   return (neuron0x2e3b8a0()*0.0228577);
}

double NNfunction_ns_chi02_uL::synapse0x2e45470() {
   return (neuron0x2e3bbe0()*0.00654839);
}

double NNfunction_ns_chi02_uL::synapse0x2e454b0() {
   return (neuron0x2e3bf20()*0.0140084);
}

double NNfunction_ns_chi02_uL::synapse0x2e454f0() {
   return (neuron0x2e3c260()*-0.00442188);
}

double NNfunction_ns_chi02_uL::synapse0x2e45530() {
   return (neuron0x2e3c5a0()*-0.0159329);
}

double NNfunction_ns_chi02_uL::synapse0x2e45570() {
   return (neuron0x2e3c8e0()*-0.0213961);
}

double NNfunction_ns_chi02_uL::synapse0x2e45740() {
   return (neuron0x2e37c90()*0.00616735);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e7d0() {
   return (neuron0x2e37f40()*-2.83257);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e810() {
   return (neuron0x2e38280()*-1.05151);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e850() {
   return (neuron0x2e385c0()*0.0162302);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e890() {
   return (neuron0x2e38900()*-0.0358533);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e8d0() {
   return (neuron0x2e38c40()*-0.011821);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e910() {
   return (neuron0x2e38f80()*0.0164493);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e950() {
   return (neuron0x2e392c0()*-0.00367588);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e990() {
   return (neuron0x2e39600()*0.0101887);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e9d0() {
   return (neuron0x2e39940()*0.00173386);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ea10() {
   return (neuron0x2e39c80()*0.0294067);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ea50() {
   return (neuron0x2e39fc0()*-0.54775);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ea90() {
   return (neuron0x2e3a300()*-0.0157956);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ead0() {
   return (neuron0x2e3a640()*-0.000802311);
}

double NNfunction_ns_chi02_uL::synapse0x2e4eb10() {
   return (neuron0x2e3a980()*0.035147);
}

double NNfunction_ns_chi02_uL::synapse0x2e4eb50() {
   return (neuron0x2e3acc0()*-0.00196007);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e620() {
   return (neuron0x2e3b000()*0.000641381);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e660() {
   return (neuron0x2e3b560()*0.00715589);
}

double NNfunction_ns_chi02_uL::synapse0x2e4eca0() {
   return (neuron0x2e3b8a0()*-0.00131059);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ece0() {
   return (neuron0x2e3bbe0()*0.0146119);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ed20() {
   return (neuron0x2e3bf20()*-0.00102221);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ed60() {
   return (neuron0x2e3c260()*-0.00483329);
}

double NNfunction_ns_chi02_uL::synapse0x2e4eda0() {
   return (neuron0x2e3c5a0()*-0.0384846);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ede0() {
   return (neuron0x2e3c8e0()*-1.60232);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f160() {
   return (neuron0x2e37c90()*0.0704411);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f1a0() {
   return (neuron0x2e37f40()*-0.0482031);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f1e0() {
   return (neuron0x2e38280()*-0.881744);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f220() {
   return (neuron0x2e385c0()*0.0237382);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f260() {
   return (neuron0x2e38900()*-0.00389341);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f2a0() {
   return (neuron0x2e38c40()*0.00496907);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f2e0() {
   return (neuron0x2e38f80()*-0.00455842);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f320() {
   return (neuron0x2e392c0()*0.000161057);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f360() {
   return (neuron0x2e39600()*-0.00867113);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f3a0() {
   return (neuron0x2e39940()*-0.00214736);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f3e0() {
   return (neuron0x2e39c80()*-0.000280689);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f420() {
   return (neuron0x2e39fc0()*-0.346934);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f460() {
   return (neuron0x2e3a300()*0.00132222);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f4a0() {
   return (neuron0x2e3a640()*0.00174033);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f4e0() {
   return (neuron0x2e3a980()*0.00206312);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f520() {
   return (neuron0x2e3acc0()*-0.0144375);
}

double NNfunction_ns_chi02_uL::synapse0x2e4efb0() {
   return (neuron0x2e3b000()*0.00946417);
}

double NNfunction_ns_chi02_uL::synapse0x2e4eff0() {
   return (neuron0x2e3b560()*0.00824976);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f670() {
   return (neuron0x2e3b8a0()*-0.0075967);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f6b0() {
   return (neuron0x2e3bbe0()*0.0143188);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f6f0() {
   return (neuron0x2e3bf20()*0.000749579);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f730() {
   return (neuron0x2e3c260()*0.00746047);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f770() {
   return (neuron0x2e3c5a0()*-0.0179801);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f7b0() {
   return (neuron0x2e3c8e0()*-2.47424);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fb30() {
   return (neuron0x2e37c90()*-0.42726);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fb70() {
   return (neuron0x2e37f40()*-0.383528);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fbb0() {
   return (neuron0x2e38280()*-0.266913);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fbf0() {
   return (neuron0x2e385c0()*0.475675);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fc30() {
   return (neuron0x2e38900()*-0.65701);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fc70() {
   return (neuron0x2e38c40()*0.242824);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fcb0() {
   return (neuron0x2e38f80()*-0.316347);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fcf0() {
   return (neuron0x2e392c0()*0.0836483);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fd30() {
   return (neuron0x2e39600()*-0.177257);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fd70() {
   return (neuron0x2e39940()*0.509447);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fdb0() {
   return (neuron0x2e39c80()*0.636771);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fdf0() {
   return (neuron0x2e39fc0()*-0.39426);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fe30() {
   return (neuron0x2e3a300()*-0.00472888);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fe70() {
   return (neuron0x2e3a640()*-0.294836);
}

double NNfunction_ns_chi02_uL::synapse0x2e4feb0() {
   return (neuron0x2e3a980()*-0.365207);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fef0() {
   return (neuron0x2e3acc0()*-0.137971);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f980() {
   return (neuron0x2e3b000()*0.255858);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f9c0() {
   return (neuron0x2e3b560()*0.386007);
}

double NNfunction_ns_chi02_uL::synapse0x2e50040() {
   return (neuron0x2e3b8a0()*-0.729383);
}

double NNfunction_ns_chi02_uL::synapse0x2e50080() {
   return (neuron0x2e3bbe0()*-1.23588);
}

double NNfunction_ns_chi02_uL::synapse0x2e500c0() {
   return (neuron0x2e3bf20()*0.796073);
}

double NNfunction_ns_chi02_uL::synapse0x2e50100() {
   return (neuron0x2e3c260()*-0.313408);
}

double NNfunction_ns_chi02_uL::synapse0x2e50140() {
   return (neuron0x2e3c5a0()*-0.279352);
}

double NNfunction_ns_chi02_uL::synapse0x2e50180() {
   return (neuron0x2e3c8e0()*0.788385);
}

double NNfunction_ns_chi02_uL::synapse0x2e50500() {
   return (neuron0x2e37c90()*-0.00386038);
}

double NNfunction_ns_chi02_uL::synapse0x2e50540() {
   return (neuron0x2e37f40()*0.00472211);
}

double NNfunction_ns_chi02_uL::synapse0x2e50580() {
   return (neuron0x2e38280()*-0.0140061);
}

double NNfunction_ns_chi02_uL::synapse0x2e505c0() {
   return (neuron0x2e385c0()*-2.37993);
}

double NNfunction_ns_chi02_uL::synapse0x2e50600() {
   return (neuron0x2e38900()*-0.0143209);
}

double NNfunction_ns_chi02_uL::synapse0x2e50640() {
   return (neuron0x2e38c40()*-0.0023016);
}

double NNfunction_ns_chi02_uL::synapse0x2e50680() {
   return (neuron0x2e38f80()*-0.00843728);
}

double NNfunction_ns_chi02_uL::synapse0x2e506c0() {
   return (neuron0x2e392c0()*0.00678952);
}

double NNfunction_ns_chi02_uL::synapse0x2e50700() {
   return (neuron0x2e39600()*0.00780039);
}

double NNfunction_ns_chi02_uL::synapse0x2e50740() {
   return (neuron0x2e39940()*0.0131819);
}

double NNfunction_ns_chi02_uL::synapse0x2e50780() {
   return (neuron0x2e39c80()*-0.000948716);
}

double NNfunction_ns_chi02_uL::synapse0x2e507c0() {
   return (neuron0x2e39fc0()*0.587427);
}

double NNfunction_ns_chi02_uL::synapse0x2e50800() {
   return (neuron0x2e3a300()*-0.00433822);
}

double NNfunction_ns_chi02_uL::synapse0x2e50840() {
   return (neuron0x2e3a640()*0.0109713);
}

double NNfunction_ns_chi02_uL::synapse0x2e50880() {
   return (neuron0x2e3a980()*-0.0163948);
}

double NNfunction_ns_chi02_uL::synapse0x2e508c0() {
   return (neuron0x2e3acc0()*-0.0090868);
}

double NNfunction_ns_chi02_uL::synapse0x2e50350() {
   return (neuron0x2e3b000()*0.0124359);
}

double NNfunction_ns_chi02_uL::synapse0x2e50390() {
   return (neuron0x2e3b560()*0.00660739);
}

double NNfunction_ns_chi02_uL::synapse0x2e50a10() {
   return (neuron0x2e3b8a0()*-0.003468);
}

double NNfunction_ns_chi02_uL::synapse0x2e50a50() {
   return (neuron0x2e3bbe0()*0.00176626);
}

double NNfunction_ns_chi02_uL::synapse0x2e50a90() {
   return (neuron0x2e3bf20()*0.0101395);
}

double NNfunction_ns_chi02_uL::synapse0x2e50ad0() {
   return (neuron0x2e3c260()*-0.00472053);
}

double NNfunction_ns_chi02_uL::synapse0x2e50b10() {
   return (neuron0x2e3c5a0()*-0.00816814);
}

double NNfunction_ns_chi02_uL::synapse0x2e50b50() {
   return (neuron0x2e3c8e0()*-0.0447761);
}

double NNfunction_ns_chi02_uL::synapse0x2e50ed0() {
   return (neuron0x2e37c90()*-0.0187185);
}

double NNfunction_ns_chi02_uL::synapse0x2e50f10() {
   return (neuron0x2e37f40()*0.287591);
}

double NNfunction_ns_chi02_uL::synapse0x2e50f50() {
   return (neuron0x2e38280()*-0.814537);
}

double NNfunction_ns_chi02_uL::synapse0x2e50f90() {
   return (neuron0x2e385c0()*-0.318656);
}

double NNfunction_ns_chi02_uL::synapse0x2e50fd0() {
   return (neuron0x2e38900()*0.318624);
}

double NNfunction_ns_chi02_uL::synapse0x2e51010() {
   return (neuron0x2e38c40()*0.440953);
}

double NNfunction_ns_chi02_uL::synapse0x2e51050() {
   return (neuron0x2e38f80()*-0.279764);
}

double NNfunction_ns_chi02_uL::synapse0x2e51090() {
   return (neuron0x2e392c0()*-1.41863);
}

double NNfunction_ns_chi02_uL::synapse0x2e510d0() {
   return (neuron0x2e39600()*-0.0781326);
}

double NNfunction_ns_chi02_uL::synapse0x2e51110() {
   return (neuron0x2e39940()*-0.369612);
}

double NNfunction_ns_chi02_uL::synapse0x2e51150() {
   return (neuron0x2e39c80()*0.214343);
}

double NNfunction_ns_chi02_uL::synapse0x2e51190() {
   return (neuron0x2e39fc0()*0.0418853);
}

double NNfunction_ns_chi02_uL::synapse0x2e511d0() {
   return (neuron0x2e3a300()*-0.0395738);
}

double NNfunction_ns_chi02_uL::synapse0x2e51210() {
   return (neuron0x2e3a640()*-0.0344638);
}

double NNfunction_ns_chi02_uL::synapse0x2e51250() {
   return (neuron0x2e3a980()*0.516183);
}

double NNfunction_ns_chi02_uL::synapse0x2e51290() {
   return (neuron0x2e3acc0()*-0.673541);
}

double NNfunction_ns_chi02_uL::synapse0x2e50d20() {
   return (neuron0x2e3b000()*0.372548);
}

double NNfunction_ns_chi02_uL::synapse0x2e50d60() {
   return (neuron0x2e3b560()*0.861157);
}

double NNfunction_ns_chi02_uL::synapse0x2e513e0() {
   return (neuron0x2e3b8a0()*0.0968772);
}

double NNfunction_ns_chi02_uL::synapse0x2e51420() {
   return (neuron0x2e3bbe0()*-0.306945);
}

double NNfunction_ns_chi02_uL::synapse0x2e51460() {
   return (neuron0x2e3bf20()*-0.771357);
}

double NNfunction_ns_chi02_uL::synapse0x2e514a0() {
   return (neuron0x2e3c260()*0.255866);
}

double NNfunction_ns_chi02_uL::synapse0x2e514e0() {
   return (neuron0x2e3c5a0()*0.951866);
}

double NNfunction_ns_chi02_uL::synapse0x2e51520() {
   return (neuron0x2e3c8e0()*0.286805);
}

double NNfunction_ns_chi02_uL::synapse0x2e518a0() {
   return (neuron0x2e37c90()*0.589106);
}

double NNfunction_ns_chi02_uL::synapse0x2e518e0() {
   return (neuron0x2e37f40()*0.169854);
}

double NNfunction_ns_chi02_uL::synapse0x2e51920() {
   return (neuron0x2e38280()*0.225946);
}

double NNfunction_ns_chi02_uL::synapse0x2e51960() {
   return (neuron0x2e385c0()*0.39054);
}

double NNfunction_ns_chi02_uL::synapse0x2e519a0() {
   return (neuron0x2e38900()*1.11345);
}

double NNfunction_ns_chi02_uL::synapse0x2e519e0() {
   return (neuron0x2e38c40()*0.354708);
}

double NNfunction_ns_chi02_uL::synapse0x2e51a20() {
   return (neuron0x2e38f80()*-0.18839);
}

double NNfunction_ns_chi02_uL::synapse0x2e51a60() {
   return (neuron0x2e392c0()*-0.129106);
}

double NNfunction_ns_chi02_uL::synapse0x2e51aa0() {
   return (neuron0x2e39600()*-0.892842);
}

double NNfunction_ns_chi02_uL::synapse0x2e51ae0() {
   return (neuron0x2e39940()*-0.119692);
}

double NNfunction_ns_chi02_uL::synapse0x2e51b20() {
   return (neuron0x2e39c80()*-0.101899);
}

double NNfunction_ns_chi02_uL::synapse0x2e51b60() {
   return (neuron0x2e39fc0()*0.592324);
}

double NNfunction_ns_chi02_uL::synapse0x2e51ba0() {
   return (neuron0x2e3a300()*-0.160475);
}

double NNfunction_ns_chi02_uL::synapse0x2e51be0() {
   return (neuron0x2e3a640()*0.24525);
}

double NNfunction_ns_chi02_uL::synapse0x2e51c20() {
   return (neuron0x2e3a980()*1.00096);
}

double NNfunction_ns_chi02_uL::synapse0x2e51c60() {
   return (neuron0x2e3acc0()*0.149336);
}

double NNfunction_ns_chi02_uL::synapse0x2e516f0() {
   return (neuron0x2e3b000()*-0.749537);
}

double NNfunction_ns_chi02_uL::synapse0x2e51730() {
   return (neuron0x2e3b560()*0.123316);
}

double NNfunction_ns_chi02_uL::synapse0x2e51db0() {
   return (neuron0x2e3b8a0()*1.02015);
}

double NNfunction_ns_chi02_uL::synapse0x2e51df0() {
   return (neuron0x2e3bbe0()*0.554956);
}

double NNfunction_ns_chi02_uL::synapse0x2e51e30() {
   return (neuron0x2e3bf20()*0.284091);
}

double NNfunction_ns_chi02_uL::synapse0x2e51e70() {
   return (neuron0x2e3c260()*-0.028696);
}

double NNfunction_ns_chi02_uL::synapse0x2e51eb0() {
   return (neuron0x2e3c5a0()*-0.506107);
}

double NNfunction_ns_chi02_uL::synapse0x2e51ef0() {
   return (neuron0x2e3c8e0()*-0.10076);
}

double NNfunction_ns_chi02_uL::synapse0x2e52270() {
   return (neuron0x2e37c90()*0.017889);
}

double NNfunction_ns_chi02_uL::synapse0x2e522b0() {
   return (neuron0x2e37f40()*-0.0498532);
}

double NNfunction_ns_chi02_uL::synapse0x2e522f0() {
   return (neuron0x2e38280()*-0.167624);
}

double NNfunction_ns_chi02_uL::synapse0x2e52330() {
   return (neuron0x2e385c0()*0.10334);
}

double NNfunction_ns_chi02_uL::synapse0x2e52370() {
   return (neuron0x2e38900()*-0.139292);
}

double NNfunction_ns_chi02_uL::synapse0x2e523b0() {
   return (neuron0x2e38c40()*-0.055395);
}

double NNfunction_ns_chi02_uL::synapse0x2e523f0() {
   return (neuron0x2e38f80()*0.024348);
}

double NNfunction_ns_chi02_uL::synapse0x2e52430() {
   return (neuron0x2e392c0()*-0.158559);
}

double NNfunction_ns_chi02_uL::synapse0x2e52470() {
   return (neuron0x2e39600()*0.916458);
}

double NNfunction_ns_chi02_uL::synapse0x2e524b0() {
   return (neuron0x2e39940()*0.420097);
}

double NNfunction_ns_chi02_uL::synapse0x2e524f0() {
   return (neuron0x2e39c80()*-0.00784601);
}

double NNfunction_ns_chi02_uL::synapse0x2e52530() {
   return (neuron0x2e39fc0()*0.664746);
}

double NNfunction_ns_chi02_uL::synapse0x2e52570() {
   return (neuron0x2e3a300()*0.0349649);
}

double NNfunction_ns_chi02_uL::synapse0x2e525b0() {
   return (neuron0x2e3a640()*-0.0724492);
}

double NNfunction_ns_chi02_uL::synapse0x2e525f0() {
   return (neuron0x2e3a980()*0.0841755);
}

double NNfunction_ns_chi02_uL::synapse0x2e52630() {
   return (neuron0x2e3acc0()*-0.174931);
}

double NNfunction_ns_chi02_uL::synapse0x2e520c0() {
   return (neuron0x2e3b000()*0.132337);
}

double NNfunction_ns_chi02_uL::synapse0x2e52100() {
   return (neuron0x2e3b560()*0.198271);
}

double NNfunction_ns_chi02_uL::synapse0x2e52780() {
   return (neuron0x2e3b8a0()*-0.559567);
}

double NNfunction_ns_chi02_uL::synapse0x2e527c0() {
   return (neuron0x2e3bbe0()*0.0896254);
}

double NNfunction_ns_chi02_uL::synapse0x2e52800() {
   return (neuron0x2e3bf20()*-0.181781);
}

double NNfunction_ns_chi02_uL::synapse0x2e52840() {
   return (neuron0x2e3c260()*-0.0319041);
}

double NNfunction_ns_chi02_uL::synapse0x2e52880() {
   return (neuron0x2e3c5a0()*0.228304);
}

double NNfunction_ns_chi02_uL::synapse0x2e528c0() {
   return (neuron0x2e3c8e0()*-0.897135);
}

double NNfunction_ns_chi02_uL::synapse0x2e52c40() {
   return (neuron0x2e37c90()*-0.135955);
}

double NNfunction_ns_chi02_uL::synapse0x2e52c80() {
   return (neuron0x2e37f40()*-2.80991);
}

double NNfunction_ns_chi02_uL::synapse0x2e52cc0() {
   return (neuron0x2e38280()*0.336658);
}

double NNfunction_ns_chi02_uL::synapse0x2e52d00() {
   return (neuron0x2e385c0()*-0.0438862);
}

double NNfunction_ns_chi02_uL::synapse0x2e52d40() {
   return (neuron0x2e38900()*-0.0129182);
}

double NNfunction_ns_chi02_uL::synapse0x2e52d80() {
   return (neuron0x2e38c40()*-0.0424095);
}

double NNfunction_ns_chi02_uL::synapse0x2e52dc0() {
   return (neuron0x2e38f80()*0.0006729);
}

double NNfunction_ns_chi02_uL::synapse0x2e52e00() {
   return (neuron0x2e392c0()*-0.0014675);
}

double NNfunction_ns_chi02_uL::synapse0x2e52e40() {
   return (neuron0x2e39600()*0.0368647);
}

double NNfunction_ns_chi02_uL::synapse0x2e52e80() {
   return (neuron0x2e39940()*0.0145282);
}

double NNfunction_ns_chi02_uL::synapse0x2e52ec0() {
   return (neuron0x2e39c80()*0.0543582);
}

double NNfunction_ns_chi02_uL::synapse0x2e52f00() {
   return (neuron0x2e39fc0()*-0.442184);
}

double NNfunction_ns_chi02_uL::synapse0x2e52f40() {
   return (neuron0x2e3a300()*0.0183519);
}

double NNfunction_ns_chi02_uL::synapse0x2e52f80() {
   return (neuron0x2e3a640()*0.00687643);
}

double NNfunction_ns_chi02_uL::synapse0x2e52fc0() {
   return (neuron0x2e3a980()*-0.0276546);
}

double NNfunction_ns_chi02_uL::synapse0x2e53000() {
   return (neuron0x2e3acc0()*-0.0136814);
}

double NNfunction_ns_chi02_uL::synapse0x2e52a90() {
   return (neuron0x2e3b000()*-0.0760003);
}

double NNfunction_ns_chi02_uL::synapse0x2e52ad0() {
   return (neuron0x2e3b560()*0.0357199);
}

double NNfunction_ns_chi02_uL::synapse0x2e53150() {
   return (neuron0x2e3b8a0()*0.0267734);
}

double NNfunction_ns_chi02_uL::synapse0x2e53190() {
   return (neuron0x2e3bbe0()*0.0173878);
}

double NNfunction_ns_chi02_uL::synapse0x2e531d0() {
   return (neuron0x2e3bf20()*0.0225233);
}

double NNfunction_ns_chi02_uL::synapse0x2e53210() {
   return (neuron0x2e3c260()*-0.0145235);
}

double NNfunction_ns_chi02_uL::synapse0x2e53250() {
   return (neuron0x2e3c5a0()*-0.022023);
}

double NNfunction_ns_chi02_uL::synapse0x2e53290() {
   return (neuron0x2e3c8e0()*1.76618);
}

double NNfunction_ns_chi02_uL::synapse0x2e53610() {
   return (neuron0x2e37c90()*0.0406821);
}

double NNfunction_ns_chi02_uL::synapse0x2e47be0() {
   return (neuron0x2e37f40()*11.6818);
}

double NNfunction_ns_chi02_uL::synapse0x2e47c20() {
   return (neuron0x2e38280()*-0.251001);
}

double NNfunction_ns_chi02_uL::synapse0x2e47c60() {
   return (neuron0x2e385c0()*-0.00462602);
}

double NNfunction_ns_chi02_uL::synapse0x2e47eb0() {
   return (neuron0x2e38900()*0.0188118);
}

double NNfunction_ns_chi02_uL::synapse0x2e47ef0() {
   return (neuron0x2e38c40()*-0.0273598);
}

double NNfunction_ns_chi02_uL::synapse0x2e47f30() {
   return (neuron0x2e38f80()*0.000597379);
}

double NNfunction_ns_chi02_uL::synapse0x2e48180() {
   return (neuron0x2e392c0()*-0.0632814);
}

double NNfunction_ns_chi02_uL::synapse0x2e481c0() {
   return (neuron0x2e39600()*-0.0205179);
}

double NNfunction_ns_chi02_uL::synapse0x2e48410() {
   return (neuron0x2e39940()*-0.00391053);
}

double NNfunction_ns_chi02_uL::synapse0x2e48450() {
   return (neuron0x2e39c80()*-0.00785475);
}

double NNfunction_ns_chi02_uL::synapse0x2e48490() {
   return (neuron0x2e39fc0()*-0.297399);
}

double NNfunction_ns_chi02_uL::synapse0x2e486e0() {
   return (neuron0x2e3a300()*0.0130149);
}

double NNfunction_ns_chi02_uL::synapse0x2e48720() {
   return (neuron0x2e3a640()*-0.00676638);
}

double NNfunction_ns_chi02_uL::synapse0x2e48970() {
   return (neuron0x2e3a980()*0.00548958);
}

double NNfunction_ns_chi02_uL::synapse0x2e489b0() {
   return (neuron0x2e3acc0()*0.0150415);
}

double NNfunction_ns_chi02_uL::synapse0x2e53460() {
   return (neuron0x2e3b000()*-0.00478139);
}

double NNfunction_ns_chi02_uL::synapse0x2e534a0() {
   return (neuron0x2e3b560()*0.0138511);
}

double NNfunction_ns_chi02_uL::synapse0x2e48b00() {
   return (neuron0x2e3b8a0()*-0.0123216);
}

double NNfunction_ns_chi02_uL::synapse0x2e49010() {
   return (neuron0x2e3bbe0()*0.0123761);
}

double NNfunction_ns_chi02_uL::synapse0x2e49050() {
   return (neuron0x2e3bf20()*0.0232013);
}

double NNfunction_ns_chi02_uL::synapse0x2e49090() {
   return (neuron0x2e3c260()*0.0382158);
}

double NNfunction_ns_chi02_uL::synapse0x2e492e0() {
   return (neuron0x2e3c5a0()*0.00580097);
}

double NNfunction_ns_chi02_uL::synapse0x2e49320() {
   return (neuron0x2e3c8e0()*-0.0441968);
}

double NNfunction_ns_chi02_uL::synapse0x2e48bd0() {
   return (neuron0x2e37c90()*0.0344846);
}

double NNfunction_ns_chi02_uL::synapse0x2e48c10() {
   return (neuron0x2e37f40()*12.6199);
}

double NNfunction_ns_chi02_uL::synapse0x2e48c50() {
   return (neuron0x2e38280()*0.331609);
}

double NNfunction_ns_chi02_uL::synapse0x2e48c90() {
   return (neuron0x2e385c0()*-0.000986869);
}

double NNfunction_ns_chi02_uL::synapse0x2e49610() {
   return (neuron0x2e38900()*0.00576598);
}

double NNfunction_ns_chi02_uL::synapse0x2e55960() {
   return (neuron0x2e38c40()*0.0193224);
}

double NNfunction_ns_chi02_uL::synapse0x2e559a0() {
   return (neuron0x2e38f80()*-0.00147227);
}

double NNfunction_ns_chi02_uL::synapse0x2e559e0() {
   return (neuron0x2e392c0()*0.00318846);
}

double NNfunction_ns_chi02_uL::synapse0x2e55a20() {
   return (neuron0x2e39600()*0.00787058);
}

double NNfunction_ns_chi02_uL::synapse0x2e55a60() {
   return (neuron0x2e39940()*-0.00184886);
}

double NNfunction_ns_chi02_uL::synapse0x2e55aa0() {
   return (neuron0x2e39c80()*0.0102845);
}

double NNfunction_ns_chi02_uL::synapse0x2e55ae0() {
   return (neuron0x2e39fc0()*-0.738808);
}

double NNfunction_ns_chi02_uL::synapse0x2e55b20() {
   return (neuron0x2e3a300()*-0.00166939);
}

double NNfunction_ns_chi02_uL::synapse0x2e55b60() {
   return (neuron0x2e3a640()*-0.0135556);
}

double NNfunction_ns_chi02_uL::synapse0x2e55ba0() {
   return (neuron0x2e3a980()*-0.017497);
}

double NNfunction_ns_chi02_uL::synapse0x2e55be0() {
   return (neuron0x2e3acc0()*0.0549571);
}

double NNfunction_ns_chi02_uL::synapse0x2e494f0() {
   return (neuron0x2e3b000()*-0.0248055);
}

double NNfunction_ns_chi02_uL::synapse0x2e49530() {
   return (neuron0x2e3b560()*-0.00257202);
}

double NNfunction_ns_chi02_uL::synapse0x2e55d30() {
   return (neuron0x2e3b8a0()*-0.0168414);
}

double NNfunction_ns_chi02_uL::synapse0x2e55d70() {
   return (neuron0x2e3bbe0()*0.0230862);
}

double NNfunction_ns_chi02_uL::synapse0x2e55db0() {
   return (neuron0x2e3bf20()*0.0652282);
}

double NNfunction_ns_chi02_uL::synapse0x2e55df0() {
   return (neuron0x2e3c260()*0.0257307);
}

double NNfunction_ns_chi02_uL::synapse0x2e55e30() {
   return (neuron0x2e3c5a0()*0.0336152);
}

double NNfunction_ns_chi02_uL::synapse0x2e55e70() {
   return (neuron0x2e3c8e0()*8.866);
}

double NNfunction_ns_chi02_uL::synapse0x2e561f0() {
   return (neuron0x2e37c90()*-0.0535115);
}

double NNfunction_ns_chi02_uL::synapse0x2e56230() {
   return (neuron0x2e37f40()*-0.00690511);
}

double NNfunction_ns_chi02_uL::synapse0x2e56270() {
   return (neuron0x2e38280()*-0.00767176);
}

double NNfunction_ns_chi02_uL::synapse0x2e562b0() {
   return (neuron0x2e385c0()*-0.00676978);
}

double NNfunction_ns_chi02_uL::synapse0x2e562f0() {
   return (neuron0x2e38900()*0.0153961);
}

double NNfunction_ns_chi02_uL::synapse0x2e56330() {
   return (neuron0x2e38c40()*0.00911631);
}

double NNfunction_ns_chi02_uL::synapse0x2e56370() {
   return (neuron0x2e38f80()*0.0044839);
}

double NNfunction_ns_chi02_uL::synapse0x2e563b0() {
   return (neuron0x2e392c0()*-0.00713737);
}

double NNfunction_ns_chi02_uL::synapse0x2e563f0() {
   return (neuron0x2e39600()*4.79192e-05);
}

double NNfunction_ns_chi02_uL::synapse0x2e56430() {
   return (neuron0x2e39940()*0.00440425);
}

double NNfunction_ns_chi02_uL::synapse0x2e56470() {
   return (neuron0x2e39c80()*0.0107677);
}

double NNfunction_ns_chi02_uL::synapse0x2e564b0() {
   return (neuron0x2e39fc0()*0.00319676);
}

double NNfunction_ns_chi02_uL::synapse0x2e564f0() {
   return (neuron0x2e3a300()*0.011021);
}

double NNfunction_ns_chi02_uL::synapse0x2e56530() {
   return (neuron0x2e3a640()*0.00775252);
}

double NNfunction_ns_chi02_uL::synapse0x2e56570() {
   return (neuron0x2e3a980()*-0.00364769);
}

double NNfunction_ns_chi02_uL::synapse0x2e565b0() {
   return (neuron0x2e3acc0()*0.0181562);
}

double NNfunction_ns_chi02_uL::synapse0x2e56040() {
   return (neuron0x2e3b000()*-0.00573566);
}

double NNfunction_ns_chi02_uL::synapse0x2e56080() {
   return (neuron0x2e3b560()*-0.00520953);
}

double NNfunction_ns_chi02_uL::synapse0x2e56700() {
   return (neuron0x2e3b8a0()*-0.000994037);
}

double NNfunction_ns_chi02_uL::synapse0x2e56740() {
   return (neuron0x2e3bbe0()*-0.00701256);
}

double NNfunction_ns_chi02_uL::synapse0x2e56780() {
   return (neuron0x2e3bf20()*-0.0119757);
}

double NNfunction_ns_chi02_uL::synapse0x2e567c0() {
   return (neuron0x2e3c260()*0.00208525);
}

double NNfunction_ns_chi02_uL::synapse0x2e56800() {
   return (neuron0x2e3c5a0()*-0.00984584);
}

double NNfunction_ns_chi02_uL::synapse0x2e56840() {
   return (neuron0x2e3c8e0()*10.3739);
}

double NNfunction_ns_chi02_uL::synapse0x2e56bc0() {
   return (neuron0x2e37c90()*-0.0466275);
}

double NNfunction_ns_chi02_uL::synapse0x2e56c00() {
   return (neuron0x2e37f40()*-0.0199424);
}

double NNfunction_ns_chi02_uL::synapse0x2e56c40() {
   return (neuron0x2e38280()*0.13786);
}

double NNfunction_ns_chi02_uL::synapse0x2e56c80() {
   return (neuron0x2e385c0()*0.0108519);
}

double NNfunction_ns_chi02_uL::synapse0x2e56cc0() {
   return (neuron0x2e38900()*-0.0149834);
}

double NNfunction_ns_chi02_uL::synapse0x2e56d00() {
   return (neuron0x2e38c40()*0.000953);
}

double NNfunction_ns_chi02_uL::synapse0x2e56d40() {
   return (neuron0x2e38f80()*-0.00765951);
}

double NNfunction_ns_chi02_uL::synapse0x2e56d80() {
   return (neuron0x2e392c0()*-9.46223e-05);
}

double NNfunction_ns_chi02_uL::synapse0x2e56dc0() {
   return (neuron0x2e39600()*0.00690292);
}

double NNfunction_ns_chi02_uL::synapse0x2e56e00() {
   return (neuron0x2e39940()*0.00619855);
}

double NNfunction_ns_chi02_uL::synapse0x2e56e40() {
   return (neuron0x2e39c80()*0.00542739);
}

double NNfunction_ns_chi02_uL::synapse0x2e56e80() {
   return (neuron0x2e39fc0()*-0.292582);
}

double NNfunction_ns_chi02_uL::synapse0x2e56ec0() {
   return (neuron0x2e3a300()*0.00526427);
}

double NNfunction_ns_chi02_uL::synapse0x2e56f00() {
   return (neuron0x2e3a640()*-0.0104153);
}

double NNfunction_ns_chi02_uL::synapse0x2e56f40() {
   return (neuron0x2e3a980()*0.00371493);
}

double NNfunction_ns_chi02_uL::synapse0x2e56f80() {
   return (neuron0x2e3acc0()*-0.00297079);
}

double NNfunction_ns_chi02_uL::synapse0x2e56a10() {
   return (neuron0x2e3b000()*0.00612586);
}

double NNfunction_ns_chi02_uL::synapse0x2e56a50() {
   return (neuron0x2e3b560()*0.0087702);
}

double NNfunction_ns_chi02_uL::synapse0x2e570d0() {
   return (neuron0x2e3b8a0()*-0.00234256);
}

double NNfunction_ns_chi02_uL::synapse0x2e57110() {
   return (neuron0x2e3bbe0()*0.0128058);
}

double NNfunction_ns_chi02_uL::synapse0x2e57150() {
   return (neuron0x2e3bf20()*-0.00873694);
}

double NNfunction_ns_chi02_uL::synapse0x2e57190() {
   return (neuron0x2e3c260()*0.00976428);
}

double NNfunction_ns_chi02_uL::synapse0x2e571d0() {
   return (neuron0x2e3c5a0()*-0.00586675);
}

double NNfunction_ns_chi02_uL::synapse0x2e57210() {
   return (neuron0x2e3c8e0()*3.30634);
}

double NNfunction_ns_chi02_uL::synapse0x2e57590() {
   return (neuron0x2e37c90()*0.0310423);
}

double NNfunction_ns_chi02_uL::synapse0x2e575d0() {
   return (neuron0x2e37f40()*0.0129949);
}

double NNfunction_ns_chi02_uL::synapse0x2e57610() {
   return (neuron0x2e38280()*-0.0264106);
}

double NNfunction_ns_chi02_uL::synapse0x2e57650() {
   return (neuron0x2e385c0()*0.00571409);
}

double NNfunction_ns_chi02_uL::synapse0x2e57690() {
   return (neuron0x2e38900()*-0.0149489);
}

double NNfunction_ns_chi02_uL::synapse0x2e576d0() {
   return (neuron0x2e38c40()*-0.00808282);
}

double NNfunction_ns_chi02_uL::synapse0x2e57710() {
   return (neuron0x2e38f80()*-0.000440171);
}

double NNfunction_ns_chi02_uL::synapse0x2e57750() {
   return (neuron0x2e392c0()*0.00957493);
}

double NNfunction_ns_chi02_uL::synapse0x2e57790() {
   return (neuron0x2e39600()*-0.00123908);
}

double NNfunction_ns_chi02_uL::synapse0x2e577d0() {
   return (neuron0x2e39940()*-0.00596192);
}

double NNfunction_ns_chi02_uL::synapse0x2e57810() {
   return (neuron0x2e39c80()*-0.0108797);
}

double NNfunction_ns_chi02_uL::synapse0x2e57850() {
   return (neuron0x2e39fc0()*0.0624796);
}

double NNfunction_ns_chi02_uL::synapse0x2e57890() {
   return (neuron0x2e3a300()*-0.010582);
}

double NNfunction_ns_chi02_uL::synapse0x2e578d0() {
   return (neuron0x2e3a640()*-0.00046782);
}

double NNfunction_ns_chi02_uL::synapse0x2e57910() {
   return (neuron0x2e3a980()*0.00623476);
}

double NNfunction_ns_chi02_uL::synapse0x2e57950() {
   return (neuron0x2e3acc0()*-0.0137405);
}

double NNfunction_ns_chi02_uL::synapse0x2e573e0() {
   return (neuron0x2e3b000()*0.0114721);
}

double NNfunction_ns_chi02_uL::synapse0x2e57420() {
   return (neuron0x2e3b560()*0.00534545);
}

double NNfunction_ns_chi02_uL::synapse0x2e57aa0() {
   return (neuron0x2e3b8a0()*0.00507769);
}

double NNfunction_ns_chi02_uL::synapse0x2e57ae0() {
   return (neuron0x2e3bbe0()*0.00562582);
}

double NNfunction_ns_chi02_uL::synapse0x2e57b20() {
   return (neuron0x2e3bf20()*0.00995565);
}

double NNfunction_ns_chi02_uL::synapse0x2e57b60() {
   return (neuron0x2e3c260()*-0.000436209);
}

double NNfunction_ns_chi02_uL::synapse0x2e57ba0() {
   return (neuron0x2e3c5a0()*0.0083034);
}

double NNfunction_ns_chi02_uL::synapse0x2e57be0() {
   return (neuron0x2e3c8e0()*-8.70977);
}

double NNfunction_ns_chi02_uL::synapse0x2e57f60() {
   return (neuron0x2e37c90()*-0.0796686);
}

double NNfunction_ns_chi02_uL::synapse0x2e57fa0() {
   return (neuron0x2e37f40()*3.17033);
}

double NNfunction_ns_chi02_uL::synapse0x2e57fe0() {
   return (neuron0x2e38280()*1.76748);
}

double NNfunction_ns_chi02_uL::synapse0x2e58020() {
   return (neuron0x2e385c0()*-0.0624516);
}

double NNfunction_ns_chi02_uL::synapse0x2e58060() {
   return (neuron0x2e38900()*0.00568498);
}

double NNfunction_ns_chi02_uL::synapse0x2e580a0() {
   return (neuron0x2e38c40()*0.00264588);
}

double NNfunction_ns_chi02_uL::synapse0x2e580e0() {
   return (neuron0x2e38f80()*-0.0109977);
}

double NNfunction_ns_chi02_uL::synapse0x2e58120() {
   return (neuron0x2e392c0()*0.00912931);
}

double NNfunction_ns_chi02_uL::synapse0x2e58160() {
   return (neuron0x2e39600()*0.00194669);
}

double NNfunction_ns_chi02_uL::synapse0x2e581a0() {
   return (neuron0x2e39940()*0.0163225);
}

double NNfunction_ns_chi02_uL::synapse0x2e581e0() {
   return (neuron0x2e39c80()*-0.0177201);
}

double NNfunction_ns_chi02_uL::synapse0x2e58220() {
   return (neuron0x2e39fc0()*0.661879);
}

double NNfunction_ns_chi02_uL::synapse0x2e58260() {
   return (neuron0x2e3a300()*0.0206113);
}

double NNfunction_ns_chi02_uL::synapse0x2e582a0() {
   return (neuron0x2e3a640()*-0.0129251);
}

double NNfunction_ns_chi02_uL::synapse0x2e582e0() {
   return (neuron0x2e3a980()*0.0275567);
}

double NNfunction_ns_chi02_uL::synapse0x2e58320() {
   return (neuron0x2e3acc0()*0.0276899);
}

double NNfunction_ns_chi02_uL::synapse0x2e57db0() {
   return (neuron0x2e3b000()*-0.0276566);
}

double NNfunction_ns_chi02_uL::synapse0x2e57df0() {
   return (neuron0x2e3b560()*0.0169068);
}

double NNfunction_ns_chi02_uL::synapse0x2e58470() {
   return (neuron0x2e3b8a0()*0.0765976);
}

double NNfunction_ns_chi02_uL::synapse0x2e584b0() {
   return (neuron0x2e3bbe0()*0.0176321);
}

double NNfunction_ns_chi02_uL::synapse0x2e584f0() {
   return (neuron0x2e3bf20()*0.058303);
}

double NNfunction_ns_chi02_uL::synapse0x2e58530() {
   return (neuron0x2e3c260()*0.0209947);
}

double NNfunction_ns_chi02_uL::synapse0x2e58570() {
   return (neuron0x2e3c5a0()*-0.0136029);
}

double NNfunction_ns_chi02_uL::synapse0x2e585b0() {
   return (neuron0x2e3c8e0()*0.172904);
}

double NNfunction_ns_chi02_uL::synapse0x2e58930() {
   return (neuron0x2e37c90()*0.0148151);
}

double NNfunction_ns_chi02_uL::synapse0x2e58970() {
   return (neuron0x2e37f40()*-0.146974);
}

double NNfunction_ns_chi02_uL::synapse0x2e589b0() {
   return (neuron0x2e38280()*0.779206);
}

double NNfunction_ns_chi02_uL::synapse0x2e589f0() {
   return (neuron0x2e385c0()*-0.146562);
}

double NNfunction_ns_chi02_uL::synapse0x2e58a30() {
   return (neuron0x2e38900()*0.731691);
}

double NNfunction_ns_chi02_uL::synapse0x2e58a70() {
   return (neuron0x2e38c40()*0.0223283);
}

double NNfunction_ns_chi02_uL::synapse0x2e58ab0() {
   return (neuron0x2e38f80()*1.39389);
}

double NNfunction_ns_chi02_uL::synapse0x2e58af0() {
   return (neuron0x2e392c0()*0.627062);
}

double NNfunction_ns_chi02_uL::synapse0x2e58b30() {
   return (neuron0x2e39600()*-0.455258);
}

double NNfunction_ns_chi02_uL::synapse0x2e58b70() {
   return (neuron0x2e39940()*-0.447516);
}

double NNfunction_ns_chi02_uL::synapse0x2e58bb0() {
   return (neuron0x2e39c80()*0.210052);
}

double NNfunction_ns_chi02_uL::synapse0x2e58bf0() {
   return (neuron0x2e39fc0()*0.769107);
}

double NNfunction_ns_chi02_uL::synapse0x2e58c30() {
   return (neuron0x2e3a300()*-0.537105);
}

double NNfunction_ns_chi02_uL::synapse0x2e58c70() {
   return (neuron0x2e3a640()*0.785006);
}

double NNfunction_ns_chi02_uL::synapse0x2e58cb0() {
   return (neuron0x2e3a980()*-0.306194);
}

double NNfunction_ns_chi02_uL::synapse0x2e58cf0() {
   return (neuron0x2e3acc0()*0.801325);
}

double NNfunction_ns_chi02_uL::synapse0x2e58780() {
   return (neuron0x2e3b000()*0.227059);
}

double NNfunction_ns_chi02_uL::synapse0x2e587c0() {
   return (neuron0x2e3b560()*-0.248866);
}

double NNfunction_ns_chi02_uL::synapse0x2e58e40() {
   return (neuron0x2e3b8a0()*-0.117312);
}

double NNfunction_ns_chi02_uL::synapse0x2e58e80() {
   return (neuron0x2e3bbe0()*-0.397113);
}

double NNfunction_ns_chi02_uL::synapse0x2e58ec0() {
   return (neuron0x2e3bf20()*-0.873384);
}

double NNfunction_ns_chi02_uL::synapse0x2e58f00() {
   return (neuron0x2e3c260()*0.579375);
}

double NNfunction_ns_chi02_uL::synapse0x2e58f40() {
   return (neuron0x2e3c5a0()*0.0940221);
}

double NNfunction_ns_chi02_uL::synapse0x2e58f80() {
   return (neuron0x2e3c8e0()*-0.273989);
}

double NNfunction_ns_chi02_uL::synapse0x2e59300() {
   return (neuron0x2e37c90()*0.00400369);
}

double NNfunction_ns_chi02_uL::synapse0x2e59340() {
   return (neuron0x2e37f40()*-0.237262);
}

double NNfunction_ns_chi02_uL::synapse0x2e59380() {
   return (neuron0x2e38280()*-2.43641);
}

double NNfunction_ns_chi02_uL::synapse0x2e593c0() {
   return (neuron0x2e385c0()*-0.0169282);
}

double NNfunction_ns_chi02_uL::synapse0x2e59400() {
   return (neuron0x2e38900()*0.0172666);
}

double NNfunction_ns_chi02_uL::synapse0x2e59440() {
   return (neuron0x2e38c40()*-0.00294305);
}

double NNfunction_ns_chi02_uL::synapse0x2e59480() {
   return (neuron0x2e38f80()*0.0203129);
}

double NNfunction_ns_chi02_uL::synapse0x2e594c0() {
   return (neuron0x2e392c0()*0.0245251);
}

double NNfunction_ns_chi02_uL::synapse0x2e59500() {
   return (neuron0x2e39600()*0.0252568);
}

double NNfunction_ns_chi02_uL::synapse0x2e59540() {
   return (neuron0x2e39940()*0.0105829);
}

double NNfunction_ns_chi02_uL::synapse0x2e59580() {
   return (neuron0x2e39c80()*0.0131596);
}

double NNfunction_ns_chi02_uL::synapse0x2e595c0() {
   return (neuron0x2e39fc0()*-0.397972);
}

double NNfunction_ns_chi02_uL::synapse0x2e59600() {
   return (neuron0x2e3a300()*-0.0208705);
}

double NNfunction_ns_chi02_uL::synapse0x2e59640() {
   return (neuron0x2e3a640()*-0.00869058);
}

double NNfunction_ns_chi02_uL::synapse0x2e59680() {
   return (neuron0x2e3a980()*-0.00507789);
}

double NNfunction_ns_chi02_uL::synapse0x2e596c0() {
   return (neuron0x2e3acc0()*-0.0132943);
}

double NNfunction_ns_chi02_uL::synapse0x2e59150() {
   return (neuron0x2e3b000()*0.0138459);
}

double NNfunction_ns_chi02_uL::synapse0x2e59190() {
   return (neuron0x2e3b560()*-0.00192247);
}

double NNfunction_ns_chi02_uL::synapse0x2e59810() {
   return (neuron0x2e3b8a0()*0.010382);
}

double NNfunction_ns_chi02_uL::synapse0x2e59850() {
   return (neuron0x2e3bbe0()*0.0192489);
}

double NNfunction_ns_chi02_uL::synapse0x2e59890() {
   return (neuron0x2e3bf20()*0.0127976);
}

double NNfunction_ns_chi02_uL::synapse0x2e598d0() {
   return (neuron0x2e3c260()*0.038061);
}

double NNfunction_ns_chi02_uL::synapse0x2e59910() {
   return (neuron0x2e3c5a0()*-0.0288847);
}

double NNfunction_ns_chi02_uL::synapse0x2e59950() {
   return (neuron0x2e3c8e0()*-0.0904213);
}

double NNfunction_ns_chi02_uL::synapse0x2e59cd0() {
   return (neuron0x2e37c90()*-0.00932443);
}

double NNfunction_ns_chi02_uL::synapse0x2e59d10() {
   return (neuron0x2e37f40()*-3.71465);
}

double NNfunction_ns_chi02_uL::synapse0x2e59d50() {
   return (neuron0x2e38280()*-3.1456);
}

double NNfunction_ns_chi02_uL::synapse0x2e59d90() {
   return (neuron0x2e385c0()*-0.0406282);
}

double NNfunction_ns_chi02_uL::synapse0x2e59dd0() {
   return (neuron0x2e38900()*0.103584);
}

double NNfunction_ns_chi02_uL::synapse0x2e59e10() {
   return (neuron0x2e38c40()*-0.0551169);
}

double NNfunction_ns_chi02_uL::synapse0x2e59e50() {
   return (neuron0x2e38f80()*0.0104606);
}

double NNfunction_ns_chi02_uL::synapse0x2e59e90() {
   return (neuron0x2e392c0()*-0.0318501);
}

double NNfunction_ns_chi02_uL::synapse0x2e59ed0() {
   return (neuron0x2e39600()*0.0106447);
}

double NNfunction_ns_chi02_uL::synapse0x2e59f10() {
   return (neuron0x2e39940()*-0.0170381);
}

double NNfunction_ns_chi02_uL::synapse0x2e59f50() {
   return (neuron0x2e39c80()*-0.00803385);
}

double NNfunction_ns_chi02_uL::synapse0x2e59f90() {
   return (neuron0x2e39fc0()*0.0476179);
}

double NNfunction_ns_chi02_uL::synapse0x2e59fd0() {
   return (neuron0x2e3a300()*0.0485835);
}

double NNfunction_ns_chi02_uL::synapse0x2e5a010() {
   return (neuron0x2e3a640()*0.0185528);
}

double NNfunction_ns_chi02_uL::synapse0x2e5a050() {
   return (neuron0x2e3a980()*0.0485946);
}

double NNfunction_ns_chi02_uL::synapse0x2e5a090() {
   return (neuron0x2e3acc0()*-0.0791598);
}

double NNfunction_ns_chi02_uL::synapse0x2e59b20() {
   return (neuron0x2e3b000()*0.0691158);
}

double NNfunction_ns_chi02_uL::synapse0x2e59b60() {
   return (neuron0x2e3b560()*0.0395117);
}

double NNfunction_ns_chi02_uL::synapse0x2e5a1e0() {
   return (neuron0x2e3b8a0()*0.0199471);
}

double NNfunction_ns_chi02_uL::synapse0x2e5a220() {
   return (neuron0x2e3bbe0()*0.00122159);
}

double NNfunction_ns_chi02_uL::synapse0x2e5a260() {
   return (neuron0x2e3bf20()*-0.00386567);
}

double NNfunction_ns_chi02_uL::synapse0x2e5a2a0() {
   return (neuron0x2e3c260()*-0.0199779);
}

double NNfunction_ns_chi02_uL::synapse0x2e5a2e0() {
   return (neuron0x2e3c5a0()*-0.020347);
}

double NNfunction_ns_chi02_uL::synapse0x2e5a320() {
   return (neuron0x2e3c8e0()*3.28086);
}

double NNfunction_ns_chi02_uL::synapse0x2e42dd0() {
   return (neuron0x2e37c90()*-0.0183692);
}

double NNfunction_ns_chi02_uL::synapse0x2e42e10() {
   return (neuron0x2e37f40()*0.00505594);
}

double NNfunction_ns_chi02_uL::synapse0x2e42e50() {
   return (neuron0x2e38280()*0.202234);
}

double NNfunction_ns_chi02_uL::synapse0x2e42e90() {
   return (neuron0x2e385c0()*-0.119713);
}

double NNfunction_ns_chi02_uL::synapse0x2e42ed0() {
   return (neuron0x2e38900()*-0.00836595);
}

double NNfunction_ns_chi02_uL::synapse0x2e42f10() {
   return (neuron0x2e38c40()*0.0368029);
}

double NNfunction_ns_chi02_uL::synapse0x2e42f50() {
   return (neuron0x2e38f80()*-0.00159039);
}

double NNfunction_ns_chi02_uL::synapse0x2e42f90() {
   return (neuron0x2e392c0()*0.0174388);
}

double NNfunction_ns_chi02_uL::synapse0x2e5aab0() {
   return (neuron0x2e39600()*-0.0231238);
}

double NNfunction_ns_chi02_uL::synapse0x2e5aaf0() {
   return (neuron0x2e39940()*0.00975354);
}

double NNfunction_ns_chi02_uL::synapse0x2e5ab30() {
   return (neuron0x2e39c80()*-0.0377816);
}

double NNfunction_ns_chi02_uL::synapse0x2e5ab70() {
   return (neuron0x2e39fc0()*2.50671);
}

double NNfunction_ns_chi02_uL::synapse0x2e5abb0() {
   return (neuron0x2e3a300()*0.0194212);
}

double NNfunction_ns_chi02_uL::synapse0x2e5abf0() {
   return (neuron0x2e3a640()*0.0304935);
}

double NNfunction_ns_chi02_uL::synapse0x2e5ac30() {
   return (neuron0x2e3a980()*0.0099098);
}

double NNfunction_ns_chi02_uL::synapse0x2e5ac70() {
   return (neuron0x2e3acc0()*-0.00335195);
}

double NNfunction_ns_chi02_uL::synapse0x2e5a4f0() {
   return (neuron0x2e3b000()*0.0180943);
}

double NNfunction_ns_chi02_uL::synapse0x2e5a530() {
   return (neuron0x2e3b560()*0.0174731);
}

double NNfunction_ns_chi02_uL::synapse0x2e5adc0() {
   return (neuron0x2e3b8a0()*-0.0029152);
}

double NNfunction_ns_chi02_uL::synapse0x2e5ae00() {
   return (neuron0x2e3bbe0()*0.00887502);
}

double NNfunction_ns_chi02_uL::synapse0x2e5ae40() {
   return (neuron0x2e3bf20()*0.00108231);
}

double NNfunction_ns_chi02_uL::synapse0x2e5ae80() {
   return (neuron0x2e3c260()*0.00761259);
}

double NNfunction_ns_chi02_uL::synapse0x2e5aec0() {
   return (neuron0x2e3c5a0()*-0.00884777);
}

double NNfunction_ns_chi02_uL::synapse0x2e5af00() {
   return (neuron0x2e3c8e0()*0.127996);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b280() {
   return (neuron0x2e37c90()*-0.0162433);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b2c0() {
   return (neuron0x2e37f40()*-11.1132);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b300() {
   return (neuron0x2e38280()*0.387052);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b340() {
   return (neuron0x2e385c0()*0.00093544);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b380() {
   return (neuron0x2e38900()*-0.0256622);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b3c0() {
   return (neuron0x2e38c40()*0.0189853);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b400() {
   return (neuron0x2e38f80()*-0.00439758);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b440() {
   return (neuron0x2e392c0()*0.0523357);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b480() {
   return (neuron0x2e39600()*0.0221046);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b4c0() {
   return (neuron0x2e39940()*0.0134499);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b500() {
   return (neuron0x2e39c80()*0.0139513);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b540() {
   return (neuron0x2e39fc0()*0.292187);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b580() {
   return (neuron0x2e3a300()*-0.0158207);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b5c0() {
   return (neuron0x2e3a640()*0.00762657);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b600() {
   return (neuron0x2e3a980()*0.00113664);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b640() {
   return (neuron0x2e3acc0()*-0.0109755);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b0d0() {
   return (neuron0x2e3b000()*0.0095116);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b110() {
   return (neuron0x2e3b560()*-0.0141389);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b790() {
   return (neuron0x2e3b8a0()*0.0121464);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b7d0() {
   return (neuron0x2e3bbe0()*-0.0242258);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b810() {
   return (neuron0x2e3bf20()*-0.0302488);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b850() {
   return (neuron0x2e3c260()*-0.0447512);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b890() {
   return (neuron0x2e3c5a0()*-0.00791209);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b8d0() {
   return (neuron0x2e3c8e0()*0.112132);
}

double NNfunction_ns_chi02_uL::synapse0x2e5bc50() {
   return (neuron0x2e37c90()*-0.013802);
}

double NNfunction_ns_chi02_uL::synapse0x2e5bc90() {
   return (neuron0x2e37f40()*-0.00612212);
}

double NNfunction_ns_chi02_uL::synapse0x2e5bcd0() {
   return (neuron0x2e38280()*-0.0302083);
}

double NNfunction_ns_chi02_uL::synapse0x2e5bd10() {
   return (neuron0x2e385c0()*0.910642);
}

double NNfunction_ns_chi02_uL::synapse0x2e5bd50() {
   return (neuron0x2e38900()*0.0339053);
}

double NNfunction_ns_chi02_uL::synapse0x2e5bd90() {
   return (neuron0x2e38c40()*0.0297968);
}

double NNfunction_ns_chi02_uL::synapse0x2e5bdd0() {
   return (neuron0x2e38f80()*0.0242082);
}

double NNfunction_ns_chi02_uL::synapse0x2e5be10() {
   return (neuron0x2e392c0()*-0.00808953);
}

double NNfunction_ns_chi02_uL::synapse0x2e5be50() {
   return (neuron0x2e39600()*-0.0121891);
}

double NNfunction_ns_chi02_uL::synapse0x2e5be90() {
   return (neuron0x2e39940()*-0.0327057);
}

double NNfunction_ns_chi02_uL::synapse0x2e5bed0() {
   return (neuron0x2e39c80()*0.00765037);
}

double NNfunction_ns_chi02_uL::synapse0x2e5bf10() {
   return (neuron0x2e39fc0()*-1.30848);
}

double NNfunction_ns_chi02_uL::synapse0x2e5bf50() {
   return (neuron0x2e3a300()*0.0206021);
}

double NNfunction_ns_chi02_uL::synapse0x2e5bf90() {
   return (neuron0x2e3a640()*-0.0325165);
}

double NNfunction_ns_chi02_uL::synapse0x2e5bfd0() {
   return (neuron0x2e3a980()*0.0603054);
}

double NNfunction_ns_chi02_uL::synapse0x2e5c010() {
   return (neuron0x2e3acc0()*0.03861);
}

double NNfunction_ns_chi02_uL::synapse0x2e5baa0() {
   return (neuron0x2e3b000()*-0.0394384);
}

double NNfunction_ns_chi02_uL::synapse0x2e5bae0() {
   return (neuron0x2e3b560()*-0.0301986);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c610() {
   return (neuron0x2e3b8a0()*0.00888384);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c650() {
   return (neuron0x2e3bbe0()*0.0116151);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c690() {
   return (neuron0x2e3bf20()*-0.00760268);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c6d0() {
   return (neuron0x2e3c260()*-9.14767e-07);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c710() {
   return (neuron0x2e3c5a0()*-0.00191653);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c750() {
   return (neuron0x2e3c8e0()*-0.0166364);
}

double NNfunction_ns_chi02_uL::synapse0x2e4cad0() {
   return (neuron0x2e37c90()*-0.034782);
}

double NNfunction_ns_chi02_uL::synapse0x2e4cb10() {
   return (neuron0x2e37f40()*-0.877765);
}

double NNfunction_ns_chi02_uL::synapse0x2e4cb50() {
   return (neuron0x2e38280()*-0.0101567);
}

double NNfunction_ns_chi02_uL::synapse0x2e4cb90() {
   return (neuron0x2e385c0()*-0.00825027);
}

double NNfunction_ns_chi02_uL::synapse0x2e4cbd0() {
   return (neuron0x2e38900()*-0.00279966);
}

double NNfunction_ns_chi02_uL::synapse0x2e4cc10() {
   return (neuron0x2e38c40()*0.0320784);
}

double NNfunction_ns_chi02_uL::synapse0x2e4cc50() {
   return (neuron0x2e38f80()*0.0054405);
}

double NNfunction_ns_chi02_uL::synapse0x2e4cc90() {
   return (neuron0x2e392c0()*0.0427993);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ccd0() {
   return (neuron0x2e39600()*-7.19484e-05);
}

double NNfunction_ns_chi02_uL::synapse0x2e4cd10() {
   return (neuron0x2e39940()*-0.0168136);
}

double NNfunction_ns_chi02_uL::synapse0x2e4cd50() {
   return (neuron0x2e39c80()*0.0171339);
}

double NNfunction_ns_chi02_uL::synapse0x2e4cd90() {
   return (neuron0x2e39fc0()*-0.421287);
}

double NNfunction_ns_chi02_uL::synapse0x2e4cdd0() {
   return (neuron0x2e3a300()*-0.0082398);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ce10() {
   return (neuron0x2e3a640()*-0.0255869);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ce50() {
   return (neuron0x2e3a980()*0.0235876);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ce90() {
   return (neuron0x2e3acc0()*0.00346332);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c920() {
   return (neuron0x2e3b000()*0.00582879);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c960() {
   return (neuron0x2e3b560()*0.0161572);
}

double NNfunction_ns_chi02_uL::synapse0x2e4cfe0() {
   return (neuron0x2e3b8a0()*0.0166847);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d020() {
   return (neuron0x2e3bbe0()*0.0204115);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d060() {
   return (neuron0x2e3bf20()*0.00698234);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d0a0() {
   return (neuron0x2e3c260()*0.0179605);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d0e0() {
   return (neuron0x2e3c5a0()*-0.00251392);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d120() {
   return (neuron0x2e3c8e0()*0.472482);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d4a0() {
   return (neuron0x2e37c90()*-0.0376531);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d4e0() {
   return (neuron0x2e37f40()*0.0760475);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d520() {
   return (neuron0x2e38280()*-0.173012);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d560() {
   return (neuron0x2e385c0()*0.0344255);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d5a0() {
   return (neuron0x2e38900()*-0.000447393);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d5e0() {
   return (neuron0x2e38c40()*-0.00313662);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d620() {
   return (neuron0x2e38f80()*-0.0084104);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d660() {
   return (neuron0x2e392c0()*0.00398314);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d6a0() {
   return (neuron0x2e39600()*0.0500838);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d6e0() {
   return (neuron0x2e39940()*-0.0151075);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d720() {
   return (neuron0x2e39c80()*0.0302712);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d760() {
   return (neuron0x2e39fc0()*0.550106);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d7a0() {
   return (neuron0x2e3a300()*0.0192632);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d7e0() {
   return (neuron0x2e3a640()*0.0221077);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d820() {
   return (neuron0x2e3a980()*-0.00705158);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d860() {
   return (neuron0x2e3acc0()*-0.0120997);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d2f0() {
   return (neuron0x2e3b000()*0.011596);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d330() {
   return (neuron0x2e3b560()*-0.00133122);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d9b0() {
   return (neuron0x2e3b8a0()*0.0335019);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d9f0() {
   return (neuron0x2e3bbe0()*-0.00167145);
}

double NNfunction_ns_chi02_uL::synapse0x2e4da30() {
   return (neuron0x2e3bf20()*0.00978041);
}

double NNfunction_ns_chi02_uL::synapse0x2e4da70() {
   return (neuron0x2e3c260()*0.0107813);
}

double NNfunction_ns_chi02_uL::synapse0x2e4dab0() {
   return (neuron0x2e3c5a0()*-0.00538902);
}

double NNfunction_ns_chi02_uL::synapse0x2e4daf0() {
   return (neuron0x2e3c8e0()*-1.77949);
}

double NNfunction_ns_chi02_uL::synapse0x2e4de70() {
   return (neuron0x2e37c90()*-0.0804219);
}

double NNfunction_ns_chi02_uL::synapse0x2e4deb0() {
   return (neuron0x2e37f40()*5.91216);
}

double NNfunction_ns_chi02_uL::synapse0x2e4def0() {
   return (neuron0x2e38280()*-3.26756);
}

double NNfunction_ns_chi02_uL::synapse0x2e4df30() {
   return (neuron0x2e385c0()*-0.0102744);
}

double NNfunction_ns_chi02_uL::synapse0x2e4df70() {
   return (neuron0x2e38900()*0.0374168);
}

double NNfunction_ns_chi02_uL::synapse0x2e4dfb0() {
   return (neuron0x2e38c40()*0.0301579);
}

double NNfunction_ns_chi02_uL::synapse0x2e4dff0() {
   return (neuron0x2e38f80()*-0.0167835);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e030() {
   return (neuron0x2e392c0()*0.0108215);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e070() {
   return (neuron0x2e39600()*-0.0209352);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e0b0() {
   return (neuron0x2e39940()*0.000269336);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e0f0() {
   return (neuron0x2e39c80()*0.0144837);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e130() {
   return (neuron0x2e39fc0()*-0.192618);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e170() {
   return (neuron0x2e3a300()*-0.00992635);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e1b0() {
   return (neuron0x2e3a640()*-0.0219101);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e1f0() {
   return (neuron0x2e3a980()*0.0214697);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e230() {
   return (neuron0x2e3acc0()*0.0129816);
}

double NNfunction_ns_chi02_uL::synapse0x2e4dcc0() {
   return (neuron0x2e3b000()*0.0210271);
}

double NNfunction_ns_chi02_uL::synapse0x2e4dd00() {
   return (neuron0x2e3b560()*0.0115368);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e380() {
   return (neuron0x2e3b8a0()*-0.007725);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e3c0() {
   return (neuron0x2e3bbe0()*0.0470644);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e400() {
   return (neuron0x2e3bf20()*0.000130036);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e440() {
   return (neuron0x2e3c260()*-0.0153328);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e480() {
   return (neuron0x2e3c5a0()*-0.0183614);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e4c0() {
   return (neuron0x2e3c8e0()*-0.673693);
}

double NNfunction_ns_chi02_uL::synapse0x2e60390() {
   return (neuron0x2e37c90()*0.124788);
}

double NNfunction_ns_chi02_uL::synapse0x2e603d0() {
   return (neuron0x2e37f40()*-0.436048);
}

double NNfunction_ns_chi02_uL::synapse0x2e60410() {
   return (neuron0x2e38280()*-0.665503);
}

double NNfunction_ns_chi02_uL::synapse0x2e60450() {
   return (neuron0x2e385c0()*-0.705529);
}

double NNfunction_ns_chi02_uL::synapse0x2e60490() {
   return (neuron0x2e38900()*0.991848);
}

double NNfunction_ns_chi02_uL::synapse0x2e604d0() {
   return (neuron0x2e38c40()*-0.0234913);
}

double NNfunction_ns_chi02_uL::synapse0x2e60510() {
   return (neuron0x2e38f80()*0.138298);
}

double NNfunction_ns_chi02_uL::synapse0x2e60550() {
   return (neuron0x2e392c0()*0.151261);
}

double NNfunction_ns_chi02_uL::synapse0x2e60590() {
   return (neuron0x2e39600()*0.44682);
}

double NNfunction_ns_chi02_uL::synapse0x2e605d0() {
   return (neuron0x2e39940()*0.201837);
}

double NNfunction_ns_chi02_uL::synapse0x2e60610() {
   return (neuron0x2e39c80()*0.000633917);
}

double NNfunction_ns_chi02_uL::synapse0x2e60650() {
   return (neuron0x2e39fc0()*-1.83933);
}

double NNfunction_ns_chi02_uL::synapse0x2e60690() {
   return (neuron0x2e3a300()*0.099393);
}

double NNfunction_ns_chi02_uL::synapse0x2e606d0() {
   return (neuron0x2e3a640()*-0.160309);
}

double NNfunction_ns_chi02_uL::synapse0x2e60710() {
   return (neuron0x2e3a980()*-0.0841636);
}

double NNfunction_ns_chi02_uL::synapse0x2e60750() {
   return (neuron0x2e3acc0()*-0.0557108);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e500() {
   return (neuron0x2e3b000()*-0.0881794);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e540() {
   return (neuron0x2e3b560()*-0.223777);
}

double NNfunction_ns_chi02_uL::synapse0x2e608a0() {
   return (neuron0x2e3b8a0()*-0.0790846);
}

double NNfunction_ns_chi02_uL::synapse0x2e608e0() {
   return (neuron0x2e3bbe0()*-0.165889);
}

double NNfunction_ns_chi02_uL::synapse0x2e60920() {
   return (neuron0x2e3bf20()*-0.60668);
}

double NNfunction_ns_chi02_uL::synapse0x2e60960() {
   return (neuron0x2e3c260()*0.4337);
}

double NNfunction_ns_chi02_uL::synapse0x2e609a0() {
   return (neuron0x2e3c5a0()*0.138722);
}

double NNfunction_ns_chi02_uL::synapse0x2e609e0() {
   return (neuron0x2e3c8e0()*-0.0185785);
}

double NNfunction_ns_chi02_uL::synapse0x2e60d60() {
   return (neuron0x2e37c90()*-0.0422116);
}

double NNfunction_ns_chi02_uL::synapse0x2e60da0() {
   return (neuron0x2e37f40()*-0.269521);
}

double NNfunction_ns_chi02_uL::synapse0x2e60de0() {
   return (neuron0x2e38280()*-0.879586);
}

double NNfunction_ns_chi02_uL::synapse0x2e60e20() {
   return (neuron0x2e385c0()*0.14681);
}

double NNfunction_ns_chi02_uL::synapse0x2e60e60() {
   return (neuron0x2e38900()*-0.0442128);
}

double NNfunction_ns_chi02_uL::synapse0x2e60ea0() {
   return (neuron0x2e38c40()*-0.11875);
}

double NNfunction_ns_chi02_uL::synapse0x2e60ee0() {
   return (neuron0x2e38f80()*-0.0576917);
}

double NNfunction_ns_chi02_uL::synapse0x2e60f20() {
   return (neuron0x2e392c0()*-0.0164118);
}

double NNfunction_ns_chi02_uL::synapse0x2e60f60() {
   return (neuron0x2e39600()*-0.01932);
}

double NNfunction_ns_chi02_uL::synapse0x2e60fa0() {
   return (neuron0x2e39940()*-0.0150003);
}

double NNfunction_ns_chi02_uL::synapse0x2e60fe0() {
   return (neuron0x2e39c80()*0.0887207);
}

double NNfunction_ns_chi02_uL::synapse0x2e61020() {
   return (neuron0x2e39fc0()*-2.1471);
}

double NNfunction_ns_chi02_uL::synapse0x2e61060() {
   return (neuron0x2e3a300()*0.040193);
}

double NNfunction_ns_chi02_uL::synapse0x2e610a0() {
   return (neuron0x2e3a640()*-0.00962735);
}

double NNfunction_ns_chi02_uL::synapse0x2e610e0() {
   return (neuron0x2e3a980()*-0.0325127);
}

double NNfunction_ns_chi02_uL::synapse0x2e61120() {
   return (neuron0x2e3acc0()*-0.0196954);
}

double NNfunction_ns_chi02_uL::synapse0x2e60bb0() {
   return (neuron0x2e3b000()*-0.0738548);
}

double NNfunction_ns_chi02_uL::synapse0x2e60bf0() {
   return (neuron0x2e3b560()*-0.0729306);
}

double NNfunction_ns_chi02_uL::synapse0x2e61270() {
   return (neuron0x2e3b8a0()*0.0767935);
}

double NNfunction_ns_chi02_uL::synapse0x2e612b0() {
   return (neuron0x2e3bbe0()*-0.0745873);
}

double NNfunction_ns_chi02_uL::synapse0x2e612f0() {
   return (neuron0x2e3bf20()*0.000726434);
}

double NNfunction_ns_chi02_uL::synapse0x2e61330() {
   return (neuron0x2e3c260()*-0.0453147);
}

double NNfunction_ns_chi02_uL::synapse0x2e61370() {
   return (neuron0x2e3c5a0()*-0.0208944);
}

double NNfunction_ns_chi02_uL::synapse0x2e613b0() {
   return (neuron0x2e3c8e0()*-0.0105299);
}

double NNfunction_ns_chi02_uL::synapse0x2e61730() {
   return (neuron0x2e37c90()*-0.159866);
}

double NNfunction_ns_chi02_uL::synapse0x2e61770() {
   return (neuron0x2e37f40()*-0.195939);
}

double NNfunction_ns_chi02_uL::synapse0x2e617b0() {
   return (neuron0x2e38280()*0.204863);
}

double NNfunction_ns_chi02_uL::synapse0x2e617f0() {
   return (neuron0x2e385c0()*-1.7897e-05);
}

double NNfunction_ns_chi02_uL::synapse0x2e61830() {
   return (neuron0x2e38900()*0.0353612);
}

double NNfunction_ns_chi02_uL::synapse0x2e61870() {
   return (neuron0x2e38c40()*-0.0808852);
}

double NNfunction_ns_chi02_uL::synapse0x2e618b0() {
   return (neuron0x2e38f80()*0.0286684);
}

double NNfunction_ns_chi02_uL::synapse0x2e618f0() {
   return (neuron0x2e392c0()*0.0186043);
}

double NNfunction_ns_chi02_uL::synapse0x2e61930() {
   return (neuron0x2e39600()*0.160414);
}

double NNfunction_ns_chi02_uL::synapse0x2e61970() {
   return (neuron0x2e39940()*-0.0692929);
}

double NNfunction_ns_chi02_uL::synapse0x2e619b0() {
   return (neuron0x2e39c80()*0.0356603);
}

double NNfunction_ns_chi02_uL::synapse0x2e619f0() {
   return (neuron0x2e39fc0()*-0.11635);
}

double NNfunction_ns_chi02_uL::synapse0x2e61a30() {
   return (neuron0x2e3a300()*0.108625);
}

double NNfunction_ns_chi02_uL::synapse0x2e61a70() {
   return (neuron0x2e3a640()*0.0720269);
}

double NNfunction_ns_chi02_uL::synapse0x2e61ab0() {
   return (neuron0x2e3a980()*-0.0443659);
}

double NNfunction_ns_chi02_uL::synapse0x2e61af0() {
   return (neuron0x2e3acc0()*-0.00992188);
}

double NNfunction_ns_chi02_uL::synapse0x2e61580() {
   return (neuron0x2e3b000()*0.10753);
}

double NNfunction_ns_chi02_uL::synapse0x2e615c0() {
   return (neuron0x2e3b560()*-0.0503811);
}

double NNfunction_ns_chi02_uL::synapse0x2e61c40() {
   return (neuron0x2e3b8a0()*0.0758878);
}

double NNfunction_ns_chi02_uL::synapse0x2e61c80() {
   return (neuron0x2e3bbe0()*0.0573448);
}

double NNfunction_ns_chi02_uL::synapse0x2e61cc0() {
   return (neuron0x2e3bf20()*0.0192111);
}

double NNfunction_ns_chi02_uL::synapse0x2e61d00() {
   return (neuron0x2e3c260()*-0.0165013);
}

double NNfunction_ns_chi02_uL::synapse0x2e61d40() {
   return (neuron0x2e3c5a0()*0.0346323);
}

double NNfunction_ns_chi02_uL::synapse0x2e61d80() {
   return (neuron0x2e3c8e0()*1.01917);
}

double NNfunction_ns_chi02_uL::synapse0x2e62100() {
   return (neuron0x2e37c90()*-0.0690117);
}

double NNfunction_ns_chi02_uL::synapse0x2e62140() {
   return (neuron0x2e37f40()*-6.52128);
}

double NNfunction_ns_chi02_uL::synapse0x2e62180() {
   return (neuron0x2e38280()*-0.218345);
}

double NNfunction_ns_chi02_uL::synapse0x2e621c0() {
   return (neuron0x2e385c0()*0.00374856);
}

double NNfunction_ns_chi02_uL::synapse0x2e62200() {
   return (neuron0x2e38900()*-0.0308374);
}

double NNfunction_ns_chi02_uL::synapse0x2e62240() {
   return (neuron0x2e38c40()*-0.0106555);
}

double NNfunction_ns_chi02_uL::synapse0x2e62280() {
   return (neuron0x2e38f80()*-0.0263125);
}

double NNfunction_ns_chi02_uL::synapse0x2e622c0() {
   return (neuron0x2e392c0()*0.0144026);
}

double NNfunction_ns_chi02_uL::synapse0x2e62300() {
   return (neuron0x2e39600()*-0.0390258);
}

double NNfunction_ns_chi02_uL::synapse0x2e62340() {
   return (neuron0x2e39940()*0.0106057);
}

double NNfunction_ns_chi02_uL::synapse0x2e62380() {
   return (neuron0x2e39c80()*0.0191947);
}

double NNfunction_ns_chi02_uL::synapse0x2e623c0() {
   return (neuron0x2e39fc0()*-0.18985);
}

double NNfunction_ns_chi02_uL::synapse0x2e62400() {
   return (neuron0x2e3a300()*-0.0210127);
}

double NNfunction_ns_chi02_uL::synapse0x2e62440() {
   return (neuron0x2e3a640()*-0.014033);
}

double NNfunction_ns_chi02_uL::synapse0x2e62480() {
   return (neuron0x2e3a980()*0.00550115);
}

double NNfunction_ns_chi02_uL::synapse0x2e624c0() {
   return (neuron0x2e3acc0()*0.0222563);
}

double NNfunction_ns_chi02_uL::synapse0x2e61f50() {
   return (neuron0x2e3b000()*-0.0117259);
}

double NNfunction_ns_chi02_uL::synapse0x2e61f90() {
   return (neuron0x2e3b560()*-0.0288141);
}

double NNfunction_ns_chi02_uL::synapse0x2e62610() {
   return (neuron0x2e3b8a0()*-0.02205);
}

double NNfunction_ns_chi02_uL::synapse0x2e62650() {
   return (neuron0x2e3bbe0()*-0.00990563);
}

double NNfunction_ns_chi02_uL::synapse0x2e62690() {
   return (neuron0x2e3bf20()*-0.050623);
}

double NNfunction_ns_chi02_uL::synapse0x2e626d0() {
   return (neuron0x2e3c260()*-0.0255936);
}

double NNfunction_ns_chi02_uL::synapse0x2e62710() {
   return (neuron0x2e3c5a0()*0.00823329);
}

double NNfunction_ns_chi02_uL::synapse0x2e62750() {
   return (neuron0x2e3c8e0()*4.15839);
}

double NNfunction_ns_chi02_uL::synapse0x2e3dba0() {
   return (neuron0x2e3cd50()*0.0290088);
}

double NNfunction_ns_chi02_uL::synapse0x2e3dbe0() {
   return (neuron0x2e3d590()*1.12056);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f100() {
   return (neuron0x2e3e070()*0.0388562);
}

double NNfunction_ns_chi02_uL::synapse0x2e3f140() {
   return (neuron0x2c02490()*-0.507372);
}

double NNfunction_ns_chi02_uL::synapse0x2e40bd0() {
   return (neuron0x2e3ee50()*0.266583);
}

double NNfunction_ns_chi02_uL::synapse0x2e40c10() {
   return (neuron0x2e40920()*-0.115865);
}

double NNfunction_ns_chi02_uL::synapse0x2e419a0() {
   return (neuron0x2e416f0()*-0.259478);
}

double NNfunction_ns_chi02_uL::synapse0x2e419e0() {
   return (neuron0x2e420c0()*0.121599);
}

double NNfunction_ns_chi02_uL::synapse0x2e42370() {
   return (neuron0x2e42a90()*1.14078);
}

double NNfunction_ns_chi02_uL::synapse0x2e423b0() {
   return (neuron0x2e43570()*1.02364);
}

double NNfunction_ns_chi02_uL::synapse0x2e42d40() {
   return (neuron0x2e43f40()*-0.34183);
}

double NNfunction_ns_chi02_uL::synapse0x2e42d80() {
   return (neuron0x2e41020()*-0.128222);
}

double NNfunction_ns_chi02_uL::synapse0x2e43820() {
   return (neuron0x2e45af0()*0.114058);
}

double NNfunction_ns_chi02_uL::synapse0x2e43860() {
   return (neuron0x2e464c0()*0.351555);
}

double NNfunction_ns_chi02_uL::synapse0x2e441f0() {
   return (neuron0x2e46e90()*0.856947);
}

double NNfunction_ns_chi02_uL::synapse0x2e44230() {
   return (neuron0x2e47860()*0.101674);
}

double NNfunction_ns_chi02_uL::synapse0x2e412d0() {
   return (neuron0x2e49670()*-0.107999);
}

double NNfunction_ns_chi02_uL::synapse0x2e41310() {
   return (neuron0x2e49950()*0.428964);
}

double NNfunction_ns_chi02_uL::synapse0x2e45da0() {
   return (neuron0x2e4a320()*-0.0776518);
}

double NNfunction_ns_chi02_uL::synapse0x2e45de0() {
   return (neuron0x2e4acf0()*0.408229);
}

double NNfunction_ns_chi02_uL::synapse0x2e46770() {
   return (neuron0x2e4b6c0()*-2.2717);
}

double NNfunction_ns_chi02_uL::synapse0x2e467b0() {
   return (neuron0x2e4c090()*-3.42625);
}

double NNfunction_ns_chi02_uL::synapse0x2e47140() {
   return (neuron0x2e44be0()*0.081596);
}

double NNfunction_ns_chi02_uL::synapse0x2e47180() {
   return (neuron0x2e455b0()*1.26089);
}

double NNfunction_ns_chi02_uL::synapse0x2e47b10() {
   return (neuron0x2e4ee20()*-1.18603);
}

double NNfunction_ns_chi02_uL::synapse0x2e47b50() {
   return (neuron0x2e4f7f0()*0.0609486);
}

double NNfunction_ns_chi02_uL::synapse0x2e3aba0() {
   return (neuron0x2e501c0()*-0.0834184);
}

double NNfunction_ns_chi02_uL::synapse0x2e3abe0() {
   return (neuron0x2e50b90()*-0.0338571);
}

double NNfunction_ns_chi02_uL::synapse0x2e49c00() {
   return (neuron0x2e51560()*0.142581);
}

double NNfunction_ns_chi02_uL::synapse0x2e49c40() {
   return (neuron0x2e51f30()*0.1189);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a5d0() {
   return (neuron0x2e52900()*-1.27613);
}

double NNfunction_ns_chi02_uL::synapse0x2e4a610() {
   return (neuron0x2e532d0()*2.56182);
}

double NNfunction_ns_chi02_uL::synapse0x2e4afa0() {
   return (neuron0x2e49360()*-1.94158);
}

double NNfunction_ns_chi02_uL::synapse0x2e4afe0() {
   return (neuron0x2e55eb0()*-0.0604998);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b970() {
   return (neuron0x2e56880()*-0.600048);
}

double NNfunction_ns_chi02_uL::synapse0x2e4b9b0() {
   return (neuron0x2e57250()*-0.162721);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c340() {
   return (neuron0x2e57c20()*-1.10846);
}

double NNfunction_ns_chi02_uL::synapse0x2e4c380() {
   return (neuron0x2e585f0()*-0.0695471);
}

double NNfunction_ns_chi02_uL::synapse0x2e44e90() {
   return (neuron0x2e58fc0()*-1.35002);
}

double NNfunction_ns_chi02_uL::synapse0x2e44ed0() {
   return (neuron0x2e59990()*-1.1818);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e740() {
   return (neuron0x2e5a360()*0.119772);
}

double NNfunction_ns_chi02_uL::synapse0x2e4e780() {
   return (neuron0x2e5af40()*2.41956);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f0d0() {
   return (neuron0x2e5b910()*0.272948);
}

double NNfunction_ns_chi02_uL::synapse0x2e4f110() {
   return (neuron0x2e4c790()*1.24286);
}

double NNfunction_ns_chi02_uL::synapse0x2e4faa0() {
   return (neuron0x2e4d160()*0.926496);
}

double NNfunction_ns_chi02_uL::synapse0x2e4fae0() {
   return (neuron0x2e4db30()*2.80787);
}

double NNfunction_ns_chi02_uL::synapse0x2e50470() {
   return (neuron0x2e60170()*-0.201235);
}

double NNfunction_ns_chi02_uL::synapse0x2e504b0() {
   return (neuron0x2e60a20()*-0.384058);
}

double NNfunction_ns_chi02_uL::synapse0x2e50e40() {
   return (neuron0x2e613f0()*-0.183732);
}

double NNfunction_ns_chi02_uL::synapse0x2e50e80() {
   return (neuron0x2e61dc0()*-0.323034);
}

double NNfunction_ns_chi02_uL::synapse0x2e53580() {
   return (neuron0x2e3cd50()*0.0580091);
}

double NNfunction_ns_chi02_uL::synapse0x2e535c0() {
   return (neuron0x2e3d590()*0.145296);
}

double NNfunction_ns_chi02_uL::synapse0x2e48b40() {
   return (neuron0x2e3e070()*-0.176831);
}

double NNfunction_ns_chi02_uL::synapse0x2e48b80() {
   return (neuron0x2c02490()*-1.70171);
}

double NNfunction_ns_chi02_uL::synapse0x2e56160() {
   return (neuron0x2e3ee50()*1.53789);
}

double NNfunction_ns_chi02_uL::synapse0x2e561a0() {
   return (neuron0x2e40920()*-0.39673);
}

double NNfunction_ns_chi02_uL::synapse0x2e56b30() {
   return (neuron0x2e416f0()*-4.30982);
}

double NNfunction_ns_chi02_uL::synapse0x2e56b70() {
   return (neuron0x2e420c0()*0.0940284);
}

double NNfunction_ns_chi02_uL::synapse0x2e57500() {
   return (neuron0x2e42a90()*3.56672);
}

double NNfunction_ns_chi02_uL::synapse0x2e57540() {
   return (neuron0x2e43570()*-1.07047);
}

double NNfunction_ns_chi02_uL::synapse0x2e57ed0() {
   return (neuron0x2e43f40()*1.11537);
}

double NNfunction_ns_chi02_uL::synapse0x2e57f10() {
   return (neuron0x2e41020()*0.195361);
}

double NNfunction_ns_chi02_uL::synapse0x2e588a0() {
   return (neuron0x2e45af0()*-0.372151);
}

double NNfunction_ns_chi02_uL::synapse0x2e588e0() {
   return (neuron0x2e464c0()*0.871703);
}

double NNfunction_ns_chi02_uL::synapse0x2e59270() {
   return (neuron0x2e46e90()*0.885142);
}

double NNfunction_ns_chi02_uL::synapse0x2e592b0() {
   return (neuron0x2e47860()*-0.225211);
}

double NNfunction_ns_chi02_uL::synapse0x2e59c40() {
   return (neuron0x2e49670()*-0.055047);
}

double NNfunction_ns_chi02_uL::synapse0x2e59c80() {
   return (neuron0x2e49950()*0.727315);
}

double NNfunction_ns_chi02_uL::synapse0x2e5a610() {
   return (neuron0x2e4a320()*0.273248);
}

double NNfunction_ns_chi02_uL::synapse0x2e5a650() {
   return (neuron0x2e4acf0()*1.13827);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b1f0() {
   return (neuron0x2e4b6c0()*2.56554);
}

double NNfunction_ns_chi02_uL::synapse0x2e5b230() {
   return (neuron0x2e4c090()*-2.22169);
}

double NNfunction_ns_chi02_uL::synapse0x2e5bbc0() {
   return (neuron0x2e44be0()*-0.0137002);
}

double NNfunction_ns_chi02_uL::synapse0x2e5bc00() {
   return (neuron0x2e455b0()*-1.81957);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ca40() {
   return (neuron0x2e4ee20()*-3.07155);
}

double NNfunction_ns_chi02_uL::synapse0x2e4ca80() {
   return (neuron0x2e4f7f0()*0.303863);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d410() {
   return (neuron0x2e501c0()*0.320333);
}

double NNfunction_ns_chi02_uL::synapse0x2e4d450() {
   return (neuron0x2e50b90()*0.132491);
}

double NNfunction_ns_chi02_uL::synapse0x2e4dde0() {
   return (neuron0x2e51560()*-0.0326077);
}

double NNfunction_ns_chi02_uL::synapse0x2e4de20() {
   return (neuron0x2e51f30()*-0.256452);
}

double NNfunction_ns_chi02_uL::synapse0x2e60300() {
   return (neuron0x2e52900()*0.342113);
}

double NNfunction_ns_chi02_uL::synapse0x2e60340() {
   return (neuron0x2e532d0()*-1.27227);
}

double NNfunction_ns_chi02_uL::synapse0x2e60cd0() {
   return (neuron0x2e49360()*2.21516);
}

double NNfunction_ns_chi02_uL::synapse0x2e60d10() {
   return (neuron0x2e55eb0()*-0.684816);
}

double NNfunction_ns_chi02_uL::synapse0x2e616a0() {
   return (neuron0x2e56880()*-2.19208);
}

double NNfunction_ns_chi02_uL::synapse0x2e616e0() {
   return (neuron0x2e57250()*-0.605014);
}

double NNfunction_ns_chi02_uL::synapse0x2e62070() {
   return (neuron0x2e57c20()*-0.894492);
}

double NNfunction_ns_chi02_uL::synapse0x2e620b0() {
   return (neuron0x2e585f0()*-0.200758);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d000() {
   return (neuron0x2e58fc0()*1.9871);
}

double NNfunction_ns_chi02_uL::synapse0x2e3d040() {
   return (neuron0x2e59990()*1.11861);
}

double NNfunction_ns_chi02_uL::synapse0x2e51810() {
   return (neuron0x2e5a360()*-0.316475);
}

double NNfunction_ns_chi02_uL::synapse0x2e51850() {
   return (neuron0x2e5af40()*0.281092);
}

double NNfunction_ns_chi02_uL::synapse0x2e62790() {
   return (neuron0x2e5b910()*0.3742);
}

double NNfunction_ns_chi02_uL::synapse0x2e627d0() {
   return (neuron0x2e4c790()*0.279743);
}

double NNfunction_ns_chi02_uL::synapse0x2e62810() {
   return (neuron0x2e4d160()*1.11342);
}

double NNfunction_ns_chi02_uL::synapse0x2e62850() {
   return (neuron0x2e4db30()*0.042407);
}

double NNfunction_ns_chi02_uL::synapse0x2e69700() {
   return (neuron0x2e60170()*-0.0758982);
}

double NNfunction_ns_chi02_uL::synapse0x2e69740() {
   return (neuron0x2e60a20()*-0.901299);
}

double NNfunction_ns_chi02_uL::synapse0x2e69780() {
   return (neuron0x2e613f0()*1.15536);
}

double NNfunction_ns_chi02_uL::synapse0x2e697c0() {
   return (neuron0x2e61dc0()*-0.337025);
}

double NNfunction_ns_chi02_uL::synapse0x2e69b40() {
   return (neuron0x2e3cd50()*0.0536741);
}

double NNfunction_ns_chi02_uL::synapse0x2e69b80() {
   return (neuron0x2e3d590()*-1.67284);
}

double NNfunction_ns_chi02_uL::synapse0x2e69bc0() {
   return (neuron0x2e3e070()*0.0374613);
}

double NNfunction_ns_chi02_uL::synapse0x2e69c00() {
   return (neuron0x2c02490()*-0.0816068);
}

double NNfunction_ns_chi02_uL::synapse0x2e69c40() {
   return (neuron0x2e3ee50()*0.402391);
}

double NNfunction_ns_chi02_uL::synapse0x2e69c80() {
   return (neuron0x2e40920()*0.0443697);
}

double NNfunction_ns_chi02_uL::synapse0x2e69cc0() {
   return (neuron0x2e416f0()*-0.300558);
}

double NNfunction_ns_chi02_uL::synapse0x2e69d00() {
   return (neuron0x2e420c0()*-0.188614);
}

double NNfunction_ns_chi02_uL::synapse0x2e69d40() {
   return (neuron0x2e42a90()*-0.040363);
}

double NNfunction_ns_chi02_uL::synapse0x2e69d80() {
   return (neuron0x2e43570()*-1.56176);
}

double NNfunction_ns_chi02_uL::synapse0x2e69dc0() {
   return (neuron0x2e43f40()*-1.64581);
}

double NNfunction_ns_chi02_uL::synapse0x2e69e00() {
   return (neuron0x2e41020()*0.105727);
}

double NNfunction_ns_chi02_uL::synapse0x2e69e40() {
   return (neuron0x2e45af0()*-0.407222);
}

double NNfunction_ns_chi02_uL::synapse0x2e69e80() {
   return (neuron0x2e464c0()*1.34048);
}

double NNfunction_ns_chi02_uL::synapse0x2e69ec0() {
   return (neuron0x2e46e90()*-0.315372);
}

double NNfunction_ns_chi02_uL::synapse0x2e69f00() {
   return (neuron0x2e47860()*-0.164795);
}

double NNfunction_ns_chi02_uL::synapse0x2e69990() {
   return (neuron0x2e49670()*0.401781);
}

double NNfunction_ns_chi02_uL::synapse0x2e699d0() {
   return (neuron0x2e49950()*-1.03435);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a050() {
   return (neuron0x2e4a320()*0.157907);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a090() {
   return (neuron0x2e4acf0()*-0.988771);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a0d0() {
   return (neuron0x2e4b6c0()*3.1121);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a110() {
   return (neuron0x2e4c090()*4.60156);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a150() {
   return (neuron0x2e44be0()*-0.504731);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a190() {
   return (neuron0x2e455b0()*-0.715965);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a1d0() {
   return (neuron0x2e4ee20()*-0.479087);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a210() {
   return (neuron0x2e4f7f0()*-0.154883);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a250() {
   return (neuron0x2e501c0()*0.375925);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a290() {
   return (neuron0x2e50b90()*0.0798481);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a2d0() {
   return (neuron0x2e51560()*-0.227505);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a310() {
   return (neuron0x2e51f30()*-0.052397);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a350() {
   return (neuron0x2e52900()*0.921515);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a390() {
   return (neuron0x2e532d0()*2.44378);
}

double NNfunction_ns_chi02_uL::synapse0x2e69f40() {
   return (neuron0x2e49360()*-1.79523);
}

double NNfunction_ns_chi02_uL::synapse0x2e69f80() {
   return (neuron0x2e55eb0()*-0.836195);
}

double NNfunction_ns_chi02_uL::synapse0x2e69fc0() {
   return (neuron0x2e56880()*-0.662355);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a000() {
   return (neuron0x2e57250()*-1.34022);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a5e0() {
   return (neuron0x2e57c20()*0.933438);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a620() {
   return (neuron0x2e585f0()*0.132407);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a660() {
   return (neuron0x2e58fc0()*2.00511);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a6a0() {
   return (neuron0x2e59990()*0.0756365);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a6e0() {
   return (neuron0x2e5a360()*-0.260197);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a720() {
   return (neuron0x2e5af40()*-2.13856);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a760() {
   return (neuron0x2e5b910()*-0.722598);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a7a0() {
   return (neuron0x2e4c790()*-0.654049);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a7e0() {
   return (neuron0x2e4d160()*-0.640088);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a820() {
   return (neuron0x2e4db30()*0.264065);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a860() {
   return (neuron0x2e60170()*0.274168);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a8a0() {
   return (neuron0x2e60a20()*0.875608);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a8e0() {
   return (neuron0x2e613f0()*0.0507899);
}

double NNfunction_ns_chi02_uL::synapse0x2e6a920() {
   return (neuron0x2e61dc0()*-1.95479);
}

double NNfunction_ns_chi02_uL::synapse0x2e6aca0() {
   return (neuron0x2e3cd50()*0.04473);
}

double NNfunction_ns_chi02_uL::synapse0x2e6ace0() {
   return (neuron0x2e3d590()*0.351965);
}

double NNfunction_ns_chi02_uL::synapse0x2e6ad20() {
   return (neuron0x2e3e070()*0.00781016);
}

double NNfunction_ns_chi02_uL::synapse0x2e6ad60() {
   return (neuron0x2c02490()*1.10071);
}

double NNfunction_ns_chi02_uL::synapse0x2e6ada0() {
   return (neuron0x2e3ee50()*2.4978);
}

double NNfunction_ns_chi02_uL::synapse0x2e6ade0() {
   return (neuron0x2e40920()*-0.179875);
}

double NNfunction_ns_chi02_uL::synapse0x2e6ae20() {
   return (neuron0x2e416f0()*-3.68195);
}

double NNfunction_ns_chi02_uL::synapse0x2e6ae60() {
   return (neuron0x2e420c0()*0.089183);
}

double NNfunction_ns_chi02_uL::synapse0x2e6aea0() {
   return (neuron0x2e42a90()*-0.807769);
}

double NNfunction_ns_chi02_uL::synapse0x2e6aee0() {
   return (neuron0x2e43570()*-2.38043);
}

double NNfunction_ns_chi02_uL::synapse0x2e6af20() {
   return (neuron0x2e43f40()*0.459802);
}

double NNfunction_ns_chi02_uL::synapse0x2e6af60() {
   return (neuron0x2e41020()*0.0258541);
}

double NNfunction_ns_chi02_uL::synapse0x2e6afa0() {
   return (neuron0x2e45af0()*0.0519082);
}

double NNfunction_ns_chi02_uL::synapse0x2e6afe0() {
   return (neuron0x2e464c0()*1.58602);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b020() {
   return (neuron0x2e46e90()*1.37357);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b060() {
   return (neuron0x2e47860()*-0.0343837);
}

double NNfunction_ns_chi02_uL::synapse0x2e6aaf0() {
   return (neuron0x2e49670()*-0.14792);
}

double NNfunction_ns_chi02_uL::synapse0x2e6ab30() {
   return (neuron0x2e49950()*1.66134);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b1b0() {
   return (neuron0x2e4a320()*0.0854145);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b1f0() {
   return (neuron0x2e4acf0()*0.362642);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b230() {
   return (neuron0x2e4b6c0()*0.563828);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b270() {
   return (neuron0x2e4c090()*-0.0173474);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b2b0() {
   return (neuron0x2e44be0()*0.302679);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b2f0() {
   return (neuron0x2e455b0()*0.185832);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b330() {
   return (neuron0x2e4ee20()*-0.142389);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b370() {
   return (neuron0x2e4f7f0()*0.097862);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b3b0() {
   return (neuron0x2e501c0()*-0.043619);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b3f0() {
   return (neuron0x2e50b90()*0.0249637);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b430() {
   return (neuron0x2e51560()*0.0494242);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b470() {
   return (neuron0x2e51f30()*-0.0456896);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b4b0() {
   return (neuron0x2e52900()*-0.503393);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b4f0() {
   return (neuron0x2e532d0()*-3.7738);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b0a0() {
   return (neuron0x2e49360()*-0.870049);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b0e0() {
   return (neuron0x2e55eb0()*1.5503);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b120() {
   return (neuron0x2e56880()*0.337876);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b160() {
   return (neuron0x2e57250()*1.91621);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b740() {
   return (neuron0x2e57c20()*-0.826136);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b780() {
   return (neuron0x2e585f0()*-0.0931215);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b7c0() {
   return (neuron0x2e58fc0()*-0.361612);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b800() {
   return (neuron0x2e59990()*0.166673);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b840() {
   return (neuron0x2e5a360()*-0.585517);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b880() {
   return (neuron0x2e5af40()*-1.55921);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b8c0() {
   return (neuron0x2e5b910()*0.262386);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b900() {
   return (neuron0x2e4c790()*0.677057);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b940() {
   return (neuron0x2e4d160()*-0.510953);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b980() {
   return (neuron0x2e4db30()*0.0274872);
}

double NNfunction_ns_chi02_uL::synapse0x2e6b9c0() {
   return (neuron0x2e60170()*-0.0464189);
}

double NNfunction_ns_chi02_uL::synapse0x2e6ba00() {
   return (neuron0x2e60a20()*-0.429456);
}

double NNfunction_ns_chi02_uL::synapse0x2e6ba40() {
   return (neuron0x2e613f0()*0.462202);
}

double NNfunction_ns_chi02_uL::synapse0x2e6ba80() {
   return (neuron0x2e61dc0()*-1.01965);
}

double NNfunction_ns_chi02_uL::synapse0x2e6be00() {
   return (neuron0x2e3cd50()*-0.0847754);
}

double NNfunction_ns_chi02_uL::synapse0x2e6be40() {
   return (neuron0x2e3d590()*0.428108);
}

double NNfunction_ns_chi02_uL::synapse0x2e6be80() {
   return (neuron0x2e3e070()*0.21197);
}

double NNfunction_ns_chi02_uL::synapse0x2e6bec0() {
   return (neuron0x2c02490()*1.74832);
}

double NNfunction_ns_chi02_uL::synapse0x2e6bf00() {
   return (neuron0x2e3ee50()*-0.278297);
}

double NNfunction_ns_chi02_uL::synapse0x2e6bf40() {
   return (neuron0x2e40920()*0.263366);
}

double NNfunction_ns_chi02_uL::synapse0x2e6bf80() {
   return (neuron0x2e416f0()*0.648217);
}

double NNfunction_ns_chi02_uL::synapse0x2e6bfc0() {
   return (neuron0x2e420c0()*-0.0968647);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c000() {
   return (neuron0x2e42a90()*1.64064);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c040() {
   return (neuron0x2e43570()*3.29402);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c080() {
   return (neuron0x2e43f40()*-0.782113);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c0c0() {
   return (neuron0x2e41020()*-0.0391317);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c100() {
   return (neuron0x2e45af0()*-4.08829);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c140() {
   return (neuron0x2e464c0()*-1.95602);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c180() {
   return (neuron0x2e46e90()*-3.24251);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c1c0() {
   return (neuron0x2e47860()*0.138983);
}

double NNfunction_ns_chi02_uL::synapse0x2e6bc50() {
   return (neuron0x2e49670()*1.62396);
}

double NNfunction_ns_chi02_uL::synapse0x2e6bc90() {
   return (neuron0x2e49950()*-1.81489);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c310() {
   return (neuron0x2e4a320()*-0.24556);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c350() {
   return (neuron0x2e4acf0()*-2.2042);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c390() {
   return (neuron0x2e4b6c0()*-1.13455);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c3d0() {
   return (neuron0x2e4c090()*1.47966);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c410() {
   return (neuron0x2e44be0()*3.47352);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c450() {
   return (neuron0x2e455b0()*0.854741);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c490() {
   return (neuron0x2e4ee20()*0.00654897);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c4d0() {
   return (neuron0x2e4f7f0()*-0.160794);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c510() {
   return (neuron0x2e501c0()*5.46076);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c550() {
   return (neuron0x2e50b90()*-0.111676);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c590() {
   return (neuron0x2e51560()*0.0271277);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c5d0() {
   return (neuron0x2e51f30()*0.210873);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c610() {
   return (neuron0x2e52900()*0.315961);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c650() {
   return (neuron0x2e532d0()*4.5017);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c200() {
   return (neuron0x2e49360()*0.158821);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c240() {
   return (neuron0x2e55eb0()*-3.57819);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c280() {
   return (neuron0x2e56880()*-3.03651);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c2c0() {
   return (neuron0x2e57250()*-4.26297);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c8a0() {
   return (neuron0x2e57c20()*0.480583);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c8e0() {
   return (neuron0x2e585f0()*0.0592994);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c920() {
   return (neuron0x2e58fc0()*-1.50957);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c960() {
   return (neuron0x2e59990()*0.0669613);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c9a0() {
   return (neuron0x2e5a360()*3.98095);
}

double NNfunction_ns_chi02_uL::synapse0x2e6c9e0() {
   return (neuron0x2e5af40()*1.02313);
}

double NNfunction_ns_chi02_uL::synapse0x2e6ca20() {
   return (neuron0x2e5b910()*4.45871);
}

double NNfunction_ns_chi02_uL::synapse0x2e6ca60() {
   return (neuron0x2e4c790()*-2.06);
}

double NNfunction_ns_chi02_uL::synapse0x2e6caa0() {
   return (neuron0x2e4d160()*1.09311);
}

double NNfunction_ns_chi02_uL::synapse0x2e6cae0() {
   return (neuron0x2e4db30()*-0.889612);
}

double NNfunction_ns_chi02_uL::synapse0x2e6cb20() {
   return (neuron0x2e60170()*0.215749);
}

double NNfunction_ns_chi02_uL::synapse0x2e6cb60() {
   return (neuron0x2e60a20()*0.686401);
}

double NNfunction_ns_chi02_uL::synapse0x2e6cba0() {
   return (neuron0x2e613f0()*-0.555501);
}

double NNfunction_ns_chi02_uL::synapse0x2e6cbe0() {
   return (neuron0x2e61dc0()*1.42812);
}

double NNfunction_ns_chi02_uL::synapse0x2e6ce40() {
   return (neuron0x2e68fc0()*-5.03481);
}

double NNfunction_ns_chi02_uL::synapse0x2e6ce80() {
   return (neuron0x2e69360()*-3.98025);
}

double NNfunction_ns_chi02_uL::synapse0x2e6cec0() {
   return (neuron0x2e69800()*-2.46198);
}

double NNfunction_ns_chi02_uL::synapse0x2e6cf00() {
   return (neuron0x2e6a960()*8.10951);
}

double NNfunction_ns_chi02_uL::synapse0x2e6cf40() {
   return (neuron0x2e6bac0()*-9.23621);
}

