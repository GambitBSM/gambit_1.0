#include "NNfunction_sb_dRsR.h"
#include <cmath>

double NNfunction_sb_dRsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9201)/15.022;
   input1 = (in1 - 44.6217)/762.26;
   input2 = (in2 - 380.038)/492.443;
   input3 = (in3 - 228.53)/599.265;
   input4 = (in4 - 718.768)/702.915;
   input5 = (in5 - 624.85)/671.03;
   input6 = (in6 - 632.637)/676.729;
   input7 = (in7 - 629.412)/672.915;
   input8 = (in8 - 632.586)/715.236;
   input9 = (in9 - 625.138)/702.495;
   input10 = (in10 - 637.118)/722.617;
   input11 = (in11 - 653.26)/595.4;
   input12 = (in12 - 657.629)/604.591;
   input13 = (in13 - 499.036)/360.764;
   input14 = (in14 - 637.514)/547.928;
   input15 = (in15 - 638.927)/549.182;
   input16 = (in16 - 456.305)/389.91;
   input17 = (in17 - 488.781)/298.564;
   input18 = (in18 - 487.251)/299.014;
   input19 = (in19 - 670.085)/617.958;
   input20 = (in20 - -182.81)/391.633;
   input21 = (in21 - -230.679)/874.924;
   input22 = (in22 - 1.27617)/886.43;
   input23 = (in23 - -31.7588)/491.825;
   switch(index) {
     case 0:
         return neuron0x2eecd80();
     default:
         return 0.;
   }
}

double NNfunction_sb_dRsR::Value(int index, double* input) {
   input0 = (input[0] - 22.9201)/15.022;
   input1 = (input[1] - 44.6217)/762.26;
   input2 = (input[2] - 380.038)/492.443;
   input3 = (input[3] - 228.53)/599.265;
   input4 = (input[4] - 718.768)/702.915;
   input5 = (input[5] - 624.85)/671.03;
   input6 = (input[6] - 632.637)/676.729;
   input7 = (input[7] - 629.412)/672.915;
   input8 = (input[8] - 632.586)/715.236;
   input9 = (input[9] - 625.138)/702.495;
   input10 = (input[10] - 637.118)/722.617;
   input11 = (input[11] - 653.26)/595.4;
   input12 = (input[12] - 657.629)/604.591;
   input13 = (input[13] - 499.036)/360.764;
   input14 = (input[14] - 637.514)/547.928;
   input15 = (input[15] - 638.927)/549.182;
   input16 = (input[16] - 456.305)/389.91;
   input17 = (input[17] - 488.781)/298.564;
   input18 = (input[18] - 487.251)/299.014;
   input19 = (input[19] - 670.085)/617.958;
   input20 = (input[20] - -182.81)/391.633;
   input21 = (input[21] - -230.679)/874.924;
   input22 = (input[22] - 1.27617)/886.43;
   input23 = (input[23] - -31.7588)/491.825;
   switch(index) {
     case 0:
         return neuron0x2eecd80();
     default:
         return 0.;
   }
}

double NNfunction_sb_dRsR::neuron0x2eb7df0() {
   return input0;
}

double NNfunction_sb_dRsR::neuron0x2eb80a0() {
   return input1;
}

double NNfunction_sb_dRsR::neuron0x2eb83e0() {
   return input2;
}

double NNfunction_sb_dRsR::neuron0x2eb8720() {
   return input3;
}

double NNfunction_sb_dRsR::neuron0x2eb8a60() {
   return input4;
}

double NNfunction_sb_dRsR::neuron0x2eb8da0() {
   return input5;
}

double NNfunction_sb_dRsR::neuron0x2eb90e0() {
   return input6;
}

double NNfunction_sb_dRsR::neuron0x2eb9420() {
   return input7;
}

double NNfunction_sb_dRsR::neuron0x2eb9760() {
   return input8;
}

double NNfunction_sb_dRsR::neuron0x2eb9aa0() {
   return input9;
}

double NNfunction_sb_dRsR::neuron0x2eb9de0() {
   return input10;
}

double NNfunction_sb_dRsR::neuron0x2eba120() {
   return input11;
}

double NNfunction_sb_dRsR::neuron0x2eba460() {
   return input12;
}

double NNfunction_sb_dRsR::neuron0x2eba7a0() {
   return input13;
}

double NNfunction_sb_dRsR::neuron0x2ebaae0() {
   return input14;
}

double NNfunction_sb_dRsR::neuron0x2ebae20() {
   return input15;
}

double NNfunction_sb_dRsR::neuron0x2ebb160() {
   return input16;
}

double NNfunction_sb_dRsR::neuron0x2ebb6c0() {
   return input17;
}

double NNfunction_sb_dRsR::neuron0x2ebba00() {
   return input18;
}

double NNfunction_sb_dRsR::neuron0x2ebbd40() {
   return input19;
}

double NNfunction_sb_dRsR::neuron0x2ebc080() {
   return input20;
}

double NNfunction_sb_dRsR::neuron0x2ebc3c0() {
   return input21;
}

double NNfunction_sb_dRsR::neuron0x2ebc700() {
   return input22;
}

double NNfunction_sb_dRsR::neuron0x2ebca40() {
   return input23;
}

