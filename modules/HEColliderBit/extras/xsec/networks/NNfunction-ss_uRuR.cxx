#include "NNfunction-ss_uRuR.h"
#include <cmath>

double NNfunction-ss_uRuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.0181)/15.0617;
   input1 = (in1 - 92.4082)/643.823;
   input2 = (in2 - 369.824)/406.161;
   input3 = (in3 - 495.063)/671.855;
   input4 = (in4 - 864.805)/636.35;
   input5 = (in5 - 776.101)/622.584;
   input6 = (in6 - 779.537)/624.813;
   input7 = (in7 - 759.87)/610.717;
   input8 = (in8 - 749.664)/626.999;
   input9 = (in9 - 743.994)/618.044;
   input10 = (in10 - 718.671)/620.9;
   input11 = (in11 - 910.182)/589.931;
   input12 = (in12 - 910.959)/592.022;
   input13 = (in13 - 730.976)/429.243;
   input14 = (in14 - 797.131)/472.369;
   input15 = (in15 - 908.821)/579.43;
   input16 = (in16 - 621.514)/402.521;
   input17 = (in17 - 906.327)/591.283;
   input18 = (in18 - 906.03)/596.384;
   input19 = (in19 - 882.633)/571.57;
   input20 = (in20 - -373.773)/503.664;
   input21 = (in21 - -492.693)/995.789;
   input22 = (in22 - -27.833)/942.285;
   input23 = (in23 - 87.8321)/574.636;
   switch(index) {
     case 0:
         return neuron0x30945f0();
     default:
         return 0.;
   }
}

double NNfunction-ss_uRuR::Value(int index, double* input) {
   input0 = (input[0] - 23.0181)/15.0617;
   input1 = (input[1] - 92.4082)/643.823;
   input2 = (input[2] - 369.824)/406.161;
   input3 = (input[3] - 495.063)/671.855;
   input4 = (input[4] - 864.805)/636.35;
   input5 = (input[5] - 776.101)/622.584;
   input6 = (input[6] - 779.537)/624.813;
   input7 = (input[7] - 759.87)/610.717;
   input8 = (input[8] - 749.664)/626.999;
   input9 = (input[9] - 743.994)/618.044;
   input10 = (input[10] - 718.671)/620.9;
   input11 = (input[11] - 910.182)/589.931;
   input12 = (input[12] - 910.959)/592.022;
   input13 = (input[13] - 730.976)/429.243;
   input14 = (input[14] - 797.131)/472.369;
   input15 = (input[15] - 908.821)/579.43;
   input16 = (input[16] - 621.514)/402.521;
   input17 = (input[17] - 906.327)/591.283;
   input18 = (input[18] - 906.03)/596.384;
   input19 = (input[19] - 882.633)/571.57;
   input20 = (input[20] - -373.773)/503.664;
   input21 = (input[21] - -492.693)/995.789;
   input22 = (input[22] - -27.833)/942.285;
   input23 = (input[23] - 87.8321)/574.636;
   switch(index) {
     case 0:
         return neuron0x30945f0();
     default:
         return 0.;
   }
}

double NNfunction-ss_uRuR::neuron0x30606e0() {
   return input0;
}

double NNfunction-ss_uRuR::neuron0x3060a20() {
   return input1;
}

double NNfunction-ss_uRuR::neuron0x3060d60() {
   return input2;
}

double NNfunction-ss_uRuR::neuron0x30610a0() {
   return input3;
}

double NNfunction-ss_uRuR::neuron0x30613e0() {
   return input4;
}

double NNfunction-ss_uRuR::neuron0x3061720() {
   return input5;
}

double NNfunction-ss_uRuR::neuron0x3061a60() {
   return input6;
}

double NNfunction-ss_uRuR::neuron0x3061da0() {
   return input7;
}

double NNfunction-ss_uRuR::neuron0x30620e0() {
   return input8;
}

double NNfunction-ss_uRuR::neuron0x3062420() {
   return input9;
}

double NNfunction-ss_uRuR::neuron0x3062760() {
   return input10;
}

double NNfunction-ss_uRuR::neuron0x3062aa0() {
   return input11;
}

double NNfunction-ss_uRuR::neuron0x3062de0() {
   return input12;
}

double NNfunction-ss_uRuR::neuron0x3063120() {
   return input13;
}

double NNfunction-ss_uRuR::neuron0x3063460() {
   return input14;
}

double NNfunction-ss_uRuR::neuron0x30637a0() {
   return input15;
}

double NNfunction-ss_uRuR::neuron0x3063ae0() {
   return input16;
}

double NNfunction-ss_uRuR::neuron0x3064040() {
   return input17;
}

double NNfunction-ss_uRuR::neuron0x3064260() {
   return input18;
}

double NNfunction-ss_uRuR::neuron0x30645a0() {
   return input19;
}

double NNfunction-ss_uRuR::neuron0x30648e0() {
   return input20;
}

double NNfunction-ss_uRuR::neuron0x3064c20() {
   return input21;
}

double NNfunction-ss_uRuR::neuron0x3064f60() {
   return input22;
}

double NNfunction-ss_uRuR::neuron0x30652a0() {
   return input23;
}

