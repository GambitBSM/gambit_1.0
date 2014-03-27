#include "NNfunction_NG_5.h"
#include <cmath>

double NNfunction_NG_5::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2584)/15.2351;
   input1 = (in1 - -3.90011)/1171.87;
   input2 = (in2 - 518.268)/526.883;
   input3 = (in3 - -35.1229)/762.355;
   input4 = (in4 - 1066.28)/951.963;
   input5 = (in5 - 900.121)/951.154;
   input6 = (in6 - 906.941)/950.174;
   input7 = (in7 - 929.806)/931.389;
   input8 = (in8 - 926.313)/974.854;
   input9 = (in9 - 913.366)/960.189;
   input10 = (in10 - 981.11)/954.823;
   input11 = (in11 - 569.551)/715.225;
   input12 = (in12 - 709.505)/857.235;
   input13 = (in13 - 498.776)/511.923;
   input14 = (in14 - 711.763)/805.591;
   input15 = (in15 - 714.244)/806.469;
   input16 = (in16 - 540.564)/565.906;
   input17 = (in17 - 757.383)/899.627;
   input18 = (in18 - 754.498)/899.701;
   input19 = (in19 - 800.237)/874.64;
   input20 = (in20 - -4.15423)/487.616;
   input21 = (in21 - -0.712844)/1146.01;
   input22 = (in22 - -0.430147)/1202.8;
   input23 = (in23 - -176.79)/614.038;
   switch(index) {
     case 0:
         return neuron0x2ee19c0();
     default:
         return 0.;
   }
}

double NNfunction_NG_5::Value(int index, double* input) {
   input0 = (input[0] - 23.2584)/15.2351;
   input1 = (input[1] - -3.90011)/1171.87;
   input2 = (input[2] - 518.268)/526.883;
   input3 = (input[3] - -35.1229)/762.355;
   input4 = (input[4] - 1066.28)/951.963;
   input5 = (input[5] - 900.121)/951.154;
   input6 = (input[6] - 906.941)/950.174;
   input7 = (input[7] - 929.806)/931.389;
   input8 = (input[8] - 926.313)/974.854;
   input9 = (input[9] - 913.366)/960.189;
   input10 = (input[10] - 981.11)/954.823;
   input11 = (input[11] - 569.551)/715.225;
   input12 = (input[12] - 709.505)/857.235;
   input13 = (input[13] - 498.776)/511.923;
   input14 = (input[14] - 711.763)/805.591;
   input15 = (input[15] - 714.244)/806.469;
   input16 = (input[16] - 540.564)/565.906;
   input17 = (input[17] - 757.383)/899.627;
   input18 = (input[18] - 754.498)/899.701;
   input19 = (input[19] - 800.237)/874.64;
   input20 = (input[20] - -4.15423)/487.616;
   input21 = (input[21] - -0.712844)/1146.01;
   input22 = (input[22] - -0.430147)/1202.8;
   input23 = (input[23] - -176.79)/614.038;
   switch(index) {
     case 0:
         return neuron0x2ee19c0();
     default:
         return 0.;
   }
}

double NNfunction_NG_5::neuron0x2eadab0() {
   return input0;
}

double NNfunction_NG_5::neuron0x2eaddf0() {
   return input1;
}

double NNfunction_NG_5::neuron0x2eae130() {
   return input2;
}

double NNfunction_NG_5::neuron0x2eae470() {
   return input3;
}

double NNfunction_NG_5::neuron0x2eae7b0() {
   return input4;
}

double NNfunction_NG_5::neuron0x2eaeaf0() {
   return input5;
}

double NNfunction_NG_5::neuron0x2eaee30() {
   return input6;
}

double NNfunction_NG_5::neuron0x2eaf170() {
   return input7;
}

double NNfunction_NG_5::neuron0x2eaf4b0() {
   return input8;
}

double NNfunction_NG_5::neuron0x2eaf7f0() {
   return input9;
}

double NNfunction_NG_5::neuron0x2eafb30() {
   return input10;
}

double NNfunction_NG_5::neuron0x2eafe70() {
   return input11;
}

double NNfunction_NG_5::neuron0x2eb01b0() {
   return input12;
}

double NNfunction_NG_5::neuron0x2eb04f0() {
   return input13;
}

double NNfunction_NG_5::neuron0x2eb0830() {
   return input14;
}

double NNfunction_NG_5::neuron0x2eb0b70() {
   return input15;
}

double NNfunction_NG_5::neuron0x2eb0eb0() {
   return input16;
}

double NNfunction_NG_5::neuron0x2eb1410() {
   return input17;
}

double NNfunction_NG_5::neuron0x2eb1630() {
   return input18;
}

double NNfunction_NG_5::neuron0x2eb1970() {
   return input19;
}

double NNfunction_NG_5::neuron0x2eb1cb0() {
   return input20;
}

double NNfunction_NG_5::neuron0x2eb1ff0() {
   return input21;
}

double NNfunction_NG_5::neuron0x2eb2330() {
   return input22;
}

double NNfunction_NG_5::neuron0x2eb2670() {
   return input23;
}

double NNfunction_NG_5::input0x2eb2ae0() {
   double input = -2.24552;
   input += synapse0x2ead970();
   input += synapse0x2ead9b0();
   input += synapse0x2eb2d90();
   input += synapse0x2eb2dd0();
   input += synapse0x2eb2e10();
   input += synapse0x2eb2e50();
   input += synapse0x2eb2e90();
   input += synapse0x2eb2ed0();
   input += synapse0x2eb2f10();
   input += synapse0x2eb2f50();
   input += synapse0x2eb2f90();
   input += synapse0x2eb2fd0();
   input += synapse0x2eb3010();
   input += synapse0x2eb3050();
   input += synapse0x2eb3090();
   input += synapse0x2eb30d0();
   input += synapse0x2ead8e0();
   input += synapse0x2ead920();
   input += synapse0x2c5f450();
   input += synapse0x2c5f490();
   input += synapse0x2eb3330();
   input += synapse0x2eb3370();
   input += synapse0x2eb33b0();
   input += synapse0x2eb33f0();
   return input;
}

