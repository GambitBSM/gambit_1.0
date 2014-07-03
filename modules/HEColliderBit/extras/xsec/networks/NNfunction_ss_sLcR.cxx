#include "NNfunction_ss_sLcR.h"
#include <cmath>

double NNfunction_ss_sLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9327)/15.0593;
   input1 = (in1 - 33.9959)/860.581;
   input2 = (in2 - 418.04)/531.566;
   input3 = (in3 - 128.073)/653.312;
   input4 = (in4 - 753.009)/804.194;
   input5 = (in5 - 639.63)/769.011;
   input6 = (in6 - 644.283)/775.374;
   input7 = (in7 - 650.26)/771.604;
   input8 = (in8 - 638.351)/779.75;
   input9 = (in9 - 625.416)/759.935;
   input10 = (in10 - 667.575)/792.325;
   input11 = (in11 - 593.491)/647.886;
   input12 = (in12 - 361.945)/228.721;
   input13 = (in13 - 447.029)/391.626;
   input14 = (in14 - 601.692)/635.636;
   input15 = (in15 - 365.945)/229.292;
   input16 = (in16 - 428.522)/432.25;
   input17 = (in17 - 617.135)/680.758;
   input18 = (in18 - 607.981)/677.96;
   input19 = (in19 - 629.442)/676.566;
   input20 = (in20 - -114.838)/399.699;
   input21 = (in21 - -142.257)/911.989;
   input22 = (in22 - 11.4098)/938.008;
   input23 = (in23 - -71.5622)/502.035;
   switch(index) {
     case 0:
         return neuron0x1e20eb0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLcR::Value(int index, double* input) {
   input0 = (input[0] - 22.9327)/15.0593;
   input1 = (input[1] - 33.9959)/860.581;
   input2 = (input[2] - 418.04)/531.566;
   input3 = (input[3] - 128.073)/653.312;
   input4 = (input[4] - 753.009)/804.194;
   input5 = (input[5] - 639.63)/769.011;
   input6 = (input[6] - 644.283)/775.374;
   input7 = (input[7] - 650.26)/771.604;
   input8 = (input[8] - 638.351)/779.75;
   input9 = (input[9] - 625.416)/759.935;
   input10 = (input[10] - 667.575)/792.325;
   input11 = (input[11] - 593.491)/647.886;
   input12 = (input[12] - 361.945)/228.721;
   input13 = (input[13] - 447.029)/391.626;
   input14 = (input[14] - 601.692)/635.636;
   input15 = (input[15] - 365.945)/229.292;
   input16 = (input[16] - 428.522)/432.25;
   input17 = (input[17] - 617.135)/680.758;
   input18 = (input[18] - 607.981)/677.96;
   input19 = (input[19] - 629.442)/676.566;
   input20 = (input[20] - -114.838)/399.699;
   input21 = (input[21] - -142.257)/911.989;
   input22 = (input[22] - 11.4098)/938.008;
   input23 = (input[23] - -71.5622)/502.035;
   switch(index) {
     case 0:
         return neuron0x1e20eb0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLcR::neuron0x1decf70() {
   return input0;
}

double NNfunction_ss_sLcR::neuron0x1ded2b0() {
   return input1;
}

double NNfunction_ss_sLcR::neuron0x1ded5f0() {
   return input2;
}

double NNfunction_ss_sLcR::neuron0x1ded930() {
   return input3;
}

double NNfunction_ss_sLcR::neuron0x1dedc70() {
   return input4;
}

double NNfunction_ss_sLcR::neuron0x1dedfb0() {
   return input5;
}

double NNfunction_ss_sLcR::neuron0x1dee2f0() {
   return input6;
}

double NNfunction_ss_sLcR::neuron0x1dee630() {
   return input7;
}

double NNfunction_ss_sLcR::neuron0x1dee970() {
   return input8;
}

double NNfunction_ss_sLcR::neuron0x1deecb0() {
   return input9;
}

double NNfunction_ss_sLcR::neuron0x1deeff0() {
   return input10;
}

double NNfunction_ss_sLcR::neuron0x1def330() {
   return input11;
}

double NNfunction_ss_sLcR::neuron0x1def670() {
   return input12;
}

double NNfunction_ss_sLcR::neuron0x1def9b0() {
   return input13;
}

double NNfunction_ss_sLcR::neuron0x1defcf0() {
   return input14;
}

double NNfunction_ss_sLcR::neuron0x1df0030() {
   return input15;
}

double NNfunction_ss_sLcR::neuron0x1df0370() {
   return input16;
}

double NNfunction_ss_sLcR::neuron0x1df08d0() {
   return input17;
}

double NNfunction_ss_sLcR::neuron0x1df0af0() {
   return input18;
}

double NNfunction_ss_sLcR::neuron0x1df0e30() {
   return input19;
}

double NNfunction_ss_sLcR::neuron0x1df1170() {
   return input20;
}

double NNfunction_ss_sLcR::neuron0x1df14b0() {
   return input21;
}

double NNfunction_ss_sLcR::neuron0x1df17f0() {
   return input22;
}

double NNfunction_ss_sLcR::neuron0x1df1b30() {
   return input23;
}

double NNfunction_ss_sLcR::input0x1df1fd0() {
   double input = -0.520543;
   input += synapse0x1bb6920();
   input += synapse0x1dece30();
   input += synapse0x1dece70();
   input += synapse0x1df2280();
   input += synapse0x1df22c0();
   input += synapse0x1df2300();
   input += synapse0x1df2340();
   input += synapse0x1df2380();
   input += synapse0x1df23c0();
   input += synapse0x1df2400();
   input += synapse0x1df2440();
   input += synapse0x1df2480();
   input += synapse0x1df24c0();
   input += synapse0x1df2500();
   input += synapse0x1df2540();
   input += synapse0x1df2580();
   input += synapse0x1decda0();
   input += synapse0x1decde0();
   input += synapse0x1ba8130();
   input += synapse0x1ba8170();
   input += synapse0x1df27e0();
   input += synapse0x1df2820();
   input += synapse0x1df2860();
   input += synapse0x1df28a0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1df1fd0() {
   double input = input0x1df1fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1df28e0() {
   double input = -1.51494;
   input += synapse0x1df2c20();
   input += synapse0x1df2c60();
   input += synapse0x1df2ca0();
   input += synapse0x1df2ce0();
   input += synapse0x1df2d20();
   input += synapse0x1df2d60();
   input += synapse0x1df2da0();
   input += synapse0x1df2de0();
   input += synapse0x1df2e20();
   input += synapse0x1df26d0();
   input += synapse0x1df2710();
   input += synapse0x1df2750();
   input += synapse0x1df2790();
   input += synapse0x1df3070();
   input += synapse0x1df30b0();
   input += synapse0x1df30f0();
   input += synapse0x1df2a70();
   input += synapse0x1df2ab0();
   input += synapse0x1df3240();
   input += synapse0x1df3280();
   input += synapse0x1df32c0();
   input += synapse0x1df3300();
   input += synapse0x1df3340();
   input += synapse0x1df3380();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1df28e0() {
   double input = input0x1df28e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1df33c0() {
   double input = -0.924677;
   input += synapse0x1df3700();
   input += synapse0x1df3740();
   input += synapse0x1df3780();
   input += synapse0x1df37c0();
   input += synapse0x1df3800();
   input += synapse0x1df3840();
   input += synapse0x1df3880();
   input += synapse0x1df38c0();
   input += synapse0x1df3900();
   input += synapse0x1df3940();
   input += synapse0x1df3980();
   input += synapse0x1df39c0();
   input += synapse0x1df3a00();
   input += synapse0x1df3a40();
   input += synapse0x1df3a80();
   input += synapse0x1df3ac0();
   input += synapse0x1df3550();
   input += synapse0x1df3590();
   input += synapse0x1bb6030();
   input += synapse0x1bb6070();
   input += synapse0x1ddc000();
   input += synapse0x1ddc040();
   input += synapse0x1ddc080();
   input += synapse0x1deceb0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1df33c0() {
   double input = input0x1df33c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1bb6790() {
   double input = -1.3517;
   input += synapse0x1df3010();
   input += synapse0x1decef0();
   input += synapse0x1decf30();
   input += synapse0x1df3c10();
   input += synapse0x1df3c50();
   input += synapse0x1df3c90();
   input += synapse0x1df3cd0();
   input += synapse0x1df3d10();
   input += synapse0x1df3d50();
   input += synapse0x1df3d90();
   input += synapse0x1df3dd0();
   input += synapse0x1df3e10();
   input += synapse0x1df3e50();
   input += synapse0x1df3e90();
   input += synapse0x1df3ed0();
   input += synapse0x1df3f10();
   input += synapse0x1df2e60();
   input += synapse0x1df2ea0();
   input += synapse0x1df4060();
   input += synapse0x1df40a0();
   input += synapse0x1df40e0();
   input += synapse0x1df4120();
   input += synapse0x1df4160();
   input += synapse0x1df41a0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1bb6790() {
   double input = input0x1bb6790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1df41e0() {
   double input = -1.37702;
   input += synapse0x1df4520();
   input += synapse0x1df4560();
   input += synapse0x1df45a0();
   input += synapse0x1df45e0();
   input += synapse0x1df4620();
   input += synapse0x1df4660();
   input += synapse0x1df46a0();
   input += synapse0x1df46e0();
   input += synapse0x1df4720();
   input += synapse0x1df4760();
   input += synapse0x1df47a0();
   input += synapse0x1df47e0();
   input += synapse0x1df4820();
   input += synapse0x1df4860();
   input += synapse0x1df48a0();
   input += synapse0x1df48e0();
   input += synapse0x1df4370();
   input += synapse0x1df43b0();
   input += synapse0x1df4a30();
   input += synapse0x1df4a70();
   input += synapse0x1df4ab0();
   input += synapse0x1df4af0();
   input += synapse0x1df4b30();
   input += synapse0x1df4b70();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1df41e0() {
   double input = input0x1df41e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1df4bb0() {
   double input = 1.02294;
   input += synapse0x1df4ef0();
   input += synapse0x1df4f30();
   input += synapse0x1df4f70();
   input += synapse0x1df4fb0();
   input += synapse0x1df4ff0();
   input += synapse0x1df5030();
   input += synapse0x1df5070();
   input += synapse0x1df50b0();
   input += synapse0x1df50f0();
   input += synapse0x1bb6380();
   input += synapse0x1bb63c0();
   input += synapse0x1bb6400();
   input += synapse0x1bb6440();
   input += synapse0x1bb6480();
   input += synapse0x1bb64c0();
   input += synapse0x1bb6500();
   input += synapse0x1df4d40();
   input += synapse0x1df4d80();
   input += synapse0x1bb6650();
   input += synapse0x1bb6690();
   input += synapse0x1bb66d0();
   input += synapse0x1bb6710();
   input += synapse0x1bb6750();
   input += synapse0x1df5940();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1df4bb0() {
   double input = input0x1df4bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1df5980() {
   double input = 0.333787;
   input += synapse0x1df5cc0();
   input += synapse0x1df5d00();
   input += synapse0x1df5d40();
   input += synapse0x1df5d80();
   input += synapse0x1df5dc0();
   input += synapse0x1df5e00();
   input += synapse0x1df5e40();
   input += synapse0x1df5e80();
   input += synapse0x1df5ec0();
   input += synapse0x1df5f00();
   input += synapse0x1df5f40();
   input += synapse0x1df5f80();
   input += synapse0x1df5fc0();
   input += synapse0x1df6000();
   input += synapse0x1df6040();
   input += synapse0x1df6080();
   input += synapse0x1df5b10();
   input += synapse0x1df5b50();
   input += synapse0x1df61d0();
   input += synapse0x1df6210();
   input += synapse0x1df6250();
   input += synapse0x1df6290();
   input += synapse0x1df62d0();
   input += synapse0x1df6310();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1df5980() {
   double input = input0x1df5980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1df6350() {
   double input = 0.209967;
   input += synapse0x1df6690();
   input += synapse0x1df66d0();
   input += synapse0x1df6710();
   input += synapse0x1df6750();
   input += synapse0x1df6790();
   input += synapse0x1df67d0();
   input += synapse0x1df6810();
   input += synapse0x1df6850();
   input += synapse0x1df6890();
   input += synapse0x1df68d0();
   input += synapse0x1df6910();
   input += synapse0x1df6950();
   input += synapse0x1df6990();
   input += synapse0x1df69d0();
   input += synapse0x1df6a10();
   input += synapse0x1df6a50();
   input += synapse0x1df64e0();
   input += synapse0x1df6520();
   input += synapse0x1df6ba0();
   input += synapse0x1df6be0();
   input += synapse0x1df6c20();
   input += synapse0x1df6c60();
   input += synapse0x1df6ca0();
   input += synapse0x1df6ce0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1df6350() {
   double input = input0x1df6350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1df6d20() {
   double input = 0.445866;
   input += synapse0x1df07c0();
   input += synapse0x1df0800();
   input += synapse0x1df0840();
   input += synapse0x1df0880();
   input += synapse0x1df7270();
   input += synapse0x1df72b0();
   input += synapse0x1df72f0();
   input += synapse0x1df7330();
   input += synapse0x1df7370();
   input += synapse0x1df73b0();
   input += synapse0x1df73f0();
   input += synapse0x1df7430();
   input += synapse0x1df7470();
   input += synapse0x1df74b0();
   input += synapse0x1df74f0();
   input += synapse0x1df7530();
   input += synapse0x1df6eb0();
   input += synapse0x1df6ef0();
   input += synapse0x1df7680();
   input += synapse0x1df76c0();
   input += synapse0x1df7700();
   input += synapse0x1df7740();
   input += synapse0x1df7780();
   input += synapse0x1df77c0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1df6d20() {
   double input = input0x1df6d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1df7800() {
   double input = 0.172768;
   input += synapse0x1df7b40();
   input += synapse0x1df7b80();
   input += synapse0x1df7bc0();
   input += synapse0x1df7c00();
   input += synapse0x1df7c40();
   input += synapse0x1df7c80();
   input += synapse0x1df7cc0();
   input += synapse0x1df7d00();
   input += synapse0x1df7d40();
   input += synapse0x1df7d80();
   input += synapse0x1df7dc0();
   input += synapse0x1df7e00();
   input += synapse0x1df7e40();
   input += synapse0x1df7e80();
   input += synapse0x1df7ec0();
   input += synapse0x1df7f00();
   input += synapse0x1df7990();
   input += synapse0x1df79d0();
   input += synapse0x1df8050();
   input += synapse0x1df8090();
   input += synapse0x1df80d0();
   input += synapse0x1df8110();
   input += synapse0x1df8150();
   input += synapse0x1df8190();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1df7800() {
   double input = input0x1df7800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1df81d0() {
   double input = -1.12927;
   input += synapse0x1df8510();
   input += synapse0x1df8550();
   input += synapse0x1df8590();
   input += synapse0x1df85d0();
   input += synapse0x1df8610();
   input += synapse0x1df8650();
   input += synapse0x1df8690();
   input += synapse0x1df86d0();
   input += synapse0x1df8710();
   input += synapse0x1df8750();
   input += synapse0x1df8790();
   input += synapse0x1df87d0();
   input += synapse0x1df8810();
   input += synapse0x1df8850();
   input += synapse0x1df8890();
   input += synapse0x1df88d0();
   input += synapse0x1df8360();
   input += synapse0x1df83a0();
   input += synapse0x1df5130();
   input += synapse0x1df5170();
   input += synapse0x1df51b0();
   input += synapse0x1df51f0();
   input += synapse0x1df5230();
   input += synapse0x1df5270();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1df81d0() {
   double input = input0x1df81d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1df52b0() {
   double input = -1.40806;
   input += synapse0x1df55f0();
   input += synapse0x1df5630();
   input += synapse0x1df5670();
   input += synapse0x1df56b0();
   input += synapse0x1df56f0();
   input += synapse0x1df5730();
   input += synapse0x1df5770();
   input += synapse0x1df57b0();
   input += synapse0x1df57f0();
   input += synapse0x1df5830();
   input += synapse0x1df5870();
   input += synapse0x1df58b0();
   input += synapse0x1df58f0();
   input += synapse0x1df9a30();
   input += synapse0x1df9a70();
   input += synapse0x1df9ab0();
   input += synapse0x1df5440();
   input += synapse0x1df5480();
   input += synapse0x1df9c00();
   input += synapse0x1df9c40();
   input += synapse0x1df9c80();
   input += synapse0x1df9cc0();
   input += synapse0x1df9d00();
   input += synapse0x1df9d40();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1df52b0() {
   double input = input0x1df52b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1df9d80() {
   double input = -0.802613;
   input += synapse0x1dfa0c0();
   input += synapse0x1dfa100();
   input += synapse0x1dfa140();
   input += synapse0x1dfa180();
   input += synapse0x1dfa1c0();
   input += synapse0x1dfa200();
   input += synapse0x1dfa240();
   input += synapse0x1dfa280();
   input += synapse0x1dfa2c0();
   input += synapse0x1dfa300();
   input += synapse0x1dfa340();
   input += synapse0x1dfa380();
   input += synapse0x1dfa3c0();
   input += synapse0x1dfa400();
   input += synapse0x1dfa440();
   input += synapse0x1dfa480();
   input += synapse0x1df9f10();
   input += synapse0x1df9f50();
   input += synapse0x1dfa5d0();
   input += synapse0x1dfa610();
   input += synapse0x1dfa650();
   input += synapse0x1dfa690();
   input += synapse0x1dfa6d0();
   input += synapse0x1dfa710();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1df9d80() {
   double input = input0x1df9d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1dfa750() {
   double input = -0.687551;
   input += synapse0x1dfaa90();
   input += synapse0x1dfaad0();
   input += synapse0x1dfab10();
   input += synapse0x1dfab50();
   input += synapse0x1dfab90();
   input += synapse0x1dfabd0();
   input += synapse0x1dfac10();
   input += synapse0x1dfac50();
   input += synapse0x1dfac90();
   input += synapse0x1dfacd0();
   input += synapse0x1dfad10();
   input += synapse0x1dfad50();
   input += synapse0x1dfad90();
   input += synapse0x1dfadd0();
   input += synapse0x1dfae10();
   input += synapse0x1dfae50();
   input += synapse0x1dfa8e0();
   input += synapse0x1dfa920();
   input += synapse0x1dfafa0();
   input += synapse0x1dfafe0();
   input += synapse0x1dfb020();
   input += synapse0x1dfb060();
   input += synapse0x1dfb0a0();
   input += synapse0x1dfb0e0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1dfa750() {
   double input = input0x1dfa750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1dfb120() {
   double input = -1.0914;
   input += synapse0x1dfb460();
   input += synapse0x1dfb4a0();
   input += synapse0x1dfb4e0();
   input += synapse0x1dfb520();
   input += synapse0x1dfb560();
   input += synapse0x1dfb5a0();
   input += synapse0x1dfb5e0();
   input += synapse0x1dfb620();
   input += synapse0x1dfb660();
   input += synapse0x1dfb6a0();
   input += synapse0x1dfb6e0();
   input += synapse0x1dfb720();
   input += synapse0x1dfb760();
   input += synapse0x1dfb7a0();
   input += synapse0x1dfb7e0();
   input += synapse0x1dfb820();
   input += synapse0x1dfb2b0();
   input += synapse0x1dfb2f0();
   input += synapse0x1dfb970();
   input += synapse0x1dfb9b0();
   input += synapse0x1dfb9f0();
   input += synapse0x1dfba30();
   input += synapse0x1dfba70();
   input += synapse0x1dfbab0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1dfb120() {
   double input = input0x1dfb120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1dfbaf0() {
   double input = -0.0486114;
   input += synapse0x1dfbe30();
   input += synapse0x1ded190();
   input += synapse0x1ded1d0();
   input += synapse0x1ded4d0();
   input += synapse0x1ded510();
   input += synapse0x1ded810();
   input += synapse0x1ded850();
   input += synapse0x1dedb50();
   input += synapse0x1dedb90();
   input += synapse0x1dede90();
   input += synapse0x1deded0();
   input += synapse0x1dee1d0();
   input += synapse0x1dee210();
   input += synapse0x1dee510();
   input += synapse0x1dee550();
   input += synapse0x1dee850();
   input += synapse0x1dee890();
   input += synapse0x1deeb90();
   input += synapse0x1deebd0();
   input += synapse0x1deeed0();
   input += synapse0x1deef10();
   input += synapse0x1def210();
   input += synapse0x1def250();
   input += synapse0x1def550();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1dfbaf0() {
   double input = input0x1dfbaf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1dfd900() {
   double input = -2.80501;
   input += synapse0x1def590();
   input += synapse0x1df0250();
   input += synapse0x1df0290();
   input += synapse0x1dfbc80();
   input += synapse0x1dfbcc0();
   input += synapse0x1df0590();
   input += synapse0x1df05d0();
   input += synapse0x1ba8010();
   input += synapse0x1ba8050();
   input += synapse0x1df0d10();
   input += synapse0x1df0d50();
   input += synapse0x1df1050();
   input += synapse0x1df1090();
   input += synapse0x1df1390();
   input += synapse0x1df13d0();
   input += synapse0x1df16d0();
   input += synapse0x1df1710();
   input += synapse0x1df1a10();
   input += synapse0x1df1a50();
   input += synapse0x1df1d50();
   input += synapse0x1df1d90();
   input += synapse0x1def890();
   input += synapse0x1def8d0();
   input += synapse0x1dfdba0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1dfd900() {
   double input = input0x1dfd900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1dfdbe0() {
   double input = 0.497294;
   input += synapse0x1dfdf20();
   input += synapse0x1dfdf60();
   input += synapse0x1dfdfa0();
   input += synapse0x1dfdfe0();
   input += synapse0x1dfe020();
   input += synapse0x1dfe060();
   input += synapse0x1dfe0a0();
   input += synapse0x1dfe0e0();
   input += synapse0x1dfe120();
   input += synapse0x1dfe160();
   input += synapse0x1dfe1a0();
   input += synapse0x1dfe1e0();
   input += synapse0x1dfe220();
   input += synapse0x1dfe260();
   input += synapse0x1dfe2a0();
   input += synapse0x1dfe2e0();
   input += synapse0x1dfdd70();
   input += synapse0x1dfddb0();
   input += synapse0x1dfe430();
   input += synapse0x1dfe470();
   input += synapse0x1dfe4b0();
   input += synapse0x1dfe4f0();
   input += synapse0x1dfe530();
   input += synapse0x1dfe570();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1dfdbe0() {
   double input = input0x1dfdbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1dfe5b0() {
   double input = 0.9165;
   input += synapse0x1dfe8f0();
   input += synapse0x1dfe930();
   input += synapse0x1dfe970();
   input += synapse0x1dfe9b0();
   input += synapse0x1dfe9f0();
   input += synapse0x1dfea30();
   input += synapse0x1dfea70();
   input += synapse0x1dfeab0();
   input += synapse0x1dfeaf0();
   input += synapse0x1dfeb30();
   input += synapse0x1dfeb70();
   input += synapse0x1dfebb0();
   input += synapse0x1dfebf0();
   input += synapse0x1dfec30();
   input += synapse0x1dfec70();
   input += synapse0x1dfecb0();
   input += synapse0x1dfe740();
   input += synapse0x1dfe780();
   input += synapse0x1dfee00();
   input += synapse0x1dfee40();
   input += synapse0x1dfee80();
   input += synapse0x1dfeec0();
   input += synapse0x1dfef00();
   input += synapse0x1dfef40();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1dfe5b0() {
   double input = input0x1dfe5b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1dfef80() {
   double input = 1.28397;
   input += synapse0x1dff2c0();
   input += synapse0x1dff300();
   input += synapse0x1dff340();
   input += synapse0x1dff380();
   input += synapse0x1dff3c0();
   input += synapse0x1dff400();
   input += synapse0x1dff440();
   input += synapse0x1dff480();
   input += synapse0x1dff4c0();
   input += synapse0x1dff500();
   input += synapse0x1dff540();
   input += synapse0x1dff580();
   input += synapse0x1dff5c0();
   input += synapse0x1dff600();
   input += synapse0x1dff640();
   input += synapse0x1dff680();
   input += synapse0x1dff110();
   input += synapse0x1dff150();
   input += synapse0x1dff7d0();
   input += synapse0x1dff810();
   input += synapse0x1dff850();
   input += synapse0x1dff890();
   input += synapse0x1dff8d0();
   input += synapse0x1dff910();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1dfef80() {
   double input = input0x1dfef80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1dff950() {
   double input = 2.14404;
   input += synapse0x1dffc90();
   input += synapse0x1dffcd0();
   input += synapse0x1dffd10();
   input += synapse0x1dffd50();
   input += synapse0x1dffd90();
   input += synapse0x1dffdd0();
   input += synapse0x1dffe10();
   input += synapse0x1dffe50();
   input += synapse0x1dffe90();
   input += synapse0x1dffed0();
   input += synapse0x1dfff10();
   input += synapse0x1dfff50();
   input += synapse0x1dfff90();
   input += synapse0x1dfffd0();
   input += synapse0x1e00010();
   input += synapse0x1e00050();
   input += synapse0x1dffae0();
   input += synapse0x1dffb20();
   input += synapse0x1e001a0();
   input += synapse0x1e001e0();
   input += synapse0x1e00220();
   input += synapse0x1e00260();
   input += synapse0x1e002a0();
   input += synapse0x1e002e0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1dff950() {
   double input = input0x1dff950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e00320() {
   double input = -1.18284;
   input += synapse0x1e00660();
   input += synapse0x1e006a0();
   input += synapse0x1e006e0();
   input += synapse0x1e00720();
   input += synapse0x1e00760();
   input += synapse0x1e007a0();
   input += synapse0x1e007e0();
   input += synapse0x1e00820();
   input += synapse0x1e00860();
   input += synapse0x1df8a20();
   input += synapse0x1df8a60();
   input += synapse0x1df8aa0();
   input += synapse0x1df8ae0();
   input += synapse0x1df8b20();
   input += synapse0x1df8b60();
   input += synapse0x1df8ba0();
   input += synapse0x1e004b0();
   input += synapse0x1e004f0();
   input += synapse0x1df8cf0();
   input += synapse0x1df8d30();
   input += synapse0x1df8d70();
   input += synapse0x1df8db0();
   input += synapse0x1df8df0();
   input += synapse0x1df8e30();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e00320() {
   double input = input0x1e00320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1df8e70() {
   double input = -0.139858;
   input += synapse0x1df91b0();
   input += synapse0x1df91f0();
   input += synapse0x1df9230();
   input += synapse0x1df9270();
   input += synapse0x1df92b0();
   input += synapse0x1df92f0();
   input += synapse0x1df9330();
   input += synapse0x1df9370();
   input += synapse0x1df93b0();
   input += synapse0x1df93f0();
   input += synapse0x1df9430();
   input += synapse0x1df9470();
   input += synapse0x1df94b0();
   input += synapse0x1df94f0();
   input += synapse0x1df9530();
   input += synapse0x1df9570();
   input += synapse0x1df9000();
   input += synapse0x1df9040();
   input += synapse0x1df96c0();
   input += synapse0x1df9700();
   input += synapse0x1df9740();
   input += synapse0x1df9780();
   input += synapse0x1df97c0();
   input += synapse0x1df9800();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1df8e70() {
   double input = input0x1df8e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1df9840() {
   double input = -0.633967;
   input += synapse0x1df99d0();
   input += synapse0x1e02a60();
   input += synapse0x1e02aa0();
   input += synapse0x1e02ae0();
   input += synapse0x1e02b20();
   input += synapse0x1e02b60();
   input += synapse0x1e02ba0();
   input += synapse0x1e02be0();
   input += synapse0x1e02c20();
   input += synapse0x1e02c60();
   input += synapse0x1e02ca0();
   input += synapse0x1e02ce0();
   input += synapse0x1e02d20();
   input += synapse0x1e02d60();
   input += synapse0x1e02da0();
   input += synapse0x1e02de0();
   input += synapse0x1e028b0();
   input += synapse0x1e028f0();
   input += synapse0x1e02f30();
   input += synapse0x1e02f70();
   input += synapse0x1e02fb0();
   input += synapse0x1e02ff0();
   input += synapse0x1e03030();
   input += synapse0x1e03070();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1df9840() {
   double input = input0x1df9840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e030b0() {
   double input = 0.578181;
   input += synapse0x1e033f0();
   input += synapse0x1e03430();
   input += synapse0x1e03470();
   input += synapse0x1e034b0();
   input += synapse0x1e034f0();
   input += synapse0x1e03530();
   input += synapse0x1e03570();
   input += synapse0x1e035b0();
   input += synapse0x1e035f0();
   input += synapse0x1e03630();
   input += synapse0x1e03670();
   input += synapse0x1e036b0();
   input += synapse0x1e036f0();
   input += synapse0x1e03730();
   input += synapse0x1e03770();
   input += synapse0x1e037b0();
   input += synapse0x1e03240();
   input += synapse0x1e03280();
   input += synapse0x1e03900();
   input += synapse0x1e03940();
   input += synapse0x1e03980();
   input += synapse0x1e039c0();
   input += synapse0x1e03a00();
   input += synapse0x1e03a40();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e030b0() {
   double input = input0x1e030b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e03a80() {
   double input = -0.6621;
   input += synapse0x1e03dc0();
   input += synapse0x1e03e00();
   input += synapse0x1e03e40();
   input += synapse0x1e03e80();
   input += synapse0x1e03ec0();
   input += synapse0x1e03f00();
   input += synapse0x1e03f40();
   input += synapse0x1e03f80();
   input += synapse0x1e03fc0();
   input += synapse0x1e04000();
   input += synapse0x1e04040();
   input += synapse0x1e04080();
   input += synapse0x1e040c0();
   input += synapse0x1e04100();
   input += synapse0x1e04140();
   input += synapse0x1e04180();
   input += synapse0x1e03c10();
   input += synapse0x1e03c50();
   input += synapse0x1e042d0();
   input += synapse0x1e04310();
   input += synapse0x1e04350();
   input += synapse0x1e04390();
   input += synapse0x1e043d0();
   input += synapse0x1e04410();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e03a80() {
   double input = input0x1e03a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e04450() {
   double input = -1.05716;
   input += synapse0x1e04790();
   input += synapse0x1e047d0();
   input += synapse0x1e04810();
   input += synapse0x1e04850();
   input += synapse0x1e04890();
   input += synapse0x1e048d0();
   input += synapse0x1e04910();
   input += synapse0x1e04950();
   input += synapse0x1e04990();
   input += synapse0x1e049d0();
   input += synapse0x1e04a10();
   input += synapse0x1e04a50();
   input += synapse0x1e04a90();
   input += synapse0x1e04ad0();
   input += synapse0x1e04b10();
   input += synapse0x1e04b50();
   input += synapse0x1e045e0();
   input += synapse0x1e04620();
   input += synapse0x1e04ca0();
   input += synapse0x1e04ce0();
   input += synapse0x1e04d20();
   input += synapse0x1e04d60();
   input += synapse0x1e04da0();
   input += synapse0x1e04de0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e04450() {
   double input = input0x1e04450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e04e20() {
   double input = -0.456682;
   input += synapse0x1e05160();
   input += synapse0x1e051a0();
   input += synapse0x1e051e0();
   input += synapse0x1e05220();
   input += synapse0x1e05260();
   input += synapse0x1e052a0();
   input += synapse0x1e052e0();
   input += synapse0x1e05320();
   input += synapse0x1e05360();
   input += synapse0x1e053a0();
   input += synapse0x1e053e0();
   input += synapse0x1e05420();
   input += synapse0x1e05460();
   input += synapse0x1e054a0();
   input += synapse0x1e054e0();
   input += synapse0x1e05520();
   input += synapse0x1e04fb0();
   input += synapse0x1e04ff0();
   input += synapse0x1e05670();
   input += synapse0x1e056b0();
   input += synapse0x1e056f0();
   input += synapse0x1e05730();
   input += synapse0x1e05770();
   input += synapse0x1e057b0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e04e20() {
   double input = input0x1e04e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e057f0() {
   double input = -0.679679;
   input += synapse0x1e05b30();
   input += synapse0x1e05b70();
   input += synapse0x1e05bb0();
   input += synapse0x1e05bf0();
   input += synapse0x1e05c30();
   input += synapse0x1e05c70();
   input += synapse0x1e05cb0();
   input += synapse0x1e05cf0();
   input += synapse0x1e05d30();
   input += synapse0x1e05d70();
   input += synapse0x1e05db0();
   input += synapse0x1e05df0();
   input += synapse0x1e05e30();
   input += synapse0x1e05e70();
   input += synapse0x1e05eb0();
   input += synapse0x1e05ef0();
   input += synapse0x1e05980();
   input += synapse0x1e059c0();
   input += synapse0x1e06040();
   input += synapse0x1e06080();
   input += synapse0x1e060c0();
   input += synapse0x1e06100();
   input += synapse0x1e06140();
   input += synapse0x1e06180();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e057f0() {
   double input = input0x1e057f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e061c0() {
   double input = 0.104682;
   input += synapse0x1e06500();
   input += synapse0x1e06540();
   input += synapse0x1e06580();
   input += synapse0x1e065c0();
   input += synapse0x1e06600();
   input += synapse0x1e06640();
   input += synapse0x1e06680();
   input += synapse0x1e066c0();
   input += synapse0x1e06700();
   input += synapse0x1e06740();
   input += synapse0x1e06780();
   input += synapse0x1e067c0();
   input += synapse0x1e06800();
   input += synapse0x1e06840();
   input += synapse0x1e06880();
   input += synapse0x1e068c0();
   input += synapse0x1e06350();
   input += synapse0x1e06390();
   input += synapse0x1e06a10();
   input += synapse0x1e06a50();
   input += synapse0x1e06a90();
   input += synapse0x1e06ad0();
   input += synapse0x1e06b10();
   input += synapse0x1e06b50();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e061c0() {
   double input = input0x1e061c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e06b90() {
   double input = 1.05189;
   input += synapse0x1e06ed0();
   input += synapse0x1e06f10();
   input += synapse0x1e06f50();
   input += synapse0x1e06f90();
   input += synapse0x1e06fd0();
   input += synapse0x1e07010();
   input += synapse0x1e07050();
   input += synapse0x1e07090();
   input += synapse0x1e070d0();
   input += synapse0x1e07110();
   input += synapse0x1e07150();
   input += synapse0x1e07190();
   input += synapse0x1e071d0();
   input += synapse0x1e07210();
   input += synapse0x1e07250();
   input += synapse0x1e07290();
   input += synapse0x1e06d20();
   input += synapse0x1e06d60();
   input += synapse0x1e073e0();
   input += synapse0x1e07420();
   input += synapse0x1e07460();
   input += synapse0x1e074a0();
   input += synapse0x1e074e0();
   input += synapse0x1e07520();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e06b90() {
   double input = input0x1e06b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e07560() {
   double input = -0.933733;
   input += synapse0x1e078a0();
   input += synapse0x1dfbe70();
   input += synapse0x1dfbeb0();
   input += synapse0x1dfbef0();
   input += synapse0x1dfc140();
   input += synapse0x1dfc180();
   input += synapse0x1dfc1c0();
   input += synapse0x1dfc410();
   input += synapse0x1dfc450();
   input += synapse0x1dfc6a0();
   input += synapse0x1dfc6e0();
   input += synapse0x1dfc720();
   input += synapse0x1dfc970();
   input += synapse0x1dfc9b0();
   input += synapse0x1dfcc00();
   input += synapse0x1dfcc40();
   input += synapse0x1e076f0();
   input += synapse0x1e07730();
   input += synapse0x1dfcd90();
   input += synapse0x1dfd2a0();
   input += synapse0x1dfd2e0();
   input += synapse0x1dfd320();
   input += synapse0x1dfd570();
   input += synapse0x1dfd5b0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e07560() {
   double input = input0x1e07560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1dfd5f0() {
   double input = -0.685658;
   input += synapse0x1dfce60();
   input += synapse0x1dfcea0();
   input += synapse0x1dfcee0();
   input += synapse0x1dfcf20();
   input += synapse0x1dfd8a0();
   input += synapse0x1e09bf0();
   input += synapse0x1e09c30();
   input += synapse0x1e09c70();
   input += synapse0x1e09cb0();
   input += synapse0x1e09cf0();
   input += synapse0x1e09d30();
   input += synapse0x1e09d70();
   input += synapse0x1e09db0();
   input += synapse0x1e09df0();
   input += synapse0x1e09e30();
   input += synapse0x1e09e70();
   input += synapse0x1dfd780();
   input += synapse0x1dfd7c0();
   input += synapse0x1e09fc0();
   input += synapse0x1e0a000();
   input += synapse0x1e0a040();
   input += synapse0x1e0a080();
   input += synapse0x1e0a0c0();
   input += synapse0x1e0a100();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1dfd5f0() {
   double input = input0x1dfd5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e0a140() {
   double input = 1.09732;
   input += synapse0x1e0a480();
   input += synapse0x1e0a4c0();
   input += synapse0x1e0a500();
   input += synapse0x1e0a540();
   input += synapse0x1e0a580();
   input += synapse0x1e0a5c0();
   input += synapse0x1e0a600();
   input += synapse0x1e0a640();
   input += synapse0x1e0a680();
   input += synapse0x1e0a6c0();
   input += synapse0x1e0a700();
   input += synapse0x1e0a740();
   input += synapse0x1e0a780();
   input += synapse0x1e0a7c0();
   input += synapse0x1e0a800();
   input += synapse0x1e0a840();
   input += synapse0x1e0a2d0();
   input += synapse0x1e0a310();
   input += synapse0x1e0a990();
   input += synapse0x1e0a9d0();
   input += synapse0x1e0aa10();
   input += synapse0x1e0aa50();
   input += synapse0x1e0aa90();
   input += synapse0x1e0aad0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e0a140() {
   double input = input0x1e0a140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e0ab10() {
   double input = -0.330378;
   input += synapse0x1e0ae50();
   input += synapse0x1e0ae90();
   input += synapse0x1e0aed0();
   input += synapse0x1e0af10();
   input += synapse0x1e0af50();
   input += synapse0x1e0af90();
   input += synapse0x1e0afd0();
   input += synapse0x1e0b010();
   input += synapse0x1e0b050();
   input += synapse0x1e0b090();
   input += synapse0x1e0b0d0();
   input += synapse0x1e0b110();
   input += synapse0x1e0b150();
   input += synapse0x1e0b190();
   input += synapse0x1e0b1d0();
   input += synapse0x1e0b210();
   input += synapse0x1e0aca0();
   input += synapse0x1e0ace0();
   input += synapse0x1e0b360();
   input += synapse0x1e0b3a0();
   input += synapse0x1e0b3e0();
   input += synapse0x1e0b420();
   input += synapse0x1e0b460();
   input += synapse0x1e0b4a0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e0ab10() {
   double input = input0x1e0ab10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e0b4e0() {
   double input = -0.62568;
   input += synapse0x1e0b820();
   input += synapse0x1e0b860();
   input += synapse0x1e0b8a0();
   input += synapse0x1e0b8e0();
   input += synapse0x1e0b920();
   input += synapse0x1e0b960();
   input += synapse0x1e0b9a0();
   input += synapse0x1e0b9e0();
   input += synapse0x1e0ba20();
   input += synapse0x1e0ba60();
   input += synapse0x1e0baa0();
   input += synapse0x1e0bae0();
   input += synapse0x1e0bb20();
   input += synapse0x1e0bb60();
   input += synapse0x1e0bba0();
   input += synapse0x1e0bbe0();
   input += synapse0x1e0b670();
   input += synapse0x1e0b6b0();
   input += synapse0x1e0bd30();
   input += synapse0x1e0bd70();
   input += synapse0x1e0bdb0();
   input += synapse0x1e0bdf0();
   input += synapse0x1e0be30();
   input += synapse0x1e0be70();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e0b4e0() {
   double input = input0x1e0b4e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e0beb0() {
   double input = -0.449581;
   input += synapse0x1e0c1f0();
   input += synapse0x1e0c230();
   input += synapse0x1e0c270();
   input += synapse0x1e0c2b0();
   input += synapse0x1e0c2f0();
   input += synapse0x1e0c330();
   input += synapse0x1e0c370();
   input += synapse0x1e0c3b0();
   input += synapse0x1e0c3f0();
   input += synapse0x1e0c430();
   input += synapse0x1e0c470();
   input += synapse0x1e0c4b0();
   input += synapse0x1e0c4f0();
   input += synapse0x1e0c530();
   input += synapse0x1e0c570();
   input += synapse0x1e0c5b0();
   input += synapse0x1e0c040();
   input += synapse0x1e0c080();
   input += synapse0x1e0c700();
   input += synapse0x1e0c740();
   input += synapse0x1e0c780();
   input += synapse0x1e0c7c0();
   input += synapse0x1e0c800();
   input += synapse0x1e0c840();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e0beb0() {
   double input = input0x1e0beb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e0c880() {
   double input = 0.274195;
   input += synapse0x1e0cbc0();
   input += synapse0x1e0cc00();
   input += synapse0x1e0cc40();
   input += synapse0x1e0cc80();
   input += synapse0x1e0ccc0();
   input += synapse0x1e0cd00();
   input += synapse0x1e0cd40();
   input += synapse0x1e0cd80();
   input += synapse0x1e0cdc0();
   input += synapse0x1e0ce00();
   input += synapse0x1e0ce40();
   input += synapse0x1e0ce80();
   input += synapse0x1e0cec0();
   input += synapse0x1e0cf00();
   input += synapse0x1e0cf40();
   input += synapse0x1e0cf80();
   input += synapse0x1e0ca10();
   input += synapse0x1e0ca50();
   input += synapse0x1e0d0d0();
   input += synapse0x1e0d110();
   input += synapse0x1e0d150();
   input += synapse0x1e0d190();
   input += synapse0x1e0d1d0();
   input += synapse0x1e0d210();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e0c880() {
   double input = input0x1e0c880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e0d250() {
   double input = -1.05072;
   input += synapse0x1e0d590();
   input += synapse0x1e0d5d0();
   input += synapse0x1e0d610();
   input += synapse0x1e0d650();
   input += synapse0x1e0d690();
   input += synapse0x1e0d6d0();
   input += synapse0x1e0d710();
   input += synapse0x1e0d750();
   input += synapse0x1e0d790();
   input += synapse0x1e0d7d0();
   input += synapse0x1e0d810();
   input += synapse0x1e0d850();
   input += synapse0x1e0d890();
   input += synapse0x1e0d8d0();
   input += synapse0x1e0d910();
   input += synapse0x1e0d950();
   input += synapse0x1e0d3e0();
   input += synapse0x1e0d420();
   input += synapse0x1e0daa0();
   input += synapse0x1e0dae0();
   input += synapse0x1e0db20();
   input += synapse0x1e0db60();
   input += synapse0x1e0dba0();
   input += synapse0x1e0dbe0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e0d250() {
   double input = input0x1e0d250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e0dc20() {
   double input = 1.41961;
   input += synapse0x1e0df60();
   input += synapse0x1e0dfa0();
   input += synapse0x1e0dfe0();
   input += synapse0x1e0e020();
   input += synapse0x1e0e060();
   input += synapse0x1e0e0a0();
   input += synapse0x1e0e0e0();
   input += synapse0x1e0e120();
   input += synapse0x1e0e160();
   input += synapse0x1e0e1a0();
   input += synapse0x1e0e1e0();
   input += synapse0x1e0e220();
   input += synapse0x1e0e260();
   input += synapse0x1e0e2a0();
   input += synapse0x1e0e2e0();
   input += synapse0x1e0e320();
   input += synapse0x1e0ddb0();
   input += synapse0x1e0ddf0();
   input += synapse0x1e0e470();
   input += synapse0x1e0e4b0();
   input += synapse0x1e0e4f0();
   input += synapse0x1e0e530();
   input += synapse0x1e0e570();
   input += synapse0x1e0e5b0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e0dc20() {
   double input = input0x1e0dc20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e0e5f0() {
   double input = 2.77409;
   input += synapse0x1df7060();
   input += synapse0x1df70a0();
   input += synapse0x1df70e0();
   input += synapse0x1df7120();
   input += synapse0x1df7160();
   input += synapse0x1df71a0();
   input += synapse0x1df71e0();
   input += synapse0x1df7220();
   input += synapse0x1e0ed40();
   input += synapse0x1e0ed80();
   input += synapse0x1e0edc0();
   input += synapse0x1e0ee00();
   input += synapse0x1e0ee40();
   input += synapse0x1e0ee80();
   input += synapse0x1e0eec0();
   input += synapse0x1e0ef00();
   input += synapse0x1e0e780();
   input += synapse0x1e0e7c0();
   input += synapse0x1e0f050();
   input += synapse0x1e0f090();
   input += synapse0x1e0f0d0();
   input += synapse0x1e0f110();
   input += synapse0x1e0f150();
   input += synapse0x1e0f190();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e0e5f0() {
   double input = input0x1e0e5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e0f1d0() {
   double input = 0.380704;
   input += synapse0x1e0f510();
   input += synapse0x1e0f550();
   input += synapse0x1e0f590();
   input += synapse0x1e0f5d0();
   input += synapse0x1e0f610();
   input += synapse0x1e0f650();
   input += synapse0x1e0f690();
   input += synapse0x1e0f6d0();
   input += synapse0x1e0f710();
   input += synapse0x1e0f750();
   input += synapse0x1e0f790();
   input += synapse0x1e0f7d0();
   input += synapse0x1e0f810();
   input += synapse0x1e0f850();
   input += synapse0x1e0f890();
   input += synapse0x1e0f8d0();
   input += synapse0x1e0f360();
   input += synapse0x1e0f3a0();
   input += synapse0x1e0fa20();
   input += synapse0x1e0fa60();
   input += synapse0x1e0faa0();
   input += synapse0x1e0fae0();
   input += synapse0x1e0fb20();
   input += synapse0x1e0fb60();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e0f1d0() {
   double input = input0x1e0f1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e0fba0() {
   double input = 0.484387;
   input += synapse0x1e0fee0();
   input += synapse0x1e0ff20();
   input += synapse0x1e0ff60();
   input += synapse0x1e0ffa0();
   input += synapse0x1e0ffe0();
   input += synapse0x1e10020();
   input += synapse0x1e10060();
   input += synapse0x1e100a0();
   input += synapse0x1e100e0();
   input += synapse0x1e10120();
   input += synapse0x1e10160();
   input += synapse0x1e101a0();
   input += synapse0x1e101e0();
   input += synapse0x1e10220();
   input += synapse0x1e10260();
   input += synapse0x1e102a0();
   input += synapse0x1e0fd30();
   input += synapse0x1e0fd70();
   input += synapse0x1e008a0();
   input += synapse0x1e008e0();
   input += synapse0x1e00920();
   input += synapse0x1e00960();
   input += synapse0x1e009a0();
   input += synapse0x1e009e0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e0fba0() {
   double input = input0x1e0fba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e00a20() {
   double input = 1.0029;
   input += synapse0x1e00d60();
   input += synapse0x1e00da0();
   input += synapse0x1e00de0();
   input += synapse0x1e00e20();
   input += synapse0x1e00e60();
   input += synapse0x1e00ea0();
   input += synapse0x1e00ee0();
   input += synapse0x1e00f20();
   input += synapse0x1e00f60();
   input += synapse0x1e00fa0();
   input += synapse0x1e00fe0();
   input += synapse0x1e01020();
   input += synapse0x1e01060();
   input += synapse0x1e010a0();
   input += synapse0x1e010e0();
   input += synapse0x1e01120();
   input += synapse0x1e00bb0();
   input += synapse0x1e00bf0();
   input += synapse0x1e01270();
   input += synapse0x1e012b0();
   input += synapse0x1e012f0();
   input += synapse0x1e01330();
   input += synapse0x1e01370();
   input += synapse0x1e013b0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e00a20() {
   double input = input0x1e00a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e013f0() {
   double input = -1.35162;
   input += synapse0x1e01730();
   input += synapse0x1e01770();
   input += synapse0x1e017b0();
   input += synapse0x1e017f0();
   input += synapse0x1e01830();
   input += synapse0x1e01870();
   input += synapse0x1e018b0();
   input += synapse0x1e018f0();
   input += synapse0x1e01930();
   input += synapse0x1e01970();
   input += synapse0x1e019b0();
   input += synapse0x1e019f0();
   input += synapse0x1e01a30();
   input += synapse0x1e01a70();
   input += synapse0x1e01ab0();
   input += synapse0x1e01af0();
   input += synapse0x1e01580();
   input += synapse0x1e015c0();
   input += synapse0x1e01c40();
   input += synapse0x1e01c80();
   input += synapse0x1e01cc0();
   input += synapse0x1e01d00();
   input += synapse0x1e01d40();
   input += synapse0x1e01d80();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e013f0() {
   double input = input0x1e013f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e01dc0() {
   double input = 1.94732;
   input += synapse0x1e02100();
   input += synapse0x1e02140();
   input += synapse0x1e02180();
   input += synapse0x1e021c0();
   input += synapse0x1e02200();
   input += synapse0x1e02240();
   input += synapse0x1e02280();
   input += synapse0x1e022c0();
   input += synapse0x1e02300();
   input += synapse0x1e02340();
   input += synapse0x1e02380();
   input += synapse0x1e023c0();
   input += synapse0x1e02400();
   input += synapse0x1e02440();
   input += synapse0x1e02480();
   input += synapse0x1e024c0();
   input += synapse0x1e01f50();
   input += synapse0x1e01f90();
   input += synapse0x1e02610();
   input += synapse0x1e02650();
   input += synapse0x1e02690();
   input += synapse0x1e026d0();
   input += synapse0x1e02710();
   input += synapse0x1e02750();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e01dc0() {
   double input = input0x1e01dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e14400() {
   double input = 2.92394;
   input += synapse0x1e14620();
   input += synapse0x1e14660();
   input += synapse0x1e146a0();
   input += synapse0x1e146e0();
   input += synapse0x1e14720();
   input += synapse0x1e14760();
   input += synapse0x1e147a0();
   input += synapse0x1e147e0();
   input += synapse0x1e14820();
   input += synapse0x1e14860();
   input += synapse0x1e148a0();
   input += synapse0x1e148e0();
   input += synapse0x1e14920();
   input += synapse0x1e14960();
   input += synapse0x1e149a0();
   input += synapse0x1e149e0();
   input += synapse0x1e02790();
   input += synapse0x1e027d0();
   input += synapse0x1e14b30();
   input += synapse0x1e14b70();
   input += synapse0x1e14bb0();
   input += synapse0x1e14bf0();
   input += synapse0x1e14c30();
   input += synapse0x1e14c70();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e14400() {
   double input = input0x1e14400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e14cb0() {
   double input = -1.16799;
   input += synapse0x1e14ff0();
   input += synapse0x1e15030();
   input += synapse0x1e15070();
   input += synapse0x1e150b0();
   input += synapse0x1e150f0();
   input += synapse0x1e15130();
   input += synapse0x1e15170();
   input += synapse0x1e151b0();
   input += synapse0x1e151f0();
   input += synapse0x1e15230();
   input += synapse0x1e15270();
   input += synapse0x1e152b0();
   input += synapse0x1e152f0();
   input += synapse0x1e15330();
   input += synapse0x1e15370();
   input += synapse0x1e153b0();
   input += synapse0x1e14e40();
   input += synapse0x1e14e80();
   input += synapse0x1e15500();
   input += synapse0x1e15540();
   input += synapse0x1e15580();
   input += synapse0x1e155c0();
   input += synapse0x1e15600();
   input += synapse0x1e15640();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e14cb0() {
   double input = input0x1e14cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e15680() {
   double input = 0.866858;
   input += synapse0x1e159c0();
   input += synapse0x1e15a00();
   input += synapse0x1e15a40();
   input += synapse0x1e15a80();
   input += synapse0x1e15ac0();
   input += synapse0x1e15b00();
   input += synapse0x1e15b40();
   input += synapse0x1e15b80();
   input += synapse0x1e15bc0();
   input += synapse0x1e15c00();
   input += synapse0x1e15c40();
   input += synapse0x1e15c80();
   input += synapse0x1e15cc0();
   input += synapse0x1e15d00();
   input += synapse0x1e15d40();
   input += synapse0x1e15d80();
   input += synapse0x1e15810();
   input += synapse0x1e15850();
   input += synapse0x1e15ed0();
   input += synapse0x1e15f10();
   input += synapse0x1e15f50();
   input += synapse0x1e15f90();
   input += synapse0x1e15fd0();
   input += synapse0x1e16010();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e15680() {
   double input = input0x1e15680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e16050() {
   double input = -0.127124;
   input += synapse0x1e16390();
   input += synapse0x1e163d0();
   input += synapse0x1e16410();
   input += synapse0x1e16450();
   input += synapse0x1e16490();
   input += synapse0x1e164d0();
   input += synapse0x1e16510();
   input += synapse0x1e16550();
   input += synapse0x1e16590();
   input += synapse0x1e165d0();
   input += synapse0x1e16610();
   input += synapse0x1e16650();
   input += synapse0x1e16690();
   input += synapse0x1e166d0();
   input += synapse0x1e16710();
   input += synapse0x1e16750();
   input += synapse0x1e161e0();
   input += synapse0x1e16220();
   input += synapse0x1e168a0();
   input += synapse0x1e168e0();
   input += synapse0x1e16920();
   input += synapse0x1e16960();
   input += synapse0x1e169a0();
   input += synapse0x1e169e0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e16050() {
   double input = input0x1e16050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e1d250() {
   double input = 0.583353;
   input += synapse0x1df2f80();
   input += synapse0x1df2fc0();
   input += synapse0x1df4490();
   input += synapse0x1df44d0();
   input += synapse0x1df4e60();
   input += synapse0x1df4ea0();
   input += synapse0x1df5c30();
   input += synapse0x1df5c70();
   input += synapse0x1df6600();
   input += synapse0x1df6640();
   input += synapse0x1df6fd0();
   input += synapse0x1df7010();
   input += synapse0x1df7ab0();
   input += synapse0x1df7af0();
   input += synapse0x1df8480();
   input += synapse0x1df84c0();
   input += synapse0x1df5560();
   input += synapse0x1df55a0();
   input += synapse0x1dfa030();
   input += synapse0x1dfa070();
   input += synapse0x1dfaa00();
   input += synapse0x1dfaa40();
   input += synapse0x1dfb3d0();
   input += synapse0x1dfb410();
   input += synapse0x1dfbda0();
   input += synapse0x1dfbde0();
   input += synapse0x1deff10();
   input += synapse0x1deff50();
   input += synapse0x1dfde90();
   input += synapse0x1dfded0();
   input += synapse0x1dfe860();
   input += synapse0x1dfe8a0();
   input += synapse0x1dff230();
   input += synapse0x1dff270();
   input += synapse0x1dffc00();
   input += synapse0x1dffc40();
   input += synapse0x1e005d0();
   input += synapse0x1e00610();
   input += synapse0x1df9120();
   input += synapse0x1df9160();
   input += synapse0x1e029d0();
   input += synapse0x1e02a10();
   input += synapse0x1e03360();
   input += synapse0x1e033a0();
   input += synapse0x1e03d30();
   input += synapse0x1e03d70();
   input += synapse0x1e04700();
   input += synapse0x1e04740();
   input += synapse0x1e050d0();
   input += synapse0x1e05110();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e1d250() {
   double input = input0x1e1d250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e1d5f0() {
   double input = -0.52655;
   input += synapse0x1e07810();
   input += synapse0x1e07850();
   input += synapse0x1dfcdd0();
   input += synapse0x1dfce10();
   input += synapse0x1e0a3f0();
   input += synapse0x1e0a430();
   input += synapse0x1e0adc0();
   input += synapse0x1e0ae00();
   input += synapse0x1e0b790();
   input += synapse0x1e0b7d0();
   input += synapse0x1e0c160();
   input += synapse0x1e0c1a0();
   input += synapse0x1e0cb30();
   input += synapse0x1e0cb70();
   input += synapse0x1e0d500();
   input += synapse0x1e0d540();
   input += synapse0x1e0ded0();
   input += synapse0x1e0df10();
   input += synapse0x1e0e8a0();
   input += synapse0x1e0e8e0();
   input += synapse0x1e0f480();
   input += synapse0x1e0f4c0();
   input += synapse0x1e0fe50();
   input += synapse0x1e0fe90();
   input += synapse0x1e00cd0();
   input += synapse0x1e00d10();
   input += synapse0x1e016a0();
   input += synapse0x1e016e0();
   input += synapse0x1e02070();
   input += synapse0x1e020b0();
   input += synapse0x1e14590();
   input += synapse0x1e145d0();
   input += synapse0x1e14f60();
   input += synapse0x1e14fa0();
   input += synapse0x1e15930();
   input += synapse0x1e15970();
   input += synapse0x1e16300();
   input += synapse0x1e16340();
   input += synapse0x1df21f0();
   input += synapse0x1df2230();
   input += synapse0x1e05aa0();
   input += synapse0x1e05ae0();
   input += synapse0x1e16a20();
   input += synapse0x1e16a60();
   input += synapse0x1e16aa0();
   input += synapse0x1e16ae0();
   input += synapse0x1e1d990();
   input += synapse0x1e1d9d0();
   input += synapse0x1e1da10();
   input += synapse0x1e1da50();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e1d5f0() {
   double input = input0x1e1d5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e1da90() {
   double input = -1.50263;
   input += synapse0x1e1ddd0();
   input += synapse0x1e1de10();
   input += synapse0x1e1de50();
   input += synapse0x1e1de90();
   input += synapse0x1e1ded0();
   input += synapse0x1e1df10();
   input += synapse0x1e1df50();
   input += synapse0x1e1df90();
   input += synapse0x1e1dfd0();
   input += synapse0x1e1e010();
   input += synapse0x1e1e050();
   input += synapse0x1e1e090();
   input += synapse0x1e1e0d0();
   input += synapse0x1e1e110();
   input += synapse0x1e1e150();
   input += synapse0x1e1e190();
   input += synapse0x1e1dc20();
   input += synapse0x1e1dc60();
   input += synapse0x1e1e2e0();
   input += synapse0x1e1e320();
   input += synapse0x1e1e360();
   input += synapse0x1e1e3a0();
   input += synapse0x1e1e3e0();
   input += synapse0x1e1e420();
   input += synapse0x1e1e460();
   input += synapse0x1e1e4a0();
   input += synapse0x1e1e4e0();
   input += synapse0x1e1e520();
   input += synapse0x1e1e560();
   input += synapse0x1e1e5a0();
   input += synapse0x1e1e5e0();
   input += synapse0x1e1e620();
   input += synapse0x1e1e1d0();
   input += synapse0x1e1e210();
   input += synapse0x1e1e250();
   input += synapse0x1e1e290();
   input += synapse0x1e1e870();
   input += synapse0x1e1e8b0();
   input += synapse0x1e1e8f0();
   input += synapse0x1e1e930();
   input += synapse0x1e1e970();
   input += synapse0x1e1e9b0();
   input += synapse0x1e1e9f0();
   input += synapse0x1e1ea30();
   input += synapse0x1e1ea70();
   input += synapse0x1e1eab0();
   input += synapse0x1e1eaf0();
   input += synapse0x1e1eb30();
   input += synapse0x1e1eb70();
   input += synapse0x1e1ebb0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e1da90() {
   double input = input0x1e1da90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e1ebf0() {
   double input = 0.976066;
   input += synapse0x1e1ef30();
   input += synapse0x1e1ef70();
   input += synapse0x1e1efb0();
   input += synapse0x1e1eff0();
   input += synapse0x1e1f030();
   input += synapse0x1e1f070();
   input += synapse0x1e1f0b0();
   input += synapse0x1e1f0f0();
   input += synapse0x1e1f130();
   input += synapse0x1e1f170();
   input += synapse0x1e1f1b0();
   input += synapse0x1e1f1f0();
   input += synapse0x1e1f230();
   input += synapse0x1e1f270();
   input += synapse0x1e1f2b0();
   input += synapse0x1e1f2f0();
   input += synapse0x1e1ed80();
   input += synapse0x1e1edc0();
   input += synapse0x1e1f440();
   input += synapse0x1e1f480();
   input += synapse0x1e1f4c0();
   input += synapse0x1e1f500();
   input += synapse0x1e1f540();
   input += synapse0x1e1f580();
   input += synapse0x1e1f5c0();
   input += synapse0x1e1f600();
   input += synapse0x1e1f640();
   input += synapse0x1e1f680();
   input += synapse0x1e1f6c0();
   input += synapse0x1e1f700();
   input += synapse0x1e1f740();
   input += synapse0x1e1f780();
   input += synapse0x1e1f330();
   input += synapse0x1e1f370();
   input += synapse0x1e1f3b0();
   input += synapse0x1e1f3f0();
   input += synapse0x1e1f9d0();
   input += synapse0x1e1fa10();
   input += synapse0x1e1fa50();
   input += synapse0x1e1fa90();
   input += synapse0x1e1fad0();
   input += synapse0x1e1fb10();
   input += synapse0x1e1fb50();
   input += synapse0x1e1fb90();
   input += synapse0x1e1fbd0();
   input += synapse0x1e1fc10();
   input += synapse0x1e1fc50();
   input += synapse0x1e1fc90();
   input += synapse0x1e1fcd0();
   input += synapse0x1e1fd10();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e1ebf0() {
   double input = input0x1e1ebf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e1fd50() {
   double input = 0.96892;
   input += synapse0x1e20090();
   input += synapse0x1e200d0();
   input += synapse0x1e20110();
   input += synapse0x1e20150();
   input += synapse0x1e20190();
   input += synapse0x1e201d0();
   input += synapse0x1e20210();
   input += synapse0x1e20250();
   input += synapse0x1e20290();
   input += synapse0x1e202d0();
   input += synapse0x1e20310();
   input += synapse0x1e20350();
   input += synapse0x1e20390();
   input += synapse0x1e203d0();
   input += synapse0x1e20410();
   input += synapse0x1e20450();
   input += synapse0x1e1fee0();
   input += synapse0x1e1ff20();
   input += synapse0x1e205a0();
   input += synapse0x1e205e0();
   input += synapse0x1e20620();
   input += synapse0x1e20660();
   input += synapse0x1e206a0();
   input += synapse0x1e206e0();
   input += synapse0x1e20720();
   input += synapse0x1e20760();
   input += synapse0x1e207a0();
   input += synapse0x1e207e0();
   input += synapse0x1e20820();
   input += synapse0x1e20860();
   input += synapse0x1e208a0();
   input += synapse0x1e208e0();
   input += synapse0x1e20490();
   input += synapse0x1e204d0();
   input += synapse0x1e20510();
   input += synapse0x1e20550();
   input += synapse0x1e20b30();
   input += synapse0x1e20b70();
   input += synapse0x1e20bb0();
   input += synapse0x1e20bf0();
   input += synapse0x1e20c30();
   input += synapse0x1e20c70();
   input += synapse0x1e20cb0();
   input += synapse0x1e20cf0();
   input += synapse0x1e20d30();
   input += synapse0x1e20d70();
   input += synapse0x1e20db0();
   input += synapse0x1e20df0();
   input += synapse0x1e20e30();
   input += synapse0x1e20e70();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e1fd50() {
   double input = input0x1e1fd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x1e20eb0() {
   double input = 1.06966;
   input += synapse0x1df1f90();
   input += synapse0x1e210d0();
   input += synapse0x1e21110();
   input += synapse0x1e21150();
   input += synapse0x1e21190();
   return input;
}

double NNfunction_ss_sLcR::neuron0x1e20eb0() {
   double input = input0x1e20eb0();
   return (input * 1)+0;
}

double NNfunction_ss_sLcR::synapse0x1bb6920() {
   return (neuron0x1decf70()*-0.0945386);
}

double NNfunction_ss_sLcR::synapse0x1dece30() {
   return (neuron0x1ded2b0()*0.0793637);
}

double NNfunction_ss_sLcR::synapse0x1dece70() {
   return (neuron0x1ded5f0()*-0.209606);
}

double NNfunction_ss_sLcR::synapse0x1df2280() {
   return (neuron0x1ded930()*0.137321);
}

double NNfunction_ss_sLcR::synapse0x1df22c0() {
   return (neuron0x1dedc70()*-0.517561);
}

double NNfunction_ss_sLcR::synapse0x1df2300() {
   return (neuron0x1dedfb0()*0.428269);
}

double NNfunction_ss_sLcR::synapse0x1df2340() {
   return (neuron0x1dee2f0()*-0.693043);
}

double NNfunction_ss_sLcR::synapse0x1df2380() {
   return (neuron0x1dee630()*-0.285396);
}

double NNfunction_ss_sLcR::synapse0x1df23c0() {
   return (neuron0x1dee970()*-0.196451);
}

double NNfunction_ss_sLcR::synapse0x1df2400() {
   return (neuron0x1deecb0()*-0.248788);
}

double NNfunction_ss_sLcR::synapse0x1df2440() {
   return (neuron0x1deeff0()*-0.21908);
}

double NNfunction_ss_sLcR::synapse0x1df2480() {
   return (neuron0x1def330()*-0.0837086);
}

double NNfunction_ss_sLcR::synapse0x1df24c0() {
   return (neuron0x1def670()*1.8784);
}

double NNfunction_ss_sLcR::synapse0x1df2500() {
   return (neuron0x1def9b0()*0.0209496);
}

double NNfunction_ss_sLcR::synapse0x1df2540() {
   return (neuron0x1defcf0()*0.0366941);
}

double NNfunction_ss_sLcR::synapse0x1df2580() {
   return (neuron0x1df0030()*-0.112835);
}

double NNfunction_ss_sLcR::synapse0x1decda0() {
   return (neuron0x1df0370()*-0.0917223);
}

double NNfunction_ss_sLcR::synapse0x1decde0() {
   return (neuron0x1df08d0()*-0.0766193);
}

double NNfunction_ss_sLcR::synapse0x1ba8130() {
   return (neuron0x1df0af0()*0.0187387);
}

double NNfunction_ss_sLcR::synapse0x1ba8170() {
   return (neuron0x1df0e30()*-0.113424);
}

double NNfunction_ss_sLcR::synapse0x1df27e0() {
   return (neuron0x1df1170()*0.0121969);
}

double NNfunction_ss_sLcR::synapse0x1df2820() {
   return (neuron0x1df14b0()*-0.0729476);
}

double NNfunction_ss_sLcR::synapse0x1df2860() {
   return (neuron0x1df17f0()*-0.157992);
}

double NNfunction_ss_sLcR::synapse0x1df28a0() {
   return (neuron0x1df1b30()*-0.0726484);
}

double NNfunction_ss_sLcR::synapse0x1df2c20() {
   return (neuron0x1decf70()*-0.472003);
}

double NNfunction_ss_sLcR::synapse0x1df2c60() {
   return (neuron0x1ded2b0()*0.0933022);
}

double NNfunction_ss_sLcR::synapse0x1df2ca0() {
   return (neuron0x1ded5f0()*0.026839);
}

double NNfunction_ss_sLcR::synapse0x1df2ce0() {
   return (neuron0x1ded930()*-0.261732);
}

double NNfunction_ss_sLcR::synapse0x1df2d20() {
   return (neuron0x1dedc70()*1.02067);
}

double NNfunction_ss_sLcR::synapse0x1df2d60() {
   return (neuron0x1dedfb0()*0.64537);
}

double NNfunction_ss_sLcR::synapse0x1df2da0() {
   return (neuron0x1dee2f0()*-0.623579);
}

double NNfunction_ss_sLcR::synapse0x1df2de0() {
   return (neuron0x1dee630()*-0.0952265);
}

double NNfunction_ss_sLcR::synapse0x1df2e20() {
   return (neuron0x1dee970()*0.128131);
}

double NNfunction_ss_sLcR::synapse0x1df26d0() {
   return (neuron0x1deecb0()*0.206518);
}

double NNfunction_ss_sLcR::synapse0x1df2710() {
   return (neuron0x1deeff0()*0.0157689);
}

double NNfunction_ss_sLcR::synapse0x1df2750() {
   return (neuron0x1def330()*-0.0415252);
}

double NNfunction_ss_sLcR::synapse0x1df2790() {
   return (neuron0x1def670()*0.258341);
}

double NNfunction_ss_sLcR::synapse0x1df3070() {
   return (neuron0x1def9b0()*-0.0506568);
}

double NNfunction_ss_sLcR::synapse0x1df30b0() {
   return (neuron0x1defcf0()*-0.935784);
}

double NNfunction_ss_sLcR::synapse0x1df30f0() {
   return (neuron0x1df0030()*0.5745);
}

double NNfunction_ss_sLcR::synapse0x1df2a70() {
   return (neuron0x1df0370()*0.159174);
}

double NNfunction_ss_sLcR::synapse0x1df2ab0() {
   return (neuron0x1df08d0()*0.215121);
}

double NNfunction_ss_sLcR::synapse0x1df3240() {
   return (neuron0x1df0af0()*-0.109388);
}

double NNfunction_ss_sLcR::synapse0x1df3280() {
   return (neuron0x1df0e30()*0.0095638);
}

double NNfunction_ss_sLcR::synapse0x1df32c0() {
   return (neuron0x1df1170()*-0.727567);
}

double NNfunction_ss_sLcR::synapse0x1df3300() {
   return (neuron0x1df14b0()*-0.290954);
}

double NNfunction_ss_sLcR::synapse0x1df3340() {
   return (neuron0x1df17f0()*0.410059);
}

double NNfunction_ss_sLcR::synapse0x1df3380() {
   return (neuron0x1df1b30()*0.2014);
}

double NNfunction_ss_sLcR::synapse0x1df3700() {
   return (neuron0x1decf70()*0.0161563);
}

double NNfunction_ss_sLcR::synapse0x1df3740() {
   return (neuron0x1ded2b0()*-0.00857409);
}

double NNfunction_ss_sLcR::synapse0x1df3780() {
   return (neuron0x1ded5f0()*0.0923615);
}

double NNfunction_ss_sLcR::synapse0x1df37c0() {
   return (neuron0x1ded930()*0.0712282);
}

double NNfunction_ss_sLcR::synapse0x1df3800() {
   return (neuron0x1dedc70()*0.00843208);
}

double NNfunction_ss_sLcR::synapse0x1df3840() {
   return (neuron0x1dedfb0()*-0.0515248);
}

double NNfunction_ss_sLcR::synapse0x1df3880() {
   return (neuron0x1dee2f0()*-0.0157997);
}

double NNfunction_ss_sLcR::synapse0x1df38c0() {
   return (neuron0x1dee630()*-0.0533372);
}

double NNfunction_ss_sLcR::synapse0x1df3900() {
   return (neuron0x1dee970()*-0.0128941);
}

double NNfunction_ss_sLcR::synapse0x1df3940() {
   return (neuron0x1deecb0()*-0.0254034);
}

double NNfunction_ss_sLcR::synapse0x1df3980() {
   return (neuron0x1deeff0()*-0.00569947);
}

double NNfunction_ss_sLcR::synapse0x1df39c0() {
   return (neuron0x1def330()*-0.563274);
}

double NNfunction_ss_sLcR::synapse0x1df3a00() {
   return (neuron0x1def670()*-0.0801977);
}

double NNfunction_ss_sLcR::synapse0x1df3a40() {
   return (neuron0x1def9b0()*0.0875111);
}

double NNfunction_ss_sLcR::synapse0x1df3a80() {
   return (neuron0x1defcf0()*-0.157347);
}

double NNfunction_ss_sLcR::synapse0x1df3ac0() {
   return (neuron0x1df0030()*-0.055211);
}

double NNfunction_ss_sLcR::synapse0x1df3550() {
   return (neuron0x1df0370()*0.0761305);
}

double NNfunction_ss_sLcR::synapse0x1df3590() {
   return (neuron0x1df08d0()*-0.242732);
}

double NNfunction_ss_sLcR::synapse0x1bb6030() {
   return (neuron0x1df0af0()*-0.194083);
}

double NNfunction_ss_sLcR::synapse0x1bb6070() {
   return (neuron0x1df0e30()*-0.0293997);
}

double NNfunction_ss_sLcR::synapse0x1ddc000() {
   return (neuron0x1df1170()*-0.0313962);
}

double NNfunction_ss_sLcR::synapse0x1ddc040() {
   return (neuron0x1df14b0()*-0.0187208);
}

double NNfunction_ss_sLcR::synapse0x1ddc080() {
   return (neuron0x1df17f0()*-0.0084528);
}

double NNfunction_ss_sLcR::synapse0x1deceb0() {
   return (neuron0x1df1b30()*-0.00476471);
}

double NNfunction_ss_sLcR::synapse0x1df3010() {
   return (neuron0x1decf70()*-0.304963);
}

double NNfunction_ss_sLcR::synapse0x1decef0() {
   return (neuron0x1ded2b0()*0.975255);
}

double NNfunction_ss_sLcR::synapse0x1decf30() {
   return (neuron0x1ded5f0()*0.0580088);
}

double NNfunction_ss_sLcR::synapse0x1df3c10() {
   return (neuron0x1ded930()*-0.340123);
}

double NNfunction_ss_sLcR::synapse0x1df3c50() {
   return (neuron0x1dedc70()*-1.03218);
}

double NNfunction_ss_sLcR::synapse0x1df3c90() {
   return (neuron0x1dedfb0()*0.390505);
}

double NNfunction_ss_sLcR::synapse0x1df3cd0() {
   return (neuron0x1dee2f0()*-0.672383);
}

double NNfunction_ss_sLcR::synapse0x1df3d10() {
   return (neuron0x1dee630()*-0.396787);
}

double NNfunction_ss_sLcR::synapse0x1df3d50() {
   return (neuron0x1dee970()*-0.348921);
}

double NNfunction_ss_sLcR::synapse0x1df3d90() {
   return (neuron0x1deecb0()*0.0923237);
}

double NNfunction_ss_sLcR::synapse0x1df3dd0() {
   return (neuron0x1deeff0()*0.055503);
}

double NNfunction_ss_sLcR::synapse0x1df3e10() {
   return (neuron0x1def330()*0.155091);
}

double NNfunction_ss_sLcR::synapse0x1df3e50() {
   return (neuron0x1def670()*-0.829453);
}

double NNfunction_ss_sLcR::synapse0x1df3e90() {
   return (neuron0x1def9b0()*-0.0728187);
}

double NNfunction_ss_sLcR::synapse0x1df3ed0() {
   return (neuron0x1defcf0()*-0.195515);
}

double NNfunction_ss_sLcR::synapse0x1df3f10() {
   return (neuron0x1df0030()*0.37046);
}

double NNfunction_ss_sLcR::synapse0x1df2e60() {
   return (neuron0x1df0370()*0.701805);
}

double NNfunction_ss_sLcR::synapse0x1df2ea0() {
   return (neuron0x1df08d0()*-0.157577);
}

double NNfunction_ss_sLcR::synapse0x1df4060() {
   return (neuron0x1df0af0()*0.0166166);
}

double NNfunction_ss_sLcR::synapse0x1df40a0() {
   return (neuron0x1df0e30()*0.613274);
}

double NNfunction_ss_sLcR::synapse0x1df40e0() {
   return (neuron0x1df1170()*0.255854);
}

double NNfunction_ss_sLcR::synapse0x1df4120() {
   return (neuron0x1df14b0()*-0.426812);
}

double NNfunction_ss_sLcR::synapse0x1df4160() {
   return (neuron0x1df17f0()*0.591483);
}

double NNfunction_ss_sLcR::synapse0x1df41a0() {
   return (neuron0x1df1b30()*-0.1457);
}

double NNfunction_ss_sLcR::synapse0x1df4520() {
   return (neuron0x1decf70()*0.0192352);
}

double NNfunction_ss_sLcR::synapse0x1df4560() {
   return (neuron0x1ded2b0()*-0.0582381);
}

double NNfunction_ss_sLcR::synapse0x1df45a0() {
   return (neuron0x1ded5f0()*0.0522728);
}

double NNfunction_ss_sLcR::synapse0x1df45e0() {
   return (neuron0x1ded930()*1.20364);
}

double NNfunction_ss_sLcR::synapse0x1df4620() {
   return (neuron0x1dedc70()*-0.129608);
}

double NNfunction_ss_sLcR::synapse0x1df4660() {
   return (neuron0x1dedfb0()*-0.0334103);
}

double NNfunction_ss_sLcR::synapse0x1df46a0() {
   return (neuron0x1dee2f0()*0.0465269);
}

double NNfunction_ss_sLcR::synapse0x1df46e0() {
   return (neuron0x1dee630()*0.289737);
}

double NNfunction_ss_sLcR::synapse0x1df4720() {
   return (neuron0x1dee970()*0.246303);
}

double NNfunction_ss_sLcR::synapse0x1df4760() {
   return (neuron0x1deecb0()*-0.08805);
}

double NNfunction_ss_sLcR::synapse0x1df47a0() {
   return (neuron0x1deeff0()*0.17795);
}

double NNfunction_ss_sLcR::synapse0x1df47e0() {
   return (neuron0x1def330()*-0.0358783);
}

double NNfunction_ss_sLcR::synapse0x1df4820() {
   return (neuron0x1def670()*-0.895786);
}

double NNfunction_ss_sLcR::synapse0x1df4860() {
   return (neuron0x1def9b0()*0.0415393);
}

double NNfunction_ss_sLcR::synapse0x1df48a0() {
   return (neuron0x1defcf0()*-0.0825149);
}

double NNfunction_ss_sLcR::synapse0x1df48e0() {
   return (neuron0x1df0030()*1.31306);
}

double NNfunction_ss_sLcR::synapse0x1df4370() {
   return (neuron0x1df0370()*-0.0493183);
}

double NNfunction_ss_sLcR::synapse0x1df43b0() {
   return (neuron0x1df08d0()*0.0460193);
}

double NNfunction_ss_sLcR::synapse0x1df4a30() {
   return (neuron0x1df0af0()*0.0267518);
}

double NNfunction_ss_sLcR::synapse0x1df4a70() {
   return (neuron0x1df0e30()*0.154386);
}

double NNfunction_ss_sLcR::synapse0x1df4ab0() {
   return (neuron0x1df1170()*0.0364532);
}

double NNfunction_ss_sLcR::synapse0x1df4af0() {
   return (neuron0x1df14b0()*-0.156808);
}

double NNfunction_ss_sLcR::synapse0x1df4b30() {
   return (neuron0x1df17f0()*-0.0324893);
}

double NNfunction_ss_sLcR::synapse0x1df4b70() {
   return (neuron0x1df1b30()*0.127156);
}

double NNfunction_ss_sLcR::synapse0x1df4ef0() {
   return (neuron0x1decf70()*0.272651);
}

double NNfunction_ss_sLcR::synapse0x1df4f30() {
   return (neuron0x1ded2b0()*-0.450177);
}

double NNfunction_ss_sLcR::synapse0x1df4f70() {
   return (neuron0x1ded5f0()*0.436785);
}

double NNfunction_ss_sLcR::synapse0x1df4fb0() {
   return (neuron0x1ded930()*-0.184036);
}

double NNfunction_ss_sLcR::synapse0x1df4ff0() {
   return (neuron0x1dedc70()*-0.897178);
}

double NNfunction_ss_sLcR::synapse0x1df5030() {
   return (neuron0x1dedfb0()*0.329398);
}

double NNfunction_ss_sLcR::synapse0x1df5070() {
   return (neuron0x1dee2f0()*1.04193);
}

double NNfunction_ss_sLcR::synapse0x1df50b0() {
   return (neuron0x1dee630()*-0.650522);
}

double NNfunction_ss_sLcR::synapse0x1df50f0() {
   return (neuron0x1dee970()*0.534006);
}

double NNfunction_ss_sLcR::synapse0x1bb6380() {
   return (neuron0x1deecb0()*1.13938);
}

double NNfunction_ss_sLcR::synapse0x1bb63c0() {
   return (neuron0x1deeff0()*0.193908);
}

double NNfunction_ss_sLcR::synapse0x1bb6400() {
   return (neuron0x1def330()*-0.18648);
}

double NNfunction_ss_sLcR::synapse0x1bb6440() {
   return (neuron0x1def670()*-0.43223);
}

double NNfunction_ss_sLcR::synapse0x1bb6480() {
   return (neuron0x1def9b0()*-0.358881);
}

double NNfunction_ss_sLcR::synapse0x1bb64c0() {
   return (neuron0x1defcf0()*0.453678);
}

double NNfunction_ss_sLcR::synapse0x1bb6500() {
   return (neuron0x1df0030()*0.195296);
}

double NNfunction_ss_sLcR::synapse0x1df4d40() {
   return (neuron0x1df0370()*0.00189553);
}

double NNfunction_ss_sLcR::synapse0x1df4d80() {
   return (neuron0x1df08d0()*-0.261001);
}

double NNfunction_ss_sLcR::synapse0x1bb6650() {
   return (neuron0x1df0af0()*-0.158998);
}

double NNfunction_ss_sLcR::synapse0x1bb6690() {
   return (neuron0x1df0e30()*0.936882);
}

double NNfunction_ss_sLcR::synapse0x1bb66d0() {
   return (neuron0x1df1170()*0.974087);
}

double NNfunction_ss_sLcR::synapse0x1bb6710() {
   return (neuron0x1df14b0()*-0.155991);
}

double NNfunction_ss_sLcR::synapse0x1bb6750() {
   return (neuron0x1df17f0()*-0.0475794);
}

double NNfunction_ss_sLcR::synapse0x1df5940() {
   return (neuron0x1df1b30()*-0.0441285);
}

double NNfunction_ss_sLcR::synapse0x1df5cc0() {
   return (neuron0x1decf70()*0.488746);
}

double NNfunction_ss_sLcR::synapse0x1df5d00() {
   return (neuron0x1ded2b0()*0.270826);
}

double NNfunction_ss_sLcR::synapse0x1df5d40() {
   return (neuron0x1ded5f0()*-0.508306);
}

double NNfunction_ss_sLcR::synapse0x1df5d80() {
   return (neuron0x1ded930()*0.0460716);
}

double NNfunction_ss_sLcR::synapse0x1df5dc0() {
   return (neuron0x1dedc70()*-0.351953);
}

double NNfunction_ss_sLcR::synapse0x1df5e00() {
   return (neuron0x1dedfb0()*-0.201528);
}

double NNfunction_ss_sLcR::synapse0x1df5e40() {
   return (neuron0x1dee2f0()*0.0153073);
}

double NNfunction_ss_sLcR::synapse0x1df5e80() {
   return (neuron0x1dee630()*0.133361);
}

double NNfunction_ss_sLcR::synapse0x1df5ec0() {
   return (neuron0x1dee970()*-0.328737);
}

double NNfunction_ss_sLcR::synapse0x1df5f00() {
   return (neuron0x1deecb0()*0.456763);
}

double NNfunction_ss_sLcR::synapse0x1df5f40() {
   return (neuron0x1deeff0()*-1.09765);
}

double NNfunction_ss_sLcR::synapse0x1df5f80() {
   return (neuron0x1def330()*0.0253469);
}

double NNfunction_ss_sLcR::synapse0x1df5fc0() {
   return (neuron0x1def670()*0.262891);
}

double NNfunction_ss_sLcR::synapse0x1df6000() {
   return (neuron0x1def9b0()*-0.856369);
}

double NNfunction_ss_sLcR::synapse0x1df6040() {
   return (neuron0x1defcf0()*-0.026324);
}

double NNfunction_ss_sLcR::synapse0x1df6080() {
   return (neuron0x1df0030()*-0.127447);
}

double NNfunction_ss_sLcR::synapse0x1df5b10() {
   return (neuron0x1df0370()*0.359523);
}

double NNfunction_ss_sLcR::synapse0x1df5b50() {
   return (neuron0x1df08d0()*-0.732147);
}

double NNfunction_ss_sLcR::synapse0x1df61d0() {
   return (neuron0x1df0af0()*0.375887);
}

double NNfunction_ss_sLcR::synapse0x1df6210() {
   return (neuron0x1df0e30()*-0.489449);
}

double NNfunction_ss_sLcR::synapse0x1df6250() {
   return (neuron0x1df1170()*-1.04046);
}

double NNfunction_ss_sLcR::synapse0x1df6290() {
   return (neuron0x1df14b0()*0.569194);
}

double NNfunction_ss_sLcR::synapse0x1df62d0() {
   return (neuron0x1df17f0()*0.235009);
}

double NNfunction_ss_sLcR::synapse0x1df6310() {
   return (neuron0x1df1b30()*-0.583696);
}

double NNfunction_ss_sLcR::synapse0x1df6690() {
   return (neuron0x1decf70()*-0.206408);
}

double NNfunction_ss_sLcR::synapse0x1df66d0() {
   return (neuron0x1ded2b0()*-0.450066);
}

double NNfunction_ss_sLcR::synapse0x1df6710() {
   return (neuron0x1ded5f0()*-0.131757);
}

double NNfunction_ss_sLcR::synapse0x1df6750() {
   return (neuron0x1ded930()*0.315711);
}

double NNfunction_ss_sLcR::synapse0x1df6790() {
   return (neuron0x1dedc70()*0.347741);
}

double NNfunction_ss_sLcR::synapse0x1df67d0() {
   return (neuron0x1dedfb0()*-1.08365);
}

double NNfunction_ss_sLcR::synapse0x1df6810() {
   return (neuron0x1dee2f0()*-0.611157);
}

double NNfunction_ss_sLcR::synapse0x1df6850() {
   return (neuron0x1dee630()*0.1677);
}

double NNfunction_ss_sLcR::synapse0x1df6890() {
   return (neuron0x1dee970()*0.0963899);
}

double NNfunction_ss_sLcR::synapse0x1df68d0() {
   return (neuron0x1deecb0()*1.10869);
}

double NNfunction_ss_sLcR::synapse0x1df6910() {
   return (neuron0x1deeff0()*0.0200136);
}

double NNfunction_ss_sLcR::synapse0x1df6950() {
   return (neuron0x1def330()*-0.331034);
}

double NNfunction_ss_sLcR::synapse0x1df6990() {
   return (neuron0x1def670()*-0.413298);
}

double NNfunction_ss_sLcR::synapse0x1df69d0() {
   return (neuron0x1def9b0()*-0.30329);
}

double NNfunction_ss_sLcR::synapse0x1df6a10() {
   return (neuron0x1defcf0()*-0.490073);
}

double NNfunction_ss_sLcR::synapse0x1df6a50() {
   return (neuron0x1df0030()*0.431518);
}

double NNfunction_ss_sLcR::synapse0x1df64e0() {
   return (neuron0x1df0370()*0.147017);
}

double NNfunction_ss_sLcR::synapse0x1df6520() {
   return (neuron0x1df08d0()*0.143093);
}

double NNfunction_ss_sLcR::synapse0x1df6ba0() {
   return (neuron0x1df0af0()*-0.128593);
}

double NNfunction_ss_sLcR::synapse0x1df6be0() {
   return (neuron0x1df0e30()*-0.133887);
}

double NNfunction_ss_sLcR::synapse0x1df6c20() {
   return (neuron0x1df1170()*0.529316);
}

double NNfunction_ss_sLcR::synapse0x1df6c60() {
   return (neuron0x1df14b0()*-0.0123479);
}

double NNfunction_ss_sLcR::synapse0x1df6ca0() {
   return (neuron0x1df17f0()*0.440249);
}

double NNfunction_ss_sLcR::synapse0x1df6ce0() {
   return (neuron0x1df1b30()*-0.329984);
}

double NNfunction_ss_sLcR::synapse0x1df07c0() {
   return (neuron0x1decf70()*-0.0391495);
}

double NNfunction_ss_sLcR::synapse0x1df0800() {
   return (neuron0x1ded2b0()*-0.148914);
}

double NNfunction_ss_sLcR::synapse0x1df0840() {
   return (neuron0x1ded5f0()*-0.153336);
}

double NNfunction_ss_sLcR::synapse0x1df0880() {
   return (neuron0x1ded930()*-0.202155);
}

double NNfunction_ss_sLcR::synapse0x1df7270() {
   return (neuron0x1dedc70()*0.00723178);
}

double NNfunction_ss_sLcR::synapse0x1df72b0() {
   return (neuron0x1dedfb0()*0.115101);
}

double NNfunction_ss_sLcR::synapse0x1df72f0() {
   return (neuron0x1dee2f0()*-0.00205689);
}

double NNfunction_ss_sLcR::synapse0x1df7330() {
   return (neuron0x1dee630()*0.044593);
}

double NNfunction_ss_sLcR::synapse0x1df7370() {
   return (neuron0x1dee970()*0.0698956);
}

double NNfunction_ss_sLcR::synapse0x1df73b0() {
   return (neuron0x1deecb0()*-0.0264639);
}

double NNfunction_ss_sLcR::synapse0x1df73f0() {
   return (neuron0x1deeff0()*-0.0127079);
}

double NNfunction_ss_sLcR::synapse0x1df7430() {
   return (neuron0x1def330()*-0.114668);
}

double NNfunction_ss_sLcR::synapse0x1df7470() {
   return (neuron0x1def670()*-0.00559486);
}

double NNfunction_ss_sLcR::synapse0x1df74b0() {
   return (neuron0x1def9b0()*0.0194352);
}

double NNfunction_ss_sLcR::synapse0x1df74f0() {
   return (neuron0x1defcf0()*0.0262789);
}

double NNfunction_ss_sLcR::synapse0x1df7530() {
   return (neuron0x1df0030()*-0.0739329);
}

double NNfunction_ss_sLcR::synapse0x1df6eb0() {
   return (neuron0x1df0370()*0.0559008);
}

double NNfunction_ss_sLcR::synapse0x1df6ef0() {
   return (neuron0x1df08d0()*-0.0293379);
}

double NNfunction_ss_sLcR::synapse0x1df7680() {
   return (neuron0x1df0af0()*-0.00987842);
}

double NNfunction_ss_sLcR::synapse0x1df76c0() {
   return (neuron0x1df0e30()*0.108719);
}

double NNfunction_ss_sLcR::synapse0x1df7700() {
   return (neuron0x1df1170()*0.0273065);
}

double NNfunction_ss_sLcR::synapse0x1df7740() {
   return (neuron0x1df14b0()*-0.00696344);
}

double NNfunction_ss_sLcR::synapse0x1df7780() {
   return (neuron0x1df17f0()*-0.0598736);
}

double NNfunction_ss_sLcR::synapse0x1df77c0() {
   return (neuron0x1df1b30()*-0.0761515);
}

double NNfunction_ss_sLcR::synapse0x1df7b40() {
   return (neuron0x1decf70()*0.0160923);
}

double NNfunction_ss_sLcR::synapse0x1df7b80() {
   return (neuron0x1ded2b0()*-0.099544);
}

double NNfunction_ss_sLcR::synapse0x1df7bc0() {
   return (neuron0x1ded5f0()*-0.512183);
}

double NNfunction_ss_sLcR::synapse0x1df7c00() {
   return (neuron0x1ded930()*-0.018534);
}

double NNfunction_ss_sLcR::synapse0x1df7c40() {
   return (neuron0x1dedc70()*0.734135);
}

double NNfunction_ss_sLcR::synapse0x1df7c80() {
   return (neuron0x1dedfb0()*0.177299);
}

double NNfunction_ss_sLcR::synapse0x1df7cc0() {
   return (neuron0x1dee2f0()*0.394098);
}

double NNfunction_ss_sLcR::synapse0x1df7d00() {
   return (neuron0x1dee630()*0.782773);
}

double NNfunction_ss_sLcR::synapse0x1df7d40() {
   return (neuron0x1dee970()*-0.298216);
}

double NNfunction_ss_sLcR::synapse0x1df7d80() {
   return (neuron0x1deecb0()*0.124655);
}

double NNfunction_ss_sLcR::synapse0x1df7dc0() {
   return (neuron0x1deeff0()*0.732254);
}

double NNfunction_ss_sLcR::synapse0x1df7e00() {
   return (neuron0x1def330()*-0.848642);
}

double NNfunction_ss_sLcR::synapse0x1df7e40() {
   return (neuron0x1def670()*0.895722);
}

double NNfunction_ss_sLcR::synapse0x1df7e80() {
   return (neuron0x1def9b0()*-0.666942);
}

double NNfunction_ss_sLcR::synapse0x1df7ec0() {
   return (neuron0x1defcf0()*-0.322193);
}

double NNfunction_ss_sLcR::synapse0x1df7f00() {
   return (neuron0x1df0030()*0.962701);
}

double NNfunction_ss_sLcR::synapse0x1df7990() {
   return (neuron0x1df0370()*-0.276161);
}

double NNfunction_ss_sLcR::synapse0x1df79d0() {
   return (neuron0x1df08d0()*-0.415889);
}

double NNfunction_ss_sLcR::synapse0x1df8050() {
   return (neuron0x1df0af0()*-0.0067727);
}

double NNfunction_ss_sLcR::synapse0x1df8090() {
   return (neuron0x1df0e30()*-1.13915);
}

double NNfunction_ss_sLcR::synapse0x1df80d0() {
   return (neuron0x1df1170()*0.729768);
}

double NNfunction_ss_sLcR::synapse0x1df8110() {
   return (neuron0x1df14b0()*0.539725);
}

double NNfunction_ss_sLcR::synapse0x1df8150() {
   return (neuron0x1df17f0()*-0.238708);
}

double NNfunction_ss_sLcR::synapse0x1df8190() {
   return (neuron0x1df1b30()*0.17862);
}

double NNfunction_ss_sLcR::synapse0x1df8510() {
   return (neuron0x1decf70()*-0.139663);
}

double NNfunction_ss_sLcR::synapse0x1df8550() {
   return (neuron0x1ded2b0()*0.13591);
}

double NNfunction_ss_sLcR::synapse0x1df8590() {
   return (neuron0x1ded5f0()*0.537533);
}

double NNfunction_ss_sLcR::synapse0x1df85d0() {
   return (neuron0x1ded930()*-0.399297);
}

double NNfunction_ss_sLcR::synapse0x1df8610() {
   return (neuron0x1dedc70()*0.263932);
}

double NNfunction_ss_sLcR::synapse0x1df8650() {
   return (neuron0x1dedfb0()*0.120098);
}

double NNfunction_ss_sLcR::synapse0x1df8690() {
   return (neuron0x1dee2f0()*-0.376567);
}

double NNfunction_ss_sLcR::synapse0x1df86d0() {
   return (neuron0x1dee630()*-0.168504);
}

double NNfunction_ss_sLcR::synapse0x1df8710() {
   return (neuron0x1dee970()*0.44068);
}

double NNfunction_ss_sLcR::synapse0x1df8750() {
   return (neuron0x1deecb0()*0.0396702);
}

double NNfunction_ss_sLcR::synapse0x1df8790() {
   return (neuron0x1deeff0()*-0.242266);
}

double NNfunction_ss_sLcR::synapse0x1df87d0() {
   return (neuron0x1def330()*0.0621594);
}

double NNfunction_ss_sLcR::synapse0x1df8810() {
   return (neuron0x1def670()*0.485375);
}

double NNfunction_ss_sLcR::synapse0x1df8850() {
   return (neuron0x1def9b0()*-0.263097);
}

double NNfunction_ss_sLcR::synapse0x1df8890() {
   return (neuron0x1defcf0()*-0.238038);
}

double NNfunction_ss_sLcR::synapse0x1df88d0() {
   return (neuron0x1df0030()*-0.256048);
}

double NNfunction_ss_sLcR::synapse0x1df8360() {
   return (neuron0x1df0370()*-0.279253);
}

double NNfunction_ss_sLcR::synapse0x1df83a0() {
   return (neuron0x1df08d0()*0.0566597);
}

double NNfunction_ss_sLcR::synapse0x1df5130() {
   return (neuron0x1df0af0()*0.0633717);
}

double NNfunction_ss_sLcR::synapse0x1df5170() {
   return (neuron0x1df0e30()*0.352868);
}

double NNfunction_ss_sLcR::synapse0x1df51b0() {
   return (neuron0x1df1170()*0.0332838);
}

double NNfunction_ss_sLcR::synapse0x1df51f0() {
   return (neuron0x1df14b0()*-0.0733023);
}

double NNfunction_ss_sLcR::synapse0x1df5230() {
   return (neuron0x1df17f0()*0.199004);
}

double NNfunction_ss_sLcR::synapse0x1df5270() {
   return (neuron0x1df1b30()*0.0579152);
}

double NNfunction_ss_sLcR::synapse0x1df55f0() {
   return (neuron0x1decf70()*0.0129224);
}

double NNfunction_ss_sLcR::synapse0x1df5630() {
   return (neuron0x1ded2b0()*-0.00508664);
}

double NNfunction_ss_sLcR::synapse0x1df5670() {
   return (neuron0x1ded5f0()*-0.00865613);
}

double NNfunction_ss_sLcR::synapse0x1df56b0() {
   return (neuron0x1ded930()*-2.52935);
}

double NNfunction_ss_sLcR::synapse0x1df56f0() {
   return (neuron0x1dedc70()*0.00390899);
}

double NNfunction_ss_sLcR::synapse0x1df5730() {
   return (neuron0x1dedfb0()*-0.0160235);
}

double NNfunction_ss_sLcR::synapse0x1df5770() {
   return (neuron0x1dee2f0()*-0.00744437);
}

double NNfunction_ss_sLcR::synapse0x1df57b0() {
   return (neuron0x1dee630()*-0.0204729);
}

double NNfunction_ss_sLcR::synapse0x1df57f0() {
   return (neuron0x1dee970()*-0.00869392);
}

double NNfunction_ss_sLcR::synapse0x1df5830() {
   return (neuron0x1deecb0()*0.00107206);
}

double NNfunction_ss_sLcR::synapse0x1df5870() {
   return (neuron0x1deeff0()*-0.0176493);
}

double NNfunction_ss_sLcR::synapse0x1df58b0() {
   return (neuron0x1def330()*-0.0271182);
}

double NNfunction_ss_sLcR::synapse0x1df58f0() {
   return (neuron0x1def670()*0.306427);
}

double NNfunction_ss_sLcR::synapse0x1df9a30() {
   return (neuron0x1def9b0()*-0.00113784);
}

double NNfunction_ss_sLcR::synapse0x1df9a70() {
   return (neuron0x1defcf0()*-0.0270212);
}

double NNfunction_ss_sLcR::synapse0x1df9ab0() {
   return (neuron0x1df0030()*0.302145);
}

double NNfunction_ss_sLcR::synapse0x1df5440() {
   return (neuron0x1df0370()*7.84492e-05);
}

double NNfunction_ss_sLcR::synapse0x1df5480() {
   return (neuron0x1df08d0()*-0.0052382);
}

double NNfunction_ss_sLcR::synapse0x1df9c00() {
   return (neuron0x1df0af0()*-0.0248963);
}

double NNfunction_ss_sLcR::synapse0x1df9c40() {
   return (neuron0x1df0e30()*0.00803281);
}

double NNfunction_ss_sLcR::synapse0x1df9c80() {
   return (neuron0x1df1170()*0.00680421);
}

double NNfunction_ss_sLcR::synapse0x1df9cc0() {
   return (neuron0x1df14b0()*0.0215327);
}

double NNfunction_ss_sLcR::synapse0x1df9d00() {
   return (neuron0x1df17f0()*0.00732921);
}

double NNfunction_ss_sLcR::synapse0x1df9d40() {
   return (neuron0x1df1b30()*-0.0107893);
}

double NNfunction_ss_sLcR::synapse0x1dfa0c0() {
   return (neuron0x1decf70()*-0.389297);
}

double NNfunction_ss_sLcR::synapse0x1dfa100() {
   return (neuron0x1ded2b0()*0.424908);
}

double NNfunction_ss_sLcR::synapse0x1dfa140() {
   return (neuron0x1ded5f0()*0.293732);
}

double NNfunction_ss_sLcR::synapse0x1dfa180() {
   return (neuron0x1ded930()*0.11375);
}

double NNfunction_ss_sLcR::synapse0x1dfa1c0() {
   return (neuron0x1dedc70()*0.226182);
}

double NNfunction_ss_sLcR::synapse0x1dfa200() {
   return (neuron0x1dedfb0()*0.159048);
}

double NNfunction_ss_sLcR::synapse0x1dfa240() {
   return (neuron0x1dee2f0()*0.0477823);
}

double NNfunction_ss_sLcR::synapse0x1dfa280() {
   return (neuron0x1dee630()*0.501782);
}

double NNfunction_ss_sLcR::synapse0x1dfa2c0() {
   return (neuron0x1dee970()*-0.72746);
}

double NNfunction_ss_sLcR::synapse0x1dfa300() {
   return (neuron0x1deecb0()*-0.419919);
}

double NNfunction_ss_sLcR::synapse0x1dfa340() {
   return (neuron0x1deeff0()*-0.348901);
}

double NNfunction_ss_sLcR::synapse0x1dfa380() {
   return (neuron0x1def330()*-0.455281);
}

double NNfunction_ss_sLcR::synapse0x1dfa3c0() {
   return (neuron0x1def670()*-0.32749);
}

double NNfunction_ss_sLcR::synapse0x1dfa400() {
   return (neuron0x1def9b0()*-0.0093492);
}

double NNfunction_ss_sLcR::synapse0x1dfa440() {
   return (neuron0x1defcf0()*0.181212);
}

double NNfunction_ss_sLcR::synapse0x1dfa480() {
   return (neuron0x1df0030()*-0.119849);
}

double NNfunction_ss_sLcR::synapse0x1df9f10() {
   return (neuron0x1df0370()*0.0633602);
}

double NNfunction_ss_sLcR::synapse0x1df9f50() {
   return (neuron0x1df08d0()*0.172525);
}

double NNfunction_ss_sLcR::synapse0x1dfa5d0() {
   return (neuron0x1df0af0()*-0.00244651);
}

double NNfunction_ss_sLcR::synapse0x1dfa610() {
   return (neuron0x1df0e30()*-0.153956);
}

double NNfunction_ss_sLcR::synapse0x1dfa650() {
   return (neuron0x1df1170()*0.376693);
}

double NNfunction_ss_sLcR::synapse0x1dfa690() {
   return (neuron0x1df14b0()*0.36352);
}

double NNfunction_ss_sLcR::synapse0x1dfa6d0() {
   return (neuron0x1df17f0()*0.365987);
}

double NNfunction_ss_sLcR::synapse0x1dfa710() {
   return (neuron0x1df1b30()*0.00101592);
}

double NNfunction_ss_sLcR::synapse0x1dfaa90() {
   return (neuron0x1decf70()*-0.871433);
}

double NNfunction_ss_sLcR::synapse0x1dfaad0() {
   return (neuron0x1ded2b0()*0.560997);
}

double NNfunction_ss_sLcR::synapse0x1dfab10() {
   return (neuron0x1ded5f0()*0.18804);
}

double NNfunction_ss_sLcR::synapse0x1dfab50() {
   return (neuron0x1ded930()*-0.152807);
}

double NNfunction_ss_sLcR::synapse0x1dfab90() {
   return (neuron0x1dedc70()*-0.599401);
}

double NNfunction_ss_sLcR::synapse0x1dfabd0() {
   return (neuron0x1dedfb0()*0.276316);
}

double NNfunction_ss_sLcR::synapse0x1dfac10() {
   return (neuron0x1dee2f0()*0.329381);
}

double NNfunction_ss_sLcR::synapse0x1dfac50() {
   return (neuron0x1dee630()*0.729206);
}

double NNfunction_ss_sLcR::synapse0x1dfac90() {
   return (neuron0x1dee970()*0.640359);
}

double NNfunction_ss_sLcR::synapse0x1dfacd0() {
   return (neuron0x1deecb0()*0.450912);
}

double NNfunction_ss_sLcR::synapse0x1dfad10() {
   return (neuron0x1deeff0()*-0.584057);
}

double NNfunction_ss_sLcR::synapse0x1dfad50() {
   return (neuron0x1def330()*-0.737995);
}

double NNfunction_ss_sLcR::synapse0x1dfad90() {
   return (neuron0x1def670()*-0.287213);
}

double NNfunction_ss_sLcR::synapse0x1dfadd0() {
   return (neuron0x1def9b0()*0.0703678);
}

double NNfunction_ss_sLcR::synapse0x1dfae10() {
   return (neuron0x1defcf0()*-0.608834);
}

double NNfunction_ss_sLcR::synapse0x1dfae50() {
   return (neuron0x1df0030()*0.80206);
}

double NNfunction_ss_sLcR::synapse0x1dfa8e0() {
   return (neuron0x1df0370()*0.957789);
}

double NNfunction_ss_sLcR::synapse0x1dfa920() {
   return (neuron0x1df08d0()*0.530257);
}

double NNfunction_ss_sLcR::synapse0x1dfafa0() {
   return (neuron0x1df0af0()*0.852627);
}

double NNfunction_ss_sLcR::synapse0x1dfafe0() {
   return (neuron0x1df0e30()*0.240447);
}

double NNfunction_ss_sLcR::synapse0x1dfb020() {
   return (neuron0x1df1170()*0.134068);
}

double NNfunction_ss_sLcR::synapse0x1dfb060() {
   return (neuron0x1df14b0()*-0.231278);
}

double NNfunction_ss_sLcR::synapse0x1dfb0a0() {
   return (neuron0x1df17f0()*0.199985);
}

double NNfunction_ss_sLcR::synapse0x1dfb0e0() {
   return (neuron0x1df1b30()*-0.264974);
}

double NNfunction_ss_sLcR::synapse0x1dfb460() {
   return (neuron0x1decf70()*-0.0135732);
}

double NNfunction_ss_sLcR::synapse0x1dfb4a0() {
   return (neuron0x1ded2b0()*0.0723478);
}

double NNfunction_ss_sLcR::synapse0x1dfb4e0() {
   return (neuron0x1ded5f0()*-0.13578);
}

double NNfunction_ss_sLcR::synapse0x1dfb520() {
   return (neuron0x1ded930()*0.236666);
}

double NNfunction_ss_sLcR::synapse0x1dfb560() {
   return (neuron0x1dedc70()*-0.296515);
}

double NNfunction_ss_sLcR::synapse0x1dfb5a0() {
   return (neuron0x1dedfb0()*-0.573646);
}

double NNfunction_ss_sLcR::synapse0x1dfb5e0() {
   return (neuron0x1dee2f0()*-0.395406);
}

double NNfunction_ss_sLcR::synapse0x1dfb620() {
   return (neuron0x1dee630()*-0.385918);
}

double NNfunction_ss_sLcR::synapse0x1dfb660() {
   return (neuron0x1dee970()*-0.340532);
}

double NNfunction_ss_sLcR::synapse0x1dfb6a0() {
   return (neuron0x1deecb0()*-0.164063);
}

double NNfunction_ss_sLcR::synapse0x1dfb6e0() {
   return (neuron0x1deeff0()*-0.192597);
}

double NNfunction_ss_sLcR::synapse0x1dfb720() {
   return (neuron0x1def330()*-0.0106739);
}

double NNfunction_ss_sLcR::synapse0x1dfb760() {
   return (neuron0x1def670()*-0.808311);
}

double NNfunction_ss_sLcR::synapse0x1dfb7a0() {
   return (neuron0x1def9b0()*-0.0296437);
}

double NNfunction_ss_sLcR::synapse0x1dfb7e0() {
   return (neuron0x1defcf0()*-0.176033);
}

double NNfunction_ss_sLcR::synapse0x1dfb820() {
   return (neuron0x1df0030()*0.540282);
}

double NNfunction_ss_sLcR::synapse0x1dfb2b0() {
   return (neuron0x1df0370()*-0.190973);
}

double NNfunction_ss_sLcR::synapse0x1dfb2f0() {
   return (neuron0x1df08d0()*-0.0557805);
}

double NNfunction_ss_sLcR::synapse0x1dfb970() {
   return (neuron0x1df0af0()*-0.130962);
}

double NNfunction_ss_sLcR::synapse0x1dfb9b0() {
   return (neuron0x1df0e30()*-0.0866944);
}

double NNfunction_ss_sLcR::synapse0x1dfb9f0() {
   return (neuron0x1df1170()*-0.111267);
}

double NNfunction_ss_sLcR::synapse0x1dfba30() {
   return (neuron0x1df14b0()*-0.0844342);
}

double NNfunction_ss_sLcR::synapse0x1dfba70() {
   return (neuron0x1df17f0()*0.132466);
}

double NNfunction_ss_sLcR::synapse0x1dfbab0() {
   return (neuron0x1df1b30()*0.191926);
}

double NNfunction_ss_sLcR::synapse0x1dfbe30() {
   return (neuron0x1decf70()*-0.12342);
}

double NNfunction_ss_sLcR::synapse0x1ded190() {
   return (neuron0x1ded2b0()*0.70432);
}

double NNfunction_ss_sLcR::synapse0x1ded1d0() {
   return (neuron0x1ded5f0()*-0.615128);
}

double NNfunction_ss_sLcR::synapse0x1ded4d0() {
   return (neuron0x1ded930()*-0.892159);
}

double NNfunction_ss_sLcR::synapse0x1ded510() {
   return (neuron0x1dedc70()*-0.132275);
}

double NNfunction_ss_sLcR::synapse0x1ded810() {
   return (neuron0x1dedfb0()*-0.434059);
}

double NNfunction_ss_sLcR::synapse0x1ded850() {
   return (neuron0x1dee2f0()*0.209909);
}

double NNfunction_ss_sLcR::synapse0x1dedb50() {
   return (neuron0x1dee630()*-0.00836806);
}

double NNfunction_ss_sLcR::synapse0x1dedb90() {
   return (neuron0x1dee970()*-1.00136);
}

double NNfunction_ss_sLcR::synapse0x1dede90() {
   return (neuron0x1deecb0()*-0.5377);
}

double NNfunction_ss_sLcR::synapse0x1deded0() {
   return (neuron0x1deeff0()*-0.566352);
}

double NNfunction_ss_sLcR::synapse0x1dee1d0() {
   return (neuron0x1def330()*-0.600111);
}

double NNfunction_ss_sLcR::synapse0x1dee210() {
   return (neuron0x1def670()*0.276923);
}

double NNfunction_ss_sLcR::synapse0x1dee510() {
   return (neuron0x1def9b0()*0.0782699);
}

double NNfunction_ss_sLcR::synapse0x1dee550() {
   return (neuron0x1defcf0()*0.846204);
}

double NNfunction_ss_sLcR::synapse0x1dee850() {
   return (neuron0x1df0030()*-0.454906);
}

double NNfunction_ss_sLcR::synapse0x1dee890() {
   return (neuron0x1df0370()*-0.174769);
}

double NNfunction_ss_sLcR::synapse0x1deeb90() {
   return (neuron0x1df08d0()*0.539881);
}

double NNfunction_ss_sLcR::synapse0x1deebd0() {
   return (neuron0x1df0af0()*-0.346166);
}

double NNfunction_ss_sLcR::synapse0x1deeed0() {
   return (neuron0x1df0e30()*-0.339622);
}

double NNfunction_ss_sLcR::synapse0x1deef10() {
   return (neuron0x1df1170()*0.48203);
}

double NNfunction_ss_sLcR::synapse0x1def210() {
   return (neuron0x1df14b0()*0.55666);
}

double NNfunction_ss_sLcR::synapse0x1def250() {
   return (neuron0x1df17f0()*-0.269617);
}

double NNfunction_ss_sLcR::synapse0x1def550() {
   return (neuron0x1df1b30()*0.191063);
}

double NNfunction_ss_sLcR::synapse0x1def590() {
   return (neuron0x1decf70()*0.0558488);
}

double NNfunction_ss_sLcR::synapse0x1df0250() {
   return (neuron0x1ded2b0()*-0.337419);
}

double NNfunction_ss_sLcR::synapse0x1df0290() {
   return (neuron0x1ded5f0()*0.234147);
}

double NNfunction_ss_sLcR::synapse0x1dfbc80() {
   return (neuron0x1ded930()*-0.927669);
}

double NNfunction_ss_sLcR::synapse0x1dfbcc0() {
   return (neuron0x1dedc70()*-0.0174019);
}

double NNfunction_ss_sLcR::synapse0x1df0590() {
   return (neuron0x1dedfb0()*-0.100838);
}

double NNfunction_ss_sLcR::synapse0x1df05d0() {
   return (neuron0x1dee2f0()*0.0164717);
}

double NNfunction_ss_sLcR::synapse0x1ba8010() {
   return (neuron0x1dee630()*-0.0121801);
}

double NNfunction_ss_sLcR::synapse0x1ba8050() {
   return (neuron0x1dee970()*-0.0508804);
}

double NNfunction_ss_sLcR::synapse0x1df0d10() {
   return (neuron0x1deecb0()*-0.132341);
}

double NNfunction_ss_sLcR::synapse0x1df0d50() {
   return (neuron0x1deeff0()*-0.00139548);
}

double NNfunction_ss_sLcR::synapse0x1df1050() {
   return (neuron0x1def330()*0.102817);
}

double NNfunction_ss_sLcR::synapse0x1df1090() {
   return (neuron0x1def670()*-0.0940538);
}

double NNfunction_ss_sLcR::synapse0x1df1390() {
   return (neuron0x1def9b0()*-0.00481715);
}

double NNfunction_ss_sLcR::synapse0x1df13d0() {
   return (neuron0x1defcf0()*0.0355414);
}

double NNfunction_ss_sLcR::synapse0x1df16d0() {
   return (neuron0x1df0030()*-0.159641);
}

double NNfunction_ss_sLcR::synapse0x1df1710() {
   return (neuron0x1df0370()*-0.0121344);
}

double NNfunction_ss_sLcR::synapse0x1df1a10() {
   return (neuron0x1df08d0()*0.0803435);
}

double NNfunction_ss_sLcR::synapse0x1df1a50() {
   return (neuron0x1df0af0()*0.0485853);
}

double NNfunction_ss_sLcR::synapse0x1df1d50() {
   return (neuron0x1df0e30()*0.0316122);
}

double NNfunction_ss_sLcR::synapse0x1df1d90() {
   return (neuron0x1df1170()*0.0282508);
}

double NNfunction_ss_sLcR::synapse0x1def890() {
   return (neuron0x1df14b0()*0.0269623);
}

double NNfunction_ss_sLcR::synapse0x1def8d0() {
   return (neuron0x1df17f0()*-0.0854259);
}

double NNfunction_ss_sLcR::synapse0x1dfdba0() {
   return (neuron0x1df1b30()*0.0145539);
}

double NNfunction_ss_sLcR::synapse0x1dfdf20() {
   return (neuron0x1decf70()*0.109671);
}

double NNfunction_ss_sLcR::synapse0x1dfdf60() {
   return (neuron0x1ded2b0()*-0.230611);
}

double NNfunction_ss_sLcR::synapse0x1dfdfa0() {
   return (neuron0x1ded5f0()*0.125146);
}

double NNfunction_ss_sLcR::synapse0x1dfdfe0() {
   return (neuron0x1ded930()*-0.18999);
}

double NNfunction_ss_sLcR::synapse0x1dfe020() {
   return (neuron0x1dedc70()*-0.261078);
}

double NNfunction_ss_sLcR::synapse0x1dfe060() {
   return (neuron0x1dedfb0()*0.0873074);
}

double NNfunction_ss_sLcR::synapse0x1dfe0a0() {
   return (neuron0x1dee2f0()*-0.348663);
}

double NNfunction_ss_sLcR::synapse0x1dfe0e0() {
   return (neuron0x1dee630()*-0.189868);
}

double NNfunction_ss_sLcR::synapse0x1dfe120() {
   return (neuron0x1dee970()*0.106385);
}

double NNfunction_ss_sLcR::synapse0x1dfe160() {
   return (neuron0x1deecb0()*0.382164);
}

double NNfunction_ss_sLcR::synapse0x1dfe1a0() {
   return (neuron0x1deeff0()*0.0700928);
}

double NNfunction_ss_sLcR::synapse0x1dfe1e0() {
   return (neuron0x1def330()*-0.47471);
}

double NNfunction_ss_sLcR::synapse0x1dfe220() {
   return (neuron0x1def670()*-0.48764);
}

double NNfunction_ss_sLcR::synapse0x1dfe260() {
   return (neuron0x1def9b0()*0.0205741);
}

double NNfunction_ss_sLcR::synapse0x1dfe2a0() {
   return (neuron0x1defcf0()*-0.0446767);
}

double NNfunction_ss_sLcR::synapse0x1dfe2e0() {
   return (neuron0x1df0030()*-0.356905);
}

double NNfunction_ss_sLcR::synapse0x1dfdd70() {
   return (neuron0x1df0370()*-0.377691);
}

double NNfunction_ss_sLcR::synapse0x1dfddb0() {
   return (neuron0x1df08d0()*-0.163949);
}

double NNfunction_ss_sLcR::synapse0x1dfe430() {
   return (neuron0x1df0af0()*0.0607812);
}

double NNfunction_ss_sLcR::synapse0x1dfe470() {
   return (neuron0x1df0e30()*0.152375);
}

double NNfunction_ss_sLcR::synapse0x1dfe4b0() {
   return (neuron0x1df1170()*-0.274965);
}

double NNfunction_ss_sLcR::synapse0x1dfe4f0() {
   return (neuron0x1df14b0()*-0.502163);
}

double NNfunction_ss_sLcR::synapse0x1dfe530() {
   return (neuron0x1df17f0()*0.412875);
}

double NNfunction_ss_sLcR::synapse0x1dfe570() {
   return (neuron0x1df1b30()*-0.167262);
}

double NNfunction_ss_sLcR::synapse0x1dfe8f0() {
   return (neuron0x1decf70()*-0.021377);
}

double NNfunction_ss_sLcR::synapse0x1dfe930() {
   return (neuron0x1ded2b0()*-0.0482869);
}

double NNfunction_ss_sLcR::synapse0x1dfe970() {
   return (neuron0x1ded5f0()*-0.0833519);
}

double NNfunction_ss_sLcR::synapse0x1dfe9b0() {
   return (neuron0x1ded930()*8.88714);
}

double NNfunction_ss_sLcR::synapse0x1dfe9f0() {
   return (neuron0x1dedc70()*-0.146797);
}

double NNfunction_ss_sLcR::synapse0x1dfea30() {
   return (neuron0x1dedfb0()*-0.034657);
}

double NNfunction_ss_sLcR::synapse0x1dfea70() {
   return (neuron0x1dee2f0()*-0.193156);
}

double NNfunction_ss_sLcR::synapse0x1dfeab0() {
   return (neuron0x1dee630()*-0.160642);
}

double NNfunction_ss_sLcR::synapse0x1dfeaf0() {
   return (neuron0x1dee970()*0.0134282);
}

double NNfunction_ss_sLcR::synapse0x1dfeb30() {
   return (neuron0x1deecb0()*-0.0280834);
}

double NNfunction_ss_sLcR::synapse0x1dfeb70() {
   return (neuron0x1deeff0()*-0.172176);
}

double NNfunction_ss_sLcR::synapse0x1dfebb0() {
   return (neuron0x1def330()*-0.131443);
}

double NNfunction_ss_sLcR::synapse0x1dfebf0() {
   return (neuron0x1def670()*0.351816);
}

double NNfunction_ss_sLcR::synapse0x1dfec30() {
   return (neuron0x1def9b0()*-0.00322016);
}

double NNfunction_ss_sLcR::synapse0x1dfec70() {
   return (neuron0x1defcf0()*-0.170283);
}

double NNfunction_ss_sLcR::synapse0x1dfecb0() {
   return (neuron0x1df0030()*0.24143);
}

double NNfunction_ss_sLcR::synapse0x1dfe740() {
   return (neuron0x1df0370()*-0.174074);
}

double NNfunction_ss_sLcR::synapse0x1dfe780() {
   return (neuron0x1df08d0()*-0.00849524);
}

double NNfunction_ss_sLcR::synapse0x1dfee00() {
   return (neuron0x1df0af0()*0.0321862);
}

double NNfunction_ss_sLcR::synapse0x1dfee40() {
   return (neuron0x1df0e30()*0.0328586);
}

double NNfunction_ss_sLcR::synapse0x1dfee80() {
   return (neuron0x1df1170()*-0.0184071);
}

double NNfunction_ss_sLcR::synapse0x1dfeec0() {
   return (neuron0x1df14b0()*0.0334523);
}

double NNfunction_ss_sLcR::synapse0x1dfef00() {
   return (neuron0x1df17f0()*0.0794654);
}

double NNfunction_ss_sLcR::synapse0x1dfef40() {
   return (neuron0x1df1b30()*0.0473668);
}

double NNfunction_ss_sLcR::synapse0x1dff2c0() {
   return (neuron0x1decf70()*0.0591669);
}

double NNfunction_ss_sLcR::synapse0x1dff300() {
   return (neuron0x1ded2b0()*-0.553458);
}

double NNfunction_ss_sLcR::synapse0x1dff340() {
   return (neuron0x1ded5f0()*-0.475184);
}

double NNfunction_ss_sLcR::synapse0x1dff380() {
   return (neuron0x1ded930()*-1.55432);
}

double NNfunction_ss_sLcR::synapse0x1dff3c0() {
   return (neuron0x1dedc70()*-0.349519);
}

double NNfunction_ss_sLcR::synapse0x1dff400() {
   return (neuron0x1dedfb0()*-0.342006);
}

double NNfunction_ss_sLcR::synapse0x1dff440() {
   return (neuron0x1dee2f0()*1.05072);
}

double NNfunction_ss_sLcR::synapse0x1dff480() {
   return (neuron0x1dee630()*1.52477);
}

double NNfunction_ss_sLcR::synapse0x1dff4c0() {
   return (neuron0x1dee970()*0.133652);
}

double NNfunction_ss_sLcR::synapse0x1dff500() {
   return (neuron0x1deecb0()*0.45523);
}

double NNfunction_ss_sLcR::synapse0x1dff540() {
   return (neuron0x1deeff0()*0.530337);
}

double NNfunction_ss_sLcR::synapse0x1dff580() {
   return (neuron0x1def330()*-0.143629);
}

double NNfunction_ss_sLcR::synapse0x1dff5c0() {
   return (neuron0x1def670()*-0.658577);
}

double NNfunction_ss_sLcR::synapse0x1dff600() {
   return (neuron0x1def9b0()*-0.798375);
}

double NNfunction_ss_sLcR::synapse0x1dff640() {
   return (neuron0x1defcf0()*0.0261231);
}

double NNfunction_ss_sLcR::synapse0x1dff680() {
   return (neuron0x1df0030()*1.23362);
}

double NNfunction_ss_sLcR::synapse0x1dff110() {
   return (neuron0x1df0370()*-0.10034);
}

double NNfunction_ss_sLcR::synapse0x1dff150() {
   return (neuron0x1df08d0()*0.186018);
}

double NNfunction_ss_sLcR::synapse0x1dff7d0() {
   return (neuron0x1df0af0()*0.750695);
}

double NNfunction_ss_sLcR::synapse0x1dff810() {
   return (neuron0x1df0e30()*-0.613385);
}

double NNfunction_ss_sLcR::synapse0x1dff850() {
   return (neuron0x1df1170()*0.665404);
}

double NNfunction_ss_sLcR::synapse0x1dff890() {
   return (neuron0x1df14b0()*-0.320195);
}

double NNfunction_ss_sLcR::synapse0x1dff8d0() {
   return (neuron0x1df17f0()*-0.207727);
}

double NNfunction_ss_sLcR::synapse0x1dff910() {
   return (neuron0x1df1b30()*0.145158);
}

double NNfunction_ss_sLcR::synapse0x1dffc90() {
   return (neuron0x1decf70()*0.408029);
}

double NNfunction_ss_sLcR::synapse0x1dffcd0() {
   return (neuron0x1ded2b0()*-0.579296);
}

double NNfunction_ss_sLcR::synapse0x1dffd10() {
   return (neuron0x1ded5f0()*-0.528773);
}

double NNfunction_ss_sLcR::synapse0x1dffd50() {
   return (neuron0x1ded930()*0.77938);
}

double NNfunction_ss_sLcR::synapse0x1dffd90() {
   return (neuron0x1dedc70()*-0.206915);
}

double NNfunction_ss_sLcR::synapse0x1dffdd0() {
   return (neuron0x1dedfb0()*-0.18576);
}

double NNfunction_ss_sLcR::synapse0x1dffe10() {
   return (neuron0x1dee2f0()*-1.10611);
}

double NNfunction_ss_sLcR::synapse0x1dffe50() {
   return (neuron0x1dee630()*1.45866);
}

double NNfunction_ss_sLcR::synapse0x1dffe90() {
   return (neuron0x1dee970()*0.246239);
}

double NNfunction_ss_sLcR::synapse0x1dffed0() {
   return (neuron0x1deecb0()*-0.0405548);
}

double NNfunction_ss_sLcR::synapse0x1dfff10() {
   return (neuron0x1deeff0()*0.171429);
}

double NNfunction_ss_sLcR::synapse0x1dfff50() {
   return (neuron0x1def330()*0.129307);
}

double NNfunction_ss_sLcR::synapse0x1dfff90() {
   return (neuron0x1def670()*-0.910586);
}

double NNfunction_ss_sLcR::synapse0x1dfffd0() {
   return (neuron0x1def9b0()*0.176661);
}

double NNfunction_ss_sLcR::synapse0x1e00010() {
   return (neuron0x1defcf0()*-0.274461);
}

double NNfunction_ss_sLcR::synapse0x1e00050() {
   return (neuron0x1df0030()*-0.1459);
}

double NNfunction_ss_sLcR::synapse0x1dffae0() {
   return (neuron0x1df0370()*-0.375517);
}

double NNfunction_ss_sLcR::synapse0x1dffb20() {
   return (neuron0x1df08d0()*-0.360487);
}

double NNfunction_ss_sLcR::synapse0x1e001a0() {
   return (neuron0x1df0af0()*-0.0544369);
}

double NNfunction_ss_sLcR::synapse0x1e001e0() {
   return (neuron0x1df0e30()*0.150373);
}

double NNfunction_ss_sLcR::synapse0x1e00220() {
   return (neuron0x1df1170()*-0.112413);
}

double NNfunction_ss_sLcR::synapse0x1e00260() {
   return (neuron0x1df14b0()*0.694904);
}

double NNfunction_ss_sLcR::synapse0x1e002a0() {
   return (neuron0x1df17f0()*0.632355);
}

double NNfunction_ss_sLcR::synapse0x1e002e0() {
   return (neuron0x1df1b30()*-0.11055);
}

double NNfunction_ss_sLcR::synapse0x1e00660() {
   return (neuron0x1decf70()*-0.055526);
}

double NNfunction_ss_sLcR::synapse0x1e006a0() {
   return (neuron0x1ded2b0()*-0.30295);
}

double NNfunction_ss_sLcR::synapse0x1e006e0() {
   return (neuron0x1ded5f0()*-0.409629);
}

double NNfunction_ss_sLcR::synapse0x1e00720() {
   return (neuron0x1ded930()*-0.705995);
}

double NNfunction_ss_sLcR::synapse0x1e00760() {
   return (neuron0x1dedc70()*0.018906);
}

double NNfunction_ss_sLcR::synapse0x1e007a0() {
   return (neuron0x1dedfb0()*-0.0334832);
}

double NNfunction_ss_sLcR::synapse0x1e007e0() {
   return (neuron0x1dee2f0()*-0.0262241);
}

double NNfunction_ss_sLcR::synapse0x1e00820() {
   return (neuron0x1dee630()*0.0632515);
}

double NNfunction_ss_sLcR::synapse0x1e00860() {
   return (neuron0x1dee970()*-0.0121919);
}

double NNfunction_ss_sLcR::synapse0x1df8a20() {
   return (neuron0x1deecb0()*0.0180169);
}

double NNfunction_ss_sLcR::synapse0x1df8a60() {
   return (neuron0x1deeff0()*8.75551e-05);
}

double NNfunction_ss_sLcR::synapse0x1df8aa0() {
   return (neuron0x1def330()*0.350845);
}

double NNfunction_ss_sLcR::synapse0x1df8ae0() {
   return (neuron0x1def670()*-0.0588347);
}

double NNfunction_ss_sLcR::synapse0x1df8b20() {
   return (neuron0x1def9b0()*-0.0243589);
}

double NNfunction_ss_sLcR::synapse0x1df8b60() {
   return (neuron0x1defcf0()*-0.398341);
}

double NNfunction_ss_sLcR::synapse0x1df8ba0() {
   return (neuron0x1df0030()*1.26906);
}

double NNfunction_ss_sLcR::synapse0x1e004b0() {
   return (neuron0x1df0370()*0.039845);
}

double NNfunction_ss_sLcR::synapse0x1e004f0() {
   return (neuron0x1df08d0()*-0.582917);
}

double NNfunction_ss_sLcR::synapse0x1df8cf0() {
   return (neuron0x1df0af0()*-1.37776);
}

double NNfunction_ss_sLcR::synapse0x1df8d30() {
   return (neuron0x1df0e30()*-0.266287);
}

double NNfunction_ss_sLcR::synapse0x1df8d70() {
   return (neuron0x1df1170()*0.0836188);
}

double NNfunction_ss_sLcR::synapse0x1df8db0() {
   return (neuron0x1df14b0()*0.0945545);
}

double NNfunction_ss_sLcR::synapse0x1df8df0() {
   return (neuron0x1df17f0()*0.133833);
}

double NNfunction_ss_sLcR::synapse0x1df8e30() {
   return (neuron0x1df1b30()*0.118075);
}

double NNfunction_ss_sLcR::synapse0x1df91b0() {
   return (neuron0x1decf70()*-0.204466);
}

double NNfunction_ss_sLcR::synapse0x1df91f0() {
   return (neuron0x1ded2b0()*-0.471548);
}

double NNfunction_ss_sLcR::synapse0x1df9230() {
   return (neuron0x1ded5f0()*0.395111);
}

double NNfunction_ss_sLcR::synapse0x1df9270() {
   return (neuron0x1ded930()*0.00823523);
}

double NNfunction_ss_sLcR::synapse0x1df92b0() {
   return (neuron0x1dedc70()*0.610137);
}

double NNfunction_ss_sLcR::synapse0x1df92f0() {
   return (neuron0x1dedfb0()*-0.444817);
}

double NNfunction_ss_sLcR::synapse0x1df9330() {
   return (neuron0x1dee2f0()*-0.113382);
}

double NNfunction_ss_sLcR::synapse0x1df9370() {
   return (neuron0x1dee630()*0.155848);
}

double NNfunction_ss_sLcR::synapse0x1df93b0() {
   return (neuron0x1dee970()*-0.0988321);
}

double NNfunction_ss_sLcR::synapse0x1df93f0() {
   return (neuron0x1deecb0()*-0.0980319);
}

double NNfunction_ss_sLcR::synapse0x1df9430() {
   return (neuron0x1deeff0()*0.445261);
}

double NNfunction_ss_sLcR::synapse0x1df9470() {
   return (neuron0x1def330()*-0.372177);
}

double NNfunction_ss_sLcR::synapse0x1df94b0() {
   return (neuron0x1def670()*0.0976212);
}

double NNfunction_ss_sLcR::synapse0x1df94f0() {
   return (neuron0x1def9b0()*0.538801);
}

double NNfunction_ss_sLcR::synapse0x1df9530() {
   return (neuron0x1defcf0()*0.264715);
}

double NNfunction_ss_sLcR::synapse0x1df9570() {
   return (neuron0x1df0030()*-0.199011);
}

double NNfunction_ss_sLcR::synapse0x1df9000() {
   return (neuron0x1df0370()*-0.495122);
}

double NNfunction_ss_sLcR::synapse0x1df9040() {
   return (neuron0x1df08d0()*0.153885);
}

double NNfunction_ss_sLcR::synapse0x1df96c0() {
   return (neuron0x1df0af0()*-0.507736);
}

double NNfunction_ss_sLcR::synapse0x1df9700() {
   return (neuron0x1df0e30()*0.779621);
}

double NNfunction_ss_sLcR::synapse0x1df9740() {
   return (neuron0x1df1170()*-0.366787);
}

double NNfunction_ss_sLcR::synapse0x1df9780() {
   return (neuron0x1df14b0()*-0.0993489);
}

double NNfunction_ss_sLcR::synapse0x1df97c0() {
   return (neuron0x1df17f0()*-0.416514);
}

double NNfunction_ss_sLcR::synapse0x1df9800() {
   return (neuron0x1df1b30()*0.624659);
}

double NNfunction_ss_sLcR::synapse0x1df99d0() {
   return (neuron0x1decf70()*0.104084);
}

double NNfunction_ss_sLcR::synapse0x1e02a60() {
   return (neuron0x1ded2b0()*-0.148558);
}

double NNfunction_ss_sLcR::synapse0x1e02aa0() {
   return (neuron0x1ded5f0()*0.471775);
}

double NNfunction_ss_sLcR::synapse0x1e02ae0() {
   return (neuron0x1ded930()*-0.310015);
}

double NNfunction_ss_sLcR::synapse0x1e02b20() {
   return (neuron0x1dedc70()*-0.282734);
}

double NNfunction_ss_sLcR::synapse0x1e02b60() {
   return (neuron0x1dedfb0()*0.234551);
}

double NNfunction_ss_sLcR::synapse0x1e02ba0() {
   return (neuron0x1dee2f0()*0.0594029);
}

double NNfunction_ss_sLcR::synapse0x1e02be0() {
   return (neuron0x1dee630()*0.545175);
}

double NNfunction_ss_sLcR::synapse0x1e02c20() {
   return (neuron0x1dee970()*0.0506662);
}

double NNfunction_ss_sLcR::synapse0x1e02c60() {
   return (neuron0x1deecb0()*0.00194994);
}

double NNfunction_ss_sLcR::synapse0x1e02ca0() {
   return (neuron0x1deeff0()*0.190998);
}

double NNfunction_ss_sLcR::synapse0x1e02ce0() {
   return (neuron0x1def330()*0.0479428);
}

double NNfunction_ss_sLcR::synapse0x1e02d20() {
   return (neuron0x1def670()*-0.197144);
}

double NNfunction_ss_sLcR::synapse0x1e02d60() {
   return (neuron0x1def9b0()*-0.0377907);
}

double NNfunction_ss_sLcR::synapse0x1e02da0() {
   return (neuron0x1defcf0()*0.222851);
}

double NNfunction_ss_sLcR::synapse0x1e02de0() {
   return (neuron0x1df0030()*0.683464);
}

double NNfunction_ss_sLcR::synapse0x1e028b0() {
   return (neuron0x1df0370()*-0.0293372);
}

double NNfunction_ss_sLcR::synapse0x1e028f0() {
   return (neuron0x1df08d0()*0.103796);
}

double NNfunction_ss_sLcR::synapse0x1e02f30() {
   return (neuron0x1df0af0()*0.167851);
}

double NNfunction_ss_sLcR::synapse0x1e02f70() {
   return (neuron0x1df0e30()*0.0995127);
}

double NNfunction_ss_sLcR::synapse0x1e02fb0() {
   return (neuron0x1df1170()*0.237168);
}

double NNfunction_ss_sLcR::synapse0x1e02ff0() {
   return (neuron0x1df14b0()*0.212052);
}

double NNfunction_ss_sLcR::synapse0x1e03030() {
   return (neuron0x1df17f0()*0.135074);
}

double NNfunction_ss_sLcR::synapse0x1e03070() {
   return (neuron0x1df1b30()*0.121723);
}

double NNfunction_ss_sLcR::synapse0x1e033f0() {
   return (neuron0x1decf70()*0.0264839);
}

double NNfunction_ss_sLcR::synapse0x1e03430() {
   return (neuron0x1ded2b0()*-0.0193426);
}

double NNfunction_ss_sLcR::synapse0x1e03470() {
   return (neuron0x1ded5f0()*-1.04472);
}

double NNfunction_ss_sLcR::synapse0x1e034b0() {
   return (neuron0x1ded930()*-0.044631);
}

double NNfunction_ss_sLcR::synapse0x1e034f0() {
   return (neuron0x1dedc70()*-0.0437674);
}

double NNfunction_ss_sLcR::synapse0x1e03530() {
   return (neuron0x1dedfb0()*-0.0497213);
}

double NNfunction_ss_sLcR::synapse0x1e03570() {
   return (neuron0x1dee2f0()*0.00556284);
}

double NNfunction_ss_sLcR::synapse0x1e035b0() {
   return (neuron0x1dee630()*-0.0136392);
}

double NNfunction_ss_sLcR::synapse0x1e035f0() {
   return (neuron0x1dee970()*0.0416736);
}

double NNfunction_ss_sLcR::synapse0x1e03630() {
   return (neuron0x1deecb0()*0.0110247);
}

double NNfunction_ss_sLcR::synapse0x1e03670() {
   return (neuron0x1deeff0()*0.00480849);
}

double NNfunction_ss_sLcR::synapse0x1e036b0() {
   return (neuron0x1def330()*-0.07538);
}

double NNfunction_ss_sLcR::synapse0x1e036f0() {
   return (neuron0x1def670()*0.278333);
}

double NNfunction_ss_sLcR::synapse0x1e03730() {
   return (neuron0x1def9b0()*-0.0638412);
}

double NNfunction_ss_sLcR::synapse0x1e03770() {
   return (neuron0x1defcf0()*-0.00548725);
}

double NNfunction_ss_sLcR::synapse0x1e037b0() {
   return (neuron0x1df0030()*-0.054151);
}

double NNfunction_ss_sLcR::synapse0x1e03240() {
   return (neuron0x1df0370()*-0.0345922);
}

double NNfunction_ss_sLcR::synapse0x1e03280() {
   return (neuron0x1df08d0()*0.0490155);
}

double NNfunction_ss_sLcR::synapse0x1e03900() {
   return (neuron0x1df0af0()*0.0710113);
}

double NNfunction_ss_sLcR::synapse0x1e03940() {
   return (neuron0x1df0e30()*-0.0102398);
}

double NNfunction_ss_sLcR::synapse0x1e03980() {
   return (neuron0x1df1170()*0.00577506);
}

double NNfunction_ss_sLcR::synapse0x1e039c0() {
   return (neuron0x1df14b0()*-0.0329244);
}

double NNfunction_ss_sLcR::synapse0x1e03a00() {
   return (neuron0x1df17f0()*0.0218043);
}

double NNfunction_ss_sLcR::synapse0x1e03a40() {
   return (neuron0x1df1b30()*0.00469081);
}

double NNfunction_ss_sLcR::synapse0x1e03dc0() {
   return (neuron0x1decf70()*0.160079);
}

double NNfunction_ss_sLcR::synapse0x1e03e00() {
   return (neuron0x1ded2b0()*0.414083);
}

double NNfunction_ss_sLcR::synapse0x1e03e40() {
   return (neuron0x1ded5f0()*-0.442036);
}

double NNfunction_ss_sLcR::synapse0x1e03e80() {
   return (neuron0x1ded930()*-0.489086);
}

double NNfunction_ss_sLcR::synapse0x1e03ec0() {
   return (neuron0x1dedc70()*0.573106);
}

double NNfunction_ss_sLcR::synapse0x1e03f00() {
   return (neuron0x1dedfb0()*-0.00087943);
}

double NNfunction_ss_sLcR::synapse0x1e03f40() {
   return (neuron0x1dee2f0()*0.425936);
}

double NNfunction_ss_sLcR::synapse0x1e03f80() {
   return (neuron0x1dee630()*0.480993);
}

double NNfunction_ss_sLcR::synapse0x1e03fc0() {
   return (neuron0x1dee970()*-0.549522);
}

double NNfunction_ss_sLcR::synapse0x1e04000() {
   return (neuron0x1deecb0()*-0.56555);
}

double NNfunction_ss_sLcR::synapse0x1e04040() {
   return (neuron0x1deeff0()*-0.143988);
}

double NNfunction_ss_sLcR::synapse0x1e04080() {
   return (neuron0x1def330()*0.272846);
}

double NNfunction_ss_sLcR::synapse0x1e040c0() {
   return (neuron0x1def670()*0.384806);
}

double NNfunction_ss_sLcR::synapse0x1e04100() {
   return (neuron0x1def9b0()*0.125488);
}

double NNfunction_ss_sLcR::synapse0x1e04140() {
   return (neuron0x1defcf0()*-0.0741794);
}

double NNfunction_ss_sLcR::synapse0x1e04180() {
   return (neuron0x1df0030()*-0.0426673);
}

double NNfunction_ss_sLcR::synapse0x1e03c10() {
   return (neuron0x1df0370()*0.449891);
}

double NNfunction_ss_sLcR::synapse0x1e03c50() {
   return (neuron0x1df08d0()*0.293685);
}

double NNfunction_ss_sLcR::synapse0x1e042d0() {
   return (neuron0x1df0af0()*-0.365534);
}

double NNfunction_ss_sLcR::synapse0x1e04310() {
   return (neuron0x1df0e30()*-0.608779);
}

double NNfunction_ss_sLcR::synapse0x1e04350() {
   return (neuron0x1df1170()*0.441128);
}

double NNfunction_ss_sLcR::synapse0x1e04390() {
   return (neuron0x1df14b0()*0.416679);
}

double NNfunction_ss_sLcR::synapse0x1e043d0() {
   return (neuron0x1df17f0()*-0.331114);
}

double NNfunction_ss_sLcR::synapse0x1e04410() {
   return (neuron0x1df1b30()*0.0443585);
}

double NNfunction_ss_sLcR::synapse0x1e04790() {
   return (neuron0x1decf70()*0.00971991);
}

double NNfunction_ss_sLcR::synapse0x1e047d0() {
   return (neuron0x1ded2b0()*-0.166155);
}

double NNfunction_ss_sLcR::synapse0x1e04810() {
   return (neuron0x1ded5f0()*-0.00433091);
}

double NNfunction_ss_sLcR::synapse0x1e04850() {
   return (neuron0x1ded930()*-0.499113);
}

double NNfunction_ss_sLcR::synapse0x1e04890() {
   return (neuron0x1dedc70()*-0.734565);
}

double NNfunction_ss_sLcR::synapse0x1e048d0() {
   return (neuron0x1dedfb0()*0.180544);
}

double NNfunction_ss_sLcR::synapse0x1e04910() {
   return (neuron0x1dee2f0()*-0.314742);
}

double NNfunction_ss_sLcR::synapse0x1e04950() {
   return (neuron0x1dee630()*-0.503631);
}

double NNfunction_ss_sLcR::synapse0x1e04990() {
   return (neuron0x1dee970()*0.575139);
}

double NNfunction_ss_sLcR::synapse0x1e049d0() {
   return (neuron0x1deecb0()*0.33347);
}

double NNfunction_ss_sLcR::synapse0x1e04a10() {
   return (neuron0x1deeff0()*0.345239);
}

double NNfunction_ss_sLcR::synapse0x1e04a50() {
   return (neuron0x1def330()*0.198533);
}

double NNfunction_ss_sLcR::synapse0x1e04a90() {
   return (neuron0x1def670()*0.0400617);
}

double NNfunction_ss_sLcR::synapse0x1e04ad0() {
   return (neuron0x1def9b0()*-0.473418);
}

double NNfunction_ss_sLcR::synapse0x1e04b10() {
   return (neuron0x1defcf0()*-0.508004);
}

double NNfunction_ss_sLcR::synapse0x1e04b50() {
   return (neuron0x1df0030()*-0.105021);
}

double NNfunction_ss_sLcR::synapse0x1e045e0() {
   return (neuron0x1df0370()*-0.331232);
}

double NNfunction_ss_sLcR::synapse0x1e04620() {
   return (neuron0x1df08d0()*0.570471);
}

double NNfunction_ss_sLcR::synapse0x1e04ca0() {
   return (neuron0x1df0af0()*0.394655);
}

double NNfunction_ss_sLcR::synapse0x1e04ce0() {
   return (neuron0x1df0e30()*-1.31519);
}

double NNfunction_ss_sLcR::synapse0x1e04d20() {
   return (neuron0x1df1170()*0.566455);
}

double NNfunction_ss_sLcR::synapse0x1e04d60() {
   return (neuron0x1df14b0()*0.122547);
}

double NNfunction_ss_sLcR::synapse0x1e04da0() {
   return (neuron0x1df17f0()*0.25578);
}

double NNfunction_ss_sLcR::synapse0x1e04de0() {
   return (neuron0x1df1b30()*-0.282029);
}

double NNfunction_ss_sLcR::synapse0x1e05160() {
   return (neuron0x1decf70()*0.0271793);
}

double NNfunction_ss_sLcR::synapse0x1e051a0() {
   return (neuron0x1ded2b0()*0.033796);
}

double NNfunction_ss_sLcR::synapse0x1e051e0() {
   return (neuron0x1ded5f0()*0.0608178);
}

double NNfunction_ss_sLcR::synapse0x1e05220() {
   return (neuron0x1ded930()*-6.90253);
}

double NNfunction_ss_sLcR::synapse0x1e05260() {
   return (neuron0x1dedc70()*-0.0369841);
}

double NNfunction_ss_sLcR::synapse0x1e052a0() {
   return (neuron0x1dedfb0()*-0.0305488);
}

double NNfunction_ss_sLcR::synapse0x1e052e0() {
   return (neuron0x1dee2f0()*0.0122748);
}

double NNfunction_ss_sLcR::synapse0x1e05320() {
   return (neuron0x1dee630()*-0.00394525);
}

double NNfunction_ss_sLcR::synapse0x1e05360() {
   return (neuron0x1dee970()*-0.000190394);
}

double NNfunction_ss_sLcR::synapse0x1e053a0() {
   return (neuron0x1deecb0()*0.0408093);
}

double NNfunction_ss_sLcR::synapse0x1e053e0() {
   return (neuron0x1deeff0()*-0.110497);
}

double NNfunction_ss_sLcR::synapse0x1e05420() {
   return (neuron0x1def330()*0.0859014);
}

double NNfunction_ss_sLcR::synapse0x1e05460() {
   return (neuron0x1def670()*0.519552);
}

double NNfunction_ss_sLcR::synapse0x1e054a0() {
   return (neuron0x1def9b0()*0.074263);
}

double NNfunction_ss_sLcR::synapse0x1e054e0() {
   return (neuron0x1defcf0()*0.0423271);
}

double NNfunction_ss_sLcR::synapse0x1e05520() {
   return (neuron0x1df0030()*0.792165);
}

double NNfunction_ss_sLcR::synapse0x1e04fb0() {
   return (neuron0x1df0370()*-0.0553889);
}

double NNfunction_ss_sLcR::synapse0x1e04ff0() {
   return (neuron0x1df08d0()*-0.118869);
}

double NNfunction_ss_sLcR::synapse0x1e05670() {
   return (neuron0x1df0af0()*-0.0780185);
}

double NNfunction_ss_sLcR::synapse0x1e056b0() {
   return (neuron0x1df0e30()*0.0473465);
}

double NNfunction_ss_sLcR::synapse0x1e056f0() {
   return (neuron0x1df1170()*-0.0763139);
}

double NNfunction_ss_sLcR::synapse0x1e05730() {
   return (neuron0x1df14b0()*-0.0449955);
}

double NNfunction_ss_sLcR::synapse0x1e05770() {
   return (neuron0x1df17f0()*-0.00582353);
}

double NNfunction_ss_sLcR::synapse0x1e057b0() {
   return (neuron0x1df1b30()*-0.0741938);
}

double NNfunction_ss_sLcR::synapse0x1e05b30() {
   return (neuron0x1decf70()*0.0109055);
}

double NNfunction_ss_sLcR::synapse0x1e05b70() {
   return (neuron0x1ded2b0()*0.00663161);
}

double NNfunction_ss_sLcR::synapse0x1e05bb0() {
   return (neuron0x1ded5f0()*-0.0018372);
}

double NNfunction_ss_sLcR::synapse0x1e05bf0() {
   return (neuron0x1ded930()*-0.00224774);
}

double NNfunction_ss_sLcR::synapse0x1e05c30() {
   return (neuron0x1dedc70()*0.0277776);
}

double NNfunction_ss_sLcR::synapse0x1e05c70() {
   return (neuron0x1dedfb0()*-0.101893);
}

double NNfunction_ss_sLcR::synapse0x1e05cb0() {
   return (neuron0x1dee2f0()*0.0305485);
}

double NNfunction_ss_sLcR::synapse0x1e05cf0() {
   return (neuron0x1dee630()*-0.0122533);
}

double NNfunction_ss_sLcR::synapse0x1e05d30() {
   return (neuron0x1dee970()*-0.0414575);
}

double NNfunction_ss_sLcR::synapse0x1e05d70() {
   return (neuron0x1deecb0()*-0.0141134);
}

double NNfunction_ss_sLcR::synapse0x1e05db0() {
   return (neuron0x1deeff0()*-0.0313569);
}

double NNfunction_ss_sLcR::synapse0x1e05df0() {
   return (neuron0x1def330()*-0.0114073);
}

double NNfunction_ss_sLcR::synapse0x1e05e30() {
   return (neuron0x1def670()*0.718381);
}

double NNfunction_ss_sLcR::synapse0x1e05e70() {
   return (neuron0x1def9b0()*0.00231804);
}

double NNfunction_ss_sLcR::synapse0x1e05eb0() {
   return (neuron0x1defcf0()*-0.0217742);
}

double NNfunction_ss_sLcR::synapse0x1e05ef0() {
   return (neuron0x1df0030()*-0.387458);
}

double NNfunction_ss_sLcR::synapse0x1e05980() {
   return (neuron0x1df0370()*-0.0192956);
}

double NNfunction_ss_sLcR::synapse0x1e059c0() {
   return (neuron0x1df08d0()*0.00211069);
}

double NNfunction_ss_sLcR::synapse0x1e06040() {
   return (neuron0x1df0af0()*-0.00890728);
}

double NNfunction_ss_sLcR::synapse0x1e06080() {
   return (neuron0x1df0e30()*0.00863083);
}

double NNfunction_ss_sLcR::synapse0x1e060c0() {
   return (neuron0x1df1170()*-0.0290769);
}

double NNfunction_ss_sLcR::synapse0x1e06100() {
   return (neuron0x1df14b0()*-0.00841298);
}

double NNfunction_ss_sLcR::synapse0x1e06140() {
   return (neuron0x1df17f0()*0.0368227);
}

double NNfunction_ss_sLcR::synapse0x1e06180() {
   return (neuron0x1df1b30()*0.0222875);
}

double NNfunction_ss_sLcR::synapse0x1e06500() {
   return (neuron0x1decf70()*0.193275);
}

double NNfunction_ss_sLcR::synapse0x1e06540() {
   return (neuron0x1ded2b0()*0.129696);
}

double NNfunction_ss_sLcR::synapse0x1e06580() {
   return (neuron0x1ded5f0()*0.783589);
}

double NNfunction_ss_sLcR::synapse0x1e065c0() {
   return (neuron0x1ded930()*0.794999);
}

double NNfunction_ss_sLcR::synapse0x1e06600() {
   return (neuron0x1dedc70()*-0.0581621);
}

double NNfunction_ss_sLcR::synapse0x1e06640() {
   return (neuron0x1dedfb0()*0.0193171);
}

double NNfunction_ss_sLcR::synapse0x1e06680() {
   return (neuron0x1dee2f0()*0.0938104);
}

double NNfunction_ss_sLcR::synapse0x1e066c0() {
   return (neuron0x1dee630()*-0.175677);
}

double NNfunction_ss_sLcR::synapse0x1e06700() {
   return (neuron0x1dee970()*0.0252012);
}

double NNfunction_ss_sLcR::synapse0x1e06740() {
   return (neuron0x1deecb0()*-0.290982);
}

double NNfunction_ss_sLcR::synapse0x1e06780() {
   return (neuron0x1deeff0()*0.803285);
}

double NNfunction_ss_sLcR::synapse0x1e067c0() {
   return (neuron0x1def330()*-0.652878);
}

double NNfunction_ss_sLcR::synapse0x1e06800() {
   return (neuron0x1def670()*-0.188172);
}

double NNfunction_ss_sLcR::synapse0x1e06840() {
   return (neuron0x1def9b0()*-0.314826);
}

double NNfunction_ss_sLcR::synapse0x1e06880() {
   return (neuron0x1defcf0()*0.0830437);
}

double NNfunction_ss_sLcR::synapse0x1e068c0() {
   return (neuron0x1df0030()*-0.679519);
}

double NNfunction_ss_sLcR::synapse0x1e06350() {
   return (neuron0x1df0370()*-0.813739);
}

double NNfunction_ss_sLcR::synapse0x1e06390() {
   return (neuron0x1df08d0()*0.354978);
}

double NNfunction_ss_sLcR::synapse0x1e06a10() {
   return (neuron0x1df0af0()*-0.472159);
}

double NNfunction_ss_sLcR::synapse0x1e06a50() {
   return (neuron0x1df0e30()*-0.147249);
}

double NNfunction_ss_sLcR::synapse0x1e06a90() {
   return (neuron0x1df1170()*0.290345);
}

double NNfunction_ss_sLcR::synapse0x1e06ad0() {
   return (neuron0x1df14b0()*0.0490102);
}

double NNfunction_ss_sLcR::synapse0x1e06b10() {
   return (neuron0x1df17f0()*-0.175008);
}

double NNfunction_ss_sLcR::synapse0x1e06b50() {
   return (neuron0x1df1b30()*0.202251);
}

double NNfunction_ss_sLcR::synapse0x1e06ed0() {
   return (neuron0x1decf70()*-0.0370977);
}

double NNfunction_ss_sLcR::synapse0x1e06f10() {
   return (neuron0x1ded2b0()*0.105529);
}

double NNfunction_ss_sLcR::synapse0x1e06f50() {
   return (neuron0x1ded5f0()*-0.375374);
}

double NNfunction_ss_sLcR::synapse0x1e06f90() {
   return (neuron0x1ded930()*0.341557);
}

double NNfunction_ss_sLcR::synapse0x1e06fd0() {
   return (neuron0x1dedc70()*-0.248927);
}

double NNfunction_ss_sLcR::synapse0x1e07010() {
   return (neuron0x1dedfb0()*-0.392953);
}

double NNfunction_ss_sLcR::synapse0x1e07050() {
   return (neuron0x1dee2f0()*-0.471179);
}

double NNfunction_ss_sLcR::synapse0x1e07090() {
   return (neuron0x1dee630()*-0.439226);
}

double NNfunction_ss_sLcR::synapse0x1e070d0() {
   return (neuron0x1dee970()*-0.534401);
}

double NNfunction_ss_sLcR::synapse0x1e07110() {
   return (neuron0x1deecb0()*-0.44852);
}

double NNfunction_ss_sLcR::synapse0x1e07150() {
   return (neuron0x1deeff0()*-0.31131);
}

double NNfunction_ss_sLcR::synapse0x1e07190() {
   return (neuron0x1def330()*0.00515908);
}

double NNfunction_ss_sLcR::synapse0x1e071d0() {
   return (neuron0x1def670()*0.537398);
}

double NNfunction_ss_sLcR::synapse0x1e07210() {
   return (neuron0x1def9b0()*-0.083254);
}

double NNfunction_ss_sLcR::synapse0x1e07250() {
   return (neuron0x1defcf0()*-0.0930511);
}

double NNfunction_ss_sLcR::synapse0x1e07290() {
   return (neuron0x1df0030()*0.553385);
}

double NNfunction_ss_sLcR::synapse0x1e06d20() {
   return (neuron0x1df0370()*-0.116032);
}

double NNfunction_ss_sLcR::synapse0x1e06d60() {
   return (neuron0x1df08d0()*-0.0275679);
}

double NNfunction_ss_sLcR::synapse0x1e073e0() {
   return (neuron0x1df0af0()*-0.105308);
}

double NNfunction_ss_sLcR::synapse0x1e07420() {
   return (neuron0x1df0e30()*-0.0740819);
}

double NNfunction_ss_sLcR::synapse0x1e07460() {
   return (neuron0x1df1170()*-0.171685);
}

double NNfunction_ss_sLcR::synapse0x1e074a0() {
   return (neuron0x1df14b0()*-0.0442347);
}

double NNfunction_ss_sLcR::synapse0x1e074e0() {
   return (neuron0x1df17f0()*0.126884);
}

double NNfunction_ss_sLcR::synapse0x1e07520() {
   return (neuron0x1df1b30()*0.133721);
}

double NNfunction_ss_sLcR::synapse0x1e078a0() {
   return (neuron0x1decf70()*-0.118379);
}

double NNfunction_ss_sLcR::synapse0x1dfbe70() {
   return (neuron0x1ded2b0()*-0.439112);
}

double NNfunction_ss_sLcR::synapse0x1dfbeb0() {
   return (neuron0x1ded5f0()*-0.350023);
}

double NNfunction_ss_sLcR::synapse0x1dfbef0() {
   return (neuron0x1ded930()*-0.116963);
}

double NNfunction_ss_sLcR::synapse0x1dfc140() {
   return (neuron0x1dedc70()*0.697614);
}

double NNfunction_ss_sLcR::synapse0x1dfc180() {
   return (neuron0x1dedfb0()*-0.203699);
}

double NNfunction_ss_sLcR::synapse0x1dfc1c0() {
   return (neuron0x1dee2f0()*0.0382751);
}

double NNfunction_ss_sLcR::synapse0x1dfc410() {
   return (neuron0x1dee630()*-0.057515);
}

double NNfunction_ss_sLcR::synapse0x1dfc450() {
   return (neuron0x1dee970()*-0.00990297);
}

double NNfunction_ss_sLcR::synapse0x1dfc6a0() {
   return (neuron0x1deecb0()*0.848102);
}

double NNfunction_ss_sLcR::synapse0x1dfc6e0() {
   return (neuron0x1deeff0()*0.212194);
}

double NNfunction_ss_sLcR::synapse0x1dfc720() {
   return (neuron0x1def330()*-0.163028);
}

double NNfunction_ss_sLcR::synapse0x1dfc970() {
   return (neuron0x1def670()*-0.216979);
}

double NNfunction_ss_sLcR::synapse0x1dfc9b0() {
   return (neuron0x1def9b0()*0.675708);
}

double NNfunction_ss_sLcR::synapse0x1dfcc00() {
   return (neuron0x1defcf0()*0.855953);
}

double NNfunction_ss_sLcR::synapse0x1dfcc40() {
   return (neuron0x1df0030()*0.0489158);
}

double NNfunction_ss_sLcR::synapse0x1e076f0() {
   return (neuron0x1df0370()*-0.426435);
}

double NNfunction_ss_sLcR::synapse0x1e07730() {
   return (neuron0x1df08d0()*-0.0356006);
}

double NNfunction_ss_sLcR::synapse0x1dfcd90() {
   return (neuron0x1df0af0()*-0.206237);
}

double NNfunction_ss_sLcR::synapse0x1dfd2a0() {
   return (neuron0x1df0e30()*0.187565);
}

double NNfunction_ss_sLcR::synapse0x1dfd2e0() {
   return (neuron0x1df1170()*0.640943);
}

double NNfunction_ss_sLcR::synapse0x1dfd320() {
   return (neuron0x1df14b0()*-0.00470102);
}

double NNfunction_ss_sLcR::synapse0x1dfd570() {
   return (neuron0x1df17f0()*1.02647);
}

double NNfunction_ss_sLcR::synapse0x1dfd5b0() {
   return (neuron0x1df1b30()*-0.819958);
}

double NNfunction_ss_sLcR::synapse0x1dfce60() {
   return (neuron0x1decf70()*0.0709256);
}

double NNfunction_ss_sLcR::synapse0x1dfcea0() {
   return (neuron0x1ded2b0()*-0.00964321);
}

double NNfunction_ss_sLcR::synapse0x1dfcee0() {
   return (neuron0x1ded5f0()*-0.166266);
}

double NNfunction_ss_sLcR::synapse0x1dfcf20() {
   return (neuron0x1ded930()*0.504108);
}

double NNfunction_ss_sLcR::synapse0x1dfd8a0() {
   return (neuron0x1dedc70()*0.171652);
}

double NNfunction_ss_sLcR::synapse0x1e09bf0() {
   return (neuron0x1dedfb0()*0.299803);
}

double NNfunction_ss_sLcR::synapse0x1e09c30() {
   return (neuron0x1dee2f0()*-0.173884);
}

double NNfunction_ss_sLcR::synapse0x1e09c70() {
   return (neuron0x1dee630()*0.613929);
}

double NNfunction_ss_sLcR::synapse0x1e09cb0() {
   return (neuron0x1dee970()*-0.165787);
}

double NNfunction_ss_sLcR::synapse0x1e09cf0() {
   return (neuron0x1deecb0()*0.223313);
}

double NNfunction_ss_sLcR::synapse0x1e09d30() {
   return (neuron0x1deeff0()*-0.00264275);
}

double NNfunction_ss_sLcR::synapse0x1e09d70() {
   return (neuron0x1def330()*-0.0978325);
}

double NNfunction_ss_sLcR::synapse0x1e09db0() {
   return (neuron0x1def670()*0.147319);
}

double NNfunction_ss_sLcR::synapse0x1e09df0() {
   return (neuron0x1def9b0()*-0.167988);
}

double NNfunction_ss_sLcR::synapse0x1e09e30() {
   return (neuron0x1defcf0()*-0.244258);
}

double NNfunction_ss_sLcR::synapse0x1e09e70() {
   return (neuron0x1df0030()*-0.0280865);
}

double NNfunction_ss_sLcR::synapse0x1dfd780() {
   return (neuron0x1df0370()*0.161145);
}

double NNfunction_ss_sLcR::synapse0x1dfd7c0() {
   return (neuron0x1df08d0()*0.205721);
}

double NNfunction_ss_sLcR::synapse0x1e09fc0() {
   return (neuron0x1df0af0()*0.394086);
}

double NNfunction_ss_sLcR::synapse0x1e0a000() {
   return (neuron0x1df0e30()*0.122838);
}

double NNfunction_ss_sLcR::synapse0x1e0a040() {
   return (neuron0x1df1170()*0.124748);
}

double NNfunction_ss_sLcR::synapse0x1e0a080() {
   return (neuron0x1df14b0()*-0.330826);
}

double NNfunction_ss_sLcR::synapse0x1e0a0c0() {
   return (neuron0x1df17f0()*-0.00157147);
}

double NNfunction_ss_sLcR::synapse0x1e0a100() {
   return (neuron0x1df1b30()*-0.133489);
}

double NNfunction_ss_sLcR::synapse0x1e0a480() {
   return (neuron0x1decf70()*0.00198486);
}

double NNfunction_ss_sLcR::synapse0x1e0a4c0() {
   return (neuron0x1ded2b0()*0.0496374);
}

double NNfunction_ss_sLcR::synapse0x1e0a500() {
   return (neuron0x1ded5f0()*0.0661366);
}

double NNfunction_ss_sLcR::synapse0x1e0a540() {
   return (neuron0x1ded930()*-7.9271);
}

double NNfunction_ss_sLcR::synapse0x1e0a580() {
   return (neuron0x1dedc70()*0.105584);
}

double NNfunction_ss_sLcR::synapse0x1e0a5c0() {
   return (neuron0x1dedfb0()*0.0217288);
}

double NNfunction_ss_sLcR::synapse0x1e0a600() {
   return (neuron0x1dee2f0()*0.138596);
}

double NNfunction_ss_sLcR::synapse0x1e0a640() {
   return (neuron0x1dee630()*0.109535);
}

double NNfunction_ss_sLcR::synapse0x1e0a680() {
   return (neuron0x1dee970()*-0.0025789);
}

double NNfunction_ss_sLcR::synapse0x1e0a6c0() {
   return (neuron0x1deecb0()*0.024887);
}

double NNfunction_ss_sLcR::synapse0x1e0a700() {
   return (neuron0x1deeff0()*0.149037);
}

double NNfunction_ss_sLcR::synapse0x1e0a740() {
   return (neuron0x1def330()*0.0948773);
}

double NNfunction_ss_sLcR::synapse0x1e0a780() {
   return (neuron0x1def670()*-0.279126);
}

double NNfunction_ss_sLcR::synapse0x1e0a7c0() {
   return (neuron0x1def9b0()*-0.0146334);
}

double NNfunction_ss_sLcR::synapse0x1e0a800() {
   return (neuron0x1defcf0()*0.127479);
}

double NNfunction_ss_sLcR::synapse0x1e0a840() {
   return (neuron0x1df0030()*-0.236444);
}

double NNfunction_ss_sLcR::synapse0x1e0a2d0() {
   return (neuron0x1df0370()*0.143985);
}

double NNfunction_ss_sLcR::synapse0x1e0a310() {
   return (neuron0x1df08d0()*0.0240329);
}

double NNfunction_ss_sLcR::synapse0x1e0a990() {
   return (neuron0x1df0af0()*0.000921238);
}

double NNfunction_ss_sLcR::synapse0x1e0a9d0() {
   return (neuron0x1df0e30()*-0.0329935);
}

double NNfunction_ss_sLcR::synapse0x1e0aa10() {
   return (neuron0x1df1170()*0.000405249);
}

double NNfunction_ss_sLcR::synapse0x1e0aa50() {
   return (neuron0x1df14b0()*-0.0225495);
}

double NNfunction_ss_sLcR::synapse0x1e0aa90() {
   return (neuron0x1df17f0()*-0.0457687);
}

double NNfunction_ss_sLcR::synapse0x1e0aad0() {
   return (neuron0x1df1b30()*-0.041736);
}

double NNfunction_ss_sLcR::synapse0x1e0ae50() {
   return (neuron0x1decf70()*0.0718966);
}

double NNfunction_ss_sLcR::synapse0x1e0ae90() {
   return (neuron0x1ded2b0()*0.229226);
}

double NNfunction_ss_sLcR::synapse0x1e0aed0() {
   return (neuron0x1ded5f0()*0.108968);
}

double NNfunction_ss_sLcR::synapse0x1e0af10() {
   return (neuron0x1ded930()*1.03893);
}

double NNfunction_ss_sLcR::synapse0x1e0af50() {
   return (neuron0x1dedc70()*-0.229994);
}

double NNfunction_ss_sLcR::synapse0x1e0af90() {
   return (neuron0x1dedfb0()*0.0836974);
}

double NNfunction_ss_sLcR::synapse0x1e0afd0() {
   return (neuron0x1dee2f0()*-0.239008);
}

double NNfunction_ss_sLcR::synapse0x1e0b010() {
   return (neuron0x1dee630()*-0.348189);
}

double NNfunction_ss_sLcR::synapse0x1e0b050() {
   return (neuron0x1dee970()*-0.457377);
}

double NNfunction_ss_sLcR::synapse0x1e0b090() {
   return (neuron0x1deecb0()*-0.60828);
}

double NNfunction_ss_sLcR::synapse0x1e0b0d0() {
   return (neuron0x1deeff0()*-0.322379);
}

double NNfunction_ss_sLcR::synapse0x1e0b110() {
   return (neuron0x1def330()*-0.192051);
}

double NNfunction_ss_sLcR::synapse0x1e0b150() {
   return (neuron0x1def670()*-0.582541);
}

double NNfunction_ss_sLcR::synapse0x1e0b190() {
   return (neuron0x1def9b0()*0.0487826);
}

double NNfunction_ss_sLcR::synapse0x1e0b1d0() {
   return (neuron0x1defcf0()*-0.111073);
}

double NNfunction_ss_sLcR::synapse0x1e0b210() {
   return (neuron0x1df0030()*0.355235);
}

double NNfunction_ss_sLcR::synapse0x1e0aca0() {
   return (neuron0x1df0370()*0.197001);
}

double NNfunction_ss_sLcR::synapse0x1e0ace0() {
   return (neuron0x1df08d0()*-0.528393);
}

double NNfunction_ss_sLcR::synapse0x1e0b360() {
   return (neuron0x1df0af0()*-0.0695515);
}

double NNfunction_ss_sLcR::synapse0x1e0b3a0() {
   return (neuron0x1df0e30()*0.285669);
}

double NNfunction_ss_sLcR::synapse0x1e0b3e0() {
   return (neuron0x1df1170()*0.537936);
}

double NNfunction_ss_sLcR::synapse0x1e0b420() {
   return (neuron0x1df14b0()*0.118411);
}

double NNfunction_ss_sLcR::synapse0x1e0b460() {
   return (neuron0x1df17f0()*-0.255372);
}

double NNfunction_ss_sLcR::synapse0x1e0b4a0() {
   return (neuron0x1df1b30()*-0.0979809);
}

double NNfunction_ss_sLcR::synapse0x1e0b820() {
   return (neuron0x1decf70()*0.00359495);
}

double NNfunction_ss_sLcR::synapse0x1e0b860() {
   return (neuron0x1ded2b0()*0.0319948);
}

double NNfunction_ss_sLcR::synapse0x1e0b8a0() {
   return (neuron0x1ded5f0()*-0.0169267);
}

double NNfunction_ss_sLcR::synapse0x1e0b8e0() {
   return (neuron0x1ded930()*1.67781);
}

double NNfunction_ss_sLcR::synapse0x1e0b920() {
   return (neuron0x1dedc70()*-0.00760078);
}

double NNfunction_ss_sLcR::synapse0x1e0b960() {
   return (neuron0x1dedfb0()*-0.026234);
}

double NNfunction_ss_sLcR::synapse0x1e0b9a0() {
   return (neuron0x1dee2f0()*-0.00829189);
}

double NNfunction_ss_sLcR::synapse0x1e0b9e0() {
   return (neuron0x1dee630()*-0.0138893);
}

double NNfunction_ss_sLcR::synapse0x1e0ba20() {
   return (neuron0x1dee970()*0.004092);
}

double NNfunction_ss_sLcR::synapse0x1e0ba60() {
   return (neuron0x1deecb0()*0.00583726);
}

double NNfunction_ss_sLcR::synapse0x1e0baa0() {
   return (neuron0x1deeff0()*-0.0145515);
}

double NNfunction_ss_sLcR::synapse0x1e0bae0() {
   return (neuron0x1def330()*-0.0302452);
}

double NNfunction_ss_sLcR::synapse0x1e0bb20() {
   return (neuron0x1def670()*0.144897);
}

double NNfunction_ss_sLcR::synapse0x1e0bb60() {
   return (neuron0x1def9b0()*0.0061024);
}

double NNfunction_ss_sLcR::synapse0x1e0bba0() {
   return (neuron0x1defcf0()*-0.01717);
}

double NNfunction_ss_sLcR::synapse0x1e0bbe0() {
   return (neuron0x1df0030()*0.15327);
}

double NNfunction_ss_sLcR::synapse0x1e0b670() {
   return (neuron0x1df0370()*-0.0107923);
}

double NNfunction_ss_sLcR::synapse0x1e0b6b0() {
   return (neuron0x1df08d0()*-0.0161653);
}

double NNfunction_ss_sLcR::synapse0x1e0bd30() {
   return (neuron0x1df0af0()*-0.013494);
}

double NNfunction_ss_sLcR::synapse0x1e0bd70() {
   return (neuron0x1df0e30()*-0.000401418);
}

double NNfunction_ss_sLcR::synapse0x1e0bdb0() {
   return (neuron0x1df1170()*-0.0156593);
}

double NNfunction_ss_sLcR::synapse0x1e0bdf0() {
   return (neuron0x1df14b0()*0.0162453);
}

double NNfunction_ss_sLcR::synapse0x1e0be30() {
   return (neuron0x1df17f0()*0.0199916);
}

double NNfunction_ss_sLcR::synapse0x1e0be70() {
   return (neuron0x1df1b30()*0.00617295);
}

double NNfunction_ss_sLcR::synapse0x1e0c1f0() {
   return (neuron0x1decf70()*0.226329);
}

double NNfunction_ss_sLcR::synapse0x1e0c230() {
   return (neuron0x1ded2b0()*0.623446);
}

double NNfunction_ss_sLcR::synapse0x1e0c270() {
   return (neuron0x1ded5f0()*-0.317495);
}

double NNfunction_ss_sLcR::synapse0x1e0c2b0() {
   return (neuron0x1ded930()*-0.111409);
}

double NNfunction_ss_sLcR::synapse0x1e0c2f0() {
   return (neuron0x1dedc70()*-0.0252027);
}

double NNfunction_ss_sLcR::synapse0x1e0c330() {
   return (neuron0x1dedfb0()*-0.073691);
}

double NNfunction_ss_sLcR::synapse0x1e0c370() {
   return (neuron0x1dee2f0()*0.138918);
}

double NNfunction_ss_sLcR::synapse0x1e0c3b0() {
   return (neuron0x1dee630()*0.239862);
}

double NNfunction_ss_sLcR::synapse0x1e0c3f0() {
   return (neuron0x1dee970()*1.13018);
}

double NNfunction_ss_sLcR::synapse0x1e0c430() {
   return (neuron0x1deecb0()*0.519056);
}

double NNfunction_ss_sLcR::synapse0x1e0c470() {
   return (neuron0x1deeff0()*0.0598008);
}

double NNfunction_ss_sLcR::synapse0x1e0c4b0() {
   return (neuron0x1def330()*-0.0116132);
}

double NNfunction_ss_sLcR::synapse0x1e0c4f0() {
   return (neuron0x1def670()*-0.000807878);
}

double NNfunction_ss_sLcR::synapse0x1e0c530() {
   return (neuron0x1def9b0()*0.533799);
}

double NNfunction_ss_sLcR::synapse0x1e0c570() {
   return (neuron0x1defcf0()*0.489771);
}

double NNfunction_ss_sLcR::synapse0x1e0c5b0() {
   return (neuron0x1df0030()*-0.380768);
}

double NNfunction_ss_sLcR::synapse0x1e0c040() {
   return (neuron0x1df0370()*-0.130062);
}

double NNfunction_ss_sLcR::synapse0x1e0c080() {
   return (neuron0x1df08d0()*-0.487451);
}

double NNfunction_ss_sLcR::synapse0x1e0c700() {
   return (neuron0x1df0af0()*0.114564);
}

double NNfunction_ss_sLcR::synapse0x1e0c740() {
   return (neuron0x1df0e30()*-0.0131356);
}

double NNfunction_ss_sLcR::synapse0x1e0c780() {
   return (neuron0x1df1170()*0.583305);
}

double NNfunction_ss_sLcR::synapse0x1e0c7c0() {
   return (neuron0x1df14b0()*0.48012);
}

double NNfunction_ss_sLcR::synapse0x1e0c800() {
   return (neuron0x1df17f0()*-0.412699);
}

double NNfunction_ss_sLcR::synapse0x1e0c840() {
   return (neuron0x1df1b30()*-0.448567);
}

double NNfunction_ss_sLcR::synapse0x1e0cbc0() {
   return (neuron0x1decf70()*0.0281544);
}

double NNfunction_ss_sLcR::synapse0x1e0cc00() {
   return (neuron0x1ded2b0()*0.0658465);
}

double NNfunction_ss_sLcR::synapse0x1e0cc40() {
   return (neuron0x1ded5f0()*-0.0829627);
}

double NNfunction_ss_sLcR::synapse0x1e0cc80() {
   return (neuron0x1ded930()*-0.512587);
}

double NNfunction_ss_sLcR::synapse0x1e0ccc0() {
   return (neuron0x1dedc70()*0.0306114);
}

double NNfunction_ss_sLcR::synapse0x1e0cd00() {
   return (neuron0x1dedfb0()*0.0478175);
}

double NNfunction_ss_sLcR::synapse0x1e0cd40() {
   return (neuron0x1dee2f0()*0.0340202);
}

double NNfunction_ss_sLcR::synapse0x1e0cd80() {
   return (neuron0x1dee630()*0.0671657);
}

double NNfunction_ss_sLcR::synapse0x1e0cdc0() {
   return (neuron0x1dee970()*-0.0581453);
}

double NNfunction_ss_sLcR::synapse0x1e0ce00() {
   return (neuron0x1deecb0()*-0.0261342);
}

double NNfunction_ss_sLcR::synapse0x1e0ce40() {
   return (neuron0x1deeff0()*0.0497048);
}

double NNfunction_ss_sLcR::synapse0x1e0ce80() {
   return (neuron0x1def330()*-0.0224843);
}

double NNfunction_ss_sLcR::synapse0x1e0cec0() {
   return (neuron0x1def670()*0.0131551);
}

double NNfunction_ss_sLcR::synapse0x1e0cf00() {
   return (neuron0x1def9b0()*-0.0242488);
}

double NNfunction_ss_sLcR::synapse0x1e0cf40() {
   return (neuron0x1defcf0()*0.028491);
}

double NNfunction_ss_sLcR::synapse0x1e0cf80() {
   return (neuron0x1df0030()*0.0760922);
}

double NNfunction_ss_sLcR::synapse0x1e0ca10() {
   return (neuron0x1df0370()*0.0215729);
}

double NNfunction_ss_sLcR::synapse0x1e0ca50() {
   return (neuron0x1df08d0()*-0.0362947);
}

double NNfunction_ss_sLcR::synapse0x1e0d0d0() {
   return (neuron0x1df0af0()*-0.015701);
}

double NNfunction_ss_sLcR::synapse0x1e0d110() {
   return (neuron0x1df0e30()*-0.138847);
}

double NNfunction_ss_sLcR::synapse0x1e0d150() {
   return (neuron0x1df1170()*0.0427751);
}

double NNfunction_ss_sLcR::synapse0x1e0d190() {
   return (neuron0x1df14b0()*-0.000759501);
}

double NNfunction_ss_sLcR::synapse0x1e0d1d0() {
   return (neuron0x1df17f0()*0.0186606);
}

double NNfunction_ss_sLcR::synapse0x1e0d210() {
   return (neuron0x1df1b30()*0.0117807);
}

double NNfunction_ss_sLcR::synapse0x1e0d590() {
   return (neuron0x1decf70()*1.01307);
}

double NNfunction_ss_sLcR::synapse0x1e0d5d0() {
   return (neuron0x1ded2b0()*-1.0429);
}

double NNfunction_ss_sLcR::synapse0x1e0d610() {
   return (neuron0x1ded5f0()*0.0456766);
}

double NNfunction_ss_sLcR::synapse0x1e0d650() {
   return (neuron0x1ded930()*0.20651);
}

double NNfunction_ss_sLcR::synapse0x1e0d690() {
   return (neuron0x1dedc70()*0.273714);
}

double NNfunction_ss_sLcR::synapse0x1e0d6d0() {
   return (neuron0x1dedfb0()*-0.339904);
}

double NNfunction_ss_sLcR::synapse0x1e0d710() {
   return (neuron0x1dee2f0()*0.461619);
}

double NNfunction_ss_sLcR::synapse0x1e0d750() {
   return (neuron0x1dee630()*-0.0512544);
}

double NNfunction_ss_sLcR::synapse0x1e0d790() {
   return (neuron0x1dee970()*-1.08581);
}

double NNfunction_ss_sLcR::synapse0x1e0d7d0() {
   return (neuron0x1deecb0()*-0.183502);
}

double NNfunction_ss_sLcR::synapse0x1e0d810() {
   return (neuron0x1deeff0()*0.227449);
}

double NNfunction_ss_sLcR::synapse0x1e0d850() {
   return (neuron0x1def330()*-0.0606115);
}

double NNfunction_ss_sLcR::synapse0x1e0d890() {
   return (neuron0x1def670()*-1.01387);
}

double NNfunction_ss_sLcR::synapse0x1e0d8d0() {
   return (neuron0x1def9b0()*0.50259);
}

double NNfunction_ss_sLcR::synapse0x1e0d910() {
   return (neuron0x1defcf0()*-0.159837);
}

double NNfunction_ss_sLcR::synapse0x1e0d950() {
   return (neuron0x1df0030()*0.192094);
}

double NNfunction_ss_sLcR::synapse0x1e0d3e0() {
   return (neuron0x1df0370()*-0.568286);
}

double NNfunction_ss_sLcR::synapse0x1e0d420() {
   return (neuron0x1df08d0()*0.725999);
}

double NNfunction_ss_sLcR::synapse0x1e0daa0() {
   return (neuron0x1df0af0()*0.427811);
}

double NNfunction_ss_sLcR::synapse0x1e0dae0() {
   return (neuron0x1df0e30()*-0.0831901);
}

double NNfunction_ss_sLcR::synapse0x1e0db20() {
   return (neuron0x1df1170()*0.878055);
}

double NNfunction_ss_sLcR::synapse0x1e0db60() {
   return (neuron0x1df14b0()*0.418994);
}

double NNfunction_ss_sLcR::synapse0x1e0dba0() {
   return (neuron0x1df17f0()*0.21427);
}

double NNfunction_ss_sLcR::synapse0x1e0dbe0() {
   return (neuron0x1df1b30()*-0.186998);
}

double NNfunction_ss_sLcR::synapse0x1e0df60() {
   return (neuron0x1decf70()*-0.0199548);
}

double NNfunction_ss_sLcR::synapse0x1e0dfa0() {
   return (neuron0x1ded2b0()*-0.296108);
}

double NNfunction_ss_sLcR::synapse0x1e0dfe0() {
   return (neuron0x1ded5f0()*-0.833413);
}

double NNfunction_ss_sLcR::synapse0x1e0e020() {
   return (neuron0x1ded930()*-0.531812);
}

double NNfunction_ss_sLcR::synapse0x1e0e060() {
   return (neuron0x1dedc70()*-0.287934);
}

double NNfunction_ss_sLcR::synapse0x1e0e0a0() {
   return (neuron0x1dedfb0()*-0.0100777);
}

double NNfunction_ss_sLcR::synapse0x1e0e0e0() {
   return (neuron0x1dee2f0()*0.484056);
}

double NNfunction_ss_sLcR::synapse0x1e0e120() {
   return (neuron0x1dee630()*0.318288);
}

double NNfunction_ss_sLcR::synapse0x1e0e160() {
   return (neuron0x1dee970()*-0.0870212);
}

double NNfunction_ss_sLcR::synapse0x1e0e1a0() {
   return (neuron0x1deecb0()*-0.0761138);
}

double NNfunction_ss_sLcR::synapse0x1e0e1e0() {
   return (neuron0x1deeff0()*0.192513);
}

double NNfunction_ss_sLcR::synapse0x1e0e220() {
   return (neuron0x1def330()*0.0530491);
}

double NNfunction_ss_sLcR::synapse0x1e0e260() {
   return (neuron0x1def670()*-0.231807);
}

double NNfunction_ss_sLcR::synapse0x1e0e2a0() {
   return (neuron0x1def9b0()*-0.462309);
}

double NNfunction_ss_sLcR::synapse0x1e0e2e0() {
   return (neuron0x1defcf0()*0.0802803);
}

double NNfunction_ss_sLcR::synapse0x1e0e320() {
   return (neuron0x1df0030()*0.706016);
}

double NNfunction_ss_sLcR::synapse0x1e0ddb0() {
   return (neuron0x1df0370()*0.128157);
}

double NNfunction_ss_sLcR::synapse0x1e0ddf0() {
   return (neuron0x1df08d0()*0.0758608);
}

double NNfunction_ss_sLcR::synapse0x1e0e470() {
   return (neuron0x1df0af0()*0.529964);
}

double NNfunction_ss_sLcR::synapse0x1e0e4b0() {
   return (neuron0x1df0e30()*-0.251315);
}

double NNfunction_ss_sLcR::synapse0x1e0e4f0() {
   return (neuron0x1df1170()*0.438145);
}

double NNfunction_ss_sLcR::synapse0x1e0e530() {
   return (neuron0x1df14b0()*-0.229698);
}

double NNfunction_ss_sLcR::synapse0x1e0e570() {
   return (neuron0x1df17f0()*-0.0445745);
}

double NNfunction_ss_sLcR::synapse0x1e0e5b0() {
   return (neuron0x1df1b30()*-0.0973124);
}

double NNfunction_ss_sLcR::synapse0x1df7060() {
   return (neuron0x1decf70()*0.155623);
}

double NNfunction_ss_sLcR::synapse0x1df70a0() {
   return (neuron0x1ded2b0()*-0.457267);
}

double NNfunction_ss_sLcR::synapse0x1df70e0() {
   return (neuron0x1ded5f0()*-0.12541);
}

double NNfunction_ss_sLcR::synapse0x1df7120() {
   return (neuron0x1ded930()*1.26659);
}

double NNfunction_ss_sLcR::synapse0x1df7160() {
   return (neuron0x1dedc70()*-0.14441);
}

double NNfunction_ss_sLcR::synapse0x1df71a0() {
   return (neuron0x1dedfb0()*-0.147645);
}

double NNfunction_ss_sLcR::synapse0x1df71e0() {
   return (neuron0x1dee2f0()*-0.094594);
}

double NNfunction_ss_sLcR::synapse0x1df7220() {
   return (neuron0x1dee630()*0.0588098);
}

double NNfunction_ss_sLcR::synapse0x1e0ed40() {
   return (neuron0x1dee970()*0.081271);
}

double NNfunction_ss_sLcR::synapse0x1e0ed80() {
   return (neuron0x1deecb0()*-0.130517);
}

double NNfunction_ss_sLcR::synapse0x1e0edc0() {
   return (neuron0x1deeff0()*-0.129519);
}

double NNfunction_ss_sLcR::synapse0x1e0ee00() {
   return (neuron0x1def330()*0.134994);
}

double NNfunction_ss_sLcR::synapse0x1e0ee40() {
   return (neuron0x1def670()*-0.0703538);
}

double NNfunction_ss_sLcR::synapse0x1e0ee80() {
   return (neuron0x1def9b0()*0.0242526);
}

double NNfunction_ss_sLcR::synapse0x1e0eec0() {
   return (neuron0x1defcf0()*0.00144308);
}

double NNfunction_ss_sLcR::synapse0x1e0ef00() {
   return (neuron0x1df0030()*-0.328787);
}

double NNfunction_ss_sLcR::synapse0x1e0e780() {
   return (neuron0x1df0370()*-0.116501);
}

double NNfunction_ss_sLcR::synapse0x1e0e7c0() {
   return (neuron0x1df08d0()*-0.0467588);
}

double NNfunction_ss_sLcR::synapse0x1e0f050() {
   return (neuron0x1df0af0()*-3.66395e-06);
}

double NNfunction_ss_sLcR::synapse0x1e0f090() {
   return (neuron0x1df0e30()*0.0151696);
}

double NNfunction_ss_sLcR::synapse0x1e0f0d0() {
   return (neuron0x1df1170()*0.0924303);
}

double NNfunction_ss_sLcR::synapse0x1e0f110() {
   return (neuron0x1df14b0()*0.187819);
}

double NNfunction_ss_sLcR::synapse0x1e0f150() {
   return (neuron0x1df17f0()*-0.0215868);
}

double NNfunction_ss_sLcR::synapse0x1e0f190() {
   return (neuron0x1df1b30()*-0.000711454);
}

double NNfunction_ss_sLcR::synapse0x1e0f510() {
   return (neuron0x1decf70()*0.603903);
}

double NNfunction_ss_sLcR::synapse0x1e0f550() {
   return (neuron0x1ded2b0()*0.361363);
}

double NNfunction_ss_sLcR::synapse0x1e0f590() {
   return (neuron0x1ded5f0()*0.471412);
}

double NNfunction_ss_sLcR::synapse0x1e0f5d0() {
   return (neuron0x1ded930()*0.315074);
}

double NNfunction_ss_sLcR::synapse0x1e0f610() {
   return (neuron0x1dedc70()*0.232243);
}

double NNfunction_ss_sLcR::synapse0x1e0f650() {
   return (neuron0x1dedfb0()*-0.167066);
}

double NNfunction_ss_sLcR::synapse0x1e0f690() {
   return (neuron0x1dee2f0()*-0.413448);
}

double NNfunction_ss_sLcR::synapse0x1e0f6d0() {
   return (neuron0x1dee630()*-1.19691);
}

double NNfunction_ss_sLcR::synapse0x1e0f710() {
   return (neuron0x1dee970()*-0.506295);
}

double NNfunction_ss_sLcR::synapse0x1e0f750() {
   return (neuron0x1deecb0()*0.240843);
}

double NNfunction_ss_sLcR::synapse0x1e0f790() {
   return (neuron0x1deeff0()*0.156853);
}

double NNfunction_ss_sLcR::synapse0x1e0f7d0() {
   return (neuron0x1def330()*0.599342);
}

double NNfunction_ss_sLcR::synapse0x1e0f810() {
   return (neuron0x1def670()*0.0567902);
}

double NNfunction_ss_sLcR::synapse0x1e0f850() {
   return (neuron0x1def9b0()*0.143364);
}

double NNfunction_ss_sLcR::synapse0x1e0f890() {
   return (neuron0x1defcf0()*0.896112);
}

double NNfunction_ss_sLcR::synapse0x1e0f8d0() {
   return (neuron0x1df0030()*-0.151106);
}

double NNfunction_ss_sLcR::synapse0x1e0f360() {
   return (neuron0x1df0370()*-0.44342);
}

double NNfunction_ss_sLcR::synapse0x1e0f3a0() {
   return (neuron0x1df08d0()*0.028227);
}

double NNfunction_ss_sLcR::synapse0x1e0fa20() {
   return (neuron0x1df0af0()*-0.966428);
}

double NNfunction_ss_sLcR::synapse0x1e0fa60() {
   return (neuron0x1df0e30()*-0.756125);
}

double NNfunction_ss_sLcR::synapse0x1e0faa0() {
   return (neuron0x1df1170()*-0.318724);
}

double NNfunction_ss_sLcR::synapse0x1e0fae0() {
   return (neuron0x1df14b0()*0.114424);
}

double NNfunction_ss_sLcR::synapse0x1e0fb20() {
   return (neuron0x1df17f0()*-0.038964);
}

double NNfunction_ss_sLcR::synapse0x1e0fb60() {
   return (neuron0x1df1b30()*0.0234415);
}

double NNfunction_ss_sLcR::synapse0x1e0fee0() {
   return (neuron0x1decf70()*-0.0834413);
}

double NNfunction_ss_sLcR::synapse0x1e0ff20() {
   return (neuron0x1ded2b0()*0.12478);
}

double NNfunction_ss_sLcR::synapse0x1e0ff60() {
   return (neuron0x1ded5f0()*-0.055422);
}

double NNfunction_ss_sLcR::synapse0x1e0ffa0() {
   return (neuron0x1ded930()*0.10312);
}

double NNfunction_ss_sLcR::synapse0x1e0ffe0() {
   return (neuron0x1dedc70()*0.0496339);
}

double NNfunction_ss_sLcR::synapse0x1e10020() {
   return (neuron0x1dedfb0()*-0.048146);
}

double NNfunction_ss_sLcR::synapse0x1e10060() {
   return (neuron0x1dee2f0()*0.159012);
}

double NNfunction_ss_sLcR::synapse0x1e100a0() {
   return (neuron0x1dee630()*0.333794);
}

double NNfunction_ss_sLcR::synapse0x1e100e0() {
   return (neuron0x1dee970()*0.228125);
}

double NNfunction_ss_sLcR::synapse0x1e10120() {
   return (neuron0x1deecb0()*0.0411292);
}

double NNfunction_ss_sLcR::synapse0x1e10160() {
   return (neuron0x1deeff0()*-0.00143653);
}

double NNfunction_ss_sLcR::synapse0x1e101a0() {
   return (neuron0x1def330()*0.0437403);
}

double NNfunction_ss_sLcR::synapse0x1e101e0() {
   return (neuron0x1def670()*0.270068);
}

double NNfunction_ss_sLcR::synapse0x1e10220() {
   return (neuron0x1def9b0()*-0.0268068);
}

double NNfunction_ss_sLcR::synapse0x1e10260() {
   return (neuron0x1defcf0()*0.172111);
}

double NNfunction_ss_sLcR::synapse0x1e102a0() {
   return (neuron0x1df0030()*1.68528);
}

double NNfunction_ss_sLcR::synapse0x1e0fd30() {
   return (neuron0x1df0370()*0.0720596);
}

double NNfunction_ss_sLcR::synapse0x1e0fd70() {
   return (neuron0x1df08d0()*0.0983006);
}

double NNfunction_ss_sLcR::synapse0x1e008a0() {
   return (neuron0x1df0af0()*0.0264411);
}

double NNfunction_ss_sLcR::synapse0x1e008e0() {
   return (neuron0x1df0e30()*0.113061);
}

double NNfunction_ss_sLcR::synapse0x1e00920() {
   return (neuron0x1df1170()*0.0520733);
}

double NNfunction_ss_sLcR::synapse0x1e00960() {
   return (neuron0x1df14b0()*-0.0966053);
}

double NNfunction_ss_sLcR::synapse0x1e009a0() {
   return (neuron0x1df17f0()*-0.0393376);
}

double NNfunction_ss_sLcR::synapse0x1e009e0() {
   return (neuron0x1df1b30()*0.11339);
}

double NNfunction_ss_sLcR::synapse0x1e00d60() {
   return (neuron0x1decf70()*0.770023);
}

double NNfunction_ss_sLcR::synapse0x1e00da0() {
   return (neuron0x1ded2b0()*0.728044);
}

double NNfunction_ss_sLcR::synapse0x1e00de0() {
   return (neuron0x1ded5f0()*-0.289151);
}

double NNfunction_ss_sLcR::synapse0x1e00e20() {
   return (neuron0x1ded930()*0.487975);
}

double NNfunction_ss_sLcR::synapse0x1e00e60() {
   return (neuron0x1dedc70()*-0.662222);
}

double NNfunction_ss_sLcR::synapse0x1e00ea0() {
   return (neuron0x1dedfb0()*1.08417);
}

double NNfunction_ss_sLcR::synapse0x1e00ee0() {
   return (neuron0x1dee2f0()*-1.15917);
}

double NNfunction_ss_sLcR::synapse0x1e00f20() {
   return (neuron0x1dee630()*-1.44356);
}

double NNfunction_ss_sLcR::synapse0x1e00f60() {
   return (neuron0x1dee970()*-0.529304);
}

double NNfunction_ss_sLcR::synapse0x1e00fa0() {
   return (neuron0x1deecb0()*-0.814597);
}

double NNfunction_ss_sLcR::synapse0x1e00fe0() {
   return (neuron0x1deeff0()*-0.244647);
}

double NNfunction_ss_sLcR::synapse0x1e01020() {
   return (neuron0x1def330()*0.366135);
}

double NNfunction_ss_sLcR::synapse0x1e01060() {
   return (neuron0x1def670()*1.33261);
}

double NNfunction_ss_sLcR::synapse0x1e010a0() {
   return (neuron0x1def9b0()*-0.0269141);
}

double NNfunction_ss_sLcR::synapse0x1e010e0() {
   return (neuron0x1defcf0()*0.576621);
}

double NNfunction_ss_sLcR::synapse0x1e01120() {
   return (neuron0x1df0030()*-0.254603);
}

double NNfunction_ss_sLcR::synapse0x1e00bb0() {
   return (neuron0x1df0370()*-0.2289);
}

double NNfunction_ss_sLcR::synapse0x1e00bf0() {
   return (neuron0x1df08d0()*0.254298);
}

double NNfunction_ss_sLcR::synapse0x1e01270() {
   return (neuron0x1df0af0()*0.0408536);
}

double NNfunction_ss_sLcR::synapse0x1e012b0() {
   return (neuron0x1df0e30()*1.13537);
}

double NNfunction_ss_sLcR::synapse0x1e012f0() {
   return (neuron0x1df1170()*-0.122261);
}

double NNfunction_ss_sLcR::synapse0x1e01330() {
   return (neuron0x1df14b0()*0.255957);
}

double NNfunction_ss_sLcR::synapse0x1e01370() {
   return (neuron0x1df17f0()*0.969419);
}

double NNfunction_ss_sLcR::synapse0x1e013b0() {
   return (neuron0x1df1b30()*-0.0295089);
}

double NNfunction_ss_sLcR::synapse0x1e01730() {
   return (neuron0x1decf70()*-0.261739);
}

double NNfunction_ss_sLcR::synapse0x1e01770() {
   return (neuron0x1ded2b0()*0.957517);
}

double NNfunction_ss_sLcR::synapse0x1e017b0() {
   return (neuron0x1ded5f0()*-0.386238);
}

double NNfunction_ss_sLcR::synapse0x1e017f0() {
   return (neuron0x1ded930()*-0.504182);
}

double NNfunction_ss_sLcR::synapse0x1e01830() {
   return (neuron0x1dedc70()*0.247503);
}

double NNfunction_ss_sLcR::synapse0x1e01870() {
   return (neuron0x1dedfb0()*0.143802);
}

double NNfunction_ss_sLcR::synapse0x1e018b0() {
   return (neuron0x1dee2f0()*-0.663346);
}

double NNfunction_ss_sLcR::synapse0x1e018f0() {
   return (neuron0x1dee630()*0.271129);
}

double NNfunction_ss_sLcR::synapse0x1e01930() {
   return (neuron0x1dee970()*0.104118);
}

double NNfunction_ss_sLcR::synapse0x1e01970() {
   return (neuron0x1deecb0()*0.882414);
}

double NNfunction_ss_sLcR::synapse0x1e019b0() {
   return (neuron0x1deeff0()*0.446219);
}

double NNfunction_ss_sLcR::synapse0x1e019f0() {
   return (neuron0x1def330()*0.342586);
}

double NNfunction_ss_sLcR::synapse0x1e01a30() {
   return (neuron0x1def670()*0.484395);
}

double NNfunction_ss_sLcR::synapse0x1e01a70() {
   return (neuron0x1def9b0()*-0.146885);
}

double NNfunction_ss_sLcR::synapse0x1e01ab0() {
   return (neuron0x1defcf0()*-0.275614);
}

double NNfunction_ss_sLcR::synapse0x1e01af0() {
   return (neuron0x1df0030()*0.127145);
}

double NNfunction_ss_sLcR::synapse0x1e01580() {
   return (neuron0x1df0370()*0.708619);
}

double NNfunction_ss_sLcR::synapse0x1e015c0() {
   return (neuron0x1df08d0()*0.21066);
}

double NNfunction_ss_sLcR::synapse0x1e01c40() {
   return (neuron0x1df0af0()*-0.0907016);
}

double NNfunction_ss_sLcR::synapse0x1e01c80() {
   return (neuron0x1df0e30()*-0.0876903);
}

double NNfunction_ss_sLcR::synapse0x1e01cc0() {
   return (neuron0x1df1170()*-0.77875);
}

double NNfunction_ss_sLcR::synapse0x1e01d00() {
   return (neuron0x1df14b0()*-0.575653);
}

double NNfunction_ss_sLcR::synapse0x1e01d40() {
   return (neuron0x1df17f0()*-1.06858);
}

double NNfunction_ss_sLcR::synapse0x1e01d80() {
   return (neuron0x1df1b30()*-0.2159);
}

double NNfunction_ss_sLcR::synapse0x1e02100() {
   return (neuron0x1decf70()*0.254359);
}

double NNfunction_ss_sLcR::synapse0x1e02140() {
   return (neuron0x1ded2b0()*-0.256603);
}

double NNfunction_ss_sLcR::synapse0x1e02180() {
   return (neuron0x1ded5f0()*-0.722618);
}

double NNfunction_ss_sLcR::synapse0x1e021c0() {
   return (neuron0x1ded930()*-0.376281);
}

double NNfunction_ss_sLcR::synapse0x1e02200() {
   return (neuron0x1dedc70()*-0.11492);
}

double NNfunction_ss_sLcR::synapse0x1e02240() {
   return (neuron0x1dedfb0()*-0.210112);
}

double NNfunction_ss_sLcR::synapse0x1e02280() {
   return (neuron0x1dee2f0()*-0.205704);
}

double NNfunction_ss_sLcR::synapse0x1e022c0() {
   return (neuron0x1dee630()*-0.137097);
}

double NNfunction_ss_sLcR::synapse0x1e02300() {
   return (neuron0x1dee970()*0.941527);
}

double NNfunction_ss_sLcR::synapse0x1e02340() {
   return (neuron0x1deecb0()*0.00342968);
}

double NNfunction_ss_sLcR::synapse0x1e02380() {
   return (neuron0x1deeff0()*0.779779);
}

double NNfunction_ss_sLcR::synapse0x1e023c0() {
   return (neuron0x1def330()*0.636228);
}

double NNfunction_ss_sLcR::synapse0x1e02400() {
   return (neuron0x1def670()*-1.19173);
}

double NNfunction_ss_sLcR::synapse0x1e02440() {
   return (neuron0x1def9b0()*-0.168746);
}

double NNfunction_ss_sLcR::synapse0x1e02480() {
   return (neuron0x1defcf0()*-0.0627376);
}

double NNfunction_ss_sLcR::synapse0x1e024c0() {
   return (neuron0x1df0030()*-0.462548);
}

double NNfunction_ss_sLcR::synapse0x1e01f50() {
   return (neuron0x1df0370()*-0.390852);
}

double NNfunction_ss_sLcR::synapse0x1e01f90() {
   return (neuron0x1df08d0()*0.0793573);
}

double NNfunction_ss_sLcR::synapse0x1e02610() {
   return (neuron0x1df0af0()*0.339793);
}

double NNfunction_ss_sLcR::synapse0x1e02650() {
   return (neuron0x1df0e30()*0.593038);
}

double NNfunction_ss_sLcR::synapse0x1e02690() {
   return (neuron0x1df1170()*-0.314519);
}

double NNfunction_ss_sLcR::synapse0x1e026d0() {
   return (neuron0x1df14b0()*0.41806);
}

double NNfunction_ss_sLcR::synapse0x1e02710() {
   return (neuron0x1df17f0()*-0.112002);
}

double NNfunction_ss_sLcR::synapse0x1e02750() {
   return (neuron0x1df1b30()*0.201152);
}

double NNfunction_ss_sLcR::synapse0x1e14620() {
   return (neuron0x1decf70()*-0.0401165);
}

double NNfunction_ss_sLcR::synapse0x1e14660() {
   return (neuron0x1ded2b0()*-0.0468077);
}

double NNfunction_ss_sLcR::synapse0x1e146a0() {
   return (neuron0x1ded5f0()*-0.0367455);
}

double NNfunction_ss_sLcR::synapse0x1e146e0() {
   return (neuron0x1ded930()*11.7956);
}

double NNfunction_ss_sLcR::synapse0x1e14720() {
   return (neuron0x1dedc70()*-0.115901);
}

double NNfunction_ss_sLcR::synapse0x1e14760() {
   return (neuron0x1dedfb0()*-0.0198962);
}

double NNfunction_ss_sLcR::synapse0x1e147a0() {
   return (neuron0x1dee2f0()*-0.0791585);
}

double NNfunction_ss_sLcR::synapse0x1e147e0() {
   return (neuron0x1dee630()*-0.0820385);
}

double NNfunction_ss_sLcR::synapse0x1e14820() {
   return (neuron0x1dee970()*-0.0229566);
}

double NNfunction_ss_sLcR::synapse0x1e14860() {
   return (neuron0x1deecb0()*-0.0222226);
}

double NNfunction_ss_sLcR::synapse0x1e148a0() {
   return (neuron0x1deeff0()*-0.0650455);
}

double NNfunction_ss_sLcR::synapse0x1e148e0() {
   return (neuron0x1def330()*-0.0728839);
}

double NNfunction_ss_sLcR::synapse0x1e14920() {
   return (neuron0x1def670()*0.259645);
}

double NNfunction_ss_sLcR::synapse0x1e14960() {
   return (neuron0x1def9b0()*0.0455349);
}

double NNfunction_ss_sLcR::synapse0x1e149a0() {
   return (neuron0x1defcf0()*-0.0415046);
}

double NNfunction_ss_sLcR::synapse0x1e149e0() {
   return (neuron0x1df0030()*0.213797);
}

double NNfunction_ss_sLcR::synapse0x1e02790() {
   return (neuron0x1df0370()*-0.0652697);
}

double NNfunction_ss_sLcR::synapse0x1e027d0() {
   return (neuron0x1df08d0()*-0.0558492);
}

double NNfunction_ss_sLcR::synapse0x1e14b30() {
   return (neuron0x1df0af0()*0.0369124);
}

double NNfunction_ss_sLcR::synapse0x1e14b70() {
   return (neuron0x1df0e30()*0.0117211);
}

double NNfunction_ss_sLcR::synapse0x1e14bb0() {
   return (neuron0x1df1170()*0.0428209);
}

double NNfunction_ss_sLcR::synapse0x1e14bf0() {
   return (neuron0x1df14b0()*0.0133477);
}

double NNfunction_ss_sLcR::synapse0x1e14c30() {
   return (neuron0x1df17f0()*0.0106899);
}

double NNfunction_ss_sLcR::synapse0x1e14c70() {
   return (neuron0x1df1b30()*0.0471676);
}

double NNfunction_ss_sLcR::synapse0x1e14ff0() {
   return (neuron0x1decf70()*0.00281807);
}

double NNfunction_ss_sLcR::synapse0x1e15030() {
   return (neuron0x1ded2b0()*0.00267784);
}

double NNfunction_ss_sLcR::synapse0x1e15070() {
   return (neuron0x1ded5f0()*-0.0374547);
}

double NNfunction_ss_sLcR::synapse0x1e150b0() {
   return (neuron0x1ded930()*-0.00719864);
}

double NNfunction_ss_sLcR::synapse0x1e150f0() {
   return (neuron0x1dedc70()*-0.00954538);
}

double NNfunction_ss_sLcR::synapse0x1e15130() {
   return (neuron0x1dedfb0()*-0.064563);
}

double NNfunction_ss_sLcR::synapse0x1e15170() {
   return (neuron0x1dee2f0()*-0.00852326);
}

double NNfunction_ss_sLcR::synapse0x1e151b0() {
   return (neuron0x1dee630()*-0.0412339);
}

double NNfunction_ss_sLcR::synapse0x1e151f0() {
   return (neuron0x1dee970()*-0.0134995);
}

double NNfunction_ss_sLcR::synapse0x1e15230() {
   return (neuron0x1deecb0()*-0.0141392);
}

double NNfunction_ss_sLcR::synapse0x1e15270() {
   return (neuron0x1deeff0()*-0.00932663);
}

double NNfunction_ss_sLcR::synapse0x1e152b0() {
   return (neuron0x1def330()*0.0274534);
}

double NNfunction_ss_sLcR::synapse0x1e152f0() {
   return (neuron0x1def670()*0.481221);
}

double NNfunction_ss_sLcR::synapse0x1e15330() {
   return (neuron0x1def9b0()*-0.00483999);
}

double NNfunction_ss_sLcR::synapse0x1e15370() {
   return (neuron0x1defcf0()*-0.0160403);
}

double NNfunction_ss_sLcR::synapse0x1e153b0() {
   return (neuron0x1df0030()*0.736593);
}

double NNfunction_ss_sLcR::synapse0x1e14e40() {
   return (neuron0x1df0370()*-0.011763);
}

double NNfunction_ss_sLcR::synapse0x1e14e80() {
   return (neuron0x1df08d0()*0.0112215);
}

double NNfunction_ss_sLcR::synapse0x1e15500() {
   return (neuron0x1df0af0()*-0.0120667);
}

double NNfunction_ss_sLcR::synapse0x1e15540() {
   return (neuron0x1df0e30()*0.0132113);
}

double NNfunction_ss_sLcR::synapse0x1e15580() {
   return (neuron0x1df1170()*-0.0220407);
}

double NNfunction_ss_sLcR::synapse0x1e155c0() {
   return (neuron0x1df14b0()*0.00294389);
}

double NNfunction_ss_sLcR::synapse0x1e15600() {
   return (neuron0x1df17f0()*0.00995746);
}

double NNfunction_ss_sLcR::synapse0x1e15640() {
   return (neuron0x1df1b30()*0.021641);
}

double NNfunction_ss_sLcR::synapse0x1e159c0() {
   return (neuron0x1decf70()*0.550294);
}

double NNfunction_ss_sLcR::synapse0x1e15a00() {
   return (neuron0x1ded2b0()*0.225038);
}

double NNfunction_ss_sLcR::synapse0x1e15a40() {
   return (neuron0x1ded5f0()*-0.458738);
}

double NNfunction_ss_sLcR::synapse0x1e15a80() {
   return (neuron0x1ded930()*-0.249403);
}

double NNfunction_ss_sLcR::synapse0x1e15ac0() {
   return (neuron0x1dedc70()*0.0124575);
}

double NNfunction_ss_sLcR::synapse0x1e15b00() {
   return (neuron0x1dedfb0()*0.197378);
}

double NNfunction_ss_sLcR::synapse0x1e15b40() {
   return (neuron0x1dee2f0()*-0.695353);
}

double NNfunction_ss_sLcR::synapse0x1e15b80() {
   return (neuron0x1dee630()*-0.557278);
}

double NNfunction_ss_sLcR::synapse0x1e15bc0() {
   return (neuron0x1dee970()*-0.528359);
}

double NNfunction_ss_sLcR::synapse0x1e15c00() {
   return (neuron0x1deecb0()*-0.663398);
}

double NNfunction_ss_sLcR::synapse0x1e15c40() {
   return (neuron0x1deeff0()*-0.0654059);
}

double NNfunction_ss_sLcR::synapse0x1e15c80() {
   return (neuron0x1def330()*-0.504737);
}

double NNfunction_ss_sLcR::synapse0x1e15cc0() {
   return (neuron0x1def670()*-0.0904873);
}

double NNfunction_ss_sLcR::synapse0x1e15d00() {
   return (neuron0x1def9b0()*0.682047);
}

double NNfunction_ss_sLcR::synapse0x1e15d40() {
   return (neuron0x1defcf0()*-0.384874);
}

double NNfunction_ss_sLcR::synapse0x1e15d80() {
   return (neuron0x1df0030()*-0.369838);
}

double NNfunction_ss_sLcR::synapse0x1e15810() {
   return (neuron0x1df0370()*-0.12805);
}

double NNfunction_ss_sLcR::synapse0x1e15850() {
   return (neuron0x1df08d0()*-0.0266668);
}

double NNfunction_ss_sLcR::synapse0x1e15ed0() {
   return (neuron0x1df0af0()*0.327638);
}

double NNfunction_ss_sLcR::synapse0x1e15f10() {
   return (neuron0x1df0e30()*-0.0775836);
}

double NNfunction_ss_sLcR::synapse0x1e15f50() {
   return (neuron0x1df1170()*-0.286297);
}

double NNfunction_ss_sLcR::synapse0x1e15f90() {
   return (neuron0x1df14b0()*0.012048);
}

double NNfunction_ss_sLcR::synapse0x1e15fd0() {
   return (neuron0x1df17f0()*0.0064876);
}

double NNfunction_ss_sLcR::synapse0x1e16010() {
   return (neuron0x1df1b30()*0.0038717);
}

double NNfunction_ss_sLcR::synapse0x1e16390() {
   return (neuron0x1decf70()*-0.0044595);
}

double NNfunction_ss_sLcR::synapse0x1e163d0() {
   return (neuron0x1ded2b0()*0.00787273);
}

double NNfunction_ss_sLcR::synapse0x1e16410() {
   return (neuron0x1ded5f0()*0.0138113);
}

double NNfunction_ss_sLcR::synapse0x1e16450() {
   return (neuron0x1ded930()*-0.0809132);
}

double NNfunction_ss_sLcR::synapse0x1e16490() {
   return (neuron0x1dedc70()*0.0652141);
}

double NNfunction_ss_sLcR::synapse0x1e164d0() {
   return (neuron0x1dedfb0()*0.00974323);
}

double NNfunction_ss_sLcR::synapse0x1e16510() {
   return (neuron0x1dee2f0()*0.0340256);
}

double NNfunction_ss_sLcR::synapse0x1e16550() {
   return (neuron0x1dee630()*0.0351858);
}

double NNfunction_ss_sLcR::synapse0x1e16590() {
   return (neuron0x1dee970()*-0.0235316);
}

double NNfunction_ss_sLcR::synapse0x1e165d0() {
   return (neuron0x1deecb0()*-0.00885853);
}

double NNfunction_ss_sLcR::synapse0x1e16610() {
   return (neuron0x1deeff0()*0.000577413);
}

double NNfunction_ss_sLcR::synapse0x1e16650() {
   return (neuron0x1def330()*0.0167339);
}

double NNfunction_ss_sLcR::synapse0x1e16690() {
   return (neuron0x1def670()*0.33697);
}

double NNfunction_ss_sLcR::synapse0x1e166d0() {
   return (neuron0x1def9b0()*-0.0154776);
}

double NNfunction_ss_sLcR::synapse0x1e16710() {
   return (neuron0x1defcf0()*0.0395134);
}

double NNfunction_ss_sLcR::synapse0x1e16750() {
   return (neuron0x1df0030()*-1.28168);
}

double NNfunction_ss_sLcR::synapse0x1e161e0() {
   return (neuron0x1df0370()*-0.020625);
}

double NNfunction_ss_sLcR::synapse0x1e16220() {
   return (neuron0x1df08d0()*-0.00676674);
}

double NNfunction_ss_sLcR::synapse0x1e168a0() {
   return (neuron0x1df0af0()*-0.0214786);
}

double NNfunction_ss_sLcR::synapse0x1e168e0() {
   return (neuron0x1df0e30()*-0.00988456);
}

double NNfunction_ss_sLcR::synapse0x1e16920() {
   return (neuron0x1df1170()*-0.0116705);
}

double NNfunction_ss_sLcR::synapse0x1e16960() {
   return (neuron0x1df14b0()*0.022647);
}

double NNfunction_ss_sLcR::synapse0x1e169a0() {
   return (neuron0x1df17f0()*0.0169119);
}

double NNfunction_ss_sLcR::synapse0x1e169e0() {
   return (neuron0x1df1b30()*-0.0188137);
}

double NNfunction_ss_sLcR::synapse0x1df2f80() {
   return (neuron0x1df1fd0()*0.170247);
}

double NNfunction_ss_sLcR::synapse0x1df2fc0() {
   return (neuron0x1df28e0()*-0.0363842);
}

double NNfunction_ss_sLcR::synapse0x1df4490() {
   return (neuron0x1df33c0()*0.502974);
}

double NNfunction_ss_sLcR::synapse0x1df44d0() {
   return (neuron0x1bb6790()*-0.0911117);
}

double NNfunction_ss_sLcR::synapse0x1df4e60() {
   return (neuron0x1df41e0()*0.0380932);
}

double NNfunction_ss_sLcR::synapse0x1df4ea0() {
   return (neuron0x1df4bb0()*0.220143);
}

double NNfunction_ss_sLcR::synapse0x1df5c30() {
   return (neuron0x1df5980()*0.0113213);
}

double NNfunction_ss_sLcR::synapse0x1df5c70() {
   return (neuron0x1df6350()*-0.0852957);
}

double NNfunction_ss_sLcR::synapse0x1df6600() {
   return (neuron0x1df6d20()*-1.04886);
}

double NNfunction_ss_sLcR::synapse0x1df6640() {
   return (neuron0x1df7800()*0.0935318);
}

double NNfunction_ss_sLcR::synapse0x1df6fd0() {
   return (neuron0x1df81d0()*-0.0890821);
}

double NNfunction_ss_sLcR::synapse0x1df7010() {
   return (neuron0x1df52b0()*-1.0192);
}

double NNfunction_ss_sLcR::synapse0x1df7ab0() {
   return (neuron0x1df9d80()*0.0822541);
}

double NNfunction_ss_sLcR::synapse0x1df7af0() {
   return (neuron0x1dfa750()*-0.125591);
}

double NNfunction_ss_sLcR::synapse0x1df8480() {
   return (neuron0x1dfb120()*-0.025676);
}

double NNfunction_ss_sLcR::synapse0x1df84c0() {
   return (neuron0x1dfbaf0()*-0.0067369);
}

double NNfunction_ss_sLcR::synapse0x1df5560() {
   return (neuron0x1dfd900()*-0.000893333);
}

double NNfunction_ss_sLcR::synapse0x1df55a0() {
   return (neuron0x1dfdbe0()*0.11545);
}

double NNfunction_ss_sLcR::synapse0x1dfa030() {
   return (neuron0x1dfe5b0()*3.72795);
}

double NNfunction_ss_sLcR::synapse0x1dfa070() {
   return (neuron0x1dfef80()*0.267331);
}

double NNfunction_ss_sLcR::synapse0x1dfaa00() {
   return (neuron0x1dff950()*0.0105404);
}

double NNfunction_ss_sLcR::synapse0x1dfaa40() {
   return (neuron0x1e00320()*0.133501);
}

double NNfunction_ss_sLcR::synapse0x1dfb3d0() {
   return (neuron0x1df8e70()*-0.0372627);
}

double NNfunction_ss_sLcR::synapse0x1dfb410() {
   return (neuron0x1df9840()*-0.330678);
}

double NNfunction_ss_sLcR::synapse0x1dfbda0() {
   return (neuron0x1e030b0()*0.0539551);
}

double NNfunction_ss_sLcR::synapse0x1dfbde0() {
   return (neuron0x1e03a80()*0.149935);
}

double NNfunction_ss_sLcR::synapse0x1deff10() {
   return (neuron0x1e04450()*-0.0497635);
}

double NNfunction_ss_sLcR::synapse0x1deff50() {
   return (neuron0x1e04e20()*0.26548);
}

double NNfunction_ss_sLcR::synapse0x1dfde90() {
   return (neuron0x1e057f0()*-1.19152);
}

double NNfunction_ss_sLcR::synapse0x1dfded0() {
   return (neuron0x1e061c0()*-0.0851623);
}

double NNfunction_ss_sLcR::synapse0x1dfe860() {
   return (neuron0x1e06b90()*0.525396);
}

double NNfunction_ss_sLcR::synapse0x1dfe8a0() {
   return (neuron0x1e07560()*0.0540186);
}

double NNfunction_ss_sLcR::synapse0x1dff230() {
   return (neuron0x1dfd5f0()*-0.0762115);
}

double NNfunction_ss_sLcR::synapse0x1dff270() {
   return (neuron0x1e0a140()*0.870132);
}

double NNfunction_ss_sLcR::synapse0x1dffc00() {
   return (neuron0x1e0ab10()*-0.16277);
}

double NNfunction_ss_sLcR::synapse0x1dffc40() {
   return (neuron0x1e0b4e0()*-1.49397);
}

double NNfunction_ss_sLcR::synapse0x1e005d0() {
   return (neuron0x1e0beb0()*0.0473173);
}

double NNfunction_ss_sLcR::synapse0x1e00610() {
   return (neuron0x1e0c880()*-1.18225);
}

double NNfunction_ss_sLcR::synapse0x1df9120() {
   return (neuron0x1e0d250()*0.0937529);
}

double NNfunction_ss_sLcR::synapse0x1df9160() {
   return (neuron0x1e0dc20()*-0.390208);
}

double NNfunction_ss_sLcR::synapse0x1e029d0() {
   return (neuron0x1e0e5f0()*-0.128025);
}

double NNfunction_ss_sLcR::synapse0x1e02a10() {
   return (neuron0x1e0f1d0()*-0.271872);
}

double NNfunction_ss_sLcR::synapse0x1e03360() {
   return (neuron0x1e0fba0()*0.549104);
}

double NNfunction_ss_sLcR::synapse0x1e033a0() {
   return (neuron0x1e00a20()*0.119327);
}

double NNfunction_ss_sLcR::synapse0x1e03d30() {
   return (neuron0x1e013f0()*0.0408633);
}

double NNfunction_ss_sLcR::synapse0x1e03d70() {
   return (neuron0x1e01dc0()*0.202622);
}

double NNfunction_ss_sLcR::synapse0x1e04700() {
   return (neuron0x1e14400()*-2.78873);
}

double NNfunction_ss_sLcR::synapse0x1e04740() {
   return (neuron0x1e14cb0()*-1.85911);
}

double NNfunction_ss_sLcR::synapse0x1e050d0() {
   return (neuron0x1e15680()*-0.0591476);
}

double NNfunction_ss_sLcR::synapse0x1e05110() {
   return (neuron0x1e16050()*0.645186);
}

double NNfunction_ss_sLcR::synapse0x1e07810() {
   return (neuron0x1df1fd0()*0.959925);
}

double NNfunction_ss_sLcR::synapse0x1e07850() {
   return (neuron0x1df28e0()*0.462899);
}

double NNfunction_ss_sLcR::synapse0x1dfcdd0() {
   return (neuron0x1df33c0()*-0.924247);
}

double NNfunction_ss_sLcR::synapse0x1dfce10() {
   return (neuron0x1bb6790()*-0.584086);
}

double NNfunction_ss_sLcR::synapse0x1e0a3f0() {
   return (neuron0x1df41e0()*0.0437176);
}

double NNfunction_ss_sLcR::synapse0x1e0a430() {
   return (neuron0x1df4bb0()*-0.0473992);
}

double NNfunction_ss_sLcR::synapse0x1e0adc0() {
   return (neuron0x1df5980()*-0.859033);
}

double NNfunction_ss_sLcR::synapse0x1e0ae00() {
   return (neuron0x1df6350()*0.70982);
}

double NNfunction_ss_sLcR::synapse0x1e0b790() {
   return (neuron0x1df6d20()*1.62897);
}

double NNfunction_ss_sLcR::synapse0x1e0b7d0() {
   return (neuron0x1df7800()*0.453118);
}

double NNfunction_ss_sLcR::synapse0x1e0c160() {
   return (neuron0x1df81d0()*-2.33769);
}

double NNfunction_ss_sLcR::synapse0x1e0c1a0() {
   return (neuron0x1df52b0()*5.39121);
}

double NNfunction_ss_sLcR::synapse0x1e0cb30() {
   return (neuron0x1df9d80()*0.163969);
}

double NNfunction_ss_sLcR::synapse0x1e0cb70() {
   return (neuron0x1dfa750()*0.514945);
}

double NNfunction_ss_sLcR::synapse0x1e0d500() {
   return (neuron0x1dfb120()*0.0102023);
}

double NNfunction_ss_sLcR::synapse0x1e0d540() {
   return (neuron0x1dfbaf0()*-0.462936);
}

double NNfunction_ss_sLcR::synapse0x1e0ded0() {
   return (neuron0x1dfd900()*-4.06459);
}

double NNfunction_ss_sLcR::synapse0x1e0df10() {
   return (neuron0x1dfdbe0()*-1.76187);
}

double NNfunction_ss_sLcR::synapse0x1e0e8a0() {
   return (neuron0x1dfe5b0()*1.87703);
}

double NNfunction_ss_sLcR::synapse0x1e0e8e0() {
   return (neuron0x1dfef80()*0.529067);
}

double NNfunction_ss_sLcR::synapse0x1e0f480() {
   return (neuron0x1dff950()*0.0412715);
}

double NNfunction_ss_sLcR::synapse0x1e0f4c0() {
   return (neuron0x1e00320()*-0.605423);
}

double NNfunction_ss_sLcR::synapse0x1e0fe50() {
   return (neuron0x1df8e70()*-1.46045);
}

double NNfunction_ss_sLcR::synapse0x1e0fe90() {
   return (neuron0x1df9840()*-1.50339);
}

double NNfunction_ss_sLcR::synapse0x1e00cd0() {
   return (neuron0x1e030b0()*-2.18228);
}

double NNfunction_ss_sLcR::synapse0x1e00d10() {
   return (neuron0x1e03a80()*-1.02935);
}

double NNfunction_ss_sLcR::synapse0x1e016a0() {
   return (neuron0x1e04450()*-1.03023);
}

double NNfunction_ss_sLcR::synapse0x1e016e0() {
   return (neuron0x1e04e20()*4.52824);
}

double NNfunction_ss_sLcR::synapse0x1e02070() {
   return (neuron0x1e057f0()*1.60213);
}

double NNfunction_ss_sLcR::synapse0x1e020b0() {
   return (neuron0x1e061c0()*1.13816);
}

double NNfunction_ss_sLcR::synapse0x1e14590() {
   return (neuron0x1e06b90()*-0.361477);
}

double NNfunction_ss_sLcR::synapse0x1e145d0() {
   return (neuron0x1e07560()*0.0229156);
}

double NNfunction_ss_sLcR::synapse0x1e14f60() {
   return (neuron0x1dfd5f0()*0.934085);
}

double NNfunction_ss_sLcR::synapse0x1e14fa0() {
   return (neuron0x1e0a140()*-0.854524);
}

double NNfunction_ss_sLcR::synapse0x1e15930() {
   return (neuron0x1e0ab10()*-0.419698);
}

double NNfunction_ss_sLcR::synapse0x1e15970() {
   return (neuron0x1e0b4e0()*0.254067);
}

double NNfunction_ss_sLcR::synapse0x1e16300() {
   return (neuron0x1e0beb0()*-0.541152);
}

double NNfunction_ss_sLcR::synapse0x1e16340() {
   return (neuron0x1e0c880()*-2.5706);
}

double NNfunction_ss_sLcR::synapse0x1df21f0() {
   return (neuron0x1e0d250()*-0.819635);
}

double NNfunction_ss_sLcR::synapse0x1df2230() {
   return (neuron0x1e0dc20()*-0.00947607);
}

double NNfunction_ss_sLcR::synapse0x1e05aa0() {
   return (neuron0x1e0e5f0()*3.58038);
}

double NNfunction_ss_sLcR::synapse0x1e05ae0() {
   return (neuron0x1e0f1d0()*0.79141);
}

double NNfunction_ss_sLcR::synapse0x1e16a20() {
   return (neuron0x1e0fba0()*1.08019);
}

double NNfunction_ss_sLcR::synapse0x1e16a60() {
   return (neuron0x1e00a20()*0.476325);
}

double NNfunction_ss_sLcR::synapse0x1e16aa0() {
   return (neuron0x1e013f0()*-0.670161);
}

double NNfunction_ss_sLcR::synapse0x1e16ae0() {
   return (neuron0x1e01dc0()*0.848108);
}

double NNfunction_ss_sLcR::synapse0x1e1d990() {
   return (neuron0x1e14400()*1.6715);
}

double NNfunction_ss_sLcR::synapse0x1e1d9d0() {
   return (neuron0x1e14cb0()*1.42252);
}

double NNfunction_ss_sLcR::synapse0x1e1da10() {
   return (neuron0x1e15680()*0.453674);
}

double NNfunction_ss_sLcR::synapse0x1e1da50() {
   return (neuron0x1e16050()*-0.612683);
}

double NNfunction_ss_sLcR::synapse0x1e1ddd0() {
   return (neuron0x1df1fd0()*-0.166536);
}

double NNfunction_ss_sLcR::synapse0x1e1de10() {
   return (neuron0x1df28e0()*-0.770507);
}

double NNfunction_ss_sLcR::synapse0x1e1de50() {
   return (neuron0x1df33c0()*-0.0471249);
}

double NNfunction_ss_sLcR::synapse0x1e1de90() {
   return (neuron0x1bb6790()*-0.737818);
}

double NNfunction_ss_sLcR::synapse0x1e1ded0() {
   return (neuron0x1df41e0()*2.1817);
}

double NNfunction_ss_sLcR::synapse0x1e1df10() {
   return (neuron0x1df4bb0()*-0.796403);
}

double NNfunction_ss_sLcR::synapse0x1e1df50() {
   return (neuron0x1df5980()*-0.438847);
}

double NNfunction_ss_sLcR::synapse0x1e1df90() {
   return (neuron0x1df6350()*-0.396374);
}

double NNfunction_ss_sLcR::synapse0x1e1dfd0() {
   return (neuron0x1df6d20()*-1.16818);
}

double NNfunction_ss_sLcR::synapse0x1e1e010() {
   return (neuron0x1df7800()*0.464259);
}

double NNfunction_ss_sLcR::synapse0x1e1e050() {
   return (neuron0x1df81d0()*-0.517615);
}

double NNfunction_ss_sLcR::synapse0x1e1e090() {
   return (neuron0x1df52b0()*-1.71191);
}

double NNfunction_ss_sLcR::synapse0x1e1e0d0() {
   return (neuron0x1df9d80()*-1.18359);
}

double NNfunction_ss_sLcR::synapse0x1e1e110() {
   return (neuron0x1dfa750()*0.802666);
}

double NNfunction_ss_sLcR::synapse0x1e1e150() {
   return (neuron0x1dfb120()*0.22359);
}

double NNfunction_ss_sLcR::synapse0x1e1e190() {
   return (neuron0x1dfbaf0()*0.931323);
}

double NNfunction_ss_sLcR::synapse0x1e1dc20() {
   return (neuron0x1dfd900()*-0.14796);
}

double NNfunction_ss_sLcR::synapse0x1e1dc60() {
   return (neuron0x1dfdbe0()*-1.69714);
}

double NNfunction_ss_sLcR::synapse0x1e1e2e0() {
   return (neuron0x1dfe5b0()*-1.00137);
}

double NNfunction_ss_sLcR::synapse0x1e1e320() {
   return (neuron0x1dfef80()*0.753302);
}

double NNfunction_ss_sLcR::synapse0x1e1e360() {
   return (neuron0x1dff950()*0.678411);
}

double NNfunction_ss_sLcR::synapse0x1e1e3a0() {
   return (neuron0x1e00320()*0.517033);
}

double NNfunction_ss_sLcR::synapse0x1e1e3e0() {
   return (neuron0x1df8e70()*-0.729804);
}

double NNfunction_ss_sLcR::synapse0x1e1e420() {
   return (neuron0x1df9840()*-1.31356);
}

double NNfunction_ss_sLcR::synapse0x1e1e460() {
   return (neuron0x1e030b0()*0.412794);
}

double NNfunction_ss_sLcR::synapse0x1e1e4a0() {
   return (neuron0x1e03a80()*-1.39119);
}

double NNfunction_ss_sLcR::synapse0x1e1e4e0() {
   return (neuron0x1e04450()*-0.18989);
}

double NNfunction_ss_sLcR::synapse0x1e1e520() {
   return (neuron0x1e04e20()*-0.4325);
}

double NNfunction_ss_sLcR::synapse0x1e1e560() {
   return (neuron0x1e057f0()*0.392933);
}

double NNfunction_ss_sLcR::synapse0x1e1e5a0() {
   return (neuron0x1e061c0()*0.0326366);
}

double NNfunction_ss_sLcR::synapse0x1e1e5e0() {
   return (neuron0x1e06b90()*-1.47092);
}

double NNfunction_ss_sLcR::synapse0x1e1e620() {
   return (neuron0x1e07560()*0.782042);
}

double NNfunction_ss_sLcR::synapse0x1e1e1d0() {
   return (neuron0x1dfd5f0()*1.73294);
}

double NNfunction_ss_sLcR::synapse0x1e1e210() {
   return (neuron0x1e0a140()*6.47457);
}

double NNfunction_ss_sLcR::synapse0x1e1e250() {
   return (neuron0x1e0ab10()*1.17715);
}

double NNfunction_ss_sLcR::synapse0x1e1e290() {
   return (neuron0x1e0b4e0()*1.75423);
}

double NNfunction_ss_sLcR::synapse0x1e1e870() {
   return (neuron0x1e0beb0()*-1.00604);
}

double NNfunction_ss_sLcR::synapse0x1e1e8b0() {
   return (neuron0x1e0c880()*-2.2846);
}

double NNfunction_ss_sLcR::synapse0x1e1e8f0() {
   return (neuron0x1e0d250()*-0.679418);
}

double NNfunction_ss_sLcR::synapse0x1e1e930() {
   return (neuron0x1e0dc20()*-1.41179);
}

double NNfunction_ss_sLcR::synapse0x1e1e970() {
   return (neuron0x1e0e5f0()*-1.02998);
}

double NNfunction_ss_sLcR::synapse0x1e1e9b0() {
   return (neuron0x1e0f1d0()*0.78738);
}

double NNfunction_ss_sLcR::synapse0x1e1e9f0() {
   return (neuron0x1e0fba0()*-1.9063);
}

double NNfunction_ss_sLcR::synapse0x1e1ea30() {
   return (neuron0x1e00a20()*0.632259);
}

double NNfunction_ss_sLcR::synapse0x1e1ea70() {
   return (neuron0x1e013f0()*-0.595438);
}

double NNfunction_ss_sLcR::synapse0x1e1eab0() {
   return (neuron0x1e01dc0()*-0.204592);
}

double NNfunction_ss_sLcR::synapse0x1e1eaf0() {
   return (neuron0x1e14400()*2.22355);
}

double NNfunction_ss_sLcR::synapse0x1e1eb30() {
   return (neuron0x1e14cb0()*-1.5865);
}

double NNfunction_ss_sLcR::synapse0x1e1eb70() {
   return (neuron0x1e15680()*-0.50126);
}

double NNfunction_ss_sLcR::synapse0x1e1ebb0() {
   return (neuron0x1e16050()*-0.263436);
}

double NNfunction_ss_sLcR::synapse0x1e1ef30() {
   return (neuron0x1df1fd0()*0.592043);
}

double NNfunction_ss_sLcR::synapse0x1e1ef70() {
   return (neuron0x1df28e0()*-0.10833);
}

double NNfunction_ss_sLcR::synapse0x1e1efb0() {
   return (neuron0x1df33c0()*0.393559);
}

double NNfunction_ss_sLcR::synapse0x1e1eff0() {
   return (neuron0x1bb6790()*0.554551);
}

double NNfunction_ss_sLcR::synapse0x1e1f030() {
   return (neuron0x1df41e0()*0.277837);
}

double NNfunction_ss_sLcR::synapse0x1e1f070() {
   return (neuron0x1df4bb0()*-0.0842506);
}

double NNfunction_ss_sLcR::synapse0x1e1f0b0() {
   return (neuron0x1df5980()*0.200307);
}

double NNfunction_ss_sLcR::synapse0x1e1f0f0() {
   return (neuron0x1df6350()*0.159667);
}

double NNfunction_ss_sLcR::synapse0x1e1f130() {
   return (neuron0x1df6d20()*0.559263);
}

double NNfunction_ss_sLcR::synapse0x1e1f170() {
   return (neuron0x1df7800()*0.533215);
}

double NNfunction_ss_sLcR::synapse0x1e1f1b0() {
   return (neuron0x1df81d0()*0.424204);
}

double NNfunction_ss_sLcR::synapse0x1e1f1f0() {
   return (neuron0x1df52b0()*0.298207);
}

double NNfunction_ss_sLcR::synapse0x1e1f230() {
   return (neuron0x1df9d80()*0.10149);
}

double NNfunction_ss_sLcR::synapse0x1e1f270() {
   return (neuron0x1dfa750()*0.384865);
}

double NNfunction_ss_sLcR::synapse0x1e1f2b0() {
   return (neuron0x1dfb120()*0.718248);
}

double NNfunction_ss_sLcR::synapse0x1e1f2f0() {
   return (neuron0x1dfbaf0()*0.846433);
}

double NNfunction_ss_sLcR::synapse0x1e1ed80() {
   return (neuron0x1dfd900()*-0.308119);
}

double NNfunction_ss_sLcR::synapse0x1e1edc0() {
   return (neuron0x1dfdbe0()*-0.20801);
}

double NNfunction_ss_sLcR::synapse0x1e1f440() {
   return (neuron0x1dfe5b0()*0.119646);
}

double NNfunction_ss_sLcR::synapse0x1e1f480() {
   return (neuron0x1dfef80()*0.109514);
}

double NNfunction_ss_sLcR::synapse0x1e1f4c0() {
   return (neuron0x1dff950()*-0.0172096);
}

double NNfunction_ss_sLcR::synapse0x1e1f500() {
   return (neuron0x1e00320()*-0.312909);
}

double NNfunction_ss_sLcR::synapse0x1e1f540() {
   return (neuron0x1df8e70()*0.105941);
}

double NNfunction_ss_sLcR::synapse0x1e1f580() {
   return (neuron0x1df9840()*0.249506);
}

double NNfunction_ss_sLcR::synapse0x1e1f5c0() {
   return (neuron0x1e030b0()*0.501649);
}

double NNfunction_ss_sLcR::synapse0x1e1f600() {
   return (neuron0x1e03a80()*0.787763);
}

double NNfunction_ss_sLcR::synapse0x1e1f640() {
   return (neuron0x1e04450()*0.623362);
}

double NNfunction_ss_sLcR::synapse0x1e1f680() {
   return (neuron0x1e04e20()*0.442132);
}

double NNfunction_ss_sLcR::synapse0x1e1f6c0() {
   return (neuron0x1e057f0()*0.161921);
}

double NNfunction_ss_sLcR::synapse0x1e1f700() {
   return (neuron0x1e061c0()*-0.261029);
}

double NNfunction_ss_sLcR::synapse0x1e1f740() {
   return (neuron0x1e06b90()*0.290414);
}

double NNfunction_ss_sLcR::synapse0x1e1f780() {
   return (neuron0x1e07560()*0.338791);
}

double NNfunction_ss_sLcR::synapse0x1e1f330() {
   return (neuron0x1dfd5f0()*0.165381);
}

double NNfunction_ss_sLcR::synapse0x1e1f370() {
   return (neuron0x1e0a140()*0.168129);
}

double NNfunction_ss_sLcR::synapse0x1e1f3b0() {
   return (neuron0x1e0ab10()*0.539786);
}

double NNfunction_ss_sLcR::synapse0x1e1f3f0() {
   return (neuron0x1e0b4e0()*0.442075);
}

double NNfunction_ss_sLcR::synapse0x1e1f9d0() {
   return (neuron0x1e0beb0()*0.0347597);
}

double NNfunction_ss_sLcR::synapse0x1e1fa10() {
   return (neuron0x1e0c880()*0.548792);
}

double NNfunction_ss_sLcR::synapse0x1e1fa50() {
   return (neuron0x1e0d250()*0.100482);
}

double NNfunction_ss_sLcR::synapse0x1e1fa90() {
   return (neuron0x1e0dc20()*0.668976);
}

double NNfunction_ss_sLcR::synapse0x1e1fad0() {
   return (neuron0x1e0e5f0()*0.370017);
}

double NNfunction_ss_sLcR::synapse0x1e1fb10() {
   return (neuron0x1e0f1d0()*0.647045);
}

double NNfunction_ss_sLcR::synapse0x1e1fb50() {
   return (neuron0x1e0fba0()*0.919567);
}

double NNfunction_ss_sLcR::synapse0x1e1fb90() {
   return (neuron0x1e00a20()*0.827229);
}

double NNfunction_ss_sLcR::synapse0x1e1fbd0() {
   return (neuron0x1e013f0()*0.679044);
}

double NNfunction_ss_sLcR::synapse0x1e1fc10() {
   return (neuron0x1e01dc0()*0.351244);
}

double NNfunction_ss_sLcR::synapse0x1e1fc50() {
   return (neuron0x1e14400()*0.318969);
}

double NNfunction_ss_sLcR::synapse0x1e1fc90() {
   return (neuron0x1e14cb0()*0.43639);
}

double NNfunction_ss_sLcR::synapse0x1e1fcd0() {
   return (neuron0x1e15680()*0.262353);
}

double NNfunction_ss_sLcR::synapse0x1e1fd10() {
   return (neuron0x1e16050()*0.115394);
}

double NNfunction_ss_sLcR::synapse0x1e20090() {
   return (neuron0x1df1fd0()*-0.591229);
}

double NNfunction_ss_sLcR::synapse0x1e200d0() {
   return (neuron0x1df28e0()*0.166697);
}

double NNfunction_ss_sLcR::synapse0x1e20110() {
   return (neuron0x1df33c0()*0.290926);
}

double NNfunction_ss_sLcR::synapse0x1e20150() {
   return (neuron0x1bb6790()*0.245175);
}

double NNfunction_ss_sLcR::synapse0x1e20190() {
   return (neuron0x1df41e0()*-0.150896);
}

double NNfunction_ss_sLcR::synapse0x1e201d0() {
   return (neuron0x1df4bb0()*-0.35027);
}

double NNfunction_ss_sLcR::synapse0x1e20210() {
   return (neuron0x1df5980()*-0.0940991);
}

double NNfunction_ss_sLcR::synapse0x1e20250() {
   return (neuron0x1df6350()*0.289395);
}

double NNfunction_ss_sLcR::synapse0x1e20290() {
   return (neuron0x1df6d20()*0.021327);
}

double NNfunction_ss_sLcR::synapse0x1e202d0() {
   return (neuron0x1df7800()*-0.210973);
}

double NNfunction_ss_sLcR::synapse0x1e20310() {
   return (neuron0x1df81d0()*-0.00394913);
}

double NNfunction_ss_sLcR::synapse0x1e20350() {
   return (neuron0x1df52b0()*0.259197);
}

double NNfunction_ss_sLcR::synapse0x1e20390() {
   return (neuron0x1df9d80()*0.0901514);
}

double NNfunction_ss_sLcR::synapse0x1e203d0() {
   return (neuron0x1dfa750()*0.289451);
}

double NNfunction_ss_sLcR::synapse0x1e20410() {
   return (neuron0x1dfb120()*-0.585415);
}

double NNfunction_ss_sLcR::synapse0x1e20450() {
   return (neuron0x1dfbaf0()*-0.22648);
}

double NNfunction_ss_sLcR::synapse0x1e1fee0() {
   return (neuron0x1dfd900()*0.217261);
}

double NNfunction_ss_sLcR::synapse0x1e1ff20() {
   return (neuron0x1dfdbe0()*-0.30112);
}

double NNfunction_ss_sLcR::synapse0x1e205a0() {
   return (neuron0x1dfe5b0()*1.07546);
}

double NNfunction_ss_sLcR::synapse0x1e205e0() {
   return (neuron0x1dfef80()*-0.490727);
}

double NNfunction_ss_sLcR::synapse0x1e20620() {
   return (neuron0x1dff950()*-0.0553623);
}

double NNfunction_ss_sLcR::synapse0x1e20660() {
   return (neuron0x1e00320()*-0.259703);
}

double NNfunction_ss_sLcR::synapse0x1e206a0() {
   return (neuron0x1df8e70()*-0.013077);
}

double NNfunction_ss_sLcR::synapse0x1e206e0() {
   return (neuron0x1df9840()*0.700812);
}

double NNfunction_ss_sLcR::synapse0x1e20720() {
   return (neuron0x1e030b0()*0.678793);
}

double NNfunction_ss_sLcR::synapse0x1e20760() {
   return (neuron0x1e03a80()*-0.250451);
}

double NNfunction_ss_sLcR::synapse0x1e207a0() {
   return (neuron0x1e04450()*-0.0122477);
}

double NNfunction_ss_sLcR::synapse0x1e207e0() {
   return (neuron0x1e04e20()*-0.909962);
}

double NNfunction_ss_sLcR::synapse0x1e20820() {
   return (neuron0x1e057f0()*-1.07671);
}

double NNfunction_ss_sLcR::synapse0x1e20860() {
   return (neuron0x1e061c0()*0.320796);
}

double NNfunction_ss_sLcR::synapse0x1e208a0() {
   return (neuron0x1e06b90()*-0.48159);
}

double NNfunction_ss_sLcR::synapse0x1e208e0() {
   return (neuron0x1e07560()*-0.178038);
}

double NNfunction_ss_sLcR::synapse0x1e20490() {
   return (neuron0x1dfd5f0()*0.0812096);
}

double NNfunction_ss_sLcR::synapse0x1e204d0() {
   return (neuron0x1e0a140()*-0.648675);
}

double NNfunction_ss_sLcR::synapse0x1e20510() {
   return (neuron0x1e0ab10()*0.19832);
}

double NNfunction_ss_sLcR::synapse0x1e20550() {
   return (neuron0x1e0b4e0()*-1.12643);
}

double NNfunction_ss_sLcR::synapse0x1e20b30() {
   return (neuron0x1e0beb0()*-0.0697889);
}

double NNfunction_ss_sLcR::synapse0x1e20b70() {
   return (neuron0x1e0c880()*-0.344825);
}

double NNfunction_ss_sLcR::synapse0x1e20bb0() {
   return (neuron0x1e0d250()*-0.211551);
}

double NNfunction_ss_sLcR::synapse0x1e20bf0() {
   return (neuron0x1e0dc20()*0.889544);
}

double NNfunction_ss_sLcR::synapse0x1e20c30() {
   return (neuron0x1e0e5f0()*0.683975);
}

double NNfunction_ss_sLcR::synapse0x1e20c70() {
   return (neuron0x1e0f1d0()*0.605281);
}

double NNfunction_ss_sLcR::synapse0x1e20cb0() {
   return (neuron0x1e0fba0()*-0.934163);
}

double NNfunction_ss_sLcR::synapse0x1e20cf0() {
   return (neuron0x1e00a20()*-0.277533);
}

double NNfunction_ss_sLcR::synapse0x1e20d30() {
   return (neuron0x1e013f0()*-0.104628);
}

double NNfunction_ss_sLcR::synapse0x1e20d70() {
   return (neuron0x1e01dc0()*-0.33094);
}

double NNfunction_ss_sLcR::synapse0x1e20db0() {
   return (neuron0x1e14400()*-2.19378);
}

double NNfunction_ss_sLcR::synapse0x1e20df0() {
   return (neuron0x1e14cb0()*-0.498382);
}

double NNfunction_ss_sLcR::synapse0x1e20e30() {
   return (neuron0x1e15680()*0.203166);
}

double NNfunction_ss_sLcR::synapse0x1e20e70() {
   return (neuron0x1e16050()*0.672251);
}

double NNfunction_ss_sLcR::synapse0x1df1f90() {
   return (neuron0x1e1d250()*6.35673);
}

double NNfunction_ss_sLcR::synapse0x1e210d0() {
   return (neuron0x1e1d5f0()*-8.50302);
}

double NNfunction_ss_sLcR::synapse0x1e21110() {
   return (neuron0x1e1da90()*6.03248);
}

double NNfunction_ss_sLcR::synapse0x1e21150() {
   return (neuron0x1e1ebf0()*1.55516);
}

double NNfunction_ss_sLcR::synapse0x1e21190() {
   return (neuron0x1e1fd50()*3.02737);
}

