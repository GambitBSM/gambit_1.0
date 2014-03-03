#include "NNfunction_ss_sLuR.h"
#include <cmath>

double NNfunction_ss_sLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4284)/15.291;
   input1 = (in1 - -5.22457)/1157.89;
   input2 = (in2 - 654.673)/620.266;
   input3 = (in3 - -52.4628)/800.832;
   input4 = (in4 - 1060.9)/957.344;
   input5 = (in5 - 897.145)/952.556;
   input6 = (in6 - 907.129)/954.845;
   input7 = (in7 - 926.927)/938.847;
   input8 = (in8 - 909.576)/959.646;
   input9 = (in9 - 887.924)/945.38;
   input10 = (in10 - 981.334)/943.963;
   input11 = (in11 - 704.446)/848.204;
   input12 = (in12 - 415.08)/434.413;
   input13 = (in13 - 501.125)/513.046;
   input14 = (in14 - 452.829)/463.059;
   input15 = (in15 - 721.725)/821.12;
   input16 = (in16 - 535.993)/564.145;
   input17 = (in17 - 748.456)/882.646;
   input18 = (in18 - 741.821)/891.261;
   input19 = (in19 - 790.013)/864.265;
   input20 = (in20 - -6.47967)/486.605;
   input21 = (in21 - -0.324021)/1158.14;
   input22 = (in22 - 0.651129)/1199.01;
   input23 = (in23 - -197.415)/605.015;
   switch(index) {
     case 0:
         return neuron0x1e084a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLuR::Value(int index, double* input) {
   input0 = (input[0] - 23.4284)/15.291;
   input1 = (input[1] - -5.22457)/1157.89;
   input2 = (input[2] - 654.673)/620.266;
   input3 = (input[3] - -52.4628)/800.832;
   input4 = (input[4] - 1060.9)/957.344;
   input5 = (input[5] - 897.145)/952.556;
   input6 = (input[6] - 907.129)/954.845;
   input7 = (input[7] - 926.927)/938.847;
   input8 = (input[8] - 909.576)/959.646;
   input9 = (input[9] - 887.924)/945.38;
   input10 = (input[10] - 981.334)/943.963;
   input11 = (input[11] - 704.446)/848.204;
   input12 = (input[12] - 415.08)/434.413;
   input13 = (input[13] - 501.125)/513.046;
   input14 = (input[14] - 452.829)/463.059;
   input15 = (input[15] - 721.725)/821.12;
   input16 = (input[16] - 535.993)/564.145;
   input17 = (input[17] - 748.456)/882.646;
   input18 = (input[18] - 741.821)/891.261;
   input19 = (input[19] - 790.013)/864.265;
   input20 = (input[20] - -6.47967)/486.605;
   input21 = (input[21] - -0.324021)/1158.14;
   input22 = (input[22] - 0.651129)/1199.01;
   input23 = (input[23] - -197.415)/605.015;
   switch(index) {
     case 0:
         return neuron0x1e084a0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLuR::neuron0x1dd4560() {
   return input0;
}

double NNfunction_ss_sLuR::neuron0x1dd48a0() {
   return input1;
}

double NNfunction_ss_sLuR::neuron0x1dd4be0() {
   return input2;
}

double NNfunction_ss_sLuR::neuron0x1dd4f20() {
   return input3;
}

double NNfunction_ss_sLuR::neuron0x1dd5260() {
   return input4;
}

double NNfunction_ss_sLuR::neuron0x1dd55a0() {
   return input5;
}

double NNfunction_ss_sLuR::neuron0x1dd58e0() {
   return input6;
}

double NNfunction_ss_sLuR::neuron0x1dd5c20() {
   return input7;
}

double NNfunction_ss_sLuR::neuron0x1dd5f60() {
   return input8;
}

double NNfunction_ss_sLuR::neuron0x1dd62a0() {
   return input9;
}

double NNfunction_ss_sLuR::neuron0x1dd65e0() {
   return input10;
}

double NNfunction_ss_sLuR::neuron0x1dd6920() {
   return input11;
}

double NNfunction_ss_sLuR::neuron0x1dd6c60() {
   return input12;
}

double NNfunction_ss_sLuR::neuron0x1dd6fa0() {
   return input13;
}

double NNfunction_ss_sLuR::neuron0x1dd72e0() {
   return input14;
}

double NNfunction_ss_sLuR::neuron0x1dd7620() {
   return input15;
}

double NNfunction_ss_sLuR::neuron0x1dd7960() {
   return input16;
}

double NNfunction_ss_sLuR::neuron0x1dd7ec0() {
   return input17;
}

double NNfunction_ss_sLuR::neuron0x1dd80e0() {
   return input18;
}

double NNfunction_ss_sLuR::neuron0x1dd8420() {
   return input19;
}

double NNfunction_ss_sLuR::neuron0x1dd8760() {
   return input20;
}

double NNfunction_ss_sLuR::neuron0x1dd8aa0() {
   return input21;
}

double NNfunction_ss_sLuR::neuron0x1dd8de0() {
   return input22;
}

double NNfunction_ss_sLuR::neuron0x1dd9120() {
   return input23;
}

double NNfunction_ss_sLuR::input0x1dd95c0() {
   double input = -0.433455;
   input += synapse0x1b943d0();
   input += synapse0x1dd4420();
   input += synapse0x1dd4460();
   input += synapse0x1dd9870();
   input += synapse0x1dd98b0();
   input += synapse0x1dd98f0();
   input += synapse0x1dd9930();
   input += synapse0x1dd9970();
   input += synapse0x1dd99b0();
   input += synapse0x1dd99f0();
   input += synapse0x1dd9a30();
   input += synapse0x1dd9a70();
   input += synapse0x1dd9ab0();
   input += synapse0x1dd9af0();
   input += synapse0x1dd9b30();
   input += synapse0x1dd9b70();
   input += synapse0x1dd4390();
   input += synapse0x1dd43d0();
   input += synapse0x1b85c70();
   input += synapse0x1b85cb0();
   input += synapse0x1dd9dd0();
   input += synapse0x1dd9e10();
   input += synapse0x1dd9e50();
   input += synapse0x1dd9e90();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1dd95c0() {
   double input = input0x1dd95c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1dd9ed0() {
   double input = 0.25176;
   input += synapse0x1dda210();
   input += synapse0x1dda250();
   input += synapse0x1dda290();
   input += synapse0x1dda2d0();
   input += synapse0x1dda310();
   input += synapse0x1dda350();
   input += synapse0x1dda390();
   input += synapse0x1dda3d0();
   input += synapse0x1dda410();
   input += synapse0x1dd9cc0();
   input += synapse0x1dd9d00();
   input += synapse0x1dd9d40();
   input += synapse0x1dd9d80();
   input += synapse0x1dda660();
   input += synapse0x1dda6a0();
   input += synapse0x1dda6e0();
   input += synapse0x1dda060();
   input += synapse0x1dda0a0();
   input += synapse0x1dda830();
   input += synapse0x1dda870();
   input += synapse0x1dda8b0();
   input += synapse0x1dda8f0();
   input += synapse0x1dda930();
   input += synapse0x1dda970();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1dd9ed0() {
   double input = input0x1dd9ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1dda9b0() {
   double input = 0.411646;
   input += synapse0x1ddacf0();
   input += synapse0x1ddad30();
   input += synapse0x1ddad70();
   input += synapse0x1ddadb0();
   input += synapse0x1ddadf0();
   input += synapse0x1ddae30();
   input += synapse0x1ddae70();
   input += synapse0x1ddaeb0();
   input += synapse0x1ddaef0();
   input += synapse0x1ddaf30();
   input += synapse0x1ddaf70();
   input += synapse0x1ddafb0();
   input += synapse0x1ddaff0();
   input += synapse0x1ddb030();
   input += synapse0x1ddb070();
   input += synapse0x1ddb0b0();
   input += synapse0x1ddab40();
   input += synapse0x1ddab80();
   input += synapse0x1b93ac0();
   input += synapse0x1b93b00();
   input += synapse0x1dc35f0();
   input += synapse0x1dc3630();
   input += synapse0x1dc3670();
   input += synapse0x1dd44a0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1dda9b0() {
   double input = input0x1dda9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1b94240() {
   double input = -0.825907;
   input += synapse0x1dda600();
   input += synapse0x1dd44e0();
   input += synapse0x1dd4520();
   input += synapse0x1ddb200();
   input += synapse0x1ddb240();
   input += synapse0x1ddb280();
   input += synapse0x1ddb2c0();
   input += synapse0x1ddb300();
   input += synapse0x1ddb340();
   input += synapse0x1ddb380();
   input += synapse0x1ddb3c0();
   input += synapse0x1ddb400();
   input += synapse0x1ddb440();
   input += synapse0x1ddb480();
   input += synapse0x1ddb4c0();
   input += synapse0x1ddb500();
   input += synapse0x1dda450();
   input += synapse0x1dda490();
   input += synapse0x1ddb650();
   input += synapse0x1ddb690();
   input += synapse0x1ddb6d0();
   input += synapse0x1ddb710();
   input += synapse0x1ddb750();
   input += synapse0x1ddb790();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1b94240() {
   double input = input0x1b94240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1ddb7d0() {
   double input = -4.33591;
   input += synapse0x1ddbb10();
   input += synapse0x1ddbb50();
   input += synapse0x1ddbb90();
   input += synapse0x1ddbbd0();
   input += synapse0x1ddbc10();
   input += synapse0x1ddbc50();
   input += synapse0x1ddbc90();
   input += synapse0x1ddbcd0();
   input += synapse0x1ddbd10();
   input += synapse0x1ddbd50();
   input += synapse0x1ddbd90();
   input += synapse0x1ddbdd0();
   input += synapse0x1ddbe10();
   input += synapse0x1ddbe50();
   input += synapse0x1ddbe90();
   input += synapse0x1ddbed0();
   input += synapse0x1ddb960();
   input += synapse0x1ddb9a0();
   input += synapse0x1ddc020();
   input += synapse0x1ddc060();
   input += synapse0x1ddc0a0();
   input += synapse0x1ddc0e0();
   input += synapse0x1ddc120();
   input += synapse0x1ddc160();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1ddb7d0() {
   double input = input0x1ddb7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1ddc1a0() {
   double input = 0.307726;
   input += synapse0x1ddc4e0();
   input += synapse0x1ddc520();
   input += synapse0x1ddc560();
   input += synapse0x1ddc5a0();
   input += synapse0x1ddc5e0();
   input += synapse0x1ddc620();
   input += synapse0x1ddc660();
   input += synapse0x1ddc6a0();
   input += synapse0x1ddc6e0();
   input += synapse0x1b93e30();
   input += synapse0x1b93e70();
   input += synapse0x1b93eb0();
   input += synapse0x1b93ef0();
   input += synapse0x1b93f30();
   input += synapse0x1b93f70();
   input += synapse0x1b93fb0();
   input += synapse0x1ddc330();
   input += synapse0x1ddc370();
   input += synapse0x1b94100();
   input += synapse0x1b94140();
   input += synapse0x1b94180();
   input += synapse0x1b941c0();
   input += synapse0x1b94200();
   input += synapse0x1ddcf30();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1ddc1a0() {
   double input = input0x1ddc1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1ddcf70() {
   double input = 0.46674;
   input += synapse0x1ddd2b0();
   input += synapse0x1ddd2f0();
   input += synapse0x1ddd330();
   input += synapse0x1ddd370();
   input += synapse0x1ddd3b0();
   input += synapse0x1ddd3f0();
   input += synapse0x1ddd430();
   input += synapse0x1ddd470();
   input += synapse0x1ddd4b0();
   input += synapse0x1ddd4f0();
   input += synapse0x1ddd530();
   input += synapse0x1ddd570();
   input += synapse0x1ddd5b0();
   input += synapse0x1ddd5f0();
   input += synapse0x1ddd630();
   input += synapse0x1ddd670();
   input += synapse0x1ddd100();
   input += synapse0x1ddd140();
   input += synapse0x1ddd7c0();
   input += synapse0x1ddd800();
   input += synapse0x1ddd840();
   input += synapse0x1ddd880();
   input += synapse0x1ddd8c0();
   input += synapse0x1ddd900();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1ddcf70() {
   double input = input0x1ddcf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1ddd940() {
   double input = -0.629704;
   input += synapse0x1dddc80();
   input += synapse0x1dddcc0();
   input += synapse0x1dddd00();
   input += synapse0x1dddd40();
   input += synapse0x1dddd80();
   input += synapse0x1ddddc0();
   input += synapse0x1ddde00();
   input += synapse0x1ddde40();
   input += synapse0x1ddde80();
   input += synapse0x1dddec0();
   input += synapse0x1dddf00();
   input += synapse0x1dddf40();
   input += synapse0x1dddf80();
   input += synapse0x1dddfc0();
   input += synapse0x1dde000();
   input += synapse0x1dde040();
   input += synapse0x1dddad0();
   input += synapse0x1dddb10();
   input += synapse0x1dde190();
   input += synapse0x1dde1d0();
   input += synapse0x1dde210();
   input += synapse0x1dde250();
   input += synapse0x1dde290();
   input += synapse0x1dde2d0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1ddd940() {
   double input = input0x1ddd940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1dde310() {
   double input = 0.534485;
   input += synapse0x1dd7db0();
   input += synapse0x1dd7df0();
   input += synapse0x1dd7e30();
   input += synapse0x1dd7e70();
   input += synapse0x1dde860();
   input += synapse0x1dde8a0();
   input += synapse0x1dde8e0();
   input += synapse0x1dde920();
   input += synapse0x1dde960();
   input += synapse0x1dde9a0();
   input += synapse0x1dde9e0();
   input += synapse0x1ddea20();
   input += synapse0x1ddea60();
   input += synapse0x1ddeaa0();
   input += synapse0x1ddeae0();
   input += synapse0x1ddeb20();
   input += synapse0x1dde4a0();
   input += synapse0x1dde4e0();
   input += synapse0x1ddec70();
   input += synapse0x1ddecb0();
   input += synapse0x1ddecf0();
   input += synapse0x1dded30();
   input += synapse0x1dded70();
   input += synapse0x1ddedb0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1dde310() {
   double input = input0x1dde310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1ddedf0() {
   double input = 1.81614;
   input += synapse0x1ddf130();
   input += synapse0x1ddf170();
   input += synapse0x1ddf1b0();
   input += synapse0x1ddf1f0();
   input += synapse0x1ddf230();
   input += synapse0x1ddf270();
   input += synapse0x1ddf2b0();
   input += synapse0x1ddf2f0();
   input += synapse0x1ddf330();
   input += synapse0x1ddf370();
   input += synapse0x1ddf3b0();
   input += synapse0x1ddf3f0();
   input += synapse0x1ddf430();
   input += synapse0x1ddf470();
   input += synapse0x1ddf4b0();
   input += synapse0x1ddf4f0();
   input += synapse0x1ddef80();
   input += synapse0x1ddefc0();
   input += synapse0x1ddf640();
   input += synapse0x1ddf680();
   input += synapse0x1ddf6c0();
   input += synapse0x1ddf700();
   input += synapse0x1ddf740();
   input += synapse0x1ddf780();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1ddedf0() {
   double input = input0x1ddedf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1ddf7c0() {
   double input = -0.432391;
   input += synapse0x1ddfb00();
   input += synapse0x1ddfb40();
   input += synapse0x1ddfb80();
   input += synapse0x1ddfbc0();
   input += synapse0x1ddfc00();
   input += synapse0x1ddfc40();
   input += synapse0x1ddfc80();
   input += synapse0x1ddfcc0();
   input += synapse0x1ddfd00();
   input += synapse0x1ddfd40();
   input += synapse0x1ddfd80();
   input += synapse0x1ddfdc0();
   input += synapse0x1ddfe00();
   input += synapse0x1ddfe40();
   input += synapse0x1ddfe80();
   input += synapse0x1ddfec0();
   input += synapse0x1ddf950();
   input += synapse0x1ddf990();
   input += synapse0x1ddc720();
   input += synapse0x1ddc760();
   input += synapse0x1ddc7a0();
   input += synapse0x1ddc7e0();
   input += synapse0x1ddc820();
   input += synapse0x1ddc860();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1ddf7c0() {
   double input = input0x1ddf7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1ddc8a0() {
   double input = 0.973799;
   input += synapse0x1ddcbe0();
   input += synapse0x1ddcc20();
   input += synapse0x1ddcc60();
   input += synapse0x1ddcca0();
   input += synapse0x1ddcce0();
   input += synapse0x1ddcd20();
   input += synapse0x1ddcd60();
   input += synapse0x1ddcda0();
   input += synapse0x1ddcde0();
   input += synapse0x1ddce20();
   input += synapse0x1ddce60();
   input += synapse0x1ddcea0();
   input += synapse0x1ddcee0();
   input += synapse0x1de1020();
   input += synapse0x1de1060();
   input += synapse0x1de10a0();
   input += synapse0x1ddca30();
   input += synapse0x1ddca70();
   input += synapse0x1de11f0();
   input += synapse0x1de1230();
   input += synapse0x1de1270();
   input += synapse0x1de12b0();
   input += synapse0x1de12f0();
   input += synapse0x1de1330();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1ddc8a0() {
   double input = input0x1ddc8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de1370() {
   double input = 0.725361;
   input += synapse0x1de16b0();
   input += synapse0x1de16f0();
   input += synapse0x1de1730();
   input += synapse0x1de1770();
   input += synapse0x1de17b0();
   input += synapse0x1de17f0();
   input += synapse0x1de1830();
   input += synapse0x1de1870();
   input += synapse0x1de18b0();
   input += synapse0x1de18f0();
   input += synapse0x1de1930();
   input += synapse0x1de1970();
   input += synapse0x1de19b0();
   input += synapse0x1de19f0();
   input += synapse0x1de1a30();
   input += synapse0x1de1a70();
   input += synapse0x1de1500();
   input += synapse0x1de1540();
   input += synapse0x1de1bc0();
   input += synapse0x1de1c00();
   input += synapse0x1de1c40();
   input += synapse0x1de1c80();
   input += synapse0x1de1cc0();
   input += synapse0x1de1d00();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de1370() {
   double input = input0x1de1370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de1d40() {
   double input = 1.06409;
   input += synapse0x1de2080();
   input += synapse0x1de20c0();
   input += synapse0x1de2100();
   input += synapse0x1de2140();
   input += synapse0x1de2180();
   input += synapse0x1de21c0();
   input += synapse0x1de2200();
   input += synapse0x1de2240();
   input += synapse0x1de2280();
   input += synapse0x1de22c0();
   input += synapse0x1de2300();
   input += synapse0x1de2340();
   input += synapse0x1de2380();
   input += synapse0x1de23c0();
   input += synapse0x1de2400();
   input += synapse0x1de2440();
   input += synapse0x1de1ed0();
   input += synapse0x1de1f10();
   input += synapse0x1de2590();
   input += synapse0x1de25d0();
   input += synapse0x1de2610();
   input += synapse0x1de2650();
   input += synapse0x1de2690();
   input += synapse0x1de26d0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de1d40() {
   double input = input0x1de1d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de2710() {
   double input = 1.27522;
   input += synapse0x1de2a50();
   input += synapse0x1de2a90();
   input += synapse0x1de2ad0();
   input += synapse0x1de2b10();
   input += synapse0x1de2b50();
   input += synapse0x1de2b90();
   input += synapse0x1de2bd0();
   input += synapse0x1de2c10();
   input += synapse0x1de2c50();
   input += synapse0x1de2c90();
   input += synapse0x1de2cd0();
   input += synapse0x1de2d10();
   input += synapse0x1de2d50();
   input += synapse0x1de2d90();
   input += synapse0x1de2dd0();
   input += synapse0x1de2e10();
   input += synapse0x1de28a0();
   input += synapse0x1de28e0();
   input += synapse0x1de2f60();
   input += synapse0x1de2fa0();
   input += synapse0x1de2fe0();
   input += synapse0x1de3020();
   input += synapse0x1de3060();
   input += synapse0x1de30a0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de2710() {
   double input = input0x1de2710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de30e0() {
   double input = -0.133785;
   input += synapse0x1de3420();
   input += synapse0x1dd4780();
   input += synapse0x1dd47c0();
   input += synapse0x1dd4ac0();
   input += synapse0x1dd4b00();
   input += synapse0x1dd4e00();
   input += synapse0x1dd4e40();
   input += synapse0x1dd5140();
   input += synapse0x1dd5180();
   input += synapse0x1dd5480();
   input += synapse0x1dd54c0();
   input += synapse0x1dd57c0();
   input += synapse0x1dd5800();
   input += synapse0x1dd5b00();
   input += synapse0x1dd5b40();
   input += synapse0x1dd5e40();
   input += synapse0x1dd5e80();
   input += synapse0x1dd6180();
   input += synapse0x1dd61c0();
   input += synapse0x1dd64c0();
   input += synapse0x1dd6500();
   input += synapse0x1dd6800();
   input += synapse0x1dd6840();
   input += synapse0x1dd6b40();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de30e0() {
   double input = input0x1de30e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de4ef0() {
   double input = 1.16077;
   input += synapse0x1dd6b80();
   input += synapse0x1dd7840();
   input += synapse0x1dd7880();
   input += synapse0x1de3270();
   input += synapse0x1de32b0();
   input += synapse0x1dd7b80();
   input += synapse0x1dd7bc0();
   input += synapse0x1b85b50();
   input += synapse0x1b85b90();
   input += synapse0x1dd8300();
   input += synapse0x1dd8340();
   input += synapse0x1dd8640();
   input += synapse0x1dd8680();
   input += synapse0x1dd8980();
   input += synapse0x1dd89c0();
   input += synapse0x1dd8cc0();
   input += synapse0x1dd8d00();
   input += synapse0x1dd9000();
   input += synapse0x1dd9040();
   input += synapse0x1dd9340();
   input += synapse0x1dd9380();
   input += synapse0x1dd6e80();
   input += synapse0x1dd6ec0();
   input += synapse0x1de5190();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de4ef0() {
   double input = input0x1de4ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de51d0() {
   double input = -0.791443;
   input += synapse0x1de5510();
   input += synapse0x1de5550();
   input += synapse0x1de5590();
   input += synapse0x1de55d0();
   input += synapse0x1de5610();
   input += synapse0x1de5650();
   input += synapse0x1de5690();
   input += synapse0x1de56d0();
   input += synapse0x1de5710();
   input += synapse0x1de5750();
   input += synapse0x1de5790();
   input += synapse0x1de57d0();
   input += synapse0x1de5810();
   input += synapse0x1de5850();
   input += synapse0x1de5890();
   input += synapse0x1de58d0();
   input += synapse0x1de5360();
   input += synapse0x1de53a0();
   input += synapse0x1de5a20();
   input += synapse0x1de5a60();
   input += synapse0x1de5aa0();
   input += synapse0x1de5ae0();
   input += synapse0x1de5b20();
   input += synapse0x1de5b60();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de51d0() {
   double input = input0x1de51d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de5ba0() {
   double input = -0.395868;
   input += synapse0x1de5ee0();
   input += synapse0x1de5f20();
   input += synapse0x1de5f60();
   input += synapse0x1de5fa0();
   input += synapse0x1de5fe0();
   input += synapse0x1de6020();
   input += synapse0x1de6060();
   input += synapse0x1de60a0();
   input += synapse0x1de60e0();
   input += synapse0x1de6120();
   input += synapse0x1de6160();
   input += synapse0x1de61a0();
   input += synapse0x1de61e0();
   input += synapse0x1de6220();
   input += synapse0x1de6260();
   input += synapse0x1de62a0();
   input += synapse0x1de5d30();
   input += synapse0x1de5d70();
   input += synapse0x1de63f0();
   input += synapse0x1de6430();
   input += synapse0x1de6470();
   input += synapse0x1de64b0();
   input += synapse0x1de64f0();
   input += synapse0x1de6530();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de5ba0() {
   double input = input0x1de5ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de6570() {
   double input = 0.355521;
   input += synapse0x1de68b0();
   input += synapse0x1de68f0();
   input += synapse0x1de6930();
   input += synapse0x1de6970();
   input += synapse0x1de69b0();
   input += synapse0x1de69f0();
   input += synapse0x1de6a30();
   input += synapse0x1de6a70();
   input += synapse0x1de6ab0();
   input += synapse0x1de6af0();
   input += synapse0x1de6b30();
   input += synapse0x1de6b70();
   input += synapse0x1de6bb0();
   input += synapse0x1de6bf0();
   input += synapse0x1de6c30();
   input += synapse0x1de6c70();
   input += synapse0x1de6700();
   input += synapse0x1de6740();
   input += synapse0x1de6dc0();
   input += synapse0x1de6e00();
   input += synapse0x1de6e40();
   input += synapse0x1de6e80();
   input += synapse0x1de6ec0();
   input += synapse0x1de6f00();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de6570() {
   double input = input0x1de6570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de6f40() {
   double input = 0.080197;
   input += synapse0x1de7280();
   input += synapse0x1de72c0();
   input += synapse0x1de7300();
   input += synapse0x1de7340();
   input += synapse0x1de7380();
   input += synapse0x1de73c0();
   input += synapse0x1de7400();
   input += synapse0x1de7440();
   input += synapse0x1de7480();
   input += synapse0x1de74c0();
   input += synapse0x1de7500();
   input += synapse0x1de7540();
   input += synapse0x1de7580();
   input += synapse0x1de75c0();
   input += synapse0x1de7600();
   input += synapse0x1de7640();
   input += synapse0x1de70d0();
   input += synapse0x1de7110();
   input += synapse0x1de7790();
   input += synapse0x1de77d0();
   input += synapse0x1de7810();
   input += synapse0x1de7850();
   input += synapse0x1de7890();
   input += synapse0x1de78d0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de6f40() {
   double input = input0x1de6f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de7910() {
   double input = 0.334088;
   input += synapse0x1de7c50();
   input += synapse0x1de7c90();
   input += synapse0x1de7cd0();
   input += synapse0x1de7d10();
   input += synapse0x1de7d50();
   input += synapse0x1de7d90();
   input += synapse0x1de7dd0();
   input += synapse0x1de7e10();
   input += synapse0x1de7e50();
   input += synapse0x1de0010();
   input += synapse0x1de0050();
   input += synapse0x1de0090();
   input += synapse0x1de00d0();
   input += synapse0x1de0110();
   input += synapse0x1de0150();
   input += synapse0x1de0190();
   input += synapse0x1de7aa0();
   input += synapse0x1de7ae0();
   input += synapse0x1de02e0();
   input += synapse0x1de0320();
   input += synapse0x1de0360();
   input += synapse0x1de03a0();
   input += synapse0x1de03e0();
   input += synapse0x1de0420();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de7910() {
   double input = input0x1de7910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de0460() {
   double input = 2.67747;
   input += synapse0x1de07a0();
   input += synapse0x1de07e0();
   input += synapse0x1de0820();
   input += synapse0x1de0860();
   input += synapse0x1de08a0();
   input += synapse0x1de08e0();
   input += synapse0x1de0920();
   input += synapse0x1de0960();
   input += synapse0x1de09a0();
   input += synapse0x1de09e0();
   input += synapse0x1de0a20();
   input += synapse0x1de0a60();
   input += synapse0x1de0aa0();
   input += synapse0x1de0ae0();
   input += synapse0x1de0b20();
   input += synapse0x1de0b60();
   input += synapse0x1de05f0();
   input += synapse0x1de0630();
   input += synapse0x1de0cb0();
   input += synapse0x1de0cf0();
   input += synapse0x1de0d30();
   input += synapse0x1de0d70();
   input += synapse0x1de0db0();
   input += synapse0x1de0df0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de0460() {
   double input = input0x1de0460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de0e30() {
   double input = 1.31777;
   input += synapse0x1de0fc0();
   input += synapse0x1dea050();
   input += synapse0x1dea090();
   input += synapse0x1dea0d0();
   input += synapse0x1dea110();
   input += synapse0x1dea150();
   input += synapse0x1dea190();
   input += synapse0x1dea1d0();
   input += synapse0x1dea210();
   input += synapse0x1dea250();
   input += synapse0x1dea290();
   input += synapse0x1dea2d0();
   input += synapse0x1dea310();
   input += synapse0x1dea350();
   input += synapse0x1dea390();
   input += synapse0x1dea3d0();
   input += synapse0x1de9ea0();
   input += synapse0x1de9ee0();
   input += synapse0x1dea520();
   input += synapse0x1dea560();
   input += synapse0x1dea5a0();
   input += synapse0x1dea5e0();
   input += synapse0x1dea620();
   input += synapse0x1dea660();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de0e30() {
   double input = input0x1de0e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1dea6a0() {
   double input = -0.387232;
   input += synapse0x1dea9e0();
   input += synapse0x1deaa20();
   input += synapse0x1deaa60();
   input += synapse0x1deaaa0();
   input += synapse0x1deaae0();
   input += synapse0x1deab20();
   input += synapse0x1deab60();
   input += synapse0x1deaba0();
   input += synapse0x1deabe0();
   input += synapse0x1deac20();
   input += synapse0x1deac60();
   input += synapse0x1deaca0();
   input += synapse0x1deace0();
   input += synapse0x1dead20();
   input += synapse0x1dead60();
   input += synapse0x1deada0();
   input += synapse0x1dea830();
   input += synapse0x1dea870();
   input += synapse0x1deaef0();
   input += synapse0x1deaf30();
   input += synapse0x1deaf70();
   input += synapse0x1deafb0();
   input += synapse0x1deaff0();
   input += synapse0x1deb030();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1dea6a0() {
   double input = input0x1dea6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1deb070() {
   double input = -0.0877326;
   input += synapse0x1deb3b0();
   input += synapse0x1deb3f0();
   input += synapse0x1deb430();
   input += synapse0x1deb470();
   input += synapse0x1deb4b0();
   input += synapse0x1deb4f0();
   input += synapse0x1deb530();
   input += synapse0x1deb570();
   input += synapse0x1deb5b0();
   input += synapse0x1deb5f0();
   input += synapse0x1deb630();
   input += synapse0x1deb670();
   input += synapse0x1deb6b0();
   input += synapse0x1deb6f0();
   input += synapse0x1deb730();
   input += synapse0x1deb770();
   input += synapse0x1deb200();
   input += synapse0x1deb240();
   input += synapse0x1deb8c0();
   input += synapse0x1deb900();
   input += synapse0x1deb940();
   input += synapse0x1deb980();
   input += synapse0x1deb9c0();
   input += synapse0x1deba00();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1deb070() {
   double input = input0x1deb070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1deba40() {
   double input = 0.604594;
   input += synapse0x1debd80();
   input += synapse0x1debdc0();
   input += synapse0x1debe00();
   input += synapse0x1debe40();
   input += synapse0x1debe80();
   input += synapse0x1debec0();
   input += synapse0x1debf00();
   input += synapse0x1debf40();
   input += synapse0x1debf80();
   input += synapse0x1debfc0();
   input += synapse0x1dec000();
   input += synapse0x1dec040();
   input += synapse0x1dec080();
   input += synapse0x1dec0c0();
   input += synapse0x1dec100();
   input += synapse0x1dec140();
   input += synapse0x1debbd0();
   input += synapse0x1debc10();
   input += synapse0x1dec290();
   input += synapse0x1dec2d0();
   input += synapse0x1dec310();
   input += synapse0x1dec350();
   input += synapse0x1dec390();
   input += synapse0x1dec3d0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1deba40() {
   double input = input0x1deba40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1dec410() {
   double input = 1.83312;
   input += synapse0x1dec750();
   input += synapse0x1dec790();
   input += synapse0x1dec7d0();
   input += synapse0x1dec810();
   input += synapse0x1dec850();
   input += synapse0x1dec890();
   input += synapse0x1dec8d0();
   input += synapse0x1dec910();
   input += synapse0x1dec950();
   input += synapse0x1dec990();
   input += synapse0x1dec9d0();
   input += synapse0x1deca10();
   input += synapse0x1deca50();
   input += synapse0x1deca90();
   input += synapse0x1decad0();
   input += synapse0x1decb10();
   input += synapse0x1dec5a0();
   input += synapse0x1dec5e0();
   input += synapse0x1decc60();
   input += synapse0x1decca0();
   input += synapse0x1decce0();
   input += synapse0x1decd20();
   input += synapse0x1decd60();
   input += synapse0x1decda0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1dec410() {
   double input = input0x1dec410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1decde0() {
   double input = -3.97154;
   input += synapse0x1ded120();
   input += synapse0x1ded160();
   input += synapse0x1ded1a0();
   input += synapse0x1ded1e0();
   input += synapse0x1ded220();
   input += synapse0x1ded260();
   input += synapse0x1ded2a0();
   input += synapse0x1ded2e0();
   input += synapse0x1ded320();
   input += synapse0x1ded360();
   input += synapse0x1ded3a0();
   input += synapse0x1ded3e0();
   input += synapse0x1ded420();
   input += synapse0x1ded460();
   input += synapse0x1ded4a0();
   input += synapse0x1ded4e0();
   input += synapse0x1decf70();
   input += synapse0x1decfb0();
   input += synapse0x1ded630();
   input += synapse0x1ded670();
   input += synapse0x1ded6b0();
   input += synapse0x1ded6f0();
   input += synapse0x1ded730();
   input += synapse0x1ded770();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1decde0() {
   double input = input0x1decde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1ded7b0() {
   double input = 0.212389;
   input += synapse0x1dedaf0();
   input += synapse0x1dedb30();
   input += synapse0x1dedb70();
   input += synapse0x1dedbb0();
   input += synapse0x1dedbf0();
   input += synapse0x1dedc30();
   input += synapse0x1dedc70();
   input += synapse0x1dedcb0();
   input += synapse0x1dedcf0();
   input += synapse0x1dedd30();
   input += synapse0x1dedd70();
   input += synapse0x1deddb0();
   input += synapse0x1deddf0();
   input += synapse0x1dede30();
   input += synapse0x1dede70();
   input += synapse0x1dedeb0();
   input += synapse0x1ded940();
   input += synapse0x1ded980();
   input += synapse0x1dee000();
   input += synapse0x1dee040();
   input += synapse0x1dee080();
   input += synapse0x1dee0c0();
   input += synapse0x1dee100();
   input += synapse0x1dee140();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1ded7b0() {
   double input = input0x1ded7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1dee180() {
   double input = -0.0851392;
   input += synapse0x1dee4c0();
   input += synapse0x1dee500();
   input += synapse0x1dee540();
   input += synapse0x1dee580();
   input += synapse0x1dee5c0();
   input += synapse0x1dee600();
   input += synapse0x1dee640();
   input += synapse0x1dee680();
   input += synapse0x1dee6c0();
   input += synapse0x1dee700();
   input += synapse0x1dee740();
   input += synapse0x1dee780();
   input += synapse0x1dee7c0();
   input += synapse0x1dee800();
   input += synapse0x1dee840();
   input += synapse0x1dee880();
   input += synapse0x1dee310();
   input += synapse0x1dee350();
   input += synapse0x1dee9d0();
   input += synapse0x1deea10();
   input += synapse0x1deea50();
   input += synapse0x1deea90();
   input += synapse0x1deead0();
   input += synapse0x1deeb10();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1dee180() {
   double input = input0x1dee180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1deeb50() {
   double input = 1.59088;
   input += synapse0x1deee90();
   input += synapse0x1de3460();
   input += synapse0x1de34a0();
   input += synapse0x1de34e0();
   input += synapse0x1de3730();
   input += synapse0x1de3770();
   input += synapse0x1de37b0();
   input += synapse0x1de3a00();
   input += synapse0x1de3a40();
   input += synapse0x1de3c90();
   input += synapse0x1de3cd0();
   input += synapse0x1de3d10();
   input += synapse0x1de3f60();
   input += synapse0x1de3fa0();
   input += synapse0x1de41f0();
   input += synapse0x1de4230();
   input += synapse0x1deece0();
   input += synapse0x1deed20();
   input += synapse0x1de4380();
   input += synapse0x1de4890();
   input += synapse0x1de48d0();
   input += synapse0x1de4910();
   input += synapse0x1de4b60();
   input += synapse0x1de4ba0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1deeb50() {
   double input = input0x1deeb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de4be0() {
   double input = 0.066936;
   input += synapse0x1de4450();
   input += synapse0x1de4490();
   input += synapse0x1de44d0();
   input += synapse0x1de4510();
   input += synapse0x1de4e90();
   input += synapse0x1df11e0();
   input += synapse0x1df1220();
   input += synapse0x1df1260();
   input += synapse0x1df12a0();
   input += synapse0x1df12e0();
   input += synapse0x1df1320();
   input += synapse0x1df1360();
   input += synapse0x1df13a0();
   input += synapse0x1df13e0();
   input += synapse0x1df1420();
   input += synapse0x1df1460();
   input += synapse0x1de4d70();
   input += synapse0x1de4db0();
   input += synapse0x1df15b0();
   input += synapse0x1df15f0();
   input += synapse0x1df1630();
   input += synapse0x1df1670();
   input += synapse0x1df16b0();
   input += synapse0x1df16f0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de4be0() {
   double input = input0x1de4be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1df1730() {
   double input = -0.139946;
   input += synapse0x1df1a70();
   input += synapse0x1df1ab0();
   input += synapse0x1df1af0();
   input += synapse0x1df1b30();
   input += synapse0x1df1b70();
   input += synapse0x1df1bb0();
   input += synapse0x1df1bf0();
   input += synapse0x1df1c30();
   input += synapse0x1df1c70();
   input += synapse0x1df1cb0();
   input += synapse0x1df1cf0();
   input += synapse0x1df1d30();
   input += synapse0x1df1d70();
   input += synapse0x1df1db0();
   input += synapse0x1df1df0();
   input += synapse0x1df1e30();
   input += synapse0x1df18c0();
   input += synapse0x1df1900();
   input += synapse0x1df1f80();
   input += synapse0x1df1fc0();
   input += synapse0x1df2000();
   input += synapse0x1df2040();
   input += synapse0x1df2080();
   input += synapse0x1df20c0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1df1730() {
   double input = input0x1df1730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1df2100() {
   double input = 1.29844;
   input += synapse0x1df2440();
   input += synapse0x1df2480();
   input += synapse0x1df24c0();
   input += synapse0x1df2500();
   input += synapse0x1df2540();
   input += synapse0x1df2580();
   input += synapse0x1df25c0();
   input += synapse0x1df2600();
   input += synapse0x1df2640();
   input += synapse0x1df2680();
   input += synapse0x1df26c0();
   input += synapse0x1df2700();
   input += synapse0x1df2740();
   input += synapse0x1df2780();
   input += synapse0x1df27c0();
   input += synapse0x1df2800();
   input += synapse0x1df2290();
   input += synapse0x1df22d0();
   input += synapse0x1df2950();
   input += synapse0x1df2990();
   input += synapse0x1df29d0();
   input += synapse0x1df2a10();
   input += synapse0x1df2a50();
   input += synapse0x1df2a90();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1df2100() {
   double input = input0x1df2100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1df2ad0() {
   double input = 2.44801;
   input += synapse0x1df2e10();
   input += synapse0x1df2e50();
   input += synapse0x1df2e90();
   input += synapse0x1df2ed0();
   input += synapse0x1df2f10();
   input += synapse0x1df2f50();
   input += synapse0x1df2f90();
   input += synapse0x1df2fd0();
   input += synapse0x1df3010();
   input += synapse0x1df3050();
   input += synapse0x1df3090();
   input += synapse0x1df30d0();
   input += synapse0x1df3110();
   input += synapse0x1df3150();
   input += synapse0x1df3190();
   input += synapse0x1df31d0();
   input += synapse0x1df2c60();
   input += synapse0x1df2ca0();
   input += synapse0x1df3320();
   input += synapse0x1df3360();
   input += synapse0x1df33a0();
   input += synapse0x1df33e0();
   input += synapse0x1df3420();
   input += synapse0x1df3460();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1df2ad0() {
   double input = input0x1df2ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1df34a0() {
   double input = 1.16777;
   input += synapse0x1df37e0();
   input += synapse0x1df3820();
   input += synapse0x1df3860();
   input += synapse0x1df38a0();
   input += synapse0x1df38e0();
   input += synapse0x1df3920();
   input += synapse0x1df3960();
   input += synapse0x1df39a0();
   input += synapse0x1df39e0();
   input += synapse0x1df3a20();
   input += synapse0x1df3a60();
   input += synapse0x1df3aa0();
   input += synapse0x1df3ae0();
   input += synapse0x1df3b20();
   input += synapse0x1df3b60();
   input += synapse0x1df3ba0();
   input += synapse0x1df3630();
   input += synapse0x1df3670();
   input += synapse0x1df3cf0();
   input += synapse0x1df3d30();
   input += synapse0x1df3d70();
   input += synapse0x1df3db0();
   input += synapse0x1df3df0();
   input += synapse0x1df3e30();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1df34a0() {
   double input = input0x1df34a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1df3e70() {
   double input = -0.668687;
   input += synapse0x1df41b0();
   input += synapse0x1df41f0();
   input += synapse0x1df4230();
   input += synapse0x1df4270();
   input += synapse0x1df42b0();
   input += synapse0x1df42f0();
   input += synapse0x1df4330();
   input += synapse0x1df4370();
   input += synapse0x1df43b0();
   input += synapse0x1df43f0();
   input += synapse0x1df4430();
   input += synapse0x1df4470();
   input += synapse0x1df44b0();
   input += synapse0x1df44f0();
   input += synapse0x1df4530();
   input += synapse0x1df4570();
   input += synapse0x1df4000();
   input += synapse0x1df4040();
   input += synapse0x1df46c0();
   input += synapse0x1df4700();
   input += synapse0x1df4740();
   input += synapse0x1df4780();
   input += synapse0x1df47c0();
   input += synapse0x1df4800();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1df3e70() {
   double input = input0x1df3e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1df4840() {
   double input = 1.52307;
   input += synapse0x1df4b80();
   input += synapse0x1df4bc0();
   input += synapse0x1df4c00();
   input += synapse0x1df4c40();
   input += synapse0x1df4c80();
   input += synapse0x1df4cc0();
   input += synapse0x1df4d00();
   input += synapse0x1df4d40();
   input += synapse0x1df4d80();
   input += synapse0x1df4dc0();
   input += synapse0x1df4e00();
   input += synapse0x1df4e40();
   input += synapse0x1df4e80();
   input += synapse0x1df4ec0();
   input += synapse0x1df4f00();
   input += synapse0x1df4f40();
   input += synapse0x1df49d0();
   input += synapse0x1df4a10();
   input += synapse0x1df5090();
   input += synapse0x1df50d0();
   input += synapse0x1df5110();
   input += synapse0x1df5150();
   input += synapse0x1df5190();
   input += synapse0x1df51d0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1df4840() {
   double input = input0x1df4840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1df5210() {
   double input = 0.179122;
   input += synapse0x1df5550();
   input += synapse0x1df5590();
   input += synapse0x1df55d0();
   input += synapse0x1df5610();
   input += synapse0x1df5650();
   input += synapse0x1df5690();
   input += synapse0x1df56d0();
   input += synapse0x1df5710();
   input += synapse0x1df5750();
   input += synapse0x1df5790();
   input += synapse0x1df57d0();
   input += synapse0x1df5810();
   input += synapse0x1df5850();
   input += synapse0x1df5890();
   input += synapse0x1df58d0();
   input += synapse0x1df5910();
   input += synapse0x1df53a0();
   input += synapse0x1df53e0();
   input += synapse0x1df5a60();
   input += synapse0x1df5aa0();
   input += synapse0x1df5ae0();
   input += synapse0x1df5b20();
   input += synapse0x1df5b60();
   input += synapse0x1df5ba0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1df5210() {
   double input = input0x1df5210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1df5be0() {
   double input = -0.207242;
   input += synapse0x1dde650();
   input += synapse0x1dde690();
   input += synapse0x1dde6d0();
   input += synapse0x1dde710();
   input += synapse0x1dde750();
   input += synapse0x1dde790();
   input += synapse0x1dde7d0();
   input += synapse0x1dde810();
   input += synapse0x1df6330();
   input += synapse0x1df6370();
   input += synapse0x1df63b0();
   input += synapse0x1df63f0();
   input += synapse0x1df6430();
   input += synapse0x1df6470();
   input += synapse0x1df64b0();
   input += synapse0x1df64f0();
   input += synapse0x1df5d70();
   input += synapse0x1df5db0();
   input += synapse0x1df6640();
   input += synapse0x1df6680();
   input += synapse0x1df66c0();
   input += synapse0x1df6700();
   input += synapse0x1df6740();
   input += synapse0x1df6780();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1df5be0() {
   double input = input0x1df5be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1df67c0() {
   double input = 1.96191;
   input += synapse0x1df6b00();
   input += synapse0x1df6b40();
   input += synapse0x1df6b80();
   input += synapse0x1df6bc0();
   input += synapse0x1df6c00();
   input += synapse0x1df6c40();
   input += synapse0x1df6c80();
   input += synapse0x1df6cc0();
   input += synapse0x1df6d00();
   input += synapse0x1df6d40();
   input += synapse0x1df6d80();
   input += synapse0x1df6dc0();
   input += synapse0x1df6e00();
   input += synapse0x1df6e40();
   input += synapse0x1df6e80();
   input += synapse0x1df6ec0();
   input += synapse0x1df6950();
   input += synapse0x1df6990();
   input += synapse0x1df7010();
   input += synapse0x1df7050();
   input += synapse0x1df7090();
   input += synapse0x1df70d0();
   input += synapse0x1df7110();
   input += synapse0x1df7150();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1df67c0() {
   double input = input0x1df67c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1df7190() {
   double input = -0.225269;
   input += synapse0x1df74d0();
   input += synapse0x1df7510();
   input += synapse0x1df7550();
   input += synapse0x1df7590();
   input += synapse0x1df75d0();
   input += synapse0x1df7610();
   input += synapse0x1df7650();
   input += synapse0x1df7690();
   input += synapse0x1df76d0();
   input += synapse0x1df7710();
   input += synapse0x1df7750();
   input += synapse0x1df7790();
   input += synapse0x1df77d0();
   input += synapse0x1df7810();
   input += synapse0x1df7850();
   input += synapse0x1df7890();
   input += synapse0x1df7320();
   input += synapse0x1df7360();
   input += synapse0x1de7e90();
   input += synapse0x1de7ed0();
   input += synapse0x1de7f10();
   input += synapse0x1de7f50();
   input += synapse0x1de7f90();
   input += synapse0x1de7fd0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1df7190() {
   double input = input0x1df7190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de8010() {
   double input = 0.857936;
   input += synapse0x1de8350();
   input += synapse0x1de8390();
   input += synapse0x1de83d0();
   input += synapse0x1de8410();
   input += synapse0x1de8450();
   input += synapse0x1de8490();
   input += synapse0x1de84d0();
   input += synapse0x1de8510();
   input += synapse0x1de8550();
   input += synapse0x1de8590();
   input += synapse0x1de85d0();
   input += synapse0x1de8610();
   input += synapse0x1de8650();
   input += synapse0x1de8690();
   input += synapse0x1de86d0();
   input += synapse0x1de8710();
   input += synapse0x1de81a0();
   input += synapse0x1de81e0();
   input += synapse0x1de8860();
   input += synapse0x1de88a0();
   input += synapse0x1de88e0();
   input += synapse0x1de8920();
   input += synapse0x1de8960();
   input += synapse0x1de89a0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de8010() {
   double input = input0x1de8010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de89e0() {
   double input = 0.684157;
   input += synapse0x1de8d20();
   input += synapse0x1de8d60();
   input += synapse0x1de8da0();
   input += synapse0x1de8de0();
   input += synapse0x1de8e20();
   input += synapse0x1de8e60();
   input += synapse0x1de8ea0();
   input += synapse0x1de8ee0();
   input += synapse0x1de8f20();
   input += synapse0x1de8f60();
   input += synapse0x1de8fa0();
   input += synapse0x1de8fe0();
   input += synapse0x1de9020();
   input += synapse0x1de9060();
   input += synapse0x1de90a0();
   input += synapse0x1de90e0();
   input += synapse0x1de8b70();
   input += synapse0x1de8bb0();
   input += synapse0x1de9230();
   input += synapse0x1de9270();
   input += synapse0x1de92b0();
   input += synapse0x1de92f0();
   input += synapse0x1de9330();
   input += synapse0x1de9370();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de89e0() {
   double input = input0x1de89e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1de93b0() {
   double input = 1.03788;
   input += synapse0x1de96f0();
   input += synapse0x1de9730();
   input += synapse0x1de9770();
   input += synapse0x1de97b0();
   input += synapse0x1de97f0();
   input += synapse0x1de9830();
   input += synapse0x1de9870();
   input += synapse0x1de98b0();
   input += synapse0x1de98f0();
   input += synapse0x1de9930();
   input += synapse0x1de9970();
   input += synapse0x1de99b0();
   input += synapse0x1de99f0();
   input += synapse0x1de9a30();
   input += synapse0x1de9a70();
   input += synapse0x1de9ab0();
   input += synapse0x1de9540();
   input += synapse0x1de9580();
   input += synapse0x1de9c00();
   input += synapse0x1de9c40();
   input += synapse0x1de9c80();
   input += synapse0x1de9cc0();
   input += synapse0x1de9d00();
   input += synapse0x1de9d40();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1de93b0() {
   double input = input0x1de93b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1dfb9f0() {
   double input = 1.20282;
   input += synapse0x1dfbc10();
   input += synapse0x1dfbc50();
   input += synapse0x1dfbc90();
   input += synapse0x1dfbcd0();
   input += synapse0x1dfbd10();
   input += synapse0x1dfbd50();
   input += synapse0x1dfbd90();
   input += synapse0x1dfbdd0();
   input += synapse0x1dfbe10();
   input += synapse0x1dfbe50();
   input += synapse0x1dfbe90();
   input += synapse0x1dfbed0();
   input += synapse0x1dfbf10();
   input += synapse0x1dfbf50();
   input += synapse0x1dfbf90();
   input += synapse0x1dfbfd0();
   input += synapse0x1de9d80();
   input += synapse0x1de9dc0();
   input += synapse0x1dfc120();
   input += synapse0x1dfc160();
   input += synapse0x1dfc1a0();
   input += synapse0x1dfc1e0();
   input += synapse0x1dfc220();
   input += synapse0x1dfc260();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1dfb9f0() {
   double input = input0x1dfb9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1dfc2a0() {
   double input = -0.454657;
   input += synapse0x1dfc5e0();
   input += synapse0x1dfc620();
   input += synapse0x1dfc660();
   input += synapse0x1dfc6a0();
   input += synapse0x1dfc6e0();
   input += synapse0x1dfc720();
   input += synapse0x1dfc760();
   input += synapse0x1dfc7a0();
   input += synapse0x1dfc7e0();
   input += synapse0x1dfc820();
   input += synapse0x1dfc860();
   input += synapse0x1dfc8a0();
   input += synapse0x1dfc8e0();
   input += synapse0x1dfc920();
   input += synapse0x1dfc960();
   input += synapse0x1dfc9a0();
   input += synapse0x1dfc430();
   input += synapse0x1dfc470();
   input += synapse0x1dfcaf0();
   input += synapse0x1dfcb30();
   input += synapse0x1dfcb70();
   input += synapse0x1dfcbb0();
   input += synapse0x1dfcbf0();
   input += synapse0x1dfcc30();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1dfc2a0() {
   double input = input0x1dfc2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1dfcc70() {
   double input = -0.127659;
   input += synapse0x1dfcfb0();
   input += synapse0x1dfcff0();
   input += synapse0x1dfd030();
   input += synapse0x1dfd070();
   input += synapse0x1dfd0b0();
   input += synapse0x1dfd0f0();
   input += synapse0x1dfd130();
   input += synapse0x1dfd170();
   input += synapse0x1dfd1b0();
   input += synapse0x1dfd1f0();
   input += synapse0x1dfd230();
   input += synapse0x1dfd270();
   input += synapse0x1dfd2b0();
   input += synapse0x1dfd2f0();
   input += synapse0x1dfd330();
   input += synapse0x1dfd370();
   input += synapse0x1dfce00();
   input += synapse0x1dfce40();
   input += synapse0x1dfd4c0();
   input += synapse0x1dfd500();
   input += synapse0x1dfd540();
   input += synapse0x1dfd580();
   input += synapse0x1dfd5c0();
   input += synapse0x1dfd600();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1dfcc70() {
   double input = input0x1dfcc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1dfd640() {
   double input = -0.186218;
   input += synapse0x1dfd980();
   input += synapse0x1dfd9c0();
   input += synapse0x1dfda00();
   input += synapse0x1dfda40();
   input += synapse0x1dfda80();
   input += synapse0x1dfdac0();
   input += synapse0x1dfdb00();
   input += synapse0x1dfdb40();
   input += synapse0x1dfdb80();
   input += synapse0x1dfdbc0();
   input += synapse0x1dfdc00();
   input += synapse0x1dfdc40();
   input += synapse0x1dfdc80();
   input += synapse0x1dfdcc0();
   input += synapse0x1dfdd00();
   input += synapse0x1dfdd40();
   input += synapse0x1dfd7d0();
   input += synapse0x1dfd810();
   input += synapse0x1dfde90();
   input += synapse0x1dfded0();
   input += synapse0x1dfdf10();
   input += synapse0x1dfdf50();
   input += synapse0x1dfdf90();
   input += synapse0x1dfdfd0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1dfd640() {
   double input = input0x1dfd640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1e04840() {
   double input = 0.100747;
   input += synapse0x1dda570();
   input += synapse0x1dda5b0();
   input += synapse0x1ddba80();
   input += synapse0x1ddbac0();
   input += synapse0x1ddc450();
   input += synapse0x1ddc490();
   input += synapse0x1ddd220();
   input += synapse0x1ddd260();
   input += synapse0x1dddbf0();
   input += synapse0x1dddc30();
   input += synapse0x1dde5c0();
   input += synapse0x1dde600();
   input += synapse0x1ddf0a0();
   input += synapse0x1ddf0e0();
   input += synapse0x1ddfa70();
   input += synapse0x1ddfab0();
   input += synapse0x1ddcb50();
   input += synapse0x1ddcb90();
   input += synapse0x1de1620();
   input += synapse0x1de1660();
   input += synapse0x1de1ff0();
   input += synapse0x1de2030();
   input += synapse0x1de29c0();
   input += synapse0x1de2a00();
   input += synapse0x1de3390();
   input += synapse0x1de33d0();
   input += synapse0x1dd7500();
   input += synapse0x1dd7540();
   input += synapse0x1de5480();
   input += synapse0x1de54c0();
   input += synapse0x1de5e50();
   input += synapse0x1de5e90();
   input += synapse0x1de6820();
   input += synapse0x1de6860();
   input += synapse0x1de71f0();
   input += synapse0x1de7230();
   input += synapse0x1de7bc0();
   input += synapse0x1de7c00();
   input += synapse0x1de0710();
   input += synapse0x1de0750();
   input += synapse0x1de9fc0();
   input += synapse0x1dea000();
   input += synapse0x1dea950();
   input += synapse0x1dea990();
   input += synapse0x1deb320();
   input += synapse0x1deb360();
   input += synapse0x1debcf0();
   input += synapse0x1debd30();
   input += synapse0x1dec6c0();
   input += synapse0x1dec700();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1e04840() {
   double input = input0x1e04840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1e04be0() {
   double input = -0.332782;
   input += synapse0x1deee00();
   input += synapse0x1deee40();
   input += synapse0x1de43c0();
   input += synapse0x1de4400();
   input += synapse0x1df19e0();
   input += synapse0x1df1a20();
   input += synapse0x1df23b0();
   input += synapse0x1df23f0();
   input += synapse0x1df2d80();
   input += synapse0x1df2dc0();
   input += synapse0x1df3750();
   input += synapse0x1df3790();
   input += synapse0x1df4120();
   input += synapse0x1df4160();
   input += synapse0x1df4af0();
   input += synapse0x1df4b30();
   input += synapse0x1df54c0();
   input += synapse0x1df5500();
   input += synapse0x1df5e90();
   input += synapse0x1df5ed0();
   input += synapse0x1df6a70();
   input += synapse0x1df6ab0();
   input += synapse0x1df7440();
   input += synapse0x1df7480();
   input += synapse0x1de82c0();
   input += synapse0x1de8300();
   input += synapse0x1de8c90();
   input += synapse0x1de8cd0();
   input += synapse0x1de9660();
   input += synapse0x1de96a0();
   input += synapse0x1dfbb80();
   input += synapse0x1dfbbc0();
   input += synapse0x1dfc550();
   input += synapse0x1dfc590();
   input += synapse0x1dfcf20();
   input += synapse0x1dfcf60();
   input += synapse0x1dfd8f0();
   input += synapse0x1dfd930();
   input += synapse0x1dd97e0();
   input += synapse0x1dd9820();
   input += synapse0x1ded090();
   input += synapse0x1ded0d0();
   input += synapse0x1dfe010();
   input += synapse0x1dfe050();
   input += synapse0x1dfe090();
   input += synapse0x1dfe0d0();
   input += synapse0x1e04f80();
   input += synapse0x1e04fc0();
   input += synapse0x1e05000();
   input += synapse0x1e05040();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1e04be0() {
   double input = input0x1e04be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1e05080() {
   double input = 1.09011;
   input += synapse0x1e053c0();
   input += synapse0x1e05400();
   input += synapse0x1e05440();
   input += synapse0x1e05480();
   input += synapse0x1e054c0();
   input += synapse0x1e05500();
   input += synapse0x1e05540();
   input += synapse0x1e05580();
   input += synapse0x1e055c0();
   input += synapse0x1e05600();
   input += synapse0x1e05640();
   input += synapse0x1e05680();
   input += synapse0x1e056c0();
   input += synapse0x1e05700();
   input += synapse0x1e05740();
   input += synapse0x1e05780();
   input += synapse0x1e05210();
   input += synapse0x1e05250();
   input += synapse0x1e058d0();
   input += synapse0x1e05910();
   input += synapse0x1e05950();
   input += synapse0x1e05990();
   input += synapse0x1e059d0();
   input += synapse0x1e05a10();
   input += synapse0x1e05a50();
   input += synapse0x1e05a90();
   input += synapse0x1e05ad0();
   input += synapse0x1e05b10();
   input += synapse0x1e05b50();
   input += synapse0x1e05b90();
   input += synapse0x1e05bd0();
   input += synapse0x1e05c10();
   input += synapse0x1e057c0();
   input += synapse0x1e05800();
   input += synapse0x1e05840();
   input += synapse0x1e05880();
   input += synapse0x1e05e60();
   input += synapse0x1e05ea0();
   input += synapse0x1e05ee0();
   input += synapse0x1e05f20();
   input += synapse0x1e05f60();
   input += synapse0x1e05fa0();
   input += synapse0x1e05fe0();
   input += synapse0x1e06020();
   input += synapse0x1e06060();
   input += synapse0x1e060a0();
   input += synapse0x1e060e0();
   input += synapse0x1e06120();
   input += synapse0x1e06160();
   input += synapse0x1e061a0();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1e05080() {
   double input = input0x1e05080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1e061e0() {
   double input = 2.29506;
   input += synapse0x1e06520();
   input += synapse0x1e06560();
   input += synapse0x1e065a0();
   input += synapse0x1e065e0();
   input += synapse0x1e06620();
   input += synapse0x1e06660();
   input += synapse0x1e066a0();
   input += synapse0x1e066e0();
   input += synapse0x1e06720();
   input += synapse0x1e06760();
   input += synapse0x1e067a0();
   input += synapse0x1e067e0();
   input += synapse0x1e06820();
   input += synapse0x1e06860();
   input += synapse0x1e068a0();
   input += synapse0x1e068e0();
   input += synapse0x1e06370();
   input += synapse0x1e063b0();
   input += synapse0x1e06a30();
   input += synapse0x1e06a70();
   input += synapse0x1e06ab0();
   input += synapse0x1e06af0();
   input += synapse0x1e06b30();
   input += synapse0x1e06b70();
   input += synapse0x1e06bb0();
   input += synapse0x1e06bf0();
   input += synapse0x1e06c30();
   input += synapse0x1e06c70();
   input += synapse0x1e06cb0();
   input += synapse0x1e06cf0();
   input += synapse0x1e06d30();
   input += synapse0x1e06d70();
   input += synapse0x1e06920();
   input += synapse0x1e06960();
   input += synapse0x1e069a0();
   input += synapse0x1e069e0();
   input += synapse0x1e06fc0();
   input += synapse0x1e07000();
   input += synapse0x1e07040();
   input += synapse0x1e07080();
   input += synapse0x1e070c0();
   input += synapse0x1e07100();
   input += synapse0x1e07140();
   input += synapse0x1e07180();
   input += synapse0x1e071c0();
   input += synapse0x1e07200();
   input += synapse0x1e07240();
   input += synapse0x1e07280();
   input += synapse0x1e072c0();
   input += synapse0x1e07300();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1e061e0() {
   double input = input0x1e061e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1e07340() {
   double input = 0.532073;
   input += synapse0x1e07680();
   input += synapse0x1e076c0();
   input += synapse0x1e07700();
   input += synapse0x1e07740();
   input += synapse0x1e07780();
   input += synapse0x1e077c0();
   input += synapse0x1e07800();
   input += synapse0x1e07840();
   input += synapse0x1e07880();
   input += synapse0x1e078c0();
   input += synapse0x1e07900();
   input += synapse0x1e07940();
   input += synapse0x1e07980();
   input += synapse0x1e079c0();
   input += synapse0x1e07a00();
   input += synapse0x1e07a40();
   input += synapse0x1e074d0();
   input += synapse0x1e07510();
   input += synapse0x1e07b90();
   input += synapse0x1e07bd0();
   input += synapse0x1e07c10();
   input += synapse0x1e07c50();
   input += synapse0x1e07c90();
   input += synapse0x1e07cd0();
   input += synapse0x1e07d10();
   input += synapse0x1e07d50();
   input += synapse0x1e07d90();
   input += synapse0x1e07dd0();
   input += synapse0x1e07e10();
   input += synapse0x1e07e50();
   input += synapse0x1e07e90();
   input += synapse0x1e07ed0();
   input += synapse0x1e07a80();
   input += synapse0x1e07ac0();
   input += synapse0x1e07b00();
   input += synapse0x1e07b40();
   input += synapse0x1e08120();
   input += synapse0x1e08160();
   input += synapse0x1e081a0();
   input += synapse0x1e081e0();
   input += synapse0x1e08220();
   input += synapse0x1e08260();
   input += synapse0x1e082a0();
   input += synapse0x1e082e0();
   input += synapse0x1e08320();
   input += synapse0x1e08360();
   input += synapse0x1e083a0();
   input += synapse0x1e083e0();
   input += synapse0x1e08420();
   input += synapse0x1e08460();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1e07340() {
   double input = input0x1e07340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLuR::input0x1e084a0() {
   double input = 2.8212;
   input += synapse0x1dd9580();
   input += synapse0x1e086c0();
   input += synapse0x1e08700();
   input += synapse0x1e08740();
   input += synapse0x1e08780();
   return input;
}

double NNfunction_ss_sLuR::neuron0x1e084a0() {
   double input = input0x1e084a0();
   return (input * 1)+0;
}

double NNfunction_ss_sLuR::synapse0x1b943d0() {
   return (neuron0x1dd4560()*-0.767547);
}

double NNfunction_ss_sLuR::synapse0x1dd4420() {
   return (neuron0x1dd48a0()*0.538855);
}

double NNfunction_ss_sLuR::synapse0x1dd4460() {
   return (neuron0x1dd4be0()*0.118378);
}

double NNfunction_ss_sLuR::synapse0x1dd9870() {
   return (neuron0x1dd4f20()*0.16514);
}

double NNfunction_ss_sLuR::synapse0x1dd98b0() {
   return (neuron0x1dd5260()*-0.378216);
}

double NNfunction_ss_sLuR::synapse0x1dd98f0() {
   return (neuron0x1dd55a0()*-0.114868);
}

double NNfunction_ss_sLuR::synapse0x1dd9930() {
   return (neuron0x1dd58e0()*-0.429784);
}

double NNfunction_ss_sLuR::synapse0x1dd9970() {
   return (neuron0x1dd5c20()*0.0251333);
}

double NNfunction_ss_sLuR::synapse0x1dd99b0() {
   return (neuron0x1dd5f60()*0.344365);
}

double NNfunction_ss_sLuR::synapse0x1dd99f0() {
   return (neuron0x1dd62a0()*0.921274);
}

double NNfunction_ss_sLuR::synapse0x1dd9a30() {
   return (neuron0x1dd65e0()*-0.00554742);
}

double NNfunction_ss_sLuR::synapse0x1dd9a70() {
   return (neuron0x1dd6920()*-0.199779);
}

double NNfunction_ss_sLuR::synapse0x1dd9ab0() {
   return (neuron0x1dd6c60()*-0.350657);
}

double NNfunction_ss_sLuR::synapse0x1dd9af0() {
   return (neuron0x1dd6fa0()*-0.190162);
}

double NNfunction_ss_sLuR::synapse0x1dd9b30() {
   return (neuron0x1dd72e0()*-0.3976);
}

double NNfunction_ss_sLuR::synapse0x1dd9b70() {
   return (neuron0x1dd7620()*-0.177021);
}

double NNfunction_ss_sLuR::synapse0x1dd4390() {
   return (neuron0x1dd7960()*0.150291);
}

double NNfunction_ss_sLuR::synapse0x1dd43d0() {
   return (neuron0x1dd7ec0()*-0.315028);
}

double NNfunction_ss_sLuR::synapse0x1b85c70() {
   return (neuron0x1dd80e0()*0.607317);
}

double NNfunction_ss_sLuR::synapse0x1b85cb0() {
   return (neuron0x1dd8420()*-0.148328);
}

double NNfunction_ss_sLuR::synapse0x1dd9dd0() {
   return (neuron0x1dd8760()*0.249225);
}

double NNfunction_ss_sLuR::synapse0x1dd9e10() {
   return (neuron0x1dd8aa0()*0.123621);
}

double NNfunction_ss_sLuR::synapse0x1dd9e50() {
   return (neuron0x1dd8de0()*0.428299);
}

double NNfunction_ss_sLuR::synapse0x1dd9e90() {
   return (neuron0x1dd9120()*-0.311908);
}

double NNfunction_ss_sLuR::synapse0x1dda210() {
   return (neuron0x1dd4560()*-0.0497198);
}

double NNfunction_ss_sLuR::synapse0x1dda250() {
   return (neuron0x1dd48a0()*0.0807025);
}

double NNfunction_ss_sLuR::synapse0x1dda290() {
   return (neuron0x1dd4be0()*-0.0914179);
}

double NNfunction_ss_sLuR::synapse0x1dda2d0() {
   return (neuron0x1dd4f20()*-0.323266);
}

double NNfunction_ss_sLuR::synapse0x1dda310() {
   return (neuron0x1dd5260()*0.0773833);
}

double NNfunction_ss_sLuR::synapse0x1dda350() {
   return (neuron0x1dd55a0()*-0.0335548);
}

double NNfunction_ss_sLuR::synapse0x1dda390() {
   return (neuron0x1dd58e0()*-0.0236887);
}

double NNfunction_ss_sLuR::synapse0x1dda3d0() {
   return (neuron0x1dd5c20()*0.0207918);
}

double NNfunction_ss_sLuR::synapse0x1dda410() {
   return (neuron0x1dd5f60()*-0.0908979);
}

double NNfunction_ss_sLuR::synapse0x1dd9cc0() {
   return (neuron0x1dd62a0()*0.0379129);
}

double NNfunction_ss_sLuR::synapse0x1dd9d00() {
   return (neuron0x1dd65e0()*0.00670586);
}

double NNfunction_ss_sLuR::synapse0x1dd9d40() {
   return (neuron0x1dd6920()*-0.282529);
}

double NNfunction_ss_sLuR::synapse0x1dd9d80() {
   return (neuron0x1dd6c60()*-0.37888);
}

double NNfunction_ss_sLuR::synapse0x1dda660() {
   return (neuron0x1dd6fa0()*0.0112184);
}

double NNfunction_ss_sLuR::synapse0x1dda6a0() {
   return (neuron0x1dd72e0()*-1.0149);
}

double NNfunction_ss_sLuR::synapse0x1dda6e0() {
   return (neuron0x1dd7620()*-0.0482241);
}

double NNfunction_ss_sLuR::synapse0x1dda060() {
   return (neuron0x1dd7960()*0.131998);
}

double NNfunction_ss_sLuR::synapse0x1dda0a0() {
   return (neuron0x1dd7ec0()*0.115347);
}

double NNfunction_ss_sLuR::synapse0x1dda830() {
   return (neuron0x1dd80e0()*-0.0552141);
}

double NNfunction_ss_sLuR::synapse0x1dda870() {
   return (neuron0x1dd8420()*-0.18514);
}

double NNfunction_ss_sLuR::synapse0x1dda8b0() {
   return (neuron0x1dd8760()*-0.0895904);
}

double NNfunction_ss_sLuR::synapse0x1dda8f0() {
   return (neuron0x1dd8aa0()*-0.0723177);
}

double NNfunction_ss_sLuR::synapse0x1dda930() {
   return (neuron0x1dd8de0()*-0.0186659);
}

double NNfunction_ss_sLuR::synapse0x1dda970() {
   return (neuron0x1dd9120()*-0.120589);
}

double NNfunction_ss_sLuR::synapse0x1ddacf0() {
   return (neuron0x1dd4560()*-0.16861);
}

double NNfunction_ss_sLuR::synapse0x1ddad30() {
   return (neuron0x1dd48a0()*0.79716);
}

double NNfunction_ss_sLuR::synapse0x1ddad70() {
   return (neuron0x1dd4be0()*0.332973);
}

double NNfunction_ss_sLuR::synapse0x1ddadb0() {
   return (neuron0x1dd4f20()*-0.12216);
}

double NNfunction_ss_sLuR::synapse0x1ddadf0() {
   return (neuron0x1dd5260()*0.201912);
}

double NNfunction_ss_sLuR::synapse0x1ddae30() {
   return (neuron0x1dd55a0()*0.629413);
}

double NNfunction_ss_sLuR::synapse0x1ddae70() {
   return (neuron0x1dd58e0()*0.372054);
}

double NNfunction_ss_sLuR::synapse0x1ddaeb0() {
   return (neuron0x1dd5c20()*0.623922);
}

double NNfunction_ss_sLuR::synapse0x1ddaef0() {
   return (neuron0x1dd5f60()*-0.0292011);
}

double NNfunction_ss_sLuR::synapse0x1ddaf30() {
   return (neuron0x1dd62a0()*0.0984435);
}

double NNfunction_ss_sLuR::synapse0x1ddaf70() {
   return (neuron0x1dd65e0()*0.455471);
}

double NNfunction_ss_sLuR::synapse0x1ddafb0() {
   return (neuron0x1dd6920()*-0.581867);
}

double NNfunction_ss_sLuR::synapse0x1ddaff0() {
   return (neuron0x1dd6c60()*0.736228);
}

double NNfunction_ss_sLuR::synapse0x1ddb030() {
   return (neuron0x1dd6fa0()*-0.12737);
}

double NNfunction_ss_sLuR::synapse0x1ddb070() {
   return (neuron0x1dd72e0()*-0.0446028);
}

double NNfunction_ss_sLuR::synapse0x1ddb0b0() {
   return (neuron0x1dd7620()*-0.762981);
}

double NNfunction_ss_sLuR::synapse0x1ddab40() {
   return (neuron0x1dd7960()*0.188615);
}

double NNfunction_ss_sLuR::synapse0x1ddab80() {
   return (neuron0x1dd7ec0()*-0.183408);
}

double NNfunction_ss_sLuR::synapse0x1b93ac0() {
   return (neuron0x1dd80e0()*-0.406509);
}

double NNfunction_ss_sLuR::synapse0x1b93b00() {
   return (neuron0x1dd8420()*-0.2083);
}

double NNfunction_ss_sLuR::synapse0x1dc35f0() {
   return (neuron0x1dd8760()*-0.579263);
}

double NNfunction_ss_sLuR::synapse0x1dc3630() {
   return (neuron0x1dd8aa0()*0.828677);
}

double NNfunction_ss_sLuR::synapse0x1dc3670() {
   return (neuron0x1dd8de0()*-0.223287);
}

double NNfunction_ss_sLuR::synapse0x1dd44a0() {
   return (neuron0x1dd9120()*0.299433);
}

double NNfunction_ss_sLuR::synapse0x1dda600() {
   return (neuron0x1dd4560()*-0.0569504);
}

double NNfunction_ss_sLuR::synapse0x1dd44e0() {
   return (neuron0x1dd48a0()*0.261919);
}

double NNfunction_ss_sLuR::synapse0x1dd4520() {
   return (neuron0x1dd4be0()*-0.360688);
}

double NNfunction_ss_sLuR::synapse0x1ddb200() {
   return (neuron0x1dd4f20()*-0.678182);
}

double NNfunction_ss_sLuR::synapse0x1ddb240() {
   return (neuron0x1dd5260()*0.169487);
}

double NNfunction_ss_sLuR::synapse0x1ddb280() {
   return (neuron0x1dd55a0()*-0.167381);
}

double NNfunction_ss_sLuR::synapse0x1ddb2c0() {
   return (neuron0x1dd58e0()*-0.178085);
}

double NNfunction_ss_sLuR::synapse0x1ddb300() {
   return (neuron0x1dd5c20()*-0.0348714);
}

double NNfunction_ss_sLuR::synapse0x1ddb340() {
   return (neuron0x1dd5f60()*-0.230466);
}

double NNfunction_ss_sLuR::synapse0x1ddb380() {
   return (neuron0x1dd62a0()*0.170902);
}

double NNfunction_ss_sLuR::synapse0x1ddb3c0() {
   return (neuron0x1dd65e0()*0.0695305);
}

double NNfunction_ss_sLuR::synapse0x1ddb400() {
   return (neuron0x1dd6920()*0.406972);
}

double NNfunction_ss_sLuR::synapse0x1ddb440() {
   return (neuron0x1dd6c60()*0.816198);
}

double NNfunction_ss_sLuR::synapse0x1ddb480() {
   return (neuron0x1dd6fa0()*0.128845);
}

double NNfunction_ss_sLuR::synapse0x1ddb4c0() {
   return (neuron0x1dd72e0()*0.645892);
}

double NNfunction_ss_sLuR::synapse0x1ddb500() {
   return (neuron0x1dd7620()*0.00389137);
}

double NNfunction_ss_sLuR::synapse0x1dda450() {
   return (neuron0x1dd7960()*0.254474);
}

double NNfunction_ss_sLuR::synapse0x1dda490() {
   return (neuron0x1dd7ec0()*-0.323205);
}

double NNfunction_ss_sLuR::synapse0x1ddb650() {
   return (neuron0x1dd80e0()*0.124349);
}

double NNfunction_ss_sLuR::synapse0x1ddb690() {
   return (neuron0x1dd8420()*-0.0748805);
}

double NNfunction_ss_sLuR::synapse0x1ddb6d0() {
   return (neuron0x1dd8760()*-0.386484);
}

double NNfunction_ss_sLuR::synapse0x1ddb710() {
   return (neuron0x1dd8aa0()*-0.0790182);
}

double NNfunction_ss_sLuR::synapse0x1ddb750() {
   return (neuron0x1dd8de0()*0.230473);
}

double NNfunction_ss_sLuR::synapse0x1ddb790() {
   return (neuron0x1dd9120()*0.363278);
}

double NNfunction_ss_sLuR::synapse0x1ddbb10() {
   return (neuron0x1dd4560()*-0.0293569);
}

double NNfunction_ss_sLuR::synapse0x1ddbb50() {
   return (neuron0x1dd48a0()*-0.0121822);
}

double NNfunction_ss_sLuR::synapse0x1ddbb90() {
   return (neuron0x1dd4be0()*0.0320182);
}

double NNfunction_ss_sLuR::synapse0x1ddbbd0() {
   return (neuron0x1dd4f20()*1.73178);
}

double NNfunction_ss_sLuR::synapse0x1ddbc10() {
   return (neuron0x1dd5260()*-0.0556696);
}

double NNfunction_ss_sLuR::synapse0x1ddbc50() {
   return (neuron0x1dd55a0()*-0.00539423);
}

double NNfunction_ss_sLuR::synapse0x1ddbc90() {
   return (neuron0x1dd58e0()*-0.00441558);
}

double NNfunction_ss_sLuR::synapse0x1ddbcd0() {
   return (neuron0x1dd5c20()*-0.020247);
}

double NNfunction_ss_sLuR::synapse0x1ddbd10() {
   return (neuron0x1dd5f60()*0.0449413);
}

double NNfunction_ss_sLuR::synapse0x1ddbd50() {
   return (neuron0x1dd62a0()*-0.046298);
}

double NNfunction_ss_sLuR::synapse0x1ddbd90() {
   return (neuron0x1dd65e0()*0.0395823);
}

double NNfunction_ss_sLuR::synapse0x1ddbdd0() {
   return (neuron0x1dd6920()*-0.0124374);
}

double NNfunction_ss_sLuR::synapse0x1ddbe10() {
   return (neuron0x1dd6c60()*-0.0538872);
}

double NNfunction_ss_sLuR::synapse0x1ddbe50() {
   return (neuron0x1dd6fa0()*-0.0292068);
}

double NNfunction_ss_sLuR::synapse0x1ddbe90() {
   return (neuron0x1dd72e0()*-0.0933336);
}

double NNfunction_ss_sLuR::synapse0x1ddbed0() {
   return (neuron0x1dd7620()*-0.0450849);
}

double NNfunction_ss_sLuR::synapse0x1ddb960() {
   return (neuron0x1dd7960()*-0.116251);
}

double NNfunction_ss_sLuR::synapse0x1ddb9a0() {
   return (neuron0x1dd7ec0()*-0.0607581);
}

double NNfunction_ss_sLuR::synapse0x1ddc020() {
   return (neuron0x1dd80e0()*0.0286362);
}

double NNfunction_ss_sLuR::synapse0x1ddc060() {
   return (neuron0x1dd8420()*0.0336681);
}

double NNfunction_ss_sLuR::synapse0x1ddc0a0() {
   return (neuron0x1dd8760()*0.00249794);
}

double NNfunction_ss_sLuR::synapse0x1ddc0e0() {
   return (neuron0x1dd8aa0()*-0.0159675);
}

double NNfunction_ss_sLuR::synapse0x1ddc120() {
   return (neuron0x1dd8de0()*0.00698376);
}

double NNfunction_ss_sLuR::synapse0x1ddc160() {
   return (neuron0x1dd9120()*-0.0371807);
}

double NNfunction_ss_sLuR::synapse0x1ddc4e0() {
   return (neuron0x1dd4560()*0.0910608);
}

double NNfunction_ss_sLuR::synapse0x1ddc520() {
   return (neuron0x1dd48a0()*-0.0762708);
}

double NNfunction_ss_sLuR::synapse0x1ddc560() {
   return (neuron0x1dd4be0()*-0.155743);
}

double NNfunction_ss_sLuR::synapse0x1ddc5a0() {
   return (neuron0x1dd4f20()*0.331635);
}

double NNfunction_ss_sLuR::synapse0x1ddc5e0() {
   return (neuron0x1dd5260()*0.576633);
}

double NNfunction_ss_sLuR::synapse0x1ddc620() {
   return (neuron0x1dd55a0()*-0.211426);
}

double NNfunction_ss_sLuR::synapse0x1ddc660() {
   return (neuron0x1dd58e0()*-0.172133);
}

double NNfunction_ss_sLuR::synapse0x1ddc6a0() {
   return (neuron0x1dd5c20()*0.00521564);
}

double NNfunction_ss_sLuR::synapse0x1ddc6e0() {
   return (neuron0x1dd5f60()*0.128376);
}

double NNfunction_ss_sLuR::synapse0x1b93e30() {
   return (neuron0x1dd62a0()*0.114562);
}

double NNfunction_ss_sLuR::synapse0x1b93e70() {
   return (neuron0x1dd65e0()*0.0270239);
}

double NNfunction_ss_sLuR::synapse0x1b93eb0() {
   return (neuron0x1dd6920()*-0.490586);
}

double NNfunction_ss_sLuR::synapse0x1b93ef0() {
   return (neuron0x1dd6c60()*-0.178772);
}

double NNfunction_ss_sLuR::synapse0x1b93f30() {
   return (neuron0x1dd6fa0()*-0.296902);
}

double NNfunction_ss_sLuR::synapse0x1b93f70() {
   return (neuron0x1dd72e0()*-0.492667);
}

double NNfunction_ss_sLuR::synapse0x1b93fb0() {
   return (neuron0x1dd7620()*-0.383122);
}

double NNfunction_ss_sLuR::synapse0x1ddc330() {
   return (neuron0x1dd7960()*-0.393321);
}

double NNfunction_ss_sLuR::synapse0x1ddc370() {
   return (neuron0x1dd7ec0()*-1.23564);
}

double NNfunction_ss_sLuR::synapse0x1b94100() {
   return (neuron0x1dd80e0()*-0.0698494);
}

double NNfunction_ss_sLuR::synapse0x1b94140() {
   return (neuron0x1dd8420()*0.637173);
}

double NNfunction_ss_sLuR::synapse0x1b94180() {
   return (neuron0x1dd8760()*-0.436338);
}

double NNfunction_ss_sLuR::synapse0x1b941c0() {
   return (neuron0x1dd8aa0()*-0.348285);
}

double NNfunction_ss_sLuR::synapse0x1b94200() {
   return (neuron0x1dd8de0()*0.192663);
}

double NNfunction_ss_sLuR::synapse0x1ddcf30() {
   return (neuron0x1dd9120()*0.489913);
}

double NNfunction_ss_sLuR::synapse0x1ddd2b0() {
   return (neuron0x1dd4560()*-0.178795);
}

double NNfunction_ss_sLuR::synapse0x1ddd2f0() {
   return (neuron0x1dd48a0()*0.265405);
}

double NNfunction_ss_sLuR::synapse0x1ddd330() {
   return (neuron0x1dd4be0()*0.0105908);
}

double NNfunction_ss_sLuR::synapse0x1ddd370() {
   return (neuron0x1dd4f20()*-0.353158);
}

double NNfunction_ss_sLuR::synapse0x1ddd3b0() {
   return (neuron0x1dd5260()*0.158957);
}

double NNfunction_ss_sLuR::synapse0x1ddd3f0() {
   return (neuron0x1dd55a0()*-0.47652);
}

double NNfunction_ss_sLuR::synapse0x1ddd430() {
   return (neuron0x1dd58e0()*-0.392389);
}

double NNfunction_ss_sLuR::synapse0x1ddd470() {
   return (neuron0x1dd5c20()*0.183237);
}

double NNfunction_ss_sLuR::synapse0x1ddd4b0() {
   return (neuron0x1dd5f60()*0.868616);
}

double NNfunction_ss_sLuR::synapse0x1ddd4f0() {
   return (neuron0x1dd62a0()*0.265484);
}

double NNfunction_ss_sLuR::synapse0x1ddd530() {
   return (neuron0x1dd65e0()*0.503232);
}

double NNfunction_ss_sLuR::synapse0x1ddd570() {
   return (neuron0x1dd6920()*-0.679761);
}

double NNfunction_ss_sLuR::synapse0x1ddd5b0() {
   return (neuron0x1dd6c60()*0.882454);
}

double NNfunction_ss_sLuR::synapse0x1ddd5f0() {
   return (neuron0x1dd6fa0()*-0.840774);
}

double NNfunction_ss_sLuR::synapse0x1ddd630() {
   return (neuron0x1dd72e0()*-0.348573);
}

double NNfunction_ss_sLuR::synapse0x1ddd670() {
   return (neuron0x1dd7620()*-0.531624);
}

double NNfunction_ss_sLuR::synapse0x1ddd100() {
   return (neuron0x1dd7960()*-0.905025);
}

double NNfunction_ss_sLuR::synapse0x1ddd140() {
   return (neuron0x1dd7ec0()*0.66511);
}

double NNfunction_ss_sLuR::synapse0x1ddd7c0() {
   return (neuron0x1dd80e0()*-0.0684063);
}

double NNfunction_ss_sLuR::synapse0x1ddd800() {
   return (neuron0x1dd8420()*-0.090595);
}

double NNfunction_ss_sLuR::synapse0x1ddd840() {
   return (neuron0x1dd8760()*0.650945);
}

double NNfunction_ss_sLuR::synapse0x1ddd880() {
   return (neuron0x1dd8aa0()*0.198998);
}

double NNfunction_ss_sLuR::synapse0x1ddd8c0() {
   return (neuron0x1dd8de0()*0.324136);
}

double NNfunction_ss_sLuR::synapse0x1ddd900() {
   return (neuron0x1dd9120()*0.280292);
}

double NNfunction_ss_sLuR::synapse0x1dddc80() {
   return (neuron0x1dd4560()*-0.270733);
}

double NNfunction_ss_sLuR::synapse0x1dddcc0() {
   return (neuron0x1dd48a0()*-0.254879);
}

double NNfunction_ss_sLuR::synapse0x1dddd00() {
   return (neuron0x1dd4be0()*-0.0668249);
}

double NNfunction_ss_sLuR::synapse0x1dddd40() {
   return (neuron0x1dd4f20()*-0.387242);
}

double NNfunction_ss_sLuR::synapse0x1dddd80() {
   return (neuron0x1dd5260()*0.547546);
}

double NNfunction_ss_sLuR::synapse0x1ddddc0() {
   return (neuron0x1dd55a0()*-0.153724);
}

double NNfunction_ss_sLuR::synapse0x1ddde00() {
   return (neuron0x1dd58e0()*0.028648);
}

double NNfunction_ss_sLuR::synapse0x1ddde40() {
   return (neuron0x1dd5c20()*-0.291749);
}

double NNfunction_ss_sLuR::synapse0x1ddde80() {
   return (neuron0x1dd5f60()*0.862372);
}

double NNfunction_ss_sLuR::synapse0x1dddec0() {
   return (neuron0x1dd62a0()*-0.18825);
}

double NNfunction_ss_sLuR::synapse0x1dddf00() {
   return (neuron0x1dd65e0()*0.788974);
}

double NNfunction_ss_sLuR::synapse0x1dddf40() {
   return (neuron0x1dd6920()*0.118922);
}

double NNfunction_ss_sLuR::synapse0x1dddf80() {
   return (neuron0x1dd6c60()*-0.348658);
}

double NNfunction_ss_sLuR::synapse0x1dddfc0() {
   return (neuron0x1dd6fa0()*-0.153986);
}

double NNfunction_ss_sLuR::synapse0x1dde000() {
   return (neuron0x1dd72e0()*-0.216371);
}

double NNfunction_ss_sLuR::synapse0x1dde040() {
   return (neuron0x1dd7620()*0.132766);
}

double NNfunction_ss_sLuR::synapse0x1dddad0() {
   return (neuron0x1dd7960()*-0.583392);
}

double NNfunction_ss_sLuR::synapse0x1dddb10() {
   return (neuron0x1dd7ec0()*-0.417481);
}

double NNfunction_ss_sLuR::synapse0x1dde190() {
   return (neuron0x1dd80e0()*-0.641662);
}

double NNfunction_ss_sLuR::synapse0x1dde1d0() {
   return (neuron0x1dd8420()*-0.149204);
}

double NNfunction_ss_sLuR::synapse0x1dde210() {
   return (neuron0x1dd8760()*0.0587133);
}

double NNfunction_ss_sLuR::synapse0x1dde250() {
   return (neuron0x1dd8aa0()*-0.344885);
}

double NNfunction_ss_sLuR::synapse0x1dde290() {
   return (neuron0x1dd8de0()*0.111619);
}

double NNfunction_ss_sLuR::synapse0x1dde2d0() {
   return (neuron0x1dd9120()*-0.138038);
}

double NNfunction_ss_sLuR::synapse0x1dd7db0() {
   return (neuron0x1dd4560()*0.050754);
}

double NNfunction_ss_sLuR::synapse0x1dd7df0() {
   return (neuron0x1dd48a0()*-0.0740717);
}

double NNfunction_ss_sLuR::synapse0x1dd7e30() {
   return (neuron0x1dd4be0()*-0.400472);
}

double NNfunction_ss_sLuR::synapse0x1dd7e70() {
   return (neuron0x1dd4f20()*0.149431);
}

double NNfunction_ss_sLuR::synapse0x1dde860() {
   return (neuron0x1dd5260()*-0.121485);
}

double NNfunction_ss_sLuR::synapse0x1dde8a0() {
   return (neuron0x1dd55a0()*-0.298009);
}

double NNfunction_ss_sLuR::synapse0x1dde8e0() {
   return (neuron0x1dd58e0()*0.473625);
}

double NNfunction_ss_sLuR::synapse0x1dde920() {
   return (neuron0x1dd5c20()*-0.461185);
}

double NNfunction_ss_sLuR::synapse0x1dde960() {
   return (neuron0x1dd5f60()*-0.208309);
}

double NNfunction_ss_sLuR::synapse0x1dde9a0() {
   return (neuron0x1dd62a0()*-0.604254);
}

double NNfunction_ss_sLuR::synapse0x1dde9e0() {
   return (neuron0x1dd65e0()*0.124172);
}

double NNfunction_ss_sLuR::synapse0x1ddea20() {
   return (neuron0x1dd6920()*0.401389);
}

double NNfunction_ss_sLuR::synapse0x1ddea60() {
   return (neuron0x1dd6c60()*-0.406787);
}

double NNfunction_ss_sLuR::synapse0x1ddeaa0() {
   return (neuron0x1dd6fa0()*0.13848);
}

double NNfunction_ss_sLuR::synapse0x1ddeae0() {
   return (neuron0x1dd72e0()*-0.676651);
}

double NNfunction_ss_sLuR::synapse0x1ddeb20() {
   return (neuron0x1dd7620()*0.641332);
}

double NNfunction_ss_sLuR::synapse0x1dde4a0() {
   return (neuron0x1dd7960()*0.163298);
}

double NNfunction_ss_sLuR::synapse0x1dde4e0() {
   return (neuron0x1dd7ec0()*1.09543);
}

double NNfunction_ss_sLuR::synapse0x1ddec70() {
   return (neuron0x1dd80e0()*1.15045);
}

double NNfunction_ss_sLuR::synapse0x1ddecb0() {
   return (neuron0x1dd8420()*0.304774);
}

double NNfunction_ss_sLuR::synapse0x1ddecf0() {
   return (neuron0x1dd8760()*0.00942858);
}

double NNfunction_ss_sLuR::synapse0x1dded30() {
   return (neuron0x1dd8aa0()*0.393491);
}

double NNfunction_ss_sLuR::synapse0x1dded70() {
   return (neuron0x1dd8de0()*-0.253734);
}

double NNfunction_ss_sLuR::synapse0x1ddedb0() {
   return (neuron0x1dd9120()*0.139826);
}

double NNfunction_ss_sLuR::synapse0x1ddf130() {
   return (neuron0x1dd4560()*-0.000907855);
}

double NNfunction_ss_sLuR::synapse0x1ddf170() {
   return (neuron0x1dd48a0()*0.0131142);
}

double NNfunction_ss_sLuR::synapse0x1ddf1b0() {
   return (neuron0x1dd4be0()*0.0298203);
}

double NNfunction_ss_sLuR::synapse0x1ddf1f0() {
   return (neuron0x1dd4f20()*1.54787);
}

double NNfunction_ss_sLuR::synapse0x1ddf230() {
   return (neuron0x1dd5260()*-0.00445896);
}

double NNfunction_ss_sLuR::synapse0x1ddf270() {
   return (neuron0x1dd55a0()*-0.00999225);
}

double NNfunction_ss_sLuR::synapse0x1ddf2b0() {
   return (neuron0x1dd58e0()*-0.0062205);
}

double NNfunction_ss_sLuR::synapse0x1ddf2f0() {
   return (neuron0x1dd5c20()*0.00576748);
}

double NNfunction_ss_sLuR::synapse0x1ddf330() {
   return (neuron0x1dd5f60()*-0.000221785);
}

double NNfunction_ss_sLuR::synapse0x1ddf370() {
   return (neuron0x1dd62a0()*-0.00636751);
}

double NNfunction_ss_sLuR::synapse0x1ddf3b0() {
   return (neuron0x1dd65e0()*0.025758);
}

double NNfunction_ss_sLuR::synapse0x1ddf3f0() {
   return (neuron0x1dd6920()*-0.0239199);
}

double NNfunction_ss_sLuR::synapse0x1ddf430() {
   return (neuron0x1dd6c60()*-0.479307);
}

double NNfunction_ss_sLuR::synapse0x1ddf470() {
   return (neuron0x1dd6fa0()*0.00325493);
}

double NNfunction_ss_sLuR::synapse0x1ddf4b0() {
   return (neuron0x1dd72e0()*-0.722657);
}

double NNfunction_ss_sLuR::synapse0x1ddf4f0() {
   return (neuron0x1dd7620()*-0.0174067);
}

double NNfunction_ss_sLuR::synapse0x1ddef80() {
   return (neuron0x1dd7960()*-0.0268445);
}

double NNfunction_ss_sLuR::synapse0x1ddefc0() {
   return (neuron0x1dd7ec0()*-0.0286372);
}

double NNfunction_ss_sLuR::synapse0x1ddf640() {
   return (neuron0x1dd80e0()*0.00303477);
}

double NNfunction_ss_sLuR::synapse0x1ddf680() {
   return (neuron0x1dd8420()*0.00885644);
}

double NNfunction_ss_sLuR::synapse0x1ddf6c0() {
   return (neuron0x1dd8760()*0.0205734);
}

double NNfunction_ss_sLuR::synapse0x1ddf700() {
   return (neuron0x1dd8aa0()*-0.00126758);
}

double NNfunction_ss_sLuR::synapse0x1ddf740() {
   return (neuron0x1dd8de0()*-0.000972069);
}

double NNfunction_ss_sLuR::synapse0x1ddf780() {
   return (neuron0x1dd9120()*0.0218219);
}

double NNfunction_ss_sLuR::synapse0x1ddfb00() {
   return (neuron0x1dd4560()*0.149924);
}

double NNfunction_ss_sLuR::synapse0x1ddfb40() {
   return (neuron0x1dd48a0()*0.439772);
}

double NNfunction_ss_sLuR::synapse0x1ddfb80() {
   return (neuron0x1dd4be0()*-0.0863142);
}

double NNfunction_ss_sLuR::synapse0x1ddfbc0() {
   return (neuron0x1dd4f20()*0.847641);
}

double NNfunction_ss_sLuR::synapse0x1ddfc00() {
   return (neuron0x1dd5260()*0.591243);
}

double NNfunction_ss_sLuR::synapse0x1ddfc40() {
   return (neuron0x1dd55a0()*0.353582);
}

double NNfunction_ss_sLuR::synapse0x1ddfc80() {
   return (neuron0x1dd58e0()*0.244532);
}

double NNfunction_ss_sLuR::synapse0x1ddfcc0() {
   return (neuron0x1dd5c20()*0.613834);
}

double NNfunction_ss_sLuR::synapse0x1ddfd00() {
   return (neuron0x1dd5f60()*-0.0888848);
}

double NNfunction_ss_sLuR::synapse0x1ddfd40() {
   return (neuron0x1dd62a0()*-0.0273001);
}

double NNfunction_ss_sLuR::synapse0x1ddfd80() {
   return (neuron0x1dd65e0()*-0.111018);
}

double NNfunction_ss_sLuR::synapse0x1ddfdc0() {
   return (neuron0x1dd6920()*0.377658);
}

double NNfunction_ss_sLuR::synapse0x1ddfe00() {
   return (neuron0x1dd6c60()*-0.165462);
}

double NNfunction_ss_sLuR::synapse0x1ddfe40() {
   return (neuron0x1dd6fa0()*-0.18588);
}

double NNfunction_ss_sLuR::synapse0x1ddfe80() {
   return (neuron0x1dd72e0()*-0.14342);
}

double NNfunction_ss_sLuR::synapse0x1ddfec0() {
   return (neuron0x1dd7620()*0.294463);
}

double NNfunction_ss_sLuR::synapse0x1ddf950() {
   return (neuron0x1dd7960()*0.184732);
}

double NNfunction_ss_sLuR::synapse0x1ddf990() {
   return (neuron0x1dd7ec0()*0.431171);
}

double NNfunction_ss_sLuR::synapse0x1ddc720() {
   return (neuron0x1dd80e0()*0.22919);
}

double NNfunction_ss_sLuR::synapse0x1ddc760() {
   return (neuron0x1dd8420()*0.438339);
}

double NNfunction_ss_sLuR::synapse0x1ddc7a0() {
   return (neuron0x1dd8760()*0.269);
}

double NNfunction_ss_sLuR::synapse0x1ddc7e0() {
   return (neuron0x1dd8aa0()*0.00400983);
}

double NNfunction_ss_sLuR::synapse0x1ddc820() {
   return (neuron0x1dd8de0()*0.507901);
}

double NNfunction_ss_sLuR::synapse0x1ddc860() {
   return (neuron0x1dd9120()*0.300575);
}

double NNfunction_ss_sLuR::synapse0x1ddcbe0() {
   return (neuron0x1dd4560()*-0.317523);
}

double NNfunction_ss_sLuR::synapse0x1ddcc20() {
   return (neuron0x1dd48a0()*0.523818);
}

double NNfunction_ss_sLuR::synapse0x1ddcc60() {
   return (neuron0x1dd4be0()*0.184177);
}

double NNfunction_ss_sLuR::synapse0x1ddcca0() {
   return (neuron0x1dd4f20()*0.478643);
}

double NNfunction_ss_sLuR::synapse0x1ddcce0() {
   return (neuron0x1dd5260()*-1.26991);
}

double NNfunction_ss_sLuR::synapse0x1ddcd20() {
   return (neuron0x1dd55a0()*0.567851);
}

double NNfunction_ss_sLuR::synapse0x1ddcd60() {
   return (neuron0x1dd58e0()*0.0177885);
}

double NNfunction_ss_sLuR::synapse0x1ddcda0() {
   return (neuron0x1dd5c20()*0.11161);
}

double NNfunction_ss_sLuR::synapse0x1ddcde0() {
   return (neuron0x1dd5f60()*0.227702);
}

double NNfunction_ss_sLuR::synapse0x1ddce20() {
   return (neuron0x1dd62a0()*-0.285591);
}

double NNfunction_ss_sLuR::synapse0x1ddce60() {
   return (neuron0x1dd65e0()*-0.141401);
}

double NNfunction_ss_sLuR::synapse0x1ddcea0() {
   return (neuron0x1dd6920()*0.0208904);
}

double NNfunction_ss_sLuR::synapse0x1ddcee0() {
   return (neuron0x1dd6c60()*-0.157356);
}

double NNfunction_ss_sLuR::synapse0x1de1020() {
   return (neuron0x1dd6fa0()*0.113835);
}

double NNfunction_ss_sLuR::synapse0x1de1060() {
   return (neuron0x1dd72e0()*0.554007);
}

double NNfunction_ss_sLuR::synapse0x1de10a0() {
   return (neuron0x1dd7620()*-0.607164);
}

double NNfunction_ss_sLuR::synapse0x1ddca30() {
   return (neuron0x1dd7960()*0.0509921);
}

double NNfunction_ss_sLuR::synapse0x1ddca70() {
   return (neuron0x1dd7ec0()*0.161345);
}

double NNfunction_ss_sLuR::synapse0x1de11f0() {
   return (neuron0x1dd80e0()*-0.0924337);
}

double NNfunction_ss_sLuR::synapse0x1de1230() {
   return (neuron0x1dd8420()*0.0468023);
}

double NNfunction_ss_sLuR::synapse0x1de1270() {
   return (neuron0x1dd8760()*0.0186672);
}

double NNfunction_ss_sLuR::synapse0x1de12b0() {
   return (neuron0x1dd8aa0()*-0.0884208);
}

double NNfunction_ss_sLuR::synapse0x1de12f0() {
   return (neuron0x1dd8de0()*-0.288169);
}

double NNfunction_ss_sLuR::synapse0x1de1330() {
   return (neuron0x1dd9120()*0.247553);
}

double NNfunction_ss_sLuR::synapse0x1de16b0() {
   return (neuron0x1dd4560()*-0.771314);
}

double NNfunction_ss_sLuR::synapse0x1de16f0() {
   return (neuron0x1dd48a0()*-0.206126);
}

double NNfunction_ss_sLuR::synapse0x1de1730() {
   return (neuron0x1dd4be0()*0.055747);
}

double NNfunction_ss_sLuR::synapse0x1de1770() {
   return (neuron0x1dd4f20()*0.476218);
}

double NNfunction_ss_sLuR::synapse0x1de17b0() {
   return (neuron0x1dd5260()*-0.212047);
}

double NNfunction_ss_sLuR::synapse0x1de17f0() {
   return (neuron0x1dd55a0()*-0.0853033);
}

double NNfunction_ss_sLuR::synapse0x1de1830() {
   return (neuron0x1dd58e0()*-0.625358);
}

double NNfunction_ss_sLuR::synapse0x1de1870() {
   return (neuron0x1dd5c20()*-0.58171);
}

double NNfunction_ss_sLuR::synapse0x1de18b0() {
   return (neuron0x1dd5f60()*0.613787);
}

double NNfunction_ss_sLuR::synapse0x1de18f0() {
   return (neuron0x1dd62a0()*-0.276022);
}

double NNfunction_ss_sLuR::synapse0x1de1930() {
   return (neuron0x1dd65e0()*-0.467633);
}

double NNfunction_ss_sLuR::synapse0x1de1970() {
   return (neuron0x1dd6920()*-0.305428);
}

double NNfunction_ss_sLuR::synapse0x1de19b0() {
   return (neuron0x1dd6c60()*0.145618);
}

double NNfunction_ss_sLuR::synapse0x1de19f0() {
   return (neuron0x1dd6fa0()*0.503435);
}

double NNfunction_ss_sLuR::synapse0x1de1a30() {
   return (neuron0x1dd72e0()*0.572025);
}

double NNfunction_ss_sLuR::synapse0x1de1a70() {
   return (neuron0x1dd7620()*-0.836235);
}

double NNfunction_ss_sLuR::synapse0x1de1500() {
   return (neuron0x1dd7960()*0.336014);
}

double NNfunction_ss_sLuR::synapse0x1de1540() {
   return (neuron0x1dd7ec0()*-0.309884);
}

double NNfunction_ss_sLuR::synapse0x1de1bc0() {
   return (neuron0x1dd80e0()*-0.066073);
}

double NNfunction_ss_sLuR::synapse0x1de1c00() {
   return (neuron0x1dd8420()*-0.0844819);
}

double NNfunction_ss_sLuR::synapse0x1de1c40() {
   return (neuron0x1dd8760()*-0.324493);
}

double NNfunction_ss_sLuR::synapse0x1de1c80() {
   return (neuron0x1dd8aa0()*-0.271863);
}

double NNfunction_ss_sLuR::synapse0x1de1cc0() {
   return (neuron0x1dd8de0()*0.155093);
}

double NNfunction_ss_sLuR::synapse0x1de1d00() {
   return (neuron0x1dd9120()*-0.0260839);
}

double NNfunction_ss_sLuR::synapse0x1de2080() {
   return (neuron0x1dd4560()*0.00605915);
}

double NNfunction_ss_sLuR::synapse0x1de20c0() {
   return (neuron0x1dd48a0()*0.0117602);
}

double NNfunction_ss_sLuR::synapse0x1de2100() {
   return (neuron0x1dd4be0()*-0.000756248);
}

double NNfunction_ss_sLuR::synapse0x1de2140() {
   return (neuron0x1dd4f20()*-2.09901);
}

double NNfunction_ss_sLuR::synapse0x1de2180() {
   return (neuron0x1dd5260()*0.000528239);
}

double NNfunction_ss_sLuR::synapse0x1de21c0() {
   return (neuron0x1dd55a0()*-0.00297989);
}

double NNfunction_ss_sLuR::synapse0x1de2200() {
   return (neuron0x1dd58e0()*-0.0113698);
}

double NNfunction_ss_sLuR::synapse0x1de2240() {
   return (neuron0x1dd5c20()*0.00161793);
}

double NNfunction_ss_sLuR::synapse0x1de2280() {
   return (neuron0x1dd5f60()*-0.0013692);
}

double NNfunction_ss_sLuR::synapse0x1de22c0() {
   return (neuron0x1dd62a0()*-0.000862496);
}

double NNfunction_ss_sLuR::synapse0x1de2300() {
   return (neuron0x1dd65e0()*-0.00612326);
}

double NNfunction_ss_sLuR::synapse0x1de2340() {
   return (neuron0x1dd6920()*-0.00289771);
}

double NNfunction_ss_sLuR::synapse0x1de2380() {
   return (neuron0x1dd6c60()*-0.102601);
}

double NNfunction_ss_sLuR::synapse0x1de23c0() {
   return (neuron0x1dd6fa0()*0.000291671);
}

double NNfunction_ss_sLuR::synapse0x1de2400() {
   return (neuron0x1dd72e0()*-0.0760076);
}

double NNfunction_ss_sLuR::synapse0x1de2440() {
   return (neuron0x1dd7620()*0.0035812);
}

double NNfunction_ss_sLuR::synapse0x1de1ed0() {
   return (neuron0x1dd7960()*0.000732072);
}

double NNfunction_ss_sLuR::synapse0x1de1f10() {
   return (neuron0x1dd7ec0()*-0.00243271);
}

double NNfunction_ss_sLuR::synapse0x1de2590() {
   return (neuron0x1dd80e0()*-0.0106909);
}

double NNfunction_ss_sLuR::synapse0x1de25d0() {
   return (neuron0x1dd8420()*-0.00356726);
}

double NNfunction_ss_sLuR::synapse0x1de2610() {
   return (neuron0x1dd8760()*-0.00378218);
}

double NNfunction_ss_sLuR::synapse0x1de2650() {
   return (neuron0x1dd8aa0()*-0.00348526);
}

double NNfunction_ss_sLuR::synapse0x1de2690() {
   return (neuron0x1dd8de0()*0.0067892);
}

double NNfunction_ss_sLuR::synapse0x1de26d0() {
   return (neuron0x1dd9120()*-0.000375156);
}

double NNfunction_ss_sLuR::synapse0x1de2a50() {
   return (neuron0x1dd4560()*0.0741601);
}

double NNfunction_ss_sLuR::synapse0x1de2a90() {
   return (neuron0x1dd48a0()*-0.0292266);
}

double NNfunction_ss_sLuR::synapse0x1de2ad0() {
   return (neuron0x1dd4be0()*0.012797);
}

double NNfunction_ss_sLuR::synapse0x1de2b10() {
   return (neuron0x1dd4f20()*0.481872);
}

double NNfunction_ss_sLuR::synapse0x1de2b50() {
   return (neuron0x1dd5260()*-0.154535);
}

double NNfunction_ss_sLuR::synapse0x1de2b90() {
   return (neuron0x1dd55a0()*-0.235);
}

double NNfunction_ss_sLuR::synapse0x1de2bd0() {
   return (neuron0x1dd58e0()*0.128212);
}

double NNfunction_ss_sLuR::synapse0x1de2c10() {
   return (neuron0x1dd5c20()*0.102386);
}

double NNfunction_ss_sLuR::synapse0x1de2c50() {
   return (neuron0x1dd5f60()*-0.0164111);
}

double NNfunction_ss_sLuR::synapse0x1de2c90() {
   return (neuron0x1dd62a0()*0.0977064);
}

double NNfunction_ss_sLuR::synapse0x1de2cd0() {
   return (neuron0x1dd65e0()*0.18221);
}

double NNfunction_ss_sLuR::synapse0x1de2d10() {
   return (neuron0x1dd6920()*0.151502);
}

double NNfunction_ss_sLuR::synapse0x1de2d50() {
   return (neuron0x1dd6c60()*1.94807);
}

double NNfunction_ss_sLuR::synapse0x1de2d90() {
   return (neuron0x1dd6fa0()*-0.0872693);
}

double NNfunction_ss_sLuR::synapse0x1de2dd0() {
   return (neuron0x1dd72e0()*1.94813);
}

double NNfunction_ss_sLuR::synapse0x1de2e10() {
   return (neuron0x1dd7620()*-0.053561);
}

double NNfunction_ss_sLuR::synapse0x1de28a0() {
   return (neuron0x1dd7960()*0.054552);
}

double NNfunction_ss_sLuR::synapse0x1de28e0() {
   return (neuron0x1dd7ec0()*0.0241086);
}

double NNfunction_ss_sLuR::synapse0x1de2f60() {
   return (neuron0x1dd80e0()*0.0731952);
}

double NNfunction_ss_sLuR::synapse0x1de2fa0() {
   return (neuron0x1dd8420()*-0.0223043);
}

double NNfunction_ss_sLuR::synapse0x1de2fe0() {
   return (neuron0x1dd8760()*0.174971);
}

double NNfunction_ss_sLuR::synapse0x1de3020() {
   return (neuron0x1dd8aa0()*0.122694);
}

double NNfunction_ss_sLuR::synapse0x1de3060() {
   return (neuron0x1dd8de0()*-0.128145);
}

double NNfunction_ss_sLuR::synapse0x1de30a0() {
   return (neuron0x1dd9120()*-0.14691);
}

double NNfunction_ss_sLuR::synapse0x1de3420() {
   return (neuron0x1dd4560()*-0.414165);
}

double NNfunction_ss_sLuR::synapse0x1dd4780() {
   return (neuron0x1dd48a0()*-0.683731);
}

double NNfunction_ss_sLuR::synapse0x1dd47c0() {
   return (neuron0x1dd4be0()*0.437931);
}

double NNfunction_ss_sLuR::synapse0x1dd4ac0() {
   return (neuron0x1dd4f20()*-0.0969328);
}

double NNfunction_ss_sLuR::synapse0x1dd4b00() {
   return (neuron0x1dd5260()*-0.430444);
}

double NNfunction_ss_sLuR::synapse0x1dd4e00() {
   return (neuron0x1dd55a0()*-0.110357);
}

double NNfunction_ss_sLuR::synapse0x1dd4e40() {
   return (neuron0x1dd58e0()*0.109104);
}

double NNfunction_ss_sLuR::synapse0x1dd5140() {
   return (neuron0x1dd5c20()*0.543472);
}

double NNfunction_ss_sLuR::synapse0x1dd5180() {
   return (neuron0x1dd5f60()*0.770962);
}

double NNfunction_ss_sLuR::synapse0x1dd5480() {
   return (neuron0x1dd62a0()*0.19592);
}

double NNfunction_ss_sLuR::synapse0x1dd54c0() {
   return (neuron0x1dd65e0()*-0.11024);
}

double NNfunction_ss_sLuR::synapse0x1dd57c0() {
   return (neuron0x1dd6920()*-0.85787);
}

double NNfunction_ss_sLuR::synapse0x1dd5800() {
   return (neuron0x1dd6c60()*-1.31742);
}

double NNfunction_ss_sLuR::synapse0x1dd5b00() {
   return (neuron0x1dd6fa0()*-0.34172);
}

double NNfunction_ss_sLuR::synapse0x1dd5b40() {
   return (neuron0x1dd72e0()*0.12894);
}

double NNfunction_ss_sLuR::synapse0x1dd5e40() {
   return (neuron0x1dd7620()*0.340635);
}

double NNfunction_ss_sLuR::synapse0x1dd5e80() {
   return (neuron0x1dd7960()*-0.444003);
}

double NNfunction_ss_sLuR::synapse0x1dd6180() {
   return (neuron0x1dd7ec0()*-0.685083);
}

double NNfunction_ss_sLuR::synapse0x1dd61c0() {
   return (neuron0x1dd80e0()*-0.129655);
}

double NNfunction_ss_sLuR::synapse0x1dd64c0() {
   return (neuron0x1dd8420()*0.745273);
}

double NNfunction_ss_sLuR::synapse0x1dd6500() {
   return (neuron0x1dd8760()*0.328797);
}

double NNfunction_ss_sLuR::synapse0x1dd6800() {
   return (neuron0x1dd8aa0()*0.409634);
}

double NNfunction_ss_sLuR::synapse0x1dd6840() {
   return (neuron0x1dd8de0()*0.195926);
}

double NNfunction_ss_sLuR::synapse0x1dd6b40() {
   return (neuron0x1dd9120()*0.301286);
}

double NNfunction_ss_sLuR::synapse0x1dd6b80() {
   return (neuron0x1dd4560()*0.255913);
}

double NNfunction_ss_sLuR::synapse0x1dd7840() {
   return (neuron0x1dd48a0()*-0.420528);
}

double NNfunction_ss_sLuR::synapse0x1dd7880() {
   return (neuron0x1dd4be0()*0.0558564);
}

double NNfunction_ss_sLuR::synapse0x1de3270() {
   return (neuron0x1dd4f20()*0.589475);
}

double NNfunction_ss_sLuR::synapse0x1de32b0() {
   return (neuron0x1dd5260()*-0.0491521);
}

double NNfunction_ss_sLuR::synapse0x1dd7b80() {
   return (neuron0x1dd55a0()*-0.105864);
}

double NNfunction_ss_sLuR::synapse0x1dd7bc0() {
   return (neuron0x1dd58e0()*-0.166865);
}

double NNfunction_ss_sLuR::synapse0x1b85b50() {
   return (neuron0x1dd5c20()*-0.391891);
}

double NNfunction_ss_sLuR::synapse0x1b85b90() {
   return (neuron0x1dd5f60()*0.281754);
}

double NNfunction_ss_sLuR::synapse0x1dd8300() {
   return (neuron0x1dd62a0()*0.81393);
}

double NNfunction_ss_sLuR::synapse0x1dd8340() {
   return (neuron0x1dd65e0()*0.31532);
}

double NNfunction_ss_sLuR::synapse0x1dd8640() {
   return (neuron0x1dd6920()*0.350925);
}

double NNfunction_ss_sLuR::synapse0x1dd8680() {
   return (neuron0x1dd6c60()*-0.528433);
}

double NNfunction_ss_sLuR::synapse0x1dd8980() {
   return (neuron0x1dd6fa0()*-0.132081);
}

double NNfunction_ss_sLuR::synapse0x1dd89c0() {
   return (neuron0x1dd72e0()*-0.161344);
}

double NNfunction_ss_sLuR::synapse0x1dd8cc0() {
   return (neuron0x1dd7620()*0.00330222);
}

double NNfunction_ss_sLuR::synapse0x1dd8d00() {
   return (neuron0x1dd7960()*0.241955);
}

double NNfunction_ss_sLuR::synapse0x1dd9000() {
   return (neuron0x1dd7ec0()*-0.338027);
}

double NNfunction_ss_sLuR::synapse0x1dd9040() {
   return (neuron0x1dd80e0()*0.231371);
}

double NNfunction_ss_sLuR::synapse0x1dd9340() {
   return (neuron0x1dd8420()*0.0523807);
}

double NNfunction_ss_sLuR::synapse0x1dd9380() {
   return (neuron0x1dd8760()*-0.226619);
}

double NNfunction_ss_sLuR::synapse0x1dd6e80() {
   return (neuron0x1dd8aa0()*0.368865);
}

double NNfunction_ss_sLuR::synapse0x1dd6ec0() {
   return (neuron0x1dd8de0()*-0.118981);
}

double NNfunction_ss_sLuR::synapse0x1de5190() {
   return (neuron0x1dd9120()*0.271995);
}

double NNfunction_ss_sLuR::synapse0x1de5510() {
   return (neuron0x1dd4560()*0.220363);
}

double NNfunction_ss_sLuR::synapse0x1de5550() {
   return (neuron0x1dd48a0()*-0.181199);
}

double NNfunction_ss_sLuR::synapse0x1de5590() {
   return (neuron0x1dd4be0()*0.025326);
}

double NNfunction_ss_sLuR::synapse0x1de55d0() {
   return (neuron0x1dd4f20()*-0.612112);
}

double NNfunction_ss_sLuR::synapse0x1de5610() {
   return (neuron0x1dd5260()*-1.04357);
}

double NNfunction_ss_sLuR::synapse0x1de5650() {
   return (neuron0x1dd55a0()*0.0407978);
}

double NNfunction_ss_sLuR::synapse0x1de5690() {
   return (neuron0x1dd58e0()*-1.31629);
}

double NNfunction_ss_sLuR::synapse0x1de56d0() {
   return (neuron0x1dd5c20()*0.231395);
}

double NNfunction_ss_sLuR::synapse0x1de5710() {
   return (neuron0x1dd5f60()*0.0125801);
}

double NNfunction_ss_sLuR::synapse0x1de5750() {
   return (neuron0x1dd62a0()*0.188461);
}

double NNfunction_ss_sLuR::synapse0x1de5790() {
   return (neuron0x1dd65e0()*0.379435);
}

double NNfunction_ss_sLuR::synapse0x1de57d0() {
   return (neuron0x1dd6920()*-0.10362);
}

double NNfunction_ss_sLuR::synapse0x1de5810() {
   return (neuron0x1dd6c60()*0.204352);
}

double NNfunction_ss_sLuR::synapse0x1de5850() {
   return (neuron0x1dd6fa0()*-1.02749);
}

double NNfunction_ss_sLuR::synapse0x1de5890() {
   return (neuron0x1dd72e0()*0.163134);
}

double NNfunction_ss_sLuR::synapse0x1de58d0() {
   return (neuron0x1dd7620()*-0.157531);
}

double NNfunction_ss_sLuR::synapse0x1de5360() {
   return (neuron0x1dd7960()*0.751347);
}

double NNfunction_ss_sLuR::synapse0x1de53a0() {
   return (neuron0x1dd7ec0()*0.264333);
}

double NNfunction_ss_sLuR::synapse0x1de5a20() {
   return (neuron0x1dd80e0()*-0.355121);
}

double NNfunction_ss_sLuR::synapse0x1de5a60() {
   return (neuron0x1dd8420()*0.551632);
}

double NNfunction_ss_sLuR::synapse0x1de5aa0() {
   return (neuron0x1dd8760()*0.4818);
}

double NNfunction_ss_sLuR::synapse0x1de5ae0() {
   return (neuron0x1dd8aa0()*0.456923);
}

double NNfunction_ss_sLuR::synapse0x1de5b20() {
   return (neuron0x1dd8de0()*-0.348184);
}

double NNfunction_ss_sLuR::synapse0x1de5b60() {
   return (neuron0x1dd9120()*0.5517);
}

double NNfunction_ss_sLuR::synapse0x1de5ee0() {
   return (neuron0x1dd4560()*0.0621496);
}

double NNfunction_ss_sLuR::synapse0x1de5f20() {
   return (neuron0x1dd48a0()*0.559075);
}

double NNfunction_ss_sLuR::synapse0x1de5f60() {
   return (neuron0x1dd4be0()*0.608245);
}

double NNfunction_ss_sLuR::synapse0x1de5fa0() {
   return (neuron0x1dd4f20()*0.491967);
}

double NNfunction_ss_sLuR::synapse0x1de5fe0() {
   return (neuron0x1dd5260()*-0.0749754);
}

double NNfunction_ss_sLuR::synapse0x1de6020() {
   return (neuron0x1dd55a0()*-0.214808);
}

double NNfunction_ss_sLuR::synapse0x1de6060() {
   return (neuron0x1dd58e0()*-0.037272);
}

double NNfunction_ss_sLuR::synapse0x1de60a0() {
   return (neuron0x1dd5c20()*-0.176025);
}

double NNfunction_ss_sLuR::synapse0x1de60e0() {
   return (neuron0x1dd5f60()*-0.190333);
}

double NNfunction_ss_sLuR::synapse0x1de6120() {
   return (neuron0x1dd62a0()*0.206677);
}

double NNfunction_ss_sLuR::synapse0x1de6160() {
   return (neuron0x1dd65e0()*-0.017463);
}

double NNfunction_ss_sLuR::synapse0x1de61a0() {
   return (neuron0x1dd6920()*-0.38416);
}

double NNfunction_ss_sLuR::synapse0x1de61e0() {
   return (neuron0x1dd6c60()*0.637871);
}

double NNfunction_ss_sLuR::synapse0x1de6220() {
   return (neuron0x1dd6fa0()*-0.525994);
}

double NNfunction_ss_sLuR::synapse0x1de6260() {
   return (neuron0x1dd72e0()*0.65284);
}

double NNfunction_ss_sLuR::synapse0x1de62a0() {
   return (neuron0x1dd7620()*-0.0498557);
}

double NNfunction_ss_sLuR::synapse0x1de5d30() {
   return (neuron0x1dd7960()*0.157822);
}

double NNfunction_ss_sLuR::synapse0x1de5d70() {
   return (neuron0x1dd7ec0()*-0.0551148);
}

double NNfunction_ss_sLuR::synapse0x1de63f0() {
   return (neuron0x1dd80e0()*0.331668);
}

double NNfunction_ss_sLuR::synapse0x1de6430() {
   return (neuron0x1dd8420()*-0.46789);
}

double NNfunction_ss_sLuR::synapse0x1de6470() {
   return (neuron0x1dd8760()*0.0993175);
}

double NNfunction_ss_sLuR::synapse0x1de64b0() {
   return (neuron0x1dd8aa0()*-0.0177784);
}

double NNfunction_ss_sLuR::synapse0x1de64f0() {
   return (neuron0x1dd8de0()*-8.18208e-05);
}

double NNfunction_ss_sLuR::synapse0x1de6530() {
   return (neuron0x1dd9120()*0.0567575);
}

double NNfunction_ss_sLuR::synapse0x1de68b0() {
   return (neuron0x1dd4560()*-0.154113);
}

double NNfunction_ss_sLuR::synapse0x1de68f0() {
   return (neuron0x1dd48a0()*-0.213957);
}

double NNfunction_ss_sLuR::synapse0x1de6930() {
   return (neuron0x1dd4be0()*0.191042);
}

double NNfunction_ss_sLuR::synapse0x1de6970() {
   return (neuron0x1dd4f20()*-0.344014);
}

double NNfunction_ss_sLuR::synapse0x1de69b0() {
   return (neuron0x1dd5260()*-0.326002);
}

double NNfunction_ss_sLuR::synapse0x1de69f0() {
   return (neuron0x1dd55a0()*-0.0249552);
}

double NNfunction_ss_sLuR::synapse0x1de6a30() {
   return (neuron0x1dd58e0()*0.287336);
}

double NNfunction_ss_sLuR::synapse0x1de6a70() {
   return (neuron0x1dd5c20()*0.267062);
}

double NNfunction_ss_sLuR::synapse0x1de6ab0() {
   return (neuron0x1dd5f60()*0.066384);
}

double NNfunction_ss_sLuR::synapse0x1de6af0() {
   return (neuron0x1dd62a0()*0.597219);
}

double NNfunction_ss_sLuR::synapse0x1de6b30() {
   return (neuron0x1dd65e0()*-0.104014);
}

double NNfunction_ss_sLuR::synapse0x1de6b70() {
   return (neuron0x1dd6920()*-0.250149);
}

double NNfunction_ss_sLuR::synapse0x1de6bb0() {
   return (neuron0x1dd6c60()*-0.556004);
}

double NNfunction_ss_sLuR::synapse0x1de6bf0() {
   return (neuron0x1dd6fa0()*-0.0229977);
}

double NNfunction_ss_sLuR::synapse0x1de6c30() {
   return (neuron0x1dd72e0()*0.0554502);
}

double NNfunction_ss_sLuR::synapse0x1de6c70() {
   return (neuron0x1dd7620()*0.35657);
}

double NNfunction_ss_sLuR::synapse0x1de6700() {
   return (neuron0x1dd7960()*0.0545338);
}

double NNfunction_ss_sLuR::synapse0x1de6740() {
   return (neuron0x1dd7ec0()*0.0829378);
}

double NNfunction_ss_sLuR::synapse0x1de6dc0() {
   return (neuron0x1dd80e0()*-0.0784184);
}

double NNfunction_ss_sLuR::synapse0x1de6e00() {
   return (neuron0x1dd8420()*-0.624099);
}

double NNfunction_ss_sLuR::synapse0x1de6e40() {
   return (neuron0x1dd8760()*0.4844);
}

double NNfunction_ss_sLuR::synapse0x1de6e80() {
   return (neuron0x1dd8aa0()*-1.29172);
}

double NNfunction_ss_sLuR::synapse0x1de6ec0() {
   return (neuron0x1dd8de0()*0.189117);
}

double NNfunction_ss_sLuR::synapse0x1de6f00() {
   return (neuron0x1dd9120()*-0.455925);
}

double NNfunction_ss_sLuR::synapse0x1de7280() {
   return (neuron0x1dd4560()*-0.571992);
}

double NNfunction_ss_sLuR::synapse0x1de72c0() {
   return (neuron0x1dd48a0()*0.259803);
}

double NNfunction_ss_sLuR::synapse0x1de7300() {
   return (neuron0x1dd4be0()*-0.141175);
}

double NNfunction_ss_sLuR::synapse0x1de7340() {
   return (neuron0x1dd4f20()*0.348845);
}

double NNfunction_ss_sLuR::synapse0x1de7380() {
   return (neuron0x1dd5260()*0.130337);
}

double NNfunction_ss_sLuR::synapse0x1de73c0() {
   return (neuron0x1dd55a0()*0.0924088);
}

double NNfunction_ss_sLuR::synapse0x1de7400() {
   return (neuron0x1dd58e0()*-0.180089);
}

double NNfunction_ss_sLuR::synapse0x1de7440() {
   return (neuron0x1dd5c20()*-0.255894);
}

double NNfunction_ss_sLuR::synapse0x1de7480() {
   return (neuron0x1dd5f60()*-0.33432);
}

double NNfunction_ss_sLuR::synapse0x1de74c0() {
   return (neuron0x1dd62a0()*-1.05854);
}

double NNfunction_ss_sLuR::synapse0x1de7500() {
   return (neuron0x1dd65e0()*0.334064);
}

double NNfunction_ss_sLuR::synapse0x1de7540() {
   return (neuron0x1dd6920()*-0.397265);
}

double NNfunction_ss_sLuR::synapse0x1de7580() {
   return (neuron0x1dd6c60()*-0.251155);
}

double NNfunction_ss_sLuR::synapse0x1de75c0() {
   return (neuron0x1dd6fa0()*-0.092009);
}

double NNfunction_ss_sLuR::synapse0x1de7600() {
   return (neuron0x1dd72e0()*0.0616118);
}

double NNfunction_ss_sLuR::synapse0x1de7640() {
   return (neuron0x1dd7620()*-0.164902);
}

double NNfunction_ss_sLuR::synapse0x1de70d0() {
   return (neuron0x1dd7960()*-0.179787);
}

double NNfunction_ss_sLuR::synapse0x1de7110() {
   return (neuron0x1dd7ec0()*0.22544);
}

double NNfunction_ss_sLuR::synapse0x1de7790() {
   return (neuron0x1dd80e0()*0.106379);
}

double NNfunction_ss_sLuR::synapse0x1de77d0() {
   return (neuron0x1dd8420()*0.884647);
}

double NNfunction_ss_sLuR::synapse0x1de7810() {
   return (neuron0x1dd8760()*0.328435);
}

double NNfunction_ss_sLuR::synapse0x1de7850() {
   return (neuron0x1dd8aa0()*-0.0544005);
}

double NNfunction_ss_sLuR::synapse0x1de7890() {
   return (neuron0x1dd8de0()*0.342506);
}

double NNfunction_ss_sLuR::synapse0x1de78d0() {
   return (neuron0x1dd9120()*0.163063);
}

double NNfunction_ss_sLuR::synapse0x1de7c50() {
   return (neuron0x1dd4560()*0.063818);
}

double NNfunction_ss_sLuR::synapse0x1de7c90() {
   return (neuron0x1dd48a0()*0.553936);
}

double NNfunction_ss_sLuR::synapse0x1de7cd0() {
   return (neuron0x1dd4be0()*0.167961);
}

double NNfunction_ss_sLuR::synapse0x1de7d10() {
   return (neuron0x1dd4f20()*0.432533);
}

double NNfunction_ss_sLuR::synapse0x1de7d50() {
   return (neuron0x1dd5260()*0.0161919);
}

double NNfunction_ss_sLuR::synapse0x1de7d90() {
   return (neuron0x1dd55a0()*-0.0246586);
}

double NNfunction_ss_sLuR::synapse0x1de7dd0() {
   return (neuron0x1dd58e0()*0.0926546);
}

double NNfunction_ss_sLuR::synapse0x1de7e10() {
   return (neuron0x1dd5c20()*-0.0408918);
}

double NNfunction_ss_sLuR::synapse0x1de7e50() {
   return (neuron0x1dd5f60()*0.130291);
}

double NNfunction_ss_sLuR::synapse0x1de0010() {
   return (neuron0x1dd62a0()*-0.0654456);
}

double NNfunction_ss_sLuR::synapse0x1de0050() {
   return (neuron0x1dd65e0()*0.0104292);
}

double NNfunction_ss_sLuR::synapse0x1de0090() {
   return (neuron0x1dd6920()*0.499638);
}

double NNfunction_ss_sLuR::synapse0x1de00d0() {
   return (neuron0x1dd6c60()*-0.778663);
}

double NNfunction_ss_sLuR::synapse0x1de0110() {
   return (neuron0x1dd6fa0()*-0.0469357);
}

double NNfunction_ss_sLuR::synapse0x1de0150() {
   return (neuron0x1dd72e0()*-0.758323);
}

double NNfunction_ss_sLuR::synapse0x1de0190() {
   return (neuron0x1dd7620()*0.126953);
}

double NNfunction_ss_sLuR::synapse0x1de7aa0() {
   return (neuron0x1dd7960()*0.0628494);
}

double NNfunction_ss_sLuR::synapse0x1de7ae0() {
   return (neuron0x1dd7ec0()*0.151261);
}

double NNfunction_ss_sLuR::synapse0x1de02e0() {
   return (neuron0x1dd80e0()*-0.0180784);
}

double NNfunction_ss_sLuR::synapse0x1de0320() {
   return (neuron0x1dd8420()*0.0473044);
}

double NNfunction_ss_sLuR::synapse0x1de0360() {
   return (neuron0x1dd8760()*-0.0541585);
}

double NNfunction_ss_sLuR::synapse0x1de03a0() {
   return (neuron0x1dd8aa0()*-0.0381035);
}

double NNfunction_ss_sLuR::synapse0x1de03e0() {
   return (neuron0x1dd8de0()*0.121629);
}

double NNfunction_ss_sLuR::synapse0x1de0420() {
   return (neuron0x1dd9120()*0.176828);
}

double NNfunction_ss_sLuR::synapse0x1de07a0() {
   return (neuron0x1dd4560()*-0.00332858);
}

double NNfunction_ss_sLuR::synapse0x1de07e0() {
   return (neuron0x1dd48a0()*-0.0408024);
}

double NNfunction_ss_sLuR::synapse0x1de0820() {
   return (neuron0x1dd4be0()*0.052562);
}

double NNfunction_ss_sLuR::synapse0x1de0860() {
   return (neuron0x1dd4f20()*-2.38168);
}

double NNfunction_ss_sLuR::synapse0x1de08a0() {
   return (neuron0x1dd5260()*0.124074);
}

double NNfunction_ss_sLuR::synapse0x1de08e0() {
   return (neuron0x1dd55a0()*-0.000767278);
}

double NNfunction_ss_sLuR::synapse0x1de0920() {
   return (neuron0x1dd58e0()*0.0440942);
}

double NNfunction_ss_sLuR::synapse0x1de0960() {
   return (neuron0x1dd5c20()*0.0673593);
}

double NNfunction_ss_sLuR::synapse0x1de09a0() {
   return (neuron0x1dd5f60()*-0.0854012);
}

double NNfunction_ss_sLuR::synapse0x1de09e0() {
   return (neuron0x1dd62a0()*0.106456);
}

double NNfunction_ss_sLuR::synapse0x1de0a20() {
   return (neuron0x1dd65e0()*-0.0536183);
}

double NNfunction_ss_sLuR::synapse0x1de0a60() {
   return (neuron0x1dd6920()*0.0155067);
}

double NNfunction_ss_sLuR::synapse0x1de0aa0() {
   return (neuron0x1dd6c60()*-0.0407758);
}

double NNfunction_ss_sLuR::synapse0x1de0ae0() {
   return (neuron0x1dd6fa0()*0.0251796);
}

double NNfunction_ss_sLuR::synapse0x1de0b20() {
   return (neuron0x1dd72e0()*0.0518261);
}

double NNfunction_ss_sLuR::synapse0x1de0b60() {
   return (neuron0x1dd7620()*0.101703);
}

double NNfunction_ss_sLuR::synapse0x1de05f0() {
   return (neuron0x1dd7960()*0.146294);
}

double NNfunction_ss_sLuR::synapse0x1de0630() {
   return (neuron0x1dd7ec0()*0.0784872);
}

double NNfunction_ss_sLuR::synapse0x1de0cb0() {
   return (neuron0x1dd80e0()*-0.0089528);
}

double NNfunction_ss_sLuR::synapse0x1de0cf0() {
   return (neuron0x1dd8420()*-0.0353887);
}

double NNfunction_ss_sLuR::synapse0x1de0d30() {
   return (neuron0x1dd8760()*-0.0362582);
}

double NNfunction_ss_sLuR::synapse0x1de0d70() {
   return (neuron0x1dd8aa0()*0.0430501);
}

double NNfunction_ss_sLuR::synapse0x1de0db0() {
   return (neuron0x1dd8de0()*-0.00976279);
}

double NNfunction_ss_sLuR::synapse0x1de0df0() {
   return (neuron0x1dd9120()*0.0674679);
}

double NNfunction_ss_sLuR::synapse0x1de0fc0() {
   return (neuron0x1dd4560()*0.0360899);
}

double NNfunction_ss_sLuR::synapse0x1dea050() {
   return (neuron0x1dd48a0()*-0.465783);
}

double NNfunction_ss_sLuR::synapse0x1dea090() {
   return (neuron0x1dd4be0()*-0.230837);
}

double NNfunction_ss_sLuR::synapse0x1dea0d0() {
   return (neuron0x1dd4f20()*0.0452635);
}

double NNfunction_ss_sLuR::synapse0x1dea110() {
   return (neuron0x1dd5260()*-0.0712883);
}

double NNfunction_ss_sLuR::synapse0x1dea150() {
   return (neuron0x1dd55a0()*-0.108542);
}

double NNfunction_ss_sLuR::synapse0x1dea190() {
   return (neuron0x1dd58e0()*-0.204541);
}

double NNfunction_ss_sLuR::synapse0x1dea1d0() {
   return (neuron0x1dd5c20()*0.137198);
}

double NNfunction_ss_sLuR::synapse0x1dea210() {
   return (neuron0x1dd5f60()*-0.335385);
}

double NNfunction_ss_sLuR::synapse0x1dea250() {
   return (neuron0x1dd62a0()*0.18582);
}

double NNfunction_ss_sLuR::synapse0x1dea290() {
   return (neuron0x1dd65e0()*0.194934);
}

double NNfunction_ss_sLuR::synapse0x1dea2d0() {
   return (neuron0x1dd6920()*0.803202);
}

double NNfunction_ss_sLuR::synapse0x1dea310() {
   return (neuron0x1dd6c60()*0.20383);
}

double NNfunction_ss_sLuR::synapse0x1dea350() {
   return (neuron0x1dd6fa0()*-0.496413);
}

double NNfunction_ss_sLuR::synapse0x1dea390() {
   return (neuron0x1dd72e0()*0.19262);
}

double NNfunction_ss_sLuR::synapse0x1dea3d0() {
   return (neuron0x1dd7620()*0.179199);
}

double NNfunction_ss_sLuR::synapse0x1de9ea0() {
   return (neuron0x1dd7960()*-0.653334);
}

double NNfunction_ss_sLuR::synapse0x1de9ee0() {
   return (neuron0x1dd7ec0()*0.130623);
}

double NNfunction_ss_sLuR::synapse0x1dea520() {
   return (neuron0x1dd80e0()*0.282161);
}

double NNfunction_ss_sLuR::synapse0x1dea560() {
   return (neuron0x1dd8420()*-0.212179);
}

double NNfunction_ss_sLuR::synapse0x1dea5a0() {
   return (neuron0x1dd8760()*0.500864);
}

double NNfunction_ss_sLuR::synapse0x1dea5e0() {
   return (neuron0x1dd8aa0()*-0.129231);
}

double NNfunction_ss_sLuR::synapse0x1dea620() {
   return (neuron0x1dd8de0()*0.104655);
}

double NNfunction_ss_sLuR::synapse0x1dea660() {
   return (neuron0x1dd9120()*-0.203996);
}

double NNfunction_ss_sLuR::synapse0x1dea9e0() {
   return (neuron0x1dd4560()*0.33319);
}

double NNfunction_ss_sLuR::synapse0x1deaa20() {
   return (neuron0x1dd48a0()*-0.468942);
}

double NNfunction_ss_sLuR::synapse0x1deaa60() {
   return (neuron0x1dd4be0()*0.485097);
}

double NNfunction_ss_sLuR::synapse0x1deaaa0() {
   return (neuron0x1dd4f20()*0.42242);
}

double NNfunction_ss_sLuR::synapse0x1deaae0() {
   return (neuron0x1dd5260()*1.01337);
}

double NNfunction_ss_sLuR::synapse0x1deab20() {
   return (neuron0x1dd55a0()*-0.674514);
}

double NNfunction_ss_sLuR::synapse0x1deab60() {
   return (neuron0x1dd58e0()*0.418569);
}

double NNfunction_ss_sLuR::synapse0x1deaba0() {
   return (neuron0x1dd5c20()*-0.470699);
}

double NNfunction_ss_sLuR::synapse0x1deabe0() {
   return (neuron0x1dd5f60()*0.597726);
}

double NNfunction_ss_sLuR::synapse0x1deac20() {
   return (neuron0x1dd62a0()*-0.0266215);
}

double NNfunction_ss_sLuR::synapse0x1deac60() {
   return (neuron0x1dd65e0()*-0.0999004);
}

double NNfunction_ss_sLuR::synapse0x1deaca0() {
   return (neuron0x1dd6920()*-0.462424);
}

double NNfunction_ss_sLuR::synapse0x1deace0() {
   return (neuron0x1dd6c60()*-0.102396);
}

double NNfunction_ss_sLuR::synapse0x1dead20() {
   return (neuron0x1dd6fa0()*0.259681);
}

double NNfunction_ss_sLuR::synapse0x1dead60() {
   return (neuron0x1dd72e0()*-0.181994);
}

double NNfunction_ss_sLuR::synapse0x1deada0() {
   return (neuron0x1dd7620()*-0.0308512);
}

double NNfunction_ss_sLuR::synapse0x1dea830() {
   return (neuron0x1dd7960()*-0.620285);
}

double NNfunction_ss_sLuR::synapse0x1dea870() {
   return (neuron0x1dd7ec0()*0.199958);
}

double NNfunction_ss_sLuR::synapse0x1deaef0() {
   return (neuron0x1dd80e0()*0.0559461);
}

double NNfunction_ss_sLuR::synapse0x1deaf30() {
   return (neuron0x1dd8420()*-0.54321);
}

double NNfunction_ss_sLuR::synapse0x1deaf70() {
   return (neuron0x1dd8760()*-0.14491);
}

double NNfunction_ss_sLuR::synapse0x1deafb0() {
   return (neuron0x1dd8aa0()*-0.461528);
}

double NNfunction_ss_sLuR::synapse0x1deaff0() {
   return (neuron0x1dd8de0()*0.212153);
}

double NNfunction_ss_sLuR::synapse0x1deb030() {
   return (neuron0x1dd9120()*-0.511513);
}

double NNfunction_ss_sLuR::synapse0x1deb3b0() {
   return (neuron0x1dd4560()*-0.100139);
}

double NNfunction_ss_sLuR::synapse0x1deb3f0() {
   return (neuron0x1dd48a0()*0.0577491);
}

double NNfunction_ss_sLuR::synapse0x1deb430() {
   return (neuron0x1dd4be0()*0.151597);
}

double NNfunction_ss_sLuR::synapse0x1deb470() {
   return (neuron0x1dd4f20()*-0.929734);
}

double NNfunction_ss_sLuR::synapse0x1deb4b0() {
   return (neuron0x1dd5260()*-0.0167427);
}

double NNfunction_ss_sLuR::synapse0x1deb4f0() {
   return (neuron0x1dd55a0()*-0.436065);
}

double NNfunction_ss_sLuR::synapse0x1deb530() {
   return (neuron0x1dd58e0()*-0.269068);
}

double NNfunction_ss_sLuR::synapse0x1deb570() {
   return (neuron0x1dd5c20()*0.0620248);
}

double NNfunction_ss_sLuR::synapse0x1deb5b0() {
   return (neuron0x1dd5f60()*0.110059);
}

double NNfunction_ss_sLuR::synapse0x1deb5f0() {
   return (neuron0x1dd62a0()*-0.0959228);
}

double NNfunction_ss_sLuR::synapse0x1deb630() {
   return (neuron0x1dd65e0()*0.225022);
}

double NNfunction_ss_sLuR::synapse0x1deb670() {
   return (neuron0x1dd6920()*0.0937329);
}

double NNfunction_ss_sLuR::synapse0x1deb6b0() {
   return (neuron0x1dd6c60()*0.232855);
}

double NNfunction_ss_sLuR::synapse0x1deb6f0() {
   return (neuron0x1dd6fa0()*0.0136218);
}

double NNfunction_ss_sLuR::synapse0x1deb730() {
   return (neuron0x1dd72e0()*0.0244376);
}

double NNfunction_ss_sLuR::synapse0x1deb770() {
   return (neuron0x1dd7620()*0.0973407);
}

double NNfunction_ss_sLuR::synapse0x1deb200() {
   return (neuron0x1dd7960()*-0.170675);
}

double NNfunction_ss_sLuR::synapse0x1deb240() {
   return (neuron0x1dd7ec0()*0.202048);
}

double NNfunction_ss_sLuR::synapse0x1deb8c0() {
   return (neuron0x1dd80e0()*0.309709);
}

double NNfunction_ss_sLuR::synapse0x1deb900() {
   return (neuron0x1dd8420()*0.173476);
}

double NNfunction_ss_sLuR::synapse0x1deb940() {
   return (neuron0x1dd8760()*-0.0792675);
}

double NNfunction_ss_sLuR::synapse0x1deb980() {
   return (neuron0x1dd8aa0()*0.129182);
}

double NNfunction_ss_sLuR::synapse0x1deb9c0() {
   return (neuron0x1dd8de0()*-0.0528531);
}

double NNfunction_ss_sLuR::synapse0x1deba00() {
   return (neuron0x1dd9120()*0.134811);
}

double NNfunction_ss_sLuR::synapse0x1debd80() {
   return (neuron0x1dd4560()*0.0457639);
}

double NNfunction_ss_sLuR::synapse0x1debdc0() {
   return (neuron0x1dd48a0()*0.154044);
}

double NNfunction_ss_sLuR::synapse0x1debe00() {
   return (neuron0x1dd4be0()*-0.0502187);
}

double NNfunction_ss_sLuR::synapse0x1debe40() {
   return (neuron0x1dd4f20()*-0.901369);
}

double NNfunction_ss_sLuR::synapse0x1debe80() {
   return (neuron0x1dd5260()*-0.0320125);
}

double NNfunction_ss_sLuR::synapse0x1debec0() {
   return (neuron0x1dd55a0()*0.0264737);
}

double NNfunction_ss_sLuR::synapse0x1debf00() {
   return (neuron0x1dd58e0()*0.0315991);
}

double NNfunction_ss_sLuR::synapse0x1debf40() {
   return (neuron0x1dd5c20()*-0.00310303);
}

double NNfunction_ss_sLuR::synapse0x1debf80() {
   return (neuron0x1dd5f60()*0.0237252);
}

double NNfunction_ss_sLuR::synapse0x1debfc0() {
   return (neuron0x1dd62a0()*-0.0172434);
}

double NNfunction_ss_sLuR::synapse0x1dec000() {
   return (neuron0x1dd65e0()*0.00462737);
}

double NNfunction_ss_sLuR::synapse0x1dec040() {
   return (neuron0x1dd6920()*-0.0750051);
}

double NNfunction_ss_sLuR::synapse0x1dec080() {
   return (neuron0x1dd6c60()*-0.602261);
}

double NNfunction_ss_sLuR::synapse0x1dec0c0() {
   return (neuron0x1dd6fa0()*-0.0141116);
}

double NNfunction_ss_sLuR::synapse0x1dec100() {
   return (neuron0x1dd72e0()*-0.62616);
}

double NNfunction_ss_sLuR::synapse0x1dec140() {
   return (neuron0x1dd7620()*0.00858954);
}

double NNfunction_ss_sLuR::synapse0x1debbd0() {
   return (neuron0x1dd7960()*-0.0537983);
}

double NNfunction_ss_sLuR::synapse0x1debc10() {
   return (neuron0x1dd7ec0()*-0.107679);
}

double NNfunction_ss_sLuR::synapse0x1dec290() {
   return (neuron0x1dd80e0()*-0.0177495);
}

double NNfunction_ss_sLuR::synapse0x1dec2d0() {
   return (neuron0x1dd8420()*-0.0520367);
}

double NNfunction_ss_sLuR::synapse0x1dec310() {
   return (neuron0x1dd8760()*0.0659406);
}

double NNfunction_ss_sLuR::synapse0x1dec350() {
   return (neuron0x1dd8aa0()*0.00569667);
}

double NNfunction_ss_sLuR::synapse0x1dec390() {
   return (neuron0x1dd8de0()*0.0219408);
}

double NNfunction_ss_sLuR::synapse0x1dec3d0() {
   return (neuron0x1dd9120()*0.0526394);
}

double NNfunction_ss_sLuR::synapse0x1dec750() {
   return (neuron0x1dd4560()*-0.0016811);
}

double NNfunction_ss_sLuR::synapse0x1dec790() {
   return (neuron0x1dd48a0()*-0.00468552);
}

double NNfunction_ss_sLuR::synapse0x1dec7d0() {
   return (neuron0x1dd4be0()*0.011496);
}

double NNfunction_ss_sLuR::synapse0x1dec810() {
   return (neuron0x1dd4f20()*8.88741);
}

double NNfunction_ss_sLuR::synapse0x1dec850() {
   return (neuron0x1dd5260()*-0.0364103);
}

double NNfunction_ss_sLuR::synapse0x1dec890() {
   return (neuron0x1dd55a0()*0.0168997);
}

double NNfunction_ss_sLuR::synapse0x1dec8d0() {
   return (neuron0x1dd58e0()*0.0561707);
}

double NNfunction_ss_sLuR::synapse0x1dec910() {
   return (neuron0x1dd5c20()*0.0386216);
}

double NNfunction_ss_sLuR::synapse0x1dec950() {
   return (neuron0x1dd5f60()*0.01191);
}

double NNfunction_ss_sLuR::synapse0x1dec990() {
   return (neuron0x1dd62a0()*0.0114781);
}

double NNfunction_ss_sLuR::synapse0x1dec9d0() {
   return (neuron0x1dd65e0()*-0.00477149);
}

double NNfunction_ss_sLuR::synapse0x1deca10() {
   return (neuron0x1dd6920()*-0.0352264);
}

double NNfunction_ss_sLuR::synapse0x1deca50() {
   return (neuron0x1dd6c60()*0.078411);
}

double NNfunction_ss_sLuR::synapse0x1deca90() {
   return (neuron0x1dd6fa0()*0.0274904);
}

double NNfunction_ss_sLuR::synapse0x1decad0() {
   return (neuron0x1dd72e0()*0.0587082);
}

double NNfunction_ss_sLuR::synapse0x1decb10() {
   return (neuron0x1dd7620()*0.00979888);
}

double NNfunction_ss_sLuR::synapse0x1dec5a0() {
   return (neuron0x1dd7960()*0.0176367);
}

double NNfunction_ss_sLuR::synapse0x1dec5e0() {
   return (neuron0x1dd7ec0()*-0.0108318);
}

double NNfunction_ss_sLuR::synapse0x1decc60() {
   return (neuron0x1dd80e0()*0.00485412);
}

double NNfunction_ss_sLuR::synapse0x1decca0() {
   return (neuron0x1dd8420()*-0.00144383);
}

double NNfunction_ss_sLuR::synapse0x1decce0() {
   return (neuron0x1dd8760()*-0.0401841);
}

double NNfunction_ss_sLuR::synapse0x1decd20() {
   return (neuron0x1dd8aa0()*0.00210319);
}

double NNfunction_ss_sLuR::synapse0x1decd60() {
   return (neuron0x1dd8de0()*0.00672776);
}

double NNfunction_ss_sLuR::synapse0x1decda0() {
   return (neuron0x1dd9120()*0.0436428);
}

double NNfunction_ss_sLuR::synapse0x1ded120() {
   return (neuron0x1dd4560()*0.0280704);
}

double NNfunction_ss_sLuR::synapse0x1ded160() {
   return (neuron0x1dd48a0()*0.0416439);
}

double NNfunction_ss_sLuR::synapse0x1ded1a0() {
   return (neuron0x1dd4be0()*-0.0236525);
}

double NNfunction_ss_sLuR::synapse0x1ded1e0() {
   return (neuron0x1dd4f20()*-0.407593);
}

double NNfunction_ss_sLuR::synapse0x1ded220() {
   return (neuron0x1dd5260()*-0.0278742);
}

double NNfunction_ss_sLuR::synapse0x1ded260() {
   return (neuron0x1dd55a0()*-0.0310178);
}

double NNfunction_ss_sLuR::synapse0x1ded2a0() {
   return (neuron0x1dd58e0()*0.0572746);
}

double NNfunction_ss_sLuR::synapse0x1ded2e0() {
   return (neuron0x1dd5c20()*0.00130325);
}

double NNfunction_ss_sLuR::synapse0x1ded320() {
   return (neuron0x1dd5f60()*0.0244248);
}

double NNfunction_ss_sLuR::synapse0x1ded360() {
   return (neuron0x1dd62a0()*-0.0209613);
}

double NNfunction_ss_sLuR::synapse0x1ded3a0() {
   return (neuron0x1dd65e0()*0.0310607);
}

double NNfunction_ss_sLuR::synapse0x1ded3e0() {
   return (neuron0x1dd6920()*-0.0102954);
}

double NNfunction_ss_sLuR::synapse0x1ded420() {
   return (neuron0x1dd6c60()*-2.61171);
}

double NNfunction_ss_sLuR::synapse0x1ded460() {
   return (neuron0x1dd6fa0()*-0.0123773);
}

double NNfunction_ss_sLuR::synapse0x1ded4a0() {
   return (neuron0x1dd72e0()*0.082115);
}

double NNfunction_ss_sLuR::synapse0x1ded4e0() {
   return (neuron0x1dd7620()*0.0179512);
}

double NNfunction_ss_sLuR::synapse0x1decf70() {
   return (neuron0x1dd7960()*-0.0049269);
}

double NNfunction_ss_sLuR::synapse0x1decfb0() {
   return (neuron0x1dd7ec0()*-0.0178541);
}

double NNfunction_ss_sLuR::synapse0x1ded630() {
   return (neuron0x1dd80e0()*0.0154619);
}

double NNfunction_ss_sLuR::synapse0x1ded670() {
   return (neuron0x1dd8420()*-0.0138218);
}

double NNfunction_ss_sLuR::synapse0x1ded6b0() {
   return (neuron0x1dd8760()*0.074511);
}

double NNfunction_ss_sLuR::synapse0x1ded6f0() {
   return (neuron0x1dd8aa0()*0.0230055);
}

double NNfunction_ss_sLuR::synapse0x1ded730() {
   return (neuron0x1dd8de0()*-0.0281055);
}

double NNfunction_ss_sLuR::synapse0x1ded770() {
   return (neuron0x1dd9120()*0.0280239);
}

double NNfunction_ss_sLuR::synapse0x1dedaf0() {
   return (neuron0x1dd4560()*-0.318318);
}

double NNfunction_ss_sLuR::synapse0x1dedb30() {
   return (neuron0x1dd48a0()*-0.124267);
}

double NNfunction_ss_sLuR::synapse0x1dedb70() {
   return (neuron0x1dd4be0()*0.919619);
}

double NNfunction_ss_sLuR::synapse0x1dedbb0() {
   return (neuron0x1dd4f20()*0.850559);
}

double NNfunction_ss_sLuR::synapse0x1dedbf0() {
   return (neuron0x1dd5260()*0.777599);
}

double NNfunction_ss_sLuR::synapse0x1dedc30() {
   return (neuron0x1dd55a0()*0.539195);
}

double NNfunction_ss_sLuR::synapse0x1dedc70() {
   return (neuron0x1dd58e0()*0.00391557);
}

double NNfunction_ss_sLuR::synapse0x1dedcb0() {
   return (neuron0x1dd5c20()*-0.0615103);
}

double NNfunction_ss_sLuR::synapse0x1dedcf0() {
   return (neuron0x1dd5f60()*-0.303484);
}

double NNfunction_ss_sLuR::synapse0x1dedd30() {
   return (neuron0x1dd62a0()*0.111927);
}

double NNfunction_ss_sLuR::synapse0x1dedd70() {
   return (neuron0x1dd65e0()*0.126226);
}

double NNfunction_ss_sLuR::synapse0x1deddb0() {
   return (neuron0x1dd6920()*-0.236066);
}

double NNfunction_ss_sLuR::synapse0x1deddf0() {
   return (neuron0x1dd6c60()*-0.759169);
}

double NNfunction_ss_sLuR::synapse0x1dede30() {
   return (neuron0x1dd6fa0()*0.520788);
}

double NNfunction_ss_sLuR::synapse0x1dede70() {
   return (neuron0x1dd72e0()*0.192757);
}

double NNfunction_ss_sLuR::synapse0x1dedeb0() {
   return (neuron0x1dd7620()*-0.0446838);
}

double NNfunction_ss_sLuR::synapse0x1ded940() {
   return (neuron0x1dd7960()*-0.143046);
}

double NNfunction_ss_sLuR::synapse0x1ded980() {
   return (neuron0x1dd7ec0()*-0.020004);
}

double NNfunction_ss_sLuR::synapse0x1dee000() {
   return (neuron0x1dd80e0()*-0.14851);
}

double NNfunction_ss_sLuR::synapse0x1dee040() {
   return (neuron0x1dd8420()*-0.929701);
}

double NNfunction_ss_sLuR::synapse0x1dee080() {
   return (neuron0x1dd8760()*0.211708);
}

double NNfunction_ss_sLuR::synapse0x1dee0c0() {
   return (neuron0x1dd8aa0()*0.319711);
}

double NNfunction_ss_sLuR::synapse0x1dee100() {
   return (neuron0x1dd8de0()*0.124971);
}

double NNfunction_ss_sLuR::synapse0x1dee140() {
   return (neuron0x1dd9120()*0.302013);
}

double NNfunction_ss_sLuR::synapse0x1dee4c0() {
   return (neuron0x1dd4560()*0.117472);
}

double NNfunction_ss_sLuR::synapse0x1dee500() {
   return (neuron0x1dd48a0()*-0.0973148);
}

double NNfunction_ss_sLuR::synapse0x1dee540() {
   return (neuron0x1dd4be0()*-0.102494);
}

double NNfunction_ss_sLuR::synapse0x1dee580() {
   return (neuron0x1dd4f20()*-0.163592);
}

double NNfunction_ss_sLuR::synapse0x1dee5c0() {
   return (neuron0x1dd5260()*-0.147108);
}

double NNfunction_ss_sLuR::synapse0x1dee600() {
   return (neuron0x1dd55a0()*0.327383);
}

double NNfunction_ss_sLuR::synapse0x1dee640() {
   return (neuron0x1dd58e0()*-0.210366);
}

double NNfunction_ss_sLuR::synapse0x1dee680() {
   return (neuron0x1dd5c20()*-0.00674043);
}

double NNfunction_ss_sLuR::synapse0x1dee6c0() {
   return (neuron0x1dd5f60()*-0.00884886);
}

double NNfunction_ss_sLuR::synapse0x1dee700() {
   return (neuron0x1dd62a0()*-0.416588);
}

double NNfunction_ss_sLuR::synapse0x1dee740() {
   return (neuron0x1dd65e0()*-0.144945);
}

double NNfunction_ss_sLuR::synapse0x1dee780() {
   return (neuron0x1dd6920()*0.159556);
}

double NNfunction_ss_sLuR::synapse0x1dee7c0() {
   return (neuron0x1dd6c60()*1.9095);
}

double NNfunction_ss_sLuR::synapse0x1dee800() {
   return (neuron0x1dd6fa0()*-0.047174);
}

double NNfunction_ss_sLuR::synapse0x1dee840() {
   return (neuron0x1dd72e0()*-0.127979);
}

double NNfunction_ss_sLuR::synapse0x1dee880() {
   return (neuron0x1dd7620()*0.862626);
}

double NNfunction_ss_sLuR::synapse0x1dee310() {
   return (neuron0x1dd7960()*-0.354013);
}

double NNfunction_ss_sLuR::synapse0x1dee350() {
   return (neuron0x1dd7ec0()*-0.304787);
}

double NNfunction_ss_sLuR::synapse0x1dee9d0() {
   return (neuron0x1dd80e0()*-0.39001);
}

double NNfunction_ss_sLuR::synapse0x1deea10() {
   return (neuron0x1dd8420()*0.602132);
}

double NNfunction_ss_sLuR::synapse0x1deea50() {
   return (neuron0x1dd8760()*-0.0872302);
}

double NNfunction_ss_sLuR::synapse0x1deea90() {
   return (neuron0x1dd8aa0()*-0.387888);
}

double NNfunction_ss_sLuR::synapse0x1deead0() {
   return (neuron0x1dd8de0()*0.245635);
}

double NNfunction_ss_sLuR::synapse0x1deeb10() {
   return (neuron0x1dd9120()*-0.313621);
}

double NNfunction_ss_sLuR::synapse0x1deee90() {
   return (neuron0x1dd4560()*-0.0178609);
}

double NNfunction_ss_sLuR::synapse0x1de3460() {
   return (neuron0x1dd48a0()*-0.0335346);
}

double NNfunction_ss_sLuR::synapse0x1de34a0() {
   return (neuron0x1dd4be0()*-0.0238885);
}

double NNfunction_ss_sLuR::synapse0x1de34e0() {
   return (neuron0x1dd4f20()*-0.439477);
}

double NNfunction_ss_sLuR::synapse0x1de3730() {
   return (neuron0x1dd5260()*0.0173572);
}

double NNfunction_ss_sLuR::synapse0x1de3770() {
   return (neuron0x1dd55a0()*0.00958113);
}

double NNfunction_ss_sLuR::synapse0x1de37b0() {
   return (neuron0x1dd58e0()*-0.00794656);
}

double NNfunction_ss_sLuR::synapse0x1de3a00() {
   return (neuron0x1dd5c20()*-0.00434719);
}

double NNfunction_ss_sLuR::synapse0x1de3a40() {
   return (neuron0x1dd5f60()*-0.011699);
}

double NNfunction_ss_sLuR::synapse0x1de3c90() {
   return (neuron0x1dd62a0()*0.0161427);
}

double NNfunction_ss_sLuR::synapse0x1de3cd0() {
   return (neuron0x1dd65e0()*-0.0344976);
}

double NNfunction_ss_sLuR::synapse0x1de3d10() {
   return (neuron0x1dd6920()*0.0122982);
}

double NNfunction_ss_sLuR::synapse0x1de3f60() {
   return (neuron0x1dd6c60()*0.538477);
}

double NNfunction_ss_sLuR::synapse0x1de3fa0() {
   return (neuron0x1dd6fa0()*0.0114494);
}

double NNfunction_ss_sLuR::synapse0x1de41f0() {
   return (neuron0x1dd72e0()*0.494423);
}

double NNfunction_ss_sLuR::synapse0x1de4230() {
   return (neuron0x1dd7620()*0.00345636);
}

double NNfunction_ss_sLuR::synapse0x1deece0() {
   return (neuron0x1dd7960()*0.0243538);
}

double NNfunction_ss_sLuR::synapse0x1deed20() {
   return (neuron0x1dd7ec0()*0.0230425);
}

double NNfunction_ss_sLuR::synapse0x1de4380() {
   return (neuron0x1dd80e0()*-0.00436639);
}

double NNfunction_ss_sLuR::synapse0x1de4890() {
   return (neuron0x1dd8420()*0.011592);
}

double NNfunction_ss_sLuR::synapse0x1de48d0() {
   return (neuron0x1dd8760()*-0.0485612);
}

double NNfunction_ss_sLuR::synapse0x1de4910() {
   return (neuron0x1dd8aa0()*-0.000732629);
}

double NNfunction_ss_sLuR::synapse0x1de4b60() {
   return (neuron0x1dd8de0()*0.00982871);
}

double NNfunction_ss_sLuR::synapse0x1de4ba0() {
   return (neuron0x1dd9120()*-0.0153504);
}

double NNfunction_ss_sLuR::synapse0x1de4450() {
   return (neuron0x1dd4560()*0.0462229);
}

double NNfunction_ss_sLuR::synapse0x1de4490() {
   return (neuron0x1dd48a0()*-0.108999);
}

double NNfunction_ss_sLuR::synapse0x1de44d0() {
   return (neuron0x1dd4be0()*1.36729);
}

double NNfunction_ss_sLuR::synapse0x1de4510() {
   return (neuron0x1dd4f20()*-0.11153);
}

double NNfunction_ss_sLuR::synapse0x1de4e90() {
   return (neuron0x1dd5260()*-0.0572552);
}

double NNfunction_ss_sLuR::synapse0x1df11e0() {
   return (neuron0x1dd55a0()*0.00390548);
}

double NNfunction_ss_sLuR::synapse0x1df1220() {
   return (neuron0x1dd58e0()*-0.150628);
}

double NNfunction_ss_sLuR::synapse0x1df1260() {
   return (neuron0x1dd5c20()*0.0484917);
}

double NNfunction_ss_sLuR::synapse0x1df12a0() {
   return (neuron0x1dd5f60()*-0.0685816);
}

double NNfunction_ss_sLuR::synapse0x1df12e0() {
   return (neuron0x1dd62a0()*-0.100757);
}

double NNfunction_ss_sLuR::synapse0x1df1320() {
   return (neuron0x1dd65e0()*0.0613913);
}

double NNfunction_ss_sLuR::synapse0x1df1360() {
   return (neuron0x1dd6920()*-0.0320881);
}

double NNfunction_ss_sLuR::synapse0x1df13a0() {
   return (neuron0x1dd6c60()*-0.375176);
}

double NNfunction_ss_sLuR::synapse0x1df13e0() {
   return (neuron0x1dd6fa0()*0.115433);
}

double NNfunction_ss_sLuR::synapse0x1df1420() {
   return (neuron0x1dd72e0()*-0.0692468);
}

double NNfunction_ss_sLuR::synapse0x1df1460() {
   return (neuron0x1dd7620()*-0.0531463);
}

double NNfunction_ss_sLuR::synapse0x1de4d70() {
   return (neuron0x1dd7960()*-0.0339325);
}

double NNfunction_ss_sLuR::synapse0x1de4db0() {
   return (neuron0x1dd7ec0()*-0.172968);
}

double NNfunction_ss_sLuR::synapse0x1df15b0() {
   return (neuron0x1dd80e0()*-0.0488633);
}

double NNfunction_ss_sLuR::synapse0x1df15f0() {
   return (neuron0x1dd8420()*0.101206);
}

double NNfunction_ss_sLuR::synapse0x1df1630() {
   return (neuron0x1dd8760()*0.0797733);
}

double NNfunction_ss_sLuR::synapse0x1df1670() {
   return (neuron0x1dd8aa0()*-0.119213);
}

double NNfunction_ss_sLuR::synapse0x1df16b0() {
   return (neuron0x1dd8de0()*-0.123081);
}

double NNfunction_ss_sLuR::synapse0x1df16f0() {
   return (neuron0x1dd9120()*0.03773);
}

double NNfunction_ss_sLuR::synapse0x1df1a70() {
   return (neuron0x1dd4560()*0.573459);
}

double NNfunction_ss_sLuR::synapse0x1df1ab0() {
   return (neuron0x1dd48a0()*-0.15244);
}

double NNfunction_ss_sLuR::synapse0x1df1af0() {
   return (neuron0x1dd4be0()*0.234383);
}

double NNfunction_ss_sLuR::synapse0x1df1b30() {
   return (neuron0x1dd4f20()*0.773191);
}

double NNfunction_ss_sLuR::synapse0x1df1b70() {
   return (neuron0x1dd5260()*0.568532);
}

double NNfunction_ss_sLuR::synapse0x1df1bb0() {
   return (neuron0x1dd55a0()*-0.145161);
}

double NNfunction_ss_sLuR::synapse0x1df1bf0() {
   return (neuron0x1dd58e0()*0.557198);
}

double NNfunction_ss_sLuR::synapse0x1df1c30() {
   return (neuron0x1dd5c20()*0.659987);
}

double NNfunction_ss_sLuR::synapse0x1df1c70() {
   return (neuron0x1dd5f60()*-0.0732574);
}

double NNfunction_ss_sLuR::synapse0x1df1cb0() {
   return (neuron0x1dd62a0()*-0.217745);
}

double NNfunction_ss_sLuR::synapse0x1df1cf0() {
   return (neuron0x1dd65e0()*0.530951);
}

double NNfunction_ss_sLuR::synapse0x1df1d30() {
   return (neuron0x1dd6920()*-0.0518196);
}

double NNfunction_ss_sLuR::synapse0x1df1d70() {
   return (neuron0x1dd6c60()*-0.131097);
}

double NNfunction_ss_sLuR::synapse0x1df1db0() {
   return (neuron0x1dd6fa0()*-0.123959);
}

double NNfunction_ss_sLuR::synapse0x1df1df0() {
   return (neuron0x1dd72e0()*0.326764);
}

double NNfunction_ss_sLuR::synapse0x1df1e30() {
   return (neuron0x1dd7620()*-0.0620796);
}

double NNfunction_ss_sLuR::synapse0x1df18c0() {
   return (neuron0x1dd7960()*0.373359);
}

double NNfunction_ss_sLuR::synapse0x1df1900() {
   return (neuron0x1dd7ec0()*-0.0748697);
}

double NNfunction_ss_sLuR::synapse0x1df1f80() {
   return (neuron0x1dd80e0()*0.000546456);
}

double NNfunction_ss_sLuR::synapse0x1df1fc0() {
   return (neuron0x1dd8420()*-0.00532347);
}

double NNfunction_ss_sLuR::synapse0x1df2000() {
   return (neuron0x1dd8760()*-0.314197);
}

double NNfunction_ss_sLuR::synapse0x1df2040() {
   return (neuron0x1dd8aa0()*0.100958);
}

double NNfunction_ss_sLuR::synapse0x1df2080() {
   return (neuron0x1dd8de0()*-0.0660397);
}

double NNfunction_ss_sLuR::synapse0x1df20c0() {
   return (neuron0x1dd9120()*0.128454);
}

double NNfunction_ss_sLuR::synapse0x1df2440() {
   return (neuron0x1dd4560()*0.00180473);
}

double NNfunction_ss_sLuR::synapse0x1df2480() {
   return (neuron0x1dd48a0()*-0.0456532);
}

double NNfunction_ss_sLuR::synapse0x1df24c0() {
   return (neuron0x1dd4be0()*-0.0113471);
}

double NNfunction_ss_sLuR::synapse0x1df2500() {
   return (neuron0x1dd4f20()*0.24696);
}

double NNfunction_ss_sLuR::synapse0x1df2540() {
   return (neuron0x1dd5260()*0.0195577);
}

double NNfunction_ss_sLuR::synapse0x1df2580() {
   return (neuron0x1dd55a0()*0.0134551);
}

double NNfunction_ss_sLuR::synapse0x1df25c0() {
   return (neuron0x1dd58e0()*-0.0176978);
}

double NNfunction_ss_sLuR::synapse0x1df2600() {
   return (neuron0x1dd5c20()*-0.00652887);
}

double NNfunction_ss_sLuR::synapse0x1df2640() {
   return (neuron0x1dd5f60()*0.0135381);
}

double NNfunction_ss_sLuR::synapse0x1df2680() {
   return (neuron0x1dd62a0()*0.000347616);
}

double NNfunction_ss_sLuR::synapse0x1df26c0() {
   return (neuron0x1dd65e0()*-0.00913139);
}

double NNfunction_ss_sLuR::synapse0x1df2700() {
   return (neuron0x1dd6920()*0.00610939);
}

double NNfunction_ss_sLuR::synapse0x1df2740() {
   return (neuron0x1dd6c60()*0.0762777);
}

double NNfunction_ss_sLuR::synapse0x1df2780() {
   return (neuron0x1dd6fa0()*0.0160605);
}

double NNfunction_ss_sLuR::synapse0x1df27c0() {
   return (neuron0x1dd72e0()*1.91473);
}

double NNfunction_ss_sLuR::synapse0x1df2800() {
   return (neuron0x1dd7620()*0.0375551);
}

double NNfunction_ss_sLuR::synapse0x1df2290() {
   return (neuron0x1dd7960()*0.0146653);
}

double NNfunction_ss_sLuR::synapse0x1df22d0() {
   return (neuron0x1dd7ec0()*-0.00421023);
}

double NNfunction_ss_sLuR::synapse0x1df2950() {
   return (neuron0x1dd80e0()*0.0115624);
}

double NNfunction_ss_sLuR::synapse0x1df2990() {
   return (neuron0x1dd8420()*0.0366407);
}

double NNfunction_ss_sLuR::synapse0x1df29d0() {
   return (neuron0x1dd8760()*0.0115462);
}

double NNfunction_ss_sLuR::synapse0x1df2a10() {
   return (neuron0x1dd8aa0()*0.00372304);
}

double NNfunction_ss_sLuR::synapse0x1df2a50() {
   return (neuron0x1dd8de0()*0.0127654);
}

double NNfunction_ss_sLuR::synapse0x1df2a90() {
   return (neuron0x1dd9120()*0.00650759);
}

double NNfunction_ss_sLuR::synapse0x1df2e10() {
   return (neuron0x1dd4560()*-0.0242108);
}

double NNfunction_ss_sLuR::synapse0x1df2e50() {
   return (neuron0x1dd48a0()*0.0083577);
}

double NNfunction_ss_sLuR::synapse0x1df2e90() {
   return (neuron0x1dd4be0()*-0.00754133);
}

double NNfunction_ss_sLuR::synapse0x1df2ed0() {
   return (neuron0x1dd4f20()*2.24238);
}

double NNfunction_ss_sLuR::synapse0x1df2f10() {
   return (neuron0x1dd5260()*0.00993994);
}

double NNfunction_ss_sLuR::synapse0x1df2f50() {
   return (neuron0x1dd55a0()*0.026433);
}

double NNfunction_ss_sLuR::synapse0x1df2f90() {
   return (neuron0x1dd58e0()*-0.00692883);
}

double NNfunction_ss_sLuR::synapse0x1df2fd0() {
   return (neuron0x1dd5c20()*0.00879363);
}

double NNfunction_ss_sLuR::synapse0x1df3010() {
   return (neuron0x1dd5f60()*-0.0161288);
}

double NNfunction_ss_sLuR::synapse0x1df3050() {
   return (neuron0x1dd62a0()*-0.00339592);
}

double NNfunction_ss_sLuR::synapse0x1df3090() {
   return (neuron0x1dd65e0()*0.0497856);
}

double NNfunction_ss_sLuR::synapse0x1df30d0() {
   return (neuron0x1dd6920()*-0.0319142);
}

double NNfunction_ss_sLuR::synapse0x1df3110() {
   return (neuron0x1dd6c60()*0.226667);
}

double NNfunction_ss_sLuR::synapse0x1df3150() {
   return (neuron0x1dd6fa0()*0.0305966);
}

double NNfunction_ss_sLuR::synapse0x1df3190() {
   return (neuron0x1dd72e0()*-0.989786);
}

double NNfunction_ss_sLuR::synapse0x1df31d0() {
   return (neuron0x1dd7620()*-0.0397368);
}

double NNfunction_ss_sLuR::synapse0x1df2c60() {
   return (neuron0x1dd7960()*-0.0390028);
}

double NNfunction_ss_sLuR::synapse0x1df2ca0() {
   return (neuron0x1dd7ec0()*-0.0172357);
}

double NNfunction_ss_sLuR::synapse0x1df3320() {
   return (neuron0x1dd80e0()*0.048376);
}

double NNfunction_ss_sLuR::synapse0x1df3360() {
   return (neuron0x1dd8420()*0.0286775);
}

double NNfunction_ss_sLuR::synapse0x1df33a0() {
   return (neuron0x1dd8760()*0.0364472);
}

double NNfunction_ss_sLuR::synapse0x1df33e0() {
   return (neuron0x1dd8aa0()*-0.00767228);
}

double NNfunction_ss_sLuR::synapse0x1df3420() {
   return (neuron0x1dd8de0()*0.000991527);
}

double NNfunction_ss_sLuR::synapse0x1df3460() {
   return (neuron0x1dd9120()*0.032085);
}

double NNfunction_ss_sLuR::synapse0x1df37e0() {
   return (neuron0x1dd4560()*0.09027);
}

double NNfunction_ss_sLuR::synapse0x1df3820() {
   return (neuron0x1dd48a0()*0.186391);
}

double NNfunction_ss_sLuR::synapse0x1df3860() {
   return (neuron0x1dd4be0()*-0.0847555);
}

double NNfunction_ss_sLuR::synapse0x1df38a0() {
   return (neuron0x1dd4f20()*-1.30419);
}

double NNfunction_ss_sLuR::synapse0x1df38e0() {
   return (neuron0x1dd5260()*-0.137591);
}

double NNfunction_ss_sLuR::synapse0x1df3920() {
   return (neuron0x1dd55a0()*0.336215);
}

double NNfunction_ss_sLuR::synapse0x1df3960() {
   return (neuron0x1dd58e0()*-0.220002);
}

double NNfunction_ss_sLuR::synapse0x1df39a0() {
   return (neuron0x1dd5c20()*-0.0667958);
}

double NNfunction_ss_sLuR::synapse0x1df39e0() {
   return (neuron0x1dd5f60()*-0.23071);
}

double NNfunction_ss_sLuR::synapse0x1df3a20() {
   return (neuron0x1dd62a0()*0.230786);
}

double NNfunction_ss_sLuR::synapse0x1df3a60() {
   return (neuron0x1dd65e0()*0.183145);
}

double NNfunction_ss_sLuR::synapse0x1df3aa0() {
   return (neuron0x1dd6920()*0.106211);
}

double NNfunction_ss_sLuR::synapse0x1df3ae0() {
   return (neuron0x1dd6c60()*0.156588);
}

double NNfunction_ss_sLuR::synapse0x1df3b20() {
   return (neuron0x1dd6fa0()*0.429189);
}

double NNfunction_ss_sLuR::synapse0x1df3b60() {
   return (neuron0x1dd72e0()*-0.186552);
}

double NNfunction_ss_sLuR::synapse0x1df3ba0() {
   return (neuron0x1dd7620()*-0.320078);
}

double NNfunction_ss_sLuR::synapse0x1df3630() {
   return (neuron0x1dd7960()*0.188994);
}

double NNfunction_ss_sLuR::synapse0x1df3670() {
   return (neuron0x1dd7ec0()*-0.0140477);
}

double NNfunction_ss_sLuR::synapse0x1df3cf0() {
   return (neuron0x1dd80e0()*0.170305);
}

double NNfunction_ss_sLuR::synapse0x1df3d30() {
   return (neuron0x1dd8420()*0.123155);
}

double NNfunction_ss_sLuR::synapse0x1df3d70() {
   return (neuron0x1dd8760()*0.243485);
}

double NNfunction_ss_sLuR::synapse0x1df3db0() {
   return (neuron0x1dd8aa0()*-0.086442);
}

double NNfunction_ss_sLuR::synapse0x1df3df0() {
   return (neuron0x1dd8de0()*-0.0834762);
}

double NNfunction_ss_sLuR::synapse0x1df3e30() {
   return (neuron0x1dd9120()*0.507872);
}

double NNfunction_ss_sLuR::synapse0x1df41b0() {
   return (neuron0x1dd4560()*0.183694);
}

double NNfunction_ss_sLuR::synapse0x1df41f0() {
   return (neuron0x1dd48a0()*0.0328874);
}

double NNfunction_ss_sLuR::synapse0x1df4230() {
   return (neuron0x1dd4be0()*0.354228);
}

double NNfunction_ss_sLuR::synapse0x1df4270() {
   return (neuron0x1dd4f20()*-0.480181);
}

double NNfunction_ss_sLuR::synapse0x1df42b0() {
   return (neuron0x1dd5260()*0.0721816);
}

double NNfunction_ss_sLuR::synapse0x1df42f0() {
   return (neuron0x1dd55a0()*0.264154);
}

double NNfunction_ss_sLuR::synapse0x1df4330() {
   return (neuron0x1dd58e0()*0.761891);
}

double NNfunction_ss_sLuR::synapse0x1df4370() {
   return (neuron0x1dd5c20()*0.0733453);
}

double NNfunction_ss_sLuR::synapse0x1df43b0() {
   return (neuron0x1dd5f60()*0.478462);
}

double NNfunction_ss_sLuR::synapse0x1df43f0() {
   return (neuron0x1dd62a0()*0.05651);
}

double NNfunction_ss_sLuR::synapse0x1df4430() {
   return (neuron0x1dd65e0()*-0.0189243);
}

double NNfunction_ss_sLuR::synapse0x1df4470() {
   return (neuron0x1dd6920()*-0.244172);
}

double NNfunction_ss_sLuR::synapse0x1df44b0() {
   return (neuron0x1dd6c60()*0.134737);
}

double NNfunction_ss_sLuR::synapse0x1df44f0() {
   return (neuron0x1dd6fa0()*0.113702);
}

double NNfunction_ss_sLuR::synapse0x1df4530() {
   return (neuron0x1dd72e0()*0.164721);
}

double NNfunction_ss_sLuR::synapse0x1df4570() {
   return (neuron0x1dd7620()*-0.191119);
}

double NNfunction_ss_sLuR::synapse0x1df4000() {
   return (neuron0x1dd7960()*-0.153212);
}

double NNfunction_ss_sLuR::synapse0x1df4040() {
   return (neuron0x1dd7ec0()*-0.457273);
}

double NNfunction_ss_sLuR::synapse0x1df46c0() {
   return (neuron0x1dd80e0()*0.361983);
}

double NNfunction_ss_sLuR::synapse0x1df4700() {
   return (neuron0x1dd8420()*0.407385);
}

double NNfunction_ss_sLuR::synapse0x1df4740() {
   return (neuron0x1dd8760()*0.284395);
}

double NNfunction_ss_sLuR::synapse0x1df4780() {
   return (neuron0x1dd8aa0()*-0.39616);
}

double NNfunction_ss_sLuR::synapse0x1df47c0() {
   return (neuron0x1dd8de0()*0.117099);
}

double NNfunction_ss_sLuR::synapse0x1df4800() {
   return (neuron0x1dd9120()*0.181905);
}

double NNfunction_ss_sLuR::synapse0x1df4b80() {
   return (neuron0x1dd4560()*-0.013663);
}

double NNfunction_ss_sLuR::synapse0x1df4bc0() {
   return (neuron0x1dd48a0()*-0.0175398);
}

double NNfunction_ss_sLuR::synapse0x1df4c00() {
   return (neuron0x1dd4be0()*-0.387016);
}

double NNfunction_ss_sLuR::synapse0x1df4c40() {
   return (neuron0x1dd4f20()*0.644237);
}

double NNfunction_ss_sLuR::synapse0x1df4c80() {
   return (neuron0x1dd5260()*-0.0959834);
}

double NNfunction_ss_sLuR::synapse0x1df4cc0() {
   return (neuron0x1dd55a0()*-0.17054);
}

double NNfunction_ss_sLuR::synapse0x1df4d00() {
   return (neuron0x1dd58e0()*-0.123359);
}

double NNfunction_ss_sLuR::synapse0x1df4d40() {
   return (neuron0x1dd5c20()*0.104582);
}

double NNfunction_ss_sLuR::synapse0x1df4d80() {
   return (neuron0x1dd5f60()*-0.0180371);
}

double NNfunction_ss_sLuR::synapse0x1df4dc0() {
   return (neuron0x1dd62a0()*-0.200967);
}

double NNfunction_ss_sLuR::synapse0x1df4e00() {
   return (neuron0x1dd65e0()*0.0137814);
}

double NNfunction_ss_sLuR::synapse0x1df4e40() {
   return (neuron0x1dd6920()*-0.22784);
}

double NNfunction_ss_sLuR::synapse0x1df4e80() {
   return (neuron0x1dd6c60()*-0.913368);
}

double NNfunction_ss_sLuR::synapse0x1df4ec0() {
   return (neuron0x1dd6fa0()*0.0875322);
}

double NNfunction_ss_sLuR::synapse0x1df4f00() {
   return (neuron0x1dd72e0()*-0.320374);
}

double NNfunction_ss_sLuR::synapse0x1df4f40() {
   return (neuron0x1dd7620()*0.0118908);
}

double NNfunction_ss_sLuR::synapse0x1df49d0() {
   return (neuron0x1dd7960()*0.204476);
}

double NNfunction_ss_sLuR::synapse0x1df4a10() {
   return (neuron0x1dd7ec0()*-0.497299);
}

double NNfunction_ss_sLuR::synapse0x1df5090() {
   return (neuron0x1dd80e0()*-0.121501);
}

double NNfunction_ss_sLuR::synapse0x1df50d0() {
   return (neuron0x1dd8420()*-0.10249);
}

double NNfunction_ss_sLuR::synapse0x1df5110() {
   return (neuron0x1dd8760()*0.0903431);
}

double NNfunction_ss_sLuR::synapse0x1df5150() {
   return (neuron0x1dd8aa0()*-0.1818);
}

double NNfunction_ss_sLuR::synapse0x1df5190() {
   return (neuron0x1dd8de0()*-0.165034);
}

double NNfunction_ss_sLuR::synapse0x1df51d0() {
   return (neuron0x1dd9120()*0.0861568);
}

double NNfunction_ss_sLuR::synapse0x1df5550() {
   return (neuron0x1dd4560()*0.524967);
}

double NNfunction_ss_sLuR::synapse0x1df5590() {
   return (neuron0x1dd48a0()*0.0888565);
}

double NNfunction_ss_sLuR::synapse0x1df55d0() {
   return (neuron0x1dd4be0()*-0.306231);
}

double NNfunction_ss_sLuR::synapse0x1df5610() {
   return (neuron0x1dd4f20()*0.0556727);
}

double NNfunction_ss_sLuR::synapse0x1df5650() {
   return (neuron0x1dd5260()*0.367996);
}

double NNfunction_ss_sLuR::synapse0x1df5690() {
   return (neuron0x1dd55a0()*0.00625267);
}

double NNfunction_ss_sLuR::synapse0x1df56d0() {
   return (neuron0x1dd58e0()*-0.380397);
}

double NNfunction_ss_sLuR::synapse0x1df5710() {
   return (neuron0x1dd5c20()*-0.194632);
}

double NNfunction_ss_sLuR::synapse0x1df5750() {
   return (neuron0x1dd5f60()*-0.393532);
}

double NNfunction_ss_sLuR::synapse0x1df5790() {
   return (neuron0x1dd62a0()*-0.543315);
}

double NNfunction_ss_sLuR::synapse0x1df57d0() {
   return (neuron0x1dd65e0()*-0.762329);
}

double NNfunction_ss_sLuR::synapse0x1df5810() {
   return (neuron0x1dd6920()*0.222006);
}

double NNfunction_ss_sLuR::synapse0x1df5850() {
   return (neuron0x1dd6c60()*-0.627833);
}

double NNfunction_ss_sLuR::synapse0x1df5890() {
   return (neuron0x1dd6fa0()*-0.695424);
}

double NNfunction_ss_sLuR::synapse0x1df58d0() {
   return (neuron0x1dd72e0()*-0.479502);
}

double NNfunction_ss_sLuR::synapse0x1df5910() {
   return (neuron0x1dd7620()*-0.00937099);
}

double NNfunction_ss_sLuR::synapse0x1df53a0() {
   return (neuron0x1dd7960()*-0.585776);
}

double NNfunction_ss_sLuR::synapse0x1df53e0() {
   return (neuron0x1dd7ec0()*0.280999);
}

double NNfunction_ss_sLuR::synapse0x1df5a60() {
   return (neuron0x1dd80e0()*0.529513);
}

double NNfunction_ss_sLuR::synapse0x1df5aa0() {
   return (neuron0x1dd8420()*-0.272352);
}

double NNfunction_ss_sLuR::synapse0x1df5ae0() {
   return (neuron0x1dd8760()*-0.506102);
}

double NNfunction_ss_sLuR::synapse0x1df5b20() {
   return (neuron0x1dd8aa0()*-0.0106441);
}

double NNfunction_ss_sLuR::synapse0x1df5b60() {
   return (neuron0x1dd8de0()*0.466621);
}

double NNfunction_ss_sLuR::synapse0x1df5ba0() {
   return (neuron0x1dd9120()*0.109579);
}

double NNfunction_ss_sLuR::synapse0x1dde650() {
   return (neuron0x1dd4560()*0.283413);
}

double NNfunction_ss_sLuR::synapse0x1dde690() {
   return (neuron0x1dd48a0()*0.246805);
}

double NNfunction_ss_sLuR::synapse0x1dde6d0() {
   return (neuron0x1dd4be0()*-0.645041);
}

double NNfunction_ss_sLuR::synapse0x1dde710() {
   return (neuron0x1dd4f20()*0.134271);
}

double NNfunction_ss_sLuR::synapse0x1dde750() {
   return (neuron0x1dd5260()*0.218773);
}

double NNfunction_ss_sLuR::synapse0x1dde790() {
   return (neuron0x1dd55a0()*-0.0887679);
}

double NNfunction_ss_sLuR::synapse0x1dde7d0() {
   return (neuron0x1dd58e0()*-0.138977);
}

double NNfunction_ss_sLuR::synapse0x1dde810() {
   return (neuron0x1dd5c20()*-0.385004);
}

double NNfunction_ss_sLuR::synapse0x1df6330() {
   return (neuron0x1dd5f60()*0.547654);
}

double NNfunction_ss_sLuR::synapse0x1df6370() {
   return (neuron0x1dd62a0()*-0.392042);
}

double NNfunction_ss_sLuR::synapse0x1df63b0() {
   return (neuron0x1dd65e0()*-0.558069);
}

double NNfunction_ss_sLuR::synapse0x1df63f0() {
   return (neuron0x1dd6920()*0.574036);
}

double NNfunction_ss_sLuR::synapse0x1df6430() {
   return (neuron0x1dd6c60()*0.206331);
}

double NNfunction_ss_sLuR::synapse0x1df6470() {
   return (neuron0x1dd6fa0()*0.394852);
}

double NNfunction_ss_sLuR::synapse0x1df64b0() {
   return (neuron0x1dd72e0()*0.623905);
}

double NNfunction_ss_sLuR::synapse0x1df64f0() {
   return (neuron0x1dd7620()*0.68942);
}

double NNfunction_ss_sLuR::synapse0x1df5d70() {
   return (neuron0x1dd7960()*-0.2617);
}

double NNfunction_ss_sLuR::synapse0x1df5db0() {
   return (neuron0x1dd7ec0()*-0.0633119);
}

double NNfunction_ss_sLuR::synapse0x1df6640() {
   return (neuron0x1dd80e0()*0.356684);
}

double NNfunction_ss_sLuR::synapse0x1df6680() {
   return (neuron0x1dd8420()*0.398191);
}

double NNfunction_ss_sLuR::synapse0x1df66c0() {
   return (neuron0x1dd8760()*-0.117567);
}

double NNfunction_ss_sLuR::synapse0x1df6700() {
   return (neuron0x1dd8aa0()*0.9853);
}

double NNfunction_ss_sLuR::synapse0x1df6740() {
   return (neuron0x1dd8de0()*-0.464239);
}

double NNfunction_ss_sLuR::synapse0x1df6780() {
   return (neuron0x1dd9120()*0.628684);
}

double NNfunction_ss_sLuR::synapse0x1df6b00() {
   return (neuron0x1dd4560()*-0.000298723);
}

double NNfunction_ss_sLuR::synapse0x1df6b40() {
   return (neuron0x1dd48a0()*-0.0402245);
}

double NNfunction_ss_sLuR::synapse0x1df6b80() {
   return (neuron0x1dd4be0()*-0.00278348);
}

double NNfunction_ss_sLuR::synapse0x1df6bc0() {
   return (neuron0x1dd4f20()*0.189418);
}

double NNfunction_ss_sLuR::synapse0x1df6c00() {
   return (neuron0x1dd5260()*0.00139177);
}

double NNfunction_ss_sLuR::synapse0x1df6c40() {
   return (neuron0x1dd55a0()*-8.72681e-05);
}

double NNfunction_ss_sLuR::synapse0x1df6c80() {
   return (neuron0x1dd58e0()*-0.0281448);
}

double NNfunction_ss_sLuR::synapse0x1df6cc0() {
   return (neuron0x1dd5c20()*-0.00848571);
}

double NNfunction_ss_sLuR::synapse0x1df6d00() {
   return (neuron0x1dd5f60()*0.0126374);
}

double NNfunction_ss_sLuR::synapse0x1df6d40() {
   return (neuron0x1dd62a0()*0.00845968);
}

double NNfunction_ss_sLuR::synapse0x1df6d80() {
   return (neuron0x1dd65e0()*-0.0150636);
}

double NNfunction_ss_sLuR::synapse0x1df6dc0() {
   return (neuron0x1dd6920()*0.0154692);
}

double NNfunction_ss_sLuR::synapse0x1df6e00() {
   return (neuron0x1dd6c60()*-0.019383);
}

double NNfunction_ss_sLuR::synapse0x1df6e40() {
   return (neuron0x1dd6fa0()*0.00992779);
}

double NNfunction_ss_sLuR::synapse0x1df6e80() {
   return (neuron0x1dd72e0()*1.75142);
}

double NNfunction_ss_sLuR::synapse0x1df6ec0() {
   return (neuron0x1dd7620()*0.0231193);
}

double NNfunction_ss_sLuR::synapse0x1df6950() {
   return (neuron0x1dd7960()*0.0119228);
}

double NNfunction_ss_sLuR::synapse0x1df6990() {
   return (neuron0x1dd7ec0()*0.00924391);
}

double NNfunction_ss_sLuR::synapse0x1df7010() {
   return (neuron0x1dd80e0()*0.0102483);
}

double NNfunction_ss_sLuR::synapse0x1df7050() {
   return (neuron0x1dd8420()*0.0343238);
}

double NNfunction_ss_sLuR::synapse0x1df7090() {
   return (neuron0x1dd8760()*-0.00906701);
}

double NNfunction_ss_sLuR::synapse0x1df70d0() {
   return (neuron0x1dd8aa0()*-0.00242959);
}

double NNfunction_ss_sLuR::synapse0x1df7110() {
   return (neuron0x1dd8de0()*0.0108027);
}

double NNfunction_ss_sLuR::synapse0x1df7150() {
   return (neuron0x1dd9120()*-0.0081658);
}

double NNfunction_ss_sLuR::synapse0x1df74d0() {
   return (neuron0x1dd4560()*-0.504114);
}

double NNfunction_ss_sLuR::synapse0x1df7510() {
   return (neuron0x1dd48a0()*0.00263911);
}

double NNfunction_ss_sLuR::synapse0x1df7550() {
   return (neuron0x1dd4be0()*0.0201449);
}

double NNfunction_ss_sLuR::synapse0x1df7590() {
   return (neuron0x1dd4f20()*0.198664);
}

double NNfunction_ss_sLuR::synapse0x1df75d0() {
   return (neuron0x1dd5260()*-0.889999);
}

double NNfunction_ss_sLuR::synapse0x1df7610() {
   return (neuron0x1dd55a0()*-0.221394);
}

double NNfunction_ss_sLuR::synapse0x1df7650() {
   return (neuron0x1dd58e0()*1.35812);
}

double NNfunction_ss_sLuR::synapse0x1df7690() {
   return (neuron0x1dd5c20()*0.334305);
}

double NNfunction_ss_sLuR::synapse0x1df76d0() {
   return (neuron0x1dd5f60()*0.366119);
}

double NNfunction_ss_sLuR::synapse0x1df7710() {
   return (neuron0x1dd62a0()*-0.197515);
}

double NNfunction_ss_sLuR::synapse0x1df7750() {
   return (neuron0x1dd65e0()*-0.628079);
}

double NNfunction_ss_sLuR::synapse0x1df7790() {
   return (neuron0x1dd6920()*0.102087);
}

double NNfunction_ss_sLuR::synapse0x1df77d0() {
   return (neuron0x1dd6c60()*0.977243);
}

double NNfunction_ss_sLuR::synapse0x1df7810() {
   return (neuron0x1dd6fa0()*0.551447);
}

double NNfunction_ss_sLuR::synapse0x1df7850() {
   return (neuron0x1dd72e0()*0.127456);
}

double NNfunction_ss_sLuR::synapse0x1df7890() {
   return (neuron0x1dd7620()*-0.0900764);
}

double NNfunction_ss_sLuR::synapse0x1df7320() {
   return (neuron0x1dd7960()*0.322037);
}

double NNfunction_ss_sLuR::synapse0x1df7360() {
   return (neuron0x1dd7ec0()*0.629157);
}

double NNfunction_ss_sLuR::synapse0x1de7e90() {
   return (neuron0x1dd80e0()*-0.14103);
}

double NNfunction_ss_sLuR::synapse0x1de7ed0() {
   return (neuron0x1dd8420()*0.288809);
}

double NNfunction_ss_sLuR::synapse0x1de7f10() {
   return (neuron0x1dd8760()*-0.131592);
}

double NNfunction_ss_sLuR::synapse0x1de7f50() {
   return (neuron0x1dd8aa0()*-0.555055);
}

double NNfunction_ss_sLuR::synapse0x1de7f90() {
   return (neuron0x1dd8de0()*-0.353565);
}

double NNfunction_ss_sLuR::synapse0x1de7fd0() {
   return (neuron0x1dd9120()*-0.297944);
}

double NNfunction_ss_sLuR::synapse0x1de8350() {
   return (neuron0x1dd4560()*0.487207);
}

double NNfunction_ss_sLuR::synapse0x1de8390() {
   return (neuron0x1dd48a0()*-0.987646);
}

double NNfunction_ss_sLuR::synapse0x1de83d0() {
   return (neuron0x1dd4be0()*0.325293);
}

double NNfunction_ss_sLuR::synapse0x1de8410() {
   return (neuron0x1dd4f20()*-0.527929);
}

double NNfunction_ss_sLuR::synapse0x1de8450() {
   return (neuron0x1dd5260()*-0.481447);
}

double NNfunction_ss_sLuR::synapse0x1de8490() {
   return (neuron0x1dd55a0()*0.509091);
}

double NNfunction_ss_sLuR::synapse0x1de84d0() {
   return (neuron0x1dd58e0()*0.127842);
}

double NNfunction_ss_sLuR::synapse0x1de8510() {
   return (neuron0x1dd5c20()*-0.31729);
}

double NNfunction_ss_sLuR::synapse0x1de8550() {
   return (neuron0x1dd5f60()*0.437419);
}

double NNfunction_ss_sLuR::synapse0x1de8590() {
   return (neuron0x1dd62a0()*0.601095);
}

double NNfunction_ss_sLuR::synapse0x1de85d0() {
   return (neuron0x1dd65e0()*0.472048);
}

double NNfunction_ss_sLuR::synapse0x1de8610() {
   return (neuron0x1dd6920()*-0.191388);
}

double NNfunction_ss_sLuR::synapse0x1de8650() {
   return (neuron0x1dd6c60()*0.581771);
}

double NNfunction_ss_sLuR::synapse0x1de8690() {
   return (neuron0x1dd6fa0()*0.356093);
}

double NNfunction_ss_sLuR::synapse0x1de86d0() {
   return (neuron0x1dd72e0()*0.356555);
}

double NNfunction_ss_sLuR::synapse0x1de8710() {
   return (neuron0x1dd7620()*0.263664);
}

double NNfunction_ss_sLuR::synapse0x1de81a0() {
   return (neuron0x1dd7960()*0.236327);
}

double NNfunction_ss_sLuR::synapse0x1de81e0() {
   return (neuron0x1dd7ec0()*0.436779);
}

double NNfunction_ss_sLuR::synapse0x1de8860() {
   return (neuron0x1dd80e0()*-0.0818388);
}

double NNfunction_ss_sLuR::synapse0x1de88a0() {
   return (neuron0x1dd8420()*-0.26336);
}

double NNfunction_ss_sLuR::synapse0x1de88e0() {
   return (neuron0x1dd8760()*0.692451);
}

double NNfunction_ss_sLuR::synapse0x1de8920() {
   return (neuron0x1dd8aa0()*0.259341);
}

double NNfunction_ss_sLuR::synapse0x1de8960() {
   return (neuron0x1dd8de0()*-0.500947);
}

double NNfunction_ss_sLuR::synapse0x1de89a0() {
   return (neuron0x1dd9120()*0.223219);
}

double NNfunction_ss_sLuR::synapse0x1de8d20() {
   return (neuron0x1dd4560()*0.0429569);
}

double NNfunction_ss_sLuR::synapse0x1de8d60() {
   return (neuron0x1dd48a0()*0.353622);
}

double NNfunction_ss_sLuR::synapse0x1de8da0() {
   return (neuron0x1dd4be0()*0.0830301);
}

double NNfunction_ss_sLuR::synapse0x1de8de0() {
   return (neuron0x1dd4f20()*0.917166);
}

double NNfunction_ss_sLuR::synapse0x1de8e20() {
   return (neuron0x1dd5260()*0.0587267);
}

double NNfunction_ss_sLuR::synapse0x1de8e60() {
   return (neuron0x1dd55a0()*0.0274307);
}

double NNfunction_ss_sLuR::synapse0x1de8ea0() {
   return (neuron0x1dd58e0()*0.610859);
}

double NNfunction_ss_sLuR::synapse0x1de8ee0() {
   return (neuron0x1dd5c20()*0.0487048);
}

double NNfunction_ss_sLuR::synapse0x1de8f20() {
   return (neuron0x1dd5f60()*-0.342507);
}

double NNfunction_ss_sLuR::synapse0x1de8f60() {
   return (neuron0x1dd62a0()*-0.242976);
}

double NNfunction_ss_sLuR::synapse0x1de8fa0() {
   return (neuron0x1dd65e0()*-0.282132);
}

double NNfunction_ss_sLuR::synapse0x1de8fe0() {
   return (neuron0x1dd6920()*0.291595);
}

double NNfunction_ss_sLuR::synapse0x1de9020() {
   return (neuron0x1dd6c60()*-0.19518);
}

double NNfunction_ss_sLuR::synapse0x1de9060() {
   return (neuron0x1dd6fa0()*0.655146);
}

double NNfunction_ss_sLuR::synapse0x1de90a0() {
   return (neuron0x1dd72e0()*0.0916219);
}

double NNfunction_ss_sLuR::synapse0x1de90e0() {
   return (neuron0x1dd7620()*0.00311006);
}

double NNfunction_ss_sLuR::synapse0x1de8b70() {
   return (neuron0x1dd7960()*0.0174975);
}

double NNfunction_ss_sLuR::synapse0x1de8bb0() {
   return (neuron0x1dd7ec0()*-0.598938);
}

double NNfunction_ss_sLuR::synapse0x1de9230() {
   return (neuron0x1dd80e0()*0.0457831);
}

double NNfunction_ss_sLuR::synapse0x1de9270() {
   return (neuron0x1dd8420()*-0.315979);
}

double NNfunction_ss_sLuR::synapse0x1de92b0() {
   return (neuron0x1dd8760()*-0.137292);
}

double NNfunction_ss_sLuR::synapse0x1de92f0() {
   return (neuron0x1dd8aa0()*-0.100419);
}

double NNfunction_ss_sLuR::synapse0x1de9330() {
   return (neuron0x1dd8de0()*-0.129023);
}

double NNfunction_ss_sLuR::synapse0x1de9370() {
   return (neuron0x1dd9120()*-0.085302);
}

double NNfunction_ss_sLuR::synapse0x1de96f0() {
   return (neuron0x1dd4560()*0.116212);
}

double NNfunction_ss_sLuR::synapse0x1de9730() {
   return (neuron0x1dd48a0()*-0.0781598);
}

double NNfunction_ss_sLuR::synapse0x1de9770() {
   return (neuron0x1dd4be0()*0.432482);
}

double NNfunction_ss_sLuR::synapse0x1de97b0() {
   return (neuron0x1dd4f20()*-0.2802);
}

double NNfunction_ss_sLuR::synapse0x1de97f0() {
   return (neuron0x1dd5260()*0.230179);
}

double NNfunction_ss_sLuR::synapse0x1de9830() {
   return (neuron0x1dd55a0()*0.555408);
}

double NNfunction_ss_sLuR::synapse0x1de9870() {
   return (neuron0x1dd58e0()*0.69175);
}

double NNfunction_ss_sLuR::synapse0x1de98b0() {
   return (neuron0x1dd5c20()*0.00814491);
}

double NNfunction_ss_sLuR::synapse0x1de98f0() {
   return (neuron0x1dd5f60()*-0.265393);
}

double NNfunction_ss_sLuR::synapse0x1de9930() {
   return (neuron0x1dd62a0()*-0.427834);
}

double NNfunction_ss_sLuR::synapse0x1de9970() {
   return (neuron0x1dd65e0()*-0.199684);
}

double NNfunction_ss_sLuR::synapse0x1de99b0() {
   return (neuron0x1dd6920()*0.0152343);
}

double NNfunction_ss_sLuR::synapse0x1de99f0() {
   return (neuron0x1dd6c60()*-0.371156);
}

double NNfunction_ss_sLuR::synapse0x1de9a30() {
   return (neuron0x1dd6fa0()*0.00460605);
}

double NNfunction_ss_sLuR::synapse0x1de9a70() {
   return (neuron0x1dd72e0()*-0.787153);
}

double NNfunction_ss_sLuR::synapse0x1de9ab0() {
   return (neuron0x1dd7620()*0.114091);
}

double NNfunction_ss_sLuR::synapse0x1de9540() {
   return (neuron0x1dd7960()*-0.17856);
}

double NNfunction_ss_sLuR::synapse0x1de9580() {
   return (neuron0x1dd7ec0()*0.319608);
}

double NNfunction_ss_sLuR::synapse0x1de9c00() {
   return (neuron0x1dd80e0()*-0.042119);
}

double NNfunction_ss_sLuR::synapse0x1de9c40() {
   return (neuron0x1dd8420()*-0.0896153);
}

double NNfunction_ss_sLuR::synapse0x1de9c80() {
   return (neuron0x1dd8760()*0.370469);
}

double NNfunction_ss_sLuR::synapse0x1de9cc0() {
   return (neuron0x1dd8aa0()*0.169001);
}

double NNfunction_ss_sLuR::synapse0x1de9d00() {
   return (neuron0x1dd8de0()*-0.253929);
}

double NNfunction_ss_sLuR::synapse0x1de9d40() {
   return (neuron0x1dd9120()*-0.0161022);
}

double NNfunction_ss_sLuR::synapse0x1dfbc10() {
   return (neuron0x1dd4560()*-0.000424462);
}

double NNfunction_ss_sLuR::synapse0x1dfbc50() {
   return (neuron0x1dd48a0()*0.00553311);
}

double NNfunction_ss_sLuR::synapse0x1dfbc90() {
   return (neuron0x1dd4be0()*0.0288514);
}

double NNfunction_ss_sLuR::synapse0x1dfbcd0() {
   return (neuron0x1dd4f20()*5.29296);
}

double NNfunction_ss_sLuR::synapse0x1dfbd10() {
   return (neuron0x1dd5260()*0.019511);
}

double NNfunction_ss_sLuR::synapse0x1dfbd50() {
   return (neuron0x1dd55a0()*-0.0372667);
}

double NNfunction_ss_sLuR::synapse0x1dfbd90() {
   return (neuron0x1dd58e0()*-0.0387887);
}

double NNfunction_ss_sLuR::synapse0x1dfbdd0() {
   return (neuron0x1dd5c20()*0.0151833);
}

double NNfunction_ss_sLuR::synapse0x1dfbe10() {
   return (neuron0x1dd5f60()*-0.0261197);
}

double NNfunction_ss_sLuR::synapse0x1dfbe50() {
   return (neuron0x1dd62a0()*0.00785005);
}

double NNfunction_ss_sLuR::synapse0x1dfbe90() {
   return (neuron0x1dd65e0()*0.00432775);
}

double NNfunction_ss_sLuR::synapse0x1dfbed0() {
   return (neuron0x1dd6920()*0.025124);
}

double NNfunction_ss_sLuR::synapse0x1dfbf10() {
   return (neuron0x1dd6c60()*-0.922977);
}

double NNfunction_ss_sLuR::synapse0x1dfbf50() {
   return (neuron0x1dd6fa0()*-0.0148795);
}

double NNfunction_ss_sLuR::synapse0x1dfbf90() {
   return (neuron0x1dd72e0()*-0.835855);
}

double NNfunction_ss_sLuR::synapse0x1dfbfd0() {
   return (neuron0x1dd7620()*0.0104688);
}

double NNfunction_ss_sLuR::synapse0x1de9d80() {
   return (neuron0x1dd7960()*-0.0236272);
}

double NNfunction_ss_sLuR::synapse0x1de9dc0() {
   return (neuron0x1dd7ec0()*0.0297333);
}

double NNfunction_ss_sLuR::synapse0x1dfc120() {
   return (neuron0x1dd80e0()*0.000883261);
}

double NNfunction_ss_sLuR::synapse0x1dfc160() {
   return (neuron0x1dd8420()*0.00256582);
}

double NNfunction_ss_sLuR::synapse0x1dfc1a0() {
   return (neuron0x1dd8760()*0.0149385);
}

double NNfunction_ss_sLuR::synapse0x1dfc1e0() {
   return (neuron0x1dd8aa0()*-0.0239272);
}

double NNfunction_ss_sLuR::synapse0x1dfc220() {
   return (neuron0x1dd8de0()*-0.0234534);
}

double NNfunction_ss_sLuR::synapse0x1dfc260() {
   return (neuron0x1dd9120()*-0.0133403);
}

double NNfunction_ss_sLuR::synapse0x1dfc5e0() {
   return (neuron0x1dd4560()*-0.216426);
}

double NNfunction_ss_sLuR::synapse0x1dfc620() {
   return (neuron0x1dd48a0()*0.194743);
}

double NNfunction_ss_sLuR::synapse0x1dfc660() {
   return (neuron0x1dd4be0()*-0.00697272);
}

double NNfunction_ss_sLuR::synapse0x1dfc6a0() {
   return (neuron0x1dd4f20()*0.0132275);
}

double NNfunction_ss_sLuR::synapse0x1dfc6e0() {
   return (neuron0x1dd5260()*0.298595);
}

double NNfunction_ss_sLuR::synapse0x1dfc720() {
   return (neuron0x1dd55a0()*0.417849);
}

double NNfunction_ss_sLuR::synapse0x1dfc760() {
   return (neuron0x1dd58e0()*0.554954);
}

double NNfunction_ss_sLuR::synapse0x1dfc7a0() {
   return (neuron0x1dd5c20()*0.279385);
}

double NNfunction_ss_sLuR::synapse0x1dfc7e0() {
   return (neuron0x1dd5f60()*0.113608);
}

double NNfunction_ss_sLuR::synapse0x1dfc820() {
   return (neuron0x1dd62a0()*0.578355);
}

double NNfunction_ss_sLuR::synapse0x1dfc860() {
   return (neuron0x1dd65e0()*-0.0699228);
}

double NNfunction_ss_sLuR::synapse0x1dfc8a0() {
   return (neuron0x1dd6920()*0.140498);
}

double NNfunction_ss_sLuR::synapse0x1dfc8e0() {
   return (neuron0x1dd6c60()*0.536392);
}

double NNfunction_ss_sLuR::synapse0x1dfc920() {
   return (neuron0x1dd6fa0()*0.655089);
}

double NNfunction_ss_sLuR::synapse0x1dfc960() {
   return (neuron0x1dd72e0()*0.11572);
}

double NNfunction_ss_sLuR::synapse0x1dfc9a0() {
   return (neuron0x1dd7620()*0.792519);
}

double NNfunction_ss_sLuR::synapse0x1dfc430() {
   return (neuron0x1dd7960()*0.35037);
}

double NNfunction_ss_sLuR::synapse0x1dfc470() {
   return (neuron0x1dd7ec0()*-0.444436);
}

double NNfunction_ss_sLuR::synapse0x1dfcaf0() {
   return (neuron0x1dd80e0()*0.0323502);
}

double NNfunction_ss_sLuR::synapse0x1dfcb30() {
   return (neuron0x1dd8420()*-1.00038);
}

double NNfunction_ss_sLuR::synapse0x1dfcb70() {
   return (neuron0x1dd8760()*0.0990403);
}

double NNfunction_ss_sLuR::synapse0x1dfcbb0() {
   return (neuron0x1dd8aa0()*-0.126426);
}

double NNfunction_ss_sLuR::synapse0x1dfcbf0() {
   return (neuron0x1dd8de0()*-0.46793);
}

double NNfunction_ss_sLuR::synapse0x1dfcc30() {
   return (neuron0x1dd9120()*0.067809);
}

double NNfunction_ss_sLuR::synapse0x1dfcfb0() {
   return (neuron0x1dd4560()*-0.338045);
}

double NNfunction_ss_sLuR::synapse0x1dfcff0() {
   return (neuron0x1dd48a0()*-0.319328);
}

double NNfunction_ss_sLuR::synapse0x1dfd030() {
   return (neuron0x1dd4be0()*-0.00117216);
}

double NNfunction_ss_sLuR::synapse0x1dfd070() {
   return (neuron0x1dd4f20()*-0.40063);
}

double NNfunction_ss_sLuR::synapse0x1dfd0b0() {
   return (neuron0x1dd5260()*-0.0333215);
}

double NNfunction_ss_sLuR::synapse0x1dfd0f0() {
   return (neuron0x1dd55a0()*-0.0488485);
}

double NNfunction_ss_sLuR::synapse0x1dfd130() {
   return (neuron0x1dd58e0()*-0.00969381);
}

double NNfunction_ss_sLuR::synapse0x1dfd170() {
   return (neuron0x1dd5c20()*0.0739933);
}

double NNfunction_ss_sLuR::synapse0x1dfd1b0() {
   return (neuron0x1dd5f60()*-0.0771242);
}

double NNfunction_ss_sLuR::synapse0x1dfd1f0() {
   return (neuron0x1dd62a0()*-0.191244);
}

double NNfunction_ss_sLuR::synapse0x1dfd230() {
   return (neuron0x1dd65e0()*-0.171114);
}

double NNfunction_ss_sLuR::synapse0x1dfd270() {
   return (neuron0x1dd6920()*0.491975);
}

double NNfunction_ss_sLuR::synapse0x1dfd2b0() {
   return (neuron0x1dd6c60()*-1.04416);
}

double NNfunction_ss_sLuR::synapse0x1dfd2f0() {
   return (neuron0x1dd6fa0()*0.131663);
}

double NNfunction_ss_sLuR::synapse0x1dfd330() {
   return (neuron0x1dd72e0()*-0.0625999);
}

double NNfunction_ss_sLuR::synapse0x1dfd370() {
   return (neuron0x1dd7620()*-0.458976);
}

double NNfunction_ss_sLuR::synapse0x1dfce00() {
   return (neuron0x1dd7960()*0.194981);
}

double NNfunction_ss_sLuR::synapse0x1dfce40() {
   return (neuron0x1dd7ec0()*-0.545973);
}

double NNfunction_ss_sLuR::synapse0x1dfd4c0() {
   return (neuron0x1dd80e0()*0.259694);
}

double NNfunction_ss_sLuR::synapse0x1dfd500() {
   return (neuron0x1dd8420()*-0.290706);
}

double NNfunction_ss_sLuR::synapse0x1dfd540() {
   return (neuron0x1dd8760()*0.110355);
}

double NNfunction_ss_sLuR::synapse0x1dfd580() {
   return (neuron0x1dd8aa0()*-0.334278);
}

double NNfunction_ss_sLuR::synapse0x1dfd5c0() {
   return (neuron0x1dd8de0()*0.242521);
}

double NNfunction_ss_sLuR::synapse0x1dfd600() {
   return (neuron0x1dd9120()*-0.414926);
}

double NNfunction_ss_sLuR::synapse0x1dfd980() {
   return (neuron0x1dd4560()*0.124583);
}

double NNfunction_ss_sLuR::synapse0x1dfd9c0() {
   return (neuron0x1dd48a0()*-0.00684708);
}

double NNfunction_ss_sLuR::synapse0x1dfda00() {
   return (neuron0x1dd4be0()*0.0518202);
}

double NNfunction_ss_sLuR::synapse0x1dfda40() {
   return (neuron0x1dd4f20()*-0.414357);
}

double NNfunction_ss_sLuR::synapse0x1dfda80() {
   return (neuron0x1dd5260()*-0.314259);
}

double NNfunction_ss_sLuR::synapse0x1dfdac0() {
   return (neuron0x1dd55a0()*0.137871);
}

double NNfunction_ss_sLuR::synapse0x1dfdb00() {
   return (neuron0x1dd58e0()*-0.00783525);
}

double NNfunction_ss_sLuR::synapse0x1dfdb40() {
   return (neuron0x1dd5c20()*0.590227);
}

double NNfunction_ss_sLuR::synapse0x1dfdb80() {
   return (neuron0x1dd5f60()*0.184335);
}

double NNfunction_ss_sLuR::synapse0x1dfdbc0() {
   return (neuron0x1dd62a0()*0.194304);
}

double NNfunction_ss_sLuR::synapse0x1dfdc00() {
   return (neuron0x1dd65e0()*-0.118707);
}

double NNfunction_ss_sLuR::synapse0x1dfdc40() {
   return (neuron0x1dd6920()*0.580527);
}

double NNfunction_ss_sLuR::synapse0x1dfdc80() {
   return (neuron0x1dd6c60()*0.354018);
}

double NNfunction_ss_sLuR::synapse0x1dfdcc0() {
   return (neuron0x1dd6fa0()*0.529555);
}

double NNfunction_ss_sLuR::synapse0x1dfdd00() {
   return (neuron0x1dd72e0()*0.0175351);
}

double NNfunction_ss_sLuR::synapse0x1dfdd40() {
   return (neuron0x1dd7620()*-0.103855);
}

double NNfunction_ss_sLuR::synapse0x1dfd7d0() {
   return (neuron0x1dd7960()*-0.0729071);
}

double NNfunction_ss_sLuR::synapse0x1dfd810() {
   return (neuron0x1dd7ec0()*0.771854);
}

double NNfunction_ss_sLuR::synapse0x1dfde90() {
   return (neuron0x1dd80e0()*-0.223844);
}

double NNfunction_ss_sLuR::synapse0x1dfded0() {
   return (neuron0x1dd8420()*-0.23771);
}

double NNfunction_ss_sLuR::synapse0x1dfdf10() {
   return (neuron0x1dd8760()*0.147255);
}

double NNfunction_ss_sLuR::synapse0x1dfdf50() {
   return (neuron0x1dd8aa0()*-0.317062);
}

double NNfunction_ss_sLuR::synapse0x1dfdf90() {
   return (neuron0x1dd8de0()*-0.00866649);
}

double NNfunction_ss_sLuR::synapse0x1dfdfd0() {
   return (neuron0x1dd9120()*-0.00379291);
}

double NNfunction_ss_sLuR::synapse0x1dda570() {
   return (neuron0x1dd95c0()*-0.63489);
}

double NNfunction_ss_sLuR::synapse0x1dda5b0() {
   return (neuron0x1dd9ed0()*1.21835);
}

double NNfunction_ss_sLuR::synapse0x1ddba80() {
   return (neuron0x1dda9b0()*-0.11147);
}

double NNfunction_ss_sLuR::synapse0x1ddbac0() {
   return (neuron0x1b94240()*0.558438);
}

double NNfunction_ss_sLuR::synapse0x1ddc450() {
   return (neuron0x1ddb7d0()*-0.273471);
}

double NNfunction_ss_sLuR::synapse0x1ddc490() {
   return (neuron0x1ddc1a0()*-0.718635);
}

double NNfunction_ss_sLuR::synapse0x1ddd220() {
   return (neuron0x1ddcf70()*-0.005314);
}

double NNfunction_ss_sLuR::synapse0x1ddd260() {
   return (neuron0x1ddd940()*0.334113);
}

double NNfunction_ss_sLuR::synapse0x1dddbf0() {
   return (neuron0x1dde310()*-0.531238);
}

double NNfunction_ss_sLuR::synapse0x1dddc30() {
   return (neuron0x1ddedf0()*0.0655124);
}

double NNfunction_ss_sLuR::synapse0x1dde5c0() {
   return (neuron0x1ddf7c0()*0.453876);
}

double NNfunction_ss_sLuR::synapse0x1dde600() {
   return (neuron0x1ddc8a0()*0.516107);
}

double NNfunction_ss_sLuR::synapse0x1ddf0a0() {
   return (neuron0x1de1370()*-0.406642);
}

double NNfunction_ss_sLuR::synapse0x1ddf0e0() {
   return (neuron0x1de1d40()*4.22306);
}

double NNfunction_ss_sLuR::synapse0x1ddfa70() {
   return (neuron0x1de2710()*0.0546988);
}

double NNfunction_ss_sLuR::synapse0x1ddfab0() {
   return (neuron0x1de30e0()*0.225263);
}

double NNfunction_ss_sLuR::synapse0x1ddcb50() {
   return (neuron0x1de4ef0()*-0.441905);
}

double NNfunction_ss_sLuR::synapse0x1ddcb90() {
   return (neuron0x1de51d0()*0.151309);
}

double NNfunction_ss_sLuR::synapse0x1de1620() {
   return (neuron0x1de5ba0()*0.283531);
}

double NNfunction_ss_sLuR::synapse0x1de1660() {
   return (neuron0x1de6570()*0.281337);
}

double NNfunction_ss_sLuR::synapse0x1de1ff0() {
   return (neuron0x1de6f40()*-0.943377);
}

double NNfunction_ss_sLuR::synapse0x1de2030() {
   return (neuron0x1de7910()*-0.696616);
}

double NNfunction_ss_sLuR::synapse0x1de29c0() {
   return (neuron0x1de0460()*3.36084);
}

double NNfunction_ss_sLuR::synapse0x1de2a00() {
   return (neuron0x1de0e30()*-0.505933);
}

double NNfunction_ss_sLuR::synapse0x1de3390() {
   return (neuron0x1dea6a0()*0.339929);
}

double NNfunction_ss_sLuR::synapse0x1de33d0() {
   return (neuron0x1deb070()*0.959571);
}

double NNfunction_ss_sLuR::synapse0x1dd7500() {
   return (neuron0x1deba40()*-0.172909);
}

double NNfunction_ss_sLuR::synapse0x1dd7540() {
   return (neuron0x1dec410()*0.684686);
}

double NNfunction_ss_sLuR::synapse0x1de5480() {
   return (neuron0x1decde0()*-1.15788);
}

double NNfunction_ss_sLuR::synapse0x1de54c0() {
   return (neuron0x1ded7b0()*0.0849813);
}

double NNfunction_ss_sLuR::synapse0x1de5e50() {
   return (neuron0x1dee180()*0.303194);
}

double NNfunction_ss_sLuR::synapse0x1de5e90() {
   return (neuron0x1deeb50()*0.140496);
}

double NNfunction_ss_sLuR::synapse0x1de6820() {
   return (neuron0x1de4be0()*-0.503186);
}

double NNfunction_ss_sLuR::synapse0x1de6860() {
   return (neuron0x1df1730()*-0.372335);
}

double NNfunction_ss_sLuR::synapse0x1de71f0() {
   return (neuron0x1df2100()*0.208641);
}

double NNfunction_ss_sLuR::synapse0x1de7230() {
   return (neuron0x1df2ad0()*1.19254);
}

double NNfunction_ss_sLuR::synapse0x1de7bc0() {
   return (neuron0x1df34a0()*1.22952);
}

double NNfunction_ss_sLuR::synapse0x1de7c00() {
   return (neuron0x1df3e70()*-0.0552352);
}

double NNfunction_ss_sLuR::synapse0x1de0710() {
   return (neuron0x1df4840()*-0.912537);
}

double NNfunction_ss_sLuR::synapse0x1de0750() {
   return (neuron0x1df5210()*-0.388126);
}

double NNfunction_ss_sLuR::synapse0x1de9fc0() {
   return (neuron0x1df5be0()*0.424216);
}

double NNfunction_ss_sLuR::synapse0x1dea000() {
   return (neuron0x1df67c0()*0.625276);
}

double NNfunction_ss_sLuR::synapse0x1dea950() {
   return (neuron0x1df7190()*-0.131365);
}

double NNfunction_ss_sLuR::synapse0x1dea990() {
   return (neuron0x1de8010()*-0.51693);
}

double NNfunction_ss_sLuR::synapse0x1deb320() {
   return (neuron0x1de89e0()*-0.137359);
}

double NNfunction_ss_sLuR::synapse0x1deb360() {
   return (neuron0x1de93b0()*0.443451);
}

double NNfunction_ss_sLuR::synapse0x1debcf0() {
   return (neuron0x1dfb9f0()*0.135961);
}

double NNfunction_ss_sLuR::synapse0x1debd30() {
   return (neuron0x1dfc2a0()*-0.745486);
}

double NNfunction_ss_sLuR::synapse0x1dec6c0() {
   return (neuron0x1dfcc70()*0.641921);
}

double NNfunction_ss_sLuR::synapse0x1dec700() {
   return (neuron0x1dfd640()*-0.929109);
}

double NNfunction_ss_sLuR::synapse0x1deee00() {
   return (neuron0x1dd95c0()*-0.129455);
}

double NNfunction_ss_sLuR::synapse0x1deee40() {
   return (neuron0x1dd9ed0()*-1.35311);
}

double NNfunction_ss_sLuR::synapse0x1de43c0() {
   return (neuron0x1dda9b0()*-0.0457307);
}

double NNfunction_ss_sLuR::synapse0x1de4400() {
   return (neuron0x1b94240()*0.281057);
}

double NNfunction_ss_sLuR::synapse0x1df19e0() {
   return (neuron0x1ddb7d0()*0.298017);
}

double NNfunction_ss_sLuR::synapse0x1df1a20() {
   return (neuron0x1ddc1a0()*-0.146221);
}

double NNfunction_ss_sLuR::synapse0x1df23b0() {
   return (neuron0x1ddcf70()*-0.0224915);
}

double NNfunction_ss_sLuR::synapse0x1df23f0() {
   return (neuron0x1ddd940()*0.0222691);
}

double NNfunction_ss_sLuR::synapse0x1df2d80() {
   return (neuron0x1dde310()*-0.0770047);
}

double NNfunction_ss_sLuR::synapse0x1df2dc0() {
   return (neuron0x1ddedf0()*-0.724637);
}

double NNfunction_ss_sLuR::synapse0x1df3750() {
   return (neuron0x1ddf7c0()*0.176967);
}

double NNfunction_ss_sLuR::synapse0x1df3790() {
   return (neuron0x1ddc8a0()*0.080765);
}

double NNfunction_ss_sLuR::synapse0x1df4120() {
   return (neuron0x1de1370()*0.101357);
}

double NNfunction_ss_sLuR::synapse0x1df4160() {
   return (neuron0x1de1d40()*1.70385);
}

double NNfunction_ss_sLuR::synapse0x1df4af0() {
   return (neuron0x1de2710()*0.164565);
}

double NNfunction_ss_sLuR::synapse0x1df4b30() {
   return (neuron0x1de30e0()*-0.0825907);
}

double NNfunction_ss_sLuR::synapse0x1df54c0() {
   return (neuron0x1de4ef0()*-0.135271);
}

double NNfunction_ss_sLuR::synapse0x1df5500() {
   return (neuron0x1de51d0()*-0.0199708);
}

double NNfunction_ss_sLuR::synapse0x1df5e90() {
   return (neuron0x1de5ba0()*0.376485);
}

double NNfunction_ss_sLuR::synapse0x1df5ed0() {
   return (neuron0x1de6570()*0.0566474);
}

double NNfunction_ss_sLuR::synapse0x1df6a70() {
   return (neuron0x1de6f40()*0.054837);
}

double NNfunction_ss_sLuR::synapse0x1df6ab0() {
   return (neuron0x1de7910()*-0.834878);
}

double NNfunction_ss_sLuR::synapse0x1df7440() {
   return (neuron0x1de0460()*-0.0691033);
}

double NNfunction_ss_sLuR::synapse0x1df7480() {
   return (neuron0x1de0e30()*-0.0812624);
}

double NNfunction_ss_sLuR::synapse0x1de82c0() {
   return (neuron0x1dea6a0()*0.0207554);
}

double NNfunction_ss_sLuR::synapse0x1de8300() {
   return (neuron0x1deb070()*-0.0148047);
}

double NNfunction_ss_sLuR::synapse0x1de8c90() {
   return (neuron0x1deba40()*-1.09179);
}

double NNfunction_ss_sLuR::synapse0x1de8cd0() {
   return (neuron0x1dec410()*0.136794);
}

double NNfunction_ss_sLuR::synapse0x1de9660() {
   return (neuron0x1decde0()*-0.343613);
}

double NNfunction_ss_sLuR::synapse0x1de96a0() {
   return (neuron0x1ded7b0()*0.0511536);
}

double NNfunction_ss_sLuR::synapse0x1dfbb80() {
   return (neuron0x1dee180()*0.0149839);
}

double NNfunction_ss_sLuR::synapse0x1dfbbc0() {
   return (neuron0x1deeb50()*1.05857);
}

double NNfunction_ss_sLuR::synapse0x1dfc550() {
   return (neuron0x1de4be0()*-0.261432);
}

double NNfunction_ss_sLuR::synapse0x1dfc590() {
   return (neuron0x1df1730()*0.148438);
}

double NNfunction_ss_sLuR::synapse0x1dfcf20() {
   return (neuron0x1df2100()*0.0907363);
}

double NNfunction_ss_sLuR::synapse0x1dfcf60() {
   return (neuron0x1df2ad0()*-0.380408);
}

double NNfunction_ss_sLuR::synapse0x1dfd8f0() {
   return (neuron0x1df34a0()*-0.0369345);
}

double NNfunction_ss_sLuR::synapse0x1dfd930() {
   return (neuron0x1df3e70()*-0.00673826);
}

double NNfunction_ss_sLuR::synapse0x1dd97e0() {
   return (neuron0x1df4840()*-0.442124);
}

double NNfunction_ss_sLuR::synapse0x1dd9820() {
   return (neuron0x1df5210()*-0.140423);
}

double NNfunction_ss_sLuR::synapse0x1ded090() {
   return (neuron0x1df5be0()*0.100115);
}

double NNfunction_ss_sLuR::synapse0x1ded0d0() {
   return (neuron0x1df67c0()*-1.05197);
}

double NNfunction_ss_sLuR::synapse0x1dfe010() {
   return (neuron0x1df7190()*-0.00605164);
}

double NNfunction_ss_sLuR::synapse0x1dfe050() {
   return (neuron0x1de8010()*-0.0842881);
}

double NNfunction_ss_sLuR::synapse0x1dfe090() {
   return (neuron0x1de89e0()*-0.0269206);
}

double NNfunction_ss_sLuR::synapse0x1dfe0d0() {
   return (neuron0x1de93b0()*-0.183682);
}

double NNfunction_ss_sLuR::synapse0x1e04f80() {
   return (neuron0x1dfb9f0()*1.90646);
}

double NNfunction_ss_sLuR::synapse0x1e04fc0() {
   return (neuron0x1dfc2a0()*0.0956092);
}

double NNfunction_ss_sLuR::synapse0x1e05000() {
   return (neuron0x1dfcc70()*-0.105478);
}

double NNfunction_ss_sLuR::synapse0x1e05040() {
   return (neuron0x1dfd640()*-0.0721192);
}

double NNfunction_ss_sLuR::synapse0x1e053c0() {
   return (neuron0x1dd95c0()*1.31543);
}

double NNfunction_ss_sLuR::synapse0x1e05400() {
   return (neuron0x1dd9ed0()*0.305779);
}

double NNfunction_ss_sLuR::synapse0x1e05440() {
   return (neuron0x1dda9b0()*1.1353);
}

double NNfunction_ss_sLuR::synapse0x1e05480() {
   return (neuron0x1b94240()*-1.56827);
}

double NNfunction_ss_sLuR::synapse0x1e054c0() {
   return (neuron0x1ddb7d0()*1.38071);
}

double NNfunction_ss_sLuR::synapse0x1e05500() {
   return (neuron0x1ddc1a0()*1.54761);
}

double NNfunction_ss_sLuR::synapse0x1e05540() {
   return (neuron0x1ddcf70()*1.39883);
}

double NNfunction_ss_sLuR::synapse0x1e05580() {
   return (neuron0x1ddd940()*-1.25197);
}

double NNfunction_ss_sLuR::synapse0x1e055c0() {
   return (neuron0x1dde310()*0.964379);
}

double NNfunction_ss_sLuR::synapse0x1e05600() {
   return (neuron0x1ddedf0()*1.22588);
}

double NNfunction_ss_sLuR::synapse0x1e05640() {
   return (neuron0x1ddf7c0()*1.26484);
}

double NNfunction_ss_sLuR::synapse0x1e05680() {
   return (neuron0x1ddc8a0()*0.522402);
}

double NNfunction_ss_sLuR::synapse0x1e056c0() {
   return (neuron0x1de1370()*1.27817);
}

double NNfunction_ss_sLuR::synapse0x1e05700() {
   return (neuron0x1de1d40()*-8.04449);
}

double NNfunction_ss_sLuR::synapse0x1e05740() {
   return (neuron0x1de2710()*2.1551);
}

double NNfunction_ss_sLuR::synapse0x1e05780() {
   return (neuron0x1de30e0()*-1.36696);
}

double NNfunction_ss_sLuR::synapse0x1e05210() {
   return (neuron0x1de4ef0()*2.14713);
}

double NNfunction_ss_sLuR::synapse0x1e05250() {
   return (neuron0x1de51d0()*1.1219);
}

double NNfunction_ss_sLuR::synapse0x1e058d0() {
   return (neuron0x1de5ba0()*-1.67797);
}

double NNfunction_ss_sLuR::synapse0x1e05910() {
   return (neuron0x1de6570()*1.39626);
}

double NNfunction_ss_sLuR::synapse0x1e05950() {
   return (neuron0x1de6f40()*1.4503);
}

double NNfunction_ss_sLuR::synapse0x1e05990() {
   return (neuron0x1de7910()*0.889382);
}

double NNfunction_ss_sLuR::synapse0x1e059d0() {
   return (neuron0x1de0460()*-2.25838);
}

double NNfunction_ss_sLuR::synapse0x1e05a10() {
   return (neuron0x1de0e30()*1.52032);
}

double NNfunction_ss_sLuR::synapse0x1e05a50() {
   return (neuron0x1dea6a0()*1.36872);
}

double NNfunction_ss_sLuR::synapse0x1e05a90() {
   return (neuron0x1deb070()*-2.54602);
}

double NNfunction_ss_sLuR::synapse0x1e05ad0() {
   return (neuron0x1deba40()*-0.814497);
}

double NNfunction_ss_sLuR::synapse0x1e05b10() {
   return (neuron0x1dec410()*-7.20705);
}

double NNfunction_ss_sLuR::synapse0x1e05b50() {
   return (neuron0x1decde0()*-0.339421);
}

double NNfunction_ss_sLuR::synapse0x1e05b90() {
   return (neuron0x1ded7b0()*1.33421);
}

double NNfunction_ss_sLuR::synapse0x1e05bd0() {
   return (neuron0x1dee180()*1.89485);
}

double NNfunction_ss_sLuR::synapse0x1e05c10() {
   return (neuron0x1deeb50()*0.67317);
}

double NNfunction_ss_sLuR::synapse0x1e057c0() {
   return (neuron0x1de4be0()*1.2399);
}

double NNfunction_ss_sLuR::synapse0x1e05800() {
   return (neuron0x1df1730()*1.54357);
}

double NNfunction_ss_sLuR::synapse0x1e05840() {
   return (neuron0x1df2100()*1.16509);
}

double NNfunction_ss_sLuR::synapse0x1e05880() {
   return (neuron0x1df2ad0()*3.14312);
}

double NNfunction_ss_sLuR::synapse0x1e05e60() {
   return (neuron0x1df34a0()*-0.376738);
}

double NNfunction_ss_sLuR::synapse0x1e05ea0() {
   return (neuron0x1df3e70()*-1.8679);
}

double NNfunction_ss_sLuR::synapse0x1e05ee0() {
   return (neuron0x1df4840()*2.3005);
}

double NNfunction_ss_sLuR::synapse0x1e05f20() {
   return (neuron0x1df5210()*1.01491);
}

double NNfunction_ss_sLuR::synapse0x1e05f60() {
   return (neuron0x1df5be0()*1.02234);
}

double NNfunction_ss_sLuR::synapse0x1e05fa0() {
   return (neuron0x1df67c0()*1.80038);
}

double NNfunction_ss_sLuR::synapse0x1e05fe0() {
   return (neuron0x1df7190()*1.70603);
}

double NNfunction_ss_sLuR::synapse0x1e06020() {
   return (neuron0x1de8010()*0.842385);
}

double NNfunction_ss_sLuR::synapse0x1e06060() {
   return (neuron0x1de89e0()*2.37674);
}

double NNfunction_ss_sLuR::synapse0x1e060a0() {
   return (neuron0x1de93b0()*-2.03772);
}

double NNfunction_ss_sLuR::synapse0x1e060e0() {
   return (neuron0x1dfb9f0()*-4.34934);
}

double NNfunction_ss_sLuR::synapse0x1e06120() {
   return (neuron0x1dfc2a0()*0.409099);
}

double NNfunction_ss_sLuR::synapse0x1e06160() {
   return (neuron0x1dfcc70()*-1.05644);
}

double NNfunction_ss_sLuR::synapse0x1e061a0() {
   return (neuron0x1dfd640()*-0.401835);
}

double NNfunction_ss_sLuR::synapse0x1e06520() {
   return (neuron0x1dd95c0()*0.0135251);
}

double NNfunction_ss_sLuR::synapse0x1e06560() {
   return (neuron0x1dd9ed0()*0.52231);
}

double NNfunction_ss_sLuR::synapse0x1e065a0() {
   return (neuron0x1dda9b0()*0.00501191);
}

double NNfunction_ss_sLuR::synapse0x1e065e0() {
   return (neuron0x1b94240()*-0.0438767);
}

double NNfunction_ss_sLuR::synapse0x1e06620() {
   return (neuron0x1ddb7d0()*-3.81211);
}

double NNfunction_ss_sLuR::synapse0x1e06660() {
   return (neuron0x1ddc1a0()*0.000390338);
}

double NNfunction_ss_sLuR::synapse0x1e066a0() {
   return (neuron0x1ddcf70()*0.00315819);
}

double NNfunction_ss_sLuR::synapse0x1e066e0() {
   return (neuron0x1ddd940()*0.0243192);
}

double NNfunction_ss_sLuR::synapse0x1e06720() {
   return (neuron0x1dde310()*0.028804);
}

double NNfunction_ss_sLuR::synapse0x1e06760() {
   return (neuron0x1ddedf0()*-2.6254);
}

double NNfunction_ss_sLuR::synapse0x1e067a0() {
   return (neuron0x1ddf7c0()*-0.0652199);
}

double NNfunction_ss_sLuR::synapse0x1e067e0() {
   return (neuron0x1ddc8a0()*-0.026871);
}

double NNfunction_ss_sLuR::synapse0x1e06820() {
   return (neuron0x1de1370()*-0.0573905);
}

double NNfunction_ss_sLuR::synapse0x1e06860() {
   return (neuron0x1de1d40()*-3.47167);
}

double NNfunction_ss_sLuR::synapse0x1e068a0() {
   return (neuron0x1de2710()*0.0194595);
}

double NNfunction_ss_sLuR::synapse0x1e068e0() {
   return (neuron0x1de30e0()*0.0453669);
}

double NNfunction_ss_sLuR::synapse0x1e06370() {
   return (neuron0x1de4ef0()*0.014534);
}

double NNfunction_ss_sLuR::synapse0x1e063b0() {
   return (neuron0x1de51d0()*-0.00275269);
}

double NNfunction_ss_sLuR::synapse0x1e06a30() {
   return (neuron0x1de5ba0()*-0.106931);
}

double NNfunction_ss_sLuR::synapse0x1e06a70() {
   return (neuron0x1de6570()*-0.0353649);
}

double NNfunction_ss_sLuR::synapse0x1e06ab0() {
   return (neuron0x1de6f40()*-0.046479);
}

double NNfunction_ss_sLuR::synapse0x1e06af0() {
   return (neuron0x1de7910()*0.326868);
}

double NNfunction_ss_sLuR::synapse0x1e06b30() {
   return (neuron0x1de0460()*-0.375292);
}

double NNfunction_ss_sLuR::synapse0x1e06b70() {
   return (neuron0x1de0e30()*0.0726896);
}

double NNfunction_ss_sLuR::synapse0x1e06bb0() {
   return (neuron0x1dea6a0()*-0.0202225);
}

double NNfunction_ss_sLuR::synapse0x1e06bf0() {
   return (neuron0x1deb070()*0.145876);
}

double NNfunction_ss_sLuR::synapse0x1e06c30() {
   return (neuron0x1deba40()*0.978111);
}

double NNfunction_ss_sLuR::synapse0x1e06c70() {
   return (neuron0x1dec410()*-0.311163);
}

double NNfunction_ss_sLuR::synapse0x1e06cb0() {
   return (neuron0x1decde0()*1.08898);
}

double NNfunction_ss_sLuR::synapse0x1e06cf0() {
   return (neuron0x1ded7b0()*-0.0474401);
}

double NNfunction_ss_sLuR::synapse0x1e06d30() {
   return (neuron0x1dee180()*-0.0146199);
}

double NNfunction_ss_sLuR::synapse0x1e06d70() {
   return (neuron0x1deeb50()*3.1674);
}

double NNfunction_ss_sLuR::synapse0x1e06920() {
   return (neuron0x1de4be0()*0.239734);
}

double NNfunction_ss_sLuR::synapse0x1e06960() {
   return (neuron0x1df1730()*-0.0750514);
}

double NNfunction_ss_sLuR::synapse0x1e069a0() {
   return (neuron0x1df2100()*1.58114);
}

double NNfunction_ss_sLuR::synapse0x1e069e0() {
   return (neuron0x1df2ad0()*0.880361);
}

double NNfunction_ss_sLuR::synapse0x1e06fc0() {
   return (neuron0x1df34a0()*0.0262472);
}

double NNfunction_ss_sLuR::synapse0x1e07000() {
   return (neuron0x1df3e70()*0.0406174);
}

double NNfunction_ss_sLuR::synapse0x1e07040() {
   return (neuron0x1df4840()*0.154147);
}

double NNfunction_ss_sLuR::synapse0x1e07080() {
   return (neuron0x1df5210()*0.0259289);
}

double NNfunction_ss_sLuR::synapse0x1e070c0() {
   return (neuron0x1df5be0()*-0.0430201);
}

double NNfunction_ss_sLuR::synapse0x1e07100() {
   return (neuron0x1df67c0()*-2.00726);
}

double NNfunction_ss_sLuR::synapse0x1e07140() {
   return (neuron0x1df7190()*-0.0353688);
}

double NNfunction_ss_sLuR::synapse0x1e07180() {
   return (neuron0x1de8010()*0.011386);
}

double NNfunction_ss_sLuR::synapse0x1e071c0() {
   return (neuron0x1de89e0()*0.000819471);
}

double NNfunction_ss_sLuR::synapse0x1e07200() {
   return (neuron0x1de93b0()*0.0688568);
}

double NNfunction_ss_sLuR::synapse0x1e07240() {
   return (neuron0x1dfb9f0()*-0.809102);
}

double NNfunction_ss_sLuR::synapse0x1e07280() {
   return (neuron0x1dfc2a0()*-0.0470205);
}

double NNfunction_ss_sLuR::synapse0x1e072c0() {
   return (neuron0x1dfcc70()*0.056066);
}

double NNfunction_ss_sLuR::synapse0x1e07300() {
   return (neuron0x1dfd640()*0.0458362);
}

double NNfunction_ss_sLuR::synapse0x1e07680() {
   return (neuron0x1dd95c0()*0.51524);
}

double NNfunction_ss_sLuR::synapse0x1e076c0() {
   return (neuron0x1dd9ed0()*-0.00411976);
}

double NNfunction_ss_sLuR::synapse0x1e07700() {
   return (neuron0x1dda9b0()*-0.113177);
}

double NNfunction_ss_sLuR::synapse0x1e07740() {
   return (neuron0x1b94240()*0.24651);
}

double NNfunction_ss_sLuR::synapse0x1e07780() {
   return (neuron0x1ddb7d0()*0.0944557);
}

double NNfunction_ss_sLuR::synapse0x1e077c0() {
   return (neuron0x1ddc1a0()*0.904882);
}

double NNfunction_ss_sLuR::synapse0x1e07800() {
   return (neuron0x1ddcf70()*0.129097);
}

double NNfunction_ss_sLuR::synapse0x1e07840() {
   return (neuron0x1ddd940()*0.644695);
}

double NNfunction_ss_sLuR::synapse0x1e07880() {
   return (neuron0x1dde310()*-0.342836);
}

double NNfunction_ss_sLuR::synapse0x1e078c0() {
   return (neuron0x1ddedf0()*1.2166);
}

double NNfunction_ss_sLuR::synapse0x1e07900() {
   return (neuron0x1ddf7c0()*0.991346);
}

double NNfunction_ss_sLuR::synapse0x1e07940() {
   return (neuron0x1ddc8a0()*1.02542);
}

double NNfunction_ss_sLuR::synapse0x1e07980() {
   return (neuron0x1de1370()*-0.643299);
}

double NNfunction_ss_sLuR::synapse0x1e079c0() {
   return (neuron0x1de1d40()*0.424918);
}

double NNfunction_ss_sLuR::synapse0x1e07a00() {
   return (neuron0x1de2710()*-0.0346776);
}

double NNfunction_ss_sLuR::synapse0x1e07a40() {
   return (neuron0x1de30e0()*1.06435);
}

double NNfunction_ss_sLuR::synapse0x1e074d0() {
   return (neuron0x1de4ef0()*0.284206);
}

double NNfunction_ss_sLuR::synapse0x1e07510() {
   return (neuron0x1de51d0()*0.549229);
}

double NNfunction_ss_sLuR::synapse0x1e07b90() {
   return (neuron0x1de5ba0()*-0.279964);
}

double NNfunction_ss_sLuR::synapse0x1e07bd0() {
   return (neuron0x1de6570()*-0.0839374);
}

double NNfunction_ss_sLuR::synapse0x1e07c10() {
   return (neuron0x1de6f40()*0.333573);
}

double NNfunction_ss_sLuR::synapse0x1e07c50() {
   return (neuron0x1de7910()*1.08518);
}

double NNfunction_ss_sLuR::synapse0x1e07c90() {
   return (neuron0x1de0460()*0.246189);
}

double NNfunction_ss_sLuR::synapse0x1e07cd0() {
   return (neuron0x1de0e30()*-0.0456911);
}

double NNfunction_ss_sLuR::synapse0x1e07d10() {
   return (neuron0x1dea6a0()*0.315299);
}

double NNfunction_ss_sLuR::synapse0x1e07d50() {
   return (neuron0x1deb070()*0.385065);
}

double NNfunction_ss_sLuR::synapse0x1e07d90() {
   return (neuron0x1deba40()*0.0827016);
}

double NNfunction_ss_sLuR::synapse0x1e07dd0() {
   return (neuron0x1dec410()*1.42443);
}

double NNfunction_ss_sLuR::synapse0x1e07e10() {
   return (neuron0x1decde0()*0.328575);
}

double NNfunction_ss_sLuR::synapse0x1e07e50() {
   return (neuron0x1ded7b0()*1.30514);
}

double NNfunction_ss_sLuR::synapse0x1e07e90() {
   return (neuron0x1dee180()*-0.267777);
}

double NNfunction_ss_sLuR::synapse0x1e07ed0() {
   return (neuron0x1deeb50()*-0.217906);
}

double NNfunction_ss_sLuR::synapse0x1e07a80() {
   return (neuron0x1de4be0()*0.591436);
}

double NNfunction_ss_sLuR::synapse0x1e07ac0() {
   return (neuron0x1df1730()*0.308358);
}

double NNfunction_ss_sLuR::synapse0x1e07b00() {
   return (neuron0x1df2100()*0.650226);
}

double NNfunction_ss_sLuR::synapse0x1e07b40() {
   return (neuron0x1df2ad0()*0.795999);
}

double NNfunction_ss_sLuR::synapse0x1e08120() {
   return (neuron0x1df34a0()*-0.0025772);
}

double NNfunction_ss_sLuR::synapse0x1e08160() {
   return (neuron0x1df3e70()*0.724174);
}

double NNfunction_ss_sLuR::synapse0x1e081a0() {
   return (neuron0x1df4840()*1.35117);
}

double NNfunction_ss_sLuR::synapse0x1e081e0() {
   return (neuron0x1df5210()*0.928376);
}

double NNfunction_ss_sLuR::synapse0x1e08220() {
   return (neuron0x1df5be0()*0.792399);
}

double NNfunction_ss_sLuR::synapse0x1e08260() {
   return (neuron0x1df67c0()*0.835982);
}

double NNfunction_ss_sLuR::synapse0x1e082a0() {
   return (neuron0x1df7190()*0.347726);
}

double NNfunction_ss_sLuR::synapse0x1e082e0() {
   return (neuron0x1de8010()*-0.778741);
}

double NNfunction_ss_sLuR::synapse0x1e08320() {
   return (neuron0x1de89e0()*0.907568);
}

double NNfunction_ss_sLuR::synapse0x1e08360() {
   return (neuron0x1de93b0()*0.408114);
}

double NNfunction_ss_sLuR::synapse0x1e083a0() {
   return (neuron0x1dfb9f0()*1.82968);
}

double NNfunction_ss_sLuR::synapse0x1e083e0() {
   return (neuron0x1dfc2a0()*-0.209456);
}

double NNfunction_ss_sLuR::synapse0x1e08420() {
   return (neuron0x1dfcc70()*-0.0913278);
}

double NNfunction_ss_sLuR::synapse0x1e08460() {
   return (neuron0x1dfd640()*-0.320666);
}

double NNfunction_ss_sLuR::synapse0x1dd9580() {
   return (neuron0x1e04840()*5.56352);
}

double NNfunction_ss_sLuR::synapse0x1e086c0() {
   return (neuron0x1e04be0()*-3.364);
}

double NNfunction_ss_sLuR::synapse0x1e08700() {
   return (neuron0x1e05080()*-8.52681);
}

double NNfunction_ss_sLuR::synapse0x1e08740() {
   return (neuron0x1e061e0()*-9.86032);
}

double NNfunction_ss_sLuR::synapse0x1e08780() {
   return (neuron0x1e07340()*6.54112);
}

