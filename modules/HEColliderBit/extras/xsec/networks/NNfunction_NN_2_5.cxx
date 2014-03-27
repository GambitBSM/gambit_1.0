#include "NNfunction_NN_2_5.h"
#include <cmath>

double NNfunction_NN_2_5::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4041)/15.2412;
   input1 = (in1 - -1.16899)/1130.77;
   input2 = (in2 - 646.704)/616.347;
   input3 = (in3 - -39.4027)/837.969;
   input4 = (in4 - 1099.55)/973.169;
   input5 = (in5 - 910.31)/960.598;
   input6 = (in6 - 916.921)/960.784;
   input7 = (in7 - 935.935)/943.679;
   input8 = (in8 - 928.158)/973.668;
   input9 = (in9 - 913.247)/959.735;
   input10 = (in10 - 984.98)/953.596;
   input11 = (in11 - 714.292)/865.47;
   input12 = (in12 - 732.501)/874.354;
   input13 = (in13 - 497.81)/517.372;
   input14 = (in14 - 742.921)/834.704;
   input15 = (in15 - 738.408)/833.677;
   input16 = (in16 - 540.503)/572.734;
   input17 = (in17 - 762.382)/903.03;
   input18 = (in18 - 757.814)/902.9;
   input19 = (in19 - 801.232)/876.702;
   input20 = (in20 - -2.4102)/484.456;
   input21 = (in21 - -1.9115)/1153.17;
   input22 = (in22 - 0.500338)/1205.91;
   input23 = (in23 - -151.362)/489.437;
   switch(index) {
     case 0:
         return neuron0x1dda740();
     default:
         return 0.;
   }
}

double NNfunction_NN_2_5::Value(int index, double* input) {
   input0 = (input[0] - 23.4041)/15.2412;
   input1 = (input[1] - -1.16899)/1130.77;
   input2 = (input[2] - 646.704)/616.347;
   input3 = (input[3] - -39.4027)/837.969;
   input4 = (input[4] - 1099.55)/973.169;
   input5 = (input[5] - 910.31)/960.598;
   input6 = (input[6] - 916.921)/960.784;
   input7 = (input[7] - 935.935)/943.679;
   input8 = (input[8] - 928.158)/973.668;
   input9 = (input[9] - 913.247)/959.735;
   input10 = (input[10] - 984.98)/953.596;
   input11 = (input[11] - 714.292)/865.47;
   input12 = (input[12] - 732.501)/874.354;
   input13 = (input[13] - 497.81)/517.372;
   input14 = (input[14] - 742.921)/834.704;
   input15 = (input[15] - 738.408)/833.677;
   input16 = (input[16] - 540.503)/572.734;
   input17 = (input[17] - 762.382)/903.03;
   input18 = (input[18] - 757.814)/902.9;
   input19 = (input[19] - 801.232)/876.702;
   input20 = (input[20] - -2.4102)/484.456;
   input21 = (input[21] - -1.9115)/1153.17;
   input22 = (input[22] - 0.500338)/1205.91;
   input23 = (input[23] - -151.362)/489.437;
   switch(index) {
     case 0:
         return neuron0x1dda740();
     default:
         return 0.;
   }
}

double NNfunction_NN_2_5::neuron0x1da6800() {
   return input0;
}

double NNfunction_NN_2_5::neuron0x1da6b40() {
   return input1;
}

double NNfunction_NN_2_5::neuron0x1da6e80() {
   return input2;
}

double NNfunction_NN_2_5::neuron0x1da71c0() {
   return input3;
}

double NNfunction_NN_2_5::neuron0x1da7500() {
   return input4;
}

double NNfunction_NN_2_5::neuron0x1da7840() {
   return input5;
}

double NNfunction_NN_2_5::neuron0x1da7b80() {
   return input6;
}

double NNfunction_NN_2_5::neuron0x1da7ec0() {
   return input7;
}

double NNfunction_NN_2_5::neuron0x1da8200() {
   return input8;
}

double NNfunction_NN_2_5::neuron0x1da8540() {
   return input9;
}

double NNfunction_NN_2_5::neuron0x1da8880() {
   return input10;
}

double NNfunction_NN_2_5::neuron0x1da8bc0() {
   return input11;
}

double NNfunction_NN_2_5::neuron0x1da8f00() {
   return input12;
}

double NNfunction_NN_2_5::neuron0x1da9240() {
   return input13;
}

double NNfunction_NN_2_5::neuron0x1da9580() {
   return input14;
}

double NNfunction_NN_2_5::neuron0x1da98c0() {
   return input15;
}

double NNfunction_NN_2_5::neuron0x1da9c00() {
   return input16;
}

double NNfunction_NN_2_5::neuron0x1daa160() {
   return input17;
}

double NNfunction_NN_2_5::neuron0x1daa380() {
   return input18;
}

double NNfunction_NN_2_5::neuron0x1daa6c0() {
   return input19;
}

double NNfunction_NN_2_5::neuron0x1daaa00() {
   return input20;
}

double NNfunction_NN_2_5::neuron0x1daad40() {
   return input21;
}

double NNfunction_NN_2_5::neuron0x1dab080() {
   return input22;
}

double NNfunction_NN_2_5::neuron0x1dab3c0() {
   return input23;
}

