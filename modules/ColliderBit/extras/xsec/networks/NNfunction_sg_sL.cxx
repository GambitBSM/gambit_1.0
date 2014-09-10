#include "NNfunction_sg_sL.h"
#include <cmath>

double NNfunction_sg_sL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3994)/15.1396;
   input1 = (in1 - 33.8225)/935.759;
   input2 = (in2 - 493.361)/556.27;
   input3 = (in3 - 156.312)/702.544;
   input4 = (in4 - 951.048)/829.272;
   input5 = (in5 - 851.952)/823.639;
   input6 = (in6 - 856.401)/822.544;
   input7 = (in7 - 860.887)/809.78;
   input8 = (in8 - 866.275)/848.187;
   input9 = (in9 - 855.474)/836.482;
   input10 = (in10 - 875.043)/832.483;
   input11 = (in11 - 798.161)/751.01;
   input12 = (in12 - 607.125)/507.502;
   input13 = (in13 - 587.568)/469.743;
   input14 = (in14 - 794.076)/713.291;
   input15 = (in15 - 793.407)/711.5;
   input16 = (in16 - 552.768)/479.408;
   input17 = (in17 - 818.68)/775.761;
   input18 = (in18 - 817.979)/779.035;
   input19 = (in19 - 826.471)/747.195;
   input20 = (in20 - -136.042)/474.988;
   input21 = (in21 - -175.569)/1047.88;
   input22 = (in22 - -7.48563)/1072.67;
   input23 = (in23 - -85.609)/577.51;
   switch(index) {
     case 0:
         return neuron0x28c6a70();
     default:
         return 0.;
   }
}

double NNfunction_sg_sL::Value(int index, double* input) {
   input0 = (input[0] - 23.3994)/15.1396;
   input1 = (input[1] - 33.8225)/935.759;
   input2 = (input[2] - 493.361)/556.27;
   input3 = (input[3] - 156.312)/702.544;
   input4 = (input[4] - 951.048)/829.272;
   input5 = (input[5] - 851.952)/823.639;
   input6 = (input[6] - 856.401)/822.544;
   input7 = (input[7] - 860.887)/809.78;
   input8 = (input[8] - 866.275)/848.187;
   input9 = (input[9] - 855.474)/836.482;
   input10 = (input[10] - 875.043)/832.483;
   input11 = (input[11] - 798.161)/751.01;
   input12 = (input[12] - 607.125)/507.502;
   input13 = (input[13] - 587.568)/469.743;
   input14 = (input[14] - 794.076)/713.291;
   input15 = (input[15] - 793.407)/711.5;
   input16 = (input[16] - 552.768)/479.408;
   input17 = (input[17] - 818.68)/775.761;
   input18 = (input[18] - 817.979)/779.035;
   input19 = (input[19] - 826.471)/747.195;
   input20 = (input[20] - -136.042)/474.988;
   input21 = (input[21] - -175.569)/1047.88;
   input22 = (input[22] - -7.48563)/1072.67;
   input23 = (input[23] - -85.609)/577.51;
   switch(index) {
     case 0:
         return neuron0x28c6a70();
     default:
         return 0.;
   }
}

double NNfunction_sg_sL::neuron0x2891ae0() {
   return input0;
}

double NNfunction_sg_sL::neuron0x2891d90() {
   return input1;
}

double NNfunction_sg_sL::neuron0x28920d0() {
   return input2;
}

double NNfunction_sg_sL::neuron0x2892410() {
   return input3;
}

double NNfunction_sg_sL::neuron0x2892750() {
   return input4;
}

double NNfunction_sg_sL::neuron0x2892a90() {
   return input5;
}

double NNfunction_sg_sL::neuron0x2892dd0() {
   return input6;
}

double NNfunction_sg_sL::neuron0x2893110() {
   return input7;
}

double NNfunction_sg_sL::neuron0x2893450() {
   return input8;
}

double NNfunction_sg_sL::neuron0x2893790() {
   return input9;
}

double NNfunction_sg_sL::neuron0x2893ad0() {
   return input10;
}

double NNfunction_sg_sL::neuron0x2893e10() {
   return input11;
}

double NNfunction_sg_sL::neuron0x2894150() {
   return input12;
}

double NNfunction_sg_sL::neuron0x2894490() {
   return input13;
}

double NNfunction_sg_sL::neuron0x28947d0() {
   return input14;
}

double NNfunction_sg_sL::neuron0x2894b10() {
   return input15;
}

double NNfunction_sg_sL::neuron0x2894e50() {
   return input16;
}

double NNfunction_sg_sL::neuron0x28953b0() {
   return input17;
}

double NNfunction_sg_sL::neuron0x28955d0() {
   return input18;
}

double NNfunction_sg_sL::neuron0x2895910() {
   return input19;
}

double NNfunction_sg_sL::neuron0x2895c50() {
   return input20;
}

double NNfunction_sg_sL::neuron0x2895f90() {
   return input21;
}

double NNfunction_sg_sL::neuron0x28962d0() {
   return input22;
}

double NNfunction_sg_sL::neuron0x2896610() {
   return input23;
}

double NNfunction_sg_sL::input0x2896a80() {
   double input = -0.496449;
   input += synapse0x2896dc0();
   input += synapse0x2896e00();
   input += synapse0x2896e40();
   input += synapse0x2896e80();
   input += synapse0x2896ec0();
   input += synapse0x2896f00();
   input += synapse0x2896f40();
   input += synapse0x2896f80();
   input += synapse0x2896fc0();
   input += synapse0x2897000();
   input += synapse0x2897040();
   input += synapse0x2897080();
   input += synapse0x28970c0();
   input += synapse0x2897100();
   input += synapse0x2897140();
   input += synapse0x2897180();
   input += synapse0x2896c10();
   input += synapse0x2896c50();
   input += synapse0x170ecd0();
   input += synapse0x170ed10();
   input += synapse0x28972d0();
   input += synapse0x2897310();
   input += synapse0x2897350();
   input += synapse0x2897390();
   return input;
}

