#include "NNfunction_ss_sLsL.h"
#include <cmath>

double NNfunction_ss_sLsL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.6983)/15.3944;
   input1 = (in1 - 0.433266)/1158.51;
   input2 = (in2 - 665.227)/622.756;
   input3 = (in3 - -56.4348)/824.102;
   input4 = (in4 - 1056.54)/950.054;
   input5 = (in5 - 893.775)/947.751;
   input6 = (in6 - 903.16)/946.532;
   input7 = (in7 - 925.099)/934.071;
   input8 = (in8 - 924.913)/973.981;
   input9 = (in9 - 897.234)/951.763;
   input10 = (in10 - 995.666)/960.476;
   input11 = (in11 - 728.5)/876.297;
   input12 = (in12 - 219.845)/173.759;
   input13 = (in13 - 500.885)/519.797;
   input14 = (in14 - 722.964)/819.334;
   input15 = (in15 - 713.419)/818.842;
   input16 = (in16 - 530.874)/557.826;
   input17 = (in17 - 761.716)/904.112;
   input18 = (in18 - 762.246)/912.738;
   input19 = (in19 - 802.414)/883.259;
   input20 = (in20 - -4.81425)/484.578;
   input21 = (in21 - 3.31385)/1146.07;
   input22 = (in22 - -2.41488)/1200.95;
   input23 = (in23 - -200.129)/599.13;
   switch(index) {
     case 0:
         return neuron0x25004a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLsL::Value(int index, double* input) {
   input0 = (input[0] - 23.6983)/15.3944;
   input1 = (input[1] - 0.433266)/1158.51;
   input2 = (input[2] - 665.227)/622.756;
   input3 = (input[3] - -56.4348)/824.102;
   input4 = (input[4] - 1056.54)/950.054;
   input5 = (input[5] - 893.775)/947.751;
   input6 = (input[6] - 903.16)/946.532;
   input7 = (input[7] - 925.099)/934.071;
   input8 = (input[8] - 924.913)/973.981;
   input9 = (input[9] - 897.234)/951.763;
   input10 = (input[10] - 995.666)/960.476;
   input11 = (input[11] - 728.5)/876.297;
   input12 = (input[12] - 219.845)/173.759;
   input13 = (input[13] - 500.885)/519.797;
   input14 = (input[14] - 722.964)/819.334;
   input15 = (input[15] - 713.419)/818.842;
   input16 = (input[16] - 530.874)/557.826;
   input17 = (input[17] - 761.716)/904.112;
   input18 = (input[18] - 762.246)/912.738;
   input19 = (input[19] - 802.414)/883.259;
   input20 = (input[20] - -4.81425)/484.578;
   input21 = (input[21] - 3.31385)/1146.07;
   input22 = (input[22] - -2.41488)/1200.95;
   input23 = (input[23] - -200.129)/599.13;
   switch(index) {
     case 0:
         return neuron0x25004a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLsL::neuron0x24cc560() {
   return input0;
}

double NNfunction_ss_sLsL::neuron0x24cc8a0() {
   return input1;
}

double NNfunction_ss_sLsL::neuron0x24ccbe0() {
   return input2;
}

double NNfunction_ss_sLsL::neuron0x24ccf20() {
   return input3;
}

double NNfunction_ss_sLsL::neuron0x24cd260() {
   return input4;
}

double NNfunction_ss_sLsL::neuron0x24cd5a0() {
   return input5;
}

double NNfunction_ss_sLsL::neuron0x24cd8e0() {
   return input6;
}

double NNfunction_ss_sLsL::neuron0x24cdc20() {
   return input7;
}

double NNfunction_ss_sLsL::neuron0x24cdf60() {
   return input8;
}

double NNfunction_ss_sLsL::neuron0x24ce2a0() {
   return input9;
}

double NNfunction_ss_sLsL::neuron0x24ce5e0() {
   return input10;
}

double NNfunction_ss_sLsL::neuron0x24ce920() {
   return input11;
}

double NNfunction_ss_sLsL::neuron0x24cec60() {
   return input12;
}

double NNfunction_ss_sLsL::neuron0x24cefa0() {
   return input13;
}

double NNfunction_ss_sLsL::neuron0x24cf2e0() {
   return input14;
}

double NNfunction_ss_sLsL::neuron0x24cf620() {
   return input15;
}

double NNfunction_ss_sLsL::neuron0x24cf960() {
   return input16;
}

double NNfunction_ss_sLsL::neuron0x24cfec0() {
   return input17;
}

double NNfunction_ss_sLsL::neuron0x24d00e0() {
   return input18;
}

double NNfunction_ss_sLsL::neuron0x24d0420() {
   return input19;
}

double NNfunction_ss_sLsL::neuron0x24d0760() {
   return input20;
}

double NNfunction_ss_sLsL::neuron0x24d0aa0() {
   return input21;
}

double NNfunction_ss_sLsL::neuron0x24d0de0() {
   return input22;
}

double NNfunction_ss_sLsL::neuron0x24d1120() {
   return input23;
}

double NNfunction_ss_sLsL::input0x24d15c0() {
   double input = 0.277145;
   input += synapse0x228c3d0();
   input += synapse0x24cc420();
   input += synapse0x24cc460();
   input += synapse0x24d1870();
   input += synapse0x24d18b0();
   input += synapse0x24d18f0();
   input += synapse0x24d1930();
   input += synapse0x24d1970();
   input += synapse0x24d19b0();
   input += synapse0x24d19f0();
   input += synapse0x24d1a30();
   input += synapse0x24d1a70();
   input += synapse0x24d1ab0();
   input += synapse0x24d1af0();
   input += synapse0x24d1b30();
   input += synapse0x24d1b70();
   input += synapse0x24cc390();
   input += synapse0x24cc3d0();
   input += synapse0x227dc70();
   input += synapse0x227dcb0();
   input += synapse0x24d1dd0();
   input += synapse0x24d1e10();
   input += synapse0x24d1e50();
   input += synapse0x24d1e90();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24d15c0() {
   double input = input0x24d15c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24d1ed0() {
   double input = 0.248488;
   input += synapse0x24d2210();
   input += synapse0x24d2250();
   input += synapse0x24d2290();
   input += synapse0x24d22d0();
   input += synapse0x24d2310();
   input += synapse0x24d2350();
   input += synapse0x24d2390();
   input += synapse0x24d23d0();
   input += synapse0x24d2410();
   input += synapse0x24d1cc0();
   input += synapse0x24d1d00();
   input += synapse0x24d1d40();
   input += synapse0x24d1d80();
   input += synapse0x24d2660();
   input += synapse0x24d26a0();
   input += synapse0x24d26e0();
   input += synapse0x24d2060();
   input += synapse0x24d20a0();
   input += synapse0x24d2830();
   input += synapse0x24d2870();
   input += synapse0x24d28b0();
   input += synapse0x24d28f0();
   input += synapse0x24d2930();
   input += synapse0x24d2970();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24d1ed0() {
   double input = input0x24d1ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24d29b0() {
   double input = 0.189996;
   input += synapse0x24d2cf0();
   input += synapse0x24d2d30();
   input += synapse0x24d2d70();
   input += synapse0x24d2db0();
   input += synapse0x24d2df0();
   input += synapse0x24d2e30();
   input += synapse0x24d2e70();
   input += synapse0x24d2eb0();
   input += synapse0x24d2ef0();
   input += synapse0x24d2f30();
   input += synapse0x24d2f70();
   input += synapse0x24d2fb0();
   input += synapse0x24d2ff0();
   input += synapse0x24d3030();
   input += synapse0x24d3070();
   input += synapse0x24d30b0();
   input += synapse0x24d2b40();
   input += synapse0x24d2b80();
   input += synapse0x228bac0();
   input += synapse0x228bb00();
   input += synapse0x24bb5f0();
   input += synapse0x24bb630();
   input += synapse0x24bb670();
   input += synapse0x24cc4a0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24d29b0() {
   double input = input0x24d29b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x228c240() {
   double input = -0.665122;
   input += synapse0x24d2600();
   input += synapse0x24cc4e0();
   input += synapse0x24cc520();
   input += synapse0x24d3200();
   input += synapse0x24d3240();
   input += synapse0x24d3280();
   input += synapse0x24d32c0();
   input += synapse0x24d3300();
   input += synapse0x24d3340();
   input += synapse0x24d3380();
   input += synapse0x24d33c0();
   input += synapse0x24d3400();
   input += synapse0x24d3440();
   input += synapse0x24d3480();
   input += synapse0x24d34c0();
   input += synapse0x24d3500();
   input += synapse0x24d2450();
   input += synapse0x24d2490();
   input += synapse0x24d3650();
   input += synapse0x24d3690();
   input += synapse0x24d36d0();
   input += synapse0x24d3710();
   input += synapse0x24d3750();
   input += synapse0x24d3790();
   return input;
}

double NNfunction_ss_sLsL::neuron0x228c240() {
   double input = input0x228c240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24d37d0() {
   double input = -0.0213209;
   input += synapse0x24d3b10();
   input += synapse0x24d3b50();
   input += synapse0x24d3b90();
   input += synapse0x24d3bd0();
   input += synapse0x24d3c10();
   input += synapse0x24d3c50();
   input += synapse0x24d3c90();
   input += synapse0x24d3cd0();
   input += synapse0x24d3d10();
   input += synapse0x24d3d50();
   input += synapse0x24d3d90();
   input += synapse0x24d3dd0();
   input += synapse0x24d3e10();
   input += synapse0x24d3e50();
   input += synapse0x24d3e90();
   input += synapse0x24d3ed0();
   input += synapse0x24d3960();
   input += synapse0x24d39a0();
   input += synapse0x24d4020();
   input += synapse0x24d4060();
   input += synapse0x24d40a0();
   input += synapse0x24d40e0();
   input += synapse0x24d4120();
   input += synapse0x24d4160();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24d37d0() {
   double input = input0x24d37d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24d41a0() {
   double input = -0.00291181;
   input += synapse0x24d44e0();
   input += synapse0x24d4520();
   input += synapse0x24d4560();
   input += synapse0x24d45a0();
   input += synapse0x24d45e0();
   input += synapse0x24d4620();
   input += synapse0x24d4660();
   input += synapse0x24d46a0();
   input += synapse0x24d46e0();
   input += synapse0x228be30();
   input += synapse0x228be70();
   input += synapse0x228beb0();
   input += synapse0x228bef0();
   input += synapse0x228bf30();
   input += synapse0x228bf70();
   input += synapse0x228bfb0();
   input += synapse0x24d4330();
   input += synapse0x24d4370();
   input += synapse0x228c100();
   input += synapse0x228c140();
   input += synapse0x228c180();
   input += synapse0x228c1c0();
   input += synapse0x228c200();
   input += synapse0x24d4f30();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24d41a0() {
   double input = input0x24d41a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24d4f70() {
   double input = 0.628521;
   input += synapse0x24d52b0();
   input += synapse0x24d52f0();
   input += synapse0x24d5330();
   input += synapse0x24d5370();
   input += synapse0x24d53b0();
   input += synapse0x24d53f0();
   input += synapse0x24d5430();
   input += synapse0x24d5470();
   input += synapse0x24d54b0();
   input += synapse0x24d54f0();
   input += synapse0x24d5530();
   input += synapse0x24d5570();
   input += synapse0x24d55b0();
   input += synapse0x24d55f0();
   input += synapse0x24d5630();
   input += synapse0x24d5670();
   input += synapse0x24d5100();
   input += synapse0x24d5140();
   input += synapse0x24d57c0();
   input += synapse0x24d5800();
   input += synapse0x24d5840();
   input += synapse0x24d5880();
   input += synapse0x24d58c0();
   input += synapse0x24d5900();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24d4f70() {
   double input = input0x24d4f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24d5940() {
   double input = -0.749227;
   input += synapse0x24d5c80();
   input += synapse0x24d5cc0();
   input += synapse0x24d5d00();
   input += synapse0x24d5d40();
   input += synapse0x24d5d80();
   input += synapse0x24d5dc0();
   input += synapse0x24d5e00();
   input += synapse0x24d5e40();
   input += synapse0x24d5e80();
   input += synapse0x24d5ec0();
   input += synapse0x24d5f00();
   input += synapse0x24d5f40();
   input += synapse0x24d5f80();
   input += synapse0x24d5fc0();
   input += synapse0x24d6000();
   input += synapse0x24d6040();
   input += synapse0x24d5ad0();
   input += synapse0x24d5b10();
   input += synapse0x24d6190();
   input += synapse0x24d61d0();
   input += synapse0x24d6210();
   input += synapse0x24d6250();
   input += synapse0x24d6290();
   input += synapse0x24d62d0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24d5940() {
   double input = input0x24d5940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24d6310() {
   double input = 0.0508456;
   input += synapse0x24cfdb0();
   input += synapse0x24cfdf0();
   input += synapse0x24cfe30();
   input += synapse0x24cfe70();
   input += synapse0x24d6860();
   input += synapse0x24d68a0();
   input += synapse0x24d68e0();
   input += synapse0x24d6920();
   input += synapse0x24d6960();
   input += synapse0x24d69a0();
   input += synapse0x24d69e0();
   input += synapse0x24d6a20();
   input += synapse0x24d6a60();
   input += synapse0x24d6aa0();
   input += synapse0x24d6ae0();
   input += synapse0x24d6b20();
   input += synapse0x24d64a0();
   input += synapse0x24d64e0();
   input += synapse0x24d6c70();
   input += synapse0x24d6cb0();
   input += synapse0x24d6cf0();
   input += synapse0x24d6d30();
   input += synapse0x24d6d70();
   input += synapse0x24d6db0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24d6310() {
   double input = input0x24d6310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24d6df0() {
   double input = 0.724545;
   input += synapse0x24d7130();
   input += synapse0x24d7170();
   input += synapse0x24d71b0();
   input += synapse0x24d71f0();
   input += synapse0x24d7230();
   input += synapse0x24d7270();
   input += synapse0x24d72b0();
   input += synapse0x24d72f0();
   input += synapse0x24d7330();
   input += synapse0x24d7370();
   input += synapse0x24d73b0();
   input += synapse0x24d73f0();
   input += synapse0x24d7430();
   input += synapse0x24d7470();
   input += synapse0x24d74b0();
   input += synapse0x24d74f0();
   input += synapse0x24d6f80();
   input += synapse0x24d6fc0();
   input += synapse0x24d7640();
   input += synapse0x24d7680();
   input += synapse0x24d76c0();
   input += synapse0x24d7700();
   input += synapse0x24d7740();
   input += synapse0x24d7780();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24d6df0() {
   double input = input0x24d6df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24d77c0() {
   double input = 1.53349;
   input += synapse0x24d7b00();
   input += synapse0x24d7b40();
   input += synapse0x24d7b80();
   input += synapse0x24d7bc0();
   input += synapse0x24d7c00();
   input += synapse0x24d7c40();
   input += synapse0x24d7c80();
   input += synapse0x24d7cc0();
   input += synapse0x24d7d00();
   input += synapse0x24d7d40();
   input += synapse0x24d7d80();
   input += synapse0x24d7dc0();
   input += synapse0x24d7e00();
   input += synapse0x24d7e40();
   input += synapse0x24d7e80();
   input += synapse0x24d7ec0();
   input += synapse0x24d7950();
   input += synapse0x24d7990();
   input += synapse0x24d4720();
   input += synapse0x24d4760();
   input += synapse0x24d47a0();
   input += synapse0x24d47e0();
   input += synapse0x24d4820();
   input += synapse0x24d4860();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24d77c0() {
   double input = input0x24d77c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24d48a0() {
   double input = 2.75855;
   input += synapse0x24d4be0();
   input += synapse0x24d4c20();
   input += synapse0x24d4c60();
   input += synapse0x24d4ca0();
   input += synapse0x24d4ce0();
   input += synapse0x24d4d20();
   input += synapse0x24d4d60();
   input += synapse0x24d4da0();
   input += synapse0x24d4de0();
   input += synapse0x24d4e20();
   input += synapse0x24d4e60();
   input += synapse0x24d4ea0();
   input += synapse0x24d4ee0();
   input += synapse0x24d9020();
   input += synapse0x24d9060();
   input += synapse0x24d90a0();
   input += synapse0x24d4a30();
   input += synapse0x24d4a70();
   input += synapse0x24d91f0();
   input += synapse0x24d9230();
   input += synapse0x24d9270();
   input += synapse0x24d92b0();
   input += synapse0x24d92f0();
   input += synapse0x24d9330();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24d48a0() {
   double input = input0x24d48a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24d9370() {
   double input = 7.01521;
   input += synapse0x24d96b0();
   input += synapse0x24d96f0();
   input += synapse0x24d9730();
   input += synapse0x24d9770();
   input += synapse0x24d97b0();
   input += synapse0x24d97f0();
   input += synapse0x24d9830();
   input += synapse0x24d9870();
   input += synapse0x24d98b0();
   input += synapse0x24d98f0();
   input += synapse0x24d9930();
   input += synapse0x24d9970();
   input += synapse0x24d99b0();
   input += synapse0x24d99f0();
   input += synapse0x24d9a30();
   input += synapse0x24d9a70();
   input += synapse0x24d9500();
   input += synapse0x24d9540();
   input += synapse0x24d9bc0();
   input += synapse0x24d9c00();
   input += synapse0x24d9c40();
   input += synapse0x24d9c80();
   input += synapse0x24d9cc0();
   input += synapse0x24d9d00();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24d9370() {
   double input = input0x24d9370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24d9d40() {
   double input = 2.32417;
   input += synapse0x24da080();
   input += synapse0x24da0c0();
   input += synapse0x24da100();
   input += synapse0x24da140();
   input += synapse0x24da180();
   input += synapse0x24da1c0();
   input += synapse0x24da200();
   input += synapse0x24da240();
   input += synapse0x24da280();
   input += synapse0x24da2c0();
   input += synapse0x24da300();
   input += synapse0x24da340();
   input += synapse0x24da380();
   input += synapse0x24da3c0();
   input += synapse0x24da400();
   input += synapse0x24da440();
   input += synapse0x24d9ed0();
   input += synapse0x24d9f10();
   input += synapse0x24da590();
   input += synapse0x24da5d0();
   input += synapse0x24da610();
   input += synapse0x24da650();
   input += synapse0x24da690();
   input += synapse0x24da6d0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24d9d40() {
   double input = input0x24d9d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24da710() {
   double input = -1.99613;
   input += synapse0x24daa50();
   input += synapse0x24daa90();
   input += synapse0x24daad0();
   input += synapse0x24dab10();
   input += synapse0x24dab50();
   input += synapse0x24dab90();
   input += synapse0x24dabd0();
   input += synapse0x24dac10();
   input += synapse0x24dac50();
   input += synapse0x24dac90();
   input += synapse0x24dacd0();
   input += synapse0x24dad10();
   input += synapse0x24dad50();
   input += synapse0x24dad90();
   input += synapse0x24dadd0();
   input += synapse0x24dae10();
   input += synapse0x24da8a0();
   input += synapse0x24da8e0();
   input += synapse0x24daf60();
   input += synapse0x24dafa0();
   input += synapse0x24dafe0();
   input += synapse0x24db020();
   input += synapse0x24db060();
   input += synapse0x24db0a0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24da710() {
   double input = input0x24da710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24db0e0() {
   double input = -3.05129;
   input += synapse0x24db420();
   input += synapse0x24cc780();
   input += synapse0x24cc7c0();
   input += synapse0x24ccac0();
   input += synapse0x24ccb00();
   input += synapse0x24cce00();
   input += synapse0x24cce40();
   input += synapse0x24cd140();
   input += synapse0x24cd180();
   input += synapse0x24cd480();
   input += synapse0x24cd4c0();
   input += synapse0x24cd7c0();
   input += synapse0x24cd800();
   input += synapse0x24cdb00();
   input += synapse0x24cdb40();
   input += synapse0x24cde40();
   input += synapse0x24cde80();
   input += synapse0x24ce180();
   input += synapse0x24ce1c0();
   input += synapse0x24ce4c0();
   input += synapse0x24ce500();
   input += synapse0x24ce800();
   input += synapse0x24ce840();
   input += synapse0x24ceb40();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24db0e0() {
   double input = input0x24db0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24dcef0() {
   double input = 0.292406;
   input += synapse0x24ceb80();
   input += synapse0x24cf840();
   input += synapse0x24cf880();
   input += synapse0x24db270();
   input += synapse0x24db2b0();
   input += synapse0x24cfb80();
   input += synapse0x24cfbc0();
   input += synapse0x227db50();
   input += synapse0x227db90();
   input += synapse0x24d0300();
   input += synapse0x24d0340();
   input += synapse0x24d0640();
   input += synapse0x24d0680();
   input += synapse0x24d0980();
   input += synapse0x24d09c0();
   input += synapse0x24d0cc0();
   input += synapse0x24d0d00();
   input += synapse0x24d1000();
   input += synapse0x24d1040();
   input += synapse0x24d1340();
   input += synapse0x24d1380();
   input += synapse0x24cee80();
   input += synapse0x24ceec0();
   input += synapse0x24dd190();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24dcef0() {
   double input = input0x24dcef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24dd1d0() {
   double input = -0.482031;
   input += synapse0x24dd510();
   input += synapse0x24dd550();
   input += synapse0x24dd590();
   input += synapse0x24dd5d0();
   input += synapse0x24dd610();
   input += synapse0x24dd650();
   input += synapse0x24dd690();
   input += synapse0x24dd6d0();
   input += synapse0x24dd710();
   input += synapse0x24dd750();
   input += synapse0x24dd790();
   input += synapse0x24dd7d0();
   input += synapse0x24dd810();
   input += synapse0x24dd850();
   input += synapse0x24dd890();
   input += synapse0x24dd8d0();
   input += synapse0x24dd360();
   input += synapse0x24dd3a0();
   input += synapse0x24dda20();
   input += synapse0x24dda60();
   input += synapse0x24ddaa0();
   input += synapse0x24ddae0();
   input += synapse0x24ddb20();
   input += synapse0x24ddb60();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24dd1d0() {
   double input = input0x24dd1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24ddba0() {
   double input = -0.406935;
   input += synapse0x24ddee0();
   input += synapse0x24ddf20();
   input += synapse0x24ddf60();
   input += synapse0x24ddfa0();
   input += synapse0x24ddfe0();
   input += synapse0x24de020();
   input += synapse0x24de060();
   input += synapse0x24de0a0();
   input += synapse0x24de0e0();
   input += synapse0x24de120();
   input += synapse0x24de160();
   input += synapse0x24de1a0();
   input += synapse0x24de1e0();
   input += synapse0x24de220();
   input += synapse0x24de260();
   input += synapse0x24de2a0();
   input += synapse0x24ddd30();
   input += synapse0x24ddd70();
   input += synapse0x24de3f0();
   input += synapse0x24de430();
   input += synapse0x24de470();
   input += synapse0x24de4b0();
   input += synapse0x24de4f0();
   input += synapse0x24de530();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24ddba0() {
   double input = input0x24ddba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24de570() {
   double input = 1.27302;
   input += synapse0x24de8b0();
   input += synapse0x24de8f0();
   input += synapse0x24de930();
   input += synapse0x24de970();
   input += synapse0x24de9b0();
   input += synapse0x24de9f0();
   input += synapse0x24dea30();
   input += synapse0x24dea70();
   input += synapse0x24deab0();
   input += synapse0x24deaf0();
   input += synapse0x24deb30();
   input += synapse0x24deb70();
   input += synapse0x24debb0();
   input += synapse0x24debf0();
   input += synapse0x24dec30();
   input += synapse0x24dec70();
   input += synapse0x24de700();
   input += synapse0x24de740();
   input += synapse0x24dedc0();
   input += synapse0x24dee00();
   input += synapse0x24dee40();
   input += synapse0x24dee80();
   input += synapse0x24deec0();
   input += synapse0x24def00();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24de570() {
   double input = input0x24de570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24def40() {
   double input = 0.496035;
   input += synapse0x24df280();
   input += synapse0x24df2c0();
   input += synapse0x24df300();
   input += synapse0x24df340();
   input += synapse0x24df380();
   input += synapse0x24df3c0();
   input += synapse0x24df400();
   input += synapse0x24df440();
   input += synapse0x24df480();
   input += synapse0x24df4c0();
   input += synapse0x24df500();
   input += synapse0x24df540();
   input += synapse0x24df580();
   input += synapse0x24df5c0();
   input += synapse0x24df600();
   input += synapse0x24df640();
   input += synapse0x24df0d0();
   input += synapse0x24df110();
   input += synapse0x24df790();
   input += synapse0x24df7d0();
   input += synapse0x24df810();
   input += synapse0x24df850();
   input += synapse0x24df890();
   input += synapse0x24df8d0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24def40() {
   double input = input0x24def40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24df910() {
   double input = 1.76147;
   input += synapse0x24dfc50();
   input += synapse0x24dfc90();
   input += synapse0x24dfcd0();
   input += synapse0x24dfd10();
   input += synapse0x24dfd50();
   input += synapse0x24dfd90();
   input += synapse0x24dfdd0();
   input += synapse0x24dfe10();
   input += synapse0x24dfe50();
   input += synapse0x24d8010();
   input += synapse0x24d8050();
   input += synapse0x24d8090();
   input += synapse0x24d80d0();
   input += synapse0x24d8110();
   input += synapse0x24d8150();
   input += synapse0x24d8190();
   input += synapse0x24dfaa0();
   input += synapse0x24dfae0();
   input += synapse0x24d82e0();
   input += synapse0x24d8320();
   input += synapse0x24d8360();
   input += synapse0x24d83a0();
   input += synapse0x24d83e0();
   input += synapse0x24d8420();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24df910() {
   double input = input0x24df910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24d8460() {
   double input = -0.753587;
   input += synapse0x24d87a0();
   input += synapse0x24d87e0();
   input += synapse0x24d8820();
   input += synapse0x24d8860();
   input += synapse0x24d88a0();
   input += synapse0x24d88e0();
   input += synapse0x24d8920();
   input += synapse0x24d8960();
   input += synapse0x24d89a0();
   input += synapse0x24d89e0();
   input += synapse0x24d8a20();
   input += synapse0x24d8a60();
   input += synapse0x24d8aa0();
   input += synapse0x24d8ae0();
   input += synapse0x24d8b20();
   input += synapse0x24d8b60();
   input += synapse0x24d85f0();
   input += synapse0x24d8630();
   input += synapse0x24d8cb0();
   input += synapse0x24d8cf0();
   input += synapse0x24d8d30();
   input += synapse0x24d8d70();
   input += synapse0x24d8db0();
   input += synapse0x24d8df0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24d8460() {
   double input = input0x24d8460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24d8e30() {
   double input = -0.378902;
   input += synapse0x24d8fc0();
   input += synapse0x24e2050();
   input += synapse0x24e2090();
   input += synapse0x24e20d0();
   input += synapse0x24e2110();
   input += synapse0x24e2150();
   input += synapse0x24e2190();
   input += synapse0x24e21d0();
   input += synapse0x24e2210();
   input += synapse0x24e2250();
   input += synapse0x24e2290();
   input += synapse0x24e22d0();
   input += synapse0x24e2310();
   input += synapse0x24e2350();
   input += synapse0x24e2390();
   input += synapse0x24e23d0();
   input += synapse0x24e1ea0();
   input += synapse0x24e1ee0();
   input += synapse0x24e2520();
   input += synapse0x24e2560();
   input += synapse0x24e25a0();
   input += synapse0x24e25e0();
   input += synapse0x24e2620();
   input += synapse0x24e2660();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24d8e30() {
   double input = input0x24d8e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24e26a0() {
   double input = 0.298392;
   input += synapse0x24e29e0();
   input += synapse0x24e2a20();
   input += synapse0x24e2a60();
   input += synapse0x24e2aa0();
   input += synapse0x24e2ae0();
   input += synapse0x24e2b20();
   input += synapse0x24e2b60();
   input += synapse0x24e2ba0();
   input += synapse0x24e2be0();
   input += synapse0x24e2c20();
   input += synapse0x24e2c60();
   input += synapse0x24e2ca0();
   input += synapse0x24e2ce0();
   input += synapse0x24e2d20();
   input += synapse0x24e2d60();
   input += synapse0x24e2da0();
   input += synapse0x24e2830();
   input += synapse0x24e2870();
   input += synapse0x24e2ef0();
   input += synapse0x24e2f30();
   input += synapse0x24e2f70();
   input += synapse0x24e2fb0();
   input += synapse0x24e2ff0();
   input += synapse0x24e3030();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24e26a0() {
   double input = input0x24e26a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24e3070() {
   double input = 0.0702353;
   input += synapse0x24e33b0();
   input += synapse0x24e33f0();
   input += synapse0x24e3430();
   input += synapse0x24e3470();
   input += synapse0x24e34b0();
   input += synapse0x24e34f0();
   input += synapse0x24e3530();
   input += synapse0x24e3570();
   input += synapse0x24e35b0();
   input += synapse0x24e35f0();
   input += synapse0x24e3630();
   input += synapse0x24e3670();
   input += synapse0x24e36b0();
   input += synapse0x24e36f0();
   input += synapse0x24e3730();
   input += synapse0x24e3770();
   input += synapse0x24e3200();
   input += synapse0x24e3240();
   input += synapse0x24e38c0();
   input += synapse0x24e3900();
   input += synapse0x24e3940();
   input += synapse0x24e3980();
   input += synapse0x24e39c0();
   input += synapse0x24e3a00();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24e3070() {
   double input = input0x24e3070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24e3a40() {
   double input = -0.90101;
   input += synapse0x24e3d80();
   input += synapse0x24e3dc0();
   input += synapse0x24e3e00();
   input += synapse0x24e3e40();
   input += synapse0x24e3e80();
   input += synapse0x24e3ec0();
   input += synapse0x24e3f00();
   input += synapse0x24e3f40();
   input += synapse0x24e3f80();
   input += synapse0x24e3fc0();
   input += synapse0x24e4000();
   input += synapse0x24e4040();
   input += synapse0x24e4080();
   input += synapse0x24e40c0();
   input += synapse0x24e4100();
   input += synapse0x24e4140();
   input += synapse0x24e3bd0();
   input += synapse0x24e3c10();
   input += synapse0x24e4290();
   input += synapse0x24e42d0();
   input += synapse0x24e4310();
   input += synapse0x24e4350();
   input += synapse0x24e4390();
   input += synapse0x24e43d0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24e3a40() {
   double input = input0x24e3a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24e4410() {
   double input = 0.246683;
   input += synapse0x24e4750();
   input += synapse0x24e4790();
   input += synapse0x24e47d0();
   input += synapse0x24e4810();
   input += synapse0x24e4850();
   input += synapse0x24e4890();
   input += synapse0x24e48d0();
   input += synapse0x24e4910();
   input += synapse0x24e4950();
   input += synapse0x24e4990();
   input += synapse0x24e49d0();
   input += synapse0x24e4a10();
   input += synapse0x24e4a50();
   input += synapse0x24e4a90();
   input += synapse0x24e4ad0();
   input += synapse0x24e4b10();
   input += synapse0x24e45a0();
   input += synapse0x24e45e0();
   input += synapse0x24e4c60();
   input += synapse0x24e4ca0();
   input += synapse0x24e4ce0();
   input += synapse0x24e4d20();
   input += synapse0x24e4d60();
   input += synapse0x24e4da0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24e4410() {
   double input = input0x24e4410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24e4de0() {
   double input = 0.183604;
   input += synapse0x24e5120();
   input += synapse0x24e5160();
   input += synapse0x24e51a0();
   input += synapse0x24e51e0();
   input += synapse0x24e5220();
   input += synapse0x24e5260();
   input += synapse0x24e52a0();
   input += synapse0x24e52e0();
   input += synapse0x24e5320();
   input += synapse0x24e5360();
   input += synapse0x24e53a0();
   input += synapse0x24e53e0();
   input += synapse0x24e5420();
   input += synapse0x24e5460();
   input += synapse0x24e54a0();
   input += synapse0x24e54e0();
   input += synapse0x24e4f70();
   input += synapse0x24e4fb0();
   input += synapse0x24e5630();
   input += synapse0x24e5670();
   input += synapse0x24e56b0();
   input += synapse0x24e56f0();
   input += synapse0x24e5730();
   input += synapse0x24e5770();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24e4de0() {
   double input = input0x24e4de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24e57b0() {
   double input = 0.872197;
   input += synapse0x24e5af0();
   input += synapse0x24e5b30();
   input += synapse0x24e5b70();
   input += synapse0x24e5bb0();
   input += synapse0x24e5bf0();
   input += synapse0x24e5c30();
   input += synapse0x24e5c70();
   input += synapse0x24e5cb0();
   input += synapse0x24e5cf0();
   input += synapse0x24e5d30();
   input += synapse0x24e5d70();
   input += synapse0x24e5db0();
   input += synapse0x24e5df0();
   input += synapse0x24e5e30();
   input += synapse0x24e5e70();
   input += synapse0x24e5eb0();
   input += synapse0x24e5940();
   input += synapse0x24e5980();
   input += synapse0x24e6000();
   input += synapse0x24e6040();
   input += synapse0x24e6080();
   input += synapse0x24e60c0();
   input += synapse0x24e6100();
   input += synapse0x24e6140();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24e57b0() {
   double input = input0x24e57b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24e6180() {
   double input = -0.511766;
   input += synapse0x24e64c0();
   input += synapse0x24e6500();
   input += synapse0x24e6540();
   input += synapse0x24e6580();
   input += synapse0x24e65c0();
   input += synapse0x24e6600();
   input += synapse0x24e6640();
   input += synapse0x24e6680();
   input += synapse0x24e66c0();
   input += synapse0x24e6700();
   input += synapse0x24e6740();
   input += synapse0x24e6780();
   input += synapse0x24e67c0();
   input += synapse0x24e6800();
   input += synapse0x24e6840();
   input += synapse0x24e6880();
   input += synapse0x24e6310();
   input += synapse0x24e6350();
   input += synapse0x24e69d0();
   input += synapse0x24e6a10();
   input += synapse0x24e6a50();
   input += synapse0x24e6a90();
   input += synapse0x24e6ad0();
   input += synapse0x24e6b10();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24e6180() {
   double input = input0x24e6180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24e6b50() {
   double input = 0.51793;
   input += synapse0x24e6e90();
   input += synapse0x24db460();
   input += synapse0x24db4a0();
   input += synapse0x24db4e0();
   input += synapse0x24db730();
   input += synapse0x24db770();
   input += synapse0x24db7b0();
   input += synapse0x24dba00();
   input += synapse0x24dba40();
   input += synapse0x24dbc90();
   input += synapse0x24dbcd0();
   input += synapse0x24dbd10();
   input += synapse0x24dbf60();
   input += synapse0x24dbfa0();
   input += synapse0x24dc1f0();
   input += synapse0x24dc230();
   input += synapse0x24e6ce0();
   input += synapse0x24e6d20();
   input += synapse0x24dc380();
   input += synapse0x24dc890();
   input += synapse0x24dc8d0();
   input += synapse0x24dc910();
   input += synapse0x24dcb60();
   input += synapse0x24dcba0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24e6b50() {
   double input = input0x24e6b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24dcbe0() {
   double input = 0.0959956;
   input += synapse0x24dc450();
   input += synapse0x24dc490();
   input += synapse0x24dc4d0();
   input += synapse0x24dc510();
   input += synapse0x24dce90();
   input += synapse0x24e91e0();
   input += synapse0x24e9220();
   input += synapse0x24e9260();
   input += synapse0x24e92a0();
   input += synapse0x24e92e0();
   input += synapse0x24e9320();
   input += synapse0x24e9360();
   input += synapse0x24e93a0();
   input += synapse0x24e93e0();
   input += synapse0x24e9420();
   input += synapse0x24e9460();
   input += synapse0x24dcd70();
   input += synapse0x24dcdb0();
   input += synapse0x24e95b0();
   input += synapse0x24e95f0();
   input += synapse0x24e9630();
   input += synapse0x24e9670();
   input += synapse0x24e96b0();
   input += synapse0x24e96f0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24dcbe0() {
   double input = input0x24dcbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24e9730() {
   double input = 0.244047;
   input += synapse0x24e9a70();
   input += synapse0x24e9ab0();
   input += synapse0x24e9af0();
   input += synapse0x24e9b30();
   input += synapse0x24e9b70();
   input += synapse0x24e9bb0();
   input += synapse0x24e9bf0();
   input += synapse0x24e9c30();
   input += synapse0x24e9c70();
   input += synapse0x24e9cb0();
   input += synapse0x24e9cf0();
   input += synapse0x24e9d30();
   input += synapse0x24e9d70();
   input += synapse0x24e9db0();
   input += synapse0x24e9df0();
   input += synapse0x24e9e30();
   input += synapse0x24e98c0();
   input += synapse0x24e9900();
   input += synapse0x24e9f80();
   input += synapse0x24e9fc0();
   input += synapse0x24ea000();
   input += synapse0x24ea040();
   input += synapse0x24ea080();
   input += synapse0x24ea0c0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24e9730() {
   double input = input0x24e9730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24ea100() {
   double input = -0.604253;
   input += synapse0x24ea440();
   input += synapse0x24ea480();
   input += synapse0x24ea4c0();
   input += synapse0x24ea500();
   input += synapse0x24ea540();
   input += synapse0x24ea580();
   input += synapse0x24ea5c0();
   input += synapse0x24ea600();
   input += synapse0x24ea640();
   input += synapse0x24ea680();
   input += synapse0x24ea6c0();
   input += synapse0x24ea700();
   input += synapse0x24ea740();
   input += synapse0x24ea780();
   input += synapse0x24ea7c0();
   input += synapse0x24ea800();
   input += synapse0x24ea290();
   input += synapse0x24ea2d0();
   input += synapse0x24ea950();
   input += synapse0x24ea990();
   input += synapse0x24ea9d0();
   input += synapse0x24eaa10();
   input += synapse0x24eaa50();
   input += synapse0x24eaa90();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24ea100() {
   double input = input0x24ea100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24eaad0() {
   double input = 0.940872;
   input += synapse0x24eae10();
   input += synapse0x24eae50();
   input += synapse0x24eae90();
   input += synapse0x24eaed0();
   input += synapse0x24eaf10();
   input += synapse0x24eaf50();
   input += synapse0x24eaf90();
   input += synapse0x24eafd0();
   input += synapse0x24eb010();
   input += synapse0x24eb050();
   input += synapse0x24eb090();
   input += synapse0x24eb0d0();
   input += synapse0x24eb110();
   input += synapse0x24eb150();
   input += synapse0x24eb190();
   input += synapse0x24eb1d0();
   input += synapse0x24eac60();
   input += synapse0x24eaca0();
   input += synapse0x24eb320();
   input += synapse0x24eb360();
   input += synapse0x24eb3a0();
   input += synapse0x24eb3e0();
   input += synapse0x24eb420();
   input += synapse0x24eb460();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24eaad0() {
   double input = input0x24eaad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24eb4a0() {
   double input = 1.22844;
   input += synapse0x24eb7e0();
   input += synapse0x24eb820();
   input += synapse0x24eb860();
   input += synapse0x24eb8a0();
   input += synapse0x24eb8e0();
   input += synapse0x24eb920();
   input += synapse0x24eb960();
   input += synapse0x24eb9a0();
   input += synapse0x24eb9e0();
   input += synapse0x24eba20();
   input += synapse0x24eba60();
   input += synapse0x24ebaa0();
   input += synapse0x24ebae0();
   input += synapse0x24ebb20();
   input += synapse0x24ebb60();
   input += synapse0x24ebba0();
   input += synapse0x24eb630();
   input += synapse0x24eb670();
   input += synapse0x24ebcf0();
   input += synapse0x24ebd30();
   input += synapse0x24ebd70();
   input += synapse0x24ebdb0();
   input += synapse0x24ebdf0();
   input += synapse0x24ebe30();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24eb4a0() {
   double input = input0x24eb4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24ebe70() {
   double input = -0.665967;
   input += synapse0x24ec1b0();
   input += synapse0x24ec1f0();
   input += synapse0x24ec230();
   input += synapse0x24ec270();
   input += synapse0x24ec2b0();
   input += synapse0x24ec2f0();
   input += synapse0x24ec330();
   input += synapse0x24ec370();
   input += synapse0x24ec3b0();
   input += synapse0x24ec3f0();
   input += synapse0x24ec430();
   input += synapse0x24ec470();
   input += synapse0x24ec4b0();
   input += synapse0x24ec4f0();
   input += synapse0x24ec530();
   input += synapse0x24ec570();
   input += synapse0x24ec000();
   input += synapse0x24ec040();
   input += synapse0x24ec6c0();
   input += synapse0x24ec700();
   input += synapse0x24ec740();
   input += synapse0x24ec780();
   input += synapse0x24ec7c0();
   input += synapse0x24ec800();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24ebe70() {
   double input = input0x24ebe70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24ec840() {
   double input = 3.05807;
   input += synapse0x24ecb80();
   input += synapse0x24ecbc0();
   input += synapse0x24ecc00();
   input += synapse0x24ecc40();
   input += synapse0x24ecc80();
   input += synapse0x24eccc0();
   input += synapse0x24ecd00();
   input += synapse0x24ecd40();
   input += synapse0x24ecd80();
   input += synapse0x24ecdc0();
   input += synapse0x24ece00();
   input += synapse0x24ece40();
   input += synapse0x24ece80();
   input += synapse0x24ecec0();
   input += synapse0x24ecf00();
   input += synapse0x24ecf40();
   input += synapse0x24ec9d0();
   input += synapse0x24eca10();
   input += synapse0x24ed090();
   input += synapse0x24ed0d0();
   input += synapse0x24ed110();
   input += synapse0x24ed150();
   input += synapse0x24ed190();
   input += synapse0x24ed1d0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24ec840() {
   double input = input0x24ec840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24ed210() {
   double input = -0.69583;
   input += synapse0x24ed550();
   input += synapse0x24ed590();
   input += synapse0x24ed5d0();
   input += synapse0x24ed610();
   input += synapse0x24ed650();
   input += synapse0x24ed690();
   input += synapse0x24ed6d0();
   input += synapse0x24ed710();
   input += synapse0x24ed750();
   input += synapse0x24ed790();
   input += synapse0x24ed7d0();
   input += synapse0x24ed810();
   input += synapse0x24ed850();
   input += synapse0x24ed890();
   input += synapse0x24ed8d0();
   input += synapse0x24ed910();
   input += synapse0x24ed3a0();
   input += synapse0x24ed3e0();
   input += synapse0x24eda60();
   input += synapse0x24edaa0();
   input += synapse0x24edae0();
   input += synapse0x24edb20();
   input += synapse0x24edb60();
   input += synapse0x24edba0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24ed210() {
   double input = input0x24ed210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24edbe0() {
   double input = -0.175782;
   input += synapse0x24d6650();
   input += synapse0x24d6690();
   input += synapse0x24d66d0();
   input += synapse0x24d6710();
   input += synapse0x24d6750();
   input += synapse0x24d6790();
   input += synapse0x24d67d0();
   input += synapse0x24d6810();
   input += synapse0x24ee330();
   input += synapse0x24ee370();
   input += synapse0x24ee3b0();
   input += synapse0x24ee3f0();
   input += synapse0x24ee430();
   input += synapse0x24ee470();
   input += synapse0x24ee4b0();
   input += synapse0x24ee4f0();
   input += synapse0x24edd70();
   input += synapse0x24eddb0();
   input += synapse0x24ee640();
   input += synapse0x24ee680();
   input += synapse0x24ee6c0();
   input += synapse0x24ee700();
   input += synapse0x24ee740();
   input += synapse0x24ee780();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24edbe0() {
   double input = input0x24edbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24ee7c0() {
   double input = 0.0657702;
   input += synapse0x24eeb00();
   input += synapse0x24eeb40();
   input += synapse0x24eeb80();
   input += synapse0x24eebc0();
   input += synapse0x24eec00();
   input += synapse0x24eec40();
   input += synapse0x24eec80();
   input += synapse0x24eecc0();
   input += synapse0x24eed00();
   input += synapse0x24eed40();
   input += synapse0x24eed80();
   input += synapse0x24eedc0();
   input += synapse0x24eee00();
   input += synapse0x24eee40();
   input += synapse0x24eee80();
   input += synapse0x24eeec0();
   input += synapse0x24ee950();
   input += synapse0x24ee990();
   input += synapse0x24ef010();
   input += synapse0x24ef050();
   input += synapse0x24ef090();
   input += synapse0x24ef0d0();
   input += synapse0x24ef110();
   input += synapse0x24ef150();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24ee7c0() {
   double input = input0x24ee7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24ef190() {
   double input = 0.258751;
   input += synapse0x24ef4d0();
   input += synapse0x24ef510();
   input += synapse0x24ef550();
   input += synapse0x24ef590();
   input += synapse0x24ef5d0();
   input += synapse0x24ef610();
   input += synapse0x24ef650();
   input += synapse0x24ef690();
   input += synapse0x24ef6d0();
   input += synapse0x24ef710();
   input += synapse0x24ef750();
   input += synapse0x24ef790();
   input += synapse0x24ef7d0();
   input += synapse0x24ef810();
   input += synapse0x24ef850();
   input += synapse0x24ef890();
   input += synapse0x24ef320();
   input += synapse0x24ef360();
   input += synapse0x24dfe90();
   input += synapse0x24dfed0();
   input += synapse0x24dff10();
   input += synapse0x24dff50();
   input += synapse0x24dff90();
   input += synapse0x24dffd0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24ef190() {
   double input = input0x24ef190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24e0010() {
   double input = -1.1695;
   input += synapse0x24e0350();
   input += synapse0x24e0390();
   input += synapse0x24e03d0();
   input += synapse0x24e0410();
   input += synapse0x24e0450();
   input += synapse0x24e0490();
   input += synapse0x24e04d0();
   input += synapse0x24e0510();
   input += synapse0x24e0550();
   input += synapse0x24e0590();
   input += synapse0x24e05d0();
   input += synapse0x24e0610();
   input += synapse0x24e0650();
   input += synapse0x24e0690();
   input += synapse0x24e06d0();
   input += synapse0x24e0710();
   input += synapse0x24e01a0();
   input += synapse0x24e01e0();
   input += synapse0x24e0860();
   input += synapse0x24e08a0();
   input += synapse0x24e08e0();
   input += synapse0x24e0920();
   input += synapse0x24e0960();
   input += synapse0x24e09a0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24e0010() {
   double input = input0x24e0010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24e09e0() {
   double input = 1.54325;
   input += synapse0x24e0d20();
   input += synapse0x24e0d60();
   input += synapse0x24e0da0();
   input += synapse0x24e0de0();
   input += synapse0x24e0e20();
   input += synapse0x24e0e60();
   input += synapse0x24e0ea0();
   input += synapse0x24e0ee0();
   input += synapse0x24e0f20();
   input += synapse0x24e0f60();
   input += synapse0x24e0fa0();
   input += synapse0x24e0fe0();
   input += synapse0x24e1020();
   input += synapse0x24e1060();
   input += synapse0x24e10a0();
   input += synapse0x24e10e0();
   input += synapse0x24e0b70();
   input += synapse0x24e0bb0();
   input += synapse0x24e1230();
   input += synapse0x24e1270();
   input += synapse0x24e12b0();
   input += synapse0x24e12f0();
   input += synapse0x24e1330();
   input += synapse0x24e1370();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24e09e0() {
   double input = input0x24e09e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24e13b0() {
   double input = 0.764468;
   input += synapse0x24e16f0();
   input += synapse0x24e1730();
   input += synapse0x24e1770();
   input += synapse0x24e17b0();
   input += synapse0x24e17f0();
   input += synapse0x24e1830();
   input += synapse0x24e1870();
   input += synapse0x24e18b0();
   input += synapse0x24e18f0();
   input += synapse0x24e1930();
   input += synapse0x24e1970();
   input += synapse0x24e19b0();
   input += synapse0x24e19f0();
   input += synapse0x24e1a30();
   input += synapse0x24e1a70();
   input += synapse0x24e1ab0();
   input += synapse0x24e1540();
   input += synapse0x24e1580();
   input += synapse0x24e1c00();
   input += synapse0x24e1c40();
   input += synapse0x24e1c80();
   input += synapse0x24e1cc0();
   input += synapse0x24e1d00();
   input += synapse0x24e1d40();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24e13b0() {
   double input = input0x24e13b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24f39f0() {
   double input = -0.489265;
   input += synapse0x24f3c10();
   input += synapse0x24f3c50();
   input += synapse0x24f3c90();
   input += synapse0x24f3cd0();
   input += synapse0x24f3d10();
   input += synapse0x24f3d50();
   input += synapse0x24f3d90();
   input += synapse0x24f3dd0();
   input += synapse0x24f3e10();
   input += synapse0x24f3e50();
   input += synapse0x24f3e90();
   input += synapse0x24f3ed0();
   input += synapse0x24f3f10();
   input += synapse0x24f3f50();
   input += synapse0x24f3f90();
   input += synapse0x24f3fd0();
   input += synapse0x24e1d80();
   input += synapse0x24e1dc0();
   input += synapse0x24f4120();
   input += synapse0x24f4160();
   input += synapse0x24f41a0();
   input += synapse0x24f41e0();
   input += synapse0x24f4220();
   input += synapse0x24f4260();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24f39f0() {
   double input = input0x24f39f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24f42a0() {
   double input = -1.11561;
   input += synapse0x24f45e0();
   input += synapse0x24f4620();
   input += synapse0x24f4660();
   input += synapse0x24f46a0();
   input += synapse0x24f46e0();
   input += synapse0x24f4720();
   input += synapse0x24f4760();
   input += synapse0x24f47a0();
   input += synapse0x24f47e0();
   input += synapse0x24f4820();
   input += synapse0x24f4860();
   input += synapse0x24f48a0();
   input += synapse0x24f48e0();
   input += synapse0x24f4920();
   input += synapse0x24f4960();
   input += synapse0x24f49a0();
   input += synapse0x24f4430();
   input += synapse0x24f4470();
   input += synapse0x24f4af0();
   input += synapse0x24f4b30();
   input += synapse0x24f4b70();
   input += synapse0x24f4bb0();
   input += synapse0x24f4bf0();
   input += synapse0x24f4c30();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24f42a0() {
   double input = input0x24f42a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24f4c70() {
   double input = -0.643187;
   input += synapse0x24f4fb0();
   input += synapse0x24f4ff0();
   input += synapse0x24f5030();
   input += synapse0x24f5070();
   input += synapse0x24f50b0();
   input += synapse0x24f50f0();
   input += synapse0x24f5130();
   input += synapse0x24f5170();
   input += synapse0x24f51b0();
   input += synapse0x24f51f0();
   input += synapse0x24f5230();
   input += synapse0x24f5270();
   input += synapse0x24f52b0();
   input += synapse0x24f52f0();
   input += synapse0x24f5330();
   input += synapse0x24f5370();
   input += synapse0x24f4e00();
   input += synapse0x24f4e40();
   input += synapse0x24f54c0();
   input += synapse0x24f5500();
   input += synapse0x24f5540();
   input += synapse0x24f5580();
   input += synapse0x24f55c0();
   input += synapse0x24f5600();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24f4c70() {
   double input = input0x24f4c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24f5640() {
   double input = -1.4656;
   input += synapse0x24f5980();
   input += synapse0x24f59c0();
   input += synapse0x24f5a00();
   input += synapse0x24f5a40();
   input += synapse0x24f5a80();
   input += synapse0x24f5ac0();
   input += synapse0x24f5b00();
   input += synapse0x24f5b40();
   input += synapse0x24f5b80();
   input += synapse0x24f5bc0();
   input += synapse0x24f5c00();
   input += synapse0x24f5c40();
   input += synapse0x24f5c80();
   input += synapse0x24f5cc0();
   input += synapse0x24f5d00();
   input += synapse0x24f5d40();
   input += synapse0x24f57d0();
   input += synapse0x24f5810();
   input += synapse0x24f5e90();
   input += synapse0x24f5ed0();
   input += synapse0x24f5f10();
   input += synapse0x24f5f50();
   input += synapse0x24f5f90();
   input += synapse0x24f5fd0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24f5640() {
   double input = input0x24f5640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24fc840() {
   double input = -0.357971;
   input += synapse0x24d2570();
   input += synapse0x24d25b0();
   input += synapse0x24d3a80();
   input += synapse0x24d3ac0();
   input += synapse0x24d4450();
   input += synapse0x24d4490();
   input += synapse0x24d5220();
   input += synapse0x24d5260();
   input += synapse0x24d5bf0();
   input += synapse0x24d5c30();
   input += synapse0x24d65c0();
   input += synapse0x24d6600();
   input += synapse0x24d70a0();
   input += synapse0x24d70e0();
   input += synapse0x24d7a70();
   input += synapse0x24d7ab0();
   input += synapse0x24d4b50();
   input += synapse0x24d4b90();
   input += synapse0x24d9620();
   input += synapse0x24d9660();
   input += synapse0x24d9ff0();
   input += synapse0x24da030();
   input += synapse0x24da9c0();
   input += synapse0x24daa00();
   input += synapse0x24db390();
   input += synapse0x24db3d0();
   input += synapse0x24cf500();
   input += synapse0x24cf540();
   input += synapse0x24dd480();
   input += synapse0x24dd4c0();
   input += synapse0x24dde50();
   input += synapse0x24dde90();
   input += synapse0x24de820();
   input += synapse0x24de860();
   input += synapse0x24df1f0();
   input += synapse0x24df230();
   input += synapse0x24dfbc0();
   input += synapse0x24dfc00();
   input += synapse0x24d8710();
   input += synapse0x24d8750();
   input += synapse0x24e1fc0();
   input += synapse0x24e2000();
   input += synapse0x24e2950();
   input += synapse0x24e2990();
   input += synapse0x24e3320();
   input += synapse0x24e3360();
   input += synapse0x24e3cf0();
   input += synapse0x24e3d30();
   input += synapse0x24e46c0();
   input += synapse0x24e4700();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24fc840() {
   double input = input0x24fc840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24fcbe0() {
   double input = -0.487248;
   input += synapse0x24e6e00();
   input += synapse0x24e6e40();
   input += synapse0x24dc3c0();
   input += synapse0x24dc400();
   input += synapse0x24e99e0();
   input += synapse0x24e9a20();
   input += synapse0x24ea3b0();
   input += synapse0x24ea3f0();
   input += synapse0x24ead80();
   input += synapse0x24eadc0();
   input += synapse0x24eb750();
   input += synapse0x24eb790();
   input += synapse0x24ec120();
   input += synapse0x24ec160();
   input += synapse0x24ecaf0();
   input += synapse0x24ecb30();
   input += synapse0x24ed4c0();
   input += synapse0x24ed500();
   input += synapse0x24ede90();
   input += synapse0x24eded0();
   input += synapse0x24eea70();
   input += synapse0x24eeab0();
   input += synapse0x24ef440();
   input += synapse0x24ef480();
   input += synapse0x24e02c0();
   input += synapse0x24e0300();
   input += synapse0x24e0c90();
   input += synapse0x24e0cd0();
   input += synapse0x24e1660();
   input += synapse0x24e16a0();
   input += synapse0x24f3b80();
   input += synapse0x24f3bc0();
   input += synapse0x24f4550();
   input += synapse0x24f4590();
   input += synapse0x24f4f20();
   input += synapse0x24f4f60();
   input += synapse0x24f58f0();
   input += synapse0x24f5930();
   input += synapse0x24d17e0();
   input += synapse0x24d1820();
   input += synapse0x24e5090();
   input += synapse0x24e50d0();
   input += synapse0x24f6010();
   input += synapse0x24f6050();
   input += synapse0x24f6090();
   input += synapse0x24f60d0();
   input += synapse0x24fcf80();
   input += synapse0x24fcfc0();
   input += synapse0x24fd000();
   input += synapse0x24fd040();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24fcbe0() {
   double input = input0x24fcbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24fd080() {
   double input = 0.157039;
   input += synapse0x24fd3c0();
   input += synapse0x24fd400();
   input += synapse0x24fd440();
   input += synapse0x24fd480();
   input += synapse0x24fd4c0();
   input += synapse0x24fd500();
   input += synapse0x24fd540();
   input += synapse0x24fd580();
   input += synapse0x24fd5c0();
   input += synapse0x24fd600();
   input += synapse0x24fd640();
   input += synapse0x24fd680();
   input += synapse0x24fd6c0();
   input += synapse0x24fd700();
   input += synapse0x24fd740();
   input += synapse0x24fd780();
   input += synapse0x24fd210();
   input += synapse0x24fd250();
   input += synapse0x24fd8d0();
   input += synapse0x24fd910();
   input += synapse0x24fd950();
   input += synapse0x24fd990();
   input += synapse0x24fd9d0();
   input += synapse0x24fda10();
   input += synapse0x24fda50();
   input += synapse0x24fda90();
   input += synapse0x24fdad0();
   input += synapse0x24fdb10();
   input += synapse0x24fdb50();
   input += synapse0x24fdb90();
   input += synapse0x24fdbd0();
   input += synapse0x24fdc10();
   input += synapse0x24fd7c0();
   input += synapse0x24fd800();
   input += synapse0x24fd840();
   input += synapse0x24fd880();
   input += synapse0x24fde60();
   input += synapse0x24fdea0();
   input += synapse0x24fdee0();
   input += synapse0x24fdf20();
   input += synapse0x24fdf60();
   input += synapse0x24fdfa0();
   input += synapse0x24fdfe0();
   input += synapse0x24fe020();
   input += synapse0x24fe060();
   input += synapse0x24fe0a0();
   input += synapse0x24fe0e0();
   input += synapse0x24fe120();
   input += synapse0x24fe160();
   input += synapse0x24fe1a0();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24fd080() {
   double input = input0x24fd080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24fe1e0() {
   double input = 0.471267;
   input += synapse0x24fe520();
   input += synapse0x24fe560();
   input += synapse0x24fe5a0();
   input += synapse0x24fe5e0();
   input += synapse0x24fe620();
   input += synapse0x24fe660();
   input += synapse0x24fe6a0();
   input += synapse0x24fe6e0();
   input += synapse0x24fe720();
   input += synapse0x24fe760();
   input += synapse0x24fe7a0();
   input += synapse0x24fe7e0();
   input += synapse0x24fe820();
   input += synapse0x24fe860();
   input += synapse0x24fe8a0();
   input += synapse0x24fe8e0();
   input += synapse0x24fe370();
   input += synapse0x24fe3b0();
   input += synapse0x24fea30();
   input += synapse0x24fea70();
   input += synapse0x24feab0();
   input += synapse0x24feaf0();
   input += synapse0x24feb30();
   input += synapse0x24feb70();
   input += synapse0x24febb0();
   input += synapse0x24febf0();
   input += synapse0x24fec30();
   input += synapse0x24fec70();
   input += synapse0x24fecb0();
   input += synapse0x24fecf0();
   input += synapse0x24fed30();
   input += synapse0x24fed70();
   input += synapse0x24fe920();
   input += synapse0x24fe960();
   input += synapse0x24fe9a0();
   input += synapse0x24fe9e0();
   input += synapse0x24fefc0();
   input += synapse0x24ff000();
   input += synapse0x24ff040();
   input += synapse0x24ff080();
   input += synapse0x24ff0c0();
   input += synapse0x24ff100();
   input += synapse0x24ff140();
   input += synapse0x24ff180();
   input += synapse0x24ff1c0();
   input += synapse0x24ff200();
   input += synapse0x24ff240();
   input += synapse0x24ff280();
   input += synapse0x24ff2c0();
   input += synapse0x24ff300();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24fe1e0() {
   double input = input0x24fe1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x24ff340() {
   double input = 0.342259;
   input += synapse0x24ff680();
   input += synapse0x24ff6c0();
   input += synapse0x24ff700();
   input += synapse0x24ff740();
   input += synapse0x24ff780();
   input += synapse0x24ff7c0();
   input += synapse0x24ff800();
   input += synapse0x24ff840();
   input += synapse0x24ff880();
   input += synapse0x24ff8c0();
   input += synapse0x24ff900();
   input += synapse0x24ff940();
   input += synapse0x24ff980();
   input += synapse0x24ff9c0();
   input += synapse0x24ffa00();
   input += synapse0x24ffa40();
   input += synapse0x24ff4d0();
   input += synapse0x24ff510();
   input += synapse0x24ffb90();
   input += synapse0x24ffbd0();
   input += synapse0x24ffc10();
   input += synapse0x24ffc50();
   input += synapse0x24ffc90();
   input += synapse0x24ffcd0();
   input += synapse0x24ffd10();
   input += synapse0x24ffd50();
   input += synapse0x24ffd90();
   input += synapse0x24ffdd0();
   input += synapse0x24ffe10();
   input += synapse0x24ffe50();
   input += synapse0x24ffe90();
   input += synapse0x24ffed0();
   input += synapse0x24ffa80();
   input += synapse0x24ffac0();
   input += synapse0x24ffb00();
   input += synapse0x24ffb40();
   input += synapse0x2500120();
   input += synapse0x2500160();
   input += synapse0x25001a0();
   input += synapse0x25001e0();
   input += synapse0x2500220();
   input += synapse0x2500260();
   input += synapse0x25002a0();
   input += synapse0x25002e0();
   input += synapse0x2500320();
   input += synapse0x2500360();
   input += synapse0x25003a0();
   input += synapse0x25003e0();
   input += synapse0x2500420();
   input += synapse0x2500460();
   return input;
}

double NNfunction_ss_sLsL::neuron0x24ff340() {
   double input = input0x24ff340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsL::input0x25004a0() {
   double input = 5.31707;
   input += synapse0x24d1580();
   input += synapse0x25006c0();
   input += synapse0x2500700();
   input += synapse0x2500740();
   input += synapse0x2500780();
   return input;
}

double NNfunction_ss_sLsL::neuron0x25004a0() {
   double input = input0x25004a0();
   return (input * 1)+0;
}

double NNfunction_ss_sLsL::synapse0x228c3d0() {
   return (neuron0x24cc560()*-0.21977);
}

double NNfunction_ss_sLsL::synapse0x24cc420() {
   return (neuron0x24cc8a0()*-0.095691);
}

double NNfunction_ss_sLsL::synapse0x24cc460() {
   return (neuron0x24ccbe0()*-0.0762083);
}

double NNfunction_ss_sLsL::synapse0x24d1870() {
   return (neuron0x24ccf20()*0.619692);
}

double NNfunction_ss_sLsL::synapse0x24d18b0() {
   return (neuron0x24cd260()*-0.137857);
}

double NNfunction_ss_sLsL::synapse0x24d18f0() {
   return (neuron0x24cd5a0()*0.299636);
}

double NNfunction_ss_sLsL::synapse0x24d1930() {
   return (neuron0x24cd8e0()*-0.0158857);
}

double NNfunction_ss_sLsL::synapse0x24d1970() {
   return (neuron0x24cdc20()*0.225763);
}

double NNfunction_ss_sLsL::synapse0x24d19b0() {
   return (neuron0x24cdf60()*-0.0933531);
}

double NNfunction_ss_sLsL::synapse0x24d19f0() {
   return (neuron0x24ce2a0()*0.0318248);
}

double NNfunction_ss_sLsL::synapse0x24d1a30() {
   return (neuron0x24ce5e0()*0.0650595);
}

double NNfunction_ss_sLsL::synapse0x24d1a70() {
   return (neuron0x24ce920()*-0.236136);
}

double NNfunction_ss_sLsL::synapse0x24d1ab0() {
   return (neuron0x24cec60()*0.0807919);
}

double NNfunction_ss_sLsL::synapse0x24d1af0() {
   return (neuron0x24cefa0()*0.242386);
}

double NNfunction_ss_sLsL::synapse0x24d1b30() {
   return (neuron0x24cf2e0()*-0.296373);
}

double NNfunction_ss_sLsL::synapse0x24d1b70() {
   return (neuron0x24cf620()*-0.0932327);
}

double NNfunction_ss_sLsL::synapse0x24cc390() {
   return (neuron0x24cf960()*0.0827985);
}

double NNfunction_ss_sLsL::synapse0x24cc3d0() {
   return (neuron0x24cfec0()*-0.136126);
}

double NNfunction_ss_sLsL::synapse0x227dc70() {
   return (neuron0x24d00e0()*0.00912388);
}

double NNfunction_ss_sLsL::synapse0x227dcb0() {
   return (neuron0x24d0420()*0.250125);
}

double NNfunction_ss_sLsL::synapse0x24d1dd0() {
   return (neuron0x24d0760()*0.036471);
}

double NNfunction_ss_sLsL::synapse0x24d1e10() {
   return (neuron0x24d0aa0()*-0.173803);
}

double NNfunction_ss_sLsL::synapse0x24d1e50() {
   return (neuron0x24d0de0()*0.00642259);
}

double NNfunction_ss_sLsL::synapse0x24d1e90() {
   return (neuron0x24d1120()*0.0278176);
}

double NNfunction_ss_sLsL::synapse0x24d2210() {
   return (neuron0x24cc560()*-0.192998);
}

double NNfunction_ss_sLsL::synapse0x24d2250() {
   return (neuron0x24cc8a0()*0.377266);
}

double NNfunction_ss_sLsL::synapse0x24d2290() {
   return (neuron0x24ccbe0()*-0.0667389);
}

double NNfunction_ss_sLsL::synapse0x24d22d0() {
   return (neuron0x24ccf20()*-0.655318);
}

double NNfunction_ss_sLsL::synapse0x24d2310() {
   return (neuron0x24cd260()*0.436612);
}

double NNfunction_ss_sLsL::synapse0x24d2350() {
   return (neuron0x24cd5a0()*-0.383494);
}

double NNfunction_ss_sLsL::synapse0x24d2390() {
   return (neuron0x24cd8e0()*-0.0869815);
}

double NNfunction_ss_sLsL::synapse0x24d23d0() {
   return (neuron0x24cdc20()*-0.272979);
}

double NNfunction_ss_sLsL::synapse0x24d2410() {
   return (neuron0x24cdf60()*-0.0453216);
}

double NNfunction_ss_sLsL::synapse0x24d1cc0() {
   return (neuron0x24ce2a0()*-0.051551);
}

double NNfunction_ss_sLsL::synapse0x24d1d00() {
   return (neuron0x24ce5e0()*0.0357432);
}

double NNfunction_ss_sLsL::synapse0x24d1d40() {
   return (neuron0x24ce920()*0.170514);
}

double NNfunction_ss_sLsL::synapse0x24d1d80() {
   return (neuron0x24cec60()*-0.0354618);
}

double NNfunction_ss_sLsL::synapse0x24d2660() {
   return (neuron0x24cefa0()*-0.612218);
}

double NNfunction_ss_sLsL::synapse0x24d26a0() {
   return (neuron0x24cf2e0()*0.223402);
}

double NNfunction_ss_sLsL::synapse0x24d26e0() {
   return (neuron0x24cf620()*-0.220268);
}

double NNfunction_ss_sLsL::synapse0x24d2060() {
   return (neuron0x24cf960()*-0.319254);
}

double NNfunction_ss_sLsL::synapse0x24d20a0() {
   return (neuron0x24cfec0()*-0.153137);
}

double NNfunction_ss_sLsL::synapse0x24d2830() {
   return (neuron0x24d00e0()*0.158999);
}

double NNfunction_ss_sLsL::synapse0x24d2870() {
   return (neuron0x24d0420()*0.0706416);
}

double NNfunction_ss_sLsL::synapse0x24d28b0() {
   return (neuron0x24d0760()*-0.141761);
}

double NNfunction_ss_sLsL::synapse0x24d28f0() {
   return (neuron0x24d0aa0()*0.170695);
}

double NNfunction_ss_sLsL::synapse0x24d2930() {
   return (neuron0x24d0de0()*-0.258826);
}

double NNfunction_ss_sLsL::synapse0x24d2970() {
   return (neuron0x24d1120()*-0.336793);
}

double NNfunction_ss_sLsL::synapse0x24d2cf0() {
   return (neuron0x24cc560()*-0.579638);
}

double NNfunction_ss_sLsL::synapse0x24d2d30() {
   return (neuron0x24cc8a0()*-0.147033);
}

double NNfunction_ss_sLsL::synapse0x24d2d70() {
   return (neuron0x24ccbe0()*-0.082952);
}

double NNfunction_ss_sLsL::synapse0x24d2db0() {
   return (neuron0x24ccf20()*-0.426503);
}

double NNfunction_ss_sLsL::synapse0x24d2df0() {
   return (neuron0x24cd260()*0.509194);
}

double NNfunction_ss_sLsL::synapse0x24d2e30() {
   return (neuron0x24cd5a0()*0.753222);
}

double NNfunction_ss_sLsL::synapse0x24d2e70() {
   return (neuron0x24cd8e0()*0.716185);
}

double NNfunction_ss_sLsL::synapse0x24d2eb0() {
   return (neuron0x24cdc20()*0.096812);
}

double NNfunction_ss_sLsL::synapse0x24d2ef0() {
   return (neuron0x24cdf60()*-0.128844);
}

double NNfunction_ss_sLsL::synapse0x24d2f30() {
   return (neuron0x24ce2a0()*-0.112302);
}

double NNfunction_ss_sLsL::synapse0x24d2f70() {
   return (neuron0x24ce5e0()*-0.118471);
}

double NNfunction_ss_sLsL::synapse0x24d2fb0() {
   return (neuron0x24ce920()*-0.206612);
}

double NNfunction_ss_sLsL::synapse0x24d2ff0() {
   return (neuron0x24cec60()*0.341232);
}

double NNfunction_ss_sLsL::synapse0x24d3030() {
   return (neuron0x24cefa0()*-0.0860925);
}

double NNfunction_ss_sLsL::synapse0x24d3070() {
   return (neuron0x24cf2e0()*0.350165);
}

double NNfunction_ss_sLsL::synapse0x24d30b0() {
   return (neuron0x24cf620()*0.308639);
}

double NNfunction_ss_sLsL::synapse0x24d2b40() {
   return (neuron0x24cf960()*0.365498);
}

double NNfunction_ss_sLsL::synapse0x24d2b80() {
   return (neuron0x24cfec0()*-0.01772);
}

double NNfunction_ss_sLsL::synapse0x228bac0() {
   return (neuron0x24d00e0()*-0.138595);
}

double NNfunction_ss_sLsL::synapse0x228bb00() {
   return (neuron0x24d0420()*0.0778227);
}

double NNfunction_ss_sLsL::synapse0x24bb5f0() {
   return (neuron0x24d0760()*0.324413);
}

double NNfunction_ss_sLsL::synapse0x24bb630() {
   return (neuron0x24d0aa0()*0.122939);
}

double NNfunction_ss_sLsL::synapse0x24bb670() {
   return (neuron0x24d0de0()*-0.0101673);
}

double NNfunction_ss_sLsL::synapse0x24cc4a0() {
   return (neuron0x24d1120()*-0.305586);
}

double NNfunction_ss_sLsL::synapse0x24d2600() {
   return (neuron0x24cc560()*-0.128885);
}

double NNfunction_ss_sLsL::synapse0x24cc4e0() {
   return (neuron0x24cc8a0()*-0.191212);
}

double NNfunction_ss_sLsL::synapse0x24cc520() {
   return (neuron0x24ccbe0()*-0.312465);
}

double NNfunction_ss_sLsL::synapse0x24d3200() {
   return (neuron0x24ccf20()*-0.625995);
}

double NNfunction_ss_sLsL::synapse0x24d3240() {
   return (neuron0x24cd260()*0.127463);
}

double NNfunction_ss_sLsL::synapse0x24d3280() {
   return (neuron0x24cd5a0()*0.0403284);
}

double NNfunction_ss_sLsL::synapse0x24d32c0() {
   return (neuron0x24cd8e0()*-0.0666673);
}

double NNfunction_ss_sLsL::synapse0x24d3300() {
   return (neuron0x24cdc20()*0.169612);
}

double NNfunction_ss_sLsL::synapse0x24d3340() {
   return (neuron0x24cdf60()*0.237282);
}

double NNfunction_ss_sLsL::synapse0x24d3380() {
   return (neuron0x24ce2a0()*0.0141489);
}

double NNfunction_ss_sLsL::synapse0x24d33c0() {
   return (neuron0x24ce5e0()*0.304919);
}

double NNfunction_ss_sLsL::synapse0x24d3400() {
   return (neuron0x24ce920()*0.249642);
}

double NNfunction_ss_sLsL::synapse0x24d3440() {
   return (neuron0x24cec60()*-0.447653);
}

double NNfunction_ss_sLsL::synapse0x24d3480() {
   return (neuron0x24cefa0()*-0.0874863);
}

double NNfunction_ss_sLsL::synapse0x24d34c0() {
   return (neuron0x24cf2e0()*-0.0534595);
}

double NNfunction_ss_sLsL::synapse0x24d3500() {
   return (neuron0x24cf620()*-0.161145);
}

double NNfunction_ss_sLsL::synapse0x24d2450() {
   return (neuron0x24cf960()*-0.126298);
}

double NNfunction_ss_sLsL::synapse0x24d2490() {
   return (neuron0x24cfec0()*-0.135162);
}

double NNfunction_ss_sLsL::synapse0x24d3650() {
   return (neuron0x24d00e0()*0.433647);
}

double NNfunction_ss_sLsL::synapse0x24d3690() {
   return (neuron0x24d0420()*-0.091391);
}

double NNfunction_ss_sLsL::synapse0x24d36d0() {
   return (neuron0x24d0760()*-0.0957508);
}

double NNfunction_ss_sLsL::synapse0x24d3710() {
   return (neuron0x24d0aa0()*-0.291629);
}

double NNfunction_ss_sLsL::synapse0x24d3750() {
   return (neuron0x24d0de0()*0.213709);
}

double NNfunction_ss_sLsL::synapse0x24d3790() {
   return (neuron0x24d1120()*-0.031386);
}

double NNfunction_ss_sLsL::synapse0x24d3b10() {
   return (neuron0x24cc560()*0.4378);
}

double NNfunction_ss_sLsL::synapse0x24d3b50() {
   return (neuron0x24cc8a0()*-0.0554003);
}

double NNfunction_ss_sLsL::synapse0x24d3b90() {
   return (neuron0x24ccbe0()*-0.437821);
}

double NNfunction_ss_sLsL::synapse0x24d3bd0() {
   return (neuron0x24ccf20()*0.0179958);
}

double NNfunction_ss_sLsL::synapse0x24d3c10() {
   return (neuron0x24cd260()*-0.0586751);
}

double NNfunction_ss_sLsL::synapse0x24d3c50() {
   return (neuron0x24cd5a0()*0.725425);
}

double NNfunction_ss_sLsL::synapse0x24d3c90() {
   return (neuron0x24cd8e0()*0.131525);
}

double NNfunction_ss_sLsL::synapse0x24d3cd0() {
   return (neuron0x24cdc20()*-0.618422);
}

double NNfunction_ss_sLsL::synapse0x24d3d10() {
   return (neuron0x24cdf60()*0.147372);
}

double NNfunction_ss_sLsL::synapse0x24d3d50() {
   return (neuron0x24ce2a0()*-0.731845);
}

double NNfunction_ss_sLsL::synapse0x24d3d90() {
   return (neuron0x24ce5e0()*0.162074);
}

double NNfunction_ss_sLsL::synapse0x24d3dd0() {
   return (neuron0x24ce920()*0.584354);
}

double NNfunction_ss_sLsL::synapse0x24d3e10() {
   return (neuron0x24cec60()*-0.118622);
}

double NNfunction_ss_sLsL::synapse0x24d3e50() {
   return (neuron0x24cefa0()*-0.437094);
}

double NNfunction_ss_sLsL::synapse0x24d3e90() {
   return (neuron0x24cf2e0()*-0.358336);
}

double NNfunction_ss_sLsL::synapse0x24d3ed0() {
   return (neuron0x24cf620()*-0.47648);
}

double NNfunction_ss_sLsL::synapse0x24d3960() {
   return (neuron0x24cf960()*-0.263934);
}

double NNfunction_ss_sLsL::synapse0x24d39a0() {
   return (neuron0x24cfec0()*0.0312016);
}

double NNfunction_ss_sLsL::synapse0x24d4020() {
   return (neuron0x24d00e0()*0.504049);
}

double NNfunction_ss_sLsL::synapse0x24d4060() {
   return (neuron0x24d0420()*-0.177389);
}

double NNfunction_ss_sLsL::synapse0x24d40a0() {
   return (neuron0x24d0760()*0.134679);
}

double NNfunction_ss_sLsL::synapse0x24d40e0() {
   return (neuron0x24d0aa0()*0.0322814);
}

double NNfunction_ss_sLsL::synapse0x24d4120() {
   return (neuron0x24d0de0()*-0.0840476);
}

double NNfunction_ss_sLsL::synapse0x24d4160() {
   return (neuron0x24d1120()*0.193608);
}

double NNfunction_ss_sLsL::synapse0x24d44e0() {
   return (neuron0x24cc560()*0.0695723);
}

double NNfunction_ss_sLsL::synapse0x24d4520() {
   return (neuron0x24cc8a0()*0.00655487);
}

double NNfunction_ss_sLsL::synapse0x24d4560() {
   return (neuron0x24ccbe0()*0.0445602);
}

double NNfunction_ss_sLsL::synapse0x24d45a0() {
   return (neuron0x24ccf20()*-0.702652);
}

double NNfunction_ss_sLsL::synapse0x24d45e0() {
   return (neuron0x24cd260()*0.158129);
}

double NNfunction_ss_sLsL::synapse0x24d4620() {
   return (neuron0x24cd5a0()*-0.0229776);
}

double NNfunction_ss_sLsL::synapse0x24d4660() {
   return (neuron0x24cd8e0()*-0.0613444);
}

double NNfunction_ss_sLsL::synapse0x24d46a0() {
   return (neuron0x24cdc20()*0.00972594);
}

double NNfunction_ss_sLsL::synapse0x24d46e0() {
   return (neuron0x24cdf60()*-0.0521819);
}

double NNfunction_ss_sLsL::synapse0x228be30() {
   return (neuron0x24ce2a0()*-0.209002);
}

double NNfunction_ss_sLsL::synapse0x228be70() {
   return (neuron0x24ce5e0()*-0.0367552);
}

double NNfunction_ss_sLsL::synapse0x228beb0() {
   return (neuron0x24ce920()*-0.0286198);
}

double NNfunction_ss_sLsL::synapse0x228bef0() {
   return (neuron0x24cec60()*-0.646417);
}

double NNfunction_ss_sLsL::synapse0x228bf30() {
   return (neuron0x24cefa0()*0.0266029);
}

double NNfunction_ss_sLsL::synapse0x228bf70() {
   return (neuron0x24cf2e0()*0.0130292);
}

double NNfunction_ss_sLsL::synapse0x228bfb0() {
   return (neuron0x24cf620()*-0.0307532);
}

double NNfunction_ss_sLsL::synapse0x24d4330() {
   return (neuron0x24cf960()*-0.0181751);
}

double NNfunction_ss_sLsL::synapse0x24d4370() {
   return (neuron0x24cfec0()*-0.145125);
}

double NNfunction_ss_sLsL::synapse0x228c100() {
   return (neuron0x24d00e0()*-0.0616063);
}

double NNfunction_ss_sLsL::synapse0x228c140() {
   return (neuron0x24d0420()*0.0589897);
}

double NNfunction_ss_sLsL::synapse0x228c180() {
   return (neuron0x24d0760()*0.0217404);
}

double NNfunction_ss_sLsL::synapse0x228c1c0() {
   return (neuron0x24d0aa0()*0.0345994);
}

double NNfunction_ss_sLsL::synapse0x228c200() {
   return (neuron0x24d0de0()*0.00363972);
}

double NNfunction_ss_sLsL::synapse0x24d4f30() {
   return (neuron0x24d1120()*-0.13419);
}

double NNfunction_ss_sLsL::synapse0x24d52b0() {
   return (neuron0x24cc560()*0.244625);
}

double NNfunction_ss_sLsL::synapse0x24d52f0() {
   return (neuron0x24cc8a0()*0.532354);
}

double NNfunction_ss_sLsL::synapse0x24d5330() {
   return (neuron0x24ccbe0()*-0.59949);
}

double NNfunction_ss_sLsL::synapse0x24d5370() {
   return (neuron0x24ccf20()*0.0376044);
}

double NNfunction_ss_sLsL::synapse0x24d53b0() {
   return (neuron0x24cd260()*0.747596);
}

double NNfunction_ss_sLsL::synapse0x24d53f0() {
   return (neuron0x24cd5a0()*0.470874);
}

double NNfunction_ss_sLsL::synapse0x24d5430() {
   return (neuron0x24cd8e0()*0.125482);
}

double NNfunction_ss_sLsL::synapse0x24d5470() {
   return (neuron0x24cdc20()*-0.213219);
}

double NNfunction_ss_sLsL::synapse0x24d54b0() {
   return (neuron0x24cdf60()*0.500477);
}

double NNfunction_ss_sLsL::synapse0x24d54f0() {
   return (neuron0x24ce2a0()*0.18928);
}

double NNfunction_ss_sLsL::synapse0x24d5530() {
   return (neuron0x24ce5e0()*0.163345);
}

double NNfunction_ss_sLsL::synapse0x24d5570() {
   return (neuron0x24ce920()*-0.542241);
}

double NNfunction_ss_sLsL::synapse0x24d55b0() {
   return (neuron0x24cec60()*-1.45686);
}

double NNfunction_ss_sLsL::synapse0x24d55f0() {
   return (neuron0x24cefa0()*0.309846);
}

double NNfunction_ss_sLsL::synapse0x24d5630() {
   return (neuron0x24cf2e0()*0.727893);
}

double NNfunction_ss_sLsL::synapse0x24d5670() {
   return (neuron0x24cf620()*0.0452712);
}

double NNfunction_ss_sLsL::synapse0x24d5100() {
   return (neuron0x24cf960()*-0.070416);
}

double NNfunction_ss_sLsL::synapse0x24d5140() {
   return (neuron0x24cfec0()*0.722715);
}

double NNfunction_ss_sLsL::synapse0x24d57c0() {
   return (neuron0x24d00e0()*-0.411936);
}

double NNfunction_ss_sLsL::synapse0x24d5800() {
   return (neuron0x24d0420()*-0.151367);
}

double NNfunction_ss_sLsL::synapse0x24d5840() {
   return (neuron0x24d0760()*0.207192);
}

double NNfunction_ss_sLsL::synapse0x24d5880() {
   return (neuron0x24d0aa0()*0.0387648);
}

double NNfunction_ss_sLsL::synapse0x24d58c0() {
   return (neuron0x24d0de0()*-0.0636525);
}

double NNfunction_ss_sLsL::synapse0x24d5900() {
   return (neuron0x24d1120()*0.0748017);
}

double NNfunction_ss_sLsL::synapse0x24d5c80() {
   return (neuron0x24cc560()*0.268025);
}

double NNfunction_ss_sLsL::synapse0x24d5cc0() {
   return (neuron0x24cc8a0()*-0.338225);
}

double NNfunction_ss_sLsL::synapse0x24d5d00() {
   return (neuron0x24ccbe0()*-0.380674);
}

double NNfunction_ss_sLsL::synapse0x24d5d40() {
   return (neuron0x24ccf20()*-1.05478);
}

double NNfunction_ss_sLsL::synapse0x24d5d80() {
   return (neuron0x24cd260()*-0.670129);
}

double NNfunction_ss_sLsL::synapse0x24d5dc0() {
   return (neuron0x24cd5a0()*0.0498573);
}

double NNfunction_ss_sLsL::synapse0x24d5e00() {
   return (neuron0x24cd8e0()*-0.105225);
}

double NNfunction_ss_sLsL::synapse0x24d5e40() {
   return (neuron0x24cdc20()*-0.110798);
}

double NNfunction_ss_sLsL::synapse0x24d5e80() {
   return (neuron0x24cdf60()*0.276968);
}

double NNfunction_ss_sLsL::synapse0x24d5ec0() {
   return (neuron0x24ce2a0()*-0.0923285);
}

double NNfunction_ss_sLsL::synapse0x24d5f00() {
   return (neuron0x24ce5e0()*-0.387288);
}

double NNfunction_ss_sLsL::synapse0x24d5f40() {
   return (neuron0x24ce920()*-0.266394);
}

double NNfunction_ss_sLsL::synapse0x24d5f80() {
   return (neuron0x24cec60()*0.0205827);
}

double NNfunction_ss_sLsL::synapse0x24d5fc0() {
   return (neuron0x24cefa0()*0.0104529);
}

double NNfunction_ss_sLsL::synapse0x24d6000() {
   return (neuron0x24cf2e0()*-0.99087);
}

double NNfunction_ss_sLsL::synapse0x24d6040() {
   return (neuron0x24cf620()*-0.0439153);
}

double NNfunction_ss_sLsL::synapse0x24d5ad0() {
   return (neuron0x24cf960()*-0.605691);
}

double NNfunction_ss_sLsL::synapse0x24d5b10() {
   return (neuron0x24cfec0()*-0.230379);
}

double NNfunction_ss_sLsL::synapse0x24d6190() {
   return (neuron0x24d00e0()*-0.373961);
}

double NNfunction_ss_sLsL::synapse0x24d61d0() {
   return (neuron0x24d0420()*0.0589082);
}

double NNfunction_ss_sLsL::synapse0x24d6210() {
   return (neuron0x24d0760()*0.0301778);
}

double NNfunction_ss_sLsL::synapse0x24d6250() {
   return (neuron0x24d0aa0()*0.59479);
}

double NNfunction_ss_sLsL::synapse0x24d6290() {
   return (neuron0x24d0de0()*0.0689998);
}

double NNfunction_ss_sLsL::synapse0x24d62d0() {
   return (neuron0x24d1120()*0.0840641);
}

double NNfunction_ss_sLsL::synapse0x24cfdb0() {
   return (neuron0x24cc560()*-0.241091);
}

double NNfunction_ss_sLsL::synapse0x24cfdf0() {
   return (neuron0x24cc8a0()*0.0877018);
}

double NNfunction_ss_sLsL::synapse0x24cfe30() {
   return (neuron0x24ccbe0()*0.675114);
}

double NNfunction_ss_sLsL::synapse0x24cfe70() {
   return (neuron0x24ccf20()*0.285965);
}

double NNfunction_ss_sLsL::synapse0x24d6860() {
   return (neuron0x24cd260()*-0.258024);
}

double NNfunction_ss_sLsL::synapse0x24d68a0() {
   return (neuron0x24cd5a0()*0.152163);
}

double NNfunction_ss_sLsL::synapse0x24d68e0() {
   return (neuron0x24cd8e0()*-0.14054);
}

double NNfunction_ss_sLsL::synapse0x24d6920() {
   return (neuron0x24cdc20()*-0.154574);
}

double NNfunction_ss_sLsL::synapse0x24d6960() {
   return (neuron0x24cdf60()*0.339331);
}

double NNfunction_ss_sLsL::synapse0x24d69a0() {
   return (neuron0x24ce2a0()*-0.312567);
}

double NNfunction_ss_sLsL::synapse0x24d69e0() {
   return (neuron0x24ce5e0()*-0.412595);
}

double NNfunction_ss_sLsL::synapse0x24d6a20() {
   return (neuron0x24ce920()*0.111836);
}

double NNfunction_ss_sLsL::synapse0x24d6a60() {
   return (neuron0x24cec60()*0.0385378);
}

double NNfunction_ss_sLsL::synapse0x24d6aa0() {
   return (neuron0x24cefa0()*0.314753);
}

double NNfunction_ss_sLsL::synapse0x24d6ae0() {
   return (neuron0x24cf2e0()*-0.159098);
}

double NNfunction_ss_sLsL::synapse0x24d6b20() {
   return (neuron0x24cf620()*0.149842);
}

double NNfunction_ss_sLsL::synapse0x24d64a0() {
   return (neuron0x24cf960()*0.0952085);
}

double NNfunction_ss_sLsL::synapse0x24d64e0() {
   return (neuron0x24cfec0()*0.653137);
}

double NNfunction_ss_sLsL::synapse0x24d6c70() {
   return (neuron0x24d00e0()*0.177854);
}

double NNfunction_ss_sLsL::synapse0x24d6cb0() {
   return (neuron0x24d0420()*0.288622);
}

double NNfunction_ss_sLsL::synapse0x24d6cf0() {
   return (neuron0x24d0760()*0.18593);
}

double NNfunction_ss_sLsL::synapse0x24d6d30() {
   return (neuron0x24d0aa0()*-0.113528);
}

double NNfunction_ss_sLsL::synapse0x24d6d70() {
   return (neuron0x24d0de0()*-0.0310279);
}

double NNfunction_ss_sLsL::synapse0x24d6db0() {
   return (neuron0x24d1120()*-0.266774);
}

double NNfunction_ss_sLsL::synapse0x24d7130() {
   return (neuron0x24cc560()*-0.0660004);
}

double NNfunction_ss_sLsL::synapse0x24d7170() {
   return (neuron0x24cc8a0()*-0.0449245);
}

double NNfunction_ss_sLsL::synapse0x24d71b0() {
   return (neuron0x24ccbe0()*-0.117985);
}

double NNfunction_ss_sLsL::synapse0x24d71f0() {
   return (neuron0x24ccf20()*0.992878);
}

double NNfunction_ss_sLsL::synapse0x24d7230() {
   return (neuron0x24cd260()*0.111372);
}

double NNfunction_ss_sLsL::synapse0x24d7270() {
   return (neuron0x24cd5a0()*-0.0305362);
}

double NNfunction_ss_sLsL::synapse0x24d72b0() {
   return (neuron0x24cd8e0()*0.0355894);
}

double NNfunction_ss_sLsL::synapse0x24d72f0() {
   return (neuron0x24cdc20()*-0.0594481);
}

double NNfunction_ss_sLsL::synapse0x24d7330() {
   return (neuron0x24cdf60()*-0.0455566);
}

double NNfunction_ss_sLsL::synapse0x24d7370() {
   return (neuron0x24ce2a0()*-0.108585);
}

double NNfunction_ss_sLsL::synapse0x24d73b0() {
   return (neuron0x24ce5e0()*0.0267223);
}

double NNfunction_ss_sLsL::synapse0x24d73f0() {
   return (neuron0x24ce920()*0.0680473);
}

double NNfunction_ss_sLsL::synapse0x24d7430() {
   return (neuron0x24cec60()*-1.09039);
}

double NNfunction_ss_sLsL::synapse0x24d7470() {
   return (neuron0x24cefa0()*-0.0599488);
}

double NNfunction_ss_sLsL::synapse0x24d74b0() {
   return (neuron0x24cf2e0()*0.00331294);
}

double NNfunction_ss_sLsL::synapse0x24d74f0() {
   return (neuron0x24cf620()*-0.0919307);
}

double NNfunction_ss_sLsL::synapse0x24d6f80() {
   return (neuron0x24cf960()*-0.0910214);
}

double NNfunction_ss_sLsL::synapse0x24d6fc0() {
   return (neuron0x24cfec0()*-0.0743862);
}

double NNfunction_ss_sLsL::synapse0x24d7640() {
   return (neuron0x24d00e0()*0.0891326);
}

double NNfunction_ss_sLsL::synapse0x24d7680() {
   return (neuron0x24d0420()*-0.0226777);
}

double NNfunction_ss_sLsL::synapse0x24d76c0() {
   return (neuron0x24d0760()*0.00592787);
}

double NNfunction_ss_sLsL::synapse0x24d7700() {
   return (neuron0x24d0aa0()*-0.00240403);
}

double NNfunction_ss_sLsL::synapse0x24d7740() {
   return (neuron0x24d0de0()*-0.00256922);
}

double NNfunction_ss_sLsL::synapse0x24d7780() {
   return (neuron0x24d1120()*-0.00406455);
}

double NNfunction_ss_sLsL::synapse0x24d7b00() {
   return (neuron0x24cc560()*0.0857998);
}

double NNfunction_ss_sLsL::synapse0x24d7b40() {
   return (neuron0x24cc8a0()*0.0597716);
}

double NNfunction_ss_sLsL::synapse0x24d7b80() {
   return (neuron0x24ccbe0()*0.845848);
}

double NNfunction_ss_sLsL::synapse0x24d7bc0() {
   return (neuron0x24ccf20()*0.883407);
}

double NNfunction_ss_sLsL::synapse0x24d7c00() {
   return (neuron0x24cd260()*-0.0735647);
}

double NNfunction_ss_sLsL::synapse0x24d7c40() {
   return (neuron0x24cd5a0()*0.112459);
}

double NNfunction_ss_sLsL::synapse0x24d7c80() {
   return (neuron0x24cd8e0()*0.155164);
}

double NNfunction_ss_sLsL::synapse0x24d7cc0() {
   return (neuron0x24cdc20()*0.0836686);
}

double NNfunction_ss_sLsL::synapse0x24d7d00() {
   return (neuron0x24cdf60()*-0.148888);
}

double NNfunction_ss_sLsL::synapse0x24d7d40() {
   return (neuron0x24ce2a0()*0.00042824);
}

double NNfunction_ss_sLsL::synapse0x24d7d80() {
   return (neuron0x24ce5e0()*-0.034736);
}

double NNfunction_ss_sLsL::synapse0x24d7dc0() {
   return (neuron0x24ce920()*-0.0686273);
}

double NNfunction_ss_sLsL::synapse0x24d7e00() {
   return (neuron0x24cec60()*-0.544529);
}

double NNfunction_ss_sLsL::synapse0x24d7e40() {
   return (neuron0x24cefa0()*-0.00414139);
}

double NNfunction_ss_sLsL::synapse0x24d7e80() {
   return (neuron0x24cf2e0()*0.0863202);
}

double NNfunction_ss_sLsL::synapse0x24d7ec0() {
   return (neuron0x24cf620()*0.152849);
}

double NNfunction_ss_sLsL::synapse0x24d7950() {
   return (neuron0x24cf960()*-0.10923);
}

double NNfunction_ss_sLsL::synapse0x24d7990() {
   return (neuron0x24cfec0()*0.0334222);
}

double NNfunction_ss_sLsL::synapse0x24d4720() {
   return (neuron0x24d00e0()*-0.122344);
}

double NNfunction_ss_sLsL::synapse0x24d4760() {
   return (neuron0x24d0420()*-0.0518412);
}

double NNfunction_ss_sLsL::synapse0x24d47a0() {
   return (neuron0x24d0760()*-0.0220573);
}

double NNfunction_ss_sLsL::synapse0x24d47e0() {
   return (neuron0x24d0aa0()*0.00540597);
}

double NNfunction_ss_sLsL::synapse0x24d4820() {
   return (neuron0x24d0de0()*-0.11092);
}

double NNfunction_ss_sLsL::synapse0x24d4860() {
   return (neuron0x24d1120()*0.0169924);
}

double NNfunction_ss_sLsL::synapse0x24d4be0() {
   return (neuron0x24cc560()*0.00719679);
}

double NNfunction_ss_sLsL::synapse0x24d4c20() {
   return (neuron0x24cc8a0()*-0.0147612);
}

double NNfunction_ss_sLsL::synapse0x24d4c60() {
   return (neuron0x24ccbe0()*-0.0502609);
}

double NNfunction_ss_sLsL::synapse0x24d4ca0() {
   return (neuron0x24ccf20()*0.940846);
}

double NNfunction_ss_sLsL::synapse0x24d4ce0() {
   return (neuron0x24cd260()*0.0102906);
}

double NNfunction_ss_sLsL::synapse0x24d4d20() {
   return (neuron0x24cd5a0()*-0.023698);
}

double NNfunction_ss_sLsL::synapse0x24d4d60() {
   return (neuron0x24cd8e0()*0.0129579);
}

double NNfunction_ss_sLsL::synapse0x24d4da0() {
   return (neuron0x24cdc20()*0.00187789);
}

double NNfunction_ss_sLsL::synapse0x24d4de0() {
   return (neuron0x24cdf60()*0.0013476);
}

double NNfunction_ss_sLsL::synapse0x24d4e20() {
   return (neuron0x24ce2a0()*0.0273913);
}

double NNfunction_ss_sLsL::synapse0x24d4e60() {
   return (neuron0x24ce5e0()*-0.0136616);
}

double NNfunction_ss_sLsL::synapse0x24d4ea0() {
   return (neuron0x24ce920()*0.0109523);
}

double NNfunction_ss_sLsL::synapse0x24d4ee0() {
   return (neuron0x24cec60()*0.711334);
}

double NNfunction_ss_sLsL::synapse0x24d9020() {
   return (neuron0x24cefa0()*-0.00594322);
}

double NNfunction_ss_sLsL::synapse0x24d9060() {
   return (neuron0x24cf2e0()*0.013646);
}

double NNfunction_ss_sLsL::synapse0x24d90a0() {
   return (neuron0x24cf620()*0.0179849);
}

double NNfunction_ss_sLsL::synapse0x24d4a30() {
   return (neuron0x24cf960()*-0.0266452);
}

double NNfunction_ss_sLsL::synapse0x24d4a70() {
   return (neuron0x24cfec0()*-0.0120846);
}

double NNfunction_ss_sLsL::synapse0x24d91f0() {
   return (neuron0x24d00e0()*0.0228247);
}

double NNfunction_ss_sLsL::synapse0x24d9230() {
   return (neuron0x24d0420()*0.0242515);
}

double NNfunction_ss_sLsL::synapse0x24d9270() {
   return (neuron0x24d0760()*-0.0202856);
}

double NNfunction_ss_sLsL::synapse0x24d92b0() {
   return (neuron0x24d0aa0()*0.00398834);
}

double NNfunction_ss_sLsL::synapse0x24d92f0() {
   return (neuron0x24d0de0()*-0.0233458);
}

double NNfunction_ss_sLsL::synapse0x24d9330() {
   return (neuron0x24d1120()*-0.00523018);
}

double NNfunction_ss_sLsL::synapse0x24d96b0() {
   return (neuron0x24cc560()*0.015612);
}

double NNfunction_ss_sLsL::synapse0x24d96f0() {
   return (neuron0x24cc8a0()*-0.00533974);
}

double NNfunction_ss_sLsL::synapse0x24d9730() {
   return (neuron0x24ccbe0()*-0.17753);
}

double NNfunction_ss_sLsL::synapse0x24d9770() {
   return (neuron0x24ccf20()*-2.8435);
}

double NNfunction_ss_sLsL::synapse0x24d97b0() {
   return (neuron0x24cd260()*-0.010026);
}

double NNfunction_ss_sLsL::synapse0x24d97f0() {
   return (neuron0x24cd5a0()*-0.0300549);
}

double NNfunction_ss_sLsL::synapse0x24d9830() {
   return (neuron0x24cd8e0()*-0.00263746);
}

double NNfunction_ss_sLsL::synapse0x24d9870() {
   return (neuron0x24cdc20()*-0.00576151);
}

double NNfunction_ss_sLsL::synapse0x24d98b0() {
   return (neuron0x24cdf60()*0.00613763);
}

double NNfunction_ss_sLsL::synapse0x24d98f0() {
   return (neuron0x24ce2a0()*-0.00616043);
}

double NNfunction_ss_sLsL::synapse0x24d9930() {
   return (neuron0x24ce5e0()*-0.0206021);
}

double NNfunction_ss_sLsL::synapse0x24d9970() {
   return (neuron0x24ce920()*-0.0184136);
}

double NNfunction_ss_sLsL::synapse0x24d99b0() {
   return (neuron0x24cec60()*0.435171);
}

double NNfunction_ss_sLsL::synapse0x24d99f0() {
   return (neuron0x24cefa0()*0.010311);
}

double NNfunction_ss_sLsL::synapse0x24d9a30() {
   return (neuron0x24cf2e0()*-0.0476372);
}

double NNfunction_ss_sLsL::synapse0x24d9a70() {
   return (neuron0x24cf620()*0.0253645);
}

double NNfunction_ss_sLsL::synapse0x24d9500() {
   return (neuron0x24cf960()*0.0366826);
}

double NNfunction_ss_sLsL::synapse0x24d9540() {
   return (neuron0x24cfec0()*0.0142901);
}

double NNfunction_ss_sLsL::synapse0x24d9bc0() {
   return (neuron0x24d00e0()*0.00226846);
}

double NNfunction_ss_sLsL::synapse0x24d9c00() {
   return (neuron0x24d0420()*-0.015314);
}

double NNfunction_ss_sLsL::synapse0x24d9c40() {
   return (neuron0x24d0760()*-0.0116822);
}

double NNfunction_ss_sLsL::synapse0x24d9c80() {
   return (neuron0x24d0aa0()*0.0224843);
}

double NNfunction_ss_sLsL::synapse0x24d9cc0() {
   return (neuron0x24d0de0()*0.0218187);
}

double NNfunction_ss_sLsL::synapse0x24d9d00() {
   return (neuron0x24d1120()*0.0520144);
}

double NNfunction_ss_sLsL::synapse0x24da080() {
   return (neuron0x24cc560()*-0.001916);
}

double NNfunction_ss_sLsL::synapse0x24da0c0() {
   return (neuron0x24cc8a0()*0.00656432);
}

double NNfunction_ss_sLsL::synapse0x24da100() {
   return (neuron0x24ccbe0()*0.0096477);
}

double NNfunction_ss_sLsL::synapse0x24da140() {
   return (neuron0x24ccf20()*-7.91243);
}

double NNfunction_ss_sLsL::synapse0x24da180() {
   return (neuron0x24cd260()*0.040338);
}

double NNfunction_ss_sLsL::synapse0x24da1c0() {
   return (neuron0x24cd5a0()*0.0102198);
}

double NNfunction_ss_sLsL::synapse0x24da200() {
   return (neuron0x24cd8e0()*0.00381501);
}

double NNfunction_ss_sLsL::synapse0x24da240() {
   return (neuron0x24cdc20()*0.00411358);
}

double NNfunction_ss_sLsL::synapse0x24da280() {
   return (neuron0x24cdf60()*-0.00584017);
}

double NNfunction_ss_sLsL::synapse0x24da2c0() {
   return (neuron0x24ce2a0()*-0.0011649);
}

double NNfunction_ss_sLsL::synapse0x24da300() {
   return (neuron0x24ce5e0()*0.00465809);
}

double NNfunction_ss_sLsL::synapse0x24da340() {
   return (neuron0x24ce920()*0.0191768);
}

double NNfunction_ss_sLsL::synapse0x24da380() {
   return (neuron0x24cec60()*-0.308348);
}

double NNfunction_ss_sLsL::synapse0x24da3c0() {
   return (neuron0x24cefa0()*-0.0259151);
}

double NNfunction_ss_sLsL::synapse0x24da400() {
   return (neuron0x24cf2e0()*-0.0108865);
}

double NNfunction_ss_sLsL::synapse0x24da440() {
   return (neuron0x24cf620()*-0.015869);
}

double NNfunction_ss_sLsL::synapse0x24d9ed0() {
   return (neuron0x24cf960()*-0.0328236);
}

double NNfunction_ss_sLsL::synapse0x24d9f10() {
   return (neuron0x24cfec0()*-0.00313175);
}

double NNfunction_ss_sLsL::synapse0x24da590() {
   return (neuron0x24d00e0()*0.00828518);
}

double NNfunction_ss_sLsL::synapse0x24da5d0() {
   return (neuron0x24d0420()*0.0180108);
}

double NNfunction_ss_sLsL::synapse0x24da610() {
   return (neuron0x24d0760()*0.00413556);
}

double NNfunction_ss_sLsL::synapse0x24da650() {
   return (neuron0x24d0aa0()*-0.022936);
}

double NNfunction_ss_sLsL::synapse0x24da690() {
   return (neuron0x24d0de0()*-0.0036783);
}

double NNfunction_ss_sLsL::synapse0x24da6d0() {
   return (neuron0x24d1120()*-0.0263283);
}

double NNfunction_ss_sLsL::synapse0x24daa50() {
   return (neuron0x24cc560()*-0.0100389);
}

double NNfunction_ss_sLsL::synapse0x24daa90() {
   return (neuron0x24cc8a0()*0.0723317);
}

double NNfunction_ss_sLsL::synapse0x24daad0() {
   return (neuron0x24ccbe0()*0.162797);
}

double NNfunction_ss_sLsL::synapse0x24dab10() {
   return (neuron0x24ccf20()*-0.14116);
}

double NNfunction_ss_sLsL::synapse0x24dab50() {
   return (neuron0x24cd260()*0.0681665);
}

double NNfunction_ss_sLsL::synapse0x24dab90() {
   return (neuron0x24cd5a0()*0.0154061);
}

double NNfunction_ss_sLsL::synapse0x24dabd0() {
   return (neuron0x24cd8e0()*-0.0508288);
}

double NNfunction_ss_sLsL::synapse0x24dac10() {
   return (neuron0x24cdc20()*0.00747374);
}

double NNfunction_ss_sLsL::synapse0x24dac50() {
   return (neuron0x24cdf60()*0.0369406);
}

double NNfunction_ss_sLsL::synapse0x24dac90() {
   return (neuron0x24ce2a0()*-0.114235);
}

double NNfunction_ss_sLsL::synapse0x24dacd0() {
   return (neuron0x24ce5e0()*0.00157623);
}

double NNfunction_ss_sLsL::synapse0x24dad10() {
   return (neuron0x24ce920()*-0.0354649);
}

double NNfunction_ss_sLsL::synapse0x24dad50() {
   return (neuron0x24cec60()*1.10494);
}

double NNfunction_ss_sLsL::synapse0x24dad90() {
   return (neuron0x24cefa0()*-0.00782364);
}

double NNfunction_ss_sLsL::synapse0x24dadd0() {
   return (neuron0x24cf2e0()*0.0301739);
}

double NNfunction_ss_sLsL::synapse0x24dae10() {
   return (neuron0x24cf620()*-0.00924347);
}

double NNfunction_ss_sLsL::synapse0x24da8a0() {
   return (neuron0x24cf960()*-0.0039074);
}

double NNfunction_ss_sLsL::synapse0x24da8e0() {
   return (neuron0x24cfec0()*0.0241117);
}

double NNfunction_ss_sLsL::synapse0x24daf60() {
   return (neuron0x24d00e0()*0.0829973);
}

double NNfunction_ss_sLsL::synapse0x24dafa0() {
   return (neuron0x24d0420()*0.0149652);
}

double NNfunction_ss_sLsL::synapse0x24dafe0() {
   return (neuron0x24d0760()*0.00181606);
}

double NNfunction_ss_sLsL::synapse0x24db020() {
   return (neuron0x24d0aa0()*0.0358485);
}

double NNfunction_ss_sLsL::synapse0x24db060() {
   return (neuron0x24d0de0()*0.00924637);
}

double NNfunction_ss_sLsL::synapse0x24db0a0() {
   return (neuron0x24d1120()*0.0165805);
}

double NNfunction_ss_sLsL::synapse0x24db420() {
   return (neuron0x24cc560()*-0.00739881);
}

double NNfunction_ss_sLsL::synapse0x24cc780() {
   return (neuron0x24cc8a0()*0.0493308);
}

double NNfunction_ss_sLsL::synapse0x24cc7c0() {
   return (neuron0x24ccbe0()*1.09762);
}

double NNfunction_ss_sLsL::synapse0x24ccac0() {
   return (neuron0x24ccf20()*0.013954);
}

double NNfunction_ss_sLsL::synapse0x24ccb00() {
   return (neuron0x24cd260()*-0.00133692);
}

double NNfunction_ss_sLsL::synapse0x24cce00() {
   return (neuron0x24cd5a0()*-0.0419396);
}

double NNfunction_ss_sLsL::synapse0x24cce40() {
   return (neuron0x24cd8e0()*-0.0104894);
}

double NNfunction_ss_sLsL::synapse0x24cd140() {
   return (neuron0x24cdc20()*-0.0135568);
}

double NNfunction_ss_sLsL::synapse0x24cd180() {
   return (neuron0x24cdf60()*0.0165678);
}

double NNfunction_ss_sLsL::synapse0x24cd480() {
   return (neuron0x24ce2a0()*-0.000216791);
}

double NNfunction_ss_sLsL::synapse0x24cd4c0() {
   return (neuron0x24ce5e0()*-0.0103951);
}

double NNfunction_ss_sLsL::synapse0x24cd7c0() {
   return (neuron0x24ce920()*-0.0624561);
}

double NNfunction_ss_sLsL::synapse0x24cd800() {
   return (neuron0x24cec60()*-0.329249);
}

double NNfunction_ss_sLsL::synapse0x24cdb00() {
   return (neuron0x24cefa0()*0.0562963);
}

double NNfunction_ss_sLsL::synapse0x24cdb40() {
   return (neuron0x24cf2e0()*-0.079817);
}

double NNfunction_ss_sLsL::synapse0x24cde40() {
   return (neuron0x24cf620()*-0.023568);
}

double NNfunction_ss_sLsL::synapse0x24cde80() {
   return (neuron0x24cf960()*0.113729);
}

double NNfunction_ss_sLsL::synapse0x24ce180() {
   return (neuron0x24cfec0()*-0.0333214);
}

double NNfunction_ss_sLsL::synapse0x24ce1c0() {
   return (neuron0x24d00e0()*-0.042982);
}

double NNfunction_ss_sLsL::synapse0x24ce4c0() {
   return (neuron0x24d0420()*0.020561);
}

double NNfunction_ss_sLsL::synapse0x24ce500() {
   return (neuron0x24d0760()*0.00887261);
}

double NNfunction_ss_sLsL::synapse0x24ce800() {
   return (neuron0x24d0aa0()*0.0116697);
}

double NNfunction_ss_sLsL::synapse0x24ce840() {
   return (neuron0x24d0de0()*0.0130157);
}

double NNfunction_ss_sLsL::synapse0x24ceb40() {
   return (neuron0x24d1120()*-0.0195592);
}

double NNfunction_ss_sLsL::synapse0x24ceb80() {
   return (neuron0x24cc560()*0.337758);
}

double NNfunction_ss_sLsL::synapse0x24cf840() {
   return (neuron0x24cc8a0()*-0.139701);
}

double NNfunction_ss_sLsL::synapse0x24cf880() {
   return (neuron0x24ccbe0()*0.0913269);
}

double NNfunction_ss_sLsL::synapse0x24db270() {
   return (neuron0x24ccf20()*0.691352);
}

double NNfunction_ss_sLsL::synapse0x24db2b0() {
   return (neuron0x24cd260()*0.376309);
}

double NNfunction_ss_sLsL::synapse0x24cfb80() {
   return (neuron0x24cd5a0()*0.0295109);
}

double NNfunction_ss_sLsL::synapse0x24cfbc0() {
   return (neuron0x24cd8e0()*0.326389);
}

double NNfunction_ss_sLsL::synapse0x227db50() {
   return (neuron0x24cdc20()*0.398595);
}

double NNfunction_ss_sLsL::synapse0x227db90() {
   return (neuron0x24cdf60()*0.0953101);
}

double NNfunction_ss_sLsL::synapse0x24d0300() {
   return (neuron0x24ce2a0()*0.120006);
}

double NNfunction_ss_sLsL::synapse0x24d0340() {
   return (neuron0x24ce5e0()*0.440996);
}

double NNfunction_ss_sLsL::synapse0x24d0640() {
   return (neuron0x24ce920()*0.293241);
}

double NNfunction_ss_sLsL::synapse0x24d0680() {
   return (neuron0x24cec60()*-0.130762);
}

double NNfunction_ss_sLsL::synapse0x24d0980() {
   return (neuron0x24cefa0()*-0.0849192);
}

double NNfunction_ss_sLsL::synapse0x24d09c0() {
   return (neuron0x24cf2e0()*-0.117726);
}

double NNfunction_ss_sLsL::synapse0x24d0cc0() {
   return (neuron0x24cf620()*-0.13426);
}

double NNfunction_ss_sLsL::synapse0x24d0d00() {
   return (neuron0x24cf960()*0.325443);
}

double NNfunction_ss_sLsL::synapse0x24d1000() {
   return (neuron0x24cfec0()*-0.156861);
}

double NNfunction_ss_sLsL::synapse0x24d1040() {
   return (neuron0x24d00e0()*0.435889);
}

double NNfunction_ss_sLsL::synapse0x24d1340() {
   return (neuron0x24d0420()*-0.342084);
}

double NNfunction_ss_sLsL::synapse0x24d1380() {
   return (neuron0x24d0760()*-0.217591);
}

double NNfunction_ss_sLsL::synapse0x24cee80() {
   return (neuron0x24d0aa0()*-0.000340036);
}

double NNfunction_ss_sLsL::synapse0x24ceec0() {
   return (neuron0x24d0de0()*-0.143576);
}

double NNfunction_ss_sLsL::synapse0x24dd190() {
   return (neuron0x24d1120()*-0.128735);
}

double NNfunction_ss_sLsL::synapse0x24dd510() {
   return (neuron0x24cc560()*0.309299);
}

double NNfunction_ss_sLsL::synapse0x24dd550() {
   return (neuron0x24cc8a0()*-0.295144);
}

double NNfunction_ss_sLsL::synapse0x24dd590() {
   return (neuron0x24ccbe0()*-0.177816);
}

double NNfunction_ss_sLsL::synapse0x24dd5d0() {
   return (neuron0x24ccf20()*-0.14095);
}

double NNfunction_ss_sLsL::synapse0x24dd610() {
   return (neuron0x24cd260()*-0.199622);
}

double NNfunction_ss_sLsL::synapse0x24dd650() {
   return (neuron0x24cd5a0()*-0.338353);
}

double NNfunction_ss_sLsL::synapse0x24dd690() {
   return (neuron0x24cd8e0()*0.435003);
}

double NNfunction_ss_sLsL::synapse0x24dd6d0() {
   return (neuron0x24cdc20()*0.247513);
}

double NNfunction_ss_sLsL::synapse0x24dd710() {
   return (neuron0x24cdf60()*-0.366302);
}

double NNfunction_ss_sLsL::synapse0x24dd750() {
   return (neuron0x24ce2a0()*0.339958);
}

double NNfunction_ss_sLsL::synapse0x24dd790() {
   return (neuron0x24ce5e0()*0.0763784);
}

double NNfunction_ss_sLsL::synapse0x24dd7d0() {
   return (neuron0x24ce920()*0.573577);
}

double NNfunction_ss_sLsL::synapse0x24dd810() {
   return (neuron0x24cec60()*1.03094);
}

double NNfunction_ss_sLsL::synapse0x24dd850() {
   return (neuron0x24cefa0()*-1.28594);
}

double NNfunction_ss_sLsL::synapse0x24dd890() {
   return (neuron0x24cf2e0()*-0.641858);
}

double NNfunction_ss_sLsL::synapse0x24dd8d0() {
   return (neuron0x24cf620()*-0.31825);
}

double NNfunction_ss_sLsL::synapse0x24dd360() {
   return (neuron0x24cf960()*0.407426);
}

double NNfunction_ss_sLsL::synapse0x24dd3a0() {
   return (neuron0x24cfec0()*-0.665597);
}

double NNfunction_ss_sLsL::synapse0x24dda20() {
   return (neuron0x24d00e0()*0.242163);
}

double NNfunction_ss_sLsL::synapse0x24dda60() {
   return (neuron0x24d0420()*0.391446);
}

double NNfunction_ss_sLsL::synapse0x24ddaa0() {
   return (neuron0x24d0760()*-0.383807);
}

double NNfunction_ss_sLsL::synapse0x24ddae0() {
   return (neuron0x24d0aa0()*-0.420574);
}

double NNfunction_ss_sLsL::synapse0x24ddb20() {
   return (neuron0x24d0de0()*0.223676);
}

double NNfunction_ss_sLsL::synapse0x24ddb60() {
   return (neuron0x24d1120()*0.376783);
}

double NNfunction_ss_sLsL::synapse0x24ddee0() {
   return (neuron0x24cc560()*-0.221569);
}

double NNfunction_ss_sLsL::synapse0x24ddf20() {
   return (neuron0x24cc8a0()*0.0959075);
}

double NNfunction_ss_sLsL::synapse0x24ddf60() {
   return (neuron0x24ccbe0()*0.540656);
}

double NNfunction_ss_sLsL::synapse0x24ddfa0() {
   return (neuron0x24ccf20()*0.334659);
}

double NNfunction_ss_sLsL::synapse0x24ddfe0() {
   return (neuron0x24cd260()*0.0807547);
}

double NNfunction_ss_sLsL::synapse0x24de020() {
   return (neuron0x24cd5a0()*0.228085);
}

double NNfunction_ss_sLsL::synapse0x24de060() {
   return (neuron0x24cd8e0()*0.418119);
}

double NNfunction_ss_sLsL::synapse0x24de0a0() {
   return (neuron0x24cdc20()*-0.248042);
}

double NNfunction_ss_sLsL::synapse0x24de0e0() {
   return (neuron0x24cdf60()*0.208998);
}

double NNfunction_ss_sLsL::synapse0x24de120() {
   return (neuron0x24ce2a0()*0.0421887);
}

double NNfunction_ss_sLsL::synapse0x24de160() {
   return (neuron0x24ce5e0()*0.341415);
}

double NNfunction_ss_sLsL::synapse0x24de1a0() {
   return (neuron0x24ce920()*0.0772156);
}

double NNfunction_ss_sLsL::synapse0x24de1e0() {
   return (neuron0x24cec60()*0.287128);
}

double NNfunction_ss_sLsL::synapse0x24de220() {
   return (neuron0x24cefa0()*0.0138405);
}

double NNfunction_ss_sLsL::synapse0x24de260() {
   return (neuron0x24cf2e0()*0.013631);
}

double NNfunction_ss_sLsL::synapse0x24de2a0() {
   return (neuron0x24cf620()*-0.243821);
}

double NNfunction_ss_sLsL::synapse0x24ddd30() {
   return (neuron0x24cf960()*0.387764);
}

double NNfunction_ss_sLsL::synapse0x24ddd70() {
   return (neuron0x24cfec0()*0.0428667);
}

double NNfunction_ss_sLsL::synapse0x24de3f0() {
   return (neuron0x24d00e0()*0.82154);
}

double NNfunction_ss_sLsL::synapse0x24de430() {
   return (neuron0x24d0420()*-0.243219);
}

double NNfunction_ss_sLsL::synapse0x24de470() {
   return (neuron0x24d0760()*0.231382);
}

double NNfunction_ss_sLsL::synapse0x24de4b0() {
   return (neuron0x24d0aa0()*0.160368);
}

double NNfunction_ss_sLsL::synapse0x24de4f0() {
   return (neuron0x24d0de0()*0.096916);
}

double NNfunction_ss_sLsL::synapse0x24de530() {
   return (neuron0x24d1120()*-0.659212);
}

double NNfunction_ss_sLsL::synapse0x24de8b0() {
   return (neuron0x24cc560()*0.0157219);
}

double NNfunction_ss_sLsL::synapse0x24de8f0() {
   return (neuron0x24cc8a0()*0.0256336);
}

double NNfunction_ss_sLsL::synapse0x24de930() {
   return (neuron0x24ccbe0()*-0.573687);
}

double NNfunction_ss_sLsL::synapse0x24de970() {
   return (neuron0x24ccf20()*-1.33062);
}

double NNfunction_ss_sLsL::synapse0x24de9b0() {
   return (neuron0x24cd260()*-0.0368888);
}

double NNfunction_ss_sLsL::synapse0x24de9f0() {
   return (neuron0x24cd5a0()*-0.0768781);
}

double NNfunction_ss_sLsL::synapse0x24dea30() {
   return (neuron0x24cd8e0()*-0.0296349);
}

double NNfunction_ss_sLsL::synapse0x24dea70() {
   return (neuron0x24cdc20()*-0.0135531);
}

double NNfunction_ss_sLsL::synapse0x24deab0() {
   return (neuron0x24cdf60()*0.0103831);
}

double NNfunction_ss_sLsL::synapse0x24deaf0() {
   return (neuron0x24ce2a0()*0.0661886);
}

double NNfunction_ss_sLsL::synapse0x24deb30() {
   return (neuron0x24ce5e0()*-0.0611907);
}

double NNfunction_ss_sLsL::synapse0x24deb70() {
   return (neuron0x24ce920()*-0.0687076);
}

double NNfunction_ss_sLsL::synapse0x24debb0() {
   return (neuron0x24cec60()*0.256327);
}

double NNfunction_ss_sLsL::synapse0x24debf0() {
   return (neuron0x24cefa0()*-0.00365775);
}

double NNfunction_ss_sLsL::synapse0x24dec30() {
   return (neuron0x24cf2e0()*-0.100604);
}

double NNfunction_ss_sLsL::synapse0x24dec70() {
   return (neuron0x24cf620()*-0.0358648);
}

double NNfunction_ss_sLsL::synapse0x24de700() {
   return (neuron0x24cf960()*0.0909087);
}

double NNfunction_ss_sLsL::synapse0x24de740() {
   return (neuron0x24cfec0()*-0.0645287);
}

double NNfunction_ss_sLsL::synapse0x24dedc0() {
   return (neuron0x24d00e0()*-0.0346603);
}

double NNfunction_ss_sLsL::synapse0x24dee00() {
   return (neuron0x24d0420()*-0.0267967);
}

double NNfunction_ss_sLsL::synapse0x24dee40() {
   return (neuron0x24d0760()*0.00928775);
}

double NNfunction_ss_sLsL::synapse0x24dee80() {
   return (neuron0x24d0aa0()*-0.00404455);
}

double NNfunction_ss_sLsL::synapse0x24deec0() {
   return (neuron0x24d0de0()*0.0517284);
}

double NNfunction_ss_sLsL::synapse0x24def00() {
   return (neuron0x24d1120()*0.0097747);
}

double NNfunction_ss_sLsL::synapse0x24df280() {
   return (neuron0x24cc560()*-0.176092);
}

double NNfunction_ss_sLsL::synapse0x24df2c0() {
   return (neuron0x24cc8a0()*-0.547538);
}

double NNfunction_ss_sLsL::synapse0x24df300() {
   return (neuron0x24ccbe0()*-0.337395);
}

double NNfunction_ss_sLsL::synapse0x24df340() {
   return (neuron0x24ccf20()*0.260743);
}

double NNfunction_ss_sLsL::synapse0x24df380() {
   return (neuron0x24cd260()*-0.443414);
}

double NNfunction_ss_sLsL::synapse0x24df3c0() {
   return (neuron0x24cd5a0()*0.0136916);
}

double NNfunction_ss_sLsL::synapse0x24df400() {
   return (neuron0x24cd8e0()*-0.229765);
}

double NNfunction_ss_sLsL::synapse0x24df440() {
   return (neuron0x24cdc20()*-0.0715079);
}

double NNfunction_ss_sLsL::synapse0x24df480() {
   return (neuron0x24cdf60()*0.284802);
}

double NNfunction_ss_sLsL::synapse0x24df4c0() {
   return (neuron0x24ce2a0()*0.00777119);
}

double NNfunction_ss_sLsL::synapse0x24df500() {
   return (neuron0x24ce5e0()*-0.341417);
}

double NNfunction_ss_sLsL::synapse0x24df540() {
   return (neuron0x24ce920()*0.143083);
}

double NNfunction_ss_sLsL::synapse0x24df580() {
   return (neuron0x24cec60()*-0.318741);
}

double NNfunction_ss_sLsL::synapse0x24df5c0() {
   return (neuron0x24cefa0()*-0.00419933);
}

double NNfunction_ss_sLsL::synapse0x24df600() {
   return (neuron0x24cf2e0()*0.663706);
}

double NNfunction_ss_sLsL::synapse0x24df640() {
   return (neuron0x24cf620()*0.682339);
}

double NNfunction_ss_sLsL::synapse0x24df0d0() {
   return (neuron0x24cf960()*-0.365441);
}

double NNfunction_ss_sLsL::synapse0x24df110() {
   return (neuron0x24cfec0()*-0.287031);
}

double NNfunction_ss_sLsL::synapse0x24df790() {
   return (neuron0x24d00e0()*-0.0307118);
}

double NNfunction_ss_sLsL::synapse0x24df7d0() {
   return (neuron0x24d0420()*0.0687571);
}

double NNfunction_ss_sLsL::synapse0x24df810() {
   return (neuron0x24d0760()*-0.197984);
}

double NNfunction_ss_sLsL::synapse0x24df850() {
   return (neuron0x24d0aa0()*-0.0771572);
}

double NNfunction_ss_sLsL::synapse0x24df890() {
   return (neuron0x24d0de0()*0.452606);
}

double NNfunction_ss_sLsL::synapse0x24df8d0() {
   return (neuron0x24d1120()*-0.35243);
}

double NNfunction_ss_sLsL::synapse0x24dfc50() {
   return (neuron0x24cc560()*-0.0139294);
}

double NNfunction_ss_sLsL::synapse0x24dfc90() {
   return (neuron0x24cc8a0()*0.0142864);
}

double NNfunction_ss_sLsL::synapse0x24dfcd0() {
   return (neuron0x24ccbe0()*0.100233);
}

double NNfunction_ss_sLsL::synapse0x24dfd10() {
   return (neuron0x24ccf20()*-0.431174);
}

double NNfunction_ss_sLsL::synapse0x24dfd50() {
   return (neuron0x24cd260()*0.0161308);
}

double NNfunction_ss_sLsL::synapse0x24dfd90() {
   return (neuron0x24cd5a0()*-0.0317008);
}

double NNfunction_ss_sLsL::synapse0x24dfdd0() {
   return (neuron0x24cd8e0()*-0.0142651);
}

double NNfunction_ss_sLsL::synapse0x24dfe10() {
   return (neuron0x24cdc20()*0.0118348);
}

double NNfunction_ss_sLsL::synapse0x24dfe50() {
   return (neuron0x24cdf60()*0.066403);
}

double NNfunction_ss_sLsL::synapse0x24d8010() {
   return (neuron0x24ce2a0()*-0.0108782);
}

double NNfunction_ss_sLsL::synapse0x24d8050() {
   return (neuron0x24ce5e0()*0.0131243);
}

double NNfunction_ss_sLsL::synapse0x24d8090() {
   return (neuron0x24ce920()*-0.0733673);
}

double NNfunction_ss_sLsL::synapse0x24d80d0() {
   return (neuron0x24cec60()*-1.06216);
}

double NNfunction_ss_sLsL::synapse0x24d8110() {
   return (neuron0x24cefa0()*-0.0188398);
}

double NNfunction_ss_sLsL::synapse0x24d8150() {
   return (neuron0x24cf2e0()*-0.0240232);
}

double NNfunction_ss_sLsL::synapse0x24d8190() {
   return (neuron0x24cf620()*-0.0295956);
}

double NNfunction_ss_sLsL::synapse0x24dfaa0() {
   return (neuron0x24cf960()*-0.00705799);
}

double NNfunction_ss_sLsL::synapse0x24dfae0() {
   return (neuron0x24cfec0()*-0.00364078);
}

double NNfunction_ss_sLsL::synapse0x24d82e0() {
   return (neuron0x24d00e0()*0.0181862);
}

double NNfunction_ss_sLsL::synapse0x24d8320() {
   return (neuron0x24d0420()*0.0263288);
}

double NNfunction_ss_sLsL::synapse0x24d8360() {
   return (neuron0x24d0760()*0.000110243);
}

double NNfunction_ss_sLsL::synapse0x24d83a0() {
   return (neuron0x24d0aa0()*0.00819011);
}

double NNfunction_ss_sLsL::synapse0x24d83e0() {
   return (neuron0x24d0de0()*0.00747004);
}

double NNfunction_ss_sLsL::synapse0x24d8420() {
   return (neuron0x24d1120()*0.0181569);
}

double NNfunction_ss_sLsL::synapse0x24d87a0() {
   return (neuron0x24cc560()*-0.0207569);
}

double NNfunction_ss_sLsL::synapse0x24d87e0() {
   return (neuron0x24cc8a0()*-0.0163695);
}

double NNfunction_ss_sLsL::synapse0x24d8820() {
   return (neuron0x24ccbe0()*0.109198);
}

double NNfunction_ss_sLsL::synapse0x24d8860() {
   return (neuron0x24ccf20()*0.00739501);
}

double NNfunction_ss_sLsL::synapse0x24d88a0() {
   return (neuron0x24cd260()*-0.0075513);
}

double NNfunction_ss_sLsL::synapse0x24d88e0() {
   return (neuron0x24cd5a0()*-0.00807617);
}

double NNfunction_ss_sLsL::synapse0x24d8920() {
   return (neuron0x24cd8e0()*0.0336169);
}

double NNfunction_ss_sLsL::synapse0x24d8960() {
   return (neuron0x24cdc20()*0.0205469);
}

double NNfunction_ss_sLsL::synapse0x24d89a0() {
   return (neuron0x24cdf60()*0.0220301);
}

double NNfunction_ss_sLsL::synapse0x24d89e0() {
   return (neuron0x24ce2a0()*0.0260234);
}

double NNfunction_ss_sLsL::synapse0x24d8a20() {
   return (neuron0x24ce5e0()*0.00598276);
}

double NNfunction_ss_sLsL::synapse0x24d8a60() {
   return (neuron0x24ce920()*-0.0148907);
}

double NNfunction_ss_sLsL::synapse0x24d8aa0() {
   return (neuron0x24cec60()*-1.86838);
}

double NNfunction_ss_sLsL::synapse0x24d8ae0() {
   return (neuron0x24cefa0()*-0.0332809);
}

double NNfunction_ss_sLsL::synapse0x24d8b20() {
   return (neuron0x24cf2e0()*-0.0226977);
}

double NNfunction_ss_sLsL::synapse0x24d8b60() {
   return (neuron0x24cf620()*-0.0385217);
}

double NNfunction_ss_sLsL::synapse0x24d85f0() {
   return (neuron0x24cf960()*-0.016495);
}

double NNfunction_ss_sLsL::synapse0x24d8630() {
   return (neuron0x24cfec0()*-0.0121863);
}

double NNfunction_ss_sLsL::synapse0x24d8cb0() {
   return (neuron0x24d00e0()*-0.0272189);
}

double NNfunction_ss_sLsL::synapse0x24d8cf0() {
   return (neuron0x24d0420()*0.0076414);
}

double NNfunction_ss_sLsL::synapse0x24d8d30() {
   return (neuron0x24d0760()*0.0235264);
}

double NNfunction_ss_sLsL::synapse0x24d8d70() {
   return (neuron0x24d0aa0()*-0.00247218);
}

double NNfunction_ss_sLsL::synapse0x24d8db0() {
   return (neuron0x24d0de0()*0.00714429);
}

double NNfunction_ss_sLsL::synapse0x24d8df0() {
   return (neuron0x24d1120()*0.0154272);
}

double NNfunction_ss_sLsL::synapse0x24d8fc0() {
   return (neuron0x24cc560()*0.528277);
}

double NNfunction_ss_sLsL::synapse0x24e2050() {
   return (neuron0x24cc8a0()*0.0851057);
}

double NNfunction_ss_sLsL::synapse0x24e2090() {
   return (neuron0x24ccbe0()*0.0873827);
}

double NNfunction_ss_sLsL::synapse0x24e20d0() {
   return (neuron0x24ccf20()*0.0609546);
}

double NNfunction_ss_sLsL::synapse0x24e2110() {
   return (neuron0x24cd260()*0.150796);
}

double NNfunction_ss_sLsL::synapse0x24e2150() {
   return (neuron0x24cd5a0()*-0.432035);
}

double NNfunction_ss_sLsL::synapse0x24e2190() {
   return (neuron0x24cd8e0()*-0.715158);
}

double NNfunction_ss_sLsL::synapse0x24e21d0() {
   return (neuron0x24cdc20()*0.462035);
}

double NNfunction_ss_sLsL::synapse0x24e2210() {
   return (neuron0x24cdf60()*-0.0494548);
}

double NNfunction_ss_sLsL::synapse0x24e2250() {
   return (neuron0x24ce2a0()*-0.301063);
}

double NNfunction_ss_sLsL::synapse0x24e2290() {
   return (neuron0x24ce5e0()*-0.709124);
}

double NNfunction_ss_sLsL::synapse0x24e22d0() {
   return (neuron0x24ce920()*0.238154);
}

double NNfunction_ss_sLsL::synapse0x24e2310() {
   return (neuron0x24cec60()*0.112328);
}

double NNfunction_ss_sLsL::synapse0x24e2350() {
   return (neuron0x24cefa0()*-0.0298683);
}

double NNfunction_ss_sLsL::synapse0x24e2390() {
   return (neuron0x24cf2e0()*-0.67063);
}

double NNfunction_ss_sLsL::synapse0x24e23d0() {
   return (neuron0x24cf620()*-0.0112882);
}

double NNfunction_ss_sLsL::synapse0x24e1ea0() {
   return (neuron0x24cf960()*-0.804746);
}

double NNfunction_ss_sLsL::synapse0x24e1ee0() {
   return (neuron0x24cfec0()*0.317855);
}

double NNfunction_ss_sLsL::synapse0x24e2520() {
   return (neuron0x24d00e0()*0.0625);
}

double NNfunction_ss_sLsL::synapse0x24e2560() {
   return (neuron0x24d0420()*0.222051);
}

double NNfunction_ss_sLsL::synapse0x24e25a0() {
   return (neuron0x24d0760()*-0.31513);
}

double NNfunction_ss_sLsL::synapse0x24e25e0() {
   return (neuron0x24d0aa0()*-0.422814);
}

double NNfunction_ss_sLsL::synapse0x24e2620() {
   return (neuron0x24d0de0()*0.645345);
}

double NNfunction_ss_sLsL::synapse0x24e2660() {
   return (neuron0x24d1120()*-0.286192);
}

double NNfunction_ss_sLsL::synapse0x24e29e0() {
   return (neuron0x24cc560()*0.612429);
}

double NNfunction_ss_sLsL::synapse0x24e2a20() {
   return (neuron0x24cc8a0()*-0.195382);
}

double NNfunction_ss_sLsL::synapse0x24e2a60() {
   return (neuron0x24ccbe0()*0.0223087);
}

double NNfunction_ss_sLsL::synapse0x24e2aa0() {
   return (neuron0x24ccf20()*0.819824);
}

double NNfunction_ss_sLsL::synapse0x24e2ae0() {
   return (neuron0x24cd260()*0.278518);
}

double NNfunction_ss_sLsL::synapse0x24e2b20() {
   return (neuron0x24cd5a0()*-0.102437);
}

double NNfunction_ss_sLsL::synapse0x24e2b60() {
   return (neuron0x24cd8e0()*0.149713);
}

double NNfunction_ss_sLsL::synapse0x24e2ba0() {
   return (neuron0x24cdc20()*0.0225636);
}

double NNfunction_ss_sLsL::synapse0x24e2be0() {
   return (neuron0x24cdf60()*0.447462);
}

double NNfunction_ss_sLsL::synapse0x24e2c20() {
   return (neuron0x24ce2a0()*0.235455);
}

double NNfunction_ss_sLsL::synapse0x24e2c60() {
   return (neuron0x24ce5e0()*-0.0576839);
}

double NNfunction_ss_sLsL::synapse0x24e2ca0() {
   return (neuron0x24ce920()*-0.044683);
}

double NNfunction_ss_sLsL::synapse0x24e2ce0() {
   return (neuron0x24cec60()*-1.26601);
}

double NNfunction_ss_sLsL::synapse0x24e2d20() {
   return (neuron0x24cefa0()*-0.284041);
}

double NNfunction_ss_sLsL::synapse0x24e2d60() {
   return (neuron0x24cf2e0()*-0.589376);
}

double NNfunction_ss_sLsL::synapse0x24e2da0() {
   return (neuron0x24cf620()*0.102801);
}

double NNfunction_ss_sLsL::synapse0x24e2830() {
   return (neuron0x24cf960()*0.096542);
}

double NNfunction_ss_sLsL::synapse0x24e2870() {
   return (neuron0x24cfec0()*0.134903);
}

double NNfunction_ss_sLsL::synapse0x24e2ef0() {
   return (neuron0x24d00e0()*0.239273);
}

double NNfunction_ss_sLsL::synapse0x24e2f30() {
   return (neuron0x24d0420()*0.36573);
}

double NNfunction_ss_sLsL::synapse0x24e2f70() {
   return (neuron0x24d0760()*0.127923);
}

double NNfunction_ss_sLsL::synapse0x24e2fb0() {
   return (neuron0x24d0aa0()*-0.250454);
}

double NNfunction_ss_sLsL::synapse0x24e2ff0() {
   return (neuron0x24d0de0()*0.337346);
}

double NNfunction_ss_sLsL::synapse0x24e3030() {
   return (neuron0x24d1120()*0.198121);
}

double NNfunction_ss_sLsL::synapse0x24e33b0() {
   return (neuron0x24cc560()*-0.0450278);
}

double NNfunction_ss_sLsL::synapse0x24e33f0() {
   return (neuron0x24cc8a0()*-0.240866);
}

double NNfunction_ss_sLsL::synapse0x24e3430() {
   return (neuron0x24ccbe0()*0.0854919);
}

double NNfunction_ss_sLsL::synapse0x24e3470() {
   return (neuron0x24ccf20()*-0.78029);
}

double NNfunction_ss_sLsL::synapse0x24e34b0() {
   return (neuron0x24cd260()*-0.204479);
}

double NNfunction_ss_sLsL::synapse0x24e34f0() {
   return (neuron0x24cd5a0()*-0.103952);
}

double NNfunction_ss_sLsL::synapse0x24e3530() {
   return (neuron0x24cd8e0()*-0.287406);
}

double NNfunction_ss_sLsL::synapse0x24e3570() {
   return (neuron0x24cdc20()*0.0602213);
}

double NNfunction_ss_sLsL::synapse0x24e35b0() {
   return (neuron0x24cdf60()*0.0664723);
}

double NNfunction_ss_sLsL::synapse0x24e35f0() {
   return (neuron0x24ce2a0()*0.145827);
}

double NNfunction_ss_sLsL::synapse0x24e3630() {
   return (neuron0x24ce5e0()*0.124485);
}

double NNfunction_ss_sLsL::synapse0x24e3670() {
   return (neuron0x24ce920()*0.000442219);
}

double NNfunction_ss_sLsL::synapse0x24e36b0() {
   return (neuron0x24cec60()*-0.221185);
}

double NNfunction_ss_sLsL::synapse0x24e36f0() {
   return (neuron0x24cefa0()*-0.176631);
}

double NNfunction_ss_sLsL::synapse0x24e3730() {
   return (neuron0x24cf2e0()*-0.0480929);
}

double NNfunction_ss_sLsL::synapse0x24e3770() {
   return (neuron0x24cf620()*0.168904);
}

double NNfunction_ss_sLsL::synapse0x24e3200() {
   return (neuron0x24cf960()*-0.208074);
}

double NNfunction_ss_sLsL::synapse0x24e3240() {
   return (neuron0x24cfec0()*-0.113201);
}

double NNfunction_ss_sLsL::synapse0x24e38c0() {
   return (neuron0x24d00e0()*-0.0827923);
}

double NNfunction_ss_sLsL::synapse0x24e3900() {
   return (neuron0x24d0420()*0.193562);
}

double NNfunction_ss_sLsL::synapse0x24e3940() {
   return (neuron0x24d0760()*0.0476923);
}

double NNfunction_ss_sLsL::synapse0x24e3980() {
   return (neuron0x24d0aa0()*0.237928);
}

double NNfunction_ss_sLsL::synapse0x24e39c0() {
   return (neuron0x24d0de0()*-0.104179);
}

double NNfunction_ss_sLsL::synapse0x24e3a00() {
   return (neuron0x24d1120()*-0.244034);
}

double NNfunction_ss_sLsL::synapse0x24e3d80() {
   return (neuron0x24cc560()*0.000990018);
}

double NNfunction_ss_sLsL::synapse0x24e3dc0() {
   return (neuron0x24cc8a0()*0.00416697);
}

double NNfunction_ss_sLsL::synapse0x24e3e00() {
   return (neuron0x24ccbe0()*0.000886547);
}

double NNfunction_ss_sLsL::synapse0x24e3e40() {
   return (neuron0x24ccf20()*-4.63227);
}

double NNfunction_ss_sLsL::synapse0x24e3e80() {
   return (neuron0x24cd260()*0.00475299);
}

double NNfunction_ss_sLsL::synapse0x24e3ec0() {
   return (neuron0x24cd5a0()*-0.0172161);
}

double NNfunction_ss_sLsL::synapse0x24e3f00() {
   return (neuron0x24cd8e0()*-0.00339636);
}

double NNfunction_ss_sLsL::synapse0x24e3f40() {
   return (neuron0x24cdc20()*-0.0183488);
}

double NNfunction_ss_sLsL::synapse0x24e3f80() {
   return (neuron0x24cdf60()*0.0185909);
}

double NNfunction_ss_sLsL::synapse0x24e3fc0() {
   return (neuron0x24ce2a0()*-0.0310947);
}

double NNfunction_ss_sLsL::synapse0x24e4000() {
   return (neuron0x24ce5e0()*0.00121028);
}

double NNfunction_ss_sLsL::synapse0x24e4040() {
   return (neuron0x24ce920()*-0.04702);
}

double NNfunction_ss_sLsL::synapse0x24e4080() {
   return (neuron0x24cec60()*0.102083);
}

double NNfunction_ss_sLsL::synapse0x24e40c0() {
   return (neuron0x24cefa0()*0.0252117);
}

double NNfunction_ss_sLsL::synapse0x24e4100() {
   return (neuron0x24cf2e0()*-0.0302421);
}

double NNfunction_ss_sLsL::synapse0x24e4140() {
   return (neuron0x24cf620()*-0.0298401);
}

double NNfunction_ss_sLsL::synapse0x24e3bd0() {
   return (neuron0x24cf960()*0.0423464);
}

double NNfunction_ss_sLsL::synapse0x24e3c10() {
   return (neuron0x24cfec0()*-0.00995474);
}

double NNfunction_ss_sLsL::synapse0x24e4290() {
   return (neuron0x24d00e0()*-0.0550206);
}

double NNfunction_ss_sLsL::synapse0x24e42d0() {
   return (neuron0x24d0420()*-0.0086198);
}

double NNfunction_ss_sLsL::synapse0x24e4310() {
   return (neuron0x24d0760()*0.0133326);
}

double NNfunction_ss_sLsL::synapse0x24e4350() {
   return (neuron0x24d0aa0()*0.0117245);
}

double NNfunction_ss_sLsL::synapse0x24e4390() {
   return (neuron0x24d0de0()*0.0133705);
}

double NNfunction_ss_sLsL::synapse0x24e43d0() {
   return (neuron0x24d1120()*-0.0285686);
}

double NNfunction_ss_sLsL::synapse0x24e4750() {
   return (neuron0x24cc560()*-0.300126);
}

double NNfunction_ss_sLsL::synapse0x24e4790() {
   return (neuron0x24cc8a0()*-0.172602);
}

double NNfunction_ss_sLsL::synapse0x24e47d0() {
   return (neuron0x24ccbe0()*0.0153075);
}

double NNfunction_ss_sLsL::synapse0x24e4810() {
   return (neuron0x24ccf20()*0.123101);
}

double NNfunction_ss_sLsL::synapse0x24e4850() {
   return (neuron0x24cd260()*-0.509883);
}

double NNfunction_ss_sLsL::synapse0x24e4890() {
   return (neuron0x24cd5a0()*-0.169353);
}

double NNfunction_ss_sLsL::synapse0x24e48d0() {
   return (neuron0x24cd8e0()*0.572704);
}

double NNfunction_ss_sLsL::synapse0x24e4910() {
   return (neuron0x24cdc20()*0.558082);
}

double NNfunction_ss_sLsL::synapse0x24e4950() {
   return (neuron0x24cdf60()*-0.188197);
}

double NNfunction_ss_sLsL::synapse0x24e4990() {
   return (neuron0x24ce2a0()*0.07389);
}

double NNfunction_ss_sLsL::synapse0x24e49d0() {
   return (neuron0x24ce5e0()*0.0686762);
}

double NNfunction_ss_sLsL::synapse0x24e4a10() {
   return (neuron0x24ce920()*0.957517);
}

double NNfunction_ss_sLsL::synapse0x24e4a50() {
   return (neuron0x24cec60()*-1.1007);
}

double NNfunction_ss_sLsL::synapse0x24e4a90() {
   return (neuron0x24cefa0()*-0.447672);
}

double NNfunction_ss_sLsL::synapse0x24e4ad0() {
   return (neuron0x24cf2e0()*-0.347221);
}

double NNfunction_ss_sLsL::synapse0x24e4b10() {
   return (neuron0x24cf620()*0.125472);
}

double NNfunction_ss_sLsL::synapse0x24e45a0() {
   return (neuron0x24cf960()*-0.418618);
}

double NNfunction_ss_sLsL::synapse0x24e45e0() {
   return (neuron0x24cfec0()*-0.132815);
}

double NNfunction_ss_sLsL::synapse0x24e4c60() {
   return (neuron0x24d00e0()*-0.0998708);
}

double NNfunction_ss_sLsL::synapse0x24e4ca0() {
   return (neuron0x24d0420()*-0.329847);
}

double NNfunction_ss_sLsL::synapse0x24e4ce0() {
   return (neuron0x24d0760()*0.022718);
}

double NNfunction_ss_sLsL::synapse0x24e4d20() {
   return (neuron0x24d0aa0()*-0.0670024);
}

double NNfunction_ss_sLsL::synapse0x24e4d60() {
   return (neuron0x24d0de0()*-0.14707);
}

double NNfunction_ss_sLsL::synapse0x24e4da0() {
   return (neuron0x24d1120()*0.0918178);
}

double NNfunction_ss_sLsL::synapse0x24e5120() {
   return (neuron0x24cc560()*0.326706);
}

double NNfunction_ss_sLsL::synapse0x24e5160() {
   return (neuron0x24cc8a0()*-0.0916307);
}

double NNfunction_ss_sLsL::synapse0x24e51a0() {
   return (neuron0x24ccbe0()*-0.418382);
}

double NNfunction_ss_sLsL::synapse0x24e51e0() {
   return (neuron0x24ccf20()*-0.16538);
}

double NNfunction_ss_sLsL::synapse0x24e5220() {
   return (neuron0x24cd260()*0.293668);
}

double NNfunction_ss_sLsL::synapse0x24e5260() {
   return (neuron0x24cd5a0()*0.034683);
}

double NNfunction_ss_sLsL::synapse0x24e52a0() {
   return (neuron0x24cd8e0()*-0.372028);
}

double NNfunction_ss_sLsL::synapse0x24e52e0() {
   return (neuron0x24cdc20()*-0.267466);
}

double NNfunction_ss_sLsL::synapse0x24e5320() {
   return (neuron0x24cdf60()*-0.452155);
}

double NNfunction_ss_sLsL::synapse0x24e5360() {
   return (neuron0x24ce2a0()*-0.062198);
}

double NNfunction_ss_sLsL::synapse0x24e53a0() {
   return (neuron0x24ce5e0()*-0.219081);
}

double NNfunction_ss_sLsL::synapse0x24e53e0() {
   return (neuron0x24ce920()*-0.645156);
}

double NNfunction_ss_sLsL::synapse0x24e5420() {
   return (neuron0x24cec60()*-0.783242);
}

double NNfunction_ss_sLsL::synapse0x24e5460() {
   return (neuron0x24cefa0()*-0.110729);
}

double NNfunction_ss_sLsL::synapse0x24e54a0() {
   return (neuron0x24cf2e0()*0.219574);
}

double NNfunction_ss_sLsL::synapse0x24e54e0() {
   return (neuron0x24cf620()*-0.0186454);
}

double NNfunction_ss_sLsL::synapse0x24e4f70() {
   return (neuron0x24cf960()*0.10106);
}

double NNfunction_ss_sLsL::synapse0x24e4fb0() {
   return (neuron0x24cfec0()*0.567292);
}

double NNfunction_ss_sLsL::synapse0x24e5630() {
   return (neuron0x24d00e0()*0.121175);
}

double NNfunction_ss_sLsL::synapse0x24e5670() {
   return (neuron0x24d0420()*-0.269948);
}

double NNfunction_ss_sLsL::synapse0x24e56b0() {
   return (neuron0x24d0760()*0.467018);
}

double NNfunction_ss_sLsL::synapse0x24e56f0() {
   return (neuron0x24d0aa0()*0.382565);
}

double NNfunction_ss_sLsL::synapse0x24e5730() {
   return (neuron0x24d0de0()*0.369955);
}

double NNfunction_ss_sLsL::synapse0x24e5770() {
   return (neuron0x24d1120()*-0.0326344);
}

double NNfunction_ss_sLsL::synapse0x24e5af0() {
   return (neuron0x24cc560()*0.37273);
}

double NNfunction_ss_sLsL::synapse0x24e5b30() {
   return (neuron0x24cc8a0()*0.215207);
}

double NNfunction_ss_sLsL::synapse0x24e5b70() {
   return (neuron0x24ccbe0()*-0.305211);
}

double NNfunction_ss_sLsL::synapse0x24e5bb0() {
   return (neuron0x24ccf20()*-0.325204);
}

double NNfunction_ss_sLsL::synapse0x24e5bf0() {
   return (neuron0x24cd260()*0.648542);
}

double NNfunction_ss_sLsL::synapse0x24e5c30() {
   return (neuron0x24cd5a0()*0.191843);
}

double NNfunction_ss_sLsL::synapse0x24e5c70() {
   return (neuron0x24cd8e0()*-0.141146);
}

double NNfunction_ss_sLsL::synapse0x24e5cb0() {
   return (neuron0x24cdc20()*-0.206355);
}

double NNfunction_ss_sLsL::synapse0x24e5cf0() {
   return (neuron0x24cdf60()*0.257914);
}

double NNfunction_ss_sLsL::synapse0x24e5d30() {
   return (neuron0x24ce2a0()*0.00969415);
}

double NNfunction_ss_sLsL::synapse0x24e5d70() {
   return (neuron0x24ce5e0()*-0.0644691);
}

double NNfunction_ss_sLsL::synapse0x24e5db0() {
   return (neuron0x24ce920()*-0.666228);
}

double NNfunction_ss_sLsL::synapse0x24e5df0() {
   return (neuron0x24cec60()*-1.12419);
}

double NNfunction_ss_sLsL::synapse0x24e5e30() {
   return (neuron0x24cefa0()*0.0472327);
}

double NNfunction_ss_sLsL::synapse0x24e5e70() {
   return (neuron0x24cf2e0()*0.182057);
}

double NNfunction_ss_sLsL::synapse0x24e5eb0() {
   return (neuron0x24cf620()*-0.12939);
}

double NNfunction_ss_sLsL::synapse0x24e5940() {
   return (neuron0x24cf960()*0.0827519);
}

double NNfunction_ss_sLsL::synapse0x24e5980() {
   return (neuron0x24cfec0()*0.495812);
}

double NNfunction_ss_sLsL::synapse0x24e6000() {
   return (neuron0x24d00e0()*-0.324624);
}

double NNfunction_ss_sLsL::synapse0x24e6040() {
   return (neuron0x24d0420()*-0.215091);
}

double NNfunction_ss_sLsL::synapse0x24e6080() {
   return (neuron0x24d0760()*0.190867);
}

double NNfunction_ss_sLsL::synapse0x24e60c0() {
   return (neuron0x24d0aa0()*0.200217);
}

double NNfunction_ss_sLsL::synapse0x24e6100() {
   return (neuron0x24d0de0()*0.163907);
}

double NNfunction_ss_sLsL::synapse0x24e6140() {
   return (neuron0x24d1120()*-0.02265);
}

double NNfunction_ss_sLsL::synapse0x24e64c0() {
   return (neuron0x24cc560()*0.0344325);
}

double NNfunction_ss_sLsL::synapse0x24e6500() {
   return (neuron0x24cc8a0()*-0.0711266);
}

double NNfunction_ss_sLsL::synapse0x24e6540() {
   return (neuron0x24ccbe0()*-0.0474831);
}

double NNfunction_ss_sLsL::synapse0x24e6580() {
   return (neuron0x24ccf20()*0.754754);
}

double NNfunction_ss_sLsL::synapse0x24e65c0() {
   return (neuron0x24cd260()*-0.0732283);
}

double NNfunction_ss_sLsL::synapse0x24e6600() {
   return (neuron0x24cd5a0()*0.0917526);
}

double NNfunction_ss_sLsL::synapse0x24e6640() {
   return (neuron0x24cd8e0()*-0.0262965);
}

double NNfunction_ss_sLsL::synapse0x24e6680() {
   return (neuron0x24cdc20()*-0.108194);
}

double NNfunction_ss_sLsL::synapse0x24e66c0() {
   return (neuron0x24cdf60()*-0.0596173);
}

double NNfunction_ss_sLsL::synapse0x24e6700() {
   return (neuron0x24ce2a0()*-0.227633);
}

double NNfunction_ss_sLsL::synapse0x24e6740() {
   return (neuron0x24ce5e0()*-0.0695124);
}

double NNfunction_ss_sLsL::synapse0x24e6780() {
   return (neuron0x24ce920()*0.118744);
}

double NNfunction_ss_sLsL::synapse0x24e67c0() {
   return (neuron0x24cec60()*0.344761);
}

double NNfunction_ss_sLsL::synapse0x24e6800() {
   return (neuron0x24cefa0()*0.166777);
}

double NNfunction_ss_sLsL::synapse0x24e6840() {
   return (neuron0x24cf2e0()*-0.0398377);
}

double NNfunction_ss_sLsL::synapse0x24e6880() {
   return (neuron0x24cf620()*0.178683);
}

double NNfunction_ss_sLsL::synapse0x24e6310() {
   return (neuron0x24cf960()*0.0511828);
}

double NNfunction_ss_sLsL::synapse0x24e6350() {
   return (neuron0x24cfec0()*-0.0667589);
}

double NNfunction_ss_sLsL::synapse0x24e69d0() {
   return (neuron0x24d00e0()*0.0445115);
}

double NNfunction_ss_sLsL::synapse0x24e6a10() {
   return (neuron0x24d0420()*0.342983);
}

double NNfunction_ss_sLsL::synapse0x24e6a50() {
   return (neuron0x24d0760()*-0.0160615);
}

double NNfunction_ss_sLsL::synapse0x24e6a90() {
   return (neuron0x24d0aa0()*-0.156507);
}

double NNfunction_ss_sLsL::synapse0x24e6ad0() {
   return (neuron0x24d0de0()*-0.0317452);
}

double NNfunction_ss_sLsL::synapse0x24e6b10() {
   return (neuron0x24d1120()*-0.156404);
}

double NNfunction_ss_sLsL::synapse0x24e6e90() {
   return (neuron0x24cc560()*0.144786);
}

double NNfunction_ss_sLsL::synapse0x24db460() {
   return (neuron0x24cc8a0()*0.452332);
}

double NNfunction_ss_sLsL::synapse0x24db4a0() {
   return (neuron0x24ccbe0()*0.225296);
}

double NNfunction_ss_sLsL::synapse0x24db4e0() {
   return (neuron0x24ccf20()*-0.123118);
}

double NNfunction_ss_sLsL::synapse0x24db730() {
   return (neuron0x24cd260()*0.0571588);
}

double NNfunction_ss_sLsL::synapse0x24db770() {
   return (neuron0x24cd5a0()*-0.120917);
}

double NNfunction_ss_sLsL::synapse0x24db7b0() {
   return (neuron0x24cd8e0()*0.46277);
}

double NNfunction_ss_sLsL::synapse0x24dba00() {
   return (neuron0x24cdc20()*-0.00580827);
}

double NNfunction_ss_sLsL::synapse0x24dba40() {
   return (neuron0x24cdf60()*-0.0148957);
}

double NNfunction_ss_sLsL::synapse0x24dbc90() {
   return (neuron0x24ce2a0()*-0.509911);
}

double NNfunction_ss_sLsL::synapse0x24dbcd0() {
   return (neuron0x24ce5e0()*-0.213105);
}

double NNfunction_ss_sLsL::synapse0x24dbd10() {
   return (neuron0x24ce920()*0.362282);
}

double NNfunction_ss_sLsL::synapse0x24dbf60() {
   return (neuron0x24cec60()*0.596598);
}

double NNfunction_ss_sLsL::synapse0x24dbfa0() {
   return (neuron0x24cefa0()*-0.19518);
}

double NNfunction_ss_sLsL::synapse0x24dc1f0() {
   return (neuron0x24cf2e0()*0.953991);
}

double NNfunction_ss_sLsL::synapse0x24dc230() {
   return (neuron0x24cf620()*0.0378693);
}

double NNfunction_ss_sLsL::synapse0x24e6ce0() {
   return (neuron0x24cf960()*0.0388609);
}

double NNfunction_ss_sLsL::synapse0x24e6d20() {
   return (neuron0x24cfec0()*-0.259698);
}

double NNfunction_ss_sLsL::synapse0x24dc380() {
   return (neuron0x24d00e0()*-0.777025);
}

double NNfunction_ss_sLsL::synapse0x24dc890() {
   return (neuron0x24d0420()*-0.134939);
}

double NNfunction_ss_sLsL::synapse0x24dc8d0() {
   return (neuron0x24d0760()*0.0841355);
}

double NNfunction_ss_sLsL::synapse0x24dc910() {
   return (neuron0x24d0aa0()*-0.471627);
}

double NNfunction_ss_sLsL::synapse0x24dcb60() {
   return (neuron0x24d0de0()*-0.183679);
}

double NNfunction_ss_sLsL::synapse0x24dcba0() {
   return (neuron0x24d1120()*0.0305304);
}

double NNfunction_ss_sLsL::synapse0x24dc450() {
   return (neuron0x24cc560()*-0.202587);
}

double NNfunction_ss_sLsL::synapse0x24dc490() {
   return (neuron0x24cc8a0()*0.118234);
}

double NNfunction_ss_sLsL::synapse0x24dc4d0() {
   return (neuron0x24ccbe0()*0.193582);
}

double NNfunction_ss_sLsL::synapse0x24dc510() {
   return (neuron0x24ccf20()*0.296854);
}

double NNfunction_ss_sLsL::synapse0x24dce90() {
   return (neuron0x24cd260()*-0.00133134);
}

double NNfunction_ss_sLsL::synapse0x24e91e0() {
   return (neuron0x24cd5a0()*-0.425662);
}

double NNfunction_ss_sLsL::synapse0x24e9220() {
   return (neuron0x24cd8e0()*0.0632512);
}

double NNfunction_ss_sLsL::synapse0x24e9260() {
   return (neuron0x24cdc20()*0.443623);
}

double NNfunction_ss_sLsL::synapse0x24e92a0() {
   return (neuron0x24cdf60()*0.144193);
}

double NNfunction_ss_sLsL::synapse0x24e92e0() {
   return (neuron0x24ce2a0()*-0.204706);
}

double NNfunction_ss_sLsL::synapse0x24e9320() {
   return (neuron0x24ce5e0()*-0.445684);
}

double NNfunction_ss_sLsL::synapse0x24e9360() {
   return (neuron0x24ce920()*0.000968607);
}

double NNfunction_ss_sLsL::synapse0x24e93a0() {
   return (neuron0x24cec60()*0.218133);
}

double NNfunction_ss_sLsL::synapse0x24e93e0() {
   return (neuron0x24cefa0()*0.055504);
}

double NNfunction_ss_sLsL::synapse0x24e9420() {
   return (neuron0x24cf2e0()*-0.384647);
}

double NNfunction_ss_sLsL::synapse0x24e9460() {
   return (neuron0x24cf620()*-0.0869888);
}

double NNfunction_ss_sLsL::synapse0x24dcd70() {
   return (neuron0x24cf960()*-0.377525);
}

double NNfunction_ss_sLsL::synapse0x24dcdb0() {
   return (neuron0x24cfec0()*0.379488);
}

double NNfunction_ss_sLsL::synapse0x24e95b0() {
   return (neuron0x24d00e0()*0.238084);
}

double NNfunction_ss_sLsL::synapse0x24e95f0() {
   return (neuron0x24d0420()*0.295313);
}

double NNfunction_ss_sLsL::synapse0x24e9630() {
   return (neuron0x24d0760()*-0.573456);
}

double NNfunction_ss_sLsL::synapse0x24e9670() {
   return (neuron0x24d0aa0()*0.272473);
}

double NNfunction_ss_sLsL::synapse0x24e96b0() {
   return (neuron0x24d0de0()*0.395784);
}

double NNfunction_ss_sLsL::synapse0x24e96f0() {
   return (neuron0x24d1120()*-0.189);
}

double NNfunction_ss_sLsL::synapse0x24e9a70() {
   return (neuron0x24cc560()*-0.327472);
}

double NNfunction_ss_sLsL::synapse0x24e9ab0() {
   return (neuron0x24cc8a0()*0.288091);
}

double NNfunction_ss_sLsL::synapse0x24e9af0() {
   return (neuron0x24ccbe0()*-0.00568815);
}

double NNfunction_ss_sLsL::synapse0x24e9b30() {
   return (neuron0x24ccf20()*-0.29304);
}

double NNfunction_ss_sLsL::synapse0x24e9b70() {
   return (neuron0x24cd260()*-0.028037);
}

double NNfunction_ss_sLsL::synapse0x24e9bb0() {
   return (neuron0x24cd5a0()*-0.0385977);
}

double NNfunction_ss_sLsL::synapse0x24e9bf0() {
   return (neuron0x24cd8e0()*0.693092);
}

double NNfunction_ss_sLsL::synapse0x24e9c30() {
   return (neuron0x24cdc20()*-0.14203);
}

double NNfunction_ss_sLsL::synapse0x24e9c70() {
   return (neuron0x24cdf60()*0.0333812);
}

double NNfunction_ss_sLsL::synapse0x24e9cb0() {
   return (neuron0x24ce2a0()*0.340205);
}

double NNfunction_ss_sLsL::synapse0x24e9cf0() {
   return (neuron0x24ce5e0()*0.389786);
}

double NNfunction_ss_sLsL::synapse0x24e9d30() {
   return (neuron0x24ce920()*0.15897);
}

double NNfunction_ss_sLsL::synapse0x24e9d70() {
   return (neuron0x24cec60()*0.944111);
}

double NNfunction_ss_sLsL::synapse0x24e9db0() {
   return (neuron0x24cefa0()*0.149551);
}

double NNfunction_ss_sLsL::synapse0x24e9df0() {
   return (neuron0x24cf2e0()*0.257558);
}

double NNfunction_ss_sLsL::synapse0x24e9e30() {
   return (neuron0x24cf620()*-0.390589);
}

double NNfunction_ss_sLsL::synapse0x24e98c0() {
   return (neuron0x24cf960()*0.194226);
}

double NNfunction_ss_sLsL::synapse0x24e9900() {
   return (neuron0x24cfec0()*0.274965);
}

double NNfunction_ss_sLsL::synapse0x24e9f80() {
   return (neuron0x24d00e0()*0.0278145);
}

double NNfunction_ss_sLsL::synapse0x24e9fc0() {
   return (neuron0x24d0420()*-0.141308);
}

double NNfunction_ss_sLsL::synapse0x24ea000() {
   return (neuron0x24d0760()*-0.61219);
}

double NNfunction_ss_sLsL::synapse0x24ea040() {
   return (neuron0x24d0aa0()*0.151751);
}

double NNfunction_ss_sLsL::synapse0x24ea080() {
   return (neuron0x24d0de0()*-0.650909);
}

double NNfunction_ss_sLsL::synapse0x24ea0c0() {
   return (neuron0x24d1120()*0.26271);
}

double NNfunction_ss_sLsL::synapse0x24ea440() {
   return (neuron0x24cc560()*-0.0273832);
}

double NNfunction_ss_sLsL::synapse0x24ea480() {
   return (neuron0x24cc8a0()*0.418343);
}

double NNfunction_ss_sLsL::synapse0x24ea4c0() {
   return (neuron0x24ccbe0()*-0.0911856);
}

double NNfunction_ss_sLsL::synapse0x24ea500() {
   return (neuron0x24ccf20()*0.327344);
}

double NNfunction_ss_sLsL::synapse0x24ea540() {
   return (neuron0x24cd260()*0.257911);
}

double NNfunction_ss_sLsL::synapse0x24ea580() {
   return (neuron0x24cd5a0()*0.139526);
}

double NNfunction_ss_sLsL::synapse0x24ea5c0() {
   return (neuron0x24cd8e0()*-0.433863);
}

double NNfunction_ss_sLsL::synapse0x24ea600() {
   return (neuron0x24cdc20()*0.28304);
}

double NNfunction_ss_sLsL::synapse0x24ea640() {
   return (neuron0x24cdf60()*0.199218);
}

double NNfunction_ss_sLsL::synapse0x24ea680() {
   return (neuron0x24ce2a0()*0.032682);
}

double NNfunction_ss_sLsL::synapse0x24ea6c0() {
   return (neuron0x24ce5e0()*-0.215049);
}

double NNfunction_ss_sLsL::synapse0x24ea700() {
   return (neuron0x24ce920()*-0.0368078);
}

double NNfunction_ss_sLsL::synapse0x24ea740() {
   return (neuron0x24cec60()*0.566134);
}

double NNfunction_ss_sLsL::synapse0x24ea780() {
   return (neuron0x24cefa0()*-0.147765);
}

double NNfunction_ss_sLsL::synapse0x24ea7c0() {
   return (neuron0x24cf2e0()*0.258442);
}

double NNfunction_ss_sLsL::synapse0x24ea800() {
   return (neuron0x24cf620()*-1.17741);
}

double NNfunction_ss_sLsL::synapse0x24ea290() {
   return (neuron0x24cf960()*-0.353602);
}

double NNfunction_ss_sLsL::synapse0x24ea2d0() {
   return (neuron0x24cfec0()*0.366586);
}

double NNfunction_ss_sLsL::synapse0x24ea950() {
   return (neuron0x24d00e0()*0.154341);
}

double NNfunction_ss_sLsL::synapse0x24ea990() {
   return (neuron0x24d0420()*-0.185762);
}

double NNfunction_ss_sLsL::synapse0x24ea9d0() {
   return (neuron0x24d0760()*-0.147581);
}

double NNfunction_ss_sLsL::synapse0x24eaa10() {
   return (neuron0x24d0aa0()*-0.425348);
}

double NNfunction_ss_sLsL::synapse0x24eaa50() {
   return (neuron0x24d0de0()*0.0349771);
}

double NNfunction_ss_sLsL::synapse0x24eaa90() {
   return (neuron0x24d1120()*0.067058);
}

double NNfunction_ss_sLsL::synapse0x24eae10() {
   return (neuron0x24cc560()*0.361388);
}

double NNfunction_ss_sLsL::synapse0x24eae50() {
   return (neuron0x24cc8a0()*0.368516);
}

double NNfunction_ss_sLsL::synapse0x24eae90() {
   return (neuron0x24ccbe0()*-0.25459);
}

double NNfunction_ss_sLsL::synapse0x24eaed0() {
   return (neuron0x24ccf20()*0.480288);
}

double NNfunction_ss_sLsL::synapse0x24eaf10() {
   return (neuron0x24cd260()*0.243206);
}

double NNfunction_ss_sLsL::synapse0x24eaf50() {
   return (neuron0x24cd5a0()*0.436041);
}

double NNfunction_ss_sLsL::synapse0x24eaf90() {
   return (neuron0x24cd8e0()*0.250124);
}

double NNfunction_ss_sLsL::synapse0x24eafd0() {
   return (neuron0x24cdc20()*0.213233);
}

double NNfunction_ss_sLsL::synapse0x24eb010() {
   return (neuron0x24cdf60()*0.589958);
}

double NNfunction_ss_sLsL::synapse0x24eb050() {
   return (neuron0x24ce2a0()*0.488127);
}

double NNfunction_ss_sLsL::synapse0x24eb090() {
   return (neuron0x24ce5e0()*0.51615);
}

double NNfunction_ss_sLsL::synapse0x24eb0d0() {
   return (neuron0x24ce920()*-0.0932391);
}

double NNfunction_ss_sLsL::synapse0x24eb110() {
   return (neuron0x24cec60()*-1.12622);
}

double NNfunction_ss_sLsL::synapse0x24eb150() {
   return (neuron0x24cefa0()*0.0913754);
}

double NNfunction_ss_sLsL::synapse0x24eb190() {
   return (neuron0x24cf2e0()*0.0628596);
}

double NNfunction_ss_sLsL::synapse0x24eb1d0() {
   return (neuron0x24cf620()*-0.407773);
}

double NNfunction_ss_sLsL::synapse0x24eac60() {
   return (neuron0x24cf960()*-0.258958);
}

double NNfunction_ss_sLsL::synapse0x24eaca0() {
   return (neuron0x24cfec0()*0.0841207);
}

double NNfunction_ss_sLsL::synapse0x24eb320() {
   return (neuron0x24d00e0()*0.198026);
}

double NNfunction_ss_sLsL::synapse0x24eb360() {
   return (neuron0x24d0420()*-0.0634153);
}

double NNfunction_ss_sLsL::synapse0x24eb3a0() {
   return (neuron0x24d0760()*0.190372);
}

double NNfunction_ss_sLsL::synapse0x24eb3e0() {
   return (neuron0x24d0aa0()*-0.288424);
}

double NNfunction_ss_sLsL::synapse0x24eb420() {
   return (neuron0x24d0de0()*-0.39539);
}

double NNfunction_ss_sLsL::synapse0x24eb460() {
   return (neuron0x24d1120()*-0.053512);
}

double NNfunction_ss_sLsL::synapse0x24eb7e0() {
   return (neuron0x24cc560()*0.0378302);
}

double NNfunction_ss_sLsL::synapse0x24eb820() {
   return (neuron0x24cc8a0()*0.0146942);
}

double NNfunction_ss_sLsL::synapse0x24eb860() {
   return (neuron0x24ccbe0()*0.416891);
}

double NNfunction_ss_sLsL::synapse0x24eb8a0() {
   return (neuron0x24ccf20()*-1.59992);
}

double NNfunction_ss_sLsL::synapse0x24eb8e0() {
   return (neuron0x24cd260()*-0.00669996);
}

double NNfunction_ss_sLsL::synapse0x24eb920() {
   return (neuron0x24cd5a0()*0.0385962);
}

double NNfunction_ss_sLsL::synapse0x24eb960() {
   return (neuron0x24cd8e0()*-0.0243841);
}

double NNfunction_ss_sLsL::synapse0x24eb9a0() {
   return (neuron0x24cdc20()*0.0609355);
}

double NNfunction_ss_sLsL::synapse0x24eb9e0() {
   return (neuron0x24cdf60()*-0.00791692);
}

double NNfunction_ss_sLsL::synapse0x24eba20() {
   return (neuron0x24ce2a0()*0.010064);
}

double NNfunction_ss_sLsL::synapse0x24eba60() {
   return (neuron0x24ce5e0()*-0.0134557);
}

double NNfunction_ss_sLsL::synapse0x24ebaa0() {
   return (neuron0x24ce920()*0.156978);
}

double NNfunction_ss_sLsL::synapse0x24ebae0() {
   return (neuron0x24cec60()*0.105211);
}

double NNfunction_ss_sLsL::synapse0x24ebb20() {
   return (neuron0x24cefa0()*0.019208);
}

double NNfunction_ss_sLsL::synapse0x24ebb60() {
   return (neuron0x24cf2e0()*0.109555);
}

double NNfunction_ss_sLsL::synapse0x24ebba0() {
   return (neuron0x24cf620()*0.137647);
}

double NNfunction_ss_sLsL::synapse0x24eb630() {
   return (neuron0x24cf960()*-0.066577);
}

double NNfunction_ss_sLsL::synapse0x24eb670() {
   return (neuron0x24cfec0()*0.0890363);
}

double NNfunction_ss_sLsL::synapse0x24ebcf0() {
   return (neuron0x24d00e0()*0.109846);
}

double NNfunction_ss_sLsL::synapse0x24ebd30() {
   return (neuron0x24d0420()*0.00991218);
}

double NNfunction_ss_sLsL::synapse0x24ebd70() {
   return (neuron0x24d0760()*-0.0591544);
}

double NNfunction_ss_sLsL::synapse0x24ebdb0() {
   return (neuron0x24d0aa0()*-0.000802473);
}

double NNfunction_ss_sLsL::synapse0x24ebdf0() {
   return (neuron0x24d0de0()*0.0283978);
}

double NNfunction_ss_sLsL::synapse0x24ebe30() {
   return (neuron0x24d1120()*0.0352114);
}

double NNfunction_ss_sLsL::synapse0x24ec1b0() {
   return (neuron0x24cc560()*0.174856);
}

double NNfunction_ss_sLsL::synapse0x24ec1f0() {
   return (neuron0x24cc8a0()*-0.244343);
}

double NNfunction_ss_sLsL::synapse0x24ec230() {
   return (neuron0x24ccbe0()*0.2533);
}

double NNfunction_ss_sLsL::synapse0x24ec270() {
   return (neuron0x24ccf20()*-0.298146);
}

double NNfunction_ss_sLsL::synapse0x24ec2b0() {
   return (neuron0x24cd260()*0.0161576);
}

double NNfunction_ss_sLsL::synapse0x24ec2f0() {
   return (neuron0x24cd5a0()*-0.0235054);
}

double NNfunction_ss_sLsL::synapse0x24ec330() {
   return (neuron0x24cd8e0()*0.568529);
}

double NNfunction_ss_sLsL::synapse0x24ec370() {
   return (neuron0x24cdc20()*0.159966);
}

double NNfunction_ss_sLsL::synapse0x24ec3b0() {
   return (neuron0x24cdf60()*-0.0739199);
}

double NNfunction_ss_sLsL::synapse0x24ec3f0() {
   return (neuron0x24ce2a0()*-0.0185921);
}

double NNfunction_ss_sLsL::synapse0x24ec430() {
   return (neuron0x24ce5e0()*0.105271);
}

double NNfunction_ss_sLsL::synapse0x24ec470() {
   return (neuron0x24ce920()*0.105814);
}

double NNfunction_ss_sLsL::synapse0x24ec4b0() {
   return (neuron0x24cec60()*-0.0487639);
}

double NNfunction_ss_sLsL::synapse0x24ec4f0() {
   return (neuron0x24cefa0()*-0.274098);
}

double NNfunction_ss_sLsL::synapse0x24ec530() {
   return (neuron0x24cf2e0()*0.413824);
}

double NNfunction_ss_sLsL::synapse0x24ec570() {
   return (neuron0x24cf620()*-0.512773);
}

double NNfunction_ss_sLsL::synapse0x24ec000() {
   return (neuron0x24cf960()*0.310243);
}

double NNfunction_ss_sLsL::synapse0x24ec040() {
   return (neuron0x24cfec0()*-0.34981);
}

double NNfunction_ss_sLsL::synapse0x24ec6c0() {
   return (neuron0x24d00e0()*-0.255051);
}

double NNfunction_ss_sLsL::synapse0x24ec700() {
   return (neuron0x24d0420()*0.135404);
}

double NNfunction_ss_sLsL::synapse0x24ec740() {
   return (neuron0x24d0760()*0.16785);
}

double NNfunction_ss_sLsL::synapse0x24ec780() {
   return (neuron0x24d0aa0()*0.058944);
}

double NNfunction_ss_sLsL::synapse0x24ec7c0() {
   return (neuron0x24d0de0()*0.0102669);
}

double NNfunction_ss_sLsL::synapse0x24ec800() {
   return (neuron0x24d1120()*0.110803);
}

double NNfunction_ss_sLsL::synapse0x24ecb80() {
   return (neuron0x24cc560()*-0.0264531);
}

double NNfunction_ss_sLsL::synapse0x24ecbc0() {
   return (neuron0x24cc8a0()*0.08947);
}

double NNfunction_ss_sLsL::synapse0x24ecc00() {
   return (neuron0x24ccbe0()*-0.542049);
}

double NNfunction_ss_sLsL::synapse0x24ecc40() {
   return (neuron0x24ccf20()*1.33696);
}

double NNfunction_ss_sLsL::synapse0x24ecc80() {
   return (neuron0x24cd260()*-0.0686704);
}

double NNfunction_ss_sLsL::synapse0x24eccc0() {
   return (neuron0x24cd5a0()*-0.0619677);
}

double NNfunction_ss_sLsL::synapse0x24ecd00() {
   return (neuron0x24cd8e0()*-0.00876685);
}

double NNfunction_ss_sLsL::synapse0x24ecd40() {
   return (neuron0x24cdc20()*-0.0872337);
}

double NNfunction_ss_sLsL::synapse0x24ecd80() {
   return (neuron0x24cdf60()*-0.0384586);
}

double NNfunction_ss_sLsL::synapse0x24ecdc0() {
   return (neuron0x24ce2a0()*-0.0159712);
}

double NNfunction_ss_sLsL::synapse0x24ece00() {
   return (neuron0x24ce5e0()*-0.0727932);
}

double NNfunction_ss_sLsL::synapse0x24ece40() {
   return (neuron0x24ce920()*-0.189613);
}

double NNfunction_ss_sLsL::synapse0x24ece80() {
   return (neuron0x24cec60()*0.314733);
}

double NNfunction_ss_sLsL::synapse0x24ecec0() {
   return (neuron0x24cefa0()*0.0672867);
}

double NNfunction_ss_sLsL::synapse0x24ecf00() {
   return (neuron0x24cf2e0()*-0.0472376);
}

double NNfunction_ss_sLsL::synapse0x24ecf40() {
   return (neuron0x24cf620()*-0.13175);
}

double NNfunction_ss_sLsL::synapse0x24ec9d0() {
   return (neuron0x24cf960()*0.201191);
}

double NNfunction_ss_sLsL::synapse0x24eca10() {
   return (neuron0x24cfec0()*-0.0350764);
}

double NNfunction_ss_sLsL::synapse0x24ed090() {
   return (neuron0x24d00e0()*-0.17984);
}

double NNfunction_ss_sLsL::synapse0x24ed0d0() {
   return (neuron0x24d0420()*0.0304202);
}

double NNfunction_ss_sLsL::synapse0x24ed110() {
   return (neuron0x24d0760()*0.00802659);
}

double NNfunction_ss_sLsL::synapse0x24ed150() {
   return (neuron0x24d0aa0()*0.00869532);
}

double NNfunction_ss_sLsL::synapse0x24ed190() {
   return (neuron0x24d0de0()*0.00805958);
}

double NNfunction_ss_sLsL::synapse0x24ed1d0() {
   return (neuron0x24d1120()*0.00173138);
}

double NNfunction_ss_sLsL::synapse0x24ed550() {
   return (neuron0x24cc560()*0.0817245);
}

double NNfunction_ss_sLsL::synapse0x24ed590() {
   return (neuron0x24cc8a0()*-0.330567);
}

double NNfunction_ss_sLsL::synapse0x24ed5d0() {
   return (neuron0x24ccbe0()*-0.539648);
}

double NNfunction_ss_sLsL::synapse0x24ed610() {
   return (neuron0x24ccf20()*0.101386);
}

double NNfunction_ss_sLsL::synapse0x24ed650() {
   return (neuron0x24cd260()*-0.263005);
}

double NNfunction_ss_sLsL::synapse0x24ed690() {
   return (neuron0x24cd5a0()*0.110057);
}

double NNfunction_ss_sLsL::synapse0x24ed6d0() {
   return (neuron0x24cd8e0()*0.149422);
}

double NNfunction_ss_sLsL::synapse0x24ed710() {
   return (neuron0x24cdc20()*-0.265933);
}

double NNfunction_ss_sLsL::synapse0x24ed750() {
   return (neuron0x24cdf60()*0.377489);
}

double NNfunction_ss_sLsL::synapse0x24ed790() {
   return (neuron0x24ce2a0()*-0.198323);
}

double NNfunction_ss_sLsL::synapse0x24ed7d0() {
   return (neuron0x24ce5e0()*-0.0870628);
}

double NNfunction_ss_sLsL::synapse0x24ed810() {
   return (neuron0x24ce920()*0.0180302);
}

double NNfunction_ss_sLsL::synapse0x24ed850() {
   return (neuron0x24cec60()*0.0805448);
}

double NNfunction_ss_sLsL::synapse0x24ed890() {
   return (neuron0x24cefa0()*-0.171785);
}

double NNfunction_ss_sLsL::synapse0x24ed8d0() {
   return (neuron0x24cf2e0()*-0.917519);
}

double NNfunction_ss_sLsL::synapse0x24ed910() {
   return (neuron0x24cf620()*-0.122807);
}

double NNfunction_ss_sLsL::synapse0x24ed3a0() {
   return (neuron0x24cf960()*-0.475403);
}

double NNfunction_ss_sLsL::synapse0x24ed3e0() {
   return (neuron0x24cfec0()*-0.0917166);
}

double NNfunction_ss_sLsL::synapse0x24eda60() {
   return (neuron0x24d00e0()*-0.198484);
}

double NNfunction_ss_sLsL::synapse0x24edaa0() {
   return (neuron0x24d0420()*0.055545);
}

double NNfunction_ss_sLsL::synapse0x24edae0() {
   return (neuron0x24d0760()*0.0839953);
}

double NNfunction_ss_sLsL::synapse0x24edb20() {
   return (neuron0x24d0aa0()*0.271955);
}

double NNfunction_ss_sLsL::synapse0x24edb60() {
   return (neuron0x24d0de0()*0.0287307);
}

double NNfunction_ss_sLsL::synapse0x24edba0() {
   return (neuron0x24d1120()*0.0861876);
}

double NNfunction_ss_sLsL::synapse0x24d6650() {
   return (neuron0x24cc560()*0.0304815);
}

double NNfunction_ss_sLsL::synapse0x24d6690() {
   return (neuron0x24cc8a0()*0.0339065);
}

double NNfunction_ss_sLsL::synapse0x24d66d0() {
   return (neuron0x24ccbe0()*-0.209026);
}

double NNfunction_ss_sLsL::synapse0x24d6710() {
   return (neuron0x24ccf20()*0.96641);
}

double NNfunction_ss_sLsL::synapse0x24d6750() {
   return (neuron0x24cd260()*-0.0472668);
}

double NNfunction_ss_sLsL::synapse0x24d6790() {
   return (neuron0x24cd5a0()*-0.0731725);
}

double NNfunction_ss_sLsL::synapse0x24d67d0() {
   return (neuron0x24cd8e0()*-0.00242815);
}

double NNfunction_ss_sLsL::synapse0x24d6810() {
   return (neuron0x24cdc20()*-0.0470046);
}

double NNfunction_ss_sLsL::synapse0x24ee330() {
   return (neuron0x24cdf60()*0.0525995);
}

double NNfunction_ss_sLsL::synapse0x24ee370() {
   return (neuron0x24ce2a0()*0.0526182);
}

double NNfunction_ss_sLsL::synapse0x24ee3b0() {
   return (neuron0x24ce5e0()*-0.0455692);
}

double NNfunction_ss_sLsL::synapse0x24ee3f0() {
   return (neuron0x24ce920()*0.19499);
}

double NNfunction_ss_sLsL::synapse0x24ee430() {
   return (neuron0x24cec60()*0.130478);
}

double NNfunction_ss_sLsL::synapse0x24ee470() {
   return (neuron0x24cefa0()*-0.00694558);
}

double NNfunction_ss_sLsL::synapse0x24ee4b0() {
   return (neuron0x24cf2e0()*0.0758394);
}

double NNfunction_ss_sLsL::synapse0x24ee4f0() {
   return (neuron0x24cf620()*0.2201);
}

double NNfunction_ss_sLsL::synapse0x24edd70() {
   return (neuron0x24cf960()*0.00294744);
}

double NNfunction_ss_sLsL::synapse0x24eddb0() {
   return (neuron0x24cfec0()*0.0734352);
}

double NNfunction_ss_sLsL::synapse0x24ee640() {
   return (neuron0x24d00e0()*0.00413778);
}

double NNfunction_ss_sLsL::synapse0x24ee680() {
   return (neuron0x24d0420()*0.0589504);
}

double NNfunction_ss_sLsL::synapse0x24ee6c0() {
   return (neuron0x24d0760()*-0.0774178);
}

double NNfunction_ss_sLsL::synapse0x24ee700() {
   return (neuron0x24d0aa0()*-0.00288472);
}

double NNfunction_ss_sLsL::synapse0x24ee740() {
   return (neuron0x24d0de0()*0.0418962);
}

double NNfunction_ss_sLsL::synapse0x24ee780() {
   return (neuron0x24d1120()*-0.0128568);
}

double NNfunction_ss_sLsL::synapse0x24eeb00() {
   return (neuron0x24cc560()*-0.0383645);
}

double NNfunction_ss_sLsL::synapse0x24eeb40() {
   return (neuron0x24cc8a0()*0.151748);
}

double NNfunction_ss_sLsL::synapse0x24eeb80() {
   return (neuron0x24ccbe0()*-0.226061);
}

double NNfunction_ss_sLsL::synapse0x24eebc0() {
   return (neuron0x24ccf20()*0.487352);
}

double NNfunction_ss_sLsL::synapse0x24eec00() {
   return (neuron0x24cd260()*-0.257869);
}

double NNfunction_ss_sLsL::synapse0x24eec40() {
   return (neuron0x24cd5a0()*-0.461168);
}

double NNfunction_ss_sLsL::synapse0x24eec80() {
   return (neuron0x24cd8e0()*-0.411535);
}

double NNfunction_ss_sLsL::synapse0x24eecc0() {
   return (neuron0x24cdc20()*0.432552);
}

double NNfunction_ss_sLsL::synapse0x24eed00() {
   return (neuron0x24cdf60()*0.273509);
}

double NNfunction_ss_sLsL::synapse0x24eed40() {
   return (neuron0x24ce2a0()*0.359852);
}

double NNfunction_ss_sLsL::synapse0x24eed80() {
   return (neuron0x24ce5e0()*-0.0884019);
}

double NNfunction_ss_sLsL::synapse0x24eedc0() {
   return (neuron0x24ce920()*-0.128563);
}

double NNfunction_ss_sLsL::synapse0x24eee00() {
   return (neuron0x24cec60()*-0.364868);
}

double NNfunction_ss_sLsL::synapse0x24eee40() {
   return (neuron0x24cefa0()*0.0347445);
}

double NNfunction_ss_sLsL::synapse0x24eee80() {
   return (neuron0x24cf2e0()*0.0360488);
}

double NNfunction_ss_sLsL::synapse0x24eeec0() {
   return (neuron0x24cf620()*-0.404928);
}

double NNfunction_ss_sLsL::synapse0x24ee950() {
   return (neuron0x24cf960()*-0.0568293);
}

double NNfunction_ss_sLsL::synapse0x24ee990() {
   return (neuron0x24cfec0()*0.140417);
}

double NNfunction_ss_sLsL::synapse0x24ef010() {
   return (neuron0x24d00e0()*0.248005);
}

double NNfunction_ss_sLsL::synapse0x24ef050() {
   return (neuron0x24d0420()*-0.140767);
}

double NNfunction_ss_sLsL::synapse0x24ef090() {
   return (neuron0x24d0760()*0.202918);
}

double NNfunction_ss_sLsL::synapse0x24ef0d0() {
   return (neuron0x24d0aa0()*0.284611);
}

double NNfunction_ss_sLsL::synapse0x24ef110() {
   return (neuron0x24d0de0()*0.0397346);
}

double NNfunction_ss_sLsL::synapse0x24ef150() {
   return (neuron0x24d1120()*-0.145822);
}

double NNfunction_ss_sLsL::synapse0x24ef4d0() {
   return (neuron0x24cc560()*-0.341551);
}

double NNfunction_ss_sLsL::synapse0x24ef510() {
   return (neuron0x24cc8a0()*-0.116138);
}

double NNfunction_ss_sLsL::synapse0x24ef550() {
   return (neuron0x24ccbe0()*0.794254);
}

double NNfunction_ss_sLsL::synapse0x24ef590() {
   return (neuron0x24ccf20()*0.376157);
}

double NNfunction_ss_sLsL::synapse0x24ef5d0() {
   return (neuron0x24cd260()*0.0609734);
}

double NNfunction_ss_sLsL::synapse0x24ef610() {
   return (neuron0x24cd5a0()*0.146377);
}

double NNfunction_ss_sLsL::synapse0x24ef650() {
   return (neuron0x24cd8e0()*-0.163972);
}

double NNfunction_ss_sLsL::synapse0x24ef690() {
   return (neuron0x24cdc20()*-0.238092);
}

double NNfunction_ss_sLsL::synapse0x24ef6d0() {
   return (neuron0x24cdf60()*0.212819);
}

double NNfunction_ss_sLsL::synapse0x24ef710() {
   return (neuron0x24ce2a0()*-0.0659014);
}

double NNfunction_ss_sLsL::synapse0x24ef750() {
   return (neuron0x24ce5e0()*0.280171);
}

double NNfunction_ss_sLsL::synapse0x24ef790() {
   return (neuron0x24ce920()*-0.265261);
}

double NNfunction_ss_sLsL::synapse0x24ef7d0() {
   return (neuron0x24cec60()*0.194833);
}

double NNfunction_ss_sLsL::synapse0x24ef810() {
   return (neuron0x24cefa0()*0.35362);
}

double NNfunction_ss_sLsL::synapse0x24ef850() {
   return (neuron0x24cf2e0()*0.142066);
}

double NNfunction_ss_sLsL::synapse0x24ef890() {
   return (neuron0x24cf620()*-0.35571);
}

double NNfunction_ss_sLsL::synapse0x24ef320() {
   return (neuron0x24cf960()*-0.336239);
}

double NNfunction_ss_sLsL::synapse0x24ef360() {
   return (neuron0x24cfec0()*0.00476785);
}

double NNfunction_ss_sLsL::synapse0x24dfe90() {
   return (neuron0x24d00e0()*0.211411);
}

double NNfunction_ss_sLsL::synapse0x24dfed0() {
   return (neuron0x24d0420()*-0.0259925);
}

double NNfunction_ss_sLsL::synapse0x24dff10() {
   return (neuron0x24d0760()*0.355913);
}

double NNfunction_ss_sLsL::synapse0x24dff50() {
   return (neuron0x24d0aa0()*0.427239);
}

double NNfunction_ss_sLsL::synapse0x24dff90() {
   return (neuron0x24d0de0()*0.0233617);
}

double NNfunction_ss_sLsL::synapse0x24dffd0() {
   return (neuron0x24d1120()*-0.100773);
}

double NNfunction_ss_sLsL::synapse0x24e0350() {
   return (neuron0x24cc560()*0.0158179);
}

double NNfunction_ss_sLsL::synapse0x24e0390() {
   return (neuron0x24cc8a0()*0.00183544);
}

double NNfunction_ss_sLsL::synapse0x24e03d0() {
   return (neuron0x24ccbe0()*0.874843);
}

double NNfunction_ss_sLsL::synapse0x24e0410() {
   return (neuron0x24ccf20()*0.19208);
}

double NNfunction_ss_sLsL::synapse0x24e0450() {
   return (neuron0x24cd260()*-0.0105209);
}

double NNfunction_ss_sLsL::synapse0x24e0490() {
   return (neuron0x24cd5a0()*0.0254173);
}

double NNfunction_ss_sLsL::synapse0x24e04d0() {
   return (neuron0x24cd8e0()*0.0532651);
}

double NNfunction_ss_sLsL::synapse0x24e0510() {
   return (neuron0x24cdc20()*0.0271234);
}

double NNfunction_ss_sLsL::synapse0x24e0550() {
   return (neuron0x24cdf60()*-0.0261947);
}

double NNfunction_ss_sLsL::synapse0x24e0590() {
   return (neuron0x24ce2a0()*0.010318);
}

double NNfunction_ss_sLsL::synapse0x24e05d0() {
   return (neuron0x24ce5e0()*0.0162154);
}

double NNfunction_ss_sLsL::synapse0x24e0610() {
   return (neuron0x24ce920()*0.0251812);
}

double NNfunction_ss_sLsL::synapse0x24e0650() {
   return (neuron0x24cec60()*-0.729845);
}

double NNfunction_ss_sLsL::synapse0x24e0690() {
   return (neuron0x24cefa0()*0.0284888);
}

double NNfunction_ss_sLsL::synapse0x24e06d0() {
   return (neuron0x24cf2e0()*0.00706653);
}

double NNfunction_ss_sLsL::synapse0x24e0710() {
   return (neuron0x24cf620()*0.019807);
}

double NNfunction_ss_sLsL::synapse0x24e01a0() {
   return (neuron0x24cf960()*-0.0114513);
}

double NNfunction_ss_sLsL::synapse0x24e01e0() {
   return (neuron0x24cfec0()*-0.00252967);
}

double NNfunction_ss_sLsL::synapse0x24e0860() {
   return (neuron0x24d00e0()*-0.00906138);
}

double NNfunction_ss_sLsL::synapse0x24e08a0() {
   return (neuron0x24d0420()*0.0180258);
}

double NNfunction_ss_sLsL::synapse0x24e08e0() {
   return (neuron0x24d0760()*0.00702046);
}

double NNfunction_ss_sLsL::synapse0x24e0920() {
   return (neuron0x24d0aa0()*0.0245386);
}

double NNfunction_ss_sLsL::synapse0x24e0960() {
   return (neuron0x24d0de0()*-0.0374756);
}

double NNfunction_ss_sLsL::synapse0x24e09a0() {
   return (neuron0x24d1120()*0.00813821);
}

double NNfunction_ss_sLsL::synapse0x24e0d20() {
   return (neuron0x24cc560()*0.402996);
}

double NNfunction_ss_sLsL::synapse0x24e0d60() {
   return (neuron0x24cc8a0()*-0.245679);
}

double NNfunction_ss_sLsL::synapse0x24e0da0() {
   return (neuron0x24ccbe0()*-0.203303);
}

double NNfunction_ss_sLsL::synapse0x24e0de0() {
   return (neuron0x24ccf20()*0.275722);
}

double NNfunction_ss_sLsL::synapse0x24e0e20() {
   return (neuron0x24cd260()*0.23776);
}

double NNfunction_ss_sLsL::synapse0x24e0e60() {
   return (neuron0x24cd5a0()*-0.00670382);
}

double NNfunction_ss_sLsL::synapse0x24e0ea0() {
   return (neuron0x24cd8e0()*-0.11675);
}

double NNfunction_ss_sLsL::synapse0x24e0ee0() {
   return (neuron0x24cdc20()*0.176277);
}

double NNfunction_ss_sLsL::synapse0x24e0f20() {
   return (neuron0x24cdf60()*0.426481);
}

double NNfunction_ss_sLsL::synapse0x24e0f60() {
   return (neuron0x24ce2a0()*-0.372926);
}

double NNfunction_ss_sLsL::synapse0x24e0fa0() {
   return (neuron0x24ce5e0()*0.237656);
}

double NNfunction_ss_sLsL::synapse0x24e0fe0() {
   return (neuron0x24ce920()*-0.595947);
}

double NNfunction_ss_sLsL::synapse0x24e1020() {
   return (neuron0x24cec60()*-0.782268);
}

double NNfunction_ss_sLsL::synapse0x24e1060() {
   return (neuron0x24cefa0()*0.541041);
}

double NNfunction_ss_sLsL::synapse0x24e10a0() {
   return (neuron0x24cf2e0()*-0.446644);
}

double NNfunction_ss_sLsL::synapse0x24e10e0() {
   return (neuron0x24cf620()*-0.213042);
}

double NNfunction_ss_sLsL::synapse0x24e0b70() {
   return (neuron0x24cf960()*0.609622);
}

double NNfunction_ss_sLsL::synapse0x24e0bb0() {
   return (neuron0x24cfec0()*-0.388353);
}

double NNfunction_ss_sLsL::synapse0x24e1230() {
   return (neuron0x24d00e0()*-0.415103);
}

double NNfunction_ss_sLsL::synapse0x24e1270() {
   return (neuron0x24d0420()*-0.773661);
}

double NNfunction_ss_sLsL::synapse0x24e12b0() {
   return (neuron0x24d0760()*-0.0342726);
}

double NNfunction_ss_sLsL::synapse0x24e12f0() {
   return (neuron0x24d0aa0()*0.411081);
}

double NNfunction_ss_sLsL::synapse0x24e1330() {
   return (neuron0x24d0de0()*-0.0362151);
}

double NNfunction_ss_sLsL::synapse0x24e1370() {
   return (neuron0x24d1120()*-0.209519);
}

double NNfunction_ss_sLsL::synapse0x24e16f0() {
   return (neuron0x24cc560()*0.00282551);
}

double NNfunction_ss_sLsL::synapse0x24e1730() {
   return (neuron0x24cc8a0()*0.0711006);
}

double NNfunction_ss_sLsL::synapse0x24e1770() {
   return (neuron0x24ccbe0()*0.0477296);
}

double NNfunction_ss_sLsL::synapse0x24e17b0() {
   return (neuron0x24ccf20()*0.0760718);
}

double NNfunction_ss_sLsL::synapse0x24e17f0() {
   return (neuron0x24cd260()*0.117132);
}

double NNfunction_ss_sLsL::synapse0x24e1830() {
   return (neuron0x24cd5a0()*0.100738);
}

double NNfunction_ss_sLsL::synapse0x24e1870() {
   return (neuron0x24cd8e0()*0.0469396);
}

double NNfunction_ss_sLsL::synapse0x24e18b0() {
   return (neuron0x24cdc20()*-0.00406934);
}

double NNfunction_ss_sLsL::synapse0x24e18f0() {
   return (neuron0x24cdf60()*-0.300669);
}

double NNfunction_ss_sLsL::synapse0x24e1930() {
   return (neuron0x24ce2a0()*-0.201368);
}

double NNfunction_ss_sLsL::synapse0x24e1970() {
   return (neuron0x24ce5e0()*0.0516175);
}

double NNfunction_ss_sLsL::synapse0x24e19b0() {
   return (neuron0x24ce920()*-0.050291);
}

double NNfunction_ss_sLsL::synapse0x24e19f0() {
   return (neuron0x24cec60()*-0.46031);
}

double NNfunction_ss_sLsL::synapse0x24e1a30() {
   return (neuron0x24cefa0()*-0.154387);
}

double NNfunction_ss_sLsL::synapse0x24e1a70() {
   return (neuron0x24cf2e0()*0.0813351);
}

double NNfunction_ss_sLsL::synapse0x24e1ab0() {
   return (neuron0x24cf620()*-0.144412);
}

double NNfunction_ss_sLsL::synapse0x24e1540() {
   return (neuron0x24cf960()*-0.113562);
}

double NNfunction_ss_sLsL::synapse0x24e1580() {
   return (neuron0x24cfec0()*-0.140963);
}

double NNfunction_ss_sLsL::synapse0x24e1c00() {
   return (neuron0x24d00e0()*-0.030859);
}

double NNfunction_ss_sLsL::synapse0x24e1c40() {
   return (neuron0x24d0420()*-0.227232);
}

double NNfunction_ss_sLsL::synapse0x24e1c80() {
   return (neuron0x24d0760()*0.0298304);
}

double NNfunction_ss_sLsL::synapse0x24e1cc0() {
   return (neuron0x24d0aa0()*0.0763447);
}

double NNfunction_ss_sLsL::synapse0x24e1d00() {
   return (neuron0x24d0de0()*-0.107978);
}

double NNfunction_ss_sLsL::synapse0x24e1d40() {
   return (neuron0x24d1120()*0.00782047);
}

double NNfunction_ss_sLsL::synapse0x24f3c10() {
   return (neuron0x24cc560()*-0.00342496);
}

double NNfunction_ss_sLsL::synapse0x24f3c50() {
   return (neuron0x24cc8a0()*-0.00513512);
}

double NNfunction_ss_sLsL::synapse0x24f3c90() {
   return (neuron0x24ccbe0()*-0.00855165);
}

double NNfunction_ss_sLsL::synapse0x24f3cd0() {
   return (neuron0x24ccf20()*11.9536);
}

double NNfunction_ss_sLsL::synapse0x24f3d10() {
   return (neuron0x24cd260()*-0.0211033);
}

double NNfunction_ss_sLsL::synapse0x24f3d50() {
   return (neuron0x24cd5a0()*0.0227762);
}

double NNfunction_ss_sLsL::synapse0x24f3d90() {
   return (neuron0x24cd8e0()*0.0022924);
}

double NNfunction_ss_sLsL::synapse0x24f3dd0() {
   return (neuron0x24cdc20()*0.0133586);
}

double NNfunction_ss_sLsL::synapse0x24f3e10() {
   return (neuron0x24cdf60()*-0.0145169);
}

double NNfunction_ss_sLsL::synapse0x24f3e50() {
   return (neuron0x24ce2a0()*0.000247379);
}

double NNfunction_ss_sLsL::synapse0x24f3e90() {
   return (neuron0x24ce5e0()*-0.00995237);
}

double NNfunction_ss_sLsL::synapse0x24f3ed0() {
   return (neuron0x24ce920()*-0.0127088);
}

double NNfunction_ss_sLsL::synapse0x24f3f10() {
   return (neuron0x24cec60()*-0.0418184);
}

double NNfunction_ss_sLsL::synapse0x24f3f50() {
   return (neuron0x24cefa0()*0.00321546);
}

double NNfunction_ss_sLsL::synapse0x24f3f90() {
   return (neuron0x24cf2e0()*0.0219864);
}

double NNfunction_ss_sLsL::synapse0x24f3fd0() {
   return (neuron0x24cf620()*0.00773875);
}

double NNfunction_ss_sLsL::synapse0x24e1d80() {
   return (neuron0x24cf960()*0.011852);
}

double NNfunction_ss_sLsL::synapse0x24e1dc0() {
   return (neuron0x24cfec0()*0.0129142);
}

double NNfunction_ss_sLsL::synapse0x24f4120() {
   return (neuron0x24d00e0()*0.00960236);
}

double NNfunction_ss_sLsL::synapse0x24f4160() {
   return (neuron0x24d0420()*-0.0152534);
}

double NNfunction_ss_sLsL::synapse0x24f41a0() {
   return (neuron0x24d0760()*0.00426968);
}

double NNfunction_ss_sLsL::synapse0x24f41e0() {
   return (neuron0x24d0aa0()*0.0231593);
}

double NNfunction_ss_sLsL::synapse0x24f4220() {
   return (neuron0x24d0de0()*0.00364716);
}

double NNfunction_ss_sLsL::synapse0x24f4260() {
   return (neuron0x24d1120()*0.0213982);
}

double NNfunction_ss_sLsL::synapse0x24f45e0() {
   return (neuron0x24cc560()*-0.482986);
}

double NNfunction_ss_sLsL::synapse0x24f4620() {
   return (neuron0x24cc8a0()*-0.141864);
}

double NNfunction_ss_sLsL::synapse0x24f4660() {
   return (neuron0x24ccbe0()*0.342151);
}

double NNfunction_ss_sLsL::synapse0x24f46a0() {
   return (neuron0x24ccf20()*0.290389);
}

double NNfunction_ss_sLsL::synapse0x24f46e0() {
   return (neuron0x24cd260()*0.413895);
}

double NNfunction_ss_sLsL::synapse0x24f4720() {
   return (neuron0x24cd5a0()*-0.0525641);
}

double NNfunction_ss_sLsL::synapse0x24f4760() {
   return (neuron0x24cd8e0()*-0.165468);
}

double NNfunction_ss_sLsL::synapse0x24f47a0() {
   return (neuron0x24cdc20()*0.45169);
}

double NNfunction_ss_sLsL::synapse0x24f47e0() {
   return (neuron0x24cdf60()*-0.323128);
}

double NNfunction_ss_sLsL::synapse0x24f4820() {
   return (neuron0x24ce2a0()*-0.382945);
}

double NNfunction_ss_sLsL::synapse0x24f4860() {
   return (neuron0x24ce5e0()*-0.405462);
}

double NNfunction_ss_sLsL::synapse0x24f48a0() {
   return (neuron0x24ce920()*0.0723515);
}

double NNfunction_ss_sLsL::synapse0x24f48e0() {
   return (neuron0x24cec60()*1.30754);
}

double NNfunction_ss_sLsL::synapse0x24f4920() {
   return (neuron0x24cefa0()*-0.224891);
}

double NNfunction_ss_sLsL::synapse0x24f4960() {
   return (neuron0x24cf2e0()*0.14776);
}

double NNfunction_ss_sLsL::synapse0x24f49a0() {
   return (neuron0x24cf620()*0.740085);
}

double NNfunction_ss_sLsL::synapse0x24f4430() {
   return (neuron0x24cf960()*0.190177);
}

double NNfunction_ss_sLsL::synapse0x24f4470() {
   return (neuron0x24cfec0()*-0.215282);
}

double NNfunction_ss_sLsL::synapse0x24f4af0() {
   return (neuron0x24d00e0()*-0.240258);
}

double NNfunction_ss_sLsL::synapse0x24f4b30() {
   return (neuron0x24d0420()*0.0452863);
}

double NNfunction_ss_sLsL::synapse0x24f4b70() {
   return (neuron0x24d0760()*0.0151472);
}

double NNfunction_ss_sLsL::synapse0x24f4bb0() {
   return (neuron0x24d0aa0()*0.0932555);
}

double NNfunction_ss_sLsL::synapse0x24f4bf0() {
   return (neuron0x24d0de0()*0.257162);
}

double NNfunction_ss_sLsL::synapse0x24f4c30() {
   return (neuron0x24d1120()*0.270666);
}

double NNfunction_ss_sLsL::synapse0x24f4fb0() {
   return (neuron0x24cc560()*0.0900853);
}

double NNfunction_ss_sLsL::synapse0x24f4ff0() {
   return (neuron0x24cc8a0()*0.0514147);
}

double NNfunction_ss_sLsL::synapse0x24f5030() {
   return (neuron0x24ccbe0()*-0.221791);
}

double NNfunction_ss_sLsL::synapse0x24f5070() {
   return (neuron0x24ccf20()*-0.482594);
}

double NNfunction_ss_sLsL::synapse0x24f50b0() {
   return (neuron0x24cd260()*-0.0248788);
}

double NNfunction_ss_sLsL::synapse0x24f50f0() {
   return (neuron0x24cd5a0()*-0.000111544);
}

double NNfunction_ss_sLsL::synapse0x24f5130() {
   return (neuron0x24cd8e0()*0.35037);
}

double NNfunction_ss_sLsL::synapse0x24f5170() {
   return (neuron0x24cdc20()*-0.0409036);
}

double NNfunction_ss_sLsL::synapse0x24f51b0() {
   return (neuron0x24cdf60()*0.0115619);
}

double NNfunction_ss_sLsL::synapse0x24f51f0() {
   return (neuron0x24ce2a0()*-0.0479052);
}

double NNfunction_ss_sLsL::synapse0x24f5230() {
   return (neuron0x24ce5e0()*-0.148524);
}

double NNfunction_ss_sLsL::synapse0x24f5270() {
   return (neuron0x24ce920()*0.0119608);
}

double NNfunction_ss_sLsL::synapse0x24f52b0() {
   return (neuron0x24cec60()*0.0508718);
}

double NNfunction_ss_sLsL::synapse0x24f52f0() {
   return (neuron0x24cefa0()*0.386168);
}

double NNfunction_ss_sLsL::synapse0x24f5330() {
   return (neuron0x24cf2e0()*-0.169291);
}

double NNfunction_ss_sLsL::synapse0x24f5370() {
   return (neuron0x24cf620()*0.0291933);
}

double NNfunction_ss_sLsL::synapse0x24f4e00() {
   return (neuron0x24cf960()*0.146767);
}

double NNfunction_ss_sLsL::synapse0x24f4e40() {
   return (neuron0x24cfec0()*-0.168583);
}

double NNfunction_ss_sLsL::synapse0x24f54c0() {
   return (neuron0x24d00e0()*-0.0515438);
}

double NNfunction_ss_sLsL::synapse0x24f5500() {
   return (neuron0x24d0420()*-0.0798832);
}

double NNfunction_ss_sLsL::synapse0x24f5540() {
   return (neuron0x24d0760()*0.00388244);
}

double NNfunction_ss_sLsL::synapse0x24f5580() {
   return (neuron0x24d0aa0()*-0.0638261);
}

double NNfunction_ss_sLsL::synapse0x24f55c0() {
   return (neuron0x24d0de0()*0.0399167);
}

double NNfunction_ss_sLsL::synapse0x24f5600() {
   return (neuron0x24d1120()*-0.163186);
}

double NNfunction_ss_sLsL::synapse0x24f5980() {
   return (neuron0x24cc560()*-0.129742);
}

double NNfunction_ss_sLsL::synapse0x24f59c0() {
   return (neuron0x24cc8a0()*0.320493);
}

double NNfunction_ss_sLsL::synapse0x24f5a00() {
   return (neuron0x24ccbe0()*-0.0290149);
}

double NNfunction_ss_sLsL::synapse0x24f5a40() {
   return (neuron0x24ccf20()*0.362943);
}

double NNfunction_ss_sLsL::synapse0x24f5a80() {
   return (neuron0x24cd260()*0.143744);
}

double NNfunction_ss_sLsL::synapse0x24f5ac0() {
   return (neuron0x24cd5a0()*0.0507494);
}

double NNfunction_ss_sLsL::synapse0x24f5b00() {
   return (neuron0x24cd8e0()*0.0776642);
}

double NNfunction_ss_sLsL::synapse0x24f5b40() {
   return (neuron0x24cdc20()*-0.104421);
}

double NNfunction_ss_sLsL::synapse0x24f5b80() {
   return (neuron0x24cdf60()*-0.349806);
}

double NNfunction_ss_sLsL::synapse0x24f5bc0() {
   return (neuron0x24ce2a0()*0.396197);
}

double NNfunction_ss_sLsL::synapse0x24f5c00() {
   return (neuron0x24ce5e0()*-0.351504);
}

double NNfunction_ss_sLsL::synapse0x24f5c40() {
   return (neuron0x24ce920()*0.0481446);
}

double NNfunction_ss_sLsL::synapse0x24f5c80() {
   return (neuron0x24cec60()*0.523544);
}

double NNfunction_ss_sLsL::synapse0x24f5cc0() {
   return (neuron0x24cefa0()*-0.250567);
}

double NNfunction_ss_sLsL::synapse0x24f5d00() {
   return (neuron0x24cf2e0()*0.541879);
}

double NNfunction_ss_sLsL::synapse0x24f5d40() {
   return (neuron0x24cf620()*-0.0245353);
}

double NNfunction_ss_sLsL::synapse0x24f57d0() {
   return (neuron0x24cf960()*-0.264401);
}

double NNfunction_ss_sLsL::synapse0x24f5810() {
   return (neuron0x24cfec0()*0.397612);
}

double NNfunction_ss_sLsL::synapse0x24f5e90() {
   return (neuron0x24d00e0()*-0.0573062);
}

double NNfunction_ss_sLsL::synapse0x24f5ed0() {
   return (neuron0x24d0420()*0.533606);
}

double NNfunction_ss_sLsL::synapse0x24f5f10() {
   return (neuron0x24d0760()*-0.022223);
}

double NNfunction_ss_sLsL::synapse0x24f5f50() {
   return (neuron0x24d0aa0()*-0.265481);
}

double NNfunction_ss_sLsL::synapse0x24f5f90() {
   return (neuron0x24d0de0()*-0.0230727);
}

double NNfunction_ss_sLsL::synapse0x24f5fd0() {
   return (neuron0x24d1120()*0.164027);
}

double NNfunction_ss_sLsL::synapse0x24d2570() {
   return (neuron0x24d15c0()*0.207706);
}

double NNfunction_ss_sLsL::synapse0x24d25b0() {
   return (neuron0x24d1ed0()*0.13004);
}

double NNfunction_ss_sLsL::synapse0x24d3a80() {
   return (neuron0x24d29b0()*0.108481);
}

double NNfunction_ss_sLsL::synapse0x24d3ac0() {
   return (neuron0x228c240()*0.27606);
}

double NNfunction_ss_sLsL::synapse0x24d4450() {
   return (neuron0x24d37d0()*0.122599);
}

double NNfunction_ss_sLsL::synapse0x24d4490() {
   return (neuron0x24d41a0()*0.901618);
}

double NNfunction_ss_sLsL::synapse0x24d5220() {
   return (neuron0x24d4f70()*0.113092);
}

double NNfunction_ss_sLsL::synapse0x24d5260() {
   return (neuron0x24d5940()*0.1865);
}

double NNfunction_ss_sLsL::synapse0x24d5bf0() {
   return (neuron0x24d6310()*0.311062);
}

double NNfunction_ss_sLsL::synapse0x24d5c30() {
   return (neuron0x24d6df0()*-0.310964);
}

double NNfunction_ss_sLsL::synapse0x24d65c0() {
   return (neuron0x24d77c0()*-0.516165);
}

double NNfunction_ss_sLsL::synapse0x24d6600() {
   return (neuron0x24d48a0()*-0.666032);
}

double NNfunction_ss_sLsL::synapse0x24d70a0() {
   return (neuron0x24d9370()*1.09693);
}

double NNfunction_ss_sLsL::synapse0x24d70e0() {
   return (neuron0x24d9d40()*0.99637);
}

double NNfunction_ss_sLsL::synapse0x24d7a70() {
   return (neuron0x24da710()*0.316026);
}

double NNfunction_ss_sLsL::synapse0x24d7ab0() {
   return (neuron0x24db0e0()*-0.193754);
}

double NNfunction_ss_sLsL::synapse0x24d4b50() {
   return (neuron0x24dcef0()*-0.0904516);
}

double NNfunction_ss_sLsL::synapse0x24d4b90() {
   return (neuron0x24dd1d0()*-0.0164592);
}

double NNfunction_ss_sLsL::synapse0x24d9620() {
   return (neuron0x24ddba0()*-0.170399);
}

double NNfunction_ss_sLsL::synapse0x24d9660() {
   return (neuron0x24de570()*0.952924);
}

double NNfunction_ss_sLsL::synapse0x24d9ff0() {
   return (neuron0x24def40()*-0.00387088);
}

double NNfunction_ss_sLsL::synapse0x24da030() {
   return (neuron0x24df910()*-0.321236);
}

double NNfunction_ss_sLsL::synapse0x24da9c0() {
   return (neuron0x24d8460()*0.233321);
}

double NNfunction_ss_sLsL::synapse0x24daa00() {
   return (neuron0x24d8e30()*0.0253935);
}

double NNfunction_ss_sLsL::synapse0x24db390() {
   return (neuron0x24e26a0()*0.187444);
}

double NNfunction_ss_sLsL::synapse0x24db3d0() {
   return (neuron0x24e3070()*0.325914);
}

double NNfunction_ss_sLsL::synapse0x24cf500() {
   return (neuron0x24e3a40()*1.25835);
}

double NNfunction_ss_sLsL::synapse0x24cf540() {
   return (neuron0x24e4410()*0.0572077);
}

double NNfunction_ss_sLsL::synapse0x24dd480() {
   return (neuron0x24e4de0()*0.190994);
}

double NNfunction_ss_sLsL::synapse0x24dd4c0() {
   return (neuron0x24e57b0()*-0.327636);
}

double NNfunction_ss_sLsL::synapse0x24dde50() {
   return (neuron0x24e6180()*-0.744713);
}

double NNfunction_ss_sLsL::synapse0x24dde90() {
   return (neuron0x24e6b50()*0.0457086);
}

double NNfunction_ss_sLsL::synapse0x24de820() {
   return (neuron0x24dcbe0()*-0.0695981);
}

double NNfunction_ss_sLsL::synapse0x24de860() {
   return (neuron0x24e9730()*0.210497);
}

double NNfunction_ss_sLsL::synapse0x24df1f0() {
   return (neuron0x24ea100()*-0.111025);
}

double NNfunction_ss_sLsL::synapse0x24df230() {
   return (neuron0x24eaad0()*-0.0465478);
}

double NNfunction_ss_sLsL::synapse0x24dfbc0() {
   return (neuron0x24eb4a0()*0.822793);
}

double NNfunction_ss_sLsL::synapse0x24dfc00() {
   return (neuron0x24ebe70()*-0.00827099);
}

double NNfunction_ss_sLsL::synapse0x24d8710() {
   return (neuron0x24ec840()*-1.13285);
}

double NNfunction_ss_sLsL::synapse0x24d8750() {
   return (neuron0x24ed210()*-0.3549);
}

double NNfunction_ss_sLsL::synapse0x24e1fc0() {
   return (neuron0x24edbe0()*-0.564224);
}

double NNfunction_ss_sLsL::synapse0x24e2000() {
   return (neuron0x24ee7c0()*-0.196012);
}

double NNfunction_ss_sLsL::synapse0x24e2950() {
   return (neuron0x24ef190()*-0.077744);
}

double NNfunction_ss_sLsL::synapse0x24e2990() {
   return (neuron0x24e0010()*0.147182);
}

double NNfunction_ss_sLsL::synapse0x24e3320() {
   return (neuron0x24e09e0()*0.153675);
}

double NNfunction_ss_sLsL::synapse0x24e3360() {
   return (neuron0x24e13b0()*-0.126216);
}

double NNfunction_ss_sLsL::synapse0x24e3cf0() {
   return (neuron0x24f39f0()*0.244468);
}

double NNfunction_ss_sLsL::synapse0x24e3d30() {
   return (neuron0x24f42a0()*-0.155493);
}

double NNfunction_ss_sLsL::synapse0x24e46c0() {
   return (neuron0x24f4c70()*0.2814);
}

double NNfunction_ss_sLsL::synapse0x24e4700() {
   return (neuron0x24f5640()*0.164373);
}

double NNfunction_ss_sLsL::synapse0x24e6e00() {
   return (neuron0x24d15c0()*-0.275174);
}

double NNfunction_ss_sLsL::synapse0x24e6e40() {
   return (neuron0x24d1ed0()*-0.61658);
}

double NNfunction_ss_sLsL::synapse0x24dc3c0() {
   return (neuron0x24d29b0()*-0.198252);
}

double NNfunction_ss_sLsL::synapse0x24dc400() {
   return (neuron0x228c240()*0.243497);
}

double NNfunction_ss_sLsL::synapse0x24e99e0() {
   return (neuron0x24d37d0()*-0.0821416);
}

double NNfunction_ss_sLsL::synapse0x24e9a20() {
   return (neuron0x24d41a0()*0.189561);
}

double NNfunction_ss_sLsL::synapse0x24ea3b0() {
   return (neuron0x24d4f70()*0.27882);
}

double NNfunction_ss_sLsL::synapse0x24ea3f0() {
   return (neuron0x24d5940()*-0.476901);
}

double NNfunction_ss_sLsL::synapse0x24ead80() {
   return (neuron0x24d6310()*-0.216965);
}

double NNfunction_ss_sLsL::synapse0x24eadc0() {
   return (neuron0x24d6df0()*0.108246);
}

double NNfunction_ss_sLsL::synapse0x24eb750() {
   return (neuron0x24d77c0()*-0.271316);
}

double NNfunction_ss_sLsL::synapse0x24eb790() {
   return (neuron0x24d48a0()*0.24689);
}

double NNfunction_ss_sLsL::synapse0x24ec120() {
   return (neuron0x24d9370()*-0.0353238);
}

double NNfunction_ss_sLsL::synapse0x24ec160() {
   return (neuron0x24d9d40()*0.0555303);
}

double NNfunction_ss_sLsL::synapse0x24ecaf0() {
   return (neuron0x24da710()*0.364648);
}

double NNfunction_ss_sLsL::synapse0x24ecb30() {
   return (neuron0x24db0e0()*0.452853);
}

double NNfunction_ss_sLsL::synapse0x24ed4c0() {
   return (neuron0x24dcef0()*0.191113);
}

double NNfunction_ss_sLsL::synapse0x24ed500() {
   return (neuron0x24dd1d0()*-0.338935);
}

double NNfunction_ss_sLsL::synapse0x24ede90() {
   return (neuron0x24ddba0()*0.588396);
}

double NNfunction_ss_sLsL::synapse0x24eded0() {
   return (neuron0x24de570()*-0.65139);
}

double NNfunction_ss_sLsL::synapse0x24eea70() {
   return (neuron0x24def40()*-0.377784);
}

double NNfunction_ss_sLsL::synapse0x24eeab0() {
   return (neuron0x24df910()*-0.742908);
}

double NNfunction_ss_sLsL::synapse0x24ef440() {
   return (neuron0x24d8460()*-0.377708);
}

double NNfunction_ss_sLsL::synapse0x24ef480() {
   return (neuron0x24d8e30()*-0.15816);
}

double NNfunction_ss_sLsL::synapse0x24e02c0() {
   return (neuron0x24e26a0()*-0.626524);
}

double NNfunction_ss_sLsL::synapse0x24e0300() {
   return (neuron0x24e3070()*0.127711);
}

double NNfunction_ss_sLsL::synapse0x24e0c90() {
   return (neuron0x24e3a40()*0.133107);
}

double NNfunction_ss_sLsL::synapse0x24e0cd0() {
   return (neuron0x24e4410()*-0.345602);
}

double NNfunction_ss_sLsL::synapse0x24e1660() {
   return (neuron0x24e4de0()*-0.367731);
}

double NNfunction_ss_sLsL::synapse0x24e16a0() {
   return (neuron0x24e57b0()*-0.679201);
}

double NNfunction_ss_sLsL::synapse0x24f3b80() {
   return (neuron0x24e6180()*0.441562);
}

double NNfunction_ss_sLsL::synapse0x24f3bc0() {
   return (neuron0x24e6b50()*0.115776);
}

double NNfunction_ss_sLsL::synapse0x24f4550() {
   return (neuron0x24dcbe0()*-0.329156);
}

double NNfunction_ss_sLsL::synapse0x24f4590() {
   return (neuron0x24e9730()*0.285633);
}

double NNfunction_ss_sLsL::synapse0x24f4f20() {
   return (neuron0x24ea100()*0.122471);
}

double NNfunction_ss_sLsL::synapse0x24f4f60() {
   return (neuron0x24eaad0()*-0.225356);
}

double NNfunction_ss_sLsL::synapse0x24f58f0() {
   return (neuron0x24eb4a0()*-0.607279);
}

double NNfunction_ss_sLsL::synapse0x24f5930() {
   return (neuron0x24ebe70()*-0.186732);
}

double NNfunction_ss_sLsL::synapse0x24d17e0() {
   return (neuron0x24ec840()*-0.112861);
}

double NNfunction_ss_sLsL::synapse0x24d1820() {
   return (neuron0x24ed210()*-0.260075);
}

double NNfunction_ss_sLsL::synapse0x24e5090() {
   return (neuron0x24edbe0()*-0.237821);
}

double NNfunction_ss_sLsL::synapse0x24e50d0() {
   return (neuron0x24ee7c0()*-0.178127);
}

double NNfunction_ss_sLsL::synapse0x24f6010() {
   return (neuron0x24ef190()*0.277773);
}

double NNfunction_ss_sLsL::synapse0x24f6050() {
   return (neuron0x24e0010()*-0.328599);
}

double NNfunction_ss_sLsL::synapse0x24f6090() {
   return (neuron0x24e09e0()*0.186527);
}

double NNfunction_ss_sLsL::synapse0x24f60d0() {
   return (neuron0x24e13b0()*-0.73085);
}

double NNfunction_ss_sLsL::synapse0x24fcf80() {
   return (neuron0x24f39f0()*0.152759);
}

double NNfunction_ss_sLsL::synapse0x24fcfc0() {
   return (neuron0x24f42a0()*0.167192);
}

double NNfunction_ss_sLsL::synapse0x24fd000() {
   return (neuron0x24f4c70()*-0.607342);
}

double NNfunction_ss_sLsL::synapse0x24fd040() {
   return (neuron0x24f5640()*-0.0297649);
}

double NNfunction_ss_sLsL::synapse0x24fd3c0() {
   return (neuron0x24d15c0()*1.54129);
}

double NNfunction_ss_sLsL::synapse0x24fd400() {
   return (neuron0x24d1ed0()*0.681263);
}

double NNfunction_ss_sLsL::synapse0x24fd440() {
   return (neuron0x24d29b0()*0.736903);
}

double NNfunction_ss_sLsL::synapse0x24fd480() {
   return (neuron0x228c240()*-0.0398332);
}

double NNfunction_ss_sLsL::synapse0x24fd4c0() {
   return (neuron0x24d37d0()*0.430336);
}

double NNfunction_ss_sLsL::synapse0x24fd500() {
   return (neuron0x24d41a0()*0.301352);
}

double NNfunction_ss_sLsL::synapse0x24fd540() {
   return (neuron0x24d4f70()*0.989575);
}

double NNfunction_ss_sLsL::synapse0x24fd580() {
   return (neuron0x24d5940()*0.567781);
}

double NNfunction_ss_sLsL::synapse0x24fd5c0() {
   return (neuron0x24d6310()*-0.0738014);
}

double NNfunction_ss_sLsL::synapse0x24fd600() {
   return (neuron0x24d6df0()*2.09375);
}

double NNfunction_ss_sLsL::synapse0x24fd640() {
   return (neuron0x24d77c0()*1.28005);
}

double NNfunction_ss_sLsL::synapse0x24fd680() {
   return (neuron0x24d48a0()*2.54598);
}

double NNfunction_ss_sLsL::synapse0x24fd6c0() {
   return (neuron0x24d9370()*0.283121);
}

double NNfunction_ss_sLsL::synapse0x24fd700() {
   return (neuron0x24d9d40()*-11.3911);
}

double NNfunction_ss_sLsL::synapse0x24fd740() {
   return (neuron0x24da710()*2.31976);
}

double NNfunction_ss_sLsL::synapse0x24fd780() {
   return (neuron0x24db0e0()*-2.68381);
}

double NNfunction_ss_sLsL::synapse0x24fd210() {
   return (neuron0x24dcef0()*1.12471);
}

double NNfunction_ss_sLsL::synapse0x24fd250() {
   return (neuron0x24dd1d0()*0.499431);
}

double NNfunction_ss_sLsL::synapse0x24fd8d0() {
   return (neuron0x24ddba0()*-0.463739);
}

double NNfunction_ss_sLsL::synapse0x24fd910() {
   return (neuron0x24de570()*0.487112);
}

double NNfunction_ss_sLsL::synapse0x24fd950() {
   return (neuron0x24def40()*0.706762);
}

double NNfunction_ss_sLsL::synapse0x24fd990() {
   return (neuron0x24df910()*-1.63641);
}

double NNfunction_ss_sLsL::synapse0x24fd9d0() {
   return (neuron0x24d8460()*-1.80662);
}

double NNfunction_ss_sLsL::synapse0x24fda10() {
   return (neuron0x24d8e30()*0.682645);
}

double NNfunction_ss_sLsL::synapse0x24fda50() {
   return (neuron0x24e26a0()*0.793047);
}

double NNfunction_ss_sLsL::synapse0x24fda90() {
   return (neuron0x24e3070()*-1.63726);
}

double NNfunction_ss_sLsL::synapse0x24fdad0() {
   return (neuron0x24e3a40()*8.62501);
}

double NNfunction_ss_sLsL::synapse0x24fdb10() {
   return (neuron0x24e4410()*0.542474);
}

double NNfunction_ss_sLsL::synapse0x24fdb50() {
   return (neuron0x24e4de0()*0.573724);
}

double NNfunction_ss_sLsL::synapse0x24fdb90() {
   return (neuron0x24e57b0()*-1.62505);
}

double NNfunction_ss_sLsL::synapse0x24fdbd0() {
   return (neuron0x24e6180()*0.285371);
}

double NNfunction_ss_sLsL::synapse0x24fdc10() {
   return (neuron0x24e6b50()*0.612319);
}

double NNfunction_ss_sLsL::synapse0x24fd7c0() {
   return (neuron0x24dcbe0()*-0.866054);
}

double NNfunction_ss_sLsL::synapse0x24fd800() {
   return (neuron0x24e9730()*0.608951);
}

double NNfunction_ss_sLsL::synapse0x24fd840() {
   return (neuron0x24ea100()*-0.607858);
}

double NNfunction_ss_sLsL::synapse0x24fd880() {
   return (neuron0x24eaad0()*-0.856261);
}

double NNfunction_ss_sLsL::synapse0x24fde60() {
   return (neuron0x24eb4a0()*-1.4128);
}

double NNfunction_ss_sLsL::synapse0x24fdea0() {
   return (neuron0x24ebe70()*-1.15532);
}

double NNfunction_ss_sLsL::synapse0x24fdee0() {
   return (neuron0x24ec840()*3.02094);
}

double NNfunction_ss_sLsL::synapse0x24fdf20() {
   return (neuron0x24ed210()*-0.564729);
}

double NNfunction_ss_sLsL::synapse0x24fdf60() {
   return (neuron0x24edbe0()*1.52711);
}

double NNfunction_ss_sLsL::synapse0x24fdfa0() {
   return (neuron0x24ee7c0()*1.27285);
}

double NNfunction_ss_sLsL::synapse0x24fdfe0() {
   return (neuron0x24ef190()*1.12206);
}

double NNfunction_ss_sLsL::synapse0x24fe020() {
   return (neuron0x24e0010()*3.57207);
}

double NNfunction_ss_sLsL::synapse0x24fe060() {
   return (neuron0x24e09e0()*1.13559);
}

double NNfunction_ss_sLsL::synapse0x24fe0a0() {
   return (neuron0x24e13b0()*-1.27109);
}

double NNfunction_ss_sLsL::synapse0x24fe0e0() {
   return (neuron0x24f39f0()*-1.33991);
}

double NNfunction_ss_sLsL::synapse0x24fe120() {
   return (neuron0x24f42a0()*-0.756722);
}

double NNfunction_ss_sLsL::synapse0x24fe160() {
   return (neuron0x24f4c70()*-1.55233);
}

double NNfunction_ss_sLsL::synapse0x24fe1a0() {
   return (neuron0x24f5640()*1.1495);
}

double NNfunction_ss_sLsL::synapse0x24fe520() {
   return (neuron0x24d15c0()*0.897269);
}

double NNfunction_ss_sLsL::synapse0x24fe560() {
   return (neuron0x24d1ed0()*0.244521);
}

double NNfunction_ss_sLsL::synapse0x24fe5a0() {
   return (neuron0x24d29b0()*0.206436);
}

double NNfunction_ss_sLsL::synapse0x24fe5e0() {
   return (neuron0x228c240()*0.692225);
}

double NNfunction_ss_sLsL::synapse0x24fe620() {
   return (neuron0x24d37d0()*0.36602);
}

double NNfunction_ss_sLsL::synapse0x24fe660() {
   return (neuron0x24d41a0()*2.1611);
}

double NNfunction_ss_sLsL::synapse0x24fe6a0() {
   return (neuron0x24d4f70()*0.409138);
}

double NNfunction_ss_sLsL::synapse0x24fe6e0() {
   return (neuron0x24d5940()*0.3757);
}

double NNfunction_ss_sLsL::synapse0x24fe720() {
   return (neuron0x24d6310()*0.575066);
}

double NNfunction_ss_sLsL::synapse0x24fe760() {
   return (neuron0x24d6df0()*0.329139);
}

double NNfunction_ss_sLsL::synapse0x24fe7a0() {
   return (neuron0x24d77c0()*0.560281);
}

double NNfunction_ss_sLsL::synapse0x24fe7e0() {
   return (neuron0x24d48a0()*1.34055);
}

double NNfunction_ss_sLsL::synapse0x24fe820() {
   return (neuron0x24d9370()*5.41112);
}

double NNfunction_ss_sLsL::synapse0x24fe860() {
   return (neuron0x24d9d40()*-3.83495);
}

double NNfunction_ss_sLsL::synapse0x24fe8a0() {
   return (neuron0x24da710()*1.2231);
}

double NNfunction_ss_sLsL::synapse0x24fe8e0() {
   return (neuron0x24db0e0()*-1.8455);
}

double NNfunction_ss_sLsL::synapse0x24fe370() {
   return (neuron0x24dcef0()*0.109569);
}

double NNfunction_ss_sLsL::synapse0x24fe3b0() {
   return (neuron0x24dd1d0()*0.0727082);
}

double NNfunction_ss_sLsL::synapse0x24fea30() {
   return (neuron0x24ddba0()*-0.308926);
}

double NNfunction_ss_sLsL::synapse0x24fea70() {
   return (neuron0x24de570()*0.743507);
}

double NNfunction_ss_sLsL::synapse0x24feab0() {
   return (neuron0x24def40()*0.187028);
}

double NNfunction_ss_sLsL::synapse0x24feaf0() {
   return (neuron0x24df910()*-1.57318);
}

double NNfunction_ss_sLsL::synapse0x24feb30() {
   return (neuron0x24d8460()*-1.11757);
}

double NNfunction_ss_sLsL::synapse0x24feb70() {
   return (neuron0x24d8e30()*0.120762);
}

double NNfunction_ss_sLsL::synapse0x24febb0() {
   return (neuron0x24e26a0()*0.444305);
}

double NNfunction_ss_sLsL::synapse0x24febf0() {
   return (neuron0x24e3070()*-0.118035);
}

double NNfunction_ss_sLsL::synapse0x24fec30() {
   return (neuron0x24e3a40()*0.794748);
}

double NNfunction_ss_sLsL::synapse0x24fec70() {
   return (neuron0x24e4410()*0.206879);
}

double NNfunction_ss_sLsL::synapse0x24fecb0() {
   return (neuron0x24e4de0()*0.491515);
}

double NNfunction_ss_sLsL::synapse0x24fecf0() {
   return (neuron0x24e57b0()*-0.897522);
}

double NNfunction_ss_sLsL::synapse0x24fed30() {
   return (neuron0x24e6180()*-1.55499);
}

double NNfunction_ss_sLsL::synapse0x24fed70() {
   return (neuron0x24e6b50()*0.159994);
}

double NNfunction_ss_sLsL::synapse0x24fe920() {
   return (neuron0x24dcbe0()*-0.181471);
}

double NNfunction_ss_sLsL::synapse0x24fe960() {
   return (neuron0x24e9730()*0.388746);
}

double NNfunction_ss_sLsL::synapse0x24fe9a0() {
   return (neuron0x24ea100()*-0.276408);
}

double NNfunction_ss_sLsL::synapse0x24fe9e0() {
   return (neuron0x24eaad0()*-0.222591);
}

double NNfunction_ss_sLsL::synapse0x24fefc0() {
   return (neuron0x24eb4a0()*-1.70483);
}

double NNfunction_ss_sLsL::synapse0x24ff000() {
   return (neuron0x24ebe70()*-0.221641);
}

double NNfunction_ss_sLsL::synapse0x24ff040() {
   return (neuron0x24ec840()*2.17155);
}

double NNfunction_ss_sLsL::synapse0x24ff080() {
   return (neuron0x24ed210()*-0.702747);
}

double NNfunction_ss_sLsL::synapse0x24ff0c0() {
   return (neuron0x24edbe0()*0.996661);
}

double NNfunction_ss_sLsL::synapse0x24ff100() {
   return (neuron0x24ee7c0()*-0.0134728);
}

double NNfunction_ss_sLsL::synapse0x24ff140() {
   return (neuron0x24ef190()*0.165777);
}

double NNfunction_ss_sLsL::synapse0x24ff180() {
   return (neuron0x24e0010()*2.69625);
}

double NNfunction_ss_sLsL::synapse0x24ff1c0() {
   return (neuron0x24e09e0()*0.499356);
}

double NNfunction_ss_sLsL::synapse0x24ff200() {
   return (neuron0x24e13b0()*-0.748975);
}

double NNfunction_ss_sLsL::synapse0x24ff240() {
   return (neuron0x24f39f0()*-8.68364);
}

double NNfunction_ss_sLsL::synapse0x24ff280() {
   return (neuron0x24f42a0()*-0.354842);
}

double NNfunction_ss_sLsL::synapse0x24ff2c0() {
   return (neuron0x24f4c70()*-0.329683);
}

double NNfunction_ss_sLsL::synapse0x24ff300() {
   return (neuron0x24f5640()*0.464192);
}

double NNfunction_ss_sLsL::synapse0x24ff680() {
   return (neuron0x24d15c0()*0.277041);
}

double NNfunction_ss_sLsL::synapse0x24ff6c0() {
   return (neuron0x24d1ed0()*-0.00334558);
}

double NNfunction_ss_sLsL::synapse0x24ff700() {
   return (neuron0x24d29b0()*0.0420315);
}

double NNfunction_ss_sLsL::synapse0x24ff740() {
   return (neuron0x228c240()*-0.0514395);
}

double NNfunction_ss_sLsL::synapse0x24ff780() {
   return (neuron0x24d37d0()*0.0266238);
}

double NNfunction_ss_sLsL::synapse0x24ff7c0() {
   return (neuron0x24d41a0()*0.262956);
}

double NNfunction_ss_sLsL::synapse0x24ff800() {
   return (neuron0x24d4f70()*0.0875596);
}

double NNfunction_ss_sLsL::synapse0x24ff840() {
   return (neuron0x24d5940()*0.029785);
}

double NNfunction_ss_sLsL::synapse0x24ff880() {
   return (neuron0x24d6310()*0.00582185);
}

double NNfunction_ss_sLsL::synapse0x24ff8c0() {
   return (neuron0x24d6df0()*-0.103978);
}

double NNfunction_ss_sLsL::synapse0x24ff900() {
   return (neuron0x24d77c0()*0.112021);
}

double NNfunction_ss_sLsL::synapse0x24ff940() {
   return (neuron0x24d48a0()*1.88218);
}

double NNfunction_ss_sLsL::synapse0x24ff980() {
   return (neuron0x24d9370()*0.283548);
}

double NNfunction_ss_sLsL::synapse0x24ff9c0() {
   return (neuron0x24d9d40()*-3.09236);
}

double NNfunction_ss_sLsL::synapse0x24ffa00() {
   return (neuron0x24da710()*-0.564732);
}

double NNfunction_ss_sLsL::synapse0x24ffa40() {
   return (neuron0x24db0e0()*0.743723);
}

double NNfunction_ss_sLsL::synapse0x24ff4d0() {
   return (neuron0x24dcef0()*0.134445);
}

double NNfunction_ss_sLsL::synapse0x24ff510() {
   return (neuron0x24dd1d0()*0.0362325);
}

double NNfunction_ss_sLsL::synapse0x24ffb90() {
   return (neuron0x24ddba0()*-0.0144433);
}

double NNfunction_ss_sLsL::synapse0x24ffbd0() {
   return (neuron0x24de570()*-0.846357);
}

double NNfunction_ss_sLsL::synapse0x24ffc10() {
   return (neuron0x24def40()*0.0679275);
}

double NNfunction_ss_sLsL::synapse0x24ffc50() {
   return (neuron0x24df910()*1.35543);
}

double NNfunction_ss_sLsL::synapse0x24ffc90() {
   return (neuron0x24d8460()*0.795927);
}

double NNfunction_ss_sLsL::synapse0x24ffcd0() {
   return (neuron0x24d8e30()*0.0578492);
}

double NNfunction_ss_sLsL::synapse0x24ffd10() {
   return (neuron0x24e26a0()*0.0492536);
}

double NNfunction_ss_sLsL::synapse0x24ffd50() {
   return (neuron0x24e3070()*-0.284141);
}

double NNfunction_ss_sLsL::synapse0x24ffd90() {
   return (neuron0x24e3a40()*-0.12903);
}

double NNfunction_ss_sLsL::synapse0x24ffdd0() {
   return (neuron0x24e4410()*0.00809924);
}

double NNfunction_ss_sLsL::synapse0x24ffe10() {
   return (neuron0x24e4de0()*0.0501718);
}

double NNfunction_ss_sLsL::synapse0x24ffe50() {
   return (neuron0x24e57b0()*-0.155607);
}

double NNfunction_ss_sLsL::synapse0x24ffe90() {
   return (neuron0x24e6180()*-0.0334303);
}

double NNfunction_ss_sLsL::synapse0x24ffed0() {
   return (neuron0x24e6b50()*0.0310527);
}

double NNfunction_ss_sLsL::synapse0x24ffa80() {
   return (neuron0x24dcbe0()*-0.0824331);
}

double NNfunction_ss_sLsL::synapse0x24ffac0() {
   return (neuron0x24e9730()*0.0304038);
}

double NNfunction_ss_sLsL::synapse0x24ffb00() {
   return (neuron0x24ea100()*-0.0257381);
}

double NNfunction_ss_sLsL::synapse0x24ffb40() {
   return (neuron0x24eaad0()*-0.0843386);
}

double NNfunction_ss_sLsL::synapse0x2500120() {
   return (neuron0x24eb4a0()*-0.843213);
}

double NNfunction_ss_sLsL::synapse0x2500160() {
   return (neuron0x24ebe70()*-0.0807886);
}

double NNfunction_ss_sLsL::synapse0x25001a0() {
   return (neuron0x24ec840()*0.263388);
}

double NNfunction_ss_sLsL::synapse0x25001e0() {
   return (neuron0x24ed210()*0.0120169);
}

double NNfunction_ss_sLsL::synapse0x2500220() {
   return (neuron0x24edbe0()*0.92518);
}

double NNfunction_ss_sLsL::synapse0x2500260() {
   return (neuron0x24ee7c0()*0.136228);
}

double NNfunction_ss_sLsL::synapse0x25002a0() {
   return (neuron0x24ef190()*0.132298);
}

double NNfunction_ss_sLsL::synapse0x25002e0() {
   return (neuron0x24e0010()*-0.390728);
}

double NNfunction_ss_sLsL::synapse0x2500320() {
   return (neuron0x24e09e0()*0.0830058);
}

double NNfunction_ss_sLsL::synapse0x2500360() {
   return (neuron0x24e13b0()*0.305427);
}

double NNfunction_ss_sLsL::synapse0x25003a0() {
   return (neuron0x24f39f0()*-2.64787);
}

double NNfunction_ss_sLsL::synapse0x25003e0() {
   return (neuron0x24f42a0()*-0.0678596);
}

double NNfunction_ss_sLsL::synapse0x2500420() {
   return (neuron0x24f4c70()*-0.190731);
}

double NNfunction_ss_sLsL::synapse0x2500460() {
   return (neuron0x24f5640()*0.0845054);
}

double NNfunction_ss_sLsL::synapse0x24d1580() {
   return (neuron0x24fc840()*5.58926);
}

double NNfunction_ss_sLsL::synapse0x25006c0() {
   return (neuron0x24fcbe0()*-0.716744);
}

double NNfunction_ss_sLsL::synapse0x2500700() {
   return (neuron0x24fd080()*-9.03107);
}

double NNfunction_ss_sLsL::synapse0x2500740() {
   return (neuron0x24fe1e0()*-7.17037);
}

double NNfunction_ss_sLsL::synapse0x2500780() {
   return (neuron0x24ff340()*7.68083);
}