double NNfunction_NN_2_5::input0x1dab860() {
   double input = 0.813625;
   input += synapse0x1b66670();
   input += synapse0x1da66c0();
   input += synapse0x1da6700();
   input += synapse0x1dabb10();
   input += synapse0x1dabb50();
   input += synapse0x1dabb90();
   input += synapse0x1dabbd0();
   input += synapse0x1dabc10();
   input += synapse0x1dabc50();
   input += synapse0x1dabc90();
   input += synapse0x1dabcd0();
   input += synapse0x1dabd10();
   input += synapse0x1dabd50();
   input += synapse0x1dabd90();
   input += synapse0x1dabdd0();
   input += synapse0x1dabe10();
   input += synapse0x1da6630();
   input += synapse0x1da6670();
   input += synapse0x1b57ed0();
   input += synapse0x1b57f10();
   input += synapse0x1dac070();
   input += synapse0x1dac0b0();
   input += synapse0x1dac0f0();
   input += synapse0x1dac130();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dab860() {
   double input = input0x1dab860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dac170() {
   double input = 0.194547;
   input += synapse0x1dac4b0();
   input += synapse0x1dac4f0();
   input += synapse0x1dac530();
   input += synapse0x1dac570();
   input += synapse0x1dac5b0();
   input += synapse0x1dac5f0();
   input += synapse0x1dac630();
   input += synapse0x1dac670();
   input += synapse0x1dac6b0();
   input += synapse0x1dabf60();
   input += synapse0x1dabfa0();
   input += synapse0x1dabfe0();
   input += synapse0x1dac020();
   input += synapse0x1dac900();
   input += synapse0x1dac940();
   input += synapse0x1dac980();
   input += synapse0x1dac300();
   input += synapse0x1dac340();
   input += synapse0x1dacad0();
   input += synapse0x1dacb10();
   input += synapse0x1dacb50();
   input += synapse0x1dacb90();
   input += synapse0x1dacbd0();
   input += synapse0x1dacc10();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dac170() {
   double input = input0x1dac170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dacc50() {
   double input = 1.12753;
   input += synapse0x1dacf90();
   input += synapse0x1dacfd0();
   input += synapse0x1dad010();
   input += synapse0x1dad050();
   input += synapse0x1dad090();
   input += synapse0x1dad0d0();
   input += synapse0x1dad110();
   input += synapse0x1dad150();
   input += synapse0x1dad190();
   input += synapse0x1dad1d0();
   input += synapse0x1dad210();
   input += synapse0x1dad250();
   input += synapse0x1dad290();
   input += synapse0x1dad2d0();
   input += synapse0x1dad310();
   input += synapse0x1dad350();
   input += synapse0x1dacde0();
   input += synapse0x1dace20();
   input += synapse0x1b65d40();
   input += synapse0x1b65d80();
   input += synapse0x1d95890();
   input += synapse0x1d958d0();
   input += synapse0x1d95910();
   input += synapse0x1da6740();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dacc50() {
   double input = input0x1dacc50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1b664e0() {
   double input = 0.205064;
   input += synapse0x1dac8a0();
   input += synapse0x1da6780();
   input += synapse0x1da67c0();
   input += synapse0x1dad4a0();
   input += synapse0x1dad4e0();
   input += synapse0x1dad520();
   input += synapse0x1dad560();
   input += synapse0x1dad5a0();
   input += synapse0x1dad5e0();
   input += synapse0x1dad620();
   input += synapse0x1dad660();
   input += synapse0x1dad6a0();
   input += synapse0x1dad6e0();
   input += synapse0x1dad720();
   input += synapse0x1dad760();
   input += synapse0x1dad7a0();
   input += synapse0x1dac6f0();
   input += synapse0x1dac730();
   input += synapse0x1dad8f0();
   input += synapse0x1dad930();
   input += synapse0x1dad970();
   input += synapse0x1dad9b0();
   input += synapse0x1dad9f0();
   input += synapse0x1dada30();
   return input;
}

double NNfunction_NN_2_5::neuron0x1b664e0() {
   double input = input0x1b664e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dada70() {
   double input = 2.49815;
   input += synapse0x1daddb0();
   input += synapse0x1daddf0();
   input += synapse0x1dade30();
   input += synapse0x1dade70();
   input += synapse0x1dadeb0();
   input += synapse0x1dadef0();
   input += synapse0x1dadf30();
   input += synapse0x1dadf70();
   input += synapse0x1dadfb0();
   input += synapse0x1dadff0();
   input += synapse0x1dae030();
   input += synapse0x1dae070();
   input += synapse0x1dae0b0();
   input += synapse0x1dae0f0();
   input += synapse0x1dae130();
   input += synapse0x1dae170();
   input += synapse0x1dadc00();
   input += synapse0x1dadc40();
   input += synapse0x1dae2c0();
   input += synapse0x1dae300();
   input += synapse0x1dae340();
   input += synapse0x1dae380();
   input += synapse0x1dae3c0();
   input += synapse0x1dae400();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dada70() {
   double input = input0x1dada70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dae440() {
   double input = 1.00914;
   input += synapse0x1dae780();
   input += synapse0x1dae7c0();
   input += synapse0x1dae800();
   input += synapse0x1dae840();
   input += synapse0x1dae880();
   input += synapse0x1dae8c0();
   input += synapse0x1dae900();
   input += synapse0x1dae940();
   input += synapse0x1dae980();
   input += synapse0x1b660d0();
   input += synapse0x1b66110();
   input += synapse0x1b66150();
   input += synapse0x1b66190();
   input += synapse0x1b661d0();
   input += synapse0x1b66210();
   input += synapse0x1b66250();
   input += synapse0x1dae5d0();
   input += synapse0x1dae610();
   input += synapse0x1b663a0();
   input += synapse0x1b663e0();
   input += synapse0x1b66420();
   input += synapse0x1b66460();
   input += synapse0x1b664a0();
   input += synapse0x1daf1d0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dae440() {
   double input = input0x1dae440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1daf210() {
   double input = 0.0974627;
   input += synapse0x1daf550();
   input += synapse0x1daf590();
   input += synapse0x1daf5d0();
   input += synapse0x1daf610();
   input += synapse0x1daf650();
   input += synapse0x1daf690();
   input += synapse0x1daf6d0();
   input += synapse0x1daf710();
   input += synapse0x1daf750();
   input += synapse0x1daf790();
   input += synapse0x1daf7d0();
   input += synapse0x1daf810();
   input += synapse0x1daf850();
   input += synapse0x1daf890();
   input += synapse0x1daf8d0();
   input += synapse0x1daf910();
   input += synapse0x1daf3a0();
   input += synapse0x1daf3e0();
   input += synapse0x1dafa60();
   input += synapse0x1dafaa0();
   input += synapse0x1dafae0();
   input += synapse0x1dafb20();
   input += synapse0x1dafb60();
   input += synapse0x1dafba0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1daf210() {
   double input = input0x1daf210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dafbe0() {
   double input = 0.287649;
   input += synapse0x1daff20();
   input += synapse0x1daff60();
   input += synapse0x1daffa0();
   input += synapse0x1daffe0();
   input += synapse0x1db0020();
   input += synapse0x1db0060();
   input += synapse0x1db00a0();
   input += synapse0x1db00e0();
   input += synapse0x1db0120();
   input += synapse0x1db0160();
   input += synapse0x1db01a0();
   input += synapse0x1db01e0();
   input += synapse0x1db0220();
   input += synapse0x1db0260();
   input += synapse0x1db02a0();
   input += synapse0x1db02e0();
   input += synapse0x1dafd70();
   input += synapse0x1dafdb0();
   input += synapse0x1db0430();
   input += synapse0x1db0470();
   input += synapse0x1db04b0();
   input += synapse0x1db04f0();
   input += synapse0x1db0530();
   input += synapse0x1db0570();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dafbe0() {
   double input = input0x1dafbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db05b0() {
   double input = 3.04822;
   input += synapse0x1daa050();
   input += synapse0x1daa090();
   input += synapse0x1daa0d0();
   input += synapse0x1daa110();
   input += synapse0x1db0b00();
   input += synapse0x1db0b40();
   input += synapse0x1db0b80();
   input += synapse0x1db0bc0();
   input += synapse0x1db0c00();
   input += synapse0x1db0c40();
   input += synapse0x1db0c80();
   input += synapse0x1db0cc0();
   input += synapse0x1db0d00();
   input += synapse0x1db0d40();
   input += synapse0x1db0d80();
   input += synapse0x1db0dc0();
   input += synapse0x1db0740();
   input += synapse0x1db0780();
   input += synapse0x1db0f10();
   input += synapse0x1db0f50();
   input += synapse0x1db0f90();
   input += synapse0x1db0fd0();
   input += synapse0x1db1010();
   input += synapse0x1db1050();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db05b0() {
   double input = input0x1db05b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db1090() {
   double input = 2.24958;
   input += synapse0x1db13d0();
   input += synapse0x1db1410();
   input += synapse0x1db1450();
   input += synapse0x1db1490();
   input += synapse0x1db14d0();
   input += synapse0x1db1510();
   input += synapse0x1db1550();
   input += synapse0x1db1590();
   input += synapse0x1db15d0();
   input += synapse0x1db1610();
   input += synapse0x1db1650();
   input += synapse0x1db1690();
   input += synapse0x1db16d0();
   input += synapse0x1db1710();
   input += synapse0x1db1750();
   input += synapse0x1db1790();
   input += synapse0x1db1220();
   input += synapse0x1db1260();
   input += synapse0x1db18e0();
   input += synapse0x1db1920();
   input += synapse0x1db1960();
   input += synapse0x1db19a0();
   input += synapse0x1db19e0();
   input += synapse0x1db1a20();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db1090() {
   double input = input0x1db1090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db1a60() {
   double input = 0.866092;
   input += synapse0x1db1da0();
   input += synapse0x1db1de0();
   input += synapse0x1db1e20();
   input += synapse0x1db1e60();
   input += synapse0x1db1ea0();
   input += synapse0x1db1ee0();
   input += synapse0x1db1f20();
   input += synapse0x1db1f60();
   input += synapse0x1db1fa0();
   input += synapse0x1db1fe0();
   input += synapse0x1db2020();
   input += synapse0x1db2060();
   input += synapse0x1db20a0();
   input += synapse0x1db20e0();
   input += synapse0x1db2120();
   input += synapse0x1db2160();
   input += synapse0x1db1bf0();
   input += synapse0x1db1c30();
   input += synapse0x1dae9c0();
   input += synapse0x1daea00();
   input += synapse0x1daea40();
   input += synapse0x1daea80();
   input += synapse0x1daeac0();
   input += synapse0x1daeb00();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db1a60() {
   double input = input0x1db1a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1daeb40() {
   double input = -0.496654;
   input += synapse0x1daee80();
   input += synapse0x1daeec0();
   input += synapse0x1daef00();
   input += synapse0x1daef40();
   input += synapse0x1daef80();
   input += synapse0x1daefc0();
   input += synapse0x1daf000();
   input += synapse0x1daf040();
   input += synapse0x1daf080();
   input += synapse0x1daf0c0();
   input += synapse0x1daf100();
   input += synapse0x1daf140();
   input += synapse0x1daf180();
   input += synapse0x1db32c0();
   input += synapse0x1db3300();
   input += synapse0x1db3340();
   input += synapse0x1daecd0();
   input += synapse0x1daed10();
   input += synapse0x1db3490();
   input += synapse0x1db34d0();
   input += synapse0x1db3510();
   input += synapse0x1db3550();
   input += synapse0x1db3590();
   input += synapse0x1db35d0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1daeb40() {
   double input = input0x1daeb40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db3610() {
   double input = -3.55229;
   input += synapse0x1db3950();
   input += synapse0x1db3990();
   input += synapse0x1db39d0();
   input += synapse0x1db3a10();
   input += synapse0x1db3a50();
   input += synapse0x1db3a90();
   input += synapse0x1db3ad0();
   input += synapse0x1db3b10();
   input += synapse0x1db3b50();
   input += synapse0x1db3b90();
   input += synapse0x1db3bd0();
   input += synapse0x1db3c10();
   input += synapse0x1db3c50();
   input += synapse0x1db3c90();
   input += synapse0x1db3cd0();
   input += synapse0x1db3d10();
   input += synapse0x1db37a0();
   input += synapse0x1db37e0();
   input += synapse0x1db3e60();
   input += synapse0x1db3ea0();
   input += synapse0x1db3ee0();
   input += synapse0x1db3f20();
   input += synapse0x1db3f60();
   input += synapse0x1db3fa0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db3610() {
   double input = input0x1db3610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db3fe0() {
   double input = 4.29354;
   input += synapse0x1db4320();
   input += synapse0x1db4360();
   input += synapse0x1db43a0();
   input += synapse0x1db43e0();
   input += synapse0x1db4420();
   input += synapse0x1db4460();
   input += synapse0x1db44a0();
   input += synapse0x1db44e0();
   input += synapse0x1db4520();
   input += synapse0x1db4560();
   input += synapse0x1db45a0();
   input += synapse0x1db45e0();
   input += synapse0x1db4620();
   input += synapse0x1db4660();
   input += synapse0x1db46a0();
   input += synapse0x1db46e0();
   input += synapse0x1db4170();
   input += synapse0x1db41b0();
   input += synapse0x1db4830();
   input += synapse0x1db4870();
   input += synapse0x1db48b0();
   input += synapse0x1db48f0();
   input += synapse0x1db4930();
   input += synapse0x1db4970();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db3fe0() {
   double input = input0x1db3fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db49b0() {
   double input = -0.105371;
   input += synapse0x1db4cf0();
   input += synapse0x1db4d30();
   input += synapse0x1db4d70();
   input += synapse0x1db4db0();
   input += synapse0x1db4df0();
   input += synapse0x1db4e30();
   input += synapse0x1db4e70();
   input += synapse0x1db4eb0();
   input += synapse0x1db4ef0();
   input += synapse0x1db4f30();
   input += synapse0x1db4f70();
   input += synapse0x1db4fb0();
   input += synapse0x1db4ff0();
   input += synapse0x1db5030();
   input += synapse0x1db5070();
   input += synapse0x1db50b0();
   input += synapse0x1db4b40();
   input += synapse0x1db4b80();
   input += synapse0x1db5200();
   input += synapse0x1db5240();
   input += synapse0x1db5280();
   input += synapse0x1db52c0();
   input += synapse0x1db5300();
   input += synapse0x1db5340();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db49b0() {
   double input = input0x1db49b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db5380() {
   double input = -0.0475142;
   input += synapse0x1db56c0();
   input += synapse0x1da6a20();
   input += synapse0x1da6a60();
   input += synapse0x1da6d60();
   input += synapse0x1da6da0();
   input += synapse0x1da70a0();
   input += synapse0x1da70e0();
   input += synapse0x1da73e0();
   input += synapse0x1da7420();
   input += synapse0x1da7720();
   input += synapse0x1da7760();
   input += synapse0x1da7a60();
   input += synapse0x1da7aa0();
   input += synapse0x1da7da0();
   input += synapse0x1da7de0();
   input += synapse0x1da80e0();
   input += synapse0x1da8120();
   input += synapse0x1da8420();
   input += synapse0x1da8460();
   input += synapse0x1da8760();
   input += synapse0x1da87a0();
   input += synapse0x1da8aa0();
   input += synapse0x1da8ae0();
   input += synapse0x1da8de0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db5380() {
   double input = input0x1db5380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db7190() {
   double input = -0.566064;
   input += synapse0x1da8e20();
   input += synapse0x1da9ae0();
   input += synapse0x1da9b20();
   input += synapse0x1db5510();
   input += synapse0x1db5550();
   input += synapse0x1da9e20();
   input += synapse0x1da9e60();
   input += synapse0x1b57db0();
   input += synapse0x1b57df0();
   input += synapse0x1daa5a0();
   input += synapse0x1daa5e0();
   input += synapse0x1daa8e0();
   input += synapse0x1daa920();
   input += synapse0x1daac20();
   input += synapse0x1daac60();
   input += synapse0x1daaf60();
   input += synapse0x1daafa0();
   input += synapse0x1dab2a0();
   input += synapse0x1dab2e0();
   input += synapse0x1dab5e0();
   input += synapse0x1dab620();
   input += synapse0x1da9120();
   input += synapse0x1da9160();
   input += synapse0x1db7430();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db7190() {
   double input = input0x1db7190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db7470() {
   double input = 0.151164;
   input += synapse0x1db77b0();
   input += synapse0x1db77f0();
   input += synapse0x1db7830();
   input += synapse0x1db7870();
   input += synapse0x1db78b0();
   input += synapse0x1db78f0();
   input += synapse0x1db7930();
   input += synapse0x1db7970();
   input += synapse0x1db79b0();
   input += synapse0x1db79f0();
   input += synapse0x1db7a30();
   input += synapse0x1db7a70();
   input += synapse0x1db7ab0();
   input += synapse0x1db7af0();
   input += synapse0x1db7b30();
   input += synapse0x1db7b70();
   input += synapse0x1db7600();
   input += synapse0x1db7640();
   input += synapse0x1db7cc0();
   input += synapse0x1db7d00();
   input += synapse0x1db7d40();
   input += synapse0x1db7d80();
   input += synapse0x1db7dc0();
   input += synapse0x1db7e00();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db7470() {
   double input = input0x1db7470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db7e40() {
   double input = 0.304311;
   input += synapse0x1db8180();
   input += synapse0x1db81c0();
   input += synapse0x1db8200();
   input += synapse0x1db8240();
   input += synapse0x1db8280();
   input += synapse0x1db82c0();
   input += synapse0x1db8300();
   input += synapse0x1db8340();
   input += synapse0x1db8380();
   input += synapse0x1db83c0();
   input += synapse0x1db8400();
   input += synapse0x1db8440();
   input += synapse0x1db8480();
   input += synapse0x1db84c0();
   input += synapse0x1db8500();
   input += synapse0x1db8540();
   input += synapse0x1db7fd0();
   input += synapse0x1db8010();
   input += synapse0x1db8690();
   input += synapse0x1db86d0();
   input += synapse0x1db8710();
   input += synapse0x1db8750();
   input += synapse0x1db8790();
   input += synapse0x1db87d0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db7e40() {
   double input = input0x1db7e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db8810() {
   double input = -0.444065;
   input += synapse0x1db8b50();
   input += synapse0x1db8b90();
   input += synapse0x1db8bd0();
   input += synapse0x1db8c10();
   input += synapse0x1db8c50();
   input += synapse0x1db8c90();
   input += synapse0x1db8cd0();
   input += synapse0x1db8d10();
   input += synapse0x1db8d50();
   input += synapse0x1db8d90();
   input += synapse0x1db8dd0();
   input += synapse0x1db8e10();
   input += synapse0x1db8e50();
   input += synapse0x1db8e90();
   input += synapse0x1db8ed0();
   input += synapse0x1db8f10();
   input += synapse0x1db89a0();
   input += synapse0x1db89e0();
   input += synapse0x1db9060();
   input += synapse0x1db90a0();
   input += synapse0x1db90e0();
   input += synapse0x1db9120();
   input += synapse0x1db9160();
   input += synapse0x1db91a0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db8810() {
   double input = input0x1db8810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db91e0() {
   double input = -1.222;
   input += synapse0x1db9520();
   input += synapse0x1db9560();
   input += synapse0x1db95a0();
   input += synapse0x1db95e0();
   input += synapse0x1db9620();
   input += synapse0x1db9660();
   input += synapse0x1db96a0();
   input += synapse0x1db96e0();
   input += synapse0x1db9720();
   input += synapse0x1db9760();
   input += synapse0x1db97a0();
   input += synapse0x1db97e0();
   input += synapse0x1db9820();
   input += synapse0x1db9860();
   input += synapse0x1db98a0();
   input += synapse0x1db98e0();
   input += synapse0x1db9370();
   input += synapse0x1db93b0();
   input += synapse0x1db9a30();
   input += synapse0x1db9a70();
   input += synapse0x1db9ab0();
   input += synapse0x1db9af0();
   input += synapse0x1db9b30();
   input += synapse0x1db9b70();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db91e0() {
   double input = input0x1db91e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db9bb0() {
   double input = 2.84603;
   input += synapse0x1db9ef0();
   input += synapse0x1db9f30();
   input += synapse0x1db9f70();
   input += synapse0x1db9fb0();
   input += synapse0x1db9ff0();
   input += synapse0x1dba030();
   input += synapse0x1dba070();
   input += synapse0x1dba0b0();
   input += synapse0x1dba0f0();
   input += synapse0x1db22b0();
   input += synapse0x1db22f0();
   input += synapse0x1db2330();
   input += synapse0x1db2370();
   input += synapse0x1db23b0();
   input += synapse0x1db23f0();
   input += synapse0x1db2430();
   input += synapse0x1db9d40();
   input += synapse0x1db9d80();
   input += synapse0x1db2580();
   input += synapse0x1db25c0();
   input += synapse0x1db2600();
   input += synapse0x1db2640();
   input += synapse0x1db2680();
   input += synapse0x1db26c0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db9bb0() {
   double input = input0x1db9bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db2700() {
   double input = 0.326807;
   input += synapse0x1db2a40();
   input += synapse0x1db2a80();
   input += synapse0x1db2ac0();
   input += synapse0x1db2b00();
   input += synapse0x1db2b40();
   input += synapse0x1db2b80();
   input += synapse0x1db2bc0();
   input += synapse0x1db2c00();
   input += synapse0x1db2c40();
   input += synapse0x1db2c80();
   input += synapse0x1db2cc0();
   input += synapse0x1db2d00();
   input += synapse0x1db2d40();
   input += synapse0x1db2d80();
   input += synapse0x1db2dc0();
   input += synapse0x1db2e00();
   input += synapse0x1db2890();
   input += synapse0x1db28d0();
   input += synapse0x1db2f50();
   input += synapse0x1db2f90();
   input += synapse0x1db2fd0();
   input += synapse0x1db3010();
   input += synapse0x1db3050();
   input += synapse0x1db3090();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db2700() {
   double input = input0x1db2700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db30d0() {
   double input = 0.576825;
   input += synapse0x1db3260();
   input += synapse0x1dbc2f0();
   input += synapse0x1dbc330();
   input += synapse0x1dbc370();
   input += synapse0x1dbc3b0();
   input += synapse0x1dbc3f0();
   input += synapse0x1dbc430();
   input += synapse0x1dbc470();
   input += synapse0x1dbc4b0();
   input += synapse0x1dbc4f0();
   input += synapse0x1dbc530();
   input += synapse0x1dbc570();
   input += synapse0x1dbc5b0();
   input += synapse0x1dbc5f0();
   input += synapse0x1dbc630();
   input += synapse0x1dbc670();
   input += synapse0x1dbc140();
   input += synapse0x1dbc180();
   input += synapse0x1dbc7c0();
   input += synapse0x1dbc800();
   input += synapse0x1dbc840();
   input += synapse0x1dbc880();
   input += synapse0x1dbc8c0();
   input += synapse0x1dbc900();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db30d0() {
   double input = input0x1db30d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dbc940() {
   double input = -0.076288;
   input += synapse0x1dbcc80();
   input += synapse0x1dbccc0();
   input += synapse0x1dbcd00();
   input += synapse0x1dbcd40();
   input += synapse0x1dbcd80();
   input += synapse0x1dbcdc0();
   input += synapse0x1dbce00();
   input += synapse0x1dbce40();
   input += synapse0x1dbce80();
   input += synapse0x1dbcec0();
   input += synapse0x1dbcf00();
   input += synapse0x1dbcf40();
   input += synapse0x1dbcf80();
   input += synapse0x1dbcfc0();
   input += synapse0x1dbd000();
   input += synapse0x1dbd040();
   input += synapse0x1dbcad0();
   input += synapse0x1dbcb10();
   input += synapse0x1dbd190();
   input += synapse0x1dbd1d0();
   input += synapse0x1dbd210();
   input += synapse0x1dbd250();
   input += synapse0x1dbd290();
   input += synapse0x1dbd2d0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dbc940() {
   double input = input0x1dbc940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dbd310() {
   double input = -0.682838;
   input += synapse0x1dbd650();
   input += synapse0x1dbd690();
   input += synapse0x1dbd6d0();
   input += synapse0x1dbd710();
   input += synapse0x1dbd750();
   input += synapse0x1dbd790();
   input += synapse0x1dbd7d0();
   input += synapse0x1dbd810();
   input += synapse0x1dbd850();
   input += synapse0x1dbd890();
   input += synapse0x1dbd8d0();
   input += synapse0x1dbd910();
   input += synapse0x1dbd950();
   input += synapse0x1dbd990();
   input += synapse0x1dbd9d0();
   input += synapse0x1dbda10();
   input += synapse0x1dbd4a0();
   input += synapse0x1dbd4e0();
   input += synapse0x1dbdb60();
   input += synapse0x1dbdba0();
   input += synapse0x1dbdbe0();
   input += synapse0x1dbdc20();
   input += synapse0x1dbdc60();
   input += synapse0x1dbdca0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dbd310() {
   double input = input0x1dbd310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dbdce0() {
   double input = 0.657572;
   input += synapse0x1dbe020();
   input += synapse0x1dbe060();
   input += synapse0x1dbe0a0();
   input += synapse0x1dbe0e0();
   input += synapse0x1dbe120();
   input += synapse0x1dbe160();
   input += synapse0x1dbe1a0();
   input += synapse0x1dbe1e0();
   input += synapse0x1dbe220();
   input += synapse0x1dbe260();
   input += synapse0x1dbe2a0();
   input += synapse0x1dbe2e0();
   input += synapse0x1dbe320();
   input += synapse0x1dbe360();
   input += synapse0x1dbe3a0();
   input += synapse0x1dbe3e0();
   input += synapse0x1dbde70();
   input += synapse0x1dbdeb0();
   input += synapse0x1dbe530();
   input += synapse0x1dbe570();
   input += synapse0x1dbe5b0();
   input += synapse0x1dbe5f0();
   input += synapse0x1dbe630();
   input += synapse0x1dbe670();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dbdce0() {
   double input = input0x1dbdce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dbe6b0() {
   double input = 0.0856147;
   input += synapse0x1dbe9f0();
   input += synapse0x1dbea30();
   input += synapse0x1dbea70();
   input += synapse0x1dbeab0();
   input += synapse0x1dbeaf0();
   input += synapse0x1dbeb30();
   input += synapse0x1dbeb70();
   input += synapse0x1dbebb0();
   input += synapse0x1dbebf0();
   input += synapse0x1dbec30();
   input += synapse0x1dbec70();
   input += synapse0x1dbecb0();
   input += synapse0x1dbecf0();
   input += synapse0x1dbed30();
   input += synapse0x1dbed70();
   input += synapse0x1dbedb0();
   input += synapse0x1dbe840();
   input += synapse0x1dbe880();
   input += synapse0x1dbef00();
   input += synapse0x1dbef40();
   input += synapse0x1dbef80();
   input += synapse0x1dbefc0();
   input += synapse0x1dbf000();
   input += synapse0x1dbf040();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dbe6b0() {
   double input = input0x1dbe6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dbf080() {
   double input = 0.239081;
   input += synapse0x1dbf3c0();
   input += synapse0x1dbf400();
   input += synapse0x1dbf440();
   input += synapse0x1dbf480();
   input += synapse0x1dbf4c0();
   input += synapse0x1dbf500();
   input += synapse0x1dbf540();
   input += synapse0x1dbf580();
   input += synapse0x1dbf5c0();
   input += synapse0x1dbf600();
   input += synapse0x1dbf640();
   input += synapse0x1dbf680();
   input += synapse0x1dbf6c0();
   input += synapse0x1dbf700();
   input += synapse0x1dbf740();
   input += synapse0x1dbf780();
   input += synapse0x1dbf210();
   input += synapse0x1dbf250();
   input += synapse0x1dbf8d0();
   input += synapse0x1dbf910();
   input += synapse0x1dbf950();
   input += synapse0x1dbf990();
   input += synapse0x1dbf9d0();
   input += synapse0x1dbfa10();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dbf080() {
   double input = input0x1dbf080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dbfa50() {
   double input = 0.705393;
   input += synapse0x1dbfd90();
   input += synapse0x1dbfdd0();
   input += synapse0x1dbfe10();
   input += synapse0x1dbfe50();
   input += synapse0x1dbfe90();
   input += synapse0x1dbfed0();
   input += synapse0x1dbff10();
   input += synapse0x1dbff50();
   input += synapse0x1dbff90();
   input += synapse0x1dbffd0();
   input += synapse0x1dc0010();
   input += synapse0x1dc0050();
   input += synapse0x1dc0090();
   input += synapse0x1dc00d0();
   input += synapse0x1dc0110();
   input += synapse0x1dc0150();
   input += synapse0x1dbfbe0();
   input += synapse0x1dbfc20();
   input += synapse0x1dc02a0();
   input += synapse0x1dc02e0();
   input += synapse0x1dc0320();
   input += synapse0x1dc0360();
   input += synapse0x1dc03a0();
   input += synapse0x1dc03e0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dbfa50() {
   double input = input0x1dbfa50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dc0420() {
   double input = 0.447606;
   input += synapse0x1dc0760();
   input += synapse0x1dc07a0();
   input += synapse0x1dc07e0();
   input += synapse0x1dc0820();
   input += synapse0x1dc0860();
   input += synapse0x1dc08a0();
   input += synapse0x1dc08e0();
   input += synapse0x1dc0920();
   input += synapse0x1dc0960();
   input += synapse0x1dc09a0();
   input += synapse0x1dc09e0();
   input += synapse0x1dc0a20();
   input += synapse0x1dc0a60();
   input += synapse0x1dc0aa0();
   input += synapse0x1dc0ae0();
   input += synapse0x1dc0b20();
   input += synapse0x1dc05b0();
   input += synapse0x1dc05f0();
   input += synapse0x1dc0c70();
   input += synapse0x1dc0cb0();
   input += synapse0x1dc0cf0();
   input += synapse0x1dc0d30();
   input += synapse0x1dc0d70();
   input += synapse0x1dc0db0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dc0420() {
   double input = input0x1dc0420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dc0df0() {
   double input = 2.42247;
   input += synapse0x1dc1130();
   input += synapse0x1db5700();
   input += synapse0x1db5740();
   input += synapse0x1db5780();
   input += synapse0x1db59d0();
   input += synapse0x1db5a10();
   input += synapse0x1db5a50();
   input += synapse0x1db5ca0();
   input += synapse0x1db5ce0();
   input += synapse0x1db5f30();
   input += synapse0x1db5f70();
   input += synapse0x1db5fb0();
   input += synapse0x1db6200();
   input += synapse0x1db6240();
   input += synapse0x1db6490();
   input += synapse0x1db64d0();
   input += synapse0x1dc0f80();
   input += synapse0x1dc0fc0();
   input += synapse0x1db6620();
   input += synapse0x1db6b30();
   input += synapse0x1db6b70();
   input += synapse0x1db6bb0();
   input += synapse0x1db6e00();
   input += synapse0x1db6e40();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dc0df0() {
   double input = input0x1dc0df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1db6e80() {
   double input = 0.785657;
   input += synapse0x1db66f0();
   input += synapse0x1db6730();
   input += synapse0x1db6770();
   input += synapse0x1db67b0();
   input += synapse0x1db7130();
   input += synapse0x1dc3480();
   input += synapse0x1dc34c0();
   input += synapse0x1dc3500();
   input += synapse0x1dc3540();
   input += synapse0x1dc3580();
   input += synapse0x1dc35c0();
   input += synapse0x1dc3600();
   input += synapse0x1dc3640();
   input += synapse0x1dc3680();
   input += synapse0x1dc36c0();
   input += synapse0x1dc3700();
   input += synapse0x1db7010();
   input += synapse0x1db7050();
   input += synapse0x1dc3850();
   input += synapse0x1dc3890();
   input += synapse0x1dc38d0();
   input += synapse0x1dc3910();
   input += synapse0x1dc3950();
   input += synapse0x1dc3990();
   return input;
}

double NNfunction_NN_2_5::neuron0x1db6e80() {
   double input = input0x1db6e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dc39d0() {
   double input = -0.293911;
   input += synapse0x1dc3d10();
   input += synapse0x1dc3d50();
   input += synapse0x1dc3d90();
   input += synapse0x1dc3dd0();
   input += synapse0x1dc3e10();
   input += synapse0x1dc3e50();
   input += synapse0x1dc3e90();
   input += synapse0x1dc3ed0();
   input += synapse0x1dc3f10();
   input += synapse0x1dc3f50();
   input += synapse0x1dc3f90();
   input += synapse0x1dc3fd0();
   input += synapse0x1dc4010();
   input += synapse0x1dc4050();
   input += synapse0x1dc4090();
   input += synapse0x1dc40d0();
   input += synapse0x1dc3b60();
   input += synapse0x1dc3ba0();
   input += synapse0x1dc4220();
   input += synapse0x1dc4260();
   input += synapse0x1dc42a0();
   input += synapse0x1dc42e0();
   input += synapse0x1dc4320();
   input += synapse0x1dc4360();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dc39d0() {
   double input = input0x1dc39d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dc43a0() {
   double input = 2.6655;
   input += synapse0x1dc46e0();
   input += synapse0x1dc4720();
   input += synapse0x1dc4760();
   input += synapse0x1dc47a0();
   input += synapse0x1dc47e0();
   input += synapse0x1dc4820();
   input += synapse0x1dc4860();
   input += synapse0x1dc48a0();
   input += synapse0x1dc48e0();
   input += synapse0x1dc4920();
   input += synapse0x1dc4960();
   input += synapse0x1dc49a0();
   input += synapse0x1dc49e0();
   input += synapse0x1dc4a20();
   input += synapse0x1dc4a60();
   input += synapse0x1dc4aa0();
   input += synapse0x1dc4530();
   input += synapse0x1dc4570();
   input += synapse0x1dc4bf0();
   input += synapse0x1dc4c30();
   input += synapse0x1dc4c70();
   input += synapse0x1dc4cb0();
   input += synapse0x1dc4cf0();
   input += synapse0x1dc4d30();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dc43a0() {
   double input = input0x1dc43a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dc4d70() {
   double input = 0.246761;
   input += synapse0x1dc50b0();
   input += synapse0x1dc50f0();
   input += synapse0x1dc5130();
   input += synapse0x1dc5170();
   input += synapse0x1dc51b0();
   input += synapse0x1dc51f0();
   input += synapse0x1dc5230();
   input += synapse0x1dc5270();
   input += synapse0x1dc52b0();
   input += synapse0x1dc52f0();
   input += synapse0x1dc5330();
   input += synapse0x1dc5370();
   input += synapse0x1dc53b0();
   input += synapse0x1dc53f0();
   input += synapse0x1dc5430();
   input += synapse0x1dc5470();
   input += synapse0x1dc4f00();
   input += synapse0x1dc4f40();
   input += synapse0x1dc55c0();
   input += synapse0x1dc5600();
   input += synapse0x1dc5640();
   input += synapse0x1dc5680();
   input += synapse0x1dc56c0();
   input += synapse0x1dc5700();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dc4d70() {
   double input = input0x1dc4d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dc5740() {
   double input = 3.08751;
   input += synapse0x1dc5a80();
   input += synapse0x1dc5ac0();
   input += synapse0x1dc5b00();
   input += synapse0x1dc5b40();
   input += synapse0x1dc5b80();
   input += synapse0x1dc5bc0();
   input += synapse0x1dc5c00();
   input += synapse0x1dc5c40();
   input += synapse0x1dc5c80();
   input += synapse0x1dc5cc0();
   input += synapse0x1dc5d00();
   input += synapse0x1dc5d40();
   input += synapse0x1dc5d80();
   input += synapse0x1dc5dc0();
   input += synapse0x1dc5e00();
   input += synapse0x1dc5e40();
   input += synapse0x1dc58d0();
   input += synapse0x1dc5910();
   input += synapse0x1dc5f90();
   input += synapse0x1dc5fd0();
   input += synapse0x1dc6010();
   input += synapse0x1dc6050();
   input += synapse0x1dc6090();
   input += synapse0x1dc60d0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dc5740() {
   double input = input0x1dc5740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dc6110() {
   double input = -0.751785;
   input += synapse0x1dc6450();
   input += synapse0x1dc6490();
   input += synapse0x1dc64d0();
   input += synapse0x1dc6510();
   input += synapse0x1dc6550();
   input += synapse0x1dc6590();
   input += synapse0x1dc65d0();
   input += synapse0x1dc6610();
   input += synapse0x1dc6650();
   input += synapse0x1dc6690();
   input += synapse0x1dc66d0();
   input += synapse0x1dc6710();
   input += synapse0x1dc6750();
   input += synapse0x1dc6790();
   input += synapse0x1dc67d0();
   input += synapse0x1dc6810();
   input += synapse0x1dc62a0();
   input += synapse0x1dc62e0();
   input += synapse0x1dc6960();
   input += synapse0x1dc69a0();
   input += synapse0x1dc69e0();
   input += synapse0x1dc6a20();
   input += synapse0x1dc6a60();
   input += synapse0x1dc6aa0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dc6110() {
   double input = input0x1dc6110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dc6ae0() {
   double input = 0.235931;
   input += synapse0x1dc6e20();
   input += synapse0x1dc6e60();
   input += synapse0x1dc6ea0();
   input += synapse0x1dc6ee0();
   input += synapse0x1dc6f20();
   input += synapse0x1dc6f60();
   input += synapse0x1dc6fa0();
   input += synapse0x1dc6fe0();
   input += synapse0x1dc7020();
   input += synapse0x1dc7060();
   input += synapse0x1dc70a0();
   input += synapse0x1dc70e0();
   input += synapse0x1dc7120();
   input += synapse0x1dc7160();
   input += synapse0x1dc71a0();
   input += synapse0x1dc71e0();
   input += synapse0x1dc6c70();
   input += synapse0x1dc6cb0();
   input += synapse0x1dc7330();
   input += synapse0x1dc7370();
   input += synapse0x1dc73b0();
   input += synapse0x1dc73f0();
   input += synapse0x1dc7430();
   input += synapse0x1dc7470();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dc6ae0() {
   double input = input0x1dc6ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dc74b0() {
   double input = 0.431604;
   input += synapse0x1dc77f0();
   input += synapse0x1dc7830();
   input += synapse0x1dc7870();
   input += synapse0x1dc78b0();
   input += synapse0x1dc78f0();
   input += synapse0x1dc7930();
   input += synapse0x1dc7970();
   input += synapse0x1dc79b0();
   input += synapse0x1dc79f0();
   input += synapse0x1dc7a30();
   input += synapse0x1dc7a70();
   input += synapse0x1dc7ab0();
   input += synapse0x1dc7af0();
   input += synapse0x1dc7b30();
   input += synapse0x1dc7b70();
   input += synapse0x1dc7bb0();
   input += synapse0x1dc7640();
   input += synapse0x1dc7680();
   input += synapse0x1dc7d00();
   input += synapse0x1dc7d40();
   input += synapse0x1dc7d80();
   input += synapse0x1dc7dc0();
   input += synapse0x1dc7e00();
   input += synapse0x1dc7e40();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dc74b0() {
   double input = input0x1dc74b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dc7e80() {
   double input = -0.837804;
   input += synapse0x1db08f0();
   input += synapse0x1db0930();
   input += synapse0x1db0970();
   input += synapse0x1db09b0();
   input += synapse0x1db09f0();
   input += synapse0x1db0a30();
   input += synapse0x1db0a70();
   input += synapse0x1db0ab0();
   input += synapse0x1dc85d0();
   input += synapse0x1dc8610();
   input += synapse0x1dc8650();
   input += synapse0x1dc8690();
   input += synapse0x1dc86d0();
   input += synapse0x1dc8710();
   input += synapse0x1dc8750();
   input += synapse0x1dc8790();
   input += synapse0x1dc8010();
   input += synapse0x1dc8050();
   input += synapse0x1dc88e0();
   input += synapse0x1dc8920();
   input += synapse0x1dc8960();
   input += synapse0x1dc89a0();
   input += synapse0x1dc89e0();
   input += synapse0x1dc8a20();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dc7e80() {
   double input = input0x1dc7e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dc8a60() {
   double input = 2.63037;
   input += synapse0x1dc8da0();
   input += synapse0x1dc8de0();
   input += synapse0x1dc8e20();
   input += synapse0x1dc8e60();
   input += synapse0x1dc8ea0();
   input += synapse0x1dc8ee0();
   input += synapse0x1dc8f20();
   input += synapse0x1dc8f60();
   input += synapse0x1dc8fa0();
   input += synapse0x1dc8fe0();
   input += synapse0x1dc9020();
   input += synapse0x1dc9060();
   input += synapse0x1dc90a0();
   input += synapse0x1dc90e0();
   input += synapse0x1dc9120();
   input += synapse0x1dc9160();
   input += synapse0x1dc8bf0();
   input += synapse0x1dc8c30();
   input += synapse0x1dc92b0();
   input += synapse0x1dc92f0();
   input += synapse0x1dc9330();
   input += synapse0x1dc9370();
   input += synapse0x1dc93b0();
   input += synapse0x1dc93f0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dc8a60() {
   double input = input0x1dc8a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dc9430() {
   double input = -0.0637195;
   input += synapse0x1dc9770();
   input += synapse0x1dc97b0();
   input += synapse0x1dc97f0();
   input += synapse0x1dc9830();
   input += synapse0x1dc9870();
   input += synapse0x1dc98b0();
   input += synapse0x1dc98f0();
   input += synapse0x1dc9930();
   input += synapse0x1dc9970();
   input += synapse0x1dc99b0();
   input += synapse0x1dc99f0();
   input += synapse0x1dc9a30();
   input += synapse0x1dc9a70();
   input += synapse0x1dc9ab0();
   input += synapse0x1dc9af0();
   input += synapse0x1dc9b30();
   input += synapse0x1dc95c0();
   input += synapse0x1dc9600();
   input += synapse0x1dba130();
   input += synapse0x1dba170();
   input += synapse0x1dba1b0();
   input += synapse0x1dba1f0();
   input += synapse0x1dba230();
   input += synapse0x1dba270();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dc9430() {
   double input = input0x1dc9430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dba2b0() {
   double input = 2.52188;
   input += synapse0x1dba5f0();
   input += synapse0x1dba630();
   input += synapse0x1dba670();
   input += synapse0x1dba6b0();
   input += synapse0x1dba6f0();
   input += synapse0x1dba730();
   input += synapse0x1dba770();
   input += synapse0x1dba7b0();
   input += synapse0x1dba7f0();
   input += synapse0x1dba830();
   input += synapse0x1dba870();
   input += synapse0x1dba8b0();
   input += synapse0x1dba8f0();
   input += synapse0x1dba930();
   input += synapse0x1dba970();
   input += synapse0x1dba9b0();
   input += synapse0x1dba440();
   input += synapse0x1dba480();
   input += synapse0x1dbab00();
   input += synapse0x1dbab40();
   input += synapse0x1dbab80();
   input += synapse0x1dbabc0();
   input += synapse0x1dbac00();
   input += synapse0x1dbac40();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dba2b0() {
   double input = input0x1dba2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dbac80() {
   double input = -0.334357;
   input += synapse0x1dbafc0();
   input += synapse0x1dbb000();
   input += synapse0x1dbb040();
   input += synapse0x1dbb080();
   input += synapse0x1dbb0c0();
   input += synapse0x1dbb100();
   input += synapse0x1dbb140();
   input += synapse0x1dbb180();
   input += synapse0x1dbb1c0();
   input += synapse0x1dbb200();
   input += synapse0x1dbb240();
   input += synapse0x1dbb280();
   input += synapse0x1dbb2c0();
   input += synapse0x1dbb300();
   input += synapse0x1dbb340();
   input += synapse0x1dbb380();
   input += synapse0x1dbae10();
   input += synapse0x1dbae50();
   input += synapse0x1dbb4d0();
   input += synapse0x1dbb510();
   input += synapse0x1dbb550();
   input += synapse0x1dbb590();
   input += synapse0x1dbb5d0();
   input += synapse0x1dbb610();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dbac80() {
   double input = input0x1dbac80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dbb650() {
   double input = 0.19623;
   input += synapse0x1dbb990();
   input += synapse0x1dbb9d0();
   input += synapse0x1dbba10();
   input += synapse0x1dbba50();
   input += synapse0x1dbba90();
   input += synapse0x1dbbad0();
   input += synapse0x1dbbb10();
   input += synapse0x1dbbb50();
   input += synapse0x1dbbb90();
   input += synapse0x1dbbbd0();
   input += synapse0x1dbbc10();
   input += synapse0x1dbbc50();
   input += synapse0x1dbbc90();
   input += synapse0x1dbbcd0();
   input += synapse0x1dbbd10();
   input += synapse0x1dbbd50();
   input += synapse0x1dbb7e0();
   input += synapse0x1dbb820();
   input += synapse0x1dbbea0();
   input += synapse0x1dbbee0();
   input += synapse0x1dbbf20();
   input += synapse0x1dbbf60();
   input += synapse0x1dbbfa0();
   input += synapse0x1dbbfe0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dbb650() {
   double input = input0x1dbb650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dcdc90() {
   double input = 3.28318;
   input += synapse0x1dcdeb0();
   input += synapse0x1dcdef0();
   input += synapse0x1dcdf30();
   input += synapse0x1dcdf70();
   input += synapse0x1dcdfb0();
   input += synapse0x1dcdff0();
   input += synapse0x1dce030();
   input += synapse0x1dce070();
   input += synapse0x1dce0b0();
   input += synapse0x1dce0f0();
   input += synapse0x1dce130();
   input += synapse0x1dce170();
   input += synapse0x1dce1b0();
   input += synapse0x1dce1f0();
   input += synapse0x1dce230();
   input += synapse0x1dce270();
   input += synapse0x1dbc020();
   input += synapse0x1dbc060();
   input += synapse0x1dce3c0();
   input += synapse0x1dce400();
   input += synapse0x1dce440();
   input += synapse0x1dce480();
   input += synapse0x1dce4c0();
   input += synapse0x1dce500();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dcdc90() {
   double input = input0x1dcdc90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dce540() {
   double input = -2.73848;
   input += synapse0x1dce880();
   input += synapse0x1dce8c0();
   input += synapse0x1dce900();
   input += synapse0x1dce940();
   input += synapse0x1dce980();
   input += synapse0x1dce9c0();
   input += synapse0x1dcea00();
   input += synapse0x1dcea40();
   input += synapse0x1dcea80();
   input += synapse0x1dceac0();
   input += synapse0x1dceb00();
   input += synapse0x1dceb40();
   input += synapse0x1dceb80();
   input += synapse0x1dcebc0();
   input += synapse0x1dcec00();
   input += synapse0x1dcec40();
   input += synapse0x1dce6d0();
   input += synapse0x1dce710();
   input += synapse0x1dced90();
   input += synapse0x1dcedd0();
   input += synapse0x1dcee10();
   input += synapse0x1dcee50();
   input += synapse0x1dcee90();
   input += synapse0x1dceed0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dce540() {
   double input = input0x1dce540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dcef10() {
   double input = -3.60919;
   input += synapse0x1dcf250();
   input += synapse0x1dcf290();
   input += synapse0x1dcf2d0();
   input += synapse0x1dcf310();
   input += synapse0x1dcf350();
   input += synapse0x1dcf390();
   input += synapse0x1dcf3d0();
   input += synapse0x1dcf410();
   input += synapse0x1dcf450();
   input += synapse0x1dcf490();
   input += synapse0x1dcf4d0();
   input += synapse0x1dcf510();
   input += synapse0x1dcf550();
   input += synapse0x1dcf590();
   input += synapse0x1dcf5d0();
   input += synapse0x1dcf610();
   input += synapse0x1dcf0a0();
   input += synapse0x1dcf0e0();
   input += synapse0x1dcf760();
   input += synapse0x1dcf7a0();
   input += synapse0x1dcf7e0();
   input += synapse0x1dcf820();
   input += synapse0x1dcf860();
   input += synapse0x1dcf8a0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dcef10() {
   double input = input0x1dcef10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dcf8e0() {
   double input = 0.609148;
   input += synapse0x1dcfc20();
   input += synapse0x1dcfc60();
   input += synapse0x1dcfca0();
   input += synapse0x1dcfce0();
   input += synapse0x1dcfd20();
   input += synapse0x1dcfd60();
   input += synapse0x1dcfda0();
   input += synapse0x1dcfde0();
   input += synapse0x1dcfe20();
   input += synapse0x1dcfe60();
   input += synapse0x1dcfea0();
   input += synapse0x1dcfee0();
   input += synapse0x1dcff20();
   input += synapse0x1dcff60();
   input += synapse0x1dcffa0();
   input += synapse0x1dcffe0();
   input += synapse0x1dcfa70();
   input += synapse0x1dcfab0();
   input += synapse0x1dd0130();
   input += synapse0x1dd0170();
   input += synapse0x1dd01b0();
   input += synapse0x1dd01f0();
   input += synapse0x1dd0230();
   input += synapse0x1dd0270();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dcf8e0() {
   double input = input0x1dcf8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dd6ae0() {
   double input = 0.454566;
   input += synapse0x1dac810();
   input += synapse0x1dac850();
   input += synapse0x1dadd20();
   input += synapse0x1dadd60();
   input += synapse0x1dae6f0();
   input += synapse0x1dae730();
   input += synapse0x1daf4c0();
   input += synapse0x1daf500();
   input += synapse0x1dafe90();
   input += synapse0x1dafed0();
   input += synapse0x1db0860();
   input += synapse0x1db08a0();
   input += synapse0x1db1340();
   input += synapse0x1db1380();
   input += synapse0x1db1d10();
   input += synapse0x1db1d50();
   input += synapse0x1daedf0();
   input += synapse0x1daee30();
   input += synapse0x1db38c0();
   input += synapse0x1db3900();
   input += synapse0x1db4290();
   input += synapse0x1db42d0();
   input += synapse0x1db4c60();
   input += synapse0x1db4ca0();
   input += synapse0x1db5630();
   input += synapse0x1db5670();
   input += synapse0x1da97a0();
   input += synapse0x1da97e0();
   input += synapse0x1db7720();
   input += synapse0x1db7760();
   input += synapse0x1db80f0();
   input += synapse0x1db8130();
   input += synapse0x1db8ac0();
   input += synapse0x1db8b00();
   input += synapse0x1db9490();
   input += synapse0x1db94d0();
   input += synapse0x1db9e60();
   input += synapse0x1db9ea0();
   input += synapse0x1db29b0();
   input += synapse0x1db29f0();
   input += synapse0x1dbc260();
   input += synapse0x1dbc2a0();
   input += synapse0x1dbcbf0();
   input += synapse0x1dbcc30();
   input += synapse0x1dbd5c0();
   input += synapse0x1dbd600();
   input += synapse0x1dbdf90();
   input += synapse0x1dbdfd0();
   input += synapse0x1dbe960();
   input += synapse0x1dbe9a0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dd6ae0() {
   double input = input0x1dd6ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dd6e80() {
   double input = 0.159164;
   input += synapse0x1dc10a0();
   input += synapse0x1dc10e0();
   input += synapse0x1db6660();
   input += synapse0x1db66a0();
   input += synapse0x1dc3c80();
   input += synapse0x1dc3cc0();
   input += synapse0x1dc4650();
   input += synapse0x1dc4690();
   input += synapse0x1dc5020();
   input += synapse0x1dc5060();
   input += synapse0x1dc59f0();
   input += synapse0x1dc5a30();
   input += synapse0x1dc63c0();
   input += synapse0x1dc6400();
   input += synapse0x1dc6d90();
   input += synapse0x1dc6dd0();
   input += synapse0x1dc7760();
   input += synapse0x1dc77a0();
   input += synapse0x1dc8130();
   input += synapse0x1dc8170();
   input += synapse0x1dc8d10();
   input += synapse0x1dc8d50();
   input += synapse0x1dc96e0();
   input += synapse0x1dc9720();
   input += synapse0x1dba560();
   input += synapse0x1dba5a0();
   input += synapse0x1dbaf30();
   input += synapse0x1dbaf70();
   input += synapse0x1dbb900();
   input += synapse0x1dbb940();
   input += synapse0x1dcde20();
   input += synapse0x1dcde60();
   input += synapse0x1dce7f0();
   input += synapse0x1dce830();
   input += synapse0x1dcf1c0();
   input += synapse0x1dcf200();
   input += synapse0x1dcfb90();
   input += synapse0x1dcfbd0();
   input += synapse0x1daba80();
   input += synapse0x1dabac0();
   input += synapse0x1dbf330();
   input += synapse0x1dbf370();
   input += synapse0x1dd02b0();
   input += synapse0x1dd02f0();
   input += synapse0x1dd0330();
   input += synapse0x1dd0370();
   input += synapse0x1dd7220();
   input += synapse0x1dd7260();
   input += synapse0x1dd72a0();
   input += synapse0x1dd72e0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dd6e80() {
   double input = input0x1dd6e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dd7320() {
   double input = 0.253781;
   input += synapse0x1dd7660();
   input += synapse0x1dd76a0();
   input += synapse0x1dd76e0();
   input += synapse0x1dd7720();
   input += synapse0x1dd7760();
   input += synapse0x1dd77a0();
   input += synapse0x1dd77e0();
   input += synapse0x1dd7820();
   input += synapse0x1dd7860();
   input += synapse0x1dd78a0();
   input += synapse0x1dd78e0();
   input += synapse0x1dd7920();
   input += synapse0x1dd7960();
   input += synapse0x1dd79a0();
   input += synapse0x1dd79e0();
   input += synapse0x1dd7a20();
   input += synapse0x1dd74b0();
   input += synapse0x1dd74f0();
   input += synapse0x1dd7b70();
   input += synapse0x1dd7bb0();
   input += synapse0x1dd7bf0();
   input += synapse0x1dd7c30();
   input += synapse0x1dd7c70();
   input += synapse0x1dd7cb0();
   input += synapse0x1dd7cf0();
   input += synapse0x1dd7d30();
   input += synapse0x1dd7d70();
   input += synapse0x1dd7db0();
   input += synapse0x1dd7df0();
   input += synapse0x1dd7e30();
   input += synapse0x1dd7e70();
   input += synapse0x1dd7eb0();
   input += synapse0x1dd7a60();
   input += synapse0x1dd7aa0();
   input += synapse0x1dd7ae0();
   input += synapse0x1dd7b20();
   input += synapse0x1dd8100();
   input += synapse0x1dd8140();
   input += synapse0x1dd8180();
   input += synapse0x1dd81c0();
   input += synapse0x1dd8200();
   input += synapse0x1dd8240();
   input += synapse0x1dd8280();
   input += synapse0x1dd82c0();
   input += synapse0x1dd8300();
   input += synapse0x1dd8340();
   input += synapse0x1dd8380();
   input += synapse0x1dd83c0();
   input += synapse0x1dd8400();
   input += synapse0x1dd8440();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dd7320() {
   double input = input0x1dd7320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dd8480() {
   double input = -1.29875;
   input += synapse0x1dd87c0();
   input += synapse0x1dd8800();
   input += synapse0x1dd8840();
   input += synapse0x1dd8880();
   input += synapse0x1dd88c0();
   input += synapse0x1dd8900();
   input += synapse0x1dd8940();
   input += synapse0x1dd8980();
   input += synapse0x1dd89c0();
   input += synapse0x1dd8a00();
   input += synapse0x1dd8a40();
   input += synapse0x1dd8a80();
   input += synapse0x1dd8ac0();
   input += synapse0x1dd8b00();
   input += synapse0x1dd8b40();
   input += synapse0x1dd8b80();
   input += synapse0x1dd8610();
   input += synapse0x1dd8650();
   input += synapse0x1dd8cd0();
   input += synapse0x1dd8d10();
   input += synapse0x1dd8d50();
   input += synapse0x1dd8d90();
   input += synapse0x1dd8dd0();
   input += synapse0x1dd8e10();
   input += synapse0x1dd8e50();
   input += synapse0x1dd8e90();
   input += synapse0x1dd8ed0();
   input += synapse0x1dd8f10();
   input += synapse0x1dd8f50();
   input += synapse0x1dd8f90();
   input += synapse0x1dd8fd0();
   input += synapse0x1dd9010();
   input += synapse0x1dd8bc0();
   input += synapse0x1dd8c00();
   input += synapse0x1dd8c40();
   input += synapse0x1dd8c80();
   input += synapse0x1dd9260();
   input += synapse0x1dd92a0();
   input += synapse0x1dd92e0();
   input += synapse0x1dd9320();
   input += synapse0x1dd9360();
   input += synapse0x1dd93a0();
   input += synapse0x1dd93e0();
   input += synapse0x1dd9420();
   input += synapse0x1dd9460();
   input += synapse0x1dd94a0();
   input += synapse0x1dd94e0();
   input += synapse0x1dd9520();
   input += synapse0x1dd9560();
   input += synapse0x1dd95a0();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dd8480() {
   double input = input0x1dd8480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dd95e0() {
   double input = -0.0432116;
   input += synapse0x1dd9920();
   input += synapse0x1dd9960();
   input += synapse0x1dd99a0();
   input += synapse0x1dd99e0();
   input += synapse0x1dd9a20();
   input += synapse0x1dd9a60();
   input += synapse0x1dd9aa0();
   input += synapse0x1dd9ae0();
   input += synapse0x1dd9b20();
   input += synapse0x1dd9b60();
   input += synapse0x1dd9ba0();
   input += synapse0x1dd9be0();
   input += synapse0x1dd9c20();
   input += synapse0x1dd9c60();
   input += synapse0x1dd9ca0();
   input += synapse0x1dd9ce0();
   input += synapse0x1dd9770();
   input += synapse0x1dd97b0();
   input += synapse0x1dd9e30();
   input += synapse0x1dd9e70();
   input += synapse0x1dd9eb0();
   input += synapse0x1dd9ef0();
   input += synapse0x1dd9f30();
   input += synapse0x1dd9f70();
   input += synapse0x1dd9fb0();
   input += synapse0x1dd9ff0();
   input += synapse0x1dda030();
   input += synapse0x1dda070();
   input += synapse0x1dda0b0();
   input += synapse0x1dda0f0();
   input += synapse0x1dda130();
   input += synapse0x1dda170();
   input += synapse0x1dd9d20();
   input += synapse0x1dd9d60();
   input += synapse0x1dd9da0();
   input += synapse0x1dd9de0();
   input += synapse0x1dda3c0();
   input += synapse0x1dda400();
   input += synapse0x1dda440();
   input += synapse0x1dda480();
   input += synapse0x1dda4c0();
   input += synapse0x1dda500();
   input += synapse0x1dda540();
   input += synapse0x1dda580();
   input += synapse0x1dda5c0();
   input += synapse0x1dda600();
   input += synapse0x1dda640();
   input += synapse0x1dda680();
   input += synapse0x1dda6c0();
   input += synapse0x1dda700();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dd95e0() {
   double input = input0x1dd95e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_5::input0x1dda740() {
   double input = 0.097785;
   input += synapse0x1dab820();
   input += synapse0x1dda960();
   input += synapse0x1dda9a0();
   input += synapse0x1dda9e0();
   input += synapse0x1ddaa20();
   return input;
}

double NNfunction_NN_2_5::neuron0x1dda740() {
   double input = input0x1dda740();
   return (input * 1)+0;
}

double NNfunction_NN_2_5::synapse0x1b66670() {
   return (neuron0x1da6800()*0.205646);
}

double NNfunction_NN_2_5::synapse0x1da66c0() {
   return (neuron0x1da6b40()*-0.200867);
}

double NNfunction_NN_2_5::synapse0x1da6700() {
   return (neuron0x1da6e80()*-0.00918706);
}

double NNfunction_NN_2_5::synapse0x1dabb10() {
   return (neuron0x1da71c0()*0.163171);
}

double NNfunction_NN_2_5::synapse0x1dabb50() {
   return (neuron0x1da7500()*-0.155865);
}

double NNfunction_NN_2_5::synapse0x1dabb90() {
   return (neuron0x1da7840()*0.216257);
}

double NNfunction_NN_2_5::synapse0x1dabbd0() {
   return (neuron0x1da7b80()*-0.0941615);
}

double NNfunction_NN_2_5::synapse0x1dabc10() {
   return (neuron0x1da7ec0()*0.120949);
}

double NNfunction_NN_2_5::synapse0x1dabc50() {
   return (neuron0x1da8200()*-0.0411292);
}

double NNfunction_NN_2_5::synapse0x1dabc90() {
   return (neuron0x1da8540()*-0.336786);
}

double NNfunction_NN_2_5::synapse0x1dabcd0() {
   return (neuron0x1da8880()*-0.241287);
}

double NNfunction_NN_2_5::synapse0x1dabd10() {
   return (neuron0x1da8bc0()*-0.209715);
}

double NNfunction_NN_2_5::synapse0x1dabd50() {
   return (neuron0x1da8f00()*0.251242);
}

double NNfunction_NN_2_5::synapse0x1dabd90() {
   return (neuron0x1da9240()*0.0194361);
}

double NNfunction_NN_2_5::synapse0x1dabdd0() {
   return (neuron0x1da9580()*-0.0219506);
}

double NNfunction_NN_2_5::synapse0x1dabe10() {
   return (neuron0x1da98c0()*-0.133195);
}

double NNfunction_NN_2_5::synapse0x1da6630() {
   return (neuron0x1da9c00()*0.0413944);
}

double NNfunction_NN_2_5::synapse0x1da6670() {
   return (neuron0x1daa160()*0.0583393);
}

double NNfunction_NN_2_5::synapse0x1b57ed0() {
   return (neuron0x1daa380()*-0.187272);
}

double NNfunction_NN_2_5::synapse0x1b57f10() {
   return (neuron0x1daa6c0()*-0.110173);
}

double NNfunction_NN_2_5::synapse0x1dac070() {
   return (neuron0x1daaa00()*0.104995);
}

double NNfunction_NN_2_5::synapse0x1dac0b0() {
   return (neuron0x1daad40()*-0.134068);
}

double NNfunction_NN_2_5::synapse0x1dac0f0() {
   return (neuron0x1dab080()*-0.0553723);
}

double NNfunction_NN_2_5::synapse0x1dac130() {
   return (neuron0x1dab3c0()*0.305851);
}

double NNfunction_NN_2_5::synapse0x1dac4b0() {
   return (neuron0x1da6800()*0.443353);
}

double NNfunction_NN_2_5::synapse0x1dac4f0() {
   return (neuron0x1da6b40()*-0.219655);
}

double NNfunction_NN_2_5::synapse0x1dac530() {
   return (neuron0x1da6e80()*0.0381921);
}

double NNfunction_NN_2_5::synapse0x1dac570() {
   return (neuron0x1da71c0()*-0.0581398);
}

double NNfunction_NN_2_5::synapse0x1dac5b0() {
   return (neuron0x1da7500()*-0.185133);
}

double NNfunction_NN_2_5::synapse0x1dac5f0() {
   return (neuron0x1da7840()*0.0859949);
}

double NNfunction_NN_2_5::synapse0x1dac630() {
   return (neuron0x1da7b80()*-0.889449);
}

double NNfunction_NN_2_5::synapse0x1dac670() {
   return (neuron0x1da7ec0()*0.034478);
}

double NNfunction_NN_2_5::synapse0x1dac6b0() {
   return (neuron0x1da8200()*-0.257335);
}

double NNfunction_NN_2_5::synapse0x1dabf60() {
   return (neuron0x1da8540()*-0.763091);
}

double NNfunction_NN_2_5::synapse0x1dabfa0() {
   return (neuron0x1da8880()*0.359915);
}

double NNfunction_NN_2_5::synapse0x1dabfe0() {
   return (neuron0x1da8bc0()*0.252424);
}

double NNfunction_NN_2_5::synapse0x1dac020() {
   return (neuron0x1da8f00()*-0.606855);
}

double NNfunction_NN_2_5::synapse0x1dac900() {
   return (neuron0x1da9240()*0.162583);
}

double NNfunction_NN_2_5::synapse0x1dac940() {
   return (neuron0x1da9580()*0.225243);
}

double NNfunction_NN_2_5::synapse0x1dac980() {
   return (neuron0x1da98c0()*0.300082);
}

double NNfunction_NN_2_5::synapse0x1dac300() {
   return (neuron0x1da9c00()*-0.0885634);
}

double NNfunction_NN_2_5::synapse0x1dac340() {
   return (neuron0x1daa160()*0.0274105);
}

double NNfunction_NN_2_5::synapse0x1dacad0() {
   return (neuron0x1daa380()*0.0874585);
}

double NNfunction_NN_2_5::synapse0x1dacb10() {
   return (neuron0x1daa6c0()*-0.50194);
}

double NNfunction_NN_2_5::synapse0x1dacb50() {
   return (neuron0x1daaa00()*-0.00315918);
}

double NNfunction_NN_2_5::synapse0x1dacb90() {
   return (neuron0x1daad40()*0.357678);
}

double NNfunction_NN_2_5::synapse0x1dacbd0() {
   return (neuron0x1dab080()*-0.0207454);
}

double NNfunction_NN_2_5::synapse0x1dacc10() {
   return (neuron0x1dab3c0()*-0.212221);
}

double NNfunction_NN_2_5::synapse0x1dacf90() {
   return (neuron0x1da6800()*-0.132389);
}

double NNfunction_NN_2_5::synapse0x1dacfd0() {
   return (neuron0x1da6b40()*0.026038);
}

double NNfunction_NN_2_5::synapse0x1dad010() {
   return (neuron0x1da6e80()*-0.156539);
}

double NNfunction_NN_2_5::synapse0x1dad050() {
   return (neuron0x1da71c0()*-0.0453156);
}

double NNfunction_NN_2_5::synapse0x1dad090() {
   return (neuron0x1da7500()*0.00821245);
}

double NNfunction_NN_2_5::synapse0x1dad0d0() {
   return (neuron0x1da7840()*-0.0313574);
}

double NNfunction_NN_2_5::synapse0x1dad110() {
   return (neuron0x1da7b80()*-0.0100738);
}

double NNfunction_NN_2_5::synapse0x1dad150() {
   return (neuron0x1da7ec0()*-0.00239569);
}

double NNfunction_NN_2_5::synapse0x1dad190() {
   return (neuron0x1da8200()*0.0170688);
}

double NNfunction_NN_2_5::synapse0x1dad1d0() {
   return (neuron0x1da8540()*0.0323322);
}

double NNfunction_NN_2_5::synapse0x1dad210() {
   return (neuron0x1da8880()*0.0623162);
}

double NNfunction_NN_2_5::synapse0x1dad250() {
   return (neuron0x1da8bc0()*-0.0746694);
}

double NNfunction_NN_2_5::synapse0x1dad290() {
   return (neuron0x1da8f00()*-0.0231969);
}

double NNfunction_NN_2_5::synapse0x1dad2d0() {
   return (neuron0x1da9240()*0.00994418);
}

double NNfunction_NN_2_5::synapse0x1dad310() {
   return (neuron0x1da9580()*0.0135452);
}

double NNfunction_NN_2_5::synapse0x1dad350() {
   return (neuron0x1da98c0()*0.0103537);
}

double NNfunction_NN_2_5::synapse0x1dacde0() {
   return (neuron0x1da9c00()*-0.042537);
}

double NNfunction_NN_2_5::synapse0x1dace20() {
   return (neuron0x1daa160()*-0.0084139);
}

double NNfunction_NN_2_5::synapse0x1b65d40() {
   return (neuron0x1daa380()*0.00745276);
}

double NNfunction_NN_2_5::synapse0x1b65d80() {
   return (neuron0x1daa6c0()*0.0399192);
}

double NNfunction_NN_2_5::synapse0x1d95890() {
   return (neuron0x1daaa00()*-0.0252766);
}

double NNfunction_NN_2_5::synapse0x1d958d0() {
   return (neuron0x1daad40()*0.034226);
}

double NNfunction_NN_2_5::synapse0x1d95910() {
   return (neuron0x1dab080()*0.0188794);
}

double NNfunction_NN_2_5::synapse0x1da6740() {
   return (neuron0x1dab3c0()*-1.42216);
}

double NNfunction_NN_2_5::synapse0x1dac8a0() {
   return (neuron0x1da6800()*0.00626837);
}

double NNfunction_NN_2_5::synapse0x1da6780() {
   return (neuron0x1da6b40()*-5.78192);
}

double NNfunction_NN_2_5::synapse0x1da67c0() {
   return (neuron0x1da6e80()*-1.53301);
}

double NNfunction_NN_2_5::synapse0x1dad4a0() {
   return (neuron0x1da71c0()*-0.0520308);
}

double NNfunction_NN_2_5::synapse0x1dad4e0() {
   return (neuron0x1da7500()*0.0026353);
}

double NNfunction_NN_2_5::synapse0x1dad520() {
   return (neuron0x1da7840()*-0.0702741);
}

double NNfunction_NN_2_5::synapse0x1dad560() {
   return (neuron0x1da7b80()*0.0189769);
}

double NNfunction_NN_2_5::synapse0x1dad5a0() {
   return (neuron0x1da7ec0()*-0.079965);
}

double NNfunction_NN_2_5::synapse0x1dad5e0() {
   return (neuron0x1da8200()*0.0221321);
}

double NNfunction_NN_2_5::synapse0x1dad620() {
   return (neuron0x1da8540()*0.00032732);
}

double NNfunction_NN_2_5::synapse0x1dad660() {
   return (neuron0x1da8880()*0.0195943);
}

double NNfunction_NN_2_5::synapse0x1dad6a0() {
   return (neuron0x1da8bc0()*0.304499);
}

double NNfunction_NN_2_5::synapse0x1dad6e0() {
   return (neuron0x1da8f00()*0.036374);
}

double NNfunction_NN_2_5::synapse0x1dad720() {
   return (neuron0x1da9240()*0.00475074);
}

double NNfunction_NN_2_5::synapse0x1dad760() {
   return (neuron0x1da9580()*0.0146893);
}

double NNfunction_NN_2_5::synapse0x1dad7a0() {
   return (neuron0x1da98c0()*-0.0179989);
}

double NNfunction_NN_2_5::synapse0x1dac6f0() {
   return (neuron0x1da9c00()*0.0604453);
}

double NNfunction_NN_2_5::synapse0x1dac730() {
   return (neuron0x1daa160()*0.0486897);
}

double NNfunction_NN_2_5::synapse0x1dad8f0() {
   return (neuron0x1daa380()*0.0571526);
}

double NNfunction_NN_2_5::synapse0x1dad930() {
   return (neuron0x1daa6c0()*0.0291251);
}

double NNfunction_NN_2_5::synapse0x1dad970() {
   return (neuron0x1daaa00()*-0.0413778);
}

double NNfunction_NN_2_5::synapse0x1dad9b0() {
   return (neuron0x1daad40()*-0.0168697);
}

double NNfunction_NN_2_5::synapse0x1dad9f0() {
   return (neuron0x1dab080()*0.00399422);
}

double NNfunction_NN_2_5::synapse0x1dada30() {
   return (neuron0x1dab3c0()*-3.92604);
}

double NNfunction_NN_2_5::synapse0x1daddb0() {
   return (neuron0x1da6800()*0.0292375);
}

double NNfunction_NN_2_5::synapse0x1daddf0() {
   return (neuron0x1da6b40()*-5.53771);
}

double NNfunction_NN_2_5::synapse0x1dade30() {
   return (neuron0x1da6e80()*3.62808);
}

double NNfunction_NN_2_5::synapse0x1dade70() {
   return (neuron0x1da71c0()*0.00455181);
}

double NNfunction_NN_2_5::synapse0x1dadeb0() {
   return (neuron0x1da7500()*0.0171129);
}

double NNfunction_NN_2_5::synapse0x1dadef0() {
   return (neuron0x1da7840()*-0.012339);
}

double NNfunction_NN_2_5::synapse0x1dadf30() {
   return (neuron0x1da7b80()*0.00316691);
}

double NNfunction_NN_2_5::synapse0x1dadf70() {
   return (neuron0x1da7ec0()*-0.00305);
}

double NNfunction_NN_2_5::synapse0x1dadfb0() {
   return (neuron0x1da8200()*-0.00509523);
}

double NNfunction_NN_2_5::synapse0x1dadff0() {
   return (neuron0x1da8540()*-0.00986017);
}

double NNfunction_NN_2_5::synapse0x1dae030() {
   return (neuron0x1da8880()*0.0311651);
}

double NNfunction_NN_2_5::synapse0x1dae070() {
   return (neuron0x1da8bc0()*-0.102459);
}

double NNfunction_NN_2_5::synapse0x1dae0b0() {
   return (neuron0x1da8f00()*-0.028631);
}

double NNfunction_NN_2_5::synapse0x1dae0f0() {
   return (neuron0x1da9240()*0.008288);
}

double NNfunction_NN_2_5::synapse0x1dae130() {
   return (neuron0x1da9580()*-0.00978142);
}

double NNfunction_NN_2_5::synapse0x1dae170() {
   return (neuron0x1da98c0()*0.013985);
}

double NNfunction_NN_2_5::synapse0x1dadc00() {
   return (neuron0x1da9c00()*-0.0123969);
}

double NNfunction_NN_2_5::synapse0x1dadc40() {
   return (neuron0x1daa160()*0.0117882);
}

double NNfunction_NN_2_5::synapse0x1dae2c0() {
   return (neuron0x1daa380()*-0.00999595);
}

double NNfunction_NN_2_5::synapse0x1dae300() {
   return (neuron0x1daa6c0()*-0.000747516);
}

double NNfunction_NN_2_5::synapse0x1dae340() {
   return (neuron0x1daaa00()*-0.0296146);
}

double NNfunction_NN_2_5::synapse0x1dae380() {
   return (neuron0x1daad40()*0.0267363);
}

double NNfunction_NN_2_5::synapse0x1dae3c0() {
   return (neuron0x1dab080()*0.0298397);
}

double NNfunction_NN_2_5::synapse0x1dae400() {
   return (neuron0x1dab3c0()*3.11483);
}

double NNfunction_NN_2_5::synapse0x1dae780() {
   return (neuron0x1da6800()*-0.0925606);
}

double NNfunction_NN_2_5::synapse0x1dae7c0() {
   return (neuron0x1da6b40()*-0.0638417);
}

double NNfunction_NN_2_5::synapse0x1dae800() {
   return (neuron0x1da6e80()*-0.0594189);
}

double NNfunction_NN_2_5::synapse0x1dae840() {
   return (neuron0x1da71c0()*0.0104854);
}

double NNfunction_NN_2_5::synapse0x1dae880() {
   return (neuron0x1da7500()*0.137856);
}

double NNfunction_NN_2_5::synapse0x1dae8c0() {
   return (neuron0x1da7840()*-0.0466649);
}

double NNfunction_NN_2_5::synapse0x1dae900() {
   return (neuron0x1da7b80()*0.106998);
}

double NNfunction_NN_2_5::synapse0x1dae940() {
   return (neuron0x1da7ec0()*-0.0248776);
}

double NNfunction_NN_2_5::synapse0x1dae980() {
   return (neuron0x1da8200()*-0.0359618);
}

double NNfunction_NN_2_5::synapse0x1b660d0() {
   return (neuron0x1da8540()*-0.0139126);
}

double NNfunction_NN_2_5::synapse0x1b66110() {
   return (neuron0x1da8880()*-0.00912447);
}

double NNfunction_NN_2_5::synapse0x1b66150() {
   return (neuron0x1da8bc0()*-0.0373978);
}

double NNfunction_NN_2_5::synapse0x1b66190() {
   return (neuron0x1da8f00()*-0.100878);
}

double NNfunction_NN_2_5::synapse0x1b661d0() {
   return (neuron0x1da9240()*-0.110381);
}

double NNfunction_NN_2_5::synapse0x1b66210() {
   return (neuron0x1da9580()*0.0495001);
}

double NNfunction_NN_2_5::synapse0x1b66250() {
   return (neuron0x1da98c0()*-0.0366346);
}

double NNfunction_NN_2_5::synapse0x1dae5d0() {
   return (neuron0x1da9c00()*0.030703);
}

double NNfunction_NN_2_5::synapse0x1dae610() {
   return (neuron0x1daa160()*0.00233666);
}

double NNfunction_NN_2_5::synapse0x1b663a0() {
   return (neuron0x1daa380()*0.0908307);
}

double NNfunction_NN_2_5::synapse0x1b663e0() {
   return (neuron0x1daa6c0()*-0.0644481);
}

double NNfunction_NN_2_5::synapse0x1b66420() {
   return (neuron0x1daaa00()*0.0416292);
}

double NNfunction_NN_2_5::synapse0x1b66460() {
   return (neuron0x1daad40()*0.0371428);
}

double NNfunction_NN_2_5::synapse0x1b664a0() {
   return (neuron0x1dab080()*0.00309765);
}

double NNfunction_NN_2_5::synapse0x1daf1d0() {
   return (neuron0x1dab3c0()*-1.47492);
}

double NNfunction_NN_2_5::synapse0x1daf550() {
   return (neuron0x1da6800()*0.343317);
}

double NNfunction_NN_2_5::synapse0x1daf590() {
   return (neuron0x1da6b40()*-0.153604);
}

double NNfunction_NN_2_5::synapse0x1daf5d0() {
   return (neuron0x1da6e80()*0.0409335);
}

double NNfunction_NN_2_5::synapse0x1daf610() {
   return (neuron0x1da71c0()*-0.0649865);
}

double NNfunction_NN_2_5::synapse0x1daf650() {
   return (neuron0x1da7500()*-0.164178);
}

double NNfunction_NN_2_5::synapse0x1daf690() {
   return (neuron0x1da7840()*0.100081);
}

double NNfunction_NN_2_5::synapse0x1daf6d0() {
   return (neuron0x1da7b80()*-0.628861);
}

double NNfunction_NN_2_5::synapse0x1daf710() {
   return (neuron0x1da7ec0()*-0.00826127);
}

double NNfunction_NN_2_5::synapse0x1daf750() {
   return (neuron0x1da8200()*-0.178278);
}

double NNfunction_NN_2_5::synapse0x1daf790() {
   return (neuron0x1da8540()*-0.497859);
}

double NNfunction_NN_2_5::synapse0x1daf7d0() {
   return (neuron0x1da8880()*0.283007);
}

double NNfunction_NN_2_5::synapse0x1daf810() {
   return (neuron0x1da8bc0()*0.194485);
}

double NNfunction_NN_2_5::synapse0x1daf850() {
   return (neuron0x1da8f00()*-0.395816);
}

double NNfunction_NN_2_5::synapse0x1daf890() {
   return (neuron0x1da9240()*0.107876);
}

double NNfunction_NN_2_5::synapse0x1daf8d0() {
   return (neuron0x1da9580()*0.169388);
}

double NNfunction_NN_2_5::synapse0x1daf910() {
   return (neuron0x1da98c0()*0.193841);
}

double NNfunction_NN_2_5::synapse0x1daf3a0() {
   return (neuron0x1da9c00()*-0.126849);
}

double NNfunction_NN_2_5::synapse0x1daf3e0() {
   return (neuron0x1daa160()*-0.00850315);
}

double NNfunction_NN_2_5::synapse0x1dafa60() {
   return (neuron0x1daa380()*0.0453726);
}

double NNfunction_NN_2_5::synapse0x1dafaa0() {
   return (neuron0x1daa6c0()*-0.321938);
}

double NNfunction_NN_2_5::synapse0x1dafae0() {
   return (neuron0x1daaa00()*-0.0444764);
}

double NNfunction_NN_2_5::synapse0x1dafb20() {
   return (neuron0x1daad40()*0.24062);
}

double NNfunction_NN_2_5::synapse0x1dafb60() {
   return (neuron0x1dab080()*-0.0637214);
}

double NNfunction_NN_2_5::synapse0x1dafba0() {
   return (neuron0x1dab3c0()*0.409596);
}

double NNfunction_NN_2_5::synapse0x1daff20() {
   return (neuron0x1da6800()*0.0115434);
}

double NNfunction_NN_2_5::synapse0x1daff60() {
   return (neuron0x1da6b40()*-0.100075);
}

double NNfunction_NN_2_5::synapse0x1daffa0() {
   return (neuron0x1da6e80()*-0.555824);
}

double NNfunction_NN_2_5::synapse0x1daffe0() {
   return (neuron0x1da71c0()*0.438634);
}

double NNfunction_NN_2_5::synapse0x1db0020() {
   return (neuron0x1da7500()*-0.392708);
}

double NNfunction_NN_2_5::synapse0x1db0060() {
   return (neuron0x1da7840()*-0.07842);
}

double NNfunction_NN_2_5::synapse0x1db00a0() {
   return (neuron0x1da7b80()*1.34494);
}

double NNfunction_NN_2_5::synapse0x1db00e0() {
   return (neuron0x1da7ec0()*-0.574022);
}

double NNfunction_NN_2_5::synapse0x1db0120() {
   return (neuron0x1da8200()*-0.0518429);
}

double NNfunction_NN_2_5::synapse0x1db0160() {
   return (neuron0x1da8540()*0.950648);
}

double NNfunction_NN_2_5::synapse0x1db01a0() {
   return (neuron0x1da8880()*-0.0129509);
}

double NNfunction_NN_2_5::synapse0x1db01e0() {
   return (neuron0x1da8bc0()*-0.177039);
}

double NNfunction_NN_2_5::synapse0x1db0220() {
   return (neuron0x1da8f00()*0.66221);
}

double NNfunction_NN_2_5::synapse0x1db0260() {
   return (neuron0x1da9240()*0.39019);
}

double NNfunction_NN_2_5::synapse0x1db02a0() {
   return (neuron0x1da9580()*0.573549);
}

double NNfunction_NN_2_5::synapse0x1db02e0() {
   return (neuron0x1da98c0()*0.226803);
}

double NNfunction_NN_2_5::synapse0x1dafd70() {
   return (neuron0x1da9c00()*0.0663168);
}

double NNfunction_NN_2_5::synapse0x1dafdb0() {
   return (neuron0x1daa160()*0.110549);
}

double NNfunction_NN_2_5::synapse0x1db0430() {
   return (neuron0x1daa380()*0.641055);
}

double NNfunction_NN_2_5::synapse0x1db0470() {
   return (neuron0x1daa6c0()*-0.137266);
}

double NNfunction_NN_2_5::synapse0x1db04b0() {
   return (neuron0x1daaa00()*-0.0879554);
}

double NNfunction_NN_2_5::synapse0x1db04f0() {
   return (neuron0x1daad40()*0.748953);
}

double NNfunction_NN_2_5::synapse0x1db0530() {
   return (neuron0x1dab080()*0.202062);
}

double NNfunction_NN_2_5::synapse0x1db0570() {
   return (neuron0x1dab3c0()*1.2947);
}

double NNfunction_NN_2_5::synapse0x1daa050() {
   return (neuron0x1da6800()*0.0583272);
}

double NNfunction_NN_2_5::synapse0x1daa090() {
   return (neuron0x1da6b40()*-0.449687);
}

double NNfunction_NN_2_5::synapse0x1daa0d0() {
   return (neuron0x1da6e80()*2.02661);
}

double NNfunction_NN_2_5::synapse0x1daa110() {
   return (neuron0x1da71c0()*-0.00464089);
}

double NNfunction_NN_2_5::synapse0x1db0b00() {
   return (neuron0x1da7500()*0.0267202);
}

double NNfunction_NN_2_5::synapse0x1db0b40() {
   return (neuron0x1da7840()*0.00911922);
}

double NNfunction_NN_2_5::synapse0x1db0b80() {
   return (neuron0x1da7b80()*-0.052253);
}

double NNfunction_NN_2_5::synapse0x1db0bc0() {
   return (neuron0x1da7ec0()*0.0213049);
}

double NNfunction_NN_2_5::synapse0x1db0c00() {
   return (neuron0x1da8200()*-0.017947);
}

double NNfunction_NN_2_5::synapse0x1db0c40() {
   return (neuron0x1da8540()*-0.0542699);
}

double NNfunction_NN_2_5::synapse0x1db0c80() {
   return (neuron0x1da8880()*-0.0380687);
}

double NNfunction_NN_2_5::synapse0x1db0cc0() {
   return (neuron0x1da8bc0()*1.80961);
}

double NNfunction_NN_2_5::synapse0x1db0d00() {
   return (neuron0x1da8f00()*-0.0236376);
}

double NNfunction_NN_2_5::synapse0x1db0d40() {
   return (neuron0x1da9240()*-0.0557825);
}

double NNfunction_NN_2_5::synapse0x1db0d80() {
   return (neuron0x1da9580()*0.114312);
}

double NNfunction_NN_2_5::synapse0x1db0dc0() {
   return (neuron0x1da98c0()*0.0267714);
}

double NNfunction_NN_2_5::synapse0x1db0740() {
   return (neuron0x1da9c00()*0.0691277);
}

double NNfunction_NN_2_5::synapse0x1db0780() {
   return (neuron0x1daa160()*0.0829738);
}

double NNfunction_NN_2_5::synapse0x1db0f10() {
   return (neuron0x1daa380()*0.104589);
}

double NNfunction_NN_2_5::synapse0x1db0f50() {
   return (neuron0x1daa6c0()*-0.0683711);
}

double NNfunction_NN_2_5::synapse0x1db0f90() {
   return (neuron0x1daaa00()*0.0528706);
}

double NNfunction_NN_2_5::synapse0x1db0fd0() {
   return (neuron0x1daad40()*-0.0918138);
}

double NNfunction_NN_2_5::synapse0x1db1010() {
   return (neuron0x1dab080()*-0.0502193);
}

double NNfunction_NN_2_5::synapse0x1db1050() {
   return (neuron0x1dab3c0()*0.227652);
}

double NNfunction_NN_2_5::synapse0x1db13d0() {
   return (neuron0x1da6800()*0.0136699);
}

double NNfunction_NN_2_5::synapse0x1db1410() {
   return (neuron0x1da6b40()*-4.28362);
}

double NNfunction_NN_2_5::synapse0x1db1450() {
   return (neuron0x1da6e80()*2.06783);
}

double NNfunction_NN_2_5::synapse0x1db1490() {
   return (neuron0x1da71c0()*0.0140748);
}

double NNfunction_NN_2_5::synapse0x1db14d0() {
   return (neuron0x1da7500()*0.00376674);
}

double NNfunction_NN_2_5::synapse0x1db1510() {
   return (neuron0x1da7840()*0.0116185);
}

double NNfunction_NN_2_5::synapse0x1db1550() {
   return (neuron0x1da7b80()*0.00220372);
}

double NNfunction_NN_2_5::synapse0x1db1590() {
   return (neuron0x1da7ec0()*-0.00578692);
}

double NNfunction_NN_2_5::synapse0x1db15d0() {
   return (neuron0x1da8200()*0.0410733);
}

double NNfunction_NN_2_5::synapse0x1db1610() {
   return (neuron0x1da8540()*-0.0275288);
}

double NNfunction_NN_2_5::synapse0x1db1650() {
   return (neuron0x1da8880()*0.00543198);
}

double NNfunction_NN_2_5::synapse0x1db1690() {
   return (neuron0x1da8bc0()*-0.197325);
}

double NNfunction_NN_2_5::synapse0x1db16d0() {
   return (neuron0x1da8f00()*-0.059293);
}

double NNfunction_NN_2_5::synapse0x1db1710() {
   return (neuron0x1da9240()*0.00116824);
}

double NNfunction_NN_2_5::synapse0x1db1750() {
   return (neuron0x1da9580()*-0.00518141);
}

double NNfunction_NN_2_5::synapse0x1db1790() {
   return (neuron0x1da98c0()*-0.0110841);
}

double NNfunction_NN_2_5::synapse0x1db1220() {
   return (neuron0x1da9c00()*0.0116875);
}

double NNfunction_NN_2_5::synapse0x1db1260() {
   return (neuron0x1daa160()*-0.00706063);
}

double NNfunction_NN_2_5::synapse0x1db18e0() {
   return (neuron0x1daa380()*-0.04136);
}

double NNfunction_NN_2_5::synapse0x1db1920() {
   return (neuron0x1daa6c0()*0.00440774);
}

double NNfunction_NN_2_5::synapse0x1db1960() {
   return (neuron0x1daaa00()*-0.000723915);
}

double NNfunction_NN_2_5::synapse0x1db19a0() {
   return (neuron0x1daad40()*0.0436373);
}

double NNfunction_NN_2_5::synapse0x1db19e0() {
   return (neuron0x1dab080()*0.0193442);
}

double NNfunction_NN_2_5::synapse0x1db1a20() {
   return (neuron0x1dab3c0()*-1.50668);
}

double NNfunction_NN_2_5::synapse0x1db1da0() {
   return (neuron0x1da6800()*-0.108785);
}

double NNfunction_NN_2_5::synapse0x1db1de0() {
   return (neuron0x1da6b40()*0.0770633);
}

double NNfunction_NN_2_5::synapse0x1db1e20() {
   return (neuron0x1da6e80()*-0.434274);
}

double NNfunction_NN_2_5::synapse0x1db1e60() {
   return (neuron0x1da71c0()*-0.0338347);
}

double NNfunction_NN_2_5::synapse0x1db1ea0() {
   return (neuron0x1da7500()*-0.00376771);
}

double NNfunction_NN_2_5::synapse0x1db1ee0() {
   return (neuron0x1da7840()*0.0403208);
}

double NNfunction_NN_2_5::synapse0x1db1f20() {
   return (neuron0x1da7b80()*-0.0114275);
}

double NNfunction_NN_2_5::synapse0x1db1f60() {
   return (neuron0x1da7ec0()*0.0603865);
}

double NNfunction_NN_2_5::synapse0x1db1fa0() {
   return (neuron0x1da8200()*-0.0923345);
}

double NNfunction_NN_2_5::synapse0x1db1fe0() {
   return (neuron0x1da8540()*0.0167507);
}

double NNfunction_NN_2_5::synapse0x1db2020() {
   return (neuron0x1da8880()*0.0053788);
}

double NNfunction_NN_2_5::synapse0x1db2060() {
   return (neuron0x1da8bc0()*0.568481);
}

double NNfunction_NN_2_5::synapse0x1db20a0() {
   return (neuron0x1da8f00()*0.11253);
}

double NNfunction_NN_2_5::synapse0x1db20e0() {
   return (neuron0x1da9240()*-0.00557245);
}

double NNfunction_NN_2_5::synapse0x1db2120() {
   return (neuron0x1da9580()*0.00427191);
}

double NNfunction_NN_2_5::synapse0x1db2160() {
   return (neuron0x1da98c0()*0.00891763);
}

double NNfunction_NN_2_5::synapse0x1db1bf0() {
   return (neuron0x1da9c00()*0.0852592);
}

double NNfunction_NN_2_5::synapse0x1db1c30() {
   return (neuron0x1daa160()*0.0857872);
}

double NNfunction_NN_2_5::synapse0x1dae9c0() {
   return (neuron0x1daa380()*-0.0641148);
}

double NNfunction_NN_2_5::synapse0x1daea00() {
   return (neuron0x1daa6c0()*0.0145677);
}

double NNfunction_NN_2_5::synapse0x1daea40() {
   return (neuron0x1daaa00()*0.0280929);
}

double NNfunction_NN_2_5::synapse0x1daea80() {
   return (neuron0x1daad40()*-0.0243822);
}

double NNfunction_NN_2_5::synapse0x1daeac0() {
   return (neuron0x1dab080()*0.00885799);
}

double NNfunction_NN_2_5::synapse0x1daeb00() {
   return (neuron0x1dab3c0()*-0.54543);
}

double NNfunction_NN_2_5::synapse0x1daee80() {
   return (neuron0x1da6800()*0.149262);
}

double NNfunction_NN_2_5::synapse0x1daeec0() {
   return (neuron0x1da6b40()*-0.00907322);
}

double NNfunction_NN_2_5::synapse0x1daef00() {
   return (neuron0x1da6e80()*0.244447);
}

double NNfunction_NN_2_5::synapse0x1daef40() {
   return (neuron0x1da71c0()*-0.0132541);
}

double NNfunction_NN_2_5::synapse0x1daef80() {
   return (neuron0x1da7500()*-0.0809508);
}

double NNfunction_NN_2_5::synapse0x1daefc0() {
   return (neuron0x1da7840()*-0.039113);
}

double NNfunction_NN_2_5::synapse0x1daf000() {
   return (neuron0x1da7b80()*0.0618948);
}

double NNfunction_NN_2_5::synapse0x1daf040() {
   return (neuron0x1da7ec0()*0.22372);
}

double NNfunction_NN_2_5::synapse0x1daf080() {
   return (neuron0x1da8200()*0.221055);
}

double NNfunction_NN_2_5::synapse0x1daf0c0() {
   return (neuron0x1da8540()*-0.012182);
}

double NNfunction_NN_2_5::synapse0x1daf100() {
   return (neuron0x1da8880()*0.0169204);
}

double NNfunction_NN_2_5::synapse0x1daf140() {
   return (neuron0x1da8bc0()*0.433396);
}

double NNfunction_NN_2_5::synapse0x1daf180() {
   return (neuron0x1da8f00()*-0.0707525);
}

double NNfunction_NN_2_5::synapse0x1db32c0() {
   return (neuron0x1da9240()*0.212519);
}

double NNfunction_NN_2_5::synapse0x1db3300() {
   return (neuron0x1da9580()*0.0780518);
}

double NNfunction_NN_2_5::synapse0x1db3340() {
   return (neuron0x1da98c0()*-0.102422);
}

double NNfunction_NN_2_5::synapse0x1daecd0() {
   return (neuron0x1da9c00()*0.0724322);
}

double NNfunction_NN_2_5::synapse0x1daed10() {
   return (neuron0x1daa160()*0.0486515);
}

double NNfunction_NN_2_5::synapse0x1db3490() {
   return (neuron0x1daa380()*-0.10932);
}

double NNfunction_NN_2_5::synapse0x1db34d0() {
   return (neuron0x1daa6c0()*0.0298228);
}

double NNfunction_NN_2_5::synapse0x1db3510() {
   return (neuron0x1daaa00()*0.0307169);
}

double NNfunction_NN_2_5::synapse0x1db3550() {
   return (neuron0x1daad40()*-0.0860033);
}

double NNfunction_NN_2_5::synapse0x1db3590() {
   return (neuron0x1dab080()*0.114783);
}

double NNfunction_NN_2_5::synapse0x1db35d0() {
   return (neuron0x1dab3c0()*0.644758);
}

double NNfunction_NN_2_5::synapse0x1db3950() {
   return (neuron0x1da6800()*0.0627312);
}

double NNfunction_NN_2_5::synapse0x1db3990() {
   return (neuron0x1da6b40()*18.1398);
}

double NNfunction_NN_2_5::synapse0x1db39d0() {
   return (neuron0x1da6e80()*-3.04488);
}

double NNfunction_NN_2_5::synapse0x1db3a10() {
   return (neuron0x1da71c0()*0.00184409);
}

double NNfunction_NN_2_5::synapse0x1db3a50() {
   return (neuron0x1da7500()*0.0229254);
}

double NNfunction_NN_2_5::synapse0x1db3a90() {
   return (neuron0x1da7840()*-0.00554771);
}

double NNfunction_NN_2_5::synapse0x1db3ad0() {
   return (neuron0x1da7b80()*-0.00524177);
}

double NNfunction_NN_2_5::synapse0x1db3b10() {
   return (neuron0x1da7ec0()*0.0161935);
}

double NNfunction_NN_2_5::synapse0x1db3b50() {
   return (neuron0x1da8200()*-0.0166424);
}

double NNfunction_NN_2_5::synapse0x1db3b90() {
   return (neuron0x1da8540()*-0.0101532);
}

double NNfunction_NN_2_5::synapse0x1db3bd0() {
   return (neuron0x1da8880()*-0.0215359);
}

double NNfunction_NN_2_5::synapse0x1db3c10() {
   return (neuron0x1da8bc0()*0.0947494);
}

double NNfunction_NN_2_5::synapse0x1db3c50() {
   return (neuron0x1da8f00()*0.0072013);
}

double NNfunction_NN_2_5::synapse0x1db3c90() {
   return (neuron0x1da9240()*-0.00668104);
}

double NNfunction_NN_2_5::synapse0x1db3cd0() {
   return (neuron0x1da9580()*-0.0350759);
}

double NNfunction_NN_2_5::synapse0x1db3d10() {
   return (neuron0x1da98c0()*-0.0168962);
}

double NNfunction_NN_2_5::synapse0x1db37a0() {
   return (neuron0x1da9c00()*0.00468676);
}

double NNfunction_NN_2_5::synapse0x1db37e0() {
   return (neuron0x1daa160()*0.0322884);
}

double NNfunction_NN_2_5::synapse0x1db3e60() {
   return (neuron0x1daa380()*0.0152981);
}

double NNfunction_NN_2_5::synapse0x1db3ea0() {
   return (neuron0x1daa6c0()*0.0412706);
}

double NNfunction_NN_2_5::synapse0x1db3ee0() {
   return (neuron0x1daaa00()*-0.0387241);
}

double NNfunction_NN_2_5::synapse0x1db3f20() {
   return (neuron0x1daad40()*0.0199343);
}

double NNfunction_NN_2_5::synapse0x1db3f60() {
   return (neuron0x1dab080()*-0.0120855);
}

double NNfunction_NN_2_5::synapse0x1db3fa0() {
   return (neuron0x1dab3c0()*0.655584);
}

double NNfunction_NN_2_5::synapse0x1db4320() {
   return (neuron0x1da6800()*0.0738709);
}

double NNfunction_NN_2_5::synapse0x1db4360() {
   return (neuron0x1da6b40()*0.0689589);
}

double NNfunction_NN_2_5::synapse0x1db43a0() {
   return (neuron0x1da6e80()*3.11949);
}

double NNfunction_NN_2_5::synapse0x1db43e0() {
   return (neuron0x1da71c0()*0.0404184);
}

double NNfunction_NN_2_5::synapse0x1db4420() {
   return (neuron0x1da7500()*0.00949636);
}

double NNfunction_NN_2_5::synapse0x1db4460() {
   return (neuron0x1da7840()*-0.0105852);
}

double NNfunction_NN_2_5::synapse0x1db44a0() {
   return (neuron0x1da7b80()*-0.0142926);
}

double NNfunction_NN_2_5::synapse0x1db44e0() {
   return (neuron0x1da7ec0()*-0.0309162);
}

double NNfunction_NN_2_5::synapse0x1db4520() {
   return (neuron0x1da8200()*0.00248108);
}

double NNfunction_NN_2_5::synapse0x1db4560() {
   return (neuron0x1da8540()*0.0103022);
}

double NNfunction_NN_2_5::synapse0x1db45a0() {
   return (neuron0x1da8880()*-0.0244083);
}

double NNfunction_NN_2_5::synapse0x1db45e0() {
   return (neuron0x1da8bc0()*0.299763);
}

double NNfunction_NN_2_5::synapse0x1db4620() {
   return (neuron0x1da8f00()*0.0440395);
}

double NNfunction_NN_2_5::synapse0x1db4660() {
   return (neuron0x1da9240()*-0.0252028);
}

double NNfunction_NN_2_5::synapse0x1db46a0() {
   return (neuron0x1da9580()*0.00309395);
}

double NNfunction_NN_2_5::synapse0x1db46e0() {
   return (neuron0x1da98c0()*-0.015086);
}

double NNfunction_NN_2_5::synapse0x1db4170() {
   return (neuron0x1da9c00()*-0.0554906);
}

double NNfunction_NN_2_5::synapse0x1db41b0() {
   return (neuron0x1daa160()*0.0355391);
}

double NNfunction_NN_2_5::synapse0x1db4830() {
   return (neuron0x1daa380()*0.00947745);
}

double NNfunction_NN_2_5::synapse0x1db4870() {
   return (neuron0x1daa6c0()*0.0223466);
}

double NNfunction_NN_2_5::synapse0x1db48b0() {
   return (neuron0x1daaa00()*-0.0603801);
}

double NNfunction_NN_2_5::synapse0x1db48f0() {
   return (neuron0x1daad40()*0.0306353);
}

double NNfunction_NN_2_5::synapse0x1db4930() {
   return (neuron0x1dab080()*-0.0240969);
}

double NNfunction_NN_2_5::synapse0x1db4970() {
   return (neuron0x1dab3c0()*6.29773);
}

double NNfunction_NN_2_5::synapse0x1db4cf0() {
   return (neuron0x1da6800()*0.0434821);
}

double NNfunction_NN_2_5::synapse0x1db4d30() {
   return (neuron0x1da6b40()*0.0681788);
}

double NNfunction_NN_2_5::synapse0x1db4d70() {
   return (neuron0x1da6e80()*-0.630075);
}

double NNfunction_NN_2_5::synapse0x1db4db0() {
   return (neuron0x1da71c0()*-0.768257);
}

double NNfunction_NN_2_5::synapse0x1db4df0() {
   return (neuron0x1da7500()*0.233894);
}

double NNfunction_NN_2_5::synapse0x1db4e30() {
   return (neuron0x1da7840()*0.308406);
}

double NNfunction_NN_2_5::synapse0x1db4e70() {
   return (neuron0x1da7b80()*0.383282);
}

double NNfunction_NN_2_5::synapse0x1db4eb0() {
   return (neuron0x1da7ec0()*-0.986354);
}

double NNfunction_NN_2_5::synapse0x1db4ef0() {
   return (neuron0x1da8200()*0.263216);
}

double NNfunction_NN_2_5::synapse0x1db4f30() {
   return (neuron0x1da8540()*-0.881635);
}

double NNfunction_NN_2_5::synapse0x1db4f70() {
   return (neuron0x1da8880()*-0.382718);
}

double NNfunction_NN_2_5::synapse0x1db4fb0() {
   return (neuron0x1da8bc0()*-0.523232);
}

double NNfunction_NN_2_5::synapse0x1db4ff0() {
   return (neuron0x1da8f00()*-0.0215669);
}

double NNfunction_NN_2_5::synapse0x1db5030() {
   return (neuron0x1da9240()*0.214522);
}

double NNfunction_NN_2_5::synapse0x1db5070() {
   return (neuron0x1da9580()*0.270766);
}

double NNfunction_NN_2_5::synapse0x1db50b0() {
   return (neuron0x1da98c0()*-0.161273);
}

double NNfunction_NN_2_5::synapse0x1db4b40() {
   return (neuron0x1da9c00()*-0.0273214);
}

double NNfunction_NN_2_5::synapse0x1db4b80() {
   return (neuron0x1daa160()*-0.100602);
}

double NNfunction_NN_2_5::synapse0x1db5200() {
   return (neuron0x1daa380()*-1.22582);
}

double NNfunction_NN_2_5::synapse0x1db5240() {
   return (neuron0x1daa6c0()*-0.222282);
}

double NNfunction_NN_2_5::synapse0x1db5280() {
   return (neuron0x1daaa00()*0.358078);
}

double NNfunction_NN_2_5::synapse0x1db52c0() {
   return (neuron0x1daad40()*0.205695);
}

double NNfunction_NN_2_5::synapse0x1db5300() {
   return (neuron0x1dab080()*0.26619);
}

double NNfunction_NN_2_5::synapse0x1db5340() {
   return (neuron0x1dab3c0()*1.26473);
}

double NNfunction_NN_2_5::synapse0x1db56c0() {
   return (neuron0x1da6800()*0.042921);
}

double NNfunction_NN_2_5::synapse0x1da6a20() {
   return (neuron0x1da6b40()*-4.82409);
}

double NNfunction_NN_2_5::synapse0x1da6a60() {
   return (neuron0x1da6e80()*-0.735022);
}

double NNfunction_NN_2_5::synapse0x1da6d60() {
   return (neuron0x1da71c0()*0.0113604);
}

double NNfunction_NN_2_5::synapse0x1da6da0() {
   return (neuron0x1da7500()*0.024301);
}

double NNfunction_NN_2_5::synapse0x1da70a0() {
   return (neuron0x1da7840()*-0.0869204);
}

double NNfunction_NN_2_5::synapse0x1da70e0() {
   return (neuron0x1da7b80()*0.0259943);
}

double NNfunction_NN_2_5::synapse0x1da73e0() {
   return (neuron0x1da7ec0()*-0.0701657);
}

double NNfunction_NN_2_5::synapse0x1da7420() {
   return (neuron0x1da8200()*0.0159559);
}

double NNfunction_NN_2_5::synapse0x1da7720() {
   return (neuron0x1da8540()*0.0178831);
}

double NNfunction_NN_2_5::synapse0x1da7760() {
   return (neuron0x1da8880()*0.0239407);
}

double NNfunction_NN_2_5::synapse0x1da7a60() {
   return (neuron0x1da8bc0()*0.198274);
}

double NNfunction_NN_2_5::synapse0x1da7aa0() {
   return (neuron0x1da8f00()*0.0566394);
}

double NNfunction_NN_2_5::synapse0x1da7da0() {
   return (neuron0x1da9240()*0.0344108);
}

double NNfunction_NN_2_5::synapse0x1da7de0() {
   return (neuron0x1da9580()*0.0220974);
}

double NNfunction_NN_2_5::synapse0x1da80e0() {
   return (neuron0x1da98c0()*-0.00789291);
}

double NNfunction_NN_2_5::synapse0x1da8120() {
   return (neuron0x1da9c00()*0.030349);
}

double NNfunction_NN_2_5::synapse0x1da8420() {
   return (neuron0x1daa160()*0.0198119);
}

double NNfunction_NN_2_5::synapse0x1da8460() {
   return (neuron0x1daa380()*0.0788817);
}

double NNfunction_NN_2_5::synapse0x1da8760() {
   return (neuron0x1daa6c0()*0.0323106);
}

double NNfunction_NN_2_5::synapse0x1da87a0() {
   return (neuron0x1daaa00()*-0.049861);
}

double NNfunction_NN_2_5::synapse0x1da8aa0() {
   return (neuron0x1daad40()*-0.0264719);
}

double NNfunction_NN_2_5::synapse0x1da8ae0() {
   return (neuron0x1dab080()*-0.0048621);
}

double NNfunction_NN_2_5::synapse0x1da8de0() {
   return (neuron0x1dab3c0()*1.2271);
}

double NNfunction_NN_2_5::synapse0x1da8e20() {
   return (neuron0x1da6800()*0.514553);
}

double NNfunction_NN_2_5::synapse0x1da9ae0() {
   return (neuron0x1da6b40()*-0.00582722);
}

double NNfunction_NN_2_5::synapse0x1da9b20() {
   return (neuron0x1da6e80()*0.18975);
}

double NNfunction_NN_2_5::synapse0x1db5510() {
   return (neuron0x1da71c0()*0.00566588);
}

double NNfunction_NN_2_5::synapse0x1db5550() {
   return (neuron0x1da7500()*-0.0274672);
}

double NNfunction_NN_2_5::synapse0x1da9e20() {
   return (neuron0x1da7840()*-0.0042511);
}

double NNfunction_NN_2_5::synapse0x1da9e60() {
   return (neuron0x1da7b80()*-0.00780417);
}

double NNfunction_NN_2_5::synapse0x1b57db0() {
   return (neuron0x1da7ec0()*0.00801579);
}

double NNfunction_NN_2_5::synapse0x1b57df0() {
   return (neuron0x1da8200()*-0.0027854);
}

double NNfunction_NN_2_5::synapse0x1daa5a0() {
   return (neuron0x1da8540()*0.0334739);
}

double NNfunction_NN_2_5::synapse0x1daa5e0() {
   return (neuron0x1da8880()*-0.00159286);
}

double NNfunction_NN_2_5::synapse0x1daa8e0() {
   return (neuron0x1da8bc0()*0.0800123);
}

double NNfunction_NN_2_5::synapse0x1daa920() {
   return (neuron0x1da8f00()*0.0129963);
}

double NNfunction_NN_2_5::synapse0x1daac20() {
   return (neuron0x1da9240()*0.0252156);
}

double NNfunction_NN_2_5::synapse0x1daac60() {
   return (neuron0x1da9580()*-0.0239533);
}

double NNfunction_NN_2_5::synapse0x1daaf60() {
   return (neuron0x1da98c0()*0.0121847);
}

double NNfunction_NN_2_5::synapse0x1daafa0() {
   return (neuron0x1da9c00()*0.0316902);
}

double NNfunction_NN_2_5::synapse0x1dab2a0() {
   return (neuron0x1daa160()*0.00352125);
}

double NNfunction_NN_2_5::synapse0x1dab2e0() {
   return (neuron0x1daa380()*-0.000513548);
}

double NNfunction_NN_2_5::synapse0x1dab5e0() {
   return (neuron0x1daa6c0()*-0.00944556);
}

double NNfunction_NN_2_5::synapse0x1dab620() {
   return (neuron0x1daaa00()*0.027117);
}

double NNfunction_NN_2_5::synapse0x1da9120() {
   return (neuron0x1daad40()*0.00243196);
}

double NNfunction_NN_2_5::synapse0x1da9160() {
   return (neuron0x1dab080()*0.0278818);
}

double NNfunction_NN_2_5::synapse0x1db7430() {
   return (neuron0x1dab3c0()*-0.414036);
}

double NNfunction_NN_2_5::synapse0x1db77b0() {
   return (neuron0x1da6800()*-0.123076);
}

double NNfunction_NN_2_5::synapse0x1db77f0() {
   return (neuron0x1da6b40()*-0.0189487);
}

double NNfunction_NN_2_5::synapse0x1db7830() {
   return (neuron0x1da6e80()*0.151568);
}

double NNfunction_NN_2_5::synapse0x1db7870() {
   return (neuron0x1da71c0()*-0.0219469);
}

double NNfunction_NN_2_5::synapse0x1db78b0() {
   return (neuron0x1da7500()*0.0694168);
}

double NNfunction_NN_2_5::synapse0x1db78f0() {
   return (neuron0x1da7840()*-0.0393461);
}

double NNfunction_NN_2_5::synapse0x1db7930() {
   return (neuron0x1da7b80()*0.0165229);
}

double NNfunction_NN_2_5::synapse0x1db7970() {
   return (neuron0x1da7ec0()*-0.041871);
}

double NNfunction_NN_2_5::synapse0x1db79b0() {
   return (neuron0x1da8200()*-0.0843256);
}

double NNfunction_NN_2_5::synapse0x1db79f0() {
   return (neuron0x1da8540()*0.0167932);
}

double NNfunction_NN_2_5::synapse0x1db7a30() {
   return (neuron0x1da8880()*0.11206);
}

double NNfunction_NN_2_5::synapse0x1db7a70() {
   return (neuron0x1da8bc0()*-0.0706087);
}

double NNfunction_NN_2_5::synapse0x1db7ab0() {
   return (neuron0x1da8f00()*0.155129);
}

double NNfunction_NN_2_5::synapse0x1db7af0() {
   return (neuron0x1da9240()*0.217548);
}

double NNfunction_NN_2_5::synapse0x1db7b30() {
   return (neuron0x1da9580()*0.0874235);
}

double NNfunction_NN_2_5::synapse0x1db7b70() {
   return (neuron0x1da98c0()*0.00800018);
}

double NNfunction_NN_2_5::synapse0x1db7600() {
   return (neuron0x1da9c00()*-0.153957);
}

double NNfunction_NN_2_5::synapse0x1db7640() {
   return (neuron0x1daa160()*-0.00664136);
}

double NNfunction_NN_2_5::synapse0x1db7cc0() {
   return (neuron0x1daa380()*-0.149548);
}

double NNfunction_NN_2_5::synapse0x1db7d00() {
   return (neuron0x1daa6c0()*0.095808);
}

double NNfunction_NN_2_5::synapse0x1db7d40() {
   return (neuron0x1daaa00()*0.0222876);
}

double NNfunction_NN_2_5::synapse0x1db7d80() {
   return (neuron0x1daad40()*0.0761571);
}

double NNfunction_NN_2_5::synapse0x1db7dc0() {
   return (neuron0x1dab080()*-0.0658712);
}

double NNfunction_NN_2_5::synapse0x1db7e00() {
   return (neuron0x1dab3c0()*-0.249534);
}

double NNfunction_NN_2_5::synapse0x1db8180() {
   return (neuron0x1da6800()*0.166989);
}

double NNfunction_NN_2_5::synapse0x1db81c0() {
   return (neuron0x1da6b40()*0.0443934);
}

double NNfunction_NN_2_5::synapse0x1db8200() {
   return (neuron0x1da6e80()*-0.092081);
}

double NNfunction_NN_2_5::synapse0x1db8240() {
   return (neuron0x1da71c0()*-0.0590503);
}

double NNfunction_NN_2_5::synapse0x1db8280() {
   return (neuron0x1da7500()*0.00354979);
}

double NNfunction_NN_2_5::synapse0x1db82c0() {
   return (neuron0x1da7840()*-0.099934);
}

double NNfunction_NN_2_5::synapse0x1db8300() {
   return (neuron0x1da7b80()*0.0395503);
}

double NNfunction_NN_2_5::synapse0x1db8340() {
   return (neuron0x1da7ec0()*0.0123739);
}

double NNfunction_NN_2_5::synapse0x1db8380() {
   return (neuron0x1da8200()*0.105815);
}

double NNfunction_NN_2_5::synapse0x1db83c0() {
   return (neuron0x1da8540()*0.051672);
}

double NNfunction_NN_2_5::synapse0x1db8400() {
   return (neuron0x1da8880()*0.0308523);
}

double NNfunction_NN_2_5::synapse0x1db8440() {
   return (neuron0x1da8bc0()*-0.706725);
}

double NNfunction_NN_2_5::synapse0x1db8480() {
   return (neuron0x1da8f00()*-0.0858841);
}

double NNfunction_NN_2_5::synapse0x1db84c0() {
   return (neuron0x1da9240()*0.0628453);
}

double NNfunction_NN_2_5::synapse0x1db8500() {
   return (neuron0x1da9580()*-0.0153434);
}

double NNfunction_NN_2_5::synapse0x1db8540() {
   return (neuron0x1da98c0()*0.0106669);
}

double NNfunction_NN_2_5::synapse0x1db7fd0() {
   return (neuron0x1da9c00()*-0.0501136);
}

double NNfunction_NN_2_5::synapse0x1db8010() {
   return (neuron0x1daa160()*-0.11574);
}

double NNfunction_NN_2_5::synapse0x1db8690() {
   return (neuron0x1daa380()*0.0162746);
}

double NNfunction_NN_2_5::synapse0x1db86d0() {
   return (neuron0x1daa6c0()*-0.0249048);
}

double NNfunction_NN_2_5::synapse0x1db8710() {
   return (neuron0x1daaa00()*-0.0022928);
}

double NNfunction_NN_2_5::synapse0x1db8750() {
   return (neuron0x1daad40()*-0.0376694);
}

double NNfunction_NN_2_5::synapse0x1db8790() {
   return (neuron0x1dab080()*-0.0250458);
}

double NNfunction_NN_2_5::synapse0x1db87d0() {
   return (neuron0x1dab3c0()*0.388552);
}

double NNfunction_NN_2_5::synapse0x1db8b50() {
   return (neuron0x1da6800()*-0.0210447);
}

double NNfunction_NN_2_5::synapse0x1db8b90() {
   return (neuron0x1da6b40()*-3.12767);
}

double NNfunction_NN_2_5::synapse0x1db8bd0() {
   return (neuron0x1da6e80()*0.702589);
}

double NNfunction_NN_2_5::synapse0x1db8c10() {
   return (neuron0x1da71c0()*0.0185448);
}

double NNfunction_NN_2_5::synapse0x1db8c50() {
   return (neuron0x1da7500()*0.095909);
}

double NNfunction_NN_2_5::synapse0x1db8c90() {
   return (neuron0x1da7840()*0.107252);
}

double NNfunction_NN_2_5::synapse0x1db8cd0() {
   return (neuron0x1da7b80()*0.0456306);
}

double NNfunction_NN_2_5::synapse0x1db8d10() {
   return (neuron0x1da7ec0()*0.0386496);
}

double NNfunction_NN_2_5::synapse0x1db8d50() {
   return (neuron0x1da8200()*0.0683484);
}

double NNfunction_NN_2_5::synapse0x1db8d90() {
   return (neuron0x1da8540()*-0.0782894);
}

double NNfunction_NN_2_5::synapse0x1db8dd0() {
   return (neuron0x1da8880()*0.0224179);
}

double NNfunction_NN_2_5::synapse0x1db8e10() {
   return (neuron0x1da8bc0()*-0.500543);
}

double NNfunction_NN_2_5::synapse0x1db8e50() {
   return (neuron0x1da8f00()*-0.0892468);
}

double NNfunction_NN_2_5::synapse0x1db8e90() {
   return (neuron0x1da9240()*0.0403775);
}

double NNfunction_NN_2_5::synapse0x1db8ed0() {
   return (neuron0x1da9580()*0.011395);
}

double NNfunction_NN_2_5::synapse0x1db8f10() {
   return (neuron0x1da98c0()*0.00632423);
}

double NNfunction_NN_2_5::synapse0x1db89a0() {
   return (neuron0x1da9c00()*0.0434768);
}

double NNfunction_NN_2_5::synapse0x1db89e0() {
   return (neuron0x1daa160()*0.00489675);
}

double NNfunction_NN_2_5::synapse0x1db9060() {
   return (neuron0x1daa380()*-0.0504896);
}

double NNfunction_NN_2_5::synapse0x1db90a0() {
   return (neuron0x1daa6c0()*-0.097787);
}

double NNfunction_NN_2_5::synapse0x1db90e0() {
   return (neuron0x1daaa00()*0.0434574);
}

double NNfunction_NN_2_5::synapse0x1db9120() {
   return (neuron0x1daad40()*0.0720876);
}

double NNfunction_NN_2_5::synapse0x1db9160() {
   return (neuron0x1dab080()*-0.033932);
}

double NNfunction_NN_2_5::synapse0x1db91a0() {
   return (neuron0x1dab3c0()*-0.164568);
}

double NNfunction_NN_2_5::synapse0x1db9520() {
   return (neuron0x1da6800()*-0.0899804);
}

double NNfunction_NN_2_5::synapse0x1db9560() {
   return (neuron0x1da6b40()*-0.129324);
}

double NNfunction_NN_2_5::synapse0x1db95a0() {
   return (neuron0x1da6e80()*-2.15039);
}

double NNfunction_NN_2_5::synapse0x1db95e0() {
   return (neuron0x1da71c0()*-0.248366);
}

double NNfunction_NN_2_5::synapse0x1db9620() {
   return (neuron0x1da7500()*-0.0311755);
}

double NNfunction_NN_2_5::synapse0x1db9660() {
   return (neuron0x1da7840()*-0.0739492);
}

double NNfunction_NN_2_5::synapse0x1db96a0() {
   return (neuron0x1da7b80()*0.0185628);
}

double NNfunction_NN_2_5::synapse0x1db96e0() {
   return (neuron0x1da7ec0()*0.167921);
}

double NNfunction_NN_2_5::synapse0x1db9720() {
   return (neuron0x1da8200()*-0.22053);
}

double NNfunction_NN_2_5::synapse0x1db9760() {
   return (neuron0x1da8540()*0.0413038);
}

double NNfunction_NN_2_5::synapse0x1db97a0() {
   return (neuron0x1da8880()*-0.0803618);
}

double NNfunction_NN_2_5::synapse0x1db97e0() {
   return (neuron0x1da8bc0()*-0.26397);
}

double NNfunction_NN_2_5::synapse0x1db9820() {
   return (neuron0x1da8f00()*0.147133);
}

double NNfunction_NN_2_5::synapse0x1db9860() {
   return (neuron0x1da9240()*0.2424);
}

double NNfunction_NN_2_5::synapse0x1db98a0() {
   return (neuron0x1da9580()*0.148792);
}

double NNfunction_NN_2_5::synapse0x1db98e0() {
   return (neuron0x1da98c0()*0.247008);
}

double NNfunction_NN_2_5::synapse0x1db9370() {
   return (neuron0x1da9c00()*0.222576);
}

double NNfunction_NN_2_5::synapse0x1db93b0() {
   return (neuron0x1daa160()*-0.0949177);
}

double NNfunction_NN_2_5::synapse0x1db9a30() {
   return (neuron0x1daa380()*-0.0644538);
}

double NNfunction_NN_2_5::synapse0x1db9a70() {
   return (neuron0x1daa6c0()*-0.00117797);
}

double NNfunction_NN_2_5::synapse0x1db9ab0() {
   return (neuron0x1daaa00()*-0.333511);
}

double NNfunction_NN_2_5::synapse0x1db9af0() {
   return (neuron0x1daad40()*-0.0499505);
}

double NNfunction_NN_2_5::synapse0x1db9b30() {
   return (neuron0x1dab080()*0.0615102);
}

double NNfunction_NN_2_5::synapse0x1db9b70() {
   return (neuron0x1dab3c0()*0.0398382);
}

double NNfunction_NN_2_5::synapse0x1db9ef0() {
   return (neuron0x1da6800()*-0.0478313);
}

double NNfunction_NN_2_5::synapse0x1db9f30() {
   return (neuron0x1da6b40()*17.1592);
}

double NNfunction_NN_2_5::synapse0x1db9f70() {
   return (neuron0x1da6e80()*3.17485);
}

double NNfunction_NN_2_5::synapse0x1db9fb0() {
   return (neuron0x1da71c0()*-0.015383);
}

double NNfunction_NN_2_5::synapse0x1db9ff0() {
   return (neuron0x1da7500()*-0.0218761);
}

double NNfunction_NN_2_5::synapse0x1dba030() {
   return (neuron0x1da7840()*-0.00429505);
}

double NNfunction_NN_2_5::synapse0x1dba070() {
   return (neuron0x1da7b80()*-0.0149922);
}

double NNfunction_NN_2_5::synapse0x1dba0b0() {
   return (neuron0x1da7ec0()*-0.0277942);
}

double NNfunction_NN_2_5::synapse0x1dba0f0() {
   return (neuron0x1da8200()*-0.0167474);
}

double NNfunction_NN_2_5::synapse0x1db22b0() {
   return (neuron0x1da8540()*0.0104026);
}

double NNfunction_NN_2_5::synapse0x1db22f0() {
   return (neuron0x1da8880()*-0.0176375);
}

double NNfunction_NN_2_5::synapse0x1db2330() {
   return (neuron0x1da8bc0()*-0.178246);
}

double NNfunction_NN_2_5::synapse0x1db2370() {
   return (neuron0x1da8f00()*0.0382986);
}

double NNfunction_NN_2_5::synapse0x1db23b0() {
   return (neuron0x1da9240()*-0.0412646);
}

double NNfunction_NN_2_5::synapse0x1db23f0() {
   return (neuron0x1da9580()*0.0184353);
}

double NNfunction_NN_2_5::synapse0x1db2430() {
   return (neuron0x1da98c0()*0.0273739);
}

double NNfunction_NN_2_5::synapse0x1db9d40() {
   return (neuron0x1da9c00()*-0.0349325);
}

double NNfunction_NN_2_5::synapse0x1db9d80() {
   return (neuron0x1daa160()*0.00835707);
}

double NNfunction_NN_2_5::synapse0x1db2580() {
   return (neuron0x1daa380()*-0.0370481);
}

double NNfunction_NN_2_5::synapse0x1db25c0() {
   return (neuron0x1daa6c0()*0.00473635);
}

double NNfunction_NN_2_5::synapse0x1db2600() {
   return (neuron0x1daaa00()*-0.0412138);
}

double NNfunction_NN_2_5::synapse0x1db2640() {
   return (neuron0x1daad40()*-0.0174795);
}

double NNfunction_NN_2_5::synapse0x1db2680() {
   return (neuron0x1dab080()*0.0182356);
}

double NNfunction_NN_2_5::synapse0x1db26c0() {
   return (neuron0x1dab3c0()*-1.1801);
}

double NNfunction_NN_2_5::synapse0x1db2a40() {
   return (neuron0x1da6800()*-0.00513693);
}

double NNfunction_NN_2_5::synapse0x1db2a80() {
   return (neuron0x1da6b40()*6.33663);
}

double NNfunction_NN_2_5::synapse0x1db2ac0() {
   return (neuron0x1da6e80()*1.76921);
}

double NNfunction_NN_2_5::synapse0x1db2b00() {
   return (neuron0x1da71c0()*0.0289969);
}

double NNfunction_NN_2_5::synapse0x1db2b40() {
   return (neuron0x1da7500()*-0.0320094);
}

double NNfunction_NN_2_5::synapse0x1db2b80() {
   return (neuron0x1da7840()*0.0357298);
}

double NNfunction_NN_2_5::synapse0x1db2bc0() {
   return (neuron0x1da7b80()*-0.0179182);
}

double NNfunction_NN_2_5::synapse0x1db2c00() {
   return (neuron0x1da7ec0()*0.0048332);
}

double NNfunction_NN_2_5::synapse0x1db2c40() {
   return (neuron0x1da8200()*-0.0329681);
}

double NNfunction_NN_2_5::synapse0x1db2c80() {
   return (neuron0x1da8540()*-0.00982935);
}

double NNfunction_NN_2_5::synapse0x1db2cc0() {
   return (neuron0x1da8880()*-0.0414448);
}

double NNfunction_NN_2_5::synapse0x1db2d00() {
   return (neuron0x1da8bc0()*-0.235031);
}

double NNfunction_NN_2_5::synapse0x1db2d40() {
   return (neuron0x1da8f00()*-0.0430515);
}

double NNfunction_NN_2_5::synapse0x1db2d80() {
   return (neuron0x1da9240()*-0.0556235);
}

double NNfunction_NN_2_5::synapse0x1db2dc0() {
   return (neuron0x1da9580()*-0.0122706);
}

double NNfunction_NN_2_5::synapse0x1db2e00() {
   return (neuron0x1da98c0()*0.000358746);
}

double NNfunction_NN_2_5::synapse0x1db2890() {
   return (neuron0x1da9c00()*-0.0733917);
}

double NNfunction_NN_2_5::synapse0x1db28d0() {
   return (neuron0x1daa160()*-0.00225117);
}

double NNfunction_NN_2_5::synapse0x1db2f50() {
   return (neuron0x1daa380()*-0.0582892);
}

double NNfunction_NN_2_5::synapse0x1db2f90() {
   return (neuron0x1daa6c0()*-0.00808928);
}

double NNfunction_NN_2_5::synapse0x1db2fd0() {
   return (neuron0x1daaa00()*0.0414449);
}

double NNfunction_NN_2_5::synapse0x1db3010() {
   return (neuron0x1daad40()*0.0302386);
}

double NNfunction_NN_2_5::synapse0x1db3050() {
   return (neuron0x1dab080()*0.0118073);
}

double NNfunction_NN_2_5::synapse0x1db3090() {
   return (neuron0x1dab3c0()*-0.845749);
}

double NNfunction_NN_2_5::synapse0x1db3260() {
   return (neuron0x1da6800()*0.0690996);
}

double NNfunction_NN_2_5::synapse0x1dbc2f0() {
   return (neuron0x1da6b40()*0.0581551);
}

double NNfunction_NN_2_5::synapse0x1dbc330() {
   return (neuron0x1da6e80()*2.55115);
}

double NNfunction_NN_2_5::synapse0x1dbc370() {
   return (neuron0x1da71c0()*0.0415204);
}

double NNfunction_NN_2_5::synapse0x1dbc3b0() {
   return (neuron0x1da7500()*0.0018856);
}

double NNfunction_NN_2_5::synapse0x1dbc3f0() {
   return (neuron0x1da7840()*-0.0437586);
}

double NNfunction_NN_2_5::synapse0x1dbc430() {
   return (neuron0x1da7b80()*0.00745661);
}

double NNfunction_NN_2_5::synapse0x1dbc470() {
   return (neuron0x1da7ec0()*-0.0205304);
}

double NNfunction_NN_2_5::synapse0x1dbc4b0() {
   return (neuron0x1da8200()*-0.00294348);
}

double NNfunction_NN_2_5::synapse0x1dbc4f0() {
   return (neuron0x1da8540()*-0.0407685);
}

double NNfunction_NN_2_5::synapse0x1dbc530() {
   return (neuron0x1da8880()*0.00162564);
}

double NNfunction_NN_2_5::synapse0x1dbc570() {
   return (neuron0x1da8bc0()*-0.188362);
}

double NNfunction_NN_2_5::synapse0x1dbc5b0() {
   return (neuron0x1da8f00()*-0.0319655);
}

double NNfunction_NN_2_5::synapse0x1dbc5f0() {
   return (neuron0x1da9240()*-0.0158704);
}

double NNfunction_NN_2_5::synapse0x1dbc630() {
   return (neuron0x1da9580()*0.00889933);
}

double NNfunction_NN_2_5::synapse0x1dbc670() {
   return (neuron0x1da98c0()*0.00765083);
}

double NNfunction_NN_2_5::synapse0x1dbc140() {
   return (neuron0x1da9c00()*-0.00145646);
}

double NNfunction_NN_2_5::synapse0x1dbc180() {
   return (neuron0x1daa160()*0.0312579);
}

double NNfunction_NN_2_5::synapse0x1dbc7c0() {
   return (neuron0x1daa380()*0.0148859);
}

double NNfunction_NN_2_5::synapse0x1dbc800() {
   return (neuron0x1daa6c0()*-0.0187368);
}

double NNfunction_NN_2_5::synapse0x1dbc840() {
   return (neuron0x1daaa00()*0.00172646);
}

double NNfunction_NN_2_5::synapse0x1dbc880() {
   return (neuron0x1daad40()*0.0103583);
}

double NNfunction_NN_2_5::synapse0x1dbc8c0() {
   return (neuron0x1dab080()*-0.0245231);
}

double NNfunction_NN_2_5::synapse0x1dbc900() {
   return (neuron0x1dab3c0()*3.02486);
}

double NNfunction_NN_2_5::synapse0x1dbcc80() {
   return (neuron0x1da6800()*-0.0439059);
}

double NNfunction_NN_2_5::synapse0x1dbccc0() {
   return (neuron0x1da6b40()*0.00851912);
}

double NNfunction_NN_2_5::synapse0x1dbcd00() {
   return (neuron0x1da6e80()*0.0213173);
}

double NNfunction_NN_2_5::synapse0x1dbcd40() {
   return (neuron0x1da71c0()*0.00519684);
}

double NNfunction_NN_2_5::synapse0x1dbcd80() {
   return (neuron0x1da7500()*0.161198);
}

double NNfunction_NN_2_5::synapse0x1dbcdc0() {
   return (neuron0x1da7840()*-0.0360795);
}

double NNfunction_NN_2_5::synapse0x1dbce00() {
   return (neuron0x1da7b80()*-0.0130907);
}

double NNfunction_NN_2_5::synapse0x1dbce40() {
   return (neuron0x1da7ec0()*0.0149961);
}

double NNfunction_NN_2_5::synapse0x1dbce80() {
   return (neuron0x1da8200()*-0.180084);
}

double NNfunction_NN_2_5::synapse0x1dbcec0() {
   return (neuron0x1da8540()*0.0365802);
}

double NNfunction_NN_2_5::synapse0x1dbcf00() {
   return (neuron0x1da8880()*0.115411);
}

double NNfunction_NN_2_5::synapse0x1dbcf40() {
   return (neuron0x1da8bc0()*-0.0935634);
}

double NNfunction_NN_2_5::synapse0x1dbcf80() {
   return (neuron0x1da8f00()*0.142114);
}

double NNfunction_NN_2_5::synapse0x1dbcfc0() {
   return (neuron0x1da9240()*0.195149);
}

double NNfunction_NN_2_5::synapse0x1dbd000() {
   return (neuron0x1da9580()*0.171519);
}

double NNfunction_NN_2_5::synapse0x1dbd040() {
   return (neuron0x1da98c0()*-0.000409434);
}

double NNfunction_NN_2_5::synapse0x1dbcad0() {
   return (neuron0x1da9c00()*-0.154871);
}

double NNfunction_NN_2_5::synapse0x1dbcb10() {
   return (neuron0x1daa160()*0.00533929);
}

double NNfunction_NN_2_5::synapse0x1dbd190() {
   return (neuron0x1daa380()*-0.140223);
}

double NNfunction_NN_2_5::synapse0x1dbd1d0() {
   return (neuron0x1daa6c0()*0.0381088);
}

double NNfunction_NN_2_5::synapse0x1dbd210() {
   return (neuron0x1daaa00()*0.0893919);
}

double NNfunction_NN_2_5::synapse0x1dbd250() {
   return (neuron0x1daad40()*0.115115);
}

double NNfunction_NN_2_5::synapse0x1dbd290() {
   return (neuron0x1dab080()*0.000888225);
}

double NNfunction_NN_2_5::synapse0x1dbd2d0() {
   return (neuron0x1dab3c0()*0.281608);
}

double NNfunction_NN_2_5::synapse0x1dbd650() {
   return (neuron0x1da6800()*0.00329068);
}

double NNfunction_NN_2_5::synapse0x1dbd690() {
   return (neuron0x1da6b40()*0.754649);
}

double NNfunction_NN_2_5::synapse0x1dbd6d0() {
   return (neuron0x1da6e80()*0.336853);
}

double NNfunction_NN_2_5::synapse0x1dbd710() {
   return (neuron0x1da71c0()*0.0399634);
}

double NNfunction_NN_2_5::synapse0x1dbd750() {
   return (neuron0x1da7500()*0.230271);
}

double NNfunction_NN_2_5::synapse0x1dbd790() {
   return (neuron0x1da7840()*0.569999);
}

double NNfunction_NN_2_5::synapse0x1dbd7d0() {
   return (neuron0x1da7b80()*-0.0865114);
}

double NNfunction_NN_2_5::synapse0x1dbd810() {
   return (neuron0x1da7ec0()*-0.678476);
}

double NNfunction_NN_2_5::synapse0x1dbd850() {
   return (neuron0x1da8200()*0.523408);
}

double NNfunction_NN_2_5::synapse0x1dbd890() {
   return (neuron0x1da8540()*0.503089);
}

double NNfunction_NN_2_5::synapse0x1dbd8d0() {
   return (neuron0x1da8880()*0.000210049);
}

double NNfunction_NN_2_5::synapse0x1dbd910() {
   return (neuron0x1da8bc0()*0.437076);
}

double NNfunction_NN_2_5::synapse0x1dbd950() {
   return (neuron0x1da8f00()*-0.49581);
}

double NNfunction_NN_2_5::synapse0x1dbd990() {
   return (neuron0x1da9240()*0.161502);
}

double NNfunction_NN_2_5::synapse0x1dbd9d0() {
   return (neuron0x1da9580()*0.252498);
}

double NNfunction_NN_2_5::synapse0x1dbda10() {
   return (neuron0x1da98c0()*-0.124683);
}

double NNfunction_NN_2_5::synapse0x1dbd4a0() {
   return (neuron0x1da9c00()*-0.272433);
}

double NNfunction_NN_2_5::synapse0x1dbd4e0() {
   return (neuron0x1daa160()*-0.227544);
}

double NNfunction_NN_2_5::synapse0x1dbdb60() {
   return (neuron0x1daa380()*-0.0557785);
}

double NNfunction_NN_2_5::synapse0x1dbdba0() {
   return (neuron0x1daa6c0()*0.208306);
}

double NNfunction_NN_2_5::synapse0x1dbdbe0() {
   return (neuron0x1daaa00()*0.937609);
}

double NNfunction_NN_2_5::synapse0x1dbdc20() {
   return (neuron0x1daad40()*0.590279);
}

double NNfunction_NN_2_5::synapse0x1dbdc60() {
   return (neuron0x1dab080()*-0.386664);
}

double NNfunction_NN_2_5::synapse0x1dbdca0() {
   return (neuron0x1dab3c0()*-0.562226);
}

double NNfunction_NN_2_5::synapse0x1dbe020() {
   return (neuron0x1da6800()*0.200398);
}

double NNfunction_NN_2_5::synapse0x1dbe060() {
   return (neuron0x1da6b40()*0.0897378);
}

double NNfunction_NN_2_5::synapse0x1dbe0a0() {
   return (neuron0x1da6e80()*-0.294384);
}

double NNfunction_NN_2_5::synapse0x1dbe0e0() {
   return (neuron0x1da71c0()*-0.050924);
}

double NNfunction_NN_2_5::synapse0x1dbe120() {
   return (neuron0x1da7500()*-0.015449);
}

double NNfunction_NN_2_5::synapse0x1dbe160() {
   return (neuron0x1da7840()*-0.13873);
}

double NNfunction_NN_2_5::synapse0x1dbe1a0() {
   return (neuron0x1da7b80()*0.0495261);
}

double NNfunction_NN_2_5::synapse0x1dbe1e0() {
   return (neuron0x1da7ec0()*-0.0174974);
}

double NNfunction_NN_2_5::synapse0x1dbe220() {
   return (neuron0x1da8200()*0.131705);
}

double NNfunction_NN_2_5::synapse0x1dbe260() {
   return (neuron0x1da8540()*0.0781924);
}

double NNfunction_NN_2_5::synapse0x1dbe2a0() {
   return (neuron0x1da8880()*0.0484781);
}

double NNfunction_NN_2_5::synapse0x1dbe2e0() {
   return (neuron0x1da8bc0()*-1.08832);
}

double NNfunction_NN_2_5::synapse0x1dbe320() {
   return (neuron0x1da8f00()*-0.0815538);
}

double NNfunction_NN_2_5::synapse0x1dbe360() {
   return (neuron0x1da9240()*0.100596);
}

double NNfunction_NN_2_5::synapse0x1dbe3a0() {
   return (neuron0x1da9580()*-0.052713);
}

double NNfunction_NN_2_5::synapse0x1dbe3e0() {
   return (neuron0x1da98c0()*-0.00335435);
}

double NNfunction_NN_2_5::synapse0x1dbde70() {
   return (neuron0x1da9c00()*-0.0775915);
}

double NNfunction_NN_2_5::synapse0x1dbdeb0() {
   return (neuron0x1daa160()*-0.156003);
}

double NNfunction_NN_2_5::synapse0x1dbe530() {
   return (neuron0x1daa380()*0.0497079);
}

double NNfunction_NN_2_5::synapse0x1dbe570() {
   return (neuron0x1daa6c0()*-0.0277948);
}

double NNfunction_NN_2_5::synapse0x1dbe5b0() {
   return (neuron0x1daaa00()*-0.0224791);
}

double NNfunction_NN_2_5::synapse0x1dbe5f0() {
   return (neuron0x1daad40()*0.00943609);
}

double NNfunction_NN_2_5::synapse0x1dbe630() {
   return (neuron0x1dab080()*-0.00942136);
}

double NNfunction_NN_2_5::synapse0x1dbe670() {
   return (neuron0x1dab3c0()*-0.196379);
}

double NNfunction_NN_2_5::synapse0x1dbe9f0() {
   return (neuron0x1da6800()*0.153331);
}

double NNfunction_NN_2_5::synapse0x1dbea30() {
   return (neuron0x1da6b40()*-0.0381947);
}

double NNfunction_NN_2_5::synapse0x1dbea70() {
   return (neuron0x1da6e80()*-0.113903);
}

double NNfunction_NN_2_5::synapse0x1dbeab0() {
   return (neuron0x1da71c0()*0.0880749);
}

double NNfunction_NN_2_5::synapse0x1dbeaf0() {
   return (neuron0x1da7500()*-0.0643909);
}

double NNfunction_NN_2_5::synapse0x1dbeb30() {
   return (neuron0x1da7840()*0.0641744);
}

double NNfunction_NN_2_5::synapse0x1dbeb70() {
   return (neuron0x1da7b80()*-0.0971848);
}

double NNfunction_NN_2_5::synapse0x1dbebb0() {
   return (neuron0x1da7ec0()*-0.193817);
}

double NNfunction_NN_2_5::synapse0x1dbebf0() {
   return (neuron0x1da8200()*-0.0586252);
}

double NNfunction_NN_2_5::synapse0x1dbec30() {
   return (neuron0x1da8540()*0.0886188);
}

double NNfunction_NN_2_5::synapse0x1dbec70() {
   return (neuron0x1da8880()*-0.0973462);
}

double NNfunction_NN_2_5::synapse0x1dbecb0() {
   return (neuron0x1da8bc0()*-0.360035);
}

double NNfunction_NN_2_5::synapse0x1dbecf0() {
   return (neuron0x1da8f00()*0.0664712);
}

double NNfunction_NN_2_5::synapse0x1dbed30() {
   return (neuron0x1da9240()*-0.226633);
}

double NNfunction_NN_2_5::synapse0x1dbed70() {
   return (neuron0x1da9580()*-0.144996);
}

double NNfunction_NN_2_5::synapse0x1dbedb0() {
   return (neuron0x1da98c0()*0.0442208);
}

double NNfunction_NN_2_5::synapse0x1dbe840() {
   return (neuron0x1da9c00()*0.0326091);
}

double NNfunction_NN_2_5::synapse0x1dbe880() {
   return (neuron0x1daa160()*-0.0257613);
}

double NNfunction_NN_2_5::synapse0x1dbef00() {
   return (neuron0x1daa380()*0.166829);
}

double NNfunction_NN_2_5::synapse0x1dbef40() {
   return (neuron0x1daa6c0()*-0.0220362);
}

double NNfunction_NN_2_5::synapse0x1dbef80() {
   return (neuron0x1daaa00()*-0.059631);
}

double NNfunction_NN_2_5::synapse0x1dbefc0() {
   return (neuron0x1daad40()*0.0982404);
}

double NNfunction_NN_2_5::synapse0x1dbf000() {
   return (neuron0x1dab080()*0.0709447);
}

double NNfunction_NN_2_5::synapse0x1dbf040() {
   return (neuron0x1dab3c0()*-0.124492);
}

double NNfunction_NN_2_5::synapse0x1dbf3c0() {
   return (neuron0x1da6800()*0.24569);
}

double NNfunction_NN_2_5::synapse0x1dbf400() {
   return (neuron0x1da6b40()*0.00492219);
}

double NNfunction_NN_2_5::synapse0x1dbf440() {
   return (neuron0x1da6e80()*-0.230359);
}

double NNfunction_NN_2_5::synapse0x1dbf480() {
   return (neuron0x1da71c0()*0.0972003);
}

double NNfunction_NN_2_5::synapse0x1dbf4c0() {
   return (neuron0x1da7500()*0.0024711);
}

double NNfunction_NN_2_5::synapse0x1dbf500() {
   return (neuron0x1da7840()*-0.0940315);
}

double NNfunction_NN_2_5::synapse0x1dbf540() {
   return (neuron0x1da7b80()*0.237709);
}

double NNfunction_NN_2_5::synapse0x1dbf580() {
   return (neuron0x1da7ec0()*-0.44296);
}

double NNfunction_NN_2_5::synapse0x1dbf5c0() {
   return (neuron0x1da8200()*0.0600231);
}

double NNfunction_NN_2_5::synapse0x1dbf600() {
   return (neuron0x1da8540()*-0.206213);
}

double NNfunction_NN_2_5::synapse0x1dbf640() {
   return (neuron0x1da8880()*-0.0275597);
}

double NNfunction_NN_2_5::synapse0x1dbf680() {
   return (neuron0x1da8bc0()*-0.411441);
}

double NNfunction_NN_2_5::synapse0x1dbf6c0() {
   return (neuron0x1da8f00()*-0.0738223);
}

double NNfunction_NN_2_5::synapse0x1dbf700() {
   return (neuron0x1da9240()*-0.00332838);
}

double NNfunction_NN_2_5::synapse0x1dbf740() {
   return (neuron0x1da9580()*0.0612096);
}

double NNfunction_NN_2_5::synapse0x1dbf780() {
   return (neuron0x1da98c0()*-0.278456);
}

double NNfunction_NN_2_5::synapse0x1dbf210() {
   return (neuron0x1da9c00()*0.125609);
}

double NNfunction_NN_2_5::synapse0x1dbf250() {
   return (neuron0x1daa160()*0.0852502);
}

double NNfunction_NN_2_5::synapse0x1dbf8d0() {
   return (neuron0x1daa380()*0.0310307);
}

double NNfunction_NN_2_5::synapse0x1dbf910() {
   return (neuron0x1daa6c0()*0.0432009);
}

double NNfunction_NN_2_5::synapse0x1dbf950() {
   return (neuron0x1daaa00()*0.0440811);
}

double NNfunction_NN_2_5::synapse0x1dbf990() {
   return (neuron0x1daad40()*0.339882);
}

double NNfunction_NN_2_5::synapse0x1dbf9d0() {
   return (neuron0x1dab080()*-0.0175507);
}

double NNfunction_NN_2_5::synapse0x1dbfa10() {
   return (neuron0x1dab3c0()*-0.0421249);
}

double NNfunction_NN_2_5::synapse0x1dbfd90() {
   return (neuron0x1da6800()*0.0815515);
}

double NNfunction_NN_2_5::synapse0x1dbfdd0() {
   return (neuron0x1da6b40()*-0.149386);
}

double NNfunction_NN_2_5::synapse0x1dbfe10() {
   return (neuron0x1da6e80()*-0.0835462);
}

double NNfunction_NN_2_5::synapse0x1dbfe50() {
   return (neuron0x1da71c0()*0.108013);
}

double NNfunction_NN_2_5::synapse0x1dbfe90() {
   return (neuron0x1da7500()*-0.0721892);
}

double NNfunction_NN_2_5::synapse0x1dbfed0() {
   return (neuron0x1da7840()*0.137778);
}

double NNfunction_NN_2_5::synapse0x1dbff10() {
   return (neuron0x1da7b80()*-0.0731627);
}

double NNfunction_NN_2_5::synapse0x1dbff50() {
   return (neuron0x1da7ec0()*0.0845099);
}

double NNfunction_NN_2_5::synapse0x1dbff90() {
   return (neuron0x1da8200()*-0.0344797);
}

double NNfunction_NN_2_5::synapse0x1dbffd0() {
   return (neuron0x1da8540()*-0.187175);
}

double NNfunction_NN_2_5::synapse0x1dc0010() {
   return (neuron0x1da8880()*-0.165319);
}

double NNfunction_NN_2_5::synapse0x1dc0050() {
   return (neuron0x1da8bc0()*-0.221364);
}

double NNfunction_NN_2_5::synapse0x1dc0090() {
   return (neuron0x1da8f00()*0.126078);
}

double NNfunction_NN_2_5::synapse0x1dc00d0() {
   return (neuron0x1da9240()*0.0166761);
}

double NNfunction_NN_2_5::synapse0x1dc0110() {
   return (neuron0x1da9580()*0.0043429);
}

double NNfunction_NN_2_5::synapse0x1dc0150() {
   return (neuron0x1da98c0()*-0.0653056);
}

double NNfunction_NN_2_5::synapse0x1dbfbe0() {
   return (neuron0x1da9c00()*0.0252846);
}

double NNfunction_NN_2_5::synapse0x1dbfc20() {
   return (neuron0x1daa160()*0.0242152);
}

double NNfunction_NN_2_5::synapse0x1dc02a0() {
   return (neuron0x1daa380()*-0.119155);
}

double NNfunction_NN_2_5::synapse0x1dc02e0() {
   return (neuron0x1daa6c0()*-0.13012);
}

double NNfunction_NN_2_5::synapse0x1dc0320() {
   return (neuron0x1daaa00()*0.0704173);
}

double NNfunction_NN_2_5::synapse0x1dc0360() {
   return (neuron0x1daad40()*-0.0874166);
}

double NNfunction_NN_2_5::synapse0x1dc03a0() {
   return (neuron0x1dab080()*-0.0230703);
}

double NNfunction_NN_2_5::synapse0x1dc03e0() {
   return (neuron0x1dab3c0()*-0.698956);
}

double NNfunction_NN_2_5::synapse0x1dc0760() {
   return (neuron0x1da6800()*0.0080516);
}

double NNfunction_NN_2_5::synapse0x1dc07a0() {
   return (neuron0x1da6b40()*8.95861);
}

double NNfunction_NN_2_5::synapse0x1dc07e0() {
   return (neuron0x1da6e80()*2.58829);
}

double NNfunction_NN_2_5::synapse0x1dc0820() {
   return (neuron0x1da71c0()*0.0348194);
}

double NNfunction_NN_2_5::synapse0x1dc0860() {
   return (neuron0x1da7500()*-0.0426282);
}

double NNfunction_NN_2_5::synapse0x1dc08a0() {
   return (neuron0x1da7840()*0.00392591);
}

double NNfunction_NN_2_5::synapse0x1dc08e0() {
   return (neuron0x1da7b80()*-0.0152587);
}

double NNfunction_NN_2_5::synapse0x1dc0920() {
   return (neuron0x1da7ec0()*-0.0242595);
}

double NNfunction_NN_2_5::synapse0x1dc0960() {
   return (neuron0x1da8200()*-0.0470158);
}

double NNfunction_NN_2_5::synapse0x1dc09a0() {
   return (neuron0x1da8540()*0.00604957);
}

double NNfunction_NN_2_5::synapse0x1dc09e0() {
   return (neuron0x1da8880()*-0.0497165);
}

double NNfunction_NN_2_5::synapse0x1dc0a20() {
   return (neuron0x1da8bc0()*-0.144297);
}

double NNfunction_NN_2_5::synapse0x1dc0a60() {
   return (neuron0x1da8f00()*-0.0127006);
}

double NNfunction_NN_2_5::synapse0x1dc0aa0() {
   return (neuron0x1da9240()*-0.0707115);
}

double NNfunction_NN_2_5::synapse0x1dc0ae0() {
   return (neuron0x1da9580()*-0.0111994);
}

double NNfunction_NN_2_5::synapse0x1dc0b20() {
   return (neuron0x1da98c0()*-0.0120775);
}

double NNfunction_NN_2_5::synapse0x1dc05b0() {
   return (neuron0x1da9c00()*-0.0713795);
}

double NNfunction_NN_2_5::synapse0x1dc05f0() {
   return (neuron0x1daa160()*0.0322209);
}

double NNfunction_NN_2_5::synapse0x1dc0c70() {
   return (neuron0x1daa380()*-0.042774);
}

double NNfunction_NN_2_5::synapse0x1dc0cb0() {
   return (neuron0x1daa6c0()*0.0128026);
}

double NNfunction_NN_2_5::synapse0x1dc0cf0() {
   return (neuron0x1daaa00()*0.0183981);
}

double NNfunction_NN_2_5::synapse0x1dc0d30() {
   return (neuron0x1daad40()*0.0266061);
}

double NNfunction_NN_2_5::synapse0x1dc0d70() {
   return (neuron0x1dab080()*-0.00374183);
}

double NNfunction_NN_2_5::synapse0x1dc0db0() {
   return (neuron0x1dab3c0()*-0.555444);
}

double NNfunction_NN_2_5::synapse0x1dc1130() {
   return (neuron0x1da6800()*0.0340955);
}

double NNfunction_NN_2_5::synapse0x1db5700() {
   return (neuron0x1da6b40()*-5.89084);
}

double NNfunction_NN_2_5::synapse0x1db5740() {
   return (neuron0x1da6e80()*4.11165);
}

double NNfunction_NN_2_5::synapse0x1db5780() {
   return (neuron0x1da71c0()*0.0116881);
}

double NNfunction_NN_2_5::synapse0x1db59d0() {
   return (neuron0x1da7500()*0.0219694);
}

double NNfunction_NN_2_5::synapse0x1db5a10() {
   return (neuron0x1da7840()*-0.0208453);
}

double NNfunction_NN_2_5::synapse0x1db5a50() {
   return (neuron0x1da7b80()*0.00545715);
}

double NNfunction_NN_2_5::synapse0x1db5ca0() {
   return (neuron0x1da7ec0()*-0.00919092);
}

double NNfunction_NN_2_5::synapse0x1db5ce0() {
   return (neuron0x1da8200()*-0.0180612);
}

double NNfunction_NN_2_5::synapse0x1db5f30() {
   return (neuron0x1da8540()*-0.0113042);
}

double NNfunction_NN_2_5::synapse0x1db5f70() {
   return (neuron0x1da8880()*0.0395515);
}

double NNfunction_NN_2_5::synapse0x1db5fb0() {
   return (neuron0x1da8bc0()*-0.104111);
}

double NNfunction_NN_2_5::synapse0x1db6200() {
   return (neuron0x1da8f00()*-0.0239668);
}

double NNfunction_NN_2_5::synapse0x1db6240() {
   return (neuron0x1da9240()*0.00981732);
}

double NNfunction_NN_2_5::synapse0x1db6490() {
   return (neuron0x1da9580()*-0.018371);
}

double NNfunction_NN_2_5::synapse0x1db64d0() {
   return (neuron0x1da98c0()*0.0178897);
}

double NNfunction_NN_2_5::synapse0x1dc0f80() {
   return (neuron0x1da9c00()*-0.0148488);
}

double NNfunction_NN_2_5::synapse0x1dc0fc0() {
   return (neuron0x1daa160()*0.0123879);
}

double NNfunction_NN_2_5::synapse0x1db6620() {
   return (neuron0x1daa380()*0.0071101);
}

double NNfunction_NN_2_5::synapse0x1db6b30() {
   return (neuron0x1daa6c0()*-0.0026838);
}

double NNfunction_NN_2_5::synapse0x1db6b70() {
   return (neuron0x1daaa00()*-0.0317839);
}

double NNfunction_NN_2_5::synapse0x1db6bb0() {
   return (neuron0x1daad40()*0.0251847);
}

double NNfunction_NN_2_5::synapse0x1db6e00() {
   return (neuron0x1dab080()*0.0398988);
}

double NNfunction_NN_2_5::synapse0x1db6e40() {
   return (neuron0x1dab3c0()*4.40241);
}

double NNfunction_NN_2_5::synapse0x1db66f0() {
   return (neuron0x1da6800()*-0.332865);
}

double NNfunction_NN_2_5::synapse0x1db6730() {
   return (neuron0x1da6b40()*-0.360264);
}

double NNfunction_NN_2_5::synapse0x1db6770() {
   return (neuron0x1da6e80()*-0.580767);
}

double NNfunction_NN_2_5::synapse0x1db67b0() {
   return (neuron0x1da71c0()*-0.121389);
}

double NNfunction_NN_2_5::synapse0x1db7130() {
   return (neuron0x1da7500()*0.0307637);
}

double NNfunction_NN_2_5::synapse0x1dc3480() {
   return (neuron0x1da7840()*0.315514);
}

double NNfunction_NN_2_5::synapse0x1dc34c0() {
   return (neuron0x1da7b80()*-0.88533);
}

double NNfunction_NN_2_5::synapse0x1dc3500() {
   return (neuron0x1da7ec0()*0.400958);
}

double NNfunction_NN_2_5::synapse0x1dc3540() {
   return (neuron0x1da8200()*0.269443);
}

double NNfunction_NN_2_5::synapse0x1dc3580() {
   return (neuron0x1da8540()*-0.2639);
}

double NNfunction_NN_2_5::synapse0x1dc35c0() {
   return (neuron0x1da8880()*0.15374);
}

double NNfunction_NN_2_5::synapse0x1dc3600() {
   return (neuron0x1da8bc0()*-0.0103768);
}

double NNfunction_NN_2_5::synapse0x1dc3640() {
   return (neuron0x1da8f00()*-0.0643287);
}

double NNfunction_NN_2_5::synapse0x1dc3680() {
   return (neuron0x1da9240()*0.167832);
}

double NNfunction_NN_2_5::synapse0x1dc36c0() {
   return (neuron0x1da9580()*0.117903);
}

double NNfunction_NN_2_5::synapse0x1dc3700() {
   return (neuron0x1da98c0()*-0.0241401);
}

double NNfunction_NN_2_5::synapse0x1db7010() {
   return (neuron0x1da9c00()*0.130295);
}

double NNfunction_NN_2_5::synapse0x1db7050() {
   return (neuron0x1daa160()*0.406674);
}

double NNfunction_NN_2_5::synapse0x1dc3850() {
   return (neuron0x1daa380()*0.137906);
}

double NNfunction_NN_2_5::synapse0x1dc3890() {
   return (neuron0x1daa6c0()*-0.0408124);
}

double NNfunction_NN_2_5::synapse0x1dc38d0() {
   return (neuron0x1daaa00()*0.107678);
}

double NNfunction_NN_2_5::synapse0x1dc3910() {
   return (neuron0x1daad40()*0.237905);
}

double NNfunction_NN_2_5::synapse0x1dc3950() {
   return (neuron0x1dab080()*-0.145772);
}

double NNfunction_NN_2_5::synapse0x1dc3990() {
   return (neuron0x1dab3c0()*-0.96076);
}

double NNfunction_NN_2_5::synapse0x1dc3d10() {
   return (neuron0x1da6800()*0.0533175);
}

double NNfunction_NN_2_5::synapse0x1dc3d50() {
   return (neuron0x1da6b40()*-0.435147);
}

double NNfunction_NN_2_5::synapse0x1dc3d90() {
   return (neuron0x1da6e80()*0.252834);
}

double NNfunction_NN_2_5::synapse0x1dc3dd0() {
   return (neuron0x1da71c0()*-0.0735907);
}

double NNfunction_NN_2_5::synapse0x1dc3e10() {
   return (neuron0x1da7500()*0.0328357);
}

double NNfunction_NN_2_5::synapse0x1dc3e50() {
   return (neuron0x1da7840()*-0.0330461);
}

double NNfunction_NN_2_5::synapse0x1dc3e90() {
   return (neuron0x1da7b80()*0.0721265);
}

double NNfunction_NN_2_5::synapse0x1dc3ed0() {
   return (neuron0x1da7ec0()*0.0762121);
}

double NNfunction_NN_2_5::synapse0x1dc3f10() {
   return (neuron0x1da8200()*0.0533182);
}

double NNfunction_NN_2_5::synapse0x1dc3f50() {
   return (neuron0x1da8540()*0.0541813);
}

double NNfunction_NN_2_5::synapse0x1dc3f90() {
   return (neuron0x1da8880()*-0.0100224);
}

double NNfunction_NN_2_5::synapse0x1dc3fd0() {
   return (neuron0x1da8bc0()*0.338503);
}

double NNfunction_NN_2_5::synapse0x1dc4010() {
   return (neuron0x1da8f00()*0.0511402);
}

double NNfunction_NN_2_5::synapse0x1dc4050() {
   return (neuron0x1da9240()*-0.0684348);
}

double NNfunction_NN_2_5::synapse0x1dc4090() {
   return (neuron0x1da9580()*-0.0487299);
}

double NNfunction_NN_2_5::synapse0x1dc40d0() {
   return (neuron0x1da98c0()*0.0410089);
}

double NNfunction_NN_2_5::synapse0x1dc3b60() {
   return (neuron0x1da9c00()*-0.0634173);
}

double NNfunction_NN_2_5::synapse0x1dc3ba0() {
   return (neuron0x1daa160()*0.0435793);
}

double NNfunction_NN_2_5::synapse0x1dc4220() {
   return (neuron0x1daa380()*0.147247);
}

double NNfunction_NN_2_5::synapse0x1dc4260() {
   return (neuron0x1daa6c0()*-0.0573929);
}

double NNfunction_NN_2_5::synapse0x1dc42a0() {
   return (neuron0x1daaa00()*-0.0125241);
}

double NNfunction_NN_2_5::synapse0x1dc42e0() {
   return (neuron0x1daad40()*0.0157052);
}

double NNfunction_NN_2_5::synapse0x1dc4320() {
   return (neuron0x1dab080()*0.0168942);
}

double NNfunction_NN_2_5::synapse0x1dc4360() {
   return (neuron0x1dab3c0()*1.62589);
}

double NNfunction_NN_2_5::synapse0x1dc46e0() {
   return (neuron0x1da6800()*-0.00591465);
}

double NNfunction_NN_2_5::synapse0x1dc4720() {
   return (neuron0x1da6b40()*0.242116);
}

double NNfunction_NN_2_5::synapse0x1dc4760() {
   return (neuron0x1da6e80()*3.21015);
}

double NNfunction_NN_2_5::synapse0x1dc47a0() {
   return (neuron0x1da71c0()*0.0220507);
}

double NNfunction_NN_2_5::synapse0x1dc47e0() {
   return (neuron0x1da7500()*-0.00471815);
}

double NNfunction_NN_2_5::synapse0x1dc4820() {
   return (neuron0x1da7840()*-0.0347031);
}

double NNfunction_NN_2_5::synapse0x1dc4860() {
   return (neuron0x1da7b80()*0.0357566);
}

double NNfunction_NN_2_5::synapse0x1dc48a0() {
   return (neuron0x1da7ec0()*0.0066228);
}

double NNfunction_NN_2_5::synapse0x1dc48e0() {
   return (neuron0x1da8200()*-0.0271437);
}

double NNfunction_NN_2_5::synapse0x1dc4920() {
   return (neuron0x1da8540()*-0.0386403);
}

double NNfunction_NN_2_5::synapse0x1dc4960() {
   return (neuron0x1da8880()*-0.0101432);
}

double NNfunction_NN_2_5::synapse0x1dc49a0() {
   return (neuron0x1da8bc0()*-0.368074);
}

double NNfunction_NN_2_5::synapse0x1dc49e0() {
   return (neuron0x1da8f00()*-0.00316679);
}

double NNfunction_NN_2_5::synapse0x1dc4a20() {
   return (neuron0x1da9240()*-0.00428397);
}

double NNfunction_NN_2_5::synapse0x1dc4a60() {
   return (neuron0x1da9580()*0.00888439);
}

double NNfunction_NN_2_5::synapse0x1dc4aa0() {
   return (neuron0x1da98c0()*0.0177975);
}

double NNfunction_NN_2_5::synapse0x1dc4530() {
   return (neuron0x1da9c00()*0.0130592);
}

double NNfunction_NN_2_5::synapse0x1dc4570() {
   return (neuron0x1daa160()*0.0427628);
}

double NNfunction_NN_2_5::synapse0x1dc4bf0() {
   return (neuron0x1daa380()*-0.0199722);
}

double NNfunction_NN_2_5::synapse0x1dc4c30() {
   return (neuron0x1daa6c0()*-0.0131028);
}

double NNfunction_NN_2_5::synapse0x1dc4c70() {
   return (neuron0x1daaa00()*-0.0171941);
}

double NNfunction_NN_2_5::synapse0x1dc4cb0() {
   return (neuron0x1daad40()*0.0209182);
}

double NNfunction_NN_2_5::synapse0x1dc4cf0() {
   return (neuron0x1dab080()*0.00176753);
}

double NNfunction_NN_2_5::synapse0x1dc4d30() {
   return (neuron0x1dab3c0()*-0.379716);
}

double NNfunction_NN_2_5::synapse0x1dc50b0() {
   return (neuron0x1da6800()*0.0292047);
}

double NNfunction_NN_2_5::synapse0x1dc50f0() {
   return (neuron0x1da6b40()*-5.56217);
}

double NNfunction_NN_2_5::synapse0x1dc5130() {
   return (neuron0x1da6e80()*-0.904155);
}

double NNfunction_NN_2_5::synapse0x1dc5170() {
   return (neuron0x1da71c0()*-0.00535094);
}

double NNfunction_NN_2_5::synapse0x1dc51b0() {
   return (neuron0x1da7500()*0.0206307);
}

double NNfunction_NN_2_5::synapse0x1dc51f0() {
   return (neuron0x1da7840()*-0.0832796);
}

double NNfunction_NN_2_5::synapse0x1dc5230() {
   return (neuron0x1da7b80()*0.0281244);
}

double NNfunction_NN_2_5::synapse0x1dc5270() {
   return (neuron0x1da7ec0()*-0.0890315);
}

double NNfunction_NN_2_5::synapse0x1dc52b0() {
   return (neuron0x1da8200()*0.0128477);
}

double NNfunction_NN_2_5::synapse0x1dc52f0() {
   return (neuron0x1da8540()*0.00342261);
}

double NNfunction_NN_2_5::synapse0x1dc5330() {
   return (neuron0x1da8880()*0.018643);
}

double NNfunction_NN_2_5::synapse0x1dc5370() {
   return (neuron0x1da8bc0()*0.200333);
}

double NNfunction_NN_2_5::synapse0x1dc53b0() {
   return (neuron0x1da8f00()*0.0441136);
}

double NNfunction_NN_2_5::synapse0x1dc53f0() {
   return (neuron0x1da9240()*0.0155798);
}

double NNfunction_NN_2_5::synapse0x1dc5430() {
   return (neuron0x1da9580()*0.0256633);
}

double NNfunction_NN_2_5::synapse0x1dc5470() {
   return (neuron0x1da98c0()*-0.0147156);
}

double NNfunction_NN_2_5::synapse0x1dc4f00() {
   return (neuron0x1da9c00()*0.0258788);
}

double NNfunction_NN_2_5::synapse0x1dc4f40() {
   return (neuron0x1daa160()*0.0324101);
}

double NNfunction_NN_2_5::synapse0x1dc55c0() {
   return (neuron0x1daa380()*0.0714588);
}

double NNfunction_NN_2_5::synapse0x1dc5600() {
   return (neuron0x1daa6c0()*0.0323178);
}

double NNfunction_NN_2_5::synapse0x1dc5640() {
   return (neuron0x1daaa00()*-0.048643);
}

double NNfunction_NN_2_5::synapse0x1dc5680() {
   return (neuron0x1daad40()*-0.02394);
}

double NNfunction_NN_2_5::synapse0x1dc56c0() {
   return (neuron0x1dab080()*0.0115531);
}

double NNfunction_NN_2_5::synapse0x1dc5700() {
   return (neuron0x1dab3c0()*-1.39965);
}

double NNfunction_NN_2_5::synapse0x1dc5a80() {
   return (neuron0x1da6800()*-0.0139736);
}

double NNfunction_NN_2_5::synapse0x1dc5ac0() {
   return (neuron0x1da6b40()*-16.9435);
}

double NNfunction_NN_2_5::synapse0x1dc5b00() {
   return (neuron0x1da6e80()*3.93171);
}

double NNfunction_NN_2_5::synapse0x1dc5b40() {
   return (neuron0x1da71c0()*0.0242888);
}

double NNfunction_NN_2_5::synapse0x1dc5b80() {
   return (neuron0x1da7500()*-0.00407508);
}

double NNfunction_NN_2_5::synapse0x1dc5bc0() {
   return (neuron0x1da7840()*-0.00234823);
}

double NNfunction_NN_2_5::synapse0x1dc5c00() {
   return (neuron0x1da7b80()*-0.00287417);
}

double NNfunction_NN_2_5::synapse0x1dc5c40() {
   return (neuron0x1da7ec0()*-0.0258332);
}

double NNfunction_NN_2_5::synapse0x1dc5c80() {
   return (neuron0x1da8200()*0.0142583);
}

double NNfunction_NN_2_5::synapse0x1dc5cc0() {
   return (neuron0x1da8540()*-0.00647146);
}

double NNfunction_NN_2_5::synapse0x1dc5d00() {
   return (neuron0x1da8880()*0.0075491);
}

double NNfunction_NN_2_5::synapse0x1dc5d40() {
   return (neuron0x1da8bc0()*-0.208754);
}

double NNfunction_NN_2_5::synapse0x1dc5d80() {
   return (neuron0x1da8f00()*-0.0287343);
}

double NNfunction_NN_2_5::synapse0x1dc5dc0() {
   return (neuron0x1da9240()*-0.0255075);
}

double NNfunction_NN_2_5::synapse0x1dc5e00() {
   return (neuron0x1da9580()*0.0169783);
}

double NNfunction_NN_2_5::synapse0x1dc5e40() {
   return (neuron0x1da98c0()*-0.0159139);
}

double NNfunction_NN_2_5::synapse0x1dc58d0() {
   return (neuron0x1da9c00()*-0.0144264);
}

double NNfunction_NN_2_5::synapse0x1dc5910() {
   return (neuron0x1daa160()*-0.0236203);
}

double NNfunction_NN_2_5::synapse0x1dc5f90() {
   return (neuron0x1daa380()*0.0210783);
}

double NNfunction_NN_2_5::synapse0x1dc5fd0() {
   return (neuron0x1daa6c0()*-0.00855274);
}

double NNfunction_NN_2_5::synapse0x1dc6010() {
   return (neuron0x1daaa00()*0.0358331);
}

double NNfunction_NN_2_5::synapse0x1dc6050() {
   return (neuron0x1daad40()*-0.00323782);
}

double NNfunction_NN_2_5::synapse0x1dc6090() {
   return (neuron0x1dab080()*0.0374822);
}

double NNfunction_NN_2_5::synapse0x1dc60d0() {
   return (neuron0x1dab3c0()*0.253415);
}

double NNfunction_NN_2_5::synapse0x1dc6450() {
   return (neuron0x1da6800()*0.125225);
}

double NNfunction_NN_2_5::synapse0x1dc6490() {
   return (neuron0x1da6b40()*-0.201539);
}

double NNfunction_NN_2_5::synapse0x1dc64d0() {
   return (neuron0x1da6e80()*0.52408);
}

double NNfunction_NN_2_5::synapse0x1dc6510() {
   return (neuron0x1da71c0()*-0.0639716);
}

double NNfunction_NN_2_5::synapse0x1dc6550() {
   return (neuron0x1da7500()*0.0231543);
}

double NNfunction_NN_2_5::synapse0x1dc6590() {
   return (neuron0x1da7840()*0.0498016);
}

double NNfunction_NN_2_5::synapse0x1dc65d0() {
   return (neuron0x1da7b80()*-0.123496);
}

double NNfunction_NN_2_5::synapse0x1dc6610() {
   return (neuron0x1da7ec0()*0.0276516);
}

double NNfunction_NN_2_5::synapse0x1dc6650() {
   return (neuron0x1da8200()*-0.00897171);
}

double NNfunction_NN_2_5::synapse0x1dc6690() {
   return (neuron0x1da8540()*0.0640489);
}

double NNfunction_NN_2_5::synapse0x1dc66d0() {
   return (neuron0x1da8880()*-0.018616);
}

double NNfunction_NN_2_5::synapse0x1dc6710() {
   return (neuron0x1da8bc0()*1.14982);
}

double NNfunction_NN_2_5::synapse0x1dc6750() {
   return (neuron0x1da8f00()*0.024748);
}

double NNfunction_NN_2_5::synapse0x1dc6790() {
   return (neuron0x1da9240()*-0.129261);
}

double NNfunction_NN_2_5::synapse0x1dc67d0() {
   return (neuron0x1da9580()*-0.022823);
}

double NNfunction_NN_2_5::synapse0x1dc6810() {
   return (neuron0x1da98c0()*0.0690225);
}

double NNfunction_NN_2_5::synapse0x1dc62a0() {
   return (neuron0x1da9c00()*0.0353917);
}

double NNfunction_NN_2_5::synapse0x1dc62e0() {
   return (neuron0x1daa160()*0.164318);
}

double NNfunction_NN_2_5::synapse0x1dc6960() {
   return (neuron0x1daa380()*0.0188041);
}

double NNfunction_NN_2_5::synapse0x1dc69a0() {
   return (neuron0x1daa6c0()*0.0520677);
}

double NNfunction_NN_2_5::synapse0x1dc69e0() {
   return (neuron0x1daaa00()*0.0535069);
}

double NNfunction_NN_2_5::synapse0x1dc6a20() {
   return (neuron0x1daad40()*-0.0741613);
}

double NNfunction_NN_2_5::synapse0x1dc6a60() {
   return (neuron0x1dab080()*-0.0320014);
}

double NNfunction_NN_2_5::synapse0x1dc6aa0() {
   return (neuron0x1dab3c0()*2.67888);
}

double NNfunction_NN_2_5::synapse0x1dc6e20() {
   return (neuron0x1da6800()*0.339211);
}

double NNfunction_NN_2_5::synapse0x1dc6e60() {
   return (neuron0x1da6b40()*-0.465439);
}

double NNfunction_NN_2_5::synapse0x1dc6ea0() {
   return (neuron0x1da6e80()*-1.20774);
}

double NNfunction_NN_2_5::synapse0x1dc6ee0() {
   return (neuron0x1da71c0()*0.208152);
}

double NNfunction_NN_2_5::synapse0x1dc6f20() {
   return (neuron0x1da7500()*0.309455);
}

double NNfunction_NN_2_5::synapse0x1dc6f60() {
   return (neuron0x1da7840()*-0.0788554);
}

double NNfunction_NN_2_5::synapse0x1dc6fa0() {
   return (neuron0x1da7b80()*0.371546);
}

double NNfunction_NN_2_5::synapse0x1dc6fe0() {
   return (neuron0x1da7ec0()*-0.361255);
}

double NNfunction_NN_2_5::synapse0x1dc7020() {
   return (neuron0x1da8200()*-0.122298);
}

double NNfunction_NN_2_5::synapse0x1dc7060() {
   return (neuron0x1da8540()*-0.152469);
}

double NNfunction_NN_2_5::synapse0x1dc70a0() {
   return (neuron0x1da8880()*0.209365);
}

double NNfunction_NN_2_5::synapse0x1dc70e0() {
   return (neuron0x1da8bc0()*0.799323);
}

double NNfunction_NN_2_5::synapse0x1dc7120() {
   return (neuron0x1da8f00()*-0.0973358);
}

double NNfunction_NN_2_5::synapse0x1dc7160() {
   return (neuron0x1da9240()*-0.243184);
}

double NNfunction_NN_2_5::synapse0x1dc71a0() {
   return (neuron0x1da9580()*0.128141);
}

double NNfunction_NN_2_5::synapse0x1dc71e0() {
   return (neuron0x1da98c0()*-0.0939219);
}

double NNfunction_NN_2_5::synapse0x1dc6c70() {
   return (neuron0x1da9c00()*-0.138921);
}

double NNfunction_NN_2_5::synapse0x1dc6cb0() {
   return (neuron0x1daa160()*-0.42455);
}

double NNfunction_NN_2_5::synapse0x1dc7330() {
   return (neuron0x1daa380()*0.0240409);
}

double NNfunction_NN_2_5::synapse0x1dc7370() {
   return (neuron0x1daa6c0()*-0.37831);
}

double NNfunction_NN_2_5::synapse0x1dc73b0() {
   return (neuron0x1daaa00()*-0.340304);
}

double NNfunction_NN_2_5::synapse0x1dc73f0() {
   return (neuron0x1daad40()*-0.227099);
}

double NNfunction_NN_2_5::synapse0x1dc7430() {
   return (neuron0x1dab080()*-0.46523);
}

double NNfunction_NN_2_5::synapse0x1dc7470() {
   return (neuron0x1dab3c0()*0.384603);
}

double NNfunction_NN_2_5::synapse0x1dc77f0() {
   return (neuron0x1da6800()*-0.126024);
}

double NNfunction_NN_2_5::synapse0x1dc7830() {
   return (neuron0x1da6b40()*-1.48683);
}

double NNfunction_NN_2_5::synapse0x1dc7870() {
   return (neuron0x1da6e80()*-0.523631);
}

double NNfunction_NN_2_5::synapse0x1dc78b0() {
   return (neuron0x1da71c0()*0.0814938);
}

double NNfunction_NN_2_5::synapse0x1dc78f0() {
   return (neuron0x1da7500()*0.383185);
}

double NNfunction_NN_2_5::synapse0x1dc7930() {
   return (neuron0x1da7840()*-0.0029364);
}

double NNfunction_NN_2_5::synapse0x1dc7970() {
   return (neuron0x1da7b80()*0.152554);
}

double NNfunction_NN_2_5::synapse0x1dc79b0() {
   return (neuron0x1da7ec0()*0.203837);
}

double NNfunction_NN_2_5::synapse0x1dc79f0() {
   return (neuron0x1da8200()*0.420024);
}

double NNfunction_NN_2_5::synapse0x1dc7a30() {
   return (neuron0x1da8540()*0.146835);
}

double NNfunction_NN_2_5::synapse0x1dc7a70() {
   return (neuron0x1da8880()*0.159359);
}

double NNfunction_NN_2_5::synapse0x1dc7ab0() {
   return (neuron0x1da8bc0()*-0.731054);
}

double NNfunction_NN_2_5::synapse0x1dc7af0() {
   return (neuron0x1da8f00()*0.0263553);
}

double NNfunction_NN_2_5::synapse0x1dc7b30() {
   return (neuron0x1da9240()*-0.209987);
}

double NNfunction_NN_2_5::synapse0x1dc7b70() {
   return (neuron0x1da9580()*-0.0992607);
}

double NNfunction_NN_2_5::synapse0x1dc7bb0() {
   return (neuron0x1da98c0()*0.452605);
}

double NNfunction_NN_2_5::synapse0x1dc7640() {
   return (neuron0x1da9c00()*0.226528);
}

double NNfunction_NN_2_5::synapse0x1dc7680() {
   return (neuron0x1daa160()*0.213733);
}

double NNfunction_NN_2_5::synapse0x1dc7d00() {
   return (neuron0x1daa380()*0.34252);
}

double NNfunction_NN_2_5::synapse0x1dc7d40() {
   return (neuron0x1daa6c0()*-0.115638);
}

double NNfunction_NN_2_5::synapse0x1dc7d80() {
   return (neuron0x1daaa00()*-0.033845);
}

double NNfunction_NN_2_5::synapse0x1dc7dc0() {
   return (neuron0x1daad40()*0.244256);
}

double NNfunction_NN_2_5::synapse0x1dc7e00() {
   return (neuron0x1dab080()*-0.26053);
}

double NNfunction_NN_2_5::synapse0x1dc7e40() {
   return (neuron0x1dab3c0()*0.602609);
}

double NNfunction_NN_2_5::synapse0x1db08f0() {
   return (neuron0x1da6800()*0.21138);
}

double NNfunction_NN_2_5::synapse0x1db0930() {
   return (neuron0x1da6b40()*-0.224786);
}

double NNfunction_NN_2_5::synapse0x1db0970() {
   return (neuron0x1da6e80()*0.704899);
}

double NNfunction_NN_2_5::synapse0x1db09b0() {
   return (neuron0x1da71c0()*-0.0913381);
}

double NNfunction_NN_2_5::synapse0x1db09f0() {
   return (neuron0x1da7500()*0.0470341);
}

double NNfunction_NN_2_5::synapse0x1db0a30() {
   return (neuron0x1da7840()*0.033566);
}

double NNfunction_NN_2_5::synapse0x1db0a70() {
   return (neuron0x1da7b80()*-0.140133);
}

double NNfunction_NN_2_5::synapse0x1db0ab0() {
   return (neuron0x1da7ec0()*0.0247359);
}

double NNfunction_NN_2_5::synapse0x1dc85d0() {
   return (neuron0x1da8200()*0.00568317);
}

double NNfunction_NN_2_5::synapse0x1dc8610() {
   return (neuron0x1da8540()*0.10702);
}

double NNfunction_NN_2_5::synapse0x1dc8650() {
   return (neuron0x1da8880()*0.00456413);
}

double NNfunction_NN_2_5::synapse0x1dc8690() {
   return (neuron0x1da8bc0()*0.909022);
}

double NNfunction_NN_2_5::synapse0x1dc86d0() {
   return (neuron0x1da8f00()*0.0219304);
}

double NNfunction_NN_2_5::synapse0x1dc8710() {
   return (neuron0x1da9240()*-0.152361);
}

double NNfunction_NN_2_5::synapse0x1dc8750() {
   return (neuron0x1da9580()*-0.0565699);
}

double NNfunction_NN_2_5::synapse0x1dc8790() {
   return (neuron0x1da98c0()*0.0786534);
}

double NNfunction_NN_2_5::synapse0x1dc8010() {
   return (neuron0x1da9c00()*-0.039611);
}

double NNfunction_NN_2_5::synapse0x1dc8050() {
   return (neuron0x1daa160()*0.182416);
}

double NNfunction_NN_2_5::synapse0x1dc88e0() {
   return (neuron0x1daa380()*0.0684331);
}

double NNfunction_NN_2_5::synapse0x1dc8920() {
   return (neuron0x1daa6c0()*0.0787496);
}

double NNfunction_NN_2_5::synapse0x1dc8960() {
   return (neuron0x1daaa00()*0.0455409);
}

double NNfunction_NN_2_5::synapse0x1dc89a0() {
   return (neuron0x1daad40()*-0.0543844);
}

double NNfunction_NN_2_5::synapse0x1dc89e0() {
   return (neuron0x1dab080()*-0.0494585);
}

double NNfunction_NN_2_5::synapse0x1dc8a20() {
   return (neuron0x1dab3c0()*2.58603);
}

double NNfunction_NN_2_5::synapse0x1dc8da0() {
   return (neuron0x1da6800()*0.165464);
}

double NNfunction_NN_2_5::synapse0x1dc8de0() {
   return (neuron0x1da6b40()*-0.0782044);
}

double NNfunction_NN_2_5::synapse0x1dc8e20() {
   return (neuron0x1da6e80()*0.0114172);
}

double NNfunction_NN_2_5::synapse0x1dc8e60() {
   return (neuron0x1da71c0()*0.0285151);
}

double NNfunction_NN_2_5::synapse0x1dc8ea0() {
   return (neuron0x1da7500()*-0.0362393);
}

double NNfunction_NN_2_5::synapse0x1dc8ee0() {
   return (neuron0x1da7840()*0.0167889);
}

double NNfunction_NN_2_5::synapse0x1dc8f20() {
   return (neuron0x1da7b80()*0.000242154);
}

double NNfunction_NN_2_5::synapse0x1dc8f60() {
   return (neuron0x1da7ec0()*0.021604);
}

double NNfunction_NN_2_5::synapse0x1dc8fa0() {
   return (neuron0x1da8200()*-0.0573277);
}

double NNfunction_NN_2_5::synapse0x1dc8fe0() {
   return (neuron0x1da8540()*0.00824531);
}

double NNfunction_NN_2_5::synapse0x1dc9020() {
   return (neuron0x1da8880()*-0.0869003);
}

double NNfunction_NN_2_5::synapse0x1dc9060() {
   return (neuron0x1da8bc0()*0.00991179);
}

double NNfunction_NN_2_5::synapse0x1dc90a0() {
   return (neuron0x1da8f00()*-0.0735261);
}

double NNfunction_NN_2_5::synapse0x1dc90e0() {
   return (neuron0x1da9240()*-0.0397679);
}

double NNfunction_NN_2_5::synapse0x1dc9120() {
   return (neuron0x1da9580()*-0.0571199);
}

double NNfunction_NN_2_5::synapse0x1dc9160() {
   return (neuron0x1da98c0()*0.0486721);
}

double NNfunction_NN_2_5::synapse0x1dc8bf0() {
   return (neuron0x1da9c00()*0.0267739);
}

double NNfunction_NN_2_5::synapse0x1dc8c30() {
   return (neuron0x1daa160()*-0.0261446);
}

double NNfunction_NN_2_5::synapse0x1dc92b0() {
   return (neuron0x1daa380()*-0.0664913);
}

double NNfunction_NN_2_5::synapse0x1dc92f0() {
   return (neuron0x1daa6c0()*-0.0243595);
}

double NNfunction_NN_2_5::synapse0x1dc9330() {
   return (neuron0x1daaa00()*-0.000204241);
}

double NNfunction_NN_2_5::synapse0x1dc9370() {
   return (neuron0x1daad40()*-0.060108);
}

double NNfunction_NN_2_5::synapse0x1dc93b0() {
   return (neuron0x1dab080()*0.0100818);
}

double NNfunction_NN_2_5::synapse0x1dc93f0() {
   return (neuron0x1dab3c0()*2.33412);
}

double NNfunction_NN_2_5::synapse0x1dc9770() {
   return (neuron0x1da6800()*0.730628);
}

double NNfunction_NN_2_5::synapse0x1dc97b0() {
   return (neuron0x1da6b40()*-0.046894);
}

double NNfunction_NN_2_5::synapse0x1dc97f0() {
   return (neuron0x1da6e80()*0.649625);
}

double NNfunction_NN_2_5::synapse0x1dc9830() {
   return (neuron0x1da71c0()*0.648555);
}

double NNfunction_NN_2_5::synapse0x1dc9870() {
   return (neuron0x1da7500()*-0.00898115);
}

double NNfunction_NN_2_5::synapse0x1dc98b0() {
   return (neuron0x1da7840()*0.0709211);
}

double NNfunction_NN_2_5::synapse0x1dc98f0() {
   return (neuron0x1da7b80()*-0.337804);
}

double NNfunction_NN_2_5::synapse0x1dc9930() {
   return (neuron0x1da7ec0()*0.193106);
}

double NNfunction_NN_2_5::synapse0x1dc9970() {
   return (neuron0x1da8200()*-0.969264);
}

double NNfunction_NN_2_5::synapse0x1dc99b0() {
   return (neuron0x1da8540()*-0.467532);
}

double NNfunction_NN_2_5::synapse0x1dc99f0() {
   return (neuron0x1da8880()*-0.389172);
}

double NNfunction_NN_2_5::synapse0x1dc9a30() {
   return (neuron0x1da8bc0()*0.0122376);
}

double NNfunction_NN_2_5::synapse0x1dc9a70() {
   return (neuron0x1da8f00()*0.259066);
}

double NNfunction_NN_2_5::synapse0x1dc9ab0() {
   return (neuron0x1da9240()*0.263326);
}

double NNfunction_NN_2_5::synapse0x1dc9af0() {
   return (neuron0x1da9580()*-0.0424492);
}

double NNfunction_NN_2_5::synapse0x1dc9b30() {
   return (neuron0x1da98c0()*-0.255486);
}

double NNfunction_NN_2_5::synapse0x1dc95c0() {
   return (neuron0x1da9c00()*0.337749);
}

double NNfunction_NN_2_5::synapse0x1dc9600() {
   return (neuron0x1daa160()*0.208155);
}

double NNfunction_NN_2_5::synapse0x1dba130() {
   return (neuron0x1daa380()*-0.477026);
}

double NNfunction_NN_2_5::synapse0x1dba170() {
   return (neuron0x1daa6c0()*0.702248);
}

double NNfunction_NN_2_5::synapse0x1dba1b0() {
   return (neuron0x1daaa00()*0.0567359);
}

double NNfunction_NN_2_5::synapse0x1dba1f0() {
   return (neuron0x1daad40()*-0.347108);
}

double NNfunction_NN_2_5::synapse0x1dba230() {
   return (neuron0x1dab080()*0.0433761);
}

double NNfunction_NN_2_5::synapse0x1dba270() {
   return (neuron0x1dab3c0()*0.597354);
}

double NNfunction_NN_2_5::synapse0x1dba5f0() {
   return (neuron0x1da6800()*-0.0439894);
}

double NNfunction_NN_2_5::synapse0x1dba630() {
   return (neuron0x1da6b40()*17.346);
}

double NNfunction_NN_2_5::synapse0x1dba670() {
   return (neuron0x1da6e80()*3.58197);
}

double NNfunction_NN_2_5::synapse0x1dba6b0() {
   return (neuron0x1da71c0()*-0.00920575);
}

double NNfunction_NN_2_5::synapse0x1dba6f0() {
   return (neuron0x1da7500()*-0.0202881);
}

double NNfunction_NN_2_5::synapse0x1dba730() {
   return (neuron0x1da7840()*0.00254626);
}

double NNfunction_NN_2_5::synapse0x1dba770() {
   return (neuron0x1da7b80()*-0.0120745);
}

double NNfunction_NN_2_5::synapse0x1dba7b0() {
   return (neuron0x1da7ec0()*-0.0154814);
}

double NNfunction_NN_2_5::synapse0x1dba7f0() {
   return (neuron0x1da8200()*-0.0275736);
}

double NNfunction_NN_2_5::synapse0x1dba830() {
   return (neuron0x1da8540()*0.0133799);
}

double NNfunction_NN_2_5::synapse0x1dba870() {
   return (neuron0x1da8880()*-0.0161283);
}

double NNfunction_NN_2_5::synapse0x1dba8b0() {
   return (neuron0x1da8bc0()*-0.158814);
}

double NNfunction_NN_2_5::synapse0x1dba8f0() {
   return (neuron0x1da8f00()*0.0490986);
}

double NNfunction_NN_2_5::synapse0x1dba930() {
   return (neuron0x1da9240()*-0.0406784);
}

double NNfunction_NN_2_5::synapse0x1dba970() {
   return (neuron0x1da9580()*0.0131329);
}

double NNfunction_NN_2_5::synapse0x1dba9b0() {
   return (neuron0x1da98c0()*0.0240759);
}

double NNfunction_NN_2_5::synapse0x1dba440() {
   return (neuron0x1da9c00()*-0.0260752);
}

double NNfunction_NN_2_5::synapse0x1dba480() {
   return (neuron0x1daa160()*0.0205952);
}

double NNfunction_NN_2_5::synapse0x1dbab00() {
   return (neuron0x1daa380()*-0.0234133);
}

double NNfunction_NN_2_5::synapse0x1dbab40() {
   return (neuron0x1daa6c0()*0.0111969);
}

double NNfunction_NN_2_5::synapse0x1dbab80() {
   return (neuron0x1daaa00()*-0.029148);
}

double NNfunction_NN_2_5::synapse0x1dbabc0() {
   return (neuron0x1daad40()*-0.017506);
}

double NNfunction_NN_2_5::synapse0x1dbac00() {
   return (neuron0x1dab080()*0.00939682);
}

double NNfunction_NN_2_5::synapse0x1dbac40() {
   return (neuron0x1dab3c0()*-0.0645404);
}

double NNfunction_NN_2_5::synapse0x1dbafc0() {
   return (neuron0x1da6800()*0.334992);
}

double NNfunction_NN_2_5::synapse0x1dbb000() {
   return (neuron0x1da6b40()*-0.334457);
}

double NNfunction_NN_2_5::synapse0x1dbb040() {
   return (neuron0x1da6e80()*0.371684);
}

double NNfunction_NN_2_5::synapse0x1dbb080() {
   return (neuron0x1da71c0()*-0.24065);
}

double NNfunction_NN_2_5::synapse0x1dbb0c0() {
   return (neuron0x1da7500()*0.185012);
}

double NNfunction_NN_2_5::synapse0x1dbb100() {
   return (neuron0x1da7840()*-0.160473);
}

double NNfunction_NN_2_5::synapse0x1dbb140() {
   return (neuron0x1da7b80()*-0.550965);
}

double NNfunction_NN_2_5::synapse0x1dbb180() {
   return (neuron0x1da7ec0()*0.356037);
}

double NNfunction_NN_2_5::synapse0x1dbb1c0() {
   return (neuron0x1da8200()*-0.690608);
}

double NNfunction_NN_2_5::synapse0x1dbb200() {
   return (neuron0x1da8540()*-0.600586);
}

double NNfunction_NN_2_5::synapse0x1dbb240() {
   return (neuron0x1da8880()*-0.0873445);
}

double NNfunction_NN_2_5::synapse0x1dbb280() {
   return (neuron0x1da8bc0()*-0.00462501);
}

double NNfunction_NN_2_5::synapse0x1dbb2c0() {
   return (neuron0x1da8f00()*-0.681046);
}

double NNfunction_NN_2_5::synapse0x1dbb300() {
   return (neuron0x1da9240()*-0.40227);
}

double NNfunction_NN_2_5::synapse0x1dbb340() {
   return (neuron0x1da9580()*0.457281);
}

double NNfunction_NN_2_5::synapse0x1dbb380() {
   return (neuron0x1da98c0()*-0.190311);
}

double NNfunction_NN_2_5::synapse0x1dbae10() {
   return (neuron0x1da9c00()*-0.143183);
}

double NNfunction_NN_2_5::synapse0x1dbae50() {
   return (neuron0x1daa160()*0.0210342);
}

double NNfunction_NN_2_5::synapse0x1dbb4d0() {
   return (neuron0x1daa380()*0.0726773);
}

double NNfunction_NN_2_5::synapse0x1dbb510() {
   return (neuron0x1daa6c0()*0.177767);
}

double NNfunction_NN_2_5::synapse0x1dbb550() {
   return (neuron0x1daaa00()*-0.141687);
}

double NNfunction_NN_2_5::synapse0x1dbb590() {
   return (neuron0x1daad40()*0.227828);
}

double NNfunction_NN_2_5::synapse0x1dbb5d0() {
   return (neuron0x1dab080()*-0.242446);
}

double NNfunction_NN_2_5::synapse0x1dbb610() {
   return (neuron0x1dab3c0()*0.343574);
}

double NNfunction_NN_2_5::synapse0x1dbb990() {
   return (neuron0x1da6800()*-0.534623);
}

double NNfunction_NN_2_5::synapse0x1dbb9d0() {
   return (neuron0x1da6b40()*-0.260412);
}

double NNfunction_NN_2_5::synapse0x1dbba10() {
   return (neuron0x1da6e80()*-0.270717);
}

double NNfunction_NN_2_5::synapse0x1dbba50() {
   return (neuron0x1da71c0()*-0.253668);
}

double NNfunction_NN_2_5::synapse0x1dbba90() {
   return (neuron0x1da7500()*-0.658542);
}

double NNfunction_NN_2_5::synapse0x1dbbad0() {
   return (neuron0x1da7840()*-0.215781);
}

double NNfunction_NN_2_5::synapse0x1dbbb10() {
   return (neuron0x1da7b80()*-0.115778);
}

double NNfunction_NN_2_5::synapse0x1dbbb50() {
   return (neuron0x1da7ec0()*0.137764);
}

double NNfunction_NN_2_5::synapse0x1dbbb90() {
   return (neuron0x1da8200()*0.302079);
}

double NNfunction_NN_2_5::synapse0x1dbbbd0() {
   return (neuron0x1da8540()*0.0213288);
}

double NNfunction_NN_2_5::synapse0x1dbbc10() {
   return (neuron0x1da8880()*-0.363938);
}

double NNfunction_NN_2_5::synapse0x1dbbc50() {
   return (neuron0x1da8bc0()*-0.268763);
}

double NNfunction_NN_2_5::synapse0x1dbbc90() {
   return (neuron0x1da8f00()*0.0325297);
}

double NNfunction_NN_2_5::synapse0x1dbbcd0() {
   return (neuron0x1da9240()*0.347265);
}

double NNfunction_NN_2_5::synapse0x1dbbd10() {
   return (neuron0x1da9580()*0.186866);
}

double NNfunction_NN_2_5::synapse0x1dbbd50() {
   return (neuron0x1da98c0()*0.0484099);
}

double NNfunction_NN_2_5::synapse0x1dbb7e0() {
   return (neuron0x1da9c00()*0.0254011);
}

double NNfunction_NN_2_5::synapse0x1dbb820() {
   return (neuron0x1daa160()*-0.425296);
}

double NNfunction_NN_2_5::synapse0x1dbbea0() {
   return (neuron0x1daa380()*0.350165);
}

double NNfunction_NN_2_5::synapse0x1dbbee0() {
   return (neuron0x1daa6c0()*-0.539798);
}

double NNfunction_NN_2_5::synapse0x1dbbf20() {
   return (neuron0x1daaa00()*-0.244265);
}

double NNfunction_NN_2_5::synapse0x1dbbf60() {
   return (neuron0x1daad40()*0.190396);
}

double NNfunction_NN_2_5::synapse0x1dbbfa0() {
   return (neuron0x1dab080()*0.208398);
}

double NNfunction_NN_2_5::synapse0x1dbbfe0() {
   return (neuron0x1dab3c0()*0.00666749);
}

double NNfunction_NN_2_5::synapse0x1dcdeb0() {
   return (neuron0x1da6800()*-0.0649257);
}

double NNfunction_NN_2_5::synapse0x1dcdef0() {
   return (neuron0x1da6b40()*-18.3415);
}

double NNfunction_NN_2_5::synapse0x1dcdf30() {
   return (neuron0x1da6e80()*3.07448);
}

double NNfunction_NN_2_5::synapse0x1dcdf70() {
   return (neuron0x1da71c0()*0.00973057);
}

double NNfunction_NN_2_5::synapse0x1dcdfb0() {
   return (neuron0x1da7500()*-0.0313066);
}

double NNfunction_NN_2_5::synapse0x1dcdff0() {
   return (neuron0x1da7840()*0.00495667);
}

double NNfunction_NN_2_5::synapse0x1dce030() {
   return (neuron0x1da7b80()*0.0120014);
}

double NNfunction_NN_2_5::synapse0x1dce070() {
   return (neuron0x1da7ec0()*-0.0147174);
}

double NNfunction_NN_2_5::synapse0x1dce0b0() {
   return (neuron0x1da8200()*0.0130949);
}

double NNfunction_NN_2_5::synapse0x1dce0f0() {
   return (neuron0x1da8540()*0.011189);
}

double NNfunction_NN_2_5::synapse0x1dce130() {
   return (neuron0x1da8880()*0.0186602);
}

double NNfunction_NN_2_5::synapse0x1dce170() {
   return (neuron0x1da8bc0()*-0.10547);
}

double NNfunction_NN_2_5::synapse0x1dce1b0() {
   return (neuron0x1da8f00()*-0.00963542);
}

double NNfunction_NN_2_5::synapse0x1dce1f0() {
   return (neuron0x1da9240()*-0.000951305);
}

double NNfunction_NN_2_5::synapse0x1dce230() {
   return (neuron0x1da9580()*0.0303746);
}

double NNfunction_NN_2_5::synapse0x1dce270() {
   return (neuron0x1da98c0()*0.0155831);
}

double NNfunction_NN_2_5::synapse0x1dbc020() {
   return (neuron0x1da9c00()*-0.0141543);
}

double NNfunction_NN_2_5::synapse0x1dbc060() {
   return (neuron0x1daa160()*-0.0345537);
}

double NNfunction_NN_2_5::synapse0x1dce3c0() {
   return (neuron0x1daa380()*0.00128513);
}

double NNfunction_NN_2_5::synapse0x1dce400() {
   return (neuron0x1daa6c0()*-0.0437619);
}

double NNfunction_NN_2_5::synapse0x1dce440() {
   return (neuron0x1daaa00()*0.0325694);
}

double NNfunction_NN_2_5::synapse0x1dce480() {
   return (neuron0x1daad40()*-0.0225884);
}

double NNfunction_NN_2_5::synapse0x1dce4c0() {
   return (neuron0x1dab080()*0.0195061);
}

double NNfunction_NN_2_5::synapse0x1dce500() {
   return (neuron0x1dab3c0()*0.247734);
}

double NNfunction_NN_2_5::synapse0x1dce880() {
   return (neuron0x1da6800()*0.0132299);
}

double NNfunction_NN_2_5::synapse0x1dce8c0() {
   return (neuron0x1da6b40()*-0.248492);
}

double NNfunction_NN_2_5::synapse0x1dce900() {
   return (neuron0x1da6e80()*-3.51683);
}

double NNfunction_NN_2_5::synapse0x1dce940() {
   return (neuron0x1da71c0()*-0.0329593);
}

double NNfunction_NN_2_5::synapse0x1dce980() {
   return (neuron0x1da7500()*0.00474275);
}

double NNfunction_NN_2_5::synapse0x1dce9c0() {
   return (neuron0x1da7840()*0.0440402);
}

double NNfunction_NN_2_5::synapse0x1dcea00() {
   return (neuron0x1da7b80()*-0.0331388);
}

double NNfunction_NN_2_5::synapse0x1dcea40() {
   return (neuron0x1da7ec0()*-0.00057742);
}

double NNfunction_NN_2_5::synapse0x1dcea80() {
   return (neuron0x1da8200()*0.0212596);
}

double NNfunction_NN_2_5::synapse0x1dceac0() {
   return (neuron0x1da8540()*0.0391505);
}

double NNfunction_NN_2_5::synapse0x1dceb00() {
   return (neuron0x1da8880()*0.00952269);
}

double NNfunction_NN_2_5::synapse0x1dceb40() {
   return (neuron0x1da8bc0()*0.38144);
}

double NNfunction_NN_2_5::synapse0x1dceb80() {
   return (neuron0x1da8f00()*0.0120705);
}

double NNfunction_NN_2_5::synapse0x1dcebc0() {
   return (neuron0x1da9240()*0.00852193);
}

double NNfunction_NN_2_5::synapse0x1dcec00() {
   return (neuron0x1da9580()*-0.0118427);
}

double NNfunction_NN_2_5::synapse0x1dcec40() {
   return (neuron0x1da98c0()*-0.0188652);
}

double NNfunction_NN_2_5::synapse0x1dce6d0() {
   return (neuron0x1da9c00()*-0.00303996);
}

double NNfunction_NN_2_5::synapse0x1dce710() {
   return (neuron0x1daa160()*-0.0417003);
}

double NNfunction_NN_2_5::synapse0x1dced90() {
   return (neuron0x1daa380()*0.00816064);
}

double NNfunction_NN_2_5::synapse0x1dcedd0() {
   return (neuron0x1daa6c0()*0.0137956);
}

double NNfunction_NN_2_5::synapse0x1dcee10() {
   return (neuron0x1daaa00()*0.0262768);
}

double NNfunction_NN_2_5::synapse0x1dcee50() {
   return (neuron0x1daad40()*-0.031521);
}

double NNfunction_NN_2_5::synapse0x1dcee90() {
   return (neuron0x1dab080()*0.00333169);
}

double NNfunction_NN_2_5::synapse0x1dceed0() {
   return (neuron0x1dab3c0()*-0.511318);
}

double NNfunction_NN_2_5::synapse0x1dcf250() {
   return (neuron0x1da6800()*0.0297665);
}

double NNfunction_NN_2_5::synapse0x1dcf290() {
   return (neuron0x1da6b40()*0.00405684);
}

double NNfunction_NN_2_5::synapse0x1dcf2d0() {
   return (neuron0x1da6e80()*-0.0490247);
}

double NNfunction_NN_2_5::synapse0x1dcf310() {
   return (neuron0x1da71c0()*0.00506666);
}

double NNfunction_NN_2_5::synapse0x1dcf350() {
   return (neuron0x1da7500()*0.00530244);
}

double NNfunction_NN_2_5::synapse0x1dcf390() {
   return (neuron0x1da7840()*0.000711627);
}

double NNfunction_NN_2_5::synapse0x1dcf3d0() {
   return (neuron0x1da7b80()*-0.00657325);
}

double NNfunction_NN_2_5::synapse0x1dcf410() {
   return (neuron0x1da7ec0()*0.00107416);
}

double NNfunction_NN_2_5::synapse0x1dcf450() {
   return (neuron0x1da8200()*0.000197022);
}

double NNfunction_NN_2_5::synapse0x1dcf490() {
   return (neuron0x1da8540()*-0.00297884);
}

double NNfunction_NN_2_5::synapse0x1dcf4d0() {
   return (neuron0x1da8880()*-0.00295275);
}

double NNfunction_NN_2_5::synapse0x1dcf510() {
   return (neuron0x1da8bc0()*-0.0202672);
}

double NNfunction_NN_2_5::synapse0x1dcf550() {
   return (neuron0x1da8f00()*-0.00828767);
}

double NNfunction_NN_2_5::synapse0x1dcf590() {
   return (neuron0x1da9240()*-0.00408598);
}

double NNfunction_NN_2_5::synapse0x1dcf5d0() {
   return (neuron0x1da9580()*-0.00183479);
}

double NNfunction_NN_2_5::synapse0x1dcf610() {
   return (neuron0x1da98c0()*0.0106013);
}

double NNfunction_NN_2_5::synapse0x1dcf0a0() {
   return (neuron0x1da9c00()*-0.0147368);
}

double NNfunction_NN_2_5::synapse0x1dcf0e0() {
   return (neuron0x1daa160()*-0.00955278);
}

double NNfunction_NN_2_5::synapse0x1dcf760() {
   return (neuron0x1daa380()*-0.0115905);
}

double NNfunction_NN_2_5::synapse0x1dcf7a0() {
   return (neuron0x1daa6c0()*0.0042147);
}

double NNfunction_NN_2_5::synapse0x1dcf7e0() {
   return (neuron0x1daaa00()*-0.010125);
}

double NNfunction_NN_2_5::synapse0x1dcf820() {
   return (neuron0x1daad40()*8.57581e-05);
}

double NNfunction_NN_2_5::synapse0x1dcf860() {
   return (neuron0x1dab080()*-0.00312721);
}

double NNfunction_NN_2_5::synapse0x1dcf8a0() {
   return (neuron0x1dab3c0()*13.4807);
}

double NNfunction_NN_2_5::synapse0x1dcfc20() {
   return (neuron0x1da6800()*0.377931);
}

double NNfunction_NN_2_5::synapse0x1dcfc60() {
   return (neuron0x1da6b40()*0.0541159);
}

double NNfunction_NN_2_5::synapse0x1dcfca0() {
   return (neuron0x1da6e80()*-0.467366);
}

double NNfunction_NN_2_5::synapse0x1dcfce0() {
   return (neuron0x1da71c0()*-0.0583459);
}

double NNfunction_NN_2_5::synapse0x1dcfd20() {
   return (neuron0x1da7500()*0.0812226);
}

double NNfunction_NN_2_5::synapse0x1dcfd60() {
   return (neuron0x1da7840()*0.340822);
}

double NNfunction_NN_2_5::synapse0x1dcfda0() {
   return (neuron0x1da7b80()*0.187159);
}

double NNfunction_NN_2_5::synapse0x1dcfde0() {
   return (neuron0x1da7ec0()*-0.153188);
}

double NNfunction_NN_2_5::synapse0x1dcfe20() {
   return (neuron0x1da8200()*0.118091);
}

double NNfunction_NN_2_5::synapse0x1dcfe60() {
   return (neuron0x1da8540()*-0.273348);
}

double NNfunction_NN_2_5::synapse0x1dcfea0() {
   return (neuron0x1da8880()*0.313447);
}

double NNfunction_NN_2_5::synapse0x1dcfee0() {
   return (neuron0x1da8bc0()*-0.429489);
}

double NNfunction_NN_2_5::synapse0x1dcff20() {
   return (neuron0x1da8f00()*-0.50362);
}

double NNfunction_NN_2_5::synapse0x1dcff60() {
   return (neuron0x1da9240()*0.153444);
}

double NNfunction_NN_2_5::synapse0x1dcffa0() {
   return (neuron0x1da9580()*0.0662432);
}

double NNfunction_NN_2_5::synapse0x1dcffe0() {
   return (neuron0x1da98c0()*0.817572);
}

double NNfunction_NN_2_5::synapse0x1dcfa70() {
   return (neuron0x1da9c00()*0.565764);
}

double NNfunction_NN_2_5::synapse0x1dcfab0() {
   return (neuron0x1daa160()*0.104243);
}

double NNfunction_NN_2_5::synapse0x1dd0130() {
   return (neuron0x1daa380()*-0.17366);
}

double NNfunction_NN_2_5::synapse0x1dd0170() {
   return (neuron0x1daa6c0()*-0.616368);
}

double NNfunction_NN_2_5::synapse0x1dd01b0() {
   return (neuron0x1daaa00()*0.553881);
}

double NNfunction_NN_2_5::synapse0x1dd01f0() {
   return (neuron0x1daad40()*0.216006);
}

double NNfunction_NN_2_5::synapse0x1dd0230() {
   return (neuron0x1dab080()*0.238103);
}

double NNfunction_NN_2_5::synapse0x1dd0270() {
   return (neuron0x1dab3c0()*-0.458498);
}

double NNfunction_NN_2_5::synapse0x1dac810() {
   return (neuron0x1dab860()*1.08487);
}

double NNfunction_NN_2_5::synapse0x1dac850() {
   return (neuron0x1dac170()*-0.243506);
}

double NNfunction_NN_2_5::synapse0x1dadd20() {
   return (neuron0x1dacc50()*1.42925);
}

double NNfunction_NN_2_5::synapse0x1dadd60() {
   return (neuron0x1b664e0()*1.12451);
}

double NNfunction_NN_2_5::synapse0x1dae6f0() {
   return (neuron0x1dada70()*1.02924);
}

double NNfunction_NN_2_5::synapse0x1dae730() {
   return (neuron0x1dae440()*0.803489);
}

double NNfunction_NN_2_5::synapse0x1daf4c0() {
   return (neuron0x1daf210()*0.336871);
}

double NNfunction_NN_2_5::synapse0x1daf500() {
   return (neuron0x1dafbe0()*1.06563);
}

double NNfunction_NN_2_5::synapse0x1dafe90() {
   return (neuron0x1db05b0()*-0.178425);
}

double NNfunction_NN_2_5::synapse0x1dafed0() {
   return (neuron0x1db1090()*0.153258);
}

double NNfunction_NN_2_5::synapse0x1db0860() {
   return (neuron0x1db1a60()*-0.198559);
}

double NNfunction_NN_2_5::synapse0x1db08a0() {
   return (neuron0x1daeb40()*1.18062);
}

double NNfunction_NN_2_5::synapse0x1db1340() {
   return (neuron0x1db3610()*1.22316);
}

double NNfunction_NN_2_5::synapse0x1db1380() {
   return (neuron0x1db3fe0()*-0.273893);
}

double NNfunction_NN_2_5::synapse0x1db1d10() {
   return (neuron0x1db49b0()*0.769217);
}

double NNfunction_NN_2_5::synapse0x1db1d50() {
   return (neuron0x1db5380()*-0.0475052);
}

double NNfunction_NN_2_5::synapse0x1daedf0() {
   return (neuron0x1db7190()*0.775079);
}

double NNfunction_NN_2_5::synapse0x1daee30() {
   return (neuron0x1db7470()*1.45805);
}

double NNfunction_NN_2_5::synapse0x1db38c0() {
   return (neuron0x1db7e40()*-0.0199083);
}

double NNfunction_NN_2_5::synapse0x1db3900() {
   return (neuron0x1db8810()*1.20175);
}

double NNfunction_NN_2_5::synapse0x1db4290() {
   return (neuron0x1db91e0()*-0.362836);
}

double NNfunction_NN_2_5::synapse0x1db42d0() {
   return (neuron0x1db9bb0()*-0.866303);
}

double NNfunction_NN_2_5::synapse0x1db4c60() {
   return (neuron0x1db2700()*0.91157);
}

double NNfunction_NN_2_5::synapse0x1db4ca0() {
   return (neuron0x1db30d0()*-0.6344);
}

double NNfunction_NN_2_5::synapse0x1db5630() {
   return (neuron0x1dbc940()*0.255087);
}

double NNfunction_NN_2_5::synapse0x1db5670() {
   return (neuron0x1dbd310()*0.47823);
}

double NNfunction_NN_2_5::synapse0x1da97a0() {
   return (neuron0x1dbdce0()*1.33248);
}

double NNfunction_NN_2_5::synapse0x1da97e0() {
   return (neuron0x1dbe6b0()*0.495979);
}

double NNfunction_NN_2_5::synapse0x1db7720() {
   return (neuron0x1dbf080()*-0.53626);
}

double NNfunction_NN_2_5::synapse0x1db7760() {
   return (neuron0x1dbfa50()*0.763617);
}

double NNfunction_NN_2_5::synapse0x1db80f0() {
   return (neuron0x1dc0420()*0.241489);
}

double NNfunction_NN_2_5::synapse0x1db8130() {
   return (neuron0x1dc0df0()*0.178844);
}

double NNfunction_NN_2_5::synapse0x1db8ac0() {
   return (neuron0x1db6e80()*-0.408585);
}

double NNfunction_NN_2_5::synapse0x1db8b00() {
   return (neuron0x1dc39d0()*-0.176935);
}

double NNfunction_NN_2_5::synapse0x1db9490() {
   return (neuron0x1dc43a0()*-0.999317);
}

double NNfunction_NN_2_5::synapse0x1db94d0() {
   return (neuron0x1dc4d70()*-0.0434106);
}

double NNfunction_NN_2_5::synapse0x1db9e60() {
   return (neuron0x1dc5740()*-0.490845);
}

double NNfunction_NN_2_5::synapse0x1db9ea0() {
   return (neuron0x1dc6110()*0.203709);
}

double NNfunction_NN_2_5::synapse0x1db29b0() {
   return (neuron0x1dc6ae0()*0.14869);
}

double NNfunction_NN_2_5::synapse0x1db29f0() {
   return (neuron0x1dc74b0()*-0.617414);
}

double NNfunction_NN_2_5::synapse0x1dbc260() {
   return (neuron0x1dc7e80()*-0.0626185);
}

double NNfunction_NN_2_5::synapse0x1dbc2a0() {
   return (neuron0x1dc8a60()*0.506962);
}

double NNfunction_NN_2_5::synapse0x1dbcbf0() {
   return (neuron0x1dc9430()*0.280435);
}

double NNfunction_NN_2_5::synapse0x1dbcc30() {
   return (neuron0x1dba2b0()*0.523098);
}

double NNfunction_NN_2_5::synapse0x1dbd5c0() {
   return (neuron0x1dbac80()*0.391716);
}

double NNfunction_NN_2_5::synapse0x1dbd600() {
   return (neuron0x1dbb650()*-0.29895);
}

double NNfunction_NN_2_5::synapse0x1dbdf90() {
   return (neuron0x1dcdc90()*0.801067);
}

double NNfunction_NN_2_5::synapse0x1dbdfd0() {
   return (neuron0x1dce540()*0.852017);
}

double NNfunction_NN_2_5::synapse0x1dbe960() {
   return (neuron0x1dcef10()*-0.63021);
}

double NNfunction_NN_2_5::synapse0x1dbe9a0() {
   return (neuron0x1dcf8e0()*0.233525);
}

double NNfunction_NN_2_5::synapse0x1dc10a0() {
   return (neuron0x1dab860()*-0.842016);
}

double NNfunction_NN_2_5::synapse0x1dc10e0() {
   return (neuron0x1dac170()*0.34027);
}

double NNfunction_NN_2_5::synapse0x1db6660() {
   return (neuron0x1dacc50()*3.03173);
}

double NNfunction_NN_2_5::synapse0x1db66a0() {
   return (neuron0x1b664e0()*1.40648);
}

double NNfunction_NN_2_5::synapse0x1dc3c80() {
   return (neuron0x1dada70()*3.42145);
}

double NNfunction_NN_2_5::synapse0x1dc3cc0() {
   return (neuron0x1dae440()*0.47185);
}

double NNfunction_NN_2_5::synapse0x1dc4650() {
   return (neuron0x1daf210()*-0.648669);
}

double NNfunction_NN_2_5::synapse0x1dc4690() {
   return (neuron0x1dafbe0()*0.0284086);
}

double NNfunction_NN_2_5::synapse0x1dc5020() {
   return (neuron0x1db05b0()*-0.277918);
}

double NNfunction_NN_2_5::synapse0x1dc5060() {
   return (neuron0x1db1090()*-0.903905);
}

double NNfunction_NN_2_5::synapse0x1dc59f0() {
   return (neuron0x1db1a60()*-0.797348);
}

double NNfunction_NN_2_5::synapse0x1dc5a30() {
   return (neuron0x1daeb40()*-0.608712);
}

double NNfunction_NN_2_5::synapse0x1dc63c0() {
   return (neuron0x1db3610()*2.58634);
}

double NNfunction_NN_2_5::synapse0x1dc6400() {
   return (neuron0x1db3fe0()*-1.10219);
}

double NNfunction_NN_2_5::synapse0x1dc6d90() {
   return (neuron0x1db49b0()*0.031616);
}

double NNfunction_NN_2_5::synapse0x1dc6dd0() {
   return (neuron0x1db5380()*2.21571);
}

double NNfunction_NN_2_5::synapse0x1dc7760() {
   return (neuron0x1db7190()*1.74409);
}

double NNfunction_NN_2_5::synapse0x1dc77a0() {
   return (neuron0x1db7470()*0.501645);
}

double NNfunction_NN_2_5::synapse0x1dc8130() {
   return (neuron0x1db7e40()*-2.45539);
}

double NNfunction_NN_2_5::synapse0x1dc8170() {
   return (neuron0x1db8810()*0.0657928);
}

double NNfunction_NN_2_5::synapse0x1dc8d10() {
   return (neuron0x1db91e0()*0.00604012);
}

double NNfunction_NN_2_5::synapse0x1dc8d50() {
   return (neuron0x1db9bb0()*-2.39184);
}

double NNfunction_NN_2_5::synapse0x1dc96e0() {
   return (neuron0x1db2700()*2.87806);
}

double NNfunction_NN_2_5::synapse0x1dc9720() {
   return (neuron0x1db30d0()*0.23047);
}

double NNfunction_NN_2_5::synapse0x1dba560() {
   return (neuron0x1dbc940()*-0.882153);
}

double NNfunction_NN_2_5::synapse0x1dba5a0() {
   return (neuron0x1dbd310()*0.00451138);
}

double NNfunction_NN_2_5::synapse0x1dbaf30() {
   return (neuron0x1dbdce0()*1.3586);
}

double NNfunction_NN_2_5::synapse0x1dbaf70() {
   return (neuron0x1dbe6b0()*-0.762687);
}

double NNfunction_NN_2_5::synapse0x1dbb900() {
   return (neuron0x1dbf080()*-0.219131);
}

double NNfunction_NN_2_5::synapse0x1dbb940() {
   return (neuron0x1dbfa50()*1.76815);
}

double NNfunction_NN_2_5::synapse0x1dcde20() {
   return (neuron0x1dc0420()*-2.09185);
}

double NNfunction_NN_2_5::synapse0x1dcde60() {
   return (neuron0x1dc0df0()*-2.63966);
}

double NNfunction_NN_2_5::synapse0x1dce7f0() {
   return (neuron0x1db6e80()*0.0405363);
}

double NNfunction_NN_2_5::synapse0x1dce830() {
   return (neuron0x1dc39d0()*-0.3384);
}

double NNfunction_NN_2_5::synapse0x1dcf1c0() {
   return (neuron0x1dc43a0()*-2.84968);
}

double NNfunction_NN_2_5::synapse0x1dcf200() {
   return (neuron0x1dc4d70()*-2.33199);
}

double NNfunction_NN_2_5::synapse0x1dcfb90() {
   return (neuron0x1dc5740()*0.599795);
}

double NNfunction_NN_2_5::synapse0x1dcfbd0() {
   return (neuron0x1dc6110()*0.836919);
}

double NNfunction_NN_2_5::synapse0x1daba80() {
   return (neuron0x1dc6ae0()*0.0369712);
}

double NNfunction_NN_2_5::synapse0x1dabac0() {
   return (neuron0x1dc74b0()*-0.0238679);
}

double NNfunction_NN_2_5::synapse0x1dbf330() {
   return (neuron0x1dc7e80()*-0.571994);
}

double NNfunction_NN_2_5::synapse0x1dbf370() {
   return (neuron0x1dc8a60()*-1.29626);
}

double NNfunction_NN_2_5::synapse0x1dd02b0() {
   return (neuron0x1dc9430()*0.022236);
}

double NNfunction_NN_2_5::synapse0x1dd02f0() {
   return (neuron0x1dba2b0()*2.89355);
}

double NNfunction_NN_2_5::synapse0x1dd0330() {
   return (neuron0x1dbac80()*0.0471694);
}

double NNfunction_NN_2_5::synapse0x1dd0370() {
   return (neuron0x1dbb650()*0.0362005);
}

double NNfunction_NN_2_5::synapse0x1dd7220() {
   return (neuron0x1dcdc90()*2.04074);
}

double NNfunction_NN_2_5::synapse0x1dd7260() {
   return (neuron0x1dce540()*-2.6693);
}

double NNfunction_NN_2_5::synapse0x1dd72a0() {
   return (neuron0x1dcef10()*-1.80609);
}

double NNfunction_NN_2_5::synapse0x1dd72e0() {
   return (neuron0x1dcf8e0()*0.00264729);
}

double NNfunction_NN_2_5::synapse0x1dd7660() {
   return (neuron0x1dab860()*1.32514);
}

double NNfunction_NN_2_5::synapse0x1dd76a0() {
   return (neuron0x1dac170()*0.601372);
}

double NNfunction_NN_2_5::synapse0x1dd76e0() {
   return (neuron0x1dacc50()*-1.23185);
}

double NNfunction_NN_2_5::synapse0x1dd7720() {
   return (neuron0x1b664e0()*2.71326);
}

double NNfunction_NN_2_5::synapse0x1dd7760() {
   return (neuron0x1dada70()*-0.968988);
}

double NNfunction_NN_2_5::synapse0x1dd77a0() {
   return (neuron0x1dae440()*0.284378);
}

double NNfunction_NN_2_5::synapse0x1dd77e0() {
   return (neuron0x1daf210()*1.38477);
}

double NNfunction_NN_2_5::synapse0x1dd7820() {
   return (neuron0x1dafbe0()*-0.703389);
}

double NNfunction_NN_2_5::synapse0x1dd7860() {
   return (neuron0x1db05b0()*2.39489);
}

double NNfunction_NN_2_5::synapse0x1dd78a0() {
   return (neuron0x1db1090()*2.50158);
}

double NNfunction_NN_2_5::synapse0x1dd78e0() {
   return (neuron0x1db1a60()*0.207658);
}

double NNfunction_NN_2_5::synapse0x1dd7920() {
   return (neuron0x1daeb40()*0.117246);
}

double NNfunction_NN_2_5::synapse0x1dd7960() {
   return (neuron0x1db3610()*-0.641447);
}

double NNfunction_NN_2_5::synapse0x1dd79a0() {
   return (neuron0x1db3fe0()*-1.00199);
}

double NNfunction_NN_2_5::synapse0x1dd79e0() {
   return (neuron0x1db49b0()*-0.612021);
}

double NNfunction_NN_2_5::synapse0x1dd7a20() {
   return (neuron0x1db5380()*-0.638069);
}

double NNfunction_NN_2_5::synapse0x1dd74b0() {
   return (neuron0x1db7190()*-0.260448);
}

double NNfunction_NN_2_5::synapse0x1dd74f0() {
   return (neuron0x1db7470()*-1.50754);
}

double NNfunction_NN_2_5::synapse0x1dd7b70() {
   return (neuron0x1db7e40()*0.674912);
}

double NNfunction_NN_2_5::synapse0x1dd7bb0() {
   return (neuron0x1db8810()*0.764717);
}

double NNfunction_NN_2_5::synapse0x1dd7bf0() {
   return (neuron0x1db91e0()*2.07607);
}

double NNfunction_NN_2_5::synapse0x1dd7c30() {
   return (neuron0x1db9bb0()*1.64327);
}

double NNfunction_NN_2_5::synapse0x1dd7c70() {
   return (neuron0x1db2700()*0.901094);
}

double NNfunction_NN_2_5::synapse0x1dd7cb0() {
   return (neuron0x1db30d0()*0.850511);
}

double NNfunction_NN_2_5::synapse0x1dd7cf0() {
   return (neuron0x1dbc940()*1.10059);
}

double NNfunction_NN_2_5::synapse0x1dd7d30() {
   return (neuron0x1dbd310()*0.660388);
}

double NNfunction_NN_2_5::synapse0x1dd7d70() {
   return (neuron0x1dbdce0()*-1.15882);
}

double NNfunction_NN_2_5::synapse0x1dd7db0() {
   return (neuron0x1dbe6b0()*-0.421554);
}

double NNfunction_NN_2_5::synapse0x1dd7df0() {
   return (neuron0x1dbf080()*0.951303);
}

double NNfunction_NN_2_5::synapse0x1dd7e30() {
   return (neuron0x1dbfa50()*-0.309312);
}

double NNfunction_NN_2_5::synapse0x1dd7e70() {
   return (neuron0x1dc0420()*0.662192);
}

double NNfunction_NN_2_5::synapse0x1dd7eb0() {
   return (neuron0x1dc0df0()*-0.650341);
}

double NNfunction_NN_2_5::synapse0x1dd7a60() {
   return (neuron0x1db6e80()*-1.5798);
}

double NNfunction_NN_2_5::synapse0x1dd7aa0() {
   return (neuron0x1dc39d0()*-0.621862);
}

double NNfunction_NN_2_5::synapse0x1dd7ae0() {
   return (neuron0x1dc43a0()*1.16752);
}

double NNfunction_NN_2_5::synapse0x1dd7b20() {
   return (neuron0x1dc4d70()*0.183363);
}

double NNfunction_NN_2_5::synapse0x1dd8100() {
   return (neuron0x1dc5740()*4.83358);
}

double NNfunction_NN_2_5::synapse0x1dd8140() {
   return (neuron0x1dc6110()*-0.55998);
}

double NNfunction_NN_2_5::synapse0x1dd8180() {
   return (neuron0x1dc6ae0()*-1.29045);
}

double NNfunction_NN_2_5::synapse0x1dd81c0() {
   return (neuron0x1dc74b0()*1.31482);
}

double NNfunction_NN_2_5::synapse0x1dd8200() {
   return (neuron0x1dc7e80()*-1.38743);
}

double NNfunction_NN_2_5::synapse0x1dd8240() {
   return (neuron0x1dc8a60()*-0.393621);
}

double NNfunction_NN_2_5::synapse0x1dd8280() {
   return (neuron0x1dc9430()*-0.795112);
}

double NNfunction_NN_2_5::synapse0x1dd82c0() {
   return (neuron0x1dba2b0()*1.4426);
}

double NNfunction_NN_2_5::synapse0x1dd8300() {
   return (neuron0x1dbac80()*-1.07086);
}

double NNfunction_NN_2_5::synapse0x1dd8340() {
   return (neuron0x1dbb650()*-0.892829);
}

double NNfunction_NN_2_5::synapse0x1dd8380() {
   return (neuron0x1dcdc90()*-2.96364);
}

double NNfunction_NN_2_5::synapse0x1dd83c0() {
   return (neuron0x1dce540()*3.54208);
}

double NNfunction_NN_2_5::synapse0x1dd8400() {
   return (neuron0x1dcef10()*-0.44291);
}

double NNfunction_NN_2_5::synapse0x1dd8440() {
   return (neuron0x1dcf8e0()*-1.0507);
}

double NNfunction_NN_2_5::synapse0x1dd87c0() {
   return (neuron0x1dab860()*-0.391219);
}

double NNfunction_NN_2_5::synapse0x1dd8800() {
   return (neuron0x1dac170()*-0.730131);
}

double NNfunction_NN_2_5::synapse0x1dd8840() {
   return (neuron0x1dacc50()*0.829324);
}

double NNfunction_NN_2_5::synapse0x1dd8880() {
   return (neuron0x1b664e0()*-0.032121);
}

double NNfunction_NN_2_5::synapse0x1dd88c0() {
   return (neuron0x1dada70()*-0.238472);
}

double NNfunction_NN_2_5::synapse0x1dd8900() {
   return (neuron0x1dae440()*-0.15449);
}

double NNfunction_NN_2_5::synapse0x1dd8940() {
   return (neuron0x1daf210()*0.0506373);
}

double NNfunction_NN_2_5::synapse0x1dd8980() {
   return (neuron0x1dafbe0()*0.167631);
}

double NNfunction_NN_2_5::synapse0x1dd89c0() {
   return (neuron0x1db05b0()*-1.41197);
}

double NNfunction_NN_2_5::synapse0x1dd8a00() {
   return (neuron0x1db1090()*-0.00330561);
}

double NNfunction_NN_2_5::synapse0x1dd8a40() {
   return (neuron0x1db1a60()*-0.355026);
}

double NNfunction_NN_2_5::synapse0x1dd8a80() {
   return (neuron0x1daeb40()*0.255194);
}

double NNfunction_NN_2_5::synapse0x1dd8ac0() {
   return (neuron0x1db3610()*0.134995);
}

double NNfunction_NN_2_5::synapse0x1dd8b00() {
   return (neuron0x1db3fe0()*-1.1426);
}

double NNfunction_NN_2_5::synapse0x1dd8b40() {
   return (neuron0x1db49b0()*-0.187272);
}

double NNfunction_NN_2_5::synapse0x1dd8b80() {
   return (neuron0x1db5380()*-0.968377);
}

double NNfunction_NN_2_5::synapse0x1dd8610() {
   return (neuron0x1db7190()*-0.192039);
}

double NNfunction_NN_2_5::synapse0x1dd8650() {
   return (neuron0x1db7470()*-0.280145);
}

double NNfunction_NN_2_5::synapse0x1dd8cd0() {
   return (neuron0x1db7e40()*-0.443233);
}

double NNfunction_NN_2_5::synapse0x1dd8d10() {
   return (neuron0x1db8810()*-0.440166);
}

double NNfunction_NN_2_5::synapse0x1dd8d50() {
   return (neuron0x1db91e0()*-0.0655535);
}

double NNfunction_NN_2_5::synapse0x1dd8d90() {
   return (neuron0x1db9bb0()*-1.00471);
}

double NNfunction_NN_2_5::synapse0x1dd8dd0() {
   return (neuron0x1db2700()*-0.228968);
}

double NNfunction_NN_2_5::synapse0x1dd8e10() {
   return (neuron0x1db30d0()*-0.704422);
}

double NNfunction_NN_2_5::synapse0x1dd8e50() {
   return (neuron0x1dbc940()*-0.867486);
}

double NNfunction_NN_2_5::synapse0x1dd8e90() {
   return (neuron0x1dbd310()*-0.931357);
}

double NNfunction_NN_2_5::synapse0x1dd8ed0() {
   return (neuron0x1dbdce0()*0.0431788);
}

double NNfunction_NN_2_5::synapse0x1dd8f10() {
   return (neuron0x1dbe6b0()*-0.0989613);
}

double NNfunction_NN_2_5::synapse0x1dd8f50() {
   return (neuron0x1dbf080()*-0.985527);
}

double NNfunction_NN_2_5::synapse0x1dd8f90() {
   return (neuron0x1dbfa50()*0.059774);
}

double NNfunction_NN_2_5::synapse0x1dd8fd0() {
   return (neuron0x1dc0420()*0.204405);
}

double NNfunction_NN_2_5::synapse0x1dd9010() {
   return (neuron0x1dc0df0()*-1.11157);
}

double NNfunction_NN_2_5::synapse0x1dd8bc0() {
   return (neuron0x1db6e80()*-1.28172);
}

double NNfunction_NN_2_5::synapse0x1dd8c00() {
   return (neuron0x1dc39d0()*-0.688459);
}

double NNfunction_NN_2_5::synapse0x1dd8c40() {
   return (neuron0x1dc43a0()*-1.49084);
}

double NNfunction_NN_2_5::synapse0x1dd8c80() {
   return (neuron0x1dc4d70()*-0.475374);
}

double NNfunction_NN_2_5::synapse0x1dd9260() {
   return (neuron0x1dc5740()*-1.24461);
}

double NNfunction_NN_2_5::synapse0x1dd92a0() {
   return (neuron0x1dc6110()*-1.17034);
}

double NNfunction_NN_2_5::synapse0x1dd92e0() {
   return (neuron0x1dc6ae0()*-0.411556);
}

double NNfunction_NN_2_5::synapse0x1dd9320() {
   return (neuron0x1dc74b0()*-0.703012);
}

double NNfunction_NN_2_5::synapse0x1dd9360() {
   return (neuron0x1dc7e80()*-0.84843);
}

double NNfunction_NN_2_5::synapse0x1dd93a0() {
   return (neuron0x1dc8a60()*-0.708859);
}

double NNfunction_NN_2_5::synapse0x1dd93e0() {
   return (neuron0x1dc9430()*-0.843472);
}

double NNfunction_NN_2_5::synapse0x1dd9420() {
   return (neuron0x1dba2b0()*0.468647);
}

double NNfunction_NN_2_5::synapse0x1dd9460() {
   return (neuron0x1dbac80()*-0.484329);
}

double NNfunction_NN_2_5::synapse0x1dd94a0() {
   return (neuron0x1dbb650()*-0.404273);
}

double NNfunction_NN_2_5::synapse0x1dd94e0() {
   return (neuron0x1dcdc90()*0.412438);
}

double NNfunction_NN_2_5::synapse0x1dd9520() {
   return (neuron0x1dce540()*0.735069);
}

double NNfunction_NN_2_5::synapse0x1dd9560() {
   return (neuron0x1dcef10()*-0.73813);
}

double NNfunction_NN_2_5::synapse0x1dd95a0() {
   return (neuron0x1dcf8e0()*-0.791392);
}

double NNfunction_NN_2_5::synapse0x1dd9920() {
   return (neuron0x1dab860()*-0.378891);
}

double NNfunction_NN_2_5::synapse0x1dd9960() {
   return (neuron0x1dac170()*0.122839);
}

double NNfunction_NN_2_5::synapse0x1dd99a0() {
   return (neuron0x1dacc50()*1.58356);
}

double NNfunction_NN_2_5::synapse0x1dd99e0() {
   return (neuron0x1b664e0()*0.569331);
}

double NNfunction_NN_2_5::synapse0x1dd9a20() {
   return (neuron0x1dada70()*0.351073);
}

double NNfunction_NN_2_5::synapse0x1dd9a60() {
   return (neuron0x1dae440()*1.81533);
}

double NNfunction_NN_2_5::synapse0x1dd9aa0() {
   return (neuron0x1daf210()*-0.0768666);
}

double NNfunction_NN_2_5::synapse0x1dd9ae0() {
   return (neuron0x1dafbe0()*-0.00684358);
}

double NNfunction_NN_2_5::synapse0x1dd9b20() {
   return (neuron0x1db05b0()*0.399091);
}

double NNfunction_NN_2_5::synapse0x1dd9b60() {
   return (neuron0x1db1090()*0.445091);
}

double NNfunction_NN_2_5::synapse0x1dd9ba0() {
   return (neuron0x1db1a60()*0.0494927);
}

double NNfunction_NN_2_5::synapse0x1dd9be0() {
   return (neuron0x1daeb40()*0.316343);
}

double NNfunction_NN_2_5::synapse0x1dd9c20() {
   return (neuron0x1db3610()*3.58503);
}

double NNfunction_NN_2_5::synapse0x1dd9c60() {
   return (neuron0x1db3fe0()*1.36831);
}

double NNfunction_NN_2_5::synapse0x1dd9ca0() {
   return (neuron0x1db49b0()*0.0243409);
}

double NNfunction_NN_2_5::synapse0x1dd9ce0() {
   return (neuron0x1db5380()*0.501806);
}

double NNfunction_NN_2_5::synapse0x1dd9770() {
   return (neuron0x1db7190()*1.30729);
}

double NNfunction_NN_2_5::synapse0x1dd97b0() {
   return (neuron0x1db7470()*2.10464);
}

double NNfunction_NN_2_5::synapse0x1dd9e30() {
   return (neuron0x1db7e40()*-0.564351);
}

double NNfunction_NN_2_5::synapse0x1dd9e70() {
   return (neuron0x1db8810()*-0.251852);
}

double NNfunction_NN_2_5::synapse0x1dd9eb0() {
   return (neuron0x1db91e0()*-0.0183571);
}

double NNfunction_NN_2_5::synapse0x1dd9ef0() {
   return (neuron0x1db9bb0()*-1.47989);
}

double NNfunction_NN_2_5::synapse0x1dd9f30() {
   return (neuron0x1db2700()*0.59393);
}

double NNfunction_NN_2_5::synapse0x1dd9f70() {
   return (neuron0x1db30d0()*-1.16211);
}

double NNfunction_NN_2_5::synapse0x1dd9fb0() {
   return (neuron0x1dbc940()*-1.58582);
}

double NNfunction_NN_2_5::synapse0x1dd9ff0() {
   return (neuron0x1dbd310()*0.014125);
}

double NNfunction_NN_2_5::synapse0x1dda030() {
   return (neuron0x1dbdce0()*0.129373);
}

double NNfunction_NN_2_5::synapse0x1dda070() {
   return (neuron0x1dbe6b0()*0.4269);
}

double NNfunction_NN_2_5::synapse0x1dda0b0() {
   return (neuron0x1dbf080()*-0.382792);
}

double NNfunction_NN_2_5::synapse0x1dda0f0() {
   return (neuron0x1dbfa50()*1.08845);
}

double NNfunction_NN_2_5::synapse0x1dda130() {
   return (neuron0x1dc0420()*-0.386644);
}

double NNfunction_NN_2_5::synapse0x1dda170() {
   return (neuron0x1dc0df0()*-0.510424);
}

double NNfunction_NN_2_5::synapse0x1dd9d20() {
   return (neuron0x1db6e80()*-0.0187478);
}

double NNfunction_NN_2_5::synapse0x1dd9d60() {
   return (neuron0x1dc39d0()*-0.685144);
}

double NNfunction_NN_2_5::synapse0x1dd9da0() {
   return (neuron0x1dc43a0()*-1.34898);
}

double NNfunction_NN_2_5::synapse0x1dd9de0() {
   return (neuron0x1dc4d70()*-0.796611);
}

double NNfunction_NN_2_5::synapse0x1dda3c0() {
   return (neuron0x1dc5740()*-0.616558);
}

double NNfunction_NN_2_5::synapse0x1dda400() {
   return (neuron0x1dc6110()*-0.602529);
}

double NNfunction_NN_2_5::synapse0x1dda440() {
   return (neuron0x1dc6ae0()*-0.0472753);
}

double NNfunction_NN_2_5::synapse0x1dda480() {
   return (neuron0x1dc74b0()*0.0933227);
}

double NNfunction_NN_2_5::synapse0x1dda4c0() {
   return (neuron0x1dc7e80()*0.439955);
}

double NNfunction_NN_2_5::synapse0x1dda500() {
   return (neuron0x1dc8a60()*-0.273775);
}

double NNfunction_NN_2_5::synapse0x1dda540() {
   return (neuron0x1dc9430()*-0.00279417);
}

double NNfunction_NN_2_5::synapse0x1dda580() {
   return (neuron0x1dba2b0()*1.55664);
}

double NNfunction_NN_2_5::synapse0x1dda5c0() {
   return (neuron0x1dbac80()*0.00138182);
}

double NNfunction_NN_2_5::synapse0x1dda600() {
   return (neuron0x1dbb650()*0.0184963);
}

double NNfunction_NN_2_5::synapse0x1dda640() {
   return (neuron0x1dcdc90()*4.16255);
}

double NNfunction_NN_2_5::synapse0x1dda680() {
   return (neuron0x1dce540()*-2.08792);
}

double NNfunction_NN_2_5::synapse0x1dda6c0() {
   return (neuron0x1dcef10()*-5.1037);
}

double NNfunction_NN_2_5::synapse0x1dda700() {
   return (neuron0x1dcf8e0()*-0.0316502);
}

double NNfunction_NN_2_5::synapse0x1dab820() {
   return (neuron0x1dd6ae0()*1.0277);
}

double NNfunction_NN_2_5::synapse0x1dda960() {
   return (neuron0x1dd6e80()*-9.02314);
}

double NNfunction_NN_2_5::synapse0x1dda9a0() {
   return (neuron0x1dd7320()*-5.93437);
}

double NNfunction_NN_2_5::synapse0x1dda9e0() {
   return (neuron0x1dd8480()*2.14288);
}

double NNfunction_NN_2_5::synapse0x1ddaa20() {
   return (neuron0x1dd95e0()*10.0162);
}

