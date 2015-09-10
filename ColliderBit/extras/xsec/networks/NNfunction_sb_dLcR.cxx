#include "NNfunction_sb_dLcR.h"
#include <cmath>

double NNfunction_sb_dLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.7935)/15.0279;
   input1 = (in1 - 47.0066)/772.153;
   input2 = (in2 - 380.538)/481.943;
   input3 = (in3 - 236.802)/631.033;
   input4 = (in4 - 735.525)/722.488;
   input5 = (in5 - 627.895)/692.226;
   input6 = (in6 - 635.335)/699.059;
   input7 = (in7 - 630.53)/691.759;
   input8 = (in8 - 621.757)/705.727;
   input9 = (in9 - 611.683)/688.097;
   input10 = (in10 - 632.721)/721.11;
   input11 = (in11 - 494.844)/305.121;
   input12 = (in12 - 647.085)/589.01;
   input13 = (in13 - 501.088)/364.89;
   input14 = (in14 - 646.931)/568.485;
   input15 = (in15 - 499.077)/305.373;
   input16 = (in16 - 460.065)/394.553;
   input17 = (in17 - 661.408)/612.349;
   input18 = (in18 - 653.589)/607.993;
   input19 = (in19 - 662.167)/606.101;
   input20 = (in20 - -188.27)/406.342;
   input21 = (in21 - -241.201)/888.088;
   input22 = (in22 - 6.48116)/893.732;
   input23 = (in23 - -23.5256)/492.285;
   switch(index) {
     case 0:
         return neuron0x1b58360();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLcR::Value(int index, double* input) {
   input0 = (input[0] - 22.7935)/15.0279;
   input1 = (input[1] - 47.0066)/772.153;
   input2 = (input[2] - 380.538)/481.943;
   input3 = (input[3] - 236.802)/631.033;
   input4 = (input[4] - 735.525)/722.488;
   input5 = (input[5] - 627.895)/692.226;
   input6 = (input[6] - 635.335)/699.059;
   input7 = (input[7] - 630.53)/691.759;
   input8 = (input[8] - 621.757)/705.727;
   input9 = (input[9] - 611.683)/688.097;
   input10 = (input[10] - 632.721)/721.11;
   input11 = (input[11] - 494.844)/305.121;
   input12 = (input[12] - 647.085)/589.01;
   input13 = (input[13] - 501.088)/364.89;
   input14 = (input[14] - 646.931)/568.485;
   input15 = (input[15] - 499.077)/305.373;
   input16 = (input[16] - 460.065)/394.553;
   input17 = (input[17] - 661.408)/612.349;
   input18 = (input[18] - 653.589)/607.993;
   input19 = (input[19] - 662.167)/606.101;
   input20 = (input[20] - -188.27)/406.342;
   input21 = (input[21] - -241.201)/888.088;
   input22 = (input[22] - 6.48116)/893.732;
   input23 = (input[23] - -23.5256)/492.285;
   switch(index) {
     case 0:
         return neuron0x1b58360();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLcR::neuron0x1b244e0() {
   return input0;
}

double NNfunction_sb_dLcR::neuron0x1b24790() {
   return input1;
}

double NNfunction_sb_dLcR::neuron0x1b24ad0() {
   return input2;
}

double NNfunction_sb_dLcR::neuron0x1b24e10() {
   return input3;
}

double NNfunction_sb_dLcR::neuron0x1b25150() {
   return input4;
}

double NNfunction_sb_dLcR::neuron0x1b25490() {
   return input5;
}

double NNfunction_sb_dLcR::neuron0x1b257d0() {
   return input6;
}

double NNfunction_sb_dLcR::neuron0x1b25b10() {
   return input7;
}

double NNfunction_sb_dLcR::neuron0x1b25e50() {
   return input8;
}

double NNfunction_sb_dLcR::neuron0x1b26190() {
   return input9;
}

double NNfunction_sb_dLcR::neuron0x1b264d0() {
   return input10;
}

double NNfunction_sb_dLcR::neuron0x1b26810() {
   return input11;
}

double NNfunction_sb_dLcR::neuron0x1b26b50() {
   return input12;
}

double NNfunction_sb_dLcR::neuron0x1b26e90() {
   return input13;
}

double NNfunction_sb_dLcR::neuron0x1b271d0() {
   return input14;
}

double NNfunction_sb_dLcR::neuron0x1b27510() {
   return input15;
}

double NNfunction_sb_dLcR::neuron0x1b27850() {
   return input16;
}

double NNfunction_sb_dLcR::neuron0x1b27db0() {
   return input17;
}

double NNfunction_sb_dLcR::neuron0x1b27fd0() {
   return input18;
}

double NNfunction_sb_dLcR::neuron0x1b28310() {
   return input19;
}

double NNfunction_sb_dLcR::neuron0x1b28650() {
   return input20;
}

double NNfunction_sb_dLcR::neuron0x1b28990() {
   return input21;
}

double NNfunction_sb_dLcR::neuron0x1b28cd0() {
   return input22;
}

double NNfunction_sb_dLcR::neuron0x1b29010() {
   return input23;
}

double NNfunction_sb_dLcR::input0x1b29480() {
   double input = -0.83735;
   input += synapse0x1b24460();
   input += synapse0x1b244a0();
   input += synapse0x1b29730();
   input += synapse0x1b29770();
   input += synapse0x1b297b0();
   input += synapse0x1b297f0();
   input += synapse0x1b29830();
   input += synapse0x1b29870();
   input += synapse0x1b298b0();
   input += synapse0x1b298f0();
   input += synapse0x1b29930();
   input += synapse0x1b29970();
   input += synapse0x1b299b0();
   input += synapse0x1b299f0();
   input += synapse0x1b29a30();
   input += synapse0x1b29a70();
   input += synapse0x1b243d0();
   input += synapse0x1b24410();
   input += synapse0x18df5e0();
   input += synapse0x18df620();
   input += synapse0x1b29cd0();
   input += synapse0x1b29d10();
   input += synapse0x1b29d50();
   input += synapse0x1b29d90();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b29480() {
   double input = input0x1b29480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b29dd0() {
   double input = -0.377258;
   input += synapse0x1b2a110();
   input += synapse0x1b2a150();
   input += synapse0x1b2a190();
   input += synapse0x1b2a1d0();
   input += synapse0x1b2a210();
   input += synapse0x1b2a250();
   input += synapse0x1b2a290();
   input += synapse0x1b2a2d0();
   input += synapse0x1b2a310();
   input += synapse0x1b29bc0();
   input += synapse0x1b29c00();
   input += synapse0x1b29c40();
   input += synapse0x1b29c80();
   input += synapse0x1b2a560();
   input += synapse0x1b2a5a0();
   input += synapse0x1b2a5e0();
   input += synapse0x1b29f60();
   input += synapse0x1b29fa0();
   input += synapse0x1b2a730();
   input += synapse0x1b2a770();
   input += synapse0x1b2a7b0();
   input += synapse0x1b2a7f0();
   input += synapse0x1b2a830();
   input += synapse0x1b2a870();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b29dd0() {
   double input = input0x1b29dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b2a8b0() {
   double input = -2.77948;
   input += synapse0x1b2abf0();
   input += synapse0x1b2ac30();
   input += synapse0x1b2ac70();
   input += synapse0x1b2acb0();
   input += synapse0x1b2acf0();
   input += synapse0x1b2ad30();
   input += synapse0x1b2ad70();
   input += synapse0x1b2adb0();
   input += synapse0x1b2adf0();
   input += synapse0x1b2ae30();
   input += synapse0x1b2ae70();
   input += synapse0x1b2aeb0();
   input += synapse0x1b2aef0();
   input += synapse0x1b2af30();
   input += synapse0x1b2af70();
   input += synapse0x1b2afb0();
   input += synapse0x1b2aa40();
   input += synapse0x1b2aa80();
   input += synapse0x18de730();
   input += synapse0x1b13550();
   input += synapse0x18ed4b0();
   input += synapse0x18ed4f0();
   input += synapse0x1a089f0();
   input += synapse0x1a08a30();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b2a8b0() {
   double input = input0x1b2a8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b2a350() {
   double input = -1.03705;
   input += synapse0x18edd30();
   input += synapse0x1b242d0();
   input += synapse0x1b2a4e0();
   input += synapse0x1b2a520();
   input += synapse0x1b2b100();
   input += synapse0x1b2b140();
   input += synapse0x1b2b180();
   input += synapse0x1b2b1c0();
   input += synapse0x1b2b200();
   input += synapse0x1b2b240();
   input += synapse0x1b2b280();
   input += synapse0x1b2b2c0();
   input += synapse0x1b2b300();
   input += synapse0x1b2b340();
   input += synapse0x1b2b380();
   input += synapse0x1b2b3c0();
   input += synapse0x1b24240();
   input += synapse0x1b24280();
   input += synapse0x1b2b510();
   input += synapse0x1b2b550();
   input += synapse0x1b2b590();
   input += synapse0x1b2b5d0();
   input += synapse0x1b2b610();
   input += synapse0x1b2b650();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b2a350() {
   double input = input0x1b2a350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b2b690() {
   double input = -0.169523;
   input += synapse0x1b2b9d0();
   input += synapse0x1b2ba10();
   input += synapse0x1b2ba50();
   input += synapse0x1b2ba90();
   input += synapse0x1b2bad0();
   input += synapse0x1b2bb10();
   input += synapse0x1b2bb50();
   input += synapse0x1b2bb90();
   input += synapse0x1b2bbd0();
   input += synapse0x1b2bc10();
   input += synapse0x1b2bc50();
   input += synapse0x1b2bc90();
   input += synapse0x1b2bcd0();
   input += synapse0x1b2bd10();
   input += synapse0x1b2bd50();
   input += synapse0x1b2bd90();
   input += synapse0x1b2b820();
   input += synapse0x1b2b860();
   input += synapse0x1b2bee0();
   input += synapse0x1b2bf20();
   input += synapse0x1b2bf60();
   input += synapse0x1b2bfa0();
   input += synapse0x1b2bfe0();
   input += synapse0x1b2c020();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b2b690() {
   double input = input0x1b2b690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b2c060() {
   double input = 1.34901;
   input += synapse0x1b2c3a0();
   input += synapse0x1b2c3e0();
   input += synapse0x1b2c420();
   input += synapse0x1b2c460();
   input += synapse0x1b2c4a0();
   input += synapse0x1b2c4e0();
   input += synapse0x1b2c520();
   input += synapse0x1b2c560();
   input += synapse0x1b2c5a0();
   input += synapse0x18ed800();
   input += synapse0x18ed840();
   input += synapse0x18ed880();
   input += synapse0x18ed8c0();
   input += synapse0x18ed900();
   input += synapse0x18ed940();
   input += synapse0x18ed980();
   input += synapse0x1b2c1f0();
   input += synapse0x1b2c230();
   input += synapse0x18edad0();
   input += synapse0x18edb10();
   input += synapse0x18edb50();
   input += synapse0x18edb90();
   input += synapse0x18edbd0();
   input += synapse0x1b2cdf0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b2c060() {
   double input = input0x1b2c060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b2ce30() {
   double input = -0.393957;
   input += synapse0x1b2d170();
   input += synapse0x1b2d1b0();
   input += synapse0x1b2d1f0();
   input += synapse0x1b2d230();
   input += synapse0x1b2d270();
   input += synapse0x1b2d2b0();
   input += synapse0x1b2d2f0();
   input += synapse0x1b2d330();
   input += synapse0x1b2d370();
   input += synapse0x1b2d3b0();
   input += synapse0x1b2d3f0();
   input += synapse0x1b2d430();
   input += synapse0x1b2d470();
   input += synapse0x1b2d4b0();
   input += synapse0x1b2d4f0();
   input += synapse0x1b2d530();
   input += synapse0x1b2cfc0();
   input += synapse0x1b2d000();
   input += synapse0x1b2d680();
   input += synapse0x1b2d6c0();
   input += synapse0x1b2d700();
   input += synapse0x1b2d740();
   input += synapse0x1b2d780();
   input += synapse0x1b2d7c0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b2ce30() {
   double input = input0x1b2ce30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b2d800() {
   double input = 0.27356;
   input += synapse0x1b2db40();
   input += synapse0x1b2db80();
   input += synapse0x1b2dbc0();
   input += synapse0x1b2dc00();
   input += synapse0x1b2dc40();
   input += synapse0x1b2dc80();
   input += synapse0x1b2dcc0();
   input += synapse0x1b2dd00();
   input += synapse0x1b2dd40();
   input += synapse0x1b2dd80();
   input += synapse0x1b2ddc0();
   input += synapse0x1b2de00();
   input += synapse0x1b2de40();
   input += synapse0x1b2de80();
   input += synapse0x1b2dec0();
   input += synapse0x1b2df00();
   input += synapse0x1b2d990();
   input += synapse0x1b2d9d0();
   input += synapse0x1b2e050();
   input += synapse0x1b2e090();
   input += synapse0x1b2e0d0();
   input += synapse0x1b2e110();
   input += synapse0x1b2e150();
   input += synapse0x1b2e190();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b2d800() {
   double input = input0x1b2d800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b2e1d0() {
   double input = 1.7981;
   input += synapse0x1b27ca0();
   input += synapse0x1b27ce0();
   input += synapse0x1b27d20();
   input += synapse0x1b27d60();
   input += synapse0x1b2e720();
   input += synapse0x1b2e760();
   input += synapse0x1b2e7a0();
   input += synapse0x1b2e7e0();
   input += synapse0x1b2e820();
   input += synapse0x1b2e860();
   input += synapse0x1b2e8a0();
   input += synapse0x1b2e8e0();
   input += synapse0x1b2e920();
   input += synapse0x1b2e960();
   input += synapse0x1b2e9a0();
   input += synapse0x1b2e9e0();
   input += synapse0x1b2e360();
   input += synapse0x1b2e3a0();
   input += synapse0x1b2eb30();
   input += synapse0x1b2eb70();
   input += synapse0x1b2ebb0();
   input += synapse0x1b2ebf0();
   input += synapse0x1b2ec30();
   input += synapse0x1b2ec70();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b2e1d0() {
   double input = input0x1b2e1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b2ecb0() {
   double input = 0.314319;
   input += synapse0x1b2eff0();
   input += synapse0x1b2f030();
   input += synapse0x1b2f070();
   input += synapse0x1b2f0b0();
   input += synapse0x1b2f0f0();
   input += synapse0x1b2f130();
   input += synapse0x1b2f170();
   input += synapse0x1b2f1b0();
   input += synapse0x1b2f1f0();
   input += synapse0x1b2f230();
   input += synapse0x1b2f270();
   input += synapse0x1b2f2b0();
   input += synapse0x1b2f2f0();
   input += synapse0x1b2f330();
   input += synapse0x1b2f370();
   input += synapse0x1b2f3b0();
   input += synapse0x1b2ee40();
   input += synapse0x1b2ee80();
   input += synapse0x1b2f500();
   input += synapse0x1b2f540();
   input += synapse0x1b2f580();
   input += synapse0x1b2f5c0();
   input += synapse0x1b2f600();
   input += synapse0x1b2f640();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b2ecb0() {
   double input = input0x1b2ecb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b2f680() {
   double input = -0.36303;
   input += synapse0x1b2f9c0();
   input += synapse0x1b2fa00();
   input += synapse0x1b2fa40();
   input += synapse0x1b2fa80();
   input += synapse0x1b2fac0();
   input += synapse0x1b2fb00();
   input += synapse0x1b2fb40();
   input += synapse0x1b2fb80();
   input += synapse0x1b2fbc0();
   input += synapse0x1b2fc00();
   input += synapse0x1b2fc40();
   input += synapse0x1b2fc80();
   input += synapse0x1b2fcc0();
   input += synapse0x1b2fd00();
   input += synapse0x1b2fd40();
   input += synapse0x1b2fd80();
   input += synapse0x1b2f810();
   input += synapse0x1b2f850();
   input += synapse0x1b2c5e0();
   input += synapse0x1b2c620();
   input += synapse0x1b2c660();
   input += synapse0x1b2c6a0();
   input += synapse0x1b2c6e0();
   input += synapse0x1b2c720();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b2f680() {
   double input = input0x1b2f680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b2c760() {
   double input = 1.76703;
   input += synapse0x1b2caa0();
   input += synapse0x1b2cae0();
   input += synapse0x1b2cb20();
   input += synapse0x1b2cb60();
   input += synapse0x1b2cba0();
   input += synapse0x1b2cbe0();
   input += synapse0x1b2cc20();
   input += synapse0x1b2cc60();
   input += synapse0x1b2cca0();
   input += synapse0x1b2cce0();
   input += synapse0x1b2cd20();
   input += synapse0x1b2cd60();
   input += synapse0x1b2cda0();
   input += synapse0x1b30ee0();
   input += synapse0x1b30f20();
   input += synapse0x1b30f60();
   input += synapse0x1b2c8f0();
   input += synapse0x1b2c930();
   input += synapse0x1b310b0();
   input += synapse0x1b310f0();
   input += synapse0x1b31130();
   input += synapse0x1b31170();
   input += synapse0x1b311b0();
   input += synapse0x1b311f0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b2c760() {
   double input = input0x1b2c760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b31230() {
   double input = 2.85862;
   input += synapse0x1b31570();
   input += synapse0x1b315b0();
   input += synapse0x1b315f0();
   input += synapse0x1b31630();
   input += synapse0x1b31670();
   input += synapse0x1b316b0();
   input += synapse0x1b316f0();
   input += synapse0x1b31730();
   input += synapse0x1b31770();
   input += synapse0x1b317b0();
   input += synapse0x1b317f0();
   input += synapse0x1b31830();
   input += synapse0x1b31870();
   input += synapse0x1b318b0();
   input += synapse0x1b318f0();
   input += synapse0x1b31930();
   input += synapse0x1b313c0();
   input += synapse0x1b31400();
   input += synapse0x1b31a80();
   input += synapse0x1b31ac0();
   input += synapse0x1b31b00();
   input += synapse0x1b31b40();
   input += synapse0x1b31b80();
   input += synapse0x1b31bc0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b31230() {
   double input = input0x1b31230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b31c00() {
   double input = 0.514779;
   input += synapse0x1b31f40();
   input += synapse0x1b31f80();
   input += synapse0x1b31fc0();
   input += synapse0x1b32000();
   input += synapse0x1b32040();
   input += synapse0x1b32080();
   input += synapse0x1b320c0();
   input += synapse0x1b32100();
   input += synapse0x1b32140();
   input += synapse0x1b32180();
   input += synapse0x1b321c0();
   input += synapse0x1b32200();
   input += synapse0x1b32240();
   input += synapse0x1b32280();
   input += synapse0x1b322c0();
   input += synapse0x1b32300();
   input += synapse0x1b31d90();
   input += synapse0x1b31dd0();
   input += synapse0x1b32450();
   input += synapse0x1b32490();
   input += synapse0x1b324d0();
   input += synapse0x1b32510();
   input += synapse0x1b32550();
   input += synapse0x1b32590();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b31c00() {
   double input = input0x1b31c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b325d0() {
   double input = -0.471005;
   input += synapse0x1b32910();
   input += synapse0x1b32950();
   input += synapse0x1b32990();
   input += synapse0x1b329d0();
   input += synapse0x1b32a10();
   input += synapse0x1b32a50();
   input += synapse0x1b32a90();
   input += synapse0x1b32ad0();
   input += synapse0x1b32b10();
   input += synapse0x1b32b50();
   input += synapse0x1b32b90();
   input += synapse0x1b32bd0();
   input += synapse0x1b32c10();
   input += synapse0x1b32c50();
   input += synapse0x1b32c90();
   input += synapse0x1b32cd0();
   input += synapse0x1b32760();
   input += synapse0x1b327a0();
   input += synapse0x1b32e20();
   input += synapse0x1b32e60();
   input += synapse0x1b32ea0();
   input += synapse0x1b32ee0();
   input += synapse0x1b32f20();
   input += synapse0x1b32f60();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b325d0() {
   double input = input0x1b325d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b32fa0() {
   double input = 0.0150062;
   input += synapse0x1b332e0();
   input += synapse0x1b24670();
   input += synapse0x1b246b0();
   input += synapse0x1b249b0();
   input += synapse0x1b249f0();
   input += synapse0x1b24cf0();
   input += synapse0x1b24d30();
   input += synapse0x1b25030();
   input += synapse0x1b25070();
   input += synapse0x1b25370();
   input += synapse0x1b253b0();
   input += synapse0x1b256b0();
   input += synapse0x1b256f0();
   input += synapse0x1b259f0();
   input += synapse0x1b25a30();
   input += synapse0x1b25d30();
   input += synapse0x1b25d70();
   input += synapse0x1b26070();
   input += synapse0x1b260b0();
   input += synapse0x1b263b0();
   input += synapse0x1b263f0();
   input += synapse0x1b266f0();
   input += synapse0x1b26730();
   input += synapse0x1b26a30();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b32fa0() {
   double input = input0x1b32fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b34db0() {
   double input = -0.403574;
   input += synapse0x1b26a70();
   input += synapse0x1b27730();
   input += synapse0x1b27770();
   input += synapse0x1b33130();
   input += synapse0x1b33170();
   input += synapse0x1b27a70();
   input += synapse0x1b27ab0();
   input += synapse0x18df4c0();
   input += synapse0x18df500();
   input += synapse0x1b281f0();
   input += synapse0x1b28230();
   input += synapse0x1b28530();
   input += synapse0x1b28570();
   input += synapse0x1b28870();
   input += synapse0x1b288b0();
   input += synapse0x1b28bb0();
   input += synapse0x1b28bf0();
   input += synapse0x1b28ef0();
   input += synapse0x1b28f30();
   input += synapse0x1b29230();
   input += synapse0x1b29270();
   input += synapse0x1b26d70();
   input += synapse0x1b26db0();
   input += synapse0x1b35050();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b34db0() {
   double input = input0x1b34db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b35090() {
   double input = -0.466257;
   input += synapse0x1b353d0();
   input += synapse0x1b35410();
   input += synapse0x1b35450();
   input += synapse0x1b35490();
   input += synapse0x1b354d0();
   input += synapse0x1b35510();
   input += synapse0x1b35550();
   input += synapse0x1b35590();
   input += synapse0x1b355d0();
   input += synapse0x1b35610();
   input += synapse0x1b35650();
   input += synapse0x1b35690();
   input += synapse0x1b356d0();
   input += synapse0x1b35710();
   input += synapse0x1b35750();
   input += synapse0x1b35790();
   input += synapse0x1b35220();
   input += synapse0x1b35260();
   input += synapse0x1b358e0();
   input += synapse0x1b35920();
   input += synapse0x1b35960();
   input += synapse0x1b359a0();
   input += synapse0x1b359e0();
   input += synapse0x1b35a20();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b35090() {
   double input = input0x1b35090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b35a60() {
   double input = 0.831747;
   input += synapse0x1b35da0();
   input += synapse0x1b35de0();
   input += synapse0x1b35e20();
   input += synapse0x1b35e60();
   input += synapse0x1b35ea0();
   input += synapse0x1b35ee0();
   input += synapse0x1b35f20();
   input += synapse0x1b35f60();
   input += synapse0x1b35fa0();
   input += synapse0x1b35fe0();
   input += synapse0x1b36020();
   input += synapse0x1b36060();
   input += synapse0x1b360a0();
   input += synapse0x1b360e0();
   input += synapse0x1b36120();
   input += synapse0x1b36160();
   input += synapse0x1b35bf0();
   input += synapse0x1b35c30();
   input += synapse0x1b362b0();
   input += synapse0x1b362f0();
   input += synapse0x1b36330();
   input += synapse0x1b36370();
   input += synapse0x1b363b0();
   input += synapse0x1b363f0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b35a60() {
   double input = input0x1b35a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b36430() {
   double input = 1.03393;
   input += synapse0x1b36770();
   input += synapse0x1b367b0();
   input += synapse0x1b367f0();
   input += synapse0x1b36830();
   input += synapse0x1b36870();
   input += synapse0x1b368b0();
   input += synapse0x1b368f0();
   input += synapse0x1b36930();
   input += synapse0x1b36970();
   input += synapse0x1b369b0();
   input += synapse0x1b369f0();
   input += synapse0x1b36a30();
   input += synapse0x1b36a70();
   input += synapse0x1b36ab0();
   input += synapse0x1b36af0();
   input += synapse0x1b36b30();
   input += synapse0x1b365c0();
   input += synapse0x1b36600();
   input += synapse0x1b36c80();
   input += synapse0x1b36cc0();
   input += synapse0x1b36d00();
   input += synapse0x1b36d40();
   input += synapse0x1b36d80();
   input += synapse0x1b36dc0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b36430() {
   double input = input0x1b36430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b36e00() {
   double input = -1.64709;
   input += synapse0x1b37140();
   input += synapse0x1b37180();
   input += synapse0x1b371c0();
   input += synapse0x1b37200();
   input += synapse0x1b37240();
   input += synapse0x1b37280();
   input += synapse0x1b372c0();
   input += synapse0x1b37300();
   input += synapse0x1b37340();
   input += synapse0x1b37380();
   input += synapse0x1b373c0();
   input += synapse0x1b37400();
   input += synapse0x1b37440();
   input += synapse0x1b37480();
   input += synapse0x1b374c0();
   input += synapse0x1b37500();
   input += synapse0x1b36f90();
   input += synapse0x1b36fd0();
   input += synapse0x1b37650();
   input += synapse0x1b37690();
   input += synapse0x1b376d0();
   input += synapse0x1b37710();
   input += synapse0x1b37750();
   input += synapse0x1b37790();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b36e00() {
   double input = input0x1b36e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b377d0() {
   double input = 0.952241;
   input += synapse0x1b37b10();
   input += synapse0x1b37b50();
   input += synapse0x1b37b90();
   input += synapse0x1b37bd0();
   input += synapse0x1b37c10();
   input += synapse0x1b37c50();
   input += synapse0x1b37c90();
   input += synapse0x1b37cd0();
   input += synapse0x1b37d10();
   input += synapse0x1b2fed0();
   input += synapse0x1b2ff10();
   input += synapse0x1b2ff50();
   input += synapse0x1b2ff90();
   input += synapse0x1b2ffd0();
   input += synapse0x1b30010();
   input += synapse0x1b30050();
   input += synapse0x1b37960();
   input += synapse0x1b379a0();
   input += synapse0x1b301a0();
   input += synapse0x1b301e0();
   input += synapse0x1b30220();
   input += synapse0x1b30260();
   input += synapse0x1b302a0();
   input += synapse0x1b302e0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b377d0() {
   double input = input0x1b377d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b30320() {
   double input = -0.761994;
   input += synapse0x1b30660();
   input += synapse0x1b306a0();
   input += synapse0x1b306e0();
   input += synapse0x1b30720();
   input += synapse0x1b30760();
   input += synapse0x1b307a0();
   input += synapse0x1b307e0();
   input += synapse0x1b30820();
   input += synapse0x1b30860();
   input += synapse0x1b308a0();
   input += synapse0x1b308e0();
   input += synapse0x1b30920();
   input += synapse0x1b30960();
   input += synapse0x1b309a0();
   input += synapse0x1b309e0();
   input += synapse0x1b30a20();
   input += synapse0x1b304b0();
   input += synapse0x1b304f0();
   input += synapse0x1b30b70();
   input += synapse0x1b30bb0();
   input += synapse0x1b30bf0();
   input += synapse0x1b30c30();
   input += synapse0x1b30c70();
   input += synapse0x1b30cb0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b30320() {
   double input = input0x1b30320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b30cf0() {
   double input = -3.36468;
   input += synapse0x1b30e80();
   input += synapse0x1b39f10();
   input += synapse0x1b39f50();
   input += synapse0x1b39f90();
   input += synapse0x1b39fd0();
   input += synapse0x1b3a010();
   input += synapse0x1b3a050();
   input += synapse0x1b3a090();
   input += synapse0x1b3a0d0();
   input += synapse0x1b3a110();
   input += synapse0x1b3a150();
   input += synapse0x1b3a190();
   input += synapse0x1b3a1d0();
   input += synapse0x1b3a210();
   input += synapse0x1b3a250();
   input += synapse0x1b3a290();
   input += synapse0x1b39d60();
   input += synapse0x1b39da0();
   input += synapse0x1b3a3e0();
   input += synapse0x1b3a420();
   input += synapse0x1b3a460();
   input += synapse0x1b3a4a0();
   input += synapse0x1b3a4e0();
   input += synapse0x1b3a520();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b30cf0() {
   double input = input0x1b30cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b3a560() {
   double input = -0.745613;
   input += synapse0x1b3a8a0();
   input += synapse0x1b3a8e0();
   input += synapse0x1b3a920();
   input += synapse0x1b3a960();
   input += synapse0x1b3a9a0();
   input += synapse0x1b3a9e0();
   input += synapse0x1b3aa20();
   input += synapse0x1b3aa60();
   input += synapse0x1b3aaa0();
   input += synapse0x1b3aae0();
   input += synapse0x1b3ab20();
   input += synapse0x1b3ab60();
   input += synapse0x1b3aba0();
   input += synapse0x1b3abe0();
   input += synapse0x1b3ac20();
   input += synapse0x1b3ac60();
   input += synapse0x1b3a6f0();
   input += synapse0x1b3a730();
   input += synapse0x1b3adb0();
   input += synapse0x1b3adf0();
   input += synapse0x1b3ae30();
   input += synapse0x1b3ae70();
   input += synapse0x1b3aeb0();
   input += synapse0x1b3aef0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b3a560() {
   double input = input0x1b3a560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b3af30() {
   double input = -0.376357;
   input += synapse0x1b3b270();
   input += synapse0x1b3b2b0();
   input += synapse0x1b3b2f0();
   input += synapse0x1b3b330();
   input += synapse0x1b3b370();
   input += synapse0x1b3b3b0();
   input += synapse0x1b3b3f0();
   input += synapse0x1b3b430();
   input += synapse0x1b3b470();
   input += synapse0x1b3b4b0();
   input += synapse0x1b3b4f0();
   input += synapse0x1b3b530();
   input += synapse0x1b3b570();
   input += synapse0x1b3b5b0();
   input += synapse0x1b3b5f0();
   input += synapse0x1b3b630();
   input += synapse0x1b3b0c0();
   input += synapse0x1b3b100();
   input += synapse0x1b3b780();
   input += synapse0x1b3b7c0();
   input += synapse0x1b3b800();
   input += synapse0x1b3b840();
   input += synapse0x1b3b880();
   input += synapse0x1b3b8c0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b3af30() {
   double input = input0x1b3af30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b3b900() {
   double input = 0.573634;
   input += synapse0x1b3bc40();
   input += synapse0x1b3bc80();
   input += synapse0x1b3bcc0();
   input += synapse0x1b3bd00();
   input += synapse0x1b3bd40();
   input += synapse0x1b3bd80();
   input += synapse0x1b3bdc0();
   input += synapse0x1b3be00();
   input += synapse0x1b3be40();
   input += synapse0x1b3be80();
   input += synapse0x1b3bec0();
   input += synapse0x1b3bf00();
   input += synapse0x1b3bf40();
   input += synapse0x1b3bf80();
   input += synapse0x1b3bfc0();
   input += synapse0x1b3c000();
   input += synapse0x1b3ba90();
   input += synapse0x1b3bad0();
   input += synapse0x1b3c150();
   input += synapse0x1b3c190();
   input += synapse0x1b3c1d0();
   input += synapse0x1b3c210();
   input += synapse0x1b3c250();
   input += synapse0x1b3c290();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b3b900() {
   double input = input0x1b3b900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b3c2d0() {
   double input = 3.93731;
   input += synapse0x1b3c610();
   input += synapse0x1b3c650();
   input += synapse0x1b3c690();
   input += synapse0x1b3c6d0();
   input += synapse0x1b3c710();
   input += synapse0x1b3c750();
   input += synapse0x1b3c790();
   input += synapse0x1b3c7d0();
   input += synapse0x1b3c810();
   input += synapse0x1b3c850();
   input += synapse0x1b3c890();
   input += synapse0x1b3c8d0();
   input += synapse0x1b3c910();
   input += synapse0x1b3c950();
   input += synapse0x1b3c990();
   input += synapse0x1b3c9d0();
   input += synapse0x1b3c460();
   input += synapse0x1b3c4a0();
   input += synapse0x1b3cb20();
   input += synapse0x1b3cb60();
   input += synapse0x1b3cba0();
   input += synapse0x1b3cbe0();
   input += synapse0x1b3cc20();
   input += synapse0x1b3cc60();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b3c2d0() {
   double input = input0x1b3c2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b3cca0() {
   double input = 0.320138;
   input += synapse0x1b3cfe0();
   input += synapse0x1b3d020();
   input += synapse0x1b3d060();
   input += synapse0x1b3d0a0();
   input += synapse0x1b3d0e0();
   input += synapse0x1b3d120();
   input += synapse0x1b3d160();
   input += synapse0x1b3d1a0();
   input += synapse0x1b3d1e0();
   input += synapse0x1b3d220();
   input += synapse0x1b3d260();
   input += synapse0x1b3d2a0();
   input += synapse0x1b3d2e0();
   input += synapse0x1b3d320();
   input += synapse0x1b3d360();
   input += synapse0x1b3d3a0();
   input += synapse0x1b3ce30();
   input += synapse0x1b3ce70();
   input += synapse0x1b3d4f0();
   input += synapse0x1b3d530();
   input += synapse0x1b3d570();
   input += synapse0x1b3d5b0();
   input += synapse0x1b3d5f0();
   input += synapse0x1b3d630();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b3cca0() {
   double input = input0x1b3cca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b3d670() {
   double input = 0.527173;
   input += synapse0x1b3d9b0();
   input += synapse0x1b3d9f0();
   input += synapse0x1b3da30();
   input += synapse0x1b3da70();
   input += synapse0x1b3dab0();
   input += synapse0x1b3daf0();
   input += synapse0x1b3db30();
   input += synapse0x1b3db70();
   input += synapse0x1b3dbb0();
   input += synapse0x1b3dbf0();
   input += synapse0x1b3dc30();
   input += synapse0x1b3dc70();
   input += synapse0x1b3dcb0();
   input += synapse0x1b3dcf0();
   input += synapse0x1b3dd30();
   input += synapse0x1b3dd70();
   input += synapse0x1b3d800();
   input += synapse0x1b3d840();
   input += synapse0x1b3dec0();
   input += synapse0x1b3df00();
   input += synapse0x1b3df40();
   input += synapse0x1b3df80();
   input += synapse0x1b3dfc0();
   input += synapse0x1b3e000();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b3d670() {
   double input = input0x1b3d670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b3e040() {
   double input = -0.613429;
   input += synapse0x1b3e380();
   input += synapse0x1b3e3c0();
   input += synapse0x1b3e400();
   input += synapse0x1b3e440();
   input += synapse0x1b3e480();
   input += synapse0x1b3e4c0();
   input += synapse0x1b3e500();
   input += synapse0x1b3e540();
   input += synapse0x1b3e580();
   input += synapse0x1b3e5c0();
   input += synapse0x1b3e600();
   input += synapse0x1b3e640();
   input += synapse0x1b3e680();
   input += synapse0x1b3e6c0();
   input += synapse0x1b3e700();
   input += synapse0x1b3e740();
   input += synapse0x1b3e1d0();
   input += synapse0x1b3e210();
   input += synapse0x1b3e890();
   input += synapse0x1b3e8d0();
   input += synapse0x1b3e910();
   input += synapse0x1b3e950();
   input += synapse0x1b3e990();
   input += synapse0x1b3e9d0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b3e040() {
   double input = input0x1b3e040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b3ea10() {
   double input = 0.423709;
   input += synapse0x1b3ed50();
   input += synapse0x1b33320();
   input += synapse0x1b33360();
   input += synapse0x1b333a0();
   input += synapse0x1b335f0();
   input += synapse0x1b33630();
   input += synapse0x1b33670();
   input += synapse0x1b338c0();
   input += synapse0x1b33900();
   input += synapse0x1b33b50();
   input += synapse0x1b33b90();
   input += synapse0x1b33bd0();
   input += synapse0x1b33e20();
   input += synapse0x1b33e60();
   input += synapse0x1b340b0();
   input += synapse0x1b340f0();
   input += synapse0x1b3eba0();
   input += synapse0x1b3ebe0();
   input += synapse0x1b34240();
   input += synapse0x1b34750();
   input += synapse0x1b34790();
   input += synapse0x1b347d0();
   input += synapse0x1b34a20();
   input += synapse0x1b34a60();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b3ea10() {
   double input = input0x1b3ea10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b34aa0() {
   double input = -1.31588;
   input += synapse0x1b34310();
   input += synapse0x1b34350();
   input += synapse0x1b34390();
   input += synapse0x1b343d0();
   input += synapse0x1b34d50();
   input += synapse0x1b410a0();
   input += synapse0x1b410e0();
   input += synapse0x1b41120();
   input += synapse0x1b41160();
   input += synapse0x1b411a0();
   input += synapse0x1b411e0();
   input += synapse0x1b41220();
   input += synapse0x1b41260();
   input += synapse0x1b412a0();
   input += synapse0x1b412e0();
   input += synapse0x1b41320();
   input += synapse0x1b34c30();
   input += synapse0x1b34c70();
   input += synapse0x1b41470();
   input += synapse0x1b414b0();
   input += synapse0x1b414f0();
   input += synapse0x1b41530();
   input += synapse0x1b41570();
   input += synapse0x1b415b0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b34aa0() {
   double input = input0x1b34aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b415f0() {
   double input = 1.46303;
   input += synapse0x1b41930();
   input += synapse0x1b41970();
   input += synapse0x1b419b0();
   input += synapse0x1b419f0();
   input += synapse0x1b41a30();
   input += synapse0x1b41a70();
   input += synapse0x1b41ab0();
   input += synapse0x1b41af0();
   input += synapse0x1b41b30();
   input += synapse0x1b41b70();
   input += synapse0x1b41bb0();
   input += synapse0x1b41bf0();
   input += synapse0x1b41c30();
   input += synapse0x1b41c70();
   input += synapse0x1b41cb0();
   input += synapse0x1b41cf0();
   input += synapse0x1b41780();
   input += synapse0x1b417c0();
   input += synapse0x1b41e40();
   input += synapse0x1b41e80();
   input += synapse0x1b41ec0();
   input += synapse0x1b41f00();
   input += synapse0x1b41f40();
   input += synapse0x1b41f80();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b415f0() {
   double input = input0x1b415f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b41fc0() {
   double input = 0.876844;
   input += synapse0x1b42300();
   input += synapse0x1b42340();
   input += synapse0x1b42380();
   input += synapse0x1b423c0();
   input += synapse0x1b42400();
   input += synapse0x1b42440();
   input += synapse0x1b42480();
   input += synapse0x1b424c0();
   input += synapse0x1b42500();
   input += synapse0x1b42540();
   input += synapse0x1b42580();
   input += synapse0x1b425c0();
   input += synapse0x1b42600();
   input += synapse0x1b42640();
   input += synapse0x1b42680();
   input += synapse0x1b426c0();
   input += synapse0x1b42150();
   input += synapse0x1b42190();
   input += synapse0x1b42810();
   input += synapse0x1b42850();
   input += synapse0x1b42890();
   input += synapse0x1b428d0();
   input += synapse0x1b42910();
   input += synapse0x1b42950();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b41fc0() {
   double input = input0x1b41fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b42990() {
   double input = 0.592607;
   input += synapse0x1b42cd0();
   input += synapse0x1b42d10();
   input += synapse0x1b42d50();
   input += synapse0x1b42d90();
   input += synapse0x1b42dd0();
   input += synapse0x1b42e10();
   input += synapse0x1b42e50();
   input += synapse0x1b42e90();
   input += synapse0x1b42ed0();
   input += synapse0x1b42f10();
   input += synapse0x1b42f50();
   input += synapse0x1b42f90();
   input += synapse0x1b42fd0();
   input += synapse0x1b43010();
   input += synapse0x1b43050();
   input += synapse0x1b43090();
   input += synapse0x1b42b20();
   input += synapse0x1b42b60();
   input += synapse0x1b431e0();
   input += synapse0x1b43220();
   input += synapse0x1b43260();
   input += synapse0x1b432a0();
   input += synapse0x1b432e0();
   input += synapse0x1b43320();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b42990() {
   double input = input0x1b42990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b43360() {
   double input = 0.669449;
   input += synapse0x1b436a0();
   input += synapse0x1b436e0();
   input += synapse0x1b43720();
   input += synapse0x1b43760();
   input += synapse0x1b437a0();
   input += synapse0x1b437e0();
   input += synapse0x1b43820();
   input += synapse0x1b43860();
   input += synapse0x1b438a0();
   input += synapse0x1b438e0();
   input += synapse0x1b43920();
   input += synapse0x1b43960();
   input += synapse0x1b439a0();
   input += synapse0x1b439e0();
   input += synapse0x1b43a20();
   input += synapse0x1b43a60();
   input += synapse0x1b434f0();
   input += synapse0x1b43530();
   input += synapse0x1b43bb0();
   input += synapse0x1b43bf0();
   input += synapse0x1b43c30();
   input += synapse0x1b43c70();
   input += synapse0x1b43cb0();
   input += synapse0x1b43cf0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b43360() {
   double input = input0x1b43360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b43d30() {
   double input = -0.803916;
   input += synapse0x1b44070();
   input += synapse0x1b440b0();
   input += synapse0x1b440f0();
   input += synapse0x1b44130();
   input += synapse0x1b44170();
   input += synapse0x1b441b0();
   input += synapse0x1b441f0();
   input += synapse0x1b44230();
   input += synapse0x1b44270();
   input += synapse0x1b442b0();
   input += synapse0x1b442f0();
   input += synapse0x1b44330();
   input += synapse0x1b44370();
   input += synapse0x1b443b0();
   input += synapse0x1b443f0();
   input += synapse0x1b44430();
   input += synapse0x1b43ec0();
   input += synapse0x1b43f00();
   input += synapse0x1b44580();
   input += synapse0x1b445c0();
   input += synapse0x1b44600();
   input += synapse0x1b44640();
   input += synapse0x1b44680();
   input += synapse0x1b446c0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b43d30() {
   double input = input0x1b43d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b44700() {
   double input = 0.158895;
   input += synapse0x1b44a40();
   input += synapse0x1b44a80();
   input += synapse0x1b44ac0();
   input += synapse0x1b44b00();
   input += synapse0x1b44b40();
   input += synapse0x1b44b80();
   input += synapse0x1b44bc0();
   input += synapse0x1b44c00();
   input += synapse0x1b44c40();
   input += synapse0x1b44c80();
   input += synapse0x1b44cc0();
   input += synapse0x1b44d00();
   input += synapse0x1b44d40();
   input += synapse0x1b44d80();
   input += synapse0x1b44dc0();
   input += synapse0x1b44e00();
   input += synapse0x1b44890();
   input += synapse0x1b448d0();
   input += synapse0x1b44f50();
   input += synapse0x1b44f90();
   input += synapse0x1b44fd0();
   input += synapse0x1b45010();
   input += synapse0x1b45050();
   input += synapse0x1b45090();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b44700() {
   double input = input0x1b44700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b450d0() {
   double input = 0.527467;
   input += synapse0x1b45410();
   input += synapse0x1b45450();
   input += synapse0x1b45490();
   input += synapse0x1b454d0();
   input += synapse0x1b45510();
   input += synapse0x1b45550();
   input += synapse0x1b45590();
   input += synapse0x1b455d0();
   input += synapse0x1b45610();
   input += synapse0x1b45650();
   input += synapse0x1b45690();
   input += synapse0x1b456d0();
   input += synapse0x1b45710();
   input += synapse0x1b45750();
   input += synapse0x1b45790();
   input += synapse0x1b457d0();
   input += synapse0x1b45260();
   input += synapse0x1b452a0();
   input += synapse0x1b45920();
   input += synapse0x1b45960();
   input += synapse0x1b459a0();
   input += synapse0x1b459e0();
   input += synapse0x1b45a20();
   input += synapse0x1b45a60();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b450d0() {
   double input = input0x1b450d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b45aa0() {
   double input = -0.0831864;
   input += synapse0x1b2e510();
   input += synapse0x1b2e550();
   input += synapse0x1b2e590();
   input += synapse0x1b2e5d0();
   input += synapse0x1b2e610();
   input += synapse0x1b2e650();
   input += synapse0x1b2e690();
   input += synapse0x1b2e6d0();
   input += synapse0x1b461f0();
   input += synapse0x1b46230();
   input += synapse0x1b46270();
   input += synapse0x1b462b0();
   input += synapse0x1b462f0();
   input += synapse0x1b46330();
   input += synapse0x1b46370();
   input += synapse0x1b463b0();
   input += synapse0x1b45c30();
   input += synapse0x1b45c70();
   input += synapse0x1b46500();
   input += synapse0x1b46540();
   input += synapse0x1b46580();
   input += synapse0x1b465c0();
   input += synapse0x1b46600();
   input += synapse0x1b46640();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b45aa0() {
   double input = input0x1b45aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b46680() {
   double input = 0.0228741;
   input += synapse0x1b469c0();
   input += synapse0x1b46a00();
   input += synapse0x1b46a40();
   input += synapse0x1b46a80();
   input += synapse0x1b46ac0();
   input += synapse0x1b46b00();
   input += synapse0x1b46b40();
   input += synapse0x1b46b80();
   input += synapse0x1b46bc0();
   input += synapse0x1b46c00();
   input += synapse0x1b46c40();
   input += synapse0x1b46c80();
   input += synapse0x1b46cc0();
   input += synapse0x1b46d00();
   input += synapse0x1b46d40();
   input += synapse0x1b46d80();
   input += synapse0x1b46810();
   input += synapse0x1b46850();
   input += synapse0x1b46ed0();
   input += synapse0x1b46f10();
   input += synapse0x1b46f50();
   input += synapse0x1b46f90();
   input += synapse0x1b46fd0();
   input += synapse0x1b47010();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b46680() {
   double input = input0x1b46680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b47050() {
   double input = -0.527045;
   input += synapse0x1b47390();
   input += synapse0x1b473d0();
   input += synapse0x1b47410();
   input += synapse0x1b47450();
   input += synapse0x1b47490();
   input += synapse0x1b474d0();
   input += synapse0x1b47510();
   input += synapse0x1b47550();
   input += synapse0x1b47590();
   input += synapse0x1b475d0();
   input += synapse0x1b47610();
   input += synapse0x1b47650();
   input += synapse0x1b47690();
   input += synapse0x1b476d0();
   input += synapse0x1b47710();
   input += synapse0x1b47750();
   input += synapse0x1b471e0();
   input += synapse0x1b47220();
   input += synapse0x1b37d50();
   input += synapse0x1b37d90();
   input += synapse0x1b37dd0();
   input += synapse0x1b37e10();
   input += synapse0x1b37e50();
   input += synapse0x1b37e90();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b47050() {
   double input = input0x1b47050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b37ed0() {
   double input = 0.736095;
   input += synapse0x1b38210();
   input += synapse0x1b38250();
   input += synapse0x1b38290();
   input += synapse0x1b382d0();
   input += synapse0x1b38310();
   input += synapse0x1b38350();
   input += synapse0x1b38390();
   input += synapse0x1b383d0();
   input += synapse0x1b38410();
   input += synapse0x1b38450();
   input += synapse0x1b38490();
   input += synapse0x1b384d0();
   input += synapse0x1b38510();
   input += synapse0x1b38550();
   input += synapse0x1b38590();
   input += synapse0x1b385d0();
   input += synapse0x1b38060();
   input += synapse0x1b380a0();
   input += synapse0x1b38720();
   input += synapse0x1b38760();
   input += synapse0x1b387a0();
   input += synapse0x1b387e0();
   input += synapse0x1b38820();
   input += synapse0x1b38860();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b37ed0() {
   double input = input0x1b37ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b388a0() {
   double input = -0.343415;
   input += synapse0x1b38be0();
   input += synapse0x1b38c20();
   input += synapse0x1b38c60();
   input += synapse0x1b38ca0();
   input += synapse0x1b38ce0();
   input += synapse0x1b38d20();
   input += synapse0x1b38d60();
   input += synapse0x1b38da0();
   input += synapse0x1b38de0();
   input += synapse0x1b38e20();
   input += synapse0x1b38e60();
   input += synapse0x1b38ea0();
   input += synapse0x1b38ee0();
   input += synapse0x1b38f20();
   input += synapse0x1b38f60();
   input += synapse0x1b38fa0();
   input += synapse0x1b38a30();
   input += synapse0x1b38a70();
   input += synapse0x1b390f0();
   input += synapse0x1b39130();
   input += synapse0x1b39170();
   input += synapse0x1b391b0();
   input += synapse0x1b391f0();
   input += synapse0x1b39230();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b388a0() {
   double input = input0x1b388a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b39270() {
   double input = 1.16003;
   input += synapse0x1b395b0();
   input += synapse0x1b395f0();
   input += synapse0x1b39630();
   input += synapse0x1b39670();
   input += synapse0x1b396b0();
   input += synapse0x1b396f0();
   input += synapse0x1b39730();
   input += synapse0x1b39770();
   input += synapse0x1b397b0();
   input += synapse0x1b397f0();
   input += synapse0x1b39830();
   input += synapse0x1b39870();
   input += synapse0x1b398b0();
   input += synapse0x1b398f0();
   input += synapse0x1b39930();
   input += synapse0x1b39970();
   input += synapse0x1b39400();
   input += synapse0x1b39440();
   input += synapse0x1b39ac0();
   input += synapse0x1b39b00();
   input += synapse0x1b39b40();
   input += synapse0x1b39b80();
   input += synapse0x1b39bc0();
   input += synapse0x1b39c00();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b39270() {
   double input = input0x1b39270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b4b8b0() {
   double input = 0.329893;
   input += synapse0x1b4bad0();
   input += synapse0x1b4bb10();
   input += synapse0x1b4bb50();
   input += synapse0x1b4bb90();
   input += synapse0x1b4bbd0();
   input += synapse0x1b4bc10();
   input += synapse0x1b4bc50();
   input += synapse0x1b4bc90();
   input += synapse0x1b4bcd0();
   input += synapse0x1b4bd10();
   input += synapse0x1b4bd50();
   input += synapse0x1b4bd90();
   input += synapse0x1b4bdd0();
   input += synapse0x1b4be10();
   input += synapse0x1b4be50();
   input += synapse0x1b4be90();
   input += synapse0x1b39c40();
   input += synapse0x1b39c80();
   input += synapse0x1b4bfe0();
   input += synapse0x1b4c020();
   input += synapse0x1b4c060();
   input += synapse0x1b4c0a0();
   input += synapse0x1b4c0e0();
   input += synapse0x1b4c120();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b4b8b0() {
   double input = input0x1b4b8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b4c160() {
   double input = 0.377631;
   input += synapse0x1b4c4a0();
   input += synapse0x1b4c4e0();
   input += synapse0x1b4c520();
   input += synapse0x1b4c560();
   input += synapse0x1b4c5a0();
   input += synapse0x1b4c5e0();
   input += synapse0x1b4c620();
   input += synapse0x1b4c660();
   input += synapse0x1b4c6a0();
   input += synapse0x1b4c6e0();
   input += synapse0x1b4c720();
   input += synapse0x1b4c760();
   input += synapse0x1b4c7a0();
   input += synapse0x1b4c7e0();
   input += synapse0x1b4c820();
   input += synapse0x1b4c860();
   input += synapse0x1b4c2f0();
   input += synapse0x1b4c330();
   input += synapse0x1b4c9b0();
   input += synapse0x1b4c9f0();
   input += synapse0x1b4ca30();
   input += synapse0x1b4ca70();
   input += synapse0x1b4cab0();
   input += synapse0x1b4caf0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b4c160() {
   double input = input0x1b4c160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b4cb30() {
   double input = 0.700059;
   input += synapse0x1b4ce70();
   input += synapse0x1b4ceb0();
   input += synapse0x1b4cef0();
   input += synapse0x1b4cf30();
   input += synapse0x1b4cf70();
   input += synapse0x1b4cfb0();
   input += synapse0x1b4cff0();
   input += synapse0x1b4d030();
   input += synapse0x1b4d070();
   input += synapse0x1b4d0b0();
   input += synapse0x1b4d0f0();
   input += synapse0x1b4d130();
   input += synapse0x1b4d170();
   input += synapse0x1b4d1b0();
   input += synapse0x1b4d1f0();
   input += synapse0x1b4d230();
   input += synapse0x1b4ccc0();
   input += synapse0x1b4cd00();
   input += synapse0x1b4d380();
   input += synapse0x1b4d3c0();
   input += synapse0x1b4d400();
   input += synapse0x1b4d440();
   input += synapse0x1b4d480();
   input += synapse0x1b4d4c0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b4cb30() {
   double input = input0x1b4cb30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b4d500() {
   double input = 2.76063;
   input += synapse0x1b4d840();
   input += synapse0x1b4d880();
   input += synapse0x1b4d8c0();
   input += synapse0x1b4d900();
   input += synapse0x1b4d940();
   input += synapse0x1b4d980();
   input += synapse0x1b4d9c0();
   input += synapse0x1b4da00();
   input += synapse0x1b4da40();
   input += synapse0x1b4da80();
   input += synapse0x1b4dac0();
   input += synapse0x1b4db00();
   input += synapse0x1b4db40();
   input += synapse0x1b4db80();
   input += synapse0x1b4dbc0();
   input += synapse0x1b4dc00();
   input += synapse0x1b4d690();
   input += synapse0x1b4d6d0();
   input += synapse0x1b4dd50();
   input += synapse0x1b4dd90();
   input += synapse0x1b4ddd0();
   input += synapse0x1b4de10();
   input += synapse0x1b4de50();
   input += synapse0x1b4de90();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b4d500() {
   double input = input0x1b4d500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b54700() {
   double input = -0.836985;
   input += synapse0x18edca0();
   input += synapse0x18edce0();
   input += synapse0x1b2b940();
   input += synapse0x1b2b980();
   input += synapse0x1b2c310();
   input += synapse0x1b2c350();
   input += synapse0x1b2d0e0();
   input += synapse0x1b2d120();
   input += synapse0x1b2dab0();
   input += synapse0x1b2daf0();
   input += synapse0x1b2e480();
   input += synapse0x1b2e4c0();
   input += synapse0x1b2ef60();
   input += synapse0x1b2efa0();
   input += synapse0x1b2f930();
   input += synapse0x1b2f970();
   input += synapse0x1b2ca10();
   input += synapse0x1b2ca50();
   input += synapse0x1b314e0();
   input += synapse0x1b31520();
   input += synapse0x1b31eb0();
   input += synapse0x1b31ef0();
   input += synapse0x1b32880();
   input += synapse0x1b328c0();
   input += synapse0x1b33250();
   input += synapse0x1b33290();
   input += synapse0x1b273f0();
   input += synapse0x1b27430();
   input += synapse0x1b35340();
   input += synapse0x1b35380();
   input += synapse0x1b35d10();
   input += synapse0x1b35d50();
   input += synapse0x1b366e0();
   input += synapse0x1b36720();
   input += synapse0x1b370b0();
   input += synapse0x1b370f0();
   input += synapse0x1b37a80();
   input += synapse0x1b37ac0();
   input += synapse0x1b305d0();
   input += synapse0x1b30610();
   input += synapse0x1b39e80();
   input += synapse0x1b39ec0();
   input += synapse0x1b3a810();
   input += synapse0x1b3a850();
   input += synapse0x1b3b1e0();
   input += synapse0x1b3b220();
   input += synapse0x1b3bbb0();
   input += synapse0x1b3bbf0();
   input += synapse0x1b3c580();
   input += synapse0x1b3c5c0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b54700() {
   double input = input0x1b54700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b54aa0() {
   double input = -0.0932759;
   input += synapse0x1b3ecc0();
   input += synapse0x1b3ed00();
   input += synapse0x1b34280();
   input += synapse0x1b342c0();
   input += synapse0x1b418a0();
   input += synapse0x1b418e0();
   input += synapse0x1b42270();
   input += synapse0x1b422b0();
   input += synapse0x1b42c40();
   input += synapse0x1b42c80();
   input += synapse0x1b43610();
   input += synapse0x1b43650();
   input += synapse0x1b43fe0();
   input += synapse0x1b44020();
   input += synapse0x1b449b0();
   input += synapse0x1b449f0();
   input += synapse0x1b45380();
   input += synapse0x1b453c0();
   input += synapse0x1b45d50();
   input += synapse0x1b45d90();
   input += synapse0x1b46930();
   input += synapse0x1b46970();
   input += synapse0x1b47300();
   input += synapse0x1b47340();
   input += synapse0x1b38180();
   input += synapse0x1b381c0();
   input += synapse0x1b38b50();
   input += synapse0x1b38b90();
   input += synapse0x1b39520();
   input += synapse0x1b39560();
   input += synapse0x1b4ba40();
   input += synapse0x1b4ba80();
   input += synapse0x1b4c410();
   input += synapse0x1b4c450();
   input += synapse0x1b4cde0();
   input += synapse0x1b4ce20();
   input += synapse0x1b4d7b0();
   input += synapse0x1b4d7f0();
   input += synapse0x1b296a0();
   input += synapse0x1b296e0();
   input += synapse0x1b3cf50();
   input += synapse0x1b3cf90();
   input += synapse0x1b4ded0();
   input += synapse0x1b4df10();
   input += synapse0x1b4df50();
   input += synapse0x1b4df90();
   input += synapse0x1b54e40();
   input += synapse0x1b54e80();
   input += synapse0x1b54ec0();
   input += synapse0x1b54f00();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b54aa0() {
   double input = input0x1b54aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b54f40() {
   double input = 0.219637;
   input += synapse0x1b55280();
   input += synapse0x1b552c0();
   input += synapse0x1b55300();
   input += synapse0x1b55340();
   input += synapse0x1b55380();
   input += synapse0x1b553c0();
   input += synapse0x1b55400();
   input += synapse0x1b55440();
   input += synapse0x1b55480();
   input += synapse0x1b554c0();
   input += synapse0x1b55500();
   input += synapse0x1b55540();
   input += synapse0x1b55580();
   input += synapse0x1b555c0();
   input += synapse0x1b55600();
   input += synapse0x1b55640();
   input += synapse0x1b550d0();
   input += synapse0x1b55110();
   input += synapse0x1b55790();
   input += synapse0x1b557d0();
   input += synapse0x1b55810();
   input += synapse0x1b55850();
   input += synapse0x1b55890();
   input += synapse0x1b558d0();
   input += synapse0x1b55910();
   input += synapse0x1b55950();
   input += synapse0x1b55990();
   input += synapse0x1b559d0();
   input += synapse0x1b55a10();
   input += synapse0x1b55a50();
   input += synapse0x1b55a90();
   input += synapse0x1b55ad0();
   input += synapse0x1b55680();
   input += synapse0x1b556c0();
   input += synapse0x1b55700();
   input += synapse0x1b55740();
   input += synapse0x1b55d20();
   input += synapse0x1b55d60();
   input += synapse0x1b55da0();
   input += synapse0x1b55de0();
   input += synapse0x1b55e20();
   input += synapse0x1b55e60();
   input += synapse0x1b55ea0();
   input += synapse0x1b55ee0();
   input += synapse0x1b55f20();
   input += synapse0x1b55f60();
   input += synapse0x1b55fa0();
   input += synapse0x1b55fe0();
   input += synapse0x1b56020();
   input += synapse0x1b56060();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b54f40() {
   double input = input0x1b54f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b560a0() {
   double input = 0.882374;
   input += synapse0x1b563e0();
   input += synapse0x1b56420();
   input += synapse0x1b56460();
   input += synapse0x1b564a0();
   input += synapse0x1b564e0();
   input += synapse0x1b56520();
   input += synapse0x1b56560();
   input += synapse0x1b565a0();
   input += synapse0x1b565e0();
   input += synapse0x1b56620();
   input += synapse0x1b56660();
   input += synapse0x1b566a0();
   input += synapse0x1b566e0();
   input += synapse0x1b56720();
   input += synapse0x1b56760();
   input += synapse0x1b567a0();
   input += synapse0x1b56230();
   input += synapse0x1b56270();
   input += synapse0x1b568f0();
   input += synapse0x1b56930();
   input += synapse0x1b56970();
   input += synapse0x1b569b0();
   input += synapse0x1b569f0();
   input += synapse0x1b56a30();
   input += synapse0x1b56a70();
   input += synapse0x1b56ab0();
   input += synapse0x1b56af0();
   input += synapse0x1b56b30();
   input += synapse0x1b56b70();
   input += synapse0x1b56bb0();
   input += synapse0x1b56bf0();
   input += synapse0x1b56c30();
   input += synapse0x1b567e0();
   input += synapse0x1b56820();
   input += synapse0x1b56860();
   input += synapse0x1b568a0();
   input += synapse0x1b56e80();
   input += synapse0x1b56ec0();
   input += synapse0x1b56f00();
   input += synapse0x1b56f40();
   input += synapse0x1b56f80();
   input += synapse0x1b56fc0();
   input += synapse0x1b57000();
   input += synapse0x1b57040();
   input += synapse0x1b57080();
   input += synapse0x1b570c0();
   input += synapse0x1b57100();
   input += synapse0x1b57140();
   input += synapse0x1b57180();
   input += synapse0x1b571c0();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b560a0() {
   double input = input0x1b560a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b57200() {
   double input = 0.197841;
   input += synapse0x1b57540();
   input += synapse0x1b57580();
   input += synapse0x1b575c0();
   input += synapse0x1b57600();
   input += synapse0x1b57640();
   input += synapse0x1b57680();
   input += synapse0x1b576c0();
   input += synapse0x1b57700();
   input += synapse0x1b57740();
   input += synapse0x1b57780();
   input += synapse0x1b577c0();
   input += synapse0x1b57800();
   input += synapse0x1b57840();
   input += synapse0x1b57880();
   input += synapse0x1b578c0();
   input += synapse0x1b57900();
   input += synapse0x1b57390();
   input += synapse0x1b573d0();
   input += synapse0x1b57a50();
   input += synapse0x1b57a90();
   input += synapse0x1b57ad0();
   input += synapse0x1b57b10();
   input += synapse0x1b57b50();
   input += synapse0x1b57b90();
   input += synapse0x1b57bd0();
   input += synapse0x1b57c10();
   input += synapse0x1b57c50();
   input += synapse0x1b57c90();
   input += synapse0x1b57cd0();
   input += synapse0x1b57d10();
   input += synapse0x1b57d50();
   input += synapse0x1b57d90();
   input += synapse0x1b57940();
   input += synapse0x1b57980();
   input += synapse0x1b579c0();
   input += synapse0x1b57a00();
   input += synapse0x1b57fe0();
   input += synapse0x1b58020();
   input += synapse0x1b58060();
   input += synapse0x1b580a0();
   input += synapse0x1b580e0();
   input += synapse0x1b58120();
   input += synapse0x1b58160();
   input += synapse0x1b581a0();
   input += synapse0x1b581e0();
   input += synapse0x1b58220();
   input += synapse0x1b58260();
   input += synapse0x1b582a0();
   input += synapse0x1b582e0();
   input += synapse0x1b58320();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b57200() {
   double input = input0x1b57200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLcR::input0x1b58360() {
   double input = 4.41722;
   input += synapse0x1b58580();
   input += synapse0x1b585c0();
   input += synapse0x1b58600();
   input += synapse0x1b58640();
   input += synapse0x1b58680();
   return input;
}

double NNfunction_sb_dLcR::neuron0x1b58360() {
   double input = input0x1b58360();
   return (input * 1)+0;
}

double NNfunction_sb_dLcR::synapse0x1b24460() {
   return (neuron0x1b244e0()*-0.107991);
}

double NNfunction_sb_dLcR::synapse0x1b244a0() {
   return (neuron0x1b24790()*-0.0476284);
}

double NNfunction_sb_dLcR::synapse0x1b29730() {
   return (neuron0x1b24ad0()*-0.0641662);
}

double NNfunction_sb_dLcR::synapse0x1b29770() {
   return (neuron0x1b24e10()*0.212068);
}

double NNfunction_sb_dLcR::synapse0x1b297b0() {
   return (neuron0x1b25150()*-0.191933);
}

double NNfunction_sb_dLcR::synapse0x1b297f0() {
   return (neuron0x1b25490()*0.242182);
}

double NNfunction_sb_dLcR::synapse0x1b29830() {
   return (neuron0x1b257d0()*0.0281315);
}

double NNfunction_sb_dLcR::synapse0x1b29870() {
   return (neuron0x1b25b10()*0.210876);
}

double NNfunction_sb_dLcR::synapse0x1b298b0() {
   return (neuron0x1b25e50()*0.103898);
}

double NNfunction_sb_dLcR::synapse0x1b298f0() {
   return (neuron0x1b26190()*0.0817592);
}

double NNfunction_sb_dLcR::synapse0x1b29930() {
   return (neuron0x1b264d0()*0.0421273);
}

double NNfunction_sb_dLcR::synapse0x1b29970() {
   return (neuron0x1b26810()*1.56092);
}

double NNfunction_sb_dLcR::synapse0x1b299b0() {
   return (neuron0x1b26b50()*-0.0471044);
}

double NNfunction_sb_dLcR::synapse0x1b299f0() {
   return (neuron0x1b26e90()*0.136082);
}

double NNfunction_sb_dLcR::synapse0x1b29a30() {
   return (neuron0x1b271d0()*0.0828799);
}

double NNfunction_sb_dLcR::synapse0x1b29a70() {
   return (neuron0x1b27510()*0.360315);
}

double NNfunction_sb_dLcR::synapse0x1b243d0() {
   return (neuron0x1b27850()*0.00724053);
}

double NNfunction_sb_dLcR::synapse0x1b24410() {
   return (neuron0x1b27db0()*-0.0546929);
}

double NNfunction_sb_dLcR::synapse0x18df5e0() {
   return (neuron0x1b27fd0()*0.0308631);
}

double NNfunction_sb_dLcR::synapse0x18df620() {
   return (neuron0x1b28310()*-0.0258411);
}

double NNfunction_sb_dLcR::synapse0x1b29cd0() {
   return (neuron0x1b28650()*-0.116558);
}

double NNfunction_sb_dLcR::synapse0x1b29d10() {
   return (neuron0x1b28990()*-0.049332);
}

double NNfunction_sb_dLcR::synapse0x1b29d50() {
   return (neuron0x1b28cd0()*-0.176316);
}

double NNfunction_sb_dLcR::synapse0x1b29d90() {
   return (neuron0x1b29010()*-0.0856);
}

double NNfunction_sb_dLcR::synapse0x1b2a110() {
   return (neuron0x1b244e0()*0.0125898);
}

double NNfunction_sb_dLcR::synapse0x1b2a150() {
   return (neuron0x1b24790()*-0.251603);
}

double NNfunction_sb_dLcR::synapse0x1b2a190() {
   return (neuron0x1b24ad0()*-0.172881);
}

double NNfunction_sb_dLcR::synapse0x1b2a1d0() {
   return (neuron0x1b24e10()*-0.705087);
}

double NNfunction_sb_dLcR::synapse0x1b2a210() {
   return (neuron0x1b25150()*0.694454);
}

double NNfunction_sb_dLcR::synapse0x1b2a250() {
   return (neuron0x1b25490()*0.182817);
}

double NNfunction_sb_dLcR::synapse0x1b2a290() {
   return (neuron0x1b257d0()*0.233874);
}

double NNfunction_sb_dLcR::synapse0x1b2a2d0() {
   return (neuron0x1b25b10()*0.49561);
}

double NNfunction_sb_dLcR::synapse0x1b2a310() {
   return (neuron0x1b25e50()*0.158881);
}

double NNfunction_sb_dLcR::synapse0x1b29bc0() {
   return (neuron0x1b26190()*0.0239515);
}

double NNfunction_sb_dLcR::synapse0x1b29c00() {
   return (neuron0x1b264d0()*0.69001);
}

double NNfunction_sb_dLcR::synapse0x1b29c40() {
   return (neuron0x1b26810()*-0.460063);
}

double NNfunction_sb_dLcR::synapse0x1b29c80() {
   return (neuron0x1b26b50()*-0.000497998);
}

double NNfunction_sb_dLcR::synapse0x1b2a560() {
   return (neuron0x1b26e90()*-0.013395);
}

double NNfunction_sb_dLcR::synapse0x1b2a5a0() {
   return (neuron0x1b271d0()*-0.759979);
}

double NNfunction_sb_dLcR::synapse0x1b2a5e0() {
   return (neuron0x1b27510()*-0.254874);
}

double NNfunction_sb_dLcR::synapse0x1b29f60() {
   return (neuron0x1b27850()*0.549424);
}

double NNfunction_sb_dLcR::synapse0x1b29fa0() {
   return (neuron0x1b27db0()*0.236426);
}

double NNfunction_sb_dLcR::synapse0x1b2a730() {
   return (neuron0x1b27fd0()*0.300432);
}

double NNfunction_sb_dLcR::synapse0x1b2a770() {
   return (neuron0x1b28310()*0.123138);
}

double NNfunction_sb_dLcR::synapse0x1b2a7b0() {
   return (neuron0x1b28650()*-0.202276);
}

double NNfunction_sb_dLcR::synapse0x1b2a7f0() {
   return (neuron0x1b28990()*-0.0642692);
}

double NNfunction_sb_dLcR::synapse0x1b2a830() {
   return (neuron0x1b28cd0()*-0.0405196);
}

double NNfunction_sb_dLcR::synapse0x1b2a870() {
   return (neuron0x1b29010()*0.538071);
}

double NNfunction_sb_dLcR::synapse0x1b2abf0() {
   return (neuron0x1b244e0()*-0.0237217);
}

double NNfunction_sb_dLcR::synapse0x1b2ac30() {
   return (neuron0x1b24790()*0.0145102);
}

double NNfunction_sb_dLcR::synapse0x1b2ac70() {
   return (neuron0x1b24ad0()*-0.00403676);
}

double NNfunction_sb_dLcR::synapse0x1b2acb0() {
   return (neuron0x1b24e10()*0.271928);
}

double NNfunction_sb_dLcR::synapse0x1b2acf0() {
   return (neuron0x1b25150()*-0.0145321);
}

double NNfunction_sb_dLcR::synapse0x1b2ad30() {
   return (neuron0x1b25490()*-0.0158476);
}

double NNfunction_sb_dLcR::synapse0x1b2ad70() {
   return (neuron0x1b257d0()*-0.0144908);
}

double NNfunction_sb_dLcR::synapse0x1b2adb0() {
   return (neuron0x1b25b10()*0.0234587);
}

double NNfunction_sb_dLcR::synapse0x1b2adf0() {
   return (neuron0x1b25e50()*0.00639916);
}

double NNfunction_sb_dLcR::synapse0x1b2ae30() {
   return (neuron0x1b26190()*-0.00478677);
}

double NNfunction_sb_dLcR::synapse0x1b2ae70() {
   return (neuron0x1b264d0()*0.0191692);
}

double NNfunction_sb_dLcR::synapse0x1b2aeb0() {
   return (neuron0x1b26810()*-1.4816);
}

double NNfunction_sb_dLcR::synapse0x1b2aef0() {
   return (neuron0x1b26b50()*0.0152724);
}

double NNfunction_sb_dLcR::synapse0x1b2af30() {
   return (neuron0x1b26e90()*-0.00179408);
}

double NNfunction_sb_dLcR::synapse0x1b2af70() {
   return (neuron0x1b271d0()*-0.00263208);
}

double NNfunction_sb_dLcR::synapse0x1b2afb0() {
   return (neuron0x1b27510()*0.213563);
}

double NNfunction_sb_dLcR::synapse0x1b2aa40() {
   return (neuron0x1b27850()*-0.00389662);
}

double NNfunction_sb_dLcR::synapse0x1b2aa80() {
   return (neuron0x1b27db0()*0.00893421);
}

double NNfunction_sb_dLcR::synapse0x18de730() {
   return (neuron0x1b27fd0()*0.0199595);
}

double NNfunction_sb_dLcR::synapse0x1b13550() {
   return (neuron0x1b28310()*0.0154967);
}

double NNfunction_sb_dLcR::synapse0x18ed4b0() {
   return (neuron0x1b28650()*0.00776277);
}

double NNfunction_sb_dLcR::synapse0x18ed4f0() {
   return (neuron0x1b28990()*0.00670816);
}

double NNfunction_sb_dLcR::synapse0x1a089f0() {
   return (neuron0x1b28cd0()*0.0125542);
}

double NNfunction_sb_dLcR::synapse0x1a08a30() {
   return (neuron0x1b29010()*-0.0215926);
}

double NNfunction_sb_dLcR::synapse0x18edd30() {
   return (neuron0x1b244e0()*-0.0363672);
}

double NNfunction_sb_dLcR::synapse0x1b242d0() {
   return (neuron0x1b24790()*-0.00541894);
}

double NNfunction_sb_dLcR::synapse0x1b2a4e0() {
   return (neuron0x1b24ad0()*0.0391357);
}

double NNfunction_sb_dLcR::synapse0x1b2a520() {
   return (neuron0x1b24e10()*-0.196068);
}

double NNfunction_sb_dLcR::synapse0x1b2b100() {
   return (neuron0x1b25150()*-0.0335414);
}

double NNfunction_sb_dLcR::synapse0x1b2b140() {
   return (neuron0x1b25490()*-0.0260131);
}

double NNfunction_sb_dLcR::synapse0x1b2b180() {
   return (neuron0x1b257d0()*-0.0578221);
}

double NNfunction_sb_dLcR::synapse0x1b2b1c0() {
   return (neuron0x1b25b10()*-0.0367637);
}

double NNfunction_sb_dLcR::synapse0x1b2b200() {
   return (neuron0x1b25e50()*0.02478);
}

double NNfunction_sb_dLcR::synapse0x1b2b240() {
   return (neuron0x1b26190()*-0.00170616);
}

double NNfunction_sb_dLcR::synapse0x1b2b280() {
   return (neuron0x1b264d0()*0.0358658);
}

double NNfunction_sb_dLcR::synapse0x1b2b2c0() {
   return (neuron0x1b26810()*-0.16609);
}

double NNfunction_sb_dLcR::synapse0x1b2b300() {
   return (neuron0x1b26b50()*-0.546703);
}

double NNfunction_sb_dLcR::synapse0x1b2b340() {
   return (neuron0x1b26e90()*0.0914688);
}

double NNfunction_sb_dLcR::synapse0x1b2b380() {
   return (neuron0x1b271d0()*-0.155473);
}

double NNfunction_sb_dLcR::synapse0x1b2b3c0() {
   return (neuron0x1b27510()*0.0422144);
}

double NNfunction_sb_dLcR::synapse0x1b24240() {
   return (neuron0x1b27850()*0.00463648);
}

double NNfunction_sb_dLcR::synapse0x1b24280() {
   return (neuron0x1b27db0()*-0.184422);
}

double NNfunction_sb_dLcR::synapse0x1b2b510() {
   return (neuron0x1b27fd0()*-0.232094);
}

double NNfunction_sb_dLcR::synapse0x1b2b550() {
   return (neuron0x1b28310()*0.0214916);
}

double NNfunction_sb_dLcR::synapse0x1b2b590() {
   return (neuron0x1b28650()*0.0433659);
}

double NNfunction_sb_dLcR::synapse0x1b2b5d0() {
   return (neuron0x1b28990()*0.0392375);
}

double NNfunction_sb_dLcR::synapse0x1b2b610() {
   return (neuron0x1b28cd0()*-0.0239978);
}

double NNfunction_sb_dLcR::synapse0x1b2b650() {
   return (neuron0x1b29010()*0.011831);
}

double NNfunction_sb_dLcR::synapse0x1b2b9d0() {
   return (neuron0x1b244e0()*-0.0568056);
}

double NNfunction_sb_dLcR::synapse0x1b2ba10() {
   return (neuron0x1b24790()*0.037619);
}

double NNfunction_sb_dLcR::synapse0x1b2ba50() {
   return (neuron0x1b24ad0()*-0.0689143);
}

double NNfunction_sb_dLcR::synapse0x1b2ba90() {
   return (neuron0x1b24e10()*0.476832);
}

double NNfunction_sb_dLcR::synapse0x1b2bad0() {
   return (neuron0x1b25150()*-0.0532576);
}

double NNfunction_sb_dLcR::synapse0x1b2bb10() {
   return (neuron0x1b25490()*0.00756172);
}

double NNfunction_sb_dLcR::synapse0x1b2bb50() {
   return (neuron0x1b257d0()*-0.0564485);
}

double NNfunction_sb_dLcR::synapse0x1b2bb90() {
   return (neuron0x1b25b10()*-0.00529574);
}

double NNfunction_sb_dLcR::synapse0x1b2bbd0() {
   return (neuron0x1b25e50()*0.0419839);
}

double NNfunction_sb_dLcR::synapse0x1b2bc10() {
   return (neuron0x1b26190()*0.0322692);
}

double NNfunction_sb_dLcR::synapse0x1b2bc50() {
   return (neuron0x1b264d0()*-0.0636746);
}

double NNfunction_sb_dLcR::synapse0x1b2bc90() {
   return (neuron0x1b26810()*-0.34205);
}

double NNfunction_sb_dLcR::synapse0x1b2bcd0() {
   return (neuron0x1b26b50()*-0.00841027);
}

double NNfunction_sb_dLcR::synapse0x1b2bd10() {
   return (neuron0x1b26e90()*-0.026589);
}

double NNfunction_sb_dLcR::synapse0x1b2bd50() {
   return (neuron0x1b271d0()*0.0908969);
}

double NNfunction_sb_dLcR::synapse0x1b2bd90() {
   return (neuron0x1b27510()*1.52362);
}

double NNfunction_sb_dLcR::synapse0x1b2b820() {
   return (neuron0x1b27850()*0.0185996);
}

double NNfunction_sb_dLcR::synapse0x1b2b860() {
   return (neuron0x1b27db0()*0.0243265);
}

double NNfunction_sb_dLcR::synapse0x1b2bee0() {
   return (neuron0x1b27fd0()*0.0420764);
}

double NNfunction_sb_dLcR::synapse0x1b2bf20() {
   return (neuron0x1b28310()*-0.000969614);
}

double NNfunction_sb_dLcR::synapse0x1b2bf60() {
   return (neuron0x1b28650()*-0.0592975);
}

double NNfunction_sb_dLcR::synapse0x1b2bfa0() {
   return (neuron0x1b28990()*-0.100919);
}

double NNfunction_sb_dLcR::synapse0x1b2bfe0() {
   return (neuron0x1b28cd0()*-0.0993215);
}

double NNfunction_sb_dLcR::synapse0x1b2c020() {
   return (neuron0x1b29010()*-0.0629501);
}

double NNfunction_sb_dLcR::synapse0x1b2c3a0() {
   return (neuron0x1b244e0()*-0.00291209);
}

double NNfunction_sb_dLcR::synapse0x1b2c3e0() {
   return (neuron0x1b24790()*0.0361114);
}

double NNfunction_sb_dLcR::synapse0x1b2c420() {
   return (neuron0x1b24ad0()*-0.0259728);
}

double NNfunction_sb_dLcR::synapse0x1b2c460() {
   return (neuron0x1b24e10()*-0.0420474);
}

double NNfunction_sb_dLcR::synapse0x1b2c4a0() {
   return (neuron0x1b25150()*0.00495353);
}

double NNfunction_sb_dLcR::synapse0x1b2c4e0() {
   return (neuron0x1b25490()*0.0216681);
}

double NNfunction_sb_dLcR::synapse0x1b2c520() {
   return (neuron0x1b257d0()*0.0076463);
}

double NNfunction_sb_dLcR::synapse0x1b2c560() {
   return (neuron0x1b25b10()*-0.059475);
}

double NNfunction_sb_dLcR::synapse0x1b2c5a0() {
   return (neuron0x1b25e50()*0.0152182);
}

double NNfunction_sb_dLcR::synapse0x18ed800() {
   return (neuron0x1b26190()*-0.00591903);
}

double NNfunction_sb_dLcR::synapse0x18ed840() {
   return (neuron0x1b264d0()*-0.0125869);
}

double NNfunction_sb_dLcR::synapse0x18ed880() {
   return (neuron0x1b26810()*-0.724515);
}

double NNfunction_sb_dLcR::synapse0x18ed8c0() {
   return (neuron0x1b26b50()*0.0112944);
}

double NNfunction_sb_dLcR::synapse0x18ed900() {
   return (neuron0x1b26e90()*-0.0109178);
}

double NNfunction_sb_dLcR::synapse0x18ed940() {
   return (neuron0x1b271d0()*0.0213778);
}

double NNfunction_sb_dLcR::synapse0x18ed980() {
   return (neuron0x1b27510()*-0.48996);
}

double NNfunction_sb_dLcR::synapse0x1b2c1f0() {
   return (neuron0x1b27850()*-0.024088);
}

double NNfunction_sb_dLcR::synapse0x1b2c230() {
   return (neuron0x1b27db0()*0.0104975);
}

double NNfunction_sb_dLcR::synapse0x18edad0() {
   return (neuron0x1b27fd0()*0.00125005);
}

double NNfunction_sb_dLcR::synapse0x18edb10() {
   return (neuron0x1b28310()*-0.0101346);
}

double NNfunction_sb_dLcR::synapse0x18edb50() {
   return (neuron0x1b28650()*-0.0042998);
}

double NNfunction_sb_dLcR::synapse0x18edb90() {
   return (neuron0x1b28990()*-0.00714503);
}

double NNfunction_sb_dLcR::synapse0x18edbd0() {
   return (neuron0x1b28cd0()*-0.0347393);
}

double NNfunction_sb_dLcR::synapse0x1b2cdf0() {
   return (neuron0x1b29010()*0.012393);
}

double NNfunction_sb_dLcR::synapse0x1b2d170() {
   return (neuron0x1b244e0()*-0.38201);
}

double NNfunction_sb_dLcR::synapse0x1b2d1b0() {
   return (neuron0x1b24790()*0.471664);
}

double NNfunction_sb_dLcR::synapse0x1b2d1f0() {
   return (neuron0x1b24ad0()*0.54112);
}

double NNfunction_sb_dLcR::synapse0x1b2d230() {
   return (neuron0x1b24e10()*-0.0677229);
}

double NNfunction_sb_dLcR::synapse0x1b2d270() {
   return (neuron0x1b25150()*0.147167);
}

double NNfunction_sb_dLcR::synapse0x1b2d2b0() {
   return (neuron0x1b25490()*-0.286388);
}

double NNfunction_sb_dLcR::synapse0x1b2d2f0() {
   return (neuron0x1b257d0()*-0.127201);
}

double NNfunction_sb_dLcR::synapse0x1b2d330() {
   return (neuron0x1b25b10()*-0.204464);
}

double NNfunction_sb_dLcR::synapse0x1b2d370() {
   return (neuron0x1b25e50()*0.034793);
}

double NNfunction_sb_dLcR::synapse0x1b2d3b0() {
   return (neuron0x1b26190()*-0.690615);
}

double NNfunction_sb_dLcR::synapse0x1b2d3f0() {
   return (neuron0x1b264d0()*0.0349615);
}

double NNfunction_sb_dLcR::synapse0x1b2d430() {
   return (neuron0x1b26810()*1.262);
}

double NNfunction_sb_dLcR::synapse0x1b2d470() {
   return (neuron0x1b26b50()*0.221312);
}

double NNfunction_sb_dLcR::synapse0x1b2d4b0() {
   return (neuron0x1b26e90()*0.000409093);
}

double NNfunction_sb_dLcR::synapse0x1b2d4f0() {
   return (neuron0x1b271d0()*-0.026663);
}

double NNfunction_sb_dLcR::synapse0x1b2d530() {
   return (neuron0x1b27510()*0.195839);
}

double NNfunction_sb_dLcR::synapse0x1b2cfc0() {
   return (neuron0x1b27850()*0.0662983);
}

double NNfunction_sb_dLcR::synapse0x1b2d000() {
   return (neuron0x1b27db0()*-0.408854);
}

double NNfunction_sb_dLcR::synapse0x1b2d680() {
   return (neuron0x1b27fd0()*-0.113733);
}

double NNfunction_sb_dLcR::synapse0x1b2d6c0() {
   return (neuron0x1b28310()*0.024095);
}

double NNfunction_sb_dLcR::synapse0x1b2d700() {
   return (neuron0x1b28650()*0.0100027);
}

double NNfunction_sb_dLcR::synapse0x1b2d740() {
   return (neuron0x1b28990()*0.191439);
}

double NNfunction_sb_dLcR::synapse0x1b2d780() {
   return (neuron0x1b28cd0()*0.174238);
}

double NNfunction_sb_dLcR::synapse0x1b2d7c0() {
   return (neuron0x1b29010()*0.132473);
}

double NNfunction_sb_dLcR::synapse0x1b2db40() {
   return (neuron0x1b244e0()*-0.141804);
}

double NNfunction_sb_dLcR::synapse0x1b2db80() {
   return (neuron0x1b24790()*0.039621);
}

double NNfunction_sb_dLcR::synapse0x1b2dbc0() {
   return (neuron0x1b24ad0()*-0.120316);
}

double NNfunction_sb_dLcR::synapse0x1b2dc00() {
   return (neuron0x1b24e10()*-0.301988);
}

double NNfunction_sb_dLcR::synapse0x1b2dc40() {
   return (neuron0x1b25150()*0.0649976);
}

double NNfunction_sb_dLcR::synapse0x1b2dc80() {
   return (neuron0x1b25490()*-0.084813);
}

double NNfunction_sb_dLcR::synapse0x1b2dcc0() {
   return (neuron0x1b257d0()*-0.0200462);
}

double NNfunction_sb_dLcR::synapse0x1b2dd00() {
   return (neuron0x1b25b10()*0.0718334);
}

double NNfunction_sb_dLcR::synapse0x1b2dd40() {
   return (neuron0x1b25e50()*-0.0476814);
}

double NNfunction_sb_dLcR::synapse0x1b2dd80() {
   return (neuron0x1b26190()*-0.0698987);
}

double NNfunction_sb_dLcR::synapse0x1b2ddc0() {
   return (neuron0x1b264d0()*-0.0854266);
}

double NNfunction_sb_dLcR::synapse0x1b2de00() {
   return (neuron0x1b26810()*-0.744352);
}

double NNfunction_sb_dLcR::synapse0x1b2de40() {
   return (neuron0x1b26b50()*-0.0157639);
}

double NNfunction_sb_dLcR::synapse0x1b2de80() {
   return (neuron0x1b26e90()*-0.0686095);
}

double NNfunction_sb_dLcR::synapse0x1b2dec0() {
   return (neuron0x1b271d0()*0.10059);
}

double NNfunction_sb_dLcR::synapse0x1b2df00() {
   return (neuron0x1b27510()*-1.07);
}

double NNfunction_sb_dLcR::synapse0x1b2d990() {
   return (neuron0x1b27850()*-0.0308147);
}

double NNfunction_sb_dLcR::synapse0x1b2d9d0() {
   return (neuron0x1b27db0()*-0.0447687);
}

double NNfunction_sb_dLcR::synapse0x1b2e050() {
   return (neuron0x1b27fd0()*-0.0803806);
}

double NNfunction_sb_dLcR::synapse0x1b2e090() {
   return (neuron0x1b28310()*-0.0152509);
}

double NNfunction_sb_dLcR::synapse0x1b2e0d0() {
   return (neuron0x1b28650()*-0.00189597);
}

double NNfunction_sb_dLcR::synapse0x1b2e110() {
   return (neuron0x1b28990()*-0.0642911);
}

double NNfunction_sb_dLcR::synapse0x1b2e150() {
   return (neuron0x1b28cd0()*-0.0347301);
}

double NNfunction_sb_dLcR::synapse0x1b2e190() {
   return (neuron0x1b29010()*-0.0503167);
}

double NNfunction_sb_dLcR::synapse0x1b27ca0() {
   return (neuron0x1b244e0()*0.0228303);
}

double NNfunction_sb_dLcR::synapse0x1b27ce0() {
   return (neuron0x1b24790()*-0.0454578);
}

double NNfunction_sb_dLcR::synapse0x1b27d20() {
   return (neuron0x1b24ad0()*-0.0246765);
}

double NNfunction_sb_dLcR::synapse0x1b27d60() {
   return (neuron0x1b24e10()*-0.124549);
}

double NNfunction_sb_dLcR::synapse0x1b2e720() {
   return (neuron0x1b25150()*-0.00280571);
}

double NNfunction_sb_dLcR::synapse0x1b2e760() {
   return (neuron0x1b25490()*0.0219976);
}

double NNfunction_sb_dLcR::synapse0x1b2e7a0() {
   return (neuron0x1b257d0()*0.0140103);
}

double NNfunction_sb_dLcR::synapse0x1b2e7e0() {
   return (neuron0x1b25b10()*0.0112531);
}

double NNfunction_sb_dLcR::synapse0x1b2e820() {
   return (neuron0x1b25e50()*0.00984043);
}

double NNfunction_sb_dLcR::synapse0x1b2e860() {
   return (neuron0x1b26190()*0.0183887);
}

double NNfunction_sb_dLcR::synapse0x1b2e8a0() {
   return (neuron0x1b264d0()*-0.0182444);
}

double NNfunction_sb_dLcR::synapse0x1b2e8e0() {
   return (neuron0x1b26810()*1.72279);
}

double NNfunction_sb_dLcR::synapse0x1b2e920() {
   return (neuron0x1b26b50()*-0.0276821);
}

double NNfunction_sb_dLcR::synapse0x1b2e960() {
   return (neuron0x1b26e90()*-0.00170126);
}

double NNfunction_sb_dLcR::synapse0x1b2e9a0() {
   return (neuron0x1b271d0()*0.0110525);
}

double NNfunction_sb_dLcR::synapse0x1b2e9e0() {
   return (neuron0x1b27510()*-0.070344);
}

double NNfunction_sb_dLcR::synapse0x1b2e360() {
   return (neuron0x1b27850()*0.0227538);
}

double NNfunction_sb_dLcR::synapse0x1b2e3a0() {
   return (neuron0x1b27db0()*-0.00529191);
}

double NNfunction_sb_dLcR::synapse0x1b2eb30() {
   return (neuron0x1b27fd0()*-0.0167379);
}

double NNfunction_sb_dLcR::synapse0x1b2eb70() {
   return (neuron0x1b28310()*-0.0100839);
}

double NNfunction_sb_dLcR::synapse0x1b2ebb0() {
   return (neuron0x1b28650()*-0.00740755);
}

double NNfunction_sb_dLcR::synapse0x1b2ebf0() {
   return (neuron0x1b28990()*-0.00775316);
}

double NNfunction_sb_dLcR::synapse0x1b2ec30() {
   return (neuron0x1b28cd0()*-0.0062021);
}

double NNfunction_sb_dLcR::synapse0x1b2ec70() {
   return (neuron0x1b29010()*0.00417368);
}

double NNfunction_sb_dLcR::synapse0x1b2eff0() {
   return (neuron0x1b244e0()*0.30518);
}

double NNfunction_sb_dLcR::synapse0x1b2f030() {
   return (neuron0x1b24790()*0.232033);
}

double NNfunction_sb_dLcR::synapse0x1b2f070() {
   return (neuron0x1b24ad0()*0.253417);
}

double NNfunction_sb_dLcR::synapse0x1b2f0b0() {
   return (neuron0x1b24e10()*1.6184);
}

double NNfunction_sb_dLcR::synapse0x1b2f0f0() {
   return (neuron0x1b25150()*-0.740735);
}

double NNfunction_sb_dLcR::synapse0x1b2f130() {
   return (neuron0x1b25490()*-0.230245);
}

double NNfunction_sb_dLcR::synapse0x1b2f170() {
   return (neuron0x1b257d0()*-0.641373);
}

double NNfunction_sb_dLcR::synapse0x1b2f1b0() {
   return (neuron0x1b25b10()*-0.652859);
}

double NNfunction_sb_dLcR::synapse0x1b2f1f0() {
   return (neuron0x1b25e50()*-0.87367);
}

double NNfunction_sb_dLcR::synapse0x1b2f230() {
   return (neuron0x1b26190()*-0.336781);
}

double NNfunction_sb_dLcR::synapse0x1b2f270() {
   return (neuron0x1b264d0()*-0.362243);
}

double NNfunction_sb_dLcR::synapse0x1b2f2b0() {
   return (neuron0x1b26810()*0.825737);
}

double NNfunction_sb_dLcR::synapse0x1b2f2f0() {
   return (neuron0x1b26b50()*-0.265718);
}

double NNfunction_sb_dLcR::synapse0x1b2f330() {
   return (neuron0x1b26e90()*-0.170289);
}

double NNfunction_sb_dLcR::synapse0x1b2f370() {
   return (neuron0x1b271d0()*0.0629301);
}

double NNfunction_sb_dLcR::synapse0x1b2f3b0() {
   return (neuron0x1b27510()*-0.353502);
}

double NNfunction_sb_dLcR::synapse0x1b2ee40() {
   return (neuron0x1b27850()*0.0695209);
}

double NNfunction_sb_dLcR::synapse0x1b2ee80() {
   return (neuron0x1b27db0()*0.236248);
}

double NNfunction_sb_dLcR::synapse0x1b2f500() {
   return (neuron0x1b27fd0()*0.0615522);
}

double NNfunction_sb_dLcR::synapse0x1b2f540() {
   return (neuron0x1b28310()*-0.132695);
}

double NNfunction_sb_dLcR::synapse0x1b2f580() {
   return (neuron0x1b28650()*-0.0947674);
}

double NNfunction_sb_dLcR::synapse0x1b2f5c0() {
   return (neuron0x1b28990()*-0.299259);
}

double NNfunction_sb_dLcR::synapse0x1b2f600() {
   return (neuron0x1b28cd0()*0.267621);
}

double NNfunction_sb_dLcR::synapse0x1b2f640() {
   return (neuron0x1b29010()*0.231834);
}

double NNfunction_sb_dLcR::synapse0x1b2f9c0() {
   return (neuron0x1b244e0()*-0.0890743);
}

double NNfunction_sb_dLcR::synapse0x1b2fa00() {
   return (neuron0x1b24790()*0.184805);
}

double NNfunction_sb_dLcR::synapse0x1b2fa40() {
   return (neuron0x1b24ad0()*0.15051);
}

double NNfunction_sb_dLcR::synapse0x1b2fa80() {
   return (neuron0x1b24e10()*-0.235745);
}

double NNfunction_sb_dLcR::synapse0x1b2fac0() {
   return (neuron0x1b25150()*0.335166);
}

double NNfunction_sb_dLcR::synapse0x1b2fb00() {
   return (neuron0x1b25490()*0.218632);
}

double NNfunction_sb_dLcR::synapse0x1b2fb40() {
   return (neuron0x1b257d0()*0.669446);
}

double NNfunction_sb_dLcR::synapse0x1b2fb80() {
   return (neuron0x1b25b10()*-0.228132);
}

double NNfunction_sb_dLcR::synapse0x1b2fbc0() {
   return (neuron0x1b25e50()*0.222295);
}

double NNfunction_sb_dLcR::synapse0x1b2fc00() {
   return (neuron0x1b26190()*0.0947008);
}

double NNfunction_sb_dLcR::synapse0x1b2fc40() {
   return (neuron0x1b264d0()*0.0703532);
}

double NNfunction_sb_dLcR::synapse0x1b2fc80() {
   return (neuron0x1b26810()*-0.200841);
}

double NNfunction_sb_dLcR::synapse0x1b2fcc0() {
   return (neuron0x1b26b50()*0.252989);
}

double NNfunction_sb_dLcR::synapse0x1b2fd00() {
   return (neuron0x1b26e90()*0.118646);
}

double NNfunction_sb_dLcR::synapse0x1b2fd40() {
   return (neuron0x1b271d0()*-0.14495);
}

double NNfunction_sb_dLcR::synapse0x1b2fd80() {
   return (neuron0x1b27510()*-0.0978379);
}

double NNfunction_sb_dLcR::synapse0x1b2f810() {
   return (neuron0x1b27850()*0.493055);
}

double NNfunction_sb_dLcR::synapse0x1b2f850() {
   return (neuron0x1b27db0()*-0.0812821);
}

double NNfunction_sb_dLcR::synapse0x1b2c5e0() {
   return (neuron0x1b27fd0()*0.13358);
}

double NNfunction_sb_dLcR::synapse0x1b2c620() {
   return (neuron0x1b28310()*-0.236508);
}

double NNfunction_sb_dLcR::synapse0x1b2c660() {
   return (neuron0x1b28650()*-0.231364);
}

double NNfunction_sb_dLcR::synapse0x1b2c6a0() {
   return (neuron0x1b28990()*0.221531);
}

double NNfunction_sb_dLcR::synapse0x1b2c6e0() {
   return (neuron0x1b28cd0()*0.00154976);
}

double NNfunction_sb_dLcR::synapse0x1b2c720() {
   return (neuron0x1b29010()*0.168465);
}

double NNfunction_sb_dLcR::synapse0x1b2caa0() {
   return (neuron0x1b244e0()*0.000626727);
}

double NNfunction_sb_dLcR::synapse0x1b2cae0() {
   return (neuron0x1b24790()*0.00287777);
}

double NNfunction_sb_dLcR::synapse0x1b2cb20() {
   return (neuron0x1b24ad0()*0.0226919);
}

double NNfunction_sb_dLcR::synapse0x1b2cb60() {
   return (neuron0x1b24e10()*3.40102);
}

double NNfunction_sb_dLcR::synapse0x1b2cba0() {
   return (neuron0x1b25150()*-0.035274);
}

double NNfunction_sb_dLcR::synapse0x1b2cbe0() {
   return (neuron0x1b25490()*-0.0178653);
}

double NNfunction_sb_dLcR::synapse0x1b2cc20() {
   return (neuron0x1b257d0()*-0.028934);
}

double NNfunction_sb_dLcR::synapse0x1b2cc60() {
   return (neuron0x1b25b10()*-0.0164431);
}

double NNfunction_sb_dLcR::synapse0x1b2cca0() {
   return (neuron0x1b25e50()*-0.0153798);
}

double NNfunction_sb_dLcR::synapse0x1b2cce0() {
   return (neuron0x1b26190()*0.00225588);
}

double NNfunction_sb_dLcR::synapse0x1b2cd20() {
   return (neuron0x1b264d0()*-0.00705561);
}

double NNfunction_sb_dLcR::synapse0x1b2cd60() {
   return (neuron0x1b26810()*0.628572);
}

double NNfunction_sb_dLcR::synapse0x1b2cda0() {
   return (neuron0x1b26b50()*-0.0166801);
}

double NNfunction_sb_dLcR::synapse0x1b30ee0() {
   return (neuron0x1b26e90()*0.0308766);
}

double NNfunction_sb_dLcR::synapse0x1b30f20() {
   return (neuron0x1b271d0()*-0.0050771);
}

double NNfunction_sb_dLcR::synapse0x1b30f60() {
   return (neuron0x1b27510()*0.508648);
}

double NNfunction_sb_dLcR::synapse0x1b2c8f0() {
   return (neuron0x1b27850()*-0.0078444);
}

double NNfunction_sb_dLcR::synapse0x1b2c930() {
   return (neuron0x1b27db0()*0.00109711);
}

double NNfunction_sb_dLcR::synapse0x1b310b0() {
   return (neuron0x1b27fd0()*-0.0301605);
}

double NNfunction_sb_dLcR::synapse0x1b310f0() {
   return (neuron0x1b28310()*0.0464466);
}

double NNfunction_sb_dLcR::synapse0x1b31130() {
   return (neuron0x1b28650()*-0.00579792);
}

double NNfunction_sb_dLcR::synapse0x1b31170() {
   return (neuron0x1b28990()*0.0134187);
}

double NNfunction_sb_dLcR::synapse0x1b311b0() {
   return (neuron0x1b28cd0()*-0.00829403);
}

double NNfunction_sb_dLcR::synapse0x1b311f0() {
   return (neuron0x1b29010()*0.0117917);
}

double NNfunction_sb_dLcR::synapse0x1b31570() {
   return (neuron0x1b244e0()*0.0584885);
}

double NNfunction_sb_dLcR::synapse0x1b315b0() {
   return (neuron0x1b24790()*-0.195034);
}

double NNfunction_sb_dLcR::synapse0x1b315f0() {
   return (neuron0x1b24ad0()*0.0110127);
}

double NNfunction_sb_dLcR::synapse0x1b31630() {
   return (neuron0x1b24e10()*-1.64948);
}

double NNfunction_sb_dLcR::synapse0x1b31670() {
   return (neuron0x1b25150()*-0.0280334);
}

double NNfunction_sb_dLcR::synapse0x1b316b0() {
   return (neuron0x1b25490()*0.0821955);
}

double NNfunction_sb_dLcR::synapse0x1b316f0() {
   return (neuron0x1b257d0()*-0.0367846);
}

double NNfunction_sb_dLcR::synapse0x1b31730() {
   return (neuron0x1b25b10()*-0.0541864);
}

double NNfunction_sb_dLcR::synapse0x1b31770() {
   return (neuron0x1b25e50()*0.11142);
}

double NNfunction_sb_dLcR::synapse0x1b317b0() {
   return (neuron0x1b26190()*-0.0128381);
}

double NNfunction_sb_dLcR::synapse0x1b317f0() {
   return (neuron0x1b264d0()*0.0221215);
}

double NNfunction_sb_dLcR::synapse0x1b31830() {
   return (neuron0x1b26810()*-0.204471);
}

double NNfunction_sb_dLcR::synapse0x1b31870() {
   return (neuron0x1b26b50()*0.113762);
}

double NNfunction_sb_dLcR::synapse0x1b318b0() {
   return (neuron0x1b26e90()*-0.0462626);
}

double NNfunction_sb_dLcR::synapse0x1b318f0() {
   return (neuron0x1b271d0()*0.0402433);
}

double NNfunction_sb_dLcR::synapse0x1b31930() {
   return (neuron0x1b27510()*-0.129173);
}

double NNfunction_sb_dLcR::synapse0x1b313c0() {
   return (neuron0x1b27850()*0.00530358);
}

double NNfunction_sb_dLcR::synapse0x1b31400() {
   return (neuron0x1b27db0()*0.230061);
}

double NNfunction_sb_dLcR::synapse0x1b31a80() {
   return (neuron0x1b27fd0()*0.232038);
}

double NNfunction_sb_dLcR::synapse0x1b31ac0() {
   return (neuron0x1b28310()*0.128019);
}

double NNfunction_sb_dLcR::synapse0x1b31b00() {
   return (neuron0x1b28650()*0.0365098);
}

double NNfunction_sb_dLcR::synapse0x1b31b40() {
   return (neuron0x1b28990()*-0.0382791);
}

double NNfunction_sb_dLcR::synapse0x1b31b80() {
   return (neuron0x1b28cd0()*0.0214554);
}

double NNfunction_sb_dLcR::synapse0x1b31bc0() {
   return (neuron0x1b29010()*0.0796029);
}

double NNfunction_sb_dLcR::synapse0x1b31f40() {
   return (neuron0x1b244e0()*0.0339164);
}

double NNfunction_sb_dLcR::synapse0x1b31f80() {
   return (neuron0x1b24790()*0.116237);
}

double NNfunction_sb_dLcR::synapse0x1b31fc0() {
   return (neuron0x1b24ad0()*-0.49217);
}

double NNfunction_sb_dLcR::synapse0x1b32000() {
   return (neuron0x1b24e10()*0.467701);
}

double NNfunction_sb_dLcR::synapse0x1b32040() {
   return (neuron0x1b25150()*0.24994);
}

double NNfunction_sb_dLcR::synapse0x1b32080() {
   return (neuron0x1b25490()*0.240258);
}

double NNfunction_sb_dLcR::synapse0x1b320c0() {
   return (neuron0x1b257d0()*0.0817073);
}

double NNfunction_sb_dLcR::synapse0x1b32100() {
   return (neuron0x1b25b10()*-0.0891118);
}

double NNfunction_sb_dLcR::synapse0x1b32140() {
   return (neuron0x1b25e50()*-0.458365);
}

double NNfunction_sb_dLcR::synapse0x1b32180() {
   return (neuron0x1b26190()*-0.139912);
}

double NNfunction_sb_dLcR::synapse0x1b321c0() {
   return (neuron0x1b264d0()*0.618643);
}

double NNfunction_sb_dLcR::synapse0x1b32200() {
   return (neuron0x1b26810()*-0.249604);
}

double NNfunction_sb_dLcR::synapse0x1b32240() {
   return (neuron0x1b26b50()*0.0128705);
}

double NNfunction_sb_dLcR::synapse0x1b32280() {
   return (neuron0x1b26e90()*-0.247322);
}

double NNfunction_sb_dLcR::synapse0x1b322c0() {
   return (neuron0x1b271d0()*-0.0587765);
}

double NNfunction_sb_dLcR::synapse0x1b32300() {
   return (neuron0x1b27510()*-0.0719061);
}

double NNfunction_sb_dLcR::synapse0x1b31d90() {
   return (neuron0x1b27850()*-0.284399);
}

double NNfunction_sb_dLcR::synapse0x1b31dd0() {
   return (neuron0x1b27db0()*0.20489);
}

double NNfunction_sb_dLcR::synapse0x1b32450() {
   return (neuron0x1b27fd0()*0.263322);
}

double NNfunction_sb_dLcR::synapse0x1b32490() {
   return (neuron0x1b28310()*-0.340817);
}

double NNfunction_sb_dLcR::synapse0x1b324d0() {
   return (neuron0x1b28650()*0.0590001);
}

double NNfunction_sb_dLcR::synapse0x1b32510() {
   return (neuron0x1b28990()*0.14615);
}

double NNfunction_sb_dLcR::synapse0x1b32550() {
   return (neuron0x1b28cd0()*-0.658079);
}

double NNfunction_sb_dLcR::synapse0x1b32590() {
   return (neuron0x1b29010()*-0.064943);
}

double NNfunction_sb_dLcR::synapse0x1b32910() {
   return (neuron0x1b244e0()*0.00172747);
}

double NNfunction_sb_dLcR::synapse0x1b32950() {
   return (neuron0x1b24790()*0.144883);
}

double NNfunction_sb_dLcR::synapse0x1b32990() {
   return (neuron0x1b24ad0()*-0.739535);
}

double NNfunction_sb_dLcR::synapse0x1b329d0() {
   return (neuron0x1b24e10()*0.0238507);
}

double NNfunction_sb_dLcR::synapse0x1b32a10() {
   return (neuron0x1b25150()*-0.0277243);
}

double NNfunction_sb_dLcR::synapse0x1b32a50() {
   return (neuron0x1b25490()*0.0338803);
}

double NNfunction_sb_dLcR::synapse0x1b32a90() {
   return (neuron0x1b257d0()*-0.090169);
}

double NNfunction_sb_dLcR::synapse0x1b32ad0() {
   return (neuron0x1b25b10()*-0.314982);
}

double NNfunction_sb_dLcR::synapse0x1b32b10() {
   return (neuron0x1b25e50()*-0.0236152);
}

double NNfunction_sb_dLcR::synapse0x1b32b50() {
   return (neuron0x1b26190()*0.0372695);
}

double NNfunction_sb_dLcR::synapse0x1b32b90() {
   return (neuron0x1b264d0()*-0.0973951);
}

double NNfunction_sb_dLcR::synapse0x1b32bd0() {
   return (neuron0x1b26810()*-0.0850896);
}

double NNfunction_sb_dLcR::synapse0x1b32c10() {
   return (neuron0x1b26b50()*-0.178394);
}

double NNfunction_sb_dLcR::synapse0x1b32c50() {
   return (neuron0x1b26e90()*-0.037882);
}

double NNfunction_sb_dLcR::synapse0x1b32c90() {
   return (neuron0x1b271d0()*0.193916);
}

double NNfunction_sb_dLcR::synapse0x1b32cd0() {
   return (neuron0x1b27510()*0.438769);
}

double NNfunction_sb_dLcR::synapse0x1b32760() {
   return (neuron0x1b27850()*-0.0530663);
}

double NNfunction_sb_dLcR::synapse0x1b327a0() {
   return (neuron0x1b27db0()*0.00719412);
}

double NNfunction_sb_dLcR::synapse0x1b32e20() {
   return (neuron0x1b27fd0()*-0.0192172);
}

double NNfunction_sb_dLcR::synapse0x1b32e60() {
   return (neuron0x1b28310()*-0.180785);
}

double NNfunction_sb_dLcR::synapse0x1b32ea0() {
   return (neuron0x1b28650()*0.0519634);
}

double NNfunction_sb_dLcR::synapse0x1b32ee0() {
   return (neuron0x1b28990()*0.039749);
}

double NNfunction_sb_dLcR::synapse0x1b32f20() {
   return (neuron0x1b28cd0()*-0.222757);
}

double NNfunction_sb_dLcR::synapse0x1b32f60() {
   return (neuron0x1b29010()*-0.0806591);
}

double NNfunction_sb_dLcR::synapse0x1b332e0() {
   return (neuron0x1b244e0()*0.135875);
}

double NNfunction_sb_dLcR::synapse0x1b24670() {
   return (neuron0x1b24790()*-0.00733221);
}

double NNfunction_sb_dLcR::synapse0x1b246b0() {
   return (neuron0x1b24ad0()*-0.0710417);
}

double NNfunction_sb_dLcR::synapse0x1b249b0() {
   return (neuron0x1b24e10()*0.547332);
}

double NNfunction_sb_dLcR::synapse0x1b249f0() {
   return (neuron0x1b25150()*0.253093);
}

double NNfunction_sb_dLcR::synapse0x1b24cf0() {
   return (neuron0x1b25490()*-0.0806303);
}

double NNfunction_sb_dLcR::synapse0x1b24d30() {
   return (neuron0x1b257d0()*0.139218);
}

double NNfunction_sb_dLcR::synapse0x1b25030() {
   return (neuron0x1b25b10()*-0.390434);
}

double NNfunction_sb_dLcR::synapse0x1b25070() {
   return (neuron0x1b25e50()*-0.174656);
}

double NNfunction_sb_dLcR::synapse0x1b25370() {
   return (neuron0x1b26190()*0.118075);
}

double NNfunction_sb_dLcR::synapse0x1b253b0() {
   return (neuron0x1b264d0()*0.0916439);
}

double NNfunction_sb_dLcR::synapse0x1b256b0() {
   return (neuron0x1b26810()*-0.0475278);
}

double NNfunction_sb_dLcR::synapse0x1b256f0() {
   return (neuron0x1b26b50()*-0.591919);
}

double NNfunction_sb_dLcR::synapse0x1b259f0() {
   return (neuron0x1b26e90()*0.141704);
}

double NNfunction_sb_dLcR::synapse0x1b25a30() {
   return (neuron0x1b271d0()*-0.383066);
}

double NNfunction_sb_dLcR::synapse0x1b25d30() {
   return (neuron0x1b27510()*-0.119372);
}

double NNfunction_sb_dLcR::synapse0x1b25d70() {
   return (neuron0x1b27850()*0.128261);
}

double NNfunction_sb_dLcR::synapse0x1b26070() {
   return (neuron0x1b27db0()*-0.686363);
}

double NNfunction_sb_dLcR::synapse0x1b260b0() {
   return (neuron0x1b27fd0()*-0.0630777);
}

double NNfunction_sb_dLcR::synapse0x1b263b0() {
   return (neuron0x1b28310()*0.15429);
}

double NNfunction_sb_dLcR::synapse0x1b263f0() {
   return (neuron0x1b28650()*0.125188);
}

double NNfunction_sb_dLcR::synapse0x1b266f0() {
   return (neuron0x1b28990()*0.126238);
}

double NNfunction_sb_dLcR::synapse0x1b26730() {
   return (neuron0x1b28cd0()*-0.217454);
}

double NNfunction_sb_dLcR::synapse0x1b26a30() {
   return (neuron0x1b29010()*0.117275);
}

double NNfunction_sb_dLcR::synapse0x1b26a70() {
   return (neuron0x1b244e0()*0.0468682);
}

double NNfunction_sb_dLcR::synapse0x1b27730() {
   return (neuron0x1b24790()*-0.115685);
}

double NNfunction_sb_dLcR::synapse0x1b27770() {
   return (neuron0x1b24ad0()*-0.118617);
}

double NNfunction_sb_dLcR::synapse0x1b33130() {
   return (neuron0x1b24e10()*0.460653);
}

double NNfunction_sb_dLcR::synapse0x1b33170() {
   return (neuron0x1b25150()*0.16868);
}

double NNfunction_sb_dLcR::synapse0x1b27a70() {
   return (neuron0x1b25490()*-0.173512);
}

double NNfunction_sb_dLcR::synapse0x1b27ab0() {
   return (neuron0x1b257d0()*0.161265);
}

double NNfunction_sb_dLcR::synapse0x18df4c0() {
   return (neuron0x1b25b10()*0.523892);
}

double NNfunction_sb_dLcR::synapse0x18df500() {
   return (neuron0x1b25e50()*-0.213701);
}

double NNfunction_sb_dLcR::synapse0x1b281f0() {
   return (neuron0x1b26190()*0.0117884);
}

double NNfunction_sb_dLcR::synapse0x1b28230() {
   return (neuron0x1b264d0()*0.0661092);
}

double NNfunction_sb_dLcR::synapse0x1b28530() {
   return (neuron0x1b26810()*0.560963);
}

double NNfunction_sb_dLcR::synapse0x1b28570() {
   return (neuron0x1b26b50()*0.174095);
}

double NNfunction_sb_dLcR::synapse0x1b28870() {
   return (neuron0x1b26e90()*0.0303873);
}

double NNfunction_sb_dLcR::synapse0x1b288b0() {
   return (neuron0x1b271d0()*-0.147117);
}

double NNfunction_sb_dLcR::synapse0x1b28bb0() {
   return (neuron0x1b27510()*1.20281);
}

double NNfunction_sb_dLcR::synapse0x1b28bf0() {
   return (neuron0x1b27850()*-0.00639069);
}

double NNfunction_sb_dLcR::synapse0x1b28ef0() {
   return (neuron0x1b27db0()*0.0261386);
}

double NNfunction_sb_dLcR::synapse0x1b28f30() {
   return (neuron0x1b27fd0()*0.10907);
}

double NNfunction_sb_dLcR::synapse0x1b29230() {
   return (neuron0x1b28310()*9.96372e-05);
}

double NNfunction_sb_dLcR::synapse0x1b29270() {
   return (neuron0x1b28650()*-0.082588);
}

double NNfunction_sb_dLcR::synapse0x1b26d70() {
   return (neuron0x1b28990()*-0.00978437);
}

double NNfunction_sb_dLcR::synapse0x1b26db0() {
   return (neuron0x1b28cd0()*0.0683197);
}

double NNfunction_sb_dLcR::synapse0x1b35050() {
   return (neuron0x1b29010()*0.0191128);
}

double NNfunction_sb_dLcR::synapse0x1b353d0() {
   return (neuron0x1b244e0()*-0.036741);
}

double NNfunction_sb_dLcR::synapse0x1b35410() {
   return (neuron0x1b24790()*0.0226945);
}

double NNfunction_sb_dLcR::synapse0x1b35450() {
   return (neuron0x1b24ad0()*0.0348575);
}

double NNfunction_sb_dLcR::synapse0x1b35490() {
   return (neuron0x1b24e10()*-0.578151);
}

double NNfunction_sb_dLcR::synapse0x1b354d0() {
   return (neuron0x1b25150()*-0.0414947);
}

double NNfunction_sb_dLcR::synapse0x1b35510() {
   return (neuron0x1b25490()*-0.00912088);
}

double NNfunction_sb_dLcR::synapse0x1b35550() {
   return (neuron0x1b257d0()*-0.0345579);
}

double NNfunction_sb_dLcR::synapse0x1b35590() {
   return (neuron0x1b25b10()*0.0042278);
}

double NNfunction_sb_dLcR::synapse0x1b355d0() {
   return (neuron0x1b25e50()*0.0126096);
}

double NNfunction_sb_dLcR::synapse0x1b35610() {
   return (neuron0x1b26190()*0.0375254);
}

double NNfunction_sb_dLcR::synapse0x1b35650() {
   return (neuron0x1b264d0()*0.00868376);
}

double NNfunction_sb_dLcR::synapse0x1b35690() {
   return (neuron0x1b26810()*-0.0850992);
}

double NNfunction_sb_dLcR::synapse0x1b356d0() {
   return (neuron0x1b26b50()*0.0525283);
}

double NNfunction_sb_dLcR::synapse0x1b35710() {
   return (neuron0x1b26e90()*0.0352617);
}

double NNfunction_sb_dLcR::synapse0x1b35750() {
   return (neuron0x1b271d0()*0.0116648);
}

double NNfunction_sb_dLcR::synapse0x1b35790() {
   return (neuron0x1b27510()*-0.104329);
}

double NNfunction_sb_dLcR::synapse0x1b35220() {
   return (neuron0x1b27850()*-0.0194403);
}

double NNfunction_sb_dLcR::synapse0x1b35260() {
   return (neuron0x1b27db0()*0.0182849);
}

double NNfunction_sb_dLcR::synapse0x1b358e0() {
   return (neuron0x1b27fd0()*0.0193587);
}

double NNfunction_sb_dLcR::synapse0x1b35920() {
   return (neuron0x1b28310()*0.00352719);
}

double NNfunction_sb_dLcR::synapse0x1b35960() {
   return (neuron0x1b28650()*-0.0121123);
}

double NNfunction_sb_dLcR::synapse0x1b359a0() {
   return (neuron0x1b28990()*0.00531994);
}

double NNfunction_sb_dLcR::synapse0x1b359e0() {
   return (neuron0x1b28cd0()*-0.0109714);
}

double NNfunction_sb_dLcR::synapse0x1b35a20() {
   return (neuron0x1b29010()*-0.012287);
}

double NNfunction_sb_dLcR::synapse0x1b35da0() {
   return (neuron0x1b244e0()*0.0273915);
}

double NNfunction_sb_dLcR::synapse0x1b35de0() {
   return (neuron0x1b24790()*0.0488579);
}

double NNfunction_sb_dLcR::synapse0x1b35e20() {
   return (neuron0x1b24ad0()*-0.0496887);
}

double NNfunction_sb_dLcR::synapse0x1b35e60() {
   return (neuron0x1b24e10()*1.07709);
}

double NNfunction_sb_dLcR::synapse0x1b35ea0() {
   return (neuron0x1b25150()*0.0188502);
}

double NNfunction_sb_dLcR::synapse0x1b35ee0() {
   return (neuron0x1b25490()*-0.0635638);
}

double NNfunction_sb_dLcR::synapse0x1b35f20() {
   return (neuron0x1b257d0()*-0.0162175);
}

double NNfunction_sb_dLcR::synapse0x1b35f60() {
   return (neuron0x1b25b10()*0.0534447);
}

double NNfunction_sb_dLcR::synapse0x1b35fa0() {
   return (neuron0x1b25e50()*-0.0397435);
}

double NNfunction_sb_dLcR::synapse0x1b35fe0() {
   return (neuron0x1b26190()*-0.0441923);
}

double NNfunction_sb_dLcR::synapse0x1b36020() {
   return (neuron0x1b264d0()*0.0596413);
}

double NNfunction_sb_dLcR::synapse0x1b36060() {
   return (neuron0x1b26810()*-1.05926);
}

double NNfunction_sb_dLcR::synapse0x1b360a0() {
   return (neuron0x1b26b50()*-0.00840174);
}

double NNfunction_sb_dLcR::synapse0x1b360e0() {
   return (neuron0x1b26e90()*-0.0265146);
}

double NNfunction_sb_dLcR::synapse0x1b36120() {
   return (neuron0x1b271d0()*-0.0125902);
}

double NNfunction_sb_dLcR::synapse0x1b36160() {
   return (neuron0x1b27510()*0.231518);
}

double NNfunction_sb_dLcR::synapse0x1b35bf0() {
   return (neuron0x1b27850()*-0.100935);
}

double NNfunction_sb_dLcR::synapse0x1b35c30() {
   return (neuron0x1b27db0()*0.00669872);
}

double NNfunction_sb_dLcR::synapse0x1b362b0() {
   return (neuron0x1b27fd0()*-0.0503352);
}

double NNfunction_sb_dLcR::synapse0x1b362f0() {
   return (neuron0x1b28310()*0.099194);
}

double NNfunction_sb_dLcR::synapse0x1b36330() {
   return (neuron0x1b28650()*-0.00917727);
}

double NNfunction_sb_dLcR::synapse0x1b36370() {
   return (neuron0x1b28990()*-0.0382122);
}

double NNfunction_sb_dLcR::synapse0x1b363b0() {
   return (neuron0x1b28cd0()*0.040645);
}

double NNfunction_sb_dLcR::synapse0x1b363f0() {
   return (neuron0x1b29010()*0.0348551);
}

double NNfunction_sb_dLcR::synapse0x1b36770() {
   return (neuron0x1b244e0()*-0.149128);
}

double NNfunction_sb_dLcR::synapse0x1b367b0() {
   return (neuron0x1b24790()*-0.110545);
}

double NNfunction_sb_dLcR::synapse0x1b367f0() {
   return (neuron0x1b24ad0()*0.0108141);
}

double NNfunction_sb_dLcR::synapse0x1b36830() {
   return (neuron0x1b24e10()*0.936267);
}

double NNfunction_sb_dLcR::synapse0x1b36870() {
   return (neuron0x1b25150()*0.0125487);
}

double NNfunction_sb_dLcR::synapse0x1b368b0() {
   return (neuron0x1b25490()*-0.142832);
}

double NNfunction_sb_dLcR::synapse0x1b368f0() {
   return (neuron0x1b257d0()*-0.145018);
}

double NNfunction_sb_dLcR::synapse0x1b36930() {
   return (neuron0x1b25b10()*0.395189);
}

double NNfunction_sb_dLcR::synapse0x1b36970() {
   return (neuron0x1b25e50()*0.111637);
}

double NNfunction_sb_dLcR::synapse0x1b369b0() {
   return (neuron0x1b26190()*0.149396);
}

double NNfunction_sb_dLcR::synapse0x1b369f0() {
   return (neuron0x1b264d0()*0.471916);
}

double NNfunction_sb_dLcR::synapse0x1b36a30() {
   return (neuron0x1b26810()*0.36134);
}

double NNfunction_sb_dLcR::synapse0x1b36a70() {
   return (neuron0x1b26b50()*0.0299444);
}

double NNfunction_sb_dLcR::synapse0x1b36ab0() {
   return (neuron0x1b26e90()*0.452554);
}

double NNfunction_sb_dLcR::synapse0x1b36af0() {
   return (neuron0x1b271d0()*-0.133439);
}

double NNfunction_sb_dLcR::synapse0x1b36b30() {
   return (neuron0x1b27510()*0.0221488);
}

double NNfunction_sb_dLcR::synapse0x1b365c0() {
   return (neuron0x1b27850()*-0.602858);
}

double NNfunction_sb_dLcR::synapse0x1b36600() {
   return (neuron0x1b27db0()*-0.243963);
}

double NNfunction_sb_dLcR::synapse0x1b36c80() {
   return (neuron0x1b27fd0()*0.325539);
}

double NNfunction_sb_dLcR::synapse0x1b36cc0() {
   return (neuron0x1b28310()*-0.210729);
}

double NNfunction_sb_dLcR::synapse0x1b36d00() {
   return (neuron0x1b28650()*-0.0904971);
}

double NNfunction_sb_dLcR::synapse0x1b36d40() {
   return (neuron0x1b28990()*-0.35644);
}

double NNfunction_sb_dLcR::synapse0x1b36d80() {
   return (neuron0x1b28cd0()*-0.0711472);
}

double NNfunction_sb_dLcR::synapse0x1b36dc0() {
   return (neuron0x1b29010()*-0.517791);
}

double NNfunction_sb_dLcR::synapse0x1b37140() {
   return (neuron0x1b244e0()*0.0375744);
}

double NNfunction_sb_dLcR::synapse0x1b37180() {
   return (neuron0x1b24790()*0.033735);
}

double NNfunction_sb_dLcR::synapse0x1b371c0() {
   return (neuron0x1b24ad0()*0.276742);
}

double NNfunction_sb_dLcR::synapse0x1b37200() {
   return (neuron0x1b24e10()*1.33364);
}

double NNfunction_sb_dLcR::synapse0x1b37240() {
   return (neuron0x1b25150()*-0.0151214);
}

double NNfunction_sb_dLcR::synapse0x1b37280() {
   return (neuron0x1b25490()*0.066214);
}

double NNfunction_sb_dLcR::synapse0x1b372c0() {
   return (neuron0x1b257d0()*0.027313);
}

double NNfunction_sb_dLcR::synapse0x1b37300() {
   return (neuron0x1b25b10()*0.0026791);
}

double NNfunction_sb_dLcR::synapse0x1b37340() {
   return (neuron0x1b25e50()*0.162108);
}

double NNfunction_sb_dLcR::synapse0x1b37380() {
   return (neuron0x1b26190()*0.0898122);
}

double NNfunction_sb_dLcR::synapse0x1b373c0() {
   return (neuron0x1b264d0()*0.166219);
}

double NNfunction_sb_dLcR::synapse0x1b37400() {
   return (neuron0x1b26810()*0.0304869);
}

double NNfunction_sb_dLcR::synapse0x1b37440() {
   return (neuron0x1b26b50()*0.178489);
}

double NNfunction_sb_dLcR::synapse0x1b37480() {
   return (neuron0x1b26e90()*-0.111818);
}

double NNfunction_sb_dLcR::synapse0x1b374c0() {
   return (neuron0x1b271d0()*-0.0150485);
}

double NNfunction_sb_dLcR::synapse0x1b37500() {
   return (neuron0x1b27510()*0.595956);
}

double NNfunction_sb_dLcR::synapse0x1b36f90() {
   return (neuron0x1b27850()*-0.055538);
}

double NNfunction_sb_dLcR::synapse0x1b36fd0() {
   return (neuron0x1b27db0()*0.148547);
}

double NNfunction_sb_dLcR::synapse0x1b37650() {
   return (neuron0x1b27fd0()*0.188995);
}

double NNfunction_sb_dLcR::synapse0x1b37690() {
   return (neuron0x1b28310()*0.0111022);
}

double NNfunction_sb_dLcR::synapse0x1b376d0() {
   return (neuron0x1b28650()*-0.0269709);
}

double NNfunction_sb_dLcR::synapse0x1b37710() {
   return (neuron0x1b28990()*0.0560708);
}

double NNfunction_sb_dLcR::synapse0x1b37750() {
   return (neuron0x1b28cd0()*-0.0703037);
}

double NNfunction_sb_dLcR::synapse0x1b37790() {
   return (neuron0x1b29010()*-0.0223269);
}

double NNfunction_sb_dLcR::synapse0x1b37b10() {
   return (neuron0x1b244e0()*-0.0667102);
}

double NNfunction_sb_dLcR::synapse0x1b37b50() {
   return (neuron0x1b24790()*0.102442);
}

double NNfunction_sb_dLcR::synapse0x1b37b90() {
   return (neuron0x1b24ad0()*-0.944624);
}

double NNfunction_sb_dLcR::synapse0x1b37bd0() {
   return (neuron0x1b24e10()*-0.0718559);
}

double NNfunction_sb_dLcR::synapse0x1b37c10() {
   return (neuron0x1b25150()*-0.0424813);
}

double NNfunction_sb_dLcR::synapse0x1b37c50() {
   return (neuron0x1b25490()*0.0346927);
}

double NNfunction_sb_dLcR::synapse0x1b37c90() {
   return (neuron0x1b257d0()*-0.0431955);
}

double NNfunction_sb_dLcR::synapse0x1b37cd0() {
   return (neuron0x1b25b10()*-0.0408315);
}

double NNfunction_sb_dLcR::synapse0x1b37d10() {
   return (neuron0x1b25e50()*0.0259946);
}

double NNfunction_sb_dLcR::synapse0x1b2fed0() {
   return (neuron0x1b26190()*0.00423655);
}

double NNfunction_sb_dLcR::synapse0x1b2ff10() {
   return (neuron0x1b264d0()*0.0616152);
}

double NNfunction_sb_dLcR::synapse0x1b2ff50() {
   return (neuron0x1b26810()*0.38467);
}

double NNfunction_sb_dLcR::synapse0x1b2ff90() {
   return (neuron0x1b26b50()*0.0525778);
}

double NNfunction_sb_dLcR::synapse0x1b2ffd0() {
   return (neuron0x1b26e90()*-0.0050155);
}

double NNfunction_sb_dLcR::synapse0x1b30010() {
   return (neuron0x1b271d0()*-0.0239419);
}

double NNfunction_sb_dLcR::synapse0x1b30050() {
   return (neuron0x1b27510()*-0.245692);
}

double NNfunction_sb_dLcR::synapse0x1b37960() {
   return (neuron0x1b27850()*-0.00356809);
}

double NNfunction_sb_dLcR::synapse0x1b379a0() {
   return (neuron0x1b27db0()*0.0735189);
}

double NNfunction_sb_dLcR::synapse0x1b301a0() {
   return (neuron0x1b27fd0()*0.0270064);
}

double NNfunction_sb_dLcR::synapse0x1b301e0() {
   return (neuron0x1b28310()*0.0715282);
}

double NNfunction_sb_dLcR::synapse0x1b30220() {
   return (neuron0x1b28650()*-0.00948469);
}

double NNfunction_sb_dLcR::synapse0x1b30260() {
   return (neuron0x1b28990()*0.0195938);
}

double NNfunction_sb_dLcR::synapse0x1b302a0() {
   return (neuron0x1b28cd0()*0.00574137);
}

double NNfunction_sb_dLcR::synapse0x1b302e0() {
   return (neuron0x1b29010()*-0.0360901);
}

double NNfunction_sb_dLcR::synapse0x1b30660() {
   return (neuron0x1b244e0()*0.00945129);
}

double NNfunction_sb_dLcR::synapse0x1b306a0() {
   return (neuron0x1b24790()*-0.0604945);
}

double NNfunction_sb_dLcR::synapse0x1b306e0() {
   return (neuron0x1b24ad0()*-0.121854);
}

double NNfunction_sb_dLcR::synapse0x1b30720() {
   return (neuron0x1b24e10()*-0.288427);
}

double NNfunction_sb_dLcR::synapse0x1b30760() {
   return (neuron0x1b25150()*-0.0674251);
}

double NNfunction_sb_dLcR::synapse0x1b307a0() {
   return (neuron0x1b25490()*0.135742);
}

double NNfunction_sb_dLcR::synapse0x1b307e0() {
   return (neuron0x1b257d0()*0.113019);
}

double NNfunction_sb_dLcR::synapse0x1b30820() {
   return (neuron0x1b25b10()*0.0947179);
}

double NNfunction_sb_dLcR::synapse0x1b30860() {
   return (neuron0x1b25e50()*-0.00197157);
}

double NNfunction_sb_dLcR::synapse0x1b308a0() {
   return (neuron0x1b26190()*0.0683313);
}

double NNfunction_sb_dLcR::synapse0x1b308e0() {
   return (neuron0x1b264d0()*0.0300977);
}

double NNfunction_sb_dLcR::synapse0x1b30920() {
   return (neuron0x1b26810()*-1.15755);
}

double NNfunction_sb_dLcR::synapse0x1b30960() {
   return (neuron0x1b26b50()*-0.0389793);
}

double NNfunction_sb_dLcR::synapse0x1b309a0() {
   return (neuron0x1b26e90()*0.026799);
}

double NNfunction_sb_dLcR::synapse0x1b309e0() {
   return (neuron0x1b271d0()*0.0177868);
}

double NNfunction_sb_dLcR::synapse0x1b30a20() {
   return (neuron0x1b27510()*-0.627512);
}

double NNfunction_sb_dLcR::synapse0x1b304b0() {
   return (neuron0x1b27850()*-0.0956409);
}

double NNfunction_sb_dLcR::synapse0x1b304f0() {
   return (neuron0x1b27db0()*0.0188686);
}

double NNfunction_sb_dLcR::synapse0x1b30b70() {
   return (neuron0x1b27fd0()*0.0362929);
}

double NNfunction_sb_dLcR::synapse0x1b30bb0() {
   return (neuron0x1b28310()*-0.00202968);
}

double NNfunction_sb_dLcR::synapse0x1b30bf0() {
   return (neuron0x1b28650()*-0.0516691);
}

double NNfunction_sb_dLcR::synapse0x1b30c30() {
   return (neuron0x1b28990()*-0.0648813);
}

double NNfunction_sb_dLcR::synapse0x1b30c70() {
   return (neuron0x1b28cd0()*-0.0537305);
}

double NNfunction_sb_dLcR::synapse0x1b30cb0() {
   return (neuron0x1b29010()*-0.0256993);
}

double NNfunction_sb_dLcR::synapse0x1b30e80() {
   return (neuron0x1b244e0()*-0.00960322);
}

double NNfunction_sb_dLcR::synapse0x1b39f10() {
   return (neuron0x1b24790()*-0.0053794);
}

double NNfunction_sb_dLcR::synapse0x1b39f50() {
   return (neuron0x1b24ad0()*0.00295721);
}

double NNfunction_sb_dLcR::synapse0x1b39f90() {
   return (neuron0x1b24e10()*-2.07103);
}

double NNfunction_sb_dLcR::synapse0x1b39fd0() {
   return (neuron0x1b25150()*-0.00476117);
}

double NNfunction_sb_dLcR::synapse0x1b3a010() {
   return (neuron0x1b25490()*-0.00721278);
}

double NNfunction_sb_dLcR::synapse0x1b3a050() {
   return (neuron0x1b257d0()*0.00656814);
}

double NNfunction_sb_dLcR::synapse0x1b3a090() {
   return (neuron0x1b25b10()*0.00581374);
}

double NNfunction_sb_dLcR::synapse0x1b3a0d0() {
   return (neuron0x1b25e50()*0.000809837);
}

double NNfunction_sb_dLcR::synapse0x1b3a110() {
   return (neuron0x1b26190()*0.00565812);
}

double NNfunction_sb_dLcR::synapse0x1b3a150() {
   return (neuron0x1b264d0()*-0.0114226);
}

double NNfunction_sb_dLcR::synapse0x1b3a190() {
   return (neuron0x1b26810()*-0.013472);
}

double NNfunction_sb_dLcR::synapse0x1b3a1d0() {
   return (neuron0x1b26b50()*0.0103279);
}

double NNfunction_sb_dLcR::synapse0x1b3a210() {
   return (neuron0x1b26e90()*-0.00554818);
}

double NNfunction_sb_dLcR::synapse0x1b3a250() {
   return (neuron0x1b271d0()*0.00559616);
}

double NNfunction_sb_dLcR::synapse0x1b3a290() {
   return (neuron0x1b27510()*-0.0572326);
}

double NNfunction_sb_dLcR::synapse0x1b39d60() {
   return (neuron0x1b27850()*0.0183184);
}

double NNfunction_sb_dLcR::synapse0x1b39da0() {
   return (neuron0x1b27db0()*0.00436801);
}

double NNfunction_sb_dLcR::synapse0x1b3a3e0() {
   return (neuron0x1b27fd0()*0.00979414);
}

double NNfunction_sb_dLcR::synapse0x1b3a420() {
   return (neuron0x1b28310()*-0.00386177);
}

double NNfunction_sb_dLcR::synapse0x1b3a460() {
   return (neuron0x1b28650()*-0.00420235);
}

double NNfunction_sb_dLcR::synapse0x1b3a4a0() {
   return (neuron0x1b28990()*-0.00460028);
}

double NNfunction_sb_dLcR::synapse0x1b3a4e0() {
   return (neuron0x1b28cd0()*-0.00254093);
}

double NNfunction_sb_dLcR::synapse0x1b3a520() {
   return (neuron0x1b29010()*-0.00270024);
}

double NNfunction_sb_dLcR::synapse0x1b3a8a0() {
   return (neuron0x1b244e0()*-0.338566);
}

double NNfunction_sb_dLcR::synapse0x1b3a8e0() {
   return (neuron0x1b24790()*0.0437259);
}

double NNfunction_sb_dLcR::synapse0x1b3a920() {
   return (neuron0x1b24ad0()*-0.257904);
}

double NNfunction_sb_dLcR::synapse0x1b3a960() {
   return (neuron0x1b24e10()*0.120085);
}

double NNfunction_sb_dLcR::synapse0x1b3a9a0() {
   return (neuron0x1b25150()*0.158126);
}

double NNfunction_sb_dLcR::synapse0x1b3a9e0() {
   return (neuron0x1b25490()*-0.889254);
}

double NNfunction_sb_dLcR::synapse0x1b3aa20() {
   return (neuron0x1b257d0()*0.0733533);
}

double NNfunction_sb_dLcR::synapse0x1b3aa60() {
   return (neuron0x1b25b10()*-0.106209);
}

double NNfunction_sb_dLcR::synapse0x1b3aaa0() {
   return (neuron0x1b25e50()*0.0358589);
}

double NNfunction_sb_dLcR::synapse0x1b3aae0() {
   return (neuron0x1b26190()*-0.0711078);
}

double NNfunction_sb_dLcR::synapse0x1b3ab20() {
   return (neuron0x1b264d0()*0.0619367);
}

double NNfunction_sb_dLcR::synapse0x1b3ab60() {
   return (neuron0x1b26810()*0.104304);
}

double NNfunction_sb_dLcR::synapse0x1b3aba0() {
   return (neuron0x1b26b50()*-0.456604);
}

double NNfunction_sb_dLcR::synapse0x1b3abe0() {
   return (neuron0x1b26e90()*0.149711);
}

double NNfunction_sb_dLcR::synapse0x1b3ac20() {
   return (neuron0x1b271d0()*-0.683007);
}

double NNfunction_sb_dLcR::synapse0x1b3ac60() {
   return (neuron0x1b27510()*0.242043);
}

double NNfunction_sb_dLcR::synapse0x1b3a6f0() {
   return (neuron0x1b27850()*-0.0493662);
}

double NNfunction_sb_dLcR::synapse0x1b3a730() {
   return (neuron0x1b27db0()*-0.577808);
}

double NNfunction_sb_dLcR::synapse0x1b3adb0() {
   return (neuron0x1b27fd0()*-0.674033);
}

double NNfunction_sb_dLcR::synapse0x1b3adf0() {
   return (neuron0x1b28310()*0.180517);
}

double NNfunction_sb_dLcR::synapse0x1b3ae30() {
   return (neuron0x1b28650()*-0.303815);
}

double NNfunction_sb_dLcR::synapse0x1b3ae70() {
   return (neuron0x1b28990()*-0.157513);
}

double NNfunction_sb_dLcR::synapse0x1b3aeb0() {
   return (neuron0x1b28cd0()*-0.0985653);
}

double NNfunction_sb_dLcR::synapse0x1b3aef0() {
   return (neuron0x1b29010()*-0.111011);
}

double NNfunction_sb_dLcR::synapse0x1b3b270() {
   return (neuron0x1b244e0()*0.126105);
}

double NNfunction_sb_dLcR::synapse0x1b3b2b0() {
   return (neuron0x1b24790()*-0.0823541);
}

double NNfunction_sb_dLcR::synapse0x1b3b2f0() {
   return (neuron0x1b24ad0()*-0.0903864);
}

double NNfunction_sb_dLcR::synapse0x1b3b330() {
   return (neuron0x1b24e10()*-0.142666);
}

double NNfunction_sb_dLcR::synapse0x1b3b370() {
   return (neuron0x1b25150()*0.260316);
}

double NNfunction_sb_dLcR::synapse0x1b3b3b0() {
   return (neuron0x1b25490()*0.289166);
}

double NNfunction_sb_dLcR::synapse0x1b3b3f0() {
   return (neuron0x1b257d0()*0.169325);
}

double NNfunction_sb_dLcR::synapse0x1b3b430() {
   return (neuron0x1b25b10()*-0.47513);
}

double NNfunction_sb_dLcR::synapse0x1b3b470() {
   return (neuron0x1b25e50()*-0.0459406);
}

double NNfunction_sb_dLcR::synapse0x1b3b4b0() {
   return (neuron0x1b26190()*0.248236);
}

double NNfunction_sb_dLcR::synapse0x1b3b4f0() {
   return (neuron0x1b264d0()*0.0310187);
}

double NNfunction_sb_dLcR::synapse0x1b3b530() {
   return (neuron0x1b26810()*-1.23829);
}

double NNfunction_sb_dLcR::synapse0x1b3b570() {
   return (neuron0x1b26b50()*-0.446196);
}

double NNfunction_sb_dLcR::synapse0x1b3b5b0() {
   return (neuron0x1b26e90()*0.0241695);
}

double NNfunction_sb_dLcR::synapse0x1b3b5f0() {
   return (neuron0x1b271d0()*0.455354);
}

double NNfunction_sb_dLcR::synapse0x1b3b630() {
   return (neuron0x1b27510()*-0.309155);
}

double NNfunction_sb_dLcR::synapse0x1b3b0c0() {
   return (neuron0x1b27850()*-0.0520399);
}

double NNfunction_sb_dLcR::synapse0x1b3b100() {
   return (neuron0x1b27db0()*-0.410969);
}

double NNfunction_sb_dLcR::synapse0x1b3b780() {
   return (neuron0x1b27fd0()*-0.404783);
}

double NNfunction_sb_dLcR::synapse0x1b3b7c0() {
   return (neuron0x1b28310()*-0.15083);
}

double NNfunction_sb_dLcR::synapse0x1b3b800() {
   return (neuron0x1b28650()*0.0857653);
}

double NNfunction_sb_dLcR::synapse0x1b3b840() {
   return (neuron0x1b28990()*0.0258315);
}

double NNfunction_sb_dLcR::synapse0x1b3b880() {
   return (neuron0x1b28cd0()*-0.184815);
}

double NNfunction_sb_dLcR::synapse0x1b3b8c0() {
   return (neuron0x1b29010()*0.233941);
}

double NNfunction_sb_dLcR::synapse0x1b3bc40() {
   return (neuron0x1b244e0()*0.335018);
}

double NNfunction_sb_dLcR::synapse0x1b3bc80() {
   return (neuron0x1b24790()*-0.225319);
}

double NNfunction_sb_dLcR::synapse0x1b3bcc0() {
   return (neuron0x1b24ad0()*1.66059);
}

double NNfunction_sb_dLcR::synapse0x1b3bd00() {
   return (neuron0x1b24e10()*0.0318486);
}

double NNfunction_sb_dLcR::synapse0x1b3bd40() {
   return (neuron0x1b25150()*0.255729);
}

double NNfunction_sb_dLcR::synapse0x1b3bd80() {
   return (neuron0x1b25490()*0.116207);
}

double NNfunction_sb_dLcR::synapse0x1b3bdc0() {
   return (neuron0x1b257d0()*0.0658103);
}

double NNfunction_sb_dLcR::synapse0x1b3be00() {
   return (neuron0x1b25b10()*-0.000583024);
}

double NNfunction_sb_dLcR::synapse0x1b3be40() {
   return (neuron0x1b25e50()*-0.324912);
}

double NNfunction_sb_dLcR::synapse0x1b3be80() {
   return (neuron0x1b26190()*0.0951926);
}

double NNfunction_sb_dLcR::synapse0x1b3bec0() {
   return (neuron0x1b264d0()*-0.460207);
}

double NNfunction_sb_dLcR::synapse0x1b3bf00() {
   return (neuron0x1b26810()*0.134228);
}

double NNfunction_sb_dLcR::synapse0x1b3bf40() {
   return (neuron0x1b26b50()*0.034717);
}

double NNfunction_sb_dLcR::synapse0x1b3bf80() {
   return (neuron0x1b26e90()*0.212727);
}

double NNfunction_sb_dLcR::synapse0x1b3bfc0() {
   return (neuron0x1b271d0()*0.651161);
}

double NNfunction_sb_dLcR::synapse0x1b3c000() {
   return (neuron0x1b27510()*-0.110259);
}

double NNfunction_sb_dLcR::synapse0x1b3ba90() {
   return (neuron0x1b27850()*-0.046116);
}

double NNfunction_sb_dLcR::synapse0x1b3bad0() {
   return (neuron0x1b27db0()*0.160909);
}

double NNfunction_sb_dLcR::synapse0x1b3c150() {
   return (neuron0x1b27fd0()*0.211302);
}

double NNfunction_sb_dLcR::synapse0x1b3c190() {
   return (neuron0x1b28310()*-0.228009);
}

double NNfunction_sb_dLcR::synapse0x1b3c1d0() {
   return (neuron0x1b28650()*0.668796);
}

double NNfunction_sb_dLcR::synapse0x1b3c210() {
   return (neuron0x1b28990()*-0.068453);
}

double NNfunction_sb_dLcR::synapse0x1b3c250() {
   return (neuron0x1b28cd0()*-0.199553);
}

double NNfunction_sb_dLcR::synapse0x1b3c290() {
   return (neuron0x1b29010()*-0.120775);
}

double NNfunction_sb_dLcR::synapse0x1b3c610() {
   return (neuron0x1b244e0()*-0.0405459);
}

double NNfunction_sb_dLcR::synapse0x1b3c650() {
   return (neuron0x1b24790()*0.00615984);
}

double NNfunction_sb_dLcR::synapse0x1b3c690() {
   return (neuron0x1b24ad0()*-0.00320535);
}

double NNfunction_sb_dLcR::synapse0x1b3c6d0() {
   return (neuron0x1b24e10()*12.0383);
}

double NNfunction_sb_dLcR::synapse0x1b3c710() {
   return (neuron0x1b25150()*-0.0330391);
}

double NNfunction_sb_dLcR::synapse0x1b3c750() {
   return (neuron0x1b25490()*-0.0359504);
}

double NNfunction_sb_dLcR::synapse0x1b3c790() {
   return (neuron0x1b257d0()*-0.00070722);
}

double NNfunction_sb_dLcR::synapse0x1b3c7d0() {
   return (neuron0x1b25b10()*-0.00431499);
}

double NNfunction_sb_dLcR::synapse0x1b3c810() {
   return (neuron0x1b25e50()*0.00749772);
}

double NNfunction_sb_dLcR::synapse0x1b3c850() {
   return (neuron0x1b26190()*0.0362982);
}

double NNfunction_sb_dLcR::synapse0x1b3c890() {
   return (neuron0x1b264d0()*0.0101302);
}

double NNfunction_sb_dLcR::synapse0x1b3c8d0() {
   return (neuron0x1b26810()*0.102844);
}

double NNfunction_sb_dLcR::synapse0x1b3c910() {
   return (neuron0x1b26b50()*0.00928824);
}

double NNfunction_sb_dLcR::synapse0x1b3c950() {
   return (neuron0x1b26e90()*0.0260749);
}

double NNfunction_sb_dLcR::synapse0x1b3c990() {
   return (neuron0x1b271d0()*0.0246919);
}

double NNfunction_sb_dLcR::synapse0x1b3c9d0() {
   return (neuron0x1b27510()*0.0649412);
}

double NNfunction_sb_dLcR::synapse0x1b3c460() {
   return (neuron0x1b27850()*-0.00917204);
}

double NNfunction_sb_dLcR::synapse0x1b3c4a0() {
   return (neuron0x1b27db0()*0.0130195);
}

double NNfunction_sb_dLcR::synapse0x1b3cb20() {
   return (neuron0x1b27fd0()*-0.00740011);
}

double NNfunction_sb_dLcR::synapse0x1b3cb60() {
   return (neuron0x1b28310()*-0.00922992);
}

double NNfunction_sb_dLcR::synapse0x1b3cba0() {
   return (neuron0x1b28650()*0.000223007);
}

double NNfunction_sb_dLcR::synapse0x1b3cbe0() {
   return (neuron0x1b28990()*-0.0133029);
}

double NNfunction_sb_dLcR::synapse0x1b3cc20() {
   return (neuron0x1b28cd0()*-0.0310797);
}

double NNfunction_sb_dLcR::synapse0x1b3cc60() {
   return (neuron0x1b29010()*0.044184);
}

double NNfunction_sb_dLcR::synapse0x1b3cfe0() {
   return (neuron0x1b244e0()*-0.237317);
}

double NNfunction_sb_dLcR::synapse0x1b3d020() {
   return (neuron0x1b24790()*0.314977);
}

double NNfunction_sb_dLcR::synapse0x1b3d060() {
   return (neuron0x1b24ad0()*0.176894);
}

double NNfunction_sb_dLcR::synapse0x1b3d0a0() {
   return (neuron0x1b24e10()*0.683641);
}

double NNfunction_sb_dLcR::synapse0x1b3d0e0() {
   return (neuron0x1b25150()*-0.0302483);
}

double NNfunction_sb_dLcR::synapse0x1b3d120() {
   return (neuron0x1b25490()*-0.227726);
}

double NNfunction_sb_dLcR::synapse0x1b3d160() {
   return (neuron0x1b257d0()*0.20986);
}

double NNfunction_sb_dLcR::synapse0x1b3d1a0() {
   return (neuron0x1b25b10()*-0.3319);
}

double NNfunction_sb_dLcR::synapse0x1b3d1e0() {
   return (neuron0x1b25e50()*0.752625);
}

double NNfunction_sb_dLcR::synapse0x1b3d220() {
   return (neuron0x1b26190()*-0.143757);
}

double NNfunction_sb_dLcR::synapse0x1b3d260() {
   return (neuron0x1b264d0()*0.233221);
}

double NNfunction_sb_dLcR::synapse0x1b3d2a0() {
   return (neuron0x1b26810()*0.399757);
}

double NNfunction_sb_dLcR::synapse0x1b3d2e0() {
   return (neuron0x1b26b50()*0.350839);
}

double NNfunction_sb_dLcR::synapse0x1b3d320() {
   return (neuron0x1b26e90()*-0.0259917);
}

double NNfunction_sb_dLcR::synapse0x1b3d360() {
   return (neuron0x1b271d0()*0.335312);
}

double NNfunction_sb_dLcR::synapse0x1b3d3a0() {
   return (neuron0x1b27510()*-0.303024);
}

double NNfunction_sb_dLcR::synapse0x1b3ce30() {
   return (neuron0x1b27850()*0.0649673);
}

double NNfunction_sb_dLcR::synapse0x1b3ce70() {
   return (neuron0x1b27db0()*0.352331);
}

double NNfunction_sb_dLcR::synapse0x1b3d4f0() {
   return (neuron0x1b27fd0()*-0.59902);
}

double NNfunction_sb_dLcR::synapse0x1b3d530() {
   return (neuron0x1b28310()*-0.248095);
}

double NNfunction_sb_dLcR::synapse0x1b3d570() {
   return (neuron0x1b28650()*0.433407);
}

double NNfunction_sb_dLcR::synapse0x1b3d5b0() {
   return (neuron0x1b28990()*-0.326318);
}

double NNfunction_sb_dLcR::synapse0x1b3d5f0() {
   return (neuron0x1b28cd0()*-0.0721948);
}

double NNfunction_sb_dLcR::synapse0x1b3d630() {
   return (neuron0x1b29010()*-0.00525071);
}

double NNfunction_sb_dLcR::synapse0x1b3d9b0() {
   return (neuron0x1b244e0()*0.0294009);
}

double NNfunction_sb_dLcR::synapse0x1b3d9f0() {
   return (neuron0x1b24790()*0.0283428);
}

double NNfunction_sb_dLcR::synapse0x1b3da30() {
   return (neuron0x1b24ad0()*-0.0292103);
}

double NNfunction_sb_dLcR::synapse0x1b3da70() {
   return (neuron0x1b24e10()*-0.38091);
}

double NNfunction_sb_dLcR::synapse0x1b3dab0() {
   return (neuron0x1b25150()*-0.0179128);
}

double NNfunction_sb_dLcR::synapse0x1b3daf0() {
   return (neuron0x1b25490()*0.0267464);
}

double NNfunction_sb_dLcR::synapse0x1b3db30() {
   return (neuron0x1b257d0()*-0.0187901);
}

double NNfunction_sb_dLcR::synapse0x1b3db70() {
   return (neuron0x1b25b10()*-0.0385688);
}

double NNfunction_sb_dLcR::synapse0x1b3dbb0() {
   return (neuron0x1b25e50()*0.0391301);
}

double NNfunction_sb_dLcR::synapse0x1b3dbf0() {
   return (neuron0x1b26190()*0.0408475);
}

double NNfunction_sb_dLcR::synapse0x1b3dc30() {
   return (neuron0x1b264d0()*0.0551404);
}

double NNfunction_sb_dLcR::synapse0x1b3dc70() {
   return (neuron0x1b26810()*-0.256857);
}

double NNfunction_sb_dLcR::synapse0x1b3dcb0() {
   return (neuron0x1b26b50()*-0.0406851);
}

double NNfunction_sb_dLcR::synapse0x1b3dcf0() {
   return (neuron0x1b26e90()*0.0130421);
}

double NNfunction_sb_dLcR::synapse0x1b3dd30() {
   return (neuron0x1b271d0()*-0.0374719);
}

double NNfunction_sb_dLcR::synapse0x1b3dd70() {
   return (neuron0x1b27510()*2.41166);
}

double NNfunction_sb_dLcR::synapse0x1b3d800() {
   return (neuron0x1b27850()*0.0419391);
}

double NNfunction_sb_dLcR::synapse0x1b3d840() {
   return (neuron0x1b27db0()*0.00772201);
}

double NNfunction_sb_dLcR::synapse0x1b3dec0() {
   return (neuron0x1b27fd0()*0.0306364);
}

double NNfunction_sb_dLcR::synapse0x1b3df00() {
   return (neuron0x1b28310()*0.0100284);
}

double NNfunction_sb_dLcR::synapse0x1b3df40() {
   return (neuron0x1b28650()*-0.0145545);
}

double NNfunction_sb_dLcR::synapse0x1b3df80() {
   return (neuron0x1b28990()*0.0560379);
}

double NNfunction_sb_dLcR::synapse0x1b3dfc0() {
   return (neuron0x1b28cd0()*0.0341111);
}

double NNfunction_sb_dLcR::synapse0x1b3e000() {
   return (neuron0x1b29010()*0.00108768);
}

double NNfunction_sb_dLcR::synapse0x1b3e380() {
   return (neuron0x1b244e0()*-0.0439281);
}

double NNfunction_sb_dLcR::synapse0x1b3e3c0() {
   return (neuron0x1b24790()*0.0109989);
}

double NNfunction_sb_dLcR::synapse0x1b3e400() {
   return (neuron0x1b24ad0()*-0.217849);
}

double NNfunction_sb_dLcR::synapse0x1b3e440() {
   return (neuron0x1b24e10()*0.0423167);
}

double NNfunction_sb_dLcR::synapse0x1b3e480() {
   return (neuron0x1b25150()*-0.0212004);
}

double NNfunction_sb_dLcR::synapse0x1b3e4c0() {
   return (neuron0x1b25490()*0.0277425);
}

double NNfunction_sb_dLcR::synapse0x1b3e500() {
   return (neuron0x1b257d0()*-0.0637306);
}

double NNfunction_sb_dLcR::synapse0x1b3e540() {
   return (neuron0x1b25b10()*-0.189122);
}

double NNfunction_sb_dLcR::synapse0x1b3e580() {
   return (neuron0x1b25e50()*0.00492606);
}

double NNfunction_sb_dLcR::synapse0x1b3e5c0() {
   return (neuron0x1b26190()*0.0419173);
}

double NNfunction_sb_dLcR::synapse0x1b3e600() {
   return (neuron0x1b264d0()*-0.0278214);
}

double NNfunction_sb_dLcR::synapse0x1b3e640() {
   return (neuron0x1b26810()*0.0636978);
}

double NNfunction_sb_dLcR::synapse0x1b3e680() {
   return (neuron0x1b26b50()*-0.116009);
}

double NNfunction_sb_dLcR::synapse0x1b3e6c0() {
   return (neuron0x1b26e90()*-0.0116382);
}

double NNfunction_sb_dLcR::synapse0x1b3e700() {
   return (neuron0x1b271d0()*0.0587128);
}

double NNfunction_sb_dLcR::synapse0x1b3e740() {
   return (neuron0x1b27510()*0.454121);
}

double NNfunction_sb_dLcR::synapse0x1b3e1d0() {
   return (neuron0x1b27850()*-0.0284343);
}

double NNfunction_sb_dLcR::synapse0x1b3e210() {
   return (neuron0x1b27db0()*-0.0241625);
}

double NNfunction_sb_dLcR::synapse0x1b3e890() {
   return (neuron0x1b27fd0()*-0.0414698);
}

double NNfunction_sb_dLcR::synapse0x1b3e8d0() {
   return (neuron0x1b28310()*-0.0925412);
}

double NNfunction_sb_dLcR::synapse0x1b3e910() {
   return (neuron0x1b28650()*0.0138984);
}

double NNfunction_sb_dLcR::synapse0x1b3e950() {
   return (neuron0x1b28990()*0.0336042);
}

double NNfunction_sb_dLcR::synapse0x1b3e990() {
   return (neuron0x1b28cd0()*-0.106287);
}

double NNfunction_sb_dLcR::synapse0x1b3e9d0() {
   return (neuron0x1b29010()*-0.0281065);
}

double NNfunction_sb_dLcR::synapse0x1b3ed50() {
   return (neuron0x1b244e0()*0.049476);
}

double NNfunction_sb_dLcR::synapse0x1b33320() {
   return (neuron0x1b24790()*0.367257);
}

double NNfunction_sb_dLcR::synapse0x1b33360() {
   return (neuron0x1b24ad0()*0.208668);
}

double NNfunction_sb_dLcR::synapse0x1b333a0() {
   return (neuron0x1b24e10()*-0.765202);
}

double NNfunction_sb_dLcR::synapse0x1b335f0() {
   return (neuron0x1b25150()*-0.0216803);
}

double NNfunction_sb_dLcR::synapse0x1b33630() {
   return (neuron0x1b25490()*0.369439);
}

double NNfunction_sb_dLcR::synapse0x1b33670() {
   return (neuron0x1b257d0()*0.219208);
}

double NNfunction_sb_dLcR::synapse0x1b338c0() {
   return (neuron0x1b25b10()*-0.239793);
}

double NNfunction_sb_dLcR::synapse0x1b33900() {
   return (neuron0x1b25e50()*0.882682);
}

double NNfunction_sb_dLcR::synapse0x1b33b50() {
   return (neuron0x1b26190()*0.507565);
}

double NNfunction_sb_dLcR::synapse0x1b33b90() {
   return (neuron0x1b264d0()*0.305454);
}

double NNfunction_sb_dLcR::synapse0x1b33bd0() {
   return (neuron0x1b26810()*1.06134);
}

double NNfunction_sb_dLcR::synapse0x1b33e20() {
   return (neuron0x1b26b50()*0.140038);
}

double NNfunction_sb_dLcR::synapse0x1b33e60() {
   return (neuron0x1b26e90()*0.257341);
}

double NNfunction_sb_dLcR::synapse0x1b340b0() {
   return (neuron0x1b271d0()*0.0830871);
}

double NNfunction_sb_dLcR::synapse0x1b340f0() {
   return (neuron0x1b27510()*-0.0353694);
}

double NNfunction_sb_dLcR::synapse0x1b3eba0() {
   return (neuron0x1b27850()*0.0409225);
}

double NNfunction_sb_dLcR::synapse0x1b3ebe0() {
   return (neuron0x1b27db0()*0.110373);
}

double NNfunction_sb_dLcR::synapse0x1b34240() {
   return (neuron0x1b27fd0()*0.0245715);
}

double NNfunction_sb_dLcR::synapse0x1b34750() {
   return (neuron0x1b28310()*-0.356606);
}

double NNfunction_sb_dLcR::synapse0x1b34790() {
   return (neuron0x1b28650()*-0.296913);
}

double NNfunction_sb_dLcR::synapse0x1b347d0() {
   return (neuron0x1b28990()*0.530476);
}

double NNfunction_sb_dLcR::synapse0x1b34a20() {
   return (neuron0x1b28cd0()*-0.166277);
}

double NNfunction_sb_dLcR::synapse0x1b34a60() {
   return (neuron0x1b29010()*0.273559);
}

double NNfunction_sb_dLcR::synapse0x1b34310() {
   return (neuron0x1b244e0()*-0.0829427);
}

double NNfunction_sb_dLcR::synapse0x1b34350() {
   return (neuron0x1b24790()*0.138611);
}

double NNfunction_sb_dLcR::synapse0x1b34390() {
   return (neuron0x1b24ad0()*0.173192);
}

double NNfunction_sb_dLcR::synapse0x1b343d0() {
   return (neuron0x1b24e10()*-0.436001);
}

double NNfunction_sb_dLcR::synapse0x1b34d50() {
   return (neuron0x1b25150()*-0.0204638);
}

double NNfunction_sb_dLcR::synapse0x1b410a0() {
   return (neuron0x1b25490()*-0.0943624);
}

double NNfunction_sb_dLcR::synapse0x1b410e0() {
   return (neuron0x1b257d0()*-0.0781141);
}

double NNfunction_sb_dLcR::synapse0x1b41120() {
   return (neuron0x1b25b10()*0.253762);
}

double NNfunction_sb_dLcR::synapse0x1b41160() {
   return (neuron0x1b25e50()*-0.133648);
}

double NNfunction_sb_dLcR::synapse0x1b411a0() {
   return (neuron0x1b26190()*-0.04678);
}

double NNfunction_sb_dLcR::synapse0x1b411e0() {
   return (neuron0x1b264d0()*0.104914);
}

double NNfunction_sb_dLcR::synapse0x1b41220() {
   return (neuron0x1b26810()*-0.205866);
}

double NNfunction_sb_dLcR::synapse0x1b41260() {
   return (neuron0x1b26b50()*0.19901);
}

double NNfunction_sb_dLcR::synapse0x1b412a0() {
   return (neuron0x1b26e90()*-0.0468141);
}

double NNfunction_sb_dLcR::synapse0x1b412e0() {
   return (neuron0x1b271d0()*-0.0724663);
}

double NNfunction_sb_dLcR::synapse0x1b41320() {
   return (neuron0x1b27510()*0.448725);
}

double NNfunction_sb_dLcR::synapse0x1b34c30() {
   return (neuron0x1b27850()*-0.143041);
}

double NNfunction_sb_dLcR::synapse0x1b34c70() {
   return (neuron0x1b27db0()*0.305088);
}

double NNfunction_sb_dLcR::synapse0x1b41470() {
   return (neuron0x1b27fd0()*0.101618);
}

double NNfunction_sb_dLcR::synapse0x1b414b0() {
   return (neuron0x1b28310()*0.215629);
}

double NNfunction_sb_dLcR::synapse0x1b414f0() {
   return (neuron0x1b28650()*0.0305342);
}

double NNfunction_sb_dLcR::synapse0x1b41530() {
   return (neuron0x1b28990()*-0.0782272);
}

double NNfunction_sb_dLcR::synapse0x1b41570() {
   return (neuron0x1b28cd0()*0.0326839);
}

double NNfunction_sb_dLcR::synapse0x1b415b0() {
   return (neuron0x1b29010()*-0.0777765);
}

double NNfunction_sb_dLcR::synapse0x1b41930() {
   return (neuron0x1b244e0()*0.0548953);
}

double NNfunction_sb_dLcR::synapse0x1b41970() {
   return (neuron0x1b24790()*0.645286);
}

double NNfunction_sb_dLcR::synapse0x1b419b0() {
   return (neuron0x1b24ad0()*0.233359);
}

double NNfunction_sb_dLcR::synapse0x1b419f0() {
   return (neuron0x1b24e10()*0.289801);
}

double NNfunction_sb_dLcR::synapse0x1b41a30() {
   return (neuron0x1b25150()*-0.0818003);
}

double NNfunction_sb_dLcR::synapse0x1b41a70() {
   return (neuron0x1b25490()*0.172109);
}

double NNfunction_sb_dLcR::synapse0x1b41ab0() {
   return (neuron0x1b257d0()*-0.00233775);
}

double NNfunction_sb_dLcR::synapse0x1b41af0() {
   return (neuron0x1b25b10()*0.293492);
}

double NNfunction_sb_dLcR::synapse0x1b41b30() {
   return (neuron0x1b25e50()*0.326678);
}

double NNfunction_sb_dLcR::synapse0x1b41b70() {
   return (neuron0x1b26190()*-0.0688559);
}

double NNfunction_sb_dLcR::synapse0x1b41bb0() {
   return (neuron0x1b264d0()*0.207468);
}

double NNfunction_sb_dLcR::synapse0x1b41bf0() {
   return (neuron0x1b26810()*0.123242);
}

double NNfunction_sb_dLcR::synapse0x1b41c30() {
   return (neuron0x1b26b50()*-0.195374);
}

double NNfunction_sb_dLcR::synapse0x1b41c70() {
   return (neuron0x1b26e90()*0.0124106);
}

double NNfunction_sb_dLcR::synapse0x1b41cb0() {
   return (neuron0x1b271d0()*0.0237316);
}

double NNfunction_sb_dLcR::synapse0x1b41cf0() {
   return (neuron0x1b27510()*0.280626);
}

double NNfunction_sb_dLcR::synapse0x1b41780() {
   return (neuron0x1b27850()*0.240536);
}

double NNfunction_sb_dLcR::synapse0x1b417c0() {
   return (neuron0x1b27db0()*-0.159924);
}

double NNfunction_sb_dLcR::synapse0x1b41e40() {
   return (neuron0x1b27fd0()*0.43211);
}

double NNfunction_sb_dLcR::synapse0x1b41e80() {
   return (neuron0x1b28310()*0.0861015);
}

double NNfunction_sb_dLcR::synapse0x1b41ec0() {
   return (neuron0x1b28650()*-0.19247);
}

double NNfunction_sb_dLcR::synapse0x1b41f00() {
   return (neuron0x1b28990()*-0.204155);
}

double NNfunction_sb_dLcR::synapse0x1b41f40() {
   return (neuron0x1b28cd0()*0.0891537);
}

double NNfunction_sb_dLcR::synapse0x1b41f80() {
   return (neuron0x1b29010()*0.0364384);
}

double NNfunction_sb_dLcR::synapse0x1b42300() {
   return (neuron0x1b244e0()*-0.0384393);
}

double NNfunction_sb_dLcR::synapse0x1b42340() {
   return (neuron0x1b24790()*-0.262768);
}

double NNfunction_sb_dLcR::synapse0x1b42380() {
   return (neuron0x1b24ad0()*-0.191673);
}

double NNfunction_sb_dLcR::synapse0x1b423c0() {
   return (neuron0x1b24e10()*0.00110472);
}

double NNfunction_sb_dLcR::synapse0x1b42400() {
   return (neuron0x1b25150()*0.166878);
}

double NNfunction_sb_dLcR::synapse0x1b42440() {
   return (neuron0x1b25490()*-0.164149);
}

double NNfunction_sb_dLcR::synapse0x1b42480() {
   return (neuron0x1b257d0()*-0.698092);
}

double NNfunction_sb_dLcR::synapse0x1b424c0() {
   return (neuron0x1b25b10()*0.229834);
}

double NNfunction_sb_dLcR::synapse0x1b42500() {
   return (neuron0x1b25e50()*-0.102853);
}

double NNfunction_sb_dLcR::synapse0x1b42540() {
   return (neuron0x1b26190()*-0.175666);
}

double NNfunction_sb_dLcR::synapse0x1b42580() {
   return (neuron0x1b264d0()*0.105216);
}

double NNfunction_sb_dLcR::synapse0x1b425c0() {
   return (neuron0x1b26810()*-0.518489);
}

double NNfunction_sb_dLcR::synapse0x1b42600() {
   return (neuron0x1b26b50()*0.168163);
}

double NNfunction_sb_dLcR::synapse0x1b42640() {
   return (neuron0x1b26e90()*0.208295);
}

double NNfunction_sb_dLcR::synapse0x1b42680() {
   return (neuron0x1b271d0()*-0.479291);
}

double NNfunction_sb_dLcR::synapse0x1b426c0() {
   return (neuron0x1b27510()*0.347596);
}

double NNfunction_sb_dLcR::synapse0x1b42150() {
   return (neuron0x1b27850()*-0.227308);
}

double NNfunction_sb_dLcR::synapse0x1b42190() {
   return (neuron0x1b27db0()*-0.236218);
}

double NNfunction_sb_dLcR::synapse0x1b42810() {
   return (neuron0x1b27fd0()*-0.0177358);
}

double NNfunction_sb_dLcR::synapse0x1b42850() {
   return (neuron0x1b28310()*-0.0738257);
}

double NNfunction_sb_dLcR::synapse0x1b42890() {
   return (neuron0x1b28650()*-0.35231);
}

double NNfunction_sb_dLcR::synapse0x1b428d0() {
   return (neuron0x1b28990()*-0.0958397);
}

double NNfunction_sb_dLcR::synapse0x1b42910() {
   return (neuron0x1b28cd0()*0.287693);
}

double NNfunction_sb_dLcR::synapse0x1b42950() {
   return (neuron0x1b29010()*-0.215496);
}

double NNfunction_sb_dLcR::synapse0x1b42cd0() {
   return (neuron0x1b244e0()*-0.0582626);
}

double NNfunction_sb_dLcR::synapse0x1b42d10() {
   return (neuron0x1b24790()*0.0213136);
}

double NNfunction_sb_dLcR::synapse0x1b42d50() {
   return (neuron0x1b24ad0()*-0.00684406);
}

double NNfunction_sb_dLcR::synapse0x1b42d90() {
   return (neuron0x1b24e10()*0.93153);
}

double NNfunction_sb_dLcR::synapse0x1b42dd0() {
   return (neuron0x1b25150()*0.0169231);
}

double NNfunction_sb_dLcR::synapse0x1b42e10() {
   return (neuron0x1b25490()*-0.00641288);
}

double NNfunction_sb_dLcR::synapse0x1b42e50() {
   return (neuron0x1b257d0()*-0.02565);
}

double NNfunction_sb_dLcR::synapse0x1b42e90() {
   return (neuron0x1b25b10()*-0.00869225);
}

double NNfunction_sb_dLcR::synapse0x1b42ed0() {
   return (neuron0x1b25e50()*0.00843745);
}

double NNfunction_sb_dLcR::synapse0x1b42f10() {
   return (neuron0x1b26190()*0.00375231);
}

double NNfunction_sb_dLcR::synapse0x1b42f50() {
   return (neuron0x1b264d0()*-0.020019);
}

double NNfunction_sb_dLcR::synapse0x1b42f90() {
   return (neuron0x1b26810()*0.0379858);
}

double NNfunction_sb_dLcR::synapse0x1b42fd0() {
   return (neuron0x1b26b50()*-0.0178274);
}

double NNfunction_sb_dLcR::synapse0x1b43010() {
   return (neuron0x1b26e90()*0.0139095);
}

double NNfunction_sb_dLcR::synapse0x1b43050() {
   return (neuron0x1b271d0()*0.0525345);
}

double NNfunction_sb_dLcR::synapse0x1b43090() {
   return (neuron0x1b27510()*-0.824851);
}

double NNfunction_sb_dLcR::synapse0x1b42b20() {
   return (neuron0x1b27850()*-0.0458698);
}

double NNfunction_sb_dLcR::synapse0x1b42b60() {
   return (neuron0x1b27db0()*0.00361734);
}

double NNfunction_sb_dLcR::synapse0x1b431e0() {
   return (neuron0x1b27fd0()*-0.0442111);
}

double NNfunction_sb_dLcR::synapse0x1b43220() {
   return (neuron0x1b28310()*-0.00621077);
}

double NNfunction_sb_dLcR::synapse0x1b43260() {
   return (neuron0x1b28650()*0.0169697);
}

double NNfunction_sb_dLcR::synapse0x1b432a0() {
   return (neuron0x1b28990()*-0.00678073);
}

double NNfunction_sb_dLcR::synapse0x1b432e0() {
   return (neuron0x1b28cd0()*-0.0140423);
}

double NNfunction_sb_dLcR::synapse0x1b43320() {
   return (neuron0x1b29010()*-0.0205856);
}

double NNfunction_sb_dLcR::synapse0x1b436a0() {
   return (neuron0x1b244e0()*-0.114328);
}

double NNfunction_sb_dLcR::synapse0x1b436e0() {
   return (neuron0x1b24790()*-0.187003);
}

double NNfunction_sb_dLcR::synapse0x1b43720() {
   return (neuron0x1b24ad0()*-0.415532);
}

double NNfunction_sb_dLcR::synapse0x1b43760() {
   return (neuron0x1b24e10()*-0.944302);
}

double NNfunction_sb_dLcR::synapse0x1b437a0() {
   return (neuron0x1b25150()*-0.256442);
}

double NNfunction_sb_dLcR::synapse0x1b437e0() {
   return (neuron0x1b25490()*0.272704);
}

double NNfunction_sb_dLcR::synapse0x1b43820() {
   return (neuron0x1b257d0()*0.252159);
}

double NNfunction_sb_dLcR::synapse0x1b43860() {
   return (neuron0x1b25b10()*0.0757458);
}

double NNfunction_sb_dLcR::synapse0x1b438a0() {
   return (neuron0x1b25e50()*-0.385349);
}

double NNfunction_sb_dLcR::synapse0x1b438e0() {
   return (neuron0x1b26190()*-0.027055);
}

double NNfunction_sb_dLcR::synapse0x1b43920() {
   return (neuron0x1b264d0()*0.0626153);
}

double NNfunction_sb_dLcR::synapse0x1b43960() {
   return (neuron0x1b26810()*0.0349326);
}

double NNfunction_sb_dLcR::synapse0x1b439a0() {
   return (neuron0x1b26b50()*0.534263);
}

double NNfunction_sb_dLcR::synapse0x1b439e0() {
   return (neuron0x1b26e90()*-0.268053);
}

double NNfunction_sb_dLcR::synapse0x1b43a20() {
   return (neuron0x1b271d0()*0.592682);
}

double NNfunction_sb_dLcR::synapse0x1b43a60() {
   return (neuron0x1b27510()*-0.414774);
}

double NNfunction_sb_dLcR::synapse0x1b434f0() {
   return (neuron0x1b27850()*-0.151314);
}

double NNfunction_sb_dLcR::synapse0x1b43530() {
   return (neuron0x1b27db0()*0.21367);
}

double NNfunction_sb_dLcR::synapse0x1b43bb0() {
   return (neuron0x1b27fd0()*0.895717);
}

double NNfunction_sb_dLcR::synapse0x1b43bf0() {
   return (neuron0x1b28310()*0.151022);
}

double NNfunction_sb_dLcR::synapse0x1b43c30() {
   return (neuron0x1b28650()*0.377729);
}

double NNfunction_sb_dLcR::synapse0x1b43c70() {
   return (neuron0x1b28990()*0.806176);
}

double NNfunction_sb_dLcR::synapse0x1b43cb0() {
   return (neuron0x1b28cd0()*0.389795);
}

double NNfunction_sb_dLcR::synapse0x1b43cf0() {
   return (neuron0x1b29010()*-0.0575324);
}

double NNfunction_sb_dLcR::synapse0x1b44070() {
   return (neuron0x1b244e0()*-0.117692);
}

double NNfunction_sb_dLcR::synapse0x1b440b0() {
   return (neuron0x1b24790()*-0.0930719);
}

double NNfunction_sb_dLcR::synapse0x1b440f0() {
   return (neuron0x1b24ad0()*0.102196);
}

double NNfunction_sb_dLcR::synapse0x1b44130() {
   return (neuron0x1b24e10()*0.0663844);
}

double NNfunction_sb_dLcR::synapse0x1b44170() {
   return (neuron0x1b25150()*0.125846);
}

double NNfunction_sb_dLcR::synapse0x1b441b0() {
   return (neuron0x1b25490()*-0.204224);
}

double NNfunction_sb_dLcR::synapse0x1b441f0() {
   return (neuron0x1b257d0()*0.378961);
}

double NNfunction_sb_dLcR::synapse0x1b44230() {
   return (neuron0x1b25b10()*0.0597419);
}

double NNfunction_sb_dLcR::synapse0x1b44270() {
   return (neuron0x1b25e50()*0.281509);
}

double NNfunction_sb_dLcR::synapse0x1b442b0() {
   return (neuron0x1b26190()*0.15236);
}

double NNfunction_sb_dLcR::synapse0x1b442f0() {
   return (neuron0x1b264d0()*-0.0894215);
}

double NNfunction_sb_dLcR::synapse0x1b44330() {
   return (neuron0x1b26810()*-0.105754);
}

double NNfunction_sb_dLcR::synapse0x1b44370() {
   return (neuron0x1b26b50()*-0.330858);
}

double NNfunction_sb_dLcR::synapse0x1b443b0() {
   return (neuron0x1b26e90()*-0.00428973);
}

double NNfunction_sb_dLcR::synapse0x1b443f0() {
   return (neuron0x1b271d0()*0.355699);
}

double NNfunction_sb_dLcR::synapse0x1b44430() {
   return (neuron0x1b27510()*0.0504972);
}

double NNfunction_sb_dLcR::synapse0x1b43ec0() {
   return (neuron0x1b27850()*0.100874);
}

double NNfunction_sb_dLcR::synapse0x1b43f00() {
   return (neuron0x1b27db0()*-0.130377);
}

double NNfunction_sb_dLcR::synapse0x1b44580() {
   return (neuron0x1b27fd0()*-0.667027);
}

double NNfunction_sb_dLcR::synapse0x1b445c0() {
   return (neuron0x1b28310()*0.322549);
}

double NNfunction_sb_dLcR::synapse0x1b44600() {
   return (neuron0x1b28650()*-0.26691);
}

double NNfunction_sb_dLcR::synapse0x1b44640() {
   return (neuron0x1b28990()*0.187649);
}

double NNfunction_sb_dLcR::synapse0x1b44680() {
   return (neuron0x1b28cd0()*0.126936);
}

double NNfunction_sb_dLcR::synapse0x1b446c0() {
   return (neuron0x1b29010()*0.0730029);
}

double NNfunction_sb_dLcR::synapse0x1b44a40() {
   return (neuron0x1b244e0()*-0.768892);
}

double NNfunction_sb_dLcR::synapse0x1b44a80() {
   return (neuron0x1b24790()*-0.201224);
}

double NNfunction_sb_dLcR::synapse0x1b44ac0() {
   return (neuron0x1b24ad0()*0.436279);
}

double NNfunction_sb_dLcR::synapse0x1b44b00() {
   return (neuron0x1b24e10()*0.12522);
}

double NNfunction_sb_dLcR::synapse0x1b44b40() {
   return (neuron0x1b25150()*-0.413737);
}

double NNfunction_sb_dLcR::synapse0x1b44b80() {
   return (neuron0x1b25490()*-0.709069);
}

double NNfunction_sb_dLcR::synapse0x1b44bc0() {
   return (neuron0x1b257d0()*-0.35396);
}

double NNfunction_sb_dLcR::synapse0x1b44c00() {
   return (neuron0x1b25b10()*0.767609);
}

double NNfunction_sb_dLcR::synapse0x1b44c40() {
   return (neuron0x1b25e50()*0.345654);
}

double NNfunction_sb_dLcR::synapse0x1b44c80() {
   return (neuron0x1b26190()*-0.704742);
}

double NNfunction_sb_dLcR::synapse0x1b44cc0() {
   return (neuron0x1b264d0()*0.0577236);
}

double NNfunction_sb_dLcR::synapse0x1b44d00() {
   return (neuron0x1b26810()*0.259616);
}

double NNfunction_sb_dLcR::synapse0x1b44d40() {
   return (neuron0x1b26b50()*0.135266);
}

double NNfunction_sb_dLcR::synapse0x1b44d80() {
   return (neuron0x1b26e90()*-0.15129);
}

double NNfunction_sb_dLcR::synapse0x1b44dc0() {
   return (neuron0x1b271d0()*0.497774);
}

double NNfunction_sb_dLcR::synapse0x1b44e00() {
   return (neuron0x1b27510()*-0.0725123);
}

double NNfunction_sb_dLcR::synapse0x1b44890() {
   return (neuron0x1b27850()*-0.266153);
}

double NNfunction_sb_dLcR::synapse0x1b448d0() {
   return (neuron0x1b27db0()*0.172084);
}

double NNfunction_sb_dLcR::synapse0x1b44f50() {
   return (neuron0x1b27fd0()*0.422266);
}

double NNfunction_sb_dLcR::synapse0x1b44f90() {
   return (neuron0x1b28310()*0.326795);
}

double NNfunction_sb_dLcR::synapse0x1b44fd0() {
   return (neuron0x1b28650()*-0.124933);
}

double NNfunction_sb_dLcR::synapse0x1b45010() {
   return (neuron0x1b28990()*-0.297055);
}

double NNfunction_sb_dLcR::synapse0x1b45050() {
   return (neuron0x1b28cd0()*0.607043);
}

double NNfunction_sb_dLcR::synapse0x1b45090() {
   return (neuron0x1b29010()*-0.0945961);
}

double NNfunction_sb_dLcR::synapse0x1b45410() {
   return (neuron0x1b244e0()*-0.0214872);
}

double NNfunction_sb_dLcR::synapse0x1b45450() {
   return (neuron0x1b24790()*0.0133492);
}

double NNfunction_sb_dLcR::synapse0x1b45490() {
   return (neuron0x1b24ad0()*0.0335124);
}

double NNfunction_sb_dLcR::synapse0x1b454d0() {
   return (neuron0x1b24e10()*6.86026);
}

double NNfunction_sb_dLcR::synapse0x1b45510() {
   return (neuron0x1b25150()*-0.0239564);
}

double NNfunction_sb_dLcR::synapse0x1b45550() {
   return (neuron0x1b25490()*0.00152927);
}

double NNfunction_sb_dLcR::synapse0x1b45590() {
   return (neuron0x1b257d0()*-0.0185362);
}

double NNfunction_sb_dLcR::synapse0x1b455d0() {
   return (neuron0x1b25b10()*-0.0302536);
}

double NNfunction_sb_dLcR::synapse0x1b45610() {
   return (neuron0x1b25e50()*0.0290778);
}

double NNfunction_sb_dLcR::synapse0x1b45650() {
   return (neuron0x1b26190()*0.0211519);
}

double NNfunction_sb_dLcR::synapse0x1b45690() {
   return (neuron0x1b264d0()*0.00323215);
}

double NNfunction_sb_dLcR::synapse0x1b456d0() {
   return (neuron0x1b26810()*-0.493906);
}

double NNfunction_sb_dLcR::synapse0x1b45710() {
   return (neuron0x1b26b50()*0.0104734);
}

double NNfunction_sb_dLcR::synapse0x1b45750() {
   return (neuron0x1b26e90()*0.00880986);
}

double NNfunction_sb_dLcR::synapse0x1b45790() {
   return (neuron0x1b271d0()*0.0181917);
}

double NNfunction_sb_dLcR::synapse0x1b457d0() {
   return (neuron0x1b27510()*-1.14912);
}

double NNfunction_sb_dLcR::synapse0x1b45260() {
   return (neuron0x1b27850()*0.0235855);
}

double NNfunction_sb_dLcR::synapse0x1b452a0() {
   return (neuron0x1b27db0()*0.0534727);
}

double NNfunction_sb_dLcR::synapse0x1b45920() {
   return (neuron0x1b27fd0()*0.0121153);
}

double NNfunction_sb_dLcR::synapse0x1b45960() {
   return (neuron0x1b28310()*0.00598707);
}

double NNfunction_sb_dLcR::synapse0x1b459a0() {
   return (neuron0x1b28650()*0.000653325);
}

double NNfunction_sb_dLcR::synapse0x1b459e0() {
   return (neuron0x1b28990()*0.0231176);
}

double NNfunction_sb_dLcR::synapse0x1b45a20() {
   return (neuron0x1b28cd0()*0.00245789);
}

double NNfunction_sb_dLcR::synapse0x1b45a60() {
   return (neuron0x1b29010()*0.0529684);
}

double NNfunction_sb_dLcR::synapse0x1b2e510() {
   return (neuron0x1b244e0()*0.0696639);
}

double NNfunction_sb_dLcR::synapse0x1b2e550() {
   return (neuron0x1b24790()*-0.0456854);
}

double NNfunction_sb_dLcR::synapse0x1b2e590() {
   return (neuron0x1b24ad0()*-0.114336);
}

double NNfunction_sb_dLcR::synapse0x1b2e5d0() {
   return (neuron0x1b24e10()*0.262602);
}

double NNfunction_sb_dLcR::synapse0x1b2e610() {
   return (neuron0x1b25150()*-0.407281);
}

double NNfunction_sb_dLcR::synapse0x1b2e650() {
   return (neuron0x1b25490()*-0.123225);
}

double NNfunction_sb_dLcR::synapse0x1b2e690() {
   return (neuron0x1b257d0()*0.360798);
}

double NNfunction_sb_dLcR::synapse0x1b2e6d0() {
   return (neuron0x1b25b10()*-0.44837);
}

double NNfunction_sb_dLcR::synapse0x1b461f0() {
   return (neuron0x1b25e50()*-0.406524);
}

double NNfunction_sb_dLcR::synapse0x1b46230() {
   return (neuron0x1b26190()*-0.0427877);
}

double NNfunction_sb_dLcR::synapse0x1b46270() {
   return (neuron0x1b264d0()*-0.279965);
}

double NNfunction_sb_dLcR::synapse0x1b462b0() {
   return (neuron0x1b26810()*0.72548);
}

double NNfunction_sb_dLcR::synapse0x1b462f0() {
   return (neuron0x1b26b50()*0.0796928);
}

double NNfunction_sb_dLcR::synapse0x1b46330() {
   return (neuron0x1b26e90()*-0.0738312);
}

double NNfunction_sb_dLcR::synapse0x1b46370() {
   return (neuron0x1b271d0()*0.228891);
}

double NNfunction_sb_dLcR::synapse0x1b463b0() {
   return (neuron0x1b27510()*0.515513);
}

double NNfunction_sb_dLcR::synapse0x1b45c30() {
   return (neuron0x1b27850()*-0.155708);
}

double NNfunction_sb_dLcR::synapse0x1b45c70() {
   return (neuron0x1b27db0()*-0.00834371);
}

double NNfunction_sb_dLcR::synapse0x1b46500() {
   return (neuron0x1b27fd0()*-0.0405287);
}

double NNfunction_sb_dLcR::synapse0x1b46540() {
   return (neuron0x1b28310()*-0.159667);
}

double NNfunction_sb_dLcR::synapse0x1b46580() {
   return (neuron0x1b28650()*0.339821);
}

double NNfunction_sb_dLcR::synapse0x1b465c0() {
   return (neuron0x1b28990()*0.2982);
}

double NNfunction_sb_dLcR::synapse0x1b46600() {
   return (neuron0x1b28cd0()*0.0911431);
}

double NNfunction_sb_dLcR::synapse0x1b46640() {
   return (neuron0x1b29010()*-0.0915393);
}

double NNfunction_sb_dLcR::synapse0x1b469c0() {
   return (neuron0x1b244e0()*-0.388421);
}

double NNfunction_sb_dLcR::synapse0x1b46a00() {
   return (neuron0x1b24790()*0.22743);
}

double NNfunction_sb_dLcR::synapse0x1b46a40() {
   return (neuron0x1b24ad0()*-0.143234);
}

double NNfunction_sb_dLcR::synapse0x1b46a80() {
   return (neuron0x1b24e10()*-0.514024);
}

double NNfunction_sb_dLcR::synapse0x1b46ac0() {
   return (neuron0x1b25150()*0.466066);
}

double NNfunction_sb_dLcR::synapse0x1b46b00() {
   return (neuron0x1b25490()*-0.286646);
}

double NNfunction_sb_dLcR::synapse0x1b46b40() {
   return (neuron0x1b257d0()*0.162309);
}

double NNfunction_sb_dLcR::synapse0x1b46b80() {
   return (neuron0x1b25b10()*-0.29397);
}

double NNfunction_sb_dLcR::synapse0x1b46bc0() {
   return (neuron0x1b25e50()*-0.0700071);
}

double NNfunction_sb_dLcR::synapse0x1b46c00() {
   return (neuron0x1b26190()*0.187834);
}

double NNfunction_sb_dLcR::synapse0x1b46c40() {
   return (neuron0x1b264d0()*0.555178);
}

double NNfunction_sb_dLcR::synapse0x1b46c80() {
   return (neuron0x1b26810()*0.00163732);
}

double NNfunction_sb_dLcR::synapse0x1b46cc0() {
   return (neuron0x1b26b50()*-0.876611);
}

double NNfunction_sb_dLcR::synapse0x1b46d00() {
   return (neuron0x1b26e90()*0.214975);
}

double NNfunction_sb_dLcR::synapse0x1b46d40() {
   return (neuron0x1b271d0()*0.066643);
}

double NNfunction_sb_dLcR::synapse0x1b46d80() {
   return (neuron0x1b27510()*-0.158306);
}

double NNfunction_sb_dLcR::synapse0x1b46810() {
   return (neuron0x1b27850()*0.134719);
}

double NNfunction_sb_dLcR::synapse0x1b46850() {
   return (neuron0x1b27db0()*-0.670969);
}

double NNfunction_sb_dLcR::synapse0x1b46ed0() {
   return (neuron0x1b27fd0()*-0.426662);
}

double NNfunction_sb_dLcR::synapse0x1b46f10() {
   return (neuron0x1b28310()*0.467985);
}

double NNfunction_sb_dLcR::synapse0x1b46f50() {
   return (neuron0x1b28650()*-0.389245);
}

double NNfunction_sb_dLcR::synapse0x1b46f90() {
   return (neuron0x1b28990()*0.511626);
}

double NNfunction_sb_dLcR::synapse0x1b46fd0() {
   return (neuron0x1b28cd0()*-0.688231);
}

double NNfunction_sb_dLcR::synapse0x1b47010() {
   return (neuron0x1b29010()*0.192433);
}

double NNfunction_sb_dLcR::synapse0x1b47390() {
   return (neuron0x1b244e0()*-0.134391);
}

double NNfunction_sb_dLcR::synapse0x1b473d0() {
   return (neuron0x1b24790()*0.20164);
}

double NNfunction_sb_dLcR::synapse0x1b47410() {
   return (neuron0x1b24ad0()*-0.465778);
}

double NNfunction_sb_dLcR::synapse0x1b47450() {
   return (neuron0x1b24e10()*-0.217034);
}

double NNfunction_sb_dLcR::synapse0x1b47490() {
   return (neuron0x1b25150()*0.496343);
}

double NNfunction_sb_dLcR::synapse0x1b474d0() {
   return (neuron0x1b25490()*-0.280264);
}

double NNfunction_sb_dLcR::synapse0x1b47510() {
   return (neuron0x1b257d0()*0.547616);
}

double NNfunction_sb_dLcR::synapse0x1b47550() {
   return (neuron0x1b25b10()*0.118929);
}

double NNfunction_sb_dLcR::synapse0x1b47590() {
   return (neuron0x1b25e50()*0.13492);
}

double NNfunction_sb_dLcR::synapse0x1b475d0() {
   return (neuron0x1b26190()*-0.398187);
}

double NNfunction_sb_dLcR::synapse0x1b47610() {
   return (neuron0x1b264d0()*-0.315515);
}

double NNfunction_sb_dLcR::synapse0x1b47650() {
   return (neuron0x1b26810()*-0.670171);
}

double NNfunction_sb_dLcR::synapse0x1b47690() {
   return (neuron0x1b26b50()*0.780613);
}

double NNfunction_sb_dLcR::synapse0x1b476d0() {
   return (neuron0x1b26e90()*-0.172945);
}

double NNfunction_sb_dLcR::synapse0x1b47710() {
   return (neuron0x1b271d0()*0.0526951);
}

double NNfunction_sb_dLcR::synapse0x1b47750() {
   return (neuron0x1b27510()*-0.0238865);
}

double NNfunction_sb_dLcR::synapse0x1b471e0() {
   return (neuron0x1b27850()*-0.35086);
}

double NNfunction_sb_dLcR::synapse0x1b47220() {
   return (neuron0x1b27db0()*-0.422813);
}

double NNfunction_sb_dLcR::synapse0x1b37d50() {
   return (neuron0x1b27fd0()*0.0486097);
}

double NNfunction_sb_dLcR::synapse0x1b37d90() {
   return (neuron0x1b28310()*-0.126903);
}

double NNfunction_sb_dLcR::synapse0x1b37dd0() {
   return (neuron0x1b28650()*0.214824);
}

double NNfunction_sb_dLcR::synapse0x1b37e10() {
   return (neuron0x1b28990()*0.136776);
}

double NNfunction_sb_dLcR::synapse0x1b37e50() {
   return (neuron0x1b28cd0()*-0.267617);
}

double NNfunction_sb_dLcR::synapse0x1b37e90() {
   return (neuron0x1b29010()*-0.418774);
}

double NNfunction_sb_dLcR::synapse0x1b38210() {
   return (neuron0x1b244e0()*-0.0907595);
}

double NNfunction_sb_dLcR::synapse0x1b38250() {
   return (neuron0x1b24790()*-0.130172);
}

double NNfunction_sb_dLcR::synapse0x1b38290() {
   return (neuron0x1b24ad0()*0.27081);
}

double NNfunction_sb_dLcR::synapse0x1b382d0() {
   return (neuron0x1b24e10()*-0.647073);
}

double NNfunction_sb_dLcR::synapse0x1b38310() {
   return (neuron0x1b25150()*-0.00641174);
}

double NNfunction_sb_dLcR::synapse0x1b38350() {
   return (neuron0x1b25490()*0.0917787);
}

double NNfunction_sb_dLcR::synapse0x1b38390() {
   return (neuron0x1b257d0()*0.204473);
}

double NNfunction_sb_dLcR::synapse0x1b383d0() {
   return (neuron0x1b25b10()*-0.68344);
}

double NNfunction_sb_dLcR::synapse0x1b38410() {
   return (neuron0x1b25e50()*-0.0534676);
}

double NNfunction_sb_dLcR::synapse0x1b38450() {
   return (neuron0x1b26190()*-0.00861086);
}

double NNfunction_sb_dLcR::synapse0x1b38490() {
   return (neuron0x1b264d0()*-0.174898);
}

double NNfunction_sb_dLcR::synapse0x1b384d0() {
   return (neuron0x1b26810()*-0.395445);
}

double NNfunction_sb_dLcR::synapse0x1b38510() {
   return (neuron0x1b26b50()*-0.0800789);
}

double NNfunction_sb_dLcR::synapse0x1b38550() {
   return (neuron0x1b26e90()*0.0168876);
}

double NNfunction_sb_dLcR::synapse0x1b38590() {
   return (neuron0x1b271d0()*0.251621);
}

double NNfunction_sb_dLcR::synapse0x1b385d0() {
   return (neuron0x1b27510()*0.569318);
}

double NNfunction_sb_dLcR::synapse0x1b38060() {
   return (neuron0x1b27850()*0.218315);
}

double NNfunction_sb_dLcR::synapse0x1b380a0() {
   return (neuron0x1b27db0()*-0.0139917);
}

double NNfunction_sb_dLcR::synapse0x1b38720() {
   return (neuron0x1b27fd0()*0.0775434);
}

double NNfunction_sb_dLcR::synapse0x1b38760() {
   return (neuron0x1b28310()*0.0194124);
}

double NNfunction_sb_dLcR::synapse0x1b387a0() {
   return (neuron0x1b28650()*0.0291846);
}

double NNfunction_sb_dLcR::synapse0x1b387e0() {
   return (neuron0x1b28990()*0.0563869);
}

double NNfunction_sb_dLcR::synapse0x1b38820() {
   return (neuron0x1b28cd0()*0.0984791);
}

double NNfunction_sb_dLcR::synapse0x1b38860() {
   return (neuron0x1b29010()*-0.0400909);
}

double NNfunction_sb_dLcR::synapse0x1b38be0() {
   return (neuron0x1b244e0()*0.0685487);
}

double NNfunction_sb_dLcR::synapse0x1b38c20() {
   return (neuron0x1b24790()*-0.139945);
}

double NNfunction_sb_dLcR::synapse0x1b38c60() {
   return (neuron0x1b24ad0()*0.148282);
}

double NNfunction_sb_dLcR::synapse0x1b38ca0() {
   return (neuron0x1b24e10()*0.0251151);
}

double NNfunction_sb_dLcR::synapse0x1b38ce0() {
   return (neuron0x1b25150()*0.0348102);
}

double NNfunction_sb_dLcR::synapse0x1b38d20() {
   return (neuron0x1b25490()*-0.00172269);
}

double NNfunction_sb_dLcR::synapse0x1b38d60() {
   return (neuron0x1b257d0()*-0.010425);
}

double NNfunction_sb_dLcR::synapse0x1b38da0() {
   return (neuron0x1b25b10()*-0.0154343);
}

double NNfunction_sb_dLcR::synapse0x1b38de0() {
   return (neuron0x1b25e50()*-0.0116538);
}

double NNfunction_sb_dLcR::synapse0x1b38e20() {
   return (neuron0x1b26190()*-0.006263);
}

double NNfunction_sb_dLcR::synapse0x1b38e60() {
   return (neuron0x1b264d0()*-0.022081);
}

double NNfunction_sb_dLcR::synapse0x1b38ea0() {
   return (neuron0x1b26810()*-0.239268);
}

double NNfunction_sb_dLcR::synapse0x1b38ee0() {
   return (neuron0x1b26b50()*-0.0685972);
}

double NNfunction_sb_dLcR::synapse0x1b38f20() {
   return (neuron0x1b26e90()*-0.105706);
}

double NNfunction_sb_dLcR::synapse0x1b38f60() {
   return (neuron0x1b271d0()*0.0282101);
}

double NNfunction_sb_dLcR::synapse0x1b38fa0() {
   return (neuron0x1b27510()*0.177574);
}

double NNfunction_sb_dLcR::synapse0x1b38a30() {
   return (neuron0x1b27850()*0.0566246);
}

double NNfunction_sb_dLcR::synapse0x1b38a70() {
   return (neuron0x1b27db0()*-0.00338543);
}

double NNfunction_sb_dLcR::synapse0x1b390f0() {
   return (neuron0x1b27fd0()*0.00977308);
}

double NNfunction_sb_dLcR::synapse0x1b39130() {
   return (neuron0x1b28310()*-0.0716997);
}

double NNfunction_sb_dLcR::synapse0x1b39170() {
   return (neuron0x1b28650()*0.0245113);
}

double NNfunction_sb_dLcR::synapse0x1b391b0() {
   return (neuron0x1b28990()*0.0111167);
}

double NNfunction_sb_dLcR::synapse0x1b391f0() {
   return (neuron0x1b28cd0()*0.012528);
}

double NNfunction_sb_dLcR::synapse0x1b39230() {
   return (neuron0x1b29010()*-0.0127885);
}

double NNfunction_sb_dLcR::synapse0x1b395b0() {
   return (neuron0x1b244e0()*-0.430657);
}

double NNfunction_sb_dLcR::synapse0x1b395f0() {
   return (neuron0x1b24790()*-0.404443);
}

double NNfunction_sb_dLcR::synapse0x1b39630() {
   return (neuron0x1b24ad0()*-0.518364);
}

double NNfunction_sb_dLcR::synapse0x1b39670() {
   return (neuron0x1b24e10()*-1.2419);
}

double NNfunction_sb_dLcR::synapse0x1b396b0() {
   return (neuron0x1b25150()*0.350455);
}

double NNfunction_sb_dLcR::synapse0x1b396f0() {
   return (neuron0x1b25490()*0.15702);
}

double NNfunction_sb_dLcR::synapse0x1b39730() {
   return (neuron0x1b257d0()*0.0825675);
}

double NNfunction_sb_dLcR::synapse0x1b39770() {
   return (neuron0x1b25b10()*0.576053);
}

double NNfunction_sb_dLcR::synapse0x1b397b0() {
   return (neuron0x1b25e50()*0.681277);
}

double NNfunction_sb_dLcR::synapse0x1b397f0() {
   return (neuron0x1b26190()*0.100028);
}

double NNfunction_sb_dLcR::synapse0x1b39830() {
   return (neuron0x1b264d0()*0.0758872);
}

double NNfunction_sb_dLcR::synapse0x1b39870() {
   return (neuron0x1b26810()*-1.20071);
}

double NNfunction_sb_dLcR::synapse0x1b398b0() {
   return (neuron0x1b26b50()*-0.0510669);
}

double NNfunction_sb_dLcR::synapse0x1b398f0() {
   return (neuron0x1b26e90()*0.0711128);
}

double NNfunction_sb_dLcR::synapse0x1b39930() {
   return (neuron0x1b271d0()*0.111367);
}

double NNfunction_sb_dLcR::synapse0x1b39970() {
   return (neuron0x1b27510()*-0.171282);
}

double NNfunction_sb_dLcR::synapse0x1b39400() {
   return (neuron0x1b27850()*-0.220588);
}

double NNfunction_sb_dLcR::synapse0x1b39440() {
   return (neuron0x1b27db0()*-0.275037);
}

double NNfunction_sb_dLcR::synapse0x1b39ac0() {
   return (neuron0x1b27fd0()*0.0502583);
}

double NNfunction_sb_dLcR::synapse0x1b39b00() {
   return (neuron0x1b28310()*0.326502);
}

double NNfunction_sb_dLcR::synapse0x1b39b40() {
   return (neuron0x1b28650()*-0.133724);
}

double NNfunction_sb_dLcR::synapse0x1b39b80() {
   return (neuron0x1b28990()*-0.154044);
}

double NNfunction_sb_dLcR::synapse0x1b39bc0() {
   return (neuron0x1b28cd0()*-0.340704);
}

double NNfunction_sb_dLcR::synapse0x1b39c00() {
   return (neuron0x1b29010()*-0.172962);
}

double NNfunction_sb_dLcR::synapse0x1b4bad0() {
   return (neuron0x1b244e0()*-0.101572);
}

double NNfunction_sb_dLcR::synapse0x1b4bb10() {
   return (neuron0x1b24790()*0.171486);
}

double NNfunction_sb_dLcR::synapse0x1b4bb50() {
   return (neuron0x1b24ad0()*-0.0464948);
}

double NNfunction_sb_dLcR::synapse0x1b4bb90() {
   return (neuron0x1b24e10()*0.123023);
}

double NNfunction_sb_dLcR::synapse0x1b4bbd0() {
   return (neuron0x1b25150()*-0.0994086);
}

double NNfunction_sb_dLcR::synapse0x1b4bc10() {
   return (neuron0x1b25490()*-0.297788);
}

double NNfunction_sb_dLcR::synapse0x1b4bc50() {
   return (neuron0x1b257d0()*0.16065);
}

double NNfunction_sb_dLcR::synapse0x1b4bc90() {
   return (neuron0x1b25b10()*0.0420918);
}

double NNfunction_sb_dLcR::synapse0x1b4bcd0() {
   return (neuron0x1b25e50()*0.188779);
}

double NNfunction_sb_dLcR::synapse0x1b4bd10() {
   return (neuron0x1b26190()*-0.0457205);
}

double NNfunction_sb_dLcR::synapse0x1b4bd50() {
   return (neuron0x1b264d0()*-0.475429);
}

double NNfunction_sb_dLcR::synapse0x1b4bd90() {
   return (neuron0x1b26810()*0.471134);
}

double NNfunction_sb_dLcR::synapse0x1b4bdd0() {
   return (neuron0x1b26b50()*0.410001);
}

double NNfunction_sb_dLcR::synapse0x1b4be10() {
   return (neuron0x1b26e90()*0.0742257);
}

double NNfunction_sb_dLcR::synapse0x1b4be50() {
   return (neuron0x1b271d0()*-0.345743);
}

double NNfunction_sb_dLcR::synapse0x1b4be90() {
   return (neuron0x1b27510()*0.326812);
}

double NNfunction_sb_dLcR::synapse0x1b39c40() {
   return (neuron0x1b27850()*0.272567);
}

double NNfunction_sb_dLcR::synapse0x1b39c80() {
   return (neuron0x1b27db0()*0.364748);
}

double NNfunction_sb_dLcR::synapse0x1b4bfe0() {
   return (neuron0x1b27fd0()*0.0809078);
}

double NNfunction_sb_dLcR::synapse0x1b4c020() {
   return (neuron0x1b28310()*0.0748931);
}

double NNfunction_sb_dLcR::synapse0x1b4c060() {
   return (neuron0x1b28650()*-0.0239297);
}

double NNfunction_sb_dLcR::synapse0x1b4c0a0() {
   return (neuron0x1b28990()*0.199731);
}

double NNfunction_sb_dLcR::synapse0x1b4c0e0() {
   return (neuron0x1b28cd0()*0.39416);
}

double NNfunction_sb_dLcR::synapse0x1b4c120() {
   return (neuron0x1b29010()*0.133639);
}

double NNfunction_sb_dLcR::synapse0x1b4c4a0() {
   return (neuron0x1b244e0()*0.144111);
}

double NNfunction_sb_dLcR::synapse0x1b4c4e0() {
   return (neuron0x1b24790()*-0.126063);
}

double NNfunction_sb_dLcR::synapse0x1b4c520() {
   return (neuron0x1b24ad0()*0.0583458);
}

double NNfunction_sb_dLcR::synapse0x1b4c560() {
   return (neuron0x1b24e10()*-0.55361);
}

double NNfunction_sb_dLcR::synapse0x1b4c5a0() {
   return (neuron0x1b25150()*-0.0706707);
}

double NNfunction_sb_dLcR::synapse0x1b4c5e0() {
   return (neuron0x1b25490()*-0.177733);
}

double NNfunction_sb_dLcR::synapse0x1b4c620() {
   return (neuron0x1b257d0()*0.277985);
}

double NNfunction_sb_dLcR::synapse0x1b4c660() {
   return (neuron0x1b25b10()*-0.00762396);
}

double NNfunction_sb_dLcR::synapse0x1b4c6a0() {
   return (neuron0x1b25e50()*-0.0735686);
}

double NNfunction_sb_dLcR::synapse0x1b4c6e0() {
   return (neuron0x1b26190()*-0.247228);
}

double NNfunction_sb_dLcR::synapse0x1b4c720() {
   return (neuron0x1b264d0()*0.0225268);
}

double NNfunction_sb_dLcR::synapse0x1b4c760() {
   return (neuron0x1b26810()*-0.0112144);
}

double NNfunction_sb_dLcR::synapse0x1b4c7a0() {
   return (neuron0x1b26b50()*0.214504);
}

double NNfunction_sb_dLcR::synapse0x1b4c7e0() {
   return (neuron0x1b26e90()*0.00495858);
}

double NNfunction_sb_dLcR::synapse0x1b4c820() {
   return (neuron0x1b271d0()*-0.0733713);
}

double NNfunction_sb_dLcR::synapse0x1b4c860() {
   return (neuron0x1b27510()*0.557741);
}

double NNfunction_sb_dLcR::synapse0x1b4c2f0() {
   return (neuron0x1b27850()*0.0279941);
}

double NNfunction_sb_dLcR::synapse0x1b4c330() {
   return (neuron0x1b27db0()*-0.748604);
}

double NNfunction_sb_dLcR::synapse0x1b4c9b0() {
   return (neuron0x1b27fd0()*0.0316967);
}

double NNfunction_sb_dLcR::synapse0x1b4c9f0() {
   return (neuron0x1b28310()*0.251348);
}

double NNfunction_sb_dLcR::synapse0x1b4ca30() {
   return (neuron0x1b28650()*0.0187479);
}

double NNfunction_sb_dLcR::synapse0x1b4ca70() {
   return (neuron0x1b28990()*-0.266992);
}

double NNfunction_sb_dLcR::synapse0x1b4cab0() {
   return (neuron0x1b28cd0()*-0.106002);
}

double NNfunction_sb_dLcR::synapse0x1b4caf0() {
   return (neuron0x1b29010()*-0.181386);
}

double NNfunction_sb_dLcR::synapse0x1b4ce70() {
   return (neuron0x1b244e0()*-0.194085);
}

double NNfunction_sb_dLcR::synapse0x1b4ceb0() {
   return (neuron0x1b24790()*-0.222806);
}

double NNfunction_sb_dLcR::synapse0x1b4cef0() {
   return (neuron0x1b24ad0()*-0.233743);
}

double NNfunction_sb_dLcR::synapse0x1b4cf30() {
   return (neuron0x1b24e10()*0.225425);
}

double NNfunction_sb_dLcR::synapse0x1b4cf70() {
   return (neuron0x1b25150()*0.00799834);
}

double NNfunction_sb_dLcR::synapse0x1b4cfb0() {
   return (neuron0x1b25490()*3.58565e-05);
}

double NNfunction_sb_dLcR::synapse0x1b4cff0() {
   return (neuron0x1b257d0()*0.364466);
}

double NNfunction_sb_dLcR::synapse0x1b4d030() {
   return (neuron0x1b25b10()*-0.135693);
}

double NNfunction_sb_dLcR::synapse0x1b4d070() {
   return (neuron0x1b25e50()*-0.531377);
}

double NNfunction_sb_dLcR::synapse0x1b4d0b0() {
   return (neuron0x1b26190()*-0.173364);
}

double NNfunction_sb_dLcR::synapse0x1b4d0f0() {
   return (neuron0x1b264d0()*-0.236219);
}

double NNfunction_sb_dLcR::synapse0x1b4d130() {
   return (neuron0x1b26810()*-0.102393);
}

double NNfunction_sb_dLcR::synapse0x1b4d170() {
   return (neuron0x1b26b50()*0.132617);
}

double NNfunction_sb_dLcR::synapse0x1b4d1b0() {
   return (neuron0x1b26e90()*-0.100784);
}

double NNfunction_sb_dLcR::synapse0x1b4d1f0() {
   return (neuron0x1b271d0()*-0.131411);
}

double NNfunction_sb_dLcR::synapse0x1b4d230() {
   return (neuron0x1b27510()*-0.638404);
}

double NNfunction_sb_dLcR::synapse0x1b4ccc0() {
   return (neuron0x1b27850()*0.0955038);
}

double NNfunction_sb_dLcR::synapse0x1b4cd00() {
   return (neuron0x1b27db0()*0.0111323);
}

double NNfunction_sb_dLcR::synapse0x1b4d380() {
   return (neuron0x1b27fd0()*-0.0710246);
}

double NNfunction_sb_dLcR::synapse0x1b4d3c0() {
   return (neuron0x1b28310()*0.18324);
}

double NNfunction_sb_dLcR::synapse0x1b4d400() {
   return (neuron0x1b28650()*0.187499);
}

double NNfunction_sb_dLcR::synapse0x1b4d440() {
   return (neuron0x1b28990()*0.244904);
}

double NNfunction_sb_dLcR::synapse0x1b4d480() {
   return (neuron0x1b28cd0()*-0.0133882);
}

double NNfunction_sb_dLcR::synapse0x1b4d4c0() {
   return (neuron0x1b29010()*0.019861);
}

double NNfunction_sb_dLcR::synapse0x1b4d840() {
   return (neuron0x1b244e0()*0.0359527);
}

double NNfunction_sb_dLcR::synapse0x1b4d880() {
   return (neuron0x1b24790()*0.311353);
}

double NNfunction_sb_dLcR::synapse0x1b4d8c0() {
   return (neuron0x1b24ad0()*0.249806);
}

double NNfunction_sb_dLcR::synapse0x1b4d900() {
   return (neuron0x1b24e10()*-1.45372);
}

double NNfunction_sb_dLcR::synapse0x1b4d940() {
   return (neuron0x1b25150()*0.0543318);
}

double NNfunction_sb_dLcR::synapse0x1b4d980() {
   return (neuron0x1b25490()*-0.0936409);
}

double NNfunction_sb_dLcR::synapse0x1b4d9c0() {
   return (neuron0x1b257d0()*0.113402);
}

double NNfunction_sb_dLcR::synapse0x1b4da00() {
   return (neuron0x1b25b10()*-0.0338658);
}

double NNfunction_sb_dLcR::synapse0x1b4da40() {
   return (neuron0x1b25e50()*-0.11022);
}

double NNfunction_sb_dLcR::synapse0x1b4da80() {
   return (neuron0x1b26190()*0.0535168);
}

double NNfunction_sb_dLcR::synapse0x1b4dac0() {
   return (neuron0x1b264d0()*0.0692945);
}

double NNfunction_sb_dLcR::synapse0x1b4db00() {
   return (neuron0x1b26810()*-0.524317);
}

double NNfunction_sb_dLcR::synapse0x1b4db40() {
   return (neuron0x1b26b50()*-0.0529031);
}

double NNfunction_sb_dLcR::synapse0x1b4db80() {
   return (neuron0x1b26e90()*-0.0755202);
}

double NNfunction_sb_dLcR::synapse0x1b4dbc0() {
   return (neuron0x1b271d0()*-0.087718);
}

double NNfunction_sb_dLcR::synapse0x1b4dc00() {
   return (neuron0x1b27510()*0.074584);
}

double NNfunction_sb_dLcR::synapse0x1b4d690() {
   return (neuron0x1b27850()*0.0477968);
}

double NNfunction_sb_dLcR::synapse0x1b4d6d0() {
   return (neuron0x1b27db0()*-0.101966);
}

double NNfunction_sb_dLcR::synapse0x1b4dd50() {
   return (neuron0x1b27fd0()*-0.201714);
}

double NNfunction_sb_dLcR::synapse0x1b4dd90() {
   return (neuron0x1b28310()*-0.180439);
}

double NNfunction_sb_dLcR::synapse0x1b4ddd0() {
   return (neuron0x1b28650()*-0.0915597);
}

double NNfunction_sb_dLcR::synapse0x1b4de10() {
   return (neuron0x1b28990()*0.0668909);
}

double NNfunction_sb_dLcR::synapse0x1b4de50() {
   return (neuron0x1b28cd0()*0.00706723);
}

double NNfunction_sb_dLcR::synapse0x1b4de90() {
   return (neuron0x1b29010()*-0.0784097);
}

double NNfunction_sb_dLcR::synapse0x18edca0() {
   return (neuron0x1b29480()*0.719207);
}

double NNfunction_sb_dLcR::synapse0x18edce0() {
   return (neuron0x1b29dd0()*0.407906);
}

double NNfunction_sb_dLcR::synapse0x1b2b940() {
   return (neuron0x1b2a8b0()*0.0249073);
}

double NNfunction_sb_dLcR::synapse0x1b2b980() {
   return (neuron0x1b2a350()*0.292529);
}

double NNfunction_sb_dLcR::synapse0x1b2c310() {
   return (neuron0x1b2b690()*0.606289);
}

double NNfunction_sb_dLcR::synapse0x1b2c350() {
   return (neuron0x1b2c060()*-0.687042);
}

double NNfunction_sb_dLcR::synapse0x1b2d0e0() {
   return (neuron0x1b2ce30()*0.222009);
}

double NNfunction_sb_dLcR::synapse0x1b2d120() {
   return (neuron0x1b2d800()*-0.899706);
}

double NNfunction_sb_dLcR::synapse0x1b2dab0() {
   return (neuron0x1b2e1d0()*0.65385);
}

double NNfunction_sb_dLcR::synapse0x1b2daf0() {
   return (neuron0x1b2ecb0()*0.280802);
}

double NNfunction_sb_dLcR::synapse0x1b2e480() {
   return (neuron0x1b2f680()*-0.385516);
}

double NNfunction_sb_dLcR::synapse0x1b2e4c0() {
   return (neuron0x1b2c760()*-2.0468);
}

double NNfunction_sb_dLcR::synapse0x1b2ef60() {
   return (neuron0x1b31230()*2.79452);
}

double NNfunction_sb_dLcR::synapse0x1b2efa0() {
   return (neuron0x1b31c00()*-0.335831);
}

double NNfunction_sb_dLcR::synapse0x1b2f930() {
   return (neuron0x1b325d0()*-0.787875);
}

double NNfunction_sb_dLcR::synapse0x1b2f970() {
   return (neuron0x1b32fa0()*-0.393083);
}

double NNfunction_sb_dLcR::synapse0x1b2ca10() {
   return (neuron0x1b34db0()*0.557574);
}

double NNfunction_sb_dLcR::synapse0x1b2ca50() {
   return (neuron0x1b35090()*0.431348);
}

double NNfunction_sb_dLcR::synapse0x1b314e0() {
   return (neuron0x1b35a60()*-0.199705);
}

double NNfunction_sb_dLcR::synapse0x1b31520() {
   return (neuron0x1b36430()*0.10127);
}

double NNfunction_sb_dLcR::synapse0x1b31eb0() {
   return (neuron0x1b36e00()*-2.30813);
}

double NNfunction_sb_dLcR::synapse0x1b31ef0() {
   return (neuron0x1b377d0()*0.07184);
}

double NNfunction_sb_dLcR::synapse0x1b32880() {
   return (neuron0x1b30320()*-1.20128);
}

double NNfunction_sb_dLcR::synapse0x1b328c0() {
   return (neuron0x1b30cf0()*1.0696);
}

double NNfunction_sb_dLcR::synapse0x1b33250() {
   return (neuron0x1b3a560()*0.0691601);
}

double NNfunction_sb_dLcR::synapse0x1b33290() {
   return (neuron0x1b3af30()*-0.309346);
}

double NNfunction_sb_dLcR::synapse0x1b273f0() {
   return (neuron0x1b3b900()*-0.121171);
}

double NNfunction_sb_dLcR::synapse0x1b27430() {
   return (neuron0x1b3c2d0()*7.56666);
}

double NNfunction_sb_dLcR::synapse0x1b35340() {
   return (neuron0x1b3cca0()*-0.111316);
}

double NNfunction_sb_dLcR::synapse0x1b35380() {
   return (neuron0x1b3d670()*-0.0362555);
}

double NNfunction_sb_dLcR::synapse0x1b35d10() {
   return (neuron0x1b3e040()*0.532293);
}

double NNfunction_sb_dLcR::synapse0x1b35d50() {
   return (neuron0x1b3ea10()*0.0535504);
}

double NNfunction_sb_dLcR::synapse0x1b366e0() {
   return (neuron0x1b34aa0()*-0.00185401);
}

double NNfunction_sb_dLcR::synapse0x1b36720() {
   return (neuron0x1b415f0()*-0.0427731);
}

double NNfunction_sb_dLcR::synapse0x1b370b0() {
   return (neuron0x1b41fc0()*-0.252252);
}

double NNfunction_sb_dLcR::synapse0x1b370f0() {
   return (neuron0x1b42990()*-1.74843);
}

double NNfunction_sb_dLcR::synapse0x1b37a80() {
   return (neuron0x1b43360()*0.0131178);
}

double NNfunction_sb_dLcR::synapse0x1b37ac0() {
   return (neuron0x1b43d30()*-0.223425);
}

double NNfunction_sb_dLcR::synapse0x1b305d0() {
   return (neuron0x1b44700()*-0.329606);
}

double NNfunction_sb_dLcR::synapse0x1b30610() {
   return (neuron0x1b450d0()*-0.418271);
}

double NNfunction_sb_dLcR::synapse0x1b39e80() {
   return (neuron0x1b45aa0()*0.649182);
}

double NNfunction_sb_dLcR::synapse0x1b39ec0() {
   return (neuron0x1b46680()*0.160094);
}

double NNfunction_sb_dLcR::synapse0x1b3a810() {
   return (neuron0x1b47050()*0.457904);
}

double NNfunction_sb_dLcR::synapse0x1b3a850() {
   return (neuron0x1b37ed0()*0.577883);
}

double NNfunction_sb_dLcR::synapse0x1b3b1e0() {
   return (neuron0x1b388a0()*-0.235022);
}

double NNfunction_sb_dLcR::synapse0x1b3b220() {
   return (neuron0x1b39270()*0.572087);
}

double NNfunction_sb_dLcR::synapse0x1b3bbb0() {
   return (neuron0x1b4b8b0()*-0.574989);
}

double NNfunction_sb_dLcR::synapse0x1b3bbf0() {
   return (neuron0x1b4c160()*-0.415541);
}

double NNfunction_sb_dLcR::synapse0x1b3c580() {
   return (neuron0x1b4cb30()*-0.326676);
}

double NNfunction_sb_dLcR::synapse0x1b3c5c0() {
   return (neuron0x1b4d500()*2.58701);
}

double NNfunction_sb_dLcR::synapse0x1b3ecc0() {
   return (neuron0x1b29480()*0.105595);
}

double NNfunction_sb_dLcR::synapse0x1b3ed00() {
   return (neuron0x1b29dd0()*0.00790668);
}

double NNfunction_sb_dLcR::synapse0x1b34280() {
   return (neuron0x1b2a8b0()*-0.882288);
}

double NNfunction_sb_dLcR::synapse0x1b342c0() {
   return (neuron0x1b2a350()*0.363689);
}

double NNfunction_sb_dLcR::synapse0x1b418a0() {
   return (neuron0x1b2b690()*0.0984439);
}

double NNfunction_sb_dLcR::synapse0x1b418e0() {
   return (neuron0x1b2c060()*1.23689);
}

double NNfunction_sb_dLcR::synapse0x1b42270() {
   return (neuron0x1b2ce30()*-0.0416538);
}

double NNfunction_sb_dLcR::synapse0x1b422b0() {
   return (neuron0x1b2d800()*-0.285122);
}

double NNfunction_sb_dLcR::synapse0x1b42c40() {
   return (neuron0x1b2e1d0()*-0.762577);
}

double NNfunction_sb_dLcR::synapse0x1b42c80() {
   return (neuron0x1b2ecb0()*-0.0327687);
}

double NNfunction_sb_dLcR::synapse0x1b43610() {
   return (neuron0x1b2f680()*0.0324893);
}

double NNfunction_sb_dLcR::synapse0x1b43650() {
   return (neuron0x1b2c760()*-0.904375);
}

double NNfunction_sb_dLcR::synapse0x1b43fe0() {
   return (neuron0x1b31230()*0.0483949);
}

double NNfunction_sb_dLcR::synapse0x1b44020() {
   return (neuron0x1b31c00()*0.00329964);
}

double NNfunction_sb_dLcR::synapse0x1b449b0() {
   return (neuron0x1b325d0()*0.202296);
}

double NNfunction_sb_dLcR::synapse0x1b449f0() {
   return (neuron0x1b32fa0()*0.0452314);
}

double NNfunction_sb_dLcR::synapse0x1b45380() {
   return (neuron0x1b34db0()*-0.0309617);
}

double NNfunction_sb_dLcR::synapse0x1b453c0() {
   return (neuron0x1b35090()*1.40333);
}

double NNfunction_sb_dLcR::synapse0x1b45d50() {
   return (neuron0x1b35a60()*0.52603);
}

double NNfunction_sb_dLcR::synapse0x1b45d90() {
   return (neuron0x1b36430()*-0.0276774);
}

double NNfunction_sb_dLcR::synapse0x1b46930() {
   return (neuron0x1b36e00()*-0.187104);
}

double NNfunction_sb_dLcR::synapse0x1b46970() {
   return (neuron0x1b377d0()*0.20721);
}

double NNfunction_sb_dLcR::synapse0x1b47300() {
   return (neuron0x1b30320()*0.104123);
}

double NNfunction_sb_dLcR::synapse0x1b47340() {
   return (neuron0x1b30cf0()*0.799036);
}

double NNfunction_sb_dLcR::synapse0x1b38180() {
   return (neuron0x1b3a560()*0.0033468);
}

double NNfunction_sb_dLcR::synapse0x1b381c0() {
   return (neuron0x1b3af30()*-0.0155221);
}

double NNfunction_sb_dLcR::synapse0x1b38b50() {
   return (neuron0x1b3b900()*-0.0133392);
}

double NNfunction_sb_dLcR::synapse0x1b38b90() {
   return (neuron0x1b3c2d0()*-1.04287);
}

double NNfunction_sb_dLcR::synapse0x1b39520() {
   return (neuron0x1b3cca0()*-0.00588779);
}

double NNfunction_sb_dLcR::synapse0x1b39560() {
   return (neuron0x1b3d670()*-0.186707);
}

double NNfunction_sb_dLcR::synapse0x1b4ba40() {
   return (neuron0x1b3e040()*-0.741623);
}

double NNfunction_sb_dLcR::synapse0x1b4ba80() {
   return (neuron0x1b3ea10()*0.036334);
}

double NNfunction_sb_dLcR::synapse0x1b4c410() {
   return (neuron0x1b34aa0()*0.0381194);
}

double NNfunction_sb_dLcR::synapse0x1b4c450() {
   return (neuron0x1b415f0()*-0.000697117);
}

double NNfunction_sb_dLcR::synapse0x1b4cde0() {
   return (neuron0x1b41fc0()*0.0336226);
}

double NNfunction_sb_dLcR::synapse0x1b4ce20() {
   return (neuron0x1b42990()*0.987753);
}

double NNfunction_sb_dLcR::synapse0x1b4d7b0() {
   return (neuron0x1b43360()*0.019081);
}

double NNfunction_sb_dLcR::synapse0x1b4d7f0() {
   return (neuron0x1b43d30()*-0.0159948);
}

double NNfunction_sb_dLcR::synapse0x1b296a0() {
   return (neuron0x1b44700()*0.019571);
}

double NNfunction_sb_dLcR::synapse0x1b296e0() {
   return (neuron0x1b450d0()*-0.223512);
}

double NNfunction_sb_dLcR::synapse0x1b3cf50() {
   return (neuron0x1b45aa0()*-0.0371498);
}

double NNfunction_sb_dLcR::synapse0x1b3cf90() {
   return (neuron0x1b46680()*-0.00256617);
}

double NNfunction_sb_dLcR::synapse0x1b4ded0() {
   return (neuron0x1b47050()*-0.0135728);
}

double NNfunction_sb_dLcR::synapse0x1b4df10() {
   return (neuron0x1b37ed0()*-0.00972573);
}

double NNfunction_sb_dLcR::synapse0x1b4df50() {
   return (neuron0x1b388a0()*0.891247);
}

double NNfunction_sb_dLcR::synapse0x1b4df90() {
   return (neuron0x1b39270()*-0.0270028);
}

double NNfunction_sb_dLcR::synapse0x1b54e40() {
   return (neuron0x1b4b8b0()*0.0305782);
}

double NNfunction_sb_dLcR::synapse0x1b54e80() {
   return (neuron0x1b4c160()*0.0687862);
}

double NNfunction_sb_dLcR::synapse0x1b54ec0() {
   return (neuron0x1b4cb30()*0.0748641);
}

double NNfunction_sb_dLcR::synapse0x1b54f00() {
   return (neuron0x1b4d500()*0.199418);
}

double NNfunction_sb_dLcR::synapse0x1b55280() {
   return (neuron0x1b29480()*1.11876);
}

double NNfunction_sb_dLcR::synapse0x1b552c0() {
   return (neuron0x1b29dd0()*0.30298);
}

double NNfunction_sb_dLcR::synapse0x1b55300() {
   return (neuron0x1b2a8b0()*1.52161);
}

double NNfunction_sb_dLcR::synapse0x1b55340() {
   return (neuron0x1b2a350()*-1.38891);
}

double NNfunction_sb_dLcR::synapse0x1b55380() {
   return (neuron0x1b2b690()*1.20355);
}

double NNfunction_sb_dLcR::synapse0x1b553c0() {
   return (neuron0x1b2c060()*-0.683386);
}

double NNfunction_sb_dLcR::synapse0x1b55400() {
   return (neuron0x1b2ce30()*-0.763659);
}

double NNfunction_sb_dLcR::synapse0x1b55440() {
   return (neuron0x1b2d800()*-0.272773);
}

double NNfunction_sb_dLcR::synapse0x1b55480() {
   return (neuron0x1b2e1d0()*1.73251);
}

double NNfunction_sb_dLcR::synapse0x1b554c0() {
   return (neuron0x1b2ecb0()*-0.197166);
}

double NNfunction_sb_dLcR::synapse0x1b55500() {
   return (neuron0x1b2f680()*-0.478107);
}

double NNfunction_sb_dLcR::synapse0x1b55540() {
   return (neuron0x1b2c760()*1.7665);
}

double NNfunction_sb_dLcR::synapse0x1b55580() {
   return (neuron0x1b31230()*0.933891);
}

double NNfunction_sb_dLcR::synapse0x1b555c0() {
   return (neuron0x1b31c00()*0.238441);
}

double NNfunction_sb_dLcR::synapse0x1b55600() {
   return (neuron0x1b325d0()*-0.272661);
}

double NNfunction_sb_dLcR::synapse0x1b55640() {
   return (neuron0x1b32fa0()*0.201306);
}

double NNfunction_sb_dLcR::synapse0x1b550d0() {
   return (neuron0x1b34db0()*0.337105);
}

double NNfunction_sb_dLcR::synapse0x1b55110() {
   return (neuron0x1b35090()*-2.81806);
}

double NNfunction_sb_dLcR::synapse0x1b55790() {
   return (neuron0x1b35a60()*1.88959);
}

double NNfunction_sb_dLcR::synapse0x1b557d0() {
   return (neuron0x1b36430()*-0.15362);
}

double NNfunction_sb_dLcR::synapse0x1b55810() {
   return (neuron0x1b36e00()*-0.954293);
}

double NNfunction_sb_dLcR::synapse0x1b55850() {
   return (neuron0x1b377d0()*-1.17207);
}

double NNfunction_sb_dLcR::synapse0x1b55890() {
   return (neuron0x1b30320()*-0.53543);
}

double NNfunction_sb_dLcR::synapse0x1b558d0() {
   return (neuron0x1b30cf0()*2.29245);
}

double NNfunction_sb_dLcR::synapse0x1b55910() {
   return (neuron0x1b3a560()*0.456784);
}

double NNfunction_sb_dLcR::synapse0x1b55950() {
   return (neuron0x1b3af30()*-0.757017);
}

double NNfunction_sb_dLcR::synapse0x1b55990() {
   return (neuron0x1b3b900()*0.506713);
}

double NNfunction_sb_dLcR::synapse0x1b559d0() {
   return (neuron0x1b3c2d0()*1.61872);
}

double NNfunction_sb_dLcR::synapse0x1b55a10() {
   return (neuron0x1b3cca0()*0.585847);
}

double NNfunction_sb_dLcR::synapse0x1b55a50() {
   return (neuron0x1b3d670()*1.6438);
}

double NNfunction_sb_dLcR::synapse0x1b55a90() {
   return (neuron0x1b3e040()*0.812244);
}

double NNfunction_sb_dLcR::synapse0x1b55ad0() {
   return (neuron0x1b3ea10()*0.212892);
}

double NNfunction_sb_dLcR::synapse0x1b55680() {
   return (neuron0x1b34aa0()*-2.32216);
}

double NNfunction_sb_dLcR::synapse0x1b556c0() {
   return (neuron0x1b415f0()*0.972011);
}

double NNfunction_sb_dLcR::synapse0x1b55700() {
   return (neuron0x1b41fc0()*0.941238);
}

double NNfunction_sb_dLcR::synapse0x1b55740() {
   return (neuron0x1b42990()*1.4133);
}

double NNfunction_sb_dLcR::synapse0x1b55d20() {
   return (neuron0x1b43360()*0.39814);
}

double NNfunction_sb_dLcR::synapse0x1b55d60() {
   return (neuron0x1b43d30()*-0.0441351);
}

double NNfunction_sb_dLcR::synapse0x1b55da0() {
   return (neuron0x1b44700()*-0.0250733);
}

double NNfunction_sb_dLcR::synapse0x1b55de0() {
   return (neuron0x1b450d0()*-4.51666);
}

double NNfunction_sb_dLcR::synapse0x1b55e20() {
   return (neuron0x1b45aa0()*0.802398);
}

double NNfunction_sb_dLcR::synapse0x1b55e60() {
   return (neuron0x1b46680()*0.193043);
}

double NNfunction_sb_dLcR::synapse0x1b55ea0() {
   return (neuron0x1b47050()*-0.225616);
}

double NNfunction_sb_dLcR::synapse0x1b55ee0() {
   return (neuron0x1b37ed0()*-0.0231105);
}

double NNfunction_sb_dLcR::synapse0x1b55f20() {
   return (neuron0x1b388a0()*-1.0625);
}

double NNfunction_sb_dLcR::synapse0x1b55f60() {
   return (neuron0x1b39270()*0.182045);
}

double NNfunction_sb_dLcR::synapse0x1b55fa0() {
   return (neuron0x1b4b8b0()*-0.0543104);
}

double NNfunction_sb_dLcR::synapse0x1b55fe0() {
   return (neuron0x1b4c160()*-0.530275);
}

double NNfunction_sb_dLcR::synapse0x1b56020() {
   return (neuron0x1b4cb30()*0.892969);
}

double NNfunction_sb_dLcR::synapse0x1b56060() {
   return (neuron0x1b4d500()*0.323161);
}

double NNfunction_sb_dLcR::synapse0x1b563e0() {
   return (neuron0x1b29480()*0.500097);
}

double NNfunction_sb_dLcR::synapse0x1b56420() {
   return (neuron0x1b29dd0()*0.532855);
}

double NNfunction_sb_dLcR::synapse0x1b56460() {
   return (neuron0x1b2a8b0()*-1.3432);
}

double NNfunction_sb_dLcR::synapse0x1b564a0() {
   return (neuron0x1b2a350()*0.871048);
}

double NNfunction_sb_dLcR::synapse0x1b564e0() {
   return (neuron0x1b2b690()*-0.96808);
}

double NNfunction_sb_dLcR::synapse0x1b56520() {
   return (neuron0x1b2c060()*-0.293493);
}

double NNfunction_sb_dLcR::synapse0x1b56560() {
   return (neuron0x1b2ce30()*-0.52777);
}

double NNfunction_sb_dLcR::synapse0x1b565a0() {
   return (neuron0x1b2d800()*0.0446372);
}

double NNfunction_sb_dLcR::synapse0x1b565e0() {
   return (neuron0x1b2e1d0()*1.40813);
}

double NNfunction_sb_dLcR::synapse0x1b56620() {
   return (neuron0x1b2ecb0()*0.413158);
}

double NNfunction_sb_dLcR::synapse0x1b56660() {
   return (neuron0x1b2f680()*-0.145053);
}

double NNfunction_sb_dLcR::synapse0x1b566a0() {
   return (neuron0x1b2c760()*-2.13915);
}

double NNfunction_sb_dLcR::synapse0x1b566e0() {
   return (neuron0x1b31230()*0.544905);
}

double NNfunction_sb_dLcR::synapse0x1b56720() {
   return (neuron0x1b31c00()*-1.01578);
}

double NNfunction_sb_dLcR::synapse0x1b56760() {
   return (neuron0x1b325d0()*-0.24194);
}

double NNfunction_sb_dLcR::synapse0x1b567a0() {
   return (neuron0x1b32fa0()*-0.746185);
}

double NNfunction_sb_dLcR::synapse0x1b56230() {
   return (neuron0x1b34db0()*0.761713);
}

double NNfunction_sb_dLcR::synapse0x1b56270() {
   return (neuron0x1b35090()*0.585675);
}

double NNfunction_sb_dLcR::synapse0x1b568f0() {
   return (neuron0x1b35a60()*1.14444);
}

double NNfunction_sb_dLcR::synapse0x1b56930() {
   return (neuron0x1b36430()*-1.11379);
}

double NNfunction_sb_dLcR::synapse0x1b56970() {
   return (neuron0x1b36e00()*-1.04059);
}

double NNfunction_sb_dLcR::synapse0x1b569b0() {
   return (neuron0x1b377d0()*-0.627155);
}

double NNfunction_sb_dLcR::synapse0x1b569f0() {
   return (neuron0x1b30320()*0.787186);
}

double NNfunction_sb_dLcR::synapse0x1b56a30() {
   return (neuron0x1b30cf0()*1.29179);
}

double NNfunction_sb_dLcR::synapse0x1b56a70() {
   return (neuron0x1b3a560()*0.710655);
}

double NNfunction_sb_dLcR::synapse0x1b56ab0() {
   return (neuron0x1b3af30()*-0.661046);
}

double NNfunction_sb_dLcR::synapse0x1b56af0() {
   return (neuron0x1b3b900()*0.192572);
}

double NNfunction_sb_dLcR::synapse0x1b56b30() {
   return (neuron0x1b3c2d0()*-3.2066);
}

double NNfunction_sb_dLcR::synapse0x1b56b70() {
   return (neuron0x1b3cca0()*0.372687);
}

double NNfunction_sb_dLcR::synapse0x1b56bb0() {
   return (neuron0x1b3d670()*-0.750127);
}

double NNfunction_sb_dLcR::synapse0x1b56bf0() {
   return (neuron0x1b3e040()*0.971596);
}

double NNfunction_sb_dLcR::synapse0x1b56c30() {
   return (neuron0x1b3ea10()*0.536946);
}

double NNfunction_sb_dLcR::synapse0x1b567e0() {
   return (neuron0x1b34aa0()*0.622375);
}

double NNfunction_sb_dLcR::synapse0x1b56820() {
   return (neuron0x1b415f0()*0.472531);
}

double NNfunction_sb_dLcR::synapse0x1b56860() {
   return (neuron0x1b41fc0()*0.426588);
}

double NNfunction_sb_dLcR::synapse0x1b568a0() {
   return (neuron0x1b42990()*-0.10999);
}

double NNfunction_sb_dLcR::synapse0x1b56e80() {
   return (neuron0x1b43360()*0.615751);
}

double NNfunction_sb_dLcR::synapse0x1b56ec0() {
   return (neuron0x1b43d30()*-1.10045);
}

double NNfunction_sb_dLcR::synapse0x1b56f00() {
   return (neuron0x1b44700()*-0.317748);
}

double NNfunction_sb_dLcR::synapse0x1b56f40() {
   return (neuron0x1b450d0()*-3.48135);
}

double NNfunction_sb_dLcR::synapse0x1b56f80() {
   return (neuron0x1b45aa0()*0.583516);
}

double NNfunction_sb_dLcR::synapse0x1b56fc0() {
   return (neuron0x1b46680()*0.65573);
}

double NNfunction_sb_dLcR::synapse0x1b57000() {
   return (neuron0x1b47050()*0.617577);
}

double NNfunction_sb_dLcR::synapse0x1b57040() {
   return (neuron0x1b37ed0()*1.21179);
}

double NNfunction_sb_dLcR::synapse0x1b57080() {
   return (neuron0x1b388a0()*-0.319206);
}

double NNfunction_sb_dLcR::synapse0x1b570c0() {
   return (neuron0x1b39270()*0.526345);
}

double NNfunction_sb_dLcR::synapse0x1b57100() {
   return (neuron0x1b4b8b0()*-0.874319);
}

double NNfunction_sb_dLcR::synapse0x1b57140() {
   return (neuron0x1b4c160()*-0.422723);
}

double NNfunction_sb_dLcR::synapse0x1b57180() {
   return (neuron0x1b4cb30()*-0.675052);
}

double NNfunction_sb_dLcR::synapse0x1b571c0() {
   return (neuron0x1b4d500()*0.224254);
}

double NNfunction_sb_dLcR::synapse0x1b57540() {
   return (neuron0x1b29480()*-0.0397805);
}

double NNfunction_sb_dLcR::synapse0x1b57580() {
   return (neuron0x1b29dd0()*0.0850845);
}

double NNfunction_sb_dLcR::synapse0x1b575c0() {
   return (neuron0x1b2a8b0()*-1.36621);
}

double NNfunction_sb_dLcR::synapse0x1b57600() {
   return (neuron0x1b2a350()*0.277475);
}

double NNfunction_sb_dLcR::synapse0x1b57640() {
   return (neuron0x1b2b690()*-0.224963);
}

double NNfunction_sb_dLcR::synapse0x1b57680() {
   return (neuron0x1b2c060()*0.670139);
}

double NNfunction_sb_dLcR::synapse0x1b576c0() {
   return (neuron0x1b2ce30()*0.00783424);
}

double NNfunction_sb_dLcR::synapse0x1b57700() {
   return (neuron0x1b2d800()*0.468246);
}

double NNfunction_sb_dLcR::synapse0x1b57740() {
   return (neuron0x1b2e1d0()*-0.666342);
}

double NNfunction_sb_dLcR::synapse0x1b57780() {
   return (neuron0x1b2ecb0()*0.029488);
}

double NNfunction_sb_dLcR::synapse0x1b577c0() {
   return (neuron0x1b2f680()*-0.0308761);
}

double NNfunction_sb_dLcR::synapse0x1b57800() {
   return (neuron0x1b2c760()*0.138068);
}

double NNfunction_sb_dLcR::synapse0x1b57840() {
   return (neuron0x1b31230()*0.0033045);
}

double NNfunction_sb_dLcR::synapse0x1b57880() {
   return (neuron0x1b31c00()*-0.0804724);
}

double NNfunction_sb_dLcR::synapse0x1b578c0() {
   return (neuron0x1b325d0()*0.195353);
}

double NNfunction_sb_dLcR::synapse0x1b57900() {
   return (neuron0x1b32fa0()*-0.00401604);
}

double NNfunction_sb_dLcR::synapse0x1b57390() {
   return (neuron0x1b34db0()*0.0331643);
}

double NNfunction_sb_dLcR::synapse0x1b573d0() {
   return (neuron0x1b35090()*1.48198);
}

double NNfunction_sb_dLcR::synapse0x1b57a50() {
   return (neuron0x1b35a60()*-0.495123);
}

double NNfunction_sb_dLcR::synapse0x1b57a90() {
   return (neuron0x1b36430()*-0.0288504);
}

double NNfunction_sb_dLcR::synapse0x1b57ad0() {
   return (neuron0x1b36e00()*-0.170365);
}

double NNfunction_sb_dLcR::synapse0x1b57b10() {
   return (neuron0x1b377d0()*0.147739);
}

double NNfunction_sb_dLcR::synapse0x1b57b50() {
   return (neuron0x1b30320()*0.270815);
}

double NNfunction_sb_dLcR::synapse0x1b57b90() {
   return (neuron0x1b30cf0()*-1.69554);
}

double NNfunction_sb_dLcR::synapse0x1b57bd0() {
   return (neuron0x1b3a560()*0.0424783);
}

double NNfunction_sb_dLcR::synapse0x1b57c10() {
   return (neuron0x1b3af30()*-0.0808778);
}

double NNfunction_sb_dLcR::synapse0x1b57c50() {
   return (neuron0x1b3b900()*-0.00646861);
}

double NNfunction_sb_dLcR::synapse0x1b57c90() {
   return (neuron0x1b3c2d0()*-3.27763);
}

double NNfunction_sb_dLcR::synapse0x1b57cd0() {
   return (neuron0x1b3cca0()*0.0385343);
}

double NNfunction_sb_dLcR::synapse0x1b57d10() {
   return (neuron0x1b3d670()*-0.120745);
}

double NNfunction_sb_dLcR::synapse0x1b57d50() {
   return (neuron0x1b3e040()*-0.953874);
}

double NNfunction_sb_dLcR::synapse0x1b57d90() {
   return (neuron0x1b3ea10()*-0.0401816);
}

double NNfunction_sb_dLcR::synapse0x1b57940() {
   return (neuron0x1b34aa0()*-0.118575);
}

double NNfunction_sb_dLcR::synapse0x1b57980() {
   return (neuron0x1b415f0()*0.0319195);
}

double NNfunction_sb_dLcR::synapse0x1b579c0() {
   return (neuron0x1b41fc0()*0.0374596);
}

double NNfunction_sb_dLcR::synapse0x1b57a00() {
   return (neuron0x1b42990()*-1.08483);
}

double NNfunction_sb_dLcR::synapse0x1b57fe0() {
   return (neuron0x1b43360()*0.0256311);
}

double NNfunction_sb_dLcR::synapse0x1b58020() {
   return (neuron0x1b43d30()*-0.0234776);
}

double NNfunction_sb_dLcR::synapse0x1b58060() {
   return (neuron0x1b44700()*-0.0649788);
}

double NNfunction_sb_dLcR::synapse0x1b580a0() {
   return (neuron0x1b450d0()*1.52924);
}

double NNfunction_sb_dLcR::synapse0x1b580e0() {
   return (neuron0x1b45aa0()*0.139512);
}

double NNfunction_sb_dLcR::synapse0x1b58120() {
   return (neuron0x1b46680()*0.0528763);
}

double NNfunction_sb_dLcR::synapse0x1b58160() {
   return (neuron0x1b47050()*0.0593642);
}

double NNfunction_sb_dLcR::synapse0x1b581a0() {
   return (neuron0x1b37ed0()*0.083606);
}

double NNfunction_sb_dLcR::synapse0x1b581e0() {
   return (neuron0x1b388a0()*0.504432);
}

double NNfunction_sb_dLcR::synapse0x1b58220() {
   return (neuron0x1b39270()*0.051863);
}

double NNfunction_sb_dLcR::synapse0x1b58260() {
   return (neuron0x1b4b8b0()*-0.10217);
}

double NNfunction_sb_dLcR::synapse0x1b582a0() {
   return (neuron0x1b4c160()*-0.131086);
}

double NNfunction_sb_dLcR::synapse0x1b582e0() {
   return (neuron0x1b4cb30()*-0.065568);
}

double NNfunction_sb_dLcR::synapse0x1b58320() {
   return (neuron0x1b4d500()*-0.263229);
}

double NNfunction_sb_dLcR::synapse0x1b58580() {
   return (neuron0x1b54700()*-5.15294);
}

double NNfunction_sb_dLcR::synapse0x1b585c0() {
   return (neuron0x1b54aa0()*6.1559);
}

double NNfunction_sb_dLcR::synapse0x1b58600() {
   return (neuron0x1b54f40()*-5.3673);
}

double NNfunction_sb_dLcR::synapse0x1b58640() {
   return (neuron0x1b560a0()*-5.06179);
}

double NNfunction_sb_dLcR::synapse0x1b58680() {
   return (neuron0x1b57200()*6.36259);
}

