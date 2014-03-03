#include "NNfunction_ss_uLcR.h"
#include <cmath>

double NNfunction_ss_uLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4174)/15.2994;
   input1 = (in1 - 0.778242)/1150.44;
   input2 = (in2 - 651.67)/616.684;
   input3 = (in3 - -53.9209)/795.696;
   input4 = (in4 - 1058.7)/954.24;
   input5 = (in5 - 890.293)/948.533;
   input6 = (in6 - 908.784)/955.063;
   input7 = (in7 - 918.338)/934.582;
   input8 = (in8 - 900.275)/955.304;
   input9 = (in9 - 882.835)/935.592;
   input10 = (in10 - 982.929)/948.199;
   input11 = (in11 - 384.96)/393.306;
   input12 = (in12 - 698.31)/843.623;
   input13 = (in13 - 499.059)/514.274;
   input14 = (in14 - 720.767)/818.558;
   input15 = (in15 - 420.294)/421.609;
   input16 = (in16 - 538.179)/564.605;
   input17 = (in17 - 749.205)/881.804;
   input18 = (in18 - 729.47)/874.485;
   input19 = (in19 - 789.475)/865.774;
   input20 = (in20 - -4.20853)/492.807;
   input21 = (in21 - 0.354473)/1156.16;
   input22 = (in22 - 6.77581)/1209.89;
   input23 = (in23 - -191.747)/597.791;
   switch(index) {
     case 0:
         return neuron0x2a574a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLcR::Value(int index, double* input) {
   input0 = (input[0] - 23.4174)/15.2994;
   input1 = (input[1] - 0.778242)/1150.44;
   input2 = (input[2] - 651.67)/616.684;
   input3 = (input[3] - -53.9209)/795.696;
   input4 = (input[4] - 1058.7)/954.24;
   input5 = (input[5] - 890.293)/948.533;
   input6 = (input[6] - 908.784)/955.063;
   input7 = (input[7] - 918.338)/934.582;
   input8 = (input[8] - 900.275)/955.304;
   input9 = (input[9] - 882.835)/935.592;
   input10 = (input[10] - 982.929)/948.199;
   input11 = (input[11] - 384.96)/393.306;
   input12 = (input[12] - 698.31)/843.623;
   input13 = (input[13] - 499.059)/514.274;
   input14 = (input[14] - 720.767)/818.558;
   input15 = (input[15] - 420.294)/421.609;
   input16 = (input[16] - 538.179)/564.605;
   input17 = (input[17] - 749.205)/881.804;
   input18 = (input[18] - 729.47)/874.485;
   input19 = (input[19] - 789.475)/865.774;
   input20 = (input[20] - -4.20853)/492.807;
   input21 = (input[21] - 0.354473)/1156.16;
   input22 = (input[22] - 6.77581)/1209.89;
   input23 = (input[23] - -191.747)/597.791;
   switch(index) {
     case 0:
         return neuron0x2a574a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLcR::neuron0x2a23560() {
   return input0;
}

double NNfunction_ss_uLcR::neuron0x2a238a0() {
   return input1;
}

double NNfunction_ss_uLcR::neuron0x2a23be0() {
   return input2;
}

double NNfunction_ss_uLcR::neuron0x2a23f20() {
   return input3;
}

double NNfunction_ss_uLcR::neuron0x2a24260() {
   return input4;
}

double NNfunction_ss_uLcR::neuron0x2a245a0() {
   return input5;
}

double NNfunction_ss_uLcR::neuron0x2a248e0() {
   return input6;
}

double NNfunction_ss_uLcR::neuron0x2a24c20() {
   return input7;
}

double NNfunction_ss_uLcR::neuron0x2a24f60() {
   return input8;
}

double NNfunction_ss_uLcR::neuron0x2a252a0() {
   return input9;
}

double NNfunction_ss_uLcR::neuron0x2a255e0() {
   return input10;
}

double NNfunction_ss_uLcR::neuron0x2a25920() {
   return input11;
}

double NNfunction_ss_uLcR::neuron0x2a25c60() {
   return input12;
}

double NNfunction_ss_uLcR::neuron0x2a25fa0() {
   return input13;
}

double NNfunction_ss_uLcR::neuron0x2a262e0() {
   return input14;
}

double NNfunction_ss_uLcR::neuron0x2a26620() {
   return input15;
}

double NNfunction_ss_uLcR::neuron0x2a26960() {
   return input16;
}

double NNfunction_ss_uLcR::neuron0x2a26ec0() {
   return input17;
}

double NNfunction_ss_uLcR::neuron0x2a270e0() {
   return input18;
}

double NNfunction_ss_uLcR::neuron0x2a27420() {
   return input19;
}

double NNfunction_ss_uLcR::neuron0x2a27760() {
   return input20;
}

double NNfunction_ss_uLcR::neuron0x2a27aa0() {
   return input21;
}

double NNfunction_ss_uLcR::neuron0x2a27de0() {
   return input22;
}

double NNfunction_ss_uLcR::neuron0x2a28120() {
   return input23;
}

double NNfunction_ss_uLcR::input0x2a285c0() {
   double input = -0.206372;
   input += synapse0x27e33d0();
   input += synapse0x2a23420();
   input += synapse0x2a23460();
   input += synapse0x2a28870();
   input += synapse0x2a288b0();
   input += synapse0x2a288f0();
   input += synapse0x2a28930();
   input += synapse0x2a28970();
   input += synapse0x2a289b0();
   input += synapse0x2a289f0();
   input += synapse0x2a28a30();
   input += synapse0x2a28a70();
   input += synapse0x2a28ab0();
   input += synapse0x2a28af0();
   input += synapse0x2a28b30();
   input += synapse0x2a28b70();
   input += synapse0x2a23390();
   input += synapse0x2a233d0();
   input += synapse0x27d4c70();
   input += synapse0x27d4cb0();
   input += synapse0x2a28dd0();
   input += synapse0x2a28e10();
   input += synapse0x2a28e50();
   input += synapse0x2a28e90();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a285c0() {
   double input = input0x2a285c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a28ed0() {
   double input = 1.29735;
   input += synapse0x2a29210();
   input += synapse0x2a29250();
   input += synapse0x2a29290();
   input += synapse0x2a292d0();
   input += synapse0x2a29310();
   input += synapse0x2a29350();
   input += synapse0x2a29390();
   input += synapse0x2a293d0();
   input += synapse0x2a29410();
   input += synapse0x2a28cc0();
   input += synapse0x2a28d00();
   input += synapse0x2a28d40();
   input += synapse0x2a28d80();
   input += synapse0x2a29660();
   input += synapse0x2a296a0();
   input += synapse0x2a296e0();
   input += synapse0x2a29060();
   input += synapse0x2a290a0();
   input += synapse0x2a29830();
   input += synapse0x2a29870();
   input += synapse0x2a298b0();
   input += synapse0x2a298f0();
   input += synapse0x2a29930();
   input += synapse0x2a29970();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a28ed0() {
   double input = input0x2a28ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a299b0() {
   double input = -1.1919;
   input += synapse0x2a29cf0();
   input += synapse0x2a29d30();
   input += synapse0x2a29d70();
   input += synapse0x2a29db0();
   input += synapse0x2a29df0();
   input += synapse0x2a29e30();
   input += synapse0x2a29e70();
   input += synapse0x2a29eb0();
   input += synapse0x2a29ef0();
   input += synapse0x2a29f30();
   input += synapse0x2a29f70();
   input += synapse0x2a29fb0();
   input += synapse0x2a29ff0();
   input += synapse0x2a2a030();
   input += synapse0x2a2a070();
   input += synapse0x2a2a0b0();
   input += synapse0x2a29b40();
   input += synapse0x2a29b80();
   input += synapse0x27e2ac0();
   input += synapse0x27e2b00();
   input += synapse0x2a125f0();
   input += synapse0x2a12630();
   input += synapse0x2a12670();
   input += synapse0x2a234a0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a299b0() {
   double input = input0x2a299b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x27e3240() {
   double input = -0.350007;
   input += synapse0x2a29600();
   input += synapse0x2a234e0();
   input += synapse0x2a23520();
   input += synapse0x2a2a200();
   input += synapse0x2a2a240();
   input += synapse0x2a2a280();
   input += synapse0x2a2a2c0();
   input += synapse0x2a2a300();
   input += synapse0x2a2a340();
   input += synapse0x2a2a380();
   input += synapse0x2a2a3c0();
   input += synapse0x2a2a400();
   input += synapse0x2a2a440();
   input += synapse0x2a2a480();
   input += synapse0x2a2a4c0();
   input += synapse0x2a2a500();
   input += synapse0x2a29450();
   input += synapse0x2a29490();
   input += synapse0x2a2a650();
   input += synapse0x2a2a690();
   input += synapse0x2a2a6d0();
   input += synapse0x2a2a710();
   input += synapse0x2a2a750();
   input += synapse0x2a2a790();
   return input;
}

double NNfunction_ss_uLcR::neuron0x27e3240() {
   double input = input0x27e3240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a2a7d0() {
   double input = -0.140121;
   input += synapse0x2a2ab10();
   input += synapse0x2a2ab50();
   input += synapse0x2a2ab90();
   input += synapse0x2a2abd0();
   input += synapse0x2a2ac10();
   input += synapse0x2a2ac50();
   input += synapse0x2a2ac90();
   input += synapse0x2a2acd0();
   input += synapse0x2a2ad10();
   input += synapse0x2a2ad50();
   input += synapse0x2a2ad90();
   input += synapse0x2a2add0();
   input += synapse0x2a2ae10();
   input += synapse0x2a2ae50();
   input += synapse0x2a2ae90();
   input += synapse0x2a2aed0();
   input += synapse0x2a2a960();
   input += synapse0x2a2a9a0();
   input += synapse0x2a2b020();
   input += synapse0x2a2b060();
   input += synapse0x2a2b0a0();
   input += synapse0x2a2b0e0();
   input += synapse0x2a2b120();
   input += synapse0x2a2b160();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a2a7d0() {
   double input = input0x2a2a7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a2b1a0() {
   double input = 0.57048;
   input += synapse0x2a2b4e0();
   input += synapse0x2a2b520();
   input += synapse0x2a2b560();
   input += synapse0x2a2b5a0();
   input += synapse0x2a2b5e0();
   input += synapse0x2a2b620();
   input += synapse0x2a2b660();
   input += synapse0x2a2b6a0();
   input += synapse0x2a2b6e0();
   input += synapse0x27e2e30();
   input += synapse0x27e2e70();
   input += synapse0x27e2eb0();
   input += synapse0x27e2ef0();
   input += synapse0x27e2f30();
   input += synapse0x27e2f70();
   input += synapse0x27e2fb0();
   input += synapse0x2a2b330();
   input += synapse0x2a2b370();
   input += synapse0x27e3100();
   input += synapse0x27e3140();
   input += synapse0x27e3180();
   input += synapse0x27e31c0();
   input += synapse0x27e3200();
   input += synapse0x2a2bf30();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a2b1a0() {
   double input = input0x2a2b1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a2bf70() {
   double input = -0.407889;
   input += synapse0x2a2c2b0();
   input += synapse0x2a2c2f0();
   input += synapse0x2a2c330();
   input += synapse0x2a2c370();
   input += synapse0x2a2c3b0();
   input += synapse0x2a2c3f0();
   input += synapse0x2a2c430();
   input += synapse0x2a2c470();
   input += synapse0x2a2c4b0();
   input += synapse0x2a2c4f0();
   input += synapse0x2a2c530();
   input += synapse0x2a2c570();
   input += synapse0x2a2c5b0();
   input += synapse0x2a2c5f0();
   input += synapse0x2a2c630();
   input += synapse0x2a2c670();
   input += synapse0x2a2c100();
   input += synapse0x2a2c140();
   input += synapse0x2a2c7c0();
   input += synapse0x2a2c800();
   input += synapse0x2a2c840();
   input += synapse0x2a2c880();
   input += synapse0x2a2c8c0();
   input += synapse0x2a2c900();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a2bf70() {
   double input = input0x2a2bf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a2c940() {
   double input = 0.338429;
   input += synapse0x2a2cc80();
   input += synapse0x2a2ccc0();
   input += synapse0x2a2cd00();
   input += synapse0x2a2cd40();
   input += synapse0x2a2cd80();
   input += synapse0x2a2cdc0();
   input += synapse0x2a2ce00();
   input += synapse0x2a2ce40();
   input += synapse0x2a2ce80();
   input += synapse0x2a2cec0();
   input += synapse0x2a2cf00();
   input += synapse0x2a2cf40();
   input += synapse0x2a2cf80();
   input += synapse0x2a2cfc0();
   input += synapse0x2a2d000();
   input += synapse0x2a2d040();
   input += synapse0x2a2cad0();
   input += synapse0x2a2cb10();
   input += synapse0x2a2d190();
   input += synapse0x2a2d1d0();
   input += synapse0x2a2d210();
   input += synapse0x2a2d250();
   input += synapse0x2a2d290();
   input += synapse0x2a2d2d0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a2c940() {
   double input = input0x2a2c940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a2d310() {
   double input = -7.24687;
   input += synapse0x2a26db0();
   input += synapse0x2a26df0();
   input += synapse0x2a26e30();
   input += synapse0x2a26e70();
   input += synapse0x2a2d860();
   input += synapse0x2a2d8a0();
   input += synapse0x2a2d8e0();
   input += synapse0x2a2d920();
   input += synapse0x2a2d960();
   input += synapse0x2a2d9a0();
   input += synapse0x2a2d9e0();
   input += synapse0x2a2da20();
   input += synapse0x2a2da60();
   input += synapse0x2a2daa0();
   input += synapse0x2a2dae0();
   input += synapse0x2a2db20();
   input += synapse0x2a2d4a0();
   input += synapse0x2a2d4e0();
   input += synapse0x2a2dc70();
   input += synapse0x2a2dcb0();
   input += synapse0x2a2dcf0();
   input += synapse0x2a2dd30();
   input += synapse0x2a2dd70();
   input += synapse0x2a2ddb0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a2d310() {
   double input = input0x2a2d310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a2ddf0() {
   double input = 0.519235;
   input += synapse0x2a2e130();
   input += synapse0x2a2e170();
   input += synapse0x2a2e1b0();
   input += synapse0x2a2e1f0();
   input += synapse0x2a2e230();
   input += synapse0x2a2e270();
   input += synapse0x2a2e2b0();
   input += synapse0x2a2e2f0();
   input += synapse0x2a2e330();
   input += synapse0x2a2e370();
   input += synapse0x2a2e3b0();
   input += synapse0x2a2e3f0();
   input += synapse0x2a2e430();
   input += synapse0x2a2e470();
   input += synapse0x2a2e4b0();
   input += synapse0x2a2e4f0();
   input += synapse0x2a2df80();
   input += synapse0x2a2dfc0();
   input += synapse0x2a2e640();
   input += synapse0x2a2e680();
   input += synapse0x2a2e6c0();
   input += synapse0x2a2e700();
   input += synapse0x2a2e740();
   input += synapse0x2a2e780();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a2ddf0() {
   double input = input0x2a2ddf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a2e7c0() {
   double input = -0.69245;
   input += synapse0x2a2eb00();
   input += synapse0x2a2eb40();
   input += synapse0x2a2eb80();
   input += synapse0x2a2ebc0();
   input += synapse0x2a2ec00();
   input += synapse0x2a2ec40();
   input += synapse0x2a2ec80();
   input += synapse0x2a2ecc0();
   input += synapse0x2a2ed00();
   input += synapse0x2a2ed40();
   input += synapse0x2a2ed80();
   input += synapse0x2a2edc0();
   input += synapse0x2a2ee00();
   input += synapse0x2a2ee40();
   input += synapse0x2a2ee80();
   input += synapse0x2a2eec0();
   input += synapse0x2a2e950();
   input += synapse0x2a2e990();
   input += synapse0x2a2b720();
   input += synapse0x2a2b760();
   input += synapse0x2a2b7a0();
   input += synapse0x2a2b7e0();
   input += synapse0x2a2b820();
   input += synapse0x2a2b860();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a2e7c0() {
   double input = input0x2a2e7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a2b8a0() {
   double input = -1.72802;
   input += synapse0x2a2bbe0();
   input += synapse0x2a2bc20();
   input += synapse0x2a2bc60();
   input += synapse0x2a2bca0();
   input += synapse0x2a2bce0();
   input += synapse0x2a2bd20();
   input += synapse0x2a2bd60();
   input += synapse0x2a2bda0();
   input += synapse0x2a2bde0();
   input += synapse0x2a2be20();
   input += synapse0x2a2be60();
   input += synapse0x2a2bea0();
   input += synapse0x2a2bee0();
   input += synapse0x2a30020();
   input += synapse0x2a30060();
   input += synapse0x2a300a0();
   input += synapse0x2a2ba30();
   input += synapse0x2a2ba70();
   input += synapse0x2a301f0();
   input += synapse0x2a30230();
   input += synapse0x2a30270();
   input += synapse0x2a302b0();
   input += synapse0x2a302f0();
   input += synapse0x2a30330();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a2b8a0() {
   double input = input0x2a2b8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a30370() {
   double input = -1.18013;
   input += synapse0x2a306b0();
   input += synapse0x2a306f0();
   input += synapse0x2a30730();
   input += synapse0x2a30770();
   input += synapse0x2a307b0();
   input += synapse0x2a307f0();
   input += synapse0x2a30830();
   input += synapse0x2a30870();
   input += synapse0x2a308b0();
   input += synapse0x2a308f0();
   input += synapse0x2a30930();
   input += synapse0x2a30970();
   input += synapse0x2a309b0();
   input += synapse0x2a309f0();
   input += synapse0x2a30a30();
   input += synapse0x2a30a70();
   input += synapse0x2a30500();
   input += synapse0x2a30540();
   input += synapse0x2a30bc0();
   input += synapse0x2a30c00();
   input += synapse0x2a30c40();
   input += synapse0x2a30c80();
   input += synapse0x2a30cc0();
   input += synapse0x2a30d00();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a30370() {
   double input = input0x2a30370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a30d40() {
   double input = 1.29654;
   input += synapse0x2a31080();
   input += synapse0x2a310c0();
   input += synapse0x2a31100();
   input += synapse0x2a31140();
   input += synapse0x2a31180();
   input += synapse0x2a311c0();
   input += synapse0x2a31200();
   input += synapse0x2a31240();
   input += synapse0x2a31280();
   input += synapse0x2a312c0();
   input += synapse0x2a31300();
   input += synapse0x2a31340();
   input += synapse0x2a31380();
   input += synapse0x2a313c0();
   input += synapse0x2a31400();
   input += synapse0x2a31440();
   input += synapse0x2a30ed0();
   input += synapse0x2a30f10();
   input += synapse0x2a31590();
   input += synapse0x2a315d0();
   input += synapse0x2a31610();
   input += synapse0x2a31650();
   input += synapse0x2a31690();
   input += synapse0x2a316d0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a30d40() {
   double input = input0x2a30d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a31710() {
   double input = -0.847907;
   input += synapse0x2a31a50();
   input += synapse0x2a31a90();
   input += synapse0x2a31ad0();
   input += synapse0x2a31b10();
   input += synapse0x2a31b50();
   input += synapse0x2a31b90();
   input += synapse0x2a31bd0();
   input += synapse0x2a31c10();
   input += synapse0x2a31c50();
   input += synapse0x2a31c90();
   input += synapse0x2a31cd0();
   input += synapse0x2a31d10();
   input += synapse0x2a31d50();
   input += synapse0x2a31d90();
   input += synapse0x2a31dd0();
   input += synapse0x2a31e10();
   input += synapse0x2a318a0();
   input += synapse0x2a318e0();
   input += synapse0x2a31f60();
   input += synapse0x2a31fa0();
   input += synapse0x2a31fe0();
   input += synapse0x2a32020();
   input += synapse0x2a32060();
   input += synapse0x2a320a0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a31710() {
   double input = input0x2a31710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a320e0() {
   double input = -1.57121;
   input += synapse0x2a32420();
   input += synapse0x2a23780();
   input += synapse0x2a237c0();
   input += synapse0x2a23ac0();
   input += synapse0x2a23b00();
   input += synapse0x2a23e00();
   input += synapse0x2a23e40();
   input += synapse0x2a24140();
   input += synapse0x2a24180();
   input += synapse0x2a24480();
   input += synapse0x2a244c0();
   input += synapse0x2a247c0();
   input += synapse0x2a24800();
   input += synapse0x2a24b00();
   input += synapse0x2a24b40();
   input += synapse0x2a24e40();
   input += synapse0x2a24e80();
   input += synapse0x2a25180();
   input += synapse0x2a251c0();
   input += synapse0x2a254c0();
   input += synapse0x2a25500();
   input += synapse0x2a25800();
   input += synapse0x2a25840();
   input += synapse0x2a25b40();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a320e0() {
   double input = input0x2a320e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a33ef0() {
   double input = -1.55377;
   input += synapse0x2a25b80();
   input += synapse0x2a26840();
   input += synapse0x2a26880();
   input += synapse0x2a32270();
   input += synapse0x2a322b0();
   input += synapse0x2a26b80();
   input += synapse0x2a26bc0();
   input += synapse0x27d4b50();
   input += synapse0x27d4b90();
   input += synapse0x2a27300();
   input += synapse0x2a27340();
   input += synapse0x2a27640();
   input += synapse0x2a27680();
   input += synapse0x2a27980();
   input += synapse0x2a279c0();
   input += synapse0x2a27cc0();
   input += synapse0x2a27d00();
   input += synapse0x2a28000();
   input += synapse0x2a28040();
   input += synapse0x2a28340();
   input += synapse0x2a28380();
   input += synapse0x2a25e80();
   input += synapse0x2a25ec0();
   input += synapse0x2a34190();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a33ef0() {
   double input = input0x2a33ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a341d0() {
   double input = -1.2534;
   input += synapse0x2a34510();
   input += synapse0x2a34550();
   input += synapse0x2a34590();
   input += synapse0x2a345d0();
   input += synapse0x2a34610();
   input += synapse0x2a34650();
   input += synapse0x2a34690();
   input += synapse0x2a346d0();
   input += synapse0x2a34710();
   input += synapse0x2a34750();
   input += synapse0x2a34790();
   input += synapse0x2a347d0();
   input += synapse0x2a34810();
   input += synapse0x2a34850();
   input += synapse0x2a34890();
   input += synapse0x2a348d0();
   input += synapse0x2a34360();
   input += synapse0x2a343a0();
   input += synapse0x2a34a20();
   input += synapse0x2a34a60();
   input += synapse0x2a34aa0();
   input += synapse0x2a34ae0();
   input += synapse0x2a34b20();
   input += synapse0x2a34b60();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a341d0() {
   double input = input0x2a341d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a34ba0() {
   double input = -0.715876;
   input += synapse0x2a34ee0();
   input += synapse0x2a34f20();
   input += synapse0x2a34f60();
   input += synapse0x2a34fa0();
   input += synapse0x2a34fe0();
   input += synapse0x2a35020();
   input += synapse0x2a35060();
   input += synapse0x2a350a0();
   input += synapse0x2a350e0();
   input += synapse0x2a35120();
   input += synapse0x2a35160();
   input += synapse0x2a351a0();
   input += synapse0x2a351e0();
   input += synapse0x2a35220();
   input += synapse0x2a35260();
   input += synapse0x2a352a0();
   input += synapse0x2a34d30();
   input += synapse0x2a34d70();
   input += synapse0x2a353f0();
   input += synapse0x2a35430();
   input += synapse0x2a35470();
   input += synapse0x2a354b0();
   input += synapse0x2a354f0();
   input += synapse0x2a35530();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a34ba0() {
   double input = input0x2a34ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a35570() {
   double input = -0.987691;
   input += synapse0x2a358b0();
   input += synapse0x2a358f0();
   input += synapse0x2a35930();
   input += synapse0x2a35970();
   input += synapse0x2a359b0();
   input += synapse0x2a359f0();
   input += synapse0x2a35a30();
   input += synapse0x2a35a70();
   input += synapse0x2a35ab0();
   input += synapse0x2a35af0();
   input += synapse0x2a35b30();
   input += synapse0x2a35b70();
   input += synapse0x2a35bb0();
   input += synapse0x2a35bf0();
   input += synapse0x2a35c30();
   input += synapse0x2a35c70();
   input += synapse0x2a35700();
   input += synapse0x2a35740();
   input += synapse0x2a35dc0();
   input += synapse0x2a35e00();
   input += synapse0x2a35e40();
   input += synapse0x2a35e80();
   input += synapse0x2a35ec0();
   input += synapse0x2a35f00();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a35570() {
   double input = input0x2a35570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a35f40() {
   double input = -0.528224;
   input += synapse0x2a36280();
   input += synapse0x2a362c0();
   input += synapse0x2a36300();
   input += synapse0x2a36340();
   input += synapse0x2a36380();
   input += synapse0x2a363c0();
   input += synapse0x2a36400();
   input += synapse0x2a36440();
   input += synapse0x2a36480();
   input += synapse0x2a364c0();
   input += synapse0x2a36500();
   input += synapse0x2a36540();
   input += synapse0x2a36580();
   input += synapse0x2a365c0();
   input += synapse0x2a36600();
   input += synapse0x2a36640();
   input += synapse0x2a360d0();
   input += synapse0x2a36110();
   input += synapse0x2a36790();
   input += synapse0x2a367d0();
   input += synapse0x2a36810();
   input += synapse0x2a36850();
   input += synapse0x2a36890();
   input += synapse0x2a368d0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a35f40() {
   double input = input0x2a35f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a36910() {
   double input = 0.769826;
   input += synapse0x2a36c50();
   input += synapse0x2a36c90();
   input += synapse0x2a36cd0();
   input += synapse0x2a36d10();
   input += synapse0x2a36d50();
   input += synapse0x2a36d90();
   input += synapse0x2a36dd0();
   input += synapse0x2a36e10();
   input += synapse0x2a36e50();
   input += synapse0x2a2f010();
   input += synapse0x2a2f050();
   input += synapse0x2a2f090();
   input += synapse0x2a2f0d0();
   input += synapse0x2a2f110();
   input += synapse0x2a2f150();
   input += synapse0x2a2f190();
   input += synapse0x2a36aa0();
   input += synapse0x2a36ae0();
   input += synapse0x2a2f2e0();
   input += synapse0x2a2f320();
   input += synapse0x2a2f360();
   input += synapse0x2a2f3a0();
   input += synapse0x2a2f3e0();
   input += synapse0x2a2f420();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a36910() {
   double input = input0x2a36910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a2f460() {
   double input = 0.671507;
   input += synapse0x2a2f7a0();
   input += synapse0x2a2f7e0();
   input += synapse0x2a2f820();
   input += synapse0x2a2f860();
   input += synapse0x2a2f8a0();
   input += synapse0x2a2f8e0();
   input += synapse0x2a2f920();
   input += synapse0x2a2f960();
   input += synapse0x2a2f9a0();
   input += synapse0x2a2f9e0();
   input += synapse0x2a2fa20();
   input += synapse0x2a2fa60();
   input += synapse0x2a2faa0();
   input += synapse0x2a2fae0();
   input += synapse0x2a2fb20();
   input += synapse0x2a2fb60();
   input += synapse0x2a2f5f0();
   input += synapse0x2a2f630();
   input += synapse0x2a2fcb0();
   input += synapse0x2a2fcf0();
   input += synapse0x2a2fd30();
   input += synapse0x2a2fd70();
   input += synapse0x2a2fdb0();
   input += synapse0x2a2fdf0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a2f460() {
   double input = input0x2a2f460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a2fe30() {
   double input = -0.874254;
   input += synapse0x2a2ffc0();
   input += synapse0x2a39050();
   input += synapse0x2a39090();
   input += synapse0x2a390d0();
   input += synapse0x2a39110();
   input += synapse0x2a39150();
   input += synapse0x2a39190();
   input += synapse0x2a391d0();
   input += synapse0x2a39210();
   input += synapse0x2a39250();
   input += synapse0x2a39290();
   input += synapse0x2a392d0();
   input += synapse0x2a39310();
   input += synapse0x2a39350();
   input += synapse0x2a39390();
   input += synapse0x2a393d0();
   input += synapse0x2a38ea0();
   input += synapse0x2a38ee0();
   input += synapse0x2a39520();
   input += synapse0x2a39560();
   input += synapse0x2a395a0();
   input += synapse0x2a395e0();
   input += synapse0x2a39620();
   input += synapse0x2a39660();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a2fe30() {
   double input = input0x2a2fe30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a396a0() {
   double input = 1.1064;
   input += synapse0x2a399e0();
   input += synapse0x2a39a20();
   input += synapse0x2a39a60();
   input += synapse0x2a39aa0();
   input += synapse0x2a39ae0();
   input += synapse0x2a39b20();
   input += synapse0x2a39b60();
   input += synapse0x2a39ba0();
   input += synapse0x2a39be0();
   input += synapse0x2a39c20();
   input += synapse0x2a39c60();
   input += synapse0x2a39ca0();
   input += synapse0x2a39ce0();
   input += synapse0x2a39d20();
   input += synapse0x2a39d60();
   input += synapse0x2a39da0();
   input += synapse0x2a39830();
   input += synapse0x2a39870();
   input += synapse0x2a39ef0();
   input += synapse0x2a39f30();
   input += synapse0x2a39f70();
   input += synapse0x2a39fb0();
   input += synapse0x2a39ff0();
   input += synapse0x2a3a030();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a396a0() {
   double input = input0x2a396a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a3a070() {
   double input = -0.828746;
   input += synapse0x2a3a3b0();
   input += synapse0x2a3a3f0();
   input += synapse0x2a3a430();
   input += synapse0x2a3a470();
   input += synapse0x2a3a4b0();
   input += synapse0x2a3a4f0();
   input += synapse0x2a3a530();
   input += synapse0x2a3a570();
   input += synapse0x2a3a5b0();
   input += synapse0x2a3a5f0();
   input += synapse0x2a3a630();
   input += synapse0x2a3a670();
   input += synapse0x2a3a6b0();
   input += synapse0x2a3a6f0();
   input += synapse0x2a3a730();
   input += synapse0x2a3a770();
   input += synapse0x2a3a200();
   input += synapse0x2a3a240();
   input += synapse0x2a3a8c0();
   input += synapse0x2a3a900();
   input += synapse0x2a3a940();
   input += synapse0x2a3a980();
   input += synapse0x2a3a9c0();
   input += synapse0x2a3aa00();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a3a070() {
   double input = input0x2a3a070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a3aa40() {
   double input = 0.217402;
   input += synapse0x2a3ad80();
   input += synapse0x2a3adc0();
   input += synapse0x2a3ae00();
   input += synapse0x2a3ae40();
   input += synapse0x2a3ae80();
   input += synapse0x2a3aec0();
   input += synapse0x2a3af00();
   input += synapse0x2a3af40();
   input += synapse0x2a3af80();
   input += synapse0x2a3afc0();
   input += synapse0x2a3b000();
   input += synapse0x2a3b040();
   input += synapse0x2a3b080();
   input += synapse0x2a3b0c0();
   input += synapse0x2a3b100();
   input += synapse0x2a3b140();
   input += synapse0x2a3abd0();
   input += synapse0x2a3ac10();
   input += synapse0x2a3b290();
   input += synapse0x2a3b2d0();
   input += synapse0x2a3b310();
   input += synapse0x2a3b350();
   input += synapse0x2a3b390();
   input += synapse0x2a3b3d0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a3aa40() {
   double input = input0x2a3aa40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a3b410() {
   double input = -1.59605;
   input += synapse0x2a3b750();
   input += synapse0x2a3b790();
   input += synapse0x2a3b7d0();
   input += synapse0x2a3b810();
   input += synapse0x2a3b850();
   input += synapse0x2a3b890();
   input += synapse0x2a3b8d0();
   input += synapse0x2a3b910();
   input += synapse0x2a3b950();
   input += synapse0x2a3b990();
   input += synapse0x2a3b9d0();
   input += synapse0x2a3ba10();
   input += synapse0x2a3ba50();
   input += synapse0x2a3ba90();
   input += synapse0x2a3bad0();
   input += synapse0x2a3bb10();
   input += synapse0x2a3b5a0();
   input += synapse0x2a3b5e0();
   input += synapse0x2a3bc60();
   input += synapse0x2a3bca0();
   input += synapse0x2a3bce0();
   input += synapse0x2a3bd20();
   input += synapse0x2a3bd60();
   input += synapse0x2a3bda0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a3b410() {
   double input = input0x2a3b410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a3bde0() {
   double input = 0.156026;
   input += synapse0x2a3c120();
   input += synapse0x2a3c160();
   input += synapse0x2a3c1a0();
   input += synapse0x2a3c1e0();
   input += synapse0x2a3c220();
   input += synapse0x2a3c260();
   input += synapse0x2a3c2a0();
   input += synapse0x2a3c2e0();
   input += synapse0x2a3c320();
   input += synapse0x2a3c360();
   input += synapse0x2a3c3a0();
   input += synapse0x2a3c3e0();
   input += synapse0x2a3c420();
   input += synapse0x2a3c460();
   input += synapse0x2a3c4a0();
   input += synapse0x2a3c4e0();
   input += synapse0x2a3bf70();
   input += synapse0x2a3bfb0();
   input += synapse0x2a3c630();
   input += synapse0x2a3c670();
   input += synapse0x2a3c6b0();
   input += synapse0x2a3c6f0();
   input += synapse0x2a3c730();
   input += synapse0x2a3c770();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a3bde0() {
   double input = input0x2a3bde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a3c7b0() {
   double input = 0.36384;
   input += synapse0x2a3caf0();
   input += synapse0x2a3cb30();
   input += synapse0x2a3cb70();
   input += synapse0x2a3cbb0();
   input += synapse0x2a3cbf0();
   input += synapse0x2a3cc30();
   input += synapse0x2a3cc70();
   input += synapse0x2a3ccb0();
   input += synapse0x2a3ccf0();
   input += synapse0x2a3cd30();
   input += synapse0x2a3cd70();
   input += synapse0x2a3cdb0();
   input += synapse0x2a3cdf0();
   input += synapse0x2a3ce30();
   input += synapse0x2a3ce70();
   input += synapse0x2a3ceb0();
   input += synapse0x2a3c940();
   input += synapse0x2a3c980();
   input += synapse0x2a3d000();
   input += synapse0x2a3d040();
   input += synapse0x2a3d080();
   input += synapse0x2a3d0c0();
   input += synapse0x2a3d100();
   input += synapse0x2a3d140();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a3c7b0() {
   double input = input0x2a3c7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a3d180() {
   double input = -1.59082;
   input += synapse0x2a3d4c0();
   input += synapse0x2a3d500();
   input += synapse0x2a3d540();
   input += synapse0x2a3d580();
   input += synapse0x2a3d5c0();
   input += synapse0x2a3d600();
   input += synapse0x2a3d640();
   input += synapse0x2a3d680();
   input += synapse0x2a3d6c0();
   input += synapse0x2a3d700();
   input += synapse0x2a3d740();
   input += synapse0x2a3d780();
   input += synapse0x2a3d7c0();
   input += synapse0x2a3d800();
   input += synapse0x2a3d840();
   input += synapse0x2a3d880();
   input += synapse0x2a3d310();
   input += synapse0x2a3d350();
   input += synapse0x2a3d9d0();
   input += synapse0x2a3da10();
   input += synapse0x2a3da50();
   input += synapse0x2a3da90();
   input += synapse0x2a3dad0();
   input += synapse0x2a3db10();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a3d180() {
   double input = input0x2a3d180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a3db50() {
   double input = 1.30496;
   input += synapse0x2a3de90();
   input += synapse0x2a32460();
   input += synapse0x2a324a0();
   input += synapse0x2a324e0();
   input += synapse0x2a32730();
   input += synapse0x2a32770();
   input += synapse0x2a327b0();
   input += synapse0x2a32a00();
   input += synapse0x2a32a40();
   input += synapse0x2a32c90();
   input += synapse0x2a32cd0();
   input += synapse0x2a32d10();
   input += synapse0x2a32f60();
   input += synapse0x2a32fa0();
   input += synapse0x2a331f0();
   input += synapse0x2a33230();
   input += synapse0x2a3dce0();
   input += synapse0x2a3dd20();
   input += synapse0x2a33380();
   input += synapse0x2a33890();
   input += synapse0x2a338d0();
   input += synapse0x2a33910();
   input += synapse0x2a33b60();
   input += synapse0x2a33ba0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a3db50() {
   double input = input0x2a3db50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a33be0() {
   double input = 0.736078;
   input += synapse0x2a33450();
   input += synapse0x2a33490();
   input += synapse0x2a334d0();
   input += synapse0x2a33510();
   input += synapse0x2a33e90();
   input += synapse0x2a401e0();
   input += synapse0x2a40220();
   input += synapse0x2a40260();
   input += synapse0x2a402a0();
   input += synapse0x2a402e0();
   input += synapse0x2a40320();
   input += synapse0x2a40360();
   input += synapse0x2a403a0();
   input += synapse0x2a403e0();
   input += synapse0x2a40420();
   input += synapse0x2a40460();
   input += synapse0x2a33d70();
   input += synapse0x2a33db0();
   input += synapse0x2a405b0();
   input += synapse0x2a405f0();
   input += synapse0x2a40630();
   input += synapse0x2a40670();
   input += synapse0x2a406b0();
   input += synapse0x2a406f0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a33be0() {
   double input = input0x2a33be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a40730() {
   double input = 2.51155;
   input += synapse0x2a40a70();
   input += synapse0x2a40ab0();
   input += synapse0x2a40af0();
   input += synapse0x2a40b30();
   input += synapse0x2a40b70();
   input += synapse0x2a40bb0();
   input += synapse0x2a40bf0();
   input += synapse0x2a40c30();
   input += synapse0x2a40c70();
   input += synapse0x2a40cb0();
   input += synapse0x2a40cf0();
   input += synapse0x2a40d30();
   input += synapse0x2a40d70();
   input += synapse0x2a40db0();
   input += synapse0x2a40df0();
   input += synapse0x2a40e30();
   input += synapse0x2a408c0();
   input += synapse0x2a40900();
   input += synapse0x2a40f80();
   input += synapse0x2a40fc0();
   input += synapse0x2a41000();
   input += synapse0x2a41040();
   input += synapse0x2a41080();
   input += synapse0x2a410c0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a40730() {
   double input = input0x2a40730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a41100() {
   double input = -0.544773;
   input += synapse0x2a41440();
   input += synapse0x2a41480();
   input += synapse0x2a414c0();
   input += synapse0x2a41500();
   input += synapse0x2a41540();
   input += synapse0x2a41580();
   input += synapse0x2a415c0();
   input += synapse0x2a41600();
   input += synapse0x2a41640();
   input += synapse0x2a41680();
   input += synapse0x2a416c0();
   input += synapse0x2a41700();
   input += synapse0x2a41740();
   input += synapse0x2a41780();
   input += synapse0x2a417c0();
   input += synapse0x2a41800();
   input += synapse0x2a41290();
   input += synapse0x2a412d0();
   input += synapse0x2a41950();
   input += synapse0x2a41990();
   input += synapse0x2a419d0();
   input += synapse0x2a41a10();
   input += synapse0x2a41a50();
   input += synapse0x2a41a90();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a41100() {
   double input = input0x2a41100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a41ad0() {
   double input = 1.94917;
   input += synapse0x2a41e10();
   input += synapse0x2a41e50();
   input += synapse0x2a41e90();
   input += synapse0x2a41ed0();
   input += synapse0x2a41f10();
   input += synapse0x2a41f50();
   input += synapse0x2a41f90();
   input += synapse0x2a41fd0();
   input += synapse0x2a42010();
   input += synapse0x2a42050();
   input += synapse0x2a42090();
   input += synapse0x2a420d0();
   input += synapse0x2a42110();
   input += synapse0x2a42150();
   input += synapse0x2a42190();
   input += synapse0x2a421d0();
   input += synapse0x2a41c60();
   input += synapse0x2a41ca0();
   input += synapse0x2a42320();
   input += synapse0x2a42360();
   input += synapse0x2a423a0();
   input += synapse0x2a423e0();
   input += synapse0x2a42420();
   input += synapse0x2a42460();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a41ad0() {
   double input = input0x2a41ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a424a0() {
   double input = 1.51372;
   input += synapse0x2a427e0();
   input += synapse0x2a42820();
   input += synapse0x2a42860();
   input += synapse0x2a428a0();
   input += synapse0x2a428e0();
   input += synapse0x2a42920();
   input += synapse0x2a42960();
   input += synapse0x2a429a0();
   input += synapse0x2a429e0();
   input += synapse0x2a42a20();
   input += synapse0x2a42a60();
   input += synapse0x2a42aa0();
   input += synapse0x2a42ae0();
   input += synapse0x2a42b20();
   input += synapse0x2a42b60();
   input += synapse0x2a42ba0();
   input += synapse0x2a42630();
   input += synapse0x2a42670();
   input += synapse0x2a42cf0();
   input += synapse0x2a42d30();
   input += synapse0x2a42d70();
   input += synapse0x2a42db0();
   input += synapse0x2a42df0();
   input += synapse0x2a42e30();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a424a0() {
   double input = input0x2a424a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a42e70() {
   double input = -0.154287;
   input += synapse0x2a431b0();
   input += synapse0x2a431f0();
   input += synapse0x2a43230();
   input += synapse0x2a43270();
   input += synapse0x2a432b0();
   input += synapse0x2a432f0();
   input += synapse0x2a43330();
   input += synapse0x2a43370();
   input += synapse0x2a433b0();
   input += synapse0x2a433f0();
   input += synapse0x2a43430();
   input += synapse0x2a43470();
   input += synapse0x2a434b0();
   input += synapse0x2a434f0();
   input += synapse0x2a43530();
   input += synapse0x2a43570();
   input += synapse0x2a43000();
   input += synapse0x2a43040();
   input += synapse0x2a436c0();
   input += synapse0x2a43700();
   input += synapse0x2a43740();
   input += synapse0x2a43780();
   input += synapse0x2a437c0();
   input += synapse0x2a43800();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a42e70() {
   double input = input0x2a42e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a43840() {
   double input = -0.14281;
   input += synapse0x2a43b80();
   input += synapse0x2a43bc0();
   input += synapse0x2a43c00();
   input += synapse0x2a43c40();
   input += synapse0x2a43c80();
   input += synapse0x2a43cc0();
   input += synapse0x2a43d00();
   input += synapse0x2a43d40();
   input += synapse0x2a43d80();
   input += synapse0x2a43dc0();
   input += synapse0x2a43e00();
   input += synapse0x2a43e40();
   input += synapse0x2a43e80();
   input += synapse0x2a43ec0();
   input += synapse0x2a43f00();
   input += synapse0x2a43f40();
   input += synapse0x2a439d0();
   input += synapse0x2a43a10();
   input += synapse0x2a44090();
   input += synapse0x2a440d0();
   input += synapse0x2a44110();
   input += synapse0x2a44150();
   input += synapse0x2a44190();
   input += synapse0x2a441d0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a43840() {
   double input = input0x2a43840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a44210() {
   double input = 0.0314927;
   input += synapse0x2a44550();
   input += synapse0x2a44590();
   input += synapse0x2a445d0();
   input += synapse0x2a44610();
   input += synapse0x2a44650();
   input += synapse0x2a44690();
   input += synapse0x2a446d0();
   input += synapse0x2a44710();
   input += synapse0x2a44750();
   input += synapse0x2a44790();
   input += synapse0x2a447d0();
   input += synapse0x2a44810();
   input += synapse0x2a44850();
   input += synapse0x2a44890();
   input += synapse0x2a448d0();
   input += synapse0x2a44910();
   input += synapse0x2a443a0();
   input += synapse0x2a443e0();
   input += synapse0x2a44a60();
   input += synapse0x2a44aa0();
   input += synapse0x2a44ae0();
   input += synapse0x2a44b20();
   input += synapse0x2a44b60();
   input += synapse0x2a44ba0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a44210() {
   double input = input0x2a44210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a44be0() {
   double input = 1.13047;
   input += synapse0x2a2d650();
   input += synapse0x2a2d690();
   input += synapse0x2a2d6d0();
   input += synapse0x2a2d710();
   input += synapse0x2a2d750();
   input += synapse0x2a2d790();
   input += synapse0x2a2d7d0();
   input += synapse0x2a2d810();
   input += synapse0x2a45330();
   input += synapse0x2a45370();
   input += synapse0x2a453b0();
   input += synapse0x2a453f0();
   input += synapse0x2a45430();
   input += synapse0x2a45470();
   input += synapse0x2a454b0();
   input += synapse0x2a454f0();
   input += synapse0x2a44d70();
   input += synapse0x2a44db0();
   input += synapse0x2a45640();
   input += synapse0x2a45680();
   input += synapse0x2a456c0();
   input += synapse0x2a45700();
   input += synapse0x2a45740();
   input += synapse0x2a45780();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a44be0() {
   double input = input0x2a44be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a457c0() {
   double input = 0.645274;
   input += synapse0x2a45b00();
   input += synapse0x2a45b40();
   input += synapse0x2a45b80();
   input += synapse0x2a45bc0();
   input += synapse0x2a45c00();
   input += synapse0x2a45c40();
   input += synapse0x2a45c80();
   input += synapse0x2a45cc0();
   input += synapse0x2a45d00();
   input += synapse0x2a45d40();
   input += synapse0x2a45d80();
   input += synapse0x2a45dc0();
   input += synapse0x2a45e00();
   input += synapse0x2a45e40();
   input += synapse0x2a45e80();
   input += synapse0x2a45ec0();
   input += synapse0x2a45950();
   input += synapse0x2a45990();
   input += synapse0x2a46010();
   input += synapse0x2a46050();
   input += synapse0x2a46090();
   input += synapse0x2a460d0();
   input += synapse0x2a46110();
   input += synapse0x2a46150();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a457c0() {
   double input = input0x2a457c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a46190() {
   double input = -0.0245927;
   input += synapse0x2a464d0();
   input += synapse0x2a46510();
   input += synapse0x2a46550();
   input += synapse0x2a46590();
   input += synapse0x2a465d0();
   input += synapse0x2a46610();
   input += synapse0x2a46650();
   input += synapse0x2a46690();
   input += synapse0x2a466d0();
   input += synapse0x2a46710();
   input += synapse0x2a46750();
   input += synapse0x2a46790();
   input += synapse0x2a467d0();
   input += synapse0x2a46810();
   input += synapse0x2a46850();
   input += synapse0x2a46890();
   input += synapse0x2a46320();
   input += synapse0x2a46360();
   input += synapse0x2a36e90();
   input += synapse0x2a36ed0();
   input += synapse0x2a36f10();
   input += synapse0x2a36f50();
   input += synapse0x2a36f90();
   input += synapse0x2a36fd0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a46190() {
   double input = input0x2a46190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a37010() {
   double input = -2.3287;
   input += synapse0x2a37350();
   input += synapse0x2a37390();
   input += synapse0x2a373d0();
   input += synapse0x2a37410();
   input += synapse0x2a37450();
   input += synapse0x2a37490();
   input += synapse0x2a374d0();
   input += synapse0x2a37510();
   input += synapse0x2a37550();
   input += synapse0x2a37590();
   input += synapse0x2a375d0();
   input += synapse0x2a37610();
   input += synapse0x2a37650();
   input += synapse0x2a37690();
   input += synapse0x2a376d0();
   input += synapse0x2a37710();
   input += synapse0x2a371a0();
   input += synapse0x2a371e0();
   input += synapse0x2a37860();
   input += synapse0x2a378a0();
   input += synapse0x2a378e0();
   input += synapse0x2a37920();
   input += synapse0x2a37960();
   input += synapse0x2a379a0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a37010() {
   double input = input0x2a37010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a379e0() {
   double input = -0.65291;
   input += synapse0x2a37d20();
   input += synapse0x2a37d60();
   input += synapse0x2a37da0();
   input += synapse0x2a37de0();
   input += synapse0x2a37e20();
   input += synapse0x2a37e60();
   input += synapse0x2a37ea0();
   input += synapse0x2a37ee0();
   input += synapse0x2a37f20();
   input += synapse0x2a37f60();
   input += synapse0x2a37fa0();
   input += synapse0x2a37fe0();
   input += synapse0x2a38020();
   input += synapse0x2a38060();
   input += synapse0x2a380a0();
   input += synapse0x2a380e0();
   input += synapse0x2a37b70();
   input += synapse0x2a37bb0();
   input += synapse0x2a38230();
   input += synapse0x2a38270();
   input += synapse0x2a382b0();
   input += synapse0x2a382f0();
   input += synapse0x2a38330();
   input += synapse0x2a38370();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a379e0() {
   double input = input0x2a379e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a383b0() {
   double input = -0.152684;
   input += synapse0x2a386f0();
   input += synapse0x2a38730();
   input += synapse0x2a38770();
   input += synapse0x2a387b0();
   input += synapse0x2a387f0();
   input += synapse0x2a38830();
   input += synapse0x2a38870();
   input += synapse0x2a388b0();
   input += synapse0x2a388f0();
   input += synapse0x2a38930();
   input += synapse0x2a38970();
   input += synapse0x2a389b0();
   input += synapse0x2a389f0();
   input += synapse0x2a38a30();
   input += synapse0x2a38a70();
   input += synapse0x2a38ab0();
   input += synapse0x2a38540();
   input += synapse0x2a38580();
   input += synapse0x2a38c00();
   input += synapse0x2a38c40();
   input += synapse0x2a38c80();
   input += synapse0x2a38cc0();
   input += synapse0x2a38d00();
   input += synapse0x2a38d40();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a383b0() {
   double input = input0x2a383b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a4a9f0() {
   double input = 0.249966;
   input += synapse0x2a4ac10();
   input += synapse0x2a4ac50();
   input += synapse0x2a4ac90();
   input += synapse0x2a4acd0();
   input += synapse0x2a4ad10();
   input += synapse0x2a4ad50();
   input += synapse0x2a4ad90();
   input += synapse0x2a4add0();
   input += synapse0x2a4ae10();
   input += synapse0x2a4ae50();
   input += synapse0x2a4ae90();
   input += synapse0x2a4aed0();
   input += synapse0x2a4af10();
   input += synapse0x2a4af50();
   input += synapse0x2a4af90();
   input += synapse0x2a4afd0();
   input += synapse0x2a38d80();
   input += synapse0x2a38dc0();
   input += synapse0x2a4b120();
   input += synapse0x2a4b160();
   input += synapse0x2a4b1a0();
   input += synapse0x2a4b1e0();
   input += synapse0x2a4b220();
   input += synapse0x2a4b260();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a4a9f0() {
   double input = input0x2a4a9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a4b2a0() {
   double input = -6.55218;
   input += synapse0x2a4b5e0();
   input += synapse0x2a4b620();
   input += synapse0x2a4b660();
   input += synapse0x2a4b6a0();
   input += synapse0x2a4b6e0();
   input += synapse0x2a4b720();
   input += synapse0x2a4b760();
   input += synapse0x2a4b7a0();
   input += synapse0x2a4b7e0();
   input += synapse0x2a4b820();
   input += synapse0x2a4b860();
   input += synapse0x2a4b8a0();
   input += synapse0x2a4b8e0();
   input += synapse0x2a4b920();
   input += synapse0x2a4b960();
   input += synapse0x2a4b9a0();
   input += synapse0x2a4b430();
   input += synapse0x2a4b470();
   input += synapse0x2a4baf0();
   input += synapse0x2a4bb30();
   input += synapse0x2a4bb70();
   input += synapse0x2a4bbb0();
   input += synapse0x2a4bbf0();
   input += synapse0x2a4bc30();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a4b2a0() {
   double input = input0x2a4b2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a4bc70() {
   double input = 0.307602;
   input += synapse0x2a4bfb0();
   input += synapse0x2a4bff0();
   input += synapse0x2a4c030();
   input += synapse0x2a4c070();
   input += synapse0x2a4c0b0();
   input += synapse0x2a4c0f0();
   input += synapse0x2a4c130();
   input += synapse0x2a4c170();
   input += synapse0x2a4c1b0();
   input += synapse0x2a4c1f0();
   input += synapse0x2a4c230();
   input += synapse0x2a4c270();
   input += synapse0x2a4c2b0();
   input += synapse0x2a4c2f0();
   input += synapse0x2a4c330();
   input += synapse0x2a4c370();
   input += synapse0x2a4be00();
   input += synapse0x2a4be40();
   input += synapse0x2a4c4c0();
   input += synapse0x2a4c500();
   input += synapse0x2a4c540();
   input += synapse0x2a4c580();
   input += synapse0x2a4c5c0();
   input += synapse0x2a4c600();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a4bc70() {
   double input = input0x2a4bc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a4c640() {
   double input = 0.730203;
   input += synapse0x2a4c980();
   input += synapse0x2a4c9c0();
   input += synapse0x2a4ca00();
   input += synapse0x2a4ca40();
   input += synapse0x2a4ca80();
   input += synapse0x2a4cac0();
   input += synapse0x2a4cb00();
   input += synapse0x2a4cb40();
   input += synapse0x2a4cb80();
   input += synapse0x2a4cbc0();
   input += synapse0x2a4cc00();
   input += synapse0x2a4cc40();
   input += synapse0x2a4cc80();
   input += synapse0x2a4ccc0();
   input += synapse0x2a4cd00();
   input += synapse0x2a4cd40();
   input += synapse0x2a4c7d0();
   input += synapse0x2a4c810();
   input += synapse0x2a4ce90();
   input += synapse0x2a4ced0();
   input += synapse0x2a4cf10();
   input += synapse0x2a4cf50();
   input += synapse0x2a4cf90();
   input += synapse0x2a4cfd0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a4c640() {
   double input = input0x2a4c640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a53840() {
   double input = 1.10101;
   input += synapse0x2a29570();
   input += synapse0x2a295b0();
   input += synapse0x2a2aa80();
   input += synapse0x2a2aac0();
   input += synapse0x2a2b450();
   input += synapse0x2a2b490();
   input += synapse0x2a2c220();
   input += synapse0x2a2c260();
   input += synapse0x2a2cbf0();
   input += synapse0x2a2cc30();
   input += synapse0x2a2d5c0();
   input += synapse0x2a2d600();
   input += synapse0x2a2e0a0();
   input += synapse0x2a2e0e0();
   input += synapse0x2a2ea70();
   input += synapse0x2a2eab0();
   input += synapse0x2a2bb50();
   input += synapse0x2a2bb90();
   input += synapse0x2a30620();
   input += synapse0x2a30660();
   input += synapse0x2a30ff0();
   input += synapse0x2a31030();
   input += synapse0x2a319c0();
   input += synapse0x2a31a00();
   input += synapse0x2a32390();
   input += synapse0x2a323d0();
   input += synapse0x2a26500();
   input += synapse0x2a26540();
   input += synapse0x2a34480();
   input += synapse0x2a344c0();
   input += synapse0x2a34e50();
   input += synapse0x2a34e90();
   input += synapse0x2a35820();
   input += synapse0x2a35860();
   input += synapse0x2a361f0();
   input += synapse0x2a36230();
   input += synapse0x2a36bc0();
   input += synapse0x2a36c00();
   input += synapse0x2a2f710();
   input += synapse0x2a2f750();
   input += synapse0x2a38fc0();
   input += synapse0x2a39000();
   input += synapse0x2a39950();
   input += synapse0x2a39990();
   input += synapse0x2a3a320();
   input += synapse0x2a3a360();
   input += synapse0x2a3acf0();
   input += synapse0x2a3ad30();
   input += synapse0x2a3b6c0();
   input += synapse0x2a3b700();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a53840() {
   double input = input0x2a53840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a53be0() {
   double input = 0.565018;
   input += synapse0x2a3de00();
   input += synapse0x2a3de40();
   input += synapse0x2a333c0();
   input += synapse0x2a33400();
   input += synapse0x2a409e0();
   input += synapse0x2a40a20();
   input += synapse0x2a413b0();
   input += synapse0x2a413f0();
   input += synapse0x2a41d80();
   input += synapse0x2a41dc0();
   input += synapse0x2a42750();
   input += synapse0x2a42790();
   input += synapse0x2a43120();
   input += synapse0x2a43160();
   input += synapse0x2a43af0();
   input += synapse0x2a43b30();
   input += synapse0x2a444c0();
   input += synapse0x2a44500();
   input += synapse0x2a44e90();
   input += synapse0x2a44ed0();
   input += synapse0x2a45a70();
   input += synapse0x2a45ab0();
   input += synapse0x2a46440();
   input += synapse0x2a46480();
   input += synapse0x2a372c0();
   input += synapse0x2a37300();
   input += synapse0x2a37c90();
   input += synapse0x2a37cd0();
   input += synapse0x2a38660();
   input += synapse0x2a386a0();
   input += synapse0x2a4ab80();
   input += synapse0x2a4abc0();
   input += synapse0x2a4b550();
   input += synapse0x2a4b590();
   input += synapse0x2a4bf20();
   input += synapse0x2a4bf60();
   input += synapse0x2a4c8f0();
   input += synapse0x2a4c930();
   input += synapse0x2a287e0();
   input += synapse0x2a28820();
   input += synapse0x2a3c090();
   input += synapse0x2a3c0d0();
   input += synapse0x2a4d010();
   input += synapse0x2a4d050();
   input += synapse0x2a4d090();
   input += synapse0x2a4d0d0();
   input += synapse0x2a53f80();
   input += synapse0x2a53fc0();
   input += synapse0x2a54000();
   input += synapse0x2a54040();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a53be0() {
   double input = input0x2a53be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a54080() {
   double input = 0.0798561;
   input += synapse0x2a543c0();
   input += synapse0x2a54400();
   input += synapse0x2a54440();
   input += synapse0x2a54480();
   input += synapse0x2a544c0();
   input += synapse0x2a54500();
   input += synapse0x2a54540();
   input += synapse0x2a54580();
   input += synapse0x2a545c0();
   input += synapse0x2a54600();
   input += synapse0x2a54640();
   input += synapse0x2a54680();
   input += synapse0x2a546c0();
   input += synapse0x2a54700();
   input += synapse0x2a54740();
   input += synapse0x2a54780();
   input += synapse0x2a54210();
   input += synapse0x2a54250();
   input += synapse0x2a548d0();
   input += synapse0x2a54910();
   input += synapse0x2a54950();
   input += synapse0x2a54990();
   input += synapse0x2a549d0();
   input += synapse0x2a54a10();
   input += synapse0x2a54a50();
   input += synapse0x2a54a90();
   input += synapse0x2a54ad0();
   input += synapse0x2a54b10();
   input += synapse0x2a54b50();
   input += synapse0x2a54b90();
   input += synapse0x2a54bd0();
   input += synapse0x2a54c10();
   input += synapse0x2a547c0();
   input += synapse0x2a54800();
   input += synapse0x2a54840();
   input += synapse0x2a54880();
   input += synapse0x2a54e60();
   input += synapse0x2a54ea0();
   input += synapse0x2a54ee0();
   input += synapse0x2a54f20();
   input += synapse0x2a54f60();
   input += synapse0x2a54fa0();
   input += synapse0x2a54fe0();
   input += synapse0x2a55020();
   input += synapse0x2a55060();
   input += synapse0x2a550a0();
   input += synapse0x2a550e0();
   input += synapse0x2a55120();
   input += synapse0x2a55160();
   input += synapse0x2a551a0();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a54080() {
   double input = input0x2a54080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a551e0() {
   double input = 0.679288;
   input += synapse0x2a55520();
   input += synapse0x2a55560();
   input += synapse0x2a555a0();
   input += synapse0x2a555e0();
   input += synapse0x2a55620();
   input += synapse0x2a55660();
   input += synapse0x2a556a0();
   input += synapse0x2a556e0();
   input += synapse0x2a55720();
   input += synapse0x2a55760();
   input += synapse0x2a557a0();
   input += synapse0x2a557e0();
   input += synapse0x2a55820();
   input += synapse0x2a55860();
   input += synapse0x2a558a0();
   input += synapse0x2a558e0();
   input += synapse0x2a55370();
   input += synapse0x2a553b0();
   input += synapse0x2a55a30();
   input += synapse0x2a55a70();
   input += synapse0x2a55ab0();
   input += synapse0x2a55af0();
   input += synapse0x2a55b30();
   input += synapse0x2a55b70();
   input += synapse0x2a55bb0();
   input += synapse0x2a55bf0();
   input += synapse0x2a55c30();
   input += synapse0x2a55c70();
   input += synapse0x2a55cb0();
   input += synapse0x2a55cf0();
   input += synapse0x2a55d30();
   input += synapse0x2a55d70();
   input += synapse0x2a55920();
   input += synapse0x2a55960();
   input += synapse0x2a559a0();
   input += synapse0x2a559e0();
   input += synapse0x2a55fc0();
   input += synapse0x2a56000();
   input += synapse0x2a56040();
   input += synapse0x2a56080();
   input += synapse0x2a560c0();
   input += synapse0x2a56100();
   input += synapse0x2a56140();
   input += synapse0x2a56180();
   input += synapse0x2a561c0();
   input += synapse0x2a56200();
   input += synapse0x2a56240();
   input += synapse0x2a56280();
   input += synapse0x2a562c0();
   input += synapse0x2a56300();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a551e0() {
   double input = input0x2a551e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a56340() {
   double input = -0.33413;
   input += synapse0x2a56680();
   input += synapse0x2a566c0();
   input += synapse0x2a56700();
   input += synapse0x2a56740();
   input += synapse0x2a56780();
   input += synapse0x2a567c0();
   input += synapse0x2a56800();
   input += synapse0x2a56840();
   input += synapse0x2a56880();
   input += synapse0x2a568c0();
   input += synapse0x2a56900();
   input += synapse0x2a56940();
   input += synapse0x2a56980();
   input += synapse0x2a569c0();
   input += synapse0x2a56a00();
   input += synapse0x2a56a40();
   input += synapse0x2a564d0();
   input += synapse0x2a56510();
   input += synapse0x2a56b90();
   input += synapse0x2a56bd0();
   input += synapse0x2a56c10();
   input += synapse0x2a56c50();
   input += synapse0x2a56c90();
   input += synapse0x2a56cd0();
   input += synapse0x2a56d10();
   input += synapse0x2a56d50();
   input += synapse0x2a56d90();
   input += synapse0x2a56dd0();
   input += synapse0x2a56e10();
   input += synapse0x2a56e50();
   input += synapse0x2a56e90();
   input += synapse0x2a56ed0();
   input += synapse0x2a56a80();
   input += synapse0x2a56ac0();
   input += synapse0x2a56b00();
   input += synapse0x2a56b40();
   input += synapse0x2a57120();
   input += synapse0x2a57160();
   input += synapse0x2a571a0();
   input += synapse0x2a571e0();
   input += synapse0x2a57220();
   input += synapse0x2a57260();
   input += synapse0x2a572a0();
   input += synapse0x2a572e0();
   input += synapse0x2a57320();
   input += synapse0x2a57360();
   input += synapse0x2a573a0();
   input += synapse0x2a573e0();
   input += synapse0x2a57420();
   input += synapse0x2a57460();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a56340() {
   double input = input0x2a56340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLcR::input0x2a574a0() {
   double input = 2.8385;
   input += synapse0x2a28580();
   input += synapse0x2a576c0();
   input += synapse0x2a57700();
   input += synapse0x2a57740();
   input += synapse0x2a57780();
   return input;
}

double NNfunction_ss_uLcR::neuron0x2a574a0() {
   double input = input0x2a574a0();
   return (input * 1)+0;
}

double NNfunction_ss_uLcR::synapse0x27e33d0() {
   return (neuron0x2a23560()*0.103918);
}

double NNfunction_ss_uLcR::synapse0x2a23420() {
   return (neuron0x2a238a0()*0.0469013);
}

double NNfunction_ss_uLcR::synapse0x2a23460() {
   return (neuron0x2a23be0()*-1.61001);
}

double NNfunction_ss_uLcR::synapse0x2a28870() {
   return (neuron0x2a23f20()*-0.133486);
}

double NNfunction_ss_uLcR::synapse0x2a288b0() {
   return (neuron0x2a24260()*0.00425322);
}

double NNfunction_ss_uLcR::synapse0x2a288f0() {
   return (neuron0x2a245a0()*-0.00736606);
}

double NNfunction_ss_uLcR::synapse0x2a28930() {
   return (neuron0x2a248e0()*0.020478);
}

double NNfunction_ss_uLcR::synapse0x2a28970() {
   return (neuron0x2a24c20()*-0.116672);
}

double NNfunction_ss_uLcR::synapse0x2a289b0() {
   return (neuron0x2a24f60()*0.0288291);
}

double NNfunction_ss_uLcR::synapse0x2a289f0() {
   return (neuron0x2a252a0()*0.00888947);
}

double NNfunction_ss_uLcR::synapse0x2a28a30() {
   return (neuron0x2a255e0()*0.0351932);
}

double NNfunction_ss_uLcR::synapse0x2a28a70() {
   return (neuron0x2a25920()*0.443272);
}

double NNfunction_ss_uLcR::synapse0x2a28ab0() {
   return (neuron0x2a25c60()*0.0709369);
}

double NNfunction_ss_uLcR::synapse0x2a28af0() {
   return (neuron0x2a25fa0()*0.0160844);
}

double NNfunction_ss_uLcR::synapse0x2a28b30() {
   return (neuron0x2a262e0()*-0.0465506);
}

double NNfunction_ss_uLcR::synapse0x2a28b70() {
   return (neuron0x2a26620()*-0.0440545);
}

double NNfunction_ss_uLcR::synapse0x2a23390() {
   return (neuron0x2a26960()*-0.128495);
}

double NNfunction_ss_uLcR::synapse0x2a233d0() {
   return (neuron0x2a26ec0()*-0.0253294);
}

double NNfunction_ss_uLcR::synapse0x27d4c70() {
   return (neuron0x2a270e0()*-0.0510536);
}

double NNfunction_ss_uLcR::synapse0x27d4cb0() {
   return (neuron0x2a27420()*0.0418144);
}

double NNfunction_ss_uLcR::synapse0x2a28dd0() {
   return (neuron0x2a27760()*-0.0350653);
}

double NNfunction_ss_uLcR::synapse0x2a28e10() {
   return (neuron0x2a27aa0()*-0.0186661);
}

double NNfunction_ss_uLcR::synapse0x2a28e50() {
   return (neuron0x2a27de0()*0.0564602);
}

double NNfunction_ss_uLcR::synapse0x2a28e90() {
   return (neuron0x2a28120()*-0.0165035);
}

double NNfunction_ss_uLcR::synapse0x2a29210() {
   return (neuron0x2a23560()*0.200564);
}

double NNfunction_ss_uLcR::synapse0x2a29250() {
   return (neuron0x2a238a0()*0.455104);
}

double NNfunction_ss_uLcR::synapse0x2a29290() {
   return (neuron0x2a23be0()*-0.571089);
}

double NNfunction_ss_uLcR::synapse0x2a292d0() {
   return (neuron0x2a23f20()*-0.37322);
}

double NNfunction_ss_uLcR::synapse0x2a29310() {
   return (neuron0x2a24260()*0.53935);
}

double NNfunction_ss_uLcR::synapse0x2a29350() {
   return (neuron0x2a245a0()*-1.17266);
}

double NNfunction_ss_uLcR::synapse0x2a29390() {
   return (neuron0x2a248e0()*-0.1025);
}

double NNfunction_ss_uLcR::synapse0x2a293d0() {
   return (neuron0x2a24c20()*-0.304017);
}

double NNfunction_ss_uLcR::synapse0x2a29410() {
   return (neuron0x2a24f60()*-0.332614);
}

double NNfunction_ss_uLcR::synapse0x2a28cc0() {
   return (neuron0x2a252a0()*-0.448816);
}

double NNfunction_ss_uLcR::synapse0x2a28d00() {
   return (neuron0x2a255e0()*0.32247);
}

double NNfunction_ss_uLcR::synapse0x2a28d40() {
   return (neuron0x2a25920()*1.11097);
}

double NNfunction_ss_uLcR::synapse0x2a28d80() {
   return (neuron0x2a25c60()*-0.716003);
}

double NNfunction_ss_uLcR::synapse0x2a29660() {
   return (neuron0x2a25fa0()*0.0804131);
}

double NNfunction_ss_uLcR::synapse0x2a296a0() {
   return (neuron0x2a262e0()*0.362);
}

double NNfunction_ss_uLcR::synapse0x2a296e0() {
   return (neuron0x2a26620()*0.148595);
}

double NNfunction_ss_uLcR::synapse0x2a29060() {
   return (neuron0x2a26960()*-0.847403);
}

double NNfunction_ss_uLcR::synapse0x2a290a0() {
   return (neuron0x2a26ec0()*0.13928);
}

double NNfunction_ss_uLcR::synapse0x2a29830() {
   return (neuron0x2a270e0()*-0.0103461);
}

double NNfunction_ss_uLcR::synapse0x2a29870() {
   return (neuron0x2a27420()*-0.182424);
}

double NNfunction_ss_uLcR::synapse0x2a298b0() {
   return (neuron0x2a27760()*-1.02747);
}

double NNfunction_ss_uLcR::synapse0x2a298f0() {
   return (neuron0x2a27aa0()*0.91415);
}

double NNfunction_ss_uLcR::synapse0x2a29930() {
   return (neuron0x2a27de0()*0.181433);
}

double NNfunction_ss_uLcR::synapse0x2a29970() {
   return (neuron0x2a28120()*0.113152);
}

double NNfunction_ss_uLcR::synapse0x2a29cf0() {
   return (neuron0x2a23560()*0.00249842);
}

double NNfunction_ss_uLcR::synapse0x2a29d30() {
   return (neuron0x2a238a0()*-0.0324603);
}

double NNfunction_ss_uLcR::synapse0x2a29d70() {
   return (neuron0x2a23be0()*-0.0476513);
}

double NNfunction_ss_uLcR::synapse0x2a29db0() {
   return (neuron0x2a23f20()*-0.178738);
}

double NNfunction_ss_uLcR::synapse0x2a29df0() {
   return (neuron0x2a24260()*0.0122163);
}

double NNfunction_ss_uLcR::synapse0x2a29e30() {
   return (neuron0x2a245a0()*0.00443666);
}

double NNfunction_ss_uLcR::synapse0x2a29e70() {
   return (neuron0x2a248e0()*0.00411408);
}

double NNfunction_ss_uLcR::synapse0x2a29eb0() {
   return (neuron0x2a24c20()*-0.00259997);
}

double NNfunction_ss_uLcR::synapse0x2a29ef0() {
   return (neuron0x2a24f60()*-0.00176293);
}

double NNfunction_ss_uLcR::synapse0x2a29f30() {
   return (neuron0x2a252a0()*-0.00939655);
}

double NNfunction_ss_uLcR::synapse0x2a29f70() {
   return (neuron0x2a255e0()*-0.00403487);
}

double NNfunction_ss_uLcR::synapse0x2a29fb0() {
   return (neuron0x2a25920()*0.695562);
}

double NNfunction_ss_uLcR::synapse0x2a29ff0() {
   return (neuron0x2a25c60()*0.0131123);
}

double NNfunction_ss_uLcR::synapse0x2a2a030() {
   return (neuron0x2a25fa0()*-0.00297228);
}

double NNfunction_ss_uLcR::synapse0x2a2a070() {
   return (neuron0x2a262e0()*-0.00877871);
}

double NNfunction_ss_uLcR::synapse0x2a2a0b0() {
   return (neuron0x2a26620()*0.350006);
}

double NNfunction_ss_uLcR::synapse0x2a29b40() {
   return (neuron0x2a26960()*0.0152476);
}

double NNfunction_ss_uLcR::synapse0x2a29b80() {
   return (neuron0x2a26ec0()*-0.0101641);
}

double NNfunction_ss_uLcR::synapse0x27e2ac0() {
   return (neuron0x2a270e0()*-0.025973);
}

double NNfunction_ss_uLcR::synapse0x27e2b00() {
   return (neuron0x2a27420()*0.00147831);
}

double NNfunction_ss_uLcR::synapse0x2a125f0() {
   return (neuron0x2a27760()*-0.00675024);
}

double NNfunction_ss_uLcR::synapse0x2a12630() {
   return (neuron0x2a27aa0()*-0.00690417);
}

double NNfunction_ss_uLcR::synapse0x2a12670() {
   return (neuron0x2a27de0()*0.00343587);
}

double NNfunction_ss_uLcR::synapse0x2a234a0() {
   return (neuron0x2a28120()*0.0174997);
}

double NNfunction_ss_uLcR::synapse0x2a29600() {
   return (neuron0x2a23560()*0.706283);
}

double NNfunction_ss_uLcR::synapse0x2a234e0() {
   return (neuron0x2a238a0()*0.556502);
}

double NNfunction_ss_uLcR::synapse0x2a23520() {
   return (neuron0x2a23be0()*-0.865963);
}

double NNfunction_ss_uLcR::synapse0x2a2a200() {
   return (neuron0x2a23f20()*1.91068);
}

double NNfunction_ss_uLcR::synapse0x2a2a240() {
   return (neuron0x2a24260()*-0.331387);
}

double NNfunction_ss_uLcR::synapse0x2a2a280() {
   return (neuron0x2a245a0()*0.0476744);
}

double NNfunction_ss_uLcR::synapse0x2a2a2c0() {
   return (neuron0x2a248e0()*-0.157162);
}

double NNfunction_ss_uLcR::synapse0x2a2a300() {
   return (neuron0x2a24c20()*-0.559998);
}

double NNfunction_ss_uLcR::synapse0x2a2a340() {
   return (neuron0x2a24f60()*-0.83645);
}

double NNfunction_ss_uLcR::synapse0x2a2a380() {
   return (neuron0x2a252a0()*-0.0301744);
}

double NNfunction_ss_uLcR::synapse0x2a2a3c0() {
   return (neuron0x2a255e0()*0.0279971);
}

double NNfunction_ss_uLcR::synapse0x2a2a400() {
   return (neuron0x2a25920()*-0.437649);
}

double NNfunction_ss_uLcR::synapse0x2a2a440() {
   return (neuron0x2a25c60()*-0.29494);
}

double NNfunction_ss_uLcR::synapse0x2a2a480() {
   return (neuron0x2a25fa0()*-0.803418);
}

double NNfunction_ss_uLcR::synapse0x2a2a4c0() {
   return (neuron0x2a262e0()*1.1854);
}

double NNfunction_ss_uLcR::synapse0x2a2a500() {
   return (neuron0x2a26620()*-0.580589);
}

double NNfunction_ss_uLcR::synapse0x2a29450() {
   return (neuron0x2a26960()*0.410462);
}

double NNfunction_ss_uLcR::synapse0x2a29490() {
   return (neuron0x2a26ec0()*0.296909);
}

double NNfunction_ss_uLcR::synapse0x2a2a650() {
   return (neuron0x2a270e0()*0.382599);
}

double NNfunction_ss_uLcR::synapse0x2a2a690() {
   return (neuron0x2a27420()*0.468398);
}

double NNfunction_ss_uLcR::synapse0x2a2a6d0() {
   return (neuron0x2a27760()*-0.372724);
}

double NNfunction_ss_uLcR::synapse0x2a2a710() {
   return (neuron0x2a27aa0()*0.0246807);
}

double NNfunction_ss_uLcR::synapse0x2a2a750() {
   return (neuron0x2a27de0()*0.0348326);
}

double NNfunction_ss_uLcR::synapse0x2a2a790() {
   return (neuron0x2a28120()*-0.291093);
}

double NNfunction_ss_uLcR::synapse0x2a2ab10() {
   return (neuron0x2a23560()*-0.106723);
}

double NNfunction_ss_uLcR::synapse0x2a2ab50() {
   return (neuron0x2a238a0()*1.02664);
}

double NNfunction_ss_uLcR::synapse0x2a2ab90() {
   return (neuron0x2a23be0()*-1.66236);
}

double NNfunction_ss_uLcR::synapse0x2a2abd0() {
   return (neuron0x2a23f20()*0.103238);
}

double NNfunction_ss_uLcR::synapse0x2a2ac10() {
   return (neuron0x2a24260()*0.767804);
}

double NNfunction_ss_uLcR::synapse0x2a2ac50() {
   return (neuron0x2a245a0()*-0.35536);
}

double NNfunction_ss_uLcR::synapse0x2a2ac90() {
   return (neuron0x2a248e0()*0.255017);
}

double NNfunction_ss_uLcR::synapse0x2a2acd0() {
   return (neuron0x2a24c20()*-0.336182);
}

double NNfunction_ss_uLcR::synapse0x2a2ad10() {
   return (neuron0x2a24f60()*-0.511859);
}

double NNfunction_ss_uLcR::synapse0x2a2ad50() {
   return (neuron0x2a252a0()*0.0218418);
}

double NNfunction_ss_uLcR::synapse0x2a2ad90() {
   return (neuron0x2a255e0()*0.0402821);
}

double NNfunction_ss_uLcR::synapse0x2a2add0() {
   return (neuron0x2a25920()*0.582999);
}

double NNfunction_ss_uLcR::synapse0x2a2ae10() {
   return (neuron0x2a25c60()*-0.683761);
}

double NNfunction_ss_uLcR::synapse0x2a2ae50() {
   return (neuron0x2a25fa0()*0.244717);
}

double NNfunction_ss_uLcR::synapse0x2a2ae90() {
   return (neuron0x2a262e0()*-0.914031);
}

double NNfunction_ss_uLcR::synapse0x2a2aed0() {
   return (neuron0x2a26620()*-0.413875);
}

double NNfunction_ss_uLcR::synapse0x2a2a960() {
   return (neuron0x2a26960()*0.572634);
}

double NNfunction_ss_uLcR::synapse0x2a2a9a0() {
   return (neuron0x2a26ec0()*0.00784615);
}

double NNfunction_ss_uLcR::synapse0x2a2b020() {
   return (neuron0x2a270e0()*0.794981);
}

double NNfunction_ss_uLcR::synapse0x2a2b060() {
   return (neuron0x2a27420()*-0.588029);
}

double NNfunction_ss_uLcR::synapse0x2a2b0a0() {
   return (neuron0x2a27760()*-0.302017);
}

double NNfunction_ss_uLcR::synapse0x2a2b0e0() {
   return (neuron0x2a27aa0()*0.0155007);
}

double NNfunction_ss_uLcR::synapse0x2a2b120() {
   return (neuron0x2a27de0()*0.176189);
}

double NNfunction_ss_uLcR::synapse0x2a2b160() {
   return (neuron0x2a28120()*-0.490063);
}

double NNfunction_ss_uLcR::synapse0x2a2b4e0() {
   return (neuron0x2a23560()*-1.14836);
}

double NNfunction_ss_uLcR::synapse0x2a2b520() {
   return (neuron0x2a238a0()*0.617824);
}

double NNfunction_ss_uLcR::synapse0x2a2b560() {
   return (neuron0x2a23be0()*0.345945);
}

double NNfunction_ss_uLcR::synapse0x2a2b5a0() {
   return (neuron0x2a23f20()*-0.41225);
}

double NNfunction_ss_uLcR::synapse0x2a2b5e0() {
   return (neuron0x2a24260()*-0.205276);
}

double NNfunction_ss_uLcR::synapse0x2a2b620() {
   return (neuron0x2a245a0()*-1.44857);
}

double NNfunction_ss_uLcR::synapse0x2a2b660() {
   return (neuron0x2a248e0()*-0.389779);
}

double NNfunction_ss_uLcR::synapse0x2a2b6a0() {
   return (neuron0x2a24c20()*1.02077);
}

double NNfunction_ss_uLcR::synapse0x2a2b6e0() {
   return (neuron0x2a24f60()*-0.460983);
}

double NNfunction_ss_uLcR::synapse0x27e2e30() {
   return (neuron0x2a252a0()*0.145697);
}

double NNfunction_ss_uLcR::synapse0x27e2e70() {
   return (neuron0x2a255e0()*0.16254);
}

double NNfunction_ss_uLcR::synapse0x27e2eb0() {
   return (neuron0x2a25920()*-1.09536);
}

double NNfunction_ss_uLcR::synapse0x27e2ef0() {
   return (neuron0x2a25c60()*0.66788);
}

double NNfunction_ss_uLcR::synapse0x27e2f30() {
   return (neuron0x2a25fa0()*1.44027);
}

double NNfunction_ss_uLcR::synapse0x27e2f70() {
   return (neuron0x2a262e0()*-0.0082415);
}

double NNfunction_ss_uLcR::synapse0x27e2fb0() {
   return (neuron0x2a26620()*-0.978679);
}

double NNfunction_ss_uLcR::synapse0x2a2b330() {
   return (neuron0x2a26960()*-0.185588);
}

double NNfunction_ss_uLcR::synapse0x2a2b370() {
   return (neuron0x2a26ec0()*-0.0976613);
}

double NNfunction_ss_uLcR::synapse0x27e3100() {
   return (neuron0x2a270e0()*-0.146062);
}

double NNfunction_ss_uLcR::synapse0x27e3140() {
   return (neuron0x2a27420()*0.106498);
}

double NNfunction_ss_uLcR::synapse0x27e3180() {
   return (neuron0x2a27760()*0.0708385);
}

double NNfunction_ss_uLcR::synapse0x27e31c0() {
   return (neuron0x2a27aa0()*-0.073098);
}

double NNfunction_ss_uLcR::synapse0x27e3200() {
   return (neuron0x2a27de0()*-0.108365);
}

double NNfunction_ss_uLcR::synapse0x2a2bf30() {
   return (neuron0x2a28120()*-0.526283);
}

double NNfunction_ss_uLcR::synapse0x2a2c2b0() {
   return (neuron0x2a23560()*-0.0128296);
}

double NNfunction_ss_uLcR::synapse0x2a2c2f0() {
   return (neuron0x2a238a0()*0.017394);
}

double NNfunction_ss_uLcR::synapse0x2a2c330() {
   return (neuron0x2a23be0()*0.010425);
}

double NNfunction_ss_uLcR::synapse0x2a2c370() {
   return (neuron0x2a23f20()*-8.7636);
}

double NNfunction_ss_uLcR::synapse0x2a2c3b0() {
   return (neuron0x2a24260()*-0.000183886);
}

double NNfunction_ss_uLcR::synapse0x2a2c3f0() {
   return (neuron0x2a245a0()*0.033099);
}

double NNfunction_ss_uLcR::synapse0x2a2c430() {
   return (neuron0x2a248e0()*0.0143844);
}

double NNfunction_ss_uLcR::synapse0x2a2c470() {
   return (neuron0x2a24c20()*-0.00341945);
}

double NNfunction_ss_uLcR::synapse0x2a2c4b0() {
   return (neuron0x2a24f60()*0.0297597);
}

double NNfunction_ss_uLcR::synapse0x2a2c4f0() {
   return (neuron0x2a252a0()*0.00622492);
}

double NNfunction_ss_uLcR::synapse0x2a2c530() {
   return (neuron0x2a255e0()*0.000620453);
}

double NNfunction_ss_uLcR::synapse0x2a2c570() {
   return (neuron0x2a25920()*0.014498);
}

double NNfunction_ss_uLcR::synapse0x2a2c5b0() {
   return (neuron0x2a25c60()*0.0039152);
}

double NNfunction_ss_uLcR::synapse0x2a2c5f0() {
   return (neuron0x2a25fa0()*0.0154768);
}

double NNfunction_ss_uLcR::synapse0x2a2c630() {
   return (neuron0x2a262e0()*0.00630917);
}

double NNfunction_ss_uLcR::synapse0x2a2c670() {
   return (neuron0x2a26620()*0.0204412);
}

double NNfunction_ss_uLcR::synapse0x2a2c100() {
   return (neuron0x2a26960()*0.00762594);
}

double NNfunction_ss_uLcR::synapse0x2a2c140() {
   return (neuron0x2a26ec0()*0.0218578);
}

double NNfunction_ss_uLcR::synapse0x2a2c7c0() {
   return (neuron0x2a270e0()*0.00465036);
}

double NNfunction_ss_uLcR::synapse0x2a2c800() {
   return (neuron0x2a27420()*0.00832606);
}

double NNfunction_ss_uLcR::synapse0x2a2c840() {
   return (neuron0x2a27760()*0.0109369);
}

double NNfunction_ss_uLcR::synapse0x2a2c880() {
   return (neuron0x2a27aa0()*-0.0126575);
}

double NNfunction_ss_uLcR::synapse0x2a2c8c0() {
   return (neuron0x2a27de0()*0.00569767);
}

double NNfunction_ss_uLcR::synapse0x2a2c900() {
   return (neuron0x2a28120()*0.00430072);
}

double NNfunction_ss_uLcR::synapse0x2a2cc80() {
   return (neuron0x2a23560()*0.519969);
}

double NNfunction_ss_uLcR::synapse0x2a2ccc0() {
   return (neuron0x2a238a0()*0.13207);
}

double NNfunction_ss_uLcR::synapse0x2a2cd00() {
   return (neuron0x2a23be0()*0.0804438);
}

double NNfunction_ss_uLcR::synapse0x2a2cd40() {
   return (neuron0x2a23f20()*0.764607);
}

double NNfunction_ss_uLcR::synapse0x2a2cd80() {
   return (neuron0x2a24260()*0.170698);
}

double NNfunction_ss_uLcR::synapse0x2a2cdc0() {
   return (neuron0x2a245a0()*-0.988261);
}

double NNfunction_ss_uLcR::synapse0x2a2ce00() {
   return (neuron0x2a248e0()*-0.318106);
}

double NNfunction_ss_uLcR::synapse0x2a2ce40() {
   return (neuron0x2a24c20()*0.362746);
}

double NNfunction_ss_uLcR::synapse0x2a2ce80() {
   return (neuron0x2a24f60()*0.420239);
}

double NNfunction_ss_uLcR::synapse0x2a2cec0() {
   return (neuron0x2a252a0()*-0.773593);
}

double NNfunction_ss_uLcR::synapse0x2a2cf00() {
   return (neuron0x2a255e0()*-1.07482);
}

double NNfunction_ss_uLcR::synapse0x2a2cf40() {
   return (neuron0x2a25920()*-0.214372);
}

double NNfunction_ss_uLcR::synapse0x2a2cf80() {
   return (neuron0x2a25c60()*0.744166);
}

double NNfunction_ss_uLcR::synapse0x2a2cfc0() {
   return (neuron0x2a25fa0()*-0.31299);
}

double NNfunction_ss_uLcR::synapse0x2a2d000() {
   return (neuron0x2a262e0()*-0.0887996);
}

double NNfunction_ss_uLcR::synapse0x2a2d040() {
   return (neuron0x2a26620()*0.110428);
}

double NNfunction_ss_uLcR::synapse0x2a2cad0() {
   return (neuron0x2a26960()*-0.926432);
}

double NNfunction_ss_uLcR::synapse0x2a2cb10() {
   return (neuron0x2a26ec0()*0.0632824);
}

double NNfunction_ss_uLcR::synapse0x2a2d190() {
   return (neuron0x2a270e0()*-0.10788);
}

double NNfunction_ss_uLcR::synapse0x2a2d1d0() {
   return (neuron0x2a27420()*-0.665493);
}

double NNfunction_ss_uLcR::synapse0x2a2d210() {
   return (neuron0x2a27760()*-0.283754);
}

double NNfunction_ss_uLcR::synapse0x2a2d250() {
   return (neuron0x2a27aa0()*0.541202);
}

double NNfunction_ss_uLcR::synapse0x2a2d290() {
   return (neuron0x2a27de0()*-0.364925);
}

double NNfunction_ss_uLcR::synapse0x2a2d2d0() {
   return (neuron0x2a28120()*-0.859026);
}

double NNfunction_ss_uLcR::synapse0x2a26db0() {
   return (neuron0x2a23560()*0.126746);
}

double NNfunction_ss_uLcR::synapse0x2a26df0() {
   return (neuron0x2a238a0()*0.170113);
}

double NNfunction_ss_uLcR::synapse0x2a26e30() {
   return (neuron0x2a23be0()*-0.0719172);
}

double NNfunction_ss_uLcR::synapse0x2a26e70() {
   return (neuron0x2a23f20()*-4.13247);
}

double NNfunction_ss_uLcR::synapse0x2a2d860() {
   return (neuron0x2a24260()*0.0108853);
}

double NNfunction_ss_uLcR::synapse0x2a2d8a0() {
   return (neuron0x2a245a0()*-0.0638941);
}

double NNfunction_ss_uLcR::synapse0x2a2d8e0() {
   return (neuron0x2a248e0()*0.0344381);
}

double NNfunction_ss_uLcR::synapse0x2a2d920() {
   return (neuron0x2a24c20()*0.00182865);
}

double NNfunction_ss_uLcR::synapse0x2a2d960() {
   return (neuron0x2a24f60()*0.0386569);
}

double NNfunction_ss_uLcR::synapse0x2a2d9a0() {
   return (neuron0x2a252a0()*-0.120686);
}

double NNfunction_ss_uLcR::synapse0x2a2d9e0() {
   return (neuron0x2a255e0()*-0.0920943);
}

double NNfunction_ss_uLcR::synapse0x2a2da20() {
   return (neuron0x2a25920()*0.367994);
}

double NNfunction_ss_uLcR::synapse0x2a2da60() {
   return (neuron0x2a25c60()*-0.017636);
}

double NNfunction_ss_uLcR::synapse0x2a2daa0() {
   return (neuron0x2a25fa0()*-0.0163143);
}

double NNfunction_ss_uLcR::synapse0x2a2dae0() {
   return (neuron0x2a262e0()*0.159578);
}

double NNfunction_ss_uLcR::synapse0x2a2db20() {
   return (neuron0x2a26620()*0.400566);
}

double NNfunction_ss_uLcR::synapse0x2a2d4a0() {
   return (neuron0x2a26960()*0.0030376);
}

double NNfunction_ss_uLcR::synapse0x2a2d4e0() {
   return (neuron0x2a26ec0()*0.0387192);
}

double NNfunction_ss_uLcR::synapse0x2a2dc70() {
   return (neuron0x2a270e0()*0.0436134);
}

double NNfunction_ss_uLcR::synapse0x2a2dcb0() {
   return (neuron0x2a27420()*0.0847431);
}

double NNfunction_ss_uLcR::synapse0x2a2dcf0() {
   return (neuron0x2a27760()*-0.0106866);
}

double NNfunction_ss_uLcR::synapse0x2a2dd30() {
   return (neuron0x2a27aa0()*0.0339527);
}

double NNfunction_ss_uLcR::synapse0x2a2dd70() {
   return (neuron0x2a27de0()*0.146344);
}

double NNfunction_ss_uLcR::synapse0x2a2ddb0() {
   return (neuron0x2a28120()*-0.105567);
}

double NNfunction_ss_uLcR::synapse0x2a2e130() {
   return (neuron0x2a23560()*0.275675);
}

double NNfunction_ss_uLcR::synapse0x2a2e170() {
   return (neuron0x2a238a0()*0.194428);
}

double NNfunction_ss_uLcR::synapse0x2a2e1b0() {
   return (neuron0x2a23be0()*-0.554311);
}

double NNfunction_ss_uLcR::synapse0x2a2e1f0() {
   return (neuron0x2a23f20()*-0.469741);
}

double NNfunction_ss_uLcR::synapse0x2a2e230() {
   return (neuron0x2a24260()*0.260465);
}

double NNfunction_ss_uLcR::synapse0x2a2e270() {
   return (neuron0x2a245a0()*0.363855);
}

double NNfunction_ss_uLcR::synapse0x2a2e2b0() {
   return (neuron0x2a248e0()*0.0599181);
}

double NNfunction_ss_uLcR::synapse0x2a2e2f0() {
   return (neuron0x2a24c20()*-0.89922);
}

double NNfunction_ss_uLcR::synapse0x2a2e330() {
   return (neuron0x2a24f60()*-0.643704);
}

double NNfunction_ss_uLcR::synapse0x2a2e370() {
   return (neuron0x2a252a0()*0.657577);
}

double NNfunction_ss_uLcR::synapse0x2a2e3b0() {
   return (neuron0x2a255e0()*0.652987);
}

double NNfunction_ss_uLcR::synapse0x2a2e3f0() {
   return (neuron0x2a25920()*0.742228);
}

double NNfunction_ss_uLcR::synapse0x2a2e430() {
   return (neuron0x2a25c60()*0.714958);
}

double NNfunction_ss_uLcR::synapse0x2a2e470() {
   return (neuron0x2a25fa0()*0.387604);
}

double NNfunction_ss_uLcR::synapse0x2a2e4b0() {
   return (neuron0x2a262e0()*1.03252);
}

double NNfunction_ss_uLcR::synapse0x2a2e4f0() {
   return (neuron0x2a26620()*0.545077);
}

double NNfunction_ss_uLcR::synapse0x2a2df80() {
   return (neuron0x2a26960()*-0.0356575);
}

double NNfunction_ss_uLcR::synapse0x2a2dfc0() {
   return (neuron0x2a26ec0()*-0.432077);
}

double NNfunction_ss_uLcR::synapse0x2a2e640() {
   return (neuron0x2a270e0()*1.25227);
}

double NNfunction_ss_uLcR::synapse0x2a2e680() {
   return (neuron0x2a27420()*-0.593525);
}

double NNfunction_ss_uLcR::synapse0x2a2e6c0() {
   return (neuron0x2a27760()*0.36552);
}

double NNfunction_ss_uLcR::synapse0x2a2e700() {
   return (neuron0x2a27aa0()*0.860065);
}

double NNfunction_ss_uLcR::synapse0x2a2e740() {
   return (neuron0x2a27de0()*0.0329177);
}

double NNfunction_ss_uLcR::synapse0x2a2e780() {
   return (neuron0x2a28120()*-0.780557);
}

double NNfunction_ss_uLcR::synapse0x2a2eb00() {
   return (neuron0x2a23560()*-0.915077);
}

double NNfunction_ss_uLcR::synapse0x2a2eb40() {
   return (neuron0x2a238a0()*-0.700235);
}

double NNfunction_ss_uLcR::synapse0x2a2eb80() {
   return (neuron0x2a23be0()*0.355888);
}

double NNfunction_ss_uLcR::synapse0x2a2ebc0() {
   return (neuron0x2a23f20()*-0.84094);
}

double NNfunction_ss_uLcR::synapse0x2a2ec00() {
   return (neuron0x2a24260()*-0.776991);
}

double NNfunction_ss_uLcR::synapse0x2a2ec40() {
   return (neuron0x2a245a0()*-0.376771);
}

double NNfunction_ss_uLcR::synapse0x2a2ec80() {
   return (neuron0x2a248e0()*-0.166708);
}

double NNfunction_ss_uLcR::synapse0x2a2ecc0() {
   return (neuron0x2a24c20()*0.112869);
}

double NNfunction_ss_uLcR::synapse0x2a2ed00() {
   return (neuron0x2a24f60()*0.954215);
}

double NNfunction_ss_uLcR::synapse0x2a2ed40() {
   return (neuron0x2a252a0()*-0.0778868);
}

double NNfunction_ss_uLcR::synapse0x2a2ed80() {
   return (neuron0x2a255e0()*0.00283576);
}

double NNfunction_ss_uLcR::synapse0x2a2edc0() {
   return (neuron0x2a25920()*-0.0768038);
}

double NNfunction_ss_uLcR::synapse0x2a2ee00() {
   return (neuron0x2a25c60()*0.0402388);
}

double NNfunction_ss_uLcR::synapse0x2a2ee40() {
   return (neuron0x2a25fa0()*0.913424);
}

double NNfunction_ss_uLcR::synapse0x2a2ee80() {
   return (neuron0x2a262e0()*-0.683826);
}

double NNfunction_ss_uLcR::synapse0x2a2eec0() {
   return (neuron0x2a26620()*-0.738185);
}

double NNfunction_ss_uLcR::synapse0x2a2e950() {
   return (neuron0x2a26960()*0.0638721);
}

double NNfunction_ss_uLcR::synapse0x2a2e990() {
   return (neuron0x2a26ec0()*-0.345746);
}

double NNfunction_ss_uLcR::synapse0x2a2b720() {
   return (neuron0x2a270e0()*0.222703);
}

double NNfunction_ss_uLcR::synapse0x2a2b760() {
   return (neuron0x2a27420()*-0.461154);
}

double NNfunction_ss_uLcR::synapse0x2a2b7a0() {
   return (neuron0x2a27760()*-0.358815);
}

double NNfunction_ss_uLcR::synapse0x2a2b7e0() {
   return (neuron0x2a27aa0()*-0.113446);
}

double NNfunction_ss_uLcR::synapse0x2a2b820() {
   return (neuron0x2a27de0()*-0.385992);
}

double NNfunction_ss_uLcR::synapse0x2a2b860() {
   return (neuron0x2a28120()*-1.12821);
}

double NNfunction_ss_uLcR::synapse0x2a2bbe0() {
   return (neuron0x2a23560()*-0.0408896);
}

double NNfunction_ss_uLcR::synapse0x2a2bc20() {
   return (neuron0x2a238a0()*-0.218687);
}

double NNfunction_ss_uLcR::synapse0x2a2bc60() {
   return (neuron0x2a23be0()*0.0256728);
}

double NNfunction_ss_uLcR::synapse0x2a2bca0() {
   return (neuron0x2a23f20()*-0.62963);
}

double NNfunction_ss_uLcR::synapse0x2a2bce0() {
   return (neuron0x2a24260()*0.144485);
}

double NNfunction_ss_uLcR::synapse0x2a2bd20() {
   return (neuron0x2a245a0()*0.180656);
}

double NNfunction_ss_uLcR::synapse0x2a2bd60() {
   return (neuron0x2a248e0()*0.535423);
}

double NNfunction_ss_uLcR::synapse0x2a2bda0() {
   return (neuron0x2a24c20()*0.142568);
}

double NNfunction_ss_uLcR::synapse0x2a2bde0() {
   return (neuron0x2a24f60()*-0.225357);
}

double NNfunction_ss_uLcR::synapse0x2a2be20() {
   return (neuron0x2a252a0()*-0.503374);
}

double NNfunction_ss_uLcR::synapse0x2a2be60() {
   return (neuron0x2a255e0()*-0.55857);
}

double NNfunction_ss_uLcR::synapse0x2a2bea0() {
   return (neuron0x2a25920()*0.796873);
}

double NNfunction_ss_uLcR::synapse0x2a2bee0() {
   return (neuron0x2a25c60()*-1.20688);
}

double NNfunction_ss_uLcR::synapse0x2a30020() {
   return (neuron0x2a25fa0()*0.364923);
}

double NNfunction_ss_uLcR::synapse0x2a30060() {
   return (neuron0x2a262e0()*-0.242608);
}

double NNfunction_ss_uLcR::synapse0x2a300a0() {
   return (neuron0x2a26620()*0.522549);
}

double NNfunction_ss_uLcR::synapse0x2a2ba30() {
   return (neuron0x2a26960()*0.427186);
}

double NNfunction_ss_uLcR::synapse0x2a2ba70() {
   return (neuron0x2a26ec0()*-0.784493);
}

double NNfunction_ss_uLcR::synapse0x2a301f0() {
   return (neuron0x2a270e0()*-0.734774);
}

double NNfunction_ss_uLcR::synapse0x2a30230() {
   return (neuron0x2a27420()*-0.215015);
}

double NNfunction_ss_uLcR::synapse0x2a30270() {
   return (neuron0x2a27760()*-0.0912635);
}

double NNfunction_ss_uLcR::synapse0x2a302b0() {
   return (neuron0x2a27aa0()*-0.0972008);
}

double NNfunction_ss_uLcR::synapse0x2a302f0() {
   return (neuron0x2a27de0()*0.00448279);
}

double NNfunction_ss_uLcR::synapse0x2a30330() {
   return (neuron0x2a28120()*0.293013);
}

double NNfunction_ss_uLcR::synapse0x2a306b0() {
   return (neuron0x2a23560()*-0.0205433);
}

double NNfunction_ss_uLcR::synapse0x2a306f0() {
   return (neuron0x2a238a0()*0.00948721);
}

double NNfunction_ss_uLcR::synapse0x2a30730() {
   return (neuron0x2a23be0()*-0.0283729);
}

double NNfunction_ss_uLcR::synapse0x2a30770() {
   return (neuron0x2a23f20()*7.26599);
}

double NNfunction_ss_uLcR::synapse0x2a307b0() {
   return (neuron0x2a24260()*-0.00152508);
}

double NNfunction_ss_uLcR::synapse0x2a307f0() {
   return (neuron0x2a245a0()*0.0174938);
}

double NNfunction_ss_uLcR::synapse0x2a30830() {
   return (neuron0x2a248e0()*0.0248573);
}

double NNfunction_ss_uLcR::synapse0x2a30870() {
   return (neuron0x2a24c20()*-0.011608);
}

double NNfunction_ss_uLcR::synapse0x2a308b0() {
   return (neuron0x2a24f60()*0.0107458);
}

double NNfunction_ss_uLcR::synapse0x2a308f0() {
   return (neuron0x2a252a0()*-0.0204683);
}

double NNfunction_ss_uLcR::synapse0x2a30930() {
   return (neuron0x2a255e0()*0.0207374);
}

double NNfunction_ss_uLcR::synapse0x2a30970() {
   return (neuron0x2a25920()*0.0441541);
}

double NNfunction_ss_uLcR::synapse0x2a309b0() {
   return (neuron0x2a25c60()*0.0101793);
}

double NNfunction_ss_uLcR::synapse0x2a309f0() {
   return (neuron0x2a25fa0()*0.00179762);
}

double NNfunction_ss_uLcR::synapse0x2a30a30() {
   return (neuron0x2a262e0()*0.00870571);
}

double NNfunction_ss_uLcR::synapse0x2a30a70() {
   return (neuron0x2a26620()*0.056093);
}

double NNfunction_ss_uLcR::synapse0x2a30500() {
   return (neuron0x2a26960()*0.0179732);
}

double NNfunction_ss_uLcR::synapse0x2a30540() {
   return (neuron0x2a26ec0()*0.00603985);
}

double NNfunction_ss_uLcR::synapse0x2a30bc0() {
   return (neuron0x2a270e0()*-0.00579996);
}

double NNfunction_ss_uLcR::synapse0x2a30c00() {
   return (neuron0x2a27420()*0.0123169);
}

double NNfunction_ss_uLcR::synapse0x2a30c40() {
   return (neuron0x2a27760()*-0.00299573);
}

double NNfunction_ss_uLcR::synapse0x2a30c80() {
   return (neuron0x2a27aa0()*-0.000791837);
}

double NNfunction_ss_uLcR::synapse0x2a30cc0() {
   return (neuron0x2a27de0()*-0.0147835);
}

double NNfunction_ss_uLcR::synapse0x2a30d00() {
   return (neuron0x2a28120()*0.00479397);
}

double NNfunction_ss_uLcR::synapse0x2a31080() {
   return (neuron0x2a23560()*-0.0331236);
}

double NNfunction_ss_uLcR::synapse0x2a310c0() {
   return (neuron0x2a238a0()*-0.837484);
}

double NNfunction_ss_uLcR::synapse0x2a31100() {
   return (neuron0x2a23be0()*0.0810159);
}

double NNfunction_ss_uLcR::synapse0x2a31140() {
   return (neuron0x2a23f20()*-0.370758);
}

double NNfunction_ss_uLcR::synapse0x2a31180() {
   return (neuron0x2a24260()*-0.184099);
}

double NNfunction_ss_uLcR::synapse0x2a311c0() {
   return (neuron0x2a245a0()*0.00920489);
}

double NNfunction_ss_uLcR::synapse0x2a31200() {
   return (neuron0x2a248e0()*0.186437);
}

double NNfunction_ss_uLcR::synapse0x2a31240() {
   return (neuron0x2a24c20()*-0.218292);
}

double NNfunction_ss_uLcR::synapse0x2a31280() {
   return (neuron0x2a24f60()*-0.841311);
}

double NNfunction_ss_uLcR::synapse0x2a312c0() {
   return (neuron0x2a252a0()*-0.252863);
}

double NNfunction_ss_uLcR::synapse0x2a31300() {
   return (neuron0x2a255e0()*0.175922);
}

double NNfunction_ss_uLcR::synapse0x2a31340() {
   return (neuron0x2a25920()*-0.860175);
}

double NNfunction_ss_uLcR::synapse0x2a31380() {
   return (neuron0x2a25c60()*-0.273152);
}

double NNfunction_ss_uLcR::synapse0x2a313c0() {
   return (neuron0x2a25fa0()*0.990215);
}

double NNfunction_ss_uLcR::synapse0x2a31400() {
   return (neuron0x2a262e0()*-0.0631002);
}

double NNfunction_ss_uLcR::synapse0x2a31440() {
   return (neuron0x2a26620()*0.254264);
}

double NNfunction_ss_uLcR::synapse0x2a30ed0() {
   return (neuron0x2a26960()*0.0819499);
}

double NNfunction_ss_uLcR::synapse0x2a30f10() {
   return (neuron0x2a26ec0()*0.0149856);
}

double NNfunction_ss_uLcR::synapse0x2a31590() {
   return (neuron0x2a270e0()*0.420257);
}

double NNfunction_ss_uLcR::synapse0x2a315d0() {
   return (neuron0x2a27420()*-0.0872724);
}

double NNfunction_ss_uLcR::synapse0x2a31610() {
   return (neuron0x2a27760()*0.401569);
}

double NNfunction_ss_uLcR::synapse0x2a31650() {
   return (neuron0x2a27aa0()*-0.0908761);
}

double NNfunction_ss_uLcR::synapse0x2a31690() {
   return (neuron0x2a27de0()*-0.0579299);
}

double NNfunction_ss_uLcR::synapse0x2a316d0() {
   return (neuron0x2a28120()*0.20034);
}

double NNfunction_ss_uLcR::synapse0x2a31a50() {
   return (neuron0x2a23560()*-0.00174045);
}

double NNfunction_ss_uLcR::synapse0x2a31a90() {
   return (neuron0x2a238a0()*0.00370205);
}

double NNfunction_ss_uLcR::synapse0x2a31ad0() {
   return (neuron0x2a23be0()*-0.00473324);
}

double NNfunction_ss_uLcR::synapse0x2a31b10() {
   return (neuron0x2a23f20()*2.60652);
}

double NNfunction_ss_uLcR::synapse0x2a31b50() {
   return (neuron0x2a24260()*-0.00394629);
}

double NNfunction_ss_uLcR::synapse0x2a31b90() {
   return (neuron0x2a245a0()*0.00577281);
}

double NNfunction_ss_uLcR::synapse0x2a31bd0() {
   return (neuron0x2a248e0()*0.00751497);
}

double NNfunction_ss_uLcR::synapse0x2a31c10() {
   return (neuron0x2a24c20()*0.00626594);
}

double NNfunction_ss_uLcR::synapse0x2a31c50() {
   return (neuron0x2a24f60()*-0.000425526);
}

double NNfunction_ss_uLcR::synapse0x2a31c90() {
   return (neuron0x2a252a0()*-0.0130524);
}

double NNfunction_ss_uLcR::synapse0x2a31cd0() {
   return (neuron0x2a255e0()*-0.00575955);
}

double NNfunction_ss_uLcR::synapse0x2a31d10() {
   return (neuron0x2a25920()*0.14411);
}

double NNfunction_ss_uLcR::synapse0x2a31d50() {
   return (neuron0x2a25c60()*-0.000990612);
}

double NNfunction_ss_uLcR::synapse0x2a31d90() {
   return (neuron0x2a25fa0()*-0.00082725);
}

double NNfunction_ss_uLcR::synapse0x2a31dd0() {
   return (neuron0x2a262e0()*0.0161884);
}

double NNfunction_ss_uLcR::synapse0x2a31e10() {
   return (neuron0x2a26620()*0.156455);
}

double NNfunction_ss_uLcR::synapse0x2a318a0() {
   return (neuron0x2a26960()*0.00557929);
}

double NNfunction_ss_uLcR::synapse0x2a318e0() {
   return (neuron0x2a26ec0()*-0.00109997);
}

double NNfunction_ss_uLcR::synapse0x2a31f60() {
   return (neuron0x2a270e0()*0.00159418);
}

double NNfunction_ss_uLcR::synapse0x2a31fa0() {
   return (neuron0x2a27420()*0.00151164);
}

double NNfunction_ss_uLcR::synapse0x2a31fe0() {
   return (neuron0x2a27760()*-0.00470143);
}

double NNfunction_ss_uLcR::synapse0x2a32020() {
   return (neuron0x2a27aa0()*0.00110464);
}

double NNfunction_ss_uLcR::synapse0x2a32060() {
   return (neuron0x2a27de0()*0.00339921);
}

double NNfunction_ss_uLcR::synapse0x2a320a0() {
   return (neuron0x2a28120()*0.00370926);
}

double NNfunction_ss_uLcR::synapse0x2a32420() {
   return (neuron0x2a23560()*0.694659);
}

double NNfunction_ss_uLcR::synapse0x2a23780() {
   return (neuron0x2a238a0()*0.189209);
}

double NNfunction_ss_uLcR::synapse0x2a237c0() {
   return (neuron0x2a23be0()*-0.457412);
}

double NNfunction_ss_uLcR::synapse0x2a23ac0() {
   return (neuron0x2a23f20()*-0.937158);
}

double NNfunction_ss_uLcR::synapse0x2a23b00() {
   return (neuron0x2a24260()*-0.367464);
}

double NNfunction_ss_uLcR::synapse0x2a23e00() {
   return (neuron0x2a245a0()*-0.123606);
}

double NNfunction_ss_uLcR::synapse0x2a23e40() {
   return (neuron0x2a248e0()*0.186042);
}

double NNfunction_ss_uLcR::synapse0x2a24140() {
   return (neuron0x2a24c20()*0.338241);
}

double NNfunction_ss_uLcR::synapse0x2a24180() {
   return (neuron0x2a24f60()*-0.34153);
}

double NNfunction_ss_uLcR::synapse0x2a24480() {
   return (neuron0x2a252a0()*-0.698255);
}

double NNfunction_ss_uLcR::synapse0x2a244c0() {
   return (neuron0x2a255e0()*0.395983);
}

double NNfunction_ss_uLcR::synapse0x2a247c0() {
   return (neuron0x2a25920()*0.906719);
}

double NNfunction_ss_uLcR::synapse0x2a24800() {
   return (neuron0x2a25c60()*0.0430737);
}

double NNfunction_ss_uLcR::synapse0x2a24b00() {
   return (neuron0x2a25fa0()*-1.24904);
}

double NNfunction_ss_uLcR::synapse0x2a24b40() {
   return (neuron0x2a262e0()*-0.526895);
}

double NNfunction_ss_uLcR::synapse0x2a24e40() {
   return (neuron0x2a26620()*0.590109);
}

double NNfunction_ss_uLcR::synapse0x2a24e80() {
   return (neuron0x2a26960()*-1.39392);
}

double NNfunction_ss_uLcR::synapse0x2a25180() {
   return (neuron0x2a26ec0()*-0.19642);
}

double NNfunction_ss_uLcR::synapse0x2a251c0() {
   return (neuron0x2a270e0()*-0.299561);
}

double NNfunction_ss_uLcR::synapse0x2a254c0() {
   return (neuron0x2a27420()*-0.692231);
}

double NNfunction_ss_uLcR::synapse0x2a25500() {
   return (neuron0x2a27760()*-0.428516);
}

double NNfunction_ss_uLcR::synapse0x2a25800() {
   return (neuron0x2a27aa0()*-0.325397);
}

double NNfunction_ss_uLcR::synapse0x2a25840() {
   return (neuron0x2a27de0()*-0.881179);
}

double NNfunction_ss_uLcR::synapse0x2a25b40() {
   return (neuron0x2a28120()*-0.763284);
}

double NNfunction_ss_uLcR::synapse0x2a25b80() {
   return (neuron0x2a23560()*-0.18881);
}

double NNfunction_ss_uLcR::synapse0x2a26840() {
   return (neuron0x2a238a0()*0.583253);
}

double NNfunction_ss_uLcR::synapse0x2a26880() {
   return (neuron0x2a23be0()*0.800927);
}

double NNfunction_ss_uLcR::synapse0x2a32270() {
   return (neuron0x2a23f20()*-0.0926347);
}

double NNfunction_ss_uLcR::synapse0x2a322b0() {
   return (neuron0x2a24260()*0.601496);
}

double NNfunction_ss_uLcR::synapse0x2a26b80() {
   return (neuron0x2a245a0()*0.46532);
}

double NNfunction_ss_uLcR::synapse0x2a26bc0() {
   return (neuron0x2a248e0()*-0.403709);
}

double NNfunction_ss_uLcR::synapse0x27d4b50() {
   return (neuron0x2a24c20()*-0.124802);
}

double NNfunction_ss_uLcR::synapse0x27d4b90() {
   return (neuron0x2a24f60()*-0.448775);
}

double NNfunction_ss_uLcR::synapse0x2a27300() {
   return (neuron0x2a252a0()*0.311743);
}

double NNfunction_ss_uLcR::synapse0x2a27340() {
   return (neuron0x2a255e0()*0.0627726);
}

double NNfunction_ss_uLcR::synapse0x2a27640() {
   return (neuron0x2a25920()*-0.0126831);
}

double NNfunction_ss_uLcR::synapse0x2a27680() {
   return (neuron0x2a25c60()*0.265266);
}

double NNfunction_ss_uLcR::synapse0x2a27980() {
   return (neuron0x2a25fa0()*0.526165);
}

double NNfunction_ss_uLcR::synapse0x2a279c0() {
   return (neuron0x2a262e0()*-0.916323);
}

double NNfunction_ss_uLcR::synapse0x2a27cc0() {
   return (neuron0x2a26620()*1.0478);
}

double NNfunction_ss_uLcR::synapse0x2a27d00() {
   return (neuron0x2a26960()*-0.555898);
}

double NNfunction_ss_uLcR::synapse0x2a28000() {
   return (neuron0x2a26ec0()*0.313888);
}

double NNfunction_ss_uLcR::synapse0x2a28040() {
   return (neuron0x2a270e0()*-1.03235);
}

double NNfunction_ss_uLcR::synapse0x2a28340() {
   return (neuron0x2a27420()*0.338267);
}

double NNfunction_ss_uLcR::synapse0x2a28380() {
   return (neuron0x2a27760()*0.416071);
}

double NNfunction_ss_uLcR::synapse0x2a25e80() {
   return (neuron0x2a27aa0()*-0.413664);
}

double NNfunction_ss_uLcR::synapse0x2a25ec0() {
   return (neuron0x2a27de0()*0.0302037);
}

double NNfunction_ss_uLcR::synapse0x2a34190() {
   return (neuron0x2a28120()*-0.152648);
}

double NNfunction_ss_uLcR::synapse0x2a34510() {
   return (neuron0x2a23560()*-0.00252363);
}

double NNfunction_ss_uLcR::synapse0x2a34550() {
   return (neuron0x2a238a0()*-0.00551081);
}

double NNfunction_ss_uLcR::synapse0x2a34590() {
   return (neuron0x2a23be0()*-0.0147449);
}

double NNfunction_ss_uLcR::synapse0x2a345d0() {
   return (neuron0x2a23f20()*-0.00811012);
}

double NNfunction_ss_uLcR::synapse0x2a34610() {
   return (neuron0x2a24260()*0.00482273);
}

double NNfunction_ss_uLcR::synapse0x2a34650() {
   return (neuron0x2a245a0()*0.0140662);
}

double NNfunction_ss_uLcR::synapse0x2a34690() {
   return (neuron0x2a248e0()*0.0117063);
}

double NNfunction_ss_uLcR::synapse0x2a346d0() {
   return (neuron0x2a24c20()*0.0102184);
}

double NNfunction_ss_uLcR::synapse0x2a34710() {
   return (neuron0x2a24f60()*-0.00327884);
}

double NNfunction_ss_uLcR::synapse0x2a34750() {
   return (neuron0x2a252a0()*-0.00287413);
}

double NNfunction_ss_uLcR::synapse0x2a34790() {
   return (neuron0x2a255e0()*-0.00534728);
}

double NNfunction_ss_uLcR::synapse0x2a347d0() {
   return (neuron0x2a25920()*0.162162);
}

double NNfunction_ss_uLcR::synapse0x2a34810() {
   return (neuron0x2a25c60()*-0.0054765);
}

double NNfunction_ss_uLcR::synapse0x2a34850() {
   return (neuron0x2a25fa0()*-2.59826e-06);
}

double NNfunction_ss_uLcR::synapse0x2a34890() {
   return (neuron0x2a262e0()*0.0157106);
}

double NNfunction_ss_uLcR::synapse0x2a348d0() {
   return (neuron0x2a26620()*-0.914578);
}

double NNfunction_ss_uLcR::synapse0x2a34360() {
   return (neuron0x2a26960()*-0.00623974);
}

double NNfunction_ss_uLcR::synapse0x2a343a0() {
   return (neuron0x2a26ec0()*0.00611354);
}

double NNfunction_ss_uLcR::synapse0x2a34a20() {
   return (neuron0x2a270e0()*-7.72573e-05);
}

double NNfunction_ss_uLcR::synapse0x2a34a60() {
   return (neuron0x2a27420()*-0.00572119);
}

double NNfunction_ss_uLcR::synapse0x2a34aa0() {
   return (neuron0x2a27760()*0.00702307);
}

double NNfunction_ss_uLcR::synapse0x2a34ae0() {
   return (neuron0x2a27aa0()*-0.0084931);
}

double NNfunction_ss_uLcR::synapse0x2a34b20() {
   return (neuron0x2a27de0()*0.000650588);
}

double NNfunction_ss_uLcR::synapse0x2a34b60() {
   return (neuron0x2a28120()*-0.00279081);
}

double NNfunction_ss_uLcR::synapse0x2a34ee0() {
   return (neuron0x2a23560()*0.479887);
}

double NNfunction_ss_uLcR::synapse0x2a34f20() {
   return (neuron0x2a238a0()*-0.259057);
}

double NNfunction_ss_uLcR::synapse0x2a34f60() {
   return (neuron0x2a23be0()*0.167686);
}

double NNfunction_ss_uLcR::synapse0x2a34fa0() {
   return (neuron0x2a23f20()*-0.352468);
}

double NNfunction_ss_uLcR::synapse0x2a34fe0() {
   return (neuron0x2a24260()*-0.39387);
}

double NNfunction_ss_uLcR::synapse0x2a35020() {
   return (neuron0x2a245a0()*-0.0936803);
}

double NNfunction_ss_uLcR::synapse0x2a35060() {
   return (neuron0x2a248e0()*-0.0302654);
}

double NNfunction_ss_uLcR::synapse0x2a350a0() {
   return (neuron0x2a24c20()*0.377247);
}

double NNfunction_ss_uLcR::synapse0x2a350e0() {
   return (neuron0x2a24f60()*-0.155999);
}

double NNfunction_ss_uLcR::synapse0x2a35120() {
   return (neuron0x2a252a0()*0.389861);
}

double NNfunction_ss_uLcR::synapse0x2a35160() {
   return (neuron0x2a255e0()*0.0982811);
}

double NNfunction_ss_uLcR::synapse0x2a351a0() {
   return (neuron0x2a25920()*-1.41024);
}

double NNfunction_ss_uLcR::synapse0x2a351e0() {
   return (neuron0x2a25c60()*0.0490221);
}

double NNfunction_ss_uLcR::synapse0x2a35220() {
   return (neuron0x2a25fa0()*0.170911);
}

double NNfunction_ss_uLcR::synapse0x2a35260() {
   return (neuron0x2a262e0()*0.0408059);
}

double NNfunction_ss_uLcR::synapse0x2a352a0() {
   return (neuron0x2a26620()*-2.78571);
}

double NNfunction_ss_uLcR::synapse0x2a34d30() {
   return (neuron0x2a26960()*0.177626);
}

double NNfunction_ss_uLcR::synapse0x2a34d70() {
   return (neuron0x2a26ec0()*-0.0353224);
}

double NNfunction_ss_uLcR::synapse0x2a353f0() {
   return (neuron0x2a270e0()*-0.781973);
}

double NNfunction_ss_uLcR::synapse0x2a35430() {
   return (neuron0x2a27420()*-0.342172);
}

double NNfunction_ss_uLcR::synapse0x2a35470() {
   return (neuron0x2a27760()*-0.203677);
}

double NNfunction_ss_uLcR::synapse0x2a354b0() {
   return (neuron0x2a27aa0()*0.949795);
}

double NNfunction_ss_uLcR::synapse0x2a354f0() {
   return (neuron0x2a27de0()*0.0437775);
}

double NNfunction_ss_uLcR::synapse0x2a35530() {
   return (neuron0x2a28120()*0.36147);
}

double NNfunction_ss_uLcR::synapse0x2a358b0() {
   return (neuron0x2a23560()*0.237617);
}

double NNfunction_ss_uLcR::synapse0x2a358f0() {
   return (neuron0x2a238a0()*0.715553);
}

double NNfunction_ss_uLcR::synapse0x2a35930() {
   return (neuron0x2a23be0()*0.895225);
}

double NNfunction_ss_uLcR::synapse0x2a35970() {
   return (neuron0x2a23f20()*0.372244);
}

double NNfunction_ss_uLcR::synapse0x2a359b0() {
   return (neuron0x2a24260()*-0.273169);
}

double NNfunction_ss_uLcR::synapse0x2a359f0() {
   return (neuron0x2a245a0()*0.0546944);
}

double NNfunction_ss_uLcR::synapse0x2a35a30() {
   return (neuron0x2a248e0()*0.00493855);
}

double NNfunction_ss_uLcR::synapse0x2a35a70() {
   return (neuron0x2a24c20()*-0.364997);
}

double NNfunction_ss_uLcR::synapse0x2a35ab0() {
   return (neuron0x2a24f60()*0.774272);
}

double NNfunction_ss_uLcR::synapse0x2a35af0() {
   return (neuron0x2a252a0()*0.402546);
}

double NNfunction_ss_uLcR::synapse0x2a35b30() {
   return (neuron0x2a255e0()*0.00448241);
}

double NNfunction_ss_uLcR::synapse0x2a35b70() {
   return (neuron0x2a25920()*0.575936);
}

double NNfunction_ss_uLcR::synapse0x2a35bb0() {
   return (neuron0x2a25c60()*-0.21274);
}

double NNfunction_ss_uLcR::synapse0x2a35bf0() {
   return (neuron0x2a25fa0()*0.229575);
}

double NNfunction_ss_uLcR::synapse0x2a35c30() {
   return (neuron0x2a262e0()*-0.164737);
}

double NNfunction_ss_uLcR::synapse0x2a35c70() {
   return (neuron0x2a26620()*0.639013);
}

double NNfunction_ss_uLcR::synapse0x2a35700() {
   return (neuron0x2a26960()*0.366028);
}

double NNfunction_ss_uLcR::synapse0x2a35740() {
   return (neuron0x2a26ec0()*0.677034);
}

double NNfunction_ss_uLcR::synapse0x2a35dc0() {
   return (neuron0x2a270e0()*-0.690469);
}

double NNfunction_ss_uLcR::synapse0x2a35e00() {
   return (neuron0x2a27420()*0.0761924);
}

double NNfunction_ss_uLcR::synapse0x2a35e40() {
   return (neuron0x2a27760()*0.469391);
}

double NNfunction_ss_uLcR::synapse0x2a35e80() {
   return (neuron0x2a27aa0()*-0.389604);
}

double NNfunction_ss_uLcR::synapse0x2a35ec0() {
   return (neuron0x2a27de0()*0.257563);
}

double NNfunction_ss_uLcR::synapse0x2a35f00() {
   return (neuron0x2a28120()*-0.136483);
}

double NNfunction_ss_uLcR::synapse0x2a36280() {
   return (neuron0x2a23560()*-0.565715);
}

double NNfunction_ss_uLcR::synapse0x2a362c0() {
   return (neuron0x2a238a0()*-1.42997);
}

double NNfunction_ss_uLcR::synapse0x2a36300() {
   return (neuron0x2a23be0()*0.0508171);
}

double NNfunction_ss_uLcR::synapse0x2a36340() {
   return (neuron0x2a23f20()*-1.62748);
}

double NNfunction_ss_uLcR::synapse0x2a36380() {
   return (neuron0x2a24260()*-0.242744);
}

double NNfunction_ss_uLcR::synapse0x2a363c0() {
   return (neuron0x2a245a0()*0.37914);
}

double NNfunction_ss_uLcR::synapse0x2a36400() {
   return (neuron0x2a248e0()*-1.11335);
}

double NNfunction_ss_uLcR::synapse0x2a36440() {
   return (neuron0x2a24c20()*-0.399094);
}

double NNfunction_ss_uLcR::synapse0x2a36480() {
   return (neuron0x2a24f60()*-0.17826);
}

double NNfunction_ss_uLcR::synapse0x2a364c0() {
   return (neuron0x2a252a0()*0.132241);
}

double NNfunction_ss_uLcR::synapse0x2a36500() {
   return (neuron0x2a255e0()*0.0227664);
}

double NNfunction_ss_uLcR::synapse0x2a36540() {
   return (neuron0x2a25920()*-0.361985);
}

double NNfunction_ss_uLcR::synapse0x2a36580() {
   return (neuron0x2a25c60()*-0.0668115);
}

double NNfunction_ss_uLcR::synapse0x2a365c0() {
   return (neuron0x2a25fa0()*-1.41455);
}

double NNfunction_ss_uLcR::synapse0x2a36600() {
   return (neuron0x2a262e0()*0.141031);
}

double NNfunction_ss_uLcR::synapse0x2a36640() {
   return (neuron0x2a26620()*-0.0909677);
}

double NNfunction_ss_uLcR::synapse0x2a360d0() {
   return (neuron0x2a26960()*-0.723682);
}

double NNfunction_ss_uLcR::synapse0x2a36110() {
   return (neuron0x2a26ec0()*0.420625);
}

double NNfunction_ss_uLcR::synapse0x2a36790() {
   return (neuron0x2a270e0()*0.529405);
}

double NNfunction_ss_uLcR::synapse0x2a367d0() {
   return (neuron0x2a27420()*-0.388757);
}

double NNfunction_ss_uLcR::synapse0x2a36810() {
   return (neuron0x2a27760()*0.477998);
}

double NNfunction_ss_uLcR::synapse0x2a36850() {
   return (neuron0x2a27aa0()*0.251116);
}

double NNfunction_ss_uLcR::synapse0x2a36890() {
   return (neuron0x2a27de0()*-0.0871492);
}

double NNfunction_ss_uLcR::synapse0x2a368d0() {
   return (neuron0x2a28120()*0.139374);
}

double NNfunction_ss_uLcR::synapse0x2a36c50() {
   return (neuron0x2a23560()*0.00514983);
}

double NNfunction_ss_uLcR::synapse0x2a36c90() {
   return (neuron0x2a238a0()*0.0190185);
}

double NNfunction_ss_uLcR::synapse0x2a36cd0() {
   return (neuron0x2a23be0()*-0.0172942);
}

double NNfunction_ss_uLcR::synapse0x2a36d10() {
   return (neuron0x2a23f20()*-0.0309963);
}

double NNfunction_ss_uLcR::synapse0x2a36d50() {
   return (neuron0x2a24260()*-0.00548944);
}

double NNfunction_ss_uLcR::synapse0x2a36d90() {
   return (neuron0x2a245a0()*-0.00425275);
}

double NNfunction_ss_uLcR::synapse0x2a36dd0() {
   return (neuron0x2a248e0()*0.00297896);
}

double NNfunction_ss_uLcR::synapse0x2a36e10() {
   return (neuron0x2a24c20()*-0.0186629);
}

double NNfunction_ss_uLcR::synapse0x2a36e50() {
   return (neuron0x2a24f60()*-0.000769367);
}

double NNfunction_ss_uLcR::synapse0x2a2f010() {
   return (neuron0x2a252a0()*-0.00177926);
}

double NNfunction_ss_uLcR::synapse0x2a2f050() {
   return (neuron0x2a255e0()*0.00639706);
}

double NNfunction_ss_uLcR::synapse0x2a2f090() {
   return (neuron0x2a25920()*-0.0463881);
}

double NNfunction_ss_uLcR::synapse0x2a2f0d0() {
   return (neuron0x2a25c60()*0.00830277);
}

double NNfunction_ss_uLcR::synapse0x2a2f110() {
   return (neuron0x2a25fa0()*0.0163911);
}

double NNfunction_ss_uLcR::synapse0x2a2f150() {
   return (neuron0x2a262e0()*-0.0178797);
}

double NNfunction_ss_uLcR::synapse0x2a2f190() {
   return (neuron0x2a26620()*2.25929);
}

double NNfunction_ss_uLcR::synapse0x2a36aa0() {
   return (neuron0x2a26960()*0.0287659);
}

double NNfunction_ss_uLcR::synapse0x2a36ae0() {
   return (neuron0x2a26ec0()*-0.00242438);
}

double NNfunction_ss_uLcR::synapse0x2a2f2e0() {
   return (neuron0x2a270e0()*0.000180566);
}

double NNfunction_ss_uLcR::synapse0x2a2f320() {
   return (neuron0x2a27420()*0.0120242);
}

double NNfunction_ss_uLcR::synapse0x2a2f360() {
   return (neuron0x2a27760()*-0.0144941);
}

double NNfunction_ss_uLcR::synapse0x2a2f3a0() {
   return (neuron0x2a27aa0()*-0.00372205);
}

double NNfunction_ss_uLcR::synapse0x2a2f3e0() {
   return (neuron0x2a27de0()*-0.0010501);
}

double NNfunction_ss_uLcR::synapse0x2a2f420() {
   return (neuron0x2a28120()*-0.00487735);
}

double NNfunction_ss_uLcR::synapse0x2a2f7a0() {
   return (neuron0x2a23560()*-0.00765866);
}

double NNfunction_ss_uLcR::synapse0x2a2f7e0() {
   return (neuron0x2a238a0()*-0.00429404);
}

double NNfunction_ss_uLcR::synapse0x2a2f820() {
   return (neuron0x2a23be0()*0.0138988);
}

double NNfunction_ss_uLcR::synapse0x2a2f860() {
   return (neuron0x2a23f20()*2.69483);
}

double NNfunction_ss_uLcR::synapse0x2a2f8a0() {
   return (neuron0x2a24260()*0.00195689);
}

double NNfunction_ss_uLcR::synapse0x2a2f8e0() {
   return (neuron0x2a245a0()*0.00268832);
}

double NNfunction_ss_uLcR::synapse0x2a2f920() {
   return (neuron0x2a248e0()*-0.000196137);
}

double NNfunction_ss_uLcR::synapse0x2a2f960() {
   return (neuron0x2a24c20()*0.00874385);
}

double NNfunction_ss_uLcR::synapse0x2a2f9a0() {
   return (neuron0x2a24f60()*-0.00207601);
}

double NNfunction_ss_uLcR::synapse0x2a2f9e0() {
   return (neuron0x2a252a0()*0.00142682);
}

double NNfunction_ss_uLcR::synapse0x2a2fa20() {
   return (neuron0x2a255e0()*0.00308752);
}

double NNfunction_ss_uLcR::synapse0x2a2fa60() {
   return (neuron0x2a25920()*-0.111544);
}

double NNfunction_ss_uLcR::synapse0x2a2faa0() {
   return (neuron0x2a25c60()*0.00360884);
}

double NNfunction_ss_uLcR::synapse0x2a2fae0() {
   return (neuron0x2a25fa0()*-0.00158408);
}

double NNfunction_ss_uLcR::synapse0x2a2fb20() {
   return (neuron0x2a262e0()*-0.00633812);
}

double NNfunction_ss_uLcR::synapse0x2a2fb60() {
   return (neuron0x2a26620()*-0.125215);
}

double NNfunction_ss_uLcR::synapse0x2a2f5f0() {
   return (neuron0x2a26960()*-0.00252776);
}

double NNfunction_ss_uLcR::synapse0x2a2f630() {
   return (neuron0x2a26ec0()*-0.00241648);
}

double NNfunction_ss_uLcR::synapse0x2a2fcb0() {
   return (neuron0x2a270e0()*0.000259834);
}

double NNfunction_ss_uLcR::synapse0x2a2fcf0() {
   return (neuron0x2a27420()*-0.000483063);
}

double NNfunction_ss_uLcR::synapse0x2a2fd30() {
   return (neuron0x2a27760()*-0.00433704);
}

double NNfunction_ss_uLcR::synapse0x2a2fd70() {
   return (neuron0x2a27aa0()*-0.00309934);
}

double NNfunction_ss_uLcR::synapse0x2a2fdb0() {
   return (neuron0x2a27de0()*-0.00250286);
}

double NNfunction_ss_uLcR::synapse0x2a2fdf0() {
   return (neuron0x2a28120()*0.00787294);
}

double NNfunction_ss_uLcR::synapse0x2a2ffc0() {
   return (neuron0x2a23560()*0.361105);
}

double NNfunction_ss_uLcR::synapse0x2a39050() {
   return (neuron0x2a238a0()*0.0405369);
}

double NNfunction_ss_uLcR::synapse0x2a39090() {
   return (neuron0x2a23be0()*-0.444247);
}

double NNfunction_ss_uLcR::synapse0x2a390d0() {
   return (neuron0x2a23f20()*-0.25872);
}

double NNfunction_ss_uLcR::synapse0x2a39110() {
   return (neuron0x2a24260()*0.173322);
}

double NNfunction_ss_uLcR::synapse0x2a39150() {
   return (neuron0x2a245a0()*-0.416361);
}

double NNfunction_ss_uLcR::synapse0x2a39190() {
   return (neuron0x2a248e0()*-0.376172);
}

double NNfunction_ss_uLcR::synapse0x2a391d0() {
   return (neuron0x2a24c20()*-0.432618);
}

double NNfunction_ss_uLcR::synapse0x2a39210() {
   return (neuron0x2a24f60()*0.158662);
}

double NNfunction_ss_uLcR::synapse0x2a39250() {
   return (neuron0x2a252a0()*-0.0114124);
}

double NNfunction_ss_uLcR::synapse0x2a39290() {
   return (neuron0x2a255e0()*-0.0343572);
}

double NNfunction_ss_uLcR::synapse0x2a392d0() {
   return (neuron0x2a25920()*-0.253226);
}

double NNfunction_ss_uLcR::synapse0x2a39310() {
   return (neuron0x2a25c60()*-0.356461);
}

double NNfunction_ss_uLcR::synapse0x2a39350() {
   return (neuron0x2a25fa0()*0.822192);
}

double NNfunction_ss_uLcR::synapse0x2a39390() {
   return (neuron0x2a262e0()*0.0592386);
}

double NNfunction_ss_uLcR::synapse0x2a393d0() {
   return (neuron0x2a26620()*1.66153);
}

double NNfunction_ss_uLcR::synapse0x2a38ea0() {
   return (neuron0x2a26960()*0.214734);
}

double NNfunction_ss_uLcR::synapse0x2a38ee0() {
   return (neuron0x2a26ec0()*-0.318466);
}

double NNfunction_ss_uLcR::synapse0x2a39520() {
   return (neuron0x2a270e0()*-0.371043);
}

double NNfunction_ss_uLcR::synapse0x2a39560() {
   return (neuron0x2a27420()*0.335158);
}

double NNfunction_ss_uLcR::synapse0x2a395a0() {
   return (neuron0x2a27760()*-0.506406);
}

double NNfunction_ss_uLcR::synapse0x2a395e0() {
   return (neuron0x2a27aa0()*-0.180731);
}

double NNfunction_ss_uLcR::synapse0x2a39620() {
   return (neuron0x2a27de0()*0.820809);
}

double NNfunction_ss_uLcR::synapse0x2a39660() {
   return (neuron0x2a28120()*-0.322498);
}

double NNfunction_ss_uLcR::synapse0x2a399e0() {
   return (neuron0x2a23560()*-0.207516);
}

double NNfunction_ss_uLcR::synapse0x2a39a20() {
   return (neuron0x2a238a0()*0.441796);
}

double NNfunction_ss_uLcR::synapse0x2a39a60() {
   return (neuron0x2a23be0()*0.500294);
}

double NNfunction_ss_uLcR::synapse0x2a39aa0() {
   return (neuron0x2a23f20()*-1.47908);
}

double NNfunction_ss_uLcR::synapse0x2a39ae0() {
   return (neuron0x2a24260()*-0.549361);
}

double NNfunction_ss_uLcR::synapse0x2a39b20() {
   return (neuron0x2a245a0()*0.00234834);
}

double NNfunction_ss_uLcR::synapse0x2a39b60() {
   return (neuron0x2a248e0()*-0.162928);
}

double NNfunction_ss_uLcR::synapse0x2a39ba0() {
   return (neuron0x2a24c20()*-0.269942);
}

double NNfunction_ss_uLcR::synapse0x2a39be0() {
   return (neuron0x2a24f60()*0.679689);
}

double NNfunction_ss_uLcR::synapse0x2a39c20() {
   return (neuron0x2a252a0()*0.386514);
}

double NNfunction_ss_uLcR::synapse0x2a39c60() {
   return (neuron0x2a255e0()*0.420494);
}

double NNfunction_ss_uLcR::synapse0x2a39ca0() {
   return (neuron0x2a25920()*-0.963831);
}

double NNfunction_ss_uLcR::synapse0x2a39ce0() {
   return (neuron0x2a25c60()*0.485613);
}

double NNfunction_ss_uLcR::synapse0x2a39d20() {
   return (neuron0x2a25fa0()*0.142246);
}

double NNfunction_ss_uLcR::synapse0x2a39d60() {
   return (neuron0x2a262e0()*0.156346);
}

double NNfunction_ss_uLcR::synapse0x2a39da0() {
   return (neuron0x2a26620()*-0.772965);
}

double NNfunction_ss_uLcR::synapse0x2a39830() {
   return (neuron0x2a26960()*0.124969);
}

double NNfunction_ss_uLcR::synapse0x2a39870() {
   return (neuron0x2a26ec0()*1.79795);
}

double NNfunction_ss_uLcR::synapse0x2a39ef0() {
   return (neuron0x2a270e0()*0.370991);
}

double NNfunction_ss_uLcR::synapse0x2a39f30() {
   return (neuron0x2a27420()*-0.656944);
}

double NNfunction_ss_uLcR::synapse0x2a39f70() {
   return (neuron0x2a27760()*-0.0748011);
}

double NNfunction_ss_uLcR::synapse0x2a39fb0() {
   return (neuron0x2a27aa0()*-0.3293);
}

double NNfunction_ss_uLcR::synapse0x2a39ff0() {
   return (neuron0x2a27de0()*-0.61269);
}

double NNfunction_ss_uLcR::synapse0x2a3a030() {
   return (neuron0x2a28120()*0.690018);
}

double NNfunction_ss_uLcR::synapse0x2a3a3b0() {
   return (neuron0x2a23560()*0.192867);
}

double NNfunction_ss_uLcR::synapse0x2a3a3f0() {
   return (neuron0x2a238a0()*-0.273344);
}

double NNfunction_ss_uLcR::synapse0x2a3a430() {
   return (neuron0x2a23be0()*0.134627);
}

double NNfunction_ss_uLcR::synapse0x2a3a470() {
   return (neuron0x2a23f20()*-0.167644);
}

double NNfunction_ss_uLcR::synapse0x2a3a4b0() {
   return (neuron0x2a24260()*0.453621);
}

double NNfunction_ss_uLcR::synapse0x2a3a4f0() {
   return (neuron0x2a245a0()*0.414065);
}

double NNfunction_ss_uLcR::synapse0x2a3a530() {
   return (neuron0x2a248e0()*-0.808618);
}

double NNfunction_ss_uLcR::synapse0x2a3a570() {
   return (neuron0x2a24c20()*1.11593);
}

double NNfunction_ss_uLcR::synapse0x2a3a5b0() {
   return (neuron0x2a24f60()*-0.524084);
}

double NNfunction_ss_uLcR::synapse0x2a3a5f0() {
   return (neuron0x2a252a0()*-0.290207);
}

double NNfunction_ss_uLcR::synapse0x2a3a630() {
   return (neuron0x2a255e0()*0.410917);
}

double NNfunction_ss_uLcR::synapse0x2a3a670() {
   return (neuron0x2a25920()*1.26721);
}

double NNfunction_ss_uLcR::synapse0x2a3a6b0() {
   return (neuron0x2a25c60()*0.219284);
}

double NNfunction_ss_uLcR::synapse0x2a3a6f0() {
   return (neuron0x2a25fa0()*0.598522);
}

double NNfunction_ss_uLcR::synapse0x2a3a730() {
   return (neuron0x2a262e0()*0.624366);
}

double NNfunction_ss_uLcR::synapse0x2a3a770() {
   return (neuron0x2a26620()*0.427046);
}

double NNfunction_ss_uLcR::synapse0x2a3a200() {
   return (neuron0x2a26960()*0.382583);
}

double NNfunction_ss_uLcR::synapse0x2a3a240() {
   return (neuron0x2a26ec0()*1.01789);
}

double NNfunction_ss_uLcR::synapse0x2a3a8c0() {
   return (neuron0x2a270e0()*-0.435867);
}

double NNfunction_ss_uLcR::synapse0x2a3a900() {
   return (neuron0x2a27420()*0.626427);
}

double NNfunction_ss_uLcR::synapse0x2a3a940() {
   return (neuron0x2a27760()*0.0666996);
}

double NNfunction_ss_uLcR::synapse0x2a3a980() {
   return (neuron0x2a27aa0()*-0.397318);
}

double NNfunction_ss_uLcR::synapse0x2a3a9c0() {
   return (neuron0x2a27de0()*0.119307);
}

double NNfunction_ss_uLcR::synapse0x2a3aa00() {
   return (neuron0x2a28120()*0.175354);
}

double NNfunction_ss_uLcR::synapse0x2a3ad80() {
   return (neuron0x2a23560()*0.0356618);
}

double NNfunction_ss_uLcR::synapse0x2a3adc0() {
   return (neuron0x2a238a0()*0.0619665);
}

double NNfunction_ss_uLcR::synapse0x2a3ae00() {
   return (neuron0x2a23be0()*-0.0872076);
}

double NNfunction_ss_uLcR::synapse0x2a3ae40() {
   return (neuron0x2a23f20()*-1.19013);
}

double NNfunction_ss_uLcR::synapse0x2a3ae80() {
   return (neuron0x2a24260()*-0.167694);
}

double NNfunction_ss_uLcR::synapse0x2a3aec0() {
   return (neuron0x2a245a0()*-0.0271324);
}

double NNfunction_ss_uLcR::synapse0x2a3af00() {
   return (neuron0x2a248e0()*0.0179215);
}

double NNfunction_ss_uLcR::synapse0x2a3af40() {
   return (neuron0x2a24c20()*-0.304164);
}

double NNfunction_ss_uLcR::synapse0x2a3af80() {
   return (neuron0x2a24f60()*0.18483);
}

double NNfunction_ss_uLcR::synapse0x2a3afc0() {
   return (neuron0x2a252a0()*0.243886);
}

double NNfunction_ss_uLcR::synapse0x2a3b000() {
   return (neuron0x2a255e0()*-0.0556035);
}

double NNfunction_ss_uLcR::synapse0x2a3b040() {
   return (neuron0x2a25920()*-0.753814);
}

double NNfunction_ss_uLcR::synapse0x2a3b080() {
   return (neuron0x2a25c60()*0.051133);
}

double NNfunction_ss_uLcR::synapse0x2a3b0c0() {
   return (neuron0x2a25fa0()*-0.0918531);
}

double NNfunction_ss_uLcR::synapse0x2a3b100() {
   return (neuron0x2a262e0()*0.308553);
}

double NNfunction_ss_uLcR::synapse0x2a3b140() {
   return (neuron0x2a26620()*-1.63238);
}

double NNfunction_ss_uLcR::synapse0x2a3abd0() {
   return (neuron0x2a26960()*0.21421);
}

double NNfunction_ss_uLcR::synapse0x2a3ac10() {
   return (neuron0x2a26ec0()*0.0732157);
}

double NNfunction_ss_uLcR::synapse0x2a3b290() {
   return (neuron0x2a270e0()*-0.0108015);
}

double NNfunction_ss_uLcR::synapse0x2a3b2d0() {
   return (neuron0x2a27420()*0.0807746);
}

double NNfunction_ss_uLcR::synapse0x2a3b310() {
   return (neuron0x2a27760()*0.0155918);
}

double NNfunction_ss_uLcR::synapse0x2a3b350() {
   return (neuron0x2a27aa0()*-0.724109);
}

double NNfunction_ss_uLcR::synapse0x2a3b390() {
   return (neuron0x2a27de0()*0.354818);
}

double NNfunction_ss_uLcR::synapse0x2a3b3d0() {
   return (neuron0x2a28120()*-0.270463);
}

double NNfunction_ss_uLcR::synapse0x2a3b750() {
   return (neuron0x2a23560()*0.697051);
}

double NNfunction_ss_uLcR::synapse0x2a3b790() {
   return (neuron0x2a238a0()*0.190607);
}

double NNfunction_ss_uLcR::synapse0x2a3b7d0() {
   return (neuron0x2a23be0()*0.655517);
}

double NNfunction_ss_uLcR::synapse0x2a3b810() {
   return (neuron0x2a23f20()*-1.44942);
}

double NNfunction_ss_uLcR::synapse0x2a3b850() {
   return (neuron0x2a24260()*-0.0390943);
}

double NNfunction_ss_uLcR::synapse0x2a3b890() {
   return (neuron0x2a245a0()*0.253807);
}

double NNfunction_ss_uLcR::synapse0x2a3b8d0() {
   return (neuron0x2a248e0()*0.379108);
}

double NNfunction_ss_uLcR::synapse0x2a3b910() {
   return (neuron0x2a24c20()*-0.573291);
}

double NNfunction_ss_uLcR::synapse0x2a3b950() {
   return (neuron0x2a24f60()*-0.263602);
}

double NNfunction_ss_uLcR::synapse0x2a3b990() {
   return (neuron0x2a252a0()*-0.122046);
}

double NNfunction_ss_uLcR::synapse0x2a3b9d0() {
   return (neuron0x2a255e0()*-0.193999);
}

double NNfunction_ss_uLcR::synapse0x2a3ba10() {
   return (neuron0x2a25920()*0.330414);
}

double NNfunction_ss_uLcR::synapse0x2a3ba50() {
   return (neuron0x2a25c60()*0.590382);
}

double NNfunction_ss_uLcR::synapse0x2a3ba90() {
   return (neuron0x2a25fa0()*0.327109);
}

double NNfunction_ss_uLcR::synapse0x2a3bad0() {
   return (neuron0x2a262e0()*0.267808);
}

double NNfunction_ss_uLcR::synapse0x2a3bb10() {
   return (neuron0x2a26620()*1.02463);
}

double NNfunction_ss_uLcR::synapse0x2a3b5a0() {
   return (neuron0x2a26960()*0.352623);
}

double NNfunction_ss_uLcR::synapse0x2a3b5e0() {
   return (neuron0x2a26ec0()*0.880335);
}

double NNfunction_ss_uLcR::synapse0x2a3bc60() {
   return (neuron0x2a270e0()*0.737877);
}

double NNfunction_ss_uLcR::synapse0x2a3bca0() {
   return (neuron0x2a27420()*0.225469);
}

double NNfunction_ss_uLcR::synapse0x2a3bce0() {
   return (neuron0x2a27760()*-0.0544215);
}

double NNfunction_ss_uLcR::synapse0x2a3bd20() {
   return (neuron0x2a27aa0()*0.237438);
}

double NNfunction_ss_uLcR::synapse0x2a3bd60() {
   return (neuron0x2a27de0()*-0.047532);
}

double NNfunction_ss_uLcR::synapse0x2a3bda0() {
   return (neuron0x2a28120()*0.00662198);
}

double NNfunction_ss_uLcR::synapse0x2a3c120() {
   return (neuron0x2a23560()*-0.557423);
}

double NNfunction_ss_uLcR::synapse0x2a3c160() {
   return (neuron0x2a238a0()*0.730062);
}

double NNfunction_ss_uLcR::synapse0x2a3c1a0() {
   return (neuron0x2a23be0()*0.311544);
}

double NNfunction_ss_uLcR::synapse0x2a3c1e0() {
   return (neuron0x2a23f20()*0.437775);
}

double NNfunction_ss_uLcR::synapse0x2a3c220() {
   return (neuron0x2a24260()*0.179915);
}

double NNfunction_ss_uLcR::synapse0x2a3c260() {
   return (neuron0x2a245a0()*-0.859257);
}

double NNfunction_ss_uLcR::synapse0x2a3c2a0() {
   return (neuron0x2a248e0()*-0.190925);
}

double NNfunction_ss_uLcR::synapse0x2a3c2e0() {
   return (neuron0x2a24c20()*0.150162);
}

double NNfunction_ss_uLcR::synapse0x2a3c320() {
   return (neuron0x2a24f60()*-0.399939);
}

double NNfunction_ss_uLcR::synapse0x2a3c360() {
   return (neuron0x2a252a0()*0.170264);
}

double NNfunction_ss_uLcR::synapse0x2a3c3a0() {
   return (neuron0x2a255e0()*-0.944971);
}

double NNfunction_ss_uLcR::synapse0x2a3c3e0() {
   return (neuron0x2a25920()*-0.0125809);
}

double NNfunction_ss_uLcR::synapse0x2a3c420() {
   return (neuron0x2a25c60()*0.2223);
}

double NNfunction_ss_uLcR::synapse0x2a3c460() {
   return (neuron0x2a25fa0()*0.590559);
}

double NNfunction_ss_uLcR::synapse0x2a3c4a0() {
   return (neuron0x2a262e0()*-0.453317);
}

double NNfunction_ss_uLcR::synapse0x2a3c4e0() {
   return (neuron0x2a26620()*0.574671);
}

double NNfunction_ss_uLcR::synapse0x2a3bf70() {
   return (neuron0x2a26960()*-0.797855);
}

double NNfunction_ss_uLcR::synapse0x2a3bfb0() {
   return (neuron0x2a26ec0()*-1.04479);
}

double NNfunction_ss_uLcR::synapse0x2a3c630() {
   return (neuron0x2a270e0()*0.0793769);
}

double NNfunction_ss_uLcR::synapse0x2a3c670() {
   return (neuron0x2a27420()*0.0943843);
}

double NNfunction_ss_uLcR::synapse0x2a3c6b0() {
   return (neuron0x2a27760()*-1.06338);
}

double NNfunction_ss_uLcR::synapse0x2a3c6f0() {
   return (neuron0x2a27aa0()*0.712864);
}

double NNfunction_ss_uLcR::synapse0x2a3c730() {
   return (neuron0x2a27de0()*-0.0478014);
}

double NNfunction_ss_uLcR::synapse0x2a3c770() {
   return (neuron0x2a28120()*-0.0873741);
}

double NNfunction_ss_uLcR::synapse0x2a3caf0() {
   return (neuron0x2a23560()*0.846777);
}

double NNfunction_ss_uLcR::synapse0x2a3cb30() {
   return (neuron0x2a238a0()*-0.333305);
}

double NNfunction_ss_uLcR::synapse0x2a3cb70() {
   return (neuron0x2a23be0()*-1.46359);
}

double NNfunction_ss_uLcR::synapse0x2a3cbb0() {
   return (neuron0x2a23f20()*-0.833604);
}

double NNfunction_ss_uLcR::synapse0x2a3cbf0() {
   return (neuron0x2a24260()*0.814814);
}

double NNfunction_ss_uLcR::synapse0x2a3cc30() {
   return (neuron0x2a245a0()*0.456652);
}

double NNfunction_ss_uLcR::synapse0x2a3cc70() {
   return (neuron0x2a248e0()*-0.0118266);
}

double NNfunction_ss_uLcR::synapse0x2a3ccb0() {
   return (neuron0x2a24c20()*0.278374);
}

double NNfunction_ss_uLcR::synapse0x2a3ccf0() {
   return (neuron0x2a24f60()*-1.11234);
}

double NNfunction_ss_uLcR::synapse0x2a3cd30() {
   return (neuron0x2a252a0()*0.239914);
}

double NNfunction_ss_uLcR::synapse0x2a3cd70() {
   return (neuron0x2a255e0()*0.179246);
}

double NNfunction_ss_uLcR::synapse0x2a3cdb0() {
   return (neuron0x2a25920()*-1.03519);
}

double NNfunction_ss_uLcR::synapse0x2a3cdf0() {
   return (neuron0x2a25c60()*-0.439931);
}

double NNfunction_ss_uLcR::synapse0x2a3ce30() {
   return (neuron0x2a25fa0()*-0.544322);
}

double NNfunction_ss_uLcR::synapse0x2a3ce70() {
   return (neuron0x2a262e0()*-0.483978);
}

double NNfunction_ss_uLcR::synapse0x2a3ceb0() {
   return (neuron0x2a26620()*-0.567301);
}

double NNfunction_ss_uLcR::synapse0x2a3c940() {
   return (neuron0x2a26960()*-0.996633);
}

double NNfunction_ss_uLcR::synapse0x2a3c980() {
   return (neuron0x2a26ec0()*0.359972);
}

double NNfunction_ss_uLcR::synapse0x2a3d000() {
   return (neuron0x2a270e0()*-0.575511);
}

double NNfunction_ss_uLcR::synapse0x2a3d040() {
   return (neuron0x2a27420()*-0.486497);
}

double NNfunction_ss_uLcR::synapse0x2a3d080() {
   return (neuron0x2a27760()*-0.746556);
}

double NNfunction_ss_uLcR::synapse0x2a3d0c0() {
   return (neuron0x2a27aa0()*1.22732);
}

double NNfunction_ss_uLcR::synapse0x2a3d100() {
   return (neuron0x2a27de0()*-0.82519);
}

double NNfunction_ss_uLcR::synapse0x2a3d140() {
   return (neuron0x2a28120()*0.294131);
}

double NNfunction_ss_uLcR::synapse0x2a3d4c0() {
   return (neuron0x2a23560()*-0.52116);
}

double NNfunction_ss_uLcR::synapse0x2a3d500() {
   return (neuron0x2a238a0()*-1.15636);
}

double NNfunction_ss_uLcR::synapse0x2a3d540() {
   return (neuron0x2a23be0()*0.48086);
}

double NNfunction_ss_uLcR::synapse0x2a3d580() {
   return (neuron0x2a23f20()*-1.01842);
}

double NNfunction_ss_uLcR::synapse0x2a3d5c0() {
   return (neuron0x2a24260()*-0.347669);
}

double NNfunction_ss_uLcR::synapse0x2a3d600() {
   return (neuron0x2a245a0()*0.121968);
}

double NNfunction_ss_uLcR::synapse0x2a3d640() {
   return (neuron0x2a248e0()*0.2849);
}

double NNfunction_ss_uLcR::synapse0x2a3d680() {
   return (neuron0x2a24c20()*0.686045);
}

double NNfunction_ss_uLcR::synapse0x2a3d6c0() {
   return (neuron0x2a24f60()*0.944272);
}

double NNfunction_ss_uLcR::synapse0x2a3d700() {
   return (neuron0x2a252a0()*0.0392266);
}

double NNfunction_ss_uLcR::synapse0x2a3d740() {
   return (neuron0x2a255e0()*0.713603);
}

double NNfunction_ss_uLcR::synapse0x2a3d780() {
   return (neuron0x2a25920()*0.47005);
}

double NNfunction_ss_uLcR::synapse0x2a3d7c0() {
   return (neuron0x2a25c60()*0.690345);
}

double NNfunction_ss_uLcR::synapse0x2a3d800() {
   return (neuron0x2a25fa0()*-0.110938);
}

double NNfunction_ss_uLcR::synapse0x2a3d840() {
   return (neuron0x2a262e0()*-0.380062);
}

double NNfunction_ss_uLcR::synapse0x2a3d880() {
   return (neuron0x2a26620()*0.360307);
}

double NNfunction_ss_uLcR::synapse0x2a3d310() {
   return (neuron0x2a26960()*-0.0326982);
}

double NNfunction_ss_uLcR::synapse0x2a3d350() {
   return (neuron0x2a26ec0()*-0.557011);
}

double NNfunction_ss_uLcR::synapse0x2a3d9d0() {
   return (neuron0x2a270e0()*-0.703403);
}

double NNfunction_ss_uLcR::synapse0x2a3da10() {
   return (neuron0x2a27420()*0.311065);
}

double NNfunction_ss_uLcR::synapse0x2a3da50() {
   return (neuron0x2a27760()*0.224412);
}

double NNfunction_ss_uLcR::synapse0x2a3da90() {
   return (neuron0x2a27aa0()*0.116909);
}

double NNfunction_ss_uLcR::synapse0x2a3dad0() {
   return (neuron0x2a27de0()*0.206418);
}

double NNfunction_ss_uLcR::synapse0x2a3db10() {
   return (neuron0x2a28120()*0.619154);
}

double NNfunction_ss_uLcR::synapse0x2a3de90() {
   return (neuron0x2a23560()*-1.06321);
}

double NNfunction_ss_uLcR::synapse0x2a32460() {
   return (neuron0x2a238a0()*0.170523);
}

double NNfunction_ss_uLcR::synapse0x2a324a0() {
   return (neuron0x2a23be0()*-1.13851);
}

double NNfunction_ss_uLcR::synapse0x2a324e0() {
   return (neuron0x2a23f20()*-1.46459);
}

double NNfunction_ss_uLcR::synapse0x2a32730() {
   return (neuron0x2a24260()*-0.302526);
}

double NNfunction_ss_uLcR::synapse0x2a32770() {
   return (neuron0x2a245a0()*-0.291883);
}

double NNfunction_ss_uLcR::synapse0x2a327b0() {
   return (neuron0x2a248e0()*-0.145);
}

double NNfunction_ss_uLcR::synapse0x2a32a00() {
   return (neuron0x2a24c20()*0.554888);
}

double NNfunction_ss_uLcR::synapse0x2a32a40() {
   return (neuron0x2a24f60()*-0.0157604);
}

double NNfunction_ss_uLcR::synapse0x2a32c90() {
   return (neuron0x2a252a0()*-0.654713);
}

double NNfunction_ss_uLcR::synapse0x2a32cd0() {
   return (neuron0x2a255e0()*0.395692);
}

double NNfunction_ss_uLcR::synapse0x2a32d10() {
   return (neuron0x2a25920()*0.515705);
}

double NNfunction_ss_uLcR::synapse0x2a32f60() {
   return (neuron0x2a25c60()*0.348415);
}

double NNfunction_ss_uLcR::synapse0x2a32fa0() {
   return (neuron0x2a25fa0()*-0.100042);
}

double NNfunction_ss_uLcR::synapse0x2a331f0() {
   return (neuron0x2a262e0()*-0.553351);
}

double NNfunction_ss_uLcR::synapse0x2a33230() {
   return (neuron0x2a26620()*-0.334432);
}

double NNfunction_ss_uLcR::synapse0x2a3dce0() {
   return (neuron0x2a26960()*-0.0276044);
}

double NNfunction_ss_uLcR::synapse0x2a3dd20() {
   return (neuron0x2a26ec0()*-0.244308);
}

double NNfunction_ss_uLcR::synapse0x2a33380() {
   return (neuron0x2a270e0()*0.671034);
}

double NNfunction_ss_uLcR::synapse0x2a33890() {
   return (neuron0x2a27420()*0.91221);
}

double NNfunction_ss_uLcR::synapse0x2a338d0() {
   return (neuron0x2a27760()*0.0370058);
}

double NNfunction_ss_uLcR::synapse0x2a33910() {
   return (neuron0x2a27aa0()*-0.579737);
}

double NNfunction_ss_uLcR::synapse0x2a33b60() {
   return (neuron0x2a27de0()*-0.323683);
}

double NNfunction_ss_uLcR::synapse0x2a33ba0() {
   return (neuron0x2a28120()*0.0817512);
}

double NNfunction_ss_uLcR::synapse0x2a33450() {
   return (neuron0x2a23560()*0.0116056);
}

double NNfunction_ss_uLcR::synapse0x2a33490() {
   return (neuron0x2a238a0()*-0.0187311);
}

double NNfunction_ss_uLcR::synapse0x2a334d0() {
   return (neuron0x2a23be0()*-0.0451727);
}

double NNfunction_ss_uLcR::synapse0x2a33510() {
   return (neuron0x2a23f20()*-0.0531161);
}

double NNfunction_ss_uLcR::synapse0x2a33e90() {
   return (neuron0x2a24260()*0.0023099);
}

double NNfunction_ss_uLcR::synapse0x2a401e0() {
   return (neuron0x2a245a0()*0.00319793);
}

double NNfunction_ss_uLcR::synapse0x2a40220() {
   return (neuron0x2a248e0()*0.00682888);
}

double NNfunction_ss_uLcR::synapse0x2a40260() {
   return (neuron0x2a24c20()*0.0095485);
}

double NNfunction_ss_uLcR::synapse0x2a402a0() {
   return (neuron0x2a24f60()*-0.0136233);
}

double NNfunction_ss_uLcR::synapse0x2a402e0() {
   return (neuron0x2a252a0()*0.00216687);
}

double NNfunction_ss_uLcR::synapse0x2a40320() {
   return (neuron0x2a255e0()*-0.0101486);
}

double NNfunction_ss_uLcR::synapse0x2a40360() {
   return (neuron0x2a25920()*1.94243);
}

double NNfunction_ss_uLcR::synapse0x2a403a0() {
   return (neuron0x2a25c60()*-0.000643076);
}

double NNfunction_ss_uLcR::synapse0x2a403e0() {
   return (neuron0x2a25fa0()*0.0269592);
}

double NNfunction_ss_uLcR::synapse0x2a40420() {
   return (neuron0x2a262e0()*0.0112091);
}

double NNfunction_ss_uLcR::synapse0x2a40460() {
   return (neuron0x2a26620()*0.104799);
}

double NNfunction_ss_uLcR::synapse0x2a33d70() {
   return (neuron0x2a26960()*-0.00131822);
}

double NNfunction_ss_uLcR::synapse0x2a33db0() {
   return (neuron0x2a26ec0()*0.00626801);
}

double NNfunction_ss_uLcR::synapse0x2a405b0() {
   return (neuron0x2a270e0()*0.0101761);
}

double NNfunction_ss_uLcR::synapse0x2a405f0() {
   return (neuron0x2a27420()*-0.00391349);
}

double NNfunction_ss_uLcR::synapse0x2a40630() {
   return (neuron0x2a27760()*-0.00367678);
}

double NNfunction_ss_uLcR::synapse0x2a40670() {
   return (neuron0x2a27aa0()*-0.0157281);
}

double NNfunction_ss_uLcR::synapse0x2a406b0() {
   return (neuron0x2a27de0()*-0.0114105);
}

double NNfunction_ss_uLcR::synapse0x2a406f0() {
   return (neuron0x2a28120()*0.0162879);
}

double NNfunction_ss_uLcR::synapse0x2a40a70() {
   return (neuron0x2a23560()*-0.117161);
}

double NNfunction_ss_uLcR::synapse0x2a40ab0() {
   return (neuron0x2a238a0()*-0.0002978);
}

double NNfunction_ss_uLcR::synapse0x2a40af0() {
   return (neuron0x2a23be0()*0.202988);
}

double NNfunction_ss_uLcR::synapse0x2a40b30() {
   return (neuron0x2a23f20()*-1.13432);
}

double NNfunction_ss_uLcR::synapse0x2a40b70() {
   return (neuron0x2a24260()*-0.0258309);
}

double NNfunction_ss_uLcR::synapse0x2a40bb0() {
   return (neuron0x2a245a0()*0.0578395);
}

double NNfunction_ss_uLcR::synapse0x2a40bf0() {
   return (neuron0x2a248e0()*0.0832144);
}

double NNfunction_ss_uLcR::synapse0x2a40c30() {
   return (neuron0x2a24c20()*0.169946);
}

double NNfunction_ss_uLcR::synapse0x2a40c70() {
   return (neuron0x2a24f60()*-0.0217793);
}

double NNfunction_ss_uLcR::synapse0x2a40cb0() {
   return (neuron0x2a252a0()*-0.15553);
}

double NNfunction_ss_uLcR::synapse0x2a40cf0() {
   return (neuron0x2a255e0()*-0.0531767);
}

double NNfunction_ss_uLcR::synapse0x2a40d30() {
   return (neuron0x2a25920()*-0.0265757);
}

double NNfunction_ss_uLcR::synapse0x2a40d70() {
   return (neuron0x2a25c60()*-0.0829248);
}

double NNfunction_ss_uLcR::synapse0x2a40db0() {
   return (neuron0x2a25fa0()*0.00163064);
}

double NNfunction_ss_uLcR::synapse0x2a40df0() {
   return (neuron0x2a262e0()*0.0888883);
}

double NNfunction_ss_uLcR::synapse0x2a40e30() {
   return (neuron0x2a26620()*-0.17212);
}

double NNfunction_ss_uLcR::synapse0x2a408c0() {
   return (neuron0x2a26960()*0.129848);
}

double NNfunction_ss_uLcR::synapse0x2a40900() {
   return (neuron0x2a26ec0()*-0.0766782);
}

double NNfunction_ss_uLcR::synapse0x2a40f80() {
   return (neuron0x2a270e0()*-0.0715351);
}

double NNfunction_ss_uLcR::synapse0x2a40fc0() {
   return (neuron0x2a27420()*-0.04181);
}

double NNfunction_ss_uLcR::synapse0x2a41000() {
   return (neuron0x2a27760()*-0.0817261);
}

double NNfunction_ss_uLcR::synapse0x2a41040() {
   return (neuron0x2a27aa0()*0.00429274);
}

double NNfunction_ss_uLcR::synapse0x2a41080() {
   return (neuron0x2a27de0()*-0.0585866);
}

double NNfunction_ss_uLcR::synapse0x2a410c0() {
   return (neuron0x2a28120()*0.180933);
}

double NNfunction_ss_uLcR::synapse0x2a41440() {
   return (neuron0x2a23560()*0.703391);
}

double NNfunction_ss_uLcR::synapse0x2a41480() {
   return (neuron0x2a238a0()*0.519867);
}

double NNfunction_ss_uLcR::synapse0x2a414c0() {
   return (neuron0x2a23be0()*0.307772);
}

double NNfunction_ss_uLcR::synapse0x2a41500() {
   return (neuron0x2a23f20()*0.404761);
}

double NNfunction_ss_uLcR::synapse0x2a41540() {
   return (neuron0x2a24260()*0.237056);
}

double NNfunction_ss_uLcR::synapse0x2a41580() {
   return (neuron0x2a245a0()*-0.561957);
}

double NNfunction_ss_uLcR::synapse0x2a415c0() {
   return (neuron0x2a248e0()*0.220639);
}

double NNfunction_ss_uLcR::synapse0x2a41600() {
   return (neuron0x2a24c20()*-1.04193);
}

double NNfunction_ss_uLcR::synapse0x2a41640() {
   return (neuron0x2a24f60()*-0.812762);
}

double NNfunction_ss_uLcR::synapse0x2a41680() {
   return (neuron0x2a252a0()*-0.0719257);
}

double NNfunction_ss_uLcR::synapse0x2a416c0() {
   return (neuron0x2a255e0()*-1.02372);
}

double NNfunction_ss_uLcR::synapse0x2a41700() {
   return (neuron0x2a25920()*-0.527271);
}

double NNfunction_ss_uLcR::synapse0x2a41740() {
   return (neuron0x2a25c60()*0.7378);
}

double NNfunction_ss_uLcR::synapse0x2a41780() {
   return (neuron0x2a25fa0()*-0.371388);
}

double NNfunction_ss_uLcR::synapse0x2a417c0() {
   return (neuron0x2a262e0()*0.161491);
}

double NNfunction_ss_uLcR::synapse0x2a41800() {
   return (neuron0x2a26620()*-0.665978);
}

double NNfunction_ss_uLcR::synapse0x2a41290() {
   return (neuron0x2a26960()*-0.418564);
}

double NNfunction_ss_uLcR::synapse0x2a412d0() {
   return (neuron0x2a26ec0()*0.206141);
}

double NNfunction_ss_uLcR::synapse0x2a41950() {
   return (neuron0x2a270e0()*0.324762);
}

double NNfunction_ss_uLcR::synapse0x2a41990() {
   return (neuron0x2a27420()*0.949008);
}

double NNfunction_ss_uLcR::synapse0x2a419d0() {
   return (neuron0x2a27760()*0.508205);
}

double NNfunction_ss_uLcR::synapse0x2a41a10() {
   return (neuron0x2a27aa0()*0.39057);
}

double NNfunction_ss_uLcR::synapse0x2a41a50() {
   return (neuron0x2a27de0()*0.628093);
}

double NNfunction_ss_uLcR::synapse0x2a41a90() {
   return (neuron0x2a28120()*-0.353774);
}

double NNfunction_ss_uLcR::synapse0x2a41e10() {
   return (neuron0x2a23560()*-0.217467);
}

double NNfunction_ss_uLcR::synapse0x2a41e50() {
   return (neuron0x2a238a0()*0.514163);
}

double NNfunction_ss_uLcR::synapse0x2a41e90() {
   return (neuron0x2a23be0()*0.3974);
}

double NNfunction_ss_uLcR::synapse0x2a41ed0() {
   return (neuron0x2a23f20()*-1.95679);
}

double NNfunction_ss_uLcR::synapse0x2a41f10() {
   return (neuron0x2a24260()*0.217864);
}

double NNfunction_ss_uLcR::synapse0x2a41f50() {
   return (neuron0x2a245a0()*0.072091);
}

double NNfunction_ss_uLcR::synapse0x2a41f90() {
   return (neuron0x2a248e0()*-0.85338);
}

double NNfunction_ss_uLcR::synapse0x2a41fd0() {
   return (neuron0x2a24c20()*0.066519);
}

double NNfunction_ss_uLcR::synapse0x2a42010() {
   return (neuron0x2a24f60()*-0.450427);
}

double NNfunction_ss_uLcR::synapse0x2a42050() {
   return (neuron0x2a252a0()*0.489508);
}

double NNfunction_ss_uLcR::synapse0x2a42090() {
   return (neuron0x2a255e0()*-0.100159);
}

double NNfunction_ss_uLcR::synapse0x2a420d0() {
   return (neuron0x2a25920()*-1.42393);
}

double NNfunction_ss_uLcR::synapse0x2a42110() {
   return (neuron0x2a25c60()*-0.217413);
}

double NNfunction_ss_uLcR::synapse0x2a42150() {
   return (neuron0x2a25fa0()*-0.4023);
}

double NNfunction_ss_uLcR::synapse0x2a42190() {
   return (neuron0x2a262e0()*0.132034);
}

double NNfunction_ss_uLcR::synapse0x2a421d0() {
   return (neuron0x2a26620()*-0.742156);
}

double NNfunction_ss_uLcR::synapse0x2a41c60() {
   return (neuron0x2a26960()*0.616915);
}

double NNfunction_ss_uLcR::synapse0x2a41ca0() {
   return (neuron0x2a26ec0()*-0.54958);
}

double NNfunction_ss_uLcR::synapse0x2a42320() {
   return (neuron0x2a270e0()*-0.160022);
}

double NNfunction_ss_uLcR::synapse0x2a42360() {
   return (neuron0x2a27420()*0.0136216);
}

double NNfunction_ss_uLcR::synapse0x2a423a0() {
   return (neuron0x2a27760()*0.155105);
}

double NNfunction_ss_uLcR::synapse0x2a423e0() {
   return (neuron0x2a27aa0()*0.234294);
}

double NNfunction_ss_uLcR::synapse0x2a42420() {
   return (neuron0x2a27de0()*0.547898);
}

double NNfunction_ss_uLcR::synapse0x2a42460() {
   return (neuron0x2a28120()*0.0424294);
}

double NNfunction_ss_uLcR::synapse0x2a427e0() {
   return (neuron0x2a23560()*0.0109567);
}

double NNfunction_ss_uLcR::synapse0x2a42820() {
   return (neuron0x2a238a0()*0.0879238);
}

double NNfunction_ss_uLcR::synapse0x2a42860() {
   return (neuron0x2a23be0()*0.375073);
}

double NNfunction_ss_uLcR::synapse0x2a428a0() {
   return (neuron0x2a23f20()*0.0112121);
}

double NNfunction_ss_uLcR::synapse0x2a428e0() {
   return (neuron0x2a24260()*-0.551401);
}

double NNfunction_ss_uLcR::synapse0x2a42920() {
   return (neuron0x2a245a0()*0.0571008);
}

double NNfunction_ss_uLcR::synapse0x2a42960() {
   return (neuron0x2a248e0()*-1.37573);
}

double NNfunction_ss_uLcR::synapse0x2a429a0() {
   return (neuron0x2a24c20()*-0.0152897);
}

double NNfunction_ss_uLcR::synapse0x2a429e0() {
   return (neuron0x2a24f60()*0.531406);
}

double NNfunction_ss_uLcR::synapse0x2a42a20() {
   return (neuron0x2a252a0()*0.37662);
}

double NNfunction_ss_uLcR::synapse0x2a42a60() {
   return (neuron0x2a255e0()*0.1574);
}

double NNfunction_ss_uLcR::synapse0x2a42aa0() {
   return (neuron0x2a25920()*-0.224407);
}

double NNfunction_ss_uLcR::synapse0x2a42ae0() {
   return (neuron0x2a25c60()*0.281186);
}

double NNfunction_ss_uLcR::synapse0x2a42b20() {
   return (neuron0x2a25fa0()*0.433948);
}

double NNfunction_ss_uLcR::synapse0x2a42b60() {
   return (neuron0x2a262e0()*-0.0209001);
}

double NNfunction_ss_uLcR::synapse0x2a42ba0() {
   return (neuron0x2a26620()*0.199396);
}

double NNfunction_ss_uLcR::synapse0x2a42630() {
   return (neuron0x2a26960()*0.161107);
}

double NNfunction_ss_uLcR::synapse0x2a42670() {
   return (neuron0x2a26ec0()*0.462014);
}

double NNfunction_ss_uLcR::synapse0x2a42cf0() {
   return (neuron0x2a270e0()*0.271336);
}

double NNfunction_ss_uLcR::synapse0x2a42d30() {
   return (neuron0x2a27420()*0.0110609);
}

double NNfunction_ss_uLcR::synapse0x2a42d70() {
   return (neuron0x2a27760()*0.150474);
}

double NNfunction_ss_uLcR::synapse0x2a42db0() {
   return (neuron0x2a27aa0()*-0.209863);
}

double NNfunction_ss_uLcR::synapse0x2a42df0() {
   return (neuron0x2a27de0()*-0.727343);
}

double NNfunction_ss_uLcR::synapse0x2a42e30() {
   return (neuron0x2a28120()*-0.147824);
}

double NNfunction_ss_uLcR::synapse0x2a431b0() {
   return (neuron0x2a23560()*-0.0226725);
}

double NNfunction_ss_uLcR::synapse0x2a431f0() {
   return (neuron0x2a238a0()*-0.00177756);
}

double NNfunction_ss_uLcR::synapse0x2a43230() {
   return (neuron0x2a23be0()*-0.308646);
}

double NNfunction_ss_uLcR::synapse0x2a43270() {
   return (neuron0x2a23f20()*0.584611);
}

double NNfunction_ss_uLcR::synapse0x2a432b0() {
   return (neuron0x2a24260()*0.401391);
}

double NNfunction_ss_uLcR::synapse0x2a432f0() {
   return (neuron0x2a245a0()*-0.739914);
}

double NNfunction_ss_uLcR::synapse0x2a43330() {
   return (neuron0x2a248e0()*-0.746937);
}

double NNfunction_ss_uLcR::synapse0x2a43370() {
   return (neuron0x2a24c20()*0.448144);
}

double NNfunction_ss_uLcR::synapse0x2a433b0() {
   return (neuron0x2a24f60()*-0.360272);
}

double NNfunction_ss_uLcR::synapse0x2a433f0() {
   return (neuron0x2a252a0()*-0.00739426);
}

double NNfunction_ss_uLcR::synapse0x2a43430() {
   return (neuron0x2a255e0()*-0.0350185);
}

double NNfunction_ss_uLcR::synapse0x2a43470() {
   return (neuron0x2a25920()*0.1409);
}

double NNfunction_ss_uLcR::synapse0x2a434b0() {
   return (neuron0x2a25c60()*-0.176194);
}

double NNfunction_ss_uLcR::synapse0x2a434f0() {
   return (neuron0x2a25fa0()*-0.275368);
}

double NNfunction_ss_uLcR::synapse0x2a43530() {
   return (neuron0x2a262e0()*-0.147279);
}

double NNfunction_ss_uLcR::synapse0x2a43570() {
   return (neuron0x2a26620()*0.953513);
}

double NNfunction_ss_uLcR::synapse0x2a43000() {
   return (neuron0x2a26960()*-0.0616121);
}

double NNfunction_ss_uLcR::synapse0x2a43040() {
   return (neuron0x2a26ec0()*-0.183111);
}

double NNfunction_ss_uLcR::synapse0x2a436c0() {
   return (neuron0x2a270e0()*-0.0667321);
}

double NNfunction_ss_uLcR::synapse0x2a43700() {
   return (neuron0x2a27420()*-0.075396);
}

double NNfunction_ss_uLcR::synapse0x2a43740() {
   return (neuron0x2a27760()*-0.152413);
}

double NNfunction_ss_uLcR::synapse0x2a43780() {
   return (neuron0x2a27aa0()*0.325529);
}

double NNfunction_ss_uLcR::synapse0x2a437c0() {
   return (neuron0x2a27de0()*0.147254);
}

double NNfunction_ss_uLcR::synapse0x2a43800() {
   return (neuron0x2a28120()*0.385528);
}

double NNfunction_ss_uLcR::synapse0x2a43b80() {
   return (neuron0x2a23560()*0.866502);
}

double NNfunction_ss_uLcR::synapse0x2a43bc0() {
   return (neuron0x2a238a0()*0.297503);
}

double NNfunction_ss_uLcR::synapse0x2a43c00() {
   return (neuron0x2a23be0()*-0.618451);
}

double NNfunction_ss_uLcR::synapse0x2a43c40() {
   return (neuron0x2a23f20()*-0.215961);
}

double NNfunction_ss_uLcR::synapse0x2a43c80() {
   return (neuron0x2a24260()*0.621461);
}

double NNfunction_ss_uLcR::synapse0x2a43cc0() {
   return (neuron0x2a245a0()*1.14022);
}

double NNfunction_ss_uLcR::synapse0x2a43d00() {
   return (neuron0x2a248e0()*1.35194);
}

double NNfunction_ss_uLcR::synapse0x2a43d40() {
   return (neuron0x2a24c20()*-0.328936);
}

double NNfunction_ss_uLcR::synapse0x2a43d80() {
   return (neuron0x2a24f60()*-0.376634);
}

double NNfunction_ss_uLcR::synapse0x2a43dc0() {
   return (neuron0x2a252a0()*-0.557524);
}

double NNfunction_ss_uLcR::synapse0x2a43e00() {
   return (neuron0x2a255e0()*-0.122968);
}

double NNfunction_ss_uLcR::synapse0x2a43e40() {
   return (neuron0x2a25920()*-0.874637);
}

double NNfunction_ss_uLcR::synapse0x2a43e80() {
   return (neuron0x2a25c60()*-0.241828);
}

double NNfunction_ss_uLcR::synapse0x2a43ec0() {
   return (neuron0x2a25fa0()*0.209942);
}

double NNfunction_ss_uLcR::synapse0x2a43f00() {
   return (neuron0x2a262e0()*0.627298);
}

double NNfunction_ss_uLcR::synapse0x2a43f40() {
   return (neuron0x2a26620()*-0.837922);
}

double NNfunction_ss_uLcR::synapse0x2a439d0() {
   return (neuron0x2a26960()*-0.254436);
}

double NNfunction_ss_uLcR::synapse0x2a43a10() {
   return (neuron0x2a26ec0()*-0.124264);
}

double NNfunction_ss_uLcR::synapse0x2a44090() {
   return (neuron0x2a270e0()*-0.445326);
}

double NNfunction_ss_uLcR::synapse0x2a440d0() {
   return (neuron0x2a27420()*-0.532546);
}

double NNfunction_ss_uLcR::synapse0x2a44110() {
   return (neuron0x2a27760()*-0.573074);
}

double NNfunction_ss_uLcR::synapse0x2a44150() {
   return (neuron0x2a27aa0()*-0.200243);
}

double NNfunction_ss_uLcR::synapse0x2a44190() {
   return (neuron0x2a27de0()*-0.302227);
}

double NNfunction_ss_uLcR::synapse0x2a441d0() {
   return (neuron0x2a28120()*0.583798);
}

double NNfunction_ss_uLcR::synapse0x2a44550() {
   return (neuron0x2a23560()*0.267664);
}

double NNfunction_ss_uLcR::synapse0x2a44590() {
   return (neuron0x2a238a0()*0.0830208);
}

double NNfunction_ss_uLcR::synapse0x2a445d0() {
   return (neuron0x2a23be0()*-0.156841);
}

double NNfunction_ss_uLcR::synapse0x2a44610() {
   return (neuron0x2a23f20()*-0.256865);
}

double NNfunction_ss_uLcR::synapse0x2a44650() {
   return (neuron0x2a24260()*-0.402418);
}

double NNfunction_ss_uLcR::synapse0x2a44690() {
   return (neuron0x2a245a0()*0.142736);
}

double NNfunction_ss_uLcR::synapse0x2a446d0() {
   return (neuron0x2a248e0()*0.744226);
}

double NNfunction_ss_uLcR::synapse0x2a44710() {
   return (neuron0x2a24c20()*0.132841);
}

double NNfunction_ss_uLcR::synapse0x2a44750() {
   return (neuron0x2a24f60()*-0.00572663);
}

double NNfunction_ss_uLcR::synapse0x2a44790() {
   return (neuron0x2a252a0()*-0.26255);
}

double NNfunction_ss_uLcR::synapse0x2a447d0() {
   return (neuron0x2a255e0()*-0.535193);
}

double NNfunction_ss_uLcR::synapse0x2a44810() {
   return (neuron0x2a25920()*0.799519);
}

double NNfunction_ss_uLcR::synapse0x2a44850() {
   return (neuron0x2a25c60()*1.12841);
}

double NNfunction_ss_uLcR::synapse0x2a44890() {
   return (neuron0x2a25fa0()*-0.809557);
}

double NNfunction_ss_uLcR::synapse0x2a448d0() {
   return (neuron0x2a262e0()*-0.102341);
}

double NNfunction_ss_uLcR::synapse0x2a44910() {
   return (neuron0x2a26620()*-0.825464);
}

double NNfunction_ss_uLcR::synapse0x2a443a0() {
   return (neuron0x2a26960()*0.30763);
}

double NNfunction_ss_uLcR::synapse0x2a443e0() {
   return (neuron0x2a26ec0()*-0.247687);
}

double NNfunction_ss_uLcR::synapse0x2a44a60() {
   return (neuron0x2a270e0()*-0.88761);
}

double NNfunction_ss_uLcR::synapse0x2a44aa0() {
   return (neuron0x2a27420()*-0.321327);
}

double NNfunction_ss_uLcR::synapse0x2a44ae0() {
   return (neuron0x2a27760()*-0.281902);
}

double NNfunction_ss_uLcR::synapse0x2a44b20() {
   return (neuron0x2a27aa0()*0.656926);
}

double NNfunction_ss_uLcR::synapse0x2a44b60() {
   return (neuron0x2a27de0()*-0.11299);
}

double NNfunction_ss_uLcR::synapse0x2a44ba0() {
   return (neuron0x2a28120()*0.71496);
}

double NNfunction_ss_uLcR::synapse0x2a2d650() {
   return (neuron0x2a23560()*-0.0182447);
}

double NNfunction_ss_uLcR::synapse0x2a2d690() {
   return (neuron0x2a238a0()*0.782619);
}

double NNfunction_ss_uLcR::synapse0x2a2d6d0() {
   return (neuron0x2a23be0()*0.447576);
}

double NNfunction_ss_uLcR::synapse0x2a2d710() {
   return (neuron0x2a23f20()*-0.322864);
}

double NNfunction_ss_uLcR::synapse0x2a2d750() {
   return (neuron0x2a24260()*-0.167041);
}

double NNfunction_ss_uLcR::synapse0x2a2d790() {
   return (neuron0x2a245a0()*-0.0825264);
}

double NNfunction_ss_uLcR::synapse0x2a2d7d0() {
   return (neuron0x2a248e0()*0.0289701);
}

double NNfunction_ss_uLcR::synapse0x2a2d810() {
   return (neuron0x2a24c20()*0.15119);
}

double NNfunction_ss_uLcR::synapse0x2a45330() {
   return (neuron0x2a24f60()*0.192768);
}

double NNfunction_ss_uLcR::synapse0x2a45370() {
   return (neuron0x2a252a0()*-0.0392158);
}

double NNfunction_ss_uLcR::synapse0x2a453b0() {
   return (neuron0x2a255e0()*0.203149);
}

double NNfunction_ss_uLcR::synapse0x2a453f0() {
   return (neuron0x2a25920()*-0.924252);
}

double NNfunction_ss_uLcR::synapse0x2a45430() {
   return (neuron0x2a25c60()*0.0233442);
}

double NNfunction_ss_uLcR::synapse0x2a45470() {
   return (neuron0x2a25fa0()*0.905736);
}

double NNfunction_ss_uLcR::synapse0x2a454b0() {
   return (neuron0x2a262e0()*-0.342045);
}

double NNfunction_ss_uLcR::synapse0x2a454f0() {
   return (neuron0x2a26620()*-0.524578);
}

double NNfunction_ss_uLcR::synapse0x2a44d70() {
   return (neuron0x2a26960()*0.393543);
}

double NNfunction_ss_uLcR::synapse0x2a44db0() {
   return (neuron0x2a26ec0()*-0.289721);
}

double NNfunction_ss_uLcR::synapse0x2a45640() {
   return (neuron0x2a270e0()*0.0240092);
}

double NNfunction_ss_uLcR::synapse0x2a45680() {
   return (neuron0x2a27420()*-0.397853);
}

double NNfunction_ss_uLcR::synapse0x2a456c0() {
   return (neuron0x2a27760()*-0.118135);
}

double NNfunction_ss_uLcR::synapse0x2a45700() {
   return (neuron0x2a27aa0()*-0.149188);
}

double NNfunction_ss_uLcR::synapse0x2a45740() {
   return (neuron0x2a27de0()*-0.53824);
}

double NNfunction_ss_uLcR::synapse0x2a45780() {
   return (neuron0x2a28120()*0.145909);
}

double NNfunction_ss_uLcR::synapse0x2a45b00() {
   return (neuron0x2a23560()*0.00647735);
}

double NNfunction_ss_uLcR::synapse0x2a45b40() {
   return (neuron0x2a238a0()*-1.19627);
}

double NNfunction_ss_uLcR::synapse0x2a45b80() {
   return (neuron0x2a23be0()*-0.741032);
}

double NNfunction_ss_uLcR::synapse0x2a45bc0() {
   return (neuron0x2a23f20()*-0.925131);
}

double NNfunction_ss_uLcR::synapse0x2a45c00() {
   return (neuron0x2a24260()*0.239445);
}

double NNfunction_ss_uLcR::synapse0x2a45c40() {
   return (neuron0x2a245a0()*-0.142602);
}

double NNfunction_ss_uLcR::synapse0x2a45c80() {
   return (neuron0x2a248e0()*0.15816);
}

double NNfunction_ss_uLcR::synapse0x2a45cc0() {
   return (neuron0x2a24c20()*-0.130937);
}

double NNfunction_ss_uLcR::synapse0x2a45d00() {
   return (neuron0x2a24f60()*0.205437);
}

double NNfunction_ss_uLcR::synapse0x2a45d40() {
   return (neuron0x2a252a0()*0.51174);
}

double NNfunction_ss_uLcR::synapse0x2a45d80() {
   return (neuron0x2a255e0()*-0.38314);
}

double NNfunction_ss_uLcR::synapse0x2a45dc0() {
   return (neuron0x2a25920()*-0.226802);
}

double NNfunction_ss_uLcR::synapse0x2a45e00() {
   return (neuron0x2a25c60()*0.171563);
}

double NNfunction_ss_uLcR::synapse0x2a45e40() {
   return (neuron0x2a25fa0()*0.365704);
}

double NNfunction_ss_uLcR::synapse0x2a45e80() {
   return (neuron0x2a262e0()*-0.143801);
}

double NNfunction_ss_uLcR::synapse0x2a45ec0() {
   return (neuron0x2a26620()*-1.48024);
}

double NNfunction_ss_uLcR::synapse0x2a45950() {
   return (neuron0x2a26960()*0.0893642);
}

double NNfunction_ss_uLcR::synapse0x2a45990() {
   return (neuron0x2a26ec0()*0.189509);
}

double NNfunction_ss_uLcR::synapse0x2a46010() {
   return (neuron0x2a270e0()*-0.481126);
}

double NNfunction_ss_uLcR::synapse0x2a46050() {
   return (neuron0x2a27420()*0.0493326);
}

double NNfunction_ss_uLcR::synapse0x2a46090() {
   return (neuron0x2a27760()*0.0037044);
}

double NNfunction_ss_uLcR::synapse0x2a460d0() {
   return (neuron0x2a27aa0()*-0.107216);
}

double NNfunction_ss_uLcR::synapse0x2a46110() {
   return (neuron0x2a27de0()*0.107264);
}

double NNfunction_ss_uLcR::synapse0x2a46150() {
   return (neuron0x2a28120()*-0.102309);
}

double NNfunction_ss_uLcR::synapse0x2a464d0() {
   return (neuron0x2a23560()*-0.273748);
}

double NNfunction_ss_uLcR::synapse0x2a46510() {
   return (neuron0x2a238a0()*0.0527131);
}

double NNfunction_ss_uLcR::synapse0x2a46550() {
   return (neuron0x2a23be0()*-0.327338);
}

double NNfunction_ss_uLcR::synapse0x2a46590() {
   return (neuron0x2a23f20()*0.110403);
}

double NNfunction_ss_uLcR::synapse0x2a465d0() {
   return (neuron0x2a24260()*0.634052);
}

double NNfunction_ss_uLcR::synapse0x2a46610() {
   return (neuron0x2a245a0()*0.171453);
}

double NNfunction_ss_uLcR::synapse0x2a46650() {
   return (neuron0x2a248e0()*-0.0850598);
}

double NNfunction_ss_uLcR::synapse0x2a46690() {
   return (neuron0x2a24c20()*1.00601);
}

double NNfunction_ss_uLcR::synapse0x2a466d0() {
   return (neuron0x2a24f60()*-0.564779);
}

double NNfunction_ss_uLcR::synapse0x2a46710() {
   return (neuron0x2a252a0()*-0.630292);
}

double NNfunction_ss_uLcR::synapse0x2a46750() {
   return (neuron0x2a255e0()*-0.309875);
}

double NNfunction_ss_uLcR::synapse0x2a46790() {
   return (neuron0x2a25920()*0.322752);
}

double NNfunction_ss_uLcR::synapse0x2a467d0() {
   return (neuron0x2a25c60()*-0.124942);
}

double NNfunction_ss_uLcR::synapse0x2a46810() {
   return (neuron0x2a25fa0()*-0.233013);
}

double NNfunction_ss_uLcR::synapse0x2a46850() {
   return (neuron0x2a262e0()*-1.47224);
}

double NNfunction_ss_uLcR::synapse0x2a46890() {
   return (neuron0x2a26620()*0.0317082);
}

double NNfunction_ss_uLcR::synapse0x2a46320() {
   return (neuron0x2a26960()*-1.00096);
}

double NNfunction_ss_uLcR::synapse0x2a46360() {
   return (neuron0x2a26ec0()*-0.24616);
}

double NNfunction_ss_uLcR::synapse0x2a36e90() {
   return (neuron0x2a270e0()*-0.646203);
}

double NNfunction_ss_uLcR::synapse0x2a36ed0() {
   return (neuron0x2a27420()*0.802186);
}

double NNfunction_ss_uLcR::synapse0x2a36f10() {
   return (neuron0x2a27760()*0.272098);
}

double NNfunction_ss_uLcR::synapse0x2a36f50() {
   return (neuron0x2a27aa0()*-0.591775);
}

double NNfunction_ss_uLcR::synapse0x2a36f90() {
   return (neuron0x2a27de0()*0.0206345);
}

double NNfunction_ss_uLcR::synapse0x2a36fd0() {
   return (neuron0x2a28120()*0.425462);
}

double NNfunction_ss_uLcR::synapse0x2a37350() {
   return (neuron0x2a23560()*-0.0141046);
}

double NNfunction_ss_uLcR::synapse0x2a37390() {
   return (neuron0x2a238a0()*-0.0104235);
}

double NNfunction_ss_uLcR::synapse0x2a373d0() {
   return (neuron0x2a23be0()*-0.0177004);
}

double NNfunction_ss_uLcR::synapse0x2a37410() {
   return (neuron0x2a23f20()*-0.0597814);
}

double NNfunction_ss_uLcR::synapse0x2a37450() {
   return (neuron0x2a24260()*-0.00239832);
}

double NNfunction_ss_uLcR::synapse0x2a37490() {
   return (neuron0x2a245a0()*0.00731222);
}

double NNfunction_ss_uLcR::synapse0x2a374d0() {
   return (neuron0x2a248e0()*0.00976596);
}

double NNfunction_ss_uLcR::synapse0x2a37510() {
   return (neuron0x2a24c20()*-0.00517055);
}

double NNfunction_ss_uLcR::synapse0x2a37550() {
   return (neuron0x2a24f60()*0.0162385);
}

double NNfunction_ss_uLcR::synapse0x2a37590() {
   return (neuron0x2a252a0()*-0.00887991);
}

double NNfunction_ss_uLcR::synapse0x2a375d0() {
   return (neuron0x2a255e0()*0.0155077);
}

double NNfunction_ss_uLcR::synapse0x2a37610() {
   return (neuron0x2a25920()*-1.62282);
}

double NNfunction_ss_uLcR::synapse0x2a37650() {
   return (neuron0x2a25c60()*0.00904071);
}

double NNfunction_ss_uLcR::synapse0x2a37690() {
   return (neuron0x2a25fa0()*-0.00516511);
}

double NNfunction_ss_uLcR::synapse0x2a376d0() {
   return (neuron0x2a262e0()*0.00190627);
}

double NNfunction_ss_uLcR::synapse0x2a37710() {
   return (neuron0x2a26620()*0.134326);
}

double NNfunction_ss_uLcR::synapse0x2a371a0() {
   return (neuron0x2a26960()*0.00909964);
}

double NNfunction_ss_uLcR::synapse0x2a371e0() {
   return (neuron0x2a26ec0()*0.0141339);
}

double NNfunction_ss_uLcR::synapse0x2a37860() {
   return (neuron0x2a270e0()*-0.00506277);
}

double NNfunction_ss_uLcR::synapse0x2a378a0() {
   return (neuron0x2a27420()*0.00810164);
}

double NNfunction_ss_uLcR::synapse0x2a378e0() {
   return (neuron0x2a27760()*0.000486168);
}

double NNfunction_ss_uLcR::synapse0x2a37920() {
   return (neuron0x2a27aa0()*-0.00442811);
}

double NNfunction_ss_uLcR::synapse0x2a37960() {
   return (neuron0x2a27de0()*1.89396e-05);
}

double NNfunction_ss_uLcR::synapse0x2a379a0() {
   return (neuron0x2a28120()*-0.00231769);
}

double NNfunction_ss_uLcR::synapse0x2a37d20() {
   return (neuron0x2a23560()*-0.250403);
}

double NNfunction_ss_uLcR::synapse0x2a37d60() {
   return (neuron0x2a238a0()*-0.889536);
}

double NNfunction_ss_uLcR::synapse0x2a37da0() {
   return (neuron0x2a23be0()*-0.0874364);
}

double NNfunction_ss_uLcR::synapse0x2a37de0() {
   return (neuron0x2a23f20()*-0.792652);
}

double NNfunction_ss_uLcR::synapse0x2a37e20() {
   return (neuron0x2a24260()*-0.0578977);
}

double NNfunction_ss_uLcR::synapse0x2a37e60() {
   return (neuron0x2a245a0()*-0.685024);
}

double NNfunction_ss_uLcR::synapse0x2a37ea0() {
   return (neuron0x2a248e0()*0.206566);
}

double NNfunction_ss_uLcR::synapse0x2a37ee0() {
   return (neuron0x2a24c20()*0.211417);
}

double NNfunction_ss_uLcR::synapse0x2a37f20() {
   return (neuron0x2a24f60()*-0.60784);
}

double NNfunction_ss_uLcR::synapse0x2a37f60() {
   return (neuron0x2a252a0()*-0.380593);
}

double NNfunction_ss_uLcR::synapse0x2a37fa0() {
   return (neuron0x2a255e0()*0.400737);
}

double NNfunction_ss_uLcR::synapse0x2a37fe0() {
   return (neuron0x2a25920()*-0.410466);
}

double NNfunction_ss_uLcR::synapse0x2a38020() {
   return (neuron0x2a25c60()*-0.210506);
}

double NNfunction_ss_uLcR::synapse0x2a38060() {
   return (neuron0x2a25fa0()*0.0935838);
}

double NNfunction_ss_uLcR::synapse0x2a380a0() {
   return (neuron0x2a262e0()*0.19322);
}

double NNfunction_ss_uLcR::synapse0x2a380e0() {
   return (neuron0x2a26620()*0.0635944);
}

double NNfunction_ss_uLcR::synapse0x2a37b70() {
   return (neuron0x2a26960()*-0.302843);
}

double NNfunction_ss_uLcR::synapse0x2a37bb0() {
   return (neuron0x2a26ec0()*0.123934);
}

double NNfunction_ss_uLcR::synapse0x2a38230() {
   return (neuron0x2a270e0()*0.240166);
}

double NNfunction_ss_uLcR::synapse0x2a38270() {
   return (neuron0x2a27420()*0.15312);
}

double NNfunction_ss_uLcR::synapse0x2a382b0() {
   return (neuron0x2a27760()*-0.460918);
}

double NNfunction_ss_uLcR::synapse0x2a382f0() {
   return (neuron0x2a27aa0()*-0.173991);
}

double NNfunction_ss_uLcR::synapse0x2a38330() {
   return (neuron0x2a27de0()*-0.182701);
}

double NNfunction_ss_uLcR::synapse0x2a38370() {
   return (neuron0x2a28120()*0.237917);
}

double NNfunction_ss_uLcR::synapse0x2a386f0() {
   return (neuron0x2a23560()*-0.862517);
}

double NNfunction_ss_uLcR::synapse0x2a38730() {
   return (neuron0x2a238a0()*0.620618);
}

double NNfunction_ss_uLcR::synapse0x2a38770() {
   return (neuron0x2a23be0()*0.139419);
}

double NNfunction_ss_uLcR::synapse0x2a387b0() {
   return (neuron0x2a23f20()*0.0119465);
}

double NNfunction_ss_uLcR::synapse0x2a387f0() {
   return (neuron0x2a24260()*-1.38749);
}

double NNfunction_ss_uLcR::synapse0x2a38830() {
   return (neuron0x2a245a0()*0.222556);
}

double NNfunction_ss_uLcR::synapse0x2a38870() {
   return (neuron0x2a248e0()*-0.286963);
}

double NNfunction_ss_uLcR::synapse0x2a388b0() {
   return (neuron0x2a24c20()*0.106378);
}

double NNfunction_ss_uLcR::synapse0x2a388f0() {
   return (neuron0x2a24f60()*0.29597);
}

double NNfunction_ss_uLcR::synapse0x2a38930() {
   return (neuron0x2a252a0()*0.0212387);
}

double NNfunction_ss_uLcR::synapse0x2a38970() {
   return (neuron0x2a255e0()*-0.411538);
}

double NNfunction_ss_uLcR::synapse0x2a389b0() {
   return (neuron0x2a25920()*0.278715);
}

double NNfunction_ss_uLcR::synapse0x2a389f0() {
   return (neuron0x2a25c60()*-0.0205246);
}

double NNfunction_ss_uLcR::synapse0x2a38a30() {
   return (neuron0x2a25fa0()*1.18406);
}

double NNfunction_ss_uLcR::synapse0x2a38a70() {
   return (neuron0x2a262e0()*-0.601761);
}

double NNfunction_ss_uLcR::synapse0x2a38ab0() {
   return (neuron0x2a26620()*-0.503777);
}

double NNfunction_ss_uLcR::synapse0x2a38540() {
   return (neuron0x2a26960()*-0.115152);
}

double NNfunction_ss_uLcR::synapse0x2a38580() {
   return (neuron0x2a26ec0()*-0.658913);
}

double NNfunction_ss_uLcR::synapse0x2a38c00() {
   return (neuron0x2a270e0()*0.347043);
}

double NNfunction_ss_uLcR::synapse0x2a38c40() {
   return (neuron0x2a27420()*0.179326);
}

double NNfunction_ss_uLcR::synapse0x2a38c80() {
   return (neuron0x2a27760()*-0.366392);
}

double NNfunction_ss_uLcR::synapse0x2a38cc0() {
   return (neuron0x2a27aa0()*-0.693327);
}

double NNfunction_ss_uLcR::synapse0x2a38d00() {
   return (neuron0x2a27de0()*0.252507);
}

double NNfunction_ss_uLcR::synapse0x2a38d40() {
   return (neuron0x2a28120()*-1.18689);
}

double NNfunction_ss_uLcR::synapse0x2a4ac10() {
   return (neuron0x2a23560()*0.0941235);
}

double NNfunction_ss_uLcR::synapse0x2a4ac50() {
   return (neuron0x2a238a0()*-0.194397);
}

double NNfunction_ss_uLcR::synapse0x2a4ac90() {
   return (neuron0x2a23be0()*-0.319392);
}

double NNfunction_ss_uLcR::synapse0x2a4acd0() {
   return (neuron0x2a23f20()*0.0231039);
}

double NNfunction_ss_uLcR::synapse0x2a4ad10() {
   return (neuron0x2a24260()*0.612266);
}

double NNfunction_ss_uLcR::synapse0x2a4ad50() {
   return (neuron0x2a245a0()*0.406857);
}

double NNfunction_ss_uLcR::synapse0x2a4ad90() {
   return (neuron0x2a248e0()*-0.9452);
}

double NNfunction_ss_uLcR::synapse0x2a4add0() {
   return (neuron0x2a24c20()*1.05591);
}

double NNfunction_ss_uLcR::synapse0x2a4ae10() {
   return (neuron0x2a24f60()*0.471208);
}

double NNfunction_ss_uLcR::synapse0x2a4ae50() {
   return (neuron0x2a252a0()*-0.250526);
}

double NNfunction_ss_uLcR::synapse0x2a4ae90() {
   return (neuron0x2a255e0()*0.77431);
}

double NNfunction_ss_uLcR::synapse0x2a4aed0() {
   return (neuron0x2a25920()*0.549704);
}

double NNfunction_ss_uLcR::synapse0x2a4af10() {
   return (neuron0x2a25c60()*0.0657751);
}

double NNfunction_ss_uLcR::synapse0x2a4af50() {
   return (neuron0x2a25fa0()*-0.152037);
}

double NNfunction_ss_uLcR::synapse0x2a4af90() {
   return (neuron0x2a262e0()*-0.0332932);
}

double NNfunction_ss_uLcR::synapse0x2a4afd0() {
   return (neuron0x2a26620()*-0.633889);
}

double NNfunction_ss_uLcR::synapse0x2a38d80() {
   return (neuron0x2a26960()*0.00426202);
}

double NNfunction_ss_uLcR::synapse0x2a38dc0() {
   return (neuron0x2a26ec0()*1.13248);
}

double NNfunction_ss_uLcR::synapse0x2a4b120() {
   return (neuron0x2a270e0()*-0.262232);
}

double NNfunction_ss_uLcR::synapse0x2a4b160() {
   return (neuron0x2a27420()*0.135119);
}

double NNfunction_ss_uLcR::synapse0x2a4b1a0() {
   return (neuron0x2a27760()*0.109589);
}

double NNfunction_ss_uLcR::synapse0x2a4b1e0() {
   return (neuron0x2a27aa0()*-0.380986);
}

double NNfunction_ss_uLcR::synapse0x2a4b220() {
   return (neuron0x2a27de0()*0.461502);
}

double NNfunction_ss_uLcR::synapse0x2a4b260() {
   return (neuron0x2a28120()*0.276852);
}

double NNfunction_ss_uLcR::synapse0x2a4b5e0() {
   return (neuron0x2a23560()*-0.00414672);
}

double NNfunction_ss_uLcR::synapse0x2a4b620() {
   return (neuron0x2a238a0()*0.0676954);
}

double NNfunction_ss_uLcR::synapse0x2a4b660() {
   return (neuron0x2a23be0()*-0.0114606);
}

double NNfunction_ss_uLcR::synapse0x2a4b6a0() {
   return (neuron0x2a23f20()*3.48165);
}

double NNfunction_ss_uLcR::synapse0x2a4b6e0() {
   return (neuron0x2a24260()*-0.0245554);
}

double NNfunction_ss_uLcR::synapse0x2a4b720() {
   return (neuron0x2a245a0()*0.000338921);
}

double NNfunction_ss_uLcR::synapse0x2a4b760() {
   return (neuron0x2a248e0()*0.0306701);
}

double NNfunction_ss_uLcR::synapse0x2a4b7a0() {
   return (neuron0x2a24c20()*0.0537465);
}

double NNfunction_ss_uLcR::synapse0x2a4b7e0() {
   return (neuron0x2a24f60()*0.0223257);
}

double NNfunction_ss_uLcR::synapse0x2a4b820() {
   return (neuron0x2a252a0()*-0.183497);
}

double NNfunction_ss_uLcR::synapse0x2a4b860() {
   return (neuron0x2a255e0()*-0.0525659);
}

double NNfunction_ss_uLcR::synapse0x2a4b8a0() {
   return (neuron0x2a25920()*0.36078);
}

double NNfunction_ss_uLcR::synapse0x2a4b8e0() {
   return (neuron0x2a25c60()*-0.074223);
}

double NNfunction_ss_uLcR::synapse0x2a4b920() {
   return (neuron0x2a25fa0()*-0.0631704);
}

double NNfunction_ss_uLcR::synapse0x2a4b960() {
   return (neuron0x2a262e0()*0.0532025);
}

double NNfunction_ss_uLcR::synapse0x2a4b9a0() {
   return (neuron0x2a26620()*0.275077);
}

double NNfunction_ss_uLcR::synapse0x2a4b430() {
   return (neuron0x2a26960()*0.129399);
}

double NNfunction_ss_uLcR::synapse0x2a4b470() {
   return (neuron0x2a26ec0()*-0.0181857);
}

double NNfunction_ss_uLcR::synapse0x2a4baf0() {
   return (neuron0x2a270e0()*-0.0588315);
}

double NNfunction_ss_uLcR::synapse0x2a4bb30() {
   return (neuron0x2a27420()*0.0153817);
}

double NNfunction_ss_uLcR::synapse0x2a4bb70() {
   return (neuron0x2a27760()*-0.0869364);
}

double NNfunction_ss_uLcR::synapse0x2a4bbb0() {
   return (neuron0x2a27aa0()*0.105883);
}

double NNfunction_ss_uLcR::synapse0x2a4bbf0() {
   return (neuron0x2a27de0()*0.0233771);
}

double NNfunction_ss_uLcR::synapse0x2a4bc30() {
   return (neuron0x2a28120()*0.0341414);
}

double NNfunction_ss_uLcR::synapse0x2a4bfb0() {
   return (neuron0x2a23560()*-0.0411313);
}

double NNfunction_ss_uLcR::synapse0x2a4bff0() {
   return (neuron0x2a238a0()*-0.295399);
}

double NNfunction_ss_uLcR::synapse0x2a4c030() {
   return (neuron0x2a23be0()*0.0603241);
}

double NNfunction_ss_uLcR::synapse0x2a4c070() {
   return (neuron0x2a23f20()*-0.108708);
}

double NNfunction_ss_uLcR::synapse0x2a4c0b0() {
   return (neuron0x2a24260()*-0.358025);
}

double NNfunction_ss_uLcR::synapse0x2a4c0f0() {
   return (neuron0x2a245a0()*0.122263);
}

double NNfunction_ss_uLcR::synapse0x2a4c130() {
   return (neuron0x2a248e0()*-0.305173);
}

double NNfunction_ss_uLcR::synapse0x2a4c170() {
   return (neuron0x2a24c20()*1.16504);
}

double NNfunction_ss_uLcR::synapse0x2a4c1b0() {
   return (neuron0x2a24f60()*0.0619757);
}

double NNfunction_ss_uLcR::synapse0x2a4c1f0() {
   return (neuron0x2a252a0()*0.456257);
}

double NNfunction_ss_uLcR::synapse0x2a4c230() {
   return (neuron0x2a255e0()*-0.0585439);
}

double NNfunction_ss_uLcR::synapse0x2a4c270() {
   return (neuron0x2a25920()*0.756292);
}

double NNfunction_ss_uLcR::synapse0x2a4c2b0() {
   return (neuron0x2a25c60()*-0.587874);
}

double NNfunction_ss_uLcR::synapse0x2a4c2f0() {
   return (neuron0x2a25fa0()*0.367422);
}

double NNfunction_ss_uLcR::synapse0x2a4c330() {
   return (neuron0x2a262e0()*-0.584964);
}

double NNfunction_ss_uLcR::synapse0x2a4c370() {
   return (neuron0x2a26620()*-0.465614);
}

double NNfunction_ss_uLcR::synapse0x2a4be00() {
   return (neuron0x2a26960()*-0.236327);
}

double NNfunction_ss_uLcR::synapse0x2a4be40() {
   return (neuron0x2a26ec0()*-0.019825);
}

double NNfunction_ss_uLcR::synapse0x2a4c4c0() {
   return (neuron0x2a270e0()*-0.554403);
}

double NNfunction_ss_uLcR::synapse0x2a4c500() {
   return (neuron0x2a27420()*-0.175756);
}

double NNfunction_ss_uLcR::synapse0x2a4c540() {
   return (neuron0x2a27760()*0.134906);
}

double NNfunction_ss_uLcR::synapse0x2a4c580() {
   return (neuron0x2a27aa0()*-0.135312);
}

double NNfunction_ss_uLcR::synapse0x2a4c5c0() {
   return (neuron0x2a27de0()*-0.0803515);
}

double NNfunction_ss_uLcR::synapse0x2a4c600() {
   return (neuron0x2a28120()*-0.0206974);
}

double NNfunction_ss_uLcR::synapse0x2a4c980() {
   return (neuron0x2a23560()*0.00478899);
}

double NNfunction_ss_uLcR::synapse0x2a4c9c0() {
   return (neuron0x2a238a0()*-0.0147999);
}

double NNfunction_ss_uLcR::synapse0x2a4ca00() {
   return (neuron0x2a23be0()*0.00838781);
}

double NNfunction_ss_uLcR::synapse0x2a4ca40() {
   return (neuron0x2a23f20()*0.0142746);
}

double NNfunction_ss_uLcR::synapse0x2a4ca80() {
   return (neuron0x2a24260()*0.00814949);
}

double NNfunction_ss_uLcR::synapse0x2a4cac0() {
   return (neuron0x2a245a0()*0.0089781);
}

double NNfunction_ss_uLcR::synapse0x2a4cb00() {
   return (neuron0x2a248e0()*0.00886063);
}

double NNfunction_ss_uLcR::synapse0x2a4cb40() {
   return (neuron0x2a24c20()*-0.00621877);
}

double NNfunction_ss_uLcR::synapse0x2a4cb80() {
   return (neuron0x2a24f60()*0.00167301);
}

double NNfunction_ss_uLcR::synapse0x2a4cbc0() {
   return (neuron0x2a252a0()*-0.00911975);
}

double NNfunction_ss_uLcR::synapse0x2a4cc00() {
   return (neuron0x2a255e0()*0.00194807);
}

double NNfunction_ss_uLcR::synapse0x2a4cc40() {
   return (neuron0x2a25920()*-0.0260084);
}

double NNfunction_ss_uLcR::synapse0x2a4cc80() {
   return (neuron0x2a25c60()*-0.012929);
}

double NNfunction_ss_uLcR::synapse0x2a4ccc0() {
   return (neuron0x2a25fa0()*-0.00405694);
}

double NNfunction_ss_uLcR::synapse0x2a4cd00() {
   return (neuron0x2a262e0()*-0.00172064);
}

double NNfunction_ss_uLcR::synapse0x2a4cd40() {
   return (neuron0x2a26620()*-0.925219);
}

double NNfunction_ss_uLcR::synapse0x2a4c7d0() {
   return (neuron0x2a26960()*0.0117914);
}

double NNfunction_ss_uLcR::synapse0x2a4c810() {
   return (neuron0x2a26ec0()*-0.00414831);
}

double NNfunction_ss_uLcR::synapse0x2a4ce90() {
   return (neuron0x2a270e0()*-0.0141368);
}

double NNfunction_ss_uLcR::synapse0x2a4ced0() {
   return (neuron0x2a27420()*-0.00447638);
}

double NNfunction_ss_uLcR::synapse0x2a4cf10() {
   return (neuron0x2a27760()*0.00430513);
}

double NNfunction_ss_uLcR::synapse0x2a4cf50() {
   return (neuron0x2a27aa0()*-0.00407181);
}

double NNfunction_ss_uLcR::synapse0x2a4cf90() {
   return (neuron0x2a27de0()*-0.000145496);
}

double NNfunction_ss_uLcR::synapse0x2a4cfd0() {
   return (neuron0x2a28120()*-0.00535615);
}

double NNfunction_ss_uLcR::synapse0x2a29570() {
   return (neuron0x2a285c0()*-2.63315);
}

double NNfunction_ss_uLcR::synapse0x2a295b0() {
   return (neuron0x2a28ed0()*2.03371);
}

double NNfunction_ss_uLcR::synapse0x2a2aa80() {
   return (neuron0x2a299b0()*-1.2221);
}

double NNfunction_ss_uLcR::synapse0x2a2aac0() {
   return (neuron0x27e3240()*-1.39681);
}

double NNfunction_ss_uLcR::synapse0x2a2b450() {
   return (neuron0x2a2a7d0()*-1.63076);
}

double NNfunction_ss_uLcR::synapse0x2a2b490() {
   return (neuron0x2a2b1a0()*-2.03501);
}

double NNfunction_ss_uLcR::synapse0x2a2c220() {
   return (neuron0x2a2bf70()*3.67623);
}

double NNfunction_ss_uLcR::synapse0x2a2c260() {
   return (neuron0x2a2c940()*1.88097);
}

double NNfunction_ss_uLcR::synapse0x2a2cbf0() {
   return (neuron0x2a2d310()*-7.58946);
}

double NNfunction_ss_uLcR::synapse0x2a2cc30() {
   return (neuron0x2a2ddf0()*1.98272);
}

double NNfunction_ss_uLcR::synapse0x2a2d5c0() {
   return (neuron0x2a2e7c0()*-1.50093);
}

double NNfunction_ss_uLcR::synapse0x2a2d600() {
   return (neuron0x2a2b8a0()*-2.07703);
}

double NNfunction_ss_uLcR::synapse0x2a2e0a0() {
   return (neuron0x2a30370()*5.24164);
}

double NNfunction_ss_uLcR::synapse0x2a2e0e0() {
   return (neuron0x2a30d40()*1.57206);
}

double NNfunction_ss_uLcR::synapse0x2a2ea70() {
   return (neuron0x2a31710()*1.6517);
}

double NNfunction_ss_uLcR::synapse0x2a2eab0() {
   return (neuron0x2a320e0()*-1.89834);
}

double NNfunction_ss_uLcR::synapse0x2a2bb50() {
   return (neuron0x2a33ef0()*-2.2174);
}

double NNfunction_ss_uLcR::synapse0x2a2bb90() {
   return (neuron0x2a341d0()*1.55168);
}

double NNfunction_ss_uLcR::synapse0x2a30620() {
   return (neuron0x2a34ba0()*-2.27672);
}

double NNfunction_ss_uLcR::synapse0x2a30660() {
   return (neuron0x2a35570()*1.70969);
}

double NNfunction_ss_uLcR::synapse0x2a30ff0() {
   return (neuron0x2a35f40()*-1.87831);
}

double NNfunction_ss_uLcR::synapse0x2a31030() {
   return (neuron0x2a36910()*1.24741);
}

double NNfunction_ss_uLcR::synapse0x2a319c0() {
   return (neuron0x2a2f460()*-2.2822);
}

double NNfunction_ss_uLcR::synapse0x2a31a00() {
   return (neuron0x2a2fe30()*2.01103);
}

double NNfunction_ss_uLcR::synapse0x2a32390() {
   return (neuron0x2a396a0()*1.48966);
}

double NNfunction_ss_uLcR::synapse0x2a323d0() {
   return (neuron0x2a3a070()*2.37446);
}

double NNfunction_ss_uLcR::synapse0x2a26500() {
   return (neuron0x2a3aa40()*-1.17347);
}

double NNfunction_ss_uLcR::synapse0x2a26540() {
   return (neuron0x2a3b410()*-2.47208);
}

double NNfunction_ss_uLcR::synapse0x2a34480() {
   return (neuron0x2a3bde0()*-2.00918);
}

double NNfunction_ss_uLcR::synapse0x2a344c0() {
   return (neuron0x2a3c7b0()*2.11114);
}

double NNfunction_ss_uLcR::synapse0x2a34e50() {
   return (neuron0x2a3d180()*-2.44602);
}

double NNfunction_ss_uLcR::synapse0x2a34e90() {
   return (neuron0x2a3db50()*2.26674);
}

double NNfunction_ss_uLcR::synapse0x2a35820() {
   return (neuron0x2a33be0()*1.41683);
}

double NNfunction_ss_uLcR::synapse0x2a35860() {
   return (neuron0x2a40730()*2.51657);
}

double NNfunction_ss_uLcR::synapse0x2a361f0() {
   return (neuron0x2a41100()*-2.17825);
}

double NNfunction_ss_uLcR::synapse0x2a36230() {
   return (neuron0x2a41ad0()*2.51175);
}

double NNfunction_ss_uLcR::synapse0x2a36bc0() {
   return (neuron0x2a424a0()*-1.80756);
}

double NNfunction_ss_uLcR::synapse0x2a36c00() {
   return (neuron0x2a42e70()*-0.125115);
}

double NNfunction_ss_uLcR::synapse0x2a2f710() {
   return (neuron0x2a43840()*-2.20782);
}

double NNfunction_ss_uLcR::synapse0x2a2f750() {
   return (neuron0x2a44210()*2.1673);
}

double NNfunction_ss_uLcR::synapse0x2a38fc0() {
   return (neuron0x2a44be0()*1.21356);
}

double NNfunction_ss_uLcR::synapse0x2a39000() {
   return (neuron0x2a457c0()*2.31039);
}

double NNfunction_ss_uLcR::synapse0x2a39950() {
   return (neuron0x2a46190()*1.89001);
}

double NNfunction_ss_uLcR::synapse0x2a39990() {
   return (neuron0x2a37010()*-0.518137);
}

double NNfunction_ss_uLcR::synapse0x2a3a320() {
   return (neuron0x2a379e0()*-1.07318);
}

double NNfunction_ss_uLcR::synapse0x2a3a360() {
   return (neuron0x2a383b0()*2.0195);
}

double NNfunction_ss_uLcR::synapse0x2a3acf0() {
   return (neuron0x2a4a9f0()*-2.16594);
}

double NNfunction_ss_uLcR::synapse0x2a3ad30() {
   return (neuron0x2a4b2a0()*-7.04537);
}

double NNfunction_ss_uLcR::synapse0x2a3b6c0() {
   return (neuron0x2a4bc70()*-1.16871);
}

double NNfunction_ss_uLcR::synapse0x2a3b700() {
   return (neuron0x2a4c640()*-0.240646);
}

double NNfunction_ss_uLcR::synapse0x2a3de00() {
   return (neuron0x2a285c0()*0.0625357);
}

double NNfunction_ss_uLcR::synapse0x2a3de40() {
   return (neuron0x2a28ed0()*0.535493);
}

double NNfunction_ss_uLcR::synapse0x2a333c0() {
   return (neuron0x2a299b0()*0.557332);
}

double NNfunction_ss_uLcR::synapse0x2a33400() {
   return (neuron0x27e3240()*-0.133738);
}

double NNfunction_ss_uLcR::synapse0x2a409e0() {
   return (neuron0x2a2a7d0()*0.540772);
}

double NNfunction_ss_uLcR::synapse0x2a40a20() {
   return (neuron0x2a2b1a0()*-0.116471);
}

double NNfunction_ss_uLcR::synapse0x2a413b0() {
   return (neuron0x2a2bf70()*0.907176);
}

double NNfunction_ss_uLcR::synapse0x2a413f0() {
   return (neuron0x2a2c940()*0.141495);
}

double NNfunction_ss_uLcR::synapse0x2a41d80() {
   return (neuron0x2a2d310()*0.209151);
}

double NNfunction_ss_uLcR::synapse0x2a41dc0() {
   return (neuron0x2a2ddf0()*0.811447);
}

double NNfunction_ss_uLcR::synapse0x2a42750() {
   return (neuron0x2a2e7c0()*0.330476);
}

double NNfunction_ss_uLcR::synapse0x2a42790() {
   return (neuron0x2a2b8a0()*0.058523);
}

double NNfunction_ss_uLcR::synapse0x2a43120() {
   return (neuron0x2a30370()*0.257391);
}

double NNfunction_ss_uLcR::synapse0x2a43160() {
   return (neuron0x2a30d40()*0.330457);
}

double NNfunction_ss_uLcR::synapse0x2a43af0() {
   return (neuron0x2a31710()*0.249022);
}

double NNfunction_ss_uLcR::synapse0x2a43b30() {
   return (neuron0x2a320e0()*0.646334);
}

double NNfunction_ss_uLcR::synapse0x2a444c0() {
   return (neuron0x2a33ef0()*0.903722);
}

double NNfunction_ss_uLcR::synapse0x2a44500() {
   return (neuron0x2a341d0()*1.322);
}

double NNfunction_ss_uLcR::synapse0x2a44e90() {
   return (neuron0x2a34ba0()*0.4979);
}

double NNfunction_ss_uLcR::synapse0x2a44ed0() {
   return (neuron0x2a35570()*0.0302844);
}

double NNfunction_ss_uLcR::synapse0x2a45a70() {
   return (neuron0x2a35f40()*0.334621);
}

double NNfunction_ss_uLcR::synapse0x2a45ab0() {
   return (neuron0x2a36910()*0.459558);
}

double NNfunction_ss_uLcR::synapse0x2a46440() {
   return (neuron0x2a2f460()*0.493291);
}

double NNfunction_ss_uLcR::synapse0x2a46480() {
   return (neuron0x2a2fe30()*0.670566);
}

double NNfunction_ss_uLcR::synapse0x2a372c0() {
   return (neuron0x2a396a0()*-0.197332);
}

double NNfunction_ss_uLcR::synapse0x2a37300() {
   return (neuron0x2a3a070()*0.260835);
}

double NNfunction_ss_uLcR::synapse0x2a37c90() {
   return (neuron0x2a3aa40()*0.373046);
}

double NNfunction_ss_uLcR::synapse0x2a37cd0() {
   return (neuron0x2a3b410()*0.528156);
}

double NNfunction_ss_uLcR::synapse0x2a38660() {
   return (neuron0x2a3bde0()*0.432692);
}

double NNfunction_ss_uLcR::synapse0x2a386a0() {
   return (neuron0x2a3c7b0()*0.315225);
}

double NNfunction_ss_uLcR::synapse0x2a4ab80() {
   return (neuron0x2a3d180()*0.553998);
}

double NNfunction_ss_uLcR::synapse0x2a4abc0() {
   return (neuron0x2a3db50()*0.47635);
}

double NNfunction_ss_uLcR::synapse0x2a4b550() {
   return (neuron0x2a33be0()*0.395139);
}

double NNfunction_ss_uLcR::synapse0x2a4b590() {
   return (neuron0x2a40730()*0.610982);
}

double NNfunction_ss_uLcR::synapse0x2a4bf20() {
   return (neuron0x2a41100()*-0.087782);
}

double NNfunction_ss_uLcR::synapse0x2a4bf60() {
   return (neuron0x2a41ad0()*0.913407);
}

double NNfunction_ss_uLcR::synapse0x2a4c8f0() {
   return (neuron0x2a424a0()*-0.0949016);
}

double NNfunction_ss_uLcR::synapse0x2a4c930() {
   return (neuron0x2a42e70()*1.20889);
}

double NNfunction_ss_uLcR::synapse0x2a287e0() {
   return (neuron0x2a43840()*0.440815);
}

double NNfunction_ss_uLcR::synapse0x2a28820() {
   return (neuron0x2a44210()*0.038181);
}

double NNfunction_ss_uLcR::synapse0x2a3c090() {
   return (neuron0x2a44be0()*0.515842);
}

double NNfunction_ss_uLcR::synapse0x2a3c0d0() {
   return (neuron0x2a457c0()*0.623026);
}

double NNfunction_ss_uLcR::synapse0x2a4d010() {
   return (neuron0x2a46190()*0.656759);
}

double NNfunction_ss_uLcR::synapse0x2a4d050() {
   return (neuron0x2a37010()*-0.24808);
}

double NNfunction_ss_uLcR::synapse0x2a4d090() {
   return (neuron0x2a379e0()*0.278251);
}

double NNfunction_ss_uLcR::synapse0x2a4d0d0() {
   return (neuron0x2a383b0()*0.575052);
}

double NNfunction_ss_uLcR::synapse0x2a53f80() {
   return (neuron0x2a4a9f0()*0.406618);
}

double NNfunction_ss_uLcR::synapse0x2a53fc0() {
   return (neuron0x2a4b2a0()*0.698777);
}

double NNfunction_ss_uLcR::synapse0x2a54000() {
   return (neuron0x2a4bc70()*0.312726);
}

double NNfunction_ss_uLcR::synapse0x2a54040() {
   return (neuron0x2a4c640()*0.0121064);
}

double NNfunction_ss_uLcR::synapse0x2a543c0() {
   return (neuron0x2a285c0()*0.0855039);
}

double NNfunction_ss_uLcR::synapse0x2a54400() {
   return (neuron0x2a28ed0()*0.00615305);
}

double NNfunction_ss_uLcR::synapse0x2a54440() {
   return (neuron0x2a299b0()*-1.32198);
}

double NNfunction_ss_uLcR::synapse0x2a54480() {
   return (neuron0x27e3240()*0.00495611);
}

double NNfunction_ss_uLcR::synapse0x2a544c0() {
   return (neuron0x2a2a7d0()*-0.0142875);
}

double NNfunction_ss_uLcR::synapse0x2a54500() {
   return (neuron0x2a2b1a0()*-0.0160688);
}

double NNfunction_ss_uLcR::synapse0x2a54540() {
   return (neuron0x2a2bf70()*0.279522);
}

double NNfunction_ss_uLcR::synapse0x2a54580() {
   return (neuron0x2a2c940()*0.00835559);
}

double NNfunction_ss_uLcR::synapse0x2a545c0() {
   return (neuron0x2a2d310()*-0.19668);
}

double NNfunction_ss_uLcR::synapse0x2a54600() {
   return (neuron0x2a2ddf0()*-0.00136703);
}

double NNfunction_ss_uLcR::synapse0x2a54640() {
   return (neuron0x2a2e7c0()*-0.00331734);
}

double NNfunction_ss_uLcR::synapse0x2a54680() {
   return (neuron0x2a2b8a0()*0.0223266);
}

double NNfunction_ss_uLcR::synapse0x2a546c0() {
   return (neuron0x2a30370()*0.367413);
}

double NNfunction_ss_uLcR::synapse0x2a54700() {
   return (neuron0x2a30d40()*0.00402947);
}

double NNfunction_ss_uLcR::synapse0x2a54740() {
   return (neuron0x2a31710()*-2.08855);
}

double NNfunction_ss_uLcR::synapse0x2a54780() {
   return (neuron0x2a320e0()*-0.00281437);
}

double NNfunction_ss_uLcR::synapse0x2a54210() {
   return (neuron0x2a33ef0()*-0.00494556);
}

double NNfunction_ss_uLcR::synapse0x2a54250() {
   return (neuron0x2a341d0()*-2.12052);
}

double NNfunction_ss_uLcR::synapse0x2a548d0() {
   return (neuron0x2a34ba0()*-0.00945188);
}

double NNfunction_ss_uLcR::synapse0x2a54910() {
   return (neuron0x2a35570()*0.00641874);
}

double NNfunction_ss_uLcR::synapse0x2a54950() {
   return (neuron0x2a35f40()*-0.00119138);
}

double NNfunction_ss_uLcR::synapse0x2a54990() {
   return (neuron0x2a36910()*-0.440196);
}

double NNfunction_ss_uLcR::synapse0x2a549d0() {
   return (neuron0x2a2f460()*1.89761);
}

double NNfunction_ss_uLcR::synapse0x2a54a10() {
   return (neuron0x2a2fe30()*0.0132207);
}

double NNfunction_ss_uLcR::synapse0x2a54a50() {
   return (neuron0x2a396a0()*0.00177384);
}

double NNfunction_ss_uLcR::synapse0x2a54a90() {
   return (neuron0x2a3a070()*0.0064769);
}

double NNfunction_ss_uLcR::synapse0x2a54ad0() {
   return (neuron0x2a3aa40()*0.013647);
}

double NNfunction_ss_uLcR::synapse0x2a54b10() {
   return (neuron0x2a3b410()*-0.014611);
}

double NNfunction_ss_uLcR::synapse0x2a54b50() {
   return (neuron0x2a3bde0()*-0.0188978);
}

double NNfunction_ss_uLcR::synapse0x2a54b90() {
   return (neuron0x2a3c7b0()*0.012604);
}

double NNfunction_ss_uLcR::synapse0x2a54bd0() {
   return (neuron0x2a3d180()*-0.00246725);
}

double NNfunction_ss_uLcR::synapse0x2a54c10() {
   return (neuron0x2a3db50()*0.00949026);
}

double NNfunction_ss_uLcR::synapse0x2a547c0() {
   return (neuron0x2a33be0()*-0.456828);
}

double NNfunction_ss_uLcR::synapse0x2a54800() {
   return (neuron0x2a40730()*0.16537);
}

double NNfunction_ss_uLcR::synapse0x2a54840() {
   return (neuron0x2a41100()*-0.00738396);
}

double NNfunction_ss_uLcR::synapse0x2a54880() {
   return (neuron0x2a41ad0()*0.00568533);
}

double NNfunction_ss_uLcR::synapse0x2a54e60() {
   return (neuron0x2a424a0()*-0.0200335);
}

double NNfunction_ss_uLcR::synapse0x2a54ea0() {
   return (neuron0x2a42e70()*0.0258629);
}

double NNfunction_ss_uLcR::synapse0x2a54ee0() {
   return (neuron0x2a43840()*-0.00195947);
}

double NNfunction_ss_uLcR::synapse0x2a54f20() {
   return (neuron0x2a44210()*-0.000181672);
}

double NNfunction_ss_uLcR::synapse0x2a54f60() {
   return (neuron0x2a44be0()*-0.00737834);
}

double NNfunction_ss_uLcR::synapse0x2a54fa0() {
   return (neuron0x2a457c0()*0.0130167);
}

double NNfunction_ss_uLcR::synapse0x2a54fe0() {
   return (neuron0x2a46190()*0.00809581);
}

double NNfunction_ss_uLcR::synapse0x2a55020() {
   return (neuron0x2a37010()*-1.15246);
}

double NNfunction_ss_uLcR::synapse0x2a55060() {
   return (neuron0x2a379e0()*-0.00834635);
}

double NNfunction_ss_uLcR::synapse0x2a550a0() {
   return (neuron0x2a383b0()*0.0133943);
}

double NNfunction_ss_uLcR::synapse0x2a550e0() {
   return (neuron0x2a4a9f0()*-0.0202349);
}

double NNfunction_ss_uLcR::synapse0x2a55120() {
   return (neuron0x2a4b2a0()*-0.290163);
}

double NNfunction_ss_uLcR::synapse0x2a55160() {
   return (neuron0x2a4bc70()*0.0120869);
}

double NNfunction_ss_uLcR::synapse0x2a551a0() {
   return (neuron0x2a4c640()*1.42902);
}

double NNfunction_ss_uLcR::synapse0x2a55520() {
   return (neuron0x2a285c0()*0.229356);
}

double NNfunction_ss_uLcR::synapse0x2a55560() {
   return (neuron0x2a28ed0()*-0.379926);
}

double NNfunction_ss_uLcR::synapse0x2a555a0() {
   return (neuron0x2a299b0()*0.64781);
}

double NNfunction_ss_uLcR::synapse0x2a555e0() {
   return (neuron0x27e3240()*-0.464422);
}

double NNfunction_ss_uLcR::synapse0x2a55620() {
   return (neuron0x2a2a7d0()*0.968914);
}

double NNfunction_ss_uLcR::synapse0x2a55660() {
   return (neuron0x2a2b1a0()*1.2329);
}

double NNfunction_ss_uLcR::synapse0x2a556a0() {
   return (neuron0x2a2bf70()*1.81223);
}

double NNfunction_ss_uLcR::synapse0x2a556e0() {
   return (neuron0x2a2c940()*-0.227729);
}

double NNfunction_ss_uLcR::synapse0x2a55720() {
   return (neuron0x2a2d310()*0.702042);
}

double NNfunction_ss_uLcR::synapse0x2a55760() {
   return (neuron0x2a2ddf0()*-0.0145023);
}

double NNfunction_ss_uLcR::synapse0x2a557a0() {
   return (neuron0x2a2e7c0()*0.433717);
}

double NNfunction_ss_uLcR::synapse0x2a557e0() {
   return (neuron0x2a2b8a0()*-0.00685806);
}

double NNfunction_ss_uLcR::synapse0x2a55820() {
   return (neuron0x2a30370()*1.31108);
}

double NNfunction_ss_uLcR::synapse0x2a55860() {
   return (neuron0x2a30d40()*0.356311);
}

double NNfunction_ss_uLcR::synapse0x2a558a0() {
   return (neuron0x2a31710()*1.44936);
}

double NNfunction_ss_uLcR::synapse0x2a558e0() {
   return (neuron0x2a320e0()*1.05439);
}

double NNfunction_ss_uLcR::synapse0x2a55370() {
   return (neuron0x2a33ef0()*0.439616);
}

double NNfunction_ss_uLcR::synapse0x2a553b0() {
   return (neuron0x2a341d0()*0.767969);
}

double NNfunction_ss_uLcR::synapse0x2a55a30() {
   return (neuron0x2a34ba0()*-0.429646);
}

double NNfunction_ss_uLcR::synapse0x2a55a70() {
   return (neuron0x2a35570()*0.169372);
}

double NNfunction_ss_uLcR::synapse0x2a55ab0() {
   return (neuron0x2a35f40()*-0.0405802);
}

double NNfunction_ss_uLcR::synapse0x2a55af0() {
   return (neuron0x2a36910()*0.248711);
}

double NNfunction_ss_uLcR::synapse0x2a55b30() {
   return (neuron0x2a2f460()*0.506401);
}

double NNfunction_ss_uLcR::synapse0x2a55b70() {
   return (neuron0x2a2fe30()*1.24222);
}

double NNfunction_ss_uLcR::synapse0x2a55bb0() {
   return (neuron0x2a396a0()*-1.4874);
}

double NNfunction_ss_uLcR::synapse0x2a55bf0() {
   return (neuron0x2a3a070()*0.0114857);
}

double NNfunction_ss_uLcR::synapse0x2a55c30() {
   return (neuron0x2a3aa40()*-0.0129512);
}

double NNfunction_ss_uLcR::synapse0x2a55c70() {
   return (neuron0x2a3b410()*0.717904);
}

double NNfunction_ss_uLcR::synapse0x2a55cb0() {
   return (neuron0x2a3bde0()*-0.778754);
}

double NNfunction_ss_uLcR::synapse0x2a55cf0() {
   return (neuron0x2a3c7b0()*0.260377);
}

double NNfunction_ss_uLcR::synapse0x2a55d30() {
   return (neuron0x2a3d180()*0.483066);
}

double NNfunction_ss_uLcR::synapse0x2a55d70() {
   return (neuron0x2a3db50()*-0.339487);
}

double NNfunction_ss_uLcR::synapse0x2a55920() {
   return (neuron0x2a33be0()*0.71469);
}

double NNfunction_ss_uLcR::synapse0x2a55960() {
   return (neuron0x2a40730()*0.0438894);
}

double NNfunction_ss_uLcR::synapse0x2a559a0() {
   return (neuron0x2a41100()*-0.194783);
}

double NNfunction_ss_uLcR::synapse0x2a559e0() {
   return (neuron0x2a41ad0()*0.657969);
}

double NNfunction_ss_uLcR::synapse0x2a55fc0() {
   return (neuron0x2a424a0()*0.0127725);
}

double NNfunction_ss_uLcR::synapse0x2a56000() {
   return (neuron0x2a42e70()*0.0772954);
}

double NNfunction_ss_uLcR::synapse0x2a56040() {
   return (neuron0x2a43840()*0.807626);
}

double NNfunction_ss_uLcR::synapse0x2a56080() {
   return (neuron0x2a44210()*1.39014);
}

double NNfunction_ss_uLcR::synapse0x2a560c0() {
   return (neuron0x2a44be0()*0.0325674);
}

double NNfunction_ss_uLcR::synapse0x2a56100() {
   return (neuron0x2a457c0()*0.800286);
}

double NNfunction_ss_uLcR::synapse0x2a56140() {
   return (neuron0x2a46190()*-0.0573994);
}

double NNfunction_ss_uLcR::synapse0x2a56180() {
   return (neuron0x2a37010()*-0.813741);
}

double NNfunction_ss_uLcR::synapse0x2a561c0() {
   return (neuron0x2a379e0()*-0.266344);
}

double NNfunction_ss_uLcR::synapse0x2a56200() {
   return (neuron0x2a383b0()*-0.414714);
}

double NNfunction_ss_uLcR::synapse0x2a56240() {
   return (neuron0x2a4a9f0()*0.202599);
}

double NNfunction_ss_uLcR::synapse0x2a56280() {
   return (neuron0x2a4b2a0()*-0.14135);
}

double NNfunction_ss_uLcR::synapse0x2a562c0() {
   return (neuron0x2a4bc70()*-0.477918);
}

double NNfunction_ss_uLcR::synapse0x2a56300() {
   return (neuron0x2a4c640()*0.052103);
}

double NNfunction_ss_uLcR::synapse0x2a56680() {
   return (neuron0x2a285c0()*-0.468186);
}

double NNfunction_ss_uLcR::synapse0x2a566c0() {
   return (neuron0x2a28ed0()*-0.00367741);
}

double NNfunction_ss_uLcR::synapse0x2a56700() {
   return (neuron0x2a299b0()*-0.371776);
}

double NNfunction_ss_uLcR::synapse0x2a56740() {
   return (neuron0x27e3240()*0.00847448);
}

double NNfunction_ss_uLcR::synapse0x2a56780() {
   return (neuron0x2a2a7d0()*-0.0731042);
}

double NNfunction_ss_uLcR::synapse0x2a567c0() {
   return (neuron0x2a2b1a0()*0.00389346);
}

double NNfunction_ss_uLcR::synapse0x2a56800() {
   return (neuron0x2a2bf70()*3.19762);
}

double NNfunction_ss_uLcR::synapse0x2a56840() {
   return (neuron0x2a2c940()*-0.0244895);
}

double NNfunction_ss_uLcR::synapse0x2a56880() {
   return (neuron0x2a2d310()*-0.00495297);
}

double NNfunction_ss_uLcR::synapse0x2a568c0() {
   return (neuron0x2a2ddf0()*-0.0202647);
}

double NNfunction_ss_uLcR::synapse0x2a56900() {
   return (neuron0x2a2e7c0()*0.0547695);
}

double NNfunction_ss_uLcR::synapse0x2a56940() {
   return (neuron0x2a2b8a0()*-0.182336);
}

double NNfunction_ss_uLcR::synapse0x2a56980() {
   return (neuron0x2a30370()*3.65904);
}

double NNfunction_ss_uLcR::synapse0x2a569c0() {
   return (neuron0x2a30d40()*0.102809);
}

double NNfunction_ss_uLcR::synapse0x2a56a00() {
   return (neuron0x2a31710()*2.95266);
}

double NNfunction_ss_uLcR::synapse0x2a56a40() {
   return (neuron0x2a320e0()*0.0896648);
}

double NNfunction_ss_uLcR::synapse0x2a564d0() {
   return (neuron0x2a33ef0()*-0.00359187);
}

double NNfunction_ss_uLcR::synapse0x2a56510() {
   return (neuron0x2a341d0()*-0.82399);
}

double NNfunction_ss_uLcR::synapse0x2a56b90() {
   return (neuron0x2a34ba0()*0.0209292);
}

double NNfunction_ss_uLcR::synapse0x2a56bd0() {
   return (neuron0x2a35570()*-0.199579);
}

double NNfunction_ss_uLcR::synapse0x2a56c10() {
   return (neuron0x2a35f40()*0.0379084);
}

double NNfunction_ss_uLcR::synapse0x2a56c50() {
   return (neuron0x2a36910()*1.69346);
}

double NNfunction_ss_uLcR::synapse0x2a56c90() {
   return (neuron0x2a2f460()*-3.89337);
}

double NNfunction_ss_uLcR::synapse0x2a56cd0() {
   return (neuron0x2a2fe30()*0.058248);
}

double NNfunction_ss_uLcR::synapse0x2a56d10() {
   return (neuron0x2a396a0()*0.05691);
}

double NNfunction_ss_uLcR::synapse0x2a56d50() {
   return (neuron0x2a3a070()*-0.0634509);
}

double NNfunction_ss_uLcR::synapse0x2a56d90() {
   return (neuron0x2a3aa40()*0.0542225);
}

double NNfunction_ss_uLcR::synapse0x2a56dd0() {
   return (neuron0x2a3b410()*-0.0737627);
}

double NNfunction_ss_uLcR::synapse0x2a56e10() {
   return (neuron0x2a3bde0()*-0.0858102);
}

double NNfunction_ss_uLcR::synapse0x2a56e50() {
   return (neuron0x2a3c7b0()*0.0367694);
}

double NNfunction_ss_uLcR::synapse0x2a56e90() {
   return (neuron0x2a3d180()*-0.0608848);
}

double NNfunction_ss_uLcR::synapse0x2a56ed0() {
   return (neuron0x2a3db50()*-0.0306764);
}

double NNfunction_ss_uLcR::synapse0x2a56a80() {
   return (neuron0x2a33be0()*1.95321);
}

double NNfunction_ss_uLcR::synapse0x2a56ac0() {
   return (neuron0x2a40730()*-1.17142);
}

double NNfunction_ss_uLcR::synapse0x2a56b00() {
   return (neuron0x2a41100()*0.0275802);
}

double NNfunction_ss_uLcR::synapse0x2a56b40() {
   return (neuron0x2a41ad0()*0.0119754);
}

double NNfunction_ss_uLcR::synapse0x2a57120() {
   return (neuron0x2a424a0()*-0.190476);
}

double NNfunction_ss_uLcR::synapse0x2a57160() {
   return (neuron0x2a42e70()*0.335259);
}

double NNfunction_ss_uLcR::synapse0x2a571a0() {
   return (neuron0x2a43840()*0.012523);
}

double NNfunction_ss_uLcR::synapse0x2a571e0() {
   return (neuron0x2a44210()*0.0223944);
}

double NNfunction_ss_uLcR::synapse0x2a57220() {
   return (neuron0x2a44be0()*0.176325);
}

double NNfunction_ss_uLcR::synapse0x2a57260() {
   return (neuron0x2a457c0()*0.178472);
}

double NNfunction_ss_uLcR::synapse0x2a572a0() {
   return (neuron0x2a46190()*0.0489483);
}

double NNfunction_ss_uLcR::synapse0x2a572e0() {
   return (neuron0x2a37010()*-0.241042);
}

double NNfunction_ss_uLcR::synapse0x2a57320() {
   return (neuron0x2a379e0()*-0.188128);
}

double NNfunction_ss_uLcR::synapse0x2a57360() {
   return (neuron0x2a383b0()*0.0694088);
}

double NNfunction_ss_uLcR::synapse0x2a573a0() {
   return (neuron0x2a4a9f0()*0.0398368);
}

double NNfunction_ss_uLcR::synapse0x2a573e0() {
   return (neuron0x2a4b2a0()*0.510654);
}

double NNfunction_ss_uLcR::synapse0x2a57420() {
   return (neuron0x2a4bc70()*-0.000633496);
}

double NNfunction_ss_uLcR::synapse0x2a57460() {
   return (neuron0x2a4c640()*1.29128);
}

double NNfunction_ss_uLcR::synapse0x2a28580() {
   return (neuron0x2a53840()*-8.82226);
}

double NNfunction_ss_uLcR::synapse0x2a576c0() {
   return (neuron0x2a53be0()*4.89308);
}

double NNfunction_ss_uLcR::synapse0x2a57700() {
   return (neuron0x2a54080()*8.39381);
}

double NNfunction_ss_uLcR::synapse0x2a57740() {
   return (neuron0x2a551e0()*0.786747);
}

double NNfunction_ss_uLcR::synapse0x2a57780() {
   return (neuron0x2a56340()*-6.5172);
}