double NNfunction_sb_dRsR::input0x2ebceb0() {
   double input = -0.314888;
   input += synapse0x2ebd1f0();
   input += synapse0x2ebd230();
   input += synapse0x2ebd270();
   input += synapse0x2ebd2b0();
   input += synapse0x2ebd2f0();
   input += synapse0x2ebd330();
   input += synapse0x2ebd370();
   input += synapse0x2ebd3b0();
   input += synapse0x2ebd3f0();
   input += synapse0x2ebd430();
   input += synapse0x2ebd470();
   input += synapse0x2ebd4b0();
   input += synapse0x2ebd4f0();
   input += synapse0x2ebd530();
   input += synapse0x2ebd570();
   input += synapse0x2ebd5b0();
   input += synapse0x2ebd040();
   input += synapse0x2ebd080();
   input += synapse0x2c73fb0();
   input += synapse0x2c73ff0();
   input += synapse0x2ebd5f0();
   input += synapse0x2ebd630();
   input += synapse0x2ebd670();
   input += synapse0x2ebd6b0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ebceb0() {
   double input = input0x2ebceb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ebd6f0() {
   double input = 2.11883;
   input += synapse0x2ebda30();
   input += synapse0x2ebda70();
   input += synapse0x2ebdab0();
   input += synapse0x2ebdaf0();
   input += synapse0x2ebdb30();
   input += synapse0x2ebdb70();
   input += synapse0x2ebdbb0();
   input += synapse0x2ebdbf0();
   input += synapse0x2ebdc30();
   input += synapse0x2c73e00();
   input += synapse0x2c73e40();
   input += synapse0x2c73e80();
   input += synapse0x2c73ec0();
   input += synapse0x2ebde80();
   input += synapse0x2ebdec0();
   input += synapse0x2ebdf00();
   input += synapse0x2ebd880();
   input += synapse0x2ebd8c0();
   input += synapse0x2ebe050();
   input += synapse0x2ebe090();
   input += synapse0x2ebe0d0();
   input += synapse0x2ebe110();
   input += synapse0x2ebe150();
   input += synapse0x2ebe190();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ebd6f0() {
   double input = input0x2ebd6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ebe1d0() {
   double input = 0.151147;
   input += synapse0x2ebe510();
   input += synapse0x2ebe550();
   input += synapse0x2ebe590();
   input += synapse0x2ebe5d0();
   input += synapse0x2ebe610();
   input += synapse0x2ebe650();
   input += synapse0x2ebe690();
   input += synapse0x2ebe6d0();
   input += synapse0x2ebe710();
   input += synapse0x2ebe750();
   input += synapse0x2ebe790();
   input += synapse0x2ebe7d0();
   input += synapse0x2ebe810();
   input += synapse0x2ebe850();
   input += synapse0x2ebe890();
   input += synapse0x2ebe8d0();
   input += synapse0x2ebe360();
   input += synapse0x2ebe3a0();
   input += synapse0x2c74660();
   input += synapse0x2c81f30();
   input += synapse0x2c81f70();
   input += synapse0x2ec0800();
   input += synapse0x2ec0840();
   input += synapse0x2eb7b30();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ebe1d0() {
   double input = input0x2ebe1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ebdc70() {
   double input = -1.02499;
   input += synapse0x2eb7c00();
   input += synapse0x2c827b0();
   input += synapse0x2ebde00();
   input += synapse0x2ebde40();
   input += synapse0x2ebea20();
   input += synapse0x2ebea60();
   input += synapse0x2ebeaa0();
   input += synapse0x2ebeae0();
   input += synapse0x2ebeb20();
   input += synapse0x2ebeb60();
   input += synapse0x2ebeba0();
   input += synapse0x2ebebe0();
   input += synapse0x2ebec20();
   input += synapse0x2ebec60();
   input += synapse0x2ebeca0();
   input += synapse0x2ebece0();
   input += synapse0x2eb7b70();
   input += synapse0x2eb7bb0();
   input += synapse0x2ebee30();
   input += synapse0x2ebee70();
   input += synapse0x2ebeeb0();
   input += synapse0x2ebeef0();
   input += synapse0x2ebef30();
   input += synapse0x2ebef70();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ebdc70() {
   double input = input0x2ebdc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ebefb0() {
   double input = -5.66852;
   input += synapse0x2ebf2f0();
   input += synapse0x2ebf330();
   input += synapse0x2ebf370();
   input += synapse0x2ebf3b0();
   input += synapse0x2ebf3f0();
   input += synapse0x2ebf430();
   input += synapse0x2ebf470();
   input += synapse0x2ebf4b0();
   input += synapse0x2ebf4f0();
   input += synapse0x2ebf530();
   input += synapse0x2ebf570();
   input += synapse0x2ebf5b0();
   input += synapse0x2ebf5f0();
   input += synapse0x2ebf630();
   input += synapse0x2ebf670();
   input += synapse0x2ebf6b0();
   input += synapse0x2ebf800();
   input += synapse0x2ebf140();
   input += synapse0x2ebf180();
   input += synapse0x2ec0940();
   input += synapse0x2ec0980();
   input += synapse0x2ec09c0();
   input += synapse0x2ec0a00();
   input += synapse0x2ec0a40();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ebefb0() {
   double input = input0x2ebefb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec0a80() {
   double input = 1.34295;
   input += synapse0x2ec0dc0();
   input += synapse0x2ec0e00();
   input += synapse0x2ec0e40();
   input += synapse0x2ec0e80();
   input += synapse0x2ec0ec0();
   input += synapse0x2ec0f00();
   input += synapse0x2ec0f40();
   input += synapse0x2ec0f80();
   input += synapse0x2ec0fc0();
   input += synapse0x2c82280();
   input += synapse0x2c822c0();
   input += synapse0x2c82300();
   input += synapse0x2c82340();
   input += synapse0x2c82380();
   input += synapse0x2c823c0();
   input += synapse0x2c82400();
   input += synapse0x2ec0c10();
   input += synapse0x2ec0c50();
   input += synapse0x2c82550();
   input += synapse0x2c82590();
   input += synapse0x2c825d0();
   input += synapse0x2c82610();
   input += synapse0x2c82650();
   input += synapse0x2ec1810();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec0a80() {
   double input = input0x2ec0a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec1850() {
   double input = -0.538242;
   input += synapse0x2ec1b90();
   input += synapse0x2ec1bd0();
   input += synapse0x2ec1c10();
   input += synapse0x2ec1c50();
   input += synapse0x2ec1c90();
   input += synapse0x2ec1cd0();
   input += synapse0x2ec1d10();
   input += synapse0x2ec1d50();
   input += synapse0x2ec1d90();
   input += synapse0x2ec1dd0();
   input += synapse0x2ec1e10();
   input += synapse0x2ec1e50();
   input += synapse0x2ec1e90();
   input += synapse0x2ec1ed0();
   input += synapse0x2ec1f10();
   input += synapse0x2ec1f50();
   input += synapse0x2ec19e0();
   input += synapse0x2ec1a20();
   input += synapse0x2ec20a0();
   input += synapse0x2ec20e0();
   input += synapse0x2ec2120();
   input += synapse0x2ec2160();
   input += synapse0x2ec21a0();
   input += synapse0x2ec21e0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec1850() {
   double input = input0x2ec1850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec2220() {
   double input = -0.243228;
   input += synapse0x2ec2560();
   input += synapse0x2ec25a0();
   input += synapse0x2ec25e0();
   input += synapse0x2ec2620();
   input += synapse0x2ec2660();
   input += synapse0x2ec26a0();
   input += synapse0x2ec26e0();
   input += synapse0x2ec2720();
   input += synapse0x2ec2760();
   input += synapse0x2ec27a0();
   input += synapse0x2ec27e0();
   input += synapse0x2ec2820();
   input += synapse0x2ec2860();
   input += synapse0x2ec28a0();
   input += synapse0x2ec28e0();
   input += synapse0x2ec2920();
   input += synapse0x2ec23b0();
   input += synapse0x2ec23f0();
   input += synapse0x2ec2a70();
   input += synapse0x2ec2ab0();
   input += synapse0x2ec2af0();
   input += synapse0x2ec2b30();
   input += synapse0x2ec2b70();
   input += synapse0x2ec2bb0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec2220() {
   double input = input0x2ec2220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec2bf0() {
   double input = 0.067341;
   input += synapse0x2ebb5b0();
   input += synapse0x2ebb5f0();
   input += synapse0x2ebb630();
   input += synapse0x2ebb670();
   input += synapse0x2ec3140();
   input += synapse0x2ec3180();
   input += synapse0x2ec31c0();
   input += synapse0x2ec3200();
   input += synapse0x2ec3240();
   input += synapse0x2ec3280();
   input += synapse0x2ec32c0();
   input += synapse0x2ec3300();
   input += synapse0x2ec3340();
   input += synapse0x2ec3380();
   input += synapse0x2ec33c0();
   input += synapse0x2ec3400();
   input += synapse0x2ec2d80();
   input += synapse0x2ec2dc0();
   input += synapse0x2ec3550();
   input += synapse0x2ec3590();
   input += synapse0x2ec35d0();
   input += synapse0x2ec3610();
   input += synapse0x2ec3650();
   input += synapse0x2ec3690();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec2bf0() {
   double input = input0x2ec2bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec36d0() {
   double input = 1.26711;
   input += synapse0x2ec3a10();
   input += synapse0x2ec3a50();
   input += synapse0x2ec3a90();
   input += synapse0x2ec3ad0();
   input += synapse0x2ec3b10();
   input += synapse0x2ec3b50();
   input += synapse0x2ec3b90();
   input += synapse0x2ec3bd0();
   input += synapse0x2ec3c10();
   input += synapse0x2ec3c50();
   input += synapse0x2ec3c90();
   input += synapse0x2ec3cd0();
   input += synapse0x2ec3d10();
   input += synapse0x2ec3d50();
   input += synapse0x2ec3d90();
   input += synapse0x2ec3dd0();
   input += synapse0x2ec3860();
   input += synapse0x2ec38a0();
   input += synapse0x2ec3f20();
   input += synapse0x2ec3f60();
   input += synapse0x2ec3fa0();
   input += synapse0x2ec3fe0();
   input += synapse0x2ec4020();
   input += synapse0x2ec4060();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec36d0() {
   double input = input0x2ec36d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec40a0() {
   double input = 1.71877;
   input += synapse0x2ec43e0();
   input += synapse0x2ec4420();
   input += synapse0x2ec4460();
   input += synapse0x2ec44a0();
   input += synapse0x2ec44e0();
   input += synapse0x2ec4520();
   input += synapse0x2ec4560();
   input += synapse0x2ec45a0();
   input += synapse0x2ec45e0();
   input += synapse0x2ec4620();
   input += synapse0x2ec4660();
   input += synapse0x2ec46a0();
   input += synapse0x2ec46e0();
   input += synapse0x2ec4720();
   input += synapse0x2ec4760();
   input += synapse0x2ec47a0();
   input += synapse0x2ec4230();
   input += synapse0x2ec4270();
   input += synapse0x2ec1000();
   input += synapse0x2ec1040();
   input += synapse0x2ec1080();
   input += synapse0x2ec10c0();
   input += synapse0x2ec1100();
   input += synapse0x2ec1140();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec40a0() {
   double input = input0x2ec40a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec1180() {
   double input = 0.815494;
   input += synapse0x2ec14c0();
   input += synapse0x2ec1500();
   input += synapse0x2ec1540();
   input += synapse0x2ec1580();
   input += synapse0x2ec15c0();
   input += synapse0x2ec1600();
   input += synapse0x2ec1640();
   input += synapse0x2ec1680();
   input += synapse0x2ec16c0();
   input += synapse0x2ec1700();
   input += synapse0x2ec1740();
   input += synapse0x2ec1780();
   input += synapse0x2ec17c0();
   input += synapse0x2ec5900();
   input += synapse0x2ec5940();
   input += synapse0x2ec5980();
   input += synapse0x2ec1310();
   input += synapse0x2ec1350();
   input += synapse0x2ec5ad0();
   input += synapse0x2ec5b10();
   input += synapse0x2ec5b50();
   input += synapse0x2ec5b90();
   input += synapse0x2ec5bd0();
   input += synapse0x2ec5c10();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec1180() {
   double input = input0x2ec1180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec5c50() {
   double input = 0.728066;
   input += synapse0x2ec5f90();
   input += synapse0x2ec5fd0();
   input += synapse0x2ec6010();
   input += synapse0x2ec6050();
   input += synapse0x2ec6090();
   input += synapse0x2ec60d0();
   input += synapse0x2ec6110();
   input += synapse0x2ec6150();
   input += synapse0x2ec6190();
   input += synapse0x2ec61d0();
   input += synapse0x2ec6210();
   input += synapse0x2ec6250();
   input += synapse0x2ec6290();
   input += synapse0x2ec62d0();
   input += synapse0x2ec6310();
   input += synapse0x2ec6350();
   input += synapse0x2ec5de0();
   input += synapse0x2ec5e20();
   input += synapse0x2ec64a0();
   input += synapse0x2ec64e0();
   input += synapse0x2ec6520();
   input += synapse0x2ec6560();
   input += synapse0x2ec65a0();
   input += synapse0x2ec65e0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec5c50() {
   double input = input0x2ec5c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec6620() {
   double input = -1.08251;
   input += synapse0x2ec6960();
   input += synapse0x2ec69a0();
   input += synapse0x2ec69e0();
   input += synapse0x2ec6a20();
   input += synapse0x2ec6a60();
   input += synapse0x2ec6aa0();
   input += synapse0x2ec6ae0();
   input += synapse0x2ec6b20();
   input += synapse0x2ec6b60();
   input += synapse0x2ec6ba0();
   input += synapse0x2ec6be0();
   input += synapse0x2ec6c20();
   input += synapse0x2ec6c60();
   input += synapse0x2ec6ca0();
   input += synapse0x2ec6ce0();
   input += synapse0x2ec6d20();
   input += synapse0x2ec67b0();
   input += synapse0x2ec67f0();
   input += synapse0x2ec6e70();
   input += synapse0x2ec6eb0();
   input += synapse0x2ec6ef0();
   input += synapse0x2ec6f30();
   input += synapse0x2ec6f70();
   input += synapse0x2ec6fb0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec6620() {
   double input = input0x2ec6620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec6ff0() {
   double input = 2.37035;
   input += synapse0x2ec7330();
   input += synapse0x2ec7370();
   input += synapse0x2ec73b0();
   input += synapse0x2ec73f0();
   input += synapse0x2ec7430();
   input += synapse0x2ec7470();
   input += synapse0x2ec74b0();
   input += synapse0x2ec74f0();
   input += synapse0x2ec7530();
   input += synapse0x2ec7570();
   input += synapse0x2ec75b0();
   input += synapse0x2ec75f0();
   input += synapse0x2ec7630();
   input += synapse0x2ec7670();
   input += synapse0x2ec76b0();
   input += synapse0x2ec76f0();
   input += synapse0x2ec7180();
   input += synapse0x2ec71c0();
   input += synapse0x2ec7840();
   input += synapse0x2ec7880();
   input += synapse0x2ec78c0();
   input += synapse0x2ec7900();
   input += synapse0x2ec7940();
   input += synapse0x2ec7980();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec6ff0() {
   double input = input0x2ec6ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec79c0() {
   double input = -0.877128;
   input += synapse0x2ec7d00();
   input += synapse0x2eb7f80();
   input += synapse0x2eb7fc0();
   input += synapse0x2eb82c0();
   input += synapse0x2eb8300();
   input += synapse0x2eb8600();
   input += synapse0x2eb8640();
   input += synapse0x2eb8940();
   input += synapse0x2eb8980();
   input += synapse0x2eb8c80();
   input += synapse0x2eb8cc0();
   input += synapse0x2eb8fc0();
   input += synapse0x2eb9000();
   input += synapse0x2eb9300();
   input += synapse0x2eb9340();
   input += synapse0x2eb9640();
   input += synapse0x2eb9680();
   input += synapse0x2eb9980();
   input += synapse0x2eb99c0();
   input += synapse0x2eb9cc0();
   input += synapse0x2eb9d00();
   input += synapse0x2eba000();
   input += synapse0x2eba040();
   input += synapse0x2eba340();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec79c0() {
   double input = input0x2ec79c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec97d0() {
   double input = -0.000863783;
   input += synapse0x2eba380();
   input += synapse0x2ebb040();
   input += synapse0x2ebb080();
   input += synapse0x2ec7b50();
   input += synapse0x2ec7b90();
   input += synapse0x2ebb380();
   input += synapse0x2ebb3c0();
   input += synapse0x2ebb8e0();
   input += synapse0x2ebb920();
   input += synapse0x2ebbc20();
   input += synapse0x2ebbc60();
   input += synapse0x2ebbf60();
   input += synapse0x2ebbfa0();
   input += synapse0x2ebc2a0();
   input += synapse0x2ebc2e0();
   input += synapse0x2ebc5e0();
   input += synapse0x2ebc620();
   input += synapse0x2ebc920();
   input += synapse0x2ebc960();
   input += synapse0x2ebcc60();
   input += synapse0x2ebcca0();
   input += synapse0x2eba680();
   input += synapse0x2eba6c0();
   input += synapse0x2ec9a70();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec97d0() {
   double input = input0x2ec97d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec9ab0() {
   double input = 0.147909;
   input += synapse0x2ec9df0();
   input += synapse0x2ec9e30();
   input += synapse0x2ec9e70();
   input += synapse0x2ec9eb0();
   input += synapse0x2ec9ef0();
   input += synapse0x2ec9f30();
   input += synapse0x2ec9f70();
   input += synapse0x2ec9fb0();
   input += synapse0x2ec9ff0();
   input += synapse0x2eca030();
   input += synapse0x2eca070();
   input += synapse0x2eca0b0();
   input += synapse0x2eca0f0();
   input += synapse0x2eca130();
   input += synapse0x2eca170();
   input += synapse0x2eca1b0();
   input += synapse0x2ec9c40();
   input += synapse0x2ec9c80();
   input += synapse0x2eca300();
   input += synapse0x2eca340();
   input += synapse0x2eca380();
   input += synapse0x2eca3c0();
   input += synapse0x2eca400();
   input += synapse0x2eca440();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec9ab0() {
   double input = input0x2ec9ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2eca480() {
   double input = 1.5323;
   input += synapse0x2eca7c0();
   input += synapse0x2eca800();
   input += synapse0x2eca840();
   input += synapse0x2eca880();
   input += synapse0x2eca8c0();
   input += synapse0x2eca900();
   input += synapse0x2eca940();
   input += synapse0x2eca980();
   input += synapse0x2eca9c0();
   input += synapse0x2ecaa00();
   input += synapse0x2ecaa40();
   input += synapse0x2ecaa80();
   input += synapse0x2ecaac0();
   input += synapse0x2ecab00();
   input += synapse0x2ecab40();
   input += synapse0x2ecab80();
   input += synapse0x2eca610();
   input += synapse0x2eca650();
   input += synapse0x2ecacd0();
   input += synapse0x2ecad10();
   input += synapse0x2ecad50();
   input += synapse0x2ecad90();
   input += synapse0x2ecadd0();
   input += synapse0x2ecae10();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2eca480() {
   double input = input0x2eca480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ecae50() {
   double input = 0.608555;
   input += synapse0x2ecb190();
   input += synapse0x2ecb1d0();
   input += synapse0x2ecb210();
   input += synapse0x2ecb250();
   input += synapse0x2ecb290();
   input += synapse0x2ecb2d0();
   input += synapse0x2ecb310();
   input += synapse0x2ecb350();
   input += synapse0x2ecb390();
   input += synapse0x2ecb3d0();
   input += synapse0x2ecb410();
   input += synapse0x2ecb450();
   input += synapse0x2ecb490();
   input += synapse0x2ecb4d0();
   input += synapse0x2ecb510();
   input += synapse0x2ecb550();
   input += synapse0x2ecafe0();
   input += synapse0x2ecb020();
   input += synapse0x2ecb6a0();
   input += synapse0x2ecb6e0();
   input += synapse0x2ecb720();
   input += synapse0x2ecb760();
   input += synapse0x2ecb7a0();
   input += synapse0x2ecb7e0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ecae50() {
   double input = input0x2ecae50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ecb820() {
   double input = -2.2584;
   input += synapse0x2ecbb60();
   input += synapse0x2ecbba0();
   input += synapse0x2ecbbe0();
   input += synapse0x2ecbc20();
   input += synapse0x2ecbc60();
   input += synapse0x2ecbca0();
   input += synapse0x2ecbce0();
   input += synapse0x2ecbd20();
   input += synapse0x2ecbd60();
   input += synapse0x2ecbda0();
   input += synapse0x2ecbde0();
   input += synapse0x2ecbe20();
   input += synapse0x2ecbe60();
   input += synapse0x2ecbea0();
   input += synapse0x2ecbee0();
   input += synapse0x2ecbf20();
   input += synapse0x2ecb9b0();
   input += synapse0x2ecb9f0();
   input += synapse0x2ecc070();
   input += synapse0x2ecc0b0();
   input += synapse0x2ecc0f0();
   input += synapse0x2ecc130();
   input += synapse0x2ecc170();
   input += synapse0x2ecc1b0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ecb820() {
   double input = input0x2ecb820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ecc1f0() {
   double input = 3.81146;
   input += synapse0x2ecc530();
   input += synapse0x2ecc570();
   input += synapse0x2ecc5b0();
   input += synapse0x2ecc5f0();
   input += synapse0x2ecc630();
   input += synapse0x2ecc670();
   input += synapse0x2ecc6b0();
   input += synapse0x2ecc6f0();
   input += synapse0x2ecc730();
   input += synapse0x2ec48f0();
   input += synapse0x2ec4930();
   input += synapse0x2ec4970();
   input += synapse0x2ec49b0();
   input += synapse0x2ec49f0();
   input += synapse0x2ec4a30();
   input += synapse0x2ec4a70();
   input += synapse0x2ecc380();
   input += synapse0x2ecc3c0();
   input += synapse0x2ec4bc0();
   input += synapse0x2ec4c00();
   input += synapse0x2ec4c40();
   input += synapse0x2ec4c80();
   input += synapse0x2ec4cc0();
   input += synapse0x2ec4d00();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ecc1f0() {
   double input = input0x2ecc1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec4d40() {
   double input = -1.74253;
   input += synapse0x2ec5080();
   input += synapse0x2ec50c0();
   input += synapse0x2ec5100();
   input += synapse0x2ec5140();
   input += synapse0x2ec5180();
   input += synapse0x2ec51c0();
   input += synapse0x2ec5200();
   input += synapse0x2ec5240();
   input += synapse0x2ec5280();
   input += synapse0x2ec52c0();
   input += synapse0x2ec5300();
   input += synapse0x2ec5340();
   input += synapse0x2ec5380();
   input += synapse0x2ec53c0();
   input += synapse0x2ec5400();
   input += synapse0x2ec5440();
   input += synapse0x2ec4ed0();
   input += synapse0x2ec4f10();
   input += synapse0x2ec5590();
   input += synapse0x2ec55d0();
   input += synapse0x2ec5610();
   input += synapse0x2ec5650();
   input += synapse0x2ec5690();
   input += synapse0x2ec56d0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec4d40() {
   double input = input0x2ec4d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec5710() {
   double input = -1.14103;
   input += synapse0x2ec58a0();
   input += synapse0x2ece930();
   input += synapse0x2ece970();
   input += synapse0x2ece9b0();
   input += synapse0x2ece9f0();
   input += synapse0x2ecea30();
   input += synapse0x2ecea70();
   input += synapse0x2eceab0();
   input += synapse0x2eceaf0();
   input += synapse0x2eceb30();
   input += synapse0x2eceb70();
   input += synapse0x2ecebb0();
   input += synapse0x2ecebf0();
   input += synapse0x2ecec30();
   input += synapse0x2ecec70();
   input += synapse0x2ececb0();
   input += synapse0x2ece780();
   input += synapse0x2ece7c0();
   input += synapse0x2ecee00();
   input += synapse0x2ecee40();
   input += synapse0x2ecee80();
   input += synapse0x2eceec0();
   input += synapse0x2ecef00();
   input += synapse0x2ecef40();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec5710() {
   double input = input0x2ec5710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ecef80() {
   double input = -0.022097;
   input += synapse0x2ecf2c0();
   input += synapse0x2ecf300();
   input += synapse0x2ecf340();
   input += synapse0x2ecf380();
   input += synapse0x2ecf3c0();
   input += synapse0x2ecf400();
   input += synapse0x2ecf440();
   input += synapse0x2ecf480();
   input += synapse0x2ecf4c0();
   input += synapse0x2ecf500();
   input += synapse0x2ecf540();
   input += synapse0x2ecf580();
   input += synapse0x2ecf5c0();
   input += synapse0x2ecf600();
   input += synapse0x2ecf640();
   input += synapse0x2ecf680();
   input += synapse0x2ecf110();
   input += synapse0x2ecf150();
   input += synapse0x2ecf7d0();
   input += synapse0x2ecf810();
   input += synapse0x2ecf850();
   input += synapse0x2ecf890();
   input += synapse0x2ecf8d0();
   input += synapse0x2ecf910();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ecef80() {
   double input = input0x2ecef80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ecf950() {
   double input = -0.326404;
   input += synapse0x2ecfc90();
   input += synapse0x2ecfcd0();
   input += synapse0x2ecfd10();
   input += synapse0x2ecfd50();
   input += synapse0x2ecfd90();
   input += synapse0x2ecfdd0();
   input += synapse0x2ecfe10();
   input += synapse0x2ecfe50();
   input += synapse0x2ecfe90();
   input += synapse0x2ecfed0();
   input += synapse0x2ecff10();
   input += synapse0x2ecff50();
   input += synapse0x2ecff90();
   input += synapse0x2ecffd0();
   input += synapse0x2ed0010();
   input += synapse0x2ed0050();
   input += synapse0x2ecfae0();
   input += synapse0x2ecfb20();
   input += synapse0x2ed01a0();
   input += synapse0x2ed01e0();
   input += synapse0x2ed0220();
   input += synapse0x2ed0260();
   input += synapse0x2ed02a0();
   input += synapse0x2ed02e0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ecf950() {
   double input = input0x2ecf950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ed0320() {
   double input = 1.29997;
   input += synapse0x2ed0660();
   input += synapse0x2ed06a0();
   input += synapse0x2ed06e0();
   input += synapse0x2ed0720();
   input += synapse0x2ed0760();
   input += synapse0x2ed07a0();
   input += synapse0x2ed07e0();
   input += synapse0x2ed0820();
   input += synapse0x2ed0860();
   input += synapse0x2ed08a0();
   input += synapse0x2ed08e0();
   input += synapse0x2ed0920();
   input += synapse0x2ed0960();
   input += synapse0x2ed09a0();
   input += synapse0x2ed09e0();
   input += synapse0x2ed0a20();
   input += synapse0x2ed04b0();
   input += synapse0x2ed04f0();
   input += synapse0x2ed0b70();
   input += synapse0x2ed0bb0();
   input += synapse0x2ed0bf0();
   input += synapse0x2ed0c30();
   input += synapse0x2ed0c70();
   input += synapse0x2ed0cb0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ed0320() {
   double input = input0x2ed0320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ed0cf0() {
   double input = -0.417383;
   input += synapse0x2ed1030();
   input += synapse0x2ed1070();
   input += synapse0x2ed10b0();
   input += synapse0x2ed10f0();
   input += synapse0x2ed1130();
   input += synapse0x2ed1170();
   input += synapse0x2ed11b0();
   input += synapse0x2ed11f0();
   input += synapse0x2ed1230();
   input += synapse0x2ed1270();
   input += synapse0x2ed12b0();
   input += synapse0x2ed12f0();
   input += synapse0x2ed1330();
   input += synapse0x2ed1370();
   input += synapse0x2ed13b0();
   input += synapse0x2ed13f0();
   input += synapse0x2ed0e80();
   input += synapse0x2ed0ec0();
   input += synapse0x2ed1540();
   input += synapse0x2ed1580();
   input += synapse0x2ed15c0();
   input += synapse0x2ed1600();
   input += synapse0x2ed1640();
   input += synapse0x2ed1680();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ed0cf0() {
   double input = input0x2ed0cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ed16c0() {
   double input = -0.281457;
   input += synapse0x2ed1a00();
   input += synapse0x2ed1a40();
   input += synapse0x2ed1a80();
   input += synapse0x2ed1ac0();
   input += synapse0x2ed1b00();
   input += synapse0x2ed1b40();
   input += synapse0x2ed1b80();
   input += synapse0x2ed1bc0();
   input += synapse0x2ed1c00();
   input += synapse0x2ed1c40();
   input += synapse0x2ed1c80();
   input += synapse0x2ed1cc0();
   input += synapse0x2ed1d00();
   input += synapse0x2ed1d40();
   input += synapse0x2ed1d80();
   input += synapse0x2ed1dc0();
   input += synapse0x2ed1850();
   input += synapse0x2ed1890();
   input += synapse0x2ed1f10();
   input += synapse0x2ed1f50();
   input += synapse0x2ed1f90();
   input += synapse0x2ed1fd0();
   input += synapse0x2ed2010();
   input += synapse0x2ed2050();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ed16c0() {
   double input = input0x2ed16c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ed2090() {
   double input = -1.44576;
   input += synapse0x2ed23d0();
   input += synapse0x2ed2410();
   input += synapse0x2ed2450();
   input += synapse0x2ed2490();
   input += synapse0x2ed24d0();
   input += synapse0x2ed2510();
   input += synapse0x2ed2550();
   input += synapse0x2ed2590();
   input += synapse0x2ed25d0();
   input += synapse0x2ed2610();
   input += synapse0x2ed2650();
   input += synapse0x2ed2690();
   input += synapse0x2ed26d0();
   input += synapse0x2ed2710();
   input += synapse0x2ed2750();
   input += synapse0x2ed2790();
   input += synapse0x2ed2220();
   input += synapse0x2ed2260();
   input += synapse0x2ed28e0();
   input += synapse0x2ed2920();
   input += synapse0x2ed2960();
   input += synapse0x2ed29a0();
   input += synapse0x2ed29e0();
   input += synapse0x2ed2a20();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ed2090() {
   double input = input0x2ed2090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ed2a60() {
   double input = -0.117346;
   input += synapse0x2ed2da0();
   input += synapse0x2ed2de0();
   input += synapse0x2ed2e20();
   input += synapse0x2ed2e60();
   input += synapse0x2ed2ea0();
   input += synapse0x2ed2ee0();
   input += synapse0x2ed2f20();
   input += synapse0x2ed2f60();
   input += synapse0x2ed2fa0();
   input += synapse0x2ed2fe0();
   input += synapse0x2ed3020();
   input += synapse0x2ed3060();
   input += synapse0x2ed30a0();
   input += synapse0x2ed30e0();
   input += synapse0x2ed3120();
   input += synapse0x2ed3160();
   input += synapse0x2ed2bf0();
   input += synapse0x2ed2c30();
   input += synapse0x2ed32b0();
   input += synapse0x2ed32f0();
   input += synapse0x2ed3330();
   input += synapse0x2ed3370();
   input += synapse0x2ed33b0();
   input += synapse0x2ed33f0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ed2a60() {
   double input = input0x2ed2a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ed3430() {
   double input = -0.87847;
   input += synapse0x2ed3770();
   input += synapse0x2ec7d40();
   input += synapse0x2ec7d80();
   input += synapse0x2ec7dc0();
   input += synapse0x2ec8010();
   input += synapse0x2ec8050();
   input += synapse0x2ec8090();
   input += synapse0x2ec82e0();
   input += synapse0x2ec8320();
   input += synapse0x2ec8570();
   input += synapse0x2ec85b0();
   input += synapse0x2ec85f0();
   input += synapse0x2ec8840();
   input += synapse0x2ec8880();
   input += synapse0x2ec8ad0();
   input += synapse0x2ec8b10();
   input += synapse0x2ed35c0();
   input += synapse0x2ed3600();
   input += synapse0x2ec8c60();
   input += synapse0x2ec9170();
   input += synapse0x2ec91b0();
   input += synapse0x2ec91f0();
   input += synapse0x2ec9440();
   input += synapse0x2ec9480();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ed3430() {
   double input = input0x2ed3430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ec94c0() {
   double input = -0.637021;
   input += synapse0x2ec8d30();
   input += synapse0x2ec8d70();
   input += synapse0x2ec8db0();
   input += synapse0x2ec8df0();
   input += synapse0x2ec9770();
   input += synapse0x2ed5ac0();
   input += synapse0x2ed5b00();
   input += synapse0x2ed5b40();
   input += synapse0x2ed5b80();
   input += synapse0x2ed5bc0();
   input += synapse0x2ed5c00();
   input += synapse0x2ed5c40();
   input += synapse0x2ed5c80();
   input += synapse0x2ed5cc0();
   input += synapse0x2ed5d00();
   input += synapse0x2ed5d40();
   input += synapse0x2ec9650();
   input += synapse0x2ec9690();
   input += synapse0x2ed5e90();
   input += synapse0x2ed5ed0();
   input += synapse0x2ed5f10();
   input += synapse0x2ed5f50();
   input += synapse0x2ed5f90();
   input += synapse0x2ed5fd0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ec94c0() {
   double input = input0x2ec94c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ed6010() {
   double input = 0.359041;
   input += synapse0x2ed6350();
   input += synapse0x2ed6390();
   input += synapse0x2ed63d0();
   input += synapse0x2ed6410();
   input += synapse0x2ed6450();
   input += synapse0x2ed6490();
   input += synapse0x2ed64d0();
   input += synapse0x2ed6510();
   input += synapse0x2ed6550();
   input += synapse0x2ed6590();
   input += synapse0x2ed65d0();
   input += synapse0x2ed6610();
   input += synapse0x2ed6650();
   input += synapse0x2ed6690();
   input += synapse0x2ed66d0();
   input += synapse0x2ed6710();
   input += synapse0x2ed61a0();
   input += synapse0x2ed61e0();
   input += synapse0x2ed6860();
   input += synapse0x2ed68a0();
   input += synapse0x2ed68e0();
   input += synapse0x2ed6920();
   input += synapse0x2ed6960();
   input += synapse0x2ed69a0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ed6010() {
   double input = input0x2ed6010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ed69e0() {
   double input = 1.02148;
   input += synapse0x2ed6d20();
   input += synapse0x2ed6d60();
   input += synapse0x2ed6da0();
   input += synapse0x2ed6de0();
   input += synapse0x2ed6e20();
   input += synapse0x2ed6e60();
   input += synapse0x2ed6ea0();
   input += synapse0x2ed6ee0();
   input += synapse0x2ed6f20();
   input += synapse0x2ed6f60();
   input += synapse0x2ed6fa0();
   input += synapse0x2ed6fe0();
   input += synapse0x2ed7020();
   input += synapse0x2ed7060();
   input += synapse0x2ed70a0();
   input += synapse0x2ed70e0();
   input += synapse0x2ed6b70();
   input += synapse0x2ed6bb0();
   input += synapse0x2ed7230();
   input += synapse0x2ed7270();
   input += synapse0x2ed72b0();
   input += synapse0x2ed72f0();
   input += synapse0x2ed7330();
   input += synapse0x2ed7370();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ed69e0() {
   double input = input0x2ed69e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ed73b0() {
   double input = 0.634719;
   input += synapse0x2ed76f0();
   input += synapse0x2ed7730();
   input += synapse0x2ed7770();
   input += synapse0x2ed77b0();
   input += synapse0x2ed77f0();
   input += synapse0x2ed7830();
   input += synapse0x2ed7870();
   input += synapse0x2ed78b0();
   input += synapse0x2ed78f0();
   input += synapse0x2ed7930();
   input += synapse0x2ed7970();
   input += synapse0x2ed79b0();
   input += synapse0x2ed79f0();
   input += synapse0x2ed7a30();
   input += synapse0x2ed7a70();
   input += synapse0x2ed7ab0();
   input += synapse0x2ed7540();
   input += synapse0x2ed7580();
   input += synapse0x2ed7c00();
   input += synapse0x2ed7c40();
   input += synapse0x2ed7c80();
   input += synapse0x2ed7cc0();
   input += synapse0x2ed7d00();
   input += synapse0x2ed7d40();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ed73b0() {
   double input = input0x2ed73b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ed7d80() {
   double input = 0.983726;
   input += synapse0x2ed80c0();
   input += synapse0x2ed8100();
   input += synapse0x2ed8140();
   input += synapse0x2ed8180();
   input += synapse0x2ed81c0();
   input += synapse0x2ed8200();
   input += synapse0x2ed8240();
   input += synapse0x2ed8280();
   input += synapse0x2ed82c0();
   input += synapse0x2ed8300();
   input += synapse0x2ed8340();
   input += synapse0x2ed8380();
   input += synapse0x2ed83c0();
   input += synapse0x2ed8400();
   input += synapse0x2ed8440();
   input += synapse0x2ed8480();
   input += synapse0x2ed7f10();
   input += synapse0x2ed7f50();
   input += synapse0x2ed85d0();
   input += synapse0x2ed8610();
   input += synapse0x2ed8650();
   input += synapse0x2ed8690();
   input += synapse0x2ed86d0();
   input += synapse0x2ed8710();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ed7d80() {
   double input = input0x2ed7d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ed8750() {
   double input = -0.116265;
   input += synapse0x2ed8a90();
   input += synapse0x2ed8ad0();
   input += synapse0x2ed8b10();
   input += synapse0x2ed8b50();
   input += synapse0x2ed8b90();
   input += synapse0x2ed8bd0();
   input += synapse0x2ed8c10();
   input += synapse0x2ed8c50();
   input += synapse0x2ed8c90();
   input += synapse0x2ed8cd0();
   input += synapse0x2ed8d10();
   input += synapse0x2ed8d50();
   input += synapse0x2ed8d90();
   input += synapse0x2ed8dd0();
   input += synapse0x2ed8e10();
   input += synapse0x2ed8e50();
   input += synapse0x2ed88e0();
   input += synapse0x2ed8920();
   input += synapse0x2ed8fa0();
   input += synapse0x2ed8fe0();
   input += synapse0x2ed9020();
   input += synapse0x2ed9060();
   input += synapse0x2ed90a0();
   input += synapse0x2ed90e0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ed8750() {
   double input = input0x2ed8750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ed9120() {
   double input = 0.653651;
   input += synapse0x2ed9460();
   input += synapse0x2ed94a0();
   input += synapse0x2ed94e0();
   input += synapse0x2ed9520();
   input += synapse0x2ed9560();
   input += synapse0x2ed95a0();
   input += synapse0x2ed95e0();
   input += synapse0x2ed9620();
   input += synapse0x2ed9660();
   input += synapse0x2ed96a0();
   input += synapse0x2ed96e0();
   input += synapse0x2ed9720();
   input += synapse0x2ed9760();
   input += synapse0x2ed97a0();
   input += synapse0x2ed97e0();
   input += synapse0x2ed9820();
   input += synapse0x2ed92b0();
   input += synapse0x2ed92f0();
   input += synapse0x2ed9970();
   input += synapse0x2ed99b0();
   input += synapse0x2ed99f0();
   input += synapse0x2ed9a30();
   input += synapse0x2ed9a70();
   input += synapse0x2ed9ab0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ed9120() {
   double input = input0x2ed9120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ed9af0() {
   double input = 1.70926;
   input += synapse0x2ed9e30();
   input += synapse0x2ed9e70();
   input += synapse0x2ed9eb0();
   input += synapse0x2ed9ef0();
   input += synapse0x2ed9f30();
   input += synapse0x2ed9f70();
   input += synapse0x2ed9fb0();
   input += synapse0x2ed9ff0();
   input += synapse0x2eda030();
   input += synapse0x2eda070();
   input += synapse0x2eda0b0();
   input += synapse0x2eda0f0();
   input += synapse0x2eda130();
   input += synapse0x2eda170();
   input += synapse0x2eda1b0();
   input += synapse0x2eda1f0();
   input += synapse0x2ed9c80();
   input += synapse0x2ed9cc0();
   input += synapse0x2eda340();
   input += synapse0x2eda380();
   input += synapse0x2eda3c0();
   input += synapse0x2eda400();
   input += synapse0x2eda440();
   input += synapse0x2eda480();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ed9af0() {
   double input = input0x2ed9af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2eda4c0() {
   double input = 0.309606;
   input += synapse0x2ec2f30();
   input += synapse0x2ec2f70();
   input += synapse0x2ec2fb0();
   input += synapse0x2ec2ff0();
   input += synapse0x2ec3030();
   input += synapse0x2ec3070();
   input += synapse0x2ec30b0();
   input += synapse0x2ec30f0();
   input += synapse0x2edac10();
   input += synapse0x2edac50();
   input += synapse0x2edac90();
   input += synapse0x2edacd0();
   input += synapse0x2edad10();
   input += synapse0x2edad50();
   input += synapse0x2edad90();
   input += synapse0x2edadd0();
   input += synapse0x2eda650();
   input += synapse0x2eda690();
   input += synapse0x2edaf20();
   input += synapse0x2edaf60();
   input += synapse0x2edafa0();
   input += synapse0x2edafe0();
   input += synapse0x2edb020();
   input += synapse0x2edb060();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2eda4c0() {
   double input = input0x2eda4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2edb0a0() {
   double input = -2.19938;
   input += synapse0x2edb3e0();
   input += synapse0x2edb420();
   input += synapse0x2edb460();
   input += synapse0x2edb4a0();
   input += synapse0x2edb4e0();
   input += synapse0x2edb520();
   input += synapse0x2edb560();
   input += synapse0x2edb5a0();
   input += synapse0x2edb5e0();
   input += synapse0x2edb620();
   input += synapse0x2edb660();
   input += synapse0x2edb6a0();
   input += synapse0x2edb6e0();
   input += synapse0x2edb720();
   input += synapse0x2edb760();
   input += synapse0x2edb7a0();
   input += synapse0x2edb230();
   input += synapse0x2edb270();
   input += synapse0x2edb8f0();
   input += synapse0x2edb930();
   input += synapse0x2edb970();
   input += synapse0x2edb9b0();
   input += synapse0x2edb9f0();
   input += synapse0x2edba30();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2edb0a0() {
   double input = input0x2edb0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2edba70() {
   double input = 1.38491;
   input += synapse0x2edbdb0();
   input += synapse0x2edbdf0();
   input += synapse0x2edbe30();
   input += synapse0x2edbe70();
   input += synapse0x2edbeb0();
   input += synapse0x2edbef0();
   input += synapse0x2edbf30();
   input += synapse0x2edbf70();
   input += synapse0x2edbfb0();
   input += synapse0x2edbff0();
   input += synapse0x2edc030();
   input += synapse0x2edc070();
   input += synapse0x2edc0b0();
   input += synapse0x2edc0f0();
   input += synapse0x2edc130();
   input += synapse0x2edc170();
   input += synapse0x2edbc00();
   input += synapse0x2edbc40();
   input += synapse0x2ecc770();
   input += synapse0x2ecc7b0();
   input += synapse0x2ecc7f0();
   input += synapse0x2ecc830();
   input += synapse0x2ecc870();
   input += synapse0x2ecc8b0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2edba70() {
   double input = input0x2edba70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ecc8f0() {
   double input = 0.482154;
   input += synapse0x2eccc30();
   input += synapse0x2eccc70();
   input += synapse0x2ecccb0();
   input += synapse0x2ecccf0();
   input += synapse0x2eccd30();
   input += synapse0x2eccd70();
   input += synapse0x2eccdb0();
   input += synapse0x2eccdf0();
   input += synapse0x2ecce30();
   input += synapse0x2ecce70();
   input += synapse0x2ecceb0();
   input += synapse0x2eccef0();
   input += synapse0x2eccf30();
   input += synapse0x2eccf70();
   input += synapse0x2eccfb0();
   input += synapse0x2eccff0();
   input += synapse0x2ecca80();
   input += synapse0x2eccac0();
   input += synapse0x2ecd140();
   input += synapse0x2ecd180();
   input += synapse0x2ecd1c0();
   input += synapse0x2ecd200();
   input += synapse0x2ecd240();
   input += synapse0x2ecd280();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ecc8f0() {
   double input = input0x2ecc8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ecd2c0() {
   double input = 1.01805;
   input += synapse0x2ecd600();
   input += synapse0x2ecd640();
   input += synapse0x2ecd680();
   input += synapse0x2ecd6c0();
   input += synapse0x2ecd700();
   input += synapse0x2ecd740();
   input += synapse0x2ecd780();
   input += synapse0x2ecd7c0();
   input += synapse0x2ecd800();
   input += synapse0x2ecd840();
   input += synapse0x2ecd880();
   input += synapse0x2ecd8c0();
   input += synapse0x2ecd900();
   input += synapse0x2ecd940();
   input += synapse0x2ecd980();
   input += synapse0x2ecd9c0();
   input += synapse0x2ecd450();
   input += synapse0x2ecd490();
   input += synapse0x2ecdb10();
   input += synapse0x2ecdb50();
   input += synapse0x2ecdb90();
   input += synapse0x2ecdbd0();
   input += synapse0x2ecdc10();
   input += synapse0x2ecdc50();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ecd2c0() {
   double input = input0x2ecd2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ecdc90() {
   double input = 0.508211;
   input += synapse0x2ecdfd0();
   input += synapse0x2ece010();
   input += synapse0x2ece050();
   input += synapse0x2ece090();
   input += synapse0x2ece0d0();
   input += synapse0x2ece110();
   input += synapse0x2ece150();
   input += synapse0x2ece190();
   input += synapse0x2ece1d0();
   input += synapse0x2ece210();
   input += synapse0x2ece250();
   input += synapse0x2ece290();
   input += synapse0x2ece2d0();
   input += synapse0x2ece310();
   input += synapse0x2ece350();
   input += synapse0x2ece390();
   input += synapse0x2ecde20();
   input += synapse0x2ecde60();
   input += synapse0x2ece4e0();
   input += synapse0x2ece520();
   input += synapse0x2ece560();
   input += synapse0x2ece5a0();
   input += synapse0x2ece5e0();
   input += synapse0x2ece620();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ecdc90() {
   double input = input0x2ecdc90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ee02d0() {
   double input = -0.0320252;
   input += synapse0x2ee04f0();
   input += synapse0x2ee0530();
   input += synapse0x2ee0570();
   input += synapse0x2ee05b0();
   input += synapse0x2ee05f0();
   input += synapse0x2ee0630();
   input += synapse0x2ee0670();
   input += synapse0x2ee06b0();
   input += synapse0x2ee06f0();
   input += synapse0x2ee0730();
   input += synapse0x2ee0770();
   input += synapse0x2ee07b0();
   input += synapse0x2ee07f0();
   input += synapse0x2ee0830();
   input += synapse0x2ee0870();
   input += synapse0x2ee08b0();
   input += synapse0x2ece660();
   input += synapse0x2ece6a0();
   input += synapse0x2ee0a00();
   input += synapse0x2ee0a40();
   input += synapse0x2ee0a80();
   input += synapse0x2ee0ac0();
   input += synapse0x2ee0b00();
   input += synapse0x2ee0b40();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ee02d0() {
   double input = input0x2ee02d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ee0b80() {
   double input = 1.84001;
   input += synapse0x2ee0ec0();
   input += synapse0x2ee0f00();
   input += synapse0x2ee0f40();
   input += synapse0x2ee0f80();
   input += synapse0x2ee0fc0();
   input += synapse0x2ee1000();
   input += synapse0x2ee1040();
   input += synapse0x2ee1080();
   input += synapse0x2ee10c0();
   input += synapse0x2ee1100();
   input += synapse0x2ee1140();
   input += synapse0x2ee1180();
   input += synapse0x2ee11c0();
   input += synapse0x2ee1200();
   input += synapse0x2ee1240();
   input += synapse0x2ee1280();
   input += synapse0x2ee0d10();
   input += synapse0x2ee0d50();
   input += synapse0x2ee13d0();
   input += synapse0x2ee1410();
   input += synapse0x2ee1450();
   input += synapse0x2ee1490();
   input += synapse0x2ee14d0();
   input += synapse0x2ee1510();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ee0b80() {
   double input = input0x2ee0b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ee1550() {
   double input = -0.696529;
   input += synapse0x2ee1890();
   input += synapse0x2ee18d0();
   input += synapse0x2ee1910();
   input += synapse0x2ee1950();
   input += synapse0x2ee1990();
   input += synapse0x2ee19d0();
   input += synapse0x2ee1a10();
   input += synapse0x2ee1a50();
   input += synapse0x2ee1a90();
   input += synapse0x2ee1ad0();
   input += synapse0x2ee1b10();
   input += synapse0x2ee1b50();
   input += synapse0x2ee1b90();
   input += synapse0x2ee1bd0();
   input += synapse0x2ee1c10();
   input += synapse0x2ee1c50();
   input += synapse0x2ee16e0();
   input += synapse0x2ee1720();
   input += synapse0x2ee1da0();
   input += synapse0x2ee1de0();
   input += synapse0x2ee1e20();
   input += synapse0x2ee1e60();
   input += synapse0x2ee1ea0();
   input += synapse0x2ee1ee0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ee1550() {
   double input = input0x2ee1550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ee1f20() {
   double input = -0.226426;
   input += synapse0x2ee2260();
   input += synapse0x2ee22a0();
   input += synapse0x2ee22e0();
   input += synapse0x2ee2320();
   input += synapse0x2ee2360();
   input += synapse0x2ee23a0();
   input += synapse0x2ee23e0();
   input += synapse0x2ee2420();
   input += synapse0x2ee2460();
   input += synapse0x2ee24a0();
   input += synapse0x2ee24e0();
   input += synapse0x2ee2520();
   input += synapse0x2ee2560();
   input += synapse0x2ee25a0();
   input += synapse0x2ee25e0();
   input += synapse0x2ee2620();
   input += synapse0x2ee20b0();
   input += synapse0x2ee20f0();
   input += synapse0x2ee2770();
   input += synapse0x2ee27b0();
   input += synapse0x2ee27f0();
   input += synapse0x2ee2830();
   input += synapse0x2ee2870();
   input += synapse0x2ee28b0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ee1f20() {
   double input = input0x2ee1f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ee9120() {
   double input = -1.2489;
   input += synapse0x2c82720();
   input += synapse0x2c82760();
   input += synapse0x2ebf260();
   input += synapse0x2ebf2a0();
   input += synapse0x2ec0d30();
   input += synapse0x2ec0d70();
   input += synapse0x2ec1b00();
   input += synapse0x2ec1b40();
   input += synapse0x2ec24d0();
   input += synapse0x2ec2510();
   input += synapse0x2ec2ea0();
   input += synapse0x2ec2ee0();
   input += synapse0x2ec3980();
   input += synapse0x2ec39c0();
   input += synapse0x2ec4350();
   input += synapse0x2ec4390();
   input += synapse0x2ec1430();
   input += synapse0x2ec1470();
   input += synapse0x2ec5f00();
   input += synapse0x2ec5f40();
   input += synapse0x2ec68d0();
   input += synapse0x2ec6910();
   input += synapse0x2ec72a0();
   input += synapse0x2ec72e0();
   input += synapse0x2ec7c70();
   input += synapse0x2ec7cb0();
   input += synapse0x2ebad00();
   input += synapse0x2ebad40();
   input += synapse0x2ec9d60();
   input += synapse0x2ec9da0();
   input += synapse0x2eca730();
   input += synapse0x2eca770();
   input += synapse0x2ecb100();
   input += synapse0x2ecb140();
   input += synapse0x2ecbad0();
   input += synapse0x2ecbb10();
   input += synapse0x2ecc4a0();
   input += synapse0x2ecc4e0();
   input += synapse0x2ec4ff0();
   input += synapse0x2ec5030();
   input += synapse0x2ece8a0();
   input += synapse0x2ece8e0();
   input += synapse0x2ecf230();
   input += synapse0x2ecf270();
   input += synapse0x2ecfc00();
   input += synapse0x2ecfc40();
   input += synapse0x2ed05d0();
   input += synapse0x2ed0610();
   input += synapse0x2ed0fa0();
   input += synapse0x2ed0fe0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ee9120() {
   double input = input0x2ee9120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ee94c0() {
   double input = -0.931092;
   input += synapse0x2ed36e0();
   input += synapse0x2ed3720();
   input += synapse0x2ec8ca0();
   input += synapse0x2ec8ce0();
   input += synapse0x2ed62c0();
   input += synapse0x2ed6300();
   input += synapse0x2ed6c90();
   input += synapse0x2ed6cd0();
   input += synapse0x2ed7660();
   input += synapse0x2ed76a0();
   input += synapse0x2ed8030();
   input += synapse0x2ed8070();
   input += synapse0x2ed8a00();
   input += synapse0x2ed8a40();
   input += synapse0x2ed93d0();
   input += synapse0x2ed9410();
   input += synapse0x2ed9da0();
   input += synapse0x2ed9de0();
   input += synapse0x2eda770();
   input += synapse0x2eda7b0();
   input += synapse0x2edb350();
   input += synapse0x2edb390();
   input += synapse0x2edbd20();
   input += synapse0x2edbd60();
   input += synapse0x2eccba0();
   input += synapse0x2eccbe0();
   input += synapse0x2ecd570();
   input += synapse0x2ecd5b0();
   input += synapse0x2ecdf40();
   input += synapse0x2ecdf80();
   input += synapse0x2ee0460();
   input += synapse0x2ee04a0();
   input += synapse0x2ee0e30();
   input += synapse0x2ee0e70();
   input += synapse0x2ee1800();
   input += synapse0x2ee1840();
   input += synapse0x2ee21d0();
   input += synapse0x2ee2210();
   input += synapse0x2ebd160();
   input += synapse0x2ebd1a0();
   input += synapse0x2ed1970();
   input += synapse0x2ed19b0();
   input += synapse0x2ee28f0();
   input += synapse0x2ee2930();
   input += synapse0x2ee2970();
   input += synapse0x2ee29b0();
   input += synapse0x2ee9860();
   input += synapse0x2ee98a0();
   input += synapse0x2ee98e0();
   input += synapse0x2ee9920();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ee94c0() {
   double input = input0x2ee94c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2ee9960() {
   double input = -0.158699;
   input += synapse0x2ee9ca0();
   input += synapse0x2ee9ce0();
   input += synapse0x2ee9d20();
   input += synapse0x2ee9d60();
   input += synapse0x2ee9da0();
   input += synapse0x2ee9de0();
   input += synapse0x2ee9e20();
   input += synapse0x2ee9e60();
   input += synapse0x2ee9ea0();
   input += synapse0x2ee9ee0();
   input += synapse0x2ee9f20();
   input += synapse0x2ee9f60();
   input += synapse0x2ee9fa0();
   input += synapse0x2ee9fe0();
   input += synapse0x2eea020();
   input += synapse0x2eea060();
   input += synapse0x2ee9af0();
   input += synapse0x2ee9b30();
   input += synapse0x2eea1b0();
   input += synapse0x2eea1f0();
   input += synapse0x2eea230();
   input += synapse0x2eea270();
   input += synapse0x2eea2b0();
   input += synapse0x2eea2f0();
   input += synapse0x2eea330();
   input += synapse0x2eea370();
   input += synapse0x2eea3b0();
   input += synapse0x2eea3f0();
   input += synapse0x2eea430();
   input += synapse0x2eea470();
   input += synapse0x2eea4b0();
   input += synapse0x2eea4f0();
   input += synapse0x2eea0a0();
   input += synapse0x2eea0e0();
   input += synapse0x2eea120();
   input += synapse0x2eea160();
   input += synapse0x2eea740();
   input += synapse0x2eea780();
   input += synapse0x2eea7c0();
   input += synapse0x2eea800();
   input += synapse0x2eea840();
   input += synapse0x2eea880();
   input += synapse0x2eea8c0();
   input += synapse0x2eea900();
   input += synapse0x2eea940();
   input += synapse0x2eea980();
   input += synapse0x2eea9c0();
   input += synapse0x2eeaa00();
   input += synapse0x2eeaa40();
   input += synapse0x2eeaa80();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2ee9960() {
   double input = input0x2ee9960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2eeaac0() {
   double input = -0.643753;
   input += synapse0x2eeae00();
   input += synapse0x2eeae40();
   input += synapse0x2eeae80();
   input += synapse0x2eeaec0();
   input += synapse0x2eeaf00();
   input += synapse0x2eeaf40();
   input += synapse0x2eeaf80();
   input += synapse0x2eeafc0();
   input += synapse0x2eeb000();
   input += synapse0x2eeb040();
   input += synapse0x2eeb080();
   input += synapse0x2eeb0c0();
   input += synapse0x2eeb100();
   input += synapse0x2eeb140();
   input += synapse0x2eeb180();
   input += synapse0x2eeb1c0();
   input += synapse0x2eeac50();
   input += synapse0x2eeac90();
   input += synapse0x2eeb310();
   input += synapse0x2eeb350();
   input += synapse0x2eeb390();
   input += synapse0x2eeb3d0();
   input += synapse0x2eeb410();
   input += synapse0x2eeb450();
   input += synapse0x2eeb490();
   input += synapse0x2eeb4d0();
   input += synapse0x2eeb510();
   input += synapse0x2eeb550();
   input += synapse0x2eeb590();
   input += synapse0x2eeb5d0();
   input += synapse0x2eeb610();
   input += synapse0x2eeb650();
   input += synapse0x2eeb200();
   input += synapse0x2eeb240();
   input += synapse0x2eeb280();
   input += synapse0x2eeb2c0();
   input += synapse0x2eeb8a0();
   input += synapse0x2eeb8e0();
   input += synapse0x2eeb920();
   input += synapse0x2eeb960();
   input += synapse0x2eeb9a0();
   input += synapse0x2eeb9e0();
   input += synapse0x2eeba20();
   input += synapse0x2eeba60();
   input += synapse0x2eebaa0();
   input += synapse0x2eebae0();
   input += synapse0x2eebb20();
   input += synapse0x2eebb60();
   input += synapse0x2eebba0();
   input += synapse0x2eebbe0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2eeaac0() {
   double input = input0x2eeaac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2eebc20() {
   double input = 0.635231;
   input += synapse0x2eebf60();
   input += synapse0x2eebfa0();
   input += synapse0x2eebfe0();
   input += synapse0x2eec020();
   input += synapse0x2eec060();
   input += synapse0x2eec0a0();
   input += synapse0x2eec0e0();
   input += synapse0x2eec120();
   input += synapse0x2eec160();
   input += synapse0x2eec1a0();
   input += synapse0x2eec1e0();
   input += synapse0x2eec220();
   input += synapse0x2eec260();
   input += synapse0x2eec2a0();
   input += synapse0x2eec2e0();
   input += synapse0x2eec320();
   input += synapse0x2eebdb0();
   input += synapse0x2eebdf0();
   input += synapse0x2eec470();
   input += synapse0x2eec4b0();
   input += synapse0x2eec4f0();
   input += synapse0x2eec530();
   input += synapse0x2eec570();
   input += synapse0x2eec5b0();
   input += synapse0x2eec5f0();
   input += synapse0x2eec630();
   input += synapse0x2eec670();
   input += synapse0x2eec6b0();
   input += synapse0x2eec6f0();
   input += synapse0x2eec730();
   input += synapse0x2eec770();
   input += synapse0x2eec7b0();
   input += synapse0x2eec360();
   input += synapse0x2eec3a0();
   input += synapse0x2eec3e0();
   input += synapse0x2eec420();
   input += synapse0x2eeca00();
   input += synapse0x2eeca40();
   input += synapse0x2eeca80();
   input += synapse0x2eecac0();
   input += synapse0x2eecb00();
   input += synapse0x2eecb40();
   input += synapse0x2eecb80();
   input += synapse0x2eecbc0();
   input += synapse0x2eecc00();
   input += synapse0x2eecc40();
   input += synapse0x2eecc80();
   input += synapse0x2eeccc0();
   input += synapse0x2eecd00();
   input += synapse0x2eecd40();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2eebc20() {
   double input = input0x2eebc20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRsR::input0x2eecd80() {
   double input = 11.2543;
   input += synapse0x2eecfa0();
   input += synapse0x2eecfe0();
   input += synapse0x2eed020();
   input += synapse0x2eed060();
   input += synapse0x2eed0a0();
   return input;
}

double NNfunction_sb_dRsR::neuron0x2eecd80() {
   double input = input0x2eecd80();
   return (input * 1)+0;
}

double NNfunction_sb_dRsR::synapse0x2ebd1f0() {
   return (neuron0x2eb7df0()*0.353578);
}

double NNfunction_sb_dRsR::synapse0x2ebd230() {
   return (neuron0x2eb80a0()*0.0276784);
}

double NNfunction_sb_dRsR::synapse0x2ebd270() {
   return (neuron0x2eb83e0()*-1.12916);
}

double NNfunction_sb_dRsR::synapse0x2ebd2b0() {
   return (neuron0x2eb8720()*-0.354588);
}

double NNfunction_sb_dRsR::synapse0x2ebd2f0() {
   return (neuron0x2eb8a60()*-0.34245);
}

double NNfunction_sb_dRsR::synapse0x2ebd330() {
   return (neuron0x2eb8da0()*0.120436);
}

double NNfunction_sb_dRsR::synapse0x2ebd370() {
   return (neuron0x2eb90e0()*0.64211);
}

double NNfunction_sb_dRsR::synapse0x2ebd3b0() {
   return (neuron0x2eb9420()*-0.261331);
}

double NNfunction_sb_dRsR::synapse0x2ebd3f0() {
   return (neuron0x2eb9760()*-0.36592);
}

double NNfunction_sb_dRsR::synapse0x2ebd430() {
   return (neuron0x2eb9aa0()*0.287668);
}

double NNfunction_sb_dRsR::synapse0x2ebd470() {
   return (neuron0x2eb9de0()*-0.279926);
}

double NNfunction_sb_dRsR::synapse0x2ebd4b0() {
   return (neuron0x2eba120()*0.178153);
}

double NNfunction_sb_dRsR::synapse0x2ebd4f0() {
   return (neuron0x2eba460()*-0.441);
}

double NNfunction_sb_dRsR::synapse0x2ebd530() {
   return (neuron0x2eba7a0()*-0.670101);
}

double NNfunction_sb_dRsR::synapse0x2ebd570() {
   return (neuron0x2ebaae0()*-0.300245);
}

double NNfunction_sb_dRsR::synapse0x2ebd5b0() {
   return (neuron0x2ebae20()*-0.160306);
}

double NNfunction_sb_dRsR::synapse0x2ebd040() {
   return (neuron0x2ebb160()*1.23387);
}

double NNfunction_sb_dRsR::synapse0x2ebd080() {
   return (neuron0x2ebb6c0()*0.199597);
}

double NNfunction_sb_dRsR::synapse0x2c73fb0() {
   return (neuron0x2ebba00()*-0.153601);
}

double NNfunction_sb_dRsR::synapse0x2c73ff0() {
   return (neuron0x2ebbd40()*-1.43438);
}

double NNfunction_sb_dRsR::synapse0x2ebd5f0() {
   return (neuron0x2ebc080()*-0.0359713);
}

double NNfunction_sb_dRsR::synapse0x2ebd630() {
   return (neuron0x2ebc3c0()*-0.0252397);
}

double NNfunction_sb_dRsR::synapse0x2ebd670() {
   return (neuron0x2ebc700()*-0.533078);
}

double NNfunction_sb_dRsR::synapse0x2ebd6b0() {
   return (neuron0x2ebca40()*-0.623109);
}

double NNfunction_sb_dRsR::synapse0x2ebda30() {
   return (neuron0x2eb7df0()*-0.0693859);
}

double NNfunction_sb_dRsR::synapse0x2ebda70() {
   return (neuron0x2eb80a0()*0.0298341);
}

double NNfunction_sb_dRsR::synapse0x2ebdab0() {
   return (neuron0x2eb83e0()*-0.578814);
}

double NNfunction_sb_dRsR::synapse0x2ebdaf0() {
   return (neuron0x2eb8720()*-1.76205);
}

double NNfunction_sb_dRsR::synapse0x2ebdb30() {
   return (neuron0x2eb8a60()*0.180757);
}

double NNfunction_sb_dRsR::synapse0x2ebdb70() {
   return (neuron0x2eb8da0()*0.234424);
}

double NNfunction_sb_dRsR::synapse0x2ebdbb0() {
   return (neuron0x2eb90e0()*0.490817);
}

double NNfunction_sb_dRsR::synapse0x2ebdbf0() {
   return (neuron0x2eb9420()*0.518159);
}

double NNfunction_sb_dRsR::synapse0x2ebdc30() {
   return (neuron0x2eb9760()*-0.310597);
}

double NNfunction_sb_dRsR::synapse0x2c73e00() {
   return (neuron0x2eb9aa0()*-0.485834);
}

double NNfunction_sb_dRsR::synapse0x2c73e40() {
   return (neuron0x2eb9de0()*-0.257243);
}

double NNfunction_sb_dRsR::synapse0x2c73e80() {
   return (neuron0x2eba120()*-0.0407515);
}

double NNfunction_sb_dRsR::synapse0x2c73ec0() {
   return (neuron0x2eba460()*0.118895);
}

double NNfunction_sb_dRsR::synapse0x2ebde80() {
   return (neuron0x2eba7a0()*0.232992);
}

double NNfunction_sb_dRsR::synapse0x2ebdec0() {
   return (neuron0x2ebaae0()*-0.204132);
}

double NNfunction_sb_dRsR::synapse0x2ebdf00() {
   return (neuron0x2ebae20()*0.154317);
}

double NNfunction_sb_dRsR::synapse0x2ebd880() {
   return (neuron0x2ebb160()*0.593432);
}

double NNfunction_sb_dRsR::synapse0x2ebd8c0() {
   return (neuron0x2ebb6c0()*-0.48926);
}

double NNfunction_sb_dRsR::synapse0x2ebe050() {
   return (neuron0x2ebba00()*-0.270548);
}

double NNfunction_sb_dRsR::synapse0x2ebe090() {
   return (neuron0x2ebbd40()*0.0447217);
}

double NNfunction_sb_dRsR::synapse0x2ebe0d0() {
   return (neuron0x2ebc080()*0.157217);
}

double NNfunction_sb_dRsR::synapse0x2ebe110() {
   return (neuron0x2ebc3c0()*-0.102303);
}

double NNfunction_sb_dRsR::synapse0x2ebe150() {
   return (neuron0x2ebc700()*0.102899);
}

double NNfunction_sb_dRsR::synapse0x2ebe190() {
   return (neuron0x2ebca40()*0.0718572);
}

double NNfunction_sb_dRsR::synapse0x2ebe510() {
   return (neuron0x2eb7df0()*-0.553136);
}

double NNfunction_sb_dRsR::synapse0x2ebe550() {
   return (neuron0x2eb80a0()*-0.433272);
}

double NNfunction_sb_dRsR::synapse0x2ebe590() {
   return (neuron0x2eb83e0()*-0.269143);
}

double NNfunction_sb_dRsR::synapse0x2ebe5d0() {
   return (neuron0x2eb8720()*-0.815186);
}

double NNfunction_sb_dRsR::synapse0x2ebe610() {
   return (neuron0x2eb8a60()*0.513988);
}

double NNfunction_sb_dRsR::synapse0x2ebe650() {
   return (neuron0x2eb8da0()*-0.044659);
}

double NNfunction_sb_dRsR::synapse0x2ebe690() {
   return (neuron0x2eb90e0()*-0.676131);
}

double NNfunction_sb_dRsR::synapse0x2ebe6d0() {
   return (neuron0x2eb9420()*0.543046);
}

double NNfunction_sb_dRsR::synapse0x2ebe710() {
   return (neuron0x2eb9760()*-0.157236);
}

double NNfunction_sb_dRsR::synapse0x2ebe750() {
   return (neuron0x2eb9aa0()*-0.706994);
}

double NNfunction_sb_dRsR::synapse0x2ebe790() {
   return (neuron0x2eb9de0()*0.0322688);
}

double NNfunction_sb_dRsR::synapse0x2ebe7d0() {
   return (neuron0x2eba120()*-0.465282);
}

double NNfunction_sb_dRsR::synapse0x2ebe810() {
   return (neuron0x2eba460()*0.774871);
}

double NNfunction_sb_dRsR::synapse0x2ebe850() {
   return (neuron0x2eba7a0()*0.064874);
}

double NNfunction_sb_dRsR::synapse0x2ebe890() {
   return (neuron0x2ebaae0()*0.229518);
}

double NNfunction_sb_dRsR::synapse0x2ebe8d0() {
   return (neuron0x2ebae20()*-0.161807);
}

double NNfunction_sb_dRsR::synapse0x2ebe360() {
   return (neuron0x2ebb160()*-0.383637);
}

double NNfunction_sb_dRsR::synapse0x2ebe3a0() {
   return (neuron0x2ebb6c0()*-1.16678);
}

double NNfunction_sb_dRsR::synapse0x2c74660() {
   return (neuron0x2ebba00()*-0.301805);
}

double NNfunction_sb_dRsR::synapse0x2c81f30() {
   return (neuron0x2ebbd40()*-1.0139);
}

double NNfunction_sb_dRsR::synapse0x2c81f70() {
   return (neuron0x2ebc080()*-0.506329);
}

double NNfunction_sb_dRsR::synapse0x2ec0800() {
   return (neuron0x2ebc3c0()*0.261959);
}

double NNfunction_sb_dRsR::synapse0x2ec0840() {
   return (neuron0x2ebc700()*0.656141);
}

double NNfunction_sb_dRsR::synapse0x2eb7b30() {
   return (neuron0x2ebca40()*0.970331);
}

double NNfunction_sb_dRsR::synapse0x2eb7c00() {
   return (neuron0x2eb7df0()*-0.0787994);
}

double NNfunction_sb_dRsR::synapse0x2c827b0() {
   return (neuron0x2eb80a0()*-0.0237792);
}

double NNfunction_sb_dRsR::synapse0x2ebde00() {
   return (neuron0x2eb83e0()*-0.0830064);
}

double NNfunction_sb_dRsR::synapse0x2ebde40() {
   return (neuron0x2eb8720()*-0.36341);
}

double NNfunction_sb_dRsR::synapse0x2ebea20() {
   return (neuron0x2eb8a60()*-0.00242269);
}

double NNfunction_sb_dRsR::synapse0x2ebea60() {
   return (neuron0x2eb8da0()*0.00022793);
}

double NNfunction_sb_dRsR::synapse0x2ebeaa0() {
   return (neuron0x2eb90e0()*0.0502516);
}

double NNfunction_sb_dRsR::synapse0x2ebeae0() {
   return (neuron0x2eb9420()*-0.00135153);
}

double NNfunction_sb_dRsR::synapse0x2ebeb20() {
   return (neuron0x2eb9760()*0.00213171);
}

double NNfunction_sb_dRsR::synapse0x2ebeb60() {
   return (neuron0x2eb9aa0()*-0.0264491);
}

double NNfunction_sb_dRsR::synapse0x2ebeba0() {
   return (neuron0x2eb9de0()*0.0242885);
}

double NNfunction_sb_dRsR::synapse0x2ebebe0() {
   return (neuron0x2eba120()*-0.298415);
}

double NNfunction_sb_dRsR::synapse0x2ebec20() {
   return (neuron0x2eba460()*-0.241595);
}

double NNfunction_sb_dRsR::synapse0x2ebec60() {
   return (neuron0x2eba7a0()*0.0247526);
}

double NNfunction_sb_dRsR::synapse0x2ebeca0() {
   return (neuron0x2ebaae0()*-0.481583);
}

double NNfunction_sb_dRsR::synapse0x2ebece0() {
   return (neuron0x2ebae20()*-0.580296);
}

double NNfunction_sb_dRsR::synapse0x2eb7b70() {
   return (neuron0x2ebb160()*0.0245506);
}

double NNfunction_sb_dRsR::synapse0x2eb7bb0() {
   return (neuron0x2ebb6c0()*0.36709);
}

double NNfunction_sb_dRsR::synapse0x2ebee30() {
   return (neuron0x2ebba00()*0.0395758);
}

double NNfunction_sb_dRsR::synapse0x2ebee70() {
   return (neuron0x2ebbd40()*-0.0488708);
}

double NNfunction_sb_dRsR::synapse0x2ebeeb0() {
   return (neuron0x2ebc080()*0.0452362);
}

double NNfunction_sb_dRsR::synapse0x2ebeef0() {
   return (neuron0x2ebc3c0()*0.0199965);
}

double NNfunction_sb_dRsR::synapse0x2ebef30() {
   return (neuron0x2ebc700()*0.0514294);
}

double NNfunction_sb_dRsR::synapse0x2ebef70() {
   return (neuron0x2ebca40()*0.00749319);
}

double NNfunction_sb_dRsR::synapse0x2ebf2f0() {
   return (neuron0x2eb7df0()*-0.015051);
}

double NNfunction_sb_dRsR::synapse0x2ebf330() {
   return (neuron0x2eb80a0()*-0.00124716);
}

double NNfunction_sb_dRsR::synapse0x2ebf370() {
   return (neuron0x2eb83e0()*-0.015422);
}

double NNfunction_sb_dRsR::synapse0x2ebf3b0() {
   return (neuron0x2eb8720()*-1.79901);
}

double NNfunction_sb_dRsR::synapse0x2ebf3f0() {
   return (neuron0x2eb8a60()*0.00258534);
}

double NNfunction_sb_dRsR::synapse0x2ebf430() {
   return (neuron0x2eb8da0()*0.0189588);
}

double NNfunction_sb_dRsR::synapse0x2ebf470() {
   return (neuron0x2eb90e0()*-0.00825528);
}

double NNfunction_sb_dRsR::synapse0x2ebf4b0() {
   return (neuron0x2eb9420()*-0.0173494);
}

double NNfunction_sb_dRsR::synapse0x2ebf4f0() {
   return (neuron0x2eb9760()*0.0315931);
}

double NNfunction_sb_dRsR::synapse0x2ebf530() {
   return (neuron0x2eb9aa0()*0.00685139);
}

double NNfunction_sb_dRsR::synapse0x2ebf570() {
   return (neuron0x2eb9de0()*0.00742302);
}

double NNfunction_sb_dRsR::synapse0x2ebf5b0() {
   return (neuron0x2eba120()*-0.0312597);
}

double NNfunction_sb_dRsR::synapse0x2ebf5f0() {
   return (neuron0x2eba460()*-0.0194953);
}

double NNfunction_sb_dRsR::synapse0x2ebf630() {
   return (neuron0x2eba7a0()*-0.0266881);
}

double NNfunction_sb_dRsR::synapse0x2ebf670() {
   return (neuron0x2ebaae0()*-0.0264156);
}

double NNfunction_sb_dRsR::synapse0x2ebf6b0() {
   return (neuron0x2ebae20()*-0.00292152);
}

double NNfunction_sb_dRsR::synapse0x2ebf800() {
   return (neuron0x2ebb160()*-0.0400557);
}

double NNfunction_sb_dRsR::synapse0x2ebf140() {
   return (neuron0x2ebb6c0()*-0.0162371);
}

double NNfunction_sb_dRsR::synapse0x2ebf180() {
   return (neuron0x2ebba00()*-0.0852964);
}

double NNfunction_sb_dRsR::synapse0x2ec0940() {
   return (neuron0x2ebbd40()*0.0238365);
}

double NNfunction_sb_dRsR::synapse0x2ec0980() {
   return (neuron0x2ebc080()*0.0232809);
}

double NNfunction_sb_dRsR::synapse0x2ec09c0() {
   return (neuron0x2ebc3c0()*0.0299928);
}

double NNfunction_sb_dRsR::synapse0x2ec0a00() {
   return (neuron0x2ebc700()*-0.0184984);
}

double NNfunction_sb_dRsR::synapse0x2ec0a40() {
   return (neuron0x2ebca40()*-0.0174868);
}

double NNfunction_sb_dRsR::synapse0x2ec0dc0() {
   return (neuron0x2eb7df0()*0.284573);
}

double NNfunction_sb_dRsR::synapse0x2ec0e00() {
   return (neuron0x2eb80a0()*0.778771);
}

double NNfunction_sb_dRsR::synapse0x2ec0e40() {
   return (neuron0x2eb83e0()*0.644738);
}

double NNfunction_sb_dRsR::synapse0x2ec0e80() {
   return (neuron0x2eb8720()*-0.0651489);
}

double NNfunction_sb_dRsR::synapse0x2ec0ec0() {
   return (neuron0x2eb8a60()*0.195135);
}

double NNfunction_sb_dRsR::synapse0x2ec0f00() {
   return (neuron0x2eb8da0()*0.424213);
}

double NNfunction_sb_dRsR::synapse0x2ec0f40() {
   return (neuron0x2eb90e0()*0.201999);
}

double NNfunction_sb_dRsR::synapse0x2ec0f80() {
   return (neuron0x2eb9420()*-0.593039);
}

double NNfunction_sb_dRsR::synapse0x2ec0fc0() {
   return (neuron0x2eb9760()*0.509008);
}

double NNfunction_sb_dRsR::synapse0x2c82280() {
   return (neuron0x2eb9aa0()*-0.500379);
}

double NNfunction_sb_dRsR::synapse0x2c822c0() {
   return (neuron0x2eb9de0()*0.742904);
}

double NNfunction_sb_dRsR::synapse0x2c82300() {
   return (neuron0x2eba120()*0.321136);
}

double NNfunction_sb_dRsR::synapse0x2c82340() {
   return (neuron0x2eba460()*0.535376);
}

double NNfunction_sb_dRsR::synapse0x2c82380() {
   return (neuron0x2eba7a0()*1.03099);
}

double NNfunction_sb_dRsR::synapse0x2c823c0() {
   return (neuron0x2ebaae0()*-0.343471);
}

double NNfunction_sb_dRsR::synapse0x2c82400() {
   return (neuron0x2ebae20()*0.56149);
}

double NNfunction_sb_dRsR::synapse0x2ec0c10() {
   return (neuron0x2ebb160()*-0.621147);
}

double NNfunction_sb_dRsR::synapse0x2ec0c50() {
   return (neuron0x2ebb6c0()*-0.940793);
}

double NNfunction_sb_dRsR::synapse0x2c82550() {
   return (neuron0x2ebba00()*-0.664565);
}

double NNfunction_sb_dRsR::synapse0x2c82590() {
   return (neuron0x2ebbd40()*-0.789761);
}

double NNfunction_sb_dRsR::synapse0x2c825d0() {
   return (neuron0x2ebc080()*0.4695);
}

double NNfunction_sb_dRsR::synapse0x2c82610() {
   return (neuron0x2ebc3c0()*0.141203);
}

double NNfunction_sb_dRsR::synapse0x2c82650() {
   return (neuron0x2ebc700()*-0.637298);
}

double NNfunction_sb_dRsR::synapse0x2ec1810() {
   return (neuron0x2ebca40()*-0.0683279);
}

double NNfunction_sb_dRsR::synapse0x2ec1b90() {
   return (neuron0x2eb7df0()*0.645391);
}

double NNfunction_sb_dRsR::synapse0x2ec1bd0() {
   return (neuron0x2eb80a0()*0.267959);
}

double NNfunction_sb_dRsR::synapse0x2ec1c10() {
   return (neuron0x2eb83e0()*0.0178361);
}

double NNfunction_sb_dRsR::synapse0x2ec1c50() {
   return (neuron0x2eb8720()*-0.206461);
}

double NNfunction_sb_dRsR::synapse0x2ec1c90() {
   return (neuron0x2eb8a60()*0.500803);
}

double NNfunction_sb_dRsR::synapse0x2ec1cd0() {
   return (neuron0x2eb8da0()*-0.774323);
}

double NNfunction_sb_dRsR::synapse0x2ec1d10() {
   return (neuron0x2eb90e0()*0.264262);
}

double NNfunction_sb_dRsR::synapse0x2ec1d50() {
   return (neuron0x2eb9420()*-0.439874);
}

double NNfunction_sb_dRsR::synapse0x2ec1d90() {
   return (neuron0x2eb9760()*0.60751);
}

double NNfunction_sb_dRsR::synapse0x2ec1dd0() {
   return (neuron0x2eb9aa0()*0.599638);
}

double NNfunction_sb_dRsR::synapse0x2ec1e10() {
   return (neuron0x2eb9de0()*0.658867);
}

double NNfunction_sb_dRsR::synapse0x2ec1e50() {
   return (neuron0x2eba120()*0.441096);
}

double NNfunction_sb_dRsR::synapse0x2ec1e90() {
   return (neuron0x2eba460()*0.458108);
}

double NNfunction_sb_dRsR::synapse0x2ec1ed0() {
   return (neuron0x2eba7a0()*0.213396);
}

double NNfunction_sb_dRsR::synapse0x2ec1f10() {
   return (neuron0x2ebaae0()*-0.479747);
}

double NNfunction_sb_dRsR::synapse0x2ec1f50() {
   return (neuron0x2ebae20()*-0.871247);
}

double NNfunction_sb_dRsR::synapse0x2ec19e0() {
   return (neuron0x2ebb160()*0.0323842);
}

double NNfunction_sb_dRsR::synapse0x2ec1a20() {
   return (neuron0x2ebb6c0()*-0.856432);
}

double NNfunction_sb_dRsR::synapse0x2ec20a0() {
   return (neuron0x2ebba00()*0.0328148);
}

double NNfunction_sb_dRsR::synapse0x2ec20e0() {
   return (neuron0x2ebbd40()*0.0656297);
}

double NNfunction_sb_dRsR::synapse0x2ec2120() {
   return (neuron0x2ebc080()*0.105656);
}

double NNfunction_sb_dRsR::synapse0x2ec2160() {
   return (neuron0x2ebc3c0()*0.360009);
}

double NNfunction_sb_dRsR::synapse0x2ec21a0() {
   return (neuron0x2ebc700()*-0.0349871);
}

double NNfunction_sb_dRsR::synapse0x2ec21e0() {
   return (neuron0x2ebca40()*-0.123876);
}

double NNfunction_sb_dRsR::synapse0x2ec2560() {
   return (neuron0x2eb7df0()*0.189403);
}

double NNfunction_sb_dRsR::synapse0x2ec25a0() {
   return (neuron0x2eb80a0()*-0.554146);
}

double NNfunction_sb_dRsR::synapse0x2ec25e0() {
   return (neuron0x2eb83e0()*0.130979);
}

double NNfunction_sb_dRsR::synapse0x2ec2620() {
   return (neuron0x2eb8720()*0.468286);
}

double NNfunction_sb_dRsR::synapse0x2ec2660() {
   return (neuron0x2eb8a60()*-0.0979189);
}

double NNfunction_sb_dRsR::synapse0x2ec26a0() {
   return (neuron0x2eb8da0()*-0.189474);
}

double NNfunction_sb_dRsR::synapse0x2ec26e0() {
   return (neuron0x2eb90e0()*-0.580901);
}

double NNfunction_sb_dRsR::synapse0x2ec2720() {
   return (neuron0x2eb9420()*0.0498973);
}

double NNfunction_sb_dRsR::synapse0x2ec2760() {
   return (neuron0x2eb9760()*-0.706295);
}

double NNfunction_sb_dRsR::synapse0x2ec27a0() {
   return (neuron0x2eb9aa0()*-0.515995);
}

double NNfunction_sb_dRsR::synapse0x2ec27e0() {
   return (neuron0x2eb9de0()*-0.179367);
}

double NNfunction_sb_dRsR::synapse0x2ec2820() {
   return (neuron0x2eba120()*-0.466895);
}

double NNfunction_sb_dRsR::synapse0x2ec2860() {
   return (neuron0x2eba460()*0.843505);
}

double NNfunction_sb_dRsR::synapse0x2ec28a0() {
   return (neuron0x2eba7a0()*-0.313704);
}

double NNfunction_sb_dRsR::synapse0x2ec28e0() {
   return (neuron0x2ebaae0()*0.0522192);
}

double NNfunction_sb_dRsR::synapse0x2ec2920() {
   return (neuron0x2ebae20()*0.30881);
}

double NNfunction_sb_dRsR::synapse0x2ec23b0() {
   return (neuron0x2ebb160()*0.908814);
}

double NNfunction_sb_dRsR::synapse0x2ec23f0() {
   return (neuron0x2ebb6c0()*-0.129754);
}

double NNfunction_sb_dRsR::synapse0x2ec2a70() {
   return (neuron0x2ebba00()*0.0595287);
}

double NNfunction_sb_dRsR::synapse0x2ec2ab0() {
   return (neuron0x2ebbd40()*0.751813);
}

double NNfunction_sb_dRsR::synapse0x2ec2af0() {
   return (neuron0x2ebc080()*0.750487);
}

double NNfunction_sb_dRsR::synapse0x2ec2b30() {
   return (neuron0x2ebc3c0()*-0.253745);
}

double NNfunction_sb_dRsR::synapse0x2ec2b70() {
   return (neuron0x2ebc700()*-0.0793502);
}

double NNfunction_sb_dRsR::synapse0x2ec2bb0() {
   return (neuron0x2ebca40()*-0.219985);
}

double NNfunction_sb_dRsR::synapse0x2ebb5b0() {
   return (neuron0x2eb7df0()*0.055745);
}

double NNfunction_sb_dRsR::synapse0x2ebb5f0() {
   return (neuron0x2eb80a0()*0.729395);
}

double NNfunction_sb_dRsR::synapse0x2ebb630() {
   return (neuron0x2eb83e0()*0.679122);
}

double NNfunction_sb_dRsR::synapse0x2ebb670() {
   return (neuron0x2eb8720()*-0.57155);
}

double NNfunction_sb_dRsR::synapse0x2ec3140() {
   return (neuron0x2eb8a60()*-0.362919);
}

double NNfunction_sb_dRsR::synapse0x2ec3180() {
   return (neuron0x2eb8da0()*-1.16583);
}

double NNfunction_sb_dRsR::synapse0x2ec31c0() {
   return (neuron0x2eb90e0()*0.652541);
}

double NNfunction_sb_dRsR::synapse0x2ec3200() {
   return (neuron0x2eb9420()*0.660278);
}

double NNfunction_sb_dRsR::synapse0x2ec3240() {
   return (neuron0x2eb9760()*0.0707053);
}

double NNfunction_sb_dRsR::synapse0x2ec3280() {
   return (neuron0x2eb9aa0()*-0.165322);
}

double NNfunction_sb_dRsR::synapse0x2ec32c0() {
   return (neuron0x2eb9de0()*0.439735);
}

double NNfunction_sb_dRsR::synapse0x2ec3300() {
   return (neuron0x2eba120()*-0.585515);
}

double NNfunction_sb_dRsR::synapse0x2ec3340() {
   return (neuron0x2eba460()*-0.265113);
}

double NNfunction_sb_dRsR::synapse0x2ec3380() {
   return (neuron0x2eba7a0()*-0.167853);
}

double NNfunction_sb_dRsR::synapse0x2ec33c0() {
   return (neuron0x2ebaae0()*-0.190395);
}

double NNfunction_sb_dRsR::synapse0x2ec3400() {
   return (neuron0x2ebae20()*-0.306381);
}

double NNfunction_sb_dRsR::synapse0x2ec2d80() {
   return (neuron0x2ebb160()*-0.472305);
}

double NNfunction_sb_dRsR::synapse0x2ec2dc0() {
   return (neuron0x2ebb6c0()*-0.942235);
}

double NNfunction_sb_dRsR::synapse0x2ec3550() {
   return (neuron0x2ebba00()*-0.436098);
}

double NNfunction_sb_dRsR::synapse0x2ec3590() {
   return (neuron0x2ebbd40()*0.177434);
}

double NNfunction_sb_dRsR::synapse0x2ec35d0() {
   return (neuron0x2ebc080()*1.15093);
}

double NNfunction_sb_dRsR::synapse0x2ec3610() {
   return (neuron0x2ebc3c0()*-0.36653);
}

double NNfunction_sb_dRsR::synapse0x2ec3650() {
   return (neuron0x2ebc700()*-0.390459);
}

double NNfunction_sb_dRsR::synapse0x2ec3690() {
   return (neuron0x2ebca40()*-0.256085);
}

double NNfunction_sb_dRsR::synapse0x2ec3a10() {
   return (neuron0x2eb7df0()*-0.0151943);
}

double NNfunction_sb_dRsR::synapse0x2ec3a50() {
   return (neuron0x2eb80a0()*0.0102373);
}

double NNfunction_sb_dRsR::synapse0x2ec3a90() {
   return (neuron0x2eb83e0()*-0.0231829);
}

double NNfunction_sb_dRsR::synapse0x2ec3ad0() {
   return (neuron0x2eb8720()*-0.0497784);
}

double NNfunction_sb_dRsR::synapse0x2ec3b10() {
   return (neuron0x2eb8a60()*0.01454);
}

double NNfunction_sb_dRsR::synapse0x2ec3b50() {
   return (neuron0x2eb8da0()*-0.0438148);
}

double NNfunction_sb_dRsR::synapse0x2ec3b90() {
   return (neuron0x2eb90e0()*0.0312602);
}

double NNfunction_sb_dRsR::synapse0x2ec3bd0() {
   return (neuron0x2eb9420()*-0.0242009);
}

double NNfunction_sb_dRsR::synapse0x2ec3c10() {
   return (neuron0x2eb9760()*0.00339799);
}

double NNfunction_sb_dRsR::synapse0x2ec3c50() {
   return (neuron0x2eb9aa0()*0.0196739);
}

double NNfunction_sb_dRsR::synapse0x2ec3c90() {
   return (neuron0x2eb9de0()*0.0067923);
}

double NNfunction_sb_dRsR::synapse0x2ec3cd0() {
   return (neuron0x2eba120()*0.430232);
}

double NNfunction_sb_dRsR::synapse0x2ec3d10() {
   return (neuron0x2eba460()*0.482617);
}

double NNfunction_sb_dRsR::synapse0x2ec3d50() {
   return (neuron0x2eba7a0()*-0.0487423);
}

double NNfunction_sb_dRsR::synapse0x2ec3d90() {
   return (neuron0x2ebaae0()*0.0459564);
}

double NNfunction_sb_dRsR::synapse0x2ec3dd0() {
   return (neuron0x2ebae20()*0.234352);
}

double NNfunction_sb_dRsR::synapse0x2ec3860() {
   return (neuron0x2ebb160()*-0.0490437);
}

double NNfunction_sb_dRsR::synapse0x2ec38a0() {
   return (neuron0x2ebb6c0()*-0.0341542);
}

double NNfunction_sb_dRsR::synapse0x2ec3f20() {
   return (neuron0x2ebba00()*-0.250656);
}

double NNfunction_sb_dRsR::synapse0x2ec3f60() {
   return (neuron0x2ebbd40()*-0.0268953);
}

double NNfunction_sb_dRsR::synapse0x2ec3fa0() {
   return (neuron0x2ebc080()*0.0283572);
}

double NNfunction_sb_dRsR::synapse0x2ec3fe0() {
   return (neuron0x2ebc3c0()*0.0210912);
}

double NNfunction_sb_dRsR::synapse0x2ec4020() {
   return (neuron0x2ebc700()*-0.000675223);
}

double NNfunction_sb_dRsR::synapse0x2ec4060() {
   return (neuron0x2ebca40()*0.0378429);
}

double NNfunction_sb_dRsR::synapse0x2ec43e0() {
   return (neuron0x2eb7df0()*0.245958);
}

double NNfunction_sb_dRsR::synapse0x2ec4420() {
   return (neuron0x2eb80a0()*0.143368);
}

double NNfunction_sb_dRsR::synapse0x2ec4460() {
   return (neuron0x2eb83e0()*-0.355928);
}

double NNfunction_sb_dRsR::synapse0x2ec44a0() {
   return (neuron0x2eb8720()*-0.112824);
}

double NNfunction_sb_dRsR::synapse0x2ec44e0() {
   return (neuron0x2eb8a60()*-0.0928953);
}

double NNfunction_sb_dRsR::synapse0x2ec4520() {
   return (neuron0x2eb8da0()*-0.0188329);
}

double NNfunction_sb_dRsR::synapse0x2ec4560() {
   return (neuron0x2eb90e0()*0.0914284);
}

double NNfunction_sb_dRsR::synapse0x2ec45a0() {
   return (neuron0x2eb9420()*0.432355);
}

double NNfunction_sb_dRsR::synapse0x2ec45e0() {
   return (neuron0x2eb9760()*0.182892);
}

double NNfunction_sb_dRsR::synapse0x2ec4620() {
   return (neuron0x2eb9aa0()*0.217517);
}

double NNfunction_sb_dRsR::synapse0x2ec4660() {
   return (neuron0x2eb9de0()*0.054692);
}

double NNfunction_sb_dRsR::synapse0x2ec46a0() {
   return (neuron0x2eba120()*0.0433461);
}

double NNfunction_sb_dRsR::synapse0x2ec46e0() {
   return (neuron0x2eba460()*-0.458648);
}

double NNfunction_sb_dRsR::synapse0x2ec4720() {
   return (neuron0x2eba7a0()*0.324248);
}

double NNfunction_sb_dRsR::synapse0x2ec4760() {
   return (neuron0x2ebaae0()*0.0596976);
}

double NNfunction_sb_dRsR::synapse0x2ec47a0() {
   return (neuron0x2ebae20()*-0.281479);
}

double NNfunction_sb_dRsR::synapse0x2ec4230() {
   return (neuron0x2ebb160()*-0.0128993);
}

double NNfunction_sb_dRsR::synapse0x2ec4270() {
   return (neuron0x2ebb6c0()*1.48581);
}

double NNfunction_sb_dRsR::synapse0x2ec1000() {
   return (neuron0x2ebba00()*-0.623155);
}

double NNfunction_sb_dRsR::synapse0x2ec1040() {
   return (neuron0x2ebbd40()*0.186594);
}

double NNfunction_sb_dRsR::synapse0x2ec1080() {
   return (neuron0x2ebc080()*-0.134556);
}

double NNfunction_sb_dRsR::synapse0x2ec10c0() {
   return (neuron0x2ebc3c0()*0.0156857);
}

double NNfunction_sb_dRsR::synapse0x2ec1100() {
   return (neuron0x2ebc700()*-0.53759);
}

double NNfunction_sb_dRsR::synapse0x2ec1140() {
   return (neuron0x2ebca40()*0.340338);
}

double NNfunction_sb_dRsR::synapse0x2ec14c0() {
   return (neuron0x2eb7df0()*-0.130787);
}

double NNfunction_sb_dRsR::synapse0x2ec1500() {
   return (neuron0x2eb80a0()*0.4432);
}

double NNfunction_sb_dRsR::synapse0x2ec1540() {
   return (neuron0x2eb83e0()*-0.138915);
}

double NNfunction_sb_dRsR::synapse0x2ec1580() {
   return (neuron0x2eb8720()*-0.197);
}

double NNfunction_sb_dRsR::synapse0x2ec15c0() {
   return (neuron0x2eb8a60()*-0.639416);
}

double NNfunction_sb_dRsR::synapse0x2ec1600() {
   return (neuron0x2eb8da0()*-0.430185);
}

double NNfunction_sb_dRsR::synapse0x2ec1640() {
   return (neuron0x2eb90e0()*0.567567);
}

double NNfunction_sb_dRsR::synapse0x2ec1680() {
   return (neuron0x2eb9420()*-0.284954);
}

double NNfunction_sb_dRsR::synapse0x2ec16c0() {
   return (neuron0x2eb9760()*-0.153038);
}

double NNfunction_sb_dRsR::synapse0x2ec1700() {
   return (neuron0x2eb9aa0()*0.283383);
}

double NNfunction_sb_dRsR::synapse0x2ec1740() {
   return (neuron0x2eb9de0()*0.187487);
}

double NNfunction_sb_dRsR::synapse0x2ec1780() {
   return (neuron0x2eba120()*-0.0621246);
}

double NNfunction_sb_dRsR::synapse0x2ec17c0() {
   return (neuron0x2eba460()*-0.146432);
}

double NNfunction_sb_dRsR::synapse0x2ec5900() {
   return (neuron0x2eba7a0()*0.67791);
}

double NNfunction_sb_dRsR::synapse0x2ec5940() {
   return (neuron0x2ebaae0()*-0.242242);
}

double NNfunction_sb_dRsR::synapse0x2ec5980() {
   return (neuron0x2ebae20()*-0.915859);
}

double NNfunction_sb_dRsR::synapse0x2ec1310() {
   return (neuron0x2ebb160()*-0.176037);
}

double NNfunction_sb_dRsR::synapse0x2ec1350() {
   return (neuron0x2ebb6c0()*-0.232717);
}

double NNfunction_sb_dRsR::synapse0x2ec5ad0() {
   return (neuron0x2ebba00()*0.804071);
}

double NNfunction_sb_dRsR::synapse0x2ec5b10() {
   return (neuron0x2ebbd40()*-0.08082);
}

double NNfunction_sb_dRsR::synapse0x2ec5b50() {
   return (neuron0x2ebc080()*0.127202);
}

double NNfunction_sb_dRsR::synapse0x2ec5b90() {
   return (neuron0x2ebc3c0()*0.489245);
}

double NNfunction_sb_dRsR::synapse0x2ec5bd0() {
   return (neuron0x2ebc700()*-0.306528);
}

double NNfunction_sb_dRsR::synapse0x2ec5c10() {
   return (neuron0x2ebca40()*0.0829636);
}

double NNfunction_sb_dRsR::synapse0x2ec5f90() {
   return (neuron0x2eb7df0()*0.84986);
}

double NNfunction_sb_dRsR::synapse0x2ec5fd0() {
   return (neuron0x2eb80a0()*-0.0132404);
}

double NNfunction_sb_dRsR::synapse0x2ec6010() {
   return (neuron0x2eb83e0()*0.479017);
}

double NNfunction_sb_dRsR::synapse0x2ec6050() {
   return (neuron0x2eb8720()*0.542555);
}

double NNfunction_sb_dRsR::synapse0x2ec6090() {
   return (neuron0x2eb8a60()*0.148816);
}

double NNfunction_sb_dRsR::synapse0x2ec60d0() {
   return (neuron0x2eb8da0()*0.643399);
}

double NNfunction_sb_dRsR::synapse0x2ec6110() {
   return (neuron0x2eb90e0()*0.129338);
}

double NNfunction_sb_dRsR::synapse0x2ec6150() {
   return (neuron0x2eb9420()*-0.244467);
}

double NNfunction_sb_dRsR::synapse0x2ec6190() {
   return (neuron0x2eb9760()*0.760787);
}

double NNfunction_sb_dRsR::synapse0x2ec61d0() {
   return (neuron0x2eb9aa0()*-0.626812);
}

double NNfunction_sb_dRsR::synapse0x2ec6210() {
   return (neuron0x2eb9de0()*0.510806);
}

double NNfunction_sb_dRsR::synapse0x2ec6250() {
   return (neuron0x2eba120()*0.238039);
}

double NNfunction_sb_dRsR::synapse0x2ec6290() {
   return (neuron0x2eba460()*0.320042);
}

double NNfunction_sb_dRsR::synapse0x2ec62d0() {
   return (neuron0x2eba7a0()*-0.426492);
}

double NNfunction_sb_dRsR::synapse0x2ec6310() {
   return (neuron0x2ebaae0()*0.227222);
}

double NNfunction_sb_dRsR::synapse0x2ec6350() {
   return (neuron0x2ebae20()*-0.189759);
}

double NNfunction_sb_dRsR::synapse0x2ec5de0() {
   return (neuron0x2ebb160()*-0.475218);
}

double NNfunction_sb_dRsR::synapse0x2ec5e20() {
   return (neuron0x2ebb6c0()*-0.568482);
}

double NNfunction_sb_dRsR::synapse0x2ec64a0() {
   return (neuron0x2ebba00()*-0.329502);
}

double NNfunction_sb_dRsR::synapse0x2ec64e0() {
   return (neuron0x2ebbd40()*-0.0485552);
}

double NNfunction_sb_dRsR::synapse0x2ec6520() {
   return (neuron0x2ebc080()*0.951703);
}

double NNfunction_sb_dRsR::synapse0x2ec6560() {
   return (neuron0x2ebc3c0()*0.765621);
}

double NNfunction_sb_dRsR::synapse0x2ec65a0() {
   return (neuron0x2ebc700()*-0.512345);
}

double NNfunction_sb_dRsR::synapse0x2ec65e0() {
   return (neuron0x2ebca40()*-0.743843);
}

double NNfunction_sb_dRsR::synapse0x2ec6960() {
   return (neuron0x2eb7df0()*-0.19329);
}

double NNfunction_sb_dRsR::synapse0x2ec69a0() {
   return (neuron0x2eb80a0()*0.789973);
}

double NNfunction_sb_dRsR::synapse0x2ec69e0() {
   return (neuron0x2eb83e0()*1.10251);
}

double NNfunction_sb_dRsR::synapse0x2ec6a20() {
   return (neuron0x2eb8720()*0.0971193);
}

double NNfunction_sb_dRsR::synapse0x2ec6a60() {
   return (neuron0x2eb8a60()*-0.334228);
}

double NNfunction_sb_dRsR::synapse0x2ec6aa0() {
   return (neuron0x2eb8da0()*-0.677153);
}

double NNfunction_sb_dRsR::synapse0x2ec6ae0() {
   return (neuron0x2eb90e0()*0.270828);
}

double NNfunction_sb_dRsR::synapse0x2ec6b20() {
   return (neuron0x2eb9420()*0.275962);
}

double NNfunction_sb_dRsR::synapse0x2ec6b60() {
   return (neuron0x2eb9760()*-0.220465);
}

double NNfunction_sb_dRsR::synapse0x2ec6ba0() {
   return (neuron0x2eb9aa0()*0.257055);
}

double NNfunction_sb_dRsR::synapse0x2ec6be0() {
   return (neuron0x2eb9de0()*0.101926);
}

double NNfunction_sb_dRsR::synapse0x2ec6c20() {
   return (neuron0x2eba120()*0.142472);
}

double NNfunction_sb_dRsR::synapse0x2ec6c60() {
   return (neuron0x2eba460()*0.43579);
}

double NNfunction_sb_dRsR::synapse0x2ec6ca0() {
   return (neuron0x2eba7a0()*-1.02906);
}

double NNfunction_sb_dRsR::synapse0x2ec6ce0() {
   return (neuron0x2ebaae0()*-0.252191);
}

double NNfunction_sb_dRsR::synapse0x2ec6d20() {
   return (neuron0x2ebae20()*-0.0786709);
}

double NNfunction_sb_dRsR::synapse0x2ec67b0() {
   return (neuron0x2ebb160()*0.31444);
}

double NNfunction_sb_dRsR::synapse0x2ec67f0() {
   return (neuron0x2ebb6c0()*0.162077);
}

double NNfunction_sb_dRsR::synapse0x2ec6e70() {
   return (neuron0x2ebba00()*0.506837);
}

double NNfunction_sb_dRsR::synapse0x2ec6eb0() {
   return (neuron0x2ebbd40()*-0.455611);
}

double NNfunction_sb_dRsR::synapse0x2ec6ef0() {
   return (neuron0x2ebc080()*0.719737);
}

double NNfunction_sb_dRsR::synapse0x2ec6f30() {
   return (neuron0x2ebc3c0()*-0.857964);
}

double NNfunction_sb_dRsR::synapse0x2ec6f70() {
   return (neuron0x2ebc700()*-0.670773);
}

double NNfunction_sb_dRsR::synapse0x2ec6fb0() {
   return (neuron0x2ebca40()*-0.667978);
}

double NNfunction_sb_dRsR::synapse0x2ec7330() {
   return (neuron0x2eb7df0()*-0.0328537);
}

double NNfunction_sb_dRsR::synapse0x2ec7370() {
   return (neuron0x2eb80a0()*0.0258521);
}

double NNfunction_sb_dRsR::synapse0x2ec73b0() {
   return (neuron0x2eb83e0()*0.0508314);
}

double NNfunction_sb_dRsR::synapse0x2ec73f0() {
   return (neuron0x2eb8720()*-1.84178);
}

double NNfunction_sb_dRsR::synapse0x2ec7430() {
   return (neuron0x2eb8a60()*-0.018086);
}

double NNfunction_sb_dRsR::synapse0x2ec7470() {
   return (neuron0x2eb8da0()*-0.0183257);
}

double NNfunction_sb_dRsR::synapse0x2ec74b0() {
   return (neuron0x2eb90e0()*0.0249882);
}

double NNfunction_sb_dRsR::synapse0x2ec74f0() {
   return (neuron0x2eb9420()*-0.0505442);
}

double NNfunction_sb_dRsR::synapse0x2ec7530() {
   return (neuron0x2eb9760()*-0.0408783);
}

double NNfunction_sb_dRsR::synapse0x2ec7570() {
   return (neuron0x2eb9aa0()*-0.0136432);
}

double NNfunction_sb_dRsR::synapse0x2ec75b0() {
   return (neuron0x2eb9de0()*-0.00377036);
}

double NNfunction_sb_dRsR::synapse0x2ec75f0() {
   return (neuron0x2eba120()*0.0470356);
}

double NNfunction_sb_dRsR::synapse0x2ec7630() {
   return (neuron0x2eba460()*0.0705487);
}

double NNfunction_sb_dRsR::synapse0x2ec7670() {
   return (neuron0x2eba7a0()*0.0463367);
}

double NNfunction_sb_dRsR::synapse0x2ec76b0() {
   return (neuron0x2ebaae0()*0.0377198);
}

double NNfunction_sb_dRsR::synapse0x2ec76f0() {
   return (neuron0x2ebae20()*-0.0345722);
}

double NNfunction_sb_dRsR::synapse0x2ec7180() {
   return (neuron0x2ebb160()*0.050608);
}

double NNfunction_sb_dRsR::synapse0x2ec71c0() {
   return (neuron0x2ebb6c0()*-0.415004);
}

double NNfunction_sb_dRsR::synapse0x2ec7840() {
   return (neuron0x2ebba00()*-0.169291);
}

double NNfunction_sb_dRsR::synapse0x2ec7880() {
   return (neuron0x2ebbd40()*0.0105176);
}

double NNfunction_sb_dRsR::synapse0x2ec78c0() {
   return (neuron0x2ebc080()*-0.0159628);
}

double NNfunction_sb_dRsR::synapse0x2ec7900() {
   return (neuron0x2ebc3c0()*-0.0145284);
}

double NNfunction_sb_dRsR::synapse0x2ec7940() {
   return (neuron0x2ebc700()*0.0283214);
}

double NNfunction_sb_dRsR::synapse0x2ec7980() {
   return (neuron0x2ebca40()*-0.0283135);
}

double NNfunction_sb_dRsR::synapse0x2ec7d00() {
   return (neuron0x2eb7df0()*0.142878);
}

double NNfunction_sb_dRsR::synapse0x2eb7f80() {
   return (neuron0x2eb80a0()*0.0382934);
}

double NNfunction_sb_dRsR::synapse0x2eb7fc0() {
   return (neuron0x2eb83e0()*0.03804);
}

double NNfunction_sb_dRsR::synapse0x2eb82c0() {
   return (neuron0x2eb8720()*0.324029);
}

double NNfunction_sb_dRsR::synapse0x2eb8300() {
   return (neuron0x2eb8a60()*0.134502);
}

double NNfunction_sb_dRsR::synapse0x2eb8600() {
   return (neuron0x2eb8da0()*-0.045766);
}

double NNfunction_sb_dRsR::synapse0x2eb8640() {
   return (neuron0x2eb90e0()*-0.0250795);
}

double NNfunction_sb_dRsR::synapse0x2eb8940() {
   return (neuron0x2eb9420()*0.0168204);
}

double NNfunction_sb_dRsR::synapse0x2eb8980() {
   return (neuron0x2eb9760()*0.0320489);
}

double NNfunction_sb_dRsR::synapse0x2eb8c80() {
   return (neuron0x2eb9aa0()*-0.0146755);
}

double NNfunction_sb_dRsR::synapse0x2eb8cc0() {
   return (neuron0x2eb9de0()*-0.061612);
}

double NNfunction_sb_dRsR::synapse0x2eb8fc0() {
   return (neuron0x2eba120()*-0.540627);
}

double NNfunction_sb_dRsR::synapse0x2eb9000() {
   return (neuron0x2eba460()*-0.617484);
}

double NNfunction_sb_dRsR::synapse0x2eb9300() {
   return (neuron0x2eba7a0()*0.116763);
}

double NNfunction_sb_dRsR::synapse0x2eb9340() {
   return (neuron0x2ebaae0()*-0.629522);
}

double NNfunction_sb_dRsR::synapse0x2eb9640() {
   return (neuron0x2ebae20()*0.314143);
}

double NNfunction_sb_dRsR::synapse0x2eb9680() {
   return (neuron0x2ebb160()*0.124097);
}

double NNfunction_sb_dRsR::synapse0x2eb9980() {
   return (neuron0x2ebb6c0()*0.474788);
}

double NNfunction_sb_dRsR::synapse0x2eb99c0() {
   return (neuron0x2ebba00()*0.120298);
}

double NNfunction_sb_dRsR::synapse0x2eb9cc0() {
   return (neuron0x2ebbd40()*-0.109317);
}

double NNfunction_sb_dRsR::synapse0x2eb9d00() {
   return (neuron0x2ebc080()*-0.00988345);
}

double NNfunction_sb_dRsR::synapse0x2eba000() {
   return (neuron0x2ebc3c0()*-0.000734834);
}

double NNfunction_sb_dRsR::synapse0x2eba040() {
   return (neuron0x2ebc700()*0.0317555);
}

double NNfunction_sb_dRsR::synapse0x2eba340() {
   return (neuron0x2ebca40()*0.16338);
}

double NNfunction_sb_dRsR::synapse0x2eba380() {
   return (neuron0x2eb7df0()*0.00045429);
}

double NNfunction_sb_dRsR::synapse0x2ebb040() {
   return (neuron0x2eb80a0()*0.000730407);
}

double NNfunction_sb_dRsR::synapse0x2ebb080() {
   return (neuron0x2eb83e0()*0.0275326);
}

double NNfunction_sb_dRsR::synapse0x2ec7b50() {
   return (neuron0x2eb8720()*2.8191);
}

double NNfunction_sb_dRsR::synapse0x2ec7b90() {
   return (neuron0x2eb8a60()*0.02244);
}

double NNfunction_sb_dRsR::synapse0x2ebb380() {
   return (neuron0x2eb8da0()*0.0280052);
}

double NNfunction_sb_dRsR::synapse0x2ebb3c0() {
   return (neuron0x2eb90e0()*0.00846126);
}

double NNfunction_sb_dRsR::synapse0x2ebb8e0() {
   return (neuron0x2eb9420()*0.000860285);
}

double NNfunction_sb_dRsR::synapse0x2ebb920() {
   return (neuron0x2eb9760()*-0.00345508);
}

double NNfunction_sb_dRsR::synapse0x2ebbc20() {
   return (neuron0x2eb9aa0()*0.0122462);
}

double NNfunction_sb_dRsR::synapse0x2ebbc60() {
   return (neuron0x2eb9de0()*-0.00369615);
}

double NNfunction_sb_dRsR::synapse0x2ebbf60() {
   return (neuron0x2eba120()*0.0237271);
}

double NNfunction_sb_dRsR::synapse0x2ebbfa0() {
   return (neuron0x2eba460()*-0.0286014);
}

double NNfunction_sb_dRsR::synapse0x2ebc2a0() {
   return (neuron0x2eba7a0()*-0.0495756);
}

double NNfunction_sb_dRsR::synapse0x2ebc2e0() {
   return (neuron0x2ebaae0()*0.00568354);
}

double NNfunction_sb_dRsR::synapse0x2ebc5e0() {
   return (neuron0x2ebae20()*0.0268149);
}

double NNfunction_sb_dRsR::synapse0x2ebc620() {
   return (neuron0x2ebb160()*-0.0612813);
}

double NNfunction_sb_dRsR::synapse0x2ebc920() {
   return (neuron0x2ebb6c0()*0.0327806);
}

double NNfunction_sb_dRsR::synapse0x2ebc960() {
   return (neuron0x2ebba00()*0.0465635);
}

double NNfunction_sb_dRsR::synapse0x2ebcc60() {
   return (neuron0x2ebbd40()*-0.00934382);
}

double NNfunction_sb_dRsR::synapse0x2ebcca0() {
   return (neuron0x2ebc080()*0.0297536);
}

double NNfunction_sb_dRsR::synapse0x2eba680() {
   return (neuron0x2ebc3c0()*0.00603579);
}

double NNfunction_sb_dRsR::synapse0x2eba6c0() {
   return (neuron0x2ebc700()*-0.0273913);
}

double NNfunction_sb_dRsR::synapse0x2ec9a70() {
   return (neuron0x2ebca40()*-0.00800715);
}

double NNfunction_sb_dRsR::synapse0x2ec9df0() {
   return (neuron0x2eb7df0()*0.130357);
}

double NNfunction_sb_dRsR::synapse0x2ec9e30() {
   return (neuron0x2eb80a0()*0.617318);
}

double NNfunction_sb_dRsR::synapse0x2ec9e70() {
   return (neuron0x2eb83e0()*0.499009);
}

double NNfunction_sb_dRsR::synapse0x2ec9eb0() {
   return (neuron0x2eb8720()*0.0538026);
}

double NNfunction_sb_dRsR::synapse0x2ec9ef0() {
   return (neuron0x2eb8a60()*0.109672);
}

double NNfunction_sb_dRsR::synapse0x2ec9f30() {
   return (neuron0x2eb8da0()*0.316114);
}

double NNfunction_sb_dRsR::synapse0x2ec9f70() {
   return (neuron0x2eb90e0()*0.386735);
}

double NNfunction_sb_dRsR::synapse0x2ec9fb0() {
   return (neuron0x2eb9420()*-0.757508);
}

double NNfunction_sb_dRsR::synapse0x2ec9ff0() {
   return (neuron0x2eb9760()*-0.165603);
}

double NNfunction_sb_dRsR::synapse0x2eca030() {
   return (neuron0x2eb9aa0()*0.496476);
}

double NNfunction_sb_dRsR::synapse0x2eca070() {
   return (neuron0x2eb9de0()*-0.246812);
}

double NNfunction_sb_dRsR::synapse0x2eca0b0() {
   return (neuron0x2eba120()*0.422874);
}

double NNfunction_sb_dRsR::synapse0x2eca0f0() {
   return (neuron0x2eba460()*1.52534);
}

double NNfunction_sb_dRsR::synapse0x2eca130() {
   return (neuron0x2eba7a0()*-0.212736);
}

double NNfunction_sb_dRsR::synapse0x2eca170() {
   return (neuron0x2ebaae0()*0.739659);
}

double NNfunction_sb_dRsR::synapse0x2eca1b0() {
   return (neuron0x2ebae20()*0.0136197);
}

double NNfunction_sb_dRsR::synapse0x2ec9c40() {
   return (neuron0x2ebb160()*-0.0824964);
}

double NNfunction_sb_dRsR::synapse0x2ec9c80() {
   return (neuron0x2ebb6c0()*0.0584782);
}

double NNfunction_sb_dRsR::synapse0x2eca300() {
   return (neuron0x2ebba00()*0.536275);
}

double NNfunction_sb_dRsR::synapse0x2eca340() {
   return (neuron0x2ebbd40()*0.983591);
}

double NNfunction_sb_dRsR::synapse0x2eca380() {
   return (neuron0x2ebc080()*0.416826);
}

double NNfunction_sb_dRsR::synapse0x2eca3c0() {
   return (neuron0x2ebc3c0()*-0.171981);
}

double NNfunction_sb_dRsR::synapse0x2eca400() {
   return (neuron0x2ebc700()*0.541008);
}

double NNfunction_sb_dRsR::synapse0x2eca440() {
   return (neuron0x2ebca40()*-0.393244);
}

double NNfunction_sb_dRsR::synapse0x2eca7c0() {
   return (neuron0x2eb7df0()*-0.378127);
}

double NNfunction_sb_dRsR::synapse0x2eca800() {
   return (neuron0x2eb80a0()*-0.688687);
}

double NNfunction_sb_dRsR::synapse0x2eca840() {
   return (neuron0x2eb83e0()*1.50742);
}

double NNfunction_sb_dRsR::synapse0x2eca880() {
   return (neuron0x2eb8720()*-1.57547);
}

double NNfunction_sb_dRsR::synapse0x2eca8c0() {
   return (neuron0x2eb8a60()*0.549981);
}

double NNfunction_sb_dRsR::synapse0x2eca900() {
   return (neuron0x2eb8da0()*-0.743367);
}

double NNfunction_sb_dRsR::synapse0x2eca940() {
   return (neuron0x2eb90e0()*-0.122454);
}

double NNfunction_sb_dRsR::synapse0x2eca980() {
   return (neuron0x2eb9420()*0.011731);
}

double NNfunction_sb_dRsR::synapse0x2eca9c0() {
   return (neuron0x2eb9760()*0.150214);
}

double NNfunction_sb_dRsR::synapse0x2ecaa00() {
   return (neuron0x2eb9aa0()*0.219577);
}

double NNfunction_sb_dRsR::synapse0x2ecaa40() {
   return (neuron0x2eb9de0()*0.50991);
}

double NNfunction_sb_dRsR::synapse0x2ecaa80() {
   return (neuron0x2eba120()*0.195191);
}

double NNfunction_sb_dRsR::synapse0x2ecaac0() {
   return (neuron0x2eba460()*-0.280711);
}

double NNfunction_sb_dRsR::synapse0x2ecab00() {
   return (neuron0x2eba7a0()*0.281006);
}

double NNfunction_sb_dRsR::synapse0x2ecab40() {
   return (neuron0x2ebaae0()*-0.531175);
}

double NNfunction_sb_dRsR::synapse0x2ecab80() {
   return (neuron0x2ebae20()*-0.150804);
}

double NNfunction_sb_dRsR::synapse0x2eca610() {
   return (neuron0x2ebb160()*0.0786576);
}

double NNfunction_sb_dRsR::synapse0x2eca650() {
   return (neuron0x2ebb6c0()*-0.426828);
}

double NNfunction_sb_dRsR::synapse0x2ecacd0() {
   return (neuron0x2ebba00()*0.0905913);
}

double NNfunction_sb_dRsR::synapse0x2ecad10() {
   return (neuron0x2ebbd40()*-0.229253);
}

double NNfunction_sb_dRsR::synapse0x2ecad50() {
   return (neuron0x2ebc080()*-0.629623);
}

double NNfunction_sb_dRsR::synapse0x2ecad90() {
   return (neuron0x2ebc3c0()*0.414205);
}

double NNfunction_sb_dRsR::synapse0x2ecadd0() {
   return (neuron0x2ebc700()*-0.388468);
}

double NNfunction_sb_dRsR::synapse0x2ecae10() {
   return (neuron0x2ebca40()*0.0107299);
}

double NNfunction_sb_dRsR::synapse0x2ecb190() {
   return (neuron0x2eb7df0()*-0.38168);
}

double NNfunction_sb_dRsR::synapse0x2ecb1d0() {
   return (neuron0x2eb80a0()*-0.000262353);
}

double NNfunction_sb_dRsR::synapse0x2ecb210() {
   return (neuron0x2eb83e0()*0.790342);
}

double NNfunction_sb_dRsR::synapse0x2ecb250() {
   return (neuron0x2eb8720()*1.74151);
}

double NNfunction_sb_dRsR::synapse0x2ecb290() {
   return (neuron0x2eb8a60()*-0.201367);
}

double NNfunction_sb_dRsR::synapse0x2ecb2d0() {
   return (neuron0x2eb8da0()*-0.0144139);
}

double NNfunction_sb_dRsR::synapse0x2ecb310() {
   return (neuron0x2eb90e0()*0.298978);
}

double NNfunction_sb_dRsR::synapse0x2ecb350() {
   return (neuron0x2eb9420()*0.108043);
}

double NNfunction_sb_dRsR::synapse0x2ecb390() {
   return (neuron0x2eb9760()*0.272742);
}

double NNfunction_sb_dRsR::synapse0x2ecb3d0() {
   return (neuron0x2eb9aa0()*0.0365044);
}

double NNfunction_sb_dRsR::synapse0x2ecb410() {
   return (neuron0x2eb9de0()*0.405461);
}

double NNfunction_sb_dRsR::synapse0x2ecb450() {
   return (neuron0x2eba120()*0.0446903);
}

double NNfunction_sb_dRsR::synapse0x2ecb490() {
   return (neuron0x2eba460()*0.56724);
}

double NNfunction_sb_dRsR::synapse0x2ecb4d0() {
   return (neuron0x2eba7a0()*-0.138567);
}

double NNfunction_sb_dRsR::synapse0x2ecb510() {
   return (neuron0x2ebaae0()*0.0411117);
}

double NNfunction_sb_dRsR::synapse0x2ecb550() {
   return (neuron0x2ebae20()*0.229818);
}

double NNfunction_sb_dRsR::synapse0x2ecafe0() {
   return (neuron0x2ebb160()*0.0352974);
}

double NNfunction_sb_dRsR::synapse0x2ecb020() {
   return (neuron0x2ebb6c0()*-1.20425);
}

double NNfunction_sb_dRsR::synapse0x2ecb6a0() {
   return (neuron0x2ebba00()*-1.24529);
}

double NNfunction_sb_dRsR::synapse0x2ecb6e0() {
   return (neuron0x2ebbd40()*-0.128182);
}

double NNfunction_sb_dRsR::synapse0x2ecb720() {
   return (neuron0x2ebc080()*-0.0357272);
}

double NNfunction_sb_dRsR::synapse0x2ecb760() {
   return (neuron0x2ebc3c0()*-0.371431);
}

double NNfunction_sb_dRsR::synapse0x2ecb7a0() {
   return (neuron0x2ebc700()*0.0969824);
}

double NNfunction_sb_dRsR::synapse0x2ecb7e0() {
   return (neuron0x2ebca40()*0.0411757);
}

double NNfunction_sb_dRsR::synapse0x2ecbb60() {
   return (neuron0x2eb7df0()*0.000824935);
}

double NNfunction_sb_dRsR::synapse0x2ecbba0() {
   return (neuron0x2eb80a0()*0.00245255);
}

double NNfunction_sb_dRsR::synapse0x2ecbbe0() {
   return (neuron0x2eb83e0()*-0.00296913);
}

double NNfunction_sb_dRsR::synapse0x2ecbc20() {
   return (neuron0x2eb8720()*-0.292388);
}

double NNfunction_sb_dRsR::synapse0x2ecbc60() {
   return (neuron0x2eb8a60()*-0.0043149);
}

double NNfunction_sb_dRsR::synapse0x2ecbca0() {
   return (neuron0x2eb8da0()*0.00774);
}

double NNfunction_sb_dRsR::synapse0x2ecbce0() {
   return (neuron0x2eb90e0()*-0.00572295);
}

double NNfunction_sb_dRsR::synapse0x2ecbd20() {
   return (neuron0x2eb9420()*0.00873778);
}

double NNfunction_sb_dRsR::synapse0x2ecbd60() {
   return (neuron0x2eb9760()*0.00471408);
}

double NNfunction_sb_dRsR::synapse0x2ecbda0() {
   return (neuron0x2eb9aa0()*0.00538705);
}

double NNfunction_sb_dRsR::synapse0x2ecbde0() {
   return (neuron0x2eb9de0()*-0.00364102);
}

double NNfunction_sb_dRsR::synapse0x2ecbe20() {
   return (neuron0x2eba120()*-0.0291977);
}

double NNfunction_sb_dRsR::synapse0x2ecbe60() {
   return (neuron0x2eba460()*-0.0344374);
}

double NNfunction_sb_dRsR::synapse0x2ecbea0() {
   return (neuron0x2eba7a0()*0.0006252);
}

double NNfunction_sb_dRsR::synapse0x2ecbee0() {
   return (neuron0x2ebaae0()*-0.00147536);
}

double NNfunction_sb_dRsR::synapse0x2ecbf20() {
   return (neuron0x2ebae20()*-0.0205889);
}

double NNfunction_sb_dRsR::synapse0x2ecb9b0() {
   return (neuron0x2ebb160()*-0.00937283);
}

double NNfunction_sb_dRsR::synapse0x2ecb9f0() {
   return (neuron0x2ebb6c0()*-0.382626);
}

double NNfunction_sb_dRsR::synapse0x2ecc070() {
   return (neuron0x2ebba00()*0.744584);
}

double NNfunction_sb_dRsR::synapse0x2ecc0b0() {
   return (neuron0x2ebbd40()*0.0142948);
}

double NNfunction_sb_dRsR::synapse0x2ecc0f0() {
   return (neuron0x2ebc080()*0.0162375);
}

double NNfunction_sb_dRsR::synapse0x2ecc130() {
   return (neuron0x2ebc3c0()*0.00616253);
}

double NNfunction_sb_dRsR::synapse0x2ecc170() {
   return (neuron0x2ebc700()*-0.0122131);
}

double NNfunction_sb_dRsR::synapse0x2ecc1b0() {
   return (neuron0x2ebca40()*-0.00218938);
}

double NNfunction_sb_dRsR::synapse0x2ecc530() {
   return (neuron0x2eb7df0()*0.0189149);
}

double NNfunction_sb_dRsR::synapse0x2ecc570() {
   return (neuron0x2eb80a0()*0.00482462);
}

double NNfunction_sb_dRsR::synapse0x2ecc5b0() {
   return (neuron0x2eb83e0()*0.0188491);
}

double NNfunction_sb_dRsR::synapse0x2ecc5f0() {
   return (neuron0x2eb8720()*1.34489);
}

double NNfunction_sb_dRsR::synapse0x2ecc630() {
   return (neuron0x2eb8a60()*0.00422685);
}

double NNfunction_sb_dRsR::synapse0x2ecc670() {
   return (neuron0x2eb8da0()*-0.00770769);
}

double NNfunction_sb_dRsR::synapse0x2ecc6b0() {
   return (neuron0x2eb90e0()*0.00924717);
}

double NNfunction_sb_dRsR::synapse0x2ecc6f0() {
   return (neuron0x2eb9420()*0.00928139);
}

double NNfunction_sb_dRsR::synapse0x2ecc730() {
   return (neuron0x2eb9760()*-0.0211322);
}

double NNfunction_sb_dRsR::synapse0x2ec48f0() {
   return (neuron0x2eb9aa0()*-0.00144221);
}

double NNfunction_sb_dRsR::synapse0x2ec4930() {
   return (neuron0x2eb9de0()*-0.00773657);
}

double NNfunction_sb_dRsR::synapse0x2ec4970() {
   return (neuron0x2eba120()*0.0244615);
}

double NNfunction_sb_dRsR::synapse0x2ec49b0() {
   return (neuron0x2eba460()*0.0177314);
}

double NNfunction_sb_dRsR::synapse0x2ec49f0() {
   return (neuron0x2eba7a0()*0.00732771);
}

double NNfunction_sb_dRsR::synapse0x2ec4a30() {
   return (neuron0x2ebaae0()*0.0299768);
}

double NNfunction_sb_dRsR::synapse0x2ec4a70() {
   return (neuron0x2ebae20()*0.0151125);
}

double NNfunction_sb_dRsR::synapse0x2ecc380() {
   return (neuron0x2ebb160()*0.0158759);
}

double NNfunction_sb_dRsR::synapse0x2ecc3c0() {
   return (neuron0x2ebb6c0()*-0.117628);
}

double NNfunction_sb_dRsR::synapse0x2ec4bc0() {
   return (neuron0x2ebba00()*0.221807);
}

double NNfunction_sb_dRsR::synapse0x2ec4c00() {
   return (neuron0x2ebbd40()*-0.0156514);
}

double NNfunction_sb_dRsR::synapse0x2ec4c40() {
   return (neuron0x2ebc080()*-0.0102964);
}

double NNfunction_sb_dRsR::synapse0x2ec4c80() {
   return (neuron0x2ebc3c0()*-0.0231913);
}

double NNfunction_sb_dRsR::synapse0x2ec4cc0() {
   return (neuron0x2ebc700()*0.00993217);
}

double NNfunction_sb_dRsR::synapse0x2ec4d00() {
   return (neuron0x2ebca40()*0.00790904);
}

double NNfunction_sb_dRsR::synapse0x2ec5080() {
   return (neuron0x2eb7df0()*-0.176333);
}

double NNfunction_sb_dRsR::synapse0x2ec50c0() {
   return (neuron0x2eb80a0()*-0.364545);
}

double NNfunction_sb_dRsR::synapse0x2ec5100() {
   return (neuron0x2eb83e0()*0.329135);
}

double NNfunction_sb_dRsR::synapse0x2ec5140() {
   return (neuron0x2eb8720()*0.102736);
}

double NNfunction_sb_dRsR::synapse0x2ec5180() {
   return (neuron0x2eb8a60()*1.02984);
}

double NNfunction_sb_dRsR::synapse0x2ec51c0() {
   return (neuron0x2eb8da0()*0.129782);
}

double NNfunction_sb_dRsR::synapse0x2ec5200() {
   return (neuron0x2eb90e0()*0.422106);
}

double NNfunction_sb_dRsR::synapse0x2ec5240() {
   return (neuron0x2eb9420()*0.12211);
}

double NNfunction_sb_dRsR::synapse0x2ec5280() {
   return (neuron0x2eb9760()*0.45166);
}

double NNfunction_sb_dRsR::synapse0x2ec52c0() {
   return (neuron0x2eb9aa0()*0.494926);
}

double NNfunction_sb_dRsR::synapse0x2ec5300() {
   return (neuron0x2eb9de0()*-0.0611767);
}

double NNfunction_sb_dRsR::synapse0x2ec5340() {
   return (neuron0x2eba120()*0.250404);
}

double NNfunction_sb_dRsR::synapse0x2ec5380() {
   return (neuron0x2eba460()*-0.201285);
}

double NNfunction_sb_dRsR::synapse0x2ec53c0() {
   return (neuron0x2eba7a0()*-0.946657);
}

double NNfunction_sb_dRsR::synapse0x2ec5400() {
   return (neuron0x2ebaae0()*-0.16656);
}

double NNfunction_sb_dRsR::synapse0x2ec5440() {
   return (neuron0x2ebae20()*-0.0488637);
}

double NNfunction_sb_dRsR::synapse0x2ec4ed0() {
   return (neuron0x2ebb160()*-0.402828);
}

double NNfunction_sb_dRsR::synapse0x2ec4f10() {
   return (neuron0x2ebb6c0()*-0.380137);
}

double NNfunction_sb_dRsR::synapse0x2ec5590() {
   return (neuron0x2ebba00()*-0.223014);
}

double NNfunction_sb_dRsR::synapse0x2ec55d0() {
   return (neuron0x2ebbd40()*-0.074685);
}

double NNfunction_sb_dRsR::synapse0x2ec5610() {
   return (neuron0x2ebc080()*-0.10857);
}

double NNfunction_sb_dRsR::synapse0x2ec5650() {
   return (neuron0x2ebc3c0()*-0.261755);
}

double NNfunction_sb_dRsR::synapse0x2ec5690() {
   return (neuron0x2ebc700()*-0.122295);
}

double NNfunction_sb_dRsR::synapse0x2ec56d0() {
   return (neuron0x2ebca40()*0.408776);
}

double NNfunction_sb_dRsR::synapse0x2ec58a0() {
   return (neuron0x2eb7df0()*0.00593649);
}

double NNfunction_sb_dRsR::synapse0x2ece930() {
   return (neuron0x2eb80a0()*0.0022585);
}

double NNfunction_sb_dRsR::synapse0x2ece970() {
   return (neuron0x2eb83e0()*-0.00391868);
}

double NNfunction_sb_dRsR::synapse0x2ece9b0() {
   return (neuron0x2eb8720()*0.398809);
}

double NNfunction_sb_dRsR::synapse0x2ece9f0() {
   return (neuron0x2eb8a60()*0.00360076);
}

double NNfunction_sb_dRsR::synapse0x2ecea30() {
   return (neuron0x2eb8da0()*0.00539966);
}

double NNfunction_sb_dRsR::synapse0x2ecea70() {
   return (neuron0x2eb90e0()*-0.00734213);
}

double NNfunction_sb_dRsR::synapse0x2eceab0() {
   return (neuron0x2eb9420()*0.00138846);
}

double NNfunction_sb_dRsR::synapse0x2eceaf0() {
   return (neuron0x2eb9760()*-0.0176271);
}

double NNfunction_sb_dRsR::synapse0x2eceb30() {
   return (neuron0x2eb9aa0()*0.00645251);
}

double NNfunction_sb_dRsR::synapse0x2eceb70() {
   return (neuron0x2eb9de0()*-0.00483549);
}

double NNfunction_sb_dRsR::synapse0x2ecebb0() {
   return (neuron0x2eba120()*-0.0607164);
}

double NNfunction_sb_dRsR::synapse0x2ecebf0() {
   return (neuron0x2eba460()*-0.0536209);
}

double NNfunction_sb_dRsR::synapse0x2ecec30() {
   return (neuron0x2eba7a0()*0.0252455);
}

double NNfunction_sb_dRsR::synapse0x2ecec70() {
   return (neuron0x2ebaae0()*-0.0490809);
}

double NNfunction_sb_dRsR::synapse0x2ececb0() {
   return (neuron0x2ebae20()*-0.0503146);
}

double NNfunction_sb_dRsR::synapse0x2ece780() {
   return (neuron0x2ebb160()*0.0356188);
}

double NNfunction_sb_dRsR::synapse0x2ece7c0() {
   return (neuron0x2ebb6c0()*0.755519);
}

double NNfunction_sb_dRsR::synapse0x2ecee00() {
   return (neuron0x2ebba00()*0.44727);
}

double NNfunction_sb_dRsR::synapse0x2ecee40() {
   return (neuron0x2ebbd40()*-0.00720505);
}

double NNfunction_sb_dRsR::synapse0x2ecee80() {
   return (neuron0x2ebc080()*0.00370191);
}

double NNfunction_sb_dRsR::synapse0x2eceec0() {
   return (neuron0x2ebc3c0()*-0.0176722);
}

double NNfunction_sb_dRsR::synapse0x2ecef00() {
   return (neuron0x2ebc700()*0.0185929);
}

double NNfunction_sb_dRsR::synapse0x2ecef40() {
   return (neuron0x2ebca40()*-0.0124849);
}

double NNfunction_sb_dRsR::synapse0x2ecf2c0() {
   return (neuron0x2eb7df0()*-0.00525686);
}

double NNfunction_sb_dRsR::synapse0x2ecf300() {
   return (neuron0x2eb80a0()*-0.00472049);
}

double NNfunction_sb_dRsR::synapse0x2ecf340() {
   return (neuron0x2eb83e0()*0.00847337);
}

double NNfunction_sb_dRsR::synapse0x2ecf380() {
   return (neuron0x2eb8720()*0.0480969);
}

double NNfunction_sb_dRsR::synapse0x2ecf3c0() {
   return (neuron0x2eb8a60()*0.0039197);
}

double NNfunction_sb_dRsR::synapse0x2ecf400() {
   return (neuron0x2eb8da0()*0.00803004);
}

double NNfunction_sb_dRsR::synapse0x2ecf440() {
   return (neuron0x2eb90e0()*-0.00625549);
}

double NNfunction_sb_dRsR::synapse0x2ecf480() {
   return (neuron0x2eb9420()*-0.0139531);
}

double NNfunction_sb_dRsR::synapse0x2ecf4c0() {
   return (neuron0x2eb9760()*-0.0123429);
}

double NNfunction_sb_dRsR::synapse0x2ecf500() {
   return (neuron0x2eb9aa0()*-0.00452002);
}

double NNfunction_sb_dRsR::synapse0x2ecf540() {
   return (neuron0x2eb9de0()*-0.0122754);
}

double NNfunction_sb_dRsR::synapse0x2ecf580() {
   return (neuron0x2eba120()*0.00864043);
}

double NNfunction_sb_dRsR::synapse0x2ecf5c0() {
   return (neuron0x2eba460()*0.00986862);
}

double NNfunction_sb_dRsR::synapse0x2ecf600() {
   return (neuron0x2eba7a0()*-0.00395541);
}

double NNfunction_sb_dRsR::synapse0x2ecf640() {
   return (neuron0x2ebaae0()*0.00201989);
}

double NNfunction_sb_dRsR::synapse0x2ecf680() {
   return (neuron0x2ebae20()*-0.00374155);
}

double NNfunction_sb_dRsR::synapse0x2ecf110() {
   return (neuron0x2ebb160()*0.00582934);
}

double NNfunction_sb_dRsR::synapse0x2ecf150() {
   return (neuron0x2ebb6c0()*-1.2185);
}

double NNfunction_sb_dRsR::synapse0x2ecf7d0() {
   return (neuron0x2ebba00()*0.117724);
}

double NNfunction_sb_dRsR::synapse0x2ecf810() {
   return (neuron0x2ebbd40()*-0.00593241);
}

double NNfunction_sb_dRsR::synapse0x2ecf850() {
   return (neuron0x2ebc080()*0.00810291);
}

double NNfunction_sb_dRsR::synapse0x2ecf890() {
   return (neuron0x2ebc3c0()*0.0252326);
}

double NNfunction_sb_dRsR::synapse0x2ecf8d0() {
   return (neuron0x2ebc700()*0.00281243);
}

double NNfunction_sb_dRsR::synapse0x2ecf910() {
   return (neuron0x2ebca40()*-0.0188035);
}

double NNfunction_sb_dRsR::synapse0x2ecfc90() {
   return (neuron0x2eb7df0()*-0.427146);
}

double NNfunction_sb_dRsR::synapse0x2ecfcd0() {
   return (neuron0x2eb80a0()*-0.0558012);
}

double NNfunction_sb_dRsR::synapse0x2ecfd10() {
   return (neuron0x2eb83e0()*0.945808);
}

double NNfunction_sb_dRsR::synapse0x2ecfd50() {
   return (neuron0x2eb8720()*0.383035);
}

double NNfunction_sb_dRsR::synapse0x2ecfd90() {
   return (neuron0x2eb8a60()*-1.14446);
}

double NNfunction_sb_dRsR::synapse0x2ecfdd0() {
   return (neuron0x2eb8da0()*-0.648488);
}

double NNfunction_sb_dRsR::synapse0x2ecfe10() {
   return (neuron0x2eb90e0()*0.0129625);
}

double NNfunction_sb_dRsR::synapse0x2ecfe50() {
   return (neuron0x2eb9420()*0.887162);
}

double NNfunction_sb_dRsR::synapse0x2ecfe90() {
   return (neuron0x2eb9760()*0.207697);
}

double NNfunction_sb_dRsR::synapse0x2ecfed0() {
   return (neuron0x2eb9aa0()*-0.560045);
}

double NNfunction_sb_dRsR::synapse0x2ecff10() {
   return (neuron0x2eb9de0()*0.0113006);
}

double NNfunction_sb_dRsR::synapse0x2ecff50() {
   return (neuron0x2eba120()*0.0297455);
}

double NNfunction_sb_dRsR::synapse0x2ecff90() {
   return (neuron0x2eba460()*0.34036);
}

double NNfunction_sb_dRsR::synapse0x2ecffd0() {
   return (neuron0x2eba7a0()*0.978965);
}

double NNfunction_sb_dRsR::synapse0x2ed0010() {
   return (neuron0x2ebaae0()*0.133409);
}

double NNfunction_sb_dRsR::synapse0x2ed0050() {
   return (neuron0x2ebae20()*-0.0121519);
}

double NNfunction_sb_dRsR::synapse0x2ecfae0() {
   return (neuron0x2ebb160()*-0.0526474);
}

double NNfunction_sb_dRsR::synapse0x2ecfb20() {
   return (neuron0x2ebb6c0()*-1.09414);
}

double NNfunction_sb_dRsR::synapse0x2ed01a0() {
   return (neuron0x2ebba00()*-0.375716);
}

double NNfunction_sb_dRsR::synapse0x2ed01e0() {
   return (neuron0x2ebbd40()*0.440405);
}

double NNfunction_sb_dRsR::synapse0x2ed0220() {
   return (neuron0x2ebc080()*-0.654314);
}

double NNfunction_sb_dRsR::synapse0x2ed0260() {
   return (neuron0x2ebc3c0()*0.929503);
}

double NNfunction_sb_dRsR::synapse0x2ed02a0() {
   return (neuron0x2ebc700()*0.099621);
}

double NNfunction_sb_dRsR::synapse0x2ed02e0() {
   return (neuron0x2ebca40()*-0.169542);
}

double NNfunction_sb_dRsR::synapse0x2ed0660() {
   return (neuron0x2eb7df0()*0.2848);
}

double NNfunction_sb_dRsR::synapse0x2ed06a0() {
   return (neuron0x2eb80a0()*0.818643);
}

double NNfunction_sb_dRsR::synapse0x2ed06e0() {
   return (neuron0x2eb83e0()*1.17972);
}

double NNfunction_sb_dRsR::synapse0x2ed0720() {
   return (neuron0x2eb8720()*0.784431);
}

double NNfunction_sb_dRsR::synapse0x2ed0760() {
   return (neuron0x2eb8a60()*0.476742);
}

double NNfunction_sb_dRsR::synapse0x2ed07a0() {
   return (neuron0x2eb8da0()*0.461803);
}

double NNfunction_sb_dRsR::synapse0x2ed07e0() {
   return (neuron0x2eb90e0()*0.340768);
}

double NNfunction_sb_dRsR::synapse0x2ed0820() {
   return (neuron0x2eb9420()*-0.219213);
}

double NNfunction_sb_dRsR::synapse0x2ed0860() {
   return (neuron0x2eb9760()*-0.119242);
}

double NNfunction_sb_dRsR::synapse0x2ed08a0() {
   return (neuron0x2eb9aa0()*-0.0425865);
}

double NNfunction_sb_dRsR::synapse0x2ed08e0() {
   return (neuron0x2eb9de0()*-0.385458);
}

double NNfunction_sb_dRsR::synapse0x2ed0920() {
   return (neuron0x2eba120()*0.101246);
}

double NNfunction_sb_dRsR::synapse0x2ed0960() {
   return (neuron0x2eba460()*-0.176665);
}

double NNfunction_sb_dRsR::synapse0x2ed09a0() {
   return (neuron0x2eba7a0()*0.681007);
}

double NNfunction_sb_dRsR::synapse0x2ed09e0() {
   return (neuron0x2ebaae0()*-0.142394);
}

double NNfunction_sb_dRsR::synapse0x2ed0a20() {
   return (neuron0x2ebae20()*-0.0831324);
}

double NNfunction_sb_dRsR::synapse0x2ed04b0() {
   return (neuron0x2ebb160()*0.351597);
}

double NNfunction_sb_dRsR::synapse0x2ed04f0() {
   return (neuron0x2ebb6c0()*-0.148434);
}

double NNfunction_sb_dRsR::synapse0x2ed0b70() {
   return (neuron0x2ebba00()*0.205562);
}

double NNfunction_sb_dRsR::synapse0x2ed0bb0() {
   return (neuron0x2ebbd40()*-0.260623);
}

double NNfunction_sb_dRsR::synapse0x2ed0bf0() {
   return (neuron0x2ebc080()*-0.0159864);
}

double NNfunction_sb_dRsR::synapse0x2ed0c30() {
   return (neuron0x2ebc3c0()*-0.14208);
}

double NNfunction_sb_dRsR::synapse0x2ed0c70() {
   return (neuron0x2ebc700()*0.0186265);
}

double NNfunction_sb_dRsR::synapse0x2ed0cb0() {
   return (neuron0x2ebca40()*-0.156042);
}

double NNfunction_sb_dRsR::synapse0x2ed1030() {
   return (neuron0x2eb7df0()*0.0116838);
}

double NNfunction_sb_dRsR::synapse0x2ed1070() {
   return (neuron0x2eb80a0()*-1.22411);
}

double NNfunction_sb_dRsR::synapse0x2ed10b0() {
   return (neuron0x2eb83e0()*-0.386614);
}

double NNfunction_sb_dRsR::synapse0x2ed10f0() {
   return (neuron0x2eb8720()*-0.232465);
}

double NNfunction_sb_dRsR::synapse0x2ed1130() {
   return (neuron0x2eb8a60()*-0.020555);
}

double NNfunction_sb_dRsR::synapse0x2ed1170() {
   return (neuron0x2eb8da0()*0.212344);
}

double NNfunction_sb_dRsR::synapse0x2ed11b0() {
   return (neuron0x2eb90e0()*0.401326);
}

double NNfunction_sb_dRsR::synapse0x2ed11f0() {
   return (neuron0x2eb9420()*0.188498);
}

double NNfunction_sb_dRsR::synapse0x2ed1230() {
   return (neuron0x2eb9760()*0.340315);
}

double NNfunction_sb_dRsR::synapse0x2ed1270() {
   return (neuron0x2eb9aa0()*0.0723914);
}

double NNfunction_sb_dRsR::synapse0x2ed12b0() {
   return (neuron0x2eb9de0()*-0.759241);
}

double NNfunction_sb_dRsR::synapse0x2ed12f0() {
   return (neuron0x2eba120()*-0.0588295);
}

double NNfunction_sb_dRsR::synapse0x2ed1330() {
   return (neuron0x2eba460()*0.470998);
}

double NNfunction_sb_dRsR::synapse0x2ed1370() {
   return (neuron0x2eba7a0()*0.183463);
}

double NNfunction_sb_dRsR::synapse0x2ed13b0() {
   return (neuron0x2ebaae0()*0.0924847);
}

double NNfunction_sb_dRsR::synapse0x2ed13f0() {
   return (neuron0x2ebae20()*-0.164248);
}

double NNfunction_sb_dRsR::synapse0x2ed0e80() {
   return (neuron0x2ebb160()*0.0418767);
}

double NNfunction_sb_dRsR::synapse0x2ed0ec0() {
   return (neuron0x2ebb6c0()*0.880284);
}

double NNfunction_sb_dRsR::synapse0x2ed1540() {
   return (neuron0x2ebba00()*0.936156);
}

double NNfunction_sb_dRsR::synapse0x2ed1580() {
   return (neuron0x2ebbd40()*0.703987);
}

double NNfunction_sb_dRsR::synapse0x2ed15c0() {
   return (neuron0x2ebc080()*-0.212021);
}

double NNfunction_sb_dRsR::synapse0x2ed1600() {
   return (neuron0x2ebc3c0()*-0.978232);
}

double NNfunction_sb_dRsR::synapse0x2ed1640() {
   return (neuron0x2ebc700()*0.0867812);
}

double NNfunction_sb_dRsR::synapse0x2ed1680() {
   return (neuron0x2ebca40()*-0.0461579);
}

double NNfunction_sb_dRsR::synapse0x2ed1a00() {
   return (neuron0x2eb7df0()*0.385304);
}

double NNfunction_sb_dRsR::synapse0x2ed1a40() {
   return (neuron0x2eb80a0()*-0.45734);
}

double NNfunction_sb_dRsR::synapse0x2ed1a80() {
   return (neuron0x2eb83e0()*-0.0235604);
}

double NNfunction_sb_dRsR::synapse0x2ed1ac0() {
   return (neuron0x2eb8720()*-0.203461);
}

double NNfunction_sb_dRsR::synapse0x2ed1b00() {
   return (neuron0x2eb8a60()*0.608821);
}

double NNfunction_sb_dRsR::synapse0x2ed1b40() {
   return (neuron0x2eb8da0()*0.276082);
}

double NNfunction_sb_dRsR::synapse0x2ed1b80() {
   return (neuron0x2eb90e0()*-0.228381);
}

double NNfunction_sb_dRsR::synapse0x2ed1bc0() {
   return (neuron0x2eb9420()*-0.0469163);
}

double NNfunction_sb_dRsR::synapse0x2ed1c00() {
   return (neuron0x2eb9760()*-0.431384);
}

double NNfunction_sb_dRsR::synapse0x2ed1c40() {
   return (neuron0x2eb9aa0()*-0.519712);
}

double NNfunction_sb_dRsR::synapse0x2ed1c80() {
   return (neuron0x2eb9de0()*-1.30523);
}

double NNfunction_sb_dRsR::synapse0x2ed1cc0() {
   return (neuron0x2eba120()*0.4885);
}

double NNfunction_sb_dRsR::synapse0x2ed1d00() {
   return (neuron0x2eba460()*0.173305);
}

double NNfunction_sb_dRsR::synapse0x2ed1d40() {
   return (neuron0x2eba7a0()*-0.0897846);
}

double NNfunction_sb_dRsR::synapse0x2ed1d80() {
   return (neuron0x2ebaae0()*-0.186836);
}

double NNfunction_sb_dRsR::synapse0x2ed1dc0() {
   return (neuron0x2ebae20()*-0.432624);
}

double NNfunction_sb_dRsR::synapse0x2ed1850() {
   return (neuron0x2ebb160()*0.369558);
}

double NNfunction_sb_dRsR::synapse0x2ed1890() {
   return (neuron0x2ebb6c0()*0.325673);
}

double NNfunction_sb_dRsR::synapse0x2ed1f10() {
   return (neuron0x2ebba00()*0.582771);
}

double NNfunction_sb_dRsR::synapse0x2ed1f50() {
   return (neuron0x2ebbd40()*-1.10987);
}

double NNfunction_sb_dRsR::synapse0x2ed1f90() {
   return (neuron0x2ebc080()*-0.737702);
}

double NNfunction_sb_dRsR::synapse0x2ed1fd0() {
   return (neuron0x2ebc3c0()*0.522653);
}

double NNfunction_sb_dRsR::synapse0x2ed2010() {
   return (neuron0x2ebc700()*-0.144678);
}

double NNfunction_sb_dRsR::synapse0x2ed2050() {
   return (neuron0x2ebca40()*0.0165392);
}

double NNfunction_sb_dRsR::synapse0x2ed23d0() {
   return (neuron0x2eb7df0()*0.0771595);
}

double NNfunction_sb_dRsR::synapse0x2ed2410() {
   return (neuron0x2eb80a0()*-0.109028);
}

double NNfunction_sb_dRsR::synapse0x2ed2450() {
   return (neuron0x2eb83e0()*0.98262);
}

double NNfunction_sb_dRsR::synapse0x2ed2490() {
   return (neuron0x2eb8720()*0.234709);
}

double NNfunction_sb_dRsR::synapse0x2ed24d0() {
   return (neuron0x2eb8a60()*-1.12036);
}

double NNfunction_sb_dRsR::synapse0x2ed2510() {
   return (neuron0x2eb8da0()*-0.283922);
}

double NNfunction_sb_dRsR::synapse0x2ed2550() {
   return (neuron0x2eb90e0()*-0.422558);
}

double NNfunction_sb_dRsR::synapse0x2ed2590() {
   return (neuron0x2eb9420()*-0.146623);
}

double NNfunction_sb_dRsR::synapse0x2ed25d0() {
   return (neuron0x2eb9760()*-0.32545);
}

double NNfunction_sb_dRsR::synapse0x2ed2610() {
   return (neuron0x2eb9aa0()*0.031786);
}

double NNfunction_sb_dRsR::synapse0x2ed2650() {
   return (neuron0x2eb9de0()*0.886676);
}

double NNfunction_sb_dRsR::synapse0x2ed2690() {
   return (neuron0x2eba120()*0.240321);
}

double NNfunction_sb_dRsR::synapse0x2ed26d0() {
   return (neuron0x2eba460()*0.0910402);
}

double NNfunction_sb_dRsR::synapse0x2ed2710() {
   return (neuron0x2eba7a0()*-1.23341);
}

double NNfunction_sb_dRsR::synapse0x2ed2750() {
   return (neuron0x2ebaae0()*-0.333297);
}

double NNfunction_sb_dRsR::synapse0x2ed2790() {
   return (neuron0x2ebae20()*-1.10912);
}

double NNfunction_sb_dRsR::synapse0x2ed2220() {
   return (neuron0x2ebb160()*0.533559);
}

double NNfunction_sb_dRsR::synapse0x2ed2260() {
   return (neuron0x2ebb6c0()*-0.449951);
}

double NNfunction_sb_dRsR::synapse0x2ed28e0() {
   return (neuron0x2ebba00()*-0.320269);
}

double NNfunction_sb_dRsR::synapse0x2ed2920() {
   return (neuron0x2ebbd40()*0.308107);
}

double NNfunction_sb_dRsR::synapse0x2ed2960() {
   return (neuron0x2ebc080()*0.044696);
}

double NNfunction_sb_dRsR::synapse0x2ed29a0() {
   return (neuron0x2ebc3c0()*0.632376);
}

double NNfunction_sb_dRsR::synapse0x2ed29e0() {
   return (neuron0x2ebc700()*-0.237714);
}

double NNfunction_sb_dRsR::synapse0x2ed2a20() {
   return (neuron0x2ebca40()*-1.08695);
}

double NNfunction_sb_dRsR::synapse0x2ed2da0() {
   return (neuron0x2eb7df0()*-0.00735578);
}

double NNfunction_sb_dRsR::synapse0x2ed2de0() {
   return (neuron0x2eb80a0()*0.00780319);
}

double NNfunction_sb_dRsR::synapse0x2ed2e20() {
   return (neuron0x2eb83e0()*0.0125145);
}

double NNfunction_sb_dRsR::synapse0x2ed2e60() {
   return (neuron0x2eb8720()*-1.83684);
}

double NNfunction_sb_dRsR::synapse0x2ed2ea0() {
   return (neuron0x2eb8a60()*0.00451839);
}

double NNfunction_sb_dRsR::synapse0x2ed2ee0() {
   return (neuron0x2eb8da0()*0.0370103);
}

double NNfunction_sb_dRsR::synapse0x2ed2f20() {
   return (neuron0x2eb90e0()*0.0116505);
}

double NNfunction_sb_dRsR::synapse0x2ed2f60() {
   return (neuron0x2eb9420()*0.00245126);
}

double NNfunction_sb_dRsR::synapse0x2ed2fa0() {
   return (neuron0x2eb9760()*-0.0198406);
}

double NNfunction_sb_dRsR::synapse0x2ed2fe0() {
   return (neuron0x2eb9aa0()*0.0510035);
}

double NNfunction_sb_dRsR::synapse0x2ed3020() {
   return (neuron0x2eb9de0()*-0.0146998);
}

double NNfunction_sb_dRsR::synapse0x2ed3060() {
   return (neuron0x2eba120()*0.0346401);
}

double NNfunction_sb_dRsR::synapse0x2ed30a0() {
   return (neuron0x2eba460()*-0.0159585);
}

double NNfunction_sb_dRsR::synapse0x2ed30e0() {
   return (neuron0x2eba7a0()*-0.090747);
}

double NNfunction_sb_dRsR::synapse0x2ed3120() {
   return (neuron0x2ebaae0()*-0.00814164);
}

double NNfunction_sb_dRsR::synapse0x2ed3160() {
   return (neuron0x2ebae20()*0.0118907);
}

double NNfunction_sb_dRsR::synapse0x2ed2bf0() {
   return (neuron0x2ebb160()*-0.0791224);
}

double NNfunction_sb_dRsR::synapse0x2ed2c30() {
   return (neuron0x2ebb6c0()*-0.258219);
}

double NNfunction_sb_dRsR::synapse0x2ed32b0() {
   return (neuron0x2ebba00()*-0.111012);
}

double NNfunction_sb_dRsR::synapse0x2ed32f0() {
   return (neuron0x2ebbd40()*-0.0282798);
}

double NNfunction_sb_dRsR::synapse0x2ed3330() {
   return (neuron0x2ebc080()*0.0653953);
}

double NNfunction_sb_dRsR::synapse0x2ed3370() {
   return (neuron0x2ebc3c0()*-0.000496616);
}

double NNfunction_sb_dRsR::synapse0x2ed33b0() {
   return (neuron0x2ebc700()*-0.0341085);
}

double NNfunction_sb_dRsR::synapse0x2ed33f0() {
   return (neuron0x2ebca40()*-0.0369241);
}

double NNfunction_sb_dRsR::synapse0x2ed3770() {
   return (neuron0x2eb7df0()*0.576259);
}

double NNfunction_sb_dRsR::synapse0x2ec7d40() {
   return (neuron0x2eb80a0()*0.150568);
}

double NNfunction_sb_dRsR::synapse0x2ec7d80() {
   return (neuron0x2eb83e0()*-0.292563);
}

double NNfunction_sb_dRsR::synapse0x2ec7dc0() {
   return (neuron0x2eb8720()*1.30247);
}

double NNfunction_sb_dRsR::synapse0x2ec8010() {
   return (neuron0x2eb8a60()*0.120713);
}

double NNfunction_sb_dRsR::synapse0x2ec8050() {
   return (neuron0x2eb8da0()*-0.34473);
}

double NNfunction_sb_dRsR::synapse0x2ec8090() {
   return (neuron0x2eb90e0()*-0.0321451);
}

double NNfunction_sb_dRsR::synapse0x2ec82e0() {
   return (neuron0x2eb9420()*-0.0671322);
}

double NNfunction_sb_dRsR::synapse0x2ec8320() {
   return (neuron0x2eb9760()*-0.45047);
}

double NNfunction_sb_dRsR::synapse0x2ec8570() {
   return (neuron0x2eb9aa0()*-0.27167);
}

double NNfunction_sb_dRsR::synapse0x2ec85b0() {
   return (neuron0x2eb9de0()*-0.270599);
}

double NNfunction_sb_dRsR::synapse0x2ec85f0() {
   return (neuron0x2eba120()*-0.0315121);
}

double NNfunction_sb_dRsR::synapse0x2ec8840() {
   return (neuron0x2eba460()*0.52726);
}

double NNfunction_sb_dRsR::synapse0x2ec8880() {
   return (neuron0x2eba7a0()*-0.794382);
}

double NNfunction_sb_dRsR::synapse0x2ec8ad0() {
   return (neuron0x2ebaae0()*-0.101357);
}

double NNfunction_sb_dRsR::synapse0x2ec8b10() {
   return (neuron0x2ebae20()*-0.120525);
}

double NNfunction_sb_dRsR::synapse0x2ed35c0() {
   return (neuron0x2ebb160()*0.266271);
}

double NNfunction_sb_dRsR::synapse0x2ed3600() {
   return (neuron0x2ebb6c0()*0.0228735);
}

double NNfunction_sb_dRsR::synapse0x2ec8c60() {
   return (neuron0x2ebba00()*0.259851);
}

double NNfunction_sb_dRsR::synapse0x2ec9170() {
   return (neuron0x2ebbd40()*-0.695373);
}

double NNfunction_sb_dRsR::synapse0x2ec91b0() {
   return (neuron0x2ebc080()*-0.0956215);
}

double NNfunction_sb_dRsR::synapse0x2ec91f0() {
   return (neuron0x2ebc3c0()*0.204474);
}

double NNfunction_sb_dRsR::synapse0x2ec9440() {
   return (neuron0x2ebc700()*0.220264);
}

double NNfunction_sb_dRsR::synapse0x2ec9480() {
   return (neuron0x2ebca40()*-0.279438);
}

double NNfunction_sb_dRsR::synapse0x2ec8d30() {
   return (neuron0x2eb7df0()*0.389155);
}

double NNfunction_sb_dRsR::synapse0x2ec8d70() {
   return (neuron0x2eb80a0()*-0.321371);
}

double NNfunction_sb_dRsR::synapse0x2ec8db0() {
   return (neuron0x2eb83e0()*0.178673);
}

double NNfunction_sb_dRsR::synapse0x2ec8df0() {
   return (neuron0x2eb8720()*-1.1053);
}

double NNfunction_sb_dRsR::synapse0x2ec9770() {
   return (neuron0x2eb8a60()*-0.352538);
}

double NNfunction_sb_dRsR::synapse0x2ed5ac0() {
   return (neuron0x2eb8da0()*0.345816);
}

double NNfunction_sb_dRsR::synapse0x2ed5b00() {
   return (neuron0x2eb90e0()*-0.104965);
}

double NNfunction_sb_dRsR::synapse0x2ed5b40() {
   return (neuron0x2eb9420()*-0.562463);
}

double NNfunction_sb_dRsR::synapse0x2ed5b80() {
   return (neuron0x2eb9760()*-0.274661);
}

double NNfunction_sb_dRsR::synapse0x2ed5bc0() {
   return (neuron0x2eb9aa0()*-0.478358);
}

double NNfunction_sb_dRsR::synapse0x2ed5c00() {
   return (neuron0x2eb9de0()*-0.132856);
}

double NNfunction_sb_dRsR::synapse0x2ed5c40() {
   return (neuron0x2eba120()*-0.0922874);
}

double NNfunction_sb_dRsR::synapse0x2ed5c80() {
   return (neuron0x2eba460()*0.117588);
}

double NNfunction_sb_dRsR::synapse0x2ed5cc0() {
   return (neuron0x2eba7a0()*-0.586795);
}

double NNfunction_sb_dRsR::synapse0x2ed5d00() {
   return (neuron0x2ebaae0()*0.545367);
}

double NNfunction_sb_dRsR::synapse0x2ed5d40() {
   return (neuron0x2ebae20()*0.261849);
}

double NNfunction_sb_dRsR::synapse0x2ec9650() {
   return (neuron0x2ebb160()*0.441313);
}

double NNfunction_sb_dRsR::synapse0x2ec9690() {
   return (neuron0x2ebb6c0()*0.800452);
}

double NNfunction_sb_dRsR::synapse0x2ed5e90() {
   return (neuron0x2ebba00()*1.16428);
}

double NNfunction_sb_dRsR::synapse0x2ed5ed0() {
   return (neuron0x2ebbd40()*-0.701568);
}

double NNfunction_sb_dRsR::synapse0x2ed5f10() {
   return (neuron0x2ebc080()*-0.0968406);
}

double NNfunction_sb_dRsR::synapse0x2ed5f50() {
   return (neuron0x2ebc3c0()*-0.257855);
}

double NNfunction_sb_dRsR::synapse0x2ed5f90() {
   return (neuron0x2ebc700()*0.629716);
}

double NNfunction_sb_dRsR::synapse0x2ed5fd0() {
   return (neuron0x2ebca40()*-0.433397);
}

double NNfunction_sb_dRsR::synapse0x2ed6350() {
   return (neuron0x2eb7df0()*-0.280363);
}

double NNfunction_sb_dRsR::synapse0x2ed6390() {
   return (neuron0x2eb80a0()*-0.280804);
}

double NNfunction_sb_dRsR::synapse0x2ed63d0() {
   return (neuron0x2eb83e0()*-1.49983);
}

double NNfunction_sb_dRsR::synapse0x2ed6410() {
   return (neuron0x2eb8720()*-0.51108);
}

double NNfunction_sb_dRsR::synapse0x2ed6450() {
   return (neuron0x2eb8a60()*-1.07406);
}

double NNfunction_sb_dRsR::synapse0x2ed6490() {
   return (neuron0x2eb8da0()*0.0889491);
}

double NNfunction_sb_dRsR::synapse0x2ed64d0() {
   return (neuron0x2eb90e0()*-0.392273);
}

double NNfunction_sb_dRsR::synapse0x2ed6510() {
   return (neuron0x2eb9420()*0.323555);
}

double NNfunction_sb_dRsR::synapse0x2ed6550() {
   return (neuron0x2eb9760()*0.188633);
}

double NNfunction_sb_dRsR::synapse0x2ed6590() {
   return (neuron0x2eb9aa0()*-0.160311);
}

double NNfunction_sb_dRsR::synapse0x2ed65d0() {
   return (neuron0x2eb9de0()*0.592442);
}

double NNfunction_sb_dRsR::synapse0x2ed6610() {
   return (neuron0x2eba120()*1.52884);
}

double NNfunction_sb_dRsR::synapse0x2ed6650() {
   return (neuron0x2eba460()*0.0285116);
}

double NNfunction_sb_dRsR::synapse0x2ed6690() {
   return (neuron0x2eba7a0()*-0.129137);
}

double NNfunction_sb_dRsR::synapse0x2ed66d0() {
   return (neuron0x2ebaae0()*0.243427);
}

double NNfunction_sb_dRsR::synapse0x2ed6710() {
   return (neuron0x2ebae20()*-0.382562);
}

double NNfunction_sb_dRsR::synapse0x2ed61a0() {
   return (neuron0x2ebb160()*-0.298463);
}

double NNfunction_sb_dRsR::synapse0x2ed61e0() {
   return (neuron0x2ebb6c0()*1.41373);
}

double NNfunction_sb_dRsR::synapse0x2ed6860() {
   return (neuron0x2ebba00()*-0.655859);
}

double NNfunction_sb_dRsR::synapse0x2ed68a0() {
   return (neuron0x2ebbd40()*0.0410833);
}

double NNfunction_sb_dRsR::synapse0x2ed68e0() {
   return (neuron0x2ebc080()*-0.0356581);
}

double NNfunction_sb_dRsR::synapse0x2ed6920() {
   return (neuron0x2ebc3c0()*0.157952);
}

double NNfunction_sb_dRsR::synapse0x2ed6960() {
   return (neuron0x2ebc700()*-0.0917354);
}

double NNfunction_sb_dRsR::synapse0x2ed69a0() {
   return (neuron0x2ebca40()*0.20509);
}

double NNfunction_sb_dRsR::synapse0x2ed6d20() {
   return (neuron0x2eb7df0()*0.379854);
}

double NNfunction_sb_dRsR::synapse0x2ed6d60() {
   return (neuron0x2eb80a0()*-0.173015);
}

double NNfunction_sb_dRsR::synapse0x2ed6da0() {
   return (neuron0x2eb83e0()*-0.475557);
}

double NNfunction_sb_dRsR::synapse0x2ed6de0() {
   return (neuron0x2eb8720()*0.0475632);
}

double NNfunction_sb_dRsR::synapse0x2ed6e20() {
   return (neuron0x2eb8a60()*-0.563961);
}

double NNfunction_sb_dRsR::synapse0x2ed6e60() {
   return (neuron0x2eb8da0()*0.195435);
}

double NNfunction_sb_dRsR::synapse0x2ed6ea0() {
   return (neuron0x2eb90e0()*0.0259218);
}

double NNfunction_sb_dRsR::synapse0x2ed6ee0() {
   return (neuron0x2eb9420()*0.285871);
}

double NNfunction_sb_dRsR::synapse0x2ed6f20() {
   return (neuron0x2eb9760()*-0.307009);
}

double NNfunction_sb_dRsR::synapse0x2ed6f60() {
   return (neuron0x2eb9aa0()*-0.213569);
}

double NNfunction_sb_dRsR::synapse0x2ed6fa0() {
   return (neuron0x2eb9de0()*-0.569345);
}

double NNfunction_sb_dRsR::synapse0x2ed6fe0() {
   return (neuron0x2eba120()*0.263867);
}

double NNfunction_sb_dRsR::synapse0x2ed7020() {
   return (neuron0x2eba460()*0.628512);
}

double NNfunction_sb_dRsR::synapse0x2ed7060() {
   return (neuron0x2eba7a0()*0.328761);
}

double NNfunction_sb_dRsR::synapse0x2ed70a0() {
   return (neuron0x2ebaae0()*0.324918);
}

double NNfunction_sb_dRsR::synapse0x2ed70e0() {
   return (neuron0x2ebae20()*0.172481);
}

double NNfunction_sb_dRsR::synapse0x2ed6b70() {
   return (neuron0x2ebb160()*0.245313);
}

double NNfunction_sb_dRsR::synapse0x2ed6bb0() {
   return (neuron0x2ebb6c0()*-0.668917);
}

double NNfunction_sb_dRsR::synapse0x2ed7230() {
   return (neuron0x2ebba00()*-0.579932);
}

double NNfunction_sb_dRsR::synapse0x2ed7270() {
   return (neuron0x2ebbd40()*1.06955);
}

double NNfunction_sb_dRsR::synapse0x2ed72b0() {
   return (neuron0x2ebc080()*-0.215041);
}

double NNfunction_sb_dRsR::synapse0x2ed72f0() {
   return (neuron0x2ebc3c0()*0.140066);
}

double NNfunction_sb_dRsR::synapse0x2ed7330() {
   return (neuron0x2ebc700()*-0.929935);
}

double NNfunction_sb_dRsR::synapse0x2ed7370() {
   return (neuron0x2ebca40()*-0.402194);
}

double NNfunction_sb_dRsR::synapse0x2ed76f0() {
   return (neuron0x2eb7df0()*0.0141146);
}

double NNfunction_sb_dRsR::synapse0x2ed7730() {
   return (neuron0x2eb80a0()*-0.265525);
}

double NNfunction_sb_dRsR::synapse0x2ed7770() {
   return (neuron0x2eb83e0()*-0.0290957);
}

double NNfunction_sb_dRsR::synapse0x2ed77b0() {
   return (neuron0x2eb8720()*-0.534288);
}

double NNfunction_sb_dRsR::synapse0x2ed77f0() {
   return (neuron0x2eb8a60()*-0.54938);
}

double NNfunction_sb_dRsR::synapse0x2ed7830() {
   return (neuron0x2eb8da0()*-0.3703);
}

double NNfunction_sb_dRsR::synapse0x2ed7870() {
   return (neuron0x2eb90e0()*-0.781296);
}

double NNfunction_sb_dRsR::synapse0x2ed78b0() {
   return (neuron0x2eb9420()*-0.20267);
}

double NNfunction_sb_dRsR::synapse0x2ed78f0() {
   return (neuron0x2eb9760()*0.0200771);
}

double NNfunction_sb_dRsR::synapse0x2ed7930() {
   return (neuron0x2eb9aa0()*-0.200527);
}

double NNfunction_sb_dRsR::synapse0x2ed7970() {
   return (neuron0x2eb9de0()*0.147035);
}

double NNfunction_sb_dRsR::synapse0x2ed79b0() {
   return (neuron0x2eba120()*-0.0744346);
}

double NNfunction_sb_dRsR::synapse0x2ed79f0() {
   return (neuron0x2eba460()*-0.495984);
}

double NNfunction_sb_dRsR::synapse0x2ed7a30() {
   return (neuron0x2eba7a0()*-0.752639);
}

double NNfunction_sb_dRsR::synapse0x2ed7a70() {
   return (neuron0x2ebaae0()*-1.39816);
}

double NNfunction_sb_dRsR::synapse0x2ed7ab0() {
   return (neuron0x2ebae20()*-0.721059);
}

double NNfunction_sb_dRsR::synapse0x2ed7540() {
   return (neuron0x2ebb160()*-0.720556);
}

double NNfunction_sb_dRsR::synapse0x2ed7580() {
   return (neuron0x2ebb6c0()*0.116688);
}

double NNfunction_sb_dRsR::synapse0x2ed7c00() {
   return (neuron0x2ebba00()*0.0197079);
}

double NNfunction_sb_dRsR::synapse0x2ed7c40() {
   return (neuron0x2ebbd40()*0.290942);
}

double NNfunction_sb_dRsR::synapse0x2ed7c80() {
   return (neuron0x2ebc080()*0.195674);
}

double NNfunction_sb_dRsR::synapse0x2ed7cc0() {
   return (neuron0x2ebc3c0()*-0.014633);
}

double NNfunction_sb_dRsR::synapse0x2ed7d00() {
   return (neuron0x2ebc700()*-0.220769);
}

double NNfunction_sb_dRsR::synapse0x2ed7d40() {
   return (neuron0x2ebca40()*-0.441326);
}

double NNfunction_sb_dRsR::synapse0x2ed80c0() {
   return (neuron0x2eb7df0()*-0.435365);
}

double NNfunction_sb_dRsR::synapse0x2ed8100() {
   return (neuron0x2eb80a0()*0.103329);
}

double NNfunction_sb_dRsR::synapse0x2ed8140() {
   return (neuron0x2eb83e0()*-0.263615);
}

double NNfunction_sb_dRsR::synapse0x2ed8180() {
   return (neuron0x2eb8720()*0.262165);
}

double NNfunction_sb_dRsR::synapse0x2ed81c0() {
   return (neuron0x2eb8a60()*-0.675432);
}

double NNfunction_sb_dRsR::synapse0x2ed8200() {
   return (neuron0x2eb8da0()*-0.156654);
}

double NNfunction_sb_dRsR::synapse0x2ed8240() {
   return (neuron0x2eb90e0()*0.537984);
}

double NNfunction_sb_dRsR::synapse0x2ed8280() {
   return (neuron0x2eb9420()*0.32094);
}

double NNfunction_sb_dRsR::synapse0x2ed82c0() {
   return (neuron0x2eb9760()*0.431767);
}

double NNfunction_sb_dRsR::synapse0x2ed8300() {
   return (neuron0x2eb9aa0()*-0.341988);
}

double NNfunction_sb_dRsR::synapse0x2ed8340() {
   return (neuron0x2eb9de0()*0.222894);
}

double NNfunction_sb_dRsR::synapse0x2ed8380() {
   return (neuron0x2eba120()*0.822205);
}

double NNfunction_sb_dRsR::synapse0x2ed83c0() {
   return (neuron0x2eba460()*-0.461615);
}

double NNfunction_sb_dRsR::synapse0x2ed8400() {
   return (neuron0x2eba7a0()*-0.719305);
}

double NNfunction_sb_dRsR::synapse0x2ed8440() {
   return (neuron0x2ebaae0()*0.63195);
}

double NNfunction_sb_dRsR::synapse0x2ed8480() {
   return (neuron0x2ebae20()*0.0843252);
}

double NNfunction_sb_dRsR::synapse0x2ed7f10() {
   return (neuron0x2ebb160()*0.246904);
}

double NNfunction_sb_dRsR::synapse0x2ed7f50() {
   return (neuron0x2ebb6c0()*-0.34123);
}

double NNfunction_sb_dRsR::synapse0x2ed85d0() {
   return (neuron0x2ebba00()*0.553996);
}

double NNfunction_sb_dRsR::synapse0x2ed8610() {
   return (neuron0x2ebbd40()*-0.699407);
}

double NNfunction_sb_dRsR::synapse0x2ed8650() {
   return (neuron0x2ebc080()*0.211617);
}

double NNfunction_sb_dRsR::synapse0x2ed8690() {
   return (neuron0x2ebc3c0()*0.39632);
}

double NNfunction_sb_dRsR::synapse0x2ed86d0() {
   return (neuron0x2ebc700()*-0.218599);
}

double NNfunction_sb_dRsR::synapse0x2ed8710() {
   return (neuron0x2ebca40()*0.209529);
}

double NNfunction_sb_dRsR::synapse0x2ed8a90() {
   return (neuron0x2eb7df0()*-0.0111221);
}

double NNfunction_sb_dRsR::synapse0x2ed8ad0() {
   return (neuron0x2eb80a0()*-0.00167173);
}

double NNfunction_sb_dRsR::synapse0x2ed8b10() {
   return (neuron0x2eb83e0()*0.0125127);
}

double NNfunction_sb_dRsR::synapse0x2ed8b50() {
   return (neuron0x2eb8720()*-3.31722);
}

double NNfunction_sb_dRsR::synapse0x2ed8b90() {
   return (neuron0x2eb8a60()*-0.0611592);
}

double NNfunction_sb_dRsR::synapse0x2ed8bd0() {
   return (neuron0x2eb8da0()*-0.0271272);
}

double NNfunction_sb_dRsR::synapse0x2ed8c10() {
   return (neuron0x2eb90e0()*-0.00612669);
}

double NNfunction_sb_dRsR::synapse0x2ed8c50() {
   return (neuron0x2eb9420()*0.00194254);
}

double NNfunction_sb_dRsR::synapse0x2ed8c90() {
   return (neuron0x2eb9760()*0.017527);
}

double NNfunction_sb_dRsR::synapse0x2ed8cd0() {
   return (neuron0x2eb9aa0()*-0.00255139);
}

double NNfunction_sb_dRsR::synapse0x2ed8d10() {
   return (neuron0x2eb9de0()*0.00163464);
}

double NNfunction_sb_dRsR::synapse0x2ed8d50() {
   return (neuron0x2eba120()*-0.0150341);
}

double NNfunction_sb_dRsR::synapse0x2ed8d90() {
   return (neuron0x2eba460()*-0.0201236);
}

double NNfunction_sb_dRsR::synapse0x2ed8dd0() {
   return (neuron0x2eba7a0()*0.0251235);
}

double NNfunction_sb_dRsR::synapse0x2ed8e10() {
   return (neuron0x2ebaae0()*-0.000383122);
}

double NNfunction_sb_dRsR::synapse0x2ed8e50() {
   return (neuron0x2ebae20()*-0.0402551);
}

double NNfunction_sb_dRsR::synapse0x2ed88e0() {
   return (neuron0x2ebb160()*0.0278929);
}

double NNfunction_sb_dRsR::synapse0x2ed8920() {
   return (neuron0x2ebb6c0()*0.0532919);
}

double NNfunction_sb_dRsR::synapse0x2ed8fa0() {
   return (neuron0x2ebba00()*0.903728);
}

double NNfunction_sb_dRsR::synapse0x2ed8fe0() {
   return (neuron0x2ebbd40()*-0.0031351);
}

double NNfunction_sb_dRsR::synapse0x2ed9020() {
   return (neuron0x2ebc080()*0.0153455);
}

double NNfunction_sb_dRsR::synapse0x2ed9060() {
   return (neuron0x2ebc3c0()*0.0033);
}

double NNfunction_sb_dRsR::synapse0x2ed90a0() {
   return (neuron0x2ebc700()*0.016135);
}

double NNfunction_sb_dRsR::synapse0x2ed90e0() {
   return (neuron0x2ebca40()*0.000868872);
}

double NNfunction_sb_dRsR::synapse0x2ed9460() {
   return (neuron0x2eb7df0()*0.0751489);
}

double NNfunction_sb_dRsR::synapse0x2ed94a0() {
   return (neuron0x2eb80a0()*-0.107037);
}

double NNfunction_sb_dRsR::synapse0x2ed94e0() {
   return (neuron0x2eb83e0()*0.26683);
}

double NNfunction_sb_dRsR::synapse0x2ed9520() {
   return (neuron0x2eb8720()*0.0335703);
}

double NNfunction_sb_dRsR::synapse0x2ed9560() {
   return (neuron0x2eb8a60()*-0.260221);
}

double NNfunction_sb_dRsR::synapse0x2ed95a0() {
   return (neuron0x2eb8da0()*1.07187);
}

double NNfunction_sb_dRsR::synapse0x2ed95e0() {
   return (neuron0x2eb90e0()*0.287193);
}

double NNfunction_sb_dRsR::synapse0x2ed9620() {
   return (neuron0x2eb9420()*-0.617199);
}

double NNfunction_sb_dRsR::synapse0x2ed9660() {
   return (neuron0x2eb9760()*0.22727);
}

double NNfunction_sb_dRsR::synapse0x2ed96a0() {
   return (neuron0x2eb9aa0()*1.07614);
}

double NNfunction_sb_dRsR::synapse0x2ed96e0() {
   return (neuron0x2eb9de0()*0.627739);
}

double NNfunction_sb_dRsR::synapse0x2ed9720() {
   return (neuron0x2eba120()*-0.180748);
}

double NNfunction_sb_dRsR::synapse0x2ed9760() {
   return (neuron0x2eba460()*-1.25274);
}

double NNfunction_sb_dRsR::synapse0x2ed97a0() {
   return (neuron0x2eba7a0()*-0.0355526);
}

double NNfunction_sb_dRsR::synapse0x2ed97e0() {
   return (neuron0x2ebaae0()*-0.44515);
}

double NNfunction_sb_dRsR::synapse0x2ed9820() {
   return (neuron0x2ebae20()*-0.624492);
}

double NNfunction_sb_dRsR::synapse0x2ed92b0() {
   return (neuron0x2ebb160()*-0.0877613);
}

double NNfunction_sb_dRsR::synapse0x2ed92f0() {
   return (neuron0x2ebb6c0()*-0.046881);
}

double NNfunction_sb_dRsR::synapse0x2ed9970() {
   return (neuron0x2ebba00()*-0.757539);
}

double NNfunction_sb_dRsR::synapse0x2ed99b0() {
   return (neuron0x2ebbd40()*-0.926911);
}

double NNfunction_sb_dRsR::synapse0x2ed99f0() {
   return (neuron0x2ebc080()*-0.417185);
}

double NNfunction_sb_dRsR::synapse0x2ed9a30() {
   return (neuron0x2ebc3c0()*-0.985259);
}

double NNfunction_sb_dRsR::synapse0x2ed9a70() {
   return (neuron0x2ebc700()*0.899139);
}

double NNfunction_sb_dRsR::synapse0x2ed9ab0() {
   return (neuron0x2ebca40()*0.103715);
}

double NNfunction_sb_dRsR::synapse0x2ed9e30() {
   return (neuron0x2eb7df0()*-0.0170113);
}

double NNfunction_sb_dRsR::synapse0x2ed9e70() {
   return (neuron0x2eb80a0()*-0.0705129);
}

double NNfunction_sb_dRsR::synapse0x2ed9eb0() {
   return (neuron0x2eb83e0()*0.137006);
}

double NNfunction_sb_dRsR::synapse0x2ed9ef0() {
   return (neuron0x2eb8720()*-0.32584);
}

double NNfunction_sb_dRsR::synapse0x2ed9f30() {
   return (neuron0x2eb8a60()*0.0238269);
}

double NNfunction_sb_dRsR::synapse0x2ed9f70() {
   return (neuron0x2eb8da0()*0.0769359);
}

double NNfunction_sb_dRsR::synapse0x2ed9fb0() {
   return (neuron0x2eb90e0()*-0.0195221);
}

double NNfunction_sb_dRsR::synapse0x2ed9ff0() {
   return (neuron0x2eb9420()*0.0404835);
}

double NNfunction_sb_dRsR::synapse0x2eda030() {
   return (neuron0x2eb9760()*-0.0494119);
}

double NNfunction_sb_dRsR::synapse0x2eda070() {
   return (neuron0x2eb9aa0()*0.0122575);
}

double NNfunction_sb_dRsR::synapse0x2eda0b0() {
   return (neuron0x2eb9de0()*0.026109);
}

double NNfunction_sb_dRsR::synapse0x2eda0f0() {
   return (neuron0x2eba120()*-0.0440828);
}

double NNfunction_sb_dRsR::synapse0x2eda130() {
   return (neuron0x2eba460()*-0.0126273);
}

double NNfunction_sb_dRsR::synapse0x2eda170() {
   return (neuron0x2eba7a0()*-0.00980566);
}

double NNfunction_sb_dRsR::synapse0x2eda1b0() {
   return (neuron0x2ebaae0()*-0.229903);
}

double NNfunction_sb_dRsR::synapse0x2eda1f0() {
   return (neuron0x2ebae20()*-0.0489538);
}

double NNfunction_sb_dRsR::synapse0x2ed9c80() {
   return (neuron0x2ebb160()*-0.143287);
}

double NNfunction_sb_dRsR::synapse0x2ed9cc0() {
   return (neuron0x2ebb6c0()*-1.27247);
}

double NNfunction_sb_dRsR::synapse0x2eda340() {
   return (neuron0x2ebba00()*0.0843037);
}

double NNfunction_sb_dRsR::synapse0x2eda380() {
   return (neuron0x2ebbd40()*0.0908969);
}

double NNfunction_sb_dRsR::synapse0x2eda3c0() {
   return (neuron0x2ebc080()*-0.0467036);
}

double NNfunction_sb_dRsR::synapse0x2eda400() {
   return (neuron0x2ebc3c0()*-0.00767526);
}

double NNfunction_sb_dRsR::synapse0x2eda440() {
   return (neuron0x2ebc700()*-0.046469);
}

double NNfunction_sb_dRsR::synapse0x2eda480() {
   return (neuron0x2ebca40()*0.0304017);
}

double NNfunction_sb_dRsR::synapse0x2ec2f30() {
   return (neuron0x2eb7df0()*0.114809);
}

double NNfunction_sb_dRsR::synapse0x2ec2f70() {
   return (neuron0x2eb80a0()*-0.166509);
}

double NNfunction_sb_dRsR::synapse0x2ec2fb0() {
   return (neuron0x2eb83e0()*-0.056783);
}

double NNfunction_sb_dRsR::synapse0x2ec2ff0() {
   return (neuron0x2eb8720()*-1.29581);
}

double NNfunction_sb_dRsR::synapse0x2ec3030() {
   return (neuron0x2eb8a60()*-0.0834028);
}

double NNfunction_sb_dRsR::synapse0x2ec3070() {
   return (neuron0x2eb8da0()*0.00724095);
}

double NNfunction_sb_dRsR::synapse0x2ec30b0() {
   return (neuron0x2eb90e0()*-0.350914);
}

double NNfunction_sb_dRsR::synapse0x2ec30f0() {
   return (neuron0x2eb9420()*-0.228902);
}

double NNfunction_sb_dRsR::synapse0x2edac10() {
   return (neuron0x2eb9760()*-0.233429);
}

double NNfunction_sb_dRsR::synapse0x2edac50() {
   return (neuron0x2eb9aa0()*0.0637146);
}

double NNfunction_sb_dRsR::synapse0x2edac90() {
   return (neuron0x2eb9de0()*-0.218673);
}

double NNfunction_sb_dRsR::synapse0x2edacd0() {
   return (neuron0x2eba120()*-0.684673);
}

double NNfunction_sb_dRsR::synapse0x2edad10() {
   return (neuron0x2eba460()*0.263165);
}

double NNfunction_sb_dRsR::synapse0x2edad50() {
   return (neuron0x2eba7a0()*0.0605057);
}

double NNfunction_sb_dRsR::synapse0x2edad90() {
   return (neuron0x2ebaae0()*0.106285);
}

double NNfunction_sb_dRsR::synapse0x2edadd0() {
   return (neuron0x2ebae20()*-0.0604815);
}

double NNfunction_sb_dRsR::synapse0x2eda650() {
   return (neuron0x2ebb160()*0.370054);
}

double NNfunction_sb_dRsR::synapse0x2eda690() {
   return (neuron0x2ebb6c0()*-1.5469);
}

double NNfunction_sb_dRsR::synapse0x2edaf20() {
   return (neuron0x2ebba00()*-0.612096);
}

double NNfunction_sb_dRsR::synapse0x2edaf60() {
   return (neuron0x2ebbd40()*-0.311214);
}

double NNfunction_sb_dRsR::synapse0x2edafa0() {
   return (neuron0x2ebc080()*0.454542);
}

double NNfunction_sb_dRsR::synapse0x2edafe0() {
   return (neuron0x2ebc3c0()*-0.0748668);
}

double NNfunction_sb_dRsR::synapse0x2edb020() {
   return (neuron0x2ebc700()*0.153638);
}

double NNfunction_sb_dRsR::synapse0x2edb060() {
   return (neuron0x2ebca40()*-0.275762);
}

double NNfunction_sb_dRsR::synapse0x2edb3e0() {
   return (neuron0x2eb7df0()*0.00377796);
}

double NNfunction_sb_dRsR::synapse0x2edb420() {
   return (neuron0x2eb80a0()*0.00266383);
}

double NNfunction_sb_dRsR::synapse0x2edb460() {
   return (neuron0x2eb83e0()*0.0171143);
}

double NNfunction_sb_dRsR::synapse0x2edb4a0() {
   return (neuron0x2eb8720()*-5.76648);
}

double NNfunction_sb_dRsR::synapse0x2edb4e0() {
   return (neuron0x2eb8a60()*0.0318162);
}

double NNfunction_sb_dRsR::synapse0x2edb520() {
   return (neuron0x2eb8da0()*0.0255929);
}

double NNfunction_sb_dRsR::synapse0x2edb560() {
   return (neuron0x2eb90e0()*-0.000715988);
}

double NNfunction_sb_dRsR::synapse0x2edb5a0() {
   return (neuron0x2eb9420()*0.00510398);
}

double NNfunction_sb_dRsR::synapse0x2edb5e0() {
   return (neuron0x2eb9760()*-0.0094919);
}

double NNfunction_sb_dRsR::synapse0x2edb620() {
   return (neuron0x2eb9aa0()*-0.0160693);
}

double NNfunction_sb_dRsR::synapse0x2edb660() {
   return (neuron0x2eb9de0()*0.0156461);
}

double NNfunction_sb_dRsR::synapse0x2edb6a0() {
   return (neuron0x2eba120()*0.0170696);
}

double NNfunction_sb_dRsR::synapse0x2edb6e0() {
   return (neuron0x2eba460()*-0.00068954);
}

double NNfunction_sb_dRsR::synapse0x2edb720() {
   return (neuron0x2eba7a0()*-0.0167679);
}

double NNfunction_sb_dRsR::synapse0x2edb760() {
   return (neuron0x2ebaae0()*0.00163538);
}

double NNfunction_sb_dRsR::synapse0x2edb7a0() {
   return (neuron0x2ebae20()*0.00385664);
}

double NNfunction_sb_dRsR::synapse0x2edb230() {
   return (neuron0x2ebb160()*-0.0560747);
}

double NNfunction_sb_dRsR::synapse0x2edb270() {
   return (neuron0x2ebb6c0()*0.41337);
}

double NNfunction_sb_dRsR::synapse0x2edb8f0() {
   return (neuron0x2ebba00()*0.345238);
}

double NNfunction_sb_dRsR::synapse0x2edb930() {
   return (neuron0x2ebbd40()*0.0131662);
}

double NNfunction_sb_dRsR::synapse0x2edb970() {
   return (neuron0x2ebc080()*0.0157044);
}

double NNfunction_sb_dRsR::synapse0x2edb9b0() {
   return (neuron0x2ebc3c0()*0.0138023);
}

double NNfunction_sb_dRsR::synapse0x2edb9f0() {
   return (neuron0x2ebc700()*0.00969422);
}

double NNfunction_sb_dRsR::synapse0x2edba30() {
   return (neuron0x2ebca40()*0.00961579);
}

double NNfunction_sb_dRsR::synapse0x2edbdb0() {
   return (neuron0x2eb7df0()*-0.0658851);
}

double NNfunction_sb_dRsR::synapse0x2edbdf0() {
   return (neuron0x2eb80a0()*-0.0282817);
}

double NNfunction_sb_dRsR::synapse0x2edbe30() {
   return (neuron0x2eb83e0()*-0.0802015);
}

double NNfunction_sb_dRsR::synapse0x2edbe70() {
   return (neuron0x2eb8720()*2.08517);
}

double NNfunction_sb_dRsR::synapse0x2edbeb0() {
   return (neuron0x2eb8a60()*-0.042775);
}

double NNfunction_sb_dRsR::synapse0x2edbef0() {
   return (neuron0x2eb8da0()*0.0576802);
}

double NNfunction_sb_dRsR::synapse0x2edbf30() {
   return (neuron0x2eb90e0()*-0.0267233);
}

double NNfunction_sb_dRsR::synapse0x2edbf70() {
   return (neuron0x2eb9420()*-0.0347471);
}

double NNfunction_sb_dRsR::synapse0x2edbfb0() {
   return (neuron0x2eb9760()*0.00983926);
}

double NNfunction_sb_dRsR::synapse0x2edbff0() {
   return (neuron0x2eb9aa0()*0.0517185);
}

double NNfunction_sb_dRsR::synapse0x2edc030() {
   return (neuron0x2eb9de0()*0.00206395);
}

double NNfunction_sb_dRsR::synapse0x2edc070() {
   return (neuron0x2eba120()*-0.0809594);
}

double NNfunction_sb_dRsR::synapse0x2edc0b0() {
   return (neuron0x2eba460()*-0.0144829);
}

double NNfunction_sb_dRsR::synapse0x2edc0f0() {
   return (neuron0x2eba7a0()*-0.0183449);
}

double NNfunction_sb_dRsR::synapse0x2edc130() {
   return (neuron0x2ebaae0()*-0.0881009);
}

double NNfunction_sb_dRsR::synapse0x2edc170() {
   return (neuron0x2ebae20()*-0.073723);
}

double NNfunction_sb_dRsR::synapse0x2edbc00() {
   return (neuron0x2ebb160()*0.126353);
}

double NNfunction_sb_dRsR::synapse0x2edbc40() {
   return (neuron0x2ebb6c0()*0.388714);
}

double NNfunction_sb_dRsR::synapse0x2ecc770() {
   return (neuron0x2ebba00()*0.643939);
}

double NNfunction_sb_dRsR::synapse0x2ecc7b0() {
   return (neuron0x2ebbd40()*-0.0230731);
}

double NNfunction_sb_dRsR::synapse0x2ecc7f0() {
   return (neuron0x2ebc080()*0.0386642);
}

double NNfunction_sb_dRsR::synapse0x2ecc830() {
   return (neuron0x2ebc3c0()*-0.0172805);
}

double NNfunction_sb_dRsR::synapse0x2ecc870() {
   return (neuron0x2ebc700()*0.0166689);
}

double NNfunction_sb_dRsR::synapse0x2ecc8b0() {
   return (neuron0x2ebca40()*-0.117627);
}

double NNfunction_sb_dRsR::synapse0x2eccc30() {
   return (neuron0x2eb7df0()*0.169166);
}

double NNfunction_sb_dRsR::synapse0x2eccc70() {
   return (neuron0x2eb80a0()*0.459542);
}

double NNfunction_sb_dRsR::synapse0x2ecccb0() {
   return (neuron0x2eb83e0()*-0.164866);
}

double NNfunction_sb_dRsR::synapse0x2ecccf0() {
   return (neuron0x2eb8720()*0.00844213);
}

double NNfunction_sb_dRsR::synapse0x2eccd30() {
   return (neuron0x2eb8a60()*0.280962);
}

double NNfunction_sb_dRsR::synapse0x2eccd70() {
   return (neuron0x2eb8da0()*-0.380651);
}

double NNfunction_sb_dRsR::synapse0x2eccdb0() {
   return (neuron0x2eb90e0()*-1.01484);
}

double NNfunction_sb_dRsR::synapse0x2eccdf0() {
   return (neuron0x2eb9420()*-0.773918);
}

double NNfunction_sb_dRsR::synapse0x2ecce30() {
   return (neuron0x2eb9760()*0.872915);
}

double NNfunction_sb_dRsR::synapse0x2ecce70() {
   return (neuron0x2eb9aa0()*0.124326);
}

double NNfunction_sb_dRsR::synapse0x2ecceb0() {
   return (neuron0x2eb9de0()*0.775977);
}

double NNfunction_sb_dRsR::synapse0x2eccef0() {
   return (neuron0x2eba120()*-0.536816);
}

double NNfunction_sb_dRsR::synapse0x2eccf30() {
   return (neuron0x2eba460()*-0.176604);
}

double NNfunction_sb_dRsR::synapse0x2eccf70() {
   return (neuron0x2eba7a0()*-0.0781852);
}

double NNfunction_sb_dRsR::synapse0x2eccfb0() {
   return (neuron0x2ebaae0()*0.0671919);
}

double NNfunction_sb_dRsR::synapse0x2eccff0() {
   return (neuron0x2ebae20()*0.183947);
}

double NNfunction_sb_dRsR::synapse0x2ecca80() {
   return (neuron0x2ebb160()*-1.27459);
}

double NNfunction_sb_dRsR::synapse0x2eccac0() {
   return (neuron0x2ebb6c0()*0.0526879);
}

double NNfunction_sb_dRsR::synapse0x2ecd140() {
   return (neuron0x2ebba00()*0.965238);
}

double NNfunction_sb_dRsR::synapse0x2ecd180() {
   return (neuron0x2ebbd40()*0.456943);
}

double NNfunction_sb_dRsR::synapse0x2ecd1c0() {
   return (neuron0x2ebc080()*-0.0228573);
}

double NNfunction_sb_dRsR::synapse0x2ecd200() {
   return (neuron0x2ebc3c0()*-0.318011);
}

double NNfunction_sb_dRsR::synapse0x2ecd240() {
   return (neuron0x2ebc700()*1.25998);
}

double NNfunction_sb_dRsR::synapse0x2ecd280() {
   return (neuron0x2ebca40()*-0.704448);
}

double NNfunction_sb_dRsR::synapse0x2ecd600() {
   return (neuron0x2eb7df0()*-0.182688);
}

double NNfunction_sb_dRsR::synapse0x2ecd640() {
   return (neuron0x2eb80a0()*0.131562);
}

double NNfunction_sb_dRsR::synapse0x2ecd680() {
   return (neuron0x2eb83e0()*0.572917);
}

double NNfunction_sb_dRsR::synapse0x2ecd6c0() {
   return (neuron0x2eb8720()*-1.0342);
}

double NNfunction_sb_dRsR::synapse0x2ecd700() {
   return (neuron0x2eb8a60()*-0.654758);
}

double NNfunction_sb_dRsR::synapse0x2ecd740() {
   return (neuron0x2eb8da0()*0.147111);
}

double NNfunction_sb_dRsR::synapse0x2ecd780() {
   return (neuron0x2eb90e0()*-0.284436);
}

double NNfunction_sb_dRsR::synapse0x2ecd7c0() {
   return (neuron0x2eb9420()*0.123094);
}

double NNfunction_sb_dRsR::synapse0x2ecd800() {
   return (neuron0x2eb9760()*0.747676);
}

double NNfunction_sb_dRsR::synapse0x2ecd840() {
   return (neuron0x2eb9aa0()*0.0644336);
}

double NNfunction_sb_dRsR::synapse0x2ecd880() {
   return (neuron0x2eb9de0()*0.386764);
}

double NNfunction_sb_dRsR::synapse0x2ecd8c0() {
   return (neuron0x2eba120()*0.473101);
}

double NNfunction_sb_dRsR::synapse0x2ecd900() {
   return (neuron0x2eba460()*0.824537);
}

double NNfunction_sb_dRsR::synapse0x2ecd940() {
   return (neuron0x2eba7a0()*0.297179);
}

double NNfunction_sb_dRsR::synapse0x2ecd980() {
   return (neuron0x2ebaae0()*0.674568);
}

double NNfunction_sb_dRsR::synapse0x2ecd9c0() {
   return (neuron0x2ebae20()*0.736891);
}

double NNfunction_sb_dRsR::synapse0x2ecd450() {
   return (neuron0x2ebb160()*0.150475);
}

double NNfunction_sb_dRsR::synapse0x2ecd490() {
   return (neuron0x2ebb6c0()*-0.271621);
}

double NNfunction_sb_dRsR::synapse0x2ecdb10() {
   return (neuron0x2ebba00()*0.137527);
}

double NNfunction_sb_dRsR::synapse0x2ecdb50() {
   return (neuron0x2ebbd40()*-0.346255);
}

double NNfunction_sb_dRsR::synapse0x2ecdb90() {
   return (neuron0x2ebc080()*-0.565218);
}

double NNfunction_sb_dRsR::synapse0x2ecdbd0() {
   return (neuron0x2ebc3c0()*-0.685288);
}

double NNfunction_sb_dRsR::synapse0x2ecdc10() {
   return (neuron0x2ebc700()*-1.56052);
}

double NNfunction_sb_dRsR::synapse0x2ecdc50() {
   return (neuron0x2ebca40()*0.973856);
}

double NNfunction_sb_dRsR::synapse0x2ecdfd0() {
   return (neuron0x2eb7df0()*-0.104648);
}

double NNfunction_sb_dRsR::synapse0x2ece010() {
   return (neuron0x2eb80a0()*0.619047);
}

double NNfunction_sb_dRsR::synapse0x2ece050() {
   return (neuron0x2eb83e0()*0.0495164);
}

double NNfunction_sb_dRsR::synapse0x2ece090() {
   return (neuron0x2eb8720()*-0.117963);
}

double NNfunction_sb_dRsR::synapse0x2ece0d0() {
   return (neuron0x2eb8a60()*0.233324);
}

double NNfunction_sb_dRsR::synapse0x2ece110() {
   return (neuron0x2eb8da0()*-0.00586084);
}

double NNfunction_sb_dRsR::synapse0x2ece150() {
   return (neuron0x2eb90e0()*0.0278629);
}

double NNfunction_sb_dRsR::synapse0x2ece190() {
   return (neuron0x2eb9420()*-0.395751);
}

double NNfunction_sb_dRsR::synapse0x2ece1d0() {
   return (neuron0x2eb9760()*-0.526371);
}

double NNfunction_sb_dRsR::synapse0x2ece210() {
   return (neuron0x2eb9aa0()*0.394915);
}

double NNfunction_sb_dRsR::synapse0x2ece250() {
   return (neuron0x2eb9de0()*-0.641371);
}

double NNfunction_sb_dRsR::synapse0x2ece290() {
   return (neuron0x2eba120()*-0.739113);
}

double NNfunction_sb_dRsR::synapse0x2ece2d0() {
   return (neuron0x2eba460()*-0.37703);
}

double NNfunction_sb_dRsR::synapse0x2ece310() {
   return (neuron0x2eba7a0()*-1.44867);
}

double NNfunction_sb_dRsR::synapse0x2ece350() {
   return (neuron0x2ebaae0()*-0.871167);
}

double NNfunction_sb_dRsR::synapse0x2ece390() {
   return (neuron0x2ebae20()*-0.683929);
}

double NNfunction_sb_dRsR::synapse0x2ecde20() {
   return (neuron0x2ebb160()*-0.466834);
}

double NNfunction_sb_dRsR::synapse0x2ecde60() {
   return (neuron0x2ebb6c0()*0.617734);
}

double NNfunction_sb_dRsR::synapse0x2ece4e0() {
   return (neuron0x2ebba00()*-0.305682);
}

double NNfunction_sb_dRsR::synapse0x2ece520() {
   return (neuron0x2ebbd40()*-0.094592);
}

double NNfunction_sb_dRsR::synapse0x2ece560() {
   return (neuron0x2ebc080()*1.02281);
}

double NNfunction_sb_dRsR::synapse0x2ece5a0() {
   return (neuron0x2ebc3c0()*0.956251);
}

double NNfunction_sb_dRsR::synapse0x2ece5e0() {
   return (neuron0x2ebc700()*0.250605);
}

double NNfunction_sb_dRsR::synapse0x2ece620() {
   return (neuron0x2ebca40()*0.366673);
}

double NNfunction_sb_dRsR::synapse0x2ee04f0() {
   return (neuron0x2eb7df0()*-0.0378445);
}

double NNfunction_sb_dRsR::synapse0x2ee0530() {
   return (neuron0x2eb80a0()*0.00221447);
}

double NNfunction_sb_dRsR::synapse0x2ee0570() {
   return (neuron0x2eb83e0()*-0.0146395);
}

double NNfunction_sb_dRsR::synapse0x2ee05b0() {
   return (neuron0x2eb8720()*0.269329);
}

double NNfunction_sb_dRsR::synapse0x2ee05f0() {
   return (neuron0x2eb8a60()*0.00631763);
}

double NNfunction_sb_dRsR::synapse0x2ee0630() {
   return (neuron0x2eb8da0()*-0.003947);
}

double NNfunction_sb_dRsR::synapse0x2ee0670() {
   return (neuron0x2eb90e0()*-0.00127102);
}

double NNfunction_sb_dRsR::synapse0x2ee06b0() {
   return (neuron0x2eb9420()*0.00651319);
}

double NNfunction_sb_dRsR::synapse0x2ee06f0() {
   return (neuron0x2eb9760()*0.00402539);
}

double NNfunction_sb_dRsR::synapse0x2ee0730() {
   return (neuron0x2eb9aa0()*-0.00310637);
}

double NNfunction_sb_dRsR::synapse0x2ee0770() {
   return (neuron0x2eb9de0()*0.00085216);
}

double NNfunction_sb_dRsR::synapse0x2ee07b0() {
   return (neuron0x2eba120()*0.0162945);
}

double NNfunction_sb_dRsR::synapse0x2ee07f0() {
   return (neuron0x2eba460()*0.0288576);
}

double NNfunction_sb_dRsR::synapse0x2ee0830() {
   return (neuron0x2eba7a0()*0.00269181);
}

double NNfunction_sb_dRsR::synapse0x2ee0870() {
   return (neuron0x2ebaae0()*0.0189154);
}

double NNfunction_sb_dRsR::synapse0x2ee08b0() {
   return (neuron0x2ebae20()*0.0145632);
}

double NNfunction_sb_dRsR::synapse0x2ece660() {
   return (neuron0x2ebb160()*-0.00568209);
}

double NNfunction_sb_dRsR::synapse0x2ece6a0() {
   return (neuron0x2ebb6c0()*0.343045);
}

double NNfunction_sb_dRsR::synapse0x2ee0a00() {
   return (neuron0x2ebba00()*-1.53904);
}

double NNfunction_sb_dRsR::synapse0x2ee0a40() {
   return (neuron0x2ebbd40()*-0.0133996);
}

double NNfunction_sb_dRsR::synapse0x2ee0a80() {
   return (neuron0x2ebc080()*0.00580667);
}

double NNfunction_sb_dRsR::synapse0x2ee0ac0() {
   return (neuron0x2ebc3c0()*0.00909788);
}

double NNfunction_sb_dRsR::synapse0x2ee0b00() {
   return (neuron0x2ebc700()*-0.004832);
}

double NNfunction_sb_dRsR::synapse0x2ee0b40() {
   return (neuron0x2ebca40()*0.0159477);
}

double NNfunction_sb_dRsR::synapse0x2ee0ec0() {
   return (neuron0x2eb7df0()*0.0051971);
}

double NNfunction_sb_dRsR::synapse0x2ee0f00() {
   return (neuron0x2eb80a0()*0.0186745);
}

double NNfunction_sb_dRsR::synapse0x2ee0f40() {
   return (neuron0x2eb83e0()*-0.0244776);
}

double NNfunction_sb_dRsR::synapse0x2ee0f80() {
   return (neuron0x2eb8720()*7.82982);
}

double NNfunction_sb_dRsR::synapse0x2ee0fc0() {
   return (neuron0x2eb8a60()*-0.0090924);
}

double NNfunction_sb_dRsR::synapse0x2ee1000() {
   return (neuron0x2eb8da0()*-0.0077164);
}

double NNfunction_sb_dRsR::synapse0x2ee1040() {
   return (neuron0x2eb90e0()*-0.00307155);
}

double NNfunction_sb_dRsR::synapse0x2ee1080() {
   return (neuron0x2eb9420()*0.0208209);
}

double NNfunction_sb_dRsR::synapse0x2ee10c0() {
   return (neuron0x2eb9760()*-0.00520693);
}

double NNfunction_sb_dRsR::synapse0x2ee1100() {
   return (neuron0x2eb9aa0()*0.00457132);
}

double NNfunction_sb_dRsR::synapse0x2ee1140() {
   return (neuron0x2eb9de0()*-0.0145671);
}

double NNfunction_sb_dRsR::synapse0x2ee1180() {
   return (neuron0x2eba120()*0.00640924);
}

double NNfunction_sb_dRsR::synapse0x2ee11c0() {
   return (neuron0x2eba460()*0.0239867);
}

double NNfunction_sb_dRsR::synapse0x2ee1200() {
   return (neuron0x2eba7a0()*0.00803448);
}

double NNfunction_sb_dRsR::synapse0x2ee1240() {
   return (neuron0x2ebaae0()*-0.0122348);
}

double NNfunction_sb_dRsR::synapse0x2ee1280() {
   return (neuron0x2ebae20()*0.00743194);
}

double NNfunction_sb_dRsR::synapse0x2ee0d10() {
   return (neuron0x2ebb160()*-0.0118525);
}

double NNfunction_sb_dRsR::synapse0x2ee0d50() {
   return (neuron0x2ebb6c0()*0.0900203);
}

double NNfunction_sb_dRsR::synapse0x2ee13d0() {
   return (neuron0x2ebba00()*0.0525046);
}

double NNfunction_sb_dRsR::synapse0x2ee1410() {
   return (neuron0x2ebbd40()*0.0283663);
}

double NNfunction_sb_dRsR::synapse0x2ee1450() {
   return (neuron0x2ebc080()*-0.0243363);
}

double NNfunction_sb_dRsR::synapse0x2ee1490() {
   return (neuron0x2ebc3c0()*0.00168387);
}

double NNfunction_sb_dRsR::synapse0x2ee14d0() {
   return (neuron0x2ebc700()*-0.0130919);
}

double NNfunction_sb_dRsR::synapse0x2ee1510() {
   return (neuron0x2ebca40()*0.0189577);
}

double NNfunction_sb_dRsR::synapse0x2ee1890() {
   return (neuron0x2eb7df0()*-0.2601);
}

double NNfunction_sb_dRsR::synapse0x2ee18d0() {
   return (neuron0x2eb80a0()*-0.279782);
}

double NNfunction_sb_dRsR::synapse0x2ee1910() {
   return (neuron0x2eb83e0()*0.726146);
}

double NNfunction_sb_dRsR::synapse0x2ee1950() {
   return (neuron0x2eb8720()*0.103334);
}

double NNfunction_sb_dRsR::synapse0x2ee1990() {
   return (neuron0x2eb8a60()*0.352042);
}

double NNfunction_sb_dRsR::synapse0x2ee19d0() {
   return (neuron0x2eb8da0()*-0.245549);
}

double NNfunction_sb_dRsR::synapse0x2ee1a10() {
   return (neuron0x2eb90e0()*0.343982);
}

double NNfunction_sb_dRsR::synapse0x2ee1a50() {
   return (neuron0x2eb9420()*-0.392453);
}

double NNfunction_sb_dRsR::synapse0x2ee1a90() {
   return (neuron0x2eb9760()*-0.930814);
}

double NNfunction_sb_dRsR::synapse0x2ee1ad0() {
   return (neuron0x2eb9aa0()*-0.619683);
}

double NNfunction_sb_dRsR::synapse0x2ee1b10() {
   return (neuron0x2eb9de0()*0.0420352);
}

double NNfunction_sb_dRsR::synapse0x2ee1b50() {
   return (neuron0x2eba120()*0.409181);
}

double NNfunction_sb_dRsR::synapse0x2ee1b90() {
   return (neuron0x2eba460()*-0.0136642);
}

double NNfunction_sb_dRsR::synapse0x2ee1bd0() {
   return (neuron0x2eba7a0()*0.38422);
}

double NNfunction_sb_dRsR::synapse0x2ee1c10() {
   return (neuron0x2ebaae0()*-0.540251);
}

double NNfunction_sb_dRsR::synapse0x2ee1c50() {
   return (neuron0x2ebae20()*1.01824);
}

double NNfunction_sb_dRsR::synapse0x2ee16e0() {
   return (neuron0x2ebb160()*-0.145997);
}

double NNfunction_sb_dRsR::synapse0x2ee1720() {
   return (neuron0x2ebb6c0()*-0.140218);
}

double NNfunction_sb_dRsR::synapse0x2ee1da0() {
   return (neuron0x2ebba00()*0.223286);
}

double NNfunction_sb_dRsR::synapse0x2ee1de0() {
   return (neuron0x2ebbd40()*-0.198672);
}

double NNfunction_sb_dRsR::synapse0x2ee1e20() {
   return (neuron0x2ebc080()*0.918155);
}

double NNfunction_sb_dRsR::synapse0x2ee1e60() {
   return (neuron0x2ebc3c0()*-0.207435);
}

double NNfunction_sb_dRsR::synapse0x2ee1ea0() {
   return (neuron0x2ebc700()*-0.164132);
}

double NNfunction_sb_dRsR::synapse0x2ee1ee0() {
   return (neuron0x2ebca40()*-0.275189);
}

double NNfunction_sb_dRsR::synapse0x2ee2260() {
   return (neuron0x2eb7df0()*-0.00652706);
}

double NNfunction_sb_dRsR::synapse0x2ee22a0() {
   return (neuron0x2eb80a0()*-0.006397);
}

double NNfunction_sb_dRsR::synapse0x2ee22e0() {
   return (neuron0x2eb83e0()*-0.0149833);
}

double NNfunction_sb_dRsR::synapse0x2ee2320() {
   return (neuron0x2eb8720()*-2.39264);
}

double NNfunction_sb_dRsR::synapse0x2ee2360() {
   return (neuron0x2eb8a60()*-0.0153741);
}

double NNfunction_sb_dRsR::synapse0x2ee23a0() {
   return (neuron0x2eb8da0()*-0.0169824);
}

double NNfunction_sb_dRsR::synapse0x2ee23e0() {
   return (neuron0x2eb90e0()*-0.00366176);
}

double NNfunction_sb_dRsR::synapse0x2ee2420() {
   return (neuron0x2eb9420()*-0.0147882);
}

double NNfunction_sb_dRsR::synapse0x2ee2460() {
   return (neuron0x2eb9760()*0.0010034);
}

double NNfunction_sb_dRsR::synapse0x2ee24a0() {
   return (neuron0x2eb9aa0()*-0.00364192);
}

double NNfunction_sb_dRsR::synapse0x2ee24e0() {
   return (neuron0x2eb9de0()*-0.00701116);
}

double NNfunction_sb_dRsR::synapse0x2ee2520() {
   return (neuron0x2eba120()*-0.0323742);
}

double NNfunction_sb_dRsR::synapse0x2ee2560() {
   return (neuron0x2eba460()*-0.0119035);
}

double NNfunction_sb_dRsR::synapse0x2ee25a0() {
   return (neuron0x2eba7a0()*0.0173588);
}

double NNfunction_sb_dRsR::synapse0x2ee25e0() {
   return (neuron0x2ebaae0()*-0.0142491);
}

double NNfunction_sb_dRsR::synapse0x2ee2620() {
   return (neuron0x2ebae20()*-0.0173318);
}

double NNfunction_sb_dRsR::synapse0x2ee20b0() {
   return (neuron0x2ebb160()*0.0339955);
}

double NNfunction_sb_dRsR::synapse0x2ee20f0() {
   return (neuron0x2ebb6c0()*0.54314);
}

double NNfunction_sb_dRsR::synapse0x2ee2770() {
   return (neuron0x2ebba00()*0.0884767);
}

double NNfunction_sb_dRsR::synapse0x2ee27b0() {
   return (neuron0x2ebbd40()*-0.0188643);
}

double NNfunction_sb_dRsR::synapse0x2ee27f0() {
   return (neuron0x2ebc080()*-0.0197981);
}

double NNfunction_sb_dRsR::synapse0x2ee2830() {
   return (neuron0x2ebc3c0()*-0.00259589);
}

double NNfunction_sb_dRsR::synapse0x2ee2870() {
   return (neuron0x2ebc700()*0.0117257);
}

double NNfunction_sb_dRsR::synapse0x2ee28b0() {
   return (neuron0x2ebca40()*-0.00974951);
}

double NNfunction_sb_dRsR::synapse0x2c82720() {
   return (neuron0x2ebceb0()*0.0133215);
}

double NNfunction_sb_dRsR::synapse0x2c82760() {
   return (neuron0x2ebd6f0()*-0.0306278);
}

double NNfunction_sb_dRsR::synapse0x2ebf260() {
   return (neuron0x2ebe1d0()*0.0426668);
}

double NNfunction_sb_dRsR::synapse0x2ebf2a0() {
   return (neuron0x2ebdc70()*0.0938498);
}

double NNfunction_sb_dRsR::synapse0x2ec0d30() {
   return (neuron0x2ebefb0()*-0.707042);
}

double NNfunction_sb_dRsR::synapse0x2ec0d70() {
   return (neuron0x2ec0a80()*0.051033);
}

double NNfunction_sb_dRsR::synapse0x2ec1b00() {
   return (neuron0x2ec1850()*0.0202194);
}

double NNfunction_sb_dRsR::synapse0x2ec1b40() {
   return (neuron0x2ec2220()*0.0335121);
}

double NNfunction_sb_dRsR::synapse0x2ec24d0() {
   return (neuron0x2ec2bf0()*-0.0453931);
}

double NNfunction_sb_dRsR::synapse0x2ec2510() {
   return (neuron0x2ec36d0()*0.0759548);
}

double NNfunction_sb_dRsR::synapse0x2ec2ea0() {
   return (neuron0x2ec40a0()*-0.0928936);
}

double NNfunction_sb_dRsR::synapse0x2ec2ee0() {
   return (neuron0x2ec1180()*-0.0507408);
}

double NNfunction_sb_dRsR::synapse0x2ec3980() {
   return (neuron0x2ec5c50()*-0.00740373);
}

double NNfunction_sb_dRsR::synapse0x2ec39c0() {
   return (neuron0x2ec6620()*0.0383218);
}

double NNfunction_sb_dRsR::synapse0x2ec4350() {
   return (neuron0x2ec6ff0()*-1.36729);
}

double NNfunction_sb_dRsR::synapse0x2ec4390() {
   return (neuron0x2ec79c0()*-0.014928);
}

double NNfunction_sb_dRsR::synapse0x2ec1430() {
   return (neuron0x2ec97d0()*-0.2335);
}

double NNfunction_sb_dRsR::synapse0x2ec1470() {
   return (neuron0x2ec9ab0()*0.0205808);
}

double NNfunction_sb_dRsR::synapse0x2ec5f00() {
   return (neuron0x2eca480()*-0.00241445);
}

double NNfunction_sb_dRsR::synapse0x2ec5f40() {
   return (neuron0x2ecae50()*-0.00348426);
}

double NNfunction_sb_dRsR::synapse0x2ec68d0() {
   return (neuron0x2ecb820()*1.82235);
}

double NNfunction_sb_dRsR::synapse0x2ec6910() {
   return (neuron0x2ecc1f0()*-3.20451);
}

double NNfunction_sb_dRsR::synapse0x2ec72a0() {
   return (neuron0x2ec4d40()*0.000485591);
}

double NNfunction_sb_dRsR::synapse0x2ec72e0() {
   return (neuron0x2ec5710()*1.46597);
}

double NNfunction_sb_dRsR::synapse0x2ec7c70() {
   return (neuron0x2ecef80()*-0.193636);
}

double NNfunction_sb_dRsR::synapse0x2ec7cb0() {
   return (neuron0x2ecf950()*0.0120665);
}

double NNfunction_sb_dRsR::synapse0x2ebad00() {
   return (neuron0x2ed0320()*-0.0597923);
}

double NNfunction_sb_dRsR::synapse0x2ebad40() {
   return (neuron0x2ed0cf0()*0.00427291);
}

double NNfunction_sb_dRsR::synapse0x2ec9d60() {
   return (neuron0x2ed16c0()*-0.0127342);
}

double NNfunction_sb_dRsR::synapse0x2ec9da0() {
   return (neuron0x2ed2090()*0.00150996);
}

double NNfunction_sb_dRsR::synapse0x2eca730() {
   return (neuron0x2ed2a60()*0.799144);
}

double NNfunction_sb_dRsR::synapse0x2eca770() {
   return (neuron0x2ed3430()*-0.0186019);
}

double NNfunction_sb_dRsR::synapse0x2ecb100() {
   return (neuron0x2ec94c0()*0.0600359);
}

double NNfunction_sb_dRsR::synapse0x2ecb140() {
   return (neuron0x2ed6010()*-0.057487);
}

double NNfunction_sb_dRsR::synapse0x2ecbad0() {
   return (neuron0x2ed69e0()*0.0116129);
}

double NNfunction_sb_dRsR::synapse0x2ecbb10() {
   return (neuron0x2ed73b0()*-0.00616424);
}

double NNfunction_sb_dRsR::synapse0x2ecc4a0() {
   return (neuron0x2ed7d80()*-0.0255412);
}

double NNfunction_sb_dRsR::synapse0x2ecc4e0() {
   return (neuron0x2ed8750()*1.74972);
}

double NNfunction_sb_dRsR::synapse0x2ec4ff0() {
   return (neuron0x2ed9120()*0.0467555);
}

double NNfunction_sb_dRsR::synapse0x2ec5030() {
   return (neuron0x2ed9af0()*-0.722513);
}

double NNfunction_sb_dRsR::synapse0x2ece8a0() {
   return (neuron0x2eda4c0()*-0.157324);
}

double NNfunction_sb_dRsR::synapse0x2ece8e0() {
   return (neuron0x2edb0a0()*1.04298);
}

double NNfunction_sb_dRsR::synapse0x2ecf230() {
   return (neuron0x2edba70()*-0.834376);
}

double NNfunction_sb_dRsR::synapse0x2ecf270() {
   return (neuron0x2ecc8f0()*-0.0534175);
}

double NNfunction_sb_dRsR::synapse0x2ecfc00() {
   return (neuron0x2ecd2c0()*-0.00444418);
}

double NNfunction_sb_dRsR::synapse0x2ecfc40() {
   return (neuron0x2ecdc90()*-0.0182885);
}

double NNfunction_sb_dRsR::synapse0x2ed05d0() {
   return (neuron0x2ee02d0()*-0.055072);
}

double NNfunction_sb_dRsR::synapse0x2ed0610() {
   return (neuron0x2ee0b80()*0.59116);
}

double NNfunction_sb_dRsR::synapse0x2ed0fa0() {
   return (neuron0x2ee1550()*0.0180716);
}

double NNfunction_sb_dRsR::synapse0x2ed0fe0() {
   return (neuron0x2ee1f20()*1.89504);
}

double NNfunction_sb_dRsR::synapse0x2ed36e0() {
   return (neuron0x2ebceb0()*-0.0196108);
}

double NNfunction_sb_dRsR::synapse0x2ed3720() {
   return (neuron0x2ebd6f0()*-0.0814984);
}

double NNfunction_sb_dRsR::synapse0x2ec8ca0() {
   return (neuron0x2ebe1d0()*0.0253355);
}

double NNfunction_sb_dRsR::synapse0x2ec8ce0() {
   return (neuron0x2ebdc70()*0.241567);
}

double NNfunction_sb_dRsR::synapse0x2ed62c0() {
   return (neuron0x2ebefb0()*-0.321142);
}

double NNfunction_sb_dRsR::synapse0x2ed6300() {
   return (neuron0x2ec0a80()*0.0650055);
}

double NNfunction_sb_dRsR::synapse0x2ed6c90() {
   return (neuron0x2ec1850()*0.0452348);
}

double NNfunction_sb_dRsR::synapse0x2ed6cd0() {
   return (neuron0x2ec2220()*-0.00975318);
}

double NNfunction_sb_dRsR::synapse0x2ed7660() {
   return (neuron0x2ec2bf0()*-0.116661);
}

double NNfunction_sb_dRsR::synapse0x2ed76a0() {
   return (neuron0x2ec36d0()*0.215434);
}

double NNfunction_sb_dRsR::synapse0x2ed8030() {
   return (neuron0x2ec40a0()*-0.181312);
}

double NNfunction_sb_dRsR::synapse0x2ed8070() {
   return (neuron0x2ec1180()*-0.0842655);
}

double NNfunction_sb_dRsR::synapse0x2ed8a00() {
   return (neuron0x2ec5c50()*-0.0460511);
}

double NNfunction_sb_dRsR::synapse0x2ed8a40() {
   return (neuron0x2ec6620()*0.106252);
}

double NNfunction_sb_dRsR::synapse0x2ed93d0() {
   return (neuron0x2ec6ff0()*-1.19614);
}

double NNfunction_sb_dRsR::synapse0x2ed9410() {
   return (neuron0x2ec79c0()*-0.124166);
}

double NNfunction_sb_dRsR::synapse0x2ed9da0() {
   return (neuron0x2ec97d0()*1.26215);
}

double NNfunction_sb_dRsR::synapse0x2ed9de0() {
   return (neuron0x2ec9ab0()*0.0611076);
}

double NNfunction_sb_dRsR::synapse0x2eda770() {
   return (neuron0x2eca480()*-0.0224824);
}

double NNfunction_sb_dRsR::synapse0x2eda7b0() {
   return (neuron0x2ecae50()*-0.0751244);
}

double NNfunction_sb_dRsR::synapse0x2edb350() {
   return (neuron0x2ecb820()*1.7405);
}

double NNfunction_sb_dRsR::synapse0x2edb390() {
   return (neuron0x2ecc1f0()*-0.395652);
}

double NNfunction_sb_dRsR::synapse0x2edbd20() {
   return (neuron0x2ec4d40()*-0.0604437);
}

double NNfunction_sb_dRsR::synapse0x2edbd60() {
   return (neuron0x2ec5710()*0.519449);
}

double NNfunction_sb_dRsR::synapse0x2eccba0() {
   return (neuron0x2ecef80()*-0.459803);
}

double NNfunction_sb_dRsR::synapse0x2eccbe0() {
   return (neuron0x2ecf950()*0.0312243);
}

double NNfunction_sb_dRsR::synapse0x2ecd570() {
   return (neuron0x2ed0320()*-0.0646937);
}

double NNfunction_sb_dRsR::synapse0x2ecd5b0() {
   return (neuron0x2ed0cf0()*0.00562887);
}

double NNfunction_sb_dRsR::synapse0x2ecdf40() {
   return (neuron0x2ed16c0()*-0.0428287);
}

double NNfunction_sb_dRsR::synapse0x2ecdf80() {
   return (neuron0x2ed2090()*0.0187311);
}

double NNfunction_sb_dRsR::synapse0x2ee0460() {
   return (neuron0x2ed2a60()*-1.63663);
}

double NNfunction_sb_dRsR::synapse0x2ee04a0() {
   return (neuron0x2ed3430()*0.00550088);
}

double NNfunction_sb_dRsR::synapse0x2ee0e30() {
   return (neuron0x2ec94c0()*-0.0448537);
}

double NNfunction_sb_dRsR::synapse0x2ee0e70() {
   return (neuron0x2ed6010()*-0.0721703);
}

double NNfunction_sb_dRsR::synapse0x2ee1800() {
   return (neuron0x2ed69e0()*0.0667081);
}

double NNfunction_sb_dRsR::synapse0x2ee1840() {
   return (neuron0x2ed73b0()*-0.0741045);
}

double NNfunction_sb_dRsR::synapse0x2ee21d0() {
   return (neuron0x2ed7d80()*0.03284);
}

double NNfunction_sb_dRsR::synapse0x2ee2210() {
   return (neuron0x2ed8750()*0.0956091);
}

double NNfunction_sb_dRsR::synapse0x2ebd160() {
   return (neuron0x2ed9120()*0.0758726);
}

double NNfunction_sb_dRsR::synapse0x2ebd1a0() {
   return (neuron0x2ed9af0()*-0.769254);
}

double NNfunction_sb_dRsR::synapse0x2ed1970() {
   return (neuron0x2eda4c0()*-0.113049);
}

double NNfunction_sb_dRsR::synapse0x2ed19b0() {
   return (neuron0x2edb0a0()*-0.406295);
}

double NNfunction_sb_dRsR::synapse0x2ee28f0() {
   return (neuron0x2edba70()*0.26633);
}

double NNfunction_sb_dRsR::synapse0x2ee2930() {
   return (neuron0x2ecc8f0()*-0.0496042);
}

double NNfunction_sb_dRsR::synapse0x2ee2970() {
   return (neuron0x2ecd2c0()*-0.0032712);
}

double NNfunction_sb_dRsR::synapse0x2ee29b0() {
   return (neuron0x2ecdc90()*0.0105294);
}

double NNfunction_sb_dRsR::synapse0x2ee9860() {
   return (neuron0x2ee02d0()*-0.475596);
}

double NNfunction_sb_dRsR::synapse0x2ee98a0() {
   return (neuron0x2ee0b80()*0.790031);
}

double NNfunction_sb_dRsR::synapse0x2ee98e0() {
   return (neuron0x2ee1550()*0.0884722);
}

double NNfunction_sb_dRsR::synapse0x2ee9920() {
   return (neuron0x2ee1f20()*0.309138);
}

double NNfunction_sb_dRsR::synapse0x2ee9ca0() {
   return (neuron0x2ebceb0()*-0.0197176);
}

double NNfunction_sb_dRsR::synapse0x2ee9ce0() {
   return (neuron0x2ebd6f0()*0.0155091);
}

double NNfunction_sb_dRsR::synapse0x2ee9d20() {
   return (neuron0x2ebe1d0()*-0.0128789);
}

double NNfunction_sb_dRsR::synapse0x2ee9d60() {
   return (neuron0x2ebdc70()*-0.320777);
}

double NNfunction_sb_dRsR::synapse0x2ee9da0() {
   return (neuron0x2ebefb0()*-2.74172);
}

double NNfunction_sb_dRsR::synapse0x2ee9de0() {
   return (neuron0x2ec0a80()*-0.0361782);
}

double NNfunction_sb_dRsR::synapse0x2ee9e20() {
   return (neuron0x2ec1850()*-0.00591653);
}

double NNfunction_sb_dRsR::synapse0x2ee9e60() {
   return (neuron0x2ec2220()*-0.00265558);
}

double NNfunction_sb_dRsR::synapse0x2ee9ea0() {
   return (neuron0x2ec2bf0()*0.0199601);
}

double NNfunction_sb_dRsR::synapse0x2ee9ee0() {
   return (neuron0x2ec36d0()*0.581412);
}

double NNfunction_sb_dRsR::synapse0x2ee9f20() {
   return (neuron0x2ec40a0()*0.0479866);
}

double NNfunction_sb_dRsR::synapse0x2ee9f60() {
   return (neuron0x2ec1180()*0.0449099);
}

double NNfunction_sb_dRsR::synapse0x2ee9fa0() {
   return (neuron0x2ec5c50()*0.0115627);
}

double NNfunction_sb_dRsR::synapse0x2ee9fe0() {
   return (neuron0x2ec6620()*-0.0203429);
}

double NNfunction_sb_dRsR::synapse0x2eea020() {
   return (neuron0x2ec6ff0()*-0.0763249);
}

double NNfunction_sb_dRsR::synapse0x2eea060() {
   return (neuron0x2ec79c0()*-0.12273);
}

double NNfunction_sb_dRsR::synapse0x2ee9af0() {
   return (neuron0x2ec97d0()*1.8634);
}

double NNfunction_sb_dRsR::synapse0x2ee9b30() {
   return (neuron0x2ec9ab0()*-0.00712619);
}

double NNfunction_sb_dRsR::synapse0x2eea1b0() {
   return (neuron0x2eca480()*0.00386047);
}

double NNfunction_sb_dRsR::synapse0x2eea1f0() {
   return (neuron0x2ecae50()*-0.00664782);
}

double NNfunction_sb_dRsR::synapse0x2eea230() {
   return (neuron0x2ecb820()*1.11068);
}

double NNfunction_sb_dRsR::synapse0x2eea270() {
   return (neuron0x2ecc1f0()*-1.64934);
}

double NNfunction_sb_dRsR::synapse0x2eea2b0() {
   return (neuron0x2ec4d40()*0.0278266);
}

double NNfunction_sb_dRsR::synapse0x2eea2f0() {
   return (neuron0x2ec5710()*0.69603);
}

double NNfunction_sb_dRsR::synapse0x2eea330() {
   return (neuron0x2ecef80()*-1.00891);
}

double NNfunction_sb_dRsR::synapse0x2eea370() {
   return (neuron0x2ecf950()*-0.00021588);
}

double NNfunction_sb_dRsR::synapse0x2eea3b0() {
   return (neuron0x2ed0320()*0.0716437);
}

double NNfunction_sb_dRsR::synapse0x2eea3f0() {
   return (neuron0x2ed0cf0()*-0.0316274);
}

double NNfunction_sb_dRsR::synapse0x2eea430() {
   return (neuron0x2ed16c0()*0.00581674);
}

double NNfunction_sb_dRsR::synapse0x2eea470() {
   return (neuron0x2ed2090()*-0.0150159);
}

double NNfunction_sb_dRsR::synapse0x2eea4b0() {
   return (neuron0x2ed2a60()*-0.93425);
}

double NNfunction_sb_dRsR::synapse0x2eea4f0() {
   return (neuron0x2ed3430()*0.00588591);
}

double NNfunction_sb_dRsR::synapse0x2eea0a0() {
   return (neuron0x2ec94c0()*-0.0200124);
}

double NNfunction_sb_dRsR::synapse0x2eea0e0() {
   return (neuron0x2ed6010()*0.0440177);
}

double NNfunction_sb_dRsR::synapse0x2eea120() {
   return (neuron0x2ed69e0()*-0.0165418);
}

double NNfunction_sb_dRsR::synapse0x2eea160() {
   return (neuron0x2ed73b0()*0.0162553);
}

double NNfunction_sb_dRsR::synapse0x2eea740() {
   return (neuron0x2ed7d80()*0.011769);
}

double NNfunction_sb_dRsR::synapse0x2eea780() {
   return (neuron0x2ed8750()*0.396384);
}

double NNfunction_sb_dRsR::synapse0x2eea7c0() {
   return (neuron0x2ed9120()*-0.0240176);
}

double NNfunction_sb_dRsR::synapse0x2eea800() {
   return (neuron0x2ed9af0()*0.480726);
}

double NNfunction_sb_dRsR::synapse0x2eea840() {
   return (neuron0x2eda4c0()*0.0997024);
}

double NNfunction_sb_dRsR::synapse0x2eea880() {
   return (neuron0x2edb0a0()*0.73448);
}

double NNfunction_sb_dRsR::synapse0x2eea8c0() {
   return (neuron0x2edba70()*0.490191);
}

double NNfunction_sb_dRsR::synapse0x2eea900() {
   return (neuron0x2ecc8f0()*-4.91612e-06);
}

double NNfunction_sb_dRsR::synapse0x2eea940() {
   return (neuron0x2ecd2c0()*-0.019186);
}

double NNfunction_sb_dRsR::synapse0x2eea980() {
   return (neuron0x2ecdc90()*-0.018309);
}

double NNfunction_sb_dRsR::synapse0x2eea9c0() {
   return (neuron0x2ee02d0()*-0.690823);
}

double NNfunction_sb_dRsR::synapse0x2eeaa00() {
   return (neuron0x2ee0b80()*0.701709);
}

double NNfunction_sb_dRsR::synapse0x2eeaa40() {
   return (neuron0x2ee1550()*-0.0174487);
}

double NNfunction_sb_dRsR::synapse0x2eeaa80() {
   return (neuron0x2ee1f20()*1.57596);
}

double NNfunction_sb_dRsR::synapse0x2eeae00() {
   return (neuron0x2ebceb0()*1.87502);
}

double NNfunction_sb_dRsR::synapse0x2eeae40() {
   return (neuron0x2ebd6f0()*2.86464);
}

double NNfunction_sb_dRsR::synapse0x2eeae80() {
   return (neuron0x2ebe1d0()*-1.88186);
}

double NNfunction_sb_dRsR::synapse0x2eeaec0() {
   return (neuron0x2ebdc70()*-0.189009);
}

double NNfunction_sb_dRsR::synapse0x2eeaf00() {
   return (neuron0x2ebefb0()*-5.37063);
}

double NNfunction_sb_dRsR::synapse0x2eeaf40() {
   return (neuron0x2ec0a80()*-1.70403);
}

double NNfunction_sb_dRsR::synapse0x2eeaf80() {
   return (neuron0x2ec1850()*-1.35223);
}

double NNfunction_sb_dRsR::synapse0x2eeafc0() {
   return (neuron0x2ec2220()*-1.72243);
}

double NNfunction_sb_dRsR::synapse0x2eeb000() {
   return (neuron0x2ec2bf0()*2.12993);
}

double NNfunction_sb_dRsR::synapse0x2eeb040() {
   return (neuron0x2ec36d0()*0.512707);
}

double NNfunction_sb_dRsR::synapse0x2eeb080() {
   return (neuron0x2ec40a0()*-1.78694);
}

double NNfunction_sb_dRsR::synapse0x2eeb0c0() {
   return (neuron0x2ec1180()*-0.332824);
}

double NNfunction_sb_dRsR::synapse0x2eeb100() {
   return (neuron0x2ec5c50()*1.15278);
}

double NNfunction_sb_dRsR::synapse0x2eeb140() {
   return (neuron0x2ec6620()*-2.06178);
}

double NNfunction_sb_dRsR::synapse0x2eeb180() {
   return (neuron0x2ec6ff0()*3.89075);
}

double NNfunction_sb_dRsR::synapse0x2eeb1c0() {
   return (neuron0x2ec79c0()*-1.18372);
}

double NNfunction_sb_dRsR::synapse0x2eeac50() {
   return (neuron0x2ec97d0()*0.660626);
}

double NNfunction_sb_dRsR::synapse0x2eeac90() {
   return (neuron0x2ec9ab0()*-1.72957);
}

double NNfunction_sb_dRsR::synapse0x2eeb310() {
   return (neuron0x2eca480()*2.75617);
}

double NNfunction_sb_dRsR::synapse0x2eeb350() {
   return (neuron0x2ecae50()*2.68672);
}

double NNfunction_sb_dRsR::synapse0x2eeb390() {
   return (neuron0x2ecb820()*0.263507);
}

double NNfunction_sb_dRsR::synapse0x2eeb3d0() {
   return (neuron0x2ecc1f0()*3.24423);
}

double NNfunction_sb_dRsR::synapse0x2eeb410() {
   return (neuron0x2ec4d40()*-2.69791);
}

double NNfunction_sb_dRsR::synapse0x2eeb450() {
   return (neuron0x2ec5710()*0.431304);
}

double NNfunction_sb_dRsR::synapse0x2eeb490() {
   return (neuron0x2ecef80()*-2.0867);
}

double NNfunction_sb_dRsR::synapse0x2eeb4d0() {
   return (neuron0x2ecf950()*-2.11002);
}

double NNfunction_sb_dRsR::synapse0x2eeb510() {
   return (neuron0x2ed0320()*1.38888);
}

double NNfunction_sb_dRsR::synapse0x2eeb550() {
   return (neuron0x2ed0cf0()*1.90651);
}

double NNfunction_sb_dRsR::synapse0x2eeb590() {
   return (neuron0x2ed16c0()*1.54342);
}

double NNfunction_sb_dRsR::synapse0x2eeb5d0() {
   return (neuron0x2ed2090()*1.91779);
}

double NNfunction_sb_dRsR::synapse0x2eeb610() {
   return (neuron0x2ed2a60()*-0.692587);
}

double NNfunction_sb_dRsR::synapse0x2eeb650() {
   return (neuron0x2ed3430()*-2.12957);
}

double NNfunction_sb_dRsR::synapse0x2eeb200() {
   return (neuron0x2ec94c0()*-2.16082);
}

double NNfunction_sb_dRsR::synapse0x2eeb240() {
   return (neuron0x2ed6010()*1.53925);
}

double NNfunction_sb_dRsR::synapse0x2eeb280() {
   return (neuron0x2ed69e0()*-1.66647);
}

double NNfunction_sb_dRsR::synapse0x2eeb2c0() {
   return (neuron0x2ed73b0()*-2.14248);
}

double NNfunction_sb_dRsR::synapse0x2eeb8a0() {
   return (neuron0x2ed7d80()*-1.63833);
}

double NNfunction_sb_dRsR::synapse0x2eeb8e0() {
   return (neuron0x2ed8750()*0.213711);
}

double NNfunction_sb_dRsR::synapse0x2eeb920() {
   return (neuron0x2ed9120()*-1.88425);
}

double NNfunction_sb_dRsR::synapse0x2eeb960() {
   return (neuron0x2ed9af0()*0.710363);
}

double NNfunction_sb_dRsR::synapse0x2eeb9a0() {
   return (neuron0x2eda4c0()*1.63362);
}

double NNfunction_sb_dRsR::synapse0x2eeb9e0() {
   return (neuron0x2edb0a0()*0.0732968);
}

double NNfunction_sb_dRsR::synapse0x2eeba20() {
   return (neuron0x2edba70()*-0.206269);
}

double NNfunction_sb_dRsR::synapse0x2eeba60() {
   return (neuron0x2ecc8f0()*2.24231);
}

double NNfunction_sb_dRsR::synapse0x2eebaa0() {
   return (neuron0x2ecd2c0()*2.18107);
}

double NNfunction_sb_dRsR::synapse0x2eebae0() {
   return (neuron0x2ecdc90()*1.93577);
}

double NNfunction_sb_dRsR::synapse0x2eebb20() {
   return (neuron0x2ee02d0()*-0.62672);
}

double NNfunction_sb_dRsR::synapse0x2eebb60() {
   return (neuron0x2ee0b80()*1.89629);
}

double NNfunction_sb_dRsR::synapse0x2eebba0() {
   return (neuron0x2ee1550()*-0.588705);
}

double NNfunction_sb_dRsR::synapse0x2eebbe0() {
   return (neuron0x2ee1f20()*-0.582087);
}

double NNfunction_sb_dRsR::synapse0x2eebf60() {
   return (neuron0x2ebceb0()*0.0624289);
}

double NNfunction_sb_dRsR::synapse0x2eebfa0() {
   return (neuron0x2ebd6f0()*-0.130555);
}

double NNfunction_sb_dRsR::synapse0x2eebfe0() {
   return (neuron0x2ebe1d0()*0.19352);
}

double NNfunction_sb_dRsR::synapse0x2eec020() {
   return (neuron0x2ebdc70()*-0.267066);
}

double NNfunction_sb_dRsR::synapse0x2eec060() {
   return (neuron0x2ebefb0()*-1.75633);
}

double NNfunction_sb_dRsR::synapse0x2eec0a0() {
   return (neuron0x2ec0a80()*0.421295);
}

double NNfunction_sb_dRsR::synapse0x2eec0e0() {
   return (neuron0x2ec1850()*0.186918);
}

double NNfunction_sb_dRsR::synapse0x2eec120() {
   return (neuron0x2ec2220()*-0.0631231);
}

double NNfunction_sb_dRsR::synapse0x2eec160() {
   return (neuron0x2ec2bf0()*0.129702);
}

double NNfunction_sb_dRsR::synapse0x2eec1a0() {
   return (neuron0x2ec36d0()*-0.115677);
}

double NNfunction_sb_dRsR::synapse0x2eec1e0() {
   return (neuron0x2ec40a0()*1.0407);
}

double NNfunction_sb_dRsR::synapse0x2eec220() {
   return (neuron0x2ec1180()*-0.564438);
}

double NNfunction_sb_dRsR::synapse0x2eec260() {
   return (neuron0x2ec5c50()*-0.229474);
}

double NNfunction_sb_dRsR::synapse0x2eec2a0() {
   return (neuron0x2ec6620()*-0.124244);
}

double NNfunction_sb_dRsR::synapse0x2eec2e0() {
   return (neuron0x2ec6ff0()*-0.730304);
}

double NNfunction_sb_dRsR::synapse0x2eec320() {
   return (neuron0x2ec79c0()*-0.52899);
}

double NNfunction_sb_dRsR::synapse0x2eebdb0() {
   return (neuron0x2ec97d0()*2.52086);
}

double NNfunction_sb_dRsR::synapse0x2eebdf0() {
   return (neuron0x2ec9ab0()*0.346177);
}

double NNfunction_sb_dRsR::synapse0x2eec470() {
   return (neuron0x2eca480()*0.317699);
}

double NNfunction_sb_dRsR::synapse0x2eec4b0() {
   return (neuron0x2ecae50()*-0.25436);
}

double NNfunction_sb_dRsR::synapse0x2eec4f0() {
   return (neuron0x2ecb820()*0.122455);
}

double NNfunction_sb_dRsR::synapse0x2eec530() {
   return (neuron0x2ecc1f0()*-2.10898);
}

double NNfunction_sb_dRsR::synapse0x2eec570() {
   return (neuron0x2ec4d40()*-0.216488);
}

double NNfunction_sb_dRsR::synapse0x2eec5b0() {
   return (neuron0x2ec5710()*0.331057);
}

double NNfunction_sb_dRsR::synapse0x2eec5f0() {
   return (neuron0x2ecef80()*-0.540543);
}

double NNfunction_sb_dRsR::synapse0x2eec630() {
   return (neuron0x2ecf950()*0.0237145);
}

double NNfunction_sb_dRsR::synapse0x2eec670() {
   return (neuron0x2ed0320()*-0.520457);
}

double NNfunction_sb_dRsR::synapse0x2eec6b0() {
   return (neuron0x2ed0cf0()*0.118011);
}

double NNfunction_sb_dRsR::synapse0x2eec6f0() {
   return (neuron0x2ed16c0()*-0.0367039);
}

double NNfunction_sb_dRsR::synapse0x2eec730() {
   return (neuron0x2ed2090()*-0.000652136);
}

double NNfunction_sb_dRsR::synapse0x2eec770() {
   return (neuron0x2ed2a60()*-2.20758);
}

double NNfunction_sb_dRsR::synapse0x2eec7b0() {
   return (neuron0x2ed3430()*0.41407);
}

double NNfunction_sb_dRsR::synapse0x2eec360() {
   return (neuron0x2ec94c0()*0.239754);
}

double NNfunction_sb_dRsR::synapse0x2eec3a0() {
   return (neuron0x2ed6010()*-0.509724);
}

double NNfunction_sb_dRsR::synapse0x2eec3e0() {
   return (neuron0x2ed69e0()*-0.297448);
}

double NNfunction_sb_dRsR::synapse0x2eec420() {
   return (neuron0x2ed73b0()*-0.107073);
}

double NNfunction_sb_dRsR::synapse0x2eeca00() {
   return (neuron0x2ed7d80()*0.0611583);
}

double NNfunction_sb_dRsR::synapse0x2eeca40() {
   return (neuron0x2ed8750()*2.90991);
}

double NNfunction_sb_dRsR::synapse0x2eeca80() {
   return (neuron0x2ed9120()*0.330772);
}

double NNfunction_sb_dRsR::synapse0x2eecac0() {
   return (neuron0x2ed9af0()*-0.724796);
}

double NNfunction_sb_dRsR::synapse0x2eecb00() {
   return (neuron0x2eda4c0()*-0.505428);
}

double NNfunction_sb_dRsR::synapse0x2eecb40() {
   return (neuron0x2edb0a0()*4.98523);
}

double NNfunction_sb_dRsR::synapse0x2eecb80() {
   return (neuron0x2edba70()*2.19921);
}

double NNfunction_sb_dRsR::synapse0x2eecbc0() {
   return (neuron0x2ecc8f0()*-0.119252);
}

double NNfunction_sb_dRsR::synapse0x2eecc00() {
   return (neuron0x2ecd2c0()*0.171283);
}

double NNfunction_sb_dRsR::synapse0x2eecc40() {
   return (neuron0x2ecdc90()*0.413092);
}

double NNfunction_sb_dRsR::synapse0x2eecc80() {
   return (neuron0x2ee02d0()*-0.876497);
}

double NNfunction_sb_dRsR::synapse0x2eeccc0() {
   return (neuron0x2ee0b80()*5.28895);
}

double NNfunction_sb_dRsR::synapse0x2eecd00() {
   return (neuron0x2ee1550()*0.513199);
}

double NNfunction_sb_dRsR::synapse0x2eecd40() {
   return (neuron0x2ee1f20()*3.01313);
}

double NNfunction_sb_dRsR::synapse0x2eecfa0() {
   return (neuron0x2ee9120()*-3.89699);
}

double NNfunction_sb_dRsR::synapse0x2eecfe0() {
   return (neuron0x2ee94c0()*-2.74349);
}

double NNfunction_sb_dRsR::synapse0x2eed020() {
   return (neuron0x2ee9960()*-4.98465);
}

double NNfunction_sb_dRsR::synapse0x2eed060() {
   return (neuron0x2eeaac0()*-4.87274);
}

double NNfunction_sb_dRsR::synapse0x2eed0a0() {
   return (neuron0x2eebc20()*-4.53634);
}

