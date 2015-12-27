#include "NNfunction_sb_sLsL.h"
#include <cmath>

double NNfunction_sb_sLsL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9185)/15.0551;
   input1 = (in1 - 56.9747)/748.838;
   input2 = (in2 - 381.982)/475.337;
   input3 = (in3 - 282.034)/629.759;
   input4 = (in4 - 756.377)/691.201;
   input5 = (in5 - 659.733)/667.521;
   input6 = (in6 - 662.194)/669.836;
   input7 = (in7 - 661.747)/669.858;
   input8 = (in8 - 659.173)/695.732;
   input9 = (in9 - 647.646)/680.946;
   input10 = (in10 - 655.953)/702.105;
   input11 = (in11 - 705.702)/589.543;
   input12 = (in12 - 535.639)/312.446;
   input13 = (in13 - 546.889)/369.171;
   input14 = (in14 - 698.392)/557.591;
   input15 = (in15 - 695.967)/555.525;
   input16 = (in16 - 490.091)/386.293;
   input17 = (in17 - 716.702)/612.044;
   input18 = (in18 - 712.117)/613.15;
   input19 = (in19 - 712.091)/599.013;
   input20 = (in20 - -219.623)/415.208;
   input21 = (in21 - -284.434)/893.965;
   input22 = (in22 - -1.43409)/893.768;
   input23 = (in23 - -9.30519)/510.668;
   switch(index) {
     case 0:
         return neuron0x1b1b350();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLsL::Value(int index, double* input) {
   input0 = (input[0] - 22.9185)/15.0551;
   input1 = (input[1] - 56.9747)/748.838;
   input2 = (input[2] - 381.982)/475.337;
   input3 = (input[3] - 282.034)/629.759;
   input4 = (input[4] - 756.377)/691.201;
   input5 = (input[5] - 659.733)/667.521;
   input6 = (input[6] - 662.194)/669.836;
   input7 = (input[7] - 661.747)/669.858;
   input8 = (input[8] - 659.173)/695.732;
   input9 = (input[9] - 647.646)/680.946;
   input10 = (input[10] - 655.953)/702.105;
   input11 = (input[11] - 705.702)/589.543;
   input12 = (input[12] - 535.639)/312.446;
   input13 = (input[13] - 546.889)/369.171;
   input14 = (input[14] - 698.392)/557.591;
   input15 = (input[15] - 695.967)/555.525;
   input16 = (input[16] - 490.091)/386.293;
   input17 = (input[17] - 716.702)/612.044;
   input18 = (input[18] - 712.117)/613.15;
   input19 = (input[19] - 712.091)/599.013;
   input20 = (input[20] - -219.623)/415.208;
   input21 = (input[21] - -284.434)/893.965;
   input22 = (input[22] - -1.43409)/893.768;
   input23 = (input[23] - -9.30519)/510.668;
   switch(index) {
     case 0:
         return neuron0x1b1b350();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLsL::neuron0x1ae7440() {
   return input0;
}

double NNfunction_sb_sLsL::neuron0x1ae7780() {
   return input1;
}

double NNfunction_sb_sLsL::neuron0x1ae7ac0() {
   return input2;
}

double NNfunction_sb_sLsL::neuron0x1ae7e00() {
   return input3;
}

double NNfunction_sb_sLsL::neuron0x1ae8140() {
   return input4;
}

double NNfunction_sb_sLsL::neuron0x1ae8480() {
   return input5;
}

double NNfunction_sb_sLsL::neuron0x1ae87c0() {
   return input6;
}

double NNfunction_sb_sLsL::neuron0x1ae8b00() {
   return input7;
}

double NNfunction_sb_sLsL::neuron0x1ae8e40() {
   return input8;
}

double NNfunction_sb_sLsL::neuron0x1ae9180() {
   return input9;
}

double NNfunction_sb_sLsL::neuron0x1ae94c0() {
   return input10;
}

double NNfunction_sb_sLsL::neuron0x1ae9800() {
   return input11;
}

double NNfunction_sb_sLsL::neuron0x1ae9b40() {
   return input12;
}

double NNfunction_sb_sLsL::neuron0x1ae9e80() {
   return input13;
}

double NNfunction_sb_sLsL::neuron0x1aea1c0() {
   return input14;
}

double NNfunction_sb_sLsL::neuron0x1aea500() {
   return input15;
}

double NNfunction_sb_sLsL::neuron0x1aea840() {
   return input16;
}

double NNfunction_sb_sLsL::neuron0x1aeada0() {
   return input17;
}

double NNfunction_sb_sLsL::neuron0x1aeafc0() {
   return input18;
}

double NNfunction_sb_sLsL::neuron0x1aeb300() {
   return input19;
}

double NNfunction_sb_sLsL::neuron0x1aeb640() {
   return input20;
}

double NNfunction_sb_sLsL::neuron0x1aeb980() {
   return input21;
}

double NNfunction_sb_sLsL::neuron0x1aebcc0() {
   return input22;
}

double NNfunction_sb_sLsL::neuron0x1aec000() {
   return input23;
}

double NNfunction_sb_sLsL::input0x1aec470() {
   double input = 0.345899;
   input += synapse0x1ae7300();
   input += synapse0x1ae7340();
   input += synapse0x1aec720();
   input += synapse0x1aec760();
   input += synapse0x1aec7a0();
   input += synapse0x1aec7e0();
   input += synapse0x1aec820();
   input += synapse0x1aec860();
   input += synapse0x1aec8a0();
   input += synapse0x1aec8e0();
   input += synapse0x1aec920();
   input += synapse0x1aec960();
   input += synapse0x1aec9a0();
   input += synapse0x1aec9e0();
   input += synapse0x1aeca20();
   input += synapse0x1aeca60();
   input += synapse0x1ae7270();
   input += synapse0x1ae72b0();
   input += synapse0x18a2630();
   input += synapse0x18a2670();
   input += synapse0x1aeccc0();
   input += synapse0x1aecd00();
   input += synapse0x1aecd40();
   input += synapse0x1aecd80();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1aec470() {
   double input = input0x1aec470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1aecdc0() {
   double input = -0.598249;
   input += synapse0x1aed100();
   input += synapse0x1aed140();
   input += synapse0x1aed180();
   input += synapse0x1aed1c0();
   input += synapse0x1aed200();
   input += synapse0x1aed240();
   input += synapse0x1aed280();
   input += synapse0x1aed2c0();
   input += synapse0x1aed300();
   input += synapse0x1aecbb0();
   input += synapse0x1aecbf0();
   input += synapse0x1aecc30();
   input += synapse0x1aecc70();
   input += synapse0x1aed550();
   input += synapse0x1aed590();
   input += synapse0x1aed5d0();
   input += synapse0x1aecf50();
   input += synapse0x1aecf90();
   input += synapse0x1aed720();
   input += synapse0x1aed760();
   input += synapse0x1aed7a0();
   input += synapse0x1aed7e0();
   input += synapse0x1aed820();
   input += synapse0x1aed860();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1aecdc0() {
   double input = input0x1aecdc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1aed8a0() {
   double input = 0.991043;
   input += synapse0x1aedbe0();
   input += synapse0x1aedc20();
   input += synapse0x1aedc60();
   input += synapse0x1aedca0();
   input += synapse0x1aedce0();
   input += synapse0x1aedd20();
   input += synapse0x1aedd60();
   input += synapse0x1aedda0();
   input += synapse0x1aedde0();
   input += synapse0x1aede20();
   input += synapse0x1aede60();
   input += synapse0x1aedea0();
   input += synapse0x1aedee0();
   input += synapse0x1aedf20();
   input += synapse0x1aedf60();
   input += synapse0x1aedfa0();
   input += synapse0x1aeda30();
   input += synapse0x1aeda70();
   input += synapse0x18a2cd0();
   input += synapse0x18b05a0();
   input += synapse0x18b05e0();
   input += synapse0x1ad64d0();
   input += synapse0x1ad6510();
   input += synapse0x1ad6550();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1aed8a0() {
   double input = input0x1aed8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1aed340() {
   double input = 2.16264;
   input += synapse0x18b0e20();
   input += synapse0x1aed4d0();
   input += synapse0x1aed510();
   input += synapse0x1aee0f0();
   input += synapse0x1aee130();
   input += synapse0x1aee170();
   input += synapse0x1aee1b0();
   input += synapse0x1aee1f0();
   input += synapse0x1aee230();
   input += synapse0x1aee270();
   input += synapse0x1aee2b0();
   input += synapse0x1aee2f0();
   input += synapse0x1aee330();
   input += synapse0x1aee370();
   input += synapse0x1aee3b0();
   input += synapse0x1aee3f0();
   input += synapse0x1ae7380();
   input += synapse0x1ae73c0();
   input += synapse0x1ae7400();
   input += synapse0x1aee540();
   input += synapse0x1aee580();
   input += synapse0x1aee5c0();
   input += synapse0x1aee600();
   input += synapse0x1aee640();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1aed340() {
   double input = input0x1aed340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1aee680() {
   double input = 0.370182;
   input += synapse0x1aee9c0();
   input += synapse0x1aeea00();
   input += synapse0x1aeea40();
   input += synapse0x1aeea80();
   input += synapse0x1aeeac0();
   input += synapse0x1aeeb00();
   input += synapse0x1aeeb40();
   input += synapse0x1aeeb80();
   input += synapse0x1aeebc0();
   input += synapse0x1aeec00();
   input += synapse0x1aeec40();
   input += synapse0x1aeec80();
   input += synapse0x1aeecc0();
   input += synapse0x1aeed00();
   input += synapse0x1aeed40();
   input += synapse0x1aeed80();
   input += synapse0x1aee810();
   input += synapse0x1aee850();
   input += synapse0x1aeeed0();
   input += synapse0x1aeef10();
   input += synapse0x1aeef50();
   input += synapse0x1aeef90();
   input += synapse0x1aeefd0();
   input += synapse0x1aef010();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1aee680() {
   double input = input0x1aee680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1aef050() {
   double input = -0.946949;
   input += synapse0x1aef390();
   input += synapse0x1aef3d0();
   input += synapse0x1aef410();
   input += synapse0x1aef450();
   input += synapse0x1aef490();
   input += synapse0x1aef4d0();
   input += synapse0x1aef510();
   input += synapse0x1aef550();
   input += synapse0x1aef590();
   input += synapse0x18b08f0();
   input += synapse0x18b0930();
   input += synapse0x18b0970();
   input += synapse0x18b09b0();
   input += synapse0x18b09f0();
   input += synapse0x18b0a30();
   input += synapse0x18b0a70();
   input += synapse0x1aef1e0();
   input += synapse0x1aef220();
   input += synapse0x18b0bc0();
   input += synapse0x18b0c00();
   input += synapse0x18b0c40();
   input += synapse0x18b0c80();
   input += synapse0x18b0cc0();
   input += synapse0x1aefde0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1aef050() {
   double input = input0x1aef050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1aefe20() {
   double input = 1.14999;
   input += synapse0x1af0160();
   input += synapse0x1af01a0();
   input += synapse0x1af01e0();
   input += synapse0x1af0220();
   input += synapse0x1af0260();
   input += synapse0x1af02a0();
   input += synapse0x1af02e0();
   input += synapse0x1af0320();
   input += synapse0x1af0360();
   input += synapse0x1af03a0();
   input += synapse0x1af03e0();
   input += synapse0x1af0420();
   input += synapse0x1af0460();
   input += synapse0x1af04a0();
   input += synapse0x1af04e0();
   input += synapse0x1af0520();
   input += synapse0x1aeffb0();
   input += synapse0x1aefff0();
   input += synapse0x1af0670();
   input += synapse0x1af06b0();
   input += synapse0x1af06f0();
   input += synapse0x1af0730();
   input += synapse0x1af0770();
   input += synapse0x1af07b0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1aefe20() {
   double input = input0x1aefe20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af07f0() {
   double input = 1.34359;
   input += synapse0x1af0b30();
   input += synapse0x1af0b70();
   input += synapse0x1af0bb0();
   input += synapse0x1af0bf0();
   input += synapse0x1af0c30();
   input += synapse0x1af0c70();
   input += synapse0x1af0cb0();
   input += synapse0x1af0cf0();
   input += synapse0x1af0d30();
   input += synapse0x1af0d70();
   input += synapse0x1af0db0();
   input += synapse0x1af0df0();
   input += synapse0x1af0e30();
   input += synapse0x1af0e70();
   input += synapse0x1af0eb0();
   input += synapse0x1af0ef0();
   input += synapse0x1af0980();
   input += synapse0x1af09c0();
   input += synapse0x1af1040();
   input += synapse0x1af1080();
   input += synapse0x1af10c0();
   input += synapse0x1af1100();
   input += synapse0x1af1140();
   input += synapse0x1af1180();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af07f0() {
   double input = input0x1af07f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af11c0() {
   double input = 2.29494;
   input += synapse0x1aeac90();
   input += synapse0x1aeacd0();
   input += synapse0x1aead10();
   input += synapse0x1aead50();
   input += synapse0x1af1710();
   input += synapse0x1af1750();
   input += synapse0x1af1790();
   input += synapse0x1af17d0();
   input += synapse0x1af1810();
   input += synapse0x1af1850();
   input += synapse0x1af1890();
   input += synapse0x1af18d0();
   input += synapse0x1af1910();
   input += synapse0x1af1950();
   input += synapse0x1af1990();
   input += synapse0x1af19d0();
   input += synapse0x1af1350();
   input += synapse0x1af1390();
   input += synapse0x1af1b20();
   input += synapse0x1af1b60();
   input += synapse0x1af1ba0();
   input += synapse0x1af1be0();
   input += synapse0x1af1c20();
   input += synapse0x1af1c60();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af11c0() {
   double input = input0x1af11c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af1ca0() {
   double input = 1.19753;
   input += synapse0x1af1fe0();
   input += synapse0x1af2020();
   input += synapse0x1af2060();
   input += synapse0x1af20a0();
   input += synapse0x1af20e0();
   input += synapse0x1af2120();
   input += synapse0x1af2160();
   input += synapse0x1af21a0();
   input += synapse0x1af21e0();
   input += synapse0x1af2220();
   input += synapse0x1af2260();
   input += synapse0x1af22a0();
   input += synapse0x1af22e0();
   input += synapse0x1af2320();
   input += synapse0x1af2360();
   input += synapse0x1af23a0();
   input += synapse0x1af1e30();
   input += synapse0x1af1e70();
   input += synapse0x1af24f0();
   input += synapse0x1af2530();
   input += synapse0x1af2570();
   input += synapse0x1af25b0();
   input += synapse0x1af25f0();
   input += synapse0x1af2630();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af1ca0() {
   double input = input0x1af1ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af2670() {
   double input = 0.0153634;
   input += synapse0x1af29b0();
   input += synapse0x1af29f0();
   input += synapse0x1af2a30();
   input += synapse0x1af2a70();
   input += synapse0x1af2ab0();
   input += synapse0x1af2af0();
   input += synapse0x1af2b30();
   input += synapse0x1af2b70();
   input += synapse0x1af2bb0();
   input += synapse0x1af2bf0();
   input += synapse0x1af2c30();
   input += synapse0x1af2c70();
   input += synapse0x1af2cb0();
   input += synapse0x1af2cf0();
   input += synapse0x1af2d30();
   input += synapse0x1af2d70();
   input += synapse0x1af2800();
   input += synapse0x1af2840();
   input += synapse0x1aef5d0();
   input += synapse0x1aef610();
   input += synapse0x1aef650();
   input += synapse0x1aef690();
   input += synapse0x1aef6d0();
   input += synapse0x1aef710();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af2670() {
   double input = input0x1af2670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1aef750() {
   double input = -0.0977479;
   input += synapse0x1aefa90();
   input += synapse0x1aefad0();
   input += synapse0x1aefb10();
   input += synapse0x1aefb50();
   input += synapse0x1aefb90();
   input += synapse0x1aefbd0();
   input += synapse0x1aefc10();
   input += synapse0x1aefc50();
   input += synapse0x1aefc90();
   input += synapse0x1aefcd0();
   input += synapse0x1aefd10();
   input += synapse0x1aefd50();
   input += synapse0x1aefd90();
   input += synapse0x1af3ed0();
   input += synapse0x1af3f10();
   input += synapse0x1af3f50();
   input += synapse0x1aef8e0();
   input += synapse0x1aef920();
   input += synapse0x1af40a0();
   input += synapse0x1af40e0();
   input += synapse0x1af4120();
   input += synapse0x1af4160();
   input += synapse0x1af41a0();
   input += synapse0x1af41e0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1aef750() {
   double input = input0x1aef750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af4220() {
   double input = 1.84119;
   input += synapse0x1af4560();
   input += synapse0x1af45a0();
   input += synapse0x1af45e0();
   input += synapse0x1af4620();
   input += synapse0x1af4660();
   input += synapse0x1af46a0();
   input += synapse0x1af46e0();
   input += synapse0x1af4720();
   input += synapse0x1af4760();
   input += synapse0x1af47a0();
   input += synapse0x1af47e0();
   input += synapse0x1af4820();
   input += synapse0x1af4860();
   input += synapse0x1af48a0();
   input += synapse0x1af48e0();
   input += synapse0x1af4920();
   input += synapse0x1af43b0();
   input += synapse0x1af43f0();
   input += synapse0x1af4a70();
   input += synapse0x1af4ab0();
   input += synapse0x1af4af0();
   input += synapse0x1af4b30();
   input += synapse0x1af4b70();
   input += synapse0x1af4bb0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af4220() {
   double input = input0x1af4220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af4bf0() {
   double input = -0.0721451;
   input += synapse0x1af4f30();
   input += synapse0x1af4f70();
   input += synapse0x1af4fb0();
   input += synapse0x1af4ff0();
   input += synapse0x1af5030();
   input += synapse0x1af5070();
   input += synapse0x1af50b0();
   input += synapse0x1af50f0();
   input += synapse0x1af5130();
   input += synapse0x1af5170();
   input += synapse0x1af51b0();
   input += synapse0x1af51f0();
   input += synapse0x1af5230();
   input += synapse0x1af5270();
   input += synapse0x1af52b0();
   input += synapse0x1af52f0();
   input += synapse0x1af4d80();
   input += synapse0x1af4dc0();
   input += synapse0x1af5440();
   input += synapse0x1af5480();
   input += synapse0x1af54c0();
   input += synapse0x1af5500();
   input += synapse0x1af5540();
   input += synapse0x1af5580();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af4bf0() {
   double input = input0x1af4bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af55c0() {
   double input = -0.673401;
   input += synapse0x1af5900();
   input += synapse0x1af5940();
   input += synapse0x1af5980();
   input += synapse0x1af59c0();
   input += synapse0x1af5a00();
   input += synapse0x1af5a40();
   input += synapse0x1af5a80();
   input += synapse0x1af5ac0();
   input += synapse0x1af5b00();
   input += synapse0x1af5b40();
   input += synapse0x1af5b80();
   input += synapse0x1af5bc0();
   input += synapse0x1af5c00();
   input += synapse0x1af5c40();
   input += synapse0x1af5c80();
   input += synapse0x1af5cc0();
   input += synapse0x1af5750();
   input += synapse0x1af5790();
   input += synapse0x1af5e10();
   input += synapse0x1af5e50();
   input += synapse0x1af5e90();
   input += synapse0x1af5ed0();
   input += synapse0x1af5f10();
   input += synapse0x1af5f50();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af55c0() {
   double input = input0x1af55c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af5f90() {
   double input = -0.238254;
   input += synapse0x1af62d0();
   input += synapse0x1ae7660();
   input += synapse0x1ae76a0();
   input += synapse0x1ae79a0();
   input += synapse0x1ae79e0();
   input += synapse0x1ae7ce0();
   input += synapse0x1ae7d20();
   input += synapse0x1ae8020();
   input += synapse0x1ae8060();
   input += synapse0x1ae8360();
   input += synapse0x1ae83a0();
   input += synapse0x1ae86a0();
   input += synapse0x1ae86e0();
   input += synapse0x1ae89e0();
   input += synapse0x1ae8a20();
   input += synapse0x1ae8d20();
   input += synapse0x1ae8d60();
   input += synapse0x1ae9060();
   input += synapse0x1ae90a0();
   input += synapse0x1ae93a0();
   input += synapse0x1ae93e0();
   input += synapse0x1ae96e0();
   input += synapse0x1ae9720();
   input += synapse0x1ae9a20();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af5f90() {
   double input = input0x1af5f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af7da0() {
   double input = 3.61179;
   input += synapse0x1ae9a60();
   input += synapse0x1aea720();
   input += synapse0x1aea760();
   input += synapse0x1af6120();
   input += synapse0x1af6160();
   input += synapse0x1aeaa60();
   input += synapse0x1aeaaa0();
   input += synapse0x18a2510();
   input += synapse0x18a2550();
   input += synapse0x1aeb1e0();
   input += synapse0x1aeb220();
   input += synapse0x1aeb520();
   input += synapse0x1aeb560();
   input += synapse0x1aeb860();
   input += synapse0x1aeb8a0();
   input += synapse0x1aebba0();
   input += synapse0x1aebbe0();
   input += synapse0x1aebee0();
   input += synapse0x1aebf20();
   input += synapse0x1aec220();
   input += synapse0x1aec260();
   input += synapse0x1ae9d60();
   input += synapse0x1ae9da0();
   input += synapse0x1af8040();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af7da0() {
   double input = input0x1af7da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af8080() {
   double input = -0.111826;
   input += synapse0x1af83c0();
   input += synapse0x1af8400();
   input += synapse0x1af8440();
   input += synapse0x1af8480();
   input += synapse0x1af84c0();
   input += synapse0x1af8500();
   input += synapse0x1af8540();
   input += synapse0x1af8580();
   input += synapse0x1af85c0();
   input += synapse0x1af8600();
   input += synapse0x1af8640();
   input += synapse0x1af8680();
   input += synapse0x1af86c0();
   input += synapse0x1af8700();
   input += synapse0x1af8740();
   input += synapse0x1af8780();
   input += synapse0x1af8210();
   input += synapse0x1af8250();
   input += synapse0x1af88d0();
   input += synapse0x1af8910();
   input += synapse0x1af8950();
   input += synapse0x1af8990();
   input += synapse0x1af89d0();
   input += synapse0x1af8a10();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af8080() {
   double input = input0x1af8080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af8a50() {
   double input = -2.5612;
   input += synapse0x1af8d90();
   input += synapse0x1af8dd0();
   input += synapse0x1af8e10();
   input += synapse0x1af8e50();
   input += synapse0x1af8e90();
   input += synapse0x1af8ed0();
   input += synapse0x1af8f10();
   input += synapse0x1af8f50();
   input += synapse0x1af8f90();
   input += synapse0x1af8fd0();
   input += synapse0x1af9010();
   input += synapse0x1af9050();
   input += synapse0x1af9090();
   input += synapse0x1af90d0();
   input += synapse0x1af9110();
   input += synapse0x1af9150();
   input += synapse0x1af8be0();
   input += synapse0x1af8c20();
   input += synapse0x1af92a0();
   input += synapse0x1af92e0();
   input += synapse0x1af9320();
   input += synapse0x1af9360();
   input += synapse0x1af93a0();
   input += synapse0x1af93e0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af8a50() {
   double input = input0x1af8a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af9420() {
   double input = -4.11666;
   input += synapse0x1af9760();
   input += synapse0x1af97a0();
   input += synapse0x1af97e0();
   input += synapse0x1af9820();
   input += synapse0x1af9860();
   input += synapse0x1af98a0();
   input += synapse0x1af98e0();
   input += synapse0x1af9920();
   input += synapse0x1af9960();
   input += synapse0x1af99a0();
   input += synapse0x1af99e0();
   input += synapse0x1af9a20();
   input += synapse0x1af9a60();
   input += synapse0x1af9aa0();
   input += synapse0x1af9ae0();
   input += synapse0x1af9b20();
   input += synapse0x1af95b0();
   input += synapse0x1af95f0();
   input += synapse0x1af9c70();
   input += synapse0x1af9cb0();
   input += synapse0x1af9cf0();
   input += synapse0x1af9d30();
   input += synapse0x1af9d70();
   input += synapse0x1af9db0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af9420() {
   double input = input0x1af9420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af9df0() {
   double input = 1.07216;
   input += synapse0x1afa130();
   input += synapse0x1afa170();
   input += synapse0x1afa1b0();
   input += synapse0x1afa1f0();
   input += synapse0x1afa230();
   input += synapse0x1afa270();
   input += synapse0x1afa2b0();
   input += synapse0x1afa2f0();
   input += synapse0x1afa330();
   input += synapse0x1afa370();
   input += synapse0x1afa3b0();
   input += synapse0x1afa3f0();
   input += synapse0x1afa430();
   input += synapse0x1afa470();
   input += synapse0x1afa4b0();
   input += synapse0x1afa4f0();
   input += synapse0x1af9f80();
   input += synapse0x1af9fc0();
   input += synapse0x1afa640();
   input += synapse0x1afa680();
   input += synapse0x1afa6c0();
   input += synapse0x1afa700();
   input += synapse0x1afa740();
   input += synapse0x1afa780();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af9df0() {
   double input = input0x1af9df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1afa7c0() {
   double input = 0.0218397;
   input += synapse0x1afab00();
   input += synapse0x1afab40();
   input += synapse0x1afab80();
   input += synapse0x1afabc0();
   input += synapse0x1afac00();
   input += synapse0x1afac40();
   input += synapse0x1afac80();
   input += synapse0x1afacc0();
   input += synapse0x1afad00();
   input += synapse0x1af2ec0();
   input += synapse0x1af2f00();
   input += synapse0x1af2f40();
   input += synapse0x1af2f80();
   input += synapse0x1af2fc0();
   input += synapse0x1af3000();
   input += synapse0x1af3040();
   input += synapse0x1afa950();
   input += synapse0x1afa990();
   input += synapse0x1af3190();
   input += synapse0x1af31d0();
   input += synapse0x1af3210();
   input += synapse0x1af3250();
   input += synapse0x1af3290();
   input += synapse0x1af32d0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1afa7c0() {
   double input = input0x1afa7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af3310() {
   double input = -0.080785;
   input += synapse0x1af3650();
   input += synapse0x1af3690();
   input += synapse0x1af36d0();
   input += synapse0x1af3710();
   input += synapse0x1af3750();
   input += synapse0x1af3790();
   input += synapse0x1af37d0();
   input += synapse0x1af3810();
   input += synapse0x1af3850();
   input += synapse0x1af3890();
   input += synapse0x1af38d0();
   input += synapse0x1af3910();
   input += synapse0x1af3950();
   input += synapse0x1af3990();
   input += synapse0x1af39d0();
   input += synapse0x1af3a10();
   input += synapse0x1af34a0();
   input += synapse0x1af34e0();
   input += synapse0x1af3b60();
   input += synapse0x1af3ba0();
   input += synapse0x1af3be0();
   input += synapse0x1af3c20();
   input += synapse0x1af3c60();
   input += synapse0x1af3ca0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af3310() {
   double input = input0x1af3310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af3ce0() {
   double input = -1.44929;
   input += synapse0x1af3e70();
   input += synapse0x1afcf00();
   input += synapse0x1afcf40();
   input += synapse0x1afcf80();
   input += synapse0x1afcfc0();
   input += synapse0x1afd000();
   input += synapse0x1afd040();
   input += synapse0x1afd080();
   input += synapse0x1afd0c0();
   input += synapse0x1afd100();
   input += synapse0x1afd140();
   input += synapse0x1afd180();
   input += synapse0x1afd1c0();
   input += synapse0x1afd200();
   input += synapse0x1afd240();
   input += synapse0x1afd280();
   input += synapse0x1afcd50();
   input += synapse0x1afcd90();
   input += synapse0x1afd3d0();
   input += synapse0x1afd410();
   input += synapse0x1afd450();
   input += synapse0x1afd490();
   input += synapse0x1afd4d0();
   input += synapse0x1afd510();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af3ce0() {
   double input = input0x1af3ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1afd550() {
   double input = -0.355537;
   input += synapse0x1afd890();
   input += synapse0x1afd8d0();
   input += synapse0x1afd910();
   input += synapse0x1afd950();
   input += synapse0x1afd990();
   input += synapse0x1afd9d0();
   input += synapse0x1afda10();
   input += synapse0x1afda50();
   input += synapse0x1afda90();
   input += synapse0x1afdad0();
   input += synapse0x1afdb10();
   input += synapse0x1afdb50();
   input += synapse0x1afdb90();
   input += synapse0x1afdbd0();
   input += synapse0x1afdc10();
   input += synapse0x1afdc50();
   input += synapse0x1afd6e0();
   input += synapse0x1afd720();
   input += synapse0x1afdda0();
   input += synapse0x1afdde0();
   input += synapse0x1afde20();
   input += synapse0x1afde60();
   input += synapse0x1afdea0();
   input += synapse0x1afdee0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1afd550() {
   double input = input0x1afd550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1afdf20() {
   double input = 0.768819;
   input += synapse0x1afe260();
   input += synapse0x1afe2a0();
   input += synapse0x1afe2e0();
   input += synapse0x1afe320();
   input += synapse0x1afe360();
   input += synapse0x1afe3a0();
   input += synapse0x1afe3e0();
   input += synapse0x1afe420();
   input += synapse0x1afe460();
   input += synapse0x1afe4a0();
   input += synapse0x1afe4e0();
   input += synapse0x1afe520();
   input += synapse0x1afe560();
   input += synapse0x1afe5a0();
   input += synapse0x1afe5e0();
   input += synapse0x1afe620();
   input += synapse0x1afe0b0();
   input += synapse0x1afe0f0();
   input += synapse0x1afe770();
   input += synapse0x1afe7b0();
   input += synapse0x1afe7f0();
   input += synapse0x1afe830();
   input += synapse0x1afe870();
   input += synapse0x1afe8b0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1afdf20() {
   double input = input0x1afdf20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1afe8f0() {
   double input = -0.833073;
   input += synapse0x1afec30();
   input += synapse0x1afec70();
   input += synapse0x1afecb0();
   input += synapse0x1afecf0();
   input += synapse0x1afed30();
   input += synapse0x1afed70();
   input += synapse0x1afedb0();
   input += synapse0x1afedf0();
   input += synapse0x1afee30();
   input += synapse0x1afee70();
   input += synapse0x1afeeb0();
   input += synapse0x1afeef0();
   input += synapse0x1afef30();
   input += synapse0x1afef70();
   input += synapse0x1afefb0();
   input += synapse0x1afeff0();
   input += synapse0x1afea80();
   input += synapse0x1afeac0();
   input += synapse0x1aff140();
   input += synapse0x1aff180();
   input += synapse0x1aff1c0();
   input += synapse0x1aff200();
   input += synapse0x1aff240();
   input += synapse0x1aff280();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1afe8f0() {
   double input = input0x1afe8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1aff2c0() {
   double input = 1.94488;
   input += synapse0x1aff600();
   input += synapse0x1aff640();
   input += synapse0x1aff680();
   input += synapse0x1aff6c0();
   input += synapse0x1aff700();
   input += synapse0x1aff740();
   input += synapse0x1aff780();
   input += synapse0x1aff7c0();
   input += synapse0x1aff800();
   input += synapse0x1aff840();
   input += synapse0x1aff880();
   input += synapse0x1aff8c0();
   input += synapse0x1aff900();
   input += synapse0x1aff940();
   input += synapse0x1aff980();
   input += synapse0x1aff9c0();
   input += synapse0x1aff450();
   input += synapse0x1aff490();
   input += synapse0x1affb10();
   input += synapse0x1affb50();
   input += synapse0x1affb90();
   input += synapse0x1affbd0();
   input += synapse0x1affc10();
   input += synapse0x1affc50();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1aff2c0() {
   double input = input0x1aff2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1affc90() {
   double input = -0.338546;
   input += synapse0x1afffd0();
   input += synapse0x1b00010();
   input += synapse0x1b00050();
   input += synapse0x1b00090();
   input += synapse0x1b000d0();
   input += synapse0x1b00110();
   input += synapse0x1b00150();
   input += synapse0x1b00190();
   input += synapse0x1b001d0();
   input += synapse0x1b00210();
   input += synapse0x1b00250();
   input += synapse0x1b00290();
   input += synapse0x1b002d0();
   input += synapse0x1b00310();
   input += synapse0x1b00350();
   input += synapse0x1b00390();
   input += synapse0x1affe20();
   input += synapse0x1affe60();
   input += synapse0x1b004e0();
   input += synapse0x1b00520();
   input += synapse0x1b00560();
   input += synapse0x1b005a0();
   input += synapse0x1b005e0();
   input += synapse0x1b00620();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1affc90() {
   double input = input0x1affc90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b00660() {
   double input = -0.434138;
   input += synapse0x1b009a0();
   input += synapse0x1b009e0();
   input += synapse0x1b00a20();
   input += synapse0x1b00a60();
   input += synapse0x1b00aa0();
   input += synapse0x1b00ae0();
   input += synapse0x1b00b20();
   input += synapse0x1b00b60();
   input += synapse0x1b00ba0();
   input += synapse0x1b00be0();
   input += synapse0x1b00c20();
   input += synapse0x1b00c60();
   input += synapse0x1b00ca0();
   input += synapse0x1b00ce0();
   input += synapse0x1b00d20();
   input += synapse0x1b00d60();
   input += synapse0x1b007f0();
   input += synapse0x1b00830();
   input += synapse0x1b00eb0();
   input += synapse0x1b00ef0();
   input += synapse0x1b00f30();
   input += synapse0x1b00f70();
   input += synapse0x1b00fb0();
   input += synapse0x1b00ff0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b00660() {
   double input = input0x1b00660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b01030() {
   double input = -2.42182;
   input += synapse0x1b01370();
   input += synapse0x1b013b0();
   input += synapse0x1b013f0();
   input += synapse0x1b01430();
   input += synapse0x1b01470();
   input += synapse0x1b014b0();
   input += synapse0x1b014f0();
   input += synapse0x1b01530();
   input += synapse0x1b01570();
   input += synapse0x1b015b0();
   input += synapse0x1b015f0();
   input += synapse0x1b01630();
   input += synapse0x1b01670();
   input += synapse0x1b016b0();
   input += synapse0x1b016f0();
   input += synapse0x1b01730();
   input += synapse0x1b011c0();
   input += synapse0x1b01200();
   input += synapse0x1b01880();
   input += synapse0x1b018c0();
   input += synapse0x1b01900();
   input += synapse0x1b01940();
   input += synapse0x1b01980();
   input += synapse0x1b019c0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b01030() {
   double input = input0x1b01030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b01a00() {
   double input = -0.221243;
   input += synapse0x1b01d40();
   input += synapse0x1af6310();
   input += synapse0x1af6350();
   input += synapse0x1af6390();
   input += synapse0x1af65e0();
   input += synapse0x1af6620();
   input += synapse0x1af6660();
   input += synapse0x1af68b0();
   input += synapse0x1af68f0();
   input += synapse0x1af6b40();
   input += synapse0x1af6b80();
   input += synapse0x1af6bc0();
   input += synapse0x1af6e10();
   input += synapse0x1af6e50();
   input += synapse0x1af70a0();
   input += synapse0x1af70e0();
   input += synapse0x1b01b90();
   input += synapse0x1b01bd0();
   input += synapse0x1af7230();
   input += synapse0x1af7740();
   input += synapse0x1af7780();
   input += synapse0x1af77c0();
   input += synapse0x1af7a10();
   input += synapse0x1af7a50();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b01a00() {
   double input = input0x1b01a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1af7a90() {
   double input = 0.52495;
   input += synapse0x1af7300();
   input += synapse0x1af7340();
   input += synapse0x1af7380();
   input += synapse0x1af73c0();
   input += synapse0x1af7d40();
   input += synapse0x1b04090();
   input += synapse0x1b040d0();
   input += synapse0x1b04110();
   input += synapse0x1b04150();
   input += synapse0x1b04190();
   input += synapse0x1b041d0();
   input += synapse0x1b04210();
   input += synapse0x1b04250();
   input += synapse0x1b04290();
   input += synapse0x1b042d0();
   input += synapse0x1b04310();
   input += synapse0x1af7c20();
   input += synapse0x1af7c60();
   input += synapse0x1b04460();
   input += synapse0x1b044a0();
   input += synapse0x1b044e0();
   input += synapse0x1b04520();
   input += synapse0x1b04560();
   input += synapse0x1b045a0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1af7a90() {
   double input = input0x1af7a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b045e0() {
   double input = -0.0286332;
   input += synapse0x1b04920();
   input += synapse0x1b04960();
   input += synapse0x1b049a0();
   input += synapse0x1b049e0();
   input += synapse0x1b04a20();
   input += synapse0x1b04a60();
   input += synapse0x1b04aa0();
   input += synapse0x1b04ae0();
   input += synapse0x1b04b20();
   input += synapse0x1b04b60();
   input += synapse0x1b04ba0();
   input += synapse0x1b04be0();
   input += synapse0x1b04c20();
   input += synapse0x1b04c60();
   input += synapse0x1b04ca0();
   input += synapse0x1b04ce0();
   input += synapse0x1b04770();
   input += synapse0x1b047b0();
   input += synapse0x1b04e30();
   input += synapse0x1b04e70();
   input += synapse0x1b04eb0();
   input += synapse0x1b04ef0();
   input += synapse0x1b04f30();
   input += synapse0x1b04f70();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b045e0() {
   double input = input0x1b045e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b04fb0() {
   double input = 0.63932;
   input += synapse0x1b052f0();
   input += synapse0x1b05330();
   input += synapse0x1b05370();
   input += synapse0x1b053b0();
   input += synapse0x1b053f0();
   input += synapse0x1b05430();
   input += synapse0x1b05470();
   input += synapse0x1b054b0();
   input += synapse0x1b054f0();
   input += synapse0x1b05530();
   input += synapse0x1b05570();
   input += synapse0x1b055b0();
   input += synapse0x1b055f0();
   input += synapse0x1b05630();
   input += synapse0x1b05670();
   input += synapse0x1b056b0();
   input += synapse0x1b05140();
   input += synapse0x1b05180();
   input += synapse0x1b05800();
   input += synapse0x1b05840();
   input += synapse0x1b05880();
   input += synapse0x1b058c0();
   input += synapse0x1b05900();
   input += synapse0x1b05940();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b04fb0() {
   double input = input0x1b04fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b05980() {
   double input = 0.580128;
   input += synapse0x1b05cc0();
   input += synapse0x1b05d00();
   input += synapse0x1b05d40();
   input += synapse0x1b05d80();
   input += synapse0x1b05dc0();
   input += synapse0x1b05e00();
   input += synapse0x1b05e40();
   input += synapse0x1b05e80();
   input += synapse0x1b05ec0();
   input += synapse0x1b05f00();
   input += synapse0x1b05f40();
   input += synapse0x1b05f80();
   input += synapse0x1b05fc0();
   input += synapse0x1b06000();
   input += synapse0x1b06040();
   input += synapse0x1b06080();
   input += synapse0x1b05b10();
   input += synapse0x1b05b50();
   input += synapse0x1b061d0();
   input += synapse0x1b06210();
   input += synapse0x1b06250();
   input += synapse0x1b06290();
   input += synapse0x1b062d0();
   input += synapse0x1b06310();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b05980() {
   double input = input0x1b05980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b06350() {
   double input = -0.356908;
   input += synapse0x1b06690();
   input += synapse0x1b066d0();
   input += synapse0x1b06710();
   input += synapse0x1b06750();
   input += synapse0x1b06790();
   input += synapse0x1b067d0();
   input += synapse0x1b06810();
   input += synapse0x1b06850();
   input += synapse0x1b06890();
   input += synapse0x1b068d0();
   input += synapse0x1b06910();
   input += synapse0x1b06950();
   input += synapse0x1b06990();
   input += synapse0x1b069d0();
   input += synapse0x1b06a10();
   input += synapse0x1b06a50();
   input += synapse0x1b064e0();
   input += synapse0x1b06520();
   input += synapse0x1b06ba0();
   input += synapse0x1b06be0();
   input += synapse0x1b06c20();
   input += synapse0x1b06c60();
   input += synapse0x1b06ca0();
   input += synapse0x1b06ce0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b06350() {
   double input = input0x1b06350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b06d20() {
   double input = -0.323952;
   input += synapse0x1b07060();
   input += synapse0x1b070a0();
   input += synapse0x1b070e0();
   input += synapse0x1b07120();
   input += synapse0x1b07160();
   input += synapse0x1b071a0();
   input += synapse0x1b071e0();
   input += synapse0x1b07220();
   input += synapse0x1b07260();
   input += synapse0x1b072a0();
   input += synapse0x1b072e0();
   input += synapse0x1b07320();
   input += synapse0x1b07360();
   input += synapse0x1b073a0();
   input += synapse0x1b073e0();
   input += synapse0x1b07420();
   input += synapse0x1b06eb0();
   input += synapse0x1b06ef0();
   input += synapse0x1b07570();
   input += synapse0x1b075b0();
   input += synapse0x1b075f0();
   input += synapse0x1b07630();
   input += synapse0x1b07670();
   input += synapse0x1b076b0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b06d20() {
   double input = input0x1b06d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b076f0() {
   double input = 0.223677;
   input += synapse0x1b07a30();
   input += synapse0x1b07a70();
   input += synapse0x1b07ab0();
   input += synapse0x1b07af0();
   input += synapse0x1b07b30();
   input += synapse0x1b07b70();
   input += synapse0x1b07bb0();
   input += synapse0x1b07bf0();
   input += synapse0x1b07c30();
   input += synapse0x1b07c70();
   input += synapse0x1b07cb0();
   input += synapse0x1b07cf0();
   input += synapse0x1b07d30();
   input += synapse0x1b07d70();
   input += synapse0x1b07db0();
   input += synapse0x1b07df0();
   input += synapse0x1b07880();
   input += synapse0x1b078c0();
   input += synapse0x1b07f40();
   input += synapse0x1b07f80();
   input += synapse0x1b07fc0();
   input += synapse0x1b08000();
   input += synapse0x1b08040();
   input += synapse0x1b08080();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b076f0() {
   double input = input0x1b076f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b080c0() {
   double input = -0.135237;
   input += synapse0x1b08400();
   input += synapse0x1b08440();
   input += synapse0x1b08480();
   input += synapse0x1b084c0();
   input += synapse0x1b08500();
   input += synapse0x1b08540();
   input += synapse0x1b08580();
   input += synapse0x1b085c0();
   input += synapse0x1b08600();
   input += synapse0x1b08640();
   input += synapse0x1b08680();
   input += synapse0x1b086c0();
   input += synapse0x1b08700();
   input += synapse0x1b08740();
   input += synapse0x1b08780();
   input += synapse0x1b087c0();
   input += synapse0x1b08250();
   input += synapse0x1b08290();
   input += synapse0x1b08910();
   input += synapse0x1b08950();
   input += synapse0x1b08990();
   input += synapse0x1b089d0();
   input += synapse0x1b08a10();
   input += synapse0x1b08a50();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b080c0() {
   double input = input0x1b080c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b08a90() {
   double input = -0.495215;
   input += synapse0x1af1500();
   input += synapse0x1af1540();
   input += synapse0x1af1580();
   input += synapse0x1af15c0();
   input += synapse0x1af1600();
   input += synapse0x1af1640();
   input += synapse0x1af1680();
   input += synapse0x1af16c0();
   input += synapse0x1b091e0();
   input += synapse0x1b09220();
   input += synapse0x1b09260();
   input += synapse0x1b092a0();
   input += synapse0x1b092e0();
   input += synapse0x1b09320();
   input += synapse0x1b09360();
   input += synapse0x1b093a0();
   input += synapse0x1b08c20();
   input += synapse0x1b08c60();
   input += synapse0x1b094f0();
   input += synapse0x1b09530();
   input += synapse0x1b09570();
   input += synapse0x1b095b0();
   input += synapse0x1b095f0();
   input += synapse0x1b09630();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b08a90() {
   double input = input0x1b08a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b09670() {
   double input = 0.157643;
   input += synapse0x1b099b0();
   input += synapse0x1b099f0();
   input += synapse0x1b09a30();
   input += synapse0x1b09a70();
   input += synapse0x1b09ab0();
   input += synapse0x1b09af0();
   input += synapse0x1b09b30();
   input += synapse0x1b09b70();
   input += synapse0x1b09bb0();
   input += synapse0x1b09bf0();
   input += synapse0x1b09c30();
   input += synapse0x1b09c70();
   input += synapse0x1b09cb0();
   input += synapse0x1b09cf0();
   input += synapse0x1b09d30();
   input += synapse0x1b09d70();
   input += synapse0x1b09800();
   input += synapse0x1b09840();
   input += synapse0x1b09ec0();
   input += synapse0x1b09f00();
   input += synapse0x1b09f40();
   input += synapse0x1b09f80();
   input += synapse0x1b09fc0();
   input += synapse0x1b0a000();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b09670() {
   double input = input0x1b09670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b0a040() {
   double input = -3.90568;
   input += synapse0x1b0a380();
   input += synapse0x1b0a3c0();
   input += synapse0x1b0a400();
   input += synapse0x1b0a440();
   input += synapse0x1b0a480();
   input += synapse0x1b0a4c0();
   input += synapse0x1b0a500();
   input += synapse0x1b0a540();
   input += synapse0x1b0a580();
   input += synapse0x1b0a5c0();
   input += synapse0x1b0a600();
   input += synapse0x1b0a640();
   input += synapse0x1b0a680();
   input += synapse0x1b0a6c0();
   input += synapse0x1b0a700();
   input += synapse0x1b0a740();
   input += synapse0x1b0a1d0();
   input += synapse0x1b0a210();
   input += synapse0x1afad40();
   input += synapse0x1afad80();
   input += synapse0x1afadc0();
   input += synapse0x1afae00();
   input += synapse0x1afae40();
   input += synapse0x1afae80();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b0a040() {
   double input = input0x1b0a040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1afaec0() {
   double input = 1.00976;
   input += synapse0x1afb200();
   input += synapse0x1afb240();
   input += synapse0x1afb280();
   input += synapse0x1afb2c0();
   input += synapse0x1afb300();
   input += synapse0x1afb340();
   input += synapse0x1afb380();
   input += synapse0x1afb3c0();
   input += synapse0x1afb400();
   input += synapse0x1afb440();
   input += synapse0x1afb480();
   input += synapse0x1afb4c0();
   input += synapse0x1afb500();
   input += synapse0x1afb540();
   input += synapse0x1afb580();
   input += synapse0x1afb5c0();
   input += synapse0x1afb050();
   input += synapse0x1afb090();
   input += synapse0x1afb710();
   input += synapse0x1afb750();
   input += synapse0x1afb790();
   input += synapse0x1afb7d0();
   input += synapse0x1afb810();
   input += synapse0x1afb850();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1afaec0() {
   double input = input0x1afaec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1afb890() {
   double input = 1.17667;
   input += synapse0x1afbbd0();
   input += synapse0x1afbc10();
   input += synapse0x1afbc50();
   input += synapse0x1afbc90();
   input += synapse0x1afbcd0();
   input += synapse0x1afbd10();
   input += synapse0x1afbd50();
   input += synapse0x1afbd90();
   input += synapse0x1afbdd0();
   input += synapse0x1afbe10();
   input += synapse0x1afbe50();
   input += synapse0x1afbe90();
   input += synapse0x1afbed0();
   input += synapse0x1afbf10();
   input += synapse0x1afbf50();
   input += synapse0x1afbf90();
   input += synapse0x1afba20();
   input += synapse0x1afba60();
   input += synapse0x1afc0e0();
   input += synapse0x1afc120();
   input += synapse0x1afc160();
   input += synapse0x1afc1a0();
   input += synapse0x1afc1e0();
   input += synapse0x1afc220();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1afb890() {
   double input = input0x1afb890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1afc260() {
   double input = 0.0258472;
   input += synapse0x1afc5a0();
   input += synapse0x1afc5e0();
   input += synapse0x1afc620();
   input += synapse0x1afc660();
   input += synapse0x1afc6a0();
   input += synapse0x1afc6e0();
   input += synapse0x1afc720();
   input += synapse0x1afc760();
   input += synapse0x1afc7a0();
   input += synapse0x1afc7e0();
   input += synapse0x1afc820();
   input += synapse0x1afc860();
   input += synapse0x1afc8a0();
   input += synapse0x1afc8e0();
   input += synapse0x1afc920();
   input += synapse0x1afc960();
   input += synapse0x1afc3f0();
   input += synapse0x1afc430();
   input += synapse0x1afcab0();
   input += synapse0x1afcaf0();
   input += synapse0x1afcb30();
   input += synapse0x1afcb70();
   input += synapse0x1afcbb0();
   input += synapse0x1afcbf0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1afc260() {
   double input = input0x1afc260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b0e8a0() {
   double input = 0.992216;
   input += synapse0x1b0eac0();
   input += synapse0x1b0eb00();
   input += synapse0x1b0eb40();
   input += synapse0x1b0eb80();
   input += synapse0x1b0ebc0();
   input += synapse0x1b0ec00();
   input += synapse0x1b0ec40();
   input += synapse0x1b0ec80();
   input += synapse0x1b0ecc0();
   input += synapse0x1b0ed00();
   input += synapse0x1b0ed40();
   input += synapse0x1b0ed80();
   input += synapse0x1b0edc0();
   input += synapse0x1b0ee00();
   input += synapse0x1b0ee40();
   input += synapse0x1b0ee80();
   input += synapse0x1afcc30();
   input += synapse0x1afcc70();
   input += synapse0x1b0efd0();
   input += synapse0x1b0f010();
   input += synapse0x1b0f050();
   input += synapse0x1b0f090();
   input += synapse0x1b0f0d0();
   input += synapse0x1b0f110();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b0e8a0() {
   double input = input0x1b0e8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b0f150() {
   double input = 0.290359;
   input += synapse0x1b0f490();
   input += synapse0x1b0f4d0();
   input += synapse0x1b0f510();
   input += synapse0x1b0f550();
   input += synapse0x1b0f590();
   input += synapse0x1b0f5d0();
   input += synapse0x1b0f610();
   input += synapse0x1b0f650();
   input += synapse0x1b0f690();
   input += synapse0x1b0f6d0();
   input += synapse0x1b0f710();
   input += synapse0x1b0f750();
   input += synapse0x1b0f790();
   input += synapse0x1b0f7d0();
   input += synapse0x1b0f810();
   input += synapse0x1b0f850();
   input += synapse0x1b0f2e0();
   input += synapse0x1b0f320();
   input += synapse0x1b0f9a0();
   input += synapse0x1b0f9e0();
   input += synapse0x1b0fa20();
   input += synapse0x1b0fa60();
   input += synapse0x1b0faa0();
   input += synapse0x1b0fae0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b0f150() {
   double input = input0x1b0f150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b0fb20() {
   double input = -0.415291;
   input += synapse0x1b0fe60();
   input += synapse0x1b0fea0();
   input += synapse0x1b0fee0();
   input += synapse0x1b0ff20();
   input += synapse0x1b0ff60();
   input += synapse0x1b0ffa0();
   input += synapse0x1b0ffe0();
   input += synapse0x1b10020();
   input += synapse0x1b10060();
   input += synapse0x1b100a0();
   input += synapse0x1b100e0();
   input += synapse0x1b10120();
   input += synapse0x1b10160();
   input += synapse0x1b101a0();
   input += synapse0x1b101e0();
   input += synapse0x1b10220();
   input += synapse0x1b0fcb0();
   input += synapse0x1b0fcf0();
   input += synapse0x1b10370();
   input += synapse0x1b103b0();
   input += synapse0x1b103f0();
   input += synapse0x1b10430();
   input += synapse0x1b10470();
   input += synapse0x1b104b0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b0fb20() {
   double input = input0x1b0fb20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b104f0() {
   double input = -0.0975173;
   input += synapse0x1b10830();
   input += synapse0x1b10870();
   input += synapse0x1b108b0();
   input += synapse0x1b108f0();
   input += synapse0x1b10930();
   input += synapse0x1b10970();
   input += synapse0x1b109b0();
   input += synapse0x1b109f0();
   input += synapse0x1b10a30();
   input += synapse0x1b10a70();
   input += synapse0x1b10ab0();
   input += synapse0x1b10af0();
   input += synapse0x1b10b30();
   input += synapse0x1b10b70();
   input += synapse0x1b10bb0();
   input += synapse0x1b10bf0();
   input += synapse0x1b10680();
   input += synapse0x1b106c0();
   input += synapse0x1b10d40();
   input += synapse0x1b10d80();
   input += synapse0x1b10dc0();
   input += synapse0x1b10e00();
   input += synapse0x1b10e40();
   input += synapse0x1b10e80();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b104f0() {
   double input = input0x1b104f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b176f0() {
   double input = 0.411402;
   input += synapse0x18b0d90();
   input += synapse0x18b0dd0();
   input += synapse0x1aee930();
   input += synapse0x1aee970();
   input += synapse0x1aef300();
   input += synapse0x1aef340();
   input += synapse0x1af00d0();
   input += synapse0x1af0110();
   input += synapse0x1af0aa0();
   input += synapse0x1af0ae0();
   input += synapse0x1af1470();
   input += synapse0x1af14b0();
   input += synapse0x1af1f50();
   input += synapse0x1af1f90();
   input += synapse0x1af2920();
   input += synapse0x1af2960();
   input += synapse0x1aefa00();
   input += synapse0x1aefa40();
   input += synapse0x1af44d0();
   input += synapse0x1af4510();
   input += synapse0x1af4ea0();
   input += synapse0x1af4ee0();
   input += synapse0x1af5870();
   input += synapse0x1af58b0();
   input += synapse0x1af6240();
   input += synapse0x1af6280();
   input += synapse0x1aea3e0();
   input += synapse0x1aea420();
   input += synapse0x1af8330();
   input += synapse0x1af8370();
   input += synapse0x1af8d00();
   input += synapse0x1af8d40();
   input += synapse0x1af96d0();
   input += synapse0x1af9710();
   input += synapse0x1afa0a0();
   input += synapse0x1afa0e0();
   input += synapse0x1afaa70();
   input += synapse0x1afaab0();
   input += synapse0x1af35c0();
   input += synapse0x1af3600();
   input += synapse0x1afce70();
   input += synapse0x1afceb0();
   input += synapse0x1afd800();
   input += synapse0x1afd840();
   input += synapse0x1afe1d0();
   input += synapse0x1afe210();
   input += synapse0x1afeba0();
   input += synapse0x1afebe0();
   input += synapse0x1aff570();
   input += synapse0x1aff5b0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b176f0() {
   double input = input0x1b176f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b17a90() {
   double input = 0.385482;
   input += synapse0x1b01cb0();
   input += synapse0x1b01cf0();
   input += synapse0x1af7270();
   input += synapse0x1af72b0();
   input += synapse0x1b04890();
   input += synapse0x1b048d0();
   input += synapse0x1b05260();
   input += synapse0x1b052a0();
   input += synapse0x1b05c30();
   input += synapse0x1b05c70();
   input += synapse0x1b06600();
   input += synapse0x1b06640();
   input += synapse0x1b06fd0();
   input += synapse0x1b07010();
   input += synapse0x1b079a0();
   input += synapse0x1b079e0();
   input += synapse0x1b08370();
   input += synapse0x1b083b0();
   input += synapse0x1b08d40();
   input += synapse0x1b08d80();
   input += synapse0x1b09920();
   input += synapse0x1b09960();
   input += synapse0x1b0a2f0();
   input += synapse0x1b0a330();
   input += synapse0x1afb170();
   input += synapse0x1afb1b0();
   input += synapse0x1afbb40();
   input += synapse0x1afbb80();
   input += synapse0x1afc510();
   input += synapse0x1afc550();
   input += synapse0x1b0ea30();
   input += synapse0x1b0ea70();
   input += synapse0x1b0f400();
   input += synapse0x1b0f440();
   input += synapse0x1b0fdd0();
   input += synapse0x1b0fe10();
   input += synapse0x1b107a0();
   input += synapse0x1b107e0();
   input += synapse0x1aec690();
   input += synapse0x1aec6d0();
   input += synapse0x1afff40();
   input += synapse0x1afff80();
   input += synapse0x1b10ec0();
   input += synapse0x1b10f00();
   input += synapse0x1b10f40();
   input += synapse0x1b10f80();
   input += synapse0x1b17e30();
   input += synapse0x1b17e70();
   input += synapse0x1b17eb0();
   input += synapse0x1b17ef0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b17a90() {
   double input = input0x1b17a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b17f30() {
   double input = -0.407679;
   input += synapse0x1b18270();
   input += synapse0x1b182b0();
   input += synapse0x1b182f0();
   input += synapse0x1b18330();
   input += synapse0x1b18370();
   input += synapse0x1b183b0();
   input += synapse0x1b183f0();
   input += synapse0x1b18430();
   input += synapse0x1b18470();
   input += synapse0x1b184b0();
   input += synapse0x1b184f0();
   input += synapse0x1b18530();
   input += synapse0x1b18570();
   input += synapse0x1b185b0();
   input += synapse0x1b185f0();
   input += synapse0x1b18630();
   input += synapse0x1b180c0();
   input += synapse0x1b18100();
   input += synapse0x1b18780();
   input += synapse0x1b187c0();
   input += synapse0x1b18800();
   input += synapse0x1b18840();
   input += synapse0x1b18880();
   input += synapse0x1b188c0();
   input += synapse0x1b18900();
   input += synapse0x1b18940();
   input += synapse0x1b18980();
   input += synapse0x1b189c0();
   input += synapse0x1b18a00();
   input += synapse0x1b18a40();
   input += synapse0x1b18a80();
   input += synapse0x1b18ac0();
   input += synapse0x1b18670();
   input += synapse0x1b186b0();
   input += synapse0x1b186f0();
   input += synapse0x1b18730();
   input += synapse0x1b18d10();
   input += synapse0x1b18d50();
   input += synapse0x1b18d90();
   input += synapse0x1b18dd0();
   input += synapse0x1b18e10();
   input += synapse0x1b18e50();
   input += synapse0x1b18e90();
   input += synapse0x1b18ed0();
   input += synapse0x1b18f10();
   input += synapse0x1b18f50();
   input += synapse0x1b18f90();
   input += synapse0x1b18fd0();
   input += synapse0x1b19010();
   input += synapse0x1b19050();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b17f30() {
   double input = input0x1b17f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b19090() {
   double input = 0.450665;
   input += synapse0x1b193d0();
   input += synapse0x1b19410();
   input += synapse0x1b19450();
   input += synapse0x1b19490();
   input += synapse0x1b194d0();
   input += synapse0x1b19510();
   input += synapse0x1b19550();
   input += synapse0x1b19590();
   input += synapse0x1b195d0();
   input += synapse0x1b19610();
   input += synapse0x1b19650();
   input += synapse0x1b19690();
   input += synapse0x1b196d0();
   input += synapse0x1b19710();
   input += synapse0x1b19750();
   input += synapse0x1b19790();
   input += synapse0x1b19220();
   input += synapse0x1b19260();
   input += synapse0x1b198e0();
   input += synapse0x1b19920();
   input += synapse0x1b19960();
   input += synapse0x1b199a0();
   input += synapse0x1b199e0();
   input += synapse0x1b19a20();
   input += synapse0x1b19a60();
   input += synapse0x1b19aa0();
   input += synapse0x1b19ae0();
   input += synapse0x1b19b20();
   input += synapse0x1b19b60();
   input += synapse0x1b19ba0();
   input += synapse0x1b19be0();
   input += synapse0x1b19c20();
   input += synapse0x1b197d0();
   input += synapse0x1b19810();
   input += synapse0x1b19850();
   input += synapse0x1b19890();
   input += synapse0x1b19e70();
   input += synapse0x1b19eb0();
   input += synapse0x1b19ef0();
   input += synapse0x1b19f30();
   input += synapse0x1b19f70();
   input += synapse0x1b19fb0();
   input += synapse0x1b19ff0();
   input += synapse0x1b1a030();
   input += synapse0x1b1a070();
   input += synapse0x1b1a0b0();
   input += synapse0x1b1a0f0();
   input += synapse0x1b1a130();
   input += synapse0x1b1a170();
   input += synapse0x1b1a1b0();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b19090() {
   double input = input0x1b19090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b1a1f0() {
   double input = 1.16566;
   input += synapse0x1b1a530();
   input += synapse0x1b1a570();
   input += synapse0x1b1a5b0();
   input += synapse0x1b1a5f0();
   input += synapse0x1b1a630();
   input += synapse0x1b1a670();
   input += synapse0x1b1a6b0();
   input += synapse0x1b1a6f0();
   input += synapse0x1b1a730();
   input += synapse0x1b1a770();
   input += synapse0x1b1a7b0();
   input += synapse0x1b1a7f0();
   input += synapse0x1b1a830();
   input += synapse0x1b1a870();
   input += synapse0x1b1a8b0();
   input += synapse0x1b1a8f0();
   input += synapse0x1b1a380();
   input += synapse0x1b1a3c0();
   input += synapse0x1b1aa40();
   input += synapse0x1b1aa80();
   input += synapse0x1b1aac0();
   input += synapse0x1b1ab00();
   input += synapse0x1b1ab40();
   input += synapse0x1b1ab80();
   input += synapse0x1b1abc0();
   input += synapse0x1b1ac00();
   input += synapse0x1b1ac40();
   input += synapse0x1b1ac80();
   input += synapse0x1b1acc0();
   input += synapse0x1b1ad00();
   input += synapse0x1b1ad40();
   input += synapse0x1b1ad80();
   input += synapse0x1b1a930();
   input += synapse0x1b1a970();
   input += synapse0x1b1a9b0();
   input += synapse0x1b1a9f0();
   input += synapse0x1b1afd0();
   input += synapse0x1b1b010();
   input += synapse0x1b1b050();
   input += synapse0x1b1b090();
   input += synapse0x1b1b0d0();
   input += synapse0x1b1b110();
   input += synapse0x1b1b150();
   input += synapse0x1b1b190();
   input += synapse0x1b1b1d0();
   input += synapse0x1b1b210();
   input += synapse0x1b1b250();
   input += synapse0x1b1b290();
   input += synapse0x1b1b2d0();
   input += synapse0x1b1b310();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b1a1f0() {
   double input = input0x1b1a1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsL::input0x1b1b350() {
   double input = 1.28957;
   input += synapse0x1b1b570();
   input += synapse0x1b1b5b0();
   input += synapse0x1b1b5f0();
   input += synapse0x1b1b630();
   input += synapse0x1b1b670();
   return input;
}

double NNfunction_sb_sLsL::neuron0x1b1b350() {
   double input = input0x1b1b350();
   return (input * 1)+0;
}

double NNfunction_sb_sLsL::synapse0x1ae7300() {
   return (neuron0x1ae7440()*-0.125384);
}

double NNfunction_sb_sLsL::synapse0x1ae7340() {
   return (neuron0x1ae7780()*-0.0616503);
}

double NNfunction_sb_sLsL::synapse0x1aec720() {
   return (neuron0x1ae7ac0()*-0.527299);
}

double NNfunction_sb_sLsL::synapse0x1aec760() {
   return (neuron0x1ae7e00()*1.43354);
}

double NNfunction_sb_sLsL::synapse0x1aec7a0() {
   return (neuron0x1ae8140()*0.11443);
}

double NNfunction_sb_sLsL::synapse0x1aec7e0() {
   return (neuron0x1ae8480()*-0.0385287);
}

double NNfunction_sb_sLsL::synapse0x1aec820() {
   return (neuron0x1ae87c0()*0.332154);
}

double NNfunction_sb_sLsL::synapse0x1aec860() {
   return (neuron0x1ae8b00()*-0.0113523);
}

double NNfunction_sb_sLsL::synapse0x1aec8a0() {
   return (neuron0x1ae8e40()*-0.0359157);
}

double NNfunction_sb_sLsL::synapse0x1aec8e0() {
   return (neuron0x1ae9180()*-0.0500801);
}

double NNfunction_sb_sLsL::synapse0x1aec920() {
   return (neuron0x1ae94c0()*0.00296037);
}

double NNfunction_sb_sLsL::synapse0x1aec960() {
   return (neuron0x1ae9800()*-0.0402653);
}

double NNfunction_sb_sLsL::synapse0x1aec9a0() {
   return (neuron0x1ae9b40()*1.68769);
}

double NNfunction_sb_sLsL::synapse0x1aec9e0() {
   return (neuron0x1ae9e80()*-0.109745);
}

double NNfunction_sb_sLsL::synapse0x1aeca20() {
   return (neuron0x1aea1c0()*0.140937);
}

double NNfunction_sb_sLsL::synapse0x1aeca60() {
   return (neuron0x1aea500()*-0.0853205);
}

double NNfunction_sb_sLsL::synapse0x1ae7270() {
   return (neuron0x1aea840()*0.131113);
}

double NNfunction_sb_sLsL::synapse0x1ae72b0() {
   return (neuron0x1aeada0()*-0.00909979);
}

double NNfunction_sb_sLsL::synapse0x18a2630() {
   return (neuron0x1aeafc0()*-0.0187065);
}

double NNfunction_sb_sLsL::synapse0x18a2670() {
   return (neuron0x1aeb300()*0.146832);
}

double NNfunction_sb_sLsL::synapse0x1aeccc0() {
   return (neuron0x1aeb640()*0.000382277);
}

double NNfunction_sb_sLsL::synapse0x1aecd00() {
   return (neuron0x1aeb980()*0.0245908);
}

double NNfunction_sb_sLsL::synapse0x1aecd40() {
   return (neuron0x1aebcc0()*-0.0643949);
}

double NNfunction_sb_sLsL::synapse0x1aecd80() {
   return (neuron0x1aec000()*0.0753704);
}

double NNfunction_sb_sLsL::synapse0x1aed100() {
   return (neuron0x1ae7440()*0.0324653);
}

double NNfunction_sb_sLsL::synapse0x1aed140() {
   return (neuron0x1ae7780()*0.161321);
}

double NNfunction_sb_sLsL::synapse0x1aed180() {
   return (neuron0x1ae7ac0()*0.534118);
}

double NNfunction_sb_sLsL::synapse0x1aed1c0() {
   return (neuron0x1ae7e00()*-0.0418409);
}

double NNfunction_sb_sLsL::synapse0x1aed200() {
   return (neuron0x1ae8140()*-0.115056);
}

double NNfunction_sb_sLsL::synapse0x1aed240() {
   return (neuron0x1ae8480()*-0.6281);
}

double NNfunction_sb_sLsL::synapse0x1aed280() {
   return (neuron0x1ae87c0()*-0.147142);
}

double NNfunction_sb_sLsL::synapse0x1aed2c0() {
   return (neuron0x1ae8b00()*0.232374);
}

double NNfunction_sb_sLsL::synapse0x1aed300() {
   return (neuron0x1ae8e40()*0.0978172);
}

double NNfunction_sb_sLsL::synapse0x1aecbb0() {
   return (neuron0x1ae9180()*0.172999);
}

double NNfunction_sb_sLsL::synapse0x1aecbf0() {
   return (neuron0x1ae94c0()*-0.0544727);
}

double NNfunction_sb_sLsL::synapse0x1aecc30() {
   return (neuron0x1ae9800()*-0.0288766);
}

double NNfunction_sb_sLsL::synapse0x1aecc70() {
   return (neuron0x1ae9b40()*0.528352);
}

double NNfunction_sb_sLsL::synapse0x1aed550() {
   return (neuron0x1ae9e80()*0.0934724);
}

double NNfunction_sb_sLsL::synapse0x1aed590() {
   return (neuron0x1aea1c0()*0.0863025);
}

double NNfunction_sb_sLsL::synapse0x1aed5d0() {
   return (neuron0x1aea500()*-0.447812);
}

double NNfunction_sb_sLsL::synapse0x1aecf50() {
   return (neuron0x1aea840()*0.208514);
}

double NNfunction_sb_sLsL::synapse0x1aecf90() {
   return (neuron0x1aeada0()*-0.0885013);
}

double NNfunction_sb_sLsL::synapse0x1aed720() {
   return (neuron0x1aeafc0()*0.0140057);
}

double NNfunction_sb_sLsL::synapse0x1aed760() {
   return (neuron0x1aeb300()*-0.0265788);
}

double NNfunction_sb_sLsL::synapse0x1aed7a0() {
   return (neuron0x1aeb640()*0.119605);
}

double NNfunction_sb_sLsL::synapse0x1aed7e0() {
   return (neuron0x1aeb980()*-0.00725283);
}

double NNfunction_sb_sLsL::synapse0x1aed820() {
   return (neuron0x1aebcc0()*0.00111363);
}

double NNfunction_sb_sLsL::synapse0x1aed860() {
   return (neuron0x1aec000()*0.0987732);
}

double NNfunction_sb_sLsL::synapse0x1aedbe0() {
   return (neuron0x1ae7440()*-0.189147);
}

double NNfunction_sb_sLsL::synapse0x1aedc20() {
   return (neuron0x1ae7780()*-0.020446);
}

double NNfunction_sb_sLsL::synapse0x1aedc60() {
   return (neuron0x1ae7ac0()*-0.443644);
}

double NNfunction_sb_sLsL::synapse0x1aedca0() {
   return (neuron0x1ae7e00()*-0.308245);
}

double NNfunction_sb_sLsL::synapse0x1aedce0() {
   return (neuron0x1ae8140()*0.0481459);
}

double NNfunction_sb_sLsL::synapse0x1aedd20() {
   return (neuron0x1ae8480()*-0.0122587);
}

double NNfunction_sb_sLsL::synapse0x1aedd60() {
   return (neuron0x1ae87c0()*-0.067764);
}

double NNfunction_sb_sLsL::synapse0x1aedda0() {
   return (neuron0x1ae8b00()*-0.164926);
}

double NNfunction_sb_sLsL::synapse0x1aedde0() {
   return (neuron0x1ae8e40()*-0.0187705);
}

double NNfunction_sb_sLsL::synapse0x1aede20() {
   return (neuron0x1ae9180()*0.0374212);
}

double NNfunction_sb_sLsL::synapse0x1aede60() {
   return (neuron0x1ae94c0()*0.0543363);
}

double NNfunction_sb_sLsL::synapse0x1aedea0() {
   return (neuron0x1ae9800()*-0.0590033);
}

double NNfunction_sb_sLsL::synapse0x1aedee0() {
   return (neuron0x1ae9b40()*-0.517826);
}

double NNfunction_sb_sLsL::synapse0x1aedf20() {
   return (neuron0x1ae9e80()*0.130935);
}

double NNfunction_sb_sLsL::synapse0x1aedf60() {
   return (neuron0x1aea1c0()*-0.154295);
}

double NNfunction_sb_sLsL::synapse0x1aedfa0() {
   return (neuron0x1aea500()*-0.103338);
}

double NNfunction_sb_sLsL::synapse0x1aeda30() {
   return (neuron0x1aea840()*0.138785);
}

double NNfunction_sb_sLsL::synapse0x1aeda70() {
   return (neuron0x1aeada0()*-0.0397851);
}

double NNfunction_sb_sLsL::synapse0x18a2cd0() {
   return (neuron0x1aeafc0()*-0.0942813);
}

double NNfunction_sb_sLsL::synapse0x18b05a0() {
   return (neuron0x1aeb300()*-0.0811451);
}

double NNfunction_sb_sLsL::synapse0x18b05e0() {
   return (neuron0x1aeb640()*0.00481864);
}

double NNfunction_sb_sLsL::synapse0x1ad64d0() {
   return (neuron0x1aeb980()*-0.000189245);
}

double NNfunction_sb_sLsL::synapse0x1ad6510() {
   return (neuron0x1aebcc0()*-0.0229568);
}

double NNfunction_sb_sLsL::synapse0x1ad6550() {
   return (neuron0x1aec000()*-0.0313328);
}

double NNfunction_sb_sLsL::synapse0x18b0e20() {
   return (neuron0x1ae7440()*-0.0406378);
}

double NNfunction_sb_sLsL::synapse0x1aed4d0() {
   return (neuron0x1ae7780()*-0.000133808);
}

double NNfunction_sb_sLsL::synapse0x1aed510() {
   return (neuron0x1ae7ac0()*-0.157109);
}

double NNfunction_sb_sLsL::synapse0x1aee0f0() {
   return (neuron0x1ae7e00()*0.718377);
}

double NNfunction_sb_sLsL::synapse0x1aee130() {
   return (neuron0x1ae8140()*0.0236879);
}

double NNfunction_sb_sLsL::synapse0x1aee170() {
   return (neuron0x1ae8480()*-0.0290031);
}

double NNfunction_sb_sLsL::synapse0x1aee1b0() {
   return (neuron0x1ae87c0()*0.0286241);
}

double NNfunction_sb_sLsL::synapse0x1aee1f0() {
   return (neuron0x1ae8b00()*-0.00766049);
}

double NNfunction_sb_sLsL::synapse0x1aee230() {
   return (neuron0x1ae8e40()*0.0150716);
}

double NNfunction_sb_sLsL::synapse0x1aee270() {
   return (neuron0x1ae9180()*-0.0105377);
}

double NNfunction_sb_sLsL::synapse0x1aee2b0() {
   return (neuron0x1ae94c0()*0.0549671);
}

double NNfunction_sb_sLsL::synapse0x1aee2f0() {
   return (neuron0x1ae9800()*0.00490694);
}

double NNfunction_sb_sLsL::synapse0x1aee330() {
   return (neuron0x1ae9b40()*2.60808);
}

double NNfunction_sb_sLsL::synapse0x1aee370() {
   return (neuron0x1ae9e80()*0.00198844);
}

double NNfunction_sb_sLsL::synapse0x1aee3b0() {
   return (neuron0x1aea1c0()*-0.00672656);
}

double NNfunction_sb_sLsL::synapse0x1aee3f0() {
   return (neuron0x1aea500()*-0.029922);
}

double NNfunction_sb_sLsL::synapse0x1ae7380() {
   return (neuron0x1aea840()*0.0330983);
}

double NNfunction_sb_sLsL::synapse0x1ae73c0() {
   return (neuron0x1aeada0()*0.00542664);
}

double NNfunction_sb_sLsL::synapse0x1ae7400() {
   return (neuron0x1aeafc0()*0.00788126);
}

double NNfunction_sb_sLsL::synapse0x1aee540() {
   return (neuron0x1aeb300()*0.0290327);
}

double NNfunction_sb_sLsL::synapse0x1aee580() {
   return (neuron0x1aeb640()*-0.0272061);
}

double NNfunction_sb_sLsL::synapse0x1aee5c0() {
   return (neuron0x1aeb980()*0.0390936);
}

double NNfunction_sb_sLsL::synapse0x1aee600() {
   return (neuron0x1aebcc0()*-0.00531819);
}

double NNfunction_sb_sLsL::synapse0x1aee640() {
   return (neuron0x1aec000()*-0.00966526);
}

double NNfunction_sb_sLsL::synapse0x1aee9c0() {
   return (neuron0x1ae7440()*0.266182);
}

double NNfunction_sb_sLsL::synapse0x1aeea00() {
   return (neuron0x1ae7780()*-0.300227);
}

double NNfunction_sb_sLsL::synapse0x1aeea40() {
   return (neuron0x1ae7ac0()*-0.0863805);
}

double NNfunction_sb_sLsL::synapse0x1aeea80() {
   return (neuron0x1ae7e00()*-0.0944839);
}

double NNfunction_sb_sLsL::synapse0x1aeeac0() {
   return (neuron0x1ae8140()*-0.388396);
}

double NNfunction_sb_sLsL::synapse0x1aeeb00() {
   return (neuron0x1ae8480()*0.0171645);
}

double NNfunction_sb_sLsL::synapse0x1aeeb40() {
   return (neuron0x1ae87c0()*-0.0800286);
}

double NNfunction_sb_sLsL::synapse0x1aeeb80() {
   return (neuron0x1ae8b00()*0.0562673);
}

double NNfunction_sb_sLsL::synapse0x1aeebc0() {
   return (neuron0x1ae8e40()*-0.107775);
}

double NNfunction_sb_sLsL::synapse0x1aeec00() {
   return (neuron0x1ae9180()*0.133945);
}

double NNfunction_sb_sLsL::synapse0x1aeec40() {
   return (neuron0x1ae94c0()*0.275713);
}

double NNfunction_sb_sLsL::synapse0x1aeec80() {
   return (neuron0x1ae9800()*-0.266452);
}

double NNfunction_sb_sLsL::synapse0x1aeecc0() {
   return (neuron0x1ae9b40()*-0.764417);
}

double NNfunction_sb_sLsL::synapse0x1aeed00() {
   return (neuron0x1ae9e80()*-0.0973807);
}

double NNfunction_sb_sLsL::synapse0x1aeed40() {
   return (neuron0x1aea1c0()*0.269827);
}

double NNfunction_sb_sLsL::synapse0x1aeed80() {
   return (neuron0x1aea500()*0.381486);
}

double NNfunction_sb_sLsL::synapse0x1aee810() {
   return (neuron0x1aea840()*-0.1792);
}

double NNfunction_sb_sLsL::synapse0x1aee850() {
   return (neuron0x1aeada0()*-0.0042335);
}

double NNfunction_sb_sLsL::synapse0x1aeeed0() {
   return (neuron0x1aeafc0()*-0.296078);
}

double NNfunction_sb_sLsL::synapse0x1aeef10() {
   return (neuron0x1aeb300()*-0.33599);
}

double NNfunction_sb_sLsL::synapse0x1aeef50() {
   return (neuron0x1aeb640()*0.0116057);
}

double NNfunction_sb_sLsL::synapse0x1aeef90() {
   return (neuron0x1aeb980()*0.140632);
}

double NNfunction_sb_sLsL::synapse0x1aeefd0() {
   return (neuron0x1aebcc0()*0.107331);
}

double NNfunction_sb_sLsL::synapse0x1aef010() {
   return (neuron0x1aec000()*0.422447);
}

double NNfunction_sb_sLsL::synapse0x1aef390() {
   return (neuron0x1ae7440()*0.0574372);
}

double NNfunction_sb_sLsL::synapse0x1aef3d0() {
   return (neuron0x1ae7780()*-0.13121);
}

double NNfunction_sb_sLsL::synapse0x1aef410() {
   return (neuron0x1ae7ac0()*-0.235355);
}

double NNfunction_sb_sLsL::synapse0x1aef450() {
   return (neuron0x1ae7e00()*-0.911375);
}

double NNfunction_sb_sLsL::synapse0x1aef490() {
   return (neuron0x1ae8140()*0.24913);
}

double NNfunction_sb_sLsL::synapse0x1aef4d0() {
   return (neuron0x1ae8480()*-0.268409);
}

double NNfunction_sb_sLsL::synapse0x1aef510() {
   return (neuron0x1ae87c0()*-0.102525);
}

double NNfunction_sb_sLsL::synapse0x1aef550() {
   return (neuron0x1ae8b00()*0.0855618);
}

double NNfunction_sb_sLsL::synapse0x1aef590() {
   return (neuron0x1ae8e40()*-0.0704485);
}

double NNfunction_sb_sLsL::synapse0x18b08f0() {
   return (neuron0x1ae9180()*-0.0300141);
}

double NNfunction_sb_sLsL::synapse0x18b0930() {
   return (neuron0x1ae94c0()*-0.111406);
}

double NNfunction_sb_sLsL::synapse0x18b0970() {
   return (neuron0x1ae9800()*-0.108832);
}

double NNfunction_sb_sLsL::synapse0x18b09b0() {
   return (neuron0x1ae9b40()*0.748732);
}

double NNfunction_sb_sLsL::synapse0x18b09f0() {
   return (neuron0x1ae9e80()*0.0867818);
}

double NNfunction_sb_sLsL::synapse0x18b0a30() {
   return (neuron0x1aea1c0()*-0.13032);
}

double NNfunction_sb_sLsL::synapse0x18b0a70() {
   return (neuron0x1aea500()*0.210999);
}

double NNfunction_sb_sLsL::synapse0x1aef1e0() {
   return (neuron0x1aea840()*-0.117305);
}

double NNfunction_sb_sLsL::synapse0x1aef220() {
   return (neuron0x1aeada0()*-0.094792);
}

double NNfunction_sb_sLsL::synapse0x18b0bc0() {
   return (neuron0x1aeafc0()*-0.0550939);
}

double NNfunction_sb_sLsL::synapse0x18b0c00() {
   return (neuron0x1aeb300()*-0.0236569);
}

double NNfunction_sb_sLsL::synapse0x18b0c40() {
   return (neuron0x1aeb640()*-0.0614285);
}

double NNfunction_sb_sLsL::synapse0x18b0c80() {
   return (neuron0x1aeb980()*-0.0843484);
}

double NNfunction_sb_sLsL::synapse0x18b0cc0() {
   return (neuron0x1aebcc0()*0.00803245);
}

double NNfunction_sb_sLsL::synapse0x1aefde0() {
   return (neuron0x1aec000()*0.0204498);
}

double NNfunction_sb_sLsL::synapse0x1af0160() {
   return (neuron0x1ae7440()*-0.00111941);
}

double NNfunction_sb_sLsL::synapse0x1af01a0() {
   return (neuron0x1ae7780()*0.00511885);
}

double NNfunction_sb_sLsL::synapse0x1af01e0() {
   return (neuron0x1ae7ac0()*-0.0105267);
}

double NNfunction_sb_sLsL::synapse0x1af0220() {
   return (neuron0x1ae7e00()*0.201729);
}

double NNfunction_sb_sLsL::synapse0x1af0260() {
   return (neuron0x1ae8140()*-0.0143665);
}

double NNfunction_sb_sLsL::synapse0x1af02a0() {
   return (neuron0x1ae8480()*-0.0362494);
}

double NNfunction_sb_sLsL::synapse0x1af02e0() {
   return (neuron0x1ae87c0()*0.00450012);
}

double NNfunction_sb_sLsL::synapse0x1af0320() {
   return (neuron0x1ae8b00()*-0.00416725);
}

double NNfunction_sb_sLsL::synapse0x1af0360() {
   return (neuron0x1ae8e40()*-0.0120353);
}

double NNfunction_sb_sLsL::synapse0x1af03a0() {
   return (neuron0x1ae9180()*-0.00424897);
}

double NNfunction_sb_sLsL::synapse0x1af03e0() {
   return (neuron0x1ae94c0()*0.0819895);
}

double NNfunction_sb_sLsL::synapse0x1af0420() {
   return (neuron0x1ae9800()*0.124029);
}

double NNfunction_sb_sLsL::synapse0x1af0460() {
   return (neuron0x1ae9b40()*-1.00936);
}

double NNfunction_sb_sLsL::synapse0x1af04a0() {
   return (neuron0x1ae9e80()*0.0577828);
}

double NNfunction_sb_sLsL::synapse0x1af04e0() {
   return (neuron0x1aea1c0()*0.0320159);
}

double NNfunction_sb_sLsL::synapse0x1af0520() {
   return (neuron0x1aea500()*0.0154249);
}

double NNfunction_sb_sLsL::synapse0x1aeffb0() {
   return (neuron0x1aea840()*0.00960512);
}

double NNfunction_sb_sLsL::synapse0x1aefff0() {
   return (neuron0x1aeada0()*0.0400754);
}

double NNfunction_sb_sLsL::synapse0x1af0670() {
   return (neuron0x1aeafc0()*0.0790863);
}

double NNfunction_sb_sLsL::synapse0x1af06b0() {
   return (neuron0x1aeb300()*0.0742049);
}

double NNfunction_sb_sLsL::synapse0x1af06f0() {
   return (neuron0x1aeb640()*0.0166708);
}

double NNfunction_sb_sLsL::synapse0x1af0730() {
   return (neuron0x1aeb980()*-0.0378687);
}

double NNfunction_sb_sLsL::synapse0x1af0770() {
   return (neuron0x1aebcc0()*0.00837942);
}

double NNfunction_sb_sLsL::synapse0x1af07b0() {
   return (neuron0x1aec000()*0.0253845);
}

double NNfunction_sb_sLsL::synapse0x1af0b30() {
   return (neuron0x1ae7440()*-0.0476278);
}

double NNfunction_sb_sLsL::synapse0x1af0b70() {
   return (neuron0x1ae7780()*-0.030193);
}

double NNfunction_sb_sLsL::synapse0x1af0bb0() {
   return (neuron0x1ae7ac0()*-0.0322573);
}

double NNfunction_sb_sLsL::synapse0x1af0bf0() {
   return (neuron0x1ae7e00()*1.02375);
}

double NNfunction_sb_sLsL::synapse0x1af0c30() {
   return (neuron0x1ae8140()*0.0983059);
}

double NNfunction_sb_sLsL::synapse0x1af0c70() {
   return (neuron0x1ae8480()*-0.0490333);
}

double NNfunction_sb_sLsL::synapse0x1af0cb0() {
   return (neuron0x1ae87c0()*0.0048788);
}

double NNfunction_sb_sLsL::synapse0x1af0cf0() {
   return (neuron0x1ae8b00()*0.0875892);
}

double NNfunction_sb_sLsL::synapse0x1af0d30() {
   return (neuron0x1ae8e40()*0.0106287);
}

double NNfunction_sb_sLsL::synapse0x1af0d70() {
   return (neuron0x1ae9180()*-0.00121549);
}

double NNfunction_sb_sLsL::synapse0x1af0db0() {
   return (neuron0x1ae94c0()*-0.0206489);
}

double NNfunction_sb_sLsL::synapse0x1af0df0() {
   return (neuron0x1ae9800()*0.121881);
}

double NNfunction_sb_sLsL::synapse0x1af0e30() {
   return (neuron0x1ae9b40()*-0.8762);
}

double NNfunction_sb_sLsL::synapse0x1af0e70() {
   return (neuron0x1ae9e80()*-0.0294682);
}

double NNfunction_sb_sLsL::synapse0x1af0eb0() {
   return (neuron0x1aea1c0()*-0.0222986);
}

double NNfunction_sb_sLsL::synapse0x1af0ef0() {
   return (neuron0x1aea500()*0.289346);
}

double NNfunction_sb_sLsL::synapse0x1af0980() {
   return (neuron0x1aea840()*0.0260522);
}

double NNfunction_sb_sLsL::synapse0x1af09c0() {
   return (neuron0x1aeada0()*0.0668921);
}

double NNfunction_sb_sLsL::synapse0x1af1040() {
   return (neuron0x1aeafc0()*0.0249843);
}

double NNfunction_sb_sLsL::synapse0x1af1080() {
   return (neuron0x1aeb300()*0.000795604);
}

double NNfunction_sb_sLsL::synapse0x1af10c0() {
   return (neuron0x1aeb640()*-0.0148483);
}

double NNfunction_sb_sLsL::synapse0x1af1100() {
   return (neuron0x1aeb980()*-0.0152149);
}

double NNfunction_sb_sLsL::synapse0x1af1140() {
   return (neuron0x1aebcc0()*-0.0272884);
}

double NNfunction_sb_sLsL::synapse0x1af1180() {
   return (neuron0x1aec000()*-0.0343341);
}

double NNfunction_sb_sLsL::synapse0x1aeac90() {
   return (neuron0x1ae7440()*0.138673);
}

double NNfunction_sb_sLsL::synapse0x1aeacd0() {
   return (neuron0x1ae7780()*-0.013562);
}

double NNfunction_sb_sLsL::synapse0x1aead10() {
   return (neuron0x1ae7ac0()*-0.452101);
}

double NNfunction_sb_sLsL::synapse0x1aead50() {
   return (neuron0x1ae7e00()*0.93188);
}

double NNfunction_sb_sLsL::synapse0x1af1710() {
   return (neuron0x1ae8140()*-0.0288823);
}

double NNfunction_sb_sLsL::synapse0x1af1750() {
   return (neuron0x1ae8480()*-0.0226964);
}

double NNfunction_sb_sLsL::synapse0x1af1790() {
   return (neuron0x1ae87c0()*-0.144816);
}

double NNfunction_sb_sLsL::synapse0x1af17d0() {
   return (neuron0x1ae8b00()*-0.0364947);
}

double NNfunction_sb_sLsL::synapse0x1af1810() {
   return (neuron0x1ae8e40()*-0.0659536);
}

double NNfunction_sb_sLsL::synapse0x1af1850() {
   return (neuron0x1ae9180()*0.0467987);
}

double NNfunction_sb_sLsL::synapse0x1af1890() {
   return (neuron0x1ae94c0()*-0.0606355);
}

double NNfunction_sb_sLsL::synapse0x1af18d0() {
   return (neuron0x1ae9800()*0.0788785);
}

double NNfunction_sb_sLsL::synapse0x1af1910() {
   return (neuron0x1ae9b40()*-0.351147);
}

double NNfunction_sb_sLsL::synapse0x1af1950() {
   return (neuron0x1ae9e80()*0.0982709);
}

double NNfunction_sb_sLsL::synapse0x1af1990() {
   return (neuron0x1aea1c0()*-0.0667689);
}

double NNfunction_sb_sLsL::synapse0x1af19d0() {
   return (neuron0x1aea500()*-0.155567);
}

double NNfunction_sb_sLsL::synapse0x1af1350() {
   return (neuron0x1aea840()*0.0451175);
}

double NNfunction_sb_sLsL::synapse0x1af1390() {
   return (neuron0x1aeada0()*0.0371614);
}

double NNfunction_sb_sLsL::synapse0x1af1b20() {
   return (neuron0x1aeafc0()*0.0188338);
}

double NNfunction_sb_sLsL::synapse0x1af1b60() {
   return (neuron0x1aeb300()*0.0249528);
}

double NNfunction_sb_sLsL::synapse0x1af1ba0() {
   return (neuron0x1aeb640()*0.019317);
}

double NNfunction_sb_sLsL::synapse0x1af1be0() {
   return (neuron0x1aeb980()*0.0723498);
}

double NNfunction_sb_sLsL::synapse0x1af1c20() {
   return (neuron0x1aebcc0()*0.0246118);
}

double NNfunction_sb_sLsL::synapse0x1af1c60() {
   return (neuron0x1aec000()*0.0288249);
}

double NNfunction_sb_sLsL::synapse0x1af1fe0() {
   return (neuron0x1ae7440()*-0.1146);
}

double NNfunction_sb_sLsL::synapse0x1af2020() {
   return (neuron0x1ae7780()*-0.00485052);
}

double NNfunction_sb_sLsL::synapse0x1af2060() {
   return (neuron0x1ae7ac0()*-0.158351);
}

double NNfunction_sb_sLsL::synapse0x1af20a0() {
   return (neuron0x1ae7e00()*0.366498);
}

double NNfunction_sb_sLsL::synapse0x1af20e0() {
   return (neuron0x1ae8140()*-0.0443412);
}

double NNfunction_sb_sLsL::synapse0x1af2120() {
   return (neuron0x1ae8480()*-0.0217992);
}

double NNfunction_sb_sLsL::synapse0x1af2160() {
   return (neuron0x1ae87c0()*0.0155701);
}

double NNfunction_sb_sLsL::synapse0x1af21a0() {
   return (neuron0x1ae8b00()*0.166589);
}

double NNfunction_sb_sLsL::synapse0x1af21e0() {
   return (neuron0x1ae8e40()*-0.0672207);
}

double NNfunction_sb_sLsL::synapse0x1af2220() {
   return (neuron0x1ae9180()*0.0487312);
}

double NNfunction_sb_sLsL::synapse0x1af2260() {
   return (neuron0x1ae94c0()*0.0312776);
}

double NNfunction_sb_sLsL::synapse0x1af22a0() {
   return (neuron0x1ae9800()*-0.16076);
}

double NNfunction_sb_sLsL::synapse0x1af22e0() {
   return (neuron0x1ae9b40()*-0.134091);
}

double NNfunction_sb_sLsL::synapse0x1af2320() {
   return (neuron0x1ae9e80()*0.078479);
}

double NNfunction_sb_sLsL::synapse0x1af2360() {
   return (neuron0x1aea1c0()*-0.147724);
}

double NNfunction_sb_sLsL::synapse0x1af23a0() {
   return (neuron0x1aea500()*-0.0815348);
}

double NNfunction_sb_sLsL::synapse0x1af1e30() {
   return (neuron0x1aea840()*0.0639692);
}

double NNfunction_sb_sLsL::synapse0x1af1e70() {
   return (neuron0x1aeada0()*-0.060869);
}

double NNfunction_sb_sLsL::synapse0x1af24f0() {
   return (neuron0x1aeafc0()*-0.0388265);
}

double NNfunction_sb_sLsL::synapse0x1af2530() {
   return (neuron0x1aeb300()*-0.0221643);
}

double NNfunction_sb_sLsL::synapse0x1af2570() {
   return (neuron0x1aeb640()*-0.0156863);
}

double NNfunction_sb_sLsL::synapse0x1af25b0() {
   return (neuron0x1aeb980()*-0.015);
}

double NNfunction_sb_sLsL::synapse0x1af25f0() {
   return (neuron0x1aebcc0()*0.0232914);
}

double NNfunction_sb_sLsL::synapse0x1af2630() {
   return (neuron0x1aec000()*-0.00534263);
}

double NNfunction_sb_sLsL::synapse0x1af29b0() {
   return (neuron0x1ae7440()*-0.00182661);
}

double NNfunction_sb_sLsL::synapse0x1af29f0() {
   return (neuron0x1ae7780()*-0.196749);
}

double NNfunction_sb_sLsL::synapse0x1af2a30() {
   return (neuron0x1ae7ac0()*-0.309751);
}

double NNfunction_sb_sLsL::synapse0x1af2a70() {
   return (neuron0x1ae7e00()*-0.651738);
}

double NNfunction_sb_sLsL::synapse0x1af2ab0() {
   return (neuron0x1ae8140()*0.419188);
}

double NNfunction_sb_sLsL::synapse0x1af2af0() {
   return (neuron0x1ae8480()*0.108715);
}

double NNfunction_sb_sLsL::synapse0x1af2b30() {
   return (neuron0x1ae87c0()*0.243353);
}

double NNfunction_sb_sLsL::synapse0x1af2b70() {
   return (neuron0x1ae8b00()*0.272918);
}

double NNfunction_sb_sLsL::synapse0x1af2bb0() {
   return (neuron0x1ae8e40()*-0.381747);
}

double NNfunction_sb_sLsL::synapse0x1af2bf0() {
   return (neuron0x1ae9180()*-0.3223);
}

double NNfunction_sb_sLsL::synapse0x1af2c30() {
   return (neuron0x1ae94c0()*0.0621735);
}

double NNfunction_sb_sLsL::synapse0x1af2c70() {
   return (neuron0x1ae9800()*0.252512);
}

double NNfunction_sb_sLsL::synapse0x1af2cb0() {
   return (neuron0x1ae9b40()*-0.250924);
}

double NNfunction_sb_sLsL::synapse0x1af2cf0() {
   return (neuron0x1ae9e80()*0.424418);
}

double NNfunction_sb_sLsL::synapse0x1af2d30() {
   return (neuron0x1aea1c0()*-0.733743);
}

double NNfunction_sb_sLsL::synapse0x1af2d70() {
   return (neuron0x1aea500()*-0.311114);
}

double NNfunction_sb_sLsL::synapse0x1af2800() {
   return (neuron0x1aea840()*0.539165);
}

double NNfunction_sb_sLsL::synapse0x1af2840() {
   return (neuron0x1aeada0()*0.0275759);
}

double NNfunction_sb_sLsL::synapse0x1aef5d0() {
   return (neuron0x1aeafc0()*-0.335259);
}

double NNfunction_sb_sLsL::synapse0x1aef610() {
   return (neuron0x1aeb300()*0.136726);
}

double NNfunction_sb_sLsL::synapse0x1aef650() {
   return (neuron0x1aeb640()*0.456798);
}

double NNfunction_sb_sLsL::synapse0x1aef690() {
   return (neuron0x1aeb980()*0.0327243);
}

double NNfunction_sb_sLsL::synapse0x1aef6d0() {
   return (neuron0x1aebcc0()*-0.698047);
}

double NNfunction_sb_sLsL::synapse0x1aef710() {
   return (neuron0x1aec000()*-0.433829);
}

double NNfunction_sb_sLsL::synapse0x1aefa90() {
   return (neuron0x1ae7440()*0.0342224);
}

double NNfunction_sb_sLsL::synapse0x1aefad0() {
   return (neuron0x1ae7780()*0.0889519);
}

double NNfunction_sb_sLsL::synapse0x1aefb10() {
   return (neuron0x1ae7ac0()*-0.0152007);
}

double NNfunction_sb_sLsL::synapse0x1aefb50() {
   return (neuron0x1ae7e00()*0.197199);
}

double NNfunction_sb_sLsL::synapse0x1aefb90() {
   return (neuron0x1ae8140()*0.0344778);
}

double NNfunction_sb_sLsL::synapse0x1aefbd0() {
   return (neuron0x1ae8480()*-0.213581);
}

double NNfunction_sb_sLsL::synapse0x1aefc10() {
   return (neuron0x1ae87c0()*0.0920832);
}

double NNfunction_sb_sLsL::synapse0x1aefc50() {
   return (neuron0x1ae8b00()*0.186105);
}

double NNfunction_sb_sLsL::synapse0x1aefc90() {
   return (neuron0x1ae8e40()*-0.261144);
}

double NNfunction_sb_sLsL::synapse0x1aefcd0() {
   return (neuron0x1ae9180()*-0.113834);
}

double NNfunction_sb_sLsL::synapse0x1aefd10() {
   return (neuron0x1ae94c0()*-0.960595);
}

double NNfunction_sb_sLsL::synapse0x1aefd50() {
   return (neuron0x1ae9800()*-0.234949);
}

double NNfunction_sb_sLsL::synapse0x1aefd90() {
   return (neuron0x1ae9b40()*0.0790712);
}

double NNfunction_sb_sLsL::synapse0x1af3ed0() {
   return (neuron0x1ae9e80()*-0.33232);
}

double NNfunction_sb_sLsL::synapse0x1af3f10() {
   return (neuron0x1aea1c0()*-0.141562);
}

double NNfunction_sb_sLsL::synapse0x1af3f50() {
   return (neuron0x1aea500()*-0.144423);
}

double NNfunction_sb_sLsL::synapse0x1aef8e0() {
   return (neuron0x1aea840()*-0.289005);
}

double NNfunction_sb_sLsL::synapse0x1aef920() {
   return (neuron0x1aeada0()*-0.174983);
}

double NNfunction_sb_sLsL::synapse0x1af40a0() {
   return (neuron0x1aeafc0()*0.00921376);
}

double NNfunction_sb_sLsL::synapse0x1af40e0() {
   return (neuron0x1aeb300()*0.432912);
}

double NNfunction_sb_sLsL::synapse0x1af4120() {
   return (neuron0x1aeb640()*-0.124648);
}

double NNfunction_sb_sLsL::synapse0x1af4160() {
   return (neuron0x1aeb980()*-0.13952);
}

double NNfunction_sb_sLsL::synapse0x1af41a0() {
   return (neuron0x1aebcc0()*-0.215008);
}

double NNfunction_sb_sLsL::synapse0x1af41e0() {
   return (neuron0x1aec000()*0.302522);
}

double NNfunction_sb_sLsL::synapse0x1af4560() {
   return (neuron0x1ae7440()*-0.00350486);
}

double NNfunction_sb_sLsL::synapse0x1af45a0() {
   return (neuron0x1ae7780()*0.0102821);
}

double NNfunction_sb_sLsL::synapse0x1af45e0() {
   return (neuron0x1ae7ac0()*-0.0417793);
}

double NNfunction_sb_sLsL::synapse0x1af4620() {
   return (neuron0x1ae7e00()*1.30844);
}

double NNfunction_sb_sLsL::synapse0x1af4660() {
   return (neuron0x1ae8140()*0.00101135);
}

double NNfunction_sb_sLsL::synapse0x1af46a0() {
   return (neuron0x1ae8480()*-0.00310434);
}

double NNfunction_sb_sLsL::synapse0x1af46e0() {
   return (neuron0x1ae87c0()*0.0190917);
}

double NNfunction_sb_sLsL::synapse0x1af4720() {
   return (neuron0x1ae8b00()*0.000155643);
}

double NNfunction_sb_sLsL::synapse0x1af4760() {
   return (neuron0x1ae8e40()*-0.0144201);
}

double NNfunction_sb_sLsL::synapse0x1af47a0() {
   return (neuron0x1ae9180()*-0.0106012);
}

double NNfunction_sb_sLsL::synapse0x1af47e0() {
   return (neuron0x1ae94c0()*0.0035467);
}

double NNfunction_sb_sLsL::synapse0x1af4820() {
   return (neuron0x1ae9800()*0.0210585);
}

double NNfunction_sb_sLsL::synapse0x1af4860() {
   return (neuron0x1ae9b40()*-1.15169);
}

double NNfunction_sb_sLsL::synapse0x1af48a0() {
   return (neuron0x1ae9e80()*-0.00271408);
}

double NNfunction_sb_sLsL::synapse0x1af48e0() {
   return (neuron0x1aea1c0()*-0.0118994);
}

double NNfunction_sb_sLsL::synapse0x1af4920() {
   return (neuron0x1aea500()*-0.0188613);
}

double NNfunction_sb_sLsL::synapse0x1af43b0() {
   return (neuron0x1aea840()*-0.00875823);
}

double NNfunction_sb_sLsL::synapse0x1af43f0() {
   return (neuron0x1aeada0()*-0.00817801);
}

double NNfunction_sb_sLsL::synapse0x1af4a70() {
   return (neuron0x1aeafc0()*0.0139152);
}

double NNfunction_sb_sLsL::synapse0x1af4ab0() {
   return (neuron0x1aeb300()*0.0206803);
}

double NNfunction_sb_sLsL::synapse0x1af4af0() {
   return (neuron0x1aeb640()*-0.00466843);
}

double NNfunction_sb_sLsL::synapse0x1af4b30() {
   return (neuron0x1aeb980()*-0.00371062);
}

double NNfunction_sb_sLsL::synapse0x1af4b70() {
   return (neuron0x1aebcc0()*-0.00573436);
}

double NNfunction_sb_sLsL::synapse0x1af4bb0() {
   return (neuron0x1aec000()*0.0161278);
}

double NNfunction_sb_sLsL::synapse0x1af4f30() {
   return (neuron0x1ae7440()*-0.375063);
}

double NNfunction_sb_sLsL::synapse0x1af4f70() {
   return (neuron0x1ae7780()*-0.0169142);
}

double NNfunction_sb_sLsL::synapse0x1af4fb0() {
   return (neuron0x1ae7ac0()*0.093065);
}

double NNfunction_sb_sLsL::synapse0x1af4ff0() {
   return (neuron0x1ae7e00()*0.418478);
}

double NNfunction_sb_sLsL::synapse0x1af5030() {
   return (neuron0x1ae8140()*-0.197934);
}

double NNfunction_sb_sLsL::synapse0x1af5070() {
   return (neuron0x1ae8480()*-0.145073);
}

double NNfunction_sb_sLsL::synapse0x1af50b0() {
   return (neuron0x1ae87c0()*0.22924);
}

double NNfunction_sb_sLsL::synapse0x1af50f0() {
   return (neuron0x1ae8b00()*0.0536129);
}

double NNfunction_sb_sLsL::synapse0x1af5130() {
   return (neuron0x1ae8e40()*-0.181982);
}

double NNfunction_sb_sLsL::synapse0x1af5170() {
   return (neuron0x1ae9180()*0.43075);
}

double NNfunction_sb_sLsL::synapse0x1af51b0() {
   return (neuron0x1ae94c0()*0.0988651);
}

double NNfunction_sb_sLsL::synapse0x1af51f0() {
   return (neuron0x1ae9800()*-0.307518);
}

double NNfunction_sb_sLsL::synapse0x1af5230() {
   return (neuron0x1ae9b40()*-0.459664);
}

double NNfunction_sb_sLsL::synapse0x1af5270() {
   return (neuron0x1ae9e80()*0.314316);
}

double NNfunction_sb_sLsL::synapse0x1af52b0() {
   return (neuron0x1aea1c0()*-0.401058);
}

double NNfunction_sb_sLsL::synapse0x1af52f0() {
   return (neuron0x1aea500()*-0.261047);
}

double NNfunction_sb_sLsL::synapse0x1af4d80() {
   return (neuron0x1aea840()*0.334763);
}

double NNfunction_sb_sLsL::synapse0x1af4dc0() {
   return (neuron0x1aeada0()*0.1089);
}

double NNfunction_sb_sLsL::synapse0x1af5440() {
   return (neuron0x1aeafc0()*0.256522);
}

double NNfunction_sb_sLsL::synapse0x1af5480() {
   return (neuron0x1aeb300()*0.317511);
}

double NNfunction_sb_sLsL::synapse0x1af54c0() {
   return (neuron0x1aeb640()*0.457671);
}

double NNfunction_sb_sLsL::synapse0x1af5500() {
   return (neuron0x1aeb980()*0.162976);
}

double NNfunction_sb_sLsL::synapse0x1af5540() {
   return (neuron0x1aebcc0()*0.150439);
}

double NNfunction_sb_sLsL::synapse0x1af5580() {
   return (neuron0x1aec000()*0.224159);
}

double NNfunction_sb_sLsL::synapse0x1af5900() {
   return (neuron0x1ae7440()*-0.0565784);
}

double NNfunction_sb_sLsL::synapse0x1af5940() {
   return (neuron0x1ae7780()*0.107698);
}

double NNfunction_sb_sLsL::synapse0x1af5980() {
   return (neuron0x1ae7ac0()*0.317938);
}

double NNfunction_sb_sLsL::synapse0x1af59c0() {
   return (neuron0x1ae7e00()*0.313045);
}

double NNfunction_sb_sLsL::synapse0x1af5a00() {
   return (neuron0x1ae8140()*-0.0139344);
}

double NNfunction_sb_sLsL::synapse0x1af5a40() {
   return (neuron0x1ae8480()*0.0426817);
}

double NNfunction_sb_sLsL::synapse0x1af5a80() {
   return (neuron0x1ae87c0()*-0.164844);
}

double NNfunction_sb_sLsL::synapse0x1af5ac0() {
   return (neuron0x1ae8b00()*-0.0223911);
}

double NNfunction_sb_sLsL::synapse0x1af5b00() {
   return (neuron0x1ae8e40()*0.0787258);
}

double NNfunction_sb_sLsL::synapse0x1af5b40() {
   return (neuron0x1ae9180()*-0.0276477);
}

double NNfunction_sb_sLsL::synapse0x1af5b80() {
   return (neuron0x1ae94c0()*0.0421813);
}

double NNfunction_sb_sLsL::synapse0x1af5bc0() {
   return (neuron0x1ae9800()*-0.281113);
}

double NNfunction_sb_sLsL::synapse0x1af5c00() {
   return (neuron0x1ae9b40()*0.499169);
}

double NNfunction_sb_sLsL::synapse0x1af5c40() {
   return (neuron0x1ae9e80()*0.142938);
}

double NNfunction_sb_sLsL::synapse0x1af5c80() {
   return (neuron0x1aea1c0()*0.0369959);
}

double NNfunction_sb_sLsL::synapse0x1af5cc0() {
   return (neuron0x1aea500()*0.208781);
}

double NNfunction_sb_sLsL::synapse0x1af5750() {
   return (neuron0x1aea840()*0.249055);
}

double NNfunction_sb_sLsL::synapse0x1af5790() {
   return (neuron0x1aeada0()*-0.129324);
}

double NNfunction_sb_sLsL::synapse0x1af5e10() {
   return (neuron0x1aeafc0()*-0.0816075);
}

double NNfunction_sb_sLsL::synapse0x1af5e50() {
   return (neuron0x1aeb300()*-0.165355);
}

double NNfunction_sb_sLsL::synapse0x1af5e90() {
   return (neuron0x1aeb640()*-0.00107113);
}

double NNfunction_sb_sLsL::synapse0x1af5ed0() {
   return (neuron0x1aeb980()*0.00490553);
}

double NNfunction_sb_sLsL::synapse0x1af5f10() {
   return (neuron0x1aebcc0()*0.0113105);
}

double NNfunction_sb_sLsL::synapse0x1af5f50() {
   return (neuron0x1aec000()*-0.0257639);
}

double NNfunction_sb_sLsL::synapse0x1af62d0() {
   return (neuron0x1ae7440()*0.152398);
}

double NNfunction_sb_sLsL::synapse0x1ae7660() {
   return (neuron0x1ae7780()*-0.229889);
}

double NNfunction_sb_sLsL::synapse0x1ae76a0() {
   return (neuron0x1ae7ac0()*0.10163);
}

double NNfunction_sb_sLsL::synapse0x1ae79a0() {
   return (neuron0x1ae7e00()*-0.149377);
}

double NNfunction_sb_sLsL::synapse0x1ae79e0() {
   return (neuron0x1ae8140()*0.0833783);
}

double NNfunction_sb_sLsL::synapse0x1ae7ce0() {
   return (neuron0x1ae8480()*0.101532);
}

double NNfunction_sb_sLsL::synapse0x1ae7d20() {
   return (neuron0x1ae87c0()*-0.0710123);
}

double NNfunction_sb_sLsL::synapse0x1ae8020() {
   return (neuron0x1ae8b00()*0.0535355);
}

double NNfunction_sb_sLsL::synapse0x1ae8060() {
   return (neuron0x1ae8e40()*-0.120202);
}

double NNfunction_sb_sLsL::synapse0x1ae8360() {
   return (neuron0x1ae9180()*-0.0190049);
}

double NNfunction_sb_sLsL::synapse0x1ae83a0() {
   return (neuron0x1ae94c0()*-0.0109058);
}

double NNfunction_sb_sLsL::synapse0x1ae86a0() {
   return (neuron0x1ae9800()*-0.163246);
}

double NNfunction_sb_sLsL::synapse0x1ae86e0() {
   return (neuron0x1ae9b40()*0.420443);
}

double NNfunction_sb_sLsL::synapse0x1ae89e0() {
   return (neuron0x1ae9e80()*0.282014);
}

double NNfunction_sb_sLsL::synapse0x1ae8a20() {
   return (neuron0x1aea1c0()*0.419723);
}

double NNfunction_sb_sLsL::synapse0x1ae8d20() {
   return (neuron0x1aea500()*-0.515237);
}

double NNfunction_sb_sLsL::synapse0x1ae8d60() {
   return (neuron0x1aea840()*0.217894);
}

double NNfunction_sb_sLsL::synapse0x1ae9060() {
   return (neuron0x1aeada0()*0.0219958);
}

double NNfunction_sb_sLsL::synapse0x1ae90a0() {
   return (neuron0x1aeafc0()*-0.142274);
}

double NNfunction_sb_sLsL::synapse0x1ae93a0() {
   return (neuron0x1aeb300()*0.0485108);
}

double NNfunction_sb_sLsL::synapse0x1ae93e0() {
   return (neuron0x1aeb640()*0.0298938);
}

double NNfunction_sb_sLsL::synapse0x1ae96e0() {
   return (neuron0x1aeb980()*0.0774484);
}

double NNfunction_sb_sLsL::synapse0x1ae9720() {
   return (neuron0x1aebcc0()*-0.243225);
}

double NNfunction_sb_sLsL::synapse0x1ae9a20() {
   return (neuron0x1aec000()*0.0571025);
}

double NNfunction_sb_sLsL::synapse0x1ae9a60() {
   return (neuron0x1ae7440()*0.0202592);
}

double NNfunction_sb_sLsL::synapse0x1aea720() {
   return (neuron0x1ae7780()*0.00171538);
}

double NNfunction_sb_sLsL::synapse0x1aea760() {
   return (neuron0x1ae7ac0()*-0.00264577);
}

double NNfunction_sb_sLsL::synapse0x1af6120() {
   return (neuron0x1ae7e00()*-0.131843);
}

double NNfunction_sb_sLsL::synapse0x1af6160() {
   return (neuron0x1ae8140()*-0.000554509);
}

double NNfunction_sb_sLsL::synapse0x1aeaa60() {
   return (neuron0x1ae8480()*0.0053108);
}

double NNfunction_sb_sLsL::synapse0x1aeaaa0() {
   return (neuron0x1ae87c0()*-0.0135474);
}

double NNfunction_sb_sLsL::synapse0x18a2510() {
   return (neuron0x1ae8b00()*0.00740193);
}

double NNfunction_sb_sLsL::synapse0x18a2550() {
   return (neuron0x1ae8e40()*0.00522076);
}

double NNfunction_sb_sLsL::synapse0x1aeb1e0() {
   return (neuron0x1ae9180()*0.0366798);
}

double NNfunction_sb_sLsL::synapse0x1aeb220() {
   return (neuron0x1ae94c0()*-0.0334665);
}

double NNfunction_sb_sLsL::synapse0x1aeb520() {
   return (neuron0x1ae9800()*-0.00387724);
}

double NNfunction_sb_sLsL::synapse0x1aeb560() {
   return (neuron0x1ae9b40()*3.69785);
}

double NNfunction_sb_sLsL::synapse0x1aeb860() {
   return (neuron0x1ae9e80()*0.0261006);
}

double NNfunction_sb_sLsL::synapse0x1aeb8a0() {
   return (neuron0x1aea1c0()*-0.00479402);
}

double NNfunction_sb_sLsL::synapse0x1aebba0() {
   return (neuron0x1aea500()*-0.000373138);
}

double NNfunction_sb_sLsL::synapse0x1aebbe0() {
   return (neuron0x1aea840()*0.0106761);
}

double NNfunction_sb_sLsL::synapse0x1aebee0() {
   return (neuron0x1aeada0()*0.0152071);
}

double NNfunction_sb_sLsL::synapse0x1aebf20() {
   return (neuron0x1aeafc0()*-0.007298);
}

double NNfunction_sb_sLsL::synapse0x1aec220() {
   return (neuron0x1aeb300()*0.00606574);
}

double NNfunction_sb_sLsL::synapse0x1aec260() {
   return (neuron0x1aeb640()*-0.005005);
}

double NNfunction_sb_sLsL::synapse0x1ae9d60() {
   return (neuron0x1aeb980()*-0.00666431);
}

double NNfunction_sb_sLsL::synapse0x1ae9da0() {
   return (neuron0x1aebcc0()*0.00430763);
}

double NNfunction_sb_sLsL::synapse0x1af8040() {
   return (neuron0x1aec000()*0.0119102);
}

double NNfunction_sb_sLsL::synapse0x1af83c0() {
   return (neuron0x1ae7440()*-0.0253801);
}

double NNfunction_sb_sLsL::synapse0x1af8400() {
   return (neuron0x1ae7780()*0.302926);
}

double NNfunction_sb_sLsL::synapse0x1af8440() {
   return (neuron0x1ae7ac0()*0.395713);
}

double NNfunction_sb_sLsL::synapse0x1af8480() {
   return (neuron0x1ae7e00()*-0.381655);
}

double NNfunction_sb_sLsL::synapse0x1af84c0() {
   return (neuron0x1ae8140()*-0.00164088);
}

double NNfunction_sb_sLsL::synapse0x1af8500() {
   return (neuron0x1ae8480()*-0.109455);
}

double NNfunction_sb_sLsL::synapse0x1af8540() {
   return (neuron0x1ae87c0()*0.00144142);
}

double NNfunction_sb_sLsL::synapse0x1af8580() {
   return (neuron0x1ae8b00()*-0.12699);
}

double NNfunction_sb_sLsL::synapse0x1af85c0() {
   return (neuron0x1ae8e40()*0.113286);
}

double NNfunction_sb_sLsL::synapse0x1af8600() {
   return (neuron0x1ae9180()*0.133313);
}

double NNfunction_sb_sLsL::synapse0x1af8640() {
   return (neuron0x1ae94c0()*0.0486648);
}

double NNfunction_sb_sLsL::synapse0x1af8680() {
   return (neuron0x1ae9800()*0.288791);
}

double NNfunction_sb_sLsL::synapse0x1af86c0() {
   return (neuron0x1ae9b40()*0.199146);
}

double NNfunction_sb_sLsL::synapse0x1af8700() {
   return (neuron0x1ae9e80()*0.204735);
}

double NNfunction_sb_sLsL::synapse0x1af8740() {
   return (neuron0x1aea1c0()*-0.0875188);
}

double NNfunction_sb_sLsL::synapse0x1af8780() {
   return (neuron0x1aea500()*-0.31029);
}

double NNfunction_sb_sLsL::synapse0x1af8210() {
   return (neuron0x1aea840()*-0.264721);
}

double NNfunction_sb_sLsL::synapse0x1af8250() {
   return (neuron0x1aeada0()*-0.0885886);
}

double NNfunction_sb_sLsL::synapse0x1af88d0() {
   return (neuron0x1aeafc0()*0.018722);
}

double NNfunction_sb_sLsL::synapse0x1af8910() {
   return (neuron0x1aeb300()*-0.256754);
}

double NNfunction_sb_sLsL::synapse0x1af8950() {
   return (neuron0x1aeb640()*-0.365007);
}

double NNfunction_sb_sLsL::synapse0x1af8990() {
   return (neuron0x1aeb980()*0.187945);
}

double NNfunction_sb_sLsL::synapse0x1af89d0() {
   return (neuron0x1aebcc0()*0.229605);
}

double NNfunction_sb_sLsL::synapse0x1af8a10() {
   return (neuron0x1aec000()*0.244272);
}

double NNfunction_sb_sLsL::synapse0x1af8d90() {
   return (neuron0x1ae7440()*0.00363777);
}

double NNfunction_sb_sLsL::synapse0x1af8dd0() {
   return (neuron0x1ae7780()*0.00178109);
}

double NNfunction_sb_sLsL::synapse0x1af8e10() {
   return (neuron0x1ae7ac0()*-0.0310377);
}

double NNfunction_sb_sLsL::synapse0x1af8e50() {
   return (neuron0x1ae7e00()*-0.0237609);
}

double NNfunction_sb_sLsL::synapse0x1af8e90() {
   return (neuron0x1ae8140()*0.00287654);
}

double NNfunction_sb_sLsL::synapse0x1af8ed0() {
   return (neuron0x1ae8480()*-0.00492646);
}

double NNfunction_sb_sLsL::synapse0x1af8f10() {
   return (neuron0x1ae87c0()*-0.0107215);
}

double NNfunction_sb_sLsL::synapse0x1af8f50() {
   return (neuron0x1ae8b00()*-0.00356751);
}

double NNfunction_sb_sLsL::synapse0x1af8f90() {
   return (neuron0x1ae8e40()*-0.00183743);
}

double NNfunction_sb_sLsL::synapse0x1af8fd0() {
   return (neuron0x1ae9180()*-0.00612641);
}

double NNfunction_sb_sLsL::synapse0x1af9010() {
   return (neuron0x1ae94c0()*0.000403141);
}

double NNfunction_sb_sLsL::synapse0x1af9050() {
   return (neuron0x1ae9800()*-0.03072);
}

double NNfunction_sb_sLsL::synapse0x1af9090() {
   return (neuron0x1ae9b40()*1.39173);
}

double NNfunction_sb_sLsL::synapse0x1af90d0() {
   return (neuron0x1ae9e80()*0.0186017);
}

double NNfunction_sb_sLsL::synapse0x1af9110() {
   return (neuron0x1aea1c0()*-0.0217107);
}

double NNfunction_sb_sLsL::synapse0x1af9150() {
   return (neuron0x1aea500()*-0.0275069);
}

double NNfunction_sb_sLsL::synapse0x1af8be0() {
   return (neuron0x1aea840()*0.00690601);
}

double NNfunction_sb_sLsL::synapse0x1af8c20() {
   return (neuron0x1aeada0()*-0.0176061);
}

double NNfunction_sb_sLsL::synapse0x1af92a0() {
   return (neuron0x1aeafc0()*-0.0130074);
}

double NNfunction_sb_sLsL::synapse0x1af92e0() {
   return (neuron0x1aeb300()*0.0146399);
}

double NNfunction_sb_sLsL::synapse0x1af9320() {
   return (neuron0x1aeb640()*-0.00128208);
}

double NNfunction_sb_sLsL::synapse0x1af9360() {
   return (neuron0x1aeb980()*-0.00555653);
}

double NNfunction_sb_sLsL::synapse0x1af93a0() {
   return (neuron0x1aebcc0()*0.00478444);
}

double NNfunction_sb_sLsL::synapse0x1af93e0() {
   return (neuron0x1aec000()*0.00231689);
}

double NNfunction_sb_sLsL::synapse0x1af9760() {
   return (neuron0x1ae7440()*-0.115275);
}

double NNfunction_sb_sLsL::synapse0x1af97a0() {
   return (neuron0x1ae7780()*-0.0339873);
}

double NNfunction_sb_sLsL::synapse0x1af97e0() {
   return (neuron0x1ae7ac0()*0.875833);
}

double NNfunction_sb_sLsL::synapse0x1af9820() {
   return (neuron0x1ae7e00()*-0.00427586);
}

double NNfunction_sb_sLsL::synapse0x1af9860() {
   return (neuron0x1ae8140()*0.0653602);
}

double NNfunction_sb_sLsL::synapse0x1af98a0() {
   return (neuron0x1ae8480()*0.0424761);
}

double NNfunction_sb_sLsL::synapse0x1af98e0() {
   return (neuron0x1ae87c0()*-0.0483227);
}

double NNfunction_sb_sLsL::synapse0x1af9920() {
   return (neuron0x1ae8b00()*0.0325546);
}

double NNfunction_sb_sLsL::synapse0x1af9960() {
   return (neuron0x1ae8e40()*-0.0287894);
}

double NNfunction_sb_sLsL::synapse0x1af99a0() {
   return (neuron0x1ae9180()*0.0108919);
}

double NNfunction_sb_sLsL::synapse0x1af99e0() {
   return (neuron0x1ae94c0()*0.00977706);
}

double NNfunction_sb_sLsL::synapse0x1af9a20() {
   return (neuron0x1ae9800()*0.0361565);
}

double NNfunction_sb_sLsL::synapse0x1af9a60() {
   return (neuron0x1ae9b40()*-0.0984384);
}

double NNfunction_sb_sLsL::synapse0x1af9aa0() {
   return (neuron0x1ae9e80()*0.0242356);
}

double NNfunction_sb_sLsL::synapse0x1af9ae0() {
   return (neuron0x1aea1c0()*-0.0873301);
}

double NNfunction_sb_sLsL::synapse0x1af9b20() {
   return (neuron0x1aea500()*-0.0186966);
}

double NNfunction_sb_sLsL::synapse0x1af95b0() {
   return (neuron0x1aea840()*0.0183947);
}

double NNfunction_sb_sLsL::synapse0x1af95f0() {
   return (neuron0x1aeada0()*0.00684882);
}

double NNfunction_sb_sLsL::synapse0x1af9c70() {
   return (neuron0x1aeafc0()*0.00514259);
}

double NNfunction_sb_sLsL::synapse0x1af9cb0() {
   return (neuron0x1aeb300()*-0.0255367);
}

double NNfunction_sb_sLsL::synapse0x1af9cf0() {
   return (neuron0x1aeb640()*0.00633851);
}

double NNfunction_sb_sLsL::synapse0x1af9d30() {
   return (neuron0x1aeb980()*0.00577772);
}

double NNfunction_sb_sLsL::synapse0x1af9d70() {
   return (neuron0x1aebcc0()*0.0197776);
}

double NNfunction_sb_sLsL::synapse0x1af9db0() {
   return (neuron0x1aec000()*-0.0126003);
}

double NNfunction_sb_sLsL::synapse0x1afa130() {
   return (neuron0x1ae7440()*0.0345017);
}

double NNfunction_sb_sLsL::synapse0x1afa170() {
   return (neuron0x1ae7780()*0.0200476);
}

double NNfunction_sb_sLsL::synapse0x1afa1b0() {
   return (neuron0x1ae7ac0()*-0.20991);
}

double NNfunction_sb_sLsL::synapse0x1afa1f0() {
   return (neuron0x1ae7e00()*-0.89357);
}

double NNfunction_sb_sLsL::synapse0x1afa230() {
   return (neuron0x1ae8140()*-0.170164);
}

double NNfunction_sb_sLsL::synapse0x1afa270() {
   return (neuron0x1ae8480()*0.100521);
}

double NNfunction_sb_sLsL::synapse0x1afa2b0() {
   return (neuron0x1ae87c0()*0.271035);
}

double NNfunction_sb_sLsL::synapse0x1afa2f0() {
   return (neuron0x1ae8b00()*0.508979);
}

double NNfunction_sb_sLsL::synapse0x1afa330() {
   return (neuron0x1ae8e40()*0.237219);
}

double NNfunction_sb_sLsL::synapse0x1afa370() {
   return (neuron0x1ae9180()*0.112042);
}

double NNfunction_sb_sLsL::synapse0x1afa3b0() {
   return (neuron0x1ae94c0()*-0.0138992);
}

double NNfunction_sb_sLsL::synapse0x1afa3f0() {
   return (neuron0x1ae9800()*0.166529);
}

double NNfunction_sb_sLsL::synapse0x1afa430() {
   return (neuron0x1ae9b40()*-0.26044);
}

double NNfunction_sb_sLsL::synapse0x1afa470() {
   return (neuron0x1ae9e80()*0.132423);
}

double NNfunction_sb_sLsL::synapse0x1afa4b0() {
   return (neuron0x1aea1c0()*-0.024956);
}

double NNfunction_sb_sLsL::synapse0x1afa4f0() {
   return (neuron0x1aea500()*0.0737038);
}

double NNfunction_sb_sLsL::synapse0x1af9f80() {
   return (neuron0x1aea840()*0.17003);
}

double NNfunction_sb_sLsL::synapse0x1af9fc0() {
   return (neuron0x1aeada0()*0.0179318);
}

double NNfunction_sb_sLsL::synapse0x1afa640() {
   return (neuron0x1aeafc0()*-0.186383);
}

double NNfunction_sb_sLsL::synapse0x1afa680() {
   return (neuron0x1aeb300()*-0.0737036);
}

double NNfunction_sb_sLsL::synapse0x1afa6c0() {
   return (neuron0x1aeb640()*0.269614);
}

double NNfunction_sb_sLsL::synapse0x1afa700() {
   return (neuron0x1aeb980()*0.0641675);
}

double NNfunction_sb_sLsL::synapse0x1afa740() {
   return (neuron0x1aebcc0()*0.0496233);
}

double NNfunction_sb_sLsL::synapse0x1afa780() {
   return (neuron0x1aec000()*0.00894052);
}

double NNfunction_sb_sLsL::synapse0x1afab00() {
   return (neuron0x1ae7440()*0.0454898);
}

double NNfunction_sb_sLsL::synapse0x1afab40() {
   return (neuron0x1ae7780()*-0.0334277);
}

double NNfunction_sb_sLsL::synapse0x1afab80() {
   return (neuron0x1ae7ac0()*-0.166373);
}

double NNfunction_sb_sLsL::synapse0x1afabc0() {
   return (neuron0x1ae7e00()*0.383238);
}

double NNfunction_sb_sLsL::synapse0x1afac00() {
   return (neuron0x1ae8140()*-0.0416943);
}

double NNfunction_sb_sLsL::synapse0x1afac40() {
   return (neuron0x1ae8480()*0.0451974);
}

double NNfunction_sb_sLsL::synapse0x1afac80() {
   return (neuron0x1ae87c0()*-0.0245913);
}

double NNfunction_sb_sLsL::synapse0x1afacc0() {
   return (neuron0x1ae8b00()*0.0455735);
}

double NNfunction_sb_sLsL::synapse0x1afad00() {
   return (neuron0x1ae8e40()*-0.415161);
}

double NNfunction_sb_sLsL::synapse0x1af2ec0() {
   return (neuron0x1ae9180()*0.243748);
}

double NNfunction_sb_sLsL::synapse0x1af2f00() {
   return (neuron0x1ae94c0()*-0.127348);
}

double NNfunction_sb_sLsL::synapse0x1af2f40() {
   return (neuron0x1ae9800()*0.0335626);
}

double NNfunction_sb_sLsL::synapse0x1af2f80() {
   return (neuron0x1ae9b40()*-2.01012);
}

double NNfunction_sb_sLsL::synapse0x1af2fc0() {
   return (neuron0x1ae9e80()*0.169668);
}

double NNfunction_sb_sLsL::synapse0x1af3000() {
   return (neuron0x1aea1c0()*-0.0855183);
}

double NNfunction_sb_sLsL::synapse0x1af3040() {
   return (neuron0x1aea500()*-0.0634618);
}

double NNfunction_sb_sLsL::synapse0x1afa950() {
   return (neuron0x1aea840()*0.103301);
}

double NNfunction_sb_sLsL::synapse0x1afa990() {
   return (neuron0x1aeada0()*0.102775);
}

double NNfunction_sb_sLsL::synapse0x1af3190() {
   return (neuron0x1aeafc0()*-0.142899);
}

double NNfunction_sb_sLsL::synapse0x1af31d0() {
   return (neuron0x1aeb300()*0.096815);
}

double NNfunction_sb_sLsL::synapse0x1af3210() {
   return (neuron0x1aeb640()*-0.0447956);
}

double NNfunction_sb_sLsL::synapse0x1af3250() {
   return (neuron0x1aeb980()*0.034198);
}

double NNfunction_sb_sLsL::synapse0x1af3290() {
   return (neuron0x1aebcc0()*-0.0138044);
}

double NNfunction_sb_sLsL::synapse0x1af32d0() {
   return (neuron0x1aec000()*0.0073023);
}

double NNfunction_sb_sLsL::synapse0x1af3650() {
   return (neuron0x1ae7440()*-0.125057);
}

double NNfunction_sb_sLsL::synapse0x1af3690() {
   return (neuron0x1ae7780()*-0.0342552);
}

double NNfunction_sb_sLsL::synapse0x1af36d0() {
   return (neuron0x1ae7ac0()*-0.700523);
}

double NNfunction_sb_sLsL::synapse0x1af3710() {
   return (neuron0x1ae7e00()*-0.413158);
}

double NNfunction_sb_sLsL::synapse0x1af3750() {
   return (neuron0x1ae8140()*0.0845304);
}

double NNfunction_sb_sLsL::synapse0x1af3790() {
   return (neuron0x1ae8480()*-0.0789569);
}

double NNfunction_sb_sLsL::synapse0x1af37d0() {
   return (neuron0x1ae87c0()*0.047381);
}

double NNfunction_sb_sLsL::synapse0x1af3810() {
   return (neuron0x1ae8b00()*-0.146605);
}

double NNfunction_sb_sLsL::synapse0x1af3850() {
   return (neuron0x1ae8e40()*0.00858176);
}

double NNfunction_sb_sLsL::synapse0x1af3890() {
   return (neuron0x1ae9180()*-0.127766);
}

double NNfunction_sb_sLsL::synapse0x1af38d0() {
   return (neuron0x1ae94c0()*0.0761965);
}

double NNfunction_sb_sLsL::synapse0x1af3910() {
   return (neuron0x1ae9800()*0.021898);
}

double NNfunction_sb_sLsL::synapse0x1af3950() {
   return (neuron0x1ae9b40()*0.0498701);
}

double NNfunction_sb_sLsL::synapse0x1af3990() {
   return (neuron0x1ae9e80()*-0.132497);
}

double NNfunction_sb_sLsL::synapse0x1af39d0() {
   return (neuron0x1aea1c0()*0.0443157);
}

double NNfunction_sb_sLsL::synapse0x1af3a10() {
   return (neuron0x1aea500()*0.194198);
}

double NNfunction_sb_sLsL::synapse0x1af34a0() {
   return (neuron0x1aea840()*-0.0151706);
}

double NNfunction_sb_sLsL::synapse0x1af34e0() {
   return (neuron0x1aeada0()*0.0985534);
}

double NNfunction_sb_sLsL::synapse0x1af3b60() {
   return (neuron0x1aeafc0()*0.0154343);
}

double NNfunction_sb_sLsL::synapse0x1af3ba0() {
   return (neuron0x1aeb300()*-0.0926167);
}

double NNfunction_sb_sLsL::synapse0x1af3be0() {
   return (neuron0x1aeb640()*-0.0287643);
}

double NNfunction_sb_sLsL::synapse0x1af3c20() {
   return (neuron0x1aeb980()*-0.00187282);
}

double NNfunction_sb_sLsL::synapse0x1af3c60() {
   return (neuron0x1aebcc0()*0.0430494);
}

double NNfunction_sb_sLsL::synapse0x1af3ca0() {
   return (neuron0x1aec000()*-0.142868);
}

double NNfunction_sb_sLsL::synapse0x1af3e70() {
   return (neuron0x1ae7440()*0.0105365);
}

double NNfunction_sb_sLsL::synapse0x1afcf00() {
   return (neuron0x1ae7780()*0.0030162);
}

double NNfunction_sb_sLsL::synapse0x1afcf40() {
   return (neuron0x1ae7ac0()*-0.00528822);
}

double NNfunction_sb_sLsL::synapse0x1afcf80() {
   return (neuron0x1ae7e00()*-0.0392406);
}

double NNfunction_sb_sLsL::synapse0x1afcfc0() {
   return (neuron0x1ae8140()*0.0121543);
}

double NNfunction_sb_sLsL::synapse0x1afd000() {
   return (neuron0x1ae8480()*0.0114252);
}

double NNfunction_sb_sLsL::synapse0x1afd040() {
   return (neuron0x1ae87c0()*0.00100131);
}

double NNfunction_sb_sLsL::synapse0x1afd080() {
   return (neuron0x1ae8b00()*-0.00842903);
}

double NNfunction_sb_sLsL::synapse0x1afd0c0() {
   return (neuron0x1ae8e40()*0.000170301);
}

double NNfunction_sb_sLsL::synapse0x1afd100() {
   return (neuron0x1ae9180()*-0.00654294);
}

double NNfunction_sb_sLsL::synapse0x1afd140() {
   return (neuron0x1ae94c0()*-0.0300105);
}

double NNfunction_sb_sLsL::synapse0x1afd180() {
   return (neuron0x1ae9800()*-0.300295);
}

double NNfunction_sb_sLsL::synapse0x1afd1c0() {
   return (neuron0x1ae9b40()*0.421254);
}

double NNfunction_sb_sLsL::synapse0x1afd200() {
   return (neuron0x1ae9e80()*0.00638077);
}

double NNfunction_sb_sLsL::synapse0x1afd240() {
   return (neuron0x1aea1c0()*-0.163531);
}

double NNfunction_sb_sLsL::synapse0x1afd280() {
   return (neuron0x1aea500()*-0.16756);
}

double NNfunction_sb_sLsL::synapse0x1afcd50() {
   return (neuron0x1aea840()*0.00994337);
}

double NNfunction_sb_sLsL::synapse0x1afcd90() {
   return (neuron0x1aeada0()*-0.161927);
}

double NNfunction_sb_sLsL::synapse0x1afd3d0() {
   return (neuron0x1aeafc0()*-0.168647);
}

double NNfunction_sb_sLsL::synapse0x1afd410() {
   return (neuron0x1aeb300()*-0.00201517);
}

double NNfunction_sb_sLsL::synapse0x1afd450() {
   return (neuron0x1aeb640()*-0.0119309);
}

double NNfunction_sb_sLsL::synapse0x1afd490() {
   return (neuron0x1aeb980()*0.00344128);
}

double NNfunction_sb_sLsL::synapse0x1afd4d0() {
   return (neuron0x1aebcc0()*-0.00237651);
}

double NNfunction_sb_sLsL::synapse0x1afd510() {
   return (neuron0x1aec000()*-0.0107553);
}

double NNfunction_sb_sLsL::synapse0x1afd890() {
   return (neuron0x1ae7440()*-0.0513325);
}

double NNfunction_sb_sLsL::synapse0x1afd8d0() {
   return (neuron0x1ae7780()*0.191315);
}

double NNfunction_sb_sLsL::synapse0x1afd910() {
   return (neuron0x1ae7ac0()*0.151069);
}

double NNfunction_sb_sLsL::synapse0x1afd950() {
   return (neuron0x1ae7e00()*-0.266063);
}

double NNfunction_sb_sLsL::synapse0x1afd990() {
   return (neuron0x1ae8140()*-0.058892);
}

double NNfunction_sb_sLsL::synapse0x1afd9d0() {
   return (neuron0x1ae8480()*0.210445);
}

double NNfunction_sb_sLsL::synapse0x1afda10() {
   return (neuron0x1ae87c0()*0.230754);
}

double NNfunction_sb_sLsL::synapse0x1afda50() {
   return (neuron0x1ae8b00()*-0.123669);
}

double NNfunction_sb_sLsL::synapse0x1afda90() {
   return (neuron0x1ae8e40()*-0.436033);
}

double NNfunction_sb_sLsL::synapse0x1afdad0() {
   return (neuron0x1ae9180()*0.221446);
}

double NNfunction_sb_sLsL::synapse0x1afdb10() {
   return (neuron0x1ae94c0()*-0.0991432);
}

double NNfunction_sb_sLsL::synapse0x1afdb50() {
   return (neuron0x1ae9800()*0.120361);
}

double NNfunction_sb_sLsL::synapse0x1afdb90() {
   return (neuron0x1ae9b40()*0.0790353);
}

double NNfunction_sb_sLsL::synapse0x1afdbd0() {
   return (neuron0x1ae9e80()*0.0833169);
}

double NNfunction_sb_sLsL::synapse0x1afdc10() {
   return (neuron0x1aea1c0()*0.181399);
}

double NNfunction_sb_sLsL::synapse0x1afdc50() {
   return (neuron0x1aea500()*0.201259);
}

double NNfunction_sb_sLsL::synapse0x1afd6e0() {
   return (neuron0x1aea840()*0.0599191);
}

double NNfunction_sb_sLsL::synapse0x1afd720() {
   return (neuron0x1aeada0()*-0.06937);
}

double NNfunction_sb_sLsL::synapse0x1afdda0() {
   return (neuron0x1aeafc0()*-0.330717);
}

double NNfunction_sb_sLsL::synapse0x1afdde0() {
   return (neuron0x1aeb300()*0.156974);
}

double NNfunction_sb_sLsL::synapse0x1afde20() {
   return (neuron0x1aeb640()*-0.306586);
}

double NNfunction_sb_sLsL::synapse0x1afde60() {
   return (neuron0x1aeb980()*0.00290718);
}

double NNfunction_sb_sLsL::synapse0x1afdea0() {
   return (neuron0x1aebcc0()*0.0634894);
}

double NNfunction_sb_sLsL::synapse0x1afdee0() {
   return (neuron0x1aec000()*0.187273);
}

double NNfunction_sb_sLsL::synapse0x1afe260() {
   return (neuron0x1ae7440()*0.223501);
}

double NNfunction_sb_sLsL::synapse0x1afe2a0() {
   return (neuron0x1ae7780()*-0.222897);
}

double NNfunction_sb_sLsL::synapse0x1afe2e0() {
   return (neuron0x1ae7ac0()*-0.0894573);
}

double NNfunction_sb_sLsL::synapse0x1afe320() {
   return (neuron0x1ae7e00()*0.560207);
}

double NNfunction_sb_sLsL::synapse0x1afe360() {
   return (neuron0x1ae8140()*-0.109221);
}

double NNfunction_sb_sLsL::synapse0x1afe3a0() {
   return (neuron0x1ae8480()*-0.0773531);
}

double NNfunction_sb_sLsL::synapse0x1afe3e0() {
   return (neuron0x1ae87c0()*0.10651);
}

double NNfunction_sb_sLsL::synapse0x1afe420() {
   return (neuron0x1ae8b00()*-0.0323773);
}

double NNfunction_sb_sLsL::synapse0x1afe460() {
   return (neuron0x1ae8e40()*0.0627724);
}

double NNfunction_sb_sLsL::synapse0x1afe4a0() {
   return (neuron0x1ae9180()*-0.268551);
}

double NNfunction_sb_sLsL::synapse0x1afe4e0() {
   return (neuron0x1ae94c0()*0.412799);
}

double NNfunction_sb_sLsL::synapse0x1afe520() {
   return (neuron0x1ae9800()*0.578267);
}

double NNfunction_sb_sLsL::synapse0x1afe560() {
   return (neuron0x1ae9b40()*0.447154);
}

double NNfunction_sb_sLsL::synapse0x1afe5a0() {
   return (neuron0x1ae9e80()*-0.60333);
}

double NNfunction_sb_sLsL::synapse0x1afe5e0() {
   return (neuron0x1aea1c0()*-0.0307667);
}

double NNfunction_sb_sLsL::synapse0x1afe620() {
   return (neuron0x1aea500()*0.32978);
}

double NNfunction_sb_sLsL::synapse0x1afe0b0() {
   return (neuron0x1aea840()*0.151956);
}

double NNfunction_sb_sLsL::synapse0x1afe0f0() {
   return (neuron0x1aeada0()*0.0183163);
}

double NNfunction_sb_sLsL::synapse0x1afe770() {
   return (neuron0x1aeafc0()*-0.43517);
}

double NNfunction_sb_sLsL::synapse0x1afe7b0() {
   return (neuron0x1aeb300()*0.266517);
}

double NNfunction_sb_sLsL::synapse0x1afe7f0() {
   return (neuron0x1aeb640()*0.0553779);
}

double NNfunction_sb_sLsL::synapse0x1afe830() {
   return (neuron0x1aeb980()*-0.270195);
}

double NNfunction_sb_sLsL::synapse0x1afe870() {
   return (neuron0x1aebcc0()*0.0108589);
}

double NNfunction_sb_sLsL::synapse0x1afe8b0() {
   return (neuron0x1aec000()*-0.143743);
}

double NNfunction_sb_sLsL::synapse0x1afec30() {
   return (neuron0x1ae7440()*0.0570347);
}

double NNfunction_sb_sLsL::synapse0x1afec70() {
   return (neuron0x1ae7780()*0.0341254);
}

double NNfunction_sb_sLsL::synapse0x1afecb0() {
   return (neuron0x1ae7ac0()*1.01639);
}

double NNfunction_sb_sLsL::synapse0x1afecf0() {
   return (neuron0x1ae7e00()*-0.0174493);
}

double NNfunction_sb_sLsL::synapse0x1afed30() {
   return (neuron0x1ae8140()*-0.0304144);
}

double NNfunction_sb_sLsL::synapse0x1afed70() {
   return (neuron0x1ae8480()*-0.0314286);
}

double NNfunction_sb_sLsL::synapse0x1afedb0() {
   return (neuron0x1ae87c0()*0.0150651);
}

double NNfunction_sb_sLsL::synapse0x1afedf0() {
   return (neuron0x1ae8b00()*-0.0321308);
}

double NNfunction_sb_sLsL::synapse0x1afee30() {
   return (neuron0x1ae8e40()*0.0446872);
}

double NNfunction_sb_sLsL::synapse0x1afee70() {
   return (neuron0x1ae9180()*-0.00839469);
}

double NNfunction_sb_sLsL::synapse0x1afeeb0() {
   return (neuron0x1ae94c0()*0.0168412);
}

double NNfunction_sb_sLsL::synapse0x1afeef0() {
   return (neuron0x1ae9800()*-0.0459632);
}

double NNfunction_sb_sLsL::synapse0x1afef30() {
   return (neuron0x1ae9b40()*-0.281463);
}

double NNfunction_sb_sLsL::synapse0x1afef70() {
   return (neuron0x1ae9e80()*-0.028683);
}

double NNfunction_sb_sLsL::synapse0x1afefb0() {
   return (neuron0x1aea1c0()*0.02976);
}

double NNfunction_sb_sLsL::synapse0x1afeff0() {
   return (neuron0x1aea500()*0.0304368);
}

double NNfunction_sb_sLsL::synapse0x1afea80() {
   return (neuron0x1aea840()*0.0308507);
}

double NNfunction_sb_sLsL::synapse0x1afeac0() {
   return (neuron0x1aeada0()*-0.0121776);
}

double NNfunction_sb_sLsL::synapse0x1aff140() {
   return (neuron0x1aeafc0()*-0.00192508);
}

double NNfunction_sb_sLsL::synapse0x1aff180() {
   return (neuron0x1aeb300()*-0.0196329);
}

double NNfunction_sb_sLsL::synapse0x1aff1c0() {
   return (neuron0x1aeb640()*-0.00572759);
}

double NNfunction_sb_sLsL::synapse0x1aff200() {
   return (neuron0x1aeb980()*0.000209857);
}

double NNfunction_sb_sLsL::synapse0x1aff240() {
   return (neuron0x1aebcc0()*-0.023601);
}

double NNfunction_sb_sLsL::synapse0x1aff280() {
   return (neuron0x1aec000()*-0.00469251);
}

double NNfunction_sb_sLsL::synapse0x1aff600() {
   return (neuron0x1ae7440()*-0.00295876);
}

double NNfunction_sb_sLsL::synapse0x1aff640() {
   return (neuron0x1ae7780()*0.00114332);
}

double NNfunction_sb_sLsL::synapse0x1aff680() {
   return (neuron0x1ae7ac0()*0.0187299);
}

double NNfunction_sb_sLsL::synapse0x1aff6c0() {
   return (neuron0x1ae7e00()*2.00756);
}

double NNfunction_sb_sLsL::synapse0x1aff700() {
   return (neuron0x1ae8140()*0.00828681);
}

double NNfunction_sb_sLsL::synapse0x1aff740() {
   return (neuron0x1ae8480()*-0.00628766);
}

double NNfunction_sb_sLsL::synapse0x1aff780() {
   return (neuron0x1ae87c0()*0.0315243);
}

double NNfunction_sb_sLsL::synapse0x1aff7c0() {
   return (neuron0x1ae8b00()*0.00980846);
}

double NNfunction_sb_sLsL::synapse0x1aff800() {
   return (neuron0x1ae8e40()*-0.000424114);
}

double NNfunction_sb_sLsL::synapse0x1aff840() {
   return (neuron0x1ae9180()*0.00328931);
}

double NNfunction_sb_sLsL::synapse0x1aff880() {
   return (neuron0x1ae94c0()*-0.000561597);
}

double NNfunction_sb_sLsL::synapse0x1aff8c0() {
   return (neuron0x1ae9800()*0.0197227);
}

double NNfunction_sb_sLsL::synapse0x1aff900() {
   return (neuron0x1ae9b40()*-0.689617);
}

double NNfunction_sb_sLsL::synapse0x1aff940() {
   return (neuron0x1ae9e80()*0.000299615);
}

double NNfunction_sb_sLsL::synapse0x1aff980() {
   return (neuron0x1aea1c0()*-0.00139343);
}

double NNfunction_sb_sLsL::synapse0x1aff9c0() {
   return (neuron0x1aea500()*0.00488044);
}

double NNfunction_sb_sLsL::synapse0x1aff450() {
   return (neuron0x1aea840()*-0.00278113);
}

double NNfunction_sb_sLsL::synapse0x1aff490() {
   return (neuron0x1aeada0()*4.60158e-07);
}

double NNfunction_sb_sLsL::synapse0x1affb10() {
   return (neuron0x1aeafc0()*0.00288866);
}

double NNfunction_sb_sLsL::synapse0x1affb50() {
   return (neuron0x1aeb300()*0.009329);
}

double NNfunction_sb_sLsL::synapse0x1affb90() {
   return (neuron0x1aeb640()*-0.0010863);
}

double NNfunction_sb_sLsL::synapse0x1affbd0() {
   return (neuron0x1aeb980()*-7.92253e-05);
}

double NNfunction_sb_sLsL::synapse0x1affc10() {
   return (neuron0x1aebcc0()*-0.000633506);
}

double NNfunction_sb_sLsL::synapse0x1affc50() {
   return (neuron0x1aec000()*0.00303981);
}

double NNfunction_sb_sLsL::synapse0x1afffd0() {
   return (neuron0x1ae7440()*-0.369347);
}

double NNfunction_sb_sLsL::synapse0x1b00010() {
   return (neuron0x1ae7780()*0.0466527);
}

double NNfunction_sb_sLsL::synapse0x1b00050() {
   return (neuron0x1ae7ac0()*0.021051);
}

double NNfunction_sb_sLsL::synapse0x1b00090() {
   return (neuron0x1ae7e00()*0.367901);
}

double NNfunction_sb_sLsL::synapse0x1b000d0() {
   return (neuron0x1ae8140()*0.0836518);
}

double NNfunction_sb_sLsL::synapse0x1b00110() {
   return (neuron0x1ae8480()*-0.0856931);
}

double NNfunction_sb_sLsL::synapse0x1b00150() {
   return (neuron0x1ae87c0()*-0.193104);
}

double NNfunction_sb_sLsL::synapse0x1b00190() {
   return (neuron0x1ae8b00()*-0.0506169);
}

double NNfunction_sb_sLsL::synapse0x1b001d0() {
   return (neuron0x1ae8e40()*0.0923123);
}

double NNfunction_sb_sLsL::synapse0x1b00210() {
   return (neuron0x1ae9180()*0.0817516);
}

double NNfunction_sb_sLsL::synapse0x1b00250() {
   return (neuron0x1ae94c0()*-0.0847528);
}

double NNfunction_sb_sLsL::synapse0x1b00290() {
   return (neuron0x1ae9800()*-0.363483);
}

double NNfunction_sb_sLsL::synapse0x1b002d0() {
   return (neuron0x1ae9b40()*-0.473567);
}

double NNfunction_sb_sLsL::synapse0x1b00310() {
   return (neuron0x1ae9e80()*-0.0476645);
}

double NNfunction_sb_sLsL::synapse0x1b00350() {
   return (neuron0x1aea1c0()*0.00398753);
}

double NNfunction_sb_sLsL::synapse0x1b00390() {
   return (neuron0x1aea500()*-0.117282);
}

double NNfunction_sb_sLsL::synapse0x1affe20() {
   return (neuron0x1aea840()*0.0238862);
}

double NNfunction_sb_sLsL::synapse0x1affe60() {
   return (neuron0x1aeada0()*-0.00706578);
}

double NNfunction_sb_sLsL::synapse0x1b004e0() {
   return (neuron0x1aeafc0()*-0.0383331);
}

double NNfunction_sb_sLsL::synapse0x1b00520() {
   return (neuron0x1aeb300()*-0.43806);
}

double NNfunction_sb_sLsL::synapse0x1b00560() {
   return (neuron0x1aeb640()*-0.166213);
}

double NNfunction_sb_sLsL::synapse0x1b005a0() {
   return (neuron0x1aeb980()*0.0574992);
}

double NNfunction_sb_sLsL::synapse0x1b005e0() {
   return (neuron0x1aebcc0()*0.155404);
}

double NNfunction_sb_sLsL::synapse0x1b00620() {
   return (neuron0x1aec000()*-0.0204441);
}

double NNfunction_sb_sLsL::synapse0x1b009a0() {
   return (neuron0x1ae7440()*0.478874);
}

double NNfunction_sb_sLsL::synapse0x1b009e0() {
   return (neuron0x1ae7780()*-0.25045);
}

double NNfunction_sb_sLsL::synapse0x1b00a20() {
   return (neuron0x1ae7ac0()*0.13184);
}

double NNfunction_sb_sLsL::synapse0x1b00a60() {
   return (neuron0x1ae7e00()*-0.239941);
}

double NNfunction_sb_sLsL::synapse0x1b00aa0() {
   return (neuron0x1ae8140()*0.294758);
}

double NNfunction_sb_sLsL::synapse0x1b00ae0() {
   return (neuron0x1ae8480()*0.270565);
}

double NNfunction_sb_sLsL::synapse0x1b00b20() {
   return (neuron0x1ae87c0()*0.280792);
}

double NNfunction_sb_sLsL::synapse0x1b00b60() {
   return (neuron0x1ae8b00()*-0.2008);
}

double NNfunction_sb_sLsL::synapse0x1b00ba0() {
   return (neuron0x1ae8e40()*0.154969);
}

double NNfunction_sb_sLsL::synapse0x1b00be0() {
   return (neuron0x1ae9180()*-0.22306);
}

double NNfunction_sb_sLsL::synapse0x1b00c20() {
   return (neuron0x1ae94c0()*0.357255);
}

double NNfunction_sb_sLsL::synapse0x1b00c60() {
   return (neuron0x1ae9800()*-0.278019);
}

double NNfunction_sb_sLsL::synapse0x1b00ca0() {
   return (neuron0x1ae9b40()*0.0449197);
}

double NNfunction_sb_sLsL::synapse0x1b00ce0() {
   return (neuron0x1ae9e80()*-0.346261);
}

double NNfunction_sb_sLsL::synapse0x1b00d20() {
   return (neuron0x1aea1c0()*-0.259138);
}

double NNfunction_sb_sLsL::synapse0x1b00d60() {
   return (neuron0x1aea500()*0.0893479);
}

double NNfunction_sb_sLsL::synapse0x1b007f0() {
   return (neuron0x1aea840()*0.128701);
}

double NNfunction_sb_sLsL::synapse0x1b00830() {
   return (neuron0x1aeada0()*0.114601);
}

double NNfunction_sb_sLsL::synapse0x1b00eb0() {
   return (neuron0x1aeafc0()*-0.394848);
}

double NNfunction_sb_sLsL::synapse0x1b00ef0() {
   return (neuron0x1aeb300()*0.593936);
}

double NNfunction_sb_sLsL::synapse0x1b00f30() {
   return (neuron0x1aeb640()*0.0188282);
}

double NNfunction_sb_sLsL::synapse0x1b00f70() {
   return (neuron0x1aeb980()*0.165106);
}

double NNfunction_sb_sLsL::synapse0x1b00fb0() {
   return (neuron0x1aebcc0()*0.223384);
}

double NNfunction_sb_sLsL::synapse0x1b00ff0() {
   return (neuron0x1aec000()*0.452596);
}

double NNfunction_sb_sLsL::synapse0x1b01370() {
   return (neuron0x1ae7440()*-0.000254013);
}

double NNfunction_sb_sLsL::synapse0x1b013b0() {
   return (neuron0x1ae7780()*0.00618709);
}

double NNfunction_sb_sLsL::synapse0x1b013f0() {
   return (neuron0x1ae7ac0()*0.0344061);
}

double NNfunction_sb_sLsL::synapse0x1b01430() {
   return (neuron0x1ae7e00()*-3.80054);
}

double NNfunction_sb_sLsL::synapse0x1b01470() {
   return (neuron0x1ae8140()*-0.0167626);
}

double NNfunction_sb_sLsL::synapse0x1b014b0() {
   return (neuron0x1ae8480()*-0.000673106);
}

double NNfunction_sb_sLsL::synapse0x1b014f0() {
   return (neuron0x1ae87c0()*-0.0115697);
}

double NNfunction_sb_sLsL::synapse0x1b01530() {
   return (neuron0x1ae8b00()*0.00729658);
}

double NNfunction_sb_sLsL::synapse0x1b01570() {
   return (neuron0x1ae8e40()*-0.0114802);
}

double NNfunction_sb_sLsL::synapse0x1b015b0() {
   return (neuron0x1ae9180()*0.00933685);
}

double NNfunction_sb_sLsL::synapse0x1b015f0() {
   return (neuron0x1ae94c0()*-0.000551601);
}

double NNfunction_sb_sLsL::synapse0x1b01630() {
   return (neuron0x1ae9800()*0.00731107);
}

double NNfunction_sb_sLsL::synapse0x1b01670() {
   return (neuron0x1ae9b40()*0.449504);
}

double NNfunction_sb_sLsL::synapse0x1b016b0() {
   return (neuron0x1ae9e80()*0.0386395);
}

double NNfunction_sb_sLsL::synapse0x1b016f0() {
   return (neuron0x1aea1c0()*0.0144892);
}

double NNfunction_sb_sLsL::synapse0x1b01730() {
   return (neuron0x1aea500()*0.00753459);
}

double NNfunction_sb_sLsL::synapse0x1b011c0() {
   return (neuron0x1aea840()*0.0424309);
}

double NNfunction_sb_sLsL::synapse0x1b01200() {
   return (neuron0x1aeada0()*-0.0035818);
}

double NNfunction_sb_sLsL::synapse0x1b01880() {
   return (neuron0x1aeafc0()*-0.0201902);
}

double NNfunction_sb_sLsL::synapse0x1b018c0() {
   return (neuron0x1aeb300()*-0.00663569);
}

double NNfunction_sb_sLsL::synapse0x1b01900() {
   return (neuron0x1aeb640()*0.00829671);
}

double NNfunction_sb_sLsL::synapse0x1b01940() {
   return (neuron0x1aeb980()*0.001235);
}

double NNfunction_sb_sLsL::synapse0x1b01980() {
   return (neuron0x1aebcc0()*-0.00147955);
}

double NNfunction_sb_sLsL::synapse0x1b019c0() {
   return (neuron0x1aec000()*-0.0141234);
}

double NNfunction_sb_sLsL::synapse0x1b01d40() {
   return (neuron0x1ae7440()*-0.056516);
}

double NNfunction_sb_sLsL::synapse0x1af6310() {
   return (neuron0x1ae7780()*0.120519);
}

double NNfunction_sb_sLsL::synapse0x1af6350() {
   return (neuron0x1ae7ac0()*0.101202);
}

double NNfunction_sb_sLsL::synapse0x1af6390() {
   return (neuron0x1ae7e00()*-0.194876);
}

double NNfunction_sb_sLsL::synapse0x1af65e0() {
   return (neuron0x1ae8140()*-0.154088);
}

double NNfunction_sb_sLsL::synapse0x1af6620() {
   return (neuron0x1ae8480()*0.120155);
}

double NNfunction_sb_sLsL::synapse0x1af6660() {
   return (neuron0x1ae87c0()*0.111445);
}

double NNfunction_sb_sLsL::synapse0x1af68b0() {
   return (neuron0x1ae8b00()*0.191494);
}

double NNfunction_sb_sLsL::synapse0x1af68f0() {
   return (neuron0x1ae8e40()*0.191163);
}

double NNfunction_sb_sLsL::synapse0x1af6b40() {
   return (neuron0x1ae9180()*-0.407484);
}

double NNfunction_sb_sLsL::synapse0x1af6b80() {
   return (neuron0x1ae94c0()*-0.0424856);
}

double NNfunction_sb_sLsL::synapse0x1af6bc0() {
   return (neuron0x1ae9800()*-0.368016);
}

double NNfunction_sb_sLsL::synapse0x1af6e10() {
   return (neuron0x1ae9b40()*-0.588674);
}

double NNfunction_sb_sLsL::synapse0x1af6e50() {
   return (neuron0x1ae9e80()*-0.0680429);
}

double NNfunction_sb_sLsL::synapse0x1af70a0() {
   return (neuron0x1aea1c0()*-0.0383756);
}

double NNfunction_sb_sLsL::synapse0x1af70e0() {
   return (neuron0x1aea500()*-0.425058);
}

double NNfunction_sb_sLsL::synapse0x1b01b90() {
   return (neuron0x1aea840()*-0.234543);
}

double NNfunction_sb_sLsL::synapse0x1b01bd0() {
   return (neuron0x1aeada0()*-0.420149);
}

double NNfunction_sb_sLsL::synapse0x1af7230() {
   return (neuron0x1aeafc0()*-0.0557105);
}

double NNfunction_sb_sLsL::synapse0x1af7740() {
   return (neuron0x1aeb300()*-0.0726091);
}

double NNfunction_sb_sLsL::synapse0x1af7780() {
   return (neuron0x1aeb640()*0.104924);
}

double NNfunction_sb_sLsL::synapse0x1af77c0() {
   return (neuron0x1aeb980()*0.0325814);
}

double NNfunction_sb_sLsL::synapse0x1af7a10() {
   return (neuron0x1aebcc0()*0.0193865);
}

double NNfunction_sb_sLsL::synapse0x1af7a50() {
   return (neuron0x1aec000()*-0.319647);
}

double NNfunction_sb_sLsL::synapse0x1af7300() {
   return (neuron0x1ae7440()*0.0108716);
}

double NNfunction_sb_sLsL::synapse0x1af7340() {
   return (neuron0x1ae7780()*-0.330184);
}

double NNfunction_sb_sLsL::synapse0x1af7380() {
   return (neuron0x1ae7ac0()*0.271621);
}

double NNfunction_sb_sLsL::synapse0x1af73c0() {
   return (neuron0x1ae7e00()*0.259678);
}

double NNfunction_sb_sLsL::synapse0x1af7d40() {
   return (neuron0x1ae8140()*-0.444071);
}

double NNfunction_sb_sLsL::synapse0x1b04090() {
   return (neuron0x1ae8480()*-0.0562595);
}

double NNfunction_sb_sLsL::synapse0x1b040d0() {
   return (neuron0x1ae87c0()*0.409405);
}

double NNfunction_sb_sLsL::synapse0x1b04110() {
   return (neuron0x1ae8b00()*-0.542515);
}

double NNfunction_sb_sLsL::synapse0x1b04150() {
   return (neuron0x1ae8e40()*0.108793);
}

double NNfunction_sb_sLsL::synapse0x1b04190() {
   return (neuron0x1ae9180()*-0.0797387);
}

double NNfunction_sb_sLsL::synapse0x1b041d0() {
   return (neuron0x1ae94c0()*-0.025118);
}

double NNfunction_sb_sLsL::synapse0x1b04210() {
   return (neuron0x1ae9800()*-0.335615);
}

double NNfunction_sb_sLsL::synapse0x1b04250() {
   return (neuron0x1ae9b40()*0.719971);
}

double NNfunction_sb_sLsL::synapse0x1b04290() {
   return (neuron0x1ae9e80()*-0.107671);
}

double NNfunction_sb_sLsL::synapse0x1b042d0() {
   return (neuron0x1aea1c0()*0.0620691);
}

double NNfunction_sb_sLsL::synapse0x1b04310() {
   return (neuron0x1aea500()*0.20268);
}

double NNfunction_sb_sLsL::synapse0x1af7c20() {
   return (neuron0x1aea840()*0.187793);
}

double NNfunction_sb_sLsL::synapse0x1af7c60() {
   return (neuron0x1aeada0()*0.57148);
}

double NNfunction_sb_sLsL::synapse0x1b04460() {
   return (neuron0x1aeafc0()*0.141769);
}

double NNfunction_sb_sLsL::synapse0x1b044a0() {
   return (neuron0x1aeb300()*0.0706098);
}

double NNfunction_sb_sLsL::synapse0x1b044e0() {
   return (neuron0x1aeb640()*-0.421875);
}

double NNfunction_sb_sLsL::synapse0x1b04520() {
   return (neuron0x1aeb980()*0.162754);
}

double NNfunction_sb_sLsL::synapse0x1b04560() {
   return (neuron0x1aebcc0()*0.0113187);
}

double NNfunction_sb_sLsL::synapse0x1b045a0() {
   return (neuron0x1aec000()*0.201812);
}

double NNfunction_sb_sLsL::synapse0x1b04920() {
   return (neuron0x1ae7440()*-0.081379);
}

double NNfunction_sb_sLsL::synapse0x1b04960() {
   return (neuron0x1ae7780()*0.0627847);
}

double NNfunction_sb_sLsL::synapse0x1b049a0() {
   return (neuron0x1ae7ac0()*-0.284233);
}

double NNfunction_sb_sLsL::synapse0x1b049e0() {
   return (neuron0x1ae7e00()*0.64516);
}

double NNfunction_sb_sLsL::synapse0x1b04a20() {
   return (neuron0x1ae8140()*-0.00173594);
}

double NNfunction_sb_sLsL::synapse0x1b04a60() {
   return (neuron0x1ae8480()*0.0715961);
}

double NNfunction_sb_sLsL::synapse0x1b04aa0() {
   return (neuron0x1ae87c0()*-0.253645);
}

double NNfunction_sb_sLsL::synapse0x1b04ae0() {
   return (neuron0x1ae8b00()*0.0820622);
}

double NNfunction_sb_sLsL::synapse0x1b04b20() {
   return (neuron0x1ae8e40()*0.0113229);
}

double NNfunction_sb_sLsL::synapse0x1b04b60() {
   return (neuron0x1ae9180()*-0.183774);
}

double NNfunction_sb_sLsL::synapse0x1b04ba0() {
   return (neuron0x1ae94c0()*-0.0287023);
}

double NNfunction_sb_sLsL::synapse0x1b04be0() {
   return (neuron0x1ae9800()*0.303236);
}

double NNfunction_sb_sLsL::synapse0x1b04c20() {
   return (neuron0x1ae9b40()*1.10245);
}

double NNfunction_sb_sLsL::synapse0x1b04c60() {
   return (neuron0x1ae9e80()*-0.0400487);
}

double NNfunction_sb_sLsL::synapse0x1b04ca0() {
   return (neuron0x1aea1c0()*0.331016);
}

double NNfunction_sb_sLsL::synapse0x1b04ce0() {
   return (neuron0x1aea500()*0.0642361);
}

double NNfunction_sb_sLsL::synapse0x1b04770() {
   return (neuron0x1aea840()*-0.620998);
}

double NNfunction_sb_sLsL::synapse0x1b047b0() {
   return (neuron0x1aeada0()*0.21227);
}

double NNfunction_sb_sLsL::synapse0x1b04e30() {
   return (neuron0x1aeafc0()*0.0145217);
}

double NNfunction_sb_sLsL::synapse0x1b04e70() {
   return (neuron0x1aeb300()*0.102191);
}

double NNfunction_sb_sLsL::synapse0x1b04eb0() {
   return (neuron0x1aeb640()*-0.151883);
}

double NNfunction_sb_sLsL::synapse0x1b04ef0() {
   return (neuron0x1aeb980()*-0.0215443);
}

double NNfunction_sb_sLsL::synapse0x1b04f30() {
   return (neuron0x1aebcc0()*-0.0445786);
}

double NNfunction_sb_sLsL::synapse0x1b04f70() {
   return (neuron0x1aec000()*0.0740479);
}

double NNfunction_sb_sLsL::synapse0x1b052f0() {
   return (neuron0x1ae7440()*0.187298);
}

double NNfunction_sb_sLsL::synapse0x1b05330() {
   return (neuron0x1ae7780()*0.0571683);
}

double NNfunction_sb_sLsL::synapse0x1b05370() {
   return (neuron0x1ae7ac0()*-0.46301);
}

double NNfunction_sb_sLsL::synapse0x1b053b0() {
   return (neuron0x1ae7e00()*0.230351);
}

double NNfunction_sb_sLsL::synapse0x1b053f0() {
   return (neuron0x1ae8140()*0.337772);
}

double NNfunction_sb_sLsL::synapse0x1b05430() {
   return (neuron0x1ae8480()*0.7324);
}

double NNfunction_sb_sLsL::synapse0x1b05470() {
   return (neuron0x1ae87c0()*0.135169);
}

double NNfunction_sb_sLsL::synapse0x1b054b0() {
   return (neuron0x1ae8b00()*0.110756);
}

double NNfunction_sb_sLsL::synapse0x1b054f0() {
   return (neuron0x1ae8e40()*0.1972);
}

double NNfunction_sb_sLsL::synapse0x1b05530() {
   return (neuron0x1ae9180()*-0.0122482);
}

double NNfunction_sb_sLsL::synapse0x1b05570() {
   return (neuron0x1ae94c0()*0.0840404);
}

double NNfunction_sb_sLsL::synapse0x1b055b0() {
   return (neuron0x1ae9800()*-0.213308);
}

double NNfunction_sb_sLsL::synapse0x1b055f0() {
   return (neuron0x1ae9b40()*-0.139846);
}

double NNfunction_sb_sLsL::synapse0x1b05630() {
   return (neuron0x1ae9e80()*0.181492);
}

double NNfunction_sb_sLsL::synapse0x1b05670() {
   return (neuron0x1aea1c0()*0.681903);
}

double NNfunction_sb_sLsL::synapse0x1b056b0() {
   return (neuron0x1aea500()*-0.254644);
}

double NNfunction_sb_sLsL::synapse0x1b05140() {
   return (neuron0x1aea840()*0.128792);
}

double NNfunction_sb_sLsL::synapse0x1b05180() {
   return (neuron0x1aeada0()*-0.357436);
}

double NNfunction_sb_sLsL::synapse0x1b05800() {
   return (neuron0x1aeafc0()*0.0180382);
}

double NNfunction_sb_sLsL::synapse0x1b05840() {
   return (neuron0x1aeb300()*-0.0895033);
}

double NNfunction_sb_sLsL::synapse0x1b05880() {
   return (neuron0x1aeb640()*-0.308632);
}

double NNfunction_sb_sLsL::synapse0x1b058c0() {
   return (neuron0x1aeb980()*-0.249043);
}

double NNfunction_sb_sLsL::synapse0x1b05900() {
   return (neuron0x1aebcc0()*-0.0632774);
}

double NNfunction_sb_sLsL::synapse0x1b05940() {
   return (neuron0x1aec000()*0.410001);
}

double NNfunction_sb_sLsL::synapse0x1b05cc0() {
   return (neuron0x1ae7440()*-0.271676);
}

double NNfunction_sb_sLsL::synapse0x1b05d00() {
   return (neuron0x1ae7780()*0.181961);
}

double NNfunction_sb_sLsL::synapse0x1b05d40() {
   return (neuron0x1ae7ac0()*-0.608026);
}

double NNfunction_sb_sLsL::synapse0x1b05d80() {
   return (neuron0x1ae7e00()*0.829609);
}

double NNfunction_sb_sLsL::synapse0x1b05dc0() {
   return (neuron0x1ae8140()*-0.012477);
}

double NNfunction_sb_sLsL::synapse0x1b05e00() {
   return (neuron0x1ae8480()*0.184235);
}

double NNfunction_sb_sLsL::synapse0x1b05e40() {
   return (neuron0x1ae87c0()*0.0319163);
}

double NNfunction_sb_sLsL::synapse0x1b05e80() {
   return (neuron0x1ae8b00()*0.00790375);
}

double NNfunction_sb_sLsL::synapse0x1b05ec0() {
   return (neuron0x1ae8e40()*-0.150849);
}

double NNfunction_sb_sLsL::synapse0x1b05f00() {
   return (neuron0x1ae9180()*-0.084277);
}

double NNfunction_sb_sLsL::synapse0x1b05f40() {
   return (neuron0x1ae94c0()*-0.0210216);
}

double NNfunction_sb_sLsL::synapse0x1b05f80() {
   return (neuron0x1ae9800()*-0.279156);
}

double NNfunction_sb_sLsL::synapse0x1b05fc0() {
   return (neuron0x1ae9b40()*0.0170054);
}

double NNfunction_sb_sLsL::synapse0x1b06000() {
   return (neuron0x1ae9e80()*0.346165);
}

double NNfunction_sb_sLsL::synapse0x1b06040() {
   return (neuron0x1aea1c0()*0.41264);
}

double NNfunction_sb_sLsL::synapse0x1b06080() {
   return (neuron0x1aea500()*-0.308644);
}

double NNfunction_sb_sLsL::synapse0x1b05b10() {
   return (neuron0x1aea840()*0.561376);
}

double NNfunction_sb_sLsL::synapse0x1b05b50() {
   return (neuron0x1aeada0()*-0.27502);
}

double NNfunction_sb_sLsL::synapse0x1b061d0() {
   return (neuron0x1aeafc0()*0.106915);
}

double NNfunction_sb_sLsL::synapse0x1b06210() {
   return (neuron0x1aeb300()*-0.279776);
}

double NNfunction_sb_sLsL::synapse0x1b06250() {
   return (neuron0x1aeb640()*-0.456433);
}

double NNfunction_sb_sLsL::synapse0x1b06290() {
   return (neuron0x1aeb980()*-0.113299);
}

double NNfunction_sb_sLsL::synapse0x1b062d0() {
   return (neuron0x1aebcc0()*-0.0483739);
}

double NNfunction_sb_sLsL::synapse0x1b06310() {
   return (neuron0x1aec000()*-0.0016495);
}

double NNfunction_sb_sLsL::synapse0x1b06690() {
   return (neuron0x1ae7440()*-0.0061335);
}

double NNfunction_sb_sLsL::synapse0x1b066d0() {
   return (neuron0x1ae7780()*-0.00114799);
}

double NNfunction_sb_sLsL::synapse0x1b06710() {
   return (neuron0x1ae7ac0()*0.0461319);
}

double NNfunction_sb_sLsL::synapse0x1b06750() {
   return (neuron0x1ae7e00()*0.151608);
}

double NNfunction_sb_sLsL::synapse0x1b06790() {
   return (neuron0x1ae8140()*-0.00571067);
}

double NNfunction_sb_sLsL::synapse0x1b067d0() {
   return (neuron0x1ae8480()*0.00481503);
}

double NNfunction_sb_sLsL::synapse0x1b06810() {
   return (neuron0x1ae87c0()*0.0228222);
}

double NNfunction_sb_sLsL::synapse0x1b06850() {
   return (neuron0x1ae8b00()*0.00155539);
}

double NNfunction_sb_sLsL::synapse0x1b06890() {
   return (neuron0x1ae8e40()*-0.00897006);
}

double NNfunction_sb_sLsL::synapse0x1b068d0() {
   return (neuron0x1ae9180()*0.00122173);
}

double NNfunction_sb_sLsL::synapse0x1b06910() {
   return (neuron0x1ae94c0()*0.0071729);
}

double NNfunction_sb_sLsL::synapse0x1b06950() {
   return (neuron0x1ae9800()*0.0219636);
}

double NNfunction_sb_sLsL::synapse0x1b06990() {
   return (neuron0x1ae9b40()*-2.15796);
}

double NNfunction_sb_sLsL::synapse0x1b069d0() {
   return (neuron0x1ae9e80()*-0.0225973);
}

double NNfunction_sb_sLsL::synapse0x1b06a10() {
   return (neuron0x1aea1c0()*0.026458);
}

double NNfunction_sb_sLsL::synapse0x1b06a50() {
   return (neuron0x1aea500()*0.0254793);
}

double NNfunction_sb_sLsL::synapse0x1b064e0() {
   return (neuron0x1aea840()*-0.0072373);
}

double NNfunction_sb_sLsL::synapse0x1b06520() {
   return (neuron0x1aeada0()*0.00633786);
}

double NNfunction_sb_sLsL::synapse0x1b06ba0() {
   return (neuron0x1aeafc0()*0.00142965);
}

double NNfunction_sb_sLsL::synapse0x1b06be0() {
   return (neuron0x1aeb300()*-0.0083845);
}

double NNfunction_sb_sLsL::synapse0x1b06c20() {
   return (neuron0x1aeb640()*-0.00320514);
}

double NNfunction_sb_sLsL::synapse0x1b06c60() {
   return (neuron0x1aeb980()*0.0145863);
}

double NNfunction_sb_sLsL::synapse0x1b06ca0() {
   return (neuron0x1aebcc0()*-0.00851641);
}

double NNfunction_sb_sLsL::synapse0x1b06ce0() {
   return (neuron0x1aec000()*0.00102735);
}

double NNfunction_sb_sLsL::synapse0x1b07060() {
   return (neuron0x1ae7440()*-0.308607);
}

double NNfunction_sb_sLsL::synapse0x1b070a0() {
   return (neuron0x1ae7780()*0.0885595);
}

double NNfunction_sb_sLsL::synapse0x1b070e0() {
   return (neuron0x1ae7ac0()*-0.0505513);
}

double NNfunction_sb_sLsL::synapse0x1b07120() {
   return (neuron0x1ae7e00()*-0.249775);
}

double NNfunction_sb_sLsL::synapse0x1b07160() {
   return (neuron0x1ae8140()*0.40677);
}

double NNfunction_sb_sLsL::synapse0x1b071a0() {
   return (neuron0x1ae8480()*-0.208483);
}

double NNfunction_sb_sLsL::synapse0x1b071e0() {
   return (neuron0x1ae87c0()*-0.0317694);
}

double NNfunction_sb_sLsL::synapse0x1b07220() {
   return (neuron0x1ae8b00()*-0.299061);
}

double NNfunction_sb_sLsL::synapse0x1b07260() {
   return (neuron0x1ae8e40()*0.253938);
}

double NNfunction_sb_sLsL::synapse0x1b072a0() {
   return (neuron0x1ae9180()*-0.00784196);
}

double NNfunction_sb_sLsL::synapse0x1b072e0() {
   return (neuron0x1ae94c0()*0.348225);
}

double NNfunction_sb_sLsL::synapse0x1b07320() {
   return (neuron0x1ae9800()*0.39405);
}

double NNfunction_sb_sLsL::synapse0x1b07360() {
   return (neuron0x1ae9b40()*-0.685294);
}

double NNfunction_sb_sLsL::synapse0x1b073a0() {
   return (neuron0x1ae9e80()*-0.542289);
}

double NNfunction_sb_sLsL::synapse0x1b073e0() {
   return (neuron0x1aea1c0()*0.392625);
}

double NNfunction_sb_sLsL::synapse0x1b07420() {
   return (neuron0x1aea500()*-0.0058643);
}

double NNfunction_sb_sLsL::synapse0x1b06eb0() {
   return (neuron0x1aea840()*-0.112331);
}

double NNfunction_sb_sLsL::synapse0x1b06ef0() {
   return (neuron0x1aeada0()*-0.151695);
}

double NNfunction_sb_sLsL::synapse0x1b07570() {
   return (neuron0x1aeafc0()*0.0820626);
}

double NNfunction_sb_sLsL::synapse0x1b075b0() {
   return (neuron0x1aeb300()*-0.289525);
}

double NNfunction_sb_sLsL::synapse0x1b075f0() {
   return (neuron0x1aeb640()*0.226729);
}

double NNfunction_sb_sLsL::synapse0x1b07630() {
   return (neuron0x1aeb980()*-0.0964137);
}

double NNfunction_sb_sLsL::synapse0x1b07670() {
   return (neuron0x1aebcc0()*0.0525478);
}

double NNfunction_sb_sLsL::synapse0x1b076b0() {
   return (neuron0x1aec000()*-0.0740024);
}

double NNfunction_sb_sLsL::synapse0x1b07a30() {
   return (neuron0x1ae7440()*-0.0629094);
}

double NNfunction_sb_sLsL::synapse0x1b07a70() {
   return (neuron0x1ae7780()*-0.182166);
}

double NNfunction_sb_sLsL::synapse0x1b07ab0() {
   return (neuron0x1ae7ac0()*-0.517616);
}

double NNfunction_sb_sLsL::synapse0x1b07af0() {
   return (neuron0x1ae7e00()*-0.457457);
}

double NNfunction_sb_sLsL::synapse0x1b07b30() {
   return (neuron0x1ae8140()*0.0574791);
}

double NNfunction_sb_sLsL::synapse0x1b07b70() {
   return (neuron0x1ae8480()*-0.076772);
}

double NNfunction_sb_sLsL::synapse0x1b07bb0() {
   return (neuron0x1ae87c0()*-0.0496024);
}

double NNfunction_sb_sLsL::synapse0x1b07bf0() {
   return (neuron0x1ae8b00()*-0.145701);
}

double NNfunction_sb_sLsL::synapse0x1b07c30() {
   return (neuron0x1ae8e40()*-0.278359);
}

double NNfunction_sb_sLsL::synapse0x1b07c70() {
   return (neuron0x1ae9180()*-0.0983932);
}

double NNfunction_sb_sLsL::synapse0x1b07cb0() {
   return (neuron0x1ae94c0()*-0.0171218);
}

double NNfunction_sb_sLsL::synapse0x1b07cf0() {
   return (neuron0x1ae9800()*-0.18732);
}

double NNfunction_sb_sLsL::synapse0x1b07d30() {
   return (neuron0x1ae9b40()*-0.316913);
}

double NNfunction_sb_sLsL::synapse0x1b07d70() {
   return (neuron0x1ae9e80()*-0.0577932);
}

double NNfunction_sb_sLsL::synapse0x1b07db0() {
   return (neuron0x1aea1c0()*0.788512);
}

double NNfunction_sb_sLsL::synapse0x1b07df0() {
   return (neuron0x1aea500()*-0.0531162);
}

double NNfunction_sb_sLsL::synapse0x1b07880() {
   return (neuron0x1aea840()*0.123757);
}

double NNfunction_sb_sLsL::synapse0x1b078c0() {
   return (neuron0x1aeada0()*-0.0414235);
}

double NNfunction_sb_sLsL::synapse0x1b07f40() {
   return (neuron0x1aeafc0()*0.0270105);
}

double NNfunction_sb_sLsL::synapse0x1b07f80() {
   return (neuron0x1aeb300()*-0.253566);
}

double NNfunction_sb_sLsL::synapse0x1b07fc0() {
   return (neuron0x1aeb640()*-0.233282);
}

double NNfunction_sb_sLsL::synapse0x1b08000() {
   return (neuron0x1aeb980()*0.0327097);
}

double NNfunction_sb_sLsL::synapse0x1b08040() {
   return (neuron0x1aebcc0()*0.149839);
}

double NNfunction_sb_sLsL::synapse0x1b08080() {
   return (neuron0x1aec000()*-0.165239);
}

double NNfunction_sb_sLsL::synapse0x1b08400() {
   return (neuron0x1ae7440()*-0.0666988);
}

double NNfunction_sb_sLsL::synapse0x1b08440() {
   return (neuron0x1ae7780()*0.0355099);
}

double NNfunction_sb_sLsL::synapse0x1b08480() {
   return (neuron0x1ae7ac0()*0.177639);
}

double NNfunction_sb_sLsL::synapse0x1b084c0() {
   return (neuron0x1ae7e00()*-0.397017);
}

double NNfunction_sb_sLsL::synapse0x1b08500() {
   return (neuron0x1ae8140()*0.0405014);
}

double NNfunction_sb_sLsL::synapse0x1b08540() {
   return (neuron0x1ae8480()*-0.0858502);
}

double NNfunction_sb_sLsL::synapse0x1b08580() {
   return (neuron0x1ae87c0()*0.0615526);
}

double NNfunction_sb_sLsL::synapse0x1b085c0() {
   return (neuron0x1ae8b00()*0.0729768);
}

double NNfunction_sb_sLsL::synapse0x1b08600() {
   return (neuron0x1ae8e40()*-0.0261054);
}

double NNfunction_sb_sLsL::synapse0x1b08640() {
   return (neuron0x1ae9180()*0.469768);
}

double NNfunction_sb_sLsL::synapse0x1b08680() {
   return (neuron0x1ae94c0()*0.152009);
}

double NNfunction_sb_sLsL::synapse0x1b086c0() {
   return (neuron0x1ae9800()*-0.0785695);
}

double NNfunction_sb_sLsL::synapse0x1b08700() {
   return (neuron0x1ae9b40()*-1.0273);
}

double NNfunction_sb_sLsL::synapse0x1b08740() {
   return (neuron0x1ae9e80()*-0.220962);
}

double NNfunction_sb_sLsL::synapse0x1b08780() {
   return (neuron0x1aea1c0()*-0.0713529);
}

double NNfunction_sb_sLsL::synapse0x1b087c0() {
   return (neuron0x1aea500()*0.00700468);
}

double NNfunction_sb_sLsL::synapse0x1b08250() {
   return (neuron0x1aea840()*-0.0800362);
}

double NNfunction_sb_sLsL::synapse0x1b08290() {
   return (neuron0x1aeada0()*-0.279106);
}

double NNfunction_sb_sLsL::synapse0x1b08910() {
   return (neuron0x1aeafc0()*-0.133153);
}

double NNfunction_sb_sLsL::synapse0x1b08950() {
   return (neuron0x1aeb300()*-0.213569);
}

double NNfunction_sb_sLsL::synapse0x1b08990() {
   return (neuron0x1aeb640()*0.0852253);
}

double NNfunction_sb_sLsL::synapse0x1b089d0() {
   return (neuron0x1aeb980()*-0.080119);
}

double NNfunction_sb_sLsL::synapse0x1b08a10() {
   return (neuron0x1aebcc0()*0.10185);
}

double NNfunction_sb_sLsL::synapse0x1b08a50() {
   return (neuron0x1aec000()*-0.00512213);
}

double NNfunction_sb_sLsL::synapse0x1af1500() {
   return (neuron0x1ae7440()*-0.00561127);
}

double NNfunction_sb_sLsL::synapse0x1af1540() {
   return (neuron0x1ae7780()*-0.00276889);
}

double NNfunction_sb_sLsL::synapse0x1af1580() {
   return (neuron0x1ae7ac0()*-0.0249706);
}

double NNfunction_sb_sLsL::synapse0x1af15c0() {
   return (neuron0x1ae7e00()*-2.71774);
}

double NNfunction_sb_sLsL::synapse0x1af1600() {
   return (neuron0x1ae8140()*0.00807033);
}

double NNfunction_sb_sLsL::synapse0x1af1640() {
   return (neuron0x1ae8480()*0.000663359);
}

double NNfunction_sb_sLsL::synapse0x1af1680() {
   return (neuron0x1ae87c0()*-0.0157267);
}

double NNfunction_sb_sLsL::synapse0x1af16c0() {
   return (neuron0x1ae8b00()*-0.0131719);
}

double NNfunction_sb_sLsL::synapse0x1b091e0() {
   return (neuron0x1ae8e40()*-0.000473402);
}

double NNfunction_sb_sLsL::synapse0x1b09220() {
   return (neuron0x1ae9180()*-0.00342835);
}

double NNfunction_sb_sLsL::synapse0x1b09260() {
   return (neuron0x1ae94c0()*-0.00523434);
}

double NNfunction_sb_sLsL::synapse0x1b092a0() {
   return (neuron0x1ae9800()*0.00274215);
}

double NNfunction_sb_sLsL::synapse0x1b092e0() {
   return (neuron0x1ae9b40()*-0.146413);
}

double NNfunction_sb_sLsL::synapse0x1b09320() {
   return (neuron0x1ae9e80()*-0.0475249);
}

double NNfunction_sb_sLsL::synapse0x1b09360() {
   return (neuron0x1aea1c0()*-0.00211403);
}

double NNfunction_sb_sLsL::synapse0x1b093a0() {
   return (neuron0x1aea500()*-0.0184603);
}

double NNfunction_sb_sLsL::synapse0x1b08c20() {
   return (neuron0x1aea840()*-0.0269662);
}

double NNfunction_sb_sLsL::synapse0x1b08c60() {
   return (neuron0x1aeada0()*0.0084549);
}

double NNfunction_sb_sLsL::synapse0x1b094f0() {
   return (neuron0x1aeafc0()*0.00228039);
}

double NNfunction_sb_sLsL::synapse0x1b09530() {
   return (neuron0x1aeb300()*-0.0046181);
}

double NNfunction_sb_sLsL::synapse0x1b09570() {
   return (neuron0x1aeb640()*0.00163495);
}

double NNfunction_sb_sLsL::synapse0x1b095b0() {
   return (neuron0x1aeb980()*0.00109963);
}

double NNfunction_sb_sLsL::synapse0x1b095f0() {
   return (neuron0x1aebcc0()*0.00727419);
}

double NNfunction_sb_sLsL::synapse0x1b09630() {
   return (neuron0x1aec000()*-0.00838536);
}

double NNfunction_sb_sLsL::synapse0x1b099b0() {
   return (neuron0x1ae7440()*0.229156);
}

double NNfunction_sb_sLsL::synapse0x1b099f0() {
   return (neuron0x1ae7780()*-0.0166966);
}

double NNfunction_sb_sLsL::synapse0x1b09a30() {
   return (neuron0x1ae7ac0()*-0.348585);
}

double NNfunction_sb_sLsL::synapse0x1b09a70() {
   return (neuron0x1ae7e00()*0.391083);
}

double NNfunction_sb_sLsL::synapse0x1b09ab0() {
   return (neuron0x1ae8140()*0.0545239);
}

double NNfunction_sb_sLsL::synapse0x1b09af0() {
   return (neuron0x1ae8480()*-0.0385513);
}

double NNfunction_sb_sLsL::synapse0x1b09b30() {
   return (neuron0x1ae87c0()*0.0722756);
}

double NNfunction_sb_sLsL::synapse0x1b09b70() {
   return (neuron0x1ae8b00()*-0.389093);
}

double NNfunction_sb_sLsL::synapse0x1b09bb0() {
   return (neuron0x1ae8e40()*0.00549364);
}

double NNfunction_sb_sLsL::synapse0x1b09bf0() {
   return (neuron0x1ae9180()*0.199564);
}

double NNfunction_sb_sLsL::synapse0x1b09c30() {
   return (neuron0x1ae94c0()*0.0123072);
}

double NNfunction_sb_sLsL::synapse0x1b09c70() {
   return (neuron0x1ae9800()*-0.0422639);
}

double NNfunction_sb_sLsL::synapse0x1b09cb0() {
   return (neuron0x1ae9b40()*0.184816);
}

double NNfunction_sb_sLsL::synapse0x1b09cf0() {
   return (neuron0x1ae9e80()*-0.210904);
}

double NNfunction_sb_sLsL::synapse0x1b09d30() {
   return (neuron0x1aea1c0()*0.259969);
}

double NNfunction_sb_sLsL::synapse0x1b09d70() {
   return (neuron0x1aea500()*-0.0528697);
}

double NNfunction_sb_sLsL::synapse0x1b09800() {
   return (neuron0x1aea840()*-0.0237785);
}

double NNfunction_sb_sLsL::synapse0x1b09840() {
   return (neuron0x1aeada0()*0.137704);
}

double NNfunction_sb_sLsL::synapse0x1b09ec0() {
   return (neuron0x1aeafc0()*-0.198417);
}

double NNfunction_sb_sLsL::synapse0x1b09f00() {
   return (neuron0x1aeb300()*0.412971);
}

double NNfunction_sb_sLsL::synapse0x1b09f40() {
   return (neuron0x1aeb640()*0.0753096);
}

double NNfunction_sb_sLsL::synapse0x1b09f80() {
   return (neuron0x1aeb980()*0.0574318);
}

double NNfunction_sb_sLsL::synapse0x1b09fc0() {
   return (neuron0x1aebcc0()*0.109822);
}

double NNfunction_sb_sLsL::synapse0x1b0a000() {
   return (neuron0x1aec000()*0.10962);
}

double NNfunction_sb_sLsL::synapse0x1b0a380() {
   return (neuron0x1ae7440()*0.00855066);
}

double NNfunction_sb_sLsL::synapse0x1b0a3c0() {
   return (neuron0x1ae7780()*-0.00703418);
}

double NNfunction_sb_sLsL::synapse0x1b0a400() {
   return (neuron0x1ae7ac0()*-0.0962589);
}

double NNfunction_sb_sLsL::synapse0x1b0a440() {
   return (neuron0x1ae7e00()*2.49276);
}

double NNfunction_sb_sLsL::synapse0x1b0a480() {
   return (neuron0x1ae8140()*0.0511722);
}

double NNfunction_sb_sLsL::synapse0x1b0a4c0() {
   return (neuron0x1ae8480()*-0.00729466);
}

double NNfunction_sb_sLsL::synapse0x1b0a500() {
   return (neuron0x1ae87c0()*0.0389011);
}

double NNfunction_sb_sLsL::synapse0x1b0a540() {
   return (neuron0x1ae8b00()*-0.0164099);
}

double NNfunction_sb_sLsL::synapse0x1b0a580() {
   return (neuron0x1ae8e40()*0.0393549);
}

double NNfunction_sb_sLsL::synapse0x1b0a5c0() {
   return (neuron0x1ae9180()*0.00693641);
}

double NNfunction_sb_sLsL::synapse0x1b0a600() {
   return (neuron0x1ae94c0()*0.0125592);
}

double NNfunction_sb_sLsL::synapse0x1b0a640() {
   return (neuron0x1ae9800()*-0.0125025);
}

double NNfunction_sb_sLsL::synapse0x1b0a680() {
   return (neuron0x1ae9b40()*0.809855);
}

double NNfunction_sb_sLsL::synapse0x1b0a6c0() {
   return (neuron0x1ae9e80()*-0.0133879);
}

double NNfunction_sb_sLsL::synapse0x1b0a700() {
   return (neuron0x1aea1c0()*-0.0753559);
}

double NNfunction_sb_sLsL::synapse0x1b0a740() {
   return (neuron0x1aea500()*-0.0354329);
}

double NNfunction_sb_sLsL::synapse0x1b0a1d0() {
   return (neuron0x1aea840()*0.0442561);
}

double NNfunction_sb_sLsL::synapse0x1b0a210() {
   return (neuron0x1aeada0()*-0.0120237);
}

double NNfunction_sb_sLsL::synapse0x1afad40() {
   return (neuron0x1aeafc0()*0.0183871);
}

double NNfunction_sb_sLsL::synapse0x1afad80() {
   return (neuron0x1aeb300()*-0.0145095);
}

double NNfunction_sb_sLsL::synapse0x1afadc0() {
   return (neuron0x1aeb640()*0.00893192);
}

double NNfunction_sb_sLsL::synapse0x1afae00() {
   return (neuron0x1aeb980()*0.0273208);
}

double NNfunction_sb_sLsL::synapse0x1afae40() {
   return (neuron0x1aebcc0()*0.0215439);
}

double NNfunction_sb_sLsL::synapse0x1afae80() {
   return (neuron0x1aec000()*-0.011161);
}

double NNfunction_sb_sLsL::synapse0x1afb200() {
   return (neuron0x1ae7440()*0.306675);
}

double NNfunction_sb_sLsL::synapse0x1afb240() {
   return (neuron0x1ae7780()*0.0860044);
}

double NNfunction_sb_sLsL::synapse0x1afb280() {
   return (neuron0x1ae7ac0()*-0.0905404);
}

double NNfunction_sb_sLsL::synapse0x1afb2c0() {
   return (neuron0x1ae7e00()*0.495266);
}

double NNfunction_sb_sLsL::synapse0x1afb300() {
   return (neuron0x1ae8140()*0.533602);
}

double NNfunction_sb_sLsL::synapse0x1afb340() {
   return (neuron0x1ae8480()*-0.00636685);
}

double NNfunction_sb_sLsL::synapse0x1afb380() {
   return (neuron0x1ae87c0()*-0.259802);
}

double NNfunction_sb_sLsL::synapse0x1afb3c0() {
   return (neuron0x1ae8b00()*-0.113286);
}

double NNfunction_sb_sLsL::synapse0x1afb400() {
   return (neuron0x1ae8e40()*-0.0804405);
}

double NNfunction_sb_sLsL::synapse0x1afb440() {
   return (neuron0x1ae9180()*0.251367);
}

double NNfunction_sb_sLsL::synapse0x1afb480() {
   return (neuron0x1ae94c0()*0.142871);
}

double NNfunction_sb_sLsL::synapse0x1afb4c0() {
   return (neuron0x1ae9800()*0.255342);
}

double NNfunction_sb_sLsL::synapse0x1afb500() {
   return (neuron0x1ae9b40()*0.304353);
}

double NNfunction_sb_sLsL::synapse0x1afb540() {
   return (neuron0x1ae9e80()*-0.161587);
}

double NNfunction_sb_sLsL::synapse0x1afb580() {
   return (neuron0x1aea1c0()*-0.0465419);
}

double NNfunction_sb_sLsL::synapse0x1afb5c0() {
   return (neuron0x1aea500()*0.0582846);
}

double NNfunction_sb_sLsL::synapse0x1afb050() {
   return (neuron0x1aea840()*0.151059);
}

double NNfunction_sb_sLsL::synapse0x1afb090() {
   return (neuron0x1aeada0()*-0.000468932);
}

double NNfunction_sb_sLsL::synapse0x1afb710() {
   return (neuron0x1aeafc0()*-0.154215);
}

double NNfunction_sb_sLsL::synapse0x1afb750() {
   return (neuron0x1aeb300()*-0.377001);
}

double NNfunction_sb_sLsL::synapse0x1afb790() {
   return (neuron0x1aeb640()*-0.0442208);
}

double NNfunction_sb_sLsL::synapse0x1afb7d0() {
   return (neuron0x1aeb980()*0.538721);
}

double NNfunction_sb_sLsL::synapse0x1afb810() {
   return (neuron0x1aebcc0()*0.0520361);
}

double NNfunction_sb_sLsL::synapse0x1afb850() {
   return (neuron0x1aec000()*0.00621253);
}

double NNfunction_sb_sLsL::synapse0x1afbbd0() {
   return (neuron0x1ae7440()*0.020828);
}

double NNfunction_sb_sLsL::synapse0x1afbc10() {
   return (neuron0x1ae7780()*-0.0467982);
}

double NNfunction_sb_sLsL::synapse0x1afbc50() {
   return (neuron0x1ae7ac0()*0.386798);
}

double NNfunction_sb_sLsL::synapse0x1afbc90() {
   return (neuron0x1ae7e00()*0.822997);
}

double NNfunction_sb_sLsL::synapse0x1afbcd0() {
   return (neuron0x1ae8140()*-0.0417392);
}

double NNfunction_sb_sLsL::synapse0x1afbd10() {
   return (neuron0x1ae8480()*-0.0844528);
}

double NNfunction_sb_sLsL::synapse0x1afbd50() {
   return (neuron0x1ae87c0()*0.112446);
}

double NNfunction_sb_sLsL::synapse0x1afbd90() {
   return (neuron0x1ae8b00()*-0.0771782);
}

double NNfunction_sb_sLsL::synapse0x1afbdd0() {
   return (neuron0x1ae8e40()*0.0432508);
}

double NNfunction_sb_sLsL::synapse0x1afbe10() {
   return (neuron0x1ae9180()*0.0553766);
}

double NNfunction_sb_sLsL::synapse0x1afbe50() {
   return (neuron0x1ae94c0()*0.0144509);
}

double NNfunction_sb_sLsL::synapse0x1afbe90() {
   return (neuron0x1ae9800()*-0.010819);
}

double NNfunction_sb_sLsL::synapse0x1afbed0() {
   return (neuron0x1ae9b40()*-0.521134);
}

double NNfunction_sb_sLsL::synapse0x1afbf10() {
   return (neuron0x1ae9e80()*0.0906501);
}

double NNfunction_sb_sLsL::synapse0x1afbf50() {
   return (neuron0x1aea1c0()*0.0458826);
}

double NNfunction_sb_sLsL::synapse0x1afbf90() {
   return (neuron0x1aea500()*-0.0445959);
}

double NNfunction_sb_sLsL::synapse0x1afba20() {
   return (neuron0x1aea840()*-0.0464743);
}

double NNfunction_sb_sLsL::synapse0x1afba60() {
   return (neuron0x1aeada0()*-0.0118321);
}

double NNfunction_sb_sLsL::synapse0x1afc0e0() {
   return (neuron0x1aeafc0()*-0.0463672);
}

double NNfunction_sb_sLsL::synapse0x1afc120() {
   return (neuron0x1aeb300()*0.0281267);
}

double NNfunction_sb_sLsL::synapse0x1afc160() {
   return (neuron0x1aeb640()*0.0224528);
}

double NNfunction_sb_sLsL::synapse0x1afc1a0() {
   return (neuron0x1aeb980()*-0.00951757);
}

double NNfunction_sb_sLsL::synapse0x1afc1e0() {
   return (neuron0x1aebcc0()*0.00876212);
}

double NNfunction_sb_sLsL::synapse0x1afc220() {
   return (neuron0x1aec000()*-0.0198206);
}

double NNfunction_sb_sLsL::synapse0x1afc5a0() {
   return (neuron0x1ae7440()*-0.107077);
}

double NNfunction_sb_sLsL::synapse0x1afc5e0() {
   return (neuron0x1ae7780()*-0.0664928);
}

double NNfunction_sb_sLsL::synapse0x1afc620() {
   return (neuron0x1ae7ac0()*0.0555469);
}

double NNfunction_sb_sLsL::synapse0x1afc660() {
   return (neuron0x1ae7e00()*-0.750539);
}

double NNfunction_sb_sLsL::synapse0x1afc6a0() {
   return (neuron0x1ae8140()*0.179192);
}

double NNfunction_sb_sLsL::synapse0x1afc6e0() {
   return (neuron0x1ae8480()*-0.0782626);
}

double NNfunction_sb_sLsL::synapse0x1afc720() {
   return (neuron0x1ae87c0()*0.0527102);
}

double NNfunction_sb_sLsL::synapse0x1afc760() {
   return (neuron0x1ae8b00()*-0.0128845);
}

double NNfunction_sb_sLsL::synapse0x1afc7a0() {
   return (neuron0x1ae8e40()*-0.0838571);
}

double NNfunction_sb_sLsL::synapse0x1afc7e0() {
   return (neuron0x1ae9180()*-0.20984);
}

double NNfunction_sb_sLsL::synapse0x1afc820() {
   return (neuron0x1ae94c0()*-0.30461);
}

double NNfunction_sb_sLsL::synapse0x1afc860() {
   return (neuron0x1ae9800()*-0.192939);
}

double NNfunction_sb_sLsL::synapse0x1afc8a0() {
   return (neuron0x1ae9b40()*-0.454821);
}

double NNfunction_sb_sLsL::synapse0x1afc8e0() {
   return (neuron0x1ae9e80()*-0.445507);
}

double NNfunction_sb_sLsL::synapse0x1afc920() {
   return (neuron0x1aea1c0()*-0.576405);
}

double NNfunction_sb_sLsL::synapse0x1afc960() {
   return (neuron0x1aea500()*-0.187939);
}

double NNfunction_sb_sLsL::synapse0x1afc3f0() {
   return (neuron0x1aea840()*0.316927);
}

double NNfunction_sb_sLsL::synapse0x1afc430() {
   return (neuron0x1aeada0()*0.331817);
}

double NNfunction_sb_sLsL::synapse0x1afcab0() {
   return (neuron0x1aeafc0()*-0.34497);
}

double NNfunction_sb_sLsL::synapse0x1afcaf0() {
   return (neuron0x1aeb300()*0.102154);
}

double NNfunction_sb_sLsL::synapse0x1afcb30() {
   return (neuron0x1aeb640()*-0.134583);
}

double NNfunction_sb_sLsL::synapse0x1afcb70() {
   return (neuron0x1aeb980()*0.0793718);
}

double NNfunction_sb_sLsL::synapse0x1afcbb0() {
   return (neuron0x1aebcc0()*-0.216256);
}

double NNfunction_sb_sLsL::synapse0x1afcbf0() {
   return (neuron0x1aec000()*-0.141597);
}

double NNfunction_sb_sLsL::synapse0x1b0eac0() {
   return (neuron0x1ae7440()*-0.0695763);
}

double NNfunction_sb_sLsL::synapse0x1b0eb00() {
   return (neuron0x1ae7780()*-0.00308355);
}

double NNfunction_sb_sLsL::synapse0x1b0eb40() {
   return (neuron0x1ae7ac0()*-0.0991612);
}

double NNfunction_sb_sLsL::synapse0x1b0eb80() {
   return (neuron0x1ae7e00()*-0.215928);
}

double NNfunction_sb_sLsL::synapse0x1b0ebc0() {
   return (neuron0x1ae8140()*0.0428984);
}

double NNfunction_sb_sLsL::synapse0x1b0ec00() {
   return (neuron0x1ae8480()*0.0591063);
}

double NNfunction_sb_sLsL::synapse0x1b0ec40() {
   return (neuron0x1ae87c0()*-0.00679247);
}

double NNfunction_sb_sLsL::synapse0x1b0ec80() {
   return (neuron0x1ae8b00()*-0.046214);
}

double NNfunction_sb_sLsL::synapse0x1b0ecc0() {
   return (neuron0x1ae8e40()*-0.374728);
}

double NNfunction_sb_sLsL::synapse0x1b0ed00() {
   return (neuron0x1ae9180()*-0.186958);
}

double NNfunction_sb_sLsL::synapse0x1b0ed40() {
   return (neuron0x1ae94c0()*0.137085);
}

double NNfunction_sb_sLsL::synapse0x1b0ed80() {
   return (neuron0x1ae9800()*-0.0602667);
}

double NNfunction_sb_sLsL::synapse0x1b0edc0() {
   return (neuron0x1ae9b40()*1.90562);
}

double NNfunction_sb_sLsL::synapse0x1b0ee00() {
   return (neuron0x1ae9e80()*-0.0846983);
}

double NNfunction_sb_sLsL::synapse0x1b0ee40() {
   return (neuron0x1aea1c0()*0.0350095);
}

double NNfunction_sb_sLsL::synapse0x1b0ee80() {
   return (neuron0x1aea500()*0.0227642);
}

double NNfunction_sb_sLsL::synapse0x1afcc30() {
   return (neuron0x1aea840()*-0.0812998);
}

double NNfunction_sb_sLsL::synapse0x1afcc70() {
   return (neuron0x1aeada0()*-0.0584672);
}

double NNfunction_sb_sLsL::synapse0x1b0efd0() {
   return (neuron0x1aeafc0()*-0.0670865);
}

double NNfunction_sb_sLsL::synapse0x1b0f010() {
   return (neuron0x1aeb300()*-0.0326554);
}

double NNfunction_sb_sLsL::synapse0x1b0f050() {
   return (neuron0x1aeb640()*-0.0110368);
}

double NNfunction_sb_sLsL::synapse0x1b0f090() {
   return (neuron0x1aeb980()*-0.0132467);
}

double NNfunction_sb_sLsL::synapse0x1b0f0d0() {
   return (neuron0x1aebcc0()*-0.0192395);
}

double NNfunction_sb_sLsL::synapse0x1b0f110() {
   return (neuron0x1aec000()*0.0427637);
}

double NNfunction_sb_sLsL::synapse0x1b0f490() {
   return (neuron0x1ae7440()*-0.330609);
}

double NNfunction_sb_sLsL::synapse0x1b0f4d0() {
   return (neuron0x1ae7780()*-0.00239853);
}

double NNfunction_sb_sLsL::synapse0x1b0f510() {
   return (neuron0x1ae7ac0()*0.0117256);
}

double NNfunction_sb_sLsL::synapse0x1b0f550() {
   return (neuron0x1ae7e00()*-0.101233);
}

double NNfunction_sb_sLsL::synapse0x1b0f590() {
   return (neuron0x1ae8140()*-0.315549);
}

double NNfunction_sb_sLsL::synapse0x1b0f5d0() {
   return (neuron0x1ae8480()*-0.266123);
}

double NNfunction_sb_sLsL::synapse0x1b0f610() {
   return (neuron0x1ae87c0()*-0.128);
}

double NNfunction_sb_sLsL::synapse0x1b0f650() {
   return (neuron0x1ae8b00()*-0.213581);
}

double NNfunction_sb_sLsL::synapse0x1b0f690() {
   return (neuron0x1ae8e40()*-0.245037);
}

double NNfunction_sb_sLsL::synapse0x1b0f6d0() {
   return (neuron0x1ae9180()*0.166984);
}

double NNfunction_sb_sLsL::synapse0x1b0f710() {
   return (neuron0x1ae94c0()*-0.344551);
}

double NNfunction_sb_sLsL::synapse0x1b0f750() {
   return (neuron0x1ae9800()*0.297948);
}

double NNfunction_sb_sLsL::synapse0x1b0f790() {
   return (neuron0x1ae9b40()*1.37241);
}

double NNfunction_sb_sLsL::synapse0x1b0f7d0() {
   return (neuron0x1ae9e80()*0.405404);
}

double NNfunction_sb_sLsL::synapse0x1b0f810() {
   return (neuron0x1aea1c0()*0.211456);
}

double NNfunction_sb_sLsL::synapse0x1b0f850() {
   return (neuron0x1aea500()*-0.418576);
}

double NNfunction_sb_sLsL::synapse0x1b0f2e0() {
   return (neuron0x1aea840()*-0.239985);
}

double NNfunction_sb_sLsL::synapse0x1b0f320() {
   return (neuron0x1aeada0()*0.335342);
}

double NNfunction_sb_sLsL::synapse0x1b0f9a0() {
   return (neuron0x1aeafc0()*-0.00652023);
}

double NNfunction_sb_sLsL::synapse0x1b0f9e0() {
   return (neuron0x1aeb300()*0.415411);
}

double NNfunction_sb_sLsL::synapse0x1b0fa20() {
   return (neuron0x1aeb640()*-0.186988);
}

double NNfunction_sb_sLsL::synapse0x1b0fa60() {
   return (neuron0x1aeb980()*-0.289238);
}

double NNfunction_sb_sLsL::synapse0x1b0faa0() {
   return (neuron0x1aebcc0()*0.303627);
}

double NNfunction_sb_sLsL::synapse0x1b0fae0() {
   return (neuron0x1aec000()*-0.215273);
}

double NNfunction_sb_sLsL::synapse0x1b0fe60() {
   return (neuron0x1ae7440()*0.146731);
}

double NNfunction_sb_sLsL::synapse0x1b0fea0() {
   return (neuron0x1ae7780()*0.0104254);
}

double NNfunction_sb_sLsL::synapse0x1b0fee0() {
   return (neuron0x1ae7ac0()*-0.0478651);
}

double NNfunction_sb_sLsL::synapse0x1b0ff20() {
   return (neuron0x1ae7e00()*-0.489561);
}

double NNfunction_sb_sLsL::synapse0x1b0ff60() {
   return (neuron0x1ae8140()*-0.115159);
}

double NNfunction_sb_sLsL::synapse0x1b0ffa0() {
   return (neuron0x1ae8480()*-0.0458082);
}

double NNfunction_sb_sLsL::synapse0x1b0ffe0() {
   return (neuron0x1ae87c0()*-0.104452);
}

double NNfunction_sb_sLsL::synapse0x1b10020() {
   return (neuron0x1ae8b00()*-0.217082);
}

double NNfunction_sb_sLsL::synapse0x1b10060() {
   return (neuron0x1ae8e40()*0.160013);
}

double NNfunction_sb_sLsL::synapse0x1b100a0() {
   return (neuron0x1ae9180()*0.145022);
}

double NNfunction_sb_sLsL::synapse0x1b100e0() {
   return (neuron0x1ae94c0()*-0.0251853);
}

double NNfunction_sb_sLsL::synapse0x1b10120() {
   return (neuron0x1ae9800()*0.186508);
}

double NNfunction_sb_sLsL::synapse0x1b10160() {
   return (neuron0x1ae9b40()*-0.603103);
}

double NNfunction_sb_sLsL::synapse0x1b101a0() {
   return (neuron0x1ae9e80()*-0.132729);
}

double NNfunction_sb_sLsL::synapse0x1b101e0() {
   return (neuron0x1aea1c0()*-0.0924467);
}

double NNfunction_sb_sLsL::synapse0x1b10220() {
   return (neuron0x1aea500()*0.219934);
}

double NNfunction_sb_sLsL::synapse0x1b0fcb0() {
   return (neuron0x1aea840()*-0.0775068);
}

double NNfunction_sb_sLsL::synapse0x1b0fcf0() {
   return (neuron0x1aeada0()*0.16236);
}

double NNfunction_sb_sLsL::synapse0x1b10370() {
   return (neuron0x1aeafc0()*0.402541);
}

double NNfunction_sb_sLsL::synapse0x1b103b0() {
   return (neuron0x1aeb300()*0.159202);
}

double NNfunction_sb_sLsL::synapse0x1b103f0() {
   return (neuron0x1aeb640()*0.169289);
}

double NNfunction_sb_sLsL::synapse0x1b10430() {
   return (neuron0x1aeb980()*-0.0281353);
}

double NNfunction_sb_sLsL::synapse0x1b10470() {
   return (neuron0x1aebcc0()*-0.0183866);
}

double NNfunction_sb_sLsL::synapse0x1b104b0() {
   return (neuron0x1aec000()*0.111364);
}

double NNfunction_sb_sLsL::synapse0x1b10830() {
   return (neuron0x1ae7440()*0.224495);
}

double NNfunction_sb_sLsL::synapse0x1b10870() {
   return (neuron0x1ae7780()*0.561609);
}

double NNfunction_sb_sLsL::synapse0x1b108b0() {
   return (neuron0x1ae7ac0()*-0.100139);
}

double NNfunction_sb_sLsL::synapse0x1b108f0() {
   return (neuron0x1ae7e00()*-0.689738);
}

double NNfunction_sb_sLsL::synapse0x1b10930() {
   return (neuron0x1ae8140()*0.0361547);
}

double NNfunction_sb_sLsL::synapse0x1b10970() {
   return (neuron0x1ae8480()*0.0742248);
}

double NNfunction_sb_sLsL::synapse0x1b109b0() {
   return (neuron0x1ae87c0()*-0.114008);
}

double NNfunction_sb_sLsL::synapse0x1b109f0() {
   return (neuron0x1ae8b00()*0.483851);
}

double NNfunction_sb_sLsL::synapse0x1b10a30() {
   return (neuron0x1ae8e40()*0.275696);
}

double NNfunction_sb_sLsL::synapse0x1b10a70() {
   return (neuron0x1ae9180()*0.418276);
}

double NNfunction_sb_sLsL::synapse0x1b10ab0() {
   return (neuron0x1ae94c0()*-0.0163517);
}

double NNfunction_sb_sLsL::synapse0x1b10af0() {
   return (neuron0x1ae9800()*-0.460381);
}

double NNfunction_sb_sLsL::synapse0x1b10b30() {
   return (neuron0x1ae9b40()*0.340284);
}

double NNfunction_sb_sLsL::synapse0x1b10b70() {
   return (neuron0x1ae9e80()*-0.430581);
}

double NNfunction_sb_sLsL::synapse0x1b10bb0() {
   return (neuron0x1aea1c0()*0.366739);
}

double NNfunction_sb_sLsL::synapse0x1b10bf0() {
   return (neuron0x1aea500()*0.0879418);
}

double NNfunction_sb_sLsL::synapse0x1b10680() {
   return (neuron0x1aea840()*-0.0517465);
}

double NNfunction_sb_sLsL::synapse0x1b106c0() {
   return (neuron0x1aeada0()*-0.065047);
}

double NNfunction_sb_sLsL::synapse0x1b10d40() {
   return (neuron0x1aeafc0()*-0.0759977);
}

double NNfunction_sb_sLsL::synapse0x1b10d80() {
   return (neuron0x1aeb300()*0.0375192);
}

double NNfunction_sb_sLsL::synapse0x1b10dc0() {
   return (neuron0x1aeb640()*0.0299622);
}

double NNfunction_sb_sLsL::synapse0x1b10e00() {
   return (neuron0x1aeb980()*0.114769);
}

double NNfunction_sb_sLsL::synapse0x1b10e40() {
   return (neuron0x1aebcc0()*0.0538283);
}

double NNfunction_sb_sLsL::synapse0x1b10e80() {
   return (neuron0x1aec000()*-0.109205);
}

double NNfunction_sb_sLsL::synapse0x18b0d90() {
   return (neuron0x1aec470()*0.681987);
}

double NNfunction_sb_sLsL::synapse0x18b0dd0() {
   return (neuron0x1aecdc0()*0.304835);
}

double NNfunction_sb_sLsL::synapse0x1aee930() {
   return (neuron0x1aed8a0()*0.596724);
}

double NNfunction_sb_sLsL::synapse0x1aee970() {
   return (neuron0x1aed340()*-0.0512534);
}

double NNfunction_sb_sLsL::synapse0x1aef300() {
   return (neuron0x1aee680()*0.045174);
}

double NNfunction_sb_sLsL::synapse0x1aef340() {
   return (neuron0x1aef050()*0.0172934);
}

double NNfunction_sb_sLsL::synapse0x1af00d0() {
   return (neuron0x1aefe20()*-0.0218098);
}

double NNfunction_sb_sLsL::synapse0x1af0110() {
   return (neuron0x1af07f0()*-0.580676);
}

double NNfunction_sb_sLsL::synapse0x1af0aa0() {
   return (neuron0x1af11c0()*0.650711);
}

double NNfunction_sb_sLsL::synapse0x1af0ae0() {
   return (neuron0x1af1ca0()*0.0294433);
}

double NNfunction_sb_sLsL::synapse0x1af1470() {
   return (neuron0x1af2670()*0.491227);
}

double NNfunction_sb_sLsL::synapse0x1af14b0() {
   return (neuron0x1aef750()*-0.30099);
}

double NNfunction_sb_sLsL::synapse0x1af1f50() {
   return (neuron0x1af4220()*0.913959);
}

double NNfunction_sb_sLsL::synapse0x1af1f90() {
   return (neuron0x1af4bf0()*-0.200357);
}

double NNfunction_sb_sLsL::synapse0x1af2920() {
   return (neuron0x1af55c0()*0.484807);
}

double NNfunction_sb_sLsL::synapse0x1af2960() {
   return (neuron0x1af5f90()*0.375812);
}

double NNfunction_sb_sLsL::synapse0x1aefa00() {
   return (neuron0x1af7da0()*0.920518);
}

double NNfunction_sb_sLsL::synapse0x1aefa40() {
   return (neuron0x1af8080()*0.193822);
}

double NNfunction_sb_sLsL::synapse0x1af44d0() {
   return (neuron0x1af8a50()*0.7457);
}

double NNfunction_sb_sLsL::synapse0x1af4510() {
   return (neuron0x1af9420()*-0.0505047);
}

double NNfunction_sb_sLsL::synapse0x1af4ea0() {
   return (neuron0x1af9df0()*0.487693);
}

double NNfunction_sb_sLsL::synapse0x1af4ee0() {
   return (neuron0x1afa7c0()*-0.264698);
}

double NNfunction_sb_sLsL::synapse0x1af5870() {
   return (neuron0x1af3310()*0.327622);
}

double NNfunction_sb_sLsL::synapse0x1af58b0() {
   return (neuron0x1af3ce0()*-0.719195);
}

double NNfunction_sb_sLsL::synapse0x1af6240() {
   return (neuron0x1afd550()*0.241895);
}

double NNfunction_sb_sLsL::synapse0x1af6280() {
   return (neuron0x1afdf20()*0.64018);
}

double NNfunction_sb_sLsL::synapse0x1aea3e0() {
   return (neuron0x1afe8f0()*0.452818);
}

double NNfunction_sb_sLsL::synapse0x1aea420() {
   return (neuron0x1aff2c0()*0.356626);
}

double NNfunction_sb_sLsL::synapse0x1af8330() {
   return (neuron0x1affc90()*0.362618);
}

double NNfunction_sb_sLsL::synapse0x1af8370() {
   return (neuron0x1b00660()*0.466508);
}

double NNfunction_sb_sLsL::synapse0x1af8d00() {
   return (neuron0x1b01030()*0.950129);
}

double NNfunction_sb_sLsL::synapse0x1af8d40() {
   return (neuron0x1b01a00()*0.314716);
}

double NNfunction_sb_sLsL::synapse0x1af96d0() {
   return (neuron0x1af7a90()*0.32777);
}

double NNfunction_sb_sLsL::synapse0x1af9710() {
   return (neuron0x1b045e0()*0.551272);
}

double NNfunction_sb_sLsL::synapse0x1afa0a0() {
   return (neuron0x1b04fb0()*0.555737);
}

double NNfunction_sb_sLsL::synapse0x1afa0e0() {
   return (neuron0x1b05980()*0.031173);
}

double NNfunction_sb_sLsL::synapse0x1afaa70() {
   return (neuron0x1b06350()*-0.73817);
}

double NNfunction_sb_sLsL::synapse0x1afaab0() {
   return (neuron0x1b06d20()*0.574369);
}

double NNfunction_sb_sLsL::synapse0x1af35c0() {
   return (neuron0x1b076f0()*0.108178);
}

double NNfunction_sb_sLsL::synapse0x1af3600() {
   return (neuron0x1b080c0()*-0.0987435);
}

double NNfunction_sb_sLsL::synapse0x1afce70() {
   return (neuron0x1b08a90()*0.380895);
}

double NNfunction_sb_sLsL::synapse0x1afceb0() {
   return (neuron0x1b09670()*0.489743);
}

double NNfunction_sb_sLsL::synapse0x1afd800() {
   return (neuron0x1b0a040()*0.348018);
}

double NNfunction_sb_sLsL::synapse0x1afd840() {
   return (neuron0x1afaec0()*-0.220343);
}

double NNfunction_sb_sLsL::synapse0x1afe1d0() {
   return (neuron0x1afb890()*-0.0440016);
}

double NNfunction_sb_sLsL::synapse0x1afe210() {
   return (neuron0x1afc260()*0.599273);
}

double NNfunction_sb_sLsL::synapse0x1afeba0() {
   return (neuron0x1b0e8a0()*-0.121416);
}

double NNfunction_sb_sLsL::synapse0x1afebe0() {
   return (neuron0x1b0f150()*0.381338);
}

double NNfunction_sb_sLsL::synapse0x1aff570() {
   return (neuron0x1b0fb20()*0.318589);
}

double NNfunction_sb_sLsL::synapse0x1aff5b0() {
   return (neuron0x1b104f0()*0.413309);
}

double NNfunction_sb_sLsL::synapse0x1b01cb0() {
   return (neuron0x1aec470()*-0.981784);
}

double NNfunction_sb_sLsL::synapse0x1b01cf0() {
   return (neuron0x1aecdc0()*-0.446876);
}

double NNfunction_sb_sLsL::synapse0x1af7270() {
   return (neuron0x1aed8a0()*1.24924);
}

double NNfunction_sb_sLsL::synapse0x1af72b0() {
   return (neuron0x1aed340()*2.34867);
}

double NNfunction_sb_sLsL::synapse0x1b04890() {
   return (neuron0x1aee680()*-0.108762);
}

double NNfunction_sb_sLsL::synapse0x1b048d0() {
   return (neuron0x1aef050()*-0.393292);
}

double NNfunction_sb_sLsL::synapse0x1b05260() {
   return (neuron0x1aefe20()*-0.887573);
}

double NNfunction_sb_sLsL::synapse0x1b052a0() {
   return (neuron0x1af07f0()*1.62171);
}

double NNfunction_sb_sLsL::synapse0x1b05c30() {
   return (neuron0x1af11c0()*1.1875);
}

double NNfunction_sb_sLsL::synapse0x1b05c70() {
   return (neuron0x1af1ca0()*2.0616);
}

double NNfunction_sb_sLsL::synapse0x1b06600() {
   return (neuron0x1af2670()*-0.0417263);
}

double NNfunction_sb_sLsL::synapse0x1b06640() {
   return (neuron0x1aef750()*0.226939);
}

double NNfunction_sb_sLsL::synapse0x1b06fd0() {
   return (neuron0x1af4220()*1.35335);
}

double NNfunction_sb_sLsL::synapse0x1b07010() {
   return (neuron0x1af4bf0()*-0.290369);
}

double NNfunction_sb_sLsL::synapse0x1b079a0() {
   return (neuron0x1af55c0()*-1.12653);
}

double NNfunction_sb_sLsL::synapse0x1b079e0() {
   return (neuron0x1af5f90()*-0.270392);
}

double NNfunction_sb_sLsL::synapse0x1b08370() {
   return (neuron0x1af7da0()*2.4194);
}

double NNfunction_sb_sLsL::synapse0x1b083b0() {
   return (neuron0x1af8080()*0.13173);
}

double NNfunction_sb_sLsL::synapse0x1b08d40() {
   return (neuron0x1af8a50()*1.31118);
}

double NNfunction_sb_sLsL::synapse0x1b08d80() {
   return (neuron0x1af9420()*-3.27393);
}

double NNfunction_sb_sLsL::synapse0x1b09920() {
   return (neuron0x1af9df0()*0.666235);
}

double NNfunction_sb_sLsL::synapse0x1b09960() {
   return (neuron0x1afa7c0()*-1.12962);
}

double NNfunction_sb_sLsL::synapse0x1b0a2f0() {
   return (neuron0x1af3310()*-0.711057);
}

double NNfunction_sb_sLsL::synapse0x1b0a330() {
   return (neuron0x1af3ce0()*-0.0302517);
}

double NNfunction_sb_sLsL::synapse0x1afb170() {
   return (neuron0x1afd550()*-0.230428);
}

double NNfunction_sb_sLsL::synapse0x1afb1b0() {
   return (neuron0x1afdf20()*-0.163227);
}

double NNfunction_sb_sLsL::synapse0x1afbb40() {
   return (neuron0x1afe8f0()*1.54851);
}

double NNfunction_sb_sLsL::synapse0x1afbb80() {
   return (neuron0x1aff2c0()*-1.9291);
}

double NNfunction_sb_sLsL::synapse0x1afc510() {
   return (neuron0x1affc90()*0.193696);
}

double NNfunction_sb_sLsL::synapse0x1afc550() {
   return (neuron0x1b00660()*0.260295);
}

double NNfunction_sb_sLsL::synapse0x1b0ea30() {
   return (neuron0x1b01030()*3.90506);
}

double NNfunction_sb_sLsL::synapse0x1b0ea70() {
   return (neuron0x1b01a00()*-0.233911);
}

double NNfunction_sb_sLsL::synapse0x1b0f400() {
   return (neuron0x1af7a90()*-0.171045);
}

double NNfunction_sb_sLsL::synapse0x1b0f440() {
   return (neuron0x1b045e0()*-0.765293);
}

double NNfunction_sb_sLsL::synapse0x1b0fdd0() {
   return (neuron0x1b04fb0()*0.0675262);
}

double NNfunction_sb_sLsL::synapse0x1b0fe10() {
   return (neuron0x1b05980()*-0.124023);
}

double NNfunction_sb_sLsL::synapse0x1b107a0() {
   return (neuron0x1b06350()*-1.50793);
}

double NNfunction_sb_sLsL::synapse0x1b107e0() {
   return (neuron0x1b06d20()*0.329066);
}

double NNfunction_sb_sLsL::synapse0x1aec690() {
   return (neuron0x1b076f0()*0.566919);
}

double NNfunction_sb_sLsL::synapse0x1aec6d0() {
   return (neuron0x1b080c0()*-0.622849);
}

double NNfunction_sb_sLsL::synapse0x1afff40() {
   return (neuron0x1b08a90()*-4.82884);
}

double NNfunction_sb_sLsL::synapse0x1afff80() {
   return (neuron0x1b09670()*-0.0820571);
}

double NNfunction_sb_sLsL::synapse0x1b10ec0() {
   return (neuron0x1b0a040()*-4.27474);
}

double NNfunction_sb_sLsL::synapse0x1b10f00() {
   return (neuron0x1afaec0()*-0.0412168);
}

double NNfunction_sb_sLsL::synapse0x1b10f40() {
   return (neuron0x1afb890()*1.58698);
}

double NNfunction_sb_sLsL::synapse0x1b10f80() {
   return (neuron0x1afc260()*0.100869);
}

double NNfunction_sb_sLsL::synapse0x1b17e30() {
   return (neuron0x1b0e8a0()*1.38128);
}

double NNfunction_sb_sLsL::synapse0x1b17e70() {
   return (neuron0x1b0f150()*0.0377775);
}

double NNfunction_sb_sLsL::synapse0x1b17eb0() {
   return (neuron0x1b0fb20()*0.51081);
}

double NNfunction_sb_sLsL::synapse0x1b17ef0() {
   return (neuron0x1b104f0()*0.143775);
}

double NNfunction_sb_sLsL::synapse0x1b18270() {
   return (neuron0x1aec470()*-0.0201363);
}

double NNfunction_sb_sLsL::synapse0x1b182b0() {
   return (neuron0x1aecdc0()*0.0121737);
}

double NNfunction_sb_sLsL::synapse0x1b182f0() {
   return (neuron0x1aed8a0()*-0.0849426);
}

double NNfunction_sb_sLsL::synapse0x1b18330() {
   return (neuron0x1aed340()*-0.17231);
}

double NNfunction_sb_sLsL::synapse0x1b18370() {
   return (neuron0x1aee680()*-0.00697644);
}

double NNfunction_sb_sLsL::synapse0x1b183b0() {
   return (neuron0x1aef050()*0.0137833);
}

double NNfunction_sb_sLsL::synapse0x1b183f0() {
   return (neuron0x1aefe20()*0.480568);
}

double NNfunction_sb_sLsL::synapse0x1b18430() {
   return (neuron0x1af07f0()*-0.0506437);
}

double NNfunction_sb_sLsL::synapse0x1b18470() {
   return (neuron0x1af11c0()*0.0061895);
}

double NNfunction_sb_sLsL::synapse0x1b184b0() {
   return (neuron0x1af1ca0()*-0.0755641);
}

double NNfunction_sb_sLsL::synapse0x1b184f0() {
   return (neuron0x1af2670()*0.00733047);
}

double NNfunction_sb_sLsL::synapse0x1b18530() {
   return (neuron0x1aef750()*-0.000971463);
}

double NNfunction_sb_sLsL::synapse0x1b18570() {
   return (neuron0x1af4220()*-0.47607);
}

double NNfunction_sb_sLsL::synapse0x1b185b0() {
   return (neuron0x1af4bf0()*0.00350865);
}

double NNfunction_sb_sLsL::synapse0x1b185f0() {
   return (neuron0x1af55c0()*0.0570743);
}

double NNfunction_sb_sLsL::synapse0x1b18630() {
   return (neuron0x1af5f90()*-0.0139415);
}

double NNfunction_sb_sLsL::synapse0x1b180c0() {
   return (neuron0x1af7da0()*-0.421868);
}

double NNfunction_sb_sLsL::synapse0x1b18100() {
   return (neuron0x1af8080()*-0.00236245);
}

double NNfunction_sb_sLsL::synapse0x1b18780() {
   return (neuron0x1af8a50()*-2.56019);
}

double NNfunction_sb_sLsL::synapse0x1b187c0() {
   return (neuron0x1af9420()*0.150621);
}

double NNfunction_sb_sLsL::synapse0x1b18800() {
   return (neuron0x1af9df0()*0.00748474);
}

double NNfunction_sb_sLsL::synapse0x1b18840() {
   return (neuron0x1afa7c0()*-0.00980283);
}

double NNfunction_sb_sLsL::synapse0x1b18880() {
   return (neuron0x1af3310()*-0.00966637);
}

double NNfunction_sb_sLsL::synapse0x1b188c0() {
   return (neuron0x1af3ce0()*0.885748);
}

double NNfunction_sb_sLsL::synapse0x1b18900() {
   return (neuron0x1afd550()*-0.0146519);
}

double NNfunction_sb_sLsL::synapse0x1b18940() {
   return (neuron0x1afdf20()*-0.00298959);
}

double NNfunction_sb_sLsL::synapse0x1b18980() {
   return (neuron0x1afe8f0()*-0.171002);
}

double NNfunction_sb_sLsL::synapse0x1b189c0() {
   return (neuron0x1aff2c0()*0.72276);
}

double NNfunction_sb_sLsL::synapse0x1b18a00() {
   return (neuron0x1affc90()*0.0115021);
}

double NNfunction_sb_sLsL::synapse0x1b18a40() {
   return (neuron0x1b00660()*-0.00524375);
}

double NNfunction_sb_sLsL::synapse0x1b18a80() {
   return (neuron0x1b01030()*-0.0676841);
}

double NNfunction_sb_sLsL::synapse0x1b18ac0() {
   return (neuron0x1b01a00()*-0.0338662);
}

double NNfunction_sb_sLsL::synapse0x1b18670() {
   return (neuron0x1af7a90()*0.00266852);
}

double NNfunction_sb_sLsL::synapse0x1b186b0() {
   return (neuron0x1b045e0()*0.00470144);
}

double NNfunction_sb_sLsL::synapse0x1b186f0() {
   return (neuron0x1b04fb0()*-0.00486118);
}

double NNfunction_sb_sLsL::synapse0x1b18730() {
   return (neuron0x1b05980()*0.0136616);
}

double NNfunction_sb_sLsL::synapse0x1b18d10() {
   return (neuron0x1b06350()*0.784532);
}

double NNfunction_sb_sLsL::synapse0x1b18d50() {
   return (neuron0x1b06d20()*-0.00274741);
}

double NNfunction_sb_sLsL::synapse0x1b18d90() {
   return (neuron0x1b076f0()*0.00304464);
}

double NNfunction_sb_sLsL::synapse0x1b18dd0() {
   return (neuron0x1b080c0()*-0.0315581);
}

double NNfunction_sb_sLsL::synapse0x1b18e10() {
   return (neuron0x1b08a90()*0.417285);
}

double NNfunction_sb_sLsL::synapse0x1b18e50() {
   return (neuron0x1b09670()*0.0100511);
}

double NNfunction_sb_sLsL::synapse0x1b18e90() {
   return (neuron0x1b0a040()*-0.0414693);
}

double NNfunction_sb_sLsL::synapse0x1b18ed0() {
   return (neuron0x1afaec0()*0.0027919);
}

double NNfunction_sb_sLsL::synapse0x1b18f10() {
   return (neuron0x1afb890()*-0.098937);
}

double NNfunction_sb_sLsL::synapse0x1b18f50() {
   return (neuron0x1afc260()*-0.006181);
}

double NNfunction_sb_sLsL::synapse0x1b18f90() {
   return (neuron0x1b0e8a0()*-0.0199624);
}

double NNfunction_sb_sLsL::synapse0x1b18fd0() {
   return (neuron0x1b0f150()*0.0127779);
}

double NNfunction_sb_sLsL::synapse0x1b19010() {
   return (neuron0x1b0fb20()*-0.0082421);
}

double NNfunction_sb_sLsL::synapse0x1b19050() {
   return (neuron0x1b104f0()*-0.0116279);
}

double NNfunction_sb_sLsL::synapse0x1b193d0() {
   return (neuron0x1aec470()*-0.0622302);
}

double NNfunction_sb_sLsL::synapse0x1b19410() {
   return (neuron0x1aecdc0()*-0.228826);
}

double NNfunction_sb_sLsL::synapse0x1b19450() {
   return (neuron0x1aed8a0()*-0.12196);
}

double NNfunction_sb_sLsL::synapse0x1b19490() {
   return (neuron0x1aed340()*0.29948);
}

double NNfunction_sb_sLsL::synapse0x1b194d0() {
   return (neuron0x1aee680()*0.598236);
}

double NNfunction_sb_sLsL::synapse0x1b19510() {
   return (neuron0x1aef050()*-1.48618);
}

double NNfunction_sb_sLsL::synapse0x1b19550() {
   return (neuron0x1aefe20()*-1.36405);
}

double NNfunction_sb_sLsL::synapse0x1b19590() {
   return (neuron0x1af07f0()*1.31971);
}

double NNfunction_sb_sLsL::synapse0x1b195d0() {
   return (neuron0x1af11c0()*2.21637);
}

double NNfunction_sb_sLsL::synapse0x1b19610() {
   return (neuron0x1af1ca0()*1.49929);
}

double NNfunction_sb_sLsL::synapse0x1b19650() {
   return (neuron0x1af2670()*0.257239);
}

double NNfunction_sb_sLsL::synapse0x1b19690() {
   return (neuron0x1aef750()*0.372887);
}

double NNfunction_sb_sLsL::synapse0x1b196d0() {
   return (neuron0x1af4220()*1.542);
}

double NNfunction_sb_sLsL::synapse0x1b19710() {
   return (neuron0x1af4bf0()*-0.154128);
}

double NNfunction_sb_sLsL::synapse0x1b19750() {
   return (neuron0x1af55c0()*-0.0145749);
}

double NNfunction_sb_sLsL::synapse0x1b19790() {
   return (neuron0x1af5f90()*-1.05938);
}

double NNfunction_sb_sLsL::synapse0x1b19220() {
   return (neuron0x1af7da0()*1.81348);
}

double NNfunction_sb_sLsL::synapse0x1b19260() {
   return (neuron0x1af8080()*-1.02513);
}

double NNfunction_sb_sLsL::synapse0x1b198e0() {
   return (neuron0x1af8a50()*1.27219);
}

double NNfunction_sb_sLsL::synapse0x1b19920() {
   return (neuron0x1af9420()*-1.77734);
}

double NNfunction_sb_sLsL::synapse0x1b19960() {
   return (neuron0x1af9df0()*-0.409015);
}

double NNfunction_sb_sLsL::synapse0x1b199a0() {
   return (neuron0x1afa7c0()*-0.673967);
}

double NNfunction_sb_sLsL::synapse0x1b199e0() {
   return (neuron0x1af3310()*-0.9994);
}

double NNfunction_sb_sLsL::synapse0x1b19a20() {
   return (neuron0x1af3ce0()*-0.591351);
}

double NNfunction_sb_sLsL::synapse0x1b19a60() {
   return (neuron0x1afd550()*-0.756308);
}

double NNfunction_sb_sLsL::synapse0x1b19aa0() {
   return (neuron0x1afdf20()*0.520281);
}

double NNfunction_sb_sLsL::synapse0x1b19ae0() {
   return (neuron0x1afe8f0()*1.34821);
}

double NNfunction_sb_sLsL::synapse0x1b19b20() {
   return (neuron0x1aff2c0()*-1.54828);
}

double NNfunction_sb_sLsL::synapse0x1b19b60() {
   return (neuron0x1affc90()*1.0753);
}

double NNfunction_sb_sLsL::synapse0x1b19ba0() {
   return (neuron0x1b00660()*-0.851358);
}

double NNfunction_sb_sLsL::synapse0x1b19be0() {
   return (neuron0x1b01030()*4.85039);
}

double NNfunction_sb_sLsL::synapse0x1b19c20() {
   return (neuron0x1b01a00()*-0.139268);
}

double NNfunction_sb_sLsL::synapse0x1b197d0() {
   return (neuron0x1af7a90()*-0.072868);
}

double NNfunction_sb_sLsL::synapse0x1b19810() {
   return (neuron0x1b045e0()*0.0175588);
}

double NNfunction_sb_sLsL::synapse0x1b19850() {
   return (neuron0x1b04fb0()*0.399749);
}

double NNfunction_sb_sLsL::synapse0x1b19890() {
   return (neuron0x1b05980()*0.375166);
}

double NNfunction_sb_sLsL::synapse0x1b19e70() {
   return (neuron0x1b06350()*-1.12823);
}

double NNfunction_sb_sLsL::synapse0x1b19eb0() {
   return (neuron0x1b06d20()*0.113439);
}

double NNfunction_sb_sLsL::synapse0x1b19ef0() {
   return (neuron0x1b076f0()*-0.76892);
}

double NNfunction_sb_sLsL::synapse0x1b19f30() {
   return (neuron0x1b080c0()*-1.41811);
}

double NNfunction_sb_sLsL::synapse0x1b19f70() {
   return (neuron0x1b08a90()*-0.0964406);
}

double NNfunction_sb_sLsL::synapse0x1b19fb0() {
   return (neuron0x1b09670()*1.45962);
}

double NNfunction_sb_sLsL::synapse0x1b19ff0() {
   return (neuron0x1b0a040()*0.437651);
}

double NNfunction_sb_sLsL::synapse0x1b1a030() {
   return (neuron0x1afaec0()*0.718168);
}

double NNfunction_sb_sLsL::synapse0x1b1a070() {
   return (neuron0x1afb890()*1.97032);
}

double NNfunction_sb_sLsL::synapse0x1b1a0b0() {
   return (neuron0x1afc260()*-0.538655);
}

double NNfunction_sb_sLsL::synapse0x1b1a0f0() {
   return (neuron0x1b0e8a0()*1.21132);
}

double NNfunction_sb_sLsL::synapse0x1b1a130() {
   return (neuron0x1b0f150()*0.564669);
}

double NNfunction_sb_sLsL::synapse0x1b1a170() {
   return (neuron0x1b0fb20()*-1.06891);
}

double NNfunction_sb_sLsL::synapse0x1b1a1b0() {
   return (neuron0x1b104f0()*-0.34311);
}

double NNfunction_sb_sLsL::synapse0x1b1a530() {
   return (neuron0x1aec470()*1.0222);
}

double NNfunction_sb_sLsL::synapse0x1b1a570() {
   return (neuron0x1aecdc0()*0.497245);
}

double NNfunction_sb_sLsL::synapse0x1b1a5b0() {
   return (neuron0x1aed8a0()*0.520617);
}

double NNfunction_sb_sLsL::synapse0x1b1a5f0() {
   return (neuron0x1aed340()*0.421822);
}

double NNfunction_sb_sLsL::synapse0x1b1a630() {
   return (neuron0x1aee680()*0.804244);
}

double NNfunction_sb_sLsL::synapse0x1b1a670() {
   return (neuron0x1aef050()*0.472671);
}

double NNfunction_sb_sLsL::synapse0x1b1a6b0() {
   return (neuron0x1aefe20()*0.837943);
}

double NNfunction_sb_sLsL::synapse0x1b1a6f0() {
   return (neuron0x1af07f0()*0.664147);
}

double NNfunction_sb_sLsL::synapse0x1b1a730() {
   return (neuron0x1af11c0()*0.913274);
}

double NNfunction_sb_sLsL::synapse0x1b1a770() {
   return (neuron0x1af1ca0()*0.690123);
}

double NNfunction_sb_sLsL::synapse0x1b1a7b0() {
   return (neuron0x1af2670()*0.699647);
}

double NNfunction_sb_sLsL::synapse0x1b1a7f0() {
   return (neuron0x1aef750()*0.720781);
}

double NNfunction_sb_sLsL::synapse0x1b1a830() {
   return (neuron0x1af4220()*1.10186);
}

double NNfunction_sb_sLsL::synapse0x1b1a870() {
   return (neuron0x1af4bf0()*0.834099);
}

double NNfunction_sb_sLsL::synapse0x1b1a8b0() {
   return (neuron0x1af55c0()*1.14901);
}

double NNfunction_sb_sLsL::synapse0x1b1a8f0() {
   return (neuron0x1af5f90()*0.59324);
}

double NNfunction_sb_sLsL::synapse0x1b1a380() {
   return (neuron0x1af7da0()*1.21204);
}

double NNfunction_sb_sLsL::synapse0x1b1a3c0() {
   return (neuron0x1af8080()*0.614218);
}

double NNfunction_sb_sLsL::synapse0x1b1aa40() {
   return (neuron0x1af8a50()*0.543844);
}

double NNfunction_sb_sLsL::synapse0x1b1aa80() {
   return (neuron0x1af9420()*0.0486879);
}

double NNfunction_sb_sLsL::synapse0x1b1aac0() {
   return (neuron0x1af9df0()*0.532943);
}

double NNfunction_sb_sLsL::synapse0x1b1ab00() {
   return (neuron0x1afa7c0()*0.908683);
}

double NNfunction_sb_sLsL::synapse0x1b1ab40() {
   return (neuron0x1af3310()*0.197646);
}

double NNfunction_sb_sLsL::synapse0x1b1ab80() {
   return (neuron0x1af3ce0()*0.353906);
}

double NNfunction_sb_sLsL::synapse0x1b1abc0() {
   return (neuron0x1afd550()*0.561932);
}

double NNfunction_sb_sLsL::synapse0x1b1ac00() {
   return (neuron0x1afdf20()*0.813013);
}

double NNfunction_sb_sLsL::synapse0x1b1ac40() {
   return (neuron0x1afe8f0()*0.950034);
}

double NNfunction_sb_sLsL::synapse0x1b1ac80() {
   return (neuron0x1aff2c0()*0.28847);
}

double NNfunction_sb_sLsL::synapse0x1b1acc0() {
   return (neuron0x1affc90()*-0.0964551);
}

double NNfunction_sb_sLsL::synapse0x1b1ad00() {
   return (neuron0x1b00660()*0.502451);
}

double NNfunction_sb_sLsL::synapse0x1b1ad40() {
   return (neuron0x1b01030()*0.421486);
}

double NNfunction_sb_sLsL::synapse0x1b1ad80() {
   return (neuron0x1b01a00()*0.457516);
}

double NNfunction_sb_sLsL::synapse0x1b1a930() {
   return (neuron0x1af7a90()*0.822972);
}

double NNfunction_sb_sLsL::synapse0x1b1a970() {
   return (neuron0x1b045e0()*0.850047);
}

double NNfunction_sb_sLsL::synapse0x1b1a9b0() {
   return (neuron0x1b04fb0()*0.807226);
}

double NNfunction_sb_sLsL::synapse0x1b1a9f0() {
   return (neuron0x1b05980()*0.406128);
}

double NNfunction_sb_sLsL::synapse0x1b1afd0() {
   return (neuron0x1b06350()*0.095554);
}

double NNfunction_sb_sLsL::synapse0x1b1b010() {
   return (neuron0x1b06d20()*0.598375);
}

double NNfunction_sb_sLsL::synapse0x1b1b050() {
   return (neuron0x1b076f0()*0.565626);
}

double NNfunction_sb_sLsL::synapse0x1b1b090() {
   return (neuron0x1b080c0()*0.363698);
}

double NNfunction_sb_sLsL::synapse0x1b1b0d0() {
   return (neuron0x1b08a90()*0.354709);
}

double NNfunction_sb_sLsL::synapse0x1b1b110() {
   return (neuron0x1b09670()*0.48887);
}

double NNfunction_sb_sLsL::synapse0x1b1b150() {
   return (neuron0x1b0a040()*0.898279);
}

double NNfunction_sb_sLsL::synapse0x1b1b190() {
   return (neuron0x1afaec0()*0.716926);
}

double NNfunction_sb_sLsL::synapse0x1b1b1d0() {
   return (neuron0x1afb890()*0.0811091);
}

double NNfunction_sb_sLsL::synapse0x1b1b210() {
   return (neuron0x1afc260()*0.840817);
}

double NNfunction_sb_sLsL::synapse0x1b1b250() {
   return (neuron0x1b0e8a0()*0.492447);
}

double NNfunction_sb_sLsL::synapse0x1b1b290() {
   return (neuron0x1b0f150()*0.828984);
}

double NNfunction_sb_sLsL::synapse0x1b1b2d0() {
   return (neuron0x1b0fb20()*-0.055742);
}

double NNfunction_sb_sLsL::synapse0x1b1b310() {
   return (neuron0x1b104f0()*0.323928);
}

double NNfunction_sb_sLsL::synapse0x1b1b570() {
   return (neuron0x1b176f0()*2.23001);
}

double NNfunction_sb_sLsL::synapse0x1b1b5b0() {
   return (neuron0x1b17a90()*-7.40147);
}

double NNfunction_sb_sLsL::synapse0x1b1b5f0() {
   return (neuron0x1b17f30()*8.89923);
}

double NNfunction_sb_sLsL::synapse0x1b1b630() {
   return (neuron0x1b19090()*-4.31434);
}

double NNfunction_sb_sLsL::synapse0x1b1b670() {
   return (neuron0x1b1a1f0()*2.74271);
}