double NNfunction_NG_5::neuron0x2eb2ae0() {
   double input = input0x2eb2ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2eb3430() {
   double input = -0.307519;
   input += synapse0x2eb3770();
   input += synapse0x2eb37b0();
   input += synapse0x2eb37f0();
   input += synapse0x2eb3830();
   input += synapse0x2eb3870();
   input += synapse0x2eb38b0();
   input += synapse0x2eb38f0();
   input += synapse0x2eb3930();
   input += synapse0x2eb3970();
   input += synapse0x2eb3220();
   input += synapse0x2eb3260();
   input += synapse0x2eb32a0();
   input += synapse0x2eb32e0();
   input += synapse0x2eb3bc0();
   input += synapse0x2eb3c00();
   input += synapse0x2eb3c40();
   input += synapse0x2eb35c0();
   input += synapse0x2eb3600();
   input += synapse0x2eb3d90();
   input += synapse0x2eb3dd0();
   input += synapse0x2eb3e10();
   input += synapse0x2eb3e50();
   input += synapse0x2eb3e90();
   input += synapse0x2eb3ed0();
   return input;
}

double NNfunction_NG_5::neuron0x2eb3430() {
   double input = input0x2eb3430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2eb3f10() {
   double input = -0.291413;
   input += synapse0x2eb4250();
   input += synapse0x2eb4290();
   input += synapse0x2eb42d0();
   input += synapse0x2eb4310();
   input += synapse0x2eb4350();
   input += synapse0x2eb4390();
   input += synapse0x2eb43d0();
   input += synapse0x2eb4410();
   input += synapse0x2eb4450();
   input += synapse0x2eb4490();
   input += synapse0x2eb44d0();
   input += synapse0x2eb4510();
   input += synapse0x2eb4550();
   input += synapse0x2eb4590();
   input += synapse0x2eb45d0();
   input += synapse0x2eb4610();
   input += synapse0x2eb40a0();
   input += synapse0x2eb40e0();
   input += synapse0x2c5f820();
   input += synapse0x2c6d060();
   input += synapse0x2c6d0a0();
   input += synapse0x2e9cb40();
   input += synapse0x2e9cb80();
   input += synapse0x2e9cbc0();
   return input;
}

double NNfunction_NG_5::neuron0x2eb3f10() {
   double input = input0x2eb3f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2eb39b0() {
   double input = -0.167879;
   input += synapse0x2c6d900();
   input += synapse0x2eb3b40();
   input += synapse0x2eb3b80();
   input += synapse0x2eb4760();
   input += synapse0x2eb47a0();
   input += synapse0x2eb47e0();
   input += synapse0x2eb4820();
   input += synapse0x2eb4860();
   input += synapse0x2eb48a0();
   input += synapse0x2eb48e0();
   input += synapse0x2eb4920();
   input += synapse0x2eb4960();
   input += synapse0x2eb49a0();
   input += synapse0x2eb49e0();
   input += synapse0x2eb4a20();
   input += synapse0x2eb4a60();
   input += synapse0x2ead9f0();
   input += synapse0x2eada30();
   input += synapse0x2eada70();
   input += synapse0x2eb4bb0();
   input += synapse0x2eb4bf0();
   input += synapse0x2eb4c30();
   input += synapse0x2eb4c70();
   input += synapse0x2eb4cb0();
   return input;
}

double NNfunction_NG_5::neuron0x2eb39b0() {
   double input = input0x2eb39b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2eb4cf0() {
   double input = -1.90038;
   input += synapse0x2eb5030();
   input += synapse0x2eb5070();
   input += synapse0x2eb50b0();
   input += synapse0x2eb50f0();
   input += synapse0x2eb5130();
   input += synapse0x2eb5170();
   input += synapse0x2eb51b0();
   input += synapse0x2eb51f0();
   input += synapse0x2eb5230();
   input += synapse0x2eb5270();
   input += synapse0x2eb52b0();
   input += synapse0x2eb52f0();
   input += synapse0x2eb5330();
   input += synapse0x2eb5370();
   input += synapse0x2eb53b0();
   input += synapse0x2eb53f0();
   input += synapse0x2eb4e80();
   input += synapse0x2eb4ec0();
   input += synapse0x2eb5540();
   input += synapse0x2eb5580();
   input += synapse0x2eb55c0();
   input += synapse0x2eb5600();
   input += synapse0x2eb5640();
   input += synapse0x2eb5680();
   return input;
}

double NNfunction_NG_5::neuron0x2eb4cf0() {
   double input = input0x2eb4cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2eb56c0() {
   double input = -1.62699;
   input += synapse0x2eb5a00();
   input += synapse0x2eb5a40();
   input += synapse0x2eb5a80();
   input += synapse0x2eb5ac0();
   input += synapse0x2eb5b00();
   input += synapse0x2eb5b40();
   input += synapse0x2eb5b80();
   input += synapse0x2eb5bc0();
   input += synapse0x2eb5c00();
   input += synapse0x2c6d3d0();
   input += synapse0x2c6d410();
   input += synapse0x2c6d450();
   input += synapse0x2c6d490();
   input += synapse0x2c6d4d0();
   input += synapse0x2c6d510();
   input += synapse0x2c6d550();
   input += synapse0x2eb5850();
   input += synapse0x2eb5890();
   input += synapse0x2c6d6a0();
   input += synapse0x2c6d6e0();
   input += synapse0x2c6d720();
   input += synapse0x2c6d760();
   input += synapse0x2c6d7a0();
   input += synapse0x2eb6450();
   return input;
}

double NNfunction_NG_5::neuron0x2eb56c0() {
   double input = input0x2eb56c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2eb6490() {
   double input = 0.0989523;
   input += synapse0x2eb67d0();
   input += synapse0x2eb6810();
   input += synapse0x2eb6850();
   input += synapse0x2eb6890();
   input += synapse0x2eb68d0();
   input += synapse0x2eb6910();
   input += synapse0x2eb6950();
   input += synapse0x2eb6990();
   input += synapse0x2eb69d0();
   input += synapse0x2eb6a10();
   input += synapse0x2eb6a50();
   input += synapse0x2eb6a90();
   input += synapse0x2eb6ad0();
   input += synapse0x2eb6b10();
   input += synapse0x2eb6b50();
   input += synapse0x2eb6b90();
   input += synapse0x2eb6620();
   input += synapse0x2eb6660();
   input += synapse0x2eb6ce0();
   input += synapse0x2eb6d20();
   input += synapse0x2eb6d60();
   input += synapse0x2eb6da0();
   input += synapse0x2eb6de0();
   input += synapse0x2eb6e20();
   return input;
}

double NNfunction_NG_5::neuron0x2eb6490() {
   double input = input0x2eb6490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2eb6e60() {
   double input = -0.96592;
   input += synapse0x2eb71a0();
   input += synapse0x2eb71e0();
   input += synapse0x2eb7220();
   input += synapse0x2eb7260();
   input += synapse0x2eb72a0();
   input += synapse0x2eb72e0();
   input += synapse0x2eb7320();
   input += synapse0x2eb7360();
   input += synapse0x2eb73a0();
   input += synapse0x2eb73e0();
   input += synapse0x2eb7420();
   input += synapse0x2eb7460();
   input += synapse0x2eb74a0();
   input += synapse0x2eb74e0();
   input += synapse0x2eb7520();
   input += synapse0x2eb7560();
   input += synapse0x2eb6ff0();
   input += synapse0x2eb7030();
   input += synapse0x2eb76b0();
   input += synapse0x2eb76f0();
   input += synapse0x2eb7730();
   input += synapse0x2eb7770();
   input += synapse0x2eb77b0();
   input += synapse0x2eb77f0();
   return input;
}

double NNfunction_NG_5::neuron0x2eb6e60() {
   double input = input0x2eb6e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2eb7830() {
   double input = -0.549027;
   input += synapse0x2eb1300();
   input += synapse0x2eb1340();
   input += synapse0x2eb1380();
   input += synapse0x2eb13c0();
   input += synapse0x2eb7d80();
   input += synapse0x2eb7dc0();
   input += synapse0x2eb7e00();
   input += synapse0x2eb7e40();
   input += synapse0x2eb7e80();
   input += synapse0x2eb7ec0();
   input += synapse0x2eb7f00();
   input += synapse0x2eb7f40();
   input += synapse0x2eb7f80();
   input += synapse0x2eb7fc0();
   input += synapse0x2eb8000();
   input += synapse0x2eb8040();
   input += synapse0x2eb79c0();
   input += synapse0x2eb7a00();
   input += synapse0x2eb8190();
   input += synapse0x2eb81d0();
   input += synapse0x2eb8210();
   input += synapse0x2eb8250();
   input += synapse0x2eb8290();
   input += synapse0x2eb82d0();
   return input;
}

double NNfunction_NG_5::neuron0x2eb7830() {
   double input = input0x2eb7830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2eb8310() {
   double input = -0.141992;
   input += synapse0x2eb8650();
   input += synapse0x2eb8690();
   input += synapse0x2eb86d0();
   input += synapse0x2eb8710();
   input += synapse0x2eb8750();
   input += synapse0x2eb8790();
   input += synapse0x2eb87d0();
   input += synapse0x2eb8810();
   input += synapse0x2eb8850();
   input += synapse0x2eb8890();
   input += synapse0x2eb88d0();
   input += synapse0x2eb8910();
   input += synapse0x2eb8950();
   input += synapse0x2eb8990();
   input += synapse0x2eb89d0();
   input += synapse0x2eb8a10();
   input += synapse0x2eb84a0();
   input += synapse0x2eb84e0();
   input += synapse0x2eb8b60();
   input += synapse0x2eb8ba0();
   input += synapse0x2eb8be0();
   input += synapse0x2eb8c20();
   input += synapse0x2eb8c60();
   input += synapse0x2eb8ca0();
   return input;
}

double NNfunction_NG_5::neuron0x2eb8310() {
   double input = input0x2eb8310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2eb8ce0() {
   double input = -0.0222704;
   input += synapse0x2eb9020();
   input += synapse0x2eb9060();
   input += synapse0x2eb90a0();
   input += synapse0x2eb90e0();
   input += synapse0x2eb9120();
   input += synapse0x2eb9160();
   input += synapse0x2eb91a0();
   input += synapse0x2eb91e0();
   input += synapse0x2eb9220();
   input += synapse0x2eb9260();
   input += synapse0x2eb92a0();
   input += synapse0x2eb92e0();
   input += synapse0x2eb9320();
   input += synapse0x2eb9360();
   input += synapse0x2eb93a0();
   input += synapse0x2eb93e0();
   input += synapse0x2eb8e70();
   input += synapse0x2eb8eb0();
   input += synapse0x2eb5c40();
   input += synapse0x2eb5c80();
   input += synapse0x2eb5cc0();
   input += synapse0x2eb5d00();
   input += synapse0x2eb5d40();
   input += synapse0x2eb5d80();
   return input;
}

double NNfunction_NG_5::neuron0x2eb8ce0() {
   double input = input0x2eb8ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2eb5dc0() {
   double input = 1.4576;
   input += synapse0x2eb6100();
   input += synapse0x2eb6140();
   input += synapse0x2eb6180();
   input += synapse0x2eb61c0();
   input += synapse0x2eb6200();
   input += synapse0x2eb6240();
   input += synapse0x2eb6280();
   input += synapse0x2eb62c0();
   input += synapse0x2eb6300();
   input += synapse0x2eb6340();
   input += synapse0x2eb6380();
   input += synapse0x2eb63c0();
   input += synapse0x2eb6400();
   input += synapse0x2eba540();
   input += synapse0x2eba580();
   input += synapse0x2eba5c0();
   input += synapse0x2eb5f50();
   input += synapse0x2eb5f90();
   input += synapse0x2eba710();
   input += synapse0x2eba750();
   input += synapse0x2eba790();
   input += synapse0x2eba7d0();
   input += synapse0x2eba810();
   input += synapse0x2eba850();
   return input;
}

double NNfunction_NG_5::neuron0x2eb5dc0() {
   double input = input0x2eb5dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2eba890() {
   double input = -2.10501;
   input += synapse0x2ebabd0();
   input += synapse0x2ebac10();
   input += synapse0x2ebac50();
   input += synapse0x2ebac90();
   input += synapse0x2ebacd0();
   input += synapse0x2ebad10();
   input += synapse0x2ebad50();
   input += synapse0x2ebad90();
   input += synapse0x2ebadd0();
   input += synapse0x2ebae10();
   input += synapse0x2ebae50();
   input += synapse0x2ebae90();
   input += synapse0x2ebaed0();
   input += synapse0x2ebaf10();
   input += synapse0x2ebaf50();
   input += synapse0x2ebaf90();
   input += synapse0x2ebaa20();
   input += synapse0x2ebaa60();
   input += synapse0x2ebb0e0();
   input += synapse0x2ebb120();
   input += synapse0x2ebb160();
   input += synapse0x2ebb1a0();
   input += synapse0x2ebb1e0();
   input += synapse0x2ebb220();
   return input;
}

double NNfunction_NG_5::neuron0x2eba890() {
   double input = input0x2eba890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ebb260() {
   double input = -0.370165;
   input += synapse0x2ebb5a0();
   input += synapse0x2ebb5e0();
   input += synapse0x2ebb620();
   input += synapse0x2ebb660();
   input += synapse0x2ebb6a0();
   input += synapse0x2ebb6e0();
   input += synapse0x2ebb720();
   input += synapse0x2ebb760();
   input += synapse0x2ebb7a0();
   input += synapse0x2ebb7e0();
   input += synapse0x2ebb820();
   input += synapse0x2ebb860();
   input += synapse0x2ebb8a0();
   input += synapse0x2ebb8e0();
   input += synapse0x2ebb920();
   input += synapse0x2ebb960();
   input += synapse0x2ebb3f0();
   input += synapse0x2ebb430();
   input += synapse0x2ebbab0();
   input += synapse0x2ebbaf0();
   input += synapse0x2ebbb30();
   input += synapse0x2ebbb70();
   input += synapse0x2ebbbb0();
   input += synapse0x2ebbbf0();
   return input;
}

double NNfunction_NG_5::neuron0x2ebb260() {
   double input = input0x2ebb260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ebbc30() {
   double input = -2.80106;
   input += synapse0x2ebbf70();
   input += synapse0x2ebbfb0();
   input += synapse0x2ebbff0();
   input += synapse0x2ebc030();
   input += synapse0x2ebc070();
   input += synapse0x2ebc0b0();
   input += synapse0x2ebc0f0();
   input += synapse0x2ebc130();
   input += synapse0x2ebc170();
   input += synapse0x2ebc1b0();
   input += synapse0x2ebc1f0();
   input += synapse0x2ebc230();
   input += synapse0x2ebc270();
   input += synapse0x2ebc2b0();
   input += synapse0x2ebc2f0();
   input += synapse0x2ebc330();
   input += synapse0x2ebbdc0();
   input += synapse0x2ebbe00();
   input += synapse0x2ebc480();
   input += synapse0x2ebc4c0();
   input += synapse0x2ebc500();
   input += synapse0x2ebc540();
   input += synapse0x2ebc580();
   input += synapse0x2ebc5c0();
   return input;
}

double NNfunction_NG_5::neuron0x2ebbc30() {
   double input = input0x2ebbc30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ebc600() {
   double input = 0.310787;
   input += synapse0x2ebc940();
   input += synapse0x2eadcd0();
   input += synapse0x2eadd10();
   input += synapse0x2eae010();
   input += synapse0x2eae050();
   input += synapse0x2eae350();
   input += synapse0x2eae390();
   input += synapse0x2eae690();
   input += synapse0x2eae6d0();
   input += synapse0x2eae9d0();
   input += synapse0x2eaea10();
   input += synapse0x2eaed10();
   input += synapse0x2eaed50();
   input += synapse0x2eaf050();
   input += synapse0x2eaf090();
   input += synapse0x2eaf390();
   input += synapse0x2eaf3d0();
   input += synapse0x2eaf6d0();
   input += synapse0x2eaf710();
   input += synapse0x2eafa10();
   input += synapse0x2eafa50();
   input += synapse0x2eafd50();
   input += synapse0x2eafd90();
   input += synapse0x2eb0090();
   return input;
}

double NNfunction_NG_5::neuron0x2ebc600() {
   double input = input0x2ebc600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ebe410() {
   double input = 2.0904;
   input += synapse0x2eb00d0();
   input += synapse0x2eb0d90();
   input += synapse0x2eb0dd0();
   input += synapse0x2ebc790();
   input += synapse0x2ebc7d0();
   input += synapse0x2eb10d0();
   input += synapse0x2eb1110();
   input += synapse0x2c5f330();
   input += synapse0x2c5f370();
   input += synapse0x2eb1850();
   input += synapse0x2eb1890();
   input += synapse0x2eb1b90();
   input += synapse0x2eb1bd0();
   input += synapse0x2eb1ed0();
   input += synapse0x2eb1f10();
   input += synapse0x2eb2210();
   input += synapse0x2eb2250();
   input += synapse0x2eb2550();
   input += synapse0x2eb2590();
   input += synapse0x2eb2890();
   input += synapse0x2eb28d0();
   input += synapse0x2eb03d0();
   input += synapse0x2eb0410();
   input += synapse0x2ebe6b0();
   return input;
}

double NNfunction_NG_5::neuron0x2ebe410() {
   double input = input0x2ebe410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ebe6f0() {
   double input = -3.58737;
   input += synapse0x2ebea30();
   input += synapse0x2ebea70();
   input += synapse0x2ebeab0();
   input += synapse0x2ebeaf0();
   input += synapse0x2ebeb30();
   input += synapse0x2ebeb70();
   input += synapse0x2ebebb0();
   input += synapse0x2ebebf0();
   input += synapse0x2ebec30();
   input += synapse0x2ebec70();
   input += synapse0x2ebecb0();
   input += synapse0x2ebecf0();
   input += synapse0x2ebed30();
   input += synapse0x2ebed70();
   input += synapse0x2ebedb0();
   input += synapse0x2ebedf0();
   input += synapse0x2ebe880();
   input += synapse0x2ebe8c0();
   input += synapse0x2ebef40();
   input += synapse0x2ebef80();
   input += synapse0x2ebefc0();
   input += synapse0x2ebf000();
   input += synapse0x2ebf040();
   input += synapse0x2ebf080();
   return input;
}

double NNfunction_NG_5::neuron0x2ebe6f0() {
   double input = input0x2ebe6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ebf0c0() {
   double input = -0.774978;
   input += synapse0x2ebf400();
   input += synapse0x2ebf440();
   input += synapse0x2ebf480();
   input += synapse0x2ebf4c0();
   input += synapse0x2ebf500();
   input += synapse0x2ebf540();
   input += synapse0x2ebf580();
   input += synapse0x2ebf5c0();
   input += synapse0x2ebf600();
   input += synapse0x2ebf640();
   input += synapse0x2ebf680();
   input += synapse0x2ebf6c0();
   input += synapse0x2ebf700();
   input += synapse0x2ebf740();
   input += synapse0x2ebf780();
   input += synapse0x2ebf7c0();
   input += synapse0x2ebf250();
   input += synapse0x2ebf290();
   input += synapse0x2ebf910();
   input += synapse0x2ebf950();
   input += synapse0x2ebf990();
   input += synapse0x2ebf9d0();
   input += synapse0x2ebfa10();
   input += synapse0x2ebfa50();
   return input;
}

double NNfunction_NG_5::neuron0x2ebf0c0() {
   double input = input0x2ebf0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ebfa90() {
   double input = 2.05893;
   input += synapse0x2ebfdd0();
   input += synapse0x2ebfe10();
   input += synapse0x2ebfe50();
   input += synapse0x2ebfe90();
   input += synapse0x2ebfed0();
   input += synapse0x2ebff10();
   input += synapse0x2ebff50();
   input += synapse0x2ebff90();
   input += synapse0x2ebffd0();
   input += synapse0x2ec0010();
   input += synapse0x2ec0050();
   input += synapse0x2ec0090();
   input += synapse0x2ec00d0();
   input += synapse0x2ec0110();
   input += synapse0x2ec0150();
   input += synapse0x2ec0190();
   input += synapse0x2ebfc20();
   input += synapse0x2ebfc60();
   input += synapse0x2ec02e0();
   input += synapse0x2ec0320();
   input += synapse0x2ec0360();
   input += synapse0x2ec03a0();
   input += synapse0x2ec03e0();
   input += synapse0x2ec0420();
   return input;
}

double NNfunction_NG_5::neuron0x2ebfa90() {
   double input = input0x2ebfa90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ec0460() {
   double input = -1.29304;
   input += synapse0x2ec07a0();
   input += synapse0x2ec07e0();
   input += synapse0x2ec0820();
   input += synapse0x2ec0860();
   input += synapse0x2ec08a0();
   input += synapse0x2ec08e0();
   input += synapse0x2ec0920();
   input += synapse0x2ec0960();
   input += synapse0x2ec09a0();
   input += synapse0x2ec09e0();
   input += synapse0x2ec0a20();
   input += synapse0x2ec0a60();
   input += synapse0x2ec0aa0();
   input += synapse0x2ec0ae0();
   input += synapse0x2ec0b20();
   input += synapse0x2ec0b60();
   input += synapse0x2ec05f0();
   input += synapse0x2ec0630();
   input += synapse0x2ec0cb0();
   input += synapse0x2ec0cf0();
   input += synapse0x2ec0d30();
   input += synapse0x2ec0d70();
   input += synapse0x2ec0db0();
   input += synapse0x2ec0df0();
   return input;
}

double NNfunction_NG_5::neuron0x2ec0460() {
   double input = input0x2ec0460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ec0e30() {
   double input = 0.151702;
   input += synapse0x2ec1170();
   input += synapse0x2ec11b0();
   input += synapse0x2ec11f0();
   input += synapse0x2ec1230();
   input += synapse0x2ec1270();
   input += synapse0x2ec12b0();
   input += synapse0x2ec12f0();
   input += synapse0x2ec1330();
   input += synapse0x2ec1370();
   input += synapse0x2eb9530();
   input += synapse0x2eb9570();
   input += synapse0x2eb95b0();
   input += synapse0x2eb95f0();
   input += synapse0x2eb9630();
   input += synapse0x2eb9670();
   input += synapse0x2eb96b0();
   input += synapse0x2ec0fc0();
   input += synapse0x2ec1000();
   input += synapse0x2eb9800();
   input += synapse0x2eb9840();
   input += synapse0x2eb9880();
   input += synapse0x2eb98c0();
   input += synapse0x2eb9900();
   input += synapse0x2eb9940();
   return input;
}

double NNfunction_NG_5::neuron0x2ec0e30() {
   double input = input0x2ec0e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2eb9980() {
   double input = -5.94215;
   input += synapse0x2eb9cc0();
   input += synapse0x2eb9d00();
   input += synapse0x2eb9d40();
   input += synapse0x2eb9d80();
   input += synapse0x2eb9dc0();
   input += synapse0x2eb9e00();
   input += synapse0x2eb9e40();
   input += synapse0x2eb9e80();
   input += synapse0x2eb9ec0();
   input += synapse0x2eb9f00();
   input += synapse0x2eb9f40();
   input += synapse0x2eb9f80();
   input += synapse0x2eb9fc0();
   input += synapse0x2eba000();
   input += synapse0x2eba040();
   input += synapse0x2eba080();
   input += synapse0x2eb9b10();
   input += synapse0x2eb9b50();
   input += synapse0x2eba1d0();
   input += synapse0x2eba210();
   input += synapse0x2eba250();
   input += synapse0x2eba290();
   input += synapse0x2eba2d0();
   input += synapse0x2eba310();
   return input;
}

double NNfunction_NG_5::neuron0x2eb9980() {
   double input = input0x2eb9980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2eba350() {
   double input = -0.373069;
   input += synapse0x2eba4e0();
   input += synapse0x2ec3570();
   input += synapse0x2ec35b0();
   input += synapse0x2ec35f0();
   input += synapse0x2ec3630();
   input += synapse0x2ec3670();
   input += synapse0x2ec36b0();
   input += synapse0x2ec36f0();
   input += synapse0x2ec3730();
   input += synapse0x2ec3770();
   input += synapse0x2ec37b0();
   input += synapse0x2ec37f0();
   input += synapse0x2ec3830();
   input += synapse0x2ec3870();
   input += synapse0x2ec38b0();
   input += synapse0x2ec38f0();
   input += synapse0x2ec33c0();
   input += synapse0x2ec3400();
   input += synapse0x2ec3a40();
   input += synapse0x2ec3a80();
   input += synapse0x2ec3ac0();
   input += synapse0x2ec3b00();
   input += synapse0x2ec3b40();
   input += synapse0x2ec3b80();
   return input;
}

double NNfunction_NG_5::neuron0x2eba350() {
   double input = input0x2eba350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ec3bc0() {
   double input = 2.75513;
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
   input += synapse0x2ec4180();
   input += synapse0x2ec41c0();
   input += synapse0x2ec4200();
   input += synapse0x2ec4240();
   input += synapse0x2ec4280();
   input += synapse0x2ec42c0();
   input += synapse0x2ec3d50();
   input += synapse0x2ec3d90();
   input += synapse0x2ec4410();
   input += synapse0x2ec4450();
   input += synapse0x2ec4490();
   input += synapse0x2ec44d0();
   input += synapse0x2ec4510();
   input += synapse0x2ec4550();
   return input;
}

double NNfunction_NG_5::neuron0x2ec3bc0() {
   double input = input0x2ec3bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ec4590() {
   double input = -1.386;
   input += synapse0x2ec48d0();
   input += synapse0x2ec4910();
   input += synapse0x2ec4950();
   input += synapse0x2ec4990();
   input += synapse0x2ec49d0();
   input += synapse0x2ec4a10();
   input += synapse0x2ec4a50();
   input += synapse0x2ec4a90();
   input += synapse0x2ec4ad0();
   input += synapse0x2ec4b10();
   input += synapse0x2ec4b50();
   input += synapse0x2ec4b90();
   input += synapse0x2ec4bd0();
   input += synapse0x2ec4c10();
   input += synapse0x2ec4c50();
   input += synapse0x2ec4c90();
   input += synapse0x2ec4720();
   input += synapse0x2ec4760();
   input += synapse0x2ec4de0();
   input += synapse0x2ec4e20();
   input += synapse0x2ec4e60();
   input += synapse0x2ec4ea0();
   input += synapse0x2ec4ee0();
   input += synapse0x2ec4f20();
   return input;
}

double NNfunction_NG_5::neuron0x2ec4590() {
   double input = input0x2ec4590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ec4f60() {
   double input = 0.0128379;
   input += synapse0x2ec52a0();
   input += synapse0x2ec52e0();
   input += synapse0x2ec5320();
   input += synapse0x2ec5360();
   input += synapse0x2ec53a0();
   input += synapse0x2ec53e0();
   input += synapse0x2ec5420();
   input += synapse0x2ec5460();
   input += synapse0x2ec54a0();
   input += synapse0x2ec54e0();
   input += synapse0x2ec5520();
   input += synapse0x2ec5560();
   input += synapse0x2ec55a0();
   input += synapse0x2ec55e0();
   input += synapse0x2ec5620();
   input += synapse0x2ec5660();
   input += synapse0x2ec50f0();
   input += synapse0x2ec5130();
   input += synapse0x2ec57b0();
   input += synapse0x2ec57f0();
   input += synapse0x2ec5830();
   input += synapse0x2ec5870();
   input += synapse0x2ec58b0();
   input += synapse0x2ec58f0();
   return input;
}

double NNfunction_NG_5::neuron0x2ec4f60() {
   double input = input0x2ec4f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ec5930() {
   double input = 2.51423;
   input += synapse0x2ec5c70();
   input += synapse0x2ec5cb0();
   input += synapse0x2ec5cf0();
   input += synapse0x2ec5d30();
   input += synapse0x2ec5d70();
   input += synapse0x2ec5db0();
   input += synapse0x2ec5df0();
   input += synapse0x2ec5e30();
   input += synapse0x2ec5e70();
   input += synapse0x2ec5eb0();
   input += synapse0x2ec5ef0();
   input += synapse0x2ec5f30();
   input += synapse0x2ec5f70();
   input += synapse0x2ec5fb0();
   input += synapse0x2ec5ff0();
   input += synapse0x2ec6030();
   input += synapse0x2ec5ac0();
   input += synapse0x2ec5b00();
   input += synapse0x2ec6180();
   input += synapse0x2ec61c0();
   input += synapse0x2ec6200();
   input += synapse0x2ec6240();
   input += synapse0x2ec6280();
   input += synapse0x2ec62c0();
   return input;
}

double NNfunction_NG_5::neuron0x2ec5930() {
   double input = input0x2ec5930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ec6300() {
   double input = -0.899834;
   input += synapse0x2ec6640();
   input += synapse0x2ec6680();
   input += synapse0x2ec66c0();
   input += synapse0x2ec6700();
   input += synapse0x2ec6740();
   input += synapse0x2ec6780();
   input += synapse0x2ec67c0();
   input += synapse0x2ec6800();
   input += synapse0x2ec6840();
   input += synapse0x2ec6880();
   input += synapse0x2ec68c0();
   input += synapse0x2ec6900();
   input += synapse0x2ec6940();
   input += synapse0x2ec6980();
   input += synapse0x2ec69c0();
   input += synapse0x2ec6a00();
   input += synapse0x2ec6490();
   input += synapse0x2ec64d0();
   input += synapse0x2ec6b50();
   input += synapse0x2ec6b90();
   input += synapse0x2ec6bd0();
   input += synapse0x2ec6c10();
   input += synapse0x2ec6c50();
   input += synapse0x2ec6c90();
   return input;
}

double NNfunction_NG_5::neuron0x2ec6300() {
   double input = input0x2ec6300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ec6cd0() {
   double input = 0.539466;
   input += synapse0x2ec7010();
   input += synapse0x2ec7050();
   input += synapse0x2ec7090();
   input += synapse0x2ec70d0();
   input += synapse0x2ec7110();
   input += synapse0x2ec7150();
   input += synapse0x2ec7190();
   input += synapse0x2ec71d0();
   input += synapse0x2ec7210();
   input += synapse0x2ec7250();
   input += synapse0x2ec7290();
   input += synapse0x2ec72d0();
   input += synapse0x2ec7310();
   input += synapse0x2ec7350();
   input += synapse0x2ec7390();
   input += synapse0x2ec73d0();
   input += synapse0x2ec6e60();
   input += synapse0x2ec6ea0();
   input += synapse0x2ec7520();
   input += synapse0x2ec7560();
   input += synapse0x2ec75a0();
   input += synapse0x2ec75e0();
   input += synapse0x2ec7620();
   input += synapse0x2ec7660();
   return input;
}

double NNfunction_NG_5::neuron0x2ec6cd0() {
   double input = input0x2ec6cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ec76a0() {
   double input = -0.617919;
   input += synapse0x2ec79e0();
   input += synapse0x2ec7a20();
   input += synapse0x2ec7a60();
   input += synapse0x2ec7aa0();
   input += synapse0x2ec7ae0();
   input += synapse0x2ec7b20();
   input += synapse0x2ec7b60();
   input += synapse0x2ec7ba0();
   input += synapse0x2ec7be0();
   input += synapse0x2ec7c20();
   input += synapse0x2ec7c60();
   input += synapse0x2ec7ca0();
   input += synapse0x2ec7ce0();
   input += synapse0x2ec7d20();
   input += synapse0x2ec7d60();
   input += synapse0x2ec7da0();
   input += synapse0x2ec7830();
   input += synapse0x2ec7870();
   input += synapse0x2ec7ef0();
   input += synapse0x2ec7f30();
   input += synapse0x2ec7f70();
   input += synapse0x2ec7fb0();
   input += synapse0x2ec7ff0();
   input += synapse0x2ec8030();
   return input;
}

double NNfunction_NG_5::neuron0x2ec76a0() {
   double input = input0x2ec76a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ec8070() {
   double input = -1.14236;
   input += synapse0x2ec83b0();
   input += synapse0x2ebc980();
   input += synapse0x2ebc9c0();
   input += synapse0x2ebca00();
   input += synapse0x2ebcc50();
   input += synapse0x2ebcc90();
   input += synapse0x2ebccd0();
   input += synapse0x2ebcf20();
   input += synapse0x2ebcf60();
   input += synapse0x2ebd1b0();
   input += synapse0x2ebd1f0();
   input += synapse0x2ebd230();
   input += synapse0x2ebd480();
   input += synapse0x2ebd4c0();
   input += synapse0x2ebd710();
   input += synapse0x2ebd750();
   input += synapse0x2ec8200();
   input += synapse0x2ec8240();
   input += synapse0x2ebd8a0();
   input += synapse0x2ebddb0();
   input += synapse0x2ebddf0();
   input += synapse0x2ebde30();
   input += synapse0x2ebe080();
   input += synapse0x2ebe0c0();
   return input;
}

double NNfunction_NG_5::neuron0x2ec8070() {
   double input = input0x2ec8070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ebe100() {
   double input = 0.819152;
   input += synapse0x2ebd970();
   input += synapse0x2ebd9b0();
   input += synapse0x2ebd9f0();
   input += synapse0x2ebda30();
   input += synapse0x2ebe3b0();
   input += synapse0x2eca700();
   input += synapse0x2eca740();
   input += synapse0x2eca780();
   input += synapse0x2eca7c0();
   input += synapse0x2eca800();
   input += synapse0x2eca840();
   input += synapse0x2eca880();
   input += synapse0x2eca8c0();
   input += synapse0x2eca900();
   input += synapse0x2eca940();
   input += synapse0x2eca980();
   input += synapse0x2ebe290();
   input += synapse0x2ebe2d0();
   input += synapse0x2ecaad0();
   input += synapse0x2ecab10();
   input += synapse0x2ecab50();
   input += synapse0x2ecab90();
   input += synapse0x2ecabd0();
   input += synapse0x2ecac10();
   return input;
}

double NNfunction_NG_5::neuron0x2ebe100() {
   double input = input0x2ebe100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ecac50() {
   double input = 0.230652;
   input += synapse0x2ecaf90();
   input += synapse0x2ecafd0();
   input += synapse0x2ecb010();
   input += synapse0x2ecb050();
   input += synapse0x2ecb090();
   input += synapse0x2ecb0d0();
   input += synapse0x2ecb110();
   input += synapse0x2ecb150();
   input += synapse0x2ecb190();
   input += synapse0x2ecb1d0();
   input += synapse0x2ecb210();
   input += synapse0x2ecb250();
   input += synapse0x2ecb290();
   input += synapse0x2ecb2d0();
   input += synapse0x2ecb310();
   input += synapse0x2ecb350();
   input += synapse0x2ecade0();
   input += synapse0x2ecae20();
   input += synapse0x2ecb4a0();
   input += synapse0x2ecb4e0();
   input += synapse0x2ecb520();
   input += synapse0x2ecb560();
   input += synapse0x2ecb5a0();
   input += synapse0x2ecb5e0();
   return input;
}

double NNfunction_NG_5::neuron0x2ecac50() {
   double input = input0x2ecac50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ecb620() {
   double input = -0.0864064;
   input += synapse0x2ecb960();
   input += synapse0x2ecb9a0();
   input += synapse0x2ecb9e0();
   input += synapse0x2ecba20();
   input += synapse0x2ecba60();
   input += synapse0x2ecbaa0();
   input += synapse0x2ecbae0();
   input += synapse0x2ecbb20();
   input += synapse0x2ecbb60();
   input += synapse0x2ecbba0();
   input += synapse0x2ecbbe0();
   input += synapse0x2ecbc20();
   input += synapse0x2ecbc60();
   input += synapse0x2ecbca0();
   input += synapse0x2ecbce0();
   input += synapse0x2ecbd20();
   input += synapse0x2ecb7b0();
   input += synapse0x2ecb7f0();
   input += synapse0x2ecbe70();
   input += synapse0x2ecbeb0();
   input += synapse0x2ecbef0();
   input += synapse0x2ecbf30();
   input += synapse0x2ecbf70();
   input += synapse0x2ecbfb0();
   return input;
}

double NNfunction_NG_5::neuron0x2ecb620() {
   double input = input0x2ecb620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ecbff0() {
   double input = 1.19184;
   input += synapse0x2ecc330();
   input += synapse0x2ecc370();
   input += synapse0x2ecc3b0();
   input += synapse0x2ecc3f0();
   input += synapse0x2ecc430();
   input += synapse0x2ecc470();
   input += synapse0x2ecc4b0();
   input += synapse0x2ecc4f0();
   input += synapse0x2ecc530();
   input += synapse0x2ecc570();
   input += synapse0x2ecc5b0();
   input += synapse0x2ecc5f0();
   input += synapse0x2ecc630();
   input += synapse0x2ecc670();
   input += synapse0x2ecc6b0();
   input += synapse0x2ecc6f0();
   input += synapse0x2ecc180();
   input += synapse0x2ecc1c0();
   input += synapse0x2ecc840();
   input += synapse0x2ecc880();
   input += synapse0x2ecc8c0();
   input += synapse0x2ecc900();
   input += synapse0x2ecc940();
   input += synapse0x2ecc980();
   return input;
}

double NNfunction_NG_5::neuron0x2ecbff0() {
   double input = input0x2ecbff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ecc9c0() {
   double input = 0.466121;
   input += synapse0x2eccd00();
   input += synapse0x2eccd40();
   input += synapse0x2eccd80();
   input += synapse0x2eccdc0();
   input += synapse0x2ecce00();
   input += synapse0x2ecce40();
   input += synapse0x2ecce80();
   input += synapse0x2eccec0();
   input += synapse0x2eccf00();
   input += synapse0x2eccf40();
   input += synapse0x2eccf80();
   input += synapse0x2eccfc0();
   input += synapse0x2ecd000();
   input += synapse0x2ecd040();
   input += synapse0x2ecd080();
   input += synapse0x2ecd0c0();
   input += synapse0x2eccb50();
   input += synapse0x2eccb90();
   input += synapse0x2ecd210();
   input += synapse0x2ecd250();
   input += synapse0x2ecd290();
   input += synapse0x2ecd2d0();
   input += synapse0x2ecd310();
   input += synapse0x2ecd350();
   return input;
}

double NNfunction_NG_5::neuron0x2ecc9c0() {
   double input = input0x2ecc9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ecd390() {
   double input = -0.0811768;
   input += synapse0x2ecd6d0();
   input += synapse0x2ecd710();
   input += synapse0x2ecd750();
   input += synapse0x2ecd790();
   input += synapse0x2ecd7d0();
   input += synapse0x2ecd810();
   input += synapse0x2ecd850();
   input += synapse0x2ecd890();
   input += synapse0x2ecd8d0();
   input += synapse0x2ecd910();
   input += synapse0x2ecd950();
   input += synapse0x2ecd990();
   input += synapse0x2ecd9d0();
   input += synapse0x2ecda10();
   input += synapse0x2ecda50();
   input += synapse0x2ecda90();
   input += synapse0x2ecd520();
   input += synapse0x2ecd560();
   input += synapse0x2ecdbe0();
   input += synapse0x2ecdc20();
   input += synapse0x2ecdc60();
   input += synapse0x2ecdca0();
   input += synapse0x2ecdce0();
   input += synapse0x2ecdd20();
   return input;
}

double NNfunction_NG_5::neuron0x2ecd390() {
   double input = input0x2ecd390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ecdd60() {
   double input = 0.470525;
   input += synapse0x2ece0a0();
   input += synapse0x2ece0e0();
   input += synapse0x2ece120();
   input += synapse0x2ece160();
   input += synapse0x2ece1a0();
   input += synapse0x2ece1e0();
   input += synapse0x2ece220();
   input += synapse0x2ece260();
   input += synapse0x2ece2a0();
   input += synapse0x2ece2e0();
   input += synapse0x2ece320();
   input += synapse0x2ece360();
   input += synapse0x2ece3a0();
   input += synapse0x2ece3e0();
   input += synapse0x2ece420();
   input += synapse0x2ece460();
   input += synapse0x2ecdef0();
   input += synapse0x2ecdf30();
   input += synapse0x2ece5b0();
   input += synapse0x2ece5f0();
   input += synapse0x2ece630();
   input += synapse0x2ece670();
   input += synapse0x2ece6b0();
   input += synapse0x2ece6f0();
   return input;
}

double NNfunction_NG_5::neuron0x2ecdd60() {
   double input = input0x2ecdd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ece730() {
   double input = -0.275143;
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
   input += synapse0x2ececf0();
   input += synapse0x2eced30();
   input += synapse0x2eced70();
   input += synapse0x2ecedb0();
   input += synapse0x2ecedf0();
   input += synapse0x2ecee30();
   input += synapse0x2ece8c0();
   input += synapse0x2ece900();
   input += synapse0x2ecef80();
   input += synapse0x2ecefc0();
   input += synapse0x2ecf000();
   input += synapse0x2ecf040();
   input += synapse0x2ecf080();
   input += synapse0x2ecf0c0();
   return input;
}

double NNfunction_NG_5::neuron0x2ece730() {
   double input = input0x2ece730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ecf100() {
   double input = 0.0529934;
   input += synapse0x2eb7b70();
   input += synapse0x2eb7bb0();
   input += synapse0x2eb7bf0();
   input += synapse0x2eb7c30();
   input += synapse0x2eb7c70();
   input += synapse0x2eb7cb0();
   input += synapse0x2eb7cf0();
   input += synapse0x2eb7d30();
   input += synapse0x2ecf850();
   input += synapse0x2ecf890();
   input += synapse0x2ecf8d0();
   input += synapse0x2ecf910();
   input += synapse0x2ecf950();
   input += synapse0x2ecf990();
   input += synapse0x2ecf9d0();
   input += synapse0x2ecfa10();
   input += synapse0x2ecf290();
   input += synapse0x2ecf2d0();
   input += synapse0x2ecfb60();
   input += synapse0x2ecfba0();
   input += synapse0x2ecfbe0();
   input += synapse0x2ecfc20();
   input += synapse0x2ecfc60();
   input += synapse0x2ecfca0();
   return input;
}

double NNfunction_NG_5::neuron0x2ecf100() {
   double input = input0x2ecf100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ecfce0() {
   double input = -1.7793;
   input += synapse0x2ed0020();
   input += synapse0x2ed0060();
   input += synapse0x2ed00a0();
   input += synapse0x2ed00e0();
   input += synapse0x2ed0120();
   input += synapse0x2ed0160();
   input += synapse0x2ed01a0();
   input += synapse0x2ed01e0();
   input += synapse0x2ed0220();
   input += synapse0x2ed0260();
   input += synapse0x2ed02a0();
   input += synapse0x2ed02e0();
   input += synapse0x2ed0320();
   input += synapse0x2ed0360();
   input += synapse0x2ed03a0();
   input += synapse0x2ed03e0();
   input += synapse0x2ecfe70();
   input += synapse0x2ecfeb0();
   input += synapse0x2ed0530();
   input += synapse0x2ed0570();
   input += synapse0x2ed05b0();
   input += synapse0x2ed05f0();
   input += synapse0x2ed0630();
   input += synapse0x2ed0670();
   return input;
}

double NNfunction_NG_5::neuron0x2ecfce0() {
   double input = input0x2ecfce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ed06b0() {
   double input = -0.616219;
   input += synapse0x2ed09f0();
   input += synapse0x2ed0a30();
   input += synapse0x2ed0a70();
   input += synapse0x2ed0ab0();
   input += synapse0x2ed0af0();
   input += synapse0x2ed0b30();
   input += synapse0x2ed0b70();
   input += synapse0x2ed0bb0();
   input += synapse0x2ed0bf0();
   input += synapse0x2ed0c30();
   input += synapse0x2ed0c70();
   input += synapse0x2ed0cb0();
   input += synapse0x2ed0cf0();
   input += synapse0x2ed0d30();
   input += synapse0x2ed0d70();
   input += synapse0x2ed0db0();
   input += synapse0x2ed0840();
   input += synapse0x2ed0880();
   input += synapse0x2ec13b0();
   input += synapse0x2ec13f0();
   input += synapse0x2ec1430();
   input += synapse0x2ec1470();
   input += synapse0x2ec14b0();
   input += synapse0x2ec14f0();
   return input;
}

double NNfunction_NG_5::neuron0x2ed06b0() {
   double input = input0x2ed06b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ec1530() {
   double input = 0.0371319;
   input += synapse0x2ec1870();
   input += synapse0x2ec18b0();
   input += synapse0x2ec18f0();
   input += synapse0x2ec1930();
   input += synapse0x2ec1970();
   input += synapse0x2ec19b0();
   input += synapse0x2ec19f0();
   input += synapse0x2ec1a30();
   input += synapse0x2ec1a70();
   input += synapse0x2ec1ab0();
   input += synapse0x2ec1af0();
   input += synapse0x2ec1b30();
   input += synapse0x2ec1b70();
   input += synapse0x2ec1bb0();
   input += synapse0x2ec1bf0();
   input += synapse0x2ec1c30();
   input += synapse0x2ec16c0();
   input += synapse0x2ec1700();
   input += synapse0x2ec1d80();
   input += synapse0x2ec1dc0();
   input += synapse0x2ec1e00();
   input += synapse0x2ec1e40();
   input += synapse0x2ec1e80();
   input += synapse0x2ec1ec0();
   return input;
}

double NNfunction_NG_5::neuron0x2ec1530() {
   double input = input0x2ec1530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ec1f00() {
   double input = -0.83721;
   input += synapse0x2ec2240();
   input += synapse0x2ec2280();
   input += synapse0x2ec22c0();
   input += synapse0x2ec2300();
   input += synapse0x2ec2340();
   input += synapse0x2ec2380();
   input += synapse0x2ec23c0();
   input += synapse0x2ec2400();
   input += synapse0x2ec2440();
   input += synapse0x2ec2480();
   input += synapse0x2ec24c0();
   input += synapse0x2ec2500();
   input += synapse0x2ec2540();
   input += synapse0x2ec2580();
   input += synapse0x2ec25c0();
   input += synapse0x2ec2600();
   input += synapse0x2ec2090();
   input += synapse0x2ec20d0();
   input += synapse0x2ec2750();
   input += synapse0x2ec2790();
   input += synapse0x2ec27d0();
   input += synapse0x2ec2810();
   input += synapse0x2ec2850();
   input += synapse0x2ec2890();
   return input;
}

double NNfunction_NG_5::neuron0x2ec1f00() {
   double input = input0x2ec1f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ec28d0() {
   double input = -1.88007;
   input += synapse0x2ec2c10();
   input += synapse0x2ec2c50();
   input += synapse0x2ec2c90();
   input += synapse0x2ec2cd0();
   input += synapse0x2ec2d10();
   input += synapse0x2ec2d50();
   input += synapse0x2ec2d90();
   input += synapse0x2ec2dd0();
   input += synapse0x2ec2e10();
   input += synapse0x2ec2e50();
   input += synapse0x2ec2e90();
   input += synapse0x2ec2ed0();
   input += synapse0x2ec2f10();
   input += synapse0x2ec2f50();
   input += synapse0x2ec2f90();
   input += synapse0x2ec2fd0();
   input += synapse0x2ec2a60();
   input += synapse0x2ec2aa0();
   input += synapse0x2ec3120();
   input += synapse0x2ec3160();
   input += synapse0x2ec31a0();
   input += synapse0x2ec31e0();
   input += synapse0x2ec3220();
   input += synapse0x2ec3260();
   return input;
}

double NNfunction_NG_5::neuron0x2ec28d0() {
   double input = input0x2ec28d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ed4f10() {
   double input = -0.140083;
   input += synapse0x2ed5130();
   input += synapse0x2ed5170();
   input += synapse0x2ed51b0();
   input += synapse0x2ed51f0();
   input += synapse0x2ed5230();
   input += synapse0x2ed5270();
   input += synapse0x2ed52b0();
   input += synapse0x2ed52f0();
   input += synapse0x2ed5330();
   input += synapse0x2ed5370();
   input += synapse0x2ed53b0();
   input += synapse0x2ed53f0();
   input += synapse0x2ed5430();
   input += synapse0x2ed5470();
   input += synapse0x2ed54b0();
   input += synapse0x2ed54f0();
   input += synapse0x2ec32a0();
   input += synapse0x2ec32e0();
   input += synapse0x2ed5640();
   input += synapse0x2ed5680();
   input += synapse0x2ed56c0();
   input += synapse0x2ed5700();
   input += synapse0x2ed5740();
   input += synapse0x2ed5780();
   return input;
}

double NNfunction_NG_5::neuron0x2ed4f10() {
   double input = input0x2ed4f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ed57c0() {
   double input = 2.39983;
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
   input += synapse0x2ed5d80();
   input += synapse0x2ed5dc0();
   input += synapse0x2ed5e00();
   input += synapse0x2ed5e40();
   input += synapse0x2ed5e80();
   input += synapse0x2ed5ec0();
   input += synapse0x2ed5950();
   input += synapse0x2ed5990();
   input += synapse0x2ed6010();
   input += synapse0x2ed6050();
   input += synapse0x2ed6090();
   input += synapse0x2ed60d0();
   input += synapse0x2ed6110();
   input += synapse0x2ed6150();
   return input;
}

double NNfunction_NG_5::neuron0x2ed57c0() {
   double input = input0x2ed57c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ed6190() {
   double input = 0.561268;
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
   input += synapse0x2ed6750();
   input += synapse0x2ed6790();
   input += synapse0x2ed67d0();
   input += synapse0x2ed6810();
   input += synapse0x2ed6850();
   input += synapse0x2ed6890();
   input += synapse0x2ed6320();
   input += synapse0x2ed6360();
   input += synapse0x2ed69e0();
   input += synapse0x2ed6a20();
   input += synapse0x2ed6a60();
   input += synapse0x2ed6aa0();
   input += synapse0x2ed6ae0();
   input += synapse0x2ed6b20();
   return input;
}

double NNfunction_NG_5::neuron0x2ed6190() {
   double input = input0x2ed6190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ed6b60() {
   double input = 0.342585;
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
   input += synapse0x2ed7120();
   input += synapse0x2ed7160();
   input += synapse0x2ed71a0();
   input += synapse0x2ed71e0();
   input += synapse0x2ed7220();
   input += synapse0x2ed7260();
   input += synapse0x2ed6cf0();
   input += synapse0x2ed6d30();
   input += synapse0x2ed73b0();
   input += synapse0x2ed73f0();
   input += synapse0x2ed7430();
   input += synapse0x2ed7470();
   input += synapse0x2ed74b0();
   input += synapse0x2ed74f0();
   return input;
}

double NNfunction_NG_5::neuron0x2ed6b60() {
   double input = input0x2ed6b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2eddd60() {
   double input = 0.521512;
   input += synapse0x2c6d870();
   input += synapse0x2c6d8b0();
   input += synapse0x2eb4fa0();
   input += synapse0x2eb4fe0();
   input += synapse0x2eb5970();
   input += synapse0x2eb59b0();
   input += synapse0x2eb6740();
   input += synapse0x2eb6780();
   input += synapse0x2eb7110();
   input += synapse0x2eb7150();
   input += synapse0x2eb7ae0();
   input += synapse0x2eb7b20();
   input += synapse0x2eb85c0();
   input += synapse0x2eb8600();
   input += synapse0x2eb8f90();
   input += synapse0x2eb8fd0();
   input += synapse0x2eb6070();
   input += synapse0x2eb60b0();
   input += synapse0x2ebab40();
   input += synapse0x2ebab80();
   input += synapse0x2ebb510();
   input += synapse0x2ebb550();
   input += synapse0x2ebbee0();
   input += synapse0x2ebbf20();
   input += synapse0x2ebc8b0();
   input += synapse0x2ebc8f0();
   input += synapse0x2eb0a50();
   input += synapse0x2eb0a90();
   input += synapse0x2ebe9a0();
   input += synapse0x2ebe9e0();
   input += synapse0x2ebf370();
   input += synapse0x2ebf3b0();
   input += synapse0x2ebfd40();
   input += synapse0x2ebfd80();
   input += synapse0x2ec0710();
   input += synapse0x2ec0750();
   input += synapse0x2ec10e0();
   input += synapse0x2ec1120();
   input += synapse0x2eb9c30();
   input += synapse0x2eb9c70();
   input += synapse0x2ec34e0();
   input += synapse0x2ec3520();
   input += synapse0x2ec3e70();
   input += synapse0x2ec3eb0();
   input += synapse0x2ec4840();
   input += synapse0x2ec4880();
   input += synapse0x2ec5210();
   input += synapse0x2ec5250();
   input += synapse0x2ec5be0();
   input += synapse0x2ec5c20();
   return input;
}

double NNfunction_NG_5::neuron0x2eddd60() {
   double input = input0x2eddd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ede100() {
   double input = -0.380831;
   input += synapse0x2ec8320();
   input += synapse0x2ec8360();
   input += synapse0x2ebd8e0();
   input += synapse0x2ebd920();
   input += synapse0x2ecaf00();
   input += synapse0x2ecaf40();
   input += synapse0x2ecb8d0();
   input += synapse0x2ecb910();
   input += synapse0x2ecc2a0();
   input += synapse0x2ecc2e0();
   input += synapse0x2eccc70();
   input += synapse0x2ecccb0();
   input += synapse0x2ecd640();
   input += synapse0x2ecd680();
   input += synapse0x2ece010();
   input += synapse0x2ece050();
   input += synapse0x2ece9e0();
   input += synapse0x2ecea20();
   input += synapse0x2ecf3b0();
   input += synapse0x2ecf3f0();
   input += synapse0x2ecff90();
   input += synapse0x2ecffd0();
   input += synapse0x2ed0960();
   input += synapse0x2ed09a0();
   input += synapse0x2ec17e0();
   input += synapse0x2ec1820();
   input += synapse0x2ec21b0();
   input += synapse0x2ec21f0();
   input += synapse0x2ec2b80();
   input += synapse0x2ec2bc0();
   input += synapse0x2ed50a0();
   input += synapse0x2ed50e0();
   input += synapse0x2ed5a70();
   input += synapse0x2ed5ab0();
   input += synapse0x2ed6440();
   input += synapse0x2ed6480();
   input += synapse0x2ed6e10();
   input += synapse0x2ed6e50();
   input += synapse0x2eb2d00();
   input += synapse0x2eb2d40();
   input += synapse0x2ec65b0();
   input += synapse0x2ec65f0();
   input += synapse0x2ed7530();
   input += synapse0x2ed7570();
   input += synapse0x2ed75b0();
   input += synapse0x2ed75f0();
   input += synapse0x2ede4a0();
   input += synapse0x2ede4e0();
   input += synapse0x2ede520();
   input += synapse0x2ede560();
   return input;
}

double NNfunction_NG_5::neuron0x2ede100() {
   double input = input0x2ede100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ede5a0() {
   double input = 0.210361;
   input += synapse0x2ede8e0();
   input += synapse0x2ede920();
   input += synapse0x2ede960();
   input += synapse0x2ede9a0();
   input += synapse0x2ede9e0();
   input += synapse0x2edea20();
   input += synapse0x2edea60();
   input += synapse0x2edeaa0();
   input += synapse0x2edeae0();
   input += synapse0x2edeb20();
   input += synapse0x2edeb60();
   input += synapse0x2edeba0();
   input += synapse0x2edebe0();
   input += synapse0x2edec20();
   input += synapse0x2edec60();
   input += synapse0x2edeca0();
   input += synapse0x2ede730();
   input += synapse0x2ede770();
   input += synapse0x2ededf0();
   input += synapse0x2edee30();
   input += synapse0x2edee70();
   input += synapse0x2edeeb0();
   input += synapse0x2edeef0();
   input += synapse0x2edef30();
   input += synapse0x2edef70();
   input += synapse0x2edefb0();
   input += synapse0x2edeff0();
   input += synapse0x2edf030();
   input += synapse0x2edf070();
   input += synapse0x2edf0b0();
   input += synapse0x2edf0f0();
   input += synapse0x2edf130();
   input += synapse0x2edece0();
   input += synapse0x2eded20();
   input += synapse0x2eded60();
   input += synapse0x2ededa0();
   input += synapse0x2edf380();
   input += synapse0x2edf3c0();
   input += synapse0x2edf400();
   input += synapse0x2edf440();
   input += synapse0x2edf480();
   input += synapse0x2edf4c0();
   input += synapse0x2edf500();
   input += synapse0x2edf540();
   input += synapse0x2edf580();
   input += synapse0x2edf5c0();
   input += synapse0x2edf600();
   input += synapse0x2edf640();
   input += synapse0x2edf680();
   input += synapse0x2edf6c0();
   return input;
}

double NNfunction_NG_5::neuron0x2ede5a0() {
   double input = input0x2ede5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2edf700() {
   double input = -0.0322024;
   input += synapse0x2edfa40();
   input += synapse0x2edfa80();
   input += synapse0x2edfac0();
   input += synapse0x2edfb00();
   input += synapse0x2edfb40();
   input += synapse0x2edfb80();
   input += synapse0x2edfbc0();
   input += synapse0x2edfc00();
   input += synapse0x2edfc40();
   input += synapse0x2edfc80();
   input += synapse0x2edfcc0();
   input += synapse0x2edfd00();
   input += synapse0x2edfd40();
   input += synapse0x2edfd80();
   input += synapse0x2edfdc0();
   input += synapse0x2edfe00();
   input += synapse0x2edf890();
   input += synapse0x2edf8d0();
   input += synapse0x2edff50();
   input += synapse0x2edff90();
   input += synapse0x2edffd0();
   input += synapse0x2ee0010();
   input += synapse0x2ee0050();
   input += synapse0x2ee0090();
   input += synapse0x2ee00d0();
   input += synapse0x2ee0110();
   input += synapse0x2ee0150();
   input += synapse0x2ee0190();
   input += synapse0x2ee01d0();
   input += synapse0x2ee0210();
   input += synapse0x2ee0250();
   input += synapse0x2ee0290();
   input += synapse0x2edfe40();
   input += synapse0x2edfe80();
   input += synapse0x2edfec0();
   input += synapse0x2edff00();
   input += synapse0x2ee04e0();
   input += synapse0x2ee0520();
   input += synapse0x2ee0560();
   input += synapse0x2ee05a0();
   input += synapse0x2ee05e0();
   input += synapse0x2ee0620();
   input += synapse0x2ee0660();
   input += synapse0x2ee06a0();
   input += synapse0x2ee06e0();
   input += synapse0x2ee0720();
   input += synapse0x2ee0760();
   input += synapse0x2ee07a0();
   input += synapse0x2ee07e0();
   input += synapse0x2ee0820();
   return input;
}

double NNfunction_NG_5::neuron0x2edf700() {
   double input = input0x2edf700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ee0860() {
   double input = 0.105581;
   input += synapse0x2ee0ba0();
   input += synapse0x2ee0be0();
   input += synapse0x2ee0c20();
   input += synapse0x2ee0c60();
   input += synapse0x2ee0ca0();
   input += synapse0x2ee0ce0();
   input += synapse0x2ee0d20();
   input += synapse0x2ee0d60();
   input += synapse0x2ee0da0();
   input += synapse0x2ee0de0();
   input += synapse0x2ee0e20();
   input += synapse0x2ee0e60();
   input += synapse0x2ee0ea0();
   input += synapse0x2ee0ee0();
   input += synapse0x2ee0f20();
   input += synapse0x2ee0f60();
   input += synapse0x2ee09f0();
   input += synapse0x2ee0a30();
   input += synapse0x2ee10b0();
   input += synapse0x2ee10f0();
   input += synapse0x2ee1130();
   input += synapse0x2ee1170();
   input += synapse0x2ee11b0();
   input += synapse0x2ee11f0();
   input += synapse0x2ee1230();
   input += synapse0x2ee1270();
   input += synapse0x2ee12b0();
   input += synapse0x2ee12f0();
   input += synapse0x2ee1330();
   input += synapse0x2ee1370();
   input += synapse0x2ee13b0();
   input += synapse0x2ee13f0();
   input += synapse0x2ee0fa0();
   input += synapse0x2ee0fe0();
   input += synapse0x2ee1020();
   input += synapse0x2ee1060();
   input += synapse0x2ee1640();
   input += synapse0x2ee1680();
   input += synapse0x2ee16c0();
   input += synapse0x2ee1700();
   input += synapse0x2ee1740();
   input += synapse0x2ee1780();
   input += synapse0x2ee17c0();
   input += synapse0x2ee1800();
   input += synapse0x2ee1840();
   input += synapse0x2ee1880();
   input += synapse0x2ee18c0();
   input += synapse0x2ee1900();
   input += synapse0x2ee1940();
   input += synapse0x2ee1980();
   return input;
}

double NNfunction_NG_5::neuron0x2ee0860() {
   double input = input0x2ee0860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_5::input0x2ee19c0() {
   double input = 8.91946;
   input += synapse0x2ee1be0();
   input += synapse0x2ee1c20();
   input += synapse0x2ee1c60();
   input += synapse0x2ee1ca0();
   input += synapse0x2ee1ce0();
   return input;
}

double NNfunction_NG_5::neuron0x2ee19c0() {
   double input = input0x2ee19c0();
   return (input * 1)+0;
}

double NNfunction_NG_5::synapse0x2ead970() {
   return (neuron0x2eadab0()*-0.0524816);
}

double NNfunction_NG_5::synapse0x2ead9b0() {
   return (neuron0x2eaddf0()*-0.13187);
}

double NNfunction_NG_5::synapse0x2eb2d90() {
   return (neuron0x2eae130()*-0.401436);
}

double NNfunction_NG_5::synapse0x2eb2dd0() {
   return (neuron0x2eae470()*0.0411007);
}

double NNfunction_NG_5::synapse0x2eb2e10() {
   return (neuron0x2eae7b0()*-0.0796016);
}

double NNfunction_NG_5::synapse0x2eb2e50() {
   return (neuron0x2eaeaf0()*0.0155527);
}

double NNfunction_NG_5::synapse0x2eb2e90() {
   return (neuron0x2eaee30()*-0.0431321);
}

double NNfunction_NG_5::synapse0x2eb2ed0() {
   return (neuron0x2eaf170()*-0.00187143);
}

double NNfunction_NG_5::synapse0x2eb2f10() {
   return (neuron0x2eaf4b0()*-0.058199);
}

double NNfunction_NG_5::synapse0x2eb2f50() {
   return (neuron0x2eaf7f0()*-0.0280414);
}

double NNfunction_NG_5::synapse0x2eb2f90() {
   return (neuron0x2eafb30()*0.0649978);
}

double NNfunction_NG_5::synapse0x2eb2fd0() {
   return (neuron0x2eafe70()*-2.32767);
}

double NNfunction_NG_5::synapse0x2eb3010() {
   return (neuron0x2eb01b0()*-0.640633);
}

double NNfunction_NG_5::synapse0x2eb3050() {
   return (neuron0x2eb04f0()*0.0885289);
}

double NNfunction_NG_5::synapse0x2eb3090() {
   return (neuron0x2eb0830()*-0.166744);
}

double NNfunction_NG_5::synapse0x2eb30d0() {
   return (neuron0x2eb0b70()*-0.171876);
}

double NNfunction_NG_5::synapse0x2ead8e0() {
   return (neuron0x2eb0eb0()*0.0665038);
}

double NNfunction_NG_5::synapse0x2ead920() {
   return (neuron0x2eb1410()*-0.332841);
}

double NNfunction_NG_5::synapse0x2c5f450() {
   return (neuron0x2eb1630()*-0.275344);
}

double NNfunction_NG_5::synapse0x2c5f490() {
   return (neuron0x2eb1970()*0.0132851);
}

double NNfunction_NG_5::synapse0x2eb3330() {
   return (neuron0x2eb1cb0()*0.0265471);
}

double NNfunction_NG_5::synapse0x2eb3370() {
   return (neuron0x2eb1ff0()*0.00675182);
}

double NNfunction_NG_5::synapse0x2eb33b0() {
   return (neuron0x2eb2330()*-0.0474787);
}

double NNfunction_NG_5::synapse0x2eb33f0() {
   return (neuron0x2eb2670()*-0.111534);
}

double NNfunction_NG_5::synapse0x2eb3770() {
   return (neuron0x2eadab0()*0.0404744);
}

double NNfunction_NG_5::synapse0x2eb37b0() {
   return (neuron0x2eaddf0()*-0.0418406);
}

double NNfunction_NG_5::synapse0x2eb37f0() {
   return (neuron0x2eae130()*-0.0753931);
}

double NNfunction_NG_5::synapse0x2eb3830() {
   return (neuron0x2eae470()*3.22418);
}

double NNfunction_NG_5::synapse0x2eb3870() {
   return (neuron0x2eae7b0()*0.0165847);
}

double NNfunction_NG_5::synapse0x2eb38b0() {
   return (neuron0x2eaeaf0()*-0.043632);
}

double NNfunction_NG_5::synapse0x2eb38f0() {
   return (neuron0x2eaee30()*0.0226813);
}

double NNfunction_NG_5::synapse0x2eb3930() {
   return (neuron0x2eaf170()*0.0278499);
}

double NNfunction_NG_5::synapse0x2eb3970() {
   return (neuron0x2eaf4b0()*-0.10831);
}

double NNfunction_NG_5::synapse0x2eb3220() {
   return (neuron0x2eaf7f0()*0.0107122);
}

double NNfunction_NG_5::synapse0x2eb3260() {
   return (neuron0x2eafb30()*-0.0021274);
}

double NNfunction_NG_5::synapse0x2eb32a0() {
   return (neuron0x2eafe70()*-0.907268);
}

double NNfunction_NG_5::synapse0x2eb32e0() {
   return (neuron0x2eb01b0()*0.897139);
}

double NNfunction_NG_5::synapse0x2eb3bc0() {
   return (neuron0x2eb04f0()*0.0628191);
}

double NNfunction_NG_5::synapse0x2eb3c00() {
   return (neuron0x2eb0830()*0.211315);
}

double NNfunction_NG_5::synapse0x2eb3c40() {
   return (neuron0x2eb0b70()*0.18741);
}

double NNfunction_NG_5::synapse0x2eb35c0() {
   return (neuron0x2eb0eb0()*0.106278);
}

double NNfunction_NG_5::synapse0x2eb3600() {
   return (neuron0x2eb1410()*0.0970785);
}

double NNfunction_NG_5::synapse0x2eb3d90() {
   return (neuron0x2eb1630()*0.172192);
}

double NNfunction_NG_5::synapse0x2eb3dd0() {
   return (neuron0x2eb1970()*0.040656);
}

double NNfunction_NG_5::synapse0x2eb3e10() {
   return (neuron0x2eb1cb0()*-0.0470647);
}

double NNfunction_NG_5::synapse0x2eb3e50() {
   return (neuron0x2eb1ff0()*0.047047);
}

double NNfunction_NG_5::synapse0x2eb3e90() {
   return (neuron0x2eb2330()*-0.0137728);
}

double NNfunction_NG_5::synapse0x2eb3ed0() {
   return (neuron0x2eb2670()*-0.152584);
}

double NNfunction_NG_5::synapse0x2eb4250() {
   return (neuron0x2eadab0()*-0.30788);
}

double NNfunction_NG_5::synapse0x2eb4290() {
   return (neuron0x2eaddf0()*0.177506);
}

double NNfunction_NG_5::synapse0x2eb42d0() {
   return (neuron0x2eae130()*0.879035);
}

double NNfunction_NG_5::synapse0x2eb4310() {
   return (neuron0x2eae470()*-0.258569);
}

double NNfunction_NG_5::synapse0x2eb4350() {
   return (neuron0x2eae7b0()*-0.0107032);
}

double NNfunction_NG_5::synapse0x2eb4390() {
   return (neuron0x2eaeaf0()*0.059368);
}

double NNfunction_NG_5::synapse0x2eb43d0() {
   return (neuron0x2eaee30()*-0.108214);
}

double NNfunction_NG_5::synapse0x2eb4410() {
   return (neuron0x2eaf170()*-0.0313394);
}

double NNfunction_NG_5::synapse0x2eb4450() {
   return (neuron0x2eaf4b0()*0.0314799);
}

double NNfunction_NG_5::synapse0x2eb4490() {
   return (neuron0x2eaf7f0()*0.0289747);
}

double NNfunction_NG_5::synapse0x2eb44d0() {
   return (neuron0x2eafb30()*0.101821);
}

double NNfunction_NG_5::synapse0x2eb4510() {
   return (neuron0x2eafe70()*-1.35976);
}

double NNfunction_NG_5::synapse0x2eb4550() {
   return (neuron0x2eb01b0()*-0.684935);
}

double NNfunction_NG_5::synapse0x2eb4590() {
   return (neuron0x2eb04f0()*-0.182236);
}

double NNfunction_NG_5::synapse0x2eb45d0() {
   return (neuron0x2eb0830()*-0.406256);
}

double NNfunction_NG_5::synapse0x2eb4610() {
   return (neuron0x2eb0b70()*-0.367929);
}

double NNfunction_NG_5::synapse0x2eb40a0() {
   return (neuron0x2eb0eb0()*-0.134637);
}

double NNfunction_NG_5::synapse0x2eb40e0() {
   return (neuron0x2eb1410()*-0.158225);
}

double NNfunction_NG_5::synapse0x2c5f820() {
   return (neuron0x2eb1630()*-0.187671);
}

double NNfunction_NG_5::synapse0x2c6d060() {
   return (neuron0x2eb1970()*0.023466);
}

double NNfunction_NG_5::synapse0x2c6d0a0() {
   return (neuron0x2eb1cb0()*-0.239473);
}

double NNfunction_NG_5::synapse0x2e9cb40() {
   return (neuron0x2eb1ff0()*0.055946);
}

double NNfunction_NG_5::synapse0x2e9cb80() {
   return (neuron0x2eb2330()*-0.00324423);
}

double NNfunction_NG_5::synapse0x2e9cbc0() {
   return (neuron0x2eb2670()*-0.0646271);
}

double NNfunction_NG_5::synapse0x2c6d900() {
   return (neuron0x2eadab0()*0.0351698);
}

double NNfunction_NG_5::synapse0x2eb3b40() {
   return (neuron0x2eaddf0()*0.00435861);
}

double NNfunction_NG_5::synapse0x2eb3b80() {
   return (neuron0x2eae130()*0.187955);
}

double NNfunction_NG_5::synapse0x2eb4760() {
   return (neuron0x2eae470()*0.0714782);
}

double NNfunction_NG_5::synapse0x2eb47a0() {
   return (neuron0x2eae7b0()*0.0310016);
}

double NNfunction_NG_5::synapse0x2eb47e0() {
   return (neuron0x2eaeaf0()*-0.0496169);
}

double NNfunction_NG_5::synapse0x2eb4820() {
   return (neuron0x2eaee30()*-0.0135191);
}

double NNfunction_NG_5::synapse0x2eb4860() {
   return (neuron0x2eaf170()*0.120502);
}

double NNfunction_NG_5::synapse0x2eb48a0() {
   return (neuron0x2eaf4b0()*-0.0527136);
}

double NNfunction_NG_5::synapse0x2eb48e0() {
   return (neuron0x2eaf7f0()*0.0733602);
}

double NNfunction_NG_5::synapse0x2eb4920() {
   return (neuron0x2eafb30()*0.00915914);
}

double NNfunction_NG_5::synapse0x2eb4960() {
   return (neuron0x2eafe70()*1.58504);
}

double NNfunction_NG_5::synapse0x2eb49a0() {
   return (neuron0x2eb01b0()*-3.31622);
}

double NNfunction_NG_5::synapse0x2eb49e0() {
   return (neuron0x2eb04f0()*-0.218152);
}

double NNfunction_NG_5::synapse0x2eb4a20() {
   return (neuron0x2eb0830()*0.11633);
}

double NNfunction_NG_5::synapse0x2eb4a60() {
   return (neuron0x2eb0b70()*-0.0389814);
}

double NNfunction_NG_5::synapse0x2ead9f0() {
   return (neuron0x2eb0eb0()*-0.111847);
}

double NNfunction_NG_5::synapse0x2eada30() {
   return (neuron0x2eb1410()*-0.0447985);
}

double NNfunction_NG_5::synapse0x2eada70() {
   return (neuron0x2eb1630()*-0.141132);
}

double NNfunction_NG_5::synapse0x2eb4bb0() {
   return (neuron0x2eb1970()*-0.0507785);
}

double NNfunction_NG_5::synapse0x2eb4bf0() {
   return (neuron0x2eb1cb0()*0.0509141);
}

double NNfunction_NG_5::synapse0x2eb4c30() {
   return (neuron0x2eb1ff0()*-0.0183202);
}

double NNfunction_NG_5::synapse0x2eb4c70() {
   return (neuron0x2eb2330()*0.0551785);
}

double NNfunction_NG_5::synapse0x2eb4cb0() {
   return (neuron0x2eb2670()*0.231123);
}

double NNfunction_NG_5::synapse0x2eb5030() {
   return (neuron0x2eadab0()*0.0113542);
}

double NNfunction_NG_5::synapse0x2eb5070() {
   return (neuron0x2eaddf0()*-0.00261072);
}

double NNfunction_NG_5::synapse0x2eb50b0() {
   return (neuron0x2eae130()*-0.0497862);
}

double NNfunction_NG_5::synapse0x2eb50f0() {
   return (neuron0x2eae470()*1.43087);
}

double NNfunction_NG_5::synapse0x2eb5130() {
   return (neuron0x2eae7b0()*-0.00649199);
}

double NNfunction_NG_5::synapse0x2eb5170() {
   return (neuron0x2eaeaf0()*-0.00405755);
}

double NNfunction_NG_5::synapse0x2eb51b0() {
   return (neuron0x2eaee30()*0.00165844);
}

double NNfunction_NG_5::synapse0x2eb51f0() {
   return (neuron0x2eaf170()*-0.00311845);
}

double NNfunction_NG_5::synapse0x2eb5230() {
   return (neuron0x2eaf4b0()*-0.00133573);
}

double NNfunction_NG_5::synapse0x2eb5270() {
   return (neuron0x2eaf7f0()*-0.0146171);
}

double NNfunction_NG_5::synapse0x2eb52b0() {
   return (neuron0x2eafb30()*0.0041741);
}

double NNfunction_NG_5::synapse0x2eb52f0() {
   return (neuron0x2eafe70()*-0.0117825);
}

double NNfunction_NG_5::synapse0x2eb5330() {
   return (neuron0x2eb01b0()*0.00834614);
}

double NNfunction_NG_5::synapse0x2eb5370() {
   return (neuron0x2eb04f0()*0.00791591);
}

double NNfunction_NG_5::synapse0x2eb53b0() {
   return (neuron0x2eb0830()*0.00679787);
}

double NNfunction_NG_5::synapse0x2eb53f0() {
   return (neuron0x2eb0b70()*-0.00507978);
}

double NNfunction_NG_5::synapse0x2eb4e80() {
   return (neuron0x2eb0eb0()*0.00814408);
}

double NNfunction_NG_5::synapse0x2eb4ec0() {
   return (neuron0x2eb1410()*-0.000731993);
}

double NNfunction_NG_5::synapse0x2eb5540() {
   return (neuron0x2eb1630()*0.00989259);
}

double NNfunction_NG_5::synapse0x2eb5580() {
   return (neuron0x2eb1970()*-0.00390327);
}

double NNfunction_NG_5::synapse0x2eb55c0() {
   return (neuron0x2eb1cb0()*-0.00332894);
}

double NNfunction_NG_5::synapse0x2eb5600() {
   return (neuron0x2eb1ff0()*-0.00198917);
}

double NNfunction_NG_5::synapse0x2eb5640() {
   return (neuron0x2eb2330()*0.00473781);
}

double NNfunction_NG_5::synapse0x2eb5680() {
   return (neuron0x2eb2670()*-0.0182937);
}

double NNfunction_NG_5::synapse0x2eb5a00() {
   return (neuron0x2eadab0()*-0.0113109);
}

double NNfunction_NG_5::synapse0x2eb5a40() {
   return (neuron0x2eaddf0()*-0.100674);
}

double NNfunction_NG_5::synapse0x2eb5a80() {
   return (neuron0x2eae130()*0.0252034);
}

double NNfunction_NG_5::synapse0x2eb5ac0() {
   return (neuron0x2eae470()*1.05628);
}

double NNfunction_NG_5::synapse0x2eb5b00() {
   return (neuron0x2eae7b0()*-0.00851788);
}

double NNfunction_NG_5::synapse0x2eb5b40() {
   return (neuron0x2eaeaf0()*-0.0219674);
}

double NNfunction_NG_5::synapse0x2eb5b80() {
   return (neuron0x2eaee30()*0.0517532);
}

double NNfunction_NG_5::synapse0x2eb5bc0() {
   return (neuron0x2eaf170()*0.0588126);
}

double NNfunction_NG_5::synapse0x2eb5c00() {
   return (neuron0x2eaf4b0()*-0.049189);
}

double NNfunction_NG_5::synapse0x2c6d3d0() {
   return (neuron0x2eaf7f0()*0.148426);
}

double NNfunction_NG_5::synapse0x2c6d410() {
   return (neuron0x2eafb30()*0.0528862);
}

double NNfunction_NG_5::synapse0x2c6d450() {
   return (neuron0x2eafe70()*-2.55942);
}

double NNfunction_NG_5::synapse0x2c6d490() {
   return (neuron0x2eb01b0()*1.12034);
}

double NNfunction_NG_5::synapse0x2c6d4d0() {
   return (neuron0x2eb04f0()*0.0480664);
}

double NNfunction_NG_5::synapse0x2c6d510() {
   return (neuron0x2eb0830()*-0.0638138);
}

double NNfunction_NG_5::synapse0x2c6d550() {
   return (neuron0x2eb0b70()*0.0132519);
}

double NNfunction_NG_5::synapse0x2eb5850() {
   return (neuron0x2eb0eb0()*0.0503294);
}

double NNfunction_NG_5::synapse0x2eb5890() {
   return (neuron0x2eb1410()*-0.028656);
}

double NNfunction_NG_5::synapse0x2c6d6a0() {
   return (neuron0x2eb1630()*-0.0087889);
}

double NNfunction_NG_5::synapse0x2c6d6e0() {
   return (neuron0x2eb1970()*-0.0249779);
}

double NNfunction_NG_5::synapse0x2c6d720() {
   return (neuron0x2eb1cb0()*-0.000650063);
}

double NNfunction_NG_5::synapse0x2c6d760() {
   return (neuron0x2eb1ff0()*-0.0724321);
}

double NNfunction_NG_5::synapse0x2c6d7a0() {
   return (neuron0x2eb2330()*0.0604974);
}

double NNfunction_NG_5::synapse0x2eb6450() {
   return (neuron0x2eb2670()*-0.158606);
}

double NNfunction_NG_5::synapse0x2eb67d0() {
   return (neuron0x2eadab0()*0.0123508);
}

double NNfunction_NG_5::synapse0x2eb6810() {
   return (neuron0x2eaddf0()*-0.00583924);
}

double NNfunction_NG_5::synapse0x2eb6850() {
   return (neuron0x2eae130()*-1.39773);
}

double NNfunction_NG_5::synapse0x2eb6890() {
   return (neuron0x2eae470()*-0.0100561);
}

double NNfunction_NG_5::synapse0x2eb68d0() {
   return (neuron0x2eae7b0()*-0.00441522);
}

double NNfunction_NG_5::synapse0x2eb6910() {
   return (neuron0x2eaeaf0()*-0.00898027);
}

double NNfunction_NG_5::synapse0x2eb6950() {
   return (neuron0x2eaee30()*-0.00326532);
}

double NNfunction_NG_5::synapse0x2eb6990() {
   return (neuron0x2eaf170()*-0.00399239);
}

double NNfunction_NG_5::synapse0x2eb69d0() {
   return (neuron0x2eaf4b0()*-0.007274);
}

double NNfunction_NG_5::synapse0x2eb6a10() {
   return (neuron0x2eaf7f0()*-0.00618275);
}

double NNfunction_NG_5::synapse0x2eb6a50() {
   return (neuron0x2eafb30()*0.00637924);
}

double NNfunction_NG_5::synapse0x2eb6a90() {
   return (neuron0x2eafe70()*0.00582527);
}

double NNfunction_NG_5::synapse0x2eb6ad0() {
   return (neuron0x2eb01b0()*-0.0238468);
}

double NNfunction_NG_5::synapse0x2eb6b10() {
   return (neuron0x2eb04f0()*-0.00368457);
}

double NNfunction_NG_5::synapse0x2eb6b50() {
   return (neuron0x2eb0830()*-0.0167111);
}

double NNfunction_NG_5::synapse0x2eb6b90() {
   return (neuron0x2eb0b70()*-0.00844712);
}

double NNfunction_NG_5::synapse0x2eb6620() {
   return (neuron0x2eb0eb0()*0.00211075);
}

double NNfunction_NG_5::synapse0x2eb6660() {
   return (neuron0x2eb1410()*-0.013582);
}

double NNfunction_NG_5::synapse0x2eb6ce0() {
   return (neuron0x2eb1630()*-0.00458248);
}

double NNfunction_NG_5::synapse0x2eb6d20() {
   return (neuron0x2eb1970()*0.000764679);
}

double NNfunction_NG_5::synapse0x2eb6d60() {
   return (neuron0x2eb1cb0()*0.0179837);
}

double NNfunction_NG_5::synapse0x2eb6da0() {
   return (neuron0x2eb1ff0()*0.00757721);
}

double NNfunction_NG_5::synapse0x2eb6de0() {
   return (neuron0x2eb2330()*-0.0061816);
}

double NNfunction_NG_5::synapse0x2eb6e20() {
   return (neuron0x2eb2670()*-0.0939594);
}

double NNfunction_NG_5::synapse0x2eb71a0() {
   return (neuron0x2eadab0()*-0.00677527);
}

double NNfunction_NG_5::synapse0x2eb71e0() {
   return (neuron0x2eaddf0()*-0.00501622);
}

double NNfunction_NG_5::synapse0x2eb7220() {
   return (neuron0x2eae130()*-0.0434559);
}

double NNfunction_NG_5::synapse0x2eb7260() {
   return (neuron0x2eae470()*-4.14619);
}

double NNfunction_NG_5::synapse0x2eb72a0() {
   return (neuron0x2eae7b0()*0.000141233);
}

double NNfunction_NG_5::synapse0x2eb72e0() {
   return (neuron0x2eaeaf0()*-0.00352704);
}

double NNfunction_NG_5::synapse0x2eb7320() {
   return (neuron0x2eaee30()*0.00363438);
}

double NNfunction_NG_5::synapse0x2eb7360() {
   return (neuron0x2eaf170()*0.00258067);
}

double NNfunction_NG_5::synapse0x2eb73a0() {
   return (neuron0x2eaf4b0()*-0.00351851);
}

double NNfunction_NG_5::synapse0x2eb73e0() {
   return (neuron0x2eaf7f0()*-0.0128844);
}

double NNfunction_NG_5::synapse0x2eb7420() {
   return (neuron0x2eafb30()*0.00577666);
}

double NNfunction_NG_5::synapse0x2eb7460() {
   return (neuron0x2eafe70()*0.0676139);
}

double NNfunction_NG_5::synapse0x2eb74a0() {
   return (neuron0x2eb01b0()*0.0293306);
}

double NNfunction_NG_5::synapse0x2eb74e0() {
   return (neuron0x2eb04f0()*0.0182731);
}

double NNfunction_NG_5::synapse0x2eb7520() {
   return (neuron0x2eb0830()*-0.0129308);
}

double NNfunction_NG_5::synapse0x2eb7560() {
   return (neuron0x2eb0b70()*-0.0205782);
}

double NNfunction_NG_5::synapse0x2eb6ff0() {
   return (neuron0x2eb0eb0()*0.006906);
}

double NNfunction_NG_5::synapse0x2eb7030() {
   return (neuron0x2eb1410()*-0.0172113);
}

double NNfunction_NG_5::synapse0x2eb76b0() {
   return (neuron0x2eb1630()*0.00211018);
}

double NNfunction_NG_5::synapse0x2eb76f0() {
   return (neuron0x2eb1970()*-0.000690111);
}

double NNfunction_NG_5::synapse0x2eb7730() {
   return (neuron0x2eb1cb0()*0.00893344);
}

double NNfunction_NG_5::synapse0x2eb7770() {
   return (neuron0x2eb1ff0()*0.0037664);
}

double NNfunction_NG_5::synapse0x2eb77b0() {
   return (neuron0x2eb2330()*-0.000217301);
}

double NNfunction_NG_5::synapse0x2eb77f0() {
   return (neuron0x2eb2670()*-0.0852158);
}

double NNfunction_NG_5::synapse0x2eb1300() {
   return (neuron0x2eadab0()*0.21889);
}

double NNfunction_NG_5::synapse0x2eb1340() {
   return (neuron0x2eaddf0()*0.0324073);
}

double NNfunction_NG_5::synapse0x2eb1380() {
   return (neuron0x2eae130()*-0.463113);
}

double NNfunction_NG_5::synapse0x2eb13c0() {
   return (neuron0x2eae470()*-0.149055);
}

double NNfunction_NG_5::synapse0x2eb7d80() {
   return (neuron0x2eae7b0()*-0.0604703);
}

double NNfunction_NG_5::synapse0x2eb7dc0() {
   return (neuron0x2eaeaf0()*0.0379626);
}

double NNfunction_NG_5::synapse0x2eb7e00() {
   return (neuron0x2eaee30()*-0.0587803);
}

double NNfunction_NG_5::synapse0x2eb7e40() {
   return (neuron0x2eaf170()*-0.0496794);
}

double NNfunction_NG_5::synapse0x2eb7e80() {
   return (neuron0x2eaf4b0()*0.104911);
}

double NNfunction_NG_5::synapse0x2eb7ec0() {
   return (neuron0x2eaf7f0()*-0.0380658);
}

double NNfunction_NG_5::synapse0x2eb7f00() {
   return (neuron0x2eafb30()*0.299476);
}

double NNfunction_NG_5::synapse0x2eb7f40() {
   return (neuron0x2eafe70()*0.118785);
}

double NNfunction_NG_5::synapse0x2eb7f80() {
   return (neuron0x2eb01b0()*0.572409);
}

double NNfunction_NG_5::synapse0x2eb7fc0() {
   return (neuron0x2eb04f0()*0.280242);
}

double NNfunction_NG_5::synapse0x2eb8000() {
   return (neuron0x2eb0830()*-0.162287);
}

double NNfunction_NG_5::synapse0x2eb8040() {
   return (neuron0x2eb0b70()*0.0184758);
}

double NNfunction_NG_5::synapse0x2eb79c0() {
   return (neuron0x2eb0eb0()*0.0816029);
}

double NNfunction_NG_5::synapse0x2eb7a00() {
   return (neuron0x2eb1410()*0.0587079);
}

double NNfunction_NG_5::synapse0x2eb8190() {
   return (neuron0x2eb1630()*0.156788);
}

double NNfunction_NG_5::synapse0x2eb81d0() {
   return (neuron0x2eb1970()*0.127214);
}

double NNfunction_NG_5::synapse0x2eb8210() {
   return (neuron0x2eb1cb0()*-0.0852954);
}

double NNfunction_NG_5::synapse0x2eb8250() {
   return (neuron0x2eb1ff0()*0.172329);
}

double NNfunction_NG_5::synapse0x2eb8290() {
   return (neuron0x2eb2330()*-0.0246045);
}

double NNfunction_NG_5::synapse0x2eb82d0() {
   return (neuron0x2eb2670()*0.385764);
}

double NNfunction_NG_5::synapse0x2eb8650() {
   return (neuron0x2eadab0()*0.00180293);
}

double NNfunction_NG_5::synapse0x2eb8690() {
   return (neuron0x2eaddf0()*-0.000770209);
}

double NNfunction_NG_5::synapse0x2eb86d0() {
   return (neuron0x2eae130()*0.031382);
}

double NNfunction_NG_5::synapse0x2eb8710() {
   return (neuron0x2eae470()*-15.0072);
}

double NNfunction_NG_5::synapse0x2eb8750() {
   return (neuron0x2eae7b0()*0.00550506);
}

double NNfunction_NG_5::synapse0x2eb8790() {
   return (neuron0x2eaeaf0()*-0.000454383);
}

double NNfunction_NG_5::synapse0x2eb87d0() {
   return (neuron0x2eaee30()*-0.00173639);
}

double NNfunction_NG_5::synapse0x2eb8810() {
   return (neuron0x2eaf170()*0.00522486);
}

double NNfunction_NG_5::synapse0x2eb8850() {
   return (neuron0x2eaf4b0()*-0.00221086);
}

double NNfunction_NG_5::synapse0x2eb8890() {
   return (neuron0x2eaf7f0()*-0.0135453);
}

double NNfunction_NG_5::synapse0x2eb88d0() {
   return (neuron0x2eafb30()*0.0102935);
}

double NNfunction_NG_5::synapse0x2eb8910() {
   return (neuron0x2eafe70()*-0.00473398);
}

double NNfunction_NG_5::synapse0x2eb8950() {
   return (neuron0x2eb01b0()*-0.0552905);
}

double NNfunction_NG_5::synapse0x2eb8990() {
   return (neuron0x2eb04f0()*-0.0200528);
}

double NNfunction_NG_5::synapse0x2eb89d0() {
   return (neuron0x2eb0830()*0.00198428);
}

double NNfunction_NG_5::synapse0x2eb8a10() {
   return (neuron0x2eb0b70()*-0.0149512);
}

double NNfunction_NG_5::synapse0x2eb84a0() {
   return (neuron0x2eb0eb0()*-0.0124199);
}

double NNfunction_NG_5::synapse0x2eb84e0() {
   return (neuron0x2eb1410()*-0.0225148);
}

double NNfunction_NG_5::synapse0x2eb8b60() {
   return (neuron0x2eb1630()*0.00473818);
}

double NNfunction_NG_5::synapse0x2eb8ba0() {
   return (neuron0x2eb1970()*0.0145626);
}

double NNfunction_NG_5::synapse0x2eb8be0() {
   return (neuron0x2eb1cb0()*0.0315702);
}

double NNfunction_NG_5::synapse0x2eb8c20() {
   return (neuron0x2eb1ff0()*0.0270408);
}

double NNfunction_NG_5::synapse0x2eb8c60() {
   return (neuron0x2eb2330()*-0.00323747);
}

double NNfunction_NG_5::synapse0x2eb8ca0() {
   return (neuron0x2eb2670()*0.00477202);
}

double NNfunction_NG_5::synapse0x2eb9020() {
   return (neuron0x2eadab0()*0.0520282);
}

double NNfunction_NG_5::synapse0x2eb9060() {
   return (neuron0x2eaddf0()*0.135466);
}

double NNfunction_NG_5::synapse0x2eb90a0() {
   return (neuron0x2eae130()*-1.17188);
}

double NNfunction_NG_5::synapse0x2eb90e0() {
   return (neuron0x2eae470()*0.125104);
}

double NNfunction_NG_5::synapse0x2eb9120() {
   return (neuron0x2eae7b0()*-0.443521);
}

double NNfunction_NG_5::synapse0x2eb9160() {
   return (neuron0x2eaeaf0()*0.0900786);
}

double NNfunction_NG_5::synapse0x2eb91a0() {
   return (neuron0x2eaee30()*-0.0470287);
}

double NNfunction_NG_5::synapse0x2eb91e0() {
   return (neuron0x2eaf170()*-0.293534);
}

double NNfunction_NG_5::synapse0x2eb9220() {
   return (neuron0x2eaf4b0()*0.0103276);
}

double NNfunction_NG_5::synapse0x2eb9260() {
   return (neuron0x2eaf7f0()*0.14493);
}

double NNfunction_NG_5::synapse0x2eb92a0() {
   return (neuron0x2eafb30()*0.119163);
}

double NNfunction_NG_5::synapse0x2eb92e0() {
   return (neuron0x2eafe70()*-0.751326);
}

double NNfunction_NG_5::synapse0x2eb9320() {
   return (neuron0x2eb01b0()*-0.246126);
}

double NNfunction_NG_5::synapse0x2eb9360() {
   return (neuron0x2eb04f0()*-0.612255);
}

double NNfunction_NG_5::synapse0x2eb93a0() {
   return (neuron0x2eb0830()*-0.0122479);
}

double NNfunction_NG_5::synapse0x2eb93e0() {
   return (neuron0x2eb0b70()*-0.169681);
}

double NNfunction_NG_5::synapse0x2eb8e70() {
   return (neuron0x2eb0eb0()*-0.0687491);
}

double NNfunction_NG_5::synapse0x2eb8eb0() {
   return (neuron0x2eb1410()*0.081379);
}

double NNfunction_NG_5::synapse0x2eb5c40() {
   return (neuron0x2eb1630()*-0.188691);
}

double NNfunction_NG_5::synapse0x2eb5c80() {
   return (neuron0x2eb1970()*-0.0709959);
}

double NNfunction_NG_5::synapse0x2eb5cc0() {
   return (neuron0x2eb1cb0()*0.412648);
}

double NNfunction_NG_5::synapse0x2eb5d00() {
   return (neuron0x2eb1ff0()*0.329979);
}

double NNfunction_NG_5::synapse0x2eb5d40() {
   return (neuron0x2eb2330()*-0.0499451);
}

double NNfunction_NG_5::synapse0x2eb5d80() {
   return (neuron0x2eb2670()*-0.0150518);
}

double NNfunction_NG_5::synapse0x2eb6100() {
   return (neuron0x2eadab0()*0.0558308);
}

double NNfunction_NG_5::synapse0x2eb6140() {
   return (neuron0x2eaddf0()*0.0127358);
}

double NNfunction_NG_5::synapse0x2eb6180() {
   return (neuron0x2eae130()*-0.793116);
}

double NNfunction_NG_5::synapse0x2eb61c0() {
   return (neuron0x2eae470()*-0.0084316);
}

double NNfunction_NG_5::synapse0x2eb6200() {
   return (neuron0x2eae7b0()*-0.0223364);
}

double NNfunction_NG_5::synapse0x2eb6240() {
   return (neuron0x2eaeaf0()*0.00508371);
}

double NNfunction_NG_5::synapse0x2eb6280() {
   return (neuron0x2eaee30()*-0.0191383);
}

double NNfunction_NG_5::synapse0x2eb62c0() {
   return (neuron0x2eaf170()*0.00826286);
}

double NNfunction_NG_5::synapse0x2eb6300() {
   return (neuron0x2eaf4b0()*0.0123424);
}

double NNfunction_NG_5::synapse0x2eb6340() {
   return (neuron0x2eaf7f0()*0.00348799);
}

double NNfunction_NG_5::synapse0x2eb6380() {
   return (neuron0x2eafb30()*0.000956623);
}

double NNfunction_NG_5::synapse0x2eb63c0() {
   return (neuron0x2eafe70()*0.0909801);
}

double NNfunction_NG_5::synapse0x2eb6400() {
   return (neuron0x2eb01b0()*0.0589557);
}

double NNfunction_NG_5::synapse0x2eba540() {
   return (neuron0x2eb04f0()*0.0337955);
}

double NNfunction_NG_5::synapse0x2eba580() {
   return (neuron0x2eb0830()*0.0422589);
}

double NNfunction_NG_5::synapse0x2eba5c0() {
   return (neuron0x2eb0b70()*0.032268);
}

double NNfunction_NG_5::synapse0x2eb5f50() {
   return (neuron0x2eb0eb0()*0.00561685);
}

double NNfunction_NG_5::synapse0x2eb5f90() {
   return (neuron0x2eb1410()*0.0427955);
}

double NNfunction_NG_5::synapse0x2eba710() {
   return (neuron0x2eb1630()*0.00539551);
}

double NNfunction_NG_5::synapse0x2eba750() {
   return (neuron0x2eb1970()*-0.0017895);
}

double NNfunction_NG_5::synapse0x2eba790() {
   return (neuron0x2eb1cb0()*-0.0154434);
}

double NNfunction_NG_5::synapse0x2eba7d0() {
   return (neuron0x2eb1ff0()*-0.00408079);
}

double NNfunction_NG_5::synapse0x2eba810() {
   return (neuron0x2eb2330()*0.00301453);
}

double NNfunction_NG_5::synapse0x2eba850() {
   return (neuron0x2eb2670()*-6.79318);
}

double NNfunction_NG_5::synapse0x2ebabd0() {
   return (neuron0x2eadab0()*-0.0596068);
}

double NNfunction_NG_5::synapse0x2ebac10() {
   return (neuron0x2eaddf0()*0.0359683);
}

double NNfunction_NG_5::synapse0x2ebac50() {
   return (neuron0x2eae130()*0.0750992);
}

double NNfunction_NG_5::synapse0x2ebac90() {
   return (neuron0x2eae470()*-0.0379094);
}

double NNfunction_NG_5::synapse0x2ebacd0() {
   return (neuron0x2eae7b0()*0.026557);
}

double NNfunction_NG_5::synapse0x2ebad10() {
   return (neuron0x2eaeaf0()*0.0192252);
}

double NNfunction_NG_5::synapse0x2ebad50() {
   return (neuron0x2eaee30()*0.0393714);
}

double NNfunction_NG_5::synapse0x2ebad90() {
   return (neuron0x2eaf170()*-0.0300007);
}

double NNfunction_NG_5::synapse0x2ebadd0() {
   return (neuron0x2eaf4b0()*-0.016483);
}

double NNfunction_NG_5::synapse0x2ebae10() {
   return (neuron0x2eaf7f0()*-0.0387224);
}

double NNfunction_NG_5::synapse0x2ebae50() {
   return (neuron0x2eafb30()*0.0301666);
}

double NNfunction_NG_5::synapse0x2ebae90() {
   return (neuron0x2eafe70()*0.55202);
}

double NNfunction_NG_5::synapse0x2ebaed0() {
   return (neuron0x2eb01b0()*-1.46523);
}

double NNfunction_NG_5::synapse0x2ebaf10() {
   return (neuron0x2eb04f0()*0.00372338);
}

double NNfunction_NG_5::synapse0x2ebaf50() {
   return (neuron0x2eb0830()*-0.173338);
}

double NNfunction_NG_5::synapse0x2ebaf90() {
   return (neuron0x2eb0b70()*-0.0364157);
}

double NNfunction_NG_5::synapse0x2ebaa20() {
   return (neuron0x2eb0eb0()*0.0782699);
}

double NNfunction_NG_5::synapse0x2ebaa60() {
   return (neuron0x2eb1410()*-0.0163718);
}

double NNfunction_NG_5::synapse0x2ebb0e0() {
   return (neuron0x2eb1630()*0.0262894);
}

double NNfunction_NG_5::synapse0x2ebb120() {
   return (neuron0x2eb1970()*-0.0437391);
}

double NNfunction_NG_5::synapse0x2ebb160() {
   return (neuron0x2eb1cb0()*0.0269775);
}

double NNfunction_NG_5::synapse0x2ebb1a0() {
   return (neuron0x2eb1ff0()*0.0142401);
}

double NNfunction_NG_5::synapse0x2ebb1e0() {
   return (neuron0x2eb2330()*0.00968174);
}

double NNfunction_NG_5::synapse0x2ebb220() {
   return (neuron0x2eb2670()*-0.0647608);
}

double NNfunction_NG_5::synapse0x2ebb5a0() {
   return (neuron0x2eadab0()*0.00783027);
}

double NNfunction_NG_5::synapse0x2ebb5e0() {
   return (neuron0x2eaddf0()*-0.0515514);
}

double NNfunction_NG_5::synapse0x2ebb620() {
   return (neuron0x2eae130()*-0.528058);
}

double NNfunction_NG_5::synapse0x2ebb660() {
   return (neuron0x2eae470()*0.585118);
}

double NNfunction_NG_5::synapse0x2ebb6a0() {
   return (neuron0x2eae7b0()*0.104409);
}

double NNfunction_NG_5::synapse0x2ebb6e0() {
   return (neuron0x2eaeaf0()*0.0852616);
}

double NNfunction_NG_5::synapse0x2ebb720() {
   return (neuron0x2eaee30()*-0.400826);
}

double NNfunction_NG_5::synapse0x2ebb760() {
   return (neuron0x2eaf170()*0.151602);
}

double NNfunction_NG_5::synapse0x2ebb7a0() {
   return (neuron0x2eaf4b0()*0.150195);
}

double NNfunction_NG_5::synapse0x2ebb7e0() {
   return (neuron0x2eaf7f0()*-0.0802941);
}

double NNfunction_NG_5::synapse0x2ebb820() {
   return (neuron0x2eafb30()*-0.445069);
}

double NNfunction_NG_5::synapse0x2ebb860() {
   return (neuron0x2eafe70()*0.138396);
}

double NNfunction_NG_5::synapse0x2ebb8a0() {
   return (neuron0x2eb01b0()*0.39905);
}

double NNfunction_NG_5::synapse0x2ebb8e0() {
   return (neuron0x2eb04f0()*0.207261);
}

double NNfunction_NG_5::synapse0x2ebb920() {
   return (neuron0x2eb0830()*0.12433);
}

double NNfunction_NG_5::synapse0x2ebb960() {
   return (neuron0x2eb0b70()*-0.155494);
}

double NNfunction_NG_5::synapse0x2ebb3f0() {
   return (neuron0x2eb0eb0()*0.128292);
}

double NNfunction_NG_5::synapse0x2ebb430() {
   return (neuron0x2eb1410()*0.29808);
}

double NNfunction_NG_5::synapse0x2ebbab0() {
   return (neuron0x2eb1630()*0.317675);
}

double NNfunction_NG_5::synapse0x2ebbaf0() {
   return (neuron0x2eb1970()*0.52362);
}

double NNfunction_NG_5::synapse0x2ebbb30() {
   return (neuron0x2eb1cb0()*-0.286077);
}

double NNfunction_NG_5::synapse0x2ebbb70() {
   return (neuron0x2eb1ff0()*0.138977);
}

double NNfunction_NG_5::synapse0x2ebbbb0() {
   return (neuron0x2eb2330()*0.294709);
}

double NNfunction_NG_5::synapse0x2ebbbf0() {
   return (neuron0x2eb2670()*0.871437);
}

double NNfunction_NG_5::synapse0x2ebbf70() {
   return (neuron0x2eadab0()*0.0122427);
}

double NNfunction_NG_5::synapse0x2ebbfb0() {
   return (neuron0x2eaddf0()*0.000491981);
}

double NNfunction_NG_5::synapse0x2ebbff0() {
   return (neuron0x2eae130()*-3.03601);
}

double NNfunction_NG_5::synapse0x2ebc030() {
   return (neuron0x2eae470()*0.0727541);
}

double NNfunction_NG_5::synapse0x2ebc070() {
   return (neuron0x2eae7b0()*0.00200401);
}

double NNfunction_NG_5::synapse0x2ebc0b0() {
   return (neuron0x2eaeaf0()*0.00269237);
}

double NNfunction_NG_5::synapse0x2ebc0f0() {
   return (neuron0x2eaee30()*0.00154524);
}

double NNfunction_NG_5::synapse0x2ebc130() {
   return (neuron0x2eaf170()*0.00447661);
}

double NNfunction_NG_5::synapse0x2ebc170() {
   return (neuron0x2eaf4b0()*0.00153251);
}

double NNfunction_NG_5::synapse0x2ebc1b0() {
   return (neuron0x2eaf7f0()*-0.00567397);
}

double NNfunction_NG_5::synapse0x2ebc1f0() {
   return (neuron0x2eafb30()*-0.00245276);
}

double NNfunction_NG_5::synapse0x2ebc230() {
   return (neuron0x2eafe70()*-0.0645503);
}

double NNfunction_NG_5::synapse0x2ebc270() {
   return (neuron0x2eb01b0()*0.0475561);
}

double NNfunction_NG_5::synapse0x2ebc2b0() {
   return (neuron0x2eb04f0()*-0.016318);
}

double NNfunction_NG_5::synapse0x2ebc2f0() {
   return (neuron0x2eb0830()*0.0359398);
}

double NNfunction_NG_5::synapse0x2ebc330() {
   return (neuron0x2eb0b70()*0.0238432);
}

double NNfunction_NG_5::synapse0x2ebbdc0() {
   return (neuron0x2eb0eb0()*-0.013347);
}

double NNfunction_NG_5::synapse0x2ebbe00() {
   return (neuron0x2eb1410()*0.0361161);
}

double NNfunction_NG_5::synapse0x2ebc480() {
   return (neuron0x2eb1630()*0.0105678);
}

double NNfunction_NG_5::synapse0x2ebc4c0() {
   return (neuron0x2eb1970()*-0.0153409);
}

double NNfunction_NG_5::synapse0x2ebc500() {
   return (neuron0x2eb1cb0()*-0.0144192);
}

double NNfunction_NG_5::synapse0x2ebc540() {
   return (neuron0x2eb1ff0()*-0.00216358);
}

double NNfunction_NG_5::synapse0x2ebc580() {
   return (neuron0x2eb2330()*0.00398214);
}

double NNfunction_NG_5::synapse0x2ebc5c0() {
   return (neuron0x2eb2670()*0.0454646);
}

double NNfunction_NG_5::synapse0x2ebc940() {
   return (neuron0x2eadab0()*0.0582078);
}

double NNfunction_NG_5::synapse0x2eadcd0() {
   return (neuron0x2eaddf0()*0.235611);
}

double NNfunction_NG_5::synapse0x2eadd10() {
   return (neuron0x2eae130()*0.652056);
}

double NNfunction_NG_5::synapse0x2eae010() {
   return (neuron0x2eae470()*0.0967415);
}

double NNfunction_NG_5::synapse0x2eae050() {
   return (neuron0x2eae7b0()*-0.0366544);
}

double NNfunction_NG_5::synapse0x2eae350() {
   return (neuron0x2eaeaf0()*0.119515);
}

double NNfunction_NG_5::synapse0x2eae390() {
   return (neuron0x2eaee30()*-0.186579);
}

double NNfunction_NG_5::synapse0x2eae690() {
   return (neuron0x2eaf170()*0.147737);
}

double NNfunction_NG_5::synapse0x2eae6d0() {
   return (neuron0x2eaf4b0()*-0.296177);
}

double NNfunction_NG_5::synapse0x2eae9d0() {
   return (neuron0x2eaf7f0()*-0.0651987);
}

double NNfunction_NG_5::synapse0x2eaea10() {
   return (neuron0x2eafb30()*-0.146721);
}

double NNfunction_NG_5::synapse0x2eaed10() {
   return (neuron0x2eafe70()*0.481123);
}

double NNfunction_NG_5::synapse0x2eaed50() {
   return (neuron0x2eb01b0()*0.43667);
}

double NNfunction_NG_5::synapse0x2eaf050() {
   return (neuron0x2eb04f0()*-0.288453);
}

double NNfunction_NG_5::synapse0x2eaf090() {
   return (neuron0x2eb0830()*-0.0102816);
}

double NNfunction_NG_5::synapse0x2eaf390() {
   return (neuron0x2eb0b70()*-0.00616554);
}

double NNfunction_NG_5::synapse0x2eaf3d0() {
   return (neuron0x2eb0eb0()*-0.00138395);
}

double NNfunction_NG_5::synapse0x2eaf6d0() {
   return (neuron0x2eb1410()*0.243806);
}

double NNfunction_NG_5::synapse0x2eaf710() {
   return (neuron0x2eb1630()*-0.24418);
}

double NNfunction_NG_5::synapse0x2eafa10() {
   return (neuron0x2eb1970()*-0.117141);
}

double NNfunction_NG_5::synapse0x2eafa50() {
   return (neuron0x2eb1cb0()*0.234023);
}

double NNfunction_NG_5::synapse0x2eafd50() {
   return (neuron0x2eb1ff0()*0.424283);
}

double NNfunction_NG_5::synapse0x2eafd90() {
   return (neuron0x2eb2330()*0.222255);
}

double NNfunction_NG_5::synapse0x2eb0090() {
   return (neuron0x2eb2670()*0.0725532);
}

double NNfunction_NG_5::synapse0x2eb00d0() {
   return (neuron0x2eadab0()*-0.0623694);
}

double NNfunction_NG_5::synapse0x2eb0d90() {
   return (neuron0x2eaddf0()*0.0309854);
}

double NNfunction_NG_5::synapse0x2eb0dd0() {
   return (neuron0x2eae130()*-1.69699);
}

double NNfunction_NG_5::synapse0x2ebc790() {
   return (neuron0x2eae470()*0.00303895);
}

double NNfunction_NG_5::synapse0x2ebc7d0() {
   return (neuron0x2eae7b0()*0.00965162);
}

double NNfunction_NG_5::synapse0x2eb10d0() {
   return (neuron0x2eaeaf0()*0.0227227);
}

double NNfunction_NG_5::synapse0x2eb1110() {
   return (neuron0x2eaee30()*-0.00883216);
}

double NNfunction_NG_5::synapse0x2c5f330() {
   return (neuron0x2eaf170()*0.00301083);
}

double NNfunction_NG_5::synapse0x2c5f370() {
   return (neuron0x2eaf4b0()*0.0155792);
}

double NNfunction_NG_5::synapse0x2eb1850() {
   return (neuron0x2eaf7f0()*0.00183347);
}

double NNfunction_NG_5::synapse0x2eb1890() {
   return (neuron0x2eafb30()*0.0163747);
}

double NNfunction_NG_5::synapse0x2eb1b90() {
   return (neuron0x2eafe70()*0.0563157);
}

double NNfunction_NG_5::synapse0x2eb1bd0() {
   return (neuron0x2eb01b0()*0.0169204);
}

double NNfunction_NG_5::synapse0x2eb1ed0() {
   return (neuron0x2eb04f0()*0.0116723);
}

double NNfunction_NG_5::synapse0x2eb1f10() {
   return (neuron0x2eb0830()*0.0285616);
}

double NNfunction_NG_5::synapse0x2eb2210() {
   return (neuron0x2eb0b70()*0.0239147);
}

double NNfunction_NG_5::synapse0x2eb2250() {
   return (neuron0x2eb0eb0()*0.019178);
}

double NNfunction_NG_5::synapse0x2eb2550() {
   return (neuron0x2eb1410()*0.00896752);
}

double NNfunction_NG_5::synapse0x2eb2590() {
   return (neuron0x2eb1630()*0.00885979);
}

double NNfunction_NG_5::synapse0x2eb2890() {
   return (neuron0x2eb1970()*0.00909687);
}

double NNfunction_NG_5::synapse0x2eb28d0() {
   return (neuron0x2eb1cb0()*-0.00913637);
}

double NNfunction_NG_5::synapse0x2eb03d0() {
   return (neuron0x2eb1ff0()*0.0219161);
}

double NNfunction_NG_5::synapse0x2eb0410() {
   return (neuron0x2eb2330()*-0.0102164);
}

double NNfunction_NG_5::synapse0x2ebe6b0() {
   return (neuron0x2eb2670()*-6.1181);
}

double NNfunction_NG_5::synapse0x2ebea30() {
   return (neuron0x2eadab0()*-0.0339211);
}

double NNfunction_NG_5::synapse0x2ebea70() {
   return (neuron0x2eaddf0()*0.00620973);
}

double NNfunction_NG_5::synapse0x2ebeab0() {
   return (neuron0x2eae130()*0.0506424);
}

double NNfunction_NG_5::synapse0x2ebeaf0() {
   return (neuron0x2eae470()*-0.736273);
}

double NNfunction_NG_5::synapse0x2ebeb30() {
   return (neuron0x2eae7b0()*-0.0275884);
}

double NNfunction_NG_5::synapse0x2ebeb70() {
   return (neuron0x2eaeaf0()*0.0200686);
}

double NNfunction_NG_5::synapse0x2ebebb0() {
   return (neuron0x2eaee30()*-0.0318286);
}

double NNfunction_NG_5::synapse0x2ebebf0() {
   return (neuron0x2eaf170()*0.0250785);
}

double NNfunction_NG_5::synapse0x2ebec30() {
   return (neuron0x2eaf4b0()*-0.0183633);
}

double NNfunction_NG_5::synapse0x2ebec70() {
   return (neuron0x2eaf7f0()*-0.125493);
}

double NNfunction_NG_5::synapse0x2ebecb0() {
   return (neuron0x2eafb30()*0.0246772);
}

double NNfunction_NG_5::synapse0x2ebecf0() {
   return (neuron0x2eafe70()*-5.41697);
}

double NNfunction_NG_5::synapse0x2ebed30() {
   return (neuron0x2eb01b0()*0.236877);
}

double NNfunction_NG_5::synapse0x2ebed70() {
   return (neuron0x2eb04f0()*-0.0910662);
}

double NNfunction_NG_5::synapse0x2ebedb0() {
   return (neuron0x2eb0830()*-0.0207586);
}

double NNfunction_NG_5::synapse0x2ebedf0() {
   return (neuron0x2eb0b70()*-0.0894073);
}

double NNfunction_NG_5::synapse0x2ebe880() {
   return (neuron0x2eb0eb0()*-0.0201433);
}

double NNfunction_NG_5::synapse0x2ebe8c0() {
   return (neuron0x2eb1410()*-0.123486);
}

double NNfunction_NG_5::synapse0x2ebef40() {
   return (neuron0x2eb1630()*-0.105045);
}

double NNfunction_NG_5::synapse0x2ebef80() {
   return (neuron0x2eb1970()*-0.0249827);
}

double NNfunction_NG_5::synapse0x2ebefc0() {
   return (neuron0x2eb1cb0()*0.0765676);
}

double NNfunction_NG_5::synapse0x2ebf000() {
   return (neuron0x2eb1ff0()*0.0282004);
}

double NNfunction_NG_5::synapse0x2ebf040() {
   return (neuron0x2eb2330()*-0.0270487);
}

double NNfunction_NG_5::synapse0x2ebf080() {
   return (neuron0x2eb2670()*-0.0431906);
}

double NNfunction_NG_5::synapse0x2ebf400() {
   return (neuron0x2eadab0()*-0.0119051);
}

double NNfunction_NG_5::synapse0x2ebf440() {
   return (neuron0x2eaddf0()*0.00365467);
}

double NNfunction_NG_5::synapse0x2ebf480() {
   return (neuron0x2eae130()*-0.00362936);
}

double NNfunction_NG_5::synapse0x2ebf4c0() {
   return (neuron0x2eae470()*12.5906);
}

double NNfunction_NG_5::synapse0x2ebf500() {
   return (neuron0x2eae7b0()*-0.00653356);
}

double NNfunction_NG_5::synapse0x2ebf540() {
   return (neuron0x2eaeaf0()*0.00487947);
}

double NNfunction_NG_5::synapse0x2ebf580() {
   return (neuron0x2eaee30()*-0.00109463);
}

double NNfunction_NG_5::synapse0x2ebf5c0() {
   return (neuron0x2eaf170()*-0.00859437);
}

double NNfunction_NG_5::synapse0x2ebf600() {
   return (neuron0x2eaf4b0()*0.00858078);
}

double NNfunction_NG_5::synapse0x2ebf640() {
   return (neuron0x2eaf7f0()*0.00457735);
}

double NNfunction_NG_5::synapse0x2ebf680() {
   return (neuron0x2eafb30()*-0.00264054);
}

double NNfunction_NG_5::synapse0x2ebf6c0() {
   return (neuron0x2eafe70()*0.0903654);
}

double NNfunction_NG_5::synapse0x2ebf700() {
   return (neuron0x2eb01b0()*-0.0699839);
}

double NNfunction_NG_5::synapse0x2ebf740() {
   return (neuron0x2eb04f0()*0.00381035);
}

double NNfunction_NG_5::synapse0x2ebf780() {
   return (neuron0x2eb0830()*-0.0355409);
}

double NNfunction_NG_5::synapse0x2ebf7c0() {
   return (neuron0x2eb0b70()*-0.0124085);
}

double NNfunction_NG_5::synapse0x2ebf250() {
   return (neuron0x2eb0eb0()*0.00369373);
}

double NNfunction_NG_5::synapse0x2ebf290() {
   return (neuron0x2eb1410()*0.00080032);
}

double NNfunction_NG_5::synapse0x2ebf910() {
   return (neuron0x2eb1630()*-0.0326214);
}

double NNfunction_NG_5::synapse0x2ebf950() {
   return (neuron0x2eb1970()*-0.013431);
}

double NNfunction_NG_5::synapse0x2ebf990() {
   return (neuron0x2eb1cb0()*-0.0137501);
}

double NNfunction_NG_5::synapse0x2ebf9d0() {
   return (neuron0x2eb1ff0()*-0.0306632);
}

double NNfunction_NG_5::synapse0x2ebfa10() {
   return (neuron0x2eb2330()*-0.0016051);
}

double NNfunction_NG_5::synapse0x2ebfa50() {
   return (neuron0x2eb2670()*-0.0179385);
}

double NNfunction_NG_5::synapse0x2ebfdd0() {
   return (neuron0x2eadab0()*-0.0200558);
}

double NNfunction_NG_5::synapse0x2ebfe10() {
   return (neuron0x2eaddf0()*0.00786905);
}

double NNfunction_NG_5::synapse0x2ebfe50() {
   return (neuron0x2eae130()*0.107404);
}

double NNfunction_NG_5::synapse0x2ebfe90() {
   return (neuron0x2eae470()*1.65354);
}

double NNfunction_NG_5::synapse0x2ebfed0() {
   return (neuron0x2eae7b0()*0.0080073);
}

double NNfunction_NG_5::synapse0x2ebff10() {
   return (neuron0x2eaeaf0()*0.00402566);
}

double NNfunction_NG_5::synapse0x2ebff50() {
   return (neuron0x2eaee30()*-0.00370719);
}

double NNfunction_NG_5::synapse0x2ebff90() {
   return (neuron0x2eaf170()*0.00703946);
}

double NNfunction_NG_5::synapse0x2ebffd0() {
   return (neuron0x2eaf4b0()*0.00492532);
}

double NNfunction_NG_5::synapse0x2ec0010() {
   return (neuron0x2eaf7f0()*0.0187412);
}

double NNfunction_NG_5::synapse0x2ec0050() {
   return (neuron0x2eafb30()*-0.00673276);
}

double NNfunction_NG_5::synapse0x2ec0090() {
   return (neuron0x2eafe70()*0.0414076);
}

double NNfunction_NG_5::synapse0x2ec00d0() {
   return (neuron0x2eb01b0()*-0.0261719);
}

double NNfunction_NG_5::synapse0x2ec0110() {
   return (neuron0x2eb04f0()*-0.0109119);
}

double NNfunction_NG_5::synapse0x2ec0150() {
   return (neuron0x2eb0830()*-0.0155617);
}

double NNfunction_NG_5::synapse0x2ec0190() {
   return (neuron0x2eb0b70()*0.0014055);
}

double NNfunction_NG_5::synapse0x2ebfc20() {
   return (neuron0x2eb0eb0()*-0.0101106);
}

double NNfunction_NG_5::synapse0x2ebfc60() {
   return (neuron0x2eb1410()*-0.0052053);
}

double NNfunction_NG_5::synapse0x2ec02e0() {
   return (neuron0x2eb1630()*-0.019547);
}

double NNfunction_NG_5::synapse0x2ec0320() {
   return (neuron0x2eb1970()*0.00256125);
}

double NNfunction_NG_5::synapse0x2ec0360() {
   return (neuron0x2eb1cb0()*0.0110213);
}

double NNfunction_NG_5::synapse0x2ec03a0() {
   return (neuron0x2eb1ff0()*0.00365348);
}

double NNfunction_NG_5::synapse0x2ec03e0() {
   return (neuron0x2eb2330()*-0.0083152);
}

double NNfunction_NG_5::synapse0x2ec0420() {
   return (neuron0x2eb2670()*0.0153918);
}

double NNfunction_NG_5::synapse0x2ec07a0() {
   return (neuron0x2eadab0()*0.234324);
}

double NNfunction_NG_5::synapse0x2ec07e0() {
   return (neuron0x2eaddf0()*-0.0938562);
}

double NNfunction_NG_5::synapse0x2ec0820() {
   return (neuron0x2eae130()*-2.97063);
}

double NNfunction_NG_5::synapse0x2ec0860() {
   return (neuron0x2eae470()*1.04021);
}

double NNfunction_NG_5::synapse0x2ec08a0() {
   return (neuron0x2eae7b0()*-0.0648234);
}

double NNfunction_NG_5::synapse0x2ec08e0() {
   return (neuron0x2eaeaf0()*-0.0253129);
}

double NNfunction_NG_5::synapse0x2ec0920() {
   return (neuron0x2eaee30()*0.0726454);
}

double NNfunction_NG_5::synapse0x2ec0960() {
   return (neuron0x2eaf170()*-0.109818);
}

double NNfunction_NG_5::synapse0x2ec09a0() {
   return (neuron0x2eaf4b0()*0.0795767);
}

double NNfunction_NG_5::synapse0x2ec09e0() {
   return (neuron0x2eaf7f0()*-0.0464344);
}

double NNfunction_NG_5::synapse0x2ec0a20() {
   return (neuron0x2eafb30()*0.0297362);
}

double NNfunction_NG_5::synapse0x2ec0a60() {
   return (neuron0x2eafe70()*-0.891205);
}

double NNfunction_NG_5::synapse0x2ec0aa0() {
   return (neuron0x2eb01b0()*0.0649732);
}

double NNfunction_NG_5::synapse0x2ec0ae0() {
   return (neuron0x2eb04f0()*0.037034);
}

double NNfunction_NG_5::synapse0x2ec0b20() {
   return (neuron0x2eb0830()*-0.0773524);
}

double NNfunction_NG_5::synapse0x2ec0b60() {
   return (neuron0x2eb0b70()*0.119311);
}

double NNfunction_NG_5::synapse0x2ec05f0() {
   return (neuron0x2eb0eb0()*0.0405131);
}

double NNfunction_NG_5::synapse0x2ec0630() {
   return (neuron0x2eb1410()*0.00480649);
}

double NNfunction_NG_5::synapse0x2ec0cb0() {
   return (neuron0x2eb1630()*-0.0788532);
}

double NNfunction_NG_5::synapse0x2ec0cf0() {
   return (neuron0x2eb1970()*-0.0466746);
}

double NNfunction_NG_5::synapse0x2ec0d30() {
   return (neuron0x2eb1cb0()*0.040872);
}

double NNfunction_NG_5::synapse0x2ec0d70() {
   return (neuron0x2eb1ff0()*0.0733327);
}

double NNfunction_NG_5::synapse0x2ec0db0() {
   return (neuron0x2eb2330()*-0.0807382);
}

double NNfunction_NG_5::synapse0x2ec0df0() {
   return (neuron0x2eb2670()*-0.390243);
}

double NNfunction_NG_5::synapse0x2ec1170() {
   return (neuron0x2eadab0()*-0.29688);
}

double NNfunction_NG_5::synapse0x2ec11b0() {
   return (neuron0x2eaddf0()*0.144712);
}

double NNfunction_NG_5::synapse0x2ec11f0() {
   return (neuron0x2eae130()*-1.67029);
}

double NNfunction_NG_5::synapse0x2ec1230() {
   return (neuron0x2eae470()*0.0730882);
}

double NNfunction_NG_5::synapse0x2ec1270() {
   return (neuron0x2eae7b0()*-0.068352);
}

double NNfunction_NG_5::synapse0x2ec12b0() {
   return (neuron0x2eaeaf0()*-0.00358709);
}

double NNfunction_NG_5::synapse0x2ec12f0() {
   return (neuron0x2eaee30()*0.139482);
}

double NNfunction_NG_5::synapse0x2ec1330() {
   return (neuron0x2eaf170()*-0.165059);
}

double NNfunction_NG_5::synapse0x2ec1370() {
   return (neuron0x2eaf4b0()*0.114987);
}

double NNfunction_NG_5::synapse0x2eb9530() {
   return (neuron0x2eaf7f0()*-0.11959);
}

double NNfunction_NG_5::synapse0x2eb9570() {
   return (neuron0x2eafb30()*0.00261361);
}

double NNfunction_NG_5::synapse0x2eb95b0() {
   return (neuron0x2eafe70()*-0.149001);
}

double NNfunction_NG_5::synapse0x2eb95f0() {
   return (neuron0x2eb01b0()*0.101954);
}

double NNfunction_NG_5::synapse0x2eb9630() {
   return (neuron0x2eb04f0()*-0.852329);
}

double NNfunction_NG_5::synapse0x2eb9670() {
   return (neuron0x2eb0830()*0.0429472);
}

double NNfunction_NG_5::synapse0x2eb96b0() {
   return (neuron0x2eb0b70()*-0.0402926);
}

double NNfunction_NG_5::synapse0x2ec0fc0() {
   return (neuron0x2eb0eb0()*0.103975);
}

double NNfunction_NG_5::synapse0x2ec1000() {
   return (neuron0x2eb1410()*0.0282148);
}

double NNfunction_NG_5::synapse0x2eb9800() {
   return (neuron0x2eb1630()*-0.21336);
}

double NNfunction_NG_5::synapse0x2eb9840() {
   return (neuron0x2eb1970()*-0.354717);
}

double NNfunction_NG_5::synapse0x2eb9880() {
   return (neuron0x2eb1cb0()*0.240303);
}

double NNfunction_NG_5::synapse0x2eb98c0() {
   return (neuron0x2eb1ff0()*-0.0786315);
}

double NNfunction_NG_5::synapse0x2eb9900() {
   return (neuron0x2eb2330()*0.257438);
}

double NNfunction_NG_5::synapse0x2eb9940() {
   return (neuron0x2eb2670()*-0.182166);
}

double NNfunction_NG_5::synapse0x2eb9cc0() {
   return (neuron0x2eadab0()*-0.0759814);
}

double NNfunction_NG_5::synapse0x2eb9d00() {
   return (neuron0x2eaddf0()*-0.00834628);
}

double NNfunction_NG_5::synapse0x2eb9d40() {
   return (neuron0x2eae130()*-3.52755);
}

double NNfunction_NG_5::synapse0x2eb9d80() {
   return (neuron0x2eae470()*0.00432087);
}

double NNfunction_NG_5::synapse0x2eb9dc0() {
   return (neuron0x2eae7b0()*-0.0194873);
}

double NNfunction_NG_5::synapse0x2eb9e00() {
   return (neuron0x2eaeaf0()*-0.0226403);
}

double NNfunction_NG_5::synapse0x2eb9e40() {
   return (neuron0x2eaee30()*0.00795444);
}

double NNfunction_NG_5::synapse0x2eb9e80() {
   return (neuron0x2eaf170()*-0.00242938);
}

double NNfunction_NG_5::synapse0x2eb9ec0() {
   return (neuron0x2eaf4b0()*-0.00528946);
}

double NNfunction_NG_5::synapse0x2eb9f00() {
   return (neuron0x2eaf7f0()*-0.0129068);
}

double NNfunction_NG_5::synapse0x2eb9f40() {
   return (neuron0x2eafb30()*-0.0180517);
}

double NNfunction_NG_5::synapse0x2eb9f80() {
   return (neuron0x2eafe70()*0.105215);
}

double NNfunction_NG_5::synapse0x2eb9fc0() {
   return (neuron0x2eb01b0()*-0.00225999);
}

double NNfunction_NG_5::synapse0x2eba000() {
   return (neuron0x2eb04f0()*-0.0104464);
}

double NNfunction_NG_5::synapse0x2eba040() {
   return (neuron0x2eb0830()*-0.0045193);
}

double NNfunction_NG_5::synapse0x2eba080() {
   return (neuron0x2eb0b70()*-0.00671473);
}

double NNfunction_NG_5::synapse0x2eb9b10() {
   return (neuron0x2eb0eb0()*-0.0151153);
}

double NNfunction_NG_5::synapse0x2eb9b50() {
   return (neuron0x2eb1410()*0.000578544);
}

double NNfunction_NG_5::synapse0x2eba1d0() {
   return (neuron0x2eb1630()*-0.00758471);
}

double NNfunction_NG_5::synapse0x2eba210() {
   return (neuron0x2eb1970()*0.00113748);
}

double NNfunction_NG_5::synapse0x2eba250() {
   return (neuron0x2eb1cb0()*0.00419934);
}

double NNfunction_NG_5::synapse0x2eba290() {
   return (neuron0x2eb1ff0()*-0.00140253);
}

double NNfunction_NG_5::synapse0x2eba2d0() {
   return (neuron0x2eb2330()*-0.00324222);
}

double NNfunction_NG_5::synapse0x2eba310() {
   return (neuron0x2eb2670()*6.1645);
}

double NNfunction_NG_5::synapse0x2eba4e0() {
   return (neuron0x2eadab0()*-0.00186836);
}

double NNfunction_NG_5::synapse0x2ec3570() {
   return (neuron0x2eaddf0()*-0.0189243);
}

double NNfunction_NG_5::synapse0x2ec35b0() {
   return (neuron0x2eae130()*1.23145);
}

double NNfunction_NG_5::synapse0x2ec35f0() {
   return (neuron0x2eae470()*-1.51471);
}

double NNfunction_NG_5::synapse0x2ec3630() {
   return (neuron0x2eae7b0()*0.00640331);
}

double NNfunction_NG_5::synapse0x2ec3670() {
   return (neuron0x2eaeaf0()*0.0158424);
}

double NNfunction_NG_5::synapse0x2ec36b0() {
   return (neuron0x2eaee30()*-0.0308666);
}

double NNfunction_NG_5::synapse0x2ec36f0() {
   return (neuron0x2eaf170()*0.0312205);
}

double NNfunction_NG_5::synapse0x2ec3730() {
   return (neuron0x2eaf4b0()*-0.00755476);
}

double NNfunction_NG_5::synapse0x2ec3770() {
   return (neuron0x2eaf7f0()*-0.0369181);
}

double NNfunction_NG_5::synapse0x2ec37b0() {
   return (neuron0x2eafb30()*0.00427721);
}

double NNfunction_NG_5::synapse0x2ec37f0() {
   return (neuron0x2eafe70()*0.380845);
}

double NNfunction_NG_5::synapse0x2ec3830() {
   return (neuron0x2eb01b0()*-0.0516504);
}

double NNfunction_NG_5::synapse0x2ec3870() {
   return (neuron0x2eb04f0()*0.0205498);
}

double NNfunction_NG_5::synapse0x2ec38b0() {
   return (neuron0x2eb0830()*0.0651534);
}

double NNfunction_NG_5::synapse0x2ec38f0() {
   return (neuron0x2eb0b70()*-0.0055522);
}

double NNfunction_NG_5::synapse0x2ec33c0() {
   return (neuron0x2eb0eb0()*-0.0197837);
}

double NNfunction_NG_5::synapse0x2ec3400() {
   return (neuron0x2eb1410()*-0.0119268);
}

double NNfunction_NG_5::synapse0x2ec3a40() {
   return (neuron0x2eb1630()*0.049769);
}

double NNfunction_NG_5::synapse0x2ec3a80() {
   return (neuron0x2eb1970()*-0.0383633);
}

double NNfunction_NG_5::synapse0x2ec3ac0() {
   return (neuron0x2eb1cb0()*-0.045573);
}

double NNfunction_NG_5::synapse0x2ec3b00() {
   return (neuron0x2eb1ff0()*-0.035591);
}

double NNfunction_NG_5::synapse0x2ec3b40() {
   return (neuron0x2eb2330()*0.0062882);
}

double NNfunction_NG_5::synapse0x2ec3b80() {
   return (neuron0x2eb2670()*-0.0805735);
}

double NNfunction_NG_5::synapse0x2ec3f00() {
   return (neuron0x2eadab0()*-0.038104);
}

double NNfunction_NG_5::synapse0x2ec3f40() {
   return (neuron0x2eaddf0()*-0.0117051);
}

double NNfunction_NG_5::synapse0x2ec3f80() {
   return (neuron0x2eae130()*4.69109);
}

double NNfunction_NG_5::synapse0x2ec3fc0() {
   return (neuron0x2eae470()*0.00994912);
}

double NNfunction_NG_5::synapse0x2ec4000() {
   return (neuron0x2eae7b0()*-0.0130989);
}

double NNfunction_NG_5::synapse0x2ec4040() {
   return (neuron0x2eaeaf0()*0.00433088);
}

double NNfunction_NG_5::synapse0x2ec4080() {
   return (neuron0x2eaee30()*0.0153498);
}

double NNfunction_NG_5::synapse0x2ec40c0() {
   return (neuron0x2eaf170()*0.00344673);
}

double NNfunction_NG_5::synapse0x2ec4100() {
   return (neuron0x2eaf4b0()*-0.00763638);
}

double NNfunction_NG_5::synapse0x2ec4140() {
   return (neuron0x2eaf7f0()*0.0123364);
}

double NNfunction_NG_5::synapse0x2ec4180() {
   return (neuron0x2eafb30()*-0.0176075);
}

double NNfunction_NG_5::synapse0x2ec41c0() {
   return (neuron0x2eafe70()*-0.0268017);
}

double NNfunction_NG_5::synapse0x2ec4200() {
   return (neuron0x2eb01b0()*0.0124606);
}

double NNfunction_NG_5::synapse0x2ec4240() {
   return (neuron0x2eb04f0()*-0.00436017);
}

double NNfunction_NG_5::synapse0x2ec4280() {
   return (neuron0x2eb0830()*-0.00929916);
}

double NNfunction_NG_5::synapse0x2ec42c0() {
   return (neuron0x2eb0b70()*-0.00144219);
}

double NNfunction_NG_5::synapse0x2ec3d50() {
   return (neuron0x2eb0eb0()*-0.00865934);
}

double NNfunction_NG_5::synapse0x2ec3d90() {
   return (neuron0x2eb1410()*-0.00888467);
}

double NNfunction_NG_5::synapse0x2ec4410() {
   return (neuron0x2eb1630()*-0.010191);
}

double NNfunction_NG_5::synapse0x2ec4450() {
   return (neuron0x2eb1970()*0.00024061);
}

double NNfunction_NG_5::synapse0x2ec4490() {
   return (neuron0x2eb1cb0()*0.0110185);
}

double NNfunction_NG_5::synapse0x2ec44d0() {
   return (neuron0x2eb1ff0()*-0.00449185);
}

double NNfunction_NG_5::synapse0x2ec4510() {
   return (neuron0x2eb2330()*0.00505933);
}

double NNfunction_NG_5::synapse0x2ec4550() {
   return (neuron0x2eb2670()*6.02641);
}

double NNfunction_NG_5::synapse0x2ec48d0() {
   return (neuron0x2eadab0()*0.117728);
}

double NNfunction_NG_5::synapse0x2ec4910() {
   return (neuron0x2eaddf0()*-0.0330101);
}

double NNfunction_NG_5::synapse0x2ec4950() {
   return (neuron0x2eae130()*0.164492);
}

double NNfunction_NG_5::synapse0x2ec4990() {
   return (neuron0x2eae470()*0.0362606);
}

double NNfunction_NG_5::synapse0x2ec49d0() {
   return (neuron0x2eae7b0()*-0.00256484);
}

double NNfunction_NG_5::synapse0x2ec4a10() {
   return (neuron0x2eaeaf0()*-0.0338869);
}

double NNfunction_NG_5::synapse0x2ec4a50() {
   return (neuron0x2eaee30()*-0.0281723);
}

double NNfunction_NG_5::synapse0x2ec4a90() {
   return (neuron0x2eaf170()*0.105828);
}

double NNfunction_NG_5::synapse0x2ec4ad0() {
   return (neuron0x2eaf4b0()*-0.0154575);
}

double NNfunction_NG_5::synapse0x2ec4b10() {
   return (neuron0x2eaf7f0()*0.110814);
}

double NNfunction_NG_5::synapse0x2ec4b50() {
   return (neuron0x2eafb30()*-0.0536489);
}

double NNfunction_NG_5::synapse0x2ec4b90() {
   return (neuron0x2eafe70()*-0.51739);
}

double NNfunction_NG_5::synapse0x2ec4bd0() {
   return (neuron0x2eb01b0()*-2.45826);
}

double NNfunction_NG_5::synapse0x2ec4c10() {
   return (neuron0x2eb04f0()*-0.0610642);
}

double NNfunction_NG_5::synapse0x2ec4c50() {
   return (neuron0x2eb0830()*0.207095);
}

double NNfunction_NG_5::synapse0x2ec4c90() {
   return (neuron0x2eb0b70()*0.0267324);
}

double NNfunction_NG_5::synapse0x2ec4720() {
   return (neuron0x2eb0eb0()*-0.150184);
}

double NNfunction_NG_5::synapse0x2ec4760() {
   return (neuron0x2eb1410()*-0.00149256);
}

double NNfunction_NG_5::synapse0x2ec4de0() {
   return (neuron0x2eb1630()*-0.0336182);
}

double NNfunction_NG_5::synapse0x2ec4e20() {
   return (neuron0x2eb1970()*0.0181118);
}

double NNfunction_NG_5::synapse0x2ec4e60() {
   return (neuron0x2eb1cb0()*-0.0525861);
}

double NNfunction_NG_5::synapse0x2ec4ea0() {
   return (neuron0x2eb1ff0()*-0.0397124);
}

double NNfunction_NG_5::synapse0x2ec4ee0() {
   return (neuron0x2eb2330()*0.0470619);
}

double NNfunction_NG_5::synapse0x2ec4f20() {
   return (neuron0x2eb2670()*0.19878);
}

double NNfunction_NG_5::synapse0x2ec52a0() {
   return (neuron0x2eadab0()*0.476629);
}

double NNfunction_NG_5::synapse0x2ec52e0() {
   return (neuron0x2eaddf0()*-0.0513506);
}

double NNfunction_NG_5::synapse0x2ec5320() {
   return (neuron0x2eae130()*-0.0167882);
}

double NNfunction_NG_5::synapse0x2ec5360() {
   return (neuron0x2eae470()*0.310071);
}

double NNfunction_NG_5::synapse0x2ec53a0() {
   return (neuron0x2eae7b0()*-0.149577);
}

double NNfunction_NG_5::synapse0x2ec53e0() {
   return (neuron0x2eaeaf0()*-0.247231);
}

double NNfunction_NG_5::synapse0x2ec5420() {
   return (neuron0x2eaee30()*-0.00066489);
}

double NNfunction_NG_5::synapse0x2ec5460() {
   return (neuron0x2eaf170()*-0.0713805);
}

double NNfunction_NG_5::synapse0x2ec54a0() {
   return (neuron0x2eaf4b0()*0.364244);
}

double NNfunction_NG_5::synapse0x2ec54e0() {
   return (neuron0x2eaf7f0()*0.0695683);
}

double NNfunction_NG_5::synapse0x2ec5520() {
   return (neuron0x2eafb30()*0.678441);
}

double NNfunction_NG_5::synapse0x2ec5560() {
   return (neuron0x2eafe70()*-0.400881);
}

double NNfunction_NG_5::synapse0x2ec55a0() {
   return (neuron0x2eb01b0()*0.238351);
}

double NNfunction_NG_5::synapse0x2ec55e0() {
   return (neuron0x2eb04f0()*0.149772);
}

double NNfunction_NG_5::synapse0x2ec5620() {
   return (neuron0x2eb0830()*-0.582027);
}

double NNfunction_NG_5::synapse0x2ec5660() {
   return (neuron0x2eb0b70()*-0.181288);
}

double NNfunction_NG_5::synapse0x2ec50f0() {
   return (neuron0x2eb0eb0()*0.145999);
}

double NNfunction_NG_5::synapse0x2ec5130() {
   return (neuron0x2eb1410()*-0.390356);
}

double NNfunction_NG_5::synapse0x2ec57b0() {
   return (neuron0x2eb1630()*0.420706);
}

double NNfunction_NG_5::synapse0x2ec57f0() {
   return (neuron0x2eb1970()*-0.169258);
}

double NNfunction_NG_5::synapse0x2ec5830() {
   return (neuron0x2eb1cb0()*-0.252466);
}

double NNfunction_NG_5::synapse0x2ec5870() {
   return (neuron0x2eb1ff0()*0.245819);
}

double NNfunction_NG_5::synapse0x2ec58b0() {
   return (neuron0x2eb2330()*-0.0261512);
}

double NNfunction_NG_5::synapse0x2ec58f0() {
   return (neuron0x2eb2670()*0.150142);
}

double NNfunction_NG_5::synapse0x2ec5c70() {
   return (neuron0x2eadab0()*0.0347553);
}

double NNfunction_NG_5::synapse0x2ec5cb0() {
   return (neuron0x2eaddf0()*-0.00131589);
}

double NNfunction_NG_5::synapse0x2ec5cf0() {
   return (neuron0x2eae130()*1.07251);
}

double NNfunction_NG_5::synapse0x2ec5d30() {
   return (neuron0x2eae470()*-0.00907863);
}

double NNfunction_NG_5::synapse0x2ec5d70() {
   return (neuron0x2eae7b0()*-0.00609842);
}

double NNfunction_NG_5::synapse0x2ec5db0() {
   return (neuron0x2eaeaf0()*0.0102747);
}

double NNfunction_NG_5::synapse0x2ec5df0() {
   return (neuron0x2eaee30()*-0.00286515);
}

double NNfunction_NG_5::synapse0x2ec5e30() {
   return (neuron0x2eaf170()*-0.00670867);
}

double NNfunction_NG_5::synapse0x2ec5e70() {
   return (neuron0x2eaf4b0()*0.00268183);
}

double NNfunction_NG_5::synapse0x2ec5eb0() {
   return (neuron0x2eaf7f0()*-0.00134156);
}

double NNfunction_NG_5::synapse0x2ec5ef0() {
   return (neuron0x2eafb30()*-0.0312324);
}

double NNfunction_NG_5::synapse0x2ec5f30() {
   return (neuron0x2eafe70()*-0.0639308);
}

double NNfunction_NG_5::synapse0x2ec5f70() {
   return (neuron0x2eb01b0()*-0.0426965);
}

double NNfunction_NG_5::synapse0x2ec5fb0() {
   return (neuron0x2eb04f0()*0.00106142);
}

double NNfunction_NG_5::synapse0x2ec5ff0() {
   return (neuron0x2eb0830()*-0.00784746);
}

double NNfunction_NG_5::synapse0x2ec6030() {
   return (neuron0x2eb0b70()*0.00453179);
}

double NNfunction_NG_5::synapse0x2ec5ac0() {
   return (neuron0x2eb0eb0()*-0.0244459);
}

double NNfunction_NG_5::synapse0x2ec5b00() {
   return (neuron0x2eb1410()*-0.0262785);
}

double NNfunction_NG_5::synapse0x2ec6180() {
   return (neuron0x2eb1630()*-0.0278658);
}

double NNfunction_NG_5::synapse0x2ec61c0() {
   return (neuron0x2eb1970()*-0.00936339);
}

double NNfunction_NG_5::synapse0x2ec6200() {
   return (neuron0x2eb1cb0()*0.0217984);
}

double NNfunction_NG_5::synapse0x2ec6240() {
   return (neuron0x2eb1ff0()*0.00126813);
}

double NNfunction_NG_5::synapse0x2ec6280() {
   return (neuron0x2eb2330()*0.0142128);
}

double NNfunction_NG_5::synapse0x2ec62c0() {
   return (neuron0x2eb2670()*-6.45762);
}

double NNfunction_NG_5::synapse0x2ec6640() {
   return (neuron0x2eadab0()*-0.0949182);
}

double NNfunction_NG_5::synapse0x2ec6680() {
   return (neuron0x2eaddf0()*-0.00503575);
}

double NNfunction_NG_5::synapse0x2ec66c0() {
   return (neuron0x2eae130()*1.62515);
}

double NNfunction_NG_5::synapse0x2ec6700() {
   return (neuron0x2eae470()*-0.526502);
}

double NNfunction_NG_5::synapse0x2ec6740() {
   return (neuron0x2eae7b0()*0.126862);
}

double NNfunction_NG_5::synapse0x2ec6780() {
   return (neuron0x2eaeaf0()*-0.00886371);
}

double NNfunction_NG_5::synapse0x2ec67c0() {
   return (neuron0x2eaee30()*0.0548932);
}

double NNfunction_NG_5::synapse0x2ec6800() {
   return (neuron0x2eaf170()*0.05112);
}

double NNfunction_NG_5::synapse0x2ec6840() {
   return (neuron0x2eaf4b0()*-0.20851);
}

double NNfunction_NG_5::synapse0x2ec6880() {
   return (neuron0x2eaf7f0()*-0.121228);
}

double NNfunction_NG_5::synapse0x2ec68c0() {
   return (neuron0x2eafb30()*-0.000756475);
}

double NNfunction_NG_5::synapse0x2ec6900() {
   return (neuron0x2eafe70()*0.0863699);
}

double NNfunction_NG_5::synapse0x2ec6940() {
   return (neuron0x2eb01b0()*0.528049);
}

double NNfunction_NG_5::synapse0x2ec6980() {
   return (neuron0x2eb04f0()*-0.0719533);
}

double NNfunction_NG_5::synapse0x2ec69c0() {
   return (neuron0x2eb0830()*0.116503);
}

double NNfunction_NG_5::synapse0x2ec6a00() {
   return (neuron0x2eb0b70()*0.0932363);
}

double NNfunction_NG_5::synapse0x2ec6490() {
   return (neuron0x2eb0eb0()*0.169454);
}

double NNfunction_NG_5::synapse0x2ec64d0() {
   return (neuron0x2eb1410()*0.256088);
}

double NNfunction_NG_5::synapse0x2ec6b50() {
   return (neuron0x2eb1630()*-0.0722258);
}

double NNfunction_NG_5::synapse0x2ec6b90() {
   return (neuron0x2eb1970()*-0.0249313);
}

double NNfunction_NG_5::synapse0x2ec6bd0() {
   return (neuron0x2eb1cb0()*0.0614389);
}

double NNfunction_NG_5::synapse0x2ec6c10() {
   return (neuron0x2eb1ff0()*0.22328);
}

double NNfunction_NG_5::synapse0x2ec6c50() {
   return (neuron0x2eb2330()*0.0612964);
}

double NNfunction_NG_5::synapse0x2ec6c90() {
   return (neuron0x2eb2670()*0.112065);
}

double NNfunction_NG_5::synapse0x2ec7010() {
   return (neuron0x2eadab0()*0.288893);
}

double NNfunction_NG_5::synapse0x2ec7050() {
   return (neuron0x2eaddf0()*-0.12696);
}

double NNfunction_NG_5::synapse0x2ec7090() {
   return (neuron0x2eae130()*0.12455);
}

double NNfunction_NG_5::synapse0x2ec70d0() {
   return (neuron0x2eae470()*-0.153628);
}

double NNfunction_NG_5::synapse0x2ec7110() {
   return (neuron0x2eae7b0()*-0.131993);
}

double NNfunction_NG_5::synapse0x2ec7150() {
   return (neuron0x2eaeaf0()*0.0138901);
}

double NNfunction_NG_5::synapse0x2ec7190() {
   return (neuron0x2eaee30()*0.196262);
}

double NNfunction_NG_5::synapse0x2ec71d0() {
   return (neuron0x2eaf170()*-0.022775);
}

double NNfunction_NG_5::synapse0x2ec7210() {
   return (neuron0x2eaf4b0()*0.0391319);
}

double NNfunction_NG_5::synapse0x2ec7250() {
   return (neuron0x2eaf7f0()*0.0237724);
}

double NNfunction_NG_5::synapse0x2ec7290() {
   return (neuron0x2eafb30()*0.00221816);
}

double NNfunction_NG_5::synapse0x2ec72d0() {
   return (neuron0x2eafe70()*0.547941);
}

double NNfunction_NG_5::synapse0x2ec7310() {
   return (neuron0x2eb01b0()*0.00174368);
}

double NNfunction_NG_5::synapse0x2ec7350() {
   return (neuron0x2eb04f0()*-0.19621);
}

double NNfunction_NG_5::synapse0x2ec7390() {
   return (neuron0x2eb0830()*0.382354);
}

double NNfunction_NG_5::synapse0x2ec73d0() {
   return (neuron0x2eb0b70()*-0.0214592);
}

double NNfunction_NG_5::synapse0x2ec6e60() {
   return (neuron0x2eb0eb0()*-0.104267);
}

double NNfunction_NG_5::synapse0x2ec6ea0() {
   return (neuron0x2eb1410()*0.478228);
}

double NNfunction_NG_5::synapse0x2ec7520() {
   return (neuron0x2eb1630()*0.375647);
}

double NNfunction_NG_5::synapse0x2ec7560() {
   return (neuron0x2eb1970()*-0.0383597);
}

double NNfunction_NG_5::synapse0x2ec75a0() {
   return (neuron0x2eb1cb0()*-0.173034);
}

double NNfunction_NG_5::synapse0x2ec75e0() {
   return (neuron0x2eb1ff0()*-0.0865832);
}

double NNfunction_NG_5::synapse0x2ec7620() {
   return (neuron0x2eb2330()*-0.128329);
}

double NNfunction_NG_5::synapse0x2ec7660() {
   return (neuron0x2eb2670()*0.509401);
}

double NNfunction_NG_5::synapse0x2ec79e0() {
   return (neuron0x2eadab0()*0.216774);
}

double NNfunction_NG_5::synapse0x2ec7a20() {
   return (neuron0x2eaddf0()*0.0219842);
}

double NNfunction_NG_5::synapse0x2ec7a60() {
   return (neuron0x2eae130()*-0.556001);
}

double NNfunction_NG_5::synapse0x2ec7aa0() {
   return (neuron0x2eae470()*0.194414);
}

double NNfunction_NG_5::synapse0x2ec7ae0() {
   return (neuron0x2eae7b0()*0.28473);
}

double NNfunction_NG_5::synapse0x2ec7b20() {
   return (neuron0x2eaeaf0()*0.00934514);
}

double NNfunction_NG_5::synapse0x2ec7b60() {
   return (neuron0x2eaee30()*0.0213737);
}

double NNfunction_NG_5::synapse0x2ec7ba0() {
   return (neuron0x2eaf170()*0.185582);
}

double NNfunction_NG_5::synapse0x2ec7be0() {
   return (neuron0x2eaf4b0()*-0.20086);
}

double NNfunction_NG_5::synapse0x2ec7c20() {
   return (neuron0x2eaf7f0()*-0.0278351);
}

double NNfunction_NG_5::synapse0x2ec7c60() {
   return (neuron0x2eafb30()*0.155271);
}

double NNfunction_NG_5::synapse0x2ec7ca0() {
   return (neuron0x2eafe70()*-0.564249);
}

double NNfunction_NG_5::synapse0x2ec7ce0() {
   return (neuron0x2eb01b0()*0.286053);
}

double NNfunction_NG_5::synapse0x2ec7d20() {
   return (neuron0x2eb04f0()*0.34328);
}

double NNfunction_NG_5::synapse0x2ec7d60() {
   return (neuron0x2eb0830()*0.551938);
}

double NNfunction_NG_5::synapse0x2ec7da0() {
   return (neuron0x2eb0b70()*-0.30309);
}

double NNfunction_NG_5::synapse0x2ec7830() {
   return (neuron0x2eb0eb0()*0.0869533);
}

double NNfunction_NG_5::synapse0x2ec7870() {
   return (neuron0x2eb1410()*-0.0430559);
}

double NNfunction_NG_5::synapse0x2ec7ef0() {
   return (neuron0x2eb1630()*0.314946);
}

double NNfunction_NG_5::synapse0x2ec7f30() {
   return (neuron0x2eb1970()*-0.0820798);
}

double NNfunction_NG_5::synapse0x2ec7f70() {
   return (neuron0x2eb1cb0()*-0.0246121);
}

double NNfunction_NG_5::synapse0x2ec7fb0() {
   return (neuron0x2eb1ff0()*0.195737);
}

double NNfunction_NG_5::synapse0x2ec7ff0() {
   return (neuron0x2eb2330()*0.112158);
}

double NNfunction_NG_5::synapse0x2ec8030() {
   return (neuron0x2eb2670()*0.570148);
}

double NNfunction_NG_5::synapse0x2ec83b0() {
   return (neuron0x2eadab0()*-0.0188712);
}

double NNfunction_NG_5::synapse0x2ebc980() {
   return (neuron0x2eaddf0()*0.00420077);
}

double NNfunction_NG_5::synapse0x2ebc9c0() {
   return (neuron0x2eae130()*0.682245);
}

double NNfunction_NG_5::synapse0x2ebca00() {
   return (neuron0x2eae470()*-0.0338964);
}

double NNfunction_NG_5::synapse0x2ebcc50() {
   return (neuron0x2eae7b0()*-0.00153417);
}

double NNfunction_NG_5::synapse0x2ebcc90() {
   return (neuron0x2eaeaf0()*0.00357862);
}

double NNfunction_NG_5::synapse0x2ebccd0() {
   return (neuron0x2eaee30()*-0.000126221);
}

double NNfunction_NG_5::synapse0x2ebcf20() {
   return (neuron0x2eaf170()*0.000111472);
}

double NNfunction_NG_5::synapse0x2ebcf60() {
   return (neuron0x2eaf4b0()*-0.00893204);
}

double NNfunction_NG_5::synapse0x2ebd1b0() {
   return (neuron0x2eaf7f0()*0.0137716);
}

double NNfunction_NG_5::synapse0x2ebd1f0() {
   return (neuron0x2eafb30()*0.00519779);
}

double NNfunction_NG_5::synapse0x2ebd230() {
   return (neuron0x2eafe70()*-0.441708);
}

double NNfunction_NG_5::synapse0x2ebd480() {
   return (neuron0x2eb01b0()*0.0370208);
}

double NNfunction_NG_5::synapse0x2ebd4c0() {
   return (neuron0x2eb04f0()*0.0111162);
}

double NNfunction_NG_5::synapse0x2ebd710() {
   return (neuron0x2eb0830()*-0.00936248);
}

double NNfunction_NG_5::synapse0x2ebd750() {
   return (neuron0x2eb0b70()*0.0106027);
}

double NNfunction_NG_5::synapse0x2ec8200() {
   return (neuron0x2eb0eb0()*0.00821115);
}

double NNfunction_NG_5::synapse0x2ec8240() {
   return (neuron0x2eb1410()*0.0066089);
}

double NNfunction_NG_5::synapse0x2ebd8a0() {
   return (neuron0x2eb1630()*-0.00265046);
}

double NNfunction_NG_5::synapse0x2ebddb0() {
   return (neuron0x2eb1970()*0.00769022);
}

double NNfunction_NG_5::synapse0x2ebddf0() {
   return (neuron0x2eb1cb0()*-0.000301499);
}

double NNfunction_NG_5::synapse0x2ebde30() {
   return (neuron0x2eb1ff0()*-0.000780903);
}

double NNfunction_NG_5::synapse0x2ebe080() {
   return (neuron0x2eb2330()*-0.00970676);
}

double NNfunction_NG_5::synapse0x2ebe0c0() {
   return (neuron0x2eb2670()*0.019491);
}

double NNfunction_NG_5::synapse0x2ebd970() {
   return (neuron0x2eadab0()*-0.00574104);
}

double NNfunction_NG_5::synapse0x2ebd9b0() {
   return (neuron0x2eaddf0()*-0.00989348);
}

double NNfunction_NG_5::synapse0x2ebd9f0() {
   return (neuron0x2eae130()*0.36226);
}

double NNfunction_NG_5::synapse0x2ebda30() {
   return (neuron0x2eae470()*-0.0106676);
}

double NNfunction_NG_5::synapse0x2ebe3b0() {
   return (neuron0x2eae7b0()*-0.0050251);
}

double NNfunction_NG_5::synapse0x2eca700() {
   return (neuron0x2eaeaf0()*0.0126285);
}

double NNfunction_NG_5::synapse0x2eca740() {
   return (neuron0x2eaee30()*0.00971589);
}

double NNfunction_NG_5::synapse0x2eca780() {
   return (neuron0x2eaf170()*-0.0167533);
}

double NNfunction_NG_5::synapse0x2eca7c0() {
   return (neuron0x2eaf4b0()*0.0102364);
}

double NNfunction_NG_5::synapse0x2eca800() {
   return (neuron0x2eaf7f0()*-0.00857019);
}

double NNfunction_NG_5::synapse0x2eca840() {
   return (neuron0x2eafb30()*-0.0130482);
}

double NNfunction_NG_5::synapse0x2eca880() {
   return (neuron0x2eafe70()*0.0747856);
}

double NNfunction_NG_5::synapse0x2eca8c0() {
   return (neuron0x2eb01b0()*-0.0594548);
}

double NNfunction_NG_5::synapse0x2eca900() {
   return (neuron0x2eb04f0()*-0.0272963);
}

double NNfunction_NG_5::synapse0x2eca940() {
   return (neuron0x2eb0830()*-0.0110155);
}

double NNfunction_NG_5::synapse0x2eca980() {
   return (neuron0x2eb0b70()*-0.00493124);
}

double NNfunction_NG_5::synapse0x2ebe290() {
   return (neuron0x2eb0eb0()*-0.0299094);
}

double NNfunction_NG_5::synapse0x2ebe2d0() {
   return (neuron0x2eb1410()*-0.0260048);
}

double NNfunction_NG_5::synapse0x2ecaad0() {
   return (neuron0x2eb1630()*0.000705698);
}

double NNfunction_NG_5::synapse0x2ecab10() {
   return (neuron0x2eb1970()*0.00588162);
}

double NNfunction_NG_5::synapse0x2ecab50() {
   return (neuron0x2eb1cb0()*0.0370862);
}

double NNfunction_NG_5::synapse0x2ecab90() {
   return (neuron0x2eb1ff0()*0.00747336);
}

double NNfunction_NG_5::synapse0x2ecabd0() {
   return (neuron0x2eb2330()*0.000587096);
}

double NNfunction_NG_5::synapse0x2ecac10() {
   return (neuron0x2eb2670()*2.18514);
}

double NNfunction_NG_5::synapse0x2ecaf90() {
   return (neuron0x2eadab0()*0.0316881);
}

double NNfunction_NG_5::synapse0x2ecafd0() {
   return (neuron0x2eaddf0()*0.276748);
}

double NNfunction_NG_5::synapse0x2ecb010() {
   return (neuron0x2eae130()*-0.770458);
}

double NNfunction_NG_5::synapse0x2ecb050() {
   return (neuron0x2eae470()*-0.367833);
}

double NNfunction_NG_5::synapse0x2ecb090() {
   return (neuron0x2eae7b0()*-0.686608);
}

double NNfunction_NG_5::synapse0x2ecb0d0() {
   return (neuron0x2eaeaf0()*0.234225);
}

double NNfunction_NG_5::synapse0x2ecb110() {
   return (neuron0x2eaee30()*-0.1687);
}

double NNfunction_NG_5::synapse0x2ecb150() {
   return (neuron0x2eaf170()*-0.156563);
}

double NNfunction_NG_5::synapse0x2ecb190() {
   return (neuron0x2eaf4b0()*0.138653);
}

double NNfunction_NG_5::synapse0x2ecb1d0() {
   return (neuron0x2eaf7f0()*0.013018);
}

double NNfunction_NG_5::synapse0x2ecb210() {
   return (neuron0x2eafb30()*-0.212998);
}

double NNfunction_NG_5::synapse0x2ecb250() {
   return (neuron0x2eafe70()*-0.469802);
}

double NNfunction_NG_5::synapse0x2ecb290() {
   return (neuron0x2eb01b0()*-0.149601);
}

double NNfunction_NG_5::synapse0x2ecb2d0() {
   return (neuron0x2eb04f0()*0.0841303);
}

double NNfunction_NG_5::synapse0x2ecb310() {
   return (neuron0x2eb0830()*-0.0688085);
}

double NNfunction_NG_5::synapse0x2ecb350() {
   return (neuron0x2eb0b70()*-0.225104);
}

double NNfunction_NG_5::synapse0x2ecade0() {
   return (neuron0x2eb0eb0()*-0.0860216);
}

double NNfunction_NG_5::synapse0x2ecae20() {
   return (neuron0x2eb1410()*0.447669);
}

double NNfunction_NG_5::synapse0x2ecb4a0() {
   return (neuron0x2eb1630()*0.165898);
}

double NNfunction_NG_5::synapse0x2ecb4e0() {
   return (neuron0x2eb1970()*0.533031);
}

double NNfunction_NG_5::synapse0x2ecb520() {
   return (neuron0x2eb1cb0()*0.0652512);
}

double NNfunction_NG_5::synapse0x2ecb560() {
   return (neuron0x2eb1ff0()*0.379994);
}

double NNfunction_NG_5::synapse0x2ecb5a0() {
   return (neuron0x2eb2330()*0.261411);
}

double NNfunction_NG_5::synapse0x2ecb5e0() {
   return (neuron0x2eb2670()*-0.00114288);
}

double NNfunction_NG_5::synapse0x2ecb960() {
   return (neuron0x2eadab0()*-0.0381163);
}

double NNfunction_NG_5::synapse0x2ecb9a0() {
   return (neuron0x2eaddf0()*0.0303423);
}

double NNfunction_NG_5::synapse0x2ecb9e0() {
   return (neuron0x2eae130()*1.77767);
}

double NNfunction_NG_5::synapse0x2ecba20() {
   return (neuron0x2eae470()*1.45079);
}

double NNfunction_NG_5::synapse0x2ecba60() {
   return (neuron0x2eae7b0()*0.0582216);
}

double NNfunction_NG_5::synapse0x2ecbaa0() {
   return (neuron0x2eaeaf0()*-0.00238187);
}

double NNfunction_NG_5::synapse0x2ecbae0() {
   return (neuron0x2eaee30()*0.00824598);
}

double NNfunction_NG_5::synapse0x2ecbb20() {
   return (neuron0x2eaf170()*0.00478003);
}

double NNfunction_NG_5::synapse0x2ecbb60() {
   return (neuron0x2eaf4b0()*0.0198466);
}

double NNfunction_NG_5::synapse0x2ecbba0() {
   return (neuron0x2eaf7f0()*-0.0279867);
}

double NNfunction_NG_5::synapse0x2ecbbe0() {
   return (neuron0x2eafb30()*-0.00518201);
}

double NNfunction_NG_5::synapse0x2ecbc20() {
   return (neuron0x2eafe70()*0.258091);
}

double NNfunction_NG_5::synapse0x2ecbc60() {
   return (neuron0x2eb01b0()*-0.161307);
}

double NNfunction_NG_5::synapse0x2ecbca0() {
   return (neuron0x2eb04f0()*0.0199448);
}

double NNfunction_NG_5::synapse0x2ecbce0() {
   return (neuron0x2eb0830()*0.0173458);
}

double NNfunction_NG_5::synapse0x2ecbd20() {
   return (neuron0x2eb0b70()*0.0522312);
}

double NNfunction_NG_5::synapse0x2ecb7b0() {
   return (neuron0x2eb0eb0()*-0.0154718);
}

double NNfunction_NG_5::synapse0x2ecb7f0() {
   return (neuron0x2eb1410()*0.00452842);
}

double NNfunction_NG_5::synapse0x2ecbe70() {
   return (neuron0x2eb1630()*0.0852844);
}

double NNfunction_NG_5::synapse0x2ecbeb0() {
   return (neuron0x2eb1970()*-0.0300384);
}

double NNfunction_NG_5::synapse0x2ecbef0() {
   return (neuron0x2eb1cb0()*-0.0320509);
}

double NNfunction_NG_5::synapse0x2ecbf30() {
   return (neuron0x2eb1ff0()*-0.0465798);
}

double NNfunction_NG_5::synapse0x2ecbf70() {
   return (neuron0x2eb2330()*0.0392186);
}

double NNfunction_NG_5::synapse0x2ecbfb0() {
   return (neuron0x2eb2670()*-0.196331);
}

double NNfunction_NG_5::synapse0x2ecc330() {
   return (neuron0x2eadab0()*-0.0501648);
}

double NNfunction_NG_5::synapse0x2ecc370() {
   return (neuron0x2eaddf0()*0.00708512);
}

double NNfunction_NG_5::synapse0x2ecc3b0() {
   return (neuron0x2eae130()*3.04401);
}

double NNfunction_NG_5::synapse0x2ecc3f0() {
   return (neuron0x2eae470()*0.123657);
}

double NNfunction_NG_5::synapse0x2ecc430() {
   return (neuron0x2eae7b0()*0.0171454);
}

double NNfunction_NG_5::synapse0x2ecc470() {
   return (neuron0x2eaeaf0()*-0.00233808);
}

double NNfunction_NG_5::synapse0x2ecc4b0() {
   return (neuron0x2eaee30()*0.00914476);
}

double NNfunction_NG_5::synapse0x2ecc4f0() {
   return (neuron0x2eaf170()*-0.00346492);
}

double NNfunction_NG_5::synapse0x2ecc530() {
   return (neuron0x2eaf4b0()*-0.0270701);
}

double NNfunction_NG_5::synapse0x2ecc570() {
   return (neuron0x2eaf7f0()*0.0319257);
}

double NNfunction_NG_5::synapse0x2ecc5b0() {
   return (neuron0x2eafb30()*-0.0454598);
}

double NNfunction_NG_5::synapse0x2ecc5f0() {
   return (neuron0x2eafe70()*-0.0994575);
}

double NNfunction_NG_5::synapse0x2ecc630() {
   return (neuron0x2eb01b0()*0.0716943);
}

double NNfunction_NG_5::synapse0x2ecc670() {
   return (neuron0x2eb04f0()*0.0319321);
}

double NNfunction_NG_5::synapse0x2ecc6b0() {
   return (neuron0x2eb0830()*0.0182133);
}

double NNfunction_NG_5::synapse0x2ecc6f0() {
   return (neuron0x2eb0b70()*0.0621948);
}

double NNfunction_NG_5::synapse0x2ecc180() {
   return (neuron0x2eb0eb0()*0.00988896);
}

double NNfunction_NG_5::synapse0x2ecc1c0() {
   return (neuron0x2eb1410()*0.0370974);
}

double NNfunction_NG_5::synapse0x2ecc840() {
   return (neuron0x2eb1630()*-0.017714);
}

double NNfunction_NG_5::synapse0x2ecc880() {
   return (neuron0x2eb1970()*0.000323383);
}

double NNfunction_NG_5::synapse0x2ecc8c0() {
   return (neuron0x2eb1cb0()*0.000892105);
}

double NNfunction_NG_5::synapse0x2ecc900() {
   return (neuron0x2eb1ff0()*-0.0190712);
}

double NNfunction_NG_5::synapse0x2ecc940() {
   return (neuron0x2eb2330()*-0.0204062);
}

double NNfunction_NG_5::synapse0x2ecc980() {
   return (neuron0x2eb2670()*-1.24327);
}

double NNfunction_NG_5::synapse0x2eccd00() {
   return (neuron0x2eadab0()*0.022365);
}

double NNfunction_NG_5::synapse0x2eccd40() {
   return (neuron0x2eaddf0()*0.0037238);
}

double NNfunction_NG_5::synapse0x2eccd80() {
   return (neuron0x2eae130()*0.0977942);
}

double NNfunction_NG_5::synapse0x2eccdc0() {
   return (neuron0x2eae470()*2.78374);
}

double NNfunction_NG_5::synapse0x2ecce00() {
   return (neuron0x2eae7b0()*0.0293754);
}

double NNfunction_NG_5::synapse0x2ecce40() {
   return (neuron0x2eaeaf0()*0.00450181);
}

double NNfunction_NG_5::synapse0x2ecce80() {
   return (neuron0x2eaee30()*-0.00911336);
}

double NNfunction_NG_5::synapse0x2eccec0() {
   return (neuron0x2eaf170()*-0.0135238);
}

double NNfunction_NG_5::synapse0x2eccf00() {
   return (neuron0x2eaf4b0()*0.0416857);
}

double NNfunction_NG_5::synapse0x2eccf40() {
   return (neuron0x2eaf7f0()*0.0430966);
}

double NNfunction_NG_5::synapse0x2eccf80() {
   return (neuron0x2eafb30()*-0.0497317);
}

double NNfunction_NG_5::synapse0x2eccfc0() {
   return (neuron0x2eafe70()*0.886502);
}

double NNfunction_NG_5::synapse0x2ecd000() {
   return (neuron0x2eb01b0()*-0.443364);
}

double NNfunction_NG_5::synapse0x2ecd040() {
   return (neuron0x2eb04f0()*-0.0874378);
}

double NNfunction_NG_5::synapse0x2ecd080() {
   return (neuron0x2eb0830()*-0.00138993);
}

double NNfunction_NG_5::synapse0x2ecd0c0() {
   return (neuron0x2eb0b70()*0.0110877);
}

double NNfunction_NG_5::synapse0x2eccb50() {
   return (neuron0x2eb0eb0()*-0.0639241);
}

double NNfunction_NG_5::synapse0x2eccb90() {
   return (neuron0x2eb1410()*-0.117991);
}

double NNfunction_NG_5::synapse0x2ecd210() {
   return (neuron0x2eb1630()*-0.216582);
}

double NNfunction_NG_5::synapse0x2ecd250() {
   return (neuron0x2eb1970()*-0.0809286);
}

double NNfunction_NG_5::synapse0x2ecd290() {
   return (neuron0x2eb1cb0()*0.00553239);
}

double NNfunction_NG_5::synapse0x2ecd2d0() {
   return (neuron0x2eb1ff0()*-0.0185406);
}

double NNfunction_NG_5::synapse0x2ecd310() {
   return (neuron0x2eb2330()*-0.069308);
}

double NNfunction_NG_5::synapse0x2ecd350() {
   return (neuron0x2eb2670()*0.151625);
}

double NNfunction_NG_5::synapse0x2ecd6d0() {
   return (neuron0x2eadab0()*-0.254561);
}

double NNfunction_NG_5::synapse0x2ecd710() {
   return (neuron0x2eaddf0()*-0.116836);
}

double NNfunction_NG_5::synapse0x2ecd750() {
   return (neuron0x2eae130()*0.155473);
}

double NNfunction_NG_5::synapse0x2ecd790() {
   return (neuron0x2eae470()*0.00280839);
}

double NNfunction_NG_5::synapse0x2ecd7d0() {
   return (neuron0x2eae7b0()*-0.379517);
}

double NNfunction_NG_5::synapse0x2ecd810() {
   return (neuron0x2eaeaf0()*0.346163);
}

double NNfunction_NG_5::synapse0x2ecd850() {
   return (neuron0x2eaee30()*-0.314511);
}

double NNfunction_NG_5::synapse0x2ecd890() {
   return (neuron0x2eaf170()*-0.147812);
}

double NNfunction_NG_5::synapse0x2ecd8d0() {
   return (neuron0x2eaf4b0()*0.251999);
}

double NNfunction_NG_5::synapse0x2ecd910() {
   return (neuron0x2eaf7f0()*-0.136226);
}

double NNfunction_NG_5::synapse0x2ecd950() {
   return (neuron0x2eafb30()*0.183774);
}

double NNfunction_NG_5::synapse0x2ecd990() {
   return (neuron0x2eafe70()*-0.119141);
}

double NNfunction_NG_5::synapse0x2ecd9d0() {
   return (neuron0x2eb01b0()*-0.281471);
}

double NNfunction_NG_5::synapse0x2ecda10() {
   return (neuron0x2eb04f0()*0.54192);
}

double NNfunction_NG_5::synapse0x2ecda50() {
   return (neuron0x2eb0830()*0.327939);
}

double NNfunction_NG_5::synapse0x2ecda90() {
   return (neuron0x2eb0b70()*0.318437);
}

double NNfunction_NG_5::synapse0x2ecd520() {
   return (neuron0x2eb0eb0()*0.086469);
}

double NNfunction_NG_5::synapse0x2ecd560() {
   return (neuron0x2eb1410()*0.0218757);
}

double NNfunction_NG_5::synapse0x2ecdbe0() {
   return (neuron0x2eb1630()*-0.356719);
}

double NNfunction_NG_5::synapse0x2ecdc20() {
   return (neuron0x2eb1970()*0.592672);
}

double NNfunction_NG_5::synapse0x2ecdc60() {
   return (neuron0x2eb1cb0()*-0.118831);
}

double NNfunction_NG_5::synapse0x2ecdca0() {
   return (neuron0x2eb1ff0()*-0.0271179);
}

double NNfunction_NG_5::synapse0x2ecdce0() {
   return (neuron0x2eb2330()*-0.3025);
}

double NNfunction_NG_5::synapse0x2ecdd20() {
   return (neuron0x2eb2670()*0.0117899);
}

double NNfunction_NG_5::synapse0x2ece0a0() {
   return (neuron0x2eadab0()*0.0824403);
}

double NNfunction_NG_5::synapse0x2ece0e0() {
   return (neuron0x2eaddf0()*-0.0531912);
}

double NNfunction_NG_5::synapse0x2ece120() {
   return (neuron0x2eae130()*0.345094);
}

double NNfunction_NG_5::synapse0x2ece160() {
   return (neuron0x2eae470()*0.0632142);
}

double NNfunction_NG_5::synapse0x2ece1a0() {
   return (neuron0x2eae7b0()*-0.219681);
}

double NNfunction_NG_5::synapse0x2ece1e0() {
   return (neuron0x2eaeaf0()*-0.126986);
}

double NNfunction_NG_5::synapse0x2ece220() {
   return (neuron0x2eaee30()*0.288137);
}

double NNfunction_NG_5::synapse0x2ece260() {
   return (neuron0x2eaf170()*0.182019);
}

double NNfunction_NG_5::synapse0x2ece2a0() {
   return (neuron0x2eaf4b0()*-0.246441);
}

double NNfunction_NG_5::synapse0x2ece2e0() {
   return (neuron0x2eaf7f0()*-0.146969);
}

double NNfunction_NG_5::synapse0x2ece320() {
   return (neuron0x2eafb30()*-0.207806);
}

double NNfunction_NG_5::synapse0x2ece360() {
   return (neuron0x2eafe70()*0.22278);
}

double NNfunction_NG_5::synapse0x2ece3a0() {
   return (neuron0x2eb01b0()*-0.4761);
}

double NNfunction_NG_5::synapse0x2ece3e0() {
   return (neuron0x2eb04f0()*-0.142755);
}

double NNfunction_NG_5::synapse0x2ece420() {
   return (neuron0x2eb0830()*0.0520899);
}

double NNfunction_NG_5::synapse0x2ece460() {
   return (neuron0x2eb0b70()*-0.0690306);
}

double NNfunction_NG_5::synapse0x2ecdef0() {
   return (neuron0x2eb0eb0()*0.226859);
}

double NNfunction_NG_5::synapse0x2ecdf30() {
   return (neuron0x2eb1410()*0.0637295);
}

double NNfunction_NG_5::synapse0x2ece5b0() {
   return (neuron0x2eb1630()*-0.246367);
}

double NNfunction_NG_5::synapse0x2ece5f0() {
   return (neuron0x2eb1970()*-0.344409);
}

double NNfunction_NG_5::synapse0x2ece630() {
   return (neuron0x2eb1cb0()*-0.204007);
}

double NNfunction_NG_5::synapse0x2ece670() {
   return (neuron0x2eb1ff0()*0.175643);
}

double NNfunction_NG_5::synapse0x2ece6b0() {
   return (neuron0x2eb2330()*0.177909);
}

double NNfunction_NG_5::synapse0x2ece6f0() {
   return (neuron0x2eb2670()*-0.932608);
}

double NNfunction_NG_5::synapse0x2ecea70() {
   return (neuron0x2eadab0()*0.0363021);
}

double NNfunction_NG_5::synapse0x2eceab0() {
   return (neuron0x2eaddf0()*0.0252498);
}

double NNfunction_NG_5::synapse0x2eceaf0() {
   return (neuron0x2eae130()*-1.63192);
}

double NNfunction_NG_5::synapse0x2eceb30() {
   return (neuron0x2eae470()*-1.50684);
}

double NNfunction_NG_5::synapse0x2eceb70() {
   return (neuron0x2eae7b0()*0.500594);
}

double NNfunction_NG_5::synapse0x2ecebb0() {
   return (neuron0x2eaeaf0()*-0.0724037);
}

double NNfunction_NG_5::synapse0x2ecebf0() {
   return (neuron0x2eaee30()*0.0168983);
}

double NNfunction_NG_5::synapse0x2ecec30() {
   return (neuron0x2eaf170()*0.0872788);
}

double NNfunction_NG_5::synapse0x2ecec70() {
   return (neuron0x2eaf4b0()*0.0874144);
}

double NNfunction_NG_5::synapse0x2ececb0() {
   return (neuron0x2eaf7f0()*-0.0634621);
}

double NNfunction_NG_5::synapse0x2ececf0() {
   return (neuron0x2eafb30()*-0.171987);
}

double NNfunction_NG_5::synapse0x2eced30() {
   return (neuron0x2eafe70()*-0.993073);
}

double NNfunction_NG_5::synapse0x2eced70() {
   return (neuron0x2eb01b0()*-0.988888);
}

double NNfunction_NG_5::synapse0x2ecedb0() {
   return (neuron0x2eb04f0()*0.279349);
}

double NNfunction_NG_5::synapse0x2ecedf0() {
   return (neuron0x2eb0830()*-0.222533);
}

double NNfunction_NG_5::synapse0x2ecee30() {
   return (neuron0x2eb0b70()*-0.140993);
}

double NNfunction_NG_5::synapse0x2ece8c0() {
   return (neuron0x2eb0eb0()*0.162361);
}

double NNfunction_NG_5::synapse0x2ece900() {
   return (neuron0x2eb1410()*0.011784);
}

double NNfunction_NG_5::synapse0x2ecef80() {
   return (neuron0x2eb1630()*0.491251);
}

double NNfunction_NG_5::synapse0x2ecefc0() {
   return (neuron0x2eb1970()*0.100862);
}

double NNfunction_NG_5::synapse0x2ecf000() {
   return (neuron0x2eb1cb0()*-0.0772571);
}

double NNfunction_NG_5::synapse0x2ecf040() {
   return (neuron0x2eb1ff0()*0.0813161);
}

double NNfunction_NG_5::synapse0x2ecf080() {
   return (neuron0x2eb2330()*-0.0490361);
}

double NNfunction_NG_5::synapse0x2ecf0c0() {
   return (neuron0x2eb2670()*-0.00320747);
}

double NNfunction_NG_5::synapse0x2eb7b70() {
   return (neuron0x2eadab0()*-0.0119134);
}

double NNfunction_NG_5::synapse0x2eb7bb0() {
   return (neuron0x2eaddf0()*0.00370637);
}

double NNfunction_NG_5::synapse0x2eb7bf0() {
   return (neuron0x2eae130()*0.0447616);
}

double NNfunction_NG_5::synapse0x2eb7c30() {
   return (neuron0x2eae470()*0.125993);
}

double NNfunction_NG_5::synapse0x2eb7c70() {
   return (neuron0x2eae7b0()*-0.00563871);
}

double NNfunction_NG_5::synapse0x2eb7cb0() {
   return (neuron0x2eaeaf0()*0.00943213);
}

double NNfunction_NG_5::synapse0x2eb7cf0() {
   return (neuron0x2eaee30()*0.00963169);
}

double NNfunction_NG_5::synapse0x2eb7d30() {
   return (neuron0x2eaf170()*-0.0101016);
}

double NNfunction_NG_5::synapse0x2ecf850() {
   return (neuron0x2eaf4b0()*-0.00349544);
}

double NNfunction_NG_5::synapse0x2ecf890() {
   return (neuron0x2eaf7f0()*-0.00677649);
}

double NNfunction_NG_5::synapse0x2ecf8d0() {
   return (neuron0x2eafb30()*0.00682856);
}

double NNfunction_NG_5::synapse0x2ecf910() {
   return (neuron0x2eafe70()*-1.03984);
}

double NNfunction_NG_5::synapse0x2ecf950() {
   return (neuron0x2eb01b0()*0.052543);
}

double NNfunction_NG_5::synapse0x2ecf990() {
   return (neuron0x2eb04f0()*0.00827616);
}

double NNfunction_NG_5::synapse0x2ecf9d0() {
   return (neuron0x2eb0830()*-0.00859672);
}

double NNfunction_NG_5::synapse0x2ecfa10() {
   return (neuron0x2eb0b70()*-0.000997896);
}

double NNfunction_NG_5::synapse0x2ecf290() {
   return (neuron0x2eb0eb0()*0.0172614);
}

double NNfunction_NG_5::synapse0x2ecf2d0() {
   return (neuron0x2eb1410()*0.00237086);
}

double NNfunction_NG_5::synapse0x2ecfb60() {
   return (neuron0x2eb1630()*-0.0122005);
}

double NNfunction_NG_5::synapse0x2ecfba0() {
   return (neuron0x2eb1970()*0.00240836);
}

double NNfunction_NG_5::synapse0x2ecfbe0() {
   return (neuron0x2eb1cb0()*-0.00265592);
}

double NNfunction_NG_5::synapse0x2ecfc20() {
   return (neuron0x2eb1ff0()*-0.0111618);
}

double NNfunction_NG_5::synapse0x2ecfc60() {
   return (neuron0x2eb2330()*-0.00706145);
}

double NNfunction_NG_5::synapse0x2ecfca0() {
   return (neuron0x2eb2670()*0.0171857);
}

double NNfunction_NG_5::synapse0x2ed0020() {
   return (neuron0x2eadab0()*-0.0109143);
}

double NNfunction_NG_5::synapse0x2ed0060() {
   return (neuron0x2eaddf0()*-0.0043935);
}

double NNfunction_NG_5::synapse0x2ed00a0() {
   return (neuron0x2eae130()*-0.0339204);
}

double NNfunction_NG_5::synapse0x2ed00e0() {
   return (neuron0x2eae470()*4.58427);
}

double NNfunction_NG_5::synapse0x2ed0120() {
   return (neuron0x2eae7b0()*0.0019508);
}

double NNfunction_NG_5::synapse0x2ed0160() {
   return (neuron0x2eaeaf0()*0.00168469);
}

double NNfunction_NG_5::synapse0x2ed01a0() {
   return (neuron0x2eaee30()*0.00318213);
}

double NNfunction_NG_5::synapse0x2ed01e0() {
   return (neuron0x2eaf170()*0.000996532);
}

double NNfunction_NG_5::synapse0x2ed0220() {
   return (neuron0x2eaf4b0()*-0.00623209);
}

double NNfunction_NG_5::synapse0x2ed0260() {
   return (neuron0x2eaf7f0()*-0.0155344);
}

double NNfunction_NG_5::synapse0x2ed02a0() {
   return (neuron0x2eafb30()*0.00828026);
}

double NNfunction_NG_5::synapse0x2ed02e0() {
   return (neuron0x2eafe70()*0.104655);
}

double NNfunction_NG_5::synapse0x2ed0320() {
   return (neuron0x2eb01b0()*-0.0177517);
}

double NNfunction_NG_5::synapse0x2ed0360() {
   return (neuron0x2eb04f0()*0.0233317);
}

double NNfunction_NG_5::synapse0x2ed03a0() {
   return (neuron0x2eb0830()*-0.0202924);
}

double NNfunction_NG_5::synapse0x2ed03e0() {
   return (neuron0x2eb0b70()*-0.0291514);
}

double NNfunction_NG_5::synapse0x2ecfe70() {
   return (neuron0x2eb0eb0()*0.00102391);
}

double NNfunction_NG_5::synapse0x2ecfeb0() {
   return (neuron0x2eb1410()*-0.0238196);
}

double NNfunction_NG_5::synapse0x2ed0530() {
   return (neuron0x2eb1630()*0.00210398);
}

double NNfunction_NG_5::synapse0x2ed0570() {
   return (neuron0x2eb1970()*0.00125535);
}

double NNfunction_NG_5::synapse0x2ed05b0() {
   return (neuron0x2eb1cb0()*0.00635729);
}

double NNfunction_NG_5::synapse0x2ed05f0() {
   return (neuron0x2eb1ff0()*0.00957006);
}

double NNfunction_NG_5::synapse0x2ed0630() {
   return (neuron0x2eb2330()*0.00483823);
}

double NNfunction_NG_5::synapse0x2ed0670() {
   return (neuron0x2eb2670()*-0.0615896);
}

double NNfunction_NG_5::synapse0x2ed09f0() {
   return (neuron0x2eadab0()*0.0948826);
}

double NNfunction_NG_5::synapse0x2ed0a30() {
   return (neuron0x2eaddf0()*-0.274089);
}

double NNfunction_NG_5::synapse0x2ed0a70() {
   return (neuron0x2eae130()*-0.304231);
}

double NNfunction_NG_5::synapse0x2ed0ab0() {
   return (neuron0x2eae470()*0.423961);
}

double NNfunction_NG_5::synapse0x2ed0af0() {
   return (neuron0x2eae7b0()*-0.0981333);
}

double NNfunction_NG_5::synapse0x2ed0b30() {
   return (neuron0x2eaeaf0()*-0.0939529);
}

double NNfunction_NG_5::synapse0x2ed0b70() {
   return (neuron0x2eaee30()*0.100867);
}

double NNfunction_NG_5::synapse0x2ed0bb0() {
   return (neuron0x2eaf170()*0.0204492);
}

double NNfunction_NG_5::synapse0x2ed0bf0() {
   return (neuron0x2eaf4b0()*-0.074991);
}

double NNfunction_NG_5::synapse0x2ed0c30() {
   return (neuron0x2eaf7f0()*-0.249334);
}

double NNfunction_NG_5::synapse0x2ed0c70() {
   return (neuron0x2eafb30()*0.066907);
}

double NNfunction_NG_5::synapse0x2ed0cb0() {
   return (neuron0x2eafe70()*0.912331);
}

double NNfunction_NG_5::synapse0x2ed0cf0() {
   return (neuron0x2eb01b0()*-0.463889);
}

double NNfunction_NG_5::synapse0x2ed0d30() {
   return (neuron0x2eb04f0()*-0.159809);
}

double NNfunction_NG_5::synapse0x2ed0d70() {
   return (neuron0x2eb0830()*0.21929);
}

double NNfunction_NG_5::synapse0x2ed0db0() {
   return (neuron0x2eb0b70()*0.345616);
}

double NNfunction_NG_5::synapse0x2ed0840() {
   return (neuron0x2eb0eb0()*0.261819);
}

double NNfunction_NG_5::synapse0x2ed0880() {
   return (neuron0x2eb1410()*0.124081);
}

double NNfunction_NG_5::synapse0x2ec13b0() {
   return (neuron0x2eb1630()*0.241588);
}

double NNfunction_NG_5::synapse0x2ec13f0() {
   return (neuron0x2eb1970()*-0.0905881);
}

double NNfunction_NG_5::synapse0x2ec1430() {
   return (neuron0x2eb1cb0()*0.157951);
}

double NNfunction_NG_5::synapse0x2ec1470() {
   return (neuron0x2eb1ff0()*-0.26961);
}

double NNfunction_NG_5::synapse0x2ec14b0() {
   return (neuron0x2eb2330()*-0.143415);
}

double NNfunction_NG_5::synapse0x2ec14f0() {
   return (neuron0x2eb2670()*0.1544);
}

double NNfunction_NG_5::synapse0x2ec1870() {
   return (neuron0x2eadab0()*-0.00888981);
}

double NNfunction_NG_5::synapse0x2ec18b0() {
   return (neuron0x2eaddf0()*-0.00976296);
}

double NNfunction_NG_5::synapse0x2ec18f0() {
   return (neuron0x2eae130()*-0.487415);
}

double NNfunction_NG_5::synapse0x2ec1930() {
   return (neuron0x2eae470()*-0.03226);
}

double NNfunction_NG_5::synapse0x2ec1970() {
   return (neuron0x2eae7b0()*0.00355763);
}

double NNfunction_NG_5::synapse0x2ec19b0() {
   return (neuron0x2eaeaf0()*0.0118423);
}

double NNfunction_NG_5::synapse0x2ec19f0() {
   return (neuron0x2eaee30()*0.00248493);
}

double NNfunction_NG_5::synapse0x2ec1a30() {
   return (neuron0x2eaf170()*-0.0133654);
}

double NNfunction_NG_5::synapse0x2ec1a70() {
   return (neuron0x2eaf4b0()*0.0106621);
}

double NNfunction_NG_5::synapse0x2ec1ab0() {
   return (neuron0x2eaf7f0()*-0.0147623);
}

double NNfunction_NG_5::synapse0x2ec1af0() {
   return (neuron0x2eafb30()*0.00199974);
}

double NNfunction_NG_5::synapse0x2ec1b30() {
   return (neuron0x2eafe70()*0.0697919);
}

double NNfunction_NG_5::synapse0x2ec1b70() {
   return (neuron0x2eb01b0()*-0.074359);
}

double NNfunction_NG_5::synapse0x2ec1bb0() {
   return (neuron0x2eb04f0()*-0.0219177);
}

double NNfunction_NG_5::synapse0x2ec1bf0() {
   return (neuron0x2eb0830()*-0.0146517);
}

double NNfunction_NG_5::synapse0x2ec1c30() {
   return (neuron0x2eb0b70()*-0.00989317);
}

double NNfunction_NG_5::synapse0x2ec16c0() {
   return (neuron0x2eb0eb0()*-0.0180305);
}

double NNfunction_NG_5::synapse0x2ec1700() {
   return (neuron0x2eb1410()*-0.024292);
}

double NNfunction_NG_5::synapse0x2ec1d80() {
   return (neuron0x2eb1630()*0.00221375);
}

double NNfunction_NG_5::synapse0x2ec1dc0() {
   return (neuron0x2eb1970()*0.00210979);
}

double NNfunction_NG_5::synapse0x2ec1e00() {
   return (neuron0x2eb1cb0()*0.0413515);
}

double NNfunction_NG_5::synapse0x2ec1e40() {
   return (neuron0x2eb1ff0()*0.00272879);
}

double NNfunction_NG_5::synapse0x2ec1e80() {
   return (neuron0x2eb2330()*0.00407952);
}

double NNfunction_NG_5::synapse0x2ec1ec0() {
   return (neuron0x2eb2670()*1.7519);
}

double NNfunction_NG_5::synapse0x2ec2240() {
   return (neuron0x2eadab0()*0.0151407);
}

double NNfunction_NG_5::synapse0x2ec2280() {
   return (neuron0x2eaddf0()*0.0276173);
}

double NNfunction_NG_5::synapse0x2ec22c0() {
   return (neuron0x2eae130()*0.171029);
}

double NNfunction_NG_5::synapse0x2ec2300() {
   return (neuron0x2eae470()*-0.0940808);
}

double NNfunction_NG_5::synapse0x2ec2340() {
   return (neuron0x2eae7b0()*-0.157612);
}

double NNfunction_NG_5::synapse0x2ec2380() {
   return (neuron0x2eaeaf0()*-0.0739779);
}

double NNfunction_NG_5::synapse0x2ec23c0() {
   return (neuron0x2eaee30()*-0.0909114);
}

double NNfunction_NG_5::synapse0x2ec2400() {
   return (neuron0x2eaf170()*0.156089);
}

double NNfunction_NG_5::synapse0x2ec2440() {
   return (neuron0x2eaf4b0()*0.0337666);
}

double NNfunction_NG_5::synapse0x2ec2480() {
   return (neuron0x2eaf7f0()*0.0840639);
}

double NNfunction_NG_5::synapse0x2ec24c0() {
   return (neuron0x2eafb30()*-0.111379);
}

double NNfunction_NG_5::synapse0x2ec2500() {
   return (neuron0x2eafe70()*0.694174);
}

double NNfunction_NG_5::synapse0x2ec2540() {
   return (neuron0x2eb01b0()*-0.229402);
}

double NNfunction_NG_5::synapse0x2ec2580() {
   return (neuron0x2eb04f0()*-0.0175641);
}

double NNfunction_NG_5::synapse0x2ec25c0() {
   return (neuron0x2eb0830()*0.352131);
}

double NNfunction_NG_5::synapse0x2ec2600() {
   return (neuron0x2eb0b70()*-0.473017);
}

double NNfunction_NG_5::synapse0x2ec2090() {
   return (neuron0x2eb0eb0()*-0.404427);
}

double NNfunction_NG_5::synapse0x2ec20d0() {
   return (neuron0x2eb1410()*-0.176774);
}

double NNfunction_NG_5::synapse0x2ec2750() {
   return (neuron0x2eb1630()*0.0938676);
}

double NNfunction_NG_5::synapse0x2ec2790() {
   return (neuron0x2eb1970()*-0.0276644);
}

double NNfunction_NG_5::synapse0x2ec27d0() {
   return (neuron0x2eb1cb0()*-0.0523636);
}

double NNfunction_NG_5::synapse0x2ec2810() {
   return (neuron0x2eb1ff0()*-0.147332);
}

double NNfunction_NG_5::synapse0x2ec2850() {
   return (neuron0x2eb2330()*0.0176147);
}

double NNfunction_NG_5::synapse0x2ec2890() {
   return (neuron0x2eb2670()*-0.169379);
}

double NNfunction_NG_5::synapse0x2ec2c10() {
   return (neuron0x2eadab0()*-0.00286988);
}

double NNfunction_NG_5::synapse0x2ec2c50() {
   return (neuron0x2eaddf0()*0.0318431);
}

double NNfunction_NG_5::synapse0x2ec2c90() {
   return (neuron0x2eae130()*-0.00859051);
}

double NNfunction_NG_5::synapse0x2ec2cd0() {
   return (neuron0x2eae470()*0.0655327);
}

double NNfunction_NG_5::synapse0x2ec2d10() {
   return (neuron0x2eae7b0()*0.00416523);
}

double NNfunction_NG_5::synapse0x2ec2d50() {
   return (neuron0x2eaeaf0()*0.00447947);
}

double NNfunction_NG_5::synapse0x2ec2d90() {
   return (neuron0x2eaee30()*-0.0115727);
}

double NNfunction_NG_5::synapse0x2ec2dd0() {
   return (neuron0x2eaf170()*-0.00271676);
}

double NNfunction_NG_5::synapse0x2ec2e10() {
   return (neuron0x2eaf4b0()*0.00170078);
}

double NNfunction_NG_5::synapse0x2ec2e50() {
   return (neuron0x2eaf7f0()*0.0114779);
}

double NNfunction_NG_5::synapse0x2ec2e90() {
   return (neuron0x2eafb30()*0.0108308);
}

double NNfunction_NG_5::synapse0x2ec2ed0() {
   return (neuron0x2eafe70()*-3.76144);
}

double NNfunction_NG_5::synapse0x2ec2f10() {
   return (neuron0x2eb01b0()*-0.0508952);
}

double NNfunction_NG_5::synapse0x2ec2f50() {
   return (neuron0x2eb04f0()*-0.0552065);
}

double NNfunction_NG_5::synapse0x2ec2f90() {
   return (neuron0x2eb0830()*-0.0427252);
}

double NNfunction_NG_5::synapse0x2ec2fd0() {
   return (neuron0x2eb0b70()*-0.0140333);
}

double NNfunction_NG_5::synapse0x2ec2a60() {
   return (neuron0x2eb0eb0()*-0.0537742);
}

double NNfunction_NG_5::synapse0x2ec2aa0() {
   return (neuron0x2eb1410()*0.0226847);
}

double NNfunction_NG_5::synapse0x2ec3120() {
   return (neuron0x2eb1630()*0.0429288);
}

double NNfunction_NG_5::synapse0x2ec3160() {
   return (neuron0x2eb1970()*-0.0122113);
}

double NNfunction_NG_5::synapse0x2ec31a0() {
   return (neuron0x2eb1cb0()*-0.015002);
}

double NNfunction_NG_5::synapse0x2ec31e0() {
   return (neuron0x2eb1ff0()*0.0236003);
}

double NNfunction_NG_5::synapse0x2ec3220() {
   return (neuron0x2eb2330()*0.00678346);
}

double NNfunction_NG_5::synapse0x2ec3260() {
   return (neuron0x2eb2670()*0.102289);
}

double NNfunction_NG_5::synapse0x2ed5130() {
   return (neuron0x2eadab0()*0.094599);
}

double NNfunction_NG_5::synapse0x2ed5170() {
   return (neuron0x2eaddf0()*-0.0118783);
}

double NNfunction_NG_5::synapse0x2ed51b0() {
   return (neuron0x2eae130()*-0.607015);
}

double NNfunction_NG_5::synapse0x2ed51f0() {
   return (neuron0x2eae470()*-0.369597);
}

double NNfunction_NG_5::synapse0x2ed5230() {
   return (neuron0x2eae7b0()*0.131537);
}

double NNfunction_NG_5::synapse0x2ed5270() {
   return (neuron0x2eaeaf0()*0.0331484);
}

double NNfunction_NG_5::synapse0x2ed52b0() {
   return (neuron0x2eaee30()*-0.111675);
}

double NNfunction_NG_5::synapse0x2ed52f0() {
   return (neuron0x2eaf170()*0.257371);
}

double NNfunction_NG_5::synapse0x2ed5330() {
   return (neuron0x2eaf4b0()*0.23618);
}

double NNfunction_NG_5::synapse0x2ed5370() {
   return (neuron0x2eaf7f0()*-0.102348);
}

double NNfunction_NG_5::synapse0x2ed53b0() {
   return (neuron0x2eafb30()*0.0734297);
}

double NNfunction_NG_5::synapse0x2ed53f0() {
   return (neuron0x2eafe70()*-0.981655);
}

double NNfunction_NG_5::synapse0x2ed5430() {
   return (neuron0x2eb01b0()*-0.474589);
}

double NNfunction_NG_5::synapse0x2ed5470() {
   return (neuron0x2eb04f0()*0.0540355);
}

double NNfunction_NG_5::synapse0x2ed54b0() {
   return (neuron0x2eb0830()*0.134221);
}

double NNfunction_NG_5::synapse0x2ed54f0() {
   return (neuron0x2eb0b70()*-0.178896);
}

double NNfunction_NG_5::synapse0x2ec32a0() {
   return (neuron0x2eb0eb0()*0.0605716);
}

double NNfunction_NG_5::synapse0x2ec32e0() {
   return (neuron0x2eb1410()*-0.235429);
}

double NNfunction_NG_5::synapse0x2ed5640() {
   return (neuron0x2eb1630()*0.21414);
}

double NNfunction_NG_5::synapse0x2ed5680() {
   return (neuron0x2eb1970()*-0.107539);
}

double NNfunction_NG_5::synapse0x2ed56c0() {
   return (neuron0x2eb1cb0()*-0.0721287);
}

double NNfunction_NG_5::synapse0x2ed5700() {
   return (neuron0x2eb1ff0()*-0.107678);
}

double NNfunction_NG_5::synapse0x2ed5740() {
   return (neuron0x2eb2330()*-0.0384369);
}

double NNfunction_NG_5::synapse0x2ed5780() {
   return (neuron0x2eb2670()*0.622507);
}

double NNfunction_NG_5::synapse0x2ed5b00() {
   return (neuron0x2eadab0()*0.0291775);
}

double NNfunction_NG_5::synapse0x2ed5b40() {
   return (neuron0x2eaddf0()*-0.0219926);
}

double NNfunction_NG_5::synapse0x2ed5b80() {
   return (neuron0x2eae130()*-0.237986);
}

double NNfunction_NG_5::synapse0x2ed5bc0() {
   return (neuron0x2eae470()*0.328527);
}

double NNfunction_NG_5::synapse0x2ed5c00() {
   return (neuron0x2eae7b0()*-0.0204544);
}

double NNfunction_NG_5::synapse0x2ed5c40() {
   return (neuron0x2eaeaf0()*-0.00375688);
}

double NNfunction_NG_5::synapse0x2ed5c80() {
   return (neuron0x2eaee30()*-0.00469896);
}

double NNfunction_NG_5::synapse0x2ed5cc0() {
   return (neuron0x2eaf170()*-0.000397318);
}

double NNfunction_NG_5::synapse0x2ed5d00() {
   return (neuron0x2eaf4b0()*-0.00290069);
}

double NNfunction_NG_5::synapse0x2ed5d40() {
   return (neuron0x2eaf7f0()*-0.00917029);
}

double NNfunction_NG_5::synapse0x2ed5d80() {
   return (neuron0x2eafb30()*-0.00121083);
}

double NNfunction_NG_5::synapse0x2ed5dc0() {
   return (neuron0x2eafe70()*-0.725376);
}

double NNfunction_NG_5::synapse0x2ed5e00() {
   return (neuron0x2eb01b0()*-0.036329);
}

double NNfunction_NG_5::synapse0x2ed5e40() {
   return (neuron0x2eb04f0()*0.0114611);
}

double NNfunction_NG_5::synapse0x2ed5e80() {
   return (neuron0x2eb0830()*0.0300375);
}

double NNfunction_NG_5::synapse0x2ed5ec0() {
   return (neuron0x2eb0b70()*0.000704663);
}

double NNfunction_NG_5::synapse0x2ed5950() {
   return (neuron0x2eb0eb0()*-0.00427922);
}

double NNfunction_NG_5::synapse0x2ed5990() {
   return (neuron0x2eb1410()*0.0207241);
}

double NNfunction_NG_5::synapse0x2ed6010() {
   return (neuron0x2eb1630()*0.0102931);
}

double NNfunction_NG_5::synapse0x2ed6050() {
   return (neuron0x2eb1970()*0.00374081);
}

double NNfunction_NG_5::synapse0x2ed6090() {
   return (neuron0x2eb1cb0()*-0.0485126);
}

double NNfunction_NG_5::synapse0x2ed60d0() {
   return (neuron0x2eb1ff0()*-0.00259515);
}

double NNfunction_NG_5::synapse0x2ed6110() {
   return (neuron0x2eb2330()*0.011704);
}

double NNfunction_NG_5::synapse0x2ed6150() {
   return (neuron0x2eb2670()*0.0752858);
}

double NNfunction_NG_5::synapse0x2ed64d0() {
   return (neuron0x2eadab0()*-0.0467034);
}

double NNfunction_NG_5::synapse0x2ed6510() {
   return (neuron0x2eaddf0()*0.0115014);
}

double NNfunction_NG_5::synapse0x2ed6550() {
   return (neuron0x2eae130()*-1.16535);
}

double NNfunction_NG_5::synapse0x2ed6590() {
   return (neuron0x2eae470()*0.00438062);
}

double NNfunction_NG_5::synapse0x2ed65d0() {
   return (neuron0x2eae7b0()*0.0135683);
}

double NNfunction_NG_5::synapse0x2ed6610() {
   return (neuron0x2eaeaf0()*0.00320932);
}

double NNfunction_NG_5::synapse0x2ed6650() {
   return (neuron0x2eaee30()*-0.00450451);
}

double NNfunction_NG_5::synapse0x2ed6690() {
   return (neuron0x2eaf170()*-0.00967508);
}

double NNfunction_NG_5::synapse0x2ed66d0() {
   return (neuron0x2eaf4b0()*0.0106533);
}

double NNfunction_NG_5::synapse0x2ed6710() {
   return (neuron0x2eaf7f0()*-0.0115813);
}

double NNfunction_NG_5::synapse0x2ed6750() {
   return (neuron0x2eafb30()*-0.00350231);
}

double NNfunction_NG_5::synapse0x2ed6790() {
   return (neuron0x2eafe70()*-0.152798);
}

double NNfunction_NG_5::synapse0x2ed67d0() {
   return (neuron0x2eb01b0()*-0.0739805);
}

double NNfunction_NG_5::synapse0x2ed6810() {
   return (neuron0x2eb04f0()*-0.0163475);
}

double NNfunction_NG_5::synapse0x2ed6850() {
   return (neuron0x2eb0830()*-0.01924);
}

double NNfunction_NG_5::synapse0x2ed6890() {
   return (neuron0x2eb0b70()*-0.0104799);
}

double NNfunction_NG_5::synapse0x2ed6320() {
   return (neuron0x2eb0eb0()*0.000935863);
}

double NNfunction_NG_5::synapse0x2ed6360() {
   return (neuron0x2eb1410()*-0.0454482);
}

double NNfunction_NG_5::synapse0x2ed69e0() {
   return (neuron0x2eb1630()*-0.0140524);
}

double NNfunction_NG_5::synapse0x2ed6a20() {
   return (neuron0x2eb1970()*0.00170393);
}

double NNfunction_NG_5::synapse0x2ed6a60() {
   return (neuron0x2eb1cb0()*0.0208966);
}

double NNfunction_NG_5::synapse0x2ed6aa0() {
   return (neuron0x2eb1ff0()*0.0196055);
}

double NNfunction_NG_5::synapse0x2ed6ae0() {
   return (neuron0x2eb2330()*-0.0121081);
}

double NNfunction_NG_5::synapse0x2ed6b20() {
   return (neuron0x2eb2670()*-4.37201);
}

double NNfunction_NG_5::synapse0x2ed6ea0() {
   return (neuron0x2eadab0()*-0.0396991);
}

double NNfunction_NG_5::synapse0x2ed6ee0() {
   return (neuron0x2eaddf0()*0.158066);
}

double NNfunction_NG_5::synapse0x2ed6f20() {
   return (neuron0x2eae130()*-0.223455);
}

double NNfunction_NG_5::synapse0x2ed6f60() {
   return (neuron0x2eae470()*-0.177683);
}

double NNfunction_NG_5::synapse0x2ed6fa0() {
   return (neuron0x2eae7b0()*-0.170621);
}

double NNfunction_NG_5::synapse0x2ed6fe0() {
   return (neuron0x2eaeaf0()*0.0715605);
}

double NNfunction_NG_5::synapse0x2ed7020() {
   return (neuron0x2eaee30()*0.000505651);
}

double NNfunction_NG_5::synapse0x2ed7060() {
   return (neuron0x2eaf170()*-0.0144139);
}

double NNfunction_NG_5::synapse0x2ed70a0() {
   return (neuron0x2eaf4b0()*0.190994);
}

double NNfunction_NG_5::synapse0x2ed70e0() {
   return (neuron0x2eaf7f0()*0.211473);
}

double NNfunction_NG_5::synapse0x2ed7120() {
   return (neuron0x2eafb30()*-0.0143156);
}

double NNfunction_NG_5::synapse0x2ed7160() {
   return (neuron0x2eafe70()*0.492551);
}

double NNfunction_NG_5::synapse0x2ed71a0() {
   return (neuron0x2eb01b0()*0.83985);
}

double NNfunction_NG_5::synapse0x2ed71e0() {
   return (neuron0x2eb04f0()*-0.185237);
}

double NNfunction_NG_5::synapse0x2ed7220() {
   return (neuron0x2eb0830()*0.0255017);
}

double NNfunction_NG_5::synapse0x2ed7260() {
   return (neuron0x2eb0b70()*-0.359461);
}

double NNfunction_NG_5::synapse0x2ed6cf0() {
   return (neuron0x2eb0eb0()*-0.416071);
}

double NNfunction_NG_5::synapse0x2ed6d30() {
   return (neuron0x2eb1410()*-0.218239);
}

double NNfunction_NG_5::synapse0x2ed73b0() {
   return (neuron0x2eb1630()*-0.0530301);
}

double NNfunction_NG_5::synapse0x2ed73f0() {
   return (neuron0x2eb1970()*-0.135144);
}

double NNfunction_NG_5::synapse0x2ed7430() {
   return (neuron0x2eb1cb0()*-0.105309);
}

double NNfunction_NG_5::synapse0x2ed7470() {
   return (neuron0x2eb1ff0()*-0.446571);
}

double NNfunction_NG_5::synapse0x2ed74b0() {
   return (neuron0x2eb2330()*0.0695967);
}

double NNfunction_NG_5::synapse0x2ed74f0() {
   return (neuron0x2eb2670()*0.214955);
}

double NNfunction_NG_5::synapse0x2c6d870() {
   return (neuron0x2eb2ae0()*1.95877);
}

double NNfunction_NG_5::synapse0x2c6d8b0() {
   return (neuron0x2eb3430()*1.20223);
}

double NNfunction_NG_5::synapse0x2eb4fa0() {
   return (neuron0x2eb3f10()*-0.786253);
}

double NNfunction_NG_5::synapse0x2eb4fe0() {
   return (neuron0x2eb39b0()*1.96041);
}

double NNfunction_NG_5::synapse0x2eb5970() {
   return (neuron0x2eb4cf0()*2.44385);
}

double NNfunction_NG_5::synapse0x2eb59b0() {
   return (neuron0x2eb56c0()*-1.81789);
}

double NNfunction_NG_5::synapse0x2eb6740() {
   return (neuron0x2eb6490()*-1.18836);
}

double NNfunction_NG_5::synapse0x2eb6780() {
   return (neuron0x2eb6e60()*3.06827);
}

double NNfunction_NG_5::synapse0x2eb7110() {
   return (neuron0x2eb7830()*0.202328);
}

double NNfunction_NG_5::synapse0x2eb7150() {
   return (neuron0x2eb8310()*4.53631);
}

double NNfunction_NG_5::synapse0x2eb7ae0() {
   return (neuron0x2eb8ce0()*0.53481);
}

double NNfunction_NG_5::synapse0x2eb7b20() {
   return (neuron0x2eb5dc0()*1.79882);
}

double NNfunction_NG_5::synapse0x2eb85c0() {
   return (neuron0x2eba890()*-3.49008);
}

double NNfunction_NG_5::synapse0x2eb8600() {
   return (neuron0x2ebb260()*0.268792);
}

double NNfunction_NG_5::synapse0x2eb8f90() {
   return (neuron0x2ebbc30()*-2.84426);
}

double NNfunction_NG_5::synapse0x2eb8fd0() {
   return (neuron0x2ebc600()*-0.241074);
}

double NNfunction_NG_5::synapse0x2eb6070() {
   return (neuron0x2ebe410()*-1.09948);
}

double NNfunction_NG_5::synapse0x2eb60b0() {
   return (neuron0x2ebe6f0()*-2.68064);
}

double NNfunction_NG_5::synapse0x2ebab40() {
   return (neuron0x2ebf0c0()*4.86961);
}

double NNfunction_NG_5::synapse0x2ebab80() {
   return (neuron0x2ebfa90()*-1.35732);
}

double NNfunction_NG_5::synapse0x2ebb510() {
   return (neuron0x2ec0460()*-0.248219);
}

double NNfunction_NG_5::synapse0x2ebb550() {
   return (neuron0x2ec0e30()*-0.450451);
}

double NNfunction_NG_5::synapse0x2ebbee0() {
   return (neuron0x2eb9980()*0.807688);
}

double NNfunction_NG_5::synapse0x2ebbf20() {
   return (neuron0x2eba350()*0.28404);
}

double NNfunction_NG_5::synapse0x2ebc8b0() {
   return (neuron0x2ec3bc0()*-0.367987);
}

double NNfunction_NG_5::synapse0x2ebc8f0() {
   return (neuron0x2ec4590()*-2.14415);
}

double NNfunction_NG_5::synapse0x2eb0a50() {
   return (neuron0x2ec4f60()*-0.21337);
}

double NNfunction_NG_5::synapse0x2eb0a90() {
   return (neuron0x2ec5930()*-2.23606);
}

double NNfunction_NG_5::synapse0x2ebe9a0() {
   return (neuron0x2ec6300()*0.6747);
}

double NNfunction_NG_5::synapse0x2ebe9e0() {
   return (neuron0x2ec6cd0()*-0.0132461);
}

double NNfunction_NG_5::synapse0x2ebf370() {
   return (neuron0x2ec76a0()*-0.434952);
}

double NNfunction_NG_5::synapse0x2ebf3b0() {
   return (neuron0x2ec8070()*0.770863);
}

double NNfunction_NG_5::synapse0x2ebfd40() {
   return (neuron0x2ebe100()*0.667693);
}

double NNfunction_NG_5::synapse0x2ebfd80() {
   return (neuron0x2ecac50()*-0.264836);
}

double NNfunction_NG_5::synapse0x2ec0710() {
   return (neuron0x2ecb620()*0.29882);
}

double NNfunction_NG_5::synapse0x2ec0750() {
   return (neuron0x2ecbff0()*-0.231238);
}

double NNfunction_NG_5::synapse0x2ec10e0() {
   return (neuron0x2ecc9c0()*-1.3637);
}

double NNfunction_NG_5::synapse0x2ec1120() {
   return (neuron0x2ecd390()*-0.412431);
}

double NNfunction_NG_5::synapse0x2eb9c30() {
   return (neuron0x2ecdd60()*0.175455);
}

double NNfunction_NG_5::synapse0x2eb9c70() {
   return (neuron0x2ece730()*-0.466202);
}

double NNfunction_NG_5::synapse0x2ec34e0() {
   return (neuron0x2ecf100()*0.429841);
}

double NNfunction_NG_5::synapse0x2ec3520() {
   return (neuron0x2ecfce0()*2.35081);
}

double NNfunction_NG_5::synapse0x2ec3e70() {
   return (neuron0x2ed06b0()*-0.772037);
}

double NNfunction_NG_5::synapse0x2ec3eb0() {
   return (neuron0x2ec1530()*-0.807536);
}

double NNfunction_NG_5::synapse0x2ec4840() {
   return (neuron0x2ec1f00()*-0.912802);
}

double NNfunction_NG_5::synapse0x2ec4880() {
   return (neuron0x2ec28d0()*1.31755);
}

double NNfunction_NG_5::synapse0x2ec5210() {
   return (neuron0x2ed4f10()*0.959918);
}

double NNfunction_NG_5::synapse0x2ec5250() {
   return (neuron0x2ed57c0()*-0.0453134);
}

double NNfunction_NG_5::synapse0x2ec5be0() {
   return (neuron0x2ed6190()*2.03307);
}

double NNfunction_NG_5::synapse0x2ec5c20() {
   return (neuron0x2ed6b60()*0.760733);
}

double NNfunction_NG_5::synapse0x2ec8320() {
   return (neuron0x2eb2ae0()*-0.154007);
}

double NNfunction_NG_5::synapse0x2ec8360() {
   return (neuron0x2eb3430()*0.626895);
}

double NNfunction_NG_5::synapse0x2ebd8e0() {
   return (neuron0x2eb3f10()*-0.0986327);
}

double NNfunction_NG_5::synapse0x2ebd920() {
   return (neuron0x2eb39b0()*0.397551);
}

double NNfunction_NG_5::synapse0x2ecaf00() {
   return (neuron0x2eb4cf0()*0.196304);
}

double NNfunction_NG_5::synapse0x2ecaf40() {
   return (neuron0x2eb56c0()*-0.45654);
}

double NNfunction_NG_5::synapse0x2ecb8d0() {
   return (neuron0x2eb6490()*-0.179089);
}

double NNfunction_NG_5::synapse0x2ecb910() {
   return (neuron0x2eb6e60()*-1.75083);
}

double NNfunction_NG_5::synapse0x2ecc2a0() {
   return (neuron0x2eb7830()*0.445164);
}

double NNfunction_NG_5::synapse0x2ecc2e0() {
   return (neuron0x2eb8310()*-0.132361);
}

double NNfunction_NG_5::synapse0x2eccc70() {
   return (neuron0x2eb8ce0()*0.0302525);
}

double NNfunction_NG_5::synapse0x2ecccb0() {
   return (neuron0x2eb5dc0()*-1.08872);
}

double NNfunction_NG_5::synapse0x2ecd640() {
   return (neuron0x2eba890()*-0.683591);
}

double NNfunction_NG_5::synapse0x2ecd680() {
   return (neuron0x2ebb260()*0.120322);
}

double NNfunction_NG_5::synapse0x2ece010() {
   return (neuron0x2ebbc30()*1.83689);
}

double NNfunction_NG_5::synapse0x2ece050() {
   return (neuron0x2ebc600()*-0.129551);
}

double NNfunction_NG_5::synapse0x2ece9e0() {
   return (neuron0x2ebe410()*1.58791);
}

double NNfunction_NG_5::synapse0x2ecea20() {
   return (neuron0x2ebe6f0()*-1.09214);
}

double NNfunction_NG_5::synapse0x2ecf3b0() {
   return (neuron0x2ebf0c0()*-0.243803);
}

double NNfunction_NG_5::synapse0x2ecf3f0() {
   return (neuron0x2ebfa90()*-0.0665058);
}

double NNfunction_NG_5::synapse0x2ecff90() {
   return (neuron0x2ec0460()*-0.47685);
}

double NNfunction_NG_5::synapse0x2ecffd0() {
   return (neuron0x2ec0e30()*-0.0851795);
}

double NNfunction_NG_5::synapse0x2ed0960() {
   return (neuron0x2eb9980()*-0.524805);
}

double NNfunction_NG_5::synapse0x2ed09a0() {
   return (neuron0x2eba350()*-0.380159);
}

double NNfunction_NG_5::synapse0x2ec17e0() {
   return (neuron0x2ec3bc0()*0.167739);
}

double NNfunction_NG_5::synapse0x2ec1820() {
   return (neuron0x2ec4590()*-0.479028);
}

double NNfunction_NG_5::synapse0x2ec21b0() {
   return (neuron0x2ec4f60()*-0.0624163);
}

double NNfunction_NG_5::synapse0x2ec21f0() {
   return (neuron0x2ec5930()*0.95025);
}

double NNfunction_NG_5::synapse0x2ec2b80() {
   return (neuron0x2ec6300()*0.114419);
}

double NNfunction_NG_5::synapse0x2ec2bc0() {
   return (neuron0x2ec6cd0()*-0.05493);
}

double NNfunction_NG_5::synapse0x2ed50a0() {
   return (neuron0x2ec76a0()*-0.144941);
}

double NNfunction_NG_5::synapse0x2ed50e0() {
   return (neuron0x2ec8070()*-0.0224756);
}

double NNfunction_NG_5::synapse0x2ed5a70() {
   return (neuron0x2ebe100()*0.593595);
}

double NNfunction_NG_5::synapse0x2ed5ab0() {
   return (neuron0x2ecac50()*-0.0952726);
}

double NNfunction_NG_5::synapse0x2ed6440() {
   return (neuron0x2ecb620()*-0.331075);
}

double NNfunction_NG_5::synapse0x2ed6480() {
   return (neuron0x2ecbff0()*0.498383);
}

double NNfunction_NG_5::synapse0x2ed6e10() {
   return (neuron0x2ecc9c0()*-0.264801);
}

double NNfunction_NG_5::synapse0x2ed6e50() {
   return (neuron0x2ecd390()*-0.0598202);
}

double NNfunction_NG_5::synapse0x2eb2d00() {
   return (neuron0x2ecdd60()*0.211908);
}

double NNfunction_NG_5::synapse0x2eb2d40() {
   return (neuron0x2ece730()*-0.0323444);
}

double NNfunction_NG_5::synapse0x2ec65b0() {
   return (neuron0x2ecf100()*-0.76747);
}

double NNfunction_NG_5::synapse0x2ec65f0() {
   return (neuron0x2ecfce0()*-1.79461);
}

double NNfunction_NG_5::synapse0x2ed7530() {
   return (neuron0x2ed06b0()*0.0878546);
}

double NNfunction_NG_5::synapse0x2ed7570() {
   return (neuron0x2ec1530()*-0.0554822);
}

double NNfunction_NG_5::synapse0x2ed75b0() {
   return (neuron0x2ec1f00()*0.113696);
}

double NNfunction_NG_5::synapse0x2ed75f0() {
   return (neuron0x2ec28d0()*-0.941947);
}

double NNfunction_NG_5::synapse0x2ede4a0() {
   return (neuron0x2ed4f10()*-0.141421);
}

double NNfunction_NG_5::synapse0x2ede4e0() {
   return (neuron0x2ed57c0()*-0.355883);
}

double NNfunction_NG_5::synapse0x2ede520() {
   return (neuron0x2ed6190()*-1.58002);
}

double NNfunction_NG_5::synapse0x2ede560() {
   return (neuron0x2ed6b60()*0.193805);
}

double NNfunction_NG_5::synapse0x2ede8e0() {
   return (neuron0x2eb2ae0()*-1.60737);
}

double NNfunction_NG_5::synapse0x2ede920() {
   return (neuron0x2eb3430()*-1.39372);
}

double NNfunction_NG_5::synapse0x2ede960() {
   return (neuron0x2eb3f10()*0.185655);
}

double NNfunction_NG_5::synapse0x2ede9a0() {
   return (neuron0x2eb39b0()*0.190774);
}

double NNfunction_NG_5::synapse0x2ede9e0() {
   return (neuron0x2eb4cf0()*1.38798);
}

double NNfunction_NG_5::synapse0x2edea20() {
   return (neuron0x2eb56c0()*0.242723);
}

double NNfunction_NG_5::synapse0x2edea60() {
   return (neuron0x2eb6490()*-1.26594);
}

double NNfunction_NG_5::synapse0x2edeaa0() {
   return (neuron0x2eb6e60()*2.23433);
}

double NNfunction_NG_5::synapse0x2edeae0() {
   return (neuron0x2eb7830()*-0.178773);
}

double NNfunction_NG_5::synapse0x2edeb20() {
   return (neuron0x2eb8310()*1.96366);
}

double NNfunction_NG_5::synapse0x2edeb60() {
   return (neuron0x2eb8ce0()*-0.0741286);
}

double NNfunction_NG_5::synapse0x2edeba0() {
   return (neuron0x2eb5dc0()*-0.0281768);
}

double NNfunction_NG_5::synapse0x2edebe0() {
   return (neuron0x2eba890()*-0.461297);
}

double NNfunction_NG_5::synapse0x2edec20() {
   return (neuron0x2ebb260()*-0.131161);
}

double NNfunction_NG_5::synapse0x2edec60() {
   return (neuron0x2ebbc30()*-1.12171);
}

double NNfunction_NG_5::synapse0x2edeca0() {
   return (neuron0x2ebc600()*0.591618);
}

double NNfunction_NG_5::synapse0x2ede730() {
   return (neuron0x2ebe410()*0.132809);
}

double NNfunction_NG_5::synapse0x2ede770() {
   return (neuron0x2ebe6f0()*0.628282);
}

double NNfunction_NG_5::synapse0x2ededf0() {
   return (neuron0x2ebf0c0()*2.19774);
}

double NNfunction_NG_5::synapse0x2edee30() {
   return (neuron0x2ebfa90()*-0.684977);
}

double NNfunction_NG_5::synapse0x2edee70() {
   return (neuron0x2ec0460()*-1.06601);
}

double NNfunction_NG_5::synapse0x2edeeb0() {
   return (neuron0x2ec0e30()*-0.37672);
}

double NNfunction_NG_5::synapse0x2edeef0() {
   return (neuron0x2eb9980()*0.180739);
}

double NNfunction_NG_5::synapse0x2edef30() {
   return (neuron0x2eba350()*1.29002);
}

double NNfunction_NG_5::synapse0x2edef70() {
   return (neuron0x2ec3bc0()*-0.716389);
}

double NNfunction_NG_5::synapse0x2edefb0() {
   return (neuron0x2ec4590()*-0.063396);
}

double NNfunction_NG_5::synapse0x2edeff0() {
   return (neuron0x2ec4f60()*0.376972);
}

double NNfunction_NG_5::synapse0x2edf030() {
   return (neuron0x2ec5930()*0.0954946);
}

double NNfunction_NG_5::synapse0x2edf070() {
   return (neuron0x2ec6300()*1.06213);
}

double NNfunction_NG_5::synapse0x2edf0b0() {
   return (neuron0x2ec6cd0()*0.450533);
}

double NNfunction_NG_5::synapse0x2edf0f0() {
   return (neuron0x2ec76a0()*-0.289399);
}

double NNfunction_NG_5::synapse0x2edf130() {
   return (neuron0x2ec8070()*1.16709);
}

double NNfunction_NG_5::synapse0x2edece0() {
   return (neuron0x2ebe100()*1.35726);
}

double NNfunction_NG_5::synapse0x2eded20() {
   return (neuron0x2ecac50()*-0.113515);
}

double NNfunction_NG_5::synapse0x2eded60() {
   return (neuron0x2ecb620()*1.66671);
}

double NNfunction_NG_5::synapse0x2ededa0() {
   return (neuron0x2ecbff0()*1.31451);
}

double NNfunction_NG_5::synapse0x2edf380() {
   return (neuron0x2ecc9c0()*0.824244);
}

double NNfunction_NG_5::synapse0x2edf3c0() {
   return (neuron0x2ecd390()*0.361364);
}

double NNfunction_NG_5::synapse0x2edf400() {
   return (neuron0x2ecdd60()*0.123037);
}

double NNfunction_NG_5::synapse0x2edf440() {
   return (neuron0x2ece730()*-0.850843);
}

double NNfunction_NG_5::synapse0x2edf480() {
   return (neuron0x2ecf100()*0.107587);
}

double NNfunction_NG_5::synapse0x2edf4c0() {
   return (neuron0x2ecfce0()*2.10607);
}

double NNfunction_NG_5::synapse0x2edf500() {
   return (neuron0x2ed06b0()*0.569745);
}

double NNfunction_NG_5::synapse0x2edf540() {
   return (neuron0x2ec1530()*0.85042);
}

double NNfunction_NG_5::synapse0x2edf580() {
   return (neuron0x2ec1f00()*0.372838);
}

double NNfunction_NG_5::synapse0x2edf5c0() {
   return (neuron0x2ec28d0()*0.0985139);
}

double NNfunction_NG_5::synapse0x2edf600() {
   return (neuron0x2ed4f10()*-0.339736);
}

double NNfunction_NG_5::synapse0x2edf640() {
   return (neuron0x2ed57c0()*-1.21463);
}

double NNfunction_NG_5::synapse0x2edf680() {
   return (neuron0x2ed6190()*0.470623);
}

double NNfunction_NG_5::synapse0x2edf6c0() {
   return (neuron0x2ed6b60()*-0.0943489);
}

double NNfunction_NG_5::synapse0x2edfa40() {
   return (neuron0x2eb2ae0()*-0.15029);
}

double NNfunction_NG_5::synapse0x2edfa80() {
   return (neuron0x2eb3430()*-0.206111);
}

double NNfunction_NG_5::synapse0x2edfac0() {
   return (neuron0x2eb3f10()*0.0625915);
}

double NNfunction_NG_5::synapse0x2edfb00() {
   return (neuron0x2eb39b0()*-0.120338);
}

double NNfunction_NG_5::synapse0x2edfb40() {
   return (neuron0x2eb4cf0()*1.72107);
}

double NNfunction_NG_5::synapse0x2edfb80() {
   return (neuron0x2eb56c0()*0.141589);
}

double NNfunction_NG_5::synapse0x2edfbc0() {
   return (neuron0x2eb6490()*-0.82989);
}

double NNfunction_NG_5::synapse0x2edfc00() {
   return (neuron0x2eb6e60()*1.02197);
}

double NNfunction_NG_5::synapse0x2edfc40() {
   return (neuron0x2eb7830()*-0.0161454);
}

double NNfunction_NG_5::synapse0x2edfc80() {
   return (neuron0x2eb8310()*0.665696);
}

double NNfunction_NG_5::synapse0x2edfcc0() {
   return (neuron0x2eb8ce0()*-0.0334448);
}

double NNfunction_NG_5::synapse0x2edfd00() {
   return (neuron0x2eb5dc0()*0.559685);
}

double NNfunction_NG_5::synapse0x2edfd40() {
   return (neuron0x2eba890()*0.149866);
}

double NNfunction_NG_5::synapse0x2edfd80() {
   return (neuron0x2ebb260()*-0.0197206);
}

double NNfunction_NG_5::synapse0x2edfdc0() {
   return (neuron0x2ebbc30()*-0.368442);
}

double NNfunction_NG_5::synapse0x2edfe00() {
   return (neuron0x2ebc600()*0.0243433);
}

double NNfunction_NG_5::synapse0x2edf890() {
   return (neuron0x2ebe410()*-0.564432);
}

double NNfunction_NG_5::synapse0x2edf8d0() {
   return (neuron0x2ebe6f0()*0.173522);
}

double NNfunction_NG_5::synapse0x2edff50() {
   return (neuron0x2ebf0c0()*0.767804);
}

double NNfunction_NG_5::synapse0x2edff90() {
   return (neuron0x2ebfa90()*-1.31538);
}

double NNfunction_NG_5::synapse0x2edffd0() {
   return (neuron0x2ec0460()*0.0726846);
}

double NNfunction_NG_5::synapse0x2ee0010() {
   return (neuron0x2ec0e30()*0.0324497);
}

double NNfunction_NG_5::synapse0x2ee0050() {
   return (neuron0x2eb9980()*-0.405);
}

double NNfunction_NG_5::synapse0x2ee0090() {
   return (neuron0x2eba350()*-0.0753402);
}

double NNfunction_NG_5::synapse0x2ee00d0() {
   return (neuron0x2ec3bc0()*0.657816);
}

double NNfunction_NG_5::synapse0x2ee0110() {
   return (neuron0x2ec4590()*0.138308);
}

double NNfunction_NG_5::synapse0x2ee0150() {
   return (neuron0x2ec4f60()*-0.00192482);
}

double NNfunction_NG_5::synapse0x2ee0190() {
   return (neuron0x2ec5930()*-0.457708);
}

double NNfunction_NG_5::synapse0x2ee01d0() {
   return (neuron0x2ec6300()*-0.0504971);
}

double NNfunction_NG_5::synapse0x2ee0210() {
   return (neuron0x2ec6cd0()*0.0343918);
}

double NNfunction_NG_5::synapse0x2ee0250() {
   return (neuron0x2ec76a0()*0.0341753);
}

double NNfunction_NG_5::synapse0x2ee0290() {
   return (neuron0x2ec8070()*1.74643);
}

double NNfunction_NG_5::synapse0x2edfe40() {
   return (neuron0x2ebe100()*-0.820187);
}

double NNfunction_NG_5::synapse0x2edfe80() {
   return (neuron0x2ecac50()*0.0270376);
}

double NNfunction_NG_5::synapse0x2edfec0() {
   return (neuron0x2ecb620()*-0.0295975);
}

double NNfunction_NG_5::synapse0x2edff00() {
   return (neuron0x2ecbff0()*0.152545);
}

double NNfunction_NG_5::synapse0x2ee04e0() {
   return (neuron0x2ecc9c0()*0.206126);
}

double NNfunction_NG_5::synapse0x2ee0520() {
   return (neuron0x2ecd390()*0.0301281);
}

double NNfunction_NG_5::synapse0x2ee0560() {
   return (neuron0x2ecdd60()*-0.0187535);
}

double NNfunction_NG_5::synapse0x2ee05a0() {
   return (neuron0x2ece730()*0.0318439);
}

double NNfunction_NG_5::synapse0x2ee05e0() {
   return (neuron0x2ecf100()*-1.20095);
}

double NNfunction_NG_5::synapse0x2ee0620() {
   return (neuron0x2ecfce0()*0.831166);
}

double NNfunction_NG_5::synapse0x2ee0660() {
   return (neuron0x2ed06b0()*0.0238799);
}

double NNfunction_NG_5::synapse0x2ee06a0() {
   return (neuron0x2ec1530()*0.956645);
}

double NNfunction_NG_5::synapse0x2ee06e0() {
   return (neuron0x2ec1f00()*0.00842345);
}

double NNfunction_NG_5::synapse0x2ee0720() {
   return (neuron0x2ec28d0()*-0.243664);
}

double NNfunction_NG_5::synapse0x2ee0760() {
   return (neuron0x2ed4f10()*-0.0283875);
}

double NNfunction_NG_5::synapse0x2ee07a0() {
   return (neuron0x2ed57c0()*-0.754822);
}

double NNfunction_NG_5::synapse0x2ee07e0() {
   return (neuron0x2ed6190()*0.704794);
}

double NNfunction_NG_5::synapse0x2ee0820() {
   return (neuron0x2ed6b60()*-0.0422527);
}

double NNfunction_NG_5::synapse0x2ee0ba0() {
   return (neuron0x2eb2ae0()*-0.109695);
}

double NNfunction_NG_5::synapse0x2ee0be0() {
   return (neuron0x2eb3430()*-0.564063);
}

double NNfunction_NG_5::synapse0x2ee0c20() {
   return (neuron0x2eb3f10()*0.548473);
}

double NNfunction_NG_5::synapse0x2ee0c60() {
   return (neuron0x2eb39b0()*0.80398);
}

double NNfunction_NG_5::synapse0x2ee0ca0() {
   return (neuron0x2eb4cf0()*0.798495);
}

double NNfunction_NG_5::synapse0x2ee0ce0() {
   return (neuron0x2eb56c0()*0.345529);
}

double NNfunction_NG_5::synapse0x2ee0d20() {
   return (neuron0x2eb6490()*-0.142098);
}

double NNfunction_NG_5::synapse0x2ee0d60() {
   return (neuron0x2eb6e60()*1.30054);
}

double NNfunction_NG_5::synapse0x2ee0da0() {
   return (neuron0x2eb7830()*0.361049);
}

double NNfunction_NG_5::synapse0x2ee0de0() {
   return (neuron0x2eb8310()*1.74388);
}

double NNfunction_NG_5::synapse0x2ee0e20() {
   return (neuron0x2eb8ce0()*-0.202426);
}

double NNfunction_NG_5::synapse0x2ee0e60() {
   return (neuron0x2eb5dc0()*0.508924);
}

double NNfunction_NG_5::synapse0x2ee0ea0() {
   return (neuron0x2eba890()*-0.287128);
}

double NNfunction_NG_5::synapse0x2ee0ee0() {
   return (neuron0x2ebb260()*-0.0596781);
}

double NNfunction_NG_5::synapse0x2ee0f20() {
   return (neuron0x2ebbc30()*-0.530368);
}

double NNfunction_NG_5::synapse0x2ee0f60() {
   return (neuron0x2ebc600()*0.294697);
}

double NNfunction_NG_5::synapse0x2ee09f0() {
   return (neuron0x2ebe410()*-0.295536);
}

double NNfunction_NG_5::synapse0x2ee0a30() {
   return (neuron0x2ebe6f0()*0.313463);
}

double NNfunction_NG_5::synapse0x2ee10b0() {
   return (neuron0x2ebf0c0()*1.37815);
}

double NNfunction_NG_5::synapse0x2ee10f0() {
   return (neuron0x2ebfa90()*-0.55471);
}

double NNfunction_NG_5::synapse0x2ee1130() {
   return (neuron0x2ec0460()*-0.849313);
}

double NNfunction_NG_5::synapse0x2ee1170() {
   return (neuron0x2ec0e30()*-0.0943161);
}

double NNfunction_NG_5::synapse0x2ee11b0() {
   return (neuron0x2eb9980()*0.0734146);
}

double NNfunction_NG_5::synapse0x2ee11f0() {
   return (neuron0x2eba350()*0.860978);
}

double NNfunction_NG_5::synapse0x2ee1230() {
   return (neuron0x2ec3bc0()*1.16722);
}

double NNfunction_NG_5::synapse0x2ee1270() {
   return (neuron0x2ec4590()*-0.36511);
}

double NNfunction_NG_5::synapse0x2ee12b0() {
   return (neuron0x2ec4f60()*0.00332036);
}

double NNfunction_NG_5::synapse0x2ee12f0() {
   return (neuron0x2ec5930()*1.02308);
}

double NNfunction_NG_5::synapse0x2ee1330() {
   return (neuron0x2ec6300()*0.483032);
}

double NNfunction_NG_5::synapse0x2ee1370() {
   return (neuron0x2ec6cd0()*0.0460303);
}

double NNfunction_NG_5::synapse0x2ee13b0() {
   return (neuron0x2ec76a0()*0.0255247);
}

double NNfunction_NG_5::synapse0x2ee13f0() {
   return (neuron0x2ec8070()*0.196021);
}

double NNfunction_NG_5::synapse0x2ee0fa0() {
   return (neuron0x2ebe100()*1.03444);
}

double NNfunction_NG_5::synapse0x2ee0fe0() {
   return (neuron0x2ecac50()*0.178577);
}

double NNfunction_NG_5::synapse0x2ee1020() {
   return (neuron0x2ecb620()*0.799094);
}

double NNfunction_NG_5::synapse0x2ee1060() {
   return (neuron0x2ecbff0()*0.876433);
}

double NNfunction_NG_5::synapse0x2ee1640() {
   return (neuron0x2ecc9c0()*-0.0866044);
}

double NNfunction_NG_5::synapse0x2ee1680() {
   return (neuron0x2ecd390()*0.0724091);
}

double NNfunction_NG_5::synapse0x2ee16c0() {
   return (neuron0x2ecdd60()*0.388596);
}

double NNfunction_NG_5::synapse0x2ee1700() {
   return (neuron0x2ece730()*-0.393301);
}

double NNfunction_NG_5::synapse0x2ee1740() {
   return (neuron0x2ecf100()*-0.0975266);
}

double NNfunction_NG_5::synapse0x2ee1780() {
   return (neuron0x2ecfce0()*0.502203);
}

double NNfunction_NG_5::synapse0x2ee17c0() {
   return (neuron0x2ed06b0()*0.23282);
}

double NNfunction_NG_5::synapse0x2ee1800() {
   return (neuron0x2ec1530()*0.0917726);
}

double NNfunction_NG_5::synapse0x2ee1840() {
   return (neuron0x2ec1f00()*0.538118);
}

double NNfunction_NG_5::synapse0x2ee1880() {
   return (neuron0x2ec28d0()*0.448246);
}

double NNfunction_NG_5::synapse0x2ee18c0() {
   return (neuron0x2ed4f10()*0.354278);
}

double NNfunction_NG_5::synapse0x2ee1900() {
   return (neuron0x2ed57c0()*-0.81723);
}

double NNfunction_NG_5::synapse0x2ee1940() {
   return (neuron0x2ed6190()*0.226838);
}

double NNfunction_NG_5::synapse0x2ee1980() {
   return (neuron0x2ed6b60()*0.389042);
}

double NNfunction_NG_5::synapse0x2ee1be0() {
   return (neuron0x2eddd60()*-8.63352);
}

double NNfunction_NG_5::synapse0x2ee1c20() {
   return (neuron0x2ede100()*-3.53517);
}

double NNfunction_NG_5::synapse0x2ee1c60() {
   return (neuron0x2ede5a0()*-1.10977);
}

double NNfunction_NG_5::synapse0x2ee1ca0() {
   return (neuron0x2edf700()*-8.54356);
}

double NNfunction_NG_5::synapse0x2ee1ce0() {
   return (neuron0x2ee0860()*2.85096);
}

