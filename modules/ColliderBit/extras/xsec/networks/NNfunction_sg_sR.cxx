#include "NNfunction_sg_sR.h"
#include <cmath>

double NNfunction_sg_sR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4068)/15.1483;
   input1 = (in1 - 34.316)/932.123;
   input2 = (in2 - 494.333)/559.733;
   input3 = (in3 - 161.217)/705.146;
   input4 = (in4 - 947.991)/824.982;
   input5 = (in5 - 851.148)/819.736;
   input6 = (in6 - 857.257)/822.267;
   input7 = (in7 - 858.277)/805.397;
   input8 = (in8 - 862.669)/846.034;
   input9 = (in9 - 854.914)/834.989;
   input10 = (in10 - 874.25)/832.64;
   input11 = (in11 - 800.194)/749.013;
   input12 = (in12 - 802.401)/751.173;
   input13 = (in13 - 590.37)/469.736;
   input14 = (in14 - 795.839)/711.388;
   input15 = (in15 - 794.219)/708.799;
   input16 = (in16 - 554.248)/478.45;
   input17 = (in17 - 820.232)/773.627;
   input18 = (in18 - 612.172)/515.318;
   input19 = (in19 - 827.926)/745.105;
   input20 = (in20 - -138.607)/476.336;
   input21 = (in21 - -178.523)/1048.38;
   input22 = (in22 - -6.23367)/1072.13;
   input23 = (in23 - -82.749)/576.5;
   switch(index) {
     case 0:
         return neuron0x3a2d770();
     default:
         return 0.;
   }
}

double NNfunction_sg_sR::Value(int index, double* input) {
   input0 = (input[0] - 23.4068)/15.1483;
   input1 = (input[1] - 34.316)/932.123;
   input2 = (input[2] - 494.333)/559.733;
   input3 = (input[3] - 161.217)/705.146;
   input4 = (input[4] - 947.991)/824.982;
   input5 = (input[5] - 851.148)/819.736;
   input6 = (input[6] - 857.257)/822.267;
   input7 = (input[7] - 858.277)/805.397;
   input8 = (input[8] - 862.669)/846.034;
   input9 = (input[9] - 854.914)/834.989;
   input10 = (input[10] - 874.25)/832.64;
   input11 = (input[11] - 800.194)/749.013;
   input12 = (input[12] - 802.401)/751.173;
   input13 = (input[13] - 590.37)/469.736;
   input14 = (input[14] - 795.839)/711.388;
   input15 = (input[15] - 794.219)/708.799;
   input16 = (input[16] - 554.248)/478.45;
   input17 = (input[17] - 820.232)/773.627;
   input18 = (input[18] - 612.172)/515.318;
   input19 = (input[19] - 827.926)/745.105;
   input20 = (input[20] - -138.607)/476.336;
   input21 = (input[21] - -178.523)/1048.38;
   input22 = (input[22] - -6.23367)/1072.13;
   input23 = (input[23] - -82.749)/576.5;
   switch(index) {
     case 0:
         return neuron0x3a2d770();
     default:
         return 0.;
   }
}

double NNfunction_sg_sR::neuron0x39f87e0() {
   return input0;
}

double NNfunction_sg_sR::neuron0x39f8a90() {
   return input1;
}

double NNfunction_sg_sR::neuron0x39f8dd0() {
   return input2;
}

double NNfunction_sg_sR::neuron0x39f9110() {
   return input3;
}

double NNfunction_sg_sR::neuron0x39f9450() {
   return input4;
}

double NNfunction_sg_sR::neuron0x39f9790() {
   return input5;
}

double NNfunction_sg_sR::neuron0x39f9ad0() {
   return input6;
}

double NNfunction_sg_sR::neuron0x39f9e10() {
   return input7;
}

double NNfunction_sg_sR::neuron0x39fa150() {
   return input8;
}

double NNfunction_sg_sR::neuron0x39fa490() {
   return input9;
}

double NNfunction_sg_sR::neuron0x39fa7d0() {
   return input10;
}

double NNfunction_sg_sR::neuron0x39fab10() {
   return input11;
}

double NNfunction_sg_sR::neuron0x39fae50() {
   return input12;
}

double NNfunction_sg_sR::neuron0x39fb190() {
   return input13;
}

double NNfunction_sg_sR::neuron0x39fb4d0() {
   return input14;
}

double NNfunction_sg_sR::neuron0x39fb810() {
   return input15;
}

double NNfunction_sg_sR::neuron0x39fbb50() {
   return input16;
}

double NNfunction_sg_sR::neuron0x39fc0b0() {
   return input17;
}

double NNfunction_sg_sR::neuron0x39fc2d0() {
   return input18;
}

double NNfunction_sg_sR::neuron0x39fc610() {
   return input19;
}

double NNfunction_sg_sR::neuron0x39fc950() {
   return input20;
}

double NNfunction_sg_sR::neuron0x39fcc90() {
   return input21;
}

double NNfunction_sg_sR::neuron0x39fcfd0() {
   return input22;
}

double NNfunction_sg_sR::neuron0x39fd310() {
   return input23;
}

double NNfunction_sg_sR::input0x39fd780() {
   double input = -0.0413201;
   input += synapse0x39fdac0();
   input += synapse0x39fdb00();
   input += synapse0x39fdb40();
   input += synapse0x39fdb80();
   input += synapse0x39fdbc0();
   input += synapse0x39fdc00();
   input += synapse0x39fdc40();
   input += synapse0x39fdc80();
   input += synapse0x39fdcc0();
   input += synapse0x39fdd00();
   input += synapse0x39fdd40();
   input += synapse0x39fdd80();
   input += synapse0x39fddc0();
   input += synapse0x39fde00();
   input += synapse0x39fde40();
   input += synapse0x39fde80();
   input += synapse0x39fd910();
   input += synapse0x39fd950();
   input += synapse0x37b4d80();
   input += synapse0x37b4dc0();
   input += synapse0x39fdfd0();
   input += synapse0x39fe010();
   input += synapse0x39fe050();
   input += synapse0x39fe090();
   return input;
}

