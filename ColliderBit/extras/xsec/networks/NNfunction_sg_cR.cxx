#include "NNfunction_sg_cR.h"
#include <cmath>

double NNfunction_sg_cR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3441)/15.1221;
   input1 = (in1 - 28.4978)/951.243;
   input2 = (in2 - 489.904)/558.664;
   input3 = (in3 - 138.908)/691.789;
   input4 = (in4 - 947.898)/842.354;
   input5 = (in5 - 845.439)/835.999;
   input6 = (in6 - 850.803)/836.341;
   input7 = (in7 - 851.562)/819.963;
   input8 = (in8 - 838.919)/832.348;
   input9 = (in9 - 829.257)/820.763;
   input10 = (in10 - 856.536)/822.467;
   input11 = (in11 - 762.467)/728.189;
   input12 = (in12 - 762.591)/729.768;
   input13 = (in13 - 566.698)/457.435;
   input14 = (in14 - 784.618)/720.944;
   input15 = (in15 - 576.713)/475.716;
   input16 = (in16 - 545.072)/486.513;
   input17 = (in17 - 782.567)/754.626;
   input18 = (in18 - 778.811)/754.271;
   input19 = (in19 - 795.593)/729.723;
   input20 = (in20 - -124.491)/469.79;
   input21 = (in21 - -158.343)/1039.23;
   input22 = (in22 - -4.3052)/1068.04;
   input23 = (in23 - -91.2876)/572.478;
   switch(index) {
     case 0:
         return neuron0x3c109b0();
     default:
         return 0.;
   }
}

double NNfunction_sg_cR::Value(int index, double* input) {
   input0 = (input[0] - 23.3441)/15.1221;
   input1 = (input[1] - 28.4978)/951.243;
   input2 = (input[2] - 489.904)/558.664;
   input3 = (input[3] - 138.908)/691.789;
   input4 = (input[4] - 947.898)/842.354;
   input5 = (input[5] - 845.439)/835.999;
   input6 = (input[6] - 850.803)/836.341;
   input7 = (input[7] - 851.562)/819.963;
   input8 = (input[8] - 838.919)/832.348;
   input9 = (input[9] - 829.257)/820.763;
   input10 = (input[10] - 856.536)/822.467;
   input11 = (input[11] - 762.467)/728.189;
   input12 = (input[12] - 762.591)/729.768;
   input13 = (input[13] - 566.698)/457.435;
   input14 = (input[14] - 784.618)/720.944;
   input15 = (input[15] - 576.713)/475.716;
   input16 = (input[16] - 545.072)/486.513;
   input17 = (input[17] - 782.567)/754.626;
   input18 = (input[18] - 778.811)/754.271;
   input19 = (input[19] - 795.593)/729.723;
   input20 = (input[20] - -124.491)/469.79;
   input21 = (input[21] - -158.343)/1039.23;
   input22 = (input[22] - -4.3052)/1068.04;
   input23 = (input[23] - -91.2876)/572.478;
   switch(index) {
     case 0:
         return neuron0x3c109b0();
     default:
         return 0.;
   }
}

double NNfunction_sg_cR::neuron0x3bdba20() {
   return input0;
}

double NNfunction_sg_cR::neuron0x3bdbcd0() {
   return input1;
}

double NNfunction_sg_cR::neuron0x3bdc010() {
   return input2;
}

double NNfunction_sg_cR::neuron0x3bdc350() {
   return input3;
}

double NNfunction_sg_cR::neuron0x3bdc690() {
   return input4;
}

double NNfunction_sg_cR::neuron0x3bdc9d0() {
   return input5;
}

double NNfunction_sg_cR::neuron0x3bdcd10() {
   return input6;
}

double NNfunction_sg_cR::neuron0x3bdd050() {
   return input7;
}

double NNfunction_sg_cR::neuron0x3bdd390() {
   return input8;
}

double NNfunction_sg_cR::neuron0x3bdd6d0() {
   return input9;
}

double NNfunction_sg_cR::neuron0x3bdda10() {
   return input10;
}

double NNfunction_sg_cR::neuron0x3bddd50() {
   return input11;
}

double NNfunction_sg_cR::neuron0x3bde090() {
   return input12;
}

double NNfunction_sg_cR::neuron0x3bde3d0() {
   return input13;
}

double NNfunction_sg_cR::neuron0x3bde710() {
   return input14;
}

double NNfunction_sg_cR::neuron0x3bdea50() {
   return input15;
}

double NNfunction_sg_cR::neuron0x3bded90() {
   return input16;
}

double NNfunction_sg_cR::neuron0x3bdf2f0() {
   return input17;
}

double NNfunction_sg_cR::neuron0x3bdf510() {
   return input18;
}

double NNfunction_sg_cR::neuron0x3bdf850() {
   return input19;
}

double NNfunction_sg_cR::neuron0x3bdfb90() {
   return input20;
}

double NNfunction_sg_cR::neuron0x3bdfed0() {
   return input21;
}

double NNfunction_sg_cR::neuron0x3be0210() {
   return input22;
}

double NNfunction_sg_cR::neuron0x3be0550() {
   return input23;
}

double NNfunction_sg_cR::input0x3be09c0() {
   double input = 0.802722;
   input += synapse0x3be0d00();
   input += synapse0x3be0d40();
   input += synapse0x3be0d80();
   input += synapse0x3be0dc0();
   input += synapse0x3be0e00();
   input += synapse0x3be0e40();
   input += synapse0x3be0e80();
   input += synapse0x3be0ec0();
   input += synapse0x3be0f00();
   input += synapse0x3be0f40();
   input += synapse0x3be0f80();
   input += synapse0x3be0fc0();
   input += synapse0x3be1000();
   input += synapse0x3be1040();
   input += synapse0x3be1080();
   input += synapse0x3be10c0();
   input += synapse0x3be0b50();
   input += synapse0x3be0b90();
   input += synapse0x2b1ecd0();
   input += synapse0x2b1ed10();
   input += synapse0x3be1210();
   input += synapse0x3be1250();
   input += synapse0x3be1290();
   input += synapse0x3be12d0();
   return input;
}

