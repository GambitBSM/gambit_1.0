#include "NNfunction-ss_sLdR.h"
#include <cmath>

double NNfunction-ss_sLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.991)/15.035;
   input1 = (in1 - 46.4545)/769.876;
   input2 = (in2 - 382.919)/490.34;
   input3 = (in3 - 233.003)/622.584;
   input4 = (in4 - 735.798)/707.16;
   input5 = (in5 - 643.23)/679.527;
   input6 = (in6 - 646.551)/680.191;
   input7 = (in7 - 648.813)/682.779;
   input8 = (in8 - 650.381)/720.02;
   input9 = (in9 - 638.267)/701.963;
   input10 = (in10 - 654.416)/726.708;
   input11 = (in11 - 670.454)/607.442;
   input12 = (in12 - 522.683)/330.716;
   input13 = (in13 - 508.856)/364.429;
   input14 = (in14 - 653.888)/556.697;
   input15 = (in15 - 653.399)/556.257;
   input16 = (in16 - 461.761)/388.111;
   input17 = (in17 - 518.424)/330.287;
   input18 = (in18 - 677.345)/630.725;
   input19 = (in19 - 679.657)/615.877;
   input20 = (in20 - -184.657)/398.215;
   input21 = (in21 - -239.134)/879.991;
   input22 = (in22 - 0.478626)/893.513;
   input23 = (in23 - -29.614)/499.435;
   switch(index) {
     case 0:
         return neuron0x1c2f020();
     default:
         return 0.;
   }
}

double NNfunction-ss_sLdR::Value(int index, double* input) {
   input0 = (input[0] - 22.991)/15.035;
   input1 = (input[1] - 46.4545)/769.876;
   input2 = (input[2] - 382.919)/490.34;
   input3 = (input[3] - 233.003)/622.584;
   input4 = (input[4] - 735.798)/707.16;
   input5 = (input[5] - 643.23)/679.527;
   input6 = (input[6] - 646.551)/680.191;
   input7 = (input[7] - 648.813)/682.779;
   input8 = (input[8] - 650.381)/720.02;
   input9 = (input[9] - 638.267)/701.963;
   input10 = (input[10] - 654.416)/726.708;
   input11 = (input[11] - 670.454)/607.442;
   input12 = (input[12] - 522.683)/330.716;
   input13 = (input[13] - 508.856)/364.429;
   input14 = (input[14] - 653.888)/556.697;
   input15 = (input[15] - 653.399)/556.257;
   input16 = (input[16] - 461.761)/388.111;
   input17 = (input[17] - 518.424)/330.287;
   input18 = (input[18] - 677.345)/630.725;
   input19 = (input[19] - 679.657)/615.877;
   input20 = (input[20] - -184.657)/398.215;
   input21 = (input[21] - -239.134)/879.991;
   input22 = (input[22] - 0.478626)/893.513;
   input23 = (input[23] - -29.614)/499.435;
   switch(index) {
     case 0:
         return neuron0x1c2f020();
     default:
         return 0.;
   }
}

double NNfunction-ss_sLdR::neuron0x1bfb1e0() {
   return input0;
}

double NNfunction-ss_sLdR::neuron0x1bfb490() {
   return input1;
}

double NNfunction-ss_sLdR::neuron0x1bfb7d0() {
   return input2;
}

double NNfunction-ss_sLdR::neuron0x1bfbb10() {
   return input3;
}

double NNfunction-ss_sLdR::neuron0x1bfbe50() {
   return input4;
}

double NNfunction-ss_sLdR::neuron0x1bfc190() {
   return input5;
}

double NNfunction-ss_sLdR::neuron0x1bfc4d0() {
   return input6;
}

double NNfunction-ss_sLdR::neuron0x1bfc810() {
   return input7;
}

double NNfunction-ss_sLdR::neuron0x1bfcb50() {
   return input8;
}

double NNfunction-ss_sLdR::neuron0x1bfce90() {
   return input9;
}

double NNfunction-ss_sLdR::neuron0x1bfd1d0() {
   return input10;
}

double NNfunction-ss_sLdR::neuron0x1bfd510() {
   return input11;
}

double NNfunction-ss_sLdR::neuron0x1bfd850() {
   return input12;
}

double NNfunction-ss_sLdR::neuron0x1bfdb90() {
   return input13;
}

double NNfunction-ss_sLdR::neuron0x1bfded0() {
   return input14;
}

double NNfunction-ss_sLdR::neuron0x1bfe210() {
   return input15;
}

double NNfunction-ss_sLdR::neuron0x1bfe550() {
   return input16;
}

double NNfunction-ss_sLdR::neuron0x1bfeab0() {
   return input17;
}

double NNfunction-ss_sLdR::neuron0x1bfecd0() {
   return input18;
}

double NNfunction-ss_sLdR::neuron0x1bff010() {
   return input19;
}

double NNfunction-ss_sLdR::neuron0x1bff350() {
   return input20;
}

double NNfunction-ss_sLdR::neuron0x1bff690() {
   return input21;
}

double NNfunction-ss_sLdR::neuron0x1bff9d0() {
   return input22;
}

double NNfunction-ss_sLdR::neuron0x1bffd10() {
   return input23;
}