double NNfunction-ss_uRuR::input0x3065710() {
   double input = 0.208314;
   input += synapse0x30605a0();
   input += synapse0x30605e0();
   input += synapse0x30659c0();
   input += synapse0x3065a00();
   input += synapse0x3065a40();
   input += synapse0x3065a80();
   input += synapse0x3065ac0();
   input += synapse0x3065b00();
   input += synapse0x3065b40();
   input += synapse0x3065b80();
   input += synapse0x3065bc0();
   input += synapse0x3065c00();
   input += synapse0x3065c40();
   input += synapse0x3065c80();
   input += synapse0x3065cc0();
   input += synapse0x3065d00();
   input += synapse0x3060510();
   input += synapse0x3060550();
   input += synapse0x2e1b8c0();
   input += synapse0x2e1b900();
   input += synapse0x3065f60();
   input += synapse0x3065fa0();
   input += synapse0x3065fe0();
   input += synapse0x3066020();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3065710() {
   double input = input0x3065710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3066060() {
   double input = 0.204752;
   input += synapse0x30663a0();
   input += synapse0x30663e0();
   input += synapse0x3066420();
   input += synapse0x3066460();
   input += synapse0x30664a0();
   input += synapse0x30664e0();
   input += synapse0x3066520();
   input += synapse0x3066560();
   input += synapse0x30665a0();
   input += synapse0x3065e50();
   input += synapse0x3065e90();
   input += synapse0x3065ed0();
   input += synapse0x3065f10();
   input += synapse0x30667f0();
   input += synapse0x3066830();
   input += synapse0x3066870();
   input += synapse0x30661f0();
   input += synapse0x3066230();
   input += synapse0x30669c0();
   input += synapse0x3066a00();
   input += synapse0x3066a40();
   input += synapse0x3066a80();
   input += synapse0x3066ac0();
   input += synapse0x3066b00();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3066060() {
   double input = input0x3066060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3066b40() {
   double input = 2.27506;
   input += synapse0x3066e80();
   input += synapse0x3066ec0();
   input += synapse0x3066f00();
   input += synapse0x3066f40();
   input += synapse0x3066f80();
   input += synapse0x3066fc0();
   input += synapse0x3067000();
   input += synapse0x3067040();
   input += synapse0x3067080();
   input += synapse0x30670c0();
   input += synapse0x3067100();
   input += synapse0x3067140();
   input += synapse0x3067180();
   input += synapse0x30671c0();
   input += synapse0x3067200();
   input += synapse0x3067240();
   input += synapse0x3066cd0();
   input += synapse0x2e1b950();
   input += synapse0x3066d10();
   input += synapse0x2e1bf60();
   input += synapse0x2e29830();
   input += synapse0x2e29870();
   input += synapse0x304f770();
   input += synapse0x304f7b0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3066b40() {
   double input = input0x3066b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x30665e0() {
   double input = -2.56732;
   input += synapse0x304f7f0();
   input += synapse0x3066770();
   input += synapse0x30667b0();
   input += synapse0x3067390();
   input += synapse0x30673d0();
   input += synapse0x3067410();
   input += synapse0x3067450();
   input += synapse0x3067490();
   input += synapse0x30674d0();
   input += synapse0x3067510();
   input += synapse0x3067550();
   input += synapse0x3067590();
   input += synapse0x30675d0();
   input += synapse0x3067610();
   input += synapse0x3067650();
   input += synapse0x3067690();
   input += synapse0x3060620();
   input += synapse0x3060660();
   input += synapse0x30606a0();
   input += synapse0x30677e0();
   input += synapse0x3067820();
   input += synapse0x3067860();
   input += synapse0x30678a0();
   input += synapse0x30678e0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x30665e0() {
   double input = input0x30665e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3067920() {
   double input = 0.821362;
   input += synapse0x3067c60();
   input += synapse0x3067ca0();
   input += synapse0x3067ce0();
   input += synapse0x3067d20();
   input += synapse0x3067d60();
   input += synapse0x3067da0();
   input += synapse0x3067de0();
   input += synapse0x3067e20();
   input += synapse0x3067e60();
   input += synapse0x3067ea0();
   input += synapse0x3067ee0();
   input += synapse0x3067f20();
   input += synapse0x3067f60();
   input += synapse0x3067fa0();
   input += synapse0x3067fe0();
   input += synapse0x3068020();
   input += synapse0x3067ab0();
   input += synapse0x3067af0();
   input += synapse0x3068170();
   input += synapse0x30681b0();
   input += synapse0x30681f0();
   input += synapse0x3068230();
   input += synapse0x3068270();
   input += synapse0x30682b0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3067920() {
   double input = input0x3067920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x30682f0() {
   double input = 0.0878225;
   input += synapse0x3068630();
   input += synapse0x3068670();
   input += synapse0x30686b0();
   input += synapse0x30686f0();
   input += synapse0x3068730();
   input += synapse0x3068770();
   input += synapse0x30687b0();
   input += synapse0x30687f0();
   input += synapse0x3068830();
   input += synapse0x2e29b80();
   input += synapse0x2e29bc0();
   input += synapse0x2e29c00();
   input += synapse0x2e29c40();
   input += synapse0x2e29c80();
   input += synapse0x2e29cc0();
   input += synapse0x2e29d00();
   input += synapse0x3068480();
   input += synapse0x30684c0();
   input += synapse0x2e29e50();
   input += synapse0x2e29e90();
   input += synapse0x2e29ed0();
   input += synapse0x2e29f10();
   input += synapse0x2e29f50();
   input += synapse0x3069080();
   return input;
}

double NNfunction-ss_uRuR::neuron0x30682f0() {
   double input = input0x30682f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x30690c0() {
   double input = 1.26318;
   input += synapse0x3069400();
   input += synapse0x3069440();
   input += synapse0x3069480();
   input += synapse0x30694c0();
   input += synapse0x3069500();
   input += synapse0x3069540();
   input += synapse0x3069580();
   input += synapse0x30695c0();
   input += synapse0x3069600();
   input += synapse0x3069640();
   input += synapse0x3069680();
   input += synapse0x30696c0();
   input += synapse0x3069700();
   input += synapse0x3069740();
   input += synapse0x3069780();
   input += synapse0x30697c0();
   input += synapse0x3069250();
   input += synapse0x3069290();
   input += synapse0x3069910();
   input += synapse0x3069950();
   input += synapse0x3069990();
   input += synapse0x30699d0();
   input += synapse0x3069a10();
   input += synapse0x3069a50();
   return input;
}

double NNfunction-ss_uRuR::neuron0x30690c0() {
   double input = input0x30690c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3069a90() {
   double input = 2.21138;
   input += synapse0x3069dd0();
   input += synapse0x3069e10();
   input += synapse0x3069e50();
   input += synapse0x3069e90();
   input += synapse0x3069ed0();
   input += synapse0x3069f10();
   input += synapse0x3069f50();
   input += synapse0x3069f90();
   input += synapse0x3069fd0();
   input += synapse0x306a010();
   input += synapse0x306a050();
   input += synapse0x306a090();
   input += synapse0x306a0d0();
   input += synapse0x306a110();
   input += synapse0x306a150();
   input += synapse0x306a190();
   input += synapse0x3069c20();
   input += synapse0x3069c60();
   input += synapse0x306a2e0();
   input += synapse0x306a320();
   input += synapse0x306a360();
   input += synapse0x306a3a0();
   input += synapse0x306a3e0();
   input += synapse0x306a420();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3069a90() {
   double input = input0x3069a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x306a460() {
   double input = -1.13491;
   input += synapse0x3063f30();
   input += synapse0x3063f70();
   input += synapse0x3063fb0();
   input += synapse0x3063ff0();
   input += synapse0x306a9b0();
   input += synapse0x306a9f0();
   input += synapse0x306aa30();
   input += synapse0x306aa70();
   input += synapse0x306aab0();
   input += synapse0x306aaf0();
   input += synapse0x306ab30();
   input += synapse0x306ab70();
   input += synapse0x306abb0();
   input += synapse0x306abf0();
   input += synapse0x306ac30();
   input += synapse0x306ac70();
   input += synapse0x306a5f0();
   input += synapse0x306a630();
   input += synapse0x306adc0();
   input += synapse0x306ae00();
   input += synapse0x306ae40();
   input += synapse0x306ae80();
   input += synapse0x306aec0();
   input += synapse0x306af00();
   return input;
}

double NNfunction-ss_uRuR::neuron0x306a460() {
   double input = input0x306a460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x306af40() {
   double input = 1.2372;
   input += synapse0x306b280();
   input += synapse0x306b2c0();
   input += synapse0x306b300();
   input += synapse0x306b340();
   input += synapse0x306b380();
   input += synapse0x306b3c0();
   input += synapse0x306b400();
   input += synapse0x306b440();
   input += synapse0x306b480();
   input += synapse0x306b4c0();
   input += synapse0x306b500();
   input += synapse0x306b540();
   input += synapse0x306b580();
   input += synapse0x306b5c0();
   input += synapse0x306b600();
   input += synapse0x306b640();
   input += synapse0x306b0d0();
   input += synapse0x306b110();
   input += synapse0x306b790();
   input += synapse0x306b7d0();
   input += synapse0x306b810();
   input += synapse0x306b850();
   input += synapse0x306b890();
   input += synapse0x306b8d0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x306af40() {
   double input = input0x306af40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x306b910() {
   double input = 3.36187;
   input += synapse0x306bc50();
   input += synapse0x306bc90();
   input += synapse0x306bcd0();
   input += synapse0x306bd10();
   input += synapse0x306bd50();
   input += synapse0x306bd90();
   input += synapse0x306bdd0();
   input += synapse0x306be10();
   input += synapse0x306be50();
   input += synapse0x306be90();
   input += synapse0x306bed0();
   input += synapse0x306bf10();
   input += synapse0x306bf50();
   input += synapse0x306bf90();
   input += synapse0x306bfd0();
   input += synapse0x306c010();
   input += synapse0x306baa0();
   input += synapse0x306bae0();
   input += synapse0x3068870();
   input += synapse0x30688b0();
   input += synapse0x30688f0();
   input += synapse0x3068930();
   input += synapse0x3068970();
   input += synapse0x30689b0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x306b910() {
   double input = input0x306b910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x30689f0() {
   double input = 0.708966;
   input += synapse0x3068d30();
   input += synapse0x3068d70();
   input += synapse0x3068db0();
   input += synapse0x3068df0();
   input += synapse0x3068e30();
   input += synapse0x3068e70();
   input += synapse0x3068eb0();
   input += synapse0x3068ef0();
   input += synapse0x3068f30();
   input += synapse0x3068f70();
   input += synapse0x3068fb0();
   input += synapse0x3068ff0();
   input += synapse0x3069030();
   input += synapse0x306d170();
   input += synapse0x306d1b0();
   input += synapse0x306d1f0();
   input += synapse0x3068b80();
   input += synapse0x3068bc0();
   input += synapse0x306d340();
   input += synapse0x306d380();
   input += synapse0x306d3c0();
   input += synapse0x306d400();
   input += synapse0x306d440();
   input += synapse0x306d480();
   return input;
}

double NNfunction-ss_uRuR::neuron0x30689f0() {
   double input = input0x30689f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x306d4c0() {
   double input = -0.659685;
   input += synapse0x306d800();
   input += synapse0x306d840();
   input += synapse0x306d880();
   input += synapse0x306d8c0();
   input += synapse0x306d900();
   input += synapse0x306d940();
   input += synapse0x306d980();
   input += synapse0x306d9c0();
   input += synapse0x306da00();
   input += synapse0x306da40();
   input += synapse0x306da80();
   input += synapse0x306dac0();
   input += synapse0x306db00();
   input += synapse0x306db40();
   input += synapse0x306db80();
   input += synapse0x306dbc0();
   input += synapse0x306d650();
   input += synapse0x306d690();
   input += synapse0x306dd10();
   input += synapse0x306dd50();
   input += synapse0x306dd90();
   input += synapse0x306ddd0();
   input += synapse0x306de10();
   input += synapse0x306de50();
   return input;
}

double NNfunction-ss_uRuR::neuron0x306d4c0() {
   double input = input0x306d4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x306de90() {
   double input = 2.08084;
   input += synapse0x306e1d0();
   input += synapse0x306e210();
   input += synapse0x306e250();
   input += synapse0x306e290();
   input += synapse0x306e2d0();
   input += synapse0x306e310();
   input += synapse0x306e350();
   input += synapse0x306e390();
   input += synapse0x306e3d0();
   input += synapse0x306e410();
   input += synapse0x306e450();
   input += synapse0x306e490();
   input += synapse0x306e4d0();
   input += synapse0x306e510();
   input += synapse0x306e550();
   input += synapse0x306e590();
   input += synapse0x306e020();
   input += synapse0x306e060();
   input += synapse0x306e6e0();
   input += synapse0x306e720();
   input += synapse0x306e760();
   input += synapse0x306e7a0();
   input += synapse0x306e7e0();
   input += synapse0x306e820();
   return input;
}

double NNfunction-ss_uRuR::neuron0x306de90() {
   double input = input0x306de90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x306e860() {
   double input = 1.29674;
   input += synapse0x306eba0();
   input += synapse0x306ebe0();
   input += synapse0x306ec20();
   input += synapse0x306ec60();
   input += synapse0x306eca0();
   input += synapse0x306ece0();
   input += synapse0x306ed20();
   input += synapse0x306ed60();
   input += synapse0x306eda0();
   input += synapse0x306ede0();
   input += synapse0x306ee20();
   input += synapse0x306ee60();
   input += synapse0x306eea0();
   input += synapse0x306eee0();
   input += synapse0x306ef20();
   input += synapse0x306ef60();
   input += synapse0x306e9f0();
   input += synapse0x306ea30();
   input += synapse0x306f0b0();
   input += synapse0x306f0f0();
   input += synapse0x306f130();
   input += synapse0x306f170();
   input += synapse0x306f1b0();
   input += synapse0x306f1f0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x306e860() {
   double input = input0x306e860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x306f230() {
   double input = 0.30712;
   input += synapse0x306f570();
   input += synapse0x3060900();
   input += synapse0x3060940();
   input += synapse0x3060c40();
   input += synapse0x3060c80();
   input += synapse0x3060f80();
   input += synapse0x3060fc0();
   input += synapse0x30612c0();
   input += synapse0x3061300();
   input += synapse0x3061600();
   input += synapse0x3061640();
   input += synapse0x3061940();
   input += synapse0x3061980();
   input += synapse0x3061c80();
   input += synapse0x3061cc0();
   input += synapse0x3061fc0();
   input += synapse0x3062000();
   input += synapse0x3062300();
   input += synapse0x3062340();
   input += synapse0x3062640();
   input += synapse0x3062680();
   input += synapse0x3062980();
   input += synapse0x30629c0();
   input += synapse0x3062cc0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x306f230() {
   double input = input0x306f230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3071040() {
   double input = 0.89413;
   input += synapse0x3062d00();
   input += synapse0x30639c0();
   input += synapse0x3063a00();
   input += synapse0x306f3c0();
   input += synapse0x306f400();
   input += synapse0x3063d00();
   input += synapse0x3063d40();
   input += synapse0x2e1b7a0();
   input += synapse0x2e1b7e0();
   input += synapse0x3064480();
   input += synapse0x30644c0();
   input += synapse0x30647c0();
   input += synapse0x3064800();
   input += synapse0x3064b00();
   input += synapse0x3064b40();
   input += synapse0x3064e40();
   input += synapse0x3064e80();
   input += synapse0x3065180();
   input += synapse0x30651c0();
   input += synapse0x30654c0();
   input += synapse0x3065500();
   input += synapse0x3063000();
   input += synapse0x3063040();
   input += synapse0x30712e0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3071040() {
   double input = input0x3071040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3071320() {
   double input = -0.635605;
   input += synapse0x3071660();
   input += synapse0x30716a0();
   input += synapse0x30716e0();
   input += synapse0x3071720();
   input += synapse0x3071760();
   input += synapse0x30717a0();
   input += synapse0x30717e0();
   input += synapse0x3071820();
   input += synapse0x3071860();
   input += synapse0x30718a0();
   input += synapse0x30718e0();
   input += synapse0x3071920();
   input += synapse0x3071960();
   input += synapse0x30719a0();
   input += synapse0x30719e0();
   input += synapse0x3071a20();
   input += synapse0x30714b0();
   input += synapse0x30714f0();
   input += synapse0x3071b70();
   input += synapse0x3071bb0();
   input += synapse0x3071bf0();
   input += synapse0x3071c30();
   input += synapse0x3071c70();
   input += synapse0x3071cb0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3071320() {
   double input = input0x3071320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3071cf0() {
   double input = -1.3528;
   input += synapse0x3072030();
   input += synapse0x3072070();
   input += synapse0x30720b0();
   input += synapse0x30720f0();
   input += synapse0x3072130();
   input += synapse0x3072170();
   input += synapse0x30721b0();
   input += synapse0x30721f0();
   input += synapse0x3072230();
   input += synapse0x3072270();
   input += synapse0x30722b0();
   input += synapse0x30722f0();
   input += synapse0x3072330();
   input += synapse0x3072370();
   input += synapse0x30723b0();
   input += synapse0x30723f0();
   input += synapse0x3071e80();
   input += synapse0x3071ec0();
   input += synapse0x3072540();
   input += synapse0x3072580();
   input += synapse0x30725c0();
   input += synapse0x3072600();
   input += synapse0x3072640();
   input += synapse0x3072680();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3071cf0() {
   double input = input0x3071cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x30726c0() {
   double input = -1.50109;
   input += synapse0x3072a00();
   input += synapse0x3072a40();
   input += synapse0x3072a80();
   input += synapse0x3072ac0();
   input += synapse0x3072b00();
   input += synapse0x3072b40();
   input += synapse0x3072b80();
   input += synapse0x3072bc0();
   input += synapse0x3072c00();
   input += synapse0x3072c40();
   input += synapse0x3072c80();
   input += synapse0x3072cc0();
   input += synapse0x3072d00();
   input += synapse0x3072d40();
   input += synapse0x3072d80();
   input += synapse0x3072dc0();
   input += synapse0x3072850();
   input += synapse0x3072890();
   input += synapse0x3072f10();
   input += synapse0x3072f50();
   input += synapse0x3072f90();
   input += synapse0x3072fd0();
   input += synapse0x3073010();
   input += synapse0x3073050();
   return input;
}

double NNfunction-ss_uRuR::neuron0x30726c0() {
   double input = input0x30726c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3073090() {
   double input = -1.55379;
   input += synapse0x30733d0();
   input += synapse0x3073410();
   input += synapse0x3073450();
   input += synapse0x3073490();
   input += synapse0x30734d0();
   input += synapse0x3073510();
   input += synapse0x3073550();
   input += synapse0x3073590();
   input += synapse0x30735d0();
   input += synapse0x3073610();
   input += synapse0x3073650();
   input += synapse0x3073690();
   input += synapse0x30736d0();
   input += synapse0x3073710();
   input += synapse0x3073750();
   input += synapse0x3073790();
   input += synapse0x3073220();
   input += synapse0x3073260();
   input += synapse0x30738e0();
   input += synapse0x3073920();
   input += synapse0x3073960();
   input += synapse0x30739a0();
   input += synapse0x30739e0();
   input += synapse0x3073a20();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3073090() {
   double input = input0x3073090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3073a60() {
   double input = -1.53297;
   input += synapse0x3073da0();
   input += synapse0x3073de0();
   input += synapse0x3073e20();
   input += synapse0x3073e60();
   input += synapse0x3073ea0();
   input += synapse0x3073ee0();
   input += synapse0x3073f20();
   input += synapse0x3073f60();
   input += synapse0x3073fa0();
   input += synapse0x306c160();
   input += synapse0x306c1a0();
   input += synapse0x306c1e0();
   input += synapse0x306c220();
   input += synapse0x306c260();
   input += synapse0x306c2a0();
   input += synapse0x306c2e0();
   input += synapse0x3073bf0();
   input += synapse0x3073c30();
   input += synapse0x306c430();
   input += synapse0x306c470();
   input += synapse0x306c4b0();
   input += synapse0x306c4f0();
   input += synapse0x306c530();
   input += synapse0x306c570();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3073a60() {
   double input = input0x3073a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x306c5b0() {
   double input = -0.139444;
   input += synapse0x306c8f0();
   input += synapse0x306c930();
   input += synapse0x306c970();
   input += synapse0x306c9b0();
   input += synapse0x306c9f0();
   input += synapse0x306ca30();
   input += synapse0x306ca70();
   input += synapse0x306cab0();
   input += synapse0x306caf0();
   input += synapse0x306cb30();
   input += synapse0x306cb70();
   input += synapse0x306cbb0();
   input += synapse0x306cbf0();
   input += synapse0x306cc30();
   input += synapse0x306cc70();
   input += synapse0x306ccb0();
   input += synapse0x306c740();
   input += synapse0x306c780();
   input += synapse0x306ce00();
   input += synapse0x306ce40();
   input += synapse0x306ce80();
   input += synapse0x306cec0();
   input += synapse0x306cf00();
   input += synapse0x306cf40();
   return input;
}

double NNfunction-ss_uRuR::neuron0x306c5b0() {
   double input = input0x306c5b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x306cf80() {
   double input = -0.967104;
   input += synapse0x306d110();
   input += synapse0x30761a0();
   input += synapse0x30761e0();
   input += synapse0x3076220();
   input += synapse0x3076260();
   input += synapse0x30762a0();
   input += synapse0x30762e0();
   input += synapse0x3076320();
   input += synapse0x3076360();
   input += synapse0x30763a0();
   input += synapse0x30763e0();
   input += synapse0x3076420();
   input += synapse0x3076460();
   input += synapse0x30764a0();
   input += synapse0x30764e0();
   input += synapse0x3076520();
   input += synapse0x3075ff0();
   input += synapse0x3076030();
   input += synapse0x3076670();
   input += synapse0x30766b0();
   input += synapse0x30766f0();
   input += synapse0x3076730();
   input += synapse0x3076770();
   input += synapse0x30767b0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x306cf80() {
   double input = input0x306cf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x30767f0() {
   double input = 2.3122;
   input += synapse0x3076b30();
   input += synapse0x3076b70();
   input += synapse0x3076bb0();
   input += synapse0x3076bf0();
   input += synapse0x3076c30();
   input += synapse0x3076c70();
   input += synapse0x3076cb0();
   input += synapse0x3076cf0();
   input += synapse0x3076d30();
   input += synapse0x3076d70();
   input += synapse0x3076db0();
   input += synapse0x3076df0();
   input += synapse0x3076e30();
   input += synapse0x3076e70();
   input += synapse0x3076eb0();
   input += synapse0x3076ef0();
   input += synapse0x3076980();
   input += synapse0x30769c0();
   input += synapse0x3077040();
   input += synapse0x3077080();
   input += synapse0x30770c0();
   input += synapse0x3077100();
   input += synapse0x3077140();
   input += synapse0x3077180();
   return input;
}

double NNfunction-ss_uRuR::neuron0x30767f0() {
   double input = input0x30767f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x30771c0() {
   double input = -0.996593;
   input += synapse0x3077500();
   input += synapse0x3077540();
   input += synapse0x3077580();
   input += synapse0x30775c0();
   input += synapse0x3077600();
   input += synapse0x3077640();
   input += synapse0x3077680();
   input += synapse0x30776c0();
   input += synapse0x3077700();
   input += synapse0x3077740();
   input += synapse0x3077780();
   input += synapse0x30777c0();
   input += synapse0x3077800();
   input += synapse0x3077840();
   input += synapse0x3077880();
   input += synapse0x30778c0();
   input += synapse0x3077350();
   input += synapse0x3077390();
   input += synapse0x3077a10();
   input += synapse0x3077a50();
   input += synapse0x3077a90();
   input += synapse0x3077ad0();
   input += synapse0x3077b10();
   input += synapse0x3077b50();
   return input;
}

double NNfunction-ss_uRuR::neuron0x30771c0() {
   double input = input0x30771c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3077b90() {
   double input = -2.35752;
   input += synapse0x3077ed0();
   input += synapse0x3077f10();
   input += synapse0x3077f50();
   input += synapse0x3077f90();
   input += synapse0x3077fd0();
   input += synapse0x3078010();
   input += synapse0x3078050();
   input += synapse0x3078090();
   input += synapse0x30780d0();
   input += synapse0x3078110();
   input += synapse0x3078150();
   input += synapse0x3078190();
   input += synapse0x30781d0();
   input += synapse0x3078210();
   input += synapse0x3078250();
   input += synapse0x3078290();
   input += synapse0x3077d20();
   input += synapse0x3077d60();
   input += synapse0x30783e0();
   input += synapse0x3078420();
   input += synapse0x3078460();
   input += synapse0x30784a0();
   input += synapse0x30784e0();
   input += synapse0x3078520();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3077b90() {
   double input = input0x3077b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3078560() {
   double input = 0.0299981;
   input += synapse0x30788a0();
   input += synapse0x30788e0();
   input += synapse0x3078920();
   input += synapse0x3078960();
   input += synapse0x30789a0();
   input += synapse0x30789e0();
   input += synapse0x3078a20();
   input += synapse0x3078a60();
   input += synapse0x3078aa0();
   input += synapse0x3078ae0();
   input += synapse0x3078b20();
   input += synapse0x3078b60();
   input += synapse0x3078ba0();
   input += synapse0x3078be0();
   input += synapse0x3078c20();
   input += synapse0x3078c60();
   input += synapse0x30786f0();
   input += synapse0x3078730();
   input += synapse0x3078db0();
   input += synapse0x3078df0();
   input += synapse0x3078e30();
   input += synapse0x3078e70();
   input += synapse0x3078eb0();
   input += synapse0x3078ef0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3078560() {
   double input = input0x3078560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3078f30() {
   double input = 2.31072;
   input += synapse0x3079270();
   input += synapse0x30792b0();
   input += synapse0x30792f0();
   input += synapse0x3079330();
   input += synapse0x3079370();
   input += synapse0x30793b0();
   input += synapse0x30793f0();
   input += synapse0x3079430();
   input += synapse0x3079470();
   input += synapse0x30794b0();
   input += synapse0x30794f0();
   input += synapse0x3079530();
   input += synapse0x3079570();
   input += synapse0x30795b0();
   input += synapse0x30795f0();
   input += synapse0x3079630();
   input += synapse0x30790c0();
   input += synapse0x3079100();
   input += synapse0x3079780();
   input += synapse0x30797c0();
   input += synapse0x3079800();
   input += synapse0x3079840();
   input += synapse0x3079880();
   input += synapse0x30798c0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3078f30() {
   double input = input0x3078f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3079900() {
   double input = 0.198599;
   input += synapse0x3079c40();
   input += synapse0x3079c80();
   input += synapse0x3079cc0();
   input += synapse0x3079d00();
   input += synapse0x3079d40();
   input += synapse0x3079d80();
   input += synapse0x3079dc0();
   input += synapse0x3079e00();
   input += synapse0x3079e40();
   input += synapse0x3079e80();
   input += synapse0x3079ec0();
   input += synapse0x3079f00();
   input += synapse0x3079f40();
   input += synapse0x3079f80();
   input += synapse0x3079fc0();
   input += synapse0x307a000();
   input += synapse0x3079a90();
   input += synapse0x3079ad0();
   input += synapse0x307a150();
   input += synapse0x307a190();
   input += synapse0x307a1d0();
   input += synapse0x307a210();
   input += synapse0x307a250();
   input += synapse0x307a290();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3079900() {
   double input = input0x3079900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x307a2d0() {
   double input = -0.667315;
   input += synapse0x307a610();
   input += synapse0x307a650();
   input += synapse0x307a690();
   input += synapse0x307a6d0();
   input += synapse0x307a710();
   input += synapse0x307a750();
   input += synapse0x307a790();
   input += synapse0x307a7d0();
   input += synapse0x307a810();
   input += synapse0x307a850();
   input += synapse0x307a890();
   input += synapse0x307a8d0();
   input += synapse0x307a910();
   input += synapse0x307a950();
   input += synapse0x307a990();
   input += synapse0x307a9d0();
   input += synapse0x307a460();
   input += synapse0x307a4a0();
   input += synapse0x307ab20();
   input += synapse0x307ab60();
   input += synapse0x307aba0();
   input += synapse0x307abe0();
   input += synapse0x307ac20();
   input += synapse0x307ac60();
   return input;
}

double NNfunction-ss_uRuR::neuron0x307a2d0() {
   double input = input0x307a2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x307aca0() {
   double input = -0.0348007;
   input += synapse0x307afe0();
   input += synapse0x306f5b0();
   input += synapse0x306f5f0();
   input += synapse0x306f630();
   input += synapse0x306f880();
   input += synapse0x306f8c0();
   input += synapse0x306f900();
   input += synapse0x306fb50();
   input += synapse0x306fb90();
   input += synapse0x306fde0();
   input += synapse0x306fe20();
   input += synapse0x306fe60();
   input += synapse0x30700b0();
   input += synapse0x30700f0();
   input += synapse0x3070340();
   input += synapse0x3070380();
   input += synapse0x307ae30();
   input += synapse0x307ae70();
   input += synapse0x30704d0();
   input += synapse0x30709e0();
   input += synapse0x3070a20();
   input += synapse0x3070a60();
   input += synapse0x3070cb0();
   input += synapse0x3070cf0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x307aca0() {
   double input = input0x307aca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3070d30() {
   double input = 2.03861;
   input += synapse0x30705a0();
   input += synapse0x30705e0();
   input += synapse0x3070620();
   input += synapse0x3070660();
   input += synapse0x3070fe0();
   input += synapse0x307d330();
   input += synapse0x307d370();
   input += synapse0x307d3b0();
   input += synapse0x307d3f0();
   input += synapse0x307d430();
   input += synapse0x307d470();
   input += synapse0x307d4b0();
   input += synapse0x307d4f0();
   input += synapse0x307d530();
   input += synapse0x307d570();
   input += synapse0x307d5b0();
   input += synapse0x3070ec0();
   input += synapse0x3070f00();
   input += synapse0x307d700();
   input += synapse0x307d740();
   input += synapse0x307d780();
   input += synapse0x307d7c0();
   input += synapse0x307d800();
   input += synapse0x307d840();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3070d30() {
   double input = input0x3070d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x307d880() {
   double input = -1.47157;
   input += synapse0x307dbc0();
   input += synapse0x307dc00();
   input += synapse0x307dc40();
   input += synapse0x307dc80();
   input += synapse0x307dcc0();
   input += synapse0x307dd00();
   input += synapse0x307dd40();
   input += synapse0x307dd80();
   input += synapse0x307ddc0();
   input += synapse0x307de00();
   input += synapse0x307de40();
   input += synapse0x307de80();
   input += synapse0x307dec0();
   input += synapse0x307df00();
   input += synapse0x307df40();
   input += synapse0x307df80();
   input += synapse0x307da10();
   input += synapse0x307da50();
   input += synapse0x307e0d0();
   input += synapse0x307e110();
   input += synapse0x307e150();
   input += synapse0x307e190();
   input += synapse0x307e1d0();
   input += synapse0x307e210();
   return input;
}

double NNfunction-ss_uRuR::neuron0x307d880() {
   double input = input0x307d880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x307e250() {
   double input = -0.763703;
   input += synapse0x307e590();
   input += synapse0x307e5d0();
   input += synapse0x307e610();
   input += synapse0x307e650();
   input += synapse0x307e690();
   input += synapse0x307e6d0();
   input += synapse0x307e710();
   input += synapse0x307e750();
   input += synapse0x307e790();
   input += synapse0x307e7d0();
   input += synapse0x307e810();
   input += synapse0x307e850();
   input += synapse0x307e890();
   input += synapse0x307e8d0();
   input += synapse0x307e910();
   input += synapse0x307e950();
   input += synapse0x307e3e0();
   input += synapse0x307e420();
   input += synapse0x307eaa0();
   input += synapse0x307eae0();
   input += synapse0x307eb20();
   input += synapse0x307eb60();
   input += synapse0x307eba0();
   input += synapse0x307ebe0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x307e250() {
   double input = input0x307e250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x307ec20() {
   double input = 1.1344;
   input += synapse0x307ef60();
   input += synapse0x307efa0();
   input += synapse0x307efe0();
   input += synapse0x307f020();
   input += synapse0x307f060();
   input += synapse0x307f0a0();
   input += synapse0x307f0e0();
   input += synapse0x307f120();
   input += synapse0x307f160();
   input += synapse0x307f1a0();
   input += synapse0x307f1e0();
   input += synapse0x307f220();
   input += synapse0x307f260();
   input += synapse0x307f2a0();
   input += synapse0x307f2e0();
   input += synapse0x307f320();
   input += synapse0x307edb0();
   input += synapse0x307edf0();
   input += synapse0x307f470();
   input += synapse0x307f4b0();
   input += synapse0x307f4f0();
   input += synapse0x307f530();
   input += synapse0x307f570();
   input += synapse0x307f5b0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x307ec20() {
   double input = input0x307ec20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x307f5f0() {
   double input = 0.432672;
   input += synapse0x307f930();
   input += synapse0x307f970();
   input += synapse0x307f9b0();
   input += synapse0x307f9f0();
   input += synapse0x307fa30();
   input += synapse0x307fa70();
   input += synapse0x307fab0();
   input += synapse0x307faf0();
   input += synapse0x307fb30();
   input += synapse0x307fb70();
   input += synapse0x307fbb0();
   input += synapse0x307fbf0();
   input += synapse0x307fc30();
   input += synapse0x307fc70();
   input += synapse0x307fcb0();
   input += synapse0x307fcf0();
   input += synapse0x307f780();
   input += synapse0x307f7c0();
   input += synapse0x307fe40();
   input += synapse0x307fe80();
   input += synapse0x307fec0();
   input += synapse0x307ff00();
   input += synapse0x307ff40();
   input += synapse0x307ff80();
   return input;
}

double NNfunction-ss_uRuR::neuron0x307f5f0() {
   double input = input0x307f5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x307ffc0() {
   double input = 4.20359;
   input += synapse0x3080300();
   input += synapse0x3080340();
   input += synapse0x3080380();
   input += synapse0x30803c0();
   input += synapse0x3080400();
   input += synapse0x3080440();
   input += synapse0x3080480();
   input += synapse0x30804c0();
   input += synapse0x3080500();
   input += synapse0x3080540();
   input += synapse0x3080580();
   input += synapse0x30805c0();
   input += synapse0x3080600();
   input += synapse0x3080640();
   input += synapse0x3080680();
   input += synapse0x30806c0();
   input += synapse0x3080150();
   input += synapse0x3080190();
   input += synapse0x3080810();
   input += synapse0x3080850();
   input += synapse0x3080890();
   input += synapse0x30808d0();
   input += synapse0x3080910();
   input += synapse0x3080950();
   return input;
}

double NNfunction-ss_uRuR::neuron0x307ffc0() {
   double input = input0x307ffc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3080990() {
   double input = 1.41417;
   input += synapse0x3080cd0();
   input += synapse0x3080d10();
   input += synapse0x3080d50();
   input += synapse0x3080d90();
   input += synapse0x3080dd0();
   input += synapse0x3080e10();
   input += synapse0x3080e50();
   input += synapse0x3080e90();
   input += synapse0x3080ed0();
   input += synapse0x3080f10();
   input += synapse0x3080f50();
   input += synapse0x3080f90();
   input += synapse0x3080fd0();
   input += synapse0x3081010();
   input += synapse0x3081050();
   input += synapse0x3081090();
   input += synapse0x3080b20();
   input += synapse0x3080b60();
   input += synapse0x30811e0();
   input += synapse0x3081220();
   input += synapse0x3081260();
   input += synapse0x30812a0();
   input += synapse0x30812e0();
   input += synapse0x3081320();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3080990() {
   double input = input0x3080990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3081360() {
   double input = 0.0956694;
   input += synapse0x30816a0();
   input += synapse0x30816e0();
   input += synapse0x3081720();
   input += synapse0x3081760();
   input += synapse0x30817a0();
   input += synapse0x30817e0();
   input += synapse0x3081820();
   input += synapse0x3081860();
   input += synapse0x30818a0();
   input += synapse0x30818e0();
   input += synapse0x3081920();
   input += synapse0x3081960();
   input += synapse0x30819a0();
   input += synapse0x30819e0();
   input += synapse0x3081a20();
   input += synapse0x3081a60();
   input += synapse0x30814f0();
   input += synapse0x3081530();
   input += synapse0x3081bb0();
   input += synapse0x3081bf0();
   input += synapse0x3081c30();
   input += synapse0x3081c70();
   input += synapse0x3081cb0();
   input += synapse0x3081cf0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3081360() {
   double input = input0x3081360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3081d30() {
   double input = 0.180612;
   input += synapse0x306a7a0();
   input += synapse0x306a7e0();
   input += synapse0x306a820();
   input += synapse0x306a860();
   input += synapse0x306a8a0();
   input += synapse0x306a8e0();
   input += synapse0x306a920();
   input += synapse0x306a960();
   input += synapse0x3082480();
   input += synapse0x30824c0();
   input += synapse0x3082500();
   input += synapse0x3082540();
   input += synapse0x3082580();
   input += synapse0x30825c0();
   input += synapse0x3082600();
   input += synapse0x3082640();
   input += synapse0x3081ec0();
   input += synapse0x3081f00();
   input += synapse0x3082790();
   input += synapse0x30827d0();
   input += synapse0x3082810();
   input += synapse0x3082850();
   input += synapse0x3082890();
   input += synapse0x30828d0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3081d30() {
   double input = input0x3081d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3082910() {
   double input = 0.500537;
   input += synapse0x3082c50();
   input += synapse0x3082c90();
   input += synapse0x3082cd0();
   input += synapse0x3082d10();
   input += synapse0x3082d50();
   input += synapse0x3082d90();
   input += synapse0x3082dd0();
   input += synapse0x3082e10();
   input += synapse0x3082e50();
   input += synapse0x3082e90();
   input += synapse0x3082ed0();
   input += synapse0x3082f10();
   input += synapse0x3082f50();
   input += synapse0x3082f90();
   input += synapse0x3082fd0();
   input += synapse0x3083010();
   input += synapse0x3082aa0();
   input += synapse0x3082ae0();
   input += synapse0x3083160();
   input += synapse0x30831a0();
   input += synapse0x30831e0();
   input += synapse0x3083220();
   input += synapse0x3083260();
   input += synapse0x30832a0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3082910() {
   double input = input0x3082910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x30832e0() {
   double input = -0.831955;
   input += synapse0x3083620();
   input += synapse0x3083660();
   input += synapse0x30836a0();
   input += synapse0x30836e0();
   input += synapse0x3083720();
   input += synapse0x3083760();
   input += synapse0x30837a0();
   input += synapse0x30837e0();
   input += synapse0x3083820();
   input += synapse0x3083860();
   input += synapse0x30838a0();
   input += synapse0x30838e0();
   input += synapse0x3083920();
   input += synapse0x3083960();
   input += synapse0x30839a0();
   input += synapse0x30839e0();
   input += synapse0x3083470();
   input += synapse0x30834b0();
   input += synapse0x3073fe0();
   input += synapse0x3074020();
   input += synapse0x3074060();
   input += synapse0x30740a0();
   input += synapse0x30740e0();
   input += synapse0x3074120();
   return input;
}

double NNfunction-ss_uRuR::neuron0x30832e0() {
   double input = input0x30832e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3074160() {
   double input = -1.06445;
   input += synapse0x30744a0();
   input += synapse0x30744e0();
   input += synapse0x3074520();
   input += synapse0x3074560();
   input += synapse0x30745a0();
   input += synapse0x30745e0();
   input += synapse0x3074620();
   input += synapse0x3074660();
   input += synapse0x30746a0();
   input += synapse0x30746e0();
   input += synapse0x3074720();
   input += synapse0x3074760();
   input += synapse0x30747a0();
   input += synapse0x30747e0();
   input += synapse0x3074820();
   input += synapse0x3074860();
   input += synapse0x30742f0();
   input += synapse0x3074330();
   input += synapse0x30749b0();
   input += synapse0x30749f0();
   input += synapse0x3074a30();
   input += synapse0x3074a70();
   input += synapse0x3074ab0();
   input += synapse0x3074af0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3074160() {
   double input = input0x3074160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3074b30() {
   double input = 4.617;
   input += synapse0x3074e70();
   input += synapse0x3074eb0();
   input += synapse0x3074ef0();
   input += synapse0x3074f30();
   input += synapse0x3074f70();
   input += synapse0x3074fb0();
   input += synapse0x3074ff0();
   input += synapse0x3075030();
   input += synapse0x3075070();
   input += synapse0x30750b0();
   input += synapse0x30750f0();
   input += synapse0x3075130();
   input += synapse0x3075170();
   input += synapse0x30751b0();
   input += synapse0x30751f0();
   input += synapse0x3075230();
   input += synapse0x3074cc0();
   input += synapse0x3074d00();
   input += synapse0x3075380();
   input += synapse0x30753c0();
   input += synapse0x3075400();
   input += synapse0x3075440();
   input += synapse0x3075480();
   input += synapse0x30754c0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3074b30() {
   double input = input0x3074b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3075500() {
   double input = -1.64828;
   input += synapse0x3075840();
   input += synapse0x3075880();
   input += synapse0x30758c0();
   input += synapse0x3075900();
   input += synapse0x3075940();
   input += synapse0x3075980();
   input += synapse0x30759c0();
   input += synapse0x3075a00();
   input += synapse0x3075a40();
   input += synapse0x3075a80();
   input += synapse0x3075ac0();
   input += synapse0x3075b00();
   input += synapse0x3075b40();
   input += synapse0x3075b80();
   input += synapse0x3075bc0();
   input += synapse0x3075c00();
   input += synapse0x3075690();
   input += synapse0x30756d0();
   input += synapse0x3075d50();
   input += synapse0x3075d90();
   input += synapse0x3075dd0();
   input += synapse0x3075e10();
   input += synapse0x3075e50();
   input += synapse0x3075e90();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3075500() {
   double input = input0x3075500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3087b40() {
   double input = 0.818717;
   input += synapse0x3087d60();
   input += synapse0x3087da0();
   input += synapse0x3087de0();
   input += synapse0x3087e20();
   input += synapse0x3087e60();
   input += synapse0x3087ea0();
   input += synapse0x3087ee0();
   input += synapse0x3087f20();
   input += synapse0x3087f60();
   input += synapse0x3087fa0();
   input += synapse0x3087fe0();
   input += synapse0x3088020();
   input += synapse0x3088060();
   input += synapse0x30880a0();
   input += synapse0x30880e0();
   input += synapse0x3088120();
   input += synapse0x3075ed0();
   input += synapse0x3075f10();
   input += synapse0x3088270();
   input += synapse0x30882b0();
   input += synapse0x30882f0();
   input += synapse0x3088330();
   input += synapse0x3088370();
   input += synapse0x30883b0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3087b40() {
   double input = input0x3087b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x30883f0() {
   double input = 1.23282;
   input += synapse0x3088730();
   input += synapse0x3088770();
   input += synapse0x30887b0();
   input += synapse0x30887f0();
   input += synapse0x3088830();
   input += synapse0x3088870();
   input += synapse0x30888b0();
   input += synapse0x30888f0();
   input += synapse0x3088930();
   input += synapse0x3088970();
   input += synapse0x30889b0();
   input += synapse0x30889f0();
   input += synapse0x3088a30();
   input += synapse0x3088a70();
   input += synapse0x3088ab0();
   input += synapse0x3088af0();
   input += synapse0x3088580();
   input += synapse0x30885c0();
   input += synapse0x3088c40();
   input += synapse0x3088c80();
   input += synapse0x3088cc0();
   input += synapse0x3088d00();
   input += synapse0x3088d40();
   input += synapse0x3088d80();
   return input;
}

double NNfunction-ss_uRuR::neuron0x30883f0() {
   double input = input0x30883f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3088dc0() {
   double input = -0.110972;
   input += synapse0x3089100();
   input += synapse0x3089140();
   input += synapse0x3089180();
   input += synapse0x30891c0();
   input += synapse0x3089200();
   input += synapse0x3089240();
   input += synapse0x3089280();
   input += synapse0x30892c0();
   input += synapse0x3089300();
   input += synapse0x3089340();
   input += synapse0x3089380();
   input += synapse0x30893c0();
   input += synapse0x3089400();
   input += synapse0x3089440();
   input += synapse0x3089480();
   input += synapse0x30894c0();
   input += synapse0x3088f50();
   input += synapse0x3088f90();
   input += synapse0x3089610();
   input += synapse0x3089650();
   input += synapse0x3089690();
   input += synapse0x30896d0();
   input += synapse0x3089710();
   input += synapse0x3089750();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3088dc0() {
   double input = input0x3088dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3089790() {
   double input = -0.484541;
   input += synapse0x3089ad0();
   input += synapse0x3089b10();
   input += synapse0x3089b50();
   input += synapse0x3089b90();
   input += synapse0x3089bd0();
   input += synapse0x3089c10();
   input += synapse0x3089c50();
   input += synapse0x3089c90();
   input += synapse0x3089cd0();
   input += synapse0x3089d10();
   input += synapse0x3089d50();
   input += synapse0x3089d90();
   input += synapse0x3089dd0();
   input += synapse0x3089e10();
   input += synapse0x3089e50();
   input += synapse0x3089e90();
   input += synapse0x3089920();
   input += synapse0x3089960();
   input += synapse0x3089fe0();
   input += synapse0x308a020();
   input += synapse0x308a060();
   input += synapse0x308a0a0();
   input += synapse0x308a0e0();
   input += synapse0x308a120();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3089790() {
   double input = input0x3089790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3090990() {
   double input = -0.92852;
   input += synapse0x2e2a020();
   input += synapse0x2e2a060();
   input += synapse0x3067bd0();
   input += synapse0x3067c10();
   input += synapse0x30685a0();
   input += synapse0x30685e0();
   input += synapse0x3069370();
   input += synapse0x30693b0();
   input += synapse0x3069d40();
   input += synapse0x3069d80();
   input += synapse0x306a710();
   input += synapse0x306a750();
   input += synapse0x306b1f0();
   input += synapse0x306b230();
   input += synapse0x306bbc0();
   input += synapse0x306bc00();
   input += synapse0x3068ca0();
   input += synapse0x3068ce0();
   input += synapse0x306d770();
   input += synapse0x306d7b0();
   input += synapse0x306e140();
   input += synapse0x306e180();
   input += synapse0x306eb10();
   input += synapse0x306eb50();
   input += synapse0x306f4e0();
   input += synapse0x306f520();
   input += synapse0x3063680();
   input += synapse0x30636c0();
   input += synapse0x30715d0();
   input += synapse0x3071610();
   input += synapse0x3071fa0();
   input += synapse0x3071fe0();
   input += synapse0x3072970();
   input += synapse0x30729b0();
   input += synapse0x3073340();
   input += synapse0x3073380();
   input += synapse0x3073d10();
   input += synapse0x3073d50();
   input += synapse0x306c860();
   input += synapse0x306c8a0();
   input += synapse0x3076110();
   input += synapse0x3076150();
   input += synapse0x3076aa0();
   input += synapse0x3076ae0();
   input += synapse0x3077470();
   input += synapse0x30774b0();
   input += synapse0x3077e40();
   input += synapse0x3077e80();
   input += synapse0x3078810();
   input += synapse0x3078850();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3090990() {
   double input = input0x3090990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3090d30() {
   double input = -0.830603;
   input += synapse0x307af50();
   input += synapse0x307af90();
   input += synapse0x3070510();
   input += synapse0x3070550();
   input += synapse0x307db30();
   input += synapse0x307db70();
   input += synapse0x307e500();
   input += synapse0x307e540();
   input += synapse0x307eed0();
   input += synapse0x307ef10();
   input += synapse0x307f8a0();
   input += synapse0x307f8e0();
   input += synapse0x3080270();
   input += synapse0x30802b0();
   input += synapse0x3080c40();
   input += synapse0x3080c80();
   input += synapse0x3081610();
   input += synapse0x3081650();
   input += synapse0x3081fe0();
   input += synapse0x3082020();
   input += synapse0x3082bc0();
   input += synapse0x3082c00();
   input += synapse0x3083590();
   input += synapse0x30835d0();
   input += synapse0x3074410();
   input += synapse0x3074450();
   input += synapse0x3074de0();
   input += synapse0x3074e20();
   input += synapse0x30757b0();
   input += synapse0x30757f0();
   input += synapse0x3087cd0();
   input += synapse0x3087d10();
   input += synapse0x30886a0();
   input += synapse0x30886e0();
   input += synapse0x3089070();
   input += synapse0x30890b0();
   input += synapse0x3089a40();
   input += synapse0x3089a80();
   input += synapse0x3065930();
   input += synapse0x3065970();
   input += synapse0x30791e0();
   input += synapse0x3079220();
   input += synapse0x308a160();
   input += synapse0x308a1a0();
   input += synapse0x308a1e0();
   input += synapse0x308a220();
   input += synapse0x30910d0();
   input += synapse0x3091110();
   input += synapse0x3091150();
   input += synapse0x3091190();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3090d30() {
   double input = input0x3090d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x30911d0() {
   double input = -1.12646;
   input += synapse0x3091510();
   input += synapse0x3091550();
   input += synapse0x3091590();
   input += synapse0x30915d0();
   input += synapse0x3091610();
   input += synapse0x3091650();
   input += synapse0x3091690();
   input += synapse0x30916d0();
   input += synapse0x3091710();
   input += synapse0x3091750();
   input += synapse0x3091790();
   input += synapse0x30917d0();
   input += synapse0x3091810();
   input += synapse0x3091850();
   input += synapse0x3091890();
   input += synapse0x30918d0();
   input += synapse0x3091360();
   input += synapse0x30913a0();
   input += synapse0x3091a20();
   input += synapse0x3091a60();
   input += synapse0x3091aa0();
   input += synapse0x3091ae0();
   input += synapse0x3091b20();
   input += synapse0x3091b60();
   input += synapse0x3091ba0();
   input += synapse0x3091be0();
   input += synapse0x3091c20();
   input += synapse0x3091c60();
   input += synapse0x3091ca0();
   input += synapse0x3091ce0();
   input += synapse0x3091d20();
   input += synapse0x3091d60();
   input += synapse0x3091910();
   input += synapse0x3091950();
   input += synapse0x3091990();
   input += synapse0x30919d0();
   input += synapse0x3091fb0();
   input += synapse0x3091ff0();
   input += synapse0x3092030();
   input += synapse0x3092070();
   input += synapse0x30920b0();
   input += synapse0x30920f0();
   input += synapse0x3092130();
   input += synapse0x3092170();
   input += synapse0x30921b0();
   input += synapse0x30921f0();
   input += synapse0x3092230();
   input += synapse0x3092270();
   input += synapse0x30922b0();
   input += synapse0x30922f0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x30911d0() {
   double input = input0x30911d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3092330() {
   double input = 1.65838;
   input += synapse0x3092670();
   input += synapse0x30926b0();
   input += synapse0x30926f0();
   input += synapse0x3092730();
   input += synapse0x3092770();
   input += synapse0x30927b0();
   input += synapse0x30927f0();
   input += synapse0x3092830();
   input += synapse0x3092870();
   input += synapse0x30928b0();
   input += synapse0x30928f0();
   input += synapse0x3092930();
   input += synapse0x3092970();
   input += synapse0x30929b0();
   input += synapse0x30929f0();
   input += synapse0x3092a30();
   input += synapse0x30924c0();
   input += synapse0x3092500();
   input += synapse0x3092b80();
   input += synapse0x3092bc0();
   input += synapse0x3092c00();
   input += synapse0x3092c40();
   input += synapse0x3092c80();
   input += synapse0x3092cc0();
   input += synapse0x3092d00();
   input += synapse0x3092d40();
   input += synapse0x3092d80();
   input += synapse0x3092dc0();
   input += synapse0x3092e00();
   input += synapse0x3092e40();
   input += synapse0x3092e80();
   input += synapse0x3092ec0();
   input += synapse0x3092a70();
   input += synapse0x3092ab0();
   input += synapse0x3092af0();
   input += synapse0x3092b30();
   input += synapse0x3093110();
   input += synapse0x3093150();
   input += synapse0x3093190();
   input += synapse0x30931d0();
   input += synapse0x3093210();
   input += synapse0x3093250();
   input += synapse0x3093290();
   input += synapse0x30932d0();
   input += synapse0x3093310();
   input += synapse0x3093350();
   input += synapse0x3093390();
   input += synapse0x30933d0();
   input += synapse0x3093410();
   input += synapse0x3093450();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3092330() {
   double input = input0x3092330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x3093490() {
   double input = 1.6751;
   input += synapse0x30937d0();
   input += synapse0x3093810();
   input += synapse0x3093850();
   input += synapse0x3093890();
   input += synapse0x30938d0();
   input += synapse0x3093910();
   input += synapse0x3093950();
   input += synapse0x3093990();
   input += synapse0x30939d0();
   input += synapse0x3093a10();
   input += synapse0x3093a50();
   input += synapse0x3093a90();
   input += synapse0x3093ad0();
   input += synapse0x3093b10();
   input += synapse0x3093b50();
   input += synapse0x3093b90();
   input += synapse0x3093620();
   input += synapse0x3093660();
   input += synapse0x3093ce0();
   input += synapse0x3093d20();
   input += synapse0x3093d60();
   input += synapse0x3093da0();
   input += synapse0x3093de0();
   input += synapse0x3093e20();
   input += synapse0x3093e60();
   input += synapse0x3093ea0();
   input += synapse0x3093ee0();
   input += synapse0x3093f20();
   input += synapse0x3093f60();
   input += synapse0x3093fa0();
   input += synapse0x3093fe0();
   input += synapse0x3094020();
   input += synapse0x3093bd0();
   input += synapse0x3093c10();
   input += synapse0x3093c50();
   input += synapse0x3093c90();
   input += synapse0x3094270();
   input += synapse0x30942b0();
   input += synapse0x30942f0();
   input += synapse0x3094330();
   input += synapse0x3094370();
   input += synapse0x30943b0();
   input += synapse0x30943f0();
   input += synapse0x3094430();
   input += synapse0x3094470();
   input += synapse0x30944b0();
   input += synapse0x30944f0();
   input += synapse0x3094530();
   input += synapse0x3094570();
   input += synapse0x30945b0();
   return input;
}

double NNfunction-ss_uRuR::neuron0x3093490() {
   double input = input0x3093490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uRuR::input0x30945f0() {
   double input = 2.30881;
   input += synapse0x3094810();
   input += synapse0x3094850();
   input += synapse0x3094890();
   input += synapse0x30948d0();
   input += synapse0x3094910();
   return input;
}

double NNfunction-ss_uRuR::neuron0x30945f0() {
   double input = input0x30945f0();
   return (input * 1)+0;
}

double NNfunction-ss_uRuR::synapse0x30605a0() {
   return (neuron0x30606e0()*0.00762543);
}

double NNfunction-ss_uRuR::synapse0x30605e0() {
   return (neuron0x3060a20()*0.00289404);
}

double NNfunction-ss_uRuR::synapse0x30659c0() {
   return (neuron0x3060d60()*-0.0183124);
}

double NNfunction-ss_uRuR::synapse0x3065a00() {
   return (neuron0x30610a0()*0.842557);
}

double NNfunction-ss_uRuR::synapse0x3065a40() {
   return (neuron0x30613e0()*0.0214656);
}

double NNfunction-ss_uRuR::synapse0x3065a80() {
   return (neuron0x3061720()*0.0071418);
}

double NNfunction-ss_uRuR::synapse0x3065ac0() {
   return (neuron0x3061a60()*-0.00921009);
}

double NNfunction-ss_uRuR::synapse0x3065b00() {
   return (neuron0x3061da0()*0.015155);
}

double NNfunction-ss_uRuR::synapse0x3065b40() {
   return (neuron0x30620e0()*-0.0509202);
}

double NNfunction-ss_uRuR::synapse0x3065b80() {
   return (neuron0x3062420()*-0.0483283);
}

double NNfunction-ss_uRuR::synapse0x3065bc0() {
   return (neuron0x3062760()*-0.0780021);
}

double NNfunction-ss_uRuR::synapse0x3065c00() {
   return (neuron0x3062aa0()*0.00694345);
}

double NNfunction-ss_uRuR::synapse0x3065c40() {
   return (neuron0x3062de0()*0.0238926);
}

double NNfunction-ss_uRuR::synapse0x3065c80() {
   return (neuron0x3063120()*-0.0185143);
}

double NNfunction-ss_uRuR::synapse0x3065cc0() {
   return (neuron0x3063460()*-0.311617);
}

double NNfunction-ss_uRuR::synapse0x3065d00() {
   return (neuron0x30637a0()*0.0152395);
}

double NNfunction-ss_uRuR::synapse0x3060510() {
   return (neuron0x3063ae0()*-0.0287312);
}

double NNfunction-ss_uRuR::synapse0x3060550() {
   return (neuron0x3064040()*-0.00356911);
}

double NNfunction-ss_uRuR::synapse0x2e1b8c0() {
   return (neuron0x3064260()*-0.00298614);
}

double NNfunction-ss_uRuR::synapse0x2e1b900() {
   return (neuron0x30645a0()*0.0219844);
}

double NNfunction-ss_uRuR::synapse0x3065f60() {
   return (neuron0x30648e0()*-0.0203614);
}

double NNfunction-ss_uRuR::synapse0x3065fa0() {
   return (neuron0x3064c20()*0.00174216);
}

double NNfunction-ss_uRuR::synapse0x3065fe0() {
   return (neuron0x3064f60()*0.0211841);
}

double NNfunction-ss_uRuR::synapse0x3066020() {
   return (neuron0x30652a0()*-0.032256);
}

double NNfunction-ss_uRuR::synapse0x30663a0() {
   return (neuron0x30606e0()*0.00404083);
}

double NNfunction-ss_uRuR::synapse0x30663e0() {
   return (neuron0x3060a20()*0.0427897);
}

double NNfunction-ss_uRuR::synapse0x3066420() {
   return (neuron0x3060d60()*-0.0223996);
}

double NNfunction-ss_uRuR::synapse0x3066460() {
   return (neuron0x30610a0()*-0.0440729);
}

double NNfunction-ss_uRuR::synapse0x30664a0() {
   return (neuron0x30613e0()*-0.0753736);
}

double NNfunction-ss_uRuR::synapse0x30664e0() {
   return (neuron0x3061720()*-0.31088);
}

double NNfunction-ss_uRuR::synapse0x3066520() {
   return (neuron0x3061a60()*0.026918);
}

double NNfunction-ss_uRuR::synapse0x3066560() {
   return (neuron0x3061da0()*0.0526228);
}

double NNfunction-ss_uRuR::synapse0x30665a0() {
   return (neuron0x30620e0()*0.029141);
}

double NNfunction-ss_uRuR::synapse0x3065e50() {
   return (neuron0x3062420()*0.0112056);
}

double NNfunction-ss_uRuR::synapse0x3065e90() {
   return (neuron0x3062760()*0.0327654);
}

double NNfunction-ss_uRuR::synapse0x3065ed0() {
   return (neuron0x3062aa0()*-0.0303272);
}

double NNfunction-ss_uRuR::synapse0x3065f10() {
   return (neuron0x3062de0()*-0.0281043);
}

double NNfunction-ss_uRuR::synapse0x30667f0() {
   return (neuron0x3063120()*0.0344543);
}

double NNfunction-ss_uRuR::synapse0x3066830() {
   return (neuron0x3063460()*-1.35312);
}

double NNfunction-ss_uRuR::synapse0x3066870() {
   return (neuron0x30637a0()*0.00801921);
}

double NNfunction-ss_uRuR::synapse0x30661f0() {
   return (neuron0x3063ae0()*-0.0760033);
}

double NNfunction-ss_uRuR::synapse0x3066230() {
   return (neuron0x3064040()*-0.010626);
}

double NNfunction-ss_uRuR::synapse0x30669c0() {
   return (neuron0x3064260()*0.00398993);
}

double NNfunction-ss_uRuR::synapse0x3066a00() {
   return (neuron0x30645a0()*0.0135856);
}

double NNfunction-ss_uRuR::synapse0x3066a40() {
   return (neuron0x30648e0()*-0.0711722);
}

double NNfunction-ss_uRuR::synapse0x3066a80() {
   return (neuron0x3064c20()*-0.00354483);
}

double NNfunction-ss_uRuR::synapse0x3066ac0() {
   return (neuron0x3064f60()*0.0488215);
}

double NNfunction-ss_uRuR::synapse0x3066b00() {
   return (neuron0x30652a0()*0.0170094);
}

double NNfunction-ss_uRuR::synapse0x3066e80() {
   return (neuron0x30606e0()*0.0753651);
}

double NNfunction-ss_uRuR::synapse0x3066ec0() {
   return (neuron0x3060a20()*-0.304638);
}

double NNfunction-ss_uRuR::synapse0x3066f00() {
   return (neuron0x3060d60()*-0.228304);
}

double NNfunction-ss_uRuR::synapse0x3066f40() {
   return (neuron0x30610a0()*-1.36687);
}

double NNfunction-ss_uRuR::synapse0x3066f80() {
   return (neuron0x30613e0()*0.352803);
}

double NNfunction-ss_uRuR::synapse0x3066fc0() {
   return (neuron0x3061720()*-0.262419);
}

double NNfunction-ss_uRuR::synapse0x3067000() {
   return (neuron0x3061a60()*0.699527);
}

double NNfunction-ss_uRuR::synapse0x3067040() {
   return (neuron0x3061da0()*-0.143819);
}

double NNfunction-ss_uRuR::synapse0x3067080() {
   return (neuron0x30620e0()*-0.20459);
}

double NNfunction-ss_uRuR::synapse0x30670c0() {
   return (neuron0x3062420()*-0.328481);
}

double NNfunction-ss_uRuR::synapse0x3067100() {
   return (neuron0x3062760()*0.277069);
}

double NNfunction-ss_uRuR::synapse0x3067140() {
   return (neuron0x3062aa0()*0.788208);
}

double NNfunction-ss_uRuR::synapse0x3067180() {
   return (neuron0x3062de0()*-0.138514);
}

double NNfunction-ss_uRuR::synapse0x30671c0() {
   return (neuron0x3063120()*1.20789);
}

double NNfunction-ss_uRuR::synapse0x3067200() {
   return (neuron0x3063460()*-0.50019);
}

double NNfunction-ss_uRuR::synapse0x3067240() {
   return (neuron0x30637a0()*0.512194);
}

double NNfunction-ss_uRuR::synapse0x3066cd0() {
   return (neuron0x3063ae0()*-0.100233);
}

double NNfunction-ss_uRuR::synapse0x2e1b950() {
   return (neuron0x3064040()*-0.0222803);
}

double NNfunction-ss_uRuR::synapse0x3066d10() {
   return (neuron0x3064260()*-0.658559);
}

double NNfunction-ss_uRuR::synapse0x2e1bf60() {
   return (neuron0x30645a0()*-1.04936);
}

double NNfunction-ss_uRuR::synapse0x2e29830() {
   return (neuron0x30648e0()*-0.462621);
}

double NNfunction-ss_uRuR::synapse0x2e29870() {
   return (neuron0x3064c20()*0.424797);
}

double NNfunction-ss_uRuR::synapse0x304f770() {
   return (neuron0x3064f60()*-0.0543396);
}

double NNfunction-ss_uRuR::synapse0x304f7b0() {
   return (neuron0x30652a0()*-0.05844);
}

double NNfunction-ss_uRuR::synapse0x304f7f0() {
   return (neuron0x30606e0()*0.0127775);
}

double NNfunction-ss_uRuR::synapse0x3066770() {
   return (neuron0x3060a20()*-0.00558835);
}

double NNfunction-ss_uRuR::synapse0x30667b0() {
   return (neuron0x3060d60()*0.00822946);
}

double NNfunction-ss_uRuR::synapse0x3067390() {
   return (neuron0x30610a0()*-2.53647);
}

double NNfunction-ss_uRuR::synapse0x30673d0() {
   return (neuron0x30613e0()*-0.00528941);
}

double NNfunction-ss_uRuR::synapse0x3067410() {
   return (neuron0x3061720()*0.00519127);
}

double NNfunction-ss_uRuR::synapse0x3067450() {
   return (neuron0x3061a60()*0.0118225);
}

double NNfunction-ss_uRuR::synapse0x3067490() {
   return (neuron0x3061da0()*-0.00744926);
}

double NNfunction-ss_uRuR::synapse0x30674d0() {
   return (neuron0x30620e0()*0.0211681);
}

double NNfunction-ss_uRuR::synapse0x3067510() {
   return (neuron0x3062420()*0.0293576);
}

double NNfunction-ss_uRuR::synapse0x3067550() {
   return (neuron0x3062760()*0.0229565);
}

double NNfunction-ss_uRuR::synapse0x3067590() {
   return (neuron0x3062aa0()*-0.0130234);
}

double NNfunction-ss_uRuR::synapse0x30675d0() {
   return (neuron0x3062de0()*-0.0177757);
}

double NNfunction-ss_uRuR::synapse0x3067610() {
   return (neuron0x3063120()*0.0130243);
}

double NNfunction-ss_uRuR::synapse0x3067650() {
   return (neuron0x3063460()*0.321847);
}

double NNfunction-ss_uRuR::synapse0x3067690() {
   return (neuron0x30637a0()*-0.0216177);
}

double NNfunction-ss_uRuR::synapse0x3060620() {
   return (neuron0x3063ae0()*0.0146391);
}

double NNfunction-ss_uRuR::synapse0x3060660() {
   return (neuron0x3064040()*-0.00186383);
}

double NNfunction-ss_uRuR::synapse0x30606a0() {
   return (neuron0x3064260()*0.0137269);
}

double NNfunction-ss_uRuR::synapse0x30677e0() {
   return (neuron0x30645a0()*0.011774);
}

double NNfunction-ss_uRuR::synapse0x3067820() {
   return (neuron0x30648e0()*0.00932841);
}

double NNfunction-ss_uRuR::synapse0x3067860() {
   return (neuron0x3064c20()*-0.00710623);
}

double NNfunction-ss_uRuR::synapse0x30678a0() {
   return (neuron0x3064f60()*0.00451818);
}

double NNfunction-ss_uRuR::synapse0x30678e0() {
   return (neuron0x30652a0()*0.001503);
}

double NNfunction-ss_uRuR::synapse0x3067c60() {
   return (neuron0x30606e0()*-0.340704);
}

double NNfunction-ss_uRuR::synapse0x3067ca0() {
   return (neuron0x3060a20()*0.824974);
}

double NNfunction-ss_uRuR::synapse0x3067ce0() {
   return (neuron0x3060d60()*-2.51682);
}

double NNfunction-ss_uRuR::synapse0x3067d20() {
   return (neuron0x30610a0()*1.38053);
}

double NNfunction-ss_uRuR::synapse0x3067d60() {
   return (neuron0x30613e0()*-1.23476);
}

double NNfunction-ss_uRuR::synapse0x3067da0() {
   return (neuron0x3061720()*-0.37941);
}

double NNfunction-ss_uRuR::synapse0x3067de0() {
   return (neuron0x3061a60()*-0.452175);
}

double NNfunction-ss_uRuR::synapse0x3067e20() {
   return (neuron0x3061da0()*-0.553103);
}

double NNfunction-ss_uRuR::synapse0x3067e60() {
   return (neuron0x30620e0()*-0.0755345);
}

double NNfunction-ss_uRuR::synapse0x3067ea0() {
   return (neuron0x3062420()*-0.793999);
}

double NNfunction-ss_uRuR::synapse0x3067ee0() {
   return (neuron0x3062760()*-0.173813);
}

double NNfunction-ss_uRuR::synapse0x3067f20() {
   return (neuron0x3062aa0()*0.375797);
}

double NNfunction-ss_uRuR::synapse0x3067f60() {
   return (neuron0x3062de0()*0.0479814);
}

double NNfunction-ss_uRuR::synapse0x3067fa0() {
   return (neuron0x3063120()*1.76159);
}

double NNfunction-ss_uRuR::synapse0x3067fe0() {
   return (neuron0x3063460()*2.2936);
}

double NNfunction-ss_uRuR::synapse0x3068020() {
   return (neuron0x30637a0()*-0.240722);
}

double NNfunction-ss_uRuR::synapse0x3067ab0() {
   return (neuron0x3063ae0()*-0.508946);
}

double NNfunction-ss_uRuR::synapse0x3067af0() {
   return (neuron0x3064040()*0.633994);
}

double NNfunction-ss_uRuR::synapse0x3068170() {
   return (neuron0x3064260()*0.716128);
}

double NNfunction-ss_uRuR::synapse0x30681b0() {
   return (neuron0x30645a0()*-1.53587);
}

double NNfunction-ss_uRuR::synapse0x30681f0() {
   return (neuron0x30648e0()*-1.27021);
}

double NNfunction-ss_uRuR::synapse0x3068230() {
   return (neuron0x3064c20()*-1.16378);
}

double NNfunction-ss_uRuR::synapse0x3068270() {
   return (neuron0x3064f60()*1.43203);
}

double NNfunction-ss_uRuR::synapse0x30682b0() {
   return (neuron0x30652a0()*0.0680651);
}

double NNfunction-ss_uRuR::synapse0x3068630() {
   return (neuron0x30606e0()*-0.137779);
}

double NNfunction-ss_uRuR::synapse0x3068670() {
   return (neuron0x3060a20()*0.165014);
}

double NNfunction-ss_uRuR::synapse0x30686b0() {
   return (neuron0x3060d60()*-0.262295);
}

double NNfunction-ss_uRuR::synapse0x30686f0() {
   return (neuron0x30610a0()*0.171325);
}

double NNfunction-ss_uRuR::synapse0x3068730() {
   return (neuron0x30613e0()*1.06281);
}

double NNfunction-ss_uRuR::synapse0x3068770() {
   return (neuron0x3061720()*-0.481579);
}

double NNfunction-ss_uRuR::synapse0x30687b0() {
   return (neuron0x3061a60()*-0.202735);
}

double NNfunction-ss_uRuR::synapse0x30687f0() {
   return (neuron0x3061da0()*0.140929);
}

double NNfunction-ss_uRuR::synapse0x3068830() {
   return (neuron0x30620e0()*0.171864);
}

double NNfunction-ss_uRuR::synapse0x2e29b80() {
   return (neuron0x3062420()*-0.131149);
}

double NNfunction-ss_uRuR::synapse0x2e29bc0() {
   return (neuron0x3062760()*-0.00545774);
}

double NNfunction-ss_uRuR::synapse0x2e29c00() {
   return (neuron0x3062aa0()*-0.0309755);
}

double NNfunction-ss_uRuR::synapse0x2e29c40() {
   return (neuron0x3062de0()*0.0861958);
}

double NNfunction-ss_uRuR::synapse0x2e29c80() {
   return (neuron0x3063120()*0.265012);
}

double NNfunction-ss_uRuR::synapse0x2e29cc0() {
   return (neuron0x3063460()*2.42636);
}

double NNfunction-ss_uRuR::synapse0x2e29d00() {
   return (neuron0x30637a0()*-0.393356);
}

double NNfunction-ss_uRuR::synapse0x3068480() {
   return (neuron0x3063ae0()*0.741572);
}

double NNfunction-ss_uRuR::synapse0x30684c0() {
   return (neuron0x3064040()*0.339356);
}

double NNfunction-ss_uRuR::synapse0x2e29e50() {
   return (neuron0x3064260()*0.218665);
}

double NNfunction-ss_uRuR::synapse0x2e29e90() {
   return (neuron0x30645a0()*-0.0773375);
}

double NNfunction-ss_uRuR::synapse0x2e29ed0() {
   return (neuron0x30648e0()*-0.307977);
}

double NNfunction-ss_uRuR::synapse0x2e29f10() {
   return (neuron0x3064c20()*0.027224);
}

double NNfunction-ss_uRuR::synapse0x2e29f50() {
   return (neuron0x3064f60()*-0.10595);
}

double NNfunction-ss_uRuR::synapse0x3069080() {
   return (neuron0x30652a0()*0.0527063);
}

double NNfunction-ss_uRuR::synapse0x3069400() {
   return (neuron0x30606e0()*-0.118312);
}

double NNfunction-ss_uRuR::synapse0x3069440() {
   return (neuron0x3060a20()*-0.216433);
}

double NNfunction-ss_uRuR::synapse0x3069480() {
   return (neuron0x3060d60()*-0.555596);
}

double NNfunction-ss_uRuR::synapse0x30694c0() {
   return (neuron0x30610a0()*0.142325);
}

double NNfunction-ss_uRuR::synapse0x3069500() {
   return (neuron0x30613e0()*-0.0498765);
}

double NNfunction-ss_uRuR::synapse0x3069540() {
   return (neuron0x3061720()*0.908625);
}

double NNfunction-ss_uRuR::synapse0x3069580() {
   return (neuron0x3061a60()*-0.0316261);
}

double NNfunction-ss_uRuR::synapse0x30695c0() {
   return (neuron0x3061da0()*0.367542);
}

double NNfunction-ss_uRuR::synapse0x3069600() {
   return (neuron0x30620e0()*0.0648386);
}

double NNfunction-ss_uRuR::synapse0x3069640() {
   return (neuron0x3062420()*-0.667326);
}

double NNfunction-ss_uRuR::synapse0x3069680() {
   return (neuron0x3062760()*-0.88677);
}

double NNfunction-ss_uRuR::synapse0x30696c0() {
   return (neuron0x3062aa0()*2.25993);
}

double NNfunction-ss_uRuR::synapse0x3069700() {
   return (neuron0x3062de0()*-0.137014);
}

double NNfunction-ss_uRuR::synapse0x3069740() {
   return (neuron0x3063120()*0.205983);
}

double NNfunction-ss_uRuR::synapse0x3069780() {
   return (neuron0x3063460()*0.682419);
}

double NNfunction-ss_uRuR::synapse0x30697c0() {
   return (neuron0x30637a0()*-0.225412);
}

double NNfunction-ss_uRuR::synapse0x3069250() {
   return (neuron0x3063ae0()*-0.344221);
}

double NNfunction-ss_uRuR::synapse0x3069290() {
   return (neuron0x3064040()*0.447106);
}

double NNfunction-ss_uRuR::synapse0x3069910() {
   return (neuron0x3064260()*0.0987315);
}

double NNfunction-ss_uRuR::synapse0x3069950() {
   return (neuron0x30645a0()*-1.37259);
}

double NNfunction-ss_uRuR::synapse0x3069990() {
   return (neuron0x30648e0()*0.920477);
}

double NNfunction-ss_uRuR::synapse0x30699d0() {
   return (neuron0x3064c20()*-0.880605);
}

double NNfunction-ss_uRuR::synapse0x3069a10() {
   return (neuron0x3064f60()*0.0593443);
}

double NNfunction-ss_uRuR::synapse0x3069a50() {
   return (neuron0x30652a0()*0.130412);
}

double NNfunction-ss_uRuR::synapse0x3069dd0() {
   return (neuron0x30606e0()*0.421051);
}

double NNfunction-ss_uRuR::synapse0x3069e10() {
   return (neuron0x3060a20()*0.984043);
}

double NNfunction-ss_uRuR::synapse0x3069e50() {
   return (neuron0x3060d60()*0.380084);
}

double NNfunction-ss_uRuR::synapse0x3069e90() {
   return (neuron0x30610a0()*1.44338);
}

double NNfunction-ss_uRuR::synapse0x3069ed0() {
   return (neuron0x30613e0()*0.452929);
}

double NNfunction-ss_uRuR::synapse0x3069f10() {
   return (neuron0x3061720()*1.18537);
}

double NNfunction-ss_uRuR::synapse0x3069f50() {
   return (neuron0x3061a60()*0.601736);
}

double NNfunction-ss_uRuR::synapse0x3069f90() {
   return (neuron0x3061da0()*-0.362294);
}

double NNfunction-ss_uRuR::synapse0x3069fd0() {
   return (neuron0x30620e0()*-0.0169561);
}

double NNfunction-ss_uRuR::synapse0x306a010() {
   return (neuron0x3062420()*-0.94117);
}

double NNfunction-ss_uRuR::synapse0x306a050() {
   return (neuron0x3062760()*0.424777);
}

double NNfunction-ss_uRuR::synapse0x306a090() {
   return (neuron0x3062aa0()*0.0333441);
}

double NNfunction-ss_uRuR::synapse0x306a0d0() {
   return (neuron0x3062de0()*-0.440024);
}

double NNfunction-ss_uRuR::synapse0x306a110() {
   return (neuron0x3063120()*0.620411);
}

double NNfunction-ss_uRuR::synapse0x306a150() {
   return (neuron0x3063460()*-0.953107);
}

double NNfunction-ss_uRuR::synapse0x306a190() {
   return (neuron0x30637a0()*0.396648);
}

double NNfunction-ss_uRuR::synapse0x3069c20() {
   return (neuron0x3063ae0()*0.29998);
}

double NNfunction-ss_uRuR::synapse0x3069c60() {
   return (neuron0x3064040()*-0.194312);
}

double NNfunction-ss_uRuR::synapse0x306a2e0() {
   return (neuron0x3064260()*0.606944);
}

double NNfunction-ss_uRuR::synapse0x306a320() {
   return (neuron0x30645a0()*-0.0696924);
}

double NNfunction-ss_uRuR::synapse0x306a360() {
   return (neuron0x30648e0()*-0.217407);
}

double NNfunction-ss_uRuR::synapse0x306a3a0() {
   return (neuron0x3064c20()*-0.00604689);
}

double NNfunction-ss_uRuR::synapse0x306a3e0() {
   return (neuron0x3064f60()*0.507116);
}

double NNfunction-ss_uRuR::synapse0x306a420() {
   return (neuron0x30652a0()*0.0569154);
}

double NNfunction-ss_uRuR::synapse0x3063f30() {
   return (neuron0x30606e0()*-0.00678216);
}

double NNfunction-ss_uRuR::synapse0x3063f70() {
   return (neuron0x3060a20()*-0.0240671);
}

double NNfunction-ss_uRuR::synapse0x3063fb0() {
   return (neuron0x3060d60()*0.0701755);
}

double NNfunction-ss_uRuR::synapse0x3063ff0() {
   return (neuron0x30610a0()*0.0975912);
}

double NNfunction-ss_uRuR::synapse0x306a9b0() {
   return (neuron0x30613e0()*0.312384);
}

double NNfunction-ss_uRuR::synapse0x306a9f0() {
   return (neuron0x3061720()*0.111843);
}

double NNfunction-ss_uRuR::synapse0x306aa30() {
   return (neuron0x3061a60()*-0.239265);
}

double NNfunction-ss_uRuR::synapse0x306aa70() {
   return (neuron0x3061da0()*-0.244179);
}

double NNfunction-ss_uRuR::synapse0x306aab0() {
   return (neuron0x30620e0()*0.0279786);
}

double NNfunction-ss_uRuR::synapse0x306aaf0() {
   return (neuron0x3062420()*0.0289668);
}

double NNfunction-ss_uRuR::synapse0x306ab30() {
   return (neuron0x3062760()*-0.0104794);
}

double NNfunction-ss_uRuR::synapse0x306ab70() {
   return (neuron0x3062aa0()*0.00562099);
}

double NNfunction-ss_uRuR::synapse0x306abb0() {
   return (neuron0x3062de0()*0.00833514);
}

double NNfunction-ss_uRuR::synapse0x306abf0() {
   return (neuron0x3063120()*-0.0237027);
}

double NNfunction-ss_uRuR::synapse0x306ac30() {
   return (neuron0x3063460()*-2.35398);
}

double NNfunction-ss_uRuR::synapse0x306ac70() {
   return (neuron0x30637a0()*0.25066);
}

double NNfunction-ss_uRuR::synapse0x306a5f0() {
   return (neuron0x3063ae0()*-0.12708);
}

double NNfunction-ss_uRuR::synapse0x306a630() {
   return (neuron0x3064040()*-0.000957889);
}

double NNfunction-ss_uRuR::synapse0x306adc0() {
   return (neuron0x3064260()*-0.0787935);
}

double NNfunction-ss_uRuR::synapse0x306ae00() {
   return (neuron0x30645a0()*-0.0198807);
}

double NNfunction-ss_uRuR::synapse0x306ae40() {
   return (neuron0x30648e0()*-0.125306);
}

double NNfunction-ss_uRuR::synapse0x306ae80() {
   return (neuron0x3064c20()*0.00630981);
}

double NNfunction-ss_uRuR::synapse0x306aec0() {
   return (neuron0x3064f60()*0.00851178);
}

double NNfunction-ss_uRuR::synapse0x306af00() {
   return (neuron0x30652a0()*-0.107139);
}

double NNfunction-ss_uRuR::synapse0x306b280() {
   return (neuron0x30606e0()*0.0284097);
}

double NNfunction-ss_uRuR::synapse0x306b2c0() {
   return (neuron0x3060a20()*0.167937);
}

double NNfunction-ss_uRuR::synapse0x306b300() {
   return (neuron0x3060d60()*0.0877556);
}

double NNfunction-ss_uRuR::synapse0x306b340() {
   return (neuron0x30610a0()*0.553419);
}

double NNfunction-ss_uRuR::synapse0x306b380() {
   return (neuron0x30613e0()*-0.0361093);
}

double NNfunction-ss_uRuR::synapse0x306b3c0() {
   return (neuron0x3061720()*-0.1159);
}

double NNfunction-ss_uRuR::synapse0x306b400() {
   return (neuron0x3061a60()*-0.10238);
}

double NNfunction-ss_uRuR::synapse0x306b440() {
   return (neuron0x3061da0()*0.0667984);
}

double NNfunction-ss_uRuR::synapse0x306b480() {
   return (neuron0x30620e0()*0.00591421);
}

double NNfunction-ss_uRuR::synapse0x306b4c0() {
   return (neuron0x3062420()*-0.0784478);
}

double NNfunction-ss_uRuR::synapse0x306b500() {
   return (neuron0x3062760()*-0.191161);
}

double NNfunction-ss_uRuR::synapse0x306b540() {
   return (neuron0x3062aa0()*-0.186966);
}

double NNfunction-ss_uRuR::synapse0x306b580() {
   return (neuron0x3062de0()*-0.0159209);
}

double NNfunction-ss_uRuR::synapse0x306b5c0() {
   return (neuron0x3063120()*-0.0389673);
}

double NNfunction-ss_uRuR::synapse0x306b600() {
   return (neuron0x3063460()*-0.397117);
}

double NNfunction-ss_uRuR::synapse0x306b640() {
   return (neuron0x30637a0()*0.292513);
}

double NNfunction-ss_uRuR::synapse0x306b0d0() {
   return (neuron0x3063ae0()*0.104452);
}

double NNfunction-ss_uRuR::synapse0x306b110() {
   return (neuron0x3064040()*0.71703);
}

double NNfunction-ss_uRuR::synapse0x306b790() {
   return (neuron0x3064260()*-0.492652);
}

double NNfunction-ss_uRuR::synapse0x306b7d0() {
   return (neuron0x30645a0()*-0.149866);
}

double NNfunction-ss_uRuR::synapse0x306b810() {
   return (neuron0x30648e0()*-0.178456);
}

double NNfunction-ss_uRuR::synapse0x306b850() {
   return (neuron0x3064c20()*-0.111048);
}

double NNfunction-ss_uRuR::synapse0x306b890() {
   return (neuron0x3064f60()*-0.0677009);
}

double NNfunction-ss_uRuR::synapse0x306b8d0() {
   return (neuron0x30652a0()*-0.221792);
}

double NNfunction-ss_uRuR::synapse0x306bc50() {
   return (neuron0x30606e0()*0.141028);
}

double NNfunction-ss_uRuR::synapse0x306bc90() {
   return (neuron0x3060a20()*-0.164265);
}

double NNfunction-ss_uRuR::synapse0x306bcd0() {
   return (neuron0x3060d60()*0.667557);
}

double NNfunction-ss_uRuR::synapse0x306bd10() {
   return (neuron0x30610a0()*-0.475811);
}

double NNfunction-ss_uRuR::synapse0x306bd50() {
   return (neuron0x30613e0()*0.225656);
}

double NNfunction-ss_uRuR::synapse0x306bd90() {
   return (neuron0x3061720()*0.0668936);
}

double NNfunction-ss_uRuR::synapse0x306bdd0() {
   return (neuron0x3061a60()*0.0680924);
}

double NNfunction-ss_uRuR::synapse0x306be10() {
   return (neuron0x3061da0()*0.128653);
}

double NNfunction-ss_uRuR::synapse0x306be50() {
   return (neuron0x30620e0()*0.000981164);
}

double NNfunction-ss_uRuR::synapse0x306be90() {
   return (neuron0x3062420()*0.0597566);
}

double NNfunction-ss_uRuR::synapse0x306bed0() {
   return (neuron0x3062760()*0.0875606);
}

double NNfunction-ss_uRuR::synapse0x306bf10() {
   return (neuron0x3062aa0()*0.297393);
}

double NNfunction-ss_uRuR::synapse0x306bf50() {
   return (neuron0x3062de0()*0.054672);
}

double NNfunction-ss_uRuR::synapse0x306bf90() {
   return (neuron0x3063120()*-0.288763);
}

double NNfunction-ss_uRuR::synapse0x306bfd0() {
   return (neuron0x3063460()*-1.0414);
}

double NNfunction-ss_uRuR::synapse0x306c010() {
   return (neuron0x30637a0()*0.359361);
}

double NNfunction-ss_uRuR::synapse0x306baa0() {
   return (neuron0x3063ae0()*0.109298);
}

double NNfunction-ss_uRuR::synapse0x306bae0() {
   return (neuron0x3064040()*-0.128022);
}

double NNfunction-ss_uRuR::synapse0x3068870() {
   return (neuron0x3064260()*-0.281932);
}

double NNfunction-ss_uRuR::synapse0x30688b0() {
   return (neuron0x30645a0()*2.25164);
}

double NNfunction-ss_uRuR::synapse0x30688f0() {
   return (neuron0x30648e0()*-0.311017);
}

double NNfunction-ss_uRuR::synapse0x3068930() {
   return (neuron0x3064c20()*0.707763);
}

double NNfunction-ss_uRuR::synapse0x3068970() {
   return (neuron0x3064f60()*-0.344048);
}

double NNfunction-ss_uRuR::synapse0x30689b0() {
   return (neuron0x30652a0()*-0.177067);
}

double NNfunction-ss_uRuR::synapse0x3068d30() {
   return (neuron0x30606e0()*0.0313313);
}

double NNfunction-ss_uRuR::synapse0x3068d70() {
   return (neuron0x3060a20()*0.100961);
}

double NNfunction-ss_uRuR::synapse0x3068db0() {
   return (neuron0x3060d60()*0.0366298);
}

double NNfunction-ss_uRuR::synapse0x3068df0() {
   return (neuron0x30610a0()*-0.23456);
}

double NNfunction-ss_uRuR::synapse0x3068e30() {
   return (neuron0x30613e0()*-0.0276603);
}

double NNfunction-ss_uRuR::synapse0x3068e70() {
   return (neuron0x3061720()*0.0153701);
}

double NNfunction-ss_uRuR::synapse0x3068eb0() {
   return (neuron0x3061a60()*-0.0087393);
}

double NNfunction-ss_uRuR::synapse0x3068ef0() {
   return (neuron0x3061da0()*0.100468);
}

double NNfunction-ss_uRuR::synapse0x3068f30() {
   return (neuron0x30620e0()*0.281953);
}

double NNfunction-ss_uRuR::synapse0x3068f70() {
   return (neuron0x3062420()*0.10526);
}

double NNfunction-ss_uRuR::synapse0x3068fb0() {
   return (neuron0x3062760()*0.17611);
}

double NNfunction-ss_uRuR::synapse0x3068ff0() {
   return (neuron0x3062aa0()*0.52212);
}

double NNfunction-ss_uRuR::synapse0x3069030() {
   return (neuron0x3062de0()*0.459679);
}

double NNfunction-ss_uRuR::synapse0x306d170() {
   return (neuron0x3063120()*-0.1658);
}

double NNfunction-ss_uRuR::synapse0x306d1b0() {
   return (neuron0x3063460()*-0.405876);
}

double NNfunction-ss_uRuR::synapse0x306d1f0() {
   return (neuron0x30637a0()*0.167294);
}

double NNfunction-ss_uRuR::synapse0x3068b80() {
   return (neuron0x3063ae0()*-0.0401631);
}

double NNfunction-ss_uRuR::synapse0x3068bc0() {
   return (neuron0x3064040()*0.191922);
}

double NNfunction-ss_uRuR::synapse0x306d340() {
   return (neuron0x3064260()*0.169797);
}

double NNfunction-ss_uRuR::synapse0x306d380() {
   return (neuron0x30645a0()*-0.13366);
}

double NNfunction-ss_uRuR::synapse0x306d3c0() {
   return (neuron0x30648e0()*0.104863);
}

double NNfunction-ss_uRuR::synapse0x306d400() {
   return (neuron0x3064c20()*0.049642);
}

double NNfunction-ss_uRuR::synapse0x306d440() {
   return (neuron0x3064f60()*0.00242488);
}

double NNfunction-ss_uRuR::synapse0x306d480() {
   return (neuron0x30652a0()*-0.00344419);
}

double NNfunction-ss_uRuR::synapse0x306d800() {
   return (neuron0x30606e0()*-0.163812);
}

double NNfunction-ss_uRuR::synapse0x306d840() {
   return (neuron0x3060a20()*0.46315);
}

double NNfunction-ss_uRuR::synapse0x306d880() {
   return (neuron0x3060d60()*-0.251548);
}

double NNfunction-ss_uRuR::synapse0x306d8c0() {
   return (neuron0x30610a0()*1.01136);
}

double NNfunction-ss_uRuR::synapse0x306d900() {
   return (neuron0x30613e0()*-0.140912);
}

double NNfunction-ss_uRuR::synapse0x306d940() {
   return (neuron0x3061720()*-0.104377);
}

double NNfunction-ss_uRuR::synapse0x306d980() {
   return (neuron0x3061a60()*0.00296007);
}

double NNfunction-ss_uRuR::synapse0x306d9c0() {
   return (neuron0x3061da0()*0.0449913);
}

double NNfunction-ss_uRuR::synapse0x306da00() {
   return (neuron0x30620e0()*-0.232761);
}

double NNfunction-ss_uRuR::synapse0x306da40() {
   return (neuron0x3062420()*-0.343611);
}

double NNfunction-ss_uRuR::synapse0x306da80() {
   return (neuron0x3062760()*0.671873);
}

double NNfunction-ss_uRuR::synapse0x306dac0() {
   return (neuron0x3062aa0()*-0.166451);
}

double NNfunction-ss_uRuR::synapse0x306db00() {
   return (neuron0x3062de0()*0.0524512);
}

double NNfunction-ss_uRuR::synapse0x306db40() {
   return (neuron0x3063120()*-0.275236);
}

double NNfunction-ss_uRuR::synapse0x306db80() {
   return (neuron0x3063460()*0.983632);
}

double NNfunction-ss_uRuR::synapse0x306dbc0() {
   return (neuron0x30637a0()*-0.214829);
}

double NNfunction-ss_uRuR::synapse0x306d650() {
   return (neuron0x3063ae0()*-0.114197);
}

double NNfunction-ss_uRuR::synapse0x306d690() {
   return (neuron0x3064040()*-0.0186732);
}

double NNfunction-ss_uRuR::synapse0x306dd10() {
   return (neuron0x3064260()*0.303335);
}

double NNfunction-ss_uRuR::synapse0x306dd50() {
   return (neuron0x30645a0()*0.0952799);
}

double NNfunction-ss_uRuR::synapse0x306dd90() {
   return (neuron0x30648e0()*-0.109568);
}

double NNfunction-ss_uRuR::synapse0x306ddd0() {
   return (neuron0x3064c20()*0.296729);
}

double NNfunction-ss_uRuR::synapse0x306de10() {
   return (neuron0x3064f60()*0.344416);
}

double NNfunction-ss_uRuR::synapse0x306de50() {
   return (neuron0x30652a0()*-0.192737);
}

double NNfunction-ss_uRuR::synapse0x306e1d0() {
   return (neuron0x30606e0()*-0.0491388);
}

double NNfunction-ss_uRuR::synapse0x306e210() {
   return (neuron0x3060a20()*0.592142);
}

double NNfunction-ss_uRuR::synapse0x306e250() {
   return (neuron0x3060d60()*0.00571909);
}

double NNfunction-ss_uRuR::synapse0x306e290() {
   return (neuron0x30610a0()*-0.934534);
}

double NNfunction-ss_uRuR::synapse0x306e2d0() {
   return (neuron0x30613e0()*-0.129083);
}

double NNfunction-ss_uRuR::synapse0x306e310() {
   return (neuron0x3061720()*-0.0752829);
}

double NNfunction-ss_uRuR::synapse0x306e350() {
   return (neuron0x3061a60()*0.0326694);
}

double NNfunction-ss_uRuR::synapse0x306e390() {
   return (neuron0x3061da0()*0.0276453);
}

double NNfunction-ss_uRuR::synapse0x306e3d0() {
   return (neuron0x30620e0()*-0.0710535);
}

double NNfunction-ss_uRuR::synapse0x306e410() {
   return (neuron0x3062420()*-0.14901);
}

double NNfunction-ss_uRuR::synapse0x306e450() {
   return (neuron0x3062760()*-0.0341827);
}

double NNfunction-ss_uRuR::synapse0x306e490() {
   return (neuron0x3062aa0()*-0.186419);
}

double NNfunction-ss_uRuR::synapse0x306e4d0() {
   return (neuron0x3062de0()*-0.0547524);
}

double NNfunction-ss_uRuR::synapse0x306e510() {
   return (neuron0x3063120()*0.167439);
}

double NNfunction-ss_uRuR::synapse0x306e550() {
   return (neuron0x3063460()*-0.409908);
}

double NNfunction-ss_uRuR::synapse0x306e590() {
   return (neuron0x30637a0()*-0.0724546);
}

double NNfunction-ss_uRuR::synapse0x306e020() {
   return (neuron0x3063ae0()*-0.0538465);
}

double NNfunction-ss_uRuR::synapse0x306e060() {
   return (neuron0x3064040()*-0.287367);
}

double NNfunction-ss_uRuR::synapse0x306e6e0() {
   return (neuron0x3064260()*0.35274);
}

double NNfunction-ss_uRuR::synapse0x306e720() {
   return (neuron0x30645a0()*0.0317126);
}

double NNfunction-ss_uRuR::synapse0x306e760() {
   return (neuron0x30648e0()*-0.151054);
}

double NNfunction-ss_uRuR::synapse0x306e7a0() {
   return (neuron0x3064c20()*-0.0317742);
}

double NNfunction-ss_uRuR::synapse0x306e7e0() {
   return (neuron0x3064f60()*0.020533);
}

double NNfunction-ss_uRuR::synapse0x306e820() {
   return (neuron0x30652a0()*0.0230555);
}

double NNfunction-ss_uRuR::synapse0x306eba0() {
   return (neuron0x30606e0()*-0.00481034);
}

double NNfunction-ss_uRuR::synapse0x306ebe0() {
   return (neuron0x3060a20()*-0.274678);
}

double NNfunction-ss_uRuR::synapse0x306ec20() {
   return (neuron0x3060d60()*0.310078);
}

double NNfunction-ss_uRuR::synapse0x306ec60() {
   return (neuron0x30610a0()*0.275551);
}

double NNfunction-ss_uRuR::synapse0x306eca0() {
   return (neuron0x30613e0()*-0.0831753);
}

double NNfunction-ss_uRuR::synapse0x306ece0() {
   return (neuron0x3061720()*-0.393672);
}

double NNfunction-ss_uRuR::synapse0x306ed20() {
   return (neuron0x3061a60()*-0.089309);
}

double NNfunction-ss_uRuR::synapse0x306ed60() {
   return (neuron0x3061da0()*-0.295189);
}

double NNfunction-ss_uRuR::synapse0x306eda0() {
   return (neuron0x30620e0()*-0.458294);
}

double NNfunction-ss_uRuR::synapse0x306ede0() {
   return (neuron0x3062420()*0.830043);
}

double NNfunction-ss_uRuR::synapse0x306ee20() {
   return (neuron0x3062760()*-0.20793);
}

double NNfunction-ss_uRuR::synapse0x306ee60() {
   return (neuron0x3062aa0()*0.58364);
}

double NNfunction-ss_uRuR::synapse0x306eea0() {
   return (neuron0x3062de0()*0.452719);
}

double NNfunction-ss_uRuR::synapse0x306eee0() {
   return (neuron0x3063120()*-0.533053);
}

double NNfunction-ss_uRuR::synapse0x306ef20() {
   return (neuron0x3063460()*-0.471223);
}

double NNfunction-ss_uRuR::synapse0x306ef60() {
   return (neuron0x30637a0()*-0.0164049);
}

double NNfunction-ss_uRuR::synapse0x306e9f0() {
   return (neuron0x3063ae0()*-0.0385463);
}

double NNfunction-ss_uRuR::synapse0x306ea30() {
   return (neuron0x3064040()*-0.345305);
}

double NNfunction-ss_uRuR::synapse0x306f0b0() {
   return (neuron0x3064260()*0.248592);
}

double NNfunction-ss_uRuR::synapse0x306f0f0() {
   return (neuron0x30645a0()*-0.496241);
}

double NNfunction-ss_uRuR::synapse0x306f130() {
   return (neuron0x30648e0()*0.047784);
}

double NNfunction-ss_uRuR::synapse0x306f170() {
   return (neuron0x3064c20()*0.0392334);
}

double NNfunction-ss_uRuR::synapse0x306f1b0() {
   return (neuron0x3064f60()*-0.361155);
}

double NNfunction-ss_uRuR::synapse0x306f1f0() {
   return (neuron0x30652a0()*-0.0733312);
}

double NNfunction-ss_uRuR::synapse0x306f570() {
   return (neuron0x30606e0()*-0.117688);
}

double NNfunction-ss_uRuR::synapse0x3060900() {
   return (neuron0x3060a20()*0.191019);
}

double NNfunction-ss_uRuR::synapse0x3060940() {
   return (neuron0x3060d60()*0.544908);
}

double NNfunction-ss_uRuR::synapse0x3060c40() {
   return (neuron0x30610a0()*-0.399573);
}

double NNfunction-ss_uRuR::synapse0x3060c80() {
   return (neuron0x30613e0()*0.011241);
}

double NNfunction-ss_uRuR::synapse0x3060f80() {
   return (neuron0x3061720()*0.360821);
}

double NNfunction-ss_uRuR::synapse0x3060fc0() {
   return (neuron0x3061a60()*0.561246);
}

double NNfunction-ss_uRuR::synapse0x30612c0() {
   return (neuron0x3061da0()*-0.482856);
}

double NNfunction-ss_uRuR::synapse0x3061300() {
   return (neuron0x30620e0()*-0.53336);
}

double NNfunction-ss_uRuR::synapse0x3061600() {
   return (neuron0x3062420()*-0.0876066);
}

double NNfunction-ss_uRuR::synapse0x3061640() {
   return (neuron0x3062760()*1.38456);
}

double NNfunction-ss_uRuR::synapse0x3061940() {
   return (neuron0x3062aa0()*-0.0945358);
}

double NNfunction-ss_uRuR::synapse0x3061980() {
   return (neuron0x3062de0()*1.52809);
}

double NNfunction-ss_uRuR::synapse0x3061c80() {
   return (neuron0x3063120()*1.0559);
}

double NNfunction-ss_uRuR::synapse0x3061cc0() {
   return (neuron0x3063460()*-0.863707);
}

double NNfunction-ss_uRuR::synapse0x3061fc0() {
   return (neuron0x30637a0()*-0.255908);
}

double NNfunction-ss_uRuR::synapse0x3062000() {
   return (neuron0x3063ae0()*0.0756006);
}

double NNfunction-ss_uRuR::synapse0x3062300() {
   return (neuron0x3064040()*0.129111);
}

double NNfunction-ss_uRuR::synapse0x3062340() {
   return (neuron0x3064260()*-0.142924);
}

double NNfunction-ss_uRuR::synapse0x3062640() {
   return (neuron0x30645a0()*-0.678869);
}

double NNfunction-ss_uRuR::synapse0x3062680() {
   return (neuron0x30648e0()*-0.745103);
}

double NNfunction-ss_uRuR::synapse0x3062980() {
   return (neuron0x3064c20()*-0.00765709);
}

double NNfunction-ss_uRuR::synapse0x30629c0() {
   return (neuron0x3064f60()*-0.0752241);
}

double NNfunction-ss_uRuR::synapse0x3062cc0() {
   return (neuron0x30652a0()*-0.251164);
}

double NNfunction-ss_uRuR::synapse0x3062d00() {
   return (neuron0x30606e0()*0.118885);
}

double NNfunction-ss_uRuR::synapse0x30639c0() {
   return (neuron0x3060a20()*0.336984);
}

double NNfunction-ss_uRuR::synapse0x3063a00() {
   return (neuron0x3060d60()*0.59831);
}

double NNfunction-ss_uRuR::synapse0x306f3c0() {
   return (neuron0x30610a0()*1.23745);
}

double NNfunction-ss_uRuR::synapse0x306f400() {
   return (neuron0x30613e0()*0.0665217);
}

double NNfunction-ss_uRuR::synapse0x3063d00() {
   return (neuron0x3061720()*-0.0594346);
}

double NNfunction-ss_uRuR::synapse0x3063d40() {
   return (neuron0x3061a60()*1.0583);
}

double NNfunction-ss_uRuR::synapse0x2e1b7a0() {
   return (neuron0x3061da0()*-0.49393);
}

double NNfunction-ss_uRuR::synapse0x2e1b7e0() {
   return (neuron0x30620e0()*0.0169607);
}

double NNfunction-ss_uRuR::synapse0x3064480() {
   return (neuron0x3062420()*-0.899672);
}

double NNfunction-ss_uRuR::synapse0x30644c0() {
   return (neuron0x3062760()*0.205817);
}

double NNfunction-ss_uRuR::synapse0x30647c0() {
   return (neuron0x3062aa0()*-0.0932297);
}

double NNfunction-ss_uRuR::synapse0x3064800() {
   return (neuron0x3062de0()*-0.582644);
}

double NNfunction-ss_uRuR::synapse0x3064b00() {
   return (neuron0x3063120()*-0.0449517);
}

double NNfunction-ss_uRuR::synapse0x3064b40() {
   return (neuron0x3063460()*-0.914696);
}

double NNfunction-ss_uRuR::synapse0x3064e40() {
   return (neuron0x30637a0()*-0.462249);
}

double NNfunction-ss_uRuR::synapse0x3064e80() {
   return (neuron0x3063ae0()*-0.0621225);
}

double NNfunction-ss_uRuR::synapse0x3065180() {
   return (neuron0x3064040()*0.055766);
}

double NNfunction-ss_uRuR::synapse0x30651c0() {
   return (neuron0x3064260()*-0.717894);
}

double NNfunction-ss_uRuR::synapse0x30654c0() {
   return (neuron0x30645a0()*0.683055);
}

double NNfunction-ss_uRuR::synapse0x3065500() {
   return (neuron0x30648e0()*0.616583);
}

double NNfunction-ss_uRuR::synapse0x3063000() {
   return (neuron0x3064c20()*-0.111283);
}

double NNfunction-ss_uRuR::synapse0x3063040() {
   return (neuron0x3064f60()*-0.113482);
}

double NNfunction-ss_uRuR::synapse0x30712e0() {
   return (neuron0x30652a0()*0.184272);
}

double NNfunction-ss_uRuR::synapse0x3071660() {
   return (neuron0x30606e0()*0.397336);
}

double NNfunction-ss_uRuR::synapse0x30716a0() {
   return (neuron0x3060a20()*-0.0351896);
}

double NNfunction-ss_uRuR::synapse0x30716e0() {
   return (neuron0x3060d60()*0.355625);
}

double NNfunction-ss_uRuR::synapse0x3071720() {
   return (neuron0x30610a0()*0.736041);
}

double NNfunction-ss_uRuR::synapse0x3071760() {
   return (neuron0x30613e0()*0.687755);
}

double NNfunction-ss_uRuR::synapse0x30717a0() {
   return (neuron0x3061720()*1.11481);
}

double NNfunction-ss_uRuR::synapse0x30717e0() {
   return (neuron0x3061a60()*1.16811);
}

double NNfunction-ss_uRuR::synapse0x3071820() {
   return (neuron0x3061da0()*-0.0461203);
}

double NNfunction-ss_uRuR::synapse0x3071860() {
   return (neuron0x30620e0()*0.136982);
}

double NNfunction-ss_uRuR::synapse0x30718a0() {
   return (neuron0x3062420()*0.0416419);
}

double NNfunction-ss_uRuR::synapse0x30718e0() {
   return (neuron0x3062760()*0.323733);
}

double NNfunction-ss_uRuR::synapse0x3071920() {
   return (neuron0x3062aa0()*-1.26624);
}

double NNfunction-ss_uRuR::synapse0x3071960() {
   return (neuron0x3062de0()*-0.410266);
}

double NNfunction-ss_uRuR::synapse0x30719a0() {
   return (neuron0x3063120()*0.72165);
}

double NNfunction-ss_uRuR::synapse0x30719e0() {
   return (neuron0x3063460()*-1.4789);
}

double NNfunction-ss_uRuR::synapse0x3071a20() {
   return (neuron0x30637a0()*-0.383609);
}

double NNfunction-ss_uRuR::synapse0x30714b0() {
   return (neuron0x3063ae0()*0.166272);
}

double NNfunction-ss_uRuR::synapse0x30714f0() {
   return (neuron0x3064040()*-0.0156705);
}

double NNfunction-ss_uRuR::synapse0x3071b70() {
   return (neuron0x3064260()*0.565925);
}

double NNfunction-ss_uRuR::synapse0x3071bb0() {
   return (neuron0x30645a0()*0.583713);
}

double NNfunction-ss_uRuR::synapse0x3071bf0() {
   return (neuron0x30648e0()*0.217682);
}

double NNfunction-ss_uRuR::synapse0x3071c30() {
   return (neuron0x3064c20()*-0.230978);
}

double NNfunction-ss_uRuR::synapse0x3071c70() {
   return (neuron0x3064f60()*0.0740662);
}

double NNfunction-ss_uRuR::synapse0x3071cb0() {
   return (neuron0x30652a0()*0.141384);
}

double NNfunction-ss_uRuR::synapse0x3072030() {
   return (neuron0x30606e0()*0.113581);
}

double NNfunction-ss_uRuR::synapse0x3072070() {
   return (neuron0x3060a20()*-0.415078);
}

double NNfunction-ss_uRuR::synapse0x30720b0() {
   return (neuron0x3060d60()*0.109187);
}

double NNfunction-ss_uRuR::synapse0x30720f0() {
   return (neuron0x30610a0()*-0.310311);
}

double NNfunction-ss_uRuR::synapse0x3072130() {
   return (neuron0x30613e0()*-0.0184084);
}

double NNfunction-ss_uRuR::synapse0x3072170() {
   return (neuron0x3061720()*-0.214521);
}

double NNfunction-ss_uRuR::synapse0x30721b0() {
   return (neuron0x3061a60()*-0.129859);
}

double NNfunction-ss_uRuR::synapse0x30721f0() {
   return (neuron0x3061da0()*-0.0417764);
}

double NNfunction-ss_uRuR::synapse0x3072230() {
   return (neuron0x30620e0()*0.027055);
}

double NNfunction-ss_uRuR::synapse0x3072270() {
   return (neuron0x3062420()*-0.723083);
}

double NNfunction-ss_uRuR::synapse0x30722b0() {
   return (neuron0x3062760()*-0.105251);
}

double NNfunction-ss_uRuR::synapse0x30722f0() {
   return (neuron0x3062aa0()*0.308349);
}

double NNfunction-ss_uRuR::synapse0x3072330() {
   return (neuron0x3062de0()*-0.178875);
}

double NNfunction-ss_uRuR::synapse0x3072370() {
   return (neuron0x3063120()*-0.357106);
}

double NNfunction-ss_uRuR::synapse0x30723b0() {
   return (neuron0x3063460()*0.195036);
}

double NNfunction-ss_uRuR::synapse0x30723f0() {
   return (neuron0x30637a0()*-0.0667248);
}

double NNfunction-ss_uRuR::synapse0x3071e80() {
   return (neuron0x3063ae0()*-0.0230242);
}

double NNfunction-ss_uRuR::synapse0x3071ec0() {
   return (neuron0x3064040()*0.105992);
}

double NNfunction-ss_uRuR::synapse0x3072540() {
   return (neuron0x3064260()*0.1515);
}

double NNfunction-ss_uRuR::synapse0x3072580() {
   return (neuron0x30645a0()*-0.509945);
}

double NNfunction-ss_uRuR::synapse0x30725c0() {
   return (neuron0x30648e0()*0.0652373);
}

double NNfunction-ss_uRuR::synapse0x3072600() {
   return (neuron0x3064c20()*-0.0318708);
}

double NNfunction-ss_uRuR::synapse0x3072640() {
   return (neuron0x3064f60()*-0.110639);
}

double NNfunction-ss_uRuR::synapse0x3072680() {
   return (neuron0x30652a0()*-0.00881918);
}

double NNfunction-ss_uRuR::synapse0x3072a00() {
   return (neuron0x30606e0()*0.0932093);
}

double NNfunction-ss_uRuR::synapse0x3072a40() {
   return (neuron0x3060a20()*-0.0323283);
}

double NNfunction-ss_uRuR::synapse0x3072a80() {
   return (neuron0x3060d60()*-0.089797);
}

double NNfunction-ss_uRuR::synapse0x3072ac0() {
   return (neuron0x30610a0()*-0.186054);
}

double NNfunction-ss_uRuR::synapse0x3072b00() {
   return (neuron0x30613e0()*-0.234091);
}

double NNfunction-ss_uRuR::synapse0x3072b40() {
   return (neuron0x3061720()*-0.134746);
}

double NNfunction-ss_uRuR::synapse0x3072b80() {
   return (neuron0x3061a60()*-0.0780616);
}

double NNfunction-ss_uRuR::synapse0x3072bc0() {
   return (neuron0x3061da0()*0.205437);
}

double NNfunction-ss_uRuR::synapse0x3072c00() {
   return (neuron0x30620e0()*-0.00623171);
}

double NNfunction-ss_uRuR::synapse0x3072c40() {
   return (neuron0x3062420()*-0.00526842);
}

double NNfunction-ss_uRuR::synapse0x3072c80() {
   return (neuron0x3062760()*-0.0831598);
}

double NNfunction-ss_uRuR::synapse0x3072cc0() {
   return (neuron0x3062aa0()*-0.0261775);
}

double NNfunction-ss_uRuR::synapse0x3072d00() {
   return (neuron0x3062de0()*-0.038054);
}

double NNfunction-ss_uRuR::synapse0x3072d40() {
   return (neuron0x3063120()*0.125575);
}

double NNfunction-ss_uRuR::synapse0x3072d80() {
   return (neuron0x3063460()*1.4328);
}

double NNfunction-ss_uRuR::synapse0x3072dc0() {
   return (neuron0x30637a0()*1.04426);
}

double NNfunction-ss_uRuR::synapse0x3072850() {
   return (neuron0x3063ae0()*0.114187);
}

double NNfunction-ss_uRuR::synapse0x3072890() {
   return (neuron0x3064040()*0.0181884);
}

double NNfunction-ss_uRuR::synapse0x3072f10() {
   return (neuron0x3064260()*-0.212593);
}

double NNfunction-ss_uRuR::synapse0x3072f50() {
   return (neuron0x30645a0()*-0.103668);
}

double NNfunction-ss_uRuR::synapse0x3072f90() {
   return (neuron0x30648e0()*0.112094);
}

double NNfunction-ss_uRuR::synapse0x3072fd0() {
   return (neuron0x3064c20()*-0.0330566);
}

double NNfunction-ss_uRuR::synapse0x3073010() {
   return (neuron0x3064f60()*-0.118489);
}

double NNfunction-ss_uRuR::synapse0x3073050() {
   return (neuron0x30652a0()*0.0420946);
}

double NNfunction-ss_uRuR::synapse0x30733d0() {
   return (neuron0x30606e0()*-0.187523);
}

double NNfunction-ss_uRuR::synapse0x3073410() {
   return (neuron0x3060a20()*0.0794244);
}

double NNfunction-ss_uRuR::synapse0x3073450() {
   return (neuron0x3060d60()*0.067807);
}

double NNfunction-ss_uRuR::synapse0x3073490() {
   return (neuron0x30610a0()*-2.17635);
}

double NNfunction-ss_uRuR::synapse0x30734d0() {
   return (neuron0x30613e0()*-0.515349);
}

double NNfunction-ss_uRuR::synapse0x3073510() {
   return (neuron0x3061720()*-0.362367);
}

double NNfunction-ss_uRuR::synapse0x3073550() {
   return (neuron0x3061a60()*-1.14527);
}

double NNfunction-ss_uRuR::synapse0x3073590() {
   return (neuron0x3061da0()*-0.975599);
}

double NNfunction-ss_uRuR::synapse0x30735d0() {
   return (neuron0x30620e0()*1.1588);
}

double NNfunction-ss_uRuR::synapse0x3073610() {
   return (neuron0x3062420()*0.338293);
}

double NNfunction-ss_uRuR::synapse0x3073650() {
   return (neuron0x3062760()*-0.276055);
}

double NNfunction-ss_uRuR::synapse0x3073690() {
   return (neuron0x3062aa0()*-1.54271);
}

double NNfunction-ss_uRuR::synapse0x30736d0() {
   return (neuron0x3062de0()*-0.440682);
}

double NNfunction-ss_uRuR::synapse0x3073710() {
   return (neuron0x3063120()*-0.18265);
}

double NNfunction-ss_uRuR::synapse0x3073750() {
   return (neuron0x3063460()*-0.456485);
}

double NNfunction-ss_uRuR::synapse0x3073790() {
   return (neuron0x30637a0()*0.649611);
}

double NNfunction-ss_uRuR::synapse0x3073220() {
   return (neuron0x3063ae0()*0.0696573);
}

double NNfunction-ss_uRuR::synapse0x3073260() {
   return (neuron0x3064040()*2.56946);
}

double NNfunction-ss_uRuR::synapse0x30738e0() {
   return (neuron0x3064260()*0.686413);
}

double NNfunction-ss_uRuR::synapse0x3073920() {
   return (neuron0x30645a0()*0.470679);
}

double NNfunction-ss_uRuR::synapse0x3073960() {
   return (neuron0x30648e0()*-0.158812);
}

double NNfunction-ss_uRuR::synapse0x30739a0() {
   return (neuron0x3064c20()*0.681504);
}

double NNfunction-ss_uRuR::synapse0x30739e0() {
   return (neuron0x3064f60()*-0.490194);
}

double NNfunction-ss_uRuR::synapse0x3073a20() {
   return (neuron0x30652a0()*0.0875311);
}

double NNfunction-ss_uRuR::synapse0x3073da0() {
   return (neuron0x30606e0()*0.0892577);
}

double NNfunction-ss_uRuR::synapse0x3073de0() {
   return (neuron0x3060a20()*0.40693);
}

double NNfunction-ss_uRuR::synapse0x3073e20() {
   return (neuron0x3060d60()*-0.0256294);
}

double NNfunction-ss_uRuR::synapse0x3073e60() {
   return (neuron0x30610a0()*-0.598639);
}

double NNfunction-ss_uRuR::synapse0x3073ea0() {
   return (neuron0x30613e0()*0.129282);
}

double NNfunction-ss_uRuR::synapse0x3073ee0() {
   return (neuron0x3061720()*-0.0199218);
}

double NNfunction-ss_uRuR::synapse0x3073f20() {
   return (neuron0x3061a60()*0.196249);
}

double NNfunction-ss_uRuR::synapse0x3073f60() {
   return (neuron0x3061da0()*0.0148825);
}

double NNfunction-ss_uRuR::synapse0x3073fa0() {
   return (neuron0x30620e0()*-0.204252);
}

double NNfunction-ss_uRuR::synapse0x306c160() {
   return (neuron0x3062420()*0.244173);
}

double NNfunction-ss_uRuR::synapse0x306c1a0() {
   return (neuron0x3062760()*-0.149858);
}

double NNfunction-ss_uRuR::synapse0x306c1e0() {
   return (neuron0x3062aa0()*-0.164355);
}

double NNfunction-ss_uRuR::synapse0x306c220() {
   return (neuron0x3062de0()*0.370466);
}

double NNfunction-ss_uRuR::synapse0x306c260() {
   return (neuron0x3063120()*-0.104987);
}

double NNfunction-ss_uRuR::synapse0x306c2a0() {
   return (neuron0x3063460()*0.636528);
}

double NNfunction-ss_uRuR::synapse0x306c2e0() {
   return (neuron0x30637a0()*0.08078);
}

double NNfunction-ss_uRuR::synapse0x3073bf0() {
   return (neuron0x3063ae0()*0.167612);
}

double NNfunction-ss_uRuR::synapse0x3073c30() {
   return (neuron0x3064040()*0.463446);
}

double NNfunction-ss_uRuR::synapse0x306c430() {
   return (neuron0x3064260()*-0.119198);
}

double NNfunction-ss_uRuR::synapse0x306c470() {
   return (neuron0x30645a0()*-0.540726);
}

double NNfunction-ss_uRuR::synapse0x306c4b0() {
   return (neuron0x30648e0()*0.105029);
}

double NNfunction-ss_uRuR::synapse0x306c4f0() {
   return (neuron0x3064c20()*0.0400506);
}

double NNfunction-ss_uRuR::synapse0x306c530() {
   return (neuron0x3064f60()*-0.135685);
}

double NNfunction-ss_uRuR::synapse0x306c570() {
   return (neuron0x30652a0()*-0.0827709);
}

double NNfunction-ss_uRuR::synapse0x306c8f0() {
   return (neuron0x30606e0()*-0.0809081);
}

double NNfunction-ss_uRuR::synapse0x306c930() {
   return (neuron0x3060a20()*-0.539236);
}

double NNfunction-ss_uRuR::synapse0x306c970() {
   return (neuron0x3060d60()*-0.209418);
}

double NNfunction-ss_uRuR::synapse0x306c9b0() {
   return (neuron0x30610a0()*0.590723);
}

double NNfunction-ss_uRuR::synapse0x306c9f0() {
   return (neuron0x30613e0()*-0.142557);
}

double NNfunction-ss_uRuR::synapse0x306ca30() {
   return (neuron0x3061720()*-0.0465995);
}

double NNfunction-ss_uRuR::synapse0x306ca70() {
   return (neuron0x3061a60()*-0.398185);
}

double NNfunction-ss_uRuR::synapse0x306cab0() {
   return (neuron0x3061da0()*-0.194866);
}

double NNfunction-ss_uRuR::synapse0x306caf0() {
   return (neuron0x30620e0()*0.443462);
}

double NNfunction-ss_uRuR::synapse0x306cb30() {
   return (neuron0x3062420()*0.13734);
}

double NNfunction-ss_uRuR::synapse0x306cb70() {
   return (neuron0x3062760()*-0.191617);
}

double NNfunction-ss_uRuR::synapse0x306cbb0() {
   return (neuron0x3062aa0()*0.235011);
}

double NNfunction-ss_uRuR::synapse0x306cbf0() {
   return (neuron0x3062de0()*0.671691);
}

double NNfunction-ss_uRuR::synapse0x306cc30() {
   return (neuron0x3063120()*0.0132021);
}

double NNfunction-ss_uRuR::synapse0x306cc70() {
   return (neuron0x3063460()*0.895531);
}

double NNfunction-ss_uRuR::synapse0x306ccb0() {
   return (neuron0x30637a0()*-0.137563);
}

double NNfunction-ss_uRuR::synapse0x306c740() {
   return (neuron0x3063ae0()*-0.113666);
}

double NNfunction-ss_uRuR::synapse0x306c780() {
   return (neuron0x3064040()*0.622796);
}

double NNfunction-ss_uRuR::synapse0x306ce00() {
   return (neuron0x3064260()*-0.115039);
}

double NNfunction-ss_uRuR::synapse0x306ce40() {
   return (neuron0x30645a0()*0.621833);
}

double NNfunction-ss_uRuR::synapse0x306ce80() {
   return (neuron0x30648e0()*-0.87046);
}

double NNfunction-ss_uRuR::synapse0x306cec0() {
   return (neuron0x3064c20()*0.15138);
}

double NNfunction-ss_uRuR::synapse0x306cf00() {
   return (neuron0x3064f60()*-0.0970679);
}

double NNfunction-ss_uRuR::synapse0x306cf40() {
   return (neuron0x30652a0()*0.0298835);
}

double NNfunction-ss_uRuR::synapse0x306d110() {
   return (neuron0x30606e0()*-0.0671705);
}

double NNfunction-ss_uRuR::synapse0x30761a0() {
   return (neuron0x3060a20()*-0.563572);
}

double NNfunction-ss_uRuR::synapse0x30761e0() {
   return (neuron0x3060d60()*0.395303);
}

double NNfunction-ss_uRuR::synapse0x3076220() {
   return (neuron0x30610a0()*0.021984);
}

double NNfunction-ss_uRuR::synapse0x3076260() {
   return (neuron0x30613e0()*0.722592);
}

double NNfunction-ss_uRuR::synapse0x30762a0() {
   return (neuron0x3061720()*-0.619946);
}

double NNfunction-ss_uRuR::synapse0x30762e0() {
   return (neuron0x3061a60()*-1.48619);
}

double NNfunction-ss_uRuR::synapse0x3076320() {
   return (neuron0x3061da0()*-0.260701);
}

double NNfunction-ss_uRuR::synapse0x3076360() {
   return (neuron0x30620e0()*1.09653);
}

double NNfunction-ss_uRuR::synapse0x30763a0() {
   return (neuron0x3062420()*-0.0834199);
}

double NNfunction-ss_uRuR::synapse0x30763e0() {
   return (neuron0x3062760()*-0.345037);
}

double NNfunction-ss_uRuR::synapse0x3076420() {
   return (neuron0x3062aa0()*0.523233);
}

double NNfunction-ss_uRuR::synapse0x3076460() {
   return (neuron0x3062de0()*-0.480852);
}

double NNfunction-ss_uRuR::synapse0x30764a0() {
   return (neuron0x3063120()*-0.729647);
}

double NNfunction-ss_uRuR::synapse0x30764e0() {
   return (neuron0x3063460()*0.353171);
}

double NNfunction-ss_uRuR::synapse0x3076520() {
   return (neuron0x30637a0()*0.37923);
}

double NNfunction-ss_uRuR::synapse0x3075ff0() {
   return (neuron0x3063ae0()*-0.00906978);
}

double NNfunction-ss_uRuR::synapse0x3076030() {
   return (neuron0x3064040()*-0.17407);
}

double NNfunction-ss_uRuR::synapse0x3076670() {
   return (neuron0x3064260()*0.970108);
}

double NNfunction-ss_uRuR::synapse0x30766b0() {
   return (neuron0x30645a0()*-0.411641);
}

double NNfunction-ss_uRuR::synapse0x30766f0() {
   return (neuron0x30648e0()*-0.0763196);
}

double NNfunction-ss_uRuR::synapse0x3076730() {
   return (neuron0x3064c20()*0.089465);
}

double NNfunction-ss_uRuR::synapse0x3076770() {
   return (neuron0x3064f60()*-0.251892);
}

double NNfunction-ss_uRuR::synapse0x30767b0() {
   return (neuron0x30652a0()*0.751517);
}

double NNfunction-ss_uRuR::synapse0x3076b30() {
   return (neuron0x30606e0()*-0.00914954);
}

double NNfunction-ss_uRuR::synapse0x3076b70() {
   return (neuron0x3060a20()*-0.0336938);
}

double NNfunction-ss_uRuR::synapse0x3076bb0() {
   return (neuron0x3060d60()*0.0133147);
}

double NNfunction-ss_uRuR::synapse0x3076bf0() {
   return (neuron0x30610a0()*4.60522);
}

double NNfunction-ss_uRuR::synapse0x3076c30() {
   return (neuron0x30613e0()*-0.00685424);
}

double NNfunction-ss_uRuR::synapse0x3076c70() {
   return (neuron0x3061720()*-0.00309204);
}

double NNfunction-ss_uRuR::synapse0x3076cb0() {
   return (neuron0x3061a60()*0.0180665);
}

double NNfunction-ss_uRuR::synapse0x3076cf0() {
   return (neuron0x3061da0()*0.00257062);
}

double NNfunction-ss_uRuR::synapse0x3076d30() {
   return (neuron0x30620e0()*0.0437144);
}

double NNfunction-ss_uRuR::synapse0x3076d70() {
   return (neuron0x3062420()*0.0462113);
}

double NNfunction-ss_uRuR::synapse0x3076db0() {
   return (neuron0x3062760()*0.00173648);
}

double NNfunction-ss_uRuR::synapse0x3076df0() {
   return (neuron0x3062aa0()*-0.0382754);
}

double NNfunction-ss_uRuR::synapse0x3076e30() {
   return (neuron0x3062de0()*-0.000139948);
}

double NNfunction-ss_uRuR::synapse0x3076e70() {
   return (neuron0x3063120()*0.0859119);
}

double NNfunction-ss_uRuR::synapse0x3076eb0() {
   return (neuron0x3063460()*0.502143);
}

double NNfunction-ss_uRuR::synapse0x3076ef0() {
   return (neuron0x30637a0()*-0.0400758);
}

double NNfunction-ss_uRuR::synapse0x3076980() {
   return (neuron0x3063ae0()*0.00617181);
}

double NNfunction-ss_uRuR::synapse0x30769c0() {
   return (neuron0x3064040()*-0.00699077);
}

double NNfunction-ss_uRuR::synapse0x3077040() {
   return (neuron0x3064260()*0.0169678);
}

double NNfunction-ss_uRuR::synapse0x3077080() {
   return (neuron0x30645a0()*0.040038);
}

double NNfunction-ss_uRuR::synapse0x30770c0() {
   return (neuron0x30648e0()*-0.00391822);
}

double NNfunction-ss_uRuR::synapse0x3077100() {
   return (neuron0x3064c20()*-0.0153069);
}

double NNfunction-ss_uRuR::synapse0x3077140() {
   return (neuron0x3064f60()*0.00382656);
}

double NNfunction-ss_uRuR::synapse0x3077180() {
   return (neuron0x30652a0()*0.00812332);
}

double NNfunction-ss_uRuR::synapse0x3077500() {
   return (neuron0x30606e0()*-0.0438607);
}

double NNfunction-ss_uRuR::synapse0x3077540() {
   return (neuron0x3060a20()*-0.0309521);
}

double NNfunction-ss_uRuR::synapse0x3077580() {
   return (neuron0x3060d60()*0.40724);
}

double NNfunction-ss_uRuR::synapse0x30775c0() {
   return (neuron0x30610a0()*-0.178552);
}

double NNfunction-ss_uRuR::synapse0x3077600() {
   return (neuron0x30613e0()*-0.0341764);
}

double NNfunction-ss_uRuR::synapse0x3077640() {
   return (neuron0x3061720()*0.0609057);
}

double NNfunction-ss_uRuR::synapse0x3077680() {
   return (neuron0x3061a60()*0.317484);
}

double NNfunction-ss_uRuR::synapse0x30776c0() {
   return (neuron0x3061da0()*0.210043);
}

double NNfunction-ss_uRuR::synapse0x3077700() {
   return (neuron0x30620e0()*-0.0981004);
}

double NNfunction-ss_uRuR::synapse0x3077740() {
   return (neuron0x3062420()*0.0859264);
}

double NNfunction-ss_uRuR::synapse0x3077780() {
   return (neuron0x3062760()*0.0731672);
}

double NNfunction-ss_uRuR::synapse0x30777c0() {
   return (neuron0x3062aa0()*0.12671);
}

double NNfunction-ss_uRuR::synapse0x3077800() {
   return (neuron0x3062de0()*0.177048);
}

double NNfunction-ss_uRuR::synapse0x3077840() {
   return (neuron0x3063120()*0.00115558);
}

double NNfunction-ss_uRuR::synapse0x3077880() {
   return (neuron0x3063460()*-2.05635);
}

double NNfunction-ss_uRuR::synapse0x30778c0() {
   return (neuron0x30637a0()*0.198957);
}

double NNfunction-ss_uRuR::synapse0x3077350() {
   return (neuron0x3063ae0()*0.204335);
}

double NNfunction-ss_uRuR::synapse0x3077390() {
   return (neuron0x3064040()*0.120226);
}

double NNfunction-ss_uRuR::synapse0x3077a10() {
   return (neuron0x3064260()*0.0827233);
}

double NNfunction-ss_uRuR::synapse0x3077a50() {
   return (neuron0x30645a0()*-0.153601);
}

double NNfunction-ss_uRuR::synapse0x3077a90() {
   return (neuron0x30648e0()*-0.0701443);
}

double NNfunction-ss_uRuR::synapse0x3077ad0() {
   return (neuron0x3064c20()*0.0300007);
}

double NNfunction-ss_uRuR::synapse0x3077b10() {
   return (neuron0x3064f60()*-0.194337);
}

double NNfunction-ss_uRuR::synapse0x3077b50() {
   return (neuron0x30652a0()*-0.000720652);
}

double NNfunction-ss_uRuR::synapse0x3077ed0() {
   return (neuron0x30606e0()*-0.0104307);
}

double NNfunction-ss_uRuR::synapse0x3077f10() {
   return (neuron0x3060a20()*0.109325);
}

double NNfunction-ss_uRuR::synapse0x3077f50() {
   return (neuron0x3060d60()*0.0123399);
}

double NNfunction-ss_uRuR::synapse0x3077f90() {
   return (neuron0x30610a0()*3.2115);
}

double NNfunction-ss_uRuR::synapse0x3077fd0() {
   return (neuron0x30613e0()*0.0152549);
}

double NNfunction-ss_uRuR::synapse0x3078010() {
   return (neuron0x3061720()*-0.00598648);
}

double NNfunction-ss_uRuR::synapse0x3078050() {
   return (neuron0x3061a60()*-0.00624037);
}

double NNfunction-ss_uRuR::synapse0x3078090() {
   return (neuron0x3061da0()*0.0144964);
}

double NNfunction-ss_uRuR::synapse0x30780d0() {
   return (neuron0x30620e0()*-0.0420504);
}

double NNfunction-ss_uRuR::synapse0x3078110() {
   return (neuron0x3062420()*-0.0283332);
}

double NNfunction-ss_uRuR::synapse0x3078150() {
   return (neuron0x3062760()*0.0566453);
}

double NNfunction-ss_uRuR::synapse0x3078190() {
   return (neuron0x3062aa0()*0.0299);
}

double NNfunction-ss_uRuR::synapse0x30781d0() {
   return (neuron0x3062de0()*-0.0567706);
}

double NNfunction-ss_uRuR::synapse0x3078210() {
   return (neuron0x3063120()*-0.0446975);
}

double NNfunction-ss_uRuR::synapse0x3078250() {
   return (neuron0x3063460()*1.9156);
}

double NNfunction-ss_uRuR::synapse0x3078290() {
   return (neuron0x30637a0()*-0.018494);
}

double NNfunction-ss_uRuR::synapse0x3077d20() {
   return (neuron0x3063ae0()*0.0321019);
}

double NNfunction-ss_uRuR::synapse0x3077d60() {
   return (neuron0x3064040()*-0.0309571);
}

double NNfunction-ss_uRuR::synapse0x30783e0() {
   return (neuron0x3064260()*-0.0145766);
}

double NNfunction-ss_uRuR::synapse0x3078420() {
   return (neuron0x30645a0()*-0.150548);
}

double NNfunction-ss_uRuR::synapse0x3078460() {
   return (neuron0x30648e0()*0.00154157);
}

double NNfunction-ss_uRuR::synapse0x30784a0() {
   return (neuron0x3064c20()*0.00649892);
}

double NNfunction-ss_uRuR::synapse0x30784e0() {
   return (neuron0x3064f60()*-0.0566564);
}

double NNfunction-ss_uRuR::synapse0x3078520() {
   return (neuron0x30652a0()*0.016432);
}

double NNfunction-ss_uRuR::synapse0x30788a0() {
   return (neuron0x30606e0()*0.0792205);
}

double NNfunction-ss_uRuR::synapse0x30788e0() {
   return (neuron0x3060a20()*-1.07397);
}

double NNfunction-ss_uRuR::synapse0x3078920() {
   return (neuron0x3060d60()*0.282077);
}

double NNfunction-ss_uRuR::synapse0x3078960() {
   return (neuron0x30610a0()*-0.311583);
}

double NNfunction-ss_uRuR::synapse0x30789a0() {
   return (neuron0x30613e0()*-0.230884);
}

double NNfunction-ss_uRuR::synapse0x30789e0() {
   return (neuron0x3061720()*-0.54838);
}

double NNfunction-ss_uRuR::synapse0x3078a20() {
   return (neuron0x3061a60()*0.147552);
}

double NNfunction-ss_uRuR::synapse0x3078a60() {
   return (neuron0x3061da0()*0.933932);
}

double NNfunction-ss_uRuR::synapse0x3078aa0() {
   return (neuron0x30620e0()*0.19321);
}

double NNfunction-ss_uRuR::synapse0x3078ae0() {
   return (neuron0x3062420()*0.746252);
}

double NNfunction-ss_uRuR::synapse0x3078b20() {
   return (neuron0x3062760()*1.45347);
}

double NNfunction-ss_uRuR::synapse0x3078b60() {
   return (neuron0x3062aa0()*0.49509);
}

double NNfunction-ss_uRuR::synapse0x3078ba0() {
   return (neuron0x3062de0()*0.0567439);
}

double NNfunction-ss_uRuR::synapse0x3078be0() {
   return (neuron0x3063120()*0.548536);
}

double NNfunction-ss_uRuR::synapse0x3078c20() {
   return (neuron0x3063460()*-0.242214);
}

double NNfunction-ss_uRuR::synapse0x3078c60() {
   return (neuron0x30637a0()*0.0638769);
}

double NNfunction-ss_uRuR::synapse0x30786f0() {
   return (neuron0x3063ae0()*0.183596);
}

double NNfunction-ss_uRuR::synapse0x3078730() {
   return (neuron0x3064040()*-0.248827);
}

double NNfunction-ss_uRuR::synapse0x3078db0() {
   return (neuron0x3064260()*0.140302);
}

double NNfunction-ss_uRuR::synapse0x3078df0() {
   return (neuron0x30645a0()*-0.215566);
}

double NNfunction-ss_uRuR::synapse0x3078e30() {
   return (neuron0x30648e0()*0.112167);
}

double NNfunction-ss_uRuR::synapse0x3078e70() {
   return (neuron0x3064c20()*0.0184918);
}

double NNfunction-ss_uRuR::synapse0x3078eb0() {
   return (neuron0x3064f60()*0.536965);
}

double NNfunction-ss_uRuR::synapse0x3078ef0() {
   return (neuron0x30652a0()*0.104778);
}

double NNfunction-ss_uRuR::synapse0x3079270() {
   return (neuron0x30606e0()*0.0508356);
}

double NNfunction-ss_uRuR::synapse0x30792b0() {
   return (neuron0x3060a20()*-0.747586);
}

double NNfunction-ss_uRuR::synapse0x30792f0() {
   return (neuron0x3060d60()*0.360813);
}

double NNfunction-ss_uRuR::synapse0x3079330() {
   return (neuron0x30610a0()*-0.835126);
}

double NNfunction-ss_uRuR::synapse0x3079370() {
   return (neuron0x30613e0()*0.0430164);
}

double NNfunction-ss_uRuR::synapse0x30793b0() {
   return (neuron0x3061720()*0.144271);
}

double NNfunction-ss_uRuR::synapse0x30793f0() {
   return (neuron0x3061a60()*0.310979);
}

double NNfunction-ss_uRuR::synapse0x3079430() {
   return (neuron0x3061da0()*0.0716253);
}

double NNfunction-ss_uRuR::synapse0x3079470() {
   return (neuron0x30620e0()*-1.02592);
}

double NNfunction-ss_uRuR::synapse0x30794b0() {
   return (neuron0x3062420()*0.0349358);
}

double NNfunction-ss_uRuR::synapse0x30794f0() {
   return (neuron0x3062760()*0.517164);
}

double NNfunction-ss_uRuR::synapse0x3079530() {
   return (neuron0x3062aa0()*0.158447);
}

double NNfunction-ss_uRuR::synapse0x3079570() {
   return (neuron0x3062de0()*0.370749);
}

double NNfunction-ss_uRuR::synapse0x30795b0() {
   return (neuron0x3063120()*-0.185294);
}

double NNfunction-ss_uRuR::synapse0x30795f0() {
   return (neuron0x3063460()*-1.12912);
}

double NNfunction-ss_uRuR::synapse0x3079630() {
   return (neuron0x30637a0()*0.383305);
}

double NNfunction-ss_uRuR::synapse0x30790c0() {
   return (neuron0x3063ae0()*-0.172423);
}

double NNfunction-ss_uRuR::synapse0x3079100() {
   return (neuron0x3064040()*0.167286);
}

double NNfunction-ss_uRuR::synapse0x3079780() {
   return (neuron0x3064260()*-0.0442466);
}

double NNfunction-ss_uRuR::synapse0x30797c0() {
   return (neuron0x30645a0()*0.138442);
}

double NNfunction-ss_uRuR::synapse0x3079800() {
   return (neuron0x30648e0()*0.296654);
}

double NNfunction-ss_uRuR::synapse0x3079840() {
   return (neuron0x3064c20()*-0.0475637);
}

double NNfunction-ss_uRuR::synapse0x3079880() {
   return (neuron0x3064f60()*-0.362249);
}

double NNfunction-ss_uRuR::synapse0x30798c0() {
   return (neuron0x30652a0()*0.0213921);
}

double NNfunction-ss_uRuR::synapse0x3079c40() {
   return (neuron0x30606e0()*0.0872716);
}

double NNfunction-ss_uRuR::synapse0x3079c80() {
   return (neuron0x3060a20()*0.00596286);
}

double NNfunction-ss_uRuR::synapse0x3079cc0() {
   return (neuron0x3060d60()*-0.0045164);
}

double NNfunction-ss_uRuR::synapse0x3079d00() {
   return (neuron0x30610a0()*0.0493159);
}

double NNfunction-ss_uRuR::synapse0x3079d40() {
   return (neuron0x30613e0()*0.267649);
}

double NNfunction-ss_uRuR::synapse0x3079d80() {
   return (neuron0x3061720()*-0.0129881);
}

double NNfunction-ss_uRuR::synapse0x3079dc0() {
   return (neuron0x3061a60()*-0.104882);
}

double NNfunction-ss_uRuR::synapse0x3079e00() {
   return (neuron0x3061da0()*0.450022);
}

double NNfunction-ss_uRuR::synapse0x3079e40() {
   return (neuron0x30620e0()*0.00815829);
}

double NNfunction-ss_uRuR::synapse0x3079e80() {
   return (neuron0x3062420()*0.0124528);
}

double NNfunction-ss_uRuR::synapse0x3079ec0() {
   return (neuron0x3062760()*0.0354233);
}

double NNfunction-ss_uRuR::synapse0x3079f00() {
   return (neuron0x3062aa0()*0.0101144);
}

double NNfunction-ss_uRuR::synapse0x3079f40() {
   return (neuron0x3062de0()*-0.023034);
}

double NNfunction-ss_uRuR::synapse0x3079f80() {
   return (neuron0x3063120()*0.0413299);
}

double NNfunction-ss_uRuR::synapse0x3079fc0() {
   return (neuron0x3063460()*1.4033);
}

double NNfunction-ss_uRuR::synapse0x307a000() {
   return (neuron0x30637a0()*0.146455);
}

double NNfunction-ss_uRuR::synapse0x3079a90() {
   return (neuron0x3063ae0()*0.077794);
}

double NNfunction-ss_uRuR::synapse0x3079ad0() {
   return (neuron0x3064040()*-0.0213399);
}

double NNfunction-ss_uRuR::synapse0x307a150() {
   return (neuron0x3064260()*-0.0311057);
}

double NNfunction-ss_uRuR::synapse0x307a190() {
   return (neuron0x30645a0()*-0.0743192);
}

double NNfunction-ss_uRuR::synapse0x307a1d0() {
   return (neuron0x30648e0()*-0.0961773);
}

double NNfunction-ss_uRuR::synapse0x307a210() {
   return (neuron0x3064c20()*-0.214824);
}

double NNfunction-ss_uRuR::synapse0x307a250() {
   return (neuron0x3064f60()*0.0167071);
}

double NNfunction-ss_uRuR::synapse0x307a290() {
   return (neuron0x30652a0()*0.117318);
}

double NNfunction-ss_uRuR::synapse0x307a610() {
   return (neuron0x30606e0()*-0.164213);
}

double NNfunction-ss_uRuR::synapse0x307a650() {
   return (neuron0x3060a20()*-0.225296);
}

double NNfunction-ss_uRuR::synapse0x307a690() {
   return (neuron0x3060d60()*-0.419299);
}

double NNfunction-ss_uRuR::synapse0x307a6d0() {
   return (neuron0x30610a0()*-0.560436);
}

double NNfunction-ss_uRuR::synapse0x307a710() {
   return (neuron0x30613e0()*0.106643);
}

double NNfunction-ss_uRuR::synapse0x307a750() {
   return (neuron0x3061720()*0.195288);
}

double NNfunction-ss_uRuR::synapse0x307a790() {
   return (neuron0x3061a60()*0.374294);
}

double NNfunction-ss_uRuR::synapse0x307a7d0() {
   return (neuron0x3061da0()*0.388609);
}

double NNfunction-ss_uRuR::synapse0x307a810() {
   return (neuron0x30620e0()*-0.308218);
}

double NNfunction-ss_uRuR::synapse0x307a850() {
   return (neuron0x3062420()*0.331951);
}

double NNfunction-ss_uRuR::synapse0x307a890() {
   return (neuron0x3062760()*-0.260126);
}

double NNfunction-ss_uRuR::synapse0x307a8d0() {
   return (neuron0x3062aa0()*0.151347);
}

double NNfunction-ss_uRuR::synapse0x307a910() {
   return (neuron0x3062de0()*-0.0314908);
}

double NNfunction-ss_uRuR::synapse0x307a950() {
   return (neuron0x3063120()*-0.288012);
}

double NNfunction-ss_uRuR::synapse0x307a990() {
   return (neuron0x3063460()*-0.126865);
}

double NNfunction-ss_uRuR::synapse0x307a9d0() {
   return (neuron0x30637a0()*-0.205639);
}

double NNfunction-ss_uRuR::synapse0x307a460() {
   return (neuron0x3063ae0()*-0.293976);
}

double NNfunction-ss_uRuR::synapse0x307a4a0() {
   return (neuron0x3064040()*0.174252);
}

double NNfunction-ss_uRuR::synapse0x307ab20() {
   return (neuron0x3064260()*1.07149);
}

double NNfunction-ss_uRuR::synapse0x307ab60() {
   return (neuron0x30645a0()*-0.387044);
}

double NNfunction-ss_uRuR::synapse0x307aba0() {
   return (neuron0x30648e0()*-0.353872);
}

double NNfunction-ss_uRuR::synapse0x307abe0() {
   return (neuron0x3064c20()*0.368858);
}

double NNfunction-ss_uRuR::synapse0x307ac20() {
   return (neuron0x3064f60()*-0.699949);
}

double NNfunction-ss_uRuR::synapse0x307ac60() {
   return (neuron0x30652a0()*0.10002);
}

double NNfunction-ss_uRuR::synapse0x307afe0() {
   return (neuron0x30606e0()*-0.558359);
}

double NNfunction-ss_uRuR::synapse0x306f5b0() {
   return (neuron0x3060a20()*0.00952894);
}

double NNfunction-ss_uRuR::synapse0x306f5f0() {
   return (neuron0x3060d60()*-0.208472);
}

double NNfunction-ss_uRuR::synapse0x306f630() {
   return (neuron0x30610a0()*-0.111367);
}

double NNfunction-ss_uRuR::synapse0x306f880() {
   return (neuron0x30613e0()*-0.881029);
}

double NNfunction-ss_uRuR::synapse0x306f8c0() {
   return (neuron0x3061720()*-0.255419);
}

double NNfunction-ss_uRuR::synapse0x306f900() {
   return (neuron0x3061a60()*-0.366972);
}

double NNfunction-ss_uRuR::synapse0x306fb50() {
   return (neuron0x3061da0()*0.00263472);
}

double NNfunction-ss_uRuR::synapse0x306fb90() {
   return (neuron0x30620e0()*-0.157508);
}

double NNfunction-ss_uRuR::synapse0x306fde0() {
   return (neuron0x3062420()*-0.174763);
}

double NNfunction-ss_uRuR::synapse0x306fe20() {
   return (neuron0x3062760()*-0.325821);
}

double NNfunction-ss_uRuR::synapse0x306fe60() {
   return (neuron0x3062aa0()*-0.587782);
}

double NNfunction-ss_uRuR::synapse0x30700b0() {
   return (neuron0x3062de0()*-0.0344517);
}

double NNfunction-ss_uRuR::synapse0x30700f0() {
   return (neuron0x3063120()*-0.535393);
}

double NNfunction-ss_uRuR::synapse0x3070340() {
   return (neuron0x3063460()*0.484377);
}

double NNfunction-ss_uRuR::synapse0x3070380() {
   return (neuron0x30637a0()*-0.387484);
}

double NNfunction-ss_uRuR::synapse0x307ae30() {
   return (neuron0x3063ae0()*0.518911);
}

double NNfunction-ss_uRuR::synapse0x307ae70() {
   return (neuron0x3064040()*1.22499);
}

double NNfunction-ss_uRuR::synapse0x30704d0() {
   return (neuron0x3064260()*0.638635);
}

double NNfunction-ss_uRuR::synapse0x30709e0() {
   return (neuron0x30645a0()*0.232502);
}

double NNfunction-ss_uRuR::synapse0x3070a20() {
   return (neuron0x30648e0()*0.167752);
}

double NNfunction-ss_uRuR::synapse0x3070a60() {
   return (neuron0x3064c20()*0.370268);
}

double NNfunction-ss_uRuR::synapse0x3070cb0() {
   return (neuron0x3064f60()*0.158394);
}

double NNfunction-ss_uRuR::synapse0x3070cf0() {
   return (neuron0x30652a0()*-0.0627571);
}

double NNfunction-ss_uRuR::synapse0x30705a0() {
   return (neuron0x30606e0()*-0.0386521);
}

double NNfunction-ss_uRuR::synapse0x30705e0() {
   return (neuron0x3060a20()*0.0514753);
}

double NNfunction-ss_uRuR::synapse0x3070620() {
   return (neuron0x3060d60()*0.0394559);
}

double NNfunction-ss_uRuR::synapse0x3070660() {
   return (neuron0x30610a0()*0.0847251);
}

double NNfunction-ss_uRuR::synapse0x3070fe0() {
   return (neuron0x30613e0()*0.000355878);
}

double NNfunction-ss_uRuR::synapse0x307d330() {
   return (neuron0x3061720()*-0.111565);
}

double NNfunction-ss_uRuR::synapse0x307d370() {
   return (neuron0x3061a60()*-0.103154);
}

double NNfunction-ss_uRuR::synapse0x307d3b0() {
   return (neuron0x3061da0()*-0.076293);
}

double NNfunction-ss_uRuR::synapse0x307d3f0() {
   return (neuron0x30620e0()*0.0277838);
}

double NNfunction-ss_uRuR::synapse0x307d430() {
   return (neuron0x3062420()*-0.0195439);
}

double NNfunction-ss_uRuR::synapse0x307d470() {
   return (neuron0x3062760()*0.0789658);
}

double NNfunction-ss_uRuR::synapse0x307d4b0() {
   return (neuron0x3062aa0()*0.102502);
}

double NNfunction-ss_uRuR::synapse0x307d4f0() {
   return (neuron0x3062de0()*0.0775545);
}

double NNfunction-ss_uRuR::synapse0x307d530() {
   return (neuron0x3063120()*0.0513258);
}

double NNfunction-ss_uRuR::synapse0x307d570() {
   return (neuron0x3063460()*2.83517);
}

double NNfunction-ss_uRuR::synapse0x307d5b0() {
   return (neuron0x30637a0()*0.216251);
}

double NNfunction-ss_uRuR::synapse0x3070ec0() {
   return (neuron0x3063ae0()*0.23771);
}

double NNfunction-ss_uRuR::synapse0x3070f00() {
   return (neuron0x3064040()*0.140173);
}

double NNfunction-ss_uRuR::synapse0x307d700() {
   return (neuron0x3064260()*-0.0073664);
}

double NNfunction-ss_uRuR::synapse0x307d740() {
   return (neuron0x30645a0()*0.0108747);
}

double NNfunction-ss_uRuR::synapse0x307d780() {
   return (neuron0x30648e0()*0.0129301);
}

double NNfunction-ss_uRuR::synapse0x307d7c0() {
   return (neuron0x3064c20()*0.11056);
}

double NNfunction-ss_uRuR::synapse0x307d800() {
   return (neuron0x3064f60()*0.095901);
}

double NNfunction-ss_uRuR::synapse0x307d840() {
   return (neuron0x30652a0()*-0.0861235);
}

double NNfunction-ss_uRuR::synapse0x307dbc0() {
   return (neuron0x30606e0()*-0.317668);
}

double NNfunction-ss_uRuR::synapse0x307dc00() {
   return (neuron0x3060a20()*0.0229525);
}

double NNfunction-ss_uRuR::synapse0x307dc40() {
   return (neuron0x3060d60()*0.208599);
}

double NNfunction-ss_uRuR::synapse0x307dc80() {
   return (neuron0x30610a0()*-1.03372);
}

double NNfunction-ss_uRuR::synapse0x307dcc0() {
   return (neuron0x30613e0()*-0.289994);
}

double NNfunction-ss_uRuR::synapse0x307dd00() {
   return (neuron0x3061720()*0.0638357);
}

double NNfunction-ss_uRuR::synapse0x307dd40() {
   return (neuron0x3061a60()*0.108783);
}

double NNfunction-ss_uRuR::synapse0x307dd80() {
   return (neuron0x3061da0()*-0.394193);
}

double NNfunction-ss_uRuR::synapse0x307ddc0() {
   return (neuron0x30620e0()*0.208803);
}

double NNfunction-ss_uRuR::synapse0x307de00() {
   return (neuron0x3062420()*0.120046);
}

double NNfunction-ss_uRuR::synapse0x307de40() {
   return (neuron0x3062760()*0.167081);
}

double NNfunction-ss_uRuR::synapse0x307de80() {
   return (neuron0x3062aa0()*0.234596);
}

double NNfunction-ss_uRuR::synapse0x307dec0() {
   return (neuron0x3062de0()*0.510808);
}

double NNfunction-ss_uRuR::synapse0x307df00() {
   return (neuron0x3063120()*-0.661741);
}

double NNfunction-ss_uRuR::synapse0x307df40() {
   return (neuron0x3063460()*0.820581);
}

double NNfunction-ss_uRuR::synapse0x307df80() {
   return (neuron0x30637a0()*-0.382776);
}

double NNfunction-ss_uRuR::synapse0x307da10() {
   return (neuron0x3063ae0()*-0.131636);
}

double NNfunction-ss_uRuR::synapse0x307da50() {
   return (neuron0x3064040()*0.27045);
}

double NNfunction-ss_uRuR::synapse0x307e0d0() {
   return (neuron0x3064260()*0.100254);
}

double NNfunction-ss_uRuR::synapse0x307e110() {
   return (neuron0x30645a0()*0.358792);
}

double NNfunction-ss_uRuR::synapse0x307e150() {
   return (neuron0x30648e0()*-0.101353);
}

double NNfunction-ss_uRuR::synapse0x307e190() {
   return (neuron0x3064c20()*0.113956);
}

double NNfunction-ss_uRuR::synapse0x307e1d0() {
   return (neuron0x3064f60()*-0.0321984);
}

double NNfunction-ss_uRuR::synapse0x307e210() {
   return (neuron0x30652a0()*-0.0206571);
}

double NNfunction-ss_uRuR::synapse0x307e590() {
   return (neuron0x30606e0()*0.250523);
}

double NNfunction-ss_uRuR::synapse0x307e5d0() {
   return (neuron0x3060a20()*-0.166277);
}

double NNfunction-ss_uRuR::synapse0x307e610() {
   return (neuron0x3060d60()*0.341812);
}

double NNfunction-ss_uRuR::synapse0x307e650() {
   return (neuron0x30610a0()*-0.829774);
}

double NNfunction-ss_uRuR::synapse0x307e690() {
   return (neuron0x30613e0()*-0.14488);
}

double NNfunction-ss_uRuR::synapse0x307e6d0() {
   return (neuron0x3061720()*-0.102311);
}

double NNfunction-ss_uRuR::synapse0x307e710() {
   return (neuron0x3061a60()*1.39798);
}

double NNfunction-ss_uRuR::synapse0x307e750() {
   return (neuron0x3061da0()*0.308042);
}

double NNfunction-ss_uRuR::synapse0x307e790() {
   return (neuron0x30620e0()*-0.277319);
}

double NNfunction-ss_uRuR::synapse0x307e7d0() {
   return (neuron0x3062420()*-0.3774);
}

double NNfunction-ss_uRuR::synapse0x307e810() {
   return (neuron0x3062760()*1.0749);
}

double NNfunction-ss_uRuR::synapse0x307e850() {
   return (neuron0x3062aa0()*0.407514);
}

double NNfunction-ss_uRuR::synapse0x307e890() {
   return (neuron0x3062de0()*-1.55141);
}

double NNfunction-ss_uRuR::synapse0x307e8d0() {
   return (neuron0x3063120()*0.61709);
}

double NNfunction-ss_uRuR::synapse0x307e910() {
   return (neuron0x3063460()*-0.113586);
}

double NNfunction-ss_uRuR::synapse0x307e950() {
   return (neuron0x30637a0()*-0.0528563);
}

double NNfunction-ss_uRuR::synapse0x307e3e0() {
   return (neuron0x3063ae0()*0.396513);
}

double NNfunction-ss_uRuR::synapse0x307e420() {
   return (neuron0x3064040()*0.823651);
}

double NNfunction-ss_uRuR::synapse0x307eaa0() {
   return (neuron0x3064260()*-0.170551);
}

double NNfunction-ss_uRuR::synapse0x307eae0() {
   return (neuron0x30645a0()*-0.276947);
}

double NNfunction-ss_uRuR::synapse0x307eb20() {
   return (neuron0x30648e0()*0.550881);
}

double NNfunction-ss_uRuR::synapse0x307eb60() {
   return (neuron0x3064c20()*-0.820308);
}

double NNfunction-ss_uRuR::synapse0x307eba0() {
   return (neuron0x3064f60()*0.372565);
}

double NNfunction-ss_uRuR::synapse0x307ebe0() {
   return (neuron0x30652a0()*-0.0947651);
}

double NNfunction-ss_uRuR::synapse0x307ef60() {
   return (neuron0x30606e0()*0.10855);
}

double NNfunction-ss_uRuR::synapse0x307efa0() {
   return (neuron0x3060a20()*-0.0873756);
}

double NNfunction-ss_uRuR::synapse0x307efe0() {
   return (neuron0x3060d60()*-0.132506);
}

double NNfunction-ss_uRuR::synapse0x307f020() {
   return (neuron0x30610a0()*-0.14711);
}

double NNfunction-ss_uRuR::synapse0x307f060() {
   return (neuron0x30613e0()*-0.219281);
}

double NNfunction-ss_uRuR::synapse0x307f0a0() {
   return (neuron0x3061720()*-0.0494308);
}

double NNfunction-ss_uRuR::synapse0x307f0e0() {
   return (neuron0x3061a60()*-0.119995);
}

double NNfunction-ss_uRuR::synapse0x307f120() {
   return (neuron0x3061da0()*-0.133243);
}

double NNfunction-ss_uRuR::synapse0x307f160() {
   return (neuron0x30620e0()*-0.267537);
}

double NNfunction-ss_uRuR::synapse0x307f1a0() {
   return (neuron0x3062420()*-0.184972);
}

double NNfunction-ss_uRuR::synapse0x307f1e0() {
   return (neuron0x3062760()*-0.453583);
}

double NNfunction-ss_uRuR::synapse0x307f220() {
   return (neuron0x3062aa0()*-0.234275);
}

double NNfunction-ss_uRuR::synapse0x307f260() {
   return (neuron0x3062de0()*0.0683466);
}

double NNfunction-ss_uRuR::synapse0x307f2a0() {
   return (neuron0x3063120()*-0.548201);
}

double NNfunction-ss_uRuR::synapse0x307f2e0() {
   return (neuron0x3063460()*0.27809);
}

double NNfunction-ss_uRuR::synapse0x307f320() {
   return (neuron0x30637a0()*-0.351349);
}

double NNfunction-ss_uRuR::synapse0x307edb0() {
   return (neuron0x3063ae0()*-0.38657);
}

double NNfunction-ss_uRuR::synapse0x307edf0() {
   return (neuron0x3064040()*-0.0788175);
}

double NNfunction-ss_uRuR::synapse0x307f470() {
   return (neuron0x3064260()*-0.211739);
}

double NNfunction-ss_uRuR::synapse0x307f4b0() {
   return (neuron0x30645a0()*0.241998);
}

double NNfunction-ss_uRuR::synapse0x307f4f0() {
   return (neuron0x30648e0()*0.111909);
}

double NNfunction-ss_uRuR::synapse0x307f530() {
   return (neuron0x3064c20()*0.415464);
}

double NNfunction-ss_uRuR::synapse0x307f570() {
   return (neuron0x3064f60()*0.140091);
}

double NNfunction-ss_uRuR::synapse0x307f5b0() {
   return (neuron0x30652a0()*-0.0608652);
}

double NNfunction-ss_uRuR::synapse0x307f930() {
   return (neuron0x30606e0()*-0.0336433);
}

double NNfunction-ss_uRuR::synapse0x307f970() {
   return (neuron0x3060a20()*-0.0140277);
}

double NNfunction-ss_uRuR::synapse0x307f9b0() {
   return (neuron0x3060d60()*-0.0730438);
}

double NNfunction-ss_uRuR::synapse0x307f9f0() {
   return (neuron0x30610a0()*-0.0143055);
}

double NNfunction-ss_uRuR::synapse0x307fa30() {
   return (neuron0x30613e0()*-0.220396);
}

double NNfunction-ss_uRuR::synapse0x307fa70() {
   return (neuron0x3061720()*0.197444);
}

double NNfunction-ss_uRuR::synapse0x307fab0() {
   return (neuron0x3061a60()*-0.449277);
}

double NNfunction-ss_uRuR::synapse0x307faf0() {
   return (neuron0x3061da0()*0.309661);
}

double NNfunction-ss_uRuR::synapse0x307fb30() {
   return (neuron0x30620e0()*0.11259);
}

double NNfunction-ss_uRuR::synapse0x307fb70() {
   return (neuron0x3062420()*-0.00840862);
}

double NNfunction-ss_uRuR::synapse0x307fbb0() {
   return (neuron0x3062760()*-0.00154285);
}

double NNfunction-ss_uRuR::synapse0x307fbf0() {
   return (neuron0x3062aa0()*0.0493548);
}

double NNfunction-ss_uRuR::synapse0x307fc30() {
   return (neuron0x3062de0()*0.0483237);
}

double NNfunction-ss_uRuR::synapse0x307fc70() {
   return (neuron0x3063120()*0.106212);
}

double NNfunction-ss_uRuR::synapse0x307fcb0() {
   return (neuron0x3063460()*-1.05511);
}

double NNfunction-ss_uRuR::synapse0x307fcf0() {
   return (neuron0x30637a0()*-0.08817);
}

double NNfunction-ss_uRuR::synapse0x307f780() {
   return (neuron0x3063ae0()*0.0171847);
}

double NNfunction-ss_uRuR::synapse0x307f7c0() {
   return (neuron0x3064040()*0.053556);
}

double NNfunction-ss_uRuR::synapse0x307fe40() {
   return (neuron0x3064260()*0.0489576);
}

double NNfunction-ss_uRuR::synapse0x307fe80() {
   return (neuron0x30645a0()*0.018743);
}

double NNfunction-ss_uRuR::synapse0x307fec0() {
   return (neuron0x30648e0()*-0.0554627);
}

double NNfunction-ss_uRuR::synapse0x307ff00() {
   return (neuron0x3064c20()*0.0377908);
}

double NNfunction-ss_uRuR::synapse0x307ff40() {
   return (neuron0x3064f60()*0.0943115);
}

double NNfunction-ss_uRuR::synapse0x307ff80() {
   return (neuron0x30652a0()*-0.0191943);
}

double NNfunction-ss_uRuR::synapse0x3080300() {
   return (neuron0x30606e0()*0.0284971);
}

double NNfunction-ss_uRuR::synapse0x3080340() {
   return (neuron0x3060a20()*0.0509606);
}

double NNfunction-ss_uRuR::synapse0x3080380() {
   return (neuron0x3060d60()*0.0326015);
}

double NNfunction-ss_uRuR::synapse0x30803c0() {
   return (neuron0x30610a0()*2.48052);
}

double NNfunction-ss_uRuR::synapse0x3080400() {
   return (neuron0x30613e0()*0.0373476);
}

double NNfunction-ss_uRuR::synapse0x3080440() {
   return (neuron0x3061720()*-0.024822);
}

double NNfunction-ss_uRuR::synapse0x3080480() {
   return (neuron0x3061a60()*-0.0162164);
}

double NNfunction-ss_uRuR::synapse0x30804c0() {
   return (neuron0x3061da0()*-0.0343814);
}

double NNfunction-ss_uRuR::synapse0x3080500() {
   return (neuron0x30620e0()*0.0105133);
}

double NNfunction-ss_uRuR::synapse0x3080540() {
   return (neuron0x3062420()*0.0357171);
}

double NNfunction-ss_uRuR::synapse0x3080580() {
   return (neuron0x3062760()*0.05556);
}

double NNfunction-ss_uRuR::synapse0x30805c0() {
   return (neuron0x3062aa0()*-0.00695339);
}

double NNfunction-ss_uRuR::synapse0x3080600() {
   return (neuron0x3062de0()*-0.0618865);
}

double NNfunction-ss_uRuR::synapse0x3080640() {
   return (neuron0x3063120()*-0.0356003);
}

double NNfunction-ss_uRuR::synapse0x3080680() {
   return (neuron0x3063460()*-2.095);
}

double NNfunction-ss_uRuR::synapse0x30806c0() {
   return (neuron0x30637a0()*-0.0770807);
}

double NNfunction-ss_uRuR::synapse0x3080150() {
   return (neuron0x3063ae0()*-0.0259014);
}

double NNfunction-ss_uRuR::synapse0x3080190() {
   return (neuron0x3064040()*0.02271);
}

double NNfunction-ss_uRuR::synapse0x3080810() {
   return (neuron0x3064260()*0.0373357);
}

double NNfunction-ss_uRuR::synapse0x3080850() {
   return (neuron0x30645a0()*-0.0111347);
}

double NNfunction-ss_uRuR::synapse0x3080890() {
   return (neuron0x30648e0()*-0.0498894);
}

double NNfunction-ss_uRuR::synapse0x30808d0() {
   return (neuron0x3064c20()*0.0668037);
}

double NNfunction-ss_uRuR::synapse0x3080910() {
   return (neuron0x3064f60()*-0.0439675);
}

double NNfunction-ss_uRuR::synapse0x3080950() {
   return (neuron0x30652a0()*-0.0135425);
}

double NNfunction-ss_uRuR::synapse0x3080cd0() {
   return (neuron0x30606e0()*-0.199279);
}

double NNfunction-ss_uRuR::synapse0x3080d10() {
   return (neuron0x3060a20()*-0.109639);
}

double NNfunction-ss_uRuR::synapse0x3080d50() {
   return (neuron0x3060d60()*-0.308);
}

double NNfunction-ss_uRuR::synapse0x3080d90() {
   return (neuron0x30610a0()*-1.32684);
}

double NNfunction-ss_uRuR::synapse0x3080dd0() {
   return (neuron0x30613e0()*-0.367582);
}

double NNfunction-ss_uRuR::synapse0x3080e10() {
   return (neuron0x3061720()*-0.182257);
}

double NNfunction-ss_uRuR::synapse0x3080e50() {
   return (neuron0x3061a60()*-0.7537);
}

double NNfunction-ss_uRuR::synapse0x3080e90() {
   return (neuron0x3061da0()*-0.999099);
}

double NNfunction-ss_uRuR::synapse0x3080ed0() {
   return (neuron0x30620e0()*0.606267);
}

double NNfunction-ss_uRuR::synapse0x3080f10() {
   return (neuron0x3062420()*0.301105);
}

double NNfunction-ss_uRuR::synapse0x3080f50() {
   return (neuron0x3062760()*-0.209348);
}

double NNfunction-ss_uRuR::synapse0x3080f90() {
   return (neuron0x3062aa0()*-1.33254);
}

double NNfunction-ss_uRuR::synapse0x3080fd0() {
   return (neuron0x3062de0()*-0.403978);
}

double NNfunction-ss_uRuR::synapse0x3081010() {
   return (neuron0x3063120()*0.210684);
}

double NNfunction-ss_uRuR::synapse0x3081050() {
   return (neuron0x3063460()*1.08418);
}

double NNfunction-ss_uRuR::synapse0x3081090() {
   return (neuron0x30637a0()*0.712566);
}

double NNfunction-ss_uRuR::synapse0x3080b20() {
   return (neuron0x3063ae0()*0.065591);
}

double NNfunction-ss_uRuR::synapse0x3080b60() {
   return (neuron0x3064040()*1.74712);
}

double NNfunction-ss_uRuR::synapse0x30811e0() {
   return (neuron0x3064260()*0.548826);
}

double NNfunction-ss_uRuR::synapse0x3081220() {
   return (neuron0x30645a0()*0.352716);
}

double NNfunction-ss_uRuR::synapse0x3081260() {
   return (neuron0x30648e0()*-0.557486);
}

double NNfunction-ss_uRuR::synapse0x30812a0() {
   return (neuron0x3064c20()*0.527809);
}

double NNfunction-ss_uRuR::synapse0x30812e0() {
   return (neuron0x3064f60()*-0.22298);
}

double NNfunction-ss_uRuR::synapse0x3081320() {
   return (neuron0x30652a0()*0.150591);
}

double NNfunction-ss_uRuR::synapse0x30816a0() {
   return (neuron0x30606e0()*-0.298654);
}

double NNfunction-ss_uRuR::synapse0x30816e0() {
   return (neuron0x3060a20()*-0.0269744);
}

double NNfunction-ss_uRuR::synapse0x3081720() {
   return (neuron0x3060d60()*0.00781832);
}

double NNfunction-ss_uRuR::synapse0x3081760() {
   return (neuron0x30610a0()*0.214785);
}

double NNfunction-ss_uRuR::synapse0x30817a0() {
   return (neuron0x30613e0()*0.15222);
}

double NNfunction-ss_uRuR::synapse0x30817e0() {
   return (neuron0x3061720()*0.0279445);
}

double NNfunction-ss_uRuR::synapse0x3081820() {
   return (neuron0x3061a60()*-0.160617);
}

double NNfunction-ss_uRuR::synapse0x3081860() {
   return (neuron0x3061da0()*0.145601);
}

double NNfunction-ss_uRuR::synapse0x30818a0() {
   return (neuron0x30620e0()*0.447702);
}

double NNfunction-ss_uRuR::synapse0x30818e0() {
   return (neuron0x3062420()*-0.432801);
}

double NNfunction-ss_uRuR::synapse0x3081920() {
   return (neuron0x3062760()*-0.00320437);
}

double NNfunction-ss_uRuR::synapse0x3081960() {
   return (neuron0x3062aa0()*-0.245923);
}

double NNfunction-ss_uRuR::synapse0x30819a0() {
   return (neuron0x3062de0()*0.50779);
}

double NNfunction-ss_uRuR::synapse0x30819e0() {
   return (neuron0x3063120()*0.0124194);
}

double NNfunction-ss_uRuR::synapse0x3081a20() {
   return (neuron0x3063460()*-1.28557);
}

double NNfunction-ss_uRuR::synapse0x3081a60() {
   return (neuron0x30637a0()*-0.0268285);
}

double NNfunction-ss_uRuR::synapse0x30814f0() {
   return (neuron0x3063ae0()*-0.00915137);
}

double NNfunction-ss_uRuR::synapse0x3081530() {
   return (neuron0x3064040()*-0.199754);
}

double NNfunction-ss_uRuR::synapse0x3081bb0() {
   return (neuron0x3064260()*-0.250868);
}

double NNfunction-ss_uRuR::synapse0x3081bf0() {
   return (neuron0x30645a0()*-0.158474);
}

double NNfunction-ss_uRuR::synapse0x3081c30() {
   return (neuron0x30648e0()*-0.12034);
}

double NNfunction-ss_uRuR::synapse0x3081c70() {
   return (neuron0x3064c20()*-0.289778);
}

double NNfunction-ss_uRuR::synapse0x3081cb0() {
   return (neuron0x3064f60()*0.233883);
}

double NNfunction-ss_uRuR::synapse0x3081cf0() {
   return (neuron0x30652a0()*0.0421469);
}

double NNfunction-ss_uRuR::synapse0x306a7a0() {
   return (neuron0x30606e0()*-0.481317);
}

double NNfunction-ss_uRuR::synapse0x306a7e0() {
   return (neuron0x3060a20()*0.104743);
}

double NNfunction-ss_uRuR::synapse0x306a820() {
   return (neuron0x3060d60()*-0.061256);
}

double NNfunction-ss_uRuR::synapse0x306a860() {
   return (neuron0x30610a0()*1.48781);
}

double NNfunction-ss_uRuR::synapse0x306a8a0() {
   return (neuron0x30613e0()*-0.417704);
}

double NNfunction-ss_uRuR::synapse0x306a8e0() {
   return (neuron0x3061720()*-0.0356715);
}

double NNfunction-ss_uRuR::synapse0x306a920() {
   return (neuron0x3061a60()*-0.296249);
}

double NNfunction-ss_uRuR::synapse0x306a960() {
   return (neuron0x3061da0()*0.0916304);
}

double NNfunction-ss_uRuR::synapse0x3082480() {
   return (neuron0x30620e0()*-0.429893);
}

double NNfunction-ss_uRuR::synapse0x30824c0() {
   return (neuron0x3062420()*-0.100119);
}

double NNfunction-ss_uRuR::synapse0x3082500() {
   return (neuron0x3062760()*-0.888954);
}

double NNfunction-ss_uRuR::synapse0x3082540() {
   return (neuron0x3062aa0()*0.532747);
}

double NNfunction-ss_uRuR::synapse0x3082580() {
   return (neuron0x3062de0()*0.187145);
}

double NNfunction-ss_uRuR::synapse0x30825c0() {
   return (neuron0x3063120()*-0.13729);
}

double NNfunction-ss_uRuR::synapse0x3082600() {
   return (neuron0x3063460()*1.09348);
}

double NNfunction-ss_uRuR::synapse0x3082640() {
   return (neuron0x30637a0()*-0.213613);
}

double NNfunction-ss_uRuR::synapse0x3081ec0() {
   return (neuron0x3063ae0()*-0.678556);
}

double NNfunction-ss_uRuR::synapse0x3081f00() {
   return (neuron0x3064040()*-0.0401403);
}

double NNfunction-ss_uRuR::synapse0x3082790() {
   return (neuron0x3064260()*0.665676);
}

double NNfunction-ss_uRuR::synapse0x30827d0() {
   return (neuron0x30645a0()*-0.445387);
}

double NNfunction-ss_uRuR::synapse0x3082810() {
   return (neuron0x30648e0()*0.426251);
}

double NNfunction-ss_uRuR::synapse0x3082850() {
   return (neuron0x3064c20()*-0.107489);
}

double NNfunction-ss_uRuR::synapse0x3082890() {
   return (neuron0x3064f60()*0.341369);
}

double NNfunction-ss_uRuR::synapse0x30828d0() {
   return (neuron0x30652a0()*0.670711);
}

double NNfunction-ss_uRuR::synapse0x3082c50() {
   return (neuron0x30606e0()*-0.0030752);
}

double NNfunction-ss_uRuR::synapse0x3082c90() {
   return (neuron0x3060a20()*-0.0528742);
}

double NNfunction-ss_uRuR::synapse0x3082cd0() {
   return (neuron0x3060d60()*-0.0246572);
}

double NNfunction-ss_uRuR::synapse0x3082d10() {
   return (neuron0x30610a0()*0.142813);
}

double NNfunction-ss_uRuR::synapse0x3082d50() {
   return (neuron0x30613e0()*-0.0838294);
}

double NNfunction-ss_uRuR::synapse0x3082d90() {
   return (neuron0x3061720()*-0.187473);
}

double NNfunction-ss_uRuR::synapse0x3082dd0() {
   return (neuron0x3061a60()*-0.307892);
}

double NNfunction-ss_uRuR::synapse0x3082e10() {
   return (neuron0x3061da0()*-0.241218);
}

double NNfunction-ss_uRuR::synapse0x3082e50() {
   return (neuron0x30620e0()*-0.0650177);
}

double NNfunction-ss_uRuR::synapse0x3082e90() {
   return (neuron0x3062420()*-0.026693);
}

double NNfunction-ss_uRuR::synapse0x3082ed0() {
   return (neuron0x3062760()*-0.118296);
}

double NNfunction-ss_uRuR::synapse0x3082f10() {
   return (neuron0x3062aa0()*0.0630824);
}

double NNfunction-ss_uRuR::synapse0x3082f50() {
   return (neuron0x3062de0()*0.0917029);
}

double NNfunction-ss_uRuR::synapse0x3082f90() {
   return (neuron0x3063120()*-0.0174984);
}

double NNfunction-ss_uRuR::synapse0x3082fd0() {
   return (neuron0x3063460()*1.19589);
}

double NNfunction-ss_uRuR::synapse0x3083010() {
   return (neuron0x30637a0()*-0.0028315);
}

double NNfunction-ss_uRuR::synapse0x3082aa0() {
   return (neuron0x3063ae0()*0.0146642);
}

double NNfunction-ss_uRuR::synapse0x3082ae0() {
   return (neuron0x3064040()*0.00526052);
}

double NNfunction-ss_uRuR::synapse0x3083160() {
   return (neuron0x3064260()*0.0041907);
}

double NNfunction-ss_uRuR::synapse0x30831a0() {
   return (neuron0x30645a0()*0.0184304);
}

double NNfunction-ss_uRuR::synapse0x30831e0() {
   return (neuron0x30648e0()*-0.032479);
}

double NNfunction-ss_uRuR::synapse0x3083220() {
   return (neuron0x3064c20()*-0.061734);
}

double NNfunction-ss_uRuR::synapse0x3083260() {
   return (neuron0x3064f60()*-0.0585727);
}

double NNfunction-ss_uRuR::synapse0x30832a0() {
   return (neuron0x30652a0()*0.0428081);
}

double NNfunction-ss_uRuR::synapse0x3083620() {
   return (neuron0x30606e0()*-0.0225851);
}

double NNfunction-ss_uRuR::synapse0x3083660() {
   return (neuron0x3060a20()*0.0211959);
}

double NNfunction-ss_uRuR::synapse0x30836a0() {
   return (neuron0x3060d60()*-0.00421544);
}

double NNfunction-ss_uRuR::synapse0x30836e0() {
   return (neuron0x30610a0()*-0.103559);
}

double NNfunction-ss_uRuR::synapse0x3083720() {
   return (neuron0x30613e0()*-0.0314645);
}

double NNfunction-ss_uRuR::synapse0x3083760() {
   return (neuron0x3061720()*-0.0494806);
}

double NNfunction-ss_uRuR::synapse0x30837a0() {
   return (neuron0x3061a60()*0.0227428);
}

double NNfunction-ss_uRuR::synapse0x30837e0() {
   return (neuron0x3061da0()*0.0136695);
}

double NNfunction-ss_uRuR::synapse0x3083820() {
   return (neuron0x30620e0()*0.00739205);
}

double NNfunction-ss_uRuR::synapse0x3083860() {
   return (neuron0x3062420()*-0.0127302);
}

double NNfunction-ss_uRuR::synapse0x30838a0() {
   return (neuron0x3062760()*0.0293479);
}

double NNfunction-ss_uRuR::synapse0x30838e0() {
   return (neuron0x3062aa0()*0.00542108);
}

double NNfunction-ss_uRuR::synapse0x3083920() {
   return (neuron0x3062de0()*0.0172849);
}

double NNfunction-ss_uRuR::synapse0x3083960() {
   return (neuron0x3063120()*0.0360762);
}

double NNfunction-ss_uRuR::synapse0x30839a0() {
   return (neuron0x3063460()*2.08108);
}

double NNfunction-ss_uRuR::synapse0x30839e0() {
   return (neuron0x30637a0()*-0.0139188);
}

double NNfunction-ss_uRuR::synapse0x3083470() {
   return (neuron0x3063ae0()*-0.0469586);
}

double NNfunction-ss_uRuR::synapse0x30834b0() {
   return (neuron0x3064040()*0.0131432);
}

double NNfunction-ss_uRuR::synapse0x3073fe0() {
   return (neuron0x3064260()*0.0268495);
}

double NNfunction-ss_uRuR::synapse0x3074020() {
   return (neuron0x30645a0()*0.0104042);
}

double NNfunction-ss_uRuR::synapse0x3074060() {
   return (neuron0x30648e0()*-0.0576398);
}

double NNfunction-ss_uRuR::synapse0x30740a0() {
   return (neuron0x3064c20()*0.0353189);
}

double NNfunction-ss_uRuR::synapse0x30740e0() {
   return (neuron0x3064f60()*0.0223768);
}

double NNfunction-ss_uRuR::synapse0x3074120() {
   return (neuron0x30652a0()*0.00315477);
}

double NNfunction-ss_uRuR::synapse0x30744a0() {
   return (neuron0x30606e0()*-0.204858);
}

double NNfunction-ss_uRuR::synapse0x30744e0() {
   return (neuron0x3060a20()*0.172367);
}

double NNfunction-ss_uRuR::synapse0x3074520() {
   return (neuron0x3060d60()*-0.309624);
}

double NNfunction-ss_uRuR::synapse0x3074560() {
   return (neuron0x30610a0()*0.28919);
}

double NNfunction-ss_uRuR::synapse0x30745a0() {
   return (neuron0x30613e0()*-0.510088);
}

double NNfunction-ss_uRuR::synapse0x30745e0() {
   return (neuron0x3061720()*0.656086);
}

double NNfunction-ss_uRuR::synapse0x3074620() {
   return (neuron0x3061a60()*0.237755);
}

double NNfunction-ss_uRuR::synapse0x3074660() {
   return (neuron0x3061da0()*-0.51788);
}

double NNfunction-ss_uRuR::synapse0x30746a0() {
   return (neuron0x30620e0()*0.0959066);
}

double NNfunction-ss_uRuR::synapse0x30746e0() {
   return (neuron0x3062420()*-0.176938);
}

double NNfunction-ss_uRuR::synapse0x3074720() {
   return (neuron0x3062760()*-0.0323086);
}

double NNfunction-ss_uRuR::synapse0x3074760() {
   return (neuron0x3062aa0()*-0.0961535);
}

double NNfunction-ss_uRuR::synapse0x30747a0() {
   return (neuron0x3062de0()*-0.365456);
}

double NNfunction-ss_uRuR::synapse0x30747e0() {
   return (neuron0x3063120()*0.209096);
}

double NNfunction-ss_uRuR::synapse0x3074820() {
   return (neuron0x3063460()*0.135396);
}

double NNfunction-ss_uRuR::synapse0x3074860() {
   return (neuron0x30637a0()*0.240373);
}

double NNfunction-ss_uRuR::synapse0x30742f0() {
   return (neuron0x3063ae0()*0.263876);
}

double NNfunction-ss_uRuR::synapse0x3074330() {
   return (neuron0x3064040()*-0.0766112);
}

double NNfunction-ss_uRuR::synapse0x30749b0() {
   return (neuron0x3064260()*-0.0929492);
}

double NNfunction-ss_uRuR::synapse0x30749f0() {
   return (neuron0x30645a0()*0.0120678);
}

double NNfunction-ss_uRuR::synapse0x3074a30() {
   return (neuron0x30648e0()*-0.503612);
}

double NNfunction-ss_uRuR::synapse0x3074a70() {
   return (neuron0x3064c20()*-0.121329);
}

double NNfunction-ss_uRuR::synapse0x3074ab0() {
   return (neuron0x3064f60()*0.135485);
}

double NNfunction-ss_uRuR::synapse0x3074af0() {
   return (neuron0x30652a0()*-0.0427553);
}

double NNfunction-ss_uRuR::synapse0x3074e70() {
   return (neuron0x30606e0()*-0.0325326);
}

double NNfunction-ss_uRuR::synapse0x3074eb0() {
   return (neuron0x3060a20()*0.00392187);
}

double NNfunction-ss_uRuR::synapse0x3074ef0() {
   return (neuron0x3060d60()*-0.00240351);
}

double NNfunction-ss_uRuR::synapse0x3074f30() {
   return (neuron0x30610a0()*0.019246);
}

double NNfunction-ss_uRuR::synapse0x3074f70() {
   return (neuron0x30613e0()*-0.0276881);
}

double NNfunction-ss_uRuR::synapse0x3074fb0() {
   return (neuron0x3061720()*-0.0308267);
}

double NNfunction-ss_uRuR::synapse0x3074ff0() {
   return (neuron0x3061a60()*-0.00268643);
}

double NNfunction-ss_uRuR::synapse0x3075030() {
   return (neuron0x3061da0()*-0.0145504);
}

double NNfunction-ss_uRuR::synapse0x3075070() {
   return (neuron0x30620e0()*-0.0369261);
}

double NNfunction-ss_uRuR::synapse0x30750b0() {
   return (neuron0x3062420()*-0.0252847);
}

double NNfunction-ss_uRuR::synapse0x30750f0() {
   return (neuron0x3062760()*-0.00753399);
}

double NNfunction-ss_uRuR::synapse0x3075130() {
   return (neuron0x3062aa0()*0.0216704);
}

double NNfunction-ss_uRuR::synapse0x3075170() {
   return (neuron0x3062de0()*0.011904);
}

double NNfunction-ss_uRuR::synapse0x30751b0() {
   return (neuron0x3063120()*0.00937347);
}

double NNfunction-ss_uRuR::synapse0x30751f0() {
   return (neuron0x3063460()*3.94633);
}

double NNfunction-ss_uRuR::synapse0x3075230() {
   return (neuron0x30637a0()*-0.0134325);
}

double NNfunction-ss_uRuR::synapse0x3074cc0() {
   return (neuron0x3063ae0()*-0.0557791);
}

double NNfunction-ss_uRuR::synapse0x3074d00() {
   return (neuron0x3064040()*-0.00117558);
}

double NNfunction-ss_uRuR::synapse0x3075380() {
   return (neuron0x3064260()*0.0163628);
}

double NNfunction-ss_uRuR::synapse0x30753c0() {
   return (neuron0x30645a0()*-0.00762822);
}

double NNfunction-ss_uRuR::synapse0x3075400() {
   return (neuron0x30648e0()*-0.0170142);
}

double NNfunction-ss_uRuR::synapse0x3075440() {
   return (neuron0x3064c20()*0.0249117);
}

double NNfunction-ss_uRuR::synapse0x3075480() {
   return (neuron0x3064f60()*0.0139695);
}

double NNfunction-ss_uRuR::synapse0x30754c0() {
   return (neuron0x30652a0()*0.00951262);
}

double NNfunction-ss_uRuR::synapse0x3075840() {
   return (neuron0x30606e0()*-0.0144269);
}

double NNfunction-ss_uRuR::synapse0x3075880() {
   return (neuron0x3060a20()*0.512045);
}

double NNfunction-ss_uRuR::synapse0x30758c0() {
   return (neuron0x3060d60()*-0.104695);
}

double NNfunction-ss_uRuR::synapse0x3075900() {
   return (neuron0x30610a0()*-0.722594);
}

double NNfunction-ss_uRuR::synapse0x3075940() {
   return (neuron0x30613e0()*0.0445486);
}

double NNfunction-ss_uRuR::synapse0x3075980() {
   return (neuron0x3061720()*-0.191903);
}

double NNfunction-ss_uRuR::synapse0x30759c0() {
   return (neuron0x3061a60()*-0.175707);
}

double NNfunction-ss_uRuR::synapse0x3075a00() {
   return (neuron0x3061da0()*0.0418747);
}

double NNfunction-ss_uRuR::synapse0x3075a40() {
   return (neuron0x30620e0()*-0.232634);
}

double NNfunction-ss_uRuR::synapse0x3075a80() {
   return (neuron0x3062420()*-0.24111);
}

double NNfunction-ss_uRuR::synapse0x3075ac0() {
   return (neuron0x3062760()*0.156849);
}

double NNfunction-ss_uRuR::synapse0x3075b00() {
   return (neuron0x3062aa0()*0.666743);
}

double NNfunction-ss_uRuR::synapse0x3075b40() {
   return (neuron0x3062de0()*-0.3463);
}

double NNfunction-ss_uRuR::synapse0x3075b80() {
   return (neuron0x3063120()*-0.22774);
}

double NNfunction-ss_uRuR::synapse0x3075bc0() {
   return (neuron0x3063460()*1.18318);
}

double NNfunction-ss_uRuR::synapse0x3075c00() {
   return (neuron0x30637a0()*0.128967);
}

double NNfunction-ss_uRuR::synapse0x3075690() {
   return (neuron0x3063ae0()*-0.0235141);
}

double NNfunction-ss_uRuR::synapse0x30756d0() {
   return (neuron0x3064040()*-0.067964);
}

double NNfunction-ss_uRuR::synapse0x3075d50() {
   return (neuron0x3064260()*-0.735619);
}

double NNfunction-ss_uRuR::synapse0x3075d90() {
   return (neuron0x30645a0()*0.110663);
}

double NNfunction-ss_uRuR::synapse0x3075dd0() {
   return (neuron0x30648e0()*-0.0682074);
}

double NNfunction-ss_uRuR::synapse0x3075e10() {
   return (neuron0x3064c20()*0.0629263);
}

double NNfunction-ss_uRuR::synapse0x3075e50() {
   return (neuron0x3064f60()*-0.00480072);
}

double NNfunction-ss_uRuR::synapse0x3075e90() {
   return (neuron0x30652a0()*-0.0260138);
}

double NNfunction-ss_uRuR::synapse0x3087d60() {
   return (neuron0x30606e0()*0.0293197);
}

double NNfunction-ss_uRuR::synapse0x3087da0() {
   return (neuron0x3060a20()*0.00226815);
}

double NNfunction-ss_uRuR::synapse0x3087de0() {
   return (neuron0x3060d60()*0.0242999);
}

double NNfunction-ss_uRuR::synapse0x3087e20() {
   return (neuron0x30610a0()*-0.304269);
}

double NNfunction-ss_uRuR::synapse0x3087e60() {
   return (neuron0x30613e0()*0.0076413);
}

double NNfunction-ss_uRuR::synapse0x3087ea0() {
   return (neuron0x3061720()*0.0355157);
}

double NNfunction-ss_uRuR::synapse0x3087ee0() {
   return (neuron0x3061a60()*0.0855687);
}

double NNfunction-ss_uRuR::synapse0x3087f20() {
   return (neuron0x3061da0()*0.0902198);
}

double NNfunction-ss_uRuR::synapse0x3087f60() {
   return (neuron0x30620e0()*0.174378);
}

double NNfunction-ss_uRuR::synapse0x3087fa0() {
   return (neuron0x3062420()*0.100761);
}

double NNfunction-ss_uRuR::synapse0x3087fe0() {
   return (neuron0x3062760()*0.155042);
}

double NNfunction-ss_uRuR::synapse0x3088020() {
   return (neuron0x3062aa0()*-0.294085);
}

double NNfunction-ss_uRuR::synapse0x3088060() {
   return (neuron0x3062de0()*-0.34212);
}

double NNfunction-ss_uRuR::synapse0x30880a0() {
   return (neuron0x3063120()*0.0196267);
}

double NNfunction-ss_uRuR::synapse0x30880e0() {
   return (neuron0x3063460()*-0.237481);
}

double NNfunction-ss_uRuR::synapse0x3088120() {
   return (neuron0x30637a0()*-0.0855274);
}

double NNfunction-ss_uRuR::synapse0x3075ed0() {
   return (neuron0x3063ae0()*0.0325378);
}

double NNfunction-ss_uRuR::synapse0x3075f10() {
   return (neuron0x3064040()*-0.16537);
}

double NNfunction-ss_uRuR::synapse0x3088270() {
   return (neuron0x3064260()*-0.194374);
}

double NNfunction-ss_uRuR::synapse0x30882b0() {
   return (neuron0x30645a0()*-0.0947821);
}

double NNfunction-ss_uRuR::synapse0x30882f0() {
   return (neuron0x30648e0()*0.0446961);
}

double NNfunction-ss_uRuR::synapse0x3088330() {
   return (neuron0x3064c20()*0.0157367);
}

double NNfunction-ss_uRuR::synapse0x3088370() {
   return (neuron0x3064f60()*-0.00332002);
}

double NNfunction-ss_uRuR::synapse0x30883b0() {
   return (neuron0x30652a0()*-0.0221277);
}

double NNfunction-ss_uRuR::synapse0x3088730() {
   return (neuron0x30606e0()*-0.252053);
}

double NNfunction-ss_uRuR::synapse0x3088770() {
   return (neuron0x3060a20()*-0.0534239);
}

double NNfunction-ss_uRuR::synapse0x30887b0() {
   return (neuron0x3060d60()*-0.315683);
}

double NNfunction-ss_uRuR::synapse0x30887f0() {
   return (neuron0x30610a0()*0.0986274);
}

double NNfunction-ss_uRuR::synapse0x3088830() {
   return (neuron0x30613e0()*-0.300209);
}

double NNfunction-ss_uRuR::synapse0x3088870() {
   return (neuron0x3061720()*-0.768072);
}

double NNfunction-ss_uRuR::synapse0x30888b0() {
   return (neuron0x3061a60()*-0.569116);
}

double NNfunction-ss_uRuR::synapse0x30888f0() {
   return (neuron0x3061da0()*-0.115645);
}

double NNfunction-ss_uRuR::synapse0x3088930() {
   return (neuron0x30620e0()*0.321828);
}

double NNfunction-ss_uRuR::synapse0x3088970() {
   return (neuron0x3062420()*-0.0495701);
}

double NNfunction-ss_uRuR::synapse0x30889b0() {
   return (neuron0x3062760()*-0.167108);
}

double NNfunction-ss_uRuR::synapse0x30889f0() {
   return (neuron0x3062aa0()*-1.55942);
}

double NNfunction-ss_uRuR::synapse0x3088a30() {
   return (neuron0x3062de0()*0.4059);
}

double NNfunction-ss_uRuR::synapse0x3088a70() {
   return (neuron0x3063120()*-0.781416);
}

double NNfunction-ss_uRuR::synapse0x3088ab0() {
   return (neuron0x3063460()*0.67692);
}

double NNfunction-ss_uRuR::synapse0x3088af0() {
   return (neuron0x30637a0()*-0.22227);
}

double NNfunction-ss_uRuR::synapse0x3088580() {
   return (neuron0x3063ae0()*0.547593);
}

double NNfunction-ss_uRuR::synapse0x30885c0() {
   return (neuron0x3064040()*0.472576);
}

double NNfunction-ss_uRuR::synapse0x3088c40() {
   return (neuron0x3064260()*0.324368);
}

double NNfunction-ss_uRuR::synapse0x3088c80() {
   return (neuron0x30645a0()*0.293888);
}

double NNfunction-ss_uRuR::synapse0x3088cc0() {
   return (neuron0x30648e0()*-0.283278);
}

double NNfunction-ss_uRuR::synapse0x3088d00() {
   return (neuron0x3064c20()*-0.212463);
}

double NNfunction-ss_uRuR::synapse0x3088d40() {
   return (neuron0x3064f60()*0.417155);
}

double NNfunction-ss_uRuR::synapse0x3088d80() {
   return (neuron0x30652a0()*-0.0670045);
}

double NNfunction-ss_uRuR::synapse0x3089100() {
   return (neuron0x30606e0()*-0.072942);
}

double NNfunction-ss_uRuR::synapse0x3089140() {
   return (neuron0x3060a20()*0.0225878);
}

double NNfunction-ss_uRuR::synapse0x3089180() {
   return (neuron0x3060d60()*0.0289219);
}

double NNfunction-ss_uRuR::synapse0x30891c0() {
   return (neuron0x30610a0()*0.767863);
}

double NNfunction-ss_uRuR::synapse0x3089200() {
   return (neuron0x30613e0()*-0.148421);
}

double NNfunction-ss_uRuR::synapse0x3089240() {
   return (neuron0x3061720()*0.0412318);
}

double NNfunction-ss_uRuR::synapse0x3089280() {
   return (neuron0x3061a60()*-0.197828);
}

double NNfunction-ss_uRuR::synapse0x30892c0() {
   return (neuron0x3061da0()*-0.199737);
}

double NNfunction-ss_uRuR::synapse0x3089300() {
   return (neuron0x30620e0()*-0.104437);
}

double NNfunction-ss_uRuR::synapse0x3089340() {
   return (neuron0x3062420()*0.0838829);
}

double NNfunction-ss_uRuR::synapse0x3089380() {
   return (neuron0x3062760()*-0.438773);
}

double NNfunction-ss_uRuR::synapse0x30893c0() {
   return (neuron0x3062aa0()*-0.0429342);
}

double NNfunction-ss_uRuR::synapse0x3089400() {
   return (neuron0x3062de0()*0.211628);
}

double NNfunction-ss_uRuR::synapse0x3089440() {
   return (neuron0x3063120()*-0.0912542);
}

double NNfunction-ss_uRuR::synapse0x3089480() {
   return (neuron0x3063460()*0.630594);
}

double NNfunction-ss_uRuR::synapse0x30894c0() {
   return (neuron0x30637a0()*0.273165);
}

double NNfunction-ss_uRuR::synapse0x3088f50() {
   return (neuron0x3063ae0()*-0.0964501);
}

double NNfunction-ss_uRuR::synapse0x3088f90() {
   return (neuron0x3064040()*-0.875035);
}

double NNfunction-ss_uRuR::synapse0x3089610() {
   return (neuron0x3064260()*-0.738038);
}

double NNfunction-ss_uRuR::synapse0x3089650() {
   return (neuron0x30645a0()*-0.0339414);
}

double NNfunction-ss_uRuR::synapse0x3089690() {
   return (neuron0x30648e0()*0.0380984);
}

double NNfunction-ss_uRuR::synapse0x30896d0() {
   return (neuron0x3064c20()*-0.0750378);
}

double NNfunction-ss_uRuR::synapse0x3089710() {
   return (neuron0x3064f60()*-0.0662672);
}

double NNfunction-ss_uRuR::synapse0x3089750() {
   return (neuron0x30652a0()*-0.127407);
}

double NNfunction-ss_uRuR::synapse0x3089ad0() {
   return (neuron0x30606e0()*0.0186216);
}

double NNfunction-ss_uRuR::synapse0x3089b10() {
   return (neuron0x3060a20()*-0.027432);
}

double NNfunction-ss_uRuR::synapse0x3089b50() {
   return (neuron0x3060d60()*-0.214438);
}

double NNfunction-ss_uRuR::synapse0x3089b90() {
   return (neuron0x30610a0()*-0.263709);
}

double NNfunction-ss_uRuR::synapse0x3089bd0() {
   return (neuron0x30613e0()*0.139407);
}

double NNfunction-ss_uRuR::synapse0x3089c10() {
   return (neuron0x3061720()*0.0837375);
}

double NNfunction-ss_uRuR::synapse0x3089c50() {
   return (neuron0x3061a60()*0.205056);
}

double NNfunction-ss_uRuR::synapse0x3089c90() {
   return (neuron0x3061da0()*-0.028039);
}

double NNfunction-ss_uRuR::synapse0x3089cd0() {
   return (neuron0x30620e0()*0.0864801);
}

double NNfunction-ss_uRuR::synapse0x3089d10() {
   return (neuron0x3062420()*0.00297373);
}

double NNfunction-ss_uRuR::synapse0x3089d50() {
   return (neuron0x3062760()*-0.00701666);
}

double NNfunction-ss_uRuR::synapse0x3089d90() {
   return (neuron0x3062aa0()*-0.0459376);
}

double NNfunction-ss_uRuR::synapse0x3089dd0() {
   return (neuron0x3062de0()*0.0795092);
}

double NNfunction-ss_uRuR::synapse0x3089e10() {
   return (neuron0x3063120()*0.656979);
}

double NNfunction-ss_uRuR::synapse0x3089e50() {
   return (neuron0x3063460()*-1.83495);
}

double NNfunction-ss_uRuR::synapse0x3089e90() {
   return (neuron0x30637a0()*0.257871);
}

double NNfunction-ss_uRuR::synapse0x3089920() {
   return (neuron0x3063ae0()*0.16291);
}

double NNfunction-ss_uRuR::synapse0x3089960() {
   return (neuron0x3064040()*-0.0197838);
}

double NNfunction-ss_uRuR::synapse0x3089fe0() {
   return (neuron0x3064260()*0.0973973);
}

double NNfunction-ss_uRuR::synapse0x308a020() {
   return (neuron0x30645a0()*0.0541133);
}

double NNfunction-ss_uRuR::synapse0x308a060() {
   return (neuron0x30648e0()*-0.0877122);
}

double NNfunction-ss_uRuR::synapse0x308a0a0() {
   return (neuron0x3064c20()*-0.0374521);
}

double NNfunction-ss_uRuR::synapse0x308a0e0() {
   return (neuron0x3064f60()*0.0612345);
}

double NNfunction-ss_uRuR::synapse0x308a120() {
   return (neuron0x30652a0()*0.0894041);
}

double NNfunction-ss_uRuR::synapse0x2e2a020() {
   return (neuron0x3065710()*0.110379);
}

double NNfunction-ss_uRuR::synapse0x2e2a060() {
   return (neuron0x3066060()*-1.94789);
}

double NNfunction-ss_uRuR::synapse0x3067bd0() {
   return (neuron0x3066b40()*-0.655755);
}

double NNfunction-ss_uRuR::synapse0x3067c10() {
   return (neuron0x30665e0()*-0.658699);
}

double NNfunction-ss_uRuR::synapse0x30685a0() {
   return (neuron0x3067920()*-0.0646347);
}

double NNfunction-ss_uRuR::synapse0x30685e0() {
   return (neuron0x30682f0()*0.985244);
}

double NNfunction-ss_uRuR::synapse0x3069370() {
   return (neuron0x30690c0()*-0.289107);
}

double NNfunction-ss_uRuR::synapse0x30693b0() {
   return (neuron0x3069a90()*-0.0295582);
}

double NNfunction-ss_uRuR::synapse0x3069d40() {
   return (neuron0x306a460()*-1.55707);
}

double NNfunction-ss_uRuR::synapse0x3069d80() {
   return (neuron0x306af40()*-0.303051);
}

double NNfunction-ss_uRuR::synapse0x306a710() {
   return (neuron0x306b910()*-0.684048);
}

double NNfunction-ss_uRuR::synapse0x306a750() {
   return (neuron0x30689f0()*-0.32745);
}

double NNfunction-ss_uRuR::synapse0x306b1f0() {
   return (neuron0x306d4c0()*-0.429456);
}

double NNfunction-ss_uRuR::synapse0x306b230() {
   return (neuron0x306de90()*-0.505674);
}

double NNfunction-ss_uRuR::synapse0x306bbc0() {
   return (neuron0x306e860()*-0.405274);
}

double NNfunction-ss_uRuR::synapse0x306bc00() {
   return (neuron0x306f230()*0.241252);
}

double NNfunction-ss_uRuR::synapse0x3068ca0() {
   return (neuron0x3071040()*-0.117896);
}

double NNfunction-ss_uRuR::synapse0x3068ce0() {
   return (neuron0x3071320()*-0.442048);
}

double NNfunction-ss_uRuR::synapse0x306d770() {
   return (neuron0x3071cf0()*-0.241982);
}

double NNfunction-ss_uRuR::synapse0x306d7b0() {
   return (neuron0x30726c0()*1.02625);
}

double NNfunction-ss_uRuR::synapse0x306e140() {
   return (neuron0x3073090()*-0.269988);
}

double NNfunction-ss_uRuR::synapse0x306e180() {
   return (neuron0x3073a60()*0.0410495);
}

double NNfunction-ss_uRuR::synapse0x306eb10() {
   return (neuron0x306c5b0()*-0.496907);
}

double NNfunction-ss_uRuR::synapse0x306eb50() {
   return (neuron0x306cf80()*-0.0197575);
}

double NNfunction-ss_uRuR::synapse0x306f4e0() {
   return (neuron0x30767f0()*-0.156058);
}

double NNfunction-ss_uRuR::synapse0x306f520() {
   return (neuron0x30771c0()*-0.675929);
}

double NNfunction-ss_uRuR::synapse0x3063680() {
   return (neuron0x3077b90()*0.289152);
}

double NNfunction-ss_uRuR::synapse0x30636c0() {
   return (neuron0x3078560()*-0.0241204);
}

double NNfunction-ss_uRuR::synapse0x30715d0() {
   return (neuron0x3078f30()*-0.602206);
}

double NNfunction-ss_uRuR::synapse0x3071610() {
   return (neuron0x3079900()*0.890403);
}

double NNfunction-ss_uRuR::synapse0x3071fa0() {
   return (neuron0x307a2d0()*0.118584);
}

double NNfunction-ss_uRuR::synapse0x3071fe0() {
   return (neuron0x307aca0()*0.496563);
}

double NNfunction-ss_uRuR::synapse0x3072970() {
   return (neuron0x3070d30()*0.321764);
}

double NNfunction-ss_uRuR::synapse0x30729b0() {
   return (neuron0x307d880()*0.410258);
}

double NNfunction-ss_uRuR::synapse0x3073340() {
   return (neuron0x307e250()*-0.148745);
}

double NNfunction-ss_uRuR::synapse0x3073380() {
   return (neuron0x307ec20()*-0.234011);
}

double NNfunction-ss_uRuR::synapse0x3073d10() {
   return (neuron0x307f5f0()*-1.1407);
}

double NNfunction-ss_uRuR::synapse0x3073d50() {
   return (neuron0x307ffc0()*-0.785823);
}

double NNfunction-ss_uRuR::synapse0x306c860() {
   return (neuron0x3080990()*0.373128);
}

double NNfunction-ss_uRuR::synapse0x306c8a0() {
   return (neuron0x3081360()*-0.324681);
}

double NNfunction-ss_uRuR::synapse0x3076110() {
   return (neuron0x3081d30()*-0.365926);
}

double NNfunction-ss_uRuR::synapse0x3076150() {
   return (neuron0x3082910()*0.290146);
}

double NNfunction-ss_uRuR::synapse0x3076aa0() {
   return (neuron0x30832e0()*0.896332);
}

double NNfunction-ss_uRuR::synapse0x3076ae0() {
   return (neuron0x3074160()*0.49865);
}

double NNfunction-ss_uRuR::synapse0x3077470() {
   return (neuron0x3074b30()*0.920164);
}

double NNfunction-ss_uRuR::synapse0x30774b0() {
   return (neuron0x3075500()*0.063859);
}

double NNfunction-ss_uRuR::synapse0x3077e40() {
   return (neuron0x3087b40()*-0.129188);
}

double NNfunction-ss_uRuR::synapse0x3077e80() {
   return (neuron0x30883f0()*-1.07662);
}

double NNfunction-ss_uRuR::synapse0x3078810() {
   return (neuron0x3088dc0()*-0.613882);
}

double NNfunction-ss_uRuR::synapse0x3078850() {
   return (neuron0x3089790()*-1.32769);
}

double NNfunction-ss_uRuR::synapse0x307af50() {
   return (neuron0x3065710()*2.70886);
}

double NNfunction-ss_uRuR::synapse0x307af90() {
   return (neuron0x3066060()*-0.0928671);
}

double NNfunction-ss_uRuR::synapse0x3070510() {
   return (neuron0x3066b40()*-0.435757);
}

double NNfunction-ss_uRuR::synapse0x3070550() {
   return (neuron0x30665e0()*0.342608);
}

double NNfunction-ss_uRuR::synapse0x307db30() {
   return (neuron0x3067920()*-0.512224);
}

double NNfunction-ss_uRuR::synapse0x307db70() {
   return (neuron0x30682f0()*-0.101027);
}

double NNfunction-ss_uRuR::synapse0x307e500() {
   return (neuron0x30690c0()*-0.28829);
}

double NNfunction-ss_uRuR::synapse0x307e540() {
   return (neuron0x3069a90()*-0.302398);
}

double NNfunction-ss_uRuR::synapse0x307eed0() {
   return (neuron0x306a460()*-0.122393);
}

double NNfunction-ss_uRuR::synapse0x307ef10() {
   return (neuron0x306af40()*-0.381701);
}

double NNfunction-ss_uRuR::synapse0x307f8a0() {
   return (neuron0x306b910()*-0.814046);
}

double NNfunction-ss_uRuR::synapse0x307f8e0() {
   return (neuron0x30689f0()*-0.159343);
}

double NNfunction-ss_uRuR::synapse0x3080270() {
   return (neuron0x306d4c0()*0.194052);
}

double NNfunction-ss_uRuR::synapse0x30802b0() {
   return (neuron0x306de90()*-0.582762);
}

double NNfunction-ss_uRuR::synapse0x3080c40() {
   return (neuron0x306e860()*-0.10359);
}

double NNfunction-ss_uRuR::synapse0x3080c80() {
   return (neuron0x306f230()*0.0974171);
}

double NNfunction-ss_uRuR::synapse0x3081610() {
   return (neuron0x3071040()*-0.208112);
}

double NNfunction-ss_uRuR::synapse0x3081650() {
   return (neuron0x3071320()*0.276003);
}

double NNfunction-ss_uRuR::synapse0x3081fe0() {
   return (neuron0x3071cf0()*0.332836);
}

double NNfunction-ss_uRuR::synapse0x3082020() {
   return (neuron0x30726c0()*0.209518);
}

double NNfunction-ss_uRuR::synapse0x3082bc0() {
   return (neuron0x3073090()*0.708939);
}

double NNfunction-ss_uRuR::synapse0x3082c00() {
   return (neuron0x3073a60()*0.485862);
}

double NNfunction-ss_uRuR::synapse0x3083590() {
   return (neuron0x306c5b0()*-0.105776);
}

double NNfunction-ss_uRuR::synapse0x30835d0() {
   return (neuron0x306cf80()*0.0968134);
}

double NNfunction-ss_uRuR::synapse0x3074410() {
   return (neuron0x30767f0()*-0.858247);
}

double NNfunction-ss_uRuR::synapse0x3074450() {
   return (neuron0x30771c0()*0.304034);
}

double NNfunction-ss_uRuR::synapse0x3074de0() {
   return (neuron0x3077b90()*-0.0595986);
}

double NNfunction-ss_uRuR::synapse0x3074e20() {
   return (neuron0x3078560()*-0.023135);
}

double NNfunction-ss_uRuR::synapse0x30757b0() {
   return (neuron0x3078f30()*-0.193465);
}

double NNfunction-ss_uRuR::synapse0x30757f0() {
   return (neuron0x3079900()*0.097218);
}

double NNfunction-ss_uRuR::synapse0x3087cd0() {
   return (neuron0x307a2d0()*0.104235);
}

double NNfunction-ss_uRuR::synapse0x3087d10() {
   return (neuron0x307aca0()*-0.0900963);
}

double NNfunction-ss_uRuR::synapse0x30886a0() {
   return (neuron0x3070d30()*0.44954);
}

double NNfunction-ss_uRuR::synapse0x30886e0() {
   return (neuron0x307d880()*0.394764);
}

double NNfunction-ss_uRuR::synapse0x3089070() {
   return (neuron0x307e250()*0.243508);
}

double NNfunction-ss_uRuR::synapse0x30890b0() {
   return (neuron0x307ec20()*0.171612);
}

double NNfunction-ss_uRuR::synapse0x3089a40() {
   return (neuron0x307f5f0()*0.144164);
}

double NNfunction-ss_uRuR::synapse0x3089a80() {
   return (neuron0x307ffc0()*-0.231752);
}

double NNfunction-ss_uRuR::synapse0x3065930() {
   return (neuron0x3080990()*-0.774873);
}

double NNfunction-ss_uRuR::synapse0x3065970() {
   return (neuron0x3081360()*0.214727);
}

double NNfunction-ss_uRuR::synapse0x30791e0() {
   return (neuron0x3081d30()*0.00197856);
}

double NNfunction-ss_uRuR::synapse0x3079220() {
   return (neuron0x3082910()*1.1677);
}

double NNfunction-ss_uRuR::synapse0x308a160() {
   return (neuron0x30832e0()*1.43407);
}

double NNfunction-ss_uRuR::synapse0x308a1a0() {
   return (neuron0x3074160()*0.299167);
}

double NNfunction-ss_uRuR::synapse0x308a1e0() {
   return (neuron0x3074b30()*0.59839);
}

double NNfunction-ss_uRuR::synapse0x308a220() {
   return (neuron0x3075500()*0.499848);
}

double NNfunction-ss_uRuR::synapse0x30910d0() {
   return (neuron0x3087b40()*1.17557);
}

double NNfunction-ss_uRuR::synapse0x3091110() {
   return (neuron0x30883f0()*-0.310942);
}

double NNfunction-ss_uRuR::synapse0x3091150() {
   return (neuron0x3088dc0()*-0.0594063);
}

double NNfunction-ss_uRuR::synapse0x3091190() {
   return (neuron0x3089790()*0.971598);
}

double NNfunction-ss_uRuR::synapse0x3091510() {
   return (neuron0x3065710()*0.28216);
}

double NNfunction-ss_uRuR::synapse0x3091550() {
   return (neuron0x3066060()*-0.556484);
}

double NNfunction-ss_uRuR::synapse0x3091590() {
   return (neuron0x3066b40()*0.351731);
}

double NNfunction-ss_uRuR::synapse0x30915d0() {
   return (neuron0x30665e0()*-1.2152);
}

double NNfunction-ss_uRuR::synapse0x3091610() {
   return (neuron0x3067920()*0.382133);
}

double NNfunction-ss_uRuR::synapse0x3091650() {
   return (neuron0x30682f0()*-0.0607264);
}

double NNfunction-ss_uRuR::synapse0x3091690() {
   return (neuron0x30690c0()*0.292637);
}

double NNfunction-ss_uRuR::synapse0x30916d0() {
   return (neuron0x3069a90()*0.325289);
}

double NNfunction-ss_uRuR::synapse0x3091710() {
   return (neuron0x306a460()*-0.178351);
}

double NNfunction-ss_uRuR::synapse0x3091750() {
   return (neuron0x306af40()*0.300858);
}

double NNfunction-ss_uRuR::synapse0x3091790() {
   return (neuron0x306b910()*0.709053);
}

double NNfunction-ss_uRuR::synapse0x30917d0() {
   return (neuron0x30689f0()*0.54952);
}

double NNfunction-ss_uRuR::synapse0x3091810() {
   return (neuron0x306d4c0()*-0.231243);
}

double NNfunction-ss_uRuR::synapse0x3091850() {
   return (neuron0x306de90()*0.382498);
}

double NNfunction-ss_uRuR::synapse0x3091890() {
   return (neuron0x306e860()*0.111402);
}

double NNfunction-ss_uRuR::synapse0x30918d0() {
   return (neuron0x306f230()*0.0241591);
}

double NNfunction-ss_uRuR::synapse0x3091360() {
   return (neuron0x3071040()*0.151977);
}

double NNfunction-ss_uRuR::synapse0x30913a0() {
   return (neuron0x3071320()*-0.236712);
}

double NNfunction-ss_uRuR::synapse0x3091a20() {
   return (neuron0x3071cf0()*-0.474038);
}

double NNfunction-ss_uRuR::synapse0x3091a60() {
   return (neuron0x30726c0()*-0.26619);
}

double NNfunction-ss_uRuR::synapse0x3091aa0() {
   return (neuron0x3073090()*-0.568001);
}

double NNfunction-ss_uRuR::synapse0x3091ae0() {
   return (neuron0x3073a60()*-0.36601);
}

double NNfunction-ss_uRuR::synapse0x3091b20() {
   return (neuron0x306c5b0()*0.0814266);
}

double NNfunction-ss_uRuR::synapse0x3091b60() {
   return (neuron0x306cf80()*-0.0410153);
}

double NNfunction-ss_uRuR::synapse0x3091ba0() {
   return (neuron0x30767f0()*1.32975);
}

double NNfunction-ss_uRuR::synapse0x3091be0() {
   return (neuron0x30771c0()*-0.37014);
}

double NNfunction-ss_uRuR::synapse0x3091c20() {
   return (neuron0x3077b90()*1.16395);
}

double NNfunction-ss_uRuR::synapse0x3091c60() {
   return (neuron0x3078560()*0.0868069);
}

double NNfunction-ss_uRuR::synapse0x3091ca0() {
   return (neuron0x3078f30()*0.155228);
}

double NNfunction-ss_uRuR::synapse0x3091ce0() {
   return (neuron0x3079900()*0.162336);
}

double NNfunction-ss_uRuR::synapse0x3091d20() {
   return (neuron0x307a2d0()*-0.0195829);
}

double NNfunction-ss_uRuR::synapse0x3091d60() {
   return (neuron0x307aca0()*0.0654071);
}

double NNfunction-ss_uRuR::synapse0x3091910() {
   return (neuron0x3070d30()*0.263023);
}

double NNfunction-ss_uRuR::synapse0x3091950() {
   return (neuron0x307d880()*-0.258477);
}

double NNfunction-ss_uRuR::synapse0x3091990() {
   return (neuron0x307e250()*-0.180007);
}

double NNfunction-ss_uRuR::synapse0x30919d0() {
   return (neuron0x307ec20()*-0.0907663);
}

double NNfunction-ss_uRuR::synapse0x3091fb0() {
   return (neuron0x307f5f0()*-0.342694);
}

double NNfunction-ss_uRuR::synapse0x3091ff0() {
   return (neuron0x307ffc0()*-2.47728);
}

double NNfunction-ss_uRuR::synapse0x3092030() {
   return (neuron0x3080990()*0.586712);
}

double NNfunction-ss_uRuR::synapse0x3092070() {
   return (neuron0x3081360()*-0.339147);
}

double NNfunction-ss_uRuR::synapse0x30920b0() {
   return (neuron0x3081d30()*-0.00495459);
}

double NNfunction-ss_uRuR::synapse0x30920f0() {
   return (neuron0x3082910()*-0.153129);
}

double NNfunction-ss_uRuR::synapse0x3092130() {
   return (neuron0x30832e0()*1.21303);
}

double NNfunction-ss_uRuR::synapse0x3092170() {
   return (neuron0x3074160()*-0.311646);
}

double NNfunction-ss_uRuR::synapse0x30921b0() {
   return (neuron0x3074b30()*0.754457);
}

double NNfunction-ss_uRuR::synapse0x30921f0() {
   return (neuron0x3075500()*-0.401986);
}

double NNfunction-ss_uRuR::synapse0x3092230() {
   return (neuron0x3087b40()*-0.20795);
}

double NNfunction-ss_uRuR::synapse0x3092270() {
   return (neuron0x30883f0()*0.290825);
}

double NNfunction-ss_uRuR::synapse0x30922b0() {
   return (neuron0x3088dc0()*-0.178627);
}

double NNfunction-ss_uRuR::synapse0x30922f0() {
   return (neuron0x3089790()*-0.736896);
}

double NNfunction-ss_uRuR::synapse0x3092670() {
   return (neuron0x3065710()*-1.80685);
}

double NNfunction-ss_uRuR::synapse0x30926b0() {
   return (neuron0x3066060()*4.45122);
}

double NNfunction-ss_uRuR::synapse0x30926f0() {
   return (neuron0x3066b40()*-0.563661);
}

double NNfunction-ss_uRuR::synapse0x3092730() {
   return (neuron0x30665e0()*-8.15243);
}

double NNfunction-ss_uRuR::synapse0x3092770() {
   return (neuron0x3067920()*0.0654437);
}

double NNfunction-ss_uRuR::synapse0x30927b0() {
   return (neuron0x30682f0()*-1.17154);
}

double NNfunction-ss_uRuR::synapse0x30927f0() {
   return (neuron0x30690c0()*-0.320829);
}

double NNfunction-ss_uRuR::synapse0x3092830() {
   return (neuron0x3069a90()*-0.698665);
}

double NNfunction-ss_uRuR::synapse0x3092870() {
   return (neuron0x306a460()*3.593);
}

double NNfunction-ss_uRuR::synapse0x30928b0() {
   return (neuron0x306af40()*-1.89176);
}

double NNfunction-ss_uRuR::synapse0x30928f0() {
   return (neuron0x306b910()*0.399557);
}

double NNfunction-ss_uRuR::synapse0x3092930() {
   return (neuron0x30689f0()*-0.715599);
}

double NNfunction-ss_uRuR::synapse0x3092970() {
   return (neuron0x306d4c0()*1.24489);
}

double NNfunction-ss_uRuR::synapse0x30929b0() {
   return (neuron0x306de90()*-1.63508);
}

double NNfunction-ss_uRuR::synapse0x30929f0() {
   return (neuron0x306e860()*-1.00357);
}

double NNfunction-ss_uRuR::synapse0x3092a30() {
   return (neuron0x306f230()*-0.671155);
}

double NNfunction-ss_uRuR::synapse0x30924c0() {
   return (neuron0x3071040()*-0.8782);
}

double NNfunction-ss_uRuR::synapse0x3092500() {
   return (neuron0x3071320()*0.629801);
}

double NNfunction-ss_uRuR::synapse0x3092b80() {
   return (neuron0x3071cf0()*2.07351);
}

double NNfunction-ss_uRuR::synapse0x3092bc0() {
   return (neuron0x30726c0()*-1.72685);
}

double NNfunction-ss_uRuR::synapse0x3092c00() {
   return (neuron0x3073090()*-0.340131);
}

double NNfunction-ss_uRuR::synapse0x3092c40() {
   return (neuron0x3073a60()*1.79704);
}

double NNfunction-ss_uRuR::synapse0x3092c80() {
   return (neuron0x306c5b0()*1.03951);
}

double NNfunction-ss_uRuR::synapse0x3092cc0() {
   return (neuron0x306cf80()*-0.60524);
}

double NNfunction-ss_uRuR::synapse0x3092d00() {
   return (neuron0x30767f0()*-5.33047);
}

double NNfunction-ss_uRuR::synapse0x3092d40() {
   return (neuron0x30771c0()*3.90127);
}

double NNfunction-ss_uRuR::synapse0x3092d80() {
   return (neuron0x3077b90()*4.78625);
}

double NNfunction-ss_uRuR::synapse0x3092dc0() {
   return (neuron0x3078560()*-0.744136);
}

double NNfunction-ss_uRuR::synapse0x3092e00() {
   return (neuron0x3078f30()*-1.55862);
}

double NNfunction-ss_uRuR::synapse0x3092e40() {
   return (neuron0x3079900()*-2.0745);
}

double NNfunction-ss_uRuR::synapse0x3092e80() {
   return (neuron0x307a2d0()*-0.942136);
}

double NNfunction-ss_uRuR::synapse0x3092ec0() {
   return (neuron0x307aca0()*-0.831988);
}

double NNfunction-ss_uRuR::synapse0x3092a70() {
   return (neuron0x3070d30()*-2.84558);
}

double NNfunction-ss_uRuR::synapse0x3092ab0() {
   return (neuron0x307d880()*1.26807);
}

double NNfunction-ss_uRuR::synapse0x3092af0() {
   return (neuron0x307e250()*0.513915);
}

double NNfunction-ss_uRuR::synapse0x3092b30() {
   return (neuron0x307ec20()*-1.68478);
}

double NNfunction-ss_uRuR::synapse0x3093110() {
   return (neuron0x307f5f0()*2.5015);
}

double NNfunction-ss_uRuR::synapse0x3093150() {
   return (neuron0x307ffc0()*-4.30472);
}

double NNfunction-ss_uRuR::synapse0x3093190() {
   return (neuron0x3080990()*0.597754);
}

double NNfunction-ss_uRuR::synapse0x30931d0() {
   return (neuron0x3081360()*-1.58253);
}

double NNfunction-ss_uRuR::synapse0x3093210() {
   return (neuron0x3081d30()*1.11941);
}

double NNfunction-ss_uRuR::synapse0x3093250() {
   return (neuron0x3082910()*-1.78148);
}

double NNfunction-ss_uRuR::synapse0x3093290() {
   return (neuron0x30832e0()*-1.41173);
}

double NNfunction-ss_uRuR::synapse0x30932d0() {
   return (neuron0x3074160()*-1.35111);
}

double NNfunction-ss_uRuR::synapse0x3093310() {
   return (neuron0x3074b30()*-3.46647);
}

double NNfunction-ss_uRuR::synapse0x3093350() {
   return (neuron0x3075500()*1.24824);
}

double NNfunction-ss_uRuR::synapse0x3093390() {
   return (neuron0x3087b40()*-0.436966);
}

double NNfunction-ss_uRuR::synapse0x30933d0() {
   return (neuron0x30883f0()*0.531779);
}

double NNfunction-ss_uRuR::synapse0x3093410() {
   return (neuron0x3088dc0()*1.04313);
}

double NNfunction-ss_uRuR::synapse0x3093450() {
   return (neuron0x3089790()*2.34525);
}

double NNfunction-ss_uRuR::synapse0x30937d0() {
   return (neuron0x3065710()*0.0452632);
}

double NNfunction-ss_uRuR::synapse0x3093810() {
   return (neuron0x3066060()*1.08266);
}

double NNfunction-ss_uRuR::synapse0x3093850() {
   return (neuron0x3066b40()*-0.419208);
}

double NNfunction-ss_uRuR::synapse0x3093890() {
   return (neuron0x30665e0()*-1.93174);
}

double NNfunction-ss_uRuR::synapse0x30938d0() {
   return (neuron0x3067920()*-0.506706);
}

double NNfunction-ss_uRuR::synapse0x3093910() {
   return (neuron0x30682f0()*-0.180292);
}

double NNfunction-ss_uRuR::synapse0x3093950() {
   return (neuron0x30690c0()*-0.252972);
}

double NNfunction-ss_uRuR::synapse0x3093990() {
   return (neuron0x3069a90()*-0.235959);
}

double NNfunction-ss_uRuR::synapse0x30939d0() {
   return (neuron0x306a460()*0.195118);
}

double NNfunction-ss_uRuR::synapse0x3093a10() {
   return (neuron0x306af40()*-0.417491);
}

double NNfunction-ss_uRuR::synapse0x3093a50() {
   return (neuron0x306b910()*-0.802776);
}

double NNfunction-ss_uRuR::synapse0x3093a90() {
   return (neuron0x30689f0()*-0.677436);
}

double NNfunction-ss_uRuR::synapse0x3093ad0() {
   return (neuron0x306d4c0()*0.211142);
}

double NNfunction-ss_uRuR::synapse0x3093b10() {
   return (neuron0x306de90()*-0.758464);
}

double NNfunction-ss_uRuR::synapse0x3093b50() {
   return (neuron0x306e860()*-0.119607);
}

double NNfunction-ss_uRuR::synapse0x3093b90() {
   return (neuron0x306f230()*0.104513);
}

double NNfunction-ss_uRuR::synapse0x3093620() {
   return (neuron0x3071040()*-0.182778);
}

double NNfunction-ss_uRuR::synapse0x3093660() {
   return (neuron0x3071320()*0.246672);
}

double NNfunction-ss_uRuR::synapse0x3093ce0() {
   return (neuron0x3071cf0()*0.330361);
}

double NNfunction-ss_uRuR::synapse0x3093d20() {
   return (neuron0x30726c0()*0.00846569);
}

double NNfunction-ss_uRuR::synapse0x3093d60() {
   return (neuron0x3073090()*0.689363);
}

double NNfunction-ss_uRuR::synapse0x3093da0() {
   return (neuron0x3073a60()*0.545234);
}

double NNfunction-ss_uRuR::synapse0x3093de0() {
   return (neuron0x306c5b0()*-0.100214);
}

double NNfunction-ss_uRuR::synapse0x3093e20() {
   return (neuron0x306cf80()*0.126124);
}

double NNfunction-ss_uRuR::synapse0x3093e60() {
   return (neuron0x30767f0()*-1.59121);
}

double NNfunction-ss_uRuR::synapse0x3093ea0() {
   return (neuron0x30771c0()*0.324237);
}

double NNfunction-ss_uRuR::synapse0x3093ee0() {
   return (neuron0x3077b90()*1.08448);
}

double NNfunction-ss_uRuR::synapse0x3093f20() {
   return (neuron0x3078560()*-0.00364001);
}

double NNfunction-ss_uRuR::synapse0x3093f60() {
   return (neuron0x3078f30()*-0.259147);
}

double NNfunction-ss_uRuR::synapse0x3093fa0() {
   return (neuron0x3079900()*-0.147158);
}

double NNfunction-ss_uRuR::synapse0x3093fe0() {
   return (neuron0x307a2d0()*0.113653);
}

double NNfunction-ss_uRuR::synapse0x3094020() {
   return (neuron0x307aca0()*-0.0709997);
}

double NNfunction-ss_uRuR::synapse0x3093bd0() {
   return (neuron0x3070d30()*0.20016);
}

double NNfunction-ss_uRuR::synapse0x3093c10() {
   return (neuron0x307d880()*0.369002);
}

double NNfunction-ss_uRuR::synapse0x3093c50() {
   return (neuron0x307e250()*0.217382);
}

double NNfunction-ss_uRuR::synapse0x3093c90() {
   return (neuron0x307ec20()*0.221235);
}

double NNfunction-ss_uRuR::synapse0x3094270() {
   return (neuron0x307f5f0()*0.5148);
}

double NNfunction-ss_uRuR::synapse0x30942b0() {
   return (neuron0x307ffc0()*-0.344349);
}

double NNfunction-ss_uRuR::synapse0x30942f0() {
   return (neuron0x3080990()*-0.773462);
}

double NNfunction-ss_uRuR::synapse0x3094330() {
   return (neuron0x3081360()*0.161604);
}

double NNfunction-ss_uRuR::synapse0x3094370() {
   return (neuron0x3081d30()*-0.0618172);
}

double NNfunction-ss_uRuR::synapse0x30943b0() {
   return (neuron0x3082910()*0.33617);
}

double NNfunction-ss_uRuR::synapse0x30943f0() {
   return (neuron0x30832e0()*-1.51056);
}

double NNfunction-ss_uRuR::synapse0x3094430() {
   return (neuron0x3074160()*0.264252);
}

double NNfunction-ss_uRuR::synapse0x3094470() {
   return (neuron0x3074b30()*-1.02703);
}

double NNfunction-ss_uRuR::synapse0x30944b0() {
   return (neuron0x3075500()*0.527174);
}

double NNfunction-ss_uRuR::synapse0x30944f0() {
   return (neuron0x3087b40()*-0.0523154);
}

double NNfunction-ss_uRuR::synapse0x3094530() {
   return (neuron0x30883f0()*-0.249802);
}

double NNfunction-ss_uRuR::synapse0x3094570() {
   return (neuron0x3088dc0()*0.0423756);
}

double NNfunction-ss_uRuR::synapse0x30945b0() {
   return (neuron0x3089790()*0.944764);
}

double NNfunction-ss_uRuR::synapse0x3094810() {
   return (neuron0x3090990()*-2.33627);
}

double NNfunction-ss_uRuR::synapse0x3094850() {
   return (neuron0x3090d30()*-5.67323);
}

double NNfunction-ss_uRuR::synapse0x3094890() {
   return (neuron0x30911d0()*-1.75746);
}

double NNfunction-ss_uRuR::synapse0x30948d0() {
   return (neuron0x3092330()*12.6304);
}

double NNfunction-ss_uRuR::synapse0x3094910() {
   return (neuron0x3093490()*4.91386);
}