double NNfunction_sg_cR::neuron0x3be09c0() {
   double input = input0x3be09c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3be1310() {
   double input = -2.08555;
   input += synapse0x3be1650();
   input += synapse0x3be1690();
   input += synapse0x3be16d0();
   input += synapse0x3be1710();
   input += synapse0x3be1750();
   input += synapse0x3be1790();
   input += synapse0x3be17d0();
   input += synapse0x3be1810();
   input += synapse0x3be1850();
   input += synapse0x3be1100();
   input += synapse0x3be1140();
   input += synapse0x3be1180();
   input += synapse0x3be11c0();
   input += synapse0x3be1aa0();
   input += synapse0x3be1ae0();
   input += synapse0x3be1b20();
   input += synapse0x3be14a0();
   input += synapse0x3be14e0();
   input += synapse0x3be1c70();
   input += synapse0x3be1cb0();
   input += synapse0x3be1cf0();
   input += synapse0x3be1d30();
   input += synapse0x3be1d70();
   input += synapse0x3be1db0();
   return input;
}

double NNfunction_sg_cR::neuron0x3be1310() {
   double input = input0x3be1310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3be1df0() {
   double input = -1.80823;
   input += synapse0x3be2130();
   input += synapse0x3be2170();
   input += synapse0x3be21b0();
   input += synapse0x3be21f0();
   input += synapse0x3be2230();
   input += synapse0x3be2270();
   input += synapse0x3be22b0();
   input += synapse0x3be22f0();
   input += synapse0x3be2330();
   input += synapse0x3be2370();
   input += synapse0x3be23b0();
   input += synapse0x3be23f0();
   input += synapse0x3be2430();
   input += synapse0x3be2470();
   input += synapse0x3be24b0();
   input += synapse0x3be24f0();
   input += synapse0x3be1f80();
   input += synapse0x3be1fc0();
   input += synapse0x2b1fcb0();
   input += synapse0x39a5b20();
   input += synapse0x39a5b60();
   input += synapse0x3be4430();
   input += synapse0x3be4470();
   input += synapse0x3bdb760();
   return input;
}

double NNfunction_sg_cR::neuron0x3be1df0() {
   double input = input0x3be1df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3be1890() {
   double input = 0.0548631;
   input += synapse0x3bdb830();
   input += synapse0x39a63a0();
   input += synapse0x3be1a20();
   input += synapse0x3be1a60();
   input += synapse0x3be2640();
   input += synapse0x3be2680();
   input += synapse0x3be26c0();
   input += synapse0x3be2700();
   input += synapse0x3be2740();
   input += synapse0x3be2780();
   input += synapse0x3be27c0();
   input += synapse0x3be2800();
   input += synapse0x3be2840();
   input += synapse0x3be2880();
   input += synapse0x3be28c0();
   input += synapse0x3be2900();
   input += synapse0x3bdb7a0();
   input += synapse0x3bdb7e0();
   input += synapse0x3be2a50();
   input += synapse0x3be2a90();
   input += synapse0x3be2ad0();
   input += synapse0x3be2b10();
   input += synapse0x3be2b50();
   input += synapse0x3be2b90();
   return input;
}

double NNfunction_sg_cR::neuron0x3be1890() {
   double input = input0x3be1890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3be2bd0() {
   double input = -0.347367;
   input += synapse0x3be2f10();
   input += synapse0x3be2f50();
   input += synapse0x3be2f90();
   input += synapse0x3be2fd0();
   input += synapse0x3be3010();
   input += synapse0x3be3050();
   input += synapse0x3be3090();
   input += synapse0x3be30d0();
   input += synapse0x3be3110();
   input += synapse0x3be3150();
   input += synapse0x3be3190();
   input += synapse0x3be31d0();
   input += synapse0x3be3210();
   input += synapse0x3be3250();
   input += synapse0x3be3290();
   input += synapse0x3be32d0();
   input += synapse0x3be3420();
   input += synapse0x3be2d60();
   input += synapse0x3be2da0();
   input += synapse0x3be4570();
   input += synapse0x3be45b0();
   input += synapse0x3be45f0();
   input += synapse0x3be4630();
   input += synapse0x3be4670();
   return input;
}

double NNfunction_sg_cR::neuron0x3be2bd0() {
   double input = input0x3be2bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3be46b0() {
   double input = -1.13617;
   input += synapse0x3be49f0();
   input += synapse0x3be4a30();
   input += synapse0x3be4a70();
   input += synapse0x3be4ab0();
   input += synapse0x3be4af0();
   input += synapse0x3be4b30();
   input += synapse0x3be4b70();
   input += synapse0x3be4bb0();
   input += synapse0x3be4bf0();
   input += synapse0x39a5e70();
   input += synapse0x39a5eb0();
   input += synapse0x39a5ef0();
   input += synapse0x39a5f30();
   input += synapse0x39a5f70();
   input += synapse0x39a5fb0();
   input += synapse0x39a5ff0();
   input += synapse0x3be4840();
   input += synapse0x3be4880();
   input += synapse0x39a6140();
   input += synapse0x39a6180();
   input += synapse0x39a61c0();
   input += synapse0x39a6200();
   input += synapse0x39a6240();
   input += synapse0x3be5440();
   return input;
}

double NNfunction_sg_cR::neuron0x3be46b0() {
   double input = input0x3be46b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3be5480() {
   double input = -0.821719;
   input += synapse0x3be57c0();
   input += synapse0x3be5800();
   input += synapse0x3be5840();
   input += synapse0x3be5880();
   input += synapse0x3be58c0();
   input += synapse0x3be5900();
   input += synapse0x3be5940();
   input += synapse0x3be5980();
   input += synapse0x3be59c0();
   input += synapse0x3be5a00();
   input += synapse0x3be5a40();
   input += synapse0x3be5a80();
   input += synapse0x3be5ac0();
   input += synapse0x3be5b00();
   input += synapse0x3be5b40();
   input += synapse0x3be5b80();
   input += synapse0x3be5610();
   input += synapse0x3be5650();
   input += synapse0x3be5cd0();
   input += synapse0x3be5d10();
   input += synapse0x3be5d50();
   input += synapse0x3be5d90();
   input += synapse0x3be5dd0();
   input += synapse0x3be5e10();
   return input;
}

double NNfunction_sg_cR::neuron0x3be5480() {
   double input = input0x3be5480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3be5e50() {
   double input = 1.21837;
   input += synapse0x3be6190();
   input += synapse0x3be61d0();
   input += synapse0x3be6210();
   input += synapse0x3be6250();
   input += synapse0x3be6290();
   input += synapse0x3be62d0();
   input += synapse0x3be6310();
   input += synapse0x3be6350();
   input += synapse0x3be6390();
   input += synapse0x3be63d0();
   input += synapse0x3be6410();
   input += synapse0x3be6450();
   input += synapse0x3be6490();
   input += synapse0x3be64d0();
   input += synapse0x3be6510();
   input += synapse0x3be6550();
   input += synapse0x3be5fe0();
   input += synapse0x3be6020();
   input += synapse0x3be66a0();
   input += synapse0x3be66e0();
   input += synapse0x3be6720();
   input += synapse0x3be6760();
   input += synapse0x3be67a0();
   input += synapse0x3be67e0();
   return input;
}

double NNfunction_sg_cR::neuron0x3be5e50() {
   double input = input0x3be5e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3be6820() {
   double input = 0.0128361;
   input += synapse0x3bdf1e0();
   input += synapse0x3bdf220();
   input += synapse0x3bdf260();
   input += synapse0x3bdf2a0();
   input += synapse0x3be6d70();
   input += synapse0x3be6db0();
   input += synapse0x3be6df0();
   input += synapse0x3be6e30();
   input += synapse0x3be6e70();
   input += synapse0x3be6eb0();
   input += synapse0x3be6ef0();
   input += synapse0x3be6f30();
   input += synapse0x3be6f70();
   input += synapse0x3be6fb0();
   input += synapse0x3be6ff0();
   input += synapse0x3be7030();
   input += synapse0x3be69b0();
   input += synapse0x3be69f0();
   input += synapse0x3be7180();
   input += synapse0x3be71c0();
   input += synapse0x3be7200();
   input += synapse0x3be7240();
   input += synapse0x3be7280();
   input += synapse0x3be72c0();
   return input;
}

double NNfunction_sg_cR::neuron0x3be6820() {
   double input = input0x3be6820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3be7300() {
   double input = 0.334171;
   input += synapse0x3be7640();
   input += synapse0x3be7680();
   input += synapse0x3be76c0();
   input += synapse0x3be7700();
   input += synapse0x3be7740();
   input += synapse0x3be7780();
   input += synapse0x3be77c0();
   input += synapse0x3be7800();
   input += synapse0x3be7840();
   input += synapse0x3be7880();
   input += synapse0x3be78c0();
   input += synapse0x3be7900();
   input += synapse0x3be7940();
   input += synapse0x3be7980();
   input += synapse0x3be79c0();
   input += synapse0x3be7a00();
   input += synapse0x3be7490();
   input += synapse0x3be74d0();
   input += synapse0x3be7b50();
   input += synapse0x3be7b90();
   input += synapse0x3be7bd0();
   input += synapse0x3be7c10();
   input += synapse0x3be7c50();
   input += synapse0x3be7c90();
   return input;
}

double NNfunction_sg_cR::neuron0x3be7300() {
   double input = input0x3be7300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3be7cd0() {
   double input = 0.331064;
   input += synapse0x3be8010();
   input += synapse0x3be8050();
   input += synapse0x3be8090();
   input += synapse0x3be80d0();
   input += synapse0x3be8110();
   input += synapse0x3be8150();
   input += synapse0x3be8190();
   input += synapse0x3be81d0();
   input += synapse0x3be8210();
   input += synapse0x3be8250();
   input += synapse0x3be8290();
   input += synapse0x3be82d0();
   input += synapse0x3be8310();
   input += synapse0x3be8350();
   input += synapse0x3be8390();
   input += synapse0x3be83d0();
   input += synapse0x3be7e60();
   input += synapse0x3be7ea0();
   input += synapse0x3be4c30();
   input += synapse0x3be4c70();
   input += synapse0x3be4cb0();
   input += synapse0x3be4cf0();
   input += synapse0x3be4d30();
   input += synapse0x3be4d70();
   return input;
}

double NNfunction_sg_cR::neuron0x3be7cd0() {
   double input = input0x3be7cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3be4db0() {
   double input = -1.66747;
   input += synapse0x3be50f0();
   input += synapse0x3be5130();
   input += synapse0x3be5170();
   input += synapse0x3be51b0();
   input += synapse0x3be51f0();
   input += synapse0x3be5230();
   input += synapse0x3be5270();
   input += synapse0x3be52b0();
   input += synapse0x3be52f0();
   input += synapse0x3be5330();
   input += synapse0x3be5370();
   input += synapse0x3be53b0();
   input += synapse0x3be53f0();
   input += synapse0x3be9530();
   input += synapse0x3be9570();
   input += synapse0x3be95b0();
   input += synapse0x3be4f40();
   input += synapse0x3be4f80();
   input += synapse0x3be9700();
   input += synapse0x3be9740();
   input += synapse0x3be9780();
   input += synapse0x3be97c0();
   input += synapse0x3be9800();
   input += synapse0x3be9840();
   return input;
}

double NNfunction_sg_cR::neuron0x3be4db0() {
   double input = input0x3be4db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3be9880() {
   double input = 0.368565;
   input += synapse0x3be9bc0();
   input += synapse0x3be9c00();
   input += synapse0x3be9c40();
   input += synapse0x3be9c80();
   input += synapse0x3be9cc0();
   input += synapse0x3be9d00();
   input += synapse0x3be9d40();
   input += synapse0x3be9d80();
   input += synapse0x3be9dc0();
   input += synapse0x3be9e00();
   input += synapse0x3be9e40();
   input += synapse0x3be9e80();
   input += synapse0x3be9ec0();
   input += synapse0x3be9f00();
   input += synapse0x3be9f40();
   input += synapse0x3be9f80();
   input += synapse0x3be9a10();
   input += synapse0x3be9a50();
   input += synapse0x3bea0d0();
   input += synapse0x3bea110();
   input += synapse0x3bea150();
   input += synapse0x3bea190();
   input += synapse0x3bea1d0();
   input += synapse0x3bea210();
   return input;
}

double NNfunction_sg_cR::neuron0x3be9880() {
   double input = input0x3be9880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bea250() {
   double input = -0.802109;
   input += synapse0x3bea590();
   input += synapse0x3bea5d0();
   input += synapse0x3bea610();
   input += synapse0x3bea650();
   input += synapse0x3bea690();
   input += synapse0x3bea6d0();
   input += synapse0x3bea710();
   input += synapse0x3bea750();
   input += synapse0x3bea790();
   input += synapse0x3bea7d0();
   input += synapse0x3bea810();
   input += synapse0x3bea850();
   input += synapse0x3bea890();
   input += synapse0x3bea8d0();
   input += synapse0x3bea910();
   input += synapse0x3bea950();
   input += synapse0x3bea3e0();
   input += synapse0x3bea420();
   input += synapse0x3beaaa0();
   input += synapse0x3beaae0();
   input += synapse0x3beab20();
   input += synapse0x3beab60();
   input += synapse0x3beaba0();
   input += synapse0x3beabe0();
   return input;
}

double NNfunction_sg_cR::neuron0x3bea250() {
   double input = input0x3bea250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3beac20() {
   double input = 1.66172;
   input += synapse0x3beaf60();
   input += synapse0x3beafa0();
   input += synapse0x3beafe0();
   input += synapse0x3beb020();
   input += synapse0x3beb060();
   input += synapse0x3beb0a0();
   input += synapse0x3beb0e0();
   input += synapse0x3beb120();
   input += synapse0x3beb160();
   input += synapse0x3beb1a0();
   input += synapse0x3beb1e0();
   input += synapse0x3beb220();
   input += synapse0x3beb260();
   input += synapse0x3beb2a0();
   input += synapse0x3beb2e0();
   input += synapse0x3beb320();
   input += synapse0x3beadb0();
   input += synapse0x3beadf0();
   input += synapse0x3beb470();
   input += synapse0x3beb4b0();
   input += synapse0x3beb4f0();
   input += synapse0x3beb530();
   input += synapse0x3beb570();
   input += synapse0x3beb5b0();
   return input;
}

double NNfunction_sg_cR::neuron0x3beac20() {
   double input = input0x3beac20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3beb5f0() {
   double input = -0.768781;
   input += synapse0x3beb930();
   input += synapse0x3bdbbb0();
   input += synapse0x3bdbbf0();
   input += synapse0x3bdbef0();
   input += synapse0x3bdbf30();
   input += synapse0x3bdc230();
   input += synapse0x3bdc270();
   input += synapse0x3bdc570();
   input += synapse0x3bdc5b0();
   input += synapse0x3bdc8b0();
   input += synapse0x3bdc8f0();
   input += synapse0x3bdcbf0();
   input += synapse0x3bdcc30();
   input += synapse0x3bdcf30();
   input += synapse0x3bdcf70();
   input += synapse0x3bdd270();
   input += synapse0x3bdd2b0();
   input += synapse0x3bdd5b0();
   input += synapse0x3bdd5f0();
   input += synapse0x3bdd8f0();
   input += synapse0x3bdd930();
   input += synapse0x3bddc30();
   input += synapse0x3bddc70();
   input += synapse0x3bddf70();
   return input;
}

double NNfunction_sg_cR::neuron0x3beb5f0() {
   double input = input0x3beb5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bed400() {
   double input = -0.763162;
   input += synapse0x3bddfb0();
   input += synapse0x3bdec70();
   input += synapse0x3bdecb0();
   input += synapse0x3beb780();
   input += synapse0x3beb7c0();
   input += synapse0x3bdefb0();
   input += synapse0x3bdeff0();
   input += synapse0x2b32d20();
   input += synapse0x2b32d60();
   input += synapse0x3bdf730();
   input += synapse0x3bdf770();
   input += synapse0x3bdfa70();
   input += synapse0x3bdfab0();
   input += synapse0x3bdfdb0();
   input += synapse0x3bdfdf0();
   input += synapse0x3be00f0();
   input += synapse0x3be0130();
   input += synapse0x3be0430();
   input += synapse0x3be0470();
   input += synapse0x3be0770();
   input += synapse0x3be07b0();
   input += synapse0x3bde2b0();
   input += synapse0x3bde2f0();
   input += synapse0x3bed6a0();
   return input;
}

double NNfunction_sg_cR::neuron0x3bed400() {
   double input = input0x3bed400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bed6e0() {
   double input = -2.24133;
   input += synapse0x3beda20();
   input += synapse0x3beda60();
   input += synapse0x3bedaa0();
   input += synapse0x3bedae0();
   input += synapse0x3bedb20();
   input += synapse0x3bedb60();
   input += synapse0x3bedba0();
   input += synapse0x3bedbe0();
   input += synapse0x3bedc20();
   input += synapse0x3bedc60();
   input += synapse0x3bedca0();
   input += synapse0x3bedce0();
   input += synapse0x3bedd20();
   input += synapse0x3bedd60();
   input += synapse0x3bedda0();
   input += synapse0x3bedde0();
   input += synapse0x3bed870();
   input += synapse0x3bed8b0();
   input += synapse0x3bedf30();
   input += synapse0x3bedf70();
   input += synapse0x3bedfb0();
   input += synapse0x3bedff0();
   input += synapse0x3bee030();
   input += synapse0x3bee070();
   return input;
}

double NNfunction_sg_cR::neuron0x3bed6e0() {
   double input = input0x3bed6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bee0b0() {
   double input = -0.629698;
   input += synapse0x3bee3f0();
   input += synapse0x3bee430();
   input += synapse0x3bee470();
   input += synapse0x3bee4b0();
   input += synapse0x3bee4f0();
   input += synapse0x3bee530();
   input += synapse0x3bee570();
   input += synapse0x3bee5b0();
   input += synapse0x3bee5f0();
   input += synapse0x3bee630();
   input += synapse0x3bee670();
   input += synapse0x3bee6b0();
   input += synapse0x3bee6f0();
   input += synapse0x3bee730();
   input += synapse0x3bee770();
   input += synapse0x3bee7b0();
   input += synapse0x3bee240();
   input += synapse0x3bee280();
   input += synapse0x3bee900();
   input += synapse0x3bee940();
   input += synapse0x3bee980();
   input += synapse0x3bee9c0();
   input += synapse0x3beea00();
   input += synapse0x3beea40();
   return input;
}

double NNfunction_sg_cR::neuron0x3bee0b0() {
   double input = input0x3bee0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3beea80() {
   double input = 0.0576599;
   input += synapse0x3beedc0();
   input += synapse0x3beee00();
   input += synapse0x3beee40();
   input += synapse0x3beee80();
   input += synapse0x3beeec0();
   input += synapse0x3beef00();
   input += synapse0x3beef40();
   input += synapse0x3beef80();
   input += synapse0x3beefc0();
   input += synapse0x3bef000();
   input += synapse0x3bef040();
   input += synapse0x3bef080();
   input += synapse0x3bef0c0();
   input += synapse0x3bef100();
   input += synapse0x3bef140();
   input += synapse0x3bef180();
   input += synapse0x3beec10();
   input += synapse0x3beec50();
   input += synapse0x3bef2d0();
   input += synapse0x3bef310();
   input += synapse0x3bef350();
   input += synapse0x3bef390();
   input += synapse0x3bef3d0();
   input += synapse0x3bef410();
   return input;
}

double NNfunction_sg_cR::neuron0x3beea80() {
   double input = input0x3beea80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bef450() {
   double input = 0.424245;
   input += synapse0x3bef790();
   input += synapse0x3bef7d0();
   input += synapse0x3bef810();
   input += synapse0x3bef850();
   input += synapse0x3bef890();
   input += synapse0x3bef8d0();
   input += synapse0x3bef910();
   input += synapse0x3bef950();
   input += synapse0x3bef990();
   input += synapse0x3bef9d0();
   input += synapse0x3befa10();
   input += synapse0x3befa50();
   input += synapse0x3befa90();
   input += synapse0x3befad0();
   input += synapse0x3befb10();
   input += synapse0x3befb50();
   input += synapse0x3bef5e0();
   input += synapse0x3bef620();
   input += synapse0x3befca0();
   input += synapse0x3befce0();
   input += synapse0x3befd20();
   input += synapse0x3befd60();
   input += synapse0x3befda0();
   input += synapse0x3befde0();
   return input;
}

double NNfunction_sg_cR::neuron0x3bef450() {
   double input = input0x3bef450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3befe20() {
   double input = -1.54302;
   input += synapse0x3bf0160();
   input += synapse0x3bf01a0();
   input += synapse0x3bf01e0();
   input += synapse0x3bf0220();
   input += synapse0x3bf0260();
   input += synapse0x3bf02a0();
   input += synapse0x3bf02e0();
   input += synapse0x3bf0320();
   input += synapse0x3bf0360();
   input += synapse0x3be8520();
   input += synapse0x3be8560();
   input += synapse0x3be85a0();
   input += synapse0x3be85e0();
   input += synapse0x3be8620();
   input += synapse0x3be8660();
   input += synapse0x3be86a0();
   input += synapse0x3beffb0();
   input += synapse0x3befff0();
   input += synapse0x3be87f0();
   input += synapse0x3be8830();
   input += synapse0x3be8870();
   input += synapse0x3be88b0();
   input += synapse0x3be88f0();
   input += synapse0x3be8930();
   return input;
}

double NNfunction_sg_cR::neuron0x3befe20() {
   double input = input0x3befe20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3be8970() {
   double input = -0.178436;
   input += synapse0x3be8cb0();
   input += synapse0x3be8cf0();
   input += synapse0x3be8d30();
   input += synapse0x3be8d70();
   input += synapse0x3be8db0();
   input += synapse0x3be8df0();
   input += synapse0x3be8e30();
   input += synapse0x3be8e70();
   input += synapse0x3be8eb0();
   input += synapse0x3be8ef0();
   input += synapse0x3be8f30();
   input += synapse0x3be8f70();
   input += synapse0x3be8fb0();
   input += synapse0x3be8ff0();
   input += synapse0x3be9030();
   input += synapse0x3be9070();
   input += synapse0x3be8b00();
   input += synapse0x3be8b40();
   input += synapse0x3be91c0();
   input += synapse0x3be9200();
   input += synapse0x3be9240();
   input += synapse0x3be9280();
   input += synapse0x3be92c0();
   input += synapse0x3be9300();
   return input;
}

double NNfunction_sg_cR::neuron0x3be8970() {
   double input = input0x3be8970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3be9340() {
   double input = 0.159442;
   input += synapse0x3be94d0();
   input += synapse0x3bf2560();
   input += synapse0x3bf25a0();
   input += synapse0x3bf25e0();
   input += synapse0x3bf2620();
   input += synapse0x3bf2660();
   input += synapse0x3bf26a0();
   input += synapse0x3bf26e0();
   input += synapse0x3bf2720();
   input += synapse0x3bf2760();
   input += synapse0x3bf27a0();
   input += synapse0x3bf27e0();
   input += synapse0x3bf2820();
   input += synapse0x3bf2860();
   input += synapse0x3bf28a0();
   input += synapse0x3bf28e0();
   input += synapse0x3bf23b0();
   input += synapse0x3bf23f0();
   input += synapse0x3bf2a30();
   input += synapse0x3bf2a70();
   input += synapse0x3bf2ab0();
   input += synapse0x3bf2af0();
   input += synapse0x3bf2b30();
   input += synapse0x3bf2b70();
   return input;
}

double NNfunction_sg_cR::neuron0x3be9340() {
   double input = input0x3be9340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bf2bb0() {
   double input = 0.742352;
   input += synapse0x3bf2ef0();
   input += synapse0x3bf2f30();
   input += synapse0x3bf2f70();
   input += synapse0x3bf2fb0();
   input += synapse0x3bf2ff0();
   input += synapse0x3bf3030();
   input += synapse0x3bf3070();
   input += synapse0x3bf30b0();
   input += synapse0x3bf30f0();
   input += synapse0x3bf3130();
   input += synapse0x3bf3170();
   input += synapse0x3bf31b0();
   input += synapse0x3bf31f0();
   input += synapse0x3bf3230();
   input += synapse0x3bf3270();
   input += synapse0x3bf32b0();
   input += synapse0x3bf2d40();
   input += synapse0x3bf2d80();
   input += synapse0x3bf3400();
   input += synapse0x3bf3440();
   input += synapse0x3bf3480();
   input += synapse0x3bf34c0();
   input += synapse0x3bf3500();
   input += synapse0x3bf3540();
   return input;
}

double NNfunction_sg_cR::neuron0x3bf2bb0() {
   double input = input0x3bf2bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bf3580() {
   double input = -0.343152;
   input += synapse0x3bf38c0();
   input += synapse0x3bf3900();
   input += synapse0x3bf3940();
   input += synapse0x3bf3980();
   input += synapse0x3bf39c0();
   input += synapse0x3bf3a00();
   input += synapse0x3bf3a40();
   input += synapse0x3bf3a80();
   input += synapse0x3bf3ac0();
   input += synapse0x3bf3b00();
   input += synapse0x3bf3b40();
   input += synapse0x3bf3b80();
   input += synapse0x3bf3bc0();
   input += synapse0x3bf3c00();
   input += synapse0x3bf3c40();
   input += synapse0x3bf3c80();
   input += synapse0x3bf3710();
   input += synapse0x3bf3750();
   input += synapse0x3bf3dd0();
   input += synapse0x3bf3e10();
   input += synapse0x3bf3e50();
   input += synapse0x3bf3e90();
   input += synapse0x3bf3ed0();
   input += synapse0x3bf3f10();
   return input;
}

double NNfunction_sg_cR::neuron0x3bf3580() {
   double input = input0x3bf3580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bf3f50() {
   double input = 0.157004;
   input += synapse0x3bf4290();
   input += synapse0x3bf42d0();
   input += synapse0x3bf4310();
   input += synapse0x3bf4350();
   input += synapse0x3bf4390();
   input += synapse0x3bf43d0();
   input += synapse0x3bf4410();
   input += synapse0x3bf4450();
   input += synapse0x3bf4490();
   input += synapse0x3bf44d0();
   input += synapse0x3bf4510();
   input += synapse0x3bf4550();
   input += synapse0x3bf4590();
   input += synapse0x3bf45d0();
   input += synapse0x3bf4610();
   input += synapse0x3bf4650();
   input += synapse0x3bf40e0();
   input += synapse0x3bf4120();
   input += synapse0x3bf47a0();
   input += synapse0x3bf47e0();
   input += synapse0x3bf4820();
   input += synapse0x3bf4860();
   input += synapse0x3bf48a0();
   input += synapse0x3bf48e0();
   return input;
}

double NNfunction_sg_cR::neuron0x3bf3f50() {
   double input = input0x3bf3f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bf4920() {
   double input = -0.654683;
   input += synapse0x3bf4c60();
   input += synapse0x3bf4ca0();
   input += synapse0x3bf4ce0();
   input += synapse0x3bf4d20();
   input += synapse0x3bf4d60();
   input += synapse0x3bf4da0();
   input += synapse0x3bf4de0();
   input += synapse0x3bf4e20();
   input += synapse0x3bf4e60();
   input += synapse0x3bf4ea0();
   input += synapse0x3bf4ee0();
   input += synapse0x3bf4f20();
   input += synapse0x3bf4f60();
   input += synapse0x3bf4fa0();
   input += synapse0x3bf4fe0();
   input += synapse0x3bf5020();
   input += synapse0x3bf4ab0();
   input += synapse0x3bf4af0();
   input += synapse0x3bf5170();
   input += synapse0x3bf51b0();
   input += synapse0x3bf51f0();
   input += synapse0x3bf5230();
   input += synapse0x3bf5270();
   input += synapse0x3bf52b0();
   return input;
}

double NNfunction_sg_cR::neuron0x3bf4920() {
   double input = input0x3bf4920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bf52f0() {
   double input = 1.79686;
   input += synapse0x3bf5630();
   input += synapse0x3bf5670();
   input += synapse0x3bf56b0();
   input += synapse0x3bf56f0();
   input += synapse0x3bf5730();
   input += synapse0x3bf5770();
   input += synapse0x3bf57b0();
   input += synapse0x3bf57f0();
   input += synapse0x3bf5830();
   input += synapse0x3bf5870();
   input += synapse0x3bf58b0();
   input += synapse0x3bf58f0();
   input += synapse0x3bf5930();
   input += synapse0x3bf5970();
   input += synapse0x3bf59b0();
   input += synapse0x3bf59f0();
   input += synapse0x3bf5480();
   input += synapse0x3bf54c0();
   input += synapse0x3bf5b40();
   input += synapse0x3bf5b80();
   input += synapse0x3bf5bc0();
   input += synapse0x3bf5c00();
   input += synapse0x3bf5c40();
   input += synapse0x3bf5c80();
   return input;
}

double NNfunction_sg_cR::neuron0x3bf52f0() {
   double input = input0x3bf52f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bf5cc0() {
   double input = 1.61601;
   input += synapse0x3bf6000();
   input += synapse0x3bf6040();
   input += synapse0x3bf6080();
   input += synapse0x3bf60c0();
   input += synapse0x3bf6100();
   input += synapse0x3bf6140();
   input += synapse0x3bf6180();
   input += synapse0x3bf61c0();
   input += synapse0x3bf6200();
   input += synapse0x3bf6240();
   input += synapse0x3bf6280();
   input += synapse0x3bf62c0();
   input += synapse0x3bf6300();
   input += synapse0x3bf6340();
   input += synapse0x3bf6380();
   input += synapse0x3bf63c0();
   input += synapse0x3bf5e50();
   input += synapse0x3bf5e90();
   input += synapse0x3bf6510();
   input += synapse0x3bf6550();
   input += synapse0x3bf6590();
   input += synapse0x3bf65d0();
   input += synapse0x3bf6610();
   input += synapse0x3bf6650();
   return input;
}

double NNfunction_sg_cR::neuron0x3bf5cc0() {
   double input = input0x3bf5cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bf6690() {
   double input = -1.77572;
   input += synapse0x3bf69d0();
   input += synapse0x3bf6a10();
   input += synapse0x3bf6a50();
   input += synapse0x3bf6a90();
   input += synapse0x3bf6ad0();
   input += synapse0x3bf6b10();
   input += synapse0x3bf6b50();
   input += synapse0x3bf6b90();
   input += synapse0x3bf6bd0();
   input += synapse0x3bf6c10();
   input += synapse0x3bf6c50();
   input += synapse0x3bf6c90();
   input += synapse0x3bf6cd0();
   input += synapse0x3bf6d10();
   input += synapse0x3bf6d50();
   input += synapse0x3bf6d90();
   input += synapse0x3bf6820();
   input += synapse0x3bf6860();
   input += synapse0x3bf6ee0();
   input += synapse0x3bf6f20();
   input += synapse0x3bf6f60();
   input += synapse0x3bf6fa0();
   input += synapse0x3bf6fe0();
   input += synapse0x3bf7020();
   return input;
}

double NNfunction_sg_cR::neuron0x3bf6690() {
   double input = input0x3bf6690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bf7060() {
   double input = -1.7743;
   input += synapse0x3bf73a0();
   input += synapse0x3beb970();
   input += synapse0x3beb9b0();
   input += synapse0x3beb9f0();
   input += synapse0x3bebc40();
   input += synapse0x3bebc80();
   input += synapse0x3bebcc0();
   input += synapse0x3bebf10();
   input += synapse0x3bebf50();
   input += synapse0x3bec1a0();
   input += synapse0x3bec1e0();
   input += synapse0x3bec220();
   input += synapse0x3bec470();
   input += synapse0x3bec4b0();
   input += synapse0x3bec700();
   input += synapse0x3bec740();
   input += synapse0x3bf71f0();
   input += synapse0x3bf7230();
   input += synapse0x3bec890();
   input += synapse0x3becda0();
   input += synapse0x3becde0();
   input += synapse0x3bece20();
   input += synapse0x3bed070();
   input += synapse0x3bed0b0();
   return input;
}

double NNfunction_sg_cR::neuron0x3bf7060() {
   double input = input0x3bf7060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bed0f0() {
   double input = -0.407145;
   input += synapse0x3bec960();
   input += synapse0x3bec9a0();
   input += synapse0x3bec9e0();
   input += synapse0x3beca20();
   input += synapse0x3bed3a0();
   input += synapse0x3bf96f0();
   input += synapse0x3bf9730();
   input += synapse0x3bf9770();
   input += synapse0x3bf97b0();
   input += synapse0x3bf97f0();
   input += synapse0x3bf9830();
   input += synapse0x3bf9870();
   input += synapse0x3bf98b0();
   input += synapse0x3bf98f0();
   input += synapse0x3bf9930();
   input += synapse0x3bf9970();
   input += synapse0x3bed280();
   input += synapse0x3bed2c0();
   input += synapse0x3bf9ac0();
   input += synapse0x3bf9b00();
   input += synapse0x3bf9b40();
   input += synapse0x3bf9b80();
   input += synapse0x3bf9bc0();
   input += synapse0x3bf9c00();
   return input;
}

double NNfunction_sg_cR::neuron0x3bed0f0() {
   double input = input0x3bed0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bf9c40() {
   double input = 2.46727;
   input += synapse0x3bf9f80();
   input += synapse0x3bf9fc0();
   input += synapse0x3bfa000();
   input += synapse0x3bfa040();
   input += synapse0x3bfa080();
   input += synapse0x3bfa0c0();
   input += synapse0x3bfa100();
   input += synapse0x3bfa140();
   input += synapse0x3bfa180();
   input += synapse0x3bfa1c0();
   input += synapse0x3bfa200();
   input += synapse0x3bfa240();
   input += synapse0x3bfa280();
   input += synapse0x3bfa2c0();
   input += synapse0x3bfa300();
   input += synapse0x3bfa340();
   input += synapse0x3bf9dd0();
   input += synapse0x3bf9e10();
   input += synapse0x3bfa490();
   input += synapse0x3bfa4d0();
   input += synapse0x3bfa510();
   input += synapse0x3bfa550();
   input += synapse0x3bfa590();
   input += synapse0x3bfa5d0();
   return input;
}

double NNfunction_sg_cR::neuron0x3bf9c40() {
   double input = input0x3bf9c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bfa610() {
   double input = 1.64048;
   input += synapse0x3bfa950();
   input += synapse0x3bfa990();
   input += synapse0x3bfa9d0();
   input += synapse0x3bfaa10();
   input += synapse0x3bfaa50();
   input += synapse0x3bfaa90();
   input += synapse0x3bfaad0();
   input += synapse0x3bfab10();
   input += synapse0x3bfab50();
   input += synapse0x3bfab90();
   input += synapse0x3bfabd0();
   input += synapse0x3bfac10();
   input += synapse0x3bfac50();
   input += synapse0x3bfac90();
   input += synapse0x3bfacd0();
   input += synapse0x3bfad10();
   input += synapse0x3bfa7a0();
   input += synapse0x3bfa7e0();
   input += synapse0x3bfae60();
   input += synapse0x3bfaea0();
   input += synapse0x3bfaee0();
   input += synapse0x3bfaf20();
   input += synapse0x3bfaf60();
   input += synapse0x3bfafa0();
   return input;
}

double NNfunction_sg_cR::neuron0x3bfa610() {
   double input = input0x3bfa610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bfafe0() {
   double input = -0.817888;
   input += synapse0x3bfb320();
   input += synapse0x3bfb360();
   input += synapse0x3bfb3a0();
   input += synapse0x3bfb3e0();
   input += synapse0x3bfb420();
   input += synapse0x3bfb460();
   input += synapse0x3bfb4a0();
   input += synapse0x3bfb4e0();
   input += synapse0x3bfb520();
   input += synapse0x3bfb560();
   input += synapse0x3bfb5a0();
   input += synapse0x3bfb5e0();
   input += synapse0x3bfb620();
   input += synapse0x3bfb660();
   input += synapse0x3bfb6a0();
   input += synapse0x3bfb6e0();
   input += synapse0x3bfb170();
   input += synapse0x3bfb1b0();
   input += synapse0x3bfb830();
   input += synapse0x3bfb870();
   input += synapse0x3bfb8b0();
   input += synapse0x3bfb8f0();
   input += synapse0x3bfb930();
   input += synapse0x3bfb970();
   return input;
}

double NNfunction_sg_cR::neuron0x3bfafe0() {
   double input = input0x3bfafe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bfb9b0() {
   double input = 1.2463;
   input += synapse0x3bfbcf0();
   input += synapse0x3bfbd30();
   input += synapse0x3bfbd70();
   input += synapse0x3bfbdb0();
   input += synapse0x3bfbdf0();
   input += synapse0x3bfbe30();
   input += synapse0x3bfbe70();
   input += synapse0x3bfbeb0();
   input += synapse0x3bfbef0();
   input += synapse0x3bfbf30();
   input += synapse0x3bfbf70();
   input += synapse0x3bfbfb0();
   input += synapse0x3bfbff0();
   input += synapse0x3bfc030();
   input += synapse0x3bfc070();
   input += synapse0x3bfc0b0();
   input += synapse0x3bfbb40();
   input += synapse0x3bfbb80();
   input += synapse0x3bfc200();
   input += synapse0x3bfc240();
   input += synapse0x3bfc280();
   input += synapse0x3bfc2c0();
   input += synapse0x3bfc300();
   input += synapse0x3bfc340();
   return input;
}

double NNfunction_sg_cR::neuron0x3bfb9b0() {
   double input = input0x3bfb9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bfc380() {
   double input = -1.59009;
   input += synapse0x3bfc6c0();
   input += synapse0x3bfc700();
   input += synapse0x3bfc740();
   input += synapse0x3bfc780();
   input += synapse0x3bfc7c0();
   input += synapse0x3bfc800();
   input += synapse0x3bfc840();
   input += synapse0x3bfc880();
   input += synapse0x3bfc8c0();
   input += synapse0x3bfc900();
   input += synapse0x3bfc940();
   input += synapse0x3bfc980();
   input += synapse0x3bfc9c0();
   input += synapse0x3bfca00();
   input += synapse0x3bfca40();
   input += synapse0x3bfca80();
   input += synapse0x3bfc510();
   input += synapse0x3bfc550();
   input += synapse0x3bfcbd0();
   input += synapse0x3bfcc10();
   input += synapse0x3bfcc50();
   input += synapse0x3bfcc90();
   input += synapse0x3bfccd0();
   input += synapse0x3bfcd10();
   return input;
}

double NNfunction_sg_cR::neuron0x3bfc380() {
   double input = input0x3bfc380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bfcd50() {
   double input = -0.888834;
   input += synapse0x3bfd090();
   input += synapse0x3bfd0d0();
   input += synapse0x3bfd110();
   input += synapse0x3bfd150();
   input += synapse0x3bfd190();
   input += synapse0x3bfd1d0();
   input += synapse0x3bfd210();
   input += synapse0x3bfd250();
   input += synapse0x3bfd290();
   input += synapse0x3bfd2d0();
   input += synapse0x3bfd310();
   input += synapse0x3bfd350();
   input += synapse0x3bfd390();
   input += synapse0x3bfd3d0();
   input += synapse0x3bfd410();
   input += synapse0x3bfd450();
   input += synapse0x3bfcee0();
   input += synapse0x3bfcf20();
   input += synapse0x3bfd5a0();
   input += synapse0x3bfd5e0();
   input += synapse0x3bfd620();
   input += synapse0x3bfd660();
   input += synapse0x3bfd6a0();
   input += synapse0x3bfd6e0();
   return input;
}

double NNfunction_sg_cR::neuron0x3bfcd50() {
   double input = input0x3bfcd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bfd720() {
   double input = 0.0433622;
   input += synapse0x3bfda60();
   input += synapse0x3bfdaa0();
   input += synapse0x3bfdae0();
   input += synapse0x3bfdb20();
   input += synapse0x3bfdb60();
   input += synapse0x3bfdba0();
   input += synapse0x3bfdbe0();
   input += synapse0x3bfdc20();
   input += synapse0x3bfdc60();
   input += synapse0x3bfdca0();
   input += synapse0x3bfdce0();
   input += synapse0x3bfdd20();
   input += synapse0x3bfdd60();
   input += synapse0x3bfdda0();
   input += synapse0x3bfdde0();
   input += synapse0x3bfde20();
   input += synapse0x3bfd8b0();
   input += synapse0x3bfd8f0();
   input += synapse0x3bfdf70();
   input += synapse0x3bfdfb0();
   input += synapse0x3bfdff0();
   input += synapse0x3bfe030();
   input += synapse0x3bfe070();
   input += synapse0x3bfe0b0();
   return input;
}

double NNfunction_sg_cR::neuron0x3bfd720() {
   double input = input0x3bfd720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bfe0f0() {
   double input = -1.38449;
   input += synapse0x3be6b60();
   input += synapse0x3be6ba0();
   input += synapse0x3be6be0();
   input += synapse0x3be6c20();
   input += synapse0x3be6c60();
   input += synapse0x3be6ca0();
   input += synapse0x3be6ce0();
   input += synapse0x3be6d20();
   input += synapse0x3bfe840();
   input += synapse0x3bfe880();
   input += synapse0x3bfe8c0();
   input += synapse0x3bfe900();
   input += synapse0x3bfe940();
   input += synapse0x3bfe980();
   input += synapse0x3bfe9c0();
   input += synapse0x3bfea00();
   input += synapse0x3bfe280();
   input += synapse0x3bfe2c0();
   input += synapse0x3bfeb50();
   input += synapse0x3bfeb90();
   input += synapse0x3bfebd0();
   input += synapse0x3bfec10();
   input += synapse0x3bfec50();
   input += synapse0x3bfec90();
   return input;
}

double NNfunction_sg_cR::neuron0x3bfe0f0() {
   double input = input0x3bfe0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bfecd0() {
   double input = 0.0107253;
   input += synapse0x3bff010();
   input += synapse0x3bff050();
   input += synapse0x3bff090();
   input += synapse0x3bff0d0();
   input += synapse0x3bff110();
   input += synapse0x3bff150();
   input += synapse0x3bff190();
   input += synapse0x3bff1d0();
   input += synapse0x3bff210();
   input += synapse0x3bff250();
   input += synapse0x3bff290();
   input += synapse0x3bff2d0();
   input += synapse0x3bff310();
   input += synapse0x3bff350();
   input += synapse0x3bff390();
   input += synapse0x3bff3d0();
   input += synapse0x3bfee60();
   input += synapse0x3bfeea0();
   input += synapse0x3bff520();
   input += synapse0x3bff560();
   input += synapse0x3bff5a0();
   input += synapse0x3bff5e0();
   input += synapse0x3bff620();
   input += synapse0x3bff660();
   return input;
}

double NNfunction_sg_cR::neuron0x3bfecd0() {
   double input = input0x3bfecd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bff6a0() {
   double input = 0.547957;
   input += synapse0x3bff9e0();
   input += synapse0x3bffa20();
   input += synapse0x3bffa60();
   input += synapse0x3bffaa0();
   input += synapse0x3bffae0();
   input += synapse0x3bffb20();
   input += synapse0x3bffb60();
   input += synapse0x3bffba0();
   input += synapse0x3bffbe0();
   input += synapse0x3bffc20();
   input += synapse0x3bffc60();
   input += synapse0x3bffca0();
   input += synapse0x3bffce0();
   input += synapse0x3bffd20();
   input += synapse0x3bffd60();
   input += synapse0x3bffda0();
   input += synapse0x3bff830();
   input += synapse0x3bff870();
   input += synapse0x3bf03a0();
   input += synapse0x3bf03e0();
   input += synapse0x3bf0420();
   input += synapse0x3bf0460();
   input += synapse0x3bf04a0();
   input += synapse0x3bf04e0();
   return input;
}

double NNfunction_sg_cR::neuron0x3bff6a0() {
   double input = input0x3bff6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bf0520() {
   double input = 1.14518;
   input += synapse0x3bf0860();
   input += synapse0x3bf08a0();
   input += synapse0x3bf08e0();
   input += synapse0x3bf0920();
   input += synapse0x3bf0960();
   input += synapse0x3bf09a0();
   input += synapse0x3bf09e0();
   input += synapse0x3bf0a20();
   input += synapse0x3bf0a60();
   input += synapse0x3bf0aa0();
   input += synapse0x3bf0ae0();
   input += synapse0x3bf0b20();
   input += synapse0x3bf0b60();
   input += synapse0x3bf0ba0();
   input += synapse0x3bf0be0();
   input += synapse0x3bf0c20();
   input += synapse0x3bf06b0();
   input += synapse0x3bf06f0();
   input += synapse0x3bf0d70();
   input += synapse0x3bf0db0();
   input += synapse0x3bf0df0();
   input += synapse0x3bf0e30();
   input += synapse0x3bf0e70();
   input += synapse0x3bf0eb0();
   return input;
}

double NNfunction_sg_cR::neuron0x3bf0520() {
   double input = input0x3bf0520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bf0ef0() {
   double input = -0.51714;
   input += synapse0x3bf1230();
   input += synapse0x3bf1270();
   input += synapse0x3bf12b0();
   input += synapse0x3bf12f0();
   input += synapse0x3bf1330();
   input += synapse0x3bf1370();
   input += synapse0x3bf13b0();
   input += synapse0x3bf13f0();
   input += synapse0x3bf1430();
   input += synapse0x3bf1470();
   input += synapse0x3bf14b0();
   input += synapse0x3bf14f0();
   input += synapse0x3bf1530();
   input += synapse0x3bf1570();
   input += synapse0x3bf15b0();
   input += synapse0x3bf15f0();
   input += synapse0x3bf1080();
   input += synapse0x3bf10c0();
   input += synapse0x3bf1740();
   input += synapse0x3bf1780();
   input += synapse0x3bf17c0();
   input += synapse0x3bf1800();
   input += synapse0x3bf1840();
   input += synapse0x3bf1880();
   return input;
}

double NNfunction_sg_cR::neuron0x3bf0ef0() {
   double input = input0x3bf0ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3bf18c0() {
   double input = 0.619351;
   input += synapse0x3bf1c00();
   input += synapse0x3bf1c40();
   input += synapse0x3bf1c80();
   input += synapse0x3bf1cc0();
   input += synapse0x3bf1d00();
   input += synapse0x3bf1d40();
   input += synapse0x3bf1d80();
   input += synapse0x3bf1dc0();
   input += synapse0x3bf1e00();
   input += synapse0x3bf1e40();
   input += synapse0x3bf1e80();
   input += synapse0x3bf1ec0();
   input += synapse0x3bf1f00();
   input += synapse0x3bf1f40();
   input += synapse0x3bf1f80();
   input += synapse0x3bf1fc0();
   input += synapse0x3bf1a50();
   input += synapse0x3bf1a90();
   input += synapse0x3bf2110();
   input += synapse0x3bf2150();
   input += synapse0x3bf2190();
   input += synapse0x3bf21d0();
   input += synapse0x3bf2210();
   input += synapse0x3bf2250();
   return input;
}

double NNfunction_sg_cR::neuron0x3bf18c0() {
   double input = input0x3bf18c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3c03f00() {
   double input = 0.088022;
   input += synapse0x3c04120();
   input += synapse0x3c04160();
   input += synapse0x3c041a0();
   input += synapse0x3c041e0();
   input += synapse0x3c04220();
   input += synapse0x3c04260();
   input += synapse0x3c042a0();
   input += synapse0x3c042e0();
   input += synapse0x3c04320();
   input += synapse0x3c04360();
   input += synapse0x3c043a0();
   input += synapse0x3c043e0();
   input += synapse0x3c04420();
   input += synapse0x3c04460();
   input += synapse0x3c044a0();
   input += synapse0x3c044e0();
   input += synapse0x3bf2290();
   input += synapse0x3bf22d0();
   input += synapse0x3c04630();
   input += synapse0x3c04670();
   input += synapse0x3c046b0();
   input += synapse0x3c046f0();
   input += synapse0x3c04730();
   input += synapse0x3c04770();
   return input;
}

double NNfunction_sg_cR::neuron0x3c03f00() {
   double input = input0x3c03f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3c047b0() {
   double input = 1.70306;
   input += synapse0x3c04af0();
   input += synapse0x3c04b30();
   input += synapse0x3c04b70();
   input += synapse0x3c04bb0();
   input += synapse0x3c04bf0();
   input += synapse0x3c04c30();
   input += synapse0x3c04c70();
   input += synapse0x3c04cb0();
   input += synapse0x3c04cf0();
   input += synapse0x3c04d30();
   input += synapse0x3c04d70();
   input += synapse0x3c04db0();
   input += synapse0x3c04df0();
   input += synapse0x3c04e30();
   input += synapse0x3c04e70();
   input += synapse0x3c04eb0();
   input += synapse0x3c04940();
   input += synapse0x3c04980();
   input += synapse0x3c05000();
   input += synapse0x3c05040();
   input += synapse0x3c05080();
   input += synapse0x3c050c0();
   input += synapse0x3c05100();
   input += synapse0x3c05140();
   return input;
}

double NNfunction_sg_cR::neuron0x3c047b0() {
   double input = input0x3c047b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3c05180() {
   double input = -0.518683;
   input += synapse0x3c054c0();
   input += synapse0x3c05500();
   input += synapse0x3c05540();
   input += synapse0x3c05580();
   input += synapse0x3c055c0();
   input += synapse0x3c05600();
   input += synapse0x3c05640();
   input += synapse0x3c05680();
   input += synapse0x3c056c0();
   input += synapse0x3c05700();
   input += synapse0x3c05740();
   input += synapse0x3c05780();
   input += synapse0x3c057c0();
   input += synapse0x3c05800();
   input += synapse0x3c05840();
   input += synapse0x3c05880();
   input += synapse0x3c05310();
   input += synapse0x3c05350();
   input += synapse0x3c059d0();
   input += synapse0x3c05a10();
   input += synapse0x3c05a50();
   input += synapse0x3c05a90();
   input += synapse0x3c05ad0();
   input += synapse0x3c05b10();
   return input;
}

double NNfunction_sg_cR::neuron0x3c05180() {
   double input = input0x3c05180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3c05b50() {
   double input = 2.17078;
   input += synapse0x3c05e90();
   input += synapse0x3c05ed0();
   input += synapse0x3c05f10();
   input += synapse0x3c05f50();
   input += synapse0x3c05f90();
   input += synapse0x3c05fd0();
   input += synapse0x3c06010();
   input += synapse0x3c06050();
   input += synapse0x3c06090();
   input += synapse0x3c060d0();
   input += synapse0x3c06110();
   input += synapse0x3c06150();
   input += synapse0x3c06190();
   input += synapse0x3c061d0();
   input += synapse0x3c06210();
   input += synapse0x3c06250();
   input += synapse0x3c05ce0();
   input += synapse0x3c05d20();
   input += synapse0x3c063a0();
   input += synapse0x3c063e0();
   input += synapse0x3c06420();
   input += synapse0x3c06460();
   input += synapse0x3c064a0();
   input += synapse0x3c064e0();
   return input;
}

double NNfunction_sg_cR::neuron0x3c05b50() {
   double input = input0x3c05b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3c0cd50() {
   double input = 0.46152;
   input += synapse0x39a6310();
   input += synapse0x39a6350();
   input += synapse0x3be2e80();
   input += synapse0x3be2ec0();
   input += synapse0x3be4960();
   input += synapse0x3be49a0();
   input += synapse0x3be5730();
   input += synapse0x3be5770();
   input += synapse0x3be6100();
   input += synapse0x3be6140();
   input += synapse0x3be6ad0();
   input += synapse0x3be6b10();
   input += synapse0x3be75b0();
   input += synapse0x3be75f0();
   input += synapse0x3be7f80();
   input += synapse0x3be7fc0();
   input += synapse0x3be5060();
   input += synapse0x3be50a0();
   input += synapse0x3be9b30();
   input += synapse0x3be9b70();
   input += synapse0x3bea500();
   input += synapse0x3bea540();
   input += synapse0x3beaed0();
   input += synapse0x3beaf10();
   input += synapse0x3beb8a0();
   input += synapse0x3beb8e0();
   input += synapse0x3bde930();
   input += synapse0x3bde970();
   input += synapse0x3bed990();
   input += synapse0x3bed9d0();
   input += synapse0x3bee360();
   input += synapse0x3bee3a0();
   input += synapse0x3beed30();
   input += synapse0x3beed70();
   input += synapse0x3bef700();
   input += synapse0x3bef740();
   input += synapse0x3bf00d0();
   input += synapse0x3bf0110();
   input += synapse0x3be8c20();
   input += synapse0x3be8c60();
   input += synapse0x3bf24d0();
   input += synapse0x3bf2510();
   input += synapse0x3bf2e60();
   input += synapse0x3bf2ea0();
   input += synapse0x3bf3830();
   input += synapse0x3bf3870();
   input += synapse0x3bf4200();
   input += synapse0x3bf4240();
   input += synapse0x3bf4bd0();
   input += synapse0x3bf4c10();
   return input;
}

double NNfunction_sg_cR::neuron0x3c0cd50() {
   double input = input0x3c0cd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3c0d0f0() {
   double input = -0.0380261;
   input += synapse0x3bf7310();
   input += synapse0x3bf7350();
   input += synapse0x3bec8d0();
   input += synapse0x3bec910();
   input += synapse0x3bf9ef0();
   input += synapse0x3bf9f30();
   input += synapse0x3bfa8c0();
   input += synapse0x3bfa900();
   input += synapse0x3bfb290();
   input += synapse0x3bfb2d0();
   input += synapse0x3bfbc60();
   input += synapse0x3bfbca0();
   input += synapse0x3bfc630();
   input += synapse0x3bfc670();
   input += synapse0x3bfd000();
   input += synapse0x3bfd040();
   input += synapse0x3bfd9d0();
   input += synapse0x3bfda10();
   input += synapse0x3bfe3a0();
   input += synapse0x3bfe3e0();
   input += synapse0x3bfef80();
   input += synapse0x3bfefc0();
   input += synapse0x3bff950();
   input += synapse0x3bff990();
   input += synapse0x3bf07d0();
   input += synapse0x3bf0810();
   input += synapse0x3bf11a0();
   input += synapse0x3bf11e0();
   input += synapse0x3bf1b70();
   input += synapse0x3bf1bb0();
   input += synapse0x3c04090();
   input += synapse0x3c040d0();
   input += synapse0x3c04a60();
   input += synapse0x3c04aa0();
   input += synapse0x3c05430();
   input += synapse0x3c05470();
   input += synapse0x3c05e00();
   input += synapse0x3c05e40();
   input += synapse0x3be0c70();
   input += synapse0x3be0cb0();
   input += synapse0x3bf55a0();
   input += synapse0x3bf55e0();
   input += synapse0x3c06520();
   input += synapse0x3c06560();
   input += synapse0x3c065a0();
   input += synapse0x3c065e0();
   input += synapse0x3c0d490();
   input += synapse0x3c0d4d0();
   input += synapse0x3c0d510();
   input += synapse0x3c0d550();
   return input;
}

double NNfunction_sg_cR::neuron0x3c0d0f0() {
   double input = input0x3c0d0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3c0d590() {
   double input = -0.0813567;
   input += synapse0x3c0d8d0();
   input += synapse0x3c0d910();
   input += synapse0x3c0d950();
   input += synapse0x3c0d990();
   input += synapse0x3c0d9d0();
   input += synapse0x3c0da10();
   input += synapse0x3c0da50();
   input += synapse0x3c0da90();
   input += synapse0x3c0dad0();
   input += synapse0x3c0db10();
   input += synapse0x3c0db50();
   input += synapse0x3c0db90();
   input += synapse0x3c0dbd0();
   input += synapse0x3c0dc10();
   input += synapse0x3c0dc50();
   input += synapse0x3c0dc90();
   input += synapse0x3c0d720();
   input += synapse0x3c0d760();
   input += synapse0x3c0dde0();
   input += synapse0x3c0de20();
   input += synapse0x3c0de60();
   input += synapse0x3c0dea0();
   input += synapse0x3c0dee0();
   input += synapse0x3c0df20();
   input += synapse0x3c0df60();
   input += synapse0x3c0dfa0();
   input += synapse0x3c0dfe0();
   input += synapse0x3c0e020();
   input += synapse0x3c0e060();
   input += synapse0x3c0e0a0();
   input += synapse0x3c0e0e0();
   input += synapse0x3c0e120();
   input += synapse0x3c0dcd0();
   input += synapse0x3c0dd10();
   input += synapse0x3c0dd50();
   input += synapse0x3c0dd90();
   input += synapse0x3c0e370();
   input += synapse0x3c0e3b0();
   input += synapse0x3c0e3f0();
   input += synapse0x3c0e430();
   input += synapse0x3c0e470();
   input += synapse0x3c0e4b0();
   input += synapse0x3c0e4f0();
   input += synapse0x3c0e530();
   input += synapse0x3c0e570();
   input += synapse0x3c0e5b0();
   input += synapse0x3c0e5f0();
   input += synapse0x3c0e630();
   input += synapse0x3c0e670();
   input += synapse0x3c0e6b0();
   return input;
}

double NNfunction_sg_cR::neuron0x3c0d590() {
   double input = input0x3c0d590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3c0e6f0() {
   double input = -0.573151;
   input += synapse0x3c0ea30();
   input += synapse0x3c0ea70();
   input += synapse0x3c0eab0();
   input += synapse0x3c0eaf0();
   input += synapse0x3c0eb30();
   input += synapse0x3c0eb70();
   input += synapse0x3c0ebb0();
   input += synapse0x3c0ebf0();
   input += synapse0x3c0ec30();
   input += synapse0x3c0ec70();
   input += synapse0x3c0ecb0();
   input += synapse0x3c0ecf0();
   input += synapse0x3c0ed30();
   input += synapse0x3c0ed70();
   input += synapse0x3c0edb0();
   input += synapse0x3c0edf0();
   input += synapse0x3c0e880();
   input += synapse0x3c0e8c0();
   input += synapse0x3c0ef40();
   input += synapse0x3c0ef80();
   input += synapse0x3c0efc0();
   input += synapse0x3c0f000();
   input += synapse0x3c0f040();
   input += synapse0x3c0f080();
   input += synapse0x3c0f0c0();
   input += synapse0x3c0f100();
   input += synapse0x3c0f140();
   input += synapse0x3c0f180();
   input += synapse0x3c0f1c0();
   input += synapse0x3c0f200();
   input += synapse0x3c0f240();
   input += synapse0x3c0f280();
   input += synapse0x3c0ee30();
   input += synapse0x3c0ee70();
   input += synapse0x3c0eeb0();
   input += synapse0x3c0eef0();
   input += synapse0x3c0f4d0();
   input += synapse0x3c0f510();
   input += synapse0x3c0f550();
   input += synapse0x3c0f590();
   input += synapse0x3c0f5d0();
   input += synapse0x3c0f610();
   input += synapse0x3c0f650();
   input += synapse0x3c0f690();
   input += synapse0x3c0f6d0();
   input += synapse0x3c0f710();
   input += synapse0x3c0f750();
   input += synapse0x3c0f790();
   input += synapse0x3c0f7d0();
   input += synapse0x3c0f810();
   return input;
}

double NNfunction_sg_cR::neuron0x3c0e6f0() {
   double input = input0x3c0e6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3c0f850() {
   double input = 0.163054;
   input += synapse0x3c0fb90();
   input += synapse0x3c0fbd0();
   input += synapse0x3c0fc10();
   input += synapse0x3c0fc50();
   input += synapse0x3c0fc90();
   input += synapse0x3c0fcd0();
   input += synapse0x3c0fd10();
   input += synapse0x3c0fd50();
   input += synapse0x3c0fd90();
   input += synapse0x3c0fdd0();
   input += synapse0x3c0fe10();
   input += synapse0x3c0fe50();
   input += synapse0x3c0fe90();
   input += synapse0x3c0fed0();
   input += synapse0x3c0ff10();
   input += synapse0x3c0ff50();
   input += synapse0x3c0f9e0();
   input += synapse0x3c0fa20();
   input += synapse0x3c100a0();
   input += synapse0x3c100e0();
   input += synapse0x3c10120();
   input += synapse0x3c10160();
   input += synapse0x3c101a0();
   input += synapse0x3c101e0();
   input += synapse0x3c10220();
   input += synapse0x3c10260();
   input += synapse0x3c102a0();
   input += synapse0x3c102e0();
   input += synapse0x3c10320();
   input += synapse0x3c10360();
   input += synapse0x3c103a0();
   input += synapse0x3c103e0();
   input += synapse0x3c0ff90();
   input += synapse0x3c0ffd0();
   input += synapse0x3c10010();
   input += synapse0x3c10050();
   input += synapse0x3c10630();
   input += synapse0x3c10670();
   input += synapse0x3c106b0();
   input += synapse0x3c106f0();
   input += synapse0x3c10730();
   input += synapse0x3c10770();
   input += synapse0x3c107b0();
   input += synapse0x3c107f0();
   input += synapse0x3c10830();
   input += synapse0x3c10870();
   input += synapse0x3c108b0();
   input += synapse0x3c108f0();
   input += synapse0x3c10930();
   input += synapse0x3c10970();
   return input;
}

double NNfunction_sg_cR::neuron0x3c0f850() {
   double input = input0x3c0f850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_cR::input0x3c109b0() {
   double input = -0.970915;
   input += synapse0x3c10bd0();
   input += synapse0x3c10c10();
   input += synapse0x3c10c50();
   input += synapse0x3c10c90();
   input += synapse0x3c10cd0();
   return input;
}

double NNfunction_sg_cR::neuron0x3c109b0() {
   double input = input0x3c109b0();
   return (input * 1)+0;
}

double NNfunction_sg_cR::synapse0x3be0d00() {
   return (neuron0x3bdba20()*-0.0684582);
}

double NNfunction_sg_cR::synapse0x3be0d40() {
   return (neuron0x3bdbcd0()*0.177018);
}

double NNfunction_sg_cR::synapse0x3be0d80() {
   return (neuron0x3bdc010()*-0.155136);
}

double NNfunction_sg_cR::synapse0x3be0dc0() {
   return (neuron0x3bdc350()*-0.727291);
}

double NNfunction_sg_cR::synapse0x3be0e00() {
   return (neuron0x3bdc690()*0.26896);
}

double NNfunction_sg_cR::synapse0x3be0e40() {
   return (neuron0x3bdc9d0()*0.288473);
}

double NNfunction_sg_cR::synapse0x3be0e80() {
   return (neuron0x3bdcd10()*-0.503303);
}

double NNfunction_sg_cR::synapse0x3be0ec0() {
   return (neuron0x3bdd050()*-0.195291);
}

double NNfunction_sg_cR::synapse0x3be0f00() {
   return (neuron0x3bdd390()*-0.0578237);
}

double NNfunction_sg_cR::synapse0x3be0f40() {
   return (neuron0x3bdd6d0()*-0.0753795);
}

double NNfunction_sg_cR::synapse0x3be0f80() {
   return (neuron0x3bdda10()*0.0323357);
}

double NNfunction_sg_cR::synapse0x3be0fc0() {
   return (neuron0x3bddd50()*0.0461787);
}

double NNfunction_sg_cR::synapse0x3be1000() {
   return (neuron0x3bde090()*0.041905);
}

double NNfunction_sg_cR::synapse0x3be1040() {
   return (neuron0x3bde3d0()*-0.0422208);
}

double NNfunction_sg_cR::synapse0x3be1080() {
   return (neuron0x3bde710()*-0.405652);
}

double NNfunction_sg_cR::synapse0x3be10c0() {
   return (neuron0x3bdea50()*-0.654933);
}

double NNfunction_sg_cR::synapse0x3be0b50() {
   return (neuron0x3bded90()*0.536557);
}

double NNfunction_sg_cR::synapse0x3be0b90() {
   return (neuron0x3bdf2f0()*0.00188909);
}

double NNfunction_sg_cR::synapse0x2b1ecd0() {
   return (neuron0x3bdf510()*-0.0168398);
}

double NNfunction_sg_cR::synapse0x2b1ed10() {
   return (neuron0x3bdf850()*0.123845);
}

double NNfunction_sg_cR::synapse0x3be1210() {
   return (neuron0x3bdfb90()*-0.0691847);
}

double NNfunction_sg_cR::synapse0x3be1250() {
   return (neuron0x3bdfed0()*-0.0582312);
}

double NNfunction_sg_cR::synapse0x3be1290() {
   return (neuron0x3be0210()*-0.0566022);
}

double NNfunction_sg_cR::synapse0x3be12d0() {
   return (neuron0x3be0550()*0.212545);
}

double NNfunction_sg_cR::synapse0x3be1650() {
   return (neuron0x3bdba20()*-0.00554052);
}

double NNfunction_sg_cR::synapse0x3be1690() {
   return (neuron0x3bdbcd0()*-0.0291705);
}

double NNfunction_sg_cR::synapse0x3be16d0() {
   return (neuron0x3bdc010()*-0.00322613);
}

double NNfunction_sg_cR::synapse0x3be1710() {
   return (neuron0x3bdc350()*-1.49995);
}

double NNfunction_sg_cR::synapse0x3be1750() {
   return (neuron0x3bdc690()*-0.0204628);
}

double NNfunction_sg_cR::synapse0x3be1790() {
   return (neuron0x3bdc9d0()*-0.00502328);
}

double NNfunction_sg_cR::synapse0x3be17d0() {
   return (neuron0x3bdcd10()*-0.00674016);
}

double NNfunction_sg_cR::synapse0x3be1810() {
   return (neuron0x3bdd050()*-0.00671627);
}

double NNfunction_sg_cR::synapse0x3be1850() {
   return (neuron0x3bdd390()*0.00999859);
}

double NNfunction_sg_cR::synapse0x3be1100() {
   return (neuron0x3bdd6d0()*0.00194529);
}

double NNfunction_sg_cR::synapse0x3be1140() {
   return (neuron0x3bdda10()*0.0223945);
}

double NNfunction_sg_cR::synapse0x3be1180() {
   return (neuron0x3bddd50()*0.0250812);
}

double NNfunction_sg_cR::synapse0x3be11c0() {
   return (neuron0x3bde090()*0.0227264);
}

double NNfunction_sg_cR::synapse0x3be1aa0() {
   return (neuron0x3bde3d0()*0.00698563);
}

double NNfunction_sg_cR::synapse0x3be1ae0() {
   return (neuron0x3bde710()*0.0108556);
}

double NNfunction_sg_cR::synapse0x3be1b20() {
   return (neuron0x3bdea50()*-0.469433);
}

double NNfunction_sg_cR::synapse0x3be14a0() {
   return (neuron0x3bded90()*-0.001904);
}

double NNfunction_sg_cR::synapse0x3be14e0() {
   return (neuron0x3bdf2f0()*0.00906855);
}

double NNfunction_sg_cR::synapse0x3be1c70() {
   return (neuron0x3bdf510()*0.0177935);
}

double NNfunction_sg_cR::synapse0x3be1cb0() {
   return (neuron0x3bdf850()*-0.00180591);
}

double NNfunction_sg_cR::synapse0x3be1cf0() {
   return (neuron0x3bdfb90()*-0.00517271);
}

double NNfunction_sg_cR::synapse0x3be1d30() {
   return (neuron0x3bdfed0()*0.00225544);
}

double NNfunction_sg_cR::synapse0x3be1d70() {
   return (neuron0x3be0210()*0.0043731);
}

double NNfunction_sg_cR::synapse0x3be1db0() {
   return (neuron0x3be0550()*0.00402968);
}

double NNfunction_sg_cR::synapse0x3be2130() {
   return (neuron0x3bdba20()*0.00263014);
}

double NNfunction_sg_cR::synapse0x3be2170() {
   return (neuron0x3bdbcd0()*0.0154146);
}

double NNfunction_sg_cR::synapse0x3be21b0() {
   return (neuron0x3bdc010()*0.0069158);
}

double NNfunction_sg_cR::synapse0x3be21f0() {
   return (neuron0x3bdc350()*-6.48782);
}

double NNfunction_sg_cR::synapse0x3be2230() {
   return (neuron0x3bdc690()*0.00656903);
}

double NNfunction_sg_cR::synapse0x3be2270() {
   return (neuron0x3bdc9d0()*0.00404504);
}

double NNfunction_sg_cR::synapse0x3be22b0() {
   return (neuron0x3bdcd10()*0.00759682);
}

double NNfunction_sg_cR::synapse0x3be22f0() {
   return (neuron0x3bdd050()*-0.00710397);
}

double NNfunction_sg_cR::synapse0x3be2330() {
   return (neuron0x3bdd390()*-0.00838928);
}

double NNfunction_sg_cR::synapse0x3be2370() {
   return (neuron0x3bdd6d0()*0.00770065);
}

double NNfunction_sg_cR::synapse0x3be23b0() {
   return (neuron0x3bdda10()*-0.00411382);
}

double NNfunction_sg_cR::synapse0x3be23f0() {
   return (neuron0x3bddd50()*0.00975403);
}

double NNfunction_sg_cR::synapse0x3be2430() {
   return (neuron0x3bde090()*0.0117019);
}

double NNfunction_sg_cR::synapse0x3be2470() {
   return (neuron0x3bde3d0()*-0.00882694);
}

double NNfunction_sg_cR::synapse0x3be24b0() {
   return (neuron0x3bde710()*0.00394312);
}

double NNfunction_sg_cR::synapse0x3be24f0() {
   return (neuron0x3bdea50()*0.221237);
}

double NNfunction_sg_cR::synapse0x3be1f80() {
   return (neuron0x3bded90()*-0.00644362);
}

double NNfunction_sg_cR::synapse0x3be1fc0() {
   return (neuron0x3bdf2f0()*0.0189942);
}

double NNfunction_sg_cR::synapse0x2b1fcb0() {
   return (neuron0x3bdf510()*-0.000412536);
}

double NNfunction_sg_cR::synapse0x39a5b20() {
   return (neuron0x3bdf850()*-0.028045);
}

double NNfunction_sg_cR::synapse0x39a5b60() {
   return (neuron0x3bdfb90()*-0.00548581);
}

double NNfunction_sg_cR::synapse0x3be4430() {
   return (neuron0x3bdfed0()*0.00814688);
}

double NNfunction_sg_cR::synapse0x3be4470() {
   return (neuron0x3be0210()*-0.00633454);
}

double NNfunction_sg_cR::synapse0x3bdb760() {
   return (neuron0x3be0550()*0.000608319);
}

double NNfunction_sg_cR::synapse0x3bdb830() {
   return (neuron0x3bdba20()*-0.00528459);
}

double NNfunction_sg_cR::synapse0x39a63a0() {
   return (neuron0x3bdbcd0()*-0.0327743);
}

double NNfunction_sg_cR::synapse0x3be1a20() {
   return (neuron0x3bdc010()*0.00350977);
}

double NNfunction_sg_cR::synapse0x3be1a60() {
   return (neuron0x3bdc350()*0.535247);
}

double NNfunction_sg_cR::synapse0x3be2640() {
   return (neuron0x3bdc690()*-0.0358882);
}

double NNfunction_sg_cR::synapse0x3be2680() {
   return (neuron0x3bdc9d0()*-0.0205897);
}

double NNfunction_sg_cR::synapse0x3be26c0() {
   return (neuron0x3bdcd10()*-0.0134549);
}

double NNfunction_sg_cR::synapse0x3be2700() {
   return (neuron0x3bdd050()*0.0308949);
}

double NNfunction_sg_cR::synapse0x3be2740() {
   return (neuron0x3bdd390()*-0.0154282);
}

double NNfunction_sg_cR::synapse0x3be2780() {
   return (neuron0x3bdd6d0()*-0.0472697);
}

double NNfunction_sg_cR::synapse0x3be27c0() {
   return (neuron0x3bdda10()*-0.00237688);
}

double NNfunction_sg_cR::synapse0x3be2800() {
   return (neuron0x3bddd50()*-0.0640241);
}

double NNfunction_sg_cR::synapse0x3be2840() {
   return (neuron0x3bde090()*-0.0562698);
}

double NNfunction_sg_cR::synapse0x3be2880() {
   return (neuron0x3bde3d0()*0.041499);
}

double NNfunction_sg_cR::synapse0x3be28c0() {
   return (neuron0x3bde710()*-0.0457915);
}

double NNfunction_sg_cR::synapse0x3be2900() {
   return (neuron0x3bdea50()*2.12051);
}

double NNfunction_sg_cR::synapse0x3bdb7a0() {
   return (neuron0x3bded90()*0.0060198);
}

double NNfunction_sg_cR::synapse0x3bdb7e0() {
   return (neuron0x3bdf2f0()*-0.0482284);
}

double NNfunction_sg_cR::synapse0x3be2a50() {
   return (neuron0x3bdf510()*-0.0200453);
}

double NNfunction_sg_cR::synapse0x3be2a90() {
   return (neuron0x3bdf850()*-0.0237811);
}

double NNfunction_sg_cR::synapse0x3be2ad0() {
   return (neuron0x3bdfb90()*-0.0111636);
}

double NNfunction_sg_cR::synapse0x3be2b10() {
   return (neuron0x3bdfed0()*0.0127868);
}

double NNfunction_sg_cR::synapse0x3be2b50() {
   return (neuron0x3be0210()*0.00913453);
}

double NNfunction_sg_cR::synapse0x3be2b90() {
   return (neuron0x3be0550()*0.0271021);
}

double NNfunction_sg_cR::synapse0x3be2f10() {
   return (neuron0x3bdba20()*-0.0610279);
}

double NNfunction_sg_cR::synapse0x3be2f50() {
   return (neuron0x3bdbcd0()*-0.031084);
}

double NNfunction_sg_cR::synapse0x3be2f90() {
   return (neuron0x3bdc010()*-0.015262);
}

double NNfunction_sg_cR::synapse0x3be2fd0() {
   return (neuron0x3bdc350()*0.959053);
}

double NNfunction_sg_cR::synapse0x3be3010() {
   return (neuron0x3bdc690()*-0.157074);
}

double NNfunction_sg_cR::synapse0x3be3050() {
   return (neuron0x3bdc9d0()*-0.147657);
}

double NNfunction_sg_cR::synapse0x3be3090() {
   return (neuron0x3bdcd10()*-0.0537557);
}

double NNfunction_sg_cR::synapse0x3be30d0() {
   return (neuron0x3bdd050()*0.11028);
}

double NNfunction_sg_cR::synapse0x3be3110() {
   return (neuron0x3bdd390()*0.0313873);
}

double NNfunction_sg_cR::synapse0x3be3150() {
   return (neuron0x3bdd6d0()*0.0291789);
}

double NNfunction_sg_cR::synapse0x3be3190() {
   return (neuron0x3bdda10()*0.00378976);
}

double NNfunction_sg_cR::synapse0x3be31d0() {
   return (neuron0x3bddd50()*0.125456);
}

double NNfunction_sg_cR::synapse0x3be3210() {
   return (neuron0x3bde090()*0.143779);
}

double NNfunction_sg_cR::synapse0x3be3250() {
   return (neuron0x3bde3d0()*0.0539185);
}

double NNfunction_sg_cR::synapse0x3be3290() {
   return (neuron0x3bde710()*-0.0573736);
}

double NNfunction_sg_cR::synapse0x3be32d0() {
   return (neuron0x3bdea50()*0.776299);
}

double NNfunction_sg_cR::synapse0x3be3420() {
   return (neuron0x3bded90()*0.0734064);
}

double NNfunction_sg_cR::synapse0x3be2d60() {
   return (neuron0x3bdf2f0()*0.0214115);
}

double NNfunction_sg_cR::synapse0x3be2da0() {
   return (neuron0x3bdf510()*0.0848506);
}

double NNfunction_sg_cR::synapse0x3be4570() {
   return (neuron0x3bdf850()*0.119715);
}

double NNfunction_sg_cR::synapse0x3be45b0() {
   return (neuron0x3bdfb90()*-0.0245972);
}

double NNfunction_sg_cR::synapse0x3be45f0() {
   return (neuron0x3bdfed0()*0.0837484);
}

double NNfunction_sg_cR::synapse0x3be4630() {
   return (neuron0x3be0210()*-0.0856143);
}

double NNfunction_sg_cR::synapse0x3be4670() {
   return (neuron0x3be0550()*0.0512706);
}

double NNfunction_sg_cR::synapse0x3be49f0() {
   return (neuron0x3bdba20()*0.0428762);
}

double NNfunction_sg_cR::synapse0x3be4a30() {
   return (neuron0x3bdbcd0()*-0.0909008);
}

double NNfunction_sg_cR::synapse0x3be4a70() {
   return (neuron0x3bdc010()*0.14058);
}

double NNfunction_sg_cR::synapse0x3be4ab0() {
   return (neuron0x3bdc350()*-0.283454);
}

double NNfunction_sg_cR::synapse0x3be4af0() {
   return (neuron0x3bdc690()*-0.300285);
}

double NNfunction_sg_cR::synapse0x3be4b30() {
   return (neuron0x3bdc9d0()*0.110248);
}

double NNfunction_sg_cR::synapse0x3be4b70() {
   return (neuron0x3bdcd10()*-0.0418743);
}

double NNfunction_sg_cR::synapse0x3be4bb0() {
   return (neuron0x3bdd050()*0.178446);
}

double NNfunction_sg_cR::synapse0x3be4bf0() {
   return (neuron0x3bdd390()*0.105637);
}

double NNfunction_sg_cR::synapse0x39a5e70() {
   return (neuron0x3bdd6d0()*-0.1973);
}

double NNfunction_sg_cR::synapse0x39a5eb0() {
   return (neuron0x3bdda10()*0.0514959);
}

double NNfunction_sg_cR::synapse0x39a5ef0() {
   return (neuron0x3bddd50()*-0.0389193);
}

double NNfunction_sg_cR::synapse0x39a5f30() {
   return (neuron0x3bde090()*-0.103445);
}

double NNfunction_sg_cR::synapse0x39a5f70() {
   return (neuron0x3bde3d0()*-0.0243862);
}

double NNfunction_sg_cR::synapse0x39a5fb0() {
   return (neuron0x3bde710()*0.048894);
}

double NNfunction_sg_cR::synapse0x39a5ff0() {
   return (neuron0x3bdea50()*-1.09999);
}

double NNfunction_sg_cR::synapse0x3be4840() {
   return (neuron0x3bded90()*-0.0648283);
}

double NNfunction_sg_cR::synapse0x3be4880() {
   return (neuron0x3bdf2f0()*-0.111047);
}

double NNfunction_sg_cR::synapse0x39a6140() {
   return (neuron0x3bdf510()*0.00334049);
}

double NNfunction_sg_cR::synapse0x39a6180() {
   return (neuron0x3bdf850()*0.00669268);
}

double NNfunction_sg_cR::synapse0x39a61c0() {
   return (neuron0x3bdfb90()*-0.0488899);
}

double NNfunction_sg_cR::synapse0x39a6200() {
   return (neuron0x3bdfed0()*0.0642047);
}

double NNfunction_sg_cR::synapse0x39a6240() {
   return (neuron0x3be0210()*0.0807831);
}

double NNfunction_sg_cR::synapse0x3be5440() {
   return (neuron0x3be0550()*0.0322389);
}

double NNfunction_sg_cR::synapse0x3be57c0() {
   return (neuron0x3bdba20()*-0.0147513);
}

double NNfunction_sg_cR::synapse0x3be5800() {
   return (neuron0x3bdbcd0()*0.128641);
}

double NNfunction_sg_cR::synapse0x3be5840() {
   return (neuron0x3bdc010()*0.0247804);
}

double NNfunction_sg_cR::synapse0x3be5880() {
   return (neuron0x3bdc350()*-4.74751);
}

double NNfunction_sg_cR::synapse0x3be58c0() {
   return (neuron0x3bdc690()*0.0212912);
}

double NNfunction_sg_cR::synapse0x3be5900() {
   return (neuron0x3bdc9d0()*-0.00374365);
}

double NNfunction_sg_cR::synapse0x3be5940() {
   return (neuron0x3bdcd10()*0.0359568);
}

double NNfunction_sg_cR::synapse0x3be5980() {
   return (neuron0x3bdd050()*-0.0500669);
}

double NNfunction_sg_cR::synapse0x3be59c0() {
   return (neuron0x3bdd390()*-0.0160573);
}

double NNfunction_sg_cR::synapse0x3be5a00() {
   return (neuron0x3bdd6d0()*0.0390729);
}

double NNfunction_sg_cR::synapse0x3be5a40() {
   return (neuron0x3bdda10()*-0.0145399);
}

double NNfunction_sg_cR::synapse0x3be5a80() {
   return (neuron0x3bddd50()*-0.204067);
}

double NNfunction_sg_cR::synapse0x3be5ac0() {
   return (neuron0x3bde090()*-0.0178666);
}

double NNfunction_sg_cR::synapse0x3be5b00() {
   return (neuron0x3bde3d0()*-0.000318821);
}

double NNfunction_sg_cR::synapse0x3be5b40() {
   return (neuron0x3bde710()*-0.0469749);
}

double NNfunction_sg_cR::synapse0x3be5b80() {
   return (neuron0x3bdea50()*-0.0939878);
}

double NNfunction_sg_cR::synapse0x3be5610() {
   return (neuron0x3bded90()*0.00228305);
}

double NNfunction_sg_cR::synapse0x3be5650() {
   return (neuron0x3bdf2f0()*-0.0799561);
}

double NNfunction_sg_cR::synapse0x3be5cd0() {
   return (neuron0x3bdf510()*-0.0685594);
}

double NNfunction_sg_cR::synapse0x3be5d10() {
   return (neuron0x3bdf850()*-0.0540576);
}

double NNfunction_sg_cR::synapse0x3be5d50() {
   return (neuron0x3bdfb90()*-0.0134052);
}

double NNfunction_sg_cR::synapse0x3be5d90() {
   return (neuron0x3bdfed0()*0.0106261);
}

double NNfunction_sg_cR::synapse0x3be5dd0() {
   return (neuron0x3be0210()*-0.00542834);
}

double NNfunction_sg_cR::synapse0x3be5e10() {
   return (neuron0x3be0550()*0.0391271);
}

double NNfunction_sg_cR::synapse0x3be6190() {
   return (neuron0x3bdba20()*0.0127179);
}

double NNfunction_sg_cR::synapse0x3be61d0() {
   return (neuron0x3bdbcd0()*0.461443);
}

double NNfunction_sg_cR::synapse0x3be6210() {
   return (neuron0x3bdc010()*0.00827676);
}

double NNfunction_sg_cR::synapse0x3be6250() {
   return (neuron0x3bdc350()*-0.0349854);
}

double NNfunction_sg_cR::synapse0x3be6290() {
   return (neuron0x3bdc690()*-0.011748);
}

double NNfunction_sg_cR::synapse0x3be62d0() {
   return (neuron0x3bdc9d0()*0.042406);
}

double NNfunction_sg_cR::synapse0x3be6310() {
   return (neuron0x3bdcd10()*-0.0278168);
}

double NNfunction_sg_cR::synapse0x3be6350() {
   return (neuron0x3bdd050()*0.0279735);
}

double NNfunction_sg_cR::synapse0x3be6390() {
   return (neuron0x3bdd390()*0.0403771);
}

double NNfunction_sg_cR::synapse0x3be63d0() {
   return (neuron0x3bdd6d0()*-0.334708);
}

double NNfunction_sg_cR::synapse0x3be6410() {
   return (neuron0x3bdda10()*0.0590525);
}

double NNfunction_sg_cR::synapse0x3be6450() {
   return (neuron0x3bddd50()*0.0938488);
}

double NNfunction_sg_cR::synapse0x3be6490() {
   return (neuron0x3bde090()*-0.0199352);
}

double NNfunction_sg_cR::synapse0x3be64d0() {
   return (neuron0x3bde3d0()*0.14637);
}

double NNfunction_sg_cR::synapse0x3be6510() {
   return (neuron0x3bde710()*-0.0649431);
}

double NNfunction_sg_cR::synapse0x3be6550() {
   return (neuron0x3bdea50()*-0.812219);
}

double NNfunction_sg_cR::synapse0x3be5fe0() {
   return (neuron0x3bded90()*0.0415887);
}

double NNfunction_sg_cR::synapse0x3be6020() {
   return (neuron0x3bdf2f0()*-0.102451);
}

double NNfunction_sg_cR::synapse0x3be66a0() {
   return (neuron0x3bdf510()*-0.370715);
}

double NNfunction_sg_cR::synapse0x3be66e0() {
   return (neuron0x3bdf850()*-0.0701445);
}

double NNfunction_sg_cR::synapse0x3be6720() {
   return (neuron0x3bdfb90()*0.0242254);
}

double NNfunction_sg_cR::synapse0x3be6760() {
   return (neuron0x3bdfed0()*-0.00776249);
}

double NNfunction_sg_cR::synapse0x3be67a0() {
   return (neuron0x3be0210()*-0.00298174);
}

double NNfunction_sg_cR::synapse0x3be67e0() {
   return (neuron0x3be0550()*0.0370555);
}

double NNfunction_sg_cR::synapse0x3bdf1e0() {
   return (neuron0x3bdba20()*0.0389375);
}

double NNfunction_sg_cR::synapse0x3bdf220() {
   return (neuron0x3bdbcd0()*0.164178);
}

double NNfunction_sg_cR::synapse0x3bdf260() {
   return (neuron0x3bdc010()*-0.0306823);
}

double NNfunction_sg_cR::synapse0x3bdf2a0() {
   return (neuron0x3bdc350()*0.249016);
}

double NNfunction_sg_cR::synapse0x3be6d70() {
   return (neuron0x3bdc690()*0.227987);
}

double NNfunction_sg_cR::synapse0x3be6db0() {
   return (neuron0x3bdc9d0()*0.171132);
}

double NNfunction_sg_cR::synapse0x3be6df0() {
   return (neuron0x3bdcd10()*0.250006);
}

double NNfunction_sg_cR::synapse0x3be6e30() {
   return (neuron0x3bdd050()*-0.103706);
}

double NNfunction_sg_cR::synapse0x3be6e70() {
   return (neuron0x3bdd390()*0.227579);
}

double NNfunction_sg_cR::synapse0x3be6eb0() {
   return (neuron0x3bdd6d0()*-0.732616);
}

double NNfunction_sg_cR::synapse0x3be6ef0() {
   return (neuron0x3bdda10()*-0.404979);
}

double NNfunction_sg_cR::synapse0x3be6f30() {
   return (neuron0x3bddd50()*-0.0176203);
}

double NNfunction_sg_cR::synapse0x3be6f70() {
   return (neuron0x3bde090()*0.0706931);
}

double NNfunction_sg_cR::synapse0x3be6fb0() {
   return (neuron0x3bde3d0()*-0.297712);
}

double NNfunction_sg_cR::synapse0x3be6ff0() {
   return (neuron0x3bde710()*0.0717109);
}

double NNfunction_sg_cR::synapse0x3be7030() {
   return (neuron0x3bdea50()*0.986425);
}

double NNfunction_sg_cR::synapse0x3be69b0() {
   return (neuron0x3bded90()*-0.0921001);
}

double NNfunction_sg_cR::synapse0x3be69f0() {
   return (neuron0x3bdf2f0()*0.24269);
}

double NNfunction_sg_cR::synapse0x3be7180() {
   return (neuron0x3bdf510()*0.0690907);
}

double NNfunction_sg_cR::synapse0x3be71c0() {
   return (neuron0x3bdf850()*0.183541);
}

double NNfunction_sg_cR::synapse0x3be7200() {
   return (neuron0x3bdfb90()*-0.0459674);
}

double NNfunction_sg_cR::synapse0x3be7240() {
   return (neuron0x3bdfed0()*-0.136607);
}

double NNfunction_sg_cR::synapse0x3be7280() {
   return (neuron0x3be0210()*0.00255147);
}

double NNfunction_sg_cR::synapse0x3be72c0() {
   return (neuron0x3be0550()*-0.0139554);
}

double NNfunction_sg_cR::synapse0x3be7640() {
   return (neuron0x3bdba20()*-0.0301192);
}

double NNfunction_sg_cR::synapse0x3be7680() {
   return (neuron0x3bdbcd0()*0.0283254);
}

double NNfunction_sg_cR::synapse0x3be76c0() {
   return (neuron0x3bdc010()*-0.0142269);
}

double NNfunction_sg_cR::synapse0x3be7700() {
   return (neuron0x3bdc350()*3.05774);
}

double NNfunction_sg_cR::synapse0x3be7740() {
   return (neuron0x3bdc690()*-0.00219627);
}

double NNfunction_sg_cR::synapse0x3be7780() {
   return (neuron0x3bdc9d0()*-0.0112013);
}

double NNfunction_sg_cR::synapse0x3be77c0() {
   return (neuron0x3bdcd10()*0.00521744);
}

double NNfunction_sg_cR::synapse0x3be7800() {
   return (neuron0x3bdd050()*-0.0270488);
}

double NNfunction_sg_cR::synapse0x3be7840() {
   return (neuron0x3bdd390()*-0.00647562);
}

double NNfunction_sg_cR::synapse0x3be7880() {
   return (neuron0x3bdd6d0()*-0.00240571);
}

double NNfunction_sg_cR::synapse0x3be78c0() {
   return (neuron0x3bdda10()*-0.00501226);
}

double NNfunction_sg_cR::synapse0x3be7900() {
   return (neuron0x3bddd50()*-0.0220298);
}

double NNfunction_sg_cR::synapse0x3be7940() {
   return (neuron0x3bde090()*0.00758528);
}

double NNfunction_sg_cR::synapse0x3be7980() {
   return (neuron0x3bde3d0()*0.00246844);
}

double NNfunction_sg_cR::synapse0x3be79c0() {
   return (neuron0x3bde710()*0.010963);
}

double NNfunction_sg_cR::synapse0x3be7a00() {
   return (neuron0x3bdea50()*1.32975);
}

double NNfunction_sg_cR::synapse0x3be7490() {
   return (neuron0x3bded90()*0.0394999);
}

double NNfunction_sg_cR::synapse0x3be74d0() {
   return (neuron0x3bdf2f0()*-0.00515604);
}

double NNfunction_sg_cR::synapse0x3be7b50() {
   return (neuron0x3bdf510()*-0.00209657);
}

double NNfunction_sg_cR::synapse0x3be7b90() {
   return (neuron0x3bdf850()*0.00381433);
}

double NNfunction_sg_cR::synapse0x3be7bd0() {
   return (neuron0x3bdfb90()*0.00707405);
}

double NNfunction_sg_cR::synapse0x3be7c10() {
   return (neuron0x3bdfed0()*-0.00151728);
}

double NNfunction_sg_cR::synapse0x3be7c50() {
   return (neuron0x3be0210()*-0.0111162);
}

double NNfunction_sg_cR::synapse0x3be7c90() {
   return (neuron0x3be0550()*0.0127105);
}

double NNfunction_sg_cR::synapse0x3be8010() {
   return (neuron0x3bdba20()*-0.0206526);
}

double NNfunction_sg_cR::synapse0x3be8050() {
   return (neuron0x3bdbcd0()*-0.369458);
}

double NNfunction_sg_cR::synapse0x3be8090() {
   return (neuron0x3bdc010()*0.00844589);
}

double NNfunction_sg_cR::synapse0x3be80d0() {
   return (neuron0x3bdc350()*-0.282047);
}

double NNfunction_sg_cR::synapse0x3be8110() {
   return (neuron0x3bdc690()*-0.00114651);
}

double NNfunction_sg_cR::synapse0x3be8150() {
   return (neuron0x3bdc9d0()*0.0271134);
}

double NNfunction_sg_cR::synapse0x3be8190() {
   return (neuron0x3bdcd10()*-0.0280513);
}

double NNfunction_sg_cR::synapse0x3be81d0() {
   return (neuron0x3bdd050()*0.0394558);
}

double NNfunction_sg_cR::synapse0x3be8210() {
   return (neuron0x3bdd390()*0.38898);
}

double NNfunction_sg_cR::synapse0x3be8250() {
   return (neuron0x3bdd6d0()*-0.0362848);
}

double NNfunction_sg_cR::synapse0x3be8290() {
   return (neuron0x3bdda10()*0.0306862);
}

double NNfunction_sg_cR::synapse0x3be82d0() {
   return (neuron0x3bddd50()*-0.0190708);
}

double NNfunction_sg_cR::synapse0x3be8310() {
   return (neuron0x3bde090()*-0.0274917);
}

double NNfunction_sg_cR::synapse0x3be8350() {
   return (neuron0x3bde3d0()*0.0414964);
}

double NNfunction_sg_cR::synapse0x3be8390() {
   return (neuron0x3bde710()*-0.00454097);
}

double NNfunction_sg_cR::synapse0x3be83d0() {
   return (neuron0x3bdea50()*-0.595928);
}

double NNfunction_sg_cR::synapse0x3be7e60() {
   return (neuron0x3bded90()*0.0155732);
}

double NNfunction_sg_cR::synapse0x3be7ea0() {
   return (neuron0x3bdf2f0()*-0.126638);
}

double NNfunction_sg_cR::synapse0x3be4c30() {
   return (neuron0x3bdf510()*-0.138394);
}

double NNfunction_sg_cR::synapse0x3be4c70() {
   return (neuron0x3bdf850()*0.662318);
}

double NNfunction_sg_cR::synapse0x3be4cb0() {
   return (neuron0x3bdfb90()*-0.033821);
}

double NNfunction_sg_cR::synapse0x3be4cf0() {
   return (neuron0x3bdfed0()*0.0183757);
}

double NNfunction_sg_cR::synapse0x3be4d30() {
   return (neuron0x3be0210()*-0.00843536);
}

double NNfunction_sg_cR::synapse0x3be4d70() {
   return (neuron0x3be0550()*0.0487792);
}

double NNfunction_sg_cR::synapse0x3be50f0() {
   return (neuron0x3bdba20()*-0.0106895);
}

double NNfunction_sg_cR::synapse0x3be5130() {
   return (neuron0x3bdbcd0()*-0.0869935);
}

double NNfunction_sg_cR::synapse0x3be5170() {
   return (neuron0x3bdc010()*0.00332833);
}

double NNfunction_sg_cR::synapse0x3be51b0() {
   return (neuron0x3bdc350()*-1.67857);
}

double NNfunction_sg_cR::synapse0x3be51f0() {
   return (neuron0x3bdc690()*-0.037551);
}

double NNfunction_sg_cR::synapse0x3be5230() {
   return (neuron0x3bdc9d0()*-0.0159016);
}

double NNfunction_sg_cR::synapse0x3be5270() {
   return (neuron0x3bdcd10()*-0.0137292);
}

double NNfunction_sg_cR::synapse0x3be52b0() {
   return (neuron0x3bdd050()*-0.00166423);
}

double NNfunction_sg_cR::synapse0x3be52f0() {
   return (neuron0x3bdd390()*0.0171449);
}

double NNfunction_sg_cR::synapse0x3be5330() {
   return (neuron0x3bdd6d0()*-0.0423291);
}

double NNfunction_sg_cR::synapse0x3be5370() {
   return (neuron0x3bdda10()*0.0290514);
}

double NNfunction_sg_cR::synapse0x3be53b0() {
   return (neuron0x3bddd50()*-0.0118903);
}

double NNfunction_sg_cR::synapse0x3be53f0() {
   return (neuron0x3bde090()*0.00710809);
}

double NNfunction_sg_cR::synapse0x3be9530() {
   return (neuron0x3bde3d0()*0.0105814);
}

double NNfunction_sg_cR::synapse0x3be9570() {
   return (neuron0x3bde710()*-0.00379505);
}

double NNfunction_sg_cR::synapse0x3be95b0() {
   return (neuron0x3bdea50()*-1.09236);
}

double NNfunction_sg_cR::synapse0x3be4f40() {
   return (neuron0x3bded90()*-0.0150261);
}

double NNfunction_sg_cR::synapse0x3be4f80() {
   return (neuron0x3bdf2f0()*-0.039404);
}

double NNfunction_sg_cR::synapse0x3be9700() {
   return (neuron0x3bdf510()*0.0148314);
}

double NNfunction_sg_cR::synapse0x3be9740() {
   return (neuron0x3bdf850()*-0.0100237);
}

double NNfunction_sg_cR::synapse0x3be9780() {
   return (neuron0x3bdfb90()*-0.0206023);
}

double NNfunction_sg_cR::synapse0x3be97c0() {
   return (neuron0x3bdfed0()*0.0117515);
}

double NNfunction_sg_cR::synapse0x3be9800() {
   return (neuron0x3be0210()*0.00635839);
}

double NNfunction_sg_cR::synapse0x3be9840() {
   return (neuron0x3be0550()*0.0133794);
}

double NNfunction_sg_cR::synapse0x3be9bc0() {
   return (neuron0x3bdba20()*0.0160837);
}

double NNfunction_sg_cR::synapse0x3be9c00() {
   return (neuron0x3bdbcd0()*-0.218878);
}

double NNfunction_sg_cR::synapse0x3be9c40() {
   return (neuron0x3bdc010()*0.0244665);
}

double NNfunction_sg_cR::synapse0x3be9c80() {
   return (neuron0x3bdc350()*1.98315);
}

double NNfunction_sg_cR::synapse0x3be9cc0() {
   return (neuron0x3bdc690()*-0.0432949);
}

double NNfunction_sg_cR::synapse0x3be9d00() {
   return (neuron0x3bdc9d0()*-0.12683);
}

double NNfunction_sg_cR::synapse0x3be9d40() {
   return (neuron0x3bdcd10()*-0.0181724);
}

double NNfunction_sg_cR::synapse0x3be9d80() {
   return (neuron0x3bdd050()*-0.0586835);
}

double NNfunction_sg_cR::synapse0x3be9dc0() {
   return (neuron0x3bdd390()*-0.0619164);
}

double NNfunction_sg_cR::synapse0x3be9e00() {
   return (neuron0x3bdd6d0()*-0.057674);
}

double NNfunction_sg_cR::synapse0x3be9e40() {
   return (neuron0x3bdda10()*0.318683);
}

double NNfunction_sg_cR::synapse0x3be9e80() {
   return (neuron0x3bddd50()*0.257472);
}

double NNfunction_sg_cR::synapse0x3be9ec0() {
   return (neuron0x3bde090()*0.170304);
}

double NNfunction_sg_cR::synapse0x3be9f00() {
   return (neuron0x3bde3d0()*0.142151);
}

double NNfunction_sg_cR::synapse0x3be9f40() {
   return (neuron0x3bde710()*0.104918);
}

double NNfunction_sg_cR::synapse0x3be9f80() {
   return (neuron0x3bdea50()*0.120271);
}

double NNfunction_sg_cR::synapse0x3be9a10() {
   return (neuron0x3bded90()*-0.0438274);
}

double NNfunction_sg_cR::synapse0x3be9a50() {
   return (neuron0x3bdf2f0()*0.226318);
}

double NNfunction_sg_cR::synapse0x3bea0d0() {
   return (neuron0x3bdf510()*0.163616);
}

double NNfunction_sg_cR::synapse0x3bea110() {
   return (neuron0x3bdf850()*-0.0656399);
}

double NNfunction_sg_cR::synapse0x3bea150() {
   return (neuron0x3bdfb90()*0.0242786);
}

double NNfunction_sg_cR::synapse0x3bea190() {
   return (neuron0x3bdfed0()*0.00170555);
}

double NNfunction_sg_cR::synapse0x3bea1d0() {
   return (neuron0x3be0210()*-0.0208765);
}

double NNfunction_sg_cR::synapse0x3bea210() {
   return (neuron0x3be0550()*-0.0150986);
}

double NNfunction_sg_cR::synapse0x3bea590() {
   return (neuron0x3bdba20()*0.0102681);
}

double NNfunction_sg_cR::synapse0x3bea5d0() {
   return (neuron0x3bdbcd0()*-0.350542);
}

double NNfunction_sg_cR::synapse0x3bea610() {
   return (neuron0x3bdc010()*0.0136925);
}

double NNfunction_sg_cR::synapse0x3bea650() {
   return (neuron0x3bdc350()*-0.0346777);
}

double NNfunction_sg_cR::synapse0x3bea690() {
   return (neuron0x3bdc690()*-0.0117875);
}

double NNfunction_sg_cR::synapse0x3bea6d0() {
   return (neuron0x3bdc9d0()*-0.00720683);
}

double NNfunction_sg_cR::synapse0x3bea710() {
   return (neuron0x3bdcd10()*-0.0284834);
}

double NNfunction_sg_cR::synapse0x3bea750() {
   return (neuron0x3bdd050()*-0.0723888);
}

double NNfunction_sg_cR::synapse0x3bea790() {
   return (neuron0x3bdd390()*0.289099);
}

double NNfunction_sg_cR::synapse0x3bea7d0() {
   return (neuron0x3bdd6d0()*-0.0708677);
}

double NNfunction_sg_cR::synapse0x3bea810() {
   return (neuron0x3bdda10()*0.129626);
}

double NNfunction_sg_cR::synapse0x3bea850() {
   return (neuron0x3bddd50()*0.135573);
}

double NNfunction_sg_cR::synapse0x3bea890() {
   return (neuron0x3bde090()*0.147357);
}

double NNfunction_sg_cR::synapse0x3bea8d0() {
   return (neuron0x3bde3d0()*-0.0609086);
}

double NNfunction_sg_cR::synapse0x3bea910() {
   return (neuron0x3bde710()*0.00817541);
}

double NNfunction_sg_cR::synapse0x3bea950() {
   return (neuron0x3bdea50()*0.660216);
}

double NNfunction_sg_cR::synapse0x3bea3e0() {
   return (neuron0x3bded90()*-0.017052);
}

double NNfunction_sg_cR::synapse0x3bea420() {
   return (neuron0x3bdf2f0()*-0.327838);
}

double NNfunction_sg_cR::synapse0x3beaaa0() {
   return (neuron0x3bdf510()*-0.259219);
}

double NNfunction_sg_cR::synapse0x3beaae0() {
   return (neuron0x3bdf850()*-0.353717);
}

double NNfunction_sg_cR::synapse0x3beab20() {
   return (neuron0x3bdfb90()*-0.0119929);
}

double NNfunction_sg_cR::synapse0x3beab60() {
   return (neuron0x3bdfed0()*0.00587268);
}

double NNfunction_sg_cR::synapse0x3beaba0() {
   return (neuron0x3be0210()*-0.00977728);
}

double NNfunction_sg_cR::synapse0x3beabe0() {
   return (neuron0x3be0550()*-0.0359306);
}

double NNfunction_sg_cR::synapse0x3beaf60() {
   return (neuron0x3bdba20()*-0.00579905);
}

double NNfunction_sg_cR::synapse0x3beafa0() {
   return (neuron0x3bdbcd0()*0.00234253);
}

double NNfunction_sg_cR::synapse0x3beafe0() {
   return (neuron0x3bdc010()*-0.00520124);
}

double NNfunction_sg_cR::synapse0x3beb020() {
   return (neuron0x3bdc350()*10.3777);
}

double NNfunction_sg_cR::synapse0x3beb060() {
   return (neuron0x3bdc690()*0.00133145);
}

double NNfunction_sg_cR::synapse0x3beb0a0() {
   return (neuron0x3bdc9d0()*-0.00877953);
}

double NNfunction_sg_cR::synapse0x3beb0e0() {
   return (neuron0x3bdcd10()*-0.00300123);
}

double NNfunction_sg_cR::synapse0x3beb120() {
   return (neuron0x3bdd050()*-0.0142029);
}

double NNfunction_sg_cR::synapse0x3beb160() {
   return (neuron0x3bdd390()*0.00755787);
}

double NNfunction_sg_cR::synapse0x3beb1a0() {
   return (neuron0x3bdd6d0()*-0.0205379);
}

double NNfunction_sg_cR::synapse0x3beb1e0() {
   return (neuron0x3bdda10()*0.0227144);
}

double NNfunction_sg_cR::synapse0x3beb220() {
   return (neuron0x3bddd50()*-0.00272782);
}

double NNfunction_sg_cR::synapse0x3beb260() {
   return (neuron0x3bde090()*0.019469);
}

double NNfunction_sg_cR::synapse0x3beb2a0() {
   return (neuron0x3bde3d0()*-0.0477429);
}

double NNfunction_sg_cR::synapse0x3beb2e0() {
   return (neuron0x3bde710()*0.000188927);
}

double NNfunction_sg_cR::synapse0x3beb320() {
   return (neuron0x3bdea50()*-0.276071);
}

double NNfunction_sg_cR::synapse0x3beadb0() {
   return (neuron0x3bded90()*0.00611106);
}

double NNfunction_sg_cR::synapse0x3beadf0() {
   return (neuron0x3bdf2f0()*-0.0228759);
}

double NNfunction_sg_cR::synapse0x3beb470() {
   return (neuron0x3bdf510()*0.0152473);
}

double NNfunction_sg_cR::synapse0x3beb4b0() {
   return (neuron0x3bdf850()*0.025516);
}

double NNfunction_sg_cR::synapse0x3beb4f0() {
   return (neuron0x3bdfb90()*0.0300869);
}

double NNfunction_sg_cR::synapse0x3beb530() {
   return (neuron0x3bdfed0()*-0.0166997);
}

double NNfunction_sg_cR::synapse0x3beb570() {
   return (neuron0x3be0210()*-0.00564857);
}

double NNfunction_sg_cR::synapse0x3beb5b0() {
   return (neuron0x3be0550()*-0.00323163);
}

double NNfunction_sg_cR::synapse0x3beb930() {
   return (neuron0x3bdba20()*0.0415182);
}

double NNfunction_sg_cR::synapse0x3bdbbb0() {
   return (neuron0x3bdbcd0()*-0.0205607);
}

double NNfunction_sg_cR::synapse0x3bdbbf0() {
   return (neuron0x3bdc010()*-0.0280914);
}

double NNfunction_sg_cR::synapse0x3bdbef0() {
   return (neuron0x3bdc350()*0.226495);
}

double NNfunction_sg_cR::synapse0x3bdbf30() {
   return (neuron0x3bdc690()*0.370309);
}

double NNfunction_sg_cR::synapse0x3bdc230() {
   return (neuron0x3bdc9d0()*-0.605487);
}

double NNfunction_sg_cR::synapse0x3bdc270() {
   return (neuron0x3bdcd10()*0.105292);
}

double NNfunction_sg_cR::synapse0x3bdc570() {
   return (neuron0x3bdd050()*-0.213631);
}

double NNfunction_sg_cR::synapse0x3bdc5b0() {
   return (neuron0x3bdd390()*-0.0154138);
}

double NNfunction_sg_cR::synapse0x3bdc8b0() {
   return (neuron0x3bdd6d0()*0.0135986);
}

double NNfunction_sg_cR::synapse0x3bdc8f0() {
   return (neuron0x3bdda10()*0.00708204);
}

double NNfunction_sg_cR::synapse0x3bdcbf0() {
   return (neuron0x3bddd50()*0.0282581);
}

double NNfunction_sg_cR::synapse0x3bdcc30() {
   return (neuron0x3bde090()*-0.0641107);
}

double NNfunction_sg_cR::synapse0x3bdcf30() {
   return (neuron0x3bde3d0()*-0.00811892);
}

double NNfunction_sg_cR::synapse0x3bdcf70() {
   return (neuron0x3bde710()*0.32421);
}

double NNfunction_sg_cR::synapse0x3bdd270() {
   return (neuron0x3bdea50()*0.802668);
}

double NNfunction_sg_cR::synapse0x3bdd2b0() {
   return (neuron0x3bded90()*0.203573);
}

double NNfunction_sg_cR::synapse0x3bdd5b0() {
   return (neuron0x3bdf2f0()*0.0587071);
}

double NNfunction_sg_cR::synapse0x3bdd5f0() {
   return (neuron0x3bdf510()*0.00341591);
}

double NNfunction_sg_cR::synapse0x3bdd8f0() {
   return (neuron0x3bdf850()*-0.0200654);
}

double NNfunction_sg_cR::synapse0x3bdd930() {
   return (neuron0x3bdfb90()*-0.0118899);
}

double NNfunction_sg_cR::synapse0x3bddc30() {
   return (neuron0x3bdfed0()*-0.0223555);
}

double NNfunction_sg_cR::synapse0x3bddc70() {
   return (neuron0x3be0210()*-0.0129418);
}

double NNfunction_sg_cR::synapse0x3bddf70() {
   return (neuron0x3be0550()*-0.0143544);
}

double NNfunction_sg_cR::synapse0x3bddfb0() {
   return (neuron0x3bdba20()*-0.00791795);
}

double NNfunction_sg_cR::synapse0x3bdec70() {
   return (neuron0x3bdbcd0()*0.0863589);
}

double NNfunction_sg_cR::synapse0x3bdecb0() {
   return (neuron0x3bdc010()*0.00148858);
}

double NNfunction_sg_cR::synapse0x3beb780() {
   return (neuron0x3bdc350()*5.28504);
}

double NNfunction_sg_cR::synapse0x3beb7c0() {
   return (neuron0x3bdc690()*0.0107272);
}

double NNfunction_sg_cR::synapse0x3bdefb0() {
   return (neuron0x3bdc9d0()*-0.00624508);
}

double NNfunction_sg_cR::synapse0x3bdeff0() {
   return (neuron0x3bdcd10()*0.00964769);
}

double NNfunction_sg_cR::synapse0x2b32d20() {
   return (neuron0x3bdd050()*-0.0255461);
}

double NNfunction_sg_cR::synapse0x2b32d60() {
   return (neuron0x3bdd390()*-0.00661627);
}

double NNfunction_sg_cR::synapse0x3bdf730() {
   return (neuron0x3bdd6d0()*0.0360628);
}

double NNfunction_sg_cR::synapse0x3bdf770() {
   return (neuron0x3bdda10()*-0.031462);
}

double NNfunction_sg_cR::synapse0x3bdfa70() {
   return (neuron0x3bddd50()*0.0249656);
}

double NNfunction_sg_cR::synapse0x3bdfab0() {
   return (neuron0x3bde090()*0.0216094);
}

double NNfunction_sg_cR::synapse0x3bdfdb0() {
   return (neuron0x3bde3d0()*-0.0199663);
}

double NNfunction_sg_cR::synapse0x3bdfdf0() {
   return (neuron0x3bde710()*0.0100053);
}

double NNfunction_sg_cR::synapse0x3be00f0() {
   return (neuron0x3bdea50()*0.0186407);
}

double NNfunction_sg_cR::synapse0x3be0130() {
   return (neuron0x3bded90()*-0.0196838);
}

double NNfunction_sg_cR::synapse0x3be0430() {
   return (neuron0x3bdf2f0()*0.0353674);
}

double NNfunction_sg_cR::synapse0x3be0470() {
   return (neuron0x3bdf510()*-0.0186525);
}

double NNfunction_sg_cR::synapse0x3be0770() {
   return (neuron0x3bdf850()*-0.0225975);
}

double NNfunction_sg_cR::synapse0x3be07b0() {
   return (neuron0x3bdfb90()*-0.00278029);
}

double NNfunction_sg_cR::synapse0x3bde2b0() {
   return (neuron0x3bdfed0()*-0.00464569);
}

double NNfunction_sg_cR::synapse0x3bde2f0() {
   return (neuron0x3be0210()*0.0137717);
}

double NNfunction_sg_cR::synapse0x3bed6a0() {
   return (neuron0x3be0550()*0.0218875);
}

double NNfunction_sg_cR::synapse0x3beda20() {
   return (neuron0x3bdba20()*0.0166667);
}

double NNfunction_sg_cR::synapse0x3beda60() {
   return (neuron0x3bdbcd0()*0.0725986);
}

double NNfunction_sg_cR::synapse0x3bedaa0() {
   return (neuron0x3bdc010()*-0.0211112);
}

double NNfunction_sg_cR::synapse0x3bedae0() {
   return (neuron0x3bdc350()*0.156715);
}

double NNfunction_sg_cR::synapse0x3bedb20() {
   return (neuron0x3bdc690()*-0.0365065);
}

double NNfunction_sg_cR::synapse0x3bedb60() {
   return (neuron0x3bdc9d0()*-0.0212584);
}

double NNfunction_sg_cR::synapse0x3bedba0() {
   return (neuron0x3bdcd10()*-0.0039435);
}

double NNfunction_sg_cR::synapse0x3bedbe0() {
   return (neuron0x3bdd050()*0.0701815);
}

double NNfunction_sg_cR::synapse0x3bedc20() {
   return (neuron0x3bdd390()*-0.0641579);
}

double NNfunction_sg_cR::synapse0x3bedc60() {
   return (neuron0x3bdd6d0()*-0.0120388);
}

double NNfunction_sg_cR::synapse0x3bedca0() {
   return (neuron0x3bdda10()*-0.0259241);
}

double NNfunction_sg_cR::synapse0x3bedce0() {
   return (neuron0x3bddd50()*-0.0407916);
}

double NNfunction_sg_cR::synapse0x3bedd20() {
   return (neuron0x3bde090()*-0.0579232);
}

double NNfunction_sg_cR::synapse0x3bedd60() {
   return (neuron0x3bde3d0()*-0.0048276);
}

double NNfunction_sg_cR::synapse0x3bedda0() {
   return (neuron0x3bde710()*-0.0304589);
}

double NNfunction_sg_cR::synapse0x3bedde0() {
   return (neuron0x3bdea50()*-1.76026);
}

double NNfunction_sg_cR::synapse0x3bed870() {
   return (neuron0x3bded90()*0.00714707);
}

double NNfunction_sg_cR::synapse0x3bed8b0() {
   return (neuron0x3bdf2f0()*-0.0454625);
}

double NNfunction_sg_cR::synapse0x3bedf30() {
   return (neuron0x3bdf510()*-0.0106947);
}

double NNfunction_sg_cR::synapse0x3bedf70() {
   return (neuron0x3bdf850()*-0.0531379);
}

double NNfunction_sg_cR::synapse0x3bedfb0() {
   return (neuron0x3bdfb90()*-0.00461415);
}

double NNfunction_sg_cR::synapse0x3bedff0() {
   return (neuron0x3bdfed0()*-0.0240368);
}

double NNfunction_sg_cR::synapse0x3bee030() {
   return (neuron0x3be0210()*-0.00817164);
}

double NNfunction_sg_cR::synapse0x3bee070() {
   return (neuron0x3be0550()*-0.00171399);
}

double NNfunction_sg_cR::synapse0x3bee3f0() {
   return (neuron0x3bdba20()*0.0845432);
}

double NNfunction_sg_cR::synapse0x3bee430() {
   return (neuron0x3bdbcd0()*-0.00711897);
}

double NNfunction_sg_cR::synapse0x3bee470() {
   return (neuron0x3bdc010()*0.117149);
}

double NNfunction_sg_cR::synapse0x3bee4b0() {
   return (neuron0x3bdc350()*0.444056);
}

double NNfunction_sg_cR::synapse0x3bee4f0() {
   return (neuron0x3bdc690()*0.510982);
}

double NNfunction_sg_cR::synapse0x3bee530() {
   return (neuron0x3bdc9d0()*0.411139);
}

double NNfunction_sg_cR::synapse0x3bee570() {
   return (neuron0x3bdcd10()*0.126457);
}

double NNfunction_sg_cR::synapse0x3bee5b0() {
   return (neuron0x3bdd050()*0.0988682);
}

double NNfunction_sg_cR::synapse0x3bee5f0() {
   return (neuron0x3bdd390()*0.0638671);
}

double NNfunction_sg_cR::synapse0x3bee630() {
   return (neuron0x3bdd6d0()*-0.142824);
}

double NNfunction_sg_cR::synapse0x3bee670() {
   return (neuron0x3bdda10()*-0.0810602);
}

double NNfunction_sg_cR::synapse0x3bee6b0() {
   return (neuron0x3bddd50()*-0.00313396);
}

double NNfunction_sg_cR::synapse0x3bee6f0() {
   return (neuron0x3bde090()*-0.151772);
}

double NNfunction_sg_cR::synapse0x3bee730() {
   return (neuron0x3bde3d0()*-0.0255924);
}

double NNfunction_sg_cR::synapse0x3bee770() {
   return (neuron0x3bde710()*-0.0553178);
}

double NNfunction_sg_cR::synapse0x3bee7b0() {
   return (neuron0x3bdea50()*0.821173);
}

double NNfunction_sg_cR::synapse0x3bee240() {
   return (neuron0x3bded90()*-0.0555874);
}

double NNfunction_sg_cR::synapse0x3bee280() {
   return (neuron0x3bdf2f0()*-0.0453947);
}

double NNfunction_sg_cR::synapse0x3bee900() {
   return (neuron0x3bdf510()*-0.0498773);
}

double NNfunction_sg_cR::synapse0x3bee940() {
   return (neuron0x3bdf850()*0.0336438);
}

double NNfunction_sg_cR::synapse0x3bee980() {
   return (neuron0x3bdfb90()*-0.0490238);
}

double NNfunction_sg_cR::synapse0x3bee9c0() {
   return (neuron0x3bdfed0()*-0.0642033);
}

double NNfunction_sg_cR::synapse0x3beea00() {
   return (neuron0x3be0210()*0.0413756);
}

double NNfunction_sg_cR::synapse0x3beea40() {
   return (neuron0x3be0550()*0.0549015);
}

double NNfunction_sg_cR::synapse0x3beedc0() {
   return (neuron0x3bdba20()*-0.00502542);
}

double NNfunction_sg_cR::synapse0x3beee00() {
   return (neuron0x3bdbcd0()*0.575078);
}

double NNfunction_sg_cR::synapse0x3beee40() {
   return (neuron0x3bdc010()*0.193052);
}

double NNfunction_sg_cR::synapse0x3beee80() {
   return (neuron0x3bdc350()*-1.23457);
}

double NNfunction_sg_cR::synapse0x3beeec0() {
   return (neuron0x3bdc690()*0.314744);
}

double NNfunction_sg_cR::synapse0x3beef00() {
   return (neuron0x3bdc9d0()*-0.0258238);
}

double NNfunction_sg_cR::synapse0x3beef40() {
   return (neuron0x3bdcd10()*0.383017);
}

double NNfunction_sg_cR::synapse0x3beef80() {
   return (neuron0x3bdd050()*0.129019);
}

double NNfunction_sg_cR::synapse0x3beefc0() {
   return (neuron0x3bdd390()*-0.157013);
}

double NNfunction_sg_cR::synapse0x3bef000() {
   return (neuron0x3bdd6d0()*0.669112);
}

double NNfunction_sg_cR::synapse0x3bef040() {
   return (neuron0x3bdda10()*0.206525);
}

double NNfunction_sg_cR::synapse0x3bef080() {
   return (neuron0x3bddd50()*0.293677);
}

double NNfunction_sg_cR::synapse0x3bef0c0() {
   return (neuron0x3bde090()*0.379151);
}

double NNfunction_sg_cR::synapse0x3bef100() {
   return (neuron0x3bde3d0()*-0.128215);
}

double NNfunction_sg_cR::synapse0x3bef140() {
   return (neuron0x3bde710()*-0.0482865);
}

double NNfunction_sg_cR::synapse0x3bef180() {
   return (neuron0x3bdea50()*0.630191);
}

double NNfunction_sg_cR::synapse0x3beec10() {
   return (neuron0x3bded90()*-0.0508546);
}

double NNfunction_sg_cR::synapse0x3beec50() {
   return (neuron0x3bdf2f0()*0.180244);
}

double NNfunction_sg_cR::synapse0x3bef2d0() {
   return (neuron0x3bdf510()*0.117936);
}

double NNfunction_sg_cR::synapse0x3bef310() {
   return (neuron0x3bdf850()*0.0084214);
}

double NNfunction_sg_cR::synapse0x3bef350() {
   return (neuron0x3bdfb90()*-0.13646);
}

double NNfunction_sg_cR::synapse0x3bef390() {
   return (neuron0x3bdfed0()*0.194747);
}

double NNfunction_sg_cR::synapse0x3bef3d0() {
   return (neuron0x3be0210()*-0.0341546);
}

double NNfunction_sg_cR::synapse0x3bef410() {
   return (neuron0x3be0550()*0.0516935);
}

double NNfunction_sg_cR::synapse0x3bef790() {
   return (neuron0x3bdba20()*0.113246);
}

double NNfunction_sg_cR::synapse0x3bef7d0() {
   return (neuron0x3bdbcd0()*-0.372291);
}

double NNfunction_sg_cR::synapse0x3bef810() {
   return (neuron0x3bdc010()*-0.35701);
}

double NNfunction_sg_cR::synapse0x3bef850() {
   return (neuron0x3bdc350()*0.46225);
}

double NNfunction_sg_cR::synapse0x3bef890() {
   return (neuron0x3bdc690()*-0.184949);
}

double NNfunction_sg_cR::synapse0x3bef8d0() {
   return (neuron0x3bdc9d0()*-0.0874841);
}

double NNfunction_sg_cR::synapse0x3bef910() {
   return (neuron0x3bdcd10()*-0.0324442);
}

double NNfunction_sg_cR::synapse0x3bef950() {
   return (neuron0x3bdd050()*-0.295461);
}

double NNfunction_sg_cR::synapse0x3bef990() {
   return (neuron0x3bdd390()*-0.398891);
}

double NNfunction_sg_cR::synapse0x3bef9d0() {
   return (neuron0x3bdd6d0()*0.264959);
}

double NNfunction_sg_cR::synapse0x3befa10() {
   return (neuron0x3bdda10()*-0.15619);
}

double NNfunction_sg_cR::synapse0x3befa50() {
   return (neuron0x3bddd50()*0.204621);
}

double NNfunction_sg_cR::synapse0x3befa90() {
   return (neuron0x3bde090()*0.157255);
}

double NNfunction_sg_cR::synapse0x3befad0() {
   return (neuron0x3bde3d0()*0.00131271);
}

double NNfunction_sg_cR::synapse0x3befb10() {
   return (neuron0x3bde710()*0.172042);
}

double NNfunction_sg_cR::synapse0x3befb50() {
   return (neuron0x3bdea50()*0.205807);
}

double NNfunction_sg_cR::synapse0x3bef5e0() {
   return (neuron0x3bded90()*-0.200883);
}

double NNfunction_sg_cR::synapse0x3bef620() {
   return (neuron0x3bdf2f0()*0.0843014);
}

double NNfunction_sg_cR::synapse0x3befca0() {
   return (neuron0x3bdf510()*0.500871);
}

double NNfunction_sg_cR::synapse0x3befce0() {
   return (neuron0x3bdf850()*0.223494);
}

double NNfunction_sg_cR::synapse0x3befd20() {
   return (neuron0x3bdfb90()*-0.146661);
}

double NNfunction_sg_cR::synapse0x3befd60() {
   return (neuron0x3bdfed0()*-0.401286);
}

double NNfunction_sg_cR::synapse0x3befda0() {
   return (neuron0x3be0210()*0.0303396);
}

double NNfunction_sg_cR::synapse0x3befde0() {
   return (neuron0x3be0550()*-0.140834);
}

double NNfunction_sg_cR::synapse0x3bf0160() {
   return (neuron0x3bdba20()*0.0181949);
}

double NNfunction_sg_cR::synapse0x3bf01a0() {
   return (neuron0x3bdbcd0()*-0.0697557);
}

double NNfunction_sg_cR::synapse0x3bf01e0() {
   return (neuron0x3bdc010()*-0.0412779);
}

double NNfunction_sg_cR::synapse0x3bf0220() {
   return (neuron0x3bdc350()*-1.75185);
}

double NNfunction_sg_cR::synapse0x3bf0260() {
   return (neuron0x3bdc690()*-0.066456);
}

double NNfunction_sg_cR::synapse0x3bf02a0() {
   return (neuron0x3bdc9d0()*-0.0208785);
}

double NNfunction_sg_cR::synapse0x3bf02e0() {
   return (neuron0x3bdcd10()*-0.0227889);
}

double NNfunction_sg_cR::synapse0x3bf0320() {
   return (neuron0x3bdd050()*0.0536075);
}

double NNfunction_sg_cR::synapse0x3bf0360() {
   return (neuron0x3bdd390()*0.0592592);
}

double NNfunction_sg_cR::synapse0x3be8520() {
   return (neuron0x3bdd6d0()*0.0778881);
}

double NNfunction_sg_cR::synapse0x3be8560() {
   return (neuron0x3bdda10()*0.0633272);
}

double NNfunction_sg_cR::synapse0x3be85a0() {
   return (neuron0x3bddd50()*-0.279176);
}

double NNfunction_sg_cR::synapse0x3be85e0() {
   return (neuron0x3bde090()*-0.2652);
}

double NNfunction_sg_cR::synapse0x3be8620() {
   return (neuron0x3bde3d0()*0.0613094);
}

double NNfunction_sg_cR::synapse0x3be8660() {
   return (neuron0x3bde710()*-0.0373805);
}

double NNfunction_sg_cR::synapse0x3be86a0() {
   return (neuron0x3bdea50()*-0.509666);
}

double NNfunction_sg_cR::synapse0x3beffb0() {
   return (neuron0x3bded90()*-0.0169497);
}

double NNfunction_sg_cR::synapse0x3befff0() {
   return (neuron0x3bdf2f0()*0.0725789);
}

double NNfunction_sg_cR::synapse0x3be87f0() {
   return (neuron0x3bdf510()*-0.0617119);
}

double NNfunction_sg_cR::synapse0x3be8830() {
   return (neuron0x3bdf850()*-0.0264454);
}

double NNfunction_sg_cR::synapse0x3be8870() {
   return (neuron0x3bdfb90()*0.0298303);
}

double NNfunction_sg_cR::synapse0x3be88b0() {
   return (neuron0x3bdfed0()*-0.0407339);
}

double NNfunction_sg_cR::synapse0x3be88f0() {
   return (neuron0x3be0210()*-0.0451787);
}

double NNfunction_sg_cR::synapse0x3be8930() {
   return (neuron0x3be0550()*-0.0360188);
}

double NNfunction_sg_cR::synapse0x3be8cb0() {
   return (neuron0x3bdba20()*-0.0339699);
}

double NNfunction_sg_cR::synapse0x3be8cf0() {
   return (neuron0x3bdbcd0()*0.0653405);
}

double NNfunction_sg_cR::synapse0x3be8d30() {
   return (neuron0x3bdc010()*0.0176921);
}

double NNfunction_sg_cR::synapse0x3be8d70() {
   return (neuron0x3bdc350()*-1.95999);
}

double NNfunction_sg_cR::synapse0x3be8db0() {
   return (neuron0x3bdc690()*-0.0401224);
}

double NNfunction_sg_cR::synapse0x3be8df0() {
   return (neuron0x3bdc9d0()*0.00222041);
}

double NNfunction_sg_cR::synapse0x3be8e30() {
   return (neuron0x3bdcd10()*-0.00932289);
}

double NNfunction_sg_cR::synapse0x3be8e70() {
   return (neuron0x3bdd050()*-0.0576785);
}

double NNfunction_sg_cR::synapse0x3be8eb0() {
   return (neuron0x3bdd390()*0.0846795);
}

double NNfunction_sg_cR::synapse0x3be8ef0() {
   return (neuron0x3bdd6d0()*0.0886809);
}

double NNfunction_sg_cR::synapse0x3be8f30() {
   return (neuron0x3bdda10()*0.424512);
}

double NNfunction_sg_cR::synapse0x3be8f70() {
   return (neuron0x3bddd50()*-0.424834);
}

double NNfunction_sg_cR::synapse0x3be8fb0() {
   return (neuron0x3bde090()*0.420854);
}

double NNfunction_sg_cR::synapse0x3be8ff0() {
   return (neuron0x3bde3d0()*0.237609);
}

double NNfunction_sg_cR::synapse0x3be9030() {
   return (neuron0x3bde710()*-0.110563);
}

double NNfunction_sg_cR::synapse0x3be9070() {
   return (neuron0x3bdea50()*-0.164229);
}

double NNfunction_sg_cR::synapse0x3be8b00() {
   return (neuron0x3bded90()*-0.063952);
}

double NNfunction_sg_cR::synapse0x3be8b40() {
   return (neuron0x3bdf2f0()*-0.29092);
}

double NNfunction_sg_cR::synapse0x3be91c0() {
   return (neuron0x3bdf510()*-0.104586);
}

double NNfunction_sg_cR::synapse0x3be9200() {
   return (neuron0x3bdf850()*0.0926918);
}

double NNfunction_sg_cR::synapse0x3be9240() {
   return (neuron0x3bdfb90()*0.0999635);
}

double NNfunction_sg_cR::synapse0x3be9280() {
   return (neuron0x3bdfed0()*-0.0465512);
}

double NNfunction_sg_cR::synapse0x3be92c0() {
   return (neuron0x3be0210()*0.0823828);
}

double NNfunction_sg_cR::synapse0x3be9300() {
   return (neuron0x3be0550()*-0.0046721);
}

double NNfunction_sg_cR::synapse0x3be94d0() {
   return (neuron0x3bdba20()*-0.000727647);
}

double NNfunction_sg_cR::synapse0x3bf2560() {
   return (neuron0x3bdbcd0()*-0.102526);
}

double NNfunction_sg_cR::synapse0x3bf25a0() {
   return (neuron0x3bdc010()*-0.0429016);
}

double NNfunction_sg_cR::synapse0x3bf25e0() {
   return (neuron0x3bdc350()*-1.42624);
}

double NNfunction_sg_cR::synapse0x3bf2620() {
   return (neuron0x3bdc690()*0.0823747);
}

double NNfunction_sg_cR::synapse0x3bf2660() {
   return (neuron0x3bdc9d0()*-0.00405178);
}

double NNfunction_sg_cR::synapse0x3bf26a0() {
   return (neuron0x3bdcd10()*0.0264577);
}

double NNfunction_sg_cR::synapse0x3bf26e0() {
   return (neuron0x3bdd050()*0.00215059);
}

double NNfunction_sg_cR::synapse0x3bf2720() {
   return (neuron0x3bdd390()*-0.0923067);
}

double NNfunction_sg_cR::synapse0x3bf2760() {
   return (neuron0x3bdd6d0()*-0.27808);
}

double NNfunction_sg_cR::synapse0x3bf27a0() {
   return (neuron0x3bdda10()*0.678692);
}

double NNfunction_sg_cR::synapse0x3bf27e0() {
   return (neuron0x3bddd50()*-0.150856);
}

double NNfunction_sg_cR::synapse0x3bf2820() {
   return (neuron0x3bde090()*-0.135611);
}

double NNfunction_sg_cR::synapse0x3bf2860() {
   return (neuron0x3bde3d0()*-0.0334424);
}

double NNfunction_sg_cR::synapse0x3bf28a0() {
   return (neuron0x3bde710()*-0.0867447);
}

double NNfunction_sg_cR::synapse0x3bf28e0() {
   return (neuron0x3bdea50()*-0.326003);
}

double NNfunction_sg_cR::synapse0x3bf23b0() {
   return (neuron0x3bded90()*0.0635274);
}

double NNfunction_sg_cR::synapse0x3bf23f0() {
   return (neuron0x3bdf2f0()*0.208771);
}

double NNfunction_sg_cR::synapse0x3bf2a30() {
   return (neuron0x3bdf510()*0.258858);
}

double NNfunction_sg_cR::synapse0x3bf2a70() {
   return (neuron0x3bdf850()*-0.103028);
}

double NNfunction_sg_cR::synapse0x3bf2ab0() {
   return (neuron0x3bdfb90()*-0.025027);
}

double NNfunction_sg_cR::synapse0x3bf2af0() {
   return (neuron0x3bdfed0()*-0.0160875);
}

double NNfunction_sg_cR::synapse0x3bf2b30() {
   return (neuron0x3be0210()*-0.010422);
}

double NNfunction_sg_cR::synapse0x3bf2b70() {
   return (neuron0x3be0550()*0.0120692);
}

double NNfunction_sg_cR::synapse0x3bf2ef0() {
   return (neuron0x3bdba20()*-0.0661532);
}

double NNfunction_sg_cR::synapse0x3bf2f30() {
   return (neuron0x3bdbcd0()*0.111365);
}

double NNfunction_sg_cR::synapse0x3bf2f70() {
   return (neuron0x3bdc010()*-0.0164419);
}

double NNfunction_sg_cR::synapse0x3bf2fb0() {
   return (neuron0x3bdc350()*-0.376526);
}

double NNfunction_sg_cR::synapse0x3bf2ff0() {
   return (neuron0x3bdc690()*-0.0292964);
}

double NNfunction_sg_cR::synapse0x3bf3030() {
   return (neuron0x3bdc9d0()*0.023267);
}

double NNfunction_sg_cR::synapse0x3bf3070() {
   return (neuron0x3bdcd10()*-0.000535946);
}

double NNfunction_sg_cR::synapse0x3bf30b0() {
   return (neuron0x3bdd050()*0.0861674);
}

double NNfunction_sg_cR::synapse0x3bf30f0() {
   return (neuron0x3bdd390()*-0.130104);
}

double NNfunction_sg_cR::synapse0x3bf3130() {
   return (neuron0x3bdd6d0()*-0.0715122);
}

double NNfunction_sg_cR::synapse0x3bf3170() {
   return (neuron0x3bdda10()*-0.0644113);
}

double NNfunction_sg_cR::synapse0x3bf31b0() {
   return (neuron0x3bddd50()*-0.0389993);
}

double NNfunction_sg_cR::synapse0x3bf31f0() {
   return (neuron0x3bde090()*0.685775);
}

double NNfunction_sg_cR::synapse0x3bf3230() {
   return (neuron0x3bde3d0()*-0.0973315);
}

double NNfunction_sg_cR::synapse0x3bf3270() {
   return (neuron0x3bde710()*-0.00874066);
}

double NNfunction_sg_cR::synapse0x3bf32b0() {
   return (neuron0x3bdea50()*-0.472564);
}

double NNfunction_sg_cR::synapse0x3bf2d40() {
   return (neuron0x3bded90()*-0.0207309);
}

double NNfunction_sg_cR::synapse0x3bf2d80() {
   return (neuron0x3bdf2f0()*-0.250654);
}

double NNfunction_sg_cR::synapse0x3bf3400() {
   return (neuron0x3bdf510()*0.273412);
}

double NNfunction_sg_cR::synapse0x3bf3440() {
   return (neuron0x3bdf850()*0.0592503);
}

double NNfunction_sg_cR::synapse0x3bf3480() {
   return (neuron0x3bdfb90()*0.00102395);
}

double NNfunction_sg_cR::synapse0x3bf34c0() {
   return (neuron0x3bdfed0()*0.0148743);
}

double NNfunction_sg_cR::synapse0x3bf3500() {
   return (neuron0x3be0210()*-0.00838633);
}

double NNfunction_sg_cR::synapse0x3bf3540() {
   return (neuron0x3be0550()*0.0345521);
}

double NNfunction_sg_cR::synapse0x3bf38c0() {
   return (neuron0x3bdba20()*0.00838706);
}

double NNfunction_sg_cR::synapse0x3bf3900() {
   return (neuron0x3bdbcd0()*0.188222);
}

double NNfunction_sg_cR::synapse0x3bf3940() {
   return (neuron0x3bdc010()*0.257787);
}

double NNfunction_sg_cR::synapse0x3bf3980() {
   return (neuron0x3bdc350()*0.605503);
}

double NNfunction_sg_cR::synapse0x3bf39c0() {
   return (neuron0x3bdc690()*0.304538);
}

double NNfunction_sg_cR::synapse0x3bf3a00() {
   return (neuron0x3bdc9d0()*0.200561);
}

double NNfunction_sg_cR::synapse0x3bf3a40() {
   return (neuron0x3bdcd10()*-0.256862);
}

double NNfunction_sg_cR::synapse0x3bf3a80() {
   return (neuron0x3bdd050()*-0.0917987);
}

double NNfunction_sg_cR::synapse0x3bf3ac0() {
   return (neuron0x3bdd390()*-0.304085);
}

double NNfunction_sg_cR::synapse0x3bf3b00() {
   return (neuron0x3bdd6d0()*0.282604);
}

double NNfunction_sg_cR::synapse0x3bf3b40() {
   return (neuron0x3bdda10()*0.0902324);
}

double NNfunction_sg_cR::synapse0x3bf3b80() {
   return (neuron0x3bddd50()*0.0677251);
}

double NNfunction_sg_cR::synapse0x3bf3bc0() {
   return (neuron0x3bde090()*0.437151);
}

double NNfunction_sg_cR::synapse0x3bf3c00() {
   return (neuron0x3bde3d0()*0.0665699);
}

double NNfunction_sg_cR::synapse0x3bf3c40() {
   return (neuron0x3bde710()*0.550507);
}

double NNfunction_sg_cR::synapse0x3bf3c80() {
   return (neuron0x3bdea50()*-0.411244);
}

double NNfunction_sg_cR::synapse0x3bf3710() {
   return (neuron0x3bded90()*-0.104549);
}

double NNfunction_sg_cR::synapse0x3bf3750() {
   return (neuron0x3bdf2f0()*-0.330748);
}

double NNfunction_sg_cR::synapse0x3bf3dd0() {
   return (neuron0x3bdf510()*0.0753621);
}

double NNfunction_sg_cR::synapse0x3bf3e10() {
   return (neuron0x3bdf850()*-0.425505);
}

double NNfunction_sg_cR::synapse0x3bf3e50() {
   return (neuron0x3bdfb90()*-0.268152);
}

double NNfunction_sg_cR::synapse0x3bf3e90() {
   return (neuron0x3bdfed0()*0.268268);
}

double NNfunction_sg_cR::synapse0x3bf3ed0() {
   return (neuron0x3be0210()*0.143066);
}

double NNfunction_sg_cR::synapse0x3bf3f10() {
   return (neuron0x3be0550()*-0.133405);
}

double NNfunction_sg_cR::synapse0x3bf4290() {
   return (neuron0x3bdba20()*0.00320743);
}

double NNfunction_sg_cR::synapse0x3bf42d0() {
   return (neuron0x3bdbcd0()*-0.0219048);
}

double NNfunction_sg_cR::synapse0x3bf4310() {
   return (neuron0x3bdc010()*-0.0679336);
}

double NNfunction_sg_cR::synapse0x3bf4350() {
   return (neuron0x3bdc350()*0.238521);
}

double NNfunction_sg_cR::synapse0x3bf4390() {
   return (neuron0x3bdc690()*-0.398654);
}

double NNfunction_sg_cR::synapse0x3bf43d0() {
   return (neuron0x3bdc9d0()*0.327464);
}

double NNfunction_sg_cR::synapse0x3bf4410() {
   return (neuron0x3bdcd10()*0.178539);
}

double NNfunction_sg_cR::synapse0x3bf4450() {
   return (neuron0x3bdd050()*-0.33831);
}

double NNfunction_sg_cR::synapse0x3bf4490() {
   return (neuron0x3bdd390()*-0.0027672);
}

double NNfunction_sg_cR::synapse0x3bf44d0() {
   return (neuron0x3bdd6d0()*-0.0420299);
}

double NNfunction_sg_cR::synapse0x3bf4510() {
   return (neuron0x3bdda10()*-0.0441564);
}

double NNfunction_sg_cR::synapse0x3bf4550() {
   return (neuron0x3bddd50()*0.06788);
}

double NNfunction_sg_cR::synapse0x3bf4590() {
   return (neuron0x3bde090()*-0.0253237);
}

double NNfunction_sg_cR::synapse0x3bf45d0() {
   return (neuron0x3bde3d0()*0.0430584);
}

double NNfunction_sg_cR::synapse0x3bf4610() {
   return (neuron0x3bde710()*0.402775);
}

double NNfunction_sg_cR::synapse0x3bf4650() {
   return (neuron0x3bdea50()*1.36687);
}

double NNfunction_sg_cR::synapse0x3bf40e0() {
   return (neuron0x3bded90()*0.290094);
}

double NNfunction_sg_cR::synapse0x3bf4120() {
   return (neuron0x3bdf2f0()*0.0223285);
}

double NNfunction_sg_cR::synapse0x3bf47a0() {
   return (neuron0x3bdf510()*-0.0454177);
}

double NNfunction_sg_cR::synapse0x3bf47e0() {
   return (neuron0x3bdf850()*-0.0365186);
}

double NNfunction_sg_cR::synapse0x3bf4820() {
   return (neuron0x3bdfb90()*-0.031038);
}

double NNfunction_sg_cR::synapse0x3bf4860() {
   return (neuron0x3bdfed0()*-0.15732);
}

double NNfunction_sg_cR::synapse0x3bf48a0() {
   return (neuron0x3be0210()*-0.019268);
}

double NNfunction_sg_cR::synapse0x3bf48e0() {
   return (neuron0x3be0550()*0.0502833);
}

double NNfunction_sg_cR::synapse0x3bf4c60() {
   return (neuron0x3bdba20()*-0.0355339);
}

double NNfunction_sg_cR::synapse0x3bf4ca0() {
   return (neuron0x3bdbcd0()*0.107103);
}

double NNfunction_sg_cR::synapse0x3bf4ce0() {
   return (neuron0x3bdc010()*-0.134399);
}

double NNfunction_sg_cR::synapse0x3bf4d20() {
   return (neuron0x3bdc350()*-0.0240237);
}

double NNfunction_sg_cR::synapse0x3bf4d60() {
   return (neuron0x3bdc690()*-0.0614851);
}

double NNfunction_sg_cR::synapse0x3bf4da0() {
   return (neuron0x3bdc9d0()*0.0081925);
}

double NNfunction_sg_cR::synapse0x3bf4de0() {
   return (neuron0x3bdcd10()*0.130411);
}

double NNfunction_sg_cR::synapse0x3bf4e20() {
   return (neuron0x3bdd050()*0.191473);
}

double NNfunction_sg_cR::synapse0x3bf4e60() {
   return (neuron0x3bdd390()*0.155376);
}

double NNfunction_sg_cR::synapse0x3bf4ea0() {
   return (neuron0x3bdd6d0()*-0.180139);
}

double NNfunction_sg_cR::synapse0x3bf4ee0() {
   return (neuron0x3bdda10()*0.228429);
}

double NNfunction_sg_cR::synapse0x3bf4f20() {
   return (neuron0x3bddd50()*-0.87627);
}

double NNfunction_sg_cR::synapse0x3bf4f60() {
   return (neuron0x3bde090()*-0.807981);
}

double NNfunction_sg_cR::synapse0x3bf4fa0() {
   return (neuron0x3bde3d0()*0.0898942);
}

double NNfunction_sg_cR::synapse0x3bf4fe0() {
   return (neuron0x3bde710()*-0.149439);
}

double NNfunction_sg_cR::synapse0x3bf5020() {
   return (neuron0x3bdea50()*-0.692303);
}

double NNfunction_sg_cR::synapse0x3bf4ab0() {
   return (neuron0x3bded90()*-0.027979);
}

double NNfunction_sg_cR::synapse0x3bf4af0() {
   return (neuron0x3bdf2f0()*-0.0383537);
}

double NNfunction_sg_cR::synapse0x3bf5170() {
   return (neuron0x3bdf510()*-0.1427);
}

double NNfunction_sg_cR::synapse0x3bf51b0() {
   return (neuron0x3bdf850()*0.0743683);
}

double NNfunction_sg_cR::synapse0x3bf51f0() {
   return (neuron0x3bdfb90()*0.000592136);
}

double NNfunction_sg_cR::synapse0x3bf5230() {
   return (neuron0x3bdfed0()*-0.123523);
}

double NNfunction_sg_cR::synapse0x3bf5270() {
   return (neuron0x3be0210()*-0.0515469);
}

double NNfunction_sg_cR::synapse0x3bf52b0() {
   return (neuron0x3be0550()*0.146284);
}

double NNfunction_sg_cR::synapse0x3bf5630() {
   return (neuron0x3bdba20()*-0.0345711);
}

double NNfunction_sg_cR::synapse0x3bf5670() {
   return (neuron0x3bdbcd0()*0.13004);
}

double NNfunction_sg_cR::synapse0x3bf56b0() {
   return (neuron0x3bdc010()*-0.0703174);
}

double NNfunction_sg_cR::synapse0x3bf56f0() {
   return (neuron0x3bdc350()*0.792321);
}

double NNfunction_sg_cR::synapse0x3bf5730() {
   return (neuron0x3bdc690()*0.0578223);
}

double NNfunction_sg_cR::synapse0x3bf5770() {
   return (neuron0x3bdc9d0()*0.0334202);
}

double NNfunction_sg_cR::synapse0x3bf57b0() {
   return (neuron0x3bdcd10()*0.0918978);
}

double NNfunction_sg_cR::synapse0x3bf57f0() {
   return (neuron0x3bdd050()*-0.0160634);
}

double NNfunction_sg_cR::synapse0x3bf5830() {
   return (neuron0x3bdd390()*0.0806971);
}

double NNfunction_sg_cR::synapse0x3bf5870() {
   return (neuron0x3bdd6d0()*-0.145318);
}

double NNfunction_sg_cR::synapse0x3bf58b0() {
   return (neuron0x3bdda10()*0.212286);
}

double NNfunction_sg_cR::synapse0x3bf58f0() {
   return (neuron0x3bddd50()*-0.326741);
}

double NNfunction_sg_cR::synapse0x3bf5930() {
   return (neuron0x3bde090()*-0.13605);
}

double NNfunction_sg_cR::synapse0x3bf5970() {
   return (neuron0x3bde3d0()*0.000520514);
}

double NNfunction_sg_cR::synapse0x3bf59b0() {
   return (neuron0x3bde710()*0.00961526);
}

double NNfunction_sg_cR::synapse0x3bf59f0() {
   return (neuron0x3bdea50()*0.774406);
}

double NNfunction_sg_cR::synapse0x3bf5480() {
   return (neuron0x3bded90()*0.0108779);
}

double NNfunction_sg_cR::synapse0x3bf54c0() {
   return (neuron0x3bdf2f0()*-0.0154163);
}

double NNfunction_sg_cR::synapse0x3bf5b40() {
   return (neuron0x3bdf510()*-0.0234293);
}

double NNfunction_sg_cR::synapse0x3bf5b80() {
   return (neuron0x3bdf850()*0.0886996);
}

double NNfunction_sg_cR::synapse0x3bf5bc0() {
   return (neuron0x3bdfb90()*0.061249);
}

double NNfunction_sg_cR::synapse0x3bf5c00() {
   return (neuron0x3bdfed0()*-0.0901936);
}

double NNfunction_sg_cR::synapse0x3bf5c40() {
   return (neuron0x3be0210()*0.0245521);
}

double NNfunction_sg_cR::synapse0x3bf5c80() {
   return (neuron0x3be0550()*-0.00494283);
}

double NNfunction_sg_cR::synapse0x3bf6000() {
   return (neuron0x3bdba20()*0.00482406);
}

double NNfunction_sg_cR::synapse0x3bf6040() {
   return (neuron0x3bdbcd0()*-0.00412196);
}

double NNfunction_sg_cR::synapse0x3bf6080() {
   return (neuron0x3bdc010()*-0.00230355);
}

double NNfunction_sg_cR::synapse0x3bf60c0() {
   return (neuron0x3bdc350()*3.22574);
}

double NNfunction_sg_cR::synapse0x3bf6100() {
   return (neuron0x3bdc690()*0.0177269);
}

double NNfunction_sg_cR::synapse0x3bf6140() {
   return (neuron0x3bdc9d0()*0.00749651);
}

double NNfunction_sg_cR::synapse0x3bf6180() {
   return (neuron0x3bdcd10()*-0.000213043);
}

double NNfunction_sg_cR::synapse0x3bf61c0() {
   return (neuron0x3bdd050()*-0.00388997);
}

double NNfunction_sg_cR::synapse0x3bf6200() {
   return (neuron0x3bdd390()*-0.00840903);
}

double NNfunction_sg_cR::synapse0x3bf6240() {
   return (neuron0x3bdd6d0()*-0.012303);
}

double NNfunction_sg_cR::synapse0x3bf6280() {
   return (neuron0x3bdda10()*-0.0103224);
}

double NNfunction_sg_cR::synapse0x3bf62c0() {
   return (neuron0x3bddd50()*0.00997936);
}

double NNfunction_sg_cR::synapse0x3bf6300() {
   return (neuron0x3bde090()*-0.0139538);
}

double NNfunction_sg_cR::synapse0x3bf6340() {
   return (neuron0x3bde3d0()*0.00677903);
}

double NNfunction_sg_cR::synapse0x3bf6380() {
   return (neuron0x3bde710()*0.00272982);
}

double NNfunction_sg_cR::synapse0x3bf63c0() {
   return (neuron0x3bdea50()*0.062153);
}

double NNfunction_sg_cR::synapse0x3bf5e50() {
   return (neuron0x3bded90()*0.00494795);
}

double NNfunction_sg_cR::synapse0x3bf5e90() {
   return (neuron0x3bdf2f0()*0.00554375);
}

double NNfunction_sg_cR::synapse0x3bf6510() {
   return (neuron0x3bdf510()*0.00346697);
}

double NNfunction_sg_cR::synapse0x3bf6550() {
   return (neuron0x3bdf850()*0.0052116);
}

double NNfunction_sg_cR::synapse0x3bf6590() {
   return (neuron0x3bdfb90()*-0.00518955);
}

double NNfunction_sg_cR::synapse0x3bf65d0() {
   return (neuron0x3bdfed0()*0.00175925);
}

double NNfunction_sg_cR::synapse0x3bf6610() {
   return (neuron0x3be0210()*-0.00994547);
}

double NNfunction_sg_cR::synapse0x3bf6650() {
   return (neuron0x3be0550()*-0.00539402);
}

double NNfunction_sg_cR::synapse0x3bf69d0() {
   return (neuron0x3bdba20()*0.00748583);
}

double NNfunction_sg_cR::synapse0x3bf6a10() {
   return (neuron0x3bdbcd0()*-0.0810175);
}

double NNfunction_sg_cR::synapse0x3bf6a50() {
   return (neuron0x3bdc010()*-0.0142926);
}

double NNfunction_sg_cR::synapse0x3bf6a90() {
   return (neuron0x3bdc350()*-9.57746);
}

double NNfunction_sg_cR::synapse0x3bf6ad0() {
   return (neuron0x3bdc690()*0.000509362);
}

double NNfunction_sg_cR::synapse0x3bf6b10() {
   return (neuron0x3bdc9d0()*0.00641755);
}

double NNfunction_sg_cR::synapse0x3bf6b50() {
   return (neuron0x3bdcd10()*0.00227141);
}

double NNfunction_sg_cR::synapse0x3bf6b90() {
   return (neuron0x3bdd050()*-0.0174565);
}

double NNfunction_sg_cR::synapse0x3bf6bd0() {
   return (neuron0x3bdd390()*-0.0154238);
}

double NNfunction_sg_cR::synapse0x3bf6c10() {
   return (neuron0x3bdd6d0()*-0.0864662);
}

double NNfunction_sg_cR::synapse0x3bf6c50() {
   return (neuron0x3bdda10()*0.00486648);
}

double NNfunction_sg_cR::synapse0x3bf6c90() {
   return (neuron0x3bddd50()*0.024407);
}

double NNfunction_sg_cR::synapse0x3bf6cd0() {
   return (neuron0x3bde090()*-0.0161253);
}

double NNfunction_sg_cR::synapse0x3bf6d10() {
   return (neuron0x3bde3d0()*-0.00512898);
}

double NNfunction_sg_cR::synapse0x3bf6d50() {
   return (neuron0x3bde710()*0.0354374);
}

double NNfunction_sg_cR::synapse0x3bf6d90() {
   return (neuron0x3bdea50()*-0.400053);
}

double NNfunction_sg_cR::synapse0x3bf6820() {
   return (neuron0x3bded90()*0.0185252);
}

double NNfunction_sg_cR::synapse0x3bf6860() {
   return (neuron0x3bdf2f0()*-0.011938);
}

double NNfunction_sg_cR::synapse0x3bf6ee0() {
   return (neuron0x3bdf510()*0.0168237);
}

double NNfunction_sg_cR::synapse0x3bf6f20() {
   return (neuron0x3bdf850()*0.0145974);
}

double NNfunction_sg_cR::synapse0x3bf6f60() {
   return (neuron0x3bdfb90()*0.045072);
}

double NNfunction_sg_cR::synapse0x3bf6fa0() {
   return (neuron0x3bdfed0()*-0.0183257);
}

double NNfunction_sg_cR::synapse0x3bf6fe0() {
   return (neuron0x3be0210()*-0.00544525);
}

double NNfunction_sg_cR::synapse0x3bf7020() {
   return (neuron0x3be0550()*-0.0243968);
}

double NNfunction_sg_cR::synapse0x3bf73a0() {
   return (neuron0x3bdba20()*-0.00214303);
}

double NNfunction_sg_cR::synapse0x3beb970() {
   return (neuron0x3bdbcd0()*0.00211087);
}

double NNfunction_sg_cR::synapse0x3beb9b0() {
   return (neuron0x3bdc010()*-0.00078505);
}

double NNfunction_sg_cR::synapse0x3beb9f0() {
   return (neuron0x3bdc350()*1.71748);
}

double NNfunction_sg_cR::synapse0x3bebc40() {
   return (neuron0x3bdc690()*-0.0354767);
}

double NNfunction_sg_cR::synapse0x3bebc80() {
   return (neuron0x3bdc9d0()*-0.019472);
}

double NNfunction_sg_cR::synapse0x3bebcc0() {
   return (neuron0x3bdcd10()*-0.00817378);
}

double NNfunction_sg_cR::synapse0x3bebf10() {
   return (neuron0x3bdd050()*-0.00452148);
}

double NNfunction_sg_cR::synapse0x3bebf50() {
   return (neuron0x3bdd390()*-0.00101124);
}

double NNfunction_sg_cR::synapse0x3bec1a0() {
   return (neuron0x3bdd6d0()*-0.000765441);
}

double NNfunction_sg_cR::synapse0x3bec1e0() {
   return (neuron0x3bdda10()*0.0274729);
}

double NNfunction_sg_cR::synapse0x3bec220() {
   return (neuron0x3bddd50()*0.0193995);
}

double NNfunction_sg_cR::synapse0x3bec470() {
   return (neuron0x3bde090()*0.0195267);
}

double NNfunction_sg_cR::synapse0x3bec4b0() {
   return (neuron0x3bde3d0()*0.0157532);
}

double NNfunction_sg_cR::synapse0x3bec700() {
   return (neuron0x3bde710()*0.00247946);
}

double NNfunction_sg_cR::synapse0x3bec740() {
   return (neuron0x3bdea50()*0.212311);
}

double NNfunction_sg_cR::synapse0x3bf71f0() {
   return (neuron0x3bded90()*0.00249125);
}

double NNfunction_sg_cR::synapse0x3bf7230() {
   return (neuron0x3bdf2f0()*0.0127381);
}

double NNfunction_sg_cR::synapse0x3bec890() {
   return (neuron0x3bdf510()*0.0126312);
}

double NNfunction_sg_cR::synapse0x3becda0() {
   return (neuron0x3bdf850()*0.0058459);
}

double NNfunction_sg_cR::synapse0x3becde0() {
   return (neuron0x3bdfb90()*-0.00429139);
}

double NNfunction_sg_cR::synapse0x3bece20() {
   return (neuron0x3bdfed0()*0.00273267);
}

double NNfunction_sg_cR::synapse0x3bed070() {
   return (neuron0x3be0210()*-0.000180787);
}

double NNfunction_sg_cR::synapse0x3bed0b0() {
   return (neuron0x3be0550()*0.00417799);
}

double NNfunction_sg_cR::synapse0x3bec960() {
   return (neuron0x3bdba20()*0.011919);
}

double NNfunction_sg_cR::synapse0x3bec9a0() {
   return (neuron0x3bdbcd0()*-0.0138534);
}

double NNfunction_sg_cR::synapse0x3bec9e0() {
   return (neuron0x3bdc010()*0.0188375);
}

double NNfunction_sg_cR::synapse0x3beca20() {
   return (neuron0x3bdc350()*0.938958);
}

double NNfunction_sg_cR::synapse0x3bed3a0() {
   return (neuron0x3bdc690()*-0.0258528);
}

double NNfunction_sg_cR::synapse0x3bf96f0() {
   return (neuron0x3bdc9d0()*0.00649493);
}

double NNfunction_sg_cR::synapse0x3bf9730() {
   return (neuron0x3bdcd10()*0.02109);
}

double NNfunction_sg_cR::synapse0x3bf9770() {
   return (neuron0x3bdd050()*-0.0287943);
}

double NNfunction_sg_cR::synapse0x3bf97b0() {
   return (neuron0x3bdd390()*-0.00998736);
}

double NNfunction_sg_cR::synapse0x3bf97f0() {
   return (neuron0x3bdd6d0()*0.0314395);
}

double NNfunction_sg_cR::synapse0x3bf9830() {
   return (neuron0x3bdda10()*0.0139743);
}

double NNfunction_sg_cR::synapse0x3bf9870() {
   return (neuron0x3bddd50()*-0.823029);
}

double NNfunction_sg_cR::synapse0x3bf98b0() {
   return (neuron0x3bde090()*-0.016935);
}

double NNfunction_sg_cR::synapse0x3bf98f0() {
   return (neuron0x3bde3d0()*0.0463717);
}

double NNfunction_sg_cR::synapse0x3bf9930() {
   return (neuron0x3bde710()*-0.0423831);
}

double NNfunction_sg_cR::synapse0x3bf9970() {
   return (neuron0x3bdea50()*0.24163);
}

double NNfunction_sg_cR::synapse0x3bed280() {
   return (neuron0x3bded90()*0.0358785);
}

double NNfunction_sg_cR::synapse0x3bed2c0() {
   return (neuron0x3bdf2f0()*-0.0641852);
}

double NNfunction_sg_cR::synapse0x3bf9ac0() {
   return (neuron0x3bdf510()*-0.110162);
}

double NNfunction_sg_cR::synapse0x3bf9b00() {
   return (neuron0x3bdf850()*-0.0342859);
}

double NNfunction_sg_cR::synapse0x3bf9b40() {
   return (neuron0x3bdfb90()*-0.0224904);
}

double NNfunction_sg_cR::synapse0x3bf9b80() {
   return (neuron0x3bdfed0()*0.00617988);
}

double NNfunction_sg_cR::synapse0x3bf9bc0() {
   return (neuron0x3be0210()*-0.0113717);
}

double NNfunction_sg_cR::synapse0x3bf9c00() {
   return (neuron0x3be0550()*-0.0075602);
}

double NNfunction_sg_cR::synapse0x3bf9f80() {
   return (neuron0x3bdba20()*0.0236463);
}

double NNfunction_sg_cR::synapse0x3bf9fc0() {
   return (neuron0x3bdbcd0()*0.0314639);
}

double NNfunction_sg_cR::synapse0x3bfa000() {
   return (neuron0x3bdc010()*-0.01065);
}

double NNfunction_sg_cR::synapse0x3bfa040() {
   return (neuron0x3bdc350()*-0.978416);
}

double NNfunction_sg_cR::synapse0x3bfa080() {
   return (neuron0x3bdc690()*-0.00421775);
}

double NNfunction_sg_cR::synapse0x3bfa0c0() {
   return (neuron0x3bdc9d0()*0.00604367);
}

double NNfunction_sg_cR::synapse0x3bfa100() {
   return (neuron0x3bdcd10()*0.039291);
}

double NNfunction_sg_cR::synapse0x3bfa140() {
   return (neuron0x3bdd050()*0.00478682);
}

double NNfunction_sg_cR::synapse0x3bfa180() {
   return (neuron0x3bdd390()*-0.140757);
}

double NNfunction_sg_cR::synapse0x3bfa1c0() {
   return (neuron0x3bdd6d0()*-0.139162);
}

double NNfunction_sg_cR::synapse0x3bfa200() {
   return (neuron0x3bdda10()*0.00514291);
}

double NNfunction_sg_cR::synapse0x3bfa240() {
   return (neuron0x3bddd50()*-0.107128);
}

double NNfunction_sg_cR::synapse0x3bfa280() {
   return (neuron0x3bde090()*-0.111771);
}

double NNfunction_sg_cR::synapse0x3bfa2c0() {
   return (neuron0x3bde3d0()*0.078722);
}

double NNfunction_sg_cR::synapse0x3bfa300() {
   return (neuron0x3bde710()*-0.0333283);
}

double NNfunction_sg_cR::synapse0x3bfa340() {
   return (neuron0x3bdea50()*1.82378);
}

double NNfunction_sg_cR::synapse0x3bf9dd0() {
   return (neuron0x3bded90()*0.0192175);
}

double NNfunction_sg_cR::synapse0x3bf9e10() {
   return (neuron0x3bdf2f0()*-0.14373);
}

double NNfunction_sg_cR::synapse0x3bfa490() {
   return (neuron0x3bdf510()*-0.0195725);
}

double NNfunction_sg_cR::synapse0x3bfa4d0() {
   return (neuron0x3bdf850()*-0.101999);
}

double NNfunction_sg_cR::synapse0x3bfa510() {
   return (neuron0x3bdfb90()*0.00103901);
}

double NNfunction_sg_cR::synapse0x3bfa550() {
   return (neuron0x3bdfed0()*-0.0409017);
}

double NNfunction_sg_cR::synapse0x3bfa590() {
   return (neuron0x3be0210()*-0.00965805);
}

double NNfunction_sg_cR::synapse0x3bfa5d0() {
   return (neuron0x3be0550()*-0.0190356);
}

double NNfunction_sg_cR::synapse0x3bfa950() {
   return (neuron0x3bdba20()*-0.0146357);
}

double NNfunction_sg_cR::synapse0x3bfa990() {
   return (neuron0x3bdbcd0()*-0.000791641);
}

double NNfunction_sg_cR::synapse0x3bfa9d0() {
   return (neuron0x3bdc010()*-0.00481722);
}

double NNfunction_sg_cR::synapse0x3bfaa10() {
   return (neuron0x3bdc350()*-0.340221);
}

double NNfunction_sg_cR::synapse0x3bfaa50() {
   return (neuron0x3bdc690()*-0.0114463);
}

double NNfunction_sg_cR::synapse0x3bfaa90() {
   return (neuron0x3bdc9d0()*-0.0105396);
}

double NNfunction_sg_cR::synapse0x3bfaad0() {
   return (neuron0x3bdcd10()*0.0177231);
}

double NNfunction_sg_cR::synapse0x3bfab10() {
   return (neuron0x3bdd050()*0.00241764);
}

double NNfunction_sg_cR::synapse0x3bfab50() {
   return (neuron0x3bdd390()*-0.0103444);
}

double NNfunction_sg_cR::synapse0x3bfab90() {
   return (neuron0x3bdd6d0()*-0.0232579);
}

double NNfunction_sg_cR::synapse0x3bfabd0() {
   return (neuron0x3bdda10()*0.00409978);
}

double NNfunction_sg_cR::synapse0x3bfac10() {
   return (neuron0x3bddd50()*-0.0418552);
}

double NNfunction_sg_cR::synapse0x3bfac50() {
   return (neuron0x3bde090()*-0.0206323);
}

double NNfunction_sg_cR::synapse0x3bfac90() {
   return (neuron0x3bde3d0()*0.0150161);
}

double NNfunction_sg_cR::synapse0x3bfacd0() {
   return (neuron0x3bde710()*-0.0119354);
}

double NNfunction_sg_cR::synapse0x3bfad10() {
   return (neuron0x3bdea50()*3.22643);
}

double NNfunction_sg_cR::synapse0x3bfa7a0() {
   return (neuron0x3bded90()*0.0152965);
}

double NNfunction_sg_cR::synapse0x3bfa7e0() {
   return (neuron0x3bdf2f0()*-0.0167688);
}

double NNfunction_sg_cR::synapse0x3bfae60() {
   return (neuron0x3bdf510()*-0.0125887);
}

double NNfunction_sg_cR::synapse0x3bfaea0() {
   return (neuron0x3bdf850()*-0.0348538);
}

double NNfunction_sg_cR::synapse0x3bfaee0() {
   return (neuron0x3bdfb90()*-0.00180636);
}

double NNfunction_sg_cR::synapse0x3bfaf20() {
   return (neuron0x3bdfed0()*-0.0113949);
}

double NNfunction_sg_cR::synapse0x3bfaf60() {
   return (neuron0x3be0210()*-0.00351648);
}

double NNfunction_sg_cR::synapse0x3bfafa0() {
   return (neuron0x3be0550()*-0.00384451);
}

double NNfunction_sg_cR::synapse0x3bfb320() {
   return (neuron0x3bdba20()*0.00794713);
}

double NNfunction_sg_cR::synapse0x3bfb360() {
   return (neuron0x3bdbcd0()*0.1019);
}

double NNfunction_sg_cR::synapse0x3bfb3a0() {
   return (neuron0x3bdc010()*0.00155695);
}

double NNfunction_sg_cR::synapse0x3bfb3e0() {
   return (neuron0x3bdc350()*0.113176);
}

double NNfunction_sg_cR::synapse0x3bfb420() {
   return (neuron0x3bdc690()*0.102632);
}

double NNfunction_sg_cR::synapse0x3bfb460() {
   return (neuron0x3bdc9d0()*0.0499951);
}

double NNfunction_sg_cR::synapse0x3bfb4a0() {
   return (neuron0x3bdcd10()*0.0517655);
}

double NNfunction_sg_cR::synapse0x3bfb4e0() {
   return (neuron0x3bdd050()*-0.0634666);
}

double NNfunction_sg_cR::synapse0x3bfb520() {
   return (neuron0x3bdd390()*-0.320277);
}

double NNfunction_sg_cR::synapse0x3bfb560() {
   return (neuron0x3bdd6d0()*-0.0644388);
}

double NNfunction_sg_cR::synapse0x3bfb5a0() {
   return (neuron0x3bdda10()*0.00145385);
}

double NNfunction_sg_cR::synapse0x3bfb5e0() {
   return (neuron0x3bddd50()*-0.0208409);
}

double NNfunction_sg_cR::synapse0x3bfb620() {
   return (neuron0x3bde090()*-0.620215);
}

double NNfunction_sg_cR::synapse0x3bfb660() {
   return (neuron0x3bde3d0()*-0.0135729);
}

double NNfunction_sg_cR::synapse0x3bfb6a0() {
   return (neuron0x3bde710()*-0.124361);
}

double NNfunction_sg_cR::synapse0x3bfb6e0() {
   return (neuron0x3bdea50()*0.22216);
}

double NNfunction_sg_cR::synapse0x3bfb170() {
   return (neuron0x3bded90()*-0.000445144);
}

double NNfunction_sg_cR::synapse0x3bfb1b0() {
   return (neuron0x3bdf2f0()*-0.741658);
}

double NNfunction_sg_cR::synapse0x3bfb830() {
   return (neuron0x3bdf510()*0.0658979);
}

double NNfunction_sg_cR::synapse0x3bfb870() {
   return (neuron0x3bdf850()*0.102279);
}

double NNfunction_sg_cR::synapse0x3bfb8b0() {
   return (neuron0x3bdfb90()*-0.00679632);
}

double NNfunction_sg_cR::synapse0x3bfb8f0() {
   return (neuron0x3bdfed0()*-0.0153529);
}

double NNfunction_sg_cR::synapse0x3bfb930() {
   return (neuron0x3be0210()*-0.024823);
}

double NNfunction_sg_cR::synapse0x3bfb970() {
   return (neuron0x3be0550()*-0.0272103);
}

double NNfunction_sg_cR::synapse0x3bfbcf0() {
   return (neuron0x3bdba20()*-0.00371298);
}

double NNfunction_sg_cR::synapse0x3bfbd30() {
   return (neuron0x3bdbcd0()*-0.00260772);
}

double NNfunction_sg_cR::synapse0x3bfbd70() {
   return (neuron0x3bdc010()*0.0061132);
}

double NNfunction_sg_cR::synapse0x3bfbdb0() {
   return (neuron0x3bdc350()*0.175274);
}

double NNfunction_sg_cR::synapse0x3bfbdf0() {
   return (neuron0x3bdc690()*-0.0400444);
}

double NNfunction_sg_cR::synapse0x3bfbe30() {
   return (neuron0x3bdc9d0()*0.0310992);
}

double NNfunction_sg_cR::synapse0x3bfbe70() {
   return (neuron0x3bdcd10()*0.0310567);
}

double NNfunction_sg_cR::synapse0x3bfbeb0() {
   return (neuron0x3bdd050()*-0.0516342);
}

double NNfunction_sg_cR::synapse0x3bfbef0() {
   return (neuron0x3bdd390()*0.00594784);
}

double NNfunction_sg_cR::synapse0x3bfbf30() {
   return (neuron0x3bdd6d0()*-0.00516908);
}

double NNfunction_sg_cR::synapse0x3bfbf70() {
   return (neuron0x3bdda10()*-0.00027949);
}

double NNfunction_sg_cR::synapse0x3bfbfb0() {
   return (neuron0x3bddd50()*-0.0107486);
}

double NNfunction_sg_cR::synapse0x3bfbff0() {
   return (neuron0x3bde090()*0.0051746);
}

double NNfunction_sg_cR::synapse0x3bfc030() {
   return (neuron0x3bde3d0()*0.00520353);
}

double NNfunction_sg_cR::synapse0x3bfc070() {
   return (neuron0x3bde710()*0.0586195);
}

double NNfunction_sg_cR::synapse0x3bfc0b0() {
   return (neuron0x3bdea50()*-0.557847);
}

double NNfunction_sg_cR::synapse0x3bfbb40() {
   return (neuron0x3bded90()*-0.0117203);
}

double NNfunction_sg_cR::synapse0x3bfbb80() {
   return (neuron0x3bdf2f0()*0.0111533);
}

double NNfunction_sg_cR::synapse0x3bfc200() {
   return (neuron0x3bdf510()*-0.00551041);
}

double NNfunction_sg_cR::synapse0x3bfc240() {
   return (neuron0x3bdf850()*-0.00412661);
}

double NNfunction_sg_cR::synapse0x3bfc280() {
   return (neuron0x3bdfb90()*-0.0116803);
}

double NNfunction_sg_cR::synapse0x3bfc2c0() {
   return (neuron0x3bdfed0()*0.00143993);
}

double NNfunction_sg_cR::synapse0x3bfc300() {
   return (neuron0x3be0210()*0.00288224);
}

double NNfunction_sg_cR::synapse0x3bfc340() {
   return (neuron0x3be0550()*0.00138254);
}

double NNfunction_sg_cR::synapse0x3bfc6c0() {
   return (neuron0x3bdba20()*-0.00419177);
}

double NNfunction_sg_cR::synapse0x3bfc700() {
   return (neuron0x3bdbcd0()*-0.00748826);
}

double NNfunction_sg_cR::synapse0x3bfc740() {
   return (neuron0x3bdc010()*0.0115052);
}

double NNfunction_sg_cR::synapse0x3bfc780() {
   return (neuron0x3bdc350()*-0.410169);
}

double NNfunction_sg_cR::synapse0x3bfc7c0() {
   return (neuron0x3bdc690()*-0.104981);
}

double NNfunction_sg_cR::synapse0x3bfc800() {
   return (neuron0x3bdc9d0()*-0.0163701);
}

double NNfunction_sg_cR::synapse0x3bfc840() {
   return (neuron0x3bdcd10()*0.00489364);
}

double NNfunction_sg_cR::synapse0x3bfc880() {
   return (neuron0x3bdd050()*-0.0210664);
}

double NNfunction_sg_cR::synapse0x3bfc8c0() {
   return (neuron0x3bdd390()*0.0208842);
}

double NNfunction_sg_cR::synapse0x3bfc900() {
   return (neuron0x3bdd6d0()*0.00312035);
}

double NNfunction_sg_cR::synapse0x3bfc940() {
   return (neuron0x3bdda10()*-0.0138187);
}

double NNfunction_sg_cR::synapse0x3bfc980() {
   return (neuron0x3bddd50()*-0.035893);
}

double NNfunction_sg_cR::synapse0x3bfc9c0() {
   return (neuron0x3bde090()*-0.0220634);
}

double NNfunction_sg_cR::synapse0x3bfca00() {
   return (neuron0x3bde3d0()*0.0162733);
}

double NNfunction_sg_cR::synapse0x3bfca40() {
   return (neuron0x3bde710()*0.0439553);
}

double NNfunction_sg_cR::synapse0x3bfca80() {
   return (neuron0x3bdea50()*0.764443);
}

double NNfunction_sg_cR::synapse0x3bfc510() {
   return (neuron0x3bded90()*-0.00172895);
}

double NNfunction_sg_cR::synapse0x3bfc550() {
   return (neuron0x3bdf2f0()*0.00279399);
}

double NNfunction_sg_cR::synapse0x3bfcbd0() {
   return (neuron0x3bdf510()*-0.0193801);
}

double NNfunction_sg_cR::synapse0x3bfcc10() {
   return (neuron0x3bdf850()*-0.00233008);
}

double NNfunction_sg_cR::synapse0x3bfcc50() {
   return (neuron0x3bdfb90()*-0.012353);
}

double NNfunction_sg_cR::synapse0x3bfcc90() {
   return (neuron0x3bdfed0()*0.010363);
}

double NNfunction_sg_cR::synapse0x3bfccd0() {
   return (neuron0x3be0210()*-0.000159372);
}

double NNfunction_sg_cR::synapse0x3bfcd10() {
   return (neuron0x3be0550()*0.00837179);
}

double NNfunction_sg_cR::synapse0x3bfd090() {
   return (neuron0x3bdba20()*0.00120931);
}

double NNfunction_sg_cR::synapse0x3bfd0d0() {
   return (neuron0x3bdbcd0()*0.0259892);
}

double NNfunction_sg_cR::synapse0x3bfd110() {
   return (neuron0x3bdc010()*0.0167702);
}

double NNfunction_sg_cR::synapse0x3bfd150() {
   return (neuron0x3bdc350()*0.0455122);
}

double NNfunction_sg_cR::synapse0x3bfd190() {
   return (neuron0x3bdc690()*0.152662);
}

double NNfunction_sg_cR::synapse0x3bfd1d0() {
   return (neuron0x3bdc9d0()*0.159168);
}

double NNfunction_sg_cR::synapse0x3bfd210() {
   return (neuron0x3bdcd10()*0.136692);
}

double NNfunction_sg_cR::synapse0x3bfd250() {
   return (neuron0x3bdd050()*-0.0447935);
}

double NNfunction_sg_cR::synapse0x3bfd290() {
   return (neuron0x3bdd390()*0.00112838);
}

double NNfunction_sg_cR::synapse0x3bfd2d0() {
   return (neuron0x3bdd6d0()*-0.0247337);
}

double NNfunction_sg_cR::synapse0x3bfd310() {
   return (neuron0x3bdda10()*-0.011637);
}

double NNfunction_sg_cR::synapse0x3bfd350() {
   return (neuron0x3bddd50()*-0.0254152);
}

double NNfunction_sg_cR::synapse0x3bfd390() {
   return (neuron0x3bde090()*-0.0513016);
}

double NNfunction_sg_cR::synapse0x3bfd3d0() {
   return (neuron0x3bde3d0()*-0.000514212);
}

double NNfunction_sg_cR::synapse0x3bfd410() {
   return (neuron0x3bde710()*0.0625761);
}

double NNfunction_sg_cR::synapse0x3bfd450() {
   return (neuron0x3bdea50()*0.256879);
}

double NNfunction_sg_cR::synapse0x3bfcee0() {
   return (neuron0x3bded90()*0.0220043);
}

double NNfunction_sg_cR::synapse0x3bfcf20() {
   return (neuron0x3bdf2f0()*-0.0214299);
}

double NNfunction_sg_cR::synapse0x3bfd5a0() {
   return (neuron0x3bdf510()*-0.0131443);
}

double NNfunction_sg_cR::synapse0x3bfd5e0() {
   return (neuron0x3bdf850()*0.00754086);
}

double NNfunction_sg_cR::synapse0x3bfd620() {
   return (neuron0x3bdfb90()*0.00817048);
}

double NNfunction_sg_cR::synapse0x3bfd660() {
   return (neuron0x3bdfed0()*0.00156087);
}

double NNfunction_sg_cR::synapse0x3bfd6a0() {
   return (neuron0x3be0210()*0.0069108);
}

double NNfunction_sg_cR::synapse0x3bfd6e0() {
   return (neuron0x3be0550()*-0.0155964);
}

double NNfunction_sg_cR::synapse0x3bfda60() {
   return (neuron0x3bdba20()*-0.0160999);
}

double NNfunction_sg_cR::synapse0x3bfdaa0() {
   return (neuron0x3bdbcd0()*-0.162154);
}

double NNfunction_sg_cR::synapse0x3bfdae0() {
   return (neuron0x3bdc010()*0.178096);
}

double NNfunction_sg_cR::synapse0x3bfdb20() {
   return (neuron0x3bdc350()*-0.366075);
}

double NNfunction_sg_cR::synapse0x3bfdb60() {
   return (neuron0x3bdc690()*0.383589);
}

double NNfunction_sg_cR::synapse0x3bfdba0() {
   return (neuron0x3bdc9d0()*0.524546);
}

double NNfunction_sg_cR::synapse0x3bfdbe0() {
   return (neuron0x3bdcd10()*0.661976);
}

double NNfunction_sg_cR::synapse0x3bfdc20() {
   return (neuron0x3bdd050()*0.582911);
}

double NNfunction_sg_cR::synapse0x3bfdc60() {
   return (neuron0x3bdd390()*0.39313);
}

double NNfunction_sg_cR::synapse0x3bfdca0() {
   return (neuron0x3bdd6d0()*-0.253383);
}

double NNfunction_sg_cR::synapse0x3bfdce0() {
   return (neuron0x3bdda10()*-0.0534388);
}

double NNfunction_sg_cR::synapse0x3bfdd20() {
   return (neuron0x3bddd50()*-0.0384652);
}

double NNfunction_sg_cR::synapse0x3bfdd60() {
   return (neuron0x3bde090()*0.0156772);
}

double NNfunction_sg_cR::synapse0x3bfdda0() {
   return (neuron0x3bde3d0()*0.546246);
}

double NNfunction_sg_cR::synapse0x3bfdde0() {
   return (neuron0x3bde710()*-0.0289922);
}

double NNfunction_sg_cR::synapse0x3bfde20() {
   return (neuron0x3bdea50()*0.720364);
}

double NNfunction_sg_cR::synapse0x3bfd8b0() {
   return (neuron0x3bded90()*0.391525);
}

double NNfunction_sg_cR::synapse0x3bfd8f0() {
   return (neuron0x3bdf2f0()*0.00493079);
}

double NNfunction_sg_cR::synapse0x3bfdf70() {
   return (neuron0x3bdf510()*0.0336639);
}

double NNfunction_sg_cR::synapse0x3bfdfb0() {
   return (neuron0x3bdf850()*0.0347843);
}

double NNfunction_sg_cR::synapse0x3bfdff0() {
   return (neuron0x3bdfb90()*0.196763);
}

double NNfunction_sg_cR::synapse0x3bfe030() {
   return (neuron0x3bdfed0()*-0.118778);
}

double NNfunction_sg_cR::synapse0x3bfe070() {
   return (neuron0x3be0210()*-0.251109);
}

double NNfunction_sg_cR::synapse0x3bfe0b0() {
   return (neuron0x3be0550()*-0.0355028);
}

double NNfunction_sg_cR::synapse0x3be6b60() {
   return (neuron0x3bdba20()*-0.00360025);
}

double NNfunction_sg_cR::synapse0x3be6ba0() {
   return (neuron0x3bdbcd0()*0.00908926);
}

double NNfunction_sg_cR::synapse0x3be6be0() {
   return (neuron0x3bdc010()*-0.0111524);
}

double NNfunction_sg_cR::synapse0x3be6c20() {
   return (neuron0x3bdc350()*-0.378894);
}

double NNfunction_sg_cR::synapse0x3be6c60() {
   return (neuron0x3bdc690()*0.152188);
}

double NNfunction_sg_cR::synapse0x3be6ca0() {
   return (neuron0x3bdc9d0()*0.0955766);
}

double NNfunction_sg_cR::synapse0x3be6ce0() {
   return (neuron0x3bdcd10()*0.0837812);
}

double NNfunction_sg_cR::synapse0x3be6d20() {
   return (neuron0x3bdd050()*-0.130672);
}

double NNfunction_sg_cR::synapse0x3bfe840() {
   return (neuron0x3bdd390()*0.0058484);
}

double NNfunction_sg_cR::synapse0x3bfe880() {
   return (neuron0x3bdd6d0()*-0.0386168);
}

double NNfunction_sg_cR::synapse0x3bfe8c0() {
   return (neuron0x3bdda10()*-0.0134621);
}

double NNfunction_sg_cR::synapse0x3bfe900() {
   return (neuron0x3bddd50()*-0.0551339);
}

double NNfunction_sg_cR::synapse0x3bfe940() {
   return (neuron0x3bde090()*-0.015802);
}

double NNfunction_sg_cR::synapse0x3bfe980() {
   return (neuron0x3bde3d0()*0.045752);
}

double NNfunction_sg_cR::synapse0x3bfe9c0() {
   return (neuron0x3bde710()*0.0681681);
}

double NNfunction_sg_cR::synapse0x3bfea00() {
   return (neuron0x3bdea50()*-2.06241);
}

double NNfunction_sg_cR::synapse0x3bfe280() {
   return (neuron0x3bded90()*0.00692461);
}

double NNfunction_sg_cR::synapse0x3bfe2c0() {
   return (neuron0x3bdf2f0()*0.0265534);
}

double NNfunction_sg_cR::synapse0x3bfeb50() {
   return (neuron0x3bdf510()*-0.0142203);
}

double NNfunction_sg_cR::synapse0x3bfeb90() {
   return (neuron0x3bdf850()*0.027548);
}

double NNfunction_sg_cR::synapse0x3bfebd0() {
   return (neuron0x3bdfb90()*-0.00820728);
}

double NNfunction_sg_cR::synapse0x3bfec10() {
   return (neuron0x3bdfed0()*-0.00876634);
}

double NNfunction_sg_cR::synapse0x3bfec50() {
   return (neuron0x3be0210()*0.0377325);
}

double NNfunction_sg_cR::synapse0x3bfec90() {
   return (neuron0x3be0550()*0.0242373);
}

double NNfunction_sg_cR::synapse0x3bff010() {
   return (neuron0x3bdba20()*-0.0298114);
}

double NNfunction_sg_cR::synapse0x3bff050() {
   return (neuron0x3bdbcd0()*0.286599);
}

double NNfunction_sg_cR::synapse0x3bff090() {
   return (neuron0x3bdc010()*-0.0195702);
}

double NNfunction_sg_cR::synapse0x3bff0d0() {
   return (neuron0x3bdc350()*0.594694);
}

double NNfunction_sg_cR::synapse0x3bff110() {
   return (neuron0x3bdc690()*-0.00670141);
}

double NNfunction_sg_cR::synapse0x3bff150() {
   return (neuron0x3bdc9d0()*-0.0153808);
}

double NNfunction_sg_cR::synapse0x3bff190() {
   return (neuron0x3bdcd10()*-0.053593);
}

double NNfunction_sg_cR::synapse0x3bff1d0() {
   return (neuron0x3bdd050()*-0.0522717);
}

double NNfunction_sg_cR::synapse0x3bff210() {
   return (neuron0x3bdd390()*-0.354116);
}

double NNfunction_sg_cR::synapse0x3bff250() {
   return (neuron0x3bdd6d0()*0.148721);
}

double NNfunction_sg_cR::synapse0x3bff290() {
   return (neuron0x3bdda10()*0.204105);
}

double NNfunction_sg_cR::synapse0x3bff2d0() {
   return (neuron0x3bddd50()*0.0593602);
}

double NNfunction_sg_cR::synapse0x3bff310() {
   return (neuron0x3bde090()*0.195968);
}

double NNfunction_sg_cR::synapse0x3bff350() {
   return (neuron0x3bde3d0()*-0.146582);
}

double NNfunction_sg_cR::synapse0x3bff390() {
   return (neuron0x3bde710()*-0.00994663);
}

double NNfunction_sg_cR::synapse0x3bff3d0() {
   return (neuron0x3bdea50()*1.16035);
}

double NNfunction_sg_cR::synapse0x3bfee60() {
   return (neuron0x3bded90()*-0.00609563);
}

double NNfunction_sg_cR::synapse0x3bfeea0() {
   return (neuron0x3bdf2f0()*0.0858765);
}

double NNfunction_sg_cR::synapse0x3bff520() {
   return (neuron0x3bdf510()*-0.689746);
}

double NNfunction_sg_cR::synapse0x3bff560() {
   return (neuron0x3bdf850()*0.268124);
}

double NNfunction_sg_cR::synapse0x3bff5a0() {
   return (neuron0x3bdfb90()*-0.0372996);
}

double NNfunction_sg_cR::synapse0x3bff5e0() {
   return (neuron0x3bdfed0()*-0.0775191);
}

double NNfunction_sg_cR::synapse0x3bff620() {
   return (neuron0x3be0210()*-0.0106239);
}

double NNfunction_sg_cR::synapse0x3bff660() {
   return (neuron0x3be0550()*-0.00883611);
}

double NNfunction_sg_cR::synapse0x3bff9e0() {
   return (neuron0x3bdba20()*-0.0194099);
}

double NNfunction_sg_cR::synapse0x3bffa20() {
   return (neuron0x3bdbcd0()*0.373363);
}

double NNfunction_sg_cR::synapse0x3bffa60() {
   return (neuron0x3bdc010()*-0.208739);
}

double NNfunction_sg_cR::synapse0x3bffaa0() {
   return (neuron0x3bdc350()*-0.527825);
}

double NNfunction_sg_cR::synapse0x3bffae0() {
   return (neuron0x3bdc690()*0.406493);
}

double NNfunction_sg_cR::synapse0x3bffb20() {
   return (neuron0x3bdc9d0()*-0.0421166);
}

double NNfunction_sg_cR::synapse0x3bffb60() {
   return (neuron0x3bdcd10()*0.28344);
}

double NNfunction_sg_cR::synapse0x3bffba0() {
   return (neuron0x3bdd050()*-0.172887);
}

double NNfunction_sg_cR::synapse0x3bffbe0() {
   return (neuron0x3bdd390()*-0.0499942);
}

double NNfunction_sg_cR::synapse0x3bffc20() {
   return (neuron0x3bdd6d0()*-0.0931447);
}

double NNfunction_sg_cR::synapse0x3bffc60() {
   return (neuron0x3bdda10()*0.449781);
}

double NNfunction_sg_cR::synapse0x3bffca0() {
   return (neuron0x3bddd50()*0.0470463);
}

double NNfunction_sg_cR::synapse0x3bffce0() {
   return (neuron0x3bde090()*0.222615);
}

double NNfunction_sg_cR::synapse0x3bffd20() {
   return (neuron0x3bde3d0()*0.178454);
}

double NNfunction_sg_cR::synapse0x3bffd60() {
   return (neuron0x3bde710()*0.0441229);
}

double NNfunction_sg_cR::synapse0x3bffda0() {
   return (neuron0x3bdea50()*0.351078);
}

double NNfunction_sg_cR::synapse0x3bff830() {
   return (neuron0x3bded90()*0.153298);
}

double NNfunction_sg_cR::synapse0x3bff870() {
   return (neuron0x3bdf2f0()*0.194522);
}

double NNfunction_sg_cR::synapse0x3bf03a0() {
   return (neuron0x3bdf510()*0.339489);
}

double NNfunction_sg_cR::synapse0x3bf03e0() {
   return (neuron0x3bdf850()*0.405196);
}

double NNfunction_sg_cR::synapse0x3bf0420() {
   return (neuron0x3bdfb90()*0.288124);
}

double NNfunction_sg_cR::synapse0x3bf0460() {
   return (neuron0x3bdfed0()*-0.256959);
}

double NNfunction_sg_cR::synapse0x3bf04a0() {
   return (neuron0x3be0210()*-0.0316795);
}

double NNfunction_sg_cR::synapse0x3bf04e0() {
   return (neuron0x3be0550()*-0.0814124);
}

double NNfunction_sg_cR::synapse0x3bf0860() {
   return (neuron0x3bdba20()*-0.00887061);
}

double NNfunction_sg_cR::synapse0x3bf08a0() {
   return (neuron0x3bdbcd0()*0.0157302);
}

double NNfunction_sg_cR::synapse0x3bf08e0() {
   return (neuron0x3bdc010()*0.0183221);
}

double NNfunction_sg_cR::synapse0x3bf0920() {
   return (neuron0x3bdc350()*1.44996);
}

double NNfunction_sg_cR::synapse0x3bf0960() {
   return (neuron0x3bdc690()*0.0624396);
}

double NNfunction_sg_cR::synapse0x3bf09a0() {
   return (neuron0x3bdc9d0()*0.0358523);
}

double NNfunction_sg_cR::synapse0x3bf09e0() {
   return (neuron0x3bdcd10()*0.0317603);
}

double NNfunction_sg_cR::synapse0x3bf0a20() {
   return (neuron0x3bdd050()*-0.0207904);
}

double NNfunction_sg_cR::synapse0x3bf0a60() {
   return (neuron0x3bdd390()*0.00983358);
}

double NNfunction_sg_cR::synapse0x3bf0aa0() {
   return (neuron0x3bdd6d0()*0.00860346);
}

double NNfunction_sg_cR::synapse0x3bf0ae0() {
   return (neuron0x3bdda10()*0.00352692);
}

double NNfunction_sg_cR::synapse0x3bf0b20() {
   return (neuron0x3bddd50()*0.179183);
}

double NNfunction_sg_cR::synapse0x3bf0b60() {
   return (neuron0x3bde090()*0.109792);
}

double NNfunction_sg_cR::synapse0x3bf0ba0() {
   return (neuron0x3bde3d0()*-0.0262411);
}

double NNfunction_sg_cR::synapse0x3bf0be0() {
   return (neuron0x3bde710()*0.105255);
}

double NNfunction_sg_cR::synapse0x3bf0c20() {
   return (neuron0x3bdea50()*0.43925);
}

double NNfunction_sg_cR::synapse0x3bf06b0() {
   return (neuron0x3bded90()*0.0370592);
}

double NNfunction_sg_cR::synapse0x3bf06f0() {
   return (neuron0x3bdf2f0()*0.0643867);
}

double NNfunction_sg_cR::synapse0x3bf0d70() {
   return (neuron0x3bdf510()*0.065334);
}

double NNfunction_sg_cR::synapse0x3bf0db0() {
   return (neuron0x3bdf850()*0.00273308);
}

double NNfunction_sg_cR::synapse0x3bf0df0() {
   return (neuron0x3bdfb90()*0.0275022);
}

double NNfunction_sg_cR::synapse0x3bf0e30() {
   return (neuron0x3bdfed0()*-0.00681496);
}

double NNfunction_sg_cR::synapse0x3bf0e70() {
   return (neuron0x3be0210()*0.0428833);
}

double NNfunction_sg_cR::synapse0x3bf0eb0() {
   return (neuron0x3be0550()*0.00968952);
}

double NNfunction_sg_cR::synapse0x3bf1230() {
   return (neuron0x3bdba20()*0.00499621);
}

double NNfunction_sg_cR::synapse0x3bf1270() {
   return (neuron0x3bdbcd0()*-0.0540277);
}

double NNfunction_sg_cR::synapse0x3bf12b0() {
   return (neuron0x3bdc010()*0.00182848);
}

double NNfunction_sg_cR::synapse0x3bf12f0() {
   return (neuron0x3bdc350()*2.56671);
}

double NNfunction_sg_cR::synapse0x3bf1330() {
   return (neuron0x3bdc690()*-0.0226341);
}

double NNfunction_sg_cR::synapse0x3bf1370() {
   return (neuron0x3bdc9d0()*0.00734674);
}

double NNfunction_sg_cR::synapse0x3bf13b0() {
   return (neuron0x3bdcd10()*-0.0118945);
}

double NNfunction_sg_cR::synapse0x3bf13f0() {
   return (neuron0x3bdd050()*0.0151124);
}

double NNfunction_sg_cR::synapse0x3bf1430() {
   return (neuron0x3bdd390()*0.00242593);
}

double NNfunction_sg_cR::synapse0x3bf1470() {
   return (neuron0x3bdd6d0()*-0.00542703);
}

double NNfunction_sg_cR::synapse0x3bf14b0() {
   return (neuron0x3bdda10()*0.00385093);
}

double NNfunction_sg_cR::synapse0x3bf14f0() {
   return (neuron0x3bddd50()*-0.111836);
}

double NNfunction_sg_cR::synapse0x3bf1530() {
   return (neuron0x3bde090()*-0.0349151);
}

double NNfunction_sg_cR::synapse0x3bf1570() {
   return (neuron0x3bde3d0()*0.0194338);
}

double NNfunction_sg_cR::synapse0x3bf15b0() {
   return (neuron0x3bde710()*-0.0336195);
}

double NNfunction_sg_cR::synapse0x3bf15f0() {
   return (neuron0x3bdea50()*0.125773);
}

double NNfunction_sg_cR::synapse0x3bf1080() {
   return (neuron0x3bded90()*-0.00444314);
}

double NNfunction_sg_cR::synapse0x3bf10c0() {
   return (neuron0x3bdf2f0()*-0.0584197);
}

double NNfunction_sg_cR::synapse0x3bf1740() {
   return (neuron0x3bdf510()*-0.022636);
}

double NNfunction_sg_cR::synapse0x3bf1780() {
   return (neuron0x3bdf850()*-0.00535882);
}

double NNfunction_sg_cR::synapse0x3bf17c0() {
   return (neuron0x3bdfb90()*-0.0200839);
}

double NNfunction_sg_cR::synapse0x3bf1800() {
   return (neuron0x3bdfed0()*0.00148634);
}

double NNfunction_sg_cR::synapse0x3bf1840() {
   return (neuron0x3be0210()*-0.00776302);
}

double NNfunction_sg_cR::synapse0x3bf1880() {
   return (neuron0x3be0550()*-0.00607749);
}

double NNfunction_sg_cR::synapse0x3bf1c00() {
   return (neuron0x3bdba20()*-0.042593);
}

double NNfunction_sg_cR::synapse0x3bf1c40() {
   return (neuron0x3bdbcd0()*0.0315293);
}

double NNfunction_sg_cR::synapse0x3bf1c80() {
   return (neuron0x3bdc010()*0.00472695);
}

double NNfunction_sg_cR::synapse0x3bf1cc0() {
   return (neuron0x3bdc350()*0.104967);
}

double NNfunction_sg_cR::synapse0x3bf1d00() {
   return (neuron0x3bdc690()*-0.010758);
}

double NNfunction_sg_cR::synapse0x3bf1d40() {
   return (neuron0x3bdc9d0()*0.121755);
}

double NNfunction_sg_cR::synapse0x3bf1d80() {
   return (neuron0x3bdcd10()*-0.147112);
}

double NNfunction_sg_cR::synapse0x3bf1dc0() {
   return (neuron0x3bdd050()*0.700427);
}

double NNfunction_sg_cR::synapse0x3bf1e00() {
   return (neuron0x3bdd390()*0.0654137);
}

double NNfunction_sg_cR::synapse0x3bf1e40() {
   return (neuron0x3bdd6d0()*0.0296216);
}

double NNfunction_sg_cR::synapse0x3bf1e80() {
   return (neuron0x3bdda10()*-0.00423841);
}

double NNfunction_sg_cR::synapse0x3bf1ec0() {
   return (neuron0x3bddd50()*0.0718633);
}

double NNfunction_sg_cR::synapse0x3bf1f00() {
   return (neuron0x3bde090()*0.167987);
}

double NNfunction_sg_cR::synapse0x3bf1f40() {
   return (neuron0x3bde3d0()*0.0548081);
}

double NNfunction_sg_cR::synapse0x3bf1f80() {
   return (neuron0x3bde710()*0.482146);
}

double NNfunction_sg_cR::synapse0x3bf1fc0() {
   return (neuron0x3bdea50()*-0.670341);
}

double NNfunction_sg_cR::synapse0x3bf1a50() {
   return (neuron0x3bded90()*0.247244);
}

double NNfunction_sg_cR::synapse0x3bf1a90() {
   return (neuron0x3bdf2f0()*0.114418);
}

double NNfunction_sg_cR::synapse0x3bf2110() {
   return (neuron0x3bdf510()*0.0878862);
}

double NNfunction_sg_cR::synapse0x3bf2150() {
   return (neuron0x3bdf850()*0.0615137);
}

double NNfunction_sg_cR::synapse0x3bf2190() {
   return (neuron0x3bdfb90()*0.0320827);
}

double NNfunction_sg_cR::synapse0x3bf21d0() {
   return (neuron0x3bdfed0()*0.0334377);
}

double NNfunction_sg_cR::synapse0x3bf2210() {
   return (neuron0x3be0210()*-0.0190426);
}

double NNfunction_sg_cR::synapse0x3bf2250() {
   return (neuron0x3be0550()*0.0791529);
}

double NNfunction_sg_cR::synapse0x3c04120() {
   return (neuron0x3bdba20()*-0.0167583);
}

double NNfunction_sg_cR::synapse0x3c04160() {
   return (neuron0x3bdbcd0()*-0.264591);
}

double NNfunction_sg_cR::synapse0x3c041a0() {
   return (neuron0x3bdc010()*0.370667);
}

double NNfunction_sg_cR::synapse0x3c041e0() {
   return (neuron0x3bdc350()*-0.840325);
}

double NNfunction_sg_cR::synapse0x3c04220() {
   return (neuron0x3bdc690()*-0.0103644);
}

double NNfunction_sg_cR::synapse0x3c04260() {
   return (neuron0x3bdc9d0()*-0.343064);
}

double NNfunction_sg_cR::synapse0x3c042a0() {
   return (neuron0x3bdcd10()*-0.224278);
}

double NNfunction_sg_cR::synapse0x3c042e0() {
   return (neuron0x3bdd050()*0.0299069);
}

double NNfunction_sg_cR::synapse0x3c04320() {
   return (neuron0x3bdd390()*-0.0476705);
}

double NNfunction_sg_cR::synapse0x3c04360() {
   return (neuron0x3bdd6d0()*-0.00680792);
}

double NNfunction_sg_cR::synapse0x3c043a0() {
   return (neuron0x3bdda10()*0.469187);
}

double NNfunction_sg_cR::synapse0x3c043e0() {
   return (neuron0x3bddd50()*0.363853);
}

double NNfunction_sg_cR::synapse0x3c04420() {
   return (neuron0x3bde090()*0.240993);
}

double NNfunction_sg_cR::synapse0x3c04460() {
   return (neuron0x3bde3d0()*0.132246);
}

double NNfunction_sg_cR::synapse0x3c044a0() {
   return (neuron0x3bde710()*0.331416);
}

double NNfunction_sg_cR::synapse0x3c044e0() {
   return (neuron0x3bdea50()*0.197803);
}

double NNfunction_sg_cR::synapse0x3bf2290() {
   return (neuron0x3bded90()*0.0331171);
}

double NNfunction_sg_cR::synapse0x3bf22d0() {
   return (neuron0x3bdf2f0()*0.244212);
}

double NNfunction_sg_cR::synapse0x3c04630() {
   return (neuron0x3bdf510()*0.575997);
}

double NNfunction_sg_cR::synapse0x3c04670() {
   return (neuron0x3bdf850()*-0.242926);
}

double NNfunction_sg_cR::synapse0x3c046b0() {
   return (neuron0x3bdfb90()*-0.28325);
}

double NNfunction_sg_cR::synapse0x3c046f0() {
   return (neuron0x3bdfed0()*0.0644422);
}

double NNfunction_sg_cR::synapse0x3c04730() {
   return (neuron0x3be0210()*-0.0425248);
}

double NNfunction_sg_cR::synapse0x3c04770() {
   return (neuron0x3be0550()*0.554717);
}

double NNfunction_sg_cR::synapse0x3c04af0() {
   return (neuron0x3bdba20()*-0.0239545);
}

double NNfunction_sg_cR::synapse0x3c04b30() {
   return (neuron0x3bdbcd0()*-0.158153);
}

double NNfunction_sg_cR::synapse0x3c04b70() {
   return (neuron0x3bdc010()*0.116042);
}

double NNfunction_sg_cR::synapse0x3c04bb0() {
   return (neuron0x3bdc350()*-1.00039);
}

double NNfunction_sg_cR::synapse0x3c04bf0() {
   return (neuron0x3bdc690()*0.0158186);
}

double NNfunction_sg_cR::synapse0x3c04c30() {
   return (neuron0x3bdc9d0()*0.0671682);
}

double NNfunction_sg_cR::synapse0x3c04c70() {
   return (neuron0x3bdcd10()*0.0178244);
}

double NNfunction_sg_cR::synapse0x3c04cb0() {
   return (neuron0x3bdd050()*-0.0155714);
}

double NNfunction_sg_cR::synapse0x3c04cf0() {
   return (neuron0x3bdd390()*0.0623819);
}

double NNfunction_sg_cR::synapse0x3c04d30() {
   return (neuron0x3bdd6d0()*0.0598165);
}

double NNfunction_sg_cR::synapse0x3c04d70() {
   return (neuron0x3bdda10()*-0.351999);
}

double NNfunction_sg_cR::synapse0x3c04db0() {
   return (neuron0x3bddd50()*-0.262097);
}

double NNfunction_sg_cR::synapse0x3c04df0() {
   return (neuron0x3bde090()*-0.134645);
}

double NNfunction_sg_cR::synapse0x3c04e30() {
   return (neuron0x3bde3d0()*-0.0561982);
}

double NNfunction_sg_cR::synapse0x3c04e70() {
   return (neuron0x3bde710()*-0.0375249);
}

double NNfunction_sg_cR::synapse0x3c04eb0() {
   return (neuron0x3bdea50()*0.585267);
}

double NNfunction_sg_cR::synapse0x3c04940() {
   return (neuron0x3bded90()*0.0348794);
}

double NNfunction_sg_cR::synapse0x3c04980() {
   return (neuron0x3bdf2f0()*-0.0688055);
}

double NNfunction_sg_cR::synapse0x3c05000() {
   return (neuron0x3bdf510()*-0.232749);
}

double NNfunction_sg_cR::synapse0x3c05040() {
   return (neuron0x3bdf850()*-0.255183);
}

double NNfunction_sg_cR::synapse0x3c05080() {
   return (neuron0x3bdfb90()*-0.0891034);
}

double NNfunction_sg_cR::synapse0x3c050c0() {
   return (neuron0x3bdfed0()*0.0667738);
}

double NNfunction_sg_cR::synapse0x3c05100() {
   return (neuron0x3be0210()*0.0281935);
}

double NNfunction_sg_cR::synapse0x3c05140() {
   return (neuron0x3be0550()*0.0302887);
}

double NNfunction_sg_cR::synapse0x3c054c0() {
   return (neuron0x3bdba20()*0.0508078);
}

double NNfunction_sg_cR::synapse0x3c05500() {
   return (neuron0x3bdbcd0()*-0.0467756);
}

double NNfunction_sg_cR::synapse0x3c05540() {
   return (neuron0x3bdc010()*0.010667);
}

double NNfunction_sg_cR::synapse0x3c05580() {
   return (neuron0x3bdc350()*0.100234);
}

double NNfunction_sg_cR::synapse0x3c055c0() {
   return (neuron0x3bdc690()*0.0895425);
}

double NNfunction_sg_cR::synapse0x3c05600() {
   return (neuron0x3bdc9d0()*0.126744);
}

double NNfunction_sg_cR::synapse0x3c05640() {
   return (neuron0x3bdcd10()*-0.59235);
}

double NNfunction_sg_cR::synapse0x3c05680() {
   return (neuron0x3bdd050()*-0.196406);
}

double NNfunction_sg_cR::synapse0x3c056c0() {
   return (neuron0x3bdd390()*0.0102914);
}

double NNfunction_sg_cR::synapse0x3c05700() {
   return (neuron0x3bdd6d0()*0.0146786);
}

double NNfunction_sg_cR::synapse0x3c05740() {
   return (neuron0x3bdda10()*-0.00211373);
}

double NNfunction_sg_cR::synapse0x3c05780() {
   return (neuron0x3bddd50()*-0.000839117);
}

double NNfunction_sg_cR::synapse0x3c057c0() {
   return (neuron0x3bde090()*-0.0709618);
}

double NNfunction_sg_cR::synapse0x3c05800() {
   return (neuron0x3bde3d0()*0.0144684);
}

double NNfunction_sg_cR::synapse0x3c05840() {
   return (neuron0x3bde710()*0.243886);
}

double NNfunction_sg_cR::synapse0x3c05880() {
   return (neuron0x3bdea50()*0.717832);
}

double NNfunction_sg_cR::synapse0x3c05310() {
   return (neuron0x3bded90()*-0.134165);
}

double NNfunction_sg_cR::synapse0x3c05350() {
   return (neuron0x3bdf2f0()*-0.036187);
}

double NNfunction_sg_cR::synapse0x3c059d0() {
   return (neuron0x3bdf510()*-0.0373637);
}

double NNfunction_sg_cR::synapse0x3c05a10() {
   return (neuron0x3bdf850()*-0.0213026);
}

double NNfunction_sg_cR::synapse0x3c05a50() {
   return (neuron0x3bdfb90()*0.00890642);
}

double NNfunction_sg_cR::synapse0x3c05a90() {
   return (neuron0x3bdfed0()*-0.0160904);
}

double NNfunction_sg_cR::synapse0x3c05ad0() {
   return (neuron0x3be0210()*0.0218539);
}

double NNfunction_sg_cR::synapse0x3c05b10() {
   return (neuron0x3be0550()*-0.0773291);
}

double NNfunction_sg_cR::synapse0x3c05e90() {
   return (neuron0x3bdba20()*-0.00498547);
}

double NNfunction_sg_cR::synapse0x3c05ed0() {
   return (neuron0x3bdbcd0()*-0.572239);
}

double NNfunction_sg_cR::synapse0x3c05f10() {
   return (neuron0x3bdc010()*-0.0214309);
}

double NNfunction_sg_cR::synapse0x3c05f50() {
   return (neuron0x3bdc350()*-0.323106);
}

double NNfunction_sg_cR::synapse0x3c05f90() {
   return (neuron0x3bdc690()*0.000831872);
}

double NNfunction_sg_cR::synapse0x3c05fd0() {
   return (neuron0x3bdc9d0()*0.0235385);
}

double NNfunction_sg_cR::synapse0x3c06010() {
   return (neuron0x3bdcd10()*0.0239055);
}

double NNfunction_sg_cR::synapse0x3c06050() {
   return (neuron0x3bdd050()*0.0419236);
}

double NNfunction_sg_cR::synapse0x3c06090() {
   return (neuron0x3bdd390()*-0.434175);
}

double NNfunction_sg_cR::synapse0x3c060d0() {
   return (neuron0x3bdd6d0()*-0.177553);
}

double NNfunction_sg_cR::synapse0x3c06110() {
   return (neuron0x3bdda10()*-0.0751097);
}

double NNfunction_sg_cR::synapse0x3c06150() {
   return (neuron0x3bddd50()*0.0872639);
}

double NNfunction_sg_cR::synapse0x3c06190() {
   return (neuron0x3bde090()*0.103673);
}

double NNfunction_sg_cR::synapse0x3c061d0() {
   return (neuron0x3bde3d0()*-0.0501168);
}

double NNfunction_sg_cR::synapse0x3c06210() {
   return (neuron0x3bde710()*0.0026446);
}

double NNfunction_sg_cR::synapse0x3c06250() {
   return (neuron0x3bdea50()*-0.284109);
}

double NNfunction_sg_cR::synapse0x3c05ce0() {
   return (neuron0x3bded90()*-0.0205272);
}

double NNfunction_sg_cR::synapse0x3c05d20() {
   return (neuron0x3bdf2f0()*0.102761);
}

double NNfunction_sg_cR::synapse0x3c063a0() {
   return (neuron0x3bdf510()*-0.214101);
}

double NNfunction_sg_cR::synapse0x3c063e0() {
   return (neuron0x3bdf850()*0.0327606);
}

double NNfunction_sg_cR::synapse0x3c06420() {
   return (neuron0x3bdfb90()*0.0314767);
}

double NNfunction_sg_cR::synapse0x3c06460() {
   return (neuron0x3bdfed0()*0.0261437);
}

double NNfunction_sg_cR::synapse0x3c064a0() {
   return (neuron0x3be0210()*0.00264803);
}

double NNfunction_sg_cR::synapse0x3c064e0() {
   return (neuron0x3be0550()*-0.0195704);
}

double NNfunction_sg_cR::synapse0x39a6310() {
   return (neuron0x3be09c0()*-0.0192265);
}

double NNfunction_sg_cR::synapse0x39a6350() {
   return (neuron0x3be1310()*-1.90001);
}

double NNfunction_sg_cR::synapse0x3be2e80() {
   return (neuron0x3be1df0()*-1.44484);
}

double NNfunction_sg_cR::synapse0x3be2ec0() {
   return (neuron0x3be1890()*-0.308912);
}

double NNfunction_sg_cR::synapse0x3be4960() {
   return (neuron0x3be2bd0()*0.180987);
}

double NNfunction_sg_cR::synapse0x3be49a0() {
   return (neuron0x3be46b0()*-0.0468022);
}

double NNfunction_sg_cR::synapse0x3be5730() {
   return (neuron0x3be5480()*0.268023);
}

double NNfunction_sg_cR::synapse0x3be5770() {
   return (neuron0x3be5e50()*-0.00886663);
}

double NNfunction_sg_cR::synapse0x3be6100() {
   return (neuron0x3be6820()*-0.0281884);
}

double NNfunction_sg_cR::synapse0x3be6140() {
   return (neuron0x3be7300()*-0.299376);
}

double NNfunction_sg_cR::synapse0x3be6ad0() {
   return (neuron0x3be7cd0()*-0.0122557);
}

double NNfunction_sg_cR::synapse0x3be6b10() {
   return (neuron0x3be4db0()*0.629425);
}

double NNfunction_sg_cR::synapse0x3be75b0() {
   return (neuron0x3be9880()*-0.0695912);
}

double NNfunction_sg_cR::synapse0x3be75f0() {
   return (neuron0x3bea250()*0.01264);
}

double NNfunction_sg_cR::synapse0x3be7f80() {
   return (neuron0x3beac20()*-1.21523);
}

double NNfunction_sg_cR::synapse0x3be7fc0() {
   return (neuron0x3beb5f0()*-0.00942871);
}

double NNfunction_sg_cR::synapse0x3be5060() {
   return (neuron0x3bed400()*-0.485419);
}

double NNfunction_sg_cR::synapse0x3be50a0() {
   return (neuron0x3bed6e0()*-0.463662);
}

double NNfunction_sg_cR::synapse0x3be9b30() {
   return (neuron0x3bee0b0()*0.0624962);
}

double NNfunction_sg_cR::synapse0x3be9b70() {
   return (neuron0x3beea80()*0.0161285);
}

double NNfunction_sg_cR::synapse0x3bea500() {
   return (neuron0x3bef450()*-0.0158617);
}

double NNfunction_sg_cR::synapse0x3bea540() {
   return (neuron0x3befe20()*0.0529358);
}

double NNfunction_sg_cR::synapse0x3beaed0() {
   return (neuron0x3be8970()*0.0571598);
}

double NNfunction_sg_cR::synapse0x3beaf10() {
   return (neuron0x3be9340()*0.0565744);
}

double NNfunction_sg_cR::synapse0x3beb8a0() {
   return (neuron0x3bf2bb0()*-0.0491138);
}

double NNfunction_sg_cR::synapse0x3beb8e0() {
   return (neuron0x3bf3580()*-0.0217027);
}

double NNfunction_sg_cR::synapse0x3bde930() {
   return (neuron0x3bf3f50()*0.0142254);
}

double NNfunction_sg_cR::synapse0x3bde970() {
   return (neuron0x3bf4920()*0.0622024);
}

double NNfunction_sg_cR::synapse0x3bed990() {
   return (neuron0x3bf52f0()*0.051691);
}

double NNfunction_sg_cR::synapse0x3bed9d0() {
   return (neuron0x3bf5cc0()*1.09808);
}

double NNfunction_sg_cR::synapse0x3bee360() {
   return (neuron0x3bf6690()*0.323844);
}

double NNfunction_sg_cR::synapse0x3bee3a0() {
   return (neuron0x3bf7060()*-1.50628);
}

double NNfunction_sg_cR::synapse0x3beed30() {
   return (neuron0x3bed0f0()*0.103158);
}

double NNfunction_sg_cR::synapse0x3beed70() {
   return (neuron0x3bf9c40()*0.463688);
}

double NNfunction_sg_cR::synapse0x3bef700() {
   return (neuron0x3bfa610()*-0.380169);
}

double NNfunction_sg_cR::synapse0x3bef740() {
   return (neuron0x3bfafe0()*0.0537498);
}

double NNfunction_sg_cR::synapse0x3bf00d0() {
   return (neuron0x3bfb9b0()*1.56451);
}

double NNfunction_sg_cR::synapse0x3bf0110() {
   return (neuron0x3bfc380()*-1.06658);
}

double NNfunction_sg_cR::synapse0x3be8c20() {
   return (neuron0x3bfcd50()*-0.665071);
}

double NNfunction_sg_cR::synapse0x3be8c60() {
   return (neuron0x3bfd720()*-0.00891581);
}

double NNfunction_sg_cR::synapse0x3bf24d0() {
   return (neuron0x3bfe0f0()*-0.0514379);
}

double NNfunction_sg_cR::synapse0x3bf2510() {
   return (neuron0x3bfecd0()*-0.0174689);
}

double NNfunction_sg_cR::synapse0x3bf2e60() {
   return (neuron0x3bff6a0()*-0.0688113);
}

double NNfunction_sg_cR::synapse0x3bf2ea0() {
   return (neuron0x3bf0520()*0.51855);
}

double NNfunction_sg_cR::synapse0x3bf3830() {
   return (neuron0x3bf0ef0()*-0.788586);
}

double NNfunction_sg_cR::synapse0x3bf3870() {
   return (neuron0x3bf18c0()*-0.00483444);
}

double NNfunction_sg_cR::synapse0x3bf4200() {
   return (neuron0x3c03f00()*-0.0291162);
}

double NNfunction_sg_cR::synapse0x3bf4240() {
   return (neuron0x3c047b0()*0.0667465);
}

double NNfunction_sg_cR::synapse0x3bf4bd0() {
   return (neuron0x3c05180()*-0.00891005);
}

double NNfunction_sg_cR::synapse0x3bf4c10() {
   return (neuron0x3c05b50()*-0.0112598);
}

double NNfunction_sg_cR::synapse0x3bf7310() {
   return (neuron0x3be09c0()*-0.383957);
}

double NNfunction_sg_cR::synapse0x3bf7350() {
   return (neuron0x3be1310()*1.48688);
}

double NNfunction_sg_cR::synapse0x3bec8d0() {
   return (neuron0x3be1df0()*2.13055);
}

double NNfunction_sg_cR::synapse0x3bec910() {
   return (neuron0x3be1890()*0.0246538);
}

double NNfunction_sg_cR::synapse0x3bf9ef0() {
   return (neuron0x3be2bd0()*0.464387);
}

double NNfunction_sg_cR::synapse0x3bf9f30() {
   return (neuron0x3be46b0()*-0.292724);
}

double NNfunction_sg_cR::synapse0x3bfa8c0() {
   return (neuron0x3be5480()*-1.43828);
}

double NNfunction_sg_cR::synapse0x3bfa900() {
   return (neuron0x3be5e50()*0.739856);
}

double NNfunction_sg_cR::synapse0x3bfb290() {
   return (neuron0x3be6820()*-0.458891);
}

double NNfunction_sg_cR::synapse0x3bfb2d0() {
   return (neuron0x3be7300()*0.697032);
}

double NNfunction_sg_cR::synapse0x3bfbc60() {
   return (neuron0x3be7cd0()*0.726473);
}

double NNfunction_sg_cR::synapse0x3bfbca0() {
   return (neuron0x3be4db0()*-1.43073);
}

double NNfunction_sg_cR::synapse0x3bfc630() {
   return (neuron0x3be9880()*-0.47916);
}

double NNfunction_sg_cR::synapse0x3bfc670() {
   return (neuron0x3bea250()*-0.910861);
}

double NNfunction_sg_cR::synapse0x3bfd000() {
   return (neuron0x3beac20()*-0.79978);
}

double NNfunction_sg_cR::synapse0x3bfd040() {
   return (neuron0x3beb5f0()*0.696761);
}

double NNfunction_sg_cR::synapse0x3bfd9d0() {
   return (neuron0x3bed400()*1.40728);
}

double NNfunction_sg_cR::synapse0x3bfda10() {
   return (neuron0x3bed6e0()*0.796701);
}

double NNfunction_sg_cR::synapse0x3bfe3a0() {
   return (neuron0x3bee0b0()*0.659098);
}

double NNfunction_sg_cR::synapse0x3bfe3e0() {
   return (neuron0x3beea80()*0.144247);
}

double NNfunction_sg_cR::synapse0x3bfef80() {
   return (neuron0x3bef450()*-0.177676);
}

double NNfunction_sg_cR::synapse0x3bfefc0() {
   return (neuron0x3befe20()*0.0149119);
}

double NNfunction_sg_cR::synapse0x3bff950() {
   return (neuron0x3be8970()*0.401586);
}

double NNfunction_sg_cR::synapse0x3bff990() {
   return (neuron0x3be9340()*0.654391);
}

double NNfunction_sg_cR::synapse0x3bf07d0() {
   return (neuron0x3bf2bb0()*0.819813);
}

double NNfunction_sg_cR::synapse0x3bf0810() {
   return (neuron0x3bf3580()*-0.124864);
}

double NNfunction_sg_cR::synapse0x3bf11a0() {
   return (neuron0x3bf3f50()*0.539953);
}

double NNfunction_sg_cR::synapse0x3bf11e0() {
   return (neuron0x3bf4920()*0.137334);
}

double NNfunction_sg_cR::synapse0x3bf1b70() {
   return (neuron0x3bf52f0()*0.118767);
}

double NNfunction_sg_cR::synapse0x3bf1bb0() {
   return (neuron0x3bf5cc0()*-1.53262);
}

double NNfunction_sg_cR::synapse0x3c04090() {
   return (neuron0x3bf6690()*-1.61436);
}

double NNfunction_sg_cR::synapse0x3c040d0() {
   return (neuron0x3bf7060()*1.05283);
}

double NNfunction_sg_cR::synapse0x3c04a60() {
   return (neuron0x3bed0f0()*-0.784891);
}

double NNfunction_sg_cR::synapse0x3c04aa0() {
   return (neuron0x3bf9c40()*1.50206);
}

double NNfunction_sg_cR::synapse0x3c05430() {
   return (neuron0x3bfa610()*0.989672);
}

double NNfunction_sg_cR::synapse0x3c05470() {
   return (neuron0x3bfafe0()*-0.506634);
}

double NNfunction_sg_cR::synapse0x3c05e00() {
   return (neuron0x3bfb9b0()*-0.990669);
}

double NNfunction_sg_cR::synapse0x3c05e40() {
   return (neuron0x3bfc380()*0.931262);
}

double NNfunction_sg_cR::synapse0x3be0c70() {
   return (neuron0x3bfcd50()*0.474392);
}

double NNfunction_sg_cR::synapse0x3be0cb0() {
   return (neuron0x3bfd720()*0.0192105);
}

double NNfunction_sg_cR::synapse0x3bf55a0() {
   return (neuron0x3bfe0f0()*-0.822935);
}

double NNfunction_sg_cR::synapse0x3bf55e0() {
   return (neuron0x3bfecd0()*-0.608506);
}

double NNfunction_sg_cR::synapse0x3c06520() {
   return (neuron0x3bff6a0()*-0.306762);
}

double NNfunction_sg_cR::synapse0x3c06560() {
   return (neuron0x3bf0520()*0.55323);
}

double NNfunction_sg_cR::synapse0x3c065a0() {
   return (neuron0x3bf0ef0()*1.56078);
}

double NNfunction_sg_cR::synapse0x3c065e0() {
   return (neuron0x3bf18c0()*-0.636473);
}

double NNfunction_sg_cR::synapse0x3c0d490() {
   return (neuron0x3c03f00()*-0.106858);
}

double NNfunction_sg_cR::synapse0x3c0d4d0() {
   return (neuron0x3c047b0()*0.719465);
}

double NNfunction_sg_cR::synapse0x3c0d510() {
   return (neuron0x3c05180()*0.840375);
}

double NNfunction_sg_cR::synapse0x3c0d550() {
   return (neuron0x3c05b50()*0.933881);
}

double NNfunction_sg_cR::synapse0x3c0d8d0() {
   return (neuron0x3be09c0()*0.225499);
}

double NNfunction_sg_cR::synapse0x3c0d910() {
   return (neuron0x3be1310()*-1.11485);
}

double NNfunction_sg_cR::synapse0x3c0d950() {
   return (neuron0x3be1df0()*-1.32733);
}

double NNfunction_sg_cR::synapse0x3c0d990() {
   return (neuron0x3be1890()*-0.801449);
}

double NNfunction_sg_cR::synapse0x3c0d9d0() {
   return (neuron0x3be2bd0()*-0.981708);
}

double NNfunction_sg_cR::synapse0x3c0da10() {
   return (neuron0x3be46b0()*0.483278);
}

double NNfunction_sg_cR::synapse0x3c0da50() {
   return (neuron0x3be5480()*-0.935753);
}

double NNfunction_sg_cR::synapse0x3c0da90() {
   return (neuron0x3be5e50()*0.200263);
}

double NNfunction_sg_cR::synapse0x3c0dad0() {
   return (neuron0x3be6820()*-0.10564);
}

double NNfunction_sg_cR::synapse0x3c0db10() {
   return (neuron0x3be7300()*1.28347);
}

double NNfunction_sg_cR::synapse0x3c0db50() {
   return (neuron0x3be7cd0()*0.0967761);
}

double NNfunction_sg_cR::synapse0x3c0db90() {
   return (neuron0x3be4db0()*0.396104);
}

double NNfunction_sg_cR::synapse0x3c0dbd0() {
   return (neuron0x3be9880()*0.762492);
}

double NNfunction_sg_cR::synapse0x3c0dc10() {
   return (neuron0x3bea250()*-0.118346);
}

double NNfunction_sg_cR::synapse0x3c0dc50() {
   return (neuron0x3beac20()*4.39169);
}

double NNfunction_sg_cR::synapse0x3c0dc90() {
   return (neuron0x3beb5f0()*0.109364);
}

double NNfunction_sg_cR::synapse0x3c0d720() {
   return (neuron0x3bed400()*-1.86613);
}

double NNfunction_sg_cR::synapse0x3c0d760() {
   return (neuron0x3bed6e0()*1.86791);
}

double NNfunction_sg_cR::synapse0x3c0dde0() {
   return (neuron0x3bee0b0()*-0.216024);
}

double NNfunction_sg_cR::synapse0x3c0de20() {
   return (neuron0x3beea80()*-0.0574506);
}

double NNfunction_sg_cR::synapse0x3c0de60() {
   return (neuron0x3bef450()*-0.134233);
}

double NNfunction_sg_cR::synapse0x3c0dea0() {
   return (neuron0x3befe20()*0.0245944);
}

double NNfunction_sg_cR::synapse0x3c0dee0() {
   return (neuron0x3be8970()*-0.254297);
}

double NNfunction_sg_cR::synapse0x3c0df20() {
   return (neuron0x3be9340()*-0.3307);
}

double NNfunction_sg_cR::synapse0x3c0df60() {
   return (neuron0x3bf2bb0()*0.178469);
}

double NNfunction_sg_cR::synapse0x3c0dfa0() {
   return (neuron0x3bf3580()*0.061476);
}

double NNfunction_sg_cR::synapse0x3c0dfe0() {
   return (neuron0x3bf3f50()*-0.202145);
}

double NNfunction_sg_cR::synapse0x3c0e020() {
   return (neuron0x3bf4920()*0.0497338);
}

double NNfunction_sg_cR::synapse0x3c0e060() {
   return (neuron0x3bf52f0()*-0.675679);
}

double NNfunction_sg_cR::synapse0x3c0e0a0() {
   return (neuron0x3bf5cc0()*1.39623);
}

double NNfunction_sg_cR::synapse0x3c0e0e0() {
   return (neuron0x3bf6690()*-3.919);
}

double NNfunction_sg_cR::synapse0x3c0e120() {
   return (neuron0x3bf7060()*-3.19589);
}

double NNfunction_sg_cR::synapse0x3c0dcd0() {
   return (neuron0x3bed0f0()*0.0708949);
}

double NNfunction_sg_cR::synapse0x3c0dd10() {
   return (neuron0x3bf9c40()*-1.30041);
}

double NNfunction_sg_cR::synapse0x3c0dd50() {
   return (neuron0x3bfa610()*2.53009);
}

double NNfunction_sg_cR::synapse0x3c0dd90() {
   return (neuron0x3bfafe0()*-0.0796327);
}

double NNfunction_sg_cR::synapse0x3c0e370() {
   return (neuron0x3bfb9b0()*0.24209);
}

double NNfunction_sg_cR::synapse0x3c0e3b0() {
   return (neuron0x3bfc380()*1.39316);
}

double NNfunction_sg_cR::synapse0x3c0e3f0() {
   return (neuron0x3bfcd50()*-0.219607);
}

double NNfunction_sg_cR::synapse0x3c0e430() {
   return (neuron0x3bfd720()*0.0350847);
}

double NNfunction_sg_cR::synapse0x3c0e470() {
   return (neuron0x3bfe0f0()*1.53155);
}

double NNfunction_sg_cR::synapse0x3c0e4b0() {
   return (neuron0x3bfecd0()*-0.132112);
}

double NNfunction_sg_cR::synapse0x3c0e4f0() {
   return (neuron0x3bff6a0()*0.103714);
}

double NNfunction_sg_cR::synapse0x3c0e530() {
   return (neuron0x3bf0520()*-0.444326);
}

double NNfunction_sg_cR::synapse0x3c0e570() {
   return (neuron0x3bf0ef0()*0.329162);
}

double NNfunction_sg_cR::synapse0x3c0e5b0() {
   return (neuron0x3bf18c0()*-0.16725);
}

double NNfunction_sg_cR::synapse0x3c0e5f0() {
   return (neuron0x3c03f00()*-0.0233547);
}

double NNfunction_sg_cR::synapse0x3c0e630() {
   return (neuron0x3c047b0()*-0.324738);
}

double NNfunction_sg_cR::synapse0x3c0e670() {
   return (neuron0x3c05180()*-0.192642);
}

double NNfunction_sg_cR::synapse0x3c0e6b0() {
   return (neuron0x3c05b50()*0.258469);
}

double NNfunction_sg_cR::synapse0x3c0ea30() {
   return (neuron0x3be09c0()*0.164128);
}

double NNfunction_sg_cR::synapse0x3c0ea70() {
   return (neuron0x3be1310()*-0.213096);
}

double NNfunction_sg_cR::synapse0x3c0eab0() {
   return (neuron0x3be1df0()*-2.91417);
}

double NNfunction_sg_cR::synapse0x3c0eaf0() {
   return (neuron0x3be1890()*-0.344773);
}

double NNfunction_sg_cR::synapse0x3c0eb30() {
   return (neuron0x3be2bd0()*-0.156871);
}

double NNfunction_sg_cR::synapse0x3c0eb70() {
   return (neuron0x3be46b0()*-0.265682);
}

double NNfunction_sg_cR::synapse0x3c0ebb0() {
   return (neuron0x3be5480()*-1.12063);
}

double NNfunction_sg_cR::synapse0x3c0ebf0() {
   return (neuron0x3be5e50()*0.425817);
}

double NNfunction_sg_cR::synapse0x3c0ec30() {
   return (neuron0x3be6820()*-0.393508);
}

double NNfunction_sg_cR::synapse0x3c0ec70() {
   return (neuron0x3be7300()*-1.85411);
}

double NNfunction_sg_cR::synapse0x3c0ecb0() {
   return (neuron0x3be7cd0()*0.00205948);
}

double NNfunction_sg_cR::synapse0x3c0ecf0() {
   return (neuron0x3be4db0()*-0.434097);
}

double NNfunction_sg_cR::synapse0x3c0ed30() {
   return (neuron0x3be9880()*1.31605);
}

double NNfunction_sg_cR::synapse0x3c0ed70() {
   return (neuron0x3bea250()*-0.257597);
}

double NNfunction_sg_cR::synapse0x3c0edb0() {
   return (neuron0x3beac20()*4.77193);
}

double NNfunction_sg_cR::synapse0x3c0edf0() {
   return (neuron0x3beb5f0()*0.192521);
}

double NNfunction_sg_cR::synapse0x3c0e880() {
   return (neuron0x3bed400()*-3.66835);
}

double NNfunction_sg_cR::synapse0x3c0e8c0() {
   return (neuron0x3bed6e0()*-0.176646);
}

double NNfunction_sg_cR::synapse0x3c0ef40() {
   return (neuron0x3bee0b0()*-0.0749993);
}

double NNfunction_sg_cR::synapse0x3c0ef80() {
   return (neuron0x3beea80()*0.0293486);
}

double NNfunction_sg_cR::synapse0x3c0efc0() {
   return (neuron0x3bef450()*-0.0306726);
}

double NNfunction_sg_cR::synapse0x3c0f000() {
   return (neuron0x3befe20()*-1.76272);
}

double NNfunction_sg_cR::synapse0x3c0f040() {
   return (neuron0x3be8970()*-0.453037);
}

double NNfunction_sg_cR::synapse0x3c0f080() {
   return (neuron0x3be9340()*-0.528972);
}

double NNfunction_sg_cR::synapse0x3c0f0c0() {
   return (neuron0x3bf2bb0()*0.191803);
}

double NNfunction_sg_cR::synapse0x3c0f100() {
   return (neuron0x3bf3580()*-0.0310118);
}

double NNfunction_sg_cR::synapse0x3c0f140() {
   return (neuron0x3bf3f50()*0.0319383);
}

double NNfunction_sg_cR::synapse0x3c0f180() {
   return (neuron0x3bf4920()*0.649048);
}

double NNfunction_sg_cR::synapse0x3c0f1c0() {
   return (neuron0x3bf52f0()*1.19563);
}

double NNfunction_sg_cR::synapse0x3c0f200() {
   return (neuron0x3bf5cc0()*1.41765);
}

double NNfunction_sg_cR::synapse0x3c0f240() {
   return (neuron0x3bf6690()*-4.64461);
}

double NNfunction_sg_cR::synapse0x3c0f280() {
   return (neuron0x3bf7060()*-0.47554);
}

double NNfunction_sg_cR::synapse0x3c0ee30() {
   return (neuron0x3bed0f0()*0.629093);
}

double NNfunction_sg_cR::synapse0x3c0ee70() {
   return (neuron0x3bf9c40()*0.591682);
}

double NNfunction_sg_cR::synapse0x3c0eeb0() {
   return (neuron0x3bfa610()*-0.162742);
}

double NNfunction_sg_cR::synapse0x3c0eef0() {
   return (neuron0x3bfafe0()*-0.131382);
}

double NNfunction_sg_cR::synapse0x3c0f4d0() {
   return (neuron0x3bfb9b0()*0.331612);
}

double NNfunction_sg_cR::synapse0x3c0f510() {
   return (neuron0x3bfc380()*-0.000267685);
}

double NNfunction_sg_cR::synapse0x3c0f550() {
   return (neuron0x3bfcd50()*0.112026);
}

double NNfunction_sg_cR::synapse0x3c0f590() {
   return (neuron0x3bfd720()*0.0865605);
}

double NNfunction_sg_cR::synapse0x3c0f5d0() {
   return (neuron0x3bfe0f0()*-0.323311);
}

double NNfunction_sg_cR::synapse0x3c0f610() {
   return (neuron0x3bfecd0()*-0.204684);
}

double NNfunction_sg_cR::synapse0x3c0f650() {
   return (neuron0x3bff6a0()*-0.369565);
}

double NNfunction_sg_cR::synapse0x3c0f690() {
   return (neuron0x3bf0520()*1.58159);
}

double NNfunction_sg_cR::synapse0x3c0f6d0() {
   return (neuron0x3bf0ef0()*-0.679866);
}

double NNfunction_sg_cR::synapse0x3c0f710() {
   return (neuron0x3bf18c0()*-0.364684);
}

double NNfunction_sg_cR::synapse0x3c0f750() {
   return (neuron0x3c03f00()*-0.215854);
}

double NNfunction_sg_cR::synapse0x3c0f790() {
   return (neuron0x3c047b0()*0.548121);
}

double NNfunction_sg_cR::synapse0x3c0f7d0() {
   return (neuron0x3c05180()*0.132653);
}

double NNfunction_sg_cR::synapse0x3c0f810() {
   return (neuron0x3c05b50()*0.201499);
}

double NNfunction_sg_cR::synapse0x3c0fb90() {
   return (neuron0x3be09c0()*-0.304928);
}

double NNfunction_sg_cR::synapse0x3c0fbd0() {
   return (neuron0x3be1310()*1.01938);
}

double NNfunction_sg_cR::synapse0x3c0fc10() {
   return (neuron0x3be1df0()*0.319833);
}

double NNfunction_sg_cR::synapse0x3c0fc50() {
   return (neuron0x3be1890()*0.473382);
}

double NNfunction_sg_cR::synapse0x3c0fc90() {
   return (neuron0x3be2bd0()*0.945059);
}

double NNfunction_sg_cR::synapse0x3c0fcd0() {
   return (neuron0x3be46b0()*0.0307367);
}

double NNfunction_sg_cR::synapse0x3c0fd10() {
   return (neuron0x3be5480()*-0.0858552);
}

double NNfunction_sg_cR::synapse0x3c0fd50() {
   return (neuron0x3be5e50()*0.398396);
}

double NNfunction_sg_cR::synapse0x3c0fd90() {
   return (neuron0x3be6820()*-0.100494);
}

double NNfunction_sg_cR::synapse0x3c0fdd0() {
   return (neuron0x3be7300()*0.341739);
}

double NNfunction_sg_cR::synapse0x3c0fe10() {
   return (neuron0x3be7cd0()*-0.290607);
}

double NNfunction_sg_cR::synapse0x3c0fe50() {
   return (neuron0x3be4db0()*-0.349599);
}

double NNfunction_sg_cR::synapse0x3c0fe90() {
   return (neuron0x3be9880()*0.727833);
}

double NNfunction_sg_cR::synapse0x3c0fed0() {
   return (neuron0x3bea250()*0.605679);
}

double NNfunction_sg_cR::synapse0x3c0ff10() {
   return (neuron0x3beac20()*0.118187);
}

double NNfunction_sg_cR::synapse0x3c0ff50() {
   return (neuron0x3beb5f0()*0.506879);
}

double NNfunction_sg_cR::synapse0x3c0f9e0() {
   return (neuron0x3bed400()*1.29937);
}

double NNfunction_sg_cR::synapse0x3c0fa20() {
   return (neuron0x3bed6e0()*-0.200276);
}

double NNfunction_sg_cR::synapse0x3c100a0() {
   return (neuron0x3bee0b0()*0.0970942);
}

double NNfunction_sg_cR::synapse0x3c100e0() {
   return (neuron0x3beea80()*0.273764);
}

double NNfunction_sg_cR::synapse0x3c10120() {
   return (neuron0x3bef450()*-0.265856);
}

double NNfunction_sg_cR::synapse0x3c10160() {
   return (neuron0x3befe20()*0.725168);
}

double NNfunction_sg_cR::synapse0x3c101a0() {
   return (neuron0x3be8970()*-0.0451534);
}

double NNfunction_sg_cR::synapse0x3c101e0() {
   return (neuron0x3be9340()*-0.664823);
}

double NNfunction_sg_cR::synapse0x3c10220() {
   return (neuron0x3bf2bb0()*-0.133187);
}

double NNfunction_sg_cR::synapse0x3c10260() {
   return (neuron0x3bf3580()*-0.162783);
}

double NNfunction_sg_cR::synapse0x3c102a0() {
   return (neuron0x3bf3f50()*0.473802);
}

double NNfunction_sg_cR::synapse0x3c102e0() {
   return (neuron0x3bf4920()*-0.571005);
}

double NNfunction_sg_cR::synapse0x3c10320() {
   return (neuron0x3bf52f0()*1.07467);
}

double NNfunction_sg_cR::synapse0x3c10360() {
   return (neuron0x3bf5cc0()*0.0792069);
}

double NNfunction_sg_cR::synapse0x3c103a0() {
   return (neuron0x3bf6690()*0.181129);
}

double NNfunction_sg_cR::synapse0x3c103e0() {
   return (neuron0x3bf7060()*0.507456);
}

double NNfunction_sg_cR::synapse0x3c0ff90() {
   return (neuron0x3bed0f0()*0.0790772);
}

double NNfunction_sg_cR::synapse0x3c0ffd0() {
   return (neuron0x3bf9c40()*0.500602);
}

double NNfunction_sg_cR::synapse0x3c10010() {
   return (neuron0x3bfa610()*1.07712);
}

double NNfunction_sg_cR::synapse0x3c10050() {
   return (neuron0x3bfafe0()*0.911405);
}

double NNfunction_sg_cR::synapse0x3c10630() {
   return (neuron0x3bfb9b0()*0.302523);
}

double NNfunction_sg_cR::synapse0x3c10670() {
   return (neuron0x3bfc380()*0.94444);
}

double NNfunction_sg_cR::synapse0x3c106b0() {
   return (neuron0x3bfcd50()*0.343746);
}

double NNfunction_sg_cR::synapse0x3c106f0() {
   return (neuron0x3bfd720()*0.362889);
}

double NNfunction_sg_cR::synapse0x3c10730() {
   return (neuron0x3bfe0f0()*-0.128796);
}

double NNfunction_sg_cR::synapse0x3c10770() {
   return (neuron0x3bfecd0()*0.63287);
}

double NNfunction_sg_cR::synapse0x3c107b0() {
   return (neuron0x3bff6a0()*-0.0323011);
}

double NNfunction_sg_cR::synapse0x3c107f0() {
   return (neuron0x3bf0520()*1.05861);
}

double NNfunction_sg_cR::synapse0x3c10830() {
   return (neuron0x3bf0ef0()*0.830638);
}

double NNfunction_sg_cR::synapse0x3c10870() {
   return (neuron0x3bf18c0()*-0.213627);
}

double NNfunction_sg_cR::synapse0x3c108b0() {
   return (neuron0x3c03f00()*0.238215);
}

double NNfunction_sg_cR::synapse0x3c108f0() {
   return (neuron0x3c047b0()*0.893477);
}

double NNfunction_sg_cR::synapse0x3c10930() {
   return (neuron0x3c05180()*0.515072);
}

double NNfunction_sg_cR::synapse0x3c10970() {
   return (neuron0x3c05b50()*0.0470637);
}

double NNfunction_sg_cR::synapse0x3c10bd0() {
   return (neuron0x3c0cd50()*8.89176);
}

double NNfunction_sg_cR::synapse0x3c10c10() {
   return (neuron0x3c0d0f0()*-6.31554);
}

double NNfunction_sg_cR::synapse0x3c10c50() {
   return (neuron0x3c0d590()*9.15454);
}

double NNfunction_sg_cR::synapse0x3c10c90() {
   return (neuron0x3c0e6f0()*-7.8684);
}

double NNfunction_sg_cR::synapse0x3c10cd0() {
   return (neuron0x3c0f850()*0.188272);
}

