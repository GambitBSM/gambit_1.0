#include "NNfunction_ns_chiPlus1_uL.h"
#include <cmath>

double NNfunction_ns_chiPlus1_uL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2529)/15.1419;
   input1 = (in1 - 26.9344)/961.638;
   input2 = (in2 - 427.49)/489.3;
   input3 = (in3 - 133.936)/736.227;
   input4 = (in4 - 903.245)/839.915;
   input5 = (in5 - 776.044)/821.804;
   input6 = (in6 - 773.395)/816.879;
   input7 = (in7 - 781.734)/805.064;
   input8 = (in8 - 788.011)/849.713;
   input9 = (in9 - 779.959)/838.325;
   input10 = (in10 - 809.497)/847.869;
   input11 = (in11 - 395.395)/309.231;
   input12 = (in12 - 715.459)/734.491;
   input13 = (in13 - 522.928)/443.179;
   input14 = (in14 - 701.411)/681.314;
   input15 = (in15 - 707.006)/684.622;
   input16 = (in16 - 503.378)/468.864;
   input17 = (in17 - 737.772)/764.389;
   input18 = (in18 - 738.775)/767.212;
   input19 = (in19 - 751.415)/741.726;
   input20 = (in20 - -112.532)/456.59;
   input21 = (in21 - -145.363)/1029.32;
   input22 = (in22 - 0.185535)/1046.3;
   input23 = (in23 - -74.8308)/546.251;
   switch(index) {
     case 0:
         return neuron0x2063d00();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiPlus1_uL::Value(int index, double* input) {
   input0 = (input[0] - 23.2529)/15.1419;
   input1 = (input[1] - 26.9344)/961.638;
   input2 = (input[2] - 427.49)/489.3;
   input3 = (input[3] - 133.936)/736.227;
   input4 = (input[4] - 903.245)/839.915;
   input5 = (input[5] - 776.044)/821.804;
   input6 = (input[6] - 773.395)/816.879;
   input7 = (input[7] - 781.734)/805.064;
   input8 = (input[8] - 788.011)/849.713;
   input9 = (input[9] - 779.959)/838.325;
   input10 = (input[10] - 809.497)/847.869;
   input11 = (input[11] - 395.395)/309.231;
   input12 = (input[12] - 715.459)/734.491;
   input13 = (input[13] - 522.928)/443.179;
   input14 = (input[14] - 701.411)/681.314;
   input15 = (input[15] - 707.006)/684.622;
   input16 = (input[16] - 503.378)/468.864;
   input17 = (input[17] - 737.772)/764.389;
   input18 = (input[18] - 738.775)/767.212;
   input19 = (input[19] - 751.415)/741.726;
   input20 = (input[20] - -112.532)/456.59;
   input21 = (input[21] - -145.363)/1029.32;
   input22 = (input[22] - 0.185535)/1046.3;
   input23 = (input[23] - -74.8308)/546.251;
   switch(index) {
     case 0:
         return neuron0x2063d00();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiPlus1_uL::neuron0x202fdf0() {
   return input0;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2030130() {
   return input1;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2030470() {
   return input2;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20307b0() {
   return input3;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2030af0() {
   return input4;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2030e30() {
   return input5;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2031170() {
   return input6;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20314b0() {
   return input7;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20317f0() {
   return input8;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2031b30() {
   return input9;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2031e70() {
   return input10;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20321b0() {
   return input11;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20324f0() {
   return input12;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2032830() {
   return input13;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2032b70() {
   return input14;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2032eb0() {
   return input15;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20331f0() {
   return input16;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2033750() {
   return input17;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2033970() {
   return input18;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2033cb0() {
   return input19;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2033ff0() {
   return input20;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2034330() {
   return input21;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2034670() {
   return input22;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20349b0() {
   return input23;
}

double NNfunction_ns_chiPlus1_uL::input0x2034e20() {
   double input = -2.97136;
   input += synapse0x202fcb0();
   input += synapse0x202fcf0();
   input += synapse0x20350d0();
   input += synapse0x2035110();
   input += synapse0x2035150();
   input += synapse0x2035190();
   input += synapse0x20351d0();
   input += synapse0x2035210();
   input += synapse0x2035250();
   input += synapse0x2035290();
   input += synapse0x20352d0();
   input += synapse0x2035310();
   input += synapse0x2035350();
   input += synapse0x2035390();
   input += synapse0x20353d0();
   input += synapse0x2035410();
   input += synapse0x202fc20();
   input += synapse0x202fc60();
   input += synapse0x1deafe0();
   input += synapse0x1deb020();
   input += synapse0x2035670();
   input += synapse0x20356b0();
   input += synapse0x20356f0();
   input += synapse0x2035730();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2034e20() {
   double input = input0x2034e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2035770() {
   double input = -0.956105;
   input += synapse0x2035ab0();
   input += synapse0x2035af0();
   input += synapse0x2035b30();
   input += synapse0x2035b70();
   input += synapse0x2035bb0();
   input += synapse0x2035bf0();
   input += synapse0x2035c30();
   input += synapse0x2035c70();
   input += synapse0x2035cb0();
   input += synapse0x2035560();
   input += synapse0x20355a0();
   input += synapse0x20355e0();
   input += synapse0x2035620();
   input += synapse0x2035f00();
   input += synapse0x2035f40();
   input += synapse0x2035f80();
   input += synapse0x2035900();
   input += synapse0x2035940();
   input += synapse0x20360d0();
   input += synapse0x2036110();
   input += synapse0x2036150();
   input += synapse0x2036190();
   input += synapse0x20361d0();
   input += synapse0x2036210();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2035770() {
   double input = input0x2035770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2036250() {
   double input = 0.786124;
   input += synapse0x2036590();
   input += synapse0x20365d0();
   input += synapse0x2036610();
   input += synapse0x2036650();
   input += synapse0x2036690();
   input += synapse0x20366d0();
   input += synapse0x2036710();
   input += synapse0x2036750();
   input += synapse0x2036790();
   input += synapse0x20367d0();
   input += synapse0x2036810();
   input += synapse0x2036850();
   input += synapse0x2036890();
   input += synapse0x20368d0();
   input += synapse0x2036910();
   input += synapse0x2036950();
   input += synapse0x20363e0();
   input += synapse0x2036420();
   input += synapse0x1dea290();
   input += synapse0x1df8ec0();
   input += synapse0x1df8f00();
   input += synapse0x201ee80();
   input += synapse0x201eec0();
   input += synapse0x201ef00();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2036250() {
   double input = input0x2036250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2035cf0() {
   double input = 1.09226;
   input += synapse0x1df9740();
   input += synapse0x2035e80();
   input += synapse0x2035ec0();
   input += synapse0x2036aa0();
   input += synapse0x2036ae0();
   input += synapse0x2036b20();
   input += synapse0x2036b60();
   input += synapse0x2036ba0();
   input += synapse0x2036be0();
   input += synapse0x2036c20();
   input += synapse0x2036c60();
   input += synapse0x2036ca0();
   input += synapse0x2036ce0();
   input += synapse0x2036d20();
   input += synapse0x2036d60();
   input += synapse0x2036da0();
   input += synapse0x202fd30();
   input += synapse0x202fd70();
   input += synapse0x202fdb0();
   input += synapse0x2036ef0();
   input += synapse0x2036f30();
   input += synapse0x2036f70();
   input += synapse0x2036fb0();
   input += synapse0x2036ff0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2035cf0() {
   double input = input0x2035cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2037030() {
   double input = 0.820228;
   input += synapse0x2037370();
   input += synapse0x20373b0();
   input += synapse0x20373f0();
   input += synapse0x2037430();
   input += synapse0x2037470();
   input += synapse0x20374b0();
   input += synapse0x20374f0();
   input += synapse0x2037530();
   input += synapse0x2037570();
   input += synapse0x20375b0();
   input += synapse0x20375f0();
   input += synapse0x2037630();
   input += synapse0x2037670();
   input += synapse0x20376b0();
   input += synapse0x20376f0();
   input += synapse0x2037730();
   input += synapse0x20371c0();
   input += synapse0x2037200();
   input += synapse0x2037880();
   input += synapse0x20378c0();
   input += synapse0x2037900();
   input += synapse0x2037940();
   input += synapse0x2037980();
   input += synapse0x20379c0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2037030() {
   double input = input0x2037030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2037a00() {
   double input = -0.381186;
   input += synapse0x2037d40();
   input += synapse0x2037d80();
   input += synapse0x2037dc0();
   input += synapse0x2037e00();
   input += synapse0x2037e40();
   input += synapse0x2037e80();
   input += synapse0x2037ec0();
   input += synapse0x2037f00();
   input += synapse0x2037f40();
   input += synapse0x1df9210();
   input += synapse0x1df9250();
   input += synapse0x1df9290();
   input += synapse0x1df92d0();
   input += synapse0x1df9310();
   input += synapse0x1df9350();
   input += synapse0x1df9390();
   input += synapse0x2037b90();
   input += synapse0x2037bd0();
   input += synapse0x1df94e0();
   input += synapse0x1df9520();
   input += synapse0x1df9560();
   input += synapse0x1df95a0();
   input += synapse0x1df95e0();
   input += synapse0x2038790();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2037a00() {
   double input = input0x2037a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x20387d0() {
   double input = 0.526701;
   input += synapse0x2038b10();
   input += synapse0x2038b50();
   input += synapse0x2038b90();
   input += synapse0x2038bd0();
   input += synapse0x2038c10();
   input += synapse0x2038c50();
   input += synapse0x2038c90();
   input += synapse0x2038cd0();
   input += synapse0x2038d10();
   input += synapse0x2038d50();
   input += synapse0x2038d90();
   input += synapse0x2038dd0();
   input += synapse0x2038e10();
   input += synapse0x2038e50();
   input += synapse0x2038e90();
   input += synapse0x2038ed0();
   input += synapse0x2038960();
   input += synapse0x20389a0();
   input += synapse0x2039020();
   input += synapse0x2039060();
   input += synapse0x20390a0();
   input += synapse0x20390e0();
   input += synapse0x2039120();
   input += synapse0x2039160();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20387d0() {
   double input = input0x20387d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x20391a0() {
   double input = 0.190638;
   input += synapse0x20394e0();
   input += synapse0x2039520();
   input += synapse0x2039560();
   input += synapse0x20395a0();
   input += synapse0x20395e0();
   input += synapse0x2039620();
   input += synapse0x2039660();
   input += synapse0x20396a0();
   input += synapse0x20396e0();
   input += synapse0x2039720();
   input += synapse0x2039760();
   input += synapse0x20397a0();
   input += synapse0x20397e0();
   input += synapse0x2039820();
   input += synapse0x2039860();
   input += synapse0x20398a0();
   input += synapse0x2039330();
   input += synapse0x2039370();
   input += synapse0x20399f0();
   input += synapse0x2039a30();
   input += synapse0x2039a70();
   input += synapse0x2039ab0();
   input += synapse0x2039af0();
   input += synapse0x2039b30();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20391a0() {
   double input = input0x20391a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2039b70() {
   double input = 0.652587;
   input += synapse0x2033640();
   input += synapse0x2033680();
   input += synapse0x20336c0();
   input += synapse0x2033700();
   input += synapse0x203a0c0();
   input += synapse0x203a100();
   input += synapse0x203a140();
   input += synapse0x203a180();
   input += synapse0x203a1c0();
   input += synapse0x203a200();
   input += synapse0x203a240();
   input += synapse0x203a280();
   input += synapse0x203a2c0();
   input += synapse0x203a300();
   input += synapse0x203a340();
   input += synapse0x203a380();
   input += synapse0x2039d00();
   input += synapse0x2039d40();
   input += synapse0x203a4d0();
   input += synapse0x203a510();
   input += synapse0x203a550();
   input += synapse0x203a590();
   input += synapse0x203a5d0();
   input += synapse0x203a610();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2039b70() {
   double input = input0x2039b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x203a650() {
   double input = 0.132331;
   input += synapse0x203a990();
   input += synapse0x203a9d0();
   input += synapse0x203aa10();
   input += synapse0x203aa50();
   input += synapse0x203aa90();
   input += synapse0x203aad0();
   input += synapse0x203ab10();
   input += synapse0x203ab50();
   input += synapse0x203ab90();
   input += synapse0x203abd0();
   input += synapse0x203ac10();
   input += synapse0x203ac50();
   input += synapse0x203ac90();
   input += synapse0x203acd0();
   input += synapse0x203ad10();
   input += synapse0x203ad50();
   input += synapse0x203a7e0();
   input += synapse0x203a820();
   input += synapse0x203aea0();
   input += synapse0x203aee0();
   input += synapse0x203af20();
   input += synapse0x203af60();
   input += synapse0x203afa0();
   input += synapse0x203afe0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x203a650() {
   double input = input0x203a650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x203b020() {
   double input = -0.000697161;
   input += synapse0x203b360();
   input += synapse0x203b3a0();
   input += synapse0x203b3e0();
   input += synapse0x203b420();
   input += synapse0x203b460();
   input += synapse0x203b4a0();
   input += synapse0x203b4e0();
   input += synapse0x203b520();
   input += synapse0x203b560();
   input += synapse0x203b5a0();
   input += synapse0x203b5e0();
   input += synapse0x203b620();
   input += synapse0x203b660();
   input += synapse0x203b6a0();
   input += synapse0x203b6e0();
   input += synapse0x203b720();
   input += synapse0x203b1b0();
   input += synapse0x203b1f0();
   input += synapse0x2037f80();
   input += synapse0x2037fc0();
   input += synapse0x2038000();
   input += synapse0x2038040();
   input += synapse0x2038080();
   input += synapse0x20380c0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x203b020() {
   double input = input0x203b020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2038100() {
   double input = 1.28517;
   input += synapse0x2038440();
   input += synapse0x2038480();
   input += synapse0x20384c0();
   input += synapse0x2038500();
   input += synapse0x2038540();
   input += synapse0x2038580();
   input += synapse0x20385c0();
   input += synapse0x2038600();
   input += synapse0x2038640();
   input += synapse0x2038680();
   input += synapse0x20386c0();
   input += synapse0x2038700();
   input += synapse0x2038740();
   input += synapse0x203c880();
   input += synapse0x203c8c0();
   input += synapse0x203c900();
   input += synapse0x2038290();
   input += synapse0x20382d0();
   input += synapse0x203ca50();
   input += synapse0x203ca90();
   input += synapse0x203cad0();
   input += synapse0x203cb10();
   input += synapse0x203cb50();
   input += synapse0x203cb90();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2038100() {
   double input = input0x2038100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x203cbd0() {
   double input = 1.56799;
   input += synapse0x203cf10();
   input += synapse0x203cf50();
   input += synapse0x203cf90();
   input += synapse0x203cfd0();
   input += synapse0x203d010();
   input += synapse0x203d050();
   input += synapse0x203d090();
   input += synapse0x203d0d0();
   input += synapse0x203d110();
   input += synapse0x203d150();
   input += synapse0x203d190();
   input += synapse0x203d1d0();
   input += synapse0x203d210();
   input += synapse0x203d250();
   input += synapse0x203d290();
   input += synapse0x203d2d0();
   input += synapse0x203cd60();
   input += synapse0x203cda0();
   input += synapse0x203d420();
   input += synapse0x203d460();
   input += synapse0x203d4a0();
   input += synapse0x203d4e0();
   input += synapse0x203d520();
   input += synapse0x203d560();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x203cbd0() {
   double input = input0x203cbd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x203d5a0() {
   double input = -2.64296;
   input += synapse0x203d8e0();
   input += synapse0x203d920();
   input += synapse0x203d960();
   input += synapse0x203d9a0();
   input += synapse0x203d9e0();
   input += synapse0x203da20();
   input += synapse0x203da60();
   input += synapse0x203daa0();
   input += synapse0x203dae0();
   input += synapse0x203db20();
   input += synapse0x203db60();
   input += synapse0x203dba0();
   input += synapse0x203dbe0();
   input += synapse0x203dc20();
   input += synapse0x203dc60();
   input += synapse0x203dca0();
   input += synapse0x203d730();
   input += synapse0x203d770();
   input += synapse0x203ddf0();
   input += synapse0x203de30();
   input += synapse0x203de70();
   input += synapse0x203deb0();
   input += synapse0x203def0();
   input += synapse0x203df30();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x203d5a0() {
   double input = input0x203d5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x203df70() {
   double input = -1.14653;
   input += synapse0x203e2b0();
   input += synapse0x203e2f0();
   input += synapse0x203e330();
   input += synapse0x203e370();
   input += synapse0x203e3b0();
   input += synapse0x203e3f0();
   input += synapse0x203e430();
   input += synapse0x203e470();
   input += synapse0x203e4b0();
   input += synapse0x203e4f0();
   input += synapse0x203e530();
   input += synapse0x203e570();
   input += synapse0x203e5b0();
   input += synapse0x203e5f0();
   input += synapse0x203e630();
   input += synapse0x203e670();
   input += synapse0x203e100();
   input += synapse0x203e140();
   input += synapse0x203e7c0();
   input += synapse0x203e800();
   input += synapse0x203e840();
   input += synapse0x203e880();
   input += synapse0x203e8c0();
   input += synapse0x203e900();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x203df70() {
   double input = input0x203df70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x203e940() {
   double input = 1.99508;
   input += synapse0x203ec80();
   input += synapse0x2030010();
   input += synapse0x2030050();
   input += synapse0x2030350();
   input += synapse0x2030390();
   input += synapse0x2030690();
   input += synapse0x20306d0();
   input += synapse0x20309d0();
   input += synapse0x2030a10();
   input += synapse0x2030d10();
   input += synapse0x2030d50();
   input += synapse0x2031050();
   input += synapse0x2031090();
   input += synapse0x2031390();
   input += synapse0x20313d0();
   input += synapse0x20316d0();
   input += synapse0x2031710();
   input += synapse0x2031a10();
   input += synapse0x2031a50();
   input += synapse0x2031d50();
   input += synapse0x2031d90();
   input += synapse0x2032090();
   input += synapse0x20320d0();
   input += synapse0x20323d0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x203e940() {
   double input = input0x203e940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2040750() {
   double input = 0.656264;
   input += synapse0x2032410();
   input += synapse0x20330d0();
   input += synapse0x2033110();
   input += synapse0x203ead0();
   input += synapse0x203eb10();
   input += synapse0x2033410();
   input += synapse0x2033450();
   input += synapse0x1deaec0();
   input += synapse0x1deaf00();
   input += synapse0x2033b90();
   input += synapse0x2033bd0();
   input += synapse0x2033ed0();
   input += synapse0x2033f10();
   input += synapse0x2034210();
   input += synapse0x2034250();
   input += synapse0x2034550();
   input += synapse0x2034590();
   input += synapse0x2034890();
   input += synapse0x20348d0();
   input += synapse0x2034bd0();
   input += synapse0x2034c10();
   input += synapse0x2032710();
   input += synapse0x2032750();
   input += synapse0x20409f0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2040750() {
   double input = input0x2040750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2040a30() {
   double input = 0.0593387;
   input += synapse0x2040d70();
   input += synapse0x2040db0();
   input += synapse0x2040df0();
   input += synapse0x2040e30();
   input += synapse0x2040e70();
   input += synapse0x2040eb0();
   input += synapse0x2040ef0();
   input += synapse0x2040f30();
   input += synapse0x2040f70();
   input += synapse0x2040fb0();
   input += synapse0x2040ff0();
   input += synapse0x2041030();
   input += synapse0x2041070();
   input += synapse0x20410b0();
   input += synapse0x20410f0();
   input += synapse0x2041130();
   input += synapse0x2040bc0();
   input += synapse0x2040c00();
   input += synapse0x2041280();
   input += synapse0x20412c0();
   input += synapse0x2041300();
   input += synapse0x2041340();
   input += synapse0x2041380();
   input += synapse0x20413c0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2040a30() {
   double input = input0x2040a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2041400() {
   double input = -2.06039;
   input += synapse0x2041740();
   input += synapse0x2041780();
   input += synapse0x20417c0();
   input += synapse0x2041800();
   input += synapse0x2041840();
   input += synapse0x2041880();
   input += synapse0x20418c0();
   input += synapse0x2041900();
   input += synapse0x2041940();
   input += synapse0x2041980();
   input += synapse0x20419c0();
   input += synapse0x2041a00();
   input += synapse0x2041a40();
   input += synapse0x2041a80();
   input += synapse0x2041ac0();
   input += synapse0x2041b00();
   input += synapse0x2041590();
   input += synapse0x20415d0();
   input += synapse0x2041c50();
   input += synapse0x2041c90();
   input += synapse0x2041cd0();
   input += synapse0x2041d10();
   input += synapse0x2041d50();
   input += synapse0x2041d90();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2041400() {
   double input = input0x2041400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2041dd0() {
   double input = -3.55241;
   input += synapse0x2042110();
   input += synapse0x2042150();
   input += synapse0x2042190();
   input += synapse0x20421d0();
   input += synapse0x2042210();
   input += synapse0x2042250();
   input += synapse0x2042290();
   input += synapse0x20422d0();
   input += synapse0x2042310();
   input += synapse0x2042350();
   input += synapse0x2042390();
   input += synapse0x20423d0();
   input += synapse0x2042410();
   input += synapse0x2042450();
   input += synapse0x2042490();
   input += synapse0x20424d0();
   input += synapse0x2041f60();
   input += synapse0x2041fa0();
   input += synapse0x2042620();
   input += synapse0x2042660();
   input += synapse0x20426a0();
   input += synapse0x20426e0();
   input += synapse0x2042720();
   input += synapse0x2042760();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2041dd0() {
   double input = input0x2041dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x20427a0() {
   double input = 1.20064;
   input += synapse0x2042ae0();
   input += synapse0x2042b20();
   input += synapse0x2042b60();
   input += synapse0x2042ba0();
   input += synapse0x2042be0();
   input += synapse0x2042c20();
   input += synapse0x2042c60();
   input += synapse0x2042ca0();
   input += synapse0x2042ce0();
   input += synapse0x2042d20();
   input += synapse0x2042d60();
   input += synapse0x2042da0();
   input += synapse0x2042de0();
   input += synapse0x2042e20();
   input += synapse0x2042e60();
   input += synapse0x2042ea0();
   input += synapse0x2042930();
   input += synapse0x2042970();
   input += synapse0x2042ff0();
   input += synapse0x2043030();
   input += synapse0x2043070();
   input += synapse0x20430b0();
   input += synapse0x20430f0();
   input += synapse0x2043130();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20427a0() {
   double input = input0x20427a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2043170() {
   double input = 0.445481;
   input += synapse0x20434b0();
   input += synapse0x20434f0();
   input += synapse0x2043530();
   input += synapse0x2043570();
   input += synapse0x20435b0();
   input += synapse0x20435f0();
   input += synapse0x2043630();
   input += synapse0x2043670();
   input += synapse0x20436b0();
   input += synapse0x203b870();
   input += synapse0x203b8b0();
   input += synapse0x203b8f0();
   input += synapse0x203b930();
   input += synapse0x203b970();
   input += synapse0x203b9b0();
   input += synapse0x203b9f0();
   input += synapse0x2043300();
   input += synapse0x2043340();
   input += synapse0x203bb40();
   input += synapse0x203bb80();
   input += synapse0x203bbc0();
   input += synapse0x203bc00();
   input += synapse0x203bc40();
   input += synapse0x203bc80();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2043170() {
   double input = input0x2043170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x203bcc0() {
   double input = -0.00364697;
   input += synapse0x203c000();
   input += synapse0x203c040();
   input += synapse0x203c080();
   input += synapse0x203c0c0();
   input += synapse0x203c100();
   input += synapse0x203c140();
   input += synapse0x203c180();
   input += synapse0x203c1c0();
   input += synapse0x203c200();
   input += synapse0x203c240();
   input += synapse0x203c280();
   input += synapse0x203c2c0();
   input += synapse0x203c300();
   input += synapse0x203c340();
   input += synapse0x203c380();
   input += synapse0x203c3c0();
   input += synapse0x203be50();
   input += synapse0x203be90();
   input += synapse0x203c510();
   input += synapse0x203c550();
   input += synapse0x203c590();
   input += synapse0x203c5d0();
   input += synapse0x203c610();
   input += synapse0x203c650();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x203bcc0() {
   double input = input0x203bcc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x203c690() {
   double input = 0.322718;
   input += synapse0x203c820();
   input += synapse0x20458b0();
   input += synapse0x20458f0();
   input += synapse0x2045930();
   input += synapse0x2045970();
   input += synapse0x20459b0();
   input += synapse0x20459f0();
   input += synapse0x2045a30();
   input += synapse0x2045a70();
   input += synapse0x2045ab0();
   input += synapse0x2045af0();
   input += synapse0x2045b30();
   input += synapse0x2045b70();
   input += synapse0x2045bb0();
   input += synapse0x2045bf0();
   input += synapse0x2045c30();
   input += synapse0x2045700();
   input += synapse0x2045740();
   input += synapse0x2045d80();
   input += synapse0x2045dc0();
   input += synapse0x2045e00();
   input += synapse0x2045e40();
   input += synapse0x2045e80();
   input += synapse0x2045ec0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x203c690() {
   double input = input0x203c690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2045f00() {
   double input = -1.53437;
   input += synapse0x2046240();
   input += synapse0x2046280();
   input += synapse0x20462c0();
   input += synapse0x2046300();
   input += synapse0x2046340();
   input += synapse0x2046380();
   input += synapse0x20463c0();
   input += synapse0x2046400();
   input += synapse0x2046440();
   input += synapse0x2046480();
   input += synapse0x20464c0();
   input += synapse0x2046500();
   input += synapse0x2046540();
   input += synapse0x2046580();
   input += synapse0x20465c0();
   input += synapse0x2046600();
   input += synapse0x2046090();
   input += synapse0x20460d0();
   input += synapse0x2046750();
   input += synapse0x2046790();
   input += synapse0x20467d0();
   input += synapse0x2046810();
   input += synapse0x2046850();
   input += synapse0x2046890();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2045f00() {
   double input = input0x2045f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x20468d0() {
   double input = 1.08844;
   input += synapse0x2046c10();
   input += synapse0x2046c50();
   input += synapse0x2046c90();
   input += synapse0x2046cd0();
   input += synapse0x2046d10();
   input += synapse0x2046d50();
   input += synapse0x2046d90();
   input += synapse0x2046dd0();
   input += synapse0x2046e10();
   input += synapse0x2046e50();
   input += synapse0x2046e90();
   input += synapse0x2046ed0();
   input += synapse0x2046f10();
   input += synapse0x2046f50();
   input += synapse0x2046f90();
   input += synapse0x2046fd0();
   input += synapse0x2046a60();
   input += synapse0x2046aa0();
   input += synapse0x2047120();
   input += synapse0x2047160();
   input += synapse0x20471a0();
   input += synapse0x20471e0();
   input += synapse0x2047220();
   input += synapse0x2047260();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20468d0() {
   double input = input0x20468d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x20472a0() {
   double input = 1.40249;
   input += synapse0x20475e0();
   input += synapse0x2047620();
   input += synapse0x2047660();
   input += synapse0x20476a0();
   input += synapse0x20476e0();
   input += synapse0x2047720();
   input += synapse0x2047760();
   input += synapse0x20477a0();
   input += synapse0x20477e0();
   input += synapse0x2047820();
   input += synapse0x2047860();
   input += synapse0x20478a0();
   input += synapse0x20478e0();
   input += synapse0x2047920();
   input += synapse0x2047960();
   input += synapse0x20479a0();
   input += synapse0x2047430();
   input += synapse0x2047470();
   input += synapse0x2047af0();
   input += synapse0x2047b30();
   input += synapse0x2047b70();
   input += synapse0x2047bb0();
   input += synapse0x2047bf0();
   input += synapse0x2047c30();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20472a0() {
   double input = input0x20472a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2047c70() {
   double input = -0.192306;
   input += synapse0x2047fb0();
   input += synapse0x2047ff0();
   input += synapse0x2048030();
   input += synapse0x2048070();
   input += synapse0x20480b0();
   input += synapse0x20480f0();
   input += synapse0x2048130();
   input += synapse0x2048170();
   input += synapse0x20481b0();
   input += synapse0x20481f0();
   input += synapse0x2048230();
   input += synapse0x2048270();
   input += synapse0x20482b0();
   input += synapse0x20482f0();
   input += synapse0x2048330();
   input += synapse0x2048370();
   input += synapse0x2047e00();
   input += synapse0x2047e40();
   input += synapse0x20484c0();
   input += synapse0x2048500();
   input += synapse0x2048540();
   input += synapse0x2048580();
   input += synapse0x20485c0();
   input += synapse0x2048600();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2047c70() {
   double input = input0x2047c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2048640() {
   double input = 0.436586;
   input += synapse0x2048980();
   input += synapse0x20489c0();
   input += synapse0x2048a00();
   input += synapse0x2048a40();
   input += synapse0x2048a80();
   input += synapse0x2048ac0();
   input += synapse0x2048b00();
   input += synapse0x2048b40();
   input += synapse0x2048b80();
   input += synapse0x2048bc0();
   input += synapse0x2048c00();
   input += synapse0x2048c40();
   input += synapse0x2048c80();
   input += synapse0x2048cc0();
   input += synapse0x2048d00();
   input += synapse0x2048d40();
   input += synapse0x20487d0();
   input += synapse0x2048810();
   input += synapse0x2048e90();
   input += synapse0x2048ed0();
   input += synapse0x2048f10();
   input += synapse0x2048f50();
   input += synapse0x2048f90();
   input += synapse0x2048fd0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2048640() {
   double input = input0x2048640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2049010() {
   double input = 1.36058;
   input += synapse0x2049350();
   input += synapse0x2049390();
   input += synapse0x20493d0();
   input += synapse0x2049410();
   input += synapse0x2049450();
   input += synapse0x2049490();
   input += synapse0x20494d0();
   input += synapse0x2049510();
   input += synapse0x2049550();
   input += synapse0x2049590();
   input += synapse0x20495d0();
   input += synapse0x2049610();
   input += synapse0x2049650();
   input += synapse0x2049690();
   input += synapse0x20496d0();
   input += synapse0x2049710();
   input += synapse0x20491a0();
   input += synapse0x20491e0();
   input += synapse0x2049860();
   input += synapse0x20498a0();
   input += synapse0x20498e0();
   input += synapse0x2049920();
   input += synapse0x2049960();
   input += synapse0x20499a0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2049010() {
   double input = input0x2049010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x20499e0() {
   double input = -0.0848448;
   input += synapse0x2049d20();
   input += synapse0x2049d60();
   input += synapse0x2049da0();
   input += synapse0x2049de0();
   input += synapse0x2049e20();
   input += synapse0x2049e60();
   input += synapse0x2049ea0();
   input += synapse0x2049ee0();
   input += synapse0x2049f20();
   input += synapse0x2049f60();
   input += synapse0x2049fa0();
   input += synapse0x2049fe0();
   input += synapse0x204a020();
   input += synapse0x204a060();
   input += synapse0x204a0a0();
   input += synapse0x204a0e0();
   input += synapse0x2049b70();
   input += synapse0x2049bb0();
   input += synapse0x204a230();
   input += synapse0x204a270();
   input += synapse0x204a2b0();
   input += synapse0x204a2f0();
   input += synapse0x204a330();
   input += synapse0x204a370();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20499e0() {
   double input = input0x20499e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x204a3b0() {
   double input = 1.0569;
   input += synapse0x204a6f0();
   input += synapse0x203ecc0();
   input += synapse0x203ed00();
   input += synapse0x203ed40();
   input += synapse0x203ef90();
   input += synapse0x203efd0();
   input += synapse0x203f010();
   input += synapse0x203f260();
   input += synapse0x203f2a0();
   input += synapse0x203f4f0();
   input += synapse0x203f530();
   input += synapse0x203f570();
   input += synapse0x203f7c0();
   input += synapse0x203f800();
   input += synapse0x203fa50();
   input += synapse0x203fa90();
   input += synapse0x204a540();
   input += synapse0x204a580();
   input += synapse0x203fbe0();
   input += synapse0x20400f0();
   input += synapse0x2040130();
   input += synapse0x2040170();
   input += synapse0x20403c0();
   input += synapse0x2040400();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x204a3b0() {
   double input = input0x204a3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2040440() {
   double input = -0.456611;
   input += synapse0x203fcb0();
   input += synapse0x203fcf0();
   input += synapse0x203fd30();
   input += synapse0x203fd70();
   input += synapse0x20406f0();
   input += synapse0x204ca40();
   input += synapse0x204ca80();
   input += synapse0x204cac0();
   input += synapse0x204cb00();
   input += synapse0x204cb40();
   input += synapse0x204cb80();
   input += synapse0x204cbc0();
   input += synapse0x204cc00();
   input += synapse0x204cc40();
   input += synapse0x204cc80();
   input += synapse0x204ccc0();
   input += synapse0x20405d0();
   input += synapse0x2040610();
   input += synapse0x204ce10();
   input += synapse0x204ce50();
   input += synapse0x204ce90();
   input += synapse0x204ced0();
   input += synapse0x204cf10();
   input += synapse0x204cf50();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2040440() {
   double input = input0x2040440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x204cf90() {
   double input = -0.524959;
   input += synapse0x204d2d0();
   input += synapse0x204d310();
   input += synapse0x204d350();
   input += synapse0x204d390();
   input += synapse0x204d3d0();
   input += synapse0x204d410();
   input += synapse0x204d450();
   input += synapse0x204d490();
   input += synapse0x204d4d0();
   input += synapse0x204d510();
   input += synapse0x204d550();
   input += synapse0x204d590();
   input += synapse0x204d5d0();
   input += synapse0x204d610();
   input += synapse0x204d650();
   input += synapse0x204d690();
   input += synapse0x204d120();
   input += synapse0x204d160();
   input += synapse0x204d7e0();
   input += synapse0x204d820();
   input += synapse0x204d860();
   input += synapse0x204d8a0();
   input += synapse0x204d8e0();
   input += synapse0x204d920();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x204cf90() {
   double input = input0x204cf90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x204d960() {
   double input = 1.0531;
   input += synapse0x204dca0();
   input += synapse0x204dce0();
   input += synapse0x204dd20();
   input += synapse0x204dd60();
   input += synapse0x204dda0();
   input += synapse0x204dde0();
   input += synapse0x204de20();
   input += synapse0x204de60();
   input += synapse0x204dea0();
   input += synapse0x204dee0();
   input += synapse0x204df20();
   input += synapse0x204df60();
   input += synapse0x204dfa0();
   input += synapse0x204dfe0();
   input += synapse0x204e020();
   input += synapse0x204e060();
   input += synapse0x204daf0();
   input += synapse0x204db30();
   input += synapse0x204e1b0();
   input += synapse0x204e1f0();
   input += synapse0x204e230();
   input += synapse0x204e270();
   input += synapse0x204e2b0();
   input += synapse0x204e2f0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x204d960() {
   double input = input0x204d960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x204e330() {
   double input = 3.39077;
   input += synapse0x204e670();
   input += synapse0x204e6b0();
   input += synapse0x204e6f0();
   input += synapse0x204e730();
   input += synapse0x204e770();
   input += synapse0x204e7b0();
   input += synapse0x204e7f0();
   input += synapse0x204e830();
   input += synapse0x204e870();
   input += synapse0x204e8b0();
   input += synapse0x204e8f0();
   input += synapse0x204e930();
   input += synapse0x204e970();
   input += synapse0x204e9b0();
   input += synapse0x204e9f0();
   input += synapse0x204ea30();
   input += synapse0x204e4c0();
   input += synapse0x204e500();
   input += synapse0x204eb80();
   input += synapse0x204ebc0();
   input += synapse0x204ec00();
   input += synapse0x204ec40();
   input += synapse0x204ec80();
   input += synapse0x204ecc0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x204e330() {
   double input = input0x204e330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x204ed00() {
   double input = -0.055495;
   input += synapse0x204f040();
   input += synapse0x204f080();
   input += synapse0x204f0c0();
   input += synapse0x204f100();
   input += synapse0x204f140();
   input += synapse0x204f180();
   input += synapse0x204f1c0();
   input += synapse0x204f200();
   input += synapse0x204f240();
   input += synapse0x204f280();
   input += synapse0x204f2c0();
   input += synapse0x204f300();
   input += synapse0x204f340();
   input += synapse0x204f380();
   input += synapse0x204f3c0();
   input += synapse0x204f400();
   input += synapse0x204ee90();
   input += synapse0x204eed0();
   input += synapse0x204f550();
   input += synapse0x204f590();
   input += synapse0x204f5d0();
   input += synapse0x204f610();
   input += synapse0x204f650();
   input += synapse0x204f690();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x204ed00() {
   double input = input0x204ed00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x204f6d0() {
   double input = -0.251452;
   input += synapse0x204fa10();
   input += synapse0x204fa50();
   input += synapse0x204fa90();
   input += synapse0x204fad0();
   input += synapse0x204fb10();
   input += synapse0x204fb50();
   input += synapse0x204fb90();
   input += synapse0x204fbd0();
   input += synapse0x204fc10();
   input += synapse0x204fc50();
   input += synapse0x204fc90();
   input += synapse0x204fcd0();
   input += synapse0x204fd10();
   input += synapse0x204fd50();
   input += synapse0x204fd90();
   input += synapse0x204fdd0();
   input += synapse0x204f860();
   input += synapse0x204f8a0();
   input += synapse0x204ff20();
   input += synapse0x204ff60();
   input += synapse0x204ffa0();
   input += synapse0x204ffe0();
   input += synapse0x2050020();
   input += synapse0x2050060();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x204f6d0() {
   double input = input0x204f6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x20500a0() {
   double input = 0.141507;
   input += synapse0x20503e0();
   input += synapse0x2050420();
   input += synapse0x2050460();
   input += synapse0x20504a0();
   input += synapse0x20504e0();
   input += synapse0x2050520();
   input += synapse0x2050560();
   input += synapse0x20505a0();
   input += synapse0x20505e0();
   input += synapse0x2050620();
   input += synapse0x2050660();
   input += synapse0x20506a0();
   input += synapse0x20506e0();
   input += synapse0x2050720();
   input += synapse0x2050760();
   input += synapse0x20507a0();
   input += synapse0x2050230();
   input += synapse0x2050270();
   input += synapse0x20508f0();
   input += synapse0x2050930();
   input += synapse0x2050970();
   input += synapse0x20509b0();
   input += synapse0x20509f0();
   input += synapse0x2050a30();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20500a0() {
   double input = input0x20500a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2050a70() {
   double input = 5.16957;
   input += synapse0x2050db0();
   input += synapse0x2050df0();
   input += synapse0x2050e30();
   input += synapse0x2050e70();
   input += synapse0x2050eb0();
   input += synapse0x2050ef0();
   input += synapse0x2050f30();
   input += synapse0x2050f70();
   input += synapse0x2050fb0();
   input += synapse0x2050ff0();
   input += synapse0x2051030();
   input += synapse0x2051070();
   input += synapse0x20510b0();
   input += synapse0x20510f0();
   input += synapse0x2051130();
   input += synapse0x2051170();
   input += synapse0x2050c00();
   input += synapse0x2050c40();
   input += synapse0x20512c0();
   input += synapse0x2051300();
   input += synapse0x2051340();
   input += synapse0x2051380();
   input += synapse0x20513c0();
   input += synapse0x2051400();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2050a70() {
   double input = input0x2050a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2051440() {
   double input = 5.63023;
   input += synapse0x2039eb0();
   input += synapse0x2039ef0();
   input += synapse0x2039f30();
   input += synapse0x2039f70();
   input += synapse0x2039fb0();
   input += synapse0x2039ff0();
   input += synapse0x203a030();
   input += synapse0x203a070();
   input += synapse0x2051b90();
   input += synapse0x2051bd0();
   input += synapse0x2051c10();
   input += synapse0x2051c50();
   input += synapse0x2051c90();
   input += synapse0x2051cd0();
   input += synapse0x2051d10();
   input += synapse0x2051d50();
   input += synapse0x20515d0();
   input += synapse0x2051610();
   input += synapse0x2051ea0();
   input += synapse0x2051ee0();
   input += synapse0x2051f20();
   input += synapse0x2051f60();
   input += synapse0x2051fa0();
   input += synapse0x2051fe0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2051440() {
   double input = input0x2051440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2052020() {
   double input = 0.200525;
   input += synapse0x2052360();
   input += synapse0x20523a0();
   input += synapse0x20523e0();
   input += synapse0x2052420();
   input += synapse0x2052460();
   input += synapse0x20524a0();
   input += synapse0x20524e0();
   input += synapse0x2052520();
   input += synapse0x2052560();
   input += synapse0x20525a0();
   input += synapse0x20525e0();
   input += synapse0x2052620();
   input += synapse0x2052660();
   input += synapse0x20526a0();
   input += synapse0x20526e0();
   input += synapse0x2052720();
   input += synapse0x20521b0();
   input += synapse0x20521f0();
   input += synapse0x2052870();
   input += synapse0x20528b0();
   input += synapse0x20528f0();
   input += synapse0x2052930();
   input += synapse0x2052970();
   input += synapse0x20529b0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2052020() {
   double input = input0x2052020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x20529f0() {
   double input = 2.04059;
   input += synapse0x2052d30();
   input += synapse0x2052d70();
   input += synapse0x2052db0();
   input += synapse0x2052df0();
   input += synapse0x2052e30();
   input += synapse0x2052e70();
   input += synapse0x2052eb0();
   input += synapse0x2052ef0();
   input += synapse0x2052f30();
   input += synapse0x2052f70();
   input += synapse0x2052fb0();
   input += synapse0x2052ff0();
   input += synapse0x2053030();
   input += synapse0x2053070();
   input += synapse0x20530b0();
   input += synapse0x20530f0();
   input += synapse0x2052b80();
   input += synapse0x2052bc0();
   input += synapse0x20436f0();
   input += synapse0x2043730();
   input += synapse0x2043770();
   input += synapse0x20437b0();
   input += synapse0x20437f0();
   input += synapse0x2043830();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20529f0() {
   double input = input0x20529f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2043870() {
   double input = -0.854329;
   input += synapse0x2043bb0();
   input += synapse0x2043bf0();
   input += synapse0x2043c30();
   input += synapse0x2043c70();
   input += synapse0x2043cb0();
   input += synapse0x2043cf0();
   input += synapse0x2043d30();
   input += synapse0x2043d70();
   input += synapse0x2043db0();
   input += synapse0x2043df0();
   input += synapse0x2043e30();
   input += synapse0x2043e70();
   input += synapse0x2043eb0();
   input += synapse0x2043ef0();
   input += synapse0x2043f30();
   input += synapse0x2043f70();
   input += synapse0x2043a00();
   input += synapse0x2043a40();
   input += synapse0x20440c0();
   input += synapse0x2044100();
   input += synapse0x2044140();
   input += synapse0x2044180();
   input += synapse0x20441c0();
   input += synapse0x2044200();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2043870() {
   double input = input0x2043870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2044240() {
   double input = 0.369543;
   input += synapse0x2044580();
   input += synapse0x20445c0();
   input += synapse0x2044600();
   input += synapse0x2044640();
   input += synapse0x2044680();
   input += synapse0x20446c0();
   input += synapse0x2044700();
   input += synapse0x2044740();
   input += synapse0x2044780();
   input += synapse0x20447c0();
   input += synapse0x2044800();
   input += synapse0x2044840();
   input += synapse0x2044880();
   input += synapse0x20448c0();
   input += synapse0x2044900();
   input += synapse0x2044940();
   input += synapse0x20443d0();
   input += synapse0x2044410();
   input += synapse0x2044a90();
   input += synapse0x2044ad0();
   input += synapse0x2044b10();
   input += synapse0x2044b50();
   input += synapse0x2044b90();
   input += synapse0x2044bd0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2044240() {
   double input = input0x2044240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2044c10() {
   double input = -1.42194;
   input += synapse0x2044f50();
   input += synapse0x2044f90();
   input += synapse0x2044fd0();
   input += synapse0x2045010();
   input += synapse0x2045050();
   input += synapse0x2045090();
   input += synapse0x20450d0();
   input += synapse0x2045110();
   input += synapse0x2045150();
   input += synapse0x2045190();
   input += synapse0x20451d0();
   input += synapse0x2045210();
   input += synapse0x2045250();
   input += synapse0x2045290();
   input += synapse0x20452d0();
   input += synapse0x2045310();
   input += synapse0x2044da0();
   input += synapse0x2044de0();
   input += synapse0x2045460();
   input += synapse0x20454a0();
   input += synapse0x20454e0();
   input += synapse0x2045520();
   input += synapse0x2045560();
   input += synapse0x20455a0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2044c10() {
   double input = input0x2044c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2057250() {
   double input = -0.485755;
   input += synapse0x2057470();
   input += synapse0x20574b0();
   input += synapse0x20574f0();
   input += synapse0x2057530();
   input += synapse0x2057570();
   input += synapse0x20575b0();
   input += synapse0x20575f0();
   input += synapse0x2057630();
   input += synapse0x2057670();
   input += synapse0x20576b0();
   input += synapse0x20576f0();
   input += synapse0x2057730();
   input += synapse0x2057770();
   input += synapse0x20577b0();
   input += synapse0x20577f0();
   input += synapse0x2057830();
   input += synapse0x20455e0();
   input += synapse0x2045620();
   input += synapse0x2057980();
   input += synapse0x20579c0();
   input += synapse0x2057a00();
   input += synapse0x2057a40();
   input += synapse0x2057a80();
   input += synapse0x2057ac0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2057250() {
   double input = input0x2057250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2057b00() {
   double input = -3.09407;
   input += synapse0x2057e40();
   input += synapse0x2057e80();
   input += synapse0x2057ec0();
   input += synapse0x2057f00();
   input += synapse0x2057f40();
   input += synapse0x2057f80();
   input += synapse0x2057fc0();
   input += synapse0x2058000();
   input += synapse0x2058040();
   input += synapse0x2058080();
   input += synapse0x20580c0();
   input += synapse0x2058100();
   input += synapse0x2058140();
   input += synapse0x2058180();
   input += synapse0x20581c0();
   input += synapse0x2058200();
   input += synapse0x2057c90();
   input += synapse0x2057cd0();
   input += synapse0x2058350();
   input += synapse0x2058390();
   input += synapse0x20583d0();
   input += synapse0x2058410();
   input += synapse0x2058450();
   input += synapse0x2058490();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2057b00() {
   double input = input0x2057b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x20584d0() {
   double input = -1.57525;
   input += synapse0x2058810();
   input += synapse0x2058850();
   input += synapse0x2058890();
   input += synapse0x20588d0();
   input += synapse0x2058910();
   input += synapse0x2058950();
   input += synapse0x2058990();
   input += synapse0x20589d0();
   input += synapse0x2058a10();
   input += synapse0x2058a50();
   input += synapse0x2058a90();
   input += synapse0x2058ad0();
   input += synapse0x2058b10();
   input += synapse0x2058b50();
   input += synapse0x2058b90();
   input += synapse0x2058bd0();
   input += synapse0x2058660();
   input += synapse0x20586a0();
   input += synapse0x2058d20();
   input += synapse0x2058d60();
   input += synapse0x2058da0();
   input += synapse0x2058de0();
   input += synapse0x2058e20();
   input += synapse0x2058e60();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20584d0() {
   double input = input0x20584d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2058ea0() {
   double input = 0.27948;
   input += synapse0x20591e0();
   input += synapse0x2059220();
   input += synapse0x2059260();
   input += synapse0x20592a0();
   input += synapse0x20592e0();
   input += synapse0x2059320();
   input += synapse0x2059360();
   input += synapse0x20593a0();
   input += synapse0x20593e0();
   input += synapse0x2059420();
   input += synapse0x2059460();
   input += synapse0x20594a0();
   input += synapse0x20594e0();
   input += synapse0x2059520();
   input += synapse0x2059560();
   input += synapse0x20595a0();
   input += synapse0x2059030();
   input += synapse0x2059070();
   input += synapse0x20596f0();
   input += synapse0x2059730();
   input += synapse0x2059770();
   input += synapse0x20597b0();
   input += synapse0x20597f0();
   input += synapse0x2059830();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2058ea0() {
   double input = input0x2058ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x20600a0() {
   double input = -0.39997;
   input += synapse0x1df96b0();
   input += synapse0x1df96f0();
   input += synapse0x20372e0();
   input += synapse0x2037320();
   input += synapse0x2037cb0();
   input += synapse0x2037cf0();
   input += synapse0x2038a80();
   input += synapse0x2038ac0();
   input += synapse0x2039450();
   input += synapse0x2039490();
   input += synapse0x2039e20();
   input += synapse0x2039e60();
   input += synapse0x203a900();
   input += synapse0x203a940();
   input += synapse0x203b2d0();
   input += synapse0x203b310();
   input += synapse0x20383b0();
   input += synapse0x20383f0();
   input += synapse0x203ce80();
   input += synapse0x203cec0();
   input += synapse0x203d850();
   input += synapse0x203d890();
   input += synapse0x203e220();
   input += synapse0x203e260();
   input += synapse0x203ebf0();
   input += synapse0x203ec30();
   input += synapse0x2032d90();
   input += synapse0x2032dd0();
   input += synapse0x2040ce0();
   input += synapse0x2040d20();
   input += synapse0x20416b0();
   input += synapse0x20416f0();
   input += synapse0x2042080();
   input += synapse0x20420c0();
   input += synapse0x2042a50();
   input += synapse0x2042a90();
   input += synapse0x2043420();
   input += synapse0x2043460();
   input += synapse0x203bf70();
   input += synapse0x203bfb0();
   input += synapse0x2045820();
   input += synapse0x2045860();
   input += synapse0x20461b0();
   input += synapse0x20461f0();
   input += synapse0x2046b80();
   input += synapse0x2046bc0();
   input += synapse0x2047550();
   input += synapse0x2047590();
   input += synapse0x2047f20();
   input += synapse0x2047f60();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20600a0() {
   double input = input0x20600a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2060440() {
   double input = 0.312178;
   input += synapse0x204a660();
   input += synapse0x204a6a0();
   input += synapse0x203fc20();
   input += synapse0x203fc60();
   input += synapse0x204d240();
   input += synapse0x204d280();
   input += synapse0x204dc10();
   input += synapse0x204dc50();
   input += synapse0x204e5e0();
   input += synapse0x204e620();
   input += synapse0x204efb0();
   input += synapse0x204eff0();
   input += synapse0x204f980();
   input += synapse0x204f9c0();
   input += synapse0x2050350();
   input += synapse0x2050390();
   input += synapse0x2050d20();
   input += synapse0x2050d60();
   input += synapse0x20516f0();
   input += synapse0x2051730();
   input += synapse0x20522d0();
   input += synapse0x2052310();
   input += synapse0x2052ca0();
   input += synapse0x2052ce0();
   input += synapse0x2043b20();
   input += synapse0x2043b60();
   input += synapse0x20444f0();
   input += synapse0x2044530();
   input += synapse0x2044ec0();
   input += synapse0x2044f00();
   input += synapse0x20573e0();
   input += synapse0x2057420();
   input += synapse0x2057db0();
   input += synapse0x2057df0();
   input += synapse0x2058780();
   input += synapse0x20587c0();
   input += synapse0x2059150();
   input += synapse0x2059190();
   input += synapse0x2035040();
   input += synapse0x2035080();
   input += synapse0x20488f0();
   input += synapse0x2048930();
   input += synapse0x2059870();
   input += synapse0x20598b0();
   input += synapse0x20598f0();
   input += synapse0x2059930();
   input += synapse0x20607e0();
   input += synapse0x2060820();
   input += synapse0x2060860();
   input += synapse0x20608a0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2060440() {
   double input = input0x2060440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x20608e0() {
   double input = -0.35558;
   input += synapse0x2060c20();
   input += synapse0x2060c60();
   input += synapse0x2060ca0();
   input += synapse0x2060ce0();
   input += synapse0x2060d20();
   input += synapse0x2060d60();
   input += synapse0x2060da0();
   input += synapse0x2060de0();
   input += synapse0x2060e20();
   input += synapse0x2060e60();
   input += synapse0x2060ea0();
   input += synapse0x2060ee0();
   input += synapse0x2060f20();
   input += synapse0x2060f60();
   input += synapse0x2060fa0();
   input += synapse0x2060fe0();
   input += synapse0x2060a70();
   input += synapse0x2060ab0();
   input += synapse0x2061130();
   input += synapse0x2061170();
   input += synapse0x20611b0();
   input += synapse0x20611f0();
   input += synapse0x2061230();
   input += synapse0x2061270();
   input += synapse0x20612b0();
   input += synapse0x20612f0();
   input += synapse0x2061330();
   input += synapse0x2061370();
   input += synapse0x20613b0();
   input += synapse0x20613f0();
   input += synapse0x2061430();
   input += synapse0x2061470();
   input += synapse0x2061020();
   input += synapse0x2061060();
   input += synapse0x20610a0();
   input += synapse0x20610e0();
   input += synapse0x20616c0();
   input += synapse0x2061700();
   input += synapse0x2061740();
   input += synapse0x2061780();
   input += synapse0x20617c0();
   input += synapse0x2061800();
   input += synapse0x2061840();
   input += synapse0x2061880();
   input += synapse0x20618c0();
   input += synapse0x2061900();
   input += synapse0x2061940();
   input += synapse0x2061980();
   input += synapse0x20619c0();
   input += synapse0x2061a00();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x20608e0() {
   double input = input0x20608e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2061a40() {
   double input = -1.51718;
   input += synapse0x2061d80();
   input += synapse0x2061dc0();
   input += synapse0x2061e00();
   input += synapse0x2061e40();
   input += synapse0x2061e80();
   input += synapse0x2061ec0();
   input += synapse0x2061f00();
   input += synapse0x2061f40();
   input += synapse0x2061f80();
   input += synapse0x2061fc0();
   input += synapse0x2062000();
   input += synapse0x2062040();
   input += synapse0x2062080();
   input += synapse0x20620c0();
   input += synapse0x2062100();
   input += synapse0x2062140();
   input += synapse0x2061bd0();
   input += synapse0x2061c10();
   input += synapse0x2062290();
   input += synapse0x20622d0();
   input += synapse0x2062310();
   input += synapse0x2062350();
   input += synapse0x2062390();
   input += synapse0x20623d0();
   input += synapse0x2062410();
   input += synapse0x2062450();
   input += synapse0x2062490();
   input += synapse0x20624d0();
   input += synapse0x2062510();
   input += synapse0x2062550();
   input += synapse0x2062590();
   input += synapse0x20625d0();
   input += synapse0x2062180();
   input += synapse0x20621c0();
   input += synapse0x2062200();
   input += synapse0x2062240();
   input += synapse0x2062820();
   input += synapse0x2062860();
   input += synapse0x20628a0();
   input += synapse0x20628e0();
   input += synapse0x2062920();
   input += synapse0x2062960();
   input += synapse0x20629a0();
   input += synapse0x20629e0();
   input += synapse0x2062a20();
   input += synapse0x2062a60();
   input += synapse0x2062aa0();
   input += synapse0x2062ae0();
   input += synapse0x2062b20();
   input += synapse0x2062b60();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2061a40() {
   double input = input0x2061a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2062ba0() {
   double input = 1.72619;
   input += synapse0x2062ee0();
   input += synapse0x2062f20();
   input += synapse0x2062f60();
   input += synapse0x2062fa0();
   input += synapse0x2062fe0();
   input += synapse0x2063020();
   input += synapse0x2063060();
   input += synapse0x20630a0();
   input += synapse0x20630e0();
   input += synapse0x2063120();
   input += synapse0x2063160();
   input += synapse0x20631a0();
   input += synapse0x20631e0();
   input += synapse0x2063220();
   input += synapse0x2063260();
   input += synapse0x20632a0();
   input += synapse0x2062d30();
   input += synapse0x2062d70();
   input += synapse0x20633f0();
   input += synapse0x2063430();
   input += synapse0x2063470();
   input += synapse0x20634b0();
   input += synapse0x20634f0();
   input += synapse0x2063530();
   input += synapse0x2063570();
   input += synapse0x20635b0();
   input += synapse0x20635f0();
   input += synapse0x2063630();
   input += synapse0x2063670();
   input += synapse0x20636b0();
   input += synapse0x20636f0();
   input += synapse0x2063730();
   input += synapse0x20632e0();
   input += synapse0x2063320();
   input += synapse0x2063360();
   input += synapse0x20633a0();
   input += synapse0x2063980();
   input += synapse0x20639c0();
   input += synapse0x2063a00();
   input += synapse0x2063a40();
   input += synapse0x2063a80();
   input += synapse0x2063ac0();
   input += synapse0x2063b00();
   input += synapse0x2063b40();
   input += synapse0x2063b80();
   input += synapse0x2063bc0();
   input += synapse0x2063c00();
   input += synapse0x2063c40();
   input += synapse0x2063c80();
   input += synapse0x2063cc0();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2062ba0() {
   double input = input0x2062ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::input0x2063d00() {
   double input = 6.54932;
   input += synapse0x2063f20();
   input += synapse0x2063f60();
   input += synapse0x2063fa0();
   input += synapse0x2063fe0();
   input += synapse0x2064020();
   return input;
}

double NNfunction_ns_chiPlus1_uL::neuron0x2063d00() {
   double input = input0x2063d00();
   return (input * 1)+0;
}

double NNfunction_ns_chiPlus1_uL::synapse0x202fcb0() {
   return (neuron0x202fdf0()*-0.0493908);
}

double NNfunction_ns_chiPlus1_uL::synapse0x202fcf0() {
   return (neuron0x2030130()*0.0465886);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20350d0() {
   return (neuron0x2030470()*0.540683);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035110() {
   return (neuron0x20307b0()*0.364793);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035150() {
   return (neuron0x2030af0()*-0.0360474);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035190() {
   return (neuron0x2030e30()*0.0302885);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20351d0() {
   return (neuron0x2031170()*0.0857928);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035210() {
   return (neuron0x20314b0()*-0.0208824);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035250() {
   return (neuron0x20317f0()*-0.00129927);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035290() {
   return (neuron0x2031b30()*-0.0222219);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20352d0() {
   return (neuron0x2031e70()*-0.0474723);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035310() {
   return (neuron0x20321b0()*-0.53816);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035350() {
   return (neuron0x20324f0()*0.0173494);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035390() {
   return (neuron0x2032830()*-0.107241);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20353d0() {
   return (neuron0x2032b70()*0.189833);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035410() {
   return (neuron0x2032eb0()*0.235736);
}

double NNfunction_ns_chiPlus1_uL::synapse0x202fc20() {
   return (neuron0x20331f0()*-0.0251246);
}

double NNfunction_ns_chiPlus1_uL::synapse0x202fc60() {
   return (neuron0x2033750()*0.02644);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1deafe0() {
   return (neuron0x2033970()*0.00841477);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1deb020() {
   return (neuron0x2033cb0()*0.0392432);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035670() {
   return (neuron0x2033ff0()*-0.0151795);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20356b0() {
   return (neuron0x2034330()*0.0147899);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20356f0() {
   return (neuron0x2034670()*-0.0217922);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035730() {
   return (neuron0x20349b0()*0.113055);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035ab0() {
   return (neuron0x202fdf0()*0.0229992);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035af0() {
   return (neuron0x2030130()*0.00855043);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035b30() {
   return (neuron0x2030470()*0.495006);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035b70() {
   return (neuron0x20307b0()*-0.00697905);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035bb0() {
   return (neuron0x2030af0()*0.00733426);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035bf0() {
   return (neuron0x2030e30()*-0.00341263);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035c30() {
   return (neuron0x2031170()*0.00941827);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035c70() {
   return (neuron0x20314b0()*0.0118756);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035cb0() {
   return (neuron0x20317f0()*-0.00711896);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035560() {
   return (neuron0x2031b30()*-0.00644967);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20355a0() {
   return (neuron0x2031e70()*0.0109931);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20355e0() {
   return (neuron0x20321b0()*-0.438762);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035620() {
   return (neuron0x20324f0()*0.0200851);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035f00() {
   return (neuron0x2032830()*-0.00756425);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035f40() {
   return (neuron0x2032b70()*-0.00424357);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035f80() {
   return (neuron0x2032eb0()*0.00862146);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035900() {
   return (neuron0x20331f0()*0.016923);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035940() {
   return (neuron0x2033750()*0.00127534);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20360d0() {
   return (neuron0x2033970()*-0.00354018);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036110() {
   return (neuron0x2033cb0()*-0.00680045);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036150() {
   return (neuron0x2033ff0()*0.00266509);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036190() {
   return (neuron0x2034330()*-0.00679477);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20361d0() {
   return (neuron0x2034670()*-0.0111589);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036210() {
   return (neuron0x20349b0()*7.22392);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036590() {
   return (neuron0x202fdf0()*-0.00143024);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20365d0() {
   return (neuron0x2030130()*0.000800949);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036610() {
   return (neuron0x2030470()*1.45544);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036650() {
   return (neuron0x20307b0()*0.0634729);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036690() {
   return (neuron0x2030af0()*-0.0357043);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20366d0() {
   return (neuron0x2030e30()*-0.0161055);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036710() {
   return (neuron0x2031170()*-0.0207713);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036750() {
   return (neuron0x20314b0()*0.00145351);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036790() {
   return (neuron0x20317f0()*-0.0252749);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20367d0() {
   return (neuron0x2031b30()*-0.053614);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036810() {
   return (neuron0x2031e70()*-0.0513083);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036850() {
   return (neuron0x20321b0()*0.250144);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036890() {
   return (neuron0x20324f0()*-0.0158484);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20368d0() {
   return (neuron0x2032830()*0.0208788);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036910() {
   return (neuron0x2032b70()*0.00348155);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036950() {
   return (neuron0x2032eb0()*-0.0153907);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20363e0() {
   return (neuron0x20331f0()*-0.0211212);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036420() {
   return (neuron0x2033750()*-0.00546681);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1dea290() {
   return (neuron0x2033970()*-0.0296087);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df8ec0() {
   return (neuron0x2033cb0()*0.00648321);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df8f00() {
   return (neuron0x2033ff0()*-0.0332155);
}

double NNfunction_ns_chiPlus1_uL::synapse0x201ee80() {
   return (neuron0x2034330()*-0.00272961);
}

double NNfunction_ns_chiPlus1_uL::synapse0x201eec0() {
   return (neuron0x2034670()*0.0354022);
}

double NNfunction_ns_chiPlus1_uL::synapse0x201ef00() {
   return (neuron0x20349b0()*0.0554912);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df9740() {
   return (neuron0x202fdf0()*-0.120751);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035e80() {
   return (neuron0x2030130()*0.0353976);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035ec0() {
   return (neuron0x2030470()*0.808798);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036aa0() {
   return (neuron0x20307b0()*0.360625);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036ae0() {
   return (neuron0x2030af0()*-0.0765603);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036b20() {
   return (neuron0x2030e30()*0.208866);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036b60() {
   return (neuron0x2031170()*0.0956662);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036ba0() {
   return (neuron0x20314b0()*-0.187396);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036be0() {
   return (neuron0x20317f0()*-0.0273624);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036c20() {
   return (neuron0x2031b30()*0.0635244);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036c60() {
   return (neuron0x2031e70()*0.0752335);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036ca0() {
   return (neuron0x20321b0()*-0.433497);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036ce0() {
   return (neuron0x20324f0()*-0.0505966);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036d20() {
   return (neuron0x2032830()*0.193805);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036d60() {
   return (neuron0x2032b70()*-0.181251);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036da0() {
   return (neuron0x2032eb0()*-0.13561);
}

double NNfunction_ns_chiPlus1_uL::synapse0x202fd30() {
   return (neuron0x20331f0()*0.247199);
}

double NNfunction_ns_chiPlus1_uL::synapse0x202fd70() {
   return (neuron0x2033750()*-0.00896861);
}

double NNfunction_ns_chiPlus1_uL::synapse0x202fdb0() {
   return (neuron0x2033970()*-0.00562517);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036ef0() {
   return (neuron0x2033cb0()*-0.0639436);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036f30() {
   return (neuron0x2033ff0()*0.0208679);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036f70() {
   return (neuron0x2034330()*0.0277399);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036fb0() {
   return (neuron0x2034670()*-0.0278217);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2036ff0() {
   return (neuron0x20349b0()*0.200074);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037370() {
   return (neuron0x202fdf0()*0.0714882);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20373b0() {
   return (neuron0x2030130()*0.144566);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20373f0() {
   return (neuron0x2030470()*0.790282);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037430() {
   return (neuron0x20307b0()*0.328308);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037470() {
   return (neuron0x2030af0()*0.185932);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20374b0() {
   return (neuron0x2030e30()*0.123322);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20374f0() {
   return (neuron0x2031170()*0.0957093);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037530() {
   return (neuron0x20314b0()*0.540741);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037570() {
   return (neuron0x20317f0()*0.045143);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20375b0() {
   return (neuron0x2031b30()*0.0824324);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20375f0() {
   return (neuron0x2031e70()*-0.00126439);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037630() {
   return (neuron0x20321b0()*-0.439187);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037670() {
   return (neuron0x20324f0()*0.284062);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20376b0() {
   return (neuron0x2032830()*-0.145207);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20376f0() {
   return (neuron0x2032b70()*0.190666);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037730() {
   return (neuron0x2032eb0()*-0.0562667);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20371c0() {
   return (neuron0x20331f0()*-0.355086);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037200() {
   return (neuron0x2033750()*0.0831033);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037880() {
   return (neuron0x2033970()*0.107376);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20378c0() {
   return (neuron0x2033cb0()*0.0381183);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037900() {
   return (neuron0x2033ff0()*-0.0225729);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037940() {
   return (neuron0x2034330()*-0.0339773);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037980() {
   return (neuron0x2034670()*-0.0357149);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20379c0() {
   return (neuron0x20349b0()*0.156925);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037d40() {
   return (neuron0x202fdf0()*0.0377354);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037d80() {
   return (neuron0x2030130()*0.00472783);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037dc0() {
   return (neuron0x2030470()*2.53784);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037e00() {
   return (neuron0x20307b0()*-0.000728594);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037e40() {
   return (neuron0x2030af0()*0.0324427);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037e80() {
   return (neuron0x2030e30()*0.0199228);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037ec0() {
   return (neuron0x2031170()*0.0227719);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037f00() {
   return (neuron0x20314b0()*0.0121222);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037f40() {
   return (neuron0x20317f0()*0.0123964);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df9210() {
   return (neuron0x2031b30()*0.0257507);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df9250() {
   return (neuron0x2031e70()*0.00791528);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df9290() {
   return (neuron0x20321b0()*-0.176346);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df92d0() {
   return (neuron0x20324f0()*0.020659);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df9310() {
   return (neuron0x2032830()*-0.00995319);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df9350() {
   return (neuron0x2032b70()*-0.00821729);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df9390() {
   return (neuron0x2032eb0()*0.0149454);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037b90() {
   return (neuron0x20331f0()*0.0094099);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037bd0() {
   return (neuron0x2033750()*0.00665297);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df94e0() {
   return (neuron0x2033970()*0.0147178);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df9520() {
   return (neuron0x2033cb0()*-0.00321945);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df9560() {
   return (neuron0x2033ff0()*0.0124677);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df95a0() {
   return (neuron0x2034330()*0.00279432);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df95e0() {
   return (neuron0x2034670()*-0.0186887);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038790() {
   return (neuron0x20349b0()*-0.112889);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038b10() {
   return (neuron0x202fdf0()*0.572297);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038b50() {
   return (neuron0x2030130()*0.309349);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038b90() {
   return (neuron0x2030470()*-0.483548);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038bd0() {
   return (neuron0x20307b0()*0.681257);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038c10() {
   return (neuron0x2030af0()*-0.457658);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038c50() {
   return (neuron0x2030e30()*-0.39672);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038c90() {
   return (neuron0x2031170()*-0.469159);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038cd0() {
   return (neuron0x20314b0()*-0.398375);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038d10() {
   return (neuron0x20317f0()*0.513461);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038d50() {
   return (neuron0x2031b30()*-0.0692212);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038d90() {
   return (neuron0x2031e70()*0.210292);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038dd0() {
   return (neuron0x20321b0()*-0.555264);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038e10() {
   return (neuron0x20324f0()*-0.322437);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038e50() {
   return (neuron0x2032830()*-0.147791);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038e90() {
   return (neuron0x2032b70()*0.198556);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038ed0() {
   return (neuron0x2032eb0()*0.111134);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038960() {
   return (neuron0x20331f0()*-0.263529);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20389a0() {
   return (neuron0x2033750()*0.514285);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039020() {
   return (neuron0x2033970()*0.0331063);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039060() {
   return (neuron0x2033cb0()*0.0499012);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20390a0() {
   return (neuron0x2033ff0()*0.137025);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20390e0() {
   return (neuron0x2034330()*-0.17297);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039120() {
   return (neuron0x2034670()*-0.0131164);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039160() {
   return (neuron0x20349b0()*0.560261);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20394e0() {
   return (neuron0x202fdf0()*-0.0564772);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039520() {
   return (neuron0x2030130()*-0.0423445);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039560() {
   return (neuron0x2030470()*-0.206076);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20395a0() {
   return (neuron0x20307b0()*0.37707);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20395e0() {
   return (neuron0x2030af0()*-0.0415541);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039620() {
   return (neuron0x2030e30()*0.226978);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039660() {
   return (neuron0x2031170()*-0.206397);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20396a0() {
   return (neuron0x20314b0()*-0.18657);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20396e0() {
   return (neuron0x20317f0()*0.0786633);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039720() {
   return (neuron0x2031b30()*-0.0166279);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039760() {
   return (neuron0x2031e70()*0.0441627);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20397a0() {
   return (neuron0x20321b0()*-1.09545);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20397e0() {
   return (neuron0x20324f0()*0.179579);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039820() {
   return (neuron0x2032830()*-0.0479373);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039860() {
   return (neuron0x2032b70()*0.694111);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20398a0() {
   return (neuron0x2032eb0()*-0.254016);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039330() {
   return (neuron0x20331f0()*-0.0871541);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039370() {
   return (neuron0x2033750()*0.0560395);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20399f0() {
   return (neuron0x2033970()*0.075113);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039a30() {
   return (neuron0x2033cb0()*-0.0283623);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039a70() {
   return (neuron0x2033ff0()*-0.0802675);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039ab0() {
   return (neuron0x2034330()*-0.0950711);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039af0() {
   return (neuron0x2034670()*-0.05593);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039b30() {
   return (neuron0x20349b0()*0.0519384);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2033640() {
   return (neuron0x202fdf0()*0.584599);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2033680() {
   return (neuron0x2030130()*0.0392543);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20336c0() {
   return (neuron0x2030470()*0.905838);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2033700() {
   return (neuron0x20307b0()*0.872921);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a0c0() {
   return (neuron0x2030af0()*0.439178);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a100() {
   return (neuron0x2030e30()*0.44475);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a140() {
   return (neuron0x2031170()*0.0132776);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a180() {
   return (neuron0x20314b0()*0.425918);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a1c0() {
   return (neuron0x20317f0()*-0.0591989);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a200() {
   return (neuron0x2031b30()*-0.228009);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a240() {
   return (neuron0x2031e70()*0.194755);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a280() {
   return (neuron0x20321b0()*0.0863398);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a2c0() {
   return (neuron0x20324f0()*-0.0850961);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a300() {
   return (neuron0x2032830()*0.133855);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a340() {
   return (neuron0x2032b70()*-0.2808);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a380() {
   return (neuron0x2032eb0()*0.226329);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039d00() {
   return (neuron0x20331f0()*0.196318);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039d40() {
   return (neuron0x2033750()*-0.482038);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a4d0() {
   return (neuron0x2033970()*0.334891);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a510() {
   return (neuron0x2033cb0()*-0.107317);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a550() {
   return (neuron0x2033ff0()*0.286143);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a590() {
   return (neuron0x2034330()*0.136417);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a5d0() {
   return (neuron0x2034670()*-0.225893);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a610() {
   return (neuron0x20349b0()*1.33145);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a990() {
   return (neuron0x202fdf0()*-0.0724961);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a9d0() {
   return (neuron0x2030130()*-0.0034059);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203aa10() {
   return (neuron0x2030470()*-0.180374);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203aa50() {
   return (neuron0x20307b0()*0.0305599);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203aa90() {
   return (neuron0x2030af0()*-0.0125507);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203aad0() {
   return (neuron0x2030e30()*0.00181422);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ab10() {
   return (neuron0x2031170()*-5.8873e-05);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ab50() {
   return (neuron0x20314b0()*0.00473617);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ab90() {
   return (neuron0x20317f0()*-0.022924);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203abd0() {
   return (neuron0x2031b30()*-0.0324619);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ac10() {
   return (neuron0x2031e70()*0.0157173);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ac50() {
   return (neuron0x20321b0()*1.9621);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ac90() {
   return (neuron0x20324f0()*-0.0304324);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203acd0() {
   return (neuron0x2032830()*-0.0353684);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ad10() {
   return (neuron0x2032b70()*0.0144845);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ad50() {
   return (neuron0x2032eb0()*-0.0255453);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a7e0() {
   return (neuron0x20331f0()*-0.011758);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a820() {
   return (neuron0x2033750()*0.0106949);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203aea0() {
   return (neuron0x2033970()*-0.0126021);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203aee0() {
   return (neuron0x2033cb0()*0.000137223);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203af20() {
   return (neuron0x2033ff0()*-0.018326);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203af60() {
   return (neuron0x2034330()*-0.00368859);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203afa0() {
   return (neuron0x2034670()*-0.00281566);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203afe0() {
   return (neuron0x20349b0()*3.91046);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b360() {
   return (neuron0x202fdf0()*0.00478605);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b3a0() {
   return (neuron0x2030130()*0.0519111);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b3e0() {
   return (neuron0x2030470()*-1.83551);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b420() {
   return (neuron0x20307b0()*0.00948438);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b460() {
   return (neuron0x2030af0()*-0.0659922);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b4a0() {
   return (neuron0x2030e30()*-0.02031);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b4e0() {
   return (neuron0x2031170()*0.0385545);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b520() {
   return (neuron0x20314b0()*-0.0717123);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b560() {
   return (neuron0x20317f0()*-0.00306321);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b5a0() {
   return (neuron0x2031b30()*-0.0029746);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b5e0() {
   return (neuron0x2031e70()*-0.0610647);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b620() {
   return (neuron0x20321b0()*0.536665);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b660() {
   return (neuron0x20324f0()*-0.0822641);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b6a0() {
   return (neuron0x2032830()*-0.0202825);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b6e0() {
   return (neuron0x2032b70()*-0.00511602);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b720() {
   return (neuron0x2032eb0()*-0.0293816);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b1b0() {
   return (neuron0x20331f0()*-0.153788);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b1f0() {
   return (neuron0x2033750()*-0.00851127);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037f80() {
   return (neuron0x2033970()*0.0191604);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037fc0() {
   return (neuron0x2033cb0()*-0.034271);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038000() {
   return (neuron0x2033ff0()*0.0284861);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038040() {
   return (neuron0x2034330()*0.0381178);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038080() {
   return (neuron0x2034670()*0.0545867);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20380c0() {
   return (neuron0x20349b0()*-0.979471);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038440() {
   return (neuron0x202fdf0()*-0.019495);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038480() {
   return (neuron0x2030130()*0.00216508);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20384c0() {
   return (neuron0x2030470()*3.87545);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038500() {
   return (neuron0x20307b0()*-0.0260965);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038540() {
   return (neuron0x2030af0()*0.0125625);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038580() {
   return (neuron0x2030e30()*0.00888682);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20385c0() {
   return (neuron0x2031170()*0.00611691);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038600() {
   return (neuron0x20314b0()*0.00118549);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038640() {
   return (neuron0x20317f0()*-0.00291971);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038680() {
   return (neuron0x2031b30()*-0.000120544);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20386c0() {
   return (neuron0x2031e70()*0.00707829);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038700() {
   return (neuron0x20321b0()*-0.632249);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038740() {
   return (neuron0x20324f0()*0.0033367);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c880() {
   return (neuron0x2032830()*-0.0166799);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c8c0() {
   return (neuron0x2032b70()*-0.0156108);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c900() {
   return (neuron0x2032eb0()*-0.0156721);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038290() {
   return (neuron0x20331f0()*-0.0366587);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20382d0() {
   return (neuron0x2033750()*-0.0110993);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ca50() {
   return (neuron0x2033970()*-0.0139229);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ca90() {
   return (neuron0x2033cb0()*-0.0118403);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203cad0() {
   return (neuron0x2033ff0()*0.0346508);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203cb10() {
   return (neuron0x2034330()*0.0061756);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203cb50() {
   return (neuron0x2034670()*-0.00965166);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203cb90() {
   return (neuron0x20349b0()*0.00660156);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203cf10() {
   return (neuron0x202fdf0()*-0.155118);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203cf50() {
   return (neuron0x2030130()*-0.0100313);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203cf90() {
   return (neuron0x2030470()*1.13853);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203cfd0() {
   return (neuron0x20307b0()*1.76863);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d010() {
   return (neuron0x2030af0()*-0.0130233);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d050() {
   return (neuron0x2030e30()*-0.128384);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d090() {
   return (neuron0x2031170()*-0.0233065);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d0d0() {
   return (neuron0x20314b0()*-0.0366618);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d110() {
   return (neuron0x20317f0()*-0.0312808);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d150() {
   return (neuron0x2031b30()*-0.0271732);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d190() {
   return (neuron0x2031e70()*0.0896541);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d1d0() {
   return (neuron0x20321b0()*1.80778);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d210() {
   return (neuron0x20324f0()*0.115953);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d250() {
   return (neuron0x2032830()*0.0870521);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d290() {
   return (neuron0x2032b70()*0.0993066);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d2d0() {
   return (neuron0x2032eb0()*0.0864296);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203cd60() {
   return (neuron0x20331f0()*-0.140592);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203cda0() {
   return (neuron0x2033750()*0.228459);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d420() {
   return (neuron0x2033970()*0.0325335);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d460() {
   return (neuron0x2033cb0()*-0.00492977);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d4a0() {
   return (neuron0x2033ff0()*-0.052842);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d4e0() {
   return (neuron0x2034330()*0.138228);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d520() {
   return (neuron0x2034670()*-0.0171987);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d560() {
   return (neuron0x20349b0()*-0.181676);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d8e0() {
   return (neuron0x202fdf0()*-0.0108213);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d920() {
   return (neuron0x2030130()*0.00415092);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d960() {
   return (neuron0x2030470()*0.0610189);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d9a0() {
   return (neuron0x20307b0()*0.0392325);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d9e0() {
   return (neuron0x2030af0()*0.00206607);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203da20() {
   return (neuron0x2030e30()*0.00992501);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203da60() {
   return (neuron0x2031170()*0.00542067);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203daa0() {
   return (neuron0x20314b0()*-0.00570285);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203dae0() {
   return (neuron0x20317f0()*-0.0156023);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203db20() {
   return (neuron0x2031b30()*0.000672192);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203db60() {
   return (neuron0x2031e70()*0.0215765);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203dba0() {
   return (neuron0x20321b0()*-3.39391);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203dbe0() {
   return (neuron0x20324f0()*-0.0128988);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203dc20() {
   return (neuron0x2032830()*-0.0119531);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203dc60() {
   return (neuron0x2032b70()*0.00112136);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203dca0() {
   return (neuron0x2032eb0()*0.0263908);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d730() {
   return (neuron0x20331f0()*-0.0142686);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d770() {
   return (neuron0x2033750()*0.000241351);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ddf0() {
   return (neuron0x2033970()*-0.0209349);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203de30() {
   return (neuron0x2033cb0()*-0.00630827);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203de70() {
   return (neuron0x2033ff0()*0.0064125);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203deb0() {
   return (neuron0x2034330()*0.00288122);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203def0() {
   return (neuron0x2034670()*0.00313309);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203df30() {
   return (neuron0x20349b0()*0.00281968);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e2b0() {
   return (neuron0x202fdf0()*-0.0899087);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e2f0() {
   return (neuron0x2030130()*-0.058585);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e330() {
   return (neuron0x2030470()*0.300014);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e370() {
   return (neuron0x20307b0()*0.825931);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e3b0() {
   return (neuron0x2030af0()*-0.0900874);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e3f0() {
   return (neuron0x2030e30()*-0.07698);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e430() {
   return (neuron0x2031170()*-0.0945597);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e470() {
   return (neuron0x20314b0()*-0.0880438);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e4b0() {
   return (neuron0x20317f0()*-0.0395841);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e4f0() {
   return (neuron0x2031b30()*-0.0525787);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e530() {
   return (neuron0x2031e70()*-0.0474985);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e570() {
   return (neuron0x20321b0()*0.857816);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e5b0() {
   return (neuron0x20324f0()*-0.00808954);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e5f0() {
   return (neuron0x2032830()*-0.0545135);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e630() {
   return (neuron0x2032b70()*-0.152917);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e670() {
   return (neuron0x2032eb0()*-0.128491);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e100() {
   return (neuron0x20331f0()*-0.139776);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e140() {
   return (neuron0x2033750()*0.082932);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e7c0() {
   return (neuron0x2033970()*0.0624438);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e800() {
   return (neuron0x2033cb0()*0.0516067);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e840() {
   return (neuron0x2033ff0()*-0.00263581);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e880() {
   return (neuron0x2034330()*-0.00234331);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e8c0() {
   return (neuron0x2034670()*0.0531789);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e900() {
   return (neuron0x20349b0()*0.0292598);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ec80() {
   return (neuron0x202fdf0()*-0.115408);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2030010() {
   return (neuron0x2030130()*0.0691017);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2030050() {
   return (neuron0x2030470()*-0.814527);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2030350() {
   return (neuron0x20307b0()*1.10538);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2030390() {
   return (neuron0x2030af0()*-0.14812);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2030690() {
   return (neuron0x2030e30()*-0.219173);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20306d0() {
   return (neuron0x2031170()*-0.401816);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20309d0() {
   return (neuron0x20314b0()*-0.155683);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2030a10() {
   return (neuron0x20317f0()*9.57904e-05);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2030d10() {
   return (neuron0x2031b30()*-0.0222211);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2030d50() {
   return (neuron0x2031e70()*-0.227016);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2031050() {
   return (neuron0x20321b0()*0.984785);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2031090() {
   return (neuron0x20324f0()*-0.0656338);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2031390() {
   return (neuron0x2032830()*-0.240262);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20313d0() {
   return (neuron0x2032b70()*-0.149874);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20316d0() {
   return (neuron0x2032eb0()*-0.0747609);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2031710() {
   return (neuron0x20331f0()*-0.220551);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2031a10() {
   return (neuron0x2033750()*0.15117);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2031a50() {
   return (neuron0x2033970()*0.0050021);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2031d50() {
   return (neuron0x2033cb0()*0.104831);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2031d90() {
   return (neuron0x2033ff0()*-0.138874);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2032090() {
   return (neuron0x2034330()*-0.147326);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20320d0() {
   return (neuron0x2034670()*0.0734779);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20323d0() {
   return (neuron0x20349b0()*-0.111283);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2032410() {
   return (neuron0x202fdf0()*0.0377896);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20330d0() {
   return (neuron0x2030130()*0.00840883);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2033110() {
   return (neuron0x2030470()*-1.37416);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ead0() {
   return (neuron0x20307b0()*-0.0202114);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203eb10() {
   return (neuron0x2030af0()*-0.0512295);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2033410() {
   return (neuron0x2030e30()*0.02413);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2033450() {
   return (neuron0x2031170()*-0.0145649);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1deaec0() {
   return (neuron0x20314b0()*0.00688909);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1deaf00() {
   return (neuron0x20317f0()*0.0158324);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2033b90() {
   return (neuron0x2031b30()*-0.032842);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2033bd0() {
   return (neuron0x2031e70()*-0.0537493);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2033ed0() {
   return (neuron0x20321b0()*-0.824866);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2033f10() {
   return (neuron0x20324f0()*-0.0501115);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2034210() {
   return (neuron0x2032830()*-0.0531765);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2034250() {
   return (neuron0x2032b70()*-0.0328493);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2034550() {
   return (neuron0x2032eb0()*-0.00906305);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2034590() {
   return (neuron0x20331f0()*-0.0284335);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2034890() {
   return (neuron0x2033750()*-0.0543489);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20348d0() {
   return (neuron0x2033970()*-0.0367608);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2034bd0() {
   return (neuron0x2033cb0()*0.0113759);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2034c10() {
   return (neuron0x2033ff0()*0.0168388);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2032710() {
   return (neuron0x2034330()*0.0112061);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2032750() {
   return (neuron0x2034670()*-0.00625696);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20409f0() {
   return (neuron0x20349b0()*1.52942);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040d70() {
   return (neuron0x202fdf0()*-0.0514797);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040db0() {
   return (neuron0x2030130()*-0.0750892);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040df0() {
   return (neuron0x2030470()*-0.0745704);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040e30() {
   return (neuron0x20307b0()*-0.308901);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040e70() {
   return (neuron0x2030af0()*0.0250042);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040eb0() {
   return (neuron0x2030e30()*-0.0406637);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040ef0() {
   return (neuron0x2031170()*-0.00426328);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040f30() {
   return (neuron0x20314b0()*0.00347977);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040f70() {
   return (neuron0x20317f0()*-0.00348174);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040fb0() {
   return (neuron0x2031b30()*-0.103044);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040ff0() {
   return (neuron0x2031e70()*-0.0378233);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041030() {
   return (neuron0x20321b0()*-0.659805);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041070() {
   return (neuron0x20324f0()*-0.095234);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20410b0() {
   return (neuron0x2032830()*-0.052365);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20410f0() {
   return (neuron0x2032b70()*-0.0521934);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041130() {
   return (neuron0x2032eb0()*-0.0181005);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040bc0() {
   return (neuron0x20331f0()*0.0119449);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040c00() {
   return (neuron0x2033750()*-0.0606157);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041280() {
   return (neuron0x2033970()*-0.0500007);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20412c0() {
   return (neuron0x2033cb0()*-0.0400072);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041300() {
   return (neuron0x2033ff0()*0.0518288);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041340() {
   return (neuron0x2034330()*0.026268);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041380() {
   return (neuron0x2034670()*-0.019804);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20413c0() {
   return (neuron0x20349b0()*0.729486);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041740() {
   return (neuron0x202fdf0()*-0.0075703);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041780() {
   return (neuron0x2030130()*0.0014627);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20417c0() {
   return (neuron0x2030470()*0.0439424);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041800() {
   return (neuron0x20307b0()*-6.54367);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041840() {
   return (neuron0x2030af0()*0.00690488);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041880() {
   return (neuron0x2030e30()*-0.00682461);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20418c0() {
   return (neuron0x2031170()*-0.0212823);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041900() {
   return (neuron0x20314b0()*0.0304273);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041940() {
   return (neuron0x20317f0()*0.0028362);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041980() {
   return (neuron0x2031b30()*0.010815);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20419c0() {
   return (neuron0x2031e70()*-0.00796734);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041a00() {
   return (neuron0x20321b0()*0.629102);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041a40() {
   return (neuron0x20324f0()*-0.0161603);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041a80() {
   return (neuron0x2032830()*0.0798435);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041ac0() {
   return (neuron0x2032b70()*-0.00746862);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041b00() {
   return (neuron0x2032eb0()*-0.0280066);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041590() {
   return (neuron0x20331f0()*0.0727772);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20415d0() {
   return (neuron0x2033750()*0.00118301);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041c50() {
   return (neuron0x2033970()*-0.00532707);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041c90() {
   return (neuron0x2033cb0()*-0.00792446);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041cd0() {
   return (neuron0x2033ff0()*0.0110369);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041d10() {
   return (neuron0x2034330()*0.000824149);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041d50() {
   return (neuron0x2034670()*-0.0128751);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041d90() {
   return (neuron0x20349b0()*-0.0297577);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042110() {
   return (neuron0x202fdf0()*0.0791558);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042150() {
   return (neuron0x2030130()*-0.0124202);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042190() {
   return (neuron0x2030470()*-5.7195);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20421d0() {
   return (neuron0x20307b0()*-0.015702);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042210() {
   return (neuron0x2030af0()*-0.00263333);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042250() {
   return (neuron0x2030e30()*-0.0151152);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042290() {
   return (neuron0x2031170()*-0.020008);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20422d0() {
   return (neuron0x20314b0()*-0.0146945);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042310() {
   return (neuron0x20317f0()*0.018404);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042350() {
   return (neuron0x2031b30()*-0.00705985);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042390() {
   return (neuron0x2031e70()*-0.00439174);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20423d0() {
   return (neuron0x20321b0()*0.345205);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042410() {
   return (neuron0x20324f0()*-0.0254118);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042450() {
   return (neuron0x2032830()*0.0108111);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042490() {
   return (neuron0x2032b70()*0.000710208);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20424d0() {
   return (neuron0x2032eb0()*-0.00909847);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041f60() {
   return (neuron0x20331f0()*-0.00957167);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2041fa0() {
   return (neuron0x2033750()*0.0113845);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042620() {
   return (neuron0x2033970()*0.0141981);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042660() {
   return (neuron0x2033cb0()*0.00887872);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20426a0() {
   return (neuron0x2033ff0()*0.00366915);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20426e0() {
   return (neuron0x2034330()*-0.00669246);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042720() {
   return (neuron0x2034670()*0.00278491);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042760() {
   return (neuron0x20349b0()*-6.79417);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042ae0() {
   return (neuron0x202fdf0()*0.209108);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042b20() {
   return (neuron0x2030130()*-0.144853);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042b60() {
   return (neuron0x2030470()*0.941435);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042ba0() {
   return (neuron0x20307b0()*0.285658);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042be0() {
   return (neuron0x2030af0()*-0.00695519);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042c20() {
   return (neuron0x2030e30()*-0.605443);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042c60() {
   return (neuron0x2031170()*0.105585);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042ca0() {
   return (neuron0x20314b0()*-0.0212752);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042ce0() {
   return (neuron0x20317f0()*0.0642081);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042d20() {
   return (neuron0x2031b30()*0.0209025);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042d60() {
   return (neuron0x2031e70()*0.036595);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042da0() {
   return (neuron0x20321b0()*-0.553463);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042de0() {
   return (neuron0x20324f0()*-0.17065);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042e20() {
   return (neuron0x2032830()*0.0708569);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042e60() {
   return (neuron0x2032b70()*0.361456);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042ea0() {
   return (neuron0x2032eb0()*0.153089);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042930() {
   return (neuron0x20331f0()*-0.0761375);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042970() {
   return (neuron0x2033750()*0.055709);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042ff0() {
   return (neuron0x2033970()*0.327423);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043030() {
   return (neuron0x2033cb0()*-0.17427);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043070() {
   return (neuron0x2033ff0()*-0.0280092);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20430b0() {
   return (neuron0x2034330()*-0.0363329);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20430f0() {
   return (neuron0x2034670()*-0.014046);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043130() {
   return (neuron0x20349b0()*-0.0920513);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20434b0() {
   return (neuron0x202fdf0()*0.100972);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20434f0() {
   return (neuron0x2030130()*0.00493631);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043530() {
   return (neuron0x2030470()*1.32898);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043570() {
   return (neuron0x20307b0()*0.0119529);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20435b0() {
   return (neuron0x2030af0()*-0.0264179);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20435f0() {
   return (neuron0x2030e30()*-0.03086);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043630() {
   return (neuron0x2031170()*-0.008977);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043670() {
   return (neuron0x20314b0()*0.0238488);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20436b0() {
   return (neuron0x20317f0()*0.00692569);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b870() {
   return (neuron0x2031b30()*-0.026668);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b8b0() {
   return (neuron0x2031e70()*-0.000399643);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b8f0() {
   return (neuron0x20321b0()*0.285075);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b930() {
   return (neuron0x20324f0()*0.0227886);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b970() {
   return (neuron0x2032830()*0.0269962);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b9b0() {
   return (neuron0x2032b70()*0.0123345);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b9f0() {
   return (neuron0x2032eb0()*0.0148785);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043300() {
   return (neuron0x20331f0()*0.0118608);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043340() {
   return (neuron0x2033750()*0.038217);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203bb40() {
   return (neuron0x2033970()*0.0254479);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203bb80() {
   return (neuron0x2033cb0()*0.0130334);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203bbc0() {
   return (neuron0x2033ff0()*0.0164314);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203bc00() {
   return (neuron0x2034330()*0.00450163);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203bc40() {
   return (neuron0x2034670()*0.0107636);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203bc80() {
   return (neuron0x20349b0()*3.76308);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c000() {
   return (neuron0x202fdf0()*-0.291958);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c040() {
   return (neuron0x2030130()*0.189526);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c080() {
   return (neuron0x2030470()*-0.155397);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c0c0() {
   return (neuron0x20307b0()*-0.039662);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c100() {
   return (neuron0x2030af0()*-0.30156);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c140() {
   return (neuron0x2030e30()*-0.47602);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c180() {
   return (neuron0x2031170()*-0.226845);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c1c0() {
   return (neuron0x20314b0()*0.126898);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c200() {
   return (neuron0x20317f0()*-0.056926);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c240() {
   return (neuron0x2031b30()*-0.0463578);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c280() {
   return (neuron0x2031e70()*0.069827);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c2c0() {
   return (neuron0x20321b0()*-0.84007);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c300() {
   return (neuron0x20324f0()*-0.296354);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c340() {
   return (neuron0x2032830()*-0.188809);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c380() {
   return (neuron0x2032b70()*0.60025);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c3c0() {
   return (neuron0x2032eb0()*-0.533929);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203be50() {
   return (neuron0x20331f0()*0.0359886);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203be90() {
   return (neuron0x2033750()*0.489323);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c510() {
   return (neuron0x2033970()*-0.0743434);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c550() {
   return (neuron0x2033cb0()*-0.0108207);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c590() {
   return (neuron0x2033ff0()*0.209176);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c5d0() {
   return (neuron0x2034330()*0.0907375);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c610() {
   return (neuron0x2034670()*-0.139162);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c650() {
   return (neuron0x20349b0()*-0.442393);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203c820() {
   return (neuron0x202fdf0()*-0.0516305);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20458b0() {
   return (neuron0x2030130()*0.0535823);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20458f0() {
   return (neuron0x2030470()*0.0354056);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045930() {
   return (neuron0x20307b0()*0.109242);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045970() {
   return (neuron0x2030af0()*-0.135174);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20459b0() {
   return (neuron0x2030e30()*-0.0224344);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20459f0() {
   return (neuron0x2031170()*-0.0132599);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045a30() {
   return (neuron0x20314b0()*0.0189842);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045a70() {
   return (neuron0x20317f0()*-0.0926029);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045ab0() {
   return (neuron0x2031b30()*0.0443771);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045af0() {
   return (neuron0x2031e70()*-0.303582);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045b30() {
   return (neuron0x20321b0()*-0.994951);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045b70() {
   return (neuron0x20324f0()*0.187192);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045bb0() {
   return (neuron0x2032830()*0.0690475);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045bf0() {
   return (neuron0x2032b70()*0.0467653);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045c30() {
   return (neuron0x2032eb0()*0.115378);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045700() {
   return (neuron0x20331f0()*0.151723);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045740() {
   return (neuron0x2033750()*0.142423);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045d80() {
   return (neuron0x2033970()*0.166871);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045dc0() {
   return (neuron0x2033cb0()*0.139101);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045e00() {
   return (neuron0x2033ff0()*-0.0452464);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045e40() {
   return (neuron0x2034330()*-0.00572817);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045e80() {
   return (neuron0x2034670()*-0.0589817);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045ec0() {
   return (neuron0x20349b0()*0.0472448);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046240() {
   return (neuron0x202fdf0()*-1.5376);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046280() {
   return (neuron0x2030130()*0.0413044);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20462c0() {
   return (neuron0x2030470()*-0.145936);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046300() {
   return (neuron0x20307b0()*0.141807);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046340() {
   return (neuron0x2030af0()*-0.0967251);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046380() {
   return (neuron0x2030e30()*0.223742);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20463c0() {
   return (neuron0x2031170()*0.0486472);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046400() {
   return (neuron0x20314b0()*-0.137776);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046440() {
   return (neuron0x20317f0()*0.0572686);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046480() {
   return (neuron0x2031b30()*-0.136638);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20464c0() {
   return (neuron0x2031e70()*-0.10343);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046500() {
   return (neuron0x20321b0()*1.34521);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046540() {
   return (neuron0x20324f0()*-0.0496076);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046580() {
   return (neuron0x2032830()*-0.0507575);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20465c0() {
   return (neuron0x2032b70()*-0.0411882);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046600() {
   return (neuron0x2032eb0()*0.0756204);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046090() {
   return (neuron0x20331f0()*0.0827205);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20460d0() {
   return (neuron0x2033750()*-0.0229056);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046750() {
   return (neuron0x2033970()*-0.128911);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046790() {
   return (neuron0x2033cb0()*0.0483854);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20467d0() {
   return (neuron0x2033ff0()*0.0197909);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046810() {
   return (neuron0x2034330()*0.10802);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046850() {
   return (neuron0x2034670()*0.0223337);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046890() {
   return (neuron0x20349b0()*-0.306139);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046c10() {
   return (neuron0x202fdf0()*0.367595);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046c50() {
   return (neuron0x2030130()*-0.0052162);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046c90() {
   return (neuron0x2030470()*1.49285);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046cd0() {
   return (neuron0x20307b0()*0.116133);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046d10() {
   return (neuron0x2030af0()*-0.39458);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046d50() {
   return (neuron0x2030e30()*-0.200594);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046d90() {
   return (neuron0x2031170()*0.00760907);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046dd0() {
   return (neuron0x20314b0()*0.16186);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046e10() {
   return (neuron0x20317f0()*0.445388);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046e50() {
   return (neuron0x2031b30()*0.290512);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046e90() {
   return (neuron0x2031e70()*-0.265859);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046ed0() {
   return (neuron0x20321b0()*0.613806);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046f10() {
   return (neuron0x20324f0()*0.319809);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046f50() {
   return (neuron0x2032830()*0.330873);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046f90() {
   return (neuron0x2032b70()*-0.163284);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046fd0() {
   return (neuron0x2032eb0()*-0.228618);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046a60() {
   return (neuron0x20331f0()*0.166033);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046aa0() {
   return (neuron0x2033750()*0.0843796);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047120() {
   return (neuron0x2033970()*-0.504128);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047160() {
   return (neuron0x2033cb0()*0.314972);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20471a0() {
   return (neuron0x2033ff0()*-0.150863);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20471e0() {
   return (neuron0x2034330()*0.0499024);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047220() {
   return (neuron0x2034670()*0.230512);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047260() {
   return (neuron0x20349b0()*0.0622234);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20475e0() {
   return (neuron0x202fdf0()*-0.00680329);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047620() {
   return (neuron0x2030130()*0.00211281);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047660() {
   return (neuron0x2030470()*0.950019);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20476a0() {
   return (neuron0x20307b0()*0.963199);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20476e0() {
   return (neuron0x2030af0()*-0.021514);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047720() {
   return (neuron0x2030e30()*0.00195929);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047760() {
   return (neuron0x2031170()*-0.00653959);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20477a0() {
   return (neuron0x20314b0()*-0.0101209);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20477e0() {
   return (neuron0x20317f0()*-0.0233945);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047820() {
   return (neuron0x2031b30()*0.0140298);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047860() {
   return (neuron0x2031e70()*-0.0333967);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20478a0() {
   return (neuron0x20321b0()*0.39207);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20478e0() {
   return (neuron0x20324f0()*0.00282753);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047920() {
   return (neuron0x2032830()*0.00143494);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047960() {
   return (neuron0x2032b70()*0.0251221);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20479a0() {
   return (neuron0x2032eb0()*0.0362409);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047430() {
   return (neuron0x20331f0()*0.0104852);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047470() {
   return (neuron0x2033750()*0.00284826);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047af0() {
   return (neuron0x2033970()*0.0136994);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047b30() {
   return (neuron0x2033cb0()*-0.0171686);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047b70() {
   return (neuron0x2033ff0()*-0.0609562);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047bb0() {
   return (neuron0x2034330()*-0.0138826);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047bf0() {
   return (neuron0x2034670()*0.0158956);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047c30() {
   return (neuron0x20349b0()*0.0635486);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047fb0() {
   return (neuron0x202fdf0()*0.0172808);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047ff0() {
   return (neuron0x2030130()*-0.00140206);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048030() {
   return (neuron0x2030470()*0.210157);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048070() {
   return (neuron0x20307b0()*0.0326366);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20480b0() {
   return (neuron0x2030af0()*-0.00781689);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20480f0() {
   return (neuron0x2030e30()*0.0148385);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048130() {
   return (neuron0x2031170()*-0.00161933);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048170() {
   return (neuron0x20314b0()*0.00525699);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20481b0() {
   return (neuron0x20317f0()*-0.000778575);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20481f0() {
   return (neuron0x2031b30()*0.00493454);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048230() {
   return (neuron0x2031e70()*-0.0225037);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048270() {
   return (neuron0x20321b0()*-0.726408);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20482b0() {
   return (neuron0x20324f0()*0.00240451);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20482f0() {
   return (neuron0x2032830()*-0.0149499);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048330() {
   return (neuron0x2032b70()*0.00293584);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048370() {
   return (neuron0x2032eb0()*-0.00484923);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047e00() {
   return (neuron0x20331f0()*-0.0328112);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047e40() {
   return (neuron0x2033750()*-0.0170014);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20484c0() {
   return (neuron0x2033970()*-0.00646744);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048500() {
   return (neuron0x2033cb0()*0.00951903);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048540() {
   return (neuron0x2033ff0()*-0.0123538);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048580() {
   return (neuron0x2034330()*-0.00128424);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20485c0() {
   return (neuron0x2034670()*0.00209849);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048600() {
   return (neuron0x20349b0()*2.07668);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048980() {
   return (neuron0x202fdf0()*0.100281);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20489c0() {
   return (neuron0x2030130()*0.0163451);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048a00() {
   return (neuron0x2030470()*0.358856);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048a40() {
   return (neuron0x20307b0()*0.219174);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048a80() {
   return (neuron0x2030af0()*1.12607);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048ac0() {
   return (neuron0x2030e30()*0.00655452);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048b00() {
   return (neuron0x2031170()*-0.114641);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048b40() {
   return (neuron0x20314b0()*-0.248776);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048b80() {
   return (neuron0x20317f0()*0.0115982);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048bc0() {
   return (neuron0x2031b30()*-0.0457385);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048c00() {
   return (neuron0x2031e70()*0.194247);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048c40() {
   return (neuron0x20321b0()*-0.205458);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048c80() {
   return (neuron0x20324f0()*-0.192283);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048cc0() {
   return (neuron0x2032830()*-0.109402);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048d00() {
   return (neuron0x2032b70()*-0.124418);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048d40() {
   return (neuron0x2032eb0()*0.212783);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20487d0() {
   return (neuron0x20331f0()*-0.207547);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048810() {
   return (neuron0x2033750()*0.00609726);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048e90() {
   return (neuron0x2033970()*-0.169666);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048ed0() {
   return (neuron0x2033cb0()*-0.114437);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048f10() {
   return (neuron0x2033ff0()*-0.109872);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048f50() {
   return (neuron0x2034330()*-0.0415525);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048f90() {
   return (neuron0x2034670()*0.013909);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048fd0() {
   return (neuron0x20349b0()*0.00853757);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049350() {
   return (neuron0x202fdf0()*0.0533915);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049390() {
   return (neuron0x2030130()*0.140466);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20493d0() {
   return (neuron0x2030470()*-0.166152);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049410() {
   return (neuron0x20307b0()*0.494132);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049450() {
   return (neuron0x2030af0()*-0.0225737);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049490() {
   return (neuron0x2030e30()*-0.151767);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20494d0() {
   return (neuron0x2031170()*0.0770154);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049510() {
   return (neuron0x20314b0()*-0.237525);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049550() {
   return (neuron0x20317f0()*0.0744274);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049590() {
   return (neuron0x2031b30()*0.00024716);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20495d0() {
   return (neuron0x2031e70()*-0.0973697);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049610() {
   return (neuron0x20321b0()*0.258248);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049650() {
   return (neuron0x20324f0()*0.560521);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049690() {
   return (neuron0x2032830()*-0.500404);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20496d0() {
   return (neuron0x2032b70()*-0.078924);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049710() {
   return (neuron0x2032eb0()*-0.0894916);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20491a0() {
   return (neuron0x20331f0()*-0.162562);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20491e0() {
   return (neuron0x2033750()*0.168652);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049860() {
   return (neuron0x2033970()*0.148391);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20498a0() {
   return (neuron0x2033cb0()*0.185691);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20498e0() {
   return (neuron0x2033ff0()*-0.153534);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049920() {
   return (neuron0x2034330()*-0.0194946);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049960() {
   return (neuron0x2034670()*-0.0525177);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20499a0() {
   return (neuron0x20349b0()*-0.0390149);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049d20() {
   return (neuron0x202fdf0()*0.0365722);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049d60() {
   return (neuron0x2030130()*0.0467001);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049da0() {
   return (neuron0x2030470()*0.0922185);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049de0() {
   return (neuron0x20307b0()*-0.090784);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049e20() {
   return (neuron0x2030af0()*-0.056973);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049e60() {
   return (neuron0x2030e30()*0.0172675);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049ea0() {
   return (neuron0x2031170()*-0.0677777);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049ee0() {
   return (neuron0x20314b0()*0.0120816);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049f20() {
   return (neuron0x20317f0()*0.497646);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049f60() {
   return (neuron0x2031b30()*-0.230513);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049fa0() {
   return (neuron0x2031e70()*0.0288036);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049fe0() {
   return (neuron0x20321b0()*-1.54648);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204a020() {
   return (neuron0x20324f0()*0.17112);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204a060() {
   return (neuron0x2032830()*-0.115422);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204a0a0() {
   return (neuron0x2032b70()*0.195032);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204a0e0() {
   return (neuron0x2032eb0()*0.084076);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049b70() {
   return (neuron0x20331f0()*0.00838875);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2049bb0() {
   return (neuron0x2033750()*0.144961);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204a230() {
   return (neuron0x2033970()*0.147266);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204a270() {
   return (neuron0x2033cb0()*0.0583858);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204a2b0() {
   return (neuron0x2033ff0()*-0.118728);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204a2f0() {
   return (neuron0x2034330()*-0.0554074);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204a330() {
   return (neuron0x2034670()*-0.0293203);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204a370() {
   return (neuron0x20349b0()*0.0326613);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204a6f0() {
   return (neuron0x202fdf0()*-0.127058);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ecc0() {
   return (neuron0x2030130()*0.0947266);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ed00() {
   return (neuron0x2030470()*-0.41433);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ed40() {
   return (neuron0x20307b0()*0.729851);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ef90() {
   return (neuron0x2030af0()*-0.189167);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203efd0() {
   return (neuron0x2030e30()*-0.064232);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203f010() {
   return (neuron0x2031170()*-0.088232);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203f260() {
   return (neuron0x20314b0()*0.104513);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203f2a0() {
   return (neuron0x20317f0()*-0.124637);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203f4f0() {
   return (neuron0x2031b30()*0.138149);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203f530() {
   return (neuron0x2031e70()*-0.102755);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203f570() {
   return (neuron0x20321b0()*-0.0238903);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203f7c0() {
   return (neuron0x20324f0()*-0.206712);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203f800() {
   return (neuron0x2032830()*0.15016);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203fa50() {
   return (neuron0x2032b70()*-0.0108347);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203fa90() {
   return (neuron0x2032eb0()*-0.0681715);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204a540() {
   return (neuron0x20331f0()*0.10154);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204a580() {
   return (neuron0x2033750()*-0.0715292);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203fbe0() {
   return (neuron0x2033970()*-0.141168);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20400f0() {
   return (neuron0x2033cb0()*-0.00661814);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040130() {
   return (neuron0x2033ff0()*-0.139694);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040170() {
   return (neuron0x2034330()*-0.0182933);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20403c0() {
   return (neuron0x2034670()*0.0948987);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040400() {
   return (neuron0x20349b0()*0.0878205);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203fcb0() {
   return (neuron0x202fdf0()*-0.00414271);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203fcf0() {
   return (neuron0x2030130()*0.00475039);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203fd30() {
   return (neuron0x2030470()*0.108721);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203fd70() {
   return (neuron0x20307b0()*2.4855);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20406f0() {
   return (neuron0x2030af0()*-0.0446604);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ca40() {
   return (neuron0x2030e30()*-0.00944147);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ca80() {
   return (neuron0x2031170()*-0.00433505);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204cac0() {
   return (neuron0x20314b0()*0.0252201);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204cb00() {
   return (neuron0x20317f0()*-0.00103745);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204cb40() {
   return (neuron0x2031b30()*0.0378203);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204cb80() {
   return (neuron0x2031e70()*-0.0026198);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204cbc0() {
   return (neuron0x20321b0()*-0.0619369);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204cc00() {
   return (neuron0x20324f0()*-0.0102722);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204cc40() {
   return (neuron0x2032830()*0.117444);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204cc80() {
   return (neuron0x2032b70()*-0.00887726);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ccc0() {
   return (neuron0x2032eb0()*-0.0124703);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20405d0() {
   return (neuron0x20331f0()*0.0819432);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040610() {
   return (neuron0x2033750()*-0.0131702);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ce10() {
   return (neuron0x2033970()*-0.0129912);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ce50() {
   return (neuron0x2033cb0()*-0.000743089);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ce90() {
   return (neuron0x2033ff0()*-0.000984819);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ced0() {
   return (neuron0x2034330()*0.00388975);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204cf10() {
   return (neuron0x2034670()*-0.0091512);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204cf50() {
   return (neuron0x20349b0()*0.0179944);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d2d0() {
   return (neuron0x202fdf0()*0.0366568);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d310() {
   return (neuron0x2030130()*0.0112244);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d350() {
   return (neuron0x2030470()*0.184646);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d390() {
   return (neuron0x20307b0()*0.616693);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d3d0() {
   return (neuron0x2030af0()*0.00336898);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d410() {
   return (neuron0x2030e30()*-0.213367);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d450() {
   return (neuron0x2031170()*-0.0491337);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d490() {
   return (neuron0x20314b0()*0.023141);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d4d0() {
   return (neuron0x20317f0()*-0.0732402);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d510() {
   return (neuron0x2031b30()*-0.0410346);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d550() {
   return (neuron0x2031e70()*0.00777567);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d590() {
   return (neuron0x20321b0()*0.167033);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d5d0() {
   return (neuron0x20324f0()*-0.177849);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d610() {
   return (neuron0x2032830()*0.347105);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d650() {
   return (neuron0x2032b70()*-0.0514202);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d690() {
   return (neuron0x2032eb0()*-0.182714);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d120() {
   return (neuron0x20331f0()*0.202458);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d160() {
   return (neuron0x2033750()*-0.143291);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d7e0() {
   return (neuron0x2033970()*-0.163742);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d820() {
   return (neuron0x2033cb0()*-0.0882654);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d860() {
   return (neuron0x2033ff0()*0.0108523);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d8a0() {
   return (neuron0x2034330()*-0.00328371);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d8e0() {
   return (neuron0x2034670()*-0.0516806);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d920() {
   return (neuron0x20349b0()*-0.0546253);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204dca0() {
   return (neuron0x202fdf0()*-0.111478);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204dce0() {
   return (neuron0x2030130()*-0.0646032);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204dd20() {
   return (neuron0x2030470()*-0.489514);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204dd60() {
   return (neuron0x20307b0()*0.549988);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204dda0() {
   return (neuron0x2030af0()*0.109059);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204dde0() {
   return (neuron0x2030e30()*-0.0937255);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204de20() {
   return (neuron0x2031170()*0.480208);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204de60() {
   return (neuron0x20314b0()*-0.0237052);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204dea0() {
   return (neuron0x20317f0()*-0.00623421);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204dee0() {
   return (neuron0x2031b30()*0.040804);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204df20() {
   return (neuron0x2031e70()*-0.0245348);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204df60() {
   return (neuron0x20321b0()*-0.721791);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204dfa0() {
   return (neuron0x20324f0()*-0.077713);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204dfe0() {
   return (neuron0x2032830()*0.00333117);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e020() {
   return (neuron0x2032b70()*0.0398298);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e060() {
   return (neuron0x2032eb0()*0.0351153);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204daf0() {
   return (neuron0x20331f0()*-0.0515158);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204db30() {
   return (neuron0x2033750()*0.0131711);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e1b0() {
   return (neuron0x2033970()*0.0200034);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e1f0() {
   return (neuron0x2033cb0()*-0.00834636);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e230() {
   return (neuron0x2033ff0()*0.00988631);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e270() {
   return (neuron0x2034330()*0.0502145);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e2b0() {
   return (neuron0x2034670()*-0.0375019);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e2f0() {
   return (neuron0x20349b0()*-0.0936057);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e670() {
   return (neuron0x202fdf0()*-0.0187986);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e6b0() {
   return (neuron0x2030130()*-0.00642191);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e6f0() {
   return (neuron0x2030470()*0.0618272);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e730() {
   return (neuron0x20307b0()*2.99627);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e770() {
   return (neuron0x2030af0()*0.0088867);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e7b0() {
   return (neuron0x2030e30()*-0.00983237);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e7f0() {
   return (neuron0x2031170()*0.00251586);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e830() {
   return (neuron0x20314b0()*-0.0212071);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e870() {
   return (neuron0x20317f0()*-0.00299546);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e8b0() {
   return (neuron0x2031b30()*-0.0202134);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e8f0() {
   return (neuron0x2031e70()*-0.00568833);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e930() {
   return (neuron0x20321b0()*0.370939);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e970() {
   return (neuron0x20324f0()*0.0169926);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e9b0() {
   return (neuron0x2032830()*-0.0375487);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e9f0() {
   return (neuron0x2032b70()*0.00941401);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ea30() {
   return (neuron0x2032eb0()*0.00501825);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e4c0() {
   return (neuron0x20331f0()*-0.0395729);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e500() {
   return (neuron0x2033750()*0.0183389);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204eb80() {
   return (neuron0x2033970()*0.0159911);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ebc0() {
   return (neuron0x2033cb0()*0.00334447);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ec00() {
   return (neuron0x2033ff0()*-0.0222368);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ec40() {
   return (neuron0x2034330()*-0.00167884);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ec80() {
   return (neuron0x2034670()*0.00389471);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ecc0() {
   return (neuron0x20349b0()*-0.00318241);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f040() {
   return (neuron0x202fdf0()*-0.0287442);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f080() {
   return (neuron0x2030130()*0.100719);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f0c0() {
   return (neuron0x2030470()*0.163483);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f100() {
   return (neuron0x20307b0()*-0.278667);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f140() {
   return (neuron0x2030af0()*0.0365575);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f180() {
   return (neuron0x2030e30()*0.133594);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f1c0() {
   return (neuron0x2031170()*0.0984161);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f200() {
   return (neuron0x20314b0()*0.0643579);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f240() {
   return (neuron0x20317f0()*0.0392017);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f280() {
   return (neuron0x2031b30()*0.319447);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f2c0() {
   return (neuron0x2031e70()*0.237982);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f300() {
   return (neuron0x20321b0()*-0.282033);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f340() {
   return (neuron0x20324f0()*0.121418);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f380() {
   return (neuron0x2032830()*-0.0409508);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f3c0() {
   return (neuron0x2032b70()*0.0985488);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f400() {
   return (neuron0x2032eb0()*0.0610203);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ee90() {
   return (neuron0x20331f0()*0.14293);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204eed0() {
   return (neuron0x2033750()*0.0947321);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f550() {
   return (neuron0x2033970()*0.0376285);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f590() {
   return (neuron0x2033cb0()*0.0340959);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f5d0() {
   return (neuron0x2033ff0()*-0.0675852);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f610() {
   return (neuron0x2034330()*-0.0159008);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f650() {
   return (neuron0x2034670()*-0.0194319);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f690() {
   return (neuron0x20349b0()*0.182352);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fa10() {
   return (neuron0x202fdf0()*0.0110199);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fa50() {
   return (neuron0x2030130()*-0.0539234);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fa90() {
   return (neuron0x2030470()*0.0603246);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fad0() {
   return (neuron0x20307b0()*0.219086);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fb10() {
   return (neuron0x2030af0()*-0.172338);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fb50() {
   return (neuron0x2030e30()*-0.0400444);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fb90() {
   return (neuron0x2031170()*-0.0879582);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fbd0() {
   return (neuron0x20314b0()*0.368365);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fc10() {
   return (neuron0x20317f0()*-0.0501343);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fc50() {
   return (neuron0x2031b30()*0.263772);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fc90() {
   return (neuron0x2031e70()*-0.00184608);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fcd0() {
   return (neuron0x20321b0()*-0.057089);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fd10() {
   return (neuron0x20324f0()*0.0163098);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fd50() {
   return (neuron0x2032830()*-0.349688);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fd90() {
   return (neuron0x2032b70()*-0.535985);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204fdd0() {
   return (neuron0x2032eb0()*-0.297136);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f860() {
   return (neuron0x20331f0()*1.35129);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f8a0() {
   return (neuron0x2033750()*0.0143384);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ff20() {
   return (neuron0x2033970()*0.119759);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ff60() {
   return (neuron0x2033cb0()*-0.131093);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ffa0() {
   return (neuron0x2033ff0()*-0.643831);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204ffe0() {
   return (neuron0x2034330()*-0.643062);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050020() {
   return (neuron0x2034670()*0.0624495);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050060() {
   return (neuron0x20349b0()*-0.466512);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20503e0() {
   return (neuron0x202fdf0()*-0.0812903);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050420() {
   return (neuron0x2030130()*-0.018398);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050460() {
   return (neuron0x2030470()*-0.266127);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20504a0() {
   return (neuron0x20307b0()*0.494054);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20504e0() {
   return (neuron0x2030af0()*-0.112194);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050520() {
   return (neuron0x2030e30()*0.0531909);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050560() {
   return (neuron0x2031170()*-0.165609);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20505a0() {
   return (neuron0x20314b0()*-0.0174044);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20505e0() {
   return (neuron0x20317f0()*0.015639);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050620() {
   return (neuron0x2031b30()*-0.0197825);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050660() {
   return (neuron0x2031e70()*-0.0389347);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20506a0() {
   return (neuron0x20321b0()*-0.921112);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20506e0() {
   return (neuron0x20324f0()*0.150027);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050720() {
   return (neuron0x2032830()*-0.0760529);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050760() {
   return (neuron0x2032b70()*-0.0832445);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20507a0() {
   return (neuron0x2032eb0()*0.461022);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050230() {
   return (neuron0x20331f0()*-0.108074);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050270() {
   return (neuron0x2033750()*0.107814);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20508f0() {
   return (neuron0x2033970()*0.068027);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050930() {
   return (neuron0x2033cb0()*0.076513);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050970() {
   return (neuron0x2033ff0()*-0.0197398);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20509b0() {
   return (neuron0x2034330()*0.00143899);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20509f0() {
   return (neuron0x2034670()*-0.0308878);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050a30() {
   return (neuron0x20349b0()*-0.0768532);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050db0() {
   return (neuron0x202fdf0()*0.0206111);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050df0() {
   return (neuron0x2030130()*0.0115575);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050e30() {
   return (neuron0x2030470()*-0.169837);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050e70() {
   return (neuron0x20307b0()*2.47363);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050eb0() {
   return (neuron0x2030af0()*-0.0376886);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050ef0() {
   return (neuron0x2030e30()*0.0288837);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050f30() {
   return (neuron0x2031170()*-0.0220815);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050f70() {
   return (neuron0x20314b0()*0.0650749);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050fb0() {
   return (neuron0x20317f0()*-0.00825922);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050ff0() {
   return (neuron0x2031b30()*0.0249295);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051030() {
   return (neuron0x2031e70()*-0.0127966);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051070() {
   return (neuron0x20321b0()*-0.747661);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20510b0() {
   return (neuron0x20324f0()*0.00822507);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20510f0() {
   return (neuron0x2032830()*0.0526361);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051130() {
   return (neuron0x2032b70()*-0.00451281);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051170() {
   return (neuron0x2032eb0()*0.00391786);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050c00() {
   return (neuron0x20331f0()*0.0501055);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050c40() {
   return (neuron0x2033750()*-0.0186082);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20512c0() {
   return (neuron0x2033970()*-0.0124274);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051300() {
   return (neuron0x2033cb0()*0.009951);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051340() {
   return (neuron0x2033ff0()*0.00487577);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051380() {
   return (neuron0x2034330()*0.00980164);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20513c0() {
   return (neuron0x2034670()*-0.010524);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051400() {
   return (neuron0x20349b0()*0.0407345);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039eb0() {
   return (neuron0x202fdf0()*-0.0372322);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039ef0() {
   return (neuron0x2030130()*0.0116856);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039f30() {
   return (neuron0x2030470()*0.290744);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039f70() {
   return (neuron0x20307b0()*-3.13407);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039fb0() {
   return (neuron0x2030af0()*-0.0742187);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039ff0() {
   return (neuron0x2030e30()*-0.0206778);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a030() {
   return (neuron0x2031170()*0.018758);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a070() {
   return (neuron0x20314b0()*0.00585197);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051b90() {
   return (neuron0x20317f0()*0.000685362);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051bd0() {
   return (neuron0x2031b30()*0.0577223);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051c10() {
   return (neuron0x2031e70()*-0.020456);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051c50() {
   return (neuron0x20321b0()*-0.577969);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051c90() {
   return (neuron0x20324f0()*0.0372704);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051cd0() {
   return (neuron0x2032830()*0.0540515);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051d10() {
   return (neuron0x2032b70()*0.0209456);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051d50() {
   return (neuron0x2032eb0()*0.0219833);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20515d0() {
   return (neuron0x20331f0()*-0.00464225);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051610() {
   return (neuron0x2033750()*0.0343848);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051ea0() {
   return (neuron0x2033970()*0.0384747);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051ee0() {
   return (neuron0x2033cb0()*0.020948);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051f20() {
   return (neuron0x2033ff0()*-0.0161261);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051f60() {
   return (neuron0x2034330()*0.000911373);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051fa0() {
   return (neuron0x2034670()*-0.00881652);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051fe0() {
   return (neuron0x20349b0()*0.129327);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052360() {
   return (neuron0x202fdf0()*-0.00721537);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20523a0() {
   return (neuron0x2030130()*0.0323061);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20523e0() {
   return (neuron0x2030470()*0.15472);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052420() {
   return (neuron0x20307b0()*-0.199841);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052460() {
   return (neuron0x2030af0()*-0.0405787);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20524a0() {
   return (neuron0x2030e30()*0.0600379);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20524e0() {
   return (neuron0x2031170()*0.00249958);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052520() {
   return (neuron0x20314b0()*0.123913);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052560() {
   return (neuron0x20317f0()*0.222249);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20525a0() {
   return (neuron0x2031b30()*0.511468);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20525e0() {
   return (neuron0x2031e70()*-0.543107);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052620() {
   return (neuron0x20321b0()*-1.89135);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052660() {
   return (neuron0x20324f0()*-0.148559);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20526a0() {
   return (neuron0x2032830()*-0.253746);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20526e0() {
   return (neuron0x2032b70()*0.0664344);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052720() {
   return (neuron0x2032eb0()*-0.0717113);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20521b0() {
   return (neuron0x20331f0()*-0.309122);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20521f0() {
   return (neuron0x2033750()*-0.194326);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052870() {
   return (neuron0x2033970()*-0.0627658);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20528b0() {
   return (neuron0x2033cb0()*-0.181737);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20528f0() {
   return (neuron0x2033ff0()*-0.0150652);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052930() {
   return (neuron0x2034330()*-0.00814472);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052970() {
   return (neuron0x2034670()*0.0767849);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20529b0() {
   return (neuron0x20349b0()*0.0372587);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052d30() {
   return (neuron0x202fdf0()*-0.0421751);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052d70() {
   return (neuron0x2030130()*-0.00918162);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052db0() {
   return (neuron0x2030470()*0.606374);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052df0() {
   return (neuron0x20307b0()*0.000585372);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052e30() {
   return (neuron0x2030af0()*-0.0150144);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052e70() {
   return (neuron0x2030e30()*0.00889063);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052eb0() {
   return (neuron0x2031170()*-0.00098577);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052ef0() {
   return (neuron0x20314b0()*0.00319519);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052f30() {
   return (neuron0x20317f0()*-0.00733514);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052f70() {
   return (neuron0x2031b30()*-0.0159306);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052fb0() {
   return (neuron0x2031e70()*-0.00405653);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052ff0() {
   return (neuron0x20321b0()*-0.206803);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2053030() {
   return (neuron0x20324f0()*-0.00432258);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2053070() {
   return (neuron0x2032830()*0.003568);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20530b0() {
   return (neuron0x2032b70()*0.0166413);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20530f0() {
   return (neuron0x2032eb0()*-0.00668887);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052b80() {
   return (neuron0x20331f0()*0.000790942);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052bc0() {
   return (neuron0x2033750()*0.00398916);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20436f0() {
   return (neuron0x2033970()*0.00713398);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043730() {
   return (neuron0x2033cb0()*-0.00017215);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043770() {
   return (neuron0x2033ff0()*0.0117563);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20437b0() {
   return (neuron0x2034330()*0.00909401);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20437f0() {
   return (neuron0x2034670()*0.00471606);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043830() {
   return (neuron0x20349b0()*-7.85513);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043bb0() {
   return (neuron0x202fdf0()*-0.000628544);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043bf0() {
   return (neuron0x2030130()*-2.94288e-05);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043c30() {
   return (neuron0x2030470()*0.578247);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043c70() {
   return (neuron0x20307b0()*0.0910362);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043cb0() {
   return (neuron0x2030af0()*-0.0127156);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043cf0() {
   return (neuron0x2030e30()*-0.0189536);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043d30() {
   return (neuron0x2031170()*-0.00399858);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043d70() {
   return (neuron0x20314b0()*0.00534407);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043db0() {
   return (neuron0x20317f0()*-0.0229089);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043df0() {
   return (neuron0x2031b30()*-0.0412784);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043e30() {
   return (neuron0x2031e70()*-0.0655492);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043e70() {
   return (neuron0x20321b0()*0.477478);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043eb0() {
   return (neuron0x20324f0()*-0.0321922);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043ef0() {
   return (neuron0x2032830()*-0.0261513);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043f30() {
   return (neuron0x2032b70()*-0.0176706);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043f70() {
   return (neuron0x2032eb0()*-0.00976708);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043a00() {
   return (neuron0x20331f0()*-0.0274711);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043a40() {
   return (neuron0x2033750()*-0.0187951);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20440c0() {
   return (neuron0x2033970()*-0.0156652);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044100() {
   return (neuron0x2033cb0()*0.00114011);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044140() {
   return (neuron0x2033ff0()*0.00658054);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044180() {
   return (neuron0x2034330()*-0.00578294);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20441c0() {
   return (neuron0x2034670()*-0.0010366);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044200() {
   return (neuron0x20349b0()*-0.0249462);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044580() {
   return (neuron0x202fdf0()*-0.0510189);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20445c0() {
   return (neuron0x2030130()*0.146955);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044600() {
   return (neuron0x2030470()*0.558812);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044640() {
   return (neuron0x20307b0()*0.258439);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044680() {
   return (neuron0x2030af0()*-0.086541);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20446c0() {
   return (neuron0x2030e30()*0.198113);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044700() {
   return (neuron0x2031170()*0.0991451);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044740() {
   return (neuron0x20314b0()*-0.764085);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044780() {
   return (neuron0x20317f0()*0.172633);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20447c0() {
   return (neuron0x2031b30()*0.110191);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044800() {
   return (neuron0x2031e70()*0.301017);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044840() {
   return (neuron0x20321b0()*-0.268989);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044880() {
   return (neuron0x20324f0()*0.428893);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20448c0() {
   return (neuron0x2032830()*0.120358);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044900() {
   return (neuron0x2032b70()*0.036877);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044940() {
   return (neuron0x2032eb0()*-0.21686);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20443d0() {
   return (neuron0x20331f0()*0.375445);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044410() {
   return (neuron0x2033750()*-0.269842);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044a90() {
   return (neuron0x2033970()*-0.0773082);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044ad0() {
   return (neuron0x2033cb0()*0.354343);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044b10() {
   return (neuron0x2033ff0()*-0.784529);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044b50() {
   return (neuron0x2034330()*-0.103977);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044b90() {
   return (neuron0x2034670()*0.0259507);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044bd0() {
   return (neuron0x20349b0()*1.14703);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044f50() {
   return (neuron0x202fdf0()*0.00930093);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044f90() {
   return (neuron0x2030130()*-0.00479983);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044fd0() {
   return (neuron0x2030470()*1.43305);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045010() {
   return (neuron0x20307b0()*0.00573995);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045050() {
   return (neuron0x2030af0()*0.00698681);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045090() {
   return (neuron0x2030e30()*0.00108831);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20450d0() {
   return (neuron0x2031170()*0.00569377);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045110() {
   return (neuron0x20314b0()*-0.00467908);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045150() {
   return (neuron0x20317f0()*0.0119702);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045190() {
   return (neuron0x2031b30()*0.0341025);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20451d0() {
   return (neuron0x2031e70()*0.0491953);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045210() {
   return (neuron0x20321b0()*0.284001);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045250() {
   return (neuron0x20324f0()*0.0375804);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045290() {
   return (neuron0x2032830()*0.0399246);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20452d0() {
   return (neuron0x2032b70()*0.00663617);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045310() {
   return (neuron0x2032eb0()*-0.00838303);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044da0() {
   return (neuron0x20331f0()*0.0363796);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044de0() {
   return (neuron0x2033750()*0.0243541);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045460() {
   return (neuron0x2033970()*0.0271455);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20454a0() {
   return (neuron0x2033cb0()*-0.00109254);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20454e0() {
   return (neuron0x2033ff0()*0.0108886);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045520() {
   return (neuron0x2034330()*0.0123354);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045560() {
   return (neuron0x2034670()*0.00493933);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20455a0() {
   return (neuron0x20349b0()*0.0269163);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057470() {
   return (neuron0x202fdf0()*0.0369516);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20574b0() {
   return (neuron0x2030130()*-0.0364952);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20574f0() {
   return (neuron0x2030470()*-0.0667044);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057530() {
   return (neuron0x20307b0()*-0.0363692);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057570() {
   return (neuron0x2030af0()*0.0706281);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20575b0() {
   return (neuron0x2030e30()*0.0685234);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20575f0() {
   return (neuron0x2031170()*0.107598);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057630() {
   return (neuron0x20314b0()*-0.239888);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057670() {
   return (neuron0x20317f0()*0.0285674);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20576b0() {
   return (neuron0x2031b30()*-0.108327);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20576f0() {
   return (neuron0x2031e70()*-0.0160923);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057730() {
   return (neuron0x20321b0()*-0.402613);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057770() {
   return (neuron0x20324f0()*-0.00627974);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20577b0() {
   return (neuron0x2032830()*0.307401);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20577f0() {
   return (neuron0x2032b70()*0.151599);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057830() {
   return (neuron0x2032eb0()*0.0006498);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20455e0() {
   return (neuron0x20331f0()*-1.00298);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045620() {
   return (neuron0x2033750()*-0.189572);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057980() {
   return (neuron0x2033970()*-0.244494);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20579c0() {
   return (neuron0x2033cb0()*0.0139476);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057a00() {
   return (neuron0x2033ff0()*0.327352);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057a40() {
   return (neuron0x2034330()*0.370955);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057a80() {
   return (neuron0x2034670()*-0.0281353);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057ac0() {
   return (neuron0x20349b0()*0.32839);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057e40() {
   return (neuron0x202fdf0()*-0.0109616);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057e80() {
   return (neuron0x2030130()*0.00315317);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057ec0() {
   return (neuron0x2030470()*-0.0396641);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057f00() {
   return (neuron0x20307b0()*0.0310346);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057f40() {
   return (neuron0x2030af0()*-0.0163651);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057f80() {
   return (neuron0x2030e30()*-0.00480324);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057fc0() {
   return (neuron0x2031170()*0.00219541);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058000() {
   return (neuron0x20314b0()*-0.000862693);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058040() {
   return (neuron0x20317f0()*0.00344613);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058080() {
   return (neuron0x2031b30()*0.010178);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20580c0() {
   return (neuron0x2031e70()*0.00199724);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058100() {
   return (neuron0x20321b0()*-1.84625);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058140() {
   return (neuron0x20324f0()*-0.0299533);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058180() {
   return (neuron0x2032830()*-0.00440037);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20581c0() {
   return (neuron0x2032b70()*0.00203624);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058200() {
   return (neuron0x2032eb0()*0.0103599);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057c90() {
   return (neuron0x20331f0()*0.00465694);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057cd0() {
   return (neuron0x2033750()*-0.0144515);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058350() {
   return (neuron0x2033970()*-0.0146852);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058390() {
   return (neuron0x2033cb0()*0.000687292);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20583d0() {
   return (neuron0x2033ff0()*0.00764489);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058410() {
   return (neuron0x2034330()*0.000489752);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058450() {
   return (neuron0x2034670()*-0.00196362);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058490() {
   return (neuron0x20349b0()*0.0110917);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058810() {
   return (neuron0x202fdf0()*0.00103053);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058850() {
   return (neuron0x2030130()*-0.00195488);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058890() {
   return (neuron0x2030470()*-1.45856);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20588d0() {
   return (neuron0x20307b0()*-0.00765617);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058910() {
   return (neuron0x2030af0()*-0.00784054);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058950() {
   return (neuron0x2030e30()*-0.0153165);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058990() {
   return (neuron0x2031170()*-0.00864047);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20589d0() {
   return (neuron0x20314b0()*-0.0125575);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058a10() {
   return (neuron0x20317f0()*0.0134716);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058a50() {
   return (neuron0x2031b30()*0.0118475);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058a90() {
   return (neuron0x2031e70()*0.0180638);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058ad0() {
   return (neuron0x20321b0()*0.597429);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058b10() {
   return (neuron0x20324f0()*-0.00976439);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058b50() {
   return (neuron0x2032830()*0.00158696);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058b90() {
   return (neuron0x2032b70()*-0.00801384);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058bd0() {
   return (neuron0x2032eb0()*-0.00636592);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058660() {
   return (neuron0x20331f0()*0.00474621);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20586a0() {
   return (neuron0x2033750()*0.00348539);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058d20() {
   return (neuron0x2033970()*0.00498492);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058d60() {
   return (neuron0x2033cb0()*0.00231977);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058da0() {
   return (neuron0x2033ff0()*0.00644908);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058de0() {
   return (neuron0x2034330()*-0.00138745);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058e20() {
   return (neuron0x2034670()*-0.00512361);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058e60() {
   return (neuron0x20349b0()*-0.0193333);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20591e0() {
   return (neuron0x202fdf0()*-0.0762608);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059220() {
   return (neuron0x2030130()*-0.00613562);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059260() {
   return (neuron0x2030470()*-0.00250644);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20592a0() {
   return (neuron0x20307b0()*0.0771225);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20592e0() {
   return (neuron0x2030af0()*0.0413979);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059320() {
   return (neuron0x2030e30()*0.014354);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059360() {
   return (neuron0x2031170()*0.00886943);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20593a0() {
   return (neuron0x20314b0()*-0.00493834);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20593e0() {
   return (neuron0x20317f0()*-0.0445828);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059420() {
   return (neuron0x2031b30()*-0.0188118);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059460() {
   return (neuron0x2031e70()*0.0812253);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20594a0() {
   return (neuron0x20321b0()*-3.02724);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20594e0() {
   return (neuron0x20324f0()*-0.0154333);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059520() {
   return (neuron0x2032830()*-0.0400206);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059560() {
   return (neuron0x2032b70()*-0.00704185);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20595a0() {
   return (neuron0x2032eb0()*-0.0163718);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059030() {
   return (neuron0x20331f0()*-0.0494939);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059070() {
   return (neuron0x2033750()*0.0200882);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20596f0() {
   return (neuron0x2033970()*-0.0201167);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059730() {
   return (neuron0x2033cb0()*-0.036298);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059770() {
   return (neuron0x2033ff0()*0.00052119);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20597b0() {
   return (neuron0x2034330()*-0.0115512);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20597f0() {
   return (neuron0x2034670()*-0.0186157);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059830() {
   return (neuron0x20349b0()*-0.0629014);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df96b0() {
   return (neuron0x2034e20()*-0.0518033);
}

double NNfunction_ns_chiPlus1_uL::synapse0x1df96f0() {
   return (neuron0x2035770()*-0.270719);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20372e0() {
   return (neuron0x2036250()*0.80842);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037320() {
   return (neuron0x2035cf0()*0.0638202);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037cb0() {
   return (neuron0x2037030()*0.0464218);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2037cf0() {
   return (neuron0x2037a00()*0.346119);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038a80() {
   return (neuron0x20387d0()*-0.0200349);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2038ac0() {
   return (neuron0x20391a0()*0.031214);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039450() {
   return (neuron0x2039b70()*-0.0350306);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039490() {
   return (neuron0x203a650()*0.291976);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039e20() {
   return (neuron0x203b020()*-0.161447);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2039e60() {
   return (neuron0x2038100()*-0.195898);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a900() {
   return (neuron0x203cbd0()*0.0653017);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203a940() {
   return (neuron0x203d5a0()*-0.537545);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b2d0() {
   return (neuron0x203df70()*-0.0363234);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203b310() {
   return (neuron0x203e940()*0.0230447);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20383b0() {
   return (neuron0x2040750()*0.426746);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20383f0() {
   return (neuron0x2040a30()*-0.295937);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ce80() {
   return (neuron0x2041400()*0.15196);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203cec0() {
   return (neuron0x2041dd0()*-0.456817);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d850() {
   return (neuron0x20427a0()*0.0457891);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203d890() {
   return (neuron0x2043170()*-0.353964);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e220() {
   return (neuron0x203bcc0()*-0.0205582);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203e260() {
   return (neuron0x203c690()*-0.122151);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ebf0() {
   return (neuron0x2045f00()*0.0529195);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203ec30() {
   return (neuron0x20468d0()*-0.0379149);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2032d90() {
   return (neuron0x20472a0()*-0.0147457);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2032dd0() {
   return (neuron0x2047c70()*-0.897416);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040ce0() {
   return (neuron0x2048640()*0.0196582);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2040d20() {
   return (neuron0x2049010()*0.0273261);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20416b0() {
   return (neuron0x20499e0()*-0.0184942);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20416f0() {
   return (neuron0x204a3b0()*-0.0854773);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042080() {
   return (neuron0x2040440()*0.32939);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20420c0() {
   return (neuron0x204cf90()*-0.000560216);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042a50() {
   return (neuron0x204d960()*0.000238339);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2042a90() {
   return (neuron0x204e330()*-0.362697);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043420() {
   return (neuron0x204ed00()*0.028276);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043460() {
   return (neuron0x204f6d0()*0.022235);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203bf70() {
   return (neuron0x20500a0()*0.0363318);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203bfb0() {
   return (neuron0x2050a70()*0.244337);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045820() {
   return (neuron0x2051440()*0.264098);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2045860() {
   return (neuron0x2052020()*-0.00887593);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20461b0() {
   return (neuron0x20529f0()*-0.578515);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20461f0() {
   return (neuron0x2043870()*0.974901);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046b80() {
   return (neuron0x2044240()*-0.0311102);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2046bc0() {
   return (neuron0x2044c10()*0.668476);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047550() {
   return (neuron0x2057250()*0.0243466);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047590() {
   return (neuron0x2057b00()*1.5151);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047f20() {
   return (neuron0x20584d0()*1.63113);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2047f60() {
   return (neuron0x2058ea0()*-0.260965);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204a660() {
   return (neuron0x2034e20()*0.38743);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204a6a0() {
   return (neuron0x2035770()*-0.400576);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203fc20() {
   return (neuron0x2036250()*1.92547);
}

double NNfunction_ns_chiPlus1_uL::synapse0x203fc60() {
   return (neuron0x2035cf0()*1.47901);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d240() {
   return (neuron0x2037030()*0.938628);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204d280() {
   return (neuron0x2037a00()*2.23453);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204dc10() {
   return (neuron0x20387d0()*0.236677);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204dc50() {
   return (neuron0x20391a0()*-0.203413);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e5e0() {
   return (neuron0x2039b70()*0.31529);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204e620() {
   return (neuron0x203a650()*0.880294);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204efb0() {
   return (neuron0x203b020()*-1.09994);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204eff0() {
   return (neuron0x2038100()*0.821354);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f980() {
   return (neuron0x203cbd0()*1.83993);
}

double NNfunction_ns_chiPlus1_uL::synapse0x204f9c0() {
   return (neuron0x203d5a0()*-0.522534);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050350() {
   return (neuron0x203df70()*-0.641287);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050390() {
   return (neuron0x203e940()*1.39379);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050d20() {
   return (neuron0x2040750()*0.62495);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2050d60() {
   return (neuron0x2040a30()*-0.151242);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20516f0() {
   return (neuron0x2041400()*1.64123);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2051730() {
   return (neuron0x2041dd0()*-1.29395);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20522d0() {
   return (neuron0x20427a0()*1.90566);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052310() {
   return (neuron0x2043170()*-0.0309618);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052ca0() {
   return (neuron0x203bcc0()*0.743384);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2052ce0() {
   return (neuron0x203c690()*0.736384);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043b20() {
   return (neuron0x2045f00()*-0.416881);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2043b60() {
   return (neuron0x20468d0()*1.97184);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20444f0() {
   return (neuron0x20472a0()*2.11375);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044530() {
   return (neuron0x2047c70()*0.204657);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044ec0() {
   return (neuron0x2048640()*1.38637);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2044f00() {
   return (neuron0x2049010()*1.07127);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20573e0() {
   return (neuron0x20499e0()*-0.288052);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057420() {
   return (neuron0x204a3b0()*1.15536);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057db0() {
   return (neuron0x2040440()*0.50487);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2057df0() {
   return (neuron0x204cf90()*1.59764);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2058780() {
   return (neuron0x204d960()*-0.92612);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20587c0() {
   return (neuron0x204e330()*-0.651201);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059150() {
   return (neuron0x204ed00()*0.841623);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059190() {
   return (neuron0x204f6d0()*-0.0747464);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035040() {
   return (neuron0x20500a0()*-0.792614);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2035080() {
   return (neuron0x2050a70()*-1.06237);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20488f0() {
   return (neuron0x2051440()*0.686458);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2048930() {
   return (neuron0x2052020()*1.13258);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059870() {
   return (neuron0x20529f0()*0.226069);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20598b0() {
   return (neuron0x2043870()*0.636479);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20598f0() {
   return (neuron0x2044240()*0.215139);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2059930() {
   return (neuron0x2044c10()*1.43864);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20607e0() {
   return (neuron0x2057250()*1.22134);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060820() {
   return (neuron0x2057b00()*-1.31774);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060860() {
   return (neuron0x20584d0()*-0.163565);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20608a0() {
   return (neuron0x2058ea0()*0.180002);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060c20() {
   return (neuron0x2034e20()*-0.272809);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060c60() {
   return (neuron0x2035770()*0.361767);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060ca0() {
   return (neuron0x2036250()*1.10753);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060ce0() {
   return (neuron0x2035cf0()*0.935729);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060d20() {
   return (neuron0x2037030()*0.592748);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060d60() {
   return (neuron0x2037a00()*1.88833);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060da0() {
   return (neuron0x20387d0()*0.44915);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060de0() {
   return (neuron0x20391a0()*-0.308797);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060e20() {
   return (neuron0x2039b70()*0.452679);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060e60() {
   return (neuron0x203a650()*0.570349);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060ea0() {
   return (neuron0x203b020()*-0.827061);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060ee0() {
   return (neuron0x2038100()*1.52066);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060f20() {
   return (neuron0x203cbd0()*1.32841);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060f60() {
   return (neuron0x203d5a0()*-0.999728);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060fa0() {
   return (neuron0x203df70()*0.0503683);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060fe0() {
   return (neuron0x203e940()*0.686404);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060a70() {
   return (neuron0x2040750()*0.16649);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2060ab0() {
   return (neuron0x2040a30()*0.186824);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061130() {
   return (neuron0x2041400()*2.26667);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061170() {
   return (neuron0x2041dd0()*-0.958707);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20611b0() {
   return (neuron0x20427a0()*1.44226);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20611f0() {
   return (neuron0x2043170()*0.118906);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061230() {
   return (neuron0x203bcc0()*0.400305);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061270() {
   return (neuron0x203c690()*0.00229976);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20612b0() {
   return (neuron0x2045f00()*-0.346142);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20612f0() {
   return (neuron0x20468d0()*1.70608);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061330() {
   return (neuron0x20472a0()*0.843387);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061370() {
   return (neuron0x2047c70()*-0.10033);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20613b0() {
   return (neuron0x2048640()*0.0277318);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20613f0() {
   return (neuron0x2049010()*0.931281);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061430() {
   return (neuron0x20499e0()*-1.16477);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061470() {
   return (neuron0x204a3b0()*0.80585);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061020() {
   return (neuron0x2040440()*1.22831);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061060() {
   return (neuron0x204cf90()*0.162698);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20610a0() {
   return (neuron0x204d960()*-0.421383);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20610e0() {
   return (neuron0x204e330()*-0.79874);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20616c0() {
   return (neuron0x204ed00()*-0.242256);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061700() {
   return (neuron0x204f6d0()*-0.201541);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061740() {
   return (neuron0x20500a0()*-0.198951);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061780() {
   return (neuron0x2050a70()*-0.209194);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20617c0() {
   return (neuron0x2051440()*-0.345385);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061800() {
   return (neuron0x2052020()*-0.0561342);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061840() {
   return (neuron0x20529f0()*0.307874);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061880() {
   return (neuron0x2043870()*1.29596);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20618c0() {
   return (neuron0x2044240()*0.0605859);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061900() {
   return (neuron0x2044c10()*0.630062);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061940() {
   return (neuron0x2057250()*0.159223);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061980() {
   return (neuron0x2057b00()*-1.53856);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20619c0() {
   return (neuron0x20584d0()*0.546598);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061a00() {
   return (neuron0x2058ea0()*-1.25952);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061d80() {
   return (neuron0x2034e20()*-4.10197);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061dc0() {
   return (neuron0x2035770()*-1.50375);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061e00() {
   return (neuron0x2036250()*0.275068);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061e40() {
   return (neuron0x2035cf0()*2.0543);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061e80() {
   return (neuron0x2037030()*0.847909);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061ec0() {
   return (neuron0x2037a00()*0.293618);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061f00() {
   return (neuron0x20387d0()*0.378959);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061f40() {
   return (neuron0x20391a0()*1.04716);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061f80() {
   return (neuron0x2039b70()*0.282805);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061fc0() {
   return (neuron0x203a650()*0.00738984);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062000() {
   return (neuron0x203b020()*-0.242596);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062040() {
   return (neuron0x2038100()*1.06406);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062080() {
   return (neuron0x203cbd0()*-0.692178);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20620c0() {
   return (neuron0x203d5a0()*-4.35962);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062100() {
   return (neuron0x203df70()*-3.52679);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062140() {
   return (neuron0x203e940()*-0.942475);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061bd0() {
   return (neuron0x2040750()*-0.607585);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2061c10() {
   return (neuron0x2040a30()*0.105784);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062290() {
   return (neuron0x2041400()*2.66853);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20622d0() {
   return (neuron0x2041dd0()*0.392938);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062310() {
   return (neuron0x20427a0()*0.800815);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062350() {
   return (neuron0x2043170()*-1.40835);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062390() {
   return (neuron0x203bcc0()*0.479543);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20623d0() {
   return (neuron0x203c690()*-2.55984);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062410() {
   return (neuron0x2045f00()*0.68479);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062450() {
   return (neuron0x20468d0()*0.528421);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062490() {
   return (neuron0x20472a0()*0.905122);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20624d0() {
   return (neuron0x2047c70()*1.28514);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062510() {
   return (neuron0x2048640()*0.576383);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062550() {
   return (neuron0x2049010()*1.29531);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062590() {
   return (neuron0x20499e0()*-1.58054);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20625d0() {
   return (neuron0x204a3b0()*1.98031);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062180() {
   return (neuron0x2040440()*6.74053);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20621c0() {
   return (neuron0x204cf90()*-2.36033);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062200() {
   return (neuron0x204d960()*1.87784);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062240() {
   return (neuron0x204e330()*-5.51419);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062820() {
   return (neuron0x204ed00()*-3.02123);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062860() {
   return (neuron0x204f6d0()*-0.649508);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20628a0() {
   return (neuron0x20500a0()*2.17976);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20628e0() {
   return (neuron0x2050a70()*5.84553);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062920() {
   return (neuron0x2051440()*5.78602);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062960() {
   return (neuron0x2052020()*-0.795096);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20629a0() {
   return (neuron0x20529f0()*-2.20948);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20629e0() {
   return (neuron0x2043870()*0.466214);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062a20() {
   return (neuron0x2044240()*0.0426544);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062a60() {
   return (neuron0x2044c10()*1.90097);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062aa0() {
   return (neuron0x2057250()*-1.25201);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062ae0() {
   return (neuron0x2057b00()*1.00496);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062b20() {
   return (neuron0x20584d0()*0.386187);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062b60() {
   return (neuron0x2058ea0()*-3.96083);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062ee0() {
   return (neuron0x2034e20()*0.384324);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062f20() {
   return (neuron0x2035770()*0.300694);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062f60() {
   return (neuron0x2036250()*-0.41987);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062fa0() {
   return (neuron0x2035cf0()*0.0948823);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062fe0() {
   return (neuron0x2037030()*-0.0166731);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063020() {
   return (neuron0x2037a00()*-1.70129);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063060() {
   return (neuron0x20387d0()*-0.0105927);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20630a0() {
   return (neuron0x20391a0()*-0.0187763);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20630e0() {
   return (neuron0x2039b70()*-0.050103);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063120() {
   return (neuron0x203a650()*0.753892);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063160() {
   return (neuron0x203b020()*-0.251799);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20631a0() {
   return (neuron0x2038100()*-1.54718);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20631e0() {
   return (neuron0x203cbd0()*0.0291001);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063220() {
   return (neuron0x203d5a0()*0.521417);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063260() {
   return (neuron0x203df70()*0.27558);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20632a0() {
   return (neuron0x203e940()*0.0145747);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062d30() {
   return (neuron0x2040750()*0.849549);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2062d70() {
   return (neuron0x2040a30()*-0.835772);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20633f0() {
   return (neuron0x2041400()*0.0989275);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063430() {
   return (neuron0x2041dd0()*-0.208784);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063470() {
   return (neuron0x20427a0()*0.168605);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20634b0() {
   return (neuron0x2043170()*-1.00411);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20634f0() {
   return (neuron0x203bcc0()*-0.0167078);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063530() {
   return (neuron0x203c690()*-0.144509);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063570() {
   return (neuron0x2045f00()*0.0858918);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20635b0() {
   return (neuron0x20468d0()*-0.0141649);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20635f0() {
   return (neuron0x20472a0()*-1.05739);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063630() {
   return (neuron0x2047c70()*-1.37847);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063670() {
   return (neuron0x2048640()*0.00596442);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20636b0() {
   return (neuron0x2049010()*0.0411567);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20636f0() {
   return (neuron0x20499e0()*-0.000514196);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063730() {
   return (neuron0x204a3b0()*-0.00467991);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20632e0() {
   return (neuron0x2040440()*0.365491);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063320() {
   return (neuron0x204cf90()*0.121694);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063360() {
   return (neuron0x204d960()*-0.0931616);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20633a0() {
   return (neuron0x204e330()*0.102964);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063980() {
   return (neuron0x204ed00()*-0.156908);
}

double NNfunction_ns_chiPlus1_uL::synapse0x20639c0() {
   return (neuron0x204f6d0()*0.0233018);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063a00() {
   return (neuron0x20500a0()*0.0171606);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063a40() {
   return (neuron0x2050a70()*0.157635);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063a80() {
   return (neuron0x2051440()*0.315663);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063ac0() {
   return (neuron0x2052020()*0.0238955);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063b00() {
   return (neuron0x20529f0()*-0.958582);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063b40() {
   return (neuron0x2043870()*-0.331333);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063b80() {
   return (neuron0x2044240()*-0.0431967);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063bc0() {
   return (neuron0x2044c10()*-1.58439);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063c00() {
   return (neuron0x2057250()*0.0222232);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063c40() {
   return (neuron0x2057b00()*-0.761895);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063c80() {
   return (neuron0x20584d0()*-2.46173);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063cc0() {
   return (neuron0x2058ea0()*-0.13337);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063f20() {
   return (neuron0x20600a0()*-8.69675);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063f60() {
   return (neuron0x2060440()*5.61208);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063fa0() {
   return (neuron0x20608e0()*-0.223775);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2063fe0() {
   return (neuron0x2061a40()*-10.095);
}

double NNfunction_ns_chiPlus1_uL::synapse0x2064020() {
   return (neuron0x2062ba0()*5.61076);
}