double NNfunction_sg_sL::neuron0x2896a80() {
   double input = input0x2896a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28973d0() {
   double input = -1.87636;
   input += synapse0x2897710();
   input += synapse0x2897750();
   input += synapse0x2897790();
   input += synapse0x28977d0();
   input += synapse0x2897810();
   input += synapse0x2897850();
   input += synapse0x2897890();
   input += synapse0x28978d0();
   input += synapse0x2897910();
   input += synapse0x28971c0();
   input += synapse0x2897200();
   input += synapse0x2897240();
   input += synapse0x2897280();
   input += synapse0x2897b60();
   input += synapse0x2897ba0();
   input += synapse0x2897be0();
   input += synapse0x2897560();
   input += synapse0x28975a0();
   input += synapse0x2897d30();
   input += synapse0x2897d70();
   input += synapse0x2897db0();
   input += synapse0x2897df0();
   input += synapse0x2897e30();
   input += synapse0x2897e70();
   return input;
}

double NNfunction_sg_sL::neuron0x28973d0() {
   double input = input0x28973d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x2897eb0() {
   double input = -0.549793;
   input += synapse0x28981f0();
   input += synapse0x2898230();
   input += synapse0x2898270();
   input += synapse0x28982b0();
   input += synapse0x28982f0();
   input += synapse0x2898330();
   input += synapse0x2898370();
   input += synapse0x28983b0();
   input += synapse0x28983f0();
   input += synapse0x2898430();
   input += synapse0x2898470();
   input += synapse0x28984b0();
   input += synapse0x28984f0();
   input += synapse0x2898530();
   input += synapse0x2898570();
   input += synapse0x28985b0();
   input += synapse0x2898040();
   input += synapse0x2898080();
   input += synapse0x170fcb0();
   input += synapse0x265bbe0();
   input += synapse0x265bc20();
   input += synapse0x289a4f0();
   input += synapse0x289a530();
   input += synapse0x2891820();
   return input;
}

double NNfunction_sg_sL::neuron0x2897eb0() {
   double input = input0x2897eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x2897950() {
   double input = 1.2927;
   input += synapse0x28918f0();
   input += synapse0x265c460();
   input += synapse0x2897ae0();
   input += synapse0x2897b20();
   input += synapse0x2898700();
   input += synapse0x2898740();
   input += synapse0x2898780();
   input += synapse0x28987c0();
   input += synapse0x2898800();
   input += synapse0x2898840();
   input += synapse0x2898880();
   input += synapse0x28988c0();
   input += synapse0x2898900();
   input += synapse0x2898940();
   input += synapse0x2898980();
   input += synapse0x28989c0();
   input += synapse0x2891860();
   input += synapse0x28918a0();
   input += synapse0x2898b10();
   input += synapse0x2898b50();
   input += synapse0x2898b90();
   input += synapse0x2898bd0();
   input += synapse0x2898c10();
   input += synapse0x2898c50();
   return input;
}

double NNfunction_sg_sL::neuron0x2897950() {
   double input = input0x2897950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x2898c90() {
   double input = 1.44384;
   input += synapse0x2898fd0();
   input += synapse0x2899010();
   input += synapse0x2899050();
   input += synapse0x2899090();
   input += synapse0x28990d0();
   input += synapse0x2899110();
   input += synapse0x2899150();
   input += synapse0x2899190();
   input += synapse0x28991d0();
   input += synapse0x2899210();
   input += synapse0x2899250();
   input += synapse0x2899290();
   input += synapse0x28992d0();
   input += synapse0x2899310();
   input += synapse0x2899350();
   input += synapse0x2899390();
   input += synapse0x28994e0();
   input += synapse0x2898e20();
   input += synapse0x2898e60();
   input += synapse0x289a630();
   input += synapse0x289a670();
   input += synapse0x289a6b0();
   input += synapse0x289a6f0();
   input += synapse0x289a730();
   return input;
}

double NNfunction_sg_sL::neuron0x2898c90() {
   double input = input0x2898c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x289a770() {
   double input = -0.817537;
   input += synapse0x289aab0();
   input += synapse0x289aaf0();
   input += synapse0x289ab30();
   input += synapse0x289ab70();
   input += synapse0x289abb0();
   input += synapse0x289abf0();
   input += synapse0x289ac30();
   input += synapse0x289ac70();
   input += synapse0x289acb0();
   input += synapse0x265bf30();
   input += synapse0x265bf70();
   input += synapse0x265bfb0();
   input += synapse0x265bff0();
   input += synapse0x265c030();
   input += synapse0x265c070();
   input += synapse0x265c0b0();
   input += synapse0x289a900();
   input += synapse0x289a940();
   input += synapse0x265c200();
   input += synapse0x265c240();
   input += synapse0x265c280();
   input += synapse0x265c2c0();
   input += synapse0x265c300();
   input += synapse0x289b500();
   return input;
}

double NNfunction_sg_sL::neuron0x289a770() {
   double input = input0x289a770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x289b540() {
   double input = -0.0469964;
   input += synapse0x289b880();
   input += synapse0x289b8c0();
   input += synapse0x289b900();
   input += synapse0x289b940();
   input += synapse0x289b980();
   input += synapse0x289b9c0();
   input += synapse0x289ba00();
   input += synapse0x289ba40();
   input += synapse0x289ba80();
   input += synapse0x289bac0();
   input += synapse0x289bb00();
   input += synapse0x289bb40();
   input += synapse0x289bb80();
   input += synapse0x289bbc0();
   input += synapse0x289bc00();
   input += synapse0x289bc40();
   input += synapse0x289b6d0();
   input += synapse0x289b710();
   input += synapse0x289bd90();
   input += synapse0x289bdd0();
   input += synapse0x289be10();
   input += synapse0x289be50();
   input += synapse0x289be90();
   input += synapse0x289bed0();
   return input;
}

double NNfunction_sg_sL::neuron0x289b540() {
   double input = input0x289b540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x289bf10() {
   double input = -0.383226;
   input += synapse0x289c250();
   input += synapse0x289c290();
   input += synapse0x289c2d0();
   input += synapse0x289c310();
   input += synapse0x289c350();
   input += synapse0x289c390();
   input += synapse0x289c3d0();
   input += synapse0x289c410();
   input += synapse0x289c450();
   input += synapse0x289c490();
   input += synapse0x289c4d0();
   input += synapse0x289c510();
   input += synapse0x289c550();
   input += synapse0x289c590();
   input += synapse0x289c5d0();
   input += synapse0x289c610();
   input += synapse0x289c0a0();
   input += synapse0x289c0e0();
   input += synapse0x289c760();
   input += synapse0x289c7a0();
   input += synapse0x289c7e0();
   input += synapse0x289c820();
   input += synapse0x289c860();
   input += synapse0x289c8a0();
   return input;
}

double NNfunction_sg_sL::neuron0x289bf10() {
   double input = input0x289bf10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x289c8e0() {
   double input = -0.335973;
   input += synapse0x28952a0();
   input += synapse0x28952e0();
   input += synapse0x2895320();
   input += synapse0x2895360();
   input += synapse0x289ce30();
   input += synapse0x289ce70();
   input += synapse0x289ceb0();
   input += synapse0x289cef0();
   input += synapse0x289cf30();
   input += synapse0x289cf70();
   input += synapse0x289cfb0();
   input += synapse0x289cff0();
   input += synapse0x289d030();
   input += synapse0x289d070();
   input += synapse0x289d0b0();
   input += synapse0x289d0f0();
   input += synapse0x289ca70();
   input += synapse0x289cab0();
   input += synapse0x289d240();
   input += synapse0x289d280();
   input += synapse0x289d2c0();
   input += synapse0x289d300();
   input += synapse0x289d340();
   input += synapse0x289d380();
   return input;
}

double NNfunction_sg_sL::neuron0x289c8e0() {
   double input = input0x289c8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x289d3c0() {
   double input = 0.744055;
   input += synapse0x289d700();
   input += synapse0x289d740();
   input += synapse0x289d780();
   input += synapse0x289d7c0();
   input += synapse0x289d800();
   input += synapse0x289d840();
   input += synapse0x289d880();
   input += synapse0x289d8c0();
   input += synapse0x289d900();
   input += synapse0x289d940();
   input += synapse0x289d980();
   input += synapse0x289d9c0();
   input += synapse0x289da00();
   input += synapse0x289da40();
   input += synapse0x289da80();
   input += synapse0x289dac0();
   input += synapse0x289d550();
   input += synapse0x289d590();
   input += synapse0x289dc10();
   input += synapse0x289dc50();
   input += synapse0x289dc90();
   input += synapse0x289dcd0();
   input += synapse0x289dd10();
   input += synapse0x289dd50();
   return input;
}

double NNfunction_sg_sL::neuron0x289d3c0() {
   double input = input0x289d3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x289dd90() {
   double input = -0.0293969;
   input += synapse0x289e0d0();
   input += synapse0x289e110();
   input += synapse0x289e150();
   input += synapse0x289e190();
   input += synapse0x289e1d0();
   input += synapse0x289e210();
   input += synapse0x289e250();
   input += synapse0x289e290();
   input += synapse0x289e2d0();
   input += synapse0x289e310();
   input += synapse0x289e350();
   input += synapse0x289e390();
   input += synapse0x289e3d0();
   input += synapse0x289e410();
   input += synapse0x289e450();
   input += synapse0x289e490();
   input += synapse0x289df20();
   input += synapse0x289df60();
   input += synapse0x289acf0();
   input += synapse0x289ad30();
   input += synapse0x289ad70();
   input += synapse0x289adb0();
   input += synapse0x289adf0();
   input += synapse0x289ae30();
   return input;
}

double NNfunction_sg_sL::neuron0x289dd90() {
   double input = input0x289dd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x289ae70() {
   double input = -2.12942;
   input += synapse0x289b1b0();
   input += synapse0x289b1f0();
   input += synapse0x289b230();
   input += synapse0x289b270();
   input += synapse0x289b2b0();
   input += synapse0x289b2f0();
   input += synapse0x289b330();
   input += synapse0x289b370();
   input += synapse0x289b3b0();
   input += synapse0x289b3f0();
   input += synapse0x289b430();
   input += synapse0x289b470();
   input += synapse0x289b4b0();
   input += synapse0x289f5f0();
   input += synapse0x289f630();
   input += synapse0x289f670();
   input += synapse0x289b000();
   input += synapse0x289b040();
   input += synapse0x289f7c0();
   input += synapse0x289f800();
   input += synapse0x289f840();
   input += synapse0x289f880();
   input += synapse0x289f8c0();
   input += synapse0x289f900();
   return input;
}

double NNfunction_sg_sL::neuron0x289ae70() {
   double input = input0x289ae70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x289f940() {
   double input = -0.568696;
   input += synapse0x289fc80();
   input += synapse0x289fcc0();
   input += synapse0x289fd00();
   input += synapse0x289fd40();
   input += synapse0x289fd80();
   input += synapse0x289fdc0();
   input += synapse0x289fe00();
   input += synapse0x289fe40();
   input += synapse0x289fe80();
   input += synapse0x289fec0();
   input += synapse0x289ff00();
   input += synapse0x289ff40();
   input += synapse0x289ff80();
   input += synapse0x289ffc0();
   input += synapse0x28a0000();
   input += synapse0x28a0040();
   input += synapse0x289fad0();
   input += synapse0x289fb10();
   input += synapse0x28a0190();
   input += synapse0x28a01d0();
   input += synapse0x28a0210();
   input += synapse0x28a0250();
   input += synapse0x28a0290();
   input += synapse0x28a02d0();
   return input;
}

double NNfunction_sg_sL::neuron0x289f940() {
   double input = input0x289f940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28a0310() {
   double input = -0.983772;
   input += synapse0x28a0650();
   input += synapse0x28a0690();
   input += synapse0x28a06d0();
   input += synapse0x28a0710();
   input += synapse0x28a0750();
   input += synapse0x28a0790();
   input += synapse0x28a07d0();
   input += synapse0x28a0810();
   input += synapse0x28a0850();
   input += synapse0x28a0890();
   input += synapse0x28a08d0();
   input += synapse0x28a0910();
   input += synapse0x28a0950();
   input += synapse0x28a0990();
   input += synapse0x28a09d0();
   input += synapse0x28a0a10();
   input += synapse0x28a04a0();
   input += synapse0x28a04e0();
   input += synapse0x28a0b60();
   input += synapse0x28a0ba0();
   input += synapse0x28a0be0();
   input += synapse0x28a0c20();
   input += synapse0x28a0c60();
   input += synapse0x28a0ca0();
   return input;
}

double NNfunction_sg_sL::neuron0x28a0310() {
   double input = input0x28a0310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28a0ce0() {
   double input = -0.37153;
   input += synapse0x28a1020();
   input += synapse0x28a1060();
   input += synapse0x28a10a0();
   input += synapse0x28a10e0();
   input += synapse0x28a1120();
   input += synapse0x28a1160();
   input += synapse0x28a11a0();
   input += synapse0x28a11e0();
   input += synapse0x28a1220();
   input += synapse0x28a1260();
   input += synapse0x28a12a0();
   input += synapse0x28a12e0();
   input += synapse0x28a1320();
   input += synapse0x28a1360();
   input += synapse0x28a13a0();
   input += synapse0x28a13e0();
   input += synapse0x28a0e70();
   input += synapse0x28a0eb0();
   input += synapse0x28a1530();
   input += synapse0x28a1570();
   input += synapse0x28a15b0();
   input += synapse0x28a15f0();
   input += synapse0x28a1630();
   input += synapse0x28a1670();
   return input;
}

double NNfunction_sg_sL::neuron0x28a0ce0() {
   double input = input0x28a0ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28a16b0() {
   double input = -0.894539;
   input += synapse0x28a19f0();
   input += synapse0x2891c70();
   input += synapse0x2891cb0();
   input += synapse0x2891fb0();
   input += synapse0x2891ff0();
   input += synapse0x28922f0();
   input += synapse0x2892330();
   input += synapse0x2892630();
   input += synapse0x2892670();
   input += synapse0x2892970();
   input += synapse0x28929b0();
   input += synapse0x2892cb0();
   input += synapse0x2892cf0();
   input += synapse0x2892ff0();
   input += synapse0x2893030();
   input += synapse0x2893330();
   input += synapse0x2893370();
   input += synapse0x2893670();
   input += synapse0x28936b0();
   input += synapse0x28939b0();
   input += synapse0x28939f0();
   input += synapse0x2893cf0();
   input += synapse0x2893d30();
   input += synapse0x2894030();
   return input;
}

double NNfunction_sg_sL::neuron0x28a16b0() {
   double input = input0x28a16b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28a34c0() {
   double input = 0.55659;
   input += synapse0x2894070();
   input += synapse0x2894d30();
   input += synapse0x2894d70();
   input += synapse0x28a1840();
   input += synapse0x28a1880();
   input += synapse0x2895070();
   input += synapse0x28950b0();
   input += synapse0x1722d20();
   input += synapse0x1722d60();
   input += synapse0x28957f0();
   input += synapse0x2895830();
   input += synapse0x2895b30();
   input += synapse0x2895b70();
   input += synapse0x2895e70();
   input += synapse0x2895eb0();
   input += synapse0x28961b0();
   input += synapse0x28961f0();
   input += synapse0x28964f0();
   input += synapse0x2896530();
   input += synapse0x2896830();
   input += synapse0x2896870();
   input += synapse0x2894370();
   input += synapse0x28943b0();
   input += synapse0x28a3760();
   return input;
}

double NNfunction_sg_sL::neuron0x28a34c0() {
   double input = input0x28a34c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28a37a0() {
   double input = 0.21278;
   input += synapse0x28a3ae0();
   input += synapse0x28a3b20();
   input += synapse0x28a3b60();
   input += synapse0x28a3ba0();
   input += synapse0x28a3be0();
   input += synapse0x28a3c20();
   input += synapse0x28a3c60();
   input += synapse0x28a3ca0();
   input += synapse0x28a3ce0();
   input += synapse0x28a3d20();
   input += synapse0x28a3d60();
   input += synapse0x28a3da0();
   input += synapse0x28a3de0();
   input += synapse0x28a3e20();
   input += synapse0x28a3e60();
   input += synapse0x28a3ea0();
   input += synapse0x28a3930();
   input += synapse0x28a3970();
   input += synapse0x28a3ff0();
   input += synapse0x28a4030();
   input += synapse0x28a4070();
   input += synapse0x28a40b0();
   input += synapse0x28a40f0();
   input += synapse0x28a4130();
   return input;
}

double NNfunction_sg_sL::neuron0x28a37a0() {
   double input = input0x28a37a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28a4170() {
   double input = 0.129953;
   input += synapse0x28a44b0();
   input += synapse0x28a44f0();
   input += synapse0x28a4530();
   input += synapse0x28a4570();
   input += synapse0x28a45b0();
   input += synapse0x28a45f0();
   input += synapse0x28a4630();
   input += synapse0x28a4670();
   input += synapse0x28a46b0();
   input += synapse0x28a46f0();
   input += synapse0x28a4730();
   input += synapse0x28a4770();
   input += synapse0x28a47b0();
   input += synapse0x28a47f0();
   input += synapse0x28a4830();
   input += synapse0x28a4870();
   input += synapse0x28a4300();
   input += synapse0x28a4340();
   input += synapse0x28a49c0();
   input += synapse0x28a4a00();
   input += synapse0x28a4a40();
   input += synapse0x28a4a80();
   input += synapse0x28a4ac0();
   input += synapse0x28a4b00();
   return input;
}

double NNfunction_sg_sL::neuron0x28a4170() {
   double input = input0x28a4170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28a4b40() {
   double input = -0.0853048;
   input += synapse0x28a4e80();
   input += synapse0x28a4ec0();
   input += synapse0x28a4f00();
   input += synapse0x28a4f40();
   input += synapse0x28a4f80();
   input += synapse0x28a4fc0();
   input += synapse0x28a5000();
   input += synapse0x28a5040();
   input += synapse0x28a5080();
   input += synapse0x28a50c0();
   input += synapse0x28a5100();
   input += synapse0x28a5140();
   input += synapse0x28a5180();
   input += synapse0x28a51c0();
   input += synapse0x28a5200();
   input += synapse0x28a5240();
   input += synapse0x28a4cd0();
   input += synapse0x28a4d10();
   input += synapse0x28a5390();
   input += synapse0x28a53d0();
   input += synapse0x28a5410();
   input += synapse0x28a5450();
   input += synapse0x28a5490();
   input += synapse0x28a54d0();
   return input;
}

double NNfunction_sg_sL::neuron0x28a4b40() {
   double input = input0x28a4b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28a5510() {
   double input = 0.441813;
   input += synapse0x28a5850();
   input += synapse0x28a5890();
   input += synapse0x28a58d0();
   input += synapse0x28a5910();
   input += synapse0x28a5950();
   input += synapse0x28a5990();
   input += synapse0x28a59d0();
   input += synapse0x28a5a10();
   input += synapse0x28a5a50();
   input += synapse0x28a5a90();
   input += synapse0x28a5ad0();
   input += synapse0x28a5b10();
   input += synapse0x28a5b50();
   input += synapse0x28a5b90();
   input += synapse0x28a5bd0();
   input += synapse0x28a5c10();
   input += synapse0x28a56a0();
   input += synapse0x28a56e0();
   input += synapse0x28a5d60();
   input += synapse0x28a5da0();
   input += synapse0x28a5de0();
   input += synapse0x28a5e20();
   input += synapse0x28a5e60();
   input += synapse0x28a5ea0();
   return input;
}

double NNfunction_sg_sL::neuron0x28a5510() {
   double input = input0x28a5510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28a5ee0() {
   double input = -1.90377;
   input += synapse0x28a6220();
   input += synapse0x28a6260();
   input += synapse0x28a62a0();
   input += synapse0x28a62e0();
   input += synapse0x28a6320();
   input += synapse0x28a6360();
   input += synapse0x28a63a0();
   input += synapse0x28a63e0();
   input += synapse0x28a6420();
   input += synapse0x289e5e0();
   input += synapse0x289e620();
   input += synapse0x289e660();
   input += synapse0x289e6a0();
   input += synapse0x289e6e0();
   input += synapse0x289e720();
   input += synapse0x289e760();
   input += synapse0x28a6070();
   input += synapse0x28a60b0();
   input += synapse0x289e8b0();
   input += synapse0x289e8f0();
   input += synapse0x289e930();
   input += synapse0x289e970();
   input += synapse0x289e9b0();
   input += synapse0x289e9f0();
   return input;
}

double NNfunction_sg_sL::neuron0x28a5ee0() {
   double input = input0x28a5ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x289ea30() {
   double input = -1.70989;
   input += synapse0x289ed70();
   input += synapse0x289edb0();
   input += synapse0x289edf0();
   input += synapse0x289ee30();
   input += synapse0x289ee70();
   input += synapse0x289eeb0();
   input += synapse0x289eef0();
   input += synapse0x289ef30();
   input += synapse0x289ef70();
   input += synapse0x289efb0();
   input += synapse0x289eff0();
   input += synapse0x289f030();
   input += synapse0x289f070();
   input += synapse0x289f0b0();
   input += synapse0x289f0f0();
   input += synapse0x289f130();
   input += synapse0x289ebc0();
   input += synapse0x289ec00();
   input += synapse0x289f280();
   input += synapse0x289f2c0();
   input += synapse0x289f300();
   input += synapse0x289f340();
   input += synapse0x289f380();
   input += synapse0x289f3c0();
   return input;
}

double NNfunction_sg_sL::neuron0x289ea30() {
   double input = input0x289ea30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x289f400() {
   double input = 1.35279;
   input += synapse0x289f590();
   input += synapse0x28a8620();
   input += synapse0x28a8660();
   input += synapse0x28a86a0();
   input += synapse0x28a86e0();
   input += synapse0x28a8720();
   input += synapse0x28a8760();
   input += synapse0x28a87a0();
   input += synapse0x28a87e0();
   input += synapse0x28a8820();
   input += synapse0x28a8860();
   input += synapse0x28a88a0();
   input += synapse0x28a88e0();
   input += synapse0x28a8920();
   input += synapse0x28a8960();
   input += synapse0x28a89a0();
   input += synapse0x28a8470();
   input += synapse0x28a84b0();
   input += synapse0x28a8af0();
   input += synapse0x28a8b30();
   input += synapse0x28a8b70();
   input += synapse0x28a8bb0();
   input += synapse0x28a8bf0();
   input += synapse0x28a8c30();
   return input;
}

double NNfunction_sg_sL::neuron0x289f400() {
   double input = input0x289f400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28a8c70() {
   double input = -1.27881;
   input += synapse0x28a8fb0();
   input += synapse0x28a8ff0();
   input += synapse0x28a9030();
   input += synapse0x28a9070();
   input += synapse0x28a90b0();
   input += synapse0x28a90f0();
   input += synapse0x28a9130();
   input += synapse0x28a9170();
   input += synapse0x28a91b0();
   input += synapse0x28a91f0();
   input += synapse0x28a9230();
   input += synapse0x28a9270();
   input += synapse0x28a92b0();
   input += synapse0x28a92f0();
   input += synapse0x28a9330();
   input += synapse0x28a9370();
   input += synapse0x28a8e00();
   input += synapse0x28a8e40();
   input += synapse0x28a94c0();
   input += synapse0x28a9500();
   input += synapse0x28a9540();
   input += synapse0x28a9580();
   input += synapse0x28a95c0();
   input += synapse0x28a9600();
   return input;
}

double NNfunction_sg_sL::neuron0x28a8c70() {
   double input = input0x28a8c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28a9640() {
   double input = 0.960219;
   input += synapse0x28a9980();
   input += synapse0x28a99c0();
   input += synapse0x28a9a00();
   input += synapse0x28a9a40();
   input += synapse0x28a9a80();
   input += synapse0x28a9ac0();
   input += synapse0x28a9b00();
   input += synapse0x28a9b40();
   input += synapse0x28a9b80();
   input += synapse0x28a9bc0();
   input += synapse0x28a9c00();
   input += synapse0x28a9c40();
   input += synapse0x28a9c80();
   input += synapse0x28a9cc0();
   input += synapse0x28a9d00();
   input += synapse0x28a9d40();
   input += synapse0x28a97d0();
   input += synapse0x28a9810();
   input += synapse0x28a9e90();
   input += synapse0x28a9ed0();
   input += synapse0x28a9f10();
   input += synapse0x28a9f50();
   input += synapse0x28a9f90();
   input += synapse0x28a9fd0();
   return input;
}

double NNfunction_sg_sL::neuron0x28a9640() {
   double input = input0x28a9640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28aa010() {
   double input = -0.283567;
   input += synapse0x28aa350();
   input += synapse0x28aa390();
   input += synapse0x28aa3d0();
   input += synapse0x28aa410();
   input += synapse0x28aa450();
   input += synapse0x28aa490();
   input += synapse0x28aa4d0();
   input += synapse0x28aa510();
   input += synapse0x28aa550();
   input += synapse0x28aa590();
   input += synapse0x28aa5d0();
   input += synapse0x28aa610();
   input += synapse0x28aa650();
   input += synapse0x28aa690();
   input += synapse0x28aa6d0();
   input += synapse0x28aa710();
   input += synapse0x28aa1a0();
   input += synapse0x28aa1e0();
   input += synapse0x28aa860();
   input += synapse0x28aa8a0();
   input += synapse0x28aa8e0();
   input += synapse0x28aa920();
   input += synapse0x28aa960();
   input += synapse0x28aa9a0();
   return input;
}

double NNfunction_sg_sL::neuron0x28aa010() {
   double input = input0x28aa010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28aa9e0() {
   double input = -0.49749;
   input += synapse0x28aad20();
   input += synapse0x28aad60();
   input += synapse0x28aada0();
   input += synapse0x28aade0();
   input += synapse0x28aae20();
   input += synapse0x28aae60();
   input += synapse0x28aaea0();
   input += synapse0x28aaee0();
   input += synapse0x28aaf20();
   input += synapse0x28aaf60();
   input += synapse0x28aafa0();
   input += synapse0x28aafe0();
   input += synapse0x28ab020();
   input += synapse0x28ab060();
   input += synapse0x28ab0a0();
   input += synapse0x28ab0e0();
   input += synapse0x28aab70();
   input += synapse0x28aabb0();
   input += synapse0x28ab230();
   input += synapse0x28ab270();
   input += synapse0x28ab2b0();
   input += synapse0x28ab2f0();
   input += synapse0x28ab330();
   input += synapse0x28ab370();
   return input;
}

double NNfunction_sg_sL::neuron0x28aa9e0() {
   double input = input0x28aa9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28ab3b0() {
   double input = 0.572937;
   input += synapse0x28ab6f0();
   input += synapse0x28ab730();
   input += synapse0x28ab770();
   input += synapse0x28ab7b0();
   input += synapse0x28ab7f0();
   input += synapse0x28ab830();
   input += synapse0x28ab870();
   input += synapse0x28ab8b0();
   input += synapse0x28ab8f0();
   input += synapse0x28ab930();
   input += synapse0x28ab970();
   input += synapse0x28ab9b0();
   input += synapse0x28ab9f0();
   input += synapse0x28aba30();
   input += synapse0x28aba70();
   input += synapse0x28abab0();
   input += synapse0x28ab540();
   input += synapse0x28ab580();
   input += synapse0x28abc00();
   input += synapse0x28abc40();
   input += synapse0x28abc80();
   input += synapse0x28abcc0();
   input += synapse0x28abd00();
   input += synapse0x28abd40();
   return input;
}

double NNfunction_sg_sL::neuron0x28ab3b0() {
   double input = input0x28ab3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28abd80() {
   double input = 2.03064;
   input += synapse0x28ac0c0();
   input += synapse0x28ac100();
   input += synapse0x28ac140();
   input += synapse0x28ac180();
   input += synapse0x28ac1c0();
   input += synapse0x28ac200();
   input += synapse0x28ac240();
   input += synapse0x28ac280();
   input += synapse0x28ac2c0();
   input += synapse0x28ac300();
   input += synapse0x28ac340();
   input += synapse0x28ac380();
   input += synapse0x28ac3c0();
   input += synapse0x28ac400();
   input += synapse0x28ac440();
   input += synapse0x28ac480();
   input += synapse0x28abf10();
   input += synapse0x28abf50();
   input += synapse0x28ac5d0();
   input += synapse0x28ac610();
   input += synapse0x28ac650();
   input += synapse0x28ac690();
   input += synapse0x28ac6d0();
   input += synapse0x28ac710();
   return input;
}

double NNfunction_sg_sL::neuron0x28abd80() {
   double input = input0x28abd80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28ac750() {
   double input = -0.375281;
   input += synapse0x28aca90();
   input += synapse0x28acad0();
   input += synapse0x28acb10();
   input += synapse0x28acb50();
   input += synapse0x28acb90();
   input += synapse0x28acbd0();
   input += synapse0x28acc10();
   input += synapse0x28acc50();
   input += synapse0x28acc90();
   input += synapse0x28accd0();
   input += synapse0x28acd10();
   input += synapse0x28acd50();
   input += synapse0x28acd90();
   input += synapse0x28acdd0();
   input += synapse0x28ace10();
   input += synapse0x28ace50();
   input += synapse0x28ac8e0();
   input += synapse0x28ac920();
   input += synapse0x28acfa0();
   input += synapse0x28acfe0();
   input += synapse0x28ad020();
   input += synapse0x28ad060();
   input += synapse0x28ad0a0();
   input += synapse0x28ad0e0();
   return input;
}

double NNfunction_sg_sL::neuron0x28ac750() {
   double input = input0x28ac750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28ad120() {
   double input = 0.35031;
   input += synapse0x28ad460();
   input += synapse0x28a1a30();
   input += synapse0x28a1a70();
   input += synapse0x28a1ab0();
   input += synapse0x28a1d00();
   input += synapse0x28a1d40();
   input += synapse0x28a1d80();
   input += synapse0x28a1fd0();
   input += synapse0x28a2010();
   input += synapse0x28a2260();
   input += synapse0x28a22a0();
   input += synapse0x28a22e0();
   input += synapse0x28a2530();
   input += synapse0x28a2570();
   input += synapse0x28a27c0();
   input += synapse0x28a2800();
   input += synapse0x28ad2b0();
   input += synapse0x28ad2f0();
   input += synapse0x28a2950();
   input += synapse0x28a2e60();
   input += synapse0x28a2ea0();
   input += synapse0x28a2ee0();
   input += synapse0x28a3130();
   input += synapse0x28a3170();
   return input;
}

double NNfunction_sg_sL::neuron0x28ad120() {
   double input = input0x28ad120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28a31b0() {
   double input = -0.0127342;
   input += synapse0x28a2a20();
   input += synapse0x28a2a60();
   input += synapse0x28a2aa0();
   input += synapse0x28a2ae0();
   input += synapse0x28a3460();
   input += synapse0x28af7b0();
   input += synapse0x28af7f0();
   input += synapse0x28af830();
   input += synapse0x28af870();
   input += synapse0x28af8b0();
   input += synapse0x28af8f0();
   input += synapse0x28af930();
   input += synapse0x28af970();
   input += synapse0x28af9b0();
   input += synapse0x28af9f0();
   input += synapse0x28afa30();
   input += synapse0x28a3340();
   input += synapse0x28a3380();
   input += synapse0x28afb80();
   input += synapse0x28afbc0();
   input += synapse0x28afc00();
   input += synapse0x28afc40();
   input += synapse0x28afc80();
   input += synapse0x28afcc0();
   return input;
}

double NNfunction_sg_sL::neuron0x28a31b0() {
   double input = input0x28a31b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28afd00() {
   double input = -1.49618;
   input += synapse0x28b0040();
   input += synapse0x28b0080();
   input += synapse0x28b00c0();
   input += synapse0x28b0100();
   input += synapse0x28b0140();
   input += synapse0x28b0180();
   input += synapse0x28b01c0();
   input += synapse0x28b0200();
   input += synapse0x28b0240();
   input += synapse0x28b0280();
   input += synapse0x28b02c0();
   input += synapse0x28b0300();
   input += synapse0x28b0340();
   input += synapse0x28b0380();
   input += synapse0x28b03c0();
   input += synapse0x28b0400();
   input += synapse0x28afe90();
   input += synapse0x28afed0();
   input += synapse0x28b0550();
   input += synapse0x28b0590();
   input += synapse0x28b05d0();
   input += synapse0x28b0610();
   input += synapse0x28b0650();
   input += synapse0x28b0690();
   return input;
}

double NNfunction_sg_sL::neuron0x28afd00() {
   double input = input0x28afd00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28b06d0() {
   double input = 1.95928;
   input += synapse0x28b0a10();
   input += synapse0x28b0a50();
   input += synapse0x28b0a90();
   input += synapse0x28b0ad0();
   input += synapse0x28b0b10();
   input += synapse0x28b0b50();
   input += synapse0x28b0b90();
   input += synapse0x28b0bd0();
   input += synapse0x28b0c10();
   input += synapse0x28b0c50();
   input += synapse0x28b0c90();
   input += synapse0x28b0cd0();
   input += synapse0x28b0d10();
   input += synapse0x28b0d50();
   input += synapse0x28b0d90();
   input += synapse0x28b0dd0();
   input += synapse0x28b0860();
   input += synapse0x28b08a0();
   input += synapse0x28b0f20();
   input += synapse0x28b0f60();
   input += synapse0x28b0fa0();
   input += synapse0x28b0fe0();
   input += synapse0x28b1020();
   input += synapse0x28b1060();
   return input;
}

double NNfunction_sg_sL::neuron0x28b06d0() {
   double input = input0x28b06d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28b10a0() {
   double input = 0.0752976;
   input += synapse0x28b13e0();
   input += synapse0x28b1420();
   input += synapse0x28b1460();
   input += synapse0x28b14a0();
   input += synapse0x28b14e0();
   input += synapse0x28b1520();
   input += synapse0x28b1560();
   input += synapse0x28b15a0();
   input += synapse0x28b15e0();
   input += synapse0x28b1620();
   input += synapse0x28b1660();
   input += synapse0x28b16a0();
   input += synapse0x28b16e0();
   input += synapse0x28b1720();
   input += synapse0x28b1760();
   input += synapse0x28b17a0();
   input += synapse0x28b1230();
   input += synapse0x28b1270();
   input += synapse0x28b18f0();
   input += synapse0x28b1930();
   input += synapse0x28b1970();
   input += synapse0x28b19b0();
   input += synapse0x28b19f0();
   input += synapse0x28b1a30();
   return input;
}

double NNfunction_sg_sL::neuron0x28b10a0() {
   double input = input0x28b10a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28b1a70() {
   double input = -0.922308;
   input += synapse0x28b1db0();
   input += synapse0x28b1df0();
   input += synapse0x28b1e30();
   input += synapse0x28b1e70();
   input += synapse0x28b1eb0();
   input += synapse0x28b1ef0();
   input += synapse0x28b1f30();
   input += synapse0x28b1f70();
   input += synapse0x28b1fb0();
   input += synapse0x28b1ff0();
   input += synapse0x28b2030();
   input += synapse0x28b2070();
   input += synapse0x28b20b0();
   input += synapse0x28b20f0();
   input += synapse0x28b2130();
   input += synapse0x28b2170();
   input += synapse0x28b1c00();
   input += synapse0x28b1c40();
   input += synapse0x28b22c0();
   input += synapse0x28b2300();
   input += synapse0x28b2340();
   input += synapse0x28b2380();
   input += synapse0x28b23c0();
   input += synapse0x28b2400();
   return input;
}

double NNfunction_sg_sL::neuron0x28b1a70() {
   double input = input0x28b1a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28b2440() {
   double input = -0.654457;
   input += synapse0x28b2780();
   input += synapse0x28b27c0();
   input += synapse0x28b2800();
   input += synapse0x28b2840();
   input += synapse0x28b2880();
   input += synapse0x28b28c0();
   input += synapse0x28b2900();
   input += synapse0x28b2940();
   input += synapse0x28b2980();
   input += synapse0x28b29c0();
   input += synapse0x28b2a00();
   input += synapse0x28b2a40();
   input += synapse0x28b2a80();
   input += synapse0x28b2ac0();
   input += synapse0x28b2b00();
   input += synapse0x28b2b40();
   input += synapse0x28b25d0();
   input += synapse0x28b2610();
   input += synapse0x28b2c90();
   input += synapse0x28b2cd0();
   input += synapse0x28b2d10();
   input += synapse0x28b2d50();
   input += synapse0x28b2d90();
   input += synapse0x28b2dd0();
   return input;
}

double NNfunction_sg_sL::neuron0x28b2440() {
   double input = input0x28b2440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28b2e10() {
   double input = -0.453092;
   input += synapse0x28b3150();
   input += synapse0x28b3190();
   input += synapse0x28b31d0();
   input += synapse0x28b3210();
   input += synapse0x28b3250();
   input += synapse0x28b3290();
   input += synapse0x28b32d0();
   input += synapse0x28b3310();
   input += synapse0x28b3350();
   input += synapse0x28b3390();
   input += synapse0x28b33d0();
   input += synapse0x28b3410();
   input += synapse0x28b3450();
   input += synapse0x28b3490();
   input += synapse0x28b34d0();
   input += synapse0x28b3510();
   input += synapse0x28b2fa0();
   input += synapse0x28b2fe0();
   input += synapse0x28b3660();
   input += synapse0x28b36a0();
   input += synapse0x28b36e0();
   input += synapse0x28b3720();
   input += synapse0x28b3760();
   input += synapse0x28b37a0();
   return input;
}

double NNfunction_sg_sL::neuron0x28b2e10() {
   double input = input0x28b2e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28b37e0() {
   double input = 0.183267;
   input += synapse0x28b3b20();
   input += synapse0x28b3b60();
   input += synapse0x28b3ba0();
   input += synapse0x28b3be0();
   input += synapse0x28b3c20();
   input += synapse0x28b3c60();
   input += synapse0x28b3ca0();
   input += synapse0x28b3ce0();
   input += synapse0x28b3d20();
   input += synapse0x28b3d60();
   input += synapse0x28b3da0();
   input += synapse0x28b3de0();
   input += synapse0x28b3e20();
   input += synapse0x28b3e60();
   input += synapse0x28b3ea0();
   input += synapse0x28b3ee0();
   input += synapse0x28b3970();
   input += synapse0x28b39b0();
   input += synapse0x28b4030();
   input += synapse0x28b4070();
   input += synapse0x28b40b0();
   input += synapse0x28b40f0();
   input += synapse0x28b4130();
   input += synapse0x28b4170();
   return input;
}

double NNfunction_sg_sL::neuron0x28b37e0() {
   double input = input0x28b37e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28b41b0() {
   double input = -0.297738;
   input += synapse0x289cc20();
   input += synapse0x289cc60();
   input += synapse0x289cca0();
   input += synapse0x289cce0();
   input += synapse0x289cd20();
   input += synapse0x289cd60();
   input += synapse0x289cda0();
   input += synapse0x289cde0();
   input += synapse0x28b4900();
   input += synapse0x28b4940();
   input += synapse0x28b4980();
   input += synapse0x28b49c0();
   input += synapse0x28b4a00();
   input += synapse0x28b4a40();
   input += synapse0x28b4a80();
   input += synapse0x28b4ac0();
   input += synapse0x28b4340();
   input += synapse0x28b4380();
   input += synapse0x28b4c10();
   input += synapse0x28b4c50();
   input += synapse0x28b4c90();
   input += synapse0x28b4cd0();
   input += synapse0x28b4d10();
   input += synapse0x28b4d50();
   return input;
}

double NNfunction_sg_sL::neuron0x28b41b0() {
   double input = input0x28b41b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28b4d90() {
   double input = 0.473991;
   input += synapse0x28b50d0();
   input += synapse0x28b5110();
   input += synapse0x28b5150();
   input += synapse0x28b5190();
   input += synapse0x28b51d0();
   input += synapse0x28b5210();
   input += synapse0x28b5250();
   input += synapse0x28b5290();
   input += synapse0x28b52d0();
   input += synapse0x28b5310();
   input += synapse0x28b5350();
   input += synapse0x28b5390();
   input += synapse0x28b53d0();
   input += synapse0x28b5410();
   input += synapse0x28b5450();
   input += synapse0x28b5490();
   input += synapse0x28b4f20();
   input += synapse0x28b4f60();
   input += synapse0x28b55e0();
   input += synapse0x28b5620();
   input += synapse0x28b5660();
   input += synapse0x28b56a0();
   input += synapse0x28b56e0();
   input += synapse0x28b5720();
   return input;
}

double NNfunction_sg_sL::neuron0x28b4d90() {
   double input = input0x28b4d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28b5760() {
   double input = 3.13061;
   input += synapse0x28b5aa0();
   input += synapse0x28b5ae0();
   input += synapse0x28b5b20();
   input += synapse0x28b5b60();
   input += synapse0x28b5ba0();
   input += synapse0x28b5be0();
   input += synapse0x28b5c20();
   input += synapse0x28b5c60();
   input += synapse0x28b5ca0();
   input += synapse0x28b5ce0();
   input += synapse0x28b5d20();
   input += synapse0x28b5d60();
   input += synapse0x28b5da0();
   input += synapse0x28b5de0();
   input += synapse0x28b5e20();
   input += synapse0x28b5e60();
   input += synapse0x28b58f0();
   input += synapse0x28b5930();
   input += synapse0x28a6460();
   input += synapse0x28a64a0();
   input += synapse0x28a64e0();
   input += synapse0x28a6520();
   input += synapse0x28a6560();
   input += synapse0x28a65a0();
   return input;
}

double NNfunction_sg_sL::neuron0x28b5760() {
   double input = input0x28b5760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28a65e0() {
   double input = 0.631282;
   input += synapse0x28a6920();
   input += synapse0x28a6960();
   input += synapse0x28a69a0();
   input += synapse0x28a69e0();
   input += synapse0x28a6a20();
   input += synapse0x28a6a60();
   input += synapse0x28a6aa0();
   input += synapse0x28a6ae0();
   input += synapse0x28a6b20();
   input += synapse0x28a6b60();
   input += synapse0x28a6ba0();
   input += synapse0x28a6be0();
   input += synapse0x28a6c20();
   input += synapse0x28a6c60();
   input += synapse0x28a6ca0();
   input += synapse0x28a6ce0();
   input += synapse0x28a6770();
   input += synapse0x28a67b0();
   input += synapse0x28a6e30();
   input += synapse0x28a6e70();
   input += synapse0x28a6eb0();
   input += synapse0x28a6ef0();
   input += synapse0x28a6f30();
   input += synapse0x28a6f70();
   return input;
}

double NNfunction_sg_sL::neuron0x28a65e0() {
   double input = input0x28a65e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28a6fb0() {
   double input = 0.965982;
   input += synapse0x28a72f0();
   input += synapse0x28a7330();
   input += synapse0x28a7370();
   input += synapse0x28a73b0();
   input += synapse0x28a73f0();
   input += synapse0x28a7430();
   input += synapse0x28a7470();
   input += synapse0x28a74b0();
   input += synapse0x28a74f0();
   input += synapse0x28a7530();
   input += synapse0x28a7570();
   input += synapse0x28a75b0();
   input += synapse0x28a75f0();
   input += synapse0x28a7630();
   input += synapse0x28a7670();
   input += synapse0x28a76b0();
   input += synapse0x28a7140();
   input += synapse0x28a7180();
   input += synapse0x28a7800();
   input += synapse0x28a7840();
   input += synapse0x28a7880();
   input += synapse0x28a78c0();
   input += synapse0x28a7900();
   input += synapse0x28a7940();
   return input;
}

double NNfunction_sg_sL::neuron0x28a6fb0() {
   double input = input0x28a6fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28a7980() {
   double input = 0.0111963;
   input += synapse0x28a7cc0();
   input += synapse0x28a7d00();
   input += synapse0x28a7d40();
   input += synapse0x28a7d80();
   input += synapse0x28a7dc0();
   input += synapse0x28a7e00();
   input += synapse0x28a7e40();
   input += synapse0x28a7e80();
   input += synapse0x28a7ec0();
   input += synapse0x28a7f00();
   input += synapse0x28a7f40();
   input += synapse0x28a7f80();
   input += synapse0x28a7fc0();
   input += synapse0x28a8000();
   input += synapse0x28a8040();
   input += synapse0x28a8080();
   input += synapse0x28a7b10();
   input += synapse0x28a7b50();
   input += synapse0x28a81d0();
   input += synapse0x28a8210();
   input += synapse0x28a8250();
   input += synapse0x28a8290();
   input += synapse0x28a82d0();
   input += synapse0x28a8310();
   return input;
}

double NNfunction_sg_sL::neuron0x28a7980() {
   double input = input0x28a7980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28b9fc0() {
   double input = -0.406543;
   input += synapse0x28ba1e0();
   input += synapse0x28ba220();
   input += synapse0x28ba260();
   input += synapse0x28ba2a0();
   input += synapse0x28ba2e0();
   input += synapse0x28ba320();
   input += synapse0x28ba360();
   input += synapse0x28ba3a0();
   input += synapse0x28ba3e0();
   input += synapse0x28ba420();
   input += synapse0x28ba460();
   input += synapse0x28ba4a0();
   input += synapse0x28ba4e0();
   input += synapse0x28ba520();
   input += synapse0x28ba560();
   input += synapse0x28ba5a0();
   input += synapse0x28a8350();
   input += synapse0x28a8390();
   input += synapse0x28ba6f0();
   input += synapse0x28ba730();
   input += synapse0x28ba770();
   input += synapse0x28ba7b0();
   input += synapse0x28ba7f0();
   input += synapse0x28ba830();
   return input;
}

double NNfunction_sg_sL::neuron0x28b9fc0() {
   double input = input0x28b9fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28ba870() {
   double input = 1.48728;
   input += synapse0x28babb0();
   input += synapse0x28babf0();
   input += synapse0x28bac30();
   input += synapse0x28bac70();
   input += synapse0x28bacb0();
   input += synapse0x28bacf0();
   input += synapse0x28bad30();
   input += synapse0x28bad70();
   input += synapse0x28badb0();
   input += synapse0x28badf0();
   input += synapse0x28bae30();
   input += synapse0x28bae70();
   input += synapse0x28baeb0();
   input += synapse0x28baef0();
   input += synapse0x28baf30();
   input += synapse0x28baf70();
   input += synapse0x28baa00();
   input += synapse0x28baa40();
   input += synapse0x28bb0c0();
   input += synapse0x28bb100();
   input += synapse0x28bb140();
   input += synapse0x28bb180();
   input += synapse0x28bb1c0();
   input += synapse0x28bb200();
   return input;
}

double NNfunction_sg_sL::neuron0x28ba870() {
   double input = input0x28ba870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28bb240() {
   double input = -0.234918;
   input += synapse0x28bb580();
   input += synapse0x28bb5c0();
   input += synapse0x28bb600();
   input += synapse0x28bb640();
   input += synapse0x28bb680();
   input += synapse0x28bb6c0();
   input += synapse0x28bb700();
   input += synapse0x28bb740();
   input += synapse0x28bb780();
   input += synapse0x28bb7c0();
   input += synapse0x28bb800();
   input += synapse0x28bb840();
   input += synapse0x28bb880();
   input += synapse0x28bb8c0();
   input += synapse0x28bb900();
   input += synapse0x28bb940();
   input += synapse0x28bb3d0();
   input += synapse0x28bb410();
   input += synapse0x28bba90();
   input += synapse0x28bbad0();
   input += synapse0x28bbb10();
   input += synapse0x28bbb50();
   input += synapse0x28bbb90();
   input += synapse0x28bbbd0();
   return input;
}

double NNfunction_sg_sL::neuron0x28bb240() {
   double input = input0x28bb240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28bbc10() {
   double input = 0.602416;
   input += synapse0x28bbf50();
   input += synapse0x28bbf90();
   input += synapse0x28bbfd0();
   input += synapse0x28bc010();
   input += synapse0x28bc050();
   input += synapse0x28bc090();
   input += synapse0x28bc0d0();
   input += synapse0x28bc110();
   input += synapse0x28bc150();
   input += synapse0x28bc190();
   input += synapse0x28bc1d0();
   input += synapse0x28bc210();
   input += synapse0x28bc250();
   input += synapse0x28bc290();
   input += synapse0x28bc2d0();
   input += synapse0x28bc310();
   input += synapse0x28bbda0();
   input += synapse0x28bbde0();
   input += synapse0x28bc460();
   input += synapse0x28bc4a0();
   input += synapse0x28bc4e0();
   input += synapse0x28bc520();
   input += synapse0x28bc560();
   input += synapse0x28bc5a0();
   return input;
}

double NNfunction_sg_sL::neuron0x28bbc10() {
   double input = input0x28bbc10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28c2e10() {
   double input = 1.31509;
   input += synapse0x265c3d0();
   input += synapse0x265c410();
   input += synapse0x2898f40();
   input += synapse0x2898f80();
   input += synapse0x289aa20();
   input += synapse0x289aa60();
   input += synapse0x289b7f0();
   input += synapse0x289b830();
   input += synapse0x289c1c0();
   input += synapse0x289c200();
   input += synapse0x289cb90();
   input += synapse0x289cbd0();
   input += synapse0x289d670();
   input += synapse0x289d6b0();
   input += synapse0x289e040();
   input += synapse0x289e080();
   input += synapse0x289b120();
   input += synapse0x289b160();
   input += synapse0x289fbf0();
   input += synapse0x289fc30();
   input += synapse0x28a05c0();
   input += synapse0x28a0600();
   input += synapse0x28a0f90();
   input += synapse0x28a0fd0();
   input += synapse0x28a1960();
   input += synapse0x28a19a0();
   input += synapse0x28949f0();
   input += synapse0x2894a30();
   input += synapse0x28a3a50();
   input += synapse0x28a3a90();
   input += synapse0x28a4420();
   input += synapse0x28a4460();
   input += synapse0x28a4df0();
   input += synapse0x28a4e30();
   input += synapse0x28a57c0();
   input += synapse0x28a5800();
   input += synapse0x28a6190();
   input += synapse0x28a61d0();
   input += synapse0x289ece0();
   input += synapse0x289ed20();
   input += synapse0x28a8590();
   input += synapse0x28a85d0();
   input += synapse0x28a8f20();
   input += synapse0x28a8f60();
   input += synapse0x28a98f0();
   input += synapse0x28a9930();
   input += synapse0x28aa2c0();
   input += synapse0x28aa300();
   input += synapse0x28aac90();
   input += synapse0x28aacd0();
   return input;
}

double NNfunction_sg_sL::neuron0x28c2e10() {
   double input = input0x28c2e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28c31b0() {
   double input = 1.06427;
   input += synapse0x28ad3d0();
   input += synapse0x28ad410();
   input += synapse0x28a2990();
   input += synapse0x28a29d0();
   input += synapse0x28affb0();
   input += synapse0x28afff0();
   input += synapse0x28b0980();
   input += synapse0x28b09c0();
   input += synapse0x28b1350();
   input += synapse0x28b1390();
   input += synapse0x28b1d20();
   input += synapse0x28b1d60();
   input += synapse0x28b26f0();
   input += synapse0x28b2730();
   input += synapse0x28b30c0();
   input += synapse0x28b3100();
   input += synapse0x28b3a90();
   input += synapse0x28b3ad0();
   input += synapse0x28b4460();
   input += synapse0x28b44a0();
   input += synapse0x28b5040();
   input += synapse0x28b5080();
   input += synapse0x28b5a10();
   input += synapse0x28b5a50();
   input += synapse0x28a6890();
   input += synapse0x28a68d0();
   input += synapse0x28a7260();
   input += synapse0x28a72a0();
   input += synapse0x28a7c30();
   input += synapse0x28a7c70();
   input += synapse0x28ba150();
   input += synapse0x28ba190();
   input += synapse0x28bab20();
   input += synapse0x28bab60();
   input += synapse0x28bb4f0();
   input += synapse0x28bb530();
   input += synapse0x28bbec0();
   input += synapse0x28bbf00();
   input += synapse0x2896d30();
   input += synapse0x2896d70();
   input += synapse0x28ab660();
   input += synapse0x28ab6a0();
   input += synapse0x28bc5e0();
   input += synapse0x28bc620();
   input += synapse0x28bc660();
   input += synapse0x28bc6a0();
   input += synapse0x28c3550();
   input += synapse0x28c3590();
   input += synapse0x28c35d0();
   input += synapse0x28c3610();
   return input;
}

double NNfunction_sg_sL::neuron0x28c31b0() {
   double input = input0x28c31b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28c3650() {
   double input = 0.132376;
   input += synapse0x28c3990();
   input += synapse0x28c39d0();
   input += synapse0x28c3a10();
   input += synapse0x28c3a50();
   input += synapse0x28c3a90();
   input += synapse0x28c3ad0();
   input += synapse0x28c3b10();
   input += synapse0x28c3b50();
   input += synapse0x28c3b90();
   input += synapse0x28c3bd0();
   input += synapse0x28c3c10();
   input += synapse0x28c3c50();
   input += synapse0x28c3c90();
   input += synapse0x28c3cd0();
   input += synapse0x28c3d10();
   input += synapse0x28c3d50();
   input += synapse0x28c37e0();
   input += synapse0x28c3820();
   input += synapse0x28c3ea0();
   input += synapse0x28c3ee0();
   input += synapse0x28c3f20();
   input += synapse0x28c3f60();
   input += synapse0x28c3fa0();
   input += synapse0x28c3fe0();
   input += synapse0x28c4020();
   input += synapse0x28c4060();
   input += synapse0x28c40a0();
   input += synapse0x28c40e0();
   input += synapse0x28c4120();
   input += synapse0x28c4160();
   input += synapse0x28c41a0();
   input += synapse0x28c41e0();
   input += synapse0x28c3d90();
   input += synapse0x28c3dd0();
   input += synapse0x28c3e10();
   input += synapse0x28c3e50();
   input += synapse0x28c4430();
   input += synapse0x28c4470();
   input += synapse0x28c44b0();
   input += synapse0x28c44f0();
   input += synapse0x28c4530();
   input += synapse0x28c4570();
   input += synapse0x28c45b0();
   input += synapse0x28c45f0();
   input += synapse0x28c4630();
   input += synapse0x28c4670();
   input += synapse0x28c46b0();
   input += synapse0x28c46f0();
   input += synapse0x28c4730();
   input += synapse0x28c4770();
   return input;
}

double NNfunction_sg_sL::neuron0x28c3650() {
   double input = input0x28c3650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28c47b0() {
   double input = -0.150811;
   input += synapse0x28c4af0();
   input += synapse0x28c4b30();
   input += synapse0x28c4b70();
   input += synapse0x28c4bb0();
   input += synapse0x28c4bf0();
   input += synapse0x28c4c30();
   input += synapse0x28c4c70();
   input += synapse0x28c4cb0();
   input += synapse0x28c4cf0();
   input += synapse0x28c4d30();
   input += synapse0x28c4d70();
   input += synapse0x28c4db0();
   input += synapse0x28c4df0();
   input += synapse0x28c4e30();
   input += synapse0x28c4e70();
   input += synapse0x28c4eb0();
   input += synapse0x28c4940();
   input += synapse0x28c4980();
   input += synapse0x28c5000();
   input += synapse0x28c5040();
   input += synapse0x28c5080();
   input += synapse0x28c50c0();
   input += synapse0x28c5100();
   input += synapse0x28c5140();
   input += synapse0x28c5180();
   input += synapse0x28c51c0();
   input += synapse0x28c5200();
   input += synapse0x28c5240();
   input += synapse0x28c5280();
   input += synapse0x28c52c0();
   input += synapse0x28c5300();
   input += synapse0x28c5340();
   input += synapse0x28c4ef0();
   input += synapse0x28c4f30();
   input += synapse0x28c4f70();
   input += synapse0x28c4fb0();
   input += synapse0x28c5590();
   input += synapse0x28c55d0();
   input += synapse0x28c5610();
   input += synapse0x28c5650();
   input += synapse0x28c5690();
   input += synapse0x28c56d0();
   input += synapse0x28c5710();
   input += synapse0x28c5750();
   input += synapse0x28c5790();
   input += synapse0x28c57d0();
   input += synapse0x28c5810();
   input += synapse0x28c5850();
   input += synapse0x28c5890();
   input += synapse0x28c58d0();
   return input;
}

double NNfunction_sg_sL::neuron0x28c47b0() {
   double input = input0x28c47b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28c5910() {
   double input = 0.46303;
   input += synapse0x28c5c50();
   input += synapse0x28c5c90();
   input += synapse0x28c5cd0();
   input += synapse0x28c5d10();
   input += synapse0x28c5d50();
   input += synapse0x28c5d90();
   input += synapse0x28c5dd0();
   input += synapse0x28c5e10();
   input += synapse0x28c5e50();
   input += synapse0x28c5e90();
   input += synapse0x28c5ed0();
   input += synapse0x28c5f10();
   input += synapse0x28c5f50();
   input += synapse0x28c5f90();
   input += synapse0x28c5fd0();
   input += synapse0x28c6010();
   input += synapse0x28c5aa0();
   input += synapse0x28c5ae0();
   input += synapse0x28c6160();
   input += synapse0x28c61a0();
   input += synapse0x28c61e0();
   input += synapse0x28c6220();
   input += synapse0x28c6260();
   input += synapse0x28c62a0();
   input += synapse0x28c62e0();
   input += synapse0x28c6320();
   input += synapse0x28c6360();
   input += synapse0x28c63a0();
   input += synapse0x28c63e0();
   input += synapse0x28c6420();
   input += synapse0x28c6460();
   input += synapse0x28c64a0();
   input += synapse0x28c6050();
   input += synapse0x28c6090();
   input += synapse0x28c60d0();
   input += synapse0x28c6110();
   input += synapse0x28c66f0();
   input += synapse0x28c6730();
   input += synapse0x28c6770();
   input += synapse0x28c67b0();
   input += synapse0x28c67f0();
   input += synapse0x28c6830();
   input += synapse0x28c6870();
   input += synapse0x28c68b0();
   input += synapse0x28c68f0();
   input += synapse0x28c6930();
   input += synapse0x28c6970();
   input += synapse0x28c69b0();
   input += synapse0x28c69f0();
   input += synapse0x28c6a30();
   return input;
}

double NNfunction_sg_sL::neuron0x28c5910() {
   double input = input0x28c5910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sL::input0x28c6a70() {
   double input = 7.37497;
   input += synapse0x28c6c90();
   input += synapse0x28c6cd0();
   input += synapse0x28c6d10();
   input += synapse0x28c6d50();
   input += synapse0x28c6d90();
   return input;
}

double NNfunction_sg_sL::neuron0x28c6a70() {
   double input = input0x28c6a70();
   return (input * 1)+0;
}

double NNfunction_sg_sL::synapse0x2896dc0() {
   return (neuron0x2891ae0()*-0.0482379);
}

double NNfunction_sg_sL::synapse0x2896e00() {
   return (neuron0x2891d90()*-0.0305351);
}

double NNfunction_sg_sL::synapse0x2896e40() {
   return (neuron0x28920d0()*-0.0612684);
}

double NNfunction_sg_sL::synapse0x2896e80() {
   return (neuron0x2892410()*-1.18065);
}

double NNfunction_sg_sL::synapse0x2896ec0() {
   return (neuron0x2892750()*-0.00917369);
}

double NNfunction_sg_sL::synapse0x2896f00() {
   return (neuron0x2892a90()*-0.033234);
}

double NNfunction_sg_sL::synapse0x2896f40() {
   return (neuron0x2892dd0()*-0.0407395);
}

double NNfunction_sg_sL::synapse0x2896f80() {
   return (neuron0x2893110()*-0.0348583);
}

double NNfunction_sg_sL::synapse0x2896fc0() {
   return (neuron0x2893450()*-0.0370255);
}

double NNfunction_sg_sL::synapse0x2897000() {
   return (neuron0x2893790()*-0.0285565);
}

double NNfunction_sg_sL::synapse0x2897040() {
   return (neuron0x2893ad0()*-0.0164574);
}

double NNfunction_sg_sL::synapse0x2897080() {
   return (neuron0x2893e10()*-0.0831482);
}

double NNfunction_sg_sL::synapse0x28970c0() {
   return (neuron0x2894150()*-0.103065);
}

double NNfunction_sg_sL::synapse0x2897100() {
   return (neuron0x2894490()*0.0356929);
}

double NNfunction_sg_sL::synapse0x2897140() {
   return (neuron0x28947d0()*0.404844);
}

double NNfunction_sg_sL::synapse0x2897180() {
   return (neuron0x2894b10()*0.23768);
}

double NNfunction_sg_sL::synapse0x2896c10() {
   return (neuron0x2894e50()*0.0957813);
}

double NNfunction_sg_sL::synapse0x2896c50() {
   return (neuron0x28953b0()*0.000626905);
}

double NNfunction_sg_sL::synapse0x170ecd0() {
   return (neuron0x28955d0()*0.0807482);
}

double NNfunction_sg_sL::synapse0x170ed10() {
   return (neuron0x2895910()*-0.0166907);
}

double NNfunction_sg_sL::synapse0x28972d0() {
   return (neuron0x2895c50()*-0.00844898);
}

double NNfunction_sg_sL::synapse0x2897310() {
   return (neuron0x2895f90()*-0.0319808);
}

double NNfunction_sg_sL::synapse0x2897350() {
   return (neuron0x28962d0()*0.0023315);
}

double NNfunction_sg_sL::synapse0x2897390() {
   return (neuron0x2896610()*0.0111967);
}

double NNfunction_sg_sL::synapse0x2897710() {
   return (neuron0x2891ae0()*-0.0113835);
}

double NNfunction_sg_sL::synapse0x2897750() {
   return (neuron0x2891d90()*-0.00994015);
}

double NNfunction_sg_sL::synapse0x2897790() {
   return (neuron0x28920d0()*0.139765);
}

double NNfunction_sg_sL::synapse0x28977d0() {
   return (neuron0x2892410()*-1.94024);
}

double NNfunction_sg_sL::synapse0x2897810() {
   return (neuron0x2892750()*-0.00899775);
}

double NNfunction_sg_sL::synapse0x2897850() {
   return (neuron0x2892a90()*0.00065754);
}

double NNfunction_sg_sL::synapse0x2897890() {
   return (neuron0x2892dd0()*0.00960555);
}

double NNfunction_sg_sL::synapse0x28978d0() {
   return (neuron0x2893110()*-0.00647364);
}

double NNfunction_sg_sL::synapse0x2897910() {
   return (neuron0x2893450()*-0.0117403);
}

double NNfunction_sg_sL::synapse0x28971c0() {
   return (neuron0x2893790()*-0.0374912);
}

double NNfunction_sg_sL::synapse0x2897200() {
   return (neuron0x2893ad0()*-0.00135116);
}

double NNfunction_sg_sL::synapse0x2897240() {
   return (neuron0x2893e10()*-0.0467595);
}

double NNfunction_sg_sL::synapse0x2897280() {
   return (neuron0x2894150()*-0.82662);
}

double NNfunction_sg_sL::synapse0x2897b60() {
   return (neuron0x2894490()*-0.0309962);
}

double NNfunction_sg_sL::synapse0x2897ba0() {
   return (neuron0x28947d0()*0.0591974);
}

double NNfunction_sg_sL::synapse0x2897be0() {
   return (neuron0x2894b10()*0.035558);
}

double NNfunction_sg_sL::synapse0x2897560() {
   return (neuron0x2894e50()*0.00481564);
}

double NNfunction_sg_sL::synapse0x28975a0() {
   return (neuron0x28953b0()*-0.0434092);
}

double NNfunction_sg_sL::synapse0x2897d30() {
   return (neuron0x28955d0()*-0.00260291);
}

double NNfunction_sg_sL::synapse0x2897d70() {
   return (neuron0x2895910()*-0.021473);
}

double NNfunction_sg_sL::synapse0x2897db0() {
   return (neuron0x2895c50()*0.0234196);
}

double NNfunction_sg_sL::synapse0x2897df0() {
   return (neuron0x2895f90()*0.00674837);
}

double NNfunction_sg_sL::synapse0x2897e30() {
   return (neuron0x28962d0()*-0.0121644);
}

double NNfunction_sg_sL::synapse0x2897e70() {
   return (neuron0x2896610()*0.0112597);
}

double NNfunction_sg_sL::synapse0x28981f0() {
   return (neuron0x2891ae0()*0.0330553);
}

double NNfunction_sg_sL::synapse0x2898230() {
   return (neuron0x2891d90()*0.0362634);
}

double NNfunction_sg_sL::synapse0x2898270() {
   return (neuron0x28920d0()*0.219653);
}

double NNfunction_sg_sL::synapse0x28982b0() {
   return (neuron0x2892410()*-1.13725);
}

double NNfunction_sg_sL::synapse0x28982f0() {
   return (neuron0x2892750()*0.0641355);
}

double NNfunction_sg_sL::synapse0x2898330() {
   return (neuron0x2892a90()*-0.0519547);
}

double NNfunction_sg_sL::synapse0x2898370() {
   return (neuron0x2892dd0()*0.0506362);
}

double NNfunction_sg_sL::synapse0x28983b0() {
   return (neuron0x2893110()*0.00707488);
}

double NNfunction_sg_sL::synapse0x28983f0() {
   return (neuron0x2893450()*-0.0146376);
}

double NNfunction_sg_sL::synapse0x2898430() {
   return (neuron0x2893790()*0.100086);
}

double NNfunction_sg_sL::synapse0x2898470() {
   return (neuron0x2893ad0()*-0.0492925);
}

double NNfunction_sg_sL::synapse0x28984b0() {
   return (neuron0x2893e10()*0.520564);
}

double NNfunction_sg_sL::synapse0x28984f0() {
   return (neuron0x2894150()*-0.195917);
}

double NNfunction_sg_sL::synapse0x2898530() {
   return (neuron0x2894490()*0.163391);
}

double NNfunction_sg_sL::synapse0x2898570() {
   return (neuron0x28947d0()*0.123763);
}

double NNfunction_sg_sL::synapse0x28985b0() {
   return (neuron0x2894b10()*0.0233679);
}

double NNfunction_sg_sL::synapse0x2898040() {
   return (neuron0x2894e50()*0.0427252);
}

double NNfunction_sg_sL::synapse0x2898080() {
   return (neuron0x28953b0()*-0.113558);
}

double NNfunction_sg_sL::synapse0x170fcb0() {
   return (neuron0x28955d0()*-0.194581);
}

double NNfunction_sg_sL::synapse0x265bbe0() {
   return (neuron0x2895910()*0.164393);
}

double NNfunction_sg_sL::synapse0x265bc20() {
   return (neuron0x2895c50()*-0.0612994);
}

double NNfunction_sg_sL::synapse0x289a4f0() {
   return (neuron0x2895f90()*0.0102755);
}

double NNfunction_sg_sL::synapse0x289a530() {
   return (neuron0x28962d0()*0.000665203);
}

double NNfunction_sg_sL::synapse0x2891820() {
   return (neuron0x2896610()*0.0194644);
}

double NNfunction_sg_sL::synapse0x28918f0() {
   return (neuron0x2891ae0()*0.00194781);
}

double NNfunction_sg_sL::synapse0x265c460() {
   return (neuron0x2891d90()*0.00109063);
}

double NNfunction_sg_sL::synapse0x2897ae0() {
   return (neuron0x28920d0()*0.14798);
}

double NNfunction_sg_sL::synapse0x2897b20() {
   return (neuron0x2892410()*0.676121);
}

double NNfunction_sg_sL::synapse0x2898700() {
   return (neuron0x2892750()*0.0106337);
}

double NNfunction_sg_sL::synapse0x2898740() {
   return (neuron0x2892a90()*0.00333651);
}

double NNfunction_sg_sL::synapse0x2898780() {
   return (neuron0x2892dd0()*0.00125086);
}

double NNfunction_sg_sL::synapse0x28987c0() {
   return (neuron0x2893110()*0.00896085);
}

double NNfunction_sg_sL::synapse0x2898800() {
   return (neuron0x2893450()*0.0212418);
}

double NNfunction_sg_sL::synapse0x2898840() {
   return (neuron0x2893790()*0.00817119);
}

double NNfunction_sg_sL::synapse0x2898880() {
   return (neuron0x2893ad0()*0.0151146);
}

double NNfunction_sg_sL::synapse0x28988c0() {
   return (neuron0x2893e10()*-0.00332073);
}

double NNfunction_sg_sL::synapse0x2898900() {
   return (neuron0x2894150()*0.633397);
}

double NNfunction_sg_sL::synapse0x2898940() {
   return (neuron0x2894490()*-0.00771684);
}

double NNfunction_sg_sL::synapse0x2898980() {
   return (neuron0x28947d0()*0.00657654);
}

double NNfunction_sg_sL::synapse0x28989c0() {
   return (neuron0x2894b10()*-0.00485219);
}

double NNfunction_sg_sL::synapse0x2891860() {
   return (neuron0x2894e50()*-0.00203215);
}

double NNfunction_sg_sL::synapse0x28918a0() {
   return (neuron0x28953b0()*-0.00169487);
}

double NNfunction_sg_sL::synapse0x2898b10() {
   return (neuron0x28955d0()*-0.00260072);
}

double NNfunction_sg_sL::synapse0x2898b50() {
   return (neuron0x2895910()*-0.00103427);
}

double NNfunction_sg_sL::synapse0x2898b90() {
   return (neuron0x2895c50()*0.0101226);
}

double NNfunction_sg_sL::synapse0x2898bd0() {
   return (neuron0x2895f90()*0.00394418);
}

double NNfunction_sg_sL::synapse0x2898c10() {
   return (neuron0x28962d0()*-0.00522906);
}

double NNfunction_sg_sL::synapse0x2898c50() {
   return (neuron0x2896610()*-0.00452929);
}

double NNfunction_sg_sL::synapse0x2898fd0() {
   return (neuron0x2891ae0()*0.0199743);
}

double NNfunction_sg_sL::synapse0x2899010() {
   return (neuron0x2891d90()*0.00295759);
}

double NNfunction_sg_sL::synapse0x2899050() {
   return (neuron0x28920d0()*-0.0955904);
}

double NNfunction_sg_sL::synapse0x2899090() {
   return (neuron0x2892410()*-0.133217);
}

double NNfunction_sg_sL::synapse0x28990d0() {
   return (neuron0x2892750()*-0.0105438);
}

double NNfunction_sg_sL::synapse0x2899110() {
   return (neuron0x2892a90()*-0.0171433);
}

double NNfunction_sg_sL::synapse0x2899150() {
   return (neuron0x2892dd0()*-0.0301171);
}

double NNfunction_sg_sL::synapse0x2899190() {
   return (neuron0x2893110()*0.0189803);
}

double NNfunction_sg_sL::synapse0x28991d0() {
   return (neuron0x2893450()*-0.0390624);
}

double NNfunction_sg_sL::synapse0x2899210() {
   return (neuron0x2893790()*-0.0144615);
}

double NNfunction_sg_sL::synapse0x2899250() {
   return (neuron0x2893ad0()*0.0231477);
}

double NNfunction_sg_sL::synapse0x2899290() {
   return (neuron0x2893e10()*-0.0506515);
}

double NNfunction_sg_sL::synapse0x28992d0() {
   return (neuron0x2894150()*3.52442);
}

double NNfunction_sg_sL::synapse0x2899310() {
   return (neuron0x2894490()*0.0499159);
}

double NNfunction_sg_sL::synapse0x2899350() {
   return (neuron0x28947d0()*0.011679);
}

double NNfunction_sg_sL::synapse0x2899390() {
   return (neuron0x2894b10()*0.000887002);
}

double NNfunction_sg_sL::synapse0x28994e0() {
   return (neuron0x2894e50()*0.0449457);
}

double NNfunction_sg_sL::synapse0x2898e20() {
   return (neuron0x28953b0()*-0.0195194);
}

double NNfunction_sg_sL::synapse0x2898e60() {
   return (neuron0x28955d0()*0.00998411);
}

double NNfunction_sg_sL::synapse0x289a630() {
   return (neuron0x2895910()*-0.031724);
}

double NNfunction_sg_sL::synapse0x289a670() {
   return (neuron0x2895c50()*0.00751432);
}

double NNfunction_sg_sL::synapse0x289a6b0() {
   return (neuron0x2895f90()*-0.0229827);
}

double NNfunction_sg_sL::synapse0x289a6f0() {
   return (neuron0x28962d0()*0.0103261);
}

double NNfunction_sg_sL::synapse0x289a730() {
   return (neuron0x2896610()*-0.0392076);
}

double NNfunction_sg_sL::synapse0x289aab0() {
   return (neuron0x2891ae0()*-0.016083);
}

double NNfunction_sg_sL::synapse0x289aaf0() {
   return (neuron0x2891d90()*-0.00654718);
}

double NNfunction_sg_sL::synapse0x289ab30() {
   return (neuron0x28920d0()*0.0485394);
}

double NNfunction_sg_sL::synapse0x289ab70() {
   return (neuron0x2892410()*4.89074);
}

double NNfunction_sg_sL::synapse0x289abb0() {
   return (neuron0x2892750()*0.00210232);
}

double NNfunction_sg_sL::synapse0x289abf0() {
   return (neuron0x2892a90()*0.0043371);
}

double NNfunction_sg_sL::synapse0x289ac30() {
   return (neuron0x2892dd0()*0.0182563);
}

double NNfunction_sg_sL::synapse0x289ac70() {
   return (neuron0x2893110()*0.0136598);
}

double NNfunction_sg_sL::synapse0x289acb0() {
   return (neuron0x2893450()*-0.00958472);
}

double NNfunction_sg_sL::synapse0x265bf30() {
   return (neuron0x2893790()*-0.0113032);
}

double NNfunction_sg_sL::synapse0x265bf70() {
   return (neuron0x2893ad0()*-0.00760425);
}

double NNfunction_sg_sL::synapse0x265bfb0() {
   return (neuron0x2893e10()*0.0202146);
}

double NNfunction_sg_sL::synapse0x265bff0() {
   return (neuron0x2894150()*-1.80482);
}

double NNfunction_sg_sL::synapse0x265c030() {
   return (neuron0x2894490()*0.0122534);
}

double NNfunction_sg_sL::synapse0x265c070() {
   return (neuron0x28947d0()*0.0438827);
}

double NNfunction_sg_sL::synapse0x265c0b0() {
   return (neuron0x2894b10()*0.0243841);
}

double NNfunction_sg_sL::synapse0x289a900() {
   return (neuron0x2894e50()*-0.0103826);
}

double NNfunction_sg_sL::synapse0x289a940() {
   return (neuron0x28953b0()*0.0155554);
}

double NNfunction_sg_sL::synapse0x265c200() {
   return (neuron0x28955d0()*0.00632978);
}

double NNfunction_sg_sL::synapse0x265c240() {
   return (neuron0x2895910()*-0.00535442);
}

double NNfunction_sg_sL::synapse0x265c280() {
   return (neuron0x2895c50()*-0.00182725);
}

double NNfunction_sg_sL::synapse0x265c2c0() {
   return (neuron0x2895f90()*0.00907228);
}

double NNfunction_sg_sL::synapse0x265c300() {
   return (neuron0x28962d0()*0.00828738);
}

double NNfunction_sg_sL::synapse0x289b500() {
   return (neuron0x2896610()*-0.00265985);
}

double NNfunction_sg_sL::synapse0x289b880() {
   return (neuron0x2891ae0()*0.112707);
}

double NNfunction_sg_sL::synapse0x289b8c0() {
   return (neuron0x2891d90()*-0.185613);
}

double NNfunction_sg_sL::synapse0x289b900() {
   return (neuron0x28920d0()*0.220965);
}

double NNfunction_sg_sL::synapse0x289b940() {
   return (neuron0x2892410()*0.372673);
}

double NNfunction_sg_sL::synapse0x289b980() {
   return (neuron0x2892750()*-0.135367);
}

double NNfunction_sg_sL::synapse0x289b9c0() {
   return (neuron0x2892a90()*0.356125);
}

double NNfunction_sg_sL::synapse0x289ba00() {
   return (neuron0x2892dd0()*0.338499);
}

double NNfunction_sg_sL::synapse0x289ba40() {
   return (neuron0x2893110()*0.0184512);
}

double NNfunction_sg_sL::synapse0x289ba80() {
   return (neuron0x2893450()*-0.198129);
}

double NNfunction_sg_sL::synapse0x289bac0() {
   return (neuron0x2893790()*-0.0138353);
}

double NNfunction_sg_sL::synapse0x289bb00() {
   return (neuron0x2893ad0()*-0.125852);
}

double NNfunction_sg_sL::synapse0x289bb40() {
   return (neuron0x2893e10()*-0.2791);
}

double NNfunction_sg_sL::synapse0x289bb80() {
   return (neuron0x2894150()*-1.16404);
}

double NNfunction_sg_sL::synapse0x289bbc0() {
   return (neuron0x2894490()*0.184844);
}

double NNfunction_sg_sL::synapse0x289bc00() {
   return (neuron0x28947d0()*0.154806);
}

double NNfunction_sg_sL::synapse0x289bc40() {
   return (neuron0x2894b10()*-0.181193);
}

double NNfunction_sg_sL::synapse0x289b6d0() {
   return (neuron0x2894e50()*0.0341044);
}

double NNfunction_sg_sL::synapse0x289b710() {
   return (neuron0x28953b0()*0.0247213);
}

double NNfunction_sg_sL::synapse0x289bd90() {
   return (neuron0x28955d0()*-0.0931015);
}

double NNfunction_sg_sL::synapse0x289bdd0() {
   return (neuron0x2895910()*-0.13321);
}

double NNfunction_sg_sL::synapse0x289be10() {
   return (neuron0x2895c50()*0.00861977);
}

double NNfunction_sg_sL::synapse0x289be50() {
   return (neuron0x2895f90()*-0.19536);
}

double NNfunction_sg_sL::synapse0x289be90() {
   return (neuron0x28962d0()*0.174253);
}

double NNfunction_sg_sL::synapse0x289bed0() {
   return (neuron0x2896610()*-0.287973);
}

double NNfunction_sg_sL::synapse0x289c250() {
   return (neuron0x2891ae0()*0.065438);
}

double NNfunction_sg_sL::synapse0x289c290() {
   return (neuron0x2891d90()*-0.326436);
}

double NNfunction_sg_sL::synapse0x289c2d0() {
   return (neuron0x28920d0()*-0.418492);
}

double NNfunction_sg_sL::synapse0x289c310() {
   return (neuron0x2892410()*-0.674975);
}

double NNfunction_sg_sL::synapse0x289c350() {
   return (neuron0x2892750()*0.151133);
}

double NNfunction_sg_sL::synapse0x289c390() {
   return (neuron0x2892a90()*-0.218107);
}

double NNfunction_sg_sL::synapse0x289c3d0() {
   return (neuron0x2892dd0()*-0.217747);
}

double NNfunction_sg_sL::synapse0x289c410() {
   return (neuron0x2893110()*-0.173649);
}

double NNfunction_sg_sL::synapse0x289c450() {
   return (neuron0x2893450()*-0.530281);
}

double NNfunction_sg_sL::synapse0x289c490() {
   return (neuron0x2893790()*-0.0942267);
}

double NNfunction_sg_sL::synapse0x289c4d0() {
   return (neuron0x2893ad0()*0.157041);
}

double NNfunction_sg_sL::synapse0x289c510() {
   return (neuron0x2893e10()*-0.269681);
}

double NNfunction_sg_sL::synapse0x289c550() {
   return (neuron0x2894150()*-0.50819);
}

double NNfunction_sg_sL::synapse0x289c590() {
   return (neuron0x2894490()*-0.29268);
}

double NNfunction_sg_sL::synapse0x289c5d0() {
   return (neuron0x28947d0()*0.456566);
}

double NNfunction_sg_sL::synapse0x289c610() {
   return (neuron0x2894b10()*-0.105883);
}

double NNfunction_sg_sL::synapse0x289c0a0() {
   return (neuron0x2894e50()*0.30208);
}

double NNfunction_sg_sL::synapse0x289c0e0() {
   return (neuron0x28953b0()*0.128381);
}

double NNfunction_sg_sL::synapse0x289c760() {
   return (neuron0x28955d0()*0.124617);
}

double NNfunction_sg_sL::synapse0x289c7a0() {
   return (neuron0x2895910()*-0.154105);
}

double NNfunction_sg_sL::synapse0x289c7e0() {
   return (neuron0x2895c50()*-0.101105);
}

double NNfunction_sg_sL::synapse0x289c820() {
   return (neuron0x2895f90()*-0.185781);
}

double NNfunction_sg_sL::synapse0x289c860() {
   return (neuron0x28962d0()*-0.142869);
}

double NNfunction_sg_sL::synapse0x289c8a0() {
   return (neuron0x2896610()*-0.267846);
}

double NNfunction_sg_sL::synapse0x28952a0() {
   return (neuron0x2891ae0()*0.140946);
}

double NNfunction_sg_sL::synapse0x28952e0() {
   return (neuron0x2891d90()*0.0323296);
}

double NNfunction_sg_sL::synapse0x2895320() {
   return (neuron0x28920d0()*-0.331214);
}

double NNfunction_sg_sL::synapse0x2895360() {
   return (neuron0x2892410()*-0.208338);
}

double NNfunction_sg_sL::synapse0x289ce30() {
   return (neuron0x2892750()*-0.00787069);
}

double NNfunction_sg_sL::synapse0x289ce70() {
   return (neuron0x2892a90()*-0.137968);
}

double NNfunction_sg_sL::synapse0x289ceb0() {
   return (neuron0x2892dd0()*-0.166189);
}

double NNfunction_sg_sL::synapse0x289cef0() {
   return (neuron0x2893110()*0.180907);
}

double NNfunction_sg_sL::synapse0x289cf30() {
   return (neuron0x2893450()*-0.163302);
}

double NNfunction_sg_sL::synapse0x289cf70() {
   return (neuron0x2893790()*0.348031);
}

double NNfunction_sg_sL::synapse0x289cfb0() {
   return (neuron0x2893ad0()*0.189099);
}

double NNfunction_sg_sL::synapse0x289cff0() {
   return (neuron0x2893e10()*-0.255609);
}

double NNfunction_sg_sL::synapse0x289d030() {
   return (neuron0x2894150()*-0.326124);
}

double NNfunction_sg_sL::synapse0x289d070() {
   return (neuron0x2894490()*0.121588);
}

double NNfunction_sg_sL::synapse0x289d0b0() {
   return (neuron0x28947d0()*-0.0417092);
}

double NNfunction_sg_sL::synapse0x289d0f0() {
   return (neuron0x2894b10()*-0.104477);
}

double NNfunction_sg_sL::synapse0x289ca70() {
   return (neuron0x2894e50()*-0.119913);
}

double NNfunction_sg_sL::synapse0x289cab0() {
   return (neuron0x28953b0()*-0.015469);
}

double NNfunction_sg_sL::synapse0x289d240() {
   return (neuron0x28955d0()*0.209269);
}

double NNfunction_sg_sL::synapse0x289d280() {
   return (neuron0x2895910()*0.0329039);
}

double NNfunction_sg_sL::synapse0x289d2c0() {
   return (neuron0x2895c50()*0.00577652);
}

double NNfunction_sg_sL::synapse0x289d300() {
   return (neuron0x2895f90()*-0.0218676);
}

double NNfunction_sg_sL::synapse0x289d340() {
   return (neuron0x28962d0()*-0.0892277);
}

double NNfunction_sg_sL::synapse0x289d380() {
   return (neuron0x2896610()*-0.107694);
}

double NNfunction_sg_sL::synapse0x289d700() {
   return (neuron0x2891ae0()*-0.0654298);
}

double NNfunction_sg_sL::synapse0x289d740() {
   return (neuron0x2891d90()*0.0669449);
}

double NNfunction_sg_sL::synapse0x289d780() {
   return (neuron0x28920d0()*0.117045);
}

double NNfunction_sg_sL::synapse0x289d7c0() {
   return (neuron0x2892410()*0.582822);
}

double NNfunction_sg_sL::synapse0x289d800() {
   return (neuron0x2892750()*-0.0688986);
}

double NNfunction_sg_sL::synapse0x289d840() {
   return (neuron0x2892a90()*0.242001);
}

double NNfunction_sg_sL::synapse0x289d880() {
   return (neuron0x2892dd0()*-0.035476);
}

double NNfunction_sg_sL::synapse0x289d8c0() {
   return (neuron0x2893110()*0.247142);
}

double NNfunction_sg_sL::synapse0x289d900() {
   return (neuron0x2893450()*-0.0189594);
}

double NNfunction_sg_sL::synapse0x289d940() {
   return (neuron0x2893790()*-0.0195506);
}

double NNfunction_sg_sL::synapse0x289d980() {
   return (neuron0x2893ad0()*-0.0220195);
}

double NNfunction_sg_sL::synapse0x289d9c0() {
   return (neuron0x2893e10()*0.246483);
}

double NNfunction_sg_sL::synapse0x289da00() {
   return (neuron0x2894150()*-0.917833);
}

double NNfunction_sg_sL::synapse0x289da40() {
   return (neuron0x2894490()*0.00400149);
}

double NNfunction_sg_sL::synapse0x289da80() {
   return (neuron0x28947d0()*-0.31095);
}

double NNfunction_sg_sL::synapse0x289dac0() {
   return (neuron0x2894b10()*0.92314);
}

double NNfunction_sg_sL::synapse0x289d550() {
   return (neuron0x2894e50()*-0.287273);
}

double NNfunction_sg_sL::synapse0x289d590() {
   return (neuron0x28953b0()*0.11496);
}

double NNfunction_sg_sL::synapse0x289dc10() {
   return (neuron0x28955d0()*-0.0552632);
}

double NNfunction_sg_sL::synapse0x289dc50() {
   return (neuron0x2895910()*0.131002);
}

double NNfunction_sg_sL::synapse0x289dc90() {
   return (neuron0x2895c50()*-0.089199);
}

double NNfunction_sg_sL::synapse0x289dcd0() {
   return (neuron0x2895f90()*0.00962737);
}

double NNfunction_sg_sL::synapse0x289dd10() {
   return (neuron0x28962d0()*-0.0116822);
}

double NNfunction_sg_sL::synapse0x289dd50() {
   return (neuron0x2896610()*0.0980078);
}

double NNfunction_sg_sL::synapse0x289e0d0() {
   return (neuron0x2891ae0()*-0.169689);
}

double NNfunction_sg_sL::synapse0x289e110() {
   return (neuron0x2891d90()*0.155032);
}

double NNfunction_sg_sL::synapse0x289e150() {
   return (neuron0x28920d0()*-0.0715374);
}

double NNfunction_sg_sL::synapse0x289e190() {
   return (neuron0x2892410()*-0.0888286);
}

double NNfunction_sg_sL::synapse0x289e1d0() {
   return (neuron0x2892750()*-0.0008831);
}

double NNfunction_sg_sL::synapse0x289e210() {
   return (neuron0x2892a90()*0.070235);
}

double NNfunction_sg_sL::synapse0x289e250() {
   return (neuron0x2892dd0()*0.245272);
}

double NNfunction_sg_sL::synapse0x289e290() {
   return (neuron0x2893110()*-0.0172568);
}

double NNfunction_sg_sL::synapse0x289e2d0() {
   return (neuron0x2893450()*0.319044);
}

double NNfunction_sg_sL::synapse0x289e310() {
   return (neuron0x2893790()*0.0297958);
}

double NNfunction_sg_sL::synapse0x289e350() {
   return (neuron0x2893ad0()*0.0173517);
}

double NNfunction_sg_sL::synapse0x289e390() {
   return (neuron0x2893e10()*0.176998);
}

double NNfunction_sg_sL::synapse0x289e3d0() {
   return (neuron0x2894150()*0.0874828);
}

double NNfunction_sg_sL::synapse0x289e410() {
   return (neuron0x2894490()*-0.166942);
}

double NNfunction_sg_sL::synapse0x289e450() {
   return (neuron0x28947d0()*-0.0565858);
}

double NNfunction_sg_sL::synapse0x289e490() {
   return (neuron0x2894b10()*0.190825);
}

double NNfunction_sg_sL::synapse0x289df20() {
   return (neuron0x2894e50()*0.113364);
}

double NNfunction_sg_sL::synapse0x289df60() {
   return (neuron0x28953b0()*-0.0378935);
}

double NNfunction_sg_sL::synapse0x289acf0() {
   return (neuron0x28955d0()*-0.260731);
}

double NNfunction_sg_sL::synapse0x289ad30() {
   return (neuron0x2895910()*-0.112324);
}

double NNfunction_sg_sL::synapse0x289ad70() {
   return (neuron0x2895c50()*0.347422);
}

double NNfunction_sg_sL::synapse0x289adb0() {
   return (neuron0x2895f90()*0.103835);
}

double NNfunction_sg_sL::synapse0x289adf0() {
   return (neuron0x28962d0()*0.246389);
}

double NNfunction_sg_sL::synapse0x289ae30() {
   return (neuron0x2896610()*0.397579);
}

double NNfunction_sg_sL::synapse0x289b1b0() {
   return (neuron0x2891ae0()*0.000662286);
}

double NNfunction_sg_sL::synapse0x289b1f0() {
   return (neuron0x2891d90()*-0.00368138);
}

double NNfunction_sg_sL::synapse0x289b230() {
   return (neuron0x28920d0()*0.379388);
}

double NNfunction_sg_sL::synapse0x289b270() {
   return (neuron0x2892410()*-4.18979);
}

double NNfunction_sg_sL::synapse0x289b2b0() {
   return (neuron0x2892750()*-0.001221);
}

double NNfunction_sg_sL::synapse0x289b2f0() {
   return (neuron0x2892a90()*0.00270778);
}

double NNfunction_sg_sL::synapse0x289b330() {
   return (neuron0x2892dd0()*0.0279446);
}

double NNfunction_sg_sL::synapse0x289b370() {
   return (neuron0x2893110()*0.00871872);
}

double NNfunction_sg_sL::synapse0x289b3b0() {
   return (neuron0x2893450()*-0.00740699);
}

double NNfunction_sg_sL::synapse0x289b3f0() {
   return (neuron0x2893790()*-0.00645869);
}

double NNfunction_sg_sL::synapse0x289b430() {
   return (neuron0x2893ad0()*1.84974e-05);
}

double NNfunction_sg_sL::synapse0x289b470() {
   return (neuron0x2893e10()*-0.0285377);
}

double NNfunction_sg_sL::synapse0x289b4b0() {
   return (neuron0x2894150()*-0.311519);
}

double NNfunction_sg_sL::synapse0x289f5f0() {
   return (neuron0x2894490()*-0.00768454);
}

double NNfunction_sg_sL::synapse0x289f630() {
   return (neuron0x28947d0()*0.0423271);
}

double NNfunction_sg_sL::synapse0x289f670() {
   return (neuron0x2894b10()*0.0212409);
}

double NNfunction_sg_sL::synapse0x289b000() {
   return (neuron0x2894e50()*0.00931947);
}

double NNfunction_sg_sL::synapse0x289b040() {
   return (neuron0x28953b0()*-0.0399911);
}

double NNfunction_sg_sL::synapse0x289f7c0() {
   return (neuron0x28955d0()*-0.0267257);
}

double NNfunction_sg_sL::synapse0x289f800() {
   return (neuron0x2895910()*0.000700643);
}

double NNfunction_sg_sL::synapse0x289f840() {
   return (neuron0x2895c50()*0.0196962);
}

double NNfunction_sg_sL::synapse0x289f880() {
   return (neuron0x2895f90()*0.00407987);
}

double NNfunction_sg_sL::synapse0x289f8c0() {
   return (neuron0x28962d0()*-0.00725848);
}

double NNfunction_sg_sL::synapse0x289f900() {
   return (neuron0x2896610()*0.0137558);
}

double NNfunction_sg_sL::synapse0x289fc80() {
   return (neuron0x2891ae0()*-0.0112505);
}

double NNfunction_sg_sL::synapse0x289fcc0() {
   return (neuron0x2891d90()*0.0144787);
}

double NNfunction_sg_sL::synapse0x289fd00() {
   return (neuron0x28920d0()*-1.34963);
}

double NNfunction_sg_sL::synapse0x289fd40() {
   return (neuron0x2892410()*2.01675);
}

double NNfunction_sg_sL::synapse0x289fd80() {
   return (neuron0x2892750()*0.000909883);
}

double NNfunction_sg_sL::synapse0x289fdc0() {
   return (neuron0x2892a90()*-0.0491706);
}

double NNfunction_sg_sL::synapse0x289fe00() {
   return (neuron0x2892dd0()*-0.0151299);
}

double NNfunction_sg_sL::synapse0x289fe40() {
   return (neuron0x2893110()*0.00316636);
}

double NNfunction_sg_sL::synapse0x289fe80() {
   return (neuron0x2893450()*0.0287548);
}

double NNfunction_sg_sL::synapse0x289fec0() {
   return (neuron0x2893790()*-0.0361137);
}

double NNfunction_sg_sL::synapse0x289ff00() {
   return (neuron0x2893ad0()*-0.030204);
}

double NNfunction_sg_sL::synapse0x289ff40() {
   return (neuron0x2893e10()*-0.0760828);
}

double NNfunction_sg_sL::synapse0x289ff80() {
   return (neuron0x2894150()*-0.353461);
}

double NNfunction_sg_sL::synapse0x289ffc0() {
   return (neuron0x2894490()*-0.0239325);
}

double NNfunction_sg_sL::synapse0x28a0000() {
   return (neuron0x28947d0()*-0.0596101);
}

double NNfunction_sg_sL::synapse0x28a0040() {
   return (neuron0x2894b10()*0.0390532);
}

double NNfunction_sg_sL::synapse0x289fad0() {
   return (neuron0x2894e50()*0.0808911);
}

double NNfunction_sg_sL::synapse0x289fb10() {
   return (neuron0x28953b0()*-0.014698);
}

double NNfunction_sg_sL::synapse0x28a0190() {
   return (neuron0x28955d0()*0.0325686);
}

double NNfunction_sg_sL::synapse0x28a01d0() {
   return (neuron0x2895910()*-0.0144458);
}

double NNfunction_sg_sL::synapse0x28a0210() {
   return (neuron0x2895c50()*0.0312459);
}

double NNfunction_sg_sL::synapse0x28a0250() {
   return (neuron0x2895f90()*0.0205101);
}

double NNfunction_sg_sL::synapse0x28a0290() {
   return (neuron0x28962d0()*0.0206261);
}

double NNfunction_sg_sL::synapse0x28a02d0() {
   return (neuron0x2896610()*-0.0326291);
}

double NNfunction_sg_sL::synapse0x28a0650() {
   return (neuron0x2891ae0()*0.00294819);
}

double NNfunction_sg_sL::synapse0x28a0690() {
   return (neuron0x2891d90()*0.00349725);
}

double NNfunction_sg_sL::synapse0x28a06d0() {
   return (neuron0x28920d0()*-0.150005);
}

double NNfunction_sg_sL::synapse0x28a0710() {
   return (neuron0x2892410()*0.583392);
}

double NNfunction_sg_sL::synapse0x28a0750() {
   return (neuron0x2892750()*-0.0059528);
}

double NNfunction_sg_sL::synapse0x28a0790() {
   return (neuron0x2892a90()*-0.0095944);
}

double NNfunction_sg_sL::synapse0x28a07d0() {
   return (neuron0x2892dd0()*-0.00833794);
}

double NNfunction_sg_sL::synapse0x28a0810() {
   return (neuron0x2893110()*-0.00624641);
}

double NNfunction_sg_sL::synapse0x28a0850() {
   return (neuron0x2893450()*0.0213593);
}

double NNfunction_sg_sL::synapse0x28a0890() {
   return (neuron0x2893790()*0.00232542);
}

double NNfunction_sg_sL::synapse0x28a08d0() {
   return (neuron0x2893ad0()*0.0161927);
}

double NNfunction_sg_sL::synapse0x28a0910() {
   return (neuron0x2893e10()*0.00558856);
}

double NNfunction_sg_sL::synapse0x28a0950() {
   return (neuron0x2894150()*-0.591204);
}

double NNfunction_sg_sL::synapse0x28a0990() {
   return (neuron0x2894490()*-0.00126507);
}

double NNfunction_sg_sL::synapse0x28a09d0() {
   return (neuron0x28947d0()*0.00423991);
}

double NNfunction_sg_sL::synapse0x28a0a10() {
   return (neuron0x2894b10()*-0.00681271);
}

double NNfunction_sg_sL::synapse0x28a04a0() {
   return (neuron0x2894e50()*-0.00102968);
}

double NNfunction_sg_sL::synapse0x28a04e0() {
   return (neuron0x28953b0()*0.00211371);
}

double NNfunction_sg_sL::synapse0x28a0b60() {
   return (neuron0x28955d0()*0.00703352);
}

double NNfunction_sg_sL::synapse0x28a0ba0() {
   return (neuron0x2895910()*0.00337536);
}

double NNfunction_sg_sL::synapse0x28a0be0() {
   return (neuron0x2895c50()*0.00471524);
}

double NNfunction_sg_sL::synapse0x28a0c20() {
   return (neuron0x2895f90()*-0.00186108);
}

double NNfunction_sg_sL::synapse0x28a0c60() {
   return (neuron0x28962d0()*-0.00132356);
}

double NNfunction_sg_sL::synapse0x28a0ca0() {
   return (neuron0x2896610()*-0.0027702);
}

double NNfunction_sg_sL::synapse0x28a1020() {
   return (neuron0x2891ae0()*0.407581);
}

double NNfunction_sg_sL::synapse0x28a1060() {
   return (neuron0x2891d90()*0.0265548);
}

double NNfunction_sg_sL::synapse0x28a10a0() {
   return (neuron0x28920d0()*-0.688081);
}

double NNfunction_sg_sL::synapse0x28a10e0() {
   return (neuron0x2892410()*0.245996);
}

double NNfunction_sg_sL::synapse0x28a1120() {
   return (neuron0x2892750()*-0.152981);
}

double NNfunction_sg_sL::synapse0x28a1160() {
   return (neuron0x2892a90()*0.542722);
}

double NNfunction_sg_sL::synapse0x28a11a0() {
   return (neuron0x2892dd0()*0.178579);
}

double NNfunction_sg_sL::synapse0x28a11e0() {
   return (neuron0x2893110()*-0.0283928);
}

double NNfunction_sg_sL::synapse0x28a1220() {
   return (neuron0x2893450()*-0.148888);
}

double NNfunction_sg_sL::synapse0x28a1260() {
   return (neuron0x2893790()*-0.118118);
}

double NNfunction_sg_sL::synapse0x28a12a0() {
   return (neuron0x2893ad0()*0.198282);
}

double NNfunction_sg_sL::synapse0x28a12e0() {
   return (neuron0x2893e10()*0.135308);
}

double NNfunction_sg_sL::synapse0x28a1320() {
   return (neuron0x2894150()*-0.690258);
}

double NNfunction_sg_sL::synapse0x28a1360() {
   return (neuron0x2894490()*0.426634);
}

double NNfunction_sg_sL::synapse0x28a13a0() {
   return (neuron0x28947d0()*0.020189);
}

double NNfunction_sg_sL::synapse0x28a13e0() {
   return (neuron0x2894b10()*-0.23392);
}

double NNfunction_sg_sL::synapse0x28a0e70() {
   return (neuron0x2894e50()*-0.181559);
}

double NNfunction_sg_sL::synapse0x28a0eb0() {
   return (neuron0x28953b0()*-0.586498);
}

double NNfunction_sg_sL::synapse0x28a1530() {
   return (neuron0x28955d0()*-0.172528);
}

double NNfunction_sg_sL::synapse0x28a1570() {
   return (neuron0x2895910()*-0.123493);
}

double NNfunction_sg_sL::synapse0x28a15b0() {
   return (neuron0x2895c50()*-0.348244);
}

double NNfunction_sg_sL::synapse0x28a15f0() {
   return (neuron0x2895f90()*-0.145155);
}

double NNfunction_sg_sL::synapse0x28a1630() {
   return (neuron0x28962d0()*-0.0446023);
}

double NNfunction_sg_sL::synapse0x28a1670() {
   return (neuron0x2896610()*-0.398179);
}

double NNfunction_sg_sL::synapse0x28a19f0() {
   return (neuron0x2891ae0()*0.130498);
}

double NNfunction_sg_sL::synapse0x2891c70() {
   return (neuron0x2891d90()*0.368751);
}

double NNfunction_sg_sL::synapse0x2891cb0() {
   return (neuron0x28920d0()*0.283858);
}

double NNfunction_sg_sL::synapse0x2891fb0() {
   return (neuron0x2892410()*0.527305);
}

double NNfunction_sg_sL::synapse0x2891ff0() {
   return (neuron0x2892750()*0.562952);
}

double NNfunction_sg_sL::synapse0x28922f0() {
   return (neuron0x2892a90()*-0.310992);
}

double NNfunction_sg_sL::synapse0x2892330() {
   return (neuron0x2892dd0()*0.272082);
}

double NNfunction_sg_sL::synapse0x2892630() {
   return (neuron0x2893110()*0.33257);
}

double NNfunction_sg_sL::synapse0x2892670() {
   return (neuron0x2893450()*0.103526);
}

double NNfunction_sg_sL::synapse0x2892970() {
   return (neuron0x2893790()*0.13507);
}

double NNfunction_sg_sL::synapse0x28929b0() {
   return (neuron0x2893ad0()*-0.0965118);
}

double NNfunction_sg_sL::synapse0x2892cb0() {
   return (neuron0x2893e10()*0.465449);
}

double NNfunction_sg_sL::synapse0x2892cf0() {
   return (neuron0x2894150()*0.923389);
}

double NNfunction_sg_sL::synapse0x2892ff0() {
   return (neuron0x2894490()*-0.475874);
}

double NNfunction_sg_sL::synapse0x2893030() {
   return (neuron0x28947d0()*0.395526);
}

double NNfunction_sg_sL::synapse0x2893330() {
   return (neuron0x2894b10()*0.303182);
}

double NNfunction_sg_sL::synapse0x2893370() {
   return (neuron0x2894e50()*0.0944437);
}

double NNfunction_sg_sL::synapse0x2893670() {
   return (neuron0x28953b0()*-0.192369);
}

double NNfunction_sg_sL::synapse0x28936b0() {
   return (neuron0x28955d0()*0.0733495);
}

double NNfunction_sg_sL::synapse0x28939b0() {
   return (neuron0x2895910()*0.242752);
}

double NNfunction_sg_sL::synapse0x28939f0() {
   return (neuron0x2895c50()*-0.436619);
}

double NNfunction_sg_sL::synapse0x2893cf0() {
   return (neuron0x2895f90()*-0.110387);
}

double NNfunction_sg_sL::synapse0x2893d30() {
   return (neuron0x28962d0()*0.380648);
}

double NNfunction_sg_sL::synapse0x2894030() {
   return (neuron0x2896610()*-0.245978);
}

double NNfunction_sg_sL::synapse0x2894070() {
   return (neuron0x2891ae0()*-0.0542999);
}

double NNfunction_sg_sL::synapse0x2894d30() {
   return (neuron0x2891d90()*0.121275);
}

double NNfunction_sg_sL::synapse0x2894d70() {
   return (neuron0x28920d0()*0.533658);
}

double NNfunction_sg_sL::synapse0x28a1840() {
   return (neuron0x2892410()*0.165122);
}

double NNfunction_sg_sL::synapse0x28a1880() {
   return (neuron0x2892750()*0.0607048);
}

double NNfunction_sg_sL::synapse0x2895070() {
   return (neuron0x2892a90()*-0.0756135);
}

double NNfunction_sg_sL::synapse0x28950b0() {
   return (neuron0x2892dd0()*-0.2131);
}

double NNfunction_sg_sL::synapse0x1722d20() {
   return (neuron0x2893110()*0.0639837);
}

double NNfunction_sg_sL::synapse0x1722d60() {
   return (neuron0x2893450()*-0.0376531);
}

double NNfunction_sg_sL::synapse0x28957f0() {
   return (neuron0x2893790()*0.0256046);
}

double NNfunction_sg_sL::synapse0x2895830() {
   return (neuron0x2893ad0()*-0.010466);
}

double NNfunction_sg_sL::synapse0x2895b30() {
   return (neuron0x2893e10()*-0.149049);
}

double NNfunction_sg_sL::synapse0x2895b70() {
   return (neuron0x2894150()*-0.5465);
}

double NNfunction_sg_sL::synapse0x2895e70() {
   return (neuron0x2894490()*0.081331);
}

double NNfunction_sg_sL::synapse0x2895eb0() {
   return (neuron0x28947d0()*-0.229469);
}

double NNfunction_sg_sL::synapse0x28961b0() {
   return (neuron0x2894b10()*-0.244041);
}

double NNfunction_sg_sL::synapse0x28961f0() {
   return (neuron0x2894e50()*0.0963949);
}

double NNfunction_sg_sL::synapse0x28964f0() {
   return (neuron0x28953b0()*-0.0158146);
}

double NNfunction_sg_sL::synapse0x2896530() {
   return (neuron0x28955d0()*-0.0200601);
}

double NNfunction_sg_sL::synapse0x2896830() {
   return (neuron0x2895910()*0.0132828);
}

double NNfunction_sg_sL::synapse0x2896870() {
   return (neuron0x2895c50()*-0.0716194);
}

double NNfunction_sg_sL::synapse0x2894370() {
   return (neuron0x2895f90()*-0.0321533);
}

double NNfunction_sg_sL::synapse0x28943b0() {
   return (neuron0x28962d0()*0.0415116);
}

double NNfunction_sg_sL::synapse0x28a3760() {
   return (neuron0x2896610()*-0.0583927);
}

double NNfunction_sg_sL::synapse0x28a3ae0() {
   return (neuron0x2891ae0()*0.00167048);
}

double NNfunction_sg_sL::synapse0x28a3b20() {
   return (neuron0x2891d90()*-0.00679388);
}

double NNfunction_sg_sL::synapse0x28a3b60() {
   return (neuron0x28920d0()*0.0231462);
}

double NNfunction_sg_sL::synapse0x28a3ba0() {
   return (neuron0x2892410()*3.5107);
}

double NNfunction_sg_sL::synapse0x28a3be0() {
   return (neuron0x2892750()*0.00333735);
}

double NNfunction_sg_sL::synapse0x28a3c20() {
   return (neuron0x2892a90()*-0.00321019);
}

double NNfunction_sg_sL::synapse0x28a3c60() {
   return (neuron0x2892dd0()*0.00712202);
}

double NNfunction_sg_sL::synapse0x28a3ca0() {
   return (neuron0x2893110()*-0.00175499);
}

double NNfunction_sg_sL::synapse0x28a3ce0() {
   return (neuron0x2893450()*0.00101232);
}

double NNfunction_sg_sL::synapse0x28a3d20() {
   return (neuron0x2893790()*-0.00305001);
}

double NNfunction_sg_sL::synapse0x28a3d60() {
   return (neuron0x2893ad0()*-0.00278478);
}

double NNfunction_sg_sL::synapse0x28a3da0() {
   return (neuron0x2893e10()*0.0216775);
}

double NNfunction_sg_sL::synapse0x28a3de0() {
   return (neuron0x2894150()*0.0465012);
}

double NNfunction_sg_sL::synapse0x28a3e20() {
   return (neuron0x2894490()*-1.34659e-05);
}

double NNfunction_sg_sL::synapse0x28a3e60() {
   return (neuron0x28947d0()*-0.00160824);
}

double NNfunction_sg_sL::synapse0x28a3ea0() {
   return (neuron0x2894b10()*0.0172329);
}

double NNfunction_sg_sL::synapse0x28a3930() {
   return (neuron0x2894e50()*0.0106626);
}

double NNfunction_sg_sL::synapse0x28a3970() {
   return (neuron0x28953b0()*-0.00362097);
}

double NNfunction_sg_sL::synapse0x28a3ff0() {
   return (neuron0x28955d0()*0.00651137);
}

double NNfunction_sg_sL::synapse0x28a4030() {
   return (neuron0x2895910()*-0.000817205);
}

double NNfunction_sg_sL::synapse0x28a4070() {
   return (neuron0x2895c50()*0.00304761);
}

double NNfunction_sg_sL::synapse0x28a40b0() {
   return (neuron0x2895f90()*-0.00260415);
}

double NNfunction_sg_sL::synapse0x28a40f0() {
   return (neuron0x28962d0()*-0.00353611);
}

double NNfunction_sg_sL::synapse0x28a4130() {
   return (neuron0x2896610()*-0.00687527);
}

double NNfunction_sg_sL::synapse0x28a44b0() {
   return (neuron0x2891ae0()*0.220644);
}

double NNfunction_sg_sL::synapse0x28a44f0() {
   return (neuron0x2891d90()*0.252166);
}

double NNfunction_sg_sL::synapse0x28a4530() {
   return (neuron0x28920d0()*-0.288782);
}

double NNfunction_sg_sL::synapse0x28a4570() {
   return (neuron0x2892410()*-1.09027);
}

double NNfunction_sg_sL::synapse0x28a45b0() {
   return (neuron0x2892750()*-0.236605);
}

double NNfunction_sg_sL::synapse0x28a45f0() {
   return (neuron0x2892a90()*0.135474);
}

double NNfunction_sg_sL::synapse0x28a4630() {
   return (neuron0x2892dd0()*-0.167376);
}

double NNfunction_sg_sL::synapse0x28a4670() {
   return (neuron0x2893110()*-0.0602415);
}

double NNfunction_sg_sL::synapse0x28a46b0() {
   return (neuron0x2893450()*-0.0666486);
}

double NNfunction_sg_sL::synapse0x28a46f0() {
   return (neuron0x2893790()*-0.130072);
}

double NNfunction_sg_sL::synapse0x28a4730() {
   return (neuron0x2893ad0()*0.179127);
}

double NNfunction_sg_sL::synapse0x28a4770() {
   return (neuron0x2893e10()*-0.122875);
}

double NNfunction_sg_sL::synapse0x28a47b0() {
   return (neuron0x2894150()*-0.837684);
}

double NNfunction_sg_sL::synapse0x28a47f0() {
   return (neuron0x2894490()*0.415186);
}

double NNfunction_sg_sL::synapse0x28a4830() {
   return (neuron0x28947d0()*-0.138921);
}

double NNfunction_sg_sL::synapse0x28a4870() {
   return (neuron0x2894b10()*-0.0514476);
}

double NNfunction_sg_sL::synapse0x28a4300() {
   return (neuron0x2894e50()*-0.211405);
}

double NNfunction_sg_sL::synapse0x28a4340() {
   return (neuron0x28953b0()*-0.165775);
}

double NNfunction_sg_sL::synapse0x28a49c0() {
   return (neuron0x28955d0()*-0.156273);
}

double NNfunction_sg_sL::synapse0x28a4a00() {
   return (neuron0x2895910()*-0.0319276);
}

double NNfunction_sg_sL::synapse0x28a4a40() {
   return (neuron0x2895c50()*-0.019696);
}

double NNfunction_sg_sL::synapse0x28a4a80() {
   return (neuron0x2895f90()*0.0322869);
}

double NNfunction_sg_sL::synapse0x28a4ac0() {
   return (neuron0x28962d0()*-0.085526);
}

double NNfunction_sg_sL::synapse0x28a4b00() {
   return (neuron0x2896610()*-0.119559);
}

double NNfunction_sg_sL::synapse0x28a4e80() {
   return (neuron0x2891ae0()*-0.00179807);
}

double NNfunction_sg_sL::synapse0x28a4ec0() {
   return (neuron0x2891d90()*-0.0322722);
}

double NNfunction_sg_sL::synapse0x28a4f00() {
   return (neuron0x28920d0()*0.865189);
}

double NNfunction_sg_sL::synapse0x28a4f40() {
   return (neuron0x2892410()*-0.0638799);
}

double NNfunction_sg_sL::synapse0x28a4f80() {
   return (neuron0x2892750()*-0.0352396);
}

double NNfunction_sg_sL::synapse0x28a4fc0() {
   return (neuron0x2892a90()*-0.0295909);
}

double NNfunction_sg_sL::synapse0x28a5000() {
   return (neuron0x2892dd0()*-0.0267631);
}

double NNfunction_sg_sL::synapse0x28a5040() {
   return (neuron0x2893110()*0.000435366);
}

double NNfunction_sg_sL::synapse0x28a5080() {
   return (neuron0x2893450()*-0.0334551);
}

double NNfunction_sg_sL::synapse0x28a50c0() {
   return (neuron0x2893790()*-0.0227797);
}

double NNfunction_sg_sL::synapse0x28a5100() {
   return (neuron0x2893ad0()*0.033423);
}

double NNfunction_sg_sL::synapse0x28a5140() {
   return (neuron0x2893e10()*0.043289);
}

double NNfunction_sg_sL::synapse0x28a5180() {
   return (neuron0x2894150()*1.53555);
}

double NNfunction_sg_sL::synapse0x28a51c0() {
   return (neuron0x2894490()*-0.00846885);
}

double NNfunction_sg_sL::synapse0x28a5200() {
   return (neuron0x28947d0()*-0.00842297);
}

double NNfunction_sg_sL::synapse0x28a5240() {
   return (neuron0x2894b10()*0.00874651);
}

double NNfunction_sg_sL::synapse0x28a4cd0() {
   return (neuron0x2894e50()*-0.0398612);
}

double NNfunction_sg_sL::synapse0x28a4d10() {
   return (neuron0x28953b0()*0.0233614);
}

double NNfunction_sg_sL::synapse0x28a5390() {
   return (neuron0x28955d0()*0.0106586);
}

double NNfunction_sg_sL::synapse0x28a53d0() {
   return (neuron0x2895910()*-0.00948937);
}

double NNfunction_sg_sL::synapse0x28a5410() {
   return (neuron0x2895c50()*-0.0188392);
}

double NNfunction_sg_sL::synapse0x28a5450() {
   return (neuron0x2895f90()*-0.0251819);
}

double NNfunction_sg_sL::synapse0x28a5490() {
   return (neuron0x28962d0()*0.0173431);
}

double NNfunction_sg_sL::synapse0x28a54d0() {
   return (neuron0x2896610()*0.0214549);
}

double NNfunction_sg_sL::synapse0x28a5850() {
   return (neuron0x2891ae0()*-0.0213838);
}

double NNfunction_sg_sL::synapse0x28a5890() {
   return (neuron0x2891d90()*0.0498162);
}

double NNfunction_sg_sL::synapse0x28a58d0() {
   return (neuron0x28920d0()*0.192529);
}

double NNfunction_sg_sL::synapse0x28a5910() {
   return (neuron0x2892410()*-1.21245);
}

double NNfunction_sg_sL::synapse0x28a5950() {
   return (neuron0x2892750()*-0.116391);
}

double NNfunction_sg_sL::synapse0x28a5990() {
   return (neuron0x2892a90()*0.0148607);
}

double NNfunction_sg_sL::synapse0x28a59d0() {
   return (neuron0x2892dd0()*0.0101052);
}

double NNfunction_sg_sL::synapse0x28a5a10() {
   return (neuron0x2893110()*0.0219575);
}

double NNfunction_sg_sL::synapse0x28a5a50() {
   return (neuron0x2893450()*-0.397303);
}

double NNfunction_sg_sL::synapse0x28a5a90() {
   return (neuron0x2893790()*-0.186306);
}

double NNfunction_sg_sL::synapse0x28a5ad0() {
   return (neuron0x2893ad0()*0.0493521);
}

double NNfunction_sg_sL::synapse0x28a5b10() {
   return (neuron0x2893e10()*0.0108923);
}

double NNfunction_sg_sL::synapse0x28a5b50() {
   return (neuron0x2894150()*1.76339);
}

double NNfunction_sg_sL::synapse0x28a5b90() {
   return (neuron0x2894490()*0.177898);
}

double NNfunction_sg_sL::synapse0x28a5bd0() {
   return (neuron0x28947d0()*0.326619);
}

double NNfunction_sg_sL::synapse0x28a5c10() {
   return (neuron0x2894b10()*0.101399);
}

double NNfunction_sg_sL::synapse0x28a56a0() {
   return (neuron0x2894e50()*-0.00687329);
}

double NNfunction_sg_sL::synapse0x28a56e0() {
   return (neuron0x28953b0()*0.0440746);
}

double NNfunction_sg_sL::synapse0x28a5d60() {
   return (neuron0x28955d0()*0.040893);
}

double NNfunction_sg_sL::synapse0x28a5da0() {
   return (neuron0x2895910()*-0.22198);
}

double NNfunction_sg_sL::synapse0x28a5de0() {
   return (neuron0x2895c50()*-0.0835284);
}

double NNfunction_sg_sL::synapse0x28a5e20() {
   return (neuron0x2895f90()*-0.038508);
}

double NNfunction_sg_sL::synapse0x28a5e60() {
   return (neuron0x28962d0()*0.0759524);
}

double NNfunction_sg_sL::synapse0x28a5ea0() {
   return (neuron0x2896610()*-0.134777);
}

double NNfunction_sg_sL::synapse0x28a6220() {
   return (neuron0x2891ae0()*-0.00432402);
}

double NNfunction_sg_sL::synapse0x28a6260() {
   return (neuron0x2891d90()*0.00336464);
}

double NNfunction_sg_sL::synapse0x28a62a0() {
   return (neuron0x28920d0()*0.0356523);
}

double NNfunction_sg_sL::synapse0x28a62e0() {
   return (neuron0x2892410()*0.124765);
}

double NNfunction_sg_sL::synapse0x28a6320() {
   return (neuron0x2892750()*-0.00233717);
}

double NNfunction_sg_sL::synapse0x28a6360() {
   return (neuron0x2892a90()*-0.000743211);
}

double NNfunction_sg_sL::synapse0x28a63a0() {
   return (neuron0x2892dd0()*0.00365838);
}

double NNfunction_sg_sL::synapse0x28a63e0() {
   return (neuron0x2893110()*-0.000340586);
}

double NNfunction_sg_sL::synapse0x28a6420() {
   return (neuron0x2893450()*0.0128082);
}

double NNfunction_sg_sL::synapse0x289e5e0() {
   return (neuron0x2893790()*0.0123554);
}

double NNfunction_sg_sL::synapse0x289e620() {
   return (neuron0x2893ad0()*0.00301358);
}

double NNfunction_sg_sL::synapse0x289e660() {
   return (neuron0x2893e10()*0.00865124);
}

double NNfunction_sg_sL::synapse0x289e6a0() {
   return (neuron0x2894150()*-2.90851);
}

double NNfunction_sg_sL::synapse0x289e6e0() {
   return (neuron0x2894490()*-0.00905877);
}

double NNfunction_sg_sL::synapse0x289e720() {
   return (neuron0x28947d0()*-0.00949022);
}

double NNfunction_sg_sL::synapse0x289e760() {
   return (neuron0x2894b10()*-0.00967868);
}

double NNfunction_sg_sL::synapse0x28a6070() {
   return (neuron0x2894e50()*-0.0117337);
}

double NNfunction_sg_sL::synapse0x28a60b0() {
   return (neuron0x28953b0()*0.000602995);
}

double NNfunction_sg_sL::synapse0x289e8b0() {
   return (neuron0x28955d0()*-0.0045439);
}

double NNfunction_sg_sL::synapse0x289e8f0() {
   return (neuron0x2895910()*-0.00198264);
}

double NNfunction_sg_sL::synapse0x289e930() {
   return (neuron0x2895c50()*-0.00948659);
}

double NNfunction_sg_sL::synapse0x289e970() {
   return (neuron0x2895f90()*-0.00377978);
}

double NNfunction_sg_sL::synapse0x289e9b0() {
   return (neuron0x28962d0()*0.000878679);
}

double NNfunction_sg_sL::synapse0x289e9f0() {
   return (neuron0x2896610()*0.00850823);
}

double NNfunction_sg_sL::synapse0x289ed70() {
   return (neuron0x2891ae0()*-0.0114058);
}

double NNfunction_sg_sL::synapse0x289edb0() {
   return (neuron0x2891d90()*-0.0103365);
}

double NNfunction_sg_sL::synapse0x289edf0() {
   return (neuron0x28920d0()*-0.337192);
}

double NNfunction_sg_sL::synapse0x289ee30() {
   return (neuron0x2892410()*-1.11757);
}

double NNfunction_sg_sL::synapse0x289ee70() {
   return (neuron0x2892750()*0.016402);
}

double NNfunction_sg_sL::synapse0x289eeb0() {
   return (neuron0x2892a90()*0.0768822);
}

double NNfunction_sg_sL::synapse0x289eef0() {
   return (neuron0x2892dd0()*-0.0059252);
}

double NNfunction_sg_sL::synapse0x289ef30() {
   return (neuron0x2893110()*-0.0365343);
}

double NNfunction_sg_sL::synapse0x289ef70() {
   return (neuron0x2893450()*-0.0189846);
}

double NNfunction_sg_sL::synapse0x289efb0() {
   return (neuron0x2893790()*-0.0175379);
}

double NNfunction_sg_sL::synapse0x289eff0() {
   return (neuron0x2893ad0()*0.0125236);
}

double NNfunction_sg_sL::synapse0x289f030() {
   return (neuron0x2893e10()*0.236487);
}

double NNfunction_sg_sL::synapse0x289f070() {
   return (neuron0x2894150()*-0.56173);
}

double NNfunction_sg_sL::synapse0x289f0b0() {
   return (neuron0x2894490()*-0.0883023);
}

double NNfunction_sg_sL::synapse0x289f0f0() {
   return (neuron0x28947d0()*0.0826608);
}

double NNfunction_sg_sL::synapse0x289f130() {
   return (neuron0x2894b10()*-0.061819);
}

double NNfunction_sg_sL::synapse0x289ebc0() {
   return (neuron0x2894e50()*-0.138833);
}

double NNfunction_sg_sL::synapse0x289ec00() {
   return (neuron0x28953b0()*0.154474);
}

double NNfunction_sg_sL::synapse0x289f280() {
   return (neuron0x28955d0()*0.0769241);
}

double NNfunction_sg_sL::synapse0x289f2c0() {
   return (neuron0x2895910()*0.0426362);
}

double NNfunction_sg_sL::synapse0x289f300() {
   return (neuron0x2895c50()*0.00214842);
}

double NNfunction_sg_sL::synapse0x289f340() {
   return (neuron0x2895f90()*-0.0334594);
}

double NNfunction_sg_sL::synapse0x289f380() {
   return (neuron0x28962d0()*-0.0138973);
}

double NNfunction_sg_sL::synapse0x289f3c0() {
   return (neuron0x2896610()*-0.0082402);
}

double NNfunction_sg_sL::synapse0x289f590() {
   return (neuron0x2891ae0()*-0.00276169);
}

double NNfunction_sg_sL::synapse0x28a8620() {
   return (neuron0x2891d90()*-0.00257468);
}

double NNfunction_sg_sL::synapse0x28a8660() {
   return (neuron0x28920d0()*0.00563816);
}

double NNfunction_sg_sL::synapse0x28a86a0() {
   return (neuron0x2892410()*0.102511);
}

double NNfunction_sg_sL::synapse0x28a86e0() {
   return (neuron0x2892750()*0.00193427);
}

double NNfunction_sg_sL::synapse0x28a8720() {
   return (neuron0x2892a90()*0.0104046);
}

double NNfunction_sg_sL::synapse0x28a8760() {
   return (neuron0x2892dd0()*-0.00653642);
}

double NNfunction_sg_sL::synapse0x28a87a0() {
   return (neuron0x2893110()*-0.00516014);
}

double NNfunction_sg_sL::synapse0x28a87e0() {
   return (neuron0x2893450()*-0.0435912);
}

double NNfunction_sg_sL::synapse0x28a8820() {
   return (neuron0x2893790()*-0.0573843);
}

double NNfunction_sg_sL::synapse0x28a8860() {
   return (neuron0x2893ad0()*-0.0401234);
}

double NNfunction_sg_sL::synapse0x28a88a0() {
   return (neuron0x2893e10()*-0.0161799);
}

double NNfunction_sg_sL::synapse0x28a88e0() {
   return (neuron0x2894150()*-0.727895);
}

double NNfunction_sg_sL::synapse0x28a8920() {
   return (neuron0x2894490()*-0.01054);
}

double NNfunction_sg_sL::synapse0x28a8960() {
   return (neuron0x28947d0()*0.0148123);
}

double NNfunction_sg_sL::synapse0x28a89a0() {
   return (neuron0x2894b10()*0.00690716);
}

double NNfunction_sg_sL::synapse0x28a8470() {
   return (neuron0x2894e50()*-0.0175869);
}

double NNfunction_sg_sL::synapse0x28a84b0() {
   return (neuron0x28953b0()*-0.0073259);
}

double NNfunction_sg_sL::synapse0x28a8af0() {
   return (neuron0x28955d0()*-0.00808181);
}

double NNfunction_sg_sL::synapse0x28a8b30() {
   return (neuron0x2895910()*-0.0135736);
}

double NNfunction_sg_sL::synapse0x28a8b70() {
   return (neuron0x2895c50()*-0.00182806);
}

double NNfunction_sg_sL::synapse0x28a8bb0() {
   return (neuron0x2895f90()*0.00147022);
}

double NNfunction_sg_sL::synapse0x28a8bf0() {
   return (neuron0x28962d0()*-0.00195973);
}

double NNfunction_sg_sL::synapse0x28a8c30() {
   return (neuron0x2896610()*-0.00117873);
}

double NNfunction_sg_sL::synapse0x28a8fb0() {
   return (neuron0x2891ae0()*0.00377984);
}

double NNfunction_sg_sL::synapse0x28a8ff0() {
   return (neuron0x2891d90()*-0.00563857);
}

double NNfunction_sg_sL::synapse0x28a9030() {
   return (neuron0x28920d0()*-0.219097);
}

double NNfunction_sg_sL::synapse0x28a9070() {
   return (neuron0x2892410()*-0.118587);
}

double NNfunction_sg_sL::synapse0x28a90b0() {
   return (neuron0x2892750()*1.92894e-05);
}

double NNfunction_sg_sL::synapse0x28a90f0() {
   return (neuron0x2892a90()*0.00409685);
}

double NNfunction_sg_sL::synapse0x28a9130() {
   return (neuron0x2892dd0()*0.00691157);
}

double NNfunction_sg_sL::synapse0x28a9170() {
   return (neuron0x2893110()*-0.0109149);
}

double NNfunction_sg_sL::synapse0x28a91b0() {
   return (neuron0x2893450()*0.0126069);
}

double NNfunction_sg_sL::synapse0x28a91f0() {
   return (neuron0x2893790()*-0.0391288);
}

double NNfunction_sg_sL::synapse0x28a9230() {
   return (neuron0x2893ad0()*-0.0196427);
}

double NNfunction_sg_sL::synapse0x28a9270() {
   return (neuron0x2893e10()*0.0183985);
}

double NNfunction_sg_sL::synapse0x28a92b0() {
   return (neuron0x2894150()*1.00251);
}

double NNfunction_sg_sL::synapse0x28a92f0() {
   return (neuron0x2894490()*-0.0217502);
}

double NNfunction_sg_sL::synapse0x28a9330() {
   return (neuron0x28947d0()*0.0180745);
}

double NNfunction_sg_sL::synapse0x28a9370() {
   return (neuron0x2894b10()*0.00115593);
}

double NNfunction_sg_sL::synapse0x28a8e00() {
   return (neuron0x2894e50()*-0.0112139);
}

double NNfunction_sg_sL::synapse0x28a8e40() {
   return (neuron0x28953b0()*0.0153222);
}

double NNfunction_sg_sL::synapse0x28a94c0() {
   return (neuron0x28955d0()*0.0157376);
}

double NNfunction_sg_sL::synapse0x28a9500() {
   return (neuron0x2895910()*0.00786108);
}

double NNfunction_sg_sL::synapse0x28a9540() {
   return (neuron0x2895c50()*0.00510003);
}

double NNfunction_sg_sL::synapse0x28a9580() {
   return (neuron0x2895f90()*0.00572953);
}

double NNfunction_sg_sL::synapse0x28a95c0() {
   return (neuron0x28962d0()*-0.00237985);
}

double NNfunction_sg_sL::synapse0x28a9600() {
   return (neuron0x2896610()*-0.000157502);
}

double NNfunction_sg_sL::synapse0x28a9980() {
   return (neuron0x2891ae0()*-0.00285338);
}

double NNfunction_sg_sL::synapse0x28a99c0() {
   return (neuron0x2891d90()*-0.0203334);
}

double NNfunction_sg_sL::synapse0x28a9a00() {
   return (neuron0x28920d0()*0.071303);
}

double NNfunction_sg_sL::synapse0x28a9a40() {
   return (neuron0x2892410()*1.37415);
}

double NNfunction_sg_sL::synapse0x28a9a80() {
   return (neuron0x2892750()*-0.0132645);
}

double NNfunction_sg_sL::synapse0x28a9ac0() {
   return (neuron0x2892a90()*-0.048728);
}

double NNfunction_sg_sL::synapse0x28a9b00() {
   return (neuron0x2892dd0()*0.0134252);
}

double NNfunction_sg_sL::synapse0x28a9b40() {
   return (neuron0x2893110()*-0.00549043);
}

double NNfunction_sg_sL::synapse0x28a9b80() {
   return (neuron0x2893450()*-0.00730808);
}

double NNfunction_sg_sL::synapse0x28a9bc0() {
   return (neuron0x2893790()*0.0135558);
}

double NNfunction_sg_sL::synapse0x28a9c00() {
   return (neuron0x2893ad0()*0.0216183);
}

double NNfunction_sg_sL::synapse0x28a9c40() {
   return (neuron0x2893e10()*0.372325);
}

double NNfunction_sg_sL::synapse0x28a9c80() {
   return (neuron0x2894150()*0.224037);
}

double NNfunction_sg_sL::synapse0x28a9cc0() {
   return (neuron0x2894490()*-0.026516);
}

double NNfunction_sg_sL::synapse0x28a9d00() {
   return (neuron0x28947d0()*0.143816);
}

double NNfunction_sg_sL::synapse0x28a9d40() {
   return (neuron0x2894b10()*0.181899);
}

double NNfunction_sg_sL::synapse0x28a97d0() {
   return (neuron0x2894e50()*-0.00560853);
}

double NNfunction_sg_sL::synapse0x28a9810() {
   return (neuron0x28953b0()*0.132922);
}

double NNfunction_sg_sL::synapse0x28a9e90() {
   return (neuron0x28955d0()*0.176939);
}

double NNfunction_sg_sL::synapse0x28a9ed0() {
   return (neuron0x2895910()*-0.0145889);
}

double NNfunction_sg_sL::synapse0x28a9f10() {
   return (neuron0x2895c50()*-0.00308043);
}

double NNfunction_sg_sL::synapse0x28a9f50() {
   return (neuron0x2895f90()*0.01005);
}

double NNfunction_sg_sL::synapse0x28a9f90() {
   return (neuron0x28962d0()*0.00308919);
}

double NNfunction_sg_sL::synapse0x28a9fd0() {
   return (neuron0x2896610()*-0.0106571);
}

double NNfunction_sg_sL::synapse0x28aa350() {
   return (neuron0x2891ae0()*0.0163481);
}

double NNfunction_sg_sL::synapse0x28aa390() {
   return (neuron0x2891d90()*-0.235409);
}

double NNfunction_sg_sL::synapse0x28aa3d0() {
   return (neuron0x28920d0()*-0.0727795);
}

double NNfunction_sg_sL::synapse0x28aa410() {
   return (neuron0x2892410()*0.29825);
}

double NNfunction_sg_sL::synapse0x28aa450() {
   return (neuron0x2892750()*0.05636);
}

double NNfunction_sg_sL::synapse0x28aa490() {
   return (neuron0x2892a90()*0.28698);
}

double NNfunction_sg_sL::synapse0x28aa4d0() {
   return (neuron0x2892dd0()*-0.559923);
}

double NNfunction_sg_sL::synapse0x28aa510() {
   return (neuron0x2893110()*-0.416071);
}

double NNfunction_sg_sL::synapse0x28aa550() {
   return (neuron0x2893450()*-0.564475);
}

double NNfunction_sg_sL::synapse0x28aa590() {
   return (neuron0x2893790()*-0.333082);
}

double NNfunction_sg_sL::synapse0x28aa5d0() {
   return (neuron0x2893ad0()*-0.554296);
}

double NNfunction_sg_sL::synapse0x28aa610() {
   return (neuron0x2893e10()*0.162104);
}

double NNfunction_sg_sL::synapse0x28aa650() {
   return (neuron0x2894150()*-0.408855);
}

double NNfunction_sg_sL::synapse0x28aa690() {
   return (neuron0x2894490()*0.0404142);
}

double NNfunction_sg_sL::synapse0x28aa6d0() {
   return (neuron0x28947d0()*-0.274108);
}

double NNfunction_sg_sL::synapse0x28aa710() {
   return (neuron0x2894b10()*-0.12589);
}

double NNfunction_sg_sL::synapse0x28aa1a0() {
   return (neuron0x2894e50()*-0.127517);
}

double NNfunction_sg_sL::synapse0x28aa1e0() {
   return (neuron0x28953b0()*-0.257156);
}

double NNfunction_sg_sL::synapse0x28aa860() {
   return (neuron0x28955d0()*0.0862582);
}

double NNfunction_sg_sL::synapse0x28aa8a0() {
   return (neuron0x2895910()*0.209742);
}

double NNfunction_sg_sL::synapse0x28aa8e0() {
   return (neuron0x2895c50()*0.114467);
}

double NNfunction_sg_sL::synapse0x28aa920() {
   return (neuron0x2895f90()*0.203468);
}

double NNfunction_sg_sL::synapse0x28aa960() {
   return (neuron0x28962d0()*-0.00509);
}

double NNfunction_sg_sL::synapse0x28aa9a0() {
   return (neuron0x2896610()*-0.00382224);
}

double NNfunction_sg_sL::synapse0x28aad20() {
   return (neuron0x2891ae0()*-0.309661);
}

double NNfunction_sg_sL::synapse0x28aad60() {
   return (neuron0x2891d90()*-0.109788);
}

double NNfunction_sg_sL::synapse0x28aada0() {
   return (neuron0x28920d0()*-0.240863);
}

double NNfunction_sg_sL::synapse0x28aade0() {
   return (neuron0x2892410()*-0.605668);
}

double NNfunction_sg_sL::synapse0x28aae20() {
   return (neuron0x2892750()*0.124754);
}

double NNfunction_sg_sL::synapse0x28aae60() {
   return (neuron0x2892a90()*-0.475904);
}

double NNfunction_sg_sL::synapse0x28aaea0() {
   return (neuron0x2892dd0()*-0.0494331);
}

double NNfunction_sg_sL::synapse0x28aaee0() {
   return (neuron0x2893110()*-0.130595);
}

double NNfunction_sg_sL::synapse0x28aaf20() {
   return (neuron0x2893450()*0.17153);
}

double NNfunction_sg_sL::synapse0x28aaf60() {
   return (neuron0x2893790()*-0.189249);
}

double NNfunction_sg_sL::synapse0x28aafa0() {
   return (neuron0x2893ad0()*0.312198);
}

double NNfunction_sg_sL::synapse0x28aafe0() {
   return (neuron0x2893e10()*0.165804);
}

double NNfunction_sg_sL::synapse0x28ab020() {
   return (neuron0x2894150()*-0.208182);
}

double NNfunction_sg_sL::synapse0x28ab060() {
   return (neuron0x2894490()*0.00828546);
}

double NNfunction_sg_sL::synapse0x28ab0a0() {
   return (neuron0x28947d0()*-0.278159);
}

double NNfunction_sg_sL::synapse0x28ab0e0() {
   return (neuron0x2894b10()*0.0261335);
}

double NNfunction_sg_sL::synapse0x28aab70() {
   return (neuron0x2894e50()*0.133324);
}

double NNfunction_sg_sL::synapse0x28aabb0() {
   return (neuron0x28953b0()*-0.169648);
}

double NNfunction_sg_sL::synapse0x28ab230() {
   return (neuron0x28955d0()*-0.358947);
}

double NNfunction_sg_sL::synapse0x28ab270() {
   return (neuron0x2895910()*-0.0545435);
}

double NNfunction_sg_sL::synapse0x28ab2b0() {
   return (neuron0x2895c50()*0.0343074);
}

double NNfunction_sg_sL::synapse0x28ab2f0() {
   return (neuron0x2895f90()*-0.18662);
}

double NNfunction_sg_sL::synapse0x28ab330() {
   return (neuron0x28962d0()*-0.113748);
}

double NNfunction_sg_sL::synapse0x28ab370() {
   return (neuron0x2896610()*0.0780934);
}

double NNfunction_sg_sL::synapse0x28ab6f0() {
   return (neuron0x2891ae0()*-0.0446167);
}

double NNfunction_sg_sL::synapse0x28ab730() {
   return (neuron0x2891d90()*-0.0515141);
}

double NNfunction_sg_sL::synapse0x28ab770() {
   return (neuron0x28920d0()*-0.598346);
}

double NNfunction_sg_sL::synapse0x28ab7b0() {
   return (neuron0x2892410()*1.10024);
}

double NNfunction_sg_sL::synapse0x28ab7f0() {
   return (neuron0x2892750()*0.293147);
}

double NNfunction_sg_sL::synapse0x28ab830() {
   return (neuron0x2892a90()*0.260378);
}

double NNfunction_sg_sL::synapse0x28ab870() {
   return (neuron0x2892dd0()*0.18311);
}

double NNfunction_sg_sL::synapse0x28ab8b0() {
   return (neuron0x2893110()*-0.186692);
}

double NNfunction_sg_sL::synapse0x28ab8f0() {
   return (neuron0x2893450()*-0.330274);
}

double NNfunction_sg_sL::synapse0x28ab930() {
   return (neuron0x2893790()*-0.152346);
}

double NNfunction_sg_sL::synapse0x28ab970() {
   return (neuron0x2893ad0()*0.034127);
}

double NNfunction_sg_sL::synapse0x28ab9b0() {
   return (neuron0x2893e10()*0.385468);
}

double NNfunction_sg_sL::synapse0x28ab9f0() {
   return (neuron0x2894150()*0.239223);
}

double NNfunction_sg_sL::synapse0x28aba30() {
   return (neuron0x2894490()*0.0585764);
}

double NNfunction_sg_sL::synapse0x28aba70() {
   return (neuron0x28947d0()*-0.128673);
}

double NNfunction_sg_sL::synapse0x28abab0() {
   return (neuron0x2894b10()*-0.486346);
}

double NNfunction_sg_sL::synapse0x28ab540() {
   return (neuron0x2894e50()*0.0587978);
}

double NNfunction_sg_sL::synapse0x28ab580() {
   return (neuron0x28953b0()*-0.135628);
}

double NNfunction_sg_sL::synapse0x28abc00() {
   return (neuron0x28955d0()*0.0468832);
}

double NNfunction_sg_sL::synapse0x28abc40() {
   return (neuron0x2895910()*-0.112453);
}

double NNfunction_sg_sL::synapse0x28abc80() {
   return (neuron0x2895c50()*0.132132);
}

double NNfunction_sg_sL::synapse0x28abcc0() {
   return (neuron0x2895f90()*-0.0705829);
}

double NNfunction_sg_sL::synapse0x28abd00() {
   return (neuron0x28962d0()*0.0752252);
}

double NNfunction_sg_sL::synapse0x28abd40() {
   return (neuron0x2896610()*-0.116557);
}

double NNfunction_sg_sL::synapse0x28ac0c0() {
   return (neuron0x2891ae0()*-0.00379461);
}

double NNfunction_sg_sL::synapse0x28ac100() {
   return (neuron0x2891d90()*-0.00372451);
}

double NNfunction_sg_sL::synapse0x28ac140() {
   return (neuron0x28920d0()*0.0444026);
}

double NNfunction_sg_sL::synapse0x28ac180() {
   return (neuron0x2892410()*-0.914427);
}

double NNfunction_sg_sL::synapse0x28ac1c0() {
   return (neuron0x2892750()*0.00423512);
}

double NNfunction_sg_sL::synapse0x28ac200() {
   return (neuron0x2892a90()*0.00136146);
}

double NNfunction_sg_sL::synapse0x28ac240() {
   return (neuron0x2892dd0()*0.000909449);
}

double NNfunction_sg_sL::synapse0x28ac280() {
   return (neuron0x2893110()*-0.00629394);
}

double NNfunction_sg_sL::synapse0x28ac2c0() {
   return (neuron0x2893450()*0.0378531);
}

double NNfunction_sg_sL::synapse0x28ac300() {
   return (neuron0x2893790()*0.00537166);
}

double NNfunction_sg_sL::synapse0x28ac340() {
   return (neuron0x2893ad0()*0.0196633);
}

double NNfunction_sg_sL::synapse0x28ac380() {
   return (neuron0x2893e10()*-0.00936395);
}

double NNfunction_sg_sL::synapse0x28ac3c0() {
   return (neuron0x2894150()*-0.741884);
}

double NNfunction_sg_sL::synapse0x28ac400() {
   return (neuron0x2894490()*-0.0191648);
}

double NNfunction_sg_sL::synapse0x28ac440() {
   return (neuron0x28947d0()*0.0153974);
}

double NNfunction_sg_sL::synapse0x28ac480() {
   return (neuron0x2894b10()*-0.00172071);
}

double NNfunction_sg_sL::synapse0x28abf10() {
   return (neuron0x2894e50()*0.00505096);
}

double NNfunction_sg_sL::synapse0x28abf50() {
   return (neuron0x28953b0()*0.000445692);
}

double NNfunction_sg_sL::synapse0x28ac5d0() {
   return (neuron0x28955d0()*0.00676519);
}

double NNfunction_sg_sL::synapse0x28ac610() {
   return (neuron0x2895910()*-0.000413989);
}

double NNfunction_sg_sL::synapse0x28ac650() {
   return (neuron0x2895c50()*0.00660159);
}

double NNfunction_sg_sL::synapse0x28ac690() {
   return (neuron0x2895f90()*-0.00693328);
}

double NNfunction_sg_sL::synapse0x28ac6d0() {
   return (neuron0x28962d0()*-0.0046325);
}

double NNfunction_sg_sL::synapse0x28ac710() {
   return (neuron0x2896610()*0.00716148);
}

double NNfunction_sg_sL::synapse0x28aca90() {
   return (neuron0x2891ae0()*-0.0073521);
}

double NNfunction_sg_sL::synapse0x28acad0() {
   return (neuron0x2891d90()*-0.00528196);
}

double NNfunction_sg_sL::synapse0x28acb10() {
   return (neuron0x28920d0()*0.0931335);
}

double NNfunction_sg_sL::synapse0x28acb50() {
   return (neuron0x2892410()*0.177603);
}

double NNfunction_sg_sL::synapse0x28acb90() {
   return (neuron0x2892750()*0.0112888);
}

double NNfunction_sg_sL::synapse0x28acbd0() {
   return (neuron0x2892a90()*-0.00130557);
}

double NNfunction_sg_sL::synapse0x28acc10() {
   return (neuron0x2892dd0()*-0.00404057);
}

double NNfunction_sg_sL::synapse0x28acc50() {
   return (neuron0x2893110()*0.00516465);
}

double NNfunction_sg_sL::synapse0x28acc90() {
   return (neuron0x2893450()*-0.0153762);
}

double NNfunction_sg_sL::synapse0x28accd0() {
   return (neuron0x2893790()*-0.0121349);
}

double NNfunction_sg_sL::synapse0x28acd10() {
   return (neuron0x2893ad0()*-0.00275626);
}

double NNfunction_sg_sL::synapse0x28acd50() {
   return (neuron0x2893e10()*-0.00740387);
}

double NNfunction_sg_sL::synapse0x28acd90() {
   return (neuron0x2894150()*1.5028);
}

double NNfunction_sg_sL::synapse0x28acdd0() {
   return (neuron0x2894490()*-0.00429088);
}

double NNfunction_sg_sL::synapse0x28ace10() {
   return (neuron0x28947d0()*0.0154849);
}

double NNfunction_sg_sL::synapse0x28ace50() {
   return (neuron0x2894b10()*0.0164365);
}

double NNfunction_sg_sL::synapse0x28ac8e0() {
   return (neuron0x2894e50()*-0.00203229);
}

double NNfunction_sg_sL::synapse0x28ac920() {
   return (neuron0x28953b0()*-0.0123285);
}

double NNfunction_sg_sL::synapse0x28acfa0() {
   return (neuron0x28955d0()*-0.00287555);
}

double NNfunction_sg_sL::synapse0x28acfe0() {
   return (neuron0x2895910()*-0.00335113);
}

double NNfunction_sg_sL::synapse0x28ad020() {
   return (neuron0x2895c50()*0.00546099);
}

double NNfunction_sg_sL::synapse0x28ad060() {
   return (neuron0x2895f90()*-0.00325723);
}

double NNfunction_sg_sL::synapse0x28ad0a0() {
   return (neuron0x28962d0()*-0.00152063);
}

double NNfunction_sg_sL::synapse0x28ad0e0() {
   return (neuron0x2896610()*0.00707268);
}

double NNfunction_sg_sL::synapse0x28ad460() {
   return (neuron0x2891ae0()*0.0179094);
}

double NNfunction_sg_sL::synapse0x28a1a30() {
   return (neuron0x2891d90()*0.0231191);
}

double NNfunction_sg_sL::synapse0x28a1a70() {
   return (neuron0x28920d0()*-0.0945068);
}

double NNfunction_sg_sL::synapse0x28a1ab0() {
   return (neuron0x2892410()*-1.89755);
}

double NNfunction_sg_sL::synapse0x28a1d00() {
   return (neuron0x2892750()*-0.0223344);
}

double NNfunction_sg_sL::synapse0x28a1d40() {
   return (neuron0x2892a90()*-0.0182579);
}

double NNfunction_sg_sL::synapse0x28a1d80() {
   return (neuron0x2892dd0()*-0.0309498);
}

double NNfunction_sg_sL::synapse0x28a1fd0() {
   return (neuron0x2893110()*-0.00567807);
}

double NNfunction_sg_sL::synapse0x28a2010() {
   return (neuron0x2893450()*-0.0470475);
}

double NNfunction_sg_sL::synapse0x28a2260() {
   return (neuron0x2893790()*0.00371273);
}

double NNfunction_sg_sL::synapse0x28a22a0() {
   return (neuron0x2893ad0()*0.00835683);
}

double NNfunction_sg_sL::synapse0x28a22e0() {
   return (neuron0x2893e10()*-0.0700294);
}

double NNfunction_sg_sL::synapse0x28a2530() {
   return (neuron0x2894150()*2.19192);
}

double NNfunction_sg_sL::synapse0x28a2570() {
   return (neuron0x2894490()*0.0504272);
}

double NNfunction_sg_sL::synapse0x28a27c0() {
   return (neuron0x28947d0()*-0.0501994);
}

double NNfunction_sg_sL::synapse0x28a2800() {
   return (neuron0x2894b10()*-0.0219394);
}

double NNfunction_sg_sL::synapse0x28ad2b0() {
   return (neuron0x2894e50()*0.0253687);
}

double NNfunction_sg_sL::synapse0x28ad2f0() {
   return (neuron0x28953b0()*-0.0358391);
}

double NNfunction_sg_sL::synapse0x28a2950() {
   return (neuron0x28955d0()*-0.00800668);
}

double NNfunction_sg_sL::synapse0x28a2e60() {
   return (neuron0x2895910()*-0.0138255);
}

double NNfunction_sg_sL::synapse0x28a2ea0() {
   return (neuron0x2895c50()*-0.0175343);
}

double NNfunction_sg_sL::synapse0x28a2ee0() {
   return (neuron0x2895f90()*-0.00863581);
}

double NNfunction_sg_sL::synapse0x28a3130() {
   return (neuron0x28962d0()*0.0115609);
}

double NNfunction_sg_sL::synapse0x28a3170() {
   return (neuron0x2896610()*-0.0119232);
}

double NNfunction_sg_sL::synapse0x28a2a20() {
   return (neuron0x2891ae0()*0.0370867);
}

double NNfunction_sg_sL::synapse0x28a2a60() {
   return (neuron0x2891d90()*0.176517);
}

double NNfunction_sg_sL::synapse0x28a2aa0() {
   return (neuron0x28920d0()*0.0554483);
}

double NNfunction_sg_sL::synapse0x28a2ae0() {
   return (neuron0x2892410()*1.13428);
}

double NNfunction_sg_sL::synapse0x28a3460() {
   return (neuron0x2892750()*-0.334777);
}

double NNfunction_sg_sL::synapse0x28af7b0() {
   return (neuron0x2892a90()*-0.316364);
}

double NNfunction_sg_sL::synapse0x28af7f0() {
   return (neuron0x2892dd0()*0.0322628);
}

double NNfunction_sg_sL::synapse0x28af830() {
   return (neuron0x2893110()*-0.405302);
}

double NNfunction_sg_sL::synapse0x28af870() {
   return (neuron0x2893450()*0.120786);
}

double NNfunction_sg_sL::synapse0x28af8b0() {
   return (neuron0x2893790()*0.369851);
}

double NNfunction_sg_sL::synapse0x28af8f0() {
   return (neuron0x2893ad0()*0.293138);
}

double NNfunction_sg_sL::synapse0x28af930() {
   return (neuron0x2893e10()*-0.262455);
}

double NNfunction_sg_sL::synapse0x28af970() {
   return (neuron0x2894150()*-0.621687);
}

double NNfunction_sg_sL::synapse0x28af9b0() {
   return (neuron0x2894490()*0.469611);
}

double NNfunction_sg_sL::synapse0x28af9f0() {
   return (neuron0x28947d0()*0.014031);
}

double NNfunction_sg_sL::synapse0x28afa30() {
   return (neuron0x2894b10()*-0.0467733);
}

double NNfunction_sg_sL::synapse0x28a3340() {
   return (neuron0x2894e50()*0.430087);
}

double NNfunction_sg_sL::synapse0x28a3380() {
   return (neuron0x28953b0()*0.119265);
}

double NNfunction_sg_sL::synapse0x28afb80() {
   return (neuron0x28955d0()*-0.274746);
}

double NNfunction_sg_sL::synapse0x28afbc0() {
   return (neuron0x2895910()*0.161564);
}

double NNfunction_sg_sL::synapse0x28afc00() {
   return (neuron0x2895c50()*-0.0899193);
}

double NNfunction_sg_sL::synapse0x28afc40() {
   return (neuron0x2895f90()*0.0835417);
}

double NNfunction_sg_sL::synapse0x28afc80() {
   return (neuron0x28962d0()*-0.0368295);
}

double NNfunction_sg_sL::synapse0x28afcc0() {
   return (neuron0x2896610()*0.210142);
}

double NNfunction_sg_sL::synapse0x28b0040() {
   return (neuron0x2891ae0()*0.000738329);
}

double NNfunction_sg_sL::synapse0x28b0080() {
   return (neuron0x2891d90()*-0.0117068);
}

double NNfunction_sg_sL::synapse0x28b00c0() {
   return (neuron0x28920d0()*0.374288);
}

double NNfunction_sg_sL::synapse0x28b0100() {
   return (neuron0x2892410()*-0.972499);
}

double NNfunction_sg_sL::synapse0x28b0140() {
   return (neuron0x2892750()*0.00103769);
}

double NNfunction_sg_sL::synapse0x28b0180() {
   return (neuron0x2892a90()*0.00617709);
}

double NNfunction_sg_sL::synapse0x28b01c0() {
   return (neuron0x2892dd0()*0.0199186);
}

double NNfunction_sg_sL::synapse0x28b0200() {
   return (neuron0x2893110()*0.00520327);
}

double NNfunction_sg_sL::synapse0x28b0240() {
   return (neuron0x2893450()*-0.0178068);
}

double NNfunction_sg_sL::synapse0x28b0280() {
   return (neuron0x2893790()*-0.00184271);
}

double NNfunction_sg_sL::synapse0x28b02c0() {
   return (neuron0x2893ad0()*-0.000200703);
}

double NNfunction_sg_sL::synapse0x28b0300() {
   return (neuron0x2893e10()*-0.0010703);
}

double NNfunction_sg_sL::synapse0x28b0340() {
   return (neuron0x2894150()*-0.441299);
}

double NNfunction_sg_sL::synapse0x28b0380() {
   return (neuron0x2894490()*0.0127864);
}

double NNfunction_sg_sL::synapse0x28b03c0() {
   return (neuron0x28947d0()*0.0186384);
}

double NNfunction_sg_sL::synapse0x28b0400() {
   return (neuron0x2894b10()*0.0239894);
}

double NNfunction_sg_sL::synapse0x28afe90() {
   return (neuron0x2894e50()*0.0187844);
}

double NNfunction_sg_sL::synapse0x28afed0() {
   return (neuron0x28953b0()*-0.0146899);
}

double NNfunction_sg_sL::synapse0x28b0550() {
   return (neuron0x28955d0()*-0.00713701);
}

double NNfunction_sg_sL::synapse0x28b0590() {
   return (neuron0x2895910()*-0.0138337);
}

double NNfunction_sg_sL::synapse0x28b05d0() {
   return (neuron0x2895c50()*0.0121048);
}

double NNfunction_sg_sL::synapse0x28b0610() {
   return (neuron0x2895f90()*0.0121089);
}

double NNfunction_sg_sL::synapse0x28b0650() {
   return (neuron0x28962d0()*-0.00751517);
}

double NNfunction_sg_sL::synapse0x28b0690() {
   return (neuron0x2896610()*0.00408764);
}

double NNfunction_sg_sL::synapse0x28b0a10() {
   return (neuron0x2891ae0()*0.0013135);
}

double NNfunction_sg_sL::synapse0x28b0a50() {
   return (neuron0x2891d90()*0.00593929);
}

double NNfunction_sg_sL::synapse0x28b0a90() {
   return (neuron0x28920d0()*0.0389822);
}

double NNfunction_sg_sL::synapse0x28b0ad0() {
   return (neuron0x2892410()*-1.98238);
}

double NNfunction_sg_sL::synapse0x28b0b10() {
   return (neuron0x2892750()*-0.00536759);
}

double NNfunction_sg_sL::synapse0x28b0b50() {
   return (neuron0x2892a90()*-0.00814959);
}

double NNfunction_sg_sL::synapse0x28b0b90() {
   return (neuron0x2892dd0()*-0.00391161);
}

double NNfunction_sg_sL::synapse0x28b0bd0() {
   return (neuron0x2893110()*0.000821989);
}

double NNfunction_sg_sL::synapse0x28b0c10() {
   return (neuron0x2893450()*0.00715623);
}

double NNfunction_sg_sL::synapse0x28b0c50() {
   return (neuron0x2893790()*0.0112657);
}

double NNfunction_sg_sL::synapse0x28b0c90() {
   return (neuron0x2893ad0()*0.00862093);
}

double NNfunction_sg_sL::synapse0x28b0cd0() {
   return (neuron0x2893e10()*-0.0195108);
}

double NNfunction_sg_sL::synapse0x28b0d10() {
   return (neuron0x2894150()*-0.215225);
}

double NNfunction_sg_sL::synapse0x28b0d50() {
   return (neuron0x2894490()*-0.00911119);
}

double NNfunction_sg_sL::synapse0x28b0d90() {
   return (neuron0x28947d0()*-0.0263865);
}

double NNfunction_sg_sL::synapse0x28b0dd0() {
   return (neuron0x2894b10()*-0.0173708);
}

double NNfunction_sg_sL::synapse0x28b0860() {
   return (neuron0x2894e50()*-0.00558207);
}

double NNfunction_sg_sL::synapse0x28b08a0() {
   return (neuron0x28953b0()*-0.0094607);
}

double NNfunction_sg_sL::synapse0x28b0f20() {
   return (neuron0x28955d0()*-0.0114732);
}

double NNfunction_sg_sL::synapse0x28b0f60() {
   return (neuron0x2895910()*0.000812492);
}

double NNfunction_sg_sL::synapse0x28b0fa0() {
   return (neuron0x2895c50()*-0.00276347);
}

double NNfunction_sg_sL::synapse0x28b0fe0() {
   return (neuron0x2895f90()*-0.00182808);
}

double NNfunction_sg_sL::synapse0x28b1020() {
   return (neuron0x28962d0()*0.00333819);
}

double NNfunction_sg_sL::synapse0x28b1060() {
   return (neuron0x2896610()*0.000892545);
}

double NNfunction_sg_sL::synapse0x28b13e0() {
   return (neuron0x2891ae0()*0.0290136);
}

double NNfunction_sg_sL::synapse0x28b1420() {
   return (neuron0x2891d90()*0.0870495);
}

double NNfunction_sg_sL::synapse0x28b1460() {
   return (neuron0x28920d0()*-0.0688716);
}

double NNfunction_sg_sL::synapse0x28b14a0() {
   return (neuron0x2892410()*2.16778);
}

double NNfunction_sg_sL::synapse0x28b14e0() {
   return (neuron0x2892750()*-0.0017816);
}

double NNfunction_sg_sL::synapse0x28b1520() {
   return (neuron0x2892a90()*0.0882057);
}

double NNfunction_sg_sL::synapse0x28b1560() {
   return (neuron0x2892dd0()*-0.0559124);
}

double NNfunction_sg_sL::synapse0x28b15a0() {
   return (neuron0x2893110()*0.0762634);
}

double NNfunction_sg_sL::synapse0x28b15e0() {
   return (neuron0x2893450()*0.0170682);
}

double NNfunction_sg_sL::synapse0x28b1620() {
   return (neuron0x2893790()*-0.0395444);
}

double NNfunction_sg_sL::synapse0x28b1660() {
   return (neuron0x2893ad0()*-0.00543123);
}

double NNfunction_sg_sL::synapse0x28b16a0() {
   return (neuron0x2893e10()*0.119996);
}

double NNfunction_sg_sL::synapse0x28b16e0() {
   return (neuron0x2894150()*-0.0130391);
}

double NNfunction_sg_sL::synapse0x28b1720() {
   return (neuron0x2894490()*-0.0419095);
}

double NNfunction_sg_sL::synapse0x28b1760() {
   return (neuron0x28947d0()*0.417674);
}

double NNfunction_sg_sL::synapse0x28b17a0() {
   return (neuron0x2894b10()*-0.0726956);
}

double NNfunction_sg_sL::synapse0x28b1230() {
   return (neuron0x2894e50()*-0.165149);
}

double NNfunction_sg_sL::synapse0x28b1270() {
   return (neuron0x28953b0()*0.0937263);
}

double NNfunction_sg_sL::synapse0x28b18f0() {
   return (neuron0x28955d0()*-0.00136998);
}

double NNfunction_sg_sL::synapse0x28b1930() {
   return (neuron0x2895910()*0.0261824);
}

double NNfunction_sg_sL::synapse0x28b1970() {
   return (neuron0x2895c50()*0.00883777);
}

double NNfunction_sg_sL::synapse0x28b19b0() {
   return (neuron0x2895f90()*0.0318124);
}

double NNfunction_sg_sL::synapse0x28b19f0() {
   return (neuron0x28962d0()*-0.00348502);
}

double NNfunction_sg_sL::synapse0x28b1a30() {
   return (neuron0x2896610()*0.0418382);
}

double NNfunction_sg_sL::synapse0x28b1db0() {
   return (neuron0x2891ae0()*-0.00418773);
}

double NNfunction_sg_sL::synapse0x28b1df0() {
   return (neuron0x2891d90()*0.000457876);
}

double NNfunction_sg_sL::synapse0x28b1e30() {
   return (neuron0x28920d0()*-0.0460681);
}

double NNfunction_sg_sL::synapse0x28b1e70() {
   return (neuron0x2892410()*-2.16439);
}

double NNfunction_sg_sL::synapse0x28b1eb0() {
   return (neuron0x2892750()*-0.000832356);
}

double NNfunction_sg_sL::synapse0x28b1ef0() {
   return (neuron0x2892a90()*0.000352107);
}

double NNfunction_sg_sL::synapse0x28b1f30() {
   return (neuron0x2892dd0()*-0.0122086);
}

double NNfunction_sg_sL::synapse0x28b1f70() {
   return (neuron0x2893110()*-0.000848146);
}

double NNfunction_sg_sL::synapse0x28b1fb0() {
   return (neuron0x2893450()*-3.59215e-06);
}

double NNfunction_sg_sL::synapse0x28b1ff0() {
   return (neuron0x2893790()*-0.0119707);
}

double NNfunction_sg_sL::synapse0x28b2030() {
   return (neuron0x2893ad0()*0.0066837);
}

double NNfunction_sg_sL::synapse0x28b2070() {
   return (neuron0x2893e10()*-0.0812078);
}

double NNfunction_sg_sL::synapse0x28b20b0() {
   return (neuron0x2894150()*0.312355);
}

double NNfunction_sg_sL::synapse0x28b20f0() {
   return (neuron0x2894490()*5.77121e-05);
}

double NNfunction_sg_sL::synapse0x28b2130() {
   return (neuron0x28947d0()*0.00492806);
}

double NNfunction_sg_sL::synapse0x28b2170() {
   return (neuron0x2894b10()*-0.00895166);
}

double NNfunction_sg_sL::synapse0x28b1c00() {
   return (neuron0x2894e50()*0.026196);
}

double NNfunction_sg_sL::synapse0x28b1c40() {
   return (neuron0x28953b0()*-0.0339086);
}

double NNfunction_sg_sL::synapse0x28b22c0() {
   return (neuron0x28955d0()*-0.015472);
}

double NNfunction_sg_sL::synapse0x28b2300() {
   return (neuron0x2895910()*-0.0191317);
}

double NNfunction_sg_sL::synapse0x28b2340() {
   return (neuron0x2895c50()*0.0153282);
}

double NNfunction_sg_sL::synapse0x28b2380() {
   return (neuron0x2895f90()*0.00325221);
}

double NNfunction_sg_sL::synapse0x28b23c0() {
   return (neuron0x28962d0()*0.00713327);
}

double NNfunction_sg_sL::synapse0x28b2400() {
   return (neuron0x2896610()*-0.00151376);
}

double NNfunction_sg_sL::synapse0x28b2780() {
   return (neuron0x2891ae0()*-0.00545807);
}

double NNfunction_sg_sL::synapse0x28b27c0() {
   return (neuron0x2891d90()*0.010936);
}

double NNfunction_sg_sL::synapse0x28b2800() {
   return (neuron0x28920d0()*-0.255504);
}

double NNfunction_sg_sL::synapse0x28b2840() {
   return (neuron0x2892410()*-3.36434);
}

double NNfunction_sg_sL::synapse0x28b2880() {
   return (neuron0x2892750()*-0.00796004);
}

double NNfunction_sg_sL::synapse0x28b28c0() {
   return (neuron0x2892a90()*0.00546456);
}

double NNfunction_sg_sL::synapse0x28b2900() {
   return (neuron0x2892dd0()*-0.0110981);
}

double NNfunction_sg_sL::synapse0x28b2940() {
   return (neuron0x2893110()*-0.00081744);
}

double NNfunction_sg_sL::synapse0x28b2980() {
   return (neuron0x2893450()*-0.0062614);
}

double NNfunction_sg_sL::synapse0x28b29c0() {
   return (neuron0x2893790()*-0.00958316);
}

double NNfunction_sg_sL::synapse0x28b2a00() {
   return (neuron0x2893ad0()*-0.0113422);
}

double NNfunction_sg_sL::synapse0x28b2a40() {
   return (neuron0x2893e10()*0.0150234);
}

double NNfunction_sg_sL::synapse0x28b2a80() {
   return (neuron0x2894150()*-0.00946917);
}

double NNfunction_sg_sL::synapse0x28b2ac0() {
   return (neuron0x2894490()*-0.0194661);
}

double NNfunction_sg_sL::synapse0x28b2b00() {
   return (neuron0x28947d0()*-0.00152158);
}

double NNfunction_sg_sL::synapse0x28b2b40() {
   return (neuron0x2894b10()*-0.0471499);
}

double NNfunction_sg_sL::synapse0x28b25d0() {
   return (neuron0x2894e50()*-0.0757105);
}

double NNfunction_sg_sL::synapse0x28b2610() {
   return (neuron0x28953b0()*0.0160197);
}

double NNfunction_sg_sL::synapse0x28b2c90() {
   return (neuron0x28955d0()*-0.0093757);
}

double NNfunction_sg_sL::synapse0x28b2cd0() {
   return (neuron0x2895910()*0.0156434);
}

double NNfunction_sg_sL::synapse0x28b2d10() {
   return (neuron0x2895c50()*-0.0201628);
}

double NNfunction_sg_sL::synapse0x28b2d50() {
   return (neuron0x2895f90()*-0.00263998);
}

double NNfunction_sg_sL::synapse0x28b2d90() {
   return (neuron0x28962d0()*-0.00309134);
}

double NNfunction_sg_sL::synapse0x28b2dd0() {
   return (neuron0x2896610()*0.00795584);
}

double NNfunction_sg_sL::synapse0x28b3150() {
   return (neuron0x2891ae0()*-0.00350325);
}

double NNfunction_sg_sL::synapse0x28b3190() {
   return (neuron0x2891d90()*-0.000953285);
}

double NNfunction_sg_sL::synapse0x28b31d0() {
   return (neuron0x28920d0()*0.798727);
}

double NNfunction_sg_sL::synapse0x28b3210() {
   return (neuron0x2892410()*0.310012);
}

double NNfunction_sg_sL::synapse0x28b3250() {
   return (neuron0x2892750()*0.0102956);
}

double NNfunction_sg_sL::synapse0x28b3290() {
   return (neuron0x2892a90()*0.0250128);
}

double NNfunction_sg_sL::synapse0x28b32d0() {
   return (neuron0x2892dd0()*0.00542008);
}

double NNfunction_sg_sL::synapse0x28b3310() {
   return (neuron0x2893110()*0.00118667);
}

double NNfunction_sg_sL::synapse0x28b3350() {
   return (neuron0x2893450()*0.0168627);
}

double NNfunction_sg_sL::synapse0x28b3390() {
   return (neuron0x2893790()*0.0152466);
}

double NNfunction_sg_sL::synapse0x28b33d0() {
   return (neuron0x2893ad0()*0.00760671);
}

double NNfunction_sg_sL::synapse0x28b3410() {
   return (neuron0x2893e10()*0.0189758);
}

double NNfunction_sg_sL::synapse0x28b3450() {
   return (neuron0x2894150()*-0.389797);
}

double NNfunction_sg_sL::synapse0x28b3490() {
   return (neuron0x2894490()*0.0135518);
}

double NNfunction_sg_sL::synapse0x28b34d0() {
   return (neuron0x28947d0()*0.0218497);
}

double NNfunction_sg_sL::synapse0x28b3510() {
   return (neuron0x2894b10()*-0.00327735);
}

double NNfunction_sg_sL::synapse0x28b2fa0() {
   return (neuron0x2894e50()*-7.29338e-05);
}

double NNfunction_sg_sL::synapse0x28b2fe0() {
   return (neuron0x28953b0()*0.00804321);
}

double NNfunction_sg_sL::synapse0x28b3660() {
   return (neuron0x28955d0()*-0.00777895);
}

double NNfunction_sg_sL::synapse0x28b36a0() {
   return (neuron0x2895910()*-0.00231896);
}

double NNfunction_sg_sL::synapse0x28b36e0() {
   return (neuron0x2895c50()*-0.00124278);
}

double NNfunction_sg_sL::synapse0x28b3720() {
   return (neuron0x2895f90()*0.00601135);
}

double NNfunction_sg_sL::synapse0x28b3760() {
   return (neuron0x28962d0()*-0.00754777);
}

double NNfunction_sg_sL::synapse0x28b37a0() {
   return (neuron0x2896610()*0.0127525);
}

double NNfunction_sg_sL::synapse0x28b3b20() {
   return (neuron0x2891ae0()*0.260107);
}

double NNfunction_sg_sL::synapse0x28b3b60() {
   return (neuron0x2891d90()*-0.239742);
}

double NNfunction_sg_sL::synapse0x28b3ba0() {
   return (neuron0x28920d0()*-0.501976);
}

double NNfunction_sg_sL::synapse0x28b3be0() {
   return (neuron0x2892410()*0.237217);
}

double NNfunction_sg_sL::synapse0x28b3c20() {
   return (neuron0x2892750()*0.341159);
}

double NNfunction_sg_sL::synapse0x28b3c60() {
   return (neuron0x2892a90()*0.153581);
}

double NNfunction_sg_sL::synapse0x28b3ca0() {
   return (neuron0x2892dd0()*-0.308803);
}

double NNfunction_sg_sL::synapse0x28b3ce0() {
   return (neuron0x2893110()*0.125405);
}

double NNfunction_sg_sL::synapse0x28b3d20() {
   return (neuron0x2893450()*-0.0554259);
}

double NNfunction_sg_sL::synapse0x28b3d60() {
   return (neuron0x2893790()*0.104445);
}

double NNfunction_sg_sL::synapse0x28b3da0() {
   return (neuron0x2893ad0()*0.263324);
}

double NNfunction_sg_sL::synapse0x28b3de0() {
   return (neuron0x2893e10()*-0.110686);
}

double NNfunction_sg_sL::synapse0x28b3e20() {
   return (neuron0x2894150()*0.32861);
}

double NNfunction_sg_sL::synapse0x28b3e60() {
   return (neuron0x2894490()*0.240843);
}

double NNfunction_sg_sL::synapse0x28b3ea0() {
   return (neuron0x28947d0()*0.0639487);
}

double NNfunction_sg_sL::synapse0x28b3ee0() {
   return (neuron0x2894b10()*0.00730523);
}

double NNfunction_sg_sL::synapse0x28b3970() {
   return (neuron0x2894e50()*-0.221715);
}

double NNfunction_sg_sL::synapse0x28b39b0() {
   return (neuron0x28953b0()*0.13953);
}

double NNfunction_sg_sL::synapse0x28b4030() {
   return (neuron0x28955d0()*-0.299906);
}

double NNfunction_sg_sL::synapse0x28b4070() {
   return (neuron0x2895910()*-0.426437);
}

double NNfunction_sg_sL::synapse0x28b40b0() {
   return (neuron0x2895c50()*0.0801662);
}

double NNfunction_sg_sL::synapse0x28b40f0() {
   return (neuron0x2895f90()*-0.346329);
}

double NNfunction_sg_sL::synapse0x28b4130() {
   return (neuron0x28962d0()*-0.128859);
}

double NNfunction_sg_sL::synapse0x28b4170() {
   return (neuron0x2896610()*0.392379);
}

double NNfunction_sg_sL::synapse0x289cc20() {
   return (neuron0x2891ae0()*-0.096292);
}

double NNfunction_sg_sL::synapse0x289cc60() {
   return (neuron0x2891d90()*-0.0660507);
}

double NNfunction_sg_sL::synapse0x289cca0() {
   return (neuron0x28920d0()*-0.132185);
}

double NNfunction_sg_sL::synapse0x289cce0() {
   return (neuron0x2892410()*0.344564);
}

double NNfunction_sg_sL::synapse0x289cd20() {
   return (neuron0x2892750()*-0.0619989);
}

double NNfunction_sg_sL::synapse0x289cd60() {
   return (neuron0x2892a90()*-0.0440255);
}

double NNfunction_sg_sL::synapse0x289cda0() {
   return (neuron0x2892dd0()*0.299984);
}

double NNfunction_sg_sL::synapse0x289cde0() {
   return (neuron0x2893110()*0.138313);
}

double NNfunction_sg_sL::synapse0x28b4900() {
   return (neuron0x2893450()*0.19333);
}

double NNfunction_sg_sL::synapse0x28b4940() {
   return (neuron0x2893790()*0.117321);
}

double NNfunction_sg_sL::synapse0x28b4980() {
   return (neuron0x2893ad0()*0.200542);
}

double NNfunction_sg_sL::synapse0x28b49c0() {
   return (neuron0x2893e10()*0.0257837);
}

double NNfunction_sg_sL::synapse0x28b4a00() {
   return (neuron0x2894150()*0.254289);
}

double NNfunction_sg_sL::synapse0x28b4a40() {
   return (neuron0x2894490()*0.172934);
}

double NNfunction_sg_sL::synapse0x28b4a80() {
   return (neuron0x28947d0()*-0.0558345);
}

double NNfunction_sg_sL::synapse0x28b4ac0() {
   return (neuron0x2894b10()*-0.066814);
}

double NNfunction_sg_sL::synapse0x28b4340() {
   return (neuron0x2894e50()*0.50479);
}

double NNfunction_sg_sL::synapse0x28b4380() {
   return (neuron0x28953b0()*-0.0431757);
}

double NNfunction_sg_sL::synapse0x28b4c10() {
   return (neuron0x28955d0()*0.193469);
}

double NNfunction_sg_sL::synapse0x28b4c50() {
   return (neuron0x2895910()*0.0493744);
}

double NNfunction_sg_sL::synapse0x28b4c90() {
   return (neuron0x2895c50()*0.133305);
}

double NNfunction_sg_sL::synapse0x28b4cd0() {
   return (neuron0x2895f90()*-0.0861653);
}

double NNfunction_sg_sL::synapse0x28b4d10() {
   return (neuron0x28962d0()*-0.0862597);
}

double NNfunction_sg_sL::synapse0x28b4d50() {
   return (neuron0x2896610()*0.212476);
}

double NNfunction_sg_sL::synapse0x28b50d0() {
   return (neuron0x2891ae0()*0.0500891);
}

double NNfunction_sg_sL::synapse0x28b5110() {
   return (neuron0x2891d90()*-0.123184);
}

double NNfunction_sg_sL::synapse0x28b5150() {
   return (neuron0x28920d0()*0.177771);
}

double NNfunction_sg_sL::synapse0x28b5190() {
   return (neuron0x2892410()*-0.453195);
}

double NNfunction_sg_sL::synapse0x28b51d0() {
   return (neuron0x2892750()*-0.341835);
}

double NNfunction_sg_sL::synapse0x28b5210() {
   return (neuron0x2892a90()*0.290063);
}

double NNfunction_sg_sL::synapse0x28b5250() {
   return (neuron0x2892dd0()*0.13096);
}

double NNfunction_sg_sL::synapse0x28b5290() {
   return (neuron0x2893110()*0.705715);
}

double NNfunction_sg_sL::synapse0x28b52d0() {
   return (neuron0x2893450()*0.008642);
}

double NNfunction_sg_sL::synapse0x28b5310() {
   return (neuron0x2893790()*-0.09482);
}

double NNfunction_sg_sL::synapse0x28b5350() {
   return (neuron0x2893ad0()*0.447223);
}

double NNfunction_sg_sL::synapse0x28b5390() {
   return (neuron0x2893e10()*-0.315201);
}

double NNfunction_sg_sL::synapse0x28b53d0() {
   return (neuron0x2894150()*-0.407494);
}

double NNfunction_sg_sL::synapse0x28b5410() {
   return (neuron0x2894490()*0.277621);
}

double NNfunction_sg_sL::synapse0x28b5450() {
   return (neuron0x28947d0()*-0.387305);
}

double NNfunction_sg_sL::synapse0x28b5490() {
   return (neuron0x2894b10()*-0.452551);
}

double NNfunction_sg_sL::synapse0x28b4f20() {
   return (neuron0x2894e50()*0.129389);
}

double NNfunction_sg_sL::synapse0x28b4f60() {
   return (neuron0x28953b0()*-0.353482);
}

double NNfunction_sg_sL::synapse0x28b55e0() {
   return (neuron0x28955d0()*-0.0539573);
}

double NNfunction_sg_sL::synapse0x28b5620() {
   return (neuron0x2895910()*0.172987);
}

double NNfunction_sg_sL::synapse0x28b5660() {
   return (neuron0x2895c50()*0.263455);
}

double NNfunction_sg_sL::synapse0x28b56a0() {
   return (neuron0x2895f90()*0.31849);
}

double NNfunction_sg_sL::synapse0x28b56e0() {
   return (neuron0x28962d0()*-0.314032);
}

double NNfunction_sg_sL::synapse0x28b5720() {
   return (neuron0x2896610()*0.0693764);
}

double NNfunction_sg_sL::synapse0x28b5aa0() {
   return (neuron0x2891ae0()*0.0103269);
}

double NNfunction_sg_sL::synapse0x28b5ae0() {
   return (neuron0x2891d90()*0.0047531);
}

double NNfunction_sg_sL::synapse0x28b5b20() {
   return (neuron0x28920d0()*-0.0209388);
}

double NNfunction_sg_sL::synapse0x28b5b60() {
   return (neuron0x2892410()*11.4025);
}

double NNfunction_sg_sL::synapse0x28b5ba0() {
   return (neuron0x2892750()*-0.00375864);
}

double NNfunction_sg_sL::synapse0x28b5be0() {
   return (neuron0x2892a90()*-0.00418196);
}

double NNfunction_sg_sL::synapse0x28b5c20() {
   return (neuron0x2892dd0()*0.00199132);
}

double NNfunction_sg_sL::synapse0x28b5c60() {
   return (neuron0x2893110()*0.00786452);
}

double NNfunction_sg_sL::synapse0x28b5ca0() {
   return (neuron0x2893450()*-0.00408815);
}

double NNfunction_sg_sL::synapse0x28b5ce0() {
   return (neuron0x2893790()*0.00887499);
}

double NNfunction_sg_sL::synapse0x28b5d20() {
   return (neuron0x2893ad0()*0.00809148);
}

double NNfunction_sg_sL::synapse0x28b5d60() {
   return (neuron0x2893e10()*-0.00451676);
}

double NNfunction_sg_sL::synapse0x28b5da0() {
   return (neuron0x2894150()*-0.0902391);
}

double NNfunction_sg_sL::synapse0x28b5de0() {
   return (neuron0x2894490()*0.0110703);
}

double NNfunction_sg_sL::synapse0x28b5e20() {
   return (neuron0x28947d0()*-0.0111073);
}

double NNfunction_sg_sL::synapse0x28b5e60() {
   return (neuron0x2894b10()*0.00054258);
}

double NNfunction_sg_sL::synapse0x28b58f0() {
   return (neuron0x2894e50()*-0.0112927);
}

double NNfunction_sg_sL::synapse0x28b5930() {
   return (neuron0x28953b0()*-0.0140149);
}

double NNfunction_sg_sL::synapse0x28a6460() {
   return (neuron0x28955d0()*-0.00537246);
}

double NNfunction_sg_sL::synapse0x28a64a0() {
   return (neuron0x2895910()*0.0130812);
}

double NNfunction_sg_sL::synapse0x28a64e0() {
   return (neuron0x2895c50()*-0.00966081);
}

double NNfunction_sg_sL::synapse0x28a6520() {
   return (neuron0x2895f90()*-0.00387277);
}

double NNfunction_sg_sL::synapse0x28a6560() {
   return (neuron0x28962d0()*0.00436939);
}

double NNfunction_sg_sL::synapse0x28a65a0() {
   return (neuron0x2896610()*0.00459356);
}

double NNfunction_sg_sL::synapse0x28a6920() {
   return (neuron0x2891ae0()*0.0650044);
}

double NNfunction_sg_sL::synapse0x28a6960() {
   return (neuron0x2891d90()*0.0642847);
}

double NNfunction_sg_sL::synapse0x28a69a0() {
   return (neuron0x28920d0()*0.0748751);
}

double NNfunction_sg_sL::synapse0x28a69e0() {
   return (neuron0x2892410()*0.614792);
}

double NNfunction_sg_sL::synapse0x28a6a20() {
   return (neuron0x2892750()*-0.107205);
}

double NNfunction_sg_sL::synapse0x28a6a60() {
   return (neuron0x2892a90()*0.056706);
}

double NNfunction_sg_sL::synapse0x28a6aa0() {
   return (neuron0x2892dd0()*-0.0701537);
}

double NNfunction_sg_sL::synapse0x28a6ae0() {
   return (neuron0x2893110()*-0.0349527);
}

double NNfunction_sg_sL::synapse0x28a6b20() {
   return (neuron0x2893450()*0.153633);
}

double NNfunction_sg_sL::synapse0x28a6b60() {
   return (neuron0x2893790()*-0.48943);
}

double NNfunction_sg_sL::synapse0x28a6ba0() {
   return (neuron0x2893ad0()*0.0452529);
}

double NNfunction_sg_sL::synapse0x28a6be0() {
   return (neuron0x2893e10()*-0.0307276);
}

double NNfunction_sg_sL::synapse0x28a6c20() {
   return (neuron0x2894150()*-0.572883);
}

double NNfunction_sg_sL::synapse0x28a6c60() {
   return (neuron0x2894490()*-0.175131);
}

double NNfunction_sg_sL::synapse0x28a6ca0() {
   return (neuron0x28947d0()*-0.030332);
}

double NNfunction_sg_sL::synapse0x28a6ce0() {
   return (neuron0x2894b10()*-0.0937156);
}

double NNfunction_sg_sL::synapse0x28a6770() {
   return (neuron0x2894e50()*-0.151873);
}

double NNfunction_sg_sL::synapse0x28a67b0() {
   return (neuron0x28953b0()*-0.124629);
}

double NNfunction_sg_sL::synapse0x28a6e30() {
   return (neuron0x28955d0()*-0.00446702);
}

double NNfunction_sg_sL::synapse0x28a6e70() {
   return (neuron0x2895910()*-0.12173);
}

double NNfunction_sg_sL::synapse0x28a6eb0() {
   return (neuron0x2895c50()*0.0119027);
}

double NNfunction_sg_sL::synapse0x28a6ef0() {
   return (neuron0x2895f90()*0.0651076);
}

double NNfunction_sg_sL::synapse0x28a6f30() {
   return (neuron0x28962d0()*-0.0884367);
}

double NNfunction_sg_sL::synapse0x28a6f70() {
   return (neuron0x2896610()*0.0293539);
}

double NNfunction_sg_sL::synapse0x28a72f0() {
   return (neuron0x2891ae0()*-0.00935123);
}

double NNfunction_sg_sL::synapse0x28a7330() {
   return (neuron0x2891d90()*-0.0103295);
}

double NNfunction_sg_sL::synapse0x28a7370() {
   return (neuron0x28920d0()*0.245528);
}

double NNfunction_sg_sL::synapse0x28a73b0() {
   return (neuron0x2892410()*1.1479);
}

double NNfunction_sg_sL::synapse0x28a73f0() {
   return (neuron0x2892750()*0.00573751);
}

double NNfunction_sg_sL::synapse0x28a7430() {
   return (neuron0x2892a90()*0.0193367);
}

double NNfunction_sg_sL::synapse0x28a7470() {
   return (neuron0x2892dd0()*0.00310341);
}

double NNfunction_sg_sL::synapse0x28a74b0() {
   return (neuron0x2893110()*0.00499238);
}

double NNfunction_sg_sL::synapse0x28a74f0() {
   return (neuron0x2893450()*-0.00128699);
}

double NNfunction_sg_sL::synapse0x28a7530() {
   return (neuron0x2893790()*0.0061685);
}

double NNfunction_sg_sL::synapse0x28a7570() {
   return (neuron0x2893ad0()*-0.000512045);
}

double NNfunction_sg_sL::synapse0x28a75b0() {
   return (neuron0x2893e10()*-0.0515864);
}

double NNfunction_sg_sL::synapse0x28a75f0() {
   return (neuron0x2894150()*-0.369053);
}

double NNfunction_sg_sL::synapse0x28a7630() {
   return (neuron0x2894490()*0.000224978);
}

double NNfunction_sg_sL::synapse0x28a7670() {
   return (neuron0x28947d0()*-0.00700163);
}

double NNfunction_sg_sL::synapse0x28a76b0() {
   return (neuron0x2894b10()*0.0071174);
}

double NNfunction_sg_sL::synapse0x28a7140() {
   return (neuron0x2894e50()*0.0142901);
}

double NNfunction_sg_sL::synapse0x28a7180() {
   return (neuron0x28953b0()*-0.0211263);
}

double NNfunction_sg_sL::synapse0x28a7800() {
   return (neuron0x28955d0()*-0.0232865);
}

double NNfunction_sg_sL::synapse0x28a7840() {
   return (neuron0x2895910()*-0.00541635);
}

double NNfunction_sg_sL::synapse0x28a7880() {
   return (neuron0x2895c50()*0.0108612);
}

double NNfunction_sg_sL::synapse0x28a78c0() {
   return (neuron0x2895f90()*4.37146e-05);
}

double NNfunction_sg_sL::synapse0x28a7900() {
   return (neuron0x28962d0()*0.00350159);
}

double NNfunction_sg_sL::synapse0x28a7940() {
   return (neuron0x2896610()*0.00638421);
}

double NNfunction_sg_sL::synapse0x28a7cc0() {
   return (neuron0x2891ae0()*0.180741);
}

double NNfunction_sg_sL::synapse0x28a7d00() {
   return (neuron0x2891d90()*0.275497);
}

double NNfunction_sg_sL::synapse0x28a7d40() {
   return (neuron0x28920d0()*-0.317675);
}

double NNfunction_sg_sL::synapse0x28a7d80() {
   return (neuron0x2892410()*-1.09548);
}

double NNfunction_sg_sL::synapse0x28a7dc0() {
   return (neuron0x2892750()*0.0502626);
}

double NNfunction_sg_sL::synapse0x28a7e00() {
   return (neuron0x2892a90()*0.269594);
}

double NNfunction_sg_sL::synapse0x28a7e40() {
   return (neuron0x2892dd0()*0.132353);
}

double NNfunction_sg_sL::synapse0x28a7e80() {
   return (neuron0x2893110()*0.214509);
}

double NNfunction_sg_sL::synapse0x28a7ec0() {
   return (neuron0x2893450()*0.134993);
}

double NNfunction_sg_sL::synapse0x28a7f00() {
   return (neuron0x2893790()*0.380792);
}

double NNfunction_sg_sL::synapse0x28a7f40() {
   return (neuron0x2893ad0()*-0.18164);
}

double NNfunction_sg_sL::synapse0x28a7f80() {
   return (neuron0x2893e10()*0.182108);
}

double NNfunction_sg_sL::synapse0x28a7fc0() {
   return (neuron0x2894150()*0.00795623);
}

double NNfunction_sg_sL::synapse0x28a8000() {
   return (neuron0x2894490()*0.058033);
}

double NNfunction_sg_sL::synapse0x28a8040() {
   return (neuron0x28947d0()*-0.313211);
}

double NNfunction_sg_sL::synapse0x28a8080() {
   return (neuron0x2894b10()*-0.223035);
}

double NNfunction_sg_sL::synapse0x28a7b10() {
   return (neuron0x2894e50()*-0.160661);
}

double NNfunction_sg_sL::synapse0x28a7b50() {
   return (neuron0x28953b0()*0.250122);
}

double NNfunction_sg_sL::synapse0x28a81d0() {
   return (neuron0x28955d0()*-0.175419);
}

double NNfunction_sg_sL::synapse0x28a8210() {
   return (neuron0x2895910()*0.115506);
}

double NNfunction_sg_sL::synapse0x28a8250() {
   return (neuron0x2895c50()*-0.0526861);
}

double NNfunction_sg_sL::synapse0x28a8290() {
   return (neuron0x2895f90()*0.241793);
}

double NNfunction_sg_sL::synapse0x28a82d0() {
   return (neuron0x28962d0()*0.045954);
}

double NNfunction_sg_sL::synapse0x28a8310() {
   return (neuron0x2896610()*-0.25305);
}

double NNfunction_sg_sL::synapse0x28ba1e0() {
   return (neuron0x2891ae0()*-0.0081833);
}

double NNfunction_sg_sL::synapse0x28ba220() {
   return (neuron0x2891d90()*0.0591196);
}

double NNfunction_sg_sL::synapse0x28ba260() {
   return (neuron0x28920d0()*-0.191276);
}

double NNfunction_sg_sL::synapse0x28ba2a0() {
   return (neuron0x2892410()*-1.0403);
}

double NNfunction_sg_sL::synapse0x28ba2e0() {
   return (neuron0x2892750()*-0.23043);
}

double NNfunction_sg_sL::synapse0x28ba320() {
   return (neuron0x2892a90()*0.0805497);
}

double NNfunction_sg_sL::synapse0x28ba360() {
   return (neuron0x2892dd0()*0.0342272);
}

double NNfunction_sg_sL::synapse0x28ba3a0() {
   return (neuron0x2893110()*0.170706);
}

double NNfunction_sg_sL::synapse0x28ba3e0() {
   return (neuron0x2893450()*0.346533);
}

double NNfunction_sg_sL::synapse0x28ba420() {
   return (neuron0x2893790()*-0.138571);
}

double NNfunction_sg_sL::synapse0x28ba460() {
   return (neuron0x2893ad0()*0.128932);
}

double NNfunction_sg_sL::synapse0x28ba4a0() {
   return (neuron0x2893e10()*0.283244);
}

double NNfunction_sg_sL::synapse0x28ba4e0() {
   return (neuron0x2894150()*0.356913);
}

double NNfunction_sg_sL::synapse0x28ba520() {
   return (neuron0x2894490()*0.215656);
}

double NNfunction_sg_sL::synapse0x28ba560() {
   return (neuron0x28947d0()*-0.221285);
}

double NNfunction_sg_sL::synapse0x28ba5a0() {
   return (neuron0x2894b10()*-0.508456);
}

double NNfunction_sg_sL::synapse0x28a8350() {
   return (neuron0x2894e50()*-0.17989);
}

double NNfunction_sg_sL::synapse0x28a8390() {
   return (neuron0x28953b0()*-0.176158);
}

double NNfunction_sg_sL::synapse0x28ba6f0() {
   return (neuron0x28955d0()*0.215202);
}

double NNfunction_sg_sL::synapse0x28ba730() {
   return (neuron0x2895910()*-0.0269471);
}

double NNfunction_sg_sL::synapse0x28ba770() {
   return (neuron0x2895c50()*-0.0939737);
}

double NNfunction_sg_sL::synapse0x28ba7b0() {
   return (neuron0x2895f90()*0.146217);
}

double NNfunction_sg_sL::synapse0x28ba7f0() {
   return (neuron0x28962d0()*0.070242);
}

double NNfunction_sg_sL::synapse0x28ba830() {
   return (neuron0x2896610()*0.123765);
}

double NNfunction_sg_sL::synapse0x28babb0() {
   return (neuron0x2891ae0()*0.00157667);
}

double NNfunction_sg_sL::synapse0x28babf0() {
   return (neuron0x2891d90()*0.00428203);
}

double NNfunction_sg_sL::synapse0x28bac30() {
   return (neuron0x28920d0()*0.0188073);
}

double NNfunction_sg_sL::synapse0x28bac70() {
   return (neuron0x2892410()*-1.89253);
}

double NNfunction_sg_sL::synapse0x28bacb0() {
   return (neuron0x2892750()*0.000678901);
}

double NNfunction_sg_sL::synapse0x28bacf0() {
   return (neuron0x2892a90()*-0.00536178);
}

double NNfunction_sg_sL::synapse0x28bad30() {
   return (neuron0x2892dd0()*-0.00322658);
}

double NNfunction_sg_sL::synapse0x28bad70() {
   return (neuron0x2893110()*0.000999958);
}

double NNfunction_sg_sL::synapse0x28badb0() {
   return (neuron0x2893450()*-0.00121787);
}

double NNfunction_sg_sL::synapse0x28badf0() {
   return (neuron0x2893790()*0.00646032);
}

double NNfunction_sg_sL::synapse0x28bae30() {
   return (neuron0x2893ad0()*-0.00110156);
}

double NNfunction_sg_sL::synapse0x28bae70() {
   return (neuron0x2893e10()*0.00878905);
}

double NNfunction_sg_sL::synapse0x28baeb0() {
   return (neuron0x2894150()*-1.02747);
}

double NNfunction_sg_sL::synapse0x28baef0() {
   return (neuron0x2894490()*-0.0132037);
}

double NNfunction_sg_sL::synapse0x28baf30() {
   return (neuron0x28947d0()*-0.0149238);
}

double NNfunction_sg_sL::synapse0x28baf70() {
   return (neuron0x2894b10()*-0.00309702);
}

double NNfunction_sg_sL::synapse0x28baa00() {
   return (neuron0x2894e50()*-0.00103634);
}

double NNfunction_sg_sL::synapse0x28baa40() {
   return (neuron0x28953b0()*0.00578674);
}

double NNfunction_sg_sL::synapse0x28bb0c0() {
   return (neuron0x28955d0()*0.000768475);
}

double NNfunction_sg_sL::synapse0x28bb100() {
   return (neuron0x2895910()*0.00266491);
}

double NNfunction_sg_sL::synapse0x28bb140() {
   return (neuron0x2895c50()*-0.00977383);
}

double NNfunction_sg_sL::synapse0x28bb180() {
   return (neuron0x2895f90()*-0.00654074);
}

double NNfunction_sg_sL::synapse0x28bb1c0() {
   return (neuron0x28962d0()*0.00952858);
}

double NNfunction_sg_sL::synapse0x28bb200() {
   return (neuron0x2896610()*-0.00127316);
}

double NNfunction_sg_sL::synapse0x28bb580() {
   return (neuron0x2891ae0()*-0.195679);
}

double NNfunction_sg_sL::synapse0x28bb5c0() {
   return (neuron0x2891d90()*-0.315074);
}

double NNfunction_sg_sL::synapse0x28bb600() {
   return (neuron0x28920d0()*0.0480298);
}

double NNfunction_sg_sL::synapse0x28bb640() {
   return (neuron0x2892410()*1.28171);
}

double NNfunction_sg_sL::synapse0x28bb680() {
   return (neuron0x2892750()*-0.0267847);
}

double NNfunction_sg_sL::synapse0x28bb6c0() {
   return (neuron0x2892a90()*-0.457126);
}

double NNfunction_sg_sL::synapse0x28bb700() {
   return (neuron0x2892dd0()*-0.376538);
}

double NNfunction_sg_sL::synapse0x28bb740() {
   return (neuron0x2893110()*0.416966);
}

double NNfunction_sg_sL::synapse0x28bb780() {
   return (neuron0x2893450()*-0.190303);
}

double NNfunction_sg_sL::synapse0x28bb7c0() {
   return (neuron0x2893790()*0.138073);
}

double NNfunction_sg_sL::synapse0x28bb800() {
   return (neuron0x2893ad0()*-0.00890332);
}

double NNfunction_sg_sL::synapse0x28bb840() {
   return (neuron0x2893e10()*0.247016);
}

double NNfunction_sg_sL::synapse0x28bb880() {
   return (neuron0x2894150()*-0.441314);
}

double NNfunction_sg_sL::synapse0x28bb8c0() {
   return (neuron0x2894490()*0.170761);
}

double NNfunction_sg_sL::synapse0x28bb900() {
   return (neuron0x28947d0()*-0.278132);
}

double NNfunction_sg_sL::synapse0x28bb940() {
   return (neuron0x2894b10()*-0.0412134);
}

double NNfunction_sg_sL::synapse0x28bb3d0() {
   return (neuron0x2894e50()*0.279128);
}

double NNfunction_sg_sL::synapse0x28bb410() {
   return (neuron0x28953b0()*0.0281726);
}

double NNfunction_sg_sL::synapse0x28bba90() {
   return (neuron0x28955d0()*-0.329515);
}

double NNfunction_sg_sL::synapse0x28bbad0() {
   return (neuron0x2895910()*-0.215062);
}

double NNfunction_sg_sL::synapse0x28bbb10() {
   return (neuron0x2895c50()*0.241773);
}

double NNfunction_sg_sL::synapse0x28bbb50() {
   return (neuron0x2895f90()*0.09063);
}

double NNfunction_sg_sL::synapse0x28bbb90() {
   return (neuron0x28962d0()*-0.228629);
}

double NNfunction_sg_sL::synapse0x28bbbd0() {
   return (neuron0x2896610()*-0.0663662);
}

double NNfunction_sg_sL::synapse0x28bbf50() {
   return (neuron0x2891ae0()*0.0146539);
}

double NNfunction_sg_sL::synapse0x28bbf90() {
   return (neuron0x2891d90()*-0.00401969);
}

double NNfunction_sg_sL::synapse0x28bbfd0() {
   return (neuron0x28920d0()*-0.0224014);
}

double NNfunction_sg_sL::synapse0x28bc010() {
   return (neuron0x2892410()*-1.52646);
}

double NNfunction_sg_sL::synapse0x28bc050() {
   return (neuron0x2892750()*0.0201376);
}

double NNfunction_sg_sL::synapse0x28bc090() {
   return (neuron0x2892a90()*0.018507);
}

double NNfunction_sg_sL::synapse0x28bc0d0() {
   return (neuron0x2892dd0()*-0.000374571);
}

double NNfunction_sg_sL::synapse0x28bc110() {
   return (neuron0x2893110()*0.00354988);
}

double NNfunction_sg_sL::synapse0x28bc150() {
   return (neuron0x2893450()*0.020654);
}

double NNfunction_sg_sL::synapse0x28bc190() {
   return (neuron0x2893790()*-0.00392997);
}

double NNfunction_sg_sL::synapse0x28bc1d0() {
   return (neuron0x2893ad0()*0.0134322);
}

double NNfunction_sg_sL::synapse0x28bc210() {
   return (neuron0x2893e10()*0.354773);
}

double NNfunction_sg_sL::synapse0x28bc250() {
   return (neuron0x2894150()*-0.0261777);
}

double NNfunction_sg_sL::synapse0x28bc290() {
   return (neuron0x2894490()*-0.0446352);
}

double NNfunction_sg_sL::synapse0x28bc2d0() {
   return (neuron0x28947d0()*0.0935709);
}

double NNfunction_sg_sL::synapse0x28bc310() {
   return (neuron0x2894b10()*0.128359);
}

double NNfunction_sg_sL::synapse0x28bbda0() {
   return (neuron0x2894e50()*0.0101409);
}

double NNfunction_sg_sL::synapse0x28bbde0() {
   return (neuron0x28953b0()*0.227461);
}

double NNfunction_sg_sL::synapse0x28bc460() {
   return (neuron0x28955d0()*0.197171);
}

double NNfunction_sg_sL::synapse0x28bc4a0() {
   return (neuron0x2895910()*-0.0283161);
}

double NNfunction_sg_sL::synapse0x28bc4e0() {
   return (neuron0x2895c50()*0.039787);
}

double NNfunction_sg_sL::synapse0x28bc520() {
   return (neuron0x2895f90()*0.00941364);
}

double NNfunction_sg_sL::synapse0x28bc560() {
   return (neuron0x28962d0()*0.00386288);
}

double NNfunction_sg_sL::synapse0x28bc5a0() {
   return (neuron0x2896610()*-0.0341104);
}

double NNfunction_sg_sL::synapse0x265c3d0() {
   return (neuron0x2896a80()*0.186834);
}

double NNfunction_sg_sL::synapse0x265c410() {
   return (neuron0x28973d0()*0.437087);
}

double NNfunction_sg_sL::synapse0x2898f40() {
   return (neuron0x2897eb0()*0.0264219);
}

double NNfunction_sg_sL::synapse0x2898f80() {
   return (neuron0x2897950()*-0.119141);
}

double NNfunction_sg_sL::synapse0x289aa20() {
   return (neuron0x2898c90()*1.26217);
}

double NNfunction_sg_sL::synapse0x289aa60() {
   return (neuron0x289a770()*-0.223804);
}

double NNfunction_sg_sL::synapse0x289b7f0() {
   return (neuron0x289b540()*-0.103899);
}

double NNfunction_sg_sL::synapse0x289b830() {
   return (neuron0x289bf10()*0.175197);
}

double NNfunction_sg_sL::synapse0x289c1c0() {
   return (neuron0x289c8e0()*0.685162);
}

double NNfunction_sg_sL::synapse0x289c200() {
   return (neuron0x289d3c0()*0.392379);
}

double NNfunction_sg_sL::synapse0x289cb90() {
   return (neuron0x289dd90()*1.07246);
}

double NNfunction_sg_sL::synapse0x289cbd0() {
   return (neuron0x289ae70()*1.08501);
}

double NNfunction_sg_sL::synapse0x289d670() {
   return (neuron0x289f940()*1.17823);
}

double NNfunction_sg_sL::synapse0x289d6b0() {
   return (neuron0x28a0310()*0.356287);
}

double NNfunction_sg_sL::synapse0x289e040() {
   return (neuron0x28a0ce0()*-0.0943393);
}

double NNfunction_sg_sL::synapse0x289e080() {
   return (neuron0x28a16b0()*0.625036);
}

double NNfunction_sg_sL::synapse0x289b120() {
   return (neuron0x28a34c0()*-0.196909);
}

double NNfunction_sg_sL::synapse0x289b160() {
   return (neuron0x28a37a0()*0.733115);
}

double NNfunction_sg_sL::synapse0x289fbf0() {
   return (neuron0x28a4170()*-0.000546642);
}

double NNfunction_sg_sL::synapse0x289fc30() {
   return (neuron0x28a4b40()*0.749481);
}

double NNfunction_sg_sL::synapse0x28a05c0() {
   return (neuron0x28a5510()*0.628065);
}

double NNfunction_sg_sL::synapse0x28a0600() {
   return (neuron0x28a5ee0()*-0.399115);
}

double NNfunction_sg_sL::synapse0x28a0f90() {
   return (neuron0x289ea30()*0.589);
}

double NNfunction_sg_sL::synapse0x28a0fd0() {
   return (neuron0x289f400()*0.501677);
}

double NNfunction_sg_sL::synapse0x28a1960() {
   return (neuron0x28a8c70()*0.896757);
}

double NNfunction_sg_sL::synapse0x28a19a0() {
   return (neuron0x28a9640()*0.148069);
}

double NNfunction_sg_sL::synapse0x28949f0() {
   return (neuron0x28aa010()*-0.0397261);
}

double NNfunction_sg_sL::synapse0x2894a30() {
   return (neuron0x28aa9e0()*-0.03255);
}

double NNfunction_sg_sL::synapse0x28a3a50() {
   return (neuron0x28ab3b0()*1.00304);
}

double NNfunction_sg_sL::synapse0x28a3a90() {
   return (neuron0x28abd80()*0.175965);
}

double NNfunction_sg_sL::synapse0x28a4420() {
   return (neuron0x28ac750()*0.165727);
}

double NNfunction_sg_sL::synapse0x28a4460() {
   return (neuron0x28ad120()*0.668643);
}

double NNfunction_sg_sL::synapse0x28a4df0() {
   return (neuron0x28a31b0()*0.0533179);
}

double NNfunction_sg_sL::synapse0x28a4e30() {
   return (neuron0x28afd00()*0.520694);
}

double NNfunction_sg_sL::synapse0x28a57c0() {
   return (neuron0x28b06d0()*0.0658672);
}

double NNfunction_sg_sL::synapse0x28a5800() {
   return (neuron0x28b10a0()*-0.25842);
}

double NNfunction_sg_sL::synapse0x28a6190() {
   return (neuron0x28b1a70()*1.14295);
}

double NNfunction_sg_sL::synapse0x28a61d0() {
   return (neuron0x28b2440()*0.871131);
}

double NNfunction_sg_sL::synapse0x289ece0() {
   return (neuron0x28b2e10()*0.379423);
}

double NNfunction_sg_sL::synapse0x289ed20() {
   return (neuron0x28b37e0()*0.88927);
}

double NNfunction_sg_sL::synapse0x28a8590() {
   return (neuron0x28b41b0()*0.709493);
}

double NNfunction_sg_sL::synapse0x28a85d0() {
   return (neuron0x28b4d90()*0.854084);
}

double NNfunction_sg_sL::synapse0x28a8f20() {
   return (neuron0x28b5760()*0.0590683);
}

double NNfunction_sg_sL::synapse0x28a8f60() {
   return (neuron0x28a65e0()*0.0700549);
}

double NNfunction_sg_sL::synapse0x28a98f0() {
   return (neuron0x28a6fb0()*0.681726);
}

double NNfunction_sg_sL::synapse0x28a9930() {
   return (neuron0x28a7980()*0.994533);
}

double NNfunction_sg_sL::synapse0x28aa2c0() {
   return (neuron0x28b9fc0()*1.26574);
}

double NNfunction_sg_sL::synapse0x28aa300() {
   return (neuron0x28ba870()*-0.113233);
}

double NNfunction_sg_sL::synapse0x28aac90() {
   return (neuron0x28bb240()*0.407898);
}

double NNfunction_sg_sL::synapse0x28aacd0() {
   return (neuron0x28bbc10()*0.48927);
}

double NNfunction_sg_sL::synapse0x28ad3d0() {
   return (neuron0x2896a80()*-0.100114);
}

double NNfunction_sg_sL::synapse0x28ad410() {
   return (neuron0x28973d0()*-0.75258);
}

double NNfunction_sg_sL::synapse0x28a2990() {
   return (neuron0x2897eb0()*-0.012795);
}

double NNfunction_sg_sL::synapse0x28a29d0() {
   return (neuron0x2897950()*-0.883394);
}

double NNfunction_sg_sL::synapse0x28affb0() {
   return (neuron0x2898c90()*-0.157529);
}

double NNfunction_sg_sL::synapse0x28afff0() {
   return (neuron0x289a770()*0.171242);
}

double NNfunction_sg_sL::synapse0x28b0980() {
   return (neuron0x289b540()*0.0218344);
}

double NNfunction_sg_sL::synapse0x28b09c0() {
   return (neuron0x289bf10()*0.00395167);
}

double NNfunction_sg_sL::synapse0x28b1350() {
   return (neuron0x289c8e0()*-0.00478868);
}

double NNfunction_sg_sL::synapse0x28b1390() {
   return (neuron0x289d3c0()*0.0398333);
}

double NNfunction_sg_sL::synapse0x28b1d20() {
   return (neuron0x289dd90()*-0.00820163);
}

double NNfunction_sg_sL::synapse0x28b1d60() {
   return (neuron0x289ae70()*0.593009);
}

double NNfunction_sg_sL::synapse0x28b26f0() {
   return (neuron0x289f940()*-0.0597763);
}

double NNfunction_sg_sL::synapse0x28b2730() {
   return (neuron0x28a0310()*1.78024);
}

double NNfunction_sg_sL::synapse0x28b30c0() {
   return (neuron0x28a0ce0()*-0.00837376);
}

double NNfunction_sg_sL::synapse0x28b3100() {
   return (neuron0x28a16b0()*-0.00737459);
}

double NNfunction_sg_sL::synapse0x28b3a90() {
   return (neuron0x28a34c0()*0.0492416);
}

double NNfunction_sg_sL::synapse0x28b3ad0() {
   return (neuron0x28a37a0()*2.29923);
}

double NNfunction_sg_sL::synapse0x28b4460() {
   return (neuron0x28a4170()*0.00146947);
}

double NNfunction_sg_sL::synapse0x28b44a0() {
   return (neuron0x28a4b40()*-0.0673302);
}

double NNfunction_sg_sL::synapse0x28b5040() {
   return (neuron0x28a5510()*0.00170318);
}

double NNfunction_sg_sL::synapse0x28b5080() {
   return (neuron0x28a5ee0()*-0.77817);
}

double NNfunction_sg_sL::synapse0x28b5a10() {
   return (neuron0x289ea30()*-0.134744);
}

double NNfunction_sg_sL::synapse0x28b5a50() {
   return (neuron0x289f400()*-0.903233);
}

double NNfunction_sg_sL::synapse0x28a6890() {
   return (neuron0x28a8c70()*0.936403);
}

double NNfunction_sg_sL::synapse0x28a68d0() {
   return (neuron0x28a9640()*0.235628);
}

double NNfunction_sg_sL::synapse0x28a7260() {
   return (neuron0x28aa010()*-0.00230839);
}

double NNfunction_sg_sL::synapse0x28a72a0() {
   return (neuron0x28aa9e0()*0.00189247);
}

double NNfunction_sg_sL::synapse0x28a7c30() {
   return (neuron0x28ab3b0()*-0.0101938);
}

double NNfunction_sg_sL::synapse0x28a7c70() {
   return (neuron0x28abd80()*-1.04388);
}

double NNfunction_sg_sL::synapse0x28ba150() {
   return (neuron0x28ac750()*0.85351);
}

double NNfunction_sg_sL::synapse0x28ba190() {
   return (neuron0x28ad120()*0.425891);
}

double NNfunction_sg_sL::synapse0x28bab20() {
   return (neuron0x28a31b0()*0.00323555);
}

double NNfunction_sg_sL::synapse0x28bab60() {
   return (neuron0x28afd00()*0.132748);
}

double NNfunction_sg_sL::synapse0x28bb4f0() {
   return (neuron0x28b06d0()*-1.75521);
}

double NNfunction_sg_sL::synapse0x28bb530() {
   return (neuron0x28b10a0()*0.0510221);
}

double NNfunction_sg_sL::synapse0x28bbec0() {
   return (neuron0x28b1a70()*1.3608);
}

double NNfunction_sg_sL::synapse0x28bbf00() {
   return (neuron0x28b2440()*0.98844);
}

double NNfunction_sg_sL::synapse0x2896d30() {
   return (neuron0x28b2e10()*0.618654);
}

double NNfunction_sg_sL::synapse0x2896d70() {
   return (neuron0x28b37e0()*-0.00391645);
}

double NNfunction_sg_sL::synapse0x28ab660() {
   return (neuron0x28b41b0()*0.0339203);
}

double NNfunction_sg_sL::synapse0x28ab6a0() {
   return (neuron0x28b4d90()*-0.00109463);
}

double NNfunction_sg_sL::synapse0x28bc5e0() {
   return (neuron0x28b5760()*-1.73582);
}

double NNfunction_sg_sL::synapse0x28bc620() {
   return (neuron0x28a65e0()*-0.0235265);
}

double NNfunction_sg_sL::synapse0x28bc660() {
   return (neuron0x28a6fb0()*-0.351015);
}

double NNfunction_sg_sL::synapse0x28bc6a0() {
   return (neuron0x28a7980()*0.00368184);
}

double NNfunction_sg_sL::synapse0x28c3550() {
   return (neuron0x28b9fc0()*-0.0122512);
}

double NNfunction_sg_sL::synapse0x28c3590() {
   return (neuron0x28ba870()*1.02715);
}

double NNfunction_sg_sL::synapse0x28c35d0() {
   return (neuron0x28bb240()*-0.00491315);
}

double NNfunction_sg_sL::synapse0x28c3610() {
   return (neuron0x28bbc10()*-0.138419);
}

double NNfunction_sg_sL::synapse0x28c3990() {
   return (neuron0x2896a80()*0.958319);
}

double NNfunction_sg_sL::synapse0x28c39d0() {
   return (neuron0x28973d0()*1.17951);
}

double NNfunction_sg_sL::synapse0x28c3a10() {
   return (neuron0x2897eb0()*0.726034);
}

double NNfunction_sg_sL::synapse0x28c3a50() {
   return (neuron0x2897950()*-0.902746);
}

double NNfunction_sg_sL::synapse0x28c3a90() {
   return (neuron0x2898c90()*-0.946868);
}

double NNfunction_sg_sL::synapse0x28c3ad0() {
   return (neuron0x289a770()*-3.20552);
}

double NNfunction_sg_sL::synapse0x28c3b10() {
   return (neuron0x289b540()*0.000912178);
}

double NNfunction_sg_sL::synapse0x28c3b50() {
   return (neuron0x289bf10()*0.52318);
}

double NNfunction_sg_sL::synapse0x28c3b90() {
   return (neuron0x289c8e0()*0.0888404);
}

double NNfunction_sg_sL::synapse0x28c3bd0() {
   return (neuron0x289d3c0()*-0.105669);
}

double NNfunction_sg_sL::synapse0x28c3c10() {
   return (neuron0x289dd90()*0.276697);
}

double NNfunction_sg_sL::synapse0x28c3c50() {
   return (neuron0x289ae70()*2.99827);
}

double NNfunction_sg_sL::synapse0x28c3c90() {
   return (neuron0x289f940()*-0.389536);
}

double NNfunction_sg_sL::synapse0x28c3cd0() {
   return (neuron0x28a0310()*-0.369585);
}

double NNfunction_sg_sL::synapse0x28c3d10() {
   return (neuron0x28a0ce0()*-0.257094);
}

double NNfunction_sg_sL::synapse0x28c3d50() {
   return (neuron0x28a16b0()*0.015884);
}

double NNfunction_sg_sL::synapse0x28c37e0() {
   return (neuron0x28a34c0()*0.200014);
}

double NNfunction_sg_sL::synapse0x28c3820() {
   return (neuron0x28a37a0()*0.242907);
}

double NNfunction_sg_sL::synapse0x28c3ea0() {
   return (neuron0x28a4170()*0.481038);
}

double NNfunction_sg_sL::synapse0x28c3ee0() {
   return (neuron0x28a4b40()*-0.370796);
}

double NNfunction_sg_sL::synapse0x28c3f20() {
   return (neuron0x28a5510()*0.331489);
}

double NNfunction_sg_sL::synapse0x28c3f60() {
   return (neuron0x28a5ee0()*0.0815229);
}

double NNfunction_sg_sL::synapse0x28c3fa0() {
   return (neuron0x289ea30()*1.41076);
}

double NNfunction_sg_sL::synapse0x28c3fe0() {
   return (neuron0x289f400()*0.170676);
}

double NNfunction_sg_sL::synapse0x28c4020() {
   return (neuron0x28a8c70()*0.4602);
}

double NNfunction_sg_sL::synapse0x28c4060() {
   return (neuron0x28a9640()*-0.815381);
}

double NNfunction_sg_sL::synapse0x28c40a0() {
   return (neuron0x28aa010()*0.00860781);
}

double NNfunction_sg_sL::synapse0x28c40e0() {
   return (neuron0x28aa9e0()*0.175018);
}

double NNfunction_sg_sL::synapse0x28c4120() {
   return (neuron0x28ab3b0()*-0.46233);
}

double NNfunction_sg_sL::synapse0x28c4160() {
   return (neuron0x28abd80()*0.746261);
}

double NNfunction_sg_sL::synapse0x28c41a0() {
   return (neuron0x28ac750()*-0.1518);
}

double NNfunction_sg_sL::synapse0x28c41e0() {
   return (neuron0x28ad120()*0.388424);
}

double NNfunction_sg_sL::synapse0x28c3d90() {
   return (neuron0x28a31b0()*-0.428604);
}

double NNfunction_sg_sL::synapse0x28c3dd0() {
   return (neuron0x28afd00()*1.42857);
}

double NNfunction_sg_sL::synapse0x28c3e10() {
   return (neuron0x28b06d0()*0.4038);
}

double NNfunction_sg_sL::synapse0x28c3e50() {
   return (neuron0x28b10a0()*-1.64626);
}

double NNfunction_sg_sL::synapse0x28c4430() {
   return (neuron0x28b1a70()*1.90755);
}

double NNfunction_sg_sL::synapse0x28c4470() {
   return (neuron0x28b2440()*2.67387);
}

double NNfunction_sg_sL::synapse0x28c44b0() {
   return (neuron0x28b2e10()*-0.381628);
}

double NNfunction_sg_sL::synapse0x28c44f0() {
   return (neuron0x28b37e0()*0.17991);
}

double NNfunction_sg_sL::synapse0x28c4530() {
   return (neuron0x28b41b0()*0.0797564);
}

double NNfunction_sg_sL::synapse0x28c4570() {
   return (neuron0x28b4d90()*0.109683);
}

double NNfunction_sg_sL::synapse0x28c45b0() {
   return (neuron0x28b5760()*-6.7415);
}

double NNfunction_sg_sL::synapse0x28c45f0() {
   return (neuron0x28a65e0()*-0.319336);
}

double NNfunction_sg_sL::synapse0x28c4630() {
   return (neuron0x28a6fb0()*-0.492888);
}

double NNfunction_sg_sL::synapse0x28c4670() {
   return (neuron0x28a7980()*0.485893);
}

double NNfunction_sg_sL::synapse0x28c46b0() {
   return (neuron0x28b9fc0()*0.586023);
}

double NNfunction_sg_sL::synapse0x28c46f0() {
   return (neuron0x28ba870()*-0.515571);
}

double NNfunction_sg_sL::synapse0x28c4730() {
   return (neuron0x28bb240()*-0.324073);
}

double NNfunction_sg_sL::synapse0x28c4770() {
   return (neuron0x28bbc10()*0.70764);
}

double NNfunction_sg_sL::synapse0x28c4af0() {
   return (neuron0x2896a80()*-0.232897);
}

double NNfunction_sg_sL::synapse0x28c4b30() {
   return (neuron0x28973d0()*-1.50802);
}

double NNfunction_sg_sL::synapse0x28c4b70() {
   return (neuron0x2897eb0()*-0.391708);
}

double NNfunction_sg_sL::synapse0x28c4bb0() {
   return (neuron0x2897950()*0.056671);
}

double NNfunction_sg_sL::synapse0x28c4bf0() {
   return (neuron0x2898c90()*-0.666168);
}

double NNfunction_sg_sL::synapse0x28c4c30() {
   return (neuron0x289a770()*-1.20316);
}

double NNfunction_sg_sL::synapse0x28c4c70() {
   return (neuron0x289b540()*-0.0213288);
}

double NNfunction_sg_sL::synapse0x28c4cb0() {
   return (neuron0x289bf10()*0.0380961);
}

double NNfunction_sg_sL::synapse0x28c4cf0() {
   return (neuron0x289c8e0()*-0.223452);
}

double NNfunction_sg_sL::synapse0x28c4d30() {
   return (neuron0x289d3c0()*0.061715);
}

double NNfunction_sg_sL::synapse0x28c4d70() {
   return (neuron0x289dd90()*-0.0186455);
}

double NNfunction_sg_sL::synapse0x28c4db0() {
   return (neuron0x289ae70()*-0.331535);
}

double NNfunction_sg_sL::synapse0x28c4df0() {
   return (neuron0x289f940()*-0.365832);
}

double NNfunction_sg_sL::synapse0x28c4e30() {
   return (neuron0x28a0310()*1.40454);
}

double NNfunction_sg_sL::synapse0x28c4e70() {
   return (neuron0x28a0ce0()*-0.0251202);
}

double NNfunction_sg_sL::synapse0x28c4eb0() {
   return (neuron0x28a16b0()*-0.00496109);
}

double NNfunction_sg_sL::synapse0x28c4940() {
   return (neuron0x28a34c0()*0.0616446);
}

double NNfunction_sg_sL::synapse0x28c4980() {
   return (neuron0x28a37a0()*1.59799);
}

double NNfunction_sg_sL::synapse0x28c5000() {
   return (neuron0x28a4170()*0.0755219);
}

double NNfunction_sg_sL::synapse0x28c5040() {
   return (neuron0x28a4b40()*-0.4316);
}

double NNfunction_sg_sL::synapse0x28c5080() {
   return (neuron0x28a5510()*0.168532);
}

double NNfunction_sg_sL::synapse0x28c50c0() {
   return (neuron0x28a5ee0()*-1.43961);
}

double NNfunction_sg_sL::synapse0x28c5100() {
   return (neuron0x289ea30()*-1.16761);
}

double NNfunction_sg_sL::synapse0x28c5140() {
   return (neuron0x289f400()*-0.801103);
}

double NNfunction_sg_sL::synapse0x28c5180() {
   return (neuron0x28a8c70()*0.672676);
}

double NNfunction_sg_sL::synapse0x28c51c0() {
   return (neuron0x28a9640()*0.910986);
}

double NNfunction_sg_sL::synapse0x28c5200() {
   return (neuron0x28aa010()*0.00153664);
}

double NNfunction_sg_sL::synapse0x28c5240() {
   return (neuron0x28aa9e0()*-0.13307);
}

double NNfunction_sg_sL::synapse0x28c5280() {
   return (neuron0x28ab3b0()*0.149016);
}

double NNfunction_sg_sL::synapse0x28c52c0() {
   return (neuron0x28abd80()*-0.0715151);
}

double NNfunction_sg_sL::synapse0x28c5300() {
   return (neuron0x28ac750()*0.0807217);
}

double NNfunction_sg_sL::synapse0x28c5340() {
   return (neuron0x28ad120()*-1.21418);
}

double NNfunction_sg_sL::synapse0x28c4ef0() {
   return (neuron0x28a31b0()*0.0254834);
}

double NNfunction_sg_sL::synapse0x28c4f30() {
   return (neuron0x28afd00()*-0.900212);
}

double NNfunction_sg_sL::synapse0x28c4f70() {
   return (neuron0x28b06d0()*-1.20853);
}

double NNfunction_sg_sL::synapse0x28c4fb0() {
   return (neuron0x28b10a0()*0.39116);
}

double NNfunction_sg_sL::synapse0x28c5590() {
   return (neuron0x28b1a70()*-0.252552);
}

double NNfunction_sg_sL::synapse0x28c55d0() {
   return (neuron0x28b2440()*-0.273668);
}

double NNfunction_sg_sL::synapse0x28c5610() {
   return (neuron0x28b2e10()*0.676206);
}

double NNfunction_sg_sL::synapse0x28c5650() {
   return (neuron0x28b37e0()*0.0178394);
}

double NNfunction_sg_sL::synapse0x28c5690() {
   return (neuron0x28b41b0()*0.00357348);
}

double NNfunction_sg_sL::synapse0x28c56d0() {
   return (neuron0x28b4d90()*0.000892544);
}

double NNfunction_sg_sL::synapse0x28c5710() {
   return (neuron0x28b5760()*4.3082);
}

double NNfunction_sg_sL::synapse0x28c5750() {
   return (neuron0x28a65e0()*-0.102194);
}

double NNfunction_sg_sL::synapse0x28c5790() {
   return (neuron0x28a6fb0()*-0.130265);
}

double NNfunction_sg_sL::synapse0x28c57d0() {
   return (neuron0x28a7980()*-0.0915861);
}

double NNfunction_sg_sL::synapse0x28c5810() {
   return (neuron0x28b9fc0()*-0.0916062);
}

double NNfunction_sg_sL::synapse0x28c5850() {
   return (neuron0x28ba870()*1.28757);
}

double NNfunction_sg_sL::synapse0x28c5890() {
   return (neuron0x28bb240()*0.0721724);
}

double NNfunction_sg_sL::synapse0x28c58d0() {
   return (neuron0x28bbc10()*-0.752821);
}

double NNfunction_sg_sL::synapse0x28c5c50() {
   return (neuron0x2896a80()*0.299755);
}

double NNfunction_sg_sL::synapse0x28c5c90() {
   return (neuron0x28973d0()*0.20576);
}

double NNfunction_sg_sL::synapse0x28c5cd0() {
   return (neuron0x2897eb0()*0.0694091);
}

double NNfunction_sg_sL::synapse0x28c5d10() {
   return (neuron0x2897950()*-1.13187);
}

double NNfunction_sg_sL::synapse0x28c5d50() {
   return (neuron0x2898c90()*0.213566);
}

double NNfunction_sg_sL::synapse0x28c5d90() {
   return (neuron0x289a770()*-1.36216);
}

double NNfunction_sg_sL::synapse0x28c5dd0() {
   return (neuron0x289b540()*0.00992779);
}

double NNfunction_sg_sL::synapse0x28c5e10() {
   return (neuron0x289bf10()*-0.00370231);
}

double NNfunction_sg_sL::synapse0x28c5e50() {
   return (neuron0x289c8e0()*0.0317596);
}

double NNfunction_sg_sL::synapse0x28c5e90() {
   return (neuron0x289d3c0()*-0.000467352);
}

double NNfunction_sg_sL::synapse0x28c5ed0() {
   return (neuron0x289dd90()*0.0231287);
}

double NNfunction_sg_sL::synapse0x28c5f10() {
   return (neuron0x289ae70()*0.479566);
}

double NNfunction_sg_sL::synapse0x28c5f50() {
   return (neuron0x289f940()*-0.189956);
}

double NNfunction_sg_sL::synapse0x28c5f90() {
   return (neuron0x28a0310()*-0.433323);
}

double NNfunction_sg_sL::synapse0x28c5fd0() {
   return (neuron0x28a0ce0()*0.00986813);
}

double NNfunction_sg_sL::synapse0x28c6010() {
   return (neuron0x28a16b0()*0.00203342);
}

double NNfunction_sg_sL::synapse0x28c5aa0() {
   return (neuron0x28a34c0()*0.121878);
}

double NNfunction_sg_sL::synapse0x28c5ae0() {
   return (neuron0x28a37a0()*0.153064);
}

double NNfunction_sg_sL::synapse0x28c6160() {
   return (neuron0x28a4170()*0.00659345);
}

double NNfunction_sg_sL::synapse0x28c61a0() {
   return (neuron0x28a4b40()*-0.0184092);
}

double NNfunction_sg_sL::synapse0x28c61e0() {
   return (neuron0x28a5510()*-0.039281);
}

double NNfunction_sg_sL::synapse0x28c6220() {
   return (neuron0x28a5ee0()*0.173093);
}

double NNfunction_sg_sL::synapse0x28c6260() {
   return (neuron0x289ea30()*0.300992);
}

double NNfunction_sg_sL::synapse0x28c62a0() {
   return (neuron0x289f400()*-1.01168);
}

double NNfunction_sg_sL::synapse0x28c62e0() {
   return (neuron0x28a8c70()*0.816504);
}

double NNfunction_sg_sL::synapse0x28c6320() {
   return (neuron0x28a9640()*-0.527132);
}

double NNfunction_sg_sL::synapse0x28c6360() {
   return (neuron0x28aa010()*-0.00235832);
}

double NNfunction_sg_sL::synapse0x28c63a0() {
   return (neuron0x28aa9e0()*0.0114886);
}

double NNfunction_sg_sL::synapse0x28c63e0() {
   return (neuron0x28ab3b0()*-0.00728991);
}

double NNfunction_sg_sL::synapse0x28c6420() {
   return (neuron0x28abd80()*-0.922361);
}

double NNfunction_sg_sL::synapse0x28c6460() {
   return (neuron0x28ac750()*0.461305);
}

double NNfunction_sg_sL::synapse0x28c64a0() {
   return (neuron0x28ad120()*-0.767491);
}

double NNfunction_sg_sL::synapse0x28c6050() {
   return (neuron0x28a31b0()*-0.0189856);
}

double NNfunction_sg_sL::synapse0x28c6090() {
   return (neuron0x28afd00()*1.55708);
}

double NNfunction_sg_sL::synapse0x28c60d0() {
   return (neuron0x28b06d0()*-0.00977242);
}

double NNfunction_sg_sL::synapse0x28c6110() {
   return (neuron0x28b10a0()*-0.288683);
}

double NNfunction_sg_sL::synapse0x28c66f0() {
   return (neuron0x28b1a70()*-0.1442);
}

double NNfunction_sg_sL::synapse0x28c6730() {
   return (neuron0x28b2440()*0.79358);
}

double NNfunction_sg_sL::synapse0x28c6770() {
   return (neuron0x28b2e10()*-0.199646);
}

double NNfunction_sg_sL::synapse0x28c67b0() {
   return (neuron0x28b37e0()*0.000920903);
}

double NNfunction_sg_sL::synapse0x28c67f0() {
   return (neuron0x28b41b0()*-0.050331);
}

double NNfunction_sg_sL::synapse0x28c6830() {
   return (neuron0x28b4d90()*0.00804873);
}

double NNfunction_sg_sL::synapse0x28c6870() {
   return (neuron0x28b5760()*-1.90939);
}

double NNfunction_sg_sL::synapse0x28c68b0() {
   return (neuron0x28a65e0()*0.0353869);
}

double NNfunction_sg_sL::synapse0x28c68f0() {
   return (neuron0x28a6fb0()*-0.65601);
}

double NNfunction_sg_sL::synapse0x28c6930() {
   return (neuron0x28a7980()*-0.00409209);
}

double NNfunction_sg_sL::synapse0x28c6970() {
   return (neuron0x28b9fc0()*0.0186721);
}

double NNfunction_sg_sL::synapse0x28c69b0() {
   return (neuron0x28ba870()*-0.93241);
}

double NNfunction_sg_sL::synapse0x28c69f0() {
   return (neuron0x28bb240()*-0.00775916);
}

double NNfunction_sg_sL::synapse0x28c6a30() {
   return (neuron0x28bbc10()*0.637505);
}

double NNfunction_sg_sL::synapse0x28c6c90() {
   return (neuron0x28c2e10()*3.40884);
}

double NNfunction_sg_sL::synapse0x28c6cd0() {
   return (neuron0x28c31b0()*-8.49707);
}

double NNfunction_sg_sL::synapse0x28c6d10() {
   return (neuron0x28c3650()*-3.73891);
}

double NNfunction_sg_sL::synapse0x28c6d50() {
   return (neuron0x28c47b0()*-8.22595);
}

double NNfunction_sg_sL::synapse0x28c6d90() {
   return (neuron0x28c5910()*-6.43738);
}

