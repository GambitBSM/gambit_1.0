#include "NNfunction_ns_chiMinus1_cL.h"
#include <cmath>

double NNfunction_ns_chiMinus1_cL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2671)/15.172;
   input1 = (in1 - 31.0389)/971.626;
   input2 = (in2 - 419.952)/484.955;
   input3 = (in3 - 120.285)/734.741;
   input4 = (in4 - 899.056)/846.514;
   input5 = (in5 - 771.818)/829.281;
   input6 = (in6 - 767.679)/822.99;
   input7 = (in7 - 777.717)/810.745;
   input8 = (in8 - 784.87)/858.962;
   input9 = (in9 - 773.53)/844.157;
   input10 = (in10 - 808.383)/856.35;
   input11 = (in11 - 703.153)/739.203;
   input12 = (in12 - 364.348)/284.256;
   input13 = (in13 - 510.847)/439.867;
   input14 = (in14 - 691.687)/684.822;
   input15 = (in15 - 693.9)/687.716;
   input16 = (in16 - 494.841)/469.141;
   input17 = (in17 - 727.055)/771.962;
   input18 = (in18 - 729.275)/773.976;
   input19 = (in19 - 739.072)/747.022;
   input20 = (in20 - -103.059)/452.211;
   input21 = (in21 - -134.487)/1026.61;
   input22 = (in22 - 6.64878)/1045.16;
   input23 = (in23 - -78.1189)/538.915;
   switch(index) {
     case 0:
         return neuron0x2b937e0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiMinus1_cL::Value(int index, double* input) {
   input0 = (input[0] - 23.2671)/15.172;
   input1 = (input[1] - 31.0389)/971.626;
   input2 = (input[2] - 419.952)/484.955;
   input3 = (input[3] - 120.285)/734.741;
   input4 = (input[4] - 899.056)/846.514;
   input5 = (input[5] - 771.818)/829.281;
   input6 = (input[6] - 767.679)/822.99;
   input7 = (input[7] - 777.717)/810.745;
   input8 = (input[8] - 784.87)/858.962;
   input9 = (input[9] - 773.53)/844.157;
   input10 = (input[10] - 808.383)/856.35;
   input11 = (input[11] - 703.153)/739.203;
   input12 = (input[12] - 364.348)/284.256;
   input13 = (input[13] - 510.847)/439.867;
   input14 = (input[14] - 691.687)/684.822;
   input15 = (input[15] - 693.9)/687.716;
   input16 = (input[16] - 494.841)/469.141;
   input17 = (input[17] - 727.055)/771.962;
   input18 = (input[18] - 729.275)/773.976;
   input19 = (input[19] - 739.072)/747.022;
   input20 = (input[20] - -103.059)/452.211;
   input21 = (input[21] - -134.487)/1026.61;
   input22 = (input[22] - 6.64878)/1045.16;
   input23 = (input[23] - -78.1189)/538.915;
   switch(index) {
     case 0:
         return neuron0x2b937e0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b5f8d0() {
   return input0;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b5fc10() {
   return input1;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b5ff50() {
   return input2;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b60290() {
   return input3;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b605d0() {
   return input4;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b60910() {
   return input5;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b60c50() {
   return input6;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b60f90() {
   return input7;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b612d0() {
   return input8;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b61610() {
   return input9;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b61950() {
   return input10;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b61c90() {
   return input11;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b61fd0() {
   return input12;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b62310() {
   return input13;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b62650() {
   return input14;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b62990() {
   return input15;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b62cd0() {
   return input16;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b63230() {
   return input17;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b63450() {
   return input18;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b63790() {
   return input19;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b63ad0() {
   return input20;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b63e10() {
   return input21;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b64150() {
   return input22;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b64490() {
   return input23;
}

double NNfunction_ns_chiMinus1_cL::input0x2b64900() {
   double input = 1.16285;
   input += synapse0x2b5f790();
   input += synapse0x2b5f7d0();
   input += synapse0x2b64bb0();
   input += synapse0x2b64bf0();
   input += synapse0x2b64c30();
   input += synapse0x2b64c70();
   input += synapse0x2b64cb0();
   input += synapse0x2b64cf0();
   input += synapse0x2b64d30();
   input += synapse0x2b64d70();
   input += synapse0x2b64db0();
   input += synapse0x2b64df0();
   input += synapse0x2b64e30();
   input += synapse0x2b64e70();
   input += synapse0x2b64eb0();
   input += synapse0x2b64ef0();
   input += synapse0x2b5f700();
   input += synapse0x2b5f740();
   input += synapse0x291abd0();
   input += synapse0x291ac10();
   input += synapse0x2b65150();
   input += synapse0x2b65190();
   input += synapse0x2b651d0();
   input += synapse0x2b65210();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b64900() {
   double input = input0x2b64900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b65250() {
   double input = 3.49757;
   input += synapse0x2b65590();
   input += synapse0x2b655d0();
   input += synapse0x2b65610();
   input += synapse0x2b65650();
   input += synapse0x2b65690();
   input += synapse0x2b656d0();
   input += synapse0x2b65710();
   input += synapse0x2b65750();
   input += synapse0x2b65790();
   input += synapse0x2b65040();
   input += synapse0x2b65080();
   input += synapse0x2b650c0();
   input += synapse0x2b65100();
   input += synapse0x2b659e0();
   input += synapse0x2b65a20();
   input += synapse0x2b65a60();
   input += synapse0x2b653e0();
   input += synapse0x2b65420();
   input += synapse0x2b65bb0();
   input += synapse0x2b65bf0();
   input += synapse0x2b65c30();
   input += synapse0x2b65c70();
   input += synapse0x2b65cb0();
   input += synapse0x2b65cf0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b65250() {
   double input = input0x2b65250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b65d30() {
   double input = -1.20013;
   input += synapse0x2b66070();
   input += synapse0x2b660b0();
   input += synapse0x2b660f0();
   input += synapse0x2b66130();
   input += synapse0x2b66170();
   input += synapse0x2b661b0();
   input += synapse0x2b661f0();
   input += synapse0x2b66230();
   input += synapse0x2b66270();
   input += synapse0x2b662b0();
   input += synapse0x2b662f0();
   input += synapse0x2b66330();
   input += synapse0x2b66370();
   input += synapse0x2b663b0();
   input += synapse0x2b663f0();
   input += synapse0x2b66430();
   input += synapse0x2b65ec0();
   input += synapse0x2b65f00();
   input += synapse0x291b160();
   input += synapse0x2928a30();
   input += synapse0x2928a70();
   input += synapse0x2b4e960();
   input += synapse0x2b4e9a0();
   input += synapse0x2b4e9e0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b65d30() {
   double input = input0x2b65d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b657d0() {
   double input = 1.49169;
   input += synapse0x29292b0();
   input += synapse0x2b65960();
   input += synapse0x2b659a0();
   input += synapse0x2b66580();
   input += synapse0x2b665c0();
   input += synapse0x2b66600();
   input += synapse0x2b66640();
   input += synapse0x2b66680();
   input += synapse0x2b666c0();
   input += synapse0x2b66700();
   input += synapse0x2b66740();
   input += synapse0x2b66780();
   input += synapse0x2b667c0();
   input += synapse0x2b66800();
   input += synapse0x2b66840();
   input += synapse0x2b66880();
   input += synapse0x2b5f810();
   input += synapse0x2b5f850();
   input += synapse0x2b5f890();
   input += synapse0x2b669d0();
   input += synapse0x2b66a10();
   input += synapse0x2b66a50();
   input += synapse0x2b66a90();
   input += synapse0x2b66ad0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b657d0() {
   double input = input0x2b657d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b66b10() {
   double input = 0.432827;
   input += synapse0x2b66e50();
   input += synapse0x2b66e90();
   input += synapse0x2b66ed0();
   input += synapse0x2b66f10();
   input += synapse0x2b66f50();
   input += synapse0x2b66f90();
   input += synapse0x2b66fd0();
   input += synapse0x2b67010();
   input += synapse0x2b67050();
   input += synapse0x2b67090();
   input += synapse0x2b670d0();
   input += synapse0x2b67110();
   input += synapse0x2b67150();
   input += synapse0x2b67190();
   input += synapse0x2b671d0();
   input += synapse0x2b67210();
   input += synapse0x2b66ca0();
   input += synapse0x2b66ce0();
   input += synapse0x2b67360();
   input += synapse0x2b673a0();
   input += synapse0x2b673e0();
   input += synapse0x2b67420();
   input += synapse0x2b67460();
   input += synapse0x2b674a0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b66b10() {
   double input = input0x2b66b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b674e0() {
   double input = 2.88117;
   input += synapse0x2b67820();
   input += synapse0x2b67860();
   input += synapse0x2b678a0();
   input += synapse0x2b678e0();
   input += synapse0x2b67920();
   input += synapse0x2b67960();
   input += synapse0x2b679a0();
   input += synapse0x2b679e0();
   input += synapse0x2b67a20();
   input += synapse0x2928d80();
   input += synapse0x2928dc0();
   input += synapse0x2928e00();
   input += synapse0x2928e40();
   input += synapse0x2928e80();
   input += synapse0x2928ec0();
   input += synapse0x2928f00();
   input += synapse0x2b67670();
   input += synapse0x2b676b0();
   input += synapse0x2929050();
   input += synapse0x2929090();
   input += synapse0x29290d0();
   input += synapse0x2929110();
   input += synapse0x2929150();
   input += synapse0x2b68270();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b674e0() {
   double input = input0x2b674e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b682b0() {
   double input = -0.572446;
   input += synapse0x2b685f0();
   input += synapse0x2b68630();
   input += synapse0x2b68670();
   input += synapse0x2b686b0();
   input += synapse0x2b686f0();
   input += synapse0x2b68730();
   input += synapse0x2b68770();
   input += synapse0x2b687b0();
   input += synapse0x2b687f0();
   input += synapse0x2b68830();
   input += synapse0x2b68870();
   input += synapse0x2b688b0();
   input += synapse0x2b688f0();
   input += synapse0x2b68930();
   input += synapse0x2b68970();
   input += synapse0x2b689b0();
   input += synapse0x2b68440();
   input += synapse0x2b68480();
   input += synapse0x2b68b00();
   input += synapse0x2b68b40();
   input += synapse0x2b68b80();
   input += synapse0x2b68bc0();
   input += synapse0x2b68c00();
   input += synapse0x2b68c40();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b682b0() {
   double input = input0x2b682b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b68c80() {
   double input = 1.62616;
   input += synapse0x2b68fc0();
   input += synapse0x2b69000();
   input += synapse0x2b69040();
   input += synapse0x2b69080();
   input += synapse0x2b690c0();
   input += synapse0x2b69100();
   input += synapse0x2b69140();
   input += synapse0x2b69180();
   input += synapse0x2b691c0();
   input += synapse0x2b69200();
   input += synapse0x2b69240();
   input += synapse0x2b69280();
   input += synapse0x2b692c0();
   input += synapse0x2b69300();
   input += synapse0x2b69340();
   input += synapse0x2b69380();
   input += synapse0x2b68e10();
   input += synapse0x2b68e50();
   input += synapse0x2b694d0();
   input += synapse0x2b69510();
   input += synapse0x2b69550();
   input += synapse0x2b69590();
   input += synapse0x2b695d0();
   input += synapse0x2b69610();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b68c80() {
   double input = input0x2b68c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b69650() {
   double input = 0.0725203;
   input += synapse0x2b63120();
   input += synapse0x2b63160();
   input += synapse0x2b631a0();
   input += synapse0x2b631e0();
   input += synapse0x2b69ba0();
   input += synapse0x2b69be0();
   input += synapse0x2b69c20();
   input += synapse0x2b69c60();
   input += synapse0x2b69ca0();
   input += synapse0x2b69ce0();
   input += synapse0x2b69d20();
   input += synapse0x2b69d60();
   input += synapse0x2b69da0();
   input += synapse0x2b69de0();
   input += synapse0x2b69e20();
   input += synapse0x2b69e60();
   input += synapse0x2b697e0();
   input += synapse0x2b69820();
   input += synapse0x2b69fb0();
   input += synapse0x2b69ff0();
   input += synapse0x2b6a030();
   input += synapse0x2b6a070();
   input += synapse0x2b6a0b0();
   input += synapse0x2b6a0f0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b69650() {
   double input = input0x2b69650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b6a130() {
   double input = 1.67794;
   input += synapse0x2b6a470();
   input += synapse0x2b6a4b0();
   input += synapse0x2b6a4f0();
   input += synapse0x2b6a530();
   input += synapse0x2b6a570();
   input += synapse0x2b6a5b0();
   input += synapse0x2b6a5f0();
   input += synapse0x2b6a630();
   input += synapse0x2b6a670();
   input += synapse0x2b6a6b0();
   input += synapse0x2b6a6f0();
   input += synapse0x2b6a730();
   input += synapse0x2b6a770();
   input += synapse0x2b6a7b0();
   input += synapse0x2b6a7f0();
   input += synapse0x2b6a830();
   input += synapse0x2b6a2c0();
   input += synapse0x2b6a300();
   input += synapse0x2b6a980();
   input += synapse0x2b6a9c0();
   input += synapse0x2b6aa00();
   input += synapse0x2b6aa40();
   input += synapse0x2b6aa80();
   input += synapse0x2b6aac0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b6a130() {
   double input = input0x2b6a130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b6ab00() {
   double input = -0.571541;
   input += synapse0x2b6ae40();
   input += synapse0x2b6ae80();
   input += synapse0x2b6aec0();
   input += synapse0x2b6af00();
   input += synapse0x2b6af40();
   input += synapse0x2b6af80();
   input += synapse0x2b6afc0();
   input += synapse0x2b6b000();
   input += synapse0x2b6b040();
   input += synapse0x2b6b080();
   input += synapse0x2b6b0c0();
   input += synapse0x2b6b100();
   input += synapse0x2b6b140();
   input += synapse0x2b6b180();
   input += synapse0x2b6b1c0();
   input += synapse0x2b6b200();
   input += synapse0x2b6ac90();
   input += synapse0x2b6acd0();
   input += synapse0x2b67a60();
   input += synapse0x2b67aa0();
   input += synapse0x2b67ae0();
   input += synapse0x2b67b20();
   input += synapse0x2b67b60();
   input += synapse0x2b67ba0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b6ab00() {
   double input = input0x2b6ab00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b67be0() {
   double input = 0.293383;
   input += synapse0x2b67f20();
   input += synapse0x2b67f60();
   input += synapse0x2b67fa0();
   input += synapse0x2b67fe0();
   input += synapse0x2b68020();
   input += synapse0x2b68060();
   input += synapse0x2b680a0();
   input += synapse0x2b680e0();
   input += synapse0x2b68120();
   input += synapse0x2b68160();
   input += synapse0x2b681a0();
   input += synapse0x2b681e0();
   input += synapse0x2b68220();
   input += synapse0x2b6c360();
   input += synapse0x2b6c3a0();
   input += synapse0x2b6c3e0();
   input += synapse0x2b67d70();
   input += synapse0x2b67db0();
   input += synapse0x2b6c530();
   input += synapse0x2b6c570();
   input += synapse0x2b6c5b0();
   input += synapse0x2b6c5f0();
   input += synapse0x2b6c630();
   input += synapse0x2b6c670();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b67be0() {
   double input = input0x2b67be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b6c6b0() {
   double input = -5.67562;
   input += synapse0x2b6c9f0();
   input += synapse0x2b6ca30();
   input += synapse0x2b6ca70();
   input += synapse0x2b6cab0();
   input += synapse0x2b6caf0();
   input += synapse0x2b6cb30();
   input += synapse0x2b6cb70();
   input += synapse0x2b6cbb0();
   input += synapse0x2b6cbf0();
   input += synapse0x2b6cc30();
   input += synapse0x2b6cc70();
   input += synapse0x2b6ccb0();
   input += synapse0x2b6ccf0();
   input += synapse0x2b6cd30();
   input += synapse0x2b6cd70();
   input += synapse0x2b6cdb0();
   input += synapse0x2b6c840();
   input += synapse0x2b6c880();
   input += synapse0x2b6cf00();
   input += synapse0x2b6cf40();
   input += synapse0x2b6cf80();
   input += synapse0x2b6cfc0();
   input += synapse0x2b6d000();
   input += synapse0x2b6d040();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b6c6b0() {
   double input = input0x2b6c6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b6d080() {
   double input = -0.0865588;
   input += synapse0x2b6d3c0();
   input += synapse0x2b6d400();
   input += synapse0x2b6d440();
   input += synapse0x2b6d480();
   input += synapse0x2b6d4c0();
   input += synapse0x2b6d500();
   input += synapse0x2b6d540();
   input += synapse0x2b6d580();
   input += synapse0x2b6d5c0();
   input += synapse0x2b6d600();
   input += synapse0x2b6d640();
   input += synapse0x2b6d680();
   input += synapse0x2b6d6c0();
   input += synapse0x2b6d700();
   input += synapse0x2b6d740();
   input += synapse0x2b6d780();
   input += synapse0x2b6d210();
   input += synapse0x2b6d250();
   input += synapse0x2b6d8d0();
   input += synapse0x2b6d910();
   input += synapse0x2b6d950();
   input += synapse0x2b6d990();
   input += synapse0x2b6d9d0();
   input += synapse0x2b6da10();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b6d080() {
   double input = input0x2b6d080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b6da50() {
   double input = 0.372222;
   input += synapse0x2b6dd90();
   input += synapse0x2b6ddd0();
   input += synapse0x2b6de10();
   input += synapse0x2b6de50();
   input += synapse0x2b6de90();
   input += synapse0x2b6ded0();
   input += synapse0x2b6df10();
   input += synapse0x2b6df50();
   input += synapse0x2b6df90();
   input += synapse0x2b6dfd0();
   input += synapse0x2b6e010();
   input += synapse0x2b6e050();
   input += synapse0x2b6e090();
   input += synapse0x2b6e0d0();
   input += synapse0x2b6e110();
   input += synapse0x2b6e150();
   input += synapse0x2b6dbe0();
   input += synapse0x2b6dc20();
   input += synapse0x2b6e2a0();
   input += synapse0x2b6e2e0();
   input += synapse0x2b6e320();
   input += synapse0x2b6e360();
   input += synapse0x2b6e3a0();
   input += synapse0x2b6e3e0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b6da50() {
   double input = input0x2b6da50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b6e420() {
   double input = 0.453305;
   input += synapse0x2b6e760();
   input += synapse0x2b5faf0();
   input += synapse0x2b5fb30();
   input += synapse0x2b5fe30();
   input += synapse0x2b5fe70();
   input += synapse0x2b60170();
   input += synapse0x2b601b0();
   input += synapse0x2b604b0();
   input += synapse0x2b604f0();
   input += synapse0x2b607f0();
   input += synapse0x2b60830();
   input += synapse0x2b60b30();
   input += synapse0x2b60b70();
   input += synapse0x2b60e70();
   input += synapse0x2b60eb0();
   input += synapse0x2b611b0();
   input += synapse0x2b611f0();
   input += synapse0x2b614f0();
   input += synapse0x2b61530();
   input += synapse0x2b61830();
   input += synapse0x2b61870();
   input += synapse0x2b61b70();
   input += synapse0x2b61bb0();
   input += synapse0x2b61eb0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b6e420() {
   double input = input0x2b6e420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b70230() {
   double input = 0.281237;
   input += synapse0x2b61ef0();
   input += synapse0x2b62bb0();
   input += synapse0x2b62bf0();
   input += synapse0x2b6e5b0();
   input += synapse0x2b6e5f0();
   input += synapse0x2b62ef0();
   input += synapse0x2b62f30();
   input += synapse0x291aab0();
   input += synapse0x291aaf0();
   input += synapse0x2b63670();
   input += synapse0x2b636b0();
   input += synapse0x2b639b0();
   input += synapse0x2b639f0();
   input += synapse0x2b63cf0();
   input += synapse0x2b63d30();
   input += synapse0x2b64030();
   input += synapse0x2b64070();
   input += synapse0x2b64370();
   input += synapse0x2b643b0();
   input += synapse0x2b646b0();
   input += synapse0x2b646f0();
   input += synapse0x2b621f0();
   input += synapse0x2b62230();
   input += synapse0x2b704d0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b70230() {
   double input = input0x2b70230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b70510() {
   double input = -0.265483;
   input += synapse0x2b70850();
   input += synapse0x2b70890();
   input += synapse0x2b708d0();
   input += synapse0x2b70910();
   input += synapse0x2b70950();
   input += synapse0x2b70990();
   input += synapse0x2b709d0();
   input += synapse0x2b70a10();
   input += synapse0x2b70a50();
   input += synapse0x2b70a90();
   input += synapse0x2b70ad0();
   input += synapse0x2b70b10();
   input += synapse0x2b70b50();
   input += synapse0x2b70b90();
   input += synapse0x2b70bd0();
   input += synapse0x2b70c10();
   input += synapse0x2b706a0();
   input += synapse0x2b706e0();
   input += synapse0x2b70d60();
   input += synapse0x2b70da0();
   input += synapse0x2b70de0();
   input += synapse0x2b70e20();
   input += synapse0x2b70e60();
   input += synapse0x2b70ea0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b70510() {
   double input = input0x2b70510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b70ee0() {
   double input = 0.904747;
   input += synapse0x2b71220();
   input += synapse0x2b71260();
   input += synapse0x2b712a0();
   input += synapse0x2b712e0();
   input += synapse0x2b71320();
   input += synapse0x2b71360();
   input += synapse0x2b713a0();
   input += synapse0x2b713e0();
   input += synapse0x2b71420();
   input += synapse0x2b71460();
   input += synapse0x2b714a0();
   input += synapse0x2b714e0();
   input += synapse0x2b71520();
   input += synapse0x2b71560();
   input += synapse0x2b715a0();
   input += synapse0x2b715e0();
   input += synapse0x2b71070();
   input += synapse0x2b710b0();
   input += synapse0x2b71730();
   input += synapse0x2b71770();
   input += synapse0x2b717b0();
   input += synapse0x2b717f0();
   input += synapse0x2b71830();
   input += synapse0x2b71870();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b70ee0() {
   double input = input0x2b70ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b718b0() {
   double input = 0.601445;
   input += synapse0x2b71bf0();
   input += synapse0x2b71c30();
   input += synapse0x2b71c70();
   input += synapse0x2b71cb0();
   input += synapse0x2b71cf0();
   input += synapse0x2b71d30();
   input += synapse0x2b71d70();
   input += synapse0x2b71db0();
   input += synapse0x2b71df0();
   input += synapse0x2b71e30();
   input += synapse0x2b71e70();
   input += synapse0x2b71eb0();
   input += synapse0x2b71ef0();
   input += synapse0x2b71f30();
   input += synapse0x2b71f70();
   input += synapse0x2b71fb0();
   input += synapse0x2b71a40();
   input += synapse0x2b71a80();
   input += synapse0x2b72100();
   input += synapse0x2b72140();
   input += synapse0x2b72180();
   input += synapse0x2b721c0();
   input += synapse0x2b72200();
   input += synapse0x2b72240();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b718b0() {
   double input = input0x2b718b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b72280() {
   double input = 1.59032;
   input += synapse0x2b725c0();
   input += synapse0x2b72600();
   input += synapse0x2b72640();
   input += synapse0x2b72680();
   input += synapse0x2b726c0();
   input += synapse0x2b72700();
   input += synapse0x2b72740();
   input += synapse0x2b72780();
   input += synapse0x2b727c0();
   input += synapse0x2b72800();
   input += synapse0x2b72840();
   input += synapse0x2b72880();
   input += synapse0x2b728c0();
   input += synapse0x2b72900();
   input += synapse0x2b72940();
   input += synapse0x2b72980();
   input += synapse0x2b72410();
   input += synapse0x2b72450();
   input += synapse0x2b72ad0();
   input += synapse0x2b72b10();
   input += synapse0x2b72b50();
   input += synapse0x2b72b90();
   input += synapse0x2b72bd0();
   input += synapse0x2b72c10();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b72280() {
   double input = input0x2b72280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b72c50() {
   double input = 1.22101;
   input += synapse0x2b72f90();
   input += synapse0x2b72fd0();
   input += synapse0x2b73010();
   input += synapse0x2b73050();
   input += synapse0x2b73090();
   input += synapse0x2b730d0();
   input += synapse0x2b73110();
   input += synapse0x2b73150();
   input += synapse0x2b73190();
   input += synapse0x2b6b350();
   input += synapse0x2b6b390();
   input += synapse0x2b6b3d0();
   input += synapse0x2b6b410();
   input += synapse0x2b6b450();
   input += synapse0x2b6b490();
   input += synapse0x2b6b4d0();
   input += synapse0x2b72de0();
   input += synapse0x2b72e20();
   input += synapse0x2b6b620();
   input += synapse0x2b6b660();
   input += synapse0x2b6b6a0();
   input += synapse0x2b6b6e0();
   input += synapse0x2b6b720();
   input += synapse0x2b6b760();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b72c50() {
   double input = input0x2b72c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b6b7a0() {
   double input = -1.06895;
   input += synapse0x2b6bae0();
   input += synapse0x2b6bb20();
   input += synapse0x2b6bb60();
   input += synapse0x2b6bba0();
   input += synapse0x2b6bbe0();
   input += synapse0x2b6bc20();
   input += synapse0x2b6bc60();
   input += synapse0x2b6bca0();
   input += synapse0x2b6bce0();
   input += synapse0x2b6bd20();
   input += synapse0x2b6bd60();
   input += synapse0x2b6bda0();
   input += synapse0x2b6bde0();
   input += synapse0x2b6be20();
   input += synapse0x2b6be60();
   input += synapse0x2b6bea0();
   input += synapse0x2b6b930();
   input += synapse0x2b6b970();
   input += synapse0x2b6bff0();
   input += synapse0x2b6c030();
   input += synapse0x2b6c070();
   input += synapse0x2b6c0b0();
   input += synapse0x2b6c0f0();
   input += synapse0x2b6c130();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b6b7a0() {
   double input = input0x2b6b7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b6c170() {
   double input = -0.764629;
   input += synapse0x2b6c300();
   input += synapse0x2b75390();
   input += synapse0x2b753d0();
   input += synapse0x2b75410();
   input += synapse0x2b75450();
   input += synapse0x2b75490();
   input += synapse0x2b754d0();
   input += synapse0x2b75510();
   input += synapse0x2b75550();
   input += synapse0x2b75590();
   input += synapse0x2b755d0();
   input += synapse0x2b75610();
   input += synapse0x2b75650();
   input += synapse0x2b75690();
   input += synapse0x2b756d0();
   input += synapse0x2b75710();
   input += synapse0x2b751e0();
   input += synapse0x2b75220();
   input += synapse0x2b75860();
   input += synapse0x2b758a0();
   input += synapse0x2b758e0();
   input += synapse0x2b75920();
   input += synapse0x2b75960();
   input += synapse0x2b759a0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b6c170() {
   double input = input0x2b6c170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b759e0() {
   double input = -2.19287;
   input += synapse0x2b75d20();
   input += synapse0x2b75d60();
   input += synapse0x2b75da0();
   input += synapse0x2b75de0();
   input += synapse0x2b75e20();
   input += synapse0x2b75e60();
   input += synapse0x2b75ea0();
   input += synapse0x2b75ee0();
   input += synapse0x2b75f20();
   input += synapse0x2b75f60();
   input += synapse0x2b75fa0();
   input += synapse0x2b75fe0();
   input += synapse0x2b76020();
   input += synapse0x2b76060();
   input += synapse0x2b760a0();
   input += synapse0x2b760e0();
   input += synapse0x2b75b70();
   input += synapse0x2b75bb0();
   input += synapse0x2b76230();
   input += synapse0x2b76270();
   input += synapse0x2b762b0();
   input += synapse0x2b762f0();
   input += synapse0x2b76330();
   input += synapse0x2b76370();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b759e0() {
   double input = input0x2b759e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b763b0() {
   double input = 1.24426;
   input += synapse0x2b766f0();
   input += synapse0x2b76730();
   input += synapse0x2b76770();
   input += synapse0x2b767b0();
   input += synapse0x2b767f0();
   input += synapse0x2b76830();
   input += synapse0x2b76870();
   input += synapse0x2b768b0();
   input += synapse0x2b768f0();
   input += synapse0x2b76930();
   input += synapse0x2b76970();
   input += synapse0x2b769b0();
   input += synapse0x2b769f0();
   input += synapse0x2b76a30();
   input += synapse0x2b76a70();
   input += synapse0x2b76ab0();
   input += synapse0x2b76540();
   input += synapse0x2b76580();
   input += synapse0x2b76c00();
   input += synapse0x2b76c40();
   input += synapse0x2b76c80();
   input += synapse0x2b76cc0();
   input += synapse0x2b76d00();
   input += synapse0x2b76d40();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b763b0() {
   double input = input0x2b763b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b76d80() {
   double input = 0.170145;
   input += synapse0x2b770c0();
   input += synapse0x2b77100();
   input += synapse0x2b77140();
   input += synapse0x2b77180();
   input += synapse0x2b771c0();
   input += synapse0x2b77200();
   input += synapse0x2b77240();
   input += synapse0x2b77280();
   input += synapse0x2b772c0();
   input += synapse0x2b77300();
   input += synapse0x2b77340();
   input += synapse0x2b77380();
   input += synapse0x2b773c0();
   input += synapse0x2b77400();
   input += synapse0x2b77440();
   input += synapse0x2b77480();
   input += synapse0x2b76f10();
   input += synapse0x2b76f50();
   input += synapse0x2b775d0();
   input += synapse0x2b77610();
   input += synapse0x2b77650();
   input += synapse0x2b77690();
   input += synapse0x2b776d0();
   input += synapse0x2b77710();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b76d80() {
   double input = input0x2b76d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b77750() {
   double input = 0.196256;
   input += synapse0x2b77a90();
   input += synapse0x2b77ad0();
   input += synapse0x2b77b10();
   input += synapse0x2b77b50();
   input += synapse0x2b77b90();
   input += synapse0x2b77bd0();
   input += synapse0x2b77c10();
   input += synapse0x2b77c50();
   input += synapse0x2b77c90();
   input += synapse0x2b77cd0();
   input += synapse0x2b77d10();
   input += synapse0x2b77d50();
   input += synapse0x2b77d90();
   input += synapse0x2b77dd0();
   input += synapse0x2b77e10();
   input += synapse0x2b77e50();
   input += synapse0x2b778e0();
   input += synapse0x2b77920();
   input += synapse0x2b77fa0();
   input += synapse0x2b77fe0();
   input += synapse0x2b78020();
   input += synapse0x2b78060();
   input += synapse0x2b780a0();
   input += synapse0x2b780e0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b77750() {
   double input = input0x2b77750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b78120() {
   double input = -0.843959;
   input += synapse0x2b78460();
   input += synapse0x2b784a0();
   input += synapse0x2b784e0();
   input += synapse0x2b78520();
   input += synapse0x2b78560();
   input += synapse0x2b785a0();
   input += synapse0x2b785e0();
   input += synapse0x2b78620();
   input += synapse0x2b78660();
   input += synapse0x2b786a0();
   input += synapse0x2b786e0();
   input += synapse0x2b78720();
   input += synapse0x2b78760();
   input += synapse0x2b787a0();
   input += synapse0x2b787e0();
   input += synapse0x2b78820();
   input += synapse0x2b782b0();
   input += synapse0x2b782f0();
   input += synapse0x2b78970();
   input += synapse0x2b789b0();
   input += synapse0x2b789f0();
   input += synapse0x2b78a30();
   input += synapse0x2b78a70();
   input += synapse0x2b78ab0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b78120() {
   double input = input0x2b78120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b78af0() {
   double input = 0.216794;
   input += synapse0x2b78e30();
   input += synapse0x2b78e70();
   input += synapse0x2b78eb0();
   input += synapse0x2b78ef0();
   input += synapse0x2b78f30();
   input += synapse0x2b78f70();
   input += synapse0x2b78fb0();
   input += synapse0x2b78ff0();
   input += synapse0x2b79030();
   input += synapse0x2b79070();
   input += synapse0x2b790b0();
   input += synapse0x2b790f0();
   input += synapse0x2b79130();
   input += synapse0x2b79170();
   input += synapse0x2b791b0();
   input += synapse0x2b791f0();
   input += synapse0x2b78c80();
   input += synapse0x2b78cc0();
   input += synapse0x2b79340();
   input += synapse0x2b79380();
   input += synapse0x2b793c0();
   input += synapse0x2b79400();
   input += synapse0x2b79440();
   input += synapse0x2b79480();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b78af0() {
   double input = input0x2b78af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b794c0() {
   double input = 0.334432;
   input += synapse0x2b79800();
   input += synapse0x2b79840();
   input += synapse0x2b79880();
   input += synapse0x2b798c0();
   input += synapse0x2b79900();
   input += synapse0x2b79940();
   input += synapse0x2b79980();
   input += synapse0x2b799c0();
   input += synapse0x2b79a00();
   input += synapse0x2b79a40();
   input += synapse0x2b79a80();
   input += synapse0x2b79ac0();
   input += synapse0x2b79b00();
   input += synapse0x2b79b40();
   input += synapse0x2b79b80();
   input += synapse0x2b79bc0();
   input += synapse0x2b79650();
   input += synapse0x2b79690();
   input += synapse0x2b79d10();
   input += synapse0x2b79d50();
   input += synapse0x2b79d90();
   input += synapse0x2b79dd0();
   input += synapse0x2b79e10();
   input += synapse0x2b79e50();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b794c0() {
   double input = input0x2b794c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b79e90() {
   double input = 4.33931;
   input += synapse0x2b7a1d0();
   input += synapse0x2b6e7a0();
   input += synapse0x2b6e7e0();
   input += synapse0x2b6e820();
   input += synapse0x2b6ea70();
   input += synapse0x2b6eab0();
   input += synapse0x2b6eaf0();
   input += synapse0x2b6ed40();
   input += synapse0x2b6ed80();
   input += synapse0x2b6efd0();
   input += synapse0x2b6f010();
   input += synapse0x2b6f050();
   input += synapse0x2b6f2a0();
   input += synapse0x2b6f2e0();
   input += synapse0x2b6f530();
   input += synapse0x2b6f570();
   input += synapse0x2b7a020();
   input += synapse0x2b7a060();
   input += synapse0x2b6f6c0();
   input += synapse0x2b6fbd0();
   input += synapse0x2b6fc10();
   input += synapse0x2b6fc50();
   input += synapse0x2b6fea0();
   input += synapse0x2b6fee0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b79e90() {
   double input = input0x2b79e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b6ff20() {
   double input = 0.934703;
   input += synapse0x2b6f790();
   input += synapse0x2b6f7d0();
   input += synapse0x2b6f810();
   input += synapse0x2b6f850();
   input += synapse0x2b701d0();
   input += synapse0x2b7c520();
   input += synapse0x2b7c560();
   input += synapse0x2b7c5a0();
   input += synapse0x2b7c5e0();
   input += synapse0x2b7c620();
   input += synapse0x2b7c660();
   input += synapse0x2b7c6a0();
   input += synapse0x2b7c6e0();
   input += synapse0x2b7c720();
   input += synapse0x2b7c760();
   input += synapse0x2b7c7a0();
   input += synapse0x2b700b0();
   input += synapse0x2b700f0();
   input += synapse0x2b7c8f0();
   input += synapse0x2b7c930();
   input += synapse0x2b7c970();
   input += synapse0x2b7c9b0();
   input += synapse0x2b7c9f0();
   input += synapse0x2b7ca30();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b6ff20() {
   double input = input0x2b6ff20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b7ca70() {
   double input = -0.970146;
   input += synapse0x2b7cdb0();
   input += synapse0x2b7cdf0();
   input += synapse0x2b7ce30();
   input += synapse0x2b7ce70();
   input += synapse0x2b7ceb0();
   input += synapse0x2b7cef0();
   input += synapse0x2b7cf30();
   input += synapse0x2b7cf70();
   input += synapse0x2b7cfb0();
   input += synapse0x2b7cff0();
   input += synapse0x2b7d030();
   input += synapse0x2b7d070();
   input += synapse0x2b7d0b0();
   input += synapse0x2b7d0f0();
   input += synapse0x2b7d130();
   input += synapse0x2b7d170();
   input += synapse0x2b7cc00();
   input += synapse0x2b7cc40();
   input += synapse0x2b7d2c0();
   input += synapse0x2b7d300();
   input += synapse0x2b7d340();
   input += synapse0x2b7d380();
   input += synapse0x2b7d3c0();
   input += synapse0x2b7d400();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b7ca70() {
   double input = input0x2b7ca70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b7d440() {
   double input = -7.75163;
   input += synapse0x2b7d780();
   input += synapse0x2b7d7c0();
   input += synapse0x2b7d800();
   input += synapse0x2b7d840();
   input += synapse0x2b7d880();
   input += synapse0x2b7d8c0();
   input += synapse0x2b7d900();
   input += synapse0x2b7d940();
   input += synapse0x2b7d980();
   input += synapse0x2b7d9c0();
   input += synapse0x2b7da00();
   input += synapse0x2b7da40();
   input += synapse0x2b7da80();
   input += synapse0x2b7dac0();
   input += synapse0x2b7db00();
   input += synapse0x2b7db40();
   input += synapse0x2b7d5d0();
   input += synapse0x2b7d610();
   input += synapse0x2b7dc90();
   input += synapse0x2b7dcd0();
   input += synapse0x2b7dd10();
   input += synapse0x2b7dd50();
   input += synapse0x2b7dd90();
   input += synapse0x2b7ddd0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b7d440() {
   double input = input0x2b7d440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b7de10() {
   double input = 0.366901;
   input += synapse0x2b7e150();
   input += synapse0x2b7e190();
   input += synapse0x2b7e1d0();
   input += synapse0x2b7e210();
   input += synapse0x2b7e250();
   input += synapse0x2b7e290();
   input += synapse0x2b7e2d0();
   input += synapse0x2b7e310();
   input += synapse0x2b7e350();
   input += synapse0x2b7e390();
   input += synapse0x2b7e3d0();
   input += synapse0x2b7e410();
   input += synapse0x2b7e450();
   input += synapse0x2b7e490();
   input += synapse0x2b7e4d0();
   input += synapse0x2b7e510();
   input += synapse0x2b7dfa0();
   input += synapse0x2b7dfe0();
   input += synapse0x2b7e660();
   input += synapse0x2b7e6a0();
   input += synapse0x2b7e6e0();
   input += synapse0x2b7e720();
   input += synapse0x2b7e760();
   input += synapse0x2b7e7a0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b7de10() {
   double input = input0x2b7de10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b7e7e0() {
   double input = -2.33809;
   input += synapse0x2b7eb20();
   input += synapse0x2b7eb60();
   input += synapse0x2b7eba0();
   input += synapse0x2b7ebe0();
   input += synapse0x2b7ec20();
   input += synapse0x2b7ec60();
   input += synapse0x2b7eca0();
   input += synapse0x2b7ece0();
   input += synapse0x2b7ed20();
   input += synapse0x2b7ed60();
   input += synapse0x2b7eda0();
   input += synapse0x2b7ede0();
   input += synapse0x2b7ee20();
   input += synapse0x2b7ee60();
   input += synapse0x2b7eea0();
   input += synapse0x2b7eee0();
   input += synapse0x2b7e970();
   input += synapse0x2b7e9b0();
   input += synapse0x2b7f030();
   input += synapse0x2b7f070();
   input += synapse0x2b7f0b0();
   input += synapse0x2b7f0f0();
   input += synapse0x2b7f130();
   input += synapse0x2b7f170();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b7e7e0() {
   double input = input0x2b7e7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b7f1b0() {
   double input = -1.08048;
   input += synapse0x2b7f4f0();
   input += synapse0x2b7f530();
   input += synapse0x2b7f570();
   input += synapse0x2b7f5b0();
   input += synapse0x2b7f5f0();
   input += synapse0x2b7f630();
   input += synapse0x2b7f670();
   input += synapse0x2b7f6b0();
   input += synapse0x2b7f6f0();
   input += synapse0x2b7f730();
   input += synapse0x2b7f770();
   input += synapse0x2b7f7b0();
   input += synapse0x2b7f7f0();
   input += synapse0x2b7f830();
   input += synapse0x2b7f870();
   input += synapse0x2b7f8b0();
   input += synapse0x2b7f340();
   input += synapse0x2b7f380();
   input += synapse0x2b7fa00();
   input += synapse0x2b7fa40();
   input += synapse0x2b7fa80();
   input += synapse0x2b7fac0();
   input += synapse0x2b7fb00();
   input += synapse0x2b7fb40();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b7f1b0() {
   double input = input0x2b7f1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b7fb80() {
   double input = -0.123848;
   input += synapse0x2b7fec0();
   input += synapse0x2b7ff00();
   input += synapse0x2b7ff40();
   input += synapse0x2b7ff80();
   input += synapse0x2b7ffc0();
   input += synapse0x2b80000();
   input += synapse0x2b80040();
   input += synapse0x2b80080();
   input += synapse0x2b800c0();
   input += synapse0x2b80100();
   input += synapse0x2b80140();
   input += synapse0x2b80180();
   input += synapse0x2b801c0();
   input += synapse0x2b80200();
   input += synapse0x2b80240();
   input += synapse0x2b80280();
   input += synapse0x2b7fd10();
   input += synapse0x2b7fd50();
   input += synapse0x2b803d0();
   input += synapse0x2b80410();
   input += synapse0x2b80450();
   input += synapse0x2b80490();
   input += synapse0x2b804d0();
   input += synapse0x2b80510();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b7fb80() {
   double input = input0x2b7fb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b80550() {
   double input = 0.0713188;
   input += synapse0x2b80890();
   input += synapse0x2b808d0();
   input += synapse0x2b80910();
   input += synapse0x2b80950();
   input += synapse0x2b80990();
   input += synapse0x2b809d0();
   input += synapse0x2b80a10();
   input += synapse0x2b80a50();
   input += synapse0x2b80a90();
   input += synapse0x2b80ad0();
   input += synapse0x2b80b10();
   input += synapse0x2b80b50();
   input += synapse0x2b80b90();
   input += synapse0x2b80bd0();
   input += synapse0x2b80c10();
   input += synapse0x2b80c50();
   input += synapse0x2b806e0();
   input += synapse0x2b80720();
   input += synapse0x2b80da0();
   input += synapse0x2b80de0();
   input += synapse0x2b80e20();
   input += synapse0x2b80e60();
   input += synapse0x2b80ea0();
   input += synapse0x2b80ee0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b80550() {
   double input = input0x2b80550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b80f20() {
   double input = 0.514372;
   input += synapse0x2b69990();
   input += synapse0x2b699d0();
   input += synapse0x2b69a10();
   input += synapse0x2b69a50();
   input += synapse0x2b69a90();
   input += synapse0x2b69ad0();
   input += synapse0x2b69b10();
   input += synapse0x2b69b50();
   input += synapse0x2b81670();
   input += synapse0x2b816b0();
   input += synapse0x2b816f0();
   input += synapse0x2b81730();
   input += synapse0x2b81770();
   input += synapse0x2b817b0();
   input += synapse0x2b817f0();
   input += synapse0x2b81830();
   input += synapse0x2b810b0();
   input += synapse0x2b810f0();
   input += synapse0x2b81980();
   input += synapse0x2b819c0();
   input += synapse0x2b81a00();
   input += synapse0x2b81a40();
   input += synapse0x2b81a80();
   input += synapse0x2b81ac0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b80f20() {
   double input = input0x2b80f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b81b00() {
   double input = 0.0911176;
   input += synapse0x2b81e40();
   input += synapse0x2b81e80();
   input += synapse0x2b81ec0();
   input += synapse0x2b81f00();
   input += synapse0x2b81f40();
   input += synapse0x2b81f80();
   input += synapse0x2b81fc0();
   input += synapse0x2b82000();
   input += synapse0x2b82040();
   input += synapse0x2b82080();
   input += synapse0x2b820c0();
   input += synapse0x2b82100();
   input += synapse0x2b82140();
   input += synapse0x2b82180();
   input += synapse0x2b821c0();
   input += synapse0x2b82200();
   input += synapse0x2b81c90();
   input += synapse0x2b81cd0();
   input += synapse0x2b82350();
   input += synapse0x2b82390();
   input += synapse0x2b823d0();
   input += synapse0x2b82410();
   input += synapse0x2b82450();
   input += synapse0x2b82490();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b81b00() {
   double input = input0x2b81b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b824d0() {
   double input = 2.4581;
   input += synapse0x2b82810();
   input += synapse0x2b82850();
   input += synapse0x2b82890();
   input += synapse0x2b828d0();
   input += synapse0x2b82910();
   input += synapse0x2b82950();
   input += synapse0x2b82990();
   input += synapse0x2b829d0();
   input += synapse0x2b82a10();
   input += synapse0x2b82a50();
   input += synapse0x2b82a90();
   input += synapse0x2b82ad0();
   input += synapse0x2b82b10();
   input += synapse0x2b82b50();
   input += synapse0x2b82b90();
   input += synapse0x2b82bd0();
   input += synapse0x2b82660();
   input += synapse0x2b826a0();
   input += synapse0x2b731d0();
   input += synapse0x2b73210();
   input += synapse0x2b73250();
   input += synapse0x2b73290();
   input += synapse0x2b732d0();
   input += synapse0x2b73310();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b824d0() {
   double input = input0x2b824d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b73350() {
   double input = 0.0203515;
   input += synapse0x2b73690();
   input += synapse0x2b736d0();
   input += synapse0x2b73710();
   input += synapse0x2b73750();
   input += synapse0x2b73790();
   input += synapse0x2b737d0();
   input += synapse0x2b73810();
   input += synapse0x2b73850();
   input += synapse0x2b73890();
   input += synapse0x2b738d0();
   input += synapse0x2b73910();
   input += synapse0x2b73950();
   input += synapse0x2b73990();
   input += synapse0x2b739d0();
   input += synapse0x2b73a10();
   input += synapse0x2b73a50();
   input += synapse0x2b734e0();
   input += synapse0x2b73520();
   input += synapse0x2b73ba0();
   input += synapse0x2b73be0();
   input += synapse0x2b73c20();
   input += synapse0x2b73c60();
   input += synapse0x2b73ca0();
   input += synapse0x2b73ce0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b73350() {
   double input = input0x2b73350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b73d20() {
   double input = -0.641777;
   input += synapse0x2b74060();
   input += synapse0x2b740a0();
   input += synapse0x2b740e0();
   input += synapse0x2b74120();
   input += synapse0x2b74160();
   input += synapse0x2b741a0();
   input += synapse0x2b741e0();
   input += synapse0x2b74220();
   input += synapse0x2b74260();
   input += synapse0x2b742a0();
   input += synapse0x2b742e0();
   input += synapse0x2b74320();
   input += synapse0x2b74360();
   input += synapse0x2b743a0();
   input += synapse0x2b743e0();
   input += synapse0x2b74420();
   input += synapse0x2b73eb0();
   input += synapse0x2b73ef0();
   input += synapse0x2b74570();
   input += synapse0x2b745b0();
   input += synapse0x2b745f0();
   input += synapse0x2b74630();
   input += synapse0x2b74670();
   input += synapse0x2b746b0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b73d20() {
   double input = input0x2b73d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b746f0() {
   double input = 0.884645;
   input += synapse0x2b74a30();
   input += synapse0x2b74a70();
   input += synapse0x2b74ab0();
   input += synapse0x2b74af0();
   input += synapse0x2b74b30();
   input += synapse0x2b74b70();
   input += synapse0x2b74bb0();
   input += synapse0x2b74bf0();
   input += synapse0x2b74c30();
   input += synapse0x2b74c70();
   input += synapse0x2b74cb0();
   input += synapse0x2b74cf0();
   input += synapse0x2b74d30();
   input += synapse0x2b74d70();
   input += synapse0x2b74db0();
   input += synapse0x2b74df0();
   input += synapse0x2b74880();
   input += synapse0x2b748c0();
   input += synapse0x2b74f40();
   input += synapse0x2b74f80();
   input += synapse0x2b74fc0();
   input += synapse0x2b75000();
   input += synapse0x2b75040();
   input += synapse0x2b75080();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b746f0() {
   double input = input0x2b746f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b86d30() {
   double input = 0.579549;
   input += synapse0x2b86f50();
   input += synapse0x2b86f90();
   input += synapse0x2b86fd0();
   input += synapse0x2b87010();
   input += synapse0x2b87050();
   input += synapse0x2b87090();
   input += synapse0x2b870d0();
   input += synapse0x2b87110();
   input += synapse0x2b87150();
   input += synapse0x2b87190();
   input += synapse0x2b871d0();
   input += synapse0x2b87210();
   input += synapse0x2b87250();
   input += synapse0x2b87290();
   input += synapse0x2b872d0();
   input += synapse0x2b87310();
   input += synapse0x2b750c0();
   input += synapse0x2b75100();
   input += synapse0x2b87460();
   input += synapse0x2b874a0();
   input += synapse0x2b874e0();
   input += synapse0x2b87520();
   input += synapse0x2b87560();
   input += synapse0x2b875a0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b86d30() {
   double input = input0x2b86d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b875e0() {
   double input = -0.21075;
   input += synapse0x2b87920();
   input += synapse0x2b87960();
   input += synapse0x2b879a0();
   input += synapse0x2b879e0();
   input += synapse0x2b87a20();
   input += synapse0x2b87a60();
   input += synapse0x2b87aa0();
   input += synapse0x2b87ae0();
   input += synapse0x2b87b20();
   input += synapse0x2b87b60();
   input += synapse0x2b87ba0();
   input += synapse0x2b87be0();
   input += synapse0x2b87c20();
   input += synapse0x2b87c60();
   input += synapse0x2b87ca0();
   input += synapse0x2b87ce0();
   input += synapse0x2b87770();
   input += synapse0x2b877b0();
   input += synapse0x2b87e30();
   input += synapse0x2b87e70();
   input += synapse0x2b87eb0();
   input += synapse0x2b87ef0();
   input += synapse0x2b87f30();
   input += synapse0x2b87f70();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b875e0() {
   double input = input0x2b875e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b87fb0() {
   double input = -1.93115;
   input += synapse0x2b882f0();
   input += synapse0x2b88330();
   input += synapse0x2b88370();
   input += synapse0x2b883b0();
   input += synapse0x2b883f0();
   input += synapse0x2b88430();
   input += synapse0x2b88470();
   input += synapse0x2b884b0();
   input += synapse0x2b884f0();
   input += synapse0x2b88530();
   input += synapse0x2b88570();
   input += synapse0x2b885b0();
   input += synapse0x2b885f0();
   input += synapse0x2b88630();
   input += synapse0x2b88670();
   input += synapse0x2b886b0();
   input += synapse0x2b88140();
   input += synapse0x2b88180();
   input += synapse0x2b88800();
   input += synapse0x2b88840();
   input += synapse0x2b88880();
   input += synapse0x2b888c0();
   input += synapse0x2b88900();
   input += synapse0x2b88940();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b87fb0() {
   double input = input0x2b87fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b88980() {
   double input = 0.0953276;
   input += synapse0x2b88cc0();
   input += synapse0x2b88d00();
   input += synapse0x2b88d40();
   input += synapse0x2b88d80();
   input += synapse0x2b88dc0();
   input += synapse0x2b88e00();
   input += synapse0x2b88e40();
   input += synapse0x2b88e80();
   input += synapse0x2b88ec0();
   input += synapse0x2b88f00();
   input += synapse0x2b88f40();
   input += synapse0x2b88f80();
   input += synapse0x2b88fc0();
   input += synapse0x2b89000();
   input += synapse0x2b89040();
   input += synapse0x2b89080();
   input += synapse0x2b88b10();
   input += synapse0x2b88b50();
   input += synapse0x2b891d0();
   input += synapse0x2b89210();
   input += synapse0x2b89250();
   input += synapse0x2b89290();
   input += synapse0x2b892d0();
   input += synapse0x2b89310();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b88980() {
   double input = input0x2b88980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b8fb80() {
   double input = -0.901882;
   input += synapse0x2929220();
   input += synapse0x2929260();
   input += synapse0x2b66dc0();
   input += synapse0x2b66e00();
   input += synapse0x2b67790();
   input += synapse0x2b677d0();
   input += synapse0x2b68560();
   input += synapse0x2b685a0();
   input += synapse0x2b68f30();
   input += synapse0x2b68f70();
   input += synapse0x2b69900();
   input += synapse0x2b69940();
   input += synapse0x2b6a3e0();
   input += synapse0x2b6a420();
   input += synapse0x2b6adb0();
   input += synapse0x2b6adf0();
   input += synapse0x2b67e90();
   input += synapse0x2b67ed0();
   input += synapse0x2b6c960();
   input += synapse0x2b6c9a0();
   input += synapse0x2b6d330();
   input += synapse0x2b6d370();
   input += synapse0x2b6dd00();
   input += synapse0x2b6dd40();
   input += synapse0x2b6e6d0();
   input += synapse0x2b6e710();
   input += synapse0x2b62870();
   input += synapse0x2b628b0();
   input += synapse0x2b707c0();
   input += synapse0x2b70800();
   input += synapse0x2b71190();
   input += synapse0x2b711d0();
   input += synapse0x2b71b60();
   input += synapse0x2b71ba0();
   input += synapse0x2b72530();
   input += synapse0x2b72570();
   input += synapse0x2b72f00();
   input += synapse0x2b72f40();
   input += synapse0x2b6ba50();
   input += synapse0x2b6ba90();
   input += synapse0x2b75300();
   input += synapse0x2b75340();
   input += synapse0x2b75c90();
   input += synapse0x2b75cd0();
   input += synapse0x2b76660();
   input += synapse0x2b766a0();
   input += synapse0x2b77030();
   input += synapse0x2b77070();
   input += synapse0x2b77a00();
   input += synapse0x2b77a40();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b8fb80() {
   double input = input0x2b8fb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b8ff20() {
   double input = -1.06477;
   input += synapse0x2b7a140();
   input += synapse0x2b7a180();
   input += synapse0x2b6f700();
   input += synapse0x2b6f740();
   input += synapse0x2b7cd20();
   input += synapse0x2b7cd60();
   input += synapse0x2b7d6f0();
   input += synapse0x2b7d730();
   input += synapse0x2b7e0c0();
   input += synapse0x2b7e100();
   input += synapse0x2b7ea90();
   input += synapse0x2b7ead0();
   input += synapse0x2b7f460();
   input += synapse0x2b7f4a0();
   input += synapse0x2b7fe30();
   input += synapse0x2b7fe70();
   input += synapse0x2b80800();
   input += synapse0x2b80840();
   input += synapse0x2b811d0();
   input += synapse0x2b81210();
   input += synapse0x2b81db0();
   input += synapse0x2b81df0();
   input += synapse0x2b82780();
   input += synapse0x2b827c0();
   input += synapse0x2b73600();
   input += synapse0x2b73640();
   input += synapse0x2b73fd0();
   input += synapse0x2b74010();
   input += synapse0x2b749a0();
   input += synapse0x2b749e0();
   input += synapse0x2b86ec0();
   input += synapse0x2b86f00();
   input += synapse0x2b87890();
   input += synapse0x2b878d0();
   input += synapse0x2b88260();
   input += synapse0x2b882a0();
   input += synapse0x2b88c30();
   input += synapse0x2b88c70();
   input += synapse0x2b64b20();
   input += synapse0x2b64b60();
   input += synapse0x2b783d0();
   input += synapse0x2b78410();
   input += synapse0x2b89350();
   input += synapse0x2b89390();
   input += synapse0x2b893d0();
   input += synapse0x2b89410();
   input += synapse0x2b902c0();
   input += synapse0x2b90300();
   input += synapse0x2b90340();
   input += synapse0x2b90380();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b8ff20() {
   double input = input0x2b8ff20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b903c0() {
   double input = -0.2423;
   input += synapse0x2b90700();
   input += synapse0x2b90740();
   input += synapse0x2b90780();
   input += synapse0x2b907c0();
   input += synapse0x2b90800();
   input += synapse0x2b90840();
   input += synapse0x2b90880();
   input += synapse0x2b908c0();
   input += synapse0x2b90900();
   input += synapse0x2b90940();
   input += synapse0x2b90980();
   input += synapse0x2b909c0();
   input += synapse0x2b90a00();
   input += synapse0x2b90a40();
   input += synapse0x2b90a80();
   input += synapse0x2b90ac0();
   input += synapse0x2b90550();
   input += synapse0x2b90590();
   input += synapse0x2b90c10();
   input += synapse0x2b90c50();
   input += synapse0x2b90c90();
   input += synapse0x2b90cd0();
   input += synapse0x2b90d10();
   input += synapse0x2b90d50();
   input += synapse0x2b90d90();
   input += synapse0x2b90dd0();
   input += synapse0x2b90e10();
   input += synapse0x2b90e50();
   input += synapse0x2b90e90();
   input += synapse0x2b90ed0();
   input += synapse0x2b90f10();
   input += synapse0x2b90f50();
   input += synapse0x2b90b00();
   input += synapse0x2b90b40();
   input += synapse0x2b90b80();
   input += synapse0x2b90bc0();
   input += synapse0x2b911a0();
   input += synapse0x2b911e0();
   input += synapse0x2b91220();
   input += synapse0x2b91260();
   input += synapse0x2b912a0();
   input += synapse0x2b912e0();
   input += synapse0x2b91320();
   input += synapse0x2b91360();
   input += synapse0x2b913a0();
   input += synapse0x2b913e0();
   input += synapse0x2b91420();
   input += synapse0x2b91460();
   input += synapse0x2b914a0();
   input += synapse0x2b914e0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b903c0() {
   double input = input0x2b903c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b91520() {
   double input = 1.27023;
   input += synapse0x2b91860();
   input += synapse0x2b918a0();
   input += synapse0x2b918e0();
   input += synapse0x2b91920();
   input += synapse0x2b91960();
   input += synapse0x2b919a0();
   input += synapse0x2b919e0();
   input += synapse0x2b91a20();
   input += synapse0x2b91a60();
   input += synapse0x2b91aa0();
   input += synapse0x2b91ae0();
   input += synapse0x2b91b20();
   input += synapse0x2b91b60();
   input += synapse0x2b91ba0();
   input += synapse0x2b91be0();
   input += synapse0x2b91c20();
   input += synapse0x2b916b0();
   input += synapse0x2b916f0();
   input += synapse0x2b91d70();
   input += synapse0x2b91db0();
   input += synapse0x2b91df0();
   input += synapse0x2b91e30();
   input += synapse0x2b91e70();
   input += synapse0x2b91eb0();
   input += synapse0x2b91ef0();
   input += synapse0x2b91f30();
   input += synapse0x2b91f70();
   input += synapse0x2b91fb0();
   input += synapse0x2b91ff0();
   input += synapse0x2b92030();
   input += synapse0x2b92070();
   input += synapse0x2b920b0();
   input += synapse0x2b91c60();
   input += synapse0x2b91ca0();
   input += synapse0x2b91ce0();
   input += synapse0x2b91d20();
   input += synapse0x2b92300();
   input += synapse0x2b92340();
   input += synapse0x2b92380();
   input += synapse0x2b923c0();
   input += synapse0x2b92400();
   input += synapse0x2b92440();
   input += synapse0x2b92480();
   input += synapse0x2b924c0();
   input += synapse0x2b92500();
   input += synapse0x2b92540();
   input += synapse0x2b92580();
   input += synapse0x2b925c0();
   input += synapse0x2b92600();
   input += synapse0x2b92640();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b91520() {
   double input = input0x2b91520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b92680() {
   double input = 0.89791;
   input += synapse0x2b929c0();
   input += synapse0x2b92a00();
   input += synapse0x2b92a40();
   input += synapse0x2b92a80();
   input += synapse0x2b92ac0();
   input += synapse0x2b92b00();
   input += synapse0x2b92b40();
   input += synapse0x2b92b80();
   input += synapse0x2b92bc0();
   input += synapse0x2b92c00();
   input += synapse0x2b92c40();
   input += synapse0x2b92c80();
   input += synapse0x2b92cc0();
   input += synapse0x2b92d00();
   input += synapse0x2b92d40();
   input += synapse0x2b92d80();
   input += synapse0x2b92810();
   input += synapse0x2b92850();
   input += synapse0x2b92ed0();
   input += synapse0x2b92f10();
   input += synapse0x2b92f50();
   input += synapse0x2b92f90();
   input += synapse0x2b92fd0();
   input += synapse0x2b93010();
   input += synapse0x2b93050();
   input += synapse0x2b93090();
   input += synapse0x2b930d0();
   input += synapse0x2b93110();
   input += synapse0x2b93150();
   input += synapse0x2b93190();
   input += synapse0x2b931d0();
   input += synapse0x2b93210();
   input += synapse0x2b92dc0();
   input += synapse0x2b92e00();
   input += synapse0x2b92e40();
   input += synapse0x2b92e80();
   input += synapse0x2b93460();
   input += synapse0x2b934a0();
   input += synapse0x2b934e0();
   input += synapse0x2b93520();
   input += synapse0x2b93560();
   input += synapse0x2b935a0();
   input += synapse0x2b935e0();
   input += synapse0x2b93620();
   input += synapse0x2b93660();
   input += synapse0x2b936a0();
   input += synapse0x2b936e0();
   input += synapse0x2b93720();
   input += synapse0x2b93760();
   input += synapse0x2b937a0();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b92680() {
   double input = input0x2b92680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::input0x2b937e0() {
   double input = 3.67532;
   input += synapse0x2b93a00();
   input += synapse0x2b93a40();
   input += synapse0x2b93a80();
   input += synapse0x2b93ac0();
   input += synapse0x2b93b00();
   return input;
}

double NNfunction_ns_chiMinus1_cL::neuron0x2b937e0() {
   double input = input0x2b937e0();
   return (input * 1)+0;
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b5f790() {
   return (neuron0x2b5f8d0()*-0.040161);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b5f7d0() {
   return (neuron0x2b5fc10()*0.164084);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64bb0() {
   return (neuron0x2b5ff50()*-0.0184823);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64bf0() {
   return (neuron0x2b60290()*0.824266);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64c30() {
   return (neuron0x2b605d0()*-0.159111);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64c70() {
   return (neuron0x2b60910()*-0.0709248);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64cb0() {
   return (neuron0x2b60c50()*0.162146);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64cf0() {
   return (neuron0x2b60f90()*0.158516);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64d30() {
   return (neuron0x2b612d0()*-0.000633898);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64d70() {
   return (neuron0x2b61610()*-0.0662048);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64db0() {
   return (neuron0x2b61950()*-0.017812);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64df0() {
   return (neuron0x2b61c90()*0.313103);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64e30() {
   return (neuron0x2b61fd0()*-0.177068);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64e70() {
   return (neuron0x2b62310()*-0.0340895);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64eb0() {
   return (neuron0x2b62650()*-0.17693);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64ef0() {
   return (neuron0x2b62990()*0.0388352);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b5f700() {
   return (neuron0x2b62cd0()*-0.178823);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b5f740() {
   return (neuron0x2b63230()*0.143297);
}

double NNfunction_ns_chiMinus1_cL::synapse0x291abd0() {
   return (neuron0x2b63450()*0.0905588);
}

double NNfunction_ns_chiMinus1_cL::synapse0x291ac10() {
   return (neuron0x2b63790()*0.0791556);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65150() {
   return (neuron0x2b63ad0()*-0.0346733);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65190() {
   return (neuron0x2b63e10()*-0.00453738);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b651d0() {
   return (neuron0x2b64150()*-0.0388175);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65210() {
   return (neuron0x2b64490()*0.0755817);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65590() {
   return (neuron0x2b5f8d0()*-0.0991728);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b655d0() {
   return (neuron0x2b5fc10()*-0.006345);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65610() {
   return (neuron0x2b5ff50()*5.4582);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65650() {
   return (neuron0x2b60290()*-0.00474723);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65690() {
   return (neuron0x2b605d0()*-0.00956365);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b656d0() {
   return (neuron0x2b60910()*0.00847143);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65710() {
   return (neuron0x2b60c50()*0.0119617);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65750() {
   return (neuron0x2b60f90()*0.000736335);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65790() {
   return (neuron0x2b612d0()*0.000214219);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65040() {
   return (neuron0x2b61610()*0.00465832);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65080() {
   return (neuron0x2b61950()*0.00651581);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b650c0() {
   return (neuron0x2b61c90()*0.0368618);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65100() {
   return (neuron0x2b61fd0()*-0.375943);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b659e0() {
   return (neuron0x2b62310()*0.00669948);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65a20() {
   return (neuron0x2b62650()*-0.00020839);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65a60() {
   return (neuron0x2b62990()*-0.00732838);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b653e0() {
   return (neuron0x2b62cd0()*0.0124851);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65420() {
   return (neuron0x2b63230()*-0.0028745);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65bb0() {
   return (neuron0x2b63450()*0.00218073);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65bf0() {
   return (neuron0x2b63790()*-0.00409688);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65c30() {
   return (neuron0x2b63ad0()*0.00912292);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65c70() {
   return (neuron0x2b63e10()*0.00934805);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65cb0() {
   return (neuron0x2b64150()*0.00470153);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65cf0() {
   return (neuron0x2b64490()*6.62603);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66070() {
   return (neuron0x2b5f8d0()*-0.00132047);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b660b0() {
   return (neuron0x2b5fc10()*-0.00411701);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b660f0() {
   return (neuron0x2b5ff50()*0.0877587);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66130() {
   return (neuron0x2b60290()*-3.13012);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66170() {
   return (neuron0x2b605d0()*0.000639134);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b661b0() {
   return (neuron0x2b60910()*0.00013505);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b661f0() {
   return (neuron0x2b60c50()*0.00393007);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66230() {
   return (neuron0x2b60f90()*-0.00113337);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66270() {
   return (neuron0x2b612d0()*-0.00569241);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b662b0() {
   return (neuron0x2b61610()*0.000539012);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b662f0() {
   return (neuron0x2b61950()*-0.00148772);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66330() {
   return (neuron0x2b61c90()*-0.00242129);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66370() {
   return (neuron0x2b61fd0()*0.311111);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b663b0() {
   return (neuron0x2b62310()*0.0313572);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b663f0() {
   return (neuron0x2b62650()*0.00447124);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66430() {
   return (neuron0x2b62990()*0.0187617);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65ec0() {
   return (neuron0x2b62cd0()*0.0276233);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65f00() {
   return (neuron0x2b63230()*-0.0135649);
}

double NNfunction_ns_chiMinus1_cL::synapse0x291b160() {
   return (neuron0x2b63450()*-0.0078236);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2928a30() {
   return (neuron0x2b63790()*-0.00985153);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2928a70() {
   return (neuron0x2b63ad0()*-0.00121336);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b4e960() {
   return (neuron0x2b63e10()*0.00234281);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b4e9a0() {
   return (neuron0x2b64150()*-0.00242562);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b4e9e0() {
   return (neuron0x2b64490()*0.00538339);
}

double NNfunction_ns_chiMinus1_cL::synapse0x29292b0() {
   return (neuron0x2b5f8d0()*-0.00158564);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b65960() {
   return (neuron0x2b5fc10()*0.0020796);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b659a0() {
   return (neuron0x2b5ff50()*-0.0484148);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66580() {
   return (neuron0x2b60290()*-0.120832);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b665c0() {
   return (neuron0x2b605d0()*-0.0174035);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66600() {
   return (neuron0x2b60910()*0.00626134);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66640() {
   return (neuron0x2b60c50()*-0.00927915);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66680() {
   return (neuron0x2b60f90()*-0.0197593);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b666c0() {
   return (neuron0x2b612d0()*0.00881979);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66700() {
   return (neuron0x2b61610()*0.00863205);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66740() {
   return (neuron0x2b61950()*0.00674629);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66780() {
   return (neuron0x2b61c90()*-0.000479074);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b667c0() {
   return (neuron0x2b61fd0()*3.22844);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66800() {
   return (neuron0x2b62310()*0.0172954);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66840() {
   return (neuron0x2b62650()*-0.0220299);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66880() {
   return (neuron0x2b62990()*-0.00907511);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b5f810() {
   return (neuron0x2b62cd0()*0.0178571);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b5f850() {
   return (neuron0x2b63230()*0.0131864);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b5f890() {
   return (neuron0x2b63450()*0.00801676);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b669d0() {
   return (neuron0x2b63790()*0.016657);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66a10() {
   return (neuron0x2b63ad0()*-0.00957862);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66a50() {
   return (neuron0x2b63e10()*-0.0030585);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66a90() {
   return (neuron0x2b64150()*0.00617803);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66ad0() {
   return (neuron0x2b64490()*-0.00866101);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66e50() {
   return (neuron0x2b5f8d0()*-0.0527349);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66e90() {
   return (neuron0x2b5fc10()*0.0278496);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66ed0() {
   return (neuron0x2b5ff50()*-0.677953);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66f10() {
   return (neuron0x2b60290()*0.284494);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66f50() {
   return (neuron0x2b605d0()*-0.0764631);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66f90() {
   return (neuron0x2b60910()*-0.102229);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66fd0() {
   return (neuron0x2b60c50()*0.0765397);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67010() {
   return (neuron0x2b60f90()*-0.553971);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67050() {
   return (neuron0x2b612d0()*-0.0370988);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67090() {
   return (neuron0x2b61610()*-0.111298);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b670d0() {
   return (neuron0x2b61950()*0.0207771);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67110() {
   return (neuron0x2b61c90()*0.0790578);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67150() {
   return (neuron0x2b61fd0()*0.872997);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67190() {
   return (neuron0x2b62310()*0.00893497);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b671d0() {
   return (neuron0x2b62650()*-0.100777);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67210() {
   return (neuron0x2b62990()*-0.00848484);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66ca0() {
   return (neuron0x2b62cd0()*-0.0663903);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66ce0() {
   return (neuron0x2b63230()*-0.000906629);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67360() {
   return (neuron0x2b63450()*-0.00163316);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b673a0() {
   return (neuron0x2b63790()*0.00980004);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b673e0() {
   return (neuron0x2b63ad0()*-0.053922);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67420() {
   return (neuron0x2b63e10()*0.01778);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67460() {
   return (neuron0x2b64150()*0.0327624);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b674a0() {
   return (neuron0x2b64490()*-0.00224288);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67820() {
   return (neuron0x2b5f8d0()*0.00224226);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67860() {
   return (neuron0x2b5fc10()*-0.0240145);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b678a0() {
   return (neuron0x2b5ff50()*-0.603267);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b678e0() {
   return (neuron0x2b60290()*0.451757);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67920() {
   return (neuron0x2b605d0()*0.0217769);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67960() {
   return (neuron0x2b60910()*0.0562096);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b679a0() {
   return (neuron0x2b60c50()*-0.36225);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b679e0() {
   return (neuron0x2b60f90()*-0.096963);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67a20() {
   return (neuron0x2b612d0()*-0.0160206);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2928d80() {
   return (neuron0x2b61610()*0.00730272);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2928dc0() {
   return (neuron0x2b61950()*-0.00967865);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2928e00() {
   return (neuron0x2b61c90()*-0.0369192);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2928e40() {
   return (neuron0x2b61fd0()*0.296249);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2928e80() {
   return (neuron0x2b62310()*0.00210008);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2928ec0() {
   return (neuron0x2b62650()*-0.203788);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2928f00() {
   return (neuron0x2b62990()*-0.178262);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67670() {
   return (neuron0x2b62cd0()*0.162559);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b676b0() {
   return (neuron0x2b63230()*-0.00780056);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2929050() {
   return (neuron0x2b63450()*0.000679062);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2929090() {
   return (neuron0x2b63790()*-0.00619995);
}

double NNfunction_ns_chiMinus1_cL::synapse0x29290d0() {
   return (neuron0x2b63ad0()*-0.00472412);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2929110() {
   return (neuron0x2b63e10()*0.0282923);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2929150() {
   return (neuron0x2b64150()*0.0166899);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68270() {
   return (neuron0x2b64490()*-0.144753);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b685f0() {
   return (neuron0x2b5f8d0()*-0.0602139);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68630() {
   return (neuron0x2b5fc10()*0.0612835);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68670() {
   return (neuron0x2b5ff50()*0.188201);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b686b0() {
   return (neuron0x2b60290()*-0.513019);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b686f0() {
   return (neuron0x2b605d0()*0.145267);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68730() {
   return (neuron0x2b60910()*-0.221269);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68770() {
   return (neuron0x2b60c50()*-0.0942862);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b687b0() {
   return (neuron0x2b60f90()*-0.158529);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b687f0() {
   return (neuron0x2b612d0()*-0.044737);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68830() {
   return (neuron0x2b61610()*-0.0903981);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68870() {
   return (neuron0x2b61950()*-0.0503997);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b688b0() {
   return (neuron0x2b61c90()*-0.148812);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b688f0() {
   return (neuron0x2b61fd0()*0.0977493);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68930() {
   return (neuron0x2b62310()*-0.185738);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68970() {
   return (neuron0x2b62650()*0.0870233);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b689b0() {
   return (neuron0x2b62990()*0.195774);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68440() {
   return (neuron0x2b62cd0()*-0.110064);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68480() {
   return (neuron0x2b63230()*0.150714);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68b00() {
   return (neuron0x2b63450()*0.244783);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68b40() {
   return (neuron0x2b63790()*0.0887334);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68b80() {
   return (neuron0x2b63ad0()*-0.0330278);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68bc0() {
   return (neuron0x2b63e10()*0.200245);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68c00() {
   return (neuron0x2b64150()*-0.03853);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68c40() {
   return (neuron0x2b64490()*-0.123808);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68fc0() {
   return (neuron0x2b5f8d0()*0.0136742);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69000() {
   return (neuron0x2b5fc10()*-0.0190366);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69040() {
   return (neuron0x2b5ff50()*-0.585763);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69080() {
   return (neuron0x2b60290()*0.591502);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b690c0() {
   return (neuron0x2b605d0()*0.300803);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69100() {
   return (neuron0x2b60910()*-0.15849);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69140() {
   return (neuron0x2b60c50()*0.199131);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69180() {
   return (neuron0x2b60f90()*0.00842653);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b691c0() {
   return (neuron0x2b612d0()*-0.0346878);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69200() {
   return (neuron0x2b61610()*0.00881896);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69240() {
   return (neuron0x2b61950()*0.20705);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69280() {
   return (neuron0x2b61c90()*-0.0186069);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b692c0() {
   return (neuron0x2b61fd0()*-0.246946);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69300() {
   return (neuron0x2b62310()*0.16113);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69340() {
   return (neuron0x2b62650()*0.114904);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69380() {
   return (neuron0x2b62990()*-0.149668);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68e10() {
   return (neuron0x2b62cd0()*-0.0565231);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68e50() {
   return (neuron0x2b63230()*0.125196);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b694d0() {
   return (neuron0x2b63450()*0.048919);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69510() {
   return (neuron0x2b63790()*0.0418792);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69550() {
   return (neuron0x2b63ad0()*0.0479241);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69590() {
   return (neuron0x2b63e10()*0.00868174);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b695d0() {
   return (neuron0x2b64150()*-0.0377824);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69610() {
   return (neuron0x2b64490()*-0.14436);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b63120() {
   return (neuron0x2b5f8d0()*0.0909468);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b63160() {
   return (neuron0x2b5fc10()*0.00551824);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b631a0() {
   return (neuron0x2b5ff50()*-0.163466);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b631e0() {
   return (neuron0x2b60290()*-0.112168);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69ba0() {
   return (neuron0x2b605d0()*0.130765);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69be0() {
   return (neuron0x2b60910()*-0.21311);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69c20() {
   return (neuron0x2b60c50()*-0.0761476);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69c60() {
   return (neuron0x2b60f90()*-0.134437);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69ca0() {
   return (neuron0x2b612d0()*0.0671913);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69ce0() {
   return (neuron0x2b61610()*0.0561229);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69d20() {
   return (neuron0x2b61950()*0.101693);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69d60() {
   return (neuron0x2b61c90()*-0.187614);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69da0() {
   return (neuron0x2b61fd0()*-0.419546);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69de0() {
   return (neuron0x2b62310()*-0.205265);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69e20() {
   return (neuron0x2b62650()*-0.0568172);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69e60() {
   return (neuron0x2b62990()*0.92801);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b697e0() {
   return (neuron0x2b62cd0()*-0.158412);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69820() {
   return (neuron0x2b63230()*-0.00400664);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69fb0() {
   return (neuron0x2b63450()*-0.00913967);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69ff0() {
   return (neuron0x2b63790()*-0.126349);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a030() {
   return (neuron0x2b63ad0()*0.0405077);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a070() {
   return (neuron0x2b63e10()*-0.105815);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a0b0() {
   return (neuron0x2b64150()*-0.0352566);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a0f0() {
   return (neuron0x2b64490()*0.0951133);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a470() {
   return (neuron0x2b5f8d0()*-0.00629933);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a4b0() {
   return (neuron0x2b5fc10()*-0.00298669);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a4f0() {
   return (neuron0x2b5ff50()*-1.2284);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a530() {
   return (neuron0x2b60290()*0.0243556);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a570() {
   return (neuron0x2b605d0()*-0.00349345);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a5b0() {
   return (neuron0x2b60910()*0.000409116);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a5f0() {
   return (neuron0x2b60c50()*-0.00228888);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a630() {
   return (neuron0x2b60f90()*0.00213088);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a670() {
   return (neuron0x2b612d0()*-0.015278);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a6b0() {
   return (neuron0x2b61610()*-0.00874131);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a6f0() {
   return (neuron0x2b61950()*-0.0153198);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a730() {
   return (neuron0x2b61c90()*-0.00602572);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a770() {
   return (neuron0x2b61fd0()*0.403921);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a7b0() {
   return (neuron0x2b62310()*-0.00146659);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a7f0() {
   return (neuron0x2b62650()*-0.00868117);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a830() {
   return (neuron0x2b62990()*0.00557382);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a2c0() {
   return (neuron0x2b62cd0()*0.00643509);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a300() {
   return (neuron0x2b63230()*0.00536465);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a980() {
   return (neuron0x2b63450()*-0.00220714);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a9c0() {
   return (neuron0x2b63790()*0.000941823);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6aa00() {
   return (neuron0x2b63ad0()*0.00105938);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6aa40() {
   return (neuron0x2b63e10()*-0.013143);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6aa80() {
   return (neuron0x2b64150()*-0.00115202);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6aac0() {
   return (neuron0x2b64490()*-0.111658);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6ae40() {
   return (neuron0x2b5f8d0()*0.0301471);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6ae80() {
   return (neuron0x2b5fc10()*0.0307939);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6aec0() {
   return (neuron0x2b5ff50()*1.10948);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6af00() {
   return (neuron0x2b60290()*0.107781);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6af40() {
   return (neuron0x2b605d0()*-0.0390865);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6af80() {
   return (neuron0x2b60910()*0.0588632);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6afc0() {
   return (neuron0x2b60c50()*0.0354922);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b000() {
   return (neuron0x2b60f90()*-0.0142246);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b040() {
   return (neuron0x2b612d0()*-0.0185391);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b080() {
   return (neuron0x2b61610()*0.0325667);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b0c0() {
   return (neuron0x2b61950()*-0.0454778);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b100() {
   return (neuron0x2b61c90()*0.0187964);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b140() {
   return (neuron0x2b61fd0()*0.568363);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b180() {
   return (neuron0x2b62310()*-0.0205141);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b1c0() {
   return (neuron0x2b62650()*0.0846668);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b200() {
   return (neuron0x2b62990()*0.0473081);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6ac90() {
   return (neuron0x2b62cd0()*0.023609);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6acd0() {
   return (neuron0x2b63230()*0.0293147);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67a60() {
   return (neuron0x2b63450()*-0.0266595);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67aa0() {
   return (neuron0x2b63790()*-0.0459396);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67ae0() {
   return (neuron0x2b63ad0()*-0.0127749);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67b20() {
   return (neuron0x2b63e10()*0.0245533);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67b60() {
   return (neuron0x2b64150()*0.0102397);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67ba0() {
   return (neuron0x2b64490()*-0.492542);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67f20() {
   return (neuron0x2b5f8d0()*0.114109);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67f60() {
   return (neuron0x2b5fc10()*-0.0226593);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67fa0() {
   return (neuron0x2b5ff50()*-0.24467);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67fe0() {
   return (neuron0x2b60290()*-0.0944402);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68020() {
   return (neuron0x2b605d0()*-0.0535444);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68060() {
   return (neuron0x2b60910()*0.0869499);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b680a0() {
   return (neuron0x2b60c50()*-0.0735525);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b680e0() {
   return (neuron0x2b60f90()*0.245958);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68120() {
   return (neuron0x2b612d0()*0.0288817);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68160() {
   return (neuron0x2b61610()*0.22072);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b681a0() {
   return (neuron0x2b61950()*0.064377);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b681e0() {
   return (neuron0x2b61c90()*0.37807);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68220() {
   return (neuron0x2b61fd0()*-0.19022);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c360() {
   return (neuron0x2b62310()*-0.803924);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c3a0() {
   return (neuron0x2b62650()*0.231059);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c3e0() {
   return (neuron0x2b62990()*0.20504);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67d70() {
   return (neuron0x2b62cd0()*-0.679177);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67db0() {
   return (neuron0x2b63230()*0.101437);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c530() {
   return (neuron0x2b63450()*0.0405828);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c570() {
   return (neuron0x2b63790()*0.219136);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c5b0() {
   return (neuron0x2b63ad0()*-0.0203611);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c5f0() {
   return (neuron0x2b63e10()*-0.0446436);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c630() {
   return (neuron0x2b64150()*0.00805841);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c670() {
   return (neuron0x2b64490()*0.0832337);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c9f0() {
   return (neuron0x2b5f8d0()*0.0409656);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6ca30() {
   return (neuron0x2b5fc10()*0.00488435);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6ca70() {
   return (neuron0x2b5ff50()*-0.197675);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6cab0() {
   return (neuron0x2b60290()*-3.00422);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6caf0() {
   return (neuron0x2b605d0()*-0.00553596);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6cb30() {
   return (neuron0x2b60910()*0.0368645);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6cb70() {
   return (neuron0x2b60c50()*-0.0724617);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6cbb0() {
   return (neuron0x2b60f90()*-0.0514133);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6cbf0() {
   return (neuron0x2b612d0()*0.0141182);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6cc30() {
   return (neuron0x2b61610()*0.00533192);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6cc70() {
   return (neuron0x2b61950()*0.00958407);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6ccb0() {
   return (neuron0x2b61c90()*-0.0774293);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6ccf0() {
   return (neuron0x2b61fd0()*1.27999);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6cd30() {
   return (neuron0x2b62310()*0.0131707);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6cd70() {
   return (neuron0x2b62650()*-0.0327774);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6cdb0() {
   return (neuron0x2b62990()*-0.0613978);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c840() {
   return (neuron0x2b62cd0()*0.0130259);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c880() {
   return (neuron0x2b63230()*0.023789);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6cf00() {
   return (neuron0x2b63450()*-0.0048908);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6cf40() {
   return (neuron0x2b63790()*-0.000764898);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6cf80() {
   return (neuron0x2b63ad0()*-0.0160011);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6cfc0() {
   return (neuron0x2b63e10()*0.00260104);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d000() {
   return (neuron0x2b64150()*0.00355863);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d040() {
   return (neuron0x2b64490()*0.0117309);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d3c0() {
   return (neuron0x2b5f8d0()*-0.052654);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d400() {
   return (neuron0x2b5fc10()*-0.0215796);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d440() {
   return (neuron0x2b5ff50()*-0.432468);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d480() {
   return (neuron0x2b60290()*0.189886);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d4c0() {
   return (neuron0x2b605d0()*-0.20416);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d500() {
   return (neuron0x2b60910()*-0.200725);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d540() {
   return (neuron0x2b60c50()*-0.611004);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d580() {
   return (neuron0x2b60f90()*-0.300589);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d5c0() {
   return (neuron0x2b612d0()*-0.873531);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d600() {
   return (neuron0x2b61610()*0.200785);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d640() {
   return (neuron0x2b61950()*-0.186294);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d680() {
   return (neuron0x2b61c90()*-0.00946552);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d6c0() {
   return (neuron0x2b61fd0()*0.762248);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d700() {
   return (neuron0x2b62310()*-0.445373);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d740() {
   return (neuron0x2b62650()*-0.0769997);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d780() {
   return (neuron0x2b62990()*-0.0606542);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d210() {
   return (neuron0x2b62cd0()*0.590787);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d250() {
   return (neuron0x2b63230()*-0.0623703);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d8d0() {
   return (neuron0x2b63450()*0.0913506);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d910() {
   return (neuron0x2b63790()*0.0904743);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d950() {
   return (neuron0x2b63ad0()*0.0529604);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d990() {
   return (neuron0x2b63e10()*0.324235);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d9d0() {
   return (neuron0x2b64150()*0.167729);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6da10() {
   return (neuron0x2b64490()*-0.833005);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6dd90() {
   return (neuron0x2b5f8d0()*-0.0702028);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6ddd0() {
   return (neuron0x2b5fc10()*-0.0266797);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6de10() {
   return (neuron0x2b5ff50()*-0.306182);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6de50() {
   return (neuron0x2b60290()*0.303552);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6de90() {
   return (neuron0x2b605d0()*-0.0502295);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6ded0() {
   return (neuron0x2b60910()*-0.0598018);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6df10() {
   return (neuron0x2b60c50()*0.0579607);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6df50() {
   return (neuron0x2b60f90()*-0.0339209);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6df90() {
   return (neuron0x2b612d0()*-0.0118138);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6dfd0() {
   return (neuron0x2b61610()*-0.0204039);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e010() {
   return (neuron0x2b61950()*-0.0457295);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e050() {
   return (neuron0x2b61c90()*0.00293358);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e090() {
   return (neuron0x2b61fd0()*-0.790446);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e0d0() {
   return (neuron0x2b62310()*-0.0241293);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e110() {
   return (neuron0x2b62650()*-0.0316399);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e150() {
   return (neuron0x2b62990()*0.00835728);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6dbe0() {
   return (neuron0x2b62cd0()*0.0812312);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6dc20() {
   return (neuron0x2b63230()*-0.0312606);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e2a0() {
   return (neuron0x2b63450()*-0.0197303);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e2e0() {
   return (neuron0x2b63790()*-0.0148886);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e320() {
   return (neuron0x2b63ad0()*0.00411995);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e360() {
   return (neuron0x2b63e10()*-0.00451759);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e3a0() {
   return (neuron0x2b64150()*-0.0201787);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e3e0() {
   return (neuron0x2b64490()*-0.194271);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e760() {
   return (neuron0x2b5f8d0()*0.127245);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b5faf0() {
   return (neuron0x2b5fc10()*0.0177131);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b5fb30() {
   return (neuron0x2b5ff50()*2.04176);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b5fe30() {
   return (neuron0x2b60290()*-0.0315093);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b5fe70() {
   return (neuron0x2b605d0()*-0.00576482);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b60170() {
   return (neuron0x2b60910()*0.0145546);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b601b0() {
   return (neuron0x2b60c50()*-0.0317516);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b604b0() {
   return (neuron0x2b60f90()*-0.000431135);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b604f0() {
   return (neuron0x2b612d0()*-0.0505107);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b607f0() {
   return (neuron0x2b61610()*-0.0421065);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b60830() {
   return (neuron0x2b61950()*-0.0727774);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b60b30() {
   return (neuron0x2b61c90()*-0.0291409);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b60b70() {
   return (neuron0x2b61fd0()*0.27288);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b60e70() {
   return (neuron0x2b62310()*-0.0321904);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b60eb0() {
   return (neuron0x2b62650()*-0.00645592);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b611b0() {
   return (neuron0x2b62990()*0.0080925);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b611f0() {
   return (neuron0x2b62cd0()*-0.00872702);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b614f0() {
   return (neuron0x2b63230()*-0.0124711);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b61530() {
   return (neuron0x2b63450()*-0.0220521);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b61830() {
   return (neuron0x2b63790()*0.016788);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b61870() {
   return (neuron0x2b63ad0()*0.000669078);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b61b70() {
   return (neuron0x2b63e10()*-0.00396028);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b61bb0() {
   return (neuron0x2b64150()*-0.0149071);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b61eb0() {
   return (neuron0x2b64490()*4.48054);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b61ef0() {
   return (neuron0x2b5f8d0()*0.025924);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b62bb0() {
   return (neuron0x2b5fc10()*0.158825);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b62bf0() {
   return (neuron0x2b5ff50()*-0.131112);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e5b0() {
   return (neuron0x2b60290()*-0.134086);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e5f0() {
   return (neuron0x2b605d0()*0.0244101);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b62ef0() {
   return (neuron0x2b60910()*0.0682716);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b62f30() {
   return (neuron0x2b60c50()*-0.0112156);
}

double NNfunction_ns_chiMinus1_cL::synapse0x291aab0() {
   return (neuron0x2b60f90()*-0.127942);
}

double NNfunction_ns_chiMinus1_cL::synapse0x291aaf0() {
   return (neuron0x2b612d0()*1.20967);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b63670() {
   return (neuron0x2b61610()*-0.0124952);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b636b0() {
   return (neuron0x2b61950()*-0.115296);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b639b0() {
   return (neuron0x2b61c90()*-0.222643);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b639f0() {
   return (neuron0x2b61fd0()*-0.320015);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b63cf0() {
   return (neuron0x2b62310()*0.0320333);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b63d30() {
   return (neuron0x2b62650()*0.11733);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64030() {
   return (neuron0x2b62990()*0.110566);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64070() {
   return (neuron0x2b62cd0()*0.036446);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64370() {
   return (neuron0x2b63230()*-0.152092);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b643b0() {
   return (neuron0x2b63450()*-0.0790332);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b646b0() {
   return (neuron0x2b63790()*-0.0942657);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b646f0() {
   return (neuron0x2b63ad0()*-0.58912);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b621f0() {
   return (neuron0x2b63e10()*0.0566831);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b62230() {
   return (neuron0x2b64150()*0.210219);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b704d0() {
   return (neuron0x2b64490()*0.167487);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70850() {
   return (neuron0x2b5f8d0()*0.148209);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70890() {
   return (neuron0x2b5fc10()*0.213074);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b708d0() {
   return (neuron0x2b5ff50()*-0.303879);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70910() {
   return (neuron0x2b60290()*0.29985);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70950() {
   return (neuron0x2b605d0()*-0.135816);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70990() {
   return (neuron0x2b60910()*-0.306487);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b709d0() {
   return (neuron0x2b60c50()*0.00686878);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70a10() {
   return (neuron0x2b60f90()*-0.249647);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70a50() {
   return (neuron0x2b612d0()*0.136941);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70a90() {
   return (neuron0x2b61610()*-1.63507);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70ad0() {
   return (neuron0x2b61950()*0.0821813);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70b10() {
   return (neuron0x2b61c90()*0.192722);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70b50() {
   return (neuron0x2b61fd0()*0.250698);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70b90() {
   return (neuron0x2b62310()*0.245964);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70bd0() {
   return (neuron0x2b62650()*-0.0558614);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70c10() {
   return (neuron0x2b62990()*-0.203547);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b706a0() {
   return (neuron0x2b62cd0()*0.10655);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b706e0() {
   return (neuron0x2b63230()*0.163606);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70d60() {
   return (neuron0x2b63450()*0.0257999);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70da0() {
   return (neuron0x2b63790()*-0.111854);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70de0() {
   return (neuron0x2b63ad0()*-0.122137);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70e20() {
   return (neuron0x2b63e10()*0.198171);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70e60() {
   return (neuron0x2b64150()*0.0167125);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70ea0() {
   return (neuron0x2b64490()*0.242017);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71220() {
   return (neuron0x2b5f8d0()*-0.0959775);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71260() {
   return (neuron0x2b5fc10()*0.119188);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b712a0() {
   return (neuron0x2b5ff50()*0.317354);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b712e0() {
   return (neuron0x2b60290()*-0.668907);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71320() {
   return (neuron0x2b605d0()*-0.0523153);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71360() {
   return (neuron0x2b60910()*-0.185554);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b713a0() {
   return (neuron0x2b60c50()*0.115253);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b713e0() {
   return (neuron0x2b60f90()*-0.13845);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71420() {
   return (neuron0x2b612d0()*0.112938);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71460() {
   return (neuron0x2b61610()*-0.0552845);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b714a0() {
   return (neuron0x2b61950()*-0.00867056);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b714e0() {
   return (neuron0x2b61c90()*-0.14061);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71520() {
   return (neuron0x2b61fd0()*-0.573994);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71560() {
   return (neuron0x2b62310()*0.0874908);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b715a0() {
   return (neuron0x2b62650()*0.0622196);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b715e0() {
   return (neuron0x2b62990()*-0.178142);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71070() {
   return (neuron0x2b62cd0()*0.420808);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b710b0() {
   return (neuron0x2b63230()*-0.0884399);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71730() {
   return (neuron0x2b63450()*-0.154049);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71770() {
   return (neuron0x2b63790()*-0.0807392);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b717b0() {
   return (neuron0x2b63ad0()*-0.0152688);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b717f0() {
   return (neuron0x2b63e10()*-0.0305554);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71830() {
   return (neuron0x2b64150()*0.0251624);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71870() {
   return (neuron0x2b64490()*0.0739347);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71bf0() {
   return (neuron0x2b5f8d0()*0.00760369);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71c30() {
   return (neuron0x2b5fc10()*-0.127103);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71c70() {
   return (neuron0x2b5ff50()*0.363323);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71cb0() {
   return (neuron0x2b60290()*0.91385);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71cf0() {
   return (neuron0x2b605d0()*0.148217);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71d30() {
   return (neuron0x2b60910()*0.17648);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71d70() {
   return (neuron0x2b60c50()*-0.146618);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71db0() {
   return (neuron0x2b60f90()*-0.0896752);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71df0() {
   return (neuron0x2b612d0()*0.0263063);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71e30() {
   return (neuron0x2b61610()*0.0533632);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71e70() {
   return (neuron0x2b61950()*-0.0286493);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71eb0() {
   return (neuron0x2b61c90()*0.0671102);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71ef0() {
   return (neuron0x2b61fd0()*-0.501335);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71f30() {
   return (neuron0x2b62310()*-0.322167);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71f70() {
   return (neuron0x2b62650()*0.380381);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71fb0() {
   return (neuron0x2b62990()*0.103721);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71a40() {
   return (neuron0x2b62cd0()*0.0536638);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71a80() {
   return (neuron0x2b63230()*-0.0104995);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72100() {
   return (neuron0x2b63450()*0.00763696);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72140() {
   return (neuron0x2b63790()*0.0907238);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72180() {
   return (neuron0x2b63ad0()*0.0307562);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b721c0() {
   return (neuron0x2b63e10()*0.0985058);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72200() {
   return (neuron0x2b64150()*0.0249341);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72240() {
   return (neuron0x2b64490()*-0.0646177);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b725c0() {
   return (neuron0x2b5f8d0()*0.0606222);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72600() {
   return (neuron0x2b5fc10()*-0.0192274);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72640() {
   return (neuron0x2b5ff50()*0.306335);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72680() {
   return (neuron0x2b60290()*2.06857);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b726c0() {
   return (neuron0x2b605d0()*-0.0426252);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72700() {
   return (neuron0x2b60910()*0.0766129);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72740() {
   return (neuron0x2b60c50()*-0.0321772);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72780() {
   return (neuron0x2b60f90()*-0.0332559);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b727c0() {
   return (neuron0x2b612d0()*-0.0177567);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72800() {
   return (neuron0x2b61610()*-0.00279849);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72840() {
   return (neuron0x2b61950()*-0.0492453);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72880() {
   return (neuron0x2b61c90()*-0.0284037);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b728c0() {
   return (neuron0x2b61fd0()*0.320385);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72900() {
   return (neuron0x2b62310()*-0.0943942);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72940() {
   return (neuron0x2b62650()*0.0559113);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72980() {
   return (neuron0x2b62990()*0.0485798);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72410() {
   return (neuron0x2b62cd0()*-0.0241464);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72450() {
   return (neuron0x2b63230()*-0.0221303);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72ad0() {
   return (neuron0x2b63450()*0.00166837);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72b10() {
   return (neuron0x2b63790()*-0.047735);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72b50() {
   return (neuron0x2b63ad0()*-0.00293134);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72b90() {
   return (neuron0x2b63e10()*0.020415);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72bd0() {
   return (neuron0x2b64150()*-0.0240692);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72c10() {
   return (neuron0x2b64490()*0.233703);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72f90() {
   return (neuron0x2b5f8d0()*-0.120168);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72fd0() {
   return (neuron0x2b5fc10()*0.0336727);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73010() {
   return (neuron0x2b5ff50()*-0.0120674);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73050() {
   return (neuron0x2b60290()*-1.09972);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73090() {
   return (neuron0x2b605d0()*-0.020442);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b730d0() {
   return (neuron0x2b60910()*0.0111763);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73110() {
   return (neuron0x2b60c50()*-0.0787162);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73150() {
   return (neuron0x2b60f90()*-0.0176726);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73190() {
   return (neuron0x2b612d0()*0.0662117);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b350() {
   return (neuron0x2b61610()*-0.0277121);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b390() {
   return (neuron0x2b61950()*-0.0993453);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b3d0() {
   return (neuron0x2b61c90()*0.0742653);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b410() {
   return (neuron0x2b61fd0()*0.216895);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b450() {
   return (neuron0x2b62310()*-0.128139);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b490() {
   return (neuron0x2b62650()*-0.00312871);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b4d0() {
   return (neuron0x2b62990()*-0.00236447);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72de0() {
   return (neuron0x2b62cd0()*-0.0648644);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72e20() {
   return (neuron0x2b63230()*0.0111303);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b620() {
   return (neuron0x2b63450()*0.031127);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b660() {
   return (neuron0x2b63790()*0.00973006);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b6a0() {
   return (neuron0x2b63ad0()*-0.0852954);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b6e0() {
   return (neuron0x2b63e10()*0.0644037);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b720() {
   return (neuron0x2b64150()*-0.00405759);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b760() {
   return (neuron0x2b64490()*-1.51554);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6bae0() {
   return (neuron0x2b5f8d0()*0.0359448);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6bb20() {
   return (neuron0x2b5fc10()*-0.0193203);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6bb60() {
   return (neuron0x2b5ff50()*0.50755);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6bba0() {
   return (neuron0x2b60290()*-0.0369979);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6bbe0() {
   return (neuron0x2b605d0()*0.0185029);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6bc20() {
   return (neuron0x2b60910()*0.00412685);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6bc60() {
   return (neuron0x2b60c50()*0.00340394);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6bca0() {
   return (neuron0x2b60f90()*0.0216355);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6bce0() {
   return (neuron0x2b612d0()*-0.0169715);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6bd20() {
   return (neuron0x2b61610()*-0.00216502);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6bd60() {
   return (neuron0x2b61950()*0.00214588);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6bda0() {
   return (neuron0x2b61c90()*-0.00718534);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6bde0() {
   return (neuron0x2b61fd0()*-0.479234);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6be20() {
   return (neuron0x2b62310()*0.00577007);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6be60() {
   return (neuron0x2b62650()*0.0223186);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6bea0() {
   return (neuron0x2b62990()*-0.0314193);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b930() {
   return (neuron0x2b62cd0()*0.0187435);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6b970() {
   return (neuron0x2b63230()*0.00627871);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6bff0() {
   return (neuron0x2b63450()*0.0116001);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c030() {
   return (neuron0x2b63790()*0.0332689);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c070() {
   return (neuron0x2b63ad0()*-9.46831e-05);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c0b0() {
   return (neuron0x2b63e10()*0.0187638);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c0f0() {
   return (neuron0x2b64150()*-0.00995109);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c130() {
   return (neuron0x2b64490()*7.37966);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c300() {
   return (neuron0x2b5f8d0()*-0.151626);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75390() {
   return (neuron0x2b5fc10()*0.327044);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b753d0() {
   return (neuron0x2b5ff50()*-0.990148);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75410() {
   return (neuron0x2b60290()*0.254396);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75450() {
   return (neuron0x2b605d0()*0.103204);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75490() {
   return (neuron0x2b60910()*0.14461);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b754d0() {
   return (neuron0x2b60c50()*0.00891729);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75510() {
   return (neuron0x2b60f90()*0.379918);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75550() {
   return (neuron0x2b612d0()*-0.0510574);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75590() {
   return (neuron0x2b61610()*-0.102742);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b755d0() {
   return (neuron0x2b61950()*0.215129);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75610() {
   return (neuron0x2b61c90()*-0.398651);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75650() {
   return (neuron0x2b61fd0()*0.247217);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75690() {
   return (neuron0x2b62310()*-0.213732);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b756d0() {
   return (neuron0x2b62650()*0.139176);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75710() {
   return (neuron0x2b62990()*-0.0116985);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b751e0() {
   return (neuron0x2b62cd0()*0.195466);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75220() {
   return (neuron0x2b63230()*0.0261373);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75860() {
   return (neuron0x2b63450()*-0.265985);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b758a0() {
   return (neuron0x2b63790()*0.190342);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b758e0() {
   return (neuron0x2b63ad0()*-0.161454);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75920() {
   return (neuron0x2b63e10()*0.0323602);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75960() {
   return (neuron0x2b64150()*0.151659);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b759a0() {
   return (neuron0x2b64490()*-0.0232004);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75d20() {
   return (neuron0x2b5f8d0()*0.0440205);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75d60() {
   return (neuron0x2b5fc10()*-0.0106483);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75da0() {
   return (neuron0x2b5ff50()*-0.565476);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75de0() {
   return (neuron0x2b60290()*0.025771);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75e20() {
   return (neuron0x2b605d0()*0.00723769);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75e60() {
   return (neuron0x2b60910()*-0.00188784);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75ea0() {
   return (neuron0x2b60c50()*0.000169421);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75ee0() {
   return (neuron0x2b60f90()*0.0230136);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75f20() {
   return (neuron0x2b612d0()*0.000267882);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75f60() {
   return (neuron0x2b61610()*0.00459133);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75fa0() {
   return (neuron0x2b61950()*0.0208071);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75fe0() {
   return (neuron0x2b61c90()*-0.016142);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76020() {
   return (neuron0x2b61fd0()*0.143868);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76060() {
   return (neuron0x2b62310()*-0.0104696);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b760a0() {
   return (neuron0x2b62650()*0.00577688);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b760e0() {
   return (neuron0x2b62990()*-0.0132495);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75b70() {
   return (neuron0x2b62cd0()*0.000503378);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75bb0() {
   return (neuron0x2b63230()*-0.00678394);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76230() {
   return (neuron0x2b63450()*-0.0128923);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76270() {
   return (neuron0x2b63790()*0.00835127);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b762b0() {
   return (neuron0x2b63ad0()*-0.00940203);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b762f0() {
   return (neuron0x2b63e10()*0.0164877);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76330() {
   return (neuron0x2b64150()*0.00354439);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76370() {
   return (neuron0x2b64490()*7.38216);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b766f0() {
   return (neuron0x2b5f8d0()*-0.0846054);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76730() {
   return (neuron0x2b5fc10()*-0.225043);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76770() {
   return (neuron0x2b5ff50()*-0.103747);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b767b0() {
   return (neuron0x2b60290()*0.503089);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b767f0() {
   return (neuron0x2b605d0()*-0.367264);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76830() {
   return (neuron0x2b60910()*-0.198876);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76870() {
   return (neuron0x2b60c50()*0.244808);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b768b0() {
   return (neuron0x2b60f90()*-0.0149256);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b768f0() {
   return (neuron0x2b612d0()*0.0174544);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76930() {
   return (neuron0x2b61610()*-0.0240042);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76970() {
   return (neuron0x2b61950()*-0.062424);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b769b0() {
   return (neuron0x2b61c90()*-0.423218);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b769f0() {
   return (neuron0x2b61fd0()*-0.176454);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76a30() {
   return (neuron0x2b62310()*-0.00241631);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76a70() {
   return (neuron0x2b62650()*0.408061);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76ab0() {
   return (neuron0x2b62990()*-0.104315);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76540() {
   return (neuron0x2b62cd0()*0.0164063);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76580() {
   return (neuron0x2b63230()*0.00701459);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76c00() {
   return (neuron0x2b63450()*0.0769318);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76c40() {
   return (neuron0x2b63790()*-0.0953624);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76c80() {
   return (neuron0x2b63ad0()*-0.0784072);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76cc0() {
   return (neuron0x2b63e10()*0.000704161);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76d00() {
   return (neuron0x2b64150()*0.150013);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76d40() {
   return (neuron0x2b64490()*0.15659);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b770c0() {
   return (neuron0x2b5f8d0()*0.063327);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77100() {
   return (neuron0x2b5fc10()*-0.0196415);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77140() {
   return (neuron0x2b5ff50()*0.010467);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77180() {
   return (neuron0x2b60290()*-0.205079);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b771c0() {
   return (neuron0x2b605d0()*-0.0212308);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77200() {
   return (neuron0x2b60910()*0.0290462);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77240() {
   return (neuron0x2b60c50()*-0.0215406);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77280() {
   return (neuron0x2b60f90()*0.027801);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b772c0() {
   return (neuron0x2b612d0()*-0.019594);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77300() {
   return (neuron0x2b61610()*0.019104);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77340() {
   return (neuron0x2b61950()*0.00209899);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77380() {
   return (neuron0x2b61c90()*0.0132779);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b773c0() {
   return (neuron0x2b61fd0()*-1.64813);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77400() {
   return (neuron0x2b62310()*0.0168756);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77440() {
   return (neuron0x2b62650()*0.00847088);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77480() {
   return (neuron0x2b62990()*0.0167661);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76f10() {
   return (neuron0x2b62cd0()*-0.00147187);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76f50() {
   return (neuron0x2b63230()*0.00342782);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b775d0() {
   return (neuron0x2b63450()*-0.0120734);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77610() {
   return (neuron0x2b63790()*0.0428083);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77650() {
   return (neuron0x2b63ad0()*0.00654754);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77690() {
   return (neuron0x2b63e10()*0.0011464);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b776d0() {
   return (neuron0x2b64150()*0.00182781);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77710() {
   return (neuron0x2b64490()*-3.55883);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77a90() {
   return (neuron0x2b5f8d0()*-0.0341848);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77ad0() {
   return (neuron0x2b5fc10()*0.0877786);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77b10() {
   return (neuron0x2b5ff50()*0.811903);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77b50() {
   return (neuron0x2b60290()*0.349763);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77b90() {
   return (neuron0x2b605d0()*0.0657884);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77bd0() {
   return (neuron0x2b60910()*-0.420973);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77c10() {
   return (neuron0x2b60c50()*-0.244569);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77c50() {
   return (neuron0x2b60f90()*0.102824);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77c90() {
   return (neuron0x2b612d0()*0.612886);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77cd0() {
   return (neuron0x2b61610()*0.371343);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77d10() {
   return (neuron0x2b61950()*0.346689);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77d50() {
   return (neuron0x2b61c90()*-0.119663);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77d90() {
   return (neuron0x2b61fd0()*-0.0512697);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77dd0() {
   return (neuron0x2b62310()*0.150309);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77e10() {
   return (neuron0x2b62650()*-0.024272);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77e50() {
   return (neuron0x2b62990()*0.0566081);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b778e0() {
   return (neuron0x2b62cd0()*-0.127144);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77920() {
   return (neuron0x2b63230()*-0.0838596);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77fa0() {
   return (neuron0x2b63450()*0.222514);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77fe0() {
   return (neuron0x2b63790()*0.137605);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78020() {
   return (neuron0x2b63ad0()*0.35106);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78060() {
   return (neuron0x2b63e10()*0.0738351);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b780a0() {
   return (neuron0x2b64150()*-0.253509);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b780e0() {
   return (neuron0x2b64490()*-0.497997);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78460() {
   return (neuron0x2b5f8d0()*0.0635659);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b784a0() {
   return (neuron0x2b5fc10()*-0.0894575);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b784e0() {
   return (neuron0x2b5ff50()*-0.00621972);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78520() {
   return (neuron0x2b60290()*-0.782416);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78560() {
   return (neuron0x2b605d0()*0.0371091);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b785a0() {
   return (neuron0x2b60910()*-0.164925);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b785e0() {
   return (neuron0x2b60c50()*-0.159892);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78620() {
   return (neuron0x2b60f90()*-0.075158);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78660() {
   return (neuron0x2b612d0()*0.0387154);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b786a0() {
   return (neuron0x2b61610()*-0.107795);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b786e0() {
   return (neuron0x2b61950()*-0.111248);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78720() {
   return (neuron0x2b61c90()*-0.411053);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78760() {
   return (neuron0x2b61fd0()*0.493932);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b787a0() {
   return (neuron0x2b62310()*-0.660459);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b787e0() {
   return (neuron0x2b62650()*-0.0834787);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78820() {
   return (neuron0x2b62990()*-0.045046);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b782b0() {
   return (neuron0x2b62cd0()*-0.349563);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b782f0() {
   return (neuron0x2b63230()*-0.346668);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78970() {
   return (neuron0x2b63450()*-0.390423);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b789b0() {
   return (neuron0x2b63790()*-0.354773);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b789f0() {
   return (neuron0x2b63ad0()*0.130678);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78a30() {
   return (neuron0x2b63e10()*-0.0729635);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78a70() {
   return (neuron0x2b64150()*0.0965445);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78ab0() {
   return (neuron0x2b64490()*0.125777);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78e30() {
   return (neuron0x2b5f8d0()*-0.00969395);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78e70() {
   return (neuron0x2b5fc10()*-0.013087);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78eb0() {
   return (neuron0x2b5ff50()*0.250649);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78ef0() {
   return (neuron0x2b60290()*0.516102);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78f30() {
   return (neuron0x2b605d0()*0.00405843);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78f70() {
   return (neuron0x2b60910()*0.00145274);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78fb0() {
   return (neuron0x2b60c50()*0.005999);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78ff0() {
   return (neuron0x2b60f90()*0.0196735);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79030() {
   return (neuron0x2b612d0()*-0.00324341);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79070() {
   return (neuron0x2b61610()*0.00605944);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b790b0() {
   return (neuron0x2b61950()*-0.00107415);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b790f0() {
   return (neuron0x2b61c90()*-0.00463374);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79130() {
   return (neuron0x2b61fd0()*-0.408519);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79170() {
   return (neuron0x2b62310()*-0.00833011);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b791b0() {
   return (neuron0x2b62650()*-0.00787752);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b791f0() {
   return (neuron0x2b62990()*-0.0331143);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78c80() {
   return (neuron0x2b62cd0()*-0.00591347);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78cc0() {
   return (neuron0x2b63230()*-0.00809454);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79340() {
   return (neuron0x2b63450()*-0.00986397);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79380() {
   return (neuron0x2b63790()*-0.0131609);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b793c0() {
   return (neuron0x2b63ad0()*-0.00150884);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79400() {
   return (neuron0x2b63e10()*-0.00215854);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79440() {
   return (neuron0x2b64150()*0.0093923);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79480() {
   return (neuron0x2b64490()*0.00327225);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79800() {
   return (neuron0x2b5f8d0()*-0.0396253);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79840() {
   return (neuron0x2b5fc10()*-0.126047);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79880() {
   return (neuron0x2b5ff50()*0.0932435);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b798c0() {
   return (neuron0x2b60290()*-0.0361502);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79900() {
   return (neuron0x2b605d0()*0.0299879);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79940() {
   return (neuron0x2b60910()*0.244394);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79980() {
   return (neuron0x2b60c50()*-0.0282734);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b799c0() {
   return (neuron0x2b60f90()*-0.613471);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79a00() {
   return (neuron0x2b612d0()*0.430671);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79a40() {
   return (neuron0x2b61610()*-0.0749981);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79a80() {
   return (neuron0x2b61950()*0.416175);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79ac0() {
   return (neuron0x2b61c90()*0.284598);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79b00() {
   return (neuron0x2b61fd0()*0.593675);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79b40() {
   return (neuron0x2b62310()*-0.186609);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79b80() {
   return (neuron0x2b62650()*-0.302309);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79bc0() {
   return (neuron0x2b62990()*0.383802);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79650() {
   return (neuron0x2b62cd0()*0.461368);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79690() {
   return (neuron0x2b63230()*0.639446);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79d10() {
   return (neuron0x2b63450()*0.221972);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79d50() {
   return (neuron0x2b63790()*0.61331);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79d90() {
   return (neuron0x2b63ad0()*0.0341939);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79dd0() {
   return (neuron0x2b63e10()*0.00748972);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79e10() {
   return (neuron0x2b64150()*0.00613631);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b79e50() {
   return (neuron0x2b64490()*0.092827);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7a1d0() {
   return (neuron0x2b5f8d0()*0.00199272);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e7a0() {
   return (neuron0x2b5fc10()*-0.0221199);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e7e0() {
   return (neuron0x2b5ff50()*-1.02901);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e820() {
   return (neuron0x2b60290()*-0.182766);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6ea70() {
   return (neuron0x2b605d0()*0.114125);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6eab0() {
   return (neuron0x2b60910()*-0.0826728);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6eaf0() {
   return (neuron0x2b60c50()*0.0662454);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6ed40() {
   return (neuron0x2b60f90()*0.0846259);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6ed80() {
   return (neuron0x2b612d0()*0.104036);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6efd0() {
   return (neuron0x2b61610()*0.00959037);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6f010() {
   return (neuron0x2b61950()*0.0699348);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6f050() {
   return (neuron0x2b61c90()*0.0459749);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6f2a0() {
   return (neuron0x2b61fd0()*0.0339305);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6f2e0() {
   return (neuron0x2b62310()*-0.104063);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6f530() {
   return (neuron0x2b62650()*0.00251242);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6f570() {
   return (neuron0x2b62990()*0.0484089);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7a020() {
   return (neuron0x2b62cd0()*-0.263181);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7a060() {
   return (neuron0x2b63230()*-0.0310955);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6f6c0() {
   return (neuron0x2b63450()*0.0533145);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6fbd0() {
   return (neuron0x2b63790()*0.00412695);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6fc10() {
   return (neuron0x2b63ad0()*0.0449421);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6fc50() {
   return (neuron0x2b63e10()*0.0412696);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6fea0() {
   return (neuron0x2b64150()*-0.0743348);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6fee0() {
   return (neuron0x2b64490()*-0.360373);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6f790() {
   return (neuron0x2b5f8d0()*-0.00335533);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6f7d0() {
   return (neuron0x2b5fc10()*0.0244125);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6f810() {
   return (neuron0x2b5ff50()*-0.649957);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6f850() {
   return (neuron0x2b60290()*0.121738);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b701d0() {
   return (neuron0x2b605d0()*-0.00872172);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c520() {
   return (neuron0x2b60910()*0.0449685);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c560() {
   return (neuron0x2b60c50()*-0.0092252);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c5a0() {
   return (neuron0x2b60f90()*0.00546099);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c5e0() {
   return (neuron0x2b612d0()*-0.0237847);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c620() {
   return (neuron0x2b61610()*-0.00741081);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c660() {
   return (neuron0x2b61950()*-0.0510843);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c6a0() {
   return (neuron0x2b61c90()*0.0183954);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c6e0() {
   return (neuron0x2b61fd0()*0.327532);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c720() {
   return (neuron0x2b62310()*-0.00804532);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c760() {
   return (neuron0x2b62650()*0.00411901);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c7a0() {
   return (neuron0x2b62990()*0.0421894);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b700b0() {
   return (neuron0x2b62cd0()*-0.0290578);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b700f0() {
   return (neuron0x2b63230()*0.0121868);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c8f0() {
   return (neuron0x2b63450()*0.0210226);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c930() {
   return (neuron0x2b63790()*0.0101804);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c970() {
   return (neuron0x2b63ad0()*0.0221046);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c9b0() {
   return (neuron0x2b63e10()*-0.0155619);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7c9f0() {
   return (neuron0x2b64150()*0.00135264);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ca30() {
   return (neuron0x2b64490()*-1.47104);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7cdb0() {
   return (neuron0x2b5f8d0()*-0.51232);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7cdf0() {
   return (neuron0x2b5fc10()*0.017502);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ce30() {
   return (neuron0x2b5ff50()*-0.161948);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ce70() {
   return (neuron0x2b60290()*-0.163556);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ceb0() {
   return (neuron0x2b605d0()*-0.00684194);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7cef0() {
   return (neuron0x2b60910()*-0.00429702);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7cf30() {
   return (neuron0x2b60c50()*0.0223304);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7cf70() {
   return (neuron0x2b60f90()*-0.0375633);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7cfb0() {
   return (neuron0x2b612d0()*-0.0273739);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7cff0() {
   return (neuron0x2b61610()*-0.0455473);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d030() {
   return (neuron0x2b61950()*0.0414284);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d070() {
   return (neuron0x2b61c90()*0.00721599);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d0b0() {
   return (neuron0x2b61fd0()*0.724037);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d0f0() {
   return (neuron0x2b62310()*-0.00106445);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d130() {
   return (neuron0x2b62650()*-0.00839293);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d170() {
   return (neuron0x2b62990()*-0.0170306);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7cc00() {
   return (neuron0x2b62cd0()*0.00284187);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7cc40() {
   return (neuron0x2b63230()*0.011477);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d2c0() {
   return (neuron0x2b63450()*-0.00472161);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d300() {
   return (neuron0x2b63790()*0.00755391);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d340() {
   return (neuron0x2b63ad0()*-0.0152243);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d380() {
   return (neuron0x2b63e10()*-0.0125599);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d3c0() {
   return (neuron0x2b64150()*0.00326024);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d400() {
   return (neuron0x2b64490()*-0.0566789);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d780() {
   return (neuron0x2b5f8d0()*0.0185836);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d7c0() {
   return (neuron0x2b5fc10()*-0.00575137);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d800() {
   return (neuron0x2b5ff50()*-0.0236551);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d840() {
   return (neuron0x2b60290()*3.47994);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d880() {
   return (neuron0x2b605d0()*-0.0104739);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d8c0() {
   return (neuron0x2b60910()*-0.00825856);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d900() {
   return (neuron0x2b60c50()*-0.00262487);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d940() {
   return (neuron0x2b60f90()*0.00245119);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d980() {
   return (neuron0x2b612d0()*-0.00969922);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d9c0() {
   return (neuron0x2b61610()*-0.0114118);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7da00() {
   return (neuron0x2b61950()*-0.0240329);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7da40() {
   return (neuron0x2b61c90()*-0.0154188);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7da80() {
   return (neuron0x2b61fd0()*-0.488964);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7dac0() {
   return (neuron0x2b62310()*-0.0338005);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7db00() {
   return (neuron0x2b62650()*-0.0081203);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7db40() {
   return (neuron0x2b62990()*0.0162653);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d5d0() {
   return (neuron0x2b62cd0()*0.0511652);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d610() {
   return (neuron0x2b63230()*-0.00160404);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7dc90() {
   return (neuron0x2b63450()*-0.00750535);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7dcd0() {
   return (neuron0x2b63790()*-0.0101646);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7dd10() {
   return (neuron0x2b63ad0()*0.00854461);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7dd50() {
   return (neuron0x2b63e10()*-0.0066845);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7dd90() {
   return (neuron0x2b64150()*-0.0135192);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ddd0() {
   return (neuron0x2b64490()*0.0504493);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e150() {
   return (neuron0x2b5f8d0()*-0.0181257);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e190() {
   return (neuron0x2b5fc10()*-0.00382977);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e1d0() {
   return (neuron0x2b5ff50()*2.85684);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e210() {
   return (neuron0x2b60290()*-0.0218504);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e250() {
   return (neuron0x2b605d0()*0.0111748);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e290() {
   return (neuron0x2b60910()*-0.00107049);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e2d0() {
   return (neuron0x2b60c50()*0.00781436);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e310() {
   return (neuron0x2b60f90()*-0.0106257);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e350() {
   return (neuron0x2b612d0()*0.0055568);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e390() {
   return (neuron0x2b61610()*-0.00242461);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e3d0() {
   return (neuron0x2b61950()*0.000931659);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e410() {
   return (neuron0x2b61c90()*0.00180745);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e450() {
   return (neuron0x2b61fd0()*-0.456723);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e490() {
   return (neuron0x2b62310()*0.00720104);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e4d0() {
   return (neuron0x2b62650()*-0.00276123);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e510() {
   return (neuron0x2b62990()*0.00427009);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7dfa0() {
   return (neuron0x2b62cd0()*-0.00861895);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7dfe0() {
   return (neuron0x2b63230()*-0.0125948);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e660() {
   return (neuron0x2b63450()*-0.00523164);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e6a0() {
   return (neuron0x2b63790()*-0.000255402);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e6e0() {
   return (neuron0x2b63ad0()*0.00780424);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e720() {
   return (neuron0x2b63e10()*-0.00578201);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e760() {
   return (neuron0x2b64150()*0.00246643);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e7a0() {
   return (neuron0x2b64490()*-0.103609);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7eb20() {
   return (neuron0x2b5f8d0()*0.0547661);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7eb60() {
   return (neuron0x2b5fc10()*-0.0154419);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7eba0() {
   return (neuron0x2b5ff50()*0.791465);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ebe0() {
   return (neuron0x2b60290()*-0.116282);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ec20() {
   return (neuron0x2b605d0()*0.00648096);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ec60() {
   return (neuron0x2b60910()*0.0337184);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7eca0() {
   return (neuron0x2b60c50()*-0.00530735);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ece0() {
   return (neuron0x2b60f90()*0.00726824);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ed20() {
   return (neuron0x2b612d0()*0.0108279);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ed60() {
   return (neuron0x2b61610()*0.00414569);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7eda0() {
   return (neuron0x2b61950()*0.016439);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ede0() {
   return (neuron0x2b61c90()*0.0209049);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ee20() {
   return (neuron0x2b61fd0()*0.461561);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ee60() {
   return (neuron0x2b62310()*0.00198297);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7eea0() {
   return (neuron0x2b62650()*-0.0241834);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7eee0() {
   return (neuron0x2b62990()*-0.00988851);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e970() {
   return (neuron0x2b62cd0()*-0.0164104);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e9b0() {
   return (neuron0x2b63230()*0.00537161);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f030() {
   return (neuron0x2b63450()*0.00110867);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f070() {
   return (neuron0x2b63790()*0.0052017);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f0b0() {
   return (neuron0x2b63ad0()*0.000547127);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f0f0() {
   return (neuron0x2b63e10()*-0.00141816);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f130() {
   return (neuron0x2b64150()*0.0160494);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f170() {
   return (neuron0x2b64490()*-0.120934);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f4f0() {
   return (neuron0x2b5f8d0()*0.0428892);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f530() {
   return (neuron0x2b5fc10()*-0.00279546);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f570() {
   return (neuron0x2b5ff50()*2.25028);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f5b0() {
   return (neuron0x2b60290()*-0.0212402);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f5f0() {
   return (neuron0x2b605d0()*-0.0109203);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f630() {
   return (neuron0x2b60910()*0.0311624);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f670() {
   return (neuron0x2b60c50()*0.00493116);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f6b0() {
   return (neuron0x2b60f90()*-0.00957773);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f6f0() {
   return (neuron0x2b612d0()*-0.00781289);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f730() {
   return (neuron0x2b61610()*0.00373723);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f770() {
   return (neuron0x2b61950()*-0.00944184);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f7b0() {
   return (neuron0x2b61c90()*0.039715);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f7f0() {
   return (neuron0x2b61fd0()*-0.278285);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f830() {
   return (neuron0x2b62310()*0.00715253);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f870() {
   return (neuron0x2b62650()*0.00240942);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f8b0() {
   return (neuron0x2b62990()*0.0176963);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f340() {
   return (neuron0x2b62cd0()*0.00574319);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f380() {
   return (neuron0x2b63230()*0.0205783);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7fa00() {
   return (neuron0x2b63450()*-0.00820695);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7fa40() {
   return (neuron0x2b63790()*-0.00358598);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7fa80() {
   return (neuron0x2b63ad0()*-3.93907e-05);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7fac0() {
   return (neuron0x2b63e10()*-0.000709698);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7fb00() {
   return (neuron0x2b64150()*-0.00108252);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7fb40() {
   return (neuron0x2b64490()*-0.0213079);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7fec0() {
   return (neuron0x2b5f8d0()*0.0187451);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ff00() {
   return (neuron0x2b5fc10()*-0.0227523);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ff40() {
   return (neuron0x2b5ff50()*-0.425297);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ff80() {
   return (neuron0x2b60290()*-0.318437);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ffc0() {
   return (neuron0x2b605d0()*-0.0348641);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80000() {
   return (neuron0x2b60910()*-0.00328032);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80040() {
   return (neuron0x2b60c50()*0.00897039);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80080() {
   return (neuron0x2b60f90()*-0.0362239);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b800c0() {
   return (neuron0x2b612d0()*0.0104683);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80100() {
   return (neuron0x2b61610()*0.0277257);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80140() {
   return (neuron0x2b61950()*0.0240413);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80180() {
   return (neuron0x2b61c90()*-0.0381842);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b801c0() {
   return (neuron0x2b61fd0()*-0.459654);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80200() {
   return (neuron0x2b62310()*-0.0250059);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80240() {
   return (neuron0x2b62650()*-0.0441187);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80280() {
   return (neuron0x2b62990()*-0.0346423);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7fd10() {
   return (neuron0x2b62cd0()*-0.0289613);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7fd50() {
   return (neuron0x2b63230()*-0.00497042);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b803d0() {
   return (neuron0x2b63450()*-0.025294);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80410() {
   return (neuron0x2b63790()*-0.0196239);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80450() {
   return (neuron0x2b63ad0()*0.0047269);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80490() {
   return (neuron0x2b63e10()*0.00234033);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b804d0() {
   return (neuron0x2b64150()*0.00820381);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80510() {
   return (neuron0x2b64490()*-1.53836);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80890() {
   return (neuron0x2b5f8d0()*-0.656987);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b808d0() {
   return (neuron0x2b5fc10()*-0.077762);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80910() {
   return (neuron0x2b5ff50()*-0.105076);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80950() {
   return (neuron0x2b60290()*0.00747723);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80990() {
   return (neuron0x2b605d0()*0.19935);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b809d0() {
   return (neuron0x2b60910()*0.0173701);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80a10() {
   return (neuron0x2b60c50()*0.201545);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80a50() {
   return (neuron0x2b60f90()*-0.288703);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80a90() {
   return (neuron0x2b612d0()*0.460752);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80ad0() {
   return (neuron0x2b61610()*-0.131179);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80b10() {
   return (neuron0x2b61950()*0.0111216);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80b50() {
   return (neuron0x2b61c90()*0.369589);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80b90() {
   return (neuron0x2b61fd0()*0.199063);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80bd0() {
   return (neuron0x2b62310()*0.533308);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80c10() {
   return (neuron0x2b62650()*-0.103942);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80c50() {
   return (neuron0x2b62990()*0.295521);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b806e0() {
   return (neuron0x2b62cd0()*0.402387);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80720() {
   return (neuron0x2b63230()*-0.0144017);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80da0() {
   return (neuron0x2b63450()*-0.29257);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80de0() {
   return (neuron0x2b63790()*-0.0990478);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80e20() {
   return (neuron0x2b63ad0()*0.644857);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80e60() {
   return (neuron0x2b63e10()*-0.473313);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80ea0() {
   return (neuron0x2b64150()*-0.183148);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80ee0() {
   return (neuron0x2b64490()*-0.0528146);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69990() {
   return (neuron0x2b5f8d0()*-0.129925);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b699d0() {
   return (neuron0x2b5fc10()*0.0813176);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69a10() {
   return (neuron0x2b5ff50()*-0.26687);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69a50() {
   return (neuron0x2b60290()*0.248777);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69a90() {
   return (neuron0x2b605d0()*0.12323);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69ad0() {
   return (neuron0x2b60910()*0.809621);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69b10() {
   return (neuron0x2b60c50()*0.45978);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69b50() {
   return (neuron0x2b60f90()*-0.131215);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81670() {
   return (neuron0x2b612d0()*0.0130386);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b816b0() {
   return (neuron0x2b61610()*0.0792989);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b816f0() {
   return (neuron0x2b61950()*0.220241);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81730() {
   return (neuron0x2b61c90()*-0.100331);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81770() {
   return (neuron0x2b61fd0()*-0.339552);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b817b0() {
   return (neuron0x2b62310()*0.271787);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b817f0() {
   return (neuron0x2b62650()*-0.147011);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81830() {
   return (neuron0x2b62990()*0.0936128);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b810b0() {
   return (neuron0x2b62cd0()*0.170932);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b810f0() {
   return (neuron0x2b63230()*0.0548894);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81980() {
   return (neuron0x2b63450()*0.0183454);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b819c0() {
   return (neuron0x2b63790()*-0.0540009);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81a00() {
   return (neuron0x2b63ad0()*-0.186042);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81a40() {
   return (neuron0x2b63e10()*-0.0345792);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81a80() {
   return (neuron0x2b64150()*0.00235634);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81ac0() {
   return (neuron0x2b64490()*-0.0674951);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81e40() {
   return (neuron0x2b5f8d0()*0.0386143);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81e80() {
   return (neuron0x2b5fc10()*0.130781);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81ec0() {
   return (neuron0x2b5ff50()*0.707537);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81f00() {
   return (neuron0x2b60290()*0.736585);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81f40() {
   return (neuron0x2b605d0()*0.768575);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81f80() {
   return (neuron0x2b60910()*-0.316065);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81fc0() {
   return (neuron0x2b60c50()*0.153534);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82000() {
   return (neuron0x2b60f90()*-0.166058);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82040() {
   return (neuron0x2b612d0()*0.344105);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82080() {
   return (neuron0x2b61610()*0.187746);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b820c0() {
   return (neuron0x2b61950()*0.0213648);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82100() {
   return (neuron0x2b61c90()*-0.13958);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82140() {
   return (neuron0x2b61fd0()*-0.27146);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82180() {
   return (neuron0x2b62310()*0.241311);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b821c0() {
   return (neuron0x2b62650()*0.0204102);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82200() {
   return (neuron0x2b62990()*-0.170998);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81c90() {
   return (neuron0x2b62cd0()*-0.063244);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81cd0() {
   return (neuron0x2b63230()*-0.150121);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82350() {
   return (neuron0x2b63450()*0.00840919);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82390() {
   return (neuron0x2b63790()*-0.138215);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b823d0() {
   return (neuron0x2b63ad0()*-0.0564245);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82410() {
   return (neuron0x2b63e10()*-0.0767673);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82450() {
   return (neuron0x2b64150()*-0.173191);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82490() {
   return (neuron0x2b64490()*0.0227398);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82810() {
   return (neuron0x2b5f8d0()*0.0264343);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82850() {
   return (neuron0x2b5fc10()*0.0749875);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82890() {
   return (neuron0x2b5ff50()*0.194011);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b828d0() {
   return (neuron0x2b60290()*0.89585);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82910() {
   return (neuron0x2b605d0()*-0.177453);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82950() {
   return (neuron0x2b60910()*-0.0695979);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82990() {
   return (neuron0x2b60c50()*-0.0595672);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b829d0() {
   return (neuron0x2b60f90()*0.215934);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82a10() {
   return (neuron0x2b612d0()*0.0439279);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82a50() {
   return (neuron0x2b61610()*0.0241069);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82a90() {
   return (neuron0x2b61950()*0.0152265);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82ad0() {
   return (neuron0x2b61c90()*-0.40175);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82b10() {
   return (neuron0x2b61fd0()*0.182104);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82b50() {
   return (neuron0x2b62310()*0.549523);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82b90() {
   return (neuron0x2b62650()*-0.333714);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82bd0() {
   return (neuron0x2b62990()*0.0699919);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82660() {
   return (neuron0x2b62cd0()*0.426824);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b826a0() {
   return (neuron0x2b63230()*-0.131013);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b731d0() {
   return (neuron0x2b63450()*-0.0852308);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73210() {
   return (neuron0x2b63790()*-0.145367);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73250() {
   return (neuron0x2b63ad0()*0.0981378);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73290() {
   return (neuron0x2b63e10()*0.0100805);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b732d0() {
   return (neuron0x2b64150()*0.037095);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73310() {
   return (neuron0x2b64490()*-0.159015);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73690() {
   return (neuron0x2b5f8d0()*-0.208614);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b736d0() {
   return (neuron0x2b5fc10()*0.0551881);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73710() {
   return (neuron0x2b5ff50()*0.190034);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73750() {
   return (neuron0x2b60290()*0.713169);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73790() {
   return (neuron0x2b605d0()*-0.0323954);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b737d0() {
   return (neuron0x2b60910()*0.0577128);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73810() {
   return (neuron0x2b60c50()*0.043081);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73850() {
   return (neuron0x2b60f90()*-0.00260314);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73890() {
   return (neuron0x2b612d0()*0.034458);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b738d0() {
   return (neuron0x2b61610()*-0.0254581);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73910() {
   return (neuron0x2b61950()*0.0553946);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73950() {
   return (neuron0x2b61c90()*-0.0596511);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73990() {
   return (neuron0x2b61fd0()*-2.08276);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b739d0() {
   return (neuron0x2b62310()*-0.0554169);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73a10() {
   return (neuron0x2b62650()*0.0986227);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73a50() {
   return (neuron0x2b62990()*-0.0365748);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b734e0() {
   return (neuron0x2b62cd0()*-0.00421022);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73520() {
   return (neuron0x2b63230()*-0.0701025);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73ba0() {
   return (neuron0x2b63450()*-0.0577358);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73be0() {
   return (neuron0x2b63790()*-0.058733);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73c20() {
   return (neuron0x2b63ad0()*-0.0539219);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73c60() {
   return (neuron0x2b63e10()*0.0631031);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73ca0() {
   return (neuron0x2b64150()*0.0124822);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73ce0() {
   return (neuron0x2b64490()*-2.11337);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74060() {
   return (neuron0x2b5f8d0()*-0.0253898);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b740a0() {
   return (neuron0x2b5fc10()*-0.111233);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b740e0() {
   return (neuron0x2b5ff50()*0.212937);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74120() {
   return (neuron0x2b60290()*-0.478026);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74160() {
   return (neuron0x2b605d0()*0.0974407);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b741a0() {
   return (neuron0x2b60910()*-0.0780097);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b741e0() {
   return (neuron0x2b60c50()*0.13215);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74220() {
   return (neuron0x2b60f90()*0.0401566);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74260() {
   return (neuron0x2b612d0()*-0.0281698);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b742a0() {
   return (neuron0x2b61610()*0.0149109);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b742e0() {
   return (neuron0x2b61950()*-0.0433557);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74320() {
   return (neuron0x2b61c90()*0.0459419);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74360() {
   return (neuron0x2b61fd0()*0.64898);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b743a0() {
   return (neuron0x2b62310()*-0.0386809);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b743e0() {
   return (neuron0x2b62650()*-0.451764);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74420() {
   return (neuron0x2b62990()*-0.0291484);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73eb0() {
   return (neuron0x2b62cd0()*0.0714206);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73ef0() {
   return (neuron0x2b63230()*0.00753444);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74570() {
   return (neuron0x2b63450()*0.0011587);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b745b0() {
   return (neuron0x2b63790()*0.0142652);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b745f0() {
   return (neuron0x2b63ad0()*0.0495483);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74630() {
   return (neuron0x2b63e10()*-0.0178552);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74670() {
   return (neuron0x2b64150()*0.0210552);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b746b0() {
   return (neuron0x2b64490()*0.109223);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74a30() {
   return (neuron0x2b5f8d0()*-0.0415451);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74a70() {
   return (neuron0x2b5fc10()*-0.00474525);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74ab0() {
   return (neuron0x2b5ff50()*0.30883);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74af0() {
   return (neuron0x2b60290()*0.17874);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74b30() {
   return (neuron0x2b605d0()*-0.0020311);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74b70() {
   return (neuron0x2b60910()*-0.00530544);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74bb0() {
   return (neuron0x2b60c50()*0.0127132);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74bf0() {
   return (neuron0x2b60f90()*0.000501681);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74c30() {
   return (neuron0x2b612d0()*-0.00112166);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74c70() {
   return (neuron0x2b61610()*-0.00644943);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74cb0() {
   return (neuron0x2b61950()*0.00111931);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74cf0() {
   return (neuron0x2b61c90()*-0.00150535);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74d30() {
   return (neuron0x2b61fd0()*-0.803172);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74d70() {
   return (neuron0x2b62310()*-0.00902137);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74db0() {
   return (neuron0x2b62650()*-0.00188229);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74df0() {
   return (neuron0x2b62990()*-0.0027419);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74880() {
   return (neuron0x2b62cd0()*0.00235226);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b748c0() {
   return (neuron0x2b63230()*-0.00807171);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74f40() {
   return (neuron0x2b63450()*-0.00976463);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74f80() {
   return (neuron0x2b63790()*-0.00655338);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74fc0() {
   return (neuron0x2b63ad0()*0.000693265);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75000() {
   return (neuron0x2b63e10()*-0.000833024);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75040() {
   return (neuron0x2b64150()*0.0024211);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75080() {
   return (neuron0x2b64490()*-0.0476837);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b86f50() {
   return (neuron0x2b5f8d0()*0.114819);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b86f90() {
   return (neuron0x2b5fc10()*0.00445383);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b86fd0() {
   return (neuron0x2b5ff50()*-0.463778);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87010() {
   return (neuron0x2b60290()*-0.016642);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87050() {
   return (neuron0x2b605d0()*0.17613);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87090() {
   return (neuron0x2b60910()*0.103971);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b870d0() {
   return (neuron0x2b60c50()*0.116039);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87110() {
   return (neuron0x2b60f90()*0.0140224);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87150() {
   return (neuron0x2b612d0()*-0.0702799);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87190() {
   return (neuron0x2b61610()*0.027797);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b871d0() {
   return (neuron0x2b61950()*0.879603);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87210() {
   return (neuron0x2b61c90()*-0.140946);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87250() {
   return (neuron0x2b61fd0()*-0.507082);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87290() {
   return (neuron0x2b62310()*0.0575793);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b872d0() {
   return (neuron0x2b62650()*0.0900265);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87310() {
   return (neuron0x2b62990()*0.115836);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b750c0() {
   return (neuron0x2b62cd0()*-0.138999);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75100() {
   return (neuron0x2b63230()*0.0661047);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87460() {
   return (neuron0x2b63450()*-0.00529114);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b874a0() {
   return (neuron0x2b63790()*-0.148413);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b874e0() {
   return (neuron0x2b63ad0()*-0.0686275);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87520() {
   return (neuron0x2b63e10()*-0.0817067);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87560() {
   return (neuron0x2b64150()*0.0128911);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b875a0() {
   return (neuron0x2b64490()*0.0121262);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87920() {
   return (neuron0x2b5f8d0()*0.0542686);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87960() {
   return (neuron0x2b5fc10()*0.00343934);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b879a0() {
   return (neuron0x2b5ff50()*0.441207);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b879e0() {
   return (neuron0x2b60290()*0.0584284);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87a20() {
   return (neuron0x2b605d0()*-0.0318751);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87a60() {
   return (neuron0x2b60910()*0.0204441);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87aa0() {
   return (neuron0x2b60c50()*0.00645638);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87ae0() {
   return (neuron0x2b60f90()*-0.0116961);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87b20() {
   return (neuron0x2b612d0()*-0.015807);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87b60() {
   return (neuron0x2b61610()*0.00651014);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87ba0() {
   return (neuron0x2b61950()*-0.0260018);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87be0() {
   return (neuron0x2b61c90()*0.0196496);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87c20() {
   return (neuron0x2b61fd0()*-0.673273);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87c60() {
   return (neuron0x2b62310()*0.0013938);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87ca0() {
   return (neuron0x2b62650()*-0.02161);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87ce0() {
   return (neuron0x2b62990()*0.0180902);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87770() {
   return (neuron0x2b62cd0()*-0.044588);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b877b0() {
   return (neuron0x2b63230()*0.00170554);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87e30() {
   return (neuron0x2b63450()*0.000986353);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87e70() {
   return (neuron0x2b63790()*-0.0226904);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87eb0() {
   return (neuron0x2b63ad0()*0.0136871);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87ef0() {
   return (neuron0x2b63e10()*-0.0357437);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87f30() {
   return (neuron0x2b64150()*0.0100866);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87f70() {
   return (neuron0x2b64490()*3.32253);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b882f0() {
   return (neuron0x2b5f8d0()*0.0413517);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88330() {
   return (neuron0x2b5fc10()*-0.0507868);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88370() {
   return (neuron0x2b5ff50()*-0.922364);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b883b0() {
   return (neuron0x2b60290()*-0.633982);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b883f0() {
   return (neuron0x2b605d0()*0.01499);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88430() {
   return (neuron0x2b60910()*0.00408656);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88470() {
   return (neuron0x2b60c50()*0.0621505);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b884b0() {
   return (neuron0x2b60f90()*0.179271);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b884f0() {
   return (neuron0x2b612d0()*-0.0282242);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88530() {
   return (neuron0x2b61610()*0.0316338);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88570() {
   return (neuron0x2b61950()*-0.0228409);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b885b0() {
   return (neuron0x2b61c90()*0.0850123);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b885f0() {
   return (neuron0x2b61fd0()*-0.459191);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88630() {
   return (neuron0x2b62310()*0.0505724);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88670() {
   return (neuron0x2b62650()*0.120835);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b886b0() {
   return (neuron0x2b62990()*0.07749);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88140() {
   return (neuron0x2b62cd0()*0.147859);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88180() {
   return (neuron0x2b63230()*-0.0230289);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88800() {
   return (neuron0x2b63450()*-0.0337583);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88840() {
   return (neuron0x2b63790()*-0.079671);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88880() {
   return (neuron0x2b63ad0()*0.0275977);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b888c0() {
   return (neuron0x2b63e10()*-0.0463071);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88900() {
   return (neuron0x2b64150()*0.033676);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88940() {
   return (neuron0x2b64490()*0.002114);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88cc0() {
   return (neuron0x2b5f8d0()*0.0153879);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88d00() {
   return (neuron0x2b5fc10()*-0.00221077);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88d40() {
   return (neuron0x2b5ff50()*-0.0190288);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88d80() {
   return (neuron0x2b60290()*-3.69854);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88dc0() {
   return (neuron0x2b605d0()*-0.00547071);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88e00() {
   return (neuron0x2b60910()*-0.00420178);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88e40() {
   return (neuron0x2b60c50()*-0.00442887);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88e80() {
   return (neuron0x2b60f90()*-0.00611476);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88ec0() {
   return (neuron0x2b612d0()*-0.00750253);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88f00() {
   return (neuron0x2b61610()*-0.00293573);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88f40() {
   return (neuron0x2b61950()*-0.0123137);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88f80() {
   return (neuron0x2b61c90()*-0.00232768);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88fc0() {
   return (neuron0x2b61fd0()*-0.342518);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b89000() {
   return (neuron0x2b62310()*-0.0612895);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b89040() {
   return (neuron0x2b62650()*0.00413055);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b89080() {
   return (neuron0x2b62990()*-0.00539616);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88b10() {
   return (neuron0x2b62cd0()*-0.0323896);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88b50() {
   return (neuron0x2b63230()*0.00568647);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b891d0() {
   return (neuron0x2b63450()*0.00489656);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b89210() {
   return (neuron0x2b63790()*0.00515706);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b89250() {
   return (neuron0x2b63ad0()*-0.00142098);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b89290() {
   return (neuron0x2b63e10()*0.00130326);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b892d0() {
   return (neuron0x2b64150()*-0.00390081);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b89310() {
   return (neuron0x2b64490()*0.0289516);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2929220() {
   return (neuron0x2b64900()*-0.0871598);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2929260() {
   return (neuron0x2b65250()*-0.444891);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66dc0() {
   return (neuron0x2b65d30()*-0.530281);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b66e00() {
   return (neuron0x2b657d0()*-0.432954);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67790() {
   return (neuron0x2b66b10()*0.0400963);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b677d0() {
   return (neuron0x2b674e0()*-0.0668168);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68560() {
   return (neuron0x2b682b0()*-0.0179689);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b685a0() {
   return (neuron0x2b68c80()*-0.077508);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68f30() {
   return (neuron0x2b69650()*-0.0580135);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b68f70() {
   return (neuron0x2b6a130()*1.07249);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69900() {
   return (neuron0x2b6ab00()*0.219833);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b69940() {
   return (neuron0x2b67be0()*-0.00941448);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a3e0() {
   return (neuron0x2b6c6b0()*0.382168);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6a420() {
   return (neuron0x2b6d080()*0.0100224);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6adb0() {
   return (neuron0x2b6da50()*-0.624513);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6adf0() {
   return (neuron0x2b6e420()*0.102206);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67e90() {
   return (neuron0x2b70230()*0.0165461);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b67ed0() {
   return (neuron0x2b70510()*-0.00787543);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c960() {
   return (neuron0x2b70ee0()*-0.0358119);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6c9a0() {
   return (neuron0x2b718b0()*-0.0630113);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d330() {
   return (neuron0x2b72280()*0.0353563);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6d370() {
   return (neuron0x2b72c50()*0.110918);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6dd00() {
   return (neuron0x2b6b7a0()*0.230034);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6dd40() {
   return (neuron0x2b6c170()*-0.0160267);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e6d0() {
   return (neuron0x2b759e0()*-0.654344);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6e710() {
   return (neuron0x2b763b0()*0.00414567);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b62870() {
   return (neuron0x2b76d80()*0.273996);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b628b0() {
   return (neuron0x2b77750()*0.0252077);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b707c0() {
   return (neuron0x2b78120()*-0.0280475);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b70800() {
   return (neuron0x2b78af0()*-1.39402);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71190() {
   return (neuron0x2b794c0()*0.0169692);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b711d0() {
   return (neuron0x2b79e90()*-0.0178974);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71b60() {
   return (neuron0x2b6ff20()*-0.603143);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b71ba0() {
   return (neuron0x2b7ca70()*-0.314422);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72530() {
   return (neuron0x2b7d440()*0.517383);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72570() {
   return (neuron0x2b7de10()*-0.227864);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72f00() {
   return (neuron0x2b7e7e0()*-1.08414);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b72f40() {
   return (neuron0x2b7f1b0()*-0.513768);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6ba50() {
   return (neuron0x2b7fb80()*-0.271458);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6ba90() {
   return (neuron0x2b80550()*0.00236606);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75300() {
   return (neuron0x2b80f20()*-0.0180036);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75340() {
   return (neuron0x2b81b00()*-0.0203693);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75c90() {
   return (neuron0x2b824d0()*-0.078826);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b75cd0() {
   return (neuron0x2b73350()*0.130791);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b76660() {
   return (neuron0x2b73d20()*0.175945);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b766a0() {
   return (neuron0x2b746f0()*3.27948);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77030() {
   return (neuron0x2b86d30()*0.0344372);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77070() {
   return (neuron0x2b875e0()*0.521173);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77a00() {
   return (neuron0x2b87fb0()*0.0667705);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b77a40() {
   return (neuron0x2b88980()*0.335909);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7a140() {
   return (neuron0x2b64900()*1.6696);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7a180() {
   return (neuron0x2b65250()*-0.243939);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6f700() {
   return (neuron0x2b65d30()*8.39616);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b6f740() {
   return (neuron0x2b657d0()*7.307);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7cd20() {
   return (neuron0x2b66b10()*-2.09542);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7cd60() {
   return (neuron0x2b674e0()*2.47194);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d6f0() {
   return (neuron0x2b682b0()*-1.48895);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7d730() {
   return (neuron0x2b68c80()*1.74812);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e0c0() {
   return (neuron0x2b69650()*0.891896);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7e100() {
   return (neuron0x2b6a130()*-3.3724);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ea90() {
   return (neuron0x2b6ab00()*-0.740558);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7ead0() {
   return (neuron0x2b67be0()*0.50019);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f460() {
   return (neuron0x2b6c6b0()*-4.25867);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7f4a0() {
   return (neuron0x2b6d080()*0.520802);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7fe30() {
   return (neuron0x2b6da50()*1.07746);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b7fe70() {
   return (neuron0x2b6e420()*-1.57309);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80800() {
   return (neuron0x2b70230()*-0.448577);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b80840() {
   return (neuron0x2b70510()*0.437776);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b811d0() {
   return (neuron0x2b70ee0()*1.45768);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81210() {
   return (neuron0x2b718b0()*1.09715);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81db0() {
   return (neuron0x2b72280()*-2.36507);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b81df0() {
   return (neuron0x2b72c50()*-0.0205373);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b82780() {
   return (neuron0x2b6b7a0()*-1.89954);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b827c0() {
   return (neuron0x2b6c170()*-0.886657);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73600() {
   return (neuron0x2b759e0()*2.8333);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73640() {
   return (neuron0x2b763b0()*0.873247);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b73fd0() {
   return (neuron0x2b76d80()*0.347128);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b74010() {
   return (neuron0x2b77750()*-0.371062);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b749a0() {
   return (neuron0x2b78120()*0.901968);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b749e0() {
   return (neuron0x2b78af0()*0.788635);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b86ec0() {
   return (neuron0x2b794c0()*0.460695);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b86f00() {
   return (neuron0x2b79e90()*3.26396);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b87890() {
   return (neuron0x2b6ff20()*-0.108971);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b878d0() {
   return (neuron0x2b7ca70()*0.484288);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88260() {
   return (neuron0x2b7d440()*-6.24257);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b882a0() {
   return (neuron0x2b7de10()*1.66988);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88c30() {
   return (neuron0x2b7e7e0()*-1.45972);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b88c70() {
   return (neuron0x2b7f1b0()*-0.814142);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64b20() {
   return (neuron0x2b7fb80()*0.201173);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b64b60() {
   return (neuron0x2b80550()*-0.464894);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b783d0() {
   return (neuron0x2b80f20()*1.00844);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b78410() {
   return (neuron0x2b81b00()*0.763458);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b89350() {
   return (neuron0x2b824d0()*1.28648);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b89390() {
   return (neuron0x2b73350()*-0.663673);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b893d0() {
   return (neuron0x2b73d20()*-2.02933);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b89410() {
   return (neuron0x2b746f0()*-2.72008);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b902c0() {
   return (neuron0x2b86d30()*-0.959576);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90300() {
   return (neuron0x2b875e0()*1.17916);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90340() {
   return (neuron0x2b87fb0()*-3.04108);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90380() {
   return (neuron0x2b88980()*-6.80907);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90700() {
   return (neuron0x2b64900()*-1.32179);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90740() {
   return (neuron0x2b65250()*-0.177534);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90780() {
   return (neuron0x2b65d30()*2.2799);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b907c0() {
   return (neuron0x2b657d0()*-1.12052);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90800() {
   return (neuron0x2b66b10()*-0.278823);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90840() {
   return (neuron0x2b674e0()*-0.948484);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90880() {
   return (neuron0x2b682b0()*0.475888);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b908c0() {
   return (neuron0x2b68c80()*-0.68619);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90900() {
   return (neuron0x2b69650()*-0.0862678);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90940() {
   return (neuron0x2b6a130()*-0.323081);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90980() {
   return (neuron0x2b6ab00()*-0.512982);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b909c0() {
   return (neuron0x2b67be0()*0.244638);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90a00() {
   return (neuron0x2b6c6b0()*1.84361);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90a40() {
   return (neuron0x2b6d080()*0.0453016);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90a80() {
   return (neuron0x2b6da50()*-0.690414);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90ac0() {
   return (neuron0x2b6e420()*0.035693);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90550() {
   return (neuron0x2b70230()*-0.0420031);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90590() {
   return (neuron0x2b70510()*-0.0329751);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90c10() {
   return (neuron0x2b70ee0()*0.656796);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90c50() {
   return (neuron0x2b718b0()*-1.2828);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90c90() {
   return (neuron0x2b72280()*-1.33616);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90cd0() {
   return (neuron0x2b72c50()*1.06913);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90d10() {
   return (neuron0x2b6b7a0()*0.317849);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90d50() {
   return (neuron0x2b6c170()*-0.00105511);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90d90() {
   return (neuron0x2b759e0()*-0.494072);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90dd0() {
   return (neuron0x2b763b0()*-0.26652);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90e10() {
   return (neuron0x2b76d80()*-0.913488);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90e50() {
   return (neuron0x2b77750()*-0.0602418);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90e90() {
   return (neuron0x2b78120()*-0.066414);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90ed0() {
   return (neuron0x2b78af0()*-1.0396);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90f10() {
   return (neuron0x2b794c0()*0.103042);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90f50() {
   return (neuron0x2b79e90()*0.684101);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90b00() {
   return (neuron0x2b6ff20()*-1.34567);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90b40() {
   return (neuron0x2b7ca70()*-0.360162);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90b80() {
   return (neuron0x2b7d440()*-0.601116);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b90bc0() {
   return (neuron0x2b7de10()*-0.0909435);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b911a0() {
   return (neuron0x2b7e7e0()*0.074159);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b911e0() {
   return (neuron0x2b7f1b0()*0.127426);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91220() {
   return (neuron0x2b7fb80()*1.49013);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91260() {
   return (neuron0x2b80550()*0.123581);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b912a0() {
   return (neuron0x2b80f20()*0.11477);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b912e0() {
   return (neuron0x2b81b00()*-0.260755);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91320() {
   return (neuron0x2b824d0()*-0.550199);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91360() {
   return (neuron0x2b73350()*0.154147);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b913a0() {
   return (neuron0x2b73d20()*-0.16831);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b913e0() {
   return (neuron0x2b746f0()*-0.353101);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91420() {
   return (neuron0x2b86d30()*-0.0919843);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91460() {
   return (neuron0x2b875e0()*0.533737);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b914a0() {
   return (neuron0x2b87fb0()*0.640679);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b914e0() {
   return (neuron0x2b88980()*0.684007);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91860() {
   return (neuron0x2b64900()*-0.0457569);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b918a0() {
   return (neuron0x2b65250()*-0.555817);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b918e0() {
   return (neuron0x2b65d30()*0.253052);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91920() {
   return (neuron0x2b657d0()*0.305812);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91960() {
   return (neuron0x2b66b10()*0.222531);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b919a0() {
   return (neuron0x2b674e0()*0.392601);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b919e0() {
   return (neuron0x2b682b0()*0.0380293);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91a20() {
   return (neuron0x2b68c80()*0.102894);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91a60() {
   return (neuron0x2b69650()*-0.0410401);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91aa0() {
   return (neuron0x2b6a130()*-1.35748);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91ae0() {
   return (neuron0x2b6ab00()*0.791923);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91b20() {
   return (neuron0x2b67be0()*0.0609084);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91b60() {
   return (neuron0x2b6c6b0()*0.129064);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91ba0() {
   return (neuron0x2b6d080()*-0.0480626);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91be0() {
   return (neuron0x2b6da50()*-0.485108);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91c20() {
   return (neuron0x2b6e420()*0.9122);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b916b0() {
   return (neuron0x2b70230()*0.0260521);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b916f0() {
   return (neuron0x2b70510()*-0.00278816);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91d70() {
   return (neuron0x2b70ee0()*0.0125482);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91db0() {
   return (neuron0x2b718b0()*-0.0479545);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91df0() {
   return (neuron0x2b72280()*0.679448);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91e30() {
   return (neuron0x2b72c50()*0.114756);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91e70() {
   return (neuron0x2b6b7a0()*-0.0657422);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91eb0() {
   return (neuron0x2b6c170()*0.0259528);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91ef0() {
   return (neuron0x2b759e0()*-2.06056);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91f30() {
   return (neuron0x2b763b0()*0.078996);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91f70() {
   return (neuron0x2b76d80()*1.36396);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91fb0() {
   return (neuron0x2b77750()*0.14264);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91ff0() {
   return (neuron0x2b78120()*-0.001078);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92030() {
   return (neuron0x2b78af0()*0.473474);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92070() {
   return (neuron0x2b794c0()*-0.0305163);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b920b0() {
   return (neuron0x2b79e90()*0.567427);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91c60() {
   return (neuron0x2b6ff20()*-1.93365);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91ca0() {
   return (neuron0x2b7ca70()*-0.136766);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91ce0() {
   return (neuron0x2b7d440()*0.16438);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b91d20() {
   return (neuron0x2b7de10()*2.43509);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92300() {
   return (neuron0x2b7e7e0()*1.58603);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92340() {
   return (neuron0x2b7f1b0()*0.82202);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92380() {
   return (neuron0x2b7fb80()*-1.2534);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b923c0() {
   return (neuron0x2b80550()*0.0121724);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92400() {
   return (neuron0x2b80f20()*0.0202508);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92440() {
   return (neuron0x2b81b00()*-0.104882);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92480() {
   return (neuron0x2b824d0()*-0.12171);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b924c0() {
   return (neuron0x2b73350()*0.448693);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92500() {
   return (neuron0x2b73d20()*0.507437);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92540() {
   return (neuron0x2b746f0()*-1.2369);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92580() {
   return (neuron0x2b86d30()*0.0640325);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b925c0() {
   return (neuron0x2b875e0()*0.852684);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92600() {
   return (neuron0x2b87fb0()*0.0958662);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92640() {
   return (neuron0x2b88980()*0.0443776);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b929c0() {
   return (neuron0x2b64900()*0.490826);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92a00() {
   return (neuron0x2b65250()*0.884989);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92a40() {
   return (neuron0x2b65d30()*0.454501);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92a80() {
   return (neuron0x2b657d0()*0.0284837);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92ac0() {
   return (neuron0x2b66b10()*0.36739);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92b00() {
   return (neuron0x2b674e0()*0.351054);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92b40() {
   return (neuron0x2b682b0()*0.121716);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92b80() {
   return (neuron0x2b68c80()*0.147163);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92bc0() {
   return (neuron0x2b69650()*0.466059);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92c00() {
   return (neuron0x2b6a130()*0.448578);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92c40() {
   return (neuron0x2b6ab00()*0.2427);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92c80() {
   return (neuron0x2b67be0()*0.822049);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92cc0() {
   return (neuron0x2b6c6b0()*0.730822);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92d00() {
   return (neuron0x2b6d080()*0.158413);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92d40() {
   return (neuron0x2b6da50()*0.294417);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92d80() {
   return (neuron0x2b6e420()*0.59908);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92810() {
   return (neuron0x2b70230()*0.136461);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92850() {
   return (neuron0x2b70510()*0.468214);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92ed0() {
   return (neuron0x2b70ee0()*0.735732);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92f10() {
   return (neuron0x2b718b0()*0.295701);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92f50() {
   return (neuron0x2b72280()*0.221358);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92f90() {
   return (neuron0x2b72c50()*0.907426);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92fd0() {
   return (neuron0x2b6b7a0()*-0.0460257);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93010() {
   return (neuron0x2b6c170()*0.004568);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93050() {
   return (neuron0x2b759e0()*0.375078);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93090() {
   return (neuron0x2b763b0()*0.181021);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b930d0() {
   return (neuron0x2b76d80()*-0.198355);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93110() {
   return (neuron0x2b77750()*0.509767);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93150() {
   return (neuron0x2b78120()*0.294442);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93190() {
   return (neuron0x2b78af0()*0.484237);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b931d0() {
   return (neuron0x2b794c0()*0.323572);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93210() {
   return (neuron0x2b79e90()*0.0433325);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92dc0() {
   return (neuron0x2b6ff20()*0.564908);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92e00() {
   return (neuron0x2b7ca70()*0.0199121);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92e40() {
   return (neuron0x2b7d440()*-0.425914);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b92e80() {
   return (neuron0x2b7de10()*0.0992678);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93460() {
   return (neuron0x2b7e7e0()*0.320356);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b934a0() {
   return (neuron0x2b7f1b0()*-0.16106);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b934e0() {
   return (neuron0x2b7fb80()*0.0665494);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93520() {
   return (neuron0x2b80550()*0.308838);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93560() {
   return (neuron0x2b80f20()*0.0200398);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b935a0() {
   return (neuron0x2b81b00()*0.0661623);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b935e0() {
   return (neuron0x2b824d0()*0.194604);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93620() {
   return (neuron0x2b73350()*-0.0793115);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93660() {
   return (neuron0x2b73d20()*0.612795);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b936a0() {
   return (neuron0x2b746f0()*0.213897);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b936e0() {
   return (neuron0x2b86d30()*0.172831);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93720() {
   return (neuron0x2b875e0()*-0.437899);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93760() {
   return (neuron0x2b87fb0()*-0.0098129);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b937a0() {
   return (neuron0x2b88980()*-0.0269787);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93a00() {
   return (neuron0x2b8fb80()*9.19554);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93a40() {
   return (neuron0x2b8ff20()*-11.011);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93a80() {
   return (neuron0x2b903c0()*-0.941587);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93ac0() {
   return (neuron0x2b91520()*-2.76954);
}

double NNfunction_ns_chiMinus1_cL::synapse0x2b93b00() {
   return (neuron0x2b92680()*3.21866);
}

