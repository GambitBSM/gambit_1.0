#include "NNfunction_sb_uRdR.h"
#include <cmath>

double NNfunction_sb_uRdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4383)/15.2987;
   input1 = (in1 - -5.08363)/1161.38;
   input2 = (in2 - 654.888)/622.8;
   input3 = (in3 - -52.9397)/809.478;
   input4 = (in4 - 1065.99)/958.179;
   input5 = (in5 - 900.135)/951.704;
   input6 = (in6 - 911.989)/951.284;
   input7 = (in7 - 926.87)/935.244;
   input8 = (in8 - 911.66)/962.706;
   input9 = (in9 - 889.549)/943.7;
   input10 = (in10 - 980.152)/944.809;
   input11 = (in11 - 713.572)/856.996;
   input12 = (in12 - 720.318)/865.197;
   input13 = (in13 - 505.419)/520.404;
   input14 = (in14 - 467.181)/481.383;
   input15 = (in15 - 727.174)/823.964;
   input16 = (in16 - 541.552)/570.926;
   input17 = (in17 - 445.722)/471.772;
   input18 = (in18 - 740.893)/888.975;
   input19 = (in19 - 794.044)/867.316;
   input20 = (in20 - -7.36785)/489.184;
   input21 = (in21 - 1.52007)/1158.61;
   input22 = (in22 - 0.760012)/1208.68;
   input23 = (in23 - -197.397)/608;
   switch(index) {
     case 0:
         return neuron0x2ffb4a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRdR::Value(int index, double* input) {
   input0 = (input[0] - 23.4383)/15.2987;
   input1 = (input[1] - -5.08363)/1161.38;
   input2 = (input[2] - 654.888)/622.8;
   input3 = (input[3] - -52.9397)/809.478;
   input4 = (input[4] - 1065.99)/958.179;
   input5 = (input[5] - 900.135)/951.704;
   input6 = (input[6] - 911.989)/951.284;
   input7 = (input[7] - 926.87)/935.244;
   input8 = (input[8] - 911.66)/962.706;
   input9 = (input[9] - 889.549)/943.7;
   input10 = (input[10] - 980.152)/944.809;
   input11 = (input[11] - 713.572)/856.996;
   input12 = (input[12] - 720.318)/865.197;
   input13 = (input[13] - 505.419)/520.404;
   input14 = (input[14] - 467.181)/481.383;
   input15 = (input[15] - 727.174)/823.964;
   input16 = (input[16] - 541.552)/570.926;
   input17 = (input[17] - 445.722)/471.772;
   input18 = (input[18] - 740.893)/888.975;
   input19 = (input[19] - 794.044)/867.316;
   input20 = (input[20] - -7.36785)/489.184;
   input21 = (input[21] - 1.52007)/1158.61;
   input22 = (input[22] - 0.760012)/1208.68;
   input23 = (input[23] - -197.397)/608;
   switch(index) {
     case 0:
         return neuron0x2ffb4a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRdR::neuron0x2fc7560() {
   return input0;
}

double NNfunction_sb_uRdR::neuron0x2fc78a0() {
   return input1;
}

double NNfunction_sb_uRdR::neuron0x2fc7be0() {
   return input2;
}

double NNfunction_sb_uRdR::neuron0x2fc7f20() {
   return input3;
}

double NNfunction_sb_uRdR::neuron0x2fc8260() {
   return input4;
}

double NNfunction_sb_uRdR::neuron0x2fc85a0() {
   return input5;
}

double NNfunction_sb_uRdR::neuron0x2fc88e0() {
   return input6;
}

double NNfunction_sb_uRdR::neuron0x2fc8c20() {
   return input7;
}

double NNfunction_sb_uRdR::neuron0x2fc8f60() {
   return input8;
}

double NNfunction_sb_uRdR::neuron0x2fc92a0() {
   return input9;
}

double NNfunction_sb_uRdR::neuron0x2fc95e0() {
   return input10;
}

double NNfunction_sb_uRdR::neuron0x2fc9920() {
   return input11;
}

double NNfunction_sb_uRdR::neuron0x2fc9c60() {
   return input12;
}

double NNfunction_sb_uRdR::neuron0x2fc9fa0() {
   return input13;
}

double NNfunction_sb_uRdR::neuron0x2fca2e0() {
   return input14;
}

double NNfunction_sb_uRdR::neuron0x2fca620() {
   return input15;
}

double NNfunction_sb_uRdR::neuron0x2fca960() {
   return input16;
}

double NNfunction_sb_uRdR::neuron0x2fcaec0() {
   return input17;
}

double NNfunction_sb_uRdR::neuron0x2fcb0e0() {
   return input18;
}

double NNfunction_sb_uRdR::neuron0x2fcb420() {
   return input19;
}

double NNfunction_sb_uRdR::neuron0x2fcb760() {
   return input20;
}

double NNfunction_sb_uRdR::neuron0x2fcbaa0() {
   return input21;
}

double NNfunction_sb_uRdR::neuron0x2fcbde0() {
   return input22;
}

double NNfunction_sb_uRdR::neuron0x2fcc120() {
   return input23;
}

double NNfunction_sb_uRdR::input0x2fcc5c0() {
   double input = 1.03106;
   input += synapse0x2d873d0();
   input += synapse0x2fc7420();
   input += synapse0x2fc7460();
   input += synapse0x2fcc870();
   input += synapse0x2fcc8b0();
   input += synapse0x2fcc8f0();
   input += synapse0x2fcc930();
   input += synapse0x2fcc970();
   input += synapse0x2fcc9b0();
   input += synapse0x2fcc9f0();
   input += synapse0x2fcca30();
   input += synapse0x2fcca70();
   input += synapse0x2fccab0();
   input += synapse0x2fccaf0();
   input += synapse0x2fccb30();
   input += synapse0x2fccb70();
   input += synapse0x2fc7390();
   input += synapse0x2fc73d0();
   input += synapse0x2d78c70();
   input += synapse0x2d78cb0();
   input += synapse0x2fccdd0();
   input += synapse0x2fcce10();
   input += synapse0x2fcce50();
   input += synapse0x2fcce90();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fcc5c0() {
   double input = input0x2fcc5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fcced0() {
   double input = -0.0289275;
   input += synapse0x2fcd210();
   input += synapse0x2fcd250();
   input += synapse0x2fcd290();
   input += synapse0x2fcd2d0();
   input += synapse0x2fcd310();
   input += synapse0x2fcd350();
   input += synapse0x2fcd390();
   input += synapse0x2fcd3d0();
   input += synapse0x2fcd410();
   input += synapse0x2fcccc0();
   input += synapse0x2fccd00();
   input += synapse0x2fccd40();
   input += synapse0x2fccd80();
   input += synapse0x2fcd660();
   input += synapse0x2fcd6a0();
   input += synapse0x2fcd6e0();
   input += synapse0x2fcd060();
   input += synapse0x2fcd0a0();
   input += synapse0x2fcd830();
   input += synapse0x2fcd870();
   input += synapse0x2fcd8b0();
   input += synapse0x2fcd8f0();
   input += synapse0x2fcd930();
   input += synapse0x2fcd970();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fcced0() {
   double input = input0x2fcced0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fcd9b0() {
   double input = 1.93829;
   input += synapse0x2fcdcf0();
   input += synapse0x2fcdd30();
   input += synapse0x2fcdd70();
   input += synapse0x2fcddb0();
   input += synapse0x2fcddf0();
   input += synapse0x2fcde30();
   input += synapse0x2fcde70();
   input += synapse0x2fcdeb0();
   input += synapse0x2fcdef0();
   input += synapse0x2fcdf30();
   input += synapse0x2fcdf70();
   input += synapse0x2fcdfb0();
   input += synapse0x2fcdff0();
   input += synapse0x2fce030();
   input += synapse0x2fce070();
   input += synapse0x2fce0b0();
   input += synapse0x2fcdb40();
   input += synapse0x2fcdb80();
   input += synapse0x2d86ac0();
   input += synapse0x2d86b00();
   input += synapse0x2fb65f0();
   input += synapse0x2fb6630();
   input += synapse0x2fb6670();
   input += synapse0x2fc74a0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fcd9b0() {
   double input = input0x2fcd9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2d87240() {
   double input = 0.983192;
   input += synapse0x2fcd600();
   input += synapse0x2fc74e0();
   input += synapse0x2fc7520();
   input += synapse0x2fce200();
   input += synapse0x2fce240();
   input += synapse0x2fce280();
   input += synapse0x2fce2c0();
   input += synapse0x2fce300();
   input += synapse0x2fce340();
   input += synapse0x2fce380();
   input += synapse0x2fce3c0();
   input += synapse0x2fce400();
   input += synapse0x2fce440();
   input += synapse0x2fce480();
   input += synapse0x2fce4c0();
   input += synapse0x2fce500();
   input += synapse0x2fcd450();
   input += synapse0x2fcd490();
   input += synapse0x2fce650();
   input += synapse0x2fce690();
   input += synapse0x2fce6d0();
   input += synapse0x2fce710();
   input += synapse0x2fce750();
   input += synapse0x2fce790();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2d87240() {
   double input = input0x2d87240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fce7d0() {
   double input = 0.62074;
   input += synapse0x2fceb10();
   input += synapse0x2fceb50();
   input += synapse0x2fceb90();
   input += synapse0x2fcebd0();
   input += synapse0x2fcec10();
   input += synapse0x2fcec50();
   input += synapse0x2fcec90();
   input += synapse0x2fcecd0();
   input += synapse0x2fced10();
   input += synapse0x2fced50();
   input += synapse0x2fced90();
   input += synapse0x2fcedd0();
   input += synapse0x2fcee10();
   input += synapse0x2fcee50();
   input += synapse0x2fcee90();
   input += synapse0x2fceed0();
   input += synapse0x2fce960();
   input += synapse0x2fce9a0();
   input += synapse0x2fcf020();
   input += synapse0x2fcf060();
   input += synapse0x2fcf0a0();
   input += synapse0x2fcf0e0();
   input += synapse0x2fcf120();
   input += synapse0x2fcf160();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fce7d0() {
   double input = input0x2fce7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fcf1a0() {
   double input = -1.29;
   input += synapse0x2fcf4e0();
   input += synapse0x2fcf520();
   input += synapse0x2fcf560();
   input += synapse0x2fcf5a0();
   input += synapse0x2fcf5e0();
   input += synapse0x2fcf620();
   input += synapse0x2fcf660();
   input += synapse0x2fcf6a0();
   input += synapse0x2fcf6e0();
   input += synapse0x2d86e30();
   input += synapse0x2d86e70();
   input += synapse0x2d86eb0();
   input += synapse0x2d86ef0();
   input += synapse0x2d86f30();
   input += synapse0x2d86f70();
   input += synapse0x2d86fb0();
   input += synapse0x2fcf330();
   input += synapse0x2fcf370();
   input += synapse0x2d87100();
   input += synapse0x2d87140();
   input += synapse0x2d87180();
   input += synapse0x2d871c0();
   input += synapse0x2d87200();
   input += synapse0x2fcff30();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fcf1a0() {
   double input = input0x2fcf1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fcff70() {
   double input = 0.826718;
   input += synapse0x2fd02b0();
   input += synapse0x2fd02f0();
   input += synapse0x2fd0330();
   input += synapse0x2fd0370();
   input += synapse0x2fd03b0();
   input += synapse0x2fd03f0();
   input += synapse0x2fd0430();
   input += synapse0x2fd0470();
   input += synapse0x2fd04b0();
   input += synapse0x2fd04f0();
   input += synapse0x2fd0530();
   input += synapse0x2fd0570();
   input += synapse0x2fd05b0();
   input += synapse0x2fd05f0();
   input += synapse0x2fd0630();
   input += synapse0x2fd0670();
   input += synapse0x2fd0100();
   input += synapse0x2fd0140();
   input += synapse0x2fd07c0();
   input += synapse0x2fd0800();
   input += synapse0x2fd0840();
   input += synapse0x2fd0880();
   input += synapse0x2fd08c0();
   input += synapse0x2fd0900();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fcff70() {
   double input = input0x2fcff70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd0940() {
   double input = -1.03101;
   input += synapse0x2fd0c80();
   input += synapse0x2fd0cc0();
   input += synapse0x2fd0d00();
   input += synapse0x2fd0d40();
   input += synapse0x2fd0d80();
   input += synapse0x2fd0dc0();
   input += synapse0x2fd0e00();
   input += synapse0x2fd0e40();
   input += synapse0x2fd0e80();
   input += synapse0x2fd0ec0();
   input += synapse0x2fd0f00();
   input += synapse0x2fd0f40();
   input += synapse0x2fd0f80();
   input += synapse0x2fd0fc0();
   input += synapse0x2fd1000();
   input += synapse0x2fd1040();
   input += synapse0x2fd0ad0();
   input += synapse0x2fd0b10();
   input += synapse0x2fd1190();
   input += synapse0x2fd11d0();
   input += synapse0x2fd1210();
   input += synapse0x2fd1250();
   input += synapse0x2fd1290();
   input += synapse0x2fd12d0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd0940() {
   double input = input0x2fd0940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd1310() {
   double input = -1.42016;
   input += synapse0x2fcadb0();
   input += synapse0x2fcadf0();
   input += synapse0x2fcae30();
   input += synapse0x2fcae70();
   input += synapse0x2fd1860();
   input += synapse0x2fd18a0();
   input += synapse0x2fd18e0();
   input += synapse0x2fd1920();
   input += synapse0x2fd1960();
   input += synapse0x2fd19a0();
   input += synapse0x2fd19e0();
   input += synapse0x2fd1a20();
   input += synapse0x2fd1a60();
   input += synapse0x2fd1aa0();
   input += synapse0x2fd1ae0();
   input += synapse0x2fd1b20();
   input += synapse0x2fd14a0();
   input += synapse0x2fd14e0();
   input += synapse0x2fd1c70();
   input += synapse0x2fd1cb0();
   input += synapse0x2fd1cf0();
   input += synapse0x2fd1d30();
   input += synapse0x2fd1d70();
   input += synapse0x2fd1db0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd1310() {
   double input = input0x2fd1310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd1df0() {
   double input = -5.99202;
   input += synapse0x2fd2130();
   input += synapse0x2fd2170();
   input += synapse0x2fd21b0();
   input += synapse0x2fd21f0();
   input += synapse0x2fd2230();
   input += synapse0x2fd2270();
   input += synapse0x2fd22b0();
   input += synapse0x2fd22f0();
   input += synapse0x2fd2330();
   input += synapse0x2fd2370();
   input += synapse0x2fd23b0();
   input += synapse0x2fd23f0();
   input += synapse0x2fd2430();
   input += synapse0x2fd2470();
   input += synapse0x2fd24b0();
   input += synapse0x2fd24f0();
   input += synapse0x2fd1f80();
   input += synapse0x2fd1fc0();
   input += synapse0x2fd2640();
   input += synapse0x2fd2680();
   input += synapse0x2fd26c0();
   input += synapse0x2fd2700();
   input += synapse0x2fd2740();
   input += synapse0x2fd2780();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd1df0() {
   double input = input0x2fd1df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd27c0() {
   double input = 1.62047;
   input += synapse0x2fd2b00();
   input += synapse0x2fd2b40();
   input += synapse0x2fd2b80();
   input += synapse0x2fd2bc0();
   input += synapse0x2fd2c00();
   input += synapse0x2fd2c40();
   input += synapse0x2fd2c80();
   input += synapse0x2fd2cc0();
   input += synapse0x2fd2d00();
   input += synapse0x2fd2d40();
   input += synapse0x2fd2d80();
   input += synapse0x2fd2dc0();
   input += synapse0x2fd2e00();
   input += synapse0x2fd2e40();
   input += synapse0x2fd2e80();
   input += synapse0x2fd2ec0();
   input += synapse0x2fd2950();
   input += synapse0x2fd2990();
   input += synapse0x2fcf720();
   input += synapse0x2fcf760();
   input += synapse0x2fcf7a0();
   input += synapse0x2fcf7e0();
   input += synapse0x2fcf820();
   input += synapse0x2fcf860();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd27c0() {
   double input = input0x2fd27c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fcf8a0() {
   double input = -1.72858;
   input += synapse0x2fcfbe0();
   input += synapse0x2fcfc20();
   input += synapse0x2fcfc60();
   input += synapse0x2fcfca0();
   input += synapse0x2fcfce0();
   input += synapse0x2fcfd20();
   input += synapse0x2fcfd60();
   input += synapse0x2fcfda0();
   input += synapse0x2fcfde0();
   input += synapse0x2fcfe20();
   input += synapse0x2fcfe60();
   input += synapse0x2fcfea0();
   input += synapse0x2fcfee0();
   input += synapse0x2fd4020();
   input += synapse0x2fd4060();
   input += synapse0x2fd40a0();
   input += synapse0x2fcfa30();
   input += synapse0x2fcfa70();
   input += synapse0x2fd41f0();
   input += synapse0x2fd4230();
   input += synapse0x2fd4270();
   input += synapse0x2fd42b0();
   input += synapse0x2fd42f0();
   input += synapse0x2fd4330();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fcf8a0() {
   double input = input0x2fcf8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd4370() {
   double input = -0.297402;
   input += synapse0x2fd46b0();
   input += synapse0x2fd46f0();
   input += synapse0x2fd4730();
   input += synapse0x2fd4770();
   input += synapse0x2fd47b0();
   input += synapse0x2fd47f0();
   input += synapse0x2fd4830();
   input += synapse0x2fd4870();
   input += synapse0x2fd48b0();
   input += synapse0x2fd48f0();
   input += synapse0x2fd4930();
   input += synapse0x2fd4970();
   input += synapse0x2fd49b0();
   input += synapse0x2fd49f0();
   input += synapse0x2fd4a30();
   input += synapse0x2fd4a70();
   input += synapse0x2fd4500();
   input += synapse0x2fd4540();
   input += synapse0x2fd4bc0();
   input += synapse0x2fd4c00();
   input += synapse0x2fd4c40();
   input += synapse0x2fd4c80();
   input += synapse0x2fd4cc0();
   input += synapse0x2fd4d00();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd4370() {
   double input = input0x2fd4370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd4d40() {
   double input = 0.0417925;
   input += synapse0x2fd5080();
   input += synapse0x2fd50c0();
   input += synapse0x2fd5100();
   input += synapse0x2fd5140();
   input += synapse0x2fd5180();
   input += synapse0x2fd51c0();
   input += synapse0x2fd5200();
   input += synapse0x2fd5240();
   input += synapse0x2fd5280();
   input += synapse0x2fd52c0();
   input += synapse0x2fd5300();
   input += synapse0x2fd5340();
   input += synapse0x2fd5380();
   input += synapse0x2fd53c0();
   input += synapse0x2fd5400();
   input += synapse0x2fd5440();
   input += synapse0x2fd4ed0();
   input += synapse0x2fd4f10();
   input += synapse0x2fd5590();
   input += synapse0x2fd55d0();
   input += synapse0x2fd5610();
   input += synapse0x2fd5650();
   input += synapse0x2fd5690();
   input += synapse0x2fd56d0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd4d40() {
   double input = input0x2fd4d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd5710() {
   double input = -1.27078;
   input += synapse0x2fd5a50();
   input += synapse0x2fd5a90();
   input += synapse0x2fd5ad0();
   input += synapse0x2fd5b10();
   input += synapse0x2fd5b50();
   input += synapse0x2fd5b90();
   input += synapse0x2fd5bd0();
   input += synapse0x2fd5c10();
   input += synapse0x2fd5c50();
   input += synapse0x2fd5c90();
   input += synapse0x2fd5cd0();
   input += synapse0x2fd5d10();
   input += synapse0x2fd5d50();
   input += synapse0x2fd5d90();
   input += synapse0x2fd5dd0();
   input += synapse0x2fd5e10();
   input += synapse0x2fd58a0();
   input += synapse0x2fd58e0();
   input += synapse0x2fd5f60();
   input += synapse0x2fd5fa0();
   input += synapse0x2fd5fe0();
   input += synapse0x2fd6020();
   input += synapse0x2fd6060();
   input += synapse0x2fd60a0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd5710() {
   double input = input0x2fd5710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd60e0() {
   double input = -1.63573;
   input += synapse0x2fd6420();
   input += synapse0x2fc7780();
   input += synapse0x2fc77c0();
   input += synapse0x2fc7ac0();
   input += synapse0x2fc7b00();
   input += synapse0x2fc7e00();
   input += synapse0x2fc7e40();
   input += synapse0x2fc8140();
   input += synapse0x2fc8180();
   input += synapse0x2fc8480();
   input += synapse0x2fc84c0();
   input += synapse0x2fc87c0();
   input += synapse0x2fc8800();
   input += synapse0x2fc8b00();
   input += synapse0x2fc8b40();
   input += synapse0x2fc8e40();
   input += synapse0x2fc8e80();
   input += synapse0x2fc9180();
   input += synapse0x2fc91c0();
   input += synapse0x2fc94c0();
   input += synapse0x2fc9500();
   input += synapse0x2fc9800();
   input += synapse0x2fc9840();
   input += synapse0x2fc9b40();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd60e0() {
   double input = input0x2fd60e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd7ef0() {
   double input = -0.172635;
   input += synapse0x2fc9b80();
   input += synapse0x2fca840();
   input += synapse0x2fca880();
   input += synapse0x2fd6270();
   input += synapse0x2fd62b0();
   input += synapse0x2fcab80();
   input += synapse0x2fcabc0();
   input += synapse0x2d78b50();
   input += synapse0x2d78b90();
   input += synapse0x2fcb300();
   input += synapse0x2fcb340();
   input += synapse0x2fcb640();
   input += synapse0x2fcb680();
   input += synapse0x2fcb980();
   input += synapse0x2fcb9c0();
   input += synapse0x2fcbcc0();
   input += synapse0x2fcbd00();
   input += synapse0x2fcc000();
   input += synapse0x2fcc040();
   input += synapse0x2fcc340();
   input += synapse0x2fcc380();
   input += synapse0x2fc9e80();
   input += synapse0x2fc9ec0();
   input += synapse0x2fd8190();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd7ef0() {
   double input = input0x2fd7ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd81d0() {
   double input = -1.65508;
   input += synapse0x2fd8510();
   input += synapse0x2fd8550();
   input += synapse0x2fd8590();
   input += synapse0x2fd85d0();
   input += synapse0x2fd8610();
   input += synapse0x2fd8650();
   input += synapse0x2fd8690();
   input += synapse0x2fd86d0();
   input += synapse0x2fd8710();
   input += synapse0x2fd8750();
   input += synapse0x2fd8790();
   input += synapse0x2fd87d0();
   input += synapse0x2fd8810();
   input += synapse0x2fd8850();
   input += synapse0x2fd8890();
   input += synapse0x2fd88d0();
   input += synapse0x2fd8360();
   input += synapse0x2fd83a0();
   input += synapse0x2fd8a20();
   input += synapse0x2fd8a60();
   input += synapse0x2fd8aa0();
   input += synapse0x2fd8ae0();
   input += synapse0x2fd8b20();
   input += synapse0x2fd8b60();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd81d0() {
   double input = input0x2fd81d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd8ba0() {
   double input = 1.78347;
   input += synapse0x2fd8ee0();
   input += synapse0x2fd8f20();
   input += synapse0x2fd8f60();
   input += synapse0x2fd8fa0();
   input += synapse0x2fd8fe0();
   input += synapse0x2fd9020();
   input += synapse0x2fd9060();
   input += synapse0x2fd90a0();
   input += synapse0x2fd90e0();
   input += synapse0x2fd9120();
   input += synapse0x2fd9160();
   input += synapse0x2fd91a0();
   input += synapse0x2fd91e0();
   input += synapse0x2fd9220();
   input += synapse0x2fd9260();
   input += synapse0x2fd92a0();
   input += synapse0x2fd8d30();
   input += synapse0x2fd8d70();
   input += synapse0x2fd93f0();
   input += synapse0x2fd9430();
   input += synapse0x2fd9470();
   input += synapse0x2fd94b0();
   input += synapse0x2fd94f0();
   input += synapse0x2fd9530();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd8ba0() {
   double input = input0x2fd8ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd9570() {
   double input = 0.465105;
   input += synapse0x2fd98b0();
   input += synapse0x2fd98f0();
   input += synapse0x2fd9930();
   input += synapse0x2fd9970();
   input += synapse0x2fd99b0();
   input += synapse0x2fd99f0();
   input += synapse0x2fd9a30();
   input += synapse0x2fd9a70();
   input += synapse0x2fd9ab0();
   input += synapse0x2fd9af0();
   input += synapse0x2fd9b30();
   input += synapse0x2fd9b70();
   input += synapse0x2fd9bb0();
   input += synapse0x2fd9bf0();
   input += synapse0x2fd9c30();
   input += synapse0x2fd9c70();
   input += synapse0x2fd9700();
   input += synapse0x2fd9740();
   input += synapse0x2fd9dc0();
   input += synapse0x2fd9e00();
   input += synapse0x2fd9e40();
   input += synapse0x2fd9e80();
   input += synapse0x2fd9ec0();
   input += synapse0x2fd9f00();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd9570() {
   double input = input0x2fd9570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd9f40() {
   double input = 0.359121;
   input += synapse0x2fda280();
   input += synapse0x2fda2c0();
   input += synapse0x2fda300();
   input += synapse0x2fda340();
   input += synapse0x2fda380();
   input += synapse0x2fda3c0();
   input += synapse0x2fda400();
   input += synapse0x2fda440();
   input += synapse0x2fda480();
   input += synapse0x2fda4c0();
   input += synapse0x2fda500();
   input += synapse0x2fda540();
   input += synapse0x2fda580();
   input += synapse0x2fda5c0();
   input += synapse0x2fda600();
   input += synapse0x2fda640();
   input += synapse0x2fda0d0();
   input += synapse0x2fda110();
   input += synapse0x2fda790();
   input += synapse0x2fda7d0();
   input += synapse0x2fda810();
   input += synapse0x2fda850();
   input += synapse0x2fda890();
   input += synapse0x2fda8d0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd9f40() {
   double input = input0x2fd9f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fda910() {
   double input = -0.358334;
   input += synapse0x2fdac50();
   input += synapse0x2fdac90();
   input += synapse0x2fdacd0();
   input += synapse0x2fdad10();
   input += synapse0x2fdad50();
   input += synapse0x2fdad90();
   input += synapse0x2fdadd0();
   input += synapse0x2fdae10();
   input += synapse0x2fdae50();
   input += synapse0x2fd3010();
   input += synapse0x2fd3050();
   input += synapse0x2fd3090();
   input += synapse0x2fd30d0();
   input += synapse0x2fd3110();
   input += synapse0x2fd3150();
   input += synapse0x2fd3190();
   input += synapse0x2fdaaa0();
   input += synapse0x2fdaae0();
   input += synapse0x2fd32e0();
   input += synapse0x2fd3320();
   input += synapse0x2fd3360();
   input += synapse0x2fd33a0();
   input += synapse0x2fd33e0();
   input += synapse0x2fd3420();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fda910() {
   double input = input0x2fda910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd3460() {
   double input = -4.43101;
   input += synapse0x2fd37a0();
   input += synapse0x2fd37e0();
   input += synapse0x2fd3820();
   input += synapse0x2fd3860();
   input += synapse0x2fd38a0();
   input += synapse0x2fd38e0();
   input += synapse0x2fd3920();
   input += synapse0x2fd3960();
   input += synapse0x2fd39a0();
   input += synapse0x2fd39e0();
   input += synapse0x2fd3a20();
   input += synapse0x2fd3a60();
   input += synapse0x2fd3aa0();
   input += synapse0x2fd3ae0();
   input += synapse0x2fd3b20();
   input += synapse0x2fd3b60();
   input += synapse0x2fd35f0();
   input += synapse0x2fd3630();
   input += synapse0x2fd3cb0();
   input += synapse0x2fd3cf0();
   input += synapse0x2fd3d30();
   input += synapse0x2fd3d70();
   input += synapse0x2fd3db0();
   input += synapse0x2fd3df0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd3460() {
   double input = input0x2fd3460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd3e30() {
   double input = 1.53673;
   input += synapse0x2fd3fc0();
   input += synapse0x2fdd050();
   input += synapse0x2fdd090();
   input += synapse0x2fdd0d0();
   input += synapse0x2fdd110();
   input += synapse0x2fdd150();
   input += synapse0x2fdd190();
   input += synapse0x2fdd1d0();
   input += synapse0x2fdd210();
   input += synapse0x2fdd250();
   input += synapse0x2fdd290();
   input += synapse0x2fdd2d0();
   input += synapse0x2fdd310();
   input += synapse0x2fdd350();
   input += synapse0x2fdd390();
   input += synapse0x2fdd3d0();
   input += synapse0x2fdcea0();
   input += synapse0x2fdcee0();
   input += synapse0x2fdd520();
   input += synapse0x2fdd560();
   input += synapse0x2fdd5a0();
   input += synapse0x2fdd5e0();
   input += synapse0x2fdd620();
   input += synapse0x2fdd660();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd3e30() {
   double input = input0x2fd3e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fdd6a0() {
   double input = 0.0355874;
   input += synapse0x2fdd9e0();
   input += synapse0x2fdda20();
   input += synapse0x2fdda60();
   input += synapse0x2fddaa0();
   input += synapse0x2fddae0();
   input += synapse0x2fddb20();
   input += synapse0x2fddb60();
   input += synapse0x2fddba0();
   input += synapse0x2fddbe0();
   input += synapse0x2fddc20();
   input += synapse0x2fddc60();
   input += synapse0x2fddca0();
   input += synapse0x2fddce0();
   input += synapse0x2fddd20();
   input += synapse0x2fddd60();
   input += synapse0x2fddda0();
   input += synapse0x2fdd830();
   input += synapse0x2fdd870();
   input += synapse0x2fddef0();
   input += synapse0x2fddf30();
   input += synapse0x2fddf70();
   input += synapse0x2fddfb0();
   input += synapse0x2fddff0();
   input += synapse0x2fde030();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fdd6a0() {
   double input = input0x2fdd6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fde070() {
   double input = 0.285053;
   input += synapse0x2fde3b0();
   input += synapse0x2fde3f0();
   input += synapse0x2fde430();
   input += synapse0x2fde470();
   input += synapse0x2fde4b0();
   input += synapse0x2fde4f0();
   input += synapse0x2fde530();
   input += synapse0x2fde570();
   input += synapse0x2fde5b0();
   input += synapse0x2fde5f0();
   input += synapse0x2fde630();
   input += synapse0x2fde670();
   input += synapse0x2fde6b0();
   input += synapse0x2fde6f0();
   input += synapse0x2fde730();
   input += synapse0x2fde770();
   input += synapse0x2fde200();
   input += synapse0x2fde240();
   input += synapse0x2fde8c0();
   input += synapse0x2fde900();
   input += synapse0x2fde940();
   input += synapse0x2fde980();
   input += synapse0x2fde9c0();
   input += synapse0x2fdea00();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fde070() {
   double input = input0x2fde070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fdea40() {
   double input = 0.0782341;
   input += synapse0x2fded80();
   input += synapse0x2fdedc0();
   input += synapse0x2fdee00();
   input += synapse0x2fdee40();
   input += synapse0x2fdee80();
   input += synapse0x2fdeec0();
   input += synapse0x2fdef00();
   input += synapse0x2fdef40();
   input += synapse0x2fdef80();
   input += synapse0x2fdefc0();
   input += synapse0x2fdf000();
   input += synapse0x2fdf040();
   input += synapse0x2fdf080();
   input += synapse0x2fdf0c0();
   input += synapse0x2fdf100();
   input += synapse0x2fdf140();
   input += synapse0x2fdebd0();
   input += synapse0x2fdec10();
   input += synapse0x2fdf290();
   input += synapse0x2fdf2d0();
   input += synapse0x2fdf310();
   input += synapse0x2fdf350();
   input += synapse0x2fdf390();
   input += synapse0x2fdf3d0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fdea40() {
   double input = input0x2fdea40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fdf410() {
   double input = -0.605738;
   input += synapse0x2fdf750();
   input += synapse0x2fdf790();
   input += synapse0x2fdf7d0();
   input += synapse0x2fdf810();
   input += synapse0x2fdf850();
   input += synapse0x2fdf890();
   input += synapse0x2fdf8d0();
   input += synapse0x2fdf910();
   input += synapse0x2fdf950();
   input += synapse0x2fdf990();
   input += synapse0x2fdf9d0();
   input += synapse0x2fdfa10();
   input += synapse0x2fdfa50();
   input += synapse0x2fdfa90();
   input += synapse0x2fdfad0();
   input += synapse0x2fdfb10();
   input += synapse0x2fdf5a0();
   input += synapse0x2fdf5e0();
   input += synapse0x2fdfc60();
   input += synapse0x2fdfca0();
   input += synapse0x2fdfce0();
   input += synapse0x2fdfd20();
   input += synapse0x2fdfd60();
   input += synapse0x2fdfda0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fdf410() {
   double input = input0x2fdf410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fdfde0() {
   double input = 2.22492;
   input += synapse0x2fe0120();
   input += synapse0x2fe0160();
   input += synapse0x2fe01a0();
   input += synapse0x2fe01e0();
   input += synapse0x2fe0220();
   input += synapse0x2fe0260();
   input += synapse0x2fe02a0();
   input += synapse0x2fe02e0();
   input += synapse0x2fe0320();
   input += synapse0x2fe0360();
   input += synapse0x2fe03a0();
   input += synapse0x2fe03e0();
   input += synapse0x2fe0420();
   input += synapse0x2fe0460();
   input += synapse0x2fe04a0();
   input += synapse0x2fe04e0();
   input += synapse0x2fdff70();
   input += synapse0x2fdffb0();
   input += synapse0x2fe0630();
   input += synapse0x2fe0670();
   input += synapse0x2fe06b0();
   input += synapse0x2fe06f0();
   input += synapse0x2fe0730();
   input += synapse0x2fe0770();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fdfde0() {
   double input = input0x2fdfde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fe07b0() {
   double input = 1.17873;
   input += synapse0x2fe0af0();
   input += synapse0x2fe0b30();
   input += synapse0x2fe0b70();
   input += synapse0x2fe0bb0();
   input += synapse0x2fe0bf0();
   input += synapse0x2fe0c30();
   input += synapse0x2fe0c70();
   input += synapse0x2fe0cb0();
   input += synapse0x2fe0cf0();
   input += synapse0x2fe0d30();
   input += synapse0x2fe0d70();
   input += synapse0x2fe0db0();
   input += synapse0x2fe0df0();
   input += synapse0x2fe0e30();
   input += synapse0x2fe0e70();
   input += synapse0x2fe0eb0();
   input += synapse0x2fe0940();
   input += synapse0x2fe0980();
   input += synapse0x2fe1000();
   input += synapse0x2fe1040();
   input += synapse0x2fe1080();
   input += synapse0x2fe10c0();
   input += synapse0x2fe1100();
   input += synapse0x2fe1140();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fe07b0() {
   double input = input0x2fe07b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fe1180() {
   double input = 3.67025;
   input += synapse0x2fe14c0();
   input += synapse0x2fe1500();
   input += synapse0x2fe1540();
   input += synapse0x2fe1580();
   input += synapse0x2fe15c0();
   input += synapse0x2fe1600();
   input += synapse0x2fe1640();
   input += synapse0x2fe1680();
   input += synapse0x2fe16c0();
   input += synapse0x2fe1700();
   input += synapse0x2fe1740();
   input += synapse0x2fe1780();
   input += synapse0x2fe17c0();
   input += synapse0x2fe1800();
   input += synapse0x2fe1840();
   input += synapse0x2fe1880();
   input += synapse0x2fe1310();
   input += synapse0x2fe1350();
   input += synapse0x2fe19d0();
   input += synapse0x2fe1a10();
   input += synapse0x2fe1a50();
   input += synapse0x2fe1a90();
   input += synapse0x2fe1ad0();
   input += synapse0x2fe1b10();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fe1180() {
   double input = input0x2fe1180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fe1b50() {
   double input = -0.48026;
   input += synapse0x2fe1e90();
   input += synapse0x2fd6460();
   input += synapse0x2fd64a0();
   input += synapse0x2fd64e0();
   input += synapse0x2fd6730();
   input += synapse0x2fd6770();
   input += synapse0x2fd67b0();
   input += synapse0x2fd6a00();
   input += synapse0x2fd6a40();
   input += synapse0x2fd6c90();
   input += synapse0x2fd6cd0();
   input += synapse0x2fd6d10();
   input += synapse0x2fd6f60();
   input += synapse0x2fd6fa0();
   input += synapse0x2fd71f0();
   input += synapse0x2fd7230();
   input += synapse0x2fe1ce0();
   input += synapse0x2fe1d20();
   input += synapse0x2fd7380();
   input += synapse0x2fd7890();
   input += synapse0x2fd78d0();
   input += synapse0x2fd7910();
   input += synapse0x2fd7b60();
   input += synapse0x2fd7ba0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fe1b50() {
   double input = input0x2fe1b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fd7be0() {
   double input = 1.53666;
   input += synapse0x2fd7450();
   input += synapse0x2fd7490();
   input += synapse0x2fd74d0();
   input += synapse0x2fd7510();
   input += synapse0x2fd7e90();
   input += synapse0x2fe41e0();
   input += synapse0x2fe4220();
   input += synapse0x2fe4260();
   input += synapse0x2fe42a0();
   input += synapse0x2fe42e0();
   input += synapse0x2fe4320();
   input += synapse0x2fe4360();
   input += synapse0x2fe43a0();
   input += synapse0x2fe43e0();
   input += synapse0x2fe4420();
   input += synapse0x2fe4460();
   input += synapse0x2fd7d70();
   input += synapse0x2fd7db0();
   input += synapse0x2fe45b0();
   input += synapse0x2fe45f0();
   input += synapse0x2fe4630();
   input += synapse0x2fe4670();
   input += synapse0x2fe46b0();
   input += synapse0x2fe46f0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fd7be0() {
   double input = input0x2fd7be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fe4730() {
   double input = 0.532478;
   input += synapse0x2fe4a70();
   input += synapse0x2fe4ab0();
   input += synapse0x2fe4af0();
   input += synapse0x2fe4b30();
   input += synapse0x2fe4b70();
   input += synapse0x2fe4bb0();
   input += synapse0x2fe4bf0();
   input += synapse0x2fe4c30();
   input += synapse0x2fe4c70();
   input += synapse0x2fe4cb0();
   input += synapse0x2fe4cf0();
   input += synapse0x2fe4d30();
   input += synapse0x2fe4d70();
   input += synapse0x2fe4db0();
   input += synapse0x2fe4df0();
   input += synapse0x2fe4e30();
   input += synapse0x2fe48c0();
   input += synapse0x2fe4900();
   input += synapse0x2fe4f80();
   input += synapse0x2fe4fc0();
   input += synapse0x2fe5000();
   input += synapse0x2fe5040();
   input += synapse0x2fe5080();
   input += synapse0x2fe50c0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fe4730() {
   double input = input0x2fe4730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fe5100() {
   double input = 0.123612;
   input += synapse0x2fe5440();
   input += synapse0x2fe5480();
   input += synapse0x2fe54c0();
   input += synapse0x2fe5500();
   input += synapse0x2fe5540();
   input += synapse0x2fe5580();
   input += synapse0x2fe55c0();
   input += synapse0x2fe5600();
   input += synapse0x2fe5640();
   input += synapse0x2fe5680();
   input += synapse0x2fe56c0();
   input += synapse0x2fe5700();
   input += synapse0x2fe5740();
   input += synapse0x2fe5780();
   input += synapse0x2fe57c0();
   input += synapse0x2fe5800();
   input += synapse0x2fe5290();
   input += synapse0x2fe52d0();
   input += synapse0x2fe5950();
   input += synapse0x2fe5990();
   input += synapse0x2fe59d0();
   input += synapse0x2fe5a10();
   input += synapse0x2fe5a50();
   input += synapse0x2fe5a90();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fe5100() {
   double input = input0x2fe5100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fe5ad0() {
   double input = 3.23784;
   input += synapse0x2fe5e10();
   input += synapse0x2fe5e50();
   input += synapse0x2fe5e90();
   input += synapse0x2fe5ed0();
   input += synapse0x2fe5f10();
   input += synapse0x2fe5f50();
   input += synapse0x2fe5f90();
   input += synapse0x2fe5fd0();
   input += synapse0x2fe6010();
   input += synapse0x2fe6050();
   input += synapse0x2fe6090();
   input += synapse0x2fe60d0();
   input += synapse0x2fe6110();
   input += synapse0x2fe6150();
   input += synapse0x2fe6190();
   input += synapse0x2fe61d0();
   input += synapse0x2fe5c60();
   input += synapse0x2fe5ca0();
   input += synapse0x2fe6320();
   input += synapse0x2fe6360();
   input += synapse0x2fe63a0();
   input += synapse0x2fe63e0();
   input += synapse0x2fe6420();
   input += synapse0x2fe6460();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fe5ad0() {
   double input = input0x2fe5ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fe64a0() {
   double input = 0.0444219;
   input += synapse0x2fe67e0();
   input += synapse0x2fe6820();
   input += synapse0x2fe6860();
   input += synapse0x2fe68a0();
   input += synapse0x2fe68e0();
   input += synapse0x2fe6920();
   input += synapse0x2fe6960();
   input += synapse0x2fe69a0();
   input += synapse0x2fe69e0();
   input += synapse0x2fe6a20();
   input += synapse0x2fe6a60();
   input += synapse0x2fe6aa0();
   input += synapse0x2fe6ae0();
   input += synapse0x2fe6b20();
   input += synapse0x2fe6b60();
   input += synapse0x2fe6ba0();
   input += synapse0x2fe6630();
   input += synapse0x2fe6670();
   input += synapse0x2fe6cf0();
   input += synapse0x2fe6d30();
   input += synapse0x2fe6d70();
   input += synapse0x2fe6db0();
   input += synapse0x2fe6df0();
   input += synapse0x2fe6e30();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fe64a0() {
   double input = input0x2fe64a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fe6e70() {
   double input = -0.854569;
   input += synapse0x2fe71b0();
   input += synapse0x2fe71f0();
   input += synapse0x2fe7230();
   input += synapse0x2fe7270();
   input += synapse0x2fe72b0();
   input += synapse0x2fe72f0();
   input += synapse0x2fe7330();
   input += synapse0x2fe7370();
   input += synapse0x2fe73b0();
   input += synapse0x2fe73f0();
   input += synapse0x2fe7430();
   input += synapse0x2fe7470();
   input += synapse0x2fe74b0();
   input += synapse0x2fe74f0();
   input += synapse0x2fe7530();
   input += synapse0x2fe7570();
   input += synapse0x2fe7000();
   input += synapse0x2fe7040();
   input += synapse0x2fe76c0();
   input += synapse0x2fe7700();
   input += synapse0x2fe7740();
   input += synapse0x2fe7780();
   input += synapse0x2fe77c0();
   input += synapse0x2fe7800();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fe6e70() {
   double input = input0x2fe6e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fe7840() {
   double input = 0.193894;
   input += synapse0x2fe7b80();
   input += synapse0x2fe7bc0();
   input += synapse0x2fe7c00();
   input += synapse0x2fe7c40();
   input += synapse0x2fe7c80();
   input += synapse0x2fe7cc0();
   input += synapse0x2fe7d00();
   input += synapse0x2fe7d40();
   input += synapse0x2fe7d80();
   input += synapse0x2fe7dc0();
   input += synapse0x2fe7e00();
   input += synapse0x2fe7e40();
   input += synapse0x2fe7e80();
   input += synapse0x2fe7ec0();
   input += synapse0x2fe7f00();
   input += synapse0x2fe7f40();
   input += synapse0x2fe79d0();
   input += synapse0x2fe7a10();
   input += synapse0x2fe8090();
   input += synapse0x2fe80d0();
   input += synapse0x2fe8110();
   input += synapse0x2fe8150();
   input += synapse0x2fe8190();
   input += synapse0x2fe81d0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fe7840() {
   double input = input0x2fe7840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fe8210() {
   double input = 0.994677;
   input += synapse0x2fe8550();
   input += synapse0x2fe8590();
   input += synapse0x2fe85d0();
   input += synapse0x2fe8610();
   input += synapse0x2fe8650();
   input += synapse0x2fe8690();
   input += synapse0x2fe86d0();
   input += synapse0x2fe8710();
   input += synapse0x2fe8750();
   input += synapse0x2fe8790();
   input += synapse0x2fe87d0();
   input += synapse0x2fe8810();
   input += synapse0x2fe8850();
   input += synapse0x2fe8890();
   input += synapse0x2fe88d0();
   input += synapse0x2fe8910();
   input += synapse0x2fe83a0();
   input += synapse0x2fe83e0();
   input += synapse0x2fe8a60();
   input += synapse0x2fe8aa0();
   input += synapse0x2fe8ae0();
   input += synapse0x2fe8b20();
   input += synapse0x2fe8b60();
   input += synapse0x2fe8ba0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fe8210() {
   double input = input0x2fe8210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fe8be0() {
   double input = 0.86267;
   input += synapse0x2fd1650();
   input += synapse0x2fd1690();
   input += synapse0x2fd16d0();
   input += synapse0x2fd1710();
   input += synapse0x2fd1750();
   input += synapse0x2fd1790();
   input += synapse0x2fd17d0();
   input += synapse0x2fd1810();
   input += synapse0x2fe9330();
   input += synapse0x2fe9370();
   input += synapse0x2fe93b0();
   input += synapse0x2fe93f0();
   input += synapse0x2fe9430();
   input += synapse0x2fe9470();
   input += synapse0x2fe94b0();
   input += synapse0x2fe94f0();
   input += synapse0x2fe8d70();
   input += synapse0x2fe8db0();
   input += synapse0x2fe9640();
   input += synapse0x2fe9680();
   input += synapse0x2fe96c0();
   input += synapse0x2fe9700();
   input += synapse0x2fe9740();
   input += synapse0x2fe9780();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fe8be0() {
   double input = input0x2fe8be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fe97c0() {
   double input = 0.0527726;
   input += synapse0x2fe9b00();
   input += synapse0x2fe9b40();
   input += synapse0x2fe9b80();
   input += synapse0x2fe9bc0();
   input += synapse0x2fe9c00();
   input += synapse0x2fe9c40();
   input += synapse0x2fe9c80();
   input += synapse0x2fe9cc0();
   input += synapse0x2fe9d00();
   input += synapse0x2fe9d40();
   input += synapse0x2fe9d80();
   input += synapse0x2fe9dc0();
   input += synapse0x2fe9e00();
   input += synapse0x2fe9e40();
   input += synapse0x2fe9e80();
   input += synapse0x2fe9ec0();
   input += synapse0x2fe9950();
   input += synapse0x2fe9990();
   input += synapse0x2fea010();
   input += synapse0x2fea050();
   input += synapse0x2fea090();
   input += synapse0x2fea0d0();
   input += synapse0x2fea110();
   input += synapse0x2fea150();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fe97c0() {
   double input = input0x2fe97c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fea190() {
   double input = -1.51786;
   input += synapse0x2fea4d0();
   input += synapse0x2fea510();
   input += synapse0x2fea550();
   input += synapse0x2fea590();
   input += synapse0x2fea5d0();
   input += synapse0x2fea610();
   input += synapse0x2fea650();
   input += synapse0x2fea690();
   input += synapse0x2fea6d0();
   input += synapse0x2fea710();
   input += synapse0x2fea750();
   input += synapse0x2fea790();
   input += synapse0x2fea7d0();
   input += synapse0x2fea810();
   input += synapse0x2fea850();
   input += synapse0x2fea890();
   input += synapse0x2fea320();
   input += synapse0x2fea360();
   input += synapse0x2fdae90();
   input += synapse0x2fdaed0();
   input += synapse0x2fdaf10();
   input += synapse0x2fdaf50();
   input += synapse0x2fdaf90();
   input += synapse0x2fdafd0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fea190() {
   double input = input0x2fea190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fdb010() {
   double input = 1.14179;
   input += synapse0x2fdb350();
   input += synapse0x2fdb390();
   input += synapse0x2fdb3d0();
   input += synapse0x2fdb410();
   input += synapse0x2fdb450();
   input += synapse0x2fdb490();
   input += synapse0x2fdb4d0();
   input += synapse0x2fdb510();
   input += synapse0x2fdb550();
   input += synapse0x2fdb590();
   input += synapse0x2fdb5d0();
   input += synapse0x2fdb610();
   input += synapse0x2fdb650();
   input += synapse0x2fdb690();
   input += synapse0x2fdb6d0();
   input += synapse0x2fdb710();
   input += synapse0x2fdb1a0();
   input += synapse0x2fdb1e0();
   input += synapse0x2fdb860();
   input += synapse0x2fdb8a0();
   input += synapse0x2fdb8e0();
   input += synapse0x2fdb920();
   input += synapse0x2fdb960();
   input += synapse0x2fdb9a0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fdb010() {
   double input = input0x2fdb010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fdb9e0() {
   double input = 0.275446;
   input += synapse0x2fdbd20();
   input += synapse0x2fdbd60();
   input += synapse0x2fdbda0();
   input += synapse0x2fdbde0();
   input += synapse0x2fdbe20();
   input += synapse0x2fdbe60();
   input += synapse0x2fdbea0();
   input += synapse0x2fdbee0();
   input += synapse0x2fdbf20();
   input += synapse0x2fdbf60();
   input += synapse0x2fdbfa0();
   input += synapse0x2fdbfe0();
   input += synapse0x2fdc020();
   input += synapse0x2fdc060();
   input += synapse0x2fdc0a0();
   input += synapse0x2fdc0e0();
   input += synapse0x2fdbb70();
   input += synapse0x2fdbbb0();
   input += synapse0x2fdc230();
   input += synapse0x2fdc270();
   input += synapse0x2fdc2b0();
   input += synapse0x2fdc2f0();
   input += synapse0x2fdc330();
   input += synapse0x2fdc370();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fdb9e0() {
   double input = input0x2fdb9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fdc3b0() {
   double input = -2.96157;
   input += synapse0x2fdc6f0();
   input += synapse0x2fdc730();
   input += synapse0x2fdc770();
   input += synapse0x2fdc7b0();
   input += synapse0x2fdc7f0();
   input += synapse0x2fdc830();
   input += synapse0x2fdc870();
   input += synapse0x2fdc8b0();
   input += synapse0x2fdc8f0();
   input += synapse0x2fdc930();
   input += synapse0x2fdc970();
   input += synapse0x2fdc9b0();
   input += synapse0x2fdc9f0();
   input += synapse0x2fdca30();
   input += synapse0x2fdca70();
   input += synapse0x2fdcab0();
   input += synapse0x2fdc540();
   input += synapse0x2fdc580();
   input += synapse0x2fdcc00();
   input += synapse0x2fdcc40();
   input += synapse0x2fdcc80();
   input += synapse0x2fdccc0();
   input += synapse0x2fdcd00();
   input += synapse0x2fdcd40();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fdc3b0() {
   double input = input0x2fdc3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fee9f0() {
   double input = -0.354135;
   input += synapse0x2feec10();
   input += synapse0x2feec50();
   input += synapse0x2feec90();
   input += synapse0x2feecd0();
   input += synapse0x2feed10();
   input += synapse0x2feed50();
   input += synapse0x2feed90();
   input += synapse0x2feedd0();
   input += synapse0x2feee10();
   input += synapse0x2feee50();
   input += synapse0x2feee90();
   input += synapse0x2feeed0();
   input += synapse0x2feef10();
   input += synapse0x2feef50();
   input += synapse0x2feef90();
   input += synapse0x2feefd0();
   input += synapse0x2fdcd80();
   input += synapse0x2fdcdc0();
   input += synapse0x2fef120();
   input += synapse0x2fef160();
   input += synapse0x2fef1a0();
   input += synapse0x2fef1e0();
   input += synapse0x2fef220();
   input += synapse0x2fef260();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fee9f0() {
   double input = input0x2fee9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fef2a0() {
   double input = 0.490787;
   input += synapse0x2fef5e0();
   input += synapse0x2fef620();
   input += synapse0x2fef660();
   input += synapse0x2fef6a0();
   input += synapse0x2fef6e0();
   input += synapse0x2fef720();
   input += synapse0x2fef760();
   input += synapse0x2fef7a0();
   input += synapse0x2fef7e0();
   input += synapse0x2fef820();
   input += synapse0x2fef860();
   input += synapse0x2fef8a0();
   input += synapse0x2fef8e0();
   input += synapse0x2fef920();
   input += synapse0x2fef960();
   input += synapse0x2fef9a0();
   input += synapse0x2fef430();
   input += synapse0x2fef470();
   input += synapse0x2fefaf0();
   input += synapse0x2fefb30();
   input += synapse0x2fefb70();
   input += synapse0x2fefbb0();
   input += synapse0x2fefbf0();
   input += synapse0x2fefc30();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fef2a0() {
   double input = input0x2fef2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2fefc70() {
   double input = -0.327875;
   input += synapse0x2feffb0();
   input += synapse0x2fefff0();
   input += synapse0x2ff0030();
   input += synapse0x2ff0070();
   input += synapse0x2ff00b0();
   input += synapse0x2ff00f0();
   input += synapse0x2ff0130();
   input += synapse0x2ff0170();
   input += synapse0x2ff01b0();
   input += synapse0x2ff01f0();
   input += synapse0x2ff0230();
   input += synapse0x2ff0270();
   input += synapse0x2ff02b0();
   input += synapse0x2ff02f0();
   input += synapse0x2ff0330();
   input += synapse0x2ff0370();
   input += synapse0x2fefe00();
   input += synapse0x2fefe40();
   input += synapse0x2ff04c0();
   input += synapse0x2ff0500();
   input += synapse0x2ff0540();
   input += synapse0x2ff0580();
   input += synapse0x2ff05c0();
   input += synapse0x2ff0600();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2fefc70() {
   double input = input0x2fefc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2ff0640() {
   double input = 0.171951;
   input += synapse0x2ff0980();
   input += synapse0x2ff09c0();
   input += synapse0x2ff0a00();
   input += synapse0x2ff0a40();
   input += synapse0x2ff0a80();
   input += synapse0x2ff0ac0();
   input += synapse0x2ff0b00();
   input += synapse0x2ff0b40();
   input += synapse0x2ff0b80();
   input += synapse0x2ff0bc0();
   input += synapse0x2ff0c00();
   input += synapse0x2ff0c40();
   input += synapse0x2ff0c80();
   input += synapse0x2ff0cc0();
   input += synapse0x2ff0d00();
   input += synapse0x2ff0d40();
   input += synapse0x2ff07d0();
   input += synapse0x2ff0810();
   input += synapse0x2ff0e90();
   input += synapse0x2ff0ed0();
   input += synapse0x2ff0f10();
   input += synapse0x2ff0f50();
   input += synapse0x2ff0f90();
   input += synapse0x2ff0fd0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2ff0640() {
   double input = input0x2ff0640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2ff7840() {
   double input = 0.656615;
   input += synapse0x2fcd570();
   input += synapse0x2fcd5b0();
   input += synapse0x2fcea80();
   input += synapse0x2fceac0();
   input += synapse0x2fcf450();
   input += synapse0x2fcf490();
   input += synapse0x2fd0220();
   input += synapse0x2fd0260();
   input += synapse0x2fd0bf0();
   input += synapse0x2fd0c30();
   input += synapse0x2fd15c0();
   input += synapse0x2fd1600();
   input += synapse0x2fd20a0();
   input += synapse0x2fd20e0();
   input += synapse0x2fd2a70();
   input += synapse0x2fd2ab0();
   input += synapse0x2fcfb50();
   input += synapse0x2fcfb90();
   input += synapse0x2fd4620();
   input += synapse0x2fd4660();
   input += synapse0x2fd4ff0();
   input += synapse0x2fd5030();
   input += synapse0x2fd59c0();
   input += synapse0x2fd5a00();
   input += synapse0x2fd6390();
   input += synapse0x2fd63d0();
   input += synapse0x2fca500();
   input += synapse0x2fca540();
   input += synapse0x2fd8480();
   input += synapse0x2fd84c0();
   input += synapse0x2fd8e50();
   input += synapse0x2fd8e90();
   input += synapse0x2fd9820();
   input += synapse0x2fd9860();
   input += synapse0x2fda1f0();
   input += synapse0x2fda230();
   input += synapse0x2fdabc0();
   input += synapse0x2fdac00();
   input += synapse0x2fd3710();
   input += synapse0x2fd3750();
   input += synapse0x2fdcfc0();
   input += synapse0x2fdd000();
   input += synapse0x2fdd950();
   input += synapse0x2fdd990();
   input += synapse0x2fde320();
   input += synapse0x2fde360();
   input += synapse0x2fdecf0();
   input += synapse0x2fded30();
   input += synapse0x2fdf6c0();
   input += synapse0x2fdf700();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2ff7840() {
   double input = input0x2ff7840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2ff7be0() {
   double input = 0.0849399;
   input += synapse0x2fe1e00();
   input += synapse0x2fe1e40();
   input += synapse0x2fd73c0();
   input += synapse0x2fd7400();
   input += synapse0x2fe49e0();
   input += synapse0x2fe4a20();
   input += synapse0x2fe53b0();
   input += synapse0x2fe53f0();
   input += synapse0x2fe5d80();
   input += synapse0x2fe5dc0();
   input += synapse0x2fe6750();
   input += synapse0x2fe6790();
   input += synapse0x2fe7120();
   input += synapse0x2fe7160();
   input += synapse0x2fe7af0();
   input += synapse0x2fe7b30();
   input += synapse0x2fe84c0();
   input += synapse0x2fe8500();
   input += synapse0x2fe8e90();
   input += synapse0x2fe8ed0();
   input += synapse0x2fe9a70();
   input += synapse0x2fe9ab0();
   input += synapse0x2fea440();
   input += synapse0x2fea480();
   input += synapse0x2fdb2c0();
   input += synapse0x2fdb300();
   input += synapse0x2fdbc90();
   input += synapse0x2fdbcd0();
   input += synapse0x2fdc660();
   input += synapse0x2fdc6a0();
   input += synapse0x2feeb80();
   input += synapse0x2feebc0();
   input += synapse0x2fef550();
   input += synapse0x2fef590();
   input += synapse0x2feff20();
   input += synapse0x2feff60();
   input += synapse0x2ff08f0();
   input += synapse0x2ff0930();
   input += synapse0x2fcc7e0();
   input += synapse0x2fcc820();
   input += synapse0x2fe0090();
   input += synapse0x2fe00d0();
   input += synapse0x2ff1010();
   input += synapse0x2ff1050();
   input += synapse0x2ff1090();
   input += synapse0x2ff10d0();
   input += synapse0x2ff7f80();
   input += synapse0x2ff7fc0();
   input += synapse0x2ff8000();
   input += synapse0x2ff8040();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2ff7be0() {
   double input = input0x2ff7be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2ff8080() {
   double input = -0.497783;
   input += synapse0x2ff83c0();
   input += synapse0x2ff8400();
   input += synapse0x2ff8440();
   input += synapse0x2ff8480();
   input += synapse0x2ff84c0();
   input += synapse0x2ff8500();
   input += synapse0x2ff8540();
   input += synapse0x2ff8580();
   input += synapse0x2ff85c0();
   input += synapse0x2ff8600();
   input += synapse0x2ff8640();
   input += synapse0x2ff8680();
   input += synapse0x2ff86c0();
   input += synapse0x2ff8700();
   input += synapse0x2ff8740();
   input += synapse0x2ff8780();
   input += synapse0x2ff8210();
   input += synapse0x2ff8250();
   input += synapse0x2ff88d0();
   input += synapse0x2ff8910();
   input += synapse0x2ff8950();
   input += synapse0x2ff8990();
   input += synapse0x2ff89d0();
   input += synapse0x2ff8a10();
   input += synapse0x2ff8a50();
   input += synapse0x2ff8a90();
   input += synapse0x2ff8ad0();
   input += synapse0x2ff8b10();
   input += synapse0x2ff8b50();
   input += synapse0x2ff8b90();
   input += synapse0x2ff8bd0();
   input += synapse0x2ff8c10();
   input += synapse0x2ff87c0();
   input += synapse0x2ff8800();
   input += synapse0x2ff8840();
   input += synapse0x2ff8880();
   input += synapse0x2ff8e60();
   input += synapse0x2ff8ea0();
   input += synapse0x2ff8ee0();
   input += synapse0x2ff8f20();
   input += synapse0x2ff8f60();
   input += synapse0x2ff8fa0();
   input += synapse0x2ff8fe0();
   input += synapse0x2ff9020();
   input += synapse0x2ff9060();
   input += synapse0x2ff90a0();
   input += synapse0x2ff90e0();
   input += synapse0x2ff9120();
   input += synapse0x2ff9160();
   input += synapse0x2ff91a0();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2ff8080() {
   double input = input0x2ff8080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2ff91e0() {
   double input = -0.621695;
   input += synapse0x2ff9520();
   input += synapse0x2ff9560();
   input += synapse0x2ff95a0();
   input += synapse0x2ff95e0();
   input += synapse0x2ff9620();
   input += synapse0x2ff9660();
   input += synapse0x2ff96a0();
   input += synapse0x2ff96e0();
   input += synapse0x2ff9720();
   input += synapse0x2ff9760();
   input += synapse0x2ff97a0();
   input += synapse0x2ff97e0();
   input += synapse0x2ff9820();
   input += synapse0x2ff9860();
   input += synapse0x2ff98a0();
   input += synapse0x2ff98e0();
   input += synapse0x2ff9370();
   input += synapse0x2ff93b0();
   input += synapse0x2ff9a30();
   input += synapse0x2ff9a70();
   input += synapse0x2ff9ab0();
   input += synapse0x2ff9af0();
   input += synapse0x2ff9b30();
   input += synapse0x2ff9b70();
   input += synapse0x2ff9bb0();
   input += synapse0x2ff9bf0();
   input += synapse0x2ff9c30();
   input += synapse0x2ff9c70();
   input += synapse0x2ff9cb0();
   input += synapse0x2ff9cf0();
   input += synapse0x2ff9d30();
   input += synapse0x2ff9d70();
   input += synapse0x2ff9920();
   input += synapse0x2ff9960();
   input += synapse0x2ff99a0();
   input += synapse0x2ff99e0();
   input += synapse0x2ff9fc0();
   input += synapse0x2ffa000();
   input += synapse0x2ffa040();
   input += synapse0x2ffa080();
   input += synapse0x2ffa0c0();
   input += synapse0x2ffa100();
   input += synapse0x2ffa140();
   input += synapse0x2ffa180();
   input += synapse0x2ffa1c0();
   input += synapse0x2ffa200();
   input += synapse0x2ffa240();
   input += synapse0x2ffa280();
   input += synapse0x2ffa2c0();
   input += synapse0x2ffa300();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2ff91e0() {
   double input = input0x2ff91e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2ffa340() {
   double input = 0.0138161;
   input += synapse0x2ffa680();
   input += synapse0x2ffa6c0();
   input += synapse0x2ffa700();
   input += synapse0x2ffa740();
   input += synapse0x2ffa780();
   input += synapse0x2ffa7c0();
   input += synapse0x2ffa800();
   input += synapse0x2ffa840();
   input += synapse0x2ffa880();
   input += synapse0x2ffa8c0();
   input += synapse0x2ffa900();
   input += synapse0x2ffa940();
   input += synapse0x2ffa980();
   input += synapse0x2ffa9c0();
   input += synapse0x2ffaa00();
   input += synapse0x2ffaa40();
   input += synapse0x2ffa4d0();
   input += synapse0x2ffa510();
   input += synapse0x2ffab90();
   input += synapse0x2ffabd0();
   input += synapse0x2ffac10();
   input += synapse0x2ffac50();
   input += synapse0x2ffac90();
   input += synapse0x2ffacd0();
   input += synapse0x2ffad10();
   input += synapse0x2ffad50();
   input += synapse0x2ffad90();
   input += synapse0x2ffadd0();
   input += synapse0x2ffae10();
   input += synapse0x2ffae50();
   input += synapse0x2ffae90();
   input += synapse0x2ffaed0();
   input += synapse0x2ffaa80();
   input += synapse0x2ffaac0();
   input += synapse0x2ffab00();
   input += synapse0x2ffab40();
   input += synapse0x2ffb120();
   input += synapse0x2ffb160();
   input += synapse0x2ffb1a0();
   input += synapse0x2ffb1e0();
   input += synapse0x2ffb220();
   input += synapse0x2ffb260();
   input += synapse0x2ffb2a0();
   input += synapse0x2ffb2e0();
   input += synapse0x2ffb320();
   input += synapse0x2ffb360();
   input += synapse0x2ffb3a0();
   input += synapse0x2ffb3e0();
   input += synapse0x2ffb420();
   input += synapse0x2ffb460();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2ffa340() {
   double input = input0x2ffa340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRdR::input0x2ffb4a0() {
   double input = 7.96834;
   input += synapse0x2fcc580();
   input += synapse0x2ffb6c0();
   input += synapse0x2ffb700();
   input += synapse0x2ffb740();
   input += synapse0x2ffb780();
   return input;
}

double NNfunction_sb_uRdR::neuron0x2ffb4a0() {
   double input = input0x2ffb4a0();
   return (input * 1)+0;
}

double NNfunction_sb_uRdR::synapse0x2d873d0() {
   return (neuron0x2fc7560()*-0.144617);
}

double NNfunction_sb_uRdR::synapse0x2fc7420() {
   return (neuron0x2fc78a0()*0.135496);
}

double NNfunction_sb_uRdR::synapse0x2fc7460() {
   return (neuron0x2fc7be0()*0.0740285);
}

double NNfunction_sb_uRdR::synapse0x2fcc870() {
   return (neuron0x2fc7f20()*-0.154572);
}

double NNfunction_sb_uRdR::synapse0x2fcc8b0() {
   return (neuron0x2fc8260()*-0.447073);
}

double NNfunction_sb_uRdR::synapse0x2fcc8f0() {
   return (neuron0x2fc85a0()*0.224905);
}

double NNfunction_sb_uRdR::synapse0x2fcc930() {
   return (neuron0x2fc88e0()*0.284819);
}

double NNfunction_sb_uRdR::synapse0x2fcc970() {
   return (neuron0x2fc8c20()*0.382896);
}

double NNfunction_sb_uRdR::synapse0x2fcc9b0() {
   return (neuron0x2fc8f60()*-0.442476);
}

double NNfunction_sb_uRdR::synapse0x2fcc9f0() {
   return (neuron0x2fc92a0()*0.0680264);
}

double NNfunction_sb_uRdR::synapse0x2fcca30() {
   return (neuron0x2fc95e0()*-0.664822);
}

double NNfunction_sb_uRdR::synapse0x2fcca70() {
   return (neuron0x2fc9920()*-0.360371);
}

double NNfunction_sb_uRdR::synapse0x2fccab0() {
   return (neuron0x2fc9c60()*0.315703);
}

double NNfunction_sb_uRdR::synapse0x2fccaf0() {
   return (neuron0x2fc9fa0()*0.167734);
}

double NNfunction_sb_uRdR::synapse0x2fccb30() {
   return (neuron0x2fca2e0()*1.34302);
}

double NNfunction_sb_uRdR::synapse0x2fccb70() {
   return (neuron0x2fca620()*0.185926);
}

double NNfunction_sb_uRdR::synapse0x2fc7390() {
   return (neuron0x2fca960()*0.872982);
}

double NNfunction_sb_uRdR::synapse0x2fc73d0() {
   return (neuron0x2fcaec0()*1.01512);
}

double NNfunction_sb_uRdR::synapse0x2d78c70() {
   return (neuron0x2fcb0e0()*1.27376);
}

double NNfunction_sb_uRdR::synapse0x2d78cb0() {
   return (neuron0x2fcb420()*0.0624753);
}

double NNfunction_sb_uRdR::synapse0x2fccdd0() {
   return (neuron0x2fcb760()*-0.429453);
}

double NNfunction_sb_uRdR::synapse0x2fcce10() {
   return (neuron0x2fcbaa0()*-0.0854883);
}

double NNfunction_sb_uRdR::synapse0x2fcce50() {
   return (neuron0x2fcbde0()*-0.0794704);
}

double NNfunction_sb_uRdR::synapse0x2fcce90() {
   return (neuron0x2fcc120()*-0.0809207);
}

double NNfunction_sb_uRdR::synapse0x2fcd210() {
   return (neuron0x2fc7560()*-0.718314);
}

double NNfunction_sb_uRdR::synapse0x2fcd250() {
   return (neuron0x2fc78a0()*0.240361);
}

double NNfunction_sb_uRdR::synapse0x2fcd290() {
   return (neuron0x2fc7be0()*-0.634437);
}

double NNfunction_sb_uRdR::synapse0x2fcd2d0() {
   return (neuron0x2fc7f20()*-0.679781);
}

double NNfunction_sb_uRdR::synapse0x2fcd310() {
   return (neuron0x2fc8260()*-0.0149194);
}

double NNfunction_sb_uRdR::synapse0x2fcd350() {
   return (neuron0x2fc85a0()*0.794968);
}

double NNfunction_sb_uRdR::synapse0x2fcd390() {
   return (neuron0x2fc88e0()*0.395794);
}

double NNfunction_sb_uRdR::synapse0x2fcd3d0() {
   return (neuron0x2fc8c20()*0.890813);
}

double NNfunction_sb_uRdR::synapse0x2fcd410() {
   return (neuron0x2fc8f60()*-0.222044);
}

double NNfunction_sb_uRdR::synapse0x2fcccc0() {
   return (neuron0x2fc92a0()*0.347098);
}

double NNfunction_sb_uRdR::synapse0x2fccd00() {
   return (neuron0x2fc95e0()*-0.605636);
}

double NNfunction_sb_uRdR::synapse0x2fccd40() {
   return (neuron0x2fc9920()*-0.609732);
}

double NNfunction_sb_uRdR::synapse0x2fccd80() {
   return (neuron0x2fc9c60()*-1.25874);
}

double NNfunction_sb_uRdR::synapse0x2fcd660() {
   return (neuron0x2fc9fa0()*-0.623725);
}

double NNfunction_sb_uRdR::synapse0x2fcd6a0() {
   return (neuron0x2fca2e0()*-0.359123);
}

double NNfunction_sb_uRdR::synapse0x2fcd6e0() {
   return (neuron0x2fca620()*0.160904);
}

double NNfunction_sb_uRdR::synapse0x2fcd060() {
   return (neuron0x2fca960()*0.182201);
}

double NNfunction_sb_uRdR::synapse0x2fcd0a0() {
   return (neuron0x2fcaec0()*0.225029);
}

double NNfunction_sb_uRdR::synapse0x2fcd830() {
   return (neuron0x2fcb0e0()*-0.0454398);
}

double NNfunction_sb_uRdR::synapse0x2fcd870() {
   return (neuron0x2fcb420()*0.538691);
}

double NNfunction_sb_uRdR::synapse0x2fcd8b0() {
   return (neuron0x2fcb760()*0.304169);
}

double NNfunction_sb_uRdR::synapse0x2fcd8f0() {
   return (neuron0x2fcbaa0()*0.015402);
}

double NNfunction_sb_uRdR::synapse0x2fcd930() {
   return (neuron0x2fcbde0()*0.313488);
}

double NNfunction_sb_uRdR::synapse0x2fcd970() {
   return (neuron0x2fcc120()*0.209184);
}

double NNfunction_sb_uRdR::synapse0x2fcdcf0() {
   return (neuron0x2fc7560()*-0.193632);
}

double NNfunction_sb_uRdR::synapse0x2fcdd30() {
   return (neuron0x2fc78a0()*-0.28815);
}

double NNfunction_sb_uRdR::synapse0x2fcdd70() {
   return (neuron0x2fc7be0()*-0.0267845);
}

double NNfunction_sb_uRdR::synapse0x2fcddb0() {
   return (neuron0x2fc7f20()*0.997123);
}

double NNfunction_sb_uRdR::synapse0x2fcddf0() {
   return (neuron0x2fc8260()*-0.0988858);
}

double NNfunction_sb_uRdR::synapse0x2fcde30() {
   return (neuron0x2fc85a0()*0.258789);
}

double NNfunction_sb_uRdR::synapse0x2fcde70() {
   return (neuron0x2fc88e0()*0.0597673);
}

double NNfunction_sb_uRdR::synapse0x2fcdeb0() {
   return (neuron0x2fc8c20()*-0.0118456);
}

double NNfunction_sb_uRdR::synapse0x2fcdef0() {
   return (neuron0x2fc8f60()*-0.0349776);
}

double NNfunction_sb_uRdR::synapse0x2fcdf30() {
   return (neuron0x2fc92a0()*0.0444896);
}

double NNfunction_sb_uRdR::synapse0x2fcdf70() {
   return (neuron0x2fc95e0()*-0.0624715);
}

double NNfunction_sb_uRdR::synapse0x2fcdfb0() {
   return (neuron0x2fc9920()*0.0344168);
}

double NNfunction_sb_uRdR::synapse0x2fcdff0() {
   return (neuron0x2fc9c60()*0.424065);
}

double NNfunction_sb_uRdR::synapse0x2fce030() {
   return (neuron0x2fc9fa0()*-0.185665);
}

double NNfunction_sb_uRdR::synapse0x2fce070() {
   return (neuron0x2fca2e0()*0.34091);
}

double NNfunction_sb_uRdR::synapse0x2fce0b0() {
   return (neuron0x2fca620()*0.0949698);
}

double NNfunction_sb_uRdR::synapse0x2fcdb40() {
   return (neuron0x2fca960()*-0.111404);
}

double NNfunction_sb_uRdR::synapse0x2fcdb80() {
   return (neuron0x2fcaec0()*0.590646);
}

double NNfunction_sb_uRdR::synapse0x2d86ac0() {
   return (neuron0x2fcb0e0()*0.283798);
}

double NNfunction_sb_uRdR::synapse0x2d86b00() {
   return (neuron0x2fcb420()*-0.179662);
}

double NNfunction_sb_uRdR::synapse0x2fb65f0() {
   return (neuron0x2fcb760()*-0.121872);
}

double NNfunction_sb_uRdR::synapse0x2fb6630() {
   return (neuron0x2fcbaa0()*0.250651);
}

double NNfunction_sb_uRdR::synapse0x2fb6670() {
   return (neuron0x2fcbde0()*0.123329);
}

double NNfunction_sb_uRdR::synapse0x2fc74a0() {
   return (neuron0x2fcc120()*-0.0918931);
}

double NNfunction_sb_uRdR::synapse0x2fcd600() {
   return (neuron0x2fc7560()*0.000133177);
}

double NNfunction_sb_uRdR::synapse0x2fc74e0() {
   return (neuron0x2fc78a0()*0.0371496);
}

double NNfunction_sb_uRdR::synapse0x2fc7520() {
   return (neuron0x2fc7be0()*-0.00750714);
}

double NNfunction_sb_uRdR::synapse0x2fce200() {
   return (neuron0x2fc7f20()*3.47383);
}

double NNfunction_sb_uRdR::synapse0x2fce240() {
   return (neuron0x2fc8260()*-0.0234276);
}

double NNfunction_sb_uRdR::synapse0x2fce280() {
   return (neuron0x2fc85a0()*-0.0175079);
}

double NNfunction_sb_uRdR::synapse0x2fce2c0() {
   return (neuron0x2fc88e0()*-0.0367789);
}

double NNfunction_sb_uRdR::synapse0x2fce300() {
   return (neuron0x2fc8c20()*0.0045611);
}

double NNfunction_sb_uRdR::synapse0x2fce340() {
   return (neuron0x2fc8f60()*-0.0174791);
}

double NNfunction_sb_uRdR::synapse0x2fce380() {
   return (neuron0x2fc92a0()*0.0276778);
}

double NNfunction_sb_uRdR::synapse0x2fce3c0() {
   return (neuron0x2fc95e0()*0.0395757);
}

double NNfunction_sb_uRdR::synapse0x2fce400() {
   return (neuron0x2fc9920()*-0.0348664);
}

double NNfunction_sb_uRdR::synapse0x2fce440() {
   return (neuron0x2fc9c60()*-0.00964267);
}

double NNfunction_sb_uRdR::synapse0x2fce480() {
   return (neuron0x2fc9fa0()*-0.026235);
}

double NNfunction_sb_uRdR::synapse0x2fce4c0() {
   return (neuron0x2fca2e0()*-0.141274);
}

double NNfunction_sb_uRdR::synapse0x2fce500() {
   return (neuron0x2fca620()*-0.00870063);
}

double NNfunction_sb_uRdR::synapse0x2fcd450() {
   return (neuron0x2fca960()*0.00987574);
}

double NNfunction_sb_uRdR::synapse0x2fcd490() {
   return (neuron0x2fcaec0()*-0.186441);
}

double NNfunction_sb_uRdR::synapse0x2fce650() {
   return (neuron0x2fcb0e0()*0.018046);
}

double NNfunction_sb_uRdR::synapse0x2fce690() {
   return (neuron0x2fcb420()*0.0507133);
}

double NNfunction_sb_uRdR::synapse0x2fce6d0() {
   return (neuron0x2fcb760()*-0.0165403);
}

double NNfunction_sb_uRdR::synapse0x2fce710() {
   return (neuron0x2fcbaa0()*-0.0345979);
}

double NNfunction_sb_uRdR::synapse0x2fce750() {
   return (neuron0x2fcbde0()*-0.0135435);
}

double NNfunction_sb_uRdR::synapse0x2fce790() {
   return (neuron0x2fcc120()*0.0304788);
}

double NNfunction_sb_uRdR::synapse0x2fceb10() {
   return (neuron0x2fc7560()*0.107647);
}

double NNfunction_sb_uRdR::synapse0x2fceb50() {
   return (neuron0x2fc78a0()*0.208904);
}

double NNfunction_sb_uRdR::synapse0x2fceb90() {
   return (neuron0x2fc7be0()*-0.0782533);
}

double NNfunction_sb_uRdR::synapse0x2fcebd0() {
   return (neuron0x2fc7f20()*-0.842677);
}

double NNfunction_sb_uRdR::synapse0x2fcec10() {
   return (neuron0x2fc8260()*-0.120683);
}

double NNfunction_sb_uRdR::synapse0x2fcec50() {
   return (neuron0x2fc85a0()*-0.37633);
}

double NNfunction_sb_uRdR::synapse0x2fcec90() {
   return (neuron0x2fc88e0()*0.184088);
}

double NNfunction_sb_uRdR::synapse0x2fcecd0() {
   return (neuron0x2fc8c20()*-0.567417);
}

double NNfunction_sb_uRdR::synapse0x2fced10() {
   return (neuron0x2fc8f60()*0.767307);
}

double NNfunction_sb_uRdR::synapse0x2fced50() {
   return (neuron0x2fc92a0()*0.124055);
}

double NNfunction_sb_uRdR::synapse0x2fced90() {
   return (neuron0x2fc95e0()*0.138902);
}

double NNfunction_sb_uRdR::synapse0x2fcedd0() {
   return (neuron0x2fc9920()*0.158888);
}

double NNfunction_sb_uRdR::synapse0x2fcee10() {
   return (neuron0x2fc9c60()*-0.135511);
}

double NNfunction_sb_uRdR::synapse0x2fcee50() {
   return (neuron0x2fc9fa0()*-0.0695861);
}

double NNfunction_sb_uRdR::synapse0x2fcee90() {
   return (neuron0x2fca2e0()*0.0376655);
}

double NNfunction_sb_uRdR::synapse0x2fceed0() {
   return (neuron0x2fca620()*0.221265);
}

double NNfunction_sb_uRdR::synapse0x2fce960() {
   return (neuron0x2fca960()*0.177999);
}

double NNfunction_sb_uRdR::synapse0x2fce9a0() {
   return (neuron0x2fcaec0()*0.589229);
}

double NNfunction_sb_uRdR::synapse0x2fcf020() {
   return (neuron0x2fcb0e0()*-0.143405);
}

double NNfunction_sb_uRdR::synapse0x2fcf060() {
   return (neuron0x2fcb420()*0.0180192);
}

double NNfunction_sb_uRdR::synapse0x2fcf0a0() {
   return (neuron0x2fcb760()*0.295135);
}

double NNfunction_sb_uRdR::synapse0x2fcf0e0() {
   return (neuron0x2fcbaa0()*-0.00273);
}

double NNfunction_sb_uRdR::synapse0x2fcf120() {
   return (neuron0x2fcbde0()*-0.458641);
}

double NNfunction_sb_uRdR::synapse0x2fcf160() {
   return (neuron0x2fcc120()*-0.138551);
}

double NNfunction_sb_uRdR::synapse0x2fcf4e0() {
   return (neuron0x2fc7560()*-0.0209004);
}

double NNfunction_sb_uRdR::synapse0x2fcf520() {
   return (neuron0x2fc78a0()*-0.143338);
}

double NNfunction_sb_uRdR::synapse0x2fcf560() {
   return (neuron0x2fc7be0()*-0.0361346);
}

double NNfunction_sb_uRdR::synapse0x2fcf5a0() {
   return (neuron0x2fc7f20()*0.855981);
}

double NNfunction_sb_uRdR::synapse0x2fcf5e0() {
   return (neuron0x2fc8260()*0.251795);
}

double NNfunction_sb_uRdR::synapse0x2fcf620() {
   return (neuron0x2fc85a0()*-0.449573);
}

double NNfunction_sb_uRdR::synapse0x2fcf660() {
   return (neuron0x2fc88e0()*-0.0710046);
}

double NNfunction_sb_uRdR::synapse0x2fcf6a0() {
   return (neuron0x2fc8c20()*-0.522617);
}

double NNfunction_sb_uRdR::synapse0x2fcf6e0() {
   return (neuron0x2fc8f60()*0.240637);
}

double NNfunction_sb_uRdR::synapse0x2d86e30() {
   return (neuron0x2fc92a0()*0.0325688);
}

double NNfunction_sb_uRdR::synapse0x2d86e70() {
   return (neuron0x2fc95e0()*0.0208338);
}

double NNfunction_sb_uRdR::synapse0x2d86eb0() {
   return (neuron0x2fc9920()*-0.175072);
}

double NNfunction_sb_uRdR::synapse0x2d86ef0() {
   return (neuron0x2fc9c60()*0.0731232);
}

double NNfunction_sb_uRdR::synapse0x2d86f30() {
   return (neuron0x2fc9fa0()*-0.434419);
}

double NNfunction_sb_uRdR::synapse0x2d86f70() {
   return (neuron0x2fca2e0()*0.433221);
}

double NNfunction_sb_uRdR::synapse0x2d86fb0() {
   return (neuron0x2fca620()*-0.626397);
}

double NNfunction_sb_uRdR::synapse0x2fcf330() {
   return (neuron0x2fca960()*-0.188823);
}

double NNfunction_sb_uRdR::synapse0x2fcf370() {
   return (neuron0x2fcaec0()*0.966039);
}

double NNfunction_sb_uRdR::synapse0x2d87100() {
   return (neuron0x2fcb0e0()*-0.936843);
}

double NNfunction_sb_uRdR::synapse0x2d87140() {
   return (neuron0x2fcb420()*0.745366);
}

double NNfunction_sb_uRdR::synapse0x2d87180() {
   return (neuron0x2fcb760()*-0.421221);
}

double NNfunction_sb_uRdR::synapse0x2d871c0() {
   return (neuron0x2fcbaa0()*-0.558835);
}

double NNfunction_sb_uRdR::synapse0x2d87200() {
   return (neuron0x2fcbde0()*0.318371);
}

double NNfunction_sb_uRdR::synapse0x2fcff30() {
   return (neuron0x2fcc120()*0.414099);
}

double NNfunction_sb_uRdR::synapse0x2fd02b0() {
   return (neuron0x2fc7560()*0.00958246);
}

double NNfunction_sb_uRdR::synapse0x2fd02f0() {
   return (neuron0x2fc78a0()*-0.0263823);
}

double NNfunction_sb_uRdR::synapse0x2fd0330() {
   return (neuron0x2fc7be0()*-0.00855118);
}

double NNfunction_sb_uRdR::synapse0x2fd0370() {
   return (neuron0x2fc7f20()*0.399083);
}

double NNfunction_sb_uRdR::synapse0x2fd03b0() {
   return (neuron0x2fc8260()*-0.0158296);
}

double NNfunction_sb_uRdR::synapse0x2fd03f0() {
   return (neuron0x2fc85a0()*0.0448465);
}

double NNfunction_sb_uRdR::synapse0x2fd0430() {
   return (neuron0x2fc88e0()*0.000199464);
}

double NNfunction_sb_uRdR::synapse0x2fd0470() {
   return (neuron0x2fc8c20()*0.0041471);
}

double NNfunction_sb_uRdR::synapse0x2fd04b0() {
   return (neuron0x2fc8f60()*-0.0343936);
}

double NNfunction_sb_uRdR::synapse0x2fd04f0() {
   return (neuron0x2fc92a0()*0.00033644);
}

double NNfunction_sb_uRdR::synapse0x2fd0530() {
   return (neuron0x2fc95e0()*-0.0128162);
}

double NNfunction_sb_uRdR::synapse0x2fd0570() {
   return (neuron0x2fc9920()*-0.00595957);
}

double NNfunction_sb_uRdR::synapse0x2fd05b0() {
   return (neuron0x2fc9c60()*-0.0372225);
}

double NNfunction_sb_uRdR::synapse0x2fd05f0() {
   return (neuron0x2fc9fa0()*-0.0064385);
}

double NNfunction_sb_uRdR::synapse0x2fd0630() {
   return (neuron0x2fca2e0()*0.25811);
}

double NNfunction_sb_uRdR::synapse0x2fd0670() {
   return (neuron0x2fca620()*0.000282081);
}

double NNfunction_sb_uRdR::synapse0x2fd0100() {
   return (neuron0x2fca960()*0.028668);
}

double NNfunction_sb_uRdR::synapse0x2fd0140() {
   return (neuron0x2fcaec0()*-1.23639);
}

double NNfunction_sb_uRdR::synapse0x2fd07c0() {
   return (neuron0x2fcb0e0()*-0.0134788);
}

double NNfunction_sb_uRdR::synapse0x2fd0800() {
   return (neuron0x2fcb420()*0.0210828);
}

double NNfunction_sb_uRdR::synapse0x2fd0840() {
   return (neuron0x2fcb760()*0.00516522);
}

double NNfunction_sb_uRdR::synapse0x2fd0880() {
   return (neuron0x2fcbaa0()*-0.00370041);
}

double NNfunction_sb_uRdR::synapse0x2fd08c0() {
   return (neuron0x2fcbde0()*0.0194842);
}

double NNfunction_sb_uRdR::synapse0x2fd0900() {
   return (neuron0x2fcc120()*-0.039877);
}

double NNfunction_sb_uRdR::synapse0x2fd0c80() {
   return (neuron0x2fc7560()*0.150535);
}

double NNfunction_sb_uRdR::synapse0x2fd0cc0() {
   return (neuron0x2fc78a0()*0.646745);
}

double NNfunction_sb_uRdR::synapse0x2fd0d00() {
   return (neuron0x2fc7be0()*-0.546261);
}

double NNfunction_sb_uRdR::synapse0x2fd0d40() {
   return (neuron0x2fc7f20()*0.916992);
}

double NNfunction_sb_uRdR::synapse0x2fd0d80() {
   return (neuron0x2fc8260()*0.558212);
}

double NNfunction_sb_uRdR::synapse0x2fd0dc0() {
   return (neuron0x2fc85a0()*-0.805501);
}

double NNfunction_sb_uRdR::synapse0x2fd0e00() {
   return (neuron0x2fc88e0()*-0.201621);
}

double NNfunction_sb_uRdR::synapse0x2fd0e40() {
   return (neuron0x2fc8c20()*1.08552);
}

double NNfunction_sb_uRdR::synapse0x2fd0e80() {
   return (neuron0x2fc8f60()*-0.390452);
}

double NNfunction_sb_uRdR::synapse0x2fd0ec0() {
   return (neuron0x2fc92a0()*0.32899);
}

double NNfunction_sb_uRdR::synapse0x2fd0f00() {
   return (neuron0x2fc95e0()*0.0777904);
}

double NNfunction_sb_uRdR::synapse0x2fd0f40() {
   return (neuron0x2fc9920()*-0.0914377);
}

double NNfunction_sb_uRdR::synapse0x2fd0f80() {
   return (neuron0x2fc9c60()*0.437818);
}

double NNfunction_sb_uRdR::synapse0x2fd0fc0() {
   return (neuron0x2fc9fa0()*0.326096);
}

double NNfunction_sb_uRdR::synapse0x2fd1000() {
   return (neuron0x2fca2e0()*-0.314225);
}

double NNfunction_sb_uRdR::synapse0x2fd1040() {
   return (neuron0x2fca620()*-0.215608);
}

double NNfunction_sb_uRdR::synapse0x2fd0ad0() {
   return (neuron0x2fca960()*0.477601);
}

double NNfunction_sb_uRdR::synapse0x2fd0b10() {
   return (neuron0x2fcaec0()*0.985312);
}

double NNfunction_sb_uRdR::synapse0x2fd1190() {
   return (neuron0x2fcb0e0()*0.596939);
}

double NNfunction_sb_uRdR::synapse0x2fd11d0() {
   return (neuron0x2fcb420()*-0.864537);
}

double NNfunction_sb_uRdR::synapse0x2fd1210() {
   return (neuron0x2fcb760()*0.0635568);
}

double NNfunction_sb_uRdR::synapse0x2fd1250() {
   return (neuron0x2fcbaa0()*-0.19001);
}

double NNfunction_sb_uRdR::synapse0x2fd1290() {
   return (neuron0x2fcbde0()*-0.341857);
}

double NNfunction_sb_uRdR::synapse0x2fd12d0() {
   return (neuron0x2fcc120()*-0.509352);
}

double NNfunction_sb_uRdR::synapse0x2fcadb0() {
   return (neuron0x2fc7560()*-0.043004);
}

double NNfunction_sb_uRdR::synapse0x2fcadf0() {
   return (neuron0x2fc78a0()*-0.238414);
}

double NNfunction_sb_uRdR::synapse0x2fcae30() {
   return (neuron0x2fc7be0()*-0.0360936);
}

double NNfunction_sb_uRdR::synapse0x2fcae70() {
   return (neuron0x2fc7f20()*-0.507078);
}

double NNfunction_sb_uRdR::synapse0x2fd1860() {
   return (neuron0x2fc8260()*0.0179198);
}

double NNfunction_sb_uRdR::synapse0x2fd18a0() {
   return (neuron0x2fc85a0()*0.0392004);
}

double NNfunction_sb_uRdR::synapse0x2fd18e0() {
   return (neuron0x2fc88e0()*0.0631138);
}

double NNfunction_sb_uRdR::synapse0x2fd1920() {
   return (neuron0x2fc8c20()*-0.0121176);
}

double NNfunction_sb_uRdR::synapse0x2fd1960() {
   return (neuron0x2fc8f60()*0.0131966);
}

double NNfunction_sb_uRdR::synapse0x2fd19a0() {
   return (neuron0x2fc92a0()*-0.0272531);
}

double NNfunction_sb_uRdR::synapse0x2fd19e0() {
   return (neuron0x2fc95e0()*-0.0291345);
}

double NNfunction_sb_uRdR::synapse0x2fd1a20() {
   return (neuron0x2fc9920()*-0.293776);
}

double NNfunction_sb_uRdR::synapse0x2fd1a60() {
   return (neuron0x2fc9c60()*-0.284055);
}

double NNfunction_sb_uRdR::synapse0x2fd1aa0() {
   return (neuron0x2fc9fa0()*-0.0170992);
}

double NNfunction_sb_uRdR::synapse0x2fd1ae0() {
   return (neuron0x2fca2e0()*0.200872);
}

double NNfunction_sb_uRdR::synapse0x2fd1b20() {
   return (neuron0x2fca620()*-0.132173);
}

double NNfunction_sb_uRdR::synapse0x2fd14a0() {
   return (neuron0x2fca960()*0.0090001);
}

double NNfunction_sb_uRdR::synapse0x2fd14e0() {
   return (neuron0x2fcaec0()*0.120072);
}

double NNfunction_sb_uRdR::synapse0x2fd1c70() {
   return (neuron0x2fcb0e0()*-0.148892);
}

double NNfunction_sb_uRdR::synapse0x2fd1cb0() {
   return (neuron0x2fcb420()*-0.0811219);
}

double NNfunction_sb_uRdR::synapse0x2fd1cf0() {
   return (neuron0x2fcb760()*0.00825393);
}

double NNfunction_sb_uRdR::synapse0x2fd1d30() {
   return (neuron0x2fcbaa0()*0.0808444);
}

double NNfunction_sb_uRdR::synapse0x2fd1d70() {
   return (neuron0x2fcbde0()*0.0206468);
}

double NNfunction_sb_uRdR::synapse0x2fd1db0() {
   return (neuron0x2fcc120()*-0.0450184);
}

double NNfunction_sb_uRdR::synapse0x2fd2130() {
   return (neuron0x2fc7560()*0.0325504);
}

double NNfunction_sb_uRdR::synapse0x2fd2170() {
   return (neuron0x2fc78a0()*0.0316737);
}

double NNfunction_sb_uRdR::synapse0x2fd21b0() {
   return (neuron0x2fc7be0()*0.0393424);
}

double NNfunction_sb_uRdR::synapse0x2fd21f0() {
   return (neuron0x2fc7f20()*-3.07322);
}

double NNfunction_sb_uRdR::synapse0x2fd2230() {
   return (neuron0x2fc8260()*0.0203445);
}

double NNfunction_sb_uRdR::synapse0x2fd2270() {
   return (neuron0x2fc85a0()*-0.0234242);
}

double NNfunction_sb_uRdR::synapse0x2fd22b0() {
   return (neuron0x2fc88e0()*0.0339671);
}

double NNfunction_sb_uRdR::synapse0x2fd22f0() {
   return (neuron0x2fc8c20()*-0.0199755);
}

double NNfunction_sb_uRdR::synapse0x2fd2330() {
   return (neuron0x2fc8f60()*0.0176075);
}

double NNfunction_sb_uRdR::synapse0x2fd2370() {
   return (neuron0x2fc92a0()*-0.0306776);
}

double NNfunction_sb_uRdR::synapse0x2fd23b0() {
   return (neuron0x2fc95e0()*0.0123263);
}

double NNfunction_sb_uRdR::synapse0x2fd23f0() {
   return (neuron0x2fc9920()*0.129363);
}

double NNfunction_sb_uRdR::synapse0x2fd2430() {
   return (neuron0x2fc9c60()*0.0572052);
}

double NNfunction_sb_uRdR::synapse0x2fd2470() {
   return (neuron0x2fc9fa0()*-0.00992833);
}

double NNfunction_sb_uRdR::synapse0x2fd24b0() {
   return (neuron0x2fca2e0()*0.0751232);
}

double NNfunction_sb_uRdR::synapse0x2fd24f0() {
   return (neuron0x2fca620()*0.0637362);
}

double NNfunction_sb_uRdR::synapse0x2fd1f80() {
   return (neuron0x2fca960()*-0.0254683);
}

double NNfunction_sb_uRdR::synapse0x2fd1fc0() {
   return (neuron0x2fcaec0()*0.21);
}

double NNfunction_sb_uRdR::synapse0x2fd2640() {
   return (neuron0x2fcb0e0()*-0.0144376);
}

double NNfunction_sb_uRdR::synapse0x2fd2680() {
   return (neuron0x2fcb420()*0.0288607);
}

double NNfunction_sb_uRdR::synapse0x2fd26c0() {
   return (neuron0x2fcb760()*0.00786555);
}

double NNfunction_sb_uRdR::synapse0x2fd2700() {
   return (neuron0x2fcbaa0()*-0.0103268);
}

double NNfunction_sb_uRdR::synapse0x2fd2740() {
   return (neuron0x2fcbde0()*-0.00442169);
}

double NNfunction_sb_uRdR::synapse0x2fd2780() {
   return (neuron0x2fcc120()*-0.00161255);
}

double NNfunction_sb_uRdR::synapse0x2fd2b00() {
   return (neuron0x2fc7560()*0.0622973);
}

double NNfunction_sb_uRdR::synapse0x2fd2b40() {
   return (neuron0x2fc78a0()*0.0627658);
}

double NNfunction_sb_uRdR::synapse0x2fd2b80() {
   return (neuron0x2fc7be0()*-0.0229461);
}

double NNfunction_sb_uRdR::synapse0x2fd2bc0() {
   return (neuron0x2fc7f20()*-0.663483);
}

double NNfunction_sb_uRdR::synapse0x2fd2c00() {
   return (neuron0x2fc8260()*-0.146398);
}

double NNfunction_sb_uRdR::synapse0x2fd2c40() {
   return (neuron0x2fc85a0()*0.111728);
}

double NNfunction_sb_uRdR::synapse0x2fd2c80() {
   return (neuron0x2fc88e0()*-0.0563761);
}

double NNfunction_sb_uRdR::synapse0x2fd2cc0() {
   return (neuron0x2fc8c20()*-0.0365779);
}

double NNfunction_sb_uRdR::synapse0x2fd2d00() {
   return (neuron0x2fc8f60()*-0.0728954);
}

double NNfunction_sb_uRdR::synapse0x2fd2d40() {
   return (neuron0x2fc92a0()*-0.0924842);
}

double NNfunction_sb_uRdR::synapse0x2fd2d80() {
   return (neuron0x2fc95e0()*-0.0134991);
}

double NNfunction_sb_uRdR::synapse0x2fd2dc0() {
   return (neuron0x2fc9920()*0.0482151);
}

double NNfunction_sb_uRdR::synapse0x2fd2e00() {
   return (neuron0x2fc9c60()*0.032154);
}

double NNfunction_sb_uRdR::synapse0x2fd2e40() {
   return (neuron0x2fc9fa0()*0.15468);
}

double NNfunction_sb_uRdR::synapse0x2fd2e80() {
   return (neuron0x2fca2e0()*0.0236548);
}

double NNfunction_sb_uRdR::synapse0x2fd2ec0() {
   return (neuron0x2fca620()*0.0272507);
}

double NNfunction_sb_uRdR::synapse0x2fd2950() {
   return (neuron0x2fca960()*0.19086);
}

double NNfunction_sb_uRdR::synapse0x2fd2990() {
   return (neuron0x2fcaec0()*2.71064);
}

double NNfunction_sb_uRdR::synapse0x2fcf720() {
   return (neuron0x2fcb0e0()*0.00773524);
}

double NNfunction_sb_uRdR::synapse0x2fcf760() {
   return (neuron0x2fcb420()*-0.0435496);
}

double NNfunction_sb_uRdR::synapse0x2fcf7a0() {
   return (neuron0x2fcb760()*-0.000443138);
}

double NNfunction_sb_uRdR::synapse0x2fcf7e0() {
   return (neuron0x2fcbaa0()*-0.0396);
}

double NNfunction_sb_uRdR::synapse0x2fcf820() {
   return (neuron0x2fcbde0()*0.0328143);
}

double NNfunction_sb_uRdR::synapse0x2fcf860() {
   return (neuron0x2fcc120()*0.0163055);
}

double NNfunction_sb_uRdR::synapse0x2fcfbe0() {
   return (neuron0x2fc7560()*0.141694);
}

double NNfunction_sb_uRdR::synapse0x2fcfc20() {
   return (neuron0x2fc78a0()*0.193355);
}

double NNfunction_sb_uRdR::synapse0x2fcfc60() {
   return (neuron0x2fc7be0()*0.0857075);
}

double NNfunction_sb_uRdR::synapse0x2fcfca0() {
   return (neuron0x2fc7f20()*-1.90675);
}

double NNfunction_sb_uRdR::synapse0x2fcfce0() {
   return (neuron0x2fc8260()*-0.034763);
}

double NNfunction_sb_uRdR::synapse0x2fcfd20() {
   return (neuron0x2fc85a0()*-0.164286);
}

double NNfunction_sb_uRdR::synapse0x2fcfd60() {
   return (neuron0x2fc88e0()*-0.0365474);
}

double NNfunction_sb_uRdR::synapse0x2fcfda0() {
   return (neuron0x2fc8c20()*0.0192604);
}

double NNfunction_sb_uRdR::synapse0x2fcfde0() {
   return (neuron0x2fc8f60()*-0.0077078);
}

double NNfunction_sb_uRdR::synapse0x2fcfe20() {
   return (neuron0x2fc92a0()*-0.00677579);
}

double NNfunction_sb_uRdR::synapse0x2fcfe60() {
   return (neuron0x2fc95e0()*0.0223954);
}

double NNfunction_sb_uRdR::synapse0x2fcfea0() {
   return (neuron0x2fc9920()*0.0131346);
}

double NNfunction_sb_uRdR::synapse0x2fcfee0() {
   return (neuron0x2fc9c60()*-0.132532);
}

double NNfunction_sb_uRdR::synapse0x2fd4020() {
   return (neuron0x2fc9fa0()*0.139618);
}

double NNfunction_sb_uRdR::synapse0x2fd4060() {
   return (neuron0x2fca2e0()*-0.952009);
}

double NNfunction_sb_uRdR::synapse0x2fd40a0() {
   return (neuron0x2fca620()*0.0470323);
}

double NNfunction_sb_uRdR::synapse0x2fcfa30() {
   return (neuron0x2fca960()*0.0617505);
}

double NNfunction_sb_uRdR::synapse0x2fcfa70() {
   return (neuron0x2fcaec0()*-0.905443);
}

double NNfunction_sb_uRdR::synapse0x2fd41f0() {
   return (neuron0x2fcb0e0()*-0.138722);
}

double NNfunction_sb_uRdR::synapse0x2fd4230() {
   return (neuron0x2fcb420()*0.121322);
}

double NNfunction_sb_uRdR::synapse0x2fd4270() {
   return (neuron0x2fcb760()*0.0680542);
}

double NNfunction_sb_uRdR::synapse0x2fd42b0() {
   return (neuron0x2fcbaa0()*-0.14008);
}

double NNfunction_sb_uRdR::synapse0x2fd42f0() {
   return (neuron0x2fcbde0()*-0.0827089);
}

double NNfunction_sb_uRdR::synapse0x2fd4330() {
   return (neuron0x2fcc120()*0.0630775);
}

double NNfunction_sb_uRdR::synapse0x2fd46b0() {
   return (neuron0x2fc7560()*0.432239);
}

double NNfunction_sb_uRdR::synapse0x2fd46f0() {
   return (neuron0x2fc78a0()*-0.118325);
}

double NNfunction_sb_uRdR::synapse0x2fd4730() {
   return (neuron0x2fc7be0()*-0.0243102);
}

double NNfunction_sb_uRdR::synapse0x2fd4770() {
   return (neuron0x2fc7f20()*-0.294073);
}

double NNfunction_sb_uRdR::synapse0x2fd47b0() {
   return (neuron0x2fc8260()*-0.0330435);
}

double NNfunction_sb_uRdR::synapse0x2fd47f0() {
   return (neuron0x2fc85a0()*0.039812);
}

double NNfunction_sb_uRdR::synapse0x2fd4830() {
   return (neuron0x2fc88e0()*0.695987);
}

double NNfunction_sb_uRdR::synapse0x2fd4870() {
   return (neuron0x2fc8c20()*0.148588);
}

double NNfunction_sb_uRdR::synapse0x2fd48b0() {
   return (neuron0x2fc8f60()*-0.252128);
}

double NNfunction_sb_uRdR::synapse0x2fd48f0() {
   return (neuron0x2fc92a0()*-0.448751);
}

double NNfunction_sb_uRdR::synapse0x2fd4930() {
   return (neuron0x2fc95e0()*-0.706928);
}

double NNfunction_sb_uRdR::synapse0x2fd4970() {
   return (neuron0x2fc9920()*-0.0730829);
}

double NNfunction_sb_uRdR::synapse0x2fd49b0() {
   return (neuron0x2fc9c60()*-0.379196);
}

double NNfunction_sb_uRdR::synapse0x2fd49f0() {
   return (neuron0x2fc9fa0()*0.0331341);
}

double NNfunction_sb_uRdR::synapse0x2fd4a30() {
   return (neuron0x2fca2e0()*0.109516);
}

double NNfunction_sb_uRdR::synapse0x2fd4a70() {
   return (neuron0x2fca620()*0.341828);
}

double NNfunction_sb_uRdR::synapse0x2fd4500() {
   return (neuron0x2fca960()*0.149394);
}

double NNfunction_sb_uRdR::synapse0x2fd4540() {
   return (neuron0x2fcaec0()*0.00659622);
}

double NNfunction_sb_uRdR::synapse0x2fd4bc0() {
   return (neuron0x2fcb0e0()*-0.173356);
}

double NNfunction_sb_uRdR::synapse0x2fd4c00() {
   return (neuron0x2fcb420()*0.193985);
}

double NNfunction_sb_uRdR::synapse0x2fd4c40() {
   return (neuron0x2fcb760()*-0.231938);
}

double NNfunction_sb_uRdR::synapse0x2fd4c80() {
   return (neuron0x2fcbaa0()*-0.298712);
}

double NNfunction_sb_uRdR::synapse0x2fd4cc0() {
   return (neuron0x2fcbde0()*0.037738);
}

double NNfunction_sb_uRdR::synapse0x2fd4d00() {
   return (neuron0x2fcc120()*0.260329);
}

double NNfunction_sb_uRdR::synapse0x2fd5080() {
   return (neuron0x2fc7560()*-0.0894767);
}

double NNfunction_sb_uRdR::synapse0x2fd50c0() {
   return (neuron0x2fc78a0()*0.144109);
}

double NNfunction_sb_uRdR::synapse0x2fd5100() {
   return (neuron0x2fc7be0()*0.135287);
}

double NNfunction_sb_uRdR::synapse0x2fd5140() {
   return (neuron0x2fc7f20()*-0.216322);
}

double NNfunction_sb_uRdR::synapse0x2fd5180() {
   return (neuron0x2fc8260()*0.146144);
}

double NNfunction_sb_uRdR::synapse0x2fd51c0() {
   return (neuron0x2fc85a0()*0.155997);
}

double NNfunction_sb_uRdR::synapse0x2fd5200() {
   return (neuron0x2fc88e0()*-0.167721);
}

double NNfunction_sb_uRdR::synapse0x2fd5240() {
   return (neuron0x2fc8c20()*-0.250478);
}

double NNfunction_sb_uRdR::synapse0x2fd5280() {
   return (neuron0x2fc8f60()*-0.0130227);
}

double NNfunction_sb_uRdR::synapse0x2fd52c0() {
   return (neuron0x2fc92a0()*-0.0205418);
}

double NNfunction_sb_uRdR::synapse0x2fd5300() {
   return (neuron0x2fc95e0()*0.083053);
}

double NNfunction_sb_uRdR::synapse0x2fd5340() {
   return (neuron0x2fc9920()*-0.243466);
}

double NNfunction_sb_uRdR::synapse0x2fd5380() {
   return (neuron0x2fc9c60()*-0.177521);
}

double NNfunction_sb_uRdR::synapse0x2fd53c0() {
   return (neuron0x2fc9fa0()*0.0993593);
}

double NNfunction_sb_uRdR::synapse0x2fd5400() {
   return (neuron0x2fca2e0()*0.537008);
}

double NNfunction_sb_uRdR::synapse0x2fd5440() {
   return (neuron0x2fca620()*-0.307752);
}

double NNfunction_sb_uRdR::synapse0x2fd4ed0() {
   return (neuron0x2fca960()*0.0498926);
}

double NNfunction_sb_uRdR::synapse0x2fd4f10() {
   return (neuron0x2fcaec0()*0.307335);
}

double NNfunction_sb_uRdR::synapse0x2fd5590() {
   return (neuron0x2fcb0e0()*0.0843853);
}

double NNfunction_sb_uRdR::synapse0x2fd55d0() {
   return (neuron0x2fcb420()*-0.0485489);
}

double NNfunction_sb_uRdR::synapse0x2fd5610() {
   return (neuron0x2fcb760()*0.163715);
}

double NNfunction_sb_uRdR::synapse0x2fd5650() {
   return (neuron0x2fcbaa0()*-0.00111581);
}

double NNfunction_sb_uRdR::synapse0x2fd5690() {
   return (neuron0x2fcbde0()*0.0304445);
}

double NNfunction_sb_uRdR::synapse0x2fd56d0() {
   return (neuron0x2fcc120()*0.0697159);
}

double NNfunction_sb_uRdR::synapse0x2fd5a50() {
   return (neuron0x2fc7560()*-0.321428);
}

double NNfunction_sb_uRdR::synapse0x2fd5a90() {
   return (neuron0x2fc78a0()*-0.614508);
}

double NNfunction_sb_uRdR::synapse0x2fd5ad0() {
   return (neuron0x2fc7be0()*-0.335359);
}

double NNfunction_sb_uRdR::synapse0x2fd5b10() {
   return (neuron0x2fc7f20()*0.41809);
}

double NNfunction_sb_uRdR::synapse0x2fd5b50() {
   return (neuron0x2fc8260()*0.415769);
}

double NNfunction_sb_uRdR::synapse0x2fd5b90() {
   return (neuron0x2fc85a0()*0.296281);
}

double NNfunction_sb_uRdR::synapse0x2fd5bd0() {
   return (neuron0x2fc88e0()*0.324987);
}

double NNfunction_sb_uRdR::synapse0x2fd5c10() {
   return (neuron0x2fc8c20()*-0.0385935);
}

double NNfunction_sb_uRdR::synapse0x2fd5c50() {
   return (neuron0x2fc8f60()*1.04979);
}

double NNfunction_sb_uRdR::synapse0x2fd5c90() {
   return (neuron0x2fc92a0()*0.763518);
}

double NNfunction_sb_uRdR::synapse0x2fd5cd0() {
   return (neuron0x2fc95e0()*-0.305634);
}

double NNfunction_sb_uRdR::synapse0x2fd5d10() {
   return (neuron0x2fc9920()*0.578847);
}

double NNfunction_sb_uRdR::synapse0x2fd5d50() {
   return (neuron0x2fc9c60()*0.228614);
}

double NNfunction_sb_uRdR::synapse0x2fd5d90() {
   return (neuron0x2fc9fa0()*-1.19146);
}

double NNfunction_sb_uRdR::synapse0x2fd5dd0() {
   return (neuron0x2fca2e0()*-0.501941);
}

double NNfunction_sb_uRdR::synapse0x2fd5e10() {
   return (neuron0x2fca620()*-0.937571);
}

double NNfunction_sb_uRdR::synapse0x2fd58a0() {
   return (neuron0x2fca960()*0.0452344);
}

double NNfunction_sb_uRdR::synapse0x2fd58e0() {
   return (neuron0x2fcaec0()*-0.529649);
}

double NNfunction_sb_uRdR::synapse0x2fd5f60() {
   return (neuron0x2fcb0e0()*-0.247879);
}

double NNfunction_sb_uRdR::synapse0x2fd5fa0() {
   return (neuron0x2fcb420()*-1.07087);
}

double NNfunction_sb_uRdR::synapse0x2fd5fe0() {
   return (neuron0x2fcb760()*-0.3694);
}

double NNfunction_sb_uRdR::synapse0x2fd6020() {
   return (neuron0x2fcbaa0()*-0.707726);
}

double NNfunction_sb_uRdR::synapse0x2fd6060() {
   return (neuron0x2fcbde0()*-0.304757);
}

double NNfunction_sb_uRdR::synapse0x2fd60a0() {
   return (neuron0x2fcc120()*-0.0129225);
}

double NNfunction_sb_uRdR::synapse0x2fd6420() {
   return (neuron0x2fc7560()*0.0408059);
}

double NNfunction_sb_uRdR::synapse0x2fc7780() {
   return (neuron0x2fc78a0()*0.0271973);
}

double NNfunction_sb_uRdR::synapse0x2fc77c0() {
   return (neuron0x2fc7be0()*0.00631003);
}

double NNfunction_sb_uRdR::synapse0x2fc7ac0() {
   return (neuron0x2fc7f20()*-0.103174);
}

double NNfunction_sb_uRdR::synapse0x2fc7b00() {
   return (neuron0x2fc8260()*-0.048875);
}

double NNfunction_sb_uRdR::synapse0x2fc7e00() {
   return (neuron0x2fc85a0()*-0.0149255);
}

double NNfunction_sb_uRdR::synapse0x2fc7e40() {
   return (neuron0x2fc88e0()*0.00428271);
}

double NNfunction_sb_uRdR::synapse0x2fc8140() {
   return (neuron0x2fc8c20()*0.024188);
}

double NNfunction_sb_uRdR::synapse0x2fc8180() {
   return (neuron0x2fc8f60()*-0.00936205);
}

double NNfunction_sb_uRdR::synapse0x2fc8480() {
   return (neuron0x2fc92a0()*-0.0403767);
}

double NNfunction_sb_uRdR::synapse0x2fc84c0() {
   return (neuron0x2fc95e0()*-0.0158994);
}

double NNfunction_sb_uRdR::synapse0x2fc87c0() {
   return (neuron0x2fc9920()*0.0558315);
}

double NNfunction_sb_uRdR::synapse0x2fc8800() {
   return (neuron0x2fc9c60()*0.0623041);
}

double NNfunction_sb_uRdR::synapse0x2fc8b00() {
   return (neuron0x2fc9fa0()*0.0145053);
}

double NNfunction_sb_uRdR::synapse0x2fc8b40() {
   return (neuron0x2fca2e0()*0.797227);
}

double NNfunction_sb_uRdR::synapse0x2fc8e40() {
   return (neuron0x2fca620()*0.0580024);
}

double NNfunction_sb_uRdR::synapse0x2fc8e80() {
   return (neuron0x2fca960()*0.0566873);
}

double NNfunction_sb_uRdR::synapse0x2fc9180() {
   return (neuron0x2fcaec0()*0.848709);
}

double NNfunction_sb_uRdR::synapse0x2fc91c0() {
   return (neuron0x2fcb0e0()*0.00648014);
}

double NNfunction_sb_uRdR::synapse0x2fc94c0() {
   return (neuron0x2fcb420()*0.0516221);
}

double NNfunction_sb_uRdR::synapse0x2fc9500() {
   return (neuron0x2fcb760()*-0.0283148);
}

double NNfunction_sb_uRdR::synapse0x2fc9800() {
   return (neuron0x2fcbaa0()*-0.0138226);
}

double NNfunction_sb_uRdR::synapse0x2fc9840() {
   return (neuron0x2fcbde0()*-0.0165086);
}

double NNfunction_sb_uRdR::synapse0x2fc9b40() {
   return (neuron0x2fcc120()*0.0323069);
}

double NNfunction_sb_uRdR::synapse0x2fc9b80() {
   return (neuron0x2fc7560()*-0.041011);
}

double NNfunction_sb_uRdR::synapse0x2fca840() {
   return (neuron0x2fc78a0()*-0.0622167);
}

double NNfunction_sb_uRdR::synapse0x2fca880() {
   return (neuron0x2fc7be0()*0.0537314);
}

double NNfunction_sb_uRdR::synapse0x2fd6270() {
   return (neuron0x2fc7f20()*-1.10394);
}

double NNfunction_sb_uRdR::synapse0x2fd62b0() {
   return (neuron0x2fc8260()*0.551984);
}

double NNfunction_sb_uRdR::synapse0x2fcab80() {
   return (neuron0x2fc85a0()*-0.976878);
}

double NNfunction_sb_uRdR::synapse0x2fcabc0() {
   return (neuron0x2fc88e0()*1.08345);
}

double NNfunction_sb_uRdR::synapse0x2d78b50() {
   return (neuron0x2fc8c20()*0.0425359);
}

double NNfunction_sb_uRdR::synapse0x2d78b90() {
   return (neuron0x2fc8f60()*0.145415);
}

double NNfunction_sb_uRdR::synapse0x2fcb300() {
   return (neuron0x2fc92a0()*0.0551153);
}

double NNfunction_sb_uRdR::synapse0x2fcb340() {
   return (neuron0x2fc95e0()*-0.0124777);
}

double NNfunction_sb_uRdR::synapse0x2fcb640() {
   return (neuron0x2fc9920()*-0.0537233);
}

double NNfunction_sb_uRdR::synapse0x2fcb680() {
   return (neuron0x2fc9c60()*-0.183145);
}

double NNfunction_sb_uRdR::synapse0x2fcb980() {
   return (neuron0x2fc9fa0()*-0.0891743);
}

double NNfunction_sb_uRdR::synapse0x2fcb9c0() {
   return (neuron0x2fca2e0()*0.292939);
}

double NNfunction_sb_uRdR::synapse0x2fcbcc0() {
   return (neuron0x2fca620()*-0.502932);
}

double NNfunction_sb_uRdR::synapse0x2fcbd00() {
   return (neuron0x2fca960()*-0.488137);
}

double NNfunction_sb_uRdR::synapse0x2fcc000() {
   return (neuron0x2fcaec0()*-0.990829);
}

double NNfunction_sb_uRdR::synapse0x2fcc040() {
   return (neuron0x2fcb0e0()*-0.478555);
}

double NNfunction_sb_uRdR::synapse0x2fcc340() {
   return (neuron0x2fcb420()*-0.286535);
}

double NNfunction_sb_uRdR::synapse0x2fcc380() {
   return (neuron0x2fcb760()*0.14173);
}

double NNfunction_sb_uRdR::synapse0x2fc9e80() {
   return (neuron0x2fcbaa0()*0.0915534);
}

double NNfunction_sb_uRdR::synapse0x2fc9ec0() {
   return (neuron0x2fcbde0()*-0.564398);
}

double NNfunction_sb_uRdR::synapse0x2fd8190() {
   return (neuron0x2fcc120()*0.00335326);
}

double NNfunction_sb_uRdR::synapse0x2fd8510() {
   return (neuron0x2fc7560()*0.0992355);
}

double NNfunction_sb_uRdR::synapse0x2fd8550() {
   return (neuron0x2fc78a0()*0.525852);
}

double NNfunction_sb_uRdR::synapse0x2fd8590() {
   return (neuron0x2fc7be0()*0.783785);
}

double NNfunction_sb_uRdR::synapse0x2fd85d0() {
   return (neuron0x2fc7f20()*0.0997584);
}

double NNfunction_sb_uRdR::synapse0x2fd8610() {
   return (neuron0x2fc8260()*-0.129015);
}

double NNfunction_sb_uRdR::synapse0x2fd8650() {
   return (neuron0x2fc85a0()*0.0575515);
}

double NNfunction_sb_uRdR::synapse0x2fd8690() {
   return (neuron0x2fc88e0()*-0.267073);
}

double NNfunction_sb_uRdR::synapse0x2fd86d0() {
   return (neuron0x2fc8c20()*-0.0993769);
}

double NNfunction_sb_uRdR::synapse0x2fd8710() {
   return (neuron0x2fc8f60()*0.175443);
}

double NNfunction_sb_uRdR::synapse0x2fd8750() {
   return (neuron0x2fc92a0()*0.0494285);
}

double NNfunction_sb_uRdR::synapse0x2fd8790() {
   return (neuron0x2fc95e0()*0.052234);
}

double NNfunction_sb_uRdR::synapse0x2fd87d0() {
   return (neuron0x2fc9920()*-1.13291);
}

double NNfunction_sb_uRdR::synapse0x2fd8810() {
   return (neuron0x2fc9c60()*0.328724);
}

double NNfunction_sb_uRdR::synapse0x2fd8850() {
   return (neuron0x2fc9fa0()*0.402124);
}

double NNfunction_sb_uRdR::synapse0x2fd8890() {
   return (neuron0x2fca2e0()*-0.0905537);
}

double NNfunction_sb_uRdR::synapse0x2fd88d0() {
   return (neuron0x2fca620()*-0.2319);
}

double NNfunction_sb_uRdR::synapse0x2fd8360() {
   return (neuron0x2fca960()*0.783219);
}

double NNfunction_sb_uRdR::synapse0x2fd83a0() {
   return (neuron0x2fcaec0()*-0.0311126);
}

double NNfunction_sb_uRdR::synapse0x2fd8a20() {
   return (neuron0x2fcb0e0()*-0.245631);
}

double NNfunction_sb_uRdR::synapse0x2fd8a60() {
   return (neuron0x2fcb420()*-0.017618);
}

double NNfunction_sb_uRdR::synapse0x2fd8aa0() {
   return (neuron0x2fcb760()*-0.126365);
}

double NNfunction_sb_uRdR::synapse0x2fd8ae0() {
   return (neuron0x2fcbaa0()*0.0139523);
}

double NNfunction_sb_uRdR::synapse0x2fd8b20() {
   return (neuron0x2fcbde0()*-0.087886);
}

double NNfunction_sb_uRdR::synapse0x2fd8b60() {
   return (neuron0x2fcc120()*0.0822748);
}

double NNfunction_sb_uRdR::synapse0x2fd8ee0() {
   return (neuron0x2fc7560()*0.00301918);
}

double NNfunction_sb_uRdR::synapse0x2fd8f20() {
   return (neuron0x2fc78a0()*0.0720964);
}

double NNfunction_sb_uRdR::synapse0x2fd8f60() {
   return (neuron0x2fc7be0()*0.0387747);
}

double NNfunction_sb_uRdR::synapse0x2fd8fa0() {
   return (neuron0x2fc7f20()*3.25048);
}

double NNfunction_sb_uRdR::synapse0x2fd8fe0() {
   return (neuron0x2fc8260()*-0.0927056);
}

double NNfunction_sb_uRdR::synapse0x2fd9020() {
   return (neuron0x2fc85a0()*-0.0469604);
}

double NNfunction_sb_uRdR::synapse0x2fd9060() {
   return (neuron0x2fc88e0()*-0.057041);
}

double NNfunction_sb_uRdR::synapse0x2fd90a0() {
   return (neuron0x2fc8c20()*-0.0323041);
}

double NNfunction_sb_uRdR::synapse0x2fd90e0() {
   return (neuron0x2fc8f60()*0.0574302);
}

double NNfunction_sb_uRdR::synapse0x2fd9120() {
   return (neuron0x2fc92a0()*0.0531017);
}

double NNfunction_sb_uRdR::synapse0x2fd9160() {
   return (neuron0x2fc95e0()*0.052089);
}

double NNfunction_sb_uRdR::synapse0x2fd91a0() {
   return (neuron0x2fc9920()*-0.00124742);
}

double NNfunction_sb_uRdR::synapse0x2fd91e0() {
   return (neuron0x2fc9c60()*0.0518756);
}

double NNfunction_sb_uRdR::synapse0x2fd9220() {
   return (neuron0x2fc9fa0()*-0.124148);
}

double NNfunction_sb_uRdR::synapse0x2fd9260() {
   return (neuron0x2fca2e0()*1.11925);
}

double NNfunction_sb_uRdR::synapse0x2fd92a0() {
   return (neuron0x2fca620()*0.068855);
}

double NNfunction_sb_uRdR::synapse0x2fd8d30() {
   return (neuron0x2fca960()*-0.0402576);
}

double NNfunction_sb_uRdR::synapse0x2fd8d70() {
   return (neuron0x2fcaec0()*1.09846);
}

double NNfunction_sb_uRdR::synapse0x2fd93f0() {
   return (neuron0x2fcb0e0()*0.0328675);
}

double NNfunction_sb_uRdR::synapse0x2fd9430() {
   return (neuron0x2fcb420()*0.16138);
}

double NNfunction_sb_uRdR::synapse0x2fd9470() {
   return (neuron0x2fcb760()*-0.137139);
}

double NNfunction_sb_uRdR::synapse0x2fd94b0() {
   return (neuron0x2fcbaa0()*-0.00635644);
}

double NNfunction_sb_uRdR::synapse0x2fd94f0() {
   return (neuron0x2fcbde0()*-0.0202989);
}

double NNfunction_sb_uRdR::synapse0x2fd9530() {
   return (neuron0x2fcc120()*0.104431);
}

double NNfunction_sb_uRdR::synapse0x2fd98b0() {
   return (neuron0x2fc7560()*0.220539);
}

double NNfunction_sb_uRdR::synapse0x2fd98f0() {
   return (neuron0x2fc78a0()*-0.679642);
}

double NNfunction_sb_uRdR::synapse0x2fd9930() {
   return (neuron0x2fc7be0()*0.172209);
}

double NNfunction_sb_uRdR::synapse0x2fd9970() {
   return (neuron0x2fc7f20()*1.95653);
}

double NNfunction_sb_uRdR::synapse0x2fd99b0() {
   return (neuron0x2fc8260()*-0.2824);
}

double NNfunction_sb_uRdR::synapse0x2fd99f0() {
   return (neuron0x2fc85a0()*-0.30769);
}

double NNfunction_sb_uRdR::synapse0x2fd9a30() {
   return (neuron0x2fc88e0()*-0.0415194);
}

double NNfunction_sb_uRdR::synapse0x2fd9a70() {
   return (neuron0x2fc8c20()*-0.27711);
}

double NNfunction_sb_uRdR::synapse0x2fd9ab0() {
   return (neuron0x2fc8f60()*0.187873);
}

double NNfunction_sb_uRdR::synapse0x2fd9af0() {
   return (neuron0x2fc92a0()*0.822482);
}

double NNfunction_sb_uRdR::synapse0x2fd9b30() {
   return (neuron0x2fc95e0()*0.240251);
}

double NNfunction_sb_uRdR::synapse0x2fd9b70() {
   return (neuron0x2fc9920()*0.285685);
}

double NNfunction_sb_uRdR::synapse0x2fd9bb0() {
   return (neuron0x2fc9c60()*-0.088281);
}

double NNfunction_sb_uRdR::synapse0x2fd9bf0() {
   return (neuron0x2fc9fa0()*0.38128);
}

double NNfunction_sb_uRdR::synapse0x2fd9c30() {
   return (neuron0x2fca2e0()*0.282804);
}

double NNfunction_sb_uRdR::synapse0x2fd9c70() {
   return (neuron0x2fca620()*0.0129238);
}

double NNfunction_sb_uRdR::synapse0x2fd9700() {
   return (neuron0x2fca960()*0.676064);
}

double NNfunction_sb_uRdR::synapse0x2fd9740() {
   return (neuron0x2fcaec0()*-0.103475);
}

double NNfunction_sb_uRdR::synapse0x2fd9dc0() {
   return (neuron0x2fcb0e0()*0.183225);
}

double NNfunction_sb_uRdR::synapse0x2fd9e00() {
   return (neuron0x2fcb420()*0.0539846);
}

double NNfunction_sb_uRdR::synapse0x2fd9e40() {
   return (neuron0x2fcb760()*0.305269);
}

double NNfunction_sb_uRdR::synapse0x2fd9e80() {
   return (neuron0x2fcbaa0()*0.0994422);
}

double NNfunction_sb_uRdR::synapse0x2fd9ec0() {
   return (neuron0x2fcbde0()*0.300027);
}

double NNfunction_sb_uRdR::synapse0x2fd9f00() {
   return (neuron0x2fcc120()*0.506138);
}

double NNfunction_sb_uRdR::synapse0x2fda280() {
   return (neuron0x2fc7560()*-0.0608218);
}

double NNfunction_sb_uRdR::synapse0x2fda2c0() {
   return (neuron0x2fc78a0()*-0.0139736);
}

double NNfunction_sb_uRdR::synapse0x2fda300() {
   return (neuron0x2fc7be0()*-0.0204918);
}

double NNfunction_sb_uRdR::synapse0x2fda340() {
   return (neuron0x2fc7f20()*0.66998);
}

double NNfunction_sb_uRdR::synapse0x2fda380() {
   return (neuron0x2fc8260()*-0.022872);
}

double NNfunction_sb_uRdR::synapse0x2fda3c0() {
   return (neuron0x2fc85a0()*0.0845098);
}

double NNfunction_sb_uRdR::synapse0x2fda400() {
   return (neuron0x2fc88e0()*-0.0587424);
}

double NNfunction_sb_uRdR::synapse0x2fda440() {
   return (neuron0x2fc8c20()*0.00944425);
}

double NNfunction_sb_uRdR::synapse0x2fda480() {
   return (neuron0x2fc8f60()*-0.0470445);
}

double NNfunction_sb_uRdR::synapse0x2fda4c0() {
   return (neuron0x2fc92a0()*-0.000711929);
}

double NNfunction_sb_uRdR::synapse0x2fda500() {
   return (neuron0x2fc95e0()*-0.000977909);
}

double NNfunction_sb_uRdR::synapse0x2fda540() {
   return (neuron0x2fc9920()*-0.120026);
}

double NNfunction_sb_uRdR::synapse0x2fda580() {
   return (neuron0x2fc9c60()*-0.0955227);
}

double NNfunction_sb_uRdR::synapse0x2fda5c0() {
   return (neuron0x2fc9fa0()*-0.0339571);
}

double NNfunction_sb_uRdR::synapse0x2fda600() {
   return (neuron0x2fca2e0()*0.0304162);
}

double NNfunction_sb_uRdR::synapse0x2fda640() {
   return (neuron0x2fca620()*-0.0436282);
}

double NNfunction_sb_uRdR::synapse0x2fda0d0() {
   return (neuron0x2fca960()*0.0453374);
}

double NNfunction_sb_uRdR::synapse0x2fda110() {
   return (neuron0x2fcaec0()*-0.270423);
}

double NNfunction_sb_uRdR::synapse0x2fda790() {
   return (neuron0x2fcb0e0()*0.0360954);
}

double NNfunction_sb_uRdR::synapse0x2fda7d0() {
   return (neuron0x2fcb420()*0.0180505);
}

double NNfunction_sb_uRdR::synapse0x2fda810() {
   return (neuron0x2fcb760()*0.0045078);
}

double NNfunction_sb_uRdR::synapse0x2fda850() {
   return (neuron0x2fcbaa0()*0.0268354);
}

double NNfunction_sb_uRdR::synapse0x2fda890() {
   return (neuron0x2fcbde0()*0.0399633);
}

double NNfunction_sb_uRdR::synapse0x2fda8d0() {
   return (neuron0x2fcc120()*0.0266015);
}

double NNfunction_sb_uRdR::synapse0x2fdac50() {
   return (neuron0x2fc7560()*0.0484706);
}

double NNfunction_sb_uRdR::synapse0x2fdac90() {
   return (neuron0x2fc78a0()*0.0759477);
}

double NNfunction_sb_uRdR::synapse0x2fdacd0() {
   return (neuron0x2fc7be0()*0.00664877);
}

double NNfunction_sb_uRdR::synapse0x2fdad10() {
   return (neuron0x2fc7f20()*0.31539);
}

double NNfunction_sb_uRdR::synapse0x2fdad50() {
   return (neuron0x2fc8260()*0.00517523);
}

double NNfunction_sb_uRdR::synapse0x2fdad90() {
   return (neuron0x2fc85a0()*-0.0656766);
}

double NNfunction_sb_uRdR::synapse0x2fdadd0() {
   return (neuron0x2fc88e0()*0.0214196);
}

double NNfunction_sb_uRdR::synapse0x2fdae10() {
   return (neuron0x2fc8c20()*0.014687);
}

double NNfunction_sb_uRdR::synapse0x2fdae50() {
   return (neuron0x2fc8f60()*0.0164917);
}

double NNfunction_sb_uRdR::synapse0x2fd3010() {
   return (neuron0x2fc92a0()*0.0177256);
}

double NNfunction_sb_uRdR::synapse0x2fd3050() {
   return (neuron0x2fc95e0()*-0.0182628);
}

double NNfunction_sb_uRdR::synapse0x2fd3090() {
   return (neuron0x2fc9920()*-0.0234527);
}

double NNfunction_sb_uRdR::synapse0x2fd30d0() {
   return (neuron0x2fc9c60()*-0.0274787);
}

double NNfunction_sb_uRdR::synapse0x2fd3110() {
   return (neuron0x2fc9fa0()*0.033476);
}

double NNfunction_sb_uRdR::synapse0x2fd3150() {
   return (neuron0x2fca2e0()*0.551586);
}

double NNfunction_sb_uRdR::synapse0x2fd3190() {
   return (neuron0x2fca620()*0.0160343);
}

double NNfunction_sb_uRdR::synapse0x2fdaaa0() {
   return (neuron0x2fca960()*-0.0170107);
}

double NNfunction_sb_uRdR::synapse0x2fdaae0() {
   return (neuron0x2fcaec0()*0.122175);
}

double NNfunction_sb_uRdR::synapse0x2fd32e0() {
   return (neuron0x2fcb0e0()*-0.0646959);
}

double NNfunction_sb_uRdR::synapse0x2fd3320() {
   return (neuron0x2fcb420()*0.0158119);
}

double NNfunction_sb_uRdR::synapse0x2fd3360() {
   return (neuron0x2fcb760()*-0.002365);
}

double NNfunction_sb_uRdR::synapse0x2fd33a0() {
   return (neuron0x2fcbaa0()*-0.0174816);
}

double NNfunction_sb_uRdR::synapse0x2fd33e0() {
   return (neuron0x2fcbde0()*-0.0204781);
}

double NNfunction_sb_uRdR::synapse0x2fd3420() {
   return (neuron0x2fcc120()*-0.0140958);
}

double NNfunction_sb_uRdR::synapse0x2fd37a0() {
   return (neuron0x2fc7560()*0.00640199);
}

double NNfunction_sb_uRdR::synapse0x2fd37e0() {
   return (neuron0x2fc78a0()*-0.025398);
}

double NNfunction_sb_uRdR::synapse0x2fd3820() {
   return (neuron0x2fc7be0()*0.0137593);
}

double NNfunction_sb_uRdR::synapse0x2fd3860() {
   return (neuron0x2fc7f20()*-2.64876);
}

double NNfunction_sb_uRdR::synapse0x2fd38a0() {
   return (neuron0x2fc8260()*0.021666);
}

double NNfunction_sb_uRdR::synapse0x2fd38e0() {
   return (neuron0x2fc85a0()*0.00484503);
}

double NNfunction_sb_uRdR::synapse0x2fd3920() {
   return (neuron0x2fc88e0()*0.0552802);
}

double NNfunction_sb_uRdR::synapse0x2fd3960() {
   return (neuron0x2fc8c20()*-0.0129865);
}

double NNfunction_sb_uRdR::synapse0x2fd39a0() {
   return (neuron0x2fc8f60()*0.00705168);
}

double NNfunction_sb_uRdR::synapse0x2fd39e0() {
   return (neuron0x2fc92a0()*-0.0183985);
}

double NNfunction_sb_uRdR::synapse0x2fd3a20() {
   return (neuron0x2fc95e0()*-0.0270738);
}

double NNfunction_sb_uRdR::synapse0x2fd3a60() {
   return (neuron0x2fc9920()*0.00339346);
}

double NNfunction_sb_uRdR::synapse0x2fd3aa0() {
   return (neuron0x2fc9c60()*-0.034498);
}

double NNfunction_sb_uRdR::synapse0x2fd3ae0() {
   return (neuron0x2fc9fa0()*-0.00877701);
}

double NNfunction_sb_uRdR::synapse0x2fd3b20() {
   return (neuron0x2fca2e0()*-0.429858);
}

double NNfunction_sb_uRdR::synapse0x2fd3b60() {
   return (neuron0x2fca620()*0.0268666);
}

double NNfunction_sb_uRdR::synapse0x2fd35f0() {
   return (neuron0x2fca960()*-0.0374683);
}

double NNfunction_sb_uRdR::synapse0x2fd3630() {
   return (neuron0x2fcaec0()*-0.307063);
}

double NNfunction_sb_uRdR::synapse0x2fd3cb0() {
   return (neuron0x2fcb0e0()*-0.0465973);
}

double NNfunction_sb_uRdR::synapse0x2fd3cf0() {
   return (neuron0x2fcb420()*-0.0300282);
}

double NNfunction_sb_uRdR::synapse0x2fd3d30() {
   return (neuron0x2fcb760()*-0.00777326);
}

double NNfunction_sb_uRdR::synapse0x2fd3d70() {
   return (neuron0x2fcbaa0()*0.0198407);
}

double NNfunction_sb_uRdR::synapse0x2fd3db0() {
   return (neuron0x2fcbde0()*0.00784323);
}

double NNfunction_sb_uRdR::synapse0x2fd3df0() {
   return (neuron0x2fcc120()*-0.0300327);
}

double NNfunction_sb_uRdR::synapse0x2fd3fc0() {
   return (neuron0x2fc7560()*-0.000600019);
}

double NNfunction_sb_uRdR::synapse0x2fdd050() {
   return (neuron0x2fc78a0()*0.0162529);
}

double NNfunction_sb_uRdR::synapse0x2fdd090() {
   return (neuron0x2fc7be0()*-0.00977355);
}

double NNfunction_sb_uRdR::synapse0x2fdd0d0() {
   return (neuron0x2fc7f20()*-4.20343);
}

double NNfunction_sb_uRdR::synapse0x2fdd110() {
   return (neuron0x2fc8260()*-0.0197977);
}

double NNfunction_sb_uRdR::synapse0x2fdd150() {
   return (neuron0x2fc85a0()*-0.0118915);
}

double NNfunction_sb_uRdR::synapse0x2fdd190() {
   return (neuron0x2fc88e0()*-0.019302);
}

double NNfunction_sb_uRdR::synapse0x2fdd1d0() {
   return (neuron0x2fc8c20()*-0.00237702);
}

double NNfunction_sb_uRdR::synapse0x2fdd210() {
   return (neuron0x2fc8f60()*-0.000764046);
}

double NNfunction_sb_uRdR::synapse0x2fdd250() {
   return (neuron0x2fc92a0()*0.0299213);
}

double NNfunction_sb_uRdR::synapse0x2fdd290() {
   return (neuron0x2fc95e0()*0.0174395);
}

double NNfunction_sb_uRdR::synapse0x2fdd2d0() {
   return (neuron0x2fc9920()*-0.0328014);
}

double NNfunction_sb_uRdR::synapse0x2fdd310() {
   return (neuron0x2fc9c60()*0.0041576);
}

double NNfunction_sb_uRdR::synapse0x2fdd350() {
   return (neuron0x2fc9fa0()*-0.033838);
}

double NNfunction_sb_uRdR::synapse0x2fdd390() {
   return (neuron0x2fca2e0()*0.017685);
}

double NNfunction_sb_uRdR::synapse0x2fdd3d0() {
   return (neuron0x2fca620()*0.000247818);
}

double NNfunction_sb_uRdR::synapse0x2fdcea0() {
   return (neuron0x2fca960()*-0.00975511);
}

double NNfunction_sb_uRdR::synapse0x2fdcee0() {
   return (neuron0x2fcaec0()*-0.027389);
}

double NNfunction_sb_uRdR::synapse0x2fdd520() {
   return (neuron0x2fcb0e0()*0.0178335);
}

double NNfunction_sb_uRdR::synapse0x2fdd560() {
   return (neuron0x2fcb420()*0.019681);
}

double NNfunction_sb_uRdR::synapse0x2fdd5a0() {
   return (neuron0x2fcb760()*-0.0205742);
}

double NNfunction_sb_uRdR::synapse0x2fdd5e0() {
   return (neuron0x2fcbaa0()*-0.0111138);
}

double NNfunction_sb_uRdR::synapse0x2fdd620() {
   return (neuron0x2fcbde0()*-0.017481);
}

double NNfunction_sb_uRdR::synapse0x2fdd660() {
   return (neuron0x2fcc120()*0.0034237);
}

double NNfunction_sb_uRdR::synapse0x2fdd9e0() {
   return (neuron0x2fc7560()*0.437296);
}

double NNfunction_sb_uRdR::synapse0x2fdda20() {
   return (neuron0x2fc78a0()*0.139134);
}

double NNfunction_sb_uRdR::synapse0x2fdda60() {
   return (neuron0x2fc7be0()*0.259562);
}

double NNfunction_sb_uRdR::synapse0x2fddaa0() {
   return (neuron0x2fc7f20()*-0.387484);
}

double NNfunction_sb_uRdR::synapse0x2fddae0() {
   return (neuron0x2fc8260()*-0.0281321);
}

double NNfunction_sb_uRdR::synapse0x2fddb20() {
   return (neuron0x2fc85a0()*-0.183138);
}

double NNfunction_sb_uRdR::synapse0x2fddb60() {
   return (neuron0x2fc88e0()*0.193819);
}

double NNfunction_sb_uRdR::synapse0x2fddba0() {
   return (neuron0x2fc8c20()*-0.07077);
}

double NNfunction_sb_uRdR::synapse0x2fddbe0() {
   return (neuron0x2fc8f60()*0.108263);
}

double NNfunction_sb_uRdR::synapse0x2fddc20() {
   return (neuron0x2fc92a0()*-0.195909);
}

double NNfunction_sb_uRdR::synapse0x2fddc60() {
   return (neuron0x2fc95e0()*-0.153669);
}

double NNfunction_sb_uRdR::synapse0x2fddca0() {
   return (neuron0x2fc9920()*-0.569092);
}

double NNfunction_sb_uRdR::synapse0x2fddce0() {
   return (neuron0x2fc9c60()*-0.28068);
}

double NNfunction_sb_uRdR::synapse0x2fddd20() {
   return (neuron0x2fc9fa0()*0.3104);
}

double NNfunction_sb_uRdR::synapse0x2fddd60() {
   return (neuron0x2fca2e0()*0.135399);
}

double NNfunction_sb_uRdR::synapse0x2fddda0() {
   return (neuron0x2fca620()*0.648957);
}

double NNfunction_sb_uRdR::synapse0x2fdd830() {
   return (neuron0x2fca960()*0.346661);
}

double NNfunction_sb_uRdR::synapse0x2fdd870() {
   return (neuron0x2fcaec0()*0.0675293);
}

double NNfunction_sb_uRdR::synapse0x2fddef0() {
   return (neuron0x2fcb0e0()*-0.241227);
}

double NNfunction_sb_uRdR::synapse0x2fddf30() {
   return (neuron0x2fcb420()*-0.467832);
}

double NNfunction_sb_uRdR::synapse0x2fddf70() {
   return (neuron0x2fcb760()*0.495994);
}

double NNfunction_sb_uRdR::synapse0x2fddfb0() {
   return (neuron0x2fcbaa0()*0.0708281);
}

double NNfunction_sb_uRdR::synapse0x2fddff0() {
   return (neuron0x2fcbde0()*-0.286963);
}

double NNfunction_sb_uRdR::synapse0x2fde030() {
   return (neuron0x2fcc120()*-0.104881);
}

double NNfunction_sb_uRdR::synapse0x2fde3b0() {
   return (neuron0x2fc7560()*0.024647);
}

double NNfunction_sb_uRdR::synapse0x2fde3f0() {
   return (neuron0x2fc78a0()*0.0932254);
}

double NNfunction_sb_uRdR::synapse0x2fde430() {
   return (neuron0x2fc7be0()*0.0275932);
}

double NNfunction_sb_uRdR::synapse0x2fde470() {
   return (neuron0x2fc7f20()*-1.07732);
}

double NNfunction_sb_uRdR::synapse0x2fde4b0() {
   return (neuron0x2fc8260()*-0.0124623);
}

double NNfunction_sb_uRdR::synapse0x2fde4f0() {
   return (neuron0x2fc85a0()*-0.00741556);
}

double NNfunction_sb_uRdR::synapse0x2fde530() {
   return (neuron0x2fc88e0()*-0.0936922);
}

double NNfunction_sb_uRdR::synapse0x2fde570() {
   return (neuron0x2fc8c20()*0.0517847);
}

double NNfunction_sb_uRdR::synapse0x2fde5b0() {
   return (neuron0x2fc8f60()*-0.0124406);
}

double NNfunction_sb_uRdR::synapse0x2fde5f0() {
   return (neuron0x2fc92a0()*0.0581311);
}

double NNfunction_sb_uRdR::synapse0x2fde630() {
   return (neuron0x2fc95e0()*0.0607314);
}

double NNfunction_sb_uRdR::synapse0x2fde670() {
   return (neuron0x2fc9920()*0.059481);
}

double NNfunction_sb_uRdR::synapse0x2fde6b0() {
   return (neuron0x2fc9c60()*0.0381991);
}

double NNfunction_sb_uRdR::synapse0x2fde6f0() {
   return (neuron0x2fc9fa0()*-0.0324156);
}

double NNfunction_sb_uRdR::synapse0x2fde730() {
   return (neuron0x2fca2e0()*0.0161905);
}

double NNfunction_sb_uRdR::synapse0x2fde770() {
   return (neuron0x2fca620()*0.0151643);
}

double NNfunction_sb_uRdR::synapse0x2fde200() {
   return (neuron0x2fca960()*0.0245662);
}

double NNfunction_sb_uRdR::synapse0x2fde240() {
   return (neuron0x2fcaec0()*0.330095);
}

double NNfunction_sb_uRdR::synapse0x2fde8c0() {
   return (neuron0x2fcb0e0()*0.0887787);
}

double NNfunction_sb_uRdR::synapse0x2fde900() {
   return (neuron0x2fcb420()*0.140018);
}

double NNfunction_sb_uRdR::synapse0x2fde940() {
   return (neuron0x2fcb760()*0.0201969);
}

double NNfunction_sb_uRdR::synapse0x2fde980() {
   return (neuron0x2fcbaa0()*-0.0302277);
}

double NNfunction_sb_uRdR::synapse0x2fde9c0() {
   return (neuron0x2fcbde0()*0.0317249);
}

double NNfunction_sb_uRdR::synapse0x2fdea00() {
   return (neuron0x2fcc120()*0.114888);
}

double NNfunction_sb_uRdR::synapse0x2fded80() {
   return (neuron0x2fc7560()*-0.205606);
}

double NNfunction_sb_uRdR::synapse0x2fdedc0() {
   return (neuron0x2fc78a0()*-0.311316);
}

double NNfunction_sb_uRdR::synapse0x2fdee00() {
   return (neuron0x2fc7be0()*-0.0750746);
}

double NNfunction_sb_uRdR::synapse0x2fdee40() {
   return (neuron0x2fc7f20()*0.676037);
}

double NNfunction_sb_uRdR::synapse0x2fdee80() {
   return (neuron0x2fc8260()*-0.227035);
}

double NNfunction_sb_uRdR::synapse0x2fdeec0() {
   return (neuron0x2fc85a0()*-0.0764869);
}

double NNfunction_sb_uRdR::synapse0x2fdef00() {
   return (neuron0x2fc88e0()*-0.0060375);
}

double NNfunction_sb_uRdR::synapse0x2fdef40() {
   return (neuron0x2fc8c20()*0.0314839);
}

double NNfunction_sb_uRdR::synapse0x2fdef80() {
   return (neuron0x2fc8f60()*-0.39041);
}

double NNfunction_sb_uRdR::synapse0x2fdefc0() {
   return (neuron0x2fc92a0()*0.0575274);
}

double NNfunction_sb_uRdR::synapse0x2fdf000() {
   return (neuron0x2fc95e0()*-0.0752036);
}

double NNfunction_sb_uRdR::synapse0x2fdf040() {
   return (neuron0x2fc9920()*-0.442904);
}

double NNfunction_sb_uRdR::synapse0x2fdf080() {
   return (neuron0x2fc9c60()*0.0253159);
}

double NNfunction_sb_uRdR::synapse0x2fdf0c0() {
   return (neuron0x2fc9fa0()*-0.0452187);
}

double NNfunction_sb_uRdR::synapse0x2fdf100() {
   return (neuron0x2fca2e0()*0.421134);
}

double NNfunction_sb_uRdR::synapse0x2fdf140() {
   return (neuron0x2fca620()*0.489284);
}

double NNfunction_sb_uRdR::synapse0x2fdebd0() {
   return (neuron0x2fca960()*0.32524);
}

double NNfunction_sb_uRdR::synapse0x2fdec10() {
   return (neuron0x2fcaec0()*0.000393869);
}

double NNfunction_sb_uRdR::synapse0x2fdf290() {
   return (neuron0x2fcb0e0()*0.236972);
}

double NNfunction_sb_uRdR::synapse0x2fdf2d0() {
   return (neuron0x2fcb420()*0.178121);
}

double NNfunction_sb_uRdR::synapse0x2fdf310() {
   return (neuron0x2fcb760()*0.0572058);
}

double NNfunction_sb_uRdR::synapse0x2fdf350() {
   return (neuron0x2fcbaa0()*-0.246665);
}

double NNfunction_sb_uRdR::synapse0x2fdf390() {
   return (neuron0x2fcbde0()*0.0409159);
}

double NNfunction_sb_uRdR::synapse0x2fdf3d0() {
   return (neuron0x2fcc120()*-0.147158);
}

double NNfunction_sb_uRdR::synapse0x2fdf750() {
   return (neuron0x2fc7560()*1.58868);
}

double NNfunction_sb_uRdR::synapse0x2fdf790() {
   return (neuron0x2fc78a0()*-0.700008);
}

double NNfunction_sb_uRdR::synapse0x2fdf7d0() {
   return (neuron0x2fc7be0()*-0.878298);
}

double NNfunction_sb_uRdR::synapse0x2fdf810() {
   return (neuron0x2fc7f20()*-1.03819);
}

double NNfunction_sb_uRdR::synapse0x2fdf850() {
   return (neuron0x2fc8260()*0.118472);
}

double NNfunction_sb_uRdR::synapse0x2fdf890() {
   return (neuron0x2fc85a0()*-0.159538);
}

double NNfunction_sb_uRdR::synapse0x2fdf8d0() {
   return (neuron0x2fc88e0()*-0.216917);
}

double NNfunction_sb_uRdR::synapse0x2fdf910() {
   return (neuron0x2fc8c20()*-0.00892939);
}

double NNfunction_sb_uRdR::synapse0x2fdf950() {
   return (neuron0x2fc8f60()*0.390732);
}

double NNfunction_sb_uRdR::synapse0x2fdf990() {
   return (neuron0x2fc92a0()*0.442375);
}

double NNfunction_sb_uRdR::synapse0x2fdf9d0() {
   return (neuron0x2fc95e0()*-0.530837);
}

double NNfunction_sb_uRdR::synapse0x2fdfa10() {
   return (neuron0x2fc9920()*0.362431);
}

double NNfunction_sb_uRdR::synapse0x2fdfa50() {
   return (neuron0x2fc9c60()*-0.609026);
}

double NNfunction_sb_uRdR::synapse0x2fdfa90() {
   return (neuron0x2fc9fa0()*0.566828);
}

double NNfunction_sb_uRdR::synapse0x2fdfad0() {
   return (neuron0x2fca2e0()*0.20959);
}

double NNfunction_sb_uRdR::synapse0x2fdfb10() {
   return (neuron0x2fca620()*0.322849);
}

double NNfunction_sb_uRdR::synapse0x2fdf5a0() {
   return (neuron0x2fca960()*0.203593);
}

double NNfunction_sb_uRdR::synapse0x2fdf5e0() {
   return (neuron0x2fcaec0()*-0.984991);
}

double NNfunction_sb_uRdR::synapse0x2fdfc60() {
   return (neuron0x2fcb0e0()*-0.406907);
}

double NNfunction_sb_uRdR::synapse0x2fdfca0() {
   return (neuron0x2fcb420()*0.72385);
}

double NNfunction_sb_uRdR::synapse0x2fdfce0() {
   return (neuron0x2fcb760()*-0.321957);
}

double NNfunction_sb_uRdR::synapse0x2fdfd20() {
   return (neuron0x2fcbaa0()*-0.0271823);
}

double NNfunction_sb_uRdR::synapse0x2fdfd60() {
   return (neuron0x2fcbde0()*0.323874);
}

double NNfunction_sb_uRdR::synapse0x2fdfda0() {
   return (neuron0x2fcc120()*-0.166201);
}

double NNfunction_sb_uRdR::synapse0x2fe0120() {
   return (neuron0x2fc7560()*0.0268555);
}

double NNfunction_sb_uRdR::synapse0x2fe0160() {
   return (neuron0x2fc78a0()*0.278749);
}

double NNfunction_sb_uRdR::synapse0x2fe01a0() {
   return (neuron0x2fc7be0()*-0.264925);
}

double NNfunction_sb_uRdR::synapse0x2fe01e0() {
   return (neuron0x2fc7f20()*-1.66231);
}

double NNfunction_sb_uRdR::synapse0x2fe0220() {
   return (neuron0x2fc8260()*0.591652);
}

double NNfunction_sb_uRdR::synapse0x2fe0260() {
   return (neuron0x2fc85a0()*0.0192806);
}

double NNfunction_sb_uRdR::synapse0x2fe02a0() {
   return (neuron0x2fc88e0()*-0.259206);
}

double NNfunction_sb_uRdR::synapse0x2fe02e0() {
   return (neuron0x2fc8c20()*0.0326789);
}

double NNfunction_sb_uRdR::synapse0x2fe0320() {
   return (neuron0x2fc8f60()*-0.349804);
}

double NNfunction_sb_uRdR::synapse0x2fe0360() {
   return (neuron0x2fc92a0()*-0.548527);
}

double NNfunction_sb_uRdR::synapse0x2fe03a0() {
   return (neuron0x2fc95e0()*0.286663);
}

double NNfunction_sb_uRdR::synapse0x2fe03e0() {
   return (neuron0x2fc9920()*-0.212221);
}

double NNfunction_sb_uRdR::synapse0x2fe0420() {
   return (neuron0x2fc9c60()*0.51988);
}

double NNfunction_sb_uRdR::synapse0x2fe0460() {
   return (neuron0x2fc9fa0()*-0.0809869);
}

double NNfunction_sb_uRdR::synapse0x2fe04a0() {
   return (neuron0x2fca2e0()*-0.0314972);
}

double NNfunction_sb_uRdR::synapse0x2fe04e0() {
   return (neuron0x2fca620()*-0.0286293);
}

double NNfunction_sb_uRdR::synapse0x2fdff70() {
   return (neuron0x2fca960()*0.166982);
}

double NNfunction_sb_uRdR::synapse0x2fdffb0() {
   return (neuron0x2fcaec0()*-0.774751);
}

double NNfunction_sb_uRdR::synapse0x2fe0630() {
   return (neuron0x2fcb0e0()*0.100508);
}

double NNfunction_sb_uRdR::synapse0x2fe0670() {
   return (neuron0x2fcb420()*0.212466);
}

double NNfunction_sb_uRdR::synapse0x2fe06b0() {
   return (neuron0x2fcb760()*0.0765579);
}

double NNfunction_sb_uRdR::synapse0x2fe06f0() {
   return (neuron0x2fcbaa0()*-0.318405);
}

double NNfunction_sb_uRdR::synapse0x2fe0730() {
   return (neuron0x2fcbde0()*0.238767);
}

double NNfunction_sb_uRdR::synapse0x2fe0770() {
   return (neuron0x2fcc120()*-0.628026);
}

double NNfunction_sb_uRdR::synapse0x2fe0af0() {
   return (neuron0x2fc7560()*0.0178116);
}

double NNfunction_sb_uRdR::synapse0x2fe0b30() {
   return (neuron0x2fc78a0()*0.0220118);
}

double NNfunction_sb_uRdR::synapse0x2fe0b70() {
   return (neuron0x2fc7be0()*-0.0375491);
}

double NNfunction_sb_uRdR::synapse0x2fe0bb0() {
   return (neuron0x2fc7f20()*-0.0926771);
}

double NNfunction_sb_uRdR::synapse0x2fe0bf0() {
   return (neuron0x2fc8260()*-0.0771825);
}

double NNfunction_sb_uRdR::synapse0x2fe0c30() {
   return (neuron0x2fc85a0()*-0.0155257);
}

double NNfunction_sb_uRdR::synapse0x2fe0c70() {
   return (neuron0x2fc88e0()*0.0311276);
}

double NNfunction_sb_uRdR::synapse0x2fe0cb0() {
   return (neuron0x2fc8c20()*0.0462856);
}

double NNfunction_sb_uRdR::synapse0x2fe0cf0() {
   return (neuron0x2fc8f60()*0.0266537);
}

double NNfunction_sb_uRdR::synapse0x2fe0d30() {
   return (neuron0x2fc92a0()*-0.0364883);
}

double NNfunction_sb_uRdR::synapse0x2fe0d70() {
   return (neuron0x2fc95e0()*0.0402239);
}

double NNfunction_sb_uRdR::synapse0x2fe0db0() {
   return (neuron0x2fc9920()*0.158707);
}

double NNfunction_sb_uRdR::synapse0x2fe0df0() {
   return (neuron0x2fc9c60()*0.185187);
}

double NNfunction_sb_uRdR::synapse0x2fe0e30() {
   return (neuron0x2fc9fa0()*-0.0186319);
}

double NNfunction_sb_uRdR::synapse0x2fe0e70() {
   return (neuron0x2fca2e0()*1.60389);
}

double NNfunction_sb_uRdR::synapse0x2fe0eb0() {
   return (neuron0x2fca620()*0.0277755);
}

double NNfunction_sb_uRdR::synapse0x2fe0940() {
   return (neuron0x2fca960()*0.0391505);
}

double NNfunction_sb_uRdR::synapse0x2fe0980() {
   return (neuron0x2fcaec0()*0.935588);
}

double NNfunction_sb_uRdR::synapse0x2fe1000() {
   return (neuron0x2fcb0e0()*0.053485);
}

double NNfunction_sb_uRdR::synapse0x2fe1040() {
   return (neuron0x2fcb420()*-0.0187994);
}

double NNfunction_sb_uRdR::synapse0x2fe1080() {
   return (neuron0x2fcb760()*0.028642);
}

double NNfunction_sb_uRdR::synapse0x2fe10c0() {
   return (neuron0x2fcbaa0()*-7.168e-05);
}

double NNfunction_sb_uRdR::synapse0x2fe1100() {
   return (neuron0x2fcbde0()*-0.0185543);
}

double NNfunction_sb_uRdR::synapse0x2fe1140() {
   return (neuron0x2fcc120()*-0.00760343);
}

double NNfunction_sb_uRdR::synapse0x2fe14c0() {
   return (neuron0x2fc7560()*0.0116868);
}

double NNfunction_sb_uRdR::synapse0x2fe1500() {
   return (neuron0x2fc78a0()*0.0511105);
}

double NNfunction_sb_uRdR::synapse0x2fe1540() {
   return (neuron0x2fc7be0()*0.00252933);
}

double NNfunction_sb_uRdR::synapse0x2fe1580() {
   return (neuron0x2fc7f20()*0.25406);
}

double NNfunction_sb_uRdR::synapse0x2fe15c0() {
   return (neuron0x2fc8260()*-0.00593225);
}

double NNfunction_sb_uRdR::synapse0x2fe1600() {
   return (neuron0x2fc85a0()*0.0232981);
}

double NNfunction_sb_uRdR::synapse0x2fe1640() {
   return (neuron0x2fc88e0()*0.0570624);
}

double NNfunction_sb_uRdR::synapse0x2fe1680() {
   return (neuron0x2fc8c20()*0.0318236);
}

double NNfunction_sb_uRdR::synapse0x2fe16c0() {
   return (neuron0x2fc8f60()*0.011764);
}

double NNfunction_sb_uRdR::synapse0x2fe1700() {
   return (neuron0x2fc92a0()*-0.0447005);
}

double NNfunction_sb_uRdR::synapse0x2fe1740() {
   return (neuron0x2fc95e0()*-0.0292725);
}

double NNfunction_sb_uRdR::synapse0x2fe1780() {
   return (neuron0x2fc9920()*0.0192076);
}

double NNfunction_sb_uRdR::synapse0x2fe17c0() {
   return (neuron0x2fc9c60()*0.149607);
}

double NNfunction_sb_uRdR::synapse0x2fe1800() {
   return (neuron0x2fc9fa0()*-0.0119416);
}

double NNfunction_sb_uRdR::synapse0x2fe1840() {
   return (neuron0x2fca2e0()*2.54148);
}

double NNfunction_sb_uRdR::synapse0x2fe1880() {
   return (neuron0x2fca620()*-0.0562244);
}

double NNfunction_sb_uRdR::synapse0x2fe1310() {
   return (neuron0x2fca960()*0.0608199);
}

double NNfunction_sb_uRdR::synapse0x2fe1350() {
   return (neuron0x2fcaec0()*1.75963);
}

double NNfunction_sb_uRdR::synapse0x2fe19d0() {
   return (neuron0x2fcb0e0()*-0.0412359);
}

double NNfunction_sb_uRdR::synapse0x2fe1a10() {
   return (neuron0x2fcb420()*0.00311786);
}

double NNfunction_sb_uRdR::synapse0x2fe1a50() {
   return (neuron0x2fcb760()*-0.0191037);
}

double NNfunction_sb_uRdR::synapse0x2fe1a90() {
   return (neuron0x2fcbaa0()*0.0438902);
}

double NNfunction_sb_uRdR::synapse0x2fe1ad0() {
   return (neuron0x2fcbde0()*-0.043736);
}

double NNfunction_sb_uRdR::synapse0x2fe1b10() {
   return (neuron0x2fcc120()*0.0168761);
}

double NNfunction_sb_uRdR::synapse0x2fe1e90() {
   return (neuron0x2fc7560()*0.10322);
}

double NNfunction_sb_uRdR::synapse0x2fd6460() {
   return (neuron0x2fc78a0()*0.129331);
}

double NNfunction_sb_uRdR::synapse0x2fd64a0() {
   return (neuron0x2fc7be0()*0.423625);
}

double NNfunction_sb_uRdR::synapse0x2fd64e0() {
   return (neuron0x2fc7f20()*-0.126907);
}

double NNfunction_sb_uRdR::synapse0x2fd6730() {
   return (neuron0x2fc8260()*-0.447446);
}

double NNfunction_sb_uRdR::synapse0x2fd6770() {
   return (neuron0x2fc85a0()*-0.217682);
}

double NNfunction_sb_uRdR::synapse0x2fd67b0() {
   return (neuron0x2fc88e0()*0.342132);
}

double NNfunction_sb_uRdR::synapse0x2fd6a00() {
   return (neuron0x2fc8c20()*0.320429);
}

double NNfunction_sb_uRdR::synapse0x2fd6a40() {
   return (neuron0x2fc8f60()*-0.298954);
}

double NNfunction_sb_uRdR::synapse0x2fd6c90() {
   return (neuron0x2fc92a0()*-0.291562);
}

double NNfunction_sb_uRdR::synapse0x2fd6cd0() {
   return (neuron0x2fc95e0()*0.453661);
}

double NNfunction_sb_uRdR::synapse0x2fd6d10() {
   return (neuron0x2fc9920()*0.15802);
}

double NNfunction_sb_uRdR::synapse0x2fd6f60() {
   return (neuron0x2fc9c60()*0.411933);
}

double NNfunction_sb_uRdR::synapse0x2fd6fa0() {
   return (neuron0x2fc9fa0()*0.054953);
}

double NNfunction_sb_uRdR::synapse0x2fd71f0() {
   return (neuron0x2fca2e0()*0.303448);
}

double NNfunction_sb_uRdR::synapse0x2fd7230() {
   return (neuron0x2fca620()*1.14219);
}

double NNfunction_sb_uRdR::synapse0x2fe1ce0() {
   return (neuron0x2fca960()*0.726984);
}

double NNfunction_sb_uRdR::synapse0x2fe1d20() {
   return (neuron0x2fcaec0()*0.733566);
}

double NNfunction_sb_uRdR::synapse0x2fd7380() {
   return (neuron0x2fcb0e0()*-0.239746);
}

double NNfunction_sb_uRdR::synapse0x2fd7890() {
   return (neuron0x2fcb420()*-0.727005);
}

double NNfunction_sb_uRdR::synapse0x2fd78d0() {
   return (neuron0x2fcb760()*1.46966);
}

double NNfunction_sb_uRdR::synapse0x2fd7910() {
   return (neuron0x2fcbaa0()*0.356672);
}

double NNfunction_sb_uRdR::synapse0x2fd7b60() {
   return (neuron0x2fcbde0()*-0.642223);
}

double NNfunction_sb_uRdR::synapse0x2fd7ba0() {
   return (neuron0x2fcc120()*-0.525145);
}

double NNfunction_sb_uRdR::synapse0x2fd7450() {
   return (neuron0x2fc7560()*0.265326);
}

double NNfunction_sb_uRdR::synapse0x2fd7490() {
   return (neuron0x2fc78a0()*0.374023);
}

double NNfunction_sb_uRdR::synapse0x2fd74d0() {
   return (neuron0x2fc7be0()*0.277737);
}

double NNfunction_sb_uRdR::synapse0x2fd7510() {
   return (neuron0x2fc7f20()*-0.91885);
}

double NNfunction_sb_uRdR::synapse0x2fd7e90() {
   return (neuron0x2fc8260()*-0.491165);
}

double NNfunction_sb_uRdR::synapse0x2fe41e0() {
   return (neuron0x2fc85a0()*-0.178269);
}

double NNfunction_sb_uRdR::synapse0x2fe4220() {
   return (neuron0x2fc88e0()*-0.559183);
}

double NNfunction_sb_uRdR::synapse0x2fe4260() {
   return (neuron0x2fc8c20()*-0.271539);
}

double NNfunction_sb_uRdR::synapse0x2fe42a0() {
   return (neuron0x2fc8f60()*-0.192791);
}

double NNfunction_sb_uRdR::synapse0x2fe42e0() {
   return (neuron0x2fc92a0()*0.0792708);
}

double NNfunction_sb_uRdR::synapse0x2fe4320() {
   return (neuron0x2fc95e0()*-0.0475425);
}

double NNfunction_sb_uRdR::synapse0x2fe4360() {
   return (neuron0x2fc9920()*-0.239979);
}

double NNfunction_sb_uRdR::synapse0x2fe43a0() {
   return (neuron0x2fc9c60()*0.150605);
}

double NNfunction_sb_uRdR::synapse0x2fe43e0() {
   return (neuron0x2fc9fa0()*0.00980579);
}

double NNfunction_sb_uRdR::synapse0x2fe4420() {
   return (neuron0x2fca2e0()*-0.456739);
}

double NNfunction_sb_uRdR::synapse0x2fe4460() {
   return (neuron0x2fca620()*0.262255);
}

double NNfunction_sb_uRdR::synapse0x2fd7d70() {
   return (neuron0x2fca960()*0.13727);
}

double NNfunction_sb_uRdR::synapse0x2fd7db0() {
   return (neuron0x2fcaec0()*-0.337843);
}

double NNfunction_sb_uRdR::synapse0x2fe45b0() {
   return (neuron0x2fcb0e0()*-0.155232);
}

double NNfunction_sb_uRdR::synapse0x2fe45f0() {
   return (neuron0x2fcb420()*0.0591049);
}

double NNfunction_sb_uRdR::synapse0x2fe4630() {
   return (neuron0x2fcb760()*-0.0733001);
}

double NNfunction_sb_uRdR::synapse0x2fe4670() {
   return (neuron0x2fcbaa0()*0.153807);
}

double NNfunction_sb_uRdR::synapse0x2fe46b0() {
   return (neuron0x2fcbde0()*-0.294597);
}

double NNfunction_sb_uRdR::synapse0x2fe46f0() {
   return (neuron0x2fcc120()*0.255324);
}

double NNfunction_sb_uRdR::synapse0x2fe4a70() {
   return (neuron0x2fc7560()*-0.144452);
}

double NNfunction_sb_uRdR::synapse0x2fe4ab0() {
   return (neuron0x2fc78a0()*-0.977985);
}

double NNfunction_sb_uRdR::synapse0x2fe4af0() {
   return (neuron0x2fc7be0()*0.302637);
}

double NNfunction_sb_uRdR::synapse0x2fe4b30() {
   return (neuron0x2fc7f20()*-1.87828);
}

double NNfunction_sb_uRdR::synapse0x2fe4b70() {
   return (neuron0x2fc8260()*0.25462);
}

double NNfunction_sb_uRdR::synapse0x2fe4bb0() {
   return (neuron0x2fc85a0()*-0.0439025);
}

double NNfunction_sb_uRdR::synapse0x2fe4bf0() {
   return (neuron0x2fc88e0()*0.360927);
}

double NNfunction_sb_uRdR::synapse0x2fe4c30() {
   return (neuron0x2fc8c20()*0.304906);
}

double NNfunction_sb_uRdR::synapse0x2fe4c70() {
   return (neuron0x2fc8f60()*-0.0899076);
}

double NNfunction_sb_uRdR::synapse0x2fe4cb0() {
   return (neuron0x2fc92a0()*0.49477);
}

double NNfunction_sb_uRdR::synapse0x2fe4cf0() {
   return (neuron0x2fc95e0()*-0.0264732);
}

double NNfunction_sb_uRdR::synapse0x2fe4d30() {
   return (neuron0x2fc9920()*-0.150272);
}

double NNfunction_sb_uRdR::synapse0x2fe4d70() {
   return (neuron0x2fc9c60()*0.0815355);
}

double NNfunction_sb_uRdR::synapse0x2fe4db0() {
   return (neuron0x2fc9fa0()*-0.00141093);
}

double NNfunction_sb_uRdR::synapse0x2fe4df0() {
   return (neuron0x2fca2e0()*-0.285338);
}

double NNfunction_sb_uRdR::synapse0x2fe4e30() {
   return (neuron0x2fca620()*0.517637);
}

double NNfunction_sb_uRdR::synapse0x2fe48c0() {
   return (neuron0x2fca960()*0.0522164);
}

double NNfunction_sb_uRdR::synapse0x2fe4900() {
   return (neuron0x2fcaec0()*0.033474);
}

double NNfunction_sb_uRdR::synapse0x2fe4f80() {
   return (neuron0x2fcb0e0()*-0.271954);
}

double NNfunction_sb_uRdR::synapse0x2fe4fc0() {
   return (neuron0x2fcb420()*-0.237362);
}

double NNfunction_sb_uRdR::synapse0x2fe5000() {
   return (neuron0x2fcb760()*0.198913);
}

double NNfunction_sb_uRdR::synapse0x2fe5040() {
   return (neuron0x2fcbaa0()*0.088845);
}

double NNfunction_sb_uRdR::synapse0x2fe5080() {
   return (neuron0x2fcbde0()*-0.0256179);
}

double NNfunction_sb_uRdR::synapse0x2fe50c0() {
   return (neuron0x2fcc120()*-0.285608);
}

double NNfunction_sb_uRdR::synapse0x2fe5440() {
   return (neuron0x2fc7560()*-1.16718);
}

double NNfunction_sb_uRdR::synapse0x2fe5480() {
   return (neuron0x2fc78a0()*-1.0529);
}

double NNfunction_sb_uRdR::synapse0x2fe54c0() {
   return (neuron0x2fc7be0()*0.338298);
}

double NNfunction_sb_uRdR::synapse0x2fe5500() {
   return (neuron0x2fc7f20()*0.669613);
}

double NNfunction_sb_uRdR::synapse0x2fe5540() {
   return (neuron0x2fc8260()*0.00607555);
}

double NNfunction_sb_uRdR::synapse0x2fe5580() {
   return (neuron0x2fc85a0()*-0.438359);
}

double NNfunction_sb_uRdR::synapse0x2fe55c0() {
   return (neuron0x2fc88e0()*0.646268);
}

double NNfunction_sb_uRdR::synapse0x2fe5600() {
   return (neuron0x2fc8c20()*0.624636);
}

double NNfunction_sb_uRdR::synapse0x2fe5640() {
   return (neuron0x2fc8f60()*-0.530858);
}

double NNfunction_sb_uRdR::synapse0x2fe5680() {
   return (neuron0x2fc92a0()*-0.840028);
}

double NNfunction_sb_uRdR::synapse0x2fe56c0() {
   return (neuron0x2fc95e0()*-0.212544);
}

double NNfunction_sb_uRdR::synapse0x2fe5700() {
   return (neuron0x2fc9920()*-1.32789);
}

double NNfunction_sb_uRdR::synapse0x2fe5740() {
   return (neuron0x2fc9c60()*-0.113708);
}

double NNfunction_sb_uRdR::synapse0x2fe5780() {
   return (neuron0x2fc9fa0()*0.0598574);
}

double NNfunction_sb_uRdR::synapse0x2fe57c0() {
   return (neuron0x2fca2e0()*-0.750271);
}

double NNfunction_sb_uRdR::synapse0x2fe5800() {
   return (neuron0x2fca620()*-0.15887);
}

double NNfunction_sb_uRdR::synapse0x2fe5290() {
   return (neuron0x2fca960()*0.283934);
}

double NNfunction_sb_uRdR::synapse0x2fe52d0() {
   return (neuron0x2fcaec0()*-0.0513746);
}

double NNfunction_sb_uRdR::synapse0x2fe5950() {
   return (neuron0x2fcb0e0()*-0.688076);
}

double NNfunction_sb_uRdR::synapse0x2fe5990() {
   return (neuron0x2fcb420()*-1.15094);
}

double NNfunction_sb_uRdR::synapse0x2fe59d0() {
   return (neuron0x2fcb760()*-0.936644);
}

double NNfunction_sb_uRdR::synapse0x2fe5a10() {
   return (neuron0x2fcbaa0()*-0.846997);
}

double NNfunction_sb_uRdR::synapse0x2fe5a50() {
   return (neuron0x2fcbde0()*-0.211);
}

double NNfunction_sb_uRdR::synapse0x2fe5a90() {
   return (neuron0x2fcc120()*-0.0685097);
}

double NNfunction_sb_uRdR::synapse0x2fe5e10() {
   return (neuron0x2fc7560()*-0.00163937);
}

double NNfunction_sb_uRdR::synapse0x2fe5e50() {
   return (neuron0x2fc78a0()*-0.0211918);
}

double NNfunction_sb_uRdR::synapse0x2fe5e90() {
   return (neuron0x2fc7be0()*0.0180949);
}

double NNfunction_sb_uRdR::synapse0x2fe5ed0() {
   return (neuron0x2fc7f20()*-0.387425);
}

double NNfunction_sb_uRdR::synapse0x2fe5f10() {
   return (neuron0x2fc8260()*-0.0603758);
}

double NNfunction_sb_uRdR::synapse0x2fe5f50() {
   return (neuron0x2fc85a0()*0.015119);
}

double NNfunction_sb_uRdR::synapse0x2fe5f90() {
   return (neuron0x2fc88e0()*0.000876292);
}

double NNfunction_sb_uRdR::synapse0x2fe5fd0() {
   return (neuron0x2fc8c20()*-0.025846);
}

double NNfunction_sb_uRdR::synapse0x2fe6010() {
   return (neuron0x2fc8f60()*0.0542242);
}

double NNfunction_sb_uRdR::synapse0x2fe6050() {
   return (neuron0x2fc92a0()*0.00819035);
}

double NNfunction_sb_uRdR::synapse0x2fe6090() {
   return (neuron0x2fc95e0()*0.0437656);
}

double NNfunction_sb_uRdR::synapse0x2fe60d0() {
   return (neuron0x2fc9920()*0.0572397);
}

double NNfunction_sb_uRdR::synapse0x2fe6110() {
   return (neuron0x2fc9c60()*0.081148);
}

double NNfunction_sb_uRdR::synapse0x2fe6150() {
   return (neuron0x2fc9fa0()*0.0231309);
}

double NNfunction_sb_uRdR::synapse0x2fe6190() {
   return (neuron0x2fca2e0()*2.43991);
}

double NNfunction_sb_uRdR::synapse0x2fe61d0() {
   return (neuron0x2fca620()*-0.0290964);
}

double NNfunction_sb_uRdR::synapse0x2fe5c60() {
   return (neuron0x2fca960()*0.0616776);
}

double NNfunction_sb_uRdR::synapse0x2fe5ca0() {
   return (neuron0x2fcaec0()*-0.173566);
}

double NNfunction_sb_uRdR::synapse0x2fe6320() {
   return (neuron0x2fcb0e0()*0.0403612);
}

double NNfunction_sb_uRdR::synapse0x2fe6360() {
   return (neuron0x2fcb420()*0.0081517);
}

double NNfunction_sb_uRdR::synapse0x2fe63a0() {
   return (neuron0x2fcb760()*0.00289489);
}

double NNfunction_sb_uRdR::synapse0x2fe63e0() {
   return (neuron0x2fcbaa0()*0.0309023);
}

double NNfunction_sb_uRdR::synapse0x2fe6420() {
   return (neuron0x2fcbde0()*0.013709);
}

double NNfunction_sb_uRdR::synapse0x2fe6460() {
   return (neuron0x2fcc120()*0.0228862);
}

double NNfunction_sb_uRdR::synapse0x2fe67e0() {
   return (neuron0x2fc7560()*-0.973239);
}

double NNfunction_sb_uRdR::synapse0x2fe6820() {
   return (neuron0x2fc78a0()*0.537119);
}

double NNfunction_sb_uRdR::synapse0x2fe6860() {
   return (neuron0x2fc7be0()*0.0355585);
}

double NNfunction_sb_uRdR::synapse0x2fe68a0() {
   return (neuron0x2fc7f20()*-0.504447);
}

double NNfunction_sb_uRdR::synapse0x2fe68e0() {
   return (neuron0x2fc8260()*-0.443042);
}

double NNfunction_sb_uRdR::synapse0x2fe6920() {
   return (neuron0x2fc85a0()*0.0113994);
}

double NNfunction_sb_uRdR::synapse0x2fe6960() {
   return (neuron0x2fc88e0()*-0.148046);
}

double NNfunction_sb_uRdR::synapse0x2fe69a0() {
   return (neuron0x2fc8c20()*1.03695);
}

double NNfunction_sb_uRdR::synapse0x2fe69e0() {
   return (neuron0x2fc8f60()*0.0778174);
}

double NNfunction_sb_uRdR::synapse0x2fe6a20() {
   return (neuron0x2fc92a0()*0.344135);
}

double NNfunction_sb_uRdR::synapse0x2fe6a60() {
   return (neuron0x2fc95e0()*0.0169333);
}

double NNfunction_sb_uRdR::synapse0x2fe6aa0() {
   return (neuron0x2fc9920()*0.30215);
}

double NNfunction_sb_uRdR::synapse0x2fe6ae0() {
   return (neuron0x2fc9c60()*-0.0357495);
}

double NNfunction_sb_uRdR::synapse0x2fe6b20() {
   return (neuron0x2fc9fa0()*0.212718);
}

double NNfunction_sb_uRdR::synapse0x2fe6b60() {
   return (neuron0x2fca2e0()*-0.125782);
}

double NNfunction_sb_uRdR::synapse0x2fe6ba0() {
   return (neuron0x2fca620()*0.240811);
}

double NNfunction_sb_uRdR::synapse0x2fe6630() {
   return (neuron0x2fca960()*0.832403);
}

double NNfunction_sb_uRdR::synapse0x2fe6670() {
   return (neuron0x2fcaec0()*-0.0724803);
}

double NNfunction_sb_uRdR::synapse0x2fe6cf0() {
   return (neuron0x2fcb0e0()*0.33419);
}

double NNfunction_sb_uRdR::synapse0x2fe6d30() {
   return (neuron0x2fcb420()*0.199661);
}

double NNfunction_sb_uRdR::synapse0x2fe6d70() {
   return (neuron0x2fcb760()*-0.61566);
}

double NNfunction_sb_uRdR::synapse0x2fe6db0() {
   return (neuron0x2fcbaa0()*-0.177936);
}

double NNfunction_sb_uRdR::synapse0x2fe6df0() {
   return (neuron0x2fcbde0()*-0.295362);
}

double NNfunction_sb_uRdR::synapse0x2fe6e30() {
   return (neuron0x2fcc120()*0.581572);
}

double NNfunction_sb_uRdR::synapse0x2fe71b0() {
   return (neuron0x2fc7560()*-0.0638322);
}

double NNfunction_sb_uRdR::synapse0x2fe71f0() {
   return (neuron0x2fc78a0()*0.18031);
}

double NNfunction_sb_uRdR::synapse0x2fe7230() {
   return (neuron0x2fc7be0()*-0.00796714);
}

double NNfunction_sb_uRdR::synapse0x2fe7270() {
   return (neuron0x2fc7f20()*-3.16069);
}

double NNfunction_sb_uRdR::synapse0x2fe72b0() {
   return (neuron0x2fc8260()*-0.503233);
}

double NNfunction_sb_uRdR::synapse0x2fe72f0() {
   return (neuron0x2fc85a0()*0.0488196);
}

double NNfunction_sb_uRdR::synapse0x2fe7330() {
   return (neuron0x2fc88e0()*-0.113292);
}

double NNfunction_sb_uRdR::synapse0x2fe7370() {
   return (neuron0x2fc8c20()*-0.0173707);
}

double NNfunction_sb_uRdR::synapse0x2fe73b0() {
   return (neuron0x2fc8f60()*-0.043614);
}

double NNfunction_sb_uRdR::synapse0x2fe73f0() {
   return (neuron0x2fc92a0()*0.215422);
}

double NNfunction_sb_uRdR::synapse0x2fe7430() {
   return (neuron0x2fc95e0()*0.0201133);
}

double NNfunction_sb_uRdR::synapse0x2fe7470() {
   return (neuron0x2fc9920()*-0.601355);
}

double NNfunction_sb_uRdR::synapse0x2fe74b0() {
   return (neuron0x2fc9c60()*-0.243034);
}

double NNfunction_sb_uRdR::synapse0x2fe74f0() {
   return (neuron0x2fc9fa0()*-0.32948);
}

double NNfunction_sb_uRdR::synapse0x2fe7530() {
   return (neuron0x2fca2e0()*-0.270139);
}

double NNfunction_sb_uRdR::synapse0x2fe7570() {
   return (neuron0x2fca620()*0.0280351);
}

double NNfunction_sb_uRdR::synapse0x2fe7000() {
   return (neuron0x2fca960()*-0.0552426);
}

double NNfunction_sb_uRdR::synapse0x2fe7040() {
   return (neuron0x2fcaec0()*-0.278572);
}

double NNfunction_sb_uRdR::synapse0x2fe76c0() {
   return (neuron0x2fcb0e0()*0.0470815);
}

double NNfunction_sb_uRdR::synapse0x2fe7700() {
   return (neuron0x2fcb420()*0.435683);
}

double NNfunction_sb_uRdR::synapse0x2fe7740() {
   return (neuron0x2fcb760()*-0.3681);
}

double NNfunction_sb_uRdR::synapse0x2fe7780() {
   return (neuron0x2fcbaa0()*0.111159);
}

double NNfunction_sb_uRdR::synapse0x2fe77c0() {
   return (neuron0x2fcbde0()*0.0785032);
}

double NNfunction_sb_uRdR::synapse0x2fe7800() {
   return (neuron0x2fcc120()*0.332352);
}

double NNfunction_sb_uRdR::synapse0x2fe7b80() {
   return (neuron0x2fc7560()*-0.265099);
}

double NNfunction_sb_uRdR::synapse0x2fe7bc0() {
   return (neuron0x2fc78a0()*0.32876);
}

double NNfunction_sb_uRdR::synapse0x2fe7c00() {
   return (neuron0x2fc7be0()*-0.136444);
}

double NNfunction_sb_uRdR::synapse0x2fe7c40() {
   return (neuron0x2fc7f20()*2.73075);
}

double NNfunction_sb_uRdR::synapse0x2fe7c80() {
   return (neuron0x2fc8260()*0.492651);
}

double NNfunction_sb_uRdR::synapse0x2fe7cc0() {
   return (neuron0x2fc85a0()*0.318587);
}

double NNfunction_sb_uRdR::synapse0x2fe7d00() {
   return (neuron0x2fc88e0()*0.525772);
}

double NNfunction_sb_uRdR::synapse0x2fe7d40() {
   return (neuron0x2fc8c20()*0.291751);
}

double NNfunction_sb_uRdR::synapse0x2fe7d80() {
   return (neuron0x2fc8f60()*-0.337824);
}

double NNfunction_sb_uRdR::synapse0x2fe7dc0() {
   return (neuron0x2fc92a0()*-0.00338366);
}

double NNfunction_sb_uRdR::synapse0x2fe7e00() {
   return (neuron0x2fc95e0()*-0.620864);
}

double NNfunction_sb_uRdR::synapse0x2fe7e40() {
   return (neuron0x2fc9920()*-1.10152);
}

double NNfunction_sb_uRdR::synapse0x2fe7e80() {
   return (neuron0x2fc9c60()*-0.641187);
}

double NNfunction_sb_uRdR::synapse0x2fe7ec0() {
   return (neuron0x2fc9fa0()*0.316887);
}

double NNfunction_sb_uRdR::synapse0x2fe7f00() {
   return (neuron0x2fca2e0()*-0.327044);
}

double NNfunction_sb_uRdR::synapse0x2fe7f40() {
   return (neuron0x2fca620()*-0.200599);
}

double NNfunction_sb_uRdR::synapse0x2fe79d0() {
   return (neuron0x2fca960()*0.176564);
}

double NNfunction_sb_uRdR::synapse0x2fe7a10() {
   return (neuron0x2fcaec0()*0.861547);
}

double NNfunction_sb_uRdR::synapse0x2fe8090() {
   return (neuron0x2fcb0e0()*-0.10095);
}

double NNfunction_sb_uRdR::synapse0x2fe80d0() {
   return (neuron0x2fcb420()*-0.196799);
}

double NNfunction_sb_uRdR::synapse0x2fe8110() {
   return (neuron0x2fcb760()*0.151866);
}

double NNfunction_sb_uRdR::synapse0x2fe8150() {
   return (neuron0x2fcbaa0()*-0.0233109);
}

double NNfunction_sb_uRdR::synapse0x2fe8190() {
   return (neuron0x2fcbde0()*-0.22031);
}

double NNfunction_sb_uRdR::synapse0x2fe81d0() {
   return (neuron0x2fcc120()*-0.654529);
}

double NNfunction_sb_uRdR::synapse0x2fe8550() {
   return (neuron0x2fc7560()*-0.00384676);
}

double NNfunction_sb_uRdR::synapse0x2fe8590() {
   return (neuron0x2fc78a0()*-0.205119);
}

double NNfunction_sb_uRdR::synapse0x2fe85d0() {
   return (neuron0x2fc7be0()*0.0454669);
}

double NNfunction_sb_uRdR::synapse0x2fe8610() {
   return (neuron0x2fc7f20()*0.329019);
}

double NNfunction_sb_uRdR::synapse0x2fe8650() {
   return (neuron0x2fc8260()*-0.0371761);
}

double NNfunction_sb_uRdR::synapse0x2fe8690() {
   return (neuron0x2fc85a0()*-0.0204167);
}

double NNfunction_sb_uRdR::synapse0x2fe86d0() {
   return (neuron0x2fc88e0()*0.0130375);
}

double NNfunction_sb_uRdR::synapse0x2fe8710() {
   return (neuron0x2fc8c20()*0.0356773);
}

double NNfunction_sb_uRdR::synapse0x2fe8750() {
   return (neuron0x2fc8f60()*0.00451449);
}

double NNfunction_sb_uRdR::synapse0x2fe8790() {
   return (neuron0x2fc92a0()*-0.00599102);
}

double NNfunction_sb_uRdR::synapse0x2fe87d0() {
   return (neuron0x2fc95e0()*0.039297);
}

double NNfunction_sb_uRdR::synapse0x2fe8810() {
   return (neuron0x2fc9920()*0.139577);
}

double NNfunction_sb_uRdR::synapse0x2fe8850() {
   return (neuron0x2fc9c60()*0.102543);
}

double NNfunction_sb_uRdR::synapse0x2fe8890() {
   return (neuron0x2fc9fa0()*0.0641214);
}

double NNfunction_sb_uRdR::synapse0x2fe88d0() {
   return (neuron0x2fca2e0()*0.0111044);
}

double NNfunction_sb_uRdR::synapse0x2fe8910() {
   return (neuron0x2fca620()*0.0979474);
}

double NNfunction_sb_uRdR::synapse0x2fe83a0() {
   return (neuron0x2fca960()*0.108931);
}

double NNfunction_sb_uRdR::synapse0x2fe83e0() {
   return (neuron0x2fcaec0()*-0.113714);
}

double NNfunction_sb_uRdR::synapse0x2fe8a60() {
   return (neuron0x2fcb0e0()*0.0224865);
}

double NNfunction_sb_uRdR::synapse0x2fe8aa0() {
   return (neuron0x2fcb420()*0.107468);
}

double NNfunction_sb_uRdR::synapse0x2fe8ae0() {
   return (neuron0x2fcb760()*-0.0173953);
}

double NNfunction_sb_uRdR::synapse0x2fe8b20() {
   return (neuron0x2fcbaa0()*-0.0453123);
}

double NNfunction_sb_uRdR::synapse0x2fe8b60() {
   return (neuron0x2fcbde0()*0.016905);
}

double NNfunction_sb_uRdR::synapse0x2fe8ba0() {
   return (neuron0x2fcc120()*0.0342106);
}

double NNfunction_sb_uRdR::synapse0x2fd1650() {
   return (neuron0x2fc7560()*0.715874);
}

double NNfunction_sb_uRdR::synapse0x2fd1690() {
   return (neuron0x2fc78a0()*0.393473);
}

double NNfunction_sb_uRdR::synapse0x2fd16d0() {
   return (neuron0x2fc7be0()*0.596546);
}

double NNfunction_sb_uRdR::synapse0x2fd1710() {
   return (neuron0x2fc7f20()*0.200986);
}

double NNfunction_sb_uRdR::synapse0x2fd1750() {
   return (neuron0x2fc8260()*0.0348585);
}

double NNfunction_sb_uRdR::synapse0x2fd1790() {
   return (neuron0x2fc85a0()*-0.847507);
}

double NNfunction_sb_uRdR::synapse0x2fd17d0() {
   return (neuron0x2fc88e0()*-0.0786202);
}

double NNfunction_sb_uRdR::synapse0x2fd1810() {
   return (neuron0x2fc8c20()*0.146561);
}

double NNfunction_sb_uRdR::synapse0x2fe9330() {
   return (neuron0x2fc8f60()*0.426309);
}

double NNfunction_sb_uRdR::synapse0x2fe9370() {
   return (neuron0x2fc92a0()*-0.601162);
}

double NNfunction_sb_uRdR::synapse0x2fe93b0() {
   return (neuron0x2fc95e0()*0.294049);
}

double NNfunction_sb_uRdR::synapse0x2fe93f0() {
   return (neuron0x2fc9920()*0.454699);
}

double NNfunction_sb_uRdR::synapse0x2fe9430() {
   return (neuron0x2fc9c60()*-0.13913);
}

double NNfunction_sb_uRdR::synapse0x2fe9470() {
   return (neuron0x2fc9fa0()*-0.544779);
}

double NNfunction_sb_uRdR::synapse0x2fe94b0() {
   return (neuron0x2fca2e0()*1.02008);
}

double NNfunction_sb_uRdR::synapse0x2fe94f0() {
   return (neuron0x2fca620()*-1.03282);
}

double NNfunction_sb_uRdR::synapse0x2fe8d70() {
   return (neuron0x2fca960()*0.0718937);
}

double NNfunction_sb_uRdR::synapse0x2fe8db0() {
   return (neuron0x2fcaec0()*0.158742);
}

double NNfunction_sb_uRdR::synapse0x2fe9640() {
   return (neuron0x2fcb0e0()*-1.11582);
}

double NNfunction_sb_uRdR::synapse0x2fe9680() {
   return (neuron0x2fcb420()*-0.323159);
}

double NNfunction_sb_uRdR::synapse0x2fe96c0() {
   return (neuron0x2fcb760()*0.842263);
}

double NNfunction_sb_uRdR::synapse0x2fe9700() {
   return (neuron0x2fcbaa0()*-0.4635);
}

double NNfunction_sb_uRdR::synapse0x2fe9740() {
   return (neuron0x2fcbde0()*-0.634469);
}

double NNfunction_sb_uRdR::synapse0x2fe9780() {
   return (neuron0x2fcc120()*-0.26288);
}

double NNfunction_sb_uRdR::synapse0x2fe9b00() {
   return (neuron0x2fc7560()*-0.552916);
}

double NNfunction_sb_uRdR::synapse0x2fe9b40() {
   return (neuron0x2fc78a0()*0.357373);
}

double NNfunction_sb_uRdR::synapse0x2fe9b80() {
   return (neuron0x2fc7be0()*-0.411099);
}

double NNfunction_sb_uRdR::synapse0x2fe9bc0() {
   return (neuron0x2fc7f20()*0.964121);
}

double NNfunction_sb_uRdR::synapse0x2fe9c00() {
   return (neuron0x2fc8260()*-0.65052);
}

double NNfunction_sb_uRdR::synapse0x2fe9c40() {
   return (neuron0x2fc85a0()*-0.220437);
}

double NNfunction_sb_uRdR::synapse0x2fe9c80() {
   return (neuron0x2fc88e0()*-0.157949);
}

double NNfunction_sb_uRdR::synapse0x2fe9cc0() {
   return (neuron0x2fc8c20()*-0.341135);
}

double NNfunction_sb_uRdR::synapse0x2fe9d00() {
   return (neuron0x2fc8f60()*-0.173594);
}

double NNfunction_sb_uRdR::synapse0x2fe9d40() {
   return (neuron0x2fc92a0()*-0.0483893);
}

double NNfunction_sb_uRdR::synapse0x2fe9d80() {
   return (neuron0x2fc95e0()*-0.0956373);
}

double NNfunction_sb_uRdR::synapse0x2fe9dc0() {
   return (neuron0x2fc9920()*0.303611);
}

double NNfunction_sb_uRdR::synapse0x2fe9e00() {
   return (neuron0x2fc9c60()*0.0789389);
}

double NNfunction_sb_uRdR::synapse0x2fe9e40() {
   return (neuron0x2fc9fa0()*-0.717768);
}

double NNfunction_sb_uRdR::synapse0x2fe9e80() {
   return (neuron0x2fca2e0()*0.230868);
}

double NNfunction_sb_uRdR::synapse0x2fe9ec0() {
   return (neuron0x2fca620()*-0.374684);
}

double NNfunction_sb_uRdR::synapse0x2fe9950() {
   return (neuron0x2fca960()*-0.0973992);
}

double NNfunction_sb_uRdR::synapse0x2fe9990() {
   return (neuron0x2fcaec0()*-0.777222);
}

double NNfunction_sb_uRdR::synapse0x2fea010() {
   return (neuron0x2fcb0e0()*0.309355);
}

double NNfunction_sb_uRdR::synapse0x2fea050() {
   return (neuron0x2fcb420()*0.276434);
}

double NNfunction_sb_uRdR::synapse0x2fea090() {
   return (neuron0x2fcb760()*-0.496382);
}

double NNfunction_sb_uRdR::synapse0x2fea0d0() {
   return (neuron0x2fcbaa0()*0.591271);
}

double NNfunction_sb_uRdR::synapse0x2fea110() {
   return (neuron0x2fcbde0()*-0.898772);
}

double NNfunction_sb_uRdR::synapse0x2fea150() {
   return (neuron0x2fcc120()*0.323247);
}

double NNfunction_sb_uRdR::synapse0x2fea4d0() {
   return (neuron0x2fc7560()*0.094131);
}

double NNfunction_sb_uRdR::synapse0x2fea510() {
   return (neuron0x2fc78a0()*0.224616);
}

double NNfunction_sb_uRdR::synapse0x2fea550() {
   return (neuron0x2fc7be0()*0.0213498);
}

double NNfunction_sb_uRdR::synapse0x2fea590() {
   return (neuron0x2fc7f20()*-0.167899);
}

double NNfunction_sb_uRdR::synapse0x2fea5d0() {
   return (neuron0x2fc8260()*0.0470255);
}

double NNfunction_sb_uRdR::synapse0x2fea610() {
   return (neuron0x2fc85a0()*-0.156182);
}

double NNfunction_sb_uRdR::synapse0x2fea650() {
   return (neuron0x2fc88e0()*-0.0266744);
}

double NNfunction_sb_uRdR::synapse0x2fea690() {
   return (neuron0x2fc8c20()*0.017352);
}

double NNfunction_sb_uRdR::synapse0x2fea6d0() {
   return (neuron0x2fc8f60()*0.0168616);
}

double NNfunction_sb_uRdR::synapse0x2fea710() {
   return (neuron0x2fc92a0()*-0.0286768);
}

double NNfunction_sb_uRdR::synapse0x2fea750() {
   return (neuron0x2fc95e0()*0.046555);
}

double NNfunction_sb_uRdR::synapse0x2fea790() {
   return (neuron0x2fc9920()*-0.234689);
}

double NNfunction_sb_uRdR::synapse0x2fea7d0() {
   return (neuron0x2fc9c60()*-0.526163);
}

double NNfunction_sb_uRdR::synapse0x2fea810() {
   return (neuron0x2fc9fa0()*0.150917);
}

double NNfunction_sb_uRdR::synapse0x2fea850() {
   return (neuron0x2fca2e0()*-0.0693472);
}

double NNfunction_sb_uRdR::synapse0x2fea890() {
   return (neuron0x2fca620()*-0.180344);
}

double NNfunction_sb_uRdR::synapse0x2fea320() {
   return (neuron0x2fca960()*0.0822022);
}

double NNfunction_sb_uRdR::synapse0x2fea360() {
   return (neuron0x2fcaec0()*-0.22539);
}

double NNfunction_sb_uRdR::synapse0x2fdae90() {
   return (neuron0x2fcb0e0()*-0.29734);
}

double NNfunction_sb_uRdR::synapse0x2fdaed0() {
   return (neuron0x2fcb420()*0.158628);
}

double NNfunction_sb_uRdR::synapse0x2fdaf10() {
   return (neuron0x2fcb760()*0.0792718);
}

double NNfunction_sb_uRdR::synapse0x2fdaf50() {
   return (neuron0x2fcbaa0()*-0.154046);
}

double NNfunction_sb_uRdR::synapse0x2fdaf90() {
   return (neuron0x2fcbde0()*-0.060303);
}

double NNfunction_sb_uRdR::synapse0x2fdafd0() {
   return (neuron0x2fcc120()*0.0713846);
}

double NNfunction_sb_uRdR::synapse0x2fdb350() {
   return (neuron0x2fc7560()*-0.0268619);
}

double NNfunction_sb_uRdR::synapse0x2fdb390() {
   return (neuron0x2fc78a0()*0.854023);
}

double NNfunction_sb_uRdR::synapse0x2fdb3d0() {
   return (neuron0x2fc7be0()*-0.0827841);
}

double NNfunction_sb_uRdR::synapse0x2fdb410() {
   return (neuron0x2fc7f20()*-0.195658);
}

double NNfunction_sb_uRdR::synapse0x2fdb450() {
   return (neuron0x2fc8260()*-0.317363);
}

double NNfunction_sb_uRdR::synapse0x2fdb490() {
   return (neuron0x2fc85a0()*-0.221923);
}

double NNfunction_sb_uRdR::synapse0x2fdb4d0() {
   return (neuron0x2fc88e0()*0.29165);
}

double NNfunction_sb_uRdR::synapse0x2fdb510() {
   return (neuron0x2fc8c20()*0.142919);
}

double NNfunction_sb_uRdR::synapse0x2fdb550() {
   return (neuron0x2fc8f60()*0.380597);
}

double NNfunction_sb_uRdR::synapse0x2fdb590() {
   return (neuron0x2fc92a0()*0.206202);
}

double NNfunction_sb_uRdR::synapse0x2fdb5d0() {
   return (neuron0x2fc95e0()*0.148769);
}

double NNfunction_sb_uRdR::synapse0x2fdb610() {
   return (neuron0x2fc9920()*0.976897);
}

double NNfunction_sb_uRdR::synapse0x2fdb650() {
   return (neuron0x2fc9c60()*-0.419891);
}

double NNfunction_sb_uRdR::synapse0x2fdb690() {
   return (neuron0x2fc9fa0()*-0.311118);
}

double NNfunction_sb_uRdR::synapse0x2fdb6d0() {
   return (neuron0x2fca2e0()*0.138465);
}

double NNfunction_sb_uRdR::synapse0x2fdb710() {
   return (neuron0x2fca620()*0.332319);
}

double NNfunction_sb_uRdR::synapse0x2fdb1a0() {
   return (neuron0x2fca960()*0.541411);
}

double NNfunction_sb_uRdR::synapse0x2fdb1e0() {
   return (neuron0x2fcaec0()*-1.00612);
}

double NNfunction_sb_uRdR::synapse0x2fdb860() {
   return (neuron0x2fcb0e0()*-0.245879);
}

double NNfunction_sb_uRdR::synapse0x2fdb8a0() {
   return (neuron0x2fcb420()*-0.0894866);
}

double NNfunction_sb_uRdR::synapse0x2fdb8e0() {
   return (neuron0x2fcb760()*-0.280748);
}

double NNfunction_sb_uRdR::synapse0x2fdb920() {
   return (neuron0x2fcbaa0()*0.128357);
}

double NNfunction_sb_uRdR::synapse0x2fdb960() {
   return (neuron0x2fcbde0()*-0.132697);
}

double NNfunction_sb_uRdR::synapse0x2fdb9a0() {
   return (neuron0x2fcc120()*-0.100487);
}

double NNfunction_sb_uRdR::synapse0x2fdbd20() {
   return (neuron0x2fc7560()*-0.230699);
}

double NNfunction_sb_uRdR::synapse0x2fdbd60() {
   return (neuron0x2fc78a0()*0.0489717);
}

double NNfunction_sb_uRdR::synapse0x2fdbda0() {
   return (neuron0x2fc7be0()*0.301775);
}

double NNfunction_sb_uRdR::synapse0x2fdbde0() {
   return (neuron0x2fc7f20()*-0.40189);
}

double NNfunction_sb_uRdR::synapse0x2fdbe20() {
   return (neuron0x2fc8260()*-0.518975);
}

double NNfunction_sb_uRdR::synapse0x2fdbe60() {
   return (neuron0x2fc85a0()*0.00390734);
}

double NNfunction_sb_uRdR::synapse0x2fdbea0() {
   return (neuron0x2fc88e0()*-0.446991);
}

double NNfunction_sb_uRdR::synapse0x2fdbee0() {
   return (neuron0x2fc8c20()*-0.116475);
}

double NNfunction_sb_uRdR::synapse0x2fdbf20() {
   return (neuron0x2fc8f60()*-0.0348277);
}

double NNfunction_sb_uRdR::synapse0x2fdbf60() {
   return (neuron0x2fc92a0()*0.281082);
}

double NNfunction_sb_uRdR::synapse0x2fdbfa0() {
   return (neuron0x2fc95e0()*0.475374);
}

double NNfunction_sb_uRdR::synapse0x2fdbfe0() {
   return (neuron0x2fc9920()*0.23693);
}

double NNfunction_sb_uRdR::synapse0x2fdc020() {
   return (neuron0x2fc9c60()*0.345958);
}

double NNfunction_sb_uRdR::synapse0x2fdc060() {
   return (neuron0x2fc9fa0()*-0.186239);
}

double NNfunction_sb_uRdR::synapse0x2fdc0a0() {
   return (neuron0x2fca2e0()*0.0188554);
}

double NNfunction_sb_uRdR::synapse0x2fdc0e0() {
   return (neuron0x2fca620()*0.465841);
}

double NNfunction_sb_uRdR::synapse0x2fdbb70() {
   return (neuron0x2fca960()*0.370253);
}

double NNfunction_sb_uRdR::synapse0x2fdbbb0() {
   return (neuron0x2fcaec0()*-0.35374);
}

double NNfunction_sb_uRdR::synapse0x2fdc230() {
   return (neuron0x2fcb0e0()*-0.392336);
}

double NNfunction_sb_uRdR::synapse0x2fdc270() {
   return (neuron0x2fcb420()*-0.448308);
}

double NNfunction_sb_uRdR::synapse0x2fdc2b0() {
   return (neuron0x2fcb760()*0.217076);
}

double NNfunction_sb_uRdR::synapse0x2fdc2f0() {
   return (neuron0x2fcbaa0()*0.321662);
}

double NNfunction_sb_uRdR::synapse0x2fdc330() {
   return (neuron0x2fcbde0()*-0.303118);
}

double NNfunction_sb_uRdR::synapse0x2fdc370() {
   return (neuron0x2fcc120()*-0.0631469);
}

double NNfunction_sb_uRdR::synapse0x2fdc6f0() {
   return (neuron0x2fc7560()*0.290036);
}

double NNfunction_sb_uRdR::synapse0x2fdc730() {
   return (neuron0x2fc78a0()*0.405402);
}

double NNfunction_sb_uRdR::synapse0x2fdc770() {
   return (neuron0x2fc7be0()*-0.0381377);
}

double NNfunction_sb_uRdR::synapse0x2fdc7b0() {
   return (neuron0x2fc7f20()*1.99235);
}

double NNfunction_sb_uRdR::synapse0x2fdc7f0() {
   return (neuron0x2fc8260()*-0.251415);
}

double NNfunction_sb_uRdR::synapse0x2fdc830() {
   return (neuron0x2fc85a0()*0.130708);
}

double NNfunction_sb_uRdR::synapse0x2fdc870() {
   return (neuron0x2fc88e0()*-0.154055);
}

double NNfunction_sb_uRdR::synapse0x2fdc8b0() {
   return (neuron0x2fc8c20()*0.367287);
}

double NNfunction_sb_uRdR::synapse0x2fdc8f0() {
   return (neuron0x2fc8f60()*0.0847674);
}

double NNfunction_sb_uRdR::synapse0x2fdc930() {
   return (neuron0x2fc92a0()*-0.475171);
}

double NNfunction_sb_uRdR::synapse0x2fdc970() {
   return (neuron0x2fc95e0()*0.334652);
}

double NNfunction_sb_uRdR::synapse0x2fdc9b0() {
   return (neuron0x2fc9920()*0.280817);
}

double NNfunction_sb_uRdR::synapse0x2fdc9f0() {
   return (neuron0x2fc9c60()*-0.0491443);
}

double NNfunction_sb_uRdR::synapse0x2fdca30() {
   return (neuron0x2fc9fa0()*0.0698015);
}

double NNfunction_sb_uRdR::synapse0x2fdca70() {
   return (neuron0x2fca2e0()*0.384024);
}

double NNfunction_sb_uRdR::synapse0x2fdcab0() {
   return (neuron0x2fca620()*0.266917);
}

double NNfunction_sb_uRdR::synapse0x2fdc540() {
   return (neuron0x2fca960()*0.173832);
}

double NNfunction_sb_uRdR::synapse0x2fdc580() {
   return (neuron0x2fcaec0()*0.199818);
}

double NNfunction_sb_uRdR::synapse0x2fdcc00() {
   return (neuron0x2fcb0e0()*0.244038);
}

double NNfunction_sb_uRdR::synapse0x2fdcc40() {
   return (neuron0x2fcb420()*0.216365);
}

double NNfunction_sb_uRdR::synapse0x2fdcc80() {
   return (neuron0x2fcb760()*-0.135081);
}

double NNfunction_sb_uRdR::synapse0x2fdccc0() {
   return (neuron0x2fcbaa0()*-0.0478681);
}

double NNfunction_sb_uRdR::synapse0x2fdcd00() {
   return (neuron0x2fcbde0()*-0.21314);
}

double NNfunction_sb_uRdR::synapse0x2fdcd40() {
   return (neuron0x2fcc120()*-0.1332);
}

double NNfunction_sb_uRdR::synapse0x2feec10() {
   return (neuron0x2fc7560()*0.258924);
}

double NNfunction_sb_uRdR::synapse0x2feec50() {
   return (neuron0x2fc78a0()*0.768842);
}

double NNfunction_sb_uRdR::synapse0x2feec90() {
   return (neuron0x2fc7be0()*0.343729);
}

double NNfunction_sb_uRdR::synapse0x2feecd0() {
   return (neuron0x2fc7f20()*0.639749);
}

double NNfunction_sb_uRdR::synapse0x2feed10() {
   return (neuron0x2fc8260()*-0.373343);
}

double NNfunction_sb_uRdR::synapse0x2feed50() {
   return (neuron0x2fc85a0()*-0.277851);
}

double NNfunction_sb_uRdR::synapse0x2feed90() {
   return (neuron0x2fc88e0()*-0.121505);
}

double NNfunction_sb_uRdR::synapse0x2feedd0() {
   return (neuron0x2fc8c20()*0.178763);
}

double NNfunction_sb_uRdR::synapse0x2feee10() {
   return (neuron0x2fc8f60()*-0.0559234);
}

double NNfunction_sb_uRdR::synapse0x2feee50() {
   return (neuron0x2fc92a0()*0.0981953);
}

double NNfunction_sb_uRdR::synapse0x2feee90() {
   return (neuron0x2fc95e0()*-0.0908757);
}

double NNfunction_sb_uRdR::synapse0x2feeed0() {
   return (neuron0x2fc9920()*-0.807605);
}

double NNfunction_sb_uRdR::synapse0x2feef10() {
   return (neuron0x2fc9c60()*-0.824215);
}

double NNfunction_sb_uRdR::synapse0x2feef50() {
   return (neuron0x2fc9fa0()*0.186133);
}

double NNfunction_sb_uRdR::synapse0x2feef90() {
   return (neuron0x2fca2e0()*0.212553);
}

double NNfunction_sb_uRdR::synapse0x2feefd0() {
   return (neuron0x2fca620()*0.373466);
}

double NNfunction_sb_uRdR::synapse0x2fdcd80() {
   return (neuron0x2fca960()*-0.410045);
}

double NNfunction_sb_uRdR::synapse0x2fdcdc0() {
   return (neuron0x2fcaec0()*0.177384);
}

double NNfunction_sb_uRdR::synapse0x2fef120() {
   return (neuron0x2fcb0e0()*-0.780894);
}

double NNfunction_sb_uRdR::synapse0x2fef160() {
   return (neuron0x2fcb420()*0.351934);
}

double NNfunction_sb_uRdR::synapse0x2fef1a0() {
   return (neuron0x2fcb760()*0.372867);
}

double NNfunction_sb_uRdR::synapse0x2fef1e0() {
   return (neuron0x2fcbaa0()*0.429556);
}

double NNfunction_sb_uRdR::synapse0x2fef220() {
   return (neuron0x2fcbde0()*0.0126017);
}

double NNfunction_sb_uRdR::synapse0x2fef260() {
   return (neuron0x2fcc120()*-0.0812292);
}

double NNfunction_sb_uRdR::synapse0x2fef5e0() {
   return (neuron0x2fc7560()*1.45431);
}

double NNfunction_sb_uRdR::synapse0x2fef620() {
   return (neuron0x2fc78a0()*-0.484354);
}

double NNfunction_sb_uRdR::synapse0x2fef660() {
   return (neuron0x2fc7be0()*0.813934);
}

double NNfunction_sb_uRdR::synapse0x2fef6a0() {
   return (neuron0x2fc7f20()*0.880123);
}

double NNfunction_sb_uRdR::synapse0x2fef6e0() {
   return (neuron0x2fc8260()*-0.171825);
}

double NNfunction_sb_uRdR::synapse0x2fef720() {
   return (neuron0x2fc85a0()*0.454735);
}

double NNfunction_sb_uRdR::synapse0x2fef760() {
   return (neuron0x2fc88e0()*-0.732776);
}

double NNfunction_sb_uRdR::synapse0x2fef7a0() {
   return (neuron0x2fc8c20()*0.102147);
}

double NNfunction_sb_uRdR::synapse0x2fef7e0() {
   return (neuron0x2fc8f60()*-0.127004);
}

double NNfunction_sb_uRdR::synapse0x2fef820() {
   return (neuron0x2fc92a0()*-0.0982784);
}

double NNfunction_sb_uRdR::synapse0x2fef860() {
   return (neuron0x2fc95e0()*0.377493);
}

double NNfunction_sb_uRdR::synapse0x2fef8a0() {
   return (neuron0x2fc9920()*-0.551892);
}

double NNfunction_sb_uRdR::synapse0x2fef8e0() {
   return (neuron0x2fc9c60()*-0.106302);
}

double NNfunction_sb_uRdR::synapse0x2fef920() {
   return (neuron0x2fc9fa0()*-0.0863408);
}

double NNfunction_sb_uRdR::synapse0x2fef960() {
   return (neuron0x2fca2e0()*-0.46092);
}

double NNfunction_sb_uRdR::synapse0x2fef9a0() {
   return (neuron0x2fca620()*0.633143);
}

double NNfunction_sb_uRdR::synapse0x2fef430() {
   return (neuron0x2fca960()*-0.554978);
}

double NNfunction_sb_uRdR::synapse0x2fef470() {
   return (neuron0x2fcaec0()*0.0494234);
}

double NNfunction_sb_uRdR::synapse0x2fefaf0() {
   return (neuron0x2fcb0e0()*-0.10587);
}

double NNfunction_sb_uRdR::synapse0x2fefb30() {
   return (neuron0x2fcb420()*-0.326571);
}

double NNfunction_sb_uRdR::synapse0x2fefb70() {
   return (neuron0x2fcb760()*-0.968527);
}

double NNfunction_sb_uRdR::synapse0x2fefbb0() {
   return (neuron0x2fcbaa0()*-0.248112);
}

double NNfunction_sb_uRdR::synapse0x2fefbf0() {
   return (neuron0x2fcbde0()*0.0383537);
}

double NNfunction_sb_uRdR::synapse0x2fefc30() {
   return (neuron0x2fcc120()*0.996295);
}

double NNfunction_sb_uRdR::synapse0x2feffb0() {
   return (neuron0x2fc7560()*0.0179717);
}

double NNfunction_sb_uRdR::synapse0x2fefff0() {
   return (neuron0x2fc78a0()*0.059269);
}

double NNfunction_sb_uRdR::synapse0x2ff0030() {
   return (neuron0x2fc7be0()*-0.0255007);
}

double NNfunction_sb_uRdR::synapse0x2ff0070() {
   return (neuron0x2fc7f20()*-0.903532);
}

double NNfunction_sb_uRdR::synapse0x2ff00b0() {
   return (neuron0x2fc8260()*0.0746722);
}

double NNfunction_sb_uRdR::synapse0x2ff00f0() {
   return (neuron0x2fc85a0()*0.0302379);
}

double NNfunction_sb_uRdR::synapse0x2ff0130() {
   return (neuron0x2fc88e0()*0.0468291);
}

double NNfunction_sb_uRdR::synapse0x2ff0170() {
   return (neuron0x2fc8c20()*0.00854674);
}

double NNfunction_sb_uRdR::synapse0x2ff01b0() {
   return (neuron0x2fc8f60()*0.0400843);
}

double NNfunction_sb_uRdR::synapse0x2ff01f0() {
   return (neuron0x2fc92a0()*-0.087622);
}

double NNfunction_sb_uRdR::synapse0x2ff0230() {
   return (neuron0x2fc95e0()*-0.0666208);
}

double NNfunction_sb_uRdR::synapse0x2ff0270() {
   return (neuron0x2fc9920()*0.245908);
}

double NNfunction_sb_uRdR::synapse0x2ff02b0() {
   return (neuron0x2fc9c60()*0.214257);
}

double NNfunction_sb_uRdR::synapse0x2ff02f0() {
   return (neuron0x2fc9fa0()*0.0911636);
}

double NNfunction_sb_uRdR::synapse0x2ff0330() {
   return (neuron0x2fca2e0()*-0.0608482);
}

double NNfunction_sb_uRdR::synapse0x2ff0370() {
   return (neuron0x2fca620()*0.0497815);
}

double NNfunction_sb_uRdR::synapse0x2fefe00() {
   return (neuron0x2fca960()*0.037319);
}

double NNfunction_sb_uRdR::synapse0x2fefe40() {
   return (neuron0x2fcaec0()*-0.295661);
}

double NNfunction_sb_uRdR::synapse0x2ff04c0() {
   return (neuron0x2fcb0e0()*0.0845223);
}

double NNfunction_sb_uRdR::synapse0x2ff0500() {
   return (neuron0x2fcb420()*-0.0378658);
}

double NNfunction_sb_uRdR::synapse0x2ff0540() {
   return (neuron0x2fcb760()*0.0444313);
}

double NNfunction_sb_uRdR::synapse0x2ff0580() {
   return (neuron0x2fcbaa0()*0.040599);
}

double NNfunction_sb_uRdR::synapse0x2ff05c0() {
   return (neuron0x2fcbde0()*0.00971322);
}

double NNfunction_sb_uRdR::synapse0x2ff0600() {
   return (neuron0x2fcc120()*-0.0560878);
}

double NNfunction_sb_uRdR::synapse0x2ff0980() {
   return (neuron0x2fc7560()*0.00155132);
}

double NNfunction_sb_uRdR::synapse0x2ff09c0() {
   return (neuron0x2fc78a0()*0.00512373);
}

double NNfunction_sb_uRdR::synapse0x2ff0a00() {
   return (neuron0x2fc7be0()*-0.0379151);
}

double NNfunction_sb_uRdR::synapse0x2ff0a40() {
   return (neuron0x2fc7f20()*-3.42809);
}

double NNfunction_sb_uRdR::synapse0x2ff0a80() {
   return (neuron0x2fc8260()*0.0297767);
}

double NNfunction_sb_uRdR::synapse0x2ff0ac0() {
   return (neuron0x2fc85a0()*-0.0249168);
}

double NNfunction_sb_uRdR::synapse0x2ff0b00() {
   return (neuron0x2fc88e0()*0.00684212);
}

double NNfunction_sb_uRdR::synapse0x2ff0b40() {
   return (neuron0x2fc8c20()*-0.00513561);
}

double NNfunction_sb_uRdR::synapse0x2ff0b80() {
   return (neuron0x2fc8f60()*-0.00976665);
}

double NNfunction_sb_uRdR::synapse0x2ff0bc0() {
   return (neuron0x2fc92a0()*0.031421);
}

double NNfunction_sb_uRdR::synapse0x2ff0c00() {
   return (neuron0x2fc95e0()*0.019359);
}

double NNfunction_sb_uRdR::synapse0x2ff0c40() {
   return (neuron0x2fc9920()*-0.0747249);
}

double NNfunction_sb_uRdR::synapse0x2ff0c80() {
   return (neuron0x2fc9c60()*-0.0502412);
}

double NNfunction_sb_uRdR::synapse0x2ff0cc0() {
   return (neuron0x2fc9fa0()*-0.0486371);
}

double NNfunction_sb_uRdR::synapse0x2ff0d00() {
   return (neuron0x2fca2e0()*0.396437);
}

double NNfunction_sb_uRdR::synapse0x2ff0d40() {
   return (neuron0x2fca620()*-0.0474207);
}

double NNfunction_sb_uRdR::synapse0x2ff07d0() {
   return (neuron0x2fca960()*-0.0516912);
}

double NNfunction_sb_uRdR::synapse0x2ff0810() {
   return (neuron0x2fcaec0()*0.387699);
}

double NNfunction_sb_uRdR::synapse0x2ff0e90() {
   return (neuron0x2fcb0e0()*-0.0127166);
}

double NNfunction_sb_uRdR::synapse0x2ff0ed0() {
   return (neuron0x2fcb420()*-0.0437274);
}

double NNfunction_sb_uRdR::synapse0x2ff0f10() {
   return (neuron0x2fcb760()*-0.00418072);
}

double NNfunction_sb_uRdR::synapse0x2ff0f50() {
   return (neuron0x2fcbaa0()*-0.00528717);
}

double NNfunction_sb_uRdR::synapse0x2ff0f90() {
   return (neuron0x2fcbde0()*-0.0230596);
}

double NNfunction_sb_uRdR::synapse0x2ff0fd0() {
   return (neuron0x2fcc120()*-0.0362378);
}

double NNfunction_sb_uRdR::synapse0x2fcd570() {
   return (neuron0x2fcc5c0()*0.0473865);
}

double NNfunction_sb_uRdR::synapse0x2fcd5b0() {
   return (neuron0x2fcced0()*0.00644592);
}

double NNfunction_sb_uRdR::synapse0x2fcea80() {
   return (neuron0x2fcd9b0()*-0.480059);
}

double NNfunction_sb_uRdR::synapse0x2fceac0() {
   return (neuron0x2d87240()*-1.39244);
}

double NNfunction_sb_uRdR::synapse0x2fcf450() {
   return (neuron0x2fce7d0()*-0.0401958);
}

double NNfunction_sb_uRdR::synapse0x2fcf490() {
   return (neuron0x2fcf1a0()*0.0144452);
}

double NNfunction_sb_uRdR::synapse0x2fd0220() {
   return (neuron0x2fcff70()*-1.35026);
}

double NNfunction_sb_uRdR::synapse0x2fd0260() {
   return (neuron0x2fd0940()*-0.00124266);
}

double NNfunction_sb_uRdR::synapse0x2fd0bf0() {
   return (neuron0x2fd1310()*-1.42144);
}

double NNfunction_sb_uRdR::synapse0x2fd0c30() {
   return (neuron0x2fd1df0()*-4.69278);
}

double NNfunction_sb_uRdR::synapse0x2fd15c0() {
   return (neuron0x2fd27c0()*-0.0214191);
}

double NNfunction_sb_uRdR::synapse0x2fd1600() {
   return (neuron0x2fcf8a0()*0.282391);
}

double NNfunction_sb_uRdR::synapse0x2fd20a0() {
   return (neuron0x2fd4370()*-0.0718204);
}

double NNfunction_sb_uRdR::synapse0x2fd20e0() {
   return (neuron0x2fd4d40()*0.364321);
}

double NNfunction_sb_uRdR::synapse0x2fd2a70() {
   return (neuron0x2fd5710()*0.0104869);
}

double NNfunction_sb_uRdR::synapse0x2fd2ab0() {
   return (neuron0x2fd60e0()*1.80184);
}

double NNfunction_sb_uRdR::synapse0x2fcfb50() {
   return (neuron0x2fd7ef0()*0.00906541);
}

double NNfunction_sb_uRdR::synapse0x2fcfb90() {
   return (neuron0x2fd81d0()*-0.112318);
}

double NNfunction_sb_uRdR::synapse0x2fd4620() {
   return (neuron0x2fd8ba0()*0.14178);
}

double NNfunction_sb_uRdR::synapse0x2fd4660() {
   return (neuron0x2fd9570()*-0.0274306);
}

double NNfunction_sb_uRdR::synapse0x2fd4ff0() {
   return (neuron0x2fd9f40()*2.4077);
}

double NNfunction_sb_uRdR::synapse0x2fd5030() {
   return (neuron0x2fda910()*2.20396);
}

double NNfunction_sb_uRdR::synapse0x2fd59c0() {
   return (neuron0x2fd3460()*2.40557);
}

double NNfunction_sb_uRdR::synapse0x2fd5a00() {
   return (neuron0x2fd3e30()*-1.15418);
}

double NNfunction_sb_uRdR::synapse0x2fd6390() {
   return (neuron0x2fdd6a0()*0.053689);
}

double NNfunction_sb_uRdR::synapse0x2fd63d0() {
   return (neuron0x2fde070()*-0.948156);
}

double NNfunction_sb_uRdR::synapse0x2fca500() {
   return (neuron0x2fdea40()*-0.137813);
}

double NNfunction_sb_uRdR::synapse0x2fca540() {
   return (neuron0x2fdf410()*0.0112854);
}

double NNfunction_sb_uRdR::synapse0x2fd8480() {
   return (neuron0x2fdfde0()*-0.00904129);
}

double NNfunction_sb_uRdR::synapse0x2fd84c0() {
   return (neuron0x2fe07b0()*0.388395);
}

double NNfunction_sb_uRdR::synapse0x2fd8e50() {
   return (neuron0x2fe1180()*0.311147);
}

double NNfunction_sb_uRdR::synapse0x2fd8e90() {
   return (neuron0x2fe1b50()*-0.0162794);
}

double NNfunction_sb_uRdR::synapse0x2fd9820() {
   return (neuron0x2fd7be0()*-0.0355072);
}

double NNfunction_sb_uRdR::synapse0x2fd9860() {
   return (neuron0x2fe4730()*0.0362728);
}

double NNfunction_sb_uRdR::synapse0x2fda1f0() {
   return (neuron0x2fe5100()*-0.0157658);
}

double NNfunction_sb_uRdR::synapse0x2fda230() {
   return (neuron0x2fe5ad0()*-0.781024);
}

double NNfunction_sb_uRdR::synapse0x2fdabc0() {
   return (neuron0x2fe64a0()*-0.0525673);
}

double NNfunction_sb_uRdR::synapse0x2fdac00() {
   return (neuron0x2fe6e70()*0.0925696);
}

double NNfunction_sb_uRdR::synapse0x2fd3710() {
   return (neuron0x2fe7840()*-0.0269798);
}

double NNfunction_sb_uRdR::synapse0x2fd3750() {
   return (neuron0x2fe8210()*1.73101);
}

double NNfunction_sb_uRdR::synapse0x2fdcfc0() {
   return (neuron0x2fe8be0()*-0.0108038);
}

double NNfunction_sb_uRdR::synapse0x2fdd000() {
   return (neuron0x2fe97c0()*-0.00407934);
}

double NNfunction_sb_uRdR::synapse0x2fdd950() {
   return (neuron0x2fea190()*-0.961237);
}

double NNfunction_sb_uRdR::synapse0x2fdd990() {
   return (neuron0x2fdb010()*0.0540387);
}

double NNfunction_sb_uRdR::synapse0x2fde320() {
   return (neuron0x2fdb9e0()*-0.0278432);
}

double NNfunction_sb_uRdR::synapse0x2fde360() {
   return (neuron0x2fdc3b0()*0.00494246);
}

double NNfunction_sb_uRdR::synapse0x2fdecf0() {
   return (neuron0x2fee9f0()*0.0150071);
}

double NNfunction_sb_uRdR::synapse0x2fded30() {
   return (neuron0x2fef2a0()*-0.0266782);
}

double NNfunction_sb_uRdR::synapse0x2fdf6c0() {
   return (neuron0x2fefc70()*-0.405072);
}

double NNfunction_sb_uRdR::synapse0x2fdf700() {
   return (neuron0x2ff0640()*1.57684);
}

double NNfunction_sb_uRdR::synapse0x2fe1e00() {
   return (neuron0x2fcc5c0()*-1.93452);
}

double NNfunction_sb_uRdR::synapse0x2fe1e40() {
   return (neuron0x2fcced0()*-1.81046);
}

double NNfunction_sb_uRdR::synapse0x2fd73c0() {
   return (neuron0x2fcd9b0()*0.675119);
}

double NNfunction_sb_uRdR::synapse0x2fd7400() {
   return (neuron0x2d87240()*1.43786);
}

double NNfunction_sb_uRdR::synapse0x2fe49e0() {
   return (neuron0x2fce7d0()*-2.39998);
}

double NNfunction_sb_uRdR::synapse0x2fe4a20() {
   return (neuron0x2fcf1a0()*2.8364);
}

double NNfunction_sb_uRdR::synapse0x2fe53b0() {
   return (neuron0x2fcff70()*0.852025);
}

double NNfunction_sb_uRdR::synapse0x2fe53f0() {
   return (neuron0x2fd0940()*2.43272);
}

double NNfunction_sb_uRdR::synapse0x2fe5d80() {
   return (neuron0x2fd1310()*-0.759991);
}

double NNfunction_sb_uRdR::synapse0x2fe5dc0() {
   return (neuron0x2fd1df0()*0.0221621);
}

double NNfunction_sb_uRdR::synapse0x2fe6750() {
   return (neuron0x2fd27c0()*-2.71758);
}

double NNfunction_sb_uRdR::synapse0x2fe6790() {
   return (neuron0x2fcf8a0()*1.77857);
}

double NNfunction_sb_uRdR::synapse0x2fe7120() {
   return (neuron0x2fd4370()*1.17154);
}

double NNfunction_sb_uRdR::synapse0x2fe7160() {
   return (neuron0x2fd4d40()*-0.860489);
}

double NNfunction_sb_uRdR::synapse0x2fe7af0() {
   return (neuron0x2fd5710()*2.29544);
}

double NNfunction_sb_uRdR::synapse0x2fe7b30() {
   return (neuron0x2fd60e0()*-0.549199);
}

double NNfunction_sb_uRdR::synapse0x2fe84c0() {
   return (neuron0x2fd7ef0()*-2.09034);
}

double NNfunction_sb_uRdR::synapse0x2fe8500() {
   return (neuron0x2fd81d0()*2.26377);
}

double NNfunction_sb_uRdR::synapse0x2fe8e90() {
   return (neuron0x2fd8ba0()*-0.0629356);
}

double NNfunction_sb_uRdR::synapse0x2fe8ed0() {
   return (neuron0x2fd9570()*-2.42024);
}

double NNfunction_sb_uRdR::synapse0x2fe9a70() {
   return (neuron0x2fd9f40()*0.40685);
}

double NNfunction_sb_uRdR::synapse0x2fe9ab0() {
   return (neuron0x2fda910()*1.03599);
}

double NNfunction_sb_uRdR::synapse0x2fea440() {
   return (neuron0x2fd3460()*-2.21399);
}

double NNfunction_sb_uRdR::synapse0x2fea480() {
   return (neuron0x2fd3e30()*2.90108);
}

double NNfunction_sb_uRdR::synapse0x2fdb2c0() {
   return (neuron0x2fdd6a0()*0.415142);
}

double NNfunction_sb_uRdR::synapse0x2fdb300() {
   return (neuron0x2fde070()*-0.320694);
}

double NNfunction_sb_uRdR::synapse0x2fdbc90() {
   return (neuron0x2fdea40()*1.51227);
}

double NNfunction_sb_uRdR::synapse0x2fdbcd0() {
   return (neuron0x2fdf410()*-1.89198);
}

double NNfunction_sb_uRdR::synapse0x2fdc660() {
   return (neuron0x2fdfde0()*-3.28093);
}

double NNfunction_sb_uRdR::synapse0x2fdc6a0() {
   return (neuron0x2fe07b0()*-0.878961);
}

double NNfunction_sb_uRdR::synapse0x2feeb80() {
   return (neuron0x2fe1180()*-0.884285);
}

double NNfunction_sb_uRdR::synapse0x2feebc0() {
   return (neuron0x2fe1b50()*1.85144);
}

double NNfunction_sb_uRdR::synapse0x2fef550() {
   return (neuron0x2fd7be0()*-2.16441);
}

double NNfunction_sb_uRdR::synapse0x2fef590() {
   return (neuron0x2fe4730()*1.65535);
}

double NNfunction_sb_uRdR::synapse0x2feff20() {
   return (neuron0x2fe5100()*-1.90397);
}

double NNfunction_sb_uRdR::synapse0x2feff60() {
   return (neuron0x2fe5ad0()*-1.09151);
}

double NNfunction_sb_uRdR::synapse0x2ff08f0() {
   return (neuron0x2fe64a0()*-1.6225);
}

double NNfunction_sb_uRdR::synapse0x2ff0930() {
   return (neuron0x2fe6e70()*2.38837);
}

double NNfunction_sb_uRdR::synapse0x2fcc7e0() {
   return (neuron0x2fe7840()*-2.9047);
}

double NNfunction_sb_uRdR::synapse0x2fcc820() {
   return (neuron0x2fe8210()*0.680614);
}

double NNfunction_sb_uRdR::synapse0x2fe0090() {
   return (neuron0x2fe8be0()*-2.18871);
}

double NNfunction_sb_uRdR::synapse0x2fe00d0() {
   return (neuron0x2fe97c0()*2.26876);
}

double NNfunction_sb_uRdR::synapse0x2ff1010() {
   return (neuron0x2fea190()*1.35988);
}

double NNfunction_sb_uRdR::synapse0x2ff1050() {
   return (neuron0x2fdb010()*-1.82573);
}

double NNfunction_sb_uRdR::synapse0x2ff1090() {
   return (neuron0x2fdb9e0()*-1.68432);
}

double NNfunction_sb_uRdR::synapse0x2ff10d0() {
   return (neuron0x2fdc3b0()*4.10888);
}

double NNfunction_sb_uRdR::synapse0x2ff7f80() {
   return (neuron0x2fee9f0()*1.91382);
}

double NNfunction_sb_uRdR::synapse0x2ff7fc0() {
   return (neuron0x2fef2a0()*-1.60691);
}

double NNfunction_sb_uRdR::synapse0x2ff8000() {
   return (neuron0x2fefc70()*-1.60049);
}

double NNfunction_sb_uRdR::synapse0x2ff8040() {
   return (neuron0x2ff0640()*-0.470182);
}

double NNfunction_sb_uRdR::synapse0x2ff83c0() {
   return (neuron0x2fcc5c0()*-0.477263);
}

double NNfunction_sb_uRdR::synapse0x2ff8400() {
   return (neuron0x2fcced0()*-0.0652138);
}

double NNfunction_sb_uRdR::synapse0x2ff8440() {
   return (neuron0x2fcd9b0()*0.63051);
}

double NNfunction_sb_uRdR::synapse0x2ff8480() {
   return (neuron0x2d87240()*1.74421);
}

double NNfunction_sb_uRdR::synapse0x2ff84c0() {
   return (neuron0x2fce7d0()*0.0533608);
}

double NNfunction_sb_uRdR::synapse0x2ff8500() {
   return (neuron0x2fcf1a0()*-0.00330617);
}

double NNfunction_sb_uRdR::synapse0x2ff8540() {
   return (neuron0x2fcff70()*0.6597);
}

double NNfunction_sb_uRdR::synapse0x2ff8580() {
   return (neuron0x2fd0940()*0.124111);
}

double NNfunction_sb_uRdR::synapse0x2ff85c0() {
   return (neuron0x2fd1310()*-0.055866);
}

double NNfunction_sb_uRdR::synapse0x2ff8600() {
   return (neuron0x2fd1df0()*-0.456479);
}

double NNfunction_sb_uRdR::synapse0x2ff8640() {
   return (neuron0x2fd27c0()*-0.200793);
}

double NNfunction_sb_uRdR::synapse0x2ff8680() {
   return (neuron0x2fcf8a0()*-1.53607);
}

double NNfunction_sb_uRdR::synapse0x2ff86c0() {
   return (neuron0x2fd4370()*-0.113286);
}

double NNfunction_sb_uRdR::synapse0x2ff8700() {
   return (neuron0x2fd4d40()*-0.766864);
}

double NNfunction_sb_uRdR::synapse0x2ff8740() {
   return (neuron0x2fd5710()*0.207623);
}

double NNfunction_sb_uRdR::synapse0x2ff8780() {
   return (neuron0x2fd60e0()*-0.0109298);
}

double NNfunction_sb_uRdR::synapse0x2ff8210() {
   return (neuron0x2fd7ef0()*-0.132725);
}

double NNfunction_sb_uRdR::synapse0x2ff8250() {
   return (neuron0x2fd81d0()*0.170016);
}

double NNfunction_sb_uRdR::synapse0x2ff88d0() {
   return (neuron0x2fd8ba0()*2.35466);
}

double NNfunction_sb_uRdR::synapse0x2ff8910() {
   return (neuron0x2fd9570()*0.977983);
}

double NNfunction_sb_uRdR::synapse0x2ff8950() {
   return (neuron0x2fd9f40()*-0.436681);
}

double NNfunction_sb_uRdR::synapse0x2ff8990() {
   return (neuron0x2fda910()*-0.0456343);
}

double NNfunction_sb_uRdR::synapse0x2ff89d0() {
   return (neuron0x2fd3460()*-1.03443);
}

double NNfunction_sb_uRdR::synapse0x2ff8a10() {
   return (neuron0x2fd3e30()*-2.50511);
}

double NNfunction_sb_uRdR::synapse0x2ff8a50() {
   return (neuron0x2fdd6a0()*-0.384927);
}

double NNfunction_sb_uRdR::synapse0x2ff8a90() {
   return (neuron0x2fde070()*-0.0414483);
}

double NNfunction_sb_uRdR::synapse0x2ff8ad0() {
   return (neuron0x2fdea40()*0.807071);
}

double NNfunction_sb_uRdR::synapse0x2ff8b10() {
   return (neuron0x2fdf410()*-0.213723);
}

double NNfunction_sb_uRdR::synapse0x2ff8b50() {
   return (neuron0x2fdfde0()*-0.277117);
}

double NNfunction_sb_uRdR::synapse0x2ff8b90() {
   return (neuron0x2fe07b0()*-0.932958);
}

double NNfunction_sb_uRdR::synapse0x2ff8bd0() {
   return (neuron0x2fe1180()*0.934668);
}

double NNfunction_sb_uRdR::synapse0x2ff8c10() {
   return (neuron0x2fe1b50()*0.256261);
}

double NNfunction_sb_uRdR::synapse0x2ff87c0() {
   return (neuron0x2fd7be0()*-0.599021);
}

double NNfunction_sb_uRdR::synapse0x2ff8800() {
   return (neuron0x2fe4730()*-1.14244);
}

double NNfunction_sb_uRdR::synapse0x2ff8840() {
   return (neuron0x2fe5100()*0.0664404);
}

double NNfunction_sb_uRdR::synapse0x2ff8880() {
   return (neuron0x2fe5ad0()*0.675946);
}

double NNfunction_sb_uRdR::synapse0x2ff8e60() {
   return (neuron0x2fe64a0()*-0.020341);
}

double NNfunction_sb_uRdR::synapse0x2ff8ea0() {
   return (neuron0x2fe6e70()*-1.74148);
}

double NNfunction_sb_uRdR::synapse0x2ff8ee0() {
   return (neuron0x2fe7840()*0.986879);
}

double NNfunction_sb_uRdR::synapse0x2ff8f20() {
   return (neuron0x2fe8210()*-0.315624);
}

double NNfunction_sb_uRdR::synapse0x2ff8f60() {
   return (neuron0x2fe8be0()*0.0992416);
}

double NNfunction_sb_uRdR::synapse0x2ff8fa0() {
   return (neuron0x2fe97c0()*0.477836);
}

double NNfunction_sb_uRdR::synapse0x2ff8fe0() {
   return (neuron0x2fea190()*0.0634383);
}

double NNfunction_sb_uRdR::synapse0x2ff9020() {
   return (neuron0x2fdb010()*0.00087295);
}

double NNfunction_sb_uRdR::synapse0x2ff9060() {
   return (neuron0x2fdb9e0()*-0.296097);
}

double NNfunction_sb_uRdR::synapse0x2ff90a0() {
   return (neuron0x2fdc3b0()*0.595076);
}

double NNfunction_sb_uRdR::synapse0x2ff90e0() {
   return (neuron0x2fee9f0()*0.66397);
}

double NNfunction_sb_uRdR::synapse0x2ff9120() {
   return (neuron0x2fef2a0()*0.533476);
}

double NNfunction_sb_uRdR::synapse0x2ff9160() {
   return (neuron0x2fefc70()*-0.544856);
}

double NNfunction_sb_uRdR::synapse0x2ff91a0() {
   return (neuron0x2ff0640()*-2.69604);
}

double NNfunction_sb_uRdR::synapse0x2ff9520() {
   return (neuron0x2fcc5c0()*0.45212);
}

double NNfunction_sb_uRdR::synapse0x2ff9560() {
   return (neuron0x2fcced0()*0.132046);
}

double NNfunction_sb_uRdR::synapse0x2ff95a0() {
   return (neuron0x2fcd9b0()*-0.890211);
}

double NNfunction_sb_uRdR::synapse0x2ff95e0() {
   return (neuron0x2d87240()*-3.6076);
}

double NNfunction_sb_uRdR::synapse0x2ff9620() {
   return (neuron0x2fce7d0()*0.236443);
}

double NNfunction_sb_uRdR::synapse0x2ff9660() {
   return (neuron0x2fcf1a0()*-0.0532649);
}

double NNfunction_sb_uRdR::synapse0x2ff96a0() {
   return (neuron0x2fcff70()*0.204543);
}

double NNfunction_sb_uRdR::synapse0x2ff96e0() {
   return (neuron0x2fd0940()*-0.146811);
}

double NNfunction_sb_uRdR::synapse0x2ff9720() {
   return (neuron0x2fd1310()*0.369999);
}

double NNfunction_sb_uRdR::synapse0x2ff9760() {
   return (neuron0x2fd1df0()*0.512675);
}

double NNfunction_sb_uRdR::synapse0x2ff97a0() {
   return (neuron0x2fd27c0()*1.08896);
}

double NNfunction_sb_uRdR::synapse0x2ff97e0() {
   return (neuron0x2fcf8a0()*1.33405);
}

double NNfunction_sb_uRdR::synapse0x2ff9820() {
   return (neuron0x2fd4370()*0.104093);
}

double NNfunction_sb_uRdR::synapse0x2ff9860() {
   return (neuron0x2fd4d40()*0.724061);
}

double NNfunction_sb_uRdR::synapse0x2ff98a0() {
   return (neuron0x2fd5710()*-0.238432);
}

double NNfunction_sb_uRdR::synapse0x2ff98e0() {
   return (neuron0x2fd60e0()*0.278603);
}

double NNfunction_sb_uRdR::synapse0x2ff9370() {
   return (neuron0x2fd7ef0()*0.201221);
}

double NNfunction_sb_uRdR::synapse0x2ff93b0() {
   return (neuron0x2fd81d0()*-0.063793);
}

double NNfunction_sb_uRdR::synapse0x2ff9a30() {
   return (neuron0x2fd8ba0()*-3.08086);
}

double NNfunction_sb_uRdR::synapse0x2ff9a70() {
   return (neuron0x2fd9570()*-1.13534);
}

double NNfunction_sb_uRdR::synapse0x2ff9ab0() {
   return (neuron0x2fd9f40()*-0.0492653);
}

double NNfunction_sb_uRdR::synapse0x2ff9af0() {
   return (neuron0x2fda910()*0.0936071);
}

double NNfunction_sb_uRdR::synapse0x2ff9b30() {
   return (neuron0x2fd3460()*2.24326);
}

double NNfunction_sb_uRdR::synapse0x2ff9b70() {
   return (neuron0x2fd3e30()*-0.263339);
}

double NNfunction_sb_uRdR::synapse0x2ff9bb0() {
   return (neuron0x2fdd6a0()*0.10521);
}

double NNfunction_sb_uRdR::synapse0x2ff9bf0() {
   return (neuron0x2fde070()*1.2072);
}

double NNfunction_sb_uRdR::synapse0x2ff9c30() {
   return (neuron0x2fdea40()*-0.634162);
}

double NNfunction_sb_uRdR::synapse0x2ff9c70() {
   return (neuron0x2fdf410()*0.240737);
}

double NNfunction_sb_uRdR::synapse0x2ff9cb0() {
   return (neuron0x2fdfde0()*0.36727);
}

double NNfunction_sb_uRdR::synapse0x2ff9cf0() {
   return (neuron0x2fe07b0()*0.0150201);
}

double NNfunction_sb_uRdR::synapse0x2ff9d30() {
   return (neuron0x2fe1180()*1.68394);
}

double NNfunction_sb_uRdR::synapse0x2ff9d70() {
   return (neuron0x2fe1b50()*-0.198139);
}

double NNfunction_sb_uRdR::synapse0x2ff9920() {
   return (neuron0x2fd7be0()*0.897383);
}

double NNfunction_sb_uRdR::synapse0x2ff9960() {
   return (neuron0x2fe4730()*1.36843);
}

double NNfunction_sb_uRdR::synapse0x2ff99a0() {
   return (neuron0x2fe5100()*-0.0346207);
}

double NNfunction_sb_uRdR::synapse0x2ff99e0() {
   return (neuron0x2fe5ad0()*1.52606);
}

double NNfunction_sb_uRdR::synapse0x2ff9fc0() {
   return (neuron0x2fe64a0()*0.117816);
}

double NNfunction_sb_uRdR::synapse0x2ffa000() {
   return (neuron0x2fe6e70()*1.79397);
}

double NNfunction_sb_uRdR::synapse0x2ffa040() {
   return (neuron0x2fe7840()*-1.21006);
}

double NNfunction_sb_uRdR::synapse0x2ffa080() {
   return (neuron0x2fe8210()*-0.731391);
}

double NNfunction_sb_uRdR::synapse0x2ffa0c0() {
   return (neuron0x2fe8be0()*-0.0849284);
}

double NNfunction_sb_uRdR::synapse0x2ffa100() {
   return (neuron0x2fe97c0()*-0.574301);
}

double NNfunction_sb_uRdR::synapse0x2ffa140() {
   return (neuron0x2fea190()*-0.304995);
}

double NNfunction_sb_uRdR::synapse0x2ffa180() {
   return (neuron0x2fdb010()*-0.0471368);
}

double NNfunction_sb_uRdR::synapse0x2ffa1c0() {
   return (neuron0x2fdb9e0()*0.130448);
}

double NNfunction_sb_uRdR::synapse0x2ffa200() {
   return (neuron0x2fdc3b0()*-0.707806);
}

double NNfunction_sb_uRdR::synapse0x2ffa240() {
   return (neuron0x2fee9f0()*-0.773794);
}

double NNfunction_sb_uRdR::synapse0x2ffa280() {
   return (neuron0x2fef2a0()*-0.515493);
}

double NNfunction_sb_uRdR::synapse0x2ffa2c0() {
   return (neuron0x2fefc70()*0.169888);
}

double NNfunction_sb_uRdR::synapse0x2ffa300() {
   return (neuron0x2ff0640()*3.469);
}

double NNfunction_sb_uRdR::synapse0x2ffa680() {
   return (neuron0x2fcc5c0()*0.0257058);
}

double NNfunction_sb_uRdR::synapse0x2ffa6c0() {
   return (neuron0x2fcced0()*-0.0223089);
}

double NNfunction_sb_uRdR::synapse0x2ffa700() {
   return (neuron0x2fcd9b0()*-0.990313);
}

double NNfunction_sb_uRdR::synapse0x2ffa740() {
   return (neuron0x2d87240()*-2.05143);
}

double NNfunction_sb_uRdR::synapse0x2ffa780() {
   return (neuron0x2fce7d0()*-0.106781);
}

double NNfunction_sb_uRdR::synapse0x2ffa7c0() {
   return (neuron0x2fcf1a0()*0.0346555);
}

double NNfunction_sb_uRdR::synapse0x2ffa800() {
   return (neuron0x2fcff70()*-0.433323);
}

double NNfunction_sb_uRdR::synapse0x2ffa840() {
   return (neuron0x2fd0940()*0.0293325);
}

double NNfunction_sb_uRdR::synapse0x2ffa880() {
   return (neuron0x2fd1310()*-0.88199);
}

double NNfunction_sb_uRdR::synapse0x2ffa8c0() {
   return (neuron0x2fd1df0()*-0.293584);
}

double NNfunction_sb_uRdR::synapse0x2ffa900() {
   return (neuron0x2fd27c0()*-0.233921);
}

double NNfunction_sb_uRdR::synapse0x2ffa940() {
   return (neuron0x2fcf8a0()*-1.21893);
}

double NNfunction_sb_uRdR::synapse0x2ffa980() {
   return (neuron0x2fd4370()*-0.123002);
}

double NNfunction_sb_uRdR::synapse0x2ffa9c0() {
   return (neuron0x2fd4d40()*0.347978);
}

double NNfunction_sb_uRdR::synapse0x2ffaa00() {
   return (neuron0x2fd5710()*-0.00554897);
}

double NNfunction_sb_uRdR::synapse0x2ffaa40() {
   return (neuron0x2fd60e0()*2.11484);
}

double NNfunction_sb_uRdR::synapse0x2ffa4d0() {
   return (neuron0x2fd7ef0()*0.01509);
}

double NNfunction_sb_uRdR::synapse0x2ffa510() {
   return (neuron0x2fd81d0()*-0.0725344);
}

double NNfunction_sb_uRdR::synapse0x2ffab90() {
   return (neuron0x2fd8ba0()*-0.926627);
}

double NNfunction_sb_uRdR::synapse0x2ffabd0() {
   return (neuron0x2fd9570()*-0.0498836);
}

double NNfunction_sb_uRdR::synapse0x2ffac10() {
   return (neuron0x2fd9f40()*0.902213);
}

double NNfunction_sb_uRdR::synapse0x2ffac50() {
   return (neuron0x2fda910()*1.37664);
}

double NNfunction_sb_uRdR::synapse0x2ffac90() {
   return (neuron0x2fd3460()*4.17785);
}

double NNfunction_sb_uRdR::synapse0x2ffacd0() {
   return (neuron0x2fd3e30()*-1.38578);
}

double NNfunction_sb_uRdR::synapse0x2ffad10() {
   return (neuron0x2fdd6a0()*0.220649);
}

double NNfunction_sb_uRdR::synapse0x2ffad50() {
   return (neuron0x2fde070()*-0.563601);
}

double NNfunction_sb_uRdR::synapse0x2ffad90() {
   return (neuron0x2fdea40()*-0.198619);
}

double NNfunction_sb_uRdR::synapse0x2ffadd0() {
   return (neuron0x2fdf410()*-0.00532136);
}

double NNfunction_sb_uRdR::synapse0x2ffae10() {
   return (neuron0x2fdfde0()*-0.0520645);
}

double NNfunction_sb_uRdR::synapse0x2ffae50() {
   return (neuron0x2fe07b0()*1.38491);
}

double NNfunction_sb_uRdR::synapse0x2ffae90() {
   return (neuron0x2fe1180()*0.583457);
}

double NNfunction_sb_uRdR::synapse0x2ffaed0() {
   return (neuron0x2fe1b50()*-0.0903561);
}

double NNfunction_sb_uRdR::synapse0x2ffaa80() {
   return (neuron0x2fd7be0()*-0.22833);
}

double NNfunction_sb_uRdR::synapse0x2ffaac0() {
   return (neuron0x2fe4730()*0.0446842);
}

double NNfunction_sb_uRdR::synapse0x2ffab00() {
   return (neuron0x2fe5100()*-0.0588999);
}

double NNfunction_sb_uRdR::synapse0x2ffab40() {
   return (neuron0x2fe5ad0()*-1.22731);
}

double NNfunction_sb_uRdR::synapse0x2ffb120() {
   return (neuron0x2fe64a0()*-0.062645);
}

double NNfunction_sb_uRdR::synapse0x2ffb160() {
   return (neuron0x2fe6e70()*0.188529);
}

double NNfunction_sb_uRdR::synapse0x2ffb1a0() {
   return (neuron0x2fe7840()*0.0642281);
}

double NNfunction_sb_uRdR::synapse0x2ffb1e0() {
   return (neuron0x2fe8210()*0.582938);
}

double NNfunction_sb_uRdR::synapse0x2ffb220() {
   return (neuron0x2fe8be0()*-0.0142452);
}

double NNfunction_sb_uRdR::synapse0x2ffb260() {
   return (neuron0x2fe97c0()*0.0269869);
}

double NNfunction_sb_uRdR::synapse0x2ffb2a0() {
   return (neuron0x2fea190()*-0.800337);
}

double NNfunction_sb_uRdR::synapse0x2ffb2e0() {
   return (neuron0x2fdb010()*-0.036265);
}

double NNfunction_sb_uRdR::synapse0x2ffb320() {
   return (neuron0x2fdb9e0()*0.112225);
}

double NNfunction_sb_uRdR::synapse0x2ffb360() {
   return (neuron0x2fdc3b0()*0.0539074);
}

double NNfunction_sb_uRdR::synapse0x2ffb3a0() {
   return (neuron0x2fee9f0()*-0.0915979);
}

double NNfunction_sb_uRdR::synapse0x2ffb3e0() {
   return (neuron0x2fef2a0()*-0.0907779);
}

double NNfunction_sb_uRdR::synapse0x2ffb420() {
   return (neuron0x2fefc70()*-1.27496);
}

double NNfunction_sb_uRdR::synapse0x2ffb460() {
   return (neuron0x2ff0640()*0.891623);
}

double NNfunction_sb_uRdR::synapse0x2fcc580() {
   return (neuron0x2ff7840()*-6.73725);
}

double NNfunction_sb_uRdR::synapse0x2ffb6c0() {
   return (neuron0x2ff7be0()*8.05044);
}

double NNfunction_sb_uRdR::synapse0x2ffb700() {
   return (neuron0x2ff8080()*-4.05077);
}

double NNfunction_sb_uRdR::synapse0x2ffb740() {
   return (neuron0x2ff91e0()*-3.49366);
}

double NNfunction_sb_uRdR::synapse0x2ffb780() {
   return (neuron0x2ffa340()*-5.62202);
}

