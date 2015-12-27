#include "NNfunction_sb_uLdR.h"
#include <cmath>

double NNfunction_sb_uLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.825)/15.0503;
   input1 = (in1 - 66.2731)/711.291;
   input2 = (in2 - 377.039)/454.311;
   input3 = (in3 - 342.803)/640.625;
   input4 = (in4 - 769.915)/659.731;
   input5 = (in5 - 670.563)/636.11;
   input6 = (in6 - 676.221)/638.906;
   input7 = (in7 - 668.003)/635.709;
   input8 = (in8 - 669.486)/674.2;
   input9 = (in9 - 658.751)/657.371;
   input10 = (in10 - 658.947)/677.439;
   input11 = (in11 - 653.776)/409.584;
   input12 = (in12 - 755.201)/587.669;
   input13 = (in13 - 588.927)/378.129;
   input14 = (in14 - 736.708)/541.568;
   input15 = (in15 - 738.089)/541.325;
   input16 = (in16 - 518.745)/380.275;
   input17 = (in17 - 652.065)/413.615;
   input18 = (in18 - 754.038)/597.355;
   input19 = (in19 - 748.455)/584.782;
   input20 = (in20 - -262.059)/437.265;
   input21 = (in21 - -340.748)/914.067;
   input22 = (in22 - -5.02953)/903.737;
   input23 = (in23 - 17.2483)/522.537;
   switch(index) {
     case 0:
         return neuron0x2ef10a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLdR::Value(int index, double* input) {
   input0 = (input[0] - 22.825)/15.0503;
   input1 = (input[1] - 66.2731)/711.291;
   input2 = (input[2] - 377.039)/454.311;
   input3 = (input[3] - 342.803)/640.625;
   input4 = (input[4] - 769.915)/659.731;
   input5 = (input[5] - 670.563)/636.11;
   input6 = (input[6] - 676.221)/638.906;
   input7 = (input[7] - 668.003)/635.709;
   input8 = (input[8] - 669.486)/674.2;
   input9 = (input[9] - 658.751)/657.371;
   input10 = (input[10] - 658.947)/677.439;
   input11 = (input[11] - 653.776)/409.584;
   input12 = (input[12] - 755.201)/587.669;
   input13 = (input[13] - 588.927)/378.129;
   input14 = (input[14] - 736.708)/541.568;
   input15 = (input[15] - 738.089)/541.325;
   input16 = (input[16] - 518.745)/380.275;
   input17 = (input[17] - 652.065)/413.615;
   input18 = (input[18] - 754.038)/597.355;
   input19 = (input[19] - 748.455)/584.782;
   input20 = (input[20] - -262.059)/437.265;
   input21 = (input[21] - -340.748)/914.067;
   input22 = (input[22] - -5.02953)/903.737;
   input23 = (input[23] - 17.2483)/522.537;
   switch(index) {
     case 0:
         return neuron0x2ef10a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLdR::neuron0x2ebd260() {
   return input0;
}

double NNfunction_sb_uLdR::neuron0x2ebd510() {
   return input1;
}

double NNfunction_sb_uLdR::neuron0x2ebd850() {
   return input2;
}

double NNfunction_sb_uLdR::neuron0x2ebdb90() {
   return input3;
}

double NNfunction_sb_uLdR::neuron0x2ebded0() {
   return input4;
}

double NNfunction_sb_uLdR::neuron0x2ebe210() {
   return input5;
}

double NNfunction_sb_uLdR::neuron0x2ebe550() {
   return input6;
}

double NNfunction_sb_uLdR::neuron0x2ebe890() {
   return input7;
}

double NNfunction_sb_uLdR::neuron0x2ebebd0() {
   return input8;
}

double NNfunction_sb_uLdR::neuron0x2ebef10() {
   return input9;
}

double NNfunction_sb_uLdR::neuron0x2ebf250() {
   return input10;
}

double NNfunction_sb_uLdR::neuron0x2ebf590() {
   return input11;
}

double NNfunction_sb_uLdR::neuron0x2ebf8d0() {
   return input12;
}

double NNfunction_sb_uLdR::neuron0x2ebfc10() {
   return input13;
}

double NNfunction_sb_uLdR::neuron0x2ebff50() {
   return input14;
}

double NNfunction_sb_uLdR::neuron0x2ec0290() {
   return input15;
}

double NNfunction_sb_uLdR::neuron0x2ec05d0() {
   return input16;
}

double NNfunction_sb_uLdR::neuron0x2ec0b30() {
   return input17;
}

double NNfunction_sb_uLdR::neuron0x2ec0d50() {
   return input18;
}

double NNfunction_sb_uLdR::neuron0x2ec1090() {
   return input19;
}

double NNfunction_sb_uLdR::neuron0x2ec13d0() {
   return input20;
}

double NNfunction_sb_uLdR::neuron0x2ec1710() {
   return input21;
}

double NNfunction_sb_uLdR::neuron0x2ec1a50() {
   return input22;
}

double NNfunction_sb_uLdR::neuron0x2ec1d90() {
   return input23;
}

double NNfunction_sb_uLdR::input0x2ec2200() {
   double input = 0.176051;
   input += synapse0x2ebd1e0();
   input += synapse0x2ebd220();
   input += synapse0x2ec24b0();
   input += synapse0x2ec24f0();
   input += synapse0x2ec2530();
   input += synapse0x2ec2570();
   input += synapse0x2ec25b0();
   input += synapse0x2ec25f0();
   input += synapse0x2ec2630();
   input += synapse0x2ec2670();
   input += synapse0x2ec26b0();
   input += synapse0x2ec26f0();
   input += synapse0x2ec2730();
   input += synapse0x2ec2770();
   input += synapse0x2ec27b0();
   input += synapse0x2ec27f0();
   input += synapse0x2ebd150();
   input += synapse0x2ebd190();
   input += synapse0x2c78320();
   input += synapse0x2c78360();
   input += synapse0x2ec2a50();
   input += synapse0x2ec2a90();
   input += synapse0x2ec2ad0();
   input += synapse0x2ec2b10();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ec2200() {
   double input = input0x2ec2200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ec2b50() {
   double input = 0.859667;
   input += synapse0x2ec2e90();
   input += synapse0x2ec2ed0();
   input += synapse0x2ec2f10();
   input += synapse0x2ec2f50();
   input += synapse0x2ec2f90();
   input += synapse0x2ec2fd0();
   input += synapse0x2ec3010();
   input += synapse0x2ec3050();
   input += synapse0x2ec3090();
   input += synapse0x2ec2940();
   input += synapse0x2ec2980();
   input += synapse0x2ec29c0();
   input += synapse0x2ec2a00();
   input += synapse0x2ec32e0();
   input += synapse0x2ec3320();
   input += synapse0x2ec3360();
   input += synapse0x2ec2ce0();
   input += synapse0x2ec2d20();
   input += synapse0x2ec34b0();
   input += synapse0x2ec34f0();
   input += synapse0x2ec3530();
   input += synapse0x2ec3570();
   input += synapse0x2ec35b0();
   input += synapse0x2ec35f0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ec2b50() {
   double input = input0x2ec2b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ec3630() {
   double input = -0.0448215;
   input += synapse0x2ec3970();
   input += synapse0x2ec39b0();
   input += synapse0x2ec39f0();
   input += synapse0x2ec3a30();
   input += synapse0x2ec3a70();
   input += synapse0x2ec3ab0();
   input += synapse0x2ec3af0();
   input += synapse0x2ec3b30();
   input += synapse0x2ec3b70();
   input += synapse0x2ec3bb0();
   input += synapse0x2ec3bf0();
   input += synapse0x2ec3c30();
   input += synapse0x2ec3c70();
   input += synapse0x2ec3cb0();
   input += synapse0x2ec3cf0();
   input += synapse0x2ec3d30();
   input += synapse0x2ec37c0();
   input += synapse0x2ec3800();
   input += synapse0x2eac2d0();
   input += synapse0x2c86220();
   input += synapse0x2c86260();
   input += synapse0x2da1770();
   input += synapse0x2da17b0();
   input += synapse0x2ebcfc0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ec3630() {
   double input = input0x2ec3630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2c86980() {
   double input = 0.130456;
   input += synapse0x2c86b10();
   input += synapse0x2ec31f0();
   input += synapse0x2ec3230();
   input += synapse0x2ec3270();
   input += synapse0x2ec3e80();
   input += synapse0x2ec3ec0();
   input += synapse0x2ec3f00();
   input += synapse0x2ec3f40();
   input += synapse0x2ec3f80();
   input += synapse0x2ec3fc0();
   input += synapse0x2ec4000();
   input += synapse0x2ec4040();
   input += synapse0x2ec4080();
   input += synapse0x2ec40c0();
   input += synapse0x2ec4100();
   input += synapse0x2ec4140();
   input += synapse0x2ebd000();
   input += synapse0x2ebd040();
   input += synapse0x2ebd080();
   input += synapse0x2ec4290();
   input += synapse0x2ec42d0();
   input += synapse0x2ec4310();
   input += synapse0x2ec4350();
   input += synapse0x2ec4390();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2c86980() {
   double input = input0x2c86980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ec43d0() {
   double input = 0.737948;
   input += synapse0x2ec4710();
   input += synapse0x2ec4750();
   input += synapse0x2ec4790();
   input += synapse0x2ec47d0();
   input += synapse0x2ec4810();
   input += synapse0x2ec4850();
   input += synapse0x2ec4890();
   input += synapse0x2ec48d0();
   input += synapse0x2ec4910();
   input += synapse0x2ec4950();
   input += synapse0x2ec4990();
   input += synapse0x2ec49d0();
   input += synapse0x2ec4a10();
   input += synapse0x2ec4a50();
   input += synapse0x2ec4a90();
   input += synapse0x2ec4ad0();
   input += synapse0x2ec4560();
   input += synapse0x2ec45a0();
   input += synapse0x2ec4c20();
   input += synapse0x2ec4c60();
   input += synapse0x2ec4ca0();
   input += synapse0x2ec4ce0();
   input += synapse0x2ec4d20();
   input += synapse0x2ec4d60();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ec43d0() {
   double input = input0x2ec43d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ec4da0() {
   double input = 0.312919;
   input += synapse0x2ec50e0();
   input += synapse0x2ec5120();
   input += synapse0x2ec5160();
   input += synapse0x2ec51a0();
   input += synapse0x2ec51e0();
   input += synapse0x2ec5220();
   input += synapse0x2ec5260();
   input += synapse0x2ec52a0();
   input += synapse0x2ec52e0();
   input += synapse0x2c86570();
   input += synapse0x2c865b0();
   input += synapse0x2c865f0();
   input += synapse0x2c86630();
   input += synapse0x2c86670();
   input += synapse0x2c866b0();
   input += synapse0x2c866f0();
   input += synapse0x2ec4f30();
   input += synapse0x2ec4f70();
   input += synapse0x2c86840();
   input += synapse0x2c86880();
   input += synapse0x2c868c0();
   input += synapse0x2c86900();
   input += synapse0x2c86940();
   input += synapse0x2ec5b30();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ec4da0() {
   double input = input0x2ec4da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ec5b70() {
   double input = -0.172526;
   input += synapse0x2ec5eb0();
   input += synapse0x2ec5ef0();
   input += synapse0x2ec5f30();
   input += synapse0x2ec5f70();
   input += synapse0x2ec5fb0();
   input += synapse0x2ec5ff0();
   input += synapse0x2ec6030();
   input += synapse0x2ec6070();
   input += synapse0x2ec60b0();
   input += synapse0x2ec60f0();
   input += synapse0x2ec6130();
   input += synapse0x2ec6170();
   input += synapse0x2ec61b0();
   input += synapse0x2ec61f0();
   input += synapse0x2ec6230();
   input += synapse0x2ec6270();
   input += synapse0x2ec5d00();
   input += synapse0x2ec5d40();
   input += synapse0x2ec63c0();
   input += synapse0x2ec6400();
   input += synapse0x2ec6440();
   input += synapse0x2ec6480();
   input += synapse0x2ec64c0();
   input += synapse0x2ec6500();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ec5b70() {
   double input = input0x2ec5b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ec6540() {
   double input = 0.772719;
   input += synapse0x2ec6880();
   input += synapse0x2ec68c0();
   input += synapse0x2ec6900();
   input += synapse0x2ec6940();
   input += synapse0x2ec6980();
   input += synapse0x2ec69c0();
   input += synapse0x2ec6a00();
   input += synapse0x2ec6a40();
   input += synapse0x2ec6a80();
   input += synapse0x2ec6ac0();
   input += synapse0x2ec6b00();
   input += synapse0x2ec6b40();
   input += synapse0x2ec6b80();
   input += synapse0x2ec6bc0();
   input += synapse0x2ec6c00();
   input += synapse0x2ec6c40();
   input += synapse0x2ec66d0();
   input += synapse0x2ec6710();
   input += synapse0x2ec6d90();
   input += synapse0x2ec6dd0();
   input += synapse0x2ec6e10();
   input += synapse0x2ec6e50();
   input += synapse0x2ec6e90();
   input += synapse0x2ec6ed0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ec6540() {
   double input = input0x2ec6540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ec6f10() {
   double input = -0.904473;
   input += synapse0x2ec0a20();
   input += synapse0x2ec0a60();
   input += synapse0x2ec0aa0();
   input += synapse0x2ec0ae0();
   input += synapse0x2ec7460();
   input += synapse0x2ec74a0();
   input += synapse0x2ec74e0();
   input += synapse0x2ec7520();
   input += synapse0x2ec7560();
   input += synapse0x2ec75a0();
   input += synapse0x2ec75e0();
   input += synapse0x2ec7620();
   input += synapse0x2ec7660();
   input += synapse0x2ec76a0();
   input += synapse0x2ec76e0();
   input += synapse0x2ec7720();
   input += synapse0x2ec70a0();
   input += synapse0x2ec70e0();
   input += synapse0x2ec7870();
   input += synapse0x2ec78b0();
   input += synapse0x2ec78f0();
   input += synapse0x2ec7930();
   input += synapse0x2ec7970();
   input += synapse0x2ec79b0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ec6f10() {
   double input = input0x2ec6f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ec79f0() {
   double input = -1.31224;
   input += synapse0x2ec7d30();
   input += synapse0x2ec7d70();
   input += synapse0x2ec7db0();
   input += synapse0x2ec7df0();
   input += synapse0x2ec7e30();
   input += synapse0x2ec7e70();
   input += synapse0x2ec7eb0();
   input += synapse0x2ec7ef0();
   input += synapse0x2ec7f30();
   input += synapse0x2ec7f70();
   input += synapse0x2ec7fb0();
   input += synapse0x2ec7ff0();
   input += synapse0x2ec8030();
   input += synapse0x2ec8070();
   input += synapse0x2ec80b0();
   input += synapse0x2ec80f0();
   input += synapse0x2ec7b80();
   input += synapse0x2ec7bc0();
   input += synapse0x2ec8240();
   input += synapse0x2ec8280();
   input += synapse0x2ec82c0();
   input += synapse0x2ec8300();
   input += synapse0x2ec8340();
   input += synapse0x2ec8380();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ec79f0() {
   double input = input0x2ec79f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ec83c0() {
   double input = 1.34104;
   input += synapse0x2ec8700();
   input += synapse0x2ec8740();
   input += synapse0x2ec8780();
   input += synapse0x2ec87c0();
   input += synapse0x2ec8800();
   input += synapse0x2ec8840();
   input += synapse0x2ec8880();
   input += synapse0x2ec88c0();
   input += synapse0x2ec8900();
   input += synapse0x2ec8940();
   input += synapse0x2ec8980();
   input += synapse0x2ec89c0();
   input += synapse0x2ec8a00();
   input += synapse0x2ec8a40();
   input += synapse0x2ec8a80();
   input += synapse0x2ec8ac0();
   input += synapse0x2ec8550();
   input += synapse0x2ec8590();
   input += synapse0x2ec5320();
   input += synapse0x2ec5360();
   input += synapse0x2ec53a0();
   input += synapse0x2ec53e0();
   input += synapse0x2ec5420();
   input += synapse0x2ec5460();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ec83c0() {
   double input = input0x2ec83c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ec54a0() {
   double input = -0.450603;
   input += synapse0x2ec57e0();
   input += synapse0x2ec5820();
   input += synapse0x2ec5860();
   input += synapse0x2ec58a0();
   input += synapse0x2ec58e0();
   input += synapse0x2ec5920();
   input += synapse0x2ec5960();
   input += synapse0x2ec59a0();
   input += synapse0x2ec59e0();
   input += synapse0x2ec5a20();
   input += synapse0x2ec5a60();
   input += synapse0x2ec5aa0();
   input += synapse0x2ec5ae0();
   input += synapse0x2ec9c20();
   input += synapse0x2ec9c60();
   input += synapse0x2ec9ca0();
   input += synapse0x2ec5630();
   input += synapse0x2ec5670();
   input += synapse0x2ec9df0();
   input += synapse0x2ec9e30();
   input += synapse0x2ec9e70();
   input += synapse0x2ec9eb0();
   input += synapse0x2ec9ef0();
   input += synapse0x2ec9f30();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ec54a0() {
   double input = input0x2ec54a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ec9f70() {
   double input = 0.904669;
   input += synapse0x2eca2b0();
   input += synapse0x2eca2f0();
   input += synapse0x2eca330();
   input += synapse0x2eca370();
   input += synapse0x2eca3b0();
   input += synapse0x2eca3f0();
   input += synapse0x2eca430();
   input += synapse0x2eca470();
   input += synapse0x2eca4b0();
   input += synapse0x2eca4f0();
   input += synapse0x2eca530();
   input += synapse0x2eca570();
   input += synapse0x2eca5b0();
   input += synapse0x2eca5f0();
   input += synapse0x2eca630();
   input += synapse0x2eca670();
   input += synapse0x2eca100();
   input += synapse0x2eca140();
   input += synapse0x2eca7c0();
   input += synapse0x2eca800();
   input += synapse0x2eca840();
   input += synapse0x2eca880();
   input += synapse0x2eca8c0();
   input += synapse0x2eca900();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ec9f70() {
   double input = input0x2ec9f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2eca940() {
   double input = 0.611617;
   input += synapse0x2ecac80();
   input += synapse0x2ecacc0();
   input += synapse0x2ecad00();
   input += synapse0x2ecad40();
   input += synapse0x2ecad80();
   input += synapse0x2ecadc0();
   input += synapse0x2ecae00();
   input += synapse0x2ecae40();
   input += synapse0x2ecae80();
   input += synapse0x2ecaec0();
   input += synapse0x2ecaf00();
   input += synapse0x2ecaf40();
   input += synapse0x2ecaf80();
   input += synapse0x2ecafc0();
   input += synapse0x2ecb000();
   input += synapse0x2ecb040();
   input += synapse0x2ecaad0();
   input += synapse0x2ecab10();
   input += synapse0x2ecb190();
   input += synapse0x2ecb1d0();
   input += synapse0x2ecb210();
   input += synapse0x2ecb250();
   input += synapse0x2ecb290();
   input += synapse0x2ecb2d0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2eca940() {
   double input = input0x2eca940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ecb310() {
   double input = -0.21236;
   input += synapse0x2ecb650();
   input += synapse0x2ecb690();
   input += synapse0x2ecb6d0();
   input += synapse0x2ecb710();
   input += synapse0x2ecb750();
   input += synapse0x2ecb790();
   input += synapse0x2ecb7d0();
   input += synapse0x2ecb810();
   input += synapse0x2ecb850();
   input += synapse0x2ecb890();
   input += synapse0x2ecb8d0();
   input += synapse0x2ecb910();
   input += synapse0x2ecb950();
   input += synapse0x2ecb990();
   input += synapse0x2ecb9d0();
   input += synapse0x2ecba10();
   input += synapse0x2ecb4a0();
   input += synapse0x2ecb4e0();
   input += synapse0x2ecbb60();
   input += synapse0x2ecbba0();
   input += synapse0x2ecbbe0();
   input += synapse0x2ecbc20();
   input += synapse0x2ecbc60();
   input += synapse0x2ecbca0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ecb310() {
   double input = input0x2ecb310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ecbce0() {
   double input = 3.42172;
   input += synapse0x2ecc020();
   input += synapse0x2ebd3f0();
   input += synapse0x2ebd430();
   input += synapse0x2ebd730();
   input += synapse0x2ebd770();
   input += synapse0x2ebda70();
   input += synapse0x2ebdab0();
   input += synapse0x2ebddb0();
   input += synapse0x2ebddf0();
   input += synapse0x2ebe0f0();
   input += synapse0x2ebe130();
   input += synapse0x2ebe430();
   input += synapse0x2ebe470();
   input += synapse0x2ebe770();
   input += synapse0x2ebe7b0();
   input += synapse0x2ebeab0();
   input += synapse0x2ebeaf0();
   input += synapse0x2ebedf0();
   input += synapse0x2ebee30();
   input += synapse0x2ebf130();
   input += synapse0x2ebf170();
   input += synapse0x2ebf470();
   input += synapse0x2ebf4b0();
   input += synapse0x2ebf7b0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ecbce0() {
   double input = input0x2ecbce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ecdaf0() {
   double input = -1.14582;
   input += synapse0x2ebf7f0();
   input += synapse0x2ec04b0();
   input += synapse0x2ec04f0();
   input += synapse0x2ecbe70();
   input += synapse0x2ecbeb0();
   input += synapse0x2ec07f0();
   input += synapse0x2ec0830();
   input += synapse0x2c78200();
   input += synapse0x2c78240();
   input += synapse0x2ec0f70();
   input += synapse0x2ec0fb0();
   input += synapse0x2ec12b0();
   input += synapse0x2ec12f0();
   input += synapse0x2ec15f0();
   input += synapse0x2ec1630();
   input += synapse0x2ec1930();
   input += synapse0x2ec1970();
   input += synapse0x2ec1c70();
   input += synapse0x2ec1cb0();
   input += synapse0x2ec1fb0();
   input += synapse0x2ec1ff0();
   input += synapse0x2ebfaf0();
   input += synapse0x2ebfb30();
   input += synapse0x2ecdd90();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ecdaf0() {
   double input = input0x2ecdaf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ecddd0() {
   double input = -1.37899;
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
   input += synapse0x2ece3d0();
   input += synapse0x2ece410();
   input += synapse0x2ece450();
   input += synapse0x2ece490();
   input += synapse0x2ece4d0();
   input += synapse0x2ecdf60();
   input += synapse0x2ecdfa0();
   input += synapse0x2ece620();
   input += synapse0x2ece660();
   input += synapse0x2ece6a0();
   input += synapse0x2ece6e0();
   input += synapse0x2ece720();
   input += synapse0x2ece760();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ecddd0() {
   double input = input0x2ecddd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ece7a0() {
   double input = -0.226728;
   input += synapse0x2eceae0();
   input += synapse0x2eceb20();
   input += synapse0x2eceb60();
   input += synapse0x2eceba0();
   input += synapse0x2ecebe0();
   input += synapse0x2ecec20();
   input += synapse0x2ecec60();
   input += synapse0x2ececa0();
   input += synapse0x2ecece0();
   input += synapse0x2eced20();
   input += synapse0x2eced60();
   input += synapse0x2eceda0();
   input += synapse0x2ecede0();
   input += synapse0x2ecee20();
   input += synapse0x2ecee60();
   input += synapse0x2eceea0();
   input += synapse0x2ece930();
   input += synapse0x2ece970();
   input += synapse0x2eceff0();
   input += synapse0x2ecf030();
   input += synapse0x2ecf070();
   input += synapse0x2ecf0b0();
   input += synapse0x2ecf0f0();
   input += synapse0x2ecf130();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ece7a0() {
   double input = input0x2ece7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ecf170() {
   double input = 0.439878;
   input += synapse0x2ecf4b0();
   input += synapse0x2ecf4f0();
   input += synapse0x2ecf530();
   input += synapse0x2ecf570();
   input += synapse0x2ecf5b0();
   input += synapse0x2ecf5f0();
   input += synapse0x2ecf630();
   input += synapse0x2ecf670();
   input += synapse0x2ecf6b0();
   input += synapse0x2ecf6f0();
   input += synapse0x2ecf730();
   input += synapse0x2ecf770();
   input += synapse0x2ecf7b0();
   input += synapse0x2ecf7f0();
   input += synapse0x2ecf830();
   input += synapse0x2ecf870();
   input += synapse0x2ecf300();
   input += synapse0x2ecf340();
   input += synapse0x2ecf9c0();
   input += synapse0x2ecfa00();
   input += synapse0x2ecfa40();
   input += synapse0x2ecfa80();
   input += synapse0x2ecfac0();
   input += synapse0x2ecfb00();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ecf170() {
   double input = input0x2ecf170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ecfb40() {
   double input = 0.00539244;
   input += synapse0x2ecfe80();
   input += synapse0x2ecfec0();
   input += synapse0x2ecff00();
   input += synapse0x2ecff40();
   input += synapse0x2ecff80();
   input += synapse0x2ecffc0();
   input += synapse0x2ed0000();
   input += synapse0x2ed0040();
   input += synapse0x2ed0080();
   input += synapse0x2ed00c0();
   input += synapse0x2ed0100();
   input += synapse0x2ed0140();
   input += synapse0x2ed0180();
   input += synapse0x2ed01c0();
   input += synapse0x2ed0200();
   input += synapse0x2ed0240();
   input += synapse0x2ecfcd0();
   input += synapse0x2ecfd10();
   input += synapse0x2ed0390();
   input += synapse0x2ed03d0();
   input += synapse0x2ed0410();
   input += synapse0x2ed0450();
   input += synapse0x2ed0490();
   input += synapse0x2ed04d0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ecfb40() {
   double input = input0x2ecfb40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ed0510() {
   double input = -0.210293;
   input += synapse0x2ed0850();
   input += synapse0x2ed0890();
   input += synapse0x2ed08d0();
   input += synapse0x2ed0910();
   input += synapse0x2ed0950();
   input += synapse0x2ed0990();
   input += synapse0x2ed09d0();
   input += synapse0x2ed0a10();
   input += synapse0x2ed0a50();
   input += synapse0x2ec8c10();
   input += synapse0x2ec8c50();
   input += synapse0x2ec8c90();
   input += synapse0x2ec8cd0();
   input += synapse0x2ec8d10();
   input += synapse0x2ec8d50();
   input += synapse0x2ec8d90();
   input += synapse0x2ed06a0();
   input += synapse0x2ed06e0();
   input += synapse0x2ec8ee0();
   input += synapse0x2ec8f20();
   input += synapse0x2ec8f60();
   input += synapse0x2ec8fa0();
   input += synapse0x2ec8fe0();
   input += synapse0x2ec9020();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ed0510() {
   double input = input0x2ed0510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ec9060() {
   double input = 0.121791;
   input += synapse0x2ec93a0();
   input += synapse0x2ec93e0();
   input += synapse0x2ec9420();
   input += synapse0x2ec9460();
   input += synapse0x2ec94a0();
   input += synapse0x2ec94e0();
   input += synapse0x2ec9520();
   input += synapse0x2ec9560();
   input += synapse0x2ec95a0();
   input += synapse0x2ec95e0();
   input += synapse0x2ec9620();
   input += synapse0x2ec9660();
   input += synapse0x2ec96a0();
   input += synapse0x2ec96e0();
   input += synapse0x2ec9720();
   input += synapse0x2ec9760();
   input += synapse0x2ec91f0();
   input += synapse0x2ec9230();
   input += synapse0x2ec98b0();
   input += synapse0x2ec98f0();
   input += synapse0x2ec9930();
   input += synapse0x2ec9970();
   input += synapse0x2ec99b0();
   input += synapse0x2ec99f0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ec9060() {
   double input = input0x2ec9060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ec9a30() {
   double input = 1.3561;
   input += synapse0x2ec9bc0();
   input += synapse0x2ed2c50();
   input += synapse0x2ed2c90();
   input += synapse0x2ed2cd0();
   input += synapse0x2ed2d10();
   input += synapse0x2ed2d50();
   input += synapse0x2ed2d90();
   input += synapse0x2ed2dd0();
   input += synapse0x2ed2e10();
   input += synapse0x2ed2e50();
   input += synapse0x2ed2e90();
   input += synapse0x2ed2ed0();
   input += synapse0x2ed2f10();
   input += synapse0x2ed2f50();
   input += synapse0x2ed2f90();
   input += synapse0x2ed2fd0();
   input += synapse0x2ed2aa0();
   input += synapse0x2ed2ae0();
   input += synapse0x2ed3120();
   input += synapse0x2ed3160();
   input += synapse0x2ed31a0();
   input += synapse0x2ed31e0();
   input += synapse0x2ed3220();
   input += synapse0x2ed3260();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ec9a30() {
   double input = input0x2ec9a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ed32a0() {
   double input = 1.06198;
   input += synapse0x2ed35e0();
   input += synapse0x2ed3620();
   input += synapse0x2ed3660();
   input += synapse0x2ed36a0();
   input += synapse0x2ed36e0();
   input += synapse0x2ed3720();
   input += synapse0x2ed3760();
   input += synapse0x2ed37a0();
   input += synapse0x2ed37e0();
   input += synapse0x2ed3820();
   input += synapse0x2ed3860();
   input += synapse0x2ed38a0();
   input += synapse0x2ed38e0();
   input += synapse0x2ed3920();
   input += synapse0x2ed3960();
   input += synapse0x2ed39a0();
   input += synapse0x2ed3430();
   input += synapse0x2ed3470();
   input += synapse0x2ed3af0();
   input += synapse0x2ed3b30();
   input += synapse0x2ed3b70();
   input += synapse0x2ed3bb0();
   input += synapse0x2ed3bf0();
   input += synapse0x2ed3c30();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ed32a0() {
   double input = input0x2ed32a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ed3c70() {
   double input = -2.4712;
   input += synapse0x2ed3fb0();
   input += synapse0x2ed3ff0();
   input += synapse0x2ed4030();
   input += synapse0x2ed4070();
   input += synapse0x2ed40b0();
   input += synapse0x2ed40f0();
   input += synapse0x2ed4130();
   input += synapse0x2ed4170();
   input += synapse0x2ed41b0();
   input += synapse0x2ed41f0();
   input += synapse0x2ed4230();
   input += synapse0x2ed4270();
   input += synapse0x2ed42b0();
   input += synapse0x2ed42f0();
   input += synapse0x2ed4330();
   input += synapse0x2ed4370();
   input += synapse0x2ed3e00();
   input += synapse0x2ed3e40();
   input += synapse0x2ed44c0();
   input += synapse0x2ed4500();
   input += synapse0x2ed4540();
   input += synapse0x2ed4580();
   input += synapse0x2ed45c0();
   input += synapse0x2ed4600();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ed3c70() {
   double input = input0x2ed3c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ed4640() {
   double input = 1.12446;
   input += synapse0x2ed4980();
   input += synapse0x2ed49c0();
   input += synapse0x2ed4a00();
   input += synapse0x2ed4a40();
   input += synapse0x2ed4a80();
   input += synapse0x2ed4ac0();
   input += synapse0x2ed4b00();
   input += synapse0x2ed4b40();
   input += synapse0x2ed4b80();
   input += synapse0x2ed4bc0();
   input += synapse0x2ed4c00();
   input += synapse0x2ed4c40();
   input += synapse0x2ed4c80();
   input += synapse0x2ed4cc0();
   input += synapse0x2ed4d00();
   input += synapse0x2ed4d40();
   input += synapse0x2ed47d0();
   input += synapse0x2ed4810();
   input += synapse0x2ed4e90();
   input += synapse0x2ed4ed0();
   input += synapse0x2ed4f10();
   input += synapse0x2ed4f50();
   input += synapse0x2ed4f90();
   input += synapse0x2ed4fd0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ed4640() {
   double input = input0x2ed4640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ed5010() {
   double input = -1.43046;
   input += synapse0x2ed5350();
   input += synapse0x2ed5390();
   input += synapse0x2ed53d0();
   input += synapse0x2ed5410();
   input += synapse0x2ed5450();
   input += synapse0x2ed5490();
   input += synapse0x2ed54d0();
   input += synapse0x2ed5510();
   input += synapse0x2ed5550();
   input += synapse0x2ed5590();
   input += synapse0x2ed55d0();
   input += synapse0x2ed5610();
   input += synapse0x2ed5650();
   input += synapse0x2ed5690();
   input += synapse0x2ed56d0();
   input += synapse0x2ed5710();
   input += synapse0x2ed51a0();
   input += synapse0x2ed51e0();
   input += synapse0x2ed5860();
   input += synapse0x2ed58a0();
   input += synapse0x2ed58e0();
   input += synapse0x2ed5920();
   input += synapse0x2ed5960();
   input += synapse0x2ed59a0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ed5010() {
   double input = input0x2ed5010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ed59e0() {
   double input = -1.14256;
   input += synapse0x2ed5d20();
   input += synapse0x2ed5d60();
   input += synapse0x2ed5da0();
   input += synapse0x2ed5de0();
   input += synapse0x2ed5e20();
   input += synapse0x2ed5e60();
   input += synapse0x2ed5ea0();
   input += synapse0x2ed5ee0();
   input += synapse0x2ed5f20();
   input += synapse0x2ed5f60();
   input += synapse0x2ed5fa0();
   input += synapse0x2ed5fe0();
   input += synapse0x2ed6020();
   input += synapse0x2ed6060();
   input += synapse0x2ed60a0();
   input += synapse0x2ed60e0();
   input += synapse0x2ed5b70();
   input += synapse0x2ed5bb0();
   input += synapse0x2ed6230();
   input += synapse0x2ed6270();
   input += synapse0x2ed62b0();
   input += synapse0x2ed62f0();
   input += synapse0x2ed6330();
   input += synapse0x2ed6370();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ed59e0() {
   double input = input0x2ed59e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ed63b0() {
   double input = -0.1534;
   input += synapse0x2ed66f0();
   input += synapse0x2ed6730();
   input += synapse0x2ed6770();
   input += synapse0x2ed67b0();
   input += synapse0x2ed67f0();
   input += synapse0x2ed6830();
   input += synapse0x2ed6870();
   input += synapse0x2ed68b0();
   input += synapse0x2ed68f0();
   input += synapse0x2ed6930();
   input += synapse0x2ed6970();
   input += synapse0x2ed69b0();
   input += synapse0x2ed69f0();
   input += synapse0x2ed6a30();
   input += synapse0x2ed6a70();
   input += synapse0x2ed6ab0();
   input += synapse0x2ed6540();
   input += synapse0x2ed6580();
   input += synapse0x2ed6c00();
   input += synapse0x2ed6c40();
   input += synapse0x2ed6c80();
   input += synapse0x2ed6cc0();
   input += synapse0x2ed6d00();
   input += synapse0x2ed6d40();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ed63b0() {
   double input = input0x2ed63b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ed6d80() {
   double input = 0.00930708;
   input += synapse0x2ed70c0();
   input += synapse0x2ed7100();
   input += synapse0x2ed7140();
   input += synapse0x2ed7180();
   input += synapse0x2ed71c0();
   input += synapse0x2ed7200();
   input += synapse0x2ed7240();
   input += synapse0x2ed7280();
   input += synapse0x2ed72c0();
   input += synapse0x2ed7300();
   input += synapse0x2ed7340();
   input += synapse0x2ed7380();
   input += synapse0x2ed73c0();
   input += synapse0x2ed7400();
   input += synapse0x2ed7440();
   input += synapse0x2ed7480();
   input += synapse0x2ed6f10();
   input += synapse0x2ed6f50();
   input += synapse0x2ed75d0();
   input += synapse0x2ed7610();
   input += synapse0x2ed7650();
   input += synapse0x2ed7690();
   input += synapse0x2ed76d0();
   input += synapse0x2ed7710();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ed6d80() {
   double input = input0x2ed6d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ed7750() {
   double input = -0.0971476;
   input += synapse0x2ed7a90();
   input += synapse0x2ecc060();
   input += synapse0x2ecc0a0();
   input += synapse0x2ecc0e0();
   input += synapse0x2ecc330();
   input += synapse0x2ecc370();
   input += synapse0x2ecc3b0();
   input += synapse0x2ecc600();
   input += synapse0x2ecc640();
   input += synapse0x2ecc890();
   input += synapse0x2ecc8d0();
   input += synapse0x2ecc910();
   input += synapse0x2eccb60();
   input += synapse0x2eccba0();
   input += synapse0x2eccdf0();
   input += synapse0x2ecce30();
   input += synapse0x2ed78e0();
   input += synapse0x2ed7920();
   input += synapse0x2eccf80();
   input += synapse0x2ecd490();
   input += synapse0x2ecd4d0();
   input += synapse0x2ecd510();
   input += synapse0x2ecd760();
   input += synapse0x2ecd7a0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ed7750() {
   double input = input0x2ed7750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ecd7e0() {
   double input = 5.87666;
   input += synapse0x2ecd050();
   input += synapse0x2ecd090();
   input += synapse0x2ecd0d0();
   input += synapse0x2ecd110();
   input += synapse0x2ecda90();
   input += synapse0x2ed9de0();
   input += synapse0x2ed9e20();
   input += synapse0x2ed9e60();
   input += synapse0x2ed9ea0();
   input += synapse0x2ed9ee0();
   input += synapse0x2ed9f20();
   input += synapse0x2ed9f60();
   input += synapse0x2ed9fa0();
   input += synapse0x2ed9fe0();
   input += synapse0x2eda020();
   input += synapse0x2eda060();
   input += synapse0x2ecd970();
   input += synapse0x2ecd9b0();
   input += synapse0x2eda1b0();
   input += synapse0x2eda1f0();
   input += synapse0x2eda230();
   input += synapse0x2eda270();
   input += synapse0x2eda2b0();
   input += synapse0x2eda2f0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ecd7e0() {
   double input = input0x2ecd7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2eda330() {
   double input = 1.06179;
   input += synapse0x2eda670();
   input += synapse0x2eda6b0();
   input += synapse0x2eda6f0();
   input += synapse0x2eda730();
   input += synapse0x2eda770();
   input += synapse0x2eda7b0();
   input += synapse0x2eda7f0();
   input += synapse0x2eda830();
   input += synapse0x2eda870();
   input += synapse0x2eda8b0();
   input += synapse0x2eda8f0();
   input += synapse0x2eda930();
   input += synapse0x2eda970();
   input += synapse0x2eda9b0();
   input += synapse0x2eda9f0();
   input += synapse0x2edaa30();
   input += synapse0x2eda4c0();
   input += synapse0x2eda500();
   input += synapse0x2edab80();
   input += synapse0x2edabc0();
   input += synapse0x2edac00();
   input += synapse0x2edac40();
   input += synapse0x2edac80();
   input += synapse0x2edacc0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2eda330() {
   double input = input0x2eda330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2edad00() {
   double input = 0.617708;
   input += synapse0x2edb040();
   input += synapse0x2edb080();
   input += synapse0x2edb0c0();
   input += synapse0x2edb100();
   input += synapse0x2edb140();
   input += synapse0x2edb180();
   input += synapse0x2edb1c0();
   input += synapse0x2edb200();
   input += synapse0x2edb240();
   input += synapse0x2edb280();
   input += synapse0x2edb2c0();
   input += synapse0x2edb300();
   input += synapse0x2edb340();
   input += synapse0x2edb380();
   input += synapse0x2edb3c0();
   input += synapse0x2edb400();
   input += synapse0x2edae90();
   input += synapse0x2edaed0();
   input += synapse0x2edb550();
   input += synapse0x2edb590();
   input += synapse0x2edb5d0();
   input += synapse0x2edb610();
   input += synapse0x2edb650();
   input += synapse0x2edb690();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2edad00() {
   double input = input0x2edad00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2edb6d0() {
   double input = 0.122746;
   input += synapse0x2edba10();
   input += synapse0x2edba50();
   input += synapse0x2edba90();
   input += synapse0x2edbad0();
   input += synapse0x2edbb10();
   input += synapse0x2edbb50();
   input += synapse0x2edbb90();
   input += synapse0x2edbbd0();
   input += synapse0x2edbc10();
   input += synapse0x2edbc50();
   input += synapse0x2edbc90();
   input += synapse0x2edbcd0();
   input += synapse0x2edbd10();
   input += synapse0x2edbd50();
   input += synapse0x2edbd90();
   input += synapse0x2edbdd0();
   input += synapse0x2edb860();
   input += synapse0x2edb8a0();
   input += synapse0x2edbf20();
   input += synapse0x2edbf60();
   input += synapse0x2edbfa0();
   input += synapse0x2edbfe0();
   input += synapse0x2edc020();
   input += synapse0x2edc060();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2edb6d0() {
   double input = input0x2edb6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2edc0a0() {
   double input = 0.259334;
   input += synapse0x2edc3e0();
   input += synapse0x2edc420();
   input += synapse0x2edc460();
   input += synapse0x2edc4a0();
   input += synapse0x2edc4e0();
   input += synapse0x2edc520();
   input += synapse0x2edc560();
   input += synapse0x2edc5a0();
   input += synapse0x2edc5e0();
   input += synapse0x2edc620();
   input += synapse0x2edc660();
   input += synapse0x2edc6a0();
   input += synapse0x2edc6e0();
   input += synapse0x2edc720();
   input += synapse0x2edc760();
   input += synapse0x2edc7a0();
   input += synapse0x2edc230();
   input += synapse0x2edc270();
   input += synapse0x2edc8f0();
   input += synapse0x2edc930();
   input += synapse0x2edc970();
   input += synapse0x2edc9b0();
   input += synapse0x2edc9f0();
   input += synapse0x2edca30();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2edc0a0() {
   double input = input0x2edc0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2edca70() {
   double input = 0.159363;
   input += synapse0x2edcdb0();
   input += synapse0x2edcdf0();
   input += synapse0x2edce30();
   input += synapse0x2edce70();
   input += synapse0x2edceb0();
   input += synapse0x2edcef0();
   input += synapse0x2edcf30();
   input += synapse0x2edcf70();
   input += synapse0x2edcfb0();
   input += synapse0x2edcff0();
   input += synapse0x2edd030();
   input += synapse0x2edd070();
   input += synapse0x2edd0b0();
   input += synapse0x2edd0f0();
   input += synapse0x2edd130();
   input += synapse0x2edd170();
   input += synapse0x2edcc00();
   input += synapse0x2edcc40();
   input += synapse0x2edd2c0();
   input += synapse0x2edd300();
   input += synapse0x2edd340();
   input += synapse0x2edd380();
   input += synapse0x2edd3c0();
   input += synapse0x2edd400();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2edca70() {
   double input = input0x2edca70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2edd440() {
   double input = -0.265747;
   input += synapse0x2edd780();
   input += synapse0x2edd7c0();
   input += synapse0x2edd800();
   input += synapse0x2edd840();
   input += synapse0x2edd880();
   input += synapse0x2edd8c0();
   input += synapse0x2edd900();
   input += synapse0x2edd940();
   input += synapse0x2edd980();
   input += synapse0x2edd9c0();
   input += synapse0x2edda00();
   input += synapse0x2edda40();
   input += synapse0x2edda80();
   input += synapse0x2eddac0();
   input += synapse0x2eddb00();
   input += synapse0x2eddb40();
   input += synapse0x2edd5d0();
   input += synapse0x2edd610();
   input += synapse0x2eddc90();
   input += synapse0x2eddcd0();
   input += synapse0x2eddd10();
   input += synapse0x2eddd50();
   input += synapse0x2eddd90();
   input += synapse0x2edddd0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2edd440() {
   double input = input0x2edd440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2edde10() {
   double input = -0.953533;
   input += synapse0x2ede150();
   input += synapse0x2ede190();
   input += synapse0x2ede1d0();
   input += synapse0x2ede210();
   input += synapse0x2ede250();
   input += synapse0x2ede290();
   input += synapse0x2ede2d0();
   input += synapse0x2ede310();
   input += synapse0x2ede350();
   input += synapse0x2ede390();
   input += synapse0x2ede3d0();
   input += synapse0x2ede410();
   input += synapse0x2ede450();
   input += synapse0x2ede490();
   input += synapse0x2ede4d0();
   input += synapse0x2ede510();
   input += synapse0x2eddfa0();
   input += synapse0x2eddfe0();
   input += synapse0x2ede660();
   input += synapse0x2ede6a0();
   input += synapse0x2ede6e0();
   input += synapse0x2ede720();
   input += synapse0x2ede760();
   input += synapse0x2ede7a0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2edde10() {
   double input = input0x2edde10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ede7e0() {
   double input = -0.486886;
   input += synapse0x2ec7250();
   input += synapse0x2ec7290();
   input += synapse0x2ec72d0();
   input += synapse0x2ec7310();
   input += synapse0x2ec7350();
   input += synapse0x2ec7390();
   input += synapse0x2ec73d0();
   input += synapse0x2ec7410();
   input += synapse0x2edef30();
   input += synapse0x2edef70();
   input += synapse0x2edefb0();
   input += synapse0x2edeff0();
   input += synapse0x2edf030();
   input += synapse0x2edf070();
   input += synapse0x2edf0b0();
   input += synapse0x2edf0f0();
   input += synapse0x2ede970();
   input += synapse0x2ede9b0();
   input += synapse0x2edf240();
   input += synapse0x2edf280();
   input += synapse0x2edf2c0();
   input += synapse0x2edf300();
   input += synapse0x2edf340();
   input += synapse0x2edf380();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ede7e0() {
   double input = input0x2ede7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2edf3c0() {
   double input = -0.559132;
   input += synapse0x2edf700();
   input += synapse0x2edf740();
   input += synapse0x2edf780();
   input += synapse0x2edf7c0();
   input += synapse0x2edf800();
   input += synapse0x2edf840();
   input += synapse0x2edf880();
   input += synapse0x2edf8c0();
   input += synapse0x2edf900();
   input += synapse0x2edf940();
   input += synapse0x2edf980();
   input += synapse0x2edf9c0();
   input += synapse0x2edfa00();
   input += synapse0x2edfa40();
   input += synapse0x2edfa80();
   input += synapse0x2edfac0();
   input += synapse0x2edf550();
   input += synapse0x2edf590();
   input += synapse0x2edfc10();
   input += synapse0x2edfc50();
   input += synapse0x2edfc90();
   input += synapse0x2edfcd0();
   input += synapse0x2edfd10();
   input += synapse0x2edfd50();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2edf3c0() {
   double input = input0x2edf3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2edfd90() {
   double input = 0.693837;
   input += synapse0x2ee00d0();
   input += synapse0x2ee0110();
   input += synapse0x2ee0150();
   input += synapse0x2ee0190();
   input += synapse0x2ee01d0();
   input += synapse0x2ee0210();
   input += synapse0x2ee0250();
   input += synapse0x2ee0290();
   input += synapse0x2ee02d0();
   input += synapse0x2ee0310();
   input += synapse0x2ee0350();
   input += synapse0x2ee0390();
   input += synapse0x2ee03d0();
   input += synapse0x2ee0410();
   input += synapse0x2ee0450();
   input += synapse0x2ee0490();
   input += synapse0x2edff20();
   input += synapse0x2edff60();
   input += synapse0x2ed0a90();
   input += synapse0x2ed0ad0();
   input += synapse0x2ed0b10();
   input += synapse0x2ed0b50();
   input += synapse0x2ed0b90();
   input += synapse0x2ed0bd0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2edfd90() {
   double input = input0x2edfd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ed0c10() {
   double input = 0.60562;
   input += synapse0x2ed0f50();
   input += synapse0x2ed0f90();
   input += synapse0x2ed0fd0();
   input += synapse0x2ed1010();
   input += synapse0x2ed1050();
   input += synapse0x2ed1090();
   input += synapse0x2ed10d0();
   input += synapse0x2ed1110();
   input += synapse0x2ed1150();
   input += synapse0x2ed1190();
   input += synapse0x2ed11d0();
   input += synapse0x2ed1210();
   input += synapse0x2ed1250();
   input += synapse0x2ed1290();
   input += synapse0x2ed12d0();
   input += synapse0x2ed1310();
   input += synapse0x2ed0da0();
   input += synapse0x2ed0de0();
   input += synapse0x2ed1460();
   input += synapse0x2ed14a0();
   input += synapse0x2ed14e0();
   input += synapse0x2ed1520();
   input += synapse0x2ed1560();
   input += synapse0x2ed15a0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ed0c10() {
   double input = input0x2ed0c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ed15e0() {
   double input = -0.938506;
   input += synapse0x2ed1920();
   input += synapse0x2ed1960();
   input += synapse0x2ed19a0();
   input += synapse0x2ed19e0();
   input += synapse0x2ed1a20();
   input += synapse0x2ed1a60();
   input += synapse0x2ed1aa0();
   input += synapse0x2ed1ae0();
   input += synapse0x2ed1b20();
   input += synapse0x2ed1b60();
   input += synapse0x2ed1ba0();
   input += synapse0x2ed1be0();
   input += synapse0x2ed1c20();
   input += synapse0x2ed1c60();
   input += synapse0x2ed1ca0();
   input += synapse0x2ed1ce0();
   input += synapse0x2ed1770();
   input += synapse0x2ed17b0();
   input += synapse0x2ed1e30();
   input += synapse0x2ed1e70();
   input += synapse0x2ed1eb0();
   input += synapse0x2ed1ef0();
   input += synapse0x2ed1f30();
   input += synapse0x2ed1f70();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ed15e0() {
   double input = input0x2ed15e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ed1fb0() {
   double input = -2.85167;
   input += synapse0x2ed22f0();
   input += synapse0x2ed2330();
   input += synapse0x2ed2370();
   input += synapse0x2ed23b0();
   input += synapse0x2ed23f0();
   input += synapse0x2ed2430();
   input += synapse0x2ed2470();
   input += synapse0x2ed24b0();
   input += synapse0x2ed24f0();
   input += synapse0x2ed2530();
   input += synapse0x2ed2570();
   input += synapse0x2ed25b0();
   input += synapse0x2ed25f0();
   input += synapse0x2ed2630();
   input += synapse0x2ed2670();
   input += synapse0x2ed26b0();
   input += synapse0x2ed2140();
   input += synapse0x2ed2180();
   input += synapse0x2ed2800();
   input += synapse0x2ed2840();
   input += synapse0x2ed2880();
   input += synapse0x2ed28c0();
   input += synapse0x2ed2900();
   input += synapse0x2ed2940();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ed1fb0() {
   double input = input0x2ed1fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ee45f0() {
   double input = -0.841093;
   input += synapse0x2ee4810();
   input += synapse0x2ee4850();
   input += synapse0x2ee4890();
   input += synapse0x2ee48d0();
   input += synapse0x2ee4910();
   input += synapse0x2ee4950();
   input += synapse0x2ee4990();
   input += synapse0x2ee49d0();
   input += synapse0x2ee4a10();
   input += synapse0x2ee4a50();
   input += synapse0x2ee4a90();
   input += synapse0x2ee4ad0();
   input += synapse0x2ee4b10();
   input += synapse0x2ee4b50();
   input += synapse0x2ee4b90();
   input += synapse0x2ee4bd0();
   input += synapse0x2ed2980();
   input += synapse0x2ed29c0();
   input += synapse0x2ee4d20();
   input += synapse0x2ee4d60();
   input += synapse0x2ee4da0();
   input += synapse0x2ee4de0();
   input += synapse0x2ee4e20();
   input += synapse0x2ee4e60();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ee45f0() {
   double input = input0x2ee45f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ee4ea0() {
   double input = 0.0549256;
   input += synapse0x2ee51e0();
   input += synapse0x2ee5220();
   input += synapse0x2ee5260();
   input += synapse0x2ee52a0();
   input += synapse0x2ee52e0();
   input += synapse0x2ee5320();
   input += synapse0x2ee5360();
   input += synapse0x2ee53a0();
   input += synapse0x2ee53e0();
   input += synapse0x2ee5420();
   input += synapse0x2ee5460();
   input += synapse0x2ee54a0();
   input += synapse0x2ee54e0();
   input += synapse0x2ee5520();
   input += synapse0x2ee5560();
   input += synapse0x2ee55a0();
   input += synapse0x2ee5030();
   input += synapse0x2ee5070();
   input += synapse0x2ee56f0();
   input += synapse0x2ee5730();
   input += synapse0x2ee5770();
   input += synapse0x2ee57b0();
   input += synapse0x2ee57f0();
   input += synapse0x2ee5830();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ee4ea0() {
   double input = input0x2ee4ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ee5870() {
   double input = 1.01793;
   input += synapse0x2ee5bb0();
   input += synapse0x2ee5bf0();
   input += synapse0x2ee5c30();
   input += synapse0x2ee5c70();
   input += synapse0x2ee5cb0();
   input += synapse0x2ee5cf0();
   input += synapse0x2ee5d30();
   input += synapse0x2ee5d70();
   input += synapse0x2ee5db0();
   input += synapse0x2ee5df0();
   input += synapse0x2ee5e30();
   input += synapse0x2ee5e70();
   input += synapse0x2ee5eb0();
   input += synapse0x2ee5ef0();
   input += synapse0x2ee5f30();
   input += synapse0x2ee5f70();
   input += synapse0x2ee5a00();
   input += synapse0x2ee5a40();
   input += synapse0x2ee60c0();
   input += synapse0x2ee6100();
   input += synapse0x2ee6140();
   input += synapse0x2ee6180();
   input += synapse0x2ee61c0();
   input += synapse0x2ee6200();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ee5870() {
   double input = input0x2ee5870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ee6240() {
   double input = 1.09289;
   input += synapse0x2ee6580();
   input += synapse0x2ee65c0();
   input += synapse0x2ee6600();
   input += synapse0x2ee6640();
   input += synapse0x2ee6680();
   input += synapse0x2ee66c0();
   input += synapse0x2ee6700();
   input += synapse0x2ee6740();
   input += synapse0x2ee6780();
   input += synapse0x2ee67c0();
   input += synapse0x2ee6800();
   input += synapse0x2ee6840();
   input += synapse0x2ee6880();
   input += synapse0x2ee68c0();
   input += synapse0x2ee6900();
   input += synapse0x2ee6940();
   input += synapse0x2ee63d0();
   input += synapse0x2ee6410();
   input += synapse0x2ee6a90();
   input += synapse0x2ee6ad0();
   input += synapse0x2ee6b10();
   input += synapse0x2ee6b50();
   input += synapse0x2ee6b90();
   input += synapse0x2ee6bd0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ee6240() {
   double input = input0x2ee6240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2eed440() {
   double input = -0.502665;
   input += synapse0x2ec3160();
   input += synapse0x2ec31a0();
   input += synapse0x2ec4680();
   input += synapse0x2ec46c0();
   input += synapse0x2ec5050();
   input += synapse0x2ec5090();
   input += synapse0x2ec5e20();
   input += synapse0x2ec5e60();
   input += synapse0x2ec67f0();
   input += synapse0x2ec6830();
   input += synapse0x2ec71c0();
   input += synapse0x2ec7200();
   input += synapse0x2ec7ca0();
   input += synapse0x2ec7ce0();
   input += synapse0x2ec8670();
   input += synapse0x2ec86b0();
   input += synapse0x2ec5750();
   input += synapse0x2ec5790();
   input += synapse0x2eca220();
   input += synapse0x2eca260();
   input += synapse0x2ecabf0();
   input += synapse0x2ecac30();
   input += synapse0x2ecb5c0();
   input += synapse0x2ecb600();
   input += synapse0x2ecbf90();
   input += synapse0x2ecbfd0();
   input += synapse0x2ec0170();
   input += synapse0x2ec01b0();
   input += synapse0x2ece080();
   input += synapse0x2ece0c0();
   input += synapse0x2ecea50();
   input += synapse0x2ecea90();
   input += synapse0x2ecf420();
   input += synapse0x2ecf460();
   input += synapse0x2ecfdf0();
   input += synapse0x2ecfe30();
   input += synapse0x2ed07c0();
   input += synapse0x2ed0800();
   input += synapse0x2ec9310();
   input += synapse0x2ec9350();
   input += synapse0x2ed2bc0();
   input += synapse0x2ed2c00();
   input += synapse0x2ed3550();
   input += synapse0x2ed3590();
   input += synapse0x2ed3f20();
   input += synapse0x2ed3f60();
   input += synapse0x2ed48f0();
   input += synapse0x2ed4930();
   input += synapse0x2ed52c0();
   input += synapse0x2ed5300();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2eed440() {
   double input = input0x2eed440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2eed7e0() {
   double input = 0.716414;
   input += synapse0x2ed7a00();
   input += synapse0x2ed7a40();
   input += synapse0x2eccfc0();
   input += synapse0x2ecd000();
   input += synapse0x2eda5e0();
   input += synapse0x2eda620();
   input += synapse0x2edafb0();
   input += synapse0x2edaff0();
   input += synapse0x2edb980();
   input += synapse0x2edb9c0();
   input += synapse0x2edc350();
   input += synapse0x2edc390();
   input += synapse0x2edcd20();
   input += synapse0x2edcd60();
   input += synapse0x2edd6f0();
   input += synapse0x2edd730();
   input += synapse0x2ede0c0();
   input += synapse0x2ede100();
   input += synapse0x2edea90();
   input += synapse0x2edead0();
   input += synapse0x2edf670();
   input += synapse0x2edf6b0();
   input += synapse0x2ee0040();
   input += synapse0x2ee0080();
   input += synapse0x2ed0ec0();
   input += synapse0x2ed0f00();
   input += synapse0x2ed1890();
   input += synapse0x2ed18d0();
   input += synapse0x2ed2260();
   input += synapse0x2ed22a0();
   input += synapse0x2ee4780();
   input += synapse0x2ee47c0();
   input += synapse0x2ee5150();
   input += synapse0x2ee5190();
   input += synapse0x2ee5b20();
   input += synapse0x2ee5b60();
   input += synapse0x2ee64f0();
   input += synapse0x2ee6530();
   input += synapse0x2ec2420();
   input += synapse0x2ec2460();
   input += synapse0x2ed5c90();
   input += synapse0x2ed5cd0();
   input += synapse0x2ee6c10();
   input += synapse0x2ee6c50();
   input += synapse0x2ee6c90();
   input += synapse0x2ee6cd0();
   input += synapse0x2eedb80();
   input += synapse0x2eedbc0();
   input += synapse0x2eedc00();
   input += synapse0x2eedc40();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2eed7e0() {
   double input = input0x2eed7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2eedc80() {
   double input = 0.791197;
   input += synapse0x2eedfc0();
   input += synapse0x2eee000();
   input += synapse0x2eee040();
   input += synapse0x2eee080();
   input += synapse0x2eee0c0();
   input += synapse0x2eee100();
   input += synapse0x2eee140();
   input += synapse0x2eee180();
   input += synapse0x2eee1c0();
   input += synapse0x2eee200();
   input += synapse0x2eee240();
   input += synapse0x2eee280();
   input += synapse0x2eee2c0();
   input += synapse0x2eee300();
   input += synapse0x2eee340();
   input += synapse0x2eee380();
   input += synapse0x2eede10();
   input += synapse0x2eede50();
   input += synapse0x2eee4d0();
   input += synapse0x2eee510();
   input += synapse0x2eee550();
   input += synapse0x2eee590();
   input += synapse0x2eee5d0();
   input += synapse0x2eee610();
   input += synapse0x2eee650();
   input += synapse0x2eee690();
   input += synapse0x2eee6d0();
   input += synapse0x2eee710();
   input += synapse0x2eee750();
   input += synapse0x2eee790();
   input += synapse0x2eee7d0();
   input += synapse0x2eee810();
   input += synapse0x2eee3c0();
   input += synapse0x2eee400();
   input += synapse0x2eee440();
   input += synapse0x2eee480();
   input += synapse0x2eeea60();
   input += synapse0x2eeeaa0();
   input += synapse0x2eeeae0();
   input += synapse0x2eeeb20();
   input += synapse0x2eeeb60();
   input += synapse0x2eeeba0();
   input += synapse0x2eeebe0();
   input += synapse0x2eeec20();
   input += synapse0x2eeec60();
   input += synapse0x2eeeca0();
   input += synapse0x2eeece0();
   input += synapse0x2eeed20();
   input += synapse0x2eeed60();
   input += synapse0x2eeeda0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2eedc80() {
   double input = input0x2eedc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2eeede0() {
   double input = 0.154654;
   input += synapse0x2eef120();
   input += synapse0x2eef160();
   input += synapse0x2eef1a0();
   input += synapse0x2eef1e0();
   input += synapse0x2eef220();
   input += synapse0x2eef260();
   input += synapse0x2eef2a0();
   input += synapse0x2eef2e0();
   input += synapse0x2eef320();
   input += synapse0x2eef360();
   input += synapse0x2eef3a0();
   input += synapse0x2eef3e0();
   input += synapse0x2eef420();
   input += synapse0x2eef460();
   input += synapse0x2eef4a0();
   input += synapse0x2eef4e0();
   input += synapse0x2eeef70();
   input += synapse0x2eeefb0();
   input += synapse0x2eef630();
   input += synapse0x2eef670();
   input += synapse0x2eef6b0();
   input += synapse0x2eef6f0();
   input += synapse0x2eef730();
   input += synapse0x2eef770();
   input += synapse0x2eef7b0();
   input += synapse0x2eef7f0();
   input += synapse0x2eef830();
   input += synapse0x2eef870();
   input += synapse0x2eef8b0();
   input += synapse0x2eef8f0();
   input += synapse0x2eef930();
   input += synapse0x2eef970();
   input += synapse0x2eef520();
   input += synapse0x2eef560();
   input += synapse0x2eef5a0();
   input += synapse0x2eef5e0();
   input += synapse0x2eefbc0();
   input += synapse0x2eefc00();
   input += synapse0x2eefc40();
   input += synapse0x2eefc80();
   input += synapse0x2eefcc0();
   input += synapse0x2eefd00();
   input += synapse0x2eefd40();
   input += synapse0x2eefd80();
   input += synapse0x2eefdc0();
   input += synapse0x2eefe00();
   input += synapse0x2eefe40();
   input += synapse0x2eefe80();
   input += synapse0x2eefec0();
   input += synapse0x2eeff00();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2eeede0() {
   double input = input0x2eeede0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2eeff40() {
   double input = 0.744548;
   input += synapse0x2ef0280();
   input += synapse0x2ef02c0();
   input += synapse0x2ef0300();
   input += synapse0x2ef0340();
   input += synapse0x2ef0380();
   input += synapse0x2ef03c0();
   input += synapse0x2ef0400();
   input += synapse0x2ef0440();
   input += synapse0x2ef0480();
   input += synapse0x2ef04c0();
   input += synapse0x2ef0500();
   input += synapse0x2ef0540();
   input += synapse0x2ef0580();
   input += synapse0x2ef05c0();
   input += synapse0x2ef0600();
   input += synapse0x2ef0640();
   input += synapse0x2ef00d0();
   input += synapse0x2ef0110();
   input += synapse0x2ef0790();
   input += synapse0x2ef07d0();
   input += synapse0x2ef0810();
   input += synapse0x2ef0850();
   input += synapse0x2ef0890();
   input += synapse0x2ef08d0();
   input += synapse0x2ef0910();
   input += synapse0x2ef0950();
   input += synapse0x2ef0990();
   input += synapse0x2ef09d0();
   input += synapse0x2ef0a10();
   input += synapse0x2ef0a50();
   input += synapse0x2ef0a90();
   input += synapse0x2ef0ad0();
   input += synapse0x2ef0680();
   input += synapse0x2ef06c0();
   input += synapse0x2ef0700();
   input += synapse0x2ef0740();
   input += synapse0x2ef0d20();
   input += synapse0x2ef0d60();
   input += synapse0x2ef0da0();
   input += synapse0x2ef0de0();
   input += synapse0x2ef0e20();
   input += synapse0x2ef0e60();
   input += synapse0x2ef0ea0();
   input += synapse0x2ef0ee0();
   input += synapse0x2ef0f20();
   input += synapse0x2ef0f60();
   input += synapse0x2ef0fa0();
   input += synapse0x2ef0fe0();
   input += synapse0x2ef1020();
   input += synapse0x2ef1060();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2eeff40() {
   double input = input0x2eeff40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x2ef10a0() {
   double input = 2.71604;
   input += synapse0x2ef12c0();
   input += synapse0x2ef1300();
   input += synapse0x2ef1340();
   input += synapse0x2ef1380();
   input += synapse0x2ef13c0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x2ef10a0() {
   double input = input0x2ef10a0();
   return (input * 1)+0;
}

double NNfunction_sb_uLdR::synapse0x2ebd1e0() {
   return (neuron0x2ebd260()*-0.18606);
}

double NNfunction_sb_uLdR::synapse0x2ebd220() {
   return (neuron0x2ebd510()*-0.000264857);
}

double NNfunction_sb_uLdR::synapse0x2ec24b0() {
   return (neuron0x2ebd850()*0.774891);
}

double NNfunction_sb_uLdR::synapse0x2ec24f0() {
   return (neuron0x2ebdb90()*0.138215);
}

double NNfunction_sb_uLdR::synapse0x2ec2530() {
   return (neuron0x2ebded0()*0.581992);
}

double NNfunction_sb_uLdR::synapse0x2ec2570() {
   return (neuron0x2ebe210()*-0.0081189);
}

double NNfunction_sb_uLdR::synapse0x2ec25b0() {
   return (neuron0x2ebe550()*0.047835);
}

double NNfunction_sb_uLdR::synapse0x2ec25f0() {
   return (neuron0x2ebe890()*0.571136);
}

double NNfunction_sb_uLdR::synapse0x2ec2630() {
   return (neuron0x2ebebd0()*0.266124);
}

double NNfunction_sb_uLdR::synapse0x2ec2670() {
   return (neuron0x2ebef10()*-0.0247525);
}

double NNfunction_sb_uLdR::synapse0x2ec26b0() {
   return (neuron0x2ebf250()*-0.405547);
}

double NNfunction_sb_uLdR::synapse0x2ec26f0() {
   return (neuron0x2ebf590()*-0.00480588);
}

double NNfunction_sb_uLdR::synapse0x2ec2730() {
   return (neuron0x2ebf8d0()*0.141344);
}

double NNfunction_sb_uLdR::synapse0x2ec2770() {
   return (neuron0x2ebfc10()*-0.0362439);
}

double NNfunction_sb_uLdR::synapse0x2ec27b0() {
   return (neuron0x2ebff50()*0.505215);
}

double NNfunction_sb_uLdR::synapse0x2ec27f0() {
   return (neuron0x2ec0290()*-0.0280777);
}

double NNfunction_sb_uLdR::synapse0x2ebd150() {
   return (neuron0x2ec05d0()*0.00323956);
}

double NNfunction_sb_uLdR::synapse0x2ebd190() {
   return (neuron0x2ec0b30()*-0.167019);
}

double NNfunction_sb_uLdR::synapse0x2c78320() {
   return (neuron0x2ec0d50()*0.0405162);
}

double NNfunction_sb_uLdR::synapse0x2c78360() {
   return (neuron0x2ec1090()*0.202362);
}

double NNfunction_sb_uLdR::synapse0x2ec2a50() {
   return (neuron0x2ec13d0()*0.276135);
}

double NNfunction_sb_uLdR::synapse0x2ec2a90() {
   return (neuron0x2ec1710()*-0.215955);
}

double NNfunction_sb_uLdR::synapse0x2ec2ad0() {
   return (neuron0x2ec1a50()*-0.290486);
}

double NNfunction_sb_uLdR::synapse0x2ec2b10() {
   return (neuron0x2ec1d90()*-0.0262153);
}

double NNfunction_sb_uLdR::synapse0x2ec2e90() {
   return (neuron0x2ebd260()*0.0541517);
}

double NNfunction_sb_uLdR::synapse0x2ec2ed0() {
   return (neuron0x2ebd510()*0.0136764);
}

double NNfunction_sb_uLdR::synapse0x2ec2f10() {
   return (neuron0x2ebd850()*-0.0128734);
}

double NNfunction_sb_uLdR::synapse0x2ec2f50() {
   return (neuron0x2ebdb90()*0.192577);
}

double NNfunction_sb_uLdR::synapse0x2ec2f90() {
   return (neuron0x2ebded0()*0.113955);
}

double NNfunction_sb_uLdR::synapse0x2ec2fd0() {
   return (neuron0x2ebe210()*0.0317721);
}

double NNfunction_sb_uLdR::synapse0x2ec3010() {
   return (neuron0x2ebe550()*0.0267343);
}

double NNfunction_sb_uLdR::synapse0x2ec3050() {
   return (neuron0x2ebe890()*0.0269338);
}

double NNfunction_sb_uLdR::synapse0x2ec3090() {
   return (neuron0x2ebebd0()*0.103867);
}

double NNfunction_sb_uLdR::synapse0x2ec2940() {
   return (neuron0x2ebef10()*0.00638403);
}

double NNfunction_sb_uLdR::synapse0x2ec2980() {
   return (neuron0x2ebf250()*0.0924431);
}

double NNfunction_sb_uLdR::synapse0x2ec29c0() {
   return (neuron0x2ebf590()*-0.436402);
}

double NNfunction_sb_uLdR::synapse0x2ec2a00() {
   return (neuron0x2ebf8d0()*0.109635);
}

double NNfunction_sb_uLdR::synapse0x2ec32e0() {
   return (neuron0x2ebfc10()*0.20324);
}

double NNfunction_sb_uLdR::synapse0x2ec3320() {
   return (neuron0x2ebff50()*0.0441587);
}

double NNfunction_sb_uLdR::synapse0x2ec3360() {
   return (neuron0x2ec0290()*0.0416396);
}

double NNfunction_sb_uLdR::synapse0x2ec2ce0() {
   return (neuron0x2ec05d0()*-0.0151287);
}

double NNfunction_sb_uLdR::synapse0x2ec2d20() {
   return (neuron0x2ec0b30()*-1.05972);
}

double NNfunction_sb_uLdR::synapse0x2ec34b0() {
   return (neuron0x2ec0d50()*-0.199925);
}

double NNfunction_sb_uLdR::synapse0x2ec34f0() {
   return (neuron0x2ec1090()*-0.000945789);
}

double NNfunction_sb_uLdR::synapse0x2ec3530() {
   return (neuron0x2ec13d0()*-0.0286063);
}

double NNfunction_sb_uLdR::synapse0x2ec3570() {
   return (neuron0x2ec1710()*0.050448);
}

double NNfunction_sb_uLdR::synapse0x2ec35b0() {
   return (neuron0x2ec1a50()*0.0310681);
}

double NNfunction_sb_uLdR::synapse0x2ec35f0() {
   return (neuron0x2ec1d90()*0.0528084);
}

double NNfunction_sb_uLdR::synapse0x2ec3970() {
   return (neuron0x2ebd260()*0.356864);
}

double NNfunction_sb_uLdR::synapse0x2ec39b0() {
   return (neuron0x2ebd510()*-0.258566);
}

double NNfunction_sb_uLdR::synapse0x2ec39f0() {
   return (neuron0x2ebd850()*-0.822288);
}

double NNfunction_sb_uLdR::synapse0x2ec3a30() {
   return (neuron0x2ebdb90()*-0.380329);
}

double NNfunction_sb_uLdR::synapse0x2ec3a70() {
   return (neuron0x2ebded0()*-0.359769);
}

double NNfunction_sb_uLdR::synapse0x2ec3ab0() {
   return (neuron0x2ebe210()*-1.01501);
}

double NNfunction_sb_uLdR::synapse0x2ec3af0() {
   return (neuron0x2ebe550()*-0.46141);
}

double NNfunction_sb_uLdR::synapse0x2ec3b30() {
   return (neuron0x2ebe890()*0.78217);
}

double NNfunction_sb_uLdR::synapse0x2ec3b70() {
   return (neuron0x2ebebd0()*0.583448);
}

double NNfunction_sb_uLdR::synapse0x2ec3bb0() {
   return (neuron0x2ebef10()*0.10944);
}

double NNfunction_sb_uLdR::synapse0x2ec3bf0() {
   return (neuron0x2ebf250()*0.396518);
}

double NNfunction_sb_uLdR::synapse0x2ec3c30() {
   return (neuron0x2ebf590()*-0.24514);
}

double NNfunction_sb_uLdR::synapse0x2ec3c70() {
   return (neuron0x2ebf8d0()*0.482713);
}

double NNfunction_sb_uLdR::synapse0x2ec3cb0() {
   return (neuron0x2ebfc10()*0.999276);
}

double NNfunction_sb_uLdR::synapse0x2ec3cf0() {
   return (neuron0x2ebff50()*-0.382058);
}

double NNfunction_sb_uLdR::synapse0x2ec3d30() {
   return (neuron0x2ec0290()*0.0915585);
}

double NNfunction_sb_uLdR::synapse0x2ec37c0() {
   return (neuron0x2ec05d0()*0.177988);
}

double NNfunction_sb_uLdR::synapse0x2ec3800() {
   return (neuron0x2ec0b30()*-0.493258);
}

double NNfunction_sb_uLdR::synapse0x2eac2d0() {
   return (neuron0x2ec0d50()*-0.142217);
}

double NNfunction_sb_uLdR::synapse0x2c86220() {
   return (neuron0x2ec1090()*-0.316414);
}

double NNfunction_sb_uLdR::synapse0x2c86260() {
   return (neuron0x2ec13d0()*-0.652259);
}

double NNfunction_sb_uLdR::synapse0x2da1770() {
   return (neuron0x2ec1710()*0.0382551);
}

double NNfunction_sb_uLdR::synapse0x2da17b0() {
   return (neuron0x2ec1a50()*0.193436);
}

double NNfunction_sb_uLdR::synapse0x2ebcfc0() {
   return (neuron0x2ec1d90()*0.562157);
}

double NNfunction_sb_uLdR::synapse0x2c86b10() {
   return (neuron0x2ebd260()*-0.0996595);
}

double NNfunction_sb_uLdR::synapse0x2ec31f0() {
   return (neuron0x2ebd510()*-0.0676409);
}

double NNfunction_sb_uLdR::synapse0x2ec3230() {
   return (neuron0x2ebd850()*-0.0913077);
}

double NNfunction_sb_uLdR::synapse0x2ec3270() {
   return (neuron0x2ebdb90()*0.676082);
}

double NNfunction_sb_uLdR::synapse0x2ec3e80() {
   return (neuron0x2ebded0()*-0.0706658);
}

double NNfunction_sb_uLdR::synapse0x2ec3ec0() {
   return (neuron0x2ebe210()*-0.156834);
}

double NNfunction_sb_uLdR::synapse0x2ec3f00() {
   return (neuron0x2ebe550()*0.255192);
}

double NNfunction_sb_uLdR::synapse0x2ec3f40() {
   return (neuron0x2ebe890()*0.00340704);
}

double NNfunction_sb_uLdR::synapse0x2ec3f80() {
   return (neuron0x2ebebd0()*-0.172153);
}

double NNfunction_sb_uLdR::synapse0x2ec3fc0() {
   return (neuron0x2ebef10()*-0.305631);
}

double NNfunction_sb_uLdR::synapse0x2ec4000() {
   return (neuron0x2ebf250()*0.149599);
}

double NNfunction_sb_uLdR::synapse0x2ec4040() {
   return (neuron0x2ebf590()*-0.29881);
}

double NNfunction_sb_uLdR::synapse0x2ec4080() {
   return (neuron0x2ebf8d0()*0.262591);
}

double NNfunction_sb_uLdR::synapse0x2ec40c0() {
   return (neuron0x2ebfc10()*0.292753);
}

double NNfunction_sb_uLdR::synapse0x2ec4100() {
   return (neuron0x2ebff50()*-0.232563);
}

double NNfunction_sb_uLdR::synapse0x2ec4140() {
   return (neuron0x2ec0290()*0.398688);
}

double NNfunction_sb_uLdR::synapse0x2ebd000() {
   return (neuron0x2ec05d0()*-0.0421058);
}

double NNfunction_sb_uLdR::synapse0x2ebd040() {
   return (neuron0x2ec0b30()*-0.337027);
}

double NNfunction_sb_uLdR::synapse0x2ebd080() {
   return (neuron0x2ec0d50()*0.185765);
}

double NNfunction_sb_uLdR::synapse0x2ec4290() {
   return (neuron0x2ec1090()*0.0711802);
}

double NNfunction_sb_uLdR::synapse0x2ec42d0() {
   return (neuron0x2ec13d0()*0.11377);
}

double NNfunction_sb_uLdR::synapse0x2ec4310() {
   return (neuron0x2ec1710()*-0.326928);
}

double NNfunction_sb_uLdR::synapse0x2ec4350() {
   return (neuron0x2ec1a50()*0.239809);
}

double NNfunction_sb_uLdR::synapse0x2ec4390() {
   return (neuron0x2ec1d90()*0.0491526);
}

double NNfunction_sb_uLdR::synapse0x2ec4710() {
   return (neuron0x2ebd260()*-0.0264314);
}

double NNfunction_sb_uLdR::synapse0x2ec4750() {
   return (neuron0x2ebd510()*0.380074);
}

double NNfunction_sb_uLdR::synapse0x2ec4790() {
   return (neuron0x2ebd850()*0.214038);
}

double NNfunction_sb_uLdR::synapse0x2ec47d0() {
   return (neuron0x2ebdb90()*-0.175615);
}

double NNfunction_sb_uLdR::synapse0x2ec4810() {
   return (neuron0x2ebded0()*0.0416563);
}

double NNfunction_sb_uLdR::synapse0x2ec4850() {
   return (neuron0x2ebe210()*0.409199);
}

double NNfunction_sb_uLdR::synapse0x2ec4890() {
   return (neuron0x2ebe550()*0.288859);
}

double NNfunction_sb_uLdR::synapse0x2ec48d0() {
   return (neuron0x2ebe890()*0.250962);
}

double NNfunction_sb_uLdR::synapse0x2ec4910() {
   return (neuron0x2ebebd0()*-0.422584);
}

double NNfunction_sb_uLdR::synapse0x2ec4950() {
   return (neuron0x2ebef10()*-0.405001);
}

double NNfunction_sb_uLdR::synapse0x2ec4990() {
   return (neuron0x2ebf250()*-0.177908);
}

double NNfunction_sb_uLdR::synapse0x2ec49d0() {
   return (neuron0x2ebf590()*0.285472);
}

double NNfunction_sb_uLdR::synapse0x2ec4a10() {
   return (neuron0x2ebf8d0()*0.37066);
}

double NNfunction_sb_uLdR::synapse0x2ec4a50() {
   return (neuron0x2ebfc10()*0.575102);
}

double NNfunction_sb_uLdR::synapse0x2ec4a90() {
   return (neuron0x2ebff50()*-0.191811);
}

double NNfunction_sb_uLdR::synapse0x2ec4ad0() {
   return (neuron0x2ec0290()*0.241159);
}

double NNfunction_sb_uLdR::synapse0x2ec4560() {
   return (neuron0x2ec05d0()*-0.202672);
}

double NNfunction_sb_uLdR::synapse0x2ec45a0() {
   return (neuron0x2ec0b30()*-0.312065);
}

double NNfunction_sb_uLdR::synapse0x2ec4c20() {
   return (neuron0x2ec0d50()*0.25425);
}

double NNfunction_sb_uLdR::synapse0x2ec4c60() {
   return (neuron0x2ec1090()*0.446896);
}

double NNfunction_sb_uLdR::synapse0x2ec4ca0() {
   return (neuron0x2ec13d0()*0.286455);
}

double NNfunction_sb_uLdR::synapse0x2ec4ce0() {
   return (neuron0x2ec1710()*-0.39437);
}

double NNfunction_sb_uLdR::synapse0x2ec4d20() {
   return (neuron0x2ec1a50()*0.427181);
}

double NNfunction_sb_uLdR::synapse0x2ec4d60() {
   return (neuron0x2ec1d90()*0.454795);
}

double NNfunction_sb_uLdR::synapse0x2ec50e0() {
   return (neuron0x2ebd260()*-0.481934);
}

double NNfunction_sb_uLdR::synapse0x2ec5120() {
   return (neuron0x2ebd510()*-0.139752);
}

double NNfunction_sb_uLdR::synapse0x2ec5160() {
   return (neuron0x2ebd850()*-0.0246762);
}

double NNfunction_sb_uLdR::synapse0x2ec51a0() {
   return (neuron0x2ebdb90()*-0.0270105);
}

double NNfunction_sb_uLdR::synapse0x2ec51e0() {
   return (neuron0x2ebded0()*-0.352407);
}

double NNfunction_sb_uLdR::synapse0x2ec5220() {
   return (neuron0x2ebe210()*-0.507447);
}

double NNfunction_sb_uLdR::synapse0x2ec5260() {
   return (neuron0x2ebe550()*-0.314237);
}

double NNfunction_sb_uLdR::synapse0x2ec52a0() {
   return (neuron0x2ebe890()*0.0868516);
}

double NNfunction_sb_uLdR::synapse0x2ec52e0() {
   return (neuron0x2ebebd0()*0.238072);
}

double NNfunction_sb_uLdR::synapse0x2c86570() {
   return (neuron0x2ebef10()*0.81978);
}

double NNfunction_sb_uLdR::synapse0x2c865b0() {
   return (neuron0x2ebf250()*-0.226512);
}

double NNfunction_sb_uLdR::synapse0x2c865f0() {
   return (neuron0x2ebf590()*0.719513);
}

double NNfunction_sb_uLdR::synapse0x2c86630() {
   return (neuron0x2ebf8d0()*0.0978448);
}

double NNfunction_sb_uLdR::synapse0x2c86670() {
   return (neuron0x2ebfc10()*0.614892);
}

double NNfunction_sb_uLdR::synapse0x2c866b0() {
   return (neuron0x2ebff50()*0.266194);
}

double NNfunction_sb_uLdR::synapse0x2c866f0() {
   return (neuron0x2ec0290()*-0.0994453);
}

double NNfunction_sb_uLdR::synapse0x2ec4f30() {
   return (neuron0x2ec05d0()*-0.392802);
}

double NNfunction_sb_uLdR::synapse0x2ec4f70() {
   return (neuron0x2ec0b30()*0.572526);
}

double NNfunction_sb_uLdR::synapse0x2c86840() {
   return (neuron0x2ec0d50()*0.461301);
}

double NNfunction_sb_uLdR::synapse0x2c86880() {
   return (neuron0x2ec1090()*-0.323686);
}

double NNfunction_sb_uLdR::synapse0x2c868c0() {
   return (neuron0x2ec13d0()*0.367493);
}

double NNfunction_sb_uLdR::synapse0x2c86900() {
   return (neuron0x2ec1710()*0.365576);
}

double NNfunction_sb_uLdR::synapse0x2c86940() {
   return (neuron0x2ec1a50()*0.00990438);
}

double NNfunction_sb_uLdR::synapse0x2ec5b30() {
   return (neuron0x2ec1d90()*-0.345707);
}

double NNfunction_sb_uLdR::synapse0x2ec5eb0() {
   return (neuron0x2ebd260()*0.183531);
}

double NNfunction_sb_uLdR::synapse0x2ec5ef0() {
   return (neuron0x2ebd510()*-0.0675659);
}

double NNfunction_sb_uLdR::synapse0x2ec5f30() {
   return (neuron0x2ebd850()*-0.212854);
}

double NNfunction_sb_uLdR::synapse0x2ec5f70() {
   return (neuron0x2ebdb90()*0.365871);
}

double NNfunction_sb_uLdR::synapse0x2ec5fb0() {
   return (neuron0x2ebded0()*0.079448);
}

double NNfunction_sb_uLdR::synapse0x2ec5ff0() {
   return (neuron0x2ebe210()*0.196462);
}

double NNfunction_sb_uLdR::synapse0x2ec6030() {
   return (neuron0x2ebe550()*0.240584);
}

double NNfunction_sb_uLdR::synapse0x2ec6070() {
   return (neuron0x2ebe890()*-0.122655);
}

double NNfunction_sb_uLdR::synapse0x2ec60b0() {
   return (neuron0x2ebebd0()*0.316875);
}

double NNfunction_sb_uLdR::synapse0x2ec60f0() {
   return (neuron0x2ebef10()*-0.277457);
}

double NNfunction_sb_uLdR::synapse0x2ec6130() {
   return (neuron0x2ebf250()*-0.418575);
}

double NNfunction_sb_uLdR::synapse0x2ec6170() {
   return (neuron0x2ebf590()*0.684685);
}

double NNfunction_sb_uLdR::synapse0x2ec61b0() {
   return (neuron0x2ebf8d0()*0.0904928);
}

double NNfunction_sb_uLdR::synapse0x2ec61f0() {
   return (neuron0x2ebfc10()*-0.137989);
}

double NNfunction_sb_uLdR::synapse0x2ec6230() {
   return (neuron0x2ebff50()*-0.433161);
}

double NNfunction_sb_uLdR::synapse0x2ec6270() {
   return (neuron0x2ec0290()*-0.350255);
}

double NNfunction_sb_uLdR::synapse0x2ec5d00() {
   return (neuron0x2ec05d0()*0.263909);
}

double NNfunction_sb_uLdR::synapse0x2ec5d40() {
   return (neuron0x2ec0b30()*0.34695);
}

double NNfunction_sb_uLdR::synapse0x2ec63c0() {
   return (neuron0x2ec0d50()*0.0056932);
}

double NNfunction_sb_uLdR::synapse0x2ec6400() {
   return (neuron0x2ec1090()*-0.12179);
}

double NNfunction_sb_uLdR::synapse0x2ec6440() {
   return (neuron0x2ec13d0()*-0.0739573);
}

double NNfunction_sb_uLdR::synapse0x2ec6480() {
   return (neuron0x2ec1710()*0.0973261);
}

double NNfunction_sb_uLdR::synapse0x2ec64c0() {
   return (neuron0x2ec1a50()*-0.0669184);
}

double NNfunction_sb_uLdR::synapse0x2ec6500() {
   return (neuron0x2ec1d90()*0.0943361);
}

double NNfunction_sb_uLdR::synapse0x2ec6880() {
   return (neuron0x2ebd260()*0.0340983);
}

double NNfunction_sb_uLdR::synapse0x2ec68c0() {
   return (neuron0x2ebd510()*-0.130959);
}

double NNfunction_sb_uLdR::synapse0x2ec6900() {
   return (neuron0x2ebd850()*-0.0326179);
}

double NNfunction_sb_uLdR::synapse0x2ec6940() {
   return (neuron0x2ebdb90()*-1.98766);
}

double NNfunction_sb_uLdR::synapse0x2ec6980() {
   return (neuron0x2ebded0()*0.0511483);
}

double NNfunction_sb_uLdR::synapse0x2ec69c0() {
   return (neuron0x2ebe210()*0.0231417);
}

double NNfunction_sb_uLdR::synapse0x2ec6a00() {
   return (neuron0x2ebe550()*-0.00908068);
}

double NNfunction_sb_uLdR::synapse0x2ec6a40() {
   return (neuron0x2ebe890()*-0.0703913);
}

double NNfunction_sb_uLdR::synapse0x2ec6a80() {
   return (neuron0x2ebebd0()*-0.0188323);
}

double NNfunction_sb_uLdR::synapse0x2ec6ac0() {
   return (neuron0x2ebef10()*0.0318339);
}

double NNfunction_sb_uLdR::synapse0x2ec6b00() {
   return (neuron0x2ebf250()*-0.0649295);
}

double NNfunction_sb_uLdR::synapse0x2ec6b40() {
   return (neuron0x2ebf590()*-0.616121);
}

double NNfunction_sb_uLdR::synapse0x2ec6b80() {
   return (neuron0x2ebf8d0()*0.00265975);
}

double NNfunction_sb_uLdR::synapse0x2ec6bc0() {
   return (neuron0x2ebfc10()*-0.170867);
}

double NNfunction_sb_uLdR::synapse0x2ec6c00() {
   return (neuron0x2ebff50()*-0.0421687);
}

double NNfunction_sb_uLdR::synapse0x2ec6c40() {
   return (neuron0x2ec0290()*-0.0590408);
}

double NNfunction_sb_uLdR::synapse0x2ec66d0() {
   return (neuron0x2ec05d0()*-0.0296583);
}

double NNfunction_sb_uLdR::synapse0x2ec6710() {
   return (neuron0x2ec0b30()*-1.57757);
}

double NNfunction_sb_uLdR::synapse0x2ec6d90() {
   return (neuron0x2ec0d50()*-0.0522336);
}

double NNfunction_sb_uLdR::synapse0x2ec6dd0() {
   return (neuron0x2ec1090()*0.0114991);
}

double NNfunction_sb_uLdR::synapse0x2ec6e10() {
   return (neuron0x2ec13d0()*0.00816609);
}

double NNfunction_sb_uLdR::synapse0x2ec6e50() {
   return (neuron0x2ec1710()*-0.0273007);
}

double NNfunction_sb_uLdR::synapse0x2ec6e90() {
   return (neuron0x2ec1a50()*-0.0107055);
}

double NNfunction_sb_uLdR::synapse0x2ec6ed0() {
   return (neuron0x2ec1d90()*-0.0706852);
}

double NNfunction_sb_uLdR::synapse0x2ec0a20() {
   return (neuron0x2ebd260()*-0.0238567);
}

double NNfunction_sb_uLdR::synapse0x2ec0a60() {
   return (neuron0x2ebd510()*-0.040306);
}

double NNfunction_sb_uLdR::synapse0x2ec0aa0() {
   return (neuron0x2ebd850()*0.0225703);
}

double NNfunction_sb_uLdR::synapse0x2ec0ae0() {
   return (neuron0x2ebdb90()*-0.144637);
}

double NNfunction_sb_uLdR::synapse0x2ec7460() {
   return (neuron0x2ebded0()*-0.00454268);
}

double NNfunction_sb_uLdR::synapse0x2ec74a0() {
   return (neuron0x2ebe210()*0.004945);
}

double NNfunction_sb_uLdR::synapse0x2ec74e0() {
   return (neuron0x2ebe550()*-0.0138649);
}

double NNfunction_sb_uLdR::synapse0x2ec7520() {
   return (neuron0x2ebe890()*-0.0262769);
}

double NNfunction_sb_uLdR::synapse0x2ec7560() {
   return (neuron0x2ebebd0()*-0.0174889);
}

double NNfunction_sb_uLdR::synapse0x2ec75a0() {
   return (neuron0x2ebef10()*0.0229167);
}

double NNfunction_sb_uLdR::synapse0x2ec75e0() {
   return (neuron0x2ebf250()*-0.0208817);
}

double NNfunction_sb_uLdR::synapse0x2ec7620() {
   return (neuron0x2ebf590()*-1.09903);
}

double NNfunction_sb_uLdR::synapse0x2ec7660() {
   return (neuron0x2ebf8d0()*-0.0402948);
}

double NNfunction_sb_uLdR::synapse0x2ec76a0() {
   return (neuron0x2ebfc10()*-0.0744331);
}

double NNfunction_sb_uLdR::synapse0x2ec76e0() {
   return (neuron0x2ebff50()*-0.00160122);
}

double NNfunction_sb_uLdR::synapse0x2ec7720() {
   return (neuron0x2ec0290()*-0.0314631);
}

double NNfunction_sb_uLdR::synapse0x2ec70a0() {
   return (neuron0x2ec05d0()*-0.0344529);
}

double NNfunction_sb_uLdR::synapse0x2ec70e0() {
   return (neuron0x2ec0b30()*-0.731679);
}

double NNfunction_sb_uLdR::synapse0x2ec7870() {
   return (neuron0x2ec0d50()*-0.0469209);
}

double NNfunction_sb_uLdR::synapse0x2ec78b0() {
   return (neuron0x2ec1090()*-0.013901);
}

double NNfunction_sb_uLdR::synapse0x2ec78f0() {
   return (neuron0x2ec13d0()*0.0332267);
}

double NNfunction_sb_uLdR::synapse0x2ec7930() {
   return (neuron0x2ec1710()*0.0115509);
}

double NNfunction_sb_uLdR::synapse0x2ec7970() {
   return (neuron0x2ec1a50()*-0.00805098);
}

double NNfunction_sb_uLdR::synapse0x2ec79b0() {
   return (neuron0x2ec1d90()*-0.00709366);
}

double NNfunction_sb_uLdR::synapse0x2ec7d30() {
   return (neuron0x2ebd260()*-0.314334);
}

double NNfunction_sb_uLdR::synapse0x2ec7d70() {
   return (neuron0x2ebd510()*-0.590273);
}

double NNfunction_sb_uLdR::synapse0x2ec7db0() {
   return (neuron0x2ebd850()*0.586738);
}

double NNfunction_sb_uLdR::synapse0x2ec7df0() {
   return (neuron0x2ebdb90()*-0.530164);
}

double NNfunction_sb_uLdR::synapse0x2ec7e30() {
   return (neuron0x2ebded0()*-0.2108);
}

double NNfunction_sb_uLdR::synapse0x2ec7e70() {
   return (neuron0x2ebe210()*-0.398817);
}

double NNfunction_sb_uLdR::synapse0x2ec7eb0() {
   return (neuron0x2ebe550()*0.149385);
}

double NNfunction_sb_uLdR::synapse0x2ec7ef0() {
   return (neuron0x2ebe890()*0.607817);
}

double NNfunction_sb_uLdR::synapse0x2ec7f30() {
   return (neuron0x2ebebd0()*-0.32107);
}

double NNfunction_sb_uLdR::synapse0x2ec7f70() {
   return (neuron0x2ebef10()*-0.0288923);
}

double NNfunction_sb_uLdR::synapse0x2ec7fb0() {
   return (neuron0x2ebf250()*0.178637);
}

double NNfunction_sb_uLdR::synapse0x2ec7ff0() {
   return (neuron0x2ebf590()*0.96994);
}

double NNfunction_sb_uLdR::synapse0x2ec8030() {
   return (neuron0x2ebf8d0()*-0.462226);
}

double NNfunction_sb_uLdR::synapse0x2ec8070() {
   return (neuron0x2ebfc10()*-0.059506);
}

double NNfunction_sb_uLdR::synapse0x2ec80b0() {
   return (neuron0x2ebff50()*-0.457927);
}

double NNfunction_sb_uLdR::synapse0x2ec80f0() {
   return (neuron0x2ec0290()*0.636219);
}

double NNfunction_sb_uLdR::synapse0x2ec7b80() {
   return (neuron0x2ec05d0()*-0.176492);
}

double NNfunction_sb_uLdR::synapse0x2ec7bc0() {
   return (neuron0x2ec0b30()*0.130274);
}

double NNfunction_sb_uLdR::synapse0x2ec8240() {
   return (neuron0x2ec0d50()*0.0125462);
}

double NNfunction_sb_uLdR::synapse0x2ec8280() {
   return (neuron0x2ec1090()*-0.180712);
}

double NNfunction_sb_uLdR::synapse0x2ec82c0() {
   return (neuron0x2ec13d0()*-0.0780449);
}

double NNfunction_sb_uLdR::synapse0x2ec8300() {
   return (neuron0x2ec1710()*-0.0757444);
}

double NNfunction_sb_uLdR::synapse0x2ec8340() {
   return (neuron0x2ec1a50()*0.087094);
}

double NNfunction_sb_uLdR::synapse0x2ec8380() {
   return (neuron0x2ec1d90()*0.0723996);
}

double NNfunction_sb_uLdR::synapse0x2ec8700() {
   return (neuron0x2ebd260()*-0.0918884);
}

double NNfunction_sb_uLdR::synapse0x2ec8740() {
   return (neuron0x2ebd510()*-0.0695466);
}

double NNfunction_sb_uLdR::synapse0x2ec8780() {
   return (neuron0x2ebd850()*-0.000583447);
}

double NNfunction_sb_uLdR::synapse0x2ec87c0() {
   return (neuron0x2ebdb90()*0.806702);
}

double NNfunction_sb_uLdR::synapse0x2ec8800() {
   return (neuron0x2ebded0()*0.2135);
}

double NNfunction_sb_uLdR::synapse0x2ec8840() {
   return (neuron0x2ebe210()*-0.240831);
}

double NNfunction_sb_uLdR::synapse0x2ec8880() {
   return (neuron0x2ebe550()*-0.486399);
}

double NNfunction_sb_uLdR::synapse0x2ec88c0() {
   return (neuron0x2ebe890()*-0.0273568);
}

double NNfunction_sb_uLdR::synapse0x2ec8900() {
   return (neuron0x2ebebd0()*-0.136682);
}

double NNfunction_sb_uLdR::synapse0x2ec8940() {
   return (neuron0x2ebef10()*0.132085);
}

double NNfunction_sb_uLdR::synapse0x2ec8980() {
   return (neuron0x2ebf250()*0.0984557);
}

double NNfunction_sb_uLdR::synapse0x2ec89c0() {
   return (neuron0x2ebf590()*-0.331254);
}

double NNfunction_sb_uLdR::synapse0x2ec8a00() {
   return (neuron0x2ebf8d0()*-0.276493);
}

double NNfunction_sb_uLdR::synapse0x2ec8a40() {
   return (neuron0x2ebfc10()*0.169309);
}

double NNfunction_sb_uLdR::synapse0x2ec8a80() {
   return (neuron0x2ebff50()*0.241889);
}

double NNfunction_sb_uLdR::synapse0x2ec8ac0() {
   return (neuron0x2ec0290()*0.0905308);
}

double NNfunction_sb_uLdR::synapse0x2ec8550() {
   return (neuron0x2ec05d0()*-0.174915);
}

double NNfunction_sb_uLdR::synapse0x2ec8590() {
   return (neuron0x2ec0b30()*-0.0433253);
}

double NNfunction_sb_uLdR::synapse0x2ec5320() {
   return (neuron0x2ec0d50()*-0.254794);
}

double NNfunction_sb_uLdR::synapse0x2ec5360() {
   return (neuron0x2ec1090()*0.14264);
}

double NNfunction_sb_uLdR::synapse0x2ec53a0() {
   return (neuron0x2ec13d0()*-0.172635);
}

double NNfunction_sb_uLdR::synapse0x2ec53e0() {
   return (neuron0x2ec1710()*-0.217308);
}

double NNfunction_sb_uLdR::synapse0x2ec5420() {
   return (neuron0x2ec1a50()*-0.0806367);
}

double NNfunction_sb_uLdR::synapse0x2ec5460() {
   return (neuron0x2ec1d90()*-0.190723);
}

double NNfunction_sb_uLdR::synapse0x2ec57e0() {
   return (neuron0x2ebd260()*0.105477);
}

double NNfunction_sb_uLdR::synapse0x2ec5820() {
   return (neuron0x2ebd510()*-0.111736);
}

double NNfunction_sb_uLdR::synapse0x2ec5860() {
   return (neuron0x2ebd850()*0.405824);
}

double NNfunction_sb_uLdR::synapse0x2ec58a0() {
   return (neuron0x2ebdb90()*0.72938);
}

double NNfunction_sb_uLdR::synapse0x2ec58e0() {
   return (neuron0x2ebded0()*-0.251811);
}

double NNfunction_sb_uLdR::synapse0x2ec5920() {
   return (neuron0x2ebe210()*0.40355);
}

double NNfunction_sb_uLdR::synapse0x2ec5960() {
   return (neuron0x2ebe550()*-0.0431883);
}

double NNfunction_sb_uLdR::synapse0x2ec59a0() {
   return (neuron0x2ebe890()*-0.14543);
}

double NNfunction_sb_uLdR::synapse0x2ec59e0() {
   return (neuron0x2ebebd0()*0.159451);
}

double NNfunction_sb_uLdR::synapse0x2ec5a20() {
   return (neuron0x2ebef10()*0.294255);
}

double NNfunction_sb_uLdR::synapse0x2ec5a60() {
   return (neuron0x2ebf250()*-0.123247);
}

double NNfunction_sb_uLdR::synapse0x2ec5aa0() {
   return (neuron0x2ebf590()*-0.254708);
}

double NNfunction_sb_uLdR::synapse0x2ec5ae0() {
   return (neuron0x2ebf8d0()*0.652377);
}

double NNfunction_sb_uLdR::synapse0x2ec9c20() {
   return (neuron0x2ebfc10()*-0.176236);
}

double NNfunction_sb_uLdR::synapse0x2ec9c60() {
   return (neuron0x2ebff50()*0.421269);
}

double NNfunction_sb_uLdR::synapse0x2ec9ca0() {
   return (neuron0x2ec0290()*-0.0702514);
}

double NNfunction_sb_uLdR::synapse0x2ec5630() {
   return (neuron0x2ec05d0()*0.388778);
}

double NNfunction_sb_uLdR::synapse0x2ec5670() {
   return (neuron0x2ec0b30()*0.196188);
}

double NNfunction_sb_uLdR::synapse0x2ec9df0() {
   return (neuron0x2ec0d50()*0.0955563);
}

double NNfunction_sb_uLdR::synapse0x2ec9e30() {
   return (neuron0x2ec1090()*-0.369628);
}

double NNfunction_sb_uLdR::synapse0x2ec9e70() {
   return (neuron0x2ec13d0()*-0.498472);
}

double NNfunction_sb_uLdR::synapse0x2ec9eb0() {
   return (neuron0x2ec1710()*0.394521);
}

double NNfunction_sb_uLdR::synapse0x2ec9ef0() {
   return (neuron0x2ec1a50()*-0.364136);
}

double NNfunction_sb_uLdR::synapse0x2ec9f30() {
   return (neuron0x2ec1d90()*-0.626222);
}

double NNfunction_sb_uLdR::synapse0x2eca2b0() {
   return (neuron0x2ebd260()*0.0989767);
}

double NNfunction_sb_uLdR::synapse0x2eca2f0() {
   return (neuron0x2ebd510()*-0.248601);
}

double NNfunction_sb_uLdR::synapse0x2eca330() {
   return (neuron0x2ebd850()*0.239735);
}

double NNfunction_sb_uLdR::synapse0x2eca370() {
   return (neuron0x2ebdb90()*-0.321642);
}

double NNfunction_sb_uLdR::synapse0x2eca3b0() {
   return (neuron0x2ebded0()*0.0778215);
}

double NNfunction_sb_uLdR::synapse0x2eca3f0() {
   return (neuron0x2ebe210()*-0.224275);
}

double NNfunction_sb_uLdR::synapse0x2eca430() {
   return (neuron0x2ebe550()*-0.387756);
}

double NNfunction_sb_uLdR::synapse0x2eca470() {
   return (neuron0x2ebe890()*0.0013926);
}

double NNfunction_sb_uLdR::synapse0x2eca4b0() {
   return (neuron0x2ebebd0()*0.0508337);
}

double NNfunction_sb_uLdR::synapse0x2eca4f0() {
   return (neuron0x2ebef10()*0.178766);
}

double NNfunction_sb_uLdR::synapse0x2eca530() {
   return (neuron0x2ebf250()*0.0319794);
}

double NNfunction_sb_uLdR::synapse0x2eca570() {
   return (neuron0x2ebf590()*0.0314037);
}

double NNfunction_sb_uLdR::synapse0x2eca5b0() {
   return (neuron0x2ebf8d0()*0.271441);
}

double NNfunction_sb_uLdR::synapse0x2eca5f0() {
   return (neuron0x2ebfc10()*-0.199003);
}

double NNfunction_sb_uLdR::synapse0x2eca630() {
   return (neuron0x2ebff50()*0.939209);
}

double NNfunction_sb_uLdR::synapse0x2eca670() {
   return (neuron0x2ec0290()*0.840638);
}

double NNfunction_sb_uLdR::synapse0x2eca100() {
   return (neuron0x2ec05d0()*0.287183);
}

double NNfunction_sb_uLdR::synapse0x2eca140() {
   return (neuron0x2ec0b30()*-0.773941);
}

double NNfunction_sb_uLdR::synapse0x2eca7c0() {
   return (neuron0x2ec0d50()*0.0824611);
}

double NNfunction_sb_uLdR::synapse0x2eca800() {
   return (neuron0x2ec1090()*-0.0823664);
}

double NNfunction_sb_uLdR::synapse0x2eca840() {
   return (neuron0x2ec13d0()*0.445608);
}

double NNfunction_sb_uLdR::synapse0x2eca880() {
   return (neuron0x2ec1710()*-0.142658);
}

double NNfunction_sb_uLdR::synapse0x2eca8c0() {
   return (neuron0x2ec1a50()*-0.0339314);
}

double NNfunction_sb_uLdR::synapse0x2eca900() {
   return (neuron0x2ec1d90()*-0.147107);
}

double NNfunction_sb_uLdR::synapse0x2ecac80() {
   return (neuron0x2ebd260()*-0.350527);
}

double NNfunction_sb_uLdR::synapse0x2ecacc0() {
   return (neuron0x2ebd510()*-0.041786);
}

double NNfunction_sb_uLdR::synapse0x2ecad00() {
   return (neuron0x2ebd850()*-0.0319985);
}

double NNfunction_sb_uLdR::synapse0x2ecad40() {
   return (neuron0x2ebdb90()*0.167246);
}

double NNfunction_sb_uLdR::synapse0x2ecad80() {
   return (neuron0x2ebded0()*0.250485);
}

double NNfunction_sb_uLdR::synapse0x2ecadc0() {
   return (neuron0x2ebe210()*0.564255);
}

double NNfunction_sb_uLdR::synapse0x2ecae00() {
   return (neuron0x2ebe550()*0.649029);
}

double NNfunction_sb_uLdR::synapse0x2ecae40() {
   return (neuron0x2ebe890()*-0.751851);
}

double NNfunction_sb_uLdR::synapse0x2ecae80() {
   return (neuron0x2ebebd0()*-0.802752);
}

double NNfunction_sb_uLdR::synapse0x2ecaec0() {
   return (neuron0x2ebef10()*-0.119964);
}

double NNfunction_sb_uLdR::synapse0x2ecaf00() {
   return (neuron0x2ebf250()*-0.158559);
}

double NNfunction_sb_uLdR::synapse0x2ecaf40() {
   return (neuron0x2ebf590()*-0.288479);
}

double NNfunction_sb_uLdR::synapse0x2ecaf80() {
   return (neuron0x2ebf8d0()*0.0999671);
}

double NNfunction_sb_uLdR::synapse0x2ecafc0() {
   return (neuron0x2ebfc10()*0.410589);
}

double NNfunction_sb_uLdR::synapse0x2ecb000() {
   return (neuron0x2ebff50()*-0.227593);
}

double NNfunction_sb_uLdR::synapse0x2ecb040() {
   return (neuron0x2ec0290()*-0.233624);
}

double NNfunction_sb_uLdR::synapse0x2ecaad0() {
   return (neuron0x2ec05d0()*-0.420515);
}

double NNfunction_sb_uLdR::synapse0x2ecab10() {
   return (neuron0x2ec0b30()*0.332276);
}

double NNfunction_sb_uLdR::synapse0x2ecb190() {
   return (neuron0x2ec0d50()*-0.92716);
}

double NNfunction_sb_uLdR::synapse0x2ecb1d0() {
   return (neuron0x2ec1090()*0.372464);
}

double NNfunction_sb_uLdR::synapse0x2ecb210() {
   return (neuron0x2ec13d0()*0.20058);
}

double NNfunction_sb_uLdR::synapse0x2ecb250() {
   return (neuron0x2ec1710()*0.10023);
}

double NNfunction_sb_uLdR::synapse0x2ecb290() {
   return (neuron0x2ec1a50()*-0.310909);
}

double NNfunction_sb_uLdR::synapse0x2ecb2d0() {
   return (neuron0x2ec1d90()*0.678949);
}

double NNfunction_sb_uLdR::synapse0x2ecb650() {
   return (neuron0x2ebd260()*-0.00897154);
}

double NNfunction_sb_uLdR::synapse0x2ecb690() {
   return (neuron0x2ebd510()*0.0733436);
}

double NNfunction_sb_uLdR::synapse0x2ecb6d0() {
   return (neuron0x2ebd850()*-0.893534);
}

double NNfunction_sb_uLdR::synapse0x2ecb710() {
   return (neuron0x2ebdb90()*-1.07647);
}

double NNfunction_sb_uLdR::synapse0x2ecb750() {
   return (neuron0x2ebded0()*0.0377871);
}

double NNfunction_sb_uLdR::synapse0x2ecb790() {
   return (neuron0x2ebe210()*-0.100383);
}

double NNfunction_sb_uLdR::synapse0x2ecb7d0() {
   return (neuron0x2ebe550()*-0.267375);
}

double NNfunction_sb_uLdR::synapse0x2ecb810() {
   return (neuron0x2ebe890()*-0.379071);
}

double NNfunction_sb_uLdR::synapse0x2ecb850() {
   return (neuron0x2ebebd0()*-0.0625285);
}

double NNfunction_sb_uLdR::synapse0x2ecb890() {
   return (neuron0x2ebef10()*-0.176296);
}

double NNfunction_sb_uLdR::synapse0x2ecb8d0() {
   return (neuron0x2ebf250()*0.199865);
}

double NNfunction_sb_uLdR::synapse0x2ecb910() {
   return (neuron0x2ebf590()*1.22358);
}

double NNfunction_sb_uLdR::synapse0x2ecb950() {
   return (neuron0x2ebf8d0()*0.0313774);
}

double NNfunction_sb_uLdR::synapse0x2ecb990() {
   return (neuron0x2ebfc10()*-0.18696);
}

double NNfunction_sb_uLdR::synapse0x2ecb9d0() {
   return (neuron0x2ebff50()*0.0866175);
}

double NNfunction_sb_uLdR::synapse0x2ecba10() {
   return (neuron0x2ec0290()*-0.0138024);
}

double NNfunction_sb_uLdR::synapse0x2ecb4a0() {
   return (neuron0x2ec05d0()*0.303416);
}

double NNfunction_sb_uLdR::synapse0x2ecb4e0() {
   return (neuron0x2ec0b30()*-0.677658);
}

double NNfunction_sb_uLdR::synapse0x2ecbb60() {
   return (neuron0x2ec0d50()*0.0243465);
}

double NNfunction_sb_uLdR::synapse0x2ecbba0() {
   return (neuron0x2ec1090()*-0.279295);
}

double NNfunction_sb_uLdR::synapse0x2ecbbe0() {
   return (neuron0x2ec13d0()*0.18232);
}

double NNfunction_sb_uLdR::synapse0x2ecbc20() {
   return (neuron0x2ec1710()*0.256087);
}

double NNfunction_sb_uLdR::synapse0x2ecbc60() {
   return (neuron0x2ec1a50()*-0.00761142);
}

double NNfunction_sb_uLdR::synapse0x2ecbca0() {
   return (neuron0x2ec1d90()*0.1956);
}

double NNfunction_sb_uLdR::synapse0x2ecc020() {
   return (neuron0x2ebd260()*-0.0072767);
}

double NNfunction_sb_uLdR::synapse0x2ebd3f0() {
   return (neuron0x2ebd510()*0.0245981);
}

double NNfunction_sb_uLdR::synapse0x2ebd430() {
   return (neuron0x2ebd850()*-0.0167763);
}

double NNfunction_sb_uLdR::synapse0x2ebd730() {
   return (neuron0x2ebdb90()*6.88417);
}

double NNfunction_sb_uLdR::synapse0x2ebd770() {
   return (neuron0x2ebded0()*-0.0038213);
}

double NNfunction_sb_uLdR::synapse0x2ebda70() {
   return (neuron0x2ebe210()*0.000787546);
}

double NNfunction_sb_uLdR::synapse0x2ebdab0() {
   return (neuron0x2ebe550()*-0.00375312);
}

double NNfunction_sb_uLdR::synapse0x2ebddb0() {
   return (neuron0x2ebe890()*-0.00215474);
}

double NNfunction_sb_uLdR::synapse0x2ebddf0() {
   return (neuron0x2ebebd0()*-0.00216877);
}

double NNfunction_sb_uLdR::synapse0x2ebe0f0() {
   return (neuron0x2ebef10()*0.00852648);
}

double NNfunction_sb_uLdR::synapse0x2ebe130() {
   return (neuron0x2ebf250()*-0.0161735);
}

double NNfunction_sb_uLdR::synapse0x2ebe430() {
   return (neuron0x2ebf590()*0.333419);
}

double NNfunction_sb_uLdR::synapse0x2ebe470() {
   return (neuron0x2ebf8d0()*0.0155822);
}

double NNfunction_sb_uLdR::synapse0x2ebe770() {
   return (neuron0x2ebfc10()*0.0476149);
}

double NNfunction_sb_uLdR::synapse0x2ebe7b0() {
   return (neuron0x2ebff50()*-0.0013822);
}

double NNfunction_sb_uLdR::synapse0x2ebeab0() {
   return (neuron0x2ec0290()*-0.0419602);
}

double NNfunction_sb_uLdR::synapse0x2ebeaf0() {
   return (neuron0x2ec05d0()*-0.0071432);
}

double NNfunction_sb_uLdR::synapse0x2ebedf0() {
   return (neuron0x2ec0b30()*0.448481);
}

double NNfunction_sb_uLdR::synapse0x2ebee30() {
   return (neuron0x2ec0d50()*-0.0102401);
}

double NNfunction_sb_uLdR::synapse0x2ebf130() {
   return (neuron0x2ec1090()*0.00283777);
}

double NNfunction_sb_uLdR::synapse0x2ebf170() {
   return (neuron0x2ec13d0()*0.0474294);
}

double NNfunction_sb_uLdR::synapse0x2ebf470() {
   return (neuron0x2ec1710()*0.0590478);
}

double NNfunction_sb_uLdR::synapse0x2ebf4b0() {
   return (neuron0x2ec1a50()*0.00898247);
}

double NNfunction_sb_uLdR::synapse0x2ebf7b0() {
   return (neuron0x2ec1d90()*0.027066);
}

double NNfunction_sb_uLdR::synapse0x2ebf7f0() {
   return (neuron0x2ebd260()*-0.114519);
}

double NNfunction_sb_uLdR::synapse0x2ec04b0() {
   return (neuron0x2ebd510()*0.0782588);
}

double NNfunction_sb_uLdR::synapse0x2ec04f0() {
   return (neuron0x2ebd850()*-0.0270616);
}

double NNfunction_sb_uLdR::synapse0x2ecbe70() {
   return (neuron0x2ebdb90()*-0.0961312);
}

double NNfunction_sb_uLdR::synapse0x2ecbeb0() {
   return (neuron0x2ebded0()*0.248291);
}

double NNfunction_sb_uLdR::synapse0x2ec07f0() {
   return (neuron0x2ebe210()*-0.0193287);
}

double NNfunction_sb_uLdR::synapse0x2ec0830() {
   return (neuron0x2ebe550()*-0.0320694);
}

double NNfunction_sb_uLdR::synapse0x2c78200() {
   return (neuron0x2ebe890()*0.145421);
}

double NNfunction_sb_uLdR::synapse0x2c78240() {
   return (neuron0x2ebebd0()*0.417346);
}

double NNfunction_sb_uLdR::synapse0x2ec0f70() {
   return (neuron0x2ebef10()*-0.237427);
}

double NNfunction_sb_uLdR::synapse0x2ec0fb0() {
   return (neuron0x2ebf250()*0.473802);
}

double NNfunction_sb_uLdR::synapse0x2ec12b0() {
   return (neuron0x2ebf590()*-1.02493);
}

double NNfunction_sb_uLdR::synapse0x2ec12f0() {
   return (neuron0x2ebf8d0()*-0.138166);
}

double NNfunction_sb_uLdR::synapse0x2ec15f0() {
   return (neuron0x2ebfc10()*-0.129114);
}

double NNfunction_sb_uLdR::synapse0x2ec1630() {
   return (neuron0x2ebff50()*-0.0339171);
}

double NNfunction_sb_uLdR::synapse0x2ec1930() {
   return (neuron0x2ec0290()*-0.0860413);
}

double NNfunction_sb_uLdR::synapse0x2ec1970() {
   return (neuron0x2ec05d0()*-0.161215);
}

double NNfunction_sb_uLdR::synapse0x2ec1c70() {
   return (neuron0x2ec0b30()*-0.769456);
}

double NNfunction_sb_uLdR::synapse0x2ec1cb0() {
   return (neuron0x2ec0d50()*0.270984);
}

double NNfunction_sb_uLdR::synapse0x2ec1fb0() {
   return (neuron0x2ec1090()*-0.0968338);
}

double NNfunction_sb_uLdR::synapse0x2ec1ff0() {
   return (neuron0x2ec13d0()*-0.0368457);
}

double NNfunction_sb_uLdR::synapse0x2ebfaf0() {
   return (neuron0x2ec1710()*-0.0328831);
}

double NNfunction_sb_uLdR::synapse0x2ebfb30() {
   return (neuron0x2ec1a50()*0.0112185);
}

double NNfunction_sb_uLdR::synapse0x2ecdd90() {
   return (neuron0x2ec1d90()*-0.0340871);
}

double NNfunction_sb_uLdR::synapse0x2ece110() {
   return (neuron0x2ebd260()*-0.0341795);
}

double NNfunction_sb_uLdR::synapse0x2ece150() {
   return (neuron0x2ebd510()*0.00231404);
}

double NNfunction_sb_uLdR::synapse0x2ece190() {
   return (neuron0x2ebd850()*0.0373072);
}

double NNfunction_sb_uLdR::synapse0x2ece1d0() {
   return (neuron0x2ebdb90()*-0.0305548);
}

double NNfunction_sb_uLdR::synapse0x2ece210() {
   return (neuron0x2ebded0()*-0.0154518);
}

double NNfunction_sb_uLdR::synapse0x2ece250() {
   return (neuron0x2ebe210()*-0.00336461);
}

double NNfunction_sb_uLdR::synapse0x2ece290() {
   return (neuron0x2ebe550()*-0.0478608);
}

double NNfunction_sb_uLdR::synapse0x2ece2d0() {
   return (neuron0x2ebe890()*-0.00352601);
}

double NNfunction_sb_uLdR::synapse0x2ece310() {
   return (neuron0x2ebebd0()*-0.00934273);
}

double NNfunction_sb_uLdR::synapse0x2ece350() {
   return (neuron0x2ebef10()*0.0185628);
}

double NNfunction_sb_uLdR::synapse0x2ece390() {
   return (neuron0x2ebf250()*-0.0063194);
}

double NNfunction_sb_uLdR::synapse0x2ece3d0() {
   return (neuron0x2ebf590()*-0.161723);
}

double NNfunction_sb_uLdR::synapse0x2ece410() {
   return (neuron0x2ebf8d0()*-0.444482);
}

double NNfunction_sb_uLdR::synapse0x2ece450() {
   return (neuron0x2ebfc10()*0.0730106);
}

double NNfunction_sb_uLdR::synapse0x2ece490() {
   return (neuron0x2ebff50()*-0.222496);
}

double NNfunction_sb_uLdR::synapse0x2ece4d0() {
   return (neuron0x2ec0290()*-0.277665);
}

double NNfunction_sb_uLdR::synapse0x2ecdf60() {
   return (neuron0x2ec05d0()*0.0995931);
}

double NNfunction_sb_uLdR::synapse0x2ecdfa0() {
   return (neuron0x2ec0b30()*-0.0314803);
}

double NNfunction_sb_uLdR::synapse0x2ece620() {
   return (neuron0x2ec0d50()*-0.248727);
}

double NNfunction_sb_uLdR::synapse0x2ece660() {
   return (neuron0x2ec1090()*0.00873);
}

double NNfunction_sb_uLdR::synapse0x2ece6a0() {
   return (neuron0x2ec13d0()*0.0261554);
}

double NNfunction_sb_uLdR::synapse0x2ece6e0() {
   return (neuron0x2ec1710()*-0.0239131);
}

double NNfunction_sb_uLdR::synapse0x2ece720() {
   return (neuron0x2ec1a50()*0.00680772);
}

double NNfunction_sb_uLdR::synapse0x2ece760() {
   return (neuron0x2ec1d90()*0.000847035);
}

double NNfunction_sb_uLdR::synapse0x2eceae0() {
   return (neuron0x2ebd260()*0.0422675);
}

double NNfunction_sb_uLdR::synapse0x2eceb20() {
   return (neuron0x2ebd510()*0.0102888);
}

double NNfunction_sb_uLdR::synapse0x2eceb60() {
   return (neuron0x2ebd850()*0.0449019);
}

double NNfunction_sb_uLdR::synapse0x2eceba0() {
   return (neuron0x2ebdb90()*0.0251956);
}

double NNfunction_sb_uLdR::synapse0x2ecebe0() {
   return (neuron0x2ebded0()*0.0155045);
}

double NNfunction_sb_uLdR::synapse0x2ecec20() {
   return (neuron0x2ebe210()*-0.00815207);
}

double NNfunction_sb_uLdR::synapse0x2ecec60() {
   return (neuron0x2ebe550()*0.00698893);
}

double NNfunction_sb_uLdR::synapse0x2ececa0() {
   return (neuron0x2ebe890()*-0.0159289);
}

double NNfunction_sb_uLdR::synapse0x2ecece0() {
   return (neuron0x2ebebd0()*-0.0319124);
}

double NNfunction_sb_uLdR::synapse0x2eced20() {
   return (neuron0x2ebef10()*0.0135145);
}

double NNfunction_sb_uLdR::synapse0x2eced60() {
   return (neuron0x2ebf250()*0.012803);
}

double NNfunction_sb_uLdR::synapse0x2eceda0() {
   return (neuron0x2ebf590()*0.419012);
}

double NNfunction_sb_uLdR::synapse0x2ecede0() {
   return (neuron0x2ebf8d0()*0.0319794);
}

double NNfunction_sb_uLdR::synapse0x2ecee20() {
   return (neuron0x2ebfc10()*-0.0073243);
}

double NNfunction_sb_uLdR::synapse0x2ecee60() {
   return (neuron0x2ebff50()*-0.00716089);
}

double NNfunction_sb_uLdR::synapse0x2eceea0() {
   return (neuron0x2ec0290()*-0.0169528);
}

double NNfunction_sb_uLdR::synapse0x2ece930() {
   return (neuron0x2ec05d0()*0.0031101);
}

double NNfunction_sb_uLdR::synapse0x2ece970() {
   return (neuron0x2ec0b30()*-1.53492);
}

double NNfunction_sb_uLdR::synapse0x2eceff0() {
   return (neuron0x2ec0d50()*0.03401);
}

double NNfunction_sb_uLdR::synapse0x2ecf030() {
   return (neuron0x2ec1090()*-0.0112583);
}

double NNfunction_sb_uLdR::synapse0x2ecf070() {
   return (neuron0x2ec13d0()*-0.0338787);
}

double NNfunction_sb_uLdR::synapse0x2ecf0b0() {
   return (neuron0x2ec1710()*-0.00829483);
}

double NNfunction_sb_uLdR::synapse0x2ecf0f0() {
   return (neuron0x2ec1a50()*0.0136062);
}

double NNfunction_sb_uLdR::synapse0x2ecf130() {
   return (neuron0x2ec1d90()*0.00446053);
}

double NNfunction_sb_uLdR::synapse0x2ecf4b0() {
   return (neuron0x2ebd260()*0.243761);
}

double NNfunction_sb_uLdR::synapse0x2ecf4f0() {
   return (neuron0x2ebd510()*0.337977);
}

double NNfunction_sb_uLdR::synapse0x2ecf530() {
   return (neuron0x2ebd850()*-0.237492);
}

double NNfunction_sb_uLdR::synapse0x2ecf570() {
   return (neuron0x2ebdb90()*-0.322817);
}

double NNfunction_sb_uLdR::synapse0x2ecf5b0() {
   return (neuron0x2ebded0()*-0.46972);
}

double NNfunction_sb_uLdR::synapse0x2ecf5f0() {
   return (neuron0x2ebe210()*0.53202);
}

double NNfunction_sb_uLdR::synapse0x2ecf630() {
   return (neuron0x2ebe550()*-0.2022);
}

double NNfunction_sb_uLdR::synapse0x2ecf670() {
   return (neuron0x2ebe890()*0.430527);
}

double NNfunction_sb_uLdR::synapse0x2ecf6b0() {
   return (neuron0x2ebebd0()*0.354301);
}

double NNfunction_sb_uLdR::synapse0x2ecf6f0() {
   return (neuron0x2ebef10()*-0.204462);
}

double NNfunction_sb_uLdR::synapse0x2ecf730() {
   return (neuron0x2ebf250()*-0.0237902);
}

double NNfunction_sb_uLdR::synapse0x2ecf770() {
   return (neuron0x2ebf590()*1.21117);
}

double NNfunction_sb_uLdR::synapse0x2ecf7b0() {
   return (neuron0x2ebf8d0()*0.413591);
}

double NNfunction_sb_uLdR::synapse0x2ecf7f0() {
   return (neuron0x2ebfc10()*-0.363541);
}

double NNfunction_sb_uLdR::synapse0x2ecf830() {
   return (neuron0x2ebff50()*0.109983);
}

double NNfunction_sb_uLdR::synapse0x2ecf870() {
   return (neuron0x2ec0290()*0.0439523);
}

double NNfunction_sb_uLdR::synapse0x2ecf300() {
   return (neuron0x2ec05d0()*0.279788);
}

double NNfunction_sb_uLdR::synapse0x2ecf340() {
   return (neuron0x2ec0b30()*0.404758);
}

double NNfunction_sb_uLdR::synapse0x2ecf9c0() {
   return (neuron0x2ec0d50()*-0.311536);
}

double NNfunction_sb_uLdR::synapse0x2ecfa00() {
   return (neuron0x2ec1090()*0.196689);
}

double NNfunction_sb_uLdR::synapse0x2ecfa40() {
   return (neuron0x2ec13d0()*-0.0279129);
}

double NNfunction_sb_uLdR::synapse0x2ecfa80() {
   return (neuron0x2ec1710()*0.379932);
}

double NNfunction_sb_uLdR::synapse0x2ecfac0() {
   return (neuron0x2ec1a50()*-0.428761);
}

double NNfunction_sb_uLdR::synapse0x2ecfb00() {
   return (neuron0x2ec1d90()*-0.57802);
}

double NNfunction_sb_uLdR::synapse0x2ecfe80() {
   return (neuron0x2ebd260()*0.110096);
}

double NNfunction_sb_uLdR::synapse0x2ecfec0() {
   return (neuron0x2ebd510()*0.0460461);
}

double NNfunction_sb_uLdR::synapse0x2ecff00() {
   return (neuron0x2ebd850()*1.30747);
}

double NNfunction_sb_uLdR::synapse0x2ecff40() {
   return (neuron0x2ebdb90()*0.135559);
}

double NNfunction_sb_uLdR::synapse0x2ecff80() {
   return (neuron0x2ebded0()*-0.0846742);
}

double NNfunction_sb_uLdR::synapse0x2ecffc0() {
   return (neuron0x2ebe210()*-0.0224761);
}

double NNfunction_sb_uLdR::synapse0x2ed0000() {
   return (neuron0x2ebe550()*-0.0604365);
}

double NNfunction_sb_uLdR::synapse0x2ed0040() {
   return (neuron0x2ebe890()*-0.0913467);
}

double NNfunction_sb_uLdR::synapse0x2ed0080() {
   return (neuron0x2ebebd0()*-0.0416051);
}

double NNfunction_sb_uLdR::synapse0x2ed00c0() {
   return (neuron0x2ebef10()*-0.0236081);
}

double NNfunction_sb_uLdR::synapse0x2ed0100() {
   return (neuron0x2ebf250()*0.00208146);
}

double NNfunction_sb_uLdR::synapse0x2ed0140() {
   return (neuron0x2ebf590()*-0.0635973);
}

double NNfunction_sb_uLdR::synapse0x2ed0180() {
   return (neuron0x2ebf8d0()*0.00750635);
}

double NNfunction_sb_uLdR::synapse0x2ed01c0() {
   return (neuron0x2ebfc10()*0.0665269);
}

double NNfunction_sb_uLdR::synapse0x2ed0200() {
   return (neuron0x2ebff50()*0.0986701);
}

double NNfunction_sb_uLdR::synapse0x2ed0240() {
   return (neuron0x2ec0290()*0.00619804);
}

double NNfunction_sb_uLdR::synapse0x2ecfcd0() {
   return (neuron0x2ec05d0()*0.0667556);
}

double NNfunction_sb_uLdR::synapse0x2ecfd10() {
   return (neuron0x2ec0b30()*0.261672);
}

double NNfunction_sb_uLdR::synapse0x2ed0390() {
   return (neuron0x2ec0d50()*0.0393064);
}

double NNfunction_sb_uLdR::synapse0x2ed03d0() {
   return (neuron0x2ec1090()*0.00546106);
}

double NNfunction_sb_uLdR::synapse0x2ed0410() {
   return (neuron0x2ec13d0()*-0.0259325);
}

double NNfunction_sb_uLdR::synapse0x2ed0450() {
   return (neuron0x2ec1710()*-0.0342109);
}

double NNfunction_sb_uLdR::synapse0x2ed0490() {
   return (neuron0x2ec1a50()*-0.0723412);
}

double NNfunction_sb_uLdR::synapse0x2ed04d0() {
   return (neuron0x2ec1d90()*0.115814);
}

double NNfunction_sb_uLdR::synapse0x2ed0850() {
   return (neuron0x2ebd260()*0.318798);
}

double NNfunction_sb_uLdR::synapse0x2ed0890() {
   return (neuron0x2ebd510()*0.0529169);
}

double NNfunction_sb_uLdR::synapse0x2ed08d0() {
   return (neuron0x2ebd850()*0.167242);
}

double NNfunction_sb_uLdR::synapse0x2ed0910() {
   return (neuron0x2ebdb90()*0.581813);
}

double NNfunction_sb_uLdR::synapse0x2ed0950() {
   return (neuron0x2ebded0()*-0.207526);
}

double NNfunction_sb_uLdR::synapse0x2ed0990() {
   return (neuron0x2ebe210()*0.0363345);
}

double NNfunction_sb_uLdR::synapse0x2ed09d0() {
   return (neuron0x2ebe550()*0.0412955);
}

double NNfunction_sb_uLdR::synapse0x2ed0a10() {
   return (neuron0x2ebe890()*0.0660278);
}

double NNfunction_sb_uLdR::synapse0x2ed0a50() {
   return (neuron0x2ebebd0()*0.187399);
}

double NNfunction_sb_uLdR::synapse0x2ec8c10() {
   return (neuron0x2ebef10()*-0.462886);
}

double NNfunction_sb_uLdR::synapse0x2ec8c50() {
   return (neuron0x2ebf250()*-0.534481);
}

double NNfunction_sb_uLdR::synapse0x2ec8c90() {
   return (neuron0x2ebf590()*0.272641);
}

double NNfunction_sb_uLdR::synapse0x2ec8cd0() {
   return (neuron0x2ebf8d0()*-0.430519);
}

double NNfunction_sb_uLdR::synapse0x2ec8d10() {
   return (neuron0x2ebfc10()*0.953838);
}

double NNfunction_sb_uLdR::synapse0x2ec8d50() {
   return (neuron0x2ebff50()*0.22599);
}

double NNfunction_sb_uLdR::synapse0x2ec8d90() {
   return (neuron0x2ec0290()*-0.00223565);
}

double NNfunction_sb_uLdR::synapse0x2ed06a0() {
   return (neuron0x2ec05d0()*0.510095);
}

double NNfunction_sb_uLdR::synapse0x2ed06e0() {
   return (neuron0x2ec0b30()*0.0204775);
}

double NNfunction_sb_uLdR::synapse0x2ec8ee0() {
   return (neuron0x2ec0d50()*-0.588691);
}

double NNfunction_sb_uLdR::synapse0x2ec8f20() {
   return (neuron0x2ec1090()*0.0638954);
}

double NNfunction_sb_uLdR::synapse0x2ec8f60() {
   return (neuron0x2ec13d0()*0.55715);
}

double NNfunction_sb_uLdR::synapse0x2ec8fa0() {
   return (neuron0x2ec1710()*-0.789587);
}

double NNfunction_sb_uLdR::synapse0x2ec8fe0() {
   return (neuron0x2ec1a50()*-0.34494);
}

double NNfunction_sb_uLdR::synapse0x2ec9020() {
   return (neuron0x2ec1d90()*0.115618);
}

double NNfunction_sb_uLdR::synapse0x2ec93a0() {
   return (neuron0x2ebd260()*0.00421707);
}

double NNfunction_sb_uLdR::synapse0x2ec93e0() {
   return (neuron0x2ebd510()*-0.016086);
}

double NNfunction_sb_uLdR::synapse0x2ec9420() {
   return (neuron0x2ebd850()*-0.0717885);
}

double NNfunction_sb_uLdR::synapse0x2ec9460() {
   return (neuron0x2ebdb90()*1.9624);
}

double NNfunction_sb_uLdR::synapse0x2ec94a0() {
   return (neuron0x2ebded0()*-0.00882003);
}

double NNfunction_sb_uLdR::synapse0x2ec94e0() {
   return (neuron0x2ebe210()*-0.00432934);
}

double NNfunction_sb_uLdR::synapse0x2ec9520() {
   return (neuron0x2ebe550()*-0.00531949);
}

double NNfunction_sb_uLdR::synapse0x2ec9560() {
   return (neuron0x2ebe890()*0.000253138);
}

double NNfunction_sb_uLdR::synapse0x2ec95a0() {
   return (neuron0x2ebebd0()*0.0210238);
}

double NNfunction_sb_uLdR::synapse0x2ec95e0() {
   return (neuron0x2ebef10()*-0.00511431);
}

double NNfunction_sb_uLdR::synapse0x2ec9620() {
   return (neuron0x2ebf250()*0.0165663);
}

double NNfunction_sb_uLdR::synapse0x2ec9660() {
   return (neuron0x2ebf590()*0.167597);
}

double NNfunction_sb_uLdR::synapse0x2ec96a0() {
   return (neuron0x2ebf8d0()*-0.0434143);
}

double NNfunction_sb_uLdR::synapse0x2ec96e0() {
   return (neuron0x2ebfc10()*-0.00873733);
}

double NNfunction_sb_uLdR::synapse0x2ec9720() {
   return (neuron0x2ebff50()*-0.0346259);
}

double NNfunction_sb_uLdR::synapse0x2ec9760() {
   return (neuron0x2ec0290()*-0.0405729);
}

double NNfunction_sb_uLdR::synapse0x2ec91f0() {
   return (neuron0x2ec05d0()*0.00986419);
}

double NNfunction_sb_uLdR::synapse0x2ec9230() {
   return (neuron0x2ec0b30()*0.114495);
}

double NNfunction_sb_uLdR::synapse0x2ec98b0() {
   return (neuron0x2ec0d50()*-0.0245324);
}

double NNfunction_sb_uLdR::synapse0x2ec98f0() {
   return (neuron0x2ec1090()*-0.0179721);
}

double NNfunction_sb_uLdR::synapse0x2ec9930() {
   return (neuron0x2ec13d0()*0.00334532);
}

double NNfunction_sb_uLdR::synapse0x2ec9970() {
   return (neuron0x2ec1710()*-0.0178336);
}

double NNfunction_sb_uLdR::synapse0x2ec99b0() {
   return (neuron0x2ec1a50()*0.00309619);
}

double NNfunction_sb_uLdR::synapse0x2ec99f0() {
   return (neuron0x2ec1d90()*-0.0245833);
}

double NNfunction_sb_uLdR::synapse0x2ec9bc0() {
   return (neuron0x2ebd260()*0.0368452);
}

double NNfunction_sb_uLdR::synapse0x2ed2c50() {
   return (neuron0x2ebd510()*-0.0100296);
}

double NNfunction_sb_uLdR::synapse0x2ed2c90() {
   return (neuron0x2ebd850()*-0.0657351);
}

double NNfunction_sb_uLdR::synapse0x2ed2cd0() {
   return (neuron0x2ebdb90()*-0.0543676);
}

double NNfunction_sb_uLdR::synapse0x2ed2d10() {
   return (neuron0x2ebded0()*0.0268934);
}

double NNfunction_sb_uLdR::synapse0x2ed2d50() {
   return (neuron0x2ebe210()*0.0216238);
}

double NNfunction_sb_uLdR::synapse0x2ed2d90() {
   return (neuron0x2ebe550()*-0.0213554);
}

double NNfunction_sb_uLdR::synapse0x2ed2dd0() {
   return (neuron0x2ebe890()*-0.0138228);
}

double NNfunction_sb_uLdR::synapse0x2ed2e10() {
   return (neuron0x2ebebd0()*0.012024);
}

double NNfunction_sb_uLdR::synapse0x2ed2e50() {
   return (neuron0x2ebef10()*0.022108);
}

double NNfunction_sb_uLdR::synapse0x2ed2e90() {
   return (neuron0x2ebf250()*-0.00038634);
}

double NNfunction_sb_uLdR::synapse0x2ed2ed0() {
   return (neuron0x2ebf590()*-0.521811);
}

double NNfunction_sb_uLdR::synapse0x2ed2f10() {
   return (neuron0x2ebf8d0()*0.0447669);
}

double NNfunction_sb_uLdR::synapse0x2ed2f50() {
   return (neuron0x2ebfc10()*-0.00676426);
}

double NNfunction_sb_uLdR::synapse0x2ed2f90() {
   return (neuron0x2ebff50()*0.0282508);
}

double NNfunction_sb_uLdR::synapse0x2ed2fd0() {
   return (neuron0x2ec0290()*-0.0152459);
}

double NNfunction_sb_uLdR::synapse0x2ed2aa0() {
   return (neuron0x2ec05d0()*-0.0195547);
}

double NNfunction_sb_uLdR::synapse0x2ed2ae0() {
   return (neuron0x2ec0b30()*-0.574834);
}

double NNfunction_sb_uLdR::synapse0x2ed3120() {
   return (neuron0x2ec0d50()*-0.013366);
}

double NNfunction_sb_uLdR::synapse0x2ed3160() {
   return (neuron0x2ec1090()*-0.0212166);
}

double NNfunction_sb_uLdR::synapse0x2ed31a0() {
   return (neuron0x2ec13d0()*-0.00335257);
}

double NNfunction_sb_uLdR::synapse0x2ed31e0() {
   return (neuron0x2ec1710()*0.00572973);
}

double NNfunction_sb_uLdR::synapse0x2ed3220() {
   return (neuron0x2ec1a50()*0.0091356);
}

double NNfunction_sb_uLdR::synapse0x2ed3260() {
   return (neuron0x2ec1d90()*-0.00949528);
}

double NNfunction_sb_uLdR::synapse0x2ed35e0() {
   return (neuron0x2ebd260()*0.0411252);
}

double NNfunction_sb_uLdR::synapse0x2ed3620() {
   return (neuron0x2ebd510()*-0.428897);
}

double NNfunction_sb_uLdR::synapse0x2ed3660() {
   return (neuron0x2ebd850()*-0.0264017);
}

double NNfunction_sb_uLdR::synapse0x2ed36a0() {
   return (neuron0x2ebdb90()*1.36395);
}

double NNfunction_sb_uLdR::synapse0x2ed36e0() {
   return (neuron0x2ebded0()*0.570896);
}

double NNfunction_sb_uLdR::synapse0x2ed3720() {
   return (neuron0x2ebe210()*-0.149489);
}

double NNfunction_sb_uLdR::synapse0x2ed3760() {
   return (neuron0x2ebe550()*-0.208249);
}

double NNfunction_sb_uLdR::synapse0x2ed37a0() {
   return (neuron0x2ebe890()*0.236611);
}

double NNfunction_sb_uLdR::synapse0x2ed37e0() {
   return (neuron0x2ebebd0()*-0.276192);
}

double NNfunction_sb_uLdR::synapse0x2ed3820() {
   return (neuron0x2ebef10()*0.172987);
}

double NNfunction_sb_uLdR::synapse0x2ed3860() {
   return (neuron0x2ebf250()*-0.0272752);
}

double NNfunction_sb_uLdR::synapse0x2ed38a0() {
   return (neuron0x2ebf590()*-0.479793);
}

double NNfunction_sb_uLdR::synapse0x2ed38e0() {
   return (neuron0x2ebf8d0()*0.133128);
}

double NNfunction_sb_uLdR::synapse0x2ed3920() {
   return (neuron0x2ebfc10()*0.0208042);
}

double NNfunction_sb_uLdR::synapse0x2ed3960() {
   return (neuron0x2ebff50()*-0.44001);
}

double NNfunction_sb_uLdR::synapse0x2ed39a0() {
   return (neuron0x2ec0290()*-0.465633);
}

double NNfunction_sb_uLdR::synapse0x2ed3430() {
   return (neuron0x2ec05d0()*0.26158);
}

double NNfunction_sb_uLdR::synapse0x2ed3470() {
   return (neuron0x2ec0b30()*-1.14857);
}

double NNfunction_sb_uLdR::synapse0x2ed3af0() {
   return (neuron0x2ec0d50()*0.077752);
}

double NNfunction_sb_uLdR::synapse0x2ed3b30() {
   return (neuron0x2ec1090()*-0.261802);
}

double NNfunction_sb_uLdR::synapse0x2ed3b70() {
   return (neuron0x2ec13d0()*-0.305011);
}

double NNfunction_sb_uLdR::synapse0x2ed3bb0() {
   return (neuron0x2ec1710()*-0.335256);
}

double NNfunction_sb_uLdR::synapse0x2ed3bf0() {
   return (neuron0x2ec1a50()*-0.205199);
}

double NNfunction_sb_uLdR::synapse0x2ed3c30() {
   return (neuron0x2ec1d90()*-0.471856);
}

double NNfunction_sb_uLdR::synapse0x2ed3fb0() {
   return (neuron0x2ebd260()*0.0148172);
}

double NNfunction_sb_uLdR::synapse0x2ed3ff0() {
   return (neuron0x2ebd510()*-0.0228688);
}

double NNfunction_sb_uLdR::synapse0x2ed4030() {
   return (neuron0x2ebd850()*-0.0124029);
}

double NNfunction_sb_uLdR::synapse0x2ed4070() {
   return (neuron0x2ebdb90()*-2.06457);
}

double NNfunction_sb_uLdR::synapse0x2ed40b0() {
   return (neuron0x2ebded0()*0.0109941);
}

double NNfunction_sb_uLdR::synapse0x2ed40f0() {
   return (neuron0x2ebe210()*-0.0154295);
}

double NNfunction_sb_uLdR::synapse0x2ed4130() {
   return (neuron0x2ebe550()*0.00282363);
}

double NNfunction_sb_uLdR::synapse0x2ed4170() {
   return (neuron0x2ebe890()*-0.00362239);
}

double NNfunction_sb_uLdR::synapse0x2ed41b0() {
   return (neuron0x2ebebd0()*0.0224711);
}

double NNfunction_sb_uLdR::synapse0x2ed41f0() {
   return (neuron0x2ebef10()*0.0101028);
}

double NNfunction_sb_uLdR::synapse0x2ed4230() {
   return (neuron0x2ebf250()*0.0111077);
}

double NNfunction_sb_uLdR::synapse0x2ed4270() {
   return (neuron0x2ebf590()*0.0092491);
}

double NNfunction_sb_uLdR::synapse0x2ed42b0() {
   return (neuron0x2ebf8d0()*-0.0485579);
}

double NNfunction_sb_uLdR::synapse0x2ed42f0() {
   return (neuron0x2ebfc10()*-0.0455379);
}

double NNfunction_sb_uLdR::synapse0x2ed4330() {
   return (neuron0x2ebff50()*-0.0236717);
}

double NNfunction_sb_uLdR::synapse0x2ed4370() {
   return (neuron0x2ec0290()*-0.0395194);
}

double NNfunction_sb_uLdR::synapse0x2ed3e00() {
   return (neuron0x2ec05d0()*0.0136743);
}

double NNfunction_sb_uLdR::synapse0x2ed3e40() {
   return (neuron0x2ec0b30()*0.202789);
}

double NNfunction_sb_uLdR::synapse0x2ed44c0() {
   return (neuron0x2ec0d50()*-0.029069);
}

double NNfunction_sb_uLdR::synapse0x2ed4500() {
   return (neuron0x2ec1090()*-0.00243779);
}

double NNfunction_sb_uLdR::synapse0x2ed4540() {
   return (neuron0x2ec13d0()*-0.0103738);
}

double NNfunction_sb_uLdR::synapse0x2ed4580() {
   return (neuron0x2ec1710()*0.00284436);
}

double NNfunction_sb_uLdR::synapse0x2ed45c0() {
   return (neuron0x2ec1a50()*-4.77599e-05);
}

double NNfunction_sb_uLdR::synapse0x2ed4600() {
   return (neuron0x2ec1d90()*-0.0281674);
}

double NNfunction_sb_uLdR::synapse0x2ed4980() {
   return (neuron0x2ebd260()*0.0957811);
}

double NNfunction_sb_uLdR::synapse0x2ed49c0() {
   return (neuron0x2ebd510()*-0.00283059);
}

double NNfunction_sb_uLdR::synapse0x2ed4a00() {
   return (neuron0x2ebd850()*0.0353428);
}

double NNfunction_sb_uLdR::synapse0x2ed4a40() {
   return (neuron0x2ebdb90()*0.188779);
}

double NNfunction_sb_uLdR::synapse0x2ed4a80() {
   return (neuron0x2ebded0()*0.00865534);
}

double NNfunction_sb_uLdR::synapse0x2ed4ac0() {
   return (neuron0x2ebe210()*-0.00256403);
}

double NNfunction_sb_uLdR::synapse0x2ed4b00() {
   return (neuron0x2ebe550()*-0.0116038);
}

double NNfunction_sb_uLdR::synapse0x2ed4b40() {
   return (neuron0x2ebe890()*0.016119);
}

double NNfunction_sb_uLdR::synapse0x2ed4b80() {
   return (neuron0x2ebebd0()*0.0202371);
}

double NNfunction_sb_uLdR::synapse0x2ed4bc0() {
   return (neuron0x2ebef10()*-0.0204452);
}

double NNfunction_sb_uLdR::synapse0x2ed4c00() {
   return (neuron0x2ebf250()*-0.00130199);
}

double NNfunction_sb_uLdR::synapse0x2ed4c40() {
   return (neuron0x2ebf590()*-1.08484);
}

double NNfunction_sb_uLdR::synapse0x2ed4c80() {
   return (neuron0x2ebf8d0()*0.00744654);
}

double NNfunction_sb_uLdR::synapse0x2ed4cc0() {
   return (neuron0x2ebfc10()*0.0193365);
}

double NNfunction_sb_uLdR::synapse0x2ed4d00() {
   return (neuron0x2ebff50()*0.0240658);
}

double NNfunction_sb_uLdR::synapse0x2ed4d40() {
   return (neuron0x2ec0290()*-0.00263991);
}

double NNfunction_sb_uLdR::synapse0x2ed47d0() {
   return (neuron0x2ec05d0()*0.0331479);
}

double NNfunction_sb_uLdR::synapse0x2ed4810() {
   return (neuron0x2ec0b30()*0.962315);
}

double NNfunction_sb_uLdR::synapse0x2ed4e90() {
   return (neuron0x2ec0d50()*0.0236184);
}

double NNfunction_sb_uLdR::synapse0x2ed4ed0() {
   return (neuron0x2ec1090()*-0.022602);
}

double NNfunction_sb_uLdR::synapse0x2ed4f10() {
   return (neuron0x2ec13d0()*-0.0258379);
}

double NNfunction_sb_uLdR::synapse0x2ed4f50() {
   return (neuron0x2ec1710()*-0.0340053);
}

double NNfunction_sb_uLdR::synapse0x2ed4f90() {
   return (neuron0x2ec1a50()*-0.0112347);
}

double NNfunction_sb_uLdR::synapse0x2ed4fd0() {
   return (neuron0x2ec1d90()*-0.0493066);
}

double NNfunction_sb_uLdR::synapse0x2ed5350() {
   return (neuron0x2ebd260()*0.000144944);
}

double NNfunction_sb_uLdR::synapse0x2ed5390() {
   return (neuron0x2ebd510()*-0.0199865);
}

double NNfunction_sb_uLdR::synapse0x2ed53d0() {
   return (neuron0x2ebd850()*0.0371554);
}

double NNfunction_sb_uLdR::synapse0x2ed5410() {
   return (neuron0x2ebdb90()*-5.69631);
}

double NNfunction_sb_uLdR::synapse0x2ed5450() {
   return (neuron0x2ebded0()*0.00109185);
}

double NNfunction_sb_uLdR::synapse0x2ed5490() {
   return (neuron0x2ebe210()*-0.00332454);
}

double NNfunction_sb_uLdR::synapse0x2ed54d0() {
   return (neuron0x2ebe550()*-0.00275595);
}

double NNfunction_sb_uLdR::synapse0x2ed5510() {
   return (neuron0x2ebe890()*-0.0162926);
}

double NNfunction_sb_uLdR::synapse0x2ed5550() {
   return (neuron0x2ebebd0()*0.0163928);
}

double NNfunction_sb_uLdR::synapse0x2ed5590() {
   return (neuron0x2ebef10()*-0.0251486);
}

double NNfunction_sb_uLdR::synapse0x2ed55d0() {
   return (neuron0x2ebf250()*0.00151794);
}

double NNfunction_sb_uLdR::synapse0x2ed5610() {
   return (neuron0x2ebf590()*0.855733);
}

double NNfunction_sb_uLdR::synapse0x2ed5650() {
   return (neuron0x2ebf8d0()*-0.039697);
}

double NNfunction_sb_uLdR::synapse0x2ed5690() {
   return (neuron0x2ebfc10()*-0.019062);
}

double NNfunction_sb_uLdR::synapse0x2ed56d0() {
   return (neuron0x2ebff50()*-0.0168372);
}

double NNfunction_sb_uLdR::synapse0x2ed5710() {
   return (neuron0x2ec0290()*-0.00417583);
}

double NNfunction_sb_uLdR::synapse0x2ed51a0() {
   return (neuron0x2ec05d0()*0.0133507);
}

double NNfunction_sb_uLdR::synapse0x2ed51e0() {
   return (neuron0x2ec0b30()*0.469831);
}

double NNfunction_sb_uLdR::synapse0x2ed5860() {
   return (neuron0x2ec0d50()*-0.0123529);
}

double NNfunction_sb_uLdR::synapse0x2ed58a0() {
   return (neuron0x2ec1090()*-0.0145165);
}

double NNfunction_sb_uLdR::synapse0x2ed58e0() {
   return (neuron0x2ec13d0()*-0.0436395);
}

double NNfunction_sb_uLdR::synapse0x2ed5920() {
   return (neuron0x2ec1710()*-0.00697586);
}

double NNfunction_sb_uLdR::synapse0x2ed5960() {
   return (neuron0x2ec1a50()*-0.0239752);
}

double NNfunction_sb_uLdR::synapse0x2ed59a0() {
   return (neuron0x2ec1d90()*-0.00837403);
}

double NNfunction_sb_uLdR::synapse0x2ed5d20() {
   return (neuron0x2ebd260()*0.0159233);
}

double NNfunction_sb_uLdR::synapse0x2ed5d60() {
   return (neuron0x2ebd510()*0.0343463);
}

double NNfunction_sb_uLdR::synapse0x2ed5da0() {
   return (neuron0x2ebd850()*0.324222);
}

double NNfunction_sb_uLdR::synapse0x2ed5de0() {
   return (neuron0x2ebdb90()*-1.29434);
}

double NNfunction_sb_uLdR::synapse0x2ed5e20() {
   return (neuron0x2ebded0()*-0.332041);
}

double NNfunction_sb_uLdR::synapse0x2ed5e60() {
   return (neuron0x2ebe210()*-0.110335);
}

double NNfunction_sb_uLdR::synapse0x2ed5ea0() {
   return (neuron0x2ebe550()*-0.159762);
}

double NNfunction_sb_uLdR::synapse0x2ed5ee0() {
   return (neuron0x2ebe890()*0.0204683);
}

double NNfunction_sb_uLdR::synapse0x2ed5f20() {
   return (neuron0x2ebebd0()*-0.24505);
}

double NNfunction_sb_uLdR::synapse0x2ed5f60() {
   return (neuron0x2ebef10()*0.00304498);
}

double NNfunction_sb_uLdR::synapse0x2ed5fa0() {
   return (neuron0x2ebf250()*-0.0236503);
}

double NNfunction_sb_uLdR::synapse0x2ed5fe0() {
   return (neuron0x2ebf590()*0.879095);
}

double NNfunction_sb_uLdR::synapse0x2ed6020() {
   return (neuron0x2ebf8d0()*-0.0410343);
}

double NNfunction_sb_uLdR::synapse0x2ed6060() {
   return (neuron0x2ebfc10()*0.371285);
}

double NNfunction_sb_uLdR::synapse0x2ed60a0() {
   return (neuron0x2ebff50()*0.104252);
}

double NNfunction_sb_uLdR::synapse0x2ed60e0() {
   return (neuron0x2ec0290()*0.0548826);
}

double NNfunction_sb_uLdR::synapse0x2ed5b70() {
   return (neuron0x2ec05d0()*0.301543);
}

double NNfunction_sb_uLdR::synapse0x2ed5bb0() {
   return (neuron0x2ec0b30()*0.335034);
}

double NNfunction_sb_uLdR::synapse0x2ed6230() {
   return (neuron0x2ec0d50()*-0.183526);
}

double NNfunction_sb_uLdR::synapse0x2ed6270() {
   return (neuron0x2ec1090()*-0.094737);
}

double NNfunction_sb_uLdR::synapse0x2ed62b0() {
   return (neuron0x2ec13d0()*0.0266833);
}

double NNfunction_sb_uLdR::synapse0x2ed62f0() {
   return (neuron0x2ec1710()*-0.0665388);
}

double NNfunction_sb_uLdR::synapse0x2ed6330() {
   return (neuron0x2ec1a50()*-0.000700958);
}

double NNfunction_sb_uLdR::synapse0x2ed6370() {
   return (neuron0x2ec1d90()*-0.00589551);
}

double NNfunction_sb_uLdR::synapse0x2ed66f0() {
   return (neuron0x2ebd260()*0.840609);
}

double NNfunction_sb_uLdR::synapse0x2ed6730() {
   return (neuron0x2ebd510()*0.0620032);
}

double NNfunction_sb_uLdR::synapse0x2ed6770() {
   return (neuron0x2ebd850()*0.526086);
}

double NNfunction_sb_uLdR::synapse0x2ed67b0() {
   return (neuron0x2ebdb90()*0.0428267);
}

double NNfunction_sb_uLdR::synapse0x2ed67f0() {
   return (neuron0x2ebded0()*-0.104202);
}

double NNfunction_sb_uLdR::synapse0x2ed6830() {
   return (neuron0x2ebe210()*-0.0998378);
}

double NNfunction_sb_uLdR::synapse0x2ed6870() {
   return (neuron0x2ebe550()*0.469624);
}

double NNfunction_sb_uLdR::synapse0x2ed68b0() {
   return (neuron0x2ebe890()*0.0864033);
}

double NNfunction_sb_uLdR::synapse0x2ed68f0() {
   return (neuron0x2ebebd0()*-0.355956);
}

double NNfunction_sb_uLdR::synapse0x2ed6930() {
   return (neuron0x2ebef10()*-0.943282);
}

double NNfunction_sb_uLdR::synapse0x2ed6970() {
   return (neuron0x2ebf250()*0.516905);
}

double NNfunction_sb_uLdR::synapse0x2ed69b0() {
   return (neuron0x2ebf590()*0.808216);
}

double NNfunction_sb_uLdR::synapse0x2ed69f0() {
   return (neuron0x2ebf8d0()*0.279231);
}

double NNfunction_sb_uLdR::synapse0x2ed6a30() {
   return (neuron0x2ebfc10()*0.0845864);
}

double NNfunction_sb_uLdR::synapse0x2ed6a70() {
   return (neuron0x2ebff50()*0.118469);
}

double NNfunction_sb_uLdR::synapse0x2ed6ab0() {
   return (neuron0x2ec0290()*0.0306362);
}

double NNfunction_sb_uLdR::synapse0x2ed6540() {
   return (neuron0x2ec05d0()*-0.0865393);
}

double NNfunction_sb_uLdR::synapse0x2ed6580() {
   return (neuron0x2ec0b30()*0.0412331);
}

double NNfunction_sb_uLdR::synapse0x2ed6c00() {
   return (neuron0x2ec0d50()*-0.208695);
}

double NNfunction_sb_uLdR::synapse0x2ed6c40() {
   return (neuron0x2ec1090()*-0.326927);
}

double NNfunction_sb_uLdR::synapse0x2ed6c80() {
   return (neuron0x2ec13d0()*-0.262479);
}

double NNfunction_sb_uLdR::synapse0x2ed6cc0() {
   return (neuron0x2ec1710()*-0.507524);
}

double NNfunction_sb_uLdR::synapse0x2ed6d00() {
   return (neuron0x2ec1a50()*0.0030174);
}

double NNfunction_sb_uLdR::synapse0x2ed6d40() {
   return (neuron0x2ec1d90()*0.00451175);
}

double NNfunction_sb_uLdR::synapse0x2ed70c0() {
   return (neuron0x2ebd260()*0.0912872);
}

double NNfunction_sb_uLdR::synapse0x2ed7100() {
   return (neuron0x2ebd510()*-0.0699137);
}

double NNfunction_sb_uLdR::synapse0x2ed7140() {
   return (neuron0x2ebd850()*-0.163386);
}

double NNfunction_sb_uLdR::synapse0x2ed7180() {
   return (neuron0x2ebdb90()*0.331128);
}

double NNfunction_sb_uLdR::synapse0x2ed71c0() {
   return (neuron0x2ebded0()*0.302234);
}

double NNfunction_sb_uLdR::synapse0x2ed7200() {
   return (neuron0x2ebe210()*0.215256);
}

double NNfunction_sb_uLdR::synapse0x2ed7240() {
   return (neuron0x2ebe550()*0.26517);
}

double NNfunction_sb_uLdR::synapse0x2ed7280() {
   return (neuron0x2ebe890()*0.403525);
}

double NNfunction_sb_uLdR::synapse0x2ed72c0() {
   return (neuron0x2ebebd0()*-1.00727);
}

double NNfunction_sb_uLdR::synapse0x2ed7300() {
   return (neuron0x2ebef10()*0.0352937);
}

double NNfunction_sb_uLdR::synapse0x2ed7340() {
   return (neuron0x2ebf250()*0.197811);
}

double NNfunction_sb_uLdR::synapse0x2ed7380() {
   return (neuron0x2ebf590()*-0.293524);
}

double NNfunction_sb_uLdR::synapse0x2ed73c0() {
   return (neuron0x2ebf8d0()*-0.092679);
}

double NNfunction_sb_uLdR::synapse0x2ed7400() {
   return (neuron0x2ebfc10()*0.0997193);
}

double NNfunction_sb_uLdR::synapse0x2ed7440() {
   return (neuron0x2ebff50()*-0.547493);
}

double NNfunction_sb_uLdR::synapse0x2ed7480() {
   return (neuron0x2ec0290()*-0.227159);
}

double NNfunction_sb_uLdR::synapse0x2ed6f10() {
   return (neuron0x2ec05d0()*-0.420727);
}

double NNfunction_sb_uLdR::synapse0x2ed6f50() {
   return (neuron0x2ec0b30()*-0.0176963);
}

double NNfunction_sb_uLdR::synapse0x2ed75d0() {
   return (neuron0x2ec0d50()*0.0695381);
}

double NNfunction_sb_uLdR::synapse0x2ed7610() {
   return (neuron0x2ec1090()*0.402591);
}

double NNfunction_sb_uLdR::synapse0x2ed7650() {
   return (neuron0x2ec13d0()*0.558286);
}

double NNfunction_sb_uLdR::synapse0x2ed7690() {
   return (neuron0x2ec1710()*-0.186933);
}

double NNfunction_sb_uLdR::synapse0x2ed76d0() {
   return (neuron0x2ec1a50()*0.165237);
}

double NNfunction_sb_uLdR::synapse0x2ed7710() {
   return (neuron0x2ec1d90()*0.00130972);
}

double NNfunction_sb_uLdR::synapse0x2ed7a90() {
   return (neuron0x2ebd260()*-0.258331);
}

double NNfunction_sb_uLdR::synapse0x2ecc060() {
   return (neuron0x2ebd510()*-0.059838);
}

double NNfunction_sb_uLdR::synapse0x2ecc0a0() {
   return (neuron0x2ebd850()*-0.0616731);
}

double NNfunction_sb_uLdR::synapse0x2ecc0e0() {
   return (neuron0x2ebdb90()*0.189711);
}

double NNfunction_sb_uLdR::synapse0x2ecc330() {
   return (neuron0x2ebded0()*-0.120362);
}

double NNfunction_sb_uLdR::synapse0x2ecc370() {
   return (neuron0x2ebe210()*-0.595036);
}

double NNfunction_sb_uLdR::synapse0x2ecc3b0() {
   return (neuron0x2ebe550()*0.191458);
}

double NNfunction_sb_uLdR::synapse0x2ecc600() {
   return (neuron0x2ebe890()*-0.257618);
}

double NNfunction_sb_uLdR::synapse0x2ecc640() {
   return (neuron0x2ebebd0()*-0.360125);
}

double NNfunction_sb_uLdR::synapse0x2ecc890() {
   return (neuron0x2ebef10()*-0.0634252);
}

double NNfunction_sb_uLdR::synapse0x2ecc8d0() {
   return (neuron0x2ebf250()*-0.0156899);
}

double NNfunction_sb_uLdR::synapse0x2ecc910() {
   return (neuron0x2ebf590()*0.083446);
}

double NNfunction_sb_uLdR::synapse0x2eccb60() {
   return (neuron0x2ebf8d0()*0.22577);
}

double NNfunction_sb_uLdR::synapse0x2eccba0() {
   return (neuron0x2ebfc10()*0.128519);
}

double NNfunction_sb_uLdR::synapse0x2eccdf0() {
   return (neuron0x2ebff50()*0.0901074);
}

double NNfunction_sb_uLdR::synapse0x2ecce30() {
   return (neuron0x2ec0290()*0.121281);
}

double NNfunction_sb_uLdR::synapse0x2ed78e0() {
   return (neuron0x2ec05d0()*-0.248014);
}

double NNfunction_sb_uLdR::synapse0x2ed7920() {
   return (neuron0x2ec0b30()*1.13746);
}

double NNfunction_sb_uLdR::synapse0x2eccf80() {
   return (neuron0x2ec0d50()*0.0238276);
}

double NNfunction_sb_uLdR::synapse0x2ecd490() {
   return (neuron0x2ec1090()*0.0282945);
}

double NNfunction_sb_uLdR::synapse0x2ecd4d0() {
   return (neuron0x2ec13d0()*0.34649);
}

double NNfunction_sb_uLdR::synapse0x2ecd510() {
   return (neuron0x2ec1710()*-0.368165);
}

double NNfunction_sb_uLdR::synapse0x2ecd760() {
   return (neuron0x2ec1a50()*-0.0264748);
}

double NNfunction_sb_uLdR::synapse0x2ecd7a0() {
   return (neuron0x2ec1d90()*0.263588);
}

double NNfunction_sb_uLdR::synapse0x2ecd050() {
   return (neuron0x2ebd260()*-0.0105651);
}

double NNfunction_sb_uLdR::synapse0x2ecd090() {
   return (neuron0x2ebd510()*-0.00722349);
}

double NNfunction_sb_uLdR::synapse0x2ecd0d0() {
   return (neuron0x2ebd850()*-0.040775);
}

double NNfunction_sb_uLdR::synapse0x2ecd110() {
   return (neuron0x2ebdb90()*10.4156);
}

double NNfunction_sb_uLdR::synapse0x2ecda90() {
   return (neuron0x2ebded0()*0.00128695);
}

double NNfunction_sb_uLdR::synapse0x2ed9de0() {
   return (neuron0x2ebe210()*-0.0101403);
}

double NNfunction_sb_uLdR::synapse0x2ed9e20() {
   return (neuron0x2ebe550()*-0.00156008);
}

double NNfunction_sb_uLdR::synapse0x2ed9e60() {
   return (neuron0x2ebe890()*-0.0094372);
}

double NNfunction_sb_uLdR::synapse0x2ed9ea0() {
   return (neuron0x2ebebd0()*-0.000409292);
}

double NNfunction_sb_uLdR::synapse0x2ed9ee0() {
   return (neuron0x2ebef10()*-0.0110877);
}

double NNfunction_sb_uLdR::synapse0x2ed9f20() {
   return (neuron0x2ebf250()*0.0225338);
}

double NNfunction_sb_uLdR::synapse0x2ed9f60() {
   return (neuron0x2ebf590()*-0.0346405);
}

double NNfunction_sb_uLdR::synapse0x2ed9fa0() {
   return (neuron0x2ebf8d0()*-0.027478);
}

double NNfunction_sb_uLdR::synapse0x2ed9fe0() {
   return (neuron0x2ebfc10()*-0.0145126);
}

double NNfunction_sb_uLdR::synapse0x2eda020() {
   return (neuron0x2ebff50()*0.00550076);
}

double NNfunction_sb_uLdR::synapse0x2eda060() {
   return (neuron0x2ec0290()*-0.0355164);
}

double NNfunction_sb_uLdR::synapse0x2ecd970() {
   return (neuron0x2ec05d0()*0.0338862);
}

double NNfunction_sb_uLdR::synapse0x2ecd9b0() {
   return (neuron0x2ec0b30()*0.0138377);
}

double NNfunction_sb_uLdR::synapse0x2eda1b0() {
   return (neuron0x2ec0d50()*0.0350013);
}

double NNfunction_sb_uLdR::synapse0x2eda1f0() {
   return (neuron0x2ec1090()*-0.0212342);
}

double NNfunction_sb_uLdR::synapse0x2eda230() {
   return (neuron0x2ec13d0()*0.0531977);
}

double NNfunction_sb_uLdR::synapse0x2eda270() {
   return (neuron0x2ec1710()*0.0165798);
}

double NNfunction_sb_uLdR::synapse0x2eda2b0() {
   return (neuron0x2ec1a50()*0.0154625);
}

double NNfunction_sb_uLdR::synapse0x2eda2f0() {
   return (neuron0x2ec1d90()*-0.00637455);
}

double NNfunction_sb_uLdR::synapse0x2eda670() {
   return (neuron0x2ebd260()*-0.181408);
}

double NNfunction_sb_uLdR::synapse0x2eda6b0() {
   return (neuron0x2ebd510()*-0.109825);
}

double NNfunction_sb_uLdR::synapse0x2eda6f0() {
   return (neuron0x2ebd850()*-0.796073);
}

double NNfunction_sb_uLdR::synapse0x2eda730() {
   return (neuron0x2ebdb90()*0.983851);
}

double NNfunction_sb_uLdR::synapse0x2eda770() {
   return (neuron0x2ebded0()*-0.697793);
}

double NNfunction_sb_uLdR::synapse0x2eda7b0() {
   return (neuron0x2ebe210()*0.0501459);
}

double NNfunction_sb_uLdR::synapse0x2eda7f0() {
   return (neuron0x2ebe550()*-0.0707563);
}

double NNfunction_sb_uLdR::synapse0x2eda830() {
   return (neuron0x2ebe890()*0.182099);
}

double NNfunction_sb_uLdR::synapse0x2eda870() {
   return (neuron0x2ebebd0()*-0.452049);
}

double NNfunction_sb_uLdR::synapse0x2eda8b0() {
   return (neuron0x2ebef10()*-0.172079);
}

double NNfunction_sb_uLdR::synapse0x2eda8f0() {
   return (neuron0x2ebf250()*-0.286533);
}

double NNfunction_sb_uLdR::synapse0x2eda930() {
   return (neuron0x2ebf590()*-0.661055);
}

double NNfunction_sb_uLdR::synapse0x2eda970() {
   return (neuron0x2ebf8d0()*-0.273851);
}

double NNfunction_sb_uLdR::synapse0x2eda9b0() {
   return (neuron0x2ebfc10()*0.489798);
}

double NNfunction_sb_uLdR::synapse0x2eda9f0() {
   return (neuron0x2ebff50()*-0.479368);
}

double NNfunction_sb_uLdR::synapse0x2edaa30() {
   return (neuron0x2ec0290()*1.01807);
}

double NNfunction_sb_uLdR::synapse0x2eda4c0() {
   return (neuron0x2ec05d0()*0.485367);
}

double NNfunction_sb_uLdR::synapse0x2eda500() {
   return (neuron0x2ec0b30()*-0.138963);
}

double NNfunction_sb_uLdR::synapse0x2edab80() {
   return (neuron0x2ec0d50()*0.206739);
}

double NNfunction_sb_uLdR::synapse0x2edabc0() {
   return (neuron0x2ec1090()*-0.456232);
}

double NNfunction_sb_uLdR::synapse0x2edac00() {
   return (neuron0x2ec13d0()*-0.854821);
}

double NNfunction_sb_uLdR::synapse0x2edac40() {
   return (neuron0x2ec1710()*-0.0540732);
}

double NNfunction_sb_uLdR::synapse0x2edac80() {
   return (neuron0x2ec1a50()*0.304833);
}

double NNfunction_sb_uLdR::synapse0x2edacc0() {
   return (neuron0x2ec1d90()*0.0708539);
}

double NNfunction_sb_uLdR::synapse0x2edb040() {
   return (neuron0x2ebd260()*-0.0245635);
}

double NNfunction_sb_uLdR::synapse0x2edb080() {
   return (neuron0x2ebd510()*-0.314342);
}

double NNfunction_sb_uLdR::synapse0x2edb0c0() {
   return (neuron0x2ebd850()*0.348605);
}

double NNfunction_sb_uLdR::synapse0x2edb100() {
   return (neuron0x2ebdb90()*-1.11808);
}

double NNfunction_sb_uLdR::synapse0x2edb140() {
   return (neuron0x2ebded0()*0.279448);
}

double NNfunction_sb_uLdR::synapse0x2edb180() {
   return (neuron0x2ebe210()*0.152711);
}

double NNfunction_sb_uLdR::synapse0x2edb1c0() {
   return (neuron0x2ebe550()*0.207492);
}

double NNfunction_sb_uLdR::synapse0x2edb200() {
   return (neuron0x2ebe890()*-0.466126);
}

double NNfunction_sb_uLdR::synapse0x2edb240() {
   return (neuron0x2ebebd0()*-0.201416);
}

double NNfunction_sb_uLdR::synapse0x2edb280() {
   return (neuron0x2ebef10()*0.319839);
}

double NNfunction_sb_uLdR::synapse0x2edb2c0() {
   return (neuron0x2ebf250()*-0.471966);
}

double NNfunction_sb_uLdR::synapse0x2edb300() {
   return (neuron0x2ebf590()*0.44463);
}

double NNfunction_sb_uLdR::synapse0x2edb340() {
   return (neuron0x2ebf8d0()*-0.615883);
}

double NNfunction_sb_uLdR::synapse0x2edb380() {
   return (neuron0x2ebfc10()*0.266211);
}

double NNfunction_sb_uLdR::synapse0x2edb3c0() {
   return (neuron0x2ebff50()*0.0585231);
}

double NNfunction_sb_uLdR::synapse0x2edb400() {
   return (neuron0x2ec0290()*0.147881);
}

double NNfunction_sb_uLdR::synapse0x2edae90() {
   return (neuron0x2ec05d0()*-0.236272);
}

double NNfunction_sb_uLdR::synapse0x2edaed0() {
   return (neuron0x2ec0b30()*0.442655);
}

double NNfunction_sb_uLdR::synapse0x2edb550() {
   return (neuron0x2ec0d50()*0.157244);
}

double NNfunction_sb_uLdR::synapse0x2edb590() {
   return (neuron0x2ec1090()*0.327708);
}

double NNfunction_sb_uLdR::synapse0x2edb5d0() {
   return (neuron0x2ec13d0()*0.480223);
}

double NNfunction_sb_uLdR::synapse0x2edb610() {
   return (neuron0x2ec1710()*-0.165);
}

double NNfunction_sb_uLdR::synapse0x2edb650() {
   return (neuron0x2ec1a50()*0.0859203);
}

double NNfunction_sb_uLdR::synapse0x2edb690() {
   return (neuron0x2ec1d90()*-0.515361);
}

double NNfunction_sb_uLdR::synapse0x2edba10() {
   return (neuron0x2ebd260()*-0.0816604);
}

double NNfunction_sb_uLdR::synapse0x2edba50() {
   return (neuron0x2ebd510()*0.275027);
}

double NNfunction_sb_uLdR::synapse0x2edba90() {
   return (neuron0x2ebd850()*0.525367);
}

double NNfunction_sb_uLdR::synapse0x2edbad0() {
   return (neuron0x2ebdb90()*-1.21899);
}

double NNfunction_sb_uLdR::synapse0x2edbb10() {
   return (neuron0x2ebded0()*0.532285);
}

double NNfunction_sb_uLdR::synapse0x2edbb50() {
   return (neuron0x2ebe210()*-0.0742124);
}

double NNfunction_sb_uLdR::synapse0x2edbb90() {
   return (neuron0x2ebe550()*0.164569);
}

double NNfunction_sb_uLdR::synapse0x2edbbd0() {
   return (neuron0x2ebe890()*0.294181);
}

double NNfunction_sb_uLdR::synapse0x2edbc10() {
   return (neuron0x2ebebd0()*0.34928);
}

double NNfunction_sb_uLdR::synapse0x2edbc50() {
   return (neuron0x2ebef10()*-0.109496);
}

double NNfunction_sb_uLdR::synapse0x2edbc90() {
   return (neuron0x2ebf250()*0.217337);
}

double NNfunction_sb_uLdR::synapse0x2edbcd0() {
   return (neuron0x2ebf590()*-0.642673);
}

double NNfunction_sb_uLdR::synapse0x2edbd10() {
   return (neuron0x2ebf8d0()*-0.202458);
}

double NNfunction_sb_uLdR::synapse0x2edbd50() {
   return (neuron0x2ebfc10()*0.176995);
}

double NNfunction_sb_uLdR::synapse0x2edbd90() {
   return (neuron0x2ebff50()*-0.462827);
}

double NNfunction_sb_uLdR::synapse0x2edbdd0() {
   return (neuron0x2ec0290()*-0.101431);
}

double NNfunction_sb_uLdR::synapse0x2edb860() {
   return (neuron0x2ec05d0()*0.213548);
}

double NNfunction_sb_uLdR::synapse0x2edb8a0() {
   return (neuron0x2ec0b30()*-0.564214);
}

double NNfunction_sb_uLdR::synapse0x2edbf20() {
   return (neuron0x2ec0d50()*0.0890028);
}

double NNfunction_sb_uLdR::synapse0x2edbf60() {
   return (neuron0x2ec1090()*-0.122392);
}

double NNfunction_sb_uLdR::synapse0x2edbfa0() {
   return (neuron0x2ec13d0()*-0.185381);
}

double NNfunction_sb_uLdR::synapse0x2edbfe0() {
   return (neuron0x2ec1710()*0.129853);
}

double NNfunction_sb_uLdR::synapse0x2edc020() {
   return (neuron0x2ec1a50()*-0.0891238);
}

double NNfunction_sb_uLdR::synapse0x2edc060() {
   return (neuron0x2ec1d90()*-0.216628);
}

double NNfunction_sb_uLdR::synapse0x2edc3e0() {
   return (neuron0x2ebd260()*0.594598);
}

double NNfunction_sb_uLdR::synapse0x2edc420() {
   return (neuron0x2ebd510()*0.0112184);
}

double NNfunction_sb_uLdR::synapse0x2edc460() {
   return (neuron0x2ebd850()*0.287228);
}

double NNfunction_sb_uLdR::synapse0x2edc4a0() {
   return (neuron0x2ebdb90()*-0.137797);
}

double NNfunction_sb_uLdR::synapse0x2edc4e0() {
   return (neuron0x2ebded0()*0.0466779);
}

double NNfunction_sb_uLdR::synapse0x2edc520() {
   return (neuron0x2ebe210()*-0.268887);
}

double NNfunction_sb_uLdR::synapse0x2edc560() {
   return (neuron0x2ebe550()*0.111626);
}

double NNfunction_sb_uLdR::synapse0x2edc5a0() {
   return (neuron0x2ebe890()*-0.228464);
}

double NNfunction_sb_uLdR::synapse0x2edc5e0() {
   return (neuron0x2ebebd0()*0.0272657);
}

double NNfunction_sb_uLdR::synapse0x2edc620() {
   return (neuron0x2ebef10()*0.190717);
}

double NNfunction_sb_uLdR::synapse0x2edc660() {
   return (neuron0x2ebf250()*-0.20618);
}

double NNfunction_sb_uLdR::synapse0x2edc6a0() {
   return (neuron0x2ebf590()*-0.161786);
}

double NNfunction_sb_uLdR::synapse0x2edc6e0() {
   return (neuron0x2ebf8d0()*-0.0926981);
}

double NNfunction_sb_uLdR::synapse0x2edc720() {
   return (neuron0x2ebfc10()*0.0991622);
}

double NNfunction_sb_uLdR::synapse0x2edc760() {
   return (neuron0x2ebff50()*0.0372026);
}

double NNfunction_sb_uLdR::synapse0x2edc7a0() {
   return (neuron0x2ec0290()*0.0135333);
}

double NNfunction_sb_uLdR::synapse0x2edc230() {
   return (neuron0x2ec05d0()*-0.222903);
}

double NNfunction_sb_uLdR::synapse0x2edc270() {
   return (neuron0x2ec0b30()*-0.218369);
}

double NNfunction_sb_uLdR::synapse0x2edc8f0() {
   return (neuron0x2ec0d50()*-0.12051);
}

double NNfunction_sb_uLdR::synapse0x2edc930() {
   return (neuron0x2ec1090()*0.356003);
}

double NNfunction_sb_uLdR::synapse0x2edc970() {
   return (neuron0x2ec13d0()*-0.163361);
}

double NNfunction_sb_uLdR::synapse0x2edc9b0() {
   return (neuron0x2ec1710()*-0.00248725);
}

double NNfunction_sb_uLdR::synapse0x2edc9f0() {
   return (neuron0x2ec1a50()*-0.0583498);
}

double NNfunction_sb_uLdR::synapse0x2edca30() {
   return (neuron0x2ec1d90()*-0.569383);
}

double NNfunction_sb_uLdR::synapse0x2edcdb0() {
   return (neuron0x2ebd260()*0.266294);
}

double NNfunction_sb_uLdR::synapse0x2edcdf0() {
   return (neuron0x2ebd510()*-0.0483129);
}

double NNfunction_sb_uLdR::synapse0x2edce30() {
   return (neuron0x2ebd850()*-0.854525);
}

double NNfunction_sb_uLdR::synapse0x2edce70() {
   return (neuron0x2ebdb90()*0.0402767);
}

double NNfunction_sb_uLdR::synapse0x2edceb0() {
   return (neuron0x2ebded0()*-0.0401496);
}

double NNfunction_sb_uLdR::synapse0x2edcef0() {
   return (neuron0x2ebe210()*-0.463325);
}

double NNfunction_sb_uLdR::synapse0x2edcf30() {
   return (neuron0x2ebe550()*-0.869679);
}

double NNfunction_sb_uLdR::synapse0x2edcf70() {
   return (neuron0x2ebe890()*0.213717);
}

double NNfunction_sb_uLdR::synapse0x2edcfb0() {
   return (neuron0x2ebebd0()*0.39014);
}

double NNfunction_sb_uLdR::synapse0x2edcff0() {
   return (neuron0x2ebef10()*-0.696134);
}

double NNfunction_sb_uLdR::synapse0x2edd030() {
   return (neuron0x2ebf250()*0.0938903);
}

double NNfunction_sb_uLdR::synapse0x2edd070() {
   return (neuron0x2ebf590()*-0.119929);
}

double NNfunction_sb_uLdR::synapse0x2edd0b0() {
   return (neuron0x2ebf8d0()*0.992872);
}

double NNfunction_sb_uLdR::synapse0x2edd0f0() {
   return (neuron0x2ebfc10()*0.160974);
}

double NNfunction_sb_uLdR::synapse0x2edd130() {
   return (neuron0x2ebff50()*0.242795);
}

double NNfunction_sb_uLdR::synapse0x2edd170() {
   return (neuron0x2ec0290()*0.0535873);
}

double NNfunction_sb_uLdR::synapse0x2edcc00() {
   return (neuron0x2ec05d0()*0.634189);
}

double NNfunction_sb_uLdR::synapse0x2edcc40() {
   return (neuron0x2ec0b30()*0.258594);
}

double NNfunction_sb_uLdR::synapse0x2edd2c0() {
   return (neuron0x2ec0d50()*-0.0211279);
}

double NNfunction_sb_uLdR::synapse0x2edd300() {
   return (neuron0x2ec1090()*0.229401);
}

double NNfunction_sb_uLdR::synapse0x2edd340() {
   return (neuron0x2ec13d0()*-0.304449);
}

double NNfunction_sb_uLdR::synapse0x2edd380() {
   return (neuron0x2ec1710()*0.0498153);
}

double NNfunction_sb_uLdR::synapse0x2edd3c0() {
   return (neuron0x2ec1a50()*0.17796);
}

double NNfunction_sb_uLdR::synapse0x2edd400() {
   return (neuron0x2ec1d90()*0.0257007);
}

double NNfunction_sb_uLdR::synapse0x2edd780() {
   return (neuron0x2ebd260()*-0.0615132);
}

double NNfunction_sb_uLdR::synapse0x2edd7c0() {
   return (neuron0x2ebd510()*-0.232684);
}

double NNfunction_sb_uLdR::synapse0x2edd800() {
   return (neuron0x2ebd850()*0.285255);
}

double NNfunction_sb_uLdR::synapse0x2edd840() {
   return (neuron0x2ebdb90()*1.90247);
}

double NNfunction_sb_uLdR::synapse0x2edd880() {
   return (neuron0x2ebded0()*-0.0155148);
}

double NNfunction_sb_uLdR::synapse0x2edd8c0() {
   return (neuron0x2ebe210()*-0.0407393);
}

double NNfunction_sb_uLdR::synapse0x2edd900() {
   return (neuron0x2ebe550()*0.0557346);
}

double NNfunction_sb_uLdR::synapse0x2edd940() {
   return (neuron0x2ebe890()*-0.0345913);
}

double NNfunction_sb_uLdR::synapse0x2edd980() {
   return (neuron0x2ebebd0()*0.0111654);
}

double NNfunction_sb_uLdR::synapse0x2edd9c0() {
   return (neuron0x2ebef10()*-0.0850909);
}

double NNfunction_sb_uLdR::synapse0x2edda00() {
   return (neuron0x2ebf250()*0.0880858);
}

double NNfunction_sb_uLdR::synapse0x2edda40() {
   return (neuron0x2ebf590()*-0.549769);
}

double NNfunction_sb_uLdR::synapse0x2edda80() {
   return (neuron0x2ebf8d0()*-0.250773);
}

double NNfunction_sb_uLdR::synapse0x2eddac0() {
   return (neuron0x2ebfc10()*-0.247477);
}

double NNfunction_sb_uLdR::synapse0x2eddb00() {
   return (neuron0x2ebff50()*-0.0475741);
}

double NNfunction_sb_uLdR::synapse0x2eddb40() {
   return (neuron0x2ec0290()*0.047132);
}

double NNfunction_sb_uLdR::synapse0x2edd5d0() {
   return (neuron0x2ec05d0()*0.100104);
}

double NNfunction_sb_uLdR::synapse0x2edd610() {
   return (neuron0x2ec0b30()*-0.377204);
}

double NNfunction_sb_uLdR::synapse0x2eddc90() {
   return (neuron0x2ec0d50()*0.147675);
}

double NNfunction_sb_uLdR::synapse0x2eddcd0() {
   return (neuron0x2ec1090()*-0.000333855);
}

double NNfunction_sb_uLdR::synapse0x2eddd10() {
   return (neuron0x2ec13d0()*-0.154644);
}

double NNfunction_sb_uLdR::synapse0x2eddd50() {
   return (neuron0x2ec1710()*-0.11838);
}

double NNfunction_sb_uLdR::synapse0x2eddd90() {
   return (neuron0x2ec1a50()*-0.0342999);
}

double NNfunction_sb_uLdR::synapse0x2edddd0() {
   return (neuron0x2ec1d90()*-0.0957059);
}

double NNfunction_sb_uLdR::synapse0x2ede150() {
   return (neuron0x2ebd260()*0.0444907);
}

double NNfunction_sb_uLdR::synapse0x2ede190() {
   return (neuron0x2ebd510()*-0.00366908);
}

double NNfunction_sb_uLdR::synapse0x2ede1d0() {
   return (neuron0x2ebd850()*-0.0101668);
}

double NNfunction_sb_uLdR::synapse0x2ede210() {
   return (neuron0x2ebdb90()*-0.0252542);
}

double NNfunction_sb_uLdR::synapse0x2ede250() {
   return (neuron0x2ebded0()*0.0110063);
}

double NNfunction_sb_uLdR::synapse0x2ede290() {
   return (neuron0x2ebe210()*-0.00144967);
}

double NNfunction_sb_uLdR::synapse0x2ede2d0() {
   return (neuron0x2ebe550()*-0.0123712);
}

double NNfunction_sb_uLdR::synapse0x2ede310() {
   return (neuron0x2ebe890()*0.00121269);
}

double NNfunction_sb_uLdR::synapse0x2ede350() {
   return (neuron0x2ebebd0()*0.0373091);
}

double NNfunction_sb_uLdR::synapse0x2ede390() {
   return (neuron0x2ebef10()*-0.0475473);
}

double NNfunction_sb_uLdR::synapse0x2ede3d0() {
   return (neuron0x2ebf250()*-0.00800001);
}

double NNfunction_sb_uLdR::synapse0x2ede410() {
   return (neuron0x2ebf590()*0.642972);
}

double NNfunction_sb_uLdR::synapse0x2ede450() {
   return (neuron0x2ebf8d0()*-0.0197911);
}

double NNfunction_sb_uLdR::synapse0x2ede490() {
   return (neuron0x2ebfc10()*0.0083772);
}

double NNfunction_sb_uLdR::synapse0x2ede4d0() {
   return (neuron0x2ebff50()*0.00843302);
}

double NNfunction_sb_uLdR::synapse0x2ede510() {
   return (neuron0x2ec0290()*-0.00882338);
}

double NNfunction_sb_uLdR::synapse0x2eddfa0() {
   return (neuron0x2ec05d0()*0.0031404);
}

double NNfunction_sb_uLdR::synapse0x2eddfe0() {
   return (neuron0x2ec0b30()*0.26187);
}

double NNfunction_sb_uLdR::synapse0x2ede660() {
   return (neuron0x2ec0d50()*0.00292391);
}

double NNfunction_sb_uLdR::synapse0x2ede6a0() {
   return (neuron0x2ec1090()*-0.0349423);
}

double NNfunction_sb_uLdR::synapse0x2ede6e0() {
   return (neuron0x2ec13d0()*0.0280588);
}

double NNfunction_sb_uLdR::synapse0x2ede720() {
   return (neuron0x2ec1710()*-0.0126678);
}

double NNfunction_sb_uLdR::synapse0x2ede760() {
   return (neuron0x2ec1a50()*-0.0168743);
}

double NNfunction_sb_uLdR::synapse0x2ede7a0() {
   return (neuron0x2ec1d90()*-0.0153709);
}

double NNfunction_sb_uLdR::synapse0x2ec7250() {
   return (neuron0x2ebd260()*0.0619494);
}

double NNfunction_sb_uLdR::synapse0x2ec7290() {
   return (neuron0x2ebd510()*-0.300475);
}

double NNfunction_sb_uLdR::synapse0x2ec72d0() {
   return (neuron0x2ebd850()*-0.620442);
}

double NNfunction_sb_uLdR::synapse0x2ec7310() {
   return (neuron0x2ebdb90()*-0.486044);
}

double NNfunction_sb_uLdR::synapse0x2ec7350() {
   return (neuron0x2ebded0()*0.558229);
}

double NNfunction_sb_uLdR::synapse0x2ec7390() {
   return (neuron0x2ebe210()*-0.0843926);
}

double NNfunction_sb_uLdR::synapse0x2ec73d0() {
   return (neuron0x2ebe550()*-0.531964);
}

double NNfunction_sb_uLdR::synapse0x2ec7410() {
   return (neuron0x2ebe890()*0.187871);
}

double NNfunction_sb_uLdR::synapse0x2edef30() {
   return (neuron0x2ebebd0()*-0.0419508);
}

double NNfunction_sb_uLdR::synapse0x2edef70() {
   return (neuron0x2ebef10()*-0.989587);
}

double NNfunction_sb_uLdR::synapse0x2edefb0() {
   return (neuron0x2ebf250()*-0.289127);
}

double NNfunction_sb_uLdR::synapse0x2edeff0() {
   return (neuron0x2ebf590()*0.0779058);
}

double NNfunction_sb_uLdR::synapse0x2edf030() {
   return (neuron0x2ebf8d0()*0.040405);
}

double NNfunction_sb_uLdR::synapse0x2edf070() {
   return (neuron0x2ebfc10()*0.242074);
}

double NNfunction_sb_uLdR::synapse0x2edf0b0() {
   return (neuron0x2ebff50()*0.60778);
}

double NNfunction_sb_uLdR::synapse0x2edf0f0() {
   return (neuron0x2ec0290()*0.103911);
}

double NNfunction_sb_uLdR::synapse0x2ede970() {
   return (neuron0x2ec05d0()*0.775346);
}

double NNfunction_sb_uLdR::synapse0x2ede9b0() {
   return (neuron0x2ec0b30()*-0.0788503);
}

double NNfunction_sb_uLdR::synapse0x2edf240() {
   return (neuron0x2ec0d50()*-0.413632);
}

double NNfunction_sb_uLdR::synapse0x2edf280() {
   return (neuron0x2ec1090()*0.699336);
}

double NNfunction_sb_uLdR::synapse0x2edf2c0() {
   return (neuron0x2ec13d0()*-0.0867555);
}

double NNfunction_sb_uLdR::synapse0x2edf300() {
   return (neuron0x2ec1710()*-0.142582);
}

double NNfunction_sb_uLdR::synapse0x2edf340() {
   return (neuron0x2ec1a50()*0.11283);
}

double NNfunction_sb_uLdR::synapse0x2edf380() {
   return (neuron0x2ec1d90()*-0.0760168);
}

double NNfunction_sb_uLdR::synapse0x2edf700() {
   return (neuron0x2ebd260()*-0.671446);
}

double NNfunction_sb_uLdR::synapse0x2edf740() {
   return (neuron0x2ebd510()*0.563717);
}

double NNfunction_sb_uLdR::synapse0x2edf780() {
   return (neuron0x2ebd850()*0.0969381);
}

double NNfunction_sb_uLdR::synapse0x2edf7c0() {
   return (neuron0x2ebdb90()*-0.277473);
}

double NNfunction_sb_uLdR::synapse0x2edf800() {
   return (neuron0x2ebded0()*-0.0561209);
}

double NNfunction_sb_uLdR::synapse0x2edf840() {
   return (neuron0x2ebe210()*-0.502842);
}

double NNfunction_sb_uLdR::synapse0x2edf880() {
   return (neuron0x2ebe550()*-0.25209);
}

double NNfunction_sb_uLdR::synapse0x2edf8c0() {
   return (neuron0x2ebe890()*0.829473);
}

double NNfunction_sb_uLdR::synapse0x2edf900() {
   return (neuron0x2ebebd0()*0.0868671);
}

double NNfunction_sb_uLdR::synapse0x2edf940() {
   return (neuron0x2ebef10()*-0.299806);
}

double NNfunction_sb_uLdR::synapse0x2edf980() {
   return (neuron0x2ebf250()*0.624073);
}

double NNfunction_sb_uLdR::synapse0x2edf9c0() {
   return (neuron0x2ebf590()*-0.715585);
}

double NNfunction_sb_uLdR::synapse0x2edfa00() {
   return (neuron0x2ebf8d0()*-0.425912);
}

double NNfunction_sb_uLdR::synapse0x2edfa40() {
   return (neuron0x2ebfc10()*-0.495183);
}

double NNfunction_sb_uLdR::synapse0x2edfa80() {
   return (neuron0x2ebff50()*1.23251);
}

double NNfunction_sb_uLdR::synapse0x2edfac0() {
   return (neuron0x2ec0290()*-0.325284);
}

double NNfunction_sb_uLdR::synapse0x2edf550() {
   return (neuron0x2ec05d0()*-0.251471);
}

double NNfunction_sb_uLdR::synapse0x2edf590() {
   return (neuron0x2ec0b30()*-0.635588);
}

double NNfunction_sb_uLdR::synapse0x2edfc10() {
   return (neuron0x2ec0d50()*0.515937);
}

double NNfunction_sb_uLdR::synapse0x2edfc50() {
   return (neuron0x2ec1090()*0.165277);
}

double NNfunction_sb_uLdR::synapse0x2edfc90() {
   return (neuron0x2ec13d0()*-0.382498);
}

double NNfunction_sb_uLdR::synapse0x2edfcd0() {
   return (neuron0x2ec1710()*0.409499);
}

double NNfunction_sb_uLdR::synapse0x2edfd10() {
   return (neuron0x2ec1a50()*-0.302951);
}

double NNfunction_sb_uLdR::synapse0x2edfd50() {
   return (neuron0x2ec1d90()*-0.133079);
}

double NNfunction_sb_uLdR::synapse0x2ee00d0() {
   return (neuron0x2ebd260()*0.458059);
}

double NNfunction_sb_uLdR::synapse0x2ee0110() {
   return (neuron0x2ebd510()*0.220403);
}

double NNfunction_sb_uLdR::synapse0x2ee0150() {
   return (neuron0x2ebd850()*-0.495563);
}

double NNfunction_sb_uLdR::synapse0x2ee0190() {
   return (neuron0x2ebdb90()*0.808993);
}

double NNfunction_sb_uLdR::synapse0x2ee01d0() {
   return (neuron0x2ebded0()*0.496766);
}

double NNfunction_sb_uLdR::synapse0x2ee0210() {
   return (neuron0x2ebe210()*0.171341);
}

double NNfunction_sb_uLdR::synapse0x2ee0250() {
   return (neuron0x2ebe550()*-0.229185);
}

double NNfunction_sb_uLdR::synapse0x2ee0290() {
   return (neuron0x2ebe890()*0.128102);
}

double NNfunction_sb_uLdR::synapse0x2ee02d0() {
   return (neuron0x2ebebd0()*-0.0770445);
}

double NNfunction_sb_uLdR::synapse0x2ee0310() {
   return (neuron0x2ebef10()*0.120333);
}

double NNfunction_sb_uLdR::synapse0x2ee0350() {
   return (neuron0x2ebf250()*-0.961868);
}

double NNfunction_sb_uLdR::synapse0x2ee0390() {
   return (neuron0x2ebf590()*-0.177449);
}

double NNfunction_sb_uLdR::synapse0x2ee03d0() {
   return (neuron0x2ebf8d0()*-0.236665);
}

double NNfunction_sb_uLdR::synapse0x2ee0410() {
   return (neuron0x2ebfc10()*0.0647934);
}

double NNfunction_sb_uLdR::synapse0x2ee0450() {
   return (neuron0x2ebff50()*-0.32323);
}

double NNfunction_sb_uLdR::synapse0x2ee0490() {
   return (neuron0x2ec0290()*0.134277);
}

double NNfunction_sb_uLdR::synapse0x2edff20() {
   return (neuron0x2ec05d0()*1.0891);
}

double NNfunction_sb_uLdR::synapse0x2edff60() {
   return (neuron0x2ec0b30()*-0.114075);
}

double NNfunction_sb_uLdR::synapse0x2ed0a90() {
   return (neuron0x2ec0d50()*0.138123);
}

double NNfunction_sb_uLdR::synapse0x2ed0ad0() {
   return (neuron0x2ec1090()*0.189234);
}

double NNfunction_sb_uLdR::synapse0x2ed0b10() {
   return (neuron0x2ec13d0()*0.225705);
}

double NNfunction_sb_uLdR::synapse0x2ed0b50() {
   return (neuron0x2ec1710()*-0.00673081);
}

double NNfunction_sb_uLdR::synapse0x2ed0b90() {
   return (neuron0x2ec1a50()*0.37523);
}

double NNfunction_sb_uLdR::synapse0x2ed0bd0() {
   return (neuron0x2ec1d90()*0.0913716);
}

double NNfunction_sb_uLdR::synapse0x2ed0f50() {
   return (neuron0x2ebd260()*0.00983609);
}

double NNfunction_sb_uLdR::synapse0x2ed0f90() {
   return (neuron0x2ebd510()*-0.00337158);
}

double NNfunction_sb_uLdR::synapse0x2ed0fd0() {
   return (neuron0x2ebd850()*0.0809821);
}

double NNfunction_sb_uLdR::synapse0x2ed1010() {
   return (neuron0x2ebdb90()*0.0209711);
}

double NNfunction_sb_uLdR::synapse0x2ed1050() {
   return (neuron0x2ebded0()*-0.0020421);
}

double NNfunction_sb_uLdR::synapse0x2ed1090() {
   return (neuron0x2ebe210()*-0.00629313);
}

double NNfunction_sb_uLdR::synapse0x2ed10d0() {
   return (neuron0x2ebe550()*0.00458631);
}

double NNfunction_sb_uLdR::synapse0x2ed1110() {
   return (neuron0x2ebe890()*0.0201319);
}

double NNfunction_sb_uLdR::synapse0x2ed1150() {
   return (neuron0x2ebebd0()*0.0238041);
}

double NNfunction_sb_uLdR::synapse0x2ed1190() {
   return (neuron0x2ebef10()*-0.0509787);
}

double NNfunction_sb_uLdR::synapse0x2ed11d0() {
   return (neuron0x2ebf250()*-0.0142311);
}

double NNfunction_sb_uLdR::synapse0x2ed1210() {
   return (neuron0x2ebf590()*-0.155199);
}

double NNfunction_sb_uLdR::synapse0x2ed1250() {
   return (neuron0x2ebf8d0()*-0.00930158);
}

double NNfunction_sb_uLdR::synapse0x2ed1290() {
   return (neuron0x2ebfc10()*-0.0051339);
}

double NNfunction_sb_uLdR::synapse0x2ed12d0() {
   return (neuron0x2ebff50()*0.0188482);
}

double NNfunction_sb_uLdR::synapse0x2ed1310() {
   return (neuron0x2ec0290()*0.0373234);
}

double NNfunction_sb_uLdR::synapse0x2ed0da0() {
   return (neuron0x2ec05d0()*0.0122913);
}

double NNfunction_sb_uLdR::synapse0x2ed0de0() {
   return (neuron0x2ec0b30()*-0.482103);
}

double NNfunction_sb_uLdR::synapse0x2ed1460() {
   return (neuron0x2ec0d50()*0.0379432);
}

double NNfunction_sb_uLdR::synapse0x2ed14a0() {
   return (neuron0x2ec1090()*-0.00892676);
}

double NNfunction_sb_uLdR::synapse0x2ed14e0() {
   return (neuron0x2ec13d0()*0.0158418);
}

double NNfunction_sb_uLdR::synapse0x2ed1520() {
   return (neuron0x2ec1710()*-0.0148043);
}

double NNfunction_sb_uLdR::synapse0x2ed1560() {
   return (neuron0x2ec1a50()*-0.0282948);
}

double NNfunction_sb_uLdR::synapse0x2ed15a0() {
   return (neuron0x2ec1d90()*-0.011905);
}

double NNfunction_sb_uLdR::synapse0x2ed1920() {
   return (neuron0x2ebd260()*0.550415);
}

double NNfunction_sb_uLdR::synapse0x2ed1960() {
   return (neuron0x2ebd510()*0.73927);
}

double NNfunction_sb_uLdR::synapse0x2ed19a0() {
   return (neuron0x2ebd850()*-0.0209958);
}

double NNfunction_sb_uLdR::synapse0x2ed19e0() {
   return (neuron0x2ebdb90()*0.257975);
}

double NNfunction_sb_uLdR::synapse0x2ed1a20() {
   return (neuron0x2ebded0()*0.212194);
}

double NNfunction_sb_uLdR::synapse0x2ed1a60() {
   return (neuron0x2ebe210()*-0.494016);
}

double NNfunction_sb_uLdR::synapse0x2ed1aa0() {
   return (neuron0x2ebe550()*0.148365);
}

double NNfunction_sb_uLdR::synapse0x2ed1ae0() {
   return (neuron0x2ebe890()*-0.460798);
}

double NNfunction_sb_uLdR::synapse0x2ed1b20() {
   return (neuron0x2ebebd0()*0.184875);
}

double NNfunction_sb_uLdR::synapse0x2ed1b60() {
   return (neuron0x2ebef10()*0.351115);
}

double NNfunction_sb_uLdR::synapse0x2ed1ba0() {
   return (neuron0x2ebf250()*0.60046);
}

double NNfunction_sb_uLdR::synapse0x2ed1be0() {
   return (neuron0x2ebf590()*-0.576288);
}

double NNfunction_sb_uLdR::synapse0x2ed1c20() {
   return (neuron0x2ebf8d0()*-0.14403);
}

double NNfunction_sb_uLdR::synapse0x2ed1c60() {
   return (neuron0x2ebfc10()*0.0798273);
}

double NNfunction_sb_uLdR::synapse0x2ed1ca0() {
   return (neuron0x2ebff50()*0.41972);
}

double NNfunction_sb_uLdR::synapse0x2ed1ce0() {
   return (neuron0x2ec0290()*-0.535932);
}

double NNfunction_sb_uLdR::synapse0x2ed1770() {
   return (neuron0x2ec05d0()*-0.434434);
}

double NNfunction_sb_uLdR::synapse0x2ed17b0() {
   return (neuron0x2ec0b30()*-0.871407);
}

double NNfunction_sb_uLdR::synapse0x2ed1e30() {
   return (neuron0x2ec0d50()*0.49123);
}

double NNfunction_sb_uLdR::synapse0x2ed1e70() {
   return (neuron0x2ec1090()*-0.181981);
}

double NNfunction_sb_uLdR::synapse0x2ed1eb0() {
   return (neuron0x2ec13d0()*-0.458462);
}

double NNfunction_sb_uLdR::synapse0x2ed1ef0() {
   return (neuron0x2ec1710()*-0.086923);
}

double NNfunction_sb_uLdR::synapse0x2ed1f30() {
   return (neuron0x2ec1a50()*0.3108);
}

double NNfunction_sb_uLdR::synapse0x2ed1f70() {
   return (neuron0x2ec1d90()*-0.605914);
}

double NNfunction_sb_uLdR::synapse0x2ed22f0() {
   return (neuron0x2ebd260()*0.0496802);
}

double NNfunction_sb_uLdR::synapse0x2ed2330() {
   return (neuron0x2ebd510()*0.0244111);
}

double NNfunction_sb_uLdR::synapse0x2ed2370() {
   return (neuron0x2ebd850()*-0.0807798);
}

double NNfunction_sb_uLdR::synapse0x2ed23b0() {
   return (neuron0x2ebdb90()*-1.4312);
}

double NNfunction_sb_uLdR::synapse0x2ed23f0() {
   return (neuron0x2ebded0()*0.000630193);
}

double NNfunction_sb_uLdR::synapse0x2ed2430() {
   return (neuron0x2ebe210()*0.0191504);
}

double NNfunction_sb_uLdR::synapse0x2ed2470() {
   return (neuron0x2ebe550()*-0.0320503);
}

double NNfunction_sb_uLdR::synapse0x2ed24b0() {
   return (neuron0x2ebe890()*-0.00427955);
}

double NNfunction_sb_uLdR::synapse0x2ed24f0() {
   return (neuron0x2ebebd0()*0.0387004);
}

double NNfunction_sb_uLdR::synapse0x2ed2530() {
   return (neuron0x2ebef10()*-0.00533539);
}

double NNfunction_sb_uLdR::synapse0x2ed2570() {
   return (neuron0x2ebf250()*0.0301409);
}

double NNfunction_sb_uLdR::synapse0x2ed25b0() {
   return (neuron0x2ebf590()*-0.437437);
}

double NNfunction_sb_uLdR::synapse0x2ed25f0() {
   return (neuron0x2ebf8d0()*-0.015201);
}

double NNfunction_sb_uLdR::synapse0x2ed2630() {
   return (neuron0x2ebfc10()*-0.0502303);
}

double NNfunction_sb_uLdR::synapse0x2ed2670() {
   return (neuron0x2ebff50()*0.0114986);
}

double NNfunction_sb_uLdR::synapse0x2ed26b0() {
   return (neuron0x2ec0290()*-0.00544793);
}

double NNfunction_sb_uLdR::synapse0x2ed2140() {
   return (neuron0x2ec05d0()*0.0148331);
}

double NNfunction_sb_uLdR::synapse0x2ed2180() {
   return (neuron0x2ec0b30()*0.808938);
}

double NNfunction_sb_uLdR::synapse0x2ed2800() {
   return (neuron0x2ec0d50()*-0.00733082);
}

double NNfunction_sb_uLdR::synapse0x2ed2840() {
   return (neuron0x2ec1090()*0.00204503);
}

double NNfunction_sb_uLdR::synapse0x2ed2880() {
   return (neuron0x2ec13d0()*0.00118952);
}

double NNfunction_sb_uLdR::synapse0x2ed28c0() {
   return (neuron0x2ec1710()*0.0231079);
}

double NNfunction_sb_uLdR::synapse0x2ed2900() {
   return (neuron0x2ec1a50()*-0.00975062);
}

double NNfunction_sb_uLdR::synapse0x2ed2940() {
   return (neuron0x2ec1d90()*-0.00771118);
}

double NNfunction_sb_uLdR::synapse0x2ee4810() {
   return (neuron0x2ebd260()*-0.167576);
}

double NNfunction_sb_uLdR::synapse0x2ee4850() {
   return (neuron0x2ebd510()*0.324731);
}

double NNfunction_sb_uLdR::synapse0x2ee4890() {
   return (neuron0x2ebd850()*0.213424);
}

double NNfunction_sb_uLdR::synapse0x2ee48d0() {
   return (neuron0x2ebdb90()*-0.0360531);
}

double NNfunction_sb_uLdR::synapse0x2ee4910() {
   return (neuron0x2ebded0()*0.825322);
}

double NNfunction_sb_uLdR::synapse0x2ee4950() {
   return (neuron0x2ebe210()*-0.686636);
}

double NNfunction_sb_uLdR::synapse0x2ee4990() {
   return (neuron0x2ebe550()*0.444099);
}

double NNfunction_sb_uLdR::synapse0x2ee49d0() {
   return (neuron0x2ebe890()*-0.380733);
}

double NNfunction_sb_uLdR::synapse0x2ee4a10() {
   return (neuron0x2ebebd0()*-0.236314);
}

double NNfunction_sb_uLdR::synapse0x2ee4a50() {
   return (neuron0x2ebef10()*-0.105779);
}

double NNfunction_sb_uLdR::synapse0x2ee4a90() {
   return (neuron0x2ebf250()*0.31228);
}

double NNfunction_sb_uLdR::synapse0x2ee4ad0() {
   return (neuron0x2ebf590()*0.574981);
}

double NNfunction_sb_uLdR::synapse0x2ee4b10() {
   return (neuron0x2ebf8d0()*0.337785);
}

double NNfunction_sb_uLdR::synapse0x2ee4b50() {
   return (neuron0x2ebfc10()*-0.662009);
}

double NNfunction_sb_uLdR::synapse0x2ee4b90() {
   return (neuron0x2ebff50()*0.0114312);
}

double NNfunction_sb_uLdR::synapse0x2ee4bd0() {
   return (neuron0x2ec0290()*-0.358528);
}

double NNfunction_sb_uLdR::synapse0x2ed2980() {
   return (neuron0x2ec05d0()*-0.382995);
}

double NNfunction_sb_uLdR::synapse0x2ed29c0() {
   return (neuron0x2ec0b30()*0.179304);
}

double NNfunction_sb_uLdR::synapse0x2ee4d20() {
   return (neuron0x2ec0d50()*0.128275);
}

double NNfunction_sb_uLdR::synapse0x2ee4d60() {
   return (neuron0x2ec1090()*-0.094087);
}

double NNfunction_sb_uLdR::synapse0x2ee4da0() {
   return (neuron0x2ec13d0()*0.147263);
}

double NNfunction_sb_uLdR::synapse0x2ee4de0() {
   return (neuron0x2ec1710()*-0.28196);
}

double NNfunction_sb_uLdR::synapse0x2ee4e20() {
   return (neuron0x2ec1a50()*-0.139947);
}

double NNfunction_sb_uLdR::synapse0x2ee4e60() {
   return (neuron0x2ec1d90()*-0.0993044);
}

double NNfunction_sb_uLdR::synapse0x2ee51e0() {
   return (neuron0x2ebd260()*-0.374683);
}

double NNfunction_sb_uLdR::synapse0x2ee5220() {
   return (neuron0x2ebd510()*-0.593814);
}

double NNfunction_sb_uLdR::synapse0x2ee5260() {
   return (neuron0x2ebd850()*0.200654);
}

double NNfunction_sb_uLdR::synapse0x2ee52a0() {
   return (neuron0x2ebdb90()*-0.398325);
}

double NNfunction_sb_uLdR::synapse0x2ee52e0() {
   return (neuron0x2ebded0()*0.113991);
}

double NNfunction_sb_uLdR::synapse0x2ee5320() {
   return (neuron0x2ebe210()*-0.190501);
}

double NNfunction_sb_uLdR::synapse0x2ee5360() {
   return (neuron0x2ebe550()*-0.136859);
}

double NNfunction_sb_uLdR::synapse0x2ee53a0() {
   return (neuron0x2ebe890()*0.481314);
}

double NNfunction_sb_uLdR::synapse0x2ee53e0() {
   return (neuron0x2ebebd0()*-0.253637);
}

double NNfunction_sb_uLdR::synapse0x2ee5420() {
   return (neuron0x2ebef10()*-0.072773);
}

double NNfunction_sb_uLdR::synapse0x2ee5460() {
   return (neuron0x2ebf250()*-0.401001);
}

double NNfunction_sb_uLdR::synapse0x2ee54a0() {
   return (neuron0x2ebf590()*1.2051);
}

double NNfunction_sb_uLdR::synapse0x2ee54e0() {
   return (neuron0x2ebf8d0()*-0.244264);
}

double NNfunction_sb_uLdR::synapse0x2ee5520() {
   return (neuron0x2ebfc10()*-0.368198);
}

double NNfunction_sb_uLdR::synapse0x2ee5560() {
   return (neuron0x2ebff50()*-0.576979);
}

double NNfunction_sb_uLdR::synapse0x2ee55a0() {
   return (neuron0x2ec0290()*0.48277);
}

double NNfunction_sb_uLdR::synapse0x2ee5030() {
   return (neuron0x2ec05d0()*0.408074);
}

double NNfunction_sb_uLdR::synapse0x2ee5070() {
   return (neuron0x2ec0b30()*0.339164);
}

double NNfunction_sb_uLdR::synapse0x2ee56f0() {
   return (neuron0x2ec0d50()*0.122373);
}

double NNfunction_sb_uLdR::synapse0x2ee5730() {
   return (neuron0x2ec1090()*-0.377841);
}

double NNfunction_sb_uLdR::synapse0x2ee5770() {
   return (neuron0x2ec13d0()*-0.0448124);
}

double NNfunction_sb_uLdR::synapse0x2ee57b0() {
   return (neuron0x2ec1710()*0.43251);
}

double NNfunction_sb_uLdR::synapse0x2ee57f0() {
   return (neuron0x2ec1a50()*-0.685012);
}

double NNfunction_sb_uLdR::synapse0x2ee5830() {
   return (neuron0x2ec1d90()*0.0112286);
}

double NNfunction_sb_uLdR::synapse0x2ee5bb0() {
   return (neuron0x2ebd260()*-0.0389742);
}

double NNfunction_sb_uLdR::synapse0x2ee5bf0() {
   return (neuron0x2ebd510()*0.118208);
}

double NNfunction_sb_uLdR::synapse0x2ee5c30() {
   return (neuron0x2ebd850()*-0.23811);
}

double NNfunction_sb_uLdR::synapse0x2ee5c70() {
   return (neuron0x2ebdb90()*-0.3284);
}

double NNfunction_sb_uLdR::synapse0x2ee5cb0() {
   return (neuron0x2ebded0()*-0.300767);
}

double NNfunction_sb_uLdR::synapse0x2ee5cf0() {
   return (neuron0x2ebe210()*-0.007437);
}

double NNfunction_sb_uLdR::synapse0x2ee5d30() {
   return (neuron0x2ebe550()*0.197288);
}

double NNfunction_sb_uLdR::synapse0x2ee5d70() {
   return (neuron0x2ebe890()*0.274908);
}

double NNfunction_sb_uLdR::synapse0x2ee5db0() {
   return (neuron0x2ebebd0()*-0.200382);
}

double NNfunction_sb_uLdR::synapse0x2ee5df0() {
   return (neuron0x2ebef10()*0.0239275);
}

double NNfunction_sb_uLdR::synapse0x2ee5e30() {
   return (neuron0x2ebf250()*0.246065);
}

double NNfunction_sb_uLdR::synapse0x2ee5e70() {
   return (neuron0x2ebf590()*0.625491);
}

double NNfunction_sb_uLdR::synapse0x2ee5eb0() {
   return (neuron0x2ebf8d0()*-0.326339);
}

double NNfunction_sb_uLdR::synapse0x2ee5ef0() {
   return (neuron0x2ebfc10()*0.205641);
}

double NNfunction_sb_uLdR::synapse0x2ee5f30() {
   return (neuron0x2ebff50()*0.118479);
}

double NNfunction_sb_uLdR::synapse0x2ee5f70() {
   return (neuron0x2ec0290()*0.967318);
}

double NNfunction_sb_uLdR::synapse0x2ee5a00() {
   return (neuron0x2ec05d0()*-0.117371);
}

double NNfunction_sb_uLdR::synapse0x2ee5a40() {
   return (neuron0x2ec0b30()*-0.0218186);
}

double NNfunction_sb_uLdR::synapse0x2ee60c0() {
   return (neuron0x2ec0d50()*0.227922);
}

double NNfunction_sb_uLdR::synapse0x2ee6100() {
   return (neuron0x2ec1090()*-0.184205);
}

double NNfunction_sb_uLdR::synapse0x2ee6140() {
   return (neuron0x2ec13d0()*0.225341);
}

double NNfunction_sb_uLdR::synapse0x2ee6180() {
   return (neuron0x2ec1710()*0.175088);
}

double NNfunction_sb_uLdR::synapse0x2ee61c0() {
   return (neuron0x2ec1a50()*-0.0201103);
}

double NNfunction_sb_uLdR::synapse0x2ee6200() {
   return (neuron0x2ec1d90()*0.804621);
}

double NNfunction_sb_uLdR::synapse0x2ee6580() {
   return (neuron0x2ebd260()*-0.0258498);
}

double NNfunction_sb_uLdR::synapse0x2ee65c0() {
   return (neuron0x2ebd510()*-0.0459387);
}

double NNfunction_sb_uLdR::synapse0x2ee6600() {
   return (neuron0x2ebd850()*-0.855601);
}

double NNfunction_sb_uLdR::synapse0x2ee6640() {
   return (neuron0x2ebdb90()*-0.887709);
}

double NNfunction_sb_uLdR::synapse0x2ee6680() {
   return (neuron0x2ebded0()*-0.185051);
}

double NNfunction_sb_uLdR::synapse0x2ee66c0() {
   return (neuron0x2ebe210()*0.0896768);
}

double NNfunction_sb_uLdR::synapse0x2ee6700() {
   return (neuron0x2ebe550()*0.00924702);
}

double NNfunction_sb_uLdR::synapse0x2ee6740() {
   return (neuron0x2ebe890()*-0.256662);
}

double NNfunction_sb_uLdR::synapse0x2ee6780() {
   return (neuron0x2ebebd0()*0.00406058);
}

double NNfunction_sb_uLdR::synapse0x2ee67c0() {
   return (neuron0x2ebef10()*0.0225899);
}

double NNfunction_sb_uLdR::synapse0x2ee6800() {
   return (neuron0x2ebf250()*0.204486);
}

double NNfunction_sb_uLdR::synapse0x2ee6840() {
   return (neuron0x2ebf590()*-0.440353);
}

double NNfunction_sb_uLdR::synapse0x2ee6880() {
   return (neuron0x2ebf8d0()*-0.203765);
}

double NNfunction_sb_uLdR::synapse0x2ee68c0() {
   return (neuron0x2ebfc10()*-0.0477308);
}

double NNfunction_sb_uLdR::synapse0x2ee6900() {
   return (neuron0x2ebff50()*0.169659);
}

double NNfunction_sb_uLdR::synapse0x2ee6940() {
   return (neuron0x2ec0290()*-0.288153);
}

double NNfunction_sb_uLdR::synapse0x2ee63d0() {
   return (neuron0x2ec05d0()*0.527152);
}

double NNfunction_sb_uLdR::synapse0x2ee6410() {
   return (neuron0x2ec0b30()*0.0457922);
}

double NNfunction_sb_uLdR::synapse0x2ee6a90() {
   return (neuron0x2ec0d50()*0.114353);
}

double NNfunction_sb_uLdR::synapse0x2ee6ad0() {
   return (neuron0x2ec1090()*-0.488535);
}

double NNfunction_sb_uLdR::synapse0x2ee6b10() {
   return (neuron0x2ec13d0()*-0.129018);
}

double NNfunction_sb_uLdR::synapse0x2ee6b50() {
   return (neuron0x2ec1710()*-0.25508);
}

double NNfunction_sb_uLdR::synapse0x2ee6b90() {
   return (neuron0x2ec1a50()*-0.022204);
}

double NNfunction_sb_uLdR::synapse0x2ee6bd0() {
   return (neuron0x2ec1d90()*0.0817517);
}

double NNfunction_sb_uLdR::synapse0x2ec3160() {
   return (neuron0x2ec2200()*0.396734);
}

double NNfunction_sb_uLdR::synapse0x2ec31a0() {
   return (neuron0x2ec2b50()*0.733167);
}

double NNfunction_sb_uLdR::synapse0x2ec4680() {
   return (neuron0x2ec3630()*0.55486);
}

double NNfunction_sb_uLdR::synapse0x2ec46c0() {
   return (neuron0x2c86980()*-1.38077);
}

double NNfunction_sb_uLdR::synapse0x2ec5050() {
   return (neuron0x2ec43d0()*0.803247);
}

double NNfunction_sb_uLdR::synapse0x2ec5090() {
   return (neuron0x2ec4da0()*-0.447898);
}

double NNfunction_sb_uLdR::synapse0x2ec5e20() {
   return (neuron0x2ec5b70()*-1.14369);
}

double NNfunction_sb_uLdR::synapse0x2ec5e60() {
   return (neuron0x2ec6540()*-0.181976);
}

double NNfunction_sb_uLdR::synapse0x2ec67f0() {
   return (neuron0x2ec6f10()*0.482772);
}

double NNfunction_sb_uLdR::synapse0x2ec6830() {
   return (neuron0x2ec79f0()*-0.543402);
}

double NNfunction_sb_uLdR::synapse0x2ec71c0() {
   return (neuron0x2ec83c0()*-1.27805);
}

double NNfunction_sb_uLdR::synapse0x2ec7200() {
   return (neuron0x2ec54a0()*-0.360737);
}

double NNfunction_sb_uLdR::synapse0x2ec7ca0() {
   return (neuron0x2ec9f70()*-0.276588);
}

double NNfunction_sb_uLdR::synapse0x2ec7ce0() {
   return (neuron0x2eca940()*-0.439847);
}

double NNfunction_sb_uLdR::synapse0x2ec8670() {
   return (neuron0x2ecb310()*0.639683);
}

double NNfunction_sb_uLdR::synapse0x2ec86b0() {
   return (neuron0x2ecbce0()*5.3475);
}

double NNfunction_sb_uLdR::synapse0x2ec5750() {
   return (neuron0x2ecdaf0()*0.216857);
}

double NNfunction_sb_uLdR::synapse0x2ec5790() {
   return (neuron0x2ecddd0()*-0.269052);
}

double NNfunction_sb_uLdR::synapse0x2eca220() {
   return (neuron0x2ece7a0()*-0.371539);
}

double NNfunction_sb_uLdR::synapse0x2eca260() {
   return (neuron0x2ecf170()*0.0181675);
}

double NNfunction_sb_uLdR::synapse0x2ecabf0() {
   return (neuron0x2ecfb40()*-0.398446);
}

double NNfunction_sb_uLdR::synapse0x2ecac30() {
   return (neuron0x2ed0510()*-0.215018);
}

double NNfunction_sb_uLdR::synapse0x2ecb5c0() {
   return (neuron0x2ec9060()*2.68974);
}

double NNfunction_sb_uLdR::synapse0x2ecb600() {
   return (neuron0x2ec9a30()*1.49355);
}

double NNfunction_sb_uLdR::synapse0x2ecbf90() {
   return (neuron0x2ed32a0()*0.204355);
}

double NNfunction_sb_uLdR::synapse0x2ecbfd0() {
   return (neuron0x2ed3c70()*-2.62316);
}

double NNfunction_sb_uLdR::synapse0x2ec0170() {
   return (neuron0x2ed4640()*-1.0391);
}

double NNfunction_sb_uLdR::synapse0x2ec01b0() {
   return (neuron0x2ed5010()*-3.55187);
}

double NNfunction_sb_uLdR::synapse0x2ece080() {
   return (neuron0x2ed59e0()*0.955353);
}

double NNfunction_sb_uLdR::synapse0x2ece0c0() {
   return (neuron0x2ed63b0()*-0.121332);
}

double NNfunction_sb_uLdR::synapse0x2ecea50() {
   return (neuron0x2ed6d80()*-0.387089);
}

double NNfunction_sb_uLdR::synapse0x2ecea90() {
   return (neuron0x2ed7750()*0.469978);
}

double NNfunction_sb_uLdR::synapse0x2ecf420() {
   return (neuron0x2ecd7e0()*0.608685);
}

double NNfunction_sb_uLdR::synapse0x2ecf460() {
   return (neuron0x2eda330()*0.416544);
}

double NNfunction_sb_uLdR::synapse0x2ecfdf0() {
   return (neuron0x2edad00()*0.286308);
}

double NNfunction_sb_uLdR::synapse0x2ecfe30() {
   return (neuron0x2edb6d0()*-0.510245);
}

double NNfunction_sb_uLdR::synapse0x2ed07c0() {
   return (neuron0x2edc0a0()*0.157982);
}

double NNfunction_sb_uLdR::synapse0x2ed0800() {
   return (neuron0x2edca70()*-0.777105);
}

double NNfunction_sb_uLdR::synapse0x2ec9310() {
   return (neuron0x2edd440()*1.48646);
}

double NNfunction_sb_uLdR::synapse0x2ec9350() {
   return (neuron0x2edde10()*-0.44202);
}

double NNfunction_sb_uLdR::synapse0x2ed2bc0() {
   return (neuron0x2ede7e0()*0.580465);
}

double NNfunction_sb_uLdR::synapse0x2ed2c00() {
   return (neuron0x2edf3c0()*-0.548366);
}

double NNfunction_sb_uLdR::synapse0x2ed3550() {
   return (neuron0x2edfd90()*-0.642264);
}

double NNfunction_sb_uLdR::synapse0x2ed3590() {
   return (neuron0x2ed0c10()*0.836137);
}

double NNfunction_sb_uLdR::synapse0x2ed3f20() {
   return (neuron0x2ed15e0()*0.240237);
}

double NNfunction_sb_uLdR::synapse0x2ed3f60() {
   return (neuron0x2ed1fb0()*3.26789);
}

double NNfunction_sb_uLdR::synapse0x2ed48f0() {
   return (neuron0x2ee45f0()*0.302667);
}

double NNfunction_sb_uLdR::synapse0x2ed4930() {
   return (neuron0x2ee4ea0()*0.661348);
}

double NNfunction_sb_uLdR::synapse0x2ed52c0() {
   return (neuron0x2ee5870()*-0.525225);
}

double NNfunction_sb_uLdR::synapse0x2ed5300() {
   return (neuron0x2ee6240()*-0.33188);
}

double NNfunction_sb_uLdR::synapse0x2ed7a00() {
   return (neuron0x2ec2200()*0.183146);
}

double NNfunction_sb_uLdR::synapse0x2ed7a40() {
   return (neuron0x2ec2b50()*-0.492518);
}

double NNfunction_sb_uLdR::synapse0x2eccfc0() {
   return (neuron0x2ec3630()*0.0235955);
}

double NNfunction_sb_uLdR::synapse0x2ecd000() {
   return (neuron0x2c86980()*-0.1259);
}

double NNfunction_sb_uLdR::synapse0x2eda5e0() {
   return (neuron0x2ec43d0()*0.0554399);
}

double NNfunction_sb_uLdR::synapse0x2eda620() {
   return (neuron0x2ec4da0()*-0.171817);
}

double NNfunction_sb_uLdR::synapse0x2edafb0() {
   return (neuron0x2ec5b70()*-0.156679);
}

double NNfunction_sb_uLdR::synapse0x2edaff0() {
   return (neuron0x2ec6540()*0.590029);
}

double NNfunction_sb_uLdR::synapse0x2edb980() {
   return (neuron0x2ec6f10()*-1.15969);
}

double NNfunction_sb_uLdR::synapse0x2edb9c0() {
   return (neuron0x2ec79f0()*0.0603482);
}

double NNfunction_sb_uLdR::synapse0x2edc350() {
   return (neuron0x2ec83c0()*-0.160459);
}

double NNfunction_sb_uLdR::synapse0x2edc390() {
   return (neuron0x2ec54a0()*0.17813);
}

double NNfunction_sb_uLdR::synapse0x2edcd20() {
   return (neuron0x2ec9f70()*-0.0550371);
}

double NNfunction_sb_uLdR::synapse0x2edcd60() {
   return (neuron0x2eca940()*-0.0840986);
}

double NNfunction_sb_uLdR::synapse0x2edd6f0() {
   return (neuron0x2ecb310()*0.260254);
}

double NNfunction_sb_uLdR::synapse0x2edd730() {
   return (neuron0x2ecbce0()*0.94076);
}

double NNfunction_sb_uLdR::synapse0x2ede0c0() {
   return (neuron0x2ecdaf0()*0.241694);
}

double NNfunction_sb_uLdR::synapse0x2ede100() {
   return (neuron0x2ecddd0()*-0.476242);
}

double NNfunction_sb_uLdR::synapse0x2edea90() {
   return (neuron0x2ece7a0()*-1.26954);
}

double NNfunction_sb_uLdR::synapse0x2edead0() {
   return (neuron0x2ecf170()*-0.218705);
}

double NNfunction_sb_uLdR::synapse0x2edf670() {
   return (neuron0x2ecfb40()*0.120515);
}

double NNfunction_sb_uLdR::synapse0x2edf6b0() {
   return (neuron0x2ed0510()*0.112079);
}

double NNfunction_sb_uLdR::synapse0x2ee0040() {
   return (neuron0x2ec9060()*1.76849);
}

double NNfunction_sb_uLdR::synapse0x2ee0080() {
   return (neuron0x2ec9a30()*-0.173459);
}

double NNfunction_sb_uLdR::synapse0x2ed0ec0() {
   return (neuron0x2ed32a0()*-0.0969294);
}

double NNfunction_sb_uLdR::synapse0x2ed0f00() {
   return (neuron0x2ed3c70()*1.18161);
}

double NNfunction_sb_uLdR::synapse0x2ed1890() {
   return (neuron0x2ed4640()*-1.45043);
}

double NNfunction_sb_uLdR::synapse0x2ed18d0() {
   return (neuron0x2ed5010()*2.69346);
}

double NNfunction_sb_uLdR::synapse0x2ed2260() {
   return (neuron0x2ed59e0()*0.350701);
}

double NNfunction_sb_uLdR::synapse0x2ed22a0() {
   return (neuron0x2ed63b0()*-0.0927566);
}

double NNfunction_sb_uLdR::synapse0x2ee4780() {
   return (neuron0x2ed6d80()*0.115836);
}

double NNfunction_sb_uLdR::synapse0x2ee47c0() {
   return (neuron0x2ed7750()*-0.125594);
}

double NNfunction_sb_uLdR::synapse0x2ee5150() {
   return (neuron0x2ecd7e0()*1.69548);
}

double NNfunction_sb_uLdR::synapse0x2ee5190() {
   return (neuron0x2eda330()*0.188121);
}

double NNfunction_sb_uLdR::synapse0x2ee5b20() {
   return (neuron0x2edad00()*-0.0866807);
}

double NNfunction_sb_uLdR::synapse0x2ee5b60() {
   return (neuron0x2edb6d0()*-0.0476359);
}

double NNfunction_sb_uLdR::synapse0x2ee64f0() {
   return (neuron0x2edc0a0()*0.223888);
}

double NNfunction_sb_uLdR::synapse0x2ee6530() {
   return (neuron0x2edca70()*-0.0509304);
}

double NNfunction_sb_uLdR::synapse0x2ec2420() {
   return (neuron0x2edd440()*-0.0769831);
}

double NNfunction_sb_uLdR::synapse0x2ec2460() {
   return (neuron0x2edde10()*1.56194);
}

double NNfunction_sb_uLdR::synapse0x2ed5c90() {
   return (neuron0x2ede7e0()*-0.0384811);
}

double NNfunction_sb_uLdR::synapse0x2ed5cd0() {
   return (neuron0x2edf3c0()*-0.0660721);
}

double NNfunction_sb_uLdR::synapse0x2ee6c10() {
   return (neuron0x2edfd90()*-0.115215);
}

double NNfunction_sb_uLdR::synapse0x2ee6c50() {
   return (neuron0x2ed0c10()*-0.741407);
}

double NNfunction_sb_uLdR::synapse0x2ee6c90() {
   return (neuron0x2ed15e0()*-0.0571746);
}

double NNfunction_sb_uLdR::synapse0x2ee6cd0() {
   return (neuron0x2ed1fb0()*0.531482);
}

double NNfunction_sb_uLdR::synapse0x2eedb80() {
   return (neuron0x2ee45f0()*0.0901956);
}

double NNfunction_sb_uLdR::synapse0x2eedbc0() {
   return (neuron0x2ee4ea0()*-0.0428447);
}

double NNfunction_sb_uLdR::synapse0x2eedc00() {
   return (neuron0x2ee5870()*-0.0994198);
}

double NNfunction_sb_uLdR::synapse0x2eedc40() {
   return (neuron0x2ee6240()*-0.131746);
}

double NNfunction_sb_uLdR::synapse0x2eedfc0() {
   return (neuron0x2ec2200()*0.0137449);
}

double NNfunction_sb_uLdR::synapse0x2eee000() {
   return (neuron0x2ec2b50()*0.0357343);
}

double NNfunction_sb_uLdR::synapse0x2eee040() {
   return (neuron0x2ec3630()*0.0470593);
}

double NNfunction_sb_uLdR::synapse0x2eee080() {
   return (neuron0x2c86980()*-0.144359);
}

double NNfunction_sb_uLdR::synapse0x2eee0c0() {
   return (neuron0x2ec43d0()*0.110038);
}

double NNfunction_sb_uLdR::synapse0x2eee100() {
   return (neuron0x2ec4da0()*-0.0481241);
}

double NNfunction_sb_uLdR::synapse0x2eee140() {
   return (neuron0x2ec5b70()*-0.0824793);
}

double NNfunction_sb_uLdR::synapse0x2eee180() {
   return (neuron0x2ec6540()*-0.0273724);
}

double NNfunction_sb_uLdR::synapse0x2eee1c0() {
   return (neuron0x2ec6f10()*-0.200249);
}

double NNfunction_sb_uLdR::synapse0x2eee200() {
   return (neuron0x2ec79f0()*-0.0337105);
}

double NNfunction_sb_uLdR::synapse0x2eee240() {
   return (neuron0x2ec83c0()*-0.0451474);
}

double NNfunction_sb_uLdR::synapse0x2eee280() {
   return (neuron0x2ec54a0()*-0.00183117);
}

double NNfunction_sb_uLdR::synapse0x2eee2c0() {
   return (neuron0x2ec9f70()*0.0301665);
}

double NNfunction_sb_uLdR::synapse0x2eee300() {
   return (neuron0x2eca940()*-0.032429);
}

double NNfunction_sb_uLdR::synapse0x2eee340() {
   return (neuron0x2ecb310()*0.0495494);
}

double NNfunction_sb_uLdR::synapse0x2eee380() {
   return (neuron0x2ecbce0()*0.976832);
}

double NNfunction_sb_uLdR::synapse0x2eede10() {
   return (neuron0x2ecdaf0()*0.0384215);
}

double NNfunction_sb_uLdR::synapse0x2eede50() {
   return (neuron0x2ecddd0()*-0.504199);
}

double NNfunction_sb_uLdR::synapse0x2eee4d0() {
   return (neuron0x2ece7a0()*-0.156485);
}

double NNfunction_sb_uLdR::synapse0x2eee510() {
   return (neuron0x2ecf170()*0.0262164);
}

double NNfunction_sb_uLdR::synapse0x2eee550() {
   return (neuron0x2ecfb40()*0.0195157);
}

double NNfunction_sb_uLdR::synapse0x2eee590() {
   return (neuron0x2ed0510()*-0.0121167);
}

double NNfunction_sb_uLdR::synapse0x2eee5d0() {
   return (neuron0x2ec9060()*0.354357);
}

double NNfunction_sb_uLdR::synapse0x2eee610() {
   return (neuron0x2ec9a30()*-1.43824);
}

double NNfunction_sb_uLdR::synapse0x2eee650() {
   return (neuron0x2ed32a0()*0.0224106);
}

double NNfunction_sb_uLdR::synapse0x2eee690() {
   return (neuron0x2ed3c70()*0.486402);
}

double NNfunction_sb_uLdR::synapse0x2eee6d0() {
   return (neuron0x2ed4640()*-0.160639);
}

double NNfunction_sb_uLdR::synapse0x2eee710() {
   return (neuron0x2ed5010()*0.134017);
}

double NNfunction_sb_uLdR::synapse0x2eee750() {
   return (neuron0x2ed59e0()*0.0553216);
}

double NNfunction_sb_uLdR::synapse0x2eee790() {
   return (neuron0x2ed63b0()*-0.0206481);
}

double NNfunction_sb_uLdR::synapse0x2eee7d0() {
   return (neuron0x2ed6d80()*-0.0387209);
}

double NNfunction_sb_uLdR::synapse0x2eee810() {
   return (neuron0x2ed7750()*0.0385253);
}

double NNfunction_sb_uLdR::synapse0x2eee3c0() {
   return (neuron0x2ecd7e0()*-1.00493);
}

double NNfunction_sb_uLdR::synapse0x2eee400() {
   return (neuron0x2eda330()*0.00360836);
}

double NNfunction_sb_uLdR::synapse0x2eee440() {
   return (neuron0x2edad00()*0.0320222);
}

double NNfunction_sb_uLdR::synapse0x2eee480() {
   return (neuron0x2edb6d0()*-0.023907);
}

double NNfunction_sb_uLdR::synapse0x2eeea60() {
   return (neuron0x2edc0a0()*-0.0199702);
}

double NNfunction_sb_uLdR::synapse0x2eeeaa0() {
   return (neuron0x2edca70()*-0.0617453);
}

double NNfunction_sb_uLdR::synapse0x2eeeae0() {
   return (neuron0x2edd440()*-0.000262221);
}

double NNfunction_sb_uLdR::synapse0x2eeeb20() {
   return (neuron0x2edde10()*1.43585);
}

double NNfunction_sb_uLdR::synapse0x2eeeb60() {
   return (neuron0x2ede7e0()*0.033861);
}

double NNfunction_sb_uLdR::synapse0x2eeeba0() {
   return (neuron0x2edf3c0()*-0.0545223);
}

double NNfunction_sb_uLdR::synapse0x2eeebe0() {
   return (neuron0x2edfd90()*-0.0450284);
}

double NNfunction_sb_uLdR::synapse0x2eeec20() {
   return (neuron0x2ed0c10()*-1.61222);
}

double NNfunction_sb_uLdR::synapse0x2eeec60() {
   return (neuron0x2ed15e0()*0.0190941);
}

double NNfunction_sb_uLdR::synapse0x2eeeca0() {
   return (neuron0x2ed1fb0()*0.322952);
}

double NNfunction_sb_uLdR::synapse0x2eeece0() {
   return (neuron0x2ee45f0()*0.00706386);
}

double NNfunction_sb_uLdR::synapse0x2eeed20() {
   return (neuron0x2ee4ea0()*0.0706516);
}

double NNfunction_sb_uLdR::synapse0x2eeed60() {
   return (neuron0x2ee5870()*-0.0692847);
}

double NNfunction_sb_uLdR::synapse0x2eeeda0() {
   return (neuron0x2ee6240()*0.00250425);
}

double NNfunction_sb_uLdR::synapse0x2eef120() {
   return (neuron0x2ec2200()*-0.955887);
}

double NNfunction_sb_uLdR::synapse0x2eef160() {
   return (neuron0x2ec2b50()*-0.0530669);
}

double NNfunction_sb_uLdR::synapse0x2eef1a0() {
   return (neuron0x2ec3630()*0.113851);
}

double NNfunction_sb_uLdR::synapse0x2eef1e0() {
   return (neuron0x2c86980()*0.573414);
}

double NNfunction_sb_uLdR::synapse0x2eef220() {
   return (neuron0x2ec43d0()*-0.168479);
}

double NNfunction_sb_uLdR::synapse0x2eef260() {
   return (neuron0x2ec4da0()*0.747678);
}

double NNfunction_sb_uLdR::synapse0x2eef2a0() {
   return (neuron0x2ec5b70()*0.414022);
}

double NNfunction_sb_uLdR::synapse0x2eef2e0() {
   return (neuron0x2ec6540()*3.09606);
}

double NNfunction_sb_uLdR::synapse0x2eef320() {
   return (neuron0x2ec6f10()*-1.47794);
}

double NNfunction_sb_uLdR::synapse0x2eef360() {
   return (neuron0x2ec79f0()*-1.07042);
}

double NNfunction_sb_uLdR::synapse0x2eef3a0() {
   return (neuron0x2ec83c0()*0.239124);
}

double NNfunction_sb_uLdR::synapse0x2eef3e0() {
   return (neuron0x2ec54a0()*-1.47777);
}

double NNfunction_sb_uLdR::synapse0x2eef420() {
   return (neuron0x2ec9f70()*0.507689);
}

double NNfunction_sb_uLdR::synapse0x2eef460() {
   return (neuron0x2eca940()*0.106489);
}

double NNfunction_sb_uLdR::synapse0x2eef4a0() {
   return (neuron0x2ecb310()*-1.46967);
}

double NNfunction_sb_uLdR::synapse0x2eef4e0() {
   return (neuron0x2ecbce0()*4.75839);
}

double NNfunction_sb_uLdR::synapse0x2eeef70() {
   return (neuron0x2ecdaf0()*-2.1891);
}

double NNfunction_sb_uLdR::synapse0x2eeefb0() {
   return (neuron0x2ecddd0()*0.127905);
}

double NNfunction_sb_uLdR::synapse0x2eef630() {
   return (neuron0x2ece7a0()*-2.4585);
}

double NNfunction_sb_uLdR::synapse0x2eef670() {
   return (neuron0x2ecf170()*1.30296);
}

double NNfunction_sb_uLdR::synapse0x2eef6b0() {
   return (neuron0x2ecfb40()*1.28018);
}

double NNfunction_sb_uLdR::synapse0x2eef6f0() {
   return (neuron0x2ed0510()*-0.885313);
}

double NNfunction_sb_uLdR::synapse0x2eef730() {
   return (neuron0x2ec9060()*2.17218);
}

double NNfunction_sb_uLdR::synapse0x2eef770() {
   return (neuron0x2ec9a30()*-1.36189);
}

double NNfunction_sb_uLdR::synapse0x2eef7b0() {
   return (neuron0x2ed32a0()*1.23025);
}

double NNfunction_sb_uLdR::synapse0x2eef7f0() {
   return (neuron0x2ed3c70()*1.5885);
}

double NNfunction_sb_uLdR::synapse0x2eef830() {
   return (neuron0x2ed4640()*-1.23107);
}

double NNfunction_sb_uLdR::synapse0x2eef870() {
   return (neuron0x2ed5010()*5.39608);
}

double NNfunction_sb_uLdR::synapse0x2eef8b0() {
   return (neuron0x2ed59e0()*-1.93986);
}

double NNfunction_sb_uLdR::synapse0x2eef8f0() {
   return (neuron0x2ed63b0()*0.975392);
}

double NNfunction_sb_uLdR::synapse0x2eef930() {
   return (neuron0x2ed6d80()*-0.823858);
}

double NNfunction_sb_uLdR::synapse0x2eef970() {
   return (neuron0x2ed7750()*1.22354);
}

double NNfunction_sb_uLdR::synapse0x2eef520() {
   return (neuron0x2ecd7e0()*0.723602);
}

double NNfunction_sb_uLdR::synapse0x2eef560() {
   return (neuron0x2eda330()*-0.69981);
}

double NNfunction_sb_uLdR::synapse0x2eef5a0() {
   return (neuron0x2edad00()*0.947803);
}

double NNfunction_sb_uLdR::synapse0x2eef5e0() {
   return (neuron0x2edb6d0()*1.6144);
}

double NNfunction_sb_uLdR::synapse0x2eefbc0() {
   return (neuron0x2edc0a0()*-1.48931);
}

double NNfunction_sb_uLdR::synapse0x2eefc00() {
   return (neuron0x2edca70()*-0.181523);
}

double NNfunction_sb_uLdR::synapse0x2eefc40() {
   return (neuron0x2edd440()*-0.541074);
}

double NNfunction_sb_uLdR::synapse0x2eefc80() {
   return (neuron0x2edde10()*1.37713);
}

double NNfunction_sb_uLdR::synapse0x2eefcc0() {
   return (neuron0x2ede7e0()*0.718796);
}

double NNfunction_sb_uLdR::synapse0x2eefd00() {
   return (neuron0x2edf3c0()*0.427309);
}

double NNfunction_sb_uLdR::synapse0x2eefd40() {
   return (neuron0x2edfd90()*0.353459);
}

double NNfunction_sb_uLdR::synapse0x2eefd80() {
   return (neuron0x2ed0c10()*-2.3028);
}

double NNfunction_sb_uLdR::synapse0x2eefdc0() {
   return (neuron0x2ed15e0()*0.815548);
}

double NNfunction_sb_uLdR::synapse0x2eefe00() {
   return (neuron0x2ed1fb0()*-1.90044);
}

double NNfunction_sb_uLdR::synapse0x2eefe40() {
   return (neuron0x2ee45f0()*-0.869641);
}

double NNfunction_sb_uLdR::synapse0x2eefe80() {
   return (neuron0x2ee4ea0()*0.717385);
}

double NNfunction_sb_uLdR::synapse0x2eefec0() {
   return (neuron0x2ee5870()*0.490852);
}

double NNfunction_sb_uLdR::synapse0x2eeff00() {
   return (neuron0x2ee6240()*1.19777);
}

double NNfunction_sb_uLdR::synapse0x2ef0280() {
   return (neuron0x2ec2200()*0.0511674);
}

double NNfunction_sb_uLdR::synapse0x2ef02c0() {
   return (neuron0x2ec2b50()*-0.0930722);
}

double NNfunction_sb_uLdR::synapse0x2ef0300() {
   return (neuron0x2ec3630()*0.0901033);
}

double NNfunction_sb_uLdR::synapse0x2ef0340() {
   return (neuron0x2c86980()*-0.201575);
}

double NNfunction_sb_uLdR::synapse0x2ef0380() {
   return (neuron0x2ec43d0()*0.151638);
}

double NNfunction_sb_uLdR::synapse0x2ef03c0() {
   return (neuron0x2ec4da0()*-0.170335);
}

double NNfunction_sb_uLdR::synapse0x2ef0400() {
   return (neuron0x2ec5b70()*-0.216105);
}

double NNfunction_sb_uLdR::synapse0x2ef0440() {
   return (neuron0x2ec6540()*0.59624);
}

double NNfunction_sb_uLdR::synapse0x2ef0480() {
   return (neuron0x2ec6f10()*0.585653);
}

double NNfunction_sb_uLdR::synapse0x2ef04c0() {
   return (neuron0x2ec79f0()*-0.00806417);
}

double NNfunction_sb_uLdR::synapse0x2ef0500() {
   return (neuron0x2ec83c0()*-0.284905);
}

double NNfunction_sb_uLdR::synapse0x2ef0540() {
   return (neuron0x2ec54a0()*0.0373643);
}

double NNfunction_sb_uLdR::synapse0x2ef0580() {
   return (neuron0x2ec9f70()*-0.0796799);
}

double NNfunction_sb_uLdR::synapse0x2ef05c0() {
   return (neuron0x2eca940()*-0.125715);
}

double NNfunction_sb_uLdR::synapse0x2ef0600() {
   return (neuron0x2ecb310()*0.218299);
}

double NNfunction_sb_uLdR::synapse0x2ef0640() {
   return (neuron0x2ecbce0()*0.0489864);
}

double NNfunction_sb_uLdR::synapse0x2ef00d0() {
   return (neuron0x2ecdaf0()*0.288617);
}

double NNfunction_sb_uLdR::synapse0x2ef0110() {
   return (neuron0x2ecddd0()*0.207483);
}

double NNfunction_sb_uLdR::synapse0x2ef0790() {
   return (neuron0x2ece7a0()*-0.0237164);
}

double NNfunction_sb_uLdR::synapse0x2ef07d0() {
   return (neuron0x2ecf170()*-0.0561183);
}

double NNfunction_sb_uLdR::synapse0x2ef0810() {
   return (neuron0x2ecfb40()*-0.21833);
}

double NNfunction_sb_uLdR::synapse0x2ef0850() {
   return (neuron0x2ed0510()*0.0813813);
}

double NNfunction_sb_uLdR::synapse0x2ef0890() {
   return (neuron0x2ec9060()*-0.435951);
}

double NNfunction_sb_uLdR::synapse0x2ef08d0() {
   return (neuron0x2ec9a30()*0.841177);
}

double NNfunction_sb_uLdR::synapse0x2ef0910() {
   return (neuron0x2ed32a0()*-0.000212182);
}

double NNfunction_sb_uLdR::synapse0x2ef0950() {
   return (neuron0x2ed3c70()*0.251686);
}

double NNfunction_sb_uLdR::synapse0x2ef0990() {
   return (neuron0x2ed4640()*-0.694515);
}

double NNfunction_sb_uLdR::synapse0x2ef09d0() {
   return (neuron0x2ed5010()*-0.00975992);
}

double NNfunction_sb_uLdR::synapse0x2ef0a10() {
   return (neuron0x2ed59e0()*0.278236);
}

double NNfunction_sb_uLdR::synapse0x2ef0a50() {
   return (neuron0x2ed63b0()*0.00513847);
}

double NNfunction_sb_uLdR::synapse0x2ef0a90() {
   return (neuron0x2ed6d80()*-0.066645);
}

double NNfunction_sb_uLdR::synapse0x2ef0ad0() {
   return (neuron0x2ed7750()*0.0936174);
}

double NNfunction_sb_uLdR::synapse0x2ef0680() {
   return (neuron0x2ecd7e0()*-4.42059);
}

double NNfunction_sb_uLdR::synapse0x2ef06c0() {
   return (neuron0x2eda330()*0.128448);
}

double NNfunction_sb_uLdR::synapse0x2ef0700() {
   return (neuron0x2edad00()*0.0673357);
}

double NNfunction_sb_uLdR::synapse0x2ef0740() {
   return (neuron0x2edb6d0()*0.0548823);
}

double NNfunction_sb_uLdR::synapse0x2ef0d20() {
   return (neuron0x2edc0a0()*0.0848164);
}

double NNfunction_sb_uLdR::synapse0x2ef0d60() {
   return (neuron0x2edca70()*-0.129238);
}

double NNfunction_sb_uLdR::synapse0x2ef0da0() {
   return (neuron0x2edd440()*-0.250057);
}

double NNfunction_sb_uLdR::synapse0x2ef0de0() {
   return (neuron0x2edde10()*-0.32157);
}

double NNfunction_sb_uLdR::synapse0x2ef0e20() {
   return (neuron0x2ede7e0()*0.0794914);
}

double NNfunction_sb_uLdR::synapse0x2ef0e60() {
   return (neuron0x2edf3c0()*-0.104603);
}

double NNfunction_sb_uLdR::synapse0x2ef0ea0() {
   return (neuron0x2edfd90()*-0.146305);
}

double NNfunction_sb_uLdR::synapse0x2ef0ee0() {
   return (neuron0x2ed0c10()*1.13751);
}

double NNfunction_sb_uLdR::synapse0x2ef0f20() {
   return (neuron0x2ed15e0()*0.0566383);
}

double NNfunction_sb_uLdR::synapse0x2ef0f60() {
   return (neuron0x2ed1fb0()*2.49893);
}

double NNfunction_sb_uLdR::synapse0x2ef0fa0() {
   return (neuron0x2ee45f0()*0.027088);
}

double NNfunction_sb_uLdR::synapse0x2ef0fe0() {
   return (neuron0x2ee4ea0()*0.11471);
}

double NNfunction_sb_uLdR::synapse0x2ef1020() {
   return (neuron0x2ee5870()*-0.14822);
}

double NNfunction_sb_uLdR::synapse0x2ef1060() {
   return (neuron0x2ee6240()*-0.0573667);
}

double NNfunction_sb_uLdR::synapse0x2ef12c0() {
   return (neuron0x2eed440()*6.42517);
}

double NNfunction_sb_uLdR::synapse0x2ef1300() {
   return (neuron0x2eed7e0()*-4.51382);
}

double NNfunction_sb_uLdR::synapse0x2ef1340() {
   return (neuron0x2eedc80()*-4.66835);
}

double NNfunction_sb_uLdR::synapse0x2ef1380() {
   return (neuron0x2eeede0()*-6.13303);
}

double NNfunction_sb_uLdR::synapse0x2ef13c0() {
   return (neuron0x2eeff40()*7.43982);
}

