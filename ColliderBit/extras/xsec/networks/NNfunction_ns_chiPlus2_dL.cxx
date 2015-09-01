#include "NNfunction_ns_chiPlus2_dL.h"
#include <cmath>

double NNfunction_ns_chiPlus2_dL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.8695)/15.1364;
   input1 = (in1 - 26.0787)/964.73;
   input2 = (in2 - 475.209)/518.386;
   input3 = (in3 - 130.766)/739.229;
   input4 = (in4 - 895.549)/826.457;
   input5 = (in5 - 796.735)/825.79;
   input6 = (in6 - 796.638)/823.073;
   input7 = (in7 - 796.725)/806.919;
   input8 = (in8 - 814.866)/853.409;
   input9 = (in9 - 804.394)/840.717;
   input10 = (in10 - 827.012)/845.269;
   input11 = (in11 - 482.53)/390.92;
   input12 = (in12 - 732.641)/743.161;
   input13 = (in13 - 526.53)/445.23;
   input14 = (in14 - 725.603)/696.287;
   input15 = (in15 - 731.031)/700.941;
   input16 = (in16 - 517.746)/475.261;
   input17 = (in17 - 754.771)/770.903;
   input18 = (in18 - 755.896)/773.639;
   input19 = (in19 - 755.807)/737.217;
   input20 = (in20 - -107.518)/449.968;
   input21 = (in21 - -139.8)/1008.59;
   input22 = (in22 - 3.66738)/1025.43;
   input23 = (in23 - -51.0831)/363.559;
   switch(index) {
     case 0:
         return neuron0x3841de0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiPlus2_dL::Value(int index, double* input) {
   input0 = (input[0] - 23.8695)/15.1364;
   input1 = (input[1] - 26.0787)/964.73;
   input2 = (input[2] - 475.209)/518.386;
   input3 = (input[3] - 130.766)/739.229;
   input4 = (input[4] - 895.549)/826.457;
   input5 = (input[5] - 796.735)/825.79;
   input6 = (input[6] - 796.638)/823.073;
   input7 = (input[7] - 796.725)/806.919;
   input8 = (input[8] - 814.866)/853.409;
   input9 = (input[9] - 804.394)/840.717;
   input10 = (input[10] - 827.012)/845.269;
   input11 = (input[11] - 482.53)/390.92;
   input12 = (input[12] - 732.641)/743.161;
   input13 = (input[13] - 526.53)/445.23;
   input14 = (input[14] - 725.603)/696.287;
   input15 = (input[15] - 731.031)/700.941;
   input16 = (input[16] - 517.746)/475.261;
   input17 = (input[17] - 754.771)/770.903;
   input18 = (input[18] - 755.896)/773.639;
   input19 = (input[19] - 755.807)/737.217;
   input20 = (input[20] - -107.518)/449.968;
   input21 = (input[21] - -139.8)/1008.59;
   input22 = (input[22] - 3.66738)/1025.43;
   input23 = (input[23] - -51.0831)/363.559;
   switch(index) {
     case 0:
         return neuron0x3841de0();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiPlus2_dL::neuron0x380dea0() {
   return input0;
}

double NNfunction_ns_chiPlus2_dL::neuron0x380e1e0() {
   return input1;
}

double NNfunction_ns_chiPlus2_dL::neuron0x380e520() {
   return input2;
}

double NNfunction_ns_chiPlus2_dL::neuron0x380e860() {
   return input3;
}

double NNfunction_ns_chiPlus2_dL::neuron0x380eba0() {
   return input4;
}

double NNfunction_ns_chiPlus2_dL::neuron0x380eee0() {
   return input5;
}

double NNfunction_ns_chiPlus2_dL::neuron0x380f220() {
   return input6;
}

double NNfunction_ns_chiPlus2_dL::neuron0x380f560() {
   return input7;
}

double NNfunction_ns_chiPlus2_dL::neuron0x380f8a0() {
   return input8;
}

double NNfunction_ns_chiPlus2_dL::neuron0x380fbe0() {
   return input9;
}

double NNfunction_ns_chiPlus2_dL::neuron0x380ff20() {
   return input10;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3810260() {
   return input11;
}

double NNfunction_ns_chiPlus2_dL::neuron0x38105a0() {
   return input12;
}

double NNfunction_ns_chiPlus2_dL::neuron0x38108e0() {
   return input13;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3810c20() {
   return input14;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3810f60() {
   return input15;
}

double NNfunction_ns_chiPlus2_dL::neuron0x38112a0() {
   return input16;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3811800() {
   return input17;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3811a20() {
   return input18;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3811d60() {
   return input19;
}

double NNfunction_ns_chiPlus2_dL::neuron0x38120a0() {
   return input20;
}

double NNfunction_ns_chiPlus2_dL::neuron0x38123e0() {
   return input21;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3812720() {
   return input22;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3812a60() {
   return input23;
}

double NNfunction_ns_chiPlus2_dL::input0x3812f00() {
   double input = 3.19934;
   input += synapse0x35d7850();
   input += synapse0x380dd60();
   input += synapse0x380dda0();
   input += synapse0x38131b0();
   input += synapse0x38131f0();
   input += synapse0x3813230();
   input += synapse0x3813270();
   input += synapse0x38132b0();
   input += synapse0x38132f0();
   input += synapse0x3813330();
   input += synapse0x3813370();
   input += synapse0x38133b0();
   input += synapse0x38133f0();
   input += synapse0x3813430();
   input += synapse0x3813470();
   input += synapse0x38134b0();
   input += synapse0x380dcd0();
   input += synapse0x380dd10();
   input += synapse0x35c9040();
   input += synapse0x35c9080();
   input += synapse0x3813710();
   input += synapse0x3813750();
   input += synapse0x3813790();
   input += synapse0x38137d0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3812f00() {
   double input = input0x3812f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3813810() {
   double input = -1.19102;
   input += synapse0x3813b50();
   input += synapse0x3813b90();
   input += synapse0x3813bd0();
   input += synapse0x3813c10();
   input += synapse0x3813c50();
   input += synapse0x3813c90();
   input += synapse0x3813cd0();
   input += synapse0x3813d10();
   input += synapse0x3813d50();
   input += synapse0x3813600();
   input += synapse0x3813640();
   input += synapse0x3813680();
   input += synapse0x38136c0();
   input += synapse0x3813fa0();
   input += synapse0x3813fe0();
   input += synapse0x3814020();
   input += synapse0x38139a0();
   input += synapse0x38139e0();
   input += synapse0x3814170();
   input += synapse0x38141b0();
   input += synapse0x38141f0();
   input += synapse0x3814230();
   input += synapse0x3814270();
   input += synapse0x38142b0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3813810() {
   double input = input0x3813810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x38142f0() {
   double input = -0.659449;
   input += synapse0x3814630();
   input += synapse0x3814670();
   input += synapse0x38146b0();
   input += synapse0x38146f0();
   input += synapse0x3814730();
   input += synapse0x3814770();
   input += synapse0x38147b0();
   input += synapse0x38147f0();
   input += synapse0x3814830();
   input += synapse0x3814870();
   input += synapse0x38148b0();
   input += synapse0x38148f0();
   input += synapse0x3814930();
   input += synapse0x3814970();
   input += synapse0x38149b0();
   input += synapse0x38149f0();
   input += synapse0x3814480();
   input += synapse0x38144c0();
   input += synapse0x35d6f60();
   input += synapse0x35d6fa0();
   input += synapse0x37fcf30();
   input += synapse0x37fcf70();
   input += synapse0x37fcfb0();
   input += synapse0x380dde0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x38142f0() {
   double input = input0x38142f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x35d76c0() {
   double input = -0.805056;
   input += synapse0x3813f40();
   input += synapse0x380de20();
   input += synapse0x380de60();
   input += synapse0x3814b40();
   input += synapse0x3814b80();
   input += synapse0x3814bc0();
   input += synapse0x3814c00();
   input += synapse0x3814c40();
   input += synapse0x3814c80();
   input += synapse0x3814cc0();
   input += synapse0x3814d00();
   input += synapse0x3814d40();
   input += synapse0x3814d80();
   input += synapse0x3814dc0();
   input += synapse0x3814e00();
   input += synapse0x3814e40();
   input += synapse0x3813d90();
   input += synapse0x3813dd0();
   input += synapse0x3814f90();
   input += synapse0x3814fd0();
   input += synapse0x3815010();
   input += synapse0x3815050();
   input += synapse0x3815090();
   input += synapse0x38150d0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x35d76c0() {
   double input = input0x35d76c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3815110() {
   double input = 0.12669;
   input += synapse0x3815450();
   input += synapse0x3815490();
   input += synapse0x38154d0();
   input += synapse0x3815510();
   input += synapse0x3815550();
   input += synapse0x3815590();
   input += synapse0x38155d0();
   input += synapse0x3815610();
   input += synapse0x3815650();
   input += synapse0x3815690();
   input += synapse0x38156d0();
   input += synapse0x3815710();
   input += synapse0x3815750();
   input += synapse0x3815790();
   input += synapse0x38157d0();
   input += synapse0x3815810();
   input += synapse0x38152a0();
   input += synapse0x38152e0();
   input += synapse0x3815960();
   input += synapse0x38159a0();
   input += synapse0x38159e0();
   input += synapse0x3815a20();
   input += synapse0x3815a60();
   input += synapse0x3815aa0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3815110() {
   double input = input0x3815110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3815ae0() {
   double input = 1.96833;
   input += synapse0x3815e20();
   input += synapse0x3815e60();
   input += synapse0x3815ea0();
   input += synapse0x3815ee0();
   input += synapse0x3815f20();
   input += synapse0x3815f60();
   input += synapse0x3815fa0();
   input += synapse0x3815fe0();
   input += synapse0x3816020();
   input += synapse0x35d72b0();
   input += synapse0x35d72f0();
   input += synapse0x35d7330();
   input += synapse0x35d7370();
   input += synapse0x35d73b0();
   input += synapse0x35d73f0();
   input += synapse0x35d7430();
   input += synapse0x3815c70();
   input += synapse0x3815cb0();
   input += synapse0x35d7580();
   input += synapse0x35d75c0();
   input += synapse0x35d7600();
   input += synapse0x35d7640();
   input += synapse0x35d7680();
   input += synapse0x3816870();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3815ae0() {
   double input = input0x3815ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x38168b0() {
   double input = 3.36377;
   input += synapse0x3816bf0();
   input += synapse0x3816c30();
   input += synapse0x3816c70();
   input += synapse0x3816cb0();
   input += synapse0x3816cf0();
   input += synapse0x3816d30();
   input += synapse0x3816d70();
   input += synapse0x3816db0();
   input += synapse0x3816df0();
   input += synapse0x3816e30();
   input += synapse0x3816e70();
   input += synapse0x3816eb0();
   input += synapse0x3816ef0();
   input += synapse0x3816f30();
   input += synapse0x3816f70();
   input += synapse0x3816fb0();
   input += synapse0x3816a40();
   input += synapse0x3816a80();
   input += synapse0x3817100();
   input += synapse0x3817140();
   input += synapse0x3817180();
   input += synapse0x38171c0();
   input += synapse0x3817200();
   input += synapse0x3817240();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x38168b0() {
   double input = input0x38168b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3817280() {
   double input = 0.0529421;
   input += synapse0x38175c0();
   input += synapse0x3817600();
   input += synapse0x3817640();
   input += synapse0x3817680();
   input += synapse0x38176c0();
   input += synapse0x3817700();
   input += synapse0x3817740();
   input += synapse0x3817780();
   input += synapse0x38177c0();
   input += synapse0x3817800();
   input += synapse0x3817840();
   input += synapse0x3817880();
   input += synapse0x38178c0();
   input += synapse0x3817900();
   input += synapse0x3817940();
   input += synapse0x3817980();
   input += synapse0x3817410();
   input += synapse0x3817450();
   input += synapse0x3817ad0();
   input += synapse0x3817b10();
   input += synapse0x3817b50();
   input += synapse0x3817b90();
   input += synapse0x3817bd0();
   input += synapse0x3817c10();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3817280() {
   double input = input0x3817280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3817c50() {
   double input = 1.31333;
   input += synapse0x38116f0();
   input += synapse0x3811730();
   input += synapse0x3811770();
   input += synapse0x38117b0();
   input += synapse0x38181a0();
   input += synapse0x38181e0();
   input += synapse0x3818220();
   input += synapse0x3818260();
   input += synapse0x38182a0();
   input += synapse0x38182e0();
   input += synapse0x3818320();
   input += synapse0x3818360();
   input += synapse0x38183a0();
   input += synapse0x38183e0();
   input += synapse0x3818420();
   input += synapse0x3818460();
   input += synapse0x3817de0();
   input += synapse0x3817e20();
   input += synapse0x38185b0();
   input += synapse0x38185f0();
   input += synapse0x3818630();
   input += synapse0x3818670();
   input += synapse0x38186b0();
   input += synapse0x38186f0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3817c50() {
   double input = input0x3817c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3818730() {
   double input = 0.0682583;
   input += synapse0x3818a70();
   input += synapse0x3818ab0();
   input += synapse0x3818af0();
   input += synapse0x3818b30();
   input += synapse0x3818b70();
   input += synapse0x3818bb0();
   input += synapse0x3818bf0();
   input += synapse0x3818c30();
   input += synapse0x3818c70();
   input += synapse0x3818cb0();
   input += synapse0x3818cf0();
   input += synapse0x3818d30();
   input += synapse0x3818d70();
   input += synapse0x3818db0();
   input += synapse0x3818df0();
   input += synapse0x3818e30();
   input += synapse0x38188c0();
   input += synapse0x3818900();
   input += synapse0x3818f80();
   input += synapse0x3818fc0();
   input += synapse0x3819000();
   input += synapse0x3819040();
   input += synapse0x3819080();
   input += synapse0x38190c0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3818730() {
   double input = input0x3818730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3819100() {
   double input = -0.691489;
   input += synapse0x3819440();
   input += synapse0x3819480();
   input += synapse0x38194c0();
   input += synapse0x3819500();
   input += synapse0x3819540();
   input += synapse0x3819580();
   input += synapse0x38195c0();
   input += synapse0x3819600();
   input += synapse0x3819640();
   input += synapse0x3819680();
   input += synapse0x38196c0();
   input += synapse0x3819700();
   input += synapse0x3819740();
   input += synapse0x3819780();
   input += synapse0x38197c0();
   input += synapse0x3819800();
   input += synapse0x3819290();
   input += synapse0x38192d0();
   input += synapse0x3816060();
   input += synapse0x38160a0();
   input += synapse0x38160e0();
   input += synapse0x3816120();
   input += synapse0x3816160();
   input += synapse0x38161a0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3819100() {
   double input = input0x3819100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x38161e0() {
   double input = 1.46902;
   input += synapse0x3816520();
   input += synapse0x3816560();
   input += synapse0x38165a0();
   input += synapse0x38165e0();
   input += synapse0x3816620();
   input += synapse0x3816660();
   input += synapse0x38166a0();
   input += synapse0x38166e0();
   input += synapse0x3816720();
   input += synapse0x3816760();
   input += synapse0x38167a0();
   input += synapse0x38167e0();
   input += synapse0x3816820();
   input += synapse0x381a960();
   input += synapse0x381a9a0();
   input += synapse0x381a9e0();
   input += synapse0x3816370();
   input += synapse0x38163b0();
   input += synapse0x381ab30();
   input += synapse0x381ab70();
   input += synapse0x381abb0();
   input += synapse0x381abf0();
   input += synapse0x381ac30();
   input += synapse0x381ac70();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x38161e0() {
   double input = input0x38161e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x381acb0() {
   double input = -0.00574741;
   input += synapse0x381aff0();
   input += synapse0x381b030();
   input += synapse0x381b070();
   input += synapse0x381b0b0();
   input += synapse0x381b0f0();
   input += synapse0x381b130();
   input += synapse0x381b170();
   input += synapse0x381b1b0();
   input += synapse0x381b1f0();
   input += synapse0x381b230();
   input += synapse0x381b270();
   input += synapse0x381b2b0();
   input += synapse0x381b2f0();
   input += synapse0x381b330();
   input += synapse0x381b370();
   input += synapse0x381b3b0();
   input += synapse0x381ae40();
   input += synapse0x381ae80();
   input += synapse0x381b500();
   input += synapse0x381b540();
   input += synapse0x381b580();
   input += synapse0x381b5c0();
   input += synapse0x381b600();
   input += synapse0x381b640();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x381acb0() {
   double input = input0x381acb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x381b680() {
   double input = 0.347737;
   input += synapse0x381b9c0();
   input += synapse0x381ba00();
   input += synapse0x381ba40();
   input += synapse0x381ba80();
   input += synapse0x381bac0();
   input += synapse0x381bb00();
   input += synapse0x381bb40();
   input += synapse0x381bb80();
   input += synapse0x381bbc0();
   input += synapse0x381bc00();
   input += synapse0x381bc40();
   input += synapse0x381bc80();
   input += synapse0x381bcc0();
   input += synapse0x381bd00();
   input += synapse0x381bd40();
   input += synapse0x381bd80();
   input += synapse0x381b810();
   input += synapse0x381b850();
   input += synapse0x381bed0();
   input += synapse0x381bf10();
   input += synapse0x381bf50();
   input += synapse0x381bf90();
   input += synapse0x381bfd0();
   input += synapse0x381c010();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x381b680() {
   double input = input0x381b680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x381c050() {
   double input = 0.201;
   input += synapse0x381c390();
   input += synapse0x381c3d0();
   input += synapse0x381c410();
   input += synapse0x381c450();
   input += synapse0x381c490();
   input += synapse0x381c4d0();
   input += synapse0x381c510();
   input += synapse0x381c550();
   input += synapse0x381c590();
   input += synapse0x381c5d0();
   input += synapse0x381c610();
   input += synapse0x381c650();
   input += synapse0x381c690();
   input += synapse0x381c6d0();
   input += synapse0x381c710();
   input += synapse0x381c750();
   input += synapse0x381c1e0();
   input += synapse0x381c220();
   input += synapse0x381c8a0();
   input += synapse0x381c8e0();
   input += synapse0x381c920();
   input += synapse0x381c960();
   input += synapse0x381c9a0();
   input += synapse0x381c9e0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x381c050() {
   double input = input0x381c050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x381ca20() {
   double input = -0.465128;
   input += synapse0x381cd60();
   input += synapse0x380e0c0();
   input += synapse0x380e100();
   input += synapse0x380e400();
   input += synapse0x380e440();
   input += synapse0x380e740();
   input += synapse0x380e780();
   input += synapse0x380ea80();
   input += synapse0x380eac0();
   input += synapse0x380edc0();
   input += synapse0x380ee00();
   input += synapse0x380f100();
   input += synapse0x380f140();
   input += synapse0x380f440();
   input += synapse0x380f480();
   input += synapse0x380f780();
   input += synapse0x380f7c0();
   input += synapse0x380fac0();
   input += synapse0x380fb00();
   input += synapse0x380fe00();
   input += synapse0x380fe40();
   input += synapse0x3810140();
   input += synapse0x3810180();
   input += synapse0x3810480();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x381ca20() {
   double input = input0x381ca20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x381e830() {
   double input = -0.444378;
   input += synapse0x38104c0();
   input += synapse0x3811180();
   input += synapse0x38111c0();
   input += synapse0x381cbb0();
   input += synapse0x381cbf0();
   input += synapse0x38114c0();
   input += synapse0x3811500();
   input += synapse0x35c8f20();
   input += synapse0x35c8f60();
   input += synapse0x3811c40();
   input += synapse0x3811c80();
   input += synapse0x3811f80();
   input += synapse0x3811fc0();
   input += synapse0x38122c0();
   input += synapse0x3812300();
   input += synapse0x3812600();
   input += synapse0x3812640();
   input += synapse0x3812940();
   input += synapse0x3812980();
   input += synapse0x3812c80();
   input += synapse0x3812cc0();
   input += synapse0x38107c0();
   input += synapse0x3810800();
   input += synapse0x381ead0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x381e830() {
   double input = input0x381e830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x381eb10() {
   double input = -4.06498;
   input += synapse0x381ee50();
   input += synapse0x381ee90();
   input += synapse0x381eed0();
   input += synapse0x381ef10();
   input += synapse0x381ef50();
   input += synapse0x381ef90();
   input += synapse0x381efd0();
   input += synapse0x381f010();
   input += synapse0x381f050();
   input += synapse0x381f090();
   input += synapse0x381f0d0();
   input += synapse0x381f110();
   input += synapse0x381f150();
   input += synapse0x381f190();
   input += synapse0x381f1d0();
   input += synapse0x381f210();
   input += synapse0x381eca0();
   input += synapse0x381ece0();
   input += synapse0x381f360();
   input += synapse0x381f3a0();
   input += synapse0x381f3e0();
   input += synapse0x381f420();
   input += synapse0x381f460();
   input += synapse0x381f4a0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x381eb10() {
   double input = input0x381eb10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x381f4e0() {
   double input = 0.724269;
   input += synapse0x381f820();
   input += synapse0x381f860();
   input += synapse0x381f8a0();
   input += synapse0x381f8e0();
   input += synapse0x381f920();
   input += synapse0x381f960();
   input += synapse0x381f9a0();
   input += synapse0x381f9e0();
   input += synapse0x381fa20();
   input += synapse0x381fa60();
   input += synapse0x381faa0();
   input += synapse0x381fae0();
   input += synapse0x381fb20();
   input += synapse0x381fb60();
   input += synapse0x381fba0();
   input += synapse0x381fbe0();
   input += synapse0x381f670();
   input += synapse0x381f6b0();
   input += synapse0x381fd30();
   input += synapse0x381fd70();
   input += synapse0x381fdb0();
   input += synapse0x381fdf0();
   input += synapse0x381fe30();
   input += synapse0x381fe70();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x381f4e0() {
   double input = input0x381f4e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x381feb0() {
   double input = 0.90057;
   input += synapse0x38201f0();
   input += synapse0x3820230();
   input += synapse0x3820270();
   input += synapse0x38202b0();
   input += synapse0x38202f0();
   input += synapse0x3820330();
   input += synapse0x3820370();
   input += synapse0x38203b0();
   input += synapse0x38203f0();
   input += synapse0x3820430();
   input += synapse0x3820470();
   input += synapse0x38204b0();
   input += synapse0x38204f0();
   input += synapse0x3820530();
   input += synapse0x3820570();
   input += synapse0x38205b0();
   input += synapse0x3820040();
   input += synapse0x3820080();
   input += synapse0x3820700();
   input += synapse0x3820740();
   input += synapse0x3820780();
   input += synapse0x38207c0();
   input += synapse0x3820800();
   input += synapse0x3820840();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x381feb0() {
   double input = input0x381feb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3820880() {
   double input = 0.0734438;
   input += synapse0x3820bc0();
   input += synapse0x3820c00();
   input += synapse0x3820c40();
   input += synapse0x3820c80();
   input += synapse0x3820cc0();
   input += synapse0x3820d00();
   input += synapse0x3820d40();
   input += synapse0x3820d80();
   input += synapse0x3820dc0();
   input += synapse0x3820e00();
   input += synapse0x3820e40();
   input += synapse0x3820e80();
   input += synapse0x3820ec0();
   input += synapse0x3820f00();
   input += synapse0x3820f40();
   input += synapse0x3820f80();
   input += synapse0x3820a10();
   input += synapse0x3820a50();
   input += synapse0x38210d0();
   input += synapse0x3821110();
   input += synapse0x3821150();
   input += synapse0x3821190();
   input += synapse0x38211d0();
   input += synapse0x3821210();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3820880() {
   double input = input0x3820880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3821250() {
   double input = 0.644497;
   input += synapse0x3821590();
   input += synapse0x38215d0();
   input += synapse0x3821610();
   input += synapse0x3821650();
   input += synapse0x3821690();
   input += synapse0x38216d0();
   input += synapse0x3821710();
   input += synapse0x3821750();
   input += synapse0x3821790();
   input += synapse0x3819950();
   input += synapse0x3819990();
   input += synapse0x38199d0();
   input += synapse0x3819a10();
   input += synapse0x3819a50();
   input += synapse0x3819a90();
   input += synapse0x3819ad0();
   input += synapse0x38213e0();
   input += synapse0x3821420();
   input += synapse0x3819c20();
   input += synapse0x3819c60();
   input += synapse0x3819ca0();
   input += synapse0x3819ce0();
   input += synapse0x3819d20();
   input += synapse0x3819d60();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3821250() {
   double input = input0x3821250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3819da0() {
   double input = -0.434948;
   input += synapse0x381a0e0();
   input += synapse0x381a120();
   input += synapse0x381a160();
   input += synapse0x381a1a0();
   input += synapse0x381a1e0();
   input += synapse0x381a220();
   input += synapse0x381a260();
   input += synapse0x381a2a0();
   input += synapse0x381a2e0();
   input += synapse0x381a320();
   input += synapse0x381a360();
   input += synapse0x381a3a0();
   input += synapse0x381a3e0();
   input += synapse0x381a420();
   input += synapse0x381a460();
   input += synapse0x381a4a0();
   input += synapse0x3819f30();
   input += synapse0x3819f70();
   input += synapse0x381a5f0();
   input += synapse0x381a630();
   input += synapse0x381a670();
   input += synapse0x381a6b0();
   input += synapse0x381a6f0();
   input += synapse0x381a730();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3819da0() {
   double input = input0x3819da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x381a770() {
   double input = 0.349085;
   input += synapse0x381a900();
   input += synapse0x3823990();
   input += synapse0x38239d0();
   input += synapse0x3823a10();
   input += synapse0x3823a50();
   input += synapse0x3823a90();
   input += synapse0x3823ad0();
   input += synapse0x3823b10();
   input += synapse0x3823b50();
   input += synapse0x3823b90();
   input += synapse0x3823bd0();
   input += synapse0x3823c10();
   input += synapse0x3823c50();
   input += synapse0x3823c90();
   input += synapse0x3823cd0();
   input += synapse0x3823d10();
   input += synapse0x38237e0();
   input += synapse0x3823820();
   input += synapse0x3823e60();
   input += synapse0x3823ea0();
   input += synapse0x3823ee0();
   input += synapse0x3823f20();
   input += synapse0x3823f60();
   input += synapse0x3823fa0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x381a770() {
   double input = input0x381a770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3823fe0() {
   double input = 0.211267;
   input += synapse0x3824320();
   input += synapse0x3824360();
   input += synapse0x38243a0();
   input += synapse0x38243e0();
   input += synapse0x3824420();
   input += synapse0x3824460();
   input += synapse0x38244a0();
   input += synapse0x38244e0();
   input += synapse0x3824520();
   input += synapse0x3824560();
   input += synapse0x38245a0();
   input += synapse0x38245e0();
   input += synapse0x3824620();
   input += synapse0x3824660();
   input += synapse0x38246a0();
   input += synapse0x38246e0();
   input += synapse0x3824170();
   input += synapse0x38241b0();
   input += synapse0x3824830();
   input += synapse0x3824870();
   input += synapse0x38248b0();
   input += synapse0x38248f0();
   input += synapse0x3824930();
   input += synapse0x3824970();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3823fe0() {
   double input = input0x3823fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x38249b0() {
   double input = -3.85775;
   input += synapse0x3824cf0();
   input += synapse0x3824d30();
   input += synapse0x3824d70();
   input += synapse0x3824db0();
   input += synapse0x3824df0();
   input += synapse0x3824e30();
   input += synapse0x3824e70();
   input += synapse0x3824eb0();
   input += synapse0x3824ef0();
   input += synapse0x3824f30();
   input += synapse0x3824f70();
   input += synapse0x3824fb0();
   input += synapse0x3824ff0();
   input += synapse0x3825030();
   input += synapse0x3825070();
   input += synapse0x38250b0();
   input += synapse0x3824b40();
   input += synapse0x3824b80();
   input += synapse0x3825200();
   input += synapse0x3825240();
   input += synapse0x3825280();
   input += synapse0x38252c0();
   input += synapse0x3825300();
   input += synapse0x3825340();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x38249b0() {
   double input = input0x38249b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3825380() {
   double input = -0.413378;
   input += synapse0x38256c0();
   input += synapse0x3825700();
   input += synapse0x3825740();
   input += synapse0x3825780();
   input += synapse0x38257c0();
   input += synapse0x3825800();
   input += synapse0x3825840();
   input += synapse0x3825880();
   input += synapse0x38258c0();
   input += synapse0x3825900();
   input += synapse0x3825940();
   input += synapse0x3825980();
   input += synapse0x38259c0();
   input += synapse0x3825a00();
   input += synapse0x3825a40();
   input += synapse0x3825a80();
   input += synapse0x3825510();
   input += synapse0x3825550();
   input += synapse0x3825bd0();
   input += synapse0x3825c10();
   input += synapse0x3825c50();
   input += synapse0x3825c90();
   input += synapse0x3825cd0();
   input += synapse0x3825d10();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3825380() {
   double input = input0x3825380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3825d50() {
   double input = 0.734892;
   input += synapse0x3826090();
   input += synapse0x38260d0();
   input += synapse0x3826110();
   input += synapse0x3826150();
   input += synapse0x3826190();
   input += synapse0x38261d0();
   input += synapse0x3826210();
   input += synapse0x3826250();
   input += synapse0x3826290();
   input += synapse0x38262d0();
   input += synapse0x3826310();
   input += synapse0x3826350();
   input += synapse0x3826390();
   input += synapse0x38263d0();
   input += synapse0x3826410();
   input += synapse0x3826450();
   input += synapse0x3825ee0();
   input += synapse0x3825f20();
   input += synapse0x38265a0();
   input += synapse0x38265e0();
   input += synapse0x3826620();
   input += synapse0x3826660();
   input += synapse0x38266a0();
   input += synapse0x38266e0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3825d50() {
   double input = input0x3825d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3826720() {
   double input = 0.0743396;
   input += synapse0x3826a60();
   input += synapse0x3826aa0();
   input += synapse0x3826ae0();
   input += synapse0x3826b20();
   input += synapse0x3826b60();
   input += synapse0x3826ba0();
   input += synapse0x3826be0();
   input += synapse0x3826c20();
   input += synapse0x3826c60();
   input += synapse0x3826ca0();
   input += synapse0x3826ce0();
   input += synapse0x3826d20();
   input += synapse0x3826d60();
   input += synapse0x3826da0();
   input += synapse0x3826de0();
   input += synapse0x3826e20();
   input += synapse0x38268b0();
   input += synapse0x38268f0();
   input += synapse0x3826f70();
   input += synapse0x3826fb0();
   input += synapse0x3826ff0();
   input += synapse0x3827030();
   input += synapse0x3827070();
   input += synapse0x38270b0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3826720() {
   double input = input0x3826720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x38270f0() {
   double input = -0.159637;
   input += synapse0x3827430();
   input += synapse0x3827470();
   input += synapse0x38274b0();
   input += synapse0x38274f0();
   input += synapse0x3827530();
   input += synapse0x3827570();
   input += synapse0x38275b0();
   input += synapse0x38275f0();
   input += synapse0x3827630();
   input += synapse0x3827670();
   input += synapse0x38276b0();
   input += synapse0x38276f0();
   input += synapse0x3827730();
   input += synapse0x3827770();
   input += synapse0x38277b0();
   input += synapse0x38277f0();
   input += synapse0x3827280();
   input += synapse0x38272c0();
   input += synapse0x3827940();
   input += synapse0x3827980();
   input += synapse0x38279c0();
   input += synapse0x3827a00();
   input += synapse0x3827a40();
   input += synapse0x3827a80();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x38270f0() {
   double input = input0x38270f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3827ac0() {
   double input = 0.463874;
   input += synapse0x3827e00();
   input += synapse0x3827e40();
   input += synapse0x3827e80();
   input += synapse0x3827ec0();
   input += synapse0x3827f00();
   input += synapse0x3827f40();
   input += synapse0x3827f80();
   input += synapse0x3827fc0();
   input += synapse0x3828000();
   input += synapse0x3828040();
   input += synapse0x3828080();
   input += synapse0x38280c0();
   input += synapse0x3828100();
   input += synapse0x3828140();
   input += synapse0x3828180();
   input += synapse0x38281c0();
   input += synapse0x3827c50();
   input += synapse0x3827c90();
   input += synapse0x3828310();
   input += synapse0x3828350();
   input += synapse0x3828390();
   input += synapse0x38283d0();
   input += synapse0x3828410();
   input += synapse0x3828450();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3827ac0() {
   double input = input0x3827ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3828490() {
   double input = -0.336063;
   input += synapse0x38287d0();
   input += synapse0x381cda0();
   input += synapse0x381cde0();
   input += synapse0x381ce20();
   input += synapse0x381d070();
   input += synapse0x381d0b0();
   input += synapse0x381d0f0();
   input += synapse0x381d340();
   input += synapse0x381d380();
   input += synapse0x381d5d0();
   input += synapse0x381d610();
   input += synapse0x381d650();
   input += synapse0x381d8a0();
   input += synapse0x381d8e0();
   input += synapse0x381db30();
   input += synapse0x381db70();
   input += synapse0x3828620();
   input += synapse0x3828660();
   input += synapse0x381dcc0();
   input += synapse0x381e1d0();
   input += synapse0x381e210();
   input += synapse0x381e250();
   input += synapse0x381e4a0();
   input += synapse0x381e4e0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3828490() {
   double input = input0x3828490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x381e520() {
   double input = -0.810121;
   input += synapse0x381dd90();
   input += synapse0x381ddd0();
   input += synapse0x381de10();
   input += synapse0x381de50();
   input += synapse0x381e7d0();
   input += synapse0x382ab20();
   input += synapse0x382ab60();
   input += synapse0x382aba0();
   input += synapse0x382abe0();
   input += synapse0x382ac20();
   input += synapse0x382ac60();
   input += synapse0x382aca0();
   input += synapse0x382ace0();
   input += synapse0x382ad20();
   input += synapse0x382ad60();
   input += synapse0x382ada0();
   input += synapse0x381e6b0();
   input += synapse0x381e6f0();
   input += synapse0x382aef0();
   input += synapse0x382af30();
   input += synapse0x382af70();
   input += synapse0x382afb0();
   input += synapse0x382aff0();
   input += synapse0x382b030();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x381e520() {
   double input = input0x381e520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x382b070() {
   double input = 0.207546;
   input += synapse0x382b3b0();
   input += synapse0x382b3f0();
   input += synapse0x382b430();
   input += synapse0x382b470();
   input += synapse0x382b4b0();
   input += synapse0x382b4f0();
   input += synapse0x382b530();
   input += synapse0x382b570();
   input += synapse0x382b5b0();
   input += synapse0x382b5f0();
   input += synapse0x382b630();
   input += synapse0x382b670();
   input += synapse0x382b6b0();
   input += synapse0x382b6f0();
   input += synapse0x382b730();
   input += synapse0x382b770();
   input += synapse0x382b200();
   input += synapse0x382b240();
   input += synapse0x382b8c0();
   input += synapse0x382b900();
   input += synapse0x382b940();
   input += synapse0x382b980();
   input += synapse0x382b9c0();
   input += synapse0x382ba00();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x382b070() {
   double input = input0x382b070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x382ba40() {
   double input = -0.597356;
   input += synapse0x382bd80();
   input += synapse0x382bdc0();
   input += synapse0x382be00();
   input += synapse0x382be40();
   input += synapse0x382be80();
   input += synapse0x382bec0();
   input += synapse0x382bf00();
   input += synapse0x382bf40();
   input += synapse0x382bf80();
   input += synapse0x382bfc0();
   input += synapse0x382c000();
   input += synapse0x382c040();
   input += synapse0x382c080();
   input += synapse0x382c0c0();
   input += synapse0x382c100();
   input += synapse0x382c140();
   input += synapse0x382bbd0();
   input += synapse0x382bc10();
   input += synapse0x382c290();
   input += synapse0x382c2d0();
   input += synapse0x382c310();
   input += synapse0x382c350();
   input += synapse0x382c390();
   input += synapse0x382c3d0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x382ba40() {
   double input = input0x382ba40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x382c410() {
   double input = -0.107583;
   input += synapse0x382c750();
   input += synapse0x382c790();
   input += synapse0x382c7d0();
   input += synapse0x382c810();
   input += synapse0x382c850();
   input += synapse0x382c890();
   input += synapse0x382c8d0();
   input += synapse0x382c910();
   input += synapse0x382c950();
   input += synapse0x382c990();
   input += synapse0x382c9d0();
   input += synapse0x382ca10();
   input += synapse0x382ca50();
   input += synapse0x382ca90();
   input += synapse0x382cad0();
   input += synapse0x382cb10();
   input += synapse0x382c5a0();
   input += synapse0x382c5e0();
   input += synapse0x382cc60();
   input += synapse0x382cca0();
   input += synapse0x382cce0();
   input += synapse0x382cd20();
   input += synapse0x382cd60();
   input += synapse0x382cda0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x382c410() {
   double input = input0x382c410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x382cde0() {
   double input = 0.164866;
   input += synapse0x382d120();
   input += synapse0x382d160();
   input += synapse0x382d1a0();
   input += synapse0x382d1e0();
   input += synapse0x382d220();
   input += synapse0x382d260();
   input += synapse0x382d2a0();
   input += synapse0x382d2e0();
   input += synapse0x382d320();
   input += synapse0x382d360();
   input += synapse0x382d3a0();
   input += synapse0x382d3e0();
   input += synapse0x382d420();
   input += synapse0x382d460();
   input += synapse0x382d4a0();
   input += synapse0x382d4e0();
   input += synapse0x382cf70();
   input += synapse0x382cfb0();
   input += synapse0x382d630();
   input += synapse0x382d670();
   input += synapse0x382d6b0();
   input += synapse0x382d6f0();
   input += synapse0x382d730();
   input += synapse0x382d770();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x382cde0() {
   double input = input0x382cde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x382d7b0() {
   double input = -0.873684;
   input += synapse0x382daf0();
   input += synapse0x382db30();
   input += synapse0x382db70();
   input += synapse0x382dbb0();
   input += synapse0x382dbf0();
   input += synapse0x382dc30();
   input += synapse0x382dc70();
   input += synapse0x382dcb0();
   input += synapse0x382dcf0();
   input += synapse0x382dd30();
   input += synapse0x382dd70();
   input += synapse0x382ddb0();
   input += synapse0x382ddf0();
   input += synapse0x382de30();
   input += synapse0x382de70();
   input += synapse0x382deb0();
   input += synapse0x382d940();
   input += synapse0x382d980();
   input += synapse0x382e000();
   input += synapse0x382e040();
   input += synapse0x382e080();
   input += synapse0x382e0c0();
   input += synapse0x382e100();
   input += synapse0x382e140();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x382d7b0() {
   double input = input0x382d7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x382e180() {
   double input = 0.131065;
   input += synapse0x382e4c0();
   input += synapse0x382e500();
   input += synapse0x382e540();
   input += synapse0x382e580();
   input += synapse0x382e5c0();
   input += synapse0x382e600();
   input += synapse0x382e640();
   input += synapse0x382e680();
   input += synapse0x382e6c0();
   input += synapse0x382e700();
   input += synapse0x382e740();
   input += synapse0x382e780();
   input += synapse0x382e7c0();
   input += synapse0x382e800();
   input += synapse0x382e840();
   input += synapse0x382e880();
   input += synapse0x382e310();
   input += synapse0x382e350();
   input += synapse0x382e9d0();
   input += synapse0x382ea10();
   input += synapse0x382ea50();
   input += synapse0x382ea90();
   input += synapse0x382ead0();
   input += synapse0x382eb10();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x382e180() {
   double input = input0x382e180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x382eb50() {
   double input = -0.405875;
   input += synapse0x382ee90();
   input += synapse0x382eed0();
   input += synapse0x382ef10();
   input += synapse0x382ef50();
   input += synapse0x382ef90();
   input += synapse0x382efd0();
   input += synapse0x382f010();
   input += synapse0x382f050();
   input += synapse0x382f090();
   input += synapse0x382f0d0();
   input += synapse0x382f110();
   input += synapse0x382f150();
   input += synapse0x382f190();
   input += synapse0x382f1d0();
   input += synapse0x382f210();
   input += synapse0x382f250();
   input += synapse0x382ece0();
   input += synapse0x382ed20();
   input += synapse0x382f3a0();
   input += synapse0x382f3e0();
   input += synapse0x382f420();
   input += synapse0x382f460();
   input += synapse0x382f4a0();
   input += synapse0x382f4e0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x382eb50() {
   double input = input0x382eb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x382f520() {
   double input = -0.809979;
   input += synapse0x3817f90();
   input += synapse0x3817fd0();
   input += synapse0x3818010();
   input += synapse0x3818050();
   input += synapse0x3818090();
   input += synapse0x38180d0();
   input += synapse0x3818110();
   input += synapse0x3818150();
   input += synapse0x382fc70();
   input += synapse0x382fcb0();
   input += synapse0x382fcf0();
   input += synapse0x382fd30();
   input += synapse0x382fd70();
   input += synapse0x382fdb0();
   input += synapse0x382fdf0();
   input += synapse0x382fe30();
   input += synapse0x382f6b0();
   input += synapse0x382f6f0();
   input += synapse0x382ff80();
   input += synapse0x382ffc0();
   input += synapse0x3830000();
   input += synapse0x3830040();
   input += synapse0x3830080();
   input += synapse0x38300c0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x382f520() {
   double input = input0x382f520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3830100() {
   double input = -0.650111;
   input += synapse0x3830440();
   input += synapse0x3830480();
   input += synapse0x38304c0();
   input += synapse0x3830500();
   input += synapse0x3830540();
   input += synapse0x3830580();
   input += synapse0x38305c0();
   input += synapse0x3830600();
   input += synapse0x3830640();
   input += synapse0x3830680();
   input += synapse0x38306c0();
   input += synapse0x3830700();
   input += synapse0x3830740();
   input += synapse0x3830780();
   input += synapse0x38307c0();
   input += synapse0x3830800();
   input += synapse0x3830290();
   input += synapse0x38302d0();
   input += synapse0x3830950();
   input += synapse0x3830990();
   input += synapse0x38309d0();
   input += synapse0x3830a10();
   input += synapse0x3830a50();
   input += synapse0x3830a90();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3830100() {
   double input = input0x3830100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3830ad0() {
   double input = -0.608237;
   input += synapse0x3830e10();
   input += synapse0x3830e50();
   input += synapse0x3830e90();
   input += synapse0x3830ed0();
   input += synapse0x3830f10();
   input += synapse0x3830f50();
   input += synapse0x3830f90();
   input += synapse0x3830fd0();
   input += synapse0x3831010();
   input += synapse0x3831050();
   input += synapse0x3831090();
   input += synapse0x38310d0();
   input += synapse0x3831110();
   input += synapse0x3831150();
   input += synapse0x3831190();
   input += synapse0x38311d0();
   input += synapse0x3830c60();
   input += synapse0x3830ca0();
   input += synapse0x38217d0();
   input += synapse0x3821810();
   input += synapse0x3821850();
   input += synapse0x3821890();
   input += synapse0x38218d0();
   input += synapse0x3821910();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3830ad0() {
   double input = input0x3830ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3821950() {
   double input = 0.0701565;
   input += synapse0x3821c90();
   input += synapse0x3821cd0();
   input += synapse0x3821d10();
   input += synapse0x3821d50();
   input += synapse0x3821d90();
   input += synapse0x3821dd0();
   input += synapse0x3821e10();
   input += synapse0x3821e50();
   input += synapse0x3821e90();
   input += synapse0x3821ed0();
   input += synapse0x3821f10();
   input += synapse0x3821f50();
   input += synapse0x3821f90();
   input += synapse0x3821fd0();
   input += synapse0x3822010();
   input += synapse0x3822050();
   input += synapse0x3821ae0();
   input += synapse0x3821b20();
   input += synapse0x38221a0();
   input += synapse0x38221e0();
   input += synapse0x3822220();
   input += synapse0x3822260();
   input += synapse0x38222a0();
   input += synapse0x38222e0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3821950() {
   double input = input0x3821950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3822320() {
   double input = -0.578821;
   input += synapse0x3822660();
   input += synapse0x38226a0();
   input += synapse0x38226e0();
   input += synapse0x3822720();
   input += synapse0x3822760();
   input += synapse0x38227a0();
   input += synapse0x38227e0();
   input += synapse0x3822820();
   input += synapse0x3822860();
   input += synapse0x38228a0();
   input += synapse0x38228e0();
   input += synapse0x3822920();
   input += synapse0x3822960();
   input += synapse0x38229a0();
   input += synapse0x38229e0();
   input += synapse0x3822a20();
   input += synapse0x38224b0();
   input += synapse0x38224f0();
   input += synapse0x3822b70();
   input += synapse0x3822bb0();
   input += synapse0x3822bf0();
   input += synapse0x3822c30();
   input += synapse0x3822c70();
   input += synapse0x3822cb0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3822320() {
   double input = input0x3822320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3822cf0() {
   double input = 0.592674;
   input += synapse0x3823030();
   input += synapse0x3823070();
   input += synapse0x38230b0();
   input += synapse0x38230f0();
   input += synapse0x3823130();
   input += synapse0x3823170();
   input += synapse0x38231b0();
   input += synapse0x38231f0();
   input += synapse0x3823230();
   input += synapse0x3823270();
   input += synapse0x38232b0();
   input += synapse0x38232f0();
   input += synapse0x3823330();
   input += synapse0x3823370();
   input += synapse0x38233b0();
   input += synapse0x38233f0();
   input += synapse0x3822e80();
   input += synapse0x3822ec0();
   input += synapse0x3823540();
   input += synapse0x3823580();
   input += synapse0x38235c0();
   input += synapse0x3823600();
   input += synapse0x3823640();
   input += synapse0x3823680();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3822cf0() {
   double input = input0x3822cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3835330() {
   double input = -0.0889282;
   input += synapse0x3835550();
   input += synapse0x3835590();
   input += synapse0x38355d0();
   input += synapse0x3835610();
   input += synapse0x3835650();
   input += synapse0x3835690();
   input += synapse0x38356d0();
   input += synapse0x3835710();
   input += synapse0x3835750();
   input += synapse0x3835790();
   input += synapse0x38357d0();
   input += synapse0x3835810();
   input += synapse0x3835850();
   input += synapse0x3835890();
   input += synapse0x38358d0();
   input += synapse0x3835910();
   input += synapse0x38236c0();
   input += synapse0x3823700();
   input += synapse0x3835a60();
   input += synapse0x3835aa0();
   input += synapse0x3835ae0();
   input += synapse0x3835b20();
   input += synapse0x3835b60();
   input += synapse0x3835ba0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3835330() {
   double input = input0x3835330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3835be0() {
   double input = 4.10111;
   input += synapse0x3835f20();
   input += synapse0x3835f60();
   input += synapse0x3835fa0();
   input += synapse0x3835fe0();
   input += synapse0x3836020();
   input += synapse0x3836060();
   input += synapse0x38360a0();
   input += synapse0x38360e0();
   input += synapse0x3836120();
   input += synapse0x3836160();
   input += synapse0x38361a0();
   input += synapse0x38361e0();
   input += synapse0x3836220();
   input += synapse0x3836260();
   input += synapse0x38362a0();
   input += synapse0x38362e0();
   input += synapse0x3835d70();
   input += synapse0x3835db0();
   input += synapse0x3836430();
   input += synapse0x3836470();
   input += synapse0x38364b0();
   input += synapse0x38364f0();
   input += synapse0x3836530();
   input += synapse0x3836570();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3835be0() {
   double input = input0x3835be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x38365b0() {
   double input = -0.29785;
   input += synapse0x38368f0();
   input += synapse0x3836930();
   input += synapse0x3836970();
   input += synapse0x38369b0();
   input += synapse0x38369f0();
   input += synapse0x3836a30();
   input += synapse0x3836a70();
   input += synapse0x3836ab0();
   input += synapse0x3836af0();
   input += synapse0x3836b30();
   input += synapse0x3836b70();
   input += synapse0x3836bb0();
   input += synapse0x3836bf0();
   input += synapse0x3836c30();
   input += synapse0x3836c70();
   input += synapse0x3836cb0();
   input += synapse0x3836740();
   input += synapse0x3836780();
   input += synapse0x3836e00();
   input += synapse0x3836e40();
   input += synapse0x3836e80();
   input += synapse0x3836ec0();
   input += synapse0x3836f00();
   input += synapse0x3836f40();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x38365b0() {
   double input = input0x38365b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3836f80() {
   double input = 0.436654;
   input += synapse0x38372c0();
   input += synapse0x3837300();
   input += synapse0x3837340();
   input += synapse0x3837380();
   input += synapse0x38373c0();
   input += synapse0x3837400();
   input += synapse0x3837440();
   input += synapse0x3837480();
   input += synapse0x38374c0();
   input += synapse0x3837500();
   input += synapse0x3837540();
   input += synapse0x3837580();
   input += synapse0x38375c0();
   input += synapse0x3837600();
   input += synapse0x3837640();
   input += synapse0x3837680();
   input += synapse0x3837110();
   input += synapse0x3837150();
   input += synapse0x38377d0();
   input += synapse0x3837810();
   input += synapse0x3837850();
   input += synapse0x3837890();
   input += synapse0x38378d0();
   input += synapse0x3837910();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3836f80() {
   double input = input0x3836f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x383e180() {
   double input = -0.619863;
   input += synapse0x3813eb0();
   input += synapse0x3813ef0();
   input += synapse0x38153c0();
   input += synapse0x3815400();
   input += synapse0x3815d90();
   input += synapse0x3815dd0();
   input += synapse0x3816b60();
   input += synapse0x3816ba0();
   input += synapse0x3817530();
   input += synapse0x3817570();
   input += synapse0x3817f00();
   input += synapse0x3817f40();
   input += synapse0x38189e0();
   input += synapse0x3818a20();
   input += synapse0x38193b0();
   input += synapse0x38193f0();
   input += synapse0x3816490();
   input += synapse0x38164d0();
   input += synapse0x381af60();
   input += synapse0x381afa0();
   input += synapse0x381b930();
   input += synapse0x381b970();
   input += synapse0x381c300();
   input += synapse0x381c340();
   input += synapse0x381ccd0();
   input += synapse0x381cd10();
   input += synapse0x3810e40();
   input += synapse0x3810e80();
   input += synapse0x381edc0();
   input += synapse0x381ee00();
   input += synapse0x381f790();
   input += synapse0x381f7d0();
   input += synapse0x3820160();
   input += synapse0x38201a0();
   input += synapse0x3820b30();
   input += synapse0x3820b70();
   input += synapse0x3821500();
   input += synapse0x3821540();
   input += synapse0x381a050();
   input += synapse0x381a090();
   input += synapse0x3823900();
   input += synapse0x3823940();
   input += synapse0x3824290();
   input += synapse0x38242d0();
   input += synapse0x3824c60();
   input += synapse0x3824ca0();
   input += synapse0x3825630();
   input += synapse0x3825670();
   input += synapse0x3826000();
   input += synapse0x3826040();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x383e180() {
   double input = input0x383e180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x383e520() {
   double input = -0.428058;
   input += synapse0x3828740();
   input += synapse0x3828780();
   input += synapse0x381dd00();
   input += synapse0x381dd40();
   input += synapse0x382b320();
   input += synapse0x382b360();
   input += synapse0x382bcf0();
   input += synapse0x382bd30();
   input += synapse0x382c6c0();
   input += synapse0x382c700();
   input += synapse0x382d090();
   input += synapse0x382d0d0();
   input += synapse0x382da60();
   input += synapse0x382daa0();
   input += synapse0x382e430();
   input += synapse0x382e470();
   input += synapse0x382ee00();
   input += synapse0x382ee40();
   input += synapse0x382f7d0();
   input += synapse0x382f810();
   input += synapse0x38303b0();
   input += synapse0x38303f0();
   input += synapse0x3830d80();
   input += synapse0x3830dc0();
   input += synapse0x3821c00();
   input += synapse0x3821c40();
   input += synapse0x38225d0();
   input += synapse0x3822610();
   input += synapse0x3822fa0();
   input += synapse0x3822fe0();
   input += synapse0x38354c0();
   input += synapse0x3835500();
   input += synapse0x3835e90();
   input += synapse0x3835ed0();
   input += synapse0x3836860();
   input += synapse0x38368a0();
   input += synapse0x3837230();
   input += synapse0x3837270();
   input += synapse0x3813120();
   input += synapse0x3813160();
   input += synapse0x38269d0();
   input += synapse0x3826a10();
   input += synapse0x3837950();
   input += synapse0x3837990();
   input += synapse0x38379d0();
   input += synapse0x3837a10();
   input += synapse0x383e8c0();
   input += synapse0x383e900();
   input += synapse0x383e940();
   input += synapse0x383e980();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x383e520() {
   double input = input0x383e520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x383e9c0() {
   double input = -0.428329;
   input += synapse0x383ed00();
   input += synapse0x383ed40();
   input += synapse0x383ed80();
   input += synapse0x383edc0();
   input += synapse0x383ee00();
   input += synapse0x383ee40();
   input += synapse0x383ee80();
   input += synapse0x383eec0();
   input += synapse0x383ef00();
   input += synapse0x383ef40();
   input += synapse0x383ef80();
   input += synapse0x383efc0();
   input += synapse0x383f000();
   input += synapse0x383f040();
   input += synapse0x383f080();
   input += synapse0x383f0c0();
   input += synapse0x383eb50();
   input += synapse0x383eb90();
   input += synapse0x383f210();
   input += synapse0x383f250();
   input += synapse0x383f290();
   input += synapse0x383f2d0();
   input += synapse0x383f310();
   input += synapse0x383f350();
   input += synapse0x383f390();
   input += synapse0x383f3d0();
   input += synapse0x383f410();
   input += synapse0x383f450();
   input += synapse0x383f490();
   input += synapse0x383f4d0();
   input += synapse0x383f510();
   input += synapse0x383f550();
   input += synapse0x383f100();
   input += synapse0x383f140();
   input += synapse0x383f180();
   input += synapse0x383f1c0();
   input += synapse0x383f7a0();
   input += synapse0x383f7e0();
   input += synapse0x383f820();
   input += synapse0x383f860();
   input += synapse0x383f8a0();
   input += synapse0x383f8e0();
   input += synapse0x383f920();
   input += synapse0x383f960();
   input += synapse0x383f9a0();
   input += synapse0x383f9e0();
   input += synapse0x383fa20();
   input += synapse0x383fa60();
   input += synapse0x383faa0();
   input += synapse0x383fae0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x383e9c0() {
   double input = input0x383e9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x383fb20() {
   double input = -0.039008;
   input += synapse0x383fe60();
   input += synapse0x383fea0();
   input += synapse0x383fee0();
   input += synapse0x383ff20();
   input += synapse0x383ff60();
   input += synapse0x383ffa0();
   input += synapse0x383ffe0();
   input += synapse0x3840020();
   input += synapse0x3840060();
   input += synapse0x38400a0();
   input += synapse0x38400e0();
   input += synapse0x3840120();
   input += synapse0x3840160();
   input += synapse0x38401a0();
   input += synapse0x38401e0();
   input += synapse0x3840220();
   input += synapse0x383fcb0();
   input += synapse0x383fcf0();
   input += synapse0x3840370();
   input += synapse0x38403b0();
   input += synapse0x38403f0();
   input += synapse0x3840430();
   input += synapse0x3840470();
   input += synapse0x38404b0();
   input += synapse0x38404f0();
   input += synapse0x3840530();
   input += synapse0x3840570();
   input += synapse0x38405b0();
   input += synapse0x38405f0();
   input += synapse0x3840630();
   input += synapse0x3840670();
   input += synapse0x38406b0();
   input += synapse0x3840260();
   input += synapse0x38402a0();
   input += synapse0x38402e0();
   input += synapse0x3840320();
   input += synapse0x3840900();
   input += synapse0x3840940();
   input += synapse0x3840980();
   input += synapse0x38409c0();
   input += synapse0x3840a00();
   input += synapse0x3840a40();
   input += synapse0x3840a80();
   input += synapse0x3840ac0();
   input += synapse0x3840b00();
   input += synapse0x3840b40();
   input += synapse0x3840b80();
   input += synapse0x3840bc0();
   input += synapse0x3840c00();
   input += synapse0x3840c40();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x383fb20() {
   double input = input0x383fb20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3840c80() {
   double input = -0.591783;
   input += synapse0x3840fc0();
   input += synapse0x3841000();
   input += synapse0x3841040();
   input += synapse0x3841080();
   input += synapse0x38410c0();
   input += synapse0x3841100();
   input += synapse0x3841140();
   input += synapse0x3841180();
   input += synapse0x38411c0();
   input += synapse0x3841200();
   input += synapse0x3841240();
   input += synapse0x3841280();
   input += synapse0x38412c0();
   input += synapse0x3841300();
   input += synapse0x3841340();
   input += synapse0x3841380();
   input += synapse0x3840e10();
   input += synapse0x3840e50();
   input += synapse0x38414d0();
   input += synapse0x3841510();
   input += synapse0x3841550();
   input += synapse0x3841590();
   input += synapse0x38415d0();
   input += synapse0x3841610();
   input += synapse0x3841650();
   input += synapse0x3841690();
   input += synapse0x38416d0();
   input += synapse0x3841710();
   input += synapse0x3841750();
   input += synapse0x3841790();
   input += synapse0x38417d0();
   input += synapse0x3841810();
   input += synapse0x38413c0();
   input += synapse0x3841400();
   input += synapse0x3841440();
   input += synapse0x3841480();
   input += synapse0x3841a60();
   input += synapse0x3841aa0();
   input += synapse0x3841ae0();
   input += synapse0x3841b20();
   input += synapse0x3841b60();
   input += synapse0x3841ba0();
   input += synapse0x3841be0();
   input += synapse0x3841c20();
   input += synapse0x3841c60();
   input += synapse0x3841ca0();
   input += synapse0x3841ce0();
   input += synapse0x3841d20();
   input += synapse0x3841d60();
   input += synapse0x3841da0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3840c80() {
   double input = input0x3840c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::input0x3841de0() {
   double input = 4.32613;
   input += synapse0x3812ec0();
   input += synapse0x3842000();
   input += synapse0x3842040();
   input += synapse0x3842080();
   input += synapse0x38420c0();
   return input;
}

double NNfunction_ns_chiPlus2_dL::neuron0x3841de0() {
   double input = input0x3841de0();
   return (input * 1)+0;
}

double NNfunction_ns_chiPlus2_dL::synapse0x35d7850() {
   return (neuron0x380dea0()*-0.000580466);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380dd60() {
   return (neuron0x380e1e0()*-0.00104025);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380dda0() {
   return (neuron0x380e520()*0.206054);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38131b0() {
   return (neuron0x380e860()*-0.0553016);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38131f0() {
   return (neuron0x380eba0()*-0.0243148);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813230() {
   return (neuron0x380eee0()*0.00584369);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813270() {
   return (neuron0x380f220()*-0.000796393);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38132b0() {
   return (neuron0x380f560()*0.00281868);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38132f0() {
   return (neuron0x380f8a0()*0.00242783);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813330() {
   return (neuron0x380fbe0()*0.00157943);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813370() {
   return (neuron0x380ff20()*0.00204027);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38133b0() {
   return (neuron0x3810260()*3.8868);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38133f0() {
   return (neuron0x38105a0()*0.0193366);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813430() {
   return (neuron0x38108e0()*0.00796498);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813470() {
   return (neuron0x3810c20()*0.00138772);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38134b0() {
   return (neuron0x3810f60()*0.0113416);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380dcd0() {
   return (neuron0x38112a0()*-0.0114511);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380dd10() {
   return (neuron0x3811800()*0.00204652);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35c9040() {
   return (neuron0x3811a20()*0.00422411);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35c9080() {
   return (neuron0x3811d60()*0.0181696);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813710() {
   return (neuron0x38120a0()*0.0187173);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813750() {
   return (neuron0x38123e0()*0.00127152);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813790() {
   return (neuron0x3812720()*0.000521883);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38137d0() {
   return (neuron0x3812a60()*-0.0461999);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813b50() {
   return (neuron0x380dea0()*-0.0121799);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813b90() {
   return (neuron0x380e1e0()*0.00159708);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813bd0() {
   return (neuron0x380e520()*0.309735);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813c10() {
   return (neuron0x380e860()*-0.0021513);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813c50() {
   return (neuron0x380eba0()*-0.00855725);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813c90() {
   return (neuron0x380eee0()*-0.00370653);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813cd0() {
   return (neuron0x380f220()*0.00120088);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813d10() {
   return (neuron0x380f560()*0.000758525);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813d50() {
   return (neuron0x380f8a0()*0.00605278);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813600() {
   return (neuron0x380fbe0()*0.00115225);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813640() {
   return (neuron0x380ff20()*0.0031859);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813680() {
   return (neuron0x3810260()*-0.0122049);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38136c0() {
   return (neuron0x38105a0()*0.000587993);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813fa0() {
   return (neuron0x38108e0()*0.00357145);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813fe0() {
   return (neuron0x3810c20()*-0.00403176);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814020() {
   return (neuron0x3810f60()*-0.00849966);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38139a0() {
   return (neuron0x38112a0()*-0.00491733);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38139e0() {
   return (neuron0x3811800()*-0.00502943);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814170() {
   return (neuron0x3811a20()*-0.00170595);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38141b0() {
   return (neuron0x3811d60()*-0.00360576);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38141f0() {
   return (neuron0x38120a0()*-0.00151857);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814230() {
   return (neuron0x38123e0()*0.000554625);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814270() {
   return (neuron0x3812720()*-0.00141396);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38142b0() {
   return (neuron0x3812a60()*-0.88566);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814630() {
   return (neuron0x380dea0()*0.0372037);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814670() {
   return (neuron0x380e1e0()*0.0039533);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38146b0() {
   return (neuron0x380e520()*-0.998941);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38146f0() {
   return (neuron0x380e860()*0.00661353);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814730() {
   return (neuron0x380eba0()*0.0104894);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814770() {
   return (neuron0x380eee0()*-0.000962099);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38147b0() {
   return (neuron0x380f220()*-0.00426099);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38147f0() {
   return (neuron0x380f560()*-0.00476073);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814830() {
   return (neuron0x380f8a0()*-0.010553);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814870() {
   return (neuron0x380fbe0()*-0.00403679);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38148b0() {
   return (neuron0x380ff20()*0.0020322);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38148f0() {
   return (neuron0x3810260()*0.190792);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814930() {
   return (neuron0x38105a0()*-0.0115788);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814970() {
   return (neuron0x38108e0()*-0.0123879);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38149b0() {
   return (neuron0x3810c20()*-0.00248831);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38149f0() {
   return (neuron0x3810f60()*0.00309332);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814480() {
   return (neuron0x38112a0()*0.0124288);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38144c0() {
   return (neuron0x3811800()*0.00168829);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35d6f60() {
   return (neuron0x3811a20()*0.00210905);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35d6fa0() {
   return (neuron0x3811d60()*-0.00508393);
}

double NNfunction_ns_chiPlus2_dL::synapse0x37fcf30() {
   return (neuron0x38120a0()*0.0072737);
}

double NNfunction_ns_chiPlus2_dL::synapse0x37fcf70() {
   return (neuron0x38123e0()*-0.00402058);
}

double NNfunction_ns_chiPlus2_dL::synapse0x37fcfb0() {
   return (neuron0x3812720()*0.00676751);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380dde0() {
   return (neuron0x3812a60()*1.55759);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813f40() {
   return (neuron0x380dea0()*0.03072);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380de20() {
   return (neuron0x380e1e0()*-0.00581932);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380de60() {
   return (neuron0x380e520()*-0.1426);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814b40() {
   return (neuron0x380e860()*0.0173063);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814b80() {
   return (neuron0x380eba0()*0.300752);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814bc0() {
   return (neuron0x380eee0()*0.00987723);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814c00() {
   return (neuron0x380f220()*-0.0408485);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814c40() {
   return (neuron0x380f560()*0.0249704);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814c80() {
   return (neuron0x380f8a0()*-0.0112355);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814cc0() {
   return (neuron0x380fbe0()*-0.0367782);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814d00() {
   return (neuron0x380ff20()*-0.0403607);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814d40() {
   return (neuron0x3810260()*-1.39178);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814d80() {
   return (neuron0x38105a0()*0.00149321);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814dc0() {
   return (neuron0x38108e0()*-0.024942);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814e00() {
   return (neuron0x3810c20()*0.000193868);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814e40() {
   return (neuron0x3810f60()*-0.0212465);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813d90() {
   return (neuron0x38112a0()*-0.010454);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813dd0() {
   return (neuron0x3811800()*-0.045107);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814f90() {
   return (neuron0x3811a20()*0.0181429);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3814fd0() {
   return (neuron0x3811d60()*-0.0382295);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815010() {
   return (neuron0x38120a0()*-0.0161746);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815050() {
   return (neuron0x38123e0()*0.0061083);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815090() {
   return (neuron0x3812720()*-0.0187393);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38150d0() {
   return (neuron0x3812a60()*-0.109373);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815450() {
   return (neuron0x380dea0()*0.149569);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815490() {
   return (neuron0x380e1e0()*0.231882);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38154d0() {
   return (neuron0x380e520()*-0.246014);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815510() {
   return (neuron0x380e860()*-0.395075);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815550() {
   return (neuron0x380eba0()*0.145882);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815590() {
   return (neuron0x380eee0()*-0.140158);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38155d0() {
   return (neuron0x380f220()*0.193922);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815610() {
   return (neuron0x380f560()*0.137516);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815650() {
   return (neuron0x380f8a0()*-0.0557049);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815690() {
   return (neuron0x380fbe0()*0.159128);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38156d0() {
   return (neuron0x380ff20()*-0.237136);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815710() {
   return (neuron0x3810260()*-0.291931);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815750() {
   return (neuron0x38105a0()*-0.225118);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815790() {
   return (neuron0x38108e0()*-0.0347852);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38157d0() {
   return (neuron0x3810c20()*0.369892);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815810() {
   return (neuron0x3810f60()*-0.414745);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38152a0() {
   return (neuron0x38112a0()*-0.614361);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38152e0() {
   return (neuron0x3811800()*0.270383);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815960() {
   return (neuron0x3811a20()*0.239765);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38159a0() {
   return (neuron0x3811d60()*-0.485778);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38159e0() {
   return (neuron0x38120a0()*0.343673);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815a20() {
   return (neuron0x38123e0()*-0.230557);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815a60() {
   return (neuron0x3812720()*-0.0222484);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815aa0() {
   return (neuron0x3812a60()*-0.638748);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815e20() {
   return (neuron0x380dea0()*0.00222928);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815e60() {
   return (neuron0x380e1e0()*-0.00408681);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815ea0() {
   return (neuron0x380e520()*-0.00281524);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815ee0() {
   return (neuron0x380e860()*-0.0012166);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815f20() {
   return (neuron0x380eba0()*-0.000712814);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815f60() {
   return (neuron0x380eee0()*-0.00372928);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815fa0() {
   return (neuron0x380f220()*0.00383609);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815fe0() {
   return (neuron0x380f560()*0.00646692);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816020() {
   return (neuron0x380f8a0()*0.00602327);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35d72b0() {
   return (neuron0x380fbe0()*0.00225243);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35d72f0() {
   return (neuron0x380ff20()*0.000978871);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35d7330() {
   return (neuron0x3810260()*-0.675588);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35d7370() {
   return (neuron0x38105a0()*-0.00549269);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35d73b0() {
   return (neuron0x38108e0()*0.000821614);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35d73f0() {
   return (neuron0x3810c20()*0.00135758);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35d7430() {
   return (neuron0x3810f60()*-0.00241733);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815c70() {
   return (neuron0x38112a0()*-0.00797713);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815cb0() {
   return (neuron0x3811800()*-0.0087422);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35d7580() {
   return (neuron0x3811a20()*-0.00353986);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35d75c0() {
   return (neuron0x3811d60()*-0.00117485);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35d7600() {
   return (neuron0x38120a0()*-0.000158346);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35d7640() {
   return (neuron0x38123e0()*-0.0017698);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35d7680() {
   return (neuron0x3812720()*-0.000409359);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816870() {
   return (neuron0x3812a60()*0.496738);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816bf0() {
   return (neuron0x380dea0()*0.0273861);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816c30() {
   return (neuron0x380e1e0()*-0.00400012);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816c70() {
   return (neuron0x380e520()*4.97052);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816cb0() {
   return (neuron0x380e860()*-0.0181931);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816cf0() {
   return (neuron0x380eba0()*0.00268428);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816d30() {
   return (neuron0x380eee0()*0.00885447);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816d70() {
   return (neuron0x380f220()*0.00905662);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816db0() {
   return (neuron0x380f560()*0.00785231);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816df0() {
   return (neuron0x380f8a0()*0.0074418);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816e30() {
   return (neuron0x380fbe0()*0.00107756);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816e70() {
   return (neuron0x380ff20()*0.00858606);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816eb0() {
   return (neuron0x3810260()*-0.0708536);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816ef0() {
   return (neuron0x38105a0()*0.0180217);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816f30() {
   return (neuron0x38108e0()*0.00225496);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816f70() {
   return (neuron0x3810c20()*-0.00668883);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816fb0() {
   return (neuron0x3810f60()*-0.00726713);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816a40() {
   return (neuron0x38112a0()*0.000146407);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816a80() {
   return (neuron0x3811800()*-0.0054412);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817100() {
   return (neuron0x3811a20()*0.00134341);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817140() {
   return (neuron0x3811d60()*0.000553029);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817180() {
   return (neuron0x38120a0()*0.00581022);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38171c0() {
   return (neuron0x38123e0()*-0.00161945);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817200() {
   return (neuron0x3812720()*0.000608865);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817240() {
   return (neuron0x3812a60()*3.73235);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38175c0() {
   return (neuron0x380dea0()*0.286262);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817600() {
   return (neuron0x380e1e0()*0.384178);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817640() {
   return (neuron0x380e520()*-0.29498);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817680() {
   return (neuron0x380e860()*-0.00804831);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38176c0() {
   return (neuron0x380eba0()*-0.518407);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817700() {
   return (neuron0x380eee0()*-0.0508256);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817740() {
   return (neuron0x380f220()*0.282946);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817780() {
   return (neuron0x380f560()*-0.265031);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38177c0() {
   return (neuron0x380f8a0()*-0.00574413);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817800() {
   return (neuron0x380fbe0()*0.198866);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817840() {
   return (neuron0x380ff20()*0.0226243);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817880() {
   return (neuron0x3810260()*0.26823);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38178c0() {
   return (neuron0x38105a0()*-0.0845909);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817900() {
   return (neuron0x38108e0()*-0.245416);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817940() {
   return (neuron0x3810c20()*-0.0894625);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817980() {
   return (neuron0x3810f60()*-0.430564);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817410() {
   return (neuron0x38112a0()*-0.32083);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817450() {
   return (neuron0x3811800()*-0.046123);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817ad0() {
   return (neuron0x3811a20()*0.0309952);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817b10() {
   return (neuron0x3811d60()*-0.121966);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817b50() {
   return (neuron0x38120a0()*-0.134918);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817b90() {
   return (neuron0x38123e0()*0.0948293);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817bd0() {
   return (neuron0x3812720()*0.0642319);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817c10() {
   return (neuron0x3812a60()*0.356531);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38116f0() {
   return (neuron0x380dea0()*0.00876708);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3811730() {
   return (neuron0x380e1e0()*-0.00122892);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3811770() {
   return (neuron0x380e520()*-0.0503653);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38117b0() {
   return (neuron0x380e860()*0.852413);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38181a0() {
   return (neuron0x380eba0()*-0.00279061);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38181e0() {
   return (neuron0x380eee0()*0.00923044);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818220() {
   return (neuron0x380f220()*-0.00400466);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818260() {
   return (neuron0x380f560()*0.00971139);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38182a0() {
   return (neuron0x380f8a0()*0.000247823);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38182e0() {
   return (neuron0x380fbe0()*-0.0162147);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818320() {
   return (neuron0x380ff20()*-0.00845075);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818360() {
   return (neuron0x3810260()*-0.603504);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38183a0() {
   return (neuron0x38105a0()*0.0226439);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38183e0() {
   return (neuron0x38108e0()*-0.00653028);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818420() {
   return (neuron0x3810c20()*0.008307);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818460() {
   return (neuron0x3810f60()*-0.00252671);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817de0() {
   return (neuron0x38112a0()*-0.0331734);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817e20() {
   return (neuron0x3811800()*0.0179808);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38185b0() {
   return (neuron0x3811a20()*0.0182454);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38185f0() {
   return (neuron0x3811d60()*0.010828);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818630() {
   return (neuron0x38120a0()*0.0049541);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818670() {
   return (neuron0x38123e0()*-0.0201475);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38186b0() {
   return (neuron0x3812720()*-0.00230194);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38186f0() {
   return (neuron0x3812a60()*-0.0433702);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818a70() {
   return (neuron0x380dea0()*-0.12805);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818ab0() {
   return (neuron0x380e1e0()*-0.256094);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818af0() {
   return (neuron0x380e520()*-0.0704631);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818b30() {
   return (neuron0x380e860()*0.135821);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818b70() {
   return (neuron0x380eba0()*0.138247);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818bb0() {
   return (neuron0x380eee0()*-0.117204);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818bf0() {
   return (neuron0x380f220()*0.10985);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818c30() {
   return (neuron0x380f560()*0.0571135);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818c70() {
   return (neuron0x380f8a0()*0.250361);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818cb0() {
   return (neuron0x380fbe0()*0.0741979);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818cf0() {
   return (neuron0x380ff20()*0.289903);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818d30() {
   return (neuron0x3810260()*0.477501);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818d70() {
   return (neuron0x38105a0()*-0.243645);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818db0() {
   return (neuron0x38108e0()*-0.476802);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818df0() {
   return (neuron0x3810c20()*0.0296204);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818e30() {
   return (neuron0x3810f60()*0.545993);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38188c0() {
   return (neuron0x38112a0()*-0.138568);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818900() {
   return (neuron0x3811800()*-0.242105);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818f80() {
   return (neuron0x3811a20()*-0.069473);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818fc0() {
   return (neuron0x3811d60()*-0.528235);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819000() {
   return (neuron0x38120a0()*0.196657);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819040() {
   return (neuron0x38123e0()*-0.051347);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819080() {
   return (neuron0x3812720()*-0.0596371);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38190c0() {
   return (neuron0x3812a60()*-0.428708);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819440() {
   return (neuron0x380dea0()*0.00791653);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819480() {
   return (neuron0x380e1e0()*0.0200225);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38194c0() {
   return (neuron0x380e520()*0.0253866);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819500() {
   return (neuron0x380e860()*0.0741671);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819540() {
   return (neuron0x380eba0()*-0.00730435);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819580() {
   return (neuron0x380eee0()*-0.0341447);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38195c0() {
   return (neuron0x380f220()*0.00908104);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819600() {
   return (neuron0x380f560()*-0.0127692);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819640() {
   return (neuron0x380f8a0()*0.108596);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819680() {
   return (neuron0x380fbe0()*0.313427);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38196c0() {
   return (neuron0x380ff20()*0.0547081);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819700() {
   return (neuron0x3810260()*0.703831);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819740() {
   return (neuron0x38105a0()*-0.0575964);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819780() {
   return (neuron0x38108e0()*-0.0568523);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38197c0() {
   return (neuron0x3810c20()*-0.0381226);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819800() {
   return (neuron0x3810f60()*-0.0480388);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819290() {
   return (neuron0x38112a0()*-0.0319147);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38192d0() {
   return (neuron0x3811800()*-0.0317411);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816060() {
   return (neuron0x3811a20()*-0.0147554);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38160a0() {
   return (neuron0x3811d60()*-0.089481);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38160e0() {
   return (neuron0x38120a0()*-0.0337738);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816120() {
   return (neuron0x38123e0()*0.0105919);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816160() {
   return (neuron0x3812720()*0.00149036);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38161a0() {
   return (neuron0x3812a60()*-0.205692);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816520() {
   return (neuron0x380dea0()*-0.0370755);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816560() {
   return (neuron0x380e1e0()*-0.00126583);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38165a0() {
   return (neuron0x380e520()*-0.177789);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38165e0() {
   return (neuron0x380e860()*0.000421931);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816620() {
   return (neuron0x380eba0()*0.0022124);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816660() {
   return (neuron0x380eee0()*0.00052879);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38166a0() {
   return (neuron0x380f220()*-0.00135215);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38166e0() {
   return (neuron0x380f560()*0.00183209);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816720() {
   return (neuron0x380f8a0()*-0.000663562);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816760() {
   return (neuron0x380fbe0()*0.000136426);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38167a0() {
   return (neuron0x380ff20()*-0.00422185);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38167e0() {
   return (neuron0x3810260()*-0.234797);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816820() {
   return (neuron0x38105a0()*-0.00160223);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a960() {
   return (neuron0x38108e0()*0.00547324);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a9a0() {
   return (neuron0x3810c20()*0.00374932);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a9e0() {
   return (neuron0x3810f60()*0.00334221);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816370() {
   return (neuron0x38112a0()*-0.0010524);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38163b0() {
   return (neuron0x3811800()*0.00262403);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ab30() {
   return (neuron0x3811a20()*0.000584766);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ab70() {
   return (neuron0x3811d60()*0.0041845);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381abb0() {
   return (neuron0x38120a0()*-0.00139009);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381abf0() {
   return (neuron0x38123e0()*-0.00178348);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ac30() {
   return (neuron0x3812720()*-0.00031101);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ac70() {
   return (neuron0x3812a60()*-0.730329);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381aff0() {
   return (neuron0x380dea0()*0.0361196);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b030() {
   return (neuron0x380e1e0()*-0.0216593);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b070() {
   return (neuron0x380e520()*0.112204);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b0b0() {
   return (neuron0x380e860()*-0.420246);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b0f0() {
   return (neuron0x380eba0()*-0.0755528);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b130() {
   return (neuron0x380eee0()*0.0211495);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b170() {
   return (neuron0x380f220()*0.101625);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b1b0() {
   return (neuron0x380f560()*-0.0989903);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b1f0() {
   return (neuron0x380f8a0()*0.101446);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b230() {
   return (neuron0x380fbe0()*-0.0363493);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b270() {
   return (neuron0x380ff20()*0.0270745);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b2b0() {
   return (neuron0x3810260()*-0.557826);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b2f0() {
   return (neuron0x38105a0()*-0.0491024);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b330() {
   return (neuron0x38108e0()*0.0632819);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b370() {
   return (neuron0x3810c20()*0.961827);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b3b0() {
   return (neuron0x3810f60()*-0.0997446);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ae40() {
   return (neuron0x38112a0()*0.0526798);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ae80() {
   return (neuron0x3811800()*0.0794213);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b500() {
   return (neuron0x3811a20()*-0.00917095);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b540() {
   return (neuron0x3811d60()*0.0274882);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b580() {
   return (neuron0x38120a0()*0.067119);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b5c0() {
   return (neuron0x38123e0()*0.0292629);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b600() {
   return (neuron0x3812720()*-0.041927);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b640() {
   return (neuron0x3812a60()*0.0936127);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b9c0() {
   return (neuron0x380dea0()*-0.0859519);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ba00() {
   return (neuron0x380e1e0()*-0.310431);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ba40() {
   return (neuron0x380e520()*-0.0758407);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ba80() {
   return (neuron0x380e860()*0.501221);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bac0() {
   return (neuron0x380eba0()*0.153202);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bb00() {
   return (neuron0x380eee0()*0.388445);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bb40() {
   return (neuron0x380f220()*-0.326459);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bb80() {
   return (neuron0x380f560()*0.0916048);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bbc0() {
   return (neuron0x380f8a0()*-0.307766);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bc00() {
   return (neuron0x380fbe0()*-0.047172);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bc40() {
   return (neuron0x380ff20()*0.189582);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bc80() {
   return (neuron0x3810260()*-0.696836);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bcc0() {
   return (neuron0x38105a0()*0.259611);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bd00() {
   return (neuron0x38108e0()*-0.0954987);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bd40() {
   return (neuron0x3810c20()*0.0698929);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bd80() {
   return (neuron0x3810f60()*-0.289041);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b810() {
   return (neuron0x38112a0()*0.0673083);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b850() {
   return (neuron0x3811800()*0.297214);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bed0() {
   return (neuron0x3811a20()*-0.0843337);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bf10() {
   return (neuron0x3811d60()*0.229714);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bf50() {
   return (neuron0x38120a0()*-0.125388);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bf90() {
   return (neuron0x38123e0()*-0.0241647);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381bfd0() {
   return (neuron0x3812720()*-0.166003);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c010() {
   return (neuron0x3812a60()*-0.392517);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c390() {
   return (neuron0x380dea0()*0.000755381);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c3d0() {
   return (neuron0x380e1e0()*-0.0154899);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c410() {
   return (neuron0x380e520()*-0.453869);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c450() {
   return (neuron0x380e860()*0.0479389);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c490() {
   return (neuron0x380eba0()*0.0151836);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c4d0() {
   return (neuron0x380eee0()*-0.00824231);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c510() {
   return (neuron0x380f220()*-0.00271793);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c550() {
   return (neuron0x380f560()*0.00227832);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c590() {
   return (neuron0x380f8a0()*-0.010448);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c5d0() {
   return (neuron0x380fbe0()*0.0218313);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c610() {
   return (neuron0x380ff20()*-0.00292599);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c650() {
   return (neuron0x3810260()*-2.52604);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c690() {
   return (neuron0x38105a0()*-0.0463183);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c6d0() {
   return (neuron0x38108e0()*0.0192644);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c710() {
   return (neuron0x3810c20()*-0.0134304);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c750() {
   return (neuron0x3810f60()*-0.00870937);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c1e0() {
   return (neuron0x38112a0()*0.0425684);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c220() {
   return (neuron0x3811800()*0.00342648);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c8a0() {
   return (neuron0x3811a20()*-0.011372);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c8e0() {
   return (neuron0x3811d60()*-0.0065048);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c920() {
   return (neuron0x38120a0()*-0.00251029);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c960() {
   return (neuron0x38123e0()*-0.00803622);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c9a0() {
   return (neuron0x3812720()*0.00354214);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c9e0() {
   return (neuron0x3812a60()*0.000729884);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381cd60() {
   return (neuron0x380dea0()*-0.0154459);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380e0c0() {
   return (neuron0x380e1e0()*-0.349485);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380e100() {
   return (neuron0x380e520()*-0.126038);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380e400() {
   return (neuron0x380e860()*-0.364568);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380e440() {
   return (neuron0x380eba0()*-0.200173);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380e740() {
   return (neuron0x380eee0()*-0.146146);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380e780() {
   return (neuron0x380f220()*-0.175326);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380ea80() {
   return (neuron0x380f560()*0.261176);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380eac0() {
   return (neuron0x380f8a0()*-0.526161);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380edc0() {
   return (neuron0x380fbe0()*-0.532454);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380ee00() {
   return (neuron0x380ff20()*-0.217229);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380f100() {
   return (neuron0x3810260()*0.137705);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380f140() {
   return (neuron0x38105a0()*-0.0528646);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380f440() {
   return (neuron0x38108e0()*-0.300817);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380f480() {
   return (neuron0x3810c20()*0.315525);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380f780() {
   return (neuron0x3810f60()*0.394772);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380f7c0() {
   return (neuron0x38112a0()*-0.0788857);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380fac0() {
   return (neuron0x3811800()*-0.343116);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380fb00() {
   return (neuron0x3811a20()*-0.00514458);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380fe00() {
   return (neuron0x3811d60()*-0.338078);
}

double NNfunction_ns_chiPlus2_dL::synapse0x380fe40() {
   return (neuron0x38120a0()*-0.12421);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3810140() {
   return (neuron0x38123e0()*-0.196923);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3810180() {
   return (neuron0x3812720()*-0.297096);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3810480() {
   return (neuron0x3812a60()*0.122314);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38104c0() {
   return (neuron0x380dea0()*0.00837338);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3811180() {
   return (neuron0x380e1e0()*0.00150422);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38111c0() {
   return (neuron0x380e520()*0.190475);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381cbb0() {
   return (neuron0x380e860()*0.504601);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381cbf0() {
   return (neuron0x380eba0()*0.0403814);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38114c0() {
   return (neuron0x380eee0()*0.297706);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3811500() {
   return (neuron0x380f220()*-0.0223732);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35c8f20() {
   return (neuron0x380f560()*-0.130435);
}

double NNfunction_ns_chiPlus2_dL::synapse0x35c8f60() {
   return (neuron0x380f8a0()*0.0145158);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3811c40() {
   return (neuron0x380fbe0()*-0.0434533);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3811c80() {
   return (neuron0x380ff20()*-0.0295588);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3811f80() {
   return (neuron0x3810260()*0.860085);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3811fc0() {
   return (neuron0x38105a0()*0.0863172);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38122c0() {
   return (neuron0x38108e0()*-0.0362457);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3812300() {
   return (neuron0x3810c20()*0.0954551);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3812600() {
   return (neuron0x3810f60()*0.11418);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3812640() {
   return (neuron0x38112a0()*-0.167633);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3812940() {
   return (neuron0x3811800()*-0.0380867);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3812980() {
   return (neuron0x3811a20()*0.00438298);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3812c80() {
   return (neuron0x3811d60()*0.0342953);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3812cc0() {
   return (neuron0x38120a0()*0.0516716);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38107c0() {
   return (neuron0x38123e0()*0.012526);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3810800() {
   return (neuron0x3812720()*0.0133235);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ead0() {
   return (neuron0x3812a60()*0.0508544);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ee50() {
   return (neuron0x380dea0()*-0.00818738);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ee90() {
   return (neuron0x380e1e0()*-0.00336496);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381eed0() {
   return (neuron0x380e520()*-3.89787);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ef10() {
   return (neuron0x380e860()*0.0188199);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ef50() {
   return (neuron0x380eba0()*-0.00413816);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ef90() {
   return (neuron0x380eee0()*-0.0104045);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381efd0() {
   return (neuron0x380f220()*-0.00235234);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f010() {
   return (neuron0x380f560()*-0.00706145);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f050() {
   return (neuron0x380f8a0()*-0.00184495);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f090() {
   return (neuron0x380fbe0()*-0.00360429);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f0d0() {
   return (neuron0x380ff20()*-0.00488722);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f110() {
   return (neuron0x3810260()*0.0683969);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f150() {
   return (neuron0x38105a0()*-0.0152967);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f190() {
   return (neuron0x38108e0()*-0.0068889);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f1d0() {
   return (neuron0x3810c20()*0.000367943);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f210() {
   return (neuron0x3810f60()*-0.0013079);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381eca0() {
   return (neuron0x38112a0()*-0.00114041);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ece0() {
   return (neuron0x3811800()*0.000973147);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f360() {
   return (neuron0x3811a20()*-0.00114881);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f3a0() {
   return (neuron0x3811d60()*0.00176455);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f3e0() {
   return (neuron0x38120a0()*-0.00607766);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f420() {
   return (neuron0x38123e0()*-0.000294048);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f460() {
   return (neuron0x3812720()*0.00101641);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f4a0() {
   return (neuron0x3812a60()*2.74744);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f820() {
   return (neuron0x380dea0()*0.6349);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f860() {
   return (neuron0x380e1e0()*-0.00801553);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f8a0() {
   return (neuron0x380e520()*-0.252306);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f8e0() {
   return (neuron0x380e860()*0.00413021);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f920() {
   return (neuron0x380eba0()*0.0251372);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f960() {
   return (neuron0x380eee0()*0.0241113);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f9a0() {
   return (neuron0x380f220()*0.0260596);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f9e0() {
   return (neuron0x380f560()*0.0518909);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381fa20() {
   return (neuron0x380f8a0()*0.060866);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381fa60() {
   return (neuron0x380fbe0()*-0.0152033);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381faa0() {
   return (neuron0x380ff20()*0.152983);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381fae0() {
   return (neuron0x3810260()*-0.167286);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381fb20() {
   return (neuron0x38105a0()*0.0433897);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381fb60() {
   return (neuron0x38108e0()*-0.0683326);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381fba0() {
   return (neuron0x3810c20()*0.0113006);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381fbe0() {
   return (neuron0x3810f60()*0.00995073);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f670() {
   return (neuron0x38112a0()*0.0483312);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f6b0() {
   return (neuron0x3811800()*0.032192);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381fd30() {
   return (neuron0x3811a20()*0.0153338);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381fd70() {
   return (neuron0x3811d60()*0.0854389);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381fdb0() {
   return (neuron0x38120a0()*0.0591382);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381fdf0() {
   return (neuron0x38123e0()*0.0736016);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381fe30() {
   return (neuron0x3812720()*0.0455769);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381fe70() {
   return (neuron0x3812a60()*-0.874907);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38201f0() {
   return (neuron0x380dea0()*0.0199199);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820230() {
   return (neuron0x380e1e0()*-0.000558177);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820270() {
   return (neuron0x380e520()*-0.460567);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38202b0() {
   return (neuron0x380e860()*0.0118127);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38202f0() {
   return (neuron0x380eba0()*0.0204869);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820330() {
   return (neuron0x380eee0()*-0.0110923);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820370() {
   return (neuron0x380f220()*-0.00144817);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38203b0() {
   return (neuron0x380f560()*0.00739303);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38203f0() {
   return (neuron0x380f8a0()*-0.0354426);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820430() {
   return (neuron0x380fbe0()*-0.0820828);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820470() {
   return (neuron0x380ff20()*-0.0498865);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38204b0() {
   return (neuron0x3810260()*-1.05253);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38204f0() {
   return (neuron0x38105a0()*-0.0366096);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820530() {
   return (neuron0x38108e0()*-0.0756506);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820570() {
   return (neuron0x3810c20()*-0.0251838);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38205b0() {
   return (neuron0x3810f60()*-0.0221461);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820040() {
   return (neuron0x38112a0()*-0.0523138);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820080() {
   return (neuron0x3811800()*-0.0375459);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820700() {
   return (neuron0x3811a20()*-0.0263009);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820740() {
   return (neuron0x3811d60()*-0.0759252);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820780() {
   return (neuron0x38120a0()*-0.0176901);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38207c0() {
   return (neuron0x38123e0()*-0.00512733);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820800() {
   return (neuron0x3812720()*-0.0144707);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820840() {
   return (neuron0x3812a60()*-1.16362);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820bc0() {
   return (neuron0x380dea0()*0.0907282);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820c00() {
   return (neuron0x380e1e0()*0.05242);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820c40() {
   return (neuron0x380e520()*0.251028);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820c80() {
   return (neuron0x380e860()*0.419273);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820cc0() {
   return (neuron0x380eba0()*-0.144667);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820d00() {
   return (neuron0x380eee0()*0.336745);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820d40() {
   return (neuron0x380f220()*-0.139817);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820d80() {
   return (neuron0x380f560()*0.164593);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820dc0() {
   return (neuron0x380f8a0()*-0.0807449);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820e00() {
   return (neuron0x380fbe0()*0.41597);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820e40() {
   return (neuron0x380ff20()*0.431951);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820e80() {
   return (neuron0x3810260()*0.114803);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820ec0() {
   return (neuron0x38105a0()*-0.0705588);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820f00() {
   return (neuron0x38108e0()*0.452883);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820f40() {
   return (neuron0x3810c20()*-0.450287);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820f80() {
   return (neuron0x3810f60()*0.101698);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820a10() {
   return (neuron0x38112a0()*-0.096894);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820a50() {
   return (neuron0x3811800()*-0.293101);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38210d0() {
   return (neuron0x3811a20()*0.251357);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821110() {
   return (neuron0x3811d60()*-0.247188);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821150() {
   return (neuron0x38120a0()*0.247117);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821190() {
   return (neuron0x38123e0()*-0.392567);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38211d0() {
   return (neuron0x3812720()*-0.215139);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821210() {
   return (neuron0x3812a60()*0.621488);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821590() {
   return (neuron0x380dea0()*0.0254124);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38215d0() {
   return (neuron0x380e1e0()*-0.00362518);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821610() {
   return (neuron0x380e520()*0.611497);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821650() {
   return (neuron0x380e860()*0.00540802);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821690() {
   return (neuron0x380eba0()*0.0219403);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38216d0() {
   return (neuron0x380eee0()*0.0229874);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821710() {
   return (neuron0x380f220()*-0.00475556);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821750() {
   return (neuron0x380f560()*-0.00380585);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821790() {
   return (neuron0x380f8a0()*-0.0296661);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819950() {
   return (neuron0x380fbe0()*-0.0297177);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819990() {
   return (neuron0x380ff20()*-0.0174953);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38199d0() {
   return (neuron0x3810260()*1.14998);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819a10() {
   return (neuron0x38105a0()*0.0148508);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819a50() {
   return (neuron0x38108e0()*0.0250104);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819a90() {
   return (neuron0x3810c20()*-0.000188506);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819ad0() {
   return (neuron0x3810f60()*0.0139095);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38213e0() {
   return (neuron0x38112a0()*0.0134062);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821420() {
   return (neuron0x3811800()*0.0103697);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819c20() {
   return (neuron0x3811a20()*-0.00517493);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819c60() {
   return (neuron0x3811d60()*0.0156247);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819ca0() {
   return (neuron0x38120a0()*0.0124091);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819ce0() {
   return (neuron0x38123e0()*-0.00166638);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819d20() {
   return (neuron0x3812720()*0.000462489);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819d60() {
   return (neuron0x3812a60()*-1.09627);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a0e0() {
   return (neuron0x380dea0()*-0.0635426);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a120() {
   return (neuron0x380e1e0()*0.00308139);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a160() {
   return (neuron0x380e520()*0.158899);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a1a0() {
   return (neuron0x380e860()*0.011059);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a1e0() {
   return (neuron0x380eba0()*-0.014139);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a220() {
   return (neuron0x380eee0()*-0.00788917);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a260() {
   return (neuron0x380f220()*0.00746868);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a2a0() {
   return (neuron0x380f560()*0.0225741);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a2e0() {
   return (neuron0x380f8a0()*0.0232464);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a320() {
   return (neuron0x380fbe0()*-0.0596576);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a360() {
   return (neuron0x380ff20()*-0.126006);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a3a0() {
   return (neuron0x3810260()*1.1899);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a3e0() {
   return (neuron0x38105a0()*-0.0718979);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a420() {
   return (neuron0x38108e0()*-0.0894953);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a460() {
   return (neuron0x3810c20()*0.0136169);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a4a0() {
   return (neuron0x3810f60()*0.00386877);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819f30() {
   return (neuron0x38112a0()*-0.0437407);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3819f70() {
   return (neuron0x3811800()*-0.0400799);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a5f0() {
   return (neuron0x3811a20()*-0.0199767);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a630() {
   return (neuron0x3811d60()*-0.12064);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a670() {
   return (neuron0x38120a0()*0.00327147);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a6b0() {
   return (neuron0x38123e0()*0.0187425);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a6f0() {
   return (neuron0x3812720()*0.0131009);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a730() {
   return (neuron0x3812a60()*0.984191);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a900() {
   return (neuron0x380dea0()*-0.237503);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823990() {
   return (neuron0x380e1e0()*-0.0554521);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38239d0() {
   return (neuron0x380e520()*1.10832);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823a10() {
   return (neuron0x380e860()*0.0698933);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823a50() {
   return (neuron0x380eba0()*0.0385441);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823a90() {
   return (neuron0x380eee0()*-0.265592);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823ad0() {
   return (neuron0x380f220()*0.101454);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823b10() {
   return (neuron0x380f560()*0.187601);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823b50() {
   return (neuron0x380f8a0()*0.221342);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823b90() {
   return (neuron0x380fbe0()*-0.065381);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823bd0() {
   return (neuron0x380ff20()*-0.0307164);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823c10() {
   return (neuron0x3810260()*-0.39939);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823c50() {
   return (neuron0x38105a0()*-0.300586);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823c90() {
   return (neuron0x38108e0()*-0.179089);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823cd0() {
   return (neuron0x3810c20()*0.0463121);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823d10() {
   return (neuron0x3810f60()*0.0317642);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38237e0() {
   return (neuron0x38112a0()*0.14722);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823820() {
   return (neuron0x3811800()*-0.110136);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823e60() {
   return (neuron0x3811a20()*-0.17418);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823ea0() {
   return (neuron0x3811d60()*0.244099);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823ee0() {
   return (neuron0x38120a0()*-0.00635524);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823f20() {
   return (neuron0x38123e0()*-0.10565);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823f60() {
   return (neuron0x3812720()*0.091578);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823fa0() {
   return (neuron0x3812a60()*-0.0867877);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824320() {
   return (neuron0x380dea0()*-0.0839243);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824360() {
   return (neuron0x380e1e0()*0.152237);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38243a0() {
   return (neuron0x380e520()*-0.0431364);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38243e0() {
   return (neuron0x380e860()*-0.272095);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824420() {
   return (neuron0x380eba0()*-0.19137);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824460() {
   return (neuron0x380eee0()*0.249535);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38244a0() {
   return (neuron0x380f220()*0.377087);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38244e0() {
   return (neuron0x380f560()*-0.019796);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824520() {
   return (neuron0x380f8a0()*-0.0529745);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824560() {
   return (neuron0x380fbe0()*0.352554);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38245a0() {
   return (neuron0x380ff20()*0.00592618);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38245e0() {
   return (neuron0x3810260()*0.309388);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824620() {
   return (neuron0x38105a0()*-0.113371);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824660() {
   return (neuron0x38108e0()*0.451877);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38246a0() {
   return (neuron0x3810c20()*0.0471272);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38246e0() {
   return (neuron0x3810f60()*0.503782);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824170() {
   return (neuron0x38112a0()*0.272825);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38241b0() {
   return (neuron0x3811800()*-0.443066);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824830() {
   return (neuron0x3811a20()*-0.420903);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824870() {
   return (neuron0x3811d60()*0.119348);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38248b0() {
   return (neuron0x38120a0()*-0.485841);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38248f0() {
   return (neuron0x38123e0()*-0.264172);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824930() {
   return (neuron0x3812720()*0.322533);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824970() {
   return (neuron0x3812a60()*-0.455687);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824cf0() {
   return (neuron0x380dea0()*-0.0054137);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824d30() {
   return (neuron0x380e1e0()*-0.00161525);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824d70() {
   return (neuron0x380e520()*-4.55077);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824db0() {
   return (neuron0x380e860()*0.0129188);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824df0() {
   return (neuron0x380eba0()*-0.000399146);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824e30() {
   return (neuron0x380eee0()*-0.00496092);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824e70() {
   return (neuron0x380f220()*-0.00544701);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824eb0() {
   return (neuron0x380f560()*-0.00701115);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824ef0() {
   return (neuron0x380f8a0()*-0.00456041);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824f30() {
   return (neuron0x380fbe0()*-0.00179331);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824f70() {
   return (neuron0x380ff20()*-0.00876117);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824fb0() {
   return (neuron0x3810260()*0.0580384);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824ff0() {
   return (neuron0x38105a0()*-0.0234449);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825030() {
   return (neuron0x38108e0()*-0.00665736);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825070() {
   return (neuron0x3810c20()*0.00388877);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38250b0() {
   return (neuron0x3810f60()*0.00867856);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824b40() {
   return (neuron0x38112a0()*-1.86111e-05);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824b80() {
   return (neuron0x3811800()*-0.000572825);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825200() {
   return (neuron0x3811a20()*-0.00100114);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825240() {
   return (neuron0x3811d60()*0.00277881);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825280() {
   return (neuron0x38120a0()*-0.00360024);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38252c0() {
   return (neuron0x38123e0()*0.00054172);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825300() {
   return (neuron0x3812720()*0.00102063);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825340() {
   return (neuron0x3812a60()*-3.12099);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38256c0() {
   return (neuron0x380dea0()*-0.0562221);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825700() {
   return (neuron0x380e1e0()*-0.410323);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825740() {
   return (neuron0x380e520()*0.299555);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825780() {
   return (neuron0x380e860()*-0.207285);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38257c0() {
   return (neuron0x380eba0()*0.0282842);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825800() {
   return (neuron0x380eee0()*-0.141746);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825840() {
   return (neuron0x380f220()*0.138581);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825880() {
   return (neuron0x380f560()*-0.36955);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38258c0() {
   return (neuron0x380f8a0()*-0.0682436);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825900() {
   return (neuron0x380fbe0()*0.34402);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825940() {
   return (neuron0x380ff20()*0.196071);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825980() {
   return (neuron0x3810260()*0.200389);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38259c0() {
   return (neuron0x38105a0()*0.489867);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825a00() {
   return (neuron0x38108e0()*-0.221135);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825a40() {
   return (neuron0x3810c20()*0.116773);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825a80() {
   return (neuron0x3810f60()*-0.14199);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825510() {
   return (neuron0x38112a0()*-0.0646778);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825550() {
   return (neuron0x3811800()*0.239891);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825bd0() {
   return (neuron0x3811a20()*-0.0668615);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825c10() {
   return (neuron0x3811d60()*0.165012);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825c50() {
   return (neuron0x38120a0()*-0.475321);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825c90() {
   return (neuron0x38123e0()*0.170388);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825cd0() {
   return (neuron0x3812720()*0.315148);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825d10() {
   return (neuron0x3812a60()*0.0681384);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826090() {
   return (neuron0x380dea0()*0.229872);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38260d0() {
   return (neuron0x380e1e0()*0.125209);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826110() {
   return (neuron0x380e520()*-0.168813);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826150() {
   return (neuron0x380e860()*-0.125164);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826190() {
   return (neuron0x380eba0()*-0.317982);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38261d0() {
   return (neuron0x380eee0()*-0.163969);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826210() {
   return (neuron0x380f220()*-0.2734);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826250() {
   return (neuron0x380f560()*-0.282248);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826290() {
   return (neuron0x380f8a0()*0.015203);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38262d0() {
   return (neuron0x380fbe0()*-0.0974854);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826310() {
   return (neuron0x380ff20()*-0.211246);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826350() {
   return (neuron0x3810260()*-0.172635);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826390() {
   return (neuron0x38105a0()*0.293688);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38263d0() {
   return (neuron0x38108e0()*-0.164426);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826410() {
   return (neuron0x3810c20()*-0.202264);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826450() {
   return (neuron0x3810f60()*-0.34976);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825ee0() {
   return (neuron0x38112a0()*-0.228416);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825f20() {
   return (neuron0x3811800()*-0.0370898);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38265a0() {
   return (neuron0x3811a20()*-0.197163);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38265e0() {
   return (neuron0x3811d60()*-0.307404);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826620() {
   return (neuron0x38120a0()*-0.105142);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826660() {
   return (neuron0x38123e0()*-0.130051);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38266a0() {
   return (neuron0x3812720()*-0.19072);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38266e0() {
   return (neuron0x3812a60()*0.79563);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826a60() {
   return (neuron0x380dea0()*0.0437012);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826aa0() {
   return (neuron0x380e1e0()*0.00329984);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826ae0() {
   return (neuron0x380e520()*-0.188367);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826b20() {
   return (neuron0x380e860()*-0.548362);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826b60() {
   return (neuron0x380eba0()*0.0069872);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826ba0() {
   return (neuron0x380eee0()*0.0277732);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826be0() {
   return (neuron0x380f220()*-0.0381301);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826c20() {
   return (neuron0x380f560()*0.0403337);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826c60() {
   return (neuron0x380f8a0()*0.0266036);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826ca0() {
   return (neuron0x380fbe0()*0.0258542);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826ce0() {
   return (neuron0x380ff20()*-0.000812879);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826d20() {
   return (neuron0x3810260()*1.3175);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826d60() {
   return (neuron0x38105a0()*0.0803618);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826da0() {
   return (neuron0x38108e0()*-0.0654146);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826de0() {
   return (neuron0x3810c20()*0.027348);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826e20() {
   return (neuron0x3810f60()*-0.0291465);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38268b0() {
   return (neuron0x38112a0()*-0.106524);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38268f0() {
   return (neuron0x3811800()*0.02881);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826f70() {
   return (neuron0x3811a20()*0.0333414);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826fb0() {
   return (neuron0x3811d60()*0.0288604);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826ff0() {
   return (neuron0x38120a0()*0.012844);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827030() {
   return (neuron0x38123e0()*-0.0153227);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827070() {
   return (neuron0x3812720()*-0.0182538);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38270b0() {
   return (neuron0x3812a60()*0.050558);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827430() {
   return (neuron0x380dea0()*-0.074664);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827470() {
   return (neuron0x380e1e0()*-0.147488);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38274b0() {
   return (neuron0x380e520()*-0.0126103);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38274f0() {
   return (neuron0x380e860()*-0.279775);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827530() {
   return (neuron0x380eba0()*-0.192755);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827570() {
   return (neuron0x380eee0()*0.133018);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38275b0() {
   return (neuron0x380f220()*-0.0183964);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38275f0() {
   return (neuron0x380f560()*-0.139828);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827630() {
   return (neuron0x380f8a0()*-0.148354);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827670() {
   return (neuron0x380fbe0()*-0.0483304);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38276b0() {
   return (neuron0x380ff20()*-0.0633676);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38276f0() {
   return (neuron0x3810260()*-0.274071);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827730() {
   return (neuron0x38105a0()*-0.169819);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827770() {
   return (neuron0x38108e0()*0.206234);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38277b0() {
   return (neuron0x3810c20()*-0.110437);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38277f0() {
   return (neuron0x3810f60()*0.134602);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827280() {
   return (neuron0x38112a0()*-0.15158);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38272c0() {
   return (neuron0x3811800()*-0.0742981);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827940() {
   return (neuron0x3811a20()*-0.199243);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827980() {
   return (neuron0x3811d60()*0.0229657);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38279c0() {
   return (neuron0x38120a0()*0.0654363);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827a00() {
   return (neuron0x38123e0()*-0.126693);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827a40() {
   return (neuron0x3812720()*0.0149424);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827a80() {
   return (neuron0x3812a60()*-0.537276);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827e00() {
   return (neuron0x380dea0()*0.191944);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827e40() {
   return (neuron0x380e1e0()*0.166219);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827e80() {
   return (neuron0x380e520()*0.17757);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827ec0() {
   return (neuron0x380e860()*-0.0671787);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827f00() {
   return (neuron0x380eba0()*0.691274);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827f40() {
   return (neuron0x380eee0()*-0.031589);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827f80() {
   return (neuron0x380f220()*0.0222615);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827fc0() {
   return (neuron0x380f560()*-0.398659);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3828000() {
   return (neuron0x380f8a0()*0.267044);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3828040() {
   return (neuron0x380fbe0()*-0.0787616);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3828080() {
   return (neuron0x380ff20()*0.0564909);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38280c0() {
   return (neuron0x3810260()*0.574989);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3828100() {
   return (neuron0x38105a0()*0.0293278);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3828140() {
   return (neuron0x38108e0()*0.258105);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3828180() {
   return (neuron0x3810c20()*0.19694);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38281c0() {
   return (neuron0x3810f60()*-0.428639);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827c50() {
   return (neuron0x38112a0()*-0.220031);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3827c90() {
   return (neuron0x3811800()*-0.500158);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3828310() {
   return (neuron0x3811a20()*-0.407679);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3828350() {
   return (neuron0x3811d60()*0.345675);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3828390() {
   return (neuron0x38120a0()*-0.429802);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38283d0() {
   return (neuron0x38123e0()*-0.535597);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3828410() {
   return (neuron0x3812720()*0.0879123);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3828450() {
   return (neuron0x3812a60()*0.182826);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38287d0() {
   return (neuron0x380dea0()*-0.118013);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381cda0() {
   return (neuron0x380e1e0()*-0.00795148);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381cde0() {
   return (neuron0x380e520()*-0.339744);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ce20() {
   return (neuron0x380e860()*0.18927);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381d070() {
   return (neuron0x380eba0()*-0.158019);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381d0b0() {
   return (neuron0x380eee0()*-0.0295076);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381d0f0() {
   return (neuron0x380f220()*-0.0666928);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381d340() {
   return (neuron0x380f560()*0.0410098);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381d380() {
   return (neuron0x380f8a0()*0.109833);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381d5d0() {
   return (neuron0x380fbe0()*0.0623936);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381d610() {
   return (neuron0x380ff20()*0.10495);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381d650() {
   return (neuron0x3810260()*0.700357);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381d8a0() {
   return (neuron0x38105a0()*0.0470393);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381d8e0() {
   return (neuron0x38108e0()*-0.00676712);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381db30() {
   return (neuron0x3810c20()*0.138969);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381db70() {
   return (neuron0x3810f60()*0.0295117);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3828620() {
   return (neuron0x38112a0()*0.273517);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3828660() {
   return (neuron0x3811800()*0.167472);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381dcc0() {
   return (neuron0x3811a20()*0.032608);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381e1d0() {
   return (neuron0x3811d60()*0.237367);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381e210() {
   return (neuron0x38120a0()*-0.148991);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381e250() {
   return (neuron0x38123e0()*0.182287);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381e4a0() {
   return (neuron0x3812720()*0.183185);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381e4e0() {
   return (neuron0x3812a60()*-0.739068);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381dd90() {
   return (neuron0x380dea0()*-0.052749);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ddd0() {
   return (neuron0x380e1e0()*-0.0112748);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381de10() {
   return (neuron0x380e520()*-1.96112);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381de50() {
   return (neuron0x380e860()*0.0103761);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381e7d0() {
   return (neuron0x380eba0()*0.000483775);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ab20() {
   return (neuron0x380eee0()*-0.00193931);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ab60() {
   return (neuron0x380f220()*-0.00367444);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382aba0() {
   return (neuron0x380f560()*-0.000285057);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382abe0() {
   return (neuron0x380f8a0()*0.00248474);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ac20() {
   return (neuron0x380fbe0()*0.00336513);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ac60() {
   return (neuron0x380ff20()*0.00686557);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382aca0() {
   return (neuron0x3810260()*0.0137093);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ace0() {
   return (neuron0x38105a0()*-0.0298111);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ad20() {
   return (neuron0x38108e0()*0.0124586);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ad60() {
   return (neuron0x3810c20()*-0.00409479);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ada0() {
   return (neuron0x3810f60()*0.00824405);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381e6b0() {
   return (neuron0x38112a0()*0.0186554);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381e6f0() {
   return (neuron0x3811800()*-0.00844904);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382aef0() {
   return (neuron0x3811a20()*-0.00674856);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382af30() {
   return (neuron0x3811d60()*0.00440797);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382af70() {
   return (neuron0x38120a0()*-0.00318741);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382afb0() {
   return (neuron0x38123e0()*0.00188329);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382aff0() {
   return (neuron0x3812720()*0.00685435);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b030() {
   return (neuron0x3812a60()*-0.118541);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b3b0() {
   return (neuron0x380dea0()*0.0275522);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b3f0() {
   return (neuron0x380e1e0()*-0.000310221);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b430() {
   return (neuron0x380e520()*1.01131);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b470() {
   return (neuron0x380e860()*-0.00883588);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b4b0() {
   return (neuron0x380eba0()*0.00285267);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b4f0() {
   return (neuron0x380eee0()*0.00618762);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b530() {
   return (neuron0x380f220()*0.00661686);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b570() {
   return (neuron0x380f560()*0.00508427);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b5b0() {
   return (neuron0x380f8a0()*0.00166137);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b5f0() {
   return (neuron0x380fbe0()*-0.00284561);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b630() {
   return (neuron0x380ff20()*-0.000423398);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b670() {
   return (neuron0x3810260()*-0.0864329);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b6b0() {
   return (neuron0x38105a0()*0.00197617);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b6f0() {
   return (neuron0x38108e0()*0.00640591);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b730() {
   return (neuron0x3810c20()*-0.000792728);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b770() {
   return (neuron0x3810f60()*-0.00131568);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b200() {
   return (neuron0x38112a0()*-0.00566725);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b240() {
   return (neuron0x3811800()*-0.00729627);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b8c0() {
   return (neuron0x3811a20()*-0.00668445);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b900() {
   return (neuron0x3811d60()*0.00261803);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b940() {
   return (neuron0x38120a0()*0.00679139);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b980() {
   return (neuron0x38123e0()*-0.000455209);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b9c0() {
   return (neuron0x3812720()*0.00111285);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ba00() {
   return (neuron0x3812a60()*1.20688);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382bd80() {
   return (neuron0x380dea0()*-0.236749);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382bdc0() {
   return (neuron0x380e1e0()*0.147849);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382be00() {
   return (neuron0x380e520()*-0.245252);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382be40() {
   return (neuron0x380e860()*0.0819438);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382be80() {
   return (neuron0x380eba0()*0.116173);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382bec0() {
   return (neuron0x380eee0()*0.355884);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382bf00() {
   return (neuron0x380f220()*0.346742);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382bf40() {
   return (neuron0x380f560()*0.342432);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382bf80() {
   return (neuron0x380f8a0()*0.0696107);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382bfc0() {
   return (neuron0x380fbe0()*0.336616);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c000() {
   return (neuron0x380ff20()*0.121726);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c040() {
   return (neuron0x3810260()*-0.60089);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c080() {
   return (neuron0x38105a0()*0.146327);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c0c0() {
   return (neuron0x38108e0()*-0.530478);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c100() {
   return (neuron0x3810c20()*0.161077);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c140() {
   return (neuron0x3810f60()*-0.374931);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382bbd0() {
   return (neuron0x38112a0()*0.614123);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382bc10() {
   return (neuron0x3811800()*-0.382295);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c290() {
   return (neuron0x3811a20()*-0.343257);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c2d0() {
   return (neuron0x3811d60()*-0.349098);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c310() {
   return (neuron0x38120a0()*-0.242524);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c350() {
   return (neuron0x38123e0()*-0.0497047);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c390() {
   return (neuron0x3812720()*0.260751);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c3d0() {
   return (neuron0x3812a60()*0.30829);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c750() {
   return (neuron0x380dea0()*0.0612703);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c790() {
   return (neuron0x380e1e0()*-0.217577);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c7d0() {
   return (neuron0x380e520()*0.474706);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c810() {
   return (neuron0x380e860()*0.130785);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c850() {
   return (neuron0x380eba0()*-0.00929963);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c890() {
   return (neuron0x380eee0()*-0.0744797);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c8d0() {
   return (neuron0x380f220()*-0.27432);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c910() {
   return (neuron0x380f560()*0.0167507);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c950() {
   return (neuron0x380f8a0()*-0.038731);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c990() {
   return (neuron0x380fbe0()*0.0898772);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c9d0() {
   return (neuron0x380ff20()*-0.119234);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ca10() {
   return (neuron0x3810260()*-0.105711);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ca50() {
   return (neuron0x38105a0()*-0.609244);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ca90() {
   return (neuron0x38108e0()*0.572232);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382cad0() {
   return (neuron0x3810c20()*0.186168);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382cb10() {
   return (neuron0x3810f60()*-0.234107);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c5a0() {
   return (neuron0x38112a0()*0.435665);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c5e0() {
   return (neuron0x3811800()*0.479001);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382cc60() {
   return (neuron0x3811a20()*-0.0500151);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382cca0() {
   return (neuron0x3811d60()*-0.0397087);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382cce0() {
   return (neuron0x38120a0()*0.0233559);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382cd20() {
   return (neuron0x38123e0()*-0.373879);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382cd60() {
   return (neuron0x3812720()*-0.170446);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382cda0() {
   return (neuron0x3812a60()*-0.369558);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d120() {
   return (neuron0x380dea0()*0.0126445);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d160() {
   return (neuron0x380e1e0()*-0.120068);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d1a0() {
   return (neuron0x380e520()*-0.18318);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d1e0() {
   return (neuron0x380e860()*-0.351333);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d220() {
   return (neuron0x380eba0()*-0.214902);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d260() {
   return (neuron0x380eee0()*0.0911623);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d2a0() {
   return (neuron0x380f220()*-0.239122);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d2e0() {
   return (neuron0x380f560()*0.0667802);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d320() {
   return (neuron0x380f8a0()*0.0462775);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d360() {
   return (neuron0x380fbe0()*-0.00874053);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d3a0() {
   return (neuron0x380ff20()*0.00559247);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d3e0() {
   return (neuron0x3810260()*-0.412039);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d420() {
   return (neuron0x38105a0()*-0.081755);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d460() {
   return (neuron0x38108e0()*-0.0269298);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d4a0() {
   return (neuron0x3810c20()*-0.101446);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d4e0() {
   return (neuron0x3810f60()*0.627748);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382cf70() {
   return (neuron0x38112a0()*0.0898489);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382cfb0() {
   return (neuron0x3811800()*0.0638522);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d630() {
   return (neuron0x3811a20()*0.0138379);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d670() {
   return (neuron0x3811d60()*0.104259);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d6b0() {
   return (neuron0x38120a0()*-0.00875405);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d6f0() {
   return (neuron0x38123e0()*0.0318248);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d730() {
   return (neuron0x3812720()*-0.0382772);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d770() {
   return (neuron0x3812a60()*-0.130529);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382daf0() {
   return (neuron0x380dea0()*-0.00150262);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382db30() {
   return (neuron0x380e1e0()*-0.00228706);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382db70() {
   return (neuron0x380e520()*-0.0186468);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382dbb0() {
   return (neuron0x380e860()*-2.20154);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382dbf0() {
   return (neuron0x380eba0()*0.00118066);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382dc30() {
   return (neuron0x380eee0()*-0.000799244);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382dc70() {
   return (neuron0x380f220()*0.000190421);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382dcb0() {
   return (neuron0x380f560()*-0.000968264);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382dcf0() {
   return (neuron0x380f8a0()*0.00209203);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382dd30() {
   return (neuron0x380fbe0()*-0.000262874);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382dd70() {
   return (neuron0x380ff20()*0.0017839);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ddb0() {
   return (neuron0x3810260()*0.214216);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ddf0() {
   return (neuron0x38105a0()*-0.000494523);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382de30() {
   return (neuron0x38108e0()*0.0064663);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382de70() {
   return (neuron0x3810c20()*-0.00184757);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382deb0() {
   return (neuron0x3810f60()*-0.0017989);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d940() {
   return (neuron0x38112a0()*0.0095654);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d980() {
   return (neuron0x3811800()*-0.0017366);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e000() {
   return (neuron0x3811a20()*-0.000347575);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e040() {
   return (neuron0x3811d60()*0.00128164);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e080() {
   return (neuron0x38120a0()*0.000324492);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e0c0() {
   return (neuron0x38123e0()*0.00164763);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e100() {
   return (neuron0x3812720()*0.00136582);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e140() {
   return (neuron0x3812a60()*-0.00516282);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e4c0() {
   return (neuron0x380dea0()*0.169752);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e500() {
   return (neuron0x380e1e0()*0.0360842);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e540() {
   return (neuron0x380e520()*0.0170387);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e580() {
   return (neuron0x380e860()*0.172598);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e5c0() {
   return (neuron0x380eba0()*-0.329335);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e600() {
   return (neuron0x380eee0()*0.343619);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e640() {
   return (neuron0x380f220()*-0.0143759);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e680() {
   return (neuron0x380f560()*0.242993);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e6c0() {
   return (neuron0x380f8a0()*0.464811);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e700() {
   return (neuron0x380fbe0()*-0.175541);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e740() {
   return (neuron0x380ff20()*-0.386397);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e780() {
   return (neuron0x3810260()*0.0686663);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e7c0() {
   return (neuron0x38105a0()*-0.0785004);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e800() {
   return (neuron0x38108e0()*-0.320865);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e840() {
   return (neuron0x3810c20()*0.243581);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e880() {
   return (neuron0x3810f60()*0.159002);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e310() {
   return (neuron0x38112a0()*0.1765);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e350() {
   return (neuron0x3811800()*-0.133906);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e9d0() {
   return (neuron0x3811a20()*-0.249708);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ea10() {
   return (neuron0x3811d60()*-0.431466);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ea50() {
   return (neuron0x38120a0()*0.261315);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ea90() {
   return (neuron0x38123e0()*-0.396174);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ead0() {
   return (neuron0x3812720()*-0.312905);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382eb10() {
   return (neuron0x3812a60()*0.2592);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ee90() {
   return (neuron0x380dea0()*-0.0457561);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382eed0() {
   return (neuron0x380e1e0()*-0.0770419);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ef10() {
   return (neuron0x380e520()*-1.37411);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ef50() {
   return (neuron0x380e860()*-0.0693098);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ef90() {
   return (neuron0x380eba0()*0.100679);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382efd0() {
   return (neuron0x380eee0()*-0.200173);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f010() {
   return (neuron0x380f220()*0.0243758);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f050() {
   return (neuron0x380f560()*-0.0195353);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f090() {
   return (neuron0x380f8a0()*0.162639);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f0d0() {
   return (neuron0x380fbe0()*-0.0176462);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f110() {
   return (neuron0x380ff20()*-0.188754);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f150() {
   return (neuron0x3810260()*-0.0297351);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f190() {
   return (neuron0x38105a0()*0.164689);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f1d0() {
   return (neuron0x38108e0()*0.230619);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f210() {
   return (neuron0x3810c20()*0.0365083);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f250() {
   return (neuron0x3810f60()*0.136025);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ece0() {
   return (neuron0x38112a0()*0.267542);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ed20() {
   return (neuron0x3811800()*-0.198296);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f3a0() {
   return (neuron0x3811a20()*0.260842);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f3e0() {
   return (neuron0x3811d60()*0.136662);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f420() {
   return (neuron0x38120a0()*0.0379376);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f460() {
   return (neuron0x38123e0()*0.212707);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f4a0() {
   return (neuron0x3812720()*0.0408579);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f4e0() {
   return (neuron0x3812a60()*0.126566);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817f90() {
   return (neuron0x380dea0()*0.0100157);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817fd0() {
   return (neuron0x380e1e0()*-0.00169726);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818010() {
   return (neuron0x380e520()*-0.0199129);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818050() {
   return (neuron0x380e860()*0.836587);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818090() {
   return (neuron0x380eba0()*-0.0134646);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38180d0() {
   return (neuron0x380eee0()*-0.00254114);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818110() {
   return (neuron0x380f220()*-0.0115374);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818150() {
   return (neuron0x380f560()*0.00161059);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382fc70() {
   return (neuron0x380f8a0()*0.00787045);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382fcb0() {
   return (neuron0x380fbe0()*0.0357445);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382fcf0() {
   return (neuron0x380ff20()*0.012021);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382fd30() {
   return (neuron0x3810260()*0.537793);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382fd70() {
   return (neuron0x38105a0()*-0.044616);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382fdb0() {
   return (neuron0x38108e0()*0.0297629);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382fdf0() {
   return (neuron0x3810c20()*-0.0215482);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382fe30() {
   return (neuron0x3810f60()*-0.0384489);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f6b0() {
   return (neuron0x38112a0()*0.0708948);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f6f0() {
   return (neuron0x3811800()*-0.0187272);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ff80() {
   return (neuron0x3811a20()*-0.0232857);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ffc0() {
   return (neuron0x3811d60()*-0.0213161);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830000() {
   return (neuron0x38120a0()*-0.00659341);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830040() {
   return (neuron0x38123e0()*0.0150231);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830080() {
   return (neuron0x3812720()*-0.00235363);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38300c0() {
   return (neuron0x3812a60()*0.045878);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830440() {
   return (neuron0x380dea0()*0.0532035);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830480() {
   return (neuron0x380e1e0()*0.00392349);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38304c0() {
   return (neuron0x380e520()*-0.236905);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830500() {
   return (neuron0x380e860()*0.0133477);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830540() {
   return (neuron0x380eba0()*-0.00345064);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830580() {
   return (neuron0x380eee0()*-0.0064242);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38305c0() {
   return (neuron0x380f220()*-0.00289474);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830600() {
   return (neuron0x380f560()*0.00421238);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830640() {
   return (neuron0x380f8a0()*0.00980128);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830680() {
   return (neuron0x380fbe0()*-0.0133198);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38306c0() {
   return (neuron0x380ff20()*-0.00343404);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830700() {
   return (neuron0x3810260()*-0.0504362);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830740() {
   return (neuron0x38105a0()*-0.00869031);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830780() {
   return (neuron0x38108e0()*0.0250274);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38307c0() {
   return (neuron0x3810c20()*-0.000749668);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830800() {
   return (neuron0x3810f60()*-0.0127428);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830290() {
   return (neuron0x38112a0()*-0.0163581);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38302d0() {
   return (neuron0x3811800()*-0.0156234);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830950() {
   return (neuron0x3811a20()*-0.0112279);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830990() {
   return (neuron0x3811d60()*-0.00484164);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38309d0() {
   return (neuron0x38120a0()*0.00189503);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830a10() {
   return (neuron0x38123e0()*-0.00612456);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830a50() {
   return (neuron0x3812720()*-0.0225093);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830a90() {
   return (neuron0x3812a60()*-1.77216);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830e10() {
   return (neuron0x380dea0()*0.0151404);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830e50() {
   return (neuron0x380e1e0()*0.106893);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830e90() {
   return (neuron0x380e520()*-0.349228);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830ed0() {
   return (neuron0x380e860()*0.0351743);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830f10() {
   return (neuron0x380eba0()*-0.282229);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830f50() {
   return (neuron0x380eee0()*-0.0259709);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830f90() {
   return (neuron0x380f220()*0.10778);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830fd0() {
   return (neuron0x380f560()*-0.105993);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3831010() {
   return (neuron0x380f8a0()*0.0701625);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3831050() {
   return (neuron0x380fbe0()*-0.0256303);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3831090() {
   return (neuron0x380ff20()*0.0469945);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38310d0() {
   return (neuron0x3810260()*-1.17489);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3831110() {
   return (neuron0x38105a0()*0.13397);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3831150() {
   return (neuron0x38108e0()*0.0419659);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3831190() {
   return (neuron0x3810c20()*-0.0267002);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38311d0() {
   return (neuron0x3810f60()*-0.0827959);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830c60() {
   return (neuron0x38112a0()*-0.160242);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830ca0() {
   return (neuron0x3811800()*0.00893319);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38217d0() {
   return (neuron0x3811a20()*0.0715673);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821810() {
   return (neuron0x3811d60()*-0.0173061);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821850() {
   return (neuron0x38120a0()*0.0120419);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821890() {
   return (neuron0x38123e0()*0.0273109);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38218d0() {
   return (neuron0x3812720()*-0.0300154);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821910() {
   return (neuron0x3812a60()*-0.0729778);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821c90() {
   return (neuron0x380dea0()*-0.0859679);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821cd0() {
   return (neuron0x380e1e0()*-0.0263648);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821d10() {
   return (neuron0x380e520()*-0.0740873);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821d50() {
   return (neuron0x380e860()*0.0735878);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821d90() {
   return (neuron0x380eba0()*0.0454691);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821dd0() {
   return (neuron0x380eee0()*-0.0481949);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821e10() {
   return (neuron0x380f220()*-0.00853493);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821e50() {
   return (neuron0x380f560()*-0.00779835);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821e90() {
   return (neuron0x380f8a0()*-0.480806);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821ed0() {
   return (neuron0x380fbe0()*0.111143);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821f10() {
   return (neuron0x380ff20()*0.148677);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821f50() {
   return (neuron0x3810260()*0.849926);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821f90() {
   return (neuron0x38105a0()*-0.111651);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821fd0() {
   return (neuron0x38108e0()*-0.107955);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822010() {
   return (neuron0x3810c20()*-0.0439798);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822050() {
   return (neuron0x3810f60()*-0.00482073);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821ae0() {
   return (neuron0x38112a0()*0.110954);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821b20() {
   return (neuron0x3811800()*0.144172);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38221a0() {
   return (neuron0x3811a20()*-0.0550252);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38221e0() {
   return (neuron0x3811d60()*-0.0433777);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822220() {
   return (neuron0x38120a0()*-0.087917);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822260() {
   return (neuron0x38123e0()*-0.00242002);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38222a0() {
   return (neuron0x3812720()*0.0373903);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38222e0() {
   return (neuron0x3812a60()*0.352246);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822660() {
   return (neuron0x380dea0()*0.529622);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38226a0() {
   return (neuron0x380e1e0()*0.347001);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38226e0() {
   return (neuron0x380e520()*0.117827);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822720() {
   return (neuron0x380e860()*-0.226235);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822760() {
   return (neuron0x380eba0()*-0.152031);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38227a0() {
   return (neuron0x380eee0()*-0.124981);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38227e0() {
   return (neuron0x380f220()*-0.236131);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822820() {
   return (neuron0x380f560()*0.396543);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822860() {
   return (neuron0x380f8a0()*0.446911);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38228a0() {
   return (neuron0x380fbe0()*-0.240783);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38228e0() {
   return (neuron0x380ff20()*0.478839);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822920() {
   return (neuron0x3810260()*0.0893771);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822960() {
   return (neuron0x38105a0()*-0.0567609);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38229a0() {
   return (neuron0x38108e0()*0.479225);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38229e0() {
   return (neuron0x3810c20()*0.378357);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822a20() {
   return (neuron0x3810f60()*0.366439);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38224b0() {
   return (neuron0x38112a0()*-0.295207);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38224f0() {
   return (neuron0x3811800()*0.0602956);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822b70() {
   return (neuron0x3811a20()*0.108418);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822bb0() {
   return (neuron0x3811d60()*0.0996371);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822bf0() {
   return (neuron0x38120a0()*-0.426198);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822c30() {
   return (neuron0x38123e0()*0.358092);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822c70() {
   return (neuron0x3812720()*0.195448);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822cb0() {
   return (neuron0x3812a60()*-0.013404);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823030() {
   return (neuron0x380dea0()*-0.0988665);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823070() {
   return (neuron0x380e1e0()*0.0310486);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38230b0() {
   return (neuron0x380e520()*-0.0961641);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38230f0() {
   return (neuron0x380e860()*0.0198788);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823130() {
   return (neuron0x380eba0()*0.0957993);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823170() {
   return (neuron0x380eee0()*0.043603);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38231b0() {
   return (neuron0x380f220()*0.0917329);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38231f0() {
   return (neuron0x380f560()*-0.0823803);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823230() {
   return (neuron0x380f8a0()*-0.0151013);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823270() {
   return (neuron0x380fbe0()*0.048567);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38232b0() {
   return (neuron0x380ff20()*0.0922539);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38232f0() {
   return (neuron0x3810260()*0.369299);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823330() {
   return (neuron0x38105a0()*0.257519);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823370() {
   return (neuron0x38108e0()*0.332825);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38233b0() {
   return (neuron0x3810c20()*0.153582);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38233f0() {
   return (neuron0x3810f60()*0.0351291);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822e80() {
   return (neuron0x38112a0()*0.130999);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822ec0() {
   return (neuron0x3811800()*0.0350185);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823540() {
   return (neuron0x3811a20()*0.34027);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823580() {
   return (neuron0x3811d60()*-0.130725);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38235c0() {
   return (neuron0x38120a0()*-0.115069);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823600() {
   return (neuron0x38123e0()*0.0755402);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823640() {
   return (neuron0x3812720()*-0.0435723);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823680() {
   return (neuron0x3812a60()*0.0478396);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835550() {
   return (neuron0x380dea0()*-0.00187361);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835590() {
   return (neuron0x380e1e0()*-0.00132341);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38355d0() {
   return (neuron0x380e520()*-0.0176416);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835610() {
   return (neuron0x380e860()*2.15098);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835650() {
   return (neuron0x380eba0()*-0.00317144);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835690() {
   return (neuron0x380eee0()*0.000538526);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38356d0() {
   return (neuron0x380f220()*-0.00346611);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835710() {
   return (neuron0x380f560()*0.0031995);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835750() {
   return (neuron0x380f8a0()*0.002106);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835790() {
   return (neuron0x380fbe0()*0.00531357);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38357d0() {
   return (neuron0x380ff20()*0.00232745);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835810() {
   return (neuron0x3810260()*0.211589);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835850() {
   return (neuron0x38105a0()*-0.00509597);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835890() {
   return (neuron0x38108e0()*0.0150645);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38358d0() {
   return (neuron0x3810c20()*-0.00556836);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835910() {
   return (neuron0x3810f60()*-0.00302091);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38236c0() {
   return (neuron0x38112a0()*0.0154991);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823700() {
   return (neuron0x3811800()*-0.00475036);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835a60() {
   return (neuron0x3811a20()*-0.00408289);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835aa0() {
   return (neuron0x3811d60()*-0.00216043);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835ae0() {
   return (neuron0x38120a0()*-0.000448608);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835b20() {
   return (neuron0x38123e0()*-0.000432233);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835b60() {
   return (neuron0x3812720()*-0.000328886);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835ba0() {
   return (neuron0x3812a60()*0.00673864);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835f20() {
   return (neuron0x380dea0()*-0.00367813);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835f60() {
   return (neuron0x380e1e0()*0.00343795);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835fa0() {
   return (neuron0x380e520()*4.81364);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835fe0() {
   return (neuron0x380e860()*-0.0233044);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836020() {
   return (neuron0x380eba0()*0.00550426);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836060() {
   return (neuron0x380eee0()*0.009087);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38360a0() {
   return (neuron0x380f220()*0.00164677);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38360e0() {
   return (neuron0x380f560()*0.0104759);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836120() {
   return (neuron0x380f8a0()*0.000106885);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836160() {
   return (neuron0x380fbe0()*0.0022863);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38361a0() {
   return (neuron0x380ff20()*0.00649136);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38361e0() {
   return (neuron0x3810260()*-0.057814);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836220() {
   return (neuron0x38105a0()*0.0115593);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836260() {
   return (neuron0x38108e0()*0.000656354);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38362a0() {
   return (neuron0x3810c20()*-0.00270813);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38362e0() {
   return (neuron0x3810f60()*0.00523816);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835d70() {
   return (neuron0x38112a0()*0.00466353);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835db0() {
   return (neuron0x3811800()*-0.00834509);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836430() {
   return (neuron0x3811a20()*-0.00191852);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836470() {
   return (neuron0x3811d60()*-0.00336022);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38364b0() {
   return (neuron0x38120a0()*0.009599);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38364f0() {
   return (neuron0x38123e0()*0.00326527);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836530() {
   return (neuron0x3812720()*0.00014787);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836570() {
   return (neuron0x3812a60()*-3.68932);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38368f0() {
   return (neuron0x380dea0()*-0.464059);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836930() {
   return (neuron0x380e1e0()*0.20293);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836970() {
   return (neuron0x380e520()*0.276345);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38369b0() {
   return (neuron0x380e860()*-0.00281953);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38369f0() {
   return (neuron0x380eba0()*0.0260543);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836a30() {
   return (neuron0x380eee0()*0.170359);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836a70() {
   return (neuron0x380f220()*0.181302);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836ab0() {
   return (neuron0x380f560()*0.153108);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836af0() {
   return (neuron0x380f8a0()*-0.228149);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836b30() {
   return (neuron0x380fbe0()*-0.0413071);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836b70() {
   return (neuron0x380ff20()*0.0640201);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836bb0() {
   return (neuron0x3810260()*-0.14635);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836bf0() {
   return (neuron0x38105a0()*-0.0696594);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836c30() {
   return (neuron0x38108e0()*-0.0584811);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836c70() {
   return (neuron0x3810c20()*0.373795);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836cb0() {
   return (neuron0x3810f60()*-0.200421);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836740() {
   return (neuron0x38112a0()*-0.342635);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836780() {
   return (neuron0x3811800()*-0.177304);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836e00() {
   return (neuron0x3811a20()*0.0607728);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836e40() {
   return (neuron0x3811d60()*-0.400161);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836e80() {
   return (neuron0x38120a0()*-0.0419571);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836ec0() {
   return (neuron0x38123e0()*-0.0392207);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836f00() {
   return (neuron0x3812720()*-0.304987);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836f40() {
   return (neuron0x3812a60()*-0.00107247);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38372c0() {
   return (neuron0x380dea0()*0.0202704);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837300() {
   return (neuron0x380e1e0()*-0.0139339);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837340() {
   return (neuron0x380e520()*0.044018);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837380() {
   return (neuron0x380e860()*-0.646806);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38373c0() {
   return (neuron0x380eba0()*-0.039896);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837400() {
   return (neuron0x380eee0()*0.111409);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837440() {
   return (neuron0x380f220()*-0.0388496);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837480() {
   return (neuron0x380f560()*-0.0450231);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38374c0() {
   return (neuron0x380f8a0()*-0.00422878);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837500() {
   return (neuron0x380fbe0()*-0.00485144);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837540() {
   return (neuron0x380ff20()*-0.00258832);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837580() {
   return (neuron0x3810260()*-0.976004);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38375c0() {
   return (neuron0x38105a0()*-0.11291);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837600() {
   return (neuron0x38108e0()*0.140259);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837640() {
   return (neuron0x3810c20()*-0.0951571);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837680() {
   return (neuron0x3810f60()*-0.15358);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837110() {
   return (neuron0x38112a0()*0.176979);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837150() {
   return (neuron0x3811800()*-0.0356957);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38377d0() {
   return (neuron0x3811a20()*-0.0251833);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837810() {
   return (neuron0x3811d60()*-0.032861);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837850() {
   return (neuron0x38120a0()*0.00895161);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837890() {
   return (neuron0x38123e0()*-0.0254654);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38378d0() {
   return (neuron0x3812720()*-0.00788116);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837910() {
   return (neuron0x3812a60()*-0.0429749);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813eb0() {
   return (neuron0x3812f00()*1.67596);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813ef0() {
   return (neuron0x3813810()*1.53725);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38153c0() {
   return (neuron0x38142f0()*-1.33889);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815400() {
   return (neuron0x35d76c0()*0.0322095);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815d90() {
   return (neuron0x3815110()*-0.0605783);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3815dd0() {
   return (neuron0x3815ae0()*-1.81361);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816b60() {
   return (neuron0x38168b0()*2.47733);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816ba0() {
   return (neuron0x3817280()*0.0513187);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817530() {
   return (neuron0x3817c50()*1.8953);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817570() {
   return (neuron0x3818730()*0.107502);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817f00() {
   return (neuron0x3819100()*0.223562);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3817f40() {
   return (neuron0x38161e0()*-1.08906);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38189e0() {
   return (neuron0x381acb0()*0.146541);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3818a20() {
   return (neuron0x381b680()*0.0580329);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38193b0() {
   return (neuron0x381c050()*-1.1263);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38193f0() {
   return (neuron0x381ca20()*-0.0272477);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3816490() {
   return (neuron0x381e830()*-0.326238);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38164d0() {
   return (neuron0x381eb10()*0.723894);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381af60() {
   return (neuron0x381f4e0()*-0.387763);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381afa0() {
   return (neuron0x381feb0()*-0.388906);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b930() {
   return (neuron0x3820880()*0.0751822);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381b970() {
   return (neuron0x3821250()*-0.014144);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c300() {
   return (neuron0x3819da0()*-0.00599514);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381c340() {
   return (neuron0x381a770()*-0.386517);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ccd0() {
   return (neuron0x3823fe0()*0.00922246);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381cd10() {
   return (neuron0x38249b0()*0.93715);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3810e40() {
   return (neuron0x3825380()*-0.0880449);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3810e80() {
   return (neuron0x3825d50()*0.0221511);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381edc0() {
   return (neuron0x3826720()*-0.813521);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381ee00() {
   return (neuron0x38270f0()*-0.400766);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f790() {
   return (neuron0x3827ac0()*0.0184266);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381f7d0() {
   return (neuron0x3828490()*0.08954);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820160() {
   return (neuron0x381e520()*0.394147);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38201a0() {
   return (neuron0x382b070()*0.848115);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820b30() {
   return (neuron0x382ba40()*-0.0230042);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3820b70() {
   return (neuron0x382c410()*0.00292033);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821500() {
   return (neuron0x382cde0()*-0.117101);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821540() {
   return (neuron0x382d7b0()*2.44478);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a050() {
   return (neuron0x382e180()*-0.0111489);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381a090() {
   return (neuron0x382eb50()*-0.0599804);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823900() {
   return (neuron0x382f520()*-2.20134);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3823940() {
   return (neuron0x3830100()*0.586553);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824290() {
   return (neuron0x3830ad0()*-0.0769649);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38242d0() {
   return (neuron0x3821950()*0.022974);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824c60() {
   return (neuron0x3822320()*0.0277291);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3824ca0() {
   return (neuron0x3822cf0()*-0.289278);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825630() {
   return (neuron0x3835330()*2.56309);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3825670() {
   return (neuron0x3835be0()*1.45775);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826000() {
   return (neuron0x38365b0()*-0.148621);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826040() {
   return (neuron0x3836f80()*0.410946);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3828740() {
   return (neuron0x3812f00()*1.16676);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3828780() {
   return (neuron0x3813810()*0.500031);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381dd00() {
   return (neuron0x38142f0()*-0.247062);
}

double NNfunction_ns_chiPlus2_dL::synapse0x381dd40() {
   return (neuron0x35d76c0()*-0.720548);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b320() {
   return (neuron0x3815110()*-0.0132267);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382b360() {
   return (neuron0x3815ae0()*-1.11124);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382bcf0() {
   return (neuron0x38168b0()*0.798963);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382bd30() {
   return (neuron0x3817280()*-0.0044198);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c6c0() {
   return (neuron0x3817c50()*-1.49584);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382c700() {
   return (neuron0x3818730()*-0.0121324);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d090() {
   return (neuron0x3819100()*-0.262643);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382d0d0() {
   return (neuron0x38161e0()*-1.85926);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382da60() {
   return (neuron0x381acb0()*-0.0705693);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382daa0() {
   return (neuron0x381b680()*-0.0303755);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e430() {
   return (neuron0x381c050()*0.467417);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382e470() {
   return (neuron0x381ca20()*0.0166357);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ee00() {
   return (neuron0x381e830()*0.275192);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382ee40() {
   return (neuron0x381eb10()*1.30196);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f7d0() {
   return (neuron0x381f4e0()*-0.159223);
}

double NNfunction_ns_chiPlus2_dL::synapse0x382f810() {
   return (neuron0x381feb0()*0.153826);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38303b0() {
   return (neuron0x3820880()*0.0122228);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38303f0() {
   return (neuron0x3821250()*0.409209);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830d80() {
   return (neuron0x3819da0()*-0.0426932);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3830dc0() {
   return (neuron0x381a770()*0.00828371);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821c00() {
   return (neuron0x3823fe0()*-0.00418028);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3821c40() {
   return (neuron0x38249b0()*1.05489);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38225d0() {
   return (neuron0x3825380()*0.00427787);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822610() {
   return (neuron0x3825d50()*-0.021558);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822fa0() {
   return (neuron0x3826720()*0.631902);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3822fe0() {
   return (neuron0x38270f0()*-0.142769);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38354c0() {
   return (neuron0x3827ac0()*-0.000662824);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835500() {
   return (neuron0x3828490()*-0.120905);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835e90() {
   return (neuron0x381e520()*0.644398);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3835ed0() {
   return (neuron0x382b070()*0.654085);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3836860() {
   return (neuron0x382ba40()*-0.0366677);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38368a0() {
   return (neuron0x382c410()*0.0222679);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837230() {
   return (neuron0x382cde0()*-0.169519);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837270() {
   return (neuron0x382d7b0()*-0.932526);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813120() {
   return (neuron0x382e180()*0.0103632);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3813160() {
   return (neuron0x382eb50()*-0.0744721);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38269d0() {
   return (neuron0x382f520()*1.16897);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3826a10() {
   return (neuron0x3830100()*0.76243);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837950() {
   return (neuron0x3830ad0()*-0.388218);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837990() {
   return (neuron0x3821950()*-0.0238359);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38379d0() {
   return (neuron0x3822320()*0.0147455);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3837a10() {
   return (neuron0x3822cf0()*0.150635);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383e8c0() {
   return (neuron0x3835330()*-0.972948);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383e900() {
   return (neuron0x3835be0()*0.783399);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383e940() {
   return (neuron0x38365b0()*-0.0755325);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383e980() {
   return (neuron0x3836f80()*-0.556033);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383ed00() {
   return (neuron0x3812f00()*0.223701);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383ed40() {
   return (neuron0x3813810()*0.14917);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383ed80() {
   return (neuron0x38142f0()*0.17095);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383edc0() {
   return (neuron0x35d76c0()*-0.286345);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383ee00() {
   return (neuron0x3815110()*-0.154704);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383ee40() {
   return (neuron0x3815ae0()*-0.525309);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383ee80() {
   return (neuron0x38168b0()*-0.216018);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383eec0() {
   return (neuron0x3817280()*-0.392461);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383ef00() {
   return (neuron0x3817c50()*-0.146629);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383ef40() {
   return (neuron0x3818730()*-0.284826);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383ef80() {
   return (neuron0x3819100()*-0.275145);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383efc0() {
   return (neuron0x38161e0()*-0.344593);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f000() {
   return (neuron0x381acb0()*-0.237291);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f040() {
   return (neuron0x381b680()*-0.239665);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f080() {
   return (neuron0x381c050()*0.00866337);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f0c0() {
   return (neuron0x381ca20()*-0.0919888);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383eb50() {
   return (neuron0x381e830()*-0.569504);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383eb90() {
   return (neuron0x381eb10()*0.124198);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f210() {
   return (neuron0x381f4e0()*0.0314401);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f250() {
   return (neuron0x381feb0()*-0.17968);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f290() {
   return (neuron0x3820880()*0.374127);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f2d0() {
   return (neuron0x3821250()*0.0317079);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f310() {
   return (neuron0x3819da0()*-0.535815);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f350() {
   return (neuron0x381a770()*-0.0816821);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f390() {
   return (neuron0x3823fe0()*-0.39398);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f3d0() {
   return (neuron0x38249b0()*0.499368);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f410() {
   return (neuron0x3825380()*0.414715);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f450() {
   return (neuron0x3825d50()*-0.202008);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f490() {
   return (neuron0x3826720()*0.144074);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f4d0() {
   return (neuron0x38270f0()*-0.461301);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f510() {
   return (neuron0x3827ac0()*0.0511456);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f550() {
   return (neuron0x3828490()*-0.266126);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f100() {
   return (neuron0x381e520()*0.0783278);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f140() {
   return (neuron0x382b070()*0.0907799);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f180() {
   return (neuron0x382ba40()*-0.400362);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f1c0() {
   return (neuron0x382c410()*-0.335561);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f7a0() {
   return (neuron0x382cde0()*0.177844);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f7e0() {
   return (neuron0x382d7b0()*0.15157);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f820() {
   return (neuron0x382e180()*0.220795);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f860() {
   return (neuron0x382eb50()*0.36935);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f8a0() {
   return (neuron0x382f520()*-0.0103267);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f8e0() {
   return (neuron0x3830100()*0.0367805);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f920() {
   return (neuron0x3830ad0()*-0.420197);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f960() {
   return (neuron0x3821950()*-0.407086);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f9a0() {
   return (neuron0x3822320()*0.0689053);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383f9e0() {
   return (neuron0x3822cf0()*0.169018);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383fa20() {
   return (neuron0x3835330()*-0.391292);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383fa60() {
   return (neuron0x3835be0()*-0.550742);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383faa0() {
   return (neuron0x38365b0()*-0.348051);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383fae0() {
   return (neuron0x3836f80()*-0.0836561);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383fe60() {
   return (neuron0x3812f00()*-1.01602);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383fea0() {
   return (neuron0x3813810()*-1.26799);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383fee0() {
   return (neuron0x38142f0()*1.15193);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383ff20() {
   return (neuron0x35d76c0()*-0.362521);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383ff60() {
   return (neuron0x3815110()*0.000774256);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383ffa0() {
   return (neuron0x3815ae0()*2.34881);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383ffe0() {
   return (neuron0x38168b0()*-0.948217);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840020() {
   return (neuron0x3817280()*-0.0189244);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840060() {
   return (neuron0x3817c50()*-1.77596);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38400a0() {
   return (neuron0x3818730()*-0.0100407);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38400e0() {
   return (neuron0x3819100()*-0.35781);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840120() {
   return (neuron0x38161e0()*1.35755);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840160() {
   return (neuron0x381acb0()*-0.0733109);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38401a0() {
   return (neuron0x381b680()*-0.00676356);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38401e0() {
   return (neuron0x381c050()*0.959757);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840220() {
   return (neuron0x381ca20()*0.0127241);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383fcb0() {
   return (neuron0x381e830()*0.197645);
}

double NNfunction_ns_chiPlus2_dL::synapse0x383fcf0() {
   return (neuron0x381eb10()*-2.14503);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840370() {
   return (neuron0x381f4e0()*-0.191329);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38403b0() {
   return (neuron0x381feb0()*0.800638);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38403f0() {
   return (neuron0x3820880()*-0.0189737);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840430() {
   return (neuron0x3821250()*0.116937);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840470() {
   return (neuron0x3819da0()*-0.841757);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38404b0() {
   return (neuron0x381a770()*-0.0855822);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38404f0() {
   return (neuron0x3823fe0()*0.0272898);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840530() {
   return (neuron0x38249b0()*-2.27625);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840570() {
   return (neuron0x3825380()*0.042765);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38405b0() {
   return (neuron0x3825d50()*-0.115866);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38405f0() {
   return (neuron0x3826720()*0.574075);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840630() {
   return (neuron0x38270f0()*-0.0034443);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840670() {
   return (neuron0x3827ac0()*-0.0432595);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38406b0() {
   return (neuron0x3828490()*-0.132604);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840260() {
   return (neuron0x381e520()*0.612852);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38402a0() {
   return (neuron0x382b070()*-1.40873);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38402e0() {
   return (neuron0x382ba40()*0.0429158);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840320() {
   return (neuron0x382c410()*0.0809342);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840900() {
   return (neuron0x382cde0()*-0.12091);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840940() {
   return (neuron0x382d7b0()*-1.88659);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840980() {
   return (neuron0x382e180()*-0.0113789);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38409c0() {
   return (neuron0x382eb50()*0.108195);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840a00() {
   return (neuron0x382f520()*1.65474);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840a40() {
   return (neuron0x3830100()*-0.285935);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840a80() {
   return (neuron0x3830ad0()*-0.0212158);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840ac0() {
   return (neuron0x3821950()*-0.294919);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840b00() {
   return (neuron0x3822320()*0.0296064);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840b40() {
   return (neuron0x3822cf0()*-0.153004);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840b80() {
   return (neuron0x3835330()*-2.01216);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840bc0() {
   return (neuron0x3835be0()*-0.541176);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840c00() {
   return (neuron0x38365b0()*0.0324846);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840c40() {
   return (neuron0x3836f80()*-0.489641);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840fc0() {
   return (neuron0x3812f00()*-0.508572);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841000() {
   return (neuron0x3813810()*1.75277);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841040() {
   return (neuron0x38142f0()*-0.611538);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841080() {
   return (neuron0x35d76c0()*0.587025);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38410c0() {
   return (neuron0x3815110()*0.0140655);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841100() {
   return (neuron0x3815ae0()*-2.33732);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841140() {
   return (neuron0x38168b0()*0.42313);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841180() {
   return (neuron0x3817280()*-0.0320575);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38411c0() {
   return (neuron0x3817c50()*1.41099);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841200() {
   return (neuron0x3818730()*0.000682193);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841240() {
   return (neuron0x3819100()*0.283461);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841280() {
   return (neuron0x38161e0()*-2.80806);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38412c0() {
   return (neuron0x381acb0()*0.0494764);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841300() {
   return (neuron0x381b680()*0.0286466);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841340() {
   return (neuron0x381c050()*-0.590324);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841380() {
   return (neuron0x381ca20()*0.00138078);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840e10() {
   return (neuron0x381e830()*-0.226012);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3840e50() {
   return (neuron0x381eb10()*1.41195);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38414d0() {
   return (neuron0x381f4e0()*-0.0256864);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841510() {
   return (neuron0x381feb0()*-0.181136);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841550() {
   return (neuron0x3820880()*-0.0299385);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841590() {
   return (neuron0x3821250()*0.441204);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38415d0() {
   return (neuron0x3819da0()*-0.063806);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841610() {
   return (neuron0x381a770()*0.0215374);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841650() {
   return (neuron0x3823fe0()*0.0125928);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841690() {
   return (neuron0x38249b0()*1.18062);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38416d0() {
   return (neuron0x3825380()*0.0237991);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841710() {
   return (neuron0x3825d50()*-0.0323359);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841750() {
   return (neuron0x3826720()*-0.557136);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841790() {
   return (neuron0x38270f0()*0.0922293);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38417d0() {
   return (neuron0x3827ac0()*-0.0135248);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841810() {
   return (neuron0x3828490()*0.0456071);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38413c0() {
   return (neuron0x381e520()*0.650279);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841400() {
   return (neuron0x382b070()*0.891052);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841440() {
   return (neuron0x382ba40()*0.041345);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841480() {
   return (neuron0x382c410()*0.00115575);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841a60() {
   return (neuron0x382cde0()*0.140153);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841aa0() {
   return (neuron0x382d7b0()*1.21573);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841ae0() {
   return (neuron0x382e180()*-0.0140162);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841b20() {
   return (neuron0x382eb50()*0.106602);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841b60() {
   return (neuron0x382f520()*-1.13573);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841ba0() {
   return (neuron0x3830100()*-0.754323);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841be0() {
   return (neuron0x3830ad0()*0.327149);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841c20() {
   return (neuron0x3821950()*-0.01627);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841c60() {
   return (neuron0x3822320()*0.00419104);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841ca0() {
   return (neuron0x3822cf0()*-0.182581);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841ce0() {
   return (neuron0x3835330()*1.25525);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841d20() {
   return (neuron0x3835be0()*0.790446);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841d60() {
   return (neuron0x38365b0()*0.0894653);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3841da0() {
   return (neuron0x3836f80()*0.487233);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3812ec0() {
   return (neuron0x383e180()*-4.21342);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3842000() {
   return (neuron0x383e520()*-4.31822);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3842040() {
   return (neuron0x383e9c0()*0.167646);
}

double NNfunction_ns_chiPlus2_dL::synapse0x3842080() {
   return (neuron0x383fb20()*6.68102);
}

double NNfunction_ns_chiPlus2_dL::synapse0x38420c0() {
   return (neuron0x3840c80()*-5.77087);
}