double NNfunction_sg_sR::neuron0x39fd780() {
   double input = input0x39fd780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x39fe0d0() {
   double input = -0.391675;
   input += synapse0x39fe410();
   input += synapse0x39fe450();
   input += synapse0x39fe490();
   input += synapse0x39fe4d0();
   input += synapse0x39fe510();
   input += synapse0x39fe550();
   input += synapse0x39fe590();
   input += synapse0x39fe5d0();
   input += synapse0x39fe610();
   input += synapse0x39fdec0();
   input += synapse0x39fdf00();
   input += synapse0x39fdf40();
   input += synapse0x39fdf80();
   input += synapse0x39fe860();
   input += synapse0x39fe8a0();
   input += synapse0x39fe8e0();
   input += synapse0x39fe260();
   input += synapse0x39fe2a0();
   input += synapse0x39fea30();
   input += synapse0x39fea70();
   input += synapse0x39feab0();
   input += synapse0x39feaf0();
   input += synapse0x39feb30();
   input += synapse0x39feb70();
   return input;
}

double NNfunction_sg_sR::neuron0x39fe0d0() {
   double input = input0x39fe0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x39febb0() {
   double input = 0.150237;
   input += synapse0x39feef0();
   input += synapse0x39fef30();
   input += synapse0x39fef70();
   input += synapse0x39fefb0();
   input += synapse0x39feff0();
   input += synapse0x39ff030();
   input += synapse0x39ff070();
   input += synapse0x39ff0b0();
   input += synapse0x39ff0f0();
   input += synapse0x39ff130();
   input += synapse0x39ff170();
   input += synapse0x39ff1b0();
   input += synapse0x39ff1f0();
   input += synapse0x39ff230();
   input += synapse0x39ff270();
   input += synapse0x39ff2b0();
   input += synapse0x39fed40();
   input += synapse0x39fed80();
   input += synapse0x287d3f0();
   input += synapse0x37c2890();
   input += synapse0x37c28d0();
   input += synapse0x3a011f0();
   input += synapse0x3a01230();
   input += synapse0x39f8520();
   return input;
}

double NNfunction_sg_sR::neuron0x39febb0() {
   double input = input0x39febb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x39fe650() {
   double input = -0.347005;
   input += synapse0x39f85f0();
   input += synapse0x37c3110();
   input += synapse0x39fe7e0();
   input += synapse0x39fe820();
   input += synapse0x39ff400();
   input += synapse0x39ff440();
   input += synapse0x39ff480();
   input += synapse0x39ff4c0();
   input += synapse0x39ff500();
   input += synapse0x39ff540();
   input += synapse0x39ff580();
   input += synapse0x39ff5c0();
   input += synapse0x39ff600();
   input += synapse0x39ff640();
   input += synapse0x39ff680();
   input += synapse0x39ff6c0();
   input += synapse0x39f8560();
   input += synapse0x39f85a0();
   input += synapse0x39ff810();
   input += synapse0x39ff850();
   input += synapse0x39ff890();
   input += synapse0x39ff8d0();
   input += synapse0x39ff910();
   input += synapse0x39ff950();
   return input;
}

double NNfunction_sg_sR::neuron0x39fe650() {
   double input = input0x39fe650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x39ff990() {
   double input = -0.447499;
   input += synapse0x39ffcd0();
   input += synapse0x39ffd10();
   input += synapse0x39ffd50();
   input += synapse0x39ffd90();
   input += synapse0x39ffdd0();
   input += synapse0x39ffe10();
   input += synapse0x39ffe50();
   input += synapse0x39ffe90();
   input += synapse0x39ffed0();
   input += synapse0x39fff10();
   input += synapse0x39fff50();
   input += synapse0x39fff90();
   input += synapse0x39fffd0();
   input += synapse0x3a00010();
   input += synapse0x3a00050();
   input += synapse0x3a00090();
   input += synapse0x3a001e0();
   input += synapse0x39ffb20();
   input += synapse0x39ffb60();
   input += synapse0x3a01330();
   input += synapse0x3a01370();
   input += synapse0x3a013b0();
   input += synapse0x3a013f0();
   input += synapse0x3a01430();
   return input;
}

double NNfunction_sg_sR::neuron0x39ff990() {
   double input = input0x39ff990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a01470() {
   double input = -1.03648;
   input += synapse0x3a017b0();
   input += synapse0x3a017f0();
   input += synapse0x3a01830();
   input += synapse0x3a01870();
   input += synapse0x3a018b0();
   input += synapse0x3a018f0();
   input += synapse0x3a01930();
   input += synapse0x3a01970();
   input += synapse0x3a019b0();
   input += synapse0x37c2be0();
   input += synapse0x37c2c20();
   input += synapse0x37c2c60();
   input += synapse0x37c2ca0();
   input += synapse0x37c2ce0();
   input += synapse0x37c2d20();
   input += synapse0x37c2d60();
   input += synapse0x3a01600();
   input += synapse0x3a01640();
   input += synapse0x37c2eb0();
   input += synapse0x37c2ef0();
   input += synapse0x37c2f30();
   input += synapse0x37c2f70();
   input += synapse0x37c2fb0();
   input += synapse0x3a02200();
   return input;
}

double NNfunction_sg_sR::neuron0x3a01470() {
   double input = input0x3a01470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a02240() {
   double input = 0.426652;
   input += synapse0x3a02580();
   input += synapse0x3a025c0();
   input += synapse0x3a02600();
   input += synapse0x3a02640();
   input += synapse0x3a02680();
   input += synapse0x3a026c0();
   input += synapse0x3a02700();
   input += synapse0x3a02740();
   input += synapse0x3a02780();
   input += synapse0x3a027c0();
   input += synapse0x3a02800();
   input += synapse0x3a02840();
   input += synapse0x3a02880();
   input += synapse0x3a028c0();
   input += synapse0x3a02900();
   input += synapse0x3a02940();
   input += synapse0x3a023d0();
   input += synapse0x3a02410();
   input += synapse0x3a02a90();
   input += synapse0x3a02ad0();
   input += synapse0x3a02b10();
   input += synapse0x3a02b50();
   input += synapse0x3a02b90();
   input += synapse0x3a02bd0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a02240() {
   double input = input0x3a02240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a02c10() {
   double input = 0.304651;
   input += synapse0x3a02f50();
   input += synapse0x3a02f90();
   input += synapse0x3a02fd0();
   input += synapse0x3a03010();
   input += synapse0x3a03050();
   input += synapse0x3a03090();
   input += synapse0x3a030d0();
   input += synapse0x3a03110();
   input += synapse0x3a03150();
   input += synapse0x3a03190();
   input += synapse0x3a031d0();
   input += synapse0x3a03210();
   input += synapse0x3a03250();
   input += synapse0x3a03290();
   input += synapse0x3a032d0();
   input += synapse0x3a03310();
   input += synapse0x3a02da0();
   input += synapse0x3a02de0();
   input += synapse0x3a03460();
   input += synapse0x3a034a0();
   input += synapse0x3a034e0();
   input += synapse0x3a03520();
   input += synapse0x3a03560();
   input += synapse0x3a035a0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a02c10() {
   double input = input0x3a02c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a035e0() {
   double input = -0.253024;
   input += synapse0x39fbfa0();
   input += synapse0x39fbfe0();
   input += synapse0x39fc020();
   input += synapse0x39fc060();
   input += synapse0x3a03b30();
   input += synapse0x3a03b70();
   input += synapse0x3a03bb0();
   input += synapse0x3a03bf0();
   input += synapse0x3a03c30();
   input += synapse0x3a03c70();
   input += synapse0x3a03cb0();
   input += synapse0x3a03cf0();
   input += synapse0x3a03d30();
   input += synapse0x3a03d70();
   input += synapse0x3a03db0();
   input += synapse0x3a03df0();
   input += synapse0x3a03770();
   input += synapse0x3a037b0();
   input += synapse0x3a03f40();
   input += synapse0x3a03f80();
   input += synapse0x3a03fc0();
   input += synapse0x3a04000();
   input += synapse0x3a04040();
   input += synapse0x3a04080();
   return input;
}

double NNfunction_sg_sR::neuron0x3a035e0() {
   double input = input0x3a035e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a040c0() {
   double input = -0.393535;
   input += synapse0x3a04400();
   input += synapse0x3a04440();
   input += synapse0x3a04480();
   input += synapse0x3a044c0();
   input += synapse0x3a04500();
   input += synapse0x3a04540();
   input += synapse0x3a04580();
   input += synapse0x3a045c0();
   input += synapse0x3a04600();
   input += synapse0x3a04640();
   input += synapse0x3a04680();
   input += synapse0x3a046c0();
   input += synapse0x3a04700();
   input += synapse0x3a04740();
   input += synapse0x3a04780();
   input += synapse0x3a047c0();
   input += synapse0x3a04250();
   input += synapse0x3a04290();
   input += synapse0x3a04910();
   input += synapse0x3a04950();
   input += synapse0x3a04990();
   input += synapse0x3a049d0();
   input += synapse0x3a04a10();
   input += synapse0x3a04a50();
   return input;
}

double NNfunction_sg_sR::neuron0x3a040c0() {
   double input = input0x3a040c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a04a90() {
   double input = -0.890743;
   input += synapse0x3a04dd0();
   input += synapse0x3a04e10();
   input += synapse0x3a04e50();
   input += synapse0x3a04e90();
   input += synapse0x3a04ed0();
   input += synapse0x3a04f10();
   input += synapse0x3a04f50();
   input += synapse0x3a04f90();
   input += synapse0x3a04fd0();
   input += synapse0x3a05010();
   input += synapse0x3a05050();
   input += synapse0x3a05090();
   input += synapse0x3a050d0();
   input += synapse0x3a05110();
   input += synapse0x3a05150();
   input += synapse0x3a05190();
   input += synapse0x3a04c20();
   input += synapse0x3a04c60();
   input += synapse0x3a019f0();
   input += synapse0x3a01a30();
   input += synapse0x3a01a70();
   input += synapse0x3a01ab0();
   input += synapse0x3a01af0();
   input += synapse0x3a01b30();
   return input;
}

double NNfunction_sg_sR::neuron0x3a04a90() {
   double input = input0x3a04a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a01b70() {
   double input = 0.413192;
   input += synapse0x3a01eb0();
   input += synapse0x3a01ef0();
   input += synapse0x3a01f30();
   input += synapse0x3a01f70();
   input += synapse0x3a01fb0();
   input += synapse0x3a01ff0();
   input += synapse0x3a02030();
   input += synapse0x3a02070();
   input += synapse0x3a020b0();
   input += synapse0x3a020f0();
   input += synapse0x3a02130();
   input += synapse0x3a02170();
   input += synapse0x3a021b0();
   input += synapse0x3a062f0();
   input += synapse0x3a06330();
   input += synapse0x3a06370();
   input += synapse0x3a01d00();
   input += synapse0x3a01d40();
   input += synapse0x3a064c0();
   input += synapse0x3a06500();
   input += synapse0x3a06540();
   input += synapse0x3a06580();
   input += synapse0x3a065c0();
   input += synapse0x3a06600();
   return input;
}

double NNfunction_sg_sR::neuron0x3a01b70() {
   double input = input0x3a01b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a06640() {
   double input = -0.466093;
   input += synapse0x3a06980();
   input += synapse0x3a069c0();
   input += synapse0x3a06a00();
   input += synapse0x3a06a40();
   input += synapse0x3a06a80();
   input += synapse0x3a06ac0();
   input += synapse0x3a06b00();
   input += synapse0x3a06b40();
   input += synapse0x3a06b80();
   input += synapse0x3a06bc0();
   input += synapse0x3a06c00();
   input += synapse0x3a06c40();
   input += synapse0x3a06c80();
   input += synapse0x3a06cc0();
   input += synapse0x3a06d00();
   input += synapse0x3a06d40();
   input += synapse0x3a067d0();
   input += synapse0x3a06810();
   input += synapse0x3a06e90();
   input += synapse0x3a06ed0();
   input += synapse0x3a06f10();
   input += synapse0x3a06f50();
   input += synapse0x3a06f90();
   input += synapse0x3a06fd0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a06640() {
   double input = input0x3a06640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a07010() {
   double input = 0.481643;
   input += synapse0x3a07350();
   input += synapse0x3a07390();
   input += synapse0x3a073d0();
   input += synapse0x3a07410();
   input += synapse0x3a07450();
   input += synapse0x3a07490();
   input += synapse0x3a074d0();
   input += synapse0x3a07510();
   input += synapse0x3a07550();
   input += synapse0x3a07590();
   input += synapse0x3a075d0();
   input += synapse0x3a07610();
   input += synapse0x3a07650();
   input += synapse0x3a07690();
   input += synapse0x3a076d0();
   input += synapse0x3a07710();
   input += synapse0x3a071a0();
   input += synapse0x3a071e0();
   input += synapse0x3a07860();
   input += synapse0x3a078a0();
   input += synapse0x3a078e0();
   input += synapse0x3a07920();
   input += synapse0x3a07960();
   input += synapse0x3a079a0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a07010() {
   double input = input0x3a07010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a079e0() {
   double input = 0.0334098;
   input += synapse0x3a07d20();
   input += synapse0x3a07d60();
   input += synapse0x3a07da0();
   input += synapse0x3a07de0();
   input += synapse0x3a07e20();
   input += synapse0x3a07e60();
   input += synapse0x3a07ea0();
   input += synapse0x3a07ee0();
   input += synapse0x3a07f20();
   input += synapse0x3a07f60();
   input += synapse0x3a07fa0();
   input += synapse0x3a07fe0();
   input += synapse0x3a08020();
   input += synapse0x3a08060();
   input += synapse0x3a080a0();
   input += synapse0x3a080e0();
   input += synapse0x3a07b70();
   input += synapse0x3a07bb0();
   input += synapse0x3a08230();
   input += synapse0x3a08270();
   input += synapse0x3a082b0();
   input += synapse0x3a082f0();
   input += synapse0x3a08330();
   input += synapse0x3a08370();
   return input;
}

double NNfunction_sg_sR::neuron0x3a079e0() {
   double input = input0x3a079e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a083b0() {
   double input = -0.0835059;
   input += synapse0x3a086f0();
   input += synapse0x39f8970();
   input += synapse0x39f89b0();
   input += synapse0x39f8cb0();
   input += synapse0x39f8cf0();
   input += synapse0x39f8ff0();
   input += synapse0x39f9030();
   input += synapse0x39f9330();
   input += synapse0x39f9370();
   input += synapse0x39f9670();
   input += synapse0x39f96b0();
   input += synapse0x39f99b0();
   input += synapse0x39f99f0();
   input += synapse0x39f9cf0();
   input += synapse0x39f9d30();
   input += synapse0x39fa030();
   input += synapse0x39fa070();
   input += synapse0x39fa370();
   input += synapse0x39fa3b0();
   input += synapse0x39fa6b0();
   input += synapse0x39fa6f0();
   input += synapse0x39fa9f0();
   input += synapse0x39faa30();
   input += synapse0x39fad30();
   return input;
}

double NNfunction_sg_sR::neuron0x3a083b0() {
   double input = input0x3a083b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a0a1c0() {
   double input = 0.513216;
   input += synapse0x39fad70();
   input += synapse0x39fba30();
   input += synapse0x39fba70();
   input += synapse0x3a08540();
   input += synapse0x3a08580();
   input += synapse0x39fbd70();
   input += synapse0x39fbdb0();
   input += synapse0x287c420();
   input += synapse0x287c460();
   input += synapse0x39fc4f0();
   input += synapse0x39fc530();
   input += synapse0x39fc830();
   input += synapse0x39fc870();
   input += synapse0x39fcb70();
   input += synapse0x39fcbb0();
   input += synapse0x39fceb0();
   input += synapse0x39fcef0();
   input += synapse0x39fd1f0();
   input += synapse0x39fd230();
   input += synapse0x39fd530();
   input += synapse0x39fd570();
   input += synapse0x39fb070();
   input += synapse0x39fb0b0();
   input += synapse0x3a0a460();
   return input;
}

double NNfunction_sg_sR::neuron0x3a0a1c0() {
   double input = input0x3a0a1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a0a4a0() {
   double input = -0.0338183;
   input += synapse0x3a0a7e0();
   input += synapse0x3a0a820();
   input += synapse0x3a0a860();
   input += synapse0x3a0a8a0();
   input += synapse0x3a0a8e0();
   input += synapse0x3a0a920();
   input += synapse0x3a0a960();
   input += synapse0x3a0a9a0();
   input += synapse0x3a0a9e0();
   input += synapse0x3a0aa20();
   input += synapse0x3a0aa60();
   input += synapse0x3a0aaa0();
   input += synapse0x3a0aae0();
   input += synapse0x3a0ab20();
   input += synapse0x3a0ab60();
   input += synapse0x3a0aba0();
   input += synapse0x3a0a630();
   input += synapse0x3a0a670();
   input += synapse0x3a0acf0();
   input += synapse0x3a0ad30();
   input += synapse0x3a0ad70();
   input += synapse0x3a0adb0();
   input += synapse0x3a0adf0();
   input += synapse0x3a0ae30();
   return input;
}

double NNfunction_sg_sR::neuron0x3a0a4a0() {
   double input = input0x3a0a4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a0ae70() {
   double input = 0.0792621;
   input += synapse0x3a0b1b0();
   input += synapse0x3a0b1f0();
   input += synapse0x3a0b230();
   input += synapse0x3a0b270();
   input += synapse0x3a0b2b0();
   input += synapse0x3a0b2f0();
   input += synapse0x3a0b330();
   input += synapse0x3a0b370();
   input += synapse0x3a0b3b0();
   input += synapse0x3a0b3f0();
   input += synapse0x3a0b430();
   input += synapse0x3a0b470();
   input += synapse0x3a0b4b0();
   input += synapse0x3a0b4f0();
   input += synapse0x3a0b530();
   input += synapse0x3a0b570();
   input += synapse0x3a0b000();
   input += synapse0x3a0b040();
   input += synapse0x3a0b6c0();
   input += synapse0x3a0b700();
   input += synapse0x3a0b740();
   input += synapse0x3a0b780();
   input += synapse0x3a0b7c0();
   input += synapse0x3a0b800();
   return input;
}

double NNfunction_sg_sR::neuron0x3a0ae70() {
   double input = input0x3a0ae70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a0b840() {
   double input = -3.91423;
   input += synapse0x3a0bb80();
   input += synapse0x3a0bbc0();
   input += synapse0x3a0bc00();
   input += synapse0x3a0bc40();
   input += synapse0x3a0bc80();
   input += synapse0x3a0bcc0();
   input += synapse0x3a0bd00();
   input += synapse0x3a0bd40();
   input += synapse0x3a0bd80();
   input += synapse0x3a0bdc0();
   input += synapse0x3a0be00();
   input += synapse0x3a0be40();
   input += synapse0x3a0be80();
   input += synapse0x3a0bec0();
   input += synapse0x3a0bf00();
   input += synapse0x3a0bf40();
   input += synapse0x3a0b9d0();
   input += synapse0x3a0ba10();
   input += synapse0x3a0c090();
   input += synapse0x3a0c0d0();
   input += synapse0x3a0c110();
   input += synapse0x3a0c150();
   input += synapse0x3a0c190();
   input += synapse0x3a0c1d0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a0b840() {
   double input = input0x3a0b840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a0c210() {
   double input = 0.544618;
   input += synapse0x3a0c550();
   input += synapse0x3a0c590();
   input += synapse0x3a0c5d0();
   input += synapse0x3a0c610();
   input += synapse0x3a0c650();
   input += synapse0x3a0c690();
   input += synapse0x3a0c6d0();
   input += synapse0x3a0c710();
   input += synapse0x3a0c750();
   input += synapse0x3a0c790();
   input += synapse0x3a0c7d0();
   input += synapse0x3a0c810();
   input += synapse0x3a0c850();
   input += synapse0x3a0c890();
   input += synapse0x3a0c8d0();
   input += synapse0x3a0c910();
   input += synapse0x3a0c3a0();
   input += synapse0x3a0c3e0();
   input += synapse0x3a0ca60();
   input += synapse0x3a0caa0();
   input += synapse0x3a0cae0();
   input += synapse0x3a0cb20();
   input += synapse0x3a0cb60();
   input += synapse0x3a0cba0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a0c210() {
   double input = input0x3a0c210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a0cbe0() {
   double input = 0.144407;
   input += synapse0x3a0cf20();
   input += synapse0x3a0cf60();
   input += synapse0x3a0cfa0();
   input += synapse0x3a0cfe0();
   input += synapse0x3a0d020();
   input += synapse0x3a0d060();
   input += synapse0x3a0d0a0();
   input += synapse0x3a0d0e0();
   input += synapse0x3a0d120();
   input += synapse0x3a052e0();
   input += synapse0x3a05320();
   input += synapse0x3a05360();
   input += synapse0x3a053a0();
   input += synapse0x3a053e0();
   input += synapse0x3a05420();
   input += synapse0x3a05460();
   input += synapse0x3a0cd70();
   input += synapse0x3a0cdb0();
   input += synapse0x3a055b0();
   input += synapse0x3a055f0();
   input += synapse0x3a05630();
   input += synapse0x3a05670();
   input += synapse0x3a056b0();
   input += synapse0x3a056f0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a0cbe0() {
   double input = input0x3a0cbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a05730() {
   double input = -3.65077;
   input += synapse0x3a05a70();
   input += synapse0x3a05ab0();
   input += synapse0x3a05af0();
   input += synapse0x3a05b30();
   input += synapse0x3a05b70();
   input += synapse0x3a05bb0();
   input += synapse0x3a05bf0();
   input += synapse0x3a05c30();
   input += synapse0x3a05c70();
   input += synapse0x3a05cb0();
   input += synapse0x3a05cf0();
   input += synapse0x3a05d30();
   input += synapse0x3a05d70();
   input += synapse0x3a05db0();
   input += synapse0x3a05df0();
   input += synapse0x3a05e30();
   input += synapse0x3a058c0();
   input += synapse0x3a05900();
   input += synapse0x3a05f80();
   input += synapse0x3a05fc0();
   input += synapse0x3a06000();
   input += synapse0x3a06040();
   input += synapse0x3a06080();
   input += synapse0x3a060c0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a05730() {
   double input = input0x3a05730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a06100() {
   double input = 0.330847;
   input += synapse0x3a06290();
   input += synapse0x3a0f320();
   input += synapse0x3a0f360();
   input += synapse0x3a0f3a0();
   input += synapse0x3a0f3e0();
   input += synapse0x3a0f420();
   input += synapse0x3a0f460();
   input += synapse0x3a0f4a0();
   input += synapse0x3a0f4e0();
   input += synapse0x3a0f520();
   input += synapse0x3a0f560();
   input += synapse0x3a0f5a0();
   input += synapse0x3a0f5e0();
   input += synapse0x3a0f620();
   input += synapse0x3a0f660();
   input += synapse0x3a0f6a0();
   input += synapse0x3a0f170();
   input += synapse0x3a0f1b0();
   input += synapse0x3a0f7f0();
   input += synapse0x3a0f830();
   input += synapse0x3a0f870();
   input += synapse0x3a0f8b0();
   input += synapse0x3a0f8f0();
   input += synapse0x3a0f930();
   return input;
}

double NNfunction_sg_sR::neuron0x3a06100() {
   double input = input0x3a06100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a0f970() {
   double input = 0.331395;
   input += synapse0x3a0fcb0();
   input += synapse0x3a0fcf0();
   input += synapse0x3a0fd30();
   input += synapse0x3a0fd70();
   input += synapse0x3a0fdb0();
   input += synapse0x3a0fdf0();
   input += synapse0x3a0fe30();
   input += synapse0x3a0fe70();
   input += synapse0x3a0feb0();
   input += synapse0x3a0fef0();
   input += synapse0x3a0ff30();
   input += synapse0x3a0ff70();
   input += synapse0x3a0ffb0();
   input += synapse0x3a0fff0();
   input += synapse0x3a10030();
   input += synapse0x3a10070();
   input += synapse0x3a0fb00();
   input += synapse0x3a0fb40();
   input += synapse0x3a101c0();
   input += synapse0x3a10200();
   input += synapse0x3a10240();
   input += synapse0x3a10280();
   input += synapse0x3a102c0();
   input += synapse0x3a10300();
   return input;
}

double NNfunction_sg_sR::neuron0x3a0f970() {
   double input = input0x3a0f970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a10340() {
   double input = -0.0959578;
   input += synapse0x3a10680();
   input += synapse0x3a106c0();
   input += synapse0x3a10700();
   input += synapse0x3a10740();
   input += synapse0x3a10780();
   input += synapse0x3a107c0();
   input += synapse0x3a10800();
   input += synapse0x3a10840();
   input += synapse0x3a10880();
   input += synapse0x3a108c0();
   input += synapse0x3a10900();
   input += synapse0x3a10940();
   input += synapse0x3a10980();
   input += synapse0x3a109c0();
   input += synapse0x3a10a00();
   input += synapse0x3a10a40();
   input += synapse0x3a104d0();
   input += synapse0x3a10510();
   input += synapse0x3a10b90();
   input += synapse0x3a10bd0();
   input += synapse0x3a10c10();
   input += synapse0x3a10c50();
   input += synapse0x3a10c90();
   input += synapse0x3a10cd0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a10340() {
   double input = input0x3a10340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a10d10() {
   double input = -0.387112;
   input += synapse0x3a11050();
   input += synapse0x3a11090();
   input += synapse0x3a110d0();
   input += synapse0x3a11110();
   input += synapse0x3a11150();
   input += synapse0x3a11190();
   input += synapse0x3a111d0();
   input += synapse0x3a11210();
   input += synapse0x3a11250();
   input += synapse0x3a11290();
   input += synapse0x3a112d0();
   input += synapse0x3a11310();
   input += synapse0x3a11350();
   input += synapse0x3a11390();
   input += synapse0x3a113d0();
   input += synapse0x3a11410();
   input += synapse0x3a10ea0();
   input += synapse0x3a10ee0();
   input += synapse0x3a11560();
   input += synapse0x3a115a0();
   input += synapse0x3a115e0();
   input += synapse0x3a11620();
   input += synapse0x3a11660();
   input += synapse0x3a116a0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a10d10() {
   double input = input0x3a10d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a116e0() {
   double input = 0.670359;
   input += synapse0x3a11a20();
   input += synapse0x3a11a60();
   input += synapse0x3a11aa0();
   input += synapse0x3a11ae0();
   input += synapse0x3a11b20();
   input += synapse0x3a11b60();
   input += synapse0x3a11ba0();
   input += synapse0x3a11be0();
   input += synapse0x3a11c20();
   input += synapse0x3a11c60();
   input += synapse0x3a11ca0();
   input += synapse0x3a11ce0();
   input += synapse0x3a11d20();
   input += synapse0x3a11d60();
   input += synapse0x3a11da0();
   input += synapse0x3a11de0();
   input += synapse0x3a11870();
   input += synapse0x3a118b0();
   input += synapse0x3a11f30();
   input += synapse0x3a11f70();
   input += synapse0x3a11fb0();
   input += synapse0x3a11ff0();
   input += synapse0x3a12030();
   input += synapse0x3a12070();
   return input;
}

double NNfunction_sg_sR::neuron0x3a116e0() {
   double input = input0x3a116e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a120b0() {
   double input = 2.78598;
   input += synapse0x3a123f0();
   input += synapse0x3a12430();
   input += synapse0x3a12470();
   input += synapse0x3a124b0();
   input += synapse0x3a124f0();
   input += synapse0x3a12530();
   input += synapse0x3a12570();
   input += synapse0x3a125b0();
   input += synapse0x3a125f0();
   input += synapse0x3a12630();
   input += synapse0x3a12670();
   input += synapse0x3a126b0();
   input += synapse0x3a126f0();
   input += synapse0x3a12730();
   input += synapse0x3a12770();
   input += synapse0x3a127b0();
   input += synapse0x3a12240();
   input += synapse0x3a12280();
   input += synapse0x3a12900();
   input += synapse0x3a12940();
   input += synapse0x3a12980();
   input += synapse0x3a129c0();
   input += synapse0x3a12a00();
   input += synapse0x3a12a40();
   return input;
}

double NNfunction_sg_sR::neuron0x3a120b0() {
   double input = input0x3a120b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a12a80() {
   double input = -0.0640299;
   input += synapse0x3a12dc0();
   input += synapse0x3a12e00();
   input += synapse0x3a12e40();
   input += synapse0x3a12e80();
   input += synapse0x3a12ec0();
   input += synapse0x3a12f00();
   input += synapse0x3a12f40();
   input += synapse0x3a12f80();
   input += synapse0x3a12fc0();
   input += synapse0x3a13000();
   input += synapse0x3a13040();
   input += synapse0x3a13080();
   input += synapse0x3a130c0();
   input += synapse0x3a13100();
   input += synapse0x3a13140();
   input += synapse0x3a13180();
   input += synapse0x3a12c10();
   input += synapse0x3a12c50();
   input += synapse0x3a132d0();
   input += synapse0x3a13310();
   input += synapse0x3a13350();
   input += synapse0x3a13390();
   input += synapse0x3a133d0();
   input += synapse0x3a13410();
   return input;
}

double NNfunction_sg_sR::neuron0x3a12a80() {
   double input = input0x3a12a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a13450() {
   double input = -0.0466744;
   input += synapse0x3a13790();
   input += synapse0x3a137d0();
   input += synapse0x3a13810();
   input += synapse0x3a13850();
   input += synapse0x3a13890();
   input += synapse0x3a138d0();
   input += synapse0x3a13910();
   input += synapse0x3a13950();
   input += synapse0x3a13990();
   input += synapse0x3a139d0();
   input += synapse0x3a13a10();
   input += synapse0x3a13a50();
   input += synapse0x3a13a90();
   input += synapse0x3a13ad0();
   input += synapse0x3a13b10();
   input += synapse0x3a13b50();
   input += synapse0x3a135e0();
   input += synapse0x3a13620();
   input += synapse0x3a13ca0();
   input += synapse0x3a13ce0();
   input += synapse0x3a13d20();
   input += synapse0x3a13d60();
   input += synapse0x3a13da0();
   input += synapse0x3a13de0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a13450() {
   double input = input0x3a13450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a13e20() {
   double input = 0.382381;
   input += synapse0x3a14160();
   input += synapse0x3a08730();
   input += synapse0x3a08770();
   input += synapse0x3a087b0();
   input += synapse0x3a08a00();
   input += synapse0x3a08a40();
   input += synapse0x3a08a80();
   input += synapse0x3a08cd0();
   input += synapse0x3a08d10();
   input += synapse0x3a08f60();
   input += synapse0x3a08fa0();
   input += synapse0x3a08fe0();
   input += synapse0x3a09230();
   input += synapse0x3a09270();
   input += synapse0x3a094c0();
   input += synapse0x3a09500();
   input += synapse0x3a13fb0();
   input += synapse0x3a13ff0();
   input += synapse0x3a09650();
   input += synapse0x3a09b60();
   input += synapse0x3a09ba0();
   input += synapse0x3a09be0();
   input += synapse0x3a09e30();
   input += synapse0x3a09e70();
   return input;
}

double NNfunction_sg_sR::neuron0x3a13e20() {
   double input = input0x3a13e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a09eb0() {
   double input = -2.59762;
   input += synapse0x3a09720();
   input += synapse0x3a09760();
   input += synapse0x3a097a0();
   input += synapse0x3a097e0();
   input += synapse0x3a0a160();
   input += synapse0x3a164b0();
   input += synapse0x3a164f0();
   input += synapse0x3a16530();
   input += synapse0x3a16570();
   input += synapse0x3a165b0();
   input += synapse0x3a165f0();
   input += synapse0x3a16630();
   input += synapse0x3a16670();
   input += synapse0x3a166b0();
   input += synapse0x3a166f0();
   input += synapse0x3a16730();
   input += synapse0x3a0a040();
   input += synapse0x3a0a080();
   input += synapse0x3a16880();
   input += synapse0x3a168c0();
   input += synapse0x3a16900();
   input += synapse0x3a16940();
   input += synapse0x3a16980();
   input += synapse0x3a169c0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a09eb0() {
   double input = input0x3a09eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a16a00() {
   double input = -1.10768;
   input += synapse0x3a16d40();
   input += synapse0x3a16d80();
   input += synapse0x3a16dc0();
   input += synapse0x3a16e00();
   input += synapse0x3a16e40();
   input += synapse0x3a16e80();
   input += synapse0x3a16ec0();
   input += synapse0x3a16f00();
   input += synapse0x3a16f40();
   input += synapse0x3a16f80();
   input += synapse0x3a16fc0();
   input += synapse0x3a17000();
   input += synapse0x3a17040();
   input += synapse0x3a17080();
   input += synapse0x3a170c0();
   input += synapse0x3a17100();
   input += synapse0x3a16b90();
   input += synapse0x3a16bd0();
   input += synapse0x3a17250();
   input += synapse0x3a17290();
   input += synapse0x3a172d0();
   input += synapse0x3a17310();
   input += synapse0x3a17350();
   input += synapse0x3a17390();
   return input;
}

double NNfunction_sg_sR::neuron0x3a16a00() {
   double input = input0x3a16a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a173d0() {
   double input = 2.11424;
   input += synapse0x3a17710();
   input += synapse0x3a17750();
   input += synapse0x3a17790();
   input += synapse0x3a177d0();
   input += synapse0x3a17810();
   input += synapse0x3a17850();
   input += synapse0x3a17890();
   input += synapse0x3a178d0();
   input += synapse0x3a17910();
   input += synapse0x3a17950();
   input += synapse0x3a17990();
   input += synapse0x3a179d0();
   input += synapse0x3a17a10();
   input += synapse0x3a17a50();
   input += synapse0x3a17a90();
   input += synapse0x3a17ad0();
   input += synapse0x3a17560();
   input += synapse0x3a175a0();
   input += synapse0x3a17c20();
   input += synapse0x3a17c60();
   input += synapse0x3a17ca0();
   input += synapse0x3a17ce0();
   input += synapse0x3a17d20();
   input += synapse0x3a17d60();
   return input;
}

double NNfunction_sg_sR::neuron0x3a173d0() {
   double input = input0x3a173d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a17da0() {
   double input = 0.977537;
   input += synapse0x3a180e0();
   input += synapse0x3a18120();
   input += synapse0x3a18160();
   input += synapse0x3a181a0();
   input += synapse0x3a181e0();
   input += synapse0x3a18220();
   input += synapse0x3a18260();
   input += synapse0x3a182a0();
   input += synapse0x3a182e0();
   input += synapse0x3a18320();
   input += synapse0x3a18360();
   input += synapse0x3a183a0();
   input += synapse0x3a183e0();
   input += synapse0x3a18420();
   input += synapse0x3a18460();
   input += synapse0x3a184a0();
   input += synapse0x3a17f30();
   input += synapse0x3a17f70();
   input += synapse0x3a185f0();
   input += synapse0x3a18630();
   input += synapse0x3a18670();
   input += synapse0x3a186b0();
   input += synapse0x3a186f0();
   input += synapse0x3a18730();
   return input;
}

double NNfunction_sg_sR::neuron0x3a17da0() {
   double input = input0x3a17da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a18770() {
   double input = -0.0148397;
   input += synapse0x3a18ab0();
   input += synapse0x3a18af0();
   input += synapse0x3a18b30();
   input += synapse0x3a18b70();
   input += synapse0x3a18bb0();
   input += synapse0x3a18bf0();
   input += synapse0x3a18c30();
   input += synapse0x3a18c70();
   input += synapse0x3a18cb0();
   input += synapse0x3a18cf0();
   input += synapse0x3a18d30();
   input += synapse0x3a18d70();
   input += synapse0x3a18db0();
   input += synapse0x3a18df0();
   input += synapse0x3a18e30();
   input += synapse0x3a18e70();
   input += synapse0x3a18900();
   input += synapse0x3a18940();
   input += synapse0x3a18fc0();
   input += synapse0x3a19000();
   input += synapse0x3a19040();
   input += synapse0x3a19080();
   input += synapse0x3a190c0();
   input += synapse0x3a19100();
   return input;
}

double NNfunction_sg_sR::neuron0x3a18770() {
   double input = input0x3a18770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a19140() {
   double input = -1.75127;
   input += synapse0x3a19480();
   input += synapse0x3a194c0();
   input += synapse0x3a19500();
   input += synapse0x3a19540();
   input += synapse0x3a19580();
   input += synapse0x3a195c0();
   input += synapse0x3a19600();
   input += synapse0x3a19640();
   input += synapse0x3a19680();
   input += synapse0x3a196c0();
   input += synapse0x3a19700();
   input += synapse0x3a19740();
   input += synapse0x3a19780();
   input += synapse0x3a197c0();
   input += synapse0x3a19800();
   input += synapse0x3a19840();
   input += synapse0x3a192d0();
   input += synapse0x3a19310();
   input += synapse0x3a19990();
   input += synapse0x3a199d0();
   input += synapse0x3a19a10();
   input += synapse0x3a19a50();
   input += synapse0x3a19a90();
   input += synapse0x3a19ad0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a19140() {
   double input = input0x3a19140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a19b10() {
   double input = 3.91438;
   input += synapse0x3a19e50();
   input += synapse0x3a19e90();
   input += synapse0x3a19ed0();
   input += synapse0x3a19f10();
   input += synapse0x3a19f50();
   input += synapse0x3a19f90();
   input += synapse0x3a19fd0();
   input += synapse0x3a1a010();
   input += synapse0x3a1a050();
   input += synapse0x3a1a090();
   input += synapse0x3a1a0d0();
   input += synapse0x3a1a110();
   input += synapse0x3a1a150();
   input += synapse0x3a1a190();
   input += synapse0x3a1a1d0();
   input += synapse0x3a1a210();
   input += synapse0x3a19ca0();
   input += synapse0x3a19ce0();
   input += synapse0x3a1a360();
   input += synapse0x3a1a3a0();
   input += synapse0x3a1a3e0();
   input += synapse0x3a1a420();
   input += synapse0x3a1a460();
   input += synapse0x3a1a4a0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a19b10() {
   double input = input0x3a19b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a1a4e0() {
   double input = -1.63342;
   input += synapse0x3a1a820();
   input += synapse0x3a1a860();
   input += synapse0x3a1a8a0();
   input += synapse0x3a1a8e0();
   input += synapse0x3a1a920();
   input += synapse0x3a1a960();
   input += synapse0x3a1a9a0();
   input += synapse0x3a1a9e0();
   input += synapse0x3a1aa20();
   input += synapse0x3a1aa60();
   input += synapse0x3a1aaa0();
   input += synapse0x3a1aae0();
   input += synapse0x3a1ab20();
   input += synapse0x3a1ab60();
   input += synapse0x3a1aba0();
   input += synapse0x3a1abe0();
   input += synapse0x3a1a670();
   input += synapse0x3a1a6b0();
   input += synapse0x3a1ad30();
   input += synapse0x3a1ad70();
   input += synapse0x3a1adb0();
   input += synapse0x3a1adf0();
   input += synapse0x3a1ae30();
   input += synapse0x3a1ae70();
   return input;
}

double NNfunction_sg_sR::neuron0x3a1a4e0() {
   double input = input0x3a1a4e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a1aeb0() {
   double input = 0.0493782;
   input += synapse0x3a03920();
   input += synapse0x3a03960();
   input += synapse0x3a039a0();
   input += synapse0x3a039e0();
   input += synapse0x3a03a20();
   input += synapse0x3a03a60();
   input += synapse0x3a03aa0();
   input += synapse0x3a03ae0();
   input += synapse0x3a1b600();
   input += synapse0x3a1b640();
   input += synapse0x3a1b680();
   input += synapse0x3a1b6c0();
   input += synapse0x3a1b700();
   input += synapse0x3a1b740();
   input += synapse0x3a1b780();
   input += synapse0x3a1b7c0();
   input += synapse0x3a1b040();
   input += synapse0x3a1b080();
   input += synapse0x3a1b910();
   input += synapse0x3a1b950();
   input += synapse0x3a1b990();
   input += synapse0x3a1b9d0();
   input += synapse0x3a1ba10();
   input += synapse0x3a1ba50();
   return input;
}

double NNfunction_sg_sR::neuron0x3a1aeb0() {
   double input = input0x3a1aeb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a1ba90() {
   double input = 0.531636;
   input += synapse0x3a1bdd0();
   input += synapse0x3a1be10();
   input += synapse0x3a1be50();
   input += synapse0x3a1be90();
   input += synapse0x3a1bed0();
   input += synapse0x3a1bf10();
   input += synapse0x3a1bf50();
   input += synapse0x3a1bf90();
   input += synapse0x3a1bfd0();
   input += synapse0x3a1c010();
   input += synapse0x3a1c050();
   input += synapse0x3a1c090();
   input += synapse0x3a1c0d0();
   input += synapse0x3a1c110();
   input += synapse0x3a1c150();
   input += synapse0x3a1c190();
   input += synapse0x3a1bc20();
   input += synapse0x3a1bc60();
   input += synapse0x3a1c2e0();
   input += synapse0x3a1c320();
   input += synapse0x3a1c360();
   input += synapse0x3a1c3a0();
   input += synapse0x3a1c3e0();
   input += synapse0x3a1c420();
   return input;
}

double NNfunction_sg_sR::neuron0x3a1ba90() {
   double input = input0x3a1ba90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a1c460() {
   double input = -1.97497;
   input += synapse0x3a1c7a0();
   input += synapse0x3a1c7e0();
   input += synapse0x3a1c820();
   input += synapse0x3a1c860();
   input += synapse0x3a1c8a0();
   input += synapse0x3a1c8e0();
   input += synapse0x3a1c920();
   input += synapse0x3a1c960();
   input += synapse0x3a1c9a0();
   input += synapse0x3a1c9e0();
   input += synapse0x3a1ca20();
   input += synapse0x3a1ca60();
   input += synapse0x3a1caa0();
   input += synapse0x3a1cae0();
   input += synapse0x3a1cb20();
   input += synapse0x3a1cb60();
   input += synapse0x3a1c5f0();
   input += synapse0x3a1c630();
   input += synapse0x3a0d160();
   input += synapse0x3a0d1a0();
   input += synapse0x3a0d1e0();
   input += synapse0x3a0d220();
   input += synapse0x3a0d260();
   input += synapse0x3a0d2a0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a1c460() {
   double input = input0x3a1c460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a0d2e0() {
   double input = -0.991341;
   input += synapse0x3a0d620();
   input += synapse0x3a0d660();
   input += synapse0x3a0d6a0();
   input += synapse0x3a0d6e0();
   input += synapse0x3a0d720();
   input += synapse0x3a0d760();
   input += synapse0x3a0d7a0();
   input += synapse0x3a0d7e0();
   input += synapse0x3a0d820();
   input += synapse0x3a0d860();
   input += synapse0x3a0d8a0();
   input += synapse0x3a0d8e0();
   input += synapse0x3a0d920();
   input += synapse0x3a0d960();
   input += synapse0x3a0d9a0();
   input += synapse0x3a0d9e0();
   input += synapse0x3a0d470();
   input += synapse0x3a0d4b0();
   input += synapse0x3a0db30();
   input += synapse0x3a0db70();
   input += synapse0x3a0dbb0();
   input += synapse0x3a0dbf0();
   input += synapse0x3a0dc30();
   input += synapse0x3a0dc70();
   return input;
}

double NNfunction_sg_sR::neuron0x3a0d2e0() {
   double input = input0x3a0d2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a0dcb0() {
   double input = 0.655806;
   input += synapse0x3a0dff0();
   input += synapse0x3a0e030();
   input += synapse0x3a0e070();
   input += synapse0x3a0e0b0();
   input += synapse0x3a0e0f0();
   input += synapse0x3a0e130();
   input += synapse0x3a0e170();
   input += synapse0x3a0e1b0();
   input += synapse0x3a0e1f0();
   input += synapse0x3a0e230();
   input += synapse0x3a0e270();
   input += synapse0x3a0e2b0();
   input += synapse0x3a0e2f0();
   input += synapse0x3a0e330();
   input += synapse0x3a0e370();
   input += synapse0x3a0e3b0();
   input += synapse0x3a0de40();
   input += synapse0x3a0de80();
   input += synapse0x3a0e500();
   input += synapse0x3a0e540();
   input += synapse0x3a0e580();
   input += synapse0x3a0e5c0();
   input += synapse0x3a0e600();
   input += synapse0x3a0e640();
   return input;
}

double NNfunction_sg_sR::neuron0x3a0dcb0() {
   double input = input0x3a0dcb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a0e680() {
   double input = 0.287249;
   input += synapse0x3a0e9c0();
   input += synapse0x3a0ea00();
   input += synapse0x3a0ea40();
   input += synapse0x3a0ea80();
   input += synapse0x3a0eac0();
   input += synapse0x3a0eb00();
   input += synapse0x3a0eb40();
   input += synapse0x3a0eb80();
   input += synapse0x3a0ebc0();
   input += synapse0x3a0ec00();
   input += synapse0x3a0ec40();
   input += synapse0x3a0ec80();
   input += synapse0x3a0ecc0();
   input += synapse0x3a0ed00();
   input += synapse0x3a0ed40();
   input += synapse0x3a0ed80();
   input += synapse0x3a0e810();
   input += synapse0x3a0e850();
   input += synapse0x3a0eed0();
   input += synapse0x3a0ef10();
   input += synapse0x3a0ef50();
   input += synapse0x3a0ef90();
   input += synapse0x3a0efd0();
   input += synapse0x3a0f010();
   return input;
}

double NNfunction_sg_sR::neuron0x3a0e680() {
   double input = input0x3a0e680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a20cc0() {
   double input = -0.332702;
   input += synapse0x3a20ee0();
   input += synapse0x3a20f20();
   input += synapse0x3a20f60();
   input += synapse0x3a20fa0();
   input += synapse0x3a20fe0();
   input += synapse0x3a21020();
   input += synapse0x3a21060();
   input += synapse0x3a210a0();
   input += synapse0x3a210e0();
   input += synapse0x3a21120();
   input += synapse0x3a21160();
   input += synapse0x3a211a0();
   input += synapse0x3a211e0();
   input += synapse0x3a21220();
   input += synapse0x3a21260();
   input += synapse0x3a212a0();
   input += synapse0x3a0f050();
   input += synapse0x3a0f090();
   input += synapse0x3a213f0();
   input += synapse0x3a21430();
   input += synapse0x3a21470();
   input += synapse0x3a214b0();
   input += synapse0x3a214f0();
   input += synapse0x3a21530();
   return input;
}

double NNfunction_sg_sR::neuron0x3a20cc0() {
   double input = input0x3a20cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a21570() {
   double input = -1.34772;
   input += synapse0x3a218b0();
   input += synapse0x3a218f0();
   input += synapse0x3a21930();
   input += synapse0x3a21970();
   input += synapse0x3a219b0();
   input += synapse0x3a219f0();
   input += synapse0x3a21a30();
   input += synapse0x3a21a70();
   input += synapse0x3a21ab0();
   input += synapse0x3a21af0();
   input += synapse0x3a21b30();
   input += synapse0x3a21b70();
   input += synapse0x3a21bb0();
   input += synapse0x3a21bf0();
   input += synapse0x3a21c30();
   input += synapse0x3a21c70();
   input += synapse0x3a21700();
   input += synapse0x3a21740();
   input += synapse0x3a21dc0();
   input += synapse0x3a21e00();
   input += synapse0x3a21e40();
   input += synapse0x3a21e80();
   input += synapse0x3a21ec0();
   input += synapse0x3a21f00();
   return input;
}

double NNfunction_sg_sR::neuron0x3a21570() {
   double input = input0x3a21570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a21f40() {
   double input = -0.991373;
   input += synapse0x3a22280();
   input += synapse0x3a222c0();
   input += synapse0x3a22300();
   input += synapse0x3a22340();
   input += synapse0x3a22380();
   input += synapse0x3a223c0();
   input += synapse0x3a22400();
   input += synapse0x3a22440();
   input += synapse0x3a22480();
   input += synapse0x3a224c0();
   input += synapse0x3a22500();
   input += synapse0x3a22540();
   input += synapse0x3a22580();
   input += synapse0x3a225c0();
   input += synapse0x3a22600();
   input += synapse0x3a22640();
   input += synapse0x3a220d0();
   input += synapse0x3a22110();
   input += synapse0x3a22790();
   input += synapse0x3a227d0();
   input += synapse0x3a22810();
   input += synapse0x3a22850();
   input += synapse0x3a22890();
   input += synapse0x3a228d0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a21f40() {
   double input = input0x3a21f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a22910() {
   double input = -0.193494;
   input += synapse0x3a22c50();
   input += synapse0x3a22c90();
   input += synapse0x3a22cd0();
   input += synapse0x3a22d10();
   input += synapse0x3a22d50();
   input += synapse0x3a22d90();
   input += synapse0x3a22dd0();
   input += synapse0x3a22e10();
   input += synapse0x3a22e50();
   input += synapse0x3a22e90();
   input += synapse0x3a22ed0();
   input += synapse0x3a22f10();
   input += synapse0x3a22f50();
   input += synapse0x3a22f90();
   input += synapse0x3a22fd0();
   input += synapse0x3a23010();
   input += synapse0x3a22aa0();
   input += synapse0x3a22ae0();
   input += synapse0x3a23160();
   input += synapse0x3a231a0();
   input += synapse0x3a231e0();
   input += synapse0x3a23220();
   input += synapse0x3a23260();
   input += synapse0x3a232a0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a22910() {
   double input = input0x3a22910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a29b10() {
   double input = 0.493062;
   input += synapse0x37c3080();
   input += synapse0x37c30c0();
   input += synapse0x39ffc40();
   input += synapse0x39ffc80();
   input += synapse0x3a01720();
   input += synapse0x3a01760();
   input += synapse0x3a024f0();
   input += synapse0x3a02530();
   input += synapse0x3a02ec0();
   input += synapse0x3a02f00();
   input += synapse0x3a03890();
   input += synapse0x3a038d0();
   input += synapse0x3a04370();
   input += synapse0x3a043b0();
   input += synapse0x3a04d40();
   input += synapse0x3a04d80();
   input += synapse0x3a01e20();
   input += synapse0x3a01e60();
   input += synapse0x3a068f0();
   input += synapse0x3a06930();
   input += synapse0x3a072c0();
   input += synapse0x3a07300();
   input += synapse0x3a07c90();
   input += synapse0x3a07cd0();
   input += synapse0x3a08660();
   input += synapse0x3a086a0();
   input += synapse0x39fb6f0();
   input += synapse0x39fb730();
   input += synapse0x3a0a750();
   input += synapse0x3a0a790();
   input += synapse0x3a0b120();
   input += synapse0x3a0b160();
   input += synapse0x3a0baf0();
   input += synapse0x3a0bb30();
   input += synapse0x3a0c4c0();
   input += synapse0x3a0c500();
   input += synapse0x3a0ce90();
   input += synapse0x3a0ced0();
   input += synapse0x3a059e0();
   input += synapse0x3a05a20();
   input += synapse0x3a0f290();
   input += synapse0x3a0f2d0();
   input += synapse0x3a0fc20();
   input += synapse0x3a0fc60();
   input += synapse0x3a105f0();
   input += synapse0x3a10630();
   input += synapse0x3a10fc0();
   input += synapse0x3a11000();
   input += synapse0x3a11990();
   input += synapse0x3a119d0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a29b10() {
   double input = input0x3a29b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a29eb0() {
   double input = 0.0806547;
   input += synapse0x3a140d0();
   input += synapse0x3a14110();
   input += synapse0x3a09690();
   input += synapse0x3a096d0();
   input += synapse0x3a16cb0();
   input += synapse0x3a16cf0();
   input += synapse0x3a17680();
   input += synapse0x3a176c0();
   input += synapse0x3a18050();
   input += synapse0x3a18090();
   input += synapse0x3a18a20();
   input += synapse0x3a18a60();
   input += synapse0x3a193f0();
   input += synapse0x3a19430();
   input += synapse0x3a19dc0();
   input += synapse0x3a19e00();
   input += synapse0x3a1a790();
   input += synapse0x3a1a7d0();
   input += synapse0x3a1b160();
   input += synapse0x3a1b1a0();
   input += synapse0x3a1bd40();
   input += synapse0x3a1bd80();
   input += synapse0x3a1c710();
   input += synapse0x3a1c750();
   input += synapse0x3a0d590();
   input += synapse0x3a0d5d0();
   input += synapse0x3a0df60();
   input += synapse0x3a0dfa0();
   input += synapse0x3a0e930();
   input += synapse0x3a0e970();
   input += synapse0x3a20e50();
   input += synapse0x3a20e90();
   input += synapse0x3a21820();
   input += synapse0x3a21860();
   input += synapse0x3a221f0();
   input += synapse0x3a22230();
   input += synapse0x3a22bc0();
   input += synapse0x3a22c00();
   input += synapse0x39fda30();
   input += synapse0x39fda70();
   input += synapse0x3a12360();
   input += synapse0x3a123a0();
   input += synapse0x3a232e0();
   input += synapse0x3a23320();
   input += synapse0x3a23360();
   input += synapse0x3a233a0();
   input += synapse0x3a2a250();
   input += synapse0x3a2a290();
   input += synapse0x3a2a2d0();
   input += synapse0x3a2a310();
   return input;
}

double NNfunction_sg_sR::neuron0x3a29eb0() {
   double input = input0x3a29eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a2a350() {
   double input = 0.163178;
   input += synapse0x3a2a690();
   input += synapse0x3a2a6d0();
   input += synapse0x3a2a710();
   input += synapse0x3a2a750();
   input += synapse0x3a2a790();
   input += synapse0x3a2a7d0();
   input += synapse0x3a2a810();
   input += synapse0x3a2a850();
   input += synapse0x3a2a890();
   input += synapse0x3a2a8d0();
   input += synapse0x3a2a910();
   input += synapse0x3a2a950();
   input += synapse0x3a2a990();
   input += synapse0x3a2a9d0();
   input += synapse0x3a2aa10();
   input += synapse0x3a2aa50();
   input += synapse0x3a2a4e0();
   input += synapse0x3a2a520();
   input += synapse0x3a2aba0();
   input += synapse0x3a2abe0();
   input += synapse0x3a2ac20();
   input += synapse0x3a2ac60();
   input += synapse0x3a2aca0();
   input += synapse0x3a2ace0();
   input += synapse0x3a2ad20();
   input += synapse0x3a2ad60();
   input += synapse0x3a2ada0();
   input += synapse0x3a2ade0();
   input += synapse0x3a2ae20();
   input += synapse0x3a2ae60();
   input += synapse0x3a2aea0();
   input += synapse0x3a2aee0();
   input += synapse0x3a2aa90();
   input += synapse0x3a2aad0();
   input += synapse0x3a2ab10();
   input += synapse0x3a2ab50();
   input += synapse0x3a2b130();
   input += synapse0x3a2b170();
   input += synapse0x3a2b1b0();
   input += synapse0x3a2b1f0();
   input += synapse0x3a2b230();
   input += synapse0x3a2b270();
   input += synapse0x3a2b2b0();
   input += synapse0x3a2b2f0();
   input += synapse0x3a2b330();
   input += synapse0x3a2b370();
   input += synapse0x3a2b3b0();
   input += synapse0x3a2b3f0();
   input += synapse0x3a2b430();
   input += synapse0x3a2b470();
   return input;
}

double NNfunction_sg_sR::neuron0x3a2a350() {
   double input = input0x3a2a350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a2b4b0() {
   double input = -0.00973396;
   input += synapse0x3a2b7f0();
   input += synapse0x3a2b830();
   input += synapse0x3a2b870();
   input += synapse0x3a2b8b0();
   input += synapse0x3a2b8f0();
   input += synapse0x3a2b930();
   input += synapse0x3a2b970();
   input += synapse0x3a2b9b0();
   input += synapse0x3a2b9f0();
   input += synapse0x3a2ba30();
   input += synapse0x3a2ba70();
   input += synapse0x3a2bab0();
   input += synapse0x3a2baf0();
   input += synapse0x3a2bb30();
   input += synapse0x3a2bb70();
   input += synapse0x3a2bbb0();
   input += synapse0x3a2b640();
   input += synapse0x3a2b680();
   input += synapse0x3a2bd00();
   input += synapse0x3a2bd40();
   input += synapse0x3a2bd80();
   input += synapse0x3a2bdc0();
   input += synapse0x3a2be00();
   input += synapse0x3a2be40();
   input += synapse0x3a2be80();
   input += synapse0x3a2bec0();
   input += synapse0x3a2bf00();
   input += synapse0x3a2bf40();
   input += synapse0x3a2bf80();
   input += synapse0x3a2bfc0();
   input += synapse0x3a2c000();
   input += synapse0x3a2c040();
   input += synapse0x3a2bbf0();
   input += synapse0x3a2bc30();
   input += synapse0x3a2bc70();
   input += synapse0x3a2bcb0();
   input += synapse0x3a2c290();
   input += synapse0x3a2c2d0();
   input += synapse0x3a2c310();
   input += synapse0x3a2c350();
   input += synapse0x3a2c390();
   input += synapse0x3a2c3d0();
   input += synapse0x3a2c410();
   input += synapse0x3a2c450();
   input += synapse0x3a2c490();
   input += synapse0x3a2c4d0();
   input += synapse0x3a2c510();
   input += synapse0x3a2c550();
   input += synapse0x3a2c590();
   input += synapse0x3a2c5d0();
   return input;
}

double NNfunction_sg_sR::neuron0x3a2b4b0() {
   double input = input0x3a2b4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a2c610() {
   double input = 0.344236;
   input += synapse0x3a2c950();
   input += synapse0x3a2c990();
   input += synapse0x3a2c9d0();
   input += synapse0x3a2ca10();
   input += synapse0x3a2ca50();
   input += synapse0x3a2ca90();
   input += synapse0x3a2cad0();
   input += synapse0x3a2cb10();
   input += synapse0x3a2cb50();
   input += synapse0x3a2cb90();
   input += synapse0x3a2cbd0();
   input += synapse0x3a2cc10();
   input += synapse0x3a2cc50();
   input += synapse0x3a2cc90();
   input += synapse0x3a2ccd0();
   input += synapse0x3a2cd10();
   input += synapse0x3a2c7a0();
   input += synapse0x3a2c7e0();
   input += synapse0x3a2ce60();
   input += synapse0x3a2cea0();
   input += synapse0x3a2cee0();
   input += synapse0x3a2cf20();
   input += synapse0x3a2cf60();
   input += synapse0x3a2cfa0();
   input += synapse0x3a2cfe0();
   input += synapse0x3a2d020();
   input += synapse0x3a2d060();
   input += synapse0x3a2d0a0();
   input += synapse0x3a2d0e0();
   input += synapse0x3a2d120();
   input += synapse0x3a2d160();
   input += synapse0x3a2d1a0();
   input += synapse0x3a2cd50();
   input += synapse0x3a2cd90();
   input += synapse0x3a2cdd0();
   input += synapse0x3a2ce10();
   input += synapse0x3a2d3f0();
   input += synapse0x3a2d430();
   input += synapse0x3a2d470();
   input += synapse0x3a2d4b0();
   input += synapse0x3a2d4f0();
   input += synapse0x3a2d530();
   input += synapse0x3a2d570();
   input += synapse0x3a2d5b0();
   input += synapse0x3a2d5f0();
   input += synapse0x3a2d630();
   input += synapse0x3a2d670();
   input += synapse0x3a2d6b0();
   input += synapse0x3a2d6f0();
   input += synapse0x3a2d730();
   return input;
}

double NNfunction_sg_sR::neuron0x3a2c610() {
   double input = input0x3a2c610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_sR::input0x3a2d770() {
   double input = 2.89474;
   input += synapse0x3a2d990();
   input += synapse0x3a2d9d0();
   input += synapse0x3a2da10();
   input += synapse0x3a2da50();
   input += synapse0x3a2da90();
   return input;
}

double NNfunction_sg_sR::neuron0x3a2d770() {
   double input = input0x3a2d770();
   return (input * 1)+0;
}

double NNfunction_sg_sR::synapse0x39fdac0() {
   return (neuron0x39f87e0()*0.46527);
}

double NNfunction_sg_sR::synapse0x39fdb00() {
   return (neuron0x39f8a90()*0.148469);
}

double NNfunction_sg_sR::synapse0x39fdb40() {
   return (neuron0x39f8dd0()*0.190125);
}

double NNfunction_sg_sR::synapse0x39fdb80() {
   return (neuron0x39f9110()*-0.198102);
}

double NNfunction_sg_sR::synapse0x39fdbc0() {
   return (neuron0x39f9450()*-0.0243155);
}

double NNfunction_sg_sR::synapse0x39fdc00() {
   return (neuron0x39f9790()*0.277487);
}

double NNfunction_sg_sR::synapse0x39fdc40() {
   return (neuron0x39f9ad0()*0.0197229);
}

double NNfunction_sg_sR::synapse0x39fdc80() {
   return (neuron0x39f9e10()*0.0722276);
}

double NNfunction_sg_sR::synapse0x39fdcc0() {
   return (neuron0x39fa150()*-0.121289);
}

double NNfunction_sg_sR::synapse0x39fdd00() {
   return (neuron0x39fa490()*0.260976);
}

double NNfunction_sg_sR::synapse0x39fdd40() {
   return (neuron0x39fa7d0()*0.239487);
}

double NNfunction_sg_sR::synapse0x39fdd80() {
   return (neuron0x39fab10()*-0.0102317);
}

double NNfunction_sg_sR::synapse0x39fddc0() {
   return (neuron0x39fae50()*0.420498);
}

double NNfunction_sg_sR::synapse0x39fde00() {
   return (neuron0x39fb190()*0.0543565);
}

double NNfunction_sg_sR::synapse0x39fde40() {
   return (neuron0x39fb4d0()*0.0849586);
}

double NNfunction_sg_sR::synapse0x39fde80() {
   return (neuron0x39fb810()*0.0756653);
}

double NNfunction_sg_sR::synapse0x39fd910() {
   return (neuron0x39fbb50()*0.30244);
}

double NNfunction_sg_sR::synapse0x39fd950() {
   return (neuron0x39fc0b0()*0.0338408);
}

double NNfunction_sg_sR::synapse0x37b4d80() {
   return (neuron0x39fc2d0()*0.488931);
}

double NNfunction_sg_sR::synapse0x37b4dc0() {
   return (neuron0x39fc610()*0.383797);
}

double NNfunction_sg_sR::synapse0x39fdfd0() {
   return (neuron0x39fc950()*0.267009);
}

double NNfunction_sg_sR::synapse0x39fe010() {
   return (neuron0x39fcc90()*0.0354174);
}

double NNfunction_sg_sR::synapse0x39fe050() {
   return (neuron0x39fcfd0()*0.0492654);
}

double NNfunction_sg_sR::synapse0x39fe090() {
   return (neuron0x39fd310()*0.0459354);
}

double NNfunction_sg_sR::synapse0x39fe410() {
   return (neuron0x39f87e0()*-0.169108);
}

double NNfunction_sg_sR::synapse0x39fe450() {
   return (neuron0x39f8a90()*0.249791);
}

double NNfunction_sg_sR::synapse0x39fe490() {
   return (neuron0x39f8dd0()*-0.0179115);
}

double NNfunction_sg_sR::synapse0x39fe4d0() {
   return (neuron0x39f9110()*-0.958332);
}

double NNfunction_sg_sR::synapse0x39fe510() {
   return (neuron0x39f9450()*-0.0345702);
}

double NNfunction_sg_sR::synapse0x39fe550() {
   return (neuron0x39f9790()*-0.196273);
}

double NNfunction_sg_sR::synapse0x39fe590() {
   return (neuron0x39f9ad0()*-0.12207);
}

double NNfunction_sg_sR::synapse0x39fe5d0() {
   return (neuron0x39f9e10()*0.13289);
}

double NNfunction_sg_sR::synapse0x39fe610() {
   return (neuron0x39fa150()*-0.143148);
}

double NNfunction_sg_sR::synapse0x39fdec0() {
   return (neuron0x39fa490()*0.0662544);
}

double NNfunction_sg_sR::synapse0x39fdf00() {
   return (neuron0x39fa7d0()*0.176433);
}

double NNfunction_sg_sR::synapse0x39fdf40() {
   return (neuron0x39fab10()*0.0360135);
}

double NNfunction_sg_sR::synapse0x39fdf80() {
   return (neuron0x39fae50()*0.175672);
}

double NNfunction_sg_sR::synapse0x39fe860() {
   return (neuron0x39fb190()*0.443432);
}

double NNfunction_sg_sR::synapse0x39fe8a0() {
   return (neuron0x39fb4d0()*0.490686);
}

double NNfunction_sg_sR::synapse0x39fe8e0() {
   return (neuron0x39fb810()*-0.0732595);
}

double NNfunction_sg_sR::synapse0x39fe260() {
   return (neuron0x39fbb50()*-0.160442);
}

double NNfunction_sg_sR::synapse0x39fe2a0() {
   return (neuron0x39fc0b0()*0.190559);
}

double NNfunction_sg_sR::synapse0x39fea30() {
   return (neuron0x39fc2d0()*-0.0954496);
}

double NNfunction_sg_sR::synapse0x39fea70() {
   return (neuron0x39fc610()*0.226612);
}

double NNfunction_sg_sR::synapse0x39feab0() {
   return (neuron0x39fc950()*0.0288521);
}

double NNfunction_sg_sR::synapse0x39feaf0() {
   return (neuron0x39fcc90()*-0.0562571);
}

double NNfunction_sg_sR::synapse0x39feb30() {
   return (neuron0x39fcfd0()*0.106546);
}

double NNfunction_sg_sR::synapse0x39feb70() {
   return (neuron0x39fd310()*0.0307148);
}

double NNfunction_sg_sR::synapse0x39feef0() {
   return (neuron0x39f87e0()*0.0809127);
}

double NNfunction_sg_sR::synapse0x39fef30() {
   return (neuron0x39f8a90()*0.147929);
}

double NNfunction_sg_sR::synapse0x39fef70() {
   return (neuron0x39f8dd0()*-0.0702002);
}

double NNfunction_sg_sR::synapse0x39fefb0() {
   return (neuron0x39f9110()*-0.506757);
}

double NNfunction_sg_sR::synapse0x39feff0() {
   return (neuron0x39f9450()*-0.05894);
}

double NNfunction_sg_sR::synapse0x39ff030() {
   return (neuron0x39f9790()*0.0820879);
}

double NNfunction_sg_sR::synapse0x39ff070() {
   return (neuron0x39f9ad0()*-0.0571957);
}

double NNfunction_sg_sR::synapse0x39ff0b0() {
   return (neuron0x39f9e10()*-0.210347);
}

double NNfunction_sg_sR::synapse0x39ff0f0() {
   return (neuron0x39fa150()*0.191866);
}

double NNfunction_sg_sR::synapse0x39ff130() {
   return (neuron0x39fa490()*0.0212768);
}

double NNfunction_sg_sR::synapse0x39ff170() {
   return (neuron0x39fa7d0()*0.133706);
}

double NNfunction_sg_sR::synapse0x39ff1b0() {
   return (neuron0x39fab10()*0.327005);
}

double NNfunction_sg_sR::synapse0x39ff1f0() {
   return (neuron0x39fae50()*-0.392142);
}

double NNfunction_sg_sR::synapse0x39ff230() {
   return (neuron0x39fb190()*-0.267465);
}

double NNfunction_sg_sR::synapse0x39ff270() {
   return (neuron0x39fb4d0()*-0.172874);
}

double NNfunction_sg_sR::synapse0x39ff2b0() {
   return (neuron0x39fb810()*-0.152726);
}

double NNfunction_sg_sR::synapse0x39fed40() {
   return (neuron0x39fbb50()*-0.141265);
}

double NNfunction_sg_sR::synapse0x39fed80() {
   return (neuron0x39fc0b0()*0.368396);
}

double NNfunction_sg_sR::synapse0x287d3f0() {
   return (neuron0x39fc2d0()*0.316012);
}

double NNfunction_sg_sR::synapse0x37c2890() {
   return (neuron0x39fc610()*-0.325365);
}

double NNfunction_sg_sR::synapse0x37c28d0() {
   return (neuron0x39fc950()*0.21881);
}

double NNfunction_sg_sR::synapse0x3a011f0() {
   return (neuron0x39fcc90()*0.0469706);
}

double NNfunction_sg_sR::synapse0x3a01230() {
   return (neuron0x39fcfd0()*-0.0939685);
}

double NNfunction_sg_sR::synapse0x39f8520() {
   return (neuron0x39fd310()*0.0387055);
}

double NNfunction_sg_sR::synapse0x39f85f0() {
   return (neuron0x39f87e0()*0.0118072);
}

double NNfunction_sg_sR::synapse0x37c3110() {
   return (neuron0x39f8a90()*0.0384423);
}

double NNfunction_sg_sR::synapse0x39fe7e0() {
   return (neuron0x39f8dd0()*0.0136864);
}

double NNfunction_sg_sR::synapse0x39fe820() {
   return (neuron0x39f9110()*0.0635521);
}

double NNfunction_sg_sR::synapse0x39ff400() {
   return (neuron0x39f9450()*0.00247406);
}

double NNfunction_sg_sR::synapse0x39ff440() {
   return (neuron0x39f9790()*0.0071982);
}

double NNfunction_sg_sR::synapse0x39ff480() {
   return (neuron0x39f9ad0()*-0.00439156);
}

double NNfunction_sg_sR::synapse0x39ff4c0() {
   return (neuron0x39f9e10()*-0.0073003);
}

double NNfunction_sg_sR::synapse0x39ff500() {
   return (neuron0x39fa150()*0.240644);
}

double NNfunction_sg_sR::synapse0x39ff540() {
   return (neuron0x39fa490()*0.234958);
}

double NNfunction_sg_sR::synapse0x39ff580() {
   return (neuron0x39fa7d0()*-0.0116468);
}

double NNfunction_sg_sR::synapse0x39ff5c0() {
   return (neuron0x39fab10()*-0.0188849);
}

double NNfunction_sg_sR::synapse0x39ff600() {
   return (neuron0x39fae50()*-0.023813);
}

double NNfunction_sg_sR::synapse0x39ff640() {
   return (neuron0x39fb190()*0.0490064);
}

double NNfunction_sg_sR::synapse0x39ff680() {
   return (neuron0x39fb4d0()*-0.0239632);
}

double NNfunction_sg_sR::synapse0x39ff6c0() {
   return (neuron0x39fb810()*-0.0311584);
}

double NNfunction_sg_sR::synapse0x39f8560() {
   return (neuron0x39fbb50()*0.00942464);
}

double NNfunction_sg_sR::synapse0x39f85a0() {
   return (neuron0x39fc0b0()*-0.0473638);
}

double NNfunction_sg_sR::synapse0x39ff810() {
   return (neuron0x39fc2d0()*1.14337);
}

double NNfunction_sg_sR::synapse0x39ff850() {
   return (neuron0x39fc610()*0.00467821);
}

double NNfunction_sg_sR::synapse0x39ff890() {
   return (neuron0x39fc950()*0.0133229);
}

double NNfunction_sg_sR::synapse0x39ff8d0() {
   return (neuron0x39fcc90()*-0.00529057);
}

double NNfunction_sg_sR::synapse0x39ff910() {
   return (neuron0x39fcfd0()*-0.0185161);
}

double NNfunction_sg_sR::synapse0x39ff950() {
   return (neuron0x39fd310()*0.0116156);
}

double NNfunction_sg_sR::synapse0x39ffcd0() {
   return (neuron0x39f87e0()*0.0570103);
}

double NNfunction_sg_sR::synapse0x39ffd10() {
   return (neuron0x39f8a90()*0.0432682);
}

double NNfunction_sg_sR::synapse0x39ffd50() {
   return (neuron0x39f8dd0()*-0.231774);
}

double NNfunction_sg_sR::synapse0x39ffd90() {
   return (neuron0x39f9110()*0.0246986);
}

double NNfunction_sg_sR::synapse0x39ffdd0() {
   return (neuron0x39f9450()*-0.0263959);
}

double NNfunction_sg_sR::synapse0x39ffe10() {
   return (neuron0x39f9790()*-0.230761);
}

double NNfunction_sg_sR::synapse0x39ffe50() {
   return (neuron0x39f9ad0()*-0.34448);
}

double NNfunction_sg_sR::synapse0x39ffe90() {
   return (neuron0x39f9e10()*0.37668);
}

double NNfunction_sg_sR::synapse0x39ffed0() {
   return (neuron0x39fa150()*-0.125385);
}

double NNfunction_sg_sR::synapse0x39fff10() {
   return (neuron0x39fa490()*-0.0662687);
}

double NNfunction_sg_sR::synapse0x39fff50() {
   return (neuron0x39fa7d0()*0.184695);
}

double NNfunction_sg_sR::synapse0x39fff90() {
   return (neuron0x39fab10()*-0.271836);
}

double NNfunction_sg_sR::synapse0x39fffd0() {
   return (neuron0x39fae50()*0.245616);
}

double NNfunction_sg_sR::synapse0x3a00010() {
   return (neuron0x39fb190()*-0.164948);
}

double NNfunction_sg_sR::synapse0x3a00050() {
   return (neuron0x39fb4d0()*0.22046);
}

double NNfunction_sg_sR::synapse0x3a00090() {
   return (neuron0x39fb810()*-0.186955);
}

double NNfunction_sg_sR::synapse0x3a001e0() {
   return (neuron0x39fbb50()*-0.441314);
}

double NNfunction_sg_sR::synapse0x39ffb20() {
   return (neuron0x39fc0b0()*-0.203908);
}

double NNfunction_sg_sR::synapse0x39ffb60() {
   return (neuron0x39fc2d0()*0.51403);
}

double NNfunction_sg_sR::synapse0x3a01330() {
   return (neuron0x39fc610()*0.222163);
}

double NNfunction_sg_sR::synapse0x3a01370() {
   return (neuron0x39fc950()*0.147874);
}

double NNfunction_sg_sR::synapse0x3a013b0() {
   return (neuron0x39fcc90()*0.0455459);
}

double NNfunction_sg_sR::synapse0x3a013f0() {
   return (neuron0x39fcfd0()*-0.200642);
}

double NNfunction_sg_sR::synapse0x3a01430() {
   return (neuron0x39fd310()*-0.0755346);
}

double NNfunction_sg_sR::synapse0x3a017b0() {
   return (neuron0x39f87e0()*-0.0251006);
}

double NNfunction_sg_sR::synapse0x3a017f0() {
   return (neuron0x39f8a90()*-0.024454);
}

double NNfunction_sg_sR::synapse0x3a01830() {
   return (neuron0x39f8dd0()*0.0144925);
}

double NNfunction_sg_sR::synapse0x3a01870() {
   return (neuron0x39f9110()*-2.16238);
}

double NNfunction_sg_sR::synapse0x3a018b0() {
   return (neuron0x39f9450()*-0.0340879);
}

double NNfunction_sg_sR::synapse0x3a018f0() {
   return (neuron0x39f9790()*-0.0199967);
}

double NNfunction_sg_sR::synapse0x3a01930() {
   return (neuron0x39f9ad0()*-0.0353511);
}

double NNfunction_sg_sR::synapse0x3a01970() {
   return (neuron0x39f9e10()*-0.0240278);
}

double NNfunction_sg_sR::synapse0x3a019b0() {
   return (neuron0x39fa150()*0.000684369);
}

double NNfunction_sg_sR::synapse0x37c2be0() {
   return (neuron0x39fa490()*0.00507662);
}

double NNfunction_sg_sR::synapse0x37c2c20() {
   return (neuron0x39fa7d0()*-0.00831108);
}

double NNfunction_sg_sR::synapse0x37c2c60() {
   return (neuron0x39fab10()*-0.189218);
}

double NNfunction_sg_sR::synapse0x37c2ca0() {
   return (neuron0x39fae50()*-0.206123);
}

double NNfunction_sg_sR::synapse0x37c2ce0() {
   return (neuron0x39fb190()*0.0501553);
}

double NNfunction_sg_sR::synapse0x37c2d20() {
   return (neuron0x39fb4d0()*-0.144933);
}

double NNfunction_sg_sR::synapse0x37c2d60() {
   return (neuron0x39fb810()*-0.122061);
}

double NNfunction_sg_sR::synapse0x3a01600() {
   return (neuron0x39fbb50()*0.0158199);
}

double NNfunction_sg_sR::synapse0x3a01640() {
   return (neuron0x39fc0b0()*-0.118039);
}

double NNfunction_sg_sR::synapse0x37c2eb0() {
   return (neuron0x39fc2d0()*0.450053);
}

double NNfunction_sg_sR::synapse0x37c2ef0() {
   return (neuron0x39fc610()*-0.0195913);
}

double NNfunction_sg_sR::synapse0x37c2f30() {
   return (neuron0x39fc950()*-0.0337242);
}

double NNfunction_sg_sR::synapse0x37c2f70() {
   return (neuron0x39fcc90()*-0.0142204);
}

double NNfunction_sg_sR::synapse0x37c2fb0() {
   return (neuron0x39fcfd0()*-0.0140824);
}

double NNfunction_sg_sR::synapse0x3a02200() {
   return (neuron0x39fd310()*-0.00170674);
}

double NNfunction_sg_sR::synapse0x3a02580() {
   return (neuron0x39f87e0()*0.154844);
}

double NNfunction_sg_sR::synapse0x3a025c0() {
   return (neuron0x39f8a90()*0.0101856);
}

double NNfunction_sg_sR::synapse0x3a02600() {
   return (neuron0x39f8dd0()*-0.077379);
}

double NNfunction_sg_sR::synapse0x3a02640() {
   return (neuron0x39f9110()*0.883974);
}

double NNfunction_sg_sR::synapse0x3a02680() {
   return (neuron0x39f9450()*0.0350354);
}

double NNfunction_sg_sR::synapse0x3a026c0() {
   return (neuron0x39f9790()*-0.0233854);
}

double NNfunction_sg_sR::synapse0x3a02700() {
   return (neuron0x39f9ad0()*0.289259);
}

double NNfunction_sg_sR::synapse0x3a02740() {
   return (neuron0x39f9e10()*0.173166);
}

double NNfunction_sg_sR::synapse0x3a02780() {
   return (neuron0x39fa150()*-0.123159);
}

double NNfunction_sg_sR::synapse0x3a027c0() {
   return (neuron0x39fa490()*-0.094631);
}

double NNfunction_sg_sR::synapse0x3a02800() {
   return (neuron0x39fa7d0()*0.00346524);
}

double NNfunction_sg_sR::synapse0x3a02840() {
   return (neuron0x39fab10()*0.32314);
}

double NNfunction_sg_sR::synapse0x3a02880() {
   return (neuron0x39fae50()*0.20402);
}

double NNfunction_sg_sR::synapse0x3a028c0() {
   return (neuron0x39fb190()*-0.0702227);
}

double NNfunction_sg_sR::synapse0x3a02900() {
   return (neuron0x39fb4d0()*0.350255);
}

double NNfunction_sg_sR::synapse0x3a02940() {
   return (neuron0x39fb810()*0.443088);
}

double NNfunction_sg_sR::synapse0x3a023d0() {
   return (neuron0x39fbb50()*0.0399827);
}

double NNfunction_sg_sR::synapse0x3a02410() {
   return (neuron0x39fc0b0()*0.0823617);
}

double NNfunction_sg_sR::synapse0x3a02a90() {
   return (neuron0x39fc2d0()*0.919374);
}

double NNfunction_sg_sR::synapse0x3a02ad0() {
   return (neuron0x39fc610()*0.0769204);
}

double NNfunction_sg_sR::synapse0x3a02b10() {
   return (neuron0x39fc950()*-0.0266129);
}

double NNfunction_sg_sR::synapse0x3a02b50() {
   return (neuron0x39fcc90()*-0.0381791);
}

double NNfunction_sg_sR::synapse0x3a02b90() {
   return (neuron0x39fcfd0()*-0.0129333);
}

double NNfunction_sg_sR::synapse0x3a02bd0() {
   return (neuron0x39fd310()*-0.0555158);
}

double NNfunction_sg_sR::synapse0x3a02f50() {
   return (neuron0x39f87e0()*0.0639331);
}

double NNfunction_sg_sR::synapse0x3a02f90() {
   return (neuron0x39f8a90()*-0.146588);
}

double NNfunction_sg_sR::synapse0x3a02fd0() {
   return (neuron0x39f8dd0()*0.0403168);
}

double NNfunction_sg_sR::synapse0x3a03010() {
   return (neuron0x39f9110()*-0.220014);
}

double NNfunction_sg_sR::synapse0x3a03050() {
   return (neuron0x39f9450()*0.260137);
}

double NNfunction_sg_sR::synapse0x3a03090() {
   return (neuron0x39f9790()*-0.312968);
}

double NNfunction_sg_sR::synapse0x3a030d0() {
   return (neuron0x39f9ad0()*-0.122164);
}

double NNfunction_sg_sR::synapse0x3a03110() {
   return (neuron0x39f9e10()*0.0797288);
}

double NNfunction_sg_sR::synapse0x3a03150() {
   return (neuron0x39fa150()*0.0921252);
}

double NNfunction_sg_sR::synapse0x3a03190() {
   return (neuron0x39fa490()*0.0688926);
}

double NNfunction_sg_sR::synapse0x3a031d0() {
   return (neuron0x39fa7d0()*0.0412017);
}

double NNfunction_sg_sR::synapse0x3a03210() {
   return (neuron0x39fab10()*0.199892);
}

double NNfunction_sg_sR::synapse0x3a03250() {
   return (neuron0x39fae50()*0.272615);
}

double NNfunction_sg_sR::synapse0x3a03290() {
   return (neuron0x39fb190()*-0.045574);
}

double NNfunction_sg_sR::synapse0x3a032d0() {
   return (neuron0x39fb4d0()*-0.159434);
}

double NNfunction_sg_sR::synapse0x3a03310() {
   return (neuron0x39fb810()*0.29284);
}

double NNfunction_sg_sR::synapse0x3a02da0() {
   return (neuron0x39fbb50()*-0.404131);
}

double NNfunction_sg_sR::synapse0x3a02de0() {
   return (neuron0x39fc0b0()*0.233885);
}

double NNfunction_sg_sR::synapse0x3a03460() {
   return (neuron0x39fc2d0()*-1.32458);
}

double NNfunction_sg_sR::synapse0x3a034a0() {
   return (neuron0x39fc610()*0.0859806);
}

double NNfunction_sg_sR::synapse0x3a034e0() {
   return (neuron0x39fc950()*0.0130451);
}

double NNfunction_sg_sR::synapse0x3a03520() {
   return (neuron0x39fcc90()*-0.0699492);
}

double NNfunction_sg_sR::synapse0x3a03560() {
   return (neuron0x39fcfd0()*0.118085);
}

double NNfunction_sg_sR::synapse0x3a035a0() {
   return (neuron0x39fd310()*0.0253904);
}

double NNfunction_sg_sR::synapse0x39fbfa0() {
   return (neuron0x39f87e0()*0.40338);
}

double NNfunction_sg_sR::synapse0x39fbfe0() {
   return (neuron0x39f8a90()*-0.194499);
}

double NNfunction_sg_sR::synapse0x39fc020() {
   return (neuron0x39f8dd0()*-0.414436);
}

double NNfunction_sg_sR::synapse0x39fc060() {
   return (neuron0x39f9110()*0.0517015);
}

double NNfunction_sg_sR::synapse0x3a03b30() {
   return (neuron0x39f9450()*-0.0373356);
}

double NNfunction_sg_sR::synapse0x3a03b70() {
   return (neuron0x39f9790()*-0.0912975);
}

double NNfunction_sg_sR::synapse0x3a03bb0() {
   return (neuron0x39f9ad0()*0.318679);
}

double NNfunction_sg_sR::synapse0x3a03bf0() {
   return (neuron0x39f9e10()*-0.0137623);
}

double NNfunction_sg_sR::synapse0x3a03c30() {
   return (neuron0x39fa150()*-0.0471685);
}

double NNfunction_sg_sR::synapse0x3a03c70() {
   return (neuron0x39fa490()*-0.290459);
}

double NNfunction_sg_sR::synapse0x3a03cb0() {
   return (neuron0x39fa7d0()*0.696908);
}

double NNfunction_sg_sR::synapse0x3a03cf0() {
   return (neuron0x39fab10()*-0.211667);
}

double NNfunction_sg_sR::synapse0x3a03d30() {
   return (neuron0x39fae50()*-0.379224);
}

double NNfunction_sg_sR::synapse0x3a03d70() {
   return (neuron0x39fb190()*0.0834042);
}

double NNfunction_sg_sR::synapse0x3a03db0() {
   return (neuron0x39fb4d0()*0.0779094);
}

double NNfunction_sg_sR::synapse0x3a03df0() {
   return (neuron0x39fb810()*0.0426255);
}

double NNfunction_sg_sR::synapse0x3a03770() {
   return (neuron0x39fbb50()*0.015419);
}

double NNfunction_sg_sR::synapse0x3a037b0() {
   return (neuron0x39fc0b0()*-0.417865);
}

double NNfunction_sg_sR::synapse0x3a03f40() {
   return (neuron0x39fc2d0()*0.106802);
}

double NNfunction_sg_sR::synapse0x3a03f80() {
   return (neuron0x39fc610()*0.0541565);
}

double NNfunction_sg_sR::synapse0x3a03fc0() {
   return (neuron0x39fc950()*0.060546);
}

double NNfunction_sg_sR::synapse0x3a04000() {
   return (neuron0x39fcc90()*0.225752);
}

double NNfunction_sg_sR::synapse0x3a04040() {
   return (neuron0x39fcfd0()*-0.0356154);
}

double NNfunction_sg_sR::synapse0x3a04080() {
   return (neuron0x39fd310()*-0.0911289);
}

double NNfunction_sg_sR::synapse0x3a04400() {
   return (neuron0x39f87e0()*-0.20488);
}

double NNfunction_sg_sR::synapse0x3a04440() {
   return (neuron0x39f8a90()*-0.415001);
}

double NNfunction_sg_sR::synapse0x3a04480() {
   return (neuron0x39f8dd0()*0.0653469);
}

double NNfunction_sg_sR::synapse0x3a044c0() {
   return (neuron0x39f9110()*-0.515877);
}

double NNfunction_sg_sR::synapse0x3a04500() {
   return (neuron0x39f9450()*-0.182655);
}

double NNfunction_sg_sR::synapse0x3a04540() {
   return (neuron0x39f9790()*-0.0119004);
}

double NNfunction_sg_sR::synapse0x3a04580() {
   return (neuron0x39f9ad0()*0.0113592);
}

double NNfunction_sg_sR::synapse0x3a045c0() {
   return (neuron0x39f9e10()*-0.0532924);
}

double NNfunction_sg_sR::synapse0x3a04600() {
   return (neuron0x39fa150()*-0.348452);
}

double NNfunction_sg_sR::synapse0x3a04640() {
   return (neuron0x39fa490()*-0.161145);
}

double NNfunction_sg_sR::synapse0x3a04680() {
   return (neuron0x39fa7d0()*0.113514);
}

double NNfunction_sg_sR::synapse0x3a046c0() {
   return (neuron0x39fab10()*-0.0128217);
}

double NNfunction_sg_sR::synapse0x3a04700() {
   return (neuron0x39fae50()*-0.0317143);
}

double NNfunction_sg_sR::synapse0x3a04740() {
   return (neuron0x39fb190()*-0.000296063);
}

double NNfunction_sg_sR::synapse0x3a04780() {
   return (neuron0x39fb4d0()*-0.103987);
}

double NNfunction_sg_sR::synapse0x3a047c0() {
   return (neuron0x39fb810()*-0.39182);
}

double NNfunction_sg_sR::synapse0x3a04250() {
   return (neuron0x39fbb50()*-0.0331363);
}

double NNfunction_sg_sR::synapse0x3a04290() {
   return (neuron0x39fc0b0()*0.0891482);
}

double NNfunction_sg_sR::synapse0x3a04910() {
   return (neuron0x39fc2d0()*-0.521062);
}

double NNfunction_sg_sR::synapse0x3a04950() {
   return (neuron0x39fc610()*-0.248549);
}

double NNfunction_sg_sR::synapse0x3a04990() {
   return (neuron0x39fc950()*-0.166671);
}

double NNfunction_sg_sR::synapse0x3a049d0() {
   return (neuron0x39fcc90()*0.126325);
}

double NNfunction_sg_sR::synapse0x3a04a10() {
   return (neuron0x39fcfd0()*-0.00667627);
}

double NNfunction_sg_sR::synapse0x3a04a50() {
   return (neuron0x39fd310()*0.0184125);
}

double NNfunction_sg_sR::synapse0x3a04dd0() {
   return (neuron0x39f87e0()*0.0386469);
}

double NNfunction_sg_sR::synapse0x3a04e10() {
   return (neuron0x39f8a90()*0.0247289);
}

double NNfunction_sg_sR::synapse0x3a04e50() {
   return (neuron0x39f8dd0()*0.0348049);
}

double NNfunction_sg_sR::synapse0x3a04e90() {
   return (neuron0x39f9110()*2.09895);
}

double NNfunction_sg_sR::synapse0x3a04ed0() {
   return (neuron0x39f9450()*-0.00180679);
}

double NNfunction_sg_sR::synapse0x3a04f10() {
   return (neuron0x39f9790()*0.01134);
}

double NNfunction_sg_sR::synapse0x3a04f50() {
   return (neuron0x39f9ad0()*-0.0120106);
}

double NNfunction_sg_sR::synapse0x3a04f90() {
   return (neuron0x39f9e10()*-0.0190532);
}

double NNfunction_sg_sR::synapse0x3a04fd0() {
   return (neuron0x39fa150()*0.0295765);
}

double NNfunction_sg_sR::synapse0x3a05010() {
   return (neuron0x39fa490()*-0.00126314);
}

double NNfunction_sg_sR::synapse0x3a05050() {
   return (neuron0x39fa7d0()*0.0150424);
}

double NNfunction_sg_sR::synapse0x3a05090() {
   return (neuron0x39fab10()*0.0915202);
}

double NNfunction_sg_sR::synapse0x3a050d0() {
   return (neuron0x39fae50()*0.0718075);
}

double NNfunction_sg_sR::synapse0x3a05110() {
   return (neuron0x39fb190()*0.0127304);
}

double NNfunction_sg_sR::synapse0x3a05150() {
   return (neuron0x39fb4d0()*0.102169);
}

double NNfunction_sg_sR::synapse0x3a05190() {
   return (neuron0x39fb810()*0.0191944);
}

double NNfunction_sg_sR::synapse0x3a04c20() {
   return (neuron0x39fbb50()*0.0182922);
}

double NNfunction_sg_sR::synapse0x3a04c60() {
   return (neuron0x39fc0b0()*0.0742526);
}

double NNfunction_sg_sR::synapse0x3a019f0() {
   return (neuron0x39fc2d0()*0.00930261);
}

double NNfunction_sg_sR::synapse0x3a01a30() {
   return (neuron0x39fc610()*0.0490217);
}

double NNfunction_sg_sR::synapse0x3a01a70() {
   return (neuron0x39fc950()*0.0173441);
}

double NNfunction_sg_sR::synapse0x3a01ab0() {
   return (neuron0x39fcc90()*0.00602023);
}

double NNfunction_sg_sR::synapse0x3a01af0() {
   return (neuron0x39fcfd0()*-0.0126587);
}

double NNfunction_sg_sR::synapse0x3a01b30() {
   return (neuron0x39fd310()*0.000637462);
}

double NNfunction_sg_sR::synapse0x3a01eb0() {
   return (neuron0x39f87e0()*-0.153741);
}

double NNfunction_sg_sR::synapse0x3a01ef0() {
   return (neuron0x39f8a90()*-0.511065);
}

double NNfunction_sg_sR::synapse0x3a01f30() {
   return (neuron0x39f8dd0()*0.00885097);
}

double NNfunction_sg_sR::synapse0x3a01f70() {
   return (neuron0x39f9110()*-0.290844);
}

double NNfunction_sg_sR::synapse0x3a01fb0() {
   return (neuron0x39f9450()*0.0204032);
}

double NNfunction_sg_sR::synapse0x3a01ff0() {
   return (neuron0x39f9790()*0.0513953);
}

double NNfunction_sg_sR::synapse0x3a02030() {
   return (neuron0x39f9ad0()*0.0968882);
}

double NNfunction_sg_sR::synapse0x3a02070() {
   return (neuron0x39f9e10()*0.227066);
}

double NNfunction_sg_sR::synapse0x3a020b0() {
   return (neuron0x39fa150()*-0.0602743);
}

double NNfunction_sg_sR::synapse0x3a020f0() {
   return (neuron0x39fa490()*-0.145722);
}

double NNfunction_sg_sR::synapse0x3a02130() {
   return (neuron0x39fa7d0()*0.0619802);
}

double NNfunction_sg_sR::synapse0x3a02170() {
   return (neuron0x39fab10()*0.202314);
}

double NNfunction_sg_sR::synapse0x3a021b0() {
   return (neuron0x39fae50()*0.0947784);
}

double NNfunction_sg_sR::synapse0x3a062f0() {
   return (neuron0x39fb190()*-0.0228952);
}

double NNfunction_sg_sR::synapse0x3a06330() {
   return (neuron0x39fb4d0()*0.473536);
}

double NNfunction_sg_sR::synapse0x3a06370() {
   return (neuron0x39fb810()*0.44334);
}

double NNfunction_sg_sR::synapse0x3a01d00() {
   return (neuron0x39fbb50()*0.0443596);
}

double NNfunction_sg_sR::synapse0x3a01d40() {
   return (neuron0x39fc0b0()*0.0193888);
}

double NNfunction_sg_sR::synapse0x3a064c0() {
   return (neuron0x39fc2d0()*-0.963057);
}

double NNfunction_sg_sR::synapse0x3a06500() {
   return (neuron0x39fc610()*0.0282933);
}

double NNfunction_sg_sR::synapse0x3a06540() {
   return (neuron0x39fc950()*0.0541559);
}

double NNfunction_sg_sR::synapse0x3a06580() {
   return (neuron0x39fcc90()*0.0066563);
}

double NNfunction_sg_sR::synapse0x3a065c0() {
   return (neuron0x39fcfd0()*0.0132383);
}

double NNfunction_sg_sR::synapse0x3a06600() {
   return (neuron0x39fd310()*0.117309);
}

double NNfunction_sg_sR::synapse0x3a06980() {
   return (neuron0x39f87e0()*0.311528);
}

double NNfunction_sg_sR::synapse0x3a069c0() {
   return (neuron0x39f8a90()*-0.0895944);
}

double NNfunction_sg_sR::synapse0x3a06a00() {
   return (neuron0x39f8dd0()*0.367587);
}

double NNfunction_sg_sR::synapse0x3a06a40() {
   return (neuron0x39f9110()*0.193575);
}

double NNfunction_sg_sR::synapse0x3a06a80() {
   return (neuron0x39f9450()*0.14371);
}

double NNfunction_sg_sR::synapse0x3a06ac0() {
   return (neuron0x39f9790()*-0.413752);
}

double NNfunction_sg_sR::synapse0x3a06b00() {
   return (neuron0x39f9ad0()*-0.319746);
}

double NNfunction_sg_sR::synapse0x3a06b40() {
   return (neuron0x39f9e10()*0.186897);
}

double NNfunction_sg_sR::synapse0x3a06b80() {
   return (neuron0x39fa150()*0.0521434);
}

double NNfunction_sg_sR::synapse0x3a06bc0() {
   return (neuron0x39fa490()*0.128696);
}

double NNfunction_sg_sR::synapse0x3a06c00() {
   return (neuron0x39fa7d0()*-0.0739273);
}

double NNfunction_sg_sR::synapse0x3a06c40() {
   return (neuron0x39fab10()*0.244433);
}

double NNfunction_sg_sR::synapse0x3a06c80() {
   return (neuron0x39fae50()*0.155679);
}

double NNfunction_sg_sR::synapse0x3a06cc0() {
   return (neuron0x39fb190()*0.548398);
}

double NNfunction_sg_sR::synapse0x3a06d00() {
   return (neuron0x39fb4d0()*0.26758);
}

double NNfunction_sg_sR::synapse0x3a06d40() {
   return (neuron0x39fb810()*-0.170825);
}

double NNfunction_sg_sR::synapse0x3a067d0() {
   return (neuron0x39fbb50()*-0.455548);
}

double NNfunction_sg_sR::synapse0x3a06810() {
   return (neuron0x39fc0b0()*-0.0785651);
}

double NNfunction_sg_sR::synapse0x3a06e90() {
   return (neuron0x39fc2d0()*-0.228352);
}

double NNfunction_sg_sR::synapse0x3a06ed0() {
   return (neuron0x39fc610()*0.359897);
}

double NNfunction_sg_sR::synapse0x3a06f10() {
   return (neuron0x39fc950()*0.101228);
}

double NNfunction_sg_sR::synapse0x3a06f50() {
   return (neuron0x39fcc90()*-0.074347);
}

double NNfunction_sg_sR::synapse0x3a06f90() {
   return (neuron0x39fcfd0()*-0.256244);
}

double NNfunction_sg_sR::synapse0x3a06fd0() {
   return (neuron0x39fd310()*0.414343);
}

double NNfunction_sg_sR::synapse0x3a07350() {
   return (neuron0x39f87e0()*0.0666695);
}

double NNfunction_sg_sR::synapse0x3a07390() {
   return (neuron0x39f8a90()*0.0181185);
}

double NNfunction_sg_sR::synapse0x3a073d0() {
   return (neuron0x39f8dd0()*0.0910981);
}

double NNfunction_sg_sR::synapse0x3a07410() {
   return (neuron0x39f9110()*1.08703);
}

double NNfunction_sg_sR::synapse0x3a07450() {
   return (neuron0x39f9450()*0.143366);
}

double NNfunction_sg_sR::synapse0x3a07490() {
   return (neuron0x39f9790()*-0.0557392);
}

double NNfunction_sg_sR::synapse0x3a074d0() {
   return (neuron0x39f9ad0()*0.107066);
}

double NNfunction_sg_sR::synapse0x3a07510() {
   return (neuron0x39f9e10()*-0.126444);
}

double NNfunction_sg_sR::synapse0x3a07550() {
   return (neuron0x39fa150()*0.00405693);
}

double NNfunction_sg_sR::synapse0x3a07590() {
   return (neuron0x39fa490()*0.0501288);
}

double NNfunction_sg_sR::synapse0x3a075d0() {
   return (neuron0x39fa7d0()*-0.0224248);
}

double NNfunction_sg_sR::synapse0x3a07610() {
   return (neuron0x39fab10()*0.0460831);
}

double NNfunction_sg_sR::synapse0x3a07650() {
   return (neuron0x39fae50()*-0.0514558);
}

double NNfunction_sg_sR::synapse0x3a07690() {
   return (neuron0x39fb190()*0.0177216);
}

double NNfunction_sg_sR::synapse0x3a076d0() {
   return (neuron0x39fb4d0()*0.155079);
}

double NNfunction_sg_sR::synapse0x3a07710() {
   return (neuron0x39fb810()*-0.47237);
}

double NNfunction_sg_sR::synapse0x3a071a0() {
   return (neuron0x39fbb50()*-0.0050137);
}

double NNfunction_sg_sR::synapse0x3a071e0() {
   return (neuron0x39fc0b0()*0.00408427);
}

double NNfunction_sg_sR::synapse0x3a07860() {
   return (neuron0x39fc2d0()*-0.113542);
}

double NNfunction_sg_sR::synapse0x3a078a0() {
   return (neuron0x39fc610()*-0.0779101);
}

double NNfunction_sg_sR::synapse0x3a078e0() {
   return (neuron0x39fc950()*0.0154968);
}

double NNfunction_sg_sR::synapse0x3a07920() {
   return (neuron0x39fcc90()*0.0247742);
}

double NNfunction_sg_sR::synapse0x3a07960() {
   return (neuron0x39fcfd0()*0.0364795);
}

double NNfunction_sg_sR::synapse0x3a079a0() {
   return (neuron0x39fd310()*0.0576312);
}

double NNfunction_sg_sR::synapse0x3a07d20() {
   return (neuron0x39f87e0()*-0.121595);
}

double NNfunction_sg_sR::synapse0x3a07d60() {
   return (neuron0x39f8a90()*0.0524986);
}

double NNfunction_sg_sR::synapse0x3a07da0() {
   return (neuron0x39f8dd0()*-0.0433426);
}

double NNfunction_sg_sR::synapse0x3a07de0() {
   return (neuron0x39f9110()*-0.438735);
}

double NNfunction_sg_sR::synapse0x3a07e20() {
   return (neuron0x39f9450()*0.0530412);
}

double NNfunction_sg_sR::synapse0x3a07e60() {
   return (neuron0x39f9790()*-0.0671146);
}

double NNfunction_sg_sR::synapse0x3a07ea0() {
   return (neuron0x39f9ad0()*0.376244);
}

double NNfunction_sg_sR::synapse0x3a07ee0() {
   return (neuron0x39f9e10()*0.0345606);
}

double NNfunction_sg_sR::synapse0x3a07f20() {
   return (neuron0x39fa150()*0.0230777);
}

double NNfunction_sg_sR::synapse0x3a07f60() {
   return (neuron0x39fa490()*-0.0153997);
}

double NNfunction_sg_sR::synapse0x3a07fa0() {
   return (neuron0x39fa7d0()*0.0399789);
}

double NNfunction_sg_sR::synapse0x3a07fe0() {
   return (neuron0x39fab10()*-0.11941);
}

double NNfunction_sg_sR::synapse0x3a08020() {
   return (neuron0x39fae50()*0.561131);
}

double NNfunction_sg_sR::synapse0x3a08060() {
   return (neuron0x39fb190()*-0.0696222);
}

double NNfunction_sg_sR::synapse0x3a080a0() {
   return (neuron0x39fb4d0()*-0.131726);
}

double NNfunction_sg_sR::synapse0x3a080e0() {
   return (neuron0x39fb810()*-0.226864);
}

double NNfunction_sg_sR::synapse0x3a07b70() {
   return (neuron0x39fbb50()*-0.228479);
}

double NNfunction_sg_sR::synapse0x3a07bb0() {
   return (neuron0x39fc0b0()*-0.140999);
}

double NNfunction_sg_sR::synapse0x3a08230() {
   return (neuron0x39fc2d0()*-0.474793);
}

double NNfunction_sg_sR::synapse0x3a08270() {
   return (neuron0x39fc610()*0.137859);
}

double NNfunction_sg_sR::synapse0x3a082b0() {
   return (neuron0x39fc950()*-0.0844792);
}

double NNfunction_sg_sR::synapse0x3a082f0() {
   return (neuron0x39fcc90()*0.0964807);
}

double NNfunction_sg_sR::synapse0x3a08330() {
   return (neuron0x39fcfd0()*-0.00197075);
}

double NNfunction_sg_sR::synapse0x3a08370() {
   return (neuron0x39fd310()*-0.0245135);
}

double NNfunction_sg_sR::synapse0x3a086f0() {
   return (neuron0x39f87e0()*-0.00417316);
}

double NNfunction_sg_sR::synapse0x39f8970() {
   return (neuron0x39f8a90()*0.167904);
}

double NNfunction_sg_sR::synapse0x39f89b0() {
   return (neuron0x39f8dd0()*-0.0136244);
}

double NNfunction_sg_sR::synapse0x39f8cb0() {
   return (neuron0x39f9110()*0.544569);
}

double NNfunction_sg_sR::synapse0x39f8cf0() {
   return (neuron0x39f9450()*-0.255227);
}

double NNfunction_sg_sR::synapse0x39f8ff0() {
   return (neuron0x39f9790()*-0.239656);
}

double NNfunction_sg_sR::synapse0x39f9030() {
   return (neuron0x39f9ad0()*-0.168155);
}

double NNfunction_sg_sR::synapse0x39f9330() {
   return (neuron0x39f9e10()*-0.570478);
}

double NNfunction_sg_sR::synapse0x39f9370() {
   return (neuron0x39fa150()*-0.0976804);
}

double NNfunction_sg_sR::synapse0x39f9670() {
   return (neuron0x39fa490()*0.297548);
}

double NNfunction_sg_sR::synapse0x39f96b0() {
   return (neuron0x39fa7d0()*-0.00165921);
}

double NNfunction_sg_sR::synapse0x39f99b0() {
   return (neuron0x39fab10()*0.174021);
}

double NNfunction_sg_sR::synapse0x39f99f0() {
   return (neuron0x39fae50()*-0.197309);
}

double NNfunction_sg_sR::synapse0x39f9cf0() {
   return (neuron0x39fb190()*-0.23456);
}

double NNfunction_sg_sR::synapse0x39f9d30() {
   return (neuron0x39fb4d0()*0.165903);
}

double NNfunction_sg_sR::synapse0x39fa030() {
   return (neuron0x39fb810()*0.0241886);
}

double NNfunction_sg_sR::synapse0x39fa070() {
   return (neuron0x39fbb50()*-0.285167);
}

double NNfunction_sg_sR::synapse0x39fa370() {
   return (neuron0x39fc0b0()*0.189871);
}

double NNfunction_sg_sR::synapse0x39fa3b0() {
   return (neuron0x39fc2d0()*0.0723625);
}

double NNfunction_sg_sR::synapse0x39fa6b0() {
   return (neuron0x39fc610()*0.169298);
}

double NNfunction_sg_sR::synapse0x39fa6f0() {
   return (neuron0x39fc950()*0.0356205);
}

double NNfunction_sg_sR::synapse0x39fa9f0() {
   return (neuron0x39fcc90()*0.108265);
}

double NNfunction_sg_sR::synapse0x39faa30() {
   return (neuron0x39fcfd0()*-0.119165);
}

double NNfunction_sg_sR::synapse0x39fad30() {
   return (neuron0x39fd310()*-0.172908);
}

double NNfunction_sg_sR::synapse0x39fad70() {
   return (neuron0x39f87e0()*0.0501146);
}

double NNfunction_sg_sR::synapse0x39fba30() {
   return (neuron0x39f8a90()*-0.16499);
}

double NNfunction_sg_sR::synapse0x39fba70() {
   return (neuron0x39f8dd0()*-0.183579);
}

double NNfunction_sg_sR::synapse0x3a08540() {
   return (neuron0x39f9110()*-0.696374);
}

double NNfunction_sg_sR::synapse0x3a08580() {
   return (neuron0x39f9450()*-0.105227);
}

double NNfunction_sg_sR::synapse0x39fbd70() {
   return (neuron0x39f9790()*-0.0767509);
}

double NNfunction_sg_sR::synapse0x39fbdb0() {
   return (neuron0x39f9ad0()*0.306298);
}

double NNfunction_sg_sR::synapse0x287c420() {
   return (neuron0x39f9e10()*-0.252306);
}

double NNfunction_sg_sR::synapse0x287c460() {
   return (neuron0x39fa150()*0.119176);
}

double NNfunction_sg_sR::synapse0x39fc4f0() {
   return (neuron0x39fa490()*-0.162584);
}

double NNfunction_sg_sR::synapse0x39fc530() {
   return (neuron0x39fa7d0()*-0.0841822);
}

double NNfunction_sg_sR::synapse0x39fc830() {
   return (neuron0x39fab10()*-0.0230401);
}

double NNfunction_sg_sR::synapse0x39fc870() {
   return (neuron0x39fae50()*0.591691);
}

double NNfunction_sg_sR::synapse0x39fcb70() {
   return (neuron0x39fb190()*-0.0366905);
}

double NNfunction_sg_sR::synapse0x39fcbb0() {
   return (neuron0x39fb4d0()*0.724645);
}

double NNfunction_sg_sR::synapse0x39fceb0() {
   return (neuron0x39fb810()*-0.291629);
}

double NNfunction_sg_sR::synapse0x39fcef0() {
   return (neuron0x39fbb50()*-0.202643);
}

double NNfunction_sg_sR::synapse0x39fd1f0() {
   return (neuron0x39fc0b0()*0.138242);
}

double NNfunction_sg_sR::synapse0x39fd230() {
   return (neuron0x39fc2d0()*-0.213763);
}

double NNfunction_sg_sR::synapse0x39fd530() {
   return (neuron0x39fc610()*-0.112021);
}

double NNfunction_sg_sR::synapse0x39fd570() {
   return (neuron0x39fc950()*0.027783);
}

double NNfunction_sg_sR::synapse0x39fb070() {
   return (neuron0x39fcc90()*0.0974602);
}

double NNfunction_sg_sR::synapse0x39fb0b0() {
   return (neuron0x39fcfd0()*-0.340626);
}

double NNfunction_sg_sR::synapse0x3a0a460() {
   return (neuron0x39fd310()*-0.0377229);
}

double NNfunction_sg_sR::synapse0x3a0a7e0() {
   return (neuron0x39f87e0()*-0.123099);
}

double NNfunction_sg_sR::synapse0x3a0a820() {
   return (neuron0x39f8a90()*-0.462611);
}

double NNfunction_sg_sR::synapse0x3a0a860() {
   return (neuron0x39f8dd0()*0.0133594);
}

double NNfunction_sg_sR::synapse0x3a0a8a0() {
   return (neuron0x39f9110()*-0.455844);
}

double NNfunction_sg_sR::synapse0x3a0a8e0() {
   return (neuron0x39f9450()*-0.451973);
}

double NNfunction_sg_sR::synapse0x3a0a920() {
   return (neuron0x39f9790()*-0.265936);
}

double NNfunction_sg_sR::synapse0x3a0a960() {
   return (neuron0x39f9ad0()*-0.0111234);
}

double NNfunction_sg_sR::synapse0x3a0a9a0() {
   return (neuron0x39f9e10()*0.338104);
}

double NNfunction_sg_sR::synapse0x3a0a9e0() {
   return (neuron0x39fa150()*0.0856);
}

double NNfunction_sg_sR::synapse0x3a0aa20() {
   return (neuron0x39fa490()*0.0819934);
}

double NNfunction_sg_sR::synapse0x3a0aa60() {
   return (neuron0x39fa7d0()*0.249869);
}

double NNfunction_sg_sR::synapse0x3a0aaa0() {
   return (neuron0x39fab10()*0.353426);
}

double NNfunction_sg_sR::synapse0x3a0aae0() {
   return (neuron0x39fae50()*0.337163);
}

double NNfunction_sg_sR::synapse0x3a0ab20() {
   return (neuron0x39fb190()*0.497239);
}

double NNfunction_sg_sR::synapse0x3a0ab60() {
   return (neuron0x39fb4d0()*0.170761);
}

double NNfunction_sg_sR::synapse0x3a0aba0() {
   return (neuron0x39fb810()*0.315246);
}

double NNfunction_sg_sR::synapse0x3a0a630() {
   return (neuron0x39fbb50()*-0.158835);
}

double NNfunction_sg_sR::synapse0x3a0a670() {
   return (neuron0x39fc0b0()*-0.235027);
}

double NNfunction_sg_sR::synapse0x3a0acf0() {
   return (neuron0x39fc2d0()*-0.0501977);
}

double NNfunction_sg_sR::synapse0x3a0ad30() {
   return (neuron0x39fc610()*0.128861);
}

double NNfunction_sg_sR::synapse0x3a0ad70() {
   return (neuron0x39fc950()*0.143222);
}

double NNfunction_sg_sR::synapse0x3a0adb0() {
   return (neuron0x39fcc90()*0.00357523);
}

double NNfunction_sg_sR::synapse0x3a0adf0() {
   return (neuron0x39fcfd0()*0.21811);
}

double NNfunction_sg_sR::synapse0x3a0ae30() {
   return (neuron0x39fd310()*-0.277322);
}

double NNfunction_sg_sR::synapse0x3a0b1b0() {
   return (neuron0x39f87e0()*-0.180233);
}

double NNfunction_sg_sR::synapse0x3a0b1f0() {
   return (neuron0x39f8a90()*-0.0500139);
}

double NNfunction_sg_sR::synapse0x3a0b230() {
   return (neuron0x39f8dd0()*-0.169209);
}

double NNfunction_sg_sR::synapse0x3a0b270() {
   return (neuron0x39f9110()*0.304145);
}

double NNfunction_sg_sR::synapse0x3a0b2b0() {
   return (neuron0x39f9450()*-0.0180481);
}

double NNfunction_sg_sR::synapse0x3a0b2f0() {
   return (neuron0x39f9790()*0.235111);
}

double NNfunction_sg_sR::synapse0x3a0b330() {
   return (neuron0x39f9ad0()*0.193513);
}

double NNfunction_sg_sR::synapse0x3a0b370() {
   return (neuron0x39f9e10()*0.0293268);
}

double NNfunction_sg_sR::synapse0x3a0b3b0() {
   return (neuron0x39fa150()*0.0284922);
}

double NNfunction_sg_sR::synapse0x3a0b3f0() {
   return (neuron0x39fa490()*-0.0906907);
}

double NNfunction_sg_sR::synapse0x3a0b430() {
   return (neuron0x39fa7d0()*-0.0726092);
}

double NNfunction_sg_sR::synapse0x3a0b470() {
   return (neuron0x39fab10()*-0.201934);
}

double NNfunction_sg_sR::synapse0x3a0b4b0() {
   return (neuron0x39fae50()*-0.251079);
}

double NNfunction_sg_sR::synapse0x3a0b4f0() {
   return (neuron0x39fb190()*-0.0374593);
}

double NNfunction_sg_sR::synapse0x3a0b530() {
   return (neuron0x39fb4d0()*0.0695851);
}

double NNfunction_sg_sR::synapse0x3a0b570() {
   return (neuron0x39fb810()*0.31133);
}

double NNfunction_sg_sR::synapse0x3a0b000() {
   return (neuron0x39fbb50()*-0.444316);
}

double NNfunction_sg_sR::synapse0x3a0b040() {
   return (neuron0x39fc0b0()*-0.114482);
}

double NNfunction_sg_sR::synapse0x3a0b6c0() {
   return (neuron0x39fc2d0()*0.048294);
}

double NNfunction_sg_sR::synapse0x3a0b700() {
   return (neuron0x39fc610()*-0.186173);
}

double NNfunction_sg_sR::synapse0x3a0b740() {
   return (neuron0x39fc950()*-0.146858);
}

double NNfunction_sg_sR::synapse0x3a0b780() {
   return (neuron0x39fcc90()*0.126205);
}

double NNfunction_sg_sR::synapse0x3a0b7c0() {
   return (neuron0x39fcfd0()*-0.100325);
}

double NNfunction_sg_sR::synapse0x3a0b800() {
   return (neuron0x39fd310()*0.0809014);
}

double NNfunction_sg_sR::synapse0x3a0bb80() {
   return (neuron0x39f87e0()*0.0610729);
}

double NNfunction_sg_sR::synapse0x3a0bbc0() {
   return (neuron0x39f8a90()*0.0403236);
}

double NNfunction_sg_sR::synapse0x3a0bc00() {
   return (neuron0x39f8dd0()*-0.0347021);
}

double NNfunction_sg_sR::synapse0x3a0bc40() {
   return (neuron0x39f9110()*-0.546521);
}

double NNfunction_sg_sR::synapse0x3a0bc80() {
   return (neuron0x39f9450()*0.111286);
}

double NNfunction_sg_sR::synapse0x3a0bcc0() {
   return (neuron0x39f9790()*0.12147);
}

double NNfunction_sg_sR::synapse0x3a0bd00() {
   return (neuron0x39f9ad0()*-0.0104844);
}

double NNfunction_sg_sR::synapse0x3a0bd40() {
   return (neuron0x39f9e10()*0.0086136);
}

double NNfunction_sg_sR::synapse0x3a0bd80() {
   return (neuron0x39fa150()*-0.0222283);
}

double NNfunction_sg_sR::synapse0x3a0bdc0() {
   return (neuron0x39fa490()*-0.056598);
}

double NNfunction_sg_sR::synapse0x3a0be00() {
   return (neuron0x39fa7d0()*-0.0244851);
}

double NNfunction_sg_sR::synapse0x3a0be40() {
   return (neuron0x39fab10()*0.0224125);
}

double NNfunction_sg_sR::synapse0x3a0be80() {
   return (neuron0x39fae50()*0.0803995);
}

double NNfunction_sg_sR::synapse0x3a0bec0() {
   return (neuron0x39fb190()*-0.0284013);
}

double NNfunction_sg_sR::synapse0x3a0bf00() {
   return (neuron0x39fb4d0()*0.0989962);
}

double NNfunction_sg_sR::synapse0x3a0bf40() {
   return (neuron0x39fb810()*0.0789456);
}

double NNfunction_sg_sR::synapse0x3a0b9d0() {
   return (neuron0x39fbb50()*-0.0981555);
}

double NNfunction_sg_sR::synapse0x3a0ba10() {
   return (neuron0x39fc0b0()*0.0613834);
}

double NNfunction_sg_sR::synapse0x3a0c090() {
   return (neuron0x39fc2d0()*-2.51927);
}

double NNfunction_sg_sR::synapse0x3a0c0d0() {
   return (neuron0x39fc610()*-0.00451776);
}

double NNfunction_sg_sR::synapse0x3a0c110() {
   return (neuron0x39fc950()*0.0027012);
}

double NNfunction_sg_sR::synapse0x3a0c150() {
   return (neuron0x39fcc90()*0.0526405);
}

double NNfunction_sg_sR::synapse0x3a0c190() {
   return (neuron0x39fcfd0()*-0.0402733);
}

double NNfunction_sg_sR::synapse0x3a0c1d0() {
   return (neuron0x39fd310()*-0.00518279);
}

double NNfunction_sg_sR::synapse0x3a0c550() {
   return (neuron0x39f87e0()*-0.0588322);
}

double NNfunction_sg_sR::synapse0x3a0c590() {
   return (neuron0x39f8a90()*-0.0407361);
}

double NNfunction_sg_sR::synapse0x3a0c5d0() {
   return (neuron0x39f8dd0()*0.0340498);
}

double NNfunction_sg_sR::synapse0x3a0c610() {
   return (neuron0x39f9110()*0.473454);
}

double NNfunction_sg_sR::synapse0x3a0c650() {
   return (neuron0x39f9450()*0.0218365);
}

double NNfunction_sg_sR::synapse0x3a0c690() {
   return (neuron0x39f9790()*0.0292693);
}

double NNfunction_sg_sR::synapse0x3a0c6d0() {
   return (neuron0x39f9ad0()*0.158905);
}

double NNfunction_sg_sR::synapse0x3a0c710() {
   return (neuron0x39f9e10()*-0.0593814);
}

double NNfunction_sg_sR::synapse0x3a0c750() {
   return (neuron0x39fa150()*-0.090379);
}

double NNfunction_sg_sR::synapse0x3a0c790() {
   return (neuron0x39fa490()*0.166606);
}

double NNfunction_sg_sR::synapse0x3a0c7d0() {
   return (neuron0x39fa7d0()*-0.197477);
}

double NNfunction_sg_sR::synapse0x3a0c810() {
   return (neuron0x39fab10()*0.0685196);
}

double NNfunction_sg_sR::synapse0x3a0c850() {
   return (neuron0x39fae50()*0.236065);
}

double NNfunction_sg_sR::synapse0x3a0c890() {
   return (neuron0x39fb190()*0.297411);
}

double NNfunction_sg_sR::synapse0x3a0c8d0() {
   return (neuron0x39fb4d0()*0.616478);
}

double NNfunction_sg_sR::synapse0x3a0c910() {
   return (neuron0x39fb810()*-0.0261517);
}

double NNfunction_sg_sR::synapse0x3a0c3a0() {
   return (neuron0x39fbb50()*0.0133986);
}

double NNfunction_sg_sR::synapse0x3a0c3e0() {
   return (neuron0x39fc0b0()*-0.102248);
}

double NNfunction_sg_sR::synapse0x3a0ca60() {
   return (neuron0x39fc2d0()*-0.24515);
}

double NNfunction_sg_sR::synapse0x3a0caa0() {
   return (neuron0x39fc610()*-0.142269);
}

double NNfunction_sg_sR::synapse0x3a0cae0() {
   return (neuron0x39fc950()*0.0095384);
}

double NNfunction_sg_sR::synapse0x3a0cb20() {
   return (neuron0x39fcc90()*-0.127716);
}

double NNfunction_sg_sR::synapse0x3a0cb60() {
   return (neuron0x39fcfd0()*0.0284782);
}

double NNfunction_sg_sR::synapse0x3a0cba0() {
   return (neuron0x39fd310()*0.0969385);
}

double NNfunction_sg_sR::synapse0x3a0cf20() {
   return (neuron0x39f87e0()*-0.0334795);
}

double NNfunction_sg_sR::synapse0x3a0cf60() {
   return (neuron0x39f8a90()*-0.351354);
}

double NNfunction_sg_sR::synapse0x3a0cfa0() {
   return (neuron0x39f8dd0()*-0.0550862);
}

double NNfunction_sg_sR::synapse0x3a0cfe0() {
   return (neuron0x39f9110()*0.852647);
}

double NNfunction_sg_sR::synapse0x3a0d020() {
   return (neuron0x39f9450()*-0.11028);
}

double NNfunction_sg_sR::synapse0x3a0d060() {
   return (neuron0x39f9790()*0.0451245);
}

double NNfunction_sg_sR::synapse0x3a0d0a0() {
   return (neuron0x39f9ad0()*-0.0229959);
}

double NNfunction_sg_sR::synapse0x3a0d0e0() {
   return (neuron0x39f9e10()*0.00617568);
}

double NNfunction_sg_sR::synapse0x3a0d120() {
   return (neuron0x39fa150()*-0.120336);
}

double NNfunction_sg_sR::synapse0x3a052e0() {
   return (neuron0x39fa490()*-0.100866);
}

double NNfunction_sg_sR::synapse0x3a05320() {
   return (neuron0x39fa7d0()*-0.027097);
}

double NNfunction_sg_sR::synapse0x3a05360() {
   return (neuron0x39fab10()*0.516886);
}

double NNfunction_sg_sR::synapse0x3a053a0() {
   return (neuron0x39fae50()*0.447866);
}

double NNfunction_sg_sR::synapse0x3a053e0() {
   return (neuron0x39fb190()*-0.0562607);
}

double NNfunction_sg_sR::synapse0x3a05420() {
   return (neuron0x39fb4d0()*-0.0781772);
}

double NNfunction_sg_sR::synapse0x3a05460() {
   return (neuron0x39fb810()*0.303234);
}

double NNfunction_sg_sR::synapse0x3a0cd70() {
   return (neuron0x39fbb50()*-0.103623);
}

double NNfunction_sg_sR::synapse0x3a0cdb0() {
   return (neuron0x39fc0b0()*0.275957);
}

double NNfunction_sg_sR::synapse0x3a055b0() {
   return (neuron0x39fc2d0()*-0.320151);
}

double NNfunction_sg_sR::synapse0x3a055f0() {
   return (neuron0x39fc610()*0.0396156);
}

double NNfunction_sg_sR::synapse0x3a05630() {
   return (neuron0x39fc950()*-0.0390031);
}

double NNfunction_sg_sR::synapse0x3a05670() {
   return (neuron0x39fcc90()*-0.107317);
}

double NNfunction_sg_sR::synapse0x3a056b0() {
   return (neuron0x39fcfd0()*-0.0709571);
}

double NNfunction_sg_sR::synapse0x3a056f0() {
   return (neuron0x39fd310()*0.0232048);
}

double NNfunction_sg_sR::synapse0x3a05a70() {
   return (neuron0x39f87e0()*-0.0265385);
}

double NNfunction_sg_sR::synapse0x3a05ab0() {
   return (neuron0x39f8a90()*-0.019486);
}

double NNfunction_sg_sR::synapse0x3a05af0() {
   return (neuron0x39f8dd0()*0.00836381);
}

double NNfunction_sg_sR::synapse0x3a05b30() {
   return (neuron0x39f9110()*-0.151027);
}

double NNfunction_sg_sR::synapse0x3a05b70() {
   return (neuron0x39f9450()*-0.0463319);
}

double NNfunction_sg_sR::synapse0x3a05bb0() {
   return (neuron0x39f9790()*-0.0734183);
}

double NNfunction_sg_sR::synapse0x3a05bf0() {
   return (neuron0x39f9ad0()*0.016986);
}

double NNfunction_sg_sR::synapse0x3a05c30() {
   return (neuron0x39f9e10()*0.0150038);
}

double NNfunction_sg_sR::synapse0x3a05c70() {
   return (neuron0x39fa150()*-0.00699702);
}

double NNfunction_sg_sR::synapse0x3a05cb0() {
   return (neuron0x39fa490()*0.0378369);
}

double NNfunction_sg_sR::synapse0x3a05cf0() {
   return (neuron0x39fa7d0()*0.00747068);
}

double NNfunction_sg_sR::synapse0x3a05d30() {
   return (neuron0x39fab10()*0.0155936);
}

double NNfunction_sg_sR::synapse0x3a05d70() {
   return (neuron0x39fae50()*5.90287e-06);
}

double NNfunction_sg_sR::synapse0x3a05db0() {
   return (neuron0x39fb190()*-0.0227958);
}

double NNfunction_sg_sR::synapse0x3a05df0() {
   return (neuron0x39fb4d0()*-0.00507583);
}

double NNfunction_sg_sR::synapse0x3a05e30() {
   return (neuron0x39fb810()*-0.00712863);
}

double NNfunction_sg_sR::synapse0x3a058c0() {
   return (neuron0x39fbb50()*0.027007);
}

double NNfunction_sg_sR::synapse0x3a05900() {
   return (neuron0x39fc0b0()*-0.0173121);
}

double NNfunction_sg_sR::synapse0x3a05f80() {
   return (neuron0x39fc2d0()*-3.01847);
}

double NNfunction_sg_sR::synapse0x3a05fc0() {
   return (neuron0x39fc610()*0.00379914);
}

double NNfunction_sg_sR::synapse0x3a06000() {
   return (neuron0x39fc950()*-0.00502287);
}

double NNfunction_sg_sR::synapse0x3a06040() {
   return (neuron0x39fcc90()*-0.015025);
}

double NNfunction_sg_sR::synapse0x3a06080() {
   return (neuron0x39fcfd0()*0.0262872);
}

double NNfunction_sg_sR::synapse0x3a060c0() {
   return (neuron0x39fd310()*0.00173419);
}

double NNfunction_sg_sR::synapse0x3a06290() {
   return (neuron0x39f87e0()*-0.196731);
}

double NNfunction_sg_sR::synapse0x3a0f320() {
   return (neuron0x39f8a90()*-0.136655);
}

double NNfunction_sg_sR::synapse0x3a0f360() {
   return (neuron0x39f8dd0()*-0.158048);
}

double NNfunction_sg_sR::synapse0x3a0f3a0() {
   return (neuron0x39f9110()*0.380173);
}

double NNfunction_sg_sR::synapse0x3a0f3e0() {
   return (neuron0x39f9450()*0.0453634);
}

double NNfunction_sg_sR::synapse0x3a0f420() {
   return (neuron0x39f9790()*-0.144245);
}

double NNfunction_sg_sR::synapse0x3a0f460() {
   return (neuron0x39f9ad0()*-0.0813887);
}

double NNfunction_sg_sR::synapse0x3a0f4a0() {
   return (neuron0x39f9e10()*0.0610833);
}

double NNfunction_sg_sR::synapse0x3a0f4e0() {
   return (neuron0x39fa150()*0.0424572);
}

double NNfunction_sg_sR::synapse0x3a0f520() {
   return (neuron0x39fa490()*-0.170464);
}

double NNfunction_sg_sR::synapse0x3a0f560() {
   return (neuron0x39fa7d0()*-0.0741184);
}

double NNfunction_sg_sR::synapse0x3a0f5a0() {
   return (neuron0x39fab10()*0.133952);
}

double NNfunction_sg_sR::synapse0x3a0f5e0() {
   return (neuron0x39fae50()*-0.148483);
}

double NNfunction_sg_sR::synapse0x3a0f620() {
   return (neuron0x39fb190()*-0.0651358);
}

double NNfunction_sg_sR::synapse0x3a0f660() {
   return (neuron0x39fb4d0()*0.145652);
}

double NNfunction_sg_sR::synapse0x3a0f6a0() {
   return (neuron0x39fb810()*0.142995);
}

double NNfunction_sg_sR::synapse0x3a0f170() {
   return (neuron0x39fbb50()*-0.108077);
}

double NNfunction_sg_sR::synapse0x3a0f1b0() {
   return (neuron0x39fc0b0()*0.275579);
}

double NNfunction_sg_sR::synapse0x3a0f7f0() {
   return (neuron0x39fc2d0()*0.378371);
}

double NNfunction_sg_sR::synapse0x3a0f830() {
   return (neuron0x39fc610()*-0.272356);
}

double NNfunction_sg_sR::synapse0x3a0f870() {
   return (neuron0x39fc950()*0.038074);
}

double NNfunction_sg_sR::synapse0x3a0f8b0() {
   return (neuron0x39fcc90()*0.293381);
}

double NNfunction_sg_sR::synapse0x3a0f8f0() {
   return (neuron0x39fcfd0()*-0.109639);
}

double NNfunction_sg_sR::synapse0x3a0f930() {
   return (neuron0x39fd310()*0.104357);
}

double NNfunction_sg_sR::synapse0x3a0fcb0() {
   return (neuron0x39f87e0()*-0.236762);
}

double NNfunction_sg_sR::synapse0x3a0fcf0() {
   return (neuron0x39f8a90()*-0.0558727);
}

double NNfunction_sg_sR::synapse0x3a0fd30() {
   return (neuron0x39f8dd0()*-0.118594);
}

double NNfunction_sg_sR::synapse0x3a0fd70() {
   return (neuron0x39f9110()*0.969055);
}

double NNfunction_sg_sR::synapse0x3a0fdb0() {
   return (neuron0x39f9450()*-0.00816637);
}

double NNfunction_sg_sR::synapse0x3a0fdf0() {
   return (neuron0x39f9790()*-0.028675);
}

double NNfunction_sg_sR::synapse0x3a0fe30() {
   return (neuron0x39f9ad0()*-0.00737295);
}

double NNfunction_sg_sR::synapse0x3a0fe70() {
   return (neuron0x39f9e10()*0.217553);
}

double NNfunction_sg_sR::synapse0x3a0feb0() {
   return (neuron0x39fa150()*0.0181618);
}

double NNfunction_sg_sR::synapse0x3a0fef0() {
   return (neuron0x39fa490()*-0.0826374);
}

double NNfunction_sg_sR::synapse0x3a0ff30() {
   return (neuron0x39fa7d0()*0.00467712);
}

double NNfunction_sg_sR::synapse0x3a0ff70() {
   return (neuron0x39fab10()*-0.0956606);
}

double NNfunction_sg_sR::synapse0x3a0ffb0() {
   return (neuron0x39fae50()*-0.147747);
}

double NNfunction_sg_sR::synapse0x3a0fff0() {
   return (neuron0x39fb190()*0.0639357);
}

double NNfunction_sg_sR::synapse0x3a10030() {
   return (neuron0x39fb4d0()*-0.337462);
}

double NNfunction_sg_sR::synapse0x3a10070() {
   return (neuron0x39fb810()*0.274771);
}

double NNfunction_sg_sR::synapse0x3a0fb00() {
   return (neuron0x39fbb50()*0.0246409);
}

double NNfunction_sg_sR::synapse0x3a0fb40() {
   return (neuron0x39fc0b0()*-0.0234709);
}

double NNfunction_sg_sR::synapse0x3a101c0() {
   return (neuron0x39fc2d0()*-0.196679);
}

double NNfunction_sg_sR::synapse0x3a10200() {
   return (neuron0x39fc610()*-0.142003);
}

double NNfunction_sg_sR::synapse0x3a10240() {
   return (neuron0x39fc950()*-0.0574145);
}

double NNfunction_sg_sR::synapse0x3a10280() {
   return (neuron0x39fcc90()*-0.179848);
}

double NNfunction_sg_sR::synapse0x3a102c0() {
   return (neuron0x39fcfd0()*0.102057);
}

double NNfunction_sg_sR::synapse0x3a10300() {
   return (neuron0x39fd310()*-0.0386195);
}

double NNfunction_sg_sR::synapse0x3a10680() {
   return (neuron0x39f87e0()*-0.169705);
}

double NNfunction_sg_sR::synapse0x3a106c0() {
   return (neuron0x39f8a90()*0.0223732);
}

double NNfunction_sg_sR::synapse0x3a10700() {
   return (neuron0x39f8dd0()*0.258134);
}

double NNfunction_sg_sR::synapse0x3a10740() {
   return (neuron0x39f9110()*-0.33622);
}

double NNfunction_sg_sR::synapse0x3a10780() {
   return (neuron0x39f9450()*0.0409075);
}

double NNfunction_sg_sR::synapse0x3a107c0() {
   return (neuron0x39f9790()*0.252814);
}

double NNfunction_sg_sR::synapse0x3a10800() {
   return (neuron0x39f9ad0()*-0.0822045);
}

double NNfunction_sg_sR::synapse0x3a10840() {
   return (neuron0x39f9e10()*-0.625477);
}

double NNfunction_sg_sR::synapse0x3a10880() {
   return (neuron0x39fa150()*-0.169277);
}

double NNfunction_sg_sR::synapse0x3a108c0() {
   return (neuron0x39fa490()*0.184223);
}

double NNfunction_sg_sR::synapse0x3a10900() {
   return (neuron0x39fa7d0()*0.29934);
}

double NNfunction_sg_sR::synapse0x3a10940() {
   return (neuron0x39fab10()*-0.161597);
}

double NNfunction_sg_sR::synapse0x3a10980() {
   return (neuron0x39fae50()*-0.0554481);
}

double NNfunction_sg_sR::synapse0x3a109c0() {
   return (neuron0x39fb190()*-0.0732617);
}

double NNfunction_sg_sR::synapse0x3a10a00() {
   return (neuron0x39fb4d0()*-0.356595);
}

double NNfunction_sg_sR::synapse0x3a10a40() {
   return (neuron0x39fb810()*0.517127);
}

double NNfunction_sg_sR::synapse0x3a104d0() {
   return (neuron0x39fbb50()*0.0346698);
}

double NNfunction_sg_sR::synapse0x3a10510() {
   return (neuron0x39fc0b0()*0.0740977);
}

double NNfunction_sg_sR::synapse0x3a10b90() {
   return (neuron0x39fc2d0()*0.326289);
}

double NNfunction_sg_sR::synapse0x3a10bd0() {
   return (neuron0x39fc610()*-0.0500413);
}

double NNfunction_sg_sR::synapse0x3a10c10() {
   return (neuron0x39fc950()*0.00439226);
}

double NNfunction_sg_sR::synapse0x3a10c50() {
   return (neuron0x39fcc90()*-0.187112);
}

double NNfunction_sg_sR::synapse0x3a10c90() {
   return (neuron0x39fcfd0()*0.251414);
}

double NNfunction_sg_sR::synapse0x3a10cd0() {
   return (neuron0x39fd310()*0.0249671);
}

double NNfunction_sg_sR::synapse0x3a11050() {
   return (neuron0x39f87e0()*0.0939956);
}

double NNfunction_sg_sR::synapse0x3a11090() {
   return (neuron0x39f8a90()*0.0463471);
}

double NNfunction_sg_sR::synapse0x3a110d0() {
   return (neuron0x39f8dd0()*-0.071676);
}

double NNfunction_sg_sR::synapse0x3a11110() {
   return (neuron0x39f9110()*0.501308);
}

double NNfunction_sg_sR::synapse0x3a11150() {
   return (neuron0x39f9450()*-0.0316604);
}

double NNfunction_sg_sR::synapse0x3a11190() {
   return (neuron0x39f9790()*0.0489008);
}

double NNfunction_sg_sR::synapse0x3a111d0() {
   return (neuron0x39f9ad0()*-0.0266598);
}

double NNfunction_sg_sR::synapse0x3a11210() {
   return (neuron0x39f9e10()*-0.0687397);
}

double NNfunction_sg_sR::synapse0x3a11250() {
   return (neuron0x39fa150()*-0.582606);
}

double NNfunction_sg_sR::synapse0x3a11290() {
   return (neuron0x39fa490()*0.437678);
}

double NNfunction_sg_sR::synapse0x3a112d0() {
   return (neuron0x39fa7d0()*-0.324825);
}

double NNfunction_sg_sR::synapse0x3a11310() {
   return (neuron0x39fab10()*-0.0814158);
}

double NNfunction_sg_sR::synapse0x3a11350() {
   return (neuron0x39fae50()*-0.152437);
}

double NNfunction_sg_sR::synapse0x3a11390() {
   return (neuron0x39fb190()*-0.0290731);
}

double NNfunction_sg_sR::synapse0x3a113d0() {
   return (neuron0x39fb4d0()*-0.0703374);
}

double NNfunction_sg_sR::synapse0x3a11410() {
   return (neuron0x39fb810()*0.0188182);
}

double NNfunction_sg_sR::synapse0x3a10ea0() {
   return (neuron0x39fbb50()*0.00496661);
}

double NNfunction_sg_sR::synapse0x3a10ee0() {
   return (neuron0x39fc0b0()*-0.0791689);
}

double NNfunction_sg_sR::synapse0x3a11560() {
   return (neuron0x39fc2d0()*1.20917);
}

double NNfunction_sg_sR::synapse0x3a115a0() {
   return (neuron0x39fc610()*-0.028146);
}

double NNfunction_sg_sR::synapse0x3a115e0() {
   return (neuron0x39fc950()*-0.121632);
}

double NNfunction_sg_sR::synapse0x3a11620() {
   return (neuron0x39fcc90()*0.00504712);
}

double NNfunction_sg_sR::synapse0x3a11660() {
   return (neuron0x39fcfd0()*-0.0121281);
}

double NNfunction_sg_sR::synapse0x3a116a0() {
   return (neuron0x39fd310()*-0.0480135);
}

double NNfunction_sg_sR::synapse0x3a11a20() {
   return (neuron0x39f87e0()*0.1142);
}

double NNfunction_sg_sR::synapse0x3a11a60() {
   return (neuron0x39f8a90()*-0.247649);
}

double NNfunction_sg_sR::synapse0x3a11aa0() {
   return (neuron0x39f8dd0()*-0.0758752);
}

double NNfunction_sg_sR::synapse0x3a11ae0() {
   return (neuron0x39f9110()*-0.72049);
}

double NNfunction_sg_sR::synapse0x3a11b20() {
   return (neuron0x39f9450()*0.105736);
}

double NNfunction_sg_sR::synapse0x3a11b60() {
   return (neuron0x39f9790()*-0.236512);
}

double NNfunction_sg_sR::synapse0x3a11ba0() {
   return (neuron0x39f9ad0()*-0.135635);
}

double NNfunction_sg_sR::synapse0x3a11be0() {
   return (neuron0x39f9e10()*-0.402944);
}

double NNfunction_sg_sR::synapse0x3a11c20() {
   return (neuron0x39fa150()*-0.0926703);
}

double NNfunction_sg_sR::synapse0x3a11c60() {
   return (neuron0x39fa490()*-0.0161743);
}

double NNfunction_sg_sR::synapse0x3a11ca0() {
   return (neuron0x39fa7d0()*-0.105592);
}

double NNfunction_sg_sR::synapse0x3a11ce0() {
   return (neuron0x39fab10()*-0.145438);
}

double NNfunction_sg_sR::synapse0x3a11d20() {
   return (neuron0x39fae50()*-0.112645);
}

double NNfunction_sg_sR::synapse0x3a11d60() {
   return (neuron0x39fb190()*0.0341254);
}

double NNfunction_sg_sR::synapse0x3a11da0() {
   return (neuron0x39fb4d0()*0.0908287);
}

double NNfunction_sg_sR::synapse0x3a11de0() {
   return (neuron0x39fb810()*-0.0263502);
}

double NNfunction_sg_sR::synapse0x3a11870() {
   return (neuron0x39fbb50()*0.149843);
}

double NNfunction_sg_sR::synapse0x3a118b0() {
   return (neuron0x39fc0b0()*-0.0765891);
}

double NNfunction_sg_sR::synapse0x3a11f30() {
   return (neuron0x39fc2d0()*-0.334164);
}

double NNfunction_sg_sR::synapse0x3a11f70() {
   return (neuron0x39fc610()*-0.0540096);
}

double NNfunction_sg_sR::synapse0x3a11fb0() {
   return (neuron0x39fc950()*-0.105134);
}

double NNfunction_sg_sR::synapse0x3a11ff0() {
   return (neuron0x39fcc90()*0.0916565);
}

double NNfunction_sg_sR::synapse0x3a12030() {
   return (neuron0x39fcfd0()*-0.0760659);
}

double NNfunction_sg_sR::synapse0x3a12070() {
   return (neuron0x39fd310()*-0.00980078);
}

double NNfunction_sg_sR::synapse0x3a123f0() {
   return (neuron0x39f87e0()*-0.051066);
}

double NNfunction_sg_sR::synapse0x3a12430() {
   return (neuron0x39f8a90()*0.0155019);
}

double NNfunction_sg_sR::synapse0x3a12470() {
   return (neuron0x39f8dd0()*0.0349069);
}

double NNfunction_sg_sR::synapse0x3a124b0() {
   return (neuron0x39f9110()*0.596466);
}

double NNfunction_sg_sR::synapse0x3a124f0() {
   return (neuron0x39f9450()*-0.0803764);
}

double NNfunction_sg_sR::synapse0x3a12530() {
   return (neuron0x39f9790()*-0.0413359);
}

double NNfunction_sg_sR::synapse0x3a12570() {
   return (neuron0x39f9ad0()*0.0179754);
}

double NNfunction_sg_sR::synapse0x3a125b0() {
   return (neuron0x39f9e10()*-0.0350429);
}

double NNfunction_sg_sR::synapse0x3a125f0() {
   return (neuron0x39fa150()*0.0473234);
}

double NNfunction_sg_sR::synapse0x3a12630() {
   return (neuron0x39fa490()*0.00100857);
}

double NNfunction_sg_sR::synapse0x3a12670() {
   return (neuron0x39fa7d0()*0.0286378);
}

double NNfunction_sg_sR::synapse0x3a126b0() {
   return (neuron0x39fab10()*-0.0325158);
}

double NNfunction_sg_sR::synapse0x3a126f0() {
   return (neuron0x39fae50()*-0.0912053);
}

double NNfunction_sg_sR::synapse0x3a12730() {
   return (neuron0x39fb190()*0.0394822);
}

double NNfunction_sg_sR::synapse0x3a12770() {
   return (neuron0x39fb4d0()*-0.0876185);
}

double NNfunction_sg_sR::synapse0x3a127b0() {
   return (neuron0x39fb810()*-0.147362);
}

double NNfunction_sg_sR::synapse0x3a12240() {
   return (neuron0x39fbb50()*0.0532873);
}

double NNfunction_sg_sR::synapse0x3a12280() {
   return (neuron0x39fc0b0()*-0.0429082);
}

double NNfunction_sg_sR::synapse0x3a12900() {
   return (neuron0x39fc2d0()*3.52853);
}

double NNfunction_sg_sR::synapse0x3a12940() {
   return (neuron0x39fc610()*-0.00774412);
}

double NNfunction_sg_sR::synapse0x3a12980() {
   return (neuron0x39fc950()*0.0143437);
}

double NNfunction_sg_sR::synapse0x3a129c0() {
   return (neuron0x39fcc90()*-0.0578611);
}

double NNfunction_sg_sR::synapse0x3a12a00() {
   return (neuron0x39fcfd0()*0.0177617);
}

double NNfunction_sg_sR::synapse0x3a12a40() {
   return (neuron0x39fd310()*0.00205181);
}

double NNfunction_sg_sR::synapse0x3a12dc0() {
   return (neuron0x39f87e0()*0.0770525);
}

double NNfunction_sg_sR::synapse0x3a12e00() {
   return (neuron0x39f8a90()*0.0385907);
}

double NNfunction_sg_sR::synapse0x3a12e40() {
   return (neuron0x39f8dd0()*0.0670495);
}

double NNfunction_sg_sR::synapse0x3a12e80() {
   return (neuron0x39f9110()*1.46559);
}

double NNfunction_sg_sR::synapse0x3a12ec0() {
   return (neuron0x39f9450()*-0.00438957);
}

double NNfunction_sg_sR::synapse0x3a12f00() {
   return (neuron0x39f9790()*0.00312602);
}

double NNfunction_sg_sR::synapse0x3a12f40() {
   return (neuron0x39f9ad0()*0.094944);
}

double NNfunction_sg_sR::synapse0x3a12f80() {
   return (neuron0x39f9e10()*0.0633264);
}

double NNfunction_sg_sR::synapse0x3a12fc0() {
   return (neuron0x39fa150()*-0.0337722);
}

double NNfunction_sg_sR::synapse0x3a13000() {
   return (neuron0x39fa490()*0.00909369);
}

double NNfunction_sg_sR::synapse0x3a13040() {
   return (neuron0x39fa7d0()*0.0290624);
}

double NNfunction_sg_sR::synapse0x3a13080() {
   return (neuron0x39fab10()*0.0640335);
}

double NNfunction_sg_sR::synapse0x3a130c0() {
   return (neuron0x39fae50()*0.206288);
}

double NNfunction_sg_sR::synapse0x3a13100() {
   return (neuron0x39fb190()*-0.187062);
}

double NNfunction_sg_sR::synapse0x3a13140() {
   return (neuron0x39fb4d0()*0.488875);
}

double NNfunction_sg_sR::synapse0x3a13180() {
   return (neuron0x39fb810()*0.293824);
}

double NNfunction_sg_sR::synapse0x3a12c10() {
   return (neuron0x39fbb50()*-0.124965);
}

double NNfunction_sg_sR::synapse0x3a12c50() {
   return (neuron0x39fc0b0()*-0.00513473);
}

double NNfunction_sg_sR::synapse0x3a132d0() {
   return (neuron0x39fc2d0()*-0.626642);
}

double NNfunction_sg_sR::synapse0x3a13310() {
   return (neuron0x39fc610()*-0.0448287);
}

double NNfunction_sg_sR::synapse0x3a13350() {
   return (neuron0x39fc950()*0.0592349);
}

double NNfunction_sg_sR::synapse0x3a13390() {
   return (neuron0x39fcc90()*-0.00887013);
}

double NNfunction_sg_sR::synapse0x3a133d0() {
   return (neuron0x39fcfd0()*-0.0370981);
}

double NNfunction_sg_sR::synapse0x3a13410() {
   return (neuron0x39fd310()*-0.0517222);
}

double NNfunction_sg_sR::synapse0x3a13790() {
   return (neuron0x39f87e0()*0.500287);
}

double NNfunction_sg_sR::synapse0x3a137d0() {
   return (neuron0x39f8a90()*-0.268988);
}

double NNfunction_sg_sR::synapse0x3a13810() {
   return (neuron0x39f8dd0()*-0.277427);
}

double NNfunction_sg_sR::synapse0x3a13850() {
   return (neuron0x39f9110()*-0.699668);
}

double NNfunction_sg_sR::synapse0x3a13890() {
   return (neuron0x39f9450()*0.11138);
}

double NNfunction_sg_sR::synapse0x3a138d0() {
   return (neuron0x39f9790()*-0.166156);
}

double NNfunction_sg_sR::synapse0x3a13910() {
   return (neuron0x39f9ad0()*0.135501);
}

double NNfunction_sg_sR::synapse0x3a13950() {
   return (neuron0x39f9e10()*-0.0743057);
}

double NNfunction_sg_sR::synapse0x3a13990() {
   return (neuron0x39fa150()*0.303708);
}

double NNfunction_sg_sR::synapse0x3a139d0() {
   return (neuron0x39fa490()*0.208064);
}

double NNfunction_sg_sR::synapse0x3a13a10() {
   return (neuron0x39fa7d0()*0.145573);
}

double NNfunction_sg_sR::synapse0x3a13a50() {
   return (neuron0x39fab10()*-0.1735);
}

double NNfunction_sg_sR::synapse0x3a13a90() {
   return (neuron0x39fae50()*-0.15443);
}

double NNfunction_sg_sR::synapse0x3a13ad0() {
   return (neuron0x39fb190()*-0.0911451);
}

double NNfunction_sg_sR::synapse0x3a13b10() {
   return (neuron0x39fb4d0()*0.379975);
}

double NNfunction_sg_sR::synapse0x3a13b50() {
   return (neuron0x39fb810()*-0.101248);
}

double NNfunction_sg_sR::synapse0x3a135e0() {
   return (neuron0x39fbb50()*0.242536);
}

double NNfunction_sg_sR::synapse0x3a13620() {
   return (neuron0x39fc0b0()*0.0425651);
}

double NNfunction_sg_sR::synapse0x3a13ca0() {
   return (neuron0x39fc2d0()*-0.996693);
}

double NNfunction_sg_sR::synapse0x3a13ce0() {
   return (neuron0x39fc610()*0.269985);
}

double NNfunction_sg_sR::synapse0x3a13d20() {
   return (neuron0x39fc950()*-0.126422);
}

double NNfunction_sg_sR::synapse0x3a13d60() {
   return (neuron0x39fcc90()*0.405498);
}

double NNfunction_sg_sR::synapse0x3a13da0() {
   return (neuron0x39fcfd0()*-0.0733716);
}

double NNfunction_sg_sR::synapse0x3a13de0() {
   return (neuron0x39fd310()*-0.0881072);
}

double NNfunction_sg_sR::synapse0x3a14160() {
   return (neuron0x39f87e0()*-0.146112);
}

double NNfunction_sg_sR::synapse0x3a08730() {
   return (neuron0x39f8a90()*-0.0157314);
}

double NNfunction_sg_sR::synapse0x3a08770() {
   return (neuron0x39f8dd0()*0.0561974);
}

double NNfunction_sg_sR::synapse0x3a087b0() {
   return (neuron0x39f9110()*-0.0243909);
}

double NNfunction_sg_sR::synapse0x3a08a00() {
   return (neuron0x39f9450()*0.00354616);
}

double NNfunction_sg_sR::synapse0x3a08a40() {
   return (neuron0x39f9790()*-0.0472561);
}

double NNfunction_sg_sR::synapse0x3a08a80() {
   return (neuron0x39f9ad0()*0.0505283);
}

double NNfunction_sg_sR::synapse0x3a08cd0() {
   return (neuron0x39f9e10()*0.168594);
}

double NNfunction_sg_sR::synapse0x3a08d10() {
   return (neuron0x39fa150()*-0.0575602);
}

double NNfunction_sg_sR::synapse0x3a08f60() {
   return (neuron0x39fa490()*0.0721521);
}

double NNfunction_sg_sR::synapse0x3a08fa0() {
   return (neuron0x39fa7d0()*0.0723866);
}

double NNfunction_sg_sR::synapse0x3a08fe0() {
   return (neuron0x39fab10()*-0.15285);
}

double NNfunction_sg_sR::synapse0x3a09230() {
   return (neuron0x39fae50()*0.394532);
}

double NNfunction_sg_sR::synapse0x3a09270() {
   return (neuron0x39fb190()*-0.0553093);
}

double NNfunction_sg_sR::synapse0x3a094c0() {
   return (neuron0x39fb4d0()*0.154017);
}

double NNfunction_sg_sR::synapse0x3a09500() {
   return (neuron0x39fb810()*-0.107384);
}

double NNfunction_sg_sR::synapse0x3a13fb0() {
   return (neuron0x39fbb50()*-0.0337512);
}

double NNfunction_sg_sR::synapse0x3a13ff0() {
   return (neuron0x39fc0b0()*0.0908908);
}

double NNfunction_sg_sR::synapse0x3a09650() {
   return (neuron0x39fc2d0()*0.50253);
}

double NNfunction_sg_sR::synapse0x3a09b60() {
   return (neuron0x39fc610()*0.164165);
}

double NNfunction_sg_sR::synapse0x3a09ba0() {
   return (neuron0x39fc950()*-0.0733355);
}

double NNfunction_sg_sR::synapse0x3a09be0() {
   return (neuron0x39fcc90()*-0.030945);
}

double NNfunction_sg_sR::synapse0x3a09e30() {
   return (neuron0x39fcfd0()*0.169901);
}

double NNfunction_sg_sR::synapse0x3a09e70() {
   return (neuron0x39fd310()*-0.0248285);
}

double NNfunction_sg_sR::synapse0x3a09720() {
   return (neuron0x39f87e0()*0.00797497);
}

double NNfunction_sg_sR::synapse0x3a09760() {
   return (neuron0x39f8a90()*-0.00194767);
}

double NNfunction_sg_sR::synapse0x3a097a0() {
   return (neuron0x39f8dd0()*-0.00483083);
}

double NNfunction_sg_sR::synapse0x3a097e0() {
   return (neuron0x39f9110()*0.923623);
}

double NNfunction_sg_sR::synapse0x3a0a160() {
   return (neuron0x39f9450()*-0.00510587);
}

double NNfunction_sg_sR::synapse0x3a164b0() {
   return (neuron0x39f9790()*-0.0010105);
}

double NNfunction_sg_sR::synapse0x3a164f0() {
   return (neuron0x39f9ad0()*-0.0197624);
}

double NNfunction_sg_sR::synapse0x3a16530() {
   return (neuron0x39f9e10()*0.00319966);
}

double NNfunction_sg_sR::synapse0x3a16570() {
   return (neuron0x39fa150()*0.00131617);
}

double NNfunction_sg_sR::synapse0x3a165b0() {
   return (neuron0x39fa490()*-0.0048176);
}

double NNfunction_sg_sR::synapse0x3a165f0() {
   return (neuron0x39fa7d0()*0.0197001);
}

double NNfunction_sg_sR::synapse0x3a16630() {
   return (neuron0x39fab10()*-0.0144354);
}

double NNfunction_sg_sR::synapse0x3a16670() {
   return (neuron0x39fae50()*-0.0309141);
}

double NNfunction_sg_sR::synapse0x3a166b0() {
   return (neuron0x39fb190()*0.0176609);
}

double NNfunction_sg_sR::synapse0x3a166f0() {
   return (neuron0x39fb4d0()*-0.0488601);
}

double NNfunction_sg_sR::synapse0x3a16730() {
   return (neuron0x39fb810()*-0.0394961);
}

double NNfunction_sg_sR::synapse0x3a0a040() {
   return (neuron0x39fbb50()*0.00827492);
}

double NNfunction_sg_sR::synapse0x3a0a080() {
   return (neuron0x39fc0b0()*-0.00064537);
}

double NNfunction_sg_sR::synapse0x3a16880() {
   return (neuron0x39fc2d0()*0.269861);
}

double NNfunction_sg_sR::synapse0x3a168c0() {
   return (neuron0x39fc610()*0.0191589);
}

double NNfunction_sg_sR::synapse0x3a16900() {
   return (neuron0x39fc950()*0.00192498);
}

double NNfunction_sg_sR::synapse0x3a16940() {
   return (neuron0x39fcc90()*0.00289014);
}

double NNfunction_sg_sR::synapse0x3a16980() {
   return (neuron0x39fcfd0()*-0.000773919);
}

double NNfunction_sg_sR::synapse0x3a169c0() {
   return (neuron0x39fd310()*-0.00199053);
}

double NNfunction_sg_sR::synapse0x3a16d40() {
   return (neuron0x39f87e0()*0.0441773);
}

double NNfunction_sg_sR::synapse0x3a16d80() {
   return (neuron0x39f8a90()*0.247173);
}

double NNfunction_sg_sR::synapse0x3a16dc0() {
   return (neuron0x39f8dd0()*-0.0215701);
}

double NNfunction_sg_sR::synapse0x3a16e00() {
   return (neuron0x39f9110()*-0.781711);
}

double NNfunction_sg_sR::synapse0x3a16e40() {
   return (neuron0x39f9450()*-0.109854);
}

double NNfunction_sg_sR::synapse0x3a16e80() {
   return (neuron0x39f9790()*0.0498782);
}

double NNfunction_sg_sR::synapse0x3a16ec0() {
   return (neuron0x39f9ad0()*0.151414);
}

double NNfunction_sg_sR::synapse0x3a16f00() {
   return (neuron0x39f9e10()*-0.0709432);
}

double NNfunction_sg_sR::synapse0x3a16f40() {
   return (neuron0x39fa150()*0.00356956);
}

double NNfunction_sg_sR::synapse0x3a16f80() {
   return (neuron0x39fa490()*0.0556478);
}

double NNfunction_sg_sR::synapse0x3a16fc0() {
   return (neuron0x39fa7d0()*0.000962953);
}

double NNfunction_sg_sR::synapse0x3a17000() {
   return (neuron0x39fab10()*0.193454);
}

double NNfunction_sg_sR::synapse0x3a17040() {
   return (neuron0x39fae50()*-0.226008);
}

double NNfunction_sg_sR::synapse0x3a17080() {
   return (neuron0x39fb190()*-0.416462);
}

double NNfunction_sg_sR::synapse0x3a170c0() {
   return (neuron0x39fb4d0()*0.246669);
}

double NNfunction_sg_sR::synapse0x3a17100() {
   return (neuron0x39fb810()*0.0882732);
}

double NNfunction_sg_sR::synapse0x3a16b90() {
   return (neuron0x39fbb50()*-0.694341);
}

double NNfunction_sg_sR::synapse0x3a16bd0() {
   return (neuron0x39fc0b0()*0.0620331);
}

double NNfunction_sg_sR::synapse0x3a17250() {
   return (neuron0x39fc2d0()*-0.079134);
}

double NNfunction_sg_sR::synapse0x3a17290() {
   return (neuron0x39fc610()*0.0812892);
}

double NNfunction_sg_sR::synapse0x3a172d0() {
   return (neuron0x39fc950()*0.200086);
}

double NNfunction_sg_sR::synapse0x3a17310() {
   return (neuron0x39fcc90()*-0.00504548);
}

double NNfunction_sg_sR::synapse0x3a17350() {
   return (neuron0x39fcfd0()*0.0714069);
}

double NNfunction_sg_sR::synapse0x3a17390() {
   return (neuron0x39fd310()*-0.0678781);
}

double NNfunction_sg_sR::synapse0x3a17710() {
   return (neuron0x39f87e0()*0.00252208);
}

double NNfunction_sg_sR::synapse0x3a17750() {
   return (neuron0x39f8a90()*-0.0123172);
}

double NNfunction_sg_sR::synapse0x3a17790() {
   return (neuron0x39f8dd0()*-0.000275162);
}

double NNfunction_sg_sR::synapse0x3a177d0() {
   return (neuron0x39f9110()*0.222099);
}

double NNfunction_sg_sR::synapse0x3a17810() {
   return (neuron0x39f9450()*-0.0100463);
}

double NNfunction_sg_sR::synapse0x3a17850() {
   return (neuron0x39f9790()*0.0020375);
}

double NNfunction_sg_sR::synapse0x3a17890() {
   return (neuron0x39f9ad0()*-0.0122428);
}

double NNfunction_sg_sR::synapse0x3a178d0() {
   return (neuron0x39f9e10()*-0.00524251);
}

double NNfunction_sg_sR::synapse0x3a17910() {
   return (neuron0x39fa150()*-0.00438044);
}

double NNfunction_sg_sR::synapse0x3a17950() {
   return (neuron0x39fa490()*0.00310513);
}

double NNfunction_sg_sR::synapse0x3a17990() {
   return (neuron0x39fa7d0()*0.00717493);
}

double NNfunction_sg_sR::synapse0x3a179d0() {
   return (neuron0x39fab10()*-0.00363478);
}

double NNfunction_sg_sR::synapse0x3a17a10() {
   return (neuron0x39fae50()*-0.00833974);
}

double NNfunction_sg_sR::synapse0x3a17a50() {
   return (neuron0x39fb190()*0.00966113);
}

double NNfunction_sg_sR::synapse0x3a17a90() {
   return (neuron0x39fb4d0()*-0.0270507);
}

double NNfunction_sg_sR::synapse0x3a17ad0() {
   return (neuron0x39fb810()*0.0092293);
}

double NNfunction_sg_sR::synapse0x3a17560() {
   return (neuron0x39fbb50()*0.00156895);
}

double NNfunction_sg_sR::synapse0x3a175a0() {
   return (neuron0x39fc0b0()*0.00316712);
}

double NNfunction_sg_sR::synapse0x3a17c20() {
   return (neuron0x39fc2d0()*-0.872259);
}

double NNfunction_sg_sR::synapse0x3a17c60() {
   return (neuron0x39fc610()*0.012756);
}

double NNfunction_sg_sR::synapse0x3a17ca0() {
   return (neuron0x39fc950()*-0.00131722);
}

double NNfunction_sg_sR::synapse0x3a17ce0() {
   return (neuron0x39fcc90()*-0.00161762);
}

double NNfunction_sg_sR::synapse0x3a17d20() {
   return (neuron0x39fcfd0()*-2.67263e-05);
}

double NNfunction_sg_sR::synapse0x3a17d60() {
   return (neuron0x39fd310()*-0.0016476);
}

double NNfunction_sg_sR::synapse0x3a180e0() {
   return (neuron0x39f87e0()*0.0124443);
}

double NNfunction_sg_sR::synapse0x3a18120() {
   return (neuron0x39f8a90()*0.0152706);
}

double NNfunction_sg_sR::synapse0x3a18160() {
   return (neuron0x39f8dd0()*0.0195711);
}

double NNfunction_sg_sR::synapse0x3a181a0() {
   return (neuron0x39f9110()*-1.96522);
}

double NNfunction_sg_sR::synapse0x3a181e0() {
   return (neuron0x39f9450()*-0.000869174);
}

double NNfunction_sg_sR::synapse0x3a18220() {
   return (neuron0x39f9790()*0.00496728);
}

double NNfunction_sg_sR::synapse0x3a18260() {
   return (neuron0x39f9ad0()*0.000137135);
}

double NNfunction_sg_sR::synapse0x3a182a0() {
   return (neuron0x39f9e10()*-0.0114487);
}

double NNfunction_sg_sR::synapse0x3a182e0() {
   return (neuron0x39fa150()*0.0184806);
}

double NNfunction_sg_sR::synapse0x3a18320() {
   return (neuron0x39fa490()*0.00626427);
}

double NNfunction_sg_sR::synapse0x3a18360() {
   return (neuron0x39fa7d0()*0.0019953);
}

double NNfunction_sg_sR::synapse0x3a183a0() {
   return (neuron0x39fab10()*0.0406214);
}

double NNfunction_sg_sR::synapse0x3a183e0() {
   return (neuron0x39fae50()*0.0368959);
}

double NNfunction_sg_sR::synapse0x3a18420() {
   return (neuron0x39fb190()*-0.0124062);
}

double NNfunction_sg_sR::synapse0x3a18460() {
   return (neuron0x39fb4d0()*0.0683659);
}

double NNfunction_sg_sR::synapse0x3a184a0() {
   return (neuron0x39fb810()*0.0198619);
}

double NNfunction_sg_sR::synapse0x3a17f30() {
   return (neuron0x39fbb50()*-0.00258066);
}

double NNfunction_sg_sR::synapse0x3a17f70() {
   return (neuron0x39fc0b0()*0.0275825);
}

double NNfunction_sg_sR::synapse0x3a185f0() {
   return (neuron0x39fc2d0()*0.0140547);
}

double NNfunction_sg_sR::synapse0x3a18630() {
   return (neuron0x39fc610()*0.0109372);
}

double NNfunction_sg_sR::synapse0x3a18670() {
   return (neuron0x39fc950()*0.0116603);
}

double NNfunction_sg_sR::synapse0x3a186b0() {
   return (neuron0x39fcc90()*0.00270957);
}

double NNfunction_sg_sR::synapse0x3a186f0() {
   return (neuron0x39fcfd0()*-0.00780608);
}

double NNfunction_sg_sR::synapse0x3a18730() {
   return (neuron0x39fd310()*-0.00220284);
}

double NNfunction_sg_sR::synapse0x3a18ab0() {
   return (neuron0x39f87e0()*-0.0338129);
}

double NNfunction_sg_sR::synapse0x3a18af0() {
   return (neuron0x39f8a90()*-0.0568386);
}

double NNfunction_sg_sR::synapse0x3a18b30() {
   return (neuron0x39f8dd0()*-0.382382);
}

double NNfunction_sg_sR::synapse0x3a18b70() {
   return (neuron0x39f9110()*0.635482);
}

double NNfunction_sg_sR::synapse0x3a18bb0() {
   return (neuron0x39f9450()*0.144655);
}

double NNfunction_sg_sR::synapse0x3a18bf0() {
   return (neuron0x39f9790()*0.212425);
}

double NNfunction_sg_sR::synapse0x3a18c30() {
   return (neuron0x39f9ad0()*0.157056);
}

double NNfunction_sg_sR::synapse0x3a18c70() {
   return (neuron0x39f9e10()*0.122044);
}

double NNfunction_sg_sR::synapse0x3a18cb0() {
   return (neuron0x39fa150()*0.0652737);
}

double NNfunction_sg_sR::synapse0x3a18cf0() {
   return (neuron0x39fa490()*-0.103443);
}

double NNfunction_sg_sR::synapse0x3a18d30() {
   return (neuron0x39fa7d0()*-0.10882);
}

double NNfunction_sg_sR::synapse0x3a18d70() {
   return (neuron0x39fab10()*-0.210651);
}

double NNfunction_sg_sR::synapse0x3a18db0() {
   return (neuron0x39fae50()*0.405157);
}

double NNfunction_sg_sR::synapse0x3a18df0() {
   return (neuron0x39fb190()*0.185277);
}

double NNfunction_sg_sR::synapse0x3a18e30() {
   return (neuron0x39fb4d0()*0.328823);
}

double NNfunction_sg_sR::synapse0x3a18e70() {
   return (neuron0x39fb810()*-0.162777);
}

double NNfunction_sg_sR::synapse0x3a18900() {
   return (neuron0x39fbb50()*-0.127737);
}

double NNfunction_sg_sR::synapse0x3a18940() {
   return (neuron0x39fc0b0()*0.118654);
}

double NNfunction_sg_sR::synapse0x3a18fc0() {
   return (neuron0x39fc2d0()*-0.0642693);
}

double NNfunction_sg_sR::synapse0x3a19000() {
   return (neuron0x39fc610()*-0.121478);
}

double NNfunction_sg_sR::synapse0x3a19040() {
   return (neuron0x39fc950()*0.0980362);
}

double NNfunction_sg_sR::synapse0x3a19080() {
   return (neuron0x39fcc90()*0.0771852);
}

double NNfunction_sg_sR::synapse0x3a190c0() {
   return (neuron0x39fcfd0()*-0.0683467);
}

double NNfunction_sg_sR::synapse0x3a19100() {
   return (neuron0x39fd310()*-0.28157);
}

double NNfunction_sg_sR::synapse0x3a19480() {
   return (neuron0x39f87e0()*0.0308525);
}

double NNfunction_sg_sR::synapse0x3a194c0() {
   return (neuron0x39f8a90()*-0.115494);
}

double NNfunction_sg_sR::synapse0x3a19500() {
   return (neuron0x39f8dd0()*-0.0183473);
}

double NNfunction_sg_sR::synapse0x3a19540() {
   return (neuron0x39f9110()*-0.421835);
}

double NNfunction_sg_sR::synapse0x3a19580() {
   return (neuron0x39f9450()*0.000400541);
}

double NNfunction_sg_sR::synapse0x3a195c0() {
   return (neuron0x39f9790()*0.0662699);
}

double NNfunction_sg_sR::synapse0x3a19600() {
   return (neuron0x39f9ad0()*0.0779755);
}

double NNfunction_sg_sR::synapse0x3a19640() {
   return (neuron0x39f9e10()*-0.000255128);
}

double NNfunction_sg_sR::synapse0x3a19680() {
   return (neuron0x39fa150()*-0.00936272);
}

double NNfunction_sg_sR::synapse0x3a196c0() {
   return (neuron0x39fa490()*0.0102339);
}

double NNfunction_sg_sR::synapse0x3a19700() {
   return (neuron0x39fa7d0()*-0.0212806);
}

double NNfunction_sg_sR::synapse0x3a19740() {
   return (neuron0x39fab10()*-0.366783);
}

double NNfunction_sg_sR::synapse0x3a19780() {
   return (neuron0x39fae50()*-0.328392);
}

double NNfunction_sg_sR::synapse0x3a197c0() {
   return (neuron0x39fb190()*0.072606);
}

double NNfunction_sg_sR::synapse0x3a19800() {
   return (neuron0x39fb4d0()*-0.447582);
}

double NNfunction_sg_sR::synapse0x3a19840() {
   return (neuron0x39fb810()*-0.0401946);
}

double NNfunction_sg_sR::synapse0x3a192d0() {
   return (neuron0x39fbb50()*-0.0277492);
}

double NNfunction_sg_sR::synapse0x3a19310() {
   return (neuron0x39fc0b0()*-0.141207);
}

double NNfunction_sg_sR::synapse0x3a19990() {
   return (neuron0x39fc2d0()*-0.266314);
}

double NNfunction_sg_sR::synapse0x3a199d0() {
   return (neuron0x39fc610()*0.00522716);
}

double NNfunction_sg_sR::synapse0x3a19a10() {
   return (neuron0x39fc950()*0.0012602);
}

double NNfunction_sg_sR::synapse0x3a19a50() {
   return (neuron0x39fcc90()*-0.0122088);
}

double NNfunction_sg_sR::synapse0x3a19a90() {
   return (neuron0x39fcfd0()*-0.0064366);
}

double NNfunction_sg_sR::synapse0x3a19ad0() {
   return (neuron0x39fd310()*0.00149729);
}

double NNfunction_sg_sR::synapse0x3a19e50() {
   return (neuron0x39f87e0()*-0.0125996);
}

double NNfunction_sg_sR::synapse0x3a19e90() {
   return (neuron0x39f8a90()*-0.00221736);
}

double NNfunction_sg_sR::synapse0x3a19ed0() {
   return (neuron0x39f8dd0()*-0.00194118);
}

double NNfunction_sg_sR::synapse0x3a19f10() {
   return (neuron0x39f9110()*15.0271);
}

double NNfunction_sg_sR::synapse0x3a19f50() {
   return (neuron0x39f9450()*-0.0112843);
}

double NNfunction_sg_sR::synapse0x3a19f90() {
   return (neuron0x39f9790()*0.00292991);
}

double NNfunction_sg_sR::synapse0x3a19fd0() {
   return (neuron0x39f9ad0()*-0.0157823);
}

double NNfunction_sg_sR::synapse0x3a1a010() {
   return (neuron0x39f9e10()*0.00622832);
}

double NNfunction_sg_sR::synapse0x3a1a050() {
   return (neuron0x39fa150()*0.0105651);
}

double NNfunction_sg_sR::synapse0x3a1a090() {
   return (neuron0x39fa490()*0.00609694);
}

double NNfunction_sg_sR::synapse0x3a1a0d0() {
   return (neuron0x39fa7d0()*0.00650875);
}

double NNfunction_sg_sR::synapse0x3a1a110() {
   return (neuron0x39fab10()*-0.0235936);
}

double NNfunction_sg_sR::synapse0x3a1a150() {
   return (neuron0x39fae50()*0.0103453);
}

double NNfunction_sg_sR::synapse0x3a1a190() {
   return (neuron0x39fb190()*0.0229104);
}

double NNfunction_sg_sR::synapse0x3a1a1d0() {
   return (neuron0x39fb4d0()*-0.0225673);
}

double NNfunction_sg_sR::synapse0x3a1a210() {
   return (neuron0x39fb810()*-0.0229418);
}

double NNfunction_sg_sR::synapse0x3a19ca0() {
   return (neuron0x39fbb50()*-0.00260491);
}

double NNfunction_sg_sR::synapse0x3a19ce0() {
   return (neuron0x39fc0b0()*0.00977815);
}

double NNfunction_sg_sR::synapse0x3a1a360() {
   return (neuron0x39fc2d0()*0.0827892);
}

double NNfunction_sg_sR::synapse0x3a1a3a0() {
   return (neuron0x39fc610()*0.0172876);
}

double NNfunction_sg_sR::synapse0x3a1a3e0() {
   return (neuron0x39fc950()*0.0248179);
}

double NNfunction_sg_sR::synapse0x3a1a420() {
   return (neuron0x39fcc90()*-0.0138278);
}

double NNfunction_sg_sR::synapse0x3a1a460() {
   return (neuron0x39fcfd0()*0.0173533);
}

double NNfunction_sg_sR::synapse0x3a1a4a0() {
   return (neuron0x39fd310()*-0.00334882);
}

double NNfunction_sg_sR::synapse0x3a1a820() {
   return (neuron0x39f87e0()*0.0113808);
}

double NNfunction_sg_sR::synapse0x3a1a860() {
   return (neuron0x39f8a90()*0.00309169);
}

double NNfunction_sg_sR::synapse0x3a1a8a0() {
   return (neuron0x39f8dd0()*0.000608999);
}

double NNfunction_sg_sR::synapse0x3a1a8e0() {
   return (neuron0x39f9110()*-5.7268);
}

double NNfunction_sg_sR::synapse0x3a1a920() {
   return (neuron0x39f9450()*0.00546642);
}

double NNfunction_sg_sR::synapse0x3a1a960() {
   return (neuron0x39f9790()*-1.07274e-05);
}

double NNfunction_sg_sR::synapse0x3a1a9a0() {
   return (neuron0x39f9ad0()*0.000148475);
}

double NNfunction_sg_sR::synapse0x3a1a9e0() {
   return (neuron0x39f9e10()*-0.00532072);
}

double NNfunction_sg_sR::synapse0x3a1aa20() {
   return (neuron0x39fa150()*-0.000587031);
}

double NNfunction_sg_sR::synapse0x3a1aa60() {
   return (neuron0x39fa490()*0.000867028);
}

double NNfunction_sg_sR::synapse0x3a1aaa0() {
   return (neuron0x39fa7d0()*0.00174141);
}

double NNfunction_sg_sR::synapse0x3a1aae0() {
   return (neuron0x39fab10()*0.00693686);
}

double NNfunction_sg_sR::synapse0x3a1ab20() {
   return (neuron0x39fae50()*0.0108834);
}

double NNfunction_sg_sR::synapse0x3a1ab60() {
   return (neuron0x39fb190()*-0.0107154);
}

double NNfunction_sg_sR::synapse0x3a1aba0() {
   return (neuron0x39fb4d0()*0.0103309);
}

double NNfunction_sg_sR::synapse0x3a1abe0() {
   return (neuron0x39fb810()*0.00679511);
}

double NNfunction_sg_sR::synapse0x3a1a670() {
   return (neuron0x39fbb50()*-0.00456073);
}

double NNfunction_sg_sR::synapse0x3a1a6b0() {
   return (neuron0x39fc0b0()*0.00801403);
}

double NNfunction_sg_sR::synapse0x3a1ad30() {
   return (neuron0x39fc2d0()*0.233622);
}

double NNfunction_sg_sR::synapse0x3a1ad70() {
   return (neuron0x39fc610()*-0.000343854);
}

double NNfunction_sg_sR::synapse0x3a1adb0() {
   return (neuron0x39fc950()*0.00517651);
}

double NNfunction_sg_sR::synapse0x3a1adf0() {
   return (neuron0x39fcc90()*0.00316431);
}

double NNfunction_sg_sR::synapse0x3a1ae30() {
   return (neuron0x39fcfd0()*-0.00102838);
}

double NNfunction_sg_sR::synapse0x3a1ae70() {
   return (neuron0x39fd310()*-0.00505021);
}

double NNfunction_sg_sR::synapse0x3a03920() {
   return (neuron0x39f87e0()*-0.00505143);
}

double NNfunction_sg_sR::synapse0x3a03960() {
   return (neuron0x39f8a90()*0.0108792);
}

double NNfunction_sg_sR::synapse0x3a039a0() {
   return (neuron0x39f8dd0()*-0.0209117);
}

double NNfunction_sg_sR::synapse0x3a039e0() {
   return (neuron0x39f9110()*0.192172);
}

double NNfunction_sg_sR::synapse0x3a03a20() {
   return (neuron0x39f9450()*-0.0135827);
}

double NNfunction_sg_sR::synapse0x3a03a60() {
   return (neuron0x39f9790()*0.0257739);
}

double NNfunction_sg_sR::synapse0x3a03aa0() {
   return (neuron0x39f9ad0()*0.0128286);
}

double NNfunction_sg_sR::synapse0x3a03ae0() {
   return (neuron0x39f9e10()*-0.00990586);
}

double NNfunction_sg_sR::synapse0x3a1b600() {
   return (neuron0x39fa150()*-0.0878267);
}

double NNfunction_sg_sR::synapse0x3a1b640() {
   return (neuron0x39fa490()*-0.177578);
}

double NNfunction_sg_sR::synapse0x3a1b680() {
   return (neuron0x39fa7d0()*0.0149446);
}

double NNfunction_sg_sR::synapse0x3a1b6c0() {
   return (neuron0x39fab10()*-0.00789453);
}

double NNfunction_sg_sR::synapse0x3a1b700() {
   return (neuron0x39fae50()*-0.0309301);
}

double NNfunction_sg_sR::synapse0x3a1b740() {
   return (neuron0x39fb190()*0.0194762);
}

double NNfunction_sg_sR::synapse0x3a1b780() {
   return (neuron0x39fb4d0()*0.0221052);
}

double NNfunction_sg_sR::synapse0x3a1b7c0() {
   return (neuron0x39fb810()*-0.00582198);
}

double NNfunction_sg_sR::synapse0x3a1b040() {
   return (neuron0x39fbb50()*0.0263926);
}

double NNfunction_sg_sR::synapse0x3a1b080() {
   return (neuron0x39fc0b0()*-0.00894823);
}

double NNfunction_sg_sR::synapse0x3a1b910() {
   return (neuron0x39fc2d0()*1.52115);
}

double NNfunction_sg_sR::synapse0x3a1b950() {
   return (neuron0x39fc610()*0.0351071);
}

double NNfunction_sg_sR::synapse0x3a1b990() {
   return (neuron0x39fc950()*0.00717822);
}

double NNfunction_sg_sR::synapse0x3a1b9d0() {
   return (neuron0x39fcc90()*0.0152761);
}

double NNfunction_sg_sR::synapse0x3a1ba10() {
   return (neuron0x39fcfd0()*-0.0137683);
}

double NNfunction_sg_sR::synapse0x3a1ba50() {
   return (neuron0x39fd310()*-0.0167855);
}

double NNfunction_sg_sR::synapse0x3a1bdd0() {
   return (neuron0x39f87e0()*-0.04938);
}

double NNfunction_sg_sR::synapse0x3a1be10() {
   return (neuron0x39f8a90()*0.079068);
}

double NNfunction_sg_sR::synapse0x3a1be50() {
   return (neuron0x39f8dd0()*-0.0216389);
}

double NNfunction_sg_sR::synapse0x3a1be90() {
   return (neuron0x39f9110()*0.25456);
}

double NNfunction_sg_sR::synapse0x3a1bed0() {
   return (neuron0x39f9450()*-0.0695993);
}

double NNfunction_sg_sR::synapse0x3a1bf10() {
   return (neuron0x39f9790()*0.0614893);
}

double NNfunction_sg_sR::synapse0x3a1bf50() {
   return (neuron0x39f9ad0()*-0.0143468);
}

double NNfunction_sg_sR::synapse0x3a1bf90() {
   return (neuron0x39f9e10()*0.00276986);
}

double NNfunction_sg_sR::synapse0x3a1bfd0() {
   return (neuron0x39fa150()*-0.050875);
}

double NNfunction_sg_sR::synapse0x3a1c010() {
   return (neuron0x39fa490()*-0.0324927);
}

double NNfunction_sg_sR::synapse0x3a1c050() {
   return (neuron0x39fa7d0()*-0.0212691);
}

double NNfunction_sg_sR::synapse0x3a1c090() {
   return (neuron0x39fab10()*-0.00242106);
}

double NNfunction_sg_sR::synapse0x3a1c0d0() {
   return (neuron0x39fae50()*0.14591);
}

double NNfunction_sg_sR::synapse0x3a1c110() {
   return (neuron0x39fb190()*-0.0295258);
}

double NNfunction_sg_sR::synapse0x3a1c150() {
   return (neuron0x39fb4d0()*-0.081512);
}

double NNfunction_sg_sR::synapse0x3a1c190() {
   return (neuron0x39fb810()*0.691121);
}

double NNfunction_sg_sR::synapse0x3a1bc20() {
   return (neuron0x39fbb50()*-0.00751389);
}

double NNfunction_sg_sR::synapse0x3a1bc60() {
   return (neuron0x39fc0b0()*0.00266575);
}

double NNfunction_sg_sR::synapse0x3a1c2e0() {
   return (neuron0x39fc2d0()*-0.247021);
}

double NNfunction_sg_sR::synapse0x3a1c320() {
   return (neuron0x39fc610()*-0.0389818);
}

double NNfunction_sg_sR::synapse0x3a1c360() {
   return (neuron0x39fc950()*-0.0390672);
}

double NNfunction_sg_sR::synapse0x3a1c3a0() {
   return (neuron0x39fcc90()*0.00858958);
}

double NNfunction_sg_sR::synapse0x3a1c3e0() {
   return (neuron0x39fcfd0()*-0.0247348);
}

double NNfunction_sg_sR::synapse0x3a1c420() {
   return (neuron0x39fd310()*-0.0515038);
}

double NNfunction_sg_sR::synapse0x3a1c7a0() {
   return (neuron0x39f87e0()*0.00927948);
}

double NNfunction_sg_sR::synapse0x3a1c7e0() {
   return (neuron0x39f8a90()*-0.00376996);
}

double NNfunction_sg_sR::synapse0x3a1c820() {
   return (neuron0x39f8dd0()*-0.00672428);
}

double NNfunction_sg_sR::synapse0x3a1c860() {
   return (neuron0x39f9110()*-0.982777);
}

double NNfunction_sg_sR::synapse0x3a1c8a0() {
   return (neuron0x39f9450()*0.000924108);
}

double NNfunction_sg_sR::synapse0x3a1c8e0() {
   return (neuron0x39f9790()*-0.00810849);
}

double NNfunction_sg_sR::synapse0x3a1c920() {
   return (neuron0x39f9ad0()*-0.00422449);
}

double NNfunction_sg_sR::synapse0x3a1c960() {
   return (neuron0x39f9e10()*-0.000748143);
}

double NNfunction_sg_sR::synapse0x3a1c9a0() {
   return (neuron0x39fa150()*-0.00237348);
}

double NNfunction_sg_sR::synapse0x3a1c9e0() {
   return (neuron0x39fa490()*0.000124214);
}

double NNfunction_sg_sR::synapse0x3a1ca20() {
   return (neuron0x39fa7d0()*0.01052);
}

double NNfunction_sg_sR::synapse0x3a1ca60() {
   return (neuron0x39fab10()*-0.0126558);
}

double NNfunction_sg_sR::synapse0x3a1caa0() {
   return (neuron0x39fae50()*-0.0254356);
}

double NNfunction_sg_sR::synapse0x3a1cae0() {
   return (neuron0x39fb190()*0.0161329);
}

double NNfunction_sg_sR::synapse0x3a1cb20() {
   return (neuron0x39fb4d0()*-0.0195122);
}

double NNfunction_sg_sR::synapse0x3a1cb60() {
   return (neuron0x39fb810()*-0.029068);
}

double NNfunction_sg_sR::synapse0x3a1c5f0() {
   return (neuron0x39fbb50()*0.00670014);
}

double NNfunction_sg_sR::synapse0x3a1c630() {
   return (neuron0x39fc0b0()*0.00343558);
}

double NNfunction_sg_sR::synapse0x3a0d160() {
   return (neuron0x39fc2d0()*0.154156);
}

double NNfunction_sg_sR::synapse0x3a0d1a0() {
   return (neuron0x39fc610()*0.0164546);
}

double NNfunction_sg_sR::synapse0x3a0d1e0() {
   return (neuron0x39fc950()*0.000354551);
}

double NNfunction_sg_sR::synapse0x3a0d220() {
   return (neuron0x39fcc90()*0.00114751);
}

double NNfunction_sg_sR::synapse0x3a0d260() {
   return (neuron0x39fcfd0()*0.00530677);
}

double NNfunction_sg_sR::synapse0x3a0d2a0() {
   return (neuron0x39fd310()*0.0032314);
}

double NNfunction_sg_sR::synapse0x3a0d620() {
   return (neuron0x39f87e0()*0.170751);
}

double NNfunction_sg_sR::synapse0x3a0d660() {
   return (neuron0x39f8a90()*0.0308108);
}

double NNfunction_sg_sR::synapse0x3a0d6a0() {
   return (neuron0x39f8dd0()*0.00119985);
}

double NNfunction_sg_sR::synapse0x3a0d6e0() {
   return (neuron0x39f9110()*0.563835);
}

double NNfunction_sg_sR::synapse0x3a0d720() {
   return (neuron0x39f9450()*0.00121809);
}

double NNfunction_sg_sR::synapse0x3a0d760() {
   return (neuron0x39f9790()*0.123642);
}

double NNfunction_sg_sR::synapse0x3a0d7a0() {
   return (neuron0x39f9ad0()*0.0848463);
}

double NNfunction_sg_sR::synapse0x3a0d7e0() {
   return (neuron0x39f9e10()*0.110367);
}

double NNfunction_sg_sR::synapse0x3a0d820() {
   return (neuron0x39fa150()*-0.20836);
}

double NNfunction_sg_sR::synapse0x3a0d860() {
   return (neuron0x39fa490()*-0.274797);
}

double NNfunction_sg_sR::synapse0x3a0d8a0() {
   return (neuron0x39fa7d0()*0.122619);
}

double NNfunction_sg_sR::synapse0x3a0d8e0() {
   return (neuron0x39fab10()*-0.282133);
}

double NNfunction_sg_sR::synapse0x3a0d920() {
   return (neuron0x39fae50()*-0.22349);
}

double NNfunction_sg_sR::synapse0x3a0d960() {
   return (neuron0x39fb190()*0.0481931);
}

double NNfunction_sg_sR::synapse0x3a0d9a0() {
   return (neuron0x39fb4d0()*-0.0292636);
}

double NNfunction_sg_sR::synapse0x3a0d9e0() {
   return (neuron0x39fb810()*0.0243293);
}

double NNfunction_sg_sR::synapse0x3a0d470() {
   return (neuron0x39fbb50()*-0.485985);
}

double NNfunction_sg_sR::synapse0x3a0d4b0() {
   return (neuron0x39fc0b0()*-0.414857);
}

double NNfunction_sg_sR::synapse0x3a0db30() {
   return (neuron0x39fc2d0()*0.903923);
}

double NNfunction_sg_sR::synapse0x3a0db70() {
   return (neuron0x39fc610()*-0.184276);
}

double NNfunction_sg_sR::synapse0x3a0dbb0() {
   return (neuron0x39fc950()*-0.117974);
}

double NNfunction_sg_sR::synapse0x3a0dbf0() {
   return (neuron0x39fcc90()*-0.0359581);
}

double NNfunction_sg_sR::synapse0x3a0dc30() {
   return (neuron0x39fcfd0()*0.0135173);
}

double NNfunction_sg_sR::synapse0x3a0dc70() {
   return (neuron0x39fd310()*0.211488);
}

double NNfunction_sg_sR::synapse0x3a0dff0() {
   return (neuron0x39f87e0()*0.0606668);
}

double NNfunction_sg_sR::synapse0x3a0e030() {
   return (neuron0x39f8a90()*-0.0483708);
}

double NNfunction_sg_sR::synapse0x3a0e070() {
   return (neuron0x39f8dd0()*0.0700248);
}

double NNfunction_sg_sR::synapse0x3a0e0b0() {
   return (neuron0x39f9110()*0.154282);
}

double NNfunction_sg_sR::synapse0x3a0e0f0() {
   return (neuron0x39f9450()*0.0481892);
}

double NNfunction_sg_sR::synapse0x3a0e130() {
   return (neuron0x39f9790()*-0.200041);
}

double NNfunction_sg_sR::synapse0x3a0e170() {
   return (neuron0x39f9ad0()*0.0122806);
}

double NNfunction_sg_sR::synapse0x3a0e1b0() {
   return (neuron0x39f9e10()*0.106789);
}

double NNfunction_sg_sR::synapse0x3a0e1f0() {
   return (neuron0x39fa150()*-0.0599497);
}

double NNfunction_sg_sR::synapse0x3a0e230() {
   return (neuron0x39fa490()*-0.0191511);
}

double NNfunction_sg_sR::synapse0x3a0e270() {
   return (neuron0x39fa7d0()*-0.191774);
}

double NNfunction_sg_sR::synapse0x3a0e2b0() {
   return (neuron0x39fab10()*0.136471);
}

double NNfunction_sg_sR::synapse0x3a0e2f0() {
   return (neuron0x39fae50()*0.264525);
}

double NNfunction_sg_sR::synapse0x3a0e330() {
   return (neuron0x39fb190()*-0.270033);
}

double NNfunction_sg_sR::synapse0x3a0e370() {
   return (neuron0x39fb4d0()*-0.150902);
}

double NNfunction_sg_sR::synapse0x3a0e3b0() {
   return (neuron0x39fb810()*-0.0143149);
}

double NNfunction_sg_sR::synapse0x3a0de40() {
   return (neuron0x39fbb50()*-0.0377731);
}

double NNfunction_sg_sR::synapse0x3a0de80() {
   return (neuron0x39fc0b0()*-0.0767511);
}

double NNfunction_sg_sR::synapse0x3a0e500() {
   return (neuron0x39fc2d0()*1.08335);
}

double NNfunction_sg_sR::synapse0x3a0e540() {
   return (neuron0x39fc610()*-0.310805);
}

double NNfunction_sg_sR::synapse0x3a0e580() {
   return (neuron0x39fc950()*0.0131675);
}

double NNfunction_sg_sR::synapse0x3a0e5c0() {
   return (neuron0x39fcc90()*-0.0487128);
}

double NNfunction_sg_sR::synapse0x3a0e600() {
   return (neuron0x39fcfd0()*-0.0321223);
}

double NNfunction_sg_sR::synapse0x3a0e640() {
   return (neuron0x39fd310()*0.0163072);
}

double NNfunction_sg_sR::synapse0x3a0e9c0() {
   return (neuron0x39f87e0()*0.0303528);
}

double NNfunction_sg_sR::synapse0x3a0ea00() {
   return (neuron0x39f8a90()*0.0195265);
}

double NNfunction_sg_sR::synapse0x3a0ea40() {
   return (neuron0x39f8dd0()*0.0589928);
}

double NNfunction_sg_sR::synapse0x3a0ea80() {
   return (neuron0x39f9110()*-0.951123);
}

double NNfunction_sg_sR::synapse0x3a0eac0() {
   return (neuron0x39f9450()*0.00778386);
}

double NNfunction_sg_sR::synapse0x3a0eb00() {
   return (neuron0x39f9790()*0.00800531);
}

double NNfunction_sg_sR::synapse0x3a0eb40() {
   return (neuron0x39f9ad0()*0.0242042);
}

double NNfunction_sg_sR::synapse0x3a0eb80() {
   return (neuron0x39f9e10()*-0.0330346);
}

double NNfunction_sg_sR::synapse0x3a0ebc0() {
   return (neuron0x39fa150()*0.0371418);
}

double NNfunction_sg_sR::synapse0x3a0ec00() {
   return (neuron0x39fa490()*0.0242008);
}

double NNfunction_sg_sR::synapse0x3a0ec40() {
   return (neuron0x39fa7d0()*-0.014745);
}

double NNfunction_sg_sR::synapse0x3a0ec80() {
   return (neuron0x39fab10()*0.101666);
}

double NNfunction_sg_sR::synapse0x3a0ecc0() {
   return (neuron0x39fae50()*0.0550868);
}

double NNfunction_sg_sR::synapse0x3a0ed00() {
   return (neuron0x39fb190()*-0.0341824);
}

double NNfunction_sg_sR::synapse0x3a0ed40() {
   return (neuron0x39fb4d0()*0.322585);
}

double NNfunction_sg_sR::synapse0x3a0ed80() {
   return (neuron0x39fb810()*0.175384);
}

double NNfunction_sg_sR::synapse0x3a0e810() {
   return (neuron0x39fbb50()*-0.0174056);
}

double NNfunction_sg_sR::synapse0x3a0e850() {
   return (neuron0x39fc0b0()*0.0400954);
}

double NNfunction_sg_sR::synapse0x3a0eed0() {
   return (neuron0x39fc2d0()*-0.0751513);
}

double NNfunction_sg_sR::synapse0x3a0ef10() {
   return (neuron0x39fc610()*0.0551316);
}

double NNfunction_sg_sR::synapse0x3a0ef50() {
   return (neuron0x39fc950()*0.0241502);
}

double NNfunction_sg_sR::synapse0x3a0ef90() {
   return (neuron0x39fcc90()*-0.0122494);
}

double NNfunction_sg_sR::synapse0x3a0efd0() {
   return (neuron0x39fcfd0()*-0.000991835);
}

double NNfunction_sg_sR::synapse0x3a0f010() {
   return (neuron0x39fd310()*0.00110376);
}

double NNfunction_sg_sR::synapse0x3a20ee0() {
   return (neuron0x39f87e0()*0.0417112);
}

double NNfunction_sg_sR::synapse0x3a20f20() {
   return (neuron0x39f8a90()*-0.0325657);
}

double NNfunction_sg_sR::synapse0x3a20f60() {
   return (neuron0x39f8dd0()*-0.00859175);
}

double NNfunction_sg_sR::synapse0x3a20fa0() {
   return (neuron0x39f9110()*-1.43735);
}

double NNfunction_sg_sR::synapse0x3a20fe0() {
   return (neuron0x39f9450()*0.0705131);
}

double NNfunction_sg_sR::synapse0x3a21020() {
   return (neuron0x39f9790()*0.0476997);
}

double NNfunction_sg_sR::synapse0x3a21060() {
   return (neuron0x39f9ad0()*0.0831511);
}

double NNfunction_sg_sR::synapse0x3a210a0() {
   return (neuron0x39f9e10()*-0.0282369);
}

double NNfunction_sg_sR::synapse0x3a210e0() {
   return (neuron0x39fa150()*-0.018043);
}

double NNfunction_sg_sR::synapse0x3a21120() {
   return (neuron0x39fa490()*0.00378826);
}

double NNfunction_sg_sR::synapse0x3a21160() {
   return (neuron0x39fa7d0()*-0.0525624);
}

double NNfunction_sg_sR::synapse0x3a211a0() {
   return (neuron0x39fab10()*0.300695);
}

double NNfunction_sg_sR::synapse0x3a211e0() {
   return (neuron0x39fae50()*0.314734);
}

double NNfunction_sg_sR::synapse0x3a21220() {
   return (neuron0x39fb190()*-0.0137462);
}

double NNfunction_sg_sR::synapse0x3a21260() {
   return (neuron0x39fb4d0()*0.30712);
}

double NNfunction_sg_sR::synapse0x3a212a0() {
   return (neuron0x39fb810()*0.302329);
}

double NNfunction_sg_sR::synapse0x3a0f050() {
   return (neuron0x39fbb50()*0.0291344);
}

double NNfunction_sg_sR::synapse0x3a0f090() {
   return (neuron0x39fc0b0()*0.127763);
}

double NNfunction_sg_sR::synapse0x3a213f0() {
   return (neuron0x39fc2d0()*-0.663216);
}

double NNfunction_sg_sR::synapse0x3a21430() {
   return (neuron0x39fc610()*0.103314);
}

double NNfunction_sg_sR::synapse0x3a21470() {
   return (neuron0x39fc950()*0.032014);
}

double NNfunction_sg_sR::synapse0x3a214b0() {
   return (neuron0x39fcc90()*-0.0243444);
}

double NNfunction_sg_sR::synapse0x3a214f0() {
   return (neuron0x39fcfd0()*-0.00158633);
}

double NNfunction_sg_sR::synapse0x3a21530() {
   return (neuron0x39fd310()*0.0100939);
}

double NNfunction_sg_sR::synapse0x3a218b0() {
   return (neuron0x39f87e0()*0.00371338);
}

double NNfunction_sg_sR::synapse0x3a218f0() {
   return (neuron0x39f8a90()*0.000566312);
}

double NNfunction_sg_sR::synapse0x3a21930() {
   return (neuron0x39f8dd0()*-0.00461336);
}

double NNfunction_sg_sR::synapse0x3a21970() {
   return (neuron0x39f9110()*-2.07001);
}

double NNfunction_sg_sR::synapse0x3a219b0() {
   return (neuron0x39f9450()*0.0057577);
}

double NNfunction_sg_sR::synapse0x3a219f0() {
   return (neuron0x39f9790()*0.00664667);
}

double NNfunction_sg_sR::synapse0x3a21a30() {
   return (neuron0x39f9ad0()*0.00385078);
}

double NNfunction_sg_sR::synapse0x3a21a70() {
   return (neuron0x39f9e10()*0.00944562);
}

double NNfunction_sg_sR::synapse0x3a21ab0() {
   return (neuron0x39fa150()*-0.00729977);
}

double NNfunction_sg_sR::synapse0x3a21af0() {
   return (neuron0x39fa490()*-0.0032127);
}

double NNfunction_sg_sR::synapse0x3a21b30() {
   return (neuron0x39fa7d0()*0.00488293);
}

double NNfunction_sg_sR::synapse0x3a21b70() {
   return (neuron0x39fab10()*0.0298366);
}

double NNfunction_sg_sR::synapse0x3a21bb0() {
   return (neuron0x39fae50()*0.0294975);
}

double NNfunction_sg_sR::synapse0x3a21bf0() {
   return (neuron0x39fb190()*0.00577351);
}

double NNfunction_sg_sR::synapse0x3a21c30() {
   return (neuron0x39fb4d0()*-0.000898816);
}

double NNfunction_sg_sR::synapse0x3a21c70() {
   return (neuron0x39fb810()*0.012487);
}

double NNfunction_sg_sR::synapse0x3a21700() {
   return (neuron0x39fbb50()*-0.00170119);
}

double NNfunction_sg_sR::synapse0x3a21740() {
   return (neuron0x39fc0b0()*0.0172364);
}

double NNfunction_sg_sR::synapse0x3a21dc0() {
   return (neuron0x39fc2d0()*0.169746);
}

double NNfunction_sg_sR::synapse0x3a21e00() {
   return (neuron0x39fc610()*0.00759701);
}

double NNfunction_sg_sR::synapse0x3a21e40() {
   return (neuron0x39fc950()*0.00760235);
}

double NNfunction_sg_sR::synapse0x3a21e80() {
   return (neuron0x39fcc90()*0.00204129);
}

double NNfunction_sg_sR::synapse0x3a21ec0() {
   return (neuron0x39fcfd0()*0.00368056);
}

double NNfunction_sg_sR::synapse0x3a21f00() {
   return (neuron0x39fd310()*-4.49558e-05);
}

double NNfunction_sg_sR::synapse0x3a22280() {
   return (neuron0x39f87e0()*0.0817799);
}

double NNfunction_sg_sR::synapse0x3a222c0() {
   return (neuron0x39f8a90()*0.196092);
}

double NNfunction_sg_sR::synapse0x3a22300() {
   return (neuron0x39f8dd0()*0.0662029);
}

double NNfunction_sg_sR::synapse0x3a22340() {
   return (neuron0x39f9110()*-0.378798);
}

double NNfunction_sg_sR::synapse0x3a22380() {
   return (neuron0x39f9450()*0.152938);
}

double NNfunction_sg_sR::synapse0x3a223c0() {
   return (neuron0x39f9790()*-0.202555);
}

double NNfunction_sg_sR::synapse0x3a22400() {
   return (neuron0x39f9ad0()*-0.0223702);
}

double NNfunction_sg_sR::synapse0x3a22440() {
   return (neuron0x39f9e10()*0.0296054);
}

double NNfunction_sg_sR::synapse0x3a22480() {
   return (neuron0x39fa150()*0.0197743);
}

double NNfunction_sg_sR::synapse0x3a224c0() {
   return (neuron0x39fa490()*0.00400058);
}

double NNfunction_sg_sR::synapse0x3a22500() {
   return (neuron0x39fa7d0()*-0.000906916);
}

double NNfunction_sg_sR::synapse0x3a22540() {
   return (neuron0x39fab10()*-0.412189);
}

double NNfunction_sg_sR::synapse0x3a22580() {
   return (neuron0x39fae50()*-0.277429);
}

double NNfunction_sg_sR::synapse0x3a225c0() {
   return (neuron0x39fb190()*0.120288);
}

double NNfunction_sg_sR::synapse0x3a22600() {
   return (neuron0x39fb4d0()*0.254259);
}

double NNfunction_sg_sR::synapse0x3a22640() {
   return (neuron0x39fb810()*-0.024855);
}

double NNfunction_sg_sR::synapse0x3a220d0() {
   return (neuron0x39fbb50()*0.205491);
}

double NNfunction_sg_sR::synapse0x3a22110() {
   return (neuron0x39fc0b0()*-0.12877);
}

double NNfunction_sg_sR::synapse0x3a22790() {
   return (neuron0x39fc2d0()*0.492507);
}

double NNfunction_sg_sR::synapse0x3a227d0() {
   return (neuron0x39fc610()*-0.00223508);
}

double NNfunction_sg_sR::synapse0x3a22810() {
   return (neuron0x39fc950()*-0.0235705);
}

double NNfunction_sg_sR::synapse0x3a22850() {
   return (neuron0x39fcc90()*0.059152);
}

double NNfunction_sg_sR::synapse0x3a22890() {
   return (neuron0x39fcfd0()*0.0581384);
}

double NNfunction_sg_sR::synapse0x3a228d0() {
   return (neuron0x39fd310()*0.00220319);
}

double NNfunction_sg_sR::synapse0x3a22c50() {
   return (neuron0x39f87e0()*0.00653907);
}

double NNfunction_sg_sR::synapse0x3a22c90() {
   return (neuron0x39f8a90()*0.00379409);
}

double NNfunction_sg_sR::synapse0x3a22cd0() {
   return (neuron0x39f8dd0()*-0.00479717);
}

double NNfunction_sg_sR::synapse0x3a22d10() {
   return (neuron0x39f9110()*-5.57153);
}

double NNfunction_sg_sR::synapse0x3a22d50() {
   return (neuron0x39f9450()*0.0139502);
}

double NNfunction_sg_sR::synapse0x3a22d90() {
   return (neuron0x39f9790()*0.004604);
}

double NNfunction_sg_sR::synapse0x3a22dd0() {
   return (neuron0x39f9ad0()*0.0138093);
}

double NNfunction_sg_sR::synapse0x3a22e10() {
   return (neuron0x39f9e10()*0.00200244);
}

double NNfunction_sg_sR::synapse0x3a22e50() {
   return (neuron0x39fa150()*-0.00160675);
}

double NNfunction_sg_sR::synapse0x3a22e90() {
   return (neuron0x39fa490()*-0.000745261);
}

double NNfunction_sg_sR::synapse0x3a22ed0() {
   return (neuron0x39fa7d0()*0.00117187);
}

double NNfunction_sg_sR::synapse0x3a22f10() {
   return (neuron0x39fab10()*-0.000764277);
}

double NNfunction_sg_sR::synapse0x3a22f50() {
   return (neuron0x39fae50()*-0.0143324);
}

double NNfunction_sg_sR::synapse0x3a22f90() {
   return (neuron0x39fb190()*-0.00737259);
}

double NNfunction_sg_sR::synapse0x3a22fd0() {
   return (neuron0x39fb4d0()*0.00311394);
}

double NNfunction_sg_sR::synapse0x3a23010() {
   return (neuron0x39fb810()*-0.00499427);
}

double NNfunction_sg_sR::synapse0x3a22aa0() {
   return (neuron0x39fbb50()*0.00923811);
}

double NNfunction_sg_sR::synapse0x3a22ae0() {
   return (neuron0x39fc0b0()*0.00327071);
}

double NNfunction_sg_sR::synapse0x3a23160() {
   return (neuron0x39fc2d0()*-0.0694476);
}

double NNfunction_sg_sR::synapse0x3a231a0() {
   return (neuron0x39fc610()*-0.0071534);
}

double NNfunction_sg_sR::synapse0x3a231e0() {
   return (neuron0x39fc950()*-0.00936443);
}

double NNfunction_sg_sR::synapse0x3a23220() {
   return (neuron0x39fcc90()*-0.000268064);
}

double NNfunction_sg_sR::synapse0x3a23260() {
   return (neuron0x39fcfd0()*0.00102115);
}

double NNfunction_sg_sR::synapse0x3a232a0() {
   return (neuron0x39fd310()*-0.000290808);
}

double NNfunction_sg_sR::synapse0x37c3080() {
   return (neuron0x39fd780()*-0.272137);
}

double NNfunction_sg_sR::synapse0x37c30c0() {
   return (neuron0x39fe0d0()*0.14729);
}

double NNfunction_sg_sR::synapse0x39ffc40() {
   return (neuron0x39febb0()*0.500908);
}

double NNfunction_sg_sR::synapse0x39ffc80() {
   return (neuron0x39fe650()*0.583386);
}

double NNfunction_sg_sR::synapse0x3a01720() {
   return (neuron0x39ff990()*-0.173996);
}

double NNfunction_sg_sR::synapse0x3a01760() {
   return (neuron0x3a01470()*1.43215);
}

double NNfunction_sg_sR::synapse0x3a024f0() {
   return (neuron0x3a02240()*0.251257);
}

double NNfunction_sg_sR::synapse0x3a02530() {
   return (neuron0x3a02c10()*0.339014);
}

double NNfunction_sg_sR::synapse0x3a02ec0() {
   return (neuron0x3a035e0()*0.140386);
}

double NNfunction_sg_sR::synapse0x3a02f00() {
   return (neuron0x3a040c0()*-0.275449);
}

double NNfunction_sg_sR::synapse0x3a03890() {
   return (neuron0x3a04a90()*0.676507);
}

double NNfunction_sg_sR::synapse0x3a038d0() {
   return (neuron0x3a01b70()*0.205612);
}

double NNfunction_sg_sR::synapse0x3a04370() {
   return (neuron0x3a06640()*-0.170545);
}

double NNfunction_sg_sR::synapse0x3a043b0() {
   return (neuron0x3a07010()*-0.885682);
}

double NNfunction_sg_sR::synapse0x3a04d40() {
   return (neuron0x3a079e0()*0.418795);
}

double NNfunction_sg_sR::synapse0x3a04d80() {
   return (neuron0x3a083b0()*-0.317795);
}

double NNfunction_sg_sR::synapse0x3a01e20() {
   return (neuron0x3a0a1c0()*0.0425975);
}

double NNfunction_sg_sR::synapse0x3a01e60() {
   return (neuron0x3a0a4a0()*-0.0501084);
}

double NNfunction_sg_sR::synapse0x3a068f0() {
   return (neuron0x3a0ae70()*-0.536406);
}

double NNfunction_sg_sR::synapse0x3a06930() {
   return (neuron0x3a0b840()*0.149808);
}

double NNfunction_sg_sR::synapse0x3a072c0() {
   return (neuron0x3a0c210()*0.318973);
}

double NNfunction_sg_sR::synapse0x3a07300() {
   return (neuron0x3a0cbe0()*0.162204);
}

double NNfunction_sg_sR::synapse0x3a07c90() {
   return (neuron0x3a05730()*-0.888394);
}

double NNfunction_sg_sR::synapse0x3a07cd0() {
   return (neuron0x3a06100()*0.295375);
}

double NNfunction_sg_sR::synapse0x3a08660() {
   return (neuron0x3a0f970()*-0.752161);
}

double NNfunction_sg_sR::synapse0x3a086a0() {
   return (neuron0x3a10340()*-0.00502405);
}

double NNfunction_sg_sR::synapse0x39fb6f0() {
   return (neuron0x3a10d10()*0.51421);
}

double NNfunction_sg_sR::synapse0x39fb730() {
   return (neuron0x3a116e0()*0.100124);
}

double NNfunction_sg_sR::synapse0x3a0a750() {
   return (neuron0x3a120b0()*1.026);
}

double NNfunction_sg_sR::synapse0x3a0a790() {
   return (neuron0x3a12a80()*-0.445889);
}

double NNfunction_sg_sR::synapse0x3a0b120() {
   return (neuron0x3a13450()*-0.085336);
}

double NNfunction_sg_sR::synapse0x3a0b160() {
   return (neuron0x3a13e20()*0.333051);
}

double NNfunction_sg_sR::synapse0x3a0baf0() {
   return (neuron0x3a09eb0()*1.00441);
}

double NNfunction_sg_sR::synapse0x3a0bb30() {
   return (neuron0x3a16a00()*-0.154258);
}

double NNfunction_sg_sR::synapse0x3a0c4c0() {
   return (neuron0x3a173d0()*-1.05718);
}

double NNfunction_sg_sR::synapse0x3a0c500() {
   return (neuron0x3a17da0()*-0.665218);
}

double NNfunction_sg_sR::synapse0x3a0ce90() {
   return (neuron0x3a18770()*-0.000559258);
}

double NNfunction_sg_sR::synapse0x3a0ced0() {
   return (neuron0x3a19140()*-0.43821);
}

double NNfunction_sg_sR::synapse0x3a059e0() {
   return (neuron0x3a19b10()*-0.4551);
}

double NNfunction_sg_sR::synapse0x3a05a20() {
   return (neuron0x3a1a4e0()*1.11829);
}

double NNfunction_sg_sR::synapse0x3a0f290() {
   return (neuron0x3a1aeb0()*0.265363);
}

double NNfunction_sg_sR::synapse0x3a0f2d0() {
   return (neuron0x3a1ba90()*-0.00625872);
}

double NNfunction_sg_sR::synapse0x3a0fc20() {
   return (neuron0x3a1c460()*1.05096);
}

double NNfunction_sg_sR::synapse0x3a0fc60() {
   return (neuron0x3a0d2e0()*0.336053);
}

double NNfunction_sg_sR::synapse0x3a105f0() {
   return (neuron0x3a0dcb0()*-0.0872245);
}

double NNfunction_sg_sR::synapse0x3a10630() {
   return (neuron0x3a0e680()*0.631447);
}

double NNfunction_sg_sR::synapse0x3a10fc0() {
   return (neuron0x3a20cc0()*-0.413549);
}

double NNfunction_sg_sR::synapse0x3a11000() {
   return (neuron0x3a21570()*0.855225);
}

double NNfunction_sg_sR::synapse0x3a11990() {
   return (neuron0x3a21f40()*-0.0571711);
}

double NNfunction_sg_sR::synapse0x3a119d0() {
   return (neuron0x3a22910()*-0.833943);
}

double NNfunction_sg_sR::synapse0x3a140d0() {
   return (neuron0x39fd780()*-0.0409656);
}

double NNfunction_sg_sR::synapse0x3a14110() {
   return (neuron0x39fe0d0()*0.0739314);
}

double NNfunction_sg_sR::synapse0x3a09690() {
   return (neuron0x39febb0()*0.0877679);
}

double NNfunction_sg_sR::synapse0x3a096d0() {
   return (neuron0x39fe650()*-0.309462);
}

double NNfunction_sg_sR::synapse0x3a16cb0() {
   return (neuron0x39ff990()*0.0651281);
}

double NNfunction_sg_sR::synapse0x3a16cf0() {
   return (neuron0x3a01470()*0.579901);
}

double NNfunction_sg_sR::synapse0x3a17680() {
   return (neuron0x3a02240()*-0.0298321);
}

double NNfunction_sg_sR::synapse0x3a176c0() {
   return (neuron0x3a02c10()*-0.211028);
}

double NNfunction_sg_sR::synapse0x3a18050() {
   return (neuron0x3a035e0()*-0.0164093);
}

double NNfunction_sg_sR::synapse0x3a18090() {
   return (neuron0x3a040c0()*0.143447);
}

double NNfunction_sg_sR::synapse0x3a18a20() {
   return (neuron0x3a04a90()*-1.47184);
}

double NNfunction_sg_sR::synapse0x3a18a60() {
   return (neuron0x3a01b70()*-0.166873);
}

double NNfunction_sg_sR::synapse0x3a193f0() {
   return (neuron0x3a06640()*0.0600058);
}

double NNfunction_sg_sR::synapse0x3a19430() {
   return (neuron0x3a07010()*-0.667322);
}

double NNfunction_sg_sR::synapse0x3a19dc0() {
   return (neuron0x3a079e0()*-0.0117722);
}

double NNfunction_sg_sR::synapse0x3a19e00() {
   return (neuron0x3a083b0()*-0.0837291);
}

double NNfunction_sg_sR::synapse0x3a1a790() {
   return (neuron0x3a0a1c0()*-0.0247871);
}

double NNfunction_sg_sR::synapse0x3a1a7d0() {
   return (neuron0x3a0a4a0()*0.0821748);
}

double NNfunction_sg_sR::synapse0x3a1b160() {
   return (neuron0x3a0ae70()*-0.120341);
}

double NNfunction_sg_sR::synapse0x3a1b1a0() {
   return (neuron0x3a0b840()*1.63938);
}

double NNfunction_sg_sR::synapse0x3a1bd40() {
   return (neuron0x3a0c210()*0.0587847);
}

double NNfunction_sg_sR::synapse0x3a1bd80() {
   return (neuron0x3a0cbe0()*0.0091274);
}

double NNfunction_sg_sR::synapse0x3a1c710() {
   return (neuron0x3a05730()*1.07622);
}

double NNfunction_sg_sR::synapse0x3a1c750() {
   return (neuron0x3a06100()*0.0814074);
}

double NNfunction_sg_sR::synapse0x3a0d590() {
   return (neuron0x3a0f970()*-0.336148);
}

double NNfunction_sg_sR::synapse0x3a0d5d0() {
   return (neuron0x3a10340()*0.104742);
}

double NNfunction_sg_sR::synapse0x3a0df60() {
   return (neuron0x3a10d10()*-0.204897);
}

double NNfunction_sg_sR::synapse0x3a0dfa0() {
   return (neuron0x3a116e0()*-0.0598801);
}

double NNfunction_sg_sR::synapse0x3a0e930() {
   return (neuron0x3a120b0()*0.397179);
}

double NNfunction_sg_sR::synapse0x3a0e970() {
   return (neuron0x3a12a80()*-0.479076);
}

double NNfunction_sg_sR::synapse0x3a20e50() {
   return (neuron0x3a13450()*-0.0446439);
}

double NNfunction_sg_sR::synapse0x3a20e90() {
   return (neuron0x3a13e20()*0.0898378);
}

double NNfunction_sg_sR::synapse0x3a21820() {
   return (neuron0x3a09eb0()*-0.67482);
}

double NNfunction_sg_sR::synapse0x3a21860() {
   return (neuron0x3a16a00()*0.181343);
}

double NNfunction_sg_sR::synapse0x3a221f0() {
   return (neuron0x3a173d0()*-0.426184);
}

double NNfunction_sg_sR::synapse0x3a22230() {
   return (neuron0x3a17da0()*2.41926);
}

double NNfunction_sg_sR::synapse0x3a22bc0() {
   return (neuron0x3a18770()*0.0576551);
}

double NNfunction_sg_sR::synapse0x3a22c00() {
   return (neuron0x3a19140()*0.543908);
}

double NNfunction_sg_sR::synapse0x39fda30() {
   return (neuron0x3a19b10()*-3.90849);
}

double NNfunction_sg_sR::synapse0x39fda70() {
   return (neuron0x3a1a4e0()*0.283845);
}

double NNfunction_sg_sR::synapse0x3a12360() {
   return (neuron0x3a1aeb0()*-0.603883);
}

double NNfunction_sg_sR::synapse0x3a123a0() {
   return (neuron0x3a1ba90()*-0.277676);
}

double NNfunction_sg_sR::synapse0x3a232e0() {
   return (neuron0x3a1c460()*0.713911);
}

double NNfunction_sg_sR::synapse0x3a23320() {
   return (neuron0x3a0d2e0()*-0.0728534);
}

double NNfunction_sg_sR::synapse0x3a23360() {
   return (neuron0x3a0dcb0()*0.214303);
}

double NNfunction_sg_sR::synapse0x3a233a0() {
   return (neuron0x3a0e680()*0.263254);
}

double NNfunction_sg_sR::synapse0x3a2a250() {
   return (neuron0x3a20cc0()*0.684681);
}

double NNfunction_sg_sR::synapse0x3a2a290() {
   return (neuron0x3a21570()*0.399744);
}

double NNfunction_sg_sR::synapse0x3a2a2d0() {
   return (neuron0x3a21f40()*0.253749);
}

double NNfunction_sg_sR::synapse0x3a2a310() {
   return (neuron0x3a22910()*0.702089);
}

double NNfunction_sg_sR::synapse0x3a2a690() {
   return (neuron0x39fd780()*0.296215);
}

double NNfunction_sg_sR::synapse0x3a2a6d0() {
   return (neuron0x39fe0d0()*0.530098);
}

double NNfunction_sg_sR::synapse0x3a2a710() {
   return (neuron0x39febb0()*0.492165);
}

double NNfunction_sg_sR::synapse0x3a2a750() {
   return (neuron0x39fe650()*-0.0320725);
}

double NNfunction_sg_sR::synapse0x3a2a790() {
   return (neuron0x39ff990()*0.248504);
}

double NNfunction_sg_sR::synapse0x3a2a7d0() {
   return (neuron0x3a01470()*1.36148);
}

double NNfunction_sg_sR::synapse0x3a2a810() {
   return (neuron0x3a02240()*-0.171796);
}

double NNfunction_sg_sR::synapse0x3a2a850() {
   return (neuron0x3a02c10()*0.0148099);
}

double NNfunction_sg_sR::synapse0x3a2a890() {
   return (neuron0x3a035e0()*-0.306015);
}

double NNfunction_sg_sR::synapse0x3a2a8d0() {
   return (neuron0x3a040c0()*0.423997);
}

double NNfunction_sg_sR::synapse0x3a2a910() {
   return (neuron0x3a04a90()*-0.501967);
}

double NNfunction_sg_sR::synapse0x3a2a950() {
   return (neuron0x3a01b70()*0.119577);
}

double NNfunction_sg_sR::synapse0x3a2a990() {
   return (neuron0x3a06640()*-0.223972);
}

double NNfunction_sg_sR::synapse0x3a2a9d0() {
   return (neuron0x3a07010()*-0.0744363);
}

double NNfunction_sg_sR::synapse0x3a2aa10() {
   return (neuron0x3a079e0()*0.0827008);
}

double NNfunction_sg_sR::synapse0x3a2aa50() {
   return (neuron0x3a083b0()*-0.536909);
}

double NNfunction_sg_sR::synapse0x3a2a4e0() {
   return (neuron0x3a0a1c0()*0.274143);
}

double NNfunction_sg_sR::synapse0x3a2a520() {
   return (neuron0x3a0a4a0()*0.208997);
}

double NNfunction_sg_sR::synapse0x3a2aba0() {
   return (neuron0x3a0ae70()*0.176459);
}

double NNfunction_sg_sR::synapse0x3a2abe0() {
   return (neuron0x3a0b840()*-2.10097);
}

double NNfunction_sg_sR::synapse0x3a2ac20() {
   return (neuron0x3a0c210()*-0.266274);
}

double NNfunction_sg_sR::synapse0x3a2ac60() {
   return (neuron0x3a0cbe0()*-0.502222);
}

double NNfunction_sg_sR::synapse0x3a2aca0() {
   return (neuron0x3a05730()*-1.75237);
}

double NNfunction_sg_sR::synapse0x3a2ace0() {
   return (neuron0x3a06100()*-0.43186);
}

double NNfunction_sg_sR::synapse0x3a2ad20() {
   return (neuron0x3a0f970()*0.000756605);
}

double NNfunction_sg_sR::synapse0x3a2ad60() {
   return (neuron0x3a10340()*-0.196455);
}

double NNfunction_sg_sR::synapse0x3a2ada0() {
   return (neuron0x3a10d10()*-0.121753);
}

double NNfunction_sg_sR::synapse0x3a2ade0() {
   return (neuron0x3a116e0()*0.531085);
}

double NNfunction_sg_sR::synapse0x3a2ae20() {
   return (neuron0x3a120b0()*-1.32988);
}

double NNfunction_sg_sR::synapse0x3a2ae60() {
   return (neuron0x3a12a80()*-0.794701);
}

double NNfunction_sg_sR::synapse0x3a2aea0() {
   return (neuron0x3a13450()*-0.0679252);
}

double NNfunction_sg_sR::synapse0x3a2aee0() {
   return (neuron0x3a13e20()*-0.205691);
}

double NNfunction_sg_sR::synapse0x3a2aa90() {
   return (neuron0x3a09eb0()*0.240078);
}

double NNfunction_sg_sR::synapse0x3a2aad0() {
   return (neuron0x3a16a00()*0.363661);
}

double NNfunction_sg_sR::synapse0x3a2ab10() {
   return (neuron0x3a173d0()*-0.29605);
}

double NNfunction_sg_sR::synapse0x3a2ab50() {
   return (neuron0x3a17da0()*0.0451764);
}

double NNfunction_sg_sR::synapse0x3a2b130() {
   return (neuron0x3a18770()*-0.293417);
}

double NNfunction_sg_sR::synapse0x3a2b170() {
   return (neuron0x3a19140()*0.208906);
}

double NNfunction_sg_sR::synapse0x3a2b1b0() {
   return (neuron0x3a19b10()*-4.51524);
}

double NNfunction_sg_sR::synapse0x3a2b1f0() {
   return (neuron0x3a1a4e0()*1.70352);
}

double NNfunction_sg_sR::synapse0x3a2b230() {
   return (neuron0x3a1aeb0()*-0.295894);
}

double NNfunction_sg_sR::synapse0x3a2b270() {
   return (neuron0x3a1ba90()*0.364719);
}

double NNfunction_sg_sR::synapse0x3a2b2b0() {
   return (neuron0x3a1c460()*0.933512);
}

double NNfunction_sg_sR::synapse0x3a2b2f0() {
   return (neuron0x3a0d2e0()*-0.242791);
}

double NNfunction_sg_sR::synapse0x3a2b330() {
   return (neuron0x3a0dcb0()*0.226339);
}

double NNfunction_sg_sR::synapse0x3a2b370() {
   return (neuron0x3a0e680()*0.839477);
}

double NNfunction_sg_sR::synapse0x3a2b3b0() {
   return (neuron0x3a20cc0()*1.04315);
}

double NNfunction_sg_sR::synapse0x3a2b3f0() {
   return (neuron0x3a21570()*1.14558);
}

double NNfunction_sg_sR::synapse0x3a2b430() {
   return (neuron0x3a21f40()*-0.0966745);
}

double NNfunction_sg_sR::synapse0x3a2b470() {
   return (neuron0x3a22910()*1.11727);
}

double NNfunction_sg_sR::synapse0x3a2b7f0() {
   return (neuron0x39fd780()*0.0100182);
}

double NNfunction_sg_sR::synapse0x3a2b830() {
   return (neuron0x39fe0d0()*0.0417261);
}

double NNfunction_sg_sR::synapse0x3a2b870() {
   return (neuron0x39febb0()*0.0913548);
}

double NNfunction_sg_sR::synapse0x3a2b8b0() {
   return (neuron0x39fe650()*-0.0373615);
}

double NNfunction_sg_sR::synapse0x3a2b8f0() {
   return (neuron0x39ff990()*-0.0173098);
}

double NNfunction_sg_sR::synapse0x3a2b930() {
   return (neuron0x3a01470()*0.450897);
}

double NNfunction_sg_sR::synapse0x3a2b970() {
   return (neuron0x3a02240()*-0.105309);
}

double NNfunction_sg_sR::synapse0x3a2b9b0() {
   return (neuron0x3a02c10()*0.155462);
}

double NNfunction_sg_sR::synapse0x3a2b9f0() {
   return (neuron0x3a035e0()*-0.0680466);
}

double NNfunction_sg_sR::synapse0x3a2ba30() {
   return (neuron0x3a040c0()*0.0170756);
}

double NNfunction_sg_sR::synapse0x3a2ba70() {
   return (neuron0x3a04a90()*0.801683);
}

double NNfunction_sg_sR::synapse0x3a2bab0() {
   return (neuron0x3a01b70()*0.170796);
}

double NNfunction_sg_sR::synapse0x3a2baf0() {
   return (neuron0x3a06640()*-0.0379977);
}

double NNfunction_sg_sR::synapse0x3a2bb30() {
   return (neuron0x3a07010()*0.0114169);
}

double NNfunction_sg_sR::synapse0x3a2bb70() {
   return (neuron0x3a079e0()*0.0830885);
}

double NNfunction_sg_sR::synapse0x3a2bbb0() {
   return (neuron0x3a083b0()*-0.0604817);
}

double NNfunction_sg_sR::synapse0x3a2b640() {
   return (neuron0x3a0a1c0()*0.0826381);
}

double NNfunction_sg_sR::synapse0x3a2b680() {
   return (neuron0x3a0a4a0()*0.0133723);
}

double NNfunction_sg_sR::synapse0x3a2bd00() {
   return (neuron0x3a0ae70()*-0.0911137);
}

double NNfunction_sg_sR::synapse0x3a2bd40() {
   return (neuron0x3a0b840()*0.560035);
}

double NNfunction_sg_sR::synapse0x3a2bd80() {
   return (neuron0x3a0c210()*0.0109392);
}

double NNfunction_sg_sR::synapse0x3a2bdc0() {
   return (neuron0x3a0cbe0()*-0.20057);
}

double NNfunction_sg_sR::synapse0x3a2be00() {
   return (neuron0x3a05730()*1.11357);
}

double NNfunction_sg_sR::synapse0x3a2be40() {
   return (neuron0x3a06100()*-0.105827);
}

double NNfunction_sg_sR::synapse0x3a2be80() {
   return (neuron0x3a0f970()*-0.0211749);
}

double NNfunction_sg_sR::synapse0x3a2bec0() {
   return (neuron0x3a10340()*-0.0815089);
}

double NNfunction_sg_sR::synapse0x3a2bf00() {
   return (neuron0x3a10d10()*0.0739803);
}

double NNfunction_sg_sR::synapse0x3a2bf40() {
   return (neuron0x3a116e0()*0.0835091);
}

double NNfunction_sg_sR::synapse0x3a2bf80() {
   return (neuron0x3a120b0()*-0.0653794);
}

double NNfunction_sg_sR::synapse0x3a2bfc0() {
   return (neuron0x3a12a80()*0.14465);
}

double NNfunction_sg_sR::synapse0x3a2c000() {
   return (neuron0x3a13450()*0.00288281);
}

double NNfunction_sg_sR::synapse0x3a2c040() {
   return (neuron0x3a13e20()*-0.160144);
}

double NNfunction_sg_sR::synapse0x3a2bbf0() {
   return (neuron0x3a09eb0()*1.5349);
}

double NNfunction_sg_sR::synapse0x3a2bc30() {
   return (neuron0x3a16a00()*-0.0326067);
}

double NNfunction_sg_sR::synapse0x3a2bc70() {
   return (neuron0x3a173d0()*-1.46793);
}

double NNfunction_sg_sR::synapse0x3a2bcb0() {
   return (neuron0x3a17da0()*-1.92935);
}

double NNfunction_sg_sR::synapse0x3a2c290() {
   return (neuron0x3a18770()*-0.0306115);
}

double NNfunction_sg_sR::synapse0x3a2c2d0() {
   return (neuron0x3a19140()*-0.135693);
}

double NNfunction_sg_sR::synapse0x3a2c310() {
   return (neuron0x3a19b10()*-0.0984129);
}

double NNfunction_sg_sR::synapse0x3a2c350() {
   return (neuron0x3a1a4e0()*2.43404);
}

double NNfunction_sg_sR::synapse0x3a2c390() {
   return (neuron0x3a1aeb0()*-0.00355165);
}

double NNfunction_sg_sR::synapse0x3a2c3d0() {
   return (neuron0x3a1ba90()*0.319978);
}

double NNfunction_sg_sR::synapse0x3a2c410() {
   return (neuron0x3a1c460()*2.15322);
}

double NNfunction_sg_sR::synapse0x3a2c450() {
   return (neuron0x3a0d2e0()*0.0167349);
}

double NNfunction_sg_sR::synapse0x3a2c490() {
   return (neuron0x3a0dcb0()*-0.157022);
}

double NNfunction_sg_sR::synapse0x3a2c4d0() {
   return (neuron0x3a0e680()*0.168807);
}

double NNfunction_sg_sR::synapse0x3a2c510() {
   return (neuron0x3a20cc0()*-0.134171);
}

double NNfunction_sg_sR::synapse0x3a2c550() {
   return (neuron0x3a21570()*1.27824);
}

double NNfunction_sg_sR::synapse0x3a2c590() {
   return (neuron0x3a21f40()*-0.195928);
}

double NNfunction_sg_sR::synapse0x3a2c5d0() {
   return (neuron0x3a22910()*-1.95258);
}

double NNfunction_sg_sR::synapse0x3a2c950() {
   return (neuron0x39fd780()*0.0206737);
}

double NNfunction_sg_sR::synapse0x3a2c990() {
   return (neuron0x39fe0d0()*-0.091899);
}

double NNfunction_sg_sR::synapse0x3a2c9d0() {
   return (neuron0x39febb0()*-0.176049);
}

double NNfunction_sg_sR::synapse0x3a2ca10() {
   return (neuron0x39fe650()*0.330239);
}

double NNfunction_sg_sR::synapse0x3a2ca50() {
   return (neuron0x39ff990()*0.0106158);
}

double NNfunction_sg_sR::synapse0x3a2ca90() {
   return (neuron0x3a01470()*-0.181719);
}

double NNfunction_sg_sR::synapse0x3a2cad0() {
   return (neuron0x3a02240()*0.0751981);
}

double NNfunction_sg_sR::synapse0x3a2cb10() {
   return (neuron0x3a02c10()*-0.218425);
}

double NNfunction_sg_sR::synapse0x3a2cb50() {
   return (neuron0x3a035e0()*0.0686955);
}

double NNfunction_sg_sR::synapse0x3a2cb90() {
   return (neuron0x3a040c0()*0.0293987);
}

double NNfunction_sg_sR::synapse0x3a2cbd0() {
   return (neuron0x3a04a90()*-0.00771922);
}

double NNfunction_sg_sR::synapse0x3a2cc10() {
   return (neuron0x3a01b70()*-0.228665);
}

double NNfunction_sg_sR::synapse0x3a2cc50() {
   return (neuron0x3a06640()*0.0828958);
}

double NNfunction_sg_sR::synapse0x3a2cc90() {
   return (neuron0x3a07010()*0.10783);
}

double NNfunction_sg_sR::synapse0x3a2ccd0() {
   return (neuron0x3a079e0()*-0.122834);
}

double NNfunction_sg_sR::synapse0x3a2cd10() {
   return (neuron0x3a083b0()*0.123558);
}

double NNfunction_sg_sR::synapse0x3a2c7a0() {
   return (neuron0x3a0a1c0()*-0.0943231);
}

double NNfunction_sg_sR::synapse0x3a2c7e0() {
   return (neuron0x3a0a4a0()*-0.00883973);
}

double NNfunction_sg_sR::synapse0x3a2ce60() {
   return (neuron0x3a0ae70()*0.148173);
}

double NNfunction_sg_sR::synapse0x3a2cea0() {
   return (neuron0x3a0b840()*-0.848963);
}

double NNfunction_sg_sR::synapse0x3a2cee0() {
   return (neuron0x3a0c210()*-0.0137133);
}

double NNfunction_sg_sR::synapse0x3a2cf20() {
   return (neuron0x3a0cbe0()*0.233686);
}

double NNfunction_sg_sR::synapse0x3a2cf60() {
   return (neuron0x3a05730()*-1.70315);
}

double NNfunction_sg_sR::synapse0x3a2cfa0() {
   return (neuron0x3a06100()*0.144302);
}

double NNfunction_sg_sR::synapse0x3a2cfe0() {
   return (neuron0x3a0f970()*0.134971);
}

double NNfunction_sg_sR::synapse0x3a2d020() {
   return (neuron0x3a10340()*0.118739);
}

double NNfunction_sg_sR::synapse0x3a2d060() {
   return (neuron0x3a10d10()*-0.104837);
}

double NNfunction_sg_sR::synapse0x3a2d0a0() {
   return (neuron0x3a116e0()*-0.122496);
}

double NNfunction_sg_sR::synapse0x3a2d0e0() {
   return (neuron0x3a120b0()*0.0575759);
}

double NNfunction_sg_sR::synapse0x3a2d120() {
   return (neuron0x3a12a80()*-0.0645161);
}

double NNfunction_sg_sR::synapse0x3a2d160() {
   return (neuron0x3a13450()*-0.000455979);
}

double NNfunction_sg_sR::synapse0x3a2d1a0() {
   return (neuron0x3a13e20()*0.227517);
}

double NNfunction_sg_sR::synapse0x3a2cd50() {
   return (neuron0x3a09eb0()*1.07447);
}

double NNfunction_sg_sR::synapse0x3a2cd90() {
   return (neuron0x3a16a00()*0.00650824);
}

double NNfunction_sg_sR::synapse0x3a2cdd0() {
   return (neuron0x3a173d0()*-1.29653);
}

double NNfunction_sg_sR::synapse0x3a2ce10() {
   return (neuron0x3a17da0()*-0.448069);
}

double NNfunction_sg_sR::synapse0x3a2d3f0() {
   return (neuron0x3a18770()*0.0616702);
}

double NNfunction_sg_sR::synapse0x3a2d430() {
   return (neuron0x3a19140()*0.0314661);
}

double NNfunction_sg_sR::synapse0x3a2d470() {
   return (neuron0x3a19b10()*-0.41143);
}

double NNfunction_sg_sR::synapse0x3a2d4b0() {
   return (neuron0x3a1a4e0()*0.954235);
}

double NNfunction_sg_sR::synapse0x3a2d4f0() {
   return (neuron0x3a1aeb0()*0.491897);
}

double NNfunction_sg_sR::synapse0x3a2d530() {
   return (neuron0x3a1ba90()*-0.191375);
}

double NNfunction_sg_sR::synapse0x3a2d570() {
   return (neuron0x3a1c460()*0.793819);
}

double NNfunction_sg_sR::synapse0x3a2d5b0() {
   return (neuron0x3a0d2e0()*-0.0779432);
}

double NNfunction_sg_sR::synapse0x3a2d5f0() {
   return (neuron0x3a0dcb0()*0.287008);
}

double NNfunction_sg_sR::synapse0x3a2d630() {
   return (neuron0x3a0e680()*0.360471);
}

double NNfunction_sg_sR::synapse0x3a2d670() {
   return (neuron0x3a20cc0()*0.0686505);
}

double NNfunction_sg_sR::synapse0x3a2d6b0() {
   return (neuron0x3a21570()*0.755186);
}

double NNfunction_sg_sR::synapse0x3a2d6f0() {
   return (neuron0x3a21f40()*0.130752);
}

double NNfunction_sg_sR::synapse0x3a2d730() {
   return (neuron0x3a22910()*-0.745113);
}

double NNfunction_sg_sR::synapse0x3a2d990() {
   return (neuron0x3a29b10()*-1.31982);
}

double NNfunction_sg_sR::synapse0x3a2d9d0() {
   return (neuron0x3a29eb0()*11.0076);
}

double NNfunction_sg_sR::synapse0x3a2da10() {
   return (neuron0x3a2a350()*-8.52768);
}

double NNfunction_sg_sR::synapse0x3a2da50() {
   return (neuron0x3a2b4b0()*-7.16474);
}

double NNfunction_sg_sR::synapse0x3a2da90() {
   return (neuron0x3a2c610()*-5.18982);
}

