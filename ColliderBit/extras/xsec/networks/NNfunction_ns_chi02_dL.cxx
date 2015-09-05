#include "NNfunction_ns_chi02_dL.h"
#include <cmath>

double NNfunction_ns_chi02_dL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2381)/15.1121;
   input1 = (in1 - 45.4865)/846.809;
   input2 = (in2 - 407.185)/461.226;
   input3 = (in3 - 213.459)/725.304;
   input4 = (in4 - 887.916)/783.738;
   input5 = (in5 - 779.913)/775.375;
   input6 = (in6 - 776.666)/769.946;
   input7 = (in7 - 777.749)/757.426;
   input8 = (in8 - 783.914)/802.152;
   input9 = (in9 - 777.76)/792.34;
   input10 = (in10 - 788.442)/796.296;
   input11 = (in11 - 472.794)/382.781;
   input12 = (in12 - 760.546)/698.608;
   input13 = (in13 - 567.122)/434.381;
   input14 = (in14 - 749.214)/652.839;
   input15 = (in15 - 753.859)/656.397;
   input16 = (in16 - 528.495)/446.43;
   input17 = (in17 - 778.142)/724.74;
   input18 = (in18 - 779.86)/727.532;
   input19 = (in19 - 779.267)/697.999;
   input20 = (in20 - -167.752)/470.52;
   input21 = (in21 - -219.413)/1020.19;
   input22 = (in22 - -3.07984)/1019.89;
   input23 = (in23 - -32.0324)/524.955;
   switch(index) {
     case 0:
         return neuron0x3d0db90();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_dL::Value(int index, double* input) {
   input0 = (input[0] - 23.2381)/15.1121;
   input1 = (input[1] - 45.4865)/846.809;
   input2 = (input[2] - 407.185)/461.226;
   input3 = (input[3] - 213.459)/725.304;
   input4 = (input[4] - 887.916)/783.738;
   input5 = (input[5] - 779.913)/775.375;
   input6 = (input[6] - 776.666)/769.946;
   input7 = (input[7] - 777.749)/757.426;
   input8 = (input[8] - 783.914)/802.152;
   input9 = (input[9] - 777.76)/792.34;
   input10 = (input[10] - 788.442)/796.296;
   input11 = (input[11] - 472.794)/382.781;
   input12 = (input[12] - 760.546)/698.608;
   input13 = (input[13] - 567.122)/434.381;
   input14 = (input[14] - 749.214)/652.839;
   input15 = (input[15] - 753.859)/656.397;
   input16 = (input[16] - 528.495)/446.43;
   input17 = (input[17] - 778.142)/724.74;
   input18 = (input[18] - 779.86)/727.532;
   input19 = (input[19] - 779.267)/697.999;
   input20 = (input[20] - -167.752)/470.52;
   input21 = (input[21] - -219.413)/1020.19;
   input22 = (input[22] - -3.07984)/1019.89;
   input23 = (input[23] - -32.0324)/524.955;
   switch(index) {
     case 0:
         return neuron0x3d0db90();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi02_dL::neuron0x3cd9d50() {
   return input0;
}

double NNfunction_ns_chi02_dL::neuron0x3cda000() {
   return input1;
}

double NNfunction_ns_chi02_dL::neuron0x3cda340() {
   return input2;
}

double NNfunction_ns_chi02_dL::neuron0x3cda680() {
   return input3;
}

double NNfunction_ns_chi02_dL::neuron0x3cda9c0() {
   return input4;
}

double NNfunction_ns_chi02_dL::neuron0x3cdad00() {
   return input5;
}

double NNfunction_ns_chi02_dL::neuron0x3cdb040() {
   return input6;
}

double NNfunction_ns_chi02_dL::neuron0x3cdb380() {
   return input7;
}

double NNfunction_ns_chi02_dL::neuron0x3cdb6c0() {
   return input8;
}

double NNfunction_ns_chi02_dL::neuron0x3cdba00() {
   return input9;
}

double NNfunction_ns_chi02_dL::neuron0x3cdbd40() {
   return input10;
}

double NNfunction_ns_chi02_dL::neuron0x3cdc080() {
   return input11;
}

double NNfunction_ns_chi02_dL::neuron0x3cdc3c0() {
   return input12;
}

double NNfunction_ns_chi02_dL::neuron0x3cdc700() {
   return input13;
}

double NNfunction_ns_chi02_dL::neuron0x3cdca40() {
   return input14;
}

double NNfunction_ns_chi02_dL::neuron0x3cdcd80() {
   return input15;
}

double NNfunction_ns_chi02_dL::neuron0x3cdd0c0() {
   return input16;
}

double NNfunction_ns_chi02_dL::neuron0x3cdd620() {
   return input17;
}

double NNfunction_ns_chi02_dL::neuron0x3cdd840() {
   return input18;
}

double NNfunction_ns_chi02_dL::neuron0x3cddb80() {
   return input19;
}

double NNfunction_ns_chi02_dL::neuron0x3cddec0() {
   return input20;
}

double NNfunction_ns_chi02_dL::neuron0x3cde200() {
   return input21;
}

double NNfunction_ns_chi02_dL::neuron0x3cde540() {
   return input22;
}

double NNfunction_ns_chi02_dL::neuron0x3cde880() {
   return input23;
}

double NNfunction_ns_chi02_dL::input0x3cdecf0() {
   double input = 0.630213;
   input += synapse0x3cd9cd0();
   input += synapse0x3cd9d10();
   input += synapse0x3cdefa0();
   input += synapse0x3cdefe0();
   input += synapse0x3cdf020();
   input += synapse0x3cdf060();
   input += synapse0x3cdf0a0();
   input += synapse0x3cdf0e0();
   input += synapse0x3cdf120();
   input += synapse0x3cdf160();
   input += synapse0x3cdf1a0();
   input += synapse0x3cdf1e0();
   input += synapse0x3cdf220();
   input += synapse0x3cdf260();
   input += synapse0x3cdf2a0();
   input += synapse0x3cdf2e0();
   input += synapse0x3cd9c40();
   input += synapse0x3cd9c80();
   input += synapse0x3a94e30();
   input += synapse0x3a94e70();
   input += synapse0x3cdf540();
   input += synapse0x3cdf580();
   input += synapse0x3cdf5c0();
   input += synapse0x3cdf600();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cdecf0() {
   double input = input0x3cdecf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cdf640() {
   double input = 0.1054;
   input += synapse0x3cdf980();
   input += synapse0x3cdf9c0();
   input += synapse0x3cdfa00();
   input += synapse0x3cdfa40();
   input += synapse0x3cdfa80();
   input += synapse0x3cdfac0();
   input += synapse0x3cdfb00();
   input += synapse0x3cdfb40();
   input += synapse0x3cdfb80();
   input += synapse0x3cdf430();
   input += synapse0x3cdf470();
   input += synapse0x3cdf4b0();
   input += synapse0x3cdf4f0();
   input += synapse0x3cdfdd0();
   input += synapse0x3cdfe10();
   input += synapse0x3cdfe50();
   input += synapse0x3cdf7d0();
   input += synapse0x3cdf810();
   input += synapse0x3cdffa0();
   input += synapse0x3cdffe0();
   input += synapse0x3ce0020();
   input += synapse0x3ce0060();
   input += synapse0x3ce00a0();
   input += synapse0x3ce00e0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cdf640() {
   double input = input0x3cdf640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ce0120() {
   double input = 0.329094;
   input += synapse0x3ce0460();
   input += synapse0x3ce04a0();
   input += synapse0x3ce04e0();
   input += synapse0x3ce0520();
   input += synapse0x3ce0560();
   input += synapse0x3ce05a0();
   input += synapse0x3ce05e0();
   input += synapse0x3ce0620();
   input += synapse0x3ce0660();
   input += synapse0x3ce06a0();
   input += synapse0x3ce06e0();
   input += synapse0x3ce0720();
   input += synapse0x3ce0760();
   input += synapse0x3ce07a0();
   input += synapse0x3ce07e0();
   input += synapse0x3ce0820();
   input += synapse0x3ce02b0();
   input += synapse0x3ce02f0();
   input += synapse0x3cc8dc0();
   input += synapse0x3aa2d10();
   input += synapse0x3aa2d50();
   input += synapse0x3bbe260();
   input += synapse0x3bbe2a0();
   input += synapse0x3cd9ab0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ce0120() {
   double input = input0x3ce0120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3aa3470() {
   double input = 0.607935;
   input += synapse0x3aa3600();
   input += synapse0x3cdfce0();
   input += synapse0x3cdfd20();
   input += synapse0x3cdfd60();
   input += synapse0x3ce0970();
   input += synapse0x3ce09b0();
   input += synapse0x3ce09f0();
   input += synapse0x3ce0a30();
   input += synapse0x3ce0a70();
   input += synapse0x3ce0ab0();
   input += synapse0x3ce0af0();
   input += synapse0x3ce0b30();
   input += synapse0x3ce0b70();
   input += synapse0x3ce0bb0();
   input += synapse0x3ce0bf0();
   input += synapse0x3ce0c30();
   input += synapse0x3cd9af0();
   input += synapse0x3cd9b30();
   input += synapse0x3cd9b70();
   input += synapse0x3ce0d80();
   input += synapse0x3ce0dc0();
   input += synapse0x3ce0e00();
   input += synapse0x3ce0e40();
   input += synapse0x3ce0e80();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3aa3470() {
   double input = input0x3aa3470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ce0ec0() {
   double input = -0.129107;
   input += synapse0x3ce1200();
   input += synapse0x3ce1240();
   input += synapse0x3ce1280();
   input += synapse0x3ce12c0();
   input += synapse0x3ce1300();
   input += synapse0x3ce1340();
   input += synapse0x3ce1380();
   input += synapse0x3ce13c0();
   input += synapse0x3ce1400();
   input += synapse0x3ce1440();
   input += synapse0x3ce1480();
   input += synapse0x3ce14c0();
   input += synapse0x3ce1500();
   input += synapse0x3ce1540();
   input += synapse0x3ce1580();
   input += synapse0x3ce15c0();
   input += synapse0x3ce1050();
   input += synapse0x3ce1090();
   input += synapse0x3ce1710();
   input += synapse0x3ce1750();
   input += synapse0x3ce1790();
   input += synapse0x3ce17d0();
   input += synapse0x3ce1810();
   input += synapse0x3ce1850();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ce0ec0() {
   double input = input0x3ce0ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ce1890() {
   double input = -1.09495;
   input += synapse0x3ce1bd0();
   input += synapse0x3ce1c10();
   input += synapse0x3ce1c50();
   input += synapse0x3ce1c90();
   input += synapse0x3ce1cd0();
   input += synapse0x3ce1d10();
   input += synapse0x3ce1d50();
   input += synapse0x3ce1d90();
   input += synapse0x3ce1dd0();
   input += synapse0x3aa3060();
   input += synapse0x3aa30a0();
   input += synapse0x3aa30e0();
   input += synapse0x3aa3120();
   input += synapse0x3aa3160();
   input += synapse0x3aa31a0();
   input += synapse0x3aa31e0();
   input += synapse0x3ce1a20();
   input += synapse0x3ce1a60();
   input += synapse0x3aa3330();
   input += synapse0x3aa3370();
   input += synapse0x3aa33b0();
   input += synapse0x3aa33f0();
   input += synapse0x3aa3430();
   input += synapse0x3ce2620();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ce1890() {
   double input = input0x3ce1890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ce2660() {
   double input = 0.387;
   input += synapse0x3ce29a0();
   input += synapse0x3ce29e0();
   input += synapse0x3ce2a20();
   input += synapse0x3ce2a60();
   input += synapse0x3ce2aa0();
   input += synapse0x3ce2ae0();
   input += synapse0x3ce2b20();
   input += synapse0x3ce2b60();
   input += synapse0x3ce2ba0();
   input += synapse0x3ce2be0();
   input += synapse0x3ce2c20();
   input += synapse0x3ce2c60();
   input += synapse0x3ce2ca0();
   input += synapse0x3ce2ce0();
   input += synapse0x3ce2d20();
   input += synapse0x3ce2d60();
   input += synapse0x3ce27f0();
   input += synapse0x3ce2830();
   input += synapse0x3ce2eb0();
   input += synapse0x3ce2ef0();
   input += synapse0x3ce2f30();
   input += synapse0x3ce2f70();
   input += synapse0x3ce2fb0();
   input += synapse0x3ce2ff0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ce2660() {
   double input = input0x3ce2660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ce3030() {
   double input = -2.43421;
   input += synapse0x3ce3370();
   input += synapse0x3ce33b0();
   input += synapse0x3ce33f0();
   input += synapse0x3ce3430();
   input += synapse0x3ce3470();
   input += synapse0x3ce34b0();
   input += synapse0x3ce34f0();
   input += synapse0x3ce3530();
   input += synapse0x3ce3570();
   input += synapse0x3ce35b0();
   input += synapse0x3ce35f0();
   input += synapse0x3ce3630();
   input += synapse0x3ce3670();
   input += synapse0x3ce36b0();
   input += synapse0x3ce36f0();
   input += synapse0x3ce3730();
   input += synapse0x3ce31c0();
   input += synapse0x3ce3200();
   input += synapse0x3ce3880();
   input += synapse0x3ce38c0();
   input += synapse0x3ce3900();
   input += synapse0x3ce3940();
   input += synapse0x3ce3980();
   input += synapse0x3ce39c0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ce3030() {
   double input = input0x3ce3030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ce3a00() {
   double input = 1.38925;
   input += synapse0x3cdd510();
   input += synapse0x3cdd550();
   input += synapse0x3cdd590();
   input += synapse0x3cdd5d0();
   input += synapse0x3ce3f50();
   input += synapse0x3ce3f90();
   input += synapse0x3ce3fd0();
   input += synapse0x3ce4010();
   input += synapse0x3ce4050();
   input += synapse0x3ce4090();
   input += synapse0x3ce40d0();
   input += synapse0x3ce4110();
   input += synapse0x3ce4150();
   input += synapse0x3ce4190();
   input += synapse0x3ce41d0();
   input += synapse0x3ce4210();
   input += synapse0x3ce3b90();
   input += synapse0x3ce3bd0();
   input += synapse0x3ce4360();
   input += synapse0x3ce43a0();
   input += synapse0x3ce43e0();
   input += synapse0x3ce4420();
   input += synapse0x3ce4460();
   input += synapse0x3ce44a0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ce3a00() {
   double input = input0x3ce3a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ce44e0() {
   double input = -0.817453;
   input += synapse0x3ce4820();
   input += synapse0x3ce4860();
   input += synapse0x3ce48a0();
   input += synapse0x3ce48e0();
   input += synapse0x3ce4920();
   input += synapse0x3ce4960();
   input += synapse0x3ce49a0();
   input += synapse0x3ce49e0();
   input += synapse0x3ce4a20();
   input += synapse0x3ce4a60();
   input += synapse0x3ce4aa0();
   input += synapse0x3ce4ae0();
   input += synapse0x3ce4b20();
   input += synapse0x3ce4b60();
   input += synapse0x3ce4ba0();
   input += synapse0x3ce4be0();
   input += synapse0x3ce4670();
   input += synapse0x3ce46b0();
   input += synapse0x3ce4d30();
   input += synapse0x3ce4d70();
   input += synapse0x3ce4db0();
   input += synapse0x3ce4df0();
   input += synapse0x3ce4e30();
   input += synapse0x3ce4e70();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ce44e0() {
   double input = input0x3ce44e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ce4eb0() {
   double input = -0.34107;
   input += synapse0x3ce51f0();
   input += synapse0x3ce5230();
   input += synapse0x3ce5270();
   input += synapse0x3ce52b0();
   input += synapse0x3ce52f0();
   input += synapse0x3ce5330();
   input += synapse0x3ce5370();
   input += synapse0x3ce53b0();
   input += synapse0x3ce53f0();
   input += synapse0x3ce5430();
   input += synapse0x3ce5470();
   input += synapse0x3ce54b0();
   input += synapse0x3ce54f0();
   input += synapse0x3ce5530();
   input += synapse0x3ce5570();
   input += synapse0x3ce55b0();
   input += synapse0x3ce5040();
   input += synapse0x3ce5080();
   input += synapse0x3ce1e10();
   input += synapse0x3ce1e50();
   input += synapse0x3ce1e90();
   input += synapse0x3ce1ed0();
   input += synapse0x3ce1f10();
   input += synapse0x3ce1f50();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ce4eb0() {
   double input = input0x3ce4eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ce1f90() {
   double input = -1.8413;
   input += synapse0x3ce22d0();
   input += synapse0x3ce2310();
   input += synapse0x3ce2350();
   input += synapse0x3ce2390();
   input += synapse0x3ce23d0();
   input += synapse0x3ce2410();
   input += synapse0x3ce2450();
   input += synapse0x3ce2490();
   input += synapse0x3ce24d0();
   input += synapse0x3ce2510();
   input += synapse0x3ce2550();
   input += synapse0x3ce2590();
   input += synapse0x3ce25d0();
   input += synapse0x3ce6710();
   input += synapse0x3ce6750();
   input += synapse0x3ce6790();
   input += synapse0x3ce2120();
   input += synapse0x3ce2160();
   input += synapse0x3ce68e0();
   input += synapse0x3ce6920();
   input += synapse0x3ce6960();
   input += synapse0x3ce69a0();
   input += synapse0x3ce69e0();
   input += synapse0x3ce6a20();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ce1f90() {
   double input = input0x3ce1f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ce6a60() {
   double input = 0.708299;
   input += synapse0x3ce6da0();
   input += synapse0x3ce6de0();
   input += synapse0x3ce6e20();
   input += synapse0x3ce6e60();
   input += synapse0x3ce6ea0();
   input += synapse0x3ce6ee0();
   input += synapse0x3ce6f20();
   input += synapse0x3ce6f60();
   input += synapse0x3ce6fa0();
   input += synapse0x3ce6fe0();
   input += synapse0x3ce7020();
   input += synapse0x3ce7060();
   input += synapse0x3ce70a0();
   input += synapse0x3ce70e0();
   input += synapse0x3ce7120();
   input += synapse0x3ce7160();
   input += synapse0x3ce6bf0();
   input += synapse0x3ce6c30();
   input += synapse0x3ce72b0();
   input += synapse0x3ce72f0();
   input += synapse0x3ce7330();
   input += synapse0x3ce7370();
   input += synapse0x3ce73b0();
   input += synapse0x3ce73f0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ce6a60() {
   double input = input0x3ce6a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ce7430() {
   double input = 0.631374;
   input += synapse0x3ce7770();
   input += synapse0x3ce77b0();
   input += synapse0x3ce77f0();
   input += synapse0x3ce7830();
   input += synapse0x3ce7870();
   input += synapse0x3ce78b0();
   input += synapse0x3ce78f0();
   input += synapse0x3ce7930();
   input += synapse0x3ce7970();
   input += synapse0x3ce79b0();
   input += synapse0x3ce79f0();
   input += synapse0x3ce7a30();
   input += synapse0x3ce7a70();
   input += synapse0x3ce7ab0();
   input += synapse0x3ce7af0();
   input += synapse0x3ce7b30();
   input += synapse0x3ce75c0();
   input += synapse0x3ce7600();
   input += synapse0x3ce7c80();
   input += synapse0x3ce7cc0();
   input += synapse0x3ce7d00();
   input += synapse0x3ce7d40();
   input += synapse0x3ce7d80();
   input += synapse0x3ce7dc0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ce7430() {
   double input = input0x3ce7430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ce7e00() {
   double input = -0.371842;
   input += synapse0x3ce8140();
   input += synapse0x3ce8180();
   input += synapse0x3ce81c0();
   input += synapse0x3ce8200();
   input += synapse0x3ce8240();
   input += synapse0x3ce8280();
   input += synapse0x3ce82c0();
   input += synapse0x3ce8300();
   input += synapse0x3ce8340();
   input += synapse0x3ce8380();
   input += synapse0x3ce83c0();
   input += synapse0x3ce8400();
   input += synapse0x3ce8440();
   input += synapse0x3ce8480();
   input += synapse0x3ce84c0();
   input += synapse0x3ce8500();
   input += synapse0x3ce7f90();
   input += synapse0x3ce7fd0();
   input += synapse0x3ce8650();
   input += synapse0x3ce8690();
   input += synapse0x3ce86d0();
   input += synapse0x3ce8710();
   input += synapse0x3ce8750();
   input += synapse0x3ce8790();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ce7e00() {
   double input = input0x3ce7e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ce87d0() {
   double input = 0.92333;
   input += synapse0x3ce8b10();
   input += synapse0x3cd9ee0();
   input += synapse0x3cd9f20();
   input += synapse0x3cda220();
   input += synapse0x3cda260();
   input += synapse0x3cda560();
   input += synapse0x3cda5a0();
   input += synapse0x3cda8a0();
   input += synapse0x3cda8e0();
   input += synapse0x3cdabe0();
   input += synapse0x3cdac20();
   input += synapse0x3cdaf20();
   input += synapse0x3cdaf60();
   input += synapse0x3cdb260();
   input += synapse0x3cdb2a0();
   input += synapse0x3cdb5a0();
   input += synapse0x3cdb5e0();
   input += synapse0x3cdb8e0();
   input += synapse0x3cdb920();
   input += synapse0x3cdbc20();
   input += synapse0x3cdbc60();
   input += synapse0x3cdbf60();
   input += synapse0x3cdbfa0();
   input += synapse0x3cdc2a0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ce87d0() {
   double input = input0x3ce87d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cea5e0() {
   double input = -0.0584799;
   input += synapse0x3cdc2e0();
   input += synapse0x3cdcfa0();
   input += synapse0x3cdcfe0();
   input += synapse0x3ce8960();
   input += synapse0x3ce89a0();
   input += synapse0x3cdd2e0();
   input += synapse0x3cdd320();
   input += synapse0x3cdda60();
   input += synapse0x3cddaa0();
   input += synapse0x3cddda0();
   input += synapse0x3cddde0();
   input += synapse0x3cde0e0();
   input += synapse0x3cde120();
   input += synapse0x3cde420();
   input += synapse0x3cde460();
   input += synapse0x3cde760();
   input += synapse0x3cde7a0();
   input += synapse0x3cdeaa0();
   input += synapse0x3cdeae0();
   input += synapse0x3cdc5e0();
   input += synapse0x3cdc620();
   input += synapse0x3a94120();
   input += synapse0x3a94160();
   input += synapse0x3cea880();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cea5e0() {
   double input = input0x3cea5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cea8c0() {
   double input = 1.47693;
   input += synapse0x3ceac00();
   input += synapse0x3ceac40();
   input += synapse0x3ceac80();
   input += synapse0x3ceacc0();
   input += synapse0x3cead00();
   input += synapse0x3cead40();
   input += synapse0x3cead80();
   input += synapse0x3ceadc0();
   input += synapse0x3ceae00();
   input += synapse0x3ceae40();
   input += synapse0x3ceae80();
   input += synapse0x3ceaec0();
   input += synapse0x3ceaf00();
   input += synapse0x3ceaf40();
   input += synapse0x3ceaf80();
   input += synapse0x3ceafc0();
   input += synapse0x3ceaa50();
   input += synapse0x3ceaa90();
   input += synapse0x3ceb110();
   input += synapse0x3ceb150();
   input += synapse0x3ceb190();
   input += synapse0x3ceb1d0();
   input += synapse0x3ceb210();
   input += synapse0x3ceb250();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cea8c0() {
   double input = input0x3cea8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ceb290() {
   double input = -0.137149;
   input += synapse0x3ceb5d0();
   input += synapse0x3ceb610();
   input += synapse0x3ceb650();
   input += synapse0x3ceb690();
   input += synapse0x3ceb6d0();
   input += synapse0x3ceb710();
   input += synapse0x3ceb750();
   input += synapse0x3ceb790();
   input += synapse0x3ceb7d0();
   input += synapse0x3ceb810();
   input += synapse0x3ceb850();
   input += synapse0x3ceb890();
   input += synapse0x3ceb8d0();
   input += synapse0x3ceb910();
   input += synapse0x3ceb950();
   input += synapse0x3ceb990();
   input += synapse0x3ceb420();
   input += synapse0x3ceb460();
   input += synapse0x3cebae0();
   input += synapse0x3cebb20();
   input += synapse0x3cebb60();
   input += synapse0x3cebba0();
   input += synapse0x3cebbe0();
   input += synapse0x3cebc20();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ceb290() {
   double input = input0x3ceb290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cebc60() {
   double input = -0.668412;
   input += synapse0x3cebfa0();
   input += synapse0x3cebfe0();
   input += synapse0x3cec020();
   input += synapse0x3cec060();
   input += synapse0x3cec0a0();
   input += synapse0x3cec0e0();
   input += synapse0x3cec120();
   input += synapse0x3cec160();
   input += synapse0x3cec1a0();
   input += synapse0x3cec1e0();
   input += synapse0x3cec220();
   input += synapse0x3cec260();
   input += synapse0x3cec2a0();
   input += synapse0x3cec2e0();
   input += synapse0x3cec320();
   input += synapse0x3cec360();
   input += synapse0x3cebdf0();
   input += synapse0x3cebe30();
   input += synapse0x3cec4b0();
   input += synapse0x3cec4f0();
   input += synapse0x3cec530();
   input += synapse0x3cec570();
   input += synapse0x3cec5b0();
   input += synapse0x3cec5f0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cebc60() {
   double input = input0x3cebc60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cec630() {
   double input = -0.602631;
   input += synapse0x3cec970();
   input += synapse0x3cec9b0();
   input += synapse0x3cec9f0();
   input += synapse0x3ceca30();
   input += synapse0x3ceca70();
   input += synapse0x3cecab0();
   input += synapse0x3cecaf0();
   input += synapse0x3cecb30();
   input += synapse0x3cecb70();
   input += synapse0x3cecbb0();
   input += synapse0x3cecbf0();
   input += synapse0x3cecc30();
   input += synapse0x3cecc70();
   input += synapse0x3ceccb0();
   input += synapse0x3ceccf0();
   input += synapse0x3cecd30();
   input += synapse0x3cec7c0();
   input += synapse0x3cec800();
   input += synapse0x3cece80();
   input += synapse0x3cecec0();
   input += synapse0x3cecf00();
   input += synapse0x3cecf40();
   input += synapse0x3cecf80();
   input += synapse0x3cecfc0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cec630() {
   double input = input0x3cec630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ced000() {
   double input = 5.61542;
   input += synapse0x3ced340();
   input += synapse0x3ced380();
   input += synapse0x3ced3c0();
   input += synapse0x3ced400();
   input += synapse0x3ced440();
   input += synapse0x3ced480();
   input += synapse0x3ced4c0();
   input += synapse0x3ced500();
   input += synapse0x3ced540();
   input += synapse0x3ce5700();
   input += synapse0x3ce5740();
   input += synapse0x3ce5780();
   input += synapse0x3ce57c0();
   input += synapse0x3ce5800();
   input += synapse0x3ce5840();
   input += synapse0x3ce5880();
   input += synapse0x3ced190();
   input += synapse0x3ced1d0();
   input += synapse0x3ce59d0();
   input += synapse0x3ce5a10();
   input += synapse0x3ce5a50();
   input += synapse0x3ce5a90();
   input += synapse0x3ce5ad0();
   input += synapse0x3ce5b10();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ced000() {
   double input = input0x3ced000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ce5b50() {
   double input = -1.37263;
   input += synapse0x3ce5e90();
   input += synapse0x3ce5ed0();
   input += synapse0x3ce5f10();
   input += synapse0x3ce5f50();
   input += synapse0x3ce5f90();
   input += synapse0x3ce5fd0();
   input += synapse0x3ce6010();
   input += synapse0x3ce6050();
   input += synapse0x3ce6090();
   input += synapse0x3ce60d0();
   input += synapse0x3ce6110();
   input += synapse0x3ce6150();
   input += synapse0x3ce6190();
   input += synapse0x3ce61d0();
   input += synapse0x3ce6210();
   input += synapse0x3ce6250();
   input += synapse0x3ce5ce0();
   input += synapse0x3ce5d20();
   input += synapse0x3ce63a0();
   input += synapse0x3ce63e0();
   input += synapse0x3ce6420();
   input += synapse0x3ce6460();
   input += synapse0x3ce64a0();
   input += synapse0x3ce64e0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ce5b50() {
   double input = input0x3ce5b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ce6520() {
   double input = 1.44893;
   input += synapse0x3ce66b0();
   input += synapse0x3cef740();
   input += synapse0x3cef780();
   input += synapse0x3cef7c0();
   input += synapse0x3cef800();
   input += synapse0x3cef840();
   input += synapse0x3cef880();
   input += synapse0x3cef8c0();
   input += synapse0x3cef900();
   input += synapse0x3cef940();
   input += synapse0x3cef980();
   input += synapse0x3cef9c0();
   input += synapse0x3cefa00();
   input += synapse0x3cefa40();
   input += synapse0x3cefa80();
   input += synapse0x3cefac0();
   input += synapse0x3cef590();
   input += synapse0x3cef5d0();
   input += synapse0x3cefc10();
   input += synapse0x3cefc50();
   input += synapse0x3cefc90();
   input += synapse0x3cefcd0();
   input += synapse0x3cefd10();
   input += synapse0x3cefd50();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ce6520() {
   double input = input0x3ce6520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cefd90() {
   double input = -2.23899;
   input += synapse0x3cf00d0();
   input += synapse0x3cf0110();
   input += synapse0x3cf0150();
   input += synapse0x3cf0190();
   input += synapse0x3cf01d0();
   input += synapse0x3cf0210();
   input += synapse0x3cf0250();
   input += synapse0x3cf0290();
   input += synapse0x3cf02d0();
   input += synapse0x3cf0310();
   input += synapse0x3cf0350();
   input += synapse0x3cf0390();
   input += synapse0x3cf03d0();
   input += synapse0x3cf0410();
   input += synapse0x3cf0450();
   input += synapse0x3cf0490();
   input += synapse0x3ceff20();
   input += synapse0x3ceff60();
   input += synapse0x3cf05e0();
   input += synapse0x3cf0620();
   input += synapse0x3cf0660();
   input += synapse0x3cf06a0();
   input += synapse0x3cf06e0();
   input += synapse0x3cf0720();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cefd90() {
   double input = input0x3cefd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cf0760() {
   double input = -1.19744;
   input += synapse0x3cf0aa0();
   input += synapse0x3cf0ae0();
   input += synapse0x3cf0b20();
   input += synapse0x3cf0b60();
   input += synapse0x3cf0ba0();
   input += synapse0x3cf0be0();
   input += synapse0x3cf0c20();
   input += synapse0x3cf0c60();
   input += synapse0x3cf0ca0();
   input += synapse0x3cf0ce0();
   input += synapse0x3cf0d20();
   input += synapse0x3cf0d60();
   input += synapse0x3cf0da0();
   input += synapse0x3cf0de0();
   input += synapse0x3cf0e20();
   input += synapse0x3cf0e60();
   input += synapse0x3cf08f0();
   input += synapse0x3cf0930();
   input += synapse0x3cf0fb0();
   input += synapse0x3cf0ff0();
   input += synapse0x3cf1030();
   input += synapse0x3cf1070();
   input += synapse0x3cf10b0();
   input += synapse0x3cf10f0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cf0760() {
   double input = input0x3cf0760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cf1130() {
   double input = 1.9435;
   input += synapse0x3cf1470();
   input += synapse0x3cf14b0();
   input += synapse0x3cf14f0();
   input += synapse0x3cf1530();
   input += synapse0x3cf1570();
   input += synapse0x3cf15b0();
   input += synapse0x3cf15f0();
   input += synapse0x3cf1630();
   input += synapse0x3cf1670();
   input += synapse0x3cf16b0();
   input += synapse0x3cf16f0();
   input += synapse0x3cf1730();
   input += synapse0x3cf1770();
   input += synapse0x3cf17b0();
   input += synapse0x3cf17f0();
   input += synapse0x3cf1830();
   input += synapse0x3cf12c0();
   input += synapse0x3cf1300();
   input += synapse0x3cf1980();
   input += synapse0x3cf19c0();
   input += synapse0x3cf1a00();
   input += synapse0x3cf1a40();
   input += synapse0x3cf1a80();
   input += synapse0x3cf1ac0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cf1130() {
   double input = input0x3cf1130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cf1b00() {
   double input = 0.806322;
   input += synapse0x3cf1e40();
   input += synapse0x3cf1e80();
   input += synapse0x3cf1ec0();
   input += synapse0x3cf1f00();
   input += synapse0x3cf1f40();
   input += synapse0x3cf1f80();
   input += synapse0x3cf1fc0();
   input += synapse0x3cf2000();
   input += synapse0x3cf2040();
   input += synapse0x3cf2080();
   input += synapse0x3cf20c0();
   input += synapse0x3cf2100();
   input += synapse0x3cf2140();
   input += synapse0x3cf2180();
   input += synapse0x3cf21c0();
   input += synapse0x3cf2200();
   input += synapse0x3cf1c90();
   input += synapse0x3cf1cd0();
   input += synapse0x3cf2350();
   input += synapse0x3cf2390();
   input += synapse0x3cf23d0();
   input += synapse0x3cf2410();
   input += synapse0x3cf2450();
   input += synapse0x3cf2490();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cf1b00() {
   double input = input0x3cf1b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cf24d0() {
   double input = -1.11402;
   input += synapse0x3cf2810();
   input += synapse0x3cf2850();
   input += synapse0x3cf2890();
   input += synapse0x3cf28d0();
   input += synapse0x3cf2910();
   input += synapse0x3cf2950();
   input += synapse0x3cf2990();
   input += synapse0x3cf29d0();
   input += synapse0x3cf2a10();
   input += synapse0x3cf2a50();
   input += synapse0x3cf2a90();
   input += synapse0x3cf2ad0();
   input += synapse0x3cf2b10();
   input += synapse0x3cf2b50();
   input += synapse0x3cf2b90();
   input += synapse0x3cf2bd0();
   input += synapse0x3cf2660();
   input += synapse0x3cf26a0();
   input += synapse0x3cf2d20();
   input += synapse0x3cf2d60();
   input += synapse0x3cf2da0();
   input += synapse0x3cf2de0();
   input += synapse0x3cf2e20();
   input += synapse0x3cf2e60();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cf24d0() {
   double input = input0x3cf24d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cf2ea0() {
   double input = 1.83776;
   input += synapse0x3cf31e0();
   input += synapse0x3cf3220();
   input += synapse0x3cf3260();
   input += synapse0x3cf32a0();
   input += synapse0x3cf32e0();
   input += synapse0x3cf3320();
   input += synapse0x3cf3360();
   input += synapse0x3cf33a0();
   input += synapse0x3cf33e0();
   input += synapse0x3cf3420();
   input += synapse0x3cf3460();
   input += synapse0x3cf34a0();
   input += synapse0x3cf34e0();
   input += synapse0x3cf3520();
   input += synapse0x3cf3560();
   input += synapse0x3cf35a0();
   input += synapse0x3cf3030();
   input += synapse0x3cf3070();
   input += synapse0x3cf36f0();
   input += synapse0x3cf3730();
   input += synapse0x3cf3770();
   input += synapse0x3cf37b0();
   input += synapse0x3cf37f0();
   input += synapse0x3cf3830();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cf2ea0() {
   double input = input0x3cf2ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cf3870() {
   double input = -0.7719;
   input += synapse0x3cf3bb0();
   input += synapse0x3cf3bf0();
   input += synapse0x3cf3c30();
   input += synapse0x3cf3c70();
   input += synapse0x3cf3cb0();
   input += synapse0x3cf3cf0();
   input += synapse0x3cf3d30();
   input += synapse0x3cf3d70();
   input += synapse0x3cf3db0();
   input += synapse0x3cf3df0();
   input += synapse0x3cf3e30();
   input += synapse0x3cf3e70();
   input += synapse0x3cf3eb0();
   input += synapse0x3cf3ef0();
   input += synapse0x3cf3f30();
   input += synapse0x3cf3f70();
   input += synapse0x3cf3a00();
   input += synapse0x3cf3a40();
   input += synapse0x3cf40c0();
   input += synapse0x3cf4100();
   input += synapse0x3cf4140();
   input += synapse0x3cf4180();
   input += synapse0x3cf41c0();
   input += synapse0x3cf4200();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cf3870() {
   double input = input0x3cf3870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cf4240() {
   double input = 2.51455;
   input += synapse0x3cf4580();
   input += synapse0x3ce8b50();
   input += synapse0x3ce8b90();
   input += synapse0x3ce8bd0();
   input += synapse0x3ce8e20();
   input += synapse0x3ce8e60();
   input += synapse0x3ce8ea0();
   input += synapse0x3ce90f0();
   input += synapse0x3ce9130();
   input += synapse0x3ce9380();
   input += synapse0x3ce93c0();
   input += synapse0x3ce9400();
   input += synapse0x3ce9650();
   input += synapse0x3ce9690();
   input += synapse0x3ce98e0();
   input += synapse0x3ce9920();
   input += synapse0x3cf43d0();
   input += synapse0x3cf4410();
   input += synapse0x3ce9a70();
   input += synapse0x3ce9f80();
   input += synapse0x3ce9fc0();
   input += synapse0x3cea000();
   input += synapse0x3cea250();
   input += synapse0x3cea290();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cf4240() {
   double input = input0x3cf4240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cea2d0() {
   double input = -0.389259;
   input += synapse0x3ce9b40();
   input += synapse0x3ce9b80();
   input += synapse0x3ce9bc0();
   input += synapse0x3ce9c00();
   input += synapse0x3cea580();
   input += synapse0x3cf68d0();
   input += synapse0x3cf6910();
   input += synapse0x3cf6950();
   input += synapse0x3cf6990();
   input += synapse0x3cf69d0();
   input += synapse0x3cf6a10();
   input += synapse0x3cf6a50();
   input += synapse0x3cf6a90();
   input += synapse0x3cf6ad0();
   input += synapse0x3cf6b10();
   input += synapse0x3cf6b50();
   input += synapse0x3cea460();
   input += synapse0x3cea4a0();
   input += synapse0x3cf6ca0();
   input += synapse0x3cf6ce0();
   input += synapse0x3cf6d20();
   input += synapse0x3cf6d60();
   input += synapse0x3cf6da0();
   input += synapse0x3cf6de0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cea2d0() {
   double input = input0x3cea2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cf6e20() {
   double input = -0.189293;
   input += synapse0x3cf7160();
   input += synapse0x3cf71a0();
   input += synapse0x3cf71e0();
   input += synapse0x3cf7220();
   input += synapse0x3cf7260();
   input += synapse0x3cf72a0();
   input += synapse0x3cf72e0();
   input += synapse0x3cf7320();
   input += synapse0x3cf7360();
   input += synapse0x3cf73a0();
   input += synapse0x3cf73e0();
   input += synapse0x3cf7420();
   input += synapse0x3cf7460();
   input += synapse0x3cf74a0();
   input += synapse0x3cf74e0();
   input += synapse0x3cf7520();
   input += synapse0x3cf6fb0();
   input += synapse0x3cf6ff0();
   input += synapse0x3cf7670();
   input += synapse0x3cf76b0();
   input += synapse0x3cf76f0();
   input += synapse0x3cf7730();
   input += synapse0x3cf7770();
   input += synapse0x3cf77b0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cf6e20() {
   double input = input0x3cf6e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cf77f0() {
   double input = 0.00562958;
   input += synapse0x3cf7b30();
   input += synapse0x3cf7b70();
   input += synapse0x3cf7bb0();
   input += synapse0x3cf7bf0();
   input += synapse0x3cf7c30();
   input += synapse0x3cf7c70();
   input += synapse0x3cf7cb0();
   input += synapse0x3cf7cf0();
   input += synapse0x3cf7d30();
   input += synapse0x3cf7d70();
   input += synapse0x3cf7db0();
   input += synapse0x3cf7df0();
   input += synapse0x3cf7e30();
   input += synapse0x3cf7e70();
   input += synapse0x3cf7eb0();
   input += synapse0x3cf7ef0();
   input += synapse0x3cf7980();
   input += synapse0x3cf79c0();
   input += synapse0x3cf8040();
   input += synapse0x3cf8080();
   input += synapse0x3cf80c0();
   input += synapse0x3cf8100();
   input += synapse0x3cf8140();
   input += synapse0x3cf8180();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cf77f0() {
   double input = input0x3cf77f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cf81c0() {
   double input = -4.12554;
   input += synapse0x3cf8500();
   input += synapse0x3cf8540();
   input += synapse0x3cf8580();
   input += synapse0x3cf85c0();
   input += synapse0x3cf8600();
   input += synapse0x3cf8640();
   input += synapse0x3cf8680();
   input += synapse0x3cf86c0();
   input += synapse0x3cf8700();
   input += synapse0x3cf8740();
   input += synapse0x3cf8780();
   input += synapse0x3cf87c0();
   input += synapse0x3cf8800();
   input += synapse0x3cf8840();
   input += synapse0x3cf8880();
   input += synapse0x3cf88c0();
   input += synapse0x3cf8350();
   input += synapse0x3cf8390();
   input += synapse0x3cf8a10();
   input += synapse0x3cf8a50();
   input += synapse0x3cf8a90();
   input += synapse0x3cf8ad0();
   input += synapse0x3cf8b10();
   input += synapse0x3cf8b50();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cf81c0() {
   double input = input0x3cf81c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cf8b90() {
   double input = -0.487468;
   input += synapse0x3cf8ed0();
   input += synapse0x3cf8f10();
   input += synapse0x3cf8f50();
   input += synapse0x3cf8f90();
   input += synapse0x3cf8fd0();
   input += synapse0x3cf9010();
   input += synapse0x3cf9050();
   input += synapse0x3cf9090();
   input += synapse0x3cf90d0();
   input += synapse0x3cf9110();
   input += synapse0x3cf9150();
   input += synapse0x3cf9190();
   input += synapse0x3cf91d0();
   input += synapse0x3cf9210();
   input += synapse0x3cf9250();
   input += synapse0x3cf9290();
   input += synapse0x3cf8d20();
   input += synapse0x3cf8d60();
   input += synapse0x3cf93e0();
   input += synapse0x3cf9420();
   input += synapse0x3cf9460();
   input += synapse0x3cf94a0();
   input += synapse0x3cf94e0();
   input += synapse0x3cf9520();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cf8b90() {
   double input = input0x3cf8b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cf9560() {
   double input = 1.08611;
   input += synapse0x3cf98a0();
   input += synapse0x3cf98e0();
   input += synapse0x3cf9920();
   input += synapse0x3cf9960();
   input += synapse0x3cf99a0();
   input += synapse0x3cf99e0();
   input += synapse0x3cf9a20();
   input += synapse0x3cf9a60();
   input += synapse0x3cf9aa0();
   input += synapse0x3cf9ae0();
   input += synapse0x3cf9b20();
   input += synapse0x3cf9b60();
   input += synapse0x3cf9ba0();
   input += synapse0x3cf9be0();
   input += synapse0x3cf9c20();
   input += synapse0x3cf9c60();
   input += synapse0x3cf96f0();
   input += synapse0x3cf9730();
   input += synapse0x3cf9db0();
   input += synapse0x3cf9df0();
   input += synapse0x3cf9e30();
   input += synapse0x3cf9e70();
   input += synapse0x3cf9eb0();
   input += synapse0x3cf9ef0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cf9560() {
   double input = input0x3cf9560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cf9f30() {
   double input = 0.0433037;
   input += synapse0x3cfa270();
   input += synapse0x3cfa2b0();
   input += synapse0x3cfa2f0();
   input += synapse0x3cfa330();
   input += synapse0x3cfa370();
   input += synapse0x3cfa3b0();
   input += synapse0x3cfa3f0();
   input += synapse0x3cfa430();
   input += synapse0x3cfa470();
   input += synapse0x3cfa4b0();
   input += synapse0x3cfa4f0();
   input += synapse0x3cfa530();
   input += synapse0x3cfa570();
   input += synapse0x3cfa5b0();
   input += synapse0x3cfa5f0();
   input += synapse0x3cfa630();
   input += synapse0x3cfa0c0();
   input += synapse0x3cfa100();
   input += synapse0x3cfa780();
   input += synapse0x3cfa7c0();
   input += synapse0x3cfa800();
   input += synapse0x3cfa840();
   input += synapse0x3cfa880();
   input += synapse0x3cfa8c0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cf9f30() {
   double input = input0x3cf9f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cfa900() {
   double input = 0.53622;
   input += synapse0x3cfac40();
   input += synapse0x3cfac80();
   input += synapse0x3cfacc0();
   input += synapse0x3cfad00();
   input += synapse0x3cfad40();
   input += synapse0x3cfad80();
   input += synapse0x3cfadc0();
   input += synapse0x3cfae00();
   input += synapse0x3cfae40();
   input += synapse0x3cfae80();
   input += synapse0x3cfaec0();
   input += synapse0x3cfaf00();
   input += synapse0x3cfaf40();
   input += synapse0x3cfaf80();
   input += synapse0x3cfafc0();
   input += synapse0x3cfb000();
   input += synapse0x3cfaa90();
   input += synapse0x3cfaad0();
   input += synapse0x3cfb150();
   input += synapse0x3cfb190();
   input += synapse0x3cfb1d0();
   input += synapse0x3cfb210();
   input += synapse0x3cfb250();
   input += synapse0x3cfb290();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cfa900() {
   double input = input0x3cfa900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cfb2d0() {
   double input = 0.555992;
   input += synapse0x3ce3d40();
   input += synapse0x3ce3d80();
   input += synapse0x3ce3dc0();
   input += synapse0x3ce3e00();
   input += synapse0x3ce3e40();
   input += synapse0x3ce3e80();
   input += synapse0x3ce3ec0();
   input += synapse0x3ce3f00();
   input += synapse0x3cfba20();
   input += synapse0x3cfba60();
   input += synapse0x3cfbaa0();
   input += synapse0x3cfbae0();
   input += synapse0x3cfbb20();
   input += synapse0x3cfbb60();
   input += synapse0x3cfbba0();
   input += synapse0x3cfbbe0();
   input += synapse0x3cfb460();
   input += synapse0x3cfb4a0();
   input += synapse0x3cfbd30();
   input += synapse0x3cfbd70();
   input += synapse0x3cfbdb0();
   input += synapse0x3cfbdf0();
   input += synapse0x3cfbe30();
   input += synapse0x3cfbe70();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cfb2d0() {
   double input = input0x3cfb2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cfbeb0() {
   double input = 0.272982;
   input += synapse0x3cfc1f0();
   input += synapse0x3cfc230();
   input += synapse0x3cfc270();
   input += synapse0x3cfc2b0();
   input += synapse0x3cfc2f0();
   input += synapse0x3cfc330();
   input += synapse0x3cfc370();
   input += synapse0x3cfc3b0();
   input += synapse0x3cfc3f0();
   input += synapse0x3cfc430();
   input += synapse0x3cfc470();
   input += synapse0x3cfc4b0();
   input += synapse0x3cfc4f0();
   input += synapse0x3cfc530();
   input += synapse0x3cfc570();
   input += synapse0x3cfc5b0();
   input += synapse0x3cfc040();
   input += synapse0x3cfc080();
   input += synapse0x3cfc700();
   input += synapse0x3cfc740();
   input += synapse0x3cfc780();
   input += synapse0x3cfc7c0();
   input += synapse0x3cfc800();
   input += synapse0x3cfc840();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cfbeb0() {
   double input = input0x3cfbeb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cfc880() {
   double input = -0.0539558;
   input += synapse0x3cfcbc0();
   input += synapse0x3cfcc00();
   input += synapse0x3cfcc40();
   input += synapse0x3cfcc80();
   input += synapse0x3cfccc0();
   input += synapse0x3cfcd00();
   input += synapse0x3cfcd40();
   input += synapse0x3cfcd80();
   input += synapse0x3cfcdc0();
   input += synapse0x3cfce00();
   input += synapse0x3cfce40();
   input += synapse0x3cfce80();
   input += synapse0x3cfcec0();
   input += synapse0x3cfcf00();
   input += synapse0x3cfcf40();
   input += synapse0x3cfcf80();
   input += synapse0x3cfca10();
   input += synapse0x3cfca50();
   input += synapse0x3ced580();
   input += synapse0x3ced5c0();
   input += synapse0x3ced600();
   input += synapse0x3ced640();
   input += synapse0x3ced680();
   input += synapse0x3ced6c0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cfc880() {
   double input = input0x3cfc880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ced700() {
   double input = 3.74293;
   input += synapse0x3ceda40();
   input += synapse0x3ceda80();
   input += synapse0x3cedac0();
   input += synapse0x3cedb00();
   input += synapse0x3cedb40();
   input += synapse0x3cedb80();
   input += synapse0x3cedbc0();
   input += synapse0x3cedc00();
   input += synapse0x3cedc40();
   input += synapse0x3cedc80();
   input += synapse0x3cedcc0();
   input += synapse0x3cedd00();
   input += synapse0x3cedd40();
   input += synapse0x3cedd80();
   input += synapse0x3ceddc0();
   input += synapse0x3cede00();
   input += synapse0x3ced890();
   input += synapse0x3ced8d0();
   input += synapse0x3cedf50();
   input += synapse0x3cedf90();
   input += synapse0x3cedfd0();
   input += synapse0x3cee010();
   input += synapse0x3cee050();
   input += synapse0x3cee090();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ced700() {
   double input = input0x3ced700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3cee0d0() {
   double input = 0.595506;
   input += synapse0x3cee410();
   input += synapse0x3cee450();
   input += synapse0x3cee490();
   input += synapse0x3cee4d0();
   input += synapse0x3cee510();
   input += synapse0x3cee550();
   input += synapse0x3cee590();
   input += synapse0x3cee5d0();
   input += synapse0x3cee610();
   input += synapse0x3cee650();
   input += synapse0x3cee690();
   input += synapse0x3cee6d0();
   input += synapse0x3cee710();
   input += synapse0x3cee750();
   input += synapse0x3cee790();
   input += synapse0x3cee7d0();
   input += synapse0x3cee260();
   input += synapse0x3cee2a0();
   input += synapse0x3cee920();
   input += synapse0x3cee960();
   input += synapse0x3cee9a0();
   input += synapse0x3cee9e0();
   input += synapse0x3ceea20();
   input += synapse0x3ceea60();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3cee0d0() {
   double input = input0x3cee0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3ceeaa0() {
   double input = -0.0324871;
   input += synapse0x3ceede0();
   input += synapse0x3ceee20();
   input += synapse0x3ceee60();
   input += synapse0x3ceeea0();
   input += synapse0x3ceeee0();
   input += synapse0x3ceef20();
   input += synapse0x3ceef60();
   input += synapse0x3ceefa0();
   input += synapse0x3ceefe0();
   input += synapse0x3cef020();
   input += synapse0x3cef060();
   input += synapse0x3cef0a0();
   input += synapse0x3cef0e0();
   input += synapse0x3cef120();
   input += synapse0x3cef160();
   input += synapse0x3cef1a0();
   input += synapse0x3ceec30();
   input += synapse0x3ceec70();
   input += synapse0x3cef2f0();
   input += synapse0x3cef330();
   input += synapse0x3cef370();
   input += synapse0x3cef3b0();
   input += synapse0x3cef3f0();
   input += synapse0x3cef430();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3ceeaa0() {
   double input = input0x3ceeaa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3d010e0() {
   double input = 1.93117;
   input += synapse0x3d01300();
   input += synapse0x3d01340();
   input += synapse0x3d01380();
   input += synapse0x3d013c0();
   input += synapse0x3d01400();
   input += synapse0x3d01440();
   input += synapse0x3d01480();
   input += synapse0x3d014c0();
   input += synapse0x3d01500();
   input += synapse0x3d01540();
   input += synapse0x3d01580();
   input += synapse0x3d015c0();
   input += synapse0x3d01600();
   input += synapse0x3d01640();
   input += synapse0x3d01680();
   input += synapse0x3d016c0();
   input += synapse0x3cef470();
   input += synapse0x3cef4b0();
   input += synapse0x3d01810();
   input += synapse0x3d01850();
   input += synapse0x3d01890();
   input += synapse0x3d018d0();
   input += synapse0x3d01910();
   input += synapse0x3d01950();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3d010e0() {
   double input = input0x3d010e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3d01990() {
   double input = -1.91145;
   input += synapse0x3d01cd0();
   input += synapse0x3d01d10();
   input += synapse0x3d01d50();
   input += synapse0x3d01d90();
   input += synapse0x3d01dd0();
   input += synapse0x3d01e10();
   input += synapse0x3d01e50();
   input += synapse0x3d01e90();
   input += synapse0x3d01ed0();
   input += synapse0x3d01f10();
   input += synapse0x3d01f50();
   input += synapse0x3d01f90();
   input += synapse0x3d01fd0();
   input += synapse0x3d02010();
   input += synapse0x3d02050();
   input += synapse0x3d02090();
   input += synapse0x3d01b20();
   input += synapse0x3d01b60();
   input += synapse0x3d021e0();
   input += synapse0x3d02220();
   input += synapse0x3d02260();
   input += synapse0x3d022a0();
   input += synapse0x3d022e0();
   input += synapse0x3d02320();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3d01990() {
   double input = input0x3d01990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3d02360() {
   double input = 1.15116;
   input += synapse0x3d026a0();
   input += synapse0x3d026e0();
   input += synapse0x3d02720();
   input += synapse0x3d02760();
   input += synapse0x3d027a0();
   input += synapse0x3d027e0();
   input += synapse0x3d02820();
   input += synapse0x3d02860();
   input += synapse0x3d028a0();
   input += synapse0x3d028e0();
   input += synapse0x3d02920();
   input += synapse0x3d02960();
   input += synapse0x3d029a0();
   input += synapse0x3d029e0();
   input += synapse0x3d02a20();
   input += synapse0x3d02a60();
   input += synapse0x3d024f0();
   input += synapse0x3d02530();
   input += synapse0x3d02bb0();
   input += synapse0x3d02bf0();
   input += synapse0x3d02c30();
   input += synapse0x3d02c70();
   input += synapse0x3d02cb0();
   input += synapse0x3d02cf0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3d02360() {
   double input = input0x3d02360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3d02d30() {
   double input = -0.395032;
   input += synapse0x3d03070();
   input += synapse0x3d030b0();
   input += synapse0x3d030f0();
   input += synapse0x3d03130();
   input += synapse0x3d03170();
   input += synapse0x3d031b0();
   input += synapse0x3d031f0();
   input += synapse0x3d03230();
   input += synapse0x3d03270();
   input += synapse0x3d032b0();
   input += synapse0x3d032f0();
   input += synapse0x3d03330();
   input += synapse0x3d03370();
   input += synapse0x3d033b0();
   input += synapse0x3d033f0();
   input += synapse0x3d03430();
   input += synapse0x3d02ec0();
   input += synapse0x3d02f00();
   input += synapse0x3d03580();
   input += synapse0x3d035c0();
   input += synapse0x3d03600();
   input += synapse0x3d03640();
   input += synapse0x3d03680();
   input += synapse0x3d036c0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3d02d30() {
   double input = input0x3d02d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3d09f30() {
   double input = -4.04815;
   input += synapse0x3cdfc50();
   input += synapse0x3cdfc90();
   input += synapse0x3ce1170();
   input += synapse0x3ce11b0();
   input += synapse0x3ce1b40();
   input += synapse0x3ce1b80();
   input += synapse0x3ce2910();
   input += synapse0x3ce2950();
   input += synapse0x3ce32e0();
   input += synapse0x3ce3320();
   input += synapse0x3ce3cb0();
   input += synapse0x3ce3cf0();
   input += synapse0x3ce4790();
   input += synapse0x3ce47d0();
   input += synapse0x3ce5160();
   input += synapse0x3ce51a0();
   input += synapse0x3ce2240();
   input += synapse0x3ce2280();
   input += synapse0x3ce6d10();
   input += synapse0x3ce6d50();
   input += synapse0x3ce76e0();
   input += synapse0x3ce7720();
   input += synapse0x3ce80b0();
   input += synapse0x3ce80f0();
   input += synapse0x3ce8a80();
   input += synapse0x3ce8ac0();
   input += synapse0x3cdcc60();
   input += synapse0x3cdcca0();
   input += synapse0x3ceab70();
   input += synapse0x3ceabb0();
   input += synapse0x3ceb540();
   input += synapse0x3ceb580();
   input += synapse0x3cebf10();
   input += synapse0x3cebf50();
   input += synapse0x3cec8e0();
   input += synapse0x3cec920();
   input += synapse0x3ced2b0();
   input += synapse0x3ced2f0();
   input += synapse0x3ce5e00();
   input += synapse0x3ce5e40();
   input += synapse0x3cef6b0();
   input += synapse0x3cef6f0();
   input += synapse0x3cf0040();
   input += synapse0x3cf0080();
   input += synapse0x3cf0a10();
   input += synapse0x3cf0a50();
   input += synapse0x3cf13e0();
   input += synapse0x3cf1420();
   input += synapse0x3cf1db0();
   input += synapse0x3cf1df0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3d09f30() {
   double input = input0x3d09f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3d0a2d0() {
   double input = 0.16974;
   input += synapse0x3cf44f0();
   input += synapse0x3cf4530();
   input += synapse0x3ce9ab0();
   input += synapse0x3ce9af0();
   input += synapse0x3cf70d0();
   input += synapse0x3cf7110();
   input += synapse0x3cf7aa0();
   input += synapse0x3cf7ae0();
   input += synapse0x3cf8470();
   input += synapse0x3cf84b0();
   input += synapse0x3cf8e40();
   input += synapse0x3cf8e80();
   input += synapse0x3cf9810();
   input += synapse0x3cf9850();
   input += synapse0x3cfa1e0();
   input += synapse0x3cfa220();
   input += synapse0x3cfabb0();
   input += synapse0x3cfabf0();
   input += synapse0x3cfb580();
   input += synapse0x3cfb5c0();
   input += synapse0x3cfc160();
   input += synapse0x3cfc1a0();
   input += synapse0x3cfcb30();
   input += synapse0x3cfcb70();
   input += synapse0x3ced9b0();
   input += synapse0x3ced9f0();
   input += synapse0x3cee380();
   input += synapse0x3cee3c0();
   input += synapse0x3ceed50();
   input += synapse0x3ceed90();
   input += synapse0x3d01270();
   input += synapse0x3d012b0();
   input += synapse0x3d01c40();
   input += synapse0x3d01c80();
   input += synapse0x3d02610();
   input += synapse0x3d02650();
   input += synapse0x3d02fe0();
   input += synapse0x3d03020();
   input += synapse0x3cdef10();
   input += synapse0x3cdef50();
   input += synapse0x3cf2780();
   input += synapse0x3cf27c0();
   input += synapse0x3d03700();
   input += synapse0x3d03740();
   input += synapse0x3d03780();
   input += synapse0x3d037c0();
   input += synapse0x3d0a670();
   input += synapse0x3d0a6b0();
   input += synapse0x3d0a6f0();
   input += synapse0x3d0a730();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3d0a2d0() {
   double input = input0x3d0a2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3d0a770() {
   double input = 1.66799;
   input += synapse0x3d0aab0();
   input += synapse0x3d0aaf0();
   input += synapse0x3d0ab30();
   input += synapse0x3d0ab70();
   input += synapse0x3d0abb0();
   input += synapse0x3d0abf0();
   input += synapse0x3d0ac30();
   input += synapse0x3d0ac70();
   input += synapse0x3d0acb0();
   input += synapse0x3d0acf0();
   input += synapse0x3d0ad30();
   input += synapse0x3d0ad70();
   input += synapse0x3d0adb0();
   input += synapse0x3d0adf0();
   input += synapse0x3d0ae30();
   input += synapse0x3d0ae70();
   input += synapse0x3d0a900();
   input += synapse0x3d0a940();
   input += synapse0x3d0afc0();
   input += synapse0x3d0b000();
   input += synapse0x3d0b040();
   input += synapse0x3d0b080();
   input += synapse0x3d0b0c0();
   input += synapse0x3d0b100();
   input += synapse0x3d0b140();
   input += synapse0x3d0b180();
   input += synapse0x3d0b1c0();
   input += synapse0x3d0b200();
   input += synapse0x3d0b240();
   input += synapse0x3d0b280();
   input += synapse0x3d0b2c0();
   input += synapse0x3d0b300();
   input += synapse0x3d0aeb0();
   input += synapse0x3d0aef0();
   input += synapse0x3d0af30();
   input += synapse0x3d0af70();
   input += synapse0x3d0b550();
   input += synapse0x3d0b590();
   input += synapse0x3d0b5d0();
   input += synapse0x3d0b610();
   input += synapse0x3d0b650();
   input += synapse0x3d0b690();
   input += synapse0x3d0b6d0();
   input += synapse0x3d0b710();
   input += synapse0x3d0b750();
   input += synapse0x3d0b790();
   input += synapse0x3d0b7d0();
   input += synapse0x3d0b810();
   input += synapse0x3d0b850();
   input += synapse0x3d0b890();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3d0a770() {
   double input = input0x3d0a770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3d0b8d0() {
   double input = 0.883496;
   input += synapse0x3d0bc10();
   input += synapse0x3d0bc50();
   input += synapse0x3d0bc90();
   input += synapse0x3d0bcd0();
   input += synapse0x3d0bd10();
   input += synapse0x3d0bd50();
   input += synapse0x3d0bd90();
   input += synapse0x3d0bdd0();
   input += synapse0x3d0be10();
   input += synapse0x3d0be50();
   input += synapse0x3d0be90();
   input += synapse0x3d0bed0();
   input += synapse0x3d0bf10();
   input += synapse0x3d0bf50();
   input += synapse0x3d0bf90();
   input += synapse0x3d0bfd0();
   input += synapse0x3d0ba60();
   input += synapse0x3d0baa0();
   input += synapse0x3d0c120();
   input += synapse0x3d0c160();
   input += synapse0x3d0c1a0();
   input += synapse0x3d0c1e0();
   input += synapse0x3d0c220();
   input += synapse0x3d0c260();
   input += synapse0x3d0c2a0();
   input += synapse0x3d0c2e0();
   input += synapse0x3d0c320();
   input += synapse0x3d0c360();
   input += synapse0x3d0c3a0();
   input += synapse0x3d0c3e0();
   input += synapse0x3d0c420();
   input += synapse0x3d0c460();
   input += synapse0x3d0c010();
   input += synapse0x3d0c050();
   input += synapse0x3d0c090();
   input += synapse0x3d0c0d0();
   input += synapse0x3d0c6b0();
   input += synapse0x3d0c6f0();
   input += synapse0x3d0c730();
   input += synapse0x3d0c770();
   input += synapse0x3d0c7b0();
   input += synapse0x3d0c7f0();
   input += synapse0x3d0c830();
   input += synapse0x3d0c870();
   input += synapse0x3d0c8b0();
   input += synapse0x3d0c8f0();
   input += synapse0x3d0c930();
   input += synapse0x3d0c970();
   input += synapse0x3d0c9b0();
   input += synapse0x3d0c9f0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3d0b8d0() {
   double input = input0x3d0b8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3d0ca30() {
   double input = -0.897922;
   input += synapse0x3d0cd70();
   input += synapse0x3d0cdb0();
   input += synapse0x3d0cdf0();
   input += synapse0x3d0ce30();
   input += synapse0x3d0ce70();
   input += synapse0x3d0ceb0();
   input += synapse0x3d0cef0();
   input += synapse0x3d0cf30();
   input += synapse0x3d0cf70();
   input += synapse0x3d0cfb0();
   input += synapse0x3d0cff0();
   input += synapse0x3d0d030();
   input += synapse0x3d0d070();
   input += synapse0x3d0d0b0();
   input += synapse0x3d0d0f0();
   input += synapse0x3d0d130();
   input += synapse0x3d0cbc0();
   input += synapse0x3d0cc00();
   input += synapse0x3d0d280();
   input += synapse0x3d0d2c0();
   input += synapse0x3d0d300();
   input += synapse0x3d0d340();
   input += synapse0x3d0d380();
   input += synapse0x3d0d3c0();
   input += synapse0x3d0d400();
   input += synapse0x3d0d440();
   input += synapse0x3d0d480();
   input += synapse0x3d0d4c0();
   input += synapse0x3d0d500();
   input += synapse0x3d0d540();
   input += synapse0x3d0d580();
   input += synapse0x3d0d5c0();
   input += synapse0x3d0d170();
   input += synapse0x3d0d1b0();
   input += synapse0x3d0d1f0();
   input += synapse0x3d0d230();
   input += synapse0x3d0d810();
   input += synapse0x3d0d850();
   input += synapse0x3d0d890();
   input += synapse0x3d0d8d0();
   input += synapse0x3d0d910();
   input += synapse0x3d0d950();
   input += synapse0x3d0d990();
   input += synapse0x3d0d9d0();
   input += synapse0x3d0da10();
   input += synapse0x3d0da50();
   input += synapse0x3d0da90();
   input += synapse0x3d0dad0();
   input += synapse0x3d0db10();
   input += synapse0x3d0db50();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3d0ca30() {
   double input = input0x3d0ca30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi02_dL::input0x3d0db90() {
   double input = 4.427;
   input += synapse0x3d0ddb0();
   input += synapse0x3d0ddf0();
   input += synapse0x3d0de30();
   input += synapse0x3d0de70();
   input += synapse0x3d0deb0();
   return input;
}

double NNfunction_ns_chi02_dL::neuron0x3d0db90() {
   double input = input0x3d0db90();
   return (input * 1)+0;
}

double NNfunction_ns_chi02_dL::synapse0x3cd9cd0() {
   return (neuron0x3cd9d50()*0.0200586);
}

double NNfunction_ns_chi02_dL::synapse0x3cd9d10() {
   return (neuron0x3cda000()*10.8542);
}

double NNfunction_ns_chi02_dL::synapse0x3cdefa0() {
   return (neuron0x3cda340()*0.658449);
}

double NNfunction_ns_chi02_dL::synapse0x3cdefe0() {
   return (neuron0x3cda680()*0.00646591);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf020() {
   return (neuron0x3cda9c0()*-0.0229971);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf060() {
   return (neuron0x3cdad00()*-0.0193328);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf0a0() {
   return (neuron0x3cdb040()*-0.00209378);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf0e0() {
   return (neuron0x3cdb380()*-0.0418693);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf120() {
   return (neuron0x3cdb6c0()*0.0029855);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf160() {
   return (neuron0x3cdba00()*-0.00542589);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf1a0() {
   return (neuron0x3cdbd40()*-0.00445606);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf1e0() {
   return (neuron0x3cdc080()*0.346674);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf220() {
   return (neuron0x3cdc3c0()*0.0193935);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf260() {
   return (neuron0x3cdc700()*0.0627034);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf2a0() {
   return (neuron0x3cdca40()*-0.0208199);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf2e0() {
   return (neuron0x3cdcd80()*-0.00786616);
}

double NNfunction_ns_chi02_dL::synapse0x3cd9c40() {
   return (neuron0x3cdd0c0()*-0.0506865);
}

double NNfunction_ns_chi02_dL::synapse0x3cd9c80() {
   return (neuron0x3cdd620()*-0.00629651);
}

double NNfunction_ns_chi02_dL::synapse0x3a94e30() {
   return (neuron0x3cdd840()*-0.000823897);
}

double NNfunction_ns_chi02_dL::synapse0x3a94e70() {
   return (neuron0x3cddb80()*0.0118496);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf540() {
   return (neuron0x3cddec0()*0.064032);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf580() {
   return (neuron0x3cde200()*0.0325509);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf5c0() {
   return (neuron0x3cde540()*-0.0229388);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf600() {
   return (neuron0x3cde880()*5.53798);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf980() {
   return (neuron0x3cd9d50()*-0.976185);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf9c0() {
   return (neuron0x3cda000()*-0.19651);
}

double NNfunction_ns_chi02_dL::synapse0x3cdfa00() {
   return (neuron0x3cda340()*-0.482476);
}

double NNfunction_ns_chi02_dL::synapse0x3cdfa40() {
   return (neuron0x3cda680()*-0.141532);
}

double NNfunction_ns_chi02_dL::synapse0x3cdfa80() {
   return (neuron0x3cda9c0()*-0.382219);
}

double NNfunction_ns_chi02_dL::synapse0x3cdfac0() {
   return (neuron0x3cdad00()*-0.0422257);
}

double NNfunction_ns_chi02_dL::synapse0x3cdfb00() {
   return (neuron0x3cdb040()*0.0748235);
}

double NNfunction_ns_chi02_dL::synapse0x3cdfb40() {
   return (neuron0x3cdb380()*0.781543);
}

double NNfunction_ns_chi02_dL::synapse0x3cdfb80() {
   return (neuron0x3cdb6c0()*-0.472979);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf430() {
   return (neuron0x3cdba00()*-0.501579);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf470() {
   return (neuron0x3cdbd40()*-0.275045);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf4b0() {
   return (neuron0x3cdc080()*0.152937);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf4f0() {
   return (neuron0x3cdc3c0()*-0.731161);
}

double NNfunction_ns_chi02_dL::synapse0x3cdfdd0() {
   return (neuron0x3cdc700()*-0.216264);
}

double NNfunction_ns_chi02_dL::synapse0x3cdfe10() {
   return (neuron0x3cdca40()*0.0417308);
}

double NNfunction_ns_chi02_dL::synapse0x3cdfe50() {
   return (neuron0x3cdcd80()*-0.289747);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf7d0() {
   return (neuron0x3cdd0c0()*0.997916);
}

double NNfunction_ns_chi02_dL::synapse0x3cdf810() {
   return (neuron0x3cdd620()*-0.151046);
}

double NNfunction_ns_chi02_dL::synapse0x3cdffa0() {
   return (neuron0x3cdd840()*0.0207833);
}

double NNfunction_ns_chi02_dL::synapse0x3cdffe0() {
   return (neuron0x3cddb80()*-0.375754);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0020() {
   return (neuron0x3cddec0()*-0.573707);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0060() {
   return (neuron0x3cde200()*-0.0151779);
}

double NNfunction_ns_chi02_dL::synapse0x3ce00a0() {
   return (neuron0x3cde540()*-1.19517);
}

double NNfunction_ns_chi02_dL::synapse0x3ce00e0() {
   return (neuron0x3cde880()*0.507356);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0460() {
   return (neuron0x3cd9d50()*-0.00472554);
}

double NNfunction_ns_chi02_dL::synapse0x3ce04a0() {
   return (neuron0x3cda000()*8.682e-05);
}

double NNfunction_ns_chi02_dL::synapse0x3ce04e0() {
   return (neuron0x3cda340()*-0.0052967);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0520() {
   return (neuron0x3cda680()*2.11256);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0560() {
   return (neuron0x3cda9c0()*-0.00215872);
}

double NNfunction_ns_chi02_dL::synapse0x3ce05a0() {
   return (neuron0x3cdad00()*0.00250531);
}

double NNfunction_ns_chi02_dL::synapse0x3ce05e0() {
   return (neuron0x3cdb040()*0.00290983);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0620() {
   return (neuron0x3cdb380()*-0.00519951);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0660() {
   return (neuron0x3cdb6c0()*2.69906e-06);
}

double NNfunction_ns_chi02_dL::synapse0x3ce06a0() {
   return (neuron0x3cdba00()*0.00576002);
}

double NNfunction_ns_chi02_dL::synapse0x3ce06e0() {
   return (neuron0x3cdbd40()*-0.00504719);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0720() {
   return (neuron0x3cdc080()*0.255622);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0760() {
   return (neuron0x3cdc3c0()*0.0038469);
}

double NNfunction_ns_chi02_dL::synapse0x3ce07a0() {
   return (neuron0x3cdc700()*0.0128222);
}

double NNfunction_ns_chi02_dL::synapse0x3ce07e0() {
   return (neuron0x3cdca40()*0.000908798);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0820() {
   return (neuron0x3cdcd80()*-0.0136721);
}

double NNfunction_ns_chi02_dL::synapse0x3ce02b0() {
   return (neuron0x3cdd0c0()*0.0130054);
}

double NNfunction_ns_chi02_dL::synapse0x3ce02f0() {
   return (neuron0x3cdd620()*-0.0058207);
}

double NNfunction_ns_chi02_dL::synapse0x3cc8dc0() {
   return (neuron0x3cdd840()*-0.00180052);
}

double NNfunction_ns_chi02_dL::synapse0x3aa2d10() {
   return (neuron0x3cddb80()*0.000907639);
}

double NNfunction_ns_chi02_dL::synapse0x3aa2d50() {
   return (neuron0x3cddec0()*-0.00569852);
}

double NNfunction_ns_chi02_dL::synapse0x3bbe260() {
   return (neuron0x3cde200()*-0.00946013);
}

double NNfunction_ns_chi02_dL::synapse0x3bbe2a0() {
   return (neuron0x3cde540()*0.00752004);
}

double NNfunction_ns_chi02_dL::synapse0x3cd9ab0() {
   return (neuron0x3cde880()*0.0083524);
}

double NNfunction_ns_chi02_dL::synapse0x3aa3600() {
   return (neuron0x3cd9d50()*-0.159802);
}

double NNfunction_ns_chi02_dL::synapse0x3cdfce0() {
   return (neuron0x3cda000()*-0.718607);
}

double NNfunction_ns_chi02_dL::synapse0x3cdfd20() {
   return (neuron0x3cda340()*-0.266344);
}

double NNfunction_ns_chi02_dL::synapse0x3cdfd60() {
   return (neuron0x3cda680()*1.05673);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0970() {
   return (neuron0x3cda9c0()*0.427736);
}

double NNfunction_ns_chi02_dL::synapse0x3ce09b0() {
   return (neuron0x3cdad00()*-0.541576);
}

double NNfunction_ns_chi02_dL::synapse0x3ce09f0() {
   return (neuron0x3cdb040()*0.12335);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0a30() {
   return (neuron0x3cdb380()*-0.0307537);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0a70() {
   return (neuron0x3cdb6c0()*-0.14642);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0ab0() {
   return (neuron0x3cdba00()*0.207618);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0af0() {
   return (neuron0x3cdbd40()*-0.54659);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0b30() {
   return (neuron0x3cdc080()*0.290737);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0b70() {
   return (neuron0x3cdc3c0()*0.105226);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0bb0() {
   return (neuron0x3cdc700()*0.0269002);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0bf0() {
   return (neuron0x3cdca40()*0.638747);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0c30() {
   return (neuron0x3cdcd80()*-1.69701);
}

double NNfunction_ns_chi02_dL::synapse0x3cd9af0() {
   return (neuron0x3cdd0c0()*-1.44097);
}

double NNfunction_ns_chi02_dL::synapse0x3cd9b30() {
   return (neuron0x3cdd620()*-0.324575);
}

double NNfunction_ns_chi02_dL::synapse0x3cd9b70() {
   return (neuron0x3cdd840()*-0.0979194);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0d80() {
   return (neuron0x3cddb80()*1.33528);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0dc0() {
   return (neuron0x3cddec0()*1.73319);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0e00() {
   return (neuron0x3cde200()*-0.104641);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0e40() {
   return (neuron0x3cde540()*-0.628832);
}

double NNfunction_ns_chi02_dL::synapse0x3ce0e80() {
   return (neuron0x3cde880()*1.1472);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1200() {
   return (neuron0x3cd9d50()*-0.545508);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1240() {
   return (neuron0x3cda000()*-0.0753605);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1280() {
   return (neuron0x3cda340()*0.258213);
}

double NNfunction_ns_chi02_dL::synapse0x3ce12c0() {
   return (neuron0x3cda680()*-0.515272);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1300() {
   return (neuron0x3cda9c0()*-0.460265);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1340() {
   return (neuron0x3cdad00()*-0.741515);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1380() {
   return (neuron0x3cdb040()*0.849487);
}

double NNfunction_ns_chi02_dL::synapse0x3ce13c0() {
   return (neuron0x3cdb380()*0.271965);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1400() {
   return (neuron0x3cdb6c0()*-0.436587);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1440() {
   return (neuron0x3cdba00()*-0.591583);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1480() {
   return (neuron0x3cdbd40()*-0.414586);
}

double NNfunction_ns_chi02_dL::synapse0x3ce14c0() {
   return (neuron0x3cdc080()*-0.208377);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1500() {
   return (neuron0x3cdc3c0()*-0.901743);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1540() {
   return (neuron0x3cdc700()*1.08506);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1580() {
   return (neuron0x3cdca40()*0.610869);
}

double NNfunction_ns_chi02_dL::synapse0x3ce15c0() {
   return (neuron0x3cdcd80()*-1.18294);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1050() {
   return (neuron0x3cdd0c0()*0.304542);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1090() {
   return (neuron0x3cdd620()*0.768233);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1710() {
   return (neuron0x3cdd840()*1.20736);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1750() {
   return (neuron0x3cddb80()*-0.356614);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1790() {
   return (neuron0x3cddec0()*0.254148);
}

double NNfunction_ns_chi02_dL::synapse0x3ce17d0() {
   return (neuron0x3cde200()*-0.244407);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1810() {
   return (neuron0x3cde540()*-1.48378);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1850() {
   return (neuron0x3cde880()*0.39513);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1bd0() {
   return (neuron0x3cd9d50()*-0.289745);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1c10() {
   return (neuron0x3cda000()*-0.66797);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1c50() {
   return (neuron0x3cda340()*1.11599);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1c90() {
   return (neuron0x3cda680()*-0.254519);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1cd0() {
   return (neuron0x3cda9c0()*1.66753);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1d10() {
   return (neuron0x3cdad00()*0.562944);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1d50() {
   return (neuron0x3cdb040()*0.620003);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1d90() {
   return (neuron0x3cdb380()*-0.839328);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1dd0() {
   return (neuron0x3cdb6c0()*0.186744);
}

double NNfunction_ns_chi02_dL::synapse0x3aa3060() {
   return (neuron0x3cdba00()*-0.954789);
}

double NNfunction_ns_chi02_dL::synapse0x3aa30a0() {
   return (neuron0x3cdbd40()*-1.67677);
}

double NNfunction_ns_chi02_dL::synapse0x3aa30e0() {
   return (neuron0x3cdc080()*-0.0594106);
}

double NNfunction_ns_chi02_dL::synapse0x3aa3120() {
   return (neuron0x3cdc3c0()*-0.771557);
}

double NNfunction_ns_chi02_dL::synapse0x3aa3160() {
   return (neuron0x3cdc700()*-0.195);
}

double NNfunction_ns_chi02_dL::synapse0x3aa31a0() {
   return (neuron0x3cdca40()*0.0229927);
}

double NNfunction_ns_chi02_dL::synapse0x3aa31e0() {
   return (neuron0x3cdcd80()*1.15544);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1a20() {
   return (neuron0x3cdd0c0()*0.0499836);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1a60() {
   return (neuron0x3cdd620()*-0.359547);
}

double NNfunction_ns_chi02_dL::synapse0x3aa3330() {
   return (neuron0x3cdd840()*-0.824497);
}

double NNfunction_ns_chi02_dL::synapse0x3aa3370() {
   return (neuron0x3cddb80()*0.46322);
}

double NNfunction_ns_chi02_dL::synapse0x3aa33b0() {
   return (neuron0x3cddec0()*1.4404);
}

double NNfunction_ns_chi02_dL::synapse0x3aa33f0() {
   return (neuron0x3cde200()*-0.062601);
}

double NNfunction_ns_chi02_dL::synapse0x3aa3430() {
   return (neuron0x3cde540()*0.224055);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2620() {
   return (neuron0x3cde880()*-2.00957);
}

double NNfunction_ns_chi02_dL::synapse0x3ce29a0() {
   return (neuron0x3cd9d50()*-0.0203305);
}

double NNfunction_ns_chi02_dL::synapse0x3ce29e0() {
   return (neuron0x3cda000()*-0.413134);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2a20() {
   return (neuron0x3cda340()*-0.75072);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2a60() {
   return (neuron0x3cda680()*-0.0262451);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2aa0() {
   return (neuron0x3cda9c0()*0.0229779);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2ae0() {
   return (neuron0x3cdad00()*0.0338257);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2b20() {
   return (neuron0x3cdb040()*0.00658032);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2b60() {
   return (neuron0x3cdb380()*0.0111405);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2ba0() {
   return (neuron0x3cdb6c0()*-0.00273238);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2be0() {
   return (neuron0x3cdba00()*0.0128856);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2c20() {
   return (neuron0x3cdbd40()*0.0274865);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2c60() {
   return (neuron0x3cdc080()*-0.358227);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2ca0() {
   return (neuron0x3cdc3c0()*-0.0323756);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2ce0() {
   return (neuron0x3cdc700()*0.00314829);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2d20() {
   return (neuron0x3cdca40()*0.00716878);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2d60() {
   return (neuron0x3cdcd80()*-0.000861716);
}

double NNfunction_ns_chi02_dL::synapse0x3ce27f0() {
   return (neuron0x3cdd0c0()*-0.018644);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2830() {
   return (neuron0x3cdd620()*0.00450909);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2eb0() {
   return (neuron0x3cdd840()*-0.0138971);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2ef0() {
   return (neuron0x3cddb80()*-0.0468655);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2f30() {
   return (neuron0x3cddec0()*-0.000591357);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2f70() {
   return (neuron0x3cde200()*-0.0029671);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2fb0() {
   return (neuron0x3cde540()*-0.0372861);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2ff0() {
   return (neuron0x3cde880()*4.28114);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3370() {
   return (neuron0x3cd9d50()*0.0514815);
}

double NNfunction_ns_chi02_dL::synapse0x3ce33b0() {
   return (neuron0x3cda000()*-0.0141442);
}

double NNfunction_ns_chi02_dL::synapse0x3ce33f0() {
   return (neuron0x3cda340()*-0.0316746);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3430() {
   return (neuron0x3cda680()*0.0193222);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3470() {
   return (neuron0x3cda9c0()*0.00310941);
}

double NNfunction_ns_chi02_dL::synapse0x3ce34b0() {
   return (neuron0x3cdad00()*0.0120697);
}

double NNfunction_ns_chi02_dL::synapse0x3ce34f0() {
   return (neuron0x3cdb040()*0.00343623);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3530() {
   return (neuron0x3cdb380()*-0.0166514);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3570() {
   return (neuron0x3cdb6c0()*-0.0124295);
}

double NNfunction_ns_chi02_dL::synapse0x3ce35b0() {
   return (neuron0x3cdba00()*-0.0134207);
}

double NNfunction_ns_chi02_dL::synapse0x3ce35f0() {
   return (neuron0x3cdbd40()*0.00126645);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3630() {
   return (neuron0x3cdc080()*0.816425);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3670() {
   return (neuron0x3cdc3c0()*0.00452527);
}

double NNfunction_ns_chi02_dL::synapse0x3ce36b0() {
   return (neuron0x3cdc700()*0.00718397);
}

double NNfunction_ns_chi02_dL::synapse0x3ce36f0() {
   return (neuron0x3cdca40()*-0.0269467);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3730() {
   return (neuron0x3cdcd80()*0.00379191);
}

double NNfunction_ns_chi02_dL::synapse0x3ce31c0() {
   return (neuron0x3cdd0c0()*-0.0142234);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3200() {
   return (neuron0x3cdd620()*-0.00676593);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3880() {
   return (neuron0x3cdd840()*-0.00458952);
}

double NNfunction_ns_chi02_dL::synapse0x3ce38c0() {
   return (neuron0x3cddb80()*0.0145481);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3900() {
   return (neuron0x3cddec0()*-0.015541);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3940() {
   return (neuron0x3cde200()*-0.0251243);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3980() {
   return (neuron0x3cde540()*-0.00478202);
}

double NNfunction_ns_chi02_dL::synapse0x3ce39c0() {
   return (neuron0x3cde880()*-3.20478);
}

double NNfunction_ns_chi02_dL::synapse0x3cdd510() {
   return (neuron0x3cd9d50()*-0.0833573);
}

double NNfunction_ns_chi02_dL::synapse0x3cdd550() {
   return (neuron0x3cda000()*-0.0568943);
}

double NNfunction_ns_chi02_dL::synapse0x3cdd590() {
   return (neuron0x3cda340()*0.256436);
}

double NNfunction_ns_chi02_dL::synapse0x3cdd5d0() {
   return (neuron0x3cda680()*-0.00927407);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3f50() {
   return (neuron0x3cda9c0()*-0.0301557);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3f90() {
   return (neuron0x3cdad00()*-5.45929e-05);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3fd0() {
   return (neuron0x3cdb040()*-0.0295208);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4010() {
   return (neuron0x3cdb380()*-0.0247675);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4050() {
   return (neuron0x3cdb6c0()*-0.0102483);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4090() {
   return (neuron0x3cdba00()*0.0019987);
}

double NNfunction_ns_chi02_dL::synapse0x3ce40d0() {
   return (neuron0x3cdbd40()*-0.0192667);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4110() {
   return (neuron0x3cdc080()*-0.0766904);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4150() {
   return (neuron0x3cdc3c0()*0.0292011);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4190() {
   return (neuron0x3cdc700()*0.00771616);
}

double NNfunction_ns_chi02_dL::synapse0x3ce41d0() {
   return (neuron0x3cdca40()*-0.0158462);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4210() {
   return (neuron0x3cdcd80()*0.0433219);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3b90() {
   return (neuron0x3cdd0c0()*0.0219377);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3bd0() {
   return (neuron0x3cdd620()*0.0105652);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4360() {
   return (neuron0x3cdd840()*0.0367451);
}

double NNfunction_ns_chi02_dL::synapse0x3ce43a0() {
   return (neuron0x3cddb80()*0.00585971);
}

double NNfunction_ns_chi02_dL::synapse0x3ce43e0() {
   return (neuron0x3cddec0()*0.0490479);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4420() {
   return (neuron0x3cde200()*-0.0211447);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4460() {
   return (neuron0x3cde540()*-0.0386463);
}

double NNfunction_ns_chi02_dL::synapse0x3ce44a0() {
   return (neuron0x3cde880()*4.06012);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4820() {
   return (neuron0x3cd9d50()*-0.00114786);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4860() {
   return (neuron0x3cda000()*0.00348668);
}

double NNfunction_ns_chi02_dL::synapse0x3ce48a0() {
   return (neuron0x3cda340()*-0.0122777);
}

double NNfunction_ns_chi02_dL::synapse0x3ce48e0() {
   return (neuron0x3cda680()*-2.08164);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4920() {
   return (neuron0x3cda9c0()*0.000628129);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4960() {
   return (neuron0x3cdad00()*-0.00441963);
}

double NNfunction_ns_chi02_dL::synapse0x3ce49a0() {
   return (neuron0x3cdb040()*0.00218211);
}

double NNfunction_ns_chi02_dL::synapse0x3ce49e0() {
   return (neuron0x3cdb380()*0.00509431);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4a20() {
   return (neuron0x3cdb6c0()*-0.000137684);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4a60() {
   return (neuron0x3cdba00()*2.76697e-05);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4aa0() {
   return (neuron0x3cdbd40()*0.00485552);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4ae0() {
   return (neuron0x3cdc080()*0.344555);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4b20() {
   return (neuron0x3cdc3c0()*-0.00864175);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4b60() {
   return (neuron0x3cdc700()*0.00303414);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4ba0() {
   return (neuron0x3cdca40()*-0.00412007);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4be0() {
   return (neuron0x3cdcd80()*-0.00497672);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4670() {
   return (neuron0x3cdd0c0()*0.00225805);
}

double NNfunction_ns_chi02_dL::synapse0x3ce46b0() {
   return (neuron0x3cdd620()*0.00884874);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4d30() {
   return (neuron0x3cdd840()*0.00552842);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4d70() {
   return (neuron0x3cddb80()*0.00118963);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4db0() {
   return (neuron0x3cddec0()*-0.000274914);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4df0() {
   return (neuron0x3cde200()*0.00246404);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4e30() {
   return (neuron0x3cde540()*-0.00311562);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4e70() {
   return (neuron0x3cde880()*0.00479963);
}

double NNfunction_ns_chi02_dL::synapse0x3ce51f0() {
   return (neuron0x3cd9d50()*0.018363);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5230() {
   return (neuron0x3cda000()*0.0106494);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5270() {
   return (neuron0x3cda340()*0.0822552);
}

double NNfunction_ns_chi02_dL::synapse0x3ce52b0() {
   return (neuron0x3cda680()*0.0108951);
}

double NNfunction_ns_chi02_dL::synapse0x3ce52f0() {
   return (neuron0x3cda9c0()*-0.0251081);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5330() {
   return (neuron0x3cdad00()*-0.00993033);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5370() {
   return (neuron0x3cdb040()*-0.00622808);
}

double NNfunction_ns_chi02_dL::synapse0x3ce53b0() {
   return (neuron0x3cdb380()*-0.00932154);
}

double NNfunction_ns_chi02_dL::synapse0x3ce53f0() {
   return (neuron0x3cdb6c0()*-0.00357462);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5430() {
   return (neuron0x3cdba00()*-0.000937126);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5470() {
   return (neuron0x3cdbd40()*-0.0109381);
}

double NNfunction_ns_chi02_dL::synapse0x3ce54b0() {
   return (neuron0x3cdc080()*0.0421202);
}

double NNfunction_ns_chi02_dL::synapse0x3ce54f0() {
   return (neuron0x3cdc3c0()*-0.00360671);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5530() {
   return (neuron0x3cdc700()*-0.01864);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5570() {
   return (neuron0x3cdca40()*-0.0157459);
}

double NNfunction_ns_chi02_dL::synapse0x3ce55b0() {
   return (neuron0x3cdcd80()*-0.00801011);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5040() {
   return (neuron0x3cdd0c0()*0.0119704);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5080() {
   return (neuron0x3cdd620()*-0.00237447);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1e10() {
   return (neuron0x3cdd840()*0.0140623);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1e50() {
   return (neuron0x3cddb80()*0.0294076);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1e90() {
   return (neuron0x3cddec0()*0.0189537);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1ed0() {
   return (neuron0x3cde200()*-0.0131453);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1f10() {
   return (neuron0x3cde540()*-0.0197196);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1f50() {
   return (neuron0x3cde880()*-11.2814);
}

double NNfunction_ns_chi02_dL::synapse0x3ce22d0() {
   return (neuron0x3cd9d50()*0.0212186);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2310() {
   return (neuron0x3cda000()*-0.0139541);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2350() {
   return (neuron0x3cda340()*0.0863774);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2390() {
   return (neuron0x3cda680()*0.000895777);
}

double NNfunction_ns_chi02_dL::synapse0x3ce23d0() {
   return (neuron0x3cda9c0()*0.0399259);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2410() {
   return (neuron0x3cdad00()*-0.0260174);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2450() {
   return (neuron0x3cdb040()*0.0138965);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2490() {
   return (neuron0x3cdb380()*-0.0168305);
}

double NNfunction_ns_chi02_dL::synapse0x3ce24d0() {
   return (neuron0x3cdb6c0()*-0.0104009);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2510() {
   return (neuron0x3cdba00()*-0.026968);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2550() {
   return (neuron0x3cdbd40()*-0.00492511);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2590() {
   return (neuron0x3cdc080()*-0.0112579);
}

double NNfunction_ns_chi02_dL::synapse0x3ce25d0() {
   return (neuron0x3cdc3c0()*0.0152831);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6710() {
   return (neuron0x3cdc700()*-0.00300588);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6750() {
   return (neuron0x3cdca40()*0.00742639);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6790() {
   return (neuron0x3cdcd80()*-0.000706777);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2120() {
   return (neuron0x3cdd0c0()*-0.00377355);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2160() {
   return (neuron0x3cdd620()*-0.00607359);
}

double NNfunction_ns_chi02_dL::synapse0x3ce68e0() {
   return (neuron0x3cdd840()*-0.00605672);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6920() {
   return (neuron0x3cddb80()*-0.0127475);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6960() {
   return (neuron0x3cddec0()*-0.0196239);
}

double NNfunction_ns_chi02_dL::synapse0x3ce69a0() {
   return (neuron0x3cde200()*-0.0286037);
}

double NNfunction_ns_chi02_dL::synapse0x3ce69e0() {
   return (neuron0x3cde540()*0.0131137);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6a20() {
   return (neuron0x3cde880()*12.4566);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6da0() {
   return (neuron0x3cd9d50()*-0.247616);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6de0() {
   return (neuron0x3cda000()*0.776874);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6e20() {
   return (neuron0x3cda340()*-0.8959);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6e60() {
   return (neuron0x3cda680()*-1.38006);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6ea0() {
   return (neuron0x3cda9c0()*-1.3653);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6ee0() {
   return (neuron0x3cdad00()*0.78155);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6f20() {
   return (neuron0x3cdb040()*-0.114937);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6f60() {
   return (neuron0x3cdb380()*-0.20354);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6fa0() {
   return (neuron0x3cdb6c0()*-0.410374);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6fe0() {
   return (neuron0x3cdba00()*-0.833104);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7020() {
   return (neuron0x3cdbd40()*0.0445154);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7060() {
   return (neuron0x3cdc080()*0.0497951);
}

double NNfunction_ns_chi02_dL::synapse0x3ce70a0() {
   return (neuron0x3cdc3c0()*0.997343);
}

double NNfunction_ns_chi02_dL::synapse0x3ce70e0() {
   return (neuron0x3cdc700()*1.27798);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7120() {
   return (neuron0x3cdca40()*-2.42971);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7160() {
   return (neuron0x3cdcd80()*1.12988);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6bf0() {
   return (neuron0x3cdd0c0()*-0.112345);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6c30() {
   return (neuron0x3cdd620()*0.626702);
}

double NNfunction_ns_chi02_dL::synapse0x3ce72b0() {
   return (neuron0x3cdd840()*-0.397243);
}

double NNfunction_ns_chi02_dL::synapse0x3ce72f0() {
   return (neuron0x3cddb80()*1.11246);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7330() {
   return (neuron0x3cddec0()*0.042866);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7370() {
   return (neuron0x3cde200()*-0.473801);
}

double NNfunction_ns_chi02_dL::synapse0x3ce73b0() {
   return (neuron0x3cde540()*-0.179319);
}

double NNfunction_ns_chi02_dL::synapse0x3ce73f0() {
   return (neuron0x3cde880()*0.531718);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7770() {
   return (neuron0x3cd9d50()*1.24676);
}

double NNfunction_ns_chi02_dL::synapse0x3ce77b0() {
   return (neuron0x3cda000()*0.527687);
}

double NNfunction_ns_chi02_dL::synapse0x3ce77f0() {
   return (neuron0x3cda340()*-0.195465);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7830() {
   return (neuron0x3cda680()*0.420633);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7870() {
   return (neuron0x3cda9c0()*-0.236111);
}

double NNfunction_ns_chi02_dL::synapse0x3ce78b0() {
   return (neuron0x3cdad00()*0.345897);
}

double NNfunction_ns_chi02_dL::synapse0x3ce78f0() {
   return (neuron0x3cdb040()*1.30334);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7930() {
   return (neuron0x3cdb380()*0.545056);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7970() {
   return (neuron0x3cdb6c0()*1.02067);
}

double NNfunction_ns_chi02_dL::synapse0x3ce79b0() {
   return (neuron0x3cdba00()*-0.264024);
}

double NNfunction_ns_chi02_dL::synapse0x3ce79f0() {
   return (neuron0x3cdbd40()*-0.814816);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7a30() {
   return (neuron0x3cdc080()*0.0417113);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7a70() {
   return (neuron0x3cdc3c0()*-0.759925);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7ab0() {
   return (neuron0x3cdc700()*-2.02907);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7af0() {
   return (neuron0x3cdca40()*1.09957);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7b30() {
   return (neuron0x3cdcd80()*0.608706);
}

double NNfunction_ns_chi02_dL::synapse0x3ce75c0() {
   return (neuron0x3cdd0c0()*-1.00572);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7600() {
   return (neuron0x3cdd620()*-0.375897);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7c80() {
   return (neuron0x3cdd840()*0.476723);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7cc0() {
   return (neuron0x3cddb80()*-0.421336);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7d00() {
   return (neuron0x3cddec0()*-0.928403);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7d40() {
   return (neuron0x3cde200()*-0.146783);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7d80() {
   return (neuron0x3cde540()*0.946728);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7dc0() {
   return (neuron0x3cde880()*0.856265);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8140() {
   return (neuron0x3cd9d50()*-1.30295);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8180() {
   return (neuron0x3cda000()*-0.0967122);
}

double NNfunction_ns_chi02_dL::synapse0x3ce81c0() {
   return (neuron0x3cda340()*1.26626);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8200() {
   return (neuron0x3cda680()*-1.69184);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8240() {
   return (neuron0x3cda9c0()*-0.192647);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8280() {
   return (neuron0x3cdad00()*0.670544);
}

double NNfunction_ns_chi02_dL::synapse0x3ce82c0() {
   return (neuron0x3cdb040()*-1.01921);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8300() {
   return (neuron0x3cdb380()*1.17488);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8340() {
   return (neuron0x3cdb6c0()*-0.838107);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8380() {
   return (neuron0x3cdba00()*0.5832);
}

double NNfunction_ns_chi02_dL::synapse0x3ce83c0() {
   return (neuron0x3cdbd40()*-1.22995);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8400() {
   return (neuron0x3cdc080()*-1.18619);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8440() {
   return (neuron0x3cdc3c0()*0.882355);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8480() {
   return (neuron0x3cdc700()*0.325905);
}

double NNfunction_ns_chi02_dL::synapse0x3ce84c0() {
   return (neuron0x3cdca40()*-0.159903);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8500() {
   return (neuron0x3cdcd80()*0.557407);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7f90() {
   return (neuron0x3cdd0c0()*-0.0546568);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7fd0() {
   return (neuron0x3cdd620()*0.862444);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8650() {
   return (neuron0x3cdd840()*-0.36259);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8690() {
   return (neuron0x3cddb80()*0.665479);
}

double NNfunction_ns_chi02_dL::synapse0x3ce86d0() {
   return (neuron0x3cddec0()*1.26333);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8710() {
   return (neuron0x3cde200()*0.509159);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8750() {
   return (neuron0x3cde540()*-0.843651);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8790() {
   return (neuron0x3cde880()*0.779089);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8b10() {
   return (neuron0x3cd9d50()*-0.115631);
}

double NNfunction_ns_chi02_dL::synapse0x3cd9ee0() {
   return (neuron0x3cda000()*0.118974);
}

double NNfunction_ns_chi02_dL::synapse0x3cd9f20() {
   return (neuron0x3cda340()*-0.748157);
}

double NNfunction_ns_chi02_dL::synapse0x3cda220() {
   return (neuron0x3cda680()*0.487072);
}

double NNfunction_ns_chi02_dL::synapse0x3cda260() {
   return (neuron0x3cda9c0()*0.106935);
}

double NNfunction_ns_chi02_dL::synapse0x3cda560() {
   return (neuron0x3cdad00()*-1.10424);
}

double NNfunction_ns_chi02_dL::synapse0x3cda5a0() {
   return (neuron0x3cdb040()*-0.54355);
}

double NNfunction_ns_chi02_dL::synapse0x3cda8a0() {
   return (neuron0x3cdb380()*-0.289591);
}

double NNfunction_ns_chi02_dL::synapse0x3cda8e0() {
   return (neuron0x3cdb6c0()*0.634144);
}

double NNfunction_ns_chi02_dL::synapse0x3cdabe0() {
   return (neuron0x3cdba00()*-0.320797);
}

double NNfunction_ns_chi02_dL::synapse0x3cdac20() {
   return (neuron0x3cdbd40()*0.425092);
}

double NNfunction_ns_chi02_dL::synapse0x3cdaf20() {
   return (neuron0x3cdc080()*-1.36799);
}

double NNfunction_ns_chi02_dL::synapse0x3cdaf60() {
   return (neuron0x3cdc3c0()*-0.306665);
}

double NNfunction_ns_chi02_dL::synapse0x3cdb260() {
   return (neuron0x3cdc700()*-1.48823);
}

double NNfunction_ns_chi02_dL::synapse0x3cdb2a0() {
   return (neuron0x3cdca40()*0.913935);
}

double NNfunction_ns_chi02_dL::synapse0x3cdb5a0() {
   return (neuron0x3cdcd80()*-0.952268);
}

double NNfunction_ns_chi02_dL::synapse0x3cdb5e0() {
   return (neuron0x3cdd0c0()*-0.191461);
}

double NNfunction_ns_chi02_dL::synapse0x3cdb8e0() {
   return (neuron0x3cdd620()*0.374248);
}

double NNfunction_ns_chi02_dL::synapse0x3cdb920() {
   return (neuron0x3cdd840()*-0.590056);
}

double NNfunction_ns_chi02_dL::synapse0x3cdbc20() {
   return (neuron0x3cddb80()*-0.327767);
}

double NNfunction_ns_chi02_dL::synapse0x3cdbc60() {
   return (neuron0x3cddec0()*-0.310218);
}

double NNfunction_ns_chi02_dL::synapse0x3cdbf60() {
   return (neuron0x3cde200()*0.505077);
}

double NNfunction_ns_chi02_dL::synapse0x3cdbfa0() {
   return (neuron0x3cde540()*0.245342);
}

double NNfunction_ns_chi02_dL::synapse0x3cdc2a0() {
   return (neuron0x3cde880()*-0.183173);
}

double NNfunction_ns_chi02_dL::synapse0x3cdc2e0() {
   return (neuron0x3cd9d50()*-0.00155487);
}

double NNfunction_ns_chi02_dL::synapse0x3cdcfa0() {
   return (neuron0x3cda000()*8.00144);
}

double NNfunction_ns_chi02_dL::synapse0x3cdcfe0() {
   return (neuron0x3cda340()*-0.0194412);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8960() {
   return (neuron0x3cda680()*0.00847761);
}

double NNfunction_ns_chi02_dL::synapse0x3ce89a0() {
   return (neuron0x3cda9c0()*-0.0071583);
}

double NNfunction_ns_chi02_dL::synapse0x3cdd2e0() {
   return (neuron0x3cdad00()*0.0050223);
}

double NNfunction_ns_chi02_dL::synapse0x3cdd320() {
   return (neuron0x3cdb040()*0.0134786);
}

double NNfunction_ns_chi02_dL::synapse0x3cdda60() {
   return (neuron0x3cdb380()*0.0103592);
}

double NNfunction_ns_chi02_dL::synapse0x3cddaa0() {
   return (neuron0x3cdb6c0()*-0.00647376);
}

double NNfunction_ns_chi02_dL::synapse0x3cddda0() {
   return (neuron0x3cdba00()*0.00706914);
}

double NNfunction_ns_chi02_dL::synapse0x3cddde0() {
   return (neuron0x3cdbd40()*-0.00794635);
}

double NNfunction_ns_chi02_dL::synapse0x3cde0e0() {
   return (neuron0x3cdc080()*-0.03352);
}

double NNfunction_ns_chi02_dL::synapse0x3cde120() {
   return (neuron0x3cdc3c0()*-0.0115547);
}

double NNfunction_ns_chi02_dL::synapse0x3cde420() {
   return (neuron0x3cdc700()*-0.0196838);
}

double NNfunction_ns_chi02_dL::synapse0x3cde460() {
   return (neuron0x3cdca40()*0.0128706);
}

double NNfunction_ns_chi02_dL::synapse0x3cde760() {
   return (neuron0x3cdcd80()*-0.0037874);
}

double NNfunction_ns_chi02_dL::synapse0x3cde7a0() {
   return (neuron0x3cdd0c0()*-0.00681407);
}

double NNfunction_ns_chi02_dL::synapse0x3cdeaa0() {
   return (neuron0x3cdd620()*-9.35153e-06);
}

double NNfunction_ns_chi02_dL::synapse0x3cdeae0() {
   return (neuron0x3cdd840()*-0.0350001);
}

double NNfunction_ns_chi02_dL::synapse0x3cdc5e0() {
   return (neuron0x3cddb80()*-0.00758294);
}

double NNfunction_ns_chi02_dL::synapse0x3cdc620() {
   return (neuron0x3cddec0()*-0.00667595);
}

double NNfunction_ns_chi02_dL::synapse0x3a94120() {
   return (neuron0x3cde200()*-0.02445);
}

double NNfunction_ns_chi02_dL::synapse0x3a94160() {
   return (neuron0x3cde540()*0.00553717);
}

double NNfunction_ns_chi02_dL::synapse0x3cea880() {
   return (neuron0x3cde880()*-0.0644557);
}

double NNfunction_ns_chi02_dL::synapse0x3ceac00() {
   return (neuron0x3cd9d50()*-0.0674888);
}

double NNfunction_ns_chi02_dL::synapse0x3ceac40() {
   return (neuron0x3cda000()*3.1547);
}

double NNfunction_ns_chi02_dL::synapse0x3ceac80() {
   return (neuron0x3cda340()*-0.541919);
}

double NNfunction_ns_chi02_dL::synapse0x3ceacc0() {
   return (neuron0x3cda680()*0.024065);
}

double NNfunction_ns_chi02_dL::synapse0x3cead00() {
   return (neuron0x3cda9c0()*-0.0336266);
}

double NNfunction_ns_chi02_dL::synapse0x3cead40() {
   return (neuron0x3cdad00()*-0.00978089);
}

double NNfunction_ns_chi02_dL::synapse0x3cead80() {
   return (neuron0x3cdb040()*-0.0194354);
}

double NNfunction_ns_chi02_dL::synapse0x3ceadc0() {
   return (neuron0x3cdb380()*0.00573191);
}

double NNfunction_ns_chi02_dL::synapse0x3ceae00() {
   return (neuron0x3cdb6c0()*0.00731366);
}

double NNfunction_ns_chi02_dL::synapse0x3ceae40() {
   return (neuron0x3cdba00()*-0.0429028);
}

double NNfunction_ns_chi02_dL::synapse0x3ceae80() {
   return (neuron0x3cdbd40()*-0.0487201);
}

double NNfunction_ns_chi02_dL::synapse0x3ceaec0() {
   return (neuron0x3cdc080()*0.418438);
}

double NNfunction_ns_chi02_dL::synapse0x3ceaf00() {
   return (neuron0x3cdc3c0()*0.0122178);
}

double NNfunction_ns_chi02_dL::synapse0x3ceaf40() {
   return (neuron0x3cdc700()*-0.00359524);
}

double NNfunction_ns_chi02_dL::synapse0x3ceaf80() {
   return (neuron0x3cdca40()*0.0314387);
}

double NNfunction_ns_chi02_dL::synapse0x3ceafc0() {
   return (neuron0x3cdcd80()*-0.0400023);
}

double NNfunction_ns_chi02_dL::synapse0x3ceaa50() {
   return (neuron0x3cdd0c0()*0.00347732);
}

double NNfunction_ns_chi02_dL::synapse0x3ceaa90() {
   return (neuron0x3cdd620()*-0.0055031);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb110() {
   return (neuron0x3cdd840()*-0.00470955);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb150() {
   return (neuron0x3cddb80()*0.0187601);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb190() {
   return (neuron0x3cddec0()*-0.0511659);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb1d0() {
   return (neuron0x3cde200()*0.0430505);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb210() {
   return (neuron0x3cde540()*-0.00624642);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb250() {
   return (neuron0x3cde880()*-1.7328);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb5d0() {
   return (neuron0x3cd9d50()*-0.415033);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb610() {
   return (neuron0x3cda000()*0.288829);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb650() {
   return (neuron0x3cda340()*-0.149122);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb690() {
   return (neuron0x3cda680()*0.430821);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb6d0() {
   return (neuron0x3cda9c0()*-0.118955);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb710() {
   return (neuron0x3cdad00()*0.335651);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb750() {
   return (neuron0x3cdb040()*-0.595002);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb790() {
   return (neuron0x3cdb380()*-1.14054);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb7d0() {
   return (neuron0x3cdb6c0()*-0.509219);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb810() {
   return (neuron0x3cdba00()*-0.358923);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb850() {
   return (neuron0x3cdbd40()*-0.163385);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb890() {
   return (neuron0x3cdc080()*1.02487);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb8d0() {
   return (neuron0x3cdc3c0()*0.197294);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb910() {
   return (neuron0x3cdc700()*0.269495);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb950() {
   return (neuron0x3cdca40()*-0.659841);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb990() {
   return (neuron0x3cdcd80()*-0.17587);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb420() {
   return (neuron0x3cdd0c0()*-0.16599);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb460() {
   return (neuron0x3cdd620()*-0.269473);
}

double NNfunction_ns_chi02_dL::synapse0x3cebae0() {
   return (neuron0x3cdd840()*-0.405282);
}

double NNfunction_ns_chi02_dL::synapse0x3cebb20() {
   return (neuron0x3cddb80()*0.493424);
}

double NNfunction_ns_chi02_dL::synapse0x3cebb60() {
   return (neuron0x3cddec0()*-0.61674);
}

double NNfunction_ns_chi02_dL::synapse0x3cebba0() {
   return (neuron0x3cde200()*0.388);
}

double NNfunction_ns_chi02_dL::synapse0x3cebbe0() {
   return (neuron0x3cde540()*0.266182);
}

double NNfunction_ns_chi02_dL::synapse0x3cebc20() {
   return (neuron0x3cde880()*-0.0818786);
}

double NNfunction_ns_chi02_dL::synapse0x3cebfa0() {
   return (neuron0x3cd9d50()*0.00340863);
}

double NNfunction_ns_chi02_dL::synapse0x3cebfe0() {
   return (neuron0x3cda000()*1.0191);
}

double NNfunction_ns_chi02_dL::synapse0x3cec020() {
   return (neuron0x3cda340()*-2.71475);
}

double NNfunction_ns_chi02_dL::synapse0x3cec060() {
   return (neuron0x3cda680()*-0.00495861);
}

double NNfunction_ns_chi02_dL::synapse0x3cec0a0() {
   return (neuron0x3cda9c0()*0.0693866);
}

double NNfunction_ns_chi02_dL::synapse0x3cec0e0() {
   return (neuron0x3cdad00()*0.0106921);
}

double NNfunction_ns_chi02_dL::synapse0x3cec120() {
   return (neuron0x3cdb040()*-0.0339443);
}

double NNfunction_ns_chi02_dL::synapse0x3cec160() {
   return (neuron0x3cdb380()*0.0554139);
}

double NNfunction_ns_chi02_dL::synapse0x3cec1a0() {
   return (neuron0x3cdb6c0()*-0.0656473);
}

double NNfunction_ns_chi02_dL::synapse0x3cec1e0() {
   return (neuron0x3cdba00()*-0.0476959);
}

double NNfunction_ns_chi02_dL::synapse0x3cec220() {
   return (neuron0x3cdbd40()*-0.0210722);
}

double NNfunction_ns_chi02_dL::synapse0x3cec260() {
   return (neuron0x3cdc080()*-1.65605);
}

double NNfunction_ns_chi02_dL::synapse0x3cec2a0() {
   return (neuron0x3cdc3c0()*-0.0345308);
}

double NNfunction_ns_chi02_dL::synapse0x3cec2e0() {
   return (neuron0x3cdc700()*-0.044316);
}

double NNfunction_ns_chi02_dL::synapse0x3cec320() {
   return (neuron0x3cdca40()*0.0158129);
}

double NNfunction_ns_chi02_dL::synapse0x3cec360() {
   return (neuron0x3cdcd80()*-0.0171883);
}

double NNfunction_ns_chi02_dL::synapse0x3cebdf0() {
   return (neuron0x3cdd0c0()*0.0500878);
}

double NNfunction_ns_chi02_dL::synapse0x3cebe30() {
   return (neuron0x3cdd620()*-0.046544);
}

double NNfunction_ns_chi02_dL::synapse0x3cec4b0() {
   return (neuron0x3cdd840()*-1.6147e-05);
}

double NNfunction_ns_chi02_dL::synapse0x3cec4f0() {
   return (neuron0x3cddb80()*0.00385115);
}

double NNfunction_ns_chi02_dL::synapse0x3cec530() {
   return (neuron0x3cddec0()*-0.0448434);
}

double NNfunction_ns_chi02_dL::synapse0x3cec570() {
   return (neuron0x3cde200()*-0.00305266);
}

double NNfunction_ns_chi02_dL::synapse0x3cec5b0() {
   return (neuron0x3cde540()*-0.0393799);
}

double NNfunction_ns_chi02_dL::synapse0x3cec5f0() {
   return (neuron0x3cde880()*0.0511053);
}

double NNfunction_ns_chi02_dL::synapse0x3cec970() {
   return (neuron0x3cd9d50()*-0.0860646);
}

double NNfunction_ns_chi02_dL::synapse0x3cec9b0() {
   return (neuron0x3cda000()*0.385431);
}

double NNfunction_ns_chi02_dL::synapse0x3cec9f0() {
   return (neuron0x3cda340()*-0.110145);
}

double NNfunction_ns_chi02_dL::synapse0x3ceca30() {
   return (neuron0x3cda680()*1.12971);
}

double NNfunction_ns_chi02_dL::synapse0x3ceca70() {
   return (neuron0x3cda9c0()*-0.481017);
}

double NNfunction_ns_chi02_dL::synapse0x3cecab0() {
   return (neuron0x3cdad00()*-0.177766);
}

double NNfunction_ns_chi02_dL::synapse0x3cecaf0() {
   return (neuron0x3cdb040()*-0.215972);
}

double NNfunction_ns_chi02_dL::synapse0x3cecb30() {
   return (neuron0x3cdb380()*0.532335);
}

double NNfunction_ns_chi02_dL::synapse0x3cecb70() {
   return (neuron0x3cdb6c0()*0.0171151);
}

double NNfunction_ns_chi02_dL::synapse0x3cecbb0() {
   return (neuron0x3cdba00()*1.79567);
}

double NNfunction_ns_chi02_dL::synapse0x3cecbf0() {
   return (neuron0x3cdbd40()*1.18604);
}

double NNfunction_ns_chi02_dL::synapse0x3cecc30() {
   return (neuron0x3cdc080()*-0.717749);
}

double NNfunction_ns_chi02_dL::synapse0x3cecc70() {
   return (neuron0x3cdc3c0()*-1.18335);
}

double NNfunction_ns_chi02_dL::synapse0x3ceccb0() {
   return (neuron0x3cdc700()*-0.656774);
}

double NNfunction_ns_chi02_dL::synapse0x3ceccf0() {
   return (neuron0x3cdca40()*-0.094676);
}

double NNfunction_ns_chi02_dL::synapse0x3cecd30() {
   return (neuron0x3cdcd80()*0.379347);
}

double NNfunction_ns_chi02_dL::synapse0x3cec7c0() {
   return (neuron0x3cdd0c0()*0.208901);
}

double NNfunction_ns_chi02_dL::synapse0x3cec800() {
   return (neuron0x3cdd620()*-1.01989);
}

double NNfunction_ns_chi02_dL::synapse0x3cece80() {
   return (neuron0x3cdd840()*-0.769218);
}

double NNfunction_ns_chi02_dL::synapse0x3cecec0() {
   return (neuron0x3cddb80()*1.86342);
}

double NNfunction_ns_chi02_dL::synapse0x3cecf00() {
   return (neuron0x3cddec0()*0.476378);
}

double NNfunction_ns_chi02_dL::synapse0x3cecf40() {
   return (neuron0x3cde200()*-0.552512);
}

double NNfunction_ns_chi02_dL::synapse0x3cecf80() {
   return (neuron0x3cde540()*-0.583788);
}

double NNfunction_ns_chi02_dL::synapse0x3cecfc0() {
   return (neuron0x3cde880()*-0.0413064);
}

double NNfunction_ns_chi02_dL::synapse0x3ced340() {
   return (neuron0x3cd9d50()*-0.0524511);
}

double NNfunction_ns_chi02_dL::synapse0x3ced380() {
   return (neuron0x3cda000()*0.238951);
}

double NNfunction_ns_chi02_dL::synapse0x3ced3c0() {
   return (neuron0x3cda340()*6.65607);
}

double NNfunction_ns_chi02_dL::synapse0x3ced400() {
   return (neuron0x3cda680()*0.0175502);
}

double NNfunction_ns_chi02_dL::synapse0x3ced440() {
   return (neuron0x3cda9c0()*0.0255503);
}

double NNfunction_ns_chi02_dL::synapse0x3ced480() {
   return (neuron0x3cdad00()*0.0497615);
}

double NNfunction_ns_chi02_dL::synapse0x3ced4c0() {
   return (neuron0x3cdb040()*-0.0056379);
}

double NNfunction_ns_chi02_dL::synapse0x3ced500() {
   return (neuron0x3cdb380()*0.00862532);
}

double NNfunction_ns_chi02_dL::synapse0x3ced540() {
   return (neuron0x3cdb6c0()*-0.0089641);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5700() {
   return (neuron0x3cdba00()*0.0326057);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5740() {
   return (neuron0x3cdbd40()*0.0114227);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5780() {
   return (neuron0x3cdc080()*0.215367);
}

double NNfunction_ns_chi02_dL::synapse0x3ce57c0() {
   return (neuron0x3cdc3c0()*0.00557476);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5800() {
   return (neuron0x3cdc700()*0.0144114);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5840() {
   return (neuron0x3cdca40()*-0.0112988);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5880() {
   return (neuron0x3cdcd80()*0.041012);
}

double NNfunction_ns_chi02_dL::synapse0x3ced190() {
   return (neuron0x3cdd0c0()*-0.027954);
}

double NNfunction_ns_chi02_dL::synapse0x3ced1d0() {
   return (neuron0x3cdd620()*-0.0146877);
}

double NNfunction_ns_chi02_dL::synapse0x3ce59d0() {
   return (neuron0x3cdd840()*0.00379806);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5a10() {
   return (neuron0x3cddb80()*0.00349278);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5a50() {
   return (neuron0x3cddec0()*0.0481278);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5a90() {
   return (neuron0x3cde200()*0.00455772);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5ad0() {
   return (neuron0x3cde540()*-0.0138162);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5b10() {
   return (neuron0x3cde880()*-0.0715993);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5e90() {
   return (neuron0x3cd9d50()*0.0140128);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5ed0() {
   return (neuron0x3cda000()*0.0136095);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5f10() {
   return (neuron0x3cda340()*-1.86402);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5f50() {
   return (neuron0x3cda680()*0.0276842);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5f90() {
   return (neuron0x3cda9c0()*0.00379092);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5fd0() {
   return (neuron0x3cdad00()*0.0210015);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6010() {
   return (neuron0x3cdb040()*0.00809908);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6050() {
   return (neuron0x3cdb380()*0.0223782);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6090() {
   return (neuron0x3cdb6c0()*-0.0158755);
}

double NNfunction_ns_chi02_dL::synapse0x3ce60d0() {
   return (neuron0x3cdba00()*0.0110567);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6110() {
   return (neuron0x3cdbd40()*-0.0026843);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6150() {
   return (neuron0x3cdc080()*0.568886);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6190() {
   return (neuron0x3cdc3c0()*0.00404259);
}

double NNfunction_ns_chi02_dL::synapse0x3ce61d0() {
   return (neuron0x3cdc700()*-0.00934439);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6210() {
   return (neuron0x3cdca40()*-0.00795546);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6250() {
   return (neuron0x3cdcd80()*0.00634415);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5ce0() {
   return (neuron0x3cdd0c0()*-0.00409338);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5d20() {
   return (neuron0x3cdd620()*-0.0162101);
}

double NNfunction_ns_chi02_dL::synapse0x3ce63a0() {
   return (neuron0x3cdd840()*-0.0311537);
}

double NNfunction_ns_chi02_dL::synapse0x3ce63e0() {
   return (neuron0x3cddb80()*-0.00342438);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6420() {
   return (neuron0x3cddec0()*0.00751148);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6460() {
   return (neuron0x3cde200()*0.00136553);
}

double NNfunction_ns_chi02_dL::synapse0x3ce64a0() {
   return (neuron0x3cde540()*-0.00511825);
}

double NNfunction_ns_chi02_dL::synapse0x3ce64e0() {
   return (neuron0x3cde880()*0.156899);
}

double NNfunction_ns_chi02_dL::synapse0x3ce66b0() {
   return (neuron0x3cd9d50()*0.851734);
}

double NNfunction_ns_chi02_dL::synapse0x3cef740() {
   return (neuron0x3cda000()*0.164438);
}

double NNfunction_ns_chi02_dL::synapse0x3cef780() {
   return (neuron0x3cda340()*-0.613332);
}

double NNfunction_ns_chi02_dL::synapse0x3cef7c0() {
   return (neuron0x3cda680()*0.0129964);
}

double NNfunction_ns_chi02_dL::synapse0x3cef800() {
   return (neuron0x3cda9c0()*-1.01485);
}

double NNfunction_ns_chi02_dL::synapse0x3cef840() {
   return (neuron0x3cdad00()*0.177573);
}

double NNfunction_ns_chi02_dL::synapse0x3cef880() {
   return (neuron0x3cdb040()*-0.41056);
}

double NNfunction_ns_chi02_dL::synapse0x3cef8c0() {
   return (neuron0x3cdb380()*-0.328176);
}

double NNfunction_ns_chi02_dL::synapse0x3cef900() {
   return (neuron0x3cdb6c0()*0.242148);
}

double NNfunction_ns_chi02_dL::synapse0x3cef940() {
   return (neuron0x3cdba00()*0.720189);
}

double NNfunction_ns_chi02_dL::synapse0x3cef980() {
   return (neuron0x3cdbd40()*-0.237216);
}

double NNfunction_ns_chi02_dL::synapse0x3cef9c0() {
   return (neuron0x3cdc080()*0.363116);
}

double NNfunction_ns_chi02_dL::synapse0x3cefa00() {
   return (neuron0x3cdc3c0()*-0.279961);
}

double NNfunction_ns_chi02_dL::synapse0x3cefa40() {
   return (neuron0x3cdc700()*-0.590892);
}

double NNfunction_ns_chi02_dL::synapse0x3cefa80() {
   return (neuron0x3cdca40()*-0.699886);
}

double NNfunction_ns_chi02_dL::synapse0x3cefac0() {
   return (neuron0x3cdcd80()*0.912368);
}

double NNfunction_ns_chi02_dL::synapse0x3cef590() {
   return (neuron0x3cdd0c0()*-0.250803);
}

double NNfunction_ns_chi02_dL::synapse0x3cef5d0() {
   return (neuron0x3cdd620()*-0.751662);
}

double NNfunction_ns_chi02_dL::synapse0x3cefc10() {
   return (neuron0x3cdd840()*-0.294821);
}

double NNfunction_ns_chi02_dL::synapse0x3cefc50() {
   return (neuron0x3cddb80()*0.0791622);
}

double NNfunction_ns_chi02_dL::synapse0x3cefc90() {
   return (neuron0x3cddec0()*0.442874);
}

double NNfunction_ns_chi02_dL::synapse0x3cefcd0() {
   return (neuron0x3cde200()*-0.623866);
}

double NNfunction_ns_chi02_dL::synapse0x3cefd10() {
   return (neuron0x3cde540()*-0.359197);
}

double NNfunction_ns_chi02_dL::synapse0x3cefd50() {
   return (neuron0x3cde880()*0.917427);
}

double NNfunction_ns_chi02_dL::synapse0x3cf00d0() {
   return (neuron0x3cd9d50()*-0.0654102);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0110() {
   return (neuron0x3cda000()*0.0537785);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0150() {
   return (neuron0x3cda340()*-0.00864864);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0190() {
   return (neuron0x3cda680()*0.0175037);
}

double NNfunction_ns_chi02_dL::synapse0x3cf01d0() {
   return (neuron0x3cda9c0()*-0.0190096);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0210() {
   return (neuron0x3cdad00()*0.0213051);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0250() {
   return (neuron0x3cdb040()*0.00935156);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0290() {
   return (neuron0x3cdb380()*0.0100207);
}

double NNfunction_ns_chi02_dL::synapse0x3cf02d0() {
   return (neuron0x3cdb6c0()*0.000243888);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0310() {
   return (neuron0x3cdba00()*0.00378516);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0350() {
   return (neuron0x3cdbd40()*0.0206906);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0390() {
   return (neuron0x3cdc080()*0.592926);
}

double NNfunction_ns_chi02_dL::synapse0x3cf03d0() {
   return (neuron0x3cdc3c0()*-0.017882);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0410() {
   return (neuron0x3cdc700()*-0.012113);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0450() {
   return (neuron0x3cdca40()*-0.0115934);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0490() {
   return (neuron0x3cdcd80()*-0.0146577);
}

double NNfunction_ns_chi02_dL::synapse0x3ceff20() {
   return (neuron0x3cdd0c0()*-0.0131599);
}

double NNfunction_ns_chi02_dL::synapse0x3ceff60() {
   return (neuron0x3cdd620()*0.000256758);
}

double NNfunction_ns_chi02_dL::synapse0x3cf05e0() {
   return (neuron0x3cdd840()*9.07019e-05);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0620() {
   return (neuron0x3cddb80()*0.0264112);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0660() {
   return (neuron0x3cddec0()*-0.0177522);
}

double NNfunction_ns_chi02_dL::synapse0x3cf06a0() {
   return (neuron0x3cde200()*0.00606152);
}

double NNfunction_ns_chi02_dL::synapse0x3cf06e0() {
   return (neuron0x3cde540()*0.0158503);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0720() {
   return (neuron0x3cde880()*4.78723);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0aa0() {
   return (neuron0x3cd9d50()*0.591535);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0ae0() {
   return (neuron0x3cda000()*-0.370838);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0b20() {
   return (neuron0x3cda340()*0.00594573);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0b60() {
   return (neuron0x3cda680()*0.899334);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0ba0() {
   return (neuron0x3cda9c0()*0.0388638);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0be0() {
   return (neuron0x3cdad00()*-0.127916);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0c20() {
   return (neuron0x3cdb040()*0.194248);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0c60() {
   return (neuron0x3cdb380()*-0.827043);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0ca0() {
   return (neuron0x3cdb6c0()*0.913738);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0ce0() {
   return (neuron0x3cdba00()*-0.553441);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0d20() {
   return (neuron0x3cdbd40()*0.84255);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0d60() {
   return (neuron0x3cdc080()*1.01607);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0da0() {
   return (neuron0x3cdc3c0()*0.430409);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0de0() {
   return (neuron0x3cdc700()*0.487177);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0e20() {
   return (neuron0x3cdca40()*-0.1358);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0e60() {
   return (neuron0x3cdcd80()*-0.920879);
}

double NNfunction_ns_chi02_dL::synapse0x3cf08f0() {
   return (neuron0x3cdd0c0()*-0.673064);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0930() {
   return (neuron0x3cdd620()*0.120895);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0fb0() {
   return (neuron0x3cdd840()*1.36131);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0ff0() {
   return (neuron0x3cddb80()*-0.062437);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1030() {
   return (neuron0x3cddec0()*-0.474627);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1070() {
   return (neuron0x3cde200()*-0.259724);
}

double NNfunction_ns_chi02_dL::synapse0x3cf10b0() {
   return (neuron0x3cde540()*0.475517);
}

double NNfunction_ns_chi02_dL::synapse0x3cf10f0() {
   return (neuron0x3cde880()*-1.57016);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1470() {
   return (neuron0x3cd9d50()*-0.15444);
}

double NNfunction_ns_chi02_dL::synapse0x3cf14b0() {
   return (neuron0x3cda000()*1.14413);
}

double NNfunction_ns_chi02_dL::synapse0x3cf14f0() {
   return (neuron0x3cda340()*-0.612091);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1530() {
   return (neuron0x3cda680()*0.153153);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1570() {
   return (neuron0x3cda9c0()*-0.568922);
}

double NNfunction_ns_chi02_dL::synapse0x3cf15b0() {
   return (neuron0x3cdad00()*0.0165028);
}

double NNfunction_ns_chi02_dL::synapse0x3cf15f0() {
   return (neuron0x3cdb040()*-0.877625);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1630() {
   return (neuron0x3cdb380()*-0.175225);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1670() {
   return (neuron0x3cdb6c0()*0.593979);
}

double NNfunction_ns_chi02_dL::synapse0x3cf16b0() {
   return (neuron0x3cdba00()*1.16306);
}

double NNfunction_ns_chi02_dL::synapse0x3cf16f0() {
   return (neuron0x3cdbd40()*0.757465);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1730() {
   return (neuron0x3cdc080()*-0.221901);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1770() {
   return (neuron0x3cdc3c0()*0.778818);
}

double NNfunction_ns_chi02_dL::synapse0x3cf17b0() {
   return (neuron0x3cdc700()*-1.09805);
}

double NNfunction_ns_chi02_dL::synapse0x3cf17f0() {
   return (neuron0x3cdca40()*-0.536301);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1830() {
   return (neuron0x3cdcd80()*1.05143);
}

double NNfunction_ns_chi02_dL::synapse0x3cf12c0() {
   return (neuron0x3cdd0c0()*0.294393);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1300() {
   return (neuron0x3cdd620()*-0.845893);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1980() {
   return (neuron0x3cdd840()*-0.288154);
}

double NNfunction_ns_chi02_dL::synapse0x3cf19c0() {
   return (neuron0x3cddb80()*0.883286);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1a00() {
   return (neuron0x3cddec0()*0.493935);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1a40() {
   return (neuron0x3cde200()*-0.97784);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1a80() {
   return (neuron0x3cde540()*0.0445251);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1ac0() {
   return (neuron0x3cde880()*1.19447);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1e40() {
   return (neuron0x3cd9d50()*0.00475933);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1e80() {
   return (neuron0x3cda000()*3.43757);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1ec0() {
   return (neuron0x3cda340()*-0.667585);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1f00() {
   return (neuron0x3cda680()*-0.00943071);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1f40() {
   return (neuron0x3cda9c0()*0.00763298);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1f80() {
   return (neuron0x3cdad00()*0.00891789);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1fc0() {
   return (neuron0x3cdb040()*0.0103084);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2000() {
   return (neuron0x3cdb380()*0.0115477);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2040() {
   return (neuron0x3cdb6c0()*-0.0123418);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2080() {
   return (neuron0x3cdba00()*0.000639199);
}

double NNfunction_ns_chi02_dL::synapse0x3cf20c0() {
   return (neuron0x3cdbd40()*-0.0125473);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2100() {
   return (neuron0x3cdc080()*-0.381006);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2140() {
   return (neuron0x3cdc3c0()*-0.0304115);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2180() {
   return (neuron0x3cdc700()*0.0158983);
}

double NNfunction_ns_chi02_dL::synapse0x3cf21c0() {
   return (neuron0x3cdca40()*0.0211362);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2200() {
   return (neuron0x3cdcd80()*1.43375e-05);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1c90() {
   return (neuron0x3cdd0c0()*0.00536645);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1cd0() {
   return (neuron0x3cdd620()*-0.00779466);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2350() {
   return (neuron0x3cdd840()*-0.00199394);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2390() {
   return (neuron0x3cddb80()*0.0131294);
}

double NNfunction_ns_chi02_dL::synapse0x3cf23d0() {
   return (neuron0x3cddec0()*0.00274527);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2410() {
   return (neuron0x3cde200()*0.00759887);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2450() {
   return (neuron0x3cde540()*-0.00468134);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2490() {
   return (neuron0x3cde880()*0.0325373);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2810() {
   return (neuron0x3cd9d50()*-0.0563029);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2850() {
   return (neuron0x3cda000()*0.0196056);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2890() {
   return (neuron0x3cda340()*1.54272);
}

double NNfunction_ns_chi02_dL::synapse0x3cf28d0() {
   return (neuron0x3cda680()*-0.0123815);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2910() {
   return (neuron0x3cda9c0()*0.00406529);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2950() {
   return (neuron0x3cdad00()*-0.000974266);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2990() {
   return (neuron0x3cdb040()*0.00414108);
}

double NNfunction_ns_chi02_dL::synapse0x3cf29d0() {
   return (neuron0x3cdb380()*-0.0127578);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2a10() {
   return (neuron0x3cdb6c0()*-0.0261882);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2a50() {
   return (neuron0x3cdba00()*0.0323126);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2a90() {
   return (neuron0x3cdbd40()*0.0105552);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2ad0() {
   return (neuron0x3cdc080()*-0.15973);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2b10() {
   return (neuron0x3cdc3c0()*-0.0188949);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2b50() {
   return (neuron0x3cdc700()*0.0491476);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2b90() {
   return (neuron0x3cdca40()*-0.0255581);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2bd0() {
   return (neuron0x3cdcd80()*0.0155343);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2660() {
   return (neuron0x3cdd0c0()*0.0124749);
}

double NNfunction_ns_chi02_dL::synapse0x3cf26a0() {
   return (neuron0x3cdd620()*0.00629295);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2d20() {
   return (neuron0x3cdd840()*-0.00655483);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2d60() {
   return (neuron0x3cddb80()*0.000174759);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2da0() {
   return (neuron0x3cddec0()*-0.0116135);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2de0() {
   return (neuron0x3cde200()*-0.00419083);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2e20() {
   return (neuron0x3cde540()*0.0124569);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2e60() {
   return (neuron0x3cde880()*0.902194);
}

double NNfunction_ns_chi02_dL::synapse0x3cf31e0() {
   return (neuron0x3cd9d50()*0.0849449);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3220() {
   return (neuron0x3cda000()*0.540856);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3260() {
   return (neuron0x3cda340()*2.36274);
}

double NNfunction_ns_chi02_dL::synapse0x3cf32a0() {
   return (neuron0x3cda680()*-0.0472258);
}

double NNfunction_ns_chi02_dL::synapse0x3cf32e0() {
   return (neuron0x3cda9c0()*0.0311674);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3320() {
   return (neuron0x3cdad00()*0.0096857);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3360() {
   return (neuron0x3cdb040()*0.0166411);
}

double NNfunction_ns_chi02_dL::synapse0x3cf33a0() {
   return (neuron0x3cdb380()*0.0160066);
}

double NNfunction_ns_chi02_dL::synapse0x3cf33e0() {
   return (neuron0x3cdb6c0()*-0.0395137);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3420() {
   return (neuron0x3cdba00()*-0.0716672);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3460() {
   return (neuron0x3cdbd40()*-0.0369302);
}

double NNfunction_ns_chi02_dL::synapse0x3cf34a0() {
   return (neuron0x3cdc080()*-0.506149);
}

double NNfunction_ns_chi02_dL::synapse0x3cf34e0() {
   return (neuron0x3cdc3c0()*0.00525658);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3520() {
   return (neuron0x3cdc700()*-0.00795335);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3560() {
   return (neuron0x3cdca40()*0.0174192);
}

double NNfunction_ns_chi02_dL::synapse0x3cf35a0() {
   return (neuron0x3cdcd80()*0.0613264);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3030() {
   return (neuron0x3cdd0c0()*0.00875773);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3070() {
   return (neuron0x3cdd620()*0.070835);
}

double NNfunction_ns_chi02_dL::synapse0x3cf36f0() {
   return (neuron0x3cdd840()*-0.00404483);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3730() {
   return (neuron0x3cddb80()*-0.0229727);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3770() {
   return (neuron0x3cddec0()*0.102399);
}

double NNfunction_ns_chi02_dL::synapse0x3cf37b0() {
   return (neuron0x3cde200()*-0.035431);
}

double NNfunction_ns_chi02_dL::synapse0x3cf37f0() {
   return (neuron0x3cde540()*-0.02585);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3830() {
   return (neuron0x3cde880()*-3.30411);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3bb0() {
   return (neuron0x3cd9d50()*0.00120088);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3bf0() {
   return (neuron0x3cda000()*0.00792007);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3c30() {
   return (neuron0x3cda340()*-0.00117447);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3c70() {
   return (neuron0x3cda680()*-1.10959);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3cb0() {
   return (neuron0x3cda9c0()*-0.0059394);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3cf0() {
   return (neuron0x3cdad00()*-0.000776133);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3d30() {
   return (neuron0x3cdb040()*0.00610073);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3d70() {
   return (neuron0x3cdb380()*-0.00238208);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3db0() {
   return (neuron0x3cdb6c0()*0.00193441);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3df0() {
   return (neuron0x3cdba00()*0.00995842);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3e30() {
   return (neuron0x3cdbd40()*0.00530144);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3e70() {
   return (neuron0x3cdc080()*0.847149);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3eb0() {
   return (neuron0x3cdc3c0()*-0.00361912);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3ef0() {
   return (neuron0x3cdc700()*-0.000220453);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3f30() {
   return (neuron0x3cdca40()*-0.0154245);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3f70() {
   return (neuron0x3cdcd80()*-0.0198769);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3a00() {
   return (neuron0x3cdd0c0()*0.00210849);
}

double NNfunction_ns_chi02_dL::synapse0x3cf3a40() {
   return (neuron0x3cdd620()*0.0186954);
}

double NNfunction_ns_chi02_dL::synapse0x3cf40c0() {
   return (neuron0x3cdd840()*0.00709272);
}

double NNfunction_ns_chi02_dL::synapse0x3cf4100() {
   return (neuron0x3cddb80()*0.00831882);
}

double NNfunction_ns_chi02_dL::synapse0x3cf4140() {
   return (neuron0x3cddec0()*-0.0140281);
}

double NNfunction_ns_chi02_dL::synapse0x3cf4180() {
   return (neuron0x3cde200()*-0.0154164);
}

double NNfunction_ns_chi02_dL::synapse0x3cf41c0() {
   return (neuron0x3cde540()*0.00256475);
}

double NNfunction_ns_chi02_dL::synapse0x3cf4200() {
   return (neuron0x3cde880()*0.0289739);
}

double NNfunction_ns_chi02_dL::synapse0x3cf4580() {
   return (neuron0x3cd9d50()*-0.278234);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8b50() {
   return (neuron0x3cda000()*-0.171192);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8b90() {
   return (neuron0x3cda340()*1.18389);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8bd0() {
   return (neuron0x3cda680()*1.22645);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8e20() {
   return (neuron0x3cda9c0()*0.45131);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8e60() {
   return (neuron0x3cdad00()*-0.0608327);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8ea0() {
   return (neuron0x3cdb040()*0.0136198);
}

double NNfunction_ns_chi02_dL::synapse0x3ce90f0() {
   return (neuron0x3cdb380()*1.02004);
}

double NNfunction_ns_chi02_dL::synapse0x3ce9130() {
   return (neuron0x3cdb6c0()*-0.182715);
}

double NNfunction_ns_chi02_dL::synapse0x3ce9380() {
   return (neuron0x3cdba00()*0.129067);
}

double NNfunction_ns_chi02_dL::synapse0x3ce93c0() {
   return (neuron0x3cdbd40()*0.830517);
}

double NNfunction_ns_chi02_dL::synapse0x3ce9400() {
   return (neuron0x3cdc080()*-0.170309);
}

double NNfunction_ns_chi02_dL::synapse0x3ce9650() {
   return (neuron0x3cdc3c0()*0.697004);
}

double NNfunction_ns_chi02_dL::synapse0x3ce9690() {
   return (neuron0x3cdc700()*0.89072);
}

double NNfunction_ns_chi02_dL::synapse0x3ce98e0() {
   return (neuron0x3cdca40()*-0.961841);
}

double NNfunction_ns_chi02_dL::synapse0x3ce9920() {
   return (neuron0x3cdcd80()*-0.614861);
}

double NNfunction_ns_chi02_dL::synapse0x3cf43d0() {
   return (neuron0x3cdd0c0()*0.220086);
}

double NNfunction_ns_chi02_dL::synapse0x3cf4410() {
   return (neuron0x3cdd620()*-0.427638);
}

double NNfunction_ns_chi02_dL::synapse0x3ce9a70() {
   return (neuron0x3cdd840()*-0.310275);
}

double NNfunction_ns_chi02_dL::synapse0x3ce9f80() {
   return (neuron0x3cddb80()*-0.871508);
}

double NNfunction_ns_chi02_dL::synapse0x3ce9fc0() {
   return (neuron0x3cddec0()*0.150982);
}

double NNfunction_ns_chi02_dL::synapse0x3cea000() {
   return (neuron0x3cde200()*-0.11471);
}

double NNfunction_ns_chi02_dL::synapse0x3cea250() {
   return (neuron0x3cde540()*-0.420589);
}

double NNfunction_ns_chi02_dL::synapse0x3cea290() {
   return (neuron0x3cde880()*-2.26527);
}

double NNfunction_ns_chi02_dL::synapse0x3ce9b40() {
   return (neuron0x3cd9d50()*-0.00287105);
}

double NNfunction_ns_chi02_dL::synapse0x3ce9b80() {
   return (neuron0x3cda000()*0.00329645);
}

double NNfunction_ns_chi02_dL::synapse0x3ce9bc0() {
   return (neuron0x3cda340()*0.0206268);
}

double NNfunction_ns_chi02_dL::synapse0x3ce9c00() {
   return (neuron0x3cda680()*0.0197796);
}

double NNfunction_ns_chi02_dL::synapse0x3cea580() {
   return (neuron0x3cda9c0()*0.00779584);
}

double NNfunction_ns_chi02_dL::synapse0x3cf68d0() {
   return (neuron0x3cdad00()*-0.000476622);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6910() {
   return (neuron0x3cdb040()*0.00420883);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6950() {
   return (neuron0x3cdb380()*0.00442302);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6990() {
   return (neuron0x3cdb6c0()*-0.00484205);
}

double NNfunction_ns_chi02_dL::synapse0x3cf69d0() {
   return (neuron0x3cdba00()*-0.00381176);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6a10() {
   return (neuron0x3cdbd40()*0.00684417);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6a50() {
   return (neuron0x3cdc080()*-1.29905);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6a90() {
   return (neuron0x3cdc3c0()*-0.0070739);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6ad0() {
   return (neuron0x3cdc700()*-0.005558);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6b10() {
   return (neuron0x3cdca40()*0.00856792);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6b50() {
   return (neuron0x3cdcd80()*0.0105086);
}

double NNfunction_ns_chi02_dL::synapse0x3cea460() {
   return (neuron0x3cdd0c0()*-0.00203641);
}

double NNfunction_ns_chi02_dL::synapse0x3cea4a0() {
   return (neuron0x3cdd620()*-0.0108225);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6ca0() {
   return (neuron0x3cdd840()*0.000935332);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6ce0() {
   return (neuron0x3cddb80()*-0.00415461);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6d20() {
   return (neuron0x3cddec0()*7.39896e-05);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6d60() {
   return (neuron0x3cde200()*0.00509162);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6da0() {
   return (neuron0x3cde540()*0.00149041);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6de0() {
   return (neuron0x3cde880()*0.0056151);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7160() {
   return (neuron0x3cd9d50()*0.0469807);
}

double NNfunction_ns_chi02_dL::synapse0x3cf71a0() {
   return (neuron0x3cda000()*-0.163599);
}

double NNfunction_ns_chi02_dL::synapse0x3cf71e0() {
   return (neuron0x3cda340()*-0.042776);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7220() {
   return (neuron0x3cda680()*-1.24689);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7260() {
   return (neuron0x3cda9c0()*0.506984);
}

double NNfunction_ns_chi02_dL::synapse0x3cf72a0() {
   return (neuron0x3cdad00()*-0.13323);
}

double NNfunction_ns_chi02_dL::synapse0x3cf72e0() {
   return (neuron0x3cdb040()*0.756778);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7320() {
   return (neuron0x3cdb380()*2.12733);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7360() {
   return (neuron0x3cdb6c0()*0.591373);
}

double NNfunction_ns_chi02_dL::synapse0x3cf73a0() {
   return (neuron0x3cdba00()*0.759073);
}

double NNfunction_ns_chi02_dL::synapse0x3cf73e0() {
   return (neuron0x3cdbd40()*-0.325974);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7420() {
   return (neuron0x3cdc080()*-2.37936);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7460() {
   return (neuron0x3cdc3c0()*-0.815486);
}

double NNfunction_ns_chi02_dL::synapse0x3cf74a0() {
   return (neuron0x3cdc700()*-0.48702);
}

double NNfunction_ns_chi02_dL::synapse0x3cf74e0() {
   return (neuron0x3cdca40()*0.459026);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7520() {
   return (neuron0x3cdcd80()*0.727645);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6fb0() {
   return (neuron0x3cdd0c0()*1.03065);
}

double NNfunction_ns_chi02_dL::synapse0x3cf6ff0() {
   return (neuron0x3cdd620()*0.53568);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7670() {
   return (neuron0x3cdd840()*-0.057613);
}

double NNfunction_ns_chi02_dL::synapse0x3cf76b0() {
   return (neuron0x3cddb80()*-0.818867);
}

double NNfunction_ns_chi02_dL::synapse0x3cf76f0() {
   return (neuron0x3cddec0()*0.668299);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7730() {
   return (neuron0x3cde200()*-0.850876);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7770() {
   return (neuron0x3cde540()*0.0393278);
}

double NNfunction_ns_chi02_dL::synapse0x3cf77b0() {
   return (neuron0x3cde880()*1.10151);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7b30() {
   return (neuron0x3cd9d50()*-0.133425);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7b70() {
   return (neuron0x3cda000()*0.364927);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7bb0() {
   return (neuron0x3cda340()*2.41923);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7bf0() {
   return (neuron0x3cda680()*-1.13812);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7c30() {
   return (neuron0x3cda9c0()*-1.6663);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7c70() {
   return (neuron0x3cdad00()*1.10099);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7cb0() {
   return (neuron0x3cdb040()*0.209264);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7cf0() {
   return (neuron0x3cdb380()*-0.184898);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7d30() {
   return (neuron0x3cdb6c0()*-0.437256);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7d70() {
   return (neuron0x3cdba00()*-0.192037);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7db0() {
   return (neuron0x3cdbd40()*-0.220068);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7df0() {
   return (neuron0x3cdc080()*-0.780516);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7e30() {
   return (neuron0x3cdc3c0()*-0.568362);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7e70() {
   return (neuron0x3cdc700()*0.0149897);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7eb0() {
   return (neuron0x3cdca40()*0.0374526);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7ef0() {
   return (neuron0x3cdcd80()*1.12907);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7980() {
   return (neuron0x3cdd0c0()*-0.420025);
}

double NNfunction_ns_chi02_dL::synapse0x3cf79c0() {
   return (neuron0x3cdd620()*0.343871);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8040() {
   return (neuron0x3cdd840()*0.573112);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8080() {
   return (neuron0x3cddb80()*0.855621);
}

double NNfunction_ns_chi02_dL::synapse0x3cf80c0() {
   return (neuron0x3cddec0()*0.205964);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8100() {
   return (neuron0x3cde200()*0.308542);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8140() {
   return (neuron0x3cde540()*-0.215839);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8180() {
   return (neuron0x3cde880()*0.865076);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8500() {
   return (neuron0x3cd9d50()*0.0701905);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8540() {
   return (neuron0x3cda000()*-9.00266);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8580() {
   return (neuron0x3cda340()*-1.66575);
}

double NNfunction_ns_chi02_dL::synapse0x3cf85c0() {
   return (neuron0x3cda680()*-0.000303198);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8600() {
   return (neuron0x3cda9c0()*0.0122572);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8640() {
   return (neuron0x3cdad00()*-0.0379778);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8680() {
   return (neuron0x3cdb040()*0.0131525);
}

double NNfunction_ns_chi02_dL::synapse0x3cf86c0() {
   return (neuron0x3cdb380()*0.0114956);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8700() {
   return (neuron0x3cdb6c0()*-0.0259737);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8740() {
   return (neuron0x3cdba00()*0.059706);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8780() {
   return (neuron0x3cdbd40()*-0.0461007);
}

double NNfunction_ns_chi02_dL::synapse0x3cf87c0() {
   return (neuron0x3cdc080()*-0.408294);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8800() {
   return (neuron0x3cdc3c0()*0.034478);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8840() {
   return (neuron0x3cdc700()*-0.129742);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8880() {
   return (neuron0x3cdca40()*0.0302282);
}

double NNfunction_ns_chi02_dL::synapse0x3cf88c0() {
   return (neuron0x3cdcd80()*0.000922296);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8350() {
   return (neuron0x3cdd0c0()*-0.0264096);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8390() {
   return (neuron0x3cdd620()*-0.044248);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8a10() {
   return (neuron0x3cdd840()*-0.0310644);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8a50() {
   return (neuron0x3cddb80()*0.000325097);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8a90() {
   return (neuron0x3cddec0()*-0.0524392);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8ad0() {
   return (neuron0x3cde200()*0.0275766);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8b10() {
   return (neuron0x3cde540()*0.0465817);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8b50() {
   return (neuron0x3cde880()*3.03126);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8ed0() {
   return (neuron0x3cd9d50()*0.0546937);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8f10() {
   return (neuron0x3cda000()*-0.17112);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8f50() {
   return (neuron0x3cda340()*-1.16201);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8f90() {
   return (neuron0x3cda680()*0.68706);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8fd0() {
   return (neuron0x3cda9c0()*0.00822651);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9010() {
   return (neuron0x3cdad00()*-0.1617);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9050() {
   return (neuron0x3cdb040()*0.833899);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9090() {
   return (neuron0x3cdb380()*-0.159348);
}

double NNfunction_ns_chi02_dL::synapse0x3cf90d0() {
   return (neuron0x3cdb6c0()*-1.38983);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9110() {
   return (neuron0x3cdba00()*0.219471);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9150() {
   return (neuron0x3cdbd40()*0.623497);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9190() {
   return (neuron0x3cdc080()*-1.75584);
}

double NNfunction_ns_chi02_dL::synapse0x3cf91d0() {
   return (neuron0x3cdc3c0()*0.171373);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9210() {
   return (neuron0x3cdc700()*0.509377);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9250() {
   return (neuron0x3cdca40()*1.88377);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9290() {
   return (neuron0x3cdcd80()*0.364138);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8d20() {
   return (neuron0x3cdd0c0()*-0.0599042);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8d60() {
   return (neuron0x3cdd620()*0.296719);
}

double NNfunction_ns_chi02_dL::synapse0x3cf93e0() {
   return (neuron0x3cdd840()*0.507588);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9420() {
   return (neuron0x3cddb80()*-0.633536);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9460() {
   return (neuron0x3cddec0()*-0.444274);
}

double NNfunction_ns_chi02_dL::synapse0x3cf94a0() {
   return (neuron0x3cde200()*-0.378055);
}

double NNfunction_ns_chi02_dL::synapse0x3cf94e0() {
   return (neuron0x3cde540()*-0.170241);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9520() {
   return (neuron0x3cde880()*-0.0975667);
}

double NNfunction_ns_chi02_dL::synapse0x3cf98a0() {
   return (neuron0x3cd9d50()*-0.666462);
}

double NNfunction_ns_chi02_dL::synapse0x3cf98e0() {
   return (neuron0x3cda000()*-0.0924514);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9920() {
   return (neuron0x3cda340()*-0.0198845);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9960() {
   return (neuron0x3cda680()*0.42906);
}

double NNfunction_ns_chi02_dL::synapse0x3cf99a0() {
   return (neuron0x3cda9c0()*-0.129899);
}

double NNfunction_ns_chi02_dL::synapse0x3cf99e0() {
   return (neuron0x3cdad00()*-0.0792262);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9a20() {
   return (neuron0x3cdb040()*-0.0991973);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9a60() {
   return (neuron0x3cdb380()*0.0095391);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9aa0() {
   return (neuron0x3cdb6c0()*1.00071);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9ae0() {
   return (neuron0x3cdba00()*-0.444301);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9b20() {
   return (neuron0x3cdbd40()*-0.726707);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9b60() {
   return (neuron0x3cdc080()*-0.260583);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9ba0() {
   return (neuron0x3cdc3c0()*0.84832);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9be0() {
   return (neuron0x3cdc700()*-0.337411);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9c20() {
   return (neuron0x3cdca40()*-0.474562);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9c60() {
   return (neuron0x3cdcd80()*-0.306109);
}

double NNfunction_ns_chi02_dL::synapse0x3cf96f0() {
   return (neuron0x3cdd0c0()*0.292903);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9730() {
   return (neuron0x3cdd620()*-0.761337);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9db0() {
   return (neuron0x3cdd840()*-0.629186);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9df0() {
   return (neuron0x3cddb80()*0.130351);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9e30() {
   return (neuron0x3cddec0()*1.05094);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9e70() {
   return (neuron0x3cde200()*0.940218);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9eb0() {
   return (neuron0x3cde540()*-0.0902948);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9ef0() {
   return (neuron0x3cde880()*0.22238);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa270() {
   return (neuron0x3cd9d50()*0.787132);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa2b0() {
   return (neuron0x3cda000()*0.0883919);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa2f0() {
   return (neuron0x3cda340()*-0.057335);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa330() {
   return (neuron0x3cda680()*0.0832185);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa370() {
   return (neuron0x3cda9c0()*-0.0340256);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa3b0() {
   return (neuron0x3cdad00()*-0.315807);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa3f0() {
   return (neuron0x3cdb040()*0.536035);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa430() {
   return (neuron0x3cdb380()*-0.201473);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa470() {
   return (neuron0x3cdb6c0()*0.226185);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa4b0() {
   return (neuron0x3cdba00()*0.039427);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa4f0() {
   return (neuron0x3cdbd40()*0.00206503);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa530() {
   return (neuron0x3cdc080()*0.0465992);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa570() {
   return (neuron0x3cdc3c0()*-0.541301);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa5b0() {
   return (neuron0x3cdc700()*-0.268165);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa5f0() {
   return (neuron0x3cdca40()*0.0383484);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa630() {
   return (neuron0x3cdcd80()*-0.194873);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa0c0() {
   return (neuron0x3cdd0c0()*-0.323267);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa100() {
   return (neuron0x3cdd620()*0.54148);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa780() {
   return (neuron0x3cdd840()*0.239921);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa7c0() {
   return (neuron0x3cddb80()*-0.502093);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa800() {
   return (neuron0x3cddec0()*-0.518433);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa840() {
   return (neuron0x3cde200()*-0.590655);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa880() {
   return (neuron0x3cde540()*0.423563);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa8c0() {
   return (neuron0x3cde880()*0.121148);
}

double NNfunction_ns_chi02_dL::synapse0x3cfac40() {
   return (neuron0x3cd9d50()*0.0124701);
}

double NNfunction_ns_chi02_dL::synapse0x3cfac80() {
   return (neuron0x3cda000()*20.3891);
}

double NNfunction_ns_chi02_dL::synapse0x3cfacc0() {
   return (neuron0x3cda340()*0.775826);
}

double NNfunction_ns_chi02_dL::synapse0x3cfad00() {
   return (neuron0x3cda680()*0.0240367);
}

double NNfunction_ns_chi02_dL::synapse0x3cfad40() {
   return (neuron0x3cda9c0()*-0.0173476);
}

double NNfunction_ns_chi02_dL::synapse0x3cfad80() {
   return (neuron0x3cdad00()*-0.00716736);
}

double NNfunction_ns_chi02_dL::synapse0x3cfadc0() {
   return (neuron0x3cdb040()*-0.0114874);
}

double NNfunction_ns_chi02_dL::synapse0x3cfae00() {
   return (neuron0x3cdb380()*-0.0285194);
}

double NNfunction_ns_chi02_dL::synapse0x3cfae40() {
   return (neuron0x3cdb6c0()*-0.0276652);
}

double NNfunction_ns_chi02_dL::synapse0x3cfae80() {
   return (neuron0x3cdba00()*0.0184682);
}

double NNfunction_ns_chi02_dL::synapse0x3cfaec0() {
   return (neuron0x3cdbd40()*0.0275792);
}

double NNfunction_ns_chi02_dL::synapse0x3cfaf00() {
   return (neuron0x3cdc080()*0.413094);
}

double NNfunction_ns_chi02_dL::synapse0x3cfaf40() {
   return (neuron0x3cdc3c0()*-0.0154206);
}

double NNfunction_ns_chi02_dL::synapse0x3cfaf80() {
   return (neuron0x3cdc700()*-0.0134357);
}

double NNfunction_ns_chi02_dL::synapse0x3cfafc0() {
   return (neuron0x3cdca40()*-0.00803072);
}

double NNfunction_ns_chi02_dL::synapse0x3cfb000() {
   return (neuron0x3cdcd80()*-0.00155487);
}

double NNfunction_ns_chi02_dL::synapse0x3cfaa90() {
   return (neuron0x3cdd0c0()*-0.0579368);
}

double NNfunction_ns_chi02_dL::synapse0x3cfaad0() {
   return (neuron0x3cdd620()*-0.0017095);
}

double NNfunction_ns_chi02_dL::synapse0x3cfb150() {
   return (neuron0x3cdd840()*-0.00756754);
}

double NNfunction_ns_chi02_dL::synapse0x3cfb190() {
   return (neuron0x3cddb80()*-0.0194934);
}

double NNfunction_ns_chi02_dL::synapse0x3cfb1d0() {
   return (neuron0x3cddec0()*-0.0220572);
}

double NNfunction_ns_chi02_dL::synapse0x3cfb210() {
   return (neuron0x3cde200()*0.0116263);
}

double NNfunction_ns_chi02_dL::synapse0x3cfb250() {
   return (neuron0x3cde540()*0.00503101);
}

double NNfunction_ns_chi02_dL::synapse0x3cfb290() {
   return (neuron0x3cde880()*0.00575394);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3d40() {
   return (neuron0x3cd9d50()*-1.10538);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3d80() {
   return (neuron0x3cda000()*-0.991106);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3dc0() {
   return (neuron0x3cda340()*-1.48433);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3e00() {
   return (neuron0x3cda680()*-1.05607);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3e40() {
   return (neuron0x3cda9c0()*-0.980296);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3e80() {
   return (neuron0x3cdad00()*-0.121743);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3ec0() {
   return (neuron0x3cdb040()*-1.28919);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3f00() {
   return (neuron0x3cdb380()*-0.433882);
}

double NNfunction_ns_chi02_dL::synapse0x3cfba20() {
   return (neuron0x3cdb6c0()*-1.31587);
}

double NNfunction_ns_chi02_dL::synapse0x3cfba60() {
   return (neuron0x3cdba00()*0.0985107);
}

double NNfunction_ns_chi02_dL::synapse0x3cfbaa0() {
   return (neuron0x3cdbd40()*-0.516599);
}

double NNfunction_ns_chi02_dL::synapse0x3cfbae0() {
   return (neuron0x3cdc080()*-0.0456636);
}

double NNfunction_ns_chi02_dL::synapse0x3cfbb20() {
   return (neuron0x3cdc3c0()*-0.460415);
}

double NNfunction_ns_chi02_dL::synapse0x3cfbb60() {
   return (neuron0x3cdc700()*0.973382);
}

double NNfunction_ns_chi02_dL::synapse0x3cfbba0() {
   return (neuron0x3cdca40()*0.110237);
}

double NNfunction_ns_chi02_dL::synapse0x3cfbbe0() {
   return (neuron0x3cdcd80()*1.20506);
}

double NNfunction_ns_chi02_dL::synapse0x3cfb460() {
   return (neuron0x3cdd0c0()*1.13827);
}

double NNfunction_ns_chi02_dL::synapse0x3cfb4a0() {
   return (neuron0x3cdd620()*0.401748);
}

double NNfunction_ns_chi02_dL::synapse0x3cfbd30() {
   return (neuron0x3cdd840()*-0.290566);
}

double NNfunction_ns_chi02_dL::synapse0x3cfbd70() {
   return (neuron0x3cddb80()*0.016494);
}

double NNfunction_ns_chi02_dL::synapse0x3cfbdb0() {
   return (neuron0x3cddec0()*-1.32332);
}

double NNfunction_ns_chi02_dL::synapse0x3cfbdf0() {
   return (neuron0x3cde200()*-0.140917);
}

double NNfunction_ns_chi02_dL::synapse0x3cfbe30() {
   return (neuron0x3cde540()*-0.205252);
}

double NNfunction_ns_chi02_dL::synapse0x3cfbe70() {
   return (neuron0x3cde880()*-1.29613);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc1f0() {
   return (neuron0x3cd9d50()*0.00312477);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc230() {
   return (neuron0x3cda000()*-0.00596539);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc270() {
   return (neuron0x3cda340()*-0.0125653);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc2b0() {
   return (neuron0x3cda680()*-1.08905);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc2f0() {
   return (neuron0x3cda9c0()*0.00969497);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc330() {
   return (neuron0x3cdad00()*-0.00753876);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc370() {
   return (neuron0x3cdb040()*-0.0127357);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc3b0() {
   return (neuron0x3cdb380()*0.00500889);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc3f0() {
   return (neuron0x3cdb6c0()*-0.00615112);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc430() {
   return (neuron0x3cdba00()*-0.0048168);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc470() {
   return (neuron0x3cdbd40()*0.00472319);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc4b0() {
   return (neuron0x3cdc080()*-0.78807);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc4f0() {
   return (neuron0x3cdc3c0()*0.00398705);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc530() {
   return (neuron0x3cdc700()*0.00253725);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc570() {
   return (neuron0x3cdca40()*0.0132733);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc5b0() {
   return (neuron0x3cdcd80()*0.0229678);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc040() {
   return (neuron0x3cdd0c0()*-0.0121261);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc080() {
   return (neuron0x3cdd620()*-0.0173893);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc700() {
   return (neuron0x3cdd840()*0.00283532);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc740() {
   return (neuron0x3cddb80()*-0.00973458);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc780() {
   return (neuron0x3cddec0()*0.0249987);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc7c0() {
   return (neuron0x3cde200()*0.0226137);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc800() {
   return (neuron0x3cde540()*-0.0169326);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc840() {
   return (neuron0x3cde880()*-0.0377479);
}

double NNfunction_ns_chi02_dL::synapse0x3cfcbc0() {
   return (neuron0x3cd9d50()*-0.00206437);
}

double NNfunction_ns_chi02_dL::synapse0x3cfcc00() {
   return (neuron0x3cda000()*12.8845);
}

double NNfunction_ns_chi02_dL::synapse0x3cfcc40() {
   return (neuron0x3cda340()*-1.81042);
}

double NNfunction_ns_chi02_dL::synapse0x3cfcc80() {
   return (neuron0x3cda680()*0.00033781);
}

double NNfunction_ns_chi02_dL::synapse0x3cfccc0() {
   return (neuron0x3cda9c0()*0.00634258);
}

double NNfunction_ns_chi02_dL::synapse0x3cfcd00() {
   return (neuron0x3cdad00()*0.0105557);
}

double NNfunction_ns_chi02_dL::synapse0x3cfcd40() {
   return (neuron0x3cdb040()*0.0179395);
}

double NNfunction_ns_chi02_dL::synapse0x3cfcd80() {
   return (neuron0x3cdb380()*0.0278823);
}

double NNfunction_ns_chi02_dL::synapse0x3cfcdc0() {
   return (neuron0x3cdb6c0()*-0.00563551);
}

double NNfunction_ns_chi02_dL::synapse0x3cfce00() {
   return (neuron0x3cdba00()*0.00223069);
}

double NNfunction_ns_chi02_dL::synapse0x3cfce40() {
   return (neuron0x3cdbd40()*0.0190448);
}

double NNfunction_ns_chi02_dL::synapse0x3cfce80() {
   return (neuron0x3cdc080()*-0.150769);
}

double NNfunction_ns_chi02_dL::synapse0x3cfcec0() {
   return (neuron0x3cdc3c0()*0.00294018);
}

double NNfunction_ns_chi02_dL::synapse0x3cfcf00() {
   return (neuron0x3cdc700()*-0.0397185);
}

double NNfunction_ns_chi02_dL::synapse0x3cfcf40() {
   return (neuron0x3cdca40()*0.00718994);
}

double NNfunction_ns_chi02_dL::synapse0x3cfcf80() {
   return (neuron0x3cdcd80()*-0.00974331);
}

double NNfunction_ns_chi02_dL::synapse0x3cfca10() {
   return (neuron0x3cdd0c0()*0.0101112);
}

double NNfunction_ns_chi02_dL::synapse0x3cfca50() {
   return (neuron0x3cdd620()*-0.0111646);
}

double NNfunction_ns_chi02_dL::synapse0x3ced580() {
   return (neuron0x3cdd840()*-0.034202);
}

double NNfunction_ns_chi02_dL::synapse0x3ced5c0() {
   return (neuron0x3cddb80()*-0.0231764);
}

double NNfunction_ns_chi02_dL::synapse0x3ced600() {
   return (neuron0x3cddec0()*-0.00149036);
}

double NNfunction_ns_chi02_dL::synapse0x3ced640() {
   return (neuron0x3cde200()*-0.00242489);
}

double NNfunction_ns_chi02_dL::synapse0x3ced680() {
   return (neuron0x3cde540()*-0.00131675);
}

double NNfunction_ns_chi02_dL::synapse0x3ced6c0() {
   return (neuron0x3cde880()*0.0232143);
}

double NNfunction_ns_chi02_dL::synapse0x3ceda40() {
   return (neuron0x3cd9d50()*-0.135845);
}

double NNfunction_ns_chi02_dL::synapse0x3ceda80() {
   return (neuron0x3cda000()*0.443428);
}

double NNfunction_ns_chi02_dL::synapse0x3cedac0() {
   return (neuron0x3cda340()*5.56456);
}

double NNfunction_ns_chi02_dL::synapse0x3cedb00() {
   return (neuron0x3cda680()*-0.00102075);
}

double NNfunction_ns_chi02_dL::synapse0x3cedb40() {
   return (neuron0x3cda9c0()*0.0264665);
}

double NNfunction_ns_chi02_dL::synapse0x3cedb80() {
   return (neuron0x3cdad00()*0.00427266);
}

double NNfunction_ns_chi02_dL::synapse0x3cedbc0() {
   return (neuron0x3cdb040()*-0.0217397);
}

double NNfunction_ns_chi02_dL::synapse0x3cedc00() {
   return (neuron0x3cdb380()*-0.0607829);
}

double NNfunction_ns_chi02_dL::synapse0x3cedc40() {
   return (neuron0x3cdb6c0()*-0.0434142);
}

double NNfunction_ns_chi02_dL::synapse0x3cedc80() {
   return (neuron0x3cdba00()*0.0613056);
}

double NNfunction_ns_chi02_dL::synapse0x3cedcc0() {
   return (neuron0x3cdbd40()*-0.00760794);
}

double NNfunction_ns_chi02_dL::synapse0x3cedd00() {
   return (neuron0x3cdc080()*-0.116201);
}

double NNfunction_ns_chi02_dL::synapse0x3cedd40() {
   return (neuron0x3cdc3c0()*0.0672009);
}

double NNfunction_ns_chi02_dL::synapse0x3cedd80() {
   return (neuron0x3cdc700()*-0.00561389);
}

double NNfunction_ns_chi02_dL::synapse0x3ceddc0() {
   return (neuron0x3cdca40()*-0.00289446);
}

double NNfunction_ns_chi02_dL::synapse0x3cede00() {
   return (neuron0x3cdcd80()*0.00640637);
}

double NNfunction_ns_chi02_dL::synapse0x3ced890() {
   return (neuron0x3cdd0c0()*-0.0108662);
}

double NNfunction_ns_chi02_dL::synapse0x3ced8d0() {
   return (neuron0x3cdd620()*-0.0887015);
}

double NNfunction_ns_chi02_dL::synapse0x3cedf50() {
   return (neuron0x3cdd840()*0.0318394);
}

double NNfunction_ns_chi02_dL::synapse0x3cedf90() {
   return (neuron0x3cddb80()*-0.0334058);
}

double NNfunction_ns_chi02_dL::synapse0x3cedfd0() {
   return (neuron0x3cddec0()*-0.0583328);
}

double NNfunction_ns_chi02_dL::synapse0x3cee010() {
   return (neuron0x3cde200()*0.0211011);
}

double NNfunction_ns_chi02_dL::synapse0x3cee050() {
   return (neuron0x3cde540()*-0.00925161);
}

double NNfunction_ns_chi02_dL::synapse0x3cee090() {
   return (neuron0x3cde880()*7.0897);
}

double NNfunction_ns_chi02_dL::synapse0x3cee410() {
   return (neuron0x3cd9d50()*-0.63463);
}

double NNfunction_ns_chi02_dL::synapse0x3cee450() {
   return (neuron0x3cda000()*0.183554);
}

double NNfunction_ns_chi02_dL::synapse0x3cee490() {
   return (neuron0x3cda340()*0.0276963);
}

double NNfunction_ns_chi02_dL::synapse0x3cee4d0() {
   return (neuron0x3cda680()*0.114102);
}

double NNfunction_ns_chi02_dL::synapse0x3cee510() {
   return (neuron0x3cda9c0()*0.378288);
}

double NNfunction_ns_chi02_dL::synapse0x3cee550() {
   return (neuron0x3cdad00()*-0.209618);
}

double NNfunction_ns_chi02_dL::synapse0x3cee590() {
   return (neuron0x3cdb040()*-1.18219);
}

double NNfunction_ns_chi02_dL::synapse0x3cee5d0() {
   return (neuron0x3cdb380()*-0.468641);
}

double NNfunction_ns_chi02_dL::synapse0x3cee610() {
   return (neuron0x3cdb6c0()*0.090727);
}

double NNfunction_ns_chi02_dL::synapse0x3cee650() {
   return (neuron0x3cdba00()*0.233053);
}

double NNfunction_ns_chi02_dL::synapse0x3cee690() {
   return (neuron0x3cdbd40()*0.755337);
}

double NNfunction_ns_chi02_dL::synapse0x3cee6d0() {
   return (neuron0x3cdc080()*-0.0467309);
}

double NNfunction_ns_chi02_dL::synapse0x3cee710() {
   return (neuron0x3cdc3c0()*1.19112);
}

double NNfunction_ns_chi02_dL::synapse0x3cee750() {
   return (neuron0x3cdc700()*-0.416666);
}

double NNfunction_ns_chi02_dL::synapse0x3cee790() {
   return (neuron0x3cdca40()*-0.196108);
}

double NNfunction_ns_chi02_dL::synapse0x3cee7d0() {
   return (neuron0x3cdcd80()*0.0868576);
}

double NNfunction_ns_chi02_dL::synapse0x3cee260() {
   return (neuron0x3cdd0c0()*-0.196913);
}

double NNfunction_ns_chi02_dL::synapse0x3cee2a0() {
   return (neuron0x3cdd620()*0.264709);
}

double NNfunction_ns_chi02_dL::synapse0x3cee920() {
   return (neuron0x3cdd840()*0.250672);
}

double NNfunction_ns_chi02_dL::synapse0x3cee960() {
   return (neuron0x3cddb80()*0.17122);
}

double NNfunction_ns_chi02_dL::synapse0x3cee9a0() {
   return (neuron0x3cddec0()*0.0852529);
}

double NNfunction_ns_chi02_dL::synapse0x3cee9e0() {
   return (neuron0x3cde200()*0.250524);
}

double NNfunction_ns_chi02_dL::synapse0x3ceea20() {
   return (neuron0x3cde540()*0.149381);
}

double NNfunction_ns_chi02_dL::synapse0x3ceea60() {
   return (neuron0x3cde880()*1.26263);
}

double NNfunction_ns_chi02_dL::synapse0x3ceede0() {
   return (neuron0x3cd9d50()*-0.375283);
}

double NNfunction_ns_chi02_dL::synapse0x3ceee20() {
   return (neuron0x3cda000()*0.0421556);
}

double NNfunction_ns_chi02_dL::synapse0x3ceee60() {
   return (neuron0x3cda340()*-1.59692);
}

double NNfunction_ns_chi02_dL::synapse0x3ceeea0() {
   return (neuron0x3cda680()*0.474626);
}

double NNfunction_ns_chi02_dL::synapse0x3ceeee0() {
   return (neuron0x3cda9c0()*0.537073);
}

double NNfunction_ns_chi02_dL::synapse0x3ceef20() {
   return (neuron0x3cdad00()*-0.527919);
}

double NNfunction_ns_chi02_dL::synapse0x3ceef60() {
   return (neuron0x3cdb040()*-0.556908);
}

double NNfunction_ns_chi02_dL::synapse0x3ceefa0() {
   return (neuron0x3cdb380()*-0.447454);
}

double NNfunction_ns_chi02_dL::synapse0x3ceefe0() {
   return (neuron0x3cdb6c0()*-1.15531);
}

double NNfunction_ns_chi02_dL::synapse0x3cef020() {
   return (neuron0x3cdba00()*0.751133);
}

double NNfunction_ns_chi02_dL::synapse0x3cef060() {
   return (neuron0x3cdbd40()*-0.971954);
}

double NNfunction_ns_chi02_dL::synapse0x3cef0a0() {
   return (neuron0x3cdc080()*1.06563);
}

double NNfunction_ns_chi02_dL::synapse0x3cef0e0() {
   return (neuron0x3cdc3c0()*1.64239);
}

double NNfunction_ns_chi02_dL::synapse0x3cef120() {
   return (neuron0x3cdc700()*1.34268);
}

double NNfunction_ns_chi02_dL::synapse0x3cef160() {
   return (neuron0x3cdca40()*-0.717296);
}

double NNfunction_ns_chi02_dL::synapse0x3cef1a0() {
   return (neuron0x3cdcd80()*0.376219);
}

double NNfunction_ns_chi02_dL::synapse0x3ceec30() {
   return (neuron0x3cdd0c0()*0.172996);
}

double NNfunction_ns_chi02_dL::synapse0x3ceec70() {
   return (neuron0x3cdd620()*-0.313032);
}

double NNfunction_ns_chi02_dL::synapse0x3cef2f0() {
   return (neuron0x3cdd840()*-0.339171);
}

double NNfunction_ns_chi02_dL::synapse0x3cef330() {
   return (neuron0x3cddb80()*0.227605);
}

double NNfunction_ns_chi02_dL::synapse0x3cef370() {
   return (neuron0x3cddec0()*0.149947);
}

double NNfunction_ns_chi02_dL::synapse0x3cef3b0() {
   return (neuron0x3cde200()*-0.53412);
}

double NNfunction_ns_chi02_dL::synapse0x3cef3f0() {
   return (neuron0x3cde540()*-0.0403186);
}

double NNfunction_ns_chi02_dL::synapse0x3cef430() {
   return (neuron0x3cde880()*0.543757);
}

double NNfunction_ns_chi02_dL::synapse0x3d01300() {
   return (neuron0x3cd9d50()*-0.000755274);
}

double NNfunction_ns_chi02_dL::synapse0x3d01340() {
   return (neuron0x3cda000()*12.095);
}

double NNfunction_ns_chi02_dL::synapse0x3d01380() {
   return (neuron0x3cda340()*1.40759);
}

double NNfunction_ns_chi02_dL::synapse0x3d013c0() {
   return (neuron0x3cda680()*0.0110564);
}

double NNfunction_ns_chi02_dL::synapse0x3d01400() {
   return (neuron0x3cda9c0()*-0.037826);
}

double NNfunction_ns_chi02_dL::synapse0x3d01440() {
   return (neuron0x3cdad00()*-0.0479887);
}

double NNfunction_ns_chi02_dL::synapse0x3d01480() {
   return (neuron0x3cdb040()*0.012628);
}

double NNfunction_ns_chi02_dL::synapse0x3d014c0() {
   return (neuron0x3cdb380()*-0.0489703);
}

double NNfunction_ns_chi02_dL::synapse0x3d01500() {
   return (neuron0x3cdb6c0()*0.0248618);
}

double NNfunction_ns_chi02_dL::synapse0x3d01540() {
   return (neuron0x3cdba00()*-0.0137165);
}

double NNfunction_ns_chi02_dL::synapse0x3d01580() {
   return (neuron0x3cdbd40()*0.0178427);
}

double NNfunction_ns_chi02_dL::synapse0x3d015c0() {
   return (neuron0x3cdc080()*0.080376);
}

double NNfunction_ns_chi02_dL::synapse0x3d01600() {
   return (neuron0x3cdc3c0()*0.047456);
}

double NNfunction_ns_chi02_dL::synapse0x3d01640() {
   return (neuron0x3cdc700()*0.0966121);
}

double NNfunction_ns_chi02_dL::synapse0x3d01680() {
   return (neuron0x3cdca40()*-0.0100928);
}

double NNfunction_ns_chi02_dL::synapse0x3d016c0() {
   return (neuron0x3cdcd80()*-0.00897727);
}

double NNfunction_ns_chi02_dL::synapse0x3cef470() {
   return (neuron0x3cdd0c0()*-0.0246933);
}

double NNfunction_ns_chi02_dL::synapse0x3cef4b0() {
   return (neuron0x3cdd620()*-0.037538);
}

double NNfunction_ns_chi02_dL::synapse0x3d01810() {
   return (neuron0x3cdd840()*0.0227558);
}

double NNfunction_ns_chi02_dL::synapse0x3d01850() {
   return (neuron0x3cddb80()*0.0128292);
}

double NNfunction_ns_chi02_dL::synapse0x3d01890() {
   return (neuron0x3cddec0()*-0.00743462);
}

double NNfunction_ns_chi02_dL::synapse0x3d018d0() {
   return (neuron0x3cde200()*0.0370523);
}

double NNfunction_ns_chi02_dL::synapse0x3d01910() {
   return (neuron0x3cde540()*0.0269885);
}

double NNfunction_ns_chi02_dL::synapse0x3d01950() {
   return (neuron0x3cde880()*6.30155);
}

double NNfunction_ns_chi02_dL::synapse0x3d01cd0() {
   return (neuron0x3cd9d50()*-0.00899827);
}

double NNfunction_ns_chi02_dL::synapse0x3d01d10() {
   return (neuron0x3cda000()*3.33396);
}

double NNfunction_ns_chi02_dL::synapse0x3d01d50() {
   return (neuron0x3cda340()*0.143579);
}

double NNfunction_ns_chi02_dL::synapse0x3d01d90() {
   return (neuron0x3cda680()*0.000544391);
}

double NNfunction_ns_chi02_dL::synapse0x3d01dd0() {
   return (neuron0x3cda9c0()*-0.0294743);
}

double NNfunction_ns_chi02_dL::synapse0x3d01e10() {
   return (neuron0x3cdad00()*-0.0224464);
}

double NNfunction_ns_chi02_dL::synapse0x3d01e50() {
   return (neuron0x3cdb040()*0.00417009);
}

double NNfunction_ns_chi02_dL::synapse0x3d01e90() {
   return (neuron0x3cdb380()*-0.00259056);
}

double NNfunction_ns_chi02_dL::synapse0x3d01ed0() {
   return (neuron0x3cdb6c0()*0.0547083);
}

double NNfunction_ns_chi02_dL::synapse0x3d01f10() {
   return (neuron0x3cdba00()*-0.0122837);
}

double NNfunction_ns_chi02_dL::synapse0x3d01f50() {
   return (neuron0x3cdbd40()*0.0289014);
}

double NNfunction_ns_chi02_dL::synapse0x3d01f90() {
   return (neuron0x3cdc080()*0.0380028);
}

double NNfunction_ns_chi02_dL::synapse0x3d01fd0() {
   return (neuron0x3cdc3c0()*0.0236282);
}

double NNfunction_ns_chi02_dL::synapse0x3d02010() {
   return (neuron0x3cdc700()*-0.0144137);
}

double NNfunction_ns_chi02_dL::synapse0x3d02050() {
   return (neuron0x3cdca40()*-0.0240697);
}

double NNfunction_ns_chi02_dL::synapse0x3d02090() {
   return (neuron0x3cdcd80()*-0.0215427);
}

double NNfunction_ns_chi02_dL::synapse0x3d01b20() {
   return (neuron0x3cdd0c0()*0.0282836);
}

double NNfunction_ns_chi02_dL::synapse0x3d01b60() {
   return (neuron0x3cdd620()*-0.0124066);
}

double NNfunction_ns_chi02_dL::synapse0x3d021e0() {
   return (neuron0x3cdd840()*0.0277176);
}

double NNfunction_ns_chi02_dL::synapse0x3d02220() {
   return (neuron0x3cddb80()*0.0241177);
}

double NNfunction_ns_chi02_dL::synapse0x3d02260() {
   return (neuron0x3cddec0()*0.00448981);
}

double NNfunction_ns_chi02_dL::synapse0x3d022a0() {
   return (neuron0x3cde200()*0.0385381);
}

double NNfunction_ns_chi02_dL::synapse0x3d022e0() {
   return (neuron0x3cde540()*0.0299539);
}

double NNfunction_ns_chi02_dL::synapse0x3d02320() {
   return (neuron0x3cde880()*0.0532024);
}

double NNfunction_ns_chi02_dL::synapse0x3d026a0() {
   return (neuron0x3cd9d50()*0.688594);
}

double NNfunction_ns_chi02_dL::synapse0x3d026e0() {
   return (neuron0x3cda000()*-0.323081);
}

double NNfunction_ns_chi02_dL::synapse0x3d02720() {
   return (neuron0x3cda340()*-0.293629);
}

double NNfunction_ns_chi02_dL::synapse0x3d02760() {
   return (neuron0x3cda680()*0.0976654);
}

double NNfunction_ns_chi02_dL::synapse0x3d027a0() {
   return (neuron0x3cda9c0()*-0.13971);
}

double NNfunction_ns_chi02_dL::synapse0x3d027e0() {
   return (neuron0x3cdad00()*0.892877);
}

double NNfunction_ns_chi02_dL::synapse0x3d02820() {
   return (neuron0x3cdb040()*-0.911751);
}

double NNfunction_ns_chi02_dL::synapse0x3d02860() {
   return (neuron0x3cdb380()*-0.684118);
}

double NNfunction_ns_chi02_dL::synapse0x3d028a0() {
   return (neuron0x3cdb6c0()*0.399729);
}

double NNfunction_ns_chi02_dL::synapse0x3d028e0() {
   return (neuron0x3cdba00()*0.286778);
}

double NNfunction_ns_chi02_dL::synapse0x3d02920() {
   return (neuron0x3cdbd40()*-0.0903064);
}

double NNfunction_ns_chi02_dL::synapse0x3d02960() {
   return (neuron0x3cdc080()*-0.684903);
}

double NNfunction_ns_chi02_dL::synapse0x3d029a0() {
   return (neuron0x3cdc3c0()*-0.485783);
}

double NNfunction_ns_chi02_dL::synapse0x3d029e0() {
   return (neuron0x3cdc700()*-0.67398);
}

double NNfunction_ns_chi02_dL::synapse0x3d02a20() {
   return (neuron0x3cdca40()*-0.840478);
}

double NNfunction_ns_chi02_dL::synapse0x3d02a60() {
   return (neuron0x3cdcd80()*1.55634);
}

double NNfunction_ns_chi02_dL::synapse0x3d024f0() {
   return (neuron0x3cdd0c0()*0.505433);
}

double NNfunction_ns_chi02_dL::synapse0x3d02530() {
   return (neuron0x3cdd620()*-0.834308);
}

double NNfunction_ns_chi02_dL::synapse0x3d02bb0() {
   return (neuron0x3cdd840()*-0.227669);
}

double NNfunction_ns_chi02_dL::synapse0x3d02bf0() {
   return (neuron0x3cddb80()*-0.935731);
}

double NNfunction_ns_chi02_dL::synapse0x3d02c30() {
   return (neuron0x3cddec0()*-1.55185);
}

double NNfunction_ns_chi02_dL::synapse0x3d02c70() {
   return (neuron0x3cde200()*-0.319525);
}

double NNfunction_ns_chi02_dL::synapse0x3d02cb0() {
   return (neuron0x3cde540()*-0.0529138);
}

double NNfunction_ns_chi02_dL::synapse0x3d02cf0() {
   return (neuron0x3cde880()*-0.927945);
}

double NNfunction_ns_chi02_dL::synapse0x3d03070() {
   return (neuron0x3cd9d50()*0.274184);
}

double NNfunction_ns_chi02_dL::synapse0x3d030b0() {
   return (neuron0x3cda000()*0.104681);
}

double NNfunction_ns_chi02_dL::synapse0x3d030f0() {
   return (neuron0x3cda340()*-1.0151);
}

double NNfunction_ns_chi02_dL::synapse0x3d03130() {
   return (neuron0x3cda680()*-0.543816);
}

double NNfunction_ns_chi02_dL::synapse0x3d03170() {
   return (neuron0x3cda9c0()*0.0983645);
}

double NNfunction_ns_chi02_dL::synapse0x3d031b0() {
   return (neuron0x3cdad00()*-0.712296);
}

double NNfunction_ns_chi02_dL::synapse0x3d031f0() {
   return (neuron0x3cdb040()*-0.359538);
}

double NNfunction_ns_chi02_dL::synapse0x3d03230() {
   return (neuron0x3cdb380()*0.28079);
}

double NNfunction_ns_chi02_dL::synapse0x3d03270() {
   return (neuron0x3cdb6c0()*-0.204568);
}

double NNfunction_ns_chi02_dL::synapse0x3d032b0() {
   return (neuron0x3cdba00()*0.0898702);
}

double NNfunction_ns_chi02_dL::synapse0x3d032f0() {
   return (neuron0x3cdbd40()*-0.411586);
}

double NNfunction_ns_chi02_dL::synapse0x3d03330() {
   return (neuron0x3cdc080()*-0.928741);
}

double NNfunction_ns_chi02_dL::synapse0x3d03370() {
   return (neuron0x3cdc3c0()*-0.322031);
}

double NNfunction_ns_chi02_dL::synapse0x3d033b0() {
   return (neuron0x3cdc700()*0.48091);
}

double NNfunction_ns_chi02_dL::synapse0x3d033f0() {
   return (neuron0x3cdca40()*0.868842);
}

double NNfunction_ns_chi02_dL::synapse0x3d03430() {
   return (neuron0x3cdcd80()*0.497206);
}

double NNfunction_ns_chi02_dL::synapse0x3d02ec0() {
   return (neuron0x3cdd0c0()*0.369032);
}

double NNfunction_ns_chi02_dL::synapse0x3d02f00() {
   return (neuron0x3cdd620()*-0.471816);
}

double NNfunction_ns_chi02_dL::synapse0x3d03580() {
   return (neuron0x3cdd840()*-0.033509);
}

double NNfunction_ns_chi02_dL::synapse0x3d035c0() {
   return (neuron0x3cddb80()*0.795852);
}

double NNfunction_ns_chi02_dL::synapse0x3d03600() {
   return (neuron0x3cddec0()*-0.489961);
}

double NNfunction_ns_chi02_dL::synapse0x3d03640() {
   return (neuron0x3cde200()*-0.153471);
}

double NNfunction_ns_chi02_dL::synapse0x3d03680() {
   return (neuron0x3cde540()*-0.0451201);
}

double NNfunction_ns_chi02_dL::synapse0x3d036c0() {
   return (neuron0x3cde880()*-0.866825);
}

double NNfunction_ns_chi02_dL::synapse0x3cdfc50() {
   return (neuron0x3cdecf0()*1.53151);
}

double NNfunction_ns_chi02_dL::synapse0x3cdfc90() {
   return (neuron0x3cdf640()*-0.173782);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1170() {
   return (neuron0x3ce0120()*1.73388);
}

double NNfunction_ns_chi02_dL::synapse0x3ce11b0() {
   return (neuron0x3aa3470()*-0.0449841);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1b40() {
   return (neuron0x3ce0ec0()*0.0276875);
}

double NNfunction_ns_chi02_dL::synapse0x3ce1b80() {
   return (neuron0x3ce1890()*-0.0124802);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2910() {
   return (neuron0x3ce2660()*3.62999);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2950() {
   return (neuron0x3ce3030()*-0.609563);
}

double NNfunction_ns_chi02_dL::synapse0x3ce32e0() {
   return (neuron0x3ce3a00()*-1.47369);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3320() {
   return (neuron0x3ce44e0()*1.95238);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3cb0() {
   return (neuron0x3ce4eb0()*4.57711);
}

double NNfunction_ns_chi02_dL::synapse0x3ce3cf0() {
   return (neuron0x3ce1f90()*2.68198);
}

double NNfunction_ns_chi02_dL::synapse0x3ce4790() {
   return (neuron0x3ce6a60()*-0.0536095);
}

double NNfunction_ns_chi02_dL::synapse0x3ce47d0() {
   return (neuron0x3ce7430()*0.0262891);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5160() {
   return (neuron0x3ce7e00()*-0.00669564);
}

double NNfunction_ns_chi02_dL::synapse0x3ce51a0() {
   return (neuron0x3ce87d0()*0.0554123);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2240() {
   return (neuron0x3cea5e0()*3.37362);
}

double NNfunction_ns_chi02_dL::synapse0x3ce2280() {
   return (neuron0x3cea8c0()*0.39104);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6d10() {
   return (neuron0x3ceb290()*-0.270275);
}

double NNfunction_ns_chi02_dL::synapse0x3ce6d50() {
   return (neuron0x3cebc60()*0.646905);
}

double NNfunction_ns_chi02_dL::synapse0x3ce76e0() {
   return (neuron0x3cec630()*-0.0379499);
}

double NNfunction_ns_chi02_dL::synapse0x3ce7720() {
   return (neuron0x3ced000()*0.95056);
}

double NNfunction_ns_chi02_dL::synapse0x3ce80b0() {
   return (neuron0x3ce5b50()*1.05465);
}

double NNfunction_ns_chi02_dL::synapse0x3ce80f0() {
   return (neuron0x3ce6520()*-0.0442382);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8a80() {
   return (neuron0x3cefd90()*2.28898);
}

double NNfunction_ns_chi02_dL::synapse0x3ce8ac0() {
   return (neuron0x3cf0760()*7.13063e-05);
}

double NNfunction_ns_chi02_dL::synapse0x3cdcc60() {
   return (neuron0x3cf1130()*-0.0752468);
}

double NNfunction_ns_chi02_dL::synapse0x3cdcca0() {
   return (neuron0x3cf1b00()*-2.25431);
}

double NNfunction_ns_chi02_dL::synapse0x3ceab70() {
   return (neuron0x3cf24d0()*1.96592);
}

double NNfunction_ns_chi02_dL::synapse0x3ceabb0() {
   return (neuron0x3cf2ea0()*0.212822);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb540() {
   return (neuron0x3cf3870()*-1.19196);
}

double NNfunction_ns_chi02_dL::synapse0x3ceb580() {
   return (neuron0x3cf4240()*-0.0376515);
}

double NNfunction_ns_chi02_dL::synapse0x3cebf10() {
   return (neuron0x3cea2d0()*-2.55605);
}

double NNfunction_ns_chi02_dL::synapse0x3cebf50() {
   return (neuron0x3cf6e20()*-0.167537);
}

double NNfunction_ns_chi02_dL::synapse0x3cec8e0() {
   return (neuron0x3cf77f0()*0.00927314);
}

double NNfunction_ns_chi02_dL::synapse0x3cec920() {
   return (neuron0x3cf81c0()*1.73415);
}

double NNfunction_ns_chi02_dL::synapse0x3ced2b0() {
   return (neuron0x3cf8b90()*-0.204189);
}

double NNfunction_ns_chi02_dL::synapse0x3ced2f0() {
   return (neuron0x3cf9560()*-0.207016);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5e00() {
   return (neuron0x3cf9f30()*-0.31531);
}

double NNfunction_ns_chi02_dL::synapse0x3ce5e40() {
   return (neuron0x3cfa900()*-2.26749);
}

double NNfunction_ns_chi02_dL::synapse0x3cef6b0() {
   return (neuron0x3cfb2d0()*0.0950127);
}

double NNfunction_ns_chi02_dL::synapse0x3cef6f0() {
   return (neuron0x3cfbeb0()*0.745927);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0040() {
   return (neuron0x3cfc880()*-0.220914);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0080() {
   return (neuron0x3ced700()*0.249685);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0a10() {
   return (neuron0x3cee0d0()*-0.152827);
}

double NNfunction_ns_chi02_dL::synapse0x3cf0a50() {
   return (neuron0x3ceeaa0()*0.0314707);
}

double NNfunction_ns_chi02_dL::synapse0x3cf13e0() {
   return (neuron0x3d010e0()*0.344455);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1420() {
   return (neuron0x3d01990()*1.38222);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1db0() {
   return (neuron0x3d02360()*0.0586309);
}

double NNfunction_ns_chi02_dL::synapse0x3cf1df0() {
   return (neuron0x3d02d30()*-0.0603614);
}

double NNfunction_ns_chi02_dL::synapse0x3cf44f0() {
   return (neuron0x3cdecf0()*0.874796);
}

double NNfunction_ns_chi02_dL::synapse0x3cf4530() {
   return (neuron0x3cdf640()*-0.433672);
}

double NNfunction_ns_chi02_dL::synapse0x3ce9ab0() {
   return (neuron0x3ce0120()*-0.145298);
}

double NNfunction_ns_chi02_dL::synapse0x3ce9af0() {
   return (neuron0x3aa3470()*0.2702);
}

double NNfunction_ns_chi02_dL::synapse0x3cf70d0() {
   return (neuron0x3ce0ec0()*0.398533);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7110() {
   return (neuron0x3ce1890()*-0.231438);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7aa0() {
   return (neuron0x3ce2660()*-1.35157);
}

double NNfunction_ns_chi02_dL::synapse0x3cf7ae0() {
   return (neuron0x3ce3030()*0.202233);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8470() {
   return (neuron0x3ce3a00()*2.72455);
}

double NNfunction_ns_chi02_dL::synapse0x3cf84b0() {
   return (neuron0x3ce44e0()*-0.36225);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8e40() {
   return (neuron0x3ce4eb0()*-2.22218);
}

double NNfunction_ns_chi02_dL::synapse0x3cf8e80() {
   return (neuron0x3ce1f90()*-3.12118);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9810() {
   return (neuron0x3ce6a60()*0.155076);
}

double NNfunction_ns_chi02_dL::synapse0x3cf9850() {
   return (neuron0x3ce7430()*0.499458);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa1e0() {
   return (neuron0x3ce7e00()*-0.367303);
}

double NNfunction_ns_chi02_dL::synapse0x3cfa220() {
   return (neuron0x3ce87d0()*0.155794);
}

double NNfunction_ns_chi02_dL::synapse0x3cfabb0() {
   return (neuron0x3cea5e0()*2.19476);
}

double NNfunction_ns_chi02_dL::synapse0x3cfabf0() {
   return (neuron0x3cea8c0()*-0.857216);
}

double NNfunction_ns_chi02_dL::synapse0x3cfb580() {
   return (neuron0x3ceb290()*-0.891592);
}

double NNfunction_ns_chi02_dL::synapse0x3cfb5c0() {
   return (neuron0x3cebc60()*-0.110742);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc160() {
   return (neuron0x3cec630()*-0.223615);
}

double NNfunction_ns_chi02_dL::synapse0x3cfc1a0() {
   return (neuron0x3ced000()*2.14772);
}

double NNfunction_ns_chi02_dL::synapse0x3cfcb30() {
   return (neuron0x3ce5b50()*2.05312);
}

double NNfunction_ns_chi02_dL::synapse0x3cfcb70() {
   return (neuron0x3ce6520()*-0.848903);
}

double NNfunction_ns_chi02_dL::synapse0x3ced9b0() {
   return (neuron0x3cefd90()*1.07693);
}

double NNfunction_ns_chi02_dL::synapse0x3ced9f0() {
   return (neuron0x3cf0760()*-0.375555);
}

double NNfunction_ns_chi02_dL::synapse0x3cee380() {
   return (neuron0x3cf1130()*0.506694);
}

double NNfunction_ns_chi02_dL::synapse0x3cee3c0() {
   return (neuron0x3cf1b00()*-2.31871);
}

double NNfunction_ns_chi02_dL::synapse0x3ceed50() {
   return (neuron0x3cf24d0()*-0.283519);
}

double NNfunction_ns_chi02_dL::synapse0x3ceed90() {
   return (neuron0x3cf2ea0()*1.03729);
}

double NNfunction_ns_chi02_dL::synapse0x3d01270() {
   return (neuron0x3cf3870()*-0.210299);
}

double NNfunction_ns_chi02_dL::synapse0x3d012b0() {
   return (neuron0x3cf4240()*-0.514587);
}

double NNfunction_ns_chi02_dL::synapse0x3d01c40() {
   return (neuron0x3cea2d0()*0.214369);
}

double NNfunction_ns_chi02_dL::synapse0x3d01c80() {
   return (neuron0x3cf6e20()*-0.611555);
}

double NNfunction_ns_chi02_dL::synapse0x3d02610() {
   return (neuron0x3cf77f0()*-0.395193);
}

double NNfunction_ns_chi02_dL::synapse0x3d02650() {
   return (neuron0x3cf81c0()*0.264858);
}

double NNfunction_ns_chi02_dL::synapse0x3d02fe0() {
   return (neuron0x3cf8b90()*-0.70305);
}

double NNfunction_ns_chi02_dL::synapse0x3d03020() {
   return (neuron0x3cf9560()*-0.790811);
}

double NNfunction_ns_chi02_dL::synapse0x3cdef10() {
   return (neuron0x3cf9f30()*-0.968094);
}

double NNfunction_ns_chi02_dL::synapse0x3cdef50() {
   return (neuron0x3cfa900()*-1.89366);
}

double NNfunction_ns_chi02_dL::synapse0x3cf2780() {
   return (neuron0x3cfb2d0()*0.367248);
}

double NNfunction_ns_chi02_dL::synapse0x3cf27c0() {
   return (neuron0x3cfbeb0()*0.394807);
}

double NNfunction_ns_chi02_dL::synapse0x3d03700() {
   return (neuron0x3cfc880()*0.803303);
}

double NNfunction_ns_chi02_dL::synapse0x3d03740() {
   return (neuron0x3ced700()*0.166473);
}

double NNfunction_ns_chi02_dL::synapse0x3d03780() {
   return (neuron0x3cee0d0()*-0.682707);
}

double NNfunction_ns_chi02_dL::synapse0x3d037c0() {
   return (neuron0x3ceeaa0()*0.315193);
}

double NNfunction_ns_chi02_dL::synapse0x3d0a670() {
   return (neuron0x3d010e0()*0.274504);
}

double NNfunction_ns_chi02_dL::synapse0x3d0a6b0() {
   return (neuron0x3d01990()*0.367341);
}

double NNfunction_ns_chi02_dL::synapse0x3d0a6f0() {
   return (neuron0x3d02360()*0.398127);
}

double NNfunction_ns_chi02_dL::synapse0x3d0a730() {
   return (neuron0x3d02d30()*-0.403482);
}

double NNfunction_ns_chi02_dL::synapse0x3d0aab0() {
   return (neuron0x3cdecf0()*3.29675);
}

double NNfunction_ns_chi02_dL::synapse0x3d0aaf0() {
   return (neuron0x3cdf640()*0.476334);
}

double NNfunction_ns_chi02_dL::synapse0x3d0ab30() {
   return (neuron0x3ce0120()*2.54947);
}

double NNfunction_ns_chi02_dL::synapse0x3d0ab70() {
   return (neuron0x3aa3470()*-0.25348);
}

double NNfunction_ns_chi02_dL::synapse0x3d0abb0() {
   return (neuron0x3ce0ec0()*-0.365653);
}

double NNfunction_ns_chi02_dL::synapse0x3d0abf0() {
   return (neuron0x3ce1890()*0.307768);
}

double NNfunction_ns_chi02_dL::synapse0x3d0ac30() {
   return (neuron0x3ce2660()*1.18776);
}

double NNfunction_ns_chi02_dL::synapse0x3d0ac70() {
   return (neuron0x3ce3030()*0.265028);
}

double NNfunction_ns_chi02_dL::synapse0x3d0acb0() {
   return (neuron0x3ce3a00()*0.788459);
}

double NNfunction_ns_chi02_dL::synapse0x3d0acf0() {
   return (neuron0x3ce44e0()*2.56449);
}

double NNfunction_ns_chi02_dL::synapse0x3d0ad30() {
   return (neuron0x3ce4eb0()*-4.38037);
}

double NNfunction_ns_chi02_dL::synapse0x3d0ad70() {
   return (neuron0x3ce1f90()*-4.21435);
}

double NNfunction_ns_chi02_dL::synapse0x3d0adb0() {
   return (neuron0x3ce6a60()*-0.29454);
}

double NNfunction_ns_chi02_dL::synapse0x3d0adf0() {
   return (neuron0x3ce7430()*-0.494225);
}

double NNfunction_ns_chi02_dL::synapse0x3d0ae30() {
   return (neuron0x3ce7e00()*0.330136);
}

double NNfunction_ns_chi02_dL::synapse0x3d0ae70() {
   return (neuron0x3ce87d0()*-0.47458);
}

double NNfunction_ns_chi02_dL::synapse0x3d0a900() {
   return (neuron0x3cea5e0()*4.39318);
}

double NNfunction_ns_chi02_dL::synapse0x3d0a940() {
   return (neuron0x3cea8c0()*3.20258);
}

double NNfunction_ns_chi02_dL::synapse0x3d0afc0() {
   return (neuron0x3ceb290()*0.987952);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b000() {
   return (neuron0x3cebc60()*1.25556);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b040() {
   return (neuron0x3cec630()*0.370956);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b080() {
   return (neuron0x3ced000()*-5.66826);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b0c0() {
   return (neuron0x3ce5b50()*3.20508);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b100() {
   return (neuron0x3ce6520()*0.512577);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b140() {
   return (neuron0x3cefd90()*-2.45333);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b180() {
   return (neuron0x3cf0760()*0.505821);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b1c0() {
   return (neuron0x3cf1130()*-0.367847);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b200() {
   return (neuron0x3cf1b00()*-7.18706);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b240() {
   return (neuron0x3cf24d0()*0.401001);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b280() {
   return (neuron0x3cf2ea0()*2.09528);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b2c0() {
   return (neuron0x3cf3870()*-1.06667);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b300() {
   return (neuron0x3cf4240()*0.475325);
}

double NNfunction_ns_chi02_dL::synapse0x3d0aeb0() {
   return (neuron0x3cea2d0()*-0.954418);
}

double NNfunction_ns_chi02_dL::synapse0x3d0aef0() {
   return (neuron0x3cf6e20()*0.617229);
}

double NNfunction_ns_chi02_dL::synapse0x3d0af30() {
   return (neuron0x3cf77f0()*0.344972);
}

double NNfunction_ns_chi02_dL::synapse0x3d0af70() {
   return (neuron0x3cf81c0()*3.07967);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b550() {
   return (neuron0x3cf8b90()*0.596913);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b590() {
   return (neuron0x3cf9560()*0.61289);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b5d0() {
   return (neuron0x3cf9f30()*1.08174);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b610() {
   return (neuron0x3cfa900()*5.1784);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b650() {
   return (neuron0x3cfb2d0()*-0.455338);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b690() {
   return (neuron0x3cfbeb0()*1.57826);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b6d0() {
   return (neuron0x3cfc880()*-7.02327);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b710() {
   return (neuron0x3ced700()*1.74887);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b750() {
   return (neuron0x3cee0d0()*0.538035);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b790() {
   return (neuron0x3ceeaa0()*-0.392709);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b7d0() {
   return (neuron0x3d010e0()*-3.57541);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b810() {
   return (neuron0x3d01990()*5.45068);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b850() {
   return (neuron0x3d02360()*-0.4316);
}

double NNfunction_ns_chi02_dL::synapse0x3d0b890() {
   return (neuron0x3d02d30()*0.550879);
}

double NNfunction_ns_chi02_dL::synapse0x3d0bc10() {
   return (neuron0x3cdecf0()*1.78904);
}

double NNfunction_ns_chi02_dL::synapse0x3d0bc50() {
   return (neuron0x3cdf640()*-0.158933);
}

double NNfunction_ns_chi02_dL::synapse0x3d0bc90() {
   return (neuron0x3ce0120()*-3.66425);
}

double NNfunction_ns_chi02_dL::synapse0x3d0bcd0() {
   return (neuron0x3aa3470()*0.0743291);
}

double NNfunction_ns_chi02_dL::synapse0x3d0bd10() {
   return (neuron0x3ce0ec0()*0.126777);
}

double NNfunction_ns_chi02_dL::synapse0x3d0bd50() {
   return (neuron0x3ce1890()*-0.0732694);
}

double NNfunction_ns_chi02_dL::synapse0x3d0bd90() {
   return (neuron0x3ce2660()*-0.111887);
}

double NNfunction_ns_chi02_dL::synapse0x3d0bdd0() {
   return (neuron0x3ce3030()*-1.82103);
}

double NNfunction_ns_chi02_dL::synapse0x3d0be10() {
   return (neuron0x3ce3a00()*1.45054);
}

double NNfunction_ns_chi02_dL::synapse0x3d0be50() {
   return (neuron0x3ce44e0()*-3.87968);
}

double NNfunction_ns_chi02_dL::synapse0x3d0be90() {
   return (neuron0x3ce4eb0()*-0.813989);
}

double NNfunction_ns_chi02_dL::synapse0x3d0bed0() {
   return (neuron0x3ce1f90()*-1.26583);
}

double NNfunction_ns_chi02_dL::synapse0x3d0bf10() {
   return (neuron0x3ce6a60()*0.0515222);
}

double NNfunction_ns_chi02_dL::synapse0x3d0bf50() {
   return (neuron0x3ce7430()*0.142059);
}

double NNfunction_ns_chi02_dL::synapse0x3d0bf90() {
   return (neuron0x3ce7e00()*-0.108561);
}

double NNfunction_ns_chi02_dL::synapse0x3d0bfd0() {
   return (neuron0x3ce87d0()*0.0382021);
}

double NNfunction_ns_chi02_dL::synapse0x3d0ba60() {
   return (neuron0x3cea5e0()*0.575416);
}

double NNfunction_ns_chi02_dL::synapse0x3d0baa0() {
   return (neuron0x3cea8c0()*-0.308172);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c120() {
   return (neuron0x3ceb290()*-0.259083);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c160() {
   return (neuron0x3cebc60()*-0.027916);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c1a0() {
   return (neuron0x3cec630()*-0.0732321);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c1e0() {
   return (neuron0x3ced000()*0.402894);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c220() {
   return (neuron0x3ce5b50()*1.71678);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c260() {
   return (neuron0x3ce6520()*-0.263787);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c2a0() {
   return (neuron0x3cefd90()*-1.07584);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c2e0() {
   return (neuron0x3cf0760()*-0.111819);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c320() {
   return (neuron0x3cf1130()*0.130439);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c360() {
   return (neuron0x3cf1b00()*-0.51678);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c3a0() {
   return (neuron0x3cf24d0()*-0.603742);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c3e0() {
   return (neuron0x3cf2ea0()*0.272462);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c420() {
   return (neuron0x3cf3870()*2.24559);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c460() {
   return (neuron0x3cf4240()*-0.167832);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c010() {
   return (neuron0x3cea2d0()*3.50331);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c050() {
   return (neuron0x3cf6e20()*-0.19768);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c090() {
   return (neuron0x3cf77f0()*-0.140372);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c0d0() {
   return (neuron0x3cf81c0()*0.7346);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c6b0() {
   return (neuron0x3cf8b90()*-0.205181);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c6f0() {
   return (neuron0x3cf9560()*-0.238026);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c730() {
   return (neuron0x3cf9f30()*-0.335416);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c770() {
   return (neuron0x3cfa900()*0.13516);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c7b0() {
   return (neuron0x3cfb2d0()*0.113758);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c7f0() {
   return (neuron0x3cfbeb0()*-2.0146);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c830() {
   return (neuron0x3cfc880()*-0.112509);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c870() {
   return (neuron0x3ced700()*0.0375663);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c8b0() {
   return (neuron0x3cee0d0()*-0.222085);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c8f0() {
   return (neuron0x3ceeaa0()*0.0889229);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c930() {
   return (neuron0x3d010e0()*-1.14324);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c970() {
   return (neuron0x3d01990()*0.23884);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c9b0() {
   return (neuron0x3d02360()*0.117293);
}

double NNfunction_ns_chi02_dL::synapse0x3d0c9f0() {
   return (neuron0x3d02d30()*-0.102142);
}

double NNfunction_ns_chi02_dL::synapse0x3d0cd70() {
   return (neuron0x3cdecf0()*-0.68957);
}

double NNfunction_ns_chi02_dL::synapse0x3d0cdb0() {
   return (neuron0x3cdf640()*0.0219218);
}

double NNfunction_ns_chi02_dL::synapse0x3d0cdf0() {
   return (neuron0x3ce0120()*-0.228807);
}

double NNfunction_ns_chi02_dL::synapse0x3d0ce30() {
   return (neuron0x3aa3470()*0.124059);
}

double NNfunction_ns_chi02_dL::synapse0x3d0ce70() {
   return (neuron0x3ce0ec0()*-0.0335919);
}

double NNfunction_ns_chi02_dL::synapse0x3d0ceb0() {
   return (neuron0x3ce1890()*-0.0295651);
}

double NNfunction_ns_chi02_dL::synapse0x3d0cef0() {
   return (neuron0x3ce2660()*0.478661);
}

double NNfunction_ns_chi02_dL::synapse0x3d0cf30() {
   return (neuron0x3ce3030()*-0.221406);
}

double NNfunction_ns_chi02_dL::synapse0x3d0cf70() {
   return (neuron0x3ce3a00()*-0.38868);
}

double NNfunction_ns_chi02_dL::synapse0x3d0cfb0() {
   return (neuron0x3ce44e0()*-0.826224);
}

double NNfunction_ns_chi02_dL::synapse0x3d0cff0() {
   return (neuron0x3ce4eb0()*0.326038);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d030() {
   return (neuron0x3ce1f90()*0.268307);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d070() {
   return (neuron0x3ce6a60()*0.305544);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d0b0() {
   return (neuron0x3ce7430()*0.0413894);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d0f0() {
   return (neuron0x3ce7e00()*0.286521);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d130() {
   return (neuron0x3ce87d0()*0.127686);
}

double NNfunction_ns_chi02_dL::synapse0x3d0cbc0() {
   return (neuron0x3cea5e0()*0.694816);
}

double NNfunction_ns_chi02_dL::synapse0x3d0cc00() {
   return (neuron0x3cea8c0()*-0.76695);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d280() {
   return (neuron0x3ceb290()*-0.0604328);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d2c0() {
   return (neuron0x3cebc60()*-0.359938);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d300() {
   return (neuron0x3cec630()*-0.0749155);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d340() {
   return (neuron0x3ced000()*0.0740534);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d380() {
   return (neuron0x3ce5b50()*0.914148);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d3c0() {
   return (neuron0x3ce6520()*-0.125916);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d400() {
   return (neuron0x3cefd90()*0.783615);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d440() {
   return (neuron0x3cf0760()*-0.286617);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d480() {
   return (neuron0x3cf1130()*-0.222952);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d4c0() {
   return (neuron0x3cf1b00()*-0.557351);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d500() {
   return (neuron0x3cf24d0()*0.49986);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d540() {
   return (neuron0x3cf2ea0()*-1.72501);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d580() {
   return (neuron0x3cf3870()*1.28094);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d5c0() {
   return (neuron0x3cf4240()*-0.582996);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d170() {
   return (neuron0x3cea2d0()*-0.82721);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d1b0() {
   return (neuron0x3cf6e20()*0.00446143);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d1f0() {
   return (neuron0x3cf77f0()*-0.597117);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d230() {
   return (neuron0x3cf81c0()*-1.44169);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d810() {
   return (neuron0x3cf8b90()*0.454828);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d850() {
   return (neuron0x3cf9560()*0.118436);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d890() {
   return (neuron0x3cf9f30()*-0.125907);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d8d0() {
   return (neuron0x3cfa900()*1.17147);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d910() {
   return (neuron0x3cfb2d0()*-0.0195665);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d950() {
   return (neuron0x3cfbeb0()*-0.876529);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d990() {
   return (neuron0x3cfc880()*0.634538);
}

double NNfunction_ns_chi02_dL::synapse0x3d0d9d0() {
   return (neuron0x3ced700()*-0.296028);
}

double NNfunction_ns_chi02_dL::synapse0x3d0da10() {
   return (neuron0x3cee0d0()*-0.220383);
}

double NNfunction_ns_chi02_dL::synapse0x3d0da50() {
   return (neuron0x3ceeaa0()*0.106699);
}

double NNfunction_ns_chi02_dL::synapse0x3d0da90() {
   return (neuron0x3d010e0()*-1.41925);
}

double NNfunction_ns_chi02_dL::synapse0x3d0dad0() {
   return (neuron0x3d01990()*0.35159);
}

double NNfunction_ns_chi02_dL::synapse0x3d0db10() {
   return (neuron0x3d02360()*0.299641);
}

double NNfunction_ns_chi02_dL::synapse0x3d0db50() {
   return (neuron0x3d02d30()*-0.286807);
}

double NNfunction_ns_chi02_dL::synapse0x3d0ddb0() {
   return (neuron0x3d09f30()*-5.32721);
}

double NNfunction_ns_chi02_dL::synapse0x3d0ddf0() {
   return (neuron0x3d0a2d0()*-2.62482);
}

double NNfunction_ns_chi02_dL::synapse0x3d0de30() {
   return (neuron0x3d0a770()*-3.43653);
}

double NNfunction_ns_chi02_dL::synapse0x3d0de70() {
   return (neuron0x3d0b8d0()*9.02979);
}

double NNfunction_ns_chi02_dL::synapse0x3d0deb0() {
   return (neuron0x3d0ca30()*-2.94308);
}

