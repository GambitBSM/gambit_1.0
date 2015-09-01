#include "NNfunction_ns_chi01_sL.h"
#include <cmath>

double NNfunction_ns_chi01_sL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3978)/15.2129;
   input1 = (in1 - 28.0831)/1033.14;
   input2 = (in2 - 473.795)/539.788;
   input3 = (in3 - 39.3578)/760.102;
   input4 = (in4 - 938.692)/906.74;
   input5 = (in5 - 796.377)/887.906;
   input6 = (in6 - 789.935)/880.72;
   input7 = (in7 - 811.208)/870.257;
   input8 = (in8 - 814.202)/916.914;
   input9 = (in9 - 801.05)/901.006;
   input10 = (in10 - 855.768)/911.482;
   input11 = (in11 - 678.951)/793.014;
   input12 = (in12 - 267.623)/210.202;
   input13 = (in13 - 479.723)/463.145;
   input14 = (in14 - 673.735)/740.944;
   input15 = (in15 - 673.307)/741.252;
   input16 = (in16 - 485.084)/502.037;
   input17 = (in17 - 709.315)/829.799;
   input18 = (in18 - 712.643)/832.319;
   input19 = (in19 - 737.411)/808.477;
   input20 = (in20 - -51.3898)/450.186;
   input21 = (in21 - -65.1661)/1060.25;
   input22 = (in22 - 10.6435)/1093.99;
   input23 = (in23 - -135.449)/579.847;
   switch(index) {
     case 0:
         return neuron0x3bb1a20();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_sL::Value(int index, double* input) {
   input0 = (input[0] - 23.3978)/15.2129;
   input1 = (input[1] - 28.0831)/1033.14;
   input2 = (input[2] - 473.795)/539.788;
   input3 = (input[3] - 39.3578)/760.102;
   input4 = (input[4] - 938.692)/906.74;
   input5 = (input[5] - 796.377)/887.906;
   input6 = (input[6] - 789.935)/880.72;
   input7 = (input[7] - 811.208)/870.257;
   input8 = (input[8] - 814.202)/916.914;
   input9 = (input[9] - 801.05)/901.006;
   input10 = (input[10] - 855.768)/911.482;
   input11 = (input[11] - 678.951)/793.014;
   input12 = (input[12] - 267.623)/210.202;
   input13 = (input[13] - 479.723)/463.145;
   input14 = (input[14] - 673.735)/740.944;
   input15 = (input[15] - 673.307)/741.252;
   input16 = (input[16] - 485.084)/502.037;
   input17 = (input[17] - 709.315)/829.799;
   input18 = (input[18] - 712.643)/832.319;
   input19 = (input[19] - 737.411)/808.477;
   input20 = (input[20] - -51.3898)/450.186;
   input21 = (input[21] - -65.1661)/1060.25;
   input22 = (input[22] - 10.6435)/1093.99;
   input23 = (input[23] - -135.449)/579.847;
   switch(index) {
     case 0:
         return neuron0x3bb1a20();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_sL::neuron0x3b7ca90() {
   return input0;
}

double NNfunction_ns_chi01_sL::neuron0x3b7cd40() {
   return input1;
}

double NNfunction_ns_chi01_sL::neuron0x3b7d080() {
   return input2;
}

double NNfunction_ns_chi01_sL::neuron0x3b7d3c0() {
   return input3;
}

double NNfunction_ns_chi01_sL::neuron0x3b7d700() {
   return input4;
}

double NNfunction_ns_chi01_sL::neuron0x3b7da40() {
   return input5;
}

double NNfunction_ns_chi01_sL::neuron0x3b7dd80() {
   return input6;
}

double NNfunction_ns_chi01_sL::neuron0x3b7e0c0() {
   return input7;
}

double NNfunction_ns_chi01_sL::neuron0x3b7e400() {
   return input8;
}

double NNfunction_ns_chi01_sL::neuron0x3b7e740() {
   return input9;
}

double NNfunction_ns_chi01_sL::neuron0x3b7ea80() {
   return input10;
}

double NNfunction_ns_chi01_sL::neuron0x3b7edc0() {
   return input11;
}

double NNfunction_ns_chi01_sL::neuron0x3b7f100() {
   return input12;
}

double NNfunction_ns_chi01_sL::neuron0x3b7f440() {
   return input13;
}

double NNfunction_ns_chi01_sL::neuron0x3b7f780() {
   return input14;
}

double NNfunction_ns_chi01_sL::neuron0x3b7fac0() {
   return input15;
}

double NNfunction_ns_chi01_sL::neuron0x3b7fe00() {
   return input16;
}

double NNfunction_ns_chi01_sL::neuron0x3b80360() {
   return input17;
}

double NNfunction_ns_chi01_sL::neuron0x3b806a0() {
   return input18;
}

double NNfunction_ns_chi01_sL::neuron0x3b809e0() {
   return input19;
}

double NNfunction_ns_chi01_sL::neuron0x3b80d20() {
   return input20;
}

double NNfunction_ns_chi01_sL::neuron0x3b81060() {
   return input21;
}

double NNfunction_ns_chi01_sL::neuron0x3b813a0() {
   return input22;
}

double NNfunction_ns_chi01_sL::neuron0x3b816e0() {
   return input23;
}

double NNfunction_ns_chi01_sL::input0x3b81b50() {
   double input = 2.96417;
   input += synapse0x3b81e90();
   input += synapse0x3b81ed0();
   input += synapse0x3b81f10();
   input += synapse0x3b81f50();
   input += synapse0x3b81f90();
   input += synapse0x3b81fd0();
   input += synapse0x3b82010();
   input += synapse0x3b82050();
   input += synapse0x3b82090();
   input += synapse0x3b820d0();
   input += synapse0x3b82110();
   input += synapse0x3b82150();
   input += synapse0x3b82190();
   input += synapse0x3b821d0();
   input += synapse0x3b82210();
   input += synapse0x3b82250();
   input += synapse0x3b81ce0();
   input += synapse0x3b81d20();
   input += synapse0x3938c10();
   input += synapse0x3938c50();
   input += synapse0x3b82290();
   input += synapse0x3b822d0();
   input += synapse0x3b82310();
   input += synapse0x3b82350();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b81b50() {
   double input = input0x3b81b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b82390() {
   double input = 1.00892;
   input += synapse0x3b826d0();
   input += synapse0x3b82710();
   input += synapse0x3b82750();
   input += synapse0x3b82790();
   input += synapse0x3b827d0();
   input += synapse0x3b82810();
   input += synapse0x3b82850();
   input += synapse0x3b82890();
   input += synapse0x3b828d0();
   input += synapse0x3938a60();
   input += synapse0x3938aa0();
   input += synapse0x3938ae0();
   input += synapse0x3938b20();
   input += synapse0x3b82b20();
   input += synapse0x3b82b60();
   input += synapse0x3b82ba0();
   input += synapse0x3b82520();
   input += synapse0x3b82560();
   input += synapse0x3b82cf0();
   input += synapse0x3b82d30();
   input += synapse0x3b82d70();
   input += synapse0x3b82db0();
   input += synapse0x3b82df0();
   input += synapse0x3b82e30();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b82390() {
   double input = input0x3b82390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b82e70() {
   double input = -1.02609;
   input += synapse0x3b831b0();
   input += synapse0x3b831f0();
   input += synapse0x3b83230();
   input += synapse0x3b83270();
   input += synapse0x3b832b0();
   input += synapse0x3b832f0();
   input += synapse0x3b83330();
   input += synapse0x3b83370();
   input += synapse0x3b833b0();
   input += synapse0x3b833f0();
   input += synapse0x3b83430();
   input += synapse0x3b83470();
   input += synapse0x3b834b0();
   input += synapse0x3b834f0();
   input += synapse0x3b83530();
   input += synapse0x3b83570();
   input += synapse0x3b83000();
   input += synapse0x3b83040();
   input += synapse0x3939300();
   input += synapse0x3946bd0();
   input += synapse0x3946c10();
   input += synapse0x3b854a0();
   input += synapse0x3b854e0();
   input += synapse0x3b7c7d0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b82e70() {
   double input = input0x3b82e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b82910() {
   double input = -1.18756;
   input += synapse0x3b7c8a0();
   input += synapse0x3947450();
   input += synapse0x3b82aa0();
   input += synapse0x3b82ae0();
   input += synapse0x3b836c0();
   input += synapse0x3b83700();
   input += synapse0x3b83740();
   input += synapse0x3b83780();
   input += synapse0x3b837c0();
   input += synapse0x3b83800();
   input += synapse0x3b83840();
   input += synapse0x3b83880();
   input += synapse0x3b838c0();
   input += synapse0x3b83900();
   input += synapse0x3b83940();
   input += synapse0x3b83980();
   input += synapse0x3b7c810();
   input += synapse0x3b7c850();
   input += synapse0x3b83ad0();
   input += synapse0x3b83b10();
   input += synapse0x3b83b50();
   input += synapse0x3b83b90();
   input += synapse0x3b83bd0();
   input += synapse0x3b83c10();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b82910() {
   double input = input0x3b82910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b83c50() {
   double input = 5.48535;
   input += synapse0x3b83f90();
   input += synapse0x3b83fd0();
   input += synapse0x3b84010();
   input += synapse0x3b84050();
   input += synapse0x3b84090();
   input += synapse0x3b840d0();
   input += synapse0x3b84110();
   input += synapse0x3b84150();
   input += synapse0x3b84190();
   input += synapse0x3b841d0();
   input += synapse0x3b84210();
   input += synapse0x3b84250();
   input += synapse0x3b84290();
   input += synapse0x3b842d0();
   input += synapse0x3b84310();
   input += synapse0x3b84350();
   input += synapse0x3b844a0();
   input += synapse0x3b83de0();
   input += synapse0x3b83e20();
   input += synapse0x3b855e0();
   input += synapse0x3b85620();
   input += synapse0x3b85660();
   input += synapse0x3b856a0();
   input += synapse0x3b856e0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b83c50() {
   double input = input0x3b83c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b85720() {
   double input = -1.02194;
   input += synapse0x3b85a60();
   input += synapse0x3b85aa0();
   input += synapse0x3b85ae0();
   input += synapse0x3b85b20();
   input += synapse0x3b85b60();
   input += synapse0x3b85ba0();
   input += synapse0x3b85be0();
   input += synapse0x3b85c20();
   input += synapse0x3b85c60();
   input += synapse0x3946f20();
   input += synapse0x3946f60();
   input += synapse0x3946fa0();
   input += synapse0x3946fe0();
   input += synapse0x3947020();
   input += synapse0x3947060();
   input += synapse0x39470a0();
   input += synapse0x3b858b0();
   input += synapse0x3b858f0();
   input += synapse0x39471f0();
   input += synapse0x3947230();
   input += synapse0x3947270();
   input += synapse0x39472b0();
   input += synapse0x39472f0();
   input += synapse0x3b864b0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b85720() {
   double input = input0x3b85720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b864f0() {
   double input = -0.270109;
   input += synapse0x3b86830();
   input += synapse0x3b86870();
   input += synapse0x3b868b0();
   input += synapse0x3b868f0();
   input += synapse0x3b86930();
   input += synapse0x3b86970();
   input += synapse0x3b869b0();
   input += synapse0x3b869f0();
   input += synapse0x3b86a30();
   input += synapse0x3b86a70();
   input += synapse0x3b86ab0();
   input += synapse0x3b86af0();
   input += synapse0x3b86b30();
   input += synapse0x3b86b70();
   input += synapse0x3b86bb0();
   input += synapse0x3b86bf0();
   input += synapse0x3b86680();
   input += synapse0x3b866c0();
   input += synapse0x3b86d40();
   input += synapse0x3b86d80();
   input += synapse0x3b86dc0();
   input += synapse0x3b86e00();
   input += synapse0x3b86e40();
   input += synapse0x3b86e80();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b864f0() {
   double input = input0x3b864f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b86ec0() {
   double input = 1.58194;
   input += synapse0x3b87200();
   input += synapse0x3b87240();
   input += synapse0x3b87280();
   input += synapse0x3b872c0();
   input += synapse0x3b87300();
   input += synapse0x3b87340();
   input += synapse0x3b87380();
   input += synapse0x3b873c0();
   input += synapse0x3b87400();
   input += synapse0x3b87440();
   input += synapse0x3b87480();
   input += synapse0x3b874c0();
   input += synapse0x3b87500();
   input += synapse0x3b87540();
   input += synapse0x3b87580();
   input += synapse0x3b875c0();
   input += synapse0x3b87050();
   input += synapse0x3b87090();
   input += synapse0x3b87710();
   input += synapse0x3b87750();
   input += synapse0x3b87790();
   input += synapse0x3b877d0();
   input += synapse0x3b87810();
   input += synapse0x3b87850();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b86ec0() {
   double input = input0x3b86ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b87890() {
   double input = -7.96495;
   input += synapse0x3b80250();
   input += synapse0x3b80290();
   input += synapse0x3b802d0();
   input += synapse0x3b80310();
   input += synapse0x3b87de0();
   input += synapse0x3b87e20();
   input += synapse0x3b87e60();
   input += synapse0x3b87ea0();
   input += synapse0x3b87ee0();
   input += synapse0x3b87f20();
   input += synapse0x3b87f60();
   input += synapse0x3b87fa0();
   input += synapse0x3b87fe0();
   input += synapse0x3b88020();
   input += synapse0x3b88060();
   input += synapse0x3b880a0();
   input += synapse0x3b87a20();
   input += synapse0x3b87a60();
   input += synapse0x3b881f0();
   input += synapse0x3b88230();
   input += synapse0x3b88270();
   input += synapse0x3b882b0();
   input += synapse0x3b882f0();
   input += synapse0x3b88330();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b87890() {
   double input = input0x3b87890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b88370() {
   double input = -1.27729;
   input += synapse0x3b886b0();
   input += synapse0x3b886f0();
   input += synapse0x3b88730();
   input += synapse0x3b88770();
   input += synapse0x3b887b0();
   input += synapse0x3b887f0();
   input += synapse0x3b88830();
   input += synapse0x3b88870();
   input += synapse0x3b888b0();
   input += synapse0x3b888f0();
   input += synapse0x3b88930();
   input += synapse0x3b88970();
   input += synapse0x3b889b0();
   input += synapse0x3b889f0();
   input += synapse0x3b88a30();
   input += synapse0x3b88a70();
   input += synapse0x3b88500();
   input += synapse0x3b88540();
   input += synapse0x3b88bc0();
   input += synapse0x3b88c00();
   input += synapse0x3b88c40();
   input += synapse0x3b88c80();
   input += synapse0x3b88cc0();
   input += synapse0x3b88d00();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b88370() {
   double input = input0x3b88370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b88d40() {
   double input = 0.244457;
   input += synapse0x3b89080();
   input += synapse0x3b890c0();
   input += synapse0x3b89100();
   input += synapse0x3b89140();
   input += synapse0x3b89180();
   input += synapse0x3b891c0();
   input += synapse0x3b89200();
   input += synapse0x3b89240();
   input += synapse0x3b89280();
   input += synapse0x3b892c0();
   input += synapse0x3b89300();
   input += synapse0x3b89340();
   input += synapse0x3b89380();
   input += synapse0x3b893c0();
   input += synapse0x3b89400();
   input += synapse0x3b89440();
   input += synapse0x3b88ed0();
   input += synapse0x3b88f10();
   input += synapse0x3b85ca0();
   input += synapse0x3b85ce0();
   input += synapse0x3b85d20();
   input += synapse0x3b85d60();
   input += synapse0x3b85da0();
   input += synapse0x3b85de0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b88d40() {
   double input = input0x3b88d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b85e20() {
   double input = -0.927386;
   input += synapse0x3b86160();
   input += synapse0x3b861a0();
   input += synapse0x3b861e0();
   input += synapse0x3b86220();
   input += synapse0x3b86260();
   input += synapse0x3b862a0();
   input += synapse0x3b862e0();
   input += synapse0x3b86320();
   input += synapse0x3b86360();
   input += synapse0x3b863a0();
   input += synapse0x3b863e0();
   input += synapse0x3b86420();
   input += synapse0x3b86460();
   input += synapse0x3b8a5a0();
   input += synapse0x3b8a5e0();
   input += synapse0x3b8a620();
   input += synapse0x3b85fb0();
   input += synapse0x3b85ff0();
   input += synapse0x3b8a770();
   input += synapse0x3b8a7b0();
   input += synapse0x3b8a7f0();
   input += synapse0x3b8a830();
   input += synapse0x3b8a870();
   input += synapse0x3b8a8b0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b85e20() {
   double input = input0x3b85e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b8a8f0() {
   double input = 0.910595;
   input += synapse0x3b8ac30();
   input += synapse0x3b8ac70();
   input += synapse0x3b8acb0();
   input += synapse0x3b8acf0();
   input += synapse0x3b8ad30();
   input += synapse0x3b8ad70();
   input += synapse0x3b8adb0();
   input += synapse0x3b8adf0();
   input += synapse0x3b8ae30();
   input += synapse0x3b8ae70();
   input += synapse0x3b8aeb0();
   input += synapse0x3b8aef0();
   input += synapse0x3b8af30();
   input += synapse0x3b8af70();
   input += synapse0x3b8afb0();
   input += synapse0x3b8aff0();
   input += synapse0x3b8aa80();
   input += synapse0x3b8aac0();
   input += synapse0x3b8b140();
   input += synapse0x3b8b180();
   input += synapse0x3b8b1c0();
   input += synapse0x3b8b200();
   input += synapse0x3b8b240();
   input += synapse0x3b8b280();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b8a8f0() {
   double input = input0x3b8a8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b8b2c0() {
   double input = -0.230503;
   input += synapse0x3b8b600();
   input += synapse0x3b8b640();
   input += synapse0x3b8b680();
   input += synapse0x3b8b6c0();
   input += synapse0x3b8b700();
   input += synapse0x3b8b740();
   input += synapse0x3b8b780();
   input += synapse0x3b8b7c0();
   input += synapse0x3b8b800();
   input += synapse0x3b8b840();
   input += synapse0x3b8b880();
   input += synapse0x3b8b8c0();
   input += synapse0x3b8b900();
   input += synapse0x3b8b940();
   input += synapse0x3b8b980();
   input += synapse0x3b8b9c0();
   input += synapse0x3b8b450();
   input += synapse0x3b8b490();
   input += synapse0x3b8bb10();
   input += synapse0x3b8bb50();
   input += synapse0x3b8bb90();
   input += synapse0x3b8bbd0();
   input += synapse0x3b8bc10();
   input += synapse0x3b8bc50();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b8b2c0() {
   double input = input0x3b8b2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b8bc90() {
   double input = 0.0453349;
   input += synapse0x3b8bfd0();
   input += synapse0x3b8c010();
   input += synapse0x3b8c050();
   input += synapse0x3b8c090();
   input += synapse0x3b8c0d0();
   input += synapse0x3b8c110();
   input += synapse0x3b8c150();
   input += synapse0x3b8c190();
   input += synapse0x3b8c1d0();
   input += synapse0x3b8c210();
   input += synapse0x3b8c250();
   input += synapse0x3b8c290();
   input += synapse0x3b8c2d0();
   input += synapse0x3b8c310();
   input += synapse0x3b8c350();
   input += synapse0x3b8c390();
   input += synapse0x3b8be20();
   input += synapse0x3b8be60();
   input += synapse0x3b8c4e0();
   input += synapse0x3b8c520();
   input += synapse0x3b8c560();
   input += synapse0x3b8c5a0();
   input += synapse0x3b8c5e0();
   input += synapse0x3b8c620();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b8bc90() {
   double input = input0x3b8bc90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b8c660() {
   double input = -0.606737;
   input += synapse0x3b8c9a0();
   input += synapse0x3b7cc20();
   input += synapse0x3b7cc60();
   input += synapse0x3b7cf60();
   input += synapse0x3b7cfa0();
   input += synapse0x3b7d2a0();
   input += synapse0x3b7d2e0();
   input += synapse0x3b7d5e0();
   input += synapse0x3b7d620();
   input += synapse0x3b7d920();
   input += synapse0x3b7d960();
   input += synapse0x3b7dc60();
   input += synapse0x3b7dca0();
   input += synapse0x3b7dfa0();
   input += synapse0x3b7dfe0();
   input += synapse0x3b7e2e0();
   input += synapse0x3b7e320();
   input += synapse0x3b7e620();
   input += synapse0x3b7e660();
   input += synapse0x3b7e960();
   input += synapse0x3b7e9a0();
   input += synapse0x3b7eca0();
   input += synapse0x3b7ece0();
   input += synapse0x3b7efe0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b8c660() {
   double input = input0x3b8c660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b8e470() {
   double input = -0.710288;
   input += synapse0x3b7f020();
   input += synapse0x3b7fce0();
   input += synapse0x3b7fd20();
   input += synapse0x3b8c7f0();
   input += synapse0x3b8c830();
   input += synapse0x3b80020();
   input += synapse0x3b80060();
   input += synapse0x3b80580();
   input += synapse0x3b805c0();
   input += synapse0x3b808c0();
   input += synapse0x3b80900();
   input += synapse0x3b80c00();
   input += synapse0x3b80c40();
   input += synapse0x3b80f40();
   input += synapse0x3b80f80();
   input += synapse0x3b81280();
   input += synapse0x3b812c0();
   input += synapse0x3b815c0();
   input += synapse0x3b81600();
   input += synapse0x3b81900();
   input += synapse0x3b81940();
   input += synapse0x3b7f320();
   input += synapse0x3b7f360();
   input += synapse0x3b8e710();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b8e470() {
   double input = input0x3b8e470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b8e750() {
   double input = 1.46609;
   input += synapse0x3b8ea90();
   input += synapse0x3b8ead0();
   input += synapse0x3b8eb10();
   input += synapse0x3b8eb50();
   input += synapse0x3b8eb90();
   input += synapse0x3b8ebd0();
   input += synapse0x3b8ec10();
   input += synapse0x3b8ec50();
   input += synapse0x3b8ec90();
   input += synapse0x3b8ecd0();
   input += synapse0x3b8ed10();
   input += synapse0x3b8ed50();
   input += synapse0x3b8ed90();
   input += synapse0x3b8edd0();
   input += synapse0x3b8ee10();
   input += synapse0x3b8ee50();
   input += synapse0x3b8e8e0();
   input += synapse0x3b8e920();
   input += synapse0x3b8efa0();
   input += synapse0x3b8efe0();
   input += synapse0x3b8f020();
   input += synapse0x3b8f060();
   input += synapse0x3b8f0a0();
   input += synapse0x3b8f0e0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b8e750() {
   double input = input0x3b8e750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b8f120() {
   double input = 2.5656;
   input += synapse0x3b8f460();
   input += synapse0x3b8f4a0();
   input += synapse0x3b8f4e0();
   input += synapse0x3b8f520();
   input += synapse0x3b8f560();
   input += synapse0x3b8f5a0();
   input += synapse0x3b8f5e0();
   input += synapse0x3b8f620();
   input += synapse0x3b8f660();
   input += synapse0x3b8f6a0();
   input += synapse0x3b8f6e0();
   input += synapse0x3b8f720();
   input += synapse0x3b8f760();
   input += synapse0x3b8f7a0();
   input += synapse0x3b8f7e0();
   input += synapse0x3b8f820();
   input += synapse0x3b8f2b0();
   input += synapse0x3b8f2f0();
   input += synapse0x3b8f970();
   input += synapse0x3b8f9b0();
   input += synapse0x3b8f9f0();
   input += synapse0x3b8fa30();
   input += synapse0x3b8fa70();
   input += synapse0x3b8fab0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b8f120() {
   double input = input0x3b8f120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b8faf0() {
   double input = -0.36003;
   input += synapse0x3b8fe30();
   input += synapse0x3b8fe70();
   input += synapse0x3b8feb0();
   input += synapse0x3b8fef0();
   input += synapse0x3b8ff30();
   input += synapse0x3b8ff70();
   input += synapse0x3b8ffb0();
   input += synapse0x3b8fff0();
   input += synapse0x3b90030();
   input += synapse0x3b90070();
   input += synapse0x3b900b0();
   input += synapse0x3b900f0();
   input += synapse0x3b90130();
   input += synapse0x3b90170();
   input += synapse0x3b901b0();
   input += synapse0x3b901f0();
   input += synapse0x3b8fc80();
   input += synapse0x3b8fcc0();
   input += synapse0x3b90340();
   input += synapse0x3b90380();
   input += synapse0x3b903c0();
   input += synapse0x3b90400();
   input += synapse0x3b90440();
   input += synapse0x3b90480();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b8faf0() {
   double input = input0x3b8faf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b904c0() {
   double input = -0.385158;
   input += synapse0x3b90800();
   input += synapse0x3b90840();
   input += synapse0x3b90880();
   input += synapse0x3b908c0();
   input += synapse0x3b90900();
   input += synapse0x3b90940();
   input += synapse0x3b90980();
   input += synapse0x3b909c0();
   input += synapse0x3b90a00();
   input += synapse0x3b90a40();
   input += synapse0x3b90a80();
   input += synapse0x3b90ac0();
   input += synapse0x3b90b00();
   input += synapse0x3b90b40();
   input += synapse0x3b90b80();
   input += synapse0x3b90bc0();
   input += synapse0x3b90650();
   input += synapse0x3b90690();
   input += synapse0x3b90d10();
   input += synapse0x3b90d50();
   input += synapse0x3b90d90();
   input += synapse0x3b90dd0();
   input += synapse0x3b90e10();
   input += synapse0x3b90e50();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b904c0() {
   double input = input0x3b904c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b90e90() {
   double input = 0.139679;
   input += synapse0x3b911d0();
   input += synapse0x3b91210();
   input += synapse0x3b91250();
   input += synapse0x3b91290();
   input += synapse0x3b912d0();
   input += synapse0x3b91310();
   input += synapse0x3b91350();
   input += synapse0x3b91390();
   input += synapse0x3b913d0();
   input += synapse0x3b89590();
   input += synapse0x3b895d0();
   input += synapse0x3b89610();
   input += synapse0x3b89650();
   input += synapse0x3b89690();
   input += synapse0x3b896d0();
   input += synapse0x3b89710();
   input += synapse0x3b91020();
   input += synapse0x3b91060();
   input += synapse0x3b89860();
   input += synapse0x3b898a0();
   input += synapse0x3b898e0();
   input += synapse0x3b89920();
   input += synapse0x3b89960();
   input += synapse0x3b899a0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b90e90() {
   double input = input0x3b90e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b899e0() {
   double input = -1.0163;
   input += synapse0x3b89d20();
   input += synapse0x3b89d60();
   input += synapse0x3b89da0();
   input += synapse0x3b89de0();
   input += synapse0x3b89e20();
   input += synapse0x3b89e60();
   input += synapse0x3b89ea0();
   input += synapse0x3b89ee0();
   input += synapse0x3b89f20();
   input += synapse0x3b89f60();
   input += synapse0x3b89fa0();
   input += synapse0x3b89fe0();
   input += synapse0x3b8a020();
   input += synapse0x3b8a060();
   input += synapse0x3b8a0a0();
   input += synapse0x3b8a0e0();
   input += synapse0x3b89b70();
   input += synapse0x3b89bb0();
   input += synapse0x3b8a230();
   input += synapse0x3b8a270();
   input += synapse0x3b8a2b0();
   input += synapse0x3b8a2f0();
   input += synapse0x3b8a330();
   input += synapse0x3b8a370();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b899e0() {
   double input = input0x3b899e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b8a3b0() {
   double input = 2.50576;
   input += synapse0x3b8a540();
   input += synapse0x3b935d0();
   input += synapse0x3b93610();
   input += synapse0x3b93650();
   input += synapse0x3b93690();
   input += synapse0x3b936d0();
   input += synapse0x3b93710();
   input += synapse0x3b93750();
   input += synapse0x3b93790();
   input += synapse0x3b937d0();
   input += synapse0x3b93810();
   input += synapse0x3b93850();
   input += synapse0x3b93890();
   input += synapse0x3b938d0();
   input += synapse0x3b93910();
   input += synapse0x3b93950();
   input += synapse0x3b93420();
   input += synapse0x3b93460();
   input += synapse0x3b93aa0();
   input += synapse0x3b93ae0();
   input += synapse0x3b93b20();
   input += synapse0x3b93b60();
   input += synapse0x3b93ba0();
   input += synapse0x3b93be0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b8a3b0() {
   double input = input0x3b8a3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b93c20() {
   double input = -0.460367;
   input += synapse0x3b93f60();
   input += synapse0x3b93fa0();
   input += synapse0x3b93fe0();
   input += synapse0x3b94020();
   input += synapse0x3b94060();
   input += synapse0x3b940a0();
   input += synapse0x3b940e0();
   input += synapse0x3b94120();
   input += synapse0x3b94160();
   input += synapse0x3b941a0();
   input += synapse0x3b941e0();
   input += synapse0x3b94220();
   input += synapse0x3b94260();
   input += synapse0x3b942a0();
   input += synapse0x3b942e0();
   input += synapse0x3b94320();
   input += synapse0x3b93db0();
   input += synapse0x3b93df0();
   input += synapse0x3b94470();
   input += synapse0x3b944b0();
   input += synapse0x3b944f0();
   input += synapse0x3b94530();
   input += synapse0x3b94570();
   input += synapse0x3b945b0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b93c20() {
   double input = input0x3b93c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b945f0() {
   double input = -1.78903;
   input += synapse0x3b94930();
   input += synapse0x3b94970();
   input += synapse0x3b949b0();
   input += synapse0x3b949f0();
   input += synapse0x3b94a30();
   input += synapse0x3b94a70();
   input += synapse0x3b94ab0();
   input += synapse0x3b94af0();
   input += synapse0x3b94b30();
   input += synapse0x3b94b70();
   input += synapse0x3b94bb0();
   input += synapse0x3b94bf0();
   input += synapse0x3b94c30();
   input += synapse0x3b94c70();
   input += synapse0x3b94cb0();
   input += synapse0x3b94cf0();
   input += synapse0x3b94780();
   input += synapse0x3b947c0();
   input += synapse0x3b94e40();
   input += synapse0x3b94e80();
   input += synapse0x3b94ec0();
   input += synapse0x3b94f00();
   input += synapse0x3b94f40();
   input += synapse0x3b94f80();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b945f0() {
   double input = input0x3b945f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b94fc0() {
   double input = -0.550202;
   input += synapse0x3b95300();
   input += synapse0x3b95340();
   input += synapse0x3b95380();
   input += synapse0x3b953c0();
   input += synapse0x3b95400();
   input += synapse0x3b95440();
   input += synapse0x3b95480();
   input += synapse0x3b954c0();
   input += synapse0x3b95500();
   input += synapse0x3b95540();
   input += synapse0x3b95580();
   input += synapse0x3b955c0();
   input += synapse0x3b95600();
   input += synapse0x3b95640();
   input += synapse0x3b95680();
   input += synapse0x3b956c0();
   input += synapse0x3b95150();
   input += synapse0x3b95190();
   input += synapse0x3b95810();
   input += synapse0x3b95850();
   input += synapse0x3b95890();
   input += synapse0x3b958d0();
   input += synapse0x3b95910();
   input += synapse0x3b95950();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b94fc0() {
   double input = input0x3b94fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b95990() {
   double input = 6.81532;
   input += synapse0x3b95cd0();
   input += synapse0x3b95d10();
   input += synapse0x3b95d50();
   input += synapse0x3b95d90();
   input += synapse0x3b95dd0();
   input += synapse0x3b95e10();
   input += synapse0x3b95e50();
   input += synapse0x3b95e90();
   input += synapse0x3b95ed0();
   input += synapse0x3b95f10();
   input += synapse0x3b95f50();
   input += synapse0x3b95f90();
   input += synapse0x3b95fd0();
   input += synapse0x3b96010();
   input += synapse0x3b96050();
   input += synapse0x3b96090();
   input += synapse0x3b95b20();
   input += synapse0x3b95b60();
   input += synapse0x3b961e0();
   input += synapse0x3b96220();
   input += synapse0x3b96260();
   input += synapse0x3b962a0();
   input += synapse0x3b962e0();
   input += synapse0x3b96320();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b95990() {
   double input = input0x3b95990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b96360() {
   double input = -0.377019;
   input += synapse0x3b966a0();
   input += synapse0x3b966e0();
   input += synapse0x3b96720();
   input += synapse0x3b96760();
   input += synapse0x3b967a0();
   input += synapse0x3b967e0();
   input += synapse0x3b96820();
   input += synapse0x3b96860();
   input += synapse0x3b968a0();
   input += synapse0x3b968e0();
   input += synapse0x3b96920();
   input += synapse0x3b96960();
   input += synapse0x3b969a0();
   input += synapse0x3b969e0();
   input += synapse0x3b96a20();
   input += synapse0x3b96a60();
   input += synapse0x3b964f0();
   input += synapse0x3b96530();
   input += synapse0x3b96bb0();
   input += synapse0x3b96bf0();
   input += synapse0x3b96c30();
   input += synapse0x3b96c70();
   input += synapse0x3b96cb0();
   input += synapse0x3b96cf0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b96360() {
   double input = input0x3b96360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b96d30() {
   double input = 2.71858;
   input += synapse0x3b97070();
   input += synapse0x3b970b0();
   input += synapse0x3b970f0();
   input += synapse0x3b97130();
   input += synapse0x3b97170();
   input += synapse0x3b971b0();
   input += synapse0x3b971f0();
   input += synapse0x3b97230();
   input += synapse0x3b97270();
   input += synapse0x3b972b0();
   input += synapse0x3b972f0();
   input += synapse0x3b97330();
   input += synapse0x3b97370();
   input += synapse0x3b973b0();
   input += synapse0x3b973f0();
   input += synapse0x3b97430();
   input += synapse0x3b96ec0();
   input += synapse0x3b96f00();
   input += synapse0x3b97580();
   input += synapse0x3b975c0();
   input += synapse0x3b97600();
   input += synapse0x3b97640();
   input += synapse0x3b97680();
   input += synapse0x3b976c0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b96d30() {
   double input = input0x3b96d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b97700() {
   double input = 0.996456;
   input += synapse0x3b97a40();
   input += synapse0x3b97a80();
   input += synapse0x3b97ac0();
   input += synapse0x3b97b00();
   input += synapse0x3b97b40();
   input += synapse0x3b97b80();
   input += synapse0x3b97bc0();
   input += synapse0x3b97c00();
   input += synapse0x3b97c40();
   input += synapse0x3b97c80();
   input += synapse0x3b97cc0();
   input += synapse0x3b97d00();
   input += synapse0x3b97d40();
   input += synapse0x3b97d80();
   input += synapse0x3b97dc0();
   input += synapse0x3b97e00();
   input += synapse0x3b97890();
   input += synapse0x3b978d0();
   input += synapse0x3b97f50();
   input += synapse0x3b97f90();
   input += synapse0x3b97fd0();
   input += synapse0x3b98010();
   input += synapse0x3b98050();
   input += synapse0x3b98090();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b97700() {
   double input = input0x3b97700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b980d0() {
   double input = 1.12892;
   input += synapse0x3b98410();
   input += synapse0x3b8c9e0();
   input += synapse0x3b8ca20();
   input += synapse0x3b8ca60();
   input += synapse0x3b8ccb0();
   input += synapse0x3b8ccf0();
   input += synapse0x3b8cd30();
   input += synapse0x3b8cf80();
   input += synapse0x3b8cfc0();
   input += synapse0x3b8d210();
   input += synapse0x3b8d250();
   input += synapse0x3b8d290();
   input += synapse0x3b8d4e0();
   input += synapse0x3b8d520();
   input += synapse0x3b8d770();
   input += synapse0x3b8d7b0();
   input += synapse0x3b98260();
   input += synapse0x3b982a0();
   input += synapse0x3b8d900();
   input += synapse0x3b8de10();
   input += synapse0x3b8de50();
   input += synapse0x3b8de90();
   input += synapse0x3b8e0e0();
   input += synapse0x3b8e120();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b980d0() {
   double input = input0x3b980d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b8e160() {
   double input = -0.271348;
   input += synapse0x3b8d9d0();
   input += synapse0x3b8da10();
   input += synapse0x3b8da50();
   input += synapse0x3b8da90();
   input += synapse0x3b8e410();
   input += synapse0x3b9a760();
   input += synapse0x3b9a7a0();
   input += synapse0x3b9a7e0();
   input += synapse0x3b9a820();
   input += synapse0x3b9a860();
   input += synapse0x3b9a8a0();
   input += synapse0x3b9a8e0();
   input += synapse0x3b9a920();
   input += synapse0x3b9a960();
   input += synapse0x3b9a9a0();
   input += synapse0x3b9a9e0();
   input += synapse0x3b8e2f0();
   input += synapse0x3b8e330();
   input += synapse0x3b9ab30();
   input += synapse0x3b9ab70();
   input += synapse0x3b9abb0();
   input += synapse0x3b9abf0();
   input += synapse0x3b9ac30();
   input += synapse0x3b9ac70();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b8e160() {
   double input = input0x3b8e160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b9acb0() {
   double input = 1.32535;
   input += synapse0x3b9aff0();
   input += synapse0x3b9b030();
   input += synapse0x3b9b070();
   input += synapse0x3b9b0b0();
   input += synapse0x3b9b0f0();
   input += synapse0x3b9b130();
   input += synapse0x3b9b170();
   input += synapse0x3b9b1b0();
   input += synapse0x3b9b1f0();
   input += synapse0x3b9b230();
   input += synapse0x3b9b270();
   input += synapse0x3b9b2b0();
   input += synapse0x3b9b2f0();
   input += synapse0x3b9b330();
   input += synapse0x3b9b370();
   input += synapse0x3b9b3b0();
   input += synapse0x3b9ae40();
   input += synapse0x3b9ae80();
   input += synapse0x3b9b500();
   input += synapse0x3b9b540();
   input += synapse0x3b9b580();
   input += synapse0x3b9b5c0();
   input += synapse0x3b9b600();
   input += synapse0x3b9b640();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b9acb0() {
   double input = input0x3b9acb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b9b680() {
   double input = 1.05074;
   input += synapse0x3b9b9c0();
   input += synapse0x3b9ba00();
   input += synapse0x3b9ba40();
   input += synapse0x3b9ba80();
   input += synapse0x3b9bac0();
   input += synapse0x3b9bb00();
   input += synapse0x3b9bb40();
   input += synapse0x3b9bb80();
   input += synapse0x3b9bbc0();
   input += synapse0x3b9bc00();
   input += synapse0x3b9bc40();
   input += synapse0x3b9bc80();
   input += synapse0x3b9bcc0();
   input += synapse0x3b9bd00();
   input += synapse0x3b9bd40();
   input += synapse0x3b9bd80();
   input += synapse0x3b9b810();
   input += synapse0x3b9b850();
   input += synapse0x3b9bed0();
   input += synapse0x3b9bf10();
   input += synapse0x3b9bf50();
   input += synapse0x3b9bf90();
   input += synapse0x3b9bfd0();
   input += synapse0x3b9c010();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b9b680() {
   double input = input0x3b9b680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b9c050() {
   double input = -2.0656;
   input += synapse0x3b9c390();
   input += synapse0x3b9c3d0();
   input += synapse0x3b9c410();
   input += synapse0x3b9c450();
   input += synapse0x3b9c490();
   input += synapse0x3b9c4d0();
   input += synapse0x3b9c510();
   input += synapse0x3b9c550();
   input += synapse0x3b9c590();
   input += synapse0x3b9c5d0();
   input += synapse0x3b9c610();
   input += synapse0x3b9c650();
   input += synapse0x3b9c690();
   input += synapse0x3b9c6d0();
   input += synapse0x3b9c710();
   input += synapse0x3b9c750();
   input += synapse0x3b9c1e0();
   input += synapse0x3b9c220();
   input += synapse0x3b9c8a0();
   input += synapse0x3b9c8e0();
   input += synapse0x3b9c920();
   input += synapse0x3b9c960();
   input += synapse0x3b9c9a0();
   input += synapse0x3b9c9e0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b9c050() {
   double input = input0x3b9c050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b9ca20() {
   double input = -1.02171;
   input += synapse0x3b9cd60();
   input += synapse0x3b9cda0();
   input += synapse0x3b9cde0();
   input += synapse0x3b9ce20();
   input += synapse0x3b9ce60();
   input += synapse0x3b9cea0();
   input += synapse0x3b9cee0();
   input += synapse0x3b9cf20();
   input += synapse0x3b9cf60();
   input += synapse0x3b9cfa0();
   input += synapse0x3b9cfe0();
   input += synapse0x3b9d020();
   input += synapse0x3b9d060();
   input += synapse0x3b9d0a0();
   input += synapse0x3b9d0e0();
   input += synapse0x3b9d120();
   input += synapse0x3b9cbb0();
   input += synapse0x3b9cbf0();
   input += synapse0x3b9d270();
   input += synapse0x3b9d2b0();
   input += synapse0x3b9d2f0();
   input += synapse0x3b9d330();
   input += synapse0x3b9d370();
   input += synapse0x3b9d3b0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b9ca20() {
   double input = input0x3b9ca20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b9d3f0() {
   double input = -2.02747;
   input += synapse0x3b9d730();
   input += synapse0x3b9d770();
   input += synapse0x3b9d7b0();
   input += synapse0x3b9d7f0();
   input += synapse0x3b9d830();
   input += synapse0x3b9d870();
   input += synapse0x3b9d8b0();
   input += synapse0x3b9d8f0();
   input += synapse0x3b9d930();
   input += synapse0x3b9d970();
   input += synapse0x3b9d9b0();
   input += synapse0x3b9d9f0();
   input += synapse0x3b9da30();
   input += synapse0x3b9da70();
   input += synapse0x3b9dab0();
   input += synapse0x3b9daf0();
   input += synapse0x3b9d580();
   input += synapse0x3b9d5c0();
   input += synapse0x3b9dc40();
   input += synapse0x3b9dc80();
   input += synapse0x3b9dcc0();
   input += synapse0x3b9dd00();
   input += synapse0x3b9dd40();
   input += synapse0x3b9dd80();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b9d3f0() {
   double input = input0x3b9d3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b9ddc0() {
   double input = -1.60688;
   input += synapse0x3b9e100();
   input += synapse0x3b9e140();
   input += synapse0x3b9e180();
   input += synapse0x3b9e1c0();
   input += synapse0x3b9e200();
   input += synapse0x3b9e240();
   input += synapse0x3b9e280();
   input += synapse0x3b9e2c0();
   input += synapse0x3b9e300();
   input += synapse0x3b9e340();
   input += synapse0x3b9e380();
   input += synapse0x3b9e3c0();
   input += synapse0x3b9e400();
   input += synapse0x3b9e440();
   input += synapse0x3b9e480();
   input += synapse0x3b9e4c0();
   input += synapse0x3b9df50();
   input += synapse0x3b9df90();
   input += synapse0x3b9e610();
   input += synapse0x3b9e650();
   input += synapse0x3b9e690();
   input += synapse0x3b9e6d0();
   input += synapse0x3b9e710();
   input += synapse0x3b9e750();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b9ddc0() {
   double input = input0x3b9ddc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b9e790() {
   double input = 0.127341;
   input += synapse0x3b9ead0();
   input += synapse0x3b9eb10();
   input += synapse0x3b9eb50();
   input += synapse0x3b9eb90();
   input += synapse0x3b9ebd0();
   input += synapse0x3b9ec10();
   input += synapse0x3b9ec50();
   input += synapse0x3b9ec90();
   input += synapse0x3b9ecd0();
   input += synapse0x3b9ed10();
   input += synapse0x3b9ed50();
   input += synapse0x3b9ed90();
   input += synapse0x3b9edd0();
   input += synapse0x3b9ee10();
   input += synapse0x3b9ee50();
   input += synapse0x3b9ee90();
   input += synapse0x3b9e920();
   input += synapse0x3b9e960();
   input += synapse0x3b9efe0();
   input += synapse0x3b9f020();
   input += synapse0x3b9f060();
   input += synapse0x3b9f0a0();
   input += synapse0x3b9f0e0();
   input += synapse0x3b9f120();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b9e790() {
   double input = input0x3b9e790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b9f160() {
   double input = 0.496946;
   input += synapse0x3b87bd0();
   input += synapse0x3b87c10();
   input += synapse0x3b87c50();
   input += synapse0x3b87c90();
   input += synapse0x3b87cd0();
   input += synapse0x3b87d10();
   input += synapse0x3b87d50();
   input += synapse0x3b87d90();
   input += synapse0x3b9f8b0();
   input += synapse0x3b9f8f0();
   input += synapse0x3b9f930();
   input += synapse0x3b9f970();
   input += synapse0x3b9f9b0();
   input += synapse0x3b9f9f0();
   input += synapse0x3b9fa30();
   input += synapse0x3b9fa70();
   input += synapse0x3b9f2f0();
   input += synapse0x3b9f330();
   input += synapse0x3b9fbc0();
   input += synapse0x3b9fc00();
   input += synapse0x3b9fc40();
   input += synapse0x3b9fc80();
   input += synapse0x3b9fcc0();
   input += synapse0x3b9fd00();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b9f160() {
   double input = input0x3b9f160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b9fd40() {
   double input = -0.359859;
   input += synapse0x3ba0080();
   input += synapse0x3ba00c0();
   input += synapse0x3ba0100();
   input += synapse0x3ba0140();
   input += synapse0x3ba0180();
   input += synapse0x3ba01c0();
   input += synapse0x3ba0200();
   input += synapse0x3ba0240();
   input += synapse0x3ba0280();
   input += synapse0x3ba02c0();
   input += synapse0x3ba0300();
   input += synapse0x3ba0340();
   input += synapse0x3ba0380();
   input += synapse0x3ba03c0();
   input += synapse0x3ba0400();
   input += synapse0x3ba0440();
   input += synapse0x3b9fed0();
   input += synapse0x3b9ff10();
   input += synapse0x3ba0590();
   input += synapse0x3ba05d0();
   input += synapse0x3ba0610();
   input += synapse0x3ba0650();
   input += synapse0x3ba0690();
   input += synapse0x3ba06d0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b9fd40() {
   double input = input0x3b9fd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3ba0710() {
   double input = -2.08043;
   input += synapse0x3ba0a50();
   input += synapse0x3ba0a90();
   input += synapse0x3ba0ad0();
   input += synapse0x3ba0b10();
   input += synapse0x3ba0b50();
   input += synapse0x3ba0b90();
   input += synapse0x3ba0bd0();
   input += synapse0x3ba0c10();
   input += synapse0x3ba0c50();
   input += synapse0x3ba0c90();
   input += synapse0x3ba0cd0();
   input += synapse0x3ba0d10();
   input += synapse0x3ba0d50();
   input += synapse0x3ba0d90();
   input += synapse0x3ba0dd0();
   input += synapse0x3ba0e10();
   input += synapse0x3ba08a0();
   input += synapse0x3ba08e0();
   input += synapse0x3b91410();
   input += synapse0x3b91450();
   input += synapse0x3b91490();
   input += synapse0x3b914d0();
   input += synapse0x3b91510();
   input += synapse0x3b91550();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3ba0710() {
   double input = input0x3ba0710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b91590() {
   double input = 0.997633;
   input += synapse0x3b918d0();
   input += synapse0x3b91910();
   input += synapse0x3b91950();
   input += synapse0x3b91990();
   input += synapse0x3b919d0();
   input += synapse0x3b91a10();
   input += synapse0x3b91a50();
   input += synapse0x3b91a90();
   input += synapse0x3b91ad0();
   input += synapse0x3b91b10();
   input += synapse0x3b91b50();
   input += synapse0x3b91b90();
   input += synapse0x3b91bd0();
   input += synapse0x3b91c10();
   input += synapse0x3b91c50();
   input += synapse0x3b91c90();
   input += synapse0x3b91720();
   input += synapse0x3b91760();
   input += synapse0x3b91de0();
   input += synapse0x3b91e20();
   input += synapse0x3b91e60();
   input += synapse0x3b91ea0();
   input += synapse0x3b91ee0();
   input += synapse0x3b91f20();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b91590() {
   double input = input0x3b91590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b91f60() {
   double input = -2.28773;
   input += synapse0x3b922a0();
   input += synapse0x3b922e0();
   input += synapse0x3b92320();
   input += synapse0x3b92360();
   input += synapse0x3b923a0();
   input += synapse0x3b923e0();
   input += synapse0x3b92420();
   input += synapse0x3b92460();
   input += synapse0x3b924a0();
   input += synapse0x3b924e0();
   input += synapse0x3b92520();
   input += synapse0x3b92560();
   input += synapse0x3b925a0();
   input += synapse0x3b925e0();
   input += synapse0x3b92620();
   input += synapse0x3b92660();
   input += synapse0x3b920f0();
   input += synapse0x3b92130();
   input += synapse0x3b927b0();
   input += synapse0x3b927f0();
   input += synapse0x3b92830();
   input += synapse0x3b92870();
   input += synapse0x3b928b0();
   input += synapse0x3b928f0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b91f60() {
   double input = input0x3b91f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3b92930() {
   double input = -0.633971;
   input += synapse0x3b92c70();
   input += synapse0x3b92cb0();
   input += synapse0x3b92cf0();
   input += synapse0x3b92d30();
   input += synapse0x3b92d70();
   input += synapse0x3b92db0();
   input += synapse0x3b92df0();
   input += synapse0x3b92e30();
   input += synapse0x3b92e70();
   input += synapse0x3b92eb0();
   input += synapse0x3b92ef0();
   input += synapse0x3b92f30();
   input += synapse0x3b92f70();
   input += synapse0x3b92fb0();
   input += synapse0x3b92ff0();
   input += synapse0x3b93030();
   input += synapse0x3b92ac0();
   input += synapse0x3b92b00();
   input += synapse0x3b93180();
   input += synapse0x3b931c0();
   input += synapse0x3b93200();
   input += synapse0x3b93240();
   input += synapse0x3b93280();
   input += synapse0x3b932c0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3b92930() {
   double input = input0x3b92930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3ba4f70() {
   double input = 0.314516;
   input += synapse0x3ba5190();
   input += synapse0x3ba51d0();
   input += synapse0x3ba5210();
   input += synapse0x3ba5250();
   input += synapse0x3ba5290();
   input += synapse0x3ba52d0();
   input += synapse0x3ba5310();
   input += synapse0x3ba5350();
   input += synapse0x3ba5390();
   input += synapse0x3ba53d0();
   input += synapse0x3ba5410();
   input += synapse0x3ba5450();
   input += synapse0x3ba5490();
   input += synapse0x3ba54d0();
   input += synapse0x3ba5510();
   input += synapse0x3ba5550();
   input += synapse0x3b93300();
   input += synapse0x3b93340();
   input += synapse0x3ba56a0();
   input += synapse0x3ba56e0();
   input += synapse0x3ba5720();
   input += synapse0x3ba5760();
   input += synapse0x3ba57a0();
   input += synapse0x3ba57e0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3ba4f70() {
   double input = input0x3ba4f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3ba5820() {
   double input = -0.0851666;
   input += synapse0x3ba5b60();
   input += synapse0x3ba5ba0();
   input += synapse0x3ba5be0();
   input += synapse0x3ba5c20();
   input += synapse0x3ba5c60();
   input += synapse0x3ba5ca0();
   input += synapse0x3ba5ce0();
   input += synapse0x3ba5d20();
   input += synapse0x3ba5d60();
   input += synapse0x3ba5da0();
   input += synapse0x3ba5de0();
   input += synapse0x3ba5e20();
   input += synapse0x3ba5e60();
   input += synapse0x3ba5ea0();
   input += synapse0x3ba5ee0();
   input += synapse0x3ba5f20();
   input += synapse0x3ba59b0();
   input += synapse0x3ba59f0();
   input += synapse0x3ba6070();
   input += synapse0x3ba60b0();
   input += synapse0x3ba60f0();
   input += synapse0x3ba6130();
   input += synapse0x3ba6170();
   input += synapse0x3ba61b0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3ba5820() {
   double input = input0x3ba5820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3ba61f0() {
   double input = 1.55734;
   input += synapse0x3ba6530();
   input += synapse0x3ba6570();
   input += synapse0x3ba65b0();
   input += synapse0x3ba65f0();
   input += synapse0x3ba6630();
   input += synapse0x3ba6670();
   input += synapse0x3ba66b0();
   input += synapse0x3ba66f0();
   input += synapse0x3ba6730();
   input += synapse0x3ba6770();
   input += synapse0x3ba67b0();
   input += synapse0x3ba67f0();
   input += synapse0x3ba6830();
   input += synapse0x3ba6870();
   input += synapse0x3ba68b0();
   input += synapse0x3ba68f0();
   input += synapse0x3ba6380();
   input += synapse0x3ba63c0();
   input += synapse0x3ba6a40();
   input += synapse0x3ba6a80();
   input += synapse0x3ba6ac0();
   input += synapse0x3ba6b00();
   input += synapse0x3ba6b40();
   input += synapse0x3ba6b80();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3ba61f0() {
   double input = input0x3ba61f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3ba6bc0() {
   double input = -0.347144;
   input += synapse0x3ba6f00();
   input += synapse0x3ba6f40();
   input += synapse0x3ba6f80();
   input += synapse0x3ba6fc0();
   input += synapse0x3ba7000();
   input += synapse0x3ba7040();
   input += synapse0x3ba7080();
   input += synapse0x3ba70c0();
   input += synapse0x3ba7100();
   input += synapse0x3ba7140();
   input += synapse0x3ba7180();
   input += synapse0x3ba71c0();
   input += synapse0x3ba7200();
   input += synapse0x3ba7240();
   input += synapse0x3ba7280();
   input += synapse0x3ba72c0();
   input += synapse0x3ba6d50();
   input += synapse0x3ba6d90();
   input += synapse0x3ba7410();
   input += synapse0x3ba7450();
   input += synapse0x3ba7490();
   input += synapse0x3ba74d0();
   input += synapse0x3ba7510();
   input += synapse0x3ba7550();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3ba6bc0() {
   double input = input0x3ba6bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3baddc0() {
   double input = -1.39616;
   input += synapse0x39473c0();
   input += synapse0x3947400();
   input += synapse0x3b83f00();
   input += synapse0x3b83f40();
   input += synapse0x3b859d0();
   input += synapse0x3b85a10();
   input += synapse0x3b867a0();
   input += synapse0x3b867e0();
   input += synapse0x3b87170();
   input += synapse0x3b871b0();
   input += synapse0x3b87b40();
   input += synapse0x3b87b80();
   input += synapse0x3b88620();
   input += synapse0x3b88660();
   input += synapse0x3b88ff0();
   input += synapse0x3b89030();
   input += synapse0x3b860d0();
   input += synapse0x3b86110();
   input += synapse0x3b8aba0();
   input += synapse0x3b8abe0();
   input += synapse0x3b8b570();
   input += synapse0x3b8b5b0();
   input += synapse0x3b8bf40();
   input += synapse0x3b8bf80();
   input += synapse0x3b8c910();
   input += synapse0x3b8c950();
   input += synapse0x3b7f9a0();
   input += synapse0x3b7f9e0();
   input += synapse0x3b8ea00();
   input += synapse0x3b8ea40();
   input += synapse0x3b8f3d0();
   input += synapse0x3b8f410();
   input += synapse0x3b8fda0();
   input += synapse0x3b8fde0();
   input += synapse0x3b90770();
   input += synapse0x3b907b0();
   input += synapse0x3b91140();
   input += synapse0x3b91180();
   input += synapse0x3b89c90();
   input += synapse0x3b89cd0();
   input += synapse0x3b93540();
   input += synapse0x3b93580();
   input += synapse0x3b93ed0();
   input += synapse0x3b93f10();
   input += synapse0x3b948a0();
   input += synapse0x3b948e0();
   input += synapse0x3b95270();
   input += synapse0x3b952b0();
   input += synapse0x3b95c40();
   input += synapse0x3b95c80();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3baddc0() {
   double input = input0x3baddc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3bae160() {
   double input = -0.628728;
   input += synapse0x3b98380();
   input += synapse0x3b983c0();
   input += synapse0x3b8d940();
   input += synapse0x3b8d980();
   input += synapse0x3b9af60();
   input += synapse0x3b9afa0();
   input += synapse0x3b9b930();
   input += synapse0x3b9b970();
   input += synapse0x3b9c300();
   input += synapse0x3b9c340();
   input += synapse0x3b9ccd0();
   input += synapse0x3b9cd10();
   input += synapse0x3b9d6a0();
   input += synapse0x3b9d6e0();
   input += synapse0x3b9e070();
   input += synapse0x3b9e0b0();
   input += synapse0x3b9ea40();
   input += synapse0x3b9ea80();
   input += synapse0x3b9f410();
   input += synapse0x3b9f450();
   input += synapse0x3b9fff0();
   input += synapse0x3ba0030();
   input += synapse0x3ba09c0();
   input += synapse0x3ba0a00();
   input += synapse0x3b91840();
   input += synapse0x3b91880();
   input += synapse0x3b92210();
   input += synapse0x3b92250();
   input += synapse0x3b92be0();
   input += synapse0x3b92c20();
   input += synapse0x3ba5100();
   input += synapse0x3ba5140();
   input += synapse0x3ba5ad0();
   input += synapse0x3ba5b10();
   input += synapse0x3ba64a0();
   input += synapse0x3ba64e0();
   input += synapse0x3ba6e70();
   input += synapse0x3ba6eb0();
   input += synapse0x3b81e00();
   input += synapse0x3b81e40();
   input += synapse0x3b96610();
   input += synapse0x3b96650();
   input += synapse0x3ba7590();
   input += synapse0x3ba75d0();
   input += synapse0x3ba7610();
   input += synapse0x3ba7650();
   input += synapse0x3bae500();
   input += synapse0x3bae540();
   input += synapse0x3bae580();
   input += synapse0x3bae5c0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3bae160() {
   double input = input0x3bae160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3bae600() {
   double input = 0.577934;
   input += synapse0x3bae940();
   input += synapse0x3bae980();
   input += synapse0x3bae9c0();
   input += synapse0x3baea00();
   input += synapse0x3baea40();
   input += synapse0x3baea80();
   input += synapse0x3baeac0();
   input += synapse0x3baeb00();
   input += synapse0x3baeb40();
   input += synapse0x3baeb80();
   input += synapse0x3baebc0();
   input += synapse0x3baec00();
   input += synapse0x3baec40();
   input += synapse0x3baec80();
   input += synapse0x3baecc0();
   input += synapse0x3baed00();
   input += synapse0x3bae790();
   input += synapse0x3bae7d0();
   input += synapse0x3baee50();
   input += synapse0x3baee90();
   input += synapse0x3baeed0();
   input += synapse0x3baef10();
   input += synapse0x3baef50();
   input += synapse0x3baef90();
   input += synapse0x3baefd0();
   input += synapse0x3baf010();
   input += synapse0x3baf050();
   input += synapse0x3baf090();
   input += synapse0x3baf0d0();
   input += synapse0x3baf110();
   input += synapse0x3baf150();
   input += synapse0x3baf190();
   input += synapse0x3baed40();
   input += synapse0x3baed80();
   input += synapse0x3baedc0();
   input += synapse0x3baee00();
   input += synapse0x3baf3e0();
   input += synapse0x3baf420();
   input += synapse0x3baf460();
   input += synapse0x3baf4a0();
   input += synapse0x3baf4e0();
   input += synapse0x3baf520();
   input += synapse0x3baf560();
   input += synapse0x3baf5a0();
   input += synapse0x3baf5e0();
   input += synapse0x3baf620();
   input += synapse0x3baf660();
   input += synapse0x3baf6a0();
   input += synapse0x3baf6e0();
   input += synapse0x3baf720();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3bae600() {
   double input = input0x3bae600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3baf760() {
   double input = -2.18536;
   input += synapse0x3bafaa0();
   input += synapse0x3bafae0();
   input += synapse0x3bafb20();
   input += synapse0x3bafb60();
   input += synapse0x3bafba0();
   input += synapse0x3bafbe0();
   input += synapse0x3bafc20();
   input += synapse0x3bafc60();
   input += synapse0x3bafca0();
   input += synapse0x3bafce0();
   input += synapse0x3bafd20();
   input += synapse0x3bafd60();
   input += synapse0x3bafda0();
   input += synapse0x3bafde0();
   input += synapse0x3bafe20();
   input += synapse0x3bafe60();
   input += synapse0x3baf8f0();
   input += synapse0x3baf930();
   input += synapse0x3baffb0();
   input += synapse0x3bafff0();
   input += synapse0x3bb0030();
   input += synapse0x3bb0070();
   input += synapse0x3bb00b0();
   input += synapse0x3bb00f0();
   input += synapse0x3bb0130();
   input += synapse0x3bb0170();
   input += synapse0x3bb01b0();
   input += synapse0x3bb01f0();
   input += synapse0x3bb0230();
   input += synapse0x3bb0270();
   input += synapse0x3bb02b0();
   input += synapse0x3bb02f0();
   input += synapse0x3bafea0();
   input += synapse0x3bafee0();
   input += synapse0x3baff20();
   input += synapse0x3baff60();
   input += synapse0x3bb0540();
   input += synapse0x3bb0580();
   input += synapse0x3bb05c0();
   input += synapse0x3bb0600();
   input += synapse0x3bb0640();
   input += synapse0x3bb0680();
   input += synapse0x3bb06c0();
   input += synapse0x3bb0700();
   input += synapse0x3bb0740();
   input += synapse0x3bb0780();
   input += synapse0x3bb07c0();
   input += synapse0x3bb0800();
   input += synapse0x3bb0840();
   input += synapse0x3bb0880();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3baf760() {
   double input = input0x3baf760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3bb08c0() {
   double input = 1.99472;
   input += synapse0x3bb0c00();
   input += synapse0x3bb0c40();
   input += synapse0x3bb0c80();
   input += synapse0x3bb0cc0();
   input += synapse0x3bb0d00();
   input += synapse0x3bb0d40();
   input += synapse0x3bb0d80();
   input += synapse0x3bb0dc0();
   input += synapse0x3bb0e00();
   input += synapse0x3bb0e40();
   input += synapse0x3bb0e80();
   input += synapse0x3bb0ec0();
   input += synapse0x3bb0f00();
   input += synapse0x3bb0f40();
   input += synapse0x3bb0f80();
   input += synapse0x3bb0fc0();
   input += synapse0x3bb0a50();
   input += synapse0x3bb0a90();
   input += synapse0x3bb1110();
   input += synapse0x3bb1150();
   input += synapse0x3bb1190();
   input += synapse0x3bb11d0();
   input += synapse0x3bb1210();
   input += synapse0x3bb1250();
   input += synapse0x3bb1290();
   input += synapse0x3bb12d0();
   input += synapse0x3bb1310();
   input += synapse0x3bb1350();
   input += synapse0x3bb1390();
   input += synapse0x3bb13d0();
   input += synapse0x3bb1410();
   input += synapse0x3bb1450();
   input += synapse0x3bb1000();
   input += synapse0x3bb1040();
   input += synapse0x3bb1080();
   input += synapse0x3bb10c0();
   input += synapse0x3bb16a0();
   input += synapse0x3bb16e0();
   input += synapse0x3bb1720();
   input += synapse0x3bb1760();
   input += synapse0x3bb17a0();
   input += synapse0x3bb17e0();
   input += synapse0x3bb1820();
   input += synapse0x3bb1860();
   input += synapse0x3bb18a0();
   input += synapse0x3bb18e0();
   input += synapse0x3bb1920();
   input += synapse0x3bb1960();
   input += synapse0x3bb19a0();
   input += synapse0x3bb19e0();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3bb08c0() {
   double input = input0x3bb08c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sL::input0x3bb1a20() {
   double input = 3.12799;
   input += synapse0x3bb1c40();
   input += synapse0x3bb1c80();
   input += synapse0x3bb1cc0();
   input += synapse0x3bb1d00();
   input += synapse0x3bb1d40();
   return input;
}

double NNfunction_ns_chi01_sL::neuron0x3bb1a20() {
   double input = input0x3bb1a20();
   return (input * 1)+0;
}

double NNfunction_ns_chi01_sL::synapse0x3b81e90() {
   return (neuron0x3b7ca90()*0.0519429);
}

double NNfunction_ns_chi01_sL::synapse0x3b81ed0() {
   return (neuron0x3b7cd40()*-13.0084);
}

double NNfunction_ns_chi01_sL::synapse0x3b81f10() {
   return (neuron0x3b7d080()*4.34404);
}

double NNfunction_ns_chi01_sL::synapse0x3b81f50() {
   return (neuron0x3b7d3c0()*0.00949);
}

double NNfunction_ns_chi01_sL::synapse0x3b81f90() {
   return (neuron0x3b7d700()*0.00208977);
}

double NNfunction_ns_chi01_sL::synapse0x3b81fd0() {
   return (neuron0x3b7da40()*-0.0132334);
}

double NNfunction_ns_chi01_sL::synapse0x3b82010() {
   return (neuron0x3b7dd80()*0.0107496);
}

double NNfunction_ns_chi01_sL::synapse0x3b82050() {
   return (neuron0x3b7e0c0()*-0.0254991);
}

double NNfunction_ns_chi01_sL::synapse0x3b82090() {
   return (neuron0x3b7e400()*-0.00787719);
}

double NNfunction_ns_chi01_sL::synapse0x3b820d0() {
   return (neuron0x3b7e740()*0.00521588);
}

double NNfunction_ns_chi01_sL::synapse0x3b82110() {
   return (neuron0x3b7ea80()*-0.00447229);
}

double NNfunction_ns_chi01_sL::synapse0x3b82150() {
   return (neuron0x3b7edc0()*0.00896008);
}

double NNfunction_ns_chi01_sL::synapse0x3b82190() {
   return (neuron0x3b7f100()*-0.00642277);
}

double NNfunction_ns_chi01_sL::synapse0x3b821d0() {
   return (neuron0x3b7f440()*-0.0047244);
}

double NNfunction_ns_chi01_sL::synapse0x3b82210() {
   return (neuron0x3b7f780()*-0.0227334);
}

double NNfunction_ns_chi01_sL::synapse0x3b82250() {
   return (neuron0x3b7fac0()*-0.0155926);
}

double NNfunction_ns_chi01_sL::synapse0x3b81ce0() {
   return (neuron0x3b7fe00()*-0.00952871);
}

double NNfunction_ns_chi01_sL::synapse0x3b81d20() {
   return (neuron0x3b80360()*0.0193437);
}

double NNfunction_ns_chi01_sL::synapse0x3938c10() {
   return (neuron0x3b806a0()*0.0185217);
}

double NNfunction_ns_chi01_sL::synapse0x3938c50() {
   return (neuron0x3b809e0()*0.0160911);
}

double NNfunction_ns_chi01_sL::synapse0x3b82290() {
   return (neuron0x3b80d20()*-0.00311235);
}

double NNfunction_ns_chi01_sL::synapse0x3b822d0() {
   return (neuron0x3b81060()*-0.0190429);
}

double NNfunction_ns_chi01_sL::synapse0x3b82310() {
   return (neuron0x3b813a0()*-0.0101805);
}

double NNfunction_ns_chi01_sL::synapse0x3b82350() {
   return (neuron0x3b816e0()*-0.0280683);
}

double NNfunction_ns_chi01_sL::synapse0x3b826d0() {
   return (neuron0x3b7ca90()*2.37462);
}

double NNfunction_ns_chi01_sL::synapse0x3b82710() {
   return (neuron0x3b7cd40()*-1.06841);
}

double NNfunction_ns_chi01_sL::synapse0x3b82750() {
   return (neuron0x3b7d080()*0.0695221);
}

double NNfunction_ns_chi01_sL::synapse0x3b82790() {
   return (neuron0x3b7d3c0()*-0.154733);
}

double NNfunction_ns_chi01_sL::synapse0x3b827d0() {
   return (neuron0x3b7d700()*-0.873662);
}

double NNfunction_ns_chi01_sL::synapse0x3b82810() {
   return (neuron0x3b7da40()*-0.679517);
}

double NNfunction_ns_chi01_sL::synapse0x3b82850() {
   return (neuron0x3b7dd80()*0.0537542);
}

double NNfunction_ns_chi01_sL::synapse0x3b82890() {
   return (neuron0x3b7e0c0()*-0.449659);
}

double NNfunction_ns_chi01_sL::synapse0x3b828d0() {
   return (neuron0x3b7e400()*0.500954);
}

double NNfunction_ns_chi01_sL::synapse0x3938a60() {
   return (neuron0x3b7e740()*-0.241077);
}

double NNfunction_ns_chi01_sL::synapse0x3938aa0() {
   return (neuron0x3b7ea80()*-0.200132);
}

double NNfunction_ns_chi01_sL::synapse0x3938ae0() {
   return (neuron0x3b7edc0()*-0.179234);
}

double NNfunction_ns_chi01_sL::synapse0x3938b20() {
   return (neuron0x3b7f100()*-0.25934);
}

double NNfunction_ns_chi01_sL::synapse0x3b82b20() {
   return (neuron0x3b7f440()*-1.52487);
}

double NNfunction_ns_chi01_sL::synapse0x3b82b60() {
   return (neuron0x3b7f780()*0.26931);
}

double NNfunction_ns_chi01_sL::synapse0x3b82ba0() {
   return (neuron0x3b7fac0()*-0.161971);
}

double NNfunction_ns_chi01_sL::synapse0x3b82520() {
   return (neuron0x3b7fe00()*0.387384);
}

double NNfunction_ns_chi01_sL::synapse0x3b82560() {
   return (neuron0x3b80360()*1.3689);
}

double NNfunction_ns_chi01_sL::synapse0x3b82cf0() {
   return (neuron0x3b806a0()*0.138929);
}

double NNfunction_ns_chi01_sL::synapse0x3b82d30() {
   return (neuron0x3b809e0()*-0.828591);
}

double NNfunction_ns_chi01_sL::synapse0x3b82d70() {
   return (neuron0x3b80d20()*-0.313823);
}

double NNfunction_ns_chi01_sL::synapse0x3b82db0() {
   return (neuron0x3b81060()*0.370205);
}

double NNfunction_ns_chi01_sL::synapse0x3b82df0() {
   return (neuron0x3b813a0()*-0.509696);
}

double NNfunction_ns_chi01_sL::synapse0x3b82e30() {
   return (neuron0x3b816e0()*-0.707982);
}

double NNfunction_ns_chi01_sL::synapse0x3b831b0() {
   return (neuron0x3b7ca90()*0.0456759);
}

double NNfunction_ns_chi01_sL::synapse0x3b831f0() {
   return (neuron0x3b7cd40()*-0.0336492);
}

double NNfunction_ns_chi01_sL::synapse0x3b83230() {
   return (neuron0x3b7d080()*2.06244);
}

double NNfunction_ns_chi01_sL::synapse0x3b83270() {
   return (neuron0x3b7d3c0()*-0.00701207);
}

double NNfunction_ns_chi01_sL::synapse0x3b832b0() {
   return (neuron0x3b7d700()*-0.0391378);
}

double NNfunction_ns_chi01_sL::synapse0x3b832f0() {
   return (neuron0x3b7da40()*0.159976);
}

double NNfunction_ns_chi01_sL::synapse0x3b83330() {
   return (neuron0x3b7dd80()*-0.0745083);
}

double NNfunction_ns_chi01_sL::synapse0x3b83370() {
   return (neuron0x3b7e0c0()*0.0937425);
}

double NNfunction_ns_chi01_sL::synapse0x3b833b0() {
   return (neuron0x3b7e400()*-0.0405725);
}

double NNfunction_ns_chi01_sL::synapse0x3b833f0() {
   return (neuron0x3b7e740()*-0.118403);
}

double NNfunction_ns_chi01_sL::synapse0x3b83430() {
   return (neuron0x3b7ea80()*0.212329);
}

double NNfunction_ns_chi01_sL::synapse0x3b83470() {
   return (neuron0x3b7edc0()*-0.0148233);
}

double NNfunction_ns_chi01_sL::synapse0x3b834b0() {
   return (neuron0x3b7f100()*-0.233524);
}

double NNfunction_ns_chi01_sL::synapse0x3b834f0() {
   return (neuron0x3b7f440()*-0.0916525);
}

double NNfunction_ns_chi01_sL::synapse0x3b83530() {
   return (neuron0x3b7f780()*-0.0675623);
}

double NNfunction_ns_chi01_sL::synapse0x3b83570() {
   return (neuron0x3b7fac0()*0.145758);
}

double NNfunction_ns_chi01_sL::synapse0x3b83000() {
   return (neuron0x3b7fe00()*0.0355623);
}

double NNfunction_ns_chi01_sL::synapse0x3b83040() {
   return (neuron0x3b80360()*0.0400559);
}

double NNfunction_ns_chi01_sL::synapse0x3939300() {
   return (neuron0x3b806a0()*-0.125532);
}

double NNfunction_ns_chi01_sL::synapse0x3946bd0() {
   return (neuron0x3b809e0()*0.0607875);
}

double NNfunction_ns_chi01_sL::synapse0x3946c10() {
   return (neuron0x3b80d20()*0.00589715);
}

double NNfunction_ns_chi01_sL::synapse0x3b854a0() {
   return (neuron0x3b81060()*0.0626377);
}

double NNfunction_ns_chi01_sL::synapse0x3b854e0() {
   return (neuron0x3b813a0()*0.0227662);
}

double NNfunction_ns_chi01_sL::synapse0x3b7c7d0() {
   return (neuron0x3b816e0()*0.170525);
}

double NNfunction_ns_chi01_sL::synapse0x3b7c8a0() {
   return (neuron0x3b7ca90()*-0.413018);
}

double NNfunction_ns_chi01_sL::synapse0x3947450() {
   return (neuron0x3b7cd40()*-7.09075);
}

double NNfunction_ns_chi01_sL::synapse0x3b82aa0() {
   return (neuron0x3b7d080()*1.0523);
}

double NNfunction_ns_chi01_sL::synapse0x3b82ae0() {
   return (neuron0x3b7d3c0()*0.00366801);
}

double NNfunction_ns_chi01_sL::synapse0x3b836c0() {
   return (neuron0x3b7d700()*0.0709657);
}

double NNfunction_ns_chi01_sL::synapse0x3b83700() {
   return (neuron0x3b7da40()*0.028436);
}

double NNfunction_ns_chi01_sL::synapse0x3b83740() {
   return (neuron0x3b7dd80()*0.0272579);
}

double NNfunction_ns_chi01_sL::synapse0x3b83780() {
   return (neuron0x3b7e0c0()*-0.0103292);
}

double NNfunction_ns_chi01_sL::synapse0x3b837c0() {
   return (neuron0x3b7e400()*-0.0408928);
}

double NNfunction_ns_chi01_sL::synapse0x3b83800() {
   return (neuron0x3b7e740()*-0.0283166);
}

double NNfunction_ns_chi01_sL::synapse0x3b83840() {
   return (neuron0x3b7ea80()*0.156501);
}

double NNfunction_ns_chi01_sL::synapse0x3b83880() {
   return (neuron0x3b7edc0()*0.109512);
}

double NNfunction_ns_chi01_sL::synapse0x3b838c0() {
   return (neuron0x3b7f100()*0.0738133);
}

double NNfunction_ns_chi01_sL::synapse0x3b83900() {
   return (neuron0x3b7f440()*0.0077006);
}

double NNfunction_ns_chi01_sL::synapse0x3b83940() {
   return (neuron0x3b7f780()*-0.014108);
}

double NNfunction_ns_chi01_sL::synapse0x3b83980() {
   return (neuron0x3b7fac0()*-0.0205137);
}

double NNfunction_ns_chi01_sL::synapse0x3b7c810() {
   return (neuron0x3b7fe00()*0.0993828);
}

double NNfunction_ns_chi01_sL::synapse0x3b7c850() {
   return (neuron0x3b80360()*0.050232);
}

double NNfunction_ns_chi01_sL::synapse0x3b83ad0() {
   return (neuron0x3b806a0()*-0.0360156);
}

double NNfunction_ns_chi01_sL::synapse0x3b83b10() {
   return (neuron0x3b809e0()*0.0589524);
}

double NNfunction_ns_chi01_sL::synapse0x3b83b50() {
   return (neuron0x3b80d20()*0.0721599);
}

double NNfunction_ns_chi01_sL::synapse0x3b83b90() {
   return (neuron0x3b81060()*0.0496548);
}

double NNfunction_ns_chi01_sL::synapse0x3b83bd0() {
   return (neuron0x3b813a0()*-0.119909);
}

double NNfunction_ns_chi01_sL::synapse0x3b83c10() {
   return (neuron0x3b816e0()*6.62262);
}

double NNfunction_ns_chi01_sL::synapse0x3b83f90() {
   return (neuron0x3b7ca90()*0.0223958);
}

double NNfunction_ns_chi01_sL::synapse0x3b83fd0() {
   return (neuron0x3b7cd40()*0.0182564);
}

double NNfunction_ns_chi01_sL::synapse0x3b84010() {
   return (neuron0x3b7d080()*0.0732787);
}

double NNfunction_ns_chi01_sL::synapse0x3b84050() {
   return (neuron0x3b7d3c0()*-0.021089);
}

double NNfunction_ns_chi01_sL::synapse0x3b84090() {
   return (neuron0x3b7d700()*0.0156796);
}

double NNfunction_ns_chi01_sL::synapse0x3b840d0() {
   return (neuron0x3b7da40()*-0.0182139);
}

double NNfunction_ns_chi01_sL::synapse0x3b84110() {
   return (neuron0x3b7dd80()*-0.00384937);
}

double NNfunction_ns_chi01_sL::synapse0x3b84150() {
   return (neuron0x3b7e0c0()*-0.00275331);
}

double NNfunction_ns_chi01_sL::synapse0x3b84190() {
   return (neuron0x3b7e400()*0.00594999);
}

double NNfunction_ns_chi01_sL::synapse0x3b841d0() {
   return (neuron0x3b7e740()*-0.00347789);
}

double NNfunction_ns_chi01_sL::synapse0x3b84210() {
   return (neuron0x3b7ea80()*0.0185198);
}

double NNfunction_ns_chi01_sL::synapse0x3b84250() {
   return (neuron0x3b7edc0()*0.0158912);
}

double NNfunction_ns_chi01_sL::synapse0x3b84290() {
   return (neuron0x3b7f100()*-0.133149);
}

double NNfunction_ns_chi01_sL::synapse0x3b842d0() {
   return (neuron0x3b7f440()*-0.00585853);
}

double NNfunction_ns_chi01_sL::synapse0x3b84310() {
   return (neuron0x3b7f780()*0.00181968);
}

double NNfunction_ns_chi01_sL::synapse0x3b84350() {
   return (neuron0x3b7fac0()*0.0238587);
}

double NNfunction_ns_chi01_sL::synapse0x3b844a0() {
   return (neuron0x3b7fe00()*-0.0125051);
}

double NNfunction_ns_chi01_sL::synapse0x3b83de0() {
   return (neuron0x3b80360()*-0.0171875);
}

double NNfunction_ns_chi01_sL::synapse0x3b83e20() {
   return (neuron0x3b806a0()*0.00841183);
}

double NNfunction_ns_chi01_sL::synapse0x3b855e0() {
   return (neuron0x3b809e0()*-0.0231688);
}

double NNfunction_ns_chi01_sL::synapse0x3b85620() {
   return (neuron0x3b80d20()*-0.00128716);
}

double NNfunction_ns_chi01_sL::synapse0x3b85660() {
   return (neuron0x3b81060()*0.0136223);
}

double NNfunction_ns_chi01_sL::synapse0x3b856a0() {
   return (neuron0x3b813a0()*0.00281474);
}

double NNfunction_ns_chi01_sL::synapse0x3b856e0() {
   return (neuron0x3b816e0()*-22.1414);
}

double NNfunction_ns_chi01_sL::synapse0x3b85a60() {
   return (neuron0x3b7ca90()*-0.76791);
}

double NNfunction_ns_chi01_sL::synapse0x3b85aa0() {
   return (neuron0x3b7cd40()*0.237179);
}

double NNfunction_ns_chi01_sL::synapse0x3b85ae0() {
   return (neuron0x3b7d080()*-0.150176);
}

double NNfunction_ns_chi01_sL::synapse0x3b85b20() {
   return (neuron0x3b7d3c0()*0.308137);
}

double NNfunction_ns_chi01_sL::synapse0x3b85b60() {
   return (neuron0x3b7d700()*-0.224302);
}

double NNfunction_ns_chi01_sL::synapse0x3b85ba0() {
   return (neuron0x3b7da40()*-0.517565);
}

double NNfunction_ns_chi01_sL::synapse0x3b85be0() {
   return (neuron0x3b7dd80()*-0.304751);
}

double NNfunction_ns_chi01_sL::synapse0x3b85c20() {
   return (neuron0x3b7e0c0()*1.2216);
}

double NNfunction_ns_chi01_sL::synapse0x3b85c60() {
   return (neuron0x3b7e400()*1.26656);
}

double NNfunction_ns_chi01_sL::synapse0x3946f20() {
   return (neuron0x3b7e740()*-0.801341);
}

double NNfunction_ns_chi01_sL::synapse0x3946f60() {
   return (neuron0x3b7ea80()*-1.10736);
}

double NNfunction_ns_chi01_sL::synapse0x3946fa0() {
   return (neuron0x3b7edc0()*0.301222);
}

double NNfunction_ns_chi01_sL::synapse0x3946fe0() {
   return (neuron0x3b7f100()*0.684784);
}

double NNfunction_ns_chi01_sL::synapse0x3947020() {
   return (neuron0x3b7f440()*-0.267972);
}

double NNfunction_ns_chi01_sL::synapse0x3947060() {
   return (neuron0x3b7f780()*-0.404569);
}

double NNfunction_ns_chi01_sL::synapse0x39470a0() {
   return (neuron0x3b7fac0()*1.51689);
}

double NNfunction_ns_chi01_sL::synapse0x3b858b0() {
   return (neuron0x3b7fe00()*-1.32635);
}

double NNfunction_ns_chi01_sL::synapse0x3b858f0() {
   return (neuron0x3b80360()*0.85429);
}

double NNfunction_ns_chi01_sL::synapse0x39471f0() {
   return (neuron0x3b806a0()*-0.937146);
}

double NNfunction_ns_chi01_sL::synapse0x3947230() {
   return (neuron0x3b809e0()*-0.743869);
}

double NNfunction_ns_chi01_sL::synapse0x3947270() {
   return (neuron0x3b80d20()*-0.173499);
}

double NNfunction_ns_chi01_sL::synapse0x39472b0() {
   return (neuron0x3b81060()*1.3881);
}

double NNfunction_ns_chi01_sL::synapse0x39472f0() {
   return (neuron0x3b813a0()*0.319177);
}

double NNfunction_ns_chi01_sL::synapse0x3b864b0() {
   return (neuron0x3b816e0()*-0.352271);
}

double NNfunction_ns_chi01_sL::synapse0x3b86830() {
   return (neuron0x3b7ca90()*-0.242704);
}

double NNfunction_ns_chi01_sL::synapse0x3b86870() {
   return (neuron0x3b7cd40()*0.0597136);
}

double NNfunction_ns_chi01_sL::synapse0x3b868b0() {
   return (neuron0x3b7d080()*-0.783329);
}

double NNfunction_ns_chi01_sL::synapse0x3b868f0() {
   return (neuron0x3b7d3c0()*-0.326652);
}

double NNfunction_ns_chi01_sL::synapse0x3b86930() {
   return (neuron0x3b7d700()*-0.910056);
}

double NNfunction_ns_chi01_sL::synapse0x3b86970() {
   return (neuron0x3b7da40()*-0.265765);
}

double NNfunction_ns_chi01_sL::synapse0x3b869b0() {
   return (neuron0x3b7dd80()*-0.229628);
}

double NNfunction_ns_chi01_sL::synapse0x3b869f0() {
   return (neuron0x3b7e0c0()*-0.242218);
}

double NNfunction_ns_chi01_sL::synapse0x3b86a30() {
   return (neuron0x3b7e400()*-0.696805);
}

double NNfunction_ns_chi01_sL::synapse0x3b86a70() {
   return (neuron0x3b7e740()*-0.137371);
}

double NNfunction_ns_chi01_sL::synapse0x3b86ab0() {
   return (neuron0x3b7ea80()*0.332274);
}

double NNfunction_ns_chi01_sL::synapse0x3b86af0() {
   return (neuron0x3b7edc0()*-0.313593);
}

double NNfunction_ns_chi01_sL::synapse0x3b86b30() {
   return (neuron0x3b7f100()*0.553988);
}

double NNfunction_ns_chi01_sL::synapse0x3b86b70() {
   return (neuron0x3b7f440()*0.532003);
}

double NNfunction_ns_chi01_sL::synapse0x3b86bb0() {
   return (neuron0x3b7f780()*-0.85983);
}

double NNfunction_ns_chi01_sL::synapse0x3b86bf0() {
   return (neuron0x3b7fac0()*-0.514564);
}

double NNfunction_ns_chi01_sL::synapse0x3b86680() {
   return (neuron0x3b7fe00()*-0.105134);
}

double NNfunction_ns_chi01_sL::synapse0x3b866c0() {
   return (neuron0x3b80360()*-0.678762);
}

double NNfunction_ns_chi01_sL::synapse0x3b86d40() {
   return (neuron0x3b806a0()*-0.00314096);
}

double NNfunction_ns_chi01_sL::synapse0x3b86d80() {
   return (neuron0x3b809e0()*-0.153227);
}

double NNfunction_ns_chi01_sL::synapse0x3b86dc0() {
   return (neuron0x3b80d20()*-0.986467);
}

double NNfunction_ns_chi01_sL::synapse0x3b86e00() {
   return (neuron0x3b81060()*0.133672);
}

double NNfunction_ns_chi01_sL::synapse0x3b86e40() {
   return (neuron0x3b813a0()*0.59719);
}

double NNfunction_ns_chi01_sL::synapse0x3b86e80() {
   return (neuron0x3b816e0()*0.879551);
}

double NNfunction_ns_chi01_sL::synapse0x3b87200() {
   return (neuron0x3b7ca90()*-0.00134509);
}

double NNfunction_ns_chi01_sL::synapse0x3b87240() {
   return (neuron0x3b7cd40()*0.0170848);
}

double NNfunction_ns_chi01_sL::synapse0x3b87280() {
   return (neuron0x3b7d080()*-0.0809568);
}

double NNfunction_ns_chi01_sL::synapse0x3b872c0() {
   return (neuron0x3b7d3c0()*0.145883);
}

double NNfunction_ns_chi01_sL::synapse0x3b87300() {
   return (neuron0x3b7d700()*0.0141883);
}

double NNfunction_ns_chi01_sL::synapse0x3b87340() {
   return (neuron0x3b7da40()*-0.00836092);
}

double NNfunction_ns_chi01_sL::synapse0x3b87380() {
   return (neuron0x3b7dd80()*0.00763722);
}

double NNfunction_ns_chi01_sL::synapse0x3b873c0() {
   return (neuron0x3b7e0c0()*0.00550676);
}

double NNfunction_ns_chi01_sL::synapse0x3b87400() {
   return (neuron0x3b7e400()*0.0096774);
}

double NNfunction_ns_chi01_sL::synapse0x3b87440() {
   return (neuron0x3b7e740()*0.0179844);
}

double NNfunction_ns_chi01_sL::synapse0x3b87480() {
   return (neuron0x3b7ea80()*0.0140265);
}

double NNfunction_ns_chi01_sL::synapse0x3b874c0() {
   return (neuron0x3b7edc0()*-0.0135459);
}

double NNfunction_ns_chi01_sL::synapse0x3b87500() {
   return (neuron0x3b7f100()*-0.915014);
}

double NNfunction_ns_chi01_sL::synapse0x3b87540() {
   return (neuron0x3b7f440()*-0.0113733);
}

double NNfunction_ns_chi01_sL::synapse0x3b87580() {
   return (neuron0x3b7f780()*-0.0175824);
}

double NNfunction_ns_chi01_sL::synapse0x3b875c0() {
   return (neuron0x3b7fac0()*-0.00153825);
}

double NNfunction_ns_chi01_sL::synapse0x3b87050() {
   return (neuron0x3b7fe00()*0.0148862);
}

double NNfunction_ns_chi01_sL::synapse0x3b87090() {
   return (neuron0x3b80360()*-0.0116091);
}

double NNfunction_ns_chi01_sL::synapse0x3b87710() {
   return (neuron0x3b806a0()*-0.0111262);
}

double NNfunction_ns_chi01_sL::synapse0x3b87750() {
   return (neuron0x3b809e0()*-0.0171483);
}

double NNfunction_ns_chi01_sL::synapse0x3b87790() {
   return (neuron0x3b80d20()*0.0149352);
}

double NNfunction_ns_chi01_sL::synapse0x3b877d0() {
   return (neuron0x3b81060()*0.00858094);
}

double NNfunction_ns_chi01_sL::synapse0x3b87810() {
   return (neuron0x3b813a0()*0.0101469);
}

double NNfunction_ns_chi01_sL::synapse0x3b87850() {
   return (neuron0x3b816e0()*-0.010278);
}

double NNfunction_ns_chi01_sL::synapse0x3b80250() {
   return (neuron0x3b7ca90()*-0.0549363);
}

double NNfunction_ns_chi01_sL::synapse0x3b80290() {
   return (neuron0x3b7cd40()*-0.0298782);
}

double NNfunction_ns_chi01_sL::synapse0x3b802d0() {
   return (neuron0x3b7d080()*-0.0271526);
}

double NNfunction_ns_chi01_sL::synapse0x3b80310() {
   return (neuron0x3b7d3c0()*0.0181947);
}

double NNfunction_ns_chi01_sL::synapse0x3b87de0() {
   return (neuron0x3b7d700()*-0.0100207);
}

double NNfunction_ns_chi01_sL::synapse0x3b87e20() {
   return (neuron0x3b7da40()*0.0171528);
}

double NNfunction_ns_chi01_sL::synapse0x3b87e60() {
   return (neuron0x3b7dd80()*0.00623204);
}

double NNfunction_ns_chi01_sL::synapse0x3b87ea0() {
   return (neuron0x3b7e0c0()*-0.0105555);
}

double NNfunction_ns_chi01_sL::synapse0x3b87ee0() {
   return (neuron0x3b7e400()*-0.0115939);
}

double NNfunction_ns_chi01_sL::synapse0x3b87f20() {
   return (neuron0x3b7e740()*0.0032714);
}

double NNfunction_ns_chi01_sL::synapse0x3b87f60() {
   return (neuron0x3b7ea80()*-0.00925973);
}

double NNfunction_ns_chi01_sL::synapse0x3b87fa0() {
   return (neuron0x3b7edc0()*-0.00164202);
}

double NNfunction_ns_chi01_sL::synapse0x3b87fe0() {
   return (neuron0x3b7f100()*0.076438);
}

double NNfunction_ns_chi01_sL::synapse0x3b88020() {
   return (neuron0x3b7f440()*0.0111343);
}

double NNfunction_ns_chi01_sL::synapse0x3b88060() {
   return (neuron0x3b7f780()*-0.00503462);
}

double NNfunction_ns_chi01_sL::synapse0x3b880a0() {
   return (neuron0x3b7fac0()*-0.0313972);
}

double NNfunction_ns_chi01_sL::synapse0x3b87a20() {
   return (neuron0x3b7fe00()*0.00024853);
}

double NNfunction_ns_chi01_sL::synapse0x3b87a60() {
   return (neuron0x3b80360()*0.0260183);
}

double NNfunction_ns_chi01_sL::synapse0x3b881f0() {
   return (neuron0x3b806a0()*6.74662e-06);
}

double NNfunction_ns_chi01_sL::synapse0x3b88230() {
   return (neuron0x3b809e0()*0.0180683);
}

double NNfunction_ns_chi01_sL::synapse0x3b88270() {
   return (neuron0x3b80d20()*-0.00383534);
}

double NNfunction_ns_chi01_sL::synapse0x3b882b0() {
   return (neuron0x3b81060()*-0.00412412);
}

double NNfunction_ns_chi01_sL::synapse0x3b882f0() {
   return (neuron0x3b813a0()*-0.00861371);
}

double NNfunction_ns_chi01_sL::synapse0x3b88330() {
   return (neuron0x3b816e0()*29.9573);
}

double NNfunction_ns_chi01_sL::synapse0x3b886b0() {
   return (neuron0x3b7ca90()*0.000557773);
}

double NNfunction_ns_chi01_sL::synapse0x3b886f0() {
   return (neuron0x3b7cd40()*-0.00506331);
}

double NNfunction_ns_chi01_sL::synapse0x3b88730() {
   return (neuron0x3b7d080()*0.0038489);
}

double NNfunction_ns_chi01_sL::synapse0x3b88770() {
   return (neuron0x3b7d3c0()*-2.95248);
}

double NNfunction_ns_chi01_sL::synapse0x3b887b0() {
   return (neuron0x3b7d700()*-0.00761359);
}

double NNfunction_ns_chi01_sL::synapse0x3b887f0() {
   return (neuron0x3b7da40()*-0.0108797);
}

double NNfunction_ns_chi01_sL::synapse0x3b88830() {
   return (neuron0x3b7dd80()*-0.0298634);
}

double NNfunction_ns_chi01_sL::synapse0x3b88870() {
   return (neuron0x3b7e0c0()*0.00227474);
}

double NNfunction_ns_chi01_sL::synapse0x3b888b0() {
   return (neuron0x3b7e400()*-0.00116344);
}

double NNfunction_ns_chi01_sL::synapse0x3b888f0() {
   return (neuron0x3b7e740()*0.0112261);
}

double NNfunction_ns_chi01_sL::synapse0x3b88930() {
   return (neuron0x3b7ea80()*0.0108542);
}

double NNfunction_ns_chi01_sL::synapse0x3b88970() {
   return (neuron0x3b7edc0()*-0.00670443);
}

double NNfunction_ns_chi01_sL::synapse0x3b889b0() {
   return (neuron0x3b7f100()*0.229169);
}

double NNfunction_ns_chi01_sL::synapse0x3b889f0() {
   return (neuron0x3b7f440()*0.00913542);
}

double NNfunction_ns_chi01_sL::synapse0x3b88a30() {
   return (neuron0x3b7f780()*-0.016313);
}

double NNfunction_ns_chi01_sL::synapse0x3b88a70() {
   return (neuron0x3b7fac0()*-0.00288063);
}

double NNfunction_ns_chi01_sL::synapse0x3b88500() {
   return (neuron0x3b7fe00()*0.00195604);
}

double NNfunction_ns_chi01_sL::synapse0x3b88540() {
   return (neuron0x3b80360()*-0.0129757);
}

double NNfunction_ns_chi01_sL::synapse0x3b88bc0() {
   return (neuron0x3b806a0()*-0.00829907);
}

double NNfunction_ns_chi01_sL::synapse0x3b88c00() {
   return (neuron0x3b809e0()*-0.017013);
}

double NNfunction_ns_chi01_sL::synapse0x3b88c40() {
   return (neuron0x3b80d20()*0.00474741);
}

double NNfunction_ns_chi01_sL::synapse0x3b88c80() {
   return (neuron0x3b81060()*0.0167548);
}

double NNfunction_ns_chi01_sL::synapse0x3b88cc0() {
   return (neuron0x3b813a0()*0.00328373);
}

double NNfunction_ns_chi01_sL::synapse0x3b88d00() {
   return (neuron0x3b816e0()*-0.000935565);
}

double NNfunction_ns_chi01_sL::synapse0x3b89080() {
   return (neuron0x3b7ca90()*1.02007);
}

double NNfunction_ns_chi01_sL::synapse0x3b890c0() {
   return (neuron0x3b7cd40()*0.911839);
}

double NNfunction_ns_chi01_sL::synapse0x3b89100() {
   return (neuron0x3b7d080()*-0.0293401);
}

double NNfunction_ns_chi01_sL::synapse0x3b89140() {
   return (neuron0x3b7d3c0()*-0.134821);
}

double NNfunction_ns_chi01_sL::synapse0x3b89180() {
   return (neuron0x3b7d700()*-0.475389);
}

double NNfunction_ns_chi01_sL::synapse0x3b891c0() {
   return (neuron0x3b7da40()*0.368932);
}

double NNfunction_ns_chi01_sL::synapse0x3b89200() {
   return (neuron0x3b7dd80()*-0.587699);
}

double NNfunction_ns_chi01_sL::synapse0x3b89240() {
   return (neuron0x3b7e0c0()*0.551878);
}

double NNfunction_ns_chi01_sL::synapse0x3b89280() {
   return (neuron0x3b7e400()*0.388896);
}

double NNfunction_ns_chi01_sL::synapse0x3b892c0() {
   return (neuron0x3b7e740()*-1.41149);
}

double NNfunction_ns_chi01_sL::synapse0x3b89300() {
   return (neuron0x3b7ea80()*0.124241);
}

double NNfunction_ns_chi01_sL::synapse0x3b89340() {
   return (neuron0x3b7edc0()*0.230839);
}

double NNfunction_ns_chi01_sL::synapse0x3b89380() {
   return (neuron0x3b7f100()*-0.0662962);
}

double NNfunction_ns_chi01_sL::synapse0x3b893c0() {
   return (neuron0x3b7f440()*1.60564);
}

double NNfunction_ns_chi01_sL::synapse0x3b89400() {
   return (neuron0x3b7f780()*0.0832658);
}

double NNfunction_ns_chi01_sL::synapse0x3b89440() {
   return (neuron0x3b7fac0()*0.35373);
}

double NNfunction_ns_chi01_sL::synapse0x3b88ed0() {
   return (neuron0x3b7fe00()*1.09026);
}

double NNfunction_ns_chi01_sL::synapse0x3b88f10() {
   return (neuron0x3b80360()*-0.344466);
}

double NNfunction_ns_chi01_sL::synapse0x3b85ca0() {
   return (neuron0x3b806a0()*0.200981);
}

double NNfunction_ns_chi01_sL::synapse0x3b85ce0() {
   return (neuron0x3b809e0()*-0.785826);
}

double NNfunction_ns_chi01_sL::synapse0x3b85d20() {
   return (neuron0x3b80d20()*-0.368352);
}

double NNfunction_ns_chi01_sL::synapse0x3b85d60() {
   return (neuron0x3b81060()*-0.0372075);
}

double NNfunction_ns_chi01_sL::synapse0x3b85da0() {
   return (neuron0x3b813a0()*0.517079);
}

double NNfunction_ns_chi01_sL::synapse0x3b85de0() {
   return (neuron0x3b816e0()*-1.54363);
}

double NNfunction_ns_chi01_sL::synapse0x3b86160() {
   return (neuron0x3b7ca90()*0.0691896);
}

double NNfunction_ns_chi01_sL::synapse0x3b861a0() {
   return (neuron0x3b7cd40()*0.0881405);
}

double NNfunction_ns_chi01_sL::synapse0x3b861e0() {
   return (neuron0x3b7d080()*-0.970997);
}

double NNfunction_ns_chi01_sL::synapse0x3b86220() {
   return (neuron0x3b7d3c0()*-0.055513);
}

double NNfunction_ns_chi01_sL::synapse0x3b86260() {
   return (neuron0x3b7d700()*-0.042057);
}

double NNfunction_ns_chi01_sL::synapse0x3b862a0() {
   return (neuron0x3b7da40()*0.0181762);
}

double NNfunction_ns_chi01_sL::synapse0x3b862e0() {
   return (neuron0x3b7dd80()*0.00514814);
}

double NNfunction_ns_chi01_sL::synapse0x3b86320() {
   return (neuron0x3b7e0c0()*-0.0198558);
}

double NNfunction_ns_chi01_sL::synapse0x3b86360() {
   return (neuron0x3b7e400()*-0.002372);
}

double NNfunction_ns_chi01_sL::synapse0x3b863a0() {
   return (neuron0x3b7e740()*0.049698);
}

double NNfunction_ns_chi01_sL::synapse0x3b863e0() {
   return (neuron0x3b7ea80()*0.0135562);
}

double NNfunction_ns_chi01_sL::synapse0x3b86420() {
   return (neuron0x3b7edc0()*0.00700032);
}

double NNfunction_ns_chi01_sL::synapse0x3b86460() {
   return (neuron0x3b7f100()*0.0217312);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a5a0() {
   return (neuron0x3b7f440()*-0.0337919);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a5e0() {
   return (neuron0x3b7f780()*-0.032894);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a620() {
   return (neuron0x3b7fac0()*-0.036548);
}

double NNfunction_ns_chi01_sL::synapse0x3b85fb0() {
   return (neuron0x3b7fe00()*-0.0133548);
}

double NNfunction_ns_chi01_sL::synapse0x3b85ff0() {
   return (neuron0x3b80360()*0.00883256);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a770() {
   return (neuron0x3b806a0()*0.017437);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a7b0() {
   return (neuron0x3b809e0()*-0.0294106);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a7f0() {
   return (neuron0x3b80d20()*-0.0405429);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a830() {
   return (neuron0x3b81060()*0.0453483);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a870() {
   return (neuron0x3b813a0()*0.032779);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a8b0() {
   return (neuron0x3b816e0()*4.29316);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ac30() {
   return (neuron0x3b7ca90()*0.0334305);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ac70() {
   return (neuron0x3b7cd40()*1.54177);
}

double NNfunction_ns_chi01_sL::synapse0x3b8acb0() {
   return (neuron0x3b7d080()*1.55709);
}

double NNfunction_ns_chi01_sL::synapse0x3b8acf0() {
   return (neuron0x3b7d3c0()*0.057875);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ad30() {
   return (neuron0x3b7d700()*-0.221073);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ad70() {
   return (neuron0x3b7da40()*-0.0718504);
}

double NNfunction_ns_chi01_sL::synapse0x3b8adb0() {
   return (neuron0x3b7dd80()*0.159222);
}

double NNfunction_ns_chi01_sL::synapse0x3b8adf0() {
   return (neuron0x3b7e0c0()*0.0958684);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ae30() {
   return (neuron0x3b7e400()*0.153741);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ae70() {
   return (neuron0x3b7e740()*0.115751);
}

double NNfunction_ns_chi01_sL::synapse0x3b8aeb0() {
   return (neuron0x3b7ea80()*-0.0318195);
}

double NNfunction_ns_chi01_sL::synapse0x3b8aef0() {
   return (neuron0x3b7edc0()*-0.104606);
}

double NNfunction_ns_chi01_sL::synapse0x3b8af30() {
   return (neuron0x3b7f100()*-0.957418);
}

double NNfunction_ns_chi01_sL::synapse0x3b8af70() {
   return (neuron0x3b7f440()*0.059894);
}

double NNfunction_ns_chi01_sL::synapse0x3b8afb0() {
   return (neuron0x3b7f780()*-0.13303);
}

double NNfunction_ns_chi01_sL::synapse0x3b8aff0() {
   return (neuron0x3b7fac0()*0.0511553);
}

double NNfunction_ns_chi01_sL::synapse0x3b8aa80() {
   return (neuron0x3b7fe00()*-0.104347);
}

double NNfunction_ns_chi01_sL::synapse0x3b8aac0() {
   return (neuron0x3b80360()*0.0555827);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b140() {
   return (neuron0x3b806a0()*-0.0482258);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b180() {
   return (neuron0x3b809e0()*0.162292);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b1c0() {
   return (neuron0x3b80d20()*0.0651859);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b200() {
   return (neuron0x3b81060()*0.0686128);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b240() {
   return (neuron0x3b813a0()*-0.142359);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b280() {
   return (neuron0x3b816e0()*0.205998);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b600() {
   return (neuron0x3b7ca90()*0.751896);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b640() {
   return (neuron0x3b7cd40()*0.530478);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b680() {
   return (neuron0x3b7d080()*-0.0945457);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b6c0() {
   return (neuron0x3b7d3c0()*-1.68325);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b700() {
   return (neuron0x3b7d700()*-0.294814);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b740() {
   return (neuron0x3b7da40()*0.279142);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b780() {
   return (neuron0x3b7dd80()*1.14958);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b7c0() {
   return (neuron0x3b7e0c0()*0.754926);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b800() {
   return (neuron0x3b7e400()*0.136306);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b840() {
   return (neuron0x3b7e740()*-0.765191);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b880() {
   return (neuron0x3b7ea80()*0.817117);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b8c0() {
   return (neuron0x3b7edc0()*-0.475923);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b900() {
   return (neuron0x3b7f100()*-0.136244);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b940() {
   return (neuron0x3b7f440()*-0.470764);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b980() {
   return (neuron0x3b7f780()*0.0690455);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b9c0() {
   return (neuron0x3b7fac0()*-0.941525);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b450() {
   return (neuron0x3b7fe00()*0.908263);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b490() {
   return (neuron0x3b80360()*0.268775);
}

double NNfunction_ns_chi01_sL::synapse0x3b8bb10() {
   return (neuron0x3b806a0()*-0.896242);
}

double NNfunction_ns_chi01_sL::synapse0x3b8bb50() {
   return (neuron0x3b809e0()*-0.607668);
}

double NNfunction_ns_chi01_sL::synapse0x3b8bb90() {
   return (neuron0x3b80d20()*-0.2331);
}

double NNfunction_ns_chi01_sL::synapse0x3b8bbd0() {
   return (neuron0x3b81060()*-0.271228);
}

double NNfunction_ns_chi01_sL::synapse0x3b8bc10() {
   return (neuron0x3b813a0()*0.681804);
}

double NNfunction_ns_chi01_sL::synapse0x3b8bc50() {
   return (neuron0x3b816e0()*0.0671592);
}

double NNfunction_ns_chi01_sL::synapse0x3b8bfd0() {
   return (neuron0x3b7ca90()*0.0850079);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c010() {
   return (neuron0x3b7cd40()*0.786304);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c050() {
   return (neuron0x3b7d080()*0.0408893);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c090() {
   return (neuron0x3b7d3c0()*1.10879);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c0d0() {
   return (neuron0x3b7d700()*-0.184083);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c110() {
   return (neuron0x3b7da40()*2.1115);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c150() {
   return (neuron0x3b7dd80()*-0.215018);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c190() {
   return (neuron0x3b7e0c0()*0.283422);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c1d0() {
   return (neuron0x3b7e400()*-0.508463);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c210() {
   return (neuron0x3b7e740()*0.605314);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c250() {
   return (neuron0x3b7ea80()*-0.75912);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c290() {
   return (neuron0x3b7edc0()*0.127848);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c2d0() {
   return (neuron0x3b7f100()*0.106264);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c310() {
   return (neuron0x3b7f440()*-0.365834);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c350() {
   return (neuron0x3b7f780()*0.685582);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c390() {
   return (neuron0x3b7fac0()*-0.256856);
}

double NNfunction_ns_chi01_sL::synapse0x3b8be20() {
   return (neuron0x3b7fe00()*-0.306469);
}

double NNfunction_ns_chi01_sL::synapse0x3b8be60() {
   return (neuron0x3b80360()*0.187763);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c4e0() {
   return (neuron0x3b806a0()*-0.117476);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c520() {
   return (neuron0x3b809e0()*0.792745);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c560() {
   return (neuron0x3b80d20()*1.25533);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c5a0() {
   return (neuron0x3b81060()*0.336026);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c5e0() {
   return (neuron0x3b813a0()*-0.41696);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c620() {
   return (neuron0x3b816e0()*0.160605);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c9a0() {
   return (neuron0x3b7ca90()*0.034682);
}

double NNfunction_ns_chi01_sL::synapse0x3b7cc20() {
   return (neuron0x3b7cd40()*0.032532);
}

double NNfunction_ns_chi01_sL::synapse0x3b7cc60() {
   return (neuron0x3b7d080()*0.0777349);
}

double NNfunction_ns_chi01_sL::synapse0x3b7cf60() {
   return (neuron0x3b7d3c0()*-0.0102804);
}

double NNfunction_ns_chi01_sL::synapse0x3b7cfa0() {
   return (neuron0x3b7d700()*0.0370989);
}

double NNfunction_ns_chi01_sL::synapse0x3b7d2a0() {
   return (neuron0x3b7da40()*-0.00478791);
}

double NNfunction_ns_chi01_sL::synapse0x3b7d2e0() {
   return (neuron0x3b7dd80()*0.00474735);
}

double NNfunction_ns_chi01_sL::synapse0x3b7d5e0() {
   return (neuron0x3b7e0c0()*0.0258444);
}

double NNfunction_ns_chi01_sL::synapse0x3b7d620() {
   return (neuron0x3b7e400()*0.0195304);
}

double NNfunction_ns_chi01_sL::synapse0x3b7d920() {
   return (neuron0x3b7e740()*0.0219982);
}

double NNfunction_ns_chi01_sL::synapse0x3b7d960() {
   return (neuron0x3b7ea80()*-0.00853855);
}

double NNfunction_ns_chi01_sL::synapse0x3b7dc60() {
   return (neuron0x3b7edc0()*-0.00943185);
}

double NNfunction_ns_chi01_sL::synapse0x3b7dca0() {
   return (neuron0x3b7f100()*-1.94877);
}

double NNfunction_ns_chi01_sL::synapse0x3b7dfa0() {
   return (neuron0x3b7f440()*-0.0348322);
}

double NNfunction_ns_chi01_sL::synapse0x3b7dfe0() {
   return (neuron0x3b7f780()*0.00510286);
}

double NNfunction_ns_chi01_sL::synapse0x3b7e2e0() {
   return (neuron0x3b7fac0()*-0.0179716);
}

double NNfunction_ns_chi01_sL::synapse0x3b7e320() {
   return (neuron0x3b7fe00()*-0.00991629);
}

double NNfunction_ns_chi01_sL::synapse0x3b7e620() {
   return (neuron0x3b80360()*-0.0156213);
}

double NNfunction_ns_chi01_sL::synapse0x3b7e660() {
   return (neuron0x3b806a0()*-0.0145462);
}

double NNfunction_ns_chi01_sL::synapse0x3b7e960() {
   return (neuron0x3b809e0()*-0.00828995);
}

double NNfunction_ns_chi01_sL::synapse0x3b7e9a0() {
   return (neuron0x3b80d20()*0.0339805);
}

double NNfunction_ns_chi01_sL::synapse0x3b7eca0() {
   return (neuron0x3b81060()*-0.0223883);
}

double NNfunction_ns_chi01_sL::synapse0x3b7ece0() {
   return (neuron0x3b813a0()*0.00186414);
}

double NNfunction_ns_chi01_sL::synapse0x3b7efe0() {
   return (neuron0x3b816e0()*-0.0782898);
}

double NNfunction_ns_chi01_sL::synapse0x3b7f020() {
   return (neuron0x3b7ca90()*-0.666877);
}

double NNfunction_ns_chi01_sL::synapse0x3b7fce0() {
   return (neuron0x3b7cd40()*-0.593097);
}

double NNfunction_ns_chi01_sL::synapse0x3b7fd20() {
   return (neuron0x3b7d080()*-0.158531);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c7f0() {
   return (neuron0x3b7d3c0()*-0.51016);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c830() {
   return (neuron0x3b7d700()*-0.313751);
}

double NNfunction_ns_chi01_sL::synapse0x3b80020() {
   return (neuron0x3b7da40()*-0.00657423);
}

double NNfunction_ns_chi01_sL::synapse0x3b80060() {
   return (neuron0x3b7dd80()*-0.306712);
}

double NNfunction_ns_chi01_sL::synapse0x3b80580() {
   return (neuron0x3b7e0c0()*0.609151);
}

double NNfunction_ns_chi01_sL::synapse0x3b805c0() {
   return (neuron0x3b7e400()*-0.484219);
}

double NNfunction_ns_chi01_sL::synapse0x3b808c0() {
   return (neuron0x3b7e740()*1.0593);
}

double NNfunction_ns_chi01_sL::synapse0x3b80900() {
   return (neuron0x3b7ea80()*0.111362);
}

double NNfunction_ns_chi01_sL::synapse0x3b80c00() {
   return (neuron0x3b7edc0()*0.266148);
}

double NNfunction_ns_chi01_sL::synapse0x3b80c40() {
   return (neuron0x3b7f100()*0.438197);
}

double NNfunction_ns_chi01_sL::synapse0x3b80f40() {
   return (neuron0x3b7f440()*-0.756077);
}

double NNfunction_ns_chi01_sL::synapse0x3b80f80() {
   return (neuron0x3b7f780()*0.972701);
}

double NNfunction_ns_chi01_sL::synapse0x3b81280() {
   return (neuron0x3b7fac0()*0.343141);
}

double NNfunction_ns_chi01_sL::synapse0x3b812c0() {
   return (neuron0x3b7fe00()*-0.30453);
}

double NNfunction_ns_chi01_sL::synapse0x3b815c0() {
   return (neuron0x3b80360()*-0.274123);
}

double NNfunction_ns_chi01_sL::synapse0x3b81600() {
   return (neuron0x3b806a0()*-0.569974);
}

double NNfunction_ns_chi01_sL::synapse0x3b81900() {
   return (neuron0x3b809e0()*0.384708);
}

double NNfunction_ns_chi01_sL::synapse0x3b81940() {
   return (neuron0x3b80d20()*1.31683);
}

double NNfunction_ns_chi01_sL::synapse0x3b7f320() {
   return (neuron0x3b81060()*-0.611565);
}

double NNfunction_ns_chi01_sL::synapse0x3b7f360() {
   return (neuron0x3b813a0()*0.110503);
}

double NNfunction_ns_chi01_sL::synapse0x3b8e710() {
   return (neuron0x3b816e0()*0.289617);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ea90() {
   return (neuron0x3b7ca90()*0.0355559);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ead0() {
   return (neuron0x3b7cd40()*16.5449);
}

double NNfunction_ns_chi01_sL::synapse0x3b8eb10() {
   return (neuron0x3b7d080()*-0.0579155);
}

double NNfunction_ns_chi01_sL::synapse0x3b8eb50() {
   return (neuron0x3b7d3c0()*-0.00518381);
}

double NNfunction_ns_chi01_sL::synapse0x3b8eb90() {
   return (neuron0x3b7d700()*0.00977986);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ebd0() {
   return (neuron0x3b7da40()*-0.00641107);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ec10() {
   return (neuron0x3b7dd80()*0.00135911);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ec50() {
   return (neuron0x3b7e0c0()*0.0133804);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ec90() {
   return (neuron0x3b7e400()*-0.00564842);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ecd0() {
   return (neuron0x3b7e740()*0.0123506);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ed10() {
   return (neuron0x3b7ea80()*0.027911);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ed50() {
   return (neuron0x3b7edc0()*-0.028182);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ed90() {
   return (neuron0x3b7f100()*0.0454586);
}

double NNfunction_ns_chi01_sL::synapse0x3b8edd0() {
   return (neuron0x3b7f440()*0.00521626);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ee10() {
   return (neuron0x3b7f780()*0.0120768);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ee50() {
   return (neuron0x3b7fac0()*0.0256208);
}

double NNfunction_ns_chi01_sL::synapse0x3b8e8e0() {
   return (neuron0x3b7fe00()*0.0191902);
}

double NNfunction_ns_chi01_sL::synapse0x3b8e920() {
   return (neuron0x3b80360()*-0.0155163);
}

double NNfunction_ns_chi01_sL::synapse0x3b8efa0() {
   return (neuron0x3b806a0()*-0.0314466);
}

double NNfunction_ns_chi01_sL::synapse0x3b8efe0() {
   return (neuron0x3b809e0()*-0.0540125);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f020() {
   return (neuron0x3b80d20()*-0.018317);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f060() {
   return (neuron0x3b81060()*0.0389445);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f0a0() {
   return (neuron0x3b813a0()*-0.00520086);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f0e0() {
   return (neuron0x3b816e0()*-0.0321672);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f460() {
   return (neuron0x3b7ca90()*-0.0120518);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f4a0() {
   return (neuron0x3b7cd40()*-0.0277971);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f4e0() {
   return (neuron0x3b7d080()*-0.475717);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f520() {
   return (neuron0x3b7d3c0()*0.409462);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f560() {
   return (neuron0x3b7d700()*-0.016044);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f5a0() {
   return (neuron0x3b7da40()*-0.004761);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f5e0() {
   return (neuron0x3b7dd80()*-0.0101999);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f620() {
   return (neuron0x3b7e0c0()*-0.0224786);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f660() {
   return (neuron0x3b7e400()*0.039084);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f6a0() {
   return (neuron0x3b7e740()*-0.00722741);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f6e0() {
   return (neuron0x3b7ea80()*-0.000984769);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f720() {
   return (neuron0x3b7edc0()*-0.00648464);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f760() {
   return (neuron0x3b7f100()*0.286993);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f7a0() {
   return (neuron0x3b7f440()*-0.0228874);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f7e0() {
   return (neuron0x3b7f780()*0.00673761);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f820() {
   return (neuron0x3b7fac0()*-0.00730295);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f2b0() {
   return (neuron0x3b7fe00()*-0.0579579);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f2f0() {
   return (neuron0x3b80360()*-0.0440373);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f970() {
   return (neuron0x3b806a0()*-0.00661952);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f9b0() {
   return (neuron0x3b809e0()*-0.0235012);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f9f0() {
   return (neuron0x3b80d20()*-0.00171212);
}

double NNfunction_ns_chi01_sL::synapse0x3b8fa30() {
   return (neuron0x3b81060()*0.00600324);
}

double NNfunction_ns_chi01_sL::synapse0x3b8fa70() {
   return (neuron0x3b813a0()*0.019825);
}

double NNfunction_ns_chi01_sL::synapse0x3b8fab0() {
   return (neuron0x3b816e0()*-0.0911735);
}

double NNfunction_ns_chi01_sL::synapse0x3b8fe30() {
   return (neuron0x3b7ca90()*0.196711);
}

double NNfunction_ns_chi01_sL::synapse0x3b8fe70() {
   return (neuron0x3b7cd40()*0.996233);
}

double NNfunction_ns_chi01_sL::synapse0x3b8feb0() {
   return (neuron0x3b7d080()*0.255859);
}

double NNfunction_ns_chi01_sL::synapse0x3b8fef0() {
   return (neuron0x3b7d3c0()*0.129112);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ff30() {
   return (neuron0x3b7d700()*-0.06736);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ff70() {
   return (neuron0x3b7da40()*-0.390329);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ffb0() {
   return (neuron0x3b7dd80()*-0.18135);
}

double NNfunction_ns_chi01_sL::synapse0x3b8fff0() {
   return (neuron0x3b7e0c0()*-0.526604);
}

double NNfunction_ns_chi01_sL::synapse0x3b90030() {
   return (neuron0x3b7e400()*0.291856);
}

double NNfunction_ns_chi01_sL::synapse0x3b90070() {
   return (neuron0x3b7e740()*-0.0526848);
}

double NNfunction_ns_chi01_sL::synapse0x3b900b0() {
   return (neuron0x3b7ea80()*0.922428);
}

double NNfunction_ns_chi01_sL::synapse0x3b900f0() {
   return (neuron0x3b7edc0()*0.661536);
}

double NNfunction_ns_chi01_sL::synapse0x3b90130() {
   return (neuron0x3b7f100()*-0.74083);
}

double NNfunction_ns_chi01_sL::synapse0x3b90170() {
   return (neuron0x3b7f440()*-0.540461);
}

double NNfunction_ns_chi01_sL::synapse0x3b901b0() {
   return (neuron0x3b7f780()*-0.282849);
}

double NNfunction_ns_chi01_sL::synapse0x3b901f0() {
   return (neuron0x3b7fac0()*-0.374077);
}

double NNfunction_ns_chi01_sL::synapse0x3b8fc80() {
   return (neuron0x3b7fe00()*0.376054);
}

double NNfunction_ns_chi01_sL::synapse0x3b8fcc0() {
   return (neuron0x3b80360()*0.124714);
}

double NNfunction_ns_chi01_sL::synapse0x3b90340() {
   return (neuron0x3b806a0()*-0.285721);
}

double NNfunction_ns_chi01_sL::synapse0x3b90380() {
   return (neuron0x3b809e0()*0.0455732);
}

double NNfunction_ns_chi01_sL::synapse0x3b903c0() {
   return (neuron0x3b80d20()*0.240823);
}

double NNfunction_ns_chi01_sL::synapse0x3b90400() {
   return (neuron0x3b81060()*1.199);
}

double NNfunction_ns_chi01_sL::synapse0x3b90440() {
   return (neuron0x3b813a0()*-0.143881);
}

double NNfunction_ns_chi01_sL::synapse0x3b90480() {
   return (neuron0x3b816e0()*1.25397);
}

double NNfunction_ns_chi01_sL::synapse0x3b90800() {
   return (neuron0x3b7ca90()*-0.0124721);
}

double NNfunction_ns_chi01_sL::synapse0x3b90840() {
   return (neuron0x3b7cd40()*0.74732);
}

double NNfunction_ns_chi01_sL::synapse0x3b90880() {
   return (neuron0x3b7d080()*0.240951);
}

double NNfunction_ns_chi01_sL::synapse0x3b908c0() {
   return (neuron0x3b7d3c0()*0.736098);
}

double NNfunction_ns_chi01_sL::synapse0x3b90900() {
   return (neuron0x3b7d700()*0.8706);
}

double NNfunction_ns_chi01_sL::synapse0x3b90940() {
   return (neuron0x3b7da40()*1.19008);
}

double NNfunction_ns_chi01_sL::synapse0x3b90980() {
   return (neuron0x3b7dd80()*-0.0228201);
}

double NNfunction_ns_chi01_sL::synapse0x3b909c0() {
   return (neuron0x3b7e0c0()*-0.563483);
}

double NNfunction_ns_chi01_sL::synapse0x3b90a00() {
   return (neuron0x3b7e400()*-1.0338);
}

double NNfunction_ns_chi01_sL::synapse0x3b90a40() {
   return (neuron0x3b7e740()*1.09742);
}

double NNfunction_ns_chi01_sL::synapse0x3b90a80() {
   return (neuron0x3b7ea80()*-0.473054);
}

double NNfunction_ns_chi01_sL::synapse0x3b90ac0() {
   return (neuron0x3b7edc0()*0.574036);
}

double NNfunction_ns_chi01_sL::synapse0x3b90b00() {
   return (neuron0x3b7f100()*-1.03168);
}

double NNfunction_ns_chi01_sL::synapse0x3b90b40() {
   return (neuron0x3b7f440()*-0.216284);
}

double NNfunction_ns_chi01_sL::synapse0x3b90b80() {
   return (neuron0x3b7f780()*0.285453);
}

double NNfunction_ns_chi01_sL::synapse0x3b90bc0() {
   return (neuron0x3b7fac0()*0.251421);
}

double NNfunction_ns_chi01_sL::synapse0x3b90650() {
   return (neuron0x3b7fe00()*0.021928);
}

double NNfunction_ns_chi01_sL::synapse0x3b90690() {
   return (neuron0x3b80360()*0.455818);
}

double NNfunction_ns_chi01_sL::synapse0x3b90d10() {
   return (neuron0x3b806a0()*-0.481918);
}

double NNfunction_ns_chi01_sL::synapse0x3b90d50() {
   return (neuron0x3b809e0()*0.987161);
}

double NNfunction_ns_chi01_sL::synapse0x3b90d90() {
   return (neuron0x3b80d20()*-0.206968);
}

double NNfunction_ns_chi01_sL::synapse0x3b90dd0() {
   return (neuron0x3b81060()*1.08019);
}

double NNfunction_ns_chi01_sL::synapse0x3b90e10() {
   return (neuron0x3b813a0()*-0.150438);
}

double NNfunction_ns_chi01_sL::synapse0x3b90e50() {
   return (neuron0x3b816e0()*-0.139303);
}

double NNfunction_ns_chi01_sL::synapse0x3b911d0() {
   return (neuron0x3b7ca90()*-0.00342766);
}

double NNfunction_ns_chi01_sL::synapse0x3b91210() {
   return (neuron0x3b7cd40()*0.0301088);
}

double NNfunction_ns_chi01_sL::synapse0x3b91250() {
   return (neuron0x3b7d080()*-0.0665851);
}

double NNfunction_ns_chi01_sL::synapse0x3b91290() {
   return (neuron0x3b7d3c0()*-0.445123);
}

double NNfunction_ns_chi01_sL::synapse0x3b912d0() {
   return (neuron0x3b7d700()*0.0339968);
}

double NNfunction_ns_chi01_sL::synapse0x3b91310() {
   return (neuron0x3b7da40()*-0.0211976);
}

double NNfunction_ns_chi01_sL::synapse0x3b91350() {
   return (neuron0x3b7dd80()*0.00494893);
}

double NNfunction_ns_chi01_sL::synapse0x3b91390() {
   return (neuron0x3b7e0c0()*0.0114814);
}

double NNfunction_ns_chi01_sL::synapse0x3b913d0() {
   return (neuron0x3b7e400()*-0.0138179);
}

double NNfunction_ns_chi01_sL::synapse0x3b89590() {
   return (neuron0x3b7e740()*0.0253263);
}

double NNfunction_ns_chi01_sL::synapse0x3b895d0() {
   return (neuron0x3b7ea80()*0.00737114);
}

double NNfunction_ns_chi01_sL::synapse0x3b89610() {
   return (neuron0x3b7edc0()*-0.0362254);
}

double NNfunction_ns_chi01_sL::synapse0x3b89650() {
   return (neuron0x3b7f100()*-0.628342);
}

double NNfunction_ns_chi01_sL::synapse0x3b89690() {
   return (neuron0x3b7f440()*0.00374542);
}

double NNfunction_ns_chi01_sL::synapse0x3b896d0() {
   return (neuron0x3b7f780()*-0.0550289);
}

double NNfunction_ns_chi01_sL::synapse0x3b89710() {
   return (neuron0x3b7fac0()*-0.0421919);
}

double NNfunction_ns_chi01_sL::synapse0x3b91020() {
   return (neuron0x3b7fe00()*0.03651);
}

double NNfunction_ns_chi01_sL::synapse0x3b91060() {
   return (neuron0x3b80360()*-0.00997349);
}

double NNfunction_ns_chi01_sL::synapse0x3b89860() {
   return (neuron0x3b806a0()*-0.00852251);
}

double NNfunction_ns_chi01_sL::synapse0x3b898a0() {
   return (neuron0x3b809e0()*0.00916256);
}

double NNfunction_ns_chi01_sL::synapse0x3b898e0() {
   return (neuron0x3b80d20()*0.0137659);
}

double NNfunction_ns_chi01_sL::synapse0x3b89920() {
   return (neuron0x3b81060()*0.00607565);
}

double NNfunction_ns_chi01_sL::synapse0x3b89960() {
   return (neuron0x3b813a0()*0.00807927);
}

double NNfunction_ns_chi01_sL::synapse0x3b899a0() {
   return (neuron0x3b816e0()*-0.0223564);
}

double NNfunction_ns_chi01_sL::synapse0x3b89d20() {
   return (neuron0x3b7ca90()*0.0141041);
}

double NNfunction_ns_chi01_sL::synapse0x3b89d60() {
   return (neuron0x3b7cd40()*-0.00928074);
}

double NNfunction_ns_chi01_sL::synapse0x3b89da0() {
   return (neuron0x3b7d080()*-1.8128);
}

double NNfunction_ns_chi01_sL::synapse0x3b89de0() {
   return (neuron0x3b7d3c0()*0.0221665);
}

double NNfunction_ns_chi01_sL::synapse0x3b89e20() {
   return (neuron0x3b7d700()*-0.00494739);
}

double NNfunction_ns_chi01_sL::synapse0x3b89e60() {
   return (neuron0x3b7da40()*-0.0311911);
}

double NNfunction_ns_chi01_sL::synapse0x3b89ea0() {
   return (neuron0x3b7dd80()*-0.0123396);
}

double NNfunction_ns_chi01_sL::synapse0x3b89ee0() {
   return (neuron0x3b7e0c0()*-0.00723488);
}

double NNfunction_ns_chi01_sL::synapse0x3b89f20() {
   return (neuron0x3b7e400()*-0.0125901);
}

double NNfunction_ns_chi01_sL::synapse0x3b89f60() {
   return (neuron0x3b7e740()*-0.0141507);
}

double NNfunction_ns_chi01_sL::synapse0x3b89fa0() {
   return (neuron0x3b7ea80()*-0.00204162);
}

double NNfunction_ns_chi01_sL::synapse0x3b89fe0() {
   return (neuron0x3b7edc0()*-0.0141778);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a020() {
   return (neuron0x3b7f100()*0.0962192);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a060() {
   return (neuron0x3b7f440()*0.0370626);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a0a0() {
   return (neuron0x3b7f780()*0.00550202);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a0e0() {
   return (neuron0x3b7fac0()*0.00895708);
}

double NNfunction_ns_chi01_sL::synapse0x3b89b70() {
   return (neuron0x3b7fe00()*-0.00540804);
}

double NNfunction_ns_chi01_sL::synapse0x3b89bb0() {
   return (neuron0x3b80360()*0.0282824);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a230() {
   return (neuron0x3b806a0()*-0.00640872);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a270() {
   return (neuron0x3b809e0()*0.02392);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a2b0() {
   return (neuron0x3b80d20()*-0.000957688);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a2f0() {
   return (neuron0x3b81060()*0.00274052);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a330() {
   return (neuron0x3b813a0()*-0.00196415);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a370() {
   return (neuron0x3b816e0()*-6.62783);
}

double NNfunction_ns_chi01_sL::synapse0x3b8a540() {
   return (neuron0x3b7ca90()*-0.00858476);
}

double NNfunction_ns_chi01_sL::synapse0x3b935d0() {
   return (neuron0x3b7cd40()*0.0163146);
}

double NNfunction_ns_chi01_sL::synapse0x3b93610() {
   return (neuron0x3b7d080()*0.00953459);
}

double NNfunction_ns_chi01_sL::synapse0x3b93650() {
   return (neuron0x3b7d3c0()*4.52087);
}

double NNfunction_ns_chi01_sL::synapse0x3b93690() {
   return (neuron0x3b7d700()*0.00586943);
}

double NNfunction_ns_chi01_sL::synapse0x3b936d0() {
   return (neuron0x3b7da40()*0.0214256);
}

double NNfunction_ns_chi01_sL::synapse0x3b93710() {
   return (neuron0x3b7dd80()*0.0769808);
}

double NNfunction_ns_chi01_sL::synapse0x3b93750() {
   return (neuron0x3b7e0c0()*-0.0124284);
}

double NNfunction_ns_chi01_sL::synapse0x3b93790() {
   return (neuron0x3b7e400()*-0.00690433);
}

double NNfunction_ns_chi01_sL::synapse0x3b937d0() {
   return (neuron0x3b7e740()*-0.0310357);
}

double NNfunction_ns_chi01_sL::synapse0x3b93810() {
   return (neuron0x3b7ea80()*-0.031136);
}

double NNfunction_ns_chi01_sL::synapse0x3b93850() {
   return (neuron0x3b7edc0()*0.00578895);
}

double NNfunction_ns_chi01_sL::synapse0x3b93890() {
   return (neuron0x3b7f100()*-0.656351);
}

double NNfunction_ns_chi01_sL::synapse0x3b938d0() {
   return (neuron0x3b7f440()*-0.0317611);
}

double NNfunction_ns_chi01_sL::synapse0x3b93910() {
   return (neuron0x3b7f780()*0.0331734);
}

double NNfunction_ns_chi01_sL::synapse0x3b93950() {
   return (neuron0x3b7fac0()*0.0222092);
}

double NNfunction_ns_chi01_sL::synapse0x3b93420() {
   return (neuron0x3b7fe00()*-0.0202986);
}

double NNfunction_ns_chi01_sL::synapse0x3b93460() {
   return (neuron0x3b80360()*0.0237361);
}

double NNfunction_ns_chi01_sL::synapse0x3b93aa0() {
   return (neuron0x3b806a0()*0.0323575);
}

double NNfunction_ns_chi01_sL::synapse0x3b93ae0() {
   return (neuron0x3b809e0()*0.0317755);
}

double NNfunction_ns_chi01_sL::synapse0x3b93b20() {
   return (neuron0x3b80d20()*-0.0160385);
}

double NNfunction_ns_chi01_sL::synapse0x3b93b60() {
   return (neuron0x3b81060()*-0.0300525);
}

double NNfunction_ns_chi01_sL::synapse0x3b93ba0() {
   return (neuron0x3b813a0()*-0.0102843);
}

double NNfunction_ns_chi01_sL::synapse0x3b93be0() {
   return (neuron0x3b816e0()*0.0246464);
}

double NNfunction_ns_chi01_sL::synapse0x3b93f60() {
   return (neuron0x3b7ca90()*0.108085);
}

double NNfunction_ns_chi01_sL::synapse0x3b93fa0() {
   return (neuron0x3b7cd40()*-0.824792);
}

double NNfunction_ns_chi01_sL::synapse0x3b93fe0() {
   return (neuron0x3b7d080()*-0.170375);
}

double NNfunction_ns_chi01_sL::synapse0x3b94020() {
   return (neuron0x3b7d3c0()*-0.137441);
}

double NNfunction_ns_chi01_sL::synapse0x3b94060() {
   return (neuron0x3b7d700()*0.18378);
}

double NNfunction_ns_chi01_sL::synapse0x3b940a0() {
   return (neuron0x3b7da40()*0.183166);
}

double NNfunction_ns_chi01_sL::synapse0x3b940e0() {
   return (neuron0x3b7dd80()*0.177956);
}

double NNfunction_ns_chi01_sL::synapse0x3b94120() {
   return (neuron0x3b7e0c0()*-0.0815694);
}

double NNfunction_ns_chi01_sL::synapse0x3b94160() {
   return (neuron0x3b7e400()*0.0514855);
}

double NNfunction_ns_chi01_sL::synapse0x3b941a0() {
   return (neuron0x3b7e740()*-0.134004);
}

double NNfunction_ns_chi01_sL::synapse0x3b941e0() {
   return (neuron0x3b7ea80()*-0.231906);
}

double NNfunction_ns_chi01_sL::synapse0x3b94220() {
   return (neuron0x3b7edc0()*-0.25211);
}

double NNfunction_ns_chi01_sL::synapse0x3b94260() {
   return (neuron0x3b7f100()*0.336509);
}

double NNfunction_ns_chi01_sL::synapse0x3b942a0() {
   return (neuron0x3b7f440()*0.408422);
}

double NNfunction_ns_chi01_sL::synapse0x3b942e0() {
   return (neuron0x3b7f780()*0.467546);
}

double NNfunction_ns_chi01_sL::synapse0x3b94320() {
   return (neuron0x3b7fac0()*0.0817144);
}

double NNfunction_ns_chi01_sL::synapse0x3b93db0() {
   return (neuron0x3b7fe00()*-0.0200521);
}

double NNfunction_ns_chi01_sL::synapse0x3b93df0() {
   return (neuron0x3b80360()*0.477948);
}

double NNfunction_ns_chi01_sL::synapse0x3b94470() {
   return (neuron0x3b806a0()*0.0340178);
}

double NNfunction_ns_chi01_sL::synapse0x3b944b0() {
   return (neuron0x3b809e0()*-0.279544);
}

double NNfunction_ns_chi01_sL::synapse0x3b944f0() {
   return (neuron0x3b80d20()*0.0723655);
}

double NNfunction_ns_chi01_sL::synapse0x3b94530() {
   return (neuron0x3b81060()*0.19555);
}

double NNfunction_ns_chi01_sL::synapse0x3b94570() {
   return (neuron0x3b813a0()*-0.422782);
}

double NNfunction_ns_chi01_sL::synapse0x3b945b0() {
   return (neuron0x3b816e0()*-0.471618);
}

double NNfunction_ns_chi01_sL::synapse0x3b94930() {
   return (neuron0x3b7ca90()*1.06261);
}

double NNfunction_ns_chi01_sL::synapse0x3b94970() {
   return (neuron0x3b7cd40()*-0.140225);
}

double NNfunction_ns_chi01_sL::synapse0x3b949b0() {
   return (neuron0x3b7d080()*0.669166);
}

double NNfunction_ns_chi01_sL::synapse0x3b949f0() {
   return (neuron0x3b7d3c0()*-0.148703);
}

double NNfunction_ns_chi01_sL::synapse0x3b94a30() {
   return (neuron0x3b7d700()*-0.0951844);
}

double NNfunction_ns_chi01_sL::synapse0x3b94a70() {
   return (neuron0x3b7da40()*-0.0776179);
}

double NNfunction_ns_chi01_sL::synapse0x3b94ab0() {
   return (neuron0x3b7dd80()*-0.00324684);
}

double NNfunction_ns_chi01_sL::synapse0x3b94af0() {
   return (neuron0x3b7e0c0()*-0.0367854);
}

double NNfunction_ns_chi01_sL::synapse0x3b94b30() {
   return (neuron0x3b7e400()*0.00810025);
}

double NNfunction_ns_chi01_sL::synapse0x3b94b70() {
   return (neuron0x3b7e740()*0.179635);
}

double NNfunction_ns_chi01_sL::synapse0x3b94bb0() {
   return (neuron0x3b7ea80()*0.103906);
}

double NNfunction_ns_chi01_sL::synapse0x3b94bf0() {
   return (neuron0x3b7edc0()*0.216066);
}

double NNfunction_ns_chi01_sL::synapse0x3b94c30() {
   return (neuron0x3b7f100()*-0.310167);
}

double NNfunction_ns_chi01_sL::synapse0x3b94c70() {
   return (neuron0x3b7f440()*-0.199692);
}

double NNfunction_ns_chi01_sL::synapse0x3b94cb0() {
   return (neuron0x3b7f780()*0.16123);
}

double NNfunction_ns_chi01_sL::synapse0x3b94cf0() {
   return (neuron0x3b7fac0()*0.0700944);
}

double NNfunction_ns_chi01_sL::synapse0x3b94780() {
   return (neuron0x3b7fe00()*0.105753);
}

double NNfunction_ns_chi01_sL::synapse0x3b947c0() {
   return (neuron0x3b80360()*0.20744);
}

double NNfunction_ns_chi01_sL::synapse0x3b94e40() {
   return (neuron0x3b806a0()*-0.0165299);
}

double NNfunction_ns_chi01_sL::synapse0x3b94e80() {
   return (neuron0x3b809e0()*-0.192127);
}

double NNfunction_ns_chi01_sL::synapse0x3b94ec0() {
   return (neuron0x3b80d20()*-0.0931266);
}

double NNfunction_ns_chi01_sL::synapse0x3b94f00() {
   return (neuron0x3b81060()*0.118512);
}

double NNfunction_ns_chi01_sL::synapse0x3b94f40() {
   return (neuron0x3b813a0()*0.284407);
}

double NNfunction_ns_chi01_sL::synapse0x3b94f80() {
   return (neuron0x3b816e0()*5.83786);
}

double NNfunction_ns_chi01_sL::synapse0x3b95300() {
   return (neuron0x3b7ca90()*0.36724);
}

double NNfunction_ns_chi01_sL::synapse0x3b95340() {
   return (neuron0x3b7cd40()*0.98333);
}

double NNfunction_ns_chi01_sL::synapse0x3b95380() {
   return (neuron0x3b7d080()*-0.540158);
}

double NNfunction_ns_chi01_sL::synapse0x3b953c0() {
   return (neuron0x3b7d3c0()*3.95409);
}

double NNfunction_ns_chi01_sL::synapse0x3b95400() {
   return (neuron0x3b7d700()*0.0890478);
}

double NNfunction_ns_chi01_sL::synapse0x3b95440() {
   return (neuron0x3b7da40()*0.333283);
}

double NNfunction_ns_chi01_sL::synapse0x3b95480() {
   return (neuron0x3b7dd80()*0.271372);
}

double NNfunction_ns_chi01_sL::synapse0x3b954c0() {
   return (neuron0x3b7e0c0()*1.10219);
}

double NNfunction_ns_chi01_sL::synapse0x3b95500() {
   return (neuron0x3b7e400()*0.876792);
}

double NNfunction_ns_chi01_sL::synapse0x3b95540() {
   return (neuron0x3b7e740()*-1.44538);
}

double NNfunction_ns_chi01_sL::synapse0x3b95580() {
   return (neuron0x3b7ea80()*0.519947);
}

double NNfunction_ns_chi01_sL::synapse0x3b955c0() {
   return (neuron0x3b7edc0()*0.689489);
}

double NNfunction_ns_chi01_sL::synapse0x3b95600() {
   return (neuron0x3b7f100()*-1.35894);
}

double NNfunction_ns_chi01_sL::synapse0x3b95640() {
   return (neuron0x3b7f440()*0.773771);
}

double NNfunction_ns_chi01_sL::synapse0x3b95680() {
   return (neuron0x3b7f780()*-0.380959);
}

double NNfunction_ns_chi01_sL::synapse0x3b956c0() {
   return (neuron0x3b7fac0()*-0.707767);
}

double NNfunction_ns_chi01_sL::synapse0x3b95150() {
   return (neuron0x3b7fe00()*0.0544736);
}

double NNfunction_ns_chi01_sL::synapse0x3b95190() {
   return (neuron0x3b80360()*0.300809);
}

double NNfunction_ns_chi01_sL::synapse0x3b95810() {
   return (neuron0x3b806a0()*0.128078);
}

double NNfunction_ns_chi01_sL::synapse0x3b95850() {
   return (neuron0x3b809e0()*0.817069);
}

double NNfunction_ns_chi01_sL::synapse0x3b95890() {
   return (neuron0x3b80d20()*0.213235);
}

double NNfunction_ns_chi01_sL::synapse0x3b958d0() {
   return (neuron0x3b81060()*0.456358);
}

double NNfunction_ns_chi01_sL::synapse0x3b95910() {
   return (neuron0x3b813a0()*-0.0767761);
}

double NNfunction_ns_chi01_sL::synapse0x3b95950() {
   return (neuron0x3b816e0()*-0.467227);
}

double NNfunction_ns_chi01_sL::synapse0x3b95cd0() {
   return (neuron0x3b7ca90()*0.00992246);
}

double NNfunction_ns_chi01_sL::synapse0x3b95d10() {
   return (neuron0x3b7cd40()*-0.0166843);
}

double NNfunction_ns_chi01_sL::synapse0x3b95d50() {
   return (neuron0x3b7d080()*-0.167104);
}

double NNfunction_ns_chi01_sL::synapse0x3b95d90() {
   return (neuron0x3b7d3c0()*-2.18294);
}

double NNfunction_ns_chi01_sL::synapse0x3b95dd0() {
   return (neuron0x3b7d700()*-0.000187394);
}

double NNfunction_ns_chi01_sL::synapse0x3b95e10() {
   return (neuron0x3b7da40()*0.0037042);
}

double NNfunction_ns_chi01_sL::synapse0x3b95e50() {
   return (neuron0x3b7dd80()*0.00363486);
}

double NNfunction_ns_chi01_sL::synapse0x3b95e90() {
   return (neuron0x3b7e0c0()*0.0113843);
}

double NNfunction_ns_chi01_sL::synapse0x3b95ed0() {
   return (neuron0x3b7e400()*0.0101543);
}

double NNfunction_ns_chi01_sL::synapse0x3b95f10() {
   return (neuron0x3b7e740()*-0.000742964);
}

double NNfunction_ns_chi01_sL::synapse0x3b95f50() {
   return (neuron0x3b7ea80()*0.0193642);
}

double NNfunction_ns_chi01_sL::synapse0x3b95f90() {
   return (neuron0x3b7edc0()*0.0238953);
}

double NNfunction_ns_chi01_sL::synapse0x3b95fd0() {
   return (neuron0x3b7f100()*0.485961);
}

double NNfunction_ns_chi01_sL::synapse0x3b96010() {
   return (neuron0x3b7f440()*-0.00562557);
}

double NNfunction_ns_chi01_sL::synapse0x3b96050() {
   return (neuron0x3b7f780()*0.000902076);
}

double NNfunction_ns_chi01_sL::synapse0x3b96090() {
   return (neuron0x3b7fac0()*-0.0273662);
}

double NNfunction_ns_chi01_sL::synapse0x3b95b20() {
   return (neuron0x3b7fe00()*0.0542026);
}

double NNfunction_ns_chi01_sL::synapse0x3b95b60() {
   return (neuron0x3b80360()*-0.0102711);
}

double NNfunction_ns_chi01_sL::synapse0x3b961e0() {
   return (neuron0x3b806a0()*0.00174096);
}

double NNfunction_ns_chi01_sL::synapse0x3b96220() {
   return (neuron0x3b809e0()*0.0268534);
}

double NNfunction_ns_chi01_sL::synapse0x3b96260() {
   return (neuron0x3b80d20()*0.0311531);
}

double NNfunction_ns_chi01_sL::synapse0x3b962a0() {
   return (neuron0x3b81060()*-0.0355863);
}

double NNfunction_ns_chi01_sL::synapse0x3b962e0() {
   return (neuron0x3b813a0()*-0.0176243);
}

double NNfunction_ns_chi01_sL::synapse0x3b96320() {
   return (neuron0x3b816e0()*-0.0422777);
}

double NNfunction_ns_chi01_sL::synapse0x3b966a0() {
   return (neuron0x3b7ca90()*1.04842);
}

double NNfunction_ns_chi01_sL::synapse0x3b966e0() {
   return (neuron0x3b7cd40()*0.193155);
}

double NNfunction_ns_chi01_sL::synapse0x3b96720() {
   return (neuron0x3b7d080()*0.0803951);
}

double NNfunction_ns_chi01_sL::synapse0x3b96760() {
   return (neuron0x3b7d3c0()*-0.185439);
}

double NNfunction_ns_chi01_sL::synapse0x3b967a0() {
   return (neuron0x3b7d700()*0.669602);
}

double NNfunction_ns_chi01_sL::synapse0x3b967e0() {
   return (neuron0x3b7da40()*-0.461338);
}

double NNfunction_ns_chi01_sL::synapse0x3b96820() {
   return (neuron0x3b7dd80()*-0.0984348);
}

double NNfunction_ns_chi01_sL::synapse0x3b96860() {
   return (neuron0x3b7e0c0()*-0.326048);
}

double NNfunction_ns_chi01_sL::synapse0x3b968a0() {
   return (neuron0x3b7e400()*1.00218);
}

double NNfunction_ns_chi01_sL::synapse0x3b968e0() {
   return (neuron0x3b7e740()*0.813707);
}

double NNfunction_ns_chi01_sL::synapse0x3b96920() {
   return (neuron0x3b7ea80()*0.162027);
}

double NNfunction_ns_chi01_sL::synapse0x3b96960() {
   return (neuron0x3b7edc0()*0.498251);
}

double NNfunction_ns_chi01_sL::synapse0x3b969a0() {
   return (neuron0x3b7f100()*0.82955);
}

double NNfunction_ns_chi01_sL::synapse0x3b969e0() {
   return (neuron0x3b7f440()*0.136115);
}

double NNfunction_ns_chi01_sL::synapse0x3b96a20() {
   return (neuron0x3b7f780()*-0.531757);
}

double NNfunction_ns_chi01_sL::synapse0x3b96a60() {
   return (neuron0x3b7fac0()*-0.508694);
}

double NNfunction_ns_chi01_sL::synapse0x3b964f0() {
   return (neuron0x3b7fe00()*-0.315594);
}

double NNfunction_ns_chi01_sL::synapse0x3b96530() {
   return (neuron0x3b80360()*0.787368);
}

double NNfunction_ns_chi01_sL::synapse0x3b96bb0() {
   return (neuron0x3b806a0()*0.877184);
}

double NNfunction_ns_chi01_sL::synapse0x3b96bf0() {
   return (neuron0x3b809e0()*-1.38514);
}

double NNfunction_ns_chi01_sL::synapse0x3b96c30() {
   return (neuron0x3b80d20()*0.0720353);
}

double NNfunction_ns_chi01_sL::synapse0x3b96c70() {
   return (neuron0x3b81060()*0.0669609);
}

double NNfunction_ns_chi01_sL::synapse0x3b96cb0() {
   return (neuron0x3b813a0()*-0.389454);
}

double NNfunction_ns_chi01_sL::synapse0x3b96cf0() {
   return (neuron0x3b816e0()*0.252618);
}

double NNfunction_ns_chi01_sL::synapse0x3b97070() {
   return (neuron0x3b7ca90()*-0.232511);
}

double NNfunction_ns_chi01_sL::synapse0x3b970b0() {
   return (neuron0x3b7cd40()*0.00592947);
}

double NNfunction_ns_chi01_sL::synapse0x3b970f0() {
   return (neuron0x3b7d080()*0.528512);
}

double NNfunction_ns_chi01_sL::synapse0x3b97130() {
   return (neuron0x3b7d3c0()*-0.0216113);
}

double NNfunction_ns_chi01_sL::synapse0x3b97170() {
   return (neuron0x3b7d700()*-0.0349179);
}

double NNfunction_ns_chi01_sL::synapse0x3b971b0() {
   return (neuron0x3b7da40()*0.0131233);
}

double NNfunction_ns_chi01_sL::synapse0x3b971f0() {
   return (neuron0x3b7dd80()*-0.00411168);
}

double NNfunction_ns_chi01_sL::synapse0x3b97230() {
   return (neuron0x3b7e0c0()*-0.0354134);
}

double NNfunction_ns_chi01_sL::synapse0x3b97270() {
   return (neuron0x3b7e400()*0.010036);
}

double NNfunction_ns_chi01_sL::synapse0x3b972b0() {
   return (neuron0x3b7e740()*-0.00747141);
}

double NNfunction_ns_chi01_sL::synapse0x3b972f0() {
   return (neuron0x3b7ea80()*0.0341211);
}

double NNfunction_ns_chi01_sL::synapse0x3b97330() {
   return (neuron0x3b7edc0()*-0.0301461);
}

double NNfunction_ns_chi01_sL::synapse0x3b97370() {
   return (neuron0x3b7f100()*-0.104578);
}

double NNfunction_ns_chi01_sL::synapse0x3b973b0() {
   return (neuron0x3b7f440()*0.0130289);
}

double NNfunction_ns_chi01_sL::synapse0x3b973f0() {
   return (neuron0x3b7f780()*0.0126886);
}

double NNfunction_ns_chi01_sL::synapse0x3b97430() {
   return (neuron0x3b7fac0()*0.0300436);
}

double NNfunction_ns_chi01_sL::synapse0x3b96ec0() {
   return (neuron0x3b7fe00()*-0.00643127);
}

double NNfunction_ns_chi01_sL::synapse0x3b96f00() {
   return (neuron0x3b80360()*0.0295401);
}

double NNfunction_ns_chi01_sL::synapse0x3b97580() {
   return (neuron0x3b806a0()*-0.0247898);
}

double NNfunction_ns_chi01_sL::synapse0x3b975c0() {
   return (neuron0x3b809e0()*7.51582e-05);
}

double NNfunction_ns_chi01_sL::synapse0x3b97600() {
   return (neuron0x3b80d20()*0.0395274);
}

double NNfunction_ns_chi01_sL::synapse0x3b97640() {
   return (neuron0x3b81060()*0.0223743);
}

double NNfunction_ns_chi01_sL::synapse0x3b97680() {
   return (neuron0x3b813a0()*-0.00923301);
}

double NNfunction_ns_chi01_sL::synapse0x3b976c0() {
   return (neuron0x3b816e0()*-6.58613);
}

double NNfunction_ns_chi01_sL::synapse0x3b97a40() {
   return (neuron0x3b7ca90()*-0.197123);
}

double NNfunction_ns_chi01_sL::synapse0x3b97a80() {
   return (neuron0x3b7cd40()*-0.0881485);
}

double NNfunction_ns_chi01_sL::synapse0x3b97ac0() {
   return (neuron0x3b7d080()*0.485469);
}

double NNfunction_ns_chi01_sL::synapse0x3b97b00() {
   return (neuron0x3b7d3c0()*-0.0693898);
}

double NNfunction_ns_chi01_sL::synapse0x3b97b40() {
   return (neuron0x3b7d700()*0.643144);
}

double NNfunction_ns_chi01_sL::synapse0x3b97b80() {
   return (neuron0x3b7da40()*0.304338);
}

double NNfunction_ns_chi01_sL::synapse0x3b97bc0() {
   return (neuron0x3b7dd80()*0.0830815);
}

double NNfunction_ns_chi01_sL::synapse0x3b97c00() {
   return (neuron0x3b7e0c0()*-0.0292536);
}

double NNfunction_ns_chi01_sL::synapse0x3b97c40() {
   return (neuron0x3b7e400()*0.109539);
}

double NNfunction_ns_chi01_sL::synapse0x3b97c80() {
   return (neuron0x3b7e740()*0.0377364);
}

double NNfunction_ns_chi01_sL::synapse0x3b97cc0() {
   return (neuron0x3b7ea80()*0.00811147);
}

double NNfunction_ns_chi01_sL::synapse0x3b97d00() {
   return (neuron0x3b7edc0()*0.569933);
}

double NNfunction_ns_chi01_sL::synapse0x3b97d40() {
   return (neuron0x3b7f100()*-0.567443);
}

double NNfunction_ns_chi01_sL::synapse0x3b97d80() {
   return (neuron0x3b7f440()*-0.425244);
}

double NNfunction_ns_chi01_sL::synapse0x3b97dc0() {
   return (neuron0x3b7f780()*0.0239148);
}

double NNfunction_ns_chi01_sL::synapse0x3b97e00() {
   return (neuron0x3b7fac0()*0.861465);
}

double NNfunction_ns_chi01_sL::synapse0x3b97890() {
   return (neuron0x3b7fe00()*0.142265);
}

double NNfunction_ns_chi01_sL::synapse0x3b978d0() {
   return (neuron0x3b80360()*-0.0548542);
}

double NNfunction_ns_chi01_sL::synapse0x3b97f50() {
   return (neuron0x3b806a0()*-0.21801);
}

double NNfunction_ns_chi01_sL::synapse0x3b97f90() {
   return (neuron0x3b809e0()*0.21838);
}

double NNfunction_ns_chi01_sL::synapse0x3b97fd0() {
   return (neuron0x3b80d20()*0.181581);
}

double NNfunction_ns_chi01_sL::synapse0x3b98010() {
   return (neuron0x3b81060()*0.277696);
}

double NNfunction_ns_chi01_sL::synapse0x3b98050() {
   return (neuron0x3b813a0()*0.307701);
}

double NNfunction_ns_chi01_sL::synapse0x3b98090() {
   return (neuron0x3b816e0()*-0.0616357);
}

double NNfunction_ns_chi01_sL::synapse0x3b98410() {
   return (neuron0x3b7ca90()*0.00938123);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c9e0() {
   return (neuron0x3b7cd40()*0.0177472);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ca20() {
   return (neuron0x3b7d080()*0.194467);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ca60() {
   return (neuron0x3b7d3c0()*0.80725);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ccb0() {
   return (neuron0x3b7d700()*0.0225604);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ccf0() {
   return (neuron0x3b7da40()*-0.000317943);
}

double NNfunction_ns_chi01_sL::synapse0x3b8cd30() {
   return (neuron0x3b7dd80()*0.00709841);
}

double NNfunction_ns_chi01_sL::synapse0x3b8cf80() {
   return (neuron0x3b7e0c0()*0.0160468);
}

double NNfunction_ns_chi01_sL::synapse0x3b8cfc0() {
   return (neuron0x3b7e400()*-0.00967019);
}

double NNfunction_ns_chi01_sL::synapse0x3b8d210() {
   return (neuron0x3b7e740()*0.00781047);
}

double NNfunction_ns_chi01_sL::synapse0x3b8d250() {
   return (neuron0x3b7ea80()*0.00622199);
}

double NNfunction_ns_chi01_sL::synapse0x3b8d290() {
   return (neuron0x3b7edc0()*0.00427378);
}

double NNfunction_ns_chi01_sL::synapse0x3b8d4e0() {
   return (neuron0x3b7f100()*-0.533195);
}

double NNfunction_ns_chi01_sL::synapse0x3b8d520() {
   return (neuron0x3b7f440()*0.00443293);
}

double NNfunction_ns_chi01_sL::synapse0x3b8d770() {
   return (neuron0x3b7f780()*-0.0130344);
}

double NNfunction_ns_chi01_sL::synapse0x3b8d7b0() {
   return (neuron0x3b7fac0()*-0.0148937);
}

double NNfunction_ns_chi01_sL::synapse0x3b98260() {
   return (neuron0x3b7fe00()*0.0505044);
}

double NNfunction_ns_chi01_sL::synapse0x3b982a0() {
   return (neuron0x3b80360()*0.0298289);
}

double NNfunction_ns_chi01_sL::synapse0x3b8d900() {
   return (neuron0x3b806a0()*-0.00373342);
}

double NNfunction_ns_chi01_sL::synapse0x3b8de10() {
   return (neuron0x3b809e0()*0.0204493);
}

double NNfunction_ns_chi01_sL::synapse0x3b8de50() {
   return (neuron0x3b80d20()*0.0126957);
}

double NNfunction_ns_chi01_sL::synapse0x3b8de90() {
   return (neuron0x3b81060()*-0.0102713);
}

double NNfunction_ns_chi01_sL::synapse0x3b8e0e0() {
   return (neuron0x3b813a0()*-0.00983311);
}

double NNfunction_ns_chi01_sL::synapse0x3b8e120() {
   return (neuron0x3b816e0()*0.0221207);
}

double NNfunction_ns_chi01_sL::synapse0x3b8d9d0() {
   return (neuron0x3b7ca90()*0.326374);
}

double NNfunction_ns_chi01_sL::synapse0x3b8da10() {
   return (neuron0x3b7cd40()*-1.44003);
}

double NNfunction_ns_chi01_sL::synapse0x3b8da50() {
   return (neuron0x3b7d080()*0.267794);
}

double NNfunction_ns_chi01_sL::synapse0x3b8da90() {
   return (neuron0x3b7d3c0()*0.159551);
}

double NNfunction_ns_chi01_sL::synapse0x3b8e410() {
   return (neuron0x3b7d700()*0.246504);
}

double NNfunction_ns_chi01_sL::synapse0x3b9a760() {
   return (neuron0x3b7da40()*-0.185488);
}

double NNfunction_ns_chi01_sL::synapse0x3b9a7a0() {
   return (neuron0x3b7dd80()*0.212236);
}

double NNfunction_ns_chi01_sL::synapse0x3b9a7e0() {
   return (neuron0x3b7e0c0()*-0.234629);
}

double NNfunction_ns_chi01_sL::synapse0x3b9a820() {
   return (neuron0x3b7e400()*0.104356);
}

double NNfunction_ns_chi01_sL::synapse0x3b9a860() {
   return (neuron0x3b7e740()*0.423802);
}

double NNfunction_ns_chi01_sL::synapse0x3b9a8a0() {
   return (neuron0x3b7ea80()*0.246876);
}

double NNfunction_ns_chi01_sL::synapse0x3b9a8e0() {
   return (neuron0x3b7edc0()*-0.482409);
}

double NNfunction_ns_chi01_sL::synapse0x3b9a920() {
   return (neuron0x3b7f100()*-0.602665);
}

double NNfunction_ns_chi01_sL::synapse0x3b9a960() {
   return (neuron0x3b7f440()*0.788152);
}

double NNfunction_ns_chi01_sL::synapse0x3b9a9a0() {
   return (neuron0x3b7f780()*-0.434578);
}

double NNfunction_ns_chi01_sL::synapse0x3b9a9e0() {
   return (neuron0x3b7fac0()*0.640307);
}

double NNfunction_ns_chi01_sL::synapse0x3b8e2f0() {
   return (neuron0x3b7fe00()*0.436235);
}

double NNfunction_ns_chi01_sL::synapse0x3b8e330() {
   return (neuron0x3b80360()*-0.224969);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ab30() {
   return (neuron0x3b806a0()*-1.16246);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ab70() {
   return (neuron0x3b809e0()*-0.88922);
}

double NNfunction_ns_chi01_sL::synapse0x3b9abb0() {
   return (neuron0x3b80d20()*-0.687172);
}

double NNfunction_ns_chi01_sL::synapse0x3b9abf0() {
   return (neuron0x3b81060()*0.787598);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ac30() {
   return (neuron0x3b813a0()*0.750616);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ac70() {
   return (neuron0x3b816e0()*0.402296);
}

double NNfunction_ns_chi01_sL::synapse0x3b9aff0() {
   return (neuron0x3b7ca90()*0.0369539);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b030() {
   return (neuron0x3b7cd40()*0.00906862);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b070() {
   return (neuron0x3b7d080()*-1.26605);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b0b0() {
   return (neuron0x3b7d3c0()*-0.0346961);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b0f0() {
   return (neuron0x3b7d700()*0.0184536);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b130() {
   return (neuron0x3b7da40()*0.0119258);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b170() {
   return (neuron0x3b7dd80()*-0.0102911);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b1b0() {
   return (neuron0x3b7e0c0()*0.0230098);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b1f0() {
   return (neuron0x3b7e400()*0.00937721);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b230() {
   return (neuron0x3b7e740()*0.0014028);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b270() {
   return (neuron0x3b7ea80()*0.0201829);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b2b0() {
   return (neuron0x3b7edc0()*0.000952682);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b2f0() {
   return (neuron0x3b7f100()*0.206158);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b330() {
   return (neuron0x3b7f440()*-0.0302646);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b370() {
   return (neuron0x3b7f780()*-0.0118949);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b3b0() {
   return (neuron0x3b7fac0()*0.00148921);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ae40() {
   return (neuron0x3b7fe00()*0.00965358);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ae80() {
   return (neuron0x3b80360()*-0.00605107);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b500() {
   return (neuron0x3b806a0()*0.0178825);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b540() {
   return (neuron0x3b809e0()*0.0388062);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b580() {
   return (neuron0x3b80d20()*0.00370234);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b5c0() {
   return (neuron0x3b81060()*0.00708555);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b600() {
   return (neuron0x3b813a0()*-0.00362948);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b640() {
   return (neuron0x3b816e0()*-0.0523743);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b9c0() {
   return (neuron0x3b7ca90()*-0.147837);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ba00() {
   return (neuron0x3b7cd40()*0.0194558);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ba40() {
   return (neuron0x3b7d080()*1.2592);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ba80() {
   return (neuron0x3b7d3c0()*-0.0758827);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bac0() {
   return (neuron0x3b7d700()*-0.0174099);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bb00() {
   return (neuron0x3b7da40()*-0.0775928);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bb40() {
   return (neuron0x3b7dd80()*-0.498001);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bb80() {
   return (neuron0x3b7e0c0()*0.0515766);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bbc0() {
   return (neuron0x3b7e400()*-0.012475);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bc00() {
   return (neuron0x3b7e740()*0.114187);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bc40() {
   return (neuron0x3b7ea80()*-0.31783);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bc80() {
   return (neuron0x3b7edc0()*0.186746);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bcc0() {
   return (neuron0x3b7f100()*-0.766736);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bd00() {
   return (neuron0x3b7f440()*-0.319182);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bd40() {
   return (neuron0x3b7f780()*1.04901);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bd80() {
   return (neuron0x3b7fac0()*0.0248545);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b810() {
   return (neuron0x3b7fe00()*0.137861);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b850() {
   return (neuron0x3b80360()*0.205492);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bed0() {
   return (neuron0x3b806a0()*0.00805608);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bf10() {
   return (neuron0x3b809e0()*0.25569);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bf50() {
   return (neuron0x3b80d20()*-0.107663);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bf90() {
   return (neuron0x3b81060()*-0.589316);
}

double NNfunction_ns_chi01_sL::synapse0x3b9bfd0() {
   return (neuron0x3b813a0()*-0.188796);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c010() {
   return (neuron0x3b816e0()*0.0524863);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c390() {
   return (neuron0x3b7ca90()*0.0308205);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c3d0() {
   return (neuron0x3b7cd40()*-12.0879);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c410() {
   return (neuron0x3b7d080()*-0.246998);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c450() {
   return (neuron0x3b7d3c0()*0.0228466);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c490() {
   return (neuron0x3b7d700()*0.0212005);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c4d0() {
   return (neuron0x3b7da40()*0.0227358);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c510() {
   return (neuron0x3b7dd80()*0.00829968);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c550() {
   return (neuron0x3b7e0c0()*0.0250784);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c590() {
   return (neuron0x3b7e400()*-0.0589724);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c5d0() {
   return (neuron0x3b7e740()*0.0477794);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c610() {
   return (neuron0x3b7ea80()*-0.00918364);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c650() {
   return (neuron0x3b7edc0()*0.0343866);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c690() {
   return (neuron0x3b7f100()*0.209537);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c6d0() {
   return (neuron0x3b7f440()*-0.0387411);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c710() {
   return (neuron0x3b7f780()*-0.0446432);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c750() {
   return (neuron0x3b7fac0()*-0.00475628);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c1e0() {
   return (neuron0x3b7fe00()*-0.015376);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c220() {
   return (neuron0x3b80360()*-0.0326817);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c8a0() {
   return (neuron0x3b806a0()*0.000190754);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c8e0() {
   return (neuron0x3b809e0()*-0.00963624);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c920() {
   return (neuron0x3b80d20()*-0.0165966);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c960() {
   return (neuron0x3b81060()*0.00570643);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c9a0() {
   return (neuron0x3b813a0()*-0.0216558);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c9e0() {
   return (neuron0x3b816e0()*8.4901);
}

double NNfunction_ns_chi01_sL::synapse0x3b9cd60() {
   return (neuron0x3b7ca90()*0.00180866);
}

double NNfunction_ns_chi01_sL::synapse0x3b9cda0() {
   return (neuron0x3b7cd40()*0.0282603);
}

double NNfunction_ns_chi01_sL::synapse0x3b9cde0() {
   return (neuron0x3b7d080()*-0.57502);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ce20() {
   return (neuron0x3b7d3c0()*-0.104836);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ce60() {
   return (neuron0x3b7d700()*-0.0265659);
}

double NNfunction_ns_chi01_sL::synapse0x3b9cea0() {
   return (neuron0x3b7da40()*0.0470372);
}

double NNfunction_ns_chi01_sL::synapse0x3b9cee0() {
   return (neuron0x3b7dd80()*-0.00385697);
}

double NNfunction_ns_chi01_sL::synapse0x3b9cf20() {
   return (neuron0x3b7e0c0()*-0.0105404);
}

double NNfunction_ns_chi01_sL::synapse0x3b9cf60() {
   return (neuron0x3b7e400()*0.0890508);
}

double NNfunction_ns_chi01_sL::synapse0x3b9cfa0() {
   return (neuron0x3b7e740()*0.000636099);
}

double NNfunction_ns_chi01_sL::synapse0x3b9cfe0() {
   return (neuron0x3b7ea80()*0.0448062);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d020() {
   return (neuron0x3b7edc0()*-0.145424);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d060() {
   return (neuron0x3b7f100()*0.897939);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d0a0() {
   return (neuron0x3b7f440()*-0.177326);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d0e0() {
   return (neuron0x3b7f780()*-0.0234323);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d120() {
   return (neuron0x3b7fac0()*0.00770452);
}

double NNfunction_ns_chi01_sL::synapse0x3b9cbb0() {
   return (neuron0x3b7fe00()*-0.21551);
}

double NNfunction_ns_chi01_sL::synapse0x3b9cbf0() {
   return (neuron0x3b80360()*-0.222008);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d270() {
   return (neuron0x3b806a0()*-0.0533425);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d2b0() {
   return (neuron0x3b809e0()*-0.192223);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d2f0() {
   return (neuron0x3b80d20()*-0.000545301);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d330() {
   return (neuron0x3b81060()*0.064225);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d370() {
   return (neuron0x3b813a0()*0.0813826);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d3b0() {
   return (neuron0x3b816e0()*-0.00566737);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d730() {
   return (neuron0x3b7ca90()*0.0389661);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d770() {
   return (neuron0x3b7cd40()*-17.7847);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d7b0() {
   return (neuron0x3b7d080()*-2.29261);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d7f0() {
   return (neuron0x3b7d3c0()*0.00775177);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d830() {
   return (neuron0x3b7d700()*-0.0859703);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d870() {
   return (neuron0x3b7da40()*-0.0339455);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d8b0() {
   return (neuron0x3b7dd80()*-0.0180789);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d8f0() {
   return (neuron0x3b7e0c0()*-0.0311543);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d930() {
   return (neuron0x3b7e400()*0.0657405);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d970() {
   return (neuron0x3b7e740()*-0.00873837);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d9b0() {
   return (neuron0x3b7ea80()*0.0353018);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d9f0() {
   return (neuron0x3b7edc0()*0.0181956);
}

double NNfunction_ns_chi01_sL::synapse0x3b9da30() {
   return (neuron0x3b7f100()*0.083799);
}

double NNfunction_ns_chi01_sL::synapse0x3b9da70() {
   return (neuron0x3b7f440()*-0.00497217);
}

double NNfunction_ns_chi01_sL::synapse0x3b9dab0() {
   return (neuron0x3b7f780()*-0.0133309);
}

double NNfunction_ns_chi01_sL::synapse0x3b9daf0() {
   return (neuron0x3b7fac0()*0.0321563);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d580() {
   return (neuron0x3b7fe00()*0.0304968);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d5c0() {
   return (neuron0x3b80360()*0.0217638);
}

double NNfunction_ns_chi01_sL::synapse0x3b9dc40() {
   return (neuron0x3b806a0()*-0.0132777);
}

double NNfunction_ns_chi01_sL::synapse0x3b9dc80() {
   return (neuron0x3b809e0()*-0.0162632);
}

double NNfunction_ns_chi01_sL::synapse0x3b9dcc0() {
   return (neuron0x3b80d20()*0.0100026);
}

double NNfunction_ns_chi01_sL::synapse0x3b9dd00() {
   return (neuron0x3b81060()*0.0219903);
}

double NNfunction_ns_chi01_sL::synapse0x3b9dd40() {
   return (neuron0x3b813a0()*-0.00920181);
}

double NNfunction_ns_chi01_sL::synapse0x3b9dd80() {
   return (neuron0x3b816e0()*0.22641);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e100() {
   return (neuron0x3b7ca90()*-1.93667);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e140() {
   return (neuron0x3b7cd40()*0.617641);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e180() {
   return (neuron0x3b7d080()*0.706354);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e1c0() {
   return (neuron0x3b7d3c0()*0.390151);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e200() {
   return (neuron0x3b7d700()*0.0809709);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e240() {
   return (neuron0x3b7da40()*0.469931);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e280() {
   return (neuron0x3b7dd80()*-0.662594);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e2c0() {
   return (neuron0x3b7e0c0()*-0.666339);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e300() {
   return (neuron0x3b7e400()*-0.0155018);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e340() {
   return (neuron0x3b7e740()*1.03658);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e380() {
   return (neuron0x3b7ea80()*0.067529);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e3c0() {
   return (neuron0x3b7edc0()*-0.833041);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e400() {
   return (neuron0x3b7f100()*0.568986);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e440() {
   return (neuron0x3b7f440()*-0.541356);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e480() {
   return (neuron0x3b7f780()*-1.18222);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e4c0() {
   return (neuron0x3b7fac0()*0.304488);
}

double NNfunction_ns_chi01_sL::synapse0x3b9df50() {
   return (neuron0x3b7fe00()*-1.4909);
}

double NNfunction_ns_chi01_sL::synapse0x3b9df90() {
   return (neuron0x3b80360()*-0.260207);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e610() {
   return (neuron0x3b806a0()*-0.625118);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e650() {
   return (neuron0x3b809e0()*0.559341);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e690() {
   return (neuron0x3b80d20()*-0.31426);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e6d0() {
   return (neuron0x3b81060()*0.275234);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e710() {
   return (neuron0x3b813a0()*-0.0388692);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e750() {
   return (neuron0x3b816e0()*-1.94196);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ead0() {
   return (neuron0x3b7ca90()*0.006031);
}

double NNfunction_ns_chi01_sL::synapse0x3b9eb10() {
   return (neuron0x3b7cd40()*-0.315827);
}

double NNfunction_ns_chi01_sL::synapse0x3b9eb50() {
   return (neuron0x3b7d080()*-0.183843);
}

double NNfunction_ns_chi01_sL::synapse0x3b9eb90() {
   return (neuron0x3b7d3c0()*-0.515048);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ebd0() {
   return (neuron0x3b7d700()*-0.170422);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ec10() {
   return (neuron0x3b7da40()*-0.27966);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ec50() {
   return (neuron0x3b7dd80()*-0.333858);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ec90() {
   return (neuron0x3b7e0c0()*0.0854727);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ecd0() {
   return (neuron0x3b7e400()*-0.0130577);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ed10() {
   return (neuron0x3b7e740()*-0.245228);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ed50() {
   return (neuron0x3b7ea80()*-0.511923);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ed90() {
   return (neuron0x3b7edc0()*-0.179617);
}

double NNfunction_ns_chi01_sL::synapse0x3b9edd0() {
   return (neuron0x3b7f100()*0.662108);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ee10() {
   return (neuron0x3b7f440()*0.137656);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ee50() {
   return (neuron0x3b7f780()*0.0392169);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ee90() {
   return (neuron0x3b7fac0()*-0.302085);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e920() {
   return (neuron0x3b7fe00()*-0.310914);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e960() {
   return (neuron0x3b80360()*-0.0167288);
}

double NNfunction_ns_chi01_sL::synapse0x3b9efe0() {
   return (neuron0x3b806a0()*0.718759);
}

double NNfunction_ns_chi01_sL::synapse0x3b9f020() {
   return (neuron0x3b809e0()*0.0219957);
}

double NNfunction_ns_chi01_sL::synapse0x3b9f060() {
   return (neuron0x3b80d20()*-0.250894);
}

double NNfunction_ns_chi01_sL::synapse0x3b9f0a0() {
   return (neuron0x3b81060()*-0.775951);
}

double NNfunction_ns_chi01_sL::synapse0x3b9f0e0() {
   return (neuron0x3b813a0()*0.122592);
}

double NNfunction_ns_chi01_sL::synapse0x3b9f120() {
   return (neuron0x3b816e0()*0.305174);
}

double NNfunction_ns_chi01_sL::synapse0x3b87bd0() {
   return (neuron0x3b7ca90()*-0.00150728);
}

double NNfunction_ns_chi01_sL::synapse0x3b87c10() {
   return (neuron0x3b7cd40()*-6.22819);
}

double NNfunction_ns_chi01_sL::synapse0x3b87c50() {
   return (neuron0x3b7d080()*0.512696);
}

double NNfunction_ns_chi01_sL::synapse0x3b87c90() {
   return (neuron0x3b7d3c0()*0.0039979);
}

double NNfunction_ns_chi01_sL::synapse0x3b87cd0() {
   return (neuron0x3b7d700()*0.0216897);
}

double NNfunction_ns_chi01_sL::synapse0x3b87d10() {
   return (neuron0x3b7da40()*0.00382021);
}

double NNfunction_ns_chi01_sL::synapse0x3b87d50() {
   return (neuron0x3b7dd80()*-0.00512786);
}

double NNfunction_ns_chi01_sL::synapse0x3b87d90() {
   return (neuron0x3b7e0c0()*-0.00392731);
}

double NNfunction_ns_chi01_sL::synapse0x3b9f8b0() {
   return (neuron0x3b7e400()*0.000719818);
}

double NNfunction_ns_chi01_sL::synapse0x3b9f8f0() {
   return (neuron0x3b7e740()*-0.0235347);
}

double NNfunction_ns_chi01_sL::synapse0x3b9f930() {
   return (neuron0x3b7ea80()*0.000767079);
}

double NNfunction_ns_chi01_sL::synapse0x3b9f970() {
   return (neuron0x3b7edc0()*-0.0159104);
}

double NNfunction_ns_chi01_sL::synapse0x3b9f9b0() {
   return (neuron0x3b7f100()*-0.0319358);
}

double NNfunction_ns_chi01_sL::synapse0x3b9f9f0() {
   return (neuron0x3b7f440()*-0.000391538);
}

double NNfunction_ns_chi01_sL::synapse0x3b9fa30() {
   return (neuron0x3b7f780()*-0.00885033);
}

double NNfunction_ns_chi01_sL::synapse0x3b9fa70() {
   return (neuron0x3b7fac0()*-0.0227166);
}

double NNfunction_ns_chi01_sL::synapse0x3b9f2f0() {
   return (neuron0x3b7fe00()*0.00949199);
}

double NNfunction_ns_chi01_sL::synapse0x3b9f330() {
   return (neuron0x3b80360()*0.0145841);
}

double NNfunction_ns_chi01_sL::synapse0x3b9fbc0() {
   return (neuron0x3b806a0()*-0.0069041);
}

double NNfunction_ns_chi01_sL::synapse0x3b9fc00() {
   return (neuron0x3b809e0()*-0.0118835);
}

double NNfunction_ns_chi01_sL::synapse0x3b9fc40() {
   return (neuron0x3b80d20()*0.0283987);
}

double NNfunction_ns_chi01_sL::synapse0x3b9fc80() {
   return (neuron0x3b81060()*-0.00510296);
}

double NNfunction_ns_chi01_sL::synapse0x3b9fcc0() {
   return (neuron0x3b813a0()*-0.00840893);
}

double NNfunction_ns_chi01_sL::synapse0x3b9fd00() {
   return (neuron0x3b816e0()*-0.0983396);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0080() {
   return (neuron0x3b7ca90()*0.452423);
}

double NNfunction_ns_chi01_sL::synapse0x3ba00c0() {
   return (neuron0x3b7cd40()*0.000385011);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0100() {
   return (neuron0x3b7d080()*0.652119);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0140() {
   return (neuron0x3b7d3c0()*-0.466928);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0180() {
   return (neuron0x3b7d700()*-0.0394713);
}

double NNfunction_ns_chi01_sL::synapse0x3ba01c0() {
   return (neuron0x3b7da40()*-0.133914);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0200() {
   return (neuron0x3b7dd80()*0.19517);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0240() {
   return (neuron0x3b7e0c0()*0.360399);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0280() {
   return (neuron0x3b7e400()*-1.19817);
}

double NNfunction_ns_chi01_sL::synapse0x3ba02c0() {
   return (neuron0x3b7e740()*-0.767274);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0300() {
   return (neuron0x3b7ea80()*0.308841);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0340() {
   return (neuron0x3b7edc0()*-0.20958);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0380() {
   return (neuron0x3b7f100()*0.00474014);
}

double NNfunction_ns_chi01_sL::synapse0x3ba03c0() {
   return (neuron0x3b7f440()*-0.0458052);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0400() {
   return (neuron0x3b7f780()*0.76758);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0440() {
   return (neuron0x3b7fac0()*-0.0380886);
}

double NNfunction_ns_chi01_sL::synapse0x3b9fed0() {
   return (neuron0x3b7fe00()*0.610634);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ff10() {
   return (neuron0x3b80360()*-0.744635);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0590() {
   return (neuron0x3b806a0()*-0.591312);
}

double NNfunction_ns_chi01_sL::synapse0x3ba05d0() {
   return (neuron0x3b809e0()*0.286846);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0610() {
   return (neuron0x3b80d20()*0.0731371);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0650() {
   return (neuron0x3b81060()*0.191606);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0690() {
   return (neuron0x3b813a0()*-0.113437);
}

double NNfunction_ns_chi01_sL::synapse0x3ba06d0() {
   return (neuron0x3b816e0()*0.161538);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0a50() {
   return (neuron0x3b7ca90()*0.0824983);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0a90() {
   return (neuron0x3b7cd40()*-4.08639e-05);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0ad0() {
   return (neuron0x3b7d080()*0.308469);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0b10() {
   return (neuron0x3b7d3c0()*0.00646367);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0b50() {
   return (neuron0x3b7d700()*-0.000570659);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0b90() {
   return (neuron0x3b7da40()*0.014532);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0bd0() {
   return (neuron0x3b7dd80()*0.00874297);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0c10() {
   return (neuron0x3b7e0c0()*0.0172449);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0c50() {
   return (neuron0x3b7e400()*-0.0126012);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0c90() {
   return (neuron0x3b7e740()*0.0101742);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0cd0() {
   return (neuron0x3b7ea80()*-0.0315972);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0d10() {
   return (neuron0x3b7edc0()*0.00408392);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0d50() {
   return (neuron0x3b7f100()*0.134504);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0d90() {
   return (neuron0x3b7f440()*-0.0131568);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0dd0() {
   return (neuron0x3b7f780()*0.00335031);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0e10() {
   return (neuron0x3b7fac0()*-0.00462785);
}

double NNfunction_ns_chi01_sL::synapse0x3ba08a0() {
   return (neuron0x3b7fe00()*-0.00152694);
}

double NNfunction_ns_chi01_sL::synapse0x3ba08e0() {
   return (neuron0x3b80360()*-0.00619898);
}

double NNfunction_ns_chi01_sL::synapse0x3b91410() {
   return (neuron0x3b806a0()*0.00386279);
}

double NNfunction_ns_chi01_sL::synapse0x3b91450() {
   return (neuron0x3b809e0()*0.0228341);
}

double NNfunction_ns_chi01_sL::synapse0x3b91490() {
   return (neuron0x3b80d20()*-0.0129482);
}

double NNfunction_ns_chi01_sL::synapse0x3b914d0() {
   return (neuron0x3b81060()*-0.0308796);
}

double NNfunction_ns_chi01_sL::synapse0x3b91510() {
   return (neuron0x3b813a0()*0.00561355);
}

double NNfunction_ns_chi01_sL::synapse0x3b91550() {
   return (neuron0x3b816e0()*8.91642);
}

double NNfunction_ns_chi01_sL::synapse0x3b918d0() {
   return (neuron0x3b7ca90()*-0.00017836);
}

double NNfunction_ns_chi01_sL::synapse0x3b91910() {
   return (neuron0x3b7cd40()*0.00916087);
}

double NNfunction_ns_chi01_sL::synapse0x3b91950() {
   return (neuron0x3b7d080()*3.14182);
}

double NNfunction_ns_chi01_sL::synapse0x3b91990() {
   return (neuron0x3b7d3c0()*-0.000203426);
}

double NNfunction_ns_chi01_sL::synapse0x3b919d0() {
   return (neuron0x3b7d700()*-0.0291554);
}

double NNfunction_ns_chi01_sL::synapse0x3b91a10() {
   return (neuron0x3b7da40()*0.00264817);
}

double NNfunction_ns_chi01_sL::synapse0x3b91a50() {
   return (neuron0x3b7dd80()*0.0442051);
}

double NNfunction_ns_chi01_sL::synapse0x3b91a90() {
   return (neuron0x3b7e0c0()*-0.0291488);
}

double NNfunction_ns_chi01_sL::synapse0x3b91ad0() {
   return (neuron0x3b7e400()*0.00506555);
}

double NNfunction_ns_chi01_sL::synapse0x3b91b10() {
   return (neuron0x3b7e740()*0.0105542);
}

double NNfunction_ns_chi01_sL::synapse0x3b91b50() {
   return (neuron0x3b7ea80()*0.00223825);
}

double NNfunction_ns_chi01_sL::synapse0x3b91b90() {
   return (neuron0x3b7edc0()*0.00614045);
}

double NNfunction_ns_chi01_sL::synapse0x3b91bd0() {
   return (neuron0x3b7f100()*-0.27266);
}

double NNfunction_ns_chi01_sL::synapse0x3b91c10() {
   return (neuron0x3b7f440()*0.0569397);
}

double NNfunction_ns_chi01_sL::synapse0x3b91c50() {
   return (neuron0x3b7f780()*-0.0199221);
}

double NNfunction_ns_chi01_sL::synapse0x3b91c90() {
   return (neuron0x3b7fac0()*-0.00179585);
}

double NNfunction_ns_chi01_sL::synapse0x3b91720() {
   return (neuron0x3b7fe00()*-0.0729877);
}

double NNfunction_ns_chi01_sL::synapse0x3b91760() {
   return (neuron0x3b80360()*-0.0166703);
}

double NNfunction_ns_chi01_sL::synapse0x3b91de0() {
   return (neuron0x3b806a0()*0.0109449);
}

double NNfunction_ns_chi01_sL::synapse0x3b91e20() {
   return (neuron0x3b809e0()*0.00985257);
}

double NNfunction_ns_chi01_sL::synapse0x3b91e60() {
   return (neuron0x3b80d20()*-0.0222826);
}

double NNfunction_ns_chi01_sL::synapse0x3b91ea0() {
   return (neuron0x3b81060()*0.0246957);
}

double NNfunction_ns_chi01_sL::synapse0x3b91ee0() {
   return (neuron0x3b813a0()*-0.00764468);
}

double NNfunction_ns_chi01_sL::synapse0x3b91f20() {
   return (neuron0x3b816e0()*-0.21948);
}

double NNfunction_ns_chi01_sL::synapse0x3b922a0() {
   return (neuron0x3b7ca90()*-0.0384933);
}

double NNfunction_ns_chi01_sL::synapse0x3b922e0() {
   return (neuron0x3b7cd40()*-9.63211);
}

double NNfunction_ns_chi01_sL::synapse0x3b92320() {
   return (neuron0x3b7d080()*-0.408436);
}

double NNfunction_ns_chi01_sL::synapse0x3b92360() {
   return (neuron0x3b7d3c0()*0.0534918);
}

double NNfunction_ns_chi01_sL::synapse0x3b923a0() {
   return (neuron0x3b7d700()*0.0697774);
}

double NNfunction_ns_chi01_sL::synapse0x3b923e0() {
   return (neuron0x3b7da40()*-0.00215483);
}

double NNfunction_ns_chi01_sL::synapse0x3b92420() {
   return (neuron0x3b7dd80()*0.00866425);
}

double NNfunction_ns_chi01_sL::synapse0x3b92460() {
   return (neuron0x3b7e0c0()*0.0558528);
}

double NNfunction_ns_chi01_sL::synapse0x3b924a0() {
   return (neuron0x3b7e400()*-0.0758219);
}

double NNfunction_ns_chi01_sL::synapse0x3b924e0() {
   return (neuron0x3b7e740()*0.0480712);
}

double NNfunction_ns_chi01_sL::synapse0x3b92520() {
   return (neuron0x3b7ea80()*-0.0220124);
}

double NNfunction_ns_chi01_sL::synapse0x3b92560() {
   return (neuron0x3b7edc0()*0.0866502);
}

double NNfunction_ns_chi01_sL::synapse0x3b925a0() {
   return (neuron0x3b7f100()*0.510103);
}

double NNfunction_ns_chi01_sL::synapse0x3b925e0() {
   return (neuron0x3b7f440()*-0.0229769);
}

double NNfunction_ns_chi01_sL::synapse0x3b92620() {
   return (neuron0x3b7f780()*-0.0592538);
}

double NNfunction_ns_chi01_sL::synapse0x3b92660() {
   return (neuron0x3b7fac0()*-0.0297726);
}

double NNfunction_ns_chi01_sL::synapse0x3b920f0() {
   return (neuron0x3b7fe00()*0.0123711);
}

double NNfunction_ns_chi01_sL::synapse0x3b92130() {
   return (neuron0x3b80360()*-0.0365126);
}

double NNfunction_ns_chi01_sL::synapse0x3b927b0() {
   return (neuron0x3b806a0()*0.00670052);
}

double NNfunction_ns_chi01_sL::synapse0x3b927f0() {
   return (neuron0x3b809e0()*0.00963113);
}

double NNfunction_ns_chi01_sL::synapse0x3b92830() {
   return (neuron0x3b80d20()*0.00273922);
}

double NNfunction_ns_chi01_sL::synapse0x3b92870() {
   return (neuron0x3b81060()*-0.0319888);
}

double NNfunction_ns_chi01_sL::synapse0x3b928b0() {
   return (neuron0x3b813a0()*-0.0293353);
}

double NNfunction_ns_chi01_sL::synapse0x3b928f0() {
   return (neuron0x3b816e0()*8.49173);
}

double NNfunction_ns_chi01_sL::synapse0x3b92c70() {
   return (neuron0x3b7ca90()*-1.10488);
}

double NNfunction_ns_chi01_sL::synapse0x3b92cb0() {
   return (neuron0x3b7cd40()*0.0821248);
}

double NNfunction_ns_chi01_sL::synapse0x3b92cf0() {
   return (neuron0x3b7d080()*-0.863117);
}

double NNfunction_ns_chi01_sL::synapse0x3b92d30() {
   return (neuron0x3b7d3c0()*0.673969);
}

double NNfunction_ns_chi01_sL::synapse0x3b92d70() {
   return (neuron0x3b7d700()*0.357653);
}

double NNfunction_ns_chi01_sL::synapse0x3b92db0() {
   return (neuron0x3b7da40()*1.07294);
}

double NNfunction_ns_chi01_sL::synapse0x3b92df0() {
   return (neuron0x3b7dd80()*-0.271642);
}

double NNfunction_ns_chi01_sL::synapse0x3b92e30() {
   return (neuron0x3b7e0c0()*0.106411);
}

double NNfunction_ns_chi01_sL::synapse0x3b92e70() {
   return (neuron0x3b7e400()*1.00322);
}

double NNfunction_ns_chi01_sL::synapse0x3b92eb0() {
   return (neuron0x3b7e740()*1.03057);
}

double NNfunction_ns_chi01_sL::synapse0x3b92ef0() {
   return (neuron0x3b7ea80()*0.267516);
}

double NNfunction_ns_chi01_sL::synapse0x3b92f30() {
   return (neuron0x3b7edc0()*-0.857194);
}

double NNfunction_ns_chi01_sL::synapse0x3b92f70() {
   return (neuron0x3b7f100()*-0.557932);
}

double NNfunction_ns_chi01_sL::synapse0x3b92fb0() {
   return (neuron0x3b7f440()*-0.402393);
}

double NNfunction_ns_chi01_sL::synapse0x3b92ff0() {
   return (neuron0x3b7f780()*-1.12618);
}

double NNfunction_ns_chi01_sL::synapse0x3b93030() {
   return (neuron0x3b7fac0()*0.493314);
}

double NNfunction_ns_chi01_sL::synapse0x3b92ac0() {
   return (neuron0x3b7fe00()*-0.798409);
}

double NNfunction_ns_chi01_sL::synapse0x3b92b00() {
   return (neuron0x3b80360()*0.776099);
}

double NNfunction_ns_chi01_sL::synapse0x3b93180() {
   return (neuron0x3b806a0()*-0.303462);
}

double NNfunction_ns_chi01_sL::synapse0x3b931c0() {
   return (neuron0x3b809e0()*0.413349);
}

double NNfunction_ns_chi01_sL::synapse0x3b93200() {
   return (neuron0x3b80d20()*0.319055);
}

double NNfunction_ns_chi01_sL::synapse0x3b93240() {
   return (neuron0x3b81060()*-0.48029);
}

double NNfunction_ns_chi01_sL::synapse0x3b93280() {
   return (neuron0x3b813a0()*0.615901);
}

double NNfunction_ns_chi01_sL::synapse0x3b932c0() {
   return (neuron0x3b816e0()*-1.49232);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5190() {
   return (neuron0x3b7ca90()*0.290322);
}

double NNfunction_ns_chi01_sL::synapse0x3ba51d0() {
   return (neuron0x3b7cd40()*0.258627);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5210() {
   return (neuron0x3b7d080()*-0.488344);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5250() {
   return (neuron0x3b7d3c0()*0.112034);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5290() {
   return (neuron0x3b7d700()*-0.1131);
}

double NNfunction_ns_chi01_sL::synapse0x3ba52d0() {
   return (neuron0x3b7da40()*0.0511357);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5310() {
   return (neuron0x3b7dd80()*-0.159461);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5350() {
   return (neuron0x3b7e0c0()*0.590029);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5390() {
   return (neuron0x3b7e400()*0.114641);
}

double NNfunction_ns_chi01_sL::synapse0x3ba53d0() {
   return (neuron0x3b7e740()*0.0380343);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5410() {
   return (neuron0x3b7ea80()*-0.00211481);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5450() {
   return (neuron0x3b7edc0()*-0.0236499);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5490() {
   return (neuron0x3b7f100()*-0.986509);
}

double NNfunction_ns_chi01_sL::synapse0x3ba54d0() {
   return (neuron0x3b7f440()*-0.511931);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5510() {
   return (neuron0x3b7f780()*-0.197012);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5550() {
   return (neuron0x3b7fac0()*0.834832);
}

double NNfunction_ns_chi01_sL::synapse0x3b93300() {
   return (neuron0x3b7fe00()*-0.553734);
}

double NNfunction_ns_chi01_sL::synapse0x3b93340() {
   return (neuron0x3b80360()*0.050871);
}

double NNfunction_ns_chi01_sL::synapse0x3ba56a0() {
   return (neuron0x3b806a0()*0.231056);
}

double NNfunction_ns_chi01_sL::synapse0x3ba56e0() {
   return (neuron0x3b809e0()*0.224009);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5720() {
   return (neuron0x3b80d20()*0.0465629);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5760() {
   return (neuron0x3b81060()*-0.311544);
}

double NNfunction_ns_chi01_sL::synapse0x3ba57a0() {
   return (neuron0x3b813a0()*0.115387);
}

double NNfunction_ns_chi01_sL::synapse0x3ba57e0() {
   return (neuron0x3b816e0()*-0.104085);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5b60() {
   return (neuron0x3b7ca90()*-0.686048);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5ba0() {
   return (neuron0x3b7cd40()*0.14984);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5be0() {
   return (neuron0x3b7d080()*1.3396);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5c20() {
   return (neuron0x3b7d3c0()*1.46526);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5c60() {
   return (neuron0x3b7d700()*0.123468);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5ca0() {
   return (neuron0x3b7da40()*-0.077991);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5ce0() {
   return (neuron0x3b7dd80()*0.142152);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5d20() {
   return (neuron0x3b7e0c0()*-0.134796);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5d60() {
   return (neuron0x3b7e400()*0.202161);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5da0() {
   return (neuron0x3b7e740()*0.355475);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5de0() {
   return (neuron0x3b7ea80()*0.108286);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5e20() {
   return (neuron0x3b7edc0()*0.105411);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5e60() {
   return (neuron0x3b7f100()*-0.428247);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5ea0() {
   return (neuron0x3b7f440()*0.119444);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5ee0() {
   return (neuron0x3b7f780()*-0.396267);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5f20() {
   return (neuron0x3b7fac0()*0.065633);
}

double NNfunction_ns_chi01_sL::synapse0x3ba59b0() {
   return (neuron0x3b7fe00()*-0.00668525);
}

double NNfunction_ns_chi01_sL::synapse0x3ba59f0() {
   return (neuron0x3b80360()*0.142756);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6070() {
   return (neuron0x3b806a0()*0.10731);
}

double NNfunction_ns_chi01_sL::synapse0x3ba60b0() {
   return (neuron0x3b809e0()*0.514557);
}

double NNfunction_ns_chi01_sL::synapse0x3ba60f0() {
   return (neuron0x3b80d20()*0.238256);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6130() {
   return (neuron0x3b81060()*-0.135843);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6170() {
   return (neuron0x3b813a0()*-0.609594);
}

double NNfunction_ns_chi01_sL::synapse0x3ba61b0() {
   return (neuron0x3b816e0()*1.00557);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6530() {
   return (neuron0x3b7ca90()*0.0344942);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6570() {
   return (neuron0x3b7cd40()*0.0386932);
}

double NNfunction_ns_chi01_sL::synapse0x3ba65b0() {
   return (neuron0x3b7d080()*-1.28895);
}

double NNfunction_ns_chi01_sL::synapse0x3ba65f0() {
   return (neuron0x3b7d3c0()*0.169207);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6630() {
   return (neuron0x3b7d700()*-0.179539);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6670() {
   return (neuron0x3b7da40()*-0.0120198);
}

double NNfunction_ns_chi01_sL::synapse0x3ba66b0() {
   return (neuron0x3b7dd80()*-0.0335068);
}

double NNfunction_ns_chi01_sL::synapse0x3ba66f0() {
   return (neuron0x3b7e0c0()*0.0381235);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6730() {
   return (neuron0x3b7e400()*-0.0560657);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6770() {
   return (neuron0x3b7e740()*-0.212932);
}

double NNfunction_ns_chi01_sL::synapse0x3ba67b0() {
   return (neuron0x3b7ea80()*-0.00575699);
}

double NNfunction_ns_chi01_sL::synapse0x3ba67f0() {
   return (neuron0x3b7edc0()*-0.18339);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6830() {
   return (neuron0x3b7f100()*-0.873219);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6870() {
   return (neuron0x3b7f440()*0.104953);
}

double NNfunction_ns_chi01_sL::synapse0x3ba68b0() {
   return (neuron0x3b7f780()*-0.076688);
}

double NNfunction_ns_chi01_sL::synapse0x3ba68f0() {
   return (neuron0x3b7fac0()*-0.0899098);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6380() {
   return (neuron0x3b7fe00()*-0.0694825);
}

double NNfunction_ns_chi01_sL::synapse0x3ba63c0() {
   return (neuron0x3b80360()*0.0119853);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6a40() {
   return (neuron0x3b806a0()*-0.052155);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6a80() {
   return (neuron0x3b809e0()*-0.0664233);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6ac0() {
   return (neuron0x3b80d20()*-0.0392566);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6b00() {
   return (neuron0x3b81060()*-0.0915539);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6b40() {
   return (neuron0x3b813a0()*-0.0868777);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6b80() {
   return (neuron0x3b816e0()*-0.0546555);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6f00() {
   return (neuron0x3b7ca90()*-0.00141186);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6f40() {
   return (neuron0x3b7cd40()*0.00125741);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6f80() {
   return (neuron0x3b7d080()*0.0841908);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6fc0() {
   return (neuron0x3b7d3c0()*-2.66215);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7000() {
   return (neuron0x3b7d700()*-0.00150613);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7040() {
   return (neuron0x3b7da40()*-0.00568031);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7080() {
   return (neuron0x3b7dd80()*-0.0218369);
}

double NNfunction_ns_chi01_sL::synapse0x3ba70c0() {
   return (neuron0x3b7e0c0()*0.000633202);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7100() {
   return (neuron0x3b7e400()*-0.0107263);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7140() {
   return (neuron0x3b7e740()*0.00903418);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7180() {
   return (neuron0x3b7ea80()*0.00233409);
}

double NNfunction_ns_chi01_sL::synapse0x3ba71c0() {
   return (neuron0x3b7edc0()*-0.00934352);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7200() {
   return (neuron0x3b7f100()*-0.150603);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7240() {
   return (neuron0x3b7f440()*-0.0122031);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7280() {
   return (neuron0x3b7f780()*-0.0172359);
}

double NNfunction_ns_chi01_sL::synapse0x3ba72c0() {
   return (neuron0x3b7fac0()*0.00684224);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6d50() {
   return (neuron0x3b7fe00()*-0.0188613);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6d90() {
   return (neuron0x3b80360()*-0.00755244);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7410() {
   return (neuron0x3b806a0()*0.00702058);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7450() {
   return (neuron0x3b809e0()*-0.00379155);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7490() {
   return (neuron0x3b80d20()*-0.00121612);
}

double NNfunction_ns_chi01_sL::synapse0x3ba74d0() {
   return (neuron0x3b81060()*0.0147967);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7510() {
   return (neuron0x3b813a0()*0.00379437);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7550() {
   return (neuron0x3b816e0()*0.0291876);
}

double NNfunction_ns_chi01_sL::synapse0x39473c0() {
   return (neuron0x3b81b50()*-0.684149);
}

double NNfunction_ns_chi01_sL::synapse0x3947400() {
   return (neuron0x3b82390()*-0.00578844);
}

double NNfunction_ns_chi01_sL::synapse0x3b83f00() {
   return (neuron0x3b82e70()*0.931682);
}

double NNfunction_ns_chi01_sL::synapse0x3b83f40() {
   return (neuron0x3b82910()*0.161221);
}

double NNfunction_ns_chi01_sL::synapse0x3b859d0() {
   return (neuron0x3b83c50()*0.140714);
}

double NNfunction_ns_chi01_sL::synapse0x3b85a10() {
   return (neuron0x3b85720()*-0.0612232);
}

double NNfunction_ns_chi01_sL::synapse0x3b867a0() {
   return (neuron0x3b864f0()*0.186072);
}

double NNfunction_ns_chi01_sL::synapse0x3b867e0() {
   return (neuron0x3b86ec0()*0.509493);
}

double NNfunction_ns_chi01_sL::synapse0x3b87170() {
   return (neuron0x3b87890()*0.441265);
}

double NNfunction_ns_chi01_sL::synapse0x3b871b0() {
   return (neuron0x3b88370()*-1.18497);
}

double NNfunction_ns_chi01_sL::synapse0x3b87b40() {
   return (neuron0x3b88d40()*-0.0726066);
}

double NNfunction_ns_chi01_sL::synapse0x3b87b80() {
   return (neuron0x3b85e20()*0.283123);
}

double NNfunction_ns_chi01_sL::synapse0x3b88620() {
   return (neuron0x3b8a8f0()*0.874659);
}

double NNfunction_ns_chi01_sL::synapse0x3b88660() {
   return (neuron0x3b8b2c0()*0.0587328);
}

double NNfunction_ns_chi01_sL::synapse0x3b88ff0() {
   return (neuron0x3b8bc90()*0.090013);
}

double NNfunction_ns_chi01_sL::synapse0x3b89030() {
   return (neuron0x3b8c660()*-1.20469);
}

double NNfunction_ns_chi01_sL::synapse0x3b860d0() {
   return (neuron0x3b8e470()*0.0787735);
}

double NNfunction_ns_chi01_sL::synapse0x3b86110() {
   return (neuron0x3b8e750()*3.24629);
}

double NNfunction_ns_chi01_sL::synapse0x3b8aba0() {
   return (neuron0x3b8f120()*0.00289637);
}

double NNfunction_ns_chi01_sL::synapse0x3b8abe0() {
   return (neuron0x3b8faf0()*-0.0117282);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b570() {
   return (neuron0x3b904c0()*0.0332637);
}

double NNfunction_ns_chi01_sL::synapse0x3b8b5b0() {
   return (neuron0x3b90e90()*0.132624);
}

double NNfunction_ns_chi01_sL::synapse0x3b8bf40() {
   return (neuron0x3b899e0()*0.38971);
}

double NNfunction_ns_chi01_sL::synapse0x3b8bf80() {
   return (neuron0x3b8a3b0()*-0.876207);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c910() {
   return (neuron0x3b93c20()*0.127704);
}

double NNfunction_ns_chi01_sL::synapse0x3b8c950() {
   return (neuron0x3b945f0()*-0.0474294);
}

double NNfunction_ns_chi01_sL::synapse0x3b7f9a0() {
   return (neuron0x3b94fc0()*0.0308493);
}

double NNfunction_ns_chi01_sL::synapse0x3b7f9e0() {
   return (neuron0x3b95990()*0.227078);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ea00() {
   return (neuron0x3b96360()*0.178776);
}

double NNfunction_ns_chi01_sL::synapse0x3b8ea40() {
   return (neuron0x3b96d30()*-1.85174);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f3d0() {
   return (neuron0x3b97700()*0.510527);
}

double NNfunction_ns_chi01_sL::synapse0x3b8f410() {
   return (neuron0x3b980d0()*-0.0272152);
}

double NNfunction_ns_chi01_sL::synapse0x3b8fda0() {
   return (neuron0x3b8e160()*0.0643364);
}

double NNfunction_ns_chi01_sL::synapse0x3b8fde0() {
   return (neuron0x3b9acb0()*-0.696621);
}

double NNfunction_ns_chi01_sL::synapse0x3b90770() {
   return (neuron0x3b9b680()*0.424425);
}

double NNfunction_ns_chi01_sL::synapse0x3b907b0() {
   return (neuron0x3b9c050()*-2.56896);
}

double NNfunction_ns_chi01_sL::synapse0x3b91140() {
   return (neuron0x3b9ca20()*0.11418);
}

double NNfunction_ns_chi01_sL::synapse0x3b91180() {
   return (neuron0x3b9d3f0()*2.64787);
}

double NNfunction_ns_chi01_sL::synapse0x3b89c90() {
   return (neuron0x3b9ddc0()*-0.0293349);
}

double NNfunction_ns_chi01_sL::synapse0x3b89cd0() {
   return (neuron0x3b9e790()*0.341307);
}

double NNfunction_ns_chi01_sL::synapse0x3b93540() {
   return (neuron0x3b9f160()*2.67465);
}

double NNfunction_ns_chi01_sL::synapse0x3b93580() {
   return (neuron0x3b9fd40()*0.0693182);
}

double NNfunction_ns_chi01_sL::synapse0x3b93ed0() {
   return (neuron0x3ba0710()*-0.88142);
}

double NNfunction_ns_chi01_sL::synapse0x3b93f10() {
   return (neuron0x3b91590()*0.984901);
}

double NNfunction_ns_chi01_sL::synapse0x3b948a0() {
   return (neuron0x3b91f60()*1.33638);
}

double NNfunction_ns_chi01_sL::synapse0x3b948e0() {
   return (neuron0x3b92930()*-0.0464185);
}

double NNfunction_ns_chi01_sL::synapse0x3b95270() {
   return (neuron0x3ba4f70()*-0.0457997);
}

double NNfunction_ns_chi01_sL::synapse0x3b952b0() {
   return (neuron0x3ba5820()*0.0967521);
}

double NNfunction_ns_chi01_sL::synapse0x3b95c40() {
   return (neuron0x3ba61f0()*-0.010093);
}

double NNfunction_ns_chi01_sL::synapse0x3b95c80() {
   return (neuron0x3ba6bc0()*0.2752);
}

double NNfunction_ns_chi01_sL::synapse0x3b98380() {
   return (neuron0x3b81b50()*0.292671);
}

double NNfunction_ns_chi01_sL::synapse0x3b983c0() {
   return (neuron0x3b82390()*0.00539969);
}

double NNfunction_ns_chi01_sL::synapse0x3b8d940() {
   return (neuron0x3b82e70()*-0.260379);
}

double NNfunction_ns_chi01_sL::synapse0x3b8d980() {
   return (neuron0x3b82910()*-0.623015);
}

double NNfunction_ns_chi01_sL::synapse0x3b9af60() {
   return (neuron0x3b83c50()*0.130587);
}

double NNfunction_ns_chi01_sL::synapse0x3b9afa0() {
   return (neuron0x3b85720()*0.0972711);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b930() {
   return (neuron0x3b864f0()*-0.0698589);
}

double NNfunction_ns_chi01_sL::synapse0x3b9b970() {
   return (neuron0x3b86ec0()*2.14507);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c300() {
   return (neuron0x3b87890()*-0.653613);
}

double NNfunction_ns_chi01_sL::synapse0x3b9c340() {
   return (neuron0x3b88370()*-3);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ccd0() {
   return (neuron0x3b88d40()*0.00565876);
}

double NNfunction_ns_chi01_sL::synapse0x3b9cd10() {
   return (neuron0x3b85e20()*-2.21344);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d6a0() {
   return (neuron0x3b8a8f0()*-0.563199);
}

double NNfunction_ns_chi01_sL::synapse0x3b9d6e0() {
   return (neuron0x3b8b2c0()*-0.0604317);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e070() {
   return (neuron0x3b8bc90()*-0.0524979);
}

double NNfunction_ns_chi01_sL::synapse0x3b9e0b0() {
   return (neuron0x3b8c660()*1.79752);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ea40() {
   return (neuron0x3b8e470()*-0.0451662);
}

double NNfunction_ns_chi01_sL::synapse0x3b9ea80() {
   return (neuron0x3b8e750()*0.52159);
}

double NNfunction_ns_chi01_sL::synapse0x3b9f410() {
   return (neuron0x3b8f120()*-2.46576);
}

double NNfunction_ns_chi01_sL::synapse0x3b9f450() {
   return (neuron0x3b8faf0()*-0.0069659);
}

double NNfunction_ns_chi01_sL::synapse0x3b9fff0() {
   return (neuron0x3b904c0()*-0.033696);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0030() {
   return (neuron0x3b90e90()*-0.585632);
}

double NNfunction_ns_chi01_sL::synapse0x3ba09c0() {
   return (neuron0x3b899e0()*-1.565);
}

double NNfunction_ns_chi01_sL::synapse0x3ba0a00() {
   return (neuron0x3b8a3b0()*-0.202636);
}

double NNfunction_ns_chi01_sL::synapse0x3b91840() {
   return (neuron0x3b93c20()*-0.0642328);
}

double NNfunction_ns_chi01_sL::synapse0x3b91880() {
   return (neuron0x3b945f0()*0.427425);
}

double NNfunction_ns_chi01_sL::synapse0x3b92210() {
   return (neuron0x3b94fc0()*-0.0998884);
}

double NNfunction_ns_chi01_sL::synapse0x3b92250() {
   return (neuron0x3b95990()*-3.11946);
}

double NNfunction_ns_chi01_sL::synapse0x3b92be0() {
   return (neuron0x3b96360()*-0.109168);
}

double NNfunction_ns_chi01_sL::synapse0x3b92c20() {
   return (neuron0x3b96d30()*3.34266);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5100() {
   return (neuron0x3b97700()*-0.247912);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5140() {
   return (neuron0x3b980d0()*-2.08548);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5ad0() {
   return (neuron0x3b8e160()*-0.0906582);
}

double NNfunction_ns_chi01_sL::synapse0x3ba5b10() {
   return (neuron0x3b9acb0()*3.32297);
}

double NNfunction_ns_chi01_sL::synapse0x3ba64a0() {
   return (neuron0x3b9b680()*-0.4111);
}

double NNfunction_ns_chi01_sL::synapse0x3ba64e0() {
   return (neuron0x3b9c050()*1.81264);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6e70() {
   return (neuron0x3b9ca20()*-0.262151);
}

double NNfunction_ns_chi01_sL::synapse0x3ba6eb0() {
   return (neuron0x3b9d3f0()*2.88744);
}

double NNfunction_ns_chi01_sL::synapse0x3b81e00() {
   return (neuron0x3b9ddc0()*-0.0226283);
}

double NNfunction_ns_chi01_sL::synapse0x3b81e40() {
   return (neuron0x3b9e790()*-0.141199);
}

double NNfunction_ns_chi01_sL::synapse0x3b96610() {
   return (neuron0x3b9f160()*-3.58642);
}

double NNfunction_ns_chi01_sL::synapse0x3b96650() {
   return (neuron0x3b9fd40()*-0.058109);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7590() {
   return (neuron0x3ba0710()*2.99024);
}

double NNfunction_ns_chi01_sL::synapse0x3ba75d0() {
   return (neuron0x3b91590()*-0.888604);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7610() {
   return (neuron0x3b91f60()*-0.548945);
}

double NNfunction_ns_chi01_sL::synapse0x3ba7650() {
   return (neuron0x3b92930()*0.0539313);
}

double NNfunction_ns_chi01_sL::synapse0x3bae500() {
   return (neuron0x3ba4f70()*-0.232804);
}

double NNfunction_ns_chi01_sL::synapse0x3bae540() {
   return (neuron0x3ba5820()*-0.110686);
}

double NNfunction_ns_chi01_sL::synapse0x3bae580() {
   return (neuron0x3ba61f0()*0.594358);
}

double NNfunction_ns_chi01_sL::synapse0x3bae5c0() {
   return (neuron0x3ba6bc0()*1.93265);
}

double NNfunction_ns_chi01_sL::synapse0x3bae940() {
   return (neuron0x3b81b50()*-0.200669);
}

double NNfunction_ns_chi01_sL::synapse0x3bae980() {
   return (neuron0x3b82390()*0.0732979);
}

double NNfunction_ns_chi01_sL::synapse0x3bae9c0() {
   return (neuron0x3b82e70()*0.250169);
}

double NNfunction_ns_chi01_sL::synapse0x3baea00() {
   return (neuron0x3b82910()*0.0826848);
}

double NNfunction_ns_chi01_sL::synapse0x3baea40() {
   return (neuron0x3b83c50()*-4.02182);
}

double NNfunction_ns_chi01_sL::synapse0x3baea80() {
   return (neuron0x3b85720()*-0.0750825);
}

double NNfunction_ns_chi01_sL::synapse0x3baeac0() {
   return (neuron0x3b864f0()*-0.0599593);
}

double NNfunction_ns_chi01_sL::synapse0x3baeb00() {
   return (neuron0x3b86ec0()*-4.36913);
}

double NNfunction_ns_chi01_sL::synapse0x3baeb40() {
   return (neuron0x3b87890()*-3.54668);
}

double NNfunction_ns_chi01_sL::synapse0x3baeb80() {
   return (neuron0x3b88370()*5.2507);
}

double NNfunction_ns_chi01_sL::synapse0x3baebc0() {
   return (neuron0x3b88d40()*0.0636286);
}

double NNfunction_ns_chi01_sL::synapse0x3baec00() {
   return (neuron0x3b85e20()*-0.554949);
}

double NNfunction_ns_chi01_sL::synapse0x3baec40() {
   return (neuron0x3b8a8f0()*-0.149337);
}

double NNfunction_ns_chi01_sL::synapse0x3baec80() {
   return (neuron0x3b8b2c0()*0.0484493);
}

double NNfunction_ns_chi01_sL::synapse0x3baecc0() {
   return (neuron0x3b8bc90()*-0.0334118);
}

double NNfunction_ns_chi01_sL::synapse0x3baed00() {
   return (neuron0x3b8c660()*-1.17573);
}

double NNfunction_ns_chi01_sL::synapse0x3bae790() {
   return (neuron0x3b8e470()*0.104919);
}

double NNfunction_ns_chi01_sL::synapse0x3bae7d0() {
   return (neuron0x3b8e750()*-0.19676);
}

double NNfunction_ns_chi01_sL::synapse0x3baee50() {
   return (neuron0x3b8f120()*3.11389);
}

double NNfunction_ns_chi01_sL::synapse0x3baee90() {
   return (neuron0x3b8faf0()*0.0413843);
}

double NNfunction_ns_chi01_sL::synapse0x3baeed0() {
   return (neuron0x3b904c0()*0.0628237);
}

double NNfunction_ns_chi01_sL::synapse0x3baef10() {
   return (neuron0x3b90e90()*2.34503);
}

double NNfunction_ns_chi01_sL::synapse0x3baef50() {
   return (neuron0x3b899e0()*0.0370236);
}

double NNfunction_ns_chi01_sL::synapse0x3baef90() {
   return (neuron0x3b8a3b0()*1.47359);
}

double NNfunction_ns_chi01_sL::synapse0x3baefd0() {
   return (neuron0x3b93c20()*0.179985);
}

double NNfunction_ns_chi01_sL::synapse0x3baf010() {
   return (neuron0x3b945f0()*-0.00835369);
}

double NNfunction_ns_chi01_sL::synapse0x3baf050() {
   return (neuron0x3b94fc0()*0.0563935);
}

double NNfunction_ns_chi01_sL::synapse0x3baf090() {
   return (neuron0x3b95990()*2.09994);
}

double NNfunction_ns_chi01_sL::synapse0x3baf0d0() {
   return (neuron0x3b96360()*-0.0121191);
}

double NNfunction_ns_chi01_sL::synapse0x3baf110() {
   return (neuron0x3b96d30()*-0.39566);
}

double NNfunction_ns_chi01_sL::synapse0x3baf150() {
   return (neuron0x3b97700()*0.101625);
}

double NNfunction_ns_chi01_sL::synapse0x3baf190() {
   return (neuron0x3b980d0()*3.11909);
}

double NNfunction_ns_chi01_sL::synapse0x3baed40() {
   return (neuron0x3b8e160()*0.0465102);
}

double NNfunction_ns_chi01_sL::synapse0x3baed80() {
   return (neuron0x3b9acb0()*-1.13995);
}

double NNfunction_ns_chi01_sL::synapse0x3baedc0() {
   return (neuron0x3b9b680()*0.00707997);
}

double NNfunction_ns_chi01_sL::synapse0x3baee00() {
   return (neuron0x3b9c050()*0.984917);
}

double NNfunction_ns_chi01_sL::synapse0x3baf3e0() {
   return (neuron0x3b9ca20()*0.644243);
}

double NNfunction_ns_chi01_sL::synapse0x3baf420() {
   return (neuron0x3b9d3f0()*1.34301);
}

double NNfunction_ns_chi01_sL::synapse0x3baf460() {
   return (neuron0x3b9ddc0()*0.0527532);
}

double NNfunction_ns_chi01_sL::synapse0x3baf4a0() {
   return (neuron0x3b9e790()*0.130649);
}

double NNfunction_ns_chi01_sL::synapse0x3baf4e0() {
   return (neuron0x3b9f160()*-1.79083);
}

double NNfunction_ns_chi01_sL::synapse0x3baf520() {
   return (neuron0x3b9fd40()*-0.0451256);
}

double NNfunction_ns_chi01_sL::synapse0x3baf560() {
   return (neuron0x3ba0710()*-0.700495);
}

double NNfunction_ns_chi01_sL::synapse0x3baf5a0() {
   return (neuron0x3b91590()*0.726989);
}

double NNfunction_ns_chi01_sL::synapse0x3baf5e0() {
   return (neuron0x3b91f60()*-0.729089);
}

double NNfunction_ns_chi01_sL::synapse0x3baf620() {
   return (neuron0x3b92930()*-0.0699028);
}

double NNfunction_ns_chi01_sL::synapse0x3baf660() {
   return (neuron0x3ba4f70()*0.141943);
}

double NNfunction_ns_chi01_sL::synapse0x3baf6a0() {
   return (neuron0x3ba5820()*0.0822436);
}

double NNfunction_ns_chi01_sL::synapse0x3baf6e0() {
   return (neuron0x3ba61f0()*0.0132849);
}

double NNfunction_ns_chi01_sL::synapse0x3baf720() {
   return (neuron0x3ba6bc0()*-3.07971);
}

double NNfunction_ns_chi01_sL::synapse0x3bafaa0() {
   return (neuron0x3b81b50()*0.489392);
}

double NNfunction_ns_chi01_sL::synapse0x3bafae0() {
   return (neuron0x3b82390()*-0.932286);
}

double NNfunction_ns_chi01_sL::synapse0x3bafb20() {
   return (neuron0x3b82e70()*-2.53689);
}

double NNfunction_ns_chi01_sL::synapse0x3bafb60() {
   return (neuron0x3b82910()*1.90282);
}

double NNfunction_ns_chi01_sL::synapse0x3bafba0() {
   return (neuron0x3b83c50()*-2.02024);
}

double NNfunction_ns_chi01_sL::synapse0x3bafbe0() {
   return (neuron0x3b85720()*0.993651);
}

double NNfunction_ns_chi01_sL::synapse0x3bafc20() {
   return (neuron0x3b864f0()*0.945126);
}

double NNfunction_ns_chi01_sL::synapse0x3bafc60() {
   return (neuron0x3b86ec0()*-0.745899);
}

double NNfunction_ns_chi01_sL::synapse0x3bafca0() {
   return (neuron0x3b87890()*-1.50962);
}

double NNfunction_ns_chi01_sL::synapse0x3bafce0() {
   return (neuron0x3b88370()*-1.99382);
}

double NNfunction_ns_chi01_sL::synapse0x3bafd20() {
   return (neuron0x3b88d40()*-0.923903);
}

double NNfunction_ns_chi01_sL::synapse0x3bafd60() {
   return (neuron0x3b85e20()*-1.83639);
}

double NNfunction_ns_chi01_sL::synapse0x3bafda0() {
   return (neuron0x3b8a8f0()*0.234221);
}

double NNfunction_ns_chi01_sL::synapse0x3bafde0() {
   return (neuron0x3b8b2c0()*-0.784637);
}

double NNfunction_ns_chi01_sL::synapse0x3bafe20() {
   return (neuron0x3b8bc90()*0.875375);
}

double NNfunction_ns_chi01_sL::synapse0x3bafe60() {
   return (neuron0x3b8c660()*0.159481);
}

double NNfunction_ns_chi01_sL::synapse0x3baf8f0() {
   return (neuron0x3b8e470()*-1.43351);
}

double NNfunction_ns_chi01_sL::synapse0x3baf930() {
   return (neuron0x3b8e750()*6.55774);
}

double NNfunction_ns_chi01_sL::synapse0x3baffb0() {
   return (neuron0x3b8f120()*-1.557);
}

double NNfunction_ns_chi01_sL::synapse0x3bafff0() {
   return (neuron0x3b8faf0()*-0.912454);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0030() {
   return (neuron0x3b904c0()*-1.21096);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0070() {
   return (neuron0x3b90e90()*1.11629);
}

double NNfunction_ns_chi01_sL::synapse0x3bb00b0() {
   return (neuron0x3b899e0()*-1.31952);
}

double NNfunction_ns_chi01_sL::synapse0x3bb00f0() {
   return (neuron0x3b8a3b0()*-0.609119);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0130() {
   return (neuron0x3b93c20()*-1.45782);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0170() {
   return (neuron0x3b945f0()*2.23435);
}

double NNfunction_ns_chi01_sL::synapse0x3bb01b0() {
   return (neuron0x3b94fc0()*-0.983995);
}

double NNfunction_ns_chi01_sL::synapse0x3bb01f0() {
   return (neuron0x3b95990()*-1.06598);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0230() {
   return (neuron0x3b96360()*0.622727);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0270() {
   return (neuron0x3b96d30()*1.11552);
}

double NNfunction_ns_chi01_sL::synapse0x3bb02b0() {
   return (neuron0x3b97700()*0.264394);
}

double NNfunction_ns_chi01_sL::synapse0x3bb02f0() {
   return (neuron0x3b980d0()*-0.581486);
}

double NNfunction_ns_chi01_sL::synapse0x3bafea0() {
   return (neuron0x3b8e160()*-1.16373);
}

double NNfunction_ns_chi01_sL::synapse0x3bafee0() {
   return (neuron0x3b9acb0()*-0.382019);
}

double NNfunction_ns_chi01_sL::synapse0x3baff20() {
   return (neuron0x3b9b680()*0.817748);
}

double NNfunction_ns_chi01_sL::synapse0x3baff60() {
   return (neuron0x3b9c050()*0.015393);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0540() {
   return (neuron0x3b9ca20()*-1.38203);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0580() {
   return (neuron0x3b9d3f0()*5.1401);
}

double NNfunction_ns_chi01_sL::synapse0x3bb05c0() {
   return (neuron0x3b9ddc0()*-0.925448);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0600() {
   return (neuron0x3b9e790()*-1.98521);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0640() {
   return (neuron0x3b9f160()*2.39791);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0680() {
   return (neuron0x3b9fd40()*0.917907);
}

double NNfunction_ns_chi01_sL::synapse0x3bb06c0() {
   return (neuron0x3ba0710()*-1.33141);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0700() {
   return (neuron0x3b91590()*-0.700855);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0740() {
   return (neuron0x3b91f60()*-2.30066);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0780() {
   return (neuron0x3b92930()*1.08127);
}

double NNfunction_ns_chi01_sL::synapse0x3bb07c0() {
   return (neuron0x3ba4f70()*-1.02641);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0800() {
   return (neuron0x3ba5820()*-1.08104);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0840() {
   return (neuron0x3ba61f0()*2.19895);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0880() {
   return (neuron0x3ba6bc0()*0.214146);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0c00() {
   return (neuron0x3b81b50()*7.6069);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0c40() {
   return (neuron0x3b82390()*0.0511281);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0c80() {
   return (neuron0x3b82e70()*1.78079);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0cc0() {
   return (neuron0x3b82910()*-0.945223);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0d00() {
   return (neuron0x3b83c50()*-6.86921);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0d40() {
   return (neuron0x3b85720()*0.0481137);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0d80() {
   return (neuron0x3b864f0()*0.17721);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0dc0() {
   return (neuron0x3b86ec0()*-1.27207);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0e00() {
   return (neuron0x3b87890()*-5.68686);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0e40() {
   return (neuron0x3b88370()*0.631114);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0e80() {
   return (neuron0x3b88d40()*-0.0760787);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0ec0() {
   return (neuron0x3b85e20()*-1.4135);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0f00() {
   return (neuron0x3b8a8f0()*1.00624);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0f40() {
   return (neuron0x3b8b2c0()*-0.0236465);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0f80() {
   return (neuron0x3b8bc90()*0.0273687);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0fc0() {
   return (neuron0x3b8c660()*0.244912);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0a50() {
   return (neuron0x3b8e470()*0.0298187);
}

double NNfunction_ns_chi01_sL::synapse0x3bb0a90() {
   return (neuron0x3b8e750()*6.84836);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1110() {
   return (neuron0x3b8f120()*0.977675);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1150() {
   return (neuron0x3b8faf0()*0.0242324);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1190() {
   return (neuron0x3b904c0()*-0.0048439);
}

double NNfunction_ns_chi01_sL::synapse0x3bb11d0() {
   return (neuron0x3b90e90()*-0.39626);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1210() {
   return (neuron0x3b899e0()*-3.78946);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1250() {
   return (neuron0x3b8a3b0()*0.441403);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1290() {
   return (neuron0x3b93c20()*0.0253113);
}

double NNfunction_ns_chi01_sL::synapse0x3bb12d0() {
   return (neuron0x3b945f0()*0.254276);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1310() {
   return (neuron0x3b94fc0()*-0.0600681);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1350() {
   return (neuron0x3b95990()*1.63975);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1390() {
   return (neuron0x3b96360()*0.0868525);
}

double NNfunction_ns_chi01_sL::synapse0x3bb13d0() {
   return (neuron0x3b96d30()*1.38161);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1410() {
   return (neuron0x3b97700()*0.221147);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1450() {
   return (neuron0x3b980d0()*0.174672);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1000() {
   return (neuron0x3b8e160()*0.0488488);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1040() {
   return (neuron0x3b9acb0()*-3.73642);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1080() {
   return (neuron0x3b9b680()*0.0856339);
}

double NNfunction_ns_chi01_sL::synapse0x3bb10c0() {
   return (neuron0x3b9c050()*-3.18091);
}

double NNfunction_ns_chi01_sL::synapse0x3bb16a0() {
   return (neuron0x3b9ca20()*0.00200025);
}

double NNfunction_ns_chi01_sL::synapse0x3bb16e0() {
   return (neuron0x3b9d3f0()*-1.22338);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1720() {
   return (neuron0x3b9ddc0()*-0.0785799);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1760() {
   return (neuron0x3b9e790()*0.379671);
}

double NNfunction_ns_chi01_sL::synapse0x3bb17a0() {
   return (neuron0x3b9f160()*1.87183);
}

double NNfunction_ns_chi01_sL::synapse0x3bb17e0() {
   return (neuron0x3b9fd40()*0.0535378);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1820() {
   return (neuron0x3ba0710()*-1.4983);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1860() {
   return (neuron0x3b91590()*0.761219);
}

double NNfunction_ns_chi01_sL::synapse0x3bb18a0() {
   return (neuron0x3b91f60()*2.92981);
}

double NNfunction_ns_chi01_sL::synapse0x3bb18e0() {
   return (neuron0x3b92930()*-0.0244641);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1920() {
   return (neuron0x3ba4f70()*-0.247837);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1960() {
   return (neuron0x3ba5820()*-0.0019991);
}

double NNfunction_ns_chi01_sL::synapse0x3bb19a0() {
   return (neuron0x3ba61f0()*-0.799992);
}

double NNfunction_ns_chi01_sL::synapse0x3bb19e0() {
   return (neuron0x3ba6bc0()*-0.191993);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1c40() {
   return (neuron0x3baddc0()*5.10927);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1c80() {
   return (neuron0x3bae160()*6.19592);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1cc0() {
   return (neuron0x3bae600()*-10.0838);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1d00() {
   return (neuron0x3baf760()*-8.03332);
}

double NNfunction_ns_chi01_sL::synapse0x3bb1d40() {
   return (neuron0x3bb08c0()*-2.77616);
}