double NNfunction-ss_sLdR::input0x1c00180() {
   double input = 0.842949;
   input += synapse0x1bfb160();
   input += synapse0x1bfb1a0();
   input += synapse0x1c00430();
   input += synapse0x1c00470();
   input += synapse0x1c004b0();
   input += synapse0x1c004f0();
   input += synapse0x1c00530();
   input += synapse0x1c00570();
   input += synapse0x1c005b0();
   input += synapse0x1c005f0();
   input += synapse0x1c00630();
   input += synapse0x1c00670();
   input += synapse0x1c006b0();
   input += synapse0x1c006f0();
   input += synapse0x1c00730();
   input += synapse0x1c00770();
   input += synapse0x1bfb0d0();
   input += synapse0x1bfb110();
   input += synapse0x19b62a0();
   input += synapse0x19b62e0();
   input += synapse0x1c009d0();
   input += synapse0x1c00a10();
   input += synapse0x1c00a50();
   input += synapse0x1c00a90();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c00180() {
   double input = input0x1c00180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c00ad0() {
   double input = 0.432519;
   input += synapse0x1c00e10();
   input += synapse0x1c00e50();
   input += synapse0x1c00e90();
   input += synapse0x1c00ed0();
   input += synapse0x1c00f10();
   input += synapse0x1c00f50();
   input += synapse0x1c00f90();
   input += synapse0x1c00fd0();
   input += synapse0x1c01010();
   input += synapse0x1c008c0();
   input += synapse0x1c00900();
   input += synapse0x1c00940();
   input += synapse0x1c00980();
   input += synapse0x1c01260();
   input += synapse0x1c012a0();
   input += synapse0x1c012e0();
   input += synapse0x1c00c60();
   input += synapse0x1c00ca0();
   input += synapse0x1c01430();
   input += synapse0x1c01470();
   input += synapse0x1c014b0();
   input += synapse0x1c014f0();
   input += synapse0x1c01530();
   input += synapse0x1c01570();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c00ad0() {
   double input = input0x1c00ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c015b0() {
   double input = -0.133091;
   input += synapse0x1c018f0();
   input += synapse0x1c01930();
   input += synapse0x1c01970();
   input += synapse0x1c019b0();
   input += synapse0x1c019f0();
   input += synapse0x1c01a30();
   input += synapse0x1c01a70();
   input += synapse0x1c01ab0();
   input += synapse0x1c01af0();
   input += synapse0x1c01b30();
   input += synapse0x1c01b70();
   input += synapse0x1c01bb0();
   input += synapse0x1c01bf0();
   input += synapse0x1c01c30();
   input += synapse0x1c01c70();
   input += synapse0x1c01cb0();
   input += synapse0x1c01740();
   input += synapse0x1c01780();
   input += synapse0x1bea250();
   input += synapse0x19c41a0();
   input += synapse0x19c41e0();
   input += synapse0x1adf6f0();
   input += synapse0x1adf730();
   input += synapse0x1bfaf40();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c015b0() {
   double input = input0x1c015b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x19c4900() {
   double input = -0.756216;
   input += synapse0x19c4a90();
   input += synapse0x1c01170();
   input += synapse0x1c011b0();
   input += synapse0x1c011f0();
   input += synapse0x1c01e00();
   input += synapse0x1c01e40();
   input += synapse0x1c01e80();
   input += synapse0x1c01ec0();
   input += synapse0x1c01f00();
   input += synapse0x1c01f40();
   input += synapse0x1c01f80();
   input += synapse0x1c01fc0();
   input += synapse0x1c02000();
   input += synapse0x1c02040();
   input += synapse0x1c02080();
   input += synapse0x1c020c0();
   input += synapse0x1bfaf80();
   input += synapse0x1bfafc0();
   input += synapse0x1bfb000();
   input += synapse0x1c02210();
   input += synapse0x1c02250();
   input += synapse0x1c02290();
   input += synapse0x1c022d0();
   input += synapse0x1c02310();
   return input;
}

double NNfunction-ss_sLdR::neuron0x19c4900() {
   double input = input0x19c4900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c02350() {
   double input = -0.523894;
   input += synapse0x1c02690();
   input += synapse0x1c026d0();
   input += synapse0x1c02710();
   input += synapse0x1c02750();
   input += synapse0x1c02790();
   input += synapse0x1c027d0();
   input += synapse0x1c02810();
   input += synapse0x1c02850();
   input += synapse0x1c02890();
   input += synapse0x1c028d0();
   input += synapse0x1c02910();
   input += synapse0x1c02950();
   input += synapse0x1c02990();
   input += synapse0x1c029d0();
   input += synapse0x1c02a10();
   input += synapse0x1c02a50();
   input += synapse0x1c024e0();
   input += synapse0x1c02520();
   input += synapse0x1c02ba0();
   input += synapse0x1c02be0();
   input += synapse0x1c02c20();
   input += synapse0x1c02c60();
   input += synapse0x1c02ca0();
   input += synapse0x1c02ce0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c02350() {
   double input = input0x1c02350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c02d20() {
   double input = 0.771852;
   input += synapse0x1c03060();
   input += synapse0x1c030a0();
   input += synapse0x1c030e0();
   input += synapse0x1c03120();
   input += synapse0x1c03160();
   input += synapse0x1c031a0();
   input += synapse0x1c031e0();
   input += synapse0x1c03220();
   input += synapse0x1c03260();
   input += synapse0x19c44f0();
   input += synapse0x19c4530();
   input += synapse0x19c4570();
   input += synapse0x19c45b0();
   input += synapse0x19c45f0();
   input += synapse0x19c4630();
   input += synapse0x19c4670();
   input += synapse0x1c02eb0();
   input += synapse0x1c02ef0();
   input += synapse0x19c47c0();
   input += synapse0x19c4800();
   input += synapse0x19c4840();
   input += synapse0x19c4880();
   input += synapse0x19c48c0();
   input += synapse0x1c03ab0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c02d20() {
   double input = input0x1c02d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c03af0() {
   double input = -0.723871;
   input += synapse0x1c03e30();
   input += synapse0x1c03e70();
   input += synapse0x1c03eb0();
   input += synapse0x1c03ef0();
   input += synapse0x1c03f30();
   input += synapse0x1c03f70();
   input += synapse0x1c03fb0();
   input += synapse0x1c03ff0();
   input += synapse0x1c04030();
   input += synapse0x1c04070();
   input += synapse0x1c040b0();
   input += synapse0x1c040f0();
   input += synapse0x1c04130();
   input += synapse0x1c04170();
   input += synapse0x1c041b0();
   input += synapse0x1c041f0();
   input += synapse0x1c03c80();
   input += synapse0x1c03cc0();
   input += synapse0x1c04340();
   input += synapse0x1c04380();
   input += synapse0x1c043c0();
   input += synapse0x1c04400();
   input += synapse0x1c04440();
   input += synapse0x1c04480();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c03af0() {
   double input = input0x1c03af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c044c0() {
   double input = 0.840005;
   input += synapse0x1c04800();
   input += synapse0x1c04840();
   input += synapse0x1c04880();
   input += synapse0x1c048c0();
   input += synapse0x1c04900();
   input += synapse0x1c04940();
   input += synapse0x1c04980();
   input += synapse0x1c049c0();
   input += synapse0x1c04a00();
   input += synapse0x1c04a40();
   input += synapse0x1c04a80();
   input += synapse0x1c04ac0();
   input += synapse0x1c04b00();
   input += synapse0x1c04b40();
   input += synapse0x1c04b80();
   input += synapse0x1c04bc0();
   input += synapse0x1c04650();
   input += synapse0x1c04690();
   input += synapse0x1c04d10();
   input += synapse0x1c04d50();
   input += synapse0x1c04d90();
   input += synapse0x1c04dd0();
   input += synapse0x1c04e10();
   input += synapse0x1c04e50();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c044c0() {
   double input = input0x1c044c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c04e90() {
   double input = -1.37902;
   input += synapse0x1bfe9a0();
   input += synapse0x1bfe9e0();
   input += synapse0x1bfea20();
   input += synapse0x1bfea60();
   input += synapse0x1c053e0();
   input += synapse0x1c05420();
   input += synapse0x1c05460();
   input += synapse0x1c054a0();
   input += synapse0x1c054e0();
   input += synapse0x1c05520();
   input += synapse0x1c05560();
   input += synapse0x1c055a0();
   input += synapse0x1c055e0();
   input += synapse0x1c05620();
   input += synapse0x1c05660();
   input += synapse0x1c056a0();
   input += synapse0x1c05020();
   input += synapse0x1c05060();
   input += synapse0x1c057f0();
   input += synapse0x1c05830();
   input += synapse0x1c05870();
   input += synapse0x1c058b0();
   input += synapse0x1c058f0();
   input += synapse0x1c05930();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c04e90() {
   double input = input0x1c04e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c05970() {
   double input = -2.76739;
   input += synapse0x1c05cb0();
   input += synapse0x1c05cf0();
   input += synapse0x1c05d30();
   input += synapse0x1c05d70();
   input += synapse0x1c05db0();
   input += synapse0x1c05df0();
   input += synapse0x1c05e30();
   input += synapse0x1c05e70();
   input += synapse0x1c05eb0();
   input += synapse0x1c05ef0();
   input += synapse0x1c05f30();
   input += synapse0x1c05f70();
   input += synapse0x1c05fb0();
   input += synapse0x1c05ff0();
   input += synapse0x1c06030();
   input += synapse0x1c06070();
   input += synapse0x1c05b00();
   input += synapse0x1c05b40();
   input += synapse0x1c061c0();
   input += synapse0x1c06200();
   input += synapse0x1c06240();
   input += synapse0x1c06280();
   input += synapse0x1c062c0();
   input += synapse0x1c06300();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c05970() {
   double input = input0x1c05970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c06340() {
   double input = 1.51195;
   input += synapse0x1c06680();
   input += synapse0x1c066c0();
   input += synapse0x1c06700();
   input += synapse0x1c06740();
   input += synapse0x1c06780();
   input += synapse0x1c067c0();
   input += synapse0x1c06800();
   input += synapse0x1c06840();
   input += synapse0x1c06880();
   input += synapse0x1c068c0();
   input += synapse0x1c06900();
   input += synapse0x1c06940();
   input += synapse0x1c06980();
   input += synapse0x1c069c0();
   input += synapse0x1c06a00();
   input += synapse0x1c06a40();
   input += synapse0x1c064d0();
   input += synapse0x1c06510();
   input += synapse0x1c032a0();
   input += synapse0x1c032e0();
   input += synapse0x1c03320();
   input += synapse0x1c03360();
   input += synapse0x1c033a0();
   input += synapse0x1c033e0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c06340() {
   double input = input0x1c06340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c03420() {
   double input = 1.25751;
   input += synapse0x1c03760();
   input += synapse0x1c037a0();
   input += synapse0x1c037e0();
   input += synapse0x1c03820();
   input += synapse0x1c03860();
   input += synapse0x1c038a0();
   input += synapse0x1c038e0();
   input += synapse0x1c03920();
   input += synapse0x1c03960();
   input += synapse0x1c039a0();
   input += synapse0x1c039e0();
   input += synapse0x1c03a20();
   input += synapse0x1c03a60();
   input += synapse0x1c07ba0();
   input += synapse0x1c07be0();
   input += synapse0x1c07c20();
   input += synapse0x1c035b0();
   input += synapse0x1c035f0();
   input += synapse0x1c07d70();
   input += synapse0x1c07db0();
   input += synapse0x1c07df0();
   input += synapse0x1c07e30();
   input += synapse0x1c07e70();
   input += synapse0x1c07eb0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c03420() {
   double input = input0x1c03420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c07ef0() {
   double input = -2.19314;
   input += synapse0x1c08230();
   input += synapse0x1c08270();
   input += synapse0x1c082b0();
   input += synapse0x1c082f0();
   input += synapse0x1c08330();
   input += synapse0x1c08370();
   input += synapse0x1c083b0();
   input += synapse0x1c083f0();
   input += synapse0x1c08430();
   input += synapse0x1c08470();
   input += synapse0x1c084b0();
   input += synapse0x1c084f0();
   input += synapse0x1c08530();
   input += synapse0x1c08570();
   input += synapse0x1c085b0();
   input += synapse0x1c085f0();
   input += synapse0x1c08080();
   input += synapse0x1c080c0();
   input += synapse0x1c08740();
   input += synapse0x1c08780();
   input += synapse0x1c087c0();
   input += synapse0x1c08800();
   input += synapse0x1c08840();
   input += synapse0x1c08880();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c07ef0() {
   double input = input0x1c07ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c088c0() {
   double input = 0.180416;
   input += synapse0x1c08c00();
   input += synapse0x1c08c40();
   input += synapse0x1c08c80();
   input += synapse0x1c08cc0();
   input += synapse0x1c08d00();
   input += synapse0x1c08d40();
   input += synapse0x1c08d80();
   input += synapse0x1c08dc0();
   input += synapse0x1c08e00();
   input += synapse0x1c08e40();
   input += synapse0x1c08e80();
   input += synapse0x1c08ec0();
   input += synapse0x1c08f00();
   input += synapse0x1c08f40();
   input += synapse0x1c08f80();
   input += synapse0x1c08fc0();
   input += synapse0x1c08a50();
   input += synapse0x1c08a90();
   input += synapse0x1c09110();
   input += synapse0x1c09150();
   input += synapse0x1c09190();
   input += synapse0x1c091d0();
   input += synapse0x1c09210();
   input += synapse0x1c09250();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c088c0() {
   double input = input0x1c088c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c09290() {
   double input = -0.390362;
   input += synapse0x1c095d0();
   input += synapse0x1c09610();
   input += synapse0x1c09650();
   input += synapse0x1c09690();
   input += synapse0x1c096d0();
   input += synapse0x1c09710();
   input += synapse0x1c09750();
   input += synapse0x1c09790();
   input += synapse0x1c097d0();
   input += synapse0x1c09810();
   input += synapse0x1c09850();
   input += synapse0x1c09890();
   input += synapse0x1c098d0();
   input += synapse0x1c09910();
   input += synapse0x1c09950();
   input += synapse0x1c09990();
   input += synapse0x1c09420();
   input += synapse0x1c09460();
   input += synapse0x1c09ae0();
   input += synapse0x1c09b20();
   input += synapse0x1c09b60();
   input += synapse0x1c09ba0();
   input += synapse0x1c09be0();
   input += synapse0x1c09c20();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c09290() {
   double input = input0x1c09290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c09c60() {
   double input = -0.62458;
   input += synapse0x1c09fa0();
   input += synapse0x1bfb370();
   input += synapse0x1bfb3b0();
   input += synapse0x1bfb6b0();
   input += synapse0x1bfb6f0();
   input += synapse0x1bfb9f0();
   input += synapse0x1bfba30();
   input += synapse0x1bfbd30();
   input += synapse0x1bfbd70();
   input += synapse0x1bfc070();
   input += synapse0x1bfc0b0();
   input += synapse0x1bfc3b0();
   input += synapse0x1bfc3f0();
   input += synapse0x1bfc6f0();
   input += synapse0x1bfc730();
   input += synapse0x1bfca30();
   input += synapse0x1bfca70();
   input += synapse0x1bfcd70();
   input += synapse0x1bfcdb0();
   input += synapse0x1bfd0b0();
   input += synapse0x1bfd0f0();
   input += synapse0x1bfd3f0();
   input += synapse0x1bfd430();
   input += synapse0x1bfd730();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c09c60() {
   double input = input0x1c09c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c0ba70() {
   double input = -3.49072;
   input += synapse0x1bfd770();
   input += synapse0x1bfe430();
   input += synapse0x1bfe470();
   input += synapse0x1c09df0();
   input += synapse0x1c09e30();
   input += synapse0x1bfe770();
   input += synapse0x1bfe7b0();
   input += synapse0x19b6180();
   input += synapse0x19b61c0();
   input += synapse0x1bfeef0();
   input += synapse0x1bfef30();
   input += synapse0x1bff230();
   input += synapse0x1bff270();
   input += synapse0x1bff570();
   input += synapse0x1bff5b0();
   input += synapse0x1bff8b0();
   input += synapse0x1bff8f0();
   input += synapse0x1bffbf0();
   input += synapse0x1bffc30();
   input += synapse0x1bfff30();
   input += synapse0x1bfff70();
   input += synapse0x1bfda70();
   input += synapse0x1bfdab0();
   input += synapse0x1c0bd10();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c0ba70() {
   double input = input0x1c0ba70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c0bd50() {
   double input = -1.23362;
   input += synapse0x1c0c090();
   input += synapse0x1c0c0d0();
   input += synapse0x1c0c110();
   input += synapse0x1c0c150();
   input += synapse0x1c0c190();
   input += synapse0x1c0c1d0();
   input += synapse0x1c0c210();
   input += synapse0x1c0c250();
   input += synapse0x1c0c290();
   input += synapse0x1c0c2d0();
   input += synapse0x1c0c310();
   input += synapse0x1c0c350();
   input += synapse0x1c0c390();
   input += synapse0x1c0c3d0();
   input += synapse0x1c0c410();
   input += synapse0x1c0c450();
   input += synapse0x1c0bee0();
   input += synapse0x1c0bf20();
   input += synapse0x1c0c5a0();
   input += synapse0x1c0c5e0();
   input += synapse0x1c0c620();
   input += synapse0x1c0c660();
   input += synapse0x1c0c6a0();
   input += synapse0x1c0c6e0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c0bd50() {
   double input = input0x1c0bd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c0c720() {
   double input = 1.51757;
   input += synapse0x1c0ca60();
   input += synapse0x1c0caa0();
   input += synapse0x1c0cae0();
   input += synapse0x1c0cb20();
   input += synapse0x1c0cb60();
   input += synapse0x1c0cba0();
   input += synapse0x1c0cbe0();
   input += synapse0x1c0cc20();
   input += synapse0x1c0cc60();
   input += synapse0x1c0cca0();
   input += synapse0x1c0cce0();
   input += synapse0x1c0cd20();
   input += synapse0x1c0cd60();
   input += synapse0x1c0cda0();
   input += synapse0x1c0cde0();
   input += synapse0x1c0ce20();
   input += synapse0x1c0c8b0();
   input += synapse0x1c0c8f0();
   input += synapse0x1c0cf70();
   input += synapse0x1c0cfb0();
   input += synapse0x1c0cff0();
   input += synapse0x1c0d030();
   input += synapse0x1c0d070();
   input += synapse0x1c0d0b0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c0c720() {
   double input = input0x1c0c720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c0d0f0() {
   double input = 0.219066;
   input += synapse0x1c0d430();
   input += synapse0x1c0d470();
   input += synapse0x1c0d4b0();
   input += synapse0x1c0d4f0();
   input += synapse0x1c0d530();
   input += synapse0x1c0d570();
   input += synapse0x1c0d5b0();
   input += synapse0x1c0d5f0();
   input += synapse0x1c0d630();
   input += synapse0x1c0d670();
   input += synapse0x1c0d6b0();
   input += synapse0x1c0d6f0();
   input += synapse0x1c0d730();
   input += synapse0x1c0d770();
   input += synapse0x1c0d7b0();
   input += synapse0x1c0d7f0();
   input += synapse0x1c0d280();
   input += synapse0x1c0d2c0();
   input += synapse0x1c0d940();
   input += synapse0x1c0d980();
   input += synapse0x1c0d9c0();
   input += synapse0x1c0da00();
   input += synapse0x1c0da40();
   input += synapse0x1c0da80();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c0d0f0() {
   double input = input0x1c0d0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c0dac0() {
   double input = 1.1333;
   input += synapse0x1c0de00();
   input += synapse0x1c0de40();
   input += synapse0x1c0de80();
   input += synapse0x1c0dec0();
   input += synapse0x1c0df00();
   input += synapse0x1c0df40();
   input += synapse0x1c0df80();
   input += synapse0x1c0dfc0();
   input += synapse0x1c0e000();
   input += synapse0x1c0e040();
   input += synapse0x1c0e080();
   input += synapse0x1c0e0c0();
   input += synapse0x1c0e100();
   input += synapse0x1c0e140();
   input += synapse0x1c0e180();
   input += synapse0x1c0e1c0();
   input += synapse0x1c0dc50();
   input += synapse0x1c0dc90();
   input += synapse0x1c0e310();
   input += synapse0x1c0e350();
   input += synapse0x1c0e390();
   input += synapse0x1c0e3d0();
   input += synapse0x1c0e410();
   input += synapse0x1c0e450();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c0dac0() {
   double input = input0x1c0dac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c0e490() {
   double input = -0.761948;
   input += synapse0x1c0e7d0();
   input += synapse0x1c0e810();
   input += synapse0x1c0e850();
   input += synapse0x1c0e890();
   input += synapse0x1c0e8d0();
   input += synapse0x1c0e910();
   input += synapse0x1c0e950();
   input += synapse0x1c0e990();
   input += synapse0x1c0e9d0();
   input += synapse0x1c06b90();
   input += synapse0x1c06bd0();
   input += synapse0x1c06c10();
   input += synapse0x1c06c50();
   input += synapse0x1c06c90();
   input += synapse0x1c06cd0();
   input += synapse0x1c06d10();
   input += synapse0x1c0e620();
   input += synapse0x1c0e660();
   input += synapse0x1c06e60();
   input += synapse0x1c06ea0();
   input += synapse0x1c06ee0();
   input += synapse0x1c06f20();
   input += synapse0x1c06f60();
   input += synapse0x1c06fa0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c0e490() {
   double input = input0x1c0e490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c06fe0() {
   double input = -0.879499;
   input += synapse0x1c07320();
   input += synapse0x1c07360();
   input += synapse0x1c073a0();
   input += synapse0x1c073e0();
   input += synapse0x1c07420();
   input += synapse0x1c07460();
   input += synapse0x1c074a0();
   input += synapse0x1c074e0();
   input += synapse0x1c07520();
   input += synapse0x1c07560();
   input += synapse0x1c075a0();
   input += synapse0x1c075e0();
   input += synapse0x1c07620();
   input += synapse0x1c07660();
   input += synapse0x1c076a0();
   input += synapse0x1c076e0();
   input += synapse0x1c07170();
   input += synapse0x1c071b0();
   input += synapse0x1c07830();
   input += synapse0x1c07870();
   input += synapse0x1c078b0();
   input += synapse0x1c078f0();
   input += synapse0x1c07930();
   input += synapse0x1c07970();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c06fe0() {
   double input = input0x1c06fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c079b0() {
   double input = -2.31607;
   input += synapse0x1c07b40();
   input += synapse0x1c10bd0();
   input += synapse0x1c10c10();
   input += synapse0x1c10c50();
   input += synapse0x1c10c90();
   input += synapse0x1c10cd0();
   input += synapse0x1c10d10();
   input += synapse0x1c10d50();
   input += synapse0x1c10d90();
   input += synapse0x1c10dd0();
   input += synapse0x1c10e10();
   input += synapse0x1c10e50();
   input += synapse0x1c10e90();
   input += synapse0x1c10ed0();
   input += synapse0x1c10f10();
   input += synapse0x1c10f50();
   input += synapse0x1c10a20();
   input += synapse0x1c10a60();
   input += synapse0x1c110a0();
   input += synapse0x1c110e0();
   input += synapse0x1c11120();
   input += synapse0x1c11160();
   input += synapse0x1c111a0();
   input += synapse0x1c111e0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c079b0() {
   double input = input0x1c079b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c11220() {
   double input = -0.547075;
   input += synapse0x1c11560();
   input += synapse0x1c115a0();
   input += synapse0x1c115e0();
   input += synapse0x1c11620();
   input += synapse0x1c11660();
   input += synapse0x1c116a0();
   input += synapse0x1c116e0();
   input += synapse0x1c11720();
   input += synapse0x1c11760();
   input += synapse0x1c117a0();
   input += synapse0x1c117e0();
   input += synapse0x1c11820();
   input += synapse0x1c11860();
   input += synapse0x1c118a0();
   input += synapse0x1c118e0();
   input += synapse0x1c11920();
   input += synapse0x1c113b0();
   input += synapse0x1c113f0();
   input += synapse0x1c11a70();
   input += synapse0x1c11ab0();
   input += synapse0x1c11af0();
   input += synapse0x1c11b30();
   input += synapse0x1c11b70();
   input += synapse0x1c11bb0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c11220() {
   double input = input0x1c11220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c11bf0() {
   double input = 2.20355;
   input += synapse0x1c11f30();
   input += synapse0x1c11f70();
   input += synapse0x1c11fb0();
   input += synapse0x1c11ff0();
   input += synapse0x1c12030();
   input += synapse0x1c12070();
   input += synapse0x1c120b0();
   input += synapse0x1c120f0();
   input += synapse0x1c12130();
   input += synapse0x1c12170();
   input += synapse0x1c121b0();
   input += synapse0x1c121f0();
   input += synapse0x1c12230();
   input += synapse0x1c12270();
   input += synapse0x1c122b0();
   input += synapse0x1c122f0();
   input += synapse0x1c11d80();
   input += synapse0x1c11dc0();
   input += synapse0x1c12440();
   input += synapse0x1c12480();
   input += synapse0x1c124c0();
   input += synapse0x1c12500();
   input += synapse0x1c12540();
   input += synapse0x1c12580();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c11bf0() {
   double input = input0x1c11bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c125c0() {
   double input = -1.84451;
   input += synapse0x1c12900();
   input += synapse0x1c12940();
   input += synapse0x1c12980();
   input += synapse0x1c129c0();
   input += synapse0x1c12a00();
   input += synapse0x1c12a40();
   input += synapse0x1c12a80();
   input += synapse0x1c12ac0();
   input += synapse0x1c12b00();
   input += synapse0x1c12b40();
   input += synapse0x1c12b80();
   input += synapse0x1c12bc0();
   input += synapse0x1c12c00();
   input += synapse0x1c12c40();
   input += synapse0x1c12c80();
   input += synapse0x1c12cc0();
   input += synapse0x1c12750();
   input += synapse0x1c12790();
   input += synapse0x1c12e10();
   input += synapse0x1c12e50();
   input += synapse0x1c12e90();
   input += synapse0x1c12ed0();
   input += synapse0x1c12f10();
   input += synapse0x1c12f50();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c125c0() {
   double input = input0x1c125c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c12f90() {
   double input = 1.53745;
   input += synapse0x1c132d0();
   input += synapse0x1c13310();
   input += synapse0x1c13350();
   input += synapse0x1c13390();
   input += synapse0x1c133d0();
   input += synapse0x1c13410();
   input += synapse0x1c13450();
   input += synapse0x1c13490();
   input += synapse0x1c134d0();
   input += synapse0x1c13510();
   input += synapse0x1c13550();
   input += synapse0x1c13590();
   input += synapse0x1c135d0();
   input += synapse0x1c13610();
   input += synapse0x1c13650();
   input += synapse0x1c13690();
   input += synapse0x1c13120();
   input += synapse0x1c13160();
   input += synapse0x1c137e0();
   input += synapse0x1c13820();
   input += synapse0x1c13860();
   input += synapse0x1c138a0();
   input += synapse0x1c138e0();
   input += synapse0x1c13920();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c12f90() {
   double input = input0x1c12f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c13960() {
   double input = -0.601618;
   input += synapse0x1c13ca0();
   input += synapse0x1c13ce0();
   input += synapse0x1c13d20();
   input += synapse0x1c13d60();
   input += synapse0x1c13da0();
   input += synapse0x1c13de0();
   input += synapse0x1c13e20();
   input += synapse0x1c13e60();
   input += synapse0x1c13ea0();
   input += synapse0x1c13ee0();
   input += synapse0x1c13f20();
   input += synapse0x1c13f60();
   input += synapse0x1c13fa0();
   input += synapse0x1c13fe0();
   input += synapse0x1c14020();
   input += synapse0x1c14060();
   input += synapse0x1c13af0();
   input += synapse0x1c13b30();
   input += synapse0x1c141b0();
   input += synapse0x1c141f0();
   input += synapse0x1c14230();
   input += synapse0x1c14270();
   input += synapse0x1c142b0();
   input += synapse0x1c142f0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c13960() {
   double input = input0x1c13960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c14330() {
   double input = 1.26237;
   input += synapse0x1c14670();
   input += synapse0x1c146b0();
   input += synapse0x1c146f0();
   input += synapse0x1c14730();
   input += synapse0x1c14770();
   input += synapse0x1c147b0();
   input += synapse0x1c147f0();
   input += synapse0x1c14830();
   input += synapse0x1c14870();
   input += synapse0x1c148b0();
   input += synapse0x1c148f0();
   input += synapse0x1c14930();
   input += synapse0x1c14970();
   input += synapse0x1c149b0();
   input += synapse0x1c149f0();
   input += synapse0x1c14a30();
   input += synapse0x1c144c0();
   input += synapse0x1c14500();
   input += synapse0x1c14b80();
   input += synapse0x1c14bc0();
   input += synapse0x1c14c00();
   input += synapse0x1c14c40();
   input += synapse0x1c14c80();
   input += synapse0x1c14cc0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c14330() {
   double input = input0x1c14330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c14d00() {
   double input = 0.100045;
   input += synapse0x1c15040();
   input += synapse0x1c15080();
   input += synapse0x1c150c0();
   input += synapse0x1c15100();
   input += synapse0x1c15140();
   input += synapse0x1c15180();
   input += synapse0x1c151c0();
   input += synapse0x1c15200();
   input += synapse0x1c15240();
   input += synapse0x1c15280();
   input += synapse0x1c152c0();
   input += synapse0x1c15300();
   input += synapse0x1c15340();
   input += synapse0x1c15380();
   input += synapse0x1c153c0();
   input += synapse0x1c15400();
   input += synapse0x1c14e90();
   input += synapse0x1c14ed0();
   input += synapse0x1c15550();
   input += synapse0x1c15590();
   input += synapse0x1c155d0();
   input += synapse0x1c15610();
   input += synapse0x1c15650();
   input += synapse0x1c15690();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c14d00() {
   double input = input0x1c14d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c156d0() {
   double input = 0.524831;
   input += synapse0x1c15a10();
   input += synapse0x1c09fe0();
   input += synapse0x1c0a020();
   input += synapse0x1c0a060();
   input += synapse0x1c0a2b0();
   input += synapse0x1c0a2f0();
   input += synapse0x1c0a330();
   input += synapse0x1c0a580();
   input += synapse0x1c0a5c0();
   input += synapse0x1c0a810();
   input += synapse0x1c0a850();
   input += synapse0x1c0a890();
   input += synapse0x1c0aae0();
   input += synapse0x1c0ab20();
   input += synapse0x1c0ad70();
   input += synapse0x1c0adb0();
   input += synapse0x1c15860();
   input += synapse0x1c158a0();
   input += synapse0x1c0af00();
   input += synapse0x1c0b410();
   input += synapse0x1c0b450();
   input += synapse0x1c0b490();
   input += synapse0x1c0b6e0();
   input += synapse0x1c0b720();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c156d0() {
   double input = input0x1c156d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c0b760() {
   double input = 0.238706;
   input += synapse0x1c0afd0();
   input += synapse0x1c0b010();
   input += synapse0x1c0b050();
   input += synapse0x1c0b090();
   input += synapse0x1c0ba10();
   input += synapse0x1c17d60();
   input += synapse0x1c17da0();
   input += synapse0x1c17de0();
   input += synapse0x1c17e20();
   input += synapse0x1c17e60();
   input += synapse0x1c17ea0();
   input += synapse0x1c17ee0();
   input += synapse0x1c17f20();
   input += synapse0x1c17f60();
   input += synapse0x1c17fa0();
   input += synapse0x1c17fe0();
   input += synapse0x1c0b8f0();
   input += synapse0x1c0b930();
   input += synapse0x1c18130();
   input += synapse0x1c18170();
   input += synapse0x1c181b0();
   input += synapse0x1c181f0();
   input += synapse0x1c18230();
   input += synapse0x1c18270();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c0b760() {
   double input = input0x1c0b760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c182b0() {
   double input = 0.850471;
   input += synapse0x1c185f0();
   input += synapse0x1c18630();
   input += synapse0x1c18670();
   input += synapse0x1c186b0();
   input += synapse0x1c186f0();
   input += synapse0x1c18730();
   input += synapse0x1c18770();
   input += synapse0x1c187b0();
   input += synapse0x1c187f0();
   input += synapse0x1c18830();
   input += synapse0x1c18870();
   input += synapse0x1c188b0();
   input += synapse0x1c188f0();
   input += synapse0x1c18930();
   input += synapse0x1c18970();
   input += synapse0x1c189b0();
   input += synapse0x1c18440();
   input += synapse0x1c18480();
   input += synapse0x1c18b00();
   input += synapse0x1c18b40();
   input += synapse0x1c18b80();
   input += synapse0x1c18bc0();
   input += synapse0x1c18c00();
   input += synapse0x1c18c40();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c182b0() {
   double input = input0x1c182b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c18c80() {
   double input = -0.143868;
   input += synapse0x1c18fc0();
   input += synapse0x1c19000();
   input += synapse0x1c19040();
   input += synapse0x1c19080();
   input += synapse0x1c190c0();
   input += synapse0x1c19100();
   input += synapse0x1c19140();
   input += synapse0x1c19180();
   input += synapse0x1c191c0();
   input += synapse0x1c19200();
   input += synapse0x1c19240();
   input += synapse0x1c19280();
   input += synapse0x1c192c0();
   input += synapse0x1c19300();
   input += synapse0x1c19340();
   input += synapse0x1c19380();
   input += synapse0x1c18e10();
   input += synapse0x1c18e50();
   input += synapse0x1c194d0();
   input += synapse0x1c19510();
   input += synapse0x1c19550();
   input += synapse0x1c19590();
   input += synapse0x1c195d0();
   input += synapse0x1c19610();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c18c80() {
   double input = input0x1c18c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c19650() {
   double input = -0.529097;
   input += synapse0x1c19990();
   input += synapse0x1c199d0();
   input += synapse0x1c19a10();
   input += synapse0x1c19a50();
   input += synapse0x1c19a90();
   input += synapse0x1c19ad0();
   input += synapse0x1c19b10();
   input += synapse0x1c19b50();
   input += synapse0x1c19b90();
   input += synapse0x1c19bd0();
   input += synapse0x1c19c10();
   input += synapse0x1c19c50();
   input += synapse0x1c19c90();
   input += synapse0x1c19cd0();
   input += synapse0x1c19d10();
   input += synapse0x1c19d50();
   input += synapse0x1c197e0();
   input += synapse0x1c19820();
   input += synapse0x1c19ea0();
   input += synapse0x1c19ee0();
   input += synapse0x1c19f20();
   input += synapse0x1c19f60();
   input += synapse0x1c19fa0();
   input += synapse0x1c19fe0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c19650() {
   double input = input0x1c19650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c1a020() {
   double input = -0.852225;
   input += synapse0x1c1a360();
   input += synapse0x1c1a3a0();
   input += synapse0x1c1a3e0();
   input += synapse0x1c1a420();
   input += synapse0x1c1a460();
   input += synapse0x1c1a4a0();
   input += synapse0x1c1a4e0();
   input += synapse0x1c1a520();
   input += synapse0x1c1a560();
   input += synapse0x1c1a5a0();
   input += synapse0x1c1a5e0();
   input += synapse0x1c1a620();
   input += synapse0x1c1a660();
   input += synapse0x1c1a6a0();
   input += synapse0x1c1a6e0();
   input += synapse0x1c1a720();
   input += synapse0x1c1a1b0();
   input += synapse0x1c1a1f0();
   input += synapse0x1c1a870();
   input += synapse0x1c1a8b0();
   input += synapse0x1c1a8f0();
   input += synapse0x1c1a930();
   input += synapse0x1c1a970();
   input += synapse0x1c1a9b0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c1a020() {
   double input = input0x1c1a020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c1a9f0() {
   double input = 0.625835;
   input += synapse0x1c1ad30();
   input += synapse0x1c1ad70();
   input += synapse0x1c1adb0();
   input += synapse0x1c1adf0();
   input += synapse0x1c1ae30();
   input += synapse0x1c1ae70();
   input += synapse0x1c1aeb0();
   input += synapse0x1c1aef0();
   input += synapse0x1c1af30();
   input += synapse0x1c1af70();
   input += synapse0x1c1afb0();
   input += synapse0x1c1aff0();
   input += synapse0x1c1b030();
   input += synapse0x1c1b070();
   input += synapse0x1c1b0b0();
   input += synapse0x1c1b0f0();
   input += synapse0x1c1ab80();
   input += synapse0x1c1abc0();
   input += synapse0x1c1b240();
   input += synapse0x1c1b280();
   input += synapse0x1c1b2c0();
   input += synapse0x1c1b300();
   input += synapse0x1c1b340();
   input += synapse0x1c1b380();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c1a9f0() {
   double input = input0x1c1a9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c1b3c0() {
   double input = 1.25654;
   input += synapse0x1c1b700();
   input += synapse0x1c1b740();
   input += synapse0x1c1b780();
   input += synapse0x1c1b7c0();
   input += synapse0x1c1b800();
   input += synapse0x1c1b840();
   input += synapse0x1c1b880();
   input += synapse0x1c1b8c0();
   input += synapse0x1c1b900();
   input += synapse0x1c1b940();
   input += synapse0x1c1b980();
   input += synapse0x1c1b9c0();
   input += synapse0x1c1ba00();
   input += synapse0x1c1ba40();
   input += synapse0x1c1ba80();
   input += synapse0x1c1bac0();
   input += synapse0x1c1b550();
   input += synapse0x1c1b590();
   input += synapse0x1c1bc10();
   input += synapse0x1c1bc50();
   input += synapse0x1c1bc90();
   input += synapse0x1c1bcd0();
   input += synapse0x1c1bd10();
   input += synapse0x1c1bd50();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c1b3c0() {
   double input = input0x1c1b3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c1bd90() {
   double input = 1.76359;
   input += synapse0x1c1c0d0();
   input += synapse0x1c1c110();
   input += synapse0x1c1c150();
   input += synapse0x1c1c190();
   input += synapse0x1c1c1d0();
   input += synapse0x1c1c210();
   input += synapse0x1c1c250();
   input += synapse0x1c1c290();
   input += synapse0x1c1c2d0();
   input += synapse0x1c1c310();
   input += synapse0x1c1c350();
   input += synapse0x1c1c390();
   input += synapse0x1c1c3d0();
   input += synapse0x1c1c410();
   input += synapse0x1c1c450();
   input += synapse0x1c1c490();
   input += synapse0x1c1bf20();
   input += synapse0x1c1bf60();
   input += synapse0x1c1c5e0();
   input += synapse0x1c1c620();
   input += synapse0x1c1c660();
   input += synapse0x1c1c6a0();
   input += synapse0x1c1c6e0();
   input += synapse0x1c1c720();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c1bd90() {
   double input = input0x1c1bd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c1c760() {
   double input = -0.728395;
   input += synapse0x1c051d0();
   input += synapse0x1c05210();
   input += synapse0x1c05250();
   input += synapse0x1c05290();
   input += synapse0x1c052d0();
   input += synapse0x1c05310();
   input += synapse0x1c05350();
   input += synapse0x1c05390();
   input += synapse0x1c1ceb0();
   input += synapse0x1c1cef0();
   input += synapse0x1c1cf30();
   input += synapse0x1c1cf70();
   input += synapse0x1c1cfb0();
   input += synapse0x1c1cff0();
   input += synapse0x1c1d030();
   input += synapse0x1c1d070();
   input += synapse0x1c1c8f0();
   input += synapse0x1c1c930();
   input += synapse0x1c1d1c0();
   input += synapse0x1c1d200();
   input += synapse0x1c1d240();
   input += synapse0x1c1d280();
   input += synapse0x1c1d2c0();
   input += synapse0x1c1d300();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c1c760() {
   double input = input0x1c1c760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c1d340() {
   double input = -1.13324;
   input += synapse0x1c1d680();
   input += synapse0x1c1d6c0();
   input += synapse0x1c1d700();
   input += synapse0x1c1d740();
   input += synapse0x1c1d780();
   input += synapse0x1c1d7c0();
   input += synapse0x1c1d800();
   input += synapse0x1c1d840();
   input += synapse0x1c1d880();
   input += synapse0x1c1d8c0();
   input += synapse0x1c1d900();
   input += synapse0x1c1d940();
   input += synapse0x1c1d980();
   input += synapse0x1c1d9c0();
   input += synapse0x1c1da00();
   input += synapse0x1c1da40();
   input += synapse0x1c1d4d0();
   input += synapse0x1c1d510();
   input += synapse0x1c1db90();
   input += synapse0x1c1dbd0();
   input += synapse0x1c1dc10();
   input += synapse0x1c1dc50();
   input += synapse0x1c1dc90();
   input += synapse0x1c1dcd0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c1d340() {
   double input = input0x1c1d340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c1dd10() {
   double input = -1.74099;
   input += synapse0x1c1e050();
   input += synapse0x1c1e090();
   input += synapse0x1c1e0d0();
   input += synapse0x1c1e110();
   input += synapse0x1c1e150();
   input += synapse0x1c1e190();
   input += synapse0x1c1e1d0();
   input += synapse0x1c1e210();
   input += synapse0x1c1e250();
   input += synapse0x1c1e290();
   input += synapse0x1c1e2d0();
   input += synapse0x1c1e310();
   input += synapse0x1c1e350();
   input += synapse0x1c1e390();
   input += synapse0x1c1e3d0();
   input += synapse0x1c1e410();
   input += synapse0x1c1dea0();
   input += synapse0x1c1dee0();
   input += synapse0x1c0ea10();
   input += synapse0x1c0ea50();
   input += synapse0x1c0ea90();
   input += synapse0x1c0ead0();
   input += synapse0x1c0eb10();
   input += synapse0x1c0eb50();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c1dd10() {
   double input = input0x1c1dd10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c0eb90() {
   double input = 2.09368;
   input += synapse0x1c0eed0();
   input += synapse0x1c0ef10();
   input += synapse0x1c0ef50();
   input += synapse0x1c0ef90();
   input += synapse0x1c0efd0();
   input += synapse0x1c0f010();
   input += synapse0x1c0f050();
   input += synapse0x1c0f090();
   input += synapse0x1c0f0d0();
   input += synapse0x1c0f110();
   input += synapse0x1c0f150();
   input += synapse0x1c0f190();
   input += synapse0x1c0f1d0();
   input += synapse0x1c0f210();
   input += synapse0x1c0f250();
   input += synapse0x1c0f290();
   input += synapse0x1c0ed20();
   input += synapse0x1c0ed60();
   input += synapse0x1c0f3e0();
   input += synapse0x1c0f420();
   input += synapse0x1c0f460();
   input += synapse0x1c0f4a0();
   input += synapse0x1c0f4e0();
   input += synapse0x1c0f520();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c0eb90() {
   double input = input0x1c0eb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c0f560() {
   double input = 0.424955;
   input += synapse0x1c0f8a0();
   input += synapse0x1c0f8e0();
   input += synapse0x1c0f920();
   input += synapse0x1c0f960();
   input += synapse0x1c0f9a0();
   input += synapse0x1c0f9e0();
   input += synapse0x1c0fa20();
   input += synapse0x1c0fa60();
   input += synapse0x1c0faa0();
   input += synapse0x1c0fae0();
   input += synapse0x1c0fb20();
   input += synapse0x1c0fb60();
   input += synapse0x1c0fba0();
   input += synapse0x1c0fbe0();
   input += synapse0x1c0fc20();
   input += synapse0x1c0fc60();
   input += synapse0x1c0f6f0();
   input += synapse0x1c0f730();
   input += synapse0x1c0fdb0();
   input += synapse0x1c0fdf0();
   input += synapse0x1c0fe30();
   input += synapse0x1c0fe70();
   input += synapse0x1c0feb0();
   input += synapse0x1c0fef0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c0f560() {
   double input = input0x1c0f560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c0ff30() {
   double input = 0.442898;
   input += synapse0x1c10270();
   input += synapse0x1c102b0();
   input += synapse0x1c102f0();
   input += synapse0x1c10330();
   input += synapse0x1c10370();
   input += synapse0x1c103b0();
   input += synapse0x1c103f0();
   input += synapse0x1c10430();
   input += synapse0x1c10470();
   input += synapse0x1c104b0();
   input += synapse0x1c104f0();
   input += synapse0x1c10530();
   input += synapse0x1c10570();
   input += synapse0x1c105b0();
   input += synapse0x1c105f0();
   input += synapse0x1c10630();
   input += synapse0x1c100c0();
   input += synapse0x1c10100();
   input += synapse0x1c10780();
   input += synapse0x1c107c0();
   input += synapse0x1c10800();
   input += synapse0x1c10840();
   input += synapse0x1c10880();
   input += synapse0x1c108c0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c0ff30() {
   double input = input0x1c0ff30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c22570() {
   double input = -1.46254;
   input += synapse0x1c22790();
   input += synapse0x1c227d0();
   input += synapse0x1c22810();
   input += synapse0x1c22850();
   input += synapse0x1c22890();
   input += synapse0x1c228d0();
   input += synapse0x1c22910();
   input += synapse0x1c22950();
   input += synapse0x1c22990();
   input += synapse0x1c229d0();
   input += synapse0x1c22a10();
   input += synapse0x1c22a50();
   input += synapse0x1c22a90();
   input += synapse0x1c22ad0();
   input += synapse0x1c22b10();
   input += synapse0x1c22b50();
   input += synapse0x1c10900();
   input += synapse0x1c10940();
   input += synapse0x1c22ca0();
   input += synapse0x1c22ce0();
   input += synapse0x1c22d20();
   input += synapse0x1c22d60();
   input += synapse0x1c22da0();
   input += synapse0x1c22de0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c22570() {
   double input = input0x1c22570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c22e20() {
   double input = -0.184082;
   input += synapse0x1c23160();
   input += synapse0x1c231a0();
   input += synapse0x1c231e0();
   input += synapse0x1c23220();
   input += synapse0x1c23260();
   input += synapse0x1c232a0();
   input += synapse0x1c232e0();
   input += synapse0x1c23320();
   input += synapse0x1c23360();
   input += synapse0x1c233a0();
   input += synapse0x1c233e0();
   input += synapse0x1c23420();
   input += synapse0x1c23460();
   input += synapse0x1c234a0();
   input += synapse0x1c234e0();
   input += synapse0x1c23520();
   input += synapse0x1c22fb0();
   input += synapse0x1c22ff0();
   input += synapse0x1c23670();
   input += synapse0x1c236b0();
   input += synapse0x1c236f0();
   input += synapse0x1c23730();
   input += synapse0x1c23770();
   input += synapse0x1c237b0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c22e20() {
   double input = input0x1c22e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c237f0() {
   double input = 5.93564;
   input += synapse0x1c23b30();
   input += synapse0x1c23b70();
   input += synapse0x1c23bb0();
   input += synapse0x1c23bf0();
   input += synapse0x1c23c30();
   input += synapse0x1c23c70();
   input += synapse0x1c23cb0();
   input += synapse0x1c23cf0();
   input += synapse0x1c23d30();
   input += synapse0x1c23d70();
   input += synapse0x1c23db0();
   input += synapse0x1c23df0();
   input += synapse0x1c23e30();
   input += synapse0x1c23e70();
   input += synapse0x1c23eb0();
   input += synapse0x1c23ef0();
   input += synapse0x1c23980();
   input += synapse0x1c239c0();
   input += synapse0x1c24040();
   input += synapse0x1c24080();
   input += synapse0x1c240c0();
   input += synapse0x1c24100();
   input += synapse0x1c24140();
   input += synapse0x1c24180();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c237f0() {
   double input = input0x1c237f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c241c0() {
   double input = -1.0941;
   input += synapse0x1c24500();
   input += synapse0x1c24540();
   input += synapse0x1c24580();
   input += synapse0x1c245c0();
   input += synapse0x1c24600();
   input += synapse0x1c24640();
   input += synapse0x1c24680();
   input += synapse0x1c246c0();
   input += synapse0x1c24700();
   input += synapse0x1c24740();
   input += synapse0x1c24780();
   input += synapse0x1c247c0();
   input += synapse0x1c24800();
   input += synapse0x1c24840();
   input += synapse0x1c24880();
   input += synapse0x1c248c0();
   input += synapse0x1c24350();
   input += synapse0x1c24390();
   input += synapse0x1c24a10();
   input += synapse0x1c24a50();
   input += synapse0x1c24a90();
   input += synapse0x1c24ad0();
   input += synapse0x1c24b10();
   input += synapse0x1c24b50();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c241c0() {
   double input = input0x1c241c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c2b3c0() {
   double input = 0.874977;
   input += synapse0x1c010e0();
   input += synapse0x1c01120();
   input += synapse0x1c02600();
   input += synapse0x1c02640();
   input += synapse0x1c02fd0();
   input += synapse0x1c03010();
   input += synapse0x1c03da0();
   input += synapse0x1c03de0();
   input += synapse0x1c04770();
   input += synapse0x1c047b0();
   input += synapse0x1c05140();
   input += synapse0x1c05180();
   input += synapse0x1c05c20();
   input += synapse0x1c05c60();
   input += synapse0x1c065f0();
   input += synapse0x1c06630();
   input += synapse0x1c036d0();
   input += synapse0x1c03710();
   input += synapse0x1c081a0();
   input += synapse0x1c081e0();
   input += synapse0x1c08b70();
   input += synapse0x1c08bb0();
   input += synapse0x1c09540();
   input += synapse0x1c09580();
   input += synapse0x1c09f10();
   input += synapse0x1c09f50();
   input += synapse0x1bfe0f0();
   input += synapse0x1bfe130();
   input += synapse0x1c0c000();
   input += synapse0x1c0c040();
   input += synapse0x1c0c9d0();
   input += synapse0x1c0ca10();
   input += synapse0x1c0d3a0();
   input += synapse0x1c0d3e0();
   input += synapse0x1c0dd70();
   input += synapse0x1c0ddb0();
   input += synapse0x1c0e740();
   input += synapse0x1c0e780();
   input += synapse0x1c07290();
   input += synapse0x1c072d0();
   input += synapse0x1c10b40();
   input += synapse0x1c10b80();
   input += synapse0x1c114d0();
   input += synapse0x1c11510();
   input += synapse0x1c11ea0();
   input += synapse0x1c11ee0();
   input += synapse0x1c12870();
   input += synapse0x1c128b0();
   input += synapse0x1c13240();
   input += synapse0x1c13280();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c2b3c0() {
   double input = input0x1c2b3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c2b760() {
   double input = -0.0515903;
   input += synapse0x1c15980();
   input += synapse0x1c159c0();
   input += synapse0x1c0af40();
   input += synapse0x1c0af80();
   input += synapse0x1c18560();
   input += synapse0x1c185a0();
   input += synapse0x1c18f30();
   input += synapse0x1c18f70();
   input += synapse0x1c19900();
   input += synapse0x1c19940();
   input += synapse0x1c1a2d0();
   input += synapse0x1c1a310();
   input += synapse0x1c1aca0();
   input += synapse0x1c1ace0();
   input += synapse0x1c1b670();
   input += synapse0x1c1b6b0();
   input += synapse0x1c1c040();
   input += synapse0x1c1c080();
   input += synapse0x1c1ca10();
   input += synapse0x1c1ca50();
   input += synapse0x1c1d5f0();
   input += synapse0x1c1d630();
   input += synapse0x1c1dfc0();
   input += synapse0x1c1e000();
   input += synapse0x1c0ee40();
   input += synapse0x1c0ee80();
   input += synapse0x1c0f810();
   input += synapse0x1c0f850();
   input += synapse0x1c101e0();
   input += synapse0x1c10220();
   input += synapse0x1c22700();
   input += synapse0x1c22740();
   input += synapse0x1c230d0();
   input += synapse0x1c23110();
   input += synapse0x1c23aa0();
   input += synapse0x1c23ae0();
   input += synapse0x1c24470();
   input += synapse0x1c244b0();
   input += synapse0x1c003a0();
   input += synapse0x1c003e0();
   input += synapse0x1c13c10();
   input += synapse0x1c13c50();
   input += synapse0x1c24b90();
   input += synapse0x1c24bd0();
   input += synapse0x1c24c10();
   input += synapse0x1c24c50();
   input += synapse0x1c2bb00();
   input += synapse0x1c2bb40();
   input += synapse0x1c2bb80();
   input += synapse0x1c2bbc0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c2b760() {
   double input = input0x1c2b760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c2bc00() {
   double input = -0.0927661;
   input += synapse0x1c2bf40();
   input += synapse0x1c2bf80();
   input += synapse0x1c2bfc0();
   input += synapse0x1c2c000();
   input += synapse0x1c2c040();
   input += synapse0x1c2c080();
   input += synapse0x1c2c0c0();
   input += synapse0x1c2c100();
   input += synapse0x1c2c140();
   input += synapse0x1c2c180();
   input += synapse0x1c2c1c0();
   input += synapse0x1c2c200();
   input += synapse0x1c2c240();
   input += synapse0x1c2c280();
   input += synapse0x1c2c2c0();
   input += synapse0x1c2c300();
   input += synapse0x1c2bd90();
   input += synapse0x1c2bdd0();
   input += synapse0x1c2c450();
   input += synapse0x1c2c490();
   input += synapse0x1c2c4d0();
   input += synapse0x1c2c510();
   input += synapse0x1c2c550();
   input += synapse0x1c2c590();
   input += synapse0x1c2c5d0();
   input += synapse0x1c2c610();
   input += synapse0x1c2c650();
   input += synapse0x1c2c690();
   input += synapse0x1c2c6d0();
   input += synapse0x1c2c710();
   input += synapse0x1c2c750();
   input += synapse0x1c2c790();
   input += synapse0x1c2c340();
   input += synapse0x1c2c380();
   input += synapse0x1c2c3c0();
   input += synapse0x1c2c400();
   input += synapse0x1c2c9e0();
   input += synapse0x1c2ca20();
   input += synapse0x1c2ca60();
   input += synapse0x1c2caa0();
   input += synapse0x1c2cae0();
   input += synapse0x1c2cb20();
   input += synapse0x1c2cb60();
   input += synapse0x1c2cba0();
   input += synapse0x1c2cbe0();
   input += synapse0x1c2cc20();
   input += synapse0x1c2cc60();
   input += synapse0x1c2cca0();
   input += synapse0x1c2cce0();
   input += synapse0x1c2cd20();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c2bc00() {
   double input = input0x1c2bc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c2cd60() {
   double input = 0.191465;
   input += synapse0x1c2d0a0();
   input += synapse0x1c2d0e0();
   input += synapse0x1c2d120();
   input += synapse0x1c2d160();
   input += synapse0x1c2d1a0();
   input += synapse0x1c2d1e0();
   input += synapse0x1c2d220();
   input += synapse0x1c2d260();
   input += synapse0x1c2d2a0();
   input += synapse0x1c2d2e0();
   input += synapse0x1c2d320();
   input += synapse0x1c2d360();
   input += synapse0x1c2d3a0();
   input += synapse0x1c2d3e0();
   input += synapse0x1c2d420();
   input += synapse0x1c2d460();
   input += synapse0x1c2cef0();
   input += synapse0x1c2cf30();
   input += synapse0x1c2d5b0();
   input += synapse0x1c2d5f0();
   input += synapse0x1c2d630();
   input += synapse0x1c2d670();
   input += synapse0x1c2d6b0();
   input += synapse0x1c2d6f0();
   input += synapse0x1c2d730();
   input += synapse0x1c2d770();
   input += synapse0x1c2d7b0();
   input += synapse0x1c2d7f0();
   input += synapse0x1c2d830();
   input += synapse0x1c2d870();
   input += synapse0x1c2d8b0();
   input += synapse0x1c2d8f0();
   input += synapse0x1c2d4a0();
   input += synapse0x1c2d4e0();
   input += synapse0x1c2d520();
   input += synapse0x1c2d560();
   input += synapse0x1c2db40();
   input += synapse0x1c2db80();
   input += synapse0x1c2dbc0();
   input += synapse0x1c2dc00();
   input += synapse0x1c2dc40();
   input += synapse0x1c2dc80();
   input += synapse0x1c2dcc0();
   input += synapse0x1c2dd00();
   input += synapse0x1c2dd40();
   input += synapse0x1c2dd80();
   input += synapse0x1c2ddc0();
   input += synapse0x1c2de00();
   input += synapse0x1c2de40();
   input += synapse0x1c2de80();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c2cd60() {
   double input = input0x1c2cd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c2dec0() {
   double input = -0.0896711;
   input += synapse0x1c2e200();
   input += synapse0x1c2e240();
   input += synapse0x1c2e280();
   input += synapse0x1c2e2c0();
   input += synapse0x1c2e300();
   input += synapse0x1c2e340();
   input += synapse0x1c2e380();
   input += synapse0x1c2e3c0();
   input += synapse0x1c2e400();
   input += synapse0x1c2e440();
   input += synapse0x1c2e480();
   input += synapse0x1c2e4c0();
   input += synapse0x1c2e500();
   input += synapse0x1c2e540();
   input += synapse0x1c2e580();
   input += synapse0x1c2e5c0();
   input += synapse0x1c2e050();
   input += synapse0x1c2e090();
   input += synapse0x1c2e710();
   input += synapse0x1c2e750();
   input += synapse0x1c2e790();
   input += synapse0x1c2e7d0();
   input += synapse0x1c2e810();
   input += synapse0x1c2e850();
   input += synapse0x1c2e890();
   input += synapse0x1c2e8d0();
   input += synapse0x1c2e910();
   input += synapse0x1c2e950();
   input += synapse0x1c2e990();
   input += synapse0x1c2e9d0();
   input += synapse0x1c2ea10();
   input += synapse0x1c2ea50();
   input += synapse0x1c2e600();
   input += synapse0x1c2e640();
   input += synapse0x1c2e680();
   input += synapse0x1c2e6c0();
   input += synapse0x1c2eca0();
   input += synapse0x1c2ece0();
   input += synapse0x1c2ed20();
   input += synapse0x1c2ed60();
   input += synapse0x1c2eda0();
   input += synapse0x1c2ede0();
   input += synapse0x1c2ee20();
   input += synapse0x1c2ee60();
   input += synapse0x1c2eea0();
   input += synapse0x1c2eee0();
   input += synapse0x1c2ef20();
   input += synapse0x1c2ef60();
   input += synapse0x1c2efa0();
   input += synapse0x1c2efe0();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c2dec0() {
   double input = input0x1c2dec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_sLdR::input0x1c2f020() {
   double input = -0.834947;
   input += synapse0x1c2f240();
   input += synapse0x1c2f280();
   input += synapse0x1c2f2c0();
   input += synapse0x1c2f300();
   input += synapse0x1c2f340();
   return input;
}

double NNfunction-ss_sLdR::neuron0x1c2f020() {
   double input = input0x1c2f020();
   return (input * 1)+0;
}

double NNfunction-ss_sLdR::synapse0x1bfb160() {
   return (neuron0x1bfb1e0()*-0.0234906);
}

double NNfunction-ss_sLdR::synapse0x1bfb1a0() {
   return (neuron0x1bfb490()*-0.0133792);
}

double NNfunction-ss_sLdR::synapse0x1c00430() {
   return (neuron0x1bfb7d0()*0.737514);
}

double NNfunction-ss_sLdR::synapse0x1c00470() {
   return (neuron0x1bfbb10()*-0.196847);
}

double NNfunction-ss_sLdR::synapse0x1c004b0() {
   return (neuron0x1bfbe50()*-0.0965584);
}

double NNfunction-ss_sLdR::synapse0x1c004f0() {
   return (neuron0x1bfc190()*0.0258682);
}

double NNfunction-ss_sLdR::synapse0x1c00530() {
   return (neuron0x1bfc4d0()*0.0139745);
}

double NNfunction-ss_sLdR::synapse0x1c00570() {
   return (neuron0x1bfc810()*0.0357836);
}

double NNfunction-ss_sLdR::synapse0x1c005b0() {
   return (neuron0x1bfcb50()*-0.0512338);
}

double NNfunction-ss_sLdR::synapse0x1c005f0() {
   return (neuron0x1bfce90()*-0.05994);
}

double NNfunction-ss_sLdR::synapse0x1c00630() {
   return (neuron0x1bfd1d0()*-0.0113728);
}

double NNfunction-ss_sLdR::synapse0x1c00670() {
   return (neuron0x1bfd510()*0.179527);
}

double NNfunction-ss_sLdR::synapse0x1c006b0() {
   return (neuron0x1bfd850()*0.117978);
}

double NNfunction-ss_sLdR::synapse0x1c006f0() {
   return (neuron0x1bfdb90()*-0.0623388);
}

double NNfunction-ss_sLdR::synapse0x1c00730() {
   return (neuron0x1bfded0()*0.113909);
}

double NNfunction-ss_sLdR::synapse0x1c00770() {
   return (neuron0x1bfe210()*0.0633056);
}

double NNfunction-ss_sLdR::synapse0x1bfb0d0() {
   return (neuron0x1bfe550()*-0.0727649);
}

double NNfunction-ss_sLdR::synapse0x1bfb110() {
   return (neuron0x1bfeab0()*0.227385);
}

double NNfunction-ss_sLdR::synapse0x19b62a0() {
   return (neuron0x1bfecd0()*0.05812);
}

double NNfunction-ss_sLdR::synapse0x19b62e0() {
   return (neuron0x1bff010()*0.0665548);
}

double NNfunction-ss_sLdR::synapse0x1c009d0() {
   return (neuron0x1bff350()*-0.0214405);
}

double NNfunction-ss_sLdR::synapse0x1c00a10() {
   return (neuron0x1bff690()*0.0119138);
}

double NNfunction-ss_sLdR::synapse0x1c00a50() {
   return (neuron0x1bff9d0()*-0.0443187);
}

double NNfunction-ss_sLdR::synapse0x1c00a90() {
   return (neuron0x1bffd10()*0.0260428);
}

double NNfunction-ss_sLdR::synapse0x1c00e10() {
   return (neuron0x1bfb1e0()*0.116527);
}

double NNfunction-ss_sLdR::synapse0x1c00e50() {
   return (neuron0x1bfb490()*-0.377436);
}

double NNfunction-ss_sLdR::synapse0x1c00e90() {
   return (neuron0x1bfb7d0()*0.023937);
}

double NNfunction-ss_sLdR::synapse0x1c00ed0() {
   return (neuron0x1bfbb10()*0.249731);
}

double NNfunction-ss_sLdR::synapse0x1c00f10() {
   return (neuron0x1bfbe50()*-0.0883722);
}

double NNfunction-ss_sLdR::synapse0x1c00f50() {
   return (neuron0x1bfc190()*-0.113633);
}

double NNfunction-ss_sLdR::synapse0x1c00f90() {
   return (neuron0x1bfc4d0()*0.197828);
}

double NNfunction-ss_sLdR::synapse0x1c00fd0() {
   return (neuron0x1bfc810()*-0.16777);
}

double NNfunction-ss_sLdR::synapse0x1c01010() {
   return (neuron0x1bfcb50()*-0.289987);
}

double NNfunction-ss_sLdR::synapse0x1c008c0() {
   return (neuron0x1bfce90()*-0.0277155);
}

double NNfunction-ss_sLdR::synapse0x1c00900() {
   return (neuron0x1bfd1d0()*0.204821);
}

double NNfunction-ss_sLdR::synapse0x1c00940() {
   return (neuron0x1bfd510()*-0.163803);
}

double NNfunction-ss_sLdR::synapse0x1c00980() {
   return (neuron0x1bfd850()*-0.460289);
}

double NNfunction-ss_sLdR::synapse0x1c01260() {
   return (neuron0x1bfdb90()*0.085777);
}

double NNfunction-ss_sLdR::synapse0x1c012a0() {
   return (neuron0x1bfded0()*-0.323229);
}

double NNfunction-ss_sLdR::synapse0x1c012e0() {
   return (neuron0x1bfe210()*1.05765);
}

double NNfunction-ss_sLdR::synapse0x1c00c60() {
   return (neuron0x1bfe550()*0.264008);
}

double NNfunction-ss_sLdR::synapse0x1c00ca0() {
   return (neuron0x1bfeab0()*-0.133929);
}

double NNfunction-ss_sLdR::synapse0x1c01430() {
   return (neuron0x1bfecd0()*-0.169879);
}

double NNfunction-ss_sLdR::synapse0x1c01470() {
   return (neuron0x1bff010()*0.00842056);
}

double NNfunction-ss_sLdR::synapse0x1c014b0() {
   return (neuron0x1bff350()*-0.469717);
}

double NNfunction-ss_sLdR::synapse0x1c014f0() {
   return (neuron0x1bff690()*0.219491);
}

double NNfunction-ss_sLdR::synapse0x1c01530() {
   return (neuron0x1bff9d0()*-0.355203);
}

double NNfunction-ss_sLdR::synapse0x1c01570() {
   return (neuron0x1bffd10()*0.421451);
}

double NNfunction-ss_sLdR::synapse0x1c018f0() {
   return (neuron0x1bfb1e0()*-0.487404);
}

double NNfunction-ss_sLdR::synapse0x1c01930() {
   return (neuron0x1bfb490()*0.302614);
}

double NNfunction-ss_sLdR::synapse0x1c01970() {
   return (neuron0x1bfb7d0()*-0.39909);
}

double NNfunction-ss_sLdR::synapse0x1c019b0() {
   return (neuron0x1bfbb10()*-0.0195098);
}

double NNfunction-ss_sLdR::synapse0x1c019f0() {
   return (neuron0x1bfbe50()*-0.0743541);
}

double NNfunction-ss_sLdR::synapse0x1c01a30() {
   return (neuron0x1bfc190()*0.0774512);
}

double NNfunction-ss_sLdR::synapse0x1c01a70() {
   return (neuron0x1bfc4d0()*0.156488);
}

double NNfunction-ss_sLdR::synapse0x1c01ab0() {
   return (neuron0x1bfc810()*-0.0123876);
}

double NNfunction-ss_sLdR::synapse0x1c01af0() {
   return (neuron0x1bfcb50()*-0.273123);
}

double NNfunction-ss_sLdR::synapse0x1c01b30() {
   return (neuron0x1bfce90()*-0.547772);
}

double NNfunction-ss_sLdR::synapse0x1c01b70() {
   return (neuron0x1bfd1d0()*0.0460968);
}

double NNfunction-ss_sLdR::synapse0x1c01bb0() {
   return (neuron0x1bfd510()*-0.300459);
}

double NNfunction-ss_sLdR::synapse0x1c01bf0() {
   return (neuron0x1bfd850()*0.607725);
}

double NNfunction-ss_sLdR::synapse0x1c01c30() {
   return (neuron0x1bfdb90()*0.435236);
}

double NNfunction-ss_sLdR::synapse0x1c01c70() {
   return (neuron0x1bfded0()*-0.387765);
}

double NNfunction-ss_sLdR::synapse0x1c01cb0() {
   return (neuron0x1bfe210()*0.0544049);
}

double NNfunction-ss_sLdR::synapse0x1c01740() {
   return (neuron0x1bfe550()*-0.0204714);
}

double NNfunction-ss_sLdR::synapse0x1c01780() {
   return (neuron0x1bfeab0()*0.0134068);
}

double NNfunction-ss_sLdR::synapse0x1bea250() {
   return (neuron0x1bfecd0()*-0.0142485);
}

double NNfunction-ss_sLdR::synapse0x19c41a0() {
   return (neuron0x1bff010()*-0.144229);
}

double NNfunction-ss_sLdR::synapse0x19c41e0() {
   return (neuron0x1bff350()*-0.0686654);
}

double NNfunction-ss_sLdR::synapse0x1adf6f0() {
   return (neuron0x1bff690()*-0.261234);
}

double NNfunction-ss_sLdR::synapse0x1adf730() {
   return (neuron0x1bff9d0()*-0.474249);
}

double NNfunction-ss_sLdR::synapse0x1bfaf40() {
   return (neuron0x1bffd10()*-0.240213);
}

double NNfunction-ss_sLdR::synapse0x19c4a90() {
   return (neuron0x1bfb1e0()*-0.173955);
}

double NNfunction-ss_sLdR::synapse0x1c01170() {
   return (neuron0x1bfb490()*0.335058);
}

double NNfunction-ss_sLdR::synapse0x1c011b0() {
   return (neuron0x1bfb7d0()*0.313437);
}

double NNfunction-ss_sLdR::synapse0x1c011f0() {
   return (neuron0x1bfbb10()*0.0584303);
}

double NNfunction-ss_sLdR::synapse0x1c01e00() {
   return (neuron0x1bfbe50()*0.506788);
}

double NNfunction-ss_sLdR::synapse0x1c01e40() {
   return (neuron0x1bfc190()*-0.050417);
}

double NNfunction-ss_sLdR::synapse0x1c01e80() {
   return (neuron0x1bfc4d0()*-0.167109);
}

double NNfunction-ss_sLdR::synapse0x1c01ec0() {
   return (neuron0x1bfc810()*1.21671);
}

double NNfunction-ss_sLdR::synapse0x1c01f00() {
   return (neuron0x1bfcb50()*0.255457);
}

double NNfunction-ss_sLdR::synapse0x1c01f40() {
   return (neuron0x1bfce90()*0.506704);
}

double NNfunction-ss_sLdR::synapse0x1c01f80() {
   return (neuron0x1bfd1d0()*0.455423);
}

double NNfunction-ss_sLdR::synapse0x1c01fc0() {
   return (neuron0x1bfd510()*-0.387907);
}

double NNfunction-ss_sLdR::synapse0x1c02000() {
   return (neuron0x1bfd850()*0.0816081);
}

double NNfunction-ss_sLdR::synapse0x1c02040() {
   return (neuron0x1bfdb90()*-0.373319);
}

double NNfunction-ss_sLdR::synapse0x1c02080() {
   return (neuron0x1bfded0()*-0.766274);
}

double NNfunction-ss_sLdR::synapse0x1c020c0() {
   return (neuron0x1bfe210()*-0.104236);
}

double NNfunction-ss_sLdR::synapse0x1bfaf80() {
   return (neuron0x1bfe550()*0.169146);
}

double NNfunction-ss_sLdR::synapse0x1bfafc0() {
   return (neuron0x1bfeab0()*0.498716);
}

double NNfunction-ss_sLdR::synapse0x1bfb000() {
   return (neuron0x1bfecd0()*-0.391148);
}

double NNfunction-ss_sLdR::synapse0x1c02210() {
   return (neuron0x1bff010()*-0.516204);
}

double NNfunction-ss_sLdR::synapse0x1c02250() {
   return (neuron0x1bff350()*-0.141255);
}

double NNfunction-ss_sLdR::synapse0x1c02290() {
   return (neuron0x1bff690()*-0.0419228);
}

double NNfunction-ss_sLdR::synapse0x1c022d0() {
   return (neuron0x1bff9d0()*-0.0251246);
}

double NNfunction-ss_sLdR::synapse0x1c02310() {
   return (neuron0x1bffd10()*-0.213813);
}

double NNfunction-ss_sLdR::synapse0x1c02690() {
   return (neuron0x1bfb1e0()*0.153582);
}

double NNfunction-ss_sLdR::synapse0x1c026d0() {
   return (neuron0x1bfb490()*0.106553);
}

double NNfunction-ss_sLdR::synapse0x1c02710() {
   return (neuron0x1bfb7d0()*0.359134);
}

double NNfunction-ss_sLdR::synapse0x1c02750() {
   return (neuron0x1bfbb10()*-0.0419548);
}

double NNfunction-ss_sLdR::synapse0x1c02790() {
   return (neuron0x1bfbe50()*0.317925);
}

double NNfunction-ss_sLdR::synapse0x1c027d0() {
   return (neuron0x1bfc190()*0.201237);
}

double NNfunction-ss_sLdR::synapse0x1c02810() {
   return (neuron0x1bfc4d0()*0.353671);
}

double NNfunction-ss_sLdR::synapse0x1c02850() {
   return (neuron0x1bfc810()*-0.131929);
}

double NNfunction-ss_sLdR::synapse0x1c02890() {
   return (neuron0x1bfcb50()*0.529635);
}

double NNfunction-ss_sLdR::synapse0x1c028d0() {
   return (neuron0x1bfce90()*0.442469);
}

double NNfunction-ss_sLdR::synapse0x1c02910() {
   return (neuron0x1bfd1d0()*0.606523);
}

double NNfunction-ss_sLdR::synapse0x1c02950() {
   return (neuron0x1bfd510()*0.810774);
}

double NNfunction-ss_sLdR::synapse0x1c02990() {
   return (neuron0x1bfd850()*-0.556918);
}

double NNfunction-ss_sLdR::synapse0x1c029d0() {
   return (neuron0x1bfdb90()*-0.63854);
}

double NNfunction-ss_sLdR::synapse0x1c02a10() {
   return (neuron0x1bfded0()*-0.16735);
}

double NNfunction-ss_sLdR::synapse0x1c02a50() {
   return (neuron0x1bfe210()*0.28972);
}

double NNfunction-ss_sLdR::synapse0x1c024e0() {
   return (neuron0x1bfe550()*0.201232);
}

double NNfunction-ss_sLdR::synapse0x1c02520() {
   return (neuron0x1bfeab0()*0.393869);
}

double NNfunction-ss_sLdR::synapse0x1c02ba0() {
   return (neuron0x1bfecd0()*0.66068);
}

double NNfunction-ss_sLdR::synapse0x1c02be0() {
   return (neuron0x1bff010()*-0.44053);
}

double NNfunction-ss_sLdR::synapse0x1c02c20() {
   return (neuron0x1bff350()*0.35745);
}

double NNfunction-ss_sLdR::synapse0x1c02c60() {
   return (neuron0x1bff690()*-0.227718);
}

double NNfunction-ss_sLdR::synapse0x1c02ca0() {
   return (neuron0x1bff9d0()*0.454488);
}

double NNfunction-ss_sLdR::synapse0x1c02ce0() {
   return (neuron0x1bffd10()*-0.156858);
}

double NNfunction-ss_sLdR::synapse0x1c03060() {
   return (neuron0x1bfb1e0()*-0.0695266);
}

double NNfunction-ss_sLdR::synapse0x1c030a0() {
   return (neuron0x1bfb490()*-0.0113409);
}

double NNfunction-ss_sLdR::synapse0x1c030e0() {
   return (neuron0x1bfb7d0()*-0.0445382);
}

double NNfunction-ss_sLdR::synapse0x1c03120() {
   return (neuron0x1bfbb10()*-0.0459417);
}

double NNfunction-ss_sLdR::synapse0x1c03160() {
   return (neuron0x1bfbe50()*-0.0284471);
}

double NNfunction-ss_sLdR::synapse0x1c031a0() {
   return (neuron0x1bfc190()*-0.0078266);
}

double NNfunction-ss_sLdR::synapse0x1c031e0() {
   return (neuron0x1bfc4d0()*0.0209979);
}

double NNfunction-ss_sLdR::synapse0x1c03220() {
   return (neuron0x1bfc810()*-0.0239577);
}

double NNfunction-ss_sLdR::synapse0x1c03260() {
   return (neuron0x1bfcb50()*-0.0365237);
}

double NNfunction-ss_sLdR::synapse0x19c44f0() {
   return (neuron0x1bfce90()*0.000476395);
}

double NNfunction-ss_sLdR::synapse0x19c4530() {
   return (neuron0x1bfd1d0()*-0.107745);
}

double NNfunction-ss_sLdR::synapse0x19c4570() {
   return (neuron0x1bfd510()*-0.0218691);
}

double NNfunction-ss_sLdR::synapse0x19c45b0() {
   return (neuron0x1bfd850()*-0.718327);
}

double NNfunction-ss_sLdR::synapse0x19c45f0() {
   return (neuron0x1bfdb90()*-0.0086582);
}

double NNfunction-ss_sLdR::synapse0x19c4630() {
   return (neuron0x1bfded0()*-0.00437791);
}

double NNfunction-ss_sLdR::synapse0x19c4670() {
   return (neuron0x1bfe210()*-0.0155449);
}

double NNfunction-ss_sLdR::synapse0x1c02eb0() {
   return (neuron0x1bfe550()*0.0157291);
}

double NNfunction-ss_sLdR::synapse0x1c02ef0() {
   return (neuron0x1bfeab0()*1.7824);
}

double NNfunction-ss_sLdR::synapse0x19c47c0() {
   return (neuron0x1bfecd0()*-0.00979159);
}

double NNfunction-ss_sLdR::synapse0x19c4800() {
   return (neuron0x1bff010()*0.0201722);
}

double NNfunction-ss_sLdR::synapse0x19c4840() {
   return (neuron0x1bff350()*0.0102782);
}

double NNfunction-ss_sLdR::synapse0x19c4880() {
   return (neuron0x1bff690()*-0.0220714);
}

double NNfunction-ss_sLdR::synapse0x19c48c0() {
   return (neuron0x1bff9d0()*-0.0346161);
}

double NNfunction-ss_sLdR::synapse0x1c03ab0() {
   return (neuron0x1bffd10()*-0.0208031);
}

double NNfunction-ss_sLdR::synapse0x1c03e30() {
   return (neuron0x1bfb1e0()*0.00850786);
}

double NNfunction-ss_sLdR::synapse0x1c03e70() {
   return (neuron0x1bfb490()*-0.00484334);
}

double NNfunction-ss_sLdR::synapse0x1c03eb0() {
   return (neuron0x1bfb7d0()*0.0199095);
}

double NNfunction-ss_sLdR::synapse0x1c03ef0() {
   return (neuron0x1bfbb10()*-7.15649);
}

double NNfunction-ss_sLdR::synapse0x1c03f30() {
   return (neuron0x1bfbe50()*-0.0504734);
}

double NNfunction-ss_sLdR::synapse0x1c03f70() {
   return (neuron0x1bfc190()*-0.0364103);
}

double NNfunction-ss_sLdR::synapse0x1c03fb0() {
   return (neuron0x1bfc4d0()*-0.0118351);
}

double NNfunction-ss_sLdR::synapse0x1c03ff0() {
   return (neuron0x1bfc810()*-0.00909143);
}

double NNfunction-ss_sLdR::synapse0x1c04030() {
   return (neuron0x1bfcb50()*-0.040197);
}

double NNfunction-ss_sLdR::synapse0x1c04070() {
   return (neuron0x1bfce90()*0.030232);
}

double NNfunction-ss_sLdR::synapse0x1c040b0() {
   return (neuron0x1bfd1d0()*0.00986141);
}

double NNfunction-ss_sLdR::synapse0x1c040f0() {
   return (neuron0x1bfd510()*-0.00141478);
}

double NNfunction-ss_sLdR::synapse0x1c04130() {
   return (neuron0x1bfd850()*0.098754);
}

double NNfunction-ss_sLdR::synapse0x1c04170() {
   return (neuron0x1bfdb90()*0.0312972);
}

double NNfunction-ss_sLdR::synapse0x1c041b0() {
   return (neuron0x1bfded0()*-0.0447682);
}

double NNfunction-ss_sLdR::synapse0x1c041f0() {
   return (neuron0x1bfe210()*-0.0380247);
}

double NNfunction-ss_sLdR::synapse0x1c03c80() {
   return (neuron0x1bfe550()*-0.000915111);
}

double NNfunction-ss_sLdR::synapse0x1c03cc0() {
   return (neuron0x1bfeab0()*0.253592);
}

double NNfunction-ss_sLdR::synapse0x1c04340() {
   return (neuron0x1bfecd0()*0.0143288);
}

double NNfunction-ss_sLdR::synapse0x1c04380() {
   return (neuron0x1bff010()*0.00567108);
}

double NNfunction-ss_sLdR::synapse0x1c043c0() {
   return (neuron0x1bff350()*-0.0131559);
}

double NNfunction-ss_sLdR::synapse0x1c04400() {
   return (neuron0x1bff690()*-0.0281429);
}

double NNfunction-ss_sLdR::synapse0x1c04440() {
   return (neuron0x1bff9d0()*0.0106745);
}

double NNfunction-ss_sLdR::synapse0x1c04480() {
   return (neuron0x1bffd10()*-0.0661773);
}

double NNfunction-ss_sLdR::synapse0x1c04800() {
   return (neuron0x1bfb1e0()*-0.522282);
}

double NNfunction-ss_sLdR::synapse0x1c04840() {
   return (neuron0x1bfb490()*-0.141465);
}

double NNfunction-ss_sLdR::synapse0x1c04880() {
   return (neuron0x1bfb7d0()*-0.205354);
}

double NNfunction-ss_sLdR::synapse0x1c048c0() {
   return (neuron0x1bfbb10()*0.194651);
}

double NNfunction-ss_sLdR::synapse0x1c04900() {
   return (neuron0x1bfbe50()*0.344745);
}

double NNfunction-ss_sLdR::synapse0x1c04940() {
   return (neuron0x1bfc190()*-0.0468679);
}

double NNfunction-ss_sLdR::synapse0x1c04980() {
   return (neuron0x1bfc4d0()*-0.0849048);
}

double NNfunction-ss_sLdR::synapse0x1c049c0() {
   return (neuron0x1bfc810()*-0.115761);
}

double NNfunction-ss_sLdR::synapse0x1c04a00() {
   return (neuron0x1bfcb50()*-0.148801);
}

double NNfunction-ss_sLdR::synapse0x1c04a40() {
   return (neuron0x1bfce90()*0.109458);
}

double NNfunction-ss_sLdR::synapse0x1c04a80() {
   return (neuron0x1bfd1d0()*-0.859713);
}

double NNfunction-ss_sLdR::synapse0x1c04ac0() {
   return (neuron0x1bfd510()*0.0418953);
}

double NNfunction-ss_sLdR::synapse0x1c04b00() {
   return (neuron0x1bfd850()*-0.439734);
}

double NNfunction-ss_sLdR::synapse0x1c04b40() {
   return (neuron0x1bfdb90()*-0.981499);
}

double NNfunction-ss_sLdR::synapse0x1c04b80() {
   return (neuron0x1bfded0()*0.127926);
}

double NNfunction-ss_sLdR::synapse0x1c04bc0() {
   return (neuron0x1bfe210()*-0.703464);
}

double NNfunction-ss_sLdR::synapse0x1c04650() {
   return (neuron0x1bfe550()*0.46997);
}

double NNfunction-ss_sLdR::synapse0x1c04690() {
   return (neuron0x1bfeab0()*-0.206602);
}

double NNfunction-ss_sLdR::synapse0x1c04d10() {
   return (neuron0x1bfecd0()*0.328878);
}

double NNfunction-ss_sLdR::synapse0x1c04d50() {
   return (neuron0x1bff010()*0.59491);
}

double NNfunction-ss_sLdR::synapse0x1c04d90() {
   return (neuron0x1bff350()*-0.120035);
}

double NNfunction-ss_sLdR::synapse0x1c04dd0() {
   return (neuron0x1bff690()*-0.284888);
}

double NNfunction-ss_sLdR::synapse0x1c04e10() {
   return (neuron0x1bff9d0()*-0.232027);
}

double NNfunction-ss_sLdR::synapse0x1c04e50() {
   return (neuron0x1bffd10()*-0.701226);
}

double NNfunction-ss_sLdR::synapse0x1bfe9a0() {
   return (neuron0x1bfb1e0()*0.00368627);
}

double NNfunction-ss_sLdR::synapse0x1bfe9e0() {
   return (neuron0x1bfb490()*0.00758629);
}

double NNfunction-ss_sLdR::synapse0x1bfea20() {
   return (neuron0x1bfb7d0()*0.00400979);
}

double NNfunction-ss_sLdR::synapse0x1bfea60() {
   return (neuron0x1bfbb10()*0.0148639);
}

double NNfunction-ss_sLdR::synapse0x1c053e0() {
   return (neuron0x1bfbe50()*0.00326151);
}

double NNfunction-ss_sLdR::synapse0x1c05420() {
   return (neuron0x1bfc190()*0.0106841);
}

double NNfunction-ss_sLdR::synapse0x1c05460() {
   return (neuron0x1bfc4d0()*0.00280523);
}

double NNfunction-ss_sLdR::synapse0x1c054a0() {
   return (neuron0x1bfc810()*-0.00276672);
}

double NNfunction-ss_sLdR::synapse0x1c054e0() {
   return (neuron0x1bfcb50()*-0.00224644);
}

double NNfunction-ss_sLdR::synapse0x1c05520() {
   return (neuron0x1bfce90()*0.014469);
}

double NNfunction-ss_sLdR::synapse0x1c05560() {
   return (neuron0x1bfd1d0()*0.0105757);
}

double NNfunction-ss_sLdR::synapse0x1c055a0() {
   return (neuron0x1bfd510()*-0.0401486);
}

double NNfunction-ss_sLdR::synapse0x1c055e0() {
   return (neuron0x1bfd850()*0.64695);
}

double NNfunction-ss_sLdR::synapse0x1c05620() {
   return (neuron0x1bfdb90()*0.00162149);
}

double NNfunction-ss_sLdR::synapse0x1c05660() {
   return (neuron0x1bfded0()*-0.016194);
}

double NNfunction-ss_sLdR::synapse0x1c056a0() {
   return (neuron0x1bfe210()*-0.0145637);
}

double NNfunction-ss_sLdR::synapse0x1c05020() {
   return (neuron0x1bfe550()*0.00418407);
}

double NNfunction-ss_sLdR::synapse0x1c05060() {
   return (neuron0x1bfeab0()*-0.830112);
}

double NNfunction-ss_sLdR::synapse0x1c057f0() {
   return (neuron0x1bfecd0()*-0.020326);
}

double NNfunction-ss_sLdR::synapse0x1c05830() {
   return (neuron0x1bff010()*-0.0218218);
}

double NNfunction-ss_sLdR::synapse0x1c05870() {
   return (neuron0x1bff350()*0.0167854);
}

double NNfunction-ss_sLdR::synapse0x1c058b0() {
   return (neuron0x1bff690()*0.0180286);
}

double NNfunction-ss_sLdR::synapse0x1c058f0() {
   return (neuron0x1bff9d0()*-0.0145076);
}

double NNfunction-ss_sLdR::synapse0x1c05930() {
   return (neuron0x1bffd10()*0.0221013);
}

double NNfunction-ss_sLdR::synapse0x1c05cb0() {
   return (neuron0x1bfb1e0()*0.0262462);
}

double NNfunction-ss_sLdR::synapse0x1c05cf0() {
   return (neuron0x1bfb490()*0.0375684);
}

double NNfunction-ss_sLdR::synapse0x1c05d30() {
   return (neuron0x1bfb7d0()*0.0347984);
}

double NNfunction-ss_sLdR::synapse0x1c05d70() {
   return (neuron0x1bfbb10()*-8.14036);
}

double NNfunction-ss_sLdR::synapse0x1c05db0() {
   return (neuron0x1bfbe50()*-0.0076589);
}

double NNfunction-ss_sLdR::synapse0x1c05df0() {
   return (neuron0x1bfc190()*-0.0116436);
}

double NNfunction-ss_sLdR::synapse0x1c05e30() {
   return (neuron0x1bfc4d0()*0.0127861);
}

double NNfunction-ss_sLdR::synapse0x1c05e70() {
   return (neuron0x1bfc810()*0.00236472);
}

double NNfunction-ss_sLdR::synapse0x1c05eb0() {
   return (neuron0x1bfcb50()*-0.020858);
}

double NNfunction-ss_sLdR::synapse0x1c05ef0() {
   return (neuron0x1bfce90()*0.0266097);
}

double NNfunction-ss_sLdR::synapse0x1c05f30() {
   return (neuron0x1bfd1d0()*-0.0248213);
}

double NNfunction-ss_sLdR::synapse0x1c05f70() {
   return (neuron0x1bfd510()*-0.0316447);
}

double NNfunction-ss_sLdR::synapse0x1c05fb0() {
   return (neuron0x1bfd850()*0.116932);
}

double NNfunction-ss_sLdR::synapse0x1c05ff0() {
   return (neuron0x1bfdb90()*0.0543309);
}

double NNfunction-ss_sLdR::synapse0x1c06030() {
   return (neuron0x1bfded0()*-0.0102743);
}

double NNfunction-ss_sLdR::synapse0x1c06070() {
   return (neuron0x1bfe210()*-0.0324621);
}

double NNfunction-ss_sLdR::synapse0x1c05b00() {
   return (neuron0x1bfe550()*-0.00829723);
}

double NNfunction-ss_sLdR::synapse0x1c05b40() {
   return (neuron0x1bfeab0()*0.124276);
}

double NNfunction-ss_sLdR::synapse0x1c061c0() {
   return (neuron0x1bfecd0()*0.0111118);
}

double NNfunction-ss_sLdR::synapse0x1c06200() {
   return (neuron0x1bff010()*-0.0184409);
}

double NNfunction-ss_sLdR::synapse0x1c06240() {
   return (neuron0x1bff350()*0.00580548);
}

double NNfunction-ss_sLdR::synapse0x1c06280() {
   return (neuron0x1bff690()*-0.0146034);
}

double NNfunction-ss_sLdR::synapse0x1c062c0() {
   return (neuron0x1bff9d0()*-0.0224721);
}

double NNfunction-ss_sLdR::synapse0x1c06300() {
   return (neuron0x1bffd10()*-0.0430673);
}

double NNfunction-ss_sLdR::synapse0x1c06680() {
   return (neuron0x1bfb1e0()*-0.161266);
}

double NNfunction-ss_sLdR::synapse0x1c066c0() {
   return (neuron0x1bfb490()*0.173828);
}

double NNfunction-ss_sLdR::synapse0x1c06700() {
   return (neuron0x1bfb7d0()*-0.540545);
}

double NNfunction-ss_sLdR::synapse0x1c06740() {
   return (neuron0x1bfbb10()*-0.0531268);
}

double NNfunction-ss_sLdR::synapse0x1c06780() {
   return (neuron0x1bfbe50()*-0.575155);
}

double NNfunction-ss_sLdR::synapse0x1c067c0() {
   return (neuron0x1bfc190()*-0.552903);
}

double NNfunction-ss_sLdR::synapse0x1c06800() {
   return (neuron0x1bfc4d0()*0.77679);
}

double NNfunction-ss_sLdR::synapse0x1c06840() {
   return (neuron0x1bfc810()*1.22483);
}

double NNfunction-ss_sLdR::synapse0x1c06880() {
   return (neuron0x1bfcb50()*0.83925);
}

double NNfunction-ss_sLdR::synapse0x1c068c0() {
   return (neuron0x1bfce90()*0.713154);
}

double NNfunction-ss_sLdR::synapse0x1c06900() {
   return (neuron0x1bfd1d0()*0.899665);
}

double NNfunction-ss_sLdR::synapse0x1c06940() {
   return (neuron0x1bfd510()*0.0721321);
}

double NNfunction-ss_sLdR::synapse0x1c06980() {
   return (neuron0x1bfd850()*-0.503544);
}

double NNfunction-ss_sLdR::synapse0x1c069c0() {
   return (neuron0x1bfdb90()*0.0297316);
}

double NNfunction-ss_sLdR::synapse0x1c06a00() {
   return (neuron0x1bfded0()*-0.206928);
}

double NNfunction-ss_sLdR::synapse0x1c06a40() {
   return (neuron0x1bfe210()*-0.441861);
}

double NNfunction-ss_sLdR::synapse0x1c064d0() {
   return (neuron0x1bfe550()*-0.447018);
}

double NNfunction-ss_sLdR::synapse0x1c06510() {
   return (neuron0x1bfeab0()*0.635721);
}

double NNfunction-ss_sLdR::synapse0x1c032a0() {
   return (neuron0x1bfecd0()*0.889005);
}

double NNfunction-ss_sLdR::synapse0x1c032e0() {
   return (neuron0x1bff010()*-0.559983);
}

double NNfunction-ss_sLdR::synapse0x1c03320() {
   return (neuron0x1bff350()*0.564227);
}

double NNfunction-ss_sLdR::synapse0x1c03360() {
   return (neuron0x1bff690()*-0.307285);
}

double NNfunction-ss_sLdR::synapse0x1c033a0() {
   return (neuron0x1bff9d0()*-0.670272);
}

double NNfunction-ss_sLdR::synapse0x1c033e0() {
   return (neuron0x1bffd10()*-0.222167);
}

double NNfunction-ss_sLdR::synapse0x1c03760() {
   return (neuron0x1bfb1e0()*-0.0389264);
}

double NNfunction-ss_sLdR::synapse0x1c037a0() {
   return (neuron0x1bfb490()*0.00812157);
}

double NNfunction-ss_sLdR::synapse0x1c037e0() {
   return (neuron0x1bfb7d0()*-0.317795);
}

double NNfunction-ss_sLdR::synapse0x1c03820() {
   return (neuron0x1bfbb10()*0.0667801);
}

double NNfunction-ss_sLdR::synapse0x1c03860() {
   return (neuron0x1bfbe50()*0.0263306);
}

double NNfunction-ss_sLdR::synapse0x1c038a0() {
   return (neuron0x1bfc190()*-0.0488856);
}

double NNfunction-ss_sLdR::synapse0x1c038e0() {
   return (neuron0x1bfc4d0()*-0.0201225);
}

double NNfunction-ss_sLdR::synapse0x1c03920() {
   return (neuron0x1bfc810()*-0.0319335);
}

double NNfunction-ss_sLdR::synapse0x1c03960() {
   return (neuron0x1bfcb50()*0.0486468);
}

double NNfunction-ss_sLdR::synapse0x1c039a0() {
   return (neuron0x1bfce90()*0.00959919);
}

double NNfunction-ss_sLdR::synapse0x1c039e0() {
   return (neuron0x1bfd1d0()*0.00713147);
}

double NNfunction-ss_sLdR::synapse0x1c03a20() {
   return (neuron0x1bfd510()*0.49485);
}

double NNfunction-ss_sLdR::synapse0x1c03a60() {
   return (neuron0x1bfd850()*-0.216855);
}

double NNfunction-ss_sLdR::synapse0x1c07ba0() {
   return (neuron0x1bfdb90()*-0.0788996);
}

double NNfunction-ss_sLdR::synapse0x1c07be0() {
   return (neuron0x1bfded0()*0.330843);
}

double NNfunction-ss_sLdR::synapse0x1c07c20() {
   return (neuron0x1bfe210()*0.314208);
}

double NNfunction-ss_sLdR::synapse0x1c035b0() {
   return (neuron0x1bfe550()*-0.0896898);
}

double NNfunction-ss_sLdR::synapse0x1c035f0() {
   return (neuron0x1bfeab0()*-0.216783);
}

double NNfunction-ss_sLdR::synapse0x1c07d70() {
   return (neuron0x1bfecd0()*0.207887);
}

double NNfunction-ss_sLdR::synapse0x1c07db0() {
   return (neuron0x1bff010()*-0.0132079);
}

double NNfunction-ss_sLdR::synapse0x1c07df0() {
   return (neuron0x1bff350()*-0.00296115);
}

double NNfunction-ss_sLdR::synapse0x1c07e30() {
   return (neuron0x1bff690()*-0.0113854);
}

double NNfunction-ss_sLdR::synapse0x1c07e70() {
   return (neuron0x1bff9d0()*0.0346001);
}

double NNfunction-ss_sLdR::synapse0x1c07eb0() {
   return (neuron0x1bffd10()*-0.00404881);
}

double NNfunction-ss_sLdR::synapse0x1c08230() {
   return (neuron0x1bfb1e0()*-0.00480304);
}

double NNfunction-ss_sLdR::synapse0x1c08270() {
   return (neuron0x1bfb490()*0.00890226);
}

double NNfunction-ss_sLdR::synapse0x1c082b0() {
   return (neuron0x1bfb7d0()*0.0350944);
}

double NNfunction-ss_sLdR::synapse0x1c082f0() {
   return (neuron0x1bfbb10()*1.13117);
}

double NNfunction-ss_sLdR::synapse0x1c08330() {
   return (neuron0x1bfbe50()*0.00766966);
}

double NNfunction-ss_sLdR::synapse0x1c08370() {
   return (neuron0x1bfc190()*0.0281411);
}

double NNfunction-ss_sLdR::synapse0x1c083b0() {
   return (neuron0x1bfc4d0()*-7.67837e-05);
}

double NNfunction-ss_sLdR::synapse0x1c083f0() {
   return (neuron0x1bfc810()*0.0176123);
}

double NNfunction-ss_sLdR::synapse0x1c08430() {
   return (neuron0x1bfcb50()*0.0128696);
}

double NNfunction-ss_sLdR::synapse0x1c08470() {
   return (neuron0x1bfce90()*-0.00999476);
}

double NNfunction-ss_sLdR::synapse0x1c084b0() {
   return (neuron0x1bfd1d0()*-0.00127046);
}

double NNfunction-ss_sLdR::synapse0x1c084f0() {
   return (neuron0x1bfd510()*0.00370141);
}

double NNfunction-ss_sLdR::synapse0x1c08530() {
   return (neuron0x1bfd850()*0.218919);
}

double NNfunction-ss_sLdR::synapse0x1c08570() {
   return (neuron0x1bfdb90()*-0.0177284);
}

double NNfunction-ss_sLdR::synapse0x1c085b0() {
   return (neuron0x1bfded0()*-0.00408536);
}

double NNfunction-ss_sLdR::synapse0x1c085f0() {
   return (neuron0x1bfe210()*0.0170576);
}

double NNfunction-ss_sLdR::synapse0x1c08080() {
   return (neuron0x1bfe550()*0.0162775);
}

double NNfunction-ss_sLdR::synapse0x1c080c0() {
   return (neuron0x1bfeab0()*0.141522);
}

double NNfunction-ss_sLdR::synapse0x1c08740() {
   return (neuron0x1bfecd0()*0.00500874);
}

double NNfunction-ss_sLdR::synapse0x1c08780() {
   return (neuron0x1bff010()*-0.00195901);
}

double NNfunction-ss_sLdR::synapse0x1c087c0() {
   return (neuron0x1bff350()*-0.00359704);
}

double NNfunction-ss_sLdR::synapse0x1c08800() {
   return (neuron0x1bff690()*-0.0164576);
}

double NNfunction-ss_sLdR::synapse0x1c08840() {
   return (neuron0x1bff9d0()*0.00713452);
}

double NNfunction-ss_sLdR::synapse0x1c08880() {
   return (neuron0x1bffd10()*-0.0155347);
}

double NNfunction-ss_sLdR::synapse0x1c08c00() {
   return (neuron0x1bfb1e0()*0.209529);
}

double NNfunction-ss_sLdR::synapse0x1c08c40() {
   return (neuron0x1bfb490()*-0.188488);
}

double NNfunction-ss_sLdR::synapse0x1c08c80() {
   return (neuron0x1bfb7d0()*0.327569);
}

double NNfunction-ss_sLdR::synapse0x1c08cc0() {
   return (neuron0x1bfbb10()*1.13199);
}

double NNfunction-ss_sLdR::synapse0x1c08d00() {
   return (neuron0x1bfbe50()*0.527362);
}

double NNfunction-ss_sLdR::synapse0x1c08d40() {
   return (neuron0x1bfc190()*0.336314);
}

double NNfunction-ss_sLdR::synapse0x1c08d80() {
   return (neuron0x1bfc4d0()*-0.518892);
}

double NNfunction-ss_sLdR::synapse0x1c08dc0() {
   return (neuron0x1bfc810()*0.434617);
}

double NNfunction-ss_sLdR::synapse0x1c08e00() {
   return (neuron0x1bfcb50()*0.540984);
}

double NNfunction-ss_sLdR::synapse0x1c08e40() {
   return (neuron0x1bfce90()*0.561012);
}

double NNfunction-ss_sLdR::synapse0x1c08e80() {
   return (neuron0x1bfd1d0()*0.632988);
}

double NNfunction-ss_sLdR::synapse0x1c08ec0() {
   return (neuron0x1bfd510()*-0.175922);
}

double NNfunction-ss_sLdR::synapse0x1c08f00() {
   return (neuron0x1bfd850()*0.360762);
}

double NNfunction-ss_sLdR::synapse0x1c08f40() {
   return (neuron0x1bfdb90()*-0.616068);
}

double NNfunction-ss_sLdR::synapse0x1c08f80() {
   return (neuron0x1bfded0()*-0.0209962);
}

double NNfunction-ss_sLdR::synapse0x1c08fc0() {
   return (neuron0x1bfe210()*0.221165);
}

double NNfunction-ss_sLdR::synapse0x1c08a50() {
   return (neuron0x1bfe550()*0.344745);
}

double NNfunction-ss_sLdR::synapse0x1c08a90() {
   return (neuron0x1bfeab0()*-1.68852);
}

double NNfunction-ss_sLdR::synapse0x1c09110() {
   return (neuron0x1bfecd0()*0.544641);
}

double NNfunction-ss_sLdR::synapse0x1c09150() {
   return (neuron0x1bff010()*-0.0962172);
}

double NNfunction-ss_sLdR::synapse0x1c09190() {
   return (neuron0x1bff350()*0.573611);
}

double NNfunction-ss_sLdR::synapse0x1c091d0() {
   return (neuron0x1bff690()*-0.320425);
}

double NNfunction-ss_sLdR::synapse0x1c09210() {
   return (neuron0x1bff9d0()*0.254386);
}

double NNfunction-ss_sLdR::synapse0x1c09250() {
   return (neuron0x1bffd10()*-0.0885069);
}

double NNfunction-ss_sLdR::synapse0x1c095d0() {
   return (neuron0x1bfb1e0()*-0.0647833);
}

double NNfunction-ss_sLdR::synapse0x1c09610() {
   return (neuron0x1bfb490()*-0.0225451);
}

double NNfunction-ss_sLdR::synapse0x1c09650() {
   return (neuron0x1bfb7d0()*-0.0290426);
}

double NNfunction-ss_sLdR::synapse0x1c09690() {
   return (neuron0x1bfbb10()*-0.100174);
}

double NNfunction-ss_sLdR::synapse0x1c096d0() {
   return (neuron0x1bfbe50()*-0.0307382);
}

double NNfunction-ss_sLdR::synapse0x1c09710() {
   return (neuron0x1bfc190()*0.00817182);
}

double NNfunction-ss_sLdR::synapse0x1c09750() {
   return (neuron0x1bfc4d0()*0.035989);
}

double NNfunction-ss_sLdR::synapse0x1c09790() {
   return (neuron0x1bfc810()*0.0167863);
}

double NNfunction-ss_sLdR::synapse0x1c097d0() {
   return (neuron0x1bfcb50()*0.0226258);
}

double NNfunction-ss_sLdR::synapse0x1c09810() {
   return (neuron0x1bfce90()*-0.00596796);
}

double NNfunction-ss_sLdR::synapse0x1c09850() {
   return (neuron0x1bfd1d0()*-0.0663017);
}

double NNfunction-ss_sLdR::synapse0x1c09890() {
   return (neuron0x1bfd510()*0.0165638);
}

double NNfunction-ss_sLdR::synapse0x1c098d0() {
   return (neuron0x1bfd850()*-0.499668);
}

double NNfunction-ss_sLdR::synapse0x1c09910() {
   return (neuron0x1bfdb90()*-0.0582673);
}

double NNfunction-ss_sLdR::synapse0x1c09950() {
   return (neuron0x1bfded0()*0.0479941);
}

double NNfunction-ss_sLdR::synapse0x1c09990() {
   return (neuron0x1bfe210()*-0.0343831);
}

double NNfunction-ss_sLdR::synapse0x1c09420() {
   return (neuron0x1bfe550()*-0.0231108);
}

double NNfunction-ss_sLdR::synapse0x1c09460() {
   return (neuron0x1bfeab0()*-0.710815);
}

double NNfunction-ss_sLdR::synapse0x1c09ae0() {
   return (neuron0x1bfecd0()*-0.062117);
}

double NNfunction-ss_sLdR::synapse0x1c09b20() {
   return (neuron0x1bff010()*0.0622708);
}

double NNfunction-ss_sLdR::synapse0x1c09b60() {
   return (neuron0x1bff350()*0.0200863);
}

double NNfunction-ss_sLdR::synapse0x1c09ba0() {
   return (neuron0x1bff690()*0.00146761);
}

double NNfunction-ss_sLdR::synapse0x1c09be0() {
   return (neuron0x1bff9d0()*-0.0685376);
}

double NNfunction-ss_sLdR::synapse0x1c09c20() {
   return (neuron0x1bffd10()*-0.024299);
}

double NNfunction-ss_sLdR::synapse0x1c09fa0() {
   return (neuron0x1bfb1e0()*-0.265886);
}

double NNfunction-ss_sLdR::synapse0x1bfb370() {
   return (neuron0x1bfb490()*-0.13667);
}

double NNfunction-ss_sLdR::synapse0x1bfb3b0() {
   return (neuron0x1bfb7d0()*-1.63756);
}

double NNfunction-ss_sLdR::synapse0x1bfb6b0() {
   return (neuron0x1bfbb10()*-0.45404);
}

double NNfunction-ss_sLdR::synapse0x1bfb6f0() {
   return (neuron0x1bfbe50()*0.0965181);
}

double NNfunction-ss_sLdR::synapse0x1bfb9f0() {
   return (neuron0x1bfc190()*0.578137);
}

double NNfunction-ss_sLdR::synapse0x1bfba30() {
   return (neuron0x1bfc4d0()*0.495247);
}

double NNfunction-ss_sLdR::synapse0x1bfbd30() {
   return (neuron0x1bfc810()*0.436664);
}

double NNfunction-ss_sLdR::synapse0x1bfbd70() {
   return (neuron0x1bfcb50()*0.333434);
}

double NNfunction-ss_sLdR::synapse0x1bfc070() {
   return (neuron0x1bfce90()*-0.214448);
}

double NNfunction-ss_sLdR::synapse0x1bfc0b0() {
   return (neuron0x1bfd1d0()*0.0414144);
}

double NNfunction-ss_sLdR::synapse0x1bfc3b0() {
   return (neuron0x1bfd510()*0.16125);
}

double NNfunction-ss_sLdR::synapse0x1bfc3f0() {
   return (neuron0x1bfd850()*1.85437);
}

double NNfunction-ss_sLdR::synapse0x1bfc6f0() {
   return (neuron0x1bfdb90()*0.191773);
}

double NNfunction-ss_sLdR::synapse0x1bfc730() {
   return (neuron0x1bfded0()*-0.450717);
}

double NNfunction-ss_sLdR::synapse0x1bfca30() {
   return (neuron0x1bfe210()*-0.396086);
}

double NNfunction-ss_sLdR::synapse0x1bfca70() {
   return (neuron0x1bfe550()*-0.348982);
}

double NNfunction-ss_sLdR::synapse0x1bfcd70() {
   return (neuron0x1bfeab0()*-1.17647);
}

double NNfunction-ss_sLdR::synapse0x1bfcdb0() {
   return (neuron0x1bfecd0()*-0.180392);
}

double NNfunction-ss_sLdR::synapse0x1bfd0b0() {
   return (neuron0x1bff010()*-0.0641555);
}

double NNfunction-ss_sLdR::synapse0x1bfd0f0() {
   return (neuron0x1bff350()*0.238222);
}

double NNfunction-ss_sLdR::synapse0x1bfd3f0() {
   return (neuron0x1bff690()*-0.0551403);
}

double NNfunction-ss_sLdR::synapse0x1bfd430() {
   return (neuron0x1bff9d0()*-0.479989);
}

double NNfunction-ss_sLdR::synapse0x1bfd730() {
   return (neuron0x1bffd10()*0.107168);
}

double NNfunction-ss_sLdR::synapse0x1bfd770() {
   return (neuron0x1bfb1e0()*-0.000425391);
}

double NNfunction-ss_sLdR::synapse0x1bfe430() {
   return (neuron0x1bfb490()*0.00461497);
}

double NNfunction-ss_sLdR::synapse0x1bfe470() {
   return (neuron0x1bfb7d0()*-0.00771031);
}

double NNfunction-ss_sLdR::synapse0x1c09df0() {
   return (neuron0x1bfbb10()*-2.17529);
}

double NNfunction-ss_sLdR::synapse0x1c09e30() {
   return (neuron0x1bfbe50()*0.0188581);
}

double NNfunction-ss_sLdR::synapse0x1bfe770() {
   return (neuron0x1bfc190()*-0.00529532);
}

double NNfunction-ss_sLdR::synapse0x1bfe7b0() {
   return (neuron0x1bfc4d0()*-0.00212423);
}

double NNfunction-ss_sLdR::synapse0x19b6180() {
   return (neuron0x1bfc810()*0.00182127);
}

double NNfunction-ss_sLdR::synapse0x19b61c0() {
   return (neuron0x1bfcb50()*0.0111431);
}

double NNfunction-ss_sLdR::synapse0x1bfeef0() {
   return (neuron0x1bfce90()*0.0120788);
}

double NNfunction-ss_sLdR::synapse0x1bfef30() {
   return (neuron0x1bfd1d0()*-0.0158224);
}

double NNfunction-ss_sLdR::synapse0x1bff230() {
   return (neuron0x1bfd510()*-0.00224742);
}

double NNfunction-ss_sLdR::synapse0x1bff270() {
   return (neuron0x1bfd850()*-0.163003);
}

double NNfunction-ss_sLdR::synapse0x1bff570() {
   return (neuron0x1bfdb90()*-0.0216976);
}

double NNfunction-ss_sLdR::synapse0x1bff5b0() {
   return (neuron0x1bfded0()*-0.00952415);
}

double NNfunction-ss_sLdR::synapse0x1bff8b0() {
   return (neuron0x1bfe210()*0.000435692);
}

double NNfunction-ss_sLdR::synapse0x1bff8f0() {
   return (neuron0x1bfe550()*-0.0233185);
}

double NNfunction-ss_sLdR::synapse0x1bffbf0() {
   return (neuron0x1bfeab0()*-0.204413);
}

double NNfunction-ss_sLdR::synapse0x1bffc30() {
   return (neuron0x1bfecd0()*-0.00427123);
}

double NNfunction-ss_sLdR::synapse0x1bfff30() {
   return (neuron0x1bff010()*-0.00764209);
}

double NNfunction-ss_sLdR::synapse0x1bfff70() {
   return (neuron0x1bff350()*0.0266558);
}

double NNfunction-ss_sLdR::synapse0x1bfda70() {
   return (neuron0x1bff690()*0.00322051);
}

double NNfunction-ss_sLdR::synapse0x1bfdab0() {
   return (neuron0x1bff9d0()*-0.000111936);
}

double NNfunction-ss_sLdR::synapse0x1c0bd10() {
   return (neuron0x1bffd10()*0.0035657);
}

double NNfunction-ss_sLdR::synapse0x1c0c090() {
   return (neuron0x1bfb1e0()*-0.3044);
}

double NNfunction-ss_sLdR::synapse0x1c0c0d0() {
   return (neuron0x1bfb490()*-0.264323);
}

double NNfunction-ss_sLdR::synapse0x1c0c110() {
   return (neuron0x1bfb7d0()*-0.867061);
}

double NNfunction-ss_sLdR::synapse0x1c0c150() {
   return (neuron0x1bfbb10()*0.620276);
}

double NNfunction-ss_sLdR::synapse0x1c0c190() {
   return (neuron0x1bfbe50()*-0.536766);
}

double NNfunction-ss_sLdR::synapse0x1c0c1d0() {
   return (neuron0x1bfc190()*-0.0782886);
}

double NNfunction-ss_sLdR::synapse0x1c0c210() {
   return (neuron0x1bfc4d0()*0.0316285);
}

double NNfunction-ss_sLdR::synapse0x1c0c250() {
   return (neuron0x1bfc810()*-0.366634);
}

double NNfunction-ss_sLdR::synapse0x1c0c290() {
   return (neuron0x1bfcb50()*0.011771);
}

double NNfunction-ss_sLdR::synapse0x1c0c2d0() {
   return (neuron0x1bfce90()*-0.208616);
}

double NNfunction-ss_sLdR::synapse0x1c0c310() {
   return (neuron0x1bfd1d0()*-0.0131396);
}

double NNfunction-ss_sLdR::synapse0x1c0c350() {
   return (neuron0x1bfd510()*-0.148022);
}

double NNfunction-ss_sLdR::synapse0x1c0c390() {
   return (neuron0x1bfd850()*0.193177);
}

double NNfunction-ss_sLdR::synapse0x1c0c3d0() {
   return (neuron0x1bfdb90()*-0.11606);
}

double NNfunction-ss_sLdR::synapse0x1c0c410() {
   return (neuron0x1bfded0()*0.245921);
}

double NNfunction-ss_sLdR::synapse0x1c0c450() {
   return (neuron0x1bfe210()*-0.210218);
}

double NNfunction-ss_sLdR::synapse0x1c0bee0() {
   return (neuron0x1bfe550()*-0.0980084);
}

double NNfunction-ss_sLdR::synapse0x1c0bf20() {
   return (neuron0x1bfeab0()*-0.273889);
}

double NNfunction-ss_sLdR::synapse0x1c0c5a0() {
   return (neuron0x1bfecd0()*-0.42134);
}

double NNfunction-ss_sLdR::synapse0x1c0c5e0() {
   return (neuron0x1bff010()*0.255989);
}

double NNfunction-ss_sLdR::synapse0x1c0c620() {
   return (neuron0x1bff350()*0.113439);
}

double NNfunction-ss_sLdR::synapse0x1c0c660() {
   return (neuron0x1bff690()*-0.0692614);
}

double NNfunction-ss_sLdR::synapse0x1c0c6a0() {
   return (neuron0x1bff9d0()*-0.275144);
}

double NNfunction-ss_sLdR::synapse0x1c0c6e0() {
   return (neuron0x1bffd10()*0.0267063);
}

double NNfunction-ss_sLdR::synapse0x1c0ca60() {
   return (neuron0x1bfb1e0()*0.00136161);
}

double NNfunction-ss_sLdR::synapse0x1c0caa0() {
   return (neuron0x1bfb490()*-0.0430405);
}

double NNfunction-ss_sLdR::synapse0x1c0cae0() {
   return (neuron0x1bfb7d0()*-0.448441);
}

double NNfunction-ss_sLdR::synapse0x1c0cb20() {
   return (neuron0x1bfbb10()*-1.09797);
}

double NNfunction-ss_sLdR::synapse0x1c0cb60() {
   return (neuron0x1bfbe50()*-0.112097);
}

double NNfunction-ss_sLdR::synapse0x1c0cba0() {
   return (neuron0x1bfc190()*0.0390594);
}

double NNfunction-ss_sLdR::synapse0x1c0cbe0() {
   return (neuron0x1bfc4d0()*-0.00239125);
}

double NNfunction-ss_sLdR::synapse0x1c0cc20() {
   return (neuron0x1bfc810()*0.239391);
}

double NNfunction-ss_sLdR::synapse0x1c0cc60() {
   return (neuron0x1bfcb50()*0.160984);
}

double NNfunction-ss_sLdR::synapse0x1c0cca0() {
   return (neuron0x1bfce90()*0.196198);
}

double NNfunction-ss_sLdR::synapse0x1c0cce0() {
   return (neuron0x1bfd1d0()*-0.0291572);
}

double NNfunction-ss_sLdR::synapse0x1c0cd20() {
   return (neuron0x1bfd510()*0.283819);
}

double NNfunction-ss_sLdR::synapse0x1c0cd60() {
   return (neuron0x1bfd850()*-0.448888);
}

double NNfunction-ss_sLdR::synapse0x1c0cda0() {
   return (neuron0x1bfdb90()*-0.318711);
}

double NNfunction-ss_sLdR::synapse0x1c0cde0() {
   return (neuron0x1bfded0()*-0.0873773);
}

double NNfunction-ss_sLdR::synapse0x1c0ce20() {
   return (neuron0x1bfe210()*0.0426079);
}

double NNfunction-ss_sLdR::synapse0x1c0c8b0() {
   return (neuron0x1bfe550()*-0.0760987);
}

double NNfunction-ss_sLdR::synapse0x1c0c8f0() {
   return (neuron0x1bfeab0()*0.371052);
}

double NNfunction-ss_sLdR::synapse0x1c0cf70() {
   return (neuron0x1bfecd0()*0.0938681);
}

double NNfunction-ss_sLdR::synapse0x1c0cfb0() {
   return (neuron0x1bff010()*0.190214);
}

double NNfunction-ss_sLdR::synapse0x1c0cff0() {
   return (neuron0x1bff350()*0.103697);
}

double NNfunction-ss_sLdR::synapse0x1c0d030() {
   return (neuron0x1bff690()*0.00649794);
}

double NNfunction-ss_sLdR::synapse0x1c0d070() {
   return (neuron0x1bff9d0()*-0.0937148);
}

double NNfunction-ss_sLdR::synapse0x1c0d0b0() {
   return (neuron0x1bffd10()*-0.0702096);
}

double NNfunction-ss_sLdR::synapse0x1c0d430() {
   return (neuron0x1bfb1e0()*0.417144);
}

double NNfunction-ss_sLdR::synapse0x1c0d470() {
   return (neuron0x1bfb490()*-0.279081);
}

double NNfunction-ss_sLdR::synapse0x1c0d4b0() {
   return (neuron0x1bfb7d0()*0.137197);
}

double NNfunction-ss_sLdR::synapse0x1c0d4f0() {
   return (neuron0x1bfbb10()*0.783257);
}

double NNfunction-ss_sLdR::synapse0x1c0d530() {
   return (neuron0x1bfbe50()*-0.0273031);
}

double NNfunction-ss_sLdR::synapse0x1c0d570() {
   return (neuron0x1bfc190()*0.342947);
}

double NNfunction-ss_sLdR::synapse0x1c0d5b0() {
   return (neuron0x1bfc4d0()*0.354836);
}

double NNfunction-ss_sLdR::synapse0x1c0d5f0() {
   return (neuron0x1bfc810()*-0.335468);
}

double NNfunction-ss_sLdR::synapse0x1c0d630() {
   return (neuron0x1bfcb50()*0.774832);
}

double NNfunction-ss_sLdR::synapse0x1c0d670() {
   return (neuron0x1bfce90()*0.599577);
}

double NNfunction-ss_sLdR::synapse0x1c0d6b0() {
   return (neuron0x1bfd1d0()*0.86867);
}

double NNfunction-ss_sLdR::synapse0x1c0d6f0() {
   return (neuron0x1bfd510()*0.140278);
}

double NNfunction-ss_sLdR::synapse0x1c0d730() {
   return (neuron0x1bfd850()*-0.971485);
}

double NNfunction-ss_sLdR::synapse0x1c0d770() {
   return (neuron0x1bfdb90()*-0.157447);
}

double NNfunction-ss_sLdR::synapse0x1c0d7b0() {
   return (neuron0x1bfded0()*-0.316482);
}

double NNfunction-ss_sLdR::synapse0x1c0d7f0() {
   return (neuron0x1bfe210()*-0.266267);
}

double NNfunction-ss_sLdR::synapse0x1c0d280() {
   return (neuron0x1bfe550()*-0.0833567);
}

double NNfunction-ss_sLdR::synapse0x1c0d2c0() {
   return (neuron0x1bfeab0()*0.58147);
}

double NNfunction-ss_sLdR::synapse0x1c0d940() {
   return (neuron0x1bfecd0()*-0.0311687);
}

double NNfunction-ss_sLdR::synapse0x1c0d980() {
   return (neuron0x1bff010()*-1.07576);
}

double NNfunction-ss_sLdR::synapse0x1c0d9c0() {
   return (neuron0x1bff350()*-0.278376);
}

double NNfunction-ss_sLdR::synapse0x1c0da00() {
   return (neuron0x1bff690()*0.369989);
}

double NNfunction-ss_sLdR::synapse0x1c0da40() {
   return (neuron0x1bff9d0()*-0.469648);
}

double NNfunction-ss_sLdR::synapse0x1c0da80() {
   return (neuron0x1bffd10()*0.486861);
}

double NNfunction-ss_sLdR::synapse0x1c0de00() {
   return (neuron0x1bfb1e0()*0.112179);
}

double NNfunction-ss_sLdR::synapse0x1c0de40() {
   return (neuron0x1bfb490()*-0.246369);
}

double NNfunction-ss_sLdR::synapse0x1c0de80() {
   return (neuron0x1bfb7d0()*-0.309821);
}

double NNfunction-ss_sLdR::synapse0x1c0dec0() {
   return (neuron0x1bfbb10()*-0.411419);
}

double NNfunction-ss_sLdR::synapse0x1c0df00() {
   return (neuron0x1bfbe50()*-0.0177047);
}

double NNfunction-ss_sLdR::synapse0x1c0df40() {
   return (neuron0x1bfc190()*-0.293001);
}

double NNfunction-ss_sLdR::synapse0x1c0df80() {
   return (neuron0x1bfc4d0()*-0.123315);
}

double NNfunction-ss_sLdR::synapse0x1c0dfc0() {
   return (neuron0x1bfc810()*-0.07868);
}

double NNfunction-ss_sLdR::synapse0x1c0e000() {
   return (neuron0x1bfcb50()*-0.240106);
}

double NNfunction-ss_sLdR::synapse0x1c0e040() {
   return (neuron0x1bfce90()*-0.378098);
}

double NNfunction-ss_sLdR::synapse0x1c0e080() {
   return (neuron0x1bfd1d0()*0.521426);
}

double NNfunction-ss_sLdR::synapse0x1c0e0c0() {
   return (neuron0x1bfd510()*0.00142512);
}

double NNfunction-ss_sLdR::synapse0x1c0e100() {
   return (neuron0x1bfd850()*-0.305815);
}

double NNfunction-ss_sLdR::synapse0x1c0e140() {
   return (neuron0x1bfdb90()*0.32279);
}

double NNfunction-ss_sLdR::synapse0x1c0e180() {
   return (neuron0x1bfded0()*0.290592);
}

double NNfunction-ss_sLdR::synapse0x1c0e1c0() {
   return (neuron0x1bfe210()*-0.466304);
}

double NNfunction-ss_sLdR::synapse0x1c0dc50() {
   return (neuron0x1bfe550()*0.206412);
}

double NNfunction-ss_sLdR::synapse0x1c0dc90() {
   return (neuron0x1bfeab0()*-0.571098);
}

double NNfunction-ss_sLdR::synapse0x1c0e310() {
   return (neuron0x1bfecd0()*-0.290923);
}

double NNfunction-ss_sLdR::synapse0x1c0e350() {
   return (neuron0x1bff010()*0.161914);
}

double NNfunction-ss_sLdR::synapse0x1c0e390() {
   return (neuron0x1bff350()*-0.119557);
}

double NNfunction-ss_sLdR::synapse0x1c0e3d0() {
   return (neuron0x1bff690()*-0.129814);
}

double NNfunction-ss_sLdR::synapse0x1c0e410() {
   return (neuron0x1bff9d0()*-0.25473);
}

double NNfunction-ss_sLdR::synapse0x1c0e450() {
   return (neuron0x1bffd10()*0.309689);
}

double NNfunction-ss_sLdR::synapse0x1c0e7d0() {
   return (neuron0x1bfb1e0()*0.010502);
}

double NNfunction-ss_sLdR::synapse0x1c0e810() {
   return (neuron0x1bfb490()*0.135662);
}

double NNfunction-ss_sLdR::synapse0x1c0e850() {
   return (neuron0x1bfb7d0()*0.0199479);
}

double NNfunction-ss_sLdR::synapse0x1c0e890() {
   return (neuron0x1bfbb10()*0.417852);
}

double NNfunction-ss_sLdR::synapse0x1c0e8d0() {
   return (neuron0x1bfbe50()*0.169887);
}

double NNfunction-ss_sLdR::synapse0x1c0e910() {
   return (neuron0x1bfc190()*-0.481947);
}

double NNfunction-ss_sLdR::synapse0x1c0e950() {
   return (neuron0x1bfc4d0()*-0.107558);
}

double NNfunction-ss_sLdR::synapse0x1c0e990() {
   return (neuron0x1bfc810()*0.018906);
}

double NNfunction-ss_sLdR::synapse0x1c0e9d0() {
   return (neuron0x1bfcb50()*0.761644);
}

double NNfunction-ss_sLdR::synapse0x1c06b90() {
   return (neuron0x1bfce90()*-0.263419);
}

double NNfunction-ss_sLdR::synapse0x1c06bd0() {
   return (neuron0x1bfd1d0()*-0.256656);
}

double NNfunction-ss_sLdR::synapse0x1c06c10() {
   return (neuron0x1bfd510()*0.414037);
}

double NNfunction-ss_sLdR::synapse0x1c06c50() {
   return (neuron0x1bfd850()*0.681223);
}

double NNfunction-ss_sLdR::synapse0x1c06c90() {
   return (neuron0x1bfdb90()*0.566843);
}

double NNfunction-ss_sLdR::synapse0x1c06cd0() {
   return (neuron0x1bfded0()*0.114882);
}

double NNfunction-ss_sLdR::synapse0x1c06d10() {
   return (neuron0x1bfe210()*-0.100514);
}

double NNfunction-ss_sLdR::synapse0x1c0e620() {
   return (neuron0x1bfe550()*0.0688821);
}

double NNfunction-ss_sLdR::synapse0x1c0e660() {
   return (neuron0x1bfeab0()*0.967134);
}

double NNfunction-ss_sLdR::synapse0x1c06e60() {
   return (neuron0x1bfecd0()*0.0479429);
}

double NNfunction-ss_sLdR::synapse0x1c06ea0() {
   return (neuron0x1bff010()*0.704536);
}

double NNfunction-ss_sLdR::synapse0x1c06ee0() {
   return (neuron0x1bff350()*-0.16929);
}

double NNfunction-ss_sLdR::synapse0x1c06f20() {
   return (neuron0x1bff690()*-0.148459);
}

double NNfunction-ss_sLdR::synapse0x1c06f60() {
   return (neuron0x1bff9d0()*-0.144922);
}

double NNfunction-ss_sLdR::synapse0x1c06fa0() {
   return (neuron0x1bffd10()*0.454785);
}

double NNfunction-ss_sLdR::synapse0x1c07320() {
   return (neuron0x1bfb1e0()*-0.193474);
}

double NNfunction-ss_sLdR::synapse0x1c07360() {
   return (neuron0x1bfb490()*0.800814);
}

double NNfunction-ss_sLdR::synapse0x1c073a0() {
   return (neuron0x1bfb7d0()*0.106856);
}

double NNfunction-ss_sLdR::synapse0x1c073e0() {
   return (neuron0x1bfbb10()*-0.12642);
}

double NNfunction-ss_sLdR::synapse0x1c07420() {
   return (neuron0x1bfbe50()*0.740309);
}

double NNfunction-ss_sLdR::synapse0x1c07460() {
   return (neuron0x1bfc190()*-0.291387);
}

double NNfunction-ss_sLdR::synapse0x1c074a0() {
   return (neuron0x1bfc4d0()*0.49987);
}

double NNfunction-ss_sLdR::synapse0x1c074e0() {
   return (neuron0x1bfc810()*-0.0715458);
}

double NNfunction-ss_sLdR::synapse0x1c07520() {
   return (neuron0x1bfcb50()*0.0696518);
}

double NNfunction-ss_sLdR::synapse0x1c07560() {
   return (neuron0x1bfce90()*-0.00856633);
}

double NNfunction-ss_sLdR::synapse0x1c075a0() {
   return (neuron0x1bfd1d0()*0.435431);
}

double NNfunction-ss_sLdR::synapse0x1c075e0() {
   return (neuron0x1bfd510()*-0.529003);
}

double NNfunction-ss_sLdR::synapse0x1c07620() {
   return (neuron0x1bfd850()*-0.00142786);
}

double NNfunction-ss_sLdR::synapse0x1c07660() {
   return (neuron0x1bfdb90()*0.0204743);
}

double NNfunction-ss_sLdR::synapse0x1c076a0() {
   return (neuron0x1bfded0()*-0.629329);
}

double NNfunction-ss_sLdR::synapse0x1c076e0() {
   return (neuron0x1bfe210()*-0.300674);
}

double NNfunction-ss_sLdR::synapse0x1c07170() {
   return (neuron0x1bfe550()*-0.211629);
}

double NNfunction-ss_sLdR::synapse0x1c071b0() {
   return (neuron0x1bfeab0()*0.927434);
}

double NNfunction-ss_sLdR::synapse0x1c07830() {
   return (neuron0x1bfecd0()*0.392134);
}

double NNfunction-ss_sLdR::synapse0x1c07870() {
   return (neuron0x1bff010()*-0.233247);
}

double NNfunction-ss_sLdR::synapse0x1c078b0() {
   return (neuron0x1bff350()*0.130535);
}

double NNfunction-ss_sLdR::synapse0x1c078f0() {
   return (neuron0x1bff690()*-0.28255);
}

double NNfunction-ss_sLdR::synapse0x1c07930() {
   return (neuron0x1bff9d0()*-0.252234);
}

double NNfunction-ss_sLdR::synapse0x1c07970() {
   return (neuron0x1bffd10()*0.0440888);
}

double NNfunction-ss_sLdR::synapse0x1c07b40() {
   return (neuron0x1bfb1e0()*0.00984107);
}

double NNfunction-ss_sLdR::synapse0x1c10bd0() {
   return (neuron0x1bfb490()*0.0241923);
}

double NNfunction-ss_sLdR::synapse0x1c10c10() {
   return (neuron0x1bfb7d0()*0.00159586);
}

double NNfunction-ss_sLdR::synapse0x1c10c50() {
   return (neuron0x1bfbb10()*-1.31103);
}

double NNfunction-ss_sLdR::synapse0x1c10c90() {
   return (neuron0x1bfbe50()*-0.0301419);
}

double NNfunction-ss_sLdR::synapse0x1c10cd0() {
   return (neuron0x1bfc190()*-0.0194885);
}

double NNfunction-ss_sLdR::synapse0x1c10d10() {
   return (neuron0x1bfc4d0()*0.0507997);
}

double NNfunction-ss_sLdR::synapse0x1c10d50() {
   return (neuron0x1bfc810()*-0.0271278);
}

double NNfunction-ss_sLdR::synapse0x1c10d90() {
   return (neuron0x1bfcb50()*-0.0482297);
}

double NNfunction-ss_sLdR::synapse0x1c10dd0() {
   return (neuron0x1bfce90()*-0.0136097);
}

double NNfunction-ss_sLdR::synapse0x1c10e10() {
   return (neuron0x1bfd1d0()*-0.0275399);
}

double NNfunction-ss_sLdR::synapse0x1c10e50() {
   return (neuron0x1bfd510()*0.0161287);
}

double NNfunction-ss_sLdR::synapse0x1c10e90() {
   return (neuron0x1bfd850()*0.479869);
}

double NNfunction-ss_sLdR::synapse0x1c10ed0() {
   return (neuron0x1bfdb90()*0.0200422);
}

double NNfunction-ss_sLdR::synapse0x1c10f10() {
   return (neuron0x1bfded0()*0.0421216);
}

double NNfunction-ss_sLdR::synapse0x1c10f50() {
   return (neuron0x1bfe210()*0.0584844);
}

double NNfunction-ss_sLdR::synapse0x1c10a20() {
   return (neuron0x1bfe550()*-0.00679614);
}

double NNfunction-ss_sLdR::synapse0x1c10a60() {
   return (neuron0x1bfeab0()*0.654942);
}

double NNfunction-ss_sLdR::synapse0x1c110a0() {
   return (neuron0x1bfecd0()*-0.0203493);
}

double NNfunction-ss_sLdR::synapse0x1c110e0() {
   return (neuron0x1bff010()*0.00578287);
}

double NNfunction-ss_sLdR::synapse0x1c11120() {
   return (neuron0x1bff350()*-0.0341421);
}

double NNfunction-ss_sLdR::synapse0x1c11160() {
   return (neuron0x1bff690()*-0.00920521);
}

double NNfunction-ss_sLdR::synapse0x1c111a0() {
   return (neuron0x1bff9d0()*-0.00495248);
}

double NNfunction-ss_sLdR::synapse0x1c111e0() {
   return (neuron0x1bffd10()*-0.0255409);
}

double NNfunction-ss_sLdR::synapse0x1c11560() {
   return (neuron0x1bfb1e0()*-0.0228017);
}

double NNfunction-ss_sLdR::synapse0x1c115a0() {
   return (neuron0x1bfb490()*-0.0147919);
}

double NNfunction-ss_sLdR::synapse0x1c115e0() {
   return (neuron0x1bfb7d0()*0.056874);
}

double NNfunction-ss_sLdR::synapse0x1c11620() {
   return (neuron0x1bfbb10()*-0.492708);
}

double NNfunction-ss_sLdR::synapse0x1c11660() {
   return (neuron0x1bfbe50()*-0.0106779);
}

double NNfunction-ss_sLdR::synapse0x1c116a0() {
   return (neuron0x1bfc190()*0.0215098);
}

double NNfunction-ss_sLdR::synapse0x1c116e0() {
   return (neuron0x1bfc4d0()*-0.0664756);
}

double NNfunction-ss_sLdR::synapse0x1c11720() {
   return (neuron0x1bfc810()*0.0253718);
}

double NNfunction-ss_sLdR::synapse0x1c11760() {
   return (neuron0x1bfcb50()*-0.0271372);
}

double NNfunction-ss_sLdR::synapse0x1c117a0() {
   return (neuron0x1bfce90()*-0.00963476);
}

double NNfunction-ss_sLdR::synapse0x1c117e0() {
   return (neuron0x1bfd1d0()*-0.0280652);
}

double NNfunction-ss_sLdR::synapse0x1c11820() {
   return (neuron0x1bfd510()*0.0221918);
}

double NNfunction-ss_sLdR::synapse0x1c11860() {
   return (neuron0x1bfd850()*0.327866);
}

double NNfunction-ss_sLdR::synapse0x1c118a0() {
   return (neuron0x1bfdb90()*-0.0506112);
}

double NNfunction-ss_sLdR::synapse0x1c118e0() {
   return (neuron0x1bfded0()*-0.00833482);
}

double NNfunction-ss_sLdR::synapse0x1c11920() {
   return (neuron0x1bfe210()*0.0639196);
}

double NNfunction-ss_sLdR::synapse0x1c113b0() {
   return (neuron0x1bfe550()*-0.0337232);
}

double NNfunction-ss_sLdR::synapse0x1c113f0() {
   return (neuron0x1bfeab0()*-0.431161);
}

double NNfunction-ss_sLdR::synapse0x1c11a70() {
   return (neuron0x1bfecd0()*0.0758179);
}

double NNfunction-ss_sLdR::synapse0x1c11ab0() {
   return (neuron0x1bff010()*-0.0307741);
}

double NNfunction-ss_sLdR::synapse0x1c11af0() {
   return (neuron0x1bff350()*0.0164743);
}

double NNfunction-ss_sLdR::synapse0x1c11b30() {
   return (neuron0x1bff690()*0.0212085);
}

double NNfunction-ss_sLdR::synapse0x1c11b70() {
   return (neuron0x1bff9d0()*0.0308353);
}

double NNfunction-ss_sLdR::synapse0x1c11bb0() {
   return (neuron0x1bffd10()*0.0438628);
}

double NNfunction-ss_sLdR::synapse0x1c11f30() {
   return (neuron0x1bfb1e0()*-0.0139415);
}

double NNfunction-ss_sLdR::synapse0x1c11f70() {
   return (neuron0x1bfb490()*0.000269024);
}

double NNfunction-ss_sLdR::synapse0x1c11fb0() {
   return (neuron0x1bfb7d0()*-0.0397571);
}

double NNfunction-ss_sLdR::synapse0x1c11ff0() {
   return (neuron0x1bfbb10()*-0.317987);
}

double NNfunction-ss_sLdR::synapse0x1c12030() {
   return (neuron0x1bfbe50()*0.00758221);
}

double NNfunction-ss_sLdR::synapse0x1c12070() {
   return (neuron0x1bfc190()*-0.0201873);
}

double NNfunction-ss_sLdR::synapse0x1c120b0() {
   return (neuron0x1bfc4d0()*0.00844839);
}

double NNfunction-ss_sLdR::synapse0x1c120f0() {
   return (neuron0x1bfc810()*-0.00412557);
}

double NNfunction-ss_sLdR::synapse0x1c12130() {
   return (neuron0x1bfcb50()*0.0309317);
}

double NNfunction-ss_sLdR::synapse0x1c12170() {
   return (neuron0x1bfce90()*0.00420367);
}

double NNfunction-ss_sLdR::synapse0x1c121b0() {
   return (neuron0x1bfd1d0()*0.00428651);
}

double NNfunction-ss_sLdR::synapse0x1c121f0() {
   return (neuron0x1bfd510()*0.0588483);
}

double NNfunction-ss_sLdR::synapse0x1c12230() {
   return (neuron0x1bfd850()*-0.895905);
}

double NNfunction-ss_sLdR::synapse0x1c12270() {
   return (neuron0x1bfdb90()*-0.0118368);
}

double NNfunction-ss_sLdR::synapse0x1c122b0() {
   return (neuron0x1bfded0()*0.0166074);
}

double NNfunction-ss_sLdR::synapse0x1c122f0() {
   return (neuron0x1bfe210()*0.019557);
}

double NNfunction-ss_sLdR::synapse0x1c11d80() {
   return (neuron0x1bfe550()*-0.0176505);
}

double NNfunction-ss_sLdR::synapse0x1c11dc0() {
   return (neuron0x1bfeab0()*-0.850938);
}

double NNfunction-ss_sLdR::synapse0x1c12440() {
   return (neuron0x1bfecd0()*-0.000119322);
}

double NNfunction-ss_sLdR::synapse0x1c12480() {
   return (neuron0x1bff010()*0.0117484);
}

double NNfunction-ss_sLdR::synapse0x1c124c0() {
   return (neuron0x1bff350()*0.0118242);
}

double NNfunction-ss_sLdR::synapse0x1c12500() {
   return (neuron0x1bff690()*-0.000913088);
}

double NNfunction-ss_sLdR::synapse0x1c12540() {
   return (neuron0x1bff9d0()*-0.00515058);
}

double NNfunction-ss_sLdR::synapse0x1c12580() {
   return (neuron0x1bffd10()*0.00659383);
}

double NNfunction-ss_sLdR::synapse0x1c12900() {
   return (neuron0x1bfb1e0()*-0.137116);
}

double NNfunction-ss_sLdR::synapse0x1c12940() {
   return (neuron0x1bfb490()*0.0124102);
}

double NNfunction-ss_sLdR::synapse0x1c12980() {
   return (neuron0x1bfb7d0()*0.384999);
}

double NNfunction-ss_sLdR::synapse0x1c129c0() {
   return (neuron0x1bfbb10()*-0.516645);
}

double NNfunction-ss_sLdR::synapse0x1c12a00() {
   return (neuron0x1bfbe50()*0.800441);
}

double NNfunction-ss_sLdR::synapse0x1c12a40() {
   return (neuron0x1bfc190()*0.436878);
}

double NNfunction-ss_sLdR::synapse0x1c12a80() {
   return (neuron0x1bfc4d0()*-0.267181);
}

double NNfunction-ss_sLdR::synapse0x1c12ac0() {
   return (neuron0x1bfc810()*-0.804895);
}

double NNfunction-ss_sLdR::synapse0x1c12b00() {
   return (neuron0x1bfcb50()*-0.321521);
}

double NNfunction-ss_sLdR::synapse0x1c12b40() {
   return (neuron0x1bfce90()*-0.476373);
}

double NNfunction-ss_sLdR::synapse0x1c12b80() {
   return (neuron0x1bfd1d0()*-0.241283);
}

double NNfunction-ss_sLdR::synapse0x1c12bc0() {
   return (neuron0x1bfd510()*0.0291358);
}

double NNfunction-ss_sLdR::synapse0x1c12c00() {
   return (neuron0x1bfd850()*0.00793831);
}

double NNfunction-ss_sLdR::synapse0x1c12c40() {
   return (neuron0x1bfdb90()*-0.39155);
}

double NNfunction-ss_sLdR::synapse0x1c12c80() {
   return (neuron0x1bfded0()*-0.0540532);
}

double NNfunction-ss_sLdR::synapse0x1c12cc0() {
   return (neuron0x1bfe210()*0.327657);
}

double NNfunction-ss_sLdR::synapse0x1c12750() {
   return (neuron0x1bfe550()*0.549531);
}

double NNfunction-ss_sLdR::synapse0x1c12790() {
   return (neuron0x1bfeab0()*-0.408304);
}

double NNfunction-ss_sLdR::synapse0x1c12e10() {
   return (neuron0x1bfecd0()*-0.552566);
}

double NNfunction-ss_sLdR::synapse0x1c12e50() {
   return (neuron0x1bff010()*0.389506);
}

double NNfunction-ss_sLdR::synapse0x1c12e90() {
   return (neuron0x1bff350()*-0.383474);
}

double NNfunction-ss_sLdR::synapse0x1c12ed0() {
   return (neuron0x1bff690()*0.259691);
}

double NNfunction-ss_sLdR::synapse0x1c12f10() {
   return (neuron0x1bff9d0()*0.399624);
}

double NNfunction-ss_sLdR::synapse0x1c12f50() {
   return (neuron0x1bffd10()*-0.145623);
}

double NNfunction-ss_sLdR::synapse0x1c132d0() {
   return (neuron0x1bfb1e0()*0.0229405);
}

double NNfunction-ss_sLdR::synapse0x1c13310() {
   return (neuron0x1bfb490()*-0.37239);
}

double NNfunction-ss_sLdR::synapse0x1c13350() {
   return (neuron0x1bfb7d0()*0.0234431);
}

double NNfunction-ss_sLdR::synapse0x1c13390() {
   return (neuron0x1bfbb10()*-1.31912);
}

double NNfunction-ss_sLdR::synapse0x1c133d0() {
   return (neuron0x1bfbe50()*0.053937);
}

double NNfunction-ss_sLdR::synapse0x1c13410() {
   return (neuron0x1bfc190()*0.0334472);
}

double NNfunction-ss_sLdR::synapse0x1c13450() {
   return (neuron0x1bfc4d0()*0.170724);
}

double NNfunction-ss_sLdR::synapse0x1c13490() {
   return (neuron0x1bfc810()*0.61987);
}

double NNfunction-ss_sLdR::synapse0x1c134d0() {
   return (neuron0x1bfcb50()*-0.0891132);
}

double NNfunction-ss_sLdR::synapse0x1c13510() {
   return (neuron0x1bfce90()*0.964421);
}

double NNfunction-ss_sLdR::synapse0x1c13550() {
   return (neuron0x1bfd1d0()*-0.551863);
}

double NNfunction-ss_sLdR::synapse0x1c13590() {
   return (neuron0x1bfd510()*-0.196427);
}

double NNfunction-ss_sLdR::synapse0x1c135d0() {
   return (neuron0x1bfd850()*-0.48823);
}

double NNfunction-ss_sLdR::synapse0x1c13610() {
   return (neuron0x1bfdb90()*-0.283361);
}

double NNfunction-ss_sLdR::synapse0x1c13650() {
   return (neuron0x1bfded0()*0.749541);
}

double NNfunction-ss_sLdR::synapse0x1c13690() {
   return (neuron0x1bfe210()*-0.0314359);
}

double NNfunction-ss_sLdR::synapse0x1c13120() {
   return (neuron0x1bfe550()*0.0324553);
}

double NNfunction-ss_sLdR::synapse0x1c13160() {
   return (neuron0x1bfeab0()*-0.464116);
}

double NNfunction-ss_sLdR::synapse0x1c137e0() {
   return (neuron0x1bfecd0()*-0.0869014);
}

double NNfunction-ss_sLdR::synapse0x1c13820() {
   return (neuron0x1bff010()*0.319709);
}

double NNfunction-ss_sLdR::synapse0x1c13860() {
   return (neuron0x1bff350()*0.488475);
}

double NNfunction-ss_sLdR::synapse0x1c138a0() {
   return (neuron0x1bff690()*0.19993);
}

double NNfunction-ss_sLdR::synapse0x1c138e0() {
   return (neuron0x1bff9d0()*-0.606874);
}

double NNfunction-ss_sLdR::synapse0x1c13920() {
   return (neuron0x1bffd10()*-0.0205401);
}

double NNfunction-ss_sLdR::synapse0x1c13ca0() {
   return (neuron0x1bfb1e0()*-0.548156);
}

double NNfunction-ss_sLdR::synapse0x1c13ce0() {
   return (neuron0x1bfb490()*-0.104069);
}

double NNfunction-ss_sLdR::synapse0x1c13d20() {
   return (neuron0x1bfb7d0()*0.990848);
}

double NNfunction-ss_sLdR::synapse0x1c13d60() {
   return (neuron0x1bfbb10()*-0.406409);
}

double NNfunction-ss_sLdR::synapse0x1c13da0() {
   return (neuron0x1bfbe50()*0.650439);
}

double NNfunction-ss_sLdR::synapse0x1c13de0() {
   return (neuron0x1bfc190()*-0.460833);
}

double NNfunction-ss_sLdR::synapse0x1c13e20() {
   return (neuron0x1bfc4d0()*0.0141783);
}

double NNfunction-ss_sLdR::synapse0x1c13e60() {
   return (neuron0x1bfc810()*-0.178512);
}

double NNfunction-ss_sLdR::synapse0x1c13ea0() {
   return (neuron0x1bfcb50()*-0.34981);
}

double NNfunction-ss_sLdR::synapse0x1c13ee0() {
   return (neuron0x1bfce90()*0.0532561);
}

double NNfunction-ss_sLdR::synapse0x1c13f20() {
   return (neuron0x1bfd1d0()*-1.30128);
}

double NNfunction-ss_sLdR::synapse0x1c13f60() {
   return (neuron0x1bfd510()*0.847618);
}

double NNfunction-ss_sLdR::synapse0x1c13fa0() {
   return (neuron0x1bfd850()*-0.426715);
}

double NNfunction-ss_sLdR::synapse0x1c13fe0() {
   return (neuron0x1bfdb90()*-0.189436);
}

double NNfunction-ss_sLdR::synapse0x1c14020() {
   return (neuron0x1bfded0()*0.350159);
}

double NNfunction-ss_sLdR::synapse0x1c14060() {
   return (neuron0x1bfe210()*-0.668948);
}

double NNfunction-ss_sLdR::synapse0x1c13af0() {
   return (neuron0x1bfe550()*-0.656276);
}

double NNfunction-ss_sLdR::synapse0x1c13b30() {
   return (neuron0x1bfeab0()*-0.535471);
}

double NNfunction-ss_sLdR::synapse0x1c141b0() {
   return (neuron0x1bfecd0()*0.961009);
}

double NNfunction-ss_sLdR::synapse0x1c141f0() {
   return (neuron0x1bff010()*0.753067);
}

double NNfunction-ss_sLdR::synapse0x1c14230() {
   return (neuron0x1bff350()*0.337212);
}

double NNfunction-ss_sLdR::synapse0x1c14270() {
   return (neuron0x1bff690()*0.13608);
}

double NNfunction-ss_sLdR::synapse0x1c142b0() {
   return (neuron0x1bff9d0()*-0.866434);
}

double NNfunction-ss_sLdR::synapse0x1c142f0() {
   return (neuron0x1bffd10()*0.0405543);
}

double NNfunction-ss_sLdR::synapse0x1c14670() {
   return (neuron0x1bfb1e0()*-0.230773);
}

double NNfunction-ss_sLdR::synapse0x1c146b0() {
   return (neuron0x1bfb490()*0.00297601);
}

double NNfunction-ss_sLdR::synapse0x1c146f0() {
   return (neuron0x1bfb7d0()*-1.05634);
}

double NNfunction-ss_sLdR::synapse0x1c14730() {
   return (neuron0x1bfbb10()*-2.77786);
}

double NNfunction-ss_sLdR::synapse0x1c14770() {
   return (neuron0x1bfbe50()*-0.177311);
}

double NNfunction-ss_sLdR::synapse0x1c147b0() {
   return (neuron0x1bfc190()*0.241803);
}

double NNfunction-ss_sLdR::synapse0x1c147f0() {
   return (neuron0x1bfc4d0()*0.13548);
}

double NNfunction-ss_sLdR::synapse0x1c14830() {
   return (neuron0x1bfc810()*0.86339);
}

double NNfunction-ss_sLdR::synapse0x1c14870() {
   return (neuron0x1bfcb50()*1.19914);
}

double NNfunction-ss_sLdR::synapse0x1c148b0() {
   return (neuron0x1bfce90()*0.817091);
}

double NNfunction-ss_sLdR::synapse0x1c148f0() {
   return (neuron0x1bfd1d0()*-0.0157172);
}

double NNfunction-ss_sLdR::synapse0x1c14930() {
   return (neuron0x1bfd510()*0.425082);
}

double NNfunction-ss_sLdR::synapse0x1c14970() {
   return (neuron0x1bfd850()*-1.89013);
}

double NNfunction-ss_sLdR::synapse0x1c149b0() {
   return (neuron0x1bfdb90()*-0.618557);
}

double NNfunction-ss_sLdR::synapse0x1c149f0() {
   return (neuron0x1bfded0()*-0.211944);
}

double NNfunction-ss_sLdR::synapse0x1c14a30() {
   return (neuron0x1bfe210()*0.169126);
}

double NNfunction-ss_sLdR::synapse0x1c144c0() {
   return (neuron0x1bfe550()*0.27288);
}

double NNfunction-ss_sLdR::synapse0x1c14500() {
   return (neuron0x1bfeab0()*-0.047769);
}

double NNfunction-ss_sLdR::synapse0x1c14b80() {
   return (neuron0x1bfecd0()*0.556187);
}

double NNfunction-ss_sLdR::synapse0x1c14bc0() {
   return (neuron0x1bff010()*0.440047);
}

double NNfunction-ss_sLdR::synapse0x1c14c00() {
   return (neuron0x1bff350()*0.540654);
}

double NNfunction-ss_sLdR::synapse0x1c14c40() {
   return (neuron0x1bff690()*0.0663196);
}

double NNfunction-ss_sLdR::synapse0x1c14c80() {
   return (neuron0x1bff9d0()*-0.384151);
}

double NNfunction-ss_sLdR::synapse0x1c14cc0() {
   return (neuron0x1bffd10()*0.0891859);
}

double NNfunction-ss_sLdR::synapse0x1c15040() {
   return (neuron0x1bfb1e0()*0.453908);
}

double NNfunction-ss_sLdR::synapse0x1c15080() {
   return (neuron0x1bfb490()*0.332341);
}

double NNfunction-ss_sLdR::synapse0x1c150c0() {
   return (neuron0x1bfb7d0()*1.04561);
}

double NNfunction-ss_sLdR::synapse0x1c15100() {
   return (neuron0x1bfbb10()*0.447861);
}

double NNfunction-ss_sLdR::synapse0x1c15140() {
   return (neuron0x1bfbe50()*0.432539);
}

double NNfunction-ss_sLdR::synapse0x1c15180() {
   return (neuron0x1bfc190()*-0.0466722);
}

double NNfunction-ss_sLdR::synapse0x1c151c0() {
   return (neuron0x1bfc4d0()*-0.22027);
}

double NNfunction-ss_sLdR::synapse0x1c15200() {
   return (neuron0x1bfc810()*0.442256);
}

double NNfunction-ss_sLdR::synapse0x1c15240() {
   return (neuron0x1bfcb50()*-0.619762);
}

double NNfunction-ss_sLdR::synapse0x1c15280() {
   return (neuron0x1bfce90()*-0.249714);
}

double NNfunction-ss_sLdR::synapse0x1c152c0() {
   return (neuron0x1bfd1d0()*0.330333);
}

double NNfunction-ss_sLdR::synapse0x1c15300() {
   return (neuron0x1bfd510()*0.0714696);
}

double NNfunction-ss_sLdR::synapse0x1c15340() {
   return (neuron0x1bfd850()*0.46027);
}

double NNfunction-ss_sLdR::synapse0x1c15380() {
   return (neuron0x1bfdb90()*0.125753);
}

double NNfunction-ss_sLdR::synapse0x1c153c0() {
   return (neuron0x1bfded0()*-0.465559);
}

double NNfunction-ss_sLdR::synapse0x1c15400() {
   return (neuron0x1bfe210()*0.888355);
}

double NNfunction-ss_sLdR::synapse0x1c14e90() {
   return (neuron0x1bfe550()*0.525441);
}

double NNfunction-ss_sLdR::synapse0x1c14ed0() {
   return (neuron0x1bfeab0()*-1.00564);
}

double NNfunction-ss_sLdR::synapse0x1c15550() {
   return (neuron0x1bfecd0()*-0.708622);
}

double NNfunction-ss_sLdR::synapse0x1c15590() {
   return (neuron0x1bff010()*-0.465106);
}

double NNfunction-ss_sLdR::synapse0x1c155d0() {
   return (neuron0x1bff350()*0.267758);
}

double NNfunction-ss_sLdR::synapse0x1c15610() {
   return (neuron0x1bff690()*0.504778);
}

double NNfunction-ss_sLdR::synapse0x1c15650() {
   return (neuron0x1bff9d0()*-0.323585);
}

double NNfunction-ss_sLdR::synapse0x1c15690() {
   return (neuron0x1bffd10()*0.42693);
}

double NNfunction-ss_sLdR::synapse0x1c15a10() {
   return (neuron0x1bfb1e0()*-0.284948);
}

double NNfunction-ss_sLdR::synapse0x1c09fe0() {
   return (neuron0x1bfb490()*-0.0672849);
}

double NNfunction-ss_sLdR::synapse0x1c0a020() {
   return (neuron0x1bfb7d0()*-0.84712);
}

double NNfunction-ss_sLdR::synapse0x1c0a060() {
   return (neuron0x1bfbb10()*2.70637);
}

double NNfunction-ss_sLdR::synapse0x1c0a2b0() {
   return (neuron0x1bfbe50()*-0.219942);
}

double NNfunction-ss_sLdR::synapse0x1c0a2f0() {
   return (neuron0x1bfc190()*-0.202433);
}

double NNfunction-ss_sLdR::synapse0x1c0a330() {
   return (neuron0x1bfc4d0()*-0.294823);
}

double NNfunction-ss_sLdR::synapse0x1c0a580() {
   return (neuron0x1bfc810()*-0.953741);
}

double NNfunction-ss_sLdR::synapse0x1c0a5c0() {
   return (neuron0x1bfcb50()*-0.427738);
}

double NNfunction-ss_sLdR::synapse0x1c0a810() {
   return (neuron0x1bfce90()*-0.467014);
}

double NNfunction-ss_sLdR::synapse0x1c0a850() {
   return (neuron0x1bfd1d0()*-0.194208);
}

double NNfunction-ss_sLdR::synapse0x1c0a890() {
   return (neuron0x1bfd510()*-0.466392);
}

double NNfunction-ss_sLdR::synapse0x1c0aae0() {
   return (neuron0x1bfd850()*0.928047);
}

double NNfunction-ss_sLdR::synapse0x1c0ab20() {
   return (neuron0x1bfdb90()*0.7195);
}

double NNfunction-ss_sLdR::synapse0x1c0ad70() {
   return (neuron0x1bfded0()*0.596319);
}

double NNfunction-ss_sLdR::synapse0x1c0adb0() {
   return (neuron0x1bfe210()*0.0950199);
}

double NNfunction-ss_sLdR::synapse0x1c15860() {
   return (neuron0x1bfe550()*-0.0186325);
}

double NNfunction-ss_sLdR::synapse0x1c158a0() {
   return (neuron0x1bfeab0()*-0.459487);
}

double NNfunction-ss_sLdR::synapse0x1c0af00() {
   return (neuron0x1bfecd0()*0.279826);
}

double NNfunction-ss_sLdR::synapse0x1c0b410() {
   return (neuron0x1bff010()*-0.369248);
}

double NNfunction-ss_sLdR::synapse0x1c0b450() {
   return (neuron0x1bff350()*-0.648419);
}

double NNfunction-ss_sLdR::synapse0x1c0b490() {
   return (neuron0x1bff690()*0.346221);
}

double NNfunction-ss_sLdR::synapse0x1c0b6e0() {
   return (neuron0x1bff9d0()*0.328524);
}

double NNfunction-ss_sLdR::synapse0x1c0b720() {
   return (neuron0x1bffd10()*0.122077);
}

double NNfunction-ss_sLdR::synapse0x1c0afd0() {
   return (neuron0x1bfb1e0()*-0.00220553);
}

double NNfunction-ss_sLdR::synapse0x1c0b010() {
   return (neuron0x1bfb490()*0.126256);
}

double NNfunction-ss_sLdR::synapse0x1c0b050() {
   return (neuron0x1bfb7d0()*-0.793577);
}

double NNfunction-ss_sLdR::synapse0x1c0b090() {
   return (neuron0x1bfbb10()*-0.501462);
}

double NNfunction-ss_sLdR::synapse0x1c0ba10() {
   return (neuron0x1bfbe50()*-0.182719);
}

double NNfunction-ss_sLdR::synapse0x1c17d60() {
   return (neuron0x1bfc190()*0.729054);
}

double NNfunction-ss_sLdR::synapse0x1c17da0() {
   return (neuron0x1bfc4d0()*-0.0684788);
}

double NNfunction-ss_sLdR::synapse0x1c17de0() {
   return (neuron0x1bfc810()*-0.259066);
}

double NNfunction-ss_sLdR::synapse0x1c17e20() {
   return (neuron0x1bfcb50()*-0.23938);
}

double NNfunction-ss_sLdR::synapse0x1c17e60() {
   return (neuron0x1bfce90()*-0.265877);
}

double NNfunction-ss_sLdR::synapse0x1c17ea0() {
   return (neuron0x1bfd1d0()*-0.0785336);
}

double NNfunction-ss_sLdR::synapse0x1c17ee0() {
   return (neuron0x1bfd510()*0.261852);
}

double NNfunction-ss_sLdR::synapse0x1c17f20() {
   return (neuron0x1bfd850()*-0.82719);
}

double NNfunction-ss_sLdR::synapse0x1c17f60() {
   return (neuron0x1bfdb90()*-0.368105);
}

double NNfunction-ss_sLdR::synapse0x1c17fa0() {
   return (neuron0x1bfded0()*-0.356386);
}

double NNfunction-ss_sLdR::synapse0x1c17fe0() {
   return (neuron0x1bfe210()*0.589741);
}

double NNfunction-ss_sLdR::synapse0x1c0b8f0() {
   return (neuron0x1bfe550()*0.518967);
}

double NNfunction-ss_sLdR::synapse0x1c0b930() {
   return (neuron0x1bfeab0()*0.868365);
}

double NNfunction-ss_sLdR::synapse0x1c18130() {
   return (neuron0x1bfecd0()*0.68438);
}

double NNfunction-ss_sLdR::synapse0x1c18170() {
   return (neuron0x1bff010()*0.402673);
}

double NNfunction-ss_sLdR::synapse0x1c181b0() {
   return (neuron0x1bff350()*0.123108);
}

double NNfunction-ss_sLdR::synapse0x1c181f0() {
   return (neuron0x1bff690()*-0.320625);
}

double NNfunction-ss_sLdR::synapse0x1c18230() {
   return (neuron0x1bff9d0()*-0.448574);
}

double NNfunction-ss_sLdR::synapse0x1c18270() {
   return (neuron0x1bffd10()*0.401559);
}

double NNfunction-ss_sLdR::synapse0x1c185f0() {
   return (neuron0x1bfb1e0()*0.202833);
}

double NNfunction-ss_sLdR::synapse0x1c18630() {
   return (neuron0x1bfb490()*-0.182245);
}

double NNfunction-ss_sLdR::synapse0x1c18670() {
   return (neuron0x1bfb7d0()*-0.0903375);
}

double NNfunction-ss_sLdR::synapse0x1c186b0() {
   return (neuron0x1bfbb10()*-0.830963);
}

double NNfunction-ss_sLdR::synapse0x1c186f0() {
   return (neuron0x1bfbe50()*-0.285433);
}

double NNfunction-ss_sLdR::synapse0x1c18730() {
   return (neuron0x1bfc190()*-0.0700444);
}

double NNfunction-ss_sLdR::synapse0x1c18770() {
   return (neuron0x1bfc4d0()*-0.0986594);
}

double NNfunction-ss_sLdR::synapse0x1c187b0() {
   return (neuron0x1bfc810()*-0.0785663);
}

double NNfunction-ss_sLdR::synapse0x1c187f0() {
   return (neuron0x1bfcb50()*-0.196799);
}

double NNfunction-ss_sLdR::synapse0x1c18830() {
   return (neuron0x1bfce90()*-0.110643);
}

double NNfunction-ss_sLdR::synapse0x1c18870() {
   return (neuron0x1bfd1d0()*-0.272663);
}

double NNfunction-ss_sLdR::synapse0x1c188b0() {
   return (neuron0x1bfd510()*0.247715);
}

double NNfunction-ss_sLdR::synapse0x1c188f0() {
   return (neuron0x1bfd850()*0.681175);
}

double NNfunction-ss_sLdR::synapse0x1c18930() {
   return (neuron0x1bfdb90()*0.365096);
}

double NNfunction-ss_sLdR::synapse0x1c18970() {
   return (neuron0x1bfded0()*0.529944);
}

double NNfunction-ss_sLdR::synapse0x1c189b0() {
   return (neuron0x1bfe210()*-0.258635);
}

double NNfunction-ss_sLdR::synapse0x1c18440() {
   return (neuron0x1bfe550()*-0.243643);
}

double NNfunction-ss_sLdR::synapse0x1c18480() {
   return (neuron0x1bfeab0()*-0.331411);
}

double NNfunction-ss_sLdR::synapse0x1c18b00() {
   return (neuron0x1bfecd0()*-0.076815);
}

double NNfunction-ss_sLdR::synapse0x1c18b40() {
   return (neuron0x1bff010()*-0.137705);
}

double NNfunction-ss_sLdR::synapse0x1c18b80() {
   return (neuron0x1bff350()*-0.0217685);
}

double NNfunction-ss_sLdR::synapse0x1c18bc0() {
   return (neuron0x1bff690()*0.135827);
}

double NNfunction-ss_sLdR::synapse0x1c18c00() {
   return (neuron0x1bff9d0()*-0.0651735);
}

double NNfunction-ss_sLdR::synapse0x1c18c40() {
   return (neuron0x1bffd10()*0.35511);
}

double NNfunction-ss_sLdR::synapse0x1c18fc0() {
   return (neuron0x1bfb1e0()*0.39742);
}

double NNfunction-ss_sLdR::synapse0x1c19000() {
   return (neuron0x1bfb490()*-0.14656);
}

double NNfunction-ss_sLdR::synapse0x1c19040() {
   return (neuron0x1bfb7d0()*0.32672);
}

double NNfunction-ss_sLdR::synapse0x1c19080() {
   return (neuron0x1bfbb10()*0.780477);
}

double NNfunction-ss_sLdR::synapse0x1c190c0() {
   return (neuron0x1bfbe50()*0.268172);
}

double NNfunction-ss_sLdR::synapse0x1c19100() {
   return (neuron0x1bfc190()*0.0180388);
}

double NNfunction-ss_sLdR::synapse0x1c19140() {
   return (neuron0x1bfc4d0()*0.433316);
}

double NNfunction-ss_sLdR::synapse0x1c19180() {
   return (neuron0x1bfc810()*0.351754);
}

double NNfunction-ss_sLdR::synapse0x1c191c0() {
   return (neuron0x1bfcb50()*-0.561765);
}

double NNfunction-ss_sLdR::synapse0x1c19200() {
   return (neuron0x1bfce90()*0.556037);
}

double NNfunction-ss_sLdR::synapse0x1c19240() {
   return (neuron0x1bfd1d0()*-0.25464);
}

double NNfunction-ss_sLdR::synapse0x1c19280() {
   return (neuron0x1bfd510()*0.547531);
}

double NNfunction-ss_sLdR::synapse0x1c192c0() {
   return (neuron0x1bfd850()*1.28845);
}

double NNfunction-ss_sLdR::synapse0x1c19300() {
   return (neuron0x1bfdb90()*0.106845);
}

double NNfunction-ss_sLdR::synapse0x1c19340() {
   return (neuron0x1bfded0()*0.160283);
}

double NNfunction-ss_sLdR::synapse0x1c19380() {
   return (neuron0x1bfe210()*0.270598);
}

double NNfunction-ss_sLdR::synapse0x1c18e10() {
   return (neuron0x1bfe550()*-0.324119);
}

double NNfunction-ss_sLdR::synapse0x1c18e50() {
   return (neuron0x1bfeab0()*-1.01496);
}

double NNfunction-ss_sLdR::synapse0x1c194d0() {
   return (neuron0x1bfecd0()*0.578904);
}

double NNfunction-ss_sLdR::synapse0x1c19510() {
   return (neuron0x1bff010()*-0.168013);
}

double NNfunction-ss_sLdR::synapse0x1c19550() {
   return (neuron0x1bff350()*-0.392499);
}

double NNfunction-ss_sLdR::synapse0x1c19590() {
   return (neuron0x1bff690()*-0.131043);
}

double NNfunction-ss_sLdR::synapse0x1c195d0() {
   return (neuron0x1bff9d0()*-0.243408);
}

double NNfunction-ss_sLdR::synapse0x1c19610() {
   return (neuron0x1bffd10()*-0.132166);
}

double NNfunction-ss_sLdR::synapse0x1c19990() {
   return (neuron0x1bfb1e0()*-0.0655186);
}

double NNfunction-ss_sLdR::synapse0x1c199d0() {
   return (neuron0x1bfb490()*-0.000819827);
}

double NNfunction-ss_sLdR::synapse0x1c19a10() {
   return (neuron0x1bfb7d0()*-0.0805549);
}

double NNfunction-ss_sLdR::synapse0x1c19a50() {
   return (neuron0x1bfbb10()*0.537979);
}

double NNfunction-ss_sLdR::synapse0x1c19a90() {
   return (neuron0x1bfbe50()*0.756436);
}

double NNfunction-ss_sLdR::synapse0x1c19ad0() {
   return (neuron0x1bfc190()*0.155904);
}

double NNfunction-ss_sLdR::synapse0x1c19b10() {
   return (neuron0x1bfc4d0()*0.0988551);
}

double NNfunction-ss_sLdR::synapse0x1c19b50() {
   return (neuron0x1bfc810()*0.0571609);
}

double NNfunction-ss_sLdR::synapse0x1c19b90() {
   return (neuron0x1bfcb50()*-0.106514);
}

double NNfunction-ss_sLdR::synapse0x1c19bd0() {
   return (neuron0x1bfce90()*0.313355);
}

double NNfunction-ss_sLdR::synapse0x1c19c10() {
   return (neuron0x1bfd1d0()*-0.107673);
}

double NNfunction-ss_sLdR::synapse0x1c19c50() {
   return (neuron0x1bfd510()*-0.222605);
}

double NNfunction-ss_sLdR::synapse0x1c19c90() {
   return (neuron0x1bfd850()*-0.267637);
}

double NNfunction-ss_sLdR::synapse0x1c19cd0() {
   return (neuron0x1bfdb90()*-0.234913);
}

double NNfunction-ss_sLdR::synapse0x1c19d10() {
   return (neuron0x1bfded0()*0.180251);
}

double NNfunction-ss_sLdR::synapse0x1c19d50() {
   return (neuron0x1bfe210()*0.0799855);
}

double NNfunction-ss_sLdR::synapse0x1c197e0() {
   return (neuron0x1bfe550()*0.36509);
}

double NNfunction-ss_sLdR::synapse0x1c19820() {
   return (neuron0x1bfeab0()*0.247619);
}

double NNfunction-ss_sLdR::synapse0x1c19ea0() {
   return (neuron0x1bfecd0()*-0.0434864);
}

double NNfunction-ss_sLdR::synapse0x1c19ee0() {
   return (neuron0x1bff010()*0.324182);
}

double NNfunction-ss_sLdR::synapse0x1c19f20() {
   return (neuron0x1bff350()*-0.326561);
}

double NNfunction-ss_sLdR::synapse0x1c19f60() {
   return (neuron0x1bff690()*-0.196978);
}

double NNfunction-ss_sLdR::synapse0x1c19fa0() {
   return (neuron0x1bff9d0()*0.403002);
}

double NNfunction-ss_sLdR::synapse0x1c19fe0() {
   return (neuron0x1bffd10()*-0.169448);
}

double NNfunction-ss_sLdR::synapse0x1c1a360() {
   return (neuron0x1bfb1e0()*0.0381886);
}

double NNfunction-ss_sLdR::synapse0x1c1a3a0() {
   return (neuron0x1bfb490()*0.00544146);
}

double NNfunction-ss_sLdR::synapse0x1c1a3e0() {
   return (neuron0x1bfb7d0()*0.0116737);
}

double NNfunction-ss_sLdR::synapse0x1c1a420() {
   return (neuron0x1bfbb10()*-0.139563);
}

double NNfunction-ss_sLdR::synapse0x1c1a460() {
   return (neuron0x1bfbe50()*0.0133393);
}

double NNfunction-ss_sLdR::synapse0x1c1a4a0() {
   return (neuron0x1bfc190()*-0.0124388);
}

double NNfunction-ss_sLdR::synapse0x1c1a4e0() {
   return (neuron0x1bfc4d0()*-0.0244342);
}

double NNfunction-ss_sLdR::synapse0x1c1a520() {
   return (neuron0x1bfc810()*0.00113005);
}

double NNfunction-ss_sLdR::synapse0x1c1a560() {
   return (neuron0x1bfcb50()*0.0336092);
}

double NNfunction-ss_sLdR::synapse0x1c1a5a0() {
   return (neuron0x1bfce90()*0.0432019);
}

double NNfunction-ss_sLdR::synapse0x1c1a5e0() {
   return (neuron0x1bfd1d0()*0.0693243);
}

double NNfunction-ss_sLdR::synapse0x1c1a620() {
   return (neuron0x1bfd510()*0.00980802);
}

double NNfunction-ss_sLdR::synapse0x1c1a660() {
   return (neuron0x1bfd850()*-0.833985);
}

double NNfunction-ss_sLdR::synapse0x1c1a6a0() {
   return (neuron0x1bfdb90()*0.00231917);
}

double NNfunction-ss_sLdR::synapse0x1c1a6e0() {
   return (neuron0x1bfded0()*-0.0120465);
}

double NNfunction-ss_sLdR::synapse0x1c1a720() {
   return (neuron0x1bfe210()*0.0123078);
}

double NNfunction-ss_sLdR::synapse0x1c1a1b0() {
   return (neuron0x1bfe550()*0.0128366);
}

double NNfunction-ss_sLdR::synapse0x1c1a1f0() {
   return (neuron0x1bfeab0()*-0.796648);
}

double NNfunction-ss_sLdR::synapse0x1c1a870() {
   return (neuron0x1bfecd0()*0.0442064);
}

double NNfunction-ss_sLdR::synapse0x1c1a8b0() {
   return (neuron0x1bff010()*-0.0303489);
}

double NNfunction-ss_sLdR::synapse0x1c1a8f0() {
   return (neuron0x1bff350()*0.0204988);
}

double NNfunction-ss_sLdR::synapse0x1c1a930() {
   return (neuron0x1bff690()*0.0125245);
}

double NNfunction-ss_sLdR::synapse0x1c1a970() {
   return (neuron0x1bff9d0()*0.0377967);
}

double NNfunction-ss_sLdR::synapse0x1c1a9b0() {
   return (neuron0x1bffd10()*0.0299933);
}

double NNfunction-ss_sLdR::synapse0x1c1ad30() {
   return (neuron0x1bfb1e0()*-0.476222);
}

double NNfunction-ss_sLdR::synapse0x1c1ad70() {
   return (neuron0x1bfb490()*0.00719634);
}

double NNfunction-ss_sLdR::synapse0x1c1adb0() {
   return (neuron0x1bfb7d0()*-0.386127);
}

double NNfunction-ss_sLdR::synapse0x1c1adf0() {
   return (neuron0x1bfbb10()*-0.144746);
}

double NNfunction-ss_sLdR::synapse0x1c1ae30() {
   return (neuron0x1bfbe50()*-0.0193403);
}

double NNfunction-ss_sLdR::synapse0x1c1ae70() {
   return (neuron0x1bfc190()*0.0663369);
}

double NNfunction-ss_sLdR::synapse0x1c1aeb0() {
   return (neuron0x1bfc4d0()*0.0501172);
}

double NNfunction-ss_sLdR::synapse0x1c1aef0() {
   return (neuron0x1bfc810()*0.148683);
}

double NNfunction-ss_sLdR::synapse0x1c1af30() {
   return (neuron0x1bfcb50()*0.200157);
}

double NNfunction-ss_sLdR::synapse0x1c1af70() {
   return (neuron0x1bfce90()*-0.00618169);
}

double NNfunction-ss_sLdR::synapse0x1c1afb0() {
   return (neuron0x1bfd1d0()*0.127334);
}

double NNfunction-ss_sLdR::synapse0x1c1aff0() {
   return (neuron0x1bfd510()*-0.0488857);
}

double NNfunction-ss_sLdR::synapse0x1c1b030() {
   return (neuron0x1bfd850()*0.307798);
}

double NNfunction-ss_sLdR::synapse0x1c1b070() {
   return (neuron0x1bfdb90()*-0.117878);
}

double NNfunction-ss_sLdR::synapse0x1c1b0b0() {
   return (neuron0x1bfded0()*0.043576);
}

double NNfunction-ss_sLdR::synapse0x1c1b0f0() {
   return (neuron0x1bfe210()*-0.205996);
}

double NNfunction-ss_sLdR::synapse0x1c1ab80() {
   return (neuron0x1bfe550()*0.366314);
}

double NNfunction-ss_sLdR::synapse0x1c1abc0() {
   return (neuron0x1bfeab0()*0.141671);
}

double NNfunction-ss_sLdR::synapse0x1c1b240() {
   return (neuron0x1bfecd0()*-0.0683565);
}

double NNfunction-ss_sLdR::synapse0x1c1b280() {
   return (neuron0x1bff010()*0.195333);
}

double NNfunction-ss_sLdR::synapse0x1c1b2c0() {
   return (neuron0x1bff350()*0.136686);
}

double NNfunction-ss_sLdR::synapse0x1c1b300() {
   return (neuron0x1bff690()*-0.00725561);
}

double NNfunction-ss_sLdR::synapse0x1c1b340() {
   return (neuron0x1bff9d0()*-0.0475093);
}

double NNfunction-ss_sLdR::synapse0x1c1b380() {
   return (neuron0x1bffd10()*-0.0517595);
}

double NNfunction-ss_sLdR::synapse0x1c1b700() {
   return (neuron0x1bfb1e0()*0.374554);
}

double NNfunction-ss_sLdR::synapse0x1c1b740() {
   return (neuron0x1bfb490()*-0.0196483);
}

double NNfunction-ss_sLdR::synapse0x1c1b780() {
   return (neuron0x1bfb7d0()*-0.102604);
}

double NNfunction-ss_sLdR::synapse0x1c1b7c0() {
   return (neuron0x1bfbb10()*0.890172);
}

double NNfunction-ss_sLdR::synapse0x1c1b800() {
   return (neuron0x1bfbe50()*-0.0686794);
}

double NNfunction-ss_sLdR::synapse0x1c1b840() {
   return (neuron0x1bfc190()*0.0198733);
}

double NNfunction-ss_sLdR::synapse0x1c1b880() {
   return (neuron0x1bfc4d0()*-0.0317884);
}

double NNfunction-ss_sLdR::synapse0x1c1b8c0() {
   return (neuron0x1bfc810()*0.0164434);
}

double NNfunction-ss_sLdR::synapse0x1c1b900() {
   return (neuron0x1bfcb50()*-0.0425707);
}

double NNfunction-ss_sLdR::synapse0x1c1b940() {
   return (neuron0x1bfce90()*0.0224018);
}

double NNfunction-ss_sLdR::synapse0x1c1b980() {
   return (neuron0x1bfd1d0()*0.0876178);
}

double NNfunction-ss_sLdR::synapse0x1c1b9c0() {
   return (neuron0x1bfd510()*-0.0471252);
}

double NNfunction-ss_sLdR::synapse0x1c1ba00() {
   return (neuron0x1bfd850()*-1.22497);
}

double NNfunction-ss_sLdR::synapse0x1c1ba40() {
   return (neuron0x1bfdb90()*-0.276362);
}

double NNfunction-ss_sLdR::synapse0x1c1ba80() {
   return (neuron0x1bfded0()*0.64209);
}

double NNfunction-ss_sLdR::synapse0x1c1bac0() {
   return (neuron0x1bfe210()*0.0716782);
}

double NNfunction-ss_sLdR::synapse0x1c1b550() {
   return (neuron0x1bfe550()*-0.353462);
}

double NNfunction-ss_sLdR::synapse0x1c1b590() {
   return (neuron0x1bfeab0()*0.966755);
}

double NNfunction-ss_sLdR::synapse0x1c1bc10() {
   return (neuron0x1bfecd0()*0.0850687);
}

double NNfunction-ss_sLdR::synapse0x1c1bc50() {
   return (neuron0x1bff010()*0.185223);
}

double NNfunction-ss_sLdR::synapse0x1c1bc90() {
   return (neuron0x1bff350()*0.300097);
}

double NNfunction-ss_sLdR::synapse0x1c1bcd0() {
   return (neuron0x1bff690()*0.17368);
}

double NNfunction-ss_sLdR::synapse0x1c1bd10() {
   return (neuron0x1bff9d0()*0.133621);
}

double NNfunction-ss_sLdR::synapse0x1c1bd50() {
   return (neuron0x1bffd10()*0.500238);
}

double NNfunction-ss_sLdR::synapse0x1c1c0d0() {
   return (neuron0x1bfb1e0()*0.183417);
}

double NNfunction-ss_sLdR::synapse0x1c1c110() {
   return (neuron0x1bfb490()*-0.0289352);
}

double NNfunction-ss_sLdR::synapse0x1c1c150() {
   return (neuron0x1bfb7d0()*-0.231644);
}

double NNfunction-ss_sLdR::synapse0x1c1c190() {
   return (neuron0x1bfbb10()*0.256457);
}

double NNfunction-ss_sLdR::synapse0x1c1c1d0() {
   return (neuron0x1bfbe50()*-0.110876);
}

double NNfunction-ss_sLdR::synapse0x1c1c210() {
   return (neuron0x1bfc190()*-0.278983);
}

double NNfunction-ss_sLdR::synapse0x1c1c250() {
   return (neuron0x1bfc4d0()*0.0584897);
}

double NNfunction-ss_sLdR::synapse0x1c1c290() {
   return (neuron0x1bfc810()*-0.317443);
}

double NNfunction-ss_sLdR::synapse0x1c1c2d0() {
   return (neuron0x1bfcb50()*-0.335776);
}

double NNfunction-ss_sLdR::synapse0x1c1c310() {
   return (neuron0x1bfce90()*-0.377311);
}

double NNfunction-ss_sLdR::synapse0x1c1c350() {
   return (neuron0x1bfd1d0()*-0.208297);
}

double NNfunction-ss_sLdR::synapse0x1c1c390() {
   return (neuron0x1bfd510()*0.041332);
}

double NNfunction-ss_sLdR::synapse0x1c1c3d0() {
   return (neuron0x1bfd850()*0.381288);
}

double NNfunction-ss_sLdR::synapse0x1c1c410() {
   return (neuron0x1bfdb90()*0.186775);
}

double NNfunction-ss_sLdR::synapse0x1c1c450() {
   return (neuron0x1bfded0()*0.194521);
}

double NNfunction-ss_sLdR::synapse0x1c1c490() {
   return (neuron0x1bfe210()*0.120975);
}

double NNfunction-ss_sLdR::synapse0x1c1bf20() {
   return (neuron0x1bfe550()*-0.102668);
}

double NNfunction-ss_sLdR::synapse0x1c1bf60() {
   return (neuron0x1bfeab0()*0.666744);
}

double NNfunction-ss_sLdR::synapse0x1c1c5e0() {
   return (neuron0x1bfecd0()*-0.127197);
}

double NNfunction-ss_sLdR::synapse0x1c1c620() {
   return (neuron0x1bff010()*-0.0249646);
}

double NNfunction-ss_sLdR::synapse0x1c1c660() {
   return (neuron0x1bff350()*-0.16012);
}

double NNfunction-ss_sLdR::synapse0x1c1c6a0() {
   return (neuron0x1bff690()*-0.0119263);
}

double NNfunction-ss_sLdR::synapse0x1c1c6e0() {
   return (neuron0x1bff9d0()*0.163291);
}

double NNfunction-ss_sLdR::synapse0x1c1c720() {
   return (neuron0x1bffd10()*0.211039);
}

double NNfunction-ss_sLdR::synapse0x1c051d0() {
   return (neuron0x1bfb1e0()*0.717678);
}

double NNfunction-ss_sLdR::synapse0x1c05210() {
   return (neuron0x1bfb490()*-0.117185);
}

double NNfunction-ss_sLdR::synapse0x1c05250() {
   return (neuron0x1bfb7d0()*0.183146);
}

double NNfunction-ss_sLdR::synapse0x1c05290() {
   return (neuron0x1bfbb10()*-0.0329002);
}

double NNfunction-ss_sLdR::synapse0x1c052d0() {
   return (neuron0x1bfbe50()*0.465227);
}

double NNfunction-ss_sLdR::synapse0x1c05310() {
   return (neuron0x1bfc190()*-0.165198);
}

double NNfunction-ss_sLdR::synapse0x1c05350() {
   return (neuron0x1bfc4d0()*-0.30853);
}

double NNfunction-ss_sLdR::synapse0x1c05390() {
   return (neuron0x1bfc810()*0.101326);
}

double NNfunction-ss_sLdR::synapse0x1c1ceb0() {
   return (neuron0x1bfcb50()*0.202166);
}

double NNfunction-ss_sLdR::synapse0x1c1cef0() {
   return (neuron0x1bfce90()*-0.193442);
}

double NNfunction-ss_sLdR::synapse0x1c1cf30() {
   return (neuron0x1bfd1d0()*-0.235807);
}

double NNfunction-ss_sLdR::synapse0x1c1cf70() {
   return (neuron0x1bfd510()*-0.189471);
}

double NNfunction-ss_sLdR::synapse0x1c1cfb0() {
   return (neuron0x1bfd850()*0.491472);
}

double NNfunction-ss_sLdR::synapse0x1c1cff0() {
   return (neuron0x1bfdb90()*0.335197);
}

double NNfunction-ss_sLdR::synapse0x1c1d030() {
   return (neuron0x1bfded0()*0.542365);
}

double NNfunction-ss_sLdR::synapse0x1c1d070() {
   return (neuron0x1bfe210()*0.070278);
}

double NNfunction-ss_sLdR::synapse0x1c1c8f0() {
   return (neuron0x1bfe550()*0.489815);
}

double NNfunction-ss_sLdR::synapse0x1c1c930() {
   return (neuron0x1bfeab0()*-0.0298347);
}

double NNfunction-ss_sLdR::synapse0x1c1d1c0() {
   return (neuron0x1bfecd0()*-0.135015);
}

double NNfunction-ss_sLdR::synapse0x1c1d200() {
   return (neuron0x1bff010()*0.0460669);
}

double NNfunction-ss_sLdR::synapse0x1c1d240() {
   return (neuron0x1bff350()*-0.0492152);
}

double NNfunction-ss_sLdR::synapse0x1c1d280() {
   return (neuron0x1bff690()*-0.328166);
}

double NNfunction-ss_sLdR::synapse0x1c1d2c0() {
   return (neuron0x1bff9d0()*-0.399306);
}

double NNfunction-ss_sLdR::synapse0x1c1d300() {
   return (neuron0x1bffd10()*0.272706);
}

double NNfunction-ss_sLdR::synapse0x1c1d680() {
   return (neuron0x1bfb1e0()*0.00328465);
}

double NNfunction-ss_sLdR::synapse0x1c1d6c0() {
   return (neuron0x1bfb490()*-0.00241009);
}

double NNfunction-ss_sLdR::synapse0x1c1d700() {
   return (neuron0x1bfb7d0()*-0.00621869);
}

double NNfunction-ss_sLdR::synapse0x1c1d740() {
   return (neuron0x1bfbb10()*1.34463);
}

double NNfunction-ss_sLdR::synapse0x1c1d780() {
   return (neuron0x1bfbe50()*0.0196841);
}

double NNfunction-ss_sLdR::synapse0x1c1d7c0() {
   return (neuron0x1bfc190()*0.00735973);
}

double NNfunction-ss_sLdR::synapse0x1c1d800() {
   return (neuron0x1bfc4d0()*-0.0182596);
}

double NNfunction-ss_sLdR::synapse0x1c1d840() {
   return (neuron0x1bfc810()*0.0059782);
}

double NNfunction-ss_sLdR::synapse0x1c1d880() {
   return (neuron0x1bfcb50()*0.0268334);
}

double NNfunction-ss_sLdR::synapse0x1c1d8c0() {
   return (neuron0x1bfce90()*-0.00632934);
}

double NNfunction-ss_sLdR::synapse0x1c1d900() {
   return (neuron0x1bfd1d0()*0.000571764);
}

double NNfunction-ss_sLdR::synapse0x1c1d940() {
   return (neuron0x1bfd510()*-0.021036);
}

double NNfunction-ss_sLdR::synapse0x1c1d980() {
   return (neuron0x1bfd850()*-0.0389248);
}

double NNfunction-ss_sLdR::synapse0x1c1d9c0() {
   return (neuron0x1bfdb90()*-0.0160031);
}

double NNfunction-ss_sLdR::synapse0x1c1da00() {
   return (neuron0x1bfded0()*-0.00516729);
}

double NNfunction-ss_sLdR::synapse0x1c1da40() {
   return (neuron0x1bfe210()*-0.00333539);
}

double NNfunction-ss_sLdR::synapse0x1c1d4d0() {
   return (neuron0x1bfe550()*-0.00297411);
}

double NNfunction-ss_sLdR::synapse0x1c1d510() {
   return (neuron0x1bfeab0()*-0.0962451);
}

double NNfunction-ss_sLdR::synapse0x1c1db90() {
   return (neuron0x1bfecd0()*-0.000918106);
}

double NNfunction-ss_sLdR::synapse0x1c1dbd0() {
   return (neuron0x1bff010()*-0.0162415);
}

double NNfunction-ss_sLdR::synapse0x1c1dc10() {
   return (neuron0x1bff350()*0.0167217);
}

double NNfunction-ss_sLdR::synapse0x1c1dc50() {
   return (neuron0x1bff690()*-0.00979034);
}

double NNfunction-ss_sLdR::synapse0x1c1dc90() {
   return (neuron0x1bff9d0()*0.0195665);
}

double NNfunction-ss_sLdR::synapse0x1c1dcd0() {
   return (neuron0x1bffd10()*0.00554459);
}

double NNfunction-ss_sLdR::synapse0x1c1e050() {
   return (neuron0x1bfb1e0()*0.712155);
}

double NNfunction-ss_sLdR::synapse0x1c1e090() {
   return (neuron0x1bfb490()*-0.36895);
}

double NNfunction-ss_sLdR::synapse0x1c1e0d0() {
   return (neuron0x1bfb7d0()*0.355563);
}

double NNfunction-ss_sLdR::synapse0x1c1e110() {
   return (neuron0x1bfbb10()*2.03426);
}

double NNfunction-ss_sLdR::synapse0x1c1e150() {
   return (neuron0x1bfbe50()*0.317493);
}

double NNfunction-ss_sLdR::synapse0x1c1e190() {
   return (neuron0x1bfc190()*-0.435199);
}

double NNfunction-ss_sLdR::synapse0x1c1e1d0() {
   return (neuron0x1bfc4d0()*-0.139056);
}

double NNfunction-ss_sLdR::synapse0x1c1e210() {
   return (neuron0x1bfc810()*-0.430516);
}

double NNfunction-ss_sLdR::synapse0x1c1e250() {
   return (neuron0x1bfcb50()*-0.679777);
}

double NNfunction-ss_sLdR::synapse0x1c1e290() {
   return (neuron0x1bfce90()*-0.666927);
}

double NNfunction-ss_sLdR::synapse0x1c1e2d0() {
   return (neuron0x1bfd1d0()*-0.23048);
}

double NNfunction-ss_sLdR::synapse0x1c1e310() {
   return (neuron0x1bfd510()*-0.0050126);
}

double NNfunction-ss_sLdR::synapse0x1c1e350() {
   return (neuron0x1bfd850()*0.944871);
}

double NNfunction-ss_sLdR::synapse0x1c1e390() {
   return (neuron0x1bfdb90()*0.165801);
}

double NNfunction-ss_sLdR::synapse0x1c1e3d0() {
   return (neuron0x1bfded0()*0.28815);
}

double NNfunction-ss_sLdR::synapse0x1c1e410() {
   return (neuron0x1bfe210()*-0.169616);
}

double NNfunction-ss_sLdR::synapse0x1c1dea0() {
   return (neuron0x1bfe550()*-0.59526);
}

double NNfunction-ss_sLdR::synapse0x1c1dee0() {
   return (neuron0x1bfeab0()*0.423504);
}

double NNfunction-ss_sLdR::synapse0x1c0ea10() {
   return (neuron0x1bfecd0()*-0.282875);
}

double NNfunction-ss_sLdR::synapse0x1c0ea50() {
   return (neuron0x1bff010()*-0.447173);
}

double NNfunction-ss_sLdR::synapse0x1c0ea90() {
   return (neuron0x1bff350()*-0.75764);
}

double NNfunction-ss_sLdR::synapse0x1c0ead0() {
   return (neuron0x1bff690()*0.241017);
}

double NNfunction-ss_sLdR::synapse0x1c0eb10() {
   return (neuron0x1bff9d0()*0.246478);
}

double NNfunction-ss_sLdR::synapse0x1c0eb50() {
   return (neuron0x1bffd10()*0.390224);
}

double NNfunction-ss_sLdR::synapse0x1c0eed0() {
   return (neuron0x1bfb1e0()*-0.00478473);
}

double NNfunction-ss_sLdR::synapse0x1c0ef10() {
   return (neuron0x1bfb490()*0.0167731);
}

double NNfunction-ss_sLdR::synapse0x1c0ef50() {
   return (neuron0x1bfb7d0()*-0.385245);
}

double NNfunction-ss_sLdR::synapse0x1c0ef90() {
   return (neuron0x1bfbb10()*0.250727);
}

double NNfunction-ss_sLdR::synapse0x1c0efd0() {
   return (neuron0x1bfbe50()*-0.540405);
}

double NNfunction-ss_sLdR::synapse0x1c0f010() {
   return (neuron0x1bfc190()*0.230991);
}

double NNfunction-ss_sLdR::synapse0x1c0f050() {
   return (neuron0x1bfc4d0()*-0.477629);
}

double NNfunction-ss_sLdR::synapse0x1c0f090() {
   return (neuron0x1bfc810()*-0.0719898);
}

double NNfunction-ss_sLdR::synapse0x1c0f0d0() {
   return (neuron0x1bfcb50()*-0.0120269);
}

double NNfunction-ss_sLdR::synapse0x1c0f110() {
   return (neuron0x1bfce90()*-0.280435);
}

double NNfunction-ss_sLdR::synapse0x1c0f150() {
   return (neuron0x1bfd1d0()*-0.14466);
}

double NNfunction-ss_sLdR::synapse0x1c0f190() {
   return (neuron0x1bfd510()*-0.197646);
}

double NNfunction-ss_sLdR::synapse0x1c0f1d0() {
   return (neuron0x1bfd850()*1.05299);
}

double NNfunction-ss_sLdR::synapse0x1c0f210() {
   return (neuron0x1bfdb90()*0.0916054);
}

double NNfunction-ss_sLdR::synapse0x1c0f250() {
   return (neuron0x1bfded0()*-0.427146);
}

double NNfunction-ss_sLdR::synapse0x1c0f290() {
   return (neuron0x1bfe210()*0.208592);
}

double NNfunction-ss_sLdR::synapse0x1c0ed20() {
   return (neuron0x1bfe550()*-0.10033);
}

double NNfunction-ss_sLdR::synapse0x1c0ed60() {
   return (neuron0x1bfeab0()*-0.00814213);
}

double NNfunction-ss_sLdR::synapse0x1c0f3e0() {
   return (neuron0x1bfecd0()*0.351963);
}

double NNfunction-ss_sLdR::synapse0x1c0f420() {
   return (neuron0x1bff010()*-0.0816486);
}

double NNfunction-ss_sLdR::synapse0x1c0f460() {
   return (neuron0x1bff350()*0.0896103);
}

double NNfunction-ss_sLdR::synapse0x1c0f4a0() {
   return (neuron0x1bff690()*-0.0331691);
}

double NNfunction-ss_sLdR::synapse0x1c0f4e0() {
   return (neuron0x1bff9d0()*-0.0818976);
}

double NNfunction-ss_sLdR::synapse0x1c0f520() {
   return (neuron0x1bffd10()*0.122528);
}

double NNfunction-ss_sLdR::synapse0x1c0f8a0() {
   return (neuron0x1bfb1e0()*-0.0162933);
}

double NNfunction-ss_sLdR::synapse0x1c0f8e0() {
   return (neuron0x1bfb490()*0.00558401);
}

double NNfunction-ss_sLdR::synapse0x1c0f920() {
   return (neuron0x1bfb7d0()*-0.0399669);
}

double NNfunction-ss_sLdR::synapse0x1c0f960() {
   return (neuron0x1bfbb10()*-0.0211548);
}

double NNfunction-ss_sLdR::synapse0x1c0f9a0() {
   return (neuron0x1bfbe50()*-0.0338909);
}

double NNfunction-ss_sLdR::synapse0x1c0f9e0() {
   return (neuron0x1bfc190()*0.0172711);
}

double NNfunction-ss_sLdR::synapse0x1c0fa20() {
   return (neuron0x1bfc4d0()*-0.0554379);
}

double NNfunction-ss_sLdR::synapse0x1c0fa60() {
   return (neuron0x1bfc810()*-0.0133925);
}

double NNfunction-ss_sLdR::synapse0x1c0faa0() {
   return (neuron0x1bfcb50()*0.0253271);
}

double NNfunction-ss_sLdR::synapse0x1c0fae0() {
   return (neuron0x1bfce90()*-0.061287);
}

double NNfunction-ss_sLdR::synapse0x1c0fb20() {
   return (neuron0x1bfd1d0()*0.0232246);
}

double NNfunction-ss_sLdR::synapse0x1c0fb60() {
   return (neuron0x1bfd510()*0.0215132);
}

double NNfunction-ss_sLdR::synapse0x1c0fba0() {
   return (neuron0x1bfd850()*1.76293);
}

double NNfunction-ss_sLdR::synapse0x1c0fbe0() {
   return (neuron0x1bfdb90()*0.0640208);
}

double NNfunction-ss_sLdR::synapse0x1c0fc20() {
   return (neuron0x1bfded0()*-0.0655555);
}

double NNfunction-ss_sLdR::synapse0x1c0fc60() {
   return (neuron0x1bfe210()*-0.0010668);
}

double NNfunction-ss_sLdR::synapse0x1c0f6f0() {
   return (neuron0x1bfe550()*0.034587);
}

double NNfunction-ss_sLdR::synapse0x1c0f730() {
   return (neuron0x1bfeab0()*-0.704877);
}

double NNfunction-ss_sLdR::synapse0x1c0fdb0() {
   return (neuron0x1bfecd0()*0.0276059);
}

double NNfunction-ss_sLdR::synapse0x1c0fdf0() {
   return (neuron0x1bff010()*-0.0251168);
}

double NNfunction-ss_sLdR::synapse0x1c0fe30() {
   return (neuron0x1bff350()*-0.071757);
}

double NNfunction-ss_sLdR::synapse0x1c0fe70() {
   return (neuron0x1bff690()*0.00211119);
}

double NNfunction-ss_sLdR::synapse0x1c0feb0() {
   return (neuron0x1bff9d0()*0.0104785);
}

double NNfunction-ss_sLdR::synapse0x1c0fef0() {
   return (neuron0x1bffd10()*-0.015148);
}

double NNfunction-ss_sLdR::synapse0x1c10270() {
   return (neuron0x1bfb1e0()*-0.199047);
}

double NNfunction-ss_sLdR::synapse0x1c102b0() {
   return (neuron0x1bfb490()*0.114623);
}

double NNfunction-ss_sLdR::synapse0x1c102f0() {
   return (neuron0x1bfb7d0()*-0.176556);
}

double NNfunction-ss_sLdR::synapse0x1c10330() {
   return (neuron0x1bfbb10()*-0.542419);
}

double NNfunction-ss_sLdR::synapse0x1c10370() {
   return (neuron0x1bfbe50()*0.370829);
}

double NNfunction-ss_sLdR::synapse0x1c103b0() {
   return (neuron0x1bfc190()*0.11774);
}

double NNfunction-ss_sLdR::synapse0x1c103f0() {
   return (neuron0x1bfc4d0()*0.211982);
}

double NNfunction-ss_sLdR::synapse0x1c10430() {
   return (neuron0x1bfc810()*0.876985);
}

double NNfunction-ss_sLdR::synapse0x1c10470() {
   return (neuron0x1bfcb50()*-0.577058);
}

double NNfunction-ss_sLdR::synapse0x1c104b0() {
   return (neuron0x1bfce90()*-0.0687706);
}

double NNfunction-ss_sLdR::synapse0x1c104f0() {
   return (neuron0x1bfd1d0()*-0.0654799);
}

double NNfunction-ss_sLdR::synapse0x1c10530() {
   return (neuron0x1bfd510()*-0.194188);
}

double NNfunction-ss_sLdR::synapse0x1c10570() {
   return (neuron0x1bfd850()*0.300566);
}

double NNfunction-ss_sLdR::synapse0x1c105b0() {
   return (neuron0x1bfdb90()*0.332567);
}

double NNfunction-ss_sLdR::synapse0x1c105f0() {
   return (neuron0x1bfded0()*-0.5877);
}

double NNfunction-ss_sLdR::synapse0x1c10630() {
   return (neuron0x1bfe210()*0.830986);
}

double NNfunction-ss_sLdR::synapse0x1c100c0() {
   return (neuron0x1bfe550()*-0.586003);
}

double NNfunction-ss_sLdR::synapse0x1c10100() {
   return (neuron0x1bfeab0()*0.393539);
}

double NNfunction-ss_sLdR::synapse0x1c10780() {
   return (neuron0x1bfecd0()*-0.49663);
}

double NNfunction-ss_sLdR::synapse0x1c107c0() {
   return (neuron0x1bff010()*-0.470136);
}

double NNfunction-ss_sLdR::synapse0x1c10800() {
   return (neuron0x1bff350()*-0.139748);
}

double NNfunction-ss_sLdR::synapse0x1c10840() {
   return (neuron0x1bff690()*-0.171104);
}

double NNfunction-ss_sLdR::synapse0x1c10880() {
   return (neuron0x1bff9d0()*-0.0987166);
}

double NNfunction-ss_sLdR::synapse0x1c108c0() {
   return (neuron0x1bffd10()*0.474576);
}

double NNfunction-ss_sLdR::synapse0x1c22790() {
   return (neuron0x1bfb1e0()*-0.427722);
}

double NNfunction-ss_sLdR::synapse0x1c227d0() {
   return (neuron0x1bfb490()*0.227678);
}

double NNfunction-ss_sLdR::synapse0x1c22810() {
   return (neuron0x1bfb7d0()*-0.20881);
}

double NNfunction-ss_sLdR::synapse0x1c22850() {
   return (neuron0x1bfbb10()*3.26406);
}

double NNfunction-ss_sLdR::synapse0x1c22890() {
   return (neuron0x1bfbe50()*-0.29211);
}

double NNfunction-ss_sLdR::synapse0x1c228d0() {
   return (neuron0x1bfc190()*-0.398154);
}

double NNfunction-ss_sLdR::synapse0x1c22910() {
   return (neuron0x1bfc4d0()*-0.580218);
}

double NNfunction-ss_sLdR::synapse0x1c22950() {
   return (neuron0x1bfc810()*-0.845174);
}

double NNfunction-ss_sLdR::synapse0x1c22990() {
   return (neuron0x1bfcb50()*-0.611074);
}

double NNfunction-ss_sLdR::synapse0x1c229d0() {
   return (neuron0x1bfce90()*-0.31459);
}

double NNfunction-ss_sLdR::synapse0x1c22a10() {
   return (neuron0x1bfd1d0()*-0.237357);
}

double NNfunction-ss_sLdR::synapse0x1c22a50() {
   return (neuron0x1bfd510()*-0.867279);
}

double NNfunction-ss_sLdR::synapse0x1c22a90() {
   return (neuron0x1bfd850()*1.19003);
}

double NNfunction-ss_sLdR::synapse0x1c22ad0() {
   return (neuron0x1bfdb90()*1.17799);
}

double NNfunction-ss_sLdR::synapse0x1c22b10() {
   return (neuron0x1bfded0()*0.824332);
}

double NNfunction-ss_sLdR::synapse0x1c22b50() {
   return (neuron0x1bfe210()*0.154219);
}

double NNfunction-ss_sLdR::synapse0x1c10900() {
   return (neuron0x1bfe550()*-0.034695);
}

double NNfunction-ss_sLdR::synapse0x1c10940() {
   return (neuron0x1bfeab0()*-0.622822);
}

double NNfunction-ss_sLdR::synapse0x1c22ca0() {
   return (neuron0x1bfecd0()*0.804143);
}

double NNfunction-ss_sLdR::synapse0x1c22ce0() {
   return (neuron0x1bff010()*-0.585512);
}

double NNfunction-ss_sLdR::synapse0x1c22d20() {
   return (neuron0x1bff350()*-0.593642);
}

double NNfunction-ss_sLdR::synapse0x1c22d60() {
   return (neuron0x1bff690()*0.203049);
}

double NNfunction-ss_sLdR::synapse0x1c22da0() {
   return (neuron0x1bff9d0()*0.495366);
}

double NNfunction-ss_sLdR::synapse0x1c22de0() {
   return (neuron0x1bffd10()*0.115266);
}

double NNfunction-ss_sLdR::synapse0x1c23160() {
   return (neuron0x1bfb1e0()*-0.314227);
}

double NNfunction-ss_sLdR::synapse0x1c231a0() {
   return (neuron0x1bfb490()*0.738899);
}

double NNfunction-ss_sLdR::synapse0x1c231e0() {
   return (neuron0x1bfb7d0()*-0.104531);
}

double NNfunction-ss_sLdR::synapse0x1c23220() {
   return (neuron0x1bfbb10()*0.440515);
}

double NNfunction-ss_sLdR::synapse0x1c23260() {
   return (neuron0x1bfbe50()*-0.384768);
}

double NNfunction-ss_sLdR::synapse0x1c232a0() {
   return (neuron0x1bfc190()*-0.132751);
}

double NNfunction-ss_sLdR::synapse0x1c232e0() {
   return (neuron0x1bfc4d0()*-0.171008);
}

double NNfunction-ss_sLdR::synapse0x1c23320() {
   return (neuron0x1bfc810()*0.122094);
}

double NNfunction-ss_sLdR::synapse0x1c23360() {
   return (neuron0x1bfcb50()*-0.443711);
}

double NNfunction-ss_sLdR::synapse0x1c233a0() {
   return (neuron0x1bfce90()*-0.0792312);
}

double NNfunction-ss_sLdR::synapse0x1c233e0() {
   return (neuron0x1bfd1d0()*-0.23478);
}

double NNfunction-ss_sLdR::synapse0x1c23420() {
   return (neuron0x1bfd510()*-0.340839);
}

double NNfunction-ss_sLdR::synapse0x1c23460() {
   return (neuron0x1bfd850()*0.305671);
}

double NNfunction-ss_sLdR::synapse0x1c234a0() {
   return (neuron0x1bfdb90()*0.383654);
}

double NNfunction-ss_sLdR::synapse0x1c234e0() {
   return (neuron0x1bfded0()*0.312058);
}

double NNfunction-ss_sLdR::synapse0x1c23520() {
   return (neuron0x1bfe210()*0.422348);
}

double NNfunction-ss_sLdR::synapse0x1c22fb0() {
   return (neuron0x1bfe550()*0.19561);
}

double NNfunction-ss_sLdR::synapse0x1c22ff0() {
   return (neuron0x1bfeab0()*0.0895183);
}

double NNfunction-ss_sLdR::synapse0x1c23670() {
   return (neuron0x1bfecd0()*0.712404);
}

double NNfunction-ss_sLdR::synapse0x1c236b0() {
   return (neuron0x1bff010()*0.115393);
}

double NNfunction-ss_sLdR::synapse0x1c236f0() {
   return (neuron0x1bff350()*-0.133086);
}

double NNfunction-ss_sLdR::synapse0x1c23730() {
   return (neuron0x1bff690()*-0.138688);
}

double NNfunction-ss_sLdR::synapse0x1c23770() {
   return (neuron0x1bff9d0()*0.206203);
}

double NNfunction-ss_sLdR::synapse0x1c237b0() {
   return (neuron0x1bffd10()*0.388226);
}

double NNfunction-ss_sLdR::synapse0x1c23b30() {
   return (neuron0x1bfb1e0()*-0.0261356);
}

double NNfunction-ss_sLdR::synapse0x1c23b70() {
   return (neuron0x1bfb490()*-0.0321498);
}

double NNfunction-ss_sLdR::synapse0x1c23bb0() {
   return (neuron0x1bfb7d0()*-0.0360372);
}

double NNfunction-ss_sLdR::synapse0x1c23bf0() {
   return (neuron0x1bfbb10()*13.4242);
}

double NNfunction-ss_sLdR::synapse0x1c23c30() {
   return (neuron0x1bfbe50()*0.00791566);
}

double NNfunction-ss_sLdR::synapse0x1c23c70() {
   return (neuron0x1bfc190()*-0.00454791);
}

double NNfunction-ss_sLdR::synapse0x1c23cb0() {
   return (neuron0x1bfc4d0()*-0.0162585);
}

double NNfunction-ss_sLdR::synapse0x1c23cf0() {
   return (neuron0x1bfc810()*-0.00841148);
}

double NNfunction-ss_sLdR::synapse0x1c23d30() {
   return (neuron0x1bfcb50()*0.0199365);
}

double NNfunction-ss_sLdR::synapse0x1c23d70() {
   return (neuron0x1bfce90()*-0.0190805);
}

double NNfunction-ss_sLdR::synapse0x1c23db0() {
   return (neuron0x1bfd1d0()*0.0322181);
}

double NNfunction-ss_sLdR::synapse0x1c23df0() {
   return (neuron0x1bfd510()*0.0634281);
}

double NNfunction-ss_sLdR::synapse0x1c23e30() {
   return (neuron0x1bfd850()*0.0850583);
}

double NNfunction-ss_sLdR::synapse0x1c23e70() {
   return (neuron0x1bfdb90()*-0.0404543);
}

double NNfunction-ss_sLdR::synapse0x1c23eb0() {
   return (neuron0x1bfded0()*0.0544722);
}

double NNfunction-ss_sLdR::synapse0x1c23ef0() {
   return (neuron0x1bfe210()*0.0375411);
}

double NNfunction-ss_sLdR::synapse0x1c23980() {
   return (neuron0x1bfe550()*0.00272409);
}

double NNfunction-ss_sLdR::synapse0x1c239c0() {
   return (neuron0x1bfeab0()*0.0482209);
}

double NNfunction-ss_sLdR::synapse0x1c24040() {
   return (neuron0x1bfecd0()*-0.00276485);
}

double NNfunction-ss_sLdR::synapse0x1c24080() {
   return (neuron0x1bff010()*0.0159524);
}

double NNfunction-ss_sLdR::synapse0x1c240c0() {
   return (neuron0x1bff350()*-0.0116388);
}

double NNfunction-ss_sLdR::synapse0x1c24100() {
   return (neuron0x1bff690()*0.046851);
}

double NNfunction-ss_sLdR::synapse0x1c24140() {
   return (neuron0x1bff9d0()*0.0194445);
}

double NNfunction-ss_sLdR::synapse0x1c24180() {
   return (neuron0x1bffd10()*0.0831348);
}

double NNfunction-ss_sLdR::synapse0x1c24500() {
   return (neuron0x1bfb1e0()*0.227035);
}

double NNfunction-ss_sLdR::synapse0x1c24540() {
   return (neuron0x1bfb490()*0.37856);
}

double NNfunction-ss_sLdR::synapse0x1c24580() {
   return (neuron0x1bfb7d0()*1.08525);
}

double NNfunction-ss_sLdR::synapse0x1c245c0() {
   return (neuron0x1bfbb10()*0.940877);
}

double NNfunction-ss_sLdR::synapse0x1c24600() {
   return (neuron0x1bfbe50()*-0.554635);
}

double NNfunction-ss_sLdR::synapse0x1c24640() {
   return (neuron0x1bfc190()*-0.263432);
}

double NNfunction-ss_sLdR::synapse0x1c24680() {
   return (neuron0x1bfc4d0()*-0.120922);
}

double NNfunction-ss_sLdR::synapse0x1c246c0() {
   return (neuron0x1bfc810()*-0.083313);
}

double NNfunction-ss_sLdR::synapse0x1c24700() {
   return (neuron0x1bfcb50()*-1.78214);
}

double NNfunction-ss_sLdR::synapse0x1c24740() {
   return (neuron0x1bfce90()*-1.12257);
}

double NNfunction-ss_sLdR::synapse0x1c24780() {
   return (neuron0x1bfd1d0()*-0.376908);
}

double NNfunction-ss_sLdR::synapse0x1c247c0() {
   return (neuron0x1bfd510()*-0.522805);
}

double NNfunction-ss_sLdR::synapse0x1c24800() {
   return (neuron0x1bfd850()*-0.0455235);
}

double NNfunction-ss_sLdR::synapse0x1c24840() {
   return (neuron0x1bfdb90()*0.409915);
}

double NNfunction-ss_sLdR::synapse0x1c24880() {
   return (neuron0x1bfded0()*0.38115);
}

double NNfunction-ss_sLdR::synapse0x1c248c0() {
   return (neuron0x1bfe210()*0.411399);
}

double NNfunction-ss_sLdR::synapse0x1c24350() {
   return (neuron0x1bfe550()*-0.410781);
}

double NNfunction-ss_sLdR::synapse0x1c24390() {
   return (neuron0x1bfeab0()*1.21308);
}

double NNfunction-ss_sLdR::synapse0x1c24a10() {
   return (neuron0x1bfecd0()*0.310045);
}

double NNfunction-ss_sLdR::synapse0x1c24a50() {
   return (neuron0x1bff010()*-0.133686);
}

double NNfunction-ss_sLdR::synapse0x1c24a90() {
   return (neuron0x1bff350()*-0.0594588);
}

double NNfunction-ss_sLdR::synapse0x1c24ad0() {
   return (neuron0x1bff690()*-0.0170505);
}

double NNfunction-ss_sLdR::synapse0x1c24b10() {
   return (neuron0x1bff9d0()*0.336116);
}

double NNfunction-ss_sLdR::synapse0x1c24b50() {
   return (neuron0x1bffd10()*0.424978);
}

double NNfunction-ss_sLdR::synapse0x1c010e0() {
   return (neuron0x1c00180()*-0.339237);
}

double NNfunction-ss_sLdR::synapse0x1c01120() {
   return (neuron0x1c00ad0()*0.0911375);
}

double NNfunction-ss_sLdR::synapse0x1c02600() {
   return (neuron0x1c015b0()*0.419057);
}

double NNfunction-ss_sLdR::synapse0x1c02640() {
   return (neuron0x19c4900()*0.201308);
}

double NNfunction-ss_sLdR::synapse0x1c02fd0() {
   return (neuron0x1c02350()*0.218812);
}

double NNfunction-ss_sLdR::synapse0x1c03010() {
   return (neuron0x1c02d20()*-0.632788);
}

double NNfunction-ss_sLdR::synapse0x1c03da0() {
   return (neuron0x1c03af0()*-0.405);
}

double NNfunction-ss_sLdR::synapse0x1c03de0() {
   return (neuron0x1c044c0()*-0.300266);
}

double NNfunction-ss_sLdR::synapse0x1c04770() {
   return (neuron0x1c04e90()*-1.07006);
}

double NNfunction-ss_sLdR::synapse0x1c047b0() {
   return (neuron0x1c05970()*-3.89801);
}

double NNfunction-ss_sLdR::synapse0x1c05140() {
   return (neuron0x1c06340()*-0.372594);
}

double NNfunction-ss_sLdR::synapse0x1c05180() {
   return (neuron0x1c03420()*-0.385743);
}

double NNfunction-ss_sLdR::synapse0x1c05c20() {
   return (neuron0x1c07ef0()*2.89426);
}

double NNfunction-ss_sLdR::synapse0x1c05c60() {
   return (neuron0x1c088c0()*0.0763741);
}

double NNfunction-ss_sLdR::synapse0x1c065f0() {
   return (neuron0x1c09290()*1.13104);
}

double NNfunction-ss_sLdR::synapse0x1c06630() {
   return (neuron0x1c09c60()*-0.188725);
}

double NNfunction-ss_sLdR::synapse0x1c036d0() {
   return (neuron0x1c0ba70()*-1.07858);
}

double NNfunction-ss_sLdR::synapse0x1c03710() {
   return (neuron0x1c0bd50()*0.582832);
}

double NNfunction-ss_sLdR::synapse0x1c081a0() {
   return (neuron0x1c0c720()*0.295078);
}

double NNfunction-ss_sLdR::synapse0x1c081e0() {
   return (neuron0x1c0d0f0()*0.0570927);
}

double NNfunction-ss_sLdR::synapse0x1c08b70() {
   return (neuron0x1c0dac0()*-0.284379);
}

double NNfunction-ss_sLdR::synapse0x1c08bb0() {
   return (neuron0x1c0e490()*0.0538391);
}

double NNfunction-ss_sLdR::synapse0x1c09540() {
   return (neuron0x1c06fe0()*-0.0148433);
}

double NNfunction-ss_sLdR::synapse0x1c09580() {
   return (neuron0x1c079b0()*0.92975);
}

double NNfunction-ss_sLdR::synapse0x1c09f10() {
   return (neuron0x1c11220()*0.139589);
}

double NNfunction-ss_sLdR::synapse0x1c09f50() {
   return (neuron0x1c11bf0()*1.79575);
}

double NNfunction-ss_sLdR::synapse0x1bfe0f0() {
   return (neuron0x1c125c0()*-0.284759);
}

double NNfunction-ss_sLdR::synapse0x1bfe130() {
   return (neuron0x1c12f90()*-0.253896);
}

double NNfunction-ss_sLdR::synapse0x1c0c000() {
   return (neuron0x1c13960()*0.217606);
}

double NNfunction-ss_sLdR::synapse0x1c0c040() {
   return (neuron0x1c14330()*0.259576);
}

double NNfunction-ss_sLdR::synapse0x1c0c9d0() {
   return (neuron0x1c14d00()*0.141519);
}

double NNfunction-ss_sLdR::synapse0x1c0ca10() {
   return (neuron0x1c156d0()*-0.688234);
}

double NNfunction-ss_sLdR::synapse0x1c0d3a0() {
   return (neuron0x1c0b760()*-0.191494);
}

double NNfunction-ss_sLdR::synapse0x1c0d3e0() {
   return (neuron0x1c182b0()*0.379963);
}

double NNfunction-ss_sLdR::synapse0x1c0dd70() {
   return (neuron0x1c18c80()*0.154333);
}

double NNfunction-ss_sLdR::synapse0x1c0ddb0() {
   return (neuron0x1c19650()*0.460422);
}

double NNfunction-ss_sLdR::synapse0x1c0e740() {
   return (neuron0x1c1a020()*1.19367);
}

double NNfunction-ss_sLdR::synapse0x1c0e780() {
   return (neuron0x1c1a9f0()*0.555395);
}

double NNfunction-ss_sLdR::synapse0x1c07290() {
   return (neuron0x1c1b3c0()*-0.257686);
}

double NNfunction-ss_sLdR::synapse0x1c072d0() {
   return (neuron0x1c1bd90()*0.271366);
}

double NNfunction-ss_sLdR::synapse0x1c10b40() {
   return (neuron0x1c1c760()*-0.00429804);
}

double NNfunction-ss_sLdR::synapse0x1c10b80() {
   return (neuron0x1c1d340()*-2.19428);
}

double NNfunction-ss_sLdR::synapse0x1c114d0() {
   return (neuron0x1c1dd10()*0.382025);
}

double NNfunction-ss_sLdR::synapse0x1c11510() {
   return (neuron0x1c0eb90()*0.384551);
}

double NNfunction-ss_sLdR::synapse0x1c11ea0() {
   return (neuron0x1c0f560()*-0.573134);
}

double NNfunction-ss_sLdR::synapse0x1c11ee0() {
   return (neuron0x1c0ff30()*-0.287072);
}

double NNfunction-ss_sLdR::synapse0x1c12870() {
   return (neuron0x1c22570()*0.484087);
}

double NNfunction-ss_sLdR::synapse0x1c128b0() {
   return (neuron0x1c22e20()*-0.172347);
}

double NNfunction-ss_sLdR::synapse0x1c13240() {
   return (neuron0x1c237f0()*-4.14464);
}

double NNfunction-ss_sLdR::synapse0x1c13280() {
   return (neuron0x1c241c0()*0.0811571);
}

double NNfunction-ss_sLdR::synapse0x1c15980() {
   return (neuron0x1c00180()*0.445621);
}

double NNfunction-ss_sLdR::synapse0x1c159c0() {
   return (neuron0x1c00ad0()*0.335466);
}

double NNfunction-ss_sLdR::synapse0x1c0af40() {
   return (neuron0x1c015b0()*0.357897);
}

double NNfunction-ss_sLdR::synapse0x1c0af80() {
   return (neuron0x19c4900()*0.111517);
}

double NNfunction-ss_sLdR::synapse0x1c18560() {
   return (neuron0x1c02350()*0.0795591);
}

double NNfunction-ss_sLdR::synapse0x1c185a0() {
   return (neuron0x1c02d20()*0.146182);
}

double NNfunction-ss_sLdR::synapse0x1c18f30() {
   return (neuron0x1c03af0()*-0.168223);
}

double NNfunction-ss_sLdR::synapse0x1c18f70() {
   return (neuron0x1c044c0()*-0.437816);
}

double NNfunction-ss_sLdR::synapse0x1c19900() {
   return (neuron0x1c04e90()*0.205491);
}

double NNfunction-ss_sLdR::synapse0x1c19940() {
   return (neuron0x1c05970()*1.04254);
}

double NNfunction-ss_sLdR::synapse0x1c1a2d0() {
   return (neuron0x1c06340()*-0.45279);
}

double NNfunction-ss_sLdR::synapse0x1c1a310() {
   return (neuron0x1c03420()*0.498469);
}

double NNfunction-ss_sLdR::synapse0x1c1aca0() {
   return (neuron0x1c07ef0()*-0.590909);
}

double NNfunction-ss_sLdR::synapse0x1c1ace0() {
   return (neuron0x1c088c0()*-0.254736);
}

double NNfunction-ss_sLdR::synapse0x1c1b670() {
   return (neuron0x1c09290()*-0.0239697);
}

double NNfunction-ss_sLdR::synapse0x1c1b6b0() {
   return (neuron0x1c09c60()*-0.312211);
}

double NNfunction-ss_sLdR::synapse0x1c1c040() {
   return (neuron0x1c0ba70()*0.252326);
}

double NNfunction-ss_sLdR::synapse0x1c1c080() {
   return (neuron0x1c0bd50()*0.0866144);
}

double NNfunction-ss_sLdR::synapse0x1c1ca10() {
   return (neuron0x1c0c720()*0.518161);
}

double NNfunction-ss_sLdR::synapse0x1c1ca50() {
   return (neuron0x1c0d0f0()*-0.152169);
}

double NNfunction-ss_sLdR::synapse0x1c1d5f0() {
   return (neuron0x1c0dac0()*-0.475549);
}

double NNfunction-ss_sLdR::synapse0x1c1d630() {
   return (neuron0x1c0e490()*-0.306397);
}

double NNfunction-ss_sLdR::synapse0x1c1dfc0() {
   return (neuron0x1c06fe0()*0.22949);
}

double NNfunction-ss_sLdR::synapse0x1c1e000() {
   return (neuron0x1c079b0()*0.877619);
}

double NNfunction-ss_sLdR::synapse0x1c0ee40() {
   return (neuron0x1c11220()*-0.814409);
}

double NNfunction-ss_sLdR::synapse0x1c0ee80() {
   return (neuron0x1c11bf0()*-1.42374);
}

double NNfunction-ss_sLdR::synapse0x1c0f810() {
   return (neuron0x1c125c0()*-0.28128);
}

double NNfunction-ss_sLdR::synapse0x1c0f850() {
   return (neuron0x1c12f90()*-0.361151);
}

double NNfunction-ss_sLdR::synapse0x1c101e0() {
   return (neuron0x1c13960()*0.114475);
}

double NNfunction-ss_sLdR::synapse0x1c10220() {
   return (neuron0x1c14330()*0.464724);
}

double NNfunction-ss_sLdR::synapse0x1c22700() {
   return (neuron0x1c14d00()*-0.0160118);
}

double NNfunction-ss_sLdR::synapse0x1c22740() {
   return (neuron0x1c156d0()*-0.661155);
}

double NNfunction-ss_sLdR::synapse0x1c230d0() {
   return (neuron0x1c0b760()*-0.140563);
}

double NNfunction-ss_sLdR::synapse0x1c23110() {
   return (neuron0x1c182b0()*0.959897);
}

double NNfunction-ss_sLdR::synapse0x1c23aa0() {
   return (neuron0x1c18c80()*0.0956218);
}

double NNfunction-ss_sLdR::synapse0x1c23ae0() {
   return (neuron0x1c19650()*0.484266);
}

double NNfunction-ss_sLdR::synapse0x1c24470() {
   return (neuron0x1c1a020()*0.292496);
}

double NNfunction-ss_sLdR::synapse0x1c244b0() {
   return (neuron0x1c1a9f0()*0.73301);
}

double NNfunction-ss_sLdR::synapse0x1c003a0() {
   return (neuron0x1c1b3c0()*-0.675583);
}

double NNfunction-ss_sLdR::synapse0x1c003e0() {
   return (neuron0x1c1bd90()*-0.365056);
}

double NNfunction-ss_sLdR::synapse0x1c13c10() {
   return (neuron0x1c1c760()*0.254221);
}

double NNfunction-ss_sLdR::synapse0x1c13c50() {
   return (neuron0x1c1d340()*0.689254);
}

double NNfunction-ss_sLdR::synapse0x1c24b90() {
   return (neuron0x1c1dd10()*0.158663);
}

double NNfunction-ss_sLdR::synapse0x1c24bd0() {
   return (neuron0x1c0eb90()*0.126116);
}

double NNfunction-ss_sLdR::synapse0x1c24c10() {
   return (neuron0x1c0f560()*0.132059);
}

double NNfunction-ss_sLdR::synapse0x1c24c50() {
   return (neuron0x1c0ff30()*-0.303062);
}

double NNfunction-ss_sLdR::synapse0x1c2bb00() {
   return (neuron0x1c22570()*0.159838);
}

double NNfunction-ss_sLdR::synapse0x1c2bb40() {
   return (neuron0x1c22e20()*-0.149572);
}

double NNfunction-ss_sLdR::synapse0x1c2bb80() {
   return (neuron0x1c237f0()*0.775264);
}

double NNfunction-ss_sLdR::synapse0x1c2bbc0() {
   return (neuron0x1c241c0()*0.0559985);
}

double NNfunction-ss_sLdR::synapse0x1c2bf40() {
   return (neuron0x1c00180()*-0.475377);
}

double NNfunction-ss_sLdR::synapse0x1c2bf80() {
   return (neuron0x1c00ad0()*-0.0247873);
}

double NNfunction-ss_sLdR::synapse0x1c2bfc0() {
   return (neuron0x1c015b0()*0.188085);
}

double NNfunction-ss_sLdR::synapse0x1c2c000() {
   return (neuron0x19c4900()*0.209294);
}

double NNfunction-ss_sLdR::synapse0x1c2c040() {
   return (neuron0x1c02350()*0.374635);
}

double NNfunction-ss_sLdR::synapse0x1c2c080() {
   return (neuron0x1c02d20()*-0.353565);
}

double NNfunction-ss_sLdR::synapse0x1c2c0c0() {
   return (neuron0x1c03af0()*0.357262);
}

double NNfunction-ss_sLdR::synapse0x1c2c100() {
   return (neuron0x1c044c0()*0.0823767);
}

double NNfunction-ss_sLdR::synapse0x1c2c140() {
   return (neuron0x1c04e90()*0.425774);
}

double NNfunction-ss_sLdR::synapse0x1c2c180() {
   return (neuron0x1c05970()*0.818322);
}

double NNfunction-ss_sLdR::synapse0x1c2c1c0() {
   return (neuron0x1c06340()*-0.333985);
}

double NNfunction-ss_sLdR::synapse0x1c2c200() {
   return (neuron0x1c03420()*-0.301835);
}

double NNfunction-ss_sLdR::synapse0x1c2c240() {
   return (neuron0x1c07ef0()*-0.25068);
}

double NNfunction-ss_sLdR::synapse0x1c2c280() {
   return (neuron0x1c088c0()*0.362322);
}

double NNfunction-ss_sLdR::synapse0x1c2c2c0() {
   return (neuron0x1c09290()*-0.832693);
}

double NNfunction-ss_sLdR::synapse0x1c2c300() {
   return (neuron0x1c09c60()*-0.0775572);
}

double NNfunction-ss_sLdR::synapse0x1c2bd90() {
   return (neuron0x1c0ba70()*-0.631683);
}

double NNfunction-ss_sLdR::synapse0x1c2bdd0() {
   return (neuron0x1c0bd50()*1.3203);
}

double NNfunction-ss_sLdR::synapse0x1c2c450() {
   return (neuron0x1c0c720()*0.977307);
}

double NNfunction-ss_sLdR::synapse0x1c2c490() {
   return (neuron0x1c0d0f0()*0.137102);
}

double NNfunction-ss_sLdR::synapse0x1c2c4d0() {
   return (neuron0x1c0dac0()*-0.274674);
}

double NNfunction-ss_sLdR::synapse0x1c2c510() {
   return (neuron0x1c0e490()*0.511793);
}

double NNfunction-ss_sLdR::synapse0x1c2c550() {
   return (neuron0x1c06fe0()*-0.324124);
}

double NNfunction-ss_sLdR::synapse0x1c2c590() {
   return (neuron0x1c079b0()*0.611376);
}

double NNfunction-ss_sLdR::synapse0x1c2c5d0() {
   return (neuron0x1c11220()*-1.19966);
}

double NNfunction-ss_sLdR::synapse0x1c2c610() {
   return (neuron0x1c11bf0()*-1.11187);
}

double NNfunction-ss_sLdR::synapse0x1c2c650() {
   return (neuron0x1c125c0()*-0.372836);
}

double NNfunction-ss_sLdR::synapse0x1c2c690() {
   return (neuron0x1c12f90()*-0.27134);
}

double NNfunction-ss_sLdR::synapse0x1c2c6d0() {
   return (neuron0x1c13960()*0.29954);
}

double NNfunction-ss_sLdR::synapse0x1c2c710() {
   return (neuron0x1c14330()*-0.530255);
}

double NNfunction-ss_sLdR::synapse0x1c2c750() {
   return (neuron0x1c14d00()*0.238078);
}

double NNfunction-ss_sLdR::synapse0x1c2c790() {
   return (neuron0x1c156d0()*-0.817619);
}

double NNfunction-ss_sLdR::synapse0x1c2c340() {
   return (neuron0x1c0b760()*-0.0748866);
}

double NNfunction-ss_sLdR::synapse0x1c2c380() {
   return (neuron0x1c182b0()*-0.272111);
}

double NNfunction-ss_sLdR::synapse0x1c2c3c0() {
   return (neuron0x1c18c80()*0.0727426);
}

double NNfunction-ss_sLdR::synapse0x1c2c400() {
   return (neuron0x1c19650()*-0.0190545);
}

double NNfunction-ss_sLdR::synapse0x1c2c9e0() {
   return (neuron0x1c1a020()*-0.244648);
}

double NNfunction-ss_sLdR::synapse0x1c2ca20() {
   return (neuron0x1c1a9f0()*0.597361);
}

double NNfunction-ss_sLdR::synapse0x1c2ca60() {
   return (neuron0x1c1b3c0()*0.374526);
}

double NNfunction-ss_sLdR::synapse0x1c2caa0() {
   return (neuron0x1c1bd90()*0.470429);
}

double NNfunction-ss_sLdR::synapse0x1c2cae0() {
   return (neuron0x1c1c760()*-0.192563);
}

double NNfunction-ss_sLdR::synapse0x1c2cb20() {
   return (neuron0x1c1d340()*0.163054);
}

double NNfunction-ss_sLdR::synapse0x1c2cb60() {
   return (neuron0x1c1dd10()*0.70554);
}

double NNfunction-ss_sLdR::synapse0x1c2cba0() {
   return (neuron0x1c0eb90()*0.256884);
}

double NNfunction-ss_sLdR::synapse0x1c2cbe0() {
   return (neuron0x1c0f560()*-0.167837);
}

double NNfunction-ss_sLdR::synapse0x1c2cc20() {
   return (neuron0x1c0ff30()*-0.049011);
}

double NNfunction-ss_sLdR::synapse0x1c2cc60() {
   return (neuron0x1c22570()*1.11254);
}

double NNfunction-ss_sLdR::synapse0x1c2cca0() {
   return (neuron0x1c22e20()*-0.157994);
}

double NNfunction-ss_sLdR::synapse0x1c2cce0() {
   return (neuron0x1c237f0()*0.332344);
}

double NNfunction-ss_sLdR::synapse0x1c2cd20() {
   return (neuron0x1c241c0()*0.115399);
}

double NNfunction-ss_sLdR::synapse0x1c2d0a0() {
   return (neuron0x1c00180()*-0.128762);
}

double NNfunction-ss_sLdR::synapse0x1c2d0e0() {
   return (neuron0x1c00ad0()*0.00620106);
}

double NNfunction-ss_sLdR::synapse0x1c2d120() {
   return (neuron0x1c015b0()*-1.19685);
}

double NNfunction-ss_sLdR::synapse0x1c2d160() {
   return (neuron0x19c4900()*-0.615299);
}

double NNfunction-ss_sLdR::synapse0x1c2d1a0() {
   return (neuron0x1c02350()*-0.607892);
}

double NNfunction-ss_sLdR::synapse0x1c2d1e0() {
   return (neuron0x1c02d20()*-0.959507);
}

double NNfunction-ss_sLdR::synapse0x1c2d220() {
   return (neuron0x1c03af0()*5.14817);
}

double NNfunction-ss_sLdR::synapse0x1c2d260() {
   return (neuron0x1c044c0()*0.558653);
}

double NNfunction-ss_sLdR::synapse0x1c2d2a0() {
   return (neuron0x1c04e90()*-0.1592);
}

double NNfunction-ss_sLdR::synapse0x1c2d2e0() {
   return (neuron0x1c05970()*-5.63253);
}

double NNfunction-ss_sLdR::synapse0x1c2d320() {
   return (neuron0x1c06340()*0.611996);
}

double NNfunction-ss_sLdR::synapse0x1c2d360() {
   return (neuron0x1c03420()*0.326019);
}

double NNfunction-ss_sLdR::synapse0x1c2d3a0() {
   return (neuron0x1c07ef0()*0.384875);
}

double NNfunction-ss_sLdR::synapse0x1c2d3e0() {
   return (neuron0x1c088c0()*-0.618348);
}

double NNfunction-ss_sLdR::synapse0x1c2d420() {
   return (neuron0x1c09290()*0.613443);
}

double NNfunction-ss_sLdR::synapse0x1c2d460() {
   return (neuron0x1c09c60()*0.435616);
}

double NNfunction-ss_sLdR::synapse0x1c2cef0() {
   return (neuron0x1c0ba70()*-4.58661);
}

double NNfunction-ss_sLdR::synapse0x1c2cf30() {
   return (neuron0x1c0bd50()*-0.784629);
}

double NNfunction-ss_sLdR::synapse0x1c2d5b0() {
   return (neuron0x1c0c720()*-0.618107);
}

double NNfunction-ss_sLdR::synapse0x1c2d5f0() {
   return (neuron0x1c0d0f0()*-0.56527);
}

double NNfunction-ss_sLdR::synapse0x1c2d630() {
   return (neuron0x1c0dac0()*-0.153414);
}

double NNfunction-ss_sLdR::synapse0x1c2d670() {
   return (neuron0x1c0e490()*-0.556402);
}

double NNfunction-ss_sLdR::synapse0x1c2d6b0() {
   return (neuron0x1c06fe0()*0.550314);
}

double NNfunction-ss_sLdR::synapse0x1c2d6f0() {
   return (neuron0x1c079b0()*2.91193);
}

double NNfunction-ss_sLdR::synapse0x1c2d730() {
   return (neuron0x1c11220()*2.08607);
}

double NNfunction-ss_sLdR::synapse0x1c2d770() {
   return (neuron0x1c11bf0()*0.760741);
}

double NNfunction-ss_sLdR::synapse0x1c2d7b0() {
   return (neuron0x1c125c0()*0.710585);
}

double NNfunction-ss_sLdR::synapse0x1c2d7f0() {
   return (neuron0x1c12f90()*-0.145391);
}

double NNfunction-ss_sLdR::synapse0x1c2d830() {
   return (neuron0x1c13960()*-0.489107);
}

double NNfunction-ss_sLdR::synapse0x1c2d870() {
   return (neuron0x1c14330()*-0.424833);
}

double NNfunction-ss_sLdR::synapse0x1c2d8b0() {
   return (neuron0x1c14d00()*-0.555139);
}

double NNfunction-ss_sLdR::synapse0x1c2d8f0() {
   return (neuron0x1c156d0()*0.774094);
}

double NNfunction-ss_sLdR::synapse0x1c2d4a0() {
   return (neuron0x1c0b760()*0.576467);
}

double NNfunction-ss_sLdR::synapse0x1c2d4e0() {
   return (neuron0x1c182b0()*0.253309);
}

double NNfunction-ss_sLdR::synapse0x1c2d520() {
   return (neuron0x1c18c80()*-0.634825);
}

double NNfunction-ss_sLdR::synapse0x1c2d560() {
   return (neuron0x1c19650()*-1.38246);
}

double NNfunction-ss_sLdR::synapse0x1c2db40() {
   return (neuron0x1c1a020()*1.76706);
}

double NNfunction-ss_sLdR::synapse0x1c2db80() {
   return (neuron0x1c1a9f0()*-0.968125);
}

double NNfunction-ss_sLdR::synapse0x1c2dbc0() {
   return (neuron0x1c1b3c0()*-0.514471);
}

double NNfunction-ss_sLdR::synapse0x1c2dc00() {
   return (neuron0x1c1bd90()*-1.61239);
}

double NNfunction-ss_sLdR::synapse0x1c2dc40() {
   return (neuron0x1c1c760()*0.700151);
}

double NNfunction-ss_sLdR::synapse0x1c2dc80() {
   return (neuron0x1c1d340()*-2.19751);
}

double NNfunction-ss_sLdR::synapse0x1c2dcc0() {
   return (neuron0x1c1dd10()*-0.619192);
}

double NNfunction-ss_sLdR::synapse0x1c2dd00() {
   return (neuron0x1c0eb90()*-1.44358);
}

double NNfunction-ss_sLdR::synapse0x1c2dd40() {
   return (neuron0x1c0f560()*-0.970233);
}

double NNfunction-ss_sLdR::synapse0x1c2dd80() {
   return (neuron0x1c0ff30()*0.793377);
}

double NNfunction-ss_sLdR::synapse0x1c2ddc0() {
   return (neuron0x1c22570()*-0.718654);
}

double NNfunction-ss_sLdR::synapse0x1c2de00() {
   return (neuron0x1c22e20()*0.478148);
}

double NNfunction-ss_sLdR::synapse0x1c2de40() {
   return (neuron0x1c237f0()*-0.429115);
}

double NNfunction-ss_sLdR::synapse0x1c2de80() {
   return (neuron0x1c241c0()*-0.410272);
}

double NNfunction-ss_sLdR::synapse0x1c2e200() {
   return (neuron0x1c00180()*-0.32781);
}

double NNfunction-ss_sLdR::synapse0x1c2e240() {
   return (neuron0x1c00ad0()*-0.27921);
}

double NNfunction-ss_sLdR::synapse0x1c2e280() {
   return (neuron0x1c015b0()*-0.212976);
}

double NNfunction-ss_sLdR::synapse0x1c2e2c0() {
   return (neuron0x19c4900()*0.12805);
}

double NNfunction-ss_sLdR::synapse0x1c2e300() {
   return (neuron0x1c02350()*-0.1712);
}

double NNfunction-ss_sLdR::synapse0x1c2e340() {
   return (neuron0x1c02d20()*-0.575504);
}

double NNfunction-ss_sLdR::synapse0x1c2e380() {
   return (neuron0x1c03af0()*-0.668506);
}

double NNfunction-ss_sLdR::synapse0x1c2e3c0() {
   return (neuron0x1c044c0()*-0.265111);
}

double NNfunction-ss_sLdR::synapse0x1c2e400() {
   return (neuron0x1c04e90()*-0.10888);
}

double NNfunction-ss_sLdR::synapse0x1c2e440() {
   return (neuron0x1c05970()*0.377273);
}

double NNfunction-ss_sLdR::synapse0x1c2e480() {
   return (neuron0x1c06340()*-0.640003);
}

double NNfunction-ss_sLdR::synapse0x1c2e4c0() {
   return (neuron0x1c03420()*-0.208986);
}

double NNfunction-ss_sLdR::synapse0x1c2e500() {
   return (neuron0x1c07ef0()*-0.200142);
}

double NNfunction-ss_sLdR::synapse0x1c2e540() {
   return (neuron0x1c088c0()*0.285459);
}

double NNfunction-ss_sLdR::synapse0x1c2e580() {
   return (neuron0x1c09290()*-0.326298);
}

double NNfunction-ss_sLdR::synapse0x1c2e5c0() {
   return (neuron0x1c09c60()*0.0114369);
}

double NNfunction-ss_sLdR::synapse0x1c2e050() {
   return (neuron0x1c0ba70()*-0.299508);
}

double NNfunction-ss_sLdR::synapse0x1c2e090() {
   return (neuron0x1c0bd50()*-0.535728);
}

double NNfunction-ss_sLdR::synapse0x1c2e710() {
   return (neuron0x1c0c720()*-0.441027);
}

double NNfunction-ss_sLdR::synapse0x1c2e750() {
   return (neuron0x1c0d0f0()*0.068446);
}

double NNfunction-ss_sLdR::synapse0x1c2e790() {
   return (neuron0x1c0dac0()*-0.105502);
}

double NNfunction-ss_sLdR::synapse0x1c2e7d0() {
   return (neuron0x1c0e490()*0.373832);
}

double NNfunction-ss_sLdR::synapse0x1c2e810() {
   return (neuron0x1c06fe0()*-0.378095);
}

double NNfunction-ss_sLdR::synapse0x1c2e850() {
   return (neuron0x1c079b0()*0.150898);
}

double NNfunction-ss_sLdR::synapse0x1c2e890() {
   return (neuron0x1c11220()*-0.575971);
}

double NNfunction-ss_sLdR::synapse0x1c2e8d0() {
   return (neuron0x1c11bf0()*-0.719358);
}

double NNfunction-ss_sLdR::synapse0x1c2e910() {
   return (neuron0x1c125c0()*-0.353159);
}

double NNfunction-ss_sLdR::synapse0x1c2e950() {
   return (neuron0x1c12f90()*0.170473);
}

double NNfunction-ss_sLdR::synapse0x1c2e990() {
   return (neuron0x1c13960()*-0.329983);
}

double NNfunction-ss_sLdR::synapse0x1c2e9d0() {
   return (neuron0x1c14330()*-0.354274);
}

double NNfunction-ss_sLdR::synapse0x1c2ea10() {
   return (neuron0x1c14d00()*0.34729);
}

double NNfunction-ss_sLdR::synapse0x1c2ea50() {
   return (neuron0x1c156d0()*0.0902491);
}

double NNfunction-ss_sLdR::synapse0x1c2e600() {
   return (neuron0x1c0b760()*-0.183956);
}

double NNfunction-ss_sLdR::synapse0x1c2e640() {
   return (neuron0x1c182b0()*-0.189039);
}

double NNfunction-ss_sLdR::synapse0x1c2e680() {
   return (neuron0x1c18c80()*0.264445);
}

double NNfunction-ss_sLdR::synapse0x1c2e6c0() {
   return (neuron0x1c19650()*0.0188184);
}

double NNfunction-ss_sLdR::synapse0x1c2eca0() {
   return (neuron0x1c1a020()*-0.63477);
}

double NNfunction-ss_sLdR::synapse0x1c2ece0() {
   return (neuron0x1c1a9f0()*-0.47666);
}

double NNfunction-ss_sLdR::synapse0x1c2ed20() {
   return (neuron0x1c1b3c0()*-0.579253);
}

double NNfunction-ss_sLdR::synapse0x1c2ed60() {
   return (neuron0x1c1bd90()*0.397099);
}

double NNfunction-ss_sLdR::synapse0x1c2eda0() {
   return (neuron0x1c1c760()*-0.423333);
}

double NNfunction-ss_sLdR::synapse0x1c2ede0() {
   return (neuron0x1c1d340()*-0.0205332);
}

double NNfunction-ss_sLdR::synapse0x1c2ee20() {
   return (neuron0x1c1dd10()*0.587346);
}

double NNfunction-ss_sLdR::synapse0x1c2ee60() {
   return (neuron0x1c0eb90()*-0.200258);
}

double NNfunction-ss_sLdR::synapse0x1c2eea0() {
   return (neuron0x1c0f560()*-0.294045);
}

double NNfunction-ss_sLdR::synapse0x1c2eee0() {
   return (neuron0x1c0ff30()*0.298594);
}

double NNfunction-ss_sLdR::synapse0x1c2ef20() {
   return (neuron0x1c22570()*-0.081161);
}

double NNfunction-ss_sLdR::synapse0x1c2ef60() {
   return (neuron0x1c22e20()*0.25274);
}

double NNfunction-ss_sLdR::synapse0x1c2efa0() {
   return (neuron0x1c237f0()*-0.0719268);
}

double NNfunction-ss_sLdR::synapse0x1c2efe0() {
   return (neuron0x1c241c0()*-0.0203985);
}

double NNfunction-ss_sLdR::synapse0x1c2f240() {
   return (neuron0x1c2b3c0()*7.31926);
}

double NNfunction-ss_sLdR::synapse0x1c2f280() {
   return (neuron0x1c2b760()*-3.1748);
}

double NNfunction-ss_sLdR::synapse0x1c2f2c0() {
   return (neuron0x1c2bc00()*-1.8703);
}

double NNfunction-ss_sLdR::synapse0x1c2f300() {
   return (neuron0x1c2cd60()*7.80512);
}

double NNfunction-ss_sLdR::synapse0x1c2f340() {
   return (neuron0x1c2dec0()*0.759052);
}

