#include "NNfunction_sb_cLsR.h"
#include <cmath>

double NNfunction_sb_cLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5613)/15.3385;
   input1 = (in1 - 6.50569)/1136.93;
   input2 = (in2 - 670.268)/627.953;
   input3 = (in3 - -60.9395)/818.527;
   input4 = (in4 - 1043.46)/945.676;
   input5 = (in5 - 877.673)/928.35;
   input6 = (in6 - 884.494)/930.208;
   input7 = (in7 - 909.428)/919.123;
   input8 = (in8 - 919.073)/975.391;
   input9 = (in9 - 891.183)/957.157;
   input10 = (in10 - 984.886)/961.902;
   input11 = (in11 - 717.363)/863.694;
   input12 = (in12 - 289.564)/271.76;
   input13 = (in13 - 495.843)/512.329;
   input14 = (in14 - 706.377)/802.349;
   input15 = (in15 - 695.759)/797.418;
   input16 = (in16 - 520.881)/542.891;
   input17 = (in17 - 770.409)/909.298;
   input18 = (in18 - 285.638)/273.735;
   input19 = (in19 - 806.491)/890.199;
   input20 = (in20 - -11.0696)/485.191;
   input21 = (in21 - 9.47515)/1157.84;
   input22 = (in22 - 0.905735)/1195.46;
   input23 = (in23 - -200.513)/599.609;
   switch(index) {
     case 0:
         return neuron0x1dda3e0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLsR::Value(int index, double* input) {
   input0 = (input[0] - 23.5613)/15.3385;
   input1 = (input[1] - 6.50569)/1136.93;
   input2 = (input[2] - 670.268)/627.953;
   input3 = (input[3] - -60.9395)/818.527;
   input4 = (input[4] - 1043.46)/945.676;
   input5 = (input[5] - 877.673)/928.35;
   input6 = (input[6] - 884.494)/930.208;
   input7 = (input[7] - 909.428)/919.123;
   input8 = (input[8] - 919.073)/975.391;
   input9 = (input[9] - 891.183)/957.157;
   input10 = (input[10] - 984.886)/961.902;
   input11 = (input[11] - 717.363)/863.694;
   input12 = (input[12] - 289.564)/271.76;
   input13 = (input[13] - 495.843)/512.329;
   input14 = (input[14] - 706.377)/802.349;
   input15 = (input[15] - 695.759)/797.418;
   input16 = (input[16] - 520.881)/542.891;
   input17 = (input[17] - 770.409)/909.298;
   input18 = (input[18] - 285.638)/273.735;
   input19 = (input[19] - 806.491)/890.199;
   input20 = (input[20] - -11.0696)/485.191;
   input21 = (input[21] - 9.47515)/1157.84;
   input22 = (input[22] - 0.905735)/1195.46;
   input23 = (input[23] - -200.513)/599.609;
   switch(index) {
     case 0:
         return neuron0x1dda3e0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLsR::neuron0x1da64a0() {
   return input0;
}

double NNfunction_sb_cLsR::neuron0x1da67e0() {
   return input1;
}

double NNfunction_sb_cLsR::neuron0x1da6b20() {
   return input2;
}

double NNfunction_sb_cLsR::neuron0x1da6e60() {
   return input3;
}

double NNfunction_sb_cLsR::neuron0x1da71a0() {
   return input4;
}

double NNfunction_sb_cLsR::neuron0x1da74e0() {
   return input5;
}

double NNfunction_sb_cLsR::neuron0x1da7820() {
   return input6;
}

double NNfunction_sb_cLsR::neuron0x1da7b60() {
   return input7;
}

double NNfunction_sb_cLsR::neuron0x1da7ea0() {
   return input8;
}

double NNfunction_sb_cLsR::neuron0x1da81e0() {
   return input9;
}

double NNfunction_sb_cLsR::neuron0x1da8520() {
   return input10;
}

double NNfunction_sb_cLsR::neuron0x1da8860() {
   return input11;
}

double NNfunction_sb_cLsR::neuron0x1da8ba0() {
   return input12;
}

double NNfunction_sb_cLsR::neuron0x1da8ee0() {
   return input13;
}

double NNfunction_sb_cLsR::neuron0x1da9220() {
   return input14;
}

double NNfunction_sb_cLsR::neuron0x1da9560() {
   return input15;
}

double NNfunction_sb_cLsR::neuron0x1da98a0() {
   return input16;
}

double NNfunction_sb_cLsR::neuron0x1da9e00() {
   return input17;
}

double NNfunction_sb_cLsR::neuron0x1daa020() {
   return input18;
}

double NNfunction_sb_cLsR::neuron0x1daa360() {
   return input19;
}

double NNfunction_sb_cLsR::neuron0x1daa6a0() {
   return input20;
}

double NNfunction_sb_cLsR::neuron0x1daa9e0() {
   return input21;
}

double NNfunction_sb_cLsR::neuron0x1daad20() {
   return input22;
}

double NNfunction_sb_cLsR::neuron0x1dab060() {
   return input23;
}

double NNfunction_sb_cLsR::input0x1dab500() {
   double input = 0.155213;
   input += synapse0x1b66310();
   input += synapse0x1da6360();
   input += synapse0x1da63a0();
   input += synapse0x1dab7b0();
   input += synapse0x1dab7f0();
   input += synapse0x1dab830();
   input += synapse0x1dab870();
   input += synapse0x1dab8b0();
   input += synapse0x1dab8f0();
   input += synapse0x1dab930();
   input += synapse0x1dab970();
   input += synapse0x1dab9b0();
   input += synapse0x1dab9f0();
   input += synapse0x1daba30();
   input += synapse0x1daba70();
   input += synapse0x1dabab0();
   input += synapse0x1da62d0();
   input += synapse0x1da6310();
   input += synapse0x1b57bb0();
   input += synapse0x1b57bf0();
   input += synapse0x1dabd10();
   input += synapse0x1dabd50();
   input += synapse0x1dabd90();
   input += synapse0x1dabdd0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dab500() {
   double input = input0x1dab500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dabe10() {
   double input = -2.24445;
   input += synapse0x1dac150();
   input += synapse0x1dac190();
   input += synapse0x1dac1d0();
   input += synapse0x1dac210();
   input += synapse0x1dac250();
   input += synapse0x1dac290();
   input += synapse0x1dac2d0();
   input += synapse0x1dac310();
   input += synapse0x1dac350();
   input += synapse0x1dabc00();
   input += synapse0x1dabc40();
   input += synapse0x1dabc80();
   input += synapse0x1dabcc0();
   input += synapse0x1dac5a0();
   input += synapse0x1dac5e0();
   input += synapse0x1dac620();
   input += synapse0x1dabfa0();
   input += synapse0x1dabfe0();
   input += synapse0x1dac770();
   input += synapse0x1dac7b0();
   input += synapse0x1dac7f0();
   input += synapse0x1dac830();
   input += synapse0x1dac870();
   input += synapse0x1dac8b0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dabe10() {
   double input = input0x1dabe10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dac8f0() {
   double input = 1.38029;
   input += synapse0x1dacc30();
   input += synapse0x1dacc70();
   input += synapse0x1daccb0();
   input += synapse0x1daccf0();
   input += synapse0x1dacd30();
   input += synapse0x1dacd70();
   input += synapse0x1dacdb0();
   input += synapse0x1dacdf0();
   input += synapse0x1dace30();
   input += synapse0x1dace70();
   input += synapse0x1daceb0();
   input += synapse0x1dacef0();
   input += synapse0x1dacf30();
   input += synapse0x1dacf70();
   input += synapse0x1dacfb0();
   input += synapse0x1dacff0();
   input += synapse0x1daca80();
   input += synapse0x1dacac0();
   input += synapse0x1b65a00();
   input += synapse0x1b65a40();
   input += synapse0x1d95530();
   input += synapse0x1d95570();
   input += synapse0x1d955b0();
   input += synapse0x1da63e0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dac8f0() {
   double input = input0x1dac8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1b66180() {
   double input = 1.16777;
   input += synapse0x1dac540();
   input += synapse0x1da6420();
   input += synapse0x1da6460();
   input += synapse0x1dad140();
   input += synapse0x1dad180();
   input += synapse0x1dad1c0();
   input += synapse0x1dad200();
   input += synapse0x1dad240();
   input += synapse0x1dad280();
   input += synapse0x1dad2c0();
   input += synapse0x1dad300();
   input += synapse0x1dad340();
   input += synapse0x1dad380();
   input += synapse0x1dad3c0();
   input += synapse0x1dad400();
   input += synapse0x1dad440();
   input += synapse0x1dac390();
   input += synapse0x1dac3d0();
   input += synapse0x1dad590();
   input += synapse0x1dad5d0();
   input += synapse0x1dad610();
   input += synapse0x1dad650();
   input += synapse0x1dad690();
   input += synapse0x1dad6d0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1b66180() {
   double input = input0x1b66180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dad710() {
   double input = -0.714063;
   input += synapse0x1dada50();
   input += synapse0x1dada90();
   input += synapse0x1dadad0();
   input += synapse0x1dadb10();
   input += synapse0x1dadb50();
   input += synapse0x1dadb90();
   input += synapse0x1dadbd0();
   input += synapse0x1dadc10();
   input += synapse0x1dadc50();
   input += synapse0x1dadc90();
   input += synapse0x1dadcd0();
   input += synapse0x1dadd10();
   input += synapse0x1dadd50();
   input += synapse0x1dadd90();
   input += synapse0x1daddd0();
   input += synapse0x1dade10();
   input += synapse0x1dad8a0();
   input += synapse0x1dad8e0();
   input += synapse0x1dadf60();
   input += synapse0x1dadfa0();
   input += synapse0x1dadfe0();
   input += synapse0x1dae020();
   input += synapse0x1dae060();
   input += synapse0x1dae0a0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dad710() {
   double input = input0x1dad710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dae0e0() {
   double input = 0.278639;
   input += synapse0x1dae420();
   input += synapse0x1dae460();
   input += synapse0x1dae4a0();
   input += synapse0x1dae4e0();
   input += synapse0x1dae520();
   input += synapse0x1dae560();
   input += synapse0x1dae5a0();
   input += synapse0x1dae5e0();
   input += synapse0x1dae620();
   input += synapse0x1b65d70();
   input += synapse0x1b65db0();
   input += synapse0x1b65df0();
   input += synapse0x1b65e30();
   input += synapse0x1b65e70();
   input += synapse0x1b65eb0();
   input += synapse0x1b65ef0();
   input += synapse0x1dae270();
   input += synapse0x1dae2b0();
   input += synapse0x1b66040();
   input += synapse0x1b66080();
   input += synapse0x1b660c0();
   input += synapse0x1b66100();
   input += synapse0x1b66140();
   input += synapse0x1daee70();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dae0e0() {
   double input = input0x1dae0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1daeeb0() {
   double input = 0.272309;
   input += synapse0x1daf1f0();
   input += synapse0x1daf230();
   input += synapse0x1daf270();
   input += synapse0x1daf2b0();
   input += synapse0x1daf2f0();
   input += synapse0x1daf330();
   input += synapse0x1daf370();
   input += synapse0x1daf3b0();
   input += synapse0x1daf3f0();
   input += synapse0x1daf430();
   input += synapse0x1daf470();
   input += synapse0x1daf4b0();
   input += synapse0x1daf4f0();
   input += synapse0x1daf530();
   input += synapse0x1daf570();
   input += synapse0x1daf5b0();
   input += synapse0x1daf040();
   input += synapse0x1daf080();
   input += synapse0x1daf700();
   input += synapse0x1daf740();
   input += synapse0x1daf780();
   input += synapse0x1daf7c0();
   input += synapse0x1daf800();
   input += synapse0x1daf840();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1daeeb0() {
   double input = input0x1daeeb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1daf880() {
   double input = 0.418427;
   input += synapse0x1dafbc0();
   input += synapse0x1dafc00();
   input += synapse0x1dafc40();
   input += synapse0x1dafc80();
   input += synapse0x1dafcc0();
   input += synapse0x1dafd00();
   input += synapse0x1dafd40();
   input += synapse0x1dafd80();
   input += synapse0x1dafdc0();
   input += synapse0x1dafe00();
   input += synapse0x1dafe40();
   input += synapse0x1dafe80();
   input += synapse0x1dafec0();
   input += synapse0x1daff00();
   input += synapse0x1daff40();
   input += synapse0x1daff80();
   input += synapse0x1dafa10();
   input += synapse0x1dafa50();
   input += synapse0x1db00d0();
   input += synapse0x1db0110();
   input += synapse0x1db0150();
   input += synapse0x1db0190();
   input += synapse0x1db01d0();
   input += synapse0x1db0210();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1daf880() {
   double input = input0x1daf880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db0250() {
   double input = -0.171599;
   input += synapse0x1da9cf0();
   input += synapse0x1da9d30();
   input += synapse0x1da9d70();
   input += synapse0x1da9db0();
   input += synapse0x1db07a0();
   input += synapse0x1db07e0();
   input += synapse0x1db0820();
   input += synapse0x1db0860();
   input += synapse0x1db08a0();
   input += synapse0x1db08e0();
   input += synapse0x1db0920();
   input += synapse0x1db0960();
   input += synapse0x1db09a0();
   input += synapse0x1db09e0();
   input += synapse0x1db0a20();
   input += synapse0x1db0a60();
   input += synapse0x1db03e0();
   input += synapse0x1db0420();
   input += synapse0x1db0bb0();
   input += synapse0x1db0bf0();
   input += synapse0x1db0c30();
   input += synapse0x1db0c70();
   input += synapse0x1db0cb0();
   input += synapse0x1db0cf0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db0250() {
   double input = input0x1db0250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db0d30() {
   double input = 1.12973;
   input += synapse0x1db1070();
   input += synapse0x1db10b0();
   input += synapse0x1db10f0();
   input += synapse0x1db1130();
   input += synapse0x1db1170();
   input += synapse0x1db11b0();
   input += synapse0x1db11f0();
   input += synapse0x1db1230();
   input += synapse0x1db1270();
   input += synapse0x1db12b0();
   input += synapse0x1db12f0();
   input += synapse0x1db1330();
   input += synapse0x1db1370();
   input += synapse0x1db13b0();
   input += synapse0x1db13f0();
   input += synapse0x1db1430();
   input += synapse0x1db0ec0();
   input += synapse0x1db0f00();
   input += synapse0x1db1580();
   input += synapse0x1db15c0();
   input += synapse0x1db1600();
   input += synapse0x1db1640();
   input += synapse0x1db1680();
   input += synapse0x1db16c0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db0d30() {
   double input = input0x1db0d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db1700() {
   double input = 0.102698;
   input += synapse0x1db1a40();
   input += synapse0x1db1a80();
   input += synapse0x1db1ac0();
   input += synapse0x1db1b00();
   input += synapse0x1db1b40();
   input += synapse0x1db1b80();
   input += synapse0x1db1bc0();
   input += synapse0x1db1c00();
   input += synapse0x1db1c40();
   input += synapse0x1db1c80();
   input += synapse0x1db1cc0();
   input += synapse0x1db1d00();
   input += synapse0x1db1d40();
   input += synapse0x1db1d80();
   input += synapse0x1db1dc0();
   input += synapse0x1db1e00();
   input += synapse0x1db1890();
   input += synapse0x1db18d0();
   input += synapse0x1dae660();
   input += synapse0x1dae6a0();
   input += synapse0x1dae6e0();
   input += synapse0x1dae720();
   input += synapse0x1dae760();
   input += synapse0x1dae7a0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db1700() {
   double input = input0x1db1700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dae7e0() {
   double input = -0.012315;
   input += synapse0x1daeb20();
   input += synapse0x1daeb60();
   input += synapse0x1daeba0();
   input += synapse0x1daebe0();
   input += synapse0x1daec20();
   input += synapse0x1daec60();
   input += synapse0x1daeca0();
   input += synapse0x1daece0();
   input += synapse0x1daed20();
   input += synapse0x1daed60();
   input += synapse0x1daeda0();
   input += synapse0x1daede0();
   input += synapse0x1daee20();
   input += synapse0x1db2f60();
   input += synapse0x1db2fa0();
   input += synapse0x1db2fe0();
   input += synapse0x1dae970();
   input += synapse0x1dae9b0();
   input += synapse0x1db3130();
   input += synapse0x1db3170();
   input += synapse0x1db31b0();
   input += synapse0x1db31f0();
   input += synapse0x1db3230();
   input += synapse0x1db3270();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dae7e0() {
   double input = input0x1dae7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db32b0() {
   double input = 1.02142;
   input += synapse0x1db35f0();
   input += synapse0x1db3630();
   input += synapse0x1db3670();
   input += synapse0x1db36b0();
   input += synapse0x1db36f0();
   input += synapse0x1db3730();
   input += synapse0x1db3770();
   input += synapse0x1db37b0();
   input += synapse0x1db37f0();
   input += synapse0x1db3830();
   input += synapse0x1db3870();
   input += synapse0x1db38b0();
   input += synapse0x1db38f0();
   input += synapse0x1db3930();
   input += synapse0x1db3970();
   input += synapse0x1db39b0();
   input += synapse0x1db3440();
   input += synapse0x1db3480();
   input += synapse0x1db3b00();
   input += synapse0x1db3b40();
   input += synapse0x1db3b80();
   input += synapse0x1db3bc0();
   input += synapse0x1db3c00();
   input += synapse0x1db3c40();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db32b0() {
   double input = input0x1db32b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db3c80() {
   double input = -1.51796;
   input += synapse0x1db3fc0();
   input += synapse0x1db4000();
   input += synapse0x1db4040();
   input += synapse0x1db4080();
   input += synapse0x1db40c0();
   input += synapse0x1db4100();
   input += synapse0x1db4140();
   input += synapse0x1db4180();
   input += synapse0x1db41c0();
   input += synapse0x1db4200();
   input += synapse0x1db4240();
   input += synapse0x1db4280();
   input += synapse0x1db42c0();
   input += synapse0x1db4300();
   input += synapse0x1db4340();
   input += synapse0x1db4380();
   input += synapse0x1db3e10();
   input += synapse0x1db3e50();
   input += synapse0x1db44d0();
   input += synapse0x1db4510();
   input += synapse0x1db4550();
   input += synapse0x1db4590();
   input += synapse0x1db45d0();
   input += synapse0x1db4610();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db3c80() {
   double input = input0x1db3c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db4650() {
   double input = 0.58781;
   input += synapse0x1db4990();
   input += synapse0x1db49d0();
   input += synapse0x1db4a10();
   input += synapse0x1db4a50();
   input += synapse0x1db4a90();
   input += synapse0x1db4ad0();
   input += synapse0x1db4b10();
   input += synapse0x1db4b50();
   input += synapse0x1db4b90();
   input += synapse0x1db4bd0();
   input += synapse0x1db4c10();
   input += synapse0x1db4c50();
   input += synapse0x1db4c90();
   input += synapse0x1db4cd0();
   input += synapse0x1db4d10();
   input += synapse0x1db4d50();
   input += synapse0x1db47e0();
   input += synapse0x1db4820();
   input += synapse0x1db4ea0();
   input += synapse0x1db4ee0();
   input += synapse0x1db4f20();
   input += synapse0x1db4f60();
   input += synapse0x1db4fa0();
   input += synapse0x1db4fe0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db4650() {
   double input = input0x1db4650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db5020() {
   double input = 2.77457;
   input += synapse0x1db5360();
   input += synapse0x1da66c0();
   input += synapse0x1da6700();
   input += synapse0x1da6a00();
   input += synapse0x1da6a40();
   input += synapse0x1da6d40();
   input += synapse0x1da6d80();
   input += synapse0x1da7080();
   input += synapse0x1da70c0();
   input += synapse0x1da73c0();
   input += synapse0x1da7400();
   input += synapse0x1da7700();
   input += synapse0x1da7740();
   input += synapse0x1da7a40();
   input += synapse0x1da7a80();
   input += synapse0x1da7d80();
   input += synapse0x1da7dc0();
   input += synapse0x1da80c0();
   input += synapse0x1da8100();
   input += synapse0x1da8400();
   input += synapse0x1da8440();
   input += synapse0x1da8740();
   input += synapse0x1da8780();
   input += synapse0x1da8a80();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db5020() {
   double input = input0x1db5020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db6e30() {
   double input = 0.357654;
   input += synapse0x1da8ac0();
   input += synapse0x1da9780();
   input += synapse0x1da97c0();
   input += synapse0x1db51b0();
   input += synapse0x1db51f0();
   input += synapse0x1da9ac0();
   input += synapse0x1da9b00();
   input += synapse0x1b57a90();
   input += synapse0x1b57ad0();
   input += synapse0x1daa240();
   input += synapse0x1daa280();
   input += synapse0x1daa580();
   input += synapse0x1daa5c0();
   input += synapse0x1daa8c0();
   input += synapse0x1daa900();
   input += synapse0x1daac00();
   input += synapse0x1daac40();
   input += synapse0x1daaf40();
   input += synapse0x1daaf80();
   input += synapse0x1dab280();
   input += synapse0x1dab2c0();
   input += synapse0x1da8dc0();
   input += synapse0x1da8e00();
   input += synapse0x1db70d0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db6e30() {
   double input = input0x1db6e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db7110() {
   double input = 0.35162;
   input += synapse0x1db7450();
   input += synapse0x1db7490();
   input += synapse0x1db74d0();
   input += synapse0x1db7510();
   input += synapse0x1db7550();
   input += synapse0x1db7590();
   input += synapse0x1db75d0();
   input += synapse0x1db7610();
   input += synapse0x1db7650();
   input += synapse0x1db7690();
   input += synapse0x1db76d0();
   input += synapse0x1db7710();
   input += synapse0x1db7750();
   input += synapse0x1db7790();
   input += synapse0x1db77d0();
   input += synapse0x1db7810();
   input += synapse0x1db72a0();
   input += synapse0x1db72e0();
   input += synapse0x1db7960();
   input += synapse0x1db79a0();
   input += synapse0x1db79e0();
   input += synapse0x1db7a20();
   input += synapse0x1db7a60();
   input += synapse0x1db7aa0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db7110() {
   double input = input0x1db7110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db7ae0() {
   double input = -0.00939369;
   input += synapse0x1db7e20();
   input += synapse0x1db7e60();
   input += synapse0x1db7ea0();
   input += synapse0x1db7ee0();
   input += synapse0x1db7f20();
   input += synapse0x1db7f60();
   input += synapse0x1db7fa0();
   input += synapse0x1db7fe0();
   input += synapse0x1db8020();
   input += synapse0x1db8060();
   input += synapse0x1db80a0();
   input += synapse0x1db80e0();
   input += synapse0x1db8120();
   input += synapse0x1db8160();
   input += synapse0x1db81a0();
   input += synapse0x1db81e0();
   input += synapse0x1db7c70();
   input += synapse0x1db7cb0();
   input += synapse0x1db8330();
   input += synapse0x1db8370();
   input += synapse0x1db83b0();
   input += synapse0x1db83f0();
   input += synapse0x1db8430();
   input += synapse0x1db8470();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db7ae0() {
   double input = input0x1db7ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db84b0() {
   double input = -2.34172;
   input += synapse0x1db87f0();
   input += synapse0x1db8830();
   input += synapse0x1db8870();
   input += synapse0x1db88b0();
   input += synapse0x1db88f0();
   input += synapse0x1db8930();
   input += synapse0x1db8970();
   input += synapse0x1db89b0();
   input += synapse0x1db89f0();
   input += synapse0x1db8a30();
   input += synapse0x1db8a70();
   input += synapse0x1db8ab0();
   input += synapse0x1db8af0();
   input += synapse0x1db8b30();
   input += synapse0x1db8b70();
   input += synapse0x1db8bb0();
   input += synapse0x1db8640();
   input += synapse0x1db8680();
   input += synapse0x1db8d00();
   input += synapse0x1db8d40();
   input += synapse0x1db8d80();
   input += synapse0x1db8dc0();
   input += synapse0x1db8e00();
   input += synapse0x1db8e40();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db84b0() {
   double input = input0x1db84b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db8e80() {
   double input = 1.19095;
   input += synapse0x1db91c0();
   input += synapse0x1db9200();
   input += synapse0x1db9240();
   input += synapse0x1db9280();
   input += synapse0x1db92c0();
   input += synapse0x1db9300();
   input += synapse0x1db9340();
   input += synapse0x1db9380();
   input += synapse0x1db93c0();
   input += synapse0x1db9400();
   input += synapse0x1db9440();
   input += synapse0x1db9480();
   input += synapse0x1db94c0();
   input += synapse0x1db9500();
   input += synapse0x1db9540();
   input += synapse0x1db9580();
   input += synapse0x1db9010();
   input += synapse0x1db9050();
   input += synapse0x1db96d0();
   input += synapse0x1db9710();
   input += synapse0x1db9750();
   input += synapse0x1db9790();
   input += synapse0x1db97d0();
   input += synapse0x1db9810();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db8e80() {
   double input = input0x1db8e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db9850() {
   double input = -0.264903;
   input += synapse0x1db9b90();
   input += synapse0x1db9bd0();
   input += synapse0x1db9c10();
   input += synapse0x1db9c50();
   input += synapse0x1db9c90();
   input += synapse0x1db9cd0();
   input += synapse0x1db9d10();
   input += synapse0x1db9d50();
   input += synapse0x1db9d90();
   input += synapse0x1db1f50();
   input += synapse0x1db1f90();
   input += synapse0x1db1fd0();
   input += synapse0x1db2010();
   input += synapse0x1db2050();
   input += synapse0x1db2090();
   input += synapse0x1db20d0();
   input += synapse0x1db99e0();
   input += synapse0x1db9a20();
   input += synapse0x1db2220();
   input += synapse0x1db2260();
   input += synapse0x1db22a0();
   input += synapse0x1db22e0();
   input += synapse0x1db2320();
   input += synapse0x1db2360();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db9850() {
   double input = input0x1db9850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db23a0() {
   double input = -1.15783;
   input += synapse0x1db26e0();
   input += synapse0x1db2720();
   input += synapse0x1db2760();
   input += synapse0x1db27a0();
   input += synapse0x1db27e0();
   input += synapse0x1db2820();
   input += synapse0x1db2860();
   input += synapse0x1db28a0();
   input += synapse0x1db28e0();
   input += synapse0x1db2920();
   input += synapse0x1db2960();
   input += synapse0x1db29a0();
   input += synapse0x1db29e0();
   input += synapse0x1db2a20();
   input += synapse0x1db2a60();
   input += synapse0x1db2aa0();
   input += synapse0x1db2530();
   input += synapse0x1db2570();
   input += synapse0x1db2bf0();
   input += synapse0x1db2c30();
   input += synapse0x1db2c70();
   input += synapse0x1db2cb0();
   input += synapse0x1db2cf0();
   input += synapse0x1db2d30();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db23a0() {
   double input = input0x1db23a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db2d70() {
   double input = -1.1957;
   input += synapse0x1db2f00();
   input += synapse0x1dbbf90();
   input += synapse0x1dbbfd0();
   input += synapse0x1dbc010();
   input += synapse0x1dbc050();
   input += synapse0x1dbc090();
   input += synapse0x1dbc0d0();
   input += synapse0x1dbc110();
   input += synapse0x1dbc150();
   input += synapse0x1dbc190();
   input += synapse0x1dbc1d0();
   input += synapse0x1dbc210();
   input += synapse0x1dbc250();
   input += synapse0x1dbc290();
   input += synapse0x1dbc2d0();
   input += synapse0x1dbc310();
   input += synapse0x1dbbde0();
   input += synapse0x1dbbe20();
   input += synapse0x1dbc460();
   input += synapse0x1dbc4a0();
   input += synapse0x1dbc4e0();
   input += synapse0x1dbc520();
   input += synapse0x1dbc560();
   input += synapse0x1dbc5a0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db2d70() {
   double input = input0x1db2d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dbc5e0() {
   double input = 2.24686;
   input += synapse0x1dbc920();
   input += synapse0x1dbc960();
   input += synapse0x1dbc9a0();
   input += synapse0x1dbc9e0();
   input += synapse0x1dbca20();
   input += synapse0x1dbca60();
   input += synapse0x1dbcaa0();
   input += synapse0x1dbcae0();
   input += synapse0x1dbcb20();
   input += synapse0x1dbcb60();
   input += synapse0x1dbcba0();
   input += synapse0x1dbcbe0();
   input += synapse0x1dbcc20();
   input += synapse0x1dbcc60();
   input += synapse0x1dbcca0();
   input += synapse0x1dbcce0();
   input += synapse0x1dbc770();
   input += synapse0x1dbc7b0();
   input += synapse0x1dbce30();
   input += synapse0x1dbce70();
   input += synapse0x1dbceb0();
   input += synapse0x1dbcef0();
   input += synapse0x1dbcf30();
   input += synapse0x1dbcf70();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dbc5e0() {
   double input = input0x1dbc5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dbcfb0() {
   double input = 1.28081;
   input += synapse0x1dbd2f0();
   input += synapse0x1dbd330();
   input += synapse0x1dbd370();
   input += synapse0x1dbd3b0();
   input += synapse0x1dbd3f0();
   input += synapse0x1dbd430();
   input += synapse0x1dbd470();
   input += synapse0x1dbd4b0();
   input += synapse0x1dbd4f0();
   input += synapse0x1dbd530();
   input += synapse0x1dbd570();
   input += synapse0x1dbd5b0();
   input += synapse0x1dbd5f0();
   input += synapse0x1dbd630();
   input += synapse0x1dbd670();
   input += synapse0x1dbd6b0();
   input += synapse0x1dbd140();
   input += synapse0x1dbd180();
   input += synapse0x1dbd800();
   input += synapse0x1dbd840();
   input += synapse0x1dbd880();
   input += synapse0x1dbd8c0();
   input += synapse0x1dbd900();
   input += synapse0x1dbd940();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dbcfb0() {
   double input = input0x1dbcfb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dbd980() {
   double input = -1.31227;
   input += synapse0x1dbdcc0();
   input += synapse0x1dbdd00();
   input += synapse0x1dbdd40();
   input += synapse0x1dbdd80();
   input += synapse0x1dbddc0();
   input += synapse0x1dbde00();
   input += synapse0x1dbde40();
   input += synapse0x1dbde80();
   input += synapse0x1dbdec0();
   input += synapse0x1dbdf00();
   input += synapse0x1dbdf40();
   input += synapse0x1dbdf80();
   input += synapse0x1dbdfc0();
   input += synapse0x1dbe000();
   input += synapse0x1dbe040();
   input += synapse0x1dbe080();
   input += synapse0x1dbdb10();
   input += synapse0x1dbdb50();
   input += synapse0x1dbe1d0();
   input += synapse0x1dbe210();
   input += synapse0x1dbe250();
   input += synapse0x1dbe290();
   input += synapse0x1dbe2d0();
   input += synapse0x1dbe310();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dbd980() {
   double input = input0x1dbd980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dbe350() {
   double input = 2.18147;
   input += synapse0x1dbe690();
   input += synapse0x1dbe6d0();
   input += synapse0x1dbe710();
   input += synapse0x1dbe750();
   input += synapse0x1dbe790();
   input += synapse0x1dbe7d0();
   input += synapse0x1dbe810();
   input += synapse0x1dbe850();
   input += synapse0x1dbe890();
   input += synapse0x1dbe8d0();
   input += synapse0x1dbe910();
   input += synapse0x1dbe950();
   input += synapse0x1dbe990();
   input += synapse0x1dbe9d0();
   input += synapse0x1dbea10();
   input += synapse0x1dbea50();
   input += synapse0x1dbe4e0();
   input += synapse0x1dbe520();
   input += synapse0x1dbeba0();
   input += synapse0x1dbebe0();
   input += synapse0x1dbec20();
   input += synapse0x1dbec60();
   input += synapse0x1dbeca0();
   input += synapse0x1dbece0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dbe350() {
   double input = input0x1dbe350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dbed20() {
   double input = -0.205039;
   input += synapse0x1dbf060();
   input += synapse0x1dbf0a0();
   input += synapse0x1dbf0e0();
   input += synapse0x1dbf120();
   input += synapse0x1dbf160();
   input += synapse0x1dbf1a0();
   input += synapse0x1dbf1e0();
   input += synapse0x1dbf220();
   input += synapse0x1dbf260();
   input += synapse0x1dbf2a0();
   input += synapse0x1dbf2e0();
   input += synapse0x1dbf320();
   input += synapse0x1dbf360();
   input += synapse0x1dbf3a0();
   input += synapse0x1dbf3e0();
   input += synapse0x1dbf420();
   input += synapse0x1dbeeb0();
   input += synapse0x1dbeef0();
   input += synapse0x1dbf570();
   input += synapse0x1dbf5b0();
   input += synapse0x1dbf5f0();
   input += synapse0x1dbf630();
   input += synapse0x1dbf670();
   input += synapse0x1dbf6b0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dbed20() {
   double input = input0x1dbed20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dbf6f0() {
   double input = -0.598616;
   input += synapse0x1dbfa30();
   input += synapse0x1dbfa70();
   input += synapse0x1dbfab0();
   input += synapse0x1dbfaf0();
   input += synapse0x1dbfb30();
   input += synapse0x1dbfb70();
   input += synapse0x1dbfbb0();
   input += synapse0x1dbfbf0();
   input += synapse0x1dbfc30();
   input += synapse0x1dbfc70();
   input += synapse0x1dbfcb0();
   input += synapse0x1dbfcf0();
   input += synapse0x1dbfd30();
   input += synapse0x1dbfd70();
   input += synapse0x1dbfdb0();
   input += synapse0x1dbfdf0();
   input += synapse0x1dbf880();
   input += synapse0x1dbf8c0();
   input += synapse0x1dbff40();
   input += synapse0x1dbff80();
   input += synapse0x1dbffc0();
   input += synapse0x1dc0000();
   input += synapse0x1dc0040();
   input += synapse0x1dc0080();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dbf6f0() {
   double input = input0x1dbf6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dc00c0() {
   double input = -0.885007;
   input += synapse0x1dc0400();
   input += synapse0x1dc0440();
   input += synapse0x1dc0480();
   input += synapse0x1dc04c0();
   input += synapse0x1dc0500();
   input += synapse0x1dc0540();
   input += synapse0x1dc0580();
   input += synapse0x1dc05c0();
   input += synapse0x1dc0600();
   input += synapse0x1dc0640();
   input += synapse0x1dc0680();
   input += synapse0x1dc06c0();
   input += synapse0x1dc0700();
   input += synapse0x1dc0740();
   input += synapse0x1dc0780();
   input += synapse0x1dc07c0();
   input += synapse0x1dc0250();
   input += synapse0x1dc0290();
   input += synapse0x1dc0910();
   input += synapse0x1dc0950();
   input += synapse0x1dc0990();
   input += synapse0x1dc09d0();
   input += synapse0x1dc0a10();
   input += synapse0x1dc0a50();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dc00c0() {
   double input = input0x1dc00c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dc0a90() {
   double input = 0.567092;
   input += synapse0x1dc0dd0();
   input += synapse0x1db53a0();
   input += synapse0x1db53e0();
   input += synapse0x1db5420();
   input += synapse0x1db5670();
   input += synapse0x1db56b0();
   input += synapse0x1db56f0();
   input += synapse0x1db5940();
   input += synapse0x1db5980();
   input += synapse0x1db5bd0();
   input += synapse0x1db5c10();
   input += synapse0x1db5c50();
   input += synapse0x1db5ea0();
   input += synapse0x1db5ee0();
   input += synapse0x1db6130();
   input += synapse0x1db6170();
   input += synapse0x1dc0c20();
   input += synapse0x1dc0c60();
   input += synapse0x1db62c0();
   input += synapse0x1db67d0();
   input += synapse0x1db6810();
   input += synapse0x1db6850();
   input += synapse0x1db6aa0();
   input += synapse0x1db6ae0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dc0a90() {
   double input = input0x1dc0a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db6b20() {
   double input = 1.4986;
   input += synapse0x1db6390();
   input += synapse0x1db63d0();
   input += synapse0x1db6410();
   input += synapse0x1db6450();
   input += synapse0x1db6dd0();
   input += synapse0x1dc3120();
   input += synapse0x1dc3160();
   input += synapse0x1dc31a0();
   input += synapse0x1dc31e0();
   input += synapse0x1dc3220();
   input += synapse0x1dc3260();
   input += synapse0x1dc32a0();
   input += synapse0x1dc32e0();
   input += synapse0x1dc3320();
   input += synapse0x1dc3360();
   input += synapse0x1dc33a0();
   input += synapse0x1db6cb0();
   input += synapse0x1db6cf0();
   input += synapse0x1dc34f0();
   input += synapse0x1dc3530();
   input += synapse0x1dc3570();
   input += synapse0x1dc35b0();
   input += synapse0x1dc35f0();
   input += synapse0x1dc3630();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db6b20() {
   double input = input0x1db6b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dc3670() {
   double input = -1.25211;
   input += synapse0x1dc39b0();
   input += synapse0x1dc39f0();
   input += synapse0x1dc3a30();
   input += synapse0x1dc3a70();
   input += synapse0x1dc3ab0();
   input += synapse0x1dc3af0();
   input += synapse0x1dc3b30();
   input += synapse0x1dc3b70();
   input += synapse0x1dc3bb0();
   input += synapse0x1dc3bf0();
   input += synapse0x1dc3c30();
   input += synapse0x1dc3c70();
   input += synapse0x1dc3cb0();
   input += synapse0x1dc3cf0();
   input += synapse0x1dc3d30();
   input += synapse0x1dc3d70();
   input += synapse0x1dc3800();
   input += synapse0x1dc3840();
   input += synapse0x1dc3ec0();
   input += synapse0x1dc3f00();
   input += synapse0x1dc3f40();
   input += synapse0x1dc3f80();
   input += synapse0x1dc3fc0();
   input += synapse0x1dc4000();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dc3670() {
   double input = input0x1dc3670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dc4040() {
   double input = 0.289615;
   input += synapse0x1dc4380();
   input += synapse0x1dc43c0();
   input += synapse0x1dc4400();
   input += synapse0x1dc4440();
   input += synapse0x1dc4480();
   input += synapse0x1dc44c0();
   input += synapse0x1dc4500();
   input += synapse0x1dc4540();
   input += synapse0x1dc4580();
   input += synapse0x1dc45c0();
   input += synapse0x1dc4600();
   input += synapse0x1dc4640();
   input += synapse0x1dc4680();
   input += synapse0x1dc46c0();
   input += synapse0x1dc4700();
   input += synapse0x1dc4740();
   input += synapse0x1dc41d0();
   input += synapse0x1dc4210();
   input += synapse0x1dc4890();
   input += synapse0x1dc48d0();
   input += synapse0x1dc4910();
   input += synapse0x1dc4950();
   input += synapse0x1dc4990();
   input += synapse0x1dc49d0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dc4040() {
   double input = input0x1dc4040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dc4a10() {
   double input = 0.111587;
   input += synapse0x1dc4d50();
   input += synapse0x1dc4d90();
   input += synapse0x1dc4dd0();
   input += synapse0x1dc4e10();
   input += synapse0x1dc4e50();
   input += synapse0x1dc4e90();
   input += synapse0x1dc4ed0();
   input += synapse0x1dc4f10();
   input += synapse0x1dc4f50();
   input += synapse0x1dc4f90();
   input += synapse0x1dc4fd0();
   input += synapse0x1dc5010();
   input += synapse0x1dc5050();
   input += synapse0x1dc5090();
   input += synapse0x1dc50d0();
   input += synapse0x1dc5110();
   input += synapse0x1dc4ba0();
   input += synapse0x1dc4be0();
   input += synapse0x1dc5260();
   input += synapse0x1dc52a0();
   input += synapse0x1dc52e0();
   input += synapse0x1dc5320();
   input += synapse0x1dc5360();
   input += synapse0x1dc53a0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dc4a10() {
   double input = input0x1dc4a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dc53e0() {
   double input = -0.996868;
   input += synapse0x1dc5720();
   input += synapse0x1dc5760();
   input += synapse0x1dc57a0();
   input += synapse0x1dc57e0();
   input += synapse0x1dc5820();
   input += synapse0x1dc5860();
   input += synapse0x1dc58a0();
   input += synapse0x1dc58e0();
   input += synapse0x1dc5920();
   input += synapse0x1dc5960();
   input += synapse0x1dc59a0();
   input += synapse0x1dc59e0();
   input += synapse0x1dc5a20();
   input += synapse0x1dc5a60();
   input += synapse0x1dc5aa0();
   input += synapse0x1dc5ae0();
   input += synapse0x1dc5570();
   input += synapse0x1dc55b0();
   input += synapse0x1dc5c30();
   input += synapse0x1dc5c70();
   input += synapse0x1dc5cb0();
   input += synapse0x1dc5cf0();
   input += synapse0x1dc5d30();
   input += synapse0x1dc5d70();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dc53e0() {
   double input = input0x1dc53e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dc5db0() {
   double input = -1.08833;
   input += synapse0x1dc60f0();
   input += synapse0x1dc6130();
   input += synapse0x1dc6170();
   input += synapse0x1dc61b0();
   input += synapse0x1dc61f0();
   input += synapse0x1dc6230();
   input += synapse0x1dc6270();
   input += synapse0x1dc62b0();
   input += synapse0x1dc62f0();
   input += synapse0x1dc6330();
   input += synapse0x1dc6370();
   input += synapse0x1dc63b0();
   input += synapse0x1dc63f0();
   input += synapse0x1dc6430();
   input += synapse0x1dc6470();
   input += synapse0x1dc64b0();
   input += synapse0x1dc5f40();
   input += synapse0x1dc5f80();
   input += synapse0x1dc6600();
   input += synapse0x1dc6640();
   input += synapse0x1dc6680();
   input += synapse0x1dc66c0();
   input += synapse0x1dc6700();
   input += synapse0x1dc6740();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dc5db0() {
   double input = input0x1dc5db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dc6780() {
   double input = -0.59456;
   input += synapse0x1dc6ac0();
   input += synapse0x1dc6b00();
   input += synapse0x1dc6b40();
   input += synapse0x1dc6b80();
   input += synapse0x1dc6bc0();
   input += synapse0x1dc6c00();
   input += synapse0x1dc6c40();
   input += synapse0x1dc6c80();
   input += synapse0x1dc6cc0();
   input += synapse0x1dc6d00();
   input += synapse0x1dc6d40();
   input += synapse0x1dc6d80();
   input += synapse0x1dc6dc0();
   input += synapse0x1dc6e00();
   input += synapse0x1dc6e40();
   input += synapse0x1dc6e80();
   input += synapse0x1dc6910();
   input += synapse0x1dc6950();
   input += synapse0x1dc6fd0();
   input += synapse0x1dc7010();
   input += synapse0x1dc7050();
   input += synapse0x1dc7090();
   input += synapse0x1dc70d0();
   input += synapse0x1dc7110();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dc6780() {
   double input = input0x1dc6780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dc7150() {
   double input = 0.722651;
   input += synapse0x1dc7490();
   input += synapse0x1dc74d0();
   input += synapse0x1dc7510();
   input += synapse0x1dc7550();
   input += synapse0x1dc7590();
   input += synapse0x1dc75d0();
   input += synapse0x1dc7610();
   input += synapse0x1dc7650();
   input += synapse0x1dc7690();
   input += synapse0x1dc76d0();
   input += synapse0x1dc7710();
   input += synapse0x1dc7750();
   input += synapse0x1dc7790();
   input += synapse0x1dc77d0();
   input += synapse0x1dc7810();
   input += synapse0x1dc7850();
   input += synapse0x1dc72e0();
   input += synapse0x1dc7320();
   input += synapse0x1dc79a0();
   input += synapse0x1dc79e0();
   input += synapse0x1dc7a20();
   input += synapse0x1dc7a60();
   input += synapse0x1dc7aa0();
   input += synapse0x1dc7ae0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dc7150() {
   double input = input0x1dc7150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dc7b20() {
   double input = 1.00294;
   input += synapse0x1db0590();
   input += synapse0x1db05d0();
   input += synapse0x1db0610();
   input += synapse0x1db0650();
   input += synapse0x1db0690();
   input += synapse0x1db06d0();
   input += synapse0x1db0710();
   input += synapse0x1db0750();
   input += synapse0x1dc8270();
   input += synapse0x1dc82b0();
   input += synapse0x1dc82f0();
   input += synapse0x1dc8330();
   input += synapse0x1dc8370();
   input += synapse0x1dc83b0();
   input += synapse0x1dc83f0();
   input += synapse0x1dc8430();
   input += synapse0x1dc7cb0();
   input += synapse0x1dc7cf0();
   input += synapse0x1dc8580();
   input += synapse0x1dc85c0();
   input += synapse0x1dc8600();
   input += synapse0x1dc8640();
   input += synapse0x1dc8680();
   input += synapse0x1dc86c0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dc7b20() {
   double input = input0x1dc7b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dc8700() {
   double input = 0.0538847;
   input += synapse0x1dc8a40();
   input += synapse0x1dc8a80();
   input += synapse0x1dc8ac0();
   input += synapse0x1dc8b00();
   input += synapse0x1dc8b40();
   input += synapse0x1dc8b80();
   input += synapse0x1dc8bc0();
   input += synapse0x1dc8c00();
   input += synapse0x1dc8c40();
   input += synapse0x1dc8c80();
   input += synapse0x1dc8cc0();
   input += synapse0x1dc8d00();
   input += synapse0x1dc8d40();
   input += synapse0x1dc8d80();
   input += synapse0x1dc8dc0();
   input += synapse0x1dc8e00();
   input += synapse0x1dc8890();
   input += synapse0x1dc88d0();
   input += synapse0x1dc8f50();
   input += synapse0x1dc8f90();
   input += synapse0x1dc8fd0();
   input += synapse0x1dc9010();
   input += synapse0x1dc9050();
   input += synapse0x1dc9090();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dc8700() {
   double input = input0x1dc8700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dc90d0() {
   double input = 0.351281;
   input += synapse0x1dc9410();
   input += synapse0x1dc9450();
   input += synapse0x1dc9490();
   input += synapse0x1dc94d0();
   input += synapse0x1dc9510();
   input += synapse0x1dc9550();
   input += synapse0x1dc9590();
   input += synapse0x1dc95d0();
   input += synapse0x1dc9610();
   input += synapse0x1dc9650();
   input += synapse0x1dc9690();
   input += synapse0x1dc96d0();
   input += synapse0x1dc9710();
   input += synapse0x1dc9750();
   input += synapse0x1dc9790();
   input += synapse0x1dc97d0();
   input += synapse0x1dc9260();
   input += synapse0x1dc92a0();
   input += synapse0x1db9dd0();
   input += synapse0x1db9e10();
   input += synapse0x1db9e50();
   input += synapse0x1db9e90();
   input += synapse0x1db9ed0();
   input += synapse0x1db9f10();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dc90d0() {
   double input = input0x1dc90d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1db9f50() {
   double input = -0.111824;
   input += synapse0x1dba290();
   input += synapse0x1dba2d0();
   input += synapse0x1dba310();
   input += synapse0x1dba350();
   input += synapse0x1dba390();
   input += synapse0x1dba3d0();
   input += synapse0x1dba410();
   input += synapse0x1dba450();
   input += synapse0x1dba490();
   input += synapse0x1dba4d0();
   input += synapse0x1dba510();
   input += synapse0x1dba550();
   input += synapse0x1dba590();
   input += synapse0x1dba5d0();
   input += synapse0x1dba610();
   input += synapse0x1dba650();
   input += synapse0x1dba0e0();
   input += synapse0x1dba120();
   input += synapse0x1dba7a0();
   input += synapse0x1dba7e0();
   input += synapse0x1dba820();
   input += synapse0x1dba860();
   input += synapse0x1dba8a0();
   input += synapse0x1dba8e0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1db9f50() {
   double input = input0x1db9f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dba920() {
   double input = 1.60576;
   input += synapse0x1dbac60();
   input += synapse0x1dbaca0();
   input += synapse0x1dbace0();
   input += synapse0x1dbad20();
   input += synapse0x1dbad60();
   input += synapse0x1dbada0();
   input += synapse0x1dbade0();
   input += synapse0x1dbae20();
   input += synapse0x1dbae60();
   input += synapse0x1dbaea0();
   input += synapse0x1dbaee0();
   input += synapse0x1dbaf20();
   input += synapse0x1dbaf60();
   input += synapse0x1dbafa0();
   input += synapse0x1dbafe0();
   input += synapse0x1dbb020();
   input += synapse0x1dbaab0();
   input += synapse0x1dbaaf0();
   input += synapse0x1dbb170();
   input += synapse0x1dbb1b0();
   input += synapse0x1dbb1f0();
   input += synapse0x1dbb230();
   input += synapse0x1dbb270();
   input += synapse0x1dbb2b0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dba920() {
   double input = input0x1dba920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dbb2f0() {
   double input = 0.225647;
   input += synapse0x1dbb630();
   input += synapse0x1dbb670();
   input += synapse0x1dbb6b0();
   input += synapse0x1dbb6f0();
   input += synapse0x1dbb730();
   input += synapse0x1dbb770();
   input += synapse0x1dbb7b0();
   input += synapse0x1dbb7f0();
   input += synapse0x1dbb830();
   input += synapse0x1dbb870();
   input += synapse0x1dbb8b0();
   input += synapse0x1dbb8f0();
   input += synapse0x1dbb930();
   input += synapse0x1dbb970();
   input += synapse0x1dbb9b0();
   input += synapse0x1dbb9f0();
   input += synapse0x1dbb480();
   input += synapse0x1dbb4c0();
   input += synapse0x1dbbb40();
   input += synapse0x1dbbb80();
   input += synapse0x1dbbbc0();
   input += synapse0x1dbbc00();
   input += synapse0x1dbbc40();
   input += synapse0x1dbbc80();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dbb2f0() {
   double input = input0x1dbb2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dcd930() {
   double input = 2.46035;
   input += synapse0x1dcdb50();
   input += synapse0x1dcdb90();
   input += synapse0x1dcdbd0();
   input += synapse0x1dcdc10();
   input += synapse0x1dcdc50();
   input += synapse0x1dcdc90();
   input += synapse0x1dcdcd0();
   input += synapse0x1dcdd10();
   input += synapse0x1dcdd50();
   input += synapse0x1dcdd90();
   input += synapse0x1dcddd0();
   input += synapse0x1dcde10();
   input += synapse0x1dcde50();
   input += synapse0x1dcde90();
   input += synapse0x1dcded0();
   input += synapse0x1dcdf10();
   input += synapse0x1dbbcc0();
   input += synapse0x1dbbd00();
   input += synapse0x1dce060();
   input += synapse0x1dce0a0();
   input += synapse0x1dce0e0();
   input += synapse0x1dce120();
   input += synapse0x1dce160();
   input += synapse0x1dce1a0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dcd930() {
   double input = input0x1dcd930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dce1e0() {
   double input = 1.80744;
   input += synapse0x1dce520();
   input += synapse0x1dce560();
   input += synapse0x1dce5a0();
   input += synapse0x1dce5e0();
   input += synapse0x1dce620();
   input += synapse0x1dce660();
   input += synapse0x1dce6a0();
   input += synapse0x1dce6e0();
   input += synapse0x1dce720();
   input += synapse0x1dce760();
   input += synapse0x1dce7a0();
   input += synapse0x1dce7e0();
   input += synapse0x1dce820();
   input += synapse0x1dce860();
   input += synapse0x1dce8a0();
   input += synapse0x1dce8e0();
   input += synapse0x1dce370();
   input += synapse0x1dce3b0();
   input += synapse0x1dcea30();
   input += synapse0x1dcea70();
   input += synapse0x1dceab0();
   input += synapse0x1dceaf0();
   input += synapse0x1dceb30();
   input += synapse0x1dceb70();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dce1e0() {
   double input = input0x1dce1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dcebb0() {
   double input = 3.27354;
   input += synapse0x1dceef0();
   input += synapse0x1dcef30();
   input += synapse0x1dcef70();
   input += synapse0x1dcefb0();
   input += synapse0x1dceff0();
   input += synapse0x1dcf030();
   input += synapse0x1dcf070();
   input += synapse0x1dcf0b0();
   input += synapse0x1dcf0f0();
   input += synapse0x1dcf130();
   input += synapse0x1dcf170();
   input += synapse0x1dcf1b0();
   input += synapse0x1dcf1f0();
   input += synapse0x1dcf230();
   input += synapse0x1dcf270();
   input += synapse0x1dcf2b0();
   input += synapse0x1dced40();
   input += synapse0x1dced80();
   input += synapse0x1dcf400();
   input += synapse0x1dcf440();
   input += synapse0x1dcf480();
   input += synapse0x1dcf4c0();
   input += synapse0x1dcf500();
   input += synapse0x1dcf540();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dcebb0() {
   double input = input0x1dcebb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dcf580() {
   double input = 0.670727;
   input += synapse0x1dcf8c0();
   input += synapse0x1dcf900();
   input += synapse0x1dcf940();
   input += synapse0x1dcf980();
   input += synapse0x1dcf9c0();
   input += synapse0x1dcfa00();
   input += synapse0x1dcfa40();
   input += synapse0x1dcfa80();
   input += synapse0x1dcfac0();
   input += synapse0x1dcfb00();
   input += synapse0x1dcfb40();
   input += synapse0x1dcfb80();
   input += synapse0x1dcfbc0();
   input += synapse0x1dcfc00();
   input += synapse0x1dcfc40();
   input += synapse0x1dcfc80();
   input += synapse0x1dcf710();
   input += synapse0x1dcf750();
   input += synapse0x1dcfdd0();
   input += synapse0x1dcfe10();
   input += synapse0x1dcfe50();
   input += synapse0x1dcfe90();
   input += synapse0x1dcfed0();
   input += synapse0x1dcff10();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dcf580() {
   double input = input0x1dcf580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dd6780() {
   double input = 0.771367;
   input += synapse0x1dac4b0();
   input += synapse0x1dac4f0();
   input += synapse0x1dad9c0();
   input += synapse0x1dada00();
   input += synapse0x1dae390();
   input += synapse0x1dae3d0();
   input += synapse0x1daf160();
   input += synapse0x1daf1a0();
   input += synapse0x1dafb30();
   input += synapse0x1dafb70();
   input += synapse0x1db0500();
   input += synapse0x1db0540();
   input += synapse0x1db0fe0();
   input += synapse0x1db1020();
   input += synapse0x1db19b0();
   input += synapse0x1db19f0();
   input += synapse0x1daea90();
   input += synapse0x1daead0();
   input += synapse0x1db3560();
   input += synapse0x1db35a0();
   input += synapse0x1db3f30();
   input += synapse0x1db3f70();
   input += synapse0x1db4900();
   input += synapse0x1db4940();
   input += synapse0x1db52d0();
   input += synapse0x1db5310();
   input += synapse0x1da9440();
   input += synapse0x1da9480();
   input += synapse0x1db73c0();
   input += synapse0x1db7400();
   input += synapse0x1db7d90();
   input += synapse0x1db7dd0();
   input += synapse0x1db8760();
   input += synapse0x1db87a0();
   input += synapse0x1db9130();
   input += synapse0x1db9170();
   input += synapse0x1db9b00();
   input += synapse0x1db9b40();
   input += synapse0x1db2650();
   input += synapse0x1db2690();
   input += synapse0x1dbbf00();
   input += synapse0x1dbbf40();
   input += synapse0x1dbc890();
   input += synapse0x1dbc8d0();
   input += synapse0x1dbd260();
   input += synapse0x1dbd2a0();
   input += synapse0x1dbdc30();
   input += synapse0x1dbdc70();
   input += synapse0x1dbe600();
   input += synapse0x1dbe640();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dd6780() {
   double input = input0x1dd6780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dd6b20() {
   double input = -0.702075;
   input += synapse0x1dc0d40();
   input += synapse0x1dc0d80();
   input += synapse0x1db6300();
   input += synapse0x1db6340();
   input += synapse0x1dc3920();
   input += synapse0x1dc3960();
   input += synapse0x1dc42f0();
   input += synapse0x1dc4330();
   input += synapse0x1dc4cc0();
   input += synapse0x1dc4d00();
   input += synapse0x1dc5690();
   input += synapse0x1dc56d0();
   input += synapse0x1dc6060();
   input += synapse0x1dc60a0();
   input += synapse0x1dc6a30();
   input += synapse0x1dc6a70();
   input += synapse0x1dc7400();
   input += synapse0x1dc7440();
   input += synapse0x1dc7dd0();
   input += synapse0x1dc7e10();
   input += synapse0x1dc89b0();
   input += synapse0x1dc89f0();
   input += synapse0x1dc9380();
   input += synapse0x1dc93c0();
   input += synapse0x1dba200();
   input += synapse0x1dba240();
   input += synapse0x1dbabd0();
   input += synapse0x1dbac10();
   input += synapse0x1dbb5a0();
   input += synapse0x1dbb5e0();
   input += synapse0x1dcdac0();
   input += synapse0x1dcdb00();
   input += synapse0x1dce490();
   input += synapse0x1dce4d0();
   input += synapse0x1dcee60();
   input += synapse0x1dceea0();
   input += synapse0x1dcf830();
   input += synapse0x1dcf870();
   input += synapse0x1dab720();
   input += synapse0x1dab760();
   input += synapse0x1dbefd0();
   input += synapse0x1dbf010();
   input += synapse0x1dcff50();
   input += synapse0x1dcff90();
   input += synapse0x1dcffd0();
   input += synapse0x1dd0010();
   input += synapse0x1dd6ec0();
   input += synapse0x1dd6f00();
   input += synapse0x1dd6f40();
   input += synapse0x1dd6f80();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dd6b20() {
   double input = input0x1dd6b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dd6fc0() {
   double input = 0.0523814;
   input += synapse0x1dd7300();
   input += synapse0x1dd7340();
   input += synapse0x1dd7380();
   input += synapse0x1dd73c0();
   input += synapse0x1dd7400();
   input += synapse0x1dd7440();
   input += synapse0x1dd7480();
   input += synapse0x1dd74c0();
   input += synapse0x1dd7500();
   input += synapse0x1dd7540();
   input += synapse0x1dd7580();
   input += synapse0x1dd75c0();
   input += synapse0x1dd7600();
   input += synapse0x1dd7640();
   input += synapse0x1dd7680();
   input += synapse0x1dd76c0();
   input += synapse0x1dd7150();
   input += synapse0x1dd7190();
   input += synapse0x1dd7810();
   input += synapse0x1dd7850();
   input += synapse0x1dd7890();
   input += synapse0x1dd78d0();
   input += synapse0x1dd7910();
   input += synapse0x1dd7950();
   input += synapse0x1dd7990();
   input += synapse0x1dd79d0();
   input += synapse0x1dd7a10();
   input += synapse0x1dd7a50();
   input += synapse0x1dd7a90();
   input += synapse0x1dd7ad0();
   input += synapse0x1dd7b10();
   input += synapse0x1dd7b50();
   input += synapse0x1dd7700();
   input += synapse0x1dd7740();
   input += synapse0x1dd7780();
   input += synapse0x1dd77c0();
   input += synapse0x1dd7da0();
   input += synapse0x1dd7de0();
   input += synapse0x1dd7e20();
   input += synapse0x1dd7e60();
   input += synapse0x1dd7ea0();
   input += synapse0x1dd7ee0();
   input += synapse0x1dd7f20();
   input += synapse0x1dd7f60();
   input += synapse0x1dd7fa0();
   input += synapse0x1dd7fe0();
   input += synapse0x1dd8020();
   input += synapse0x1dd8060();
   input += synapse0x1dd80a0();
   input += synapse0x1dd80e0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dd6fc0() {
   double input = input0x1dd6fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dd8120() {
   double input = -0.269698;
   input += synapse0x1dd8460();
   input += synapse0x1dd84a0();
   input += synapse0x1dd84e0();
   input += synapse0x1dd8520();
   input += synapse0x1dd8560();
   input += synapse0x1dd85a0();
   input += synapse0x1dd85e0();
   input += synapse0x1dd8620();
   input += synapse0x1dd8660();
   input += synapse0x1dd86a0();
   input += synapse0x1dd86e0();
   input += synapse0x1dd8720();
   input += synapse0x1dd8760();
   input += synapse0x1dd87a0();
   input += synapse0x1dd87e0();
   input += synapse0x1dd8820();
   input += synapse0x1dd82b0();
   input += synapse0x1dd82f0();
   input += synapse0x1dd8970();
   input += synapse0x1dd89b0();
   input += synapse0x1dd89f0();
   input += synapse0x1dd8a30();
   input += synapse0x1dd8a70();
   input += synapse0x1dd8ab0();
   input += synapse0x1dd8af0();
   input += synapse0x1dd8b30();
   input += synapse0x1dd8b70();
   input += synapse0x1dd8bb0();
   input += synapse0x1dd8bf0();
   input += synapse0x1dd8c30();
   input += synapse0x1dd8c70();
   input += synapse0x1dd8cb0();
   input += synapse0x1dd8860();
   input += synapse0x1dd88a0();
   input += synapse0x1dd88e0();
   input += synapse0x1dd8920();
   input += synapse0x1dd8f00();
   input += synapse0x1dd8f40();
   input += synapse0x1dd8f80();
   input += synapse0x1dd8fc0();
   input += synapse0x1dd9000();
   input += synapse0x1dd9040();
   input += synapse0x1dd9080();
   input += synapse0x1dd90c0();
   input += synapse0x1dd9100();
   input += synapse0x1dd9140();
   input += synapse0x1dd9180();
   input += synapse0x1dd91c0();
   input += synapse0x1dd9200();
   input += synapse0x1dd9240();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dd8120() {
   double input = input0x1dd8120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dd9280() {
   double input = 1.0483;
   input += synapse0x1dd95c0();
   input += synapse0x1dd9600();
   input += synapse0x1dd9640();
   input += synapse0x1dd9680();
   input += synapse0x1dd96c0();
   input += synapse0x1dd9700();
   input += synapse0x1dd9740();
   input += synapse0x1dd9780();
   input += synapse0x1dd97c0();
   input += synapse0x1dd9800();
   input += synapse0x1dd9840();
   input += synapse0x1dd9880();
   input += synapse0x1dd98c0();
   input += synapse0x1dd9900();
   input += synapse0x1dd9940();
   input += synapse0x1dd9980();
   input += synapse0x1dd9410();
   input += synapse0x1dd9450();
   input += synapse0x1dd9ad0();
   input += synapse0x1dd9b10();
   input += synapse0x1dd9b50();
   input += synapse0x1dd9b90();
   input += synapse0x1dd9bd0();
   input += synapse0x1dd9c10();
   input += synapse0x1dd9c50();
   input += synapse0x1dd9c90();
   input += synapse0x1dd9cd0();
   input += synapse0x1dd9d10();
   input += synapse0x1dd9d50();
   input += synapse0x1dd9d90();
   input += synapse0x1dd9dd0();
   input += synapse0x1dd9e10();
   input += synapse0x1dd99c0();
   input += synapse0x1dd9a00();
   input += synapse0x1dd9a40();
   input += synapse0x1dd9a80();
   input += synapse0x1dda060();
   input += synapse0x1dda0a0();
   input += synapse0x1dda0e0();
   input += synapse0x1dda120();
   input += synapse0x1dda160();
   input += synapse0x1dda1a0();
   input += synapse0x1dda1e0();
   input += synapse0x1dda220();
   input += synapse0x1dda260();
   input += synapse0x1dda2a0();
   input += synapse0x1dda2e0();
   input += synapse0x1dda320();
   input += synapse0x1dda360();
   input += synapse0x1dda3a0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dd9280() {
   double input = input0x1dd9280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsR::input0x1dda3e0() {
   double input = 1.02775;
   input += synapse0x1dab4c0();
   input += synapse0x1dda600();
   input += synapse0x1dda640();
   input += synapse0x1dda680();
   input += synapse0x1dda6c0();
   return input;
}

double NNfunction_sb_cLsR::neuron0x1dda3e0() {
   double input = input0x1dda3e0();
   return (input * 1)+0;
}

double NNfunction_sb_cLsR::synapse0x1b66310() {
   return (neuron0x1da64a0()*-0.0374634);
}

double NNfunction_sb_cLsR::synapse0x1da6360() {
   return (neuron0x1da67e0()*0.046937);
}

double NNfunction_sb_cLsR::synapse0x1da63a0() {
   return (neuron0x1da6b20()*-0.0516012);
}

double NNfunction_sb_cLsR::synapse0x1dab7b0() {
   return (neuron0x1da6e60()*0.485957);
}

double NNfunction_sb_cLsR::synapse0x1dab7f0() {
   return (neuron0x1da71a0()*-0.15422);
}

double NNfunction_sb_cLsR::synapse0x1dab830() {
   return (neuron0x1da74e0()*-0.0439722);
}

double NNfunction_sb_cLsR::synapse0x1dab870() {
   return (neuron0x1da7820()*-0.0514526);
}

double NNfunction_sb_cLsR::synapse0x1dab8b0() {
   return (neuron0x1da7b60()*0.0741132);
}

double NNfunction_sb_cLsR::synapse0x1dab8f0() {
   return (neuron0x1da7ea0()*0.0811311);
}

double NNfunction_sb_cLsR::synapse0x1dab930() {
   return (neuron0x1da81e0()*-0.169186);
}

double NNfunction_sb_cLsR::synapse0x1dab970() {
   return (neuron0x1da8520()*0.0832497);
}

double NNfunction_sb_cLsR::synapse0x1dab9b0() {
   return (neuron0x1da8860()*0.090246);
}

double NNfunction_sb_cLsR::synapse0x1dab9f0() {
   return (neuron0x1da8ba0()*0.596483);
}

double NNfunction_sb_cLsR::synapse0x1daba30() {
   return (neuron0x1da8ee0()*0.0842385);
}

double NNfunction_sb_cLsR::synapse0x1daba70() {
   return (neuron0x1da9220()*0.0415942);
}

double NNfunction_sb_cLsR::synapse0x1dabab0() {
   return (neuron0x1da9560()*0.0211966);
}

double NNfunction_sb_cLsR::synapse0x1da62d0() {
   return (neuron0x1da98a0()*0.0563027);
}

double NNfunction_sb_cLsR::synapse0x1da6310() {
   return (neuron0x1da9e00()*-0.081376);
}

double NNfunction_sb_cLsR::synapse0x1b57bb0() {
   return (neuron0x1daa020()*0.146085);
}

double NNfunction_sb_cLsR::synapse0x1b57bf0() {
   return (neuron0x1daa360()*0.0605156);
}

double NNfunction_sb_cLsR::synapse0x1dabd10() {
   return (neuron0x1daa6a0()*0.00951351);
}

double NNfunction_sb_cLsR::synapse0x1dabd50() {
   return (neuron0x1daa9e0()*0.014775);
}

double NNfunction_sb_cLsR::synapse0x1dabd90() {
   return (neuron0x1daad20()*0.0303114);
}

double NNfunction_sb_cLsR::synapse0x1dabdd0() {
   return (neuron0x1dab060()*-0.0342035);
}

double NNfunction_sb_cLsR::synapse0x1dac150() {
   return (neuron0x1da64a0()*0.0534871);
}

double NNfunction_sb_cLsR::synapse0x1dac190() {
   return (neuron0x1da67e0()*-0.0462139);
}

double NNfunction_sb_cLsR::synapse0x1dac1d0() {
   return (neuron0x1da6b20()*-0.0478309);
}

double NNfunction_sb_cLsR::synapse0x1dac210() {
   return (neuron0x1da6e60()*0.948106);
}

double NNfunction_sb_cLsR::synapse0x1dac250() {
   return (neuron0x1da71a0()*0.0271336);
}

double NNfunction_sb_cLsR::synapse0x1dac290() {
   return (neuron0x1da74e0()*0.0263158);
}

double NNfunction_sb_cLsR::synapse0x1dac2d0() {
   return (neuron0x1da7820()*0.078017);
}

double NNfunction_sb_cLsR::synapse0x1dac310() {
   return (neuron0x1da7b60()*-0.0286962);
}

double NNfunction_sb_cLsR::synapse0x1dac350() {
   return (neuron0x1da7ea0()*0.0603063);
}

double NNfunction_sb_cLsR::synapse0x1dabc00() {
   return (neuron0x1da81e0()*-0.0918827);
}

double NNfunction_sb_cLsR::synapse0x1dabc40() {
   return (neuron0x1da8520()*0.00306201);
}

double NNfunction_sb_cLsR::synapse0x1dabc80() {
   return (neuron0x1da8860()*0.0330071);
}

double NNfunction_sb_cLsR::synapse0x1dabcc0() {
   return (neuron0x1da8ba0()*0.246164);
}

double NNfunction_sb_cLsR::synapse0x1dac5a0() {
   return (neuron0x1da8ee0()*0.0247383);
}

double NNfunction_sb_cLsR::synapse0x1dac5e0() {
   return (neuron0x1da9220()*-0.0371873);
}

double NNfunction_sb_cLsR::synapse0x1dac620() {
   return (neuron0x1da9560()*0.000887);
}

double NNfunction_sb_cLsR::synapse0x1dabfa0() {
   return (neuron0x1da98a0()*-0.0521024);
}

double NNfunction_sb_cLsR::synapse0x1dabfe0() {
   return (neuron0x1da9e00()*0.0125367);
}

double NNfunction_sb_cLsR::synapse0x1dac770() {
   return (neuron0x1daa020()*-3.0583);
}

double NNfunction_sb_cLsR::synapse0x1dac7b0() {
   return (neuron0x1daa360()*-0.0266827);
}

double NNfunction_sb_cLsR::synapse0x1dac7f0() {
   return (neuron0x1daa6a0()*0.0134133);
}

double NNfunction_sb_cLsR::synapse0x1dac830() {
   return (neuron0x1daa9e0()*-0.0133975);
}

double NNfunction_sb_cLsR::synapse0x1dac870() {
   return (neuron0x1daad20()*-0.0326364);
}

double NNfunction_sb_cLsR::synapse0x1dac8b0() {
   return (neuron0x1dab060()*-0.0108555);
}

double NNfunction_sb_cLsR::synapse0x1dacc30() {
   return (neuron0x1da64a0()*0.0170301);
}

double NNfunction_sb_cLsR::synapse0x1dacc70() {
   return (neuron0x1da67e0()*-0.0347797);
}

double NNfunction_sb_cLsR::synapse0x1daccb0() {
   return (neuron0x1da6b20()*0.0317331);
}

double NNfunction_sb_cLsR::synapse0x1daccf0() {
   return (neuron0x1da6e60()*0.409755);
}

double NNfunction_sb_cLsR::synapse0x1dacd30() {
   return (neuron0x1da71a0()*-0.0332824);
}

double NNfunction_sb_cLsR::synapse0x1dacd70() {
   return (neuron0x1da74e0()*-0.012117);
}

double NNfunction_sb_cLsR::synapse0x1dacdb0() {
   return (neuron0x1da7820()*-0.0737563);
}

double NNfunction_sb_cLsR::synapse0x1dacdf0() {
   return (neuron0x1da7b60()*-0.0311698);
}

double NNfunction_sb_cLsR::synapse0x1dace30() {
   return (neuron0x1da7ea0()*0.00624433);
}

double NNfunction_sb_cLsR::synapse0x1dace70() {
   return (neuron0x1da81e0()*0.0909785);
}

double NNfunction_sb_cLsR::synapse0x1daceb0() {
   return (neuron0x1da8520()*0.0576581);
}

double NNfunction_sb_cLsR::synapse0x1dacef0() {
   return (neuron0x1da8860()*-0.0432666);
}

double NNfunction_sb_cLsR::synapse0x1dacf30() {
   return (neuron0x1da8ba0()*1.73011);
}

double NNfunction_sb_cLsR::synapse0x1dacf70() {
   return (neuron0x1da8ee0()*0.0515049);
}

double NNfunction_sb_cLsR::synapse0x1dacfb0() {
   return (neuron0x1da9220()*0.00276539);
}

double NNfunction_sb_cLsR::synapse0x1dacff0() {
   return (neuron0x1da9560()*0.00964445);
}

double NNfunction_sb_cLsR::synapse0x1daca80() {
   return (neuron0x1da98a0()*0.0110565);
}

double NNfunction_sb_cLsR::synapse0x1dacac0() {
   return (neuron0x1da9e00()*0.0135397);
}

double NNfunction_sb_cLsR::synapse0x1b65a00() {
   return (neuron0x1daa020()*-0.268848);
}

double NNfunction_sb_cLsR::synapse0x1b65a40() {
   return (neuron0x1daa360()*-0.0652775);
}

double NNfunction_sb_cLsR::synapse0x1d95530() {
   return (neuron0x1daa6a0()*-0.02796);
}

double NNfunction_sb_cLsR::synapse0x1d95570() {
   return (neuron0x1daa9e0()*0.0336354);
}

double NNfunction_sb_cLsR::synapse0x1d955b0() {
   return (neuron0x1daad20()*0.0130213);
}

double NNfunction_sb_cLsR::synapse0x1da63e0() {
   return (neuron0x1dab060()*0.00612527);
}

double NNfunction_sb_cLsR::synapse0x1dac540() {
   return (neuron0x1da64a0()*0.0460103);
}

double NNfunction_sb_cLsR::synapse0x1da6420() {
   return (neuron0x1da67e0()*-1.05045);
}

double NNfunction_sb_cLsR::synapse0x1da6460() {
   return (neuron0x1da6b20()*-0.272601);
}

double NNfunction_sb_cLsR::synapse0x1dad140() {
   return (neuron0x1da6e60()*0.331508);
}

double NNfunction_sb_cLsR::synapse0x1dad180() {
   return (neuron0x1da71a0()*-0.261091);
}

double NNfunction_sb_cLsR::synapse0x1dad1c0() {
   return (neuron0x1da74e0()*-0.0814661);
}

double NNfunction_sb_cLsR::synapse0x1dad200() {
   return (neuron0x1da7820()*-0.50979);
}

double NNfunction_sb_cLsR::synapse0x1dad240() {
   return (neuron0x1da7b60()*0.164629);
}

double NNfunction_sb_cLsR::synapse0x1dad280() {
   return (neuron0x1da7ea0()*-0.327858);
}

double NNfunction_sb_cLsR::synapse0x1dad2c0() {
   return (neuron0x1da81e0()*0.0914278);
}

double NNfunction_sb_cLsR::synapse0x1dad300() {
   return (neuron0x1da8520()*0.179694);
}

double NNfunction_sb_cLsR::synapse0x1dad340() {
   return (neuron0x1da8860()*0.176947);
}

double NNfunction_sb_cLsR::synapse0x1dad380() {
   return (neuron0x1da8ba0()*1.04411);
}

double NNfunction_sb_cLsR::synapse0x1dad3c0() {
   return (neuron0x1da8ee0()*-0.00283067);
}

double NNfunction_sb_cLsR::synapse0x1dad400() {
   return (neuron0x1da9220()*-0.326489);
}

double NNfunction_sb_cLsR::synapse0x1dad440() {
   return (neuron0x1da9560()*0.0926924);
}

double NNfunction_sb_cLsR::synapse0x1dac390() {
   return (neuron0x1da98a0()*-0.375715);
}

double NNfunction_sb_cLsR::synapse0x1dac3d0() {
   return (neuron0x1da9e00()*-0.301908);
}

double NNfunction_sb_cLsR::synapse0x1dad590() {
   return (neuron0x1daa020()*0.181693);
}

double NNfunction_sb_cLsR::synapse0x1dad5d0() {
   return (neuron0x1daa360()*-0.225215);
}

double NNfunction_sb_cLsR::synapse0x1dad610() {
   return (neuron0x1daa6a0()*-0.98565);
}

double NNfunction_sb_cLsR::synapse0x1dad650() {
   return (neuron0x1daa9e0()*0.32201);
}

double NNfunction_sb_cLsR::synapse0x1dad690() {
   return (neuron0x1daad20()*-0.145501);
}

double NNfunction_sb_cLsR::synapse0x1dad6d0() {
   return (neuron0x1dab060()*-0.13645);
}

double NNfunction_sb_cLsR::synapse0x1dada50() {
   return (neuron0x1da64a0()*0.00121889);
}

double NNfunction_sb_cLsR::synapse0x1dada90() {
   return (neuron0x1da67e0()*0.000877629);
}

double NNfunction_sb_cLsR::synapse0x1dadad0() {
   return (neuron0x1da6b20()*-0.0015779);
}

double NNfunction_sb_cLsR::synapse0x1dadb10() {
   return (neuron0x1da6e60()*-0.441825);
}

double NNfunction_sb_cLsR::synapse0x1dadb50() {
   return (neuron0x1da71a0()*0.00842457);
}

double NNfunction_sb_cLsR::synapse0x1dadb90() {
   return (neuron0x1da74e0()*0.0317157);
}

double NNfunction_sb_cLsR::synapse0x1dadbd0() {
   return (neuron0x1da7820()*-0.00483272);
}

double NNfunction_sb_cLsR::synapse0x1dadc10() {
   return (neuron0x1da7b60()*0.0289572);
}

double NNfunction_sb_cLsR::synapse0x1dadc50() {
   return (neuron0x1da7ea0()*0.00340321);
}

double NNfunction_sb_cLsR::synapse0x1dadc90() {
   return (neuron0x1da81e0()*-0.00328198);
}

double NNfunction_sb_cLsR::synapse0x1dadcd0() {
   return (neuron0x1da8520()*-0.00243128);
}

double NNfunction_sb_cLsR::synapse0x1dadd10() {
   return (neuron0x1da8860()*-0.150835);
}

double NNfunction_sb_cLsR::synapse0x1dadd50() {
   return (neuron0x1da8ba0()*0.0300099);
}

double NNfunction_sb_cLsR::synapse0x1dadd90() {
   return (neuron0x1da8ee0()*-0.0260558);
}

double NNfunction_sb_cLsR::synapse0x1daddd0() {
   return (neuron0x1da9220()*0.0942106);
}

double NNfunction_sb_cLsR::synapse0x1dade10() {
   return (neuron0x1da9560()*-0.449544);
}

double NNfunction_sb_cLsR::synapse0x1dad8a0() {
   return (neuron0x1da98a0()*0.0482369);
}

double NNfunction_sb_cLsR::synapse0x1dad8e0() {
   return (neuron0x1da9e00()*-0.118395);
}

double NNfunction_sb_cLsR::synapse0x1dadf60() {
   return (neuron0x1daa020()*-0.536737);
}

double NNfunction_sb_cLsR::synapse0x1dadfa0() {
   return (neuron0x1daa360()*0.00398757);
}

double NNfunction_sb_cLsR::synapse0x1dadfe0() {
   return (neuron0x1daa6a0()*-0.0342903);
}

double NNfunction_sb_cLsR::synapse0x1dae020() {
   return (neuron0x1daa9e0()*-0.0588218);
}

double NNfunction_sb_cLsR::synapse0x1dae060() {
   return (neuron0x1daad20()*-0.0228599);
}

double NNfunction_sb_cLsR::synapse0x1dae0a0() {
   return (neuron0x1dab060()*-0.0399205);
}

double NNfunction_sb_cLsR::synapse0x1dae420() {
   return (neuron0x1da64a0()*-0.303342);
}

double NNfunction_sb_cLsR::synapse0x1dae460() {
   return (neuron0x1da67e0()*-0.200549);
}

double NNfunction_sb_cLsR::synapse0x1dae4a0() {
   return (neuron0x1da6b20()*-0.239605);
}

double NNfunction_sb_cLsR::synapse0x1dae4e0() {
   return (neuron0x1da6e60()*1.94848);
}

double NNfunction_sb_cLsR::synapse0x1dae520() {
   return (neuron0x1da71a0()*-0.264964);
}

double NNfunction_sb_cLsR::synapse0x1dae560() {
   return (neuron0x1da74e0()*0.0323918);
}

double NNfunction_sb_cLsR::synapse0x1dae5a0() {
   return (neuron0x1da7820()*-0.108174);
}

double NNfunction_sb_cLsR::synapse0x1dae5e0() {
   return (neuron0x1da7b60()*0.0939862);
}

double NNfunction_sb_cLsR::synapse0x1dae620() {
   return (neuron0x1da7ea0()*0.362401);
}

double NNfunction_sb_cLsR::synapse0x1b65d70() {
   return (neuron0x1da81e0()*-0.378866);
}

double NNfunction_sb_cLsR::synapse0x1b65db0() {
   return (neuron0x1da8520()*-0.283335);
}

double NNfunction_sb_cLsR::synapse0x1b65df0() {
   return (neuron0x1da8860()*-0.117335);
}

double NNfunction_sb_cLsR::synapse0x1b65e30() {
   return (neuron0x1da8ba0()*0.137305);
}

double NNfunction_sb_cLsR::synapse0x1b65e70() {
   return (neuron0x1da8ee0()*0.356421);
}

double NNfunction_sb_cLsR::synapse0x1b65eb0() {
   return (neuron0x1da9220()*0.630021);
}

double NNfunction_sb_cLsR::synapse0x1b65ef0() {
   return (neuron0x1da9560()*-0.169984);
}

double NNfunction_sb_cLsR::synapse0x1dae270() {
   return (neuron0x1da98a0()*0.0455279);
}

double NNfunction_sb_cLsR::synapse0x1dae2b0() {
   return (neuron0x1da9e00()*-0.212107);
}

double NNfunction_sb_cLsR::synapse0x1b66040() {
   return (neuron0x1daa020()*1.2724);
}

double NNfunction_sb_cLsR::synapse0x1b66080() {
   return (neuron0x1daa360()*-0.0390187);
}

double NNfunction_sb_cLsR::synapse0x1b660c0() {
   return (neuron0x1daa6a0()*0.045333);
}

double NNfunction_sb_cLsR::synapse0x1b66100() {
   return (neuron0x1daa9e0()*0.0158693);
}

double NNfunction_sb_cLsR::synapse0x1b66140() {
   return (neuron0x1daad20()*-0.0307772);
}

double NNfunction_sb_cLsR::synapse0x1daee70() {
   return (neuron0x1dab060()*-0.177368);
}

double NNfunction_sb_cLsR::synapse0x1daf1f0() {
   return (neuron0x1da64a0()*-0.311267);
}

double NNfunction_sb_cLsR::synapse0x1daf230() {
   return (neuron0x1da67e0()*-0.702218);
}

double NNfunction_sb_cLsR::synapse0x1daf270() {
   return (neuron0x1da6b20()*0.111736);
}

double NNfunction_sb_cLsR::synapse0x1daf2b0() {
   return (neuron0x1da6e60()*-0.88411);
}

double NNfunction_sb_cLsR::synapse0x1daf2f0() {
   return (neuron0x1da71a0()*0.19);
}

double NNfunction_sb_cLsR::synapse0x1daf330() {
   return (neuron0x1da74e0()*0.0380217);
}

double NNfunction_sb_cLsR::synapse0x1daf370() {
   return (neuron0x1da7820()*0.17078);
}

double NNfunction_sb_cLsR::synapse0x1daf3b0() {
   return (neuron0x1da7b60()*0.0565238);
}

double NNfunction_sb_cLsR::synapse0x1daf3f0() {
   return (neuron0x1da7ea0()*-0.173375);
}

double NNfunction_sb_cLsR::synapse0x1daf430() {
   return (neuron0x1da81e0()*-0.129854);
}

double NNfunction_sb_cLsR::synapse0x1daf470() {
   return (neuron0x1da8520()*0.262406);
}

double NNfunction_sb_cLsR::synapse0x1daf4b0() {
   return (neuron0x1da8860()*0.399942);
}

double NNfunction_sb_cLsR::synapse0x1daf4f0() {
   return (neuron0x1da8ba0()*-1.67858);
}

double NNfunction_sb_cLsR::synapse0x1daf530() {
   return (neuron0x1da8ee0()*-0.289731);
}

double NNfunction_sb_cLsR::synapse0x1daf570() {
   return (neuron0x1da9220()*-0.107066);
}

double NNfunction_sb_cLsR::synapse0x1daf5b0() {
   return (neuron0x1da9560()*0.216435);
}

double NNfunction_sb_cLsR::synapse0x1daf040() {
   return (neuron0x1da98a0()*-0.503482);
}

double NNfunction_sb_cLsR::synapse0x1daf080() {
   return (neuron0x1da9e00()*-0.258518);
}

double NNfunction_sb_cLsR::synapse0x1daf700() {
   return (neuron0x1daa020()*-1.67537);
}

double NNfunction_sb_cLsR::synapse0x1daf740() {
   return (neuron0x1daa360()*0.0264273);
}

double NNfunction_sb_cLsR::synapse0x1daf780() {
   return (neuron0x1daa6a0()*0.389556);
}

double NNfunction_sb_cLsR::synapse0x1daf7c0() {
   return (neuron0x1daa9e0()*-0.0920222);
}

double NNfunction_sb_cLsR::synapse0x1daf800() {
   return (neuron0x1daad20()*0.0473098);
}

double NNfunction_sb_cLsR::synapse0x1daf840() {
   return (neuron0x1dab060()*0.161615);
}

double NNfunction_sb_cLsR::synapse0x1dafbc0() {
   return (neuron0x1da64a0()*0.349346);
}

double NNfunction_sb_cLsR::synapse0x1dafc00() {
   return (neuron0x1da67e0()*-0.105616);
}

double NNfunction_sb_cLsR::synapse0x1dafc40() {
   return (neuron0x1da6b20()*0.362043);
}

double NNfunction_sb_cLsR::synapse0x1dafc80() {
   return (neuron0x1da6e60()*0.880691);
}

double NNfunction_sb_cLsR::synapse0x1dafcc0() {
   return (neuron0x1da71a0()*-0.136691);
}

double NNfunction_sb_cLsR::synapse0x1dafd00() {
   return (neuron0x1da74e0()*0.244986);
}

double NNfunction_sb_cLsR::synapse0x1dafd40() {
   return (neuron0x1da7820()*0.906393);
}

double NNfunction_sb_cLsR::synapse0x1dafd80() {
   return (neuron0x1da7b60()*0.29896);
}

double NNfunction_sb_cLsR::synapse0x1dafdc0() {
   return (neuron0x1da7ea0()*0.127387);
}

double NNfunction_sb_cLsR::synapse0x1dafe00() {
   return (neuron0x1da81e0()*-0.20581);
}

double NNfunction_sb_cLsR::synapse0x1dafe40() {
   return (neuron0x1da8520()*-0.28832);
}

double NNfunction_sb_cLsR::synapse0x1dafe80() {
   return (neuron0x1da8860()*-0.371769);
}

double NNfunction_sb_cLsR::synapse0x1dafec0() {
   return (neuron0x1da8ba0()*-0.70666);
}

double NNfunction_sb_cLsR::synapse0x1daff00() {
   return (neuron0x1da8ee0()*0.225131);
}

double NNfunction_sb_cLsR::synapse0x1daff40() {
   return (neuron0x1da9220()*0.468218);
}

double NNfunction_sb_cLsR::synapse0x1daff80() {
   return (neuron0x1da9560()*0.112607);
}

double NNfunction_sb_cLsR::synapse0x1dafa10() {
   return (neuron0x1da98a0()*-0.27771);
}

double NNfunction_sb_cLsR::synapse0x1dafa50() {
   return (neuron0x1da9e00()*-0.48646);
}

double NNfunction_sb_cLsR::synapse0x1db00d0() {
   return (neuron0x1daa020()*-0.464772);
}

double NNfunction_sb_cLsR::synapse0x1db0110() {
   return (neuron0x1daa360()*-0.225398);
}

double NNfunction_sb_cLsR::synapse0x1db0150() {
   return (neuron0x1daa6a0()*-0.121592);
}

double NNfunction_sb_cLsR::synapse0x1db0190() {
   return (neuron0x1daa9e0()*0.00585702);
}

double NNfunction_sb_cLsR::synapse0x1db01d0() {
   return (neuron0x1daad20()*0.271877);
}

double NNfunction_sb_cLsR::synapse0x1db0210() {
   return (neuron0x1dab060()*-0.163214);
}

double NNfunction_sb_cLsR::synapse0x1da9cf0() {
   return (neuron0x1da64a0()*-0.0847105);
}

double NNfunction_sb_cLsR::synapse0x1da9d30() {
   return (neuron0x1da67e0()*0.194744);
}

double NNfunction_sb_cLsR::synapse0x1da9d70() {
   return (neuron0x1da6b20()*-0.152818);
}

double NNfunction_sb_cLsR::synapse0x1da9db0() {
   return (neuron0x1da6e60()*0.356967);
}

double NNfunction_sb_cLsR::synapse0x1db07a0() {
   return (neuron0x1da71a0()*-0.0769435);
}

double NNfunction_sb_cLsR::synapse0x1db07e0() {
   return (neuron0x1da74e0()*0.0382635);
}

double NNfunction_sb_cLsR::synapse0x1db0820() {
   return (neuron0x1da7820()*-0.718313);
}

double NNfunction_sb_cLsR::synapse0x1db0860() {
   return (neuron0x1da7b60()*0.556228);
}

double NNfunction_sb_cLsR::synapse0x1db08a0() {
   return (neuron0x1da7ea0()*0.617245);
}

double NNfunction_sb_cLsR::synapse0x1db08e0() {
   return (neuron0x1da81e0()*-0.923688);
}

double NNfunction_sb_cLsR::synapse0x1db0920() {
   return (neuron0x1da8520()*0.498104);
}

double NNfunction_sb_cLsR::synapse0x1db0960() {
   return (neuron0x1da8860()*0.257613);
}

double NNfunction_sb_cLsR::synapse0x1db09a0() {
   return (neuron0x1da8ba0()*-0.0643946);
}

double NNfunction_sb_cLsR::synapse0x1db09e0() {
   return (neuron0x1da8ee0()*0.957408);
}

double NNfunction_sb_cLsR::synapse0x1db0a20() {
   return (neuron0x1da9220()*-0.940419);
}

double NNfunction_sb_cLsR::synapse0x1db0a60() {
   return (neuron0x1da9560()*-0.506773);
}

double NNfunction_sb_cLsR::synapse0x1db03e0() {
   return (neuron0x1da98a0()*-0.322163);
}

double NNfunction_sb_cLsR::synapse0x1db0420() {
   return (neuron0x1da9e00()*0.230827);
}

double NNfunction_sb_cLsR::synapse0x1db0bb0() {
   return (neuron0x1daa020()*-0.320455);
}

double NNfunction_sb_cLsR::synapse0x1db0bf0() {
   return (neuron0x1daa360()*0.418203);
}

double NNfunction_sb_cLsR::synapse0x1db0c30() {
   return (neuron0x1daa6a0()*0.303634);
}

double NNfunction_sb_cLsR::synapse0x1db0c70() {
   return (neuron0x1daa9e0()*0.557115);
}

double NNfunction_sb_cLsR::synapse0x1db0cb0() {
   return (neuron0x1daad20()*0.167141);
}

double NNfunction_sb_cLsR::synapse0x1db0cf0() {
   return (neuron0x1dab060()*-0.156586);
}

double NNfunction_sb_cLsR::synapse0x1db1070() {
   return (neuron0x1da64a0()*-0.0299514);
}

double NNfunction_sb_cLsR::synapse0x1db10b0() {
   return (neuron0x1da67e0()*0.130596);
}

double NNfunction_sb_cLsR::synapse0x1db10f0() {
   return (neuron0x1da6b20()*-0.0912468);
}

double NNfunction_sb_cLsR::synapse0x1db1130() {
   return (neuron0x1da6e60()*0.483934);
}

double NNfunction_sb_cLsR::synapse0x1db1170() {
   return (neuron0x1da71a0()*0.0535354);
}

double NNfunction_sb_cLsR::synapse0x1db11b0() {
   return (neuron0x1da74e0()*0.0157241);
}

double NNfunction_sb_cLsR::synapse0x1db11f0() {
   return (neuron0x1da7820()*0.0167666);
}

double NNfunction_sb_cLsR::synapse0x1db1230() {
   return (neuron0x1da7b60()*0.0137733);
}

double NNfunction_sb_cLsR::synapse0x1db1270() {
   return (neuron0x1da7ea0()*-0.00342149);
}

double NNfunction_sb_cLsR::synapse0x1db12b0() {
   return (neuron0x1da81e0()*-0.0183575);
}

double NNfunction_sb_cLsR::synapse0x1db12f0() {
   return (neuron0x1da8520()*0.0122478);
}

double NNfunction_sb_cLsR::synapse0x1db1330() {
   return (neuron0x1da8860()*-0.254037);
}

double NNfunction_sb_cLsR::synapse0x1db1370() {
   return (neuron0x1da8ba0()*-0.000368978);
}

double NNfunction_sb_cLsR::synapse0x1db13b0() {
   return (neuron0x1da8ee0()*-0.0234806);
}

double NNfunction_sb_cLsR::synapse0x1db13f0() {
   return (neuron0x1da9220()*-0.130481);
}

double NNfunction_sb_cLsR::synapse0x1db1430() {
   return (neuron0x1da9560()*-0.0127624);
}

double NNfunction_sb_cLsR::synapse0x1db0ec0() {
   return (neuron0x1da98a0()*-0.0186366);
}

double NNfunction_sb_cLsR::synapse0x1db0f00() {
   return (neuron0x1da9e00()*-0.103391);
}

double NNfunction_sb_cLsR::synapse0x1db1580() {
   return (neuron0x1daa020()*0.127771);
}

double NNfunction_sb_cLsR::synapse0x1db15c0() {
   return (neuron0x1daa360()*0.0109632);
}

double NNfunction_sb_cLsR::synapse0x1db1600() {
   return (neuron0x1daa6a0()*-0.07461);
}

double NNfunction_sb_cLsR::synapse0x1db1640() {
   return (neuron0x1daa9e0()*-0.046761);
}

double NNfunction_sb_cLsR::synapse0x1db1680() {
   return (neuron0x1daad20()*-0.00544217);
}

double NNfunction_sb_cLsR::synapse0x1db16c0() {
   return (neuron0x1dab060()*-0.0229035);
}

double NNfunction_sb_cLsR::synapse0x1db1a40() {
   return (neuron0x1da64a0()*-0.356461);
}

double NNfunction_sb_cLsR::synapse0x1db1a80() {
   return (neuron0x1da67e0()*0.0875952);
}

double NNfunction_sb_cLsR::synapse0x1db1ac0() {
   return (neuron0x1da6b20()*-0.135193);
}

double NNfunction_sb_cLsR::synapse0x1db1b00() {
   return (neuron0x1da6e60()*0.631966);
}

double NNfunction_sb_cLsR::synapse0x1db1b40() {
   return (neuron0x1da71a0()*-0.157752);
}

double NNfunction_sb_cLsR::synapse0x1db1b80() {
   return (neuron0x1da74e0()*-0.111566);
}

double NNfunction_sb_cLsR::synapse0x1db1bc0() {
   return (neuron0x1da7820()*-0.0460058);
}

double NNfunction_sb_cLsR::synapse0x1db1c00() {
   return (neuron0x1da7b60()*0.118518);
}

double NNfunction_sb_cLsR::synapse0x1db1c40() {
   return (neuron0x1da7ea0()*-0.125845);
}

double NNfunction_sb_cLsR::synapse0x1db1c80() {
   return (neuron0x1da81e0()*-0.0783824);
}

double NNfunction_sb_cLsR::synapse0x1db1cc0() {
   return (neuron0x1da8520()*-0.440372);
}

double NNfunction_sb_cLsR::synapse0x1db1d00() {
   return (neuron0x1da8860()*0.0251217);
}

double NNfunction_sb_cLsR::synapse0x1db1d40() {
   return (neuron0x1da8ba0()*0.00249017);
}

double NNfunction_sb_cLsR::synapse0x1db1d80() {
   return (neuron0x1da8ee0()*0.215778);
}

double NNfunction_sb_cLsR::synapse0x1db1dc0() {
   return (neuron0x1da9220()*-0.0261087);
}

double NNfunction_sb_cLsR::synapse0x1db1e00() {
   return (neuron0x1da9560()*0.0269738);
}

double NNfunction_sb_cLsR::synapse0x1db1890() {
   return (neuron0x1da98a0()*0.048376);
}

double NNfunction_sb_cLsR::synapse0x1db18d0() {
   return (neuron0x1da9e00()*0.0646835);
}

double NNfunction_sb_cLsR::synapse0x1dae660() {
   return (neuron0x1daa020()*-0.243979);
}

double NNfunction_sb_cLsR::synapse0x1dae6a0() {
   return (neuron0x1daa360()*-0.106996);
}

double NNfunction_sb_cLsR::synapse0x1dae6e0() {
   return (neuron0x1daa6a0()*0.0575586);
}

double NNfunction_sb_cLsR::synapse0x1dae720() {
   return (neuron0x1daa9e0()*0.105149);
}

double NNfunction_sb_cLsR::synapse0x1dae760() {
   return (neuron0x1daad20()*0.0273916);
}

double NNfunction_sb_cLsR::synapse0x1dae7a0() {
   return (neuron0x1dab060()*-0.00722997);
}

double NNfunction_sb_cLsR::synapse0x1daeb20() {
   return (neuron0x1da64a0()*0.0973039);
}

double NNfunction_sb_cLsR::synapse0x1daeb60() {
   return (neuron0x1da67e0()*0.0888974);
}

double NNfunction_sb_cLsR::synapse0x1daeba0() {
   return (neuron0x1da6b20()*-0.000800121);
}

double NNfunction_sb_cLsR::synapse0x1daebe0() {
   return (neuron0x1da6e60()*0.434184);
}

double NNfunction_sb_cLsR::synapse0x1daec20() {
   return (neuron0x1da71a0()*-0.193449);
}

double NNfunction_sb_cLsR::synapse0x1daec60() {
   return (neuron0x1da74e0()*-0.124718);
}

double NNfunction_sb_cLsR::synapse0x1daeca0() {
   return (neuron0x1da7820()*-0.0979343);
}

double NNfunction_sb_cLsR::synapse0x1daece0() {
   return (neuron0x1da7b60()*0.163434);
}

double NNfunction_sb_cLsR::synapse0x1daed20() {
   return (neuron0x1da7ea0()*0.0639706);
}

double NNfunction_sb_cLsR::synapse0x1daed60() {
   return (neuron0x1da81e0()*0.263459);
}

double NNfunction_sb_cLsR::synapse0x1daeda0() {
   return (neuron0x1da8520()*-0.177073);
}

double NNfunction_sb_cLsR::synapse0x1daede0() {
   return (neuron0x1da8860()*0.0222936);
}

double NNfunction_sb_cLsR::synapse0x1daee20() {
   return (neuron0x1da8ba0()*0.192812);
}

double NNfunction_sb_cLsR::synapse0x1db2f60() {
   return (neuron0x1da8ee0()*-0.0191855);
}

double NNfunction_sb_cLsR::synapse0x1db2fa0() {
   return (neuron0x1da9220()*0.104957);
}

double NNfunction_sb_cLsR::synapse0x1db2fe0() {
   return (neuron0x1da9560()*-0.0494474);
}

double NNfunction_sb_cLsR::synapse0x1dae970() {
   return (neuron0x1da98a0()*0.123541);
}

double NNfunction_sb_cLsR::synapse0x1dae9b0() {
   return (neuron0x1da9e00()*-0.0622277);
}

double NNfunction_sb_cLsR::synapse0x1db3130() {
   return (neuron0x1daa020()*0.179047);
}

double NNfunction_sb_cLsR::synapse0x1db3170() {
   return (neuron0x1daa360()*0.0939098);
}

double NNfunction_sb_cLsR::synapse0x1db31b0() {
   return (neuron0x1daa6a0()*-0.0268324);
}

double NNfunction_sb_cLsR::synapse0x1db31f0() {
   return (neuron0x1daa9e0()*0.0882912);
}

double NNfunction_sb_cLsR::synapse0x1db3230() {
   return (neuron0x1daad20()*-0.233815);
}

double NNfunction_sb_cLsR::synapse0x1db3270() {
   return (neuron0x1dab060()*0.0124397);
}

double NNfunction_sb_cLsR::synapse0x1db35f0() {
   return (neuron0x1da64a0()*0.0167904);
}

double NNfunction_sb_cLsR::synapse0x1db3630() {
   return (neuron0x1da67e0()*0.0608059);
}

double NNfunction_sb_cLsR::synapse0x1db3670() {
   return (neuron0x1da6b20()*0.00476896);
}

double NNfunction_sb_cLsR::synapse0x1db36b0() {
   return (neuron0x1da6e60()*-1.44188);
}

double NNfunction_sb_cLsR::synapse0x1db36f0() {
   return (neuron0x1da71a0()*-0.0319256);
}

double NNfunction_sb_cLsR::synapse0x1db3730() {
   return (neuron0x1da74e0()*0.0334794);
}

double NNfunction_sb_cLsR::synapse0x1db3770() {
   return (neuron0x1da7820()*0.00754304);
}

double NNfunction_sb_cLsR::synapse0x1db37b0() {
   return (neuron0x1da7b60()*0.0497291);
}

double NNfunction_sb_cLsR::synapse0x1db37f0() {
   return (neuron0x1da7ea0()*-0.0494518);
}

double NNfunction_sb_cLsR::synapse0x1db3830() {
   return (neuron0x1da81e0()*-0.0690853);
}

double NNfunction_sb_cLsR::synapse0x1db3870() {
   return (neuron0x1da8520()*-0.0788767);
}

double NNfunction_sb_cLsR::synapse0x1db38b0() {
   return (neuron0x1da8860()*0.0475571);
}

double NNfunction_sb_cLsR::synapse0x1db38f0() {
   return (neuron0x1da8ba0()*-0.887718);
}

double NNfunction_sb_cLsR::synapse0x1db3930() {
   return (neuron0x1da8ee0()*-0.0282959);
}

double NNfunction_sb_cLsR::synapse0x1db3970() {
   return (neuron0x1da9220()*0.0144432);
}

double NNfunction_sb_cLsR::synapse0x1db39b0() {
   return (neuron0x1da9560()*-0.0320252);
}

double NNfunction_sb_cLsR::synapse0x1db3440() {
   return (neuron0x1da98a0()*-0.0418342);
}

double NNfunction_sb_cLsR::synapse0x1db3480() {
   return (neuron0x1da9e00()*-0.0233154);
}

double NNfunction_sb_cLsR::synapse0x1db3b00() {
   return (neuron0x1daa020()*-0.804436);
}

double NNfunction_sb_cLsR::synapse0x1db3b40() {
   return (neuron0x1daa360()*0.0352809);
}

double NNfunction_sb_cLsR::synapse0x1db3b80() {
   return (neuron0x1daa6a0()*-0.0123246);
}

double NNfunction_sb_cLsR::synapse0x1db3bc0() {
   return (neuron0x1daa9e0()*0.0188588);
}

double NNfunction_sb_cLsR::synapse0x1db3c00() {
   return (neuron0x1daad20()*-0.0393344);
}

double NNfunction_sb_cLsR::synapse0x1db3c40() {
   return (neuron0x1dab060()*0.00934677);
}

double NNfunction_sb_cLsR::synapse0x1db3fc0() {
   return (neuron0x1da64a0()*-0.00470645);
}

double NNfunction_sb_cLsR::synapse0x1db4000() {
   return (neuron0x1da67e0()*-0.0937791);
}

double NNfunction_sb_cLsR::synapse0x1db4040() {
   return (neuron0x1da6b20()*0.106065);
}

double NNfunction_sb_cLsR::synapse0x1db4080() {
   return (neuron0x1da6e60()*0.579338);
}

double NNfunction_sb_cLsR::synapse0x1db40c0() {
   return (neuron0x1da71a0()*-0.0520781);
}

double NNfunction_sb_cLsR::synapse0x1db4100() {
   return (neuron0x1da74e0()*0.000918676);
}

double NNfunction_sb_cLsR::synapse0x1db4140() {
   return (neuron0x1da7820()*0.0613805);
}

double NNfunction_sb_cLsR::synapse0x1db4180() {
   return (neuron0x1da7b60()*0.0151142);
}

double NNfunction_sb_cLsR::synapse0x1db41c0() {
   return (neuron0x1da7ea0()*0.0210711);
}

double NNfunction_sb_cLsR::synapse0x1db4200() {
   return (neuron0x1da81e0()*-0.0506756);
}

double NNfunction_sb_cLsR::synapse0x1db4240() {
   return (neuron0x1da8520()*-0.00830344);
}

double NNfunction_sb_cLsR::synapse0x1db4280() {
   return (neuron0x1da8860()*-0.117464);
}

double NNfunction_sb_cLsR::synapse0x1db42c0() {
   return (neuron0x1da8ba0()*-0.127937);
}

double NNfunction_sb_cLsR::synapse0x1db4300() {
   return (neuron0x1da8ee0()*0.0180584);
}

double NNfunction_sb_cLsR::synapse0x1db4340() {
   return (neuron0x1da9220()*-0.059359);
}

double NNfunction_sb_cLsR::synapse0x1db4380() {
   return (neuron0x1da9560()*0.0380825);
}

double NNfunction_sb_cLsR::synapse0x1db3e10() {
   return (neuron0x1da98a0()*0.0562699);
}

double NNfunction_sb_cLsR::synapse0x1db3e50() {
   return (neuron0x1da9e00()*-0.0736114);
}

double NNfunction_sb_cLsR::synapse0x1db44d0() {
   return (neuron0x1daa020()*-0.171061);
}

double NNfunction_sb_cLsR::synapse0x1db4510() {
   return (neuron0x1daa360()*-0.0476193);
}

double NNfunction_sb_cLsR::synapse0x1db4550() {
   return (neuron0x1daa6a0()*0.00496586);
}

double NNfunction_sb_cLsR::synapse0x1db4590() {
   return (neuron0x1daa9e0()*-0.0302937);
}

double NNfunction_sb_cLsR::synapse0x1db45d0() {
   return (neuron0x1daad20()*-0.0325597);
}

double NNfunction_sb_cLsR::synapse0x1db4610() {
   return (neuron0x1dab060()*-0.0205654);
}

double NNfunction_sb_cLsR::synapse0x1db4990() {
   return (neuron0x1da64a0()*0.0709098);
}

double NNfunction_sb_cLsR::synapse0x1db49d0() {
   return (neuron0x1da67e0()*0.0127473);
}

double NNfunction_sb_cLsR::synapse0x1db4a10() {
   return (neuron0x1da6b20()*-0.099085);
}

double NNfunction_sb_cLsR::synapse0x1db4a50() {
   return (neuron0x1da6e60()*0.778159);
}

double NNfunction_sb_cLsR::synapse0x1db4a90() {
   return (neuron0x1da71a0()*0.116111);
}

double NNfunction_sb_cLsR::synapse0x1db4ad0() {
   return (neuron0x1da74e0()*0.159491);
}

double NNfunction_sb_cLsR::synapse0x1db4b10() {
   return (neuron0x1da7820()*0.0783741);
}

double NNfunction_sb_cLsR::synapse0x1db4b50() {
   return (neuron0x1da7b60()*-0.0203735);
}

double NNfunction_sb_cLsR::synapse0x1db4b90() {
   return (neuron0x1da7ea0()*-0.0542851);
}

double NNfunction_sb_cLsR::synapse0x1db4bd0() {
   return (neuron0x1da81e0()*0.0226218);
}

double NNfunction_sb_cLsR::synapse0x1db4c10() {
   return (neuron0x1da8520()*-0.0210586);
}

double NNfunction_sb_cLsR::synapse0x1db4c50() {
   return (neuron0x1da8860()*0.0135907);
}

double NNfunction_sb_cLsR::synapse0x1db4c90() {
   return (neuron0x1da8ba0()*0.0705674);
}

double NNfunction_sb_cLsR::synapse0x1db4cd0() {
   return (neuron0x1da8ee0()*-0.0567945);
}

double NNfunction_sb_cLsR::synapse0x1db4d10() {
   return (neuron0x1da9220()*-0.121441);
}

double NNfunction_sb_cLsR::synapse0x1db4d50() {
   return (neuron0x1da9560()*0.0892679);
}

double NNfunction_sb_cLsR::synapse0x1db47e0() {
   return (neuron0x1da98a0()*0.0137296);
}

double NNfunction_sb_cLsR::synapse0x1db4820() {
   return (neuron0x1da9e00()*0.0845972);
}

double NNfunction_sb_cLsR::synapse0x1db4ea0() {
   return (neuron0x1daa020()*-0.341326);
}

double NNfunction_sb_cLsR::synapse0x1db4ee0() {
   return (neuron0x1daa360()*0.100642);
}

double NNfunction_sb_cLsR::synapse0x1db4f20() {
   return (neuron0x1daa6a0()*0.0210706);
}

double NNfunction_sb_cLsR::synapse0x1db4f60() {
   return (neuron0x1daa9e0()*-0.0508635);
}

double NNfunction_sb_cLsR::synapse0x1db4fa0() {
   return (neuron0x1daad20()*0.0407739);
}

double NNfunction_sb_cLsR::synapse0x1db4fe0() {
   return (neuron0x1dab060()*0.0108906);
}

double NNfunction_sb_cLsR::synapse0x1db5360() {
   return (neuron0x1da64a0()*-0.00333104);
}

double NNfunction_sb_cLsR::synapse0x1da66c0() {
   return (neuron0x1da67e0()*-0.0115073);
}

double NNfunction_sb_cLsR::synapse0x1da6700() {
   return (neuron0x1da6b20()*-0.0221056);
}

double NNfunction_sb_cLsR::synapse0x1da6a00() {
   return (neuron0x1da6e60()*2.75331);
}

double NNfunction_sb_cLsR::synapse0x1da6a40() {
   return (neuron0x1da71a0()*-0.012882);
}

double NNfunction_sb_cLsR::synapse0x1da6d40() {
   return (neuron0x1da74e0()*-0.011845);
}

double NNfunction_sb_cLsR::synapse0x1da6d80() {
   return (neuron0x1da7820()*-0.0260597);
}

double NNfunction_sb_cLsR::synapse0x1da7080() {
   return (neuron0x1da7b60()*-0.00899892);
}

double NNfunction_sb_cLsR::synapse0x1da70c0() {
   return (neuron0x1da7ea0()*-0.0116677);
}

double NNfunction_sb_cLsR::synapse0x1da73c0() {
   return (neuron0x1da81e0()*0.00683947);
}

double NNfunction_sb_cLsR::synapse0x1da7400() {
   return (neuron0x1da8520()*-0.0041182);
}

double NNfunction_sb_cLsR::synapse0x1da7700() {
   return (neuron0x1da8860()*-0.0400454);
}

double NNfunction_sb_cLsR::synapse0x1da7740() {
   return (neuron0x1da8ba0()*0.0608902);
}

double NNfunction_sb_cLsR::synapse0x1da7a40() {
   return (neuron0x1da8ee0()*-0.0019875);
}

double NNfunction_sb_cLsR::synapse0x1da7a80() {
   return (neuron0x1da9220()*-0.042092);
}

double NNfunction_sb_cLsR::synapse0x1da7d80() {
   return (neuron0x1da9560()*-0.0261384);
}

double NNfunction_sb_cLsR::synapse0x1da7dc0() {
   return (neuron0x1da98a0()*0.0174849);
}

double NNfunction_sb_cLsR::synapse0x1da80c0() {
   return (neuron0x1da9e00()*-0.00960608);
}

double NNfunction_sb_cLsR::synapse0x1da8100() {
   return (neuron0x1daa020()*0.0161459);
}

double NNfunction_sb_cLsR::synapse0x1da8400() {
   return (neuron0x1daa360()*0.00335193);
}

double NNfunction_sb_cLsR::synapse0x1da8440() {
   return (neuron0x1daa6a0()*0.00721469);
}

double NNfunction_sb_cLsR::synapse0x1da8740() {
   return (neuron0x1daa9e0()*0.00506861);
}

double NNfunction_sb_cLsR::synapse0x1da8780() {
   return (neuron0x1daad20()*-0.0181586);
}

double NNfunction_sb_cLsR::synapse0x1da8a80() {
   return (neuron0x1dab060()*-0.00210379);
}

double NNfunction_sb_cLsR::synapse0x1da8ac0() {
   return (neuron0x1da64a0()*-0.394207);
}

double NNfunction_sb_cLsR::synapse0x1da9780() {
   return (neuron0x1da67e0()*-0.572708);
}

double NNfunction_sb_cLsR::synapse0x1da97c0() {
   return (neuron0x1da6b20()*-0.0446726);
}

double NNfunction_sb_cLsR::synapse0x1db51b0() {
   return (neuron0x1da6e60()*0.069737);
}

double NNfunction_sb_cLsR::synapse0x1db51f0() {
   return (neuron0x1da71a0()*0.427639);
}

double NNfunction_sb_cLsR::synapse0x1da9ac0() {
   return (neuron0x1da74e0()*-0.123786);
}

double NNfunction_sb_cLsR::synapse0x1da9b00() {
   return (neuron0x1da7820()*-0.152486);
}

double NNfunction_sb_cLsR::synapse0x1b57a90() {
   return (neuron0x1da7b60()*0.419367);
}

double NNfunction_sb_cLsR::synapse0x1b57ad0() {
   return (neuron0x1da7ea0()*-0.202543);
}

double NNfunction_sb_cLsR::synapse0x1daa240() {
   return (neuron0x1da81e0()*0.0815137);
}

double NNfunction_sb_cLsR::synapse0x1daa280() {
   return (neuron0x1da8520()*-0.466819);
}

double NNfunction_sb_cLsR::synapse0x1daa580() {
   return (neuron0x1da8860()*0.481545);
}

double NNfunction_sb_cLsR::synapse0x1daa5c0() {
   return (neuron0x1da8ba0()*-0.463978);
}

double NNfunction_sb_cLsR::synapse0x1daa8c0() {
   return (neuron0x1da8ee0()*-0.523101);
}

double NNfunction_sb_cLsR::synapse0x1daa900() {
   return (neuron0x1da9220()*-0.335837);
}

double NNfunction_sb_cLsR::synapse0x1daac00() {
   return (neuron0x1da9560()*0.05663);
}

double NNfunction_sb_cLsR::synapse0x1daac40() {
   return (neuron0x1da98a0()*0.520573);
}

double NNfunction_sb_cLsR::synapse0x1daaf40() {
   return (neuron0x1da9e00()*0.198556);
}

double NNfunction_sb_cLsR::synapse0x1daaf80() {
   return (neuron0x1daa020()*-0.0573796);
}

double NNfunction_sb_cLsR::synapse0x1dab280() {
   return (neuron0x1daa360()*-0.00792043);
}

double NNfunction_sb_cLsR::synapse0x1dab2c0() {
   return (neuron0x1daa6a0()*-0.0594491);
}

double NNfunction_sb_cLsR::synapse0x1da8dc0() {
   return (neuron0x1daa9e0()*0.233879);
}

double NNfunction_sb_cLsR::synapse0x1da8e00() {
   return (neuron0x1daad20()*0.20194);
}

double NNfunction_sb_cLsR::synapse0x1db70d0() {
   return (neuron0x1dab060()*-0.384981);
}

double NNfunction_sb_cLsR::synapse0x1db7450() {
   return (neuron0x1da64a0()*0.311654);
}

double NNfunction_sb_cLsR::synapse0x1db7490() {
   return (neuron0x1da67e0()*0.464443);
}

double NNfunction_sb_cLsR::synapse0x1db74d0() {
   return (neuron0x1da6b20()*-1.45939);
}

double NNfunction_sb_cLsR::synapse0x1db7510() {
   return (neuron0x1da6e60()*-0.794537);
}

double NNfunction_sb_cLsR::synapse0x1db7550() {
   return (neuron0x1da71a0()*0.158411);
}

double NNfunction_sb_cLsR::synapse0x1db7590() {
   return (neuron0x1da74e0()*-0.281931);
}

double NNfunction_sb_cLsR::synapse0x1db75d0() {
   return (neuron0x1da7820()*0.258539);
}

double NNfunction_sb_cLsR::synapse0x1db7610() {
   return (neuron0x1da7b60()*-0.0739306);
}

double NNfunction_sb_cLsR::synapse0x1db7650() {
   return (neuron0x1da7ea0()*0.217148);
}

double NNfunction_sb_cLsR::synapse0x1db7690() {
   return (neuron0x1da81e0()*0.321385);
}

double NNfunction_sb_cLsR::synapse0x1db76d0() {
   return (neuron0x1da8520()*-0.100501);
}

double NNfunction_sb_cLsR::synapse0x1db7710() {
   return (neuron0x1da8860()*0.057199);
}

double NNfunction_sb_cLsR::synapse0x1db7750() {
   return (neuron0x1da8ba0()*-0.880565);
}

double NNfunction_sb_cLsR::synapse0x1db7790() {
   return (neuron0x1da8ee0()*0.0931723);
}

double NNfunction_sb_cLsR::synapse0x1db77d0() {
   return (neuron0x1da9220()*-0.0118197);
}

double NNfunction_sb_cLsR::synapse0x1db7810() {
   return (neuron0x1da9560()*0.314859);
}

double NNfunction_sb_cLsR::synapse0x1db72a0() {
   return (neuron0x1da98a0()*-0.122045);
}

double NNfunction_sb_cLsR::synapse0x1db72e0() {
   return (neuron0x1da9e00()*0.315457);
}

double NNfunction_sb_cLsR::synapse0x1db7960() {
   return (neuron0x1daa020()*0.107353);
}

double NNfunction_sb_cLsR::synapse0x1db79a0() {
   return (neuron0x1daa360()*-0.0433901);
}

double NNfunction_sb_cLsR::synapse0x1db79e0() {
   return (neuron0x1daa6a0()*0.380877);
}

double NNfunction_sb_cLsR::synapse0x1db7a20() {
   return (neuron0x1daa9e0()*0.322377);
}

double NNfunction_sb_cLsR::synapse0x1db7a60() {
   return (neuron0x1daad20()*-0.0671167);
}

double NNfunction_sb_cLsR::synapse0x1db7aa0() {
   return (neuron0x1dab060()*-0.0964335);
}

double NNfunction_sb_cLsR::synapse0x1db7e20() {
   return (neuron0x1da64a0()*0.0477547);
}

double NNfunction_sb_cLsR::synapse0x1db7e60() {
   return (neuron0x1da67e0()*0.0159638);
}

double NNfunction_sb_cLsR::synapse0x1db7ea0() {
   return (neuron0x1da6b20()*0.0285053);
}

double NNfunction_sb_cLsR::synapse0x1db7ee0() {
   return (neuron0x1da6e60()*-5.04175);
}

double NNfunction_sb_cLsR::synapse0x1db7f20() {
   return (neuron0x1da71a0()*0.0580722);
}

double NNfunction_sb_cLsR::synapse0x1db7f60() {
   return (neuron0x1da74e0()*0.04167);
}

double NNfunction_sb_cLsR::synapse0x1db7fa0() {
   return (neuron0x1da7820()*0.0137145);
}

double NNfunction_sb_cLsR::synapse0x1db7fe0() {
   return (neuron0x1da7b60()*-0.00583108);
}

double NNfunction_sb_cLsR::synapse0x1db8020() {
   return (neuron0x1da7ea0()*-0.00379243);
}

double NNfunction_sb_cLsR::synapse0x1db8060() {
   return (neuron0x1da81e0()*-0.0110828);
}

double NNfunction_sb_cLsR::synapse0x1db80a0() {
   return (neuron0x1da8520()*-0.0200594);
}

double NNfunction_sb_cLsR::synapse0x1db80e0() {
   return (neuron0x1da8860()*0.0698386);
}

double NNfunction_sb_cLsR::synapse0x1db8120() {
   return (neuron0x1da8ba0()*-0.170815);
}

double NNfunction_sb_cLsR::synapse0x1db8160() {
   return (neuron0x1da8ee0()*0.0213466);
}

double NNfunction_sb_cLsR::synapse0x1db81a0() {
   return (neuron0x1da9220()*0.0468352);
}

double NNfunction_sb_cLsR::synapse0x1db81e0() {
   return (neuron0x1da9560()*0.0086528);
}

double NNfunction_sb_cLsR::synapse0x1db7c70() {
   return (neuron0x1da98a0()*-0.0542119);
}

double NNfunction_sb_cLsR::synapse0x1db7cb0() {
   return (neuron0x1da9e00()*0.0349742);
}

double NNfunction_sb_cLsR::synapse0x1db8330() {
   return (neuron0x1daa020()*-0.0987806);
}

double NNfunction_sb_cLsR::synapse0x1db8370() {
   return (neuron0x1daa360()*0.0105539);
}

double NNfunction_sb_cLsR::synapse0x1db83b0() {
   return (neuron0x1daa6a0()*0.00210979);
}

double NNfunction_sb_cLsR::synapse0x1db83f0() {
   return (neuron0x1daa9e0()*0.022123);
}

double NNfunction_sb_cLsR::synapse0x1db8430() {
   return (neuron0x1daad20()*0.0225661);
}

double NNfunction_sb_cLsR::synapse0x1db8470() {
   return (neuron0x1dab060()*-0.00383693);
}

double NNfunction_sb_cLsR::synapse0x1db87f0() {
   return (neuron0x1da64a0()*-0.0359117);
}

double NNfunction_sb_cLsR::synapse0x1db8830() {
   return (neuron0x1da67e0()*0.104126);
}

double NNfunction_sb_cLsR::synapse0x1db8870() {
   return (neuron0x1da6b20()*0.14015);
}

double NNfunction_sb_cLsR::synapse0x1db88b0() {
   return (neuron0x1da6e60()*-0.256046);
}

double NNfunction_sb_cLsR::synapse0x1db88f0() {
   return (neuron0x1da71a0()*0.0582118);
}

double NNfunction_sb_cLsR::synapse0x1db8930() {
   return (neuron0x1da74e0()*0.0429904);
}

double NNfunction_sb_cLsR::synapse0x1db8970() {
   return (neuron0x1da7820()*0.179194);
}

double NNfunction_sb_cLsR::synapse0x1db89b0() {
   return (neuron0x1da7b60()*-0.109123);
}

double NNfunction_sb_cLsR::synapse0x1db89f0() {
   return (neuron0x1da7ea0()*-0.0113839);
}

double NNfunction_sb_cLsR::synapse0x1db8a30() {
   return (neuron0x1da81e0()*-0.0242936);
}

double NNfunction_sb_cLsR::synapse0x1db8a70() {
   return (neuron0x1da8520()*0.0598215);
}

double NNfunction_sb_cLsR::synapse0x1db8ab0() {
   return (neuron0x1da8860()*0.0183804);
}

double NNfunction_sb_cLsR::synapse0x1db8af0() {
   return (neuron0x1da8ba0()*-0.508828);
}

double NNfunction_sb_cLsR::synapse0x1db8b30() {
   return (neuron0x1da8ee0()*-0.00539588);
}

double NNfunction_sb_cLsR::synapse0x1db8b70() {
   return (neuron0x1da9220()*-0.49691);
}

double NNfunction_sb_cLsR::synapse0x1db8bb0() {
   return (neuron0x1da9560()*-0.0795089);
}

double NNfunction_sb_cLsR::synapse0x1db8640() {
   return (neuron0x1da98a0()*-0.0870818);
}

double NNfunction_sb_cLsR::synapse0x1db8680() {
   return (neuron0x1da9e00()*0.0789727);
}

double NNfunction_sb_cLsR::synapse0x1db8d00() {
   return (neuron0x1daa020()*-0.461912);
}

double NNfunction_sb_cLsR::synapse0x1db8d40() {
   return (neuron0x1daa360()*0.0510032);
}

double NNfunction_sb_cLsR::synapse0x1db8d80() {
   return (neuron0x1daa6a0()*-0.0164333);
}

double NNfunction_sb_cLsR::synapse0x1db8dc0() {
   return (neuron0x1daa9e0()*0.041245);
}

double NNfunction_sb_cLsR::synapse0x1db8e00() {
   return (neuron0x1daad20()*-0.0168757);
}

double NNfunction_sb_cLsR::synapse0x1db8e40() {
   return (neuron0x1dab060()*-0.045557);
}

double NNfunction_sb_cLsR::synapse0x1db91c0() {
   return (neuron0x1da64a0()*0.0824389);
}

double NNfunction_sb_cLsR::synapse0x1db9200() {
   return (neuron0x1da67e0()*-0.204258);
}

double NNfunction_sb_cLsR::synapse0x1db9240() {
   return (neuron0x1da6b20()*-0.0170897);
}

double NNfunction_sb_cLsR::synapse0x1db9280() {
   return (neuron0x1da6e60()*0.917872);
}

double NNfunction_sb_cLsR::synapse0x1db92c0() {
   return (neuron0x1da71a0()*0.121941);
}

double NNfunction_sb_cLsR::synapse0x1db9300() {
   return (neuron0x1da74e0()*-0.0209016);
}

double NNfunction_sb_cLsR::synapse0x1db9340() {
   return (neuron0x1da7820()*0.0427412);
}

double NNfunction_sb_cLsR::synapse0x1db9380() {
   return (neuron0x1da7b60()*-0.141137);
}

double NNfunction_sb_cLsR::synapse0x1db93c0() {
   return (neuron0x1da7ea0()*0.0542351);
}

double NNfunction_sb_cLsR::synapse0x1db9400() {
   return (neuron0x1da81e0()*-0.0422767);
}

double NNfunction_sb_cLsR::synapse0x1db9440() {
   return (neuron0x1da8520()*0.0450376);
}

double NNfunction_sb_cLsR::synapse0x1db9480() {
   return (neuron0x1da8860()*-0.0182185);
}

double NNfunction_sb_cLsR::synapse0x1db94c0() {
   return (neuron0x1da8ba0()*-0.172536);
}

double NNfunction_sb_cLsR::synapse0x1db9500() {
   return (neuron0x1da8ee0()*0.0399654);
}

double NNfunction_sb_cLsR::synapse0x1db9540() {
   return (neuron0x1da9220()*-0.0918458);
}

double NNfunction_sb_cLsR::synapse0x1db9580() {
   return (neuron0x1da9560()*-0.0461052);
}

double NNfunction_sb_cLsR::synapse0x1db9010() {
   return (neuron0x1da98a0()*-0.232485);
}

double NNfunction_sb_cLsR::synapse0x1db9050() {
   return (neuron0x1da9e00()*-0.0928613);
}

double NNfunction_sb_cLsR::synapse0x1db96d0() {
   return (neuron0x1daa020()*-0.188618);
}

double NNfunction_sb_cLsR::synapse0x1db9710() {
   return (neuron0x1daa360()*-0.00630379);
}

double NNfunction_sb_cLsR::synapse0x1db9750() {
   return (neuron0x1daa6a0()*-0.016968);
}

double NNfunction_sb_cLsR::synapse0x1db9790() {
   return (neuron0x1daa9e0()*-0.0207742);
}

double NNfunction_sb_cLsR::synapse0x1db97d0() {
   return (neuron0x1daad20()*-0.0252992);
}

double NNfunction_sb_cLsR::synapse0x1db9810() {
   return (neuron0x1dab060()*-0.0296807);
}

double NNfunction_sb_cLsR::synapse0x1db9b90() {
   return (neuron0x1da64a0()*0.295343);
}

double NNfunction_sb_cLsR::synapse0x1db9bd0() {
   return (neuron0x1da67e0()*-0.112357);
}

double NNfunction_sb_cLsR::synapse0x1db9c10() {
   return (neuron0x1da6b20()*0.278011);
}

double NNfunction_sb_cLsR::synapse0x1db9c50() {
   return (neuron0x1da6e60()*-0.952719);
}

double NNfunction_sb_cLsR::synapse0x1db9c90() {
   return (neuron0x1da71a0()*-0.107127);
}

double NNfunction_sb_cLsR::synapse0x1db9cd0() {
   return (neuron0x1da74e0()*1.09803);
}

double NNfunction_sb_cLsR::synapse0x1db9d10() {
   return (neuron0x1da7820()*-0.323012);
}

double NNfunction_sb_cLsR::synapse0x1db9d50() {
   return (neuron0x1da7b60()*-0.359492);
}

double NNfunction_sb_cLsR::synapse0x1db9d90() {
   return (neuron0x1da7ea0()*0.113212);
}

double NNfunction_sb_cLsR::synapse0x1db1f50() {
   return (neuron0x1da81e0()*0.225023);
}

double NNfunction_sb_cLsR::synapse0x1db1f90() {
   return (neuron0x1da8520()*0.522434);
}

double NNfunction_sb_cLsR::synapse0x1db1fd0() {
   return (neuron0x1da8860()*-0.125329);
}

double NNfunction_sb_cLsR::synapse0x1db2010() {
   return (neuron0x1da8ba0()*0.408993);
}

double NNfunction_sb_cLsR::synapse0x1db2050() {
   return (neuron0x1da8ee0()*-0.556802);
}

double NNfunction_sb_cLsR::synapse0x1db2090() {
   return (neuron0x1da9220()*0.652603);
}

double NNfunction_sb_cLsR::synapse0x1db20d0() {
   return (neuron0x1da9560()*-0.112851);
}

double NNfunction_sb_cLsR::synapse0x1db99e0() {
   return (neuron0x1da98a0()*-0.228835);
}

double NNfunction_sb_cLsR::synapse0x1db9a20() {
   return (neuron0x1da9e00()*-0.47814);
}

double NNfunction_sb_cLsR::synapse0x1db2220() {
   return (neuron0x1daa020()*0.147098);
}

double NNfunction_sb_cLsR::synapse0x1db2260() {
   return (neuron0x1daa360()*-0.11149);
}

double NNfunction_sb_cLsR::synapse0x1db22a0() {
   return (neuron0x1daa6a0()*-0.527216);
}

double NNfunction_sb_cLsR::synapse0x1db22e0() {
   return (neuron0x1daa9e0()*-0.230799);
}

double NNfunction_sb_cLsR::synapse0x1db2320() {
   return (neuron0x1daad20()*0.00472596);
}

double NNfunction_sb_cLsR::synapse0x1db2360() {
   return (neuron0x1dab060()*0.0718384);
}

double NNfunction_sb_cLsR::synapse0x1db26e0() {
   return (neuron0x1da64a0()*0.0104554);
}

double NNfunction_sb_cLsR::synapse0x1db2720() {
   return (neuron0x1da67e0()*0.0136461);
}

double NNfunction_sb_cLsR::synapse0x1db2760() {
   return (neuron0x1da6b20()*-0.0402435);
}

double NNfunction_sb_cLsR::synapse0x1db27a0() {
   return (neuron0x1da6e60()*0.122987);
}

double NNfunction_sb_cLsR::synapse0x1db27e0() {
   return (neuron0x1da71a0()*-0.0446969);
}

double NNfunction_sb_cLsR::synapse0x1db2820() {
   return (neuron0x1da74e0()*-0.0107147);
}

double NNfunction_sb_cLsR::synapse0x1db2860() {
   return (neuron0x1da7820()*-0.0383493);
}

double NNfunction_sb_cLsR::synapse0x1db28a0() {
   return (neuron0x1da7b60()*0.0467246);
}

double NNfunction_sb_cLsR::synapse0x1db28e0() {
   return (neuron0x1da7ea0()*0.0087766);
}

double NNfunction_sb_cLsR::synapse0x1db2920() {
   return (neuron0x1da81e0()*0.0480855);
}

double NNfunction_sb_cLsR::synapse0x1db2960() {
   return (neuron0x1da8520()*-0.022357);
}

double NNfunction_sb_cLsR::synapse0x1db29a0() {
   return (neuron0x1da8860()*0.0242904);
}

double NNfunction_sb_cLsR::synapse0x1db29e0() {
   return (neuron0x1da8ba0()*0.463625);
}

double NNfunction_sb_cLsR::synapse0x1db2a20() {
   return (neuron0x1da8ee0()*0.0790081);
}

double NNfunction_sb_cLsR::synapse0x1db2a60() {
   return (neuron0x1da9220()*0.0447517);
}

double NNfunction_sb_cLsR::synapse0x1db2aa0() {
   return (neuron0x1da9560()*-0.0768056);
}

double NNfunction_sb_cLsR::synapse0x1db2530() {
   return (neuron0x1da98a0()*0.126622);
}

double NNfunction_sb_cLsR::synapse0x1db2570() {
   return (neuron0x1da9e00()*0.0855392);
}

double NNfunction_sb_cLsR::synapse0x1db2bf0() {
   return (neuron0x1daa020()*0.385821);
}

double NNfunction_sb_cLsR::synapse0x1db2c30() {
   return (neuron0x1daa360()*0.0563809);
}

double NNfunction_sb_cLsR::synapse0x1db2c70() {
   return (neuron0x1daa6a0()*0.0426633);
}

double NNfunction_sb_cLsR::synapse0x1db2cb0() {
   return (neuron0x1daa9e0()*0.0500028);
}

double NNfunction_sb_cLsR::synapse0x1db2cf0() {
   return (neuron0x1daad20()*0.0208144);
}

double NNfunction_sb_cLsR::synapse0x1db2d30() {
   return (neuron0x1dab060()*0.0295202);
}

double NNfunction_sb_cLsR::synapse0x1db2f00() {
   return (neuron0x1da64a0()*-0.0470418);
}

double NNfunction_sb_cLsR::synapse0x1dbbf90() {
   return (neuron0x1da67e0()*-0.0942858);
}

double NNfunction_sb_cLsR::synapse0x1dbbfd0() {
   return (neuron0x1da6b20()*0.046252);
}

double NNfunction_sb_cLsR::synapse0x1dbc010() {
   return (neuron0x1da6e60()*-3.07657);
}

double NNfunction_sb_cLsR::synapse0x1dbc050() {
   return (neuron0x1da71a0()*-0.127526);
}

double NNfunction_sb_cLsR::synapse0x1dbc090() {
   return (neuron0x1da74e0()*-0.0876348);
}

double NNfunction_sb_cLsR::synapse0x1dbc0d0() {
   return (neuron0x1da7820()*0.0484123);
}

double NNfunction_sb_cLsR::synapse0x1dbc110() {
   return (neuron0x1da7b60()*0.0150874);
}

double NNfunction_sb_cLsR::synapse0x1dbc150() {
   return (neuron0x1da7ea0()*0.00485255);
}

double NNfunction_sb_cLsR::synapse0x1dbc190() {
   return (neuron0x1da81e0()*0.0204713);
}

double NNfunction_sb_cLsR::synapse0x1dbc1d0() {
   return (neuron0x1da8520()*0.150344);
}

double NNfunction_sb_cLsR::synapse0x1dbc210() {
   return (neuron0x1da8860()*-0.320317);
}

double NNfunction_sb_cLsR::synapse0x1dbc250() {
   return (neuron0x1da8ba0()*-0.169063);
}

double NNfunction_sb_cLsR::synapse0x1dbc290() {
   return (neuron0x1da8ee0()*-0.128054);
}

double NNfunction_sb_cLsR::synapse0x1dbc2d0() {
   return (neuron0x1da9220()*-0.105592);
}

double NNfunction_sb_cLsR::synapse0x1dbc310() {
   return (neuron0x1da9560()*0.0197868);
}

double NNfunction_sb_cLsR::synapse0x1dbbde0() {
   return (neuron0x1da98a0()*0.013614);
}

double NNfunction_sb_cLsR::synapse0x1dbbe20() {
   return (neuron0x1da9e00()*-0.337099);
}

double NNfunction_sb_cLsR::synapse0x1dbc460() {
   return (neuron0x1daa020()*-0.0250861);
}

double NNfunction_sb_cLsR::synapse0x1dbc4a0() {
   return (neuron0x1daa360()*-0.0527202);
}

double NNfunction_sb_cLsR::synapse0x1dbc4e0() {
   return (neuron0x1daa6a0()*-0.146526);
}

double NNfunction_sb_cLsR::synapse0x1dbc520() {
   return (neuron0x1daa9e0()*-0.171909);
}

double NNfunction_sb_cLsR::synapse0x1dbc560() {
   return (neuron0x1daad20()*-0.107739);
}

double NNfunction_sb_cLsR::synapse0x1dbc5a0() {
   return (neuron0x1dab060()*0.0332193);
}

double NNfunction_sb_cLsR::synapse0x1dbc920() {
   return (neuron0x1da64a0()*0.0295947);
}

double NNfunction_sb_cLsR::synapse0x1dbc960() {
   return (neuron0x1da67e0()*0.0155257);
}

double NNfunction_sb_cLsR::synapse0x1dbc9a0() {
   return (neuron0x1da6b20()*0.018753);
}

double NNfunction_sb_cLsR::synapse0x1dbc9e0() {
   return (neuron0x1da6e60()*-2.12605);
}

double NNfunction_sb_cLsR::synapse0x1dbca20() {
   return (neuron0x1da71a0()*0.0166576);
}

double NNfunction_sb_cLsR::synapse0x1dbca60() {
   return (neuron0x1da74e0()*0.0138183);
}

double NNfunction_sb_cLsR::synapse0x1dbcaa0() {
   return (neuron0x1da7820()*-0.00408137);
}

double NNfunction_sb_cLsR::synapse0x1dbcae0() {
   return (neuron0x1da7b60()*-0.00421743);
}

double NNfunction_sb_cLsR::synapse0x1dbcb20() {
   return (neuron0x1da7ea0()*-0.0258333);
}

double NNfunction_sb_cLsR::synapse0x1dbcb60() {
   return (neuron0x1da81e0()*-0.00969687);
}

double NNfunction_sb_cLsR::synapse0x1dbcba0() {
   return (neuron0x1da8520()*-0.0242997);
}

double NNfunction_sb_cLsR::synapse0x1dbcbe0() {
   return (neuron0x1da8860()*0.0239563);
}

double NNfunction_sb_cLsR::synapse0x1dbcc20() {
   return (neuron0x1da8ba0()*-0.00159877);
}

double NNfunction_sb_cLsR::synapse0x1dbcc60() {
   return (neuron0x1da8ee0()*0.0253492);
}

double NNfunction_sb_cLsR::synapse0x1dbcca0() {
   return (neuron0x1da9220()*0.0196609);
}

double NNfunction_sb_cLsR::synapse0x1dbcce0() {
   return (neuron0x1da9560()*0.00272156);
}

double NNfunction_sb_cLsR::synapse0x1dbc770() {
   return (neuron0x1da98a0()*0.0105068);
}

double NNfunction_sb_cLsR::synapse0x1dbc7b0() {
   return (neuron0x1da9e00()*0.0244147);
}

double NNfunction_sb_cLsR::synapse0x1dbce30() {
   return (neuron0x1daa020()*0.0225707);
}

double NNfunction_sb_cLsR::synapse0x1dbce70() {
   return (neuron0x1daa360()*0.00516063);
}

double NNfunction_sb_cLsR::synapse0x1dbceb0() {
   return (neuron0x1daa6a0()*-0.00439649);
}

double NNfunction_sb_cLsR::synapse0x1dbcef0() {
   return (neuron0x1daa9e0()*0.00916906);
}

double NNfunction_sb_cLsR::synapse0x1dbcf30() {
   return (neuron0x1daad20()*-0.00568301);
}

double NNfunction_sb_cLsR::synapse0x1dbcf70() {
   return (neuron0x1dab060()*0.011985);
}

double NNfunction_sb_cLsR::synapse0x1dbd2f0() {
   return (neuron0x1da64a0()*0.120101);
}

double NNfunction_sb_cLsR::synapse0x1dbd330() {
   return (neuron0x1da67e0()*0.0219689);
}

double NNfunction_sb_cLsR::synapse0x1dbd370() {
   return (neuron0x1da6b20()*-0.0246493);
}

double NNfunction_sb_cLsR::synapse0x1dbd3b0() {
   return (neuron0x1da6e60()*1.03394);
}

double NNfunction_sb_cLsR::synapse0x1dbd3f0() {
   return (neuron0x1da71a0()*-0.0501731);
}

double NNfunction_sb_cLsR::synapse0x1dbd430() {
   return (neuron0x1da74e0()*-0.0560364);
}

double NNfunction_sb_cLsR::synapse0x1dbd470() {
   return (neuron0x1da7820()*-0.164153);
}

double NNfunction_sb_cLsR::synapse0x1dbd4b0() {
   return (neuron0x1da7b60()*0.0144924);
}

double NNfunction_sb_cLsR::synapse0x1dbd4f0() {
   return (neuron0x1da7ea0()*0.147834);
}

double NNfunction_sb_cLsR::synapse0x1dbd530() {
   return (neuron0x1da81e0()*-0.0466232);
}

double NNfunction_sb_cLsR::synapse0x1dbd570() {
   return (neuron0x1da8520()*0.0747097);
}

double NNfunction_sb_cLsR::synapse0x1dbd5b0() {
   return (neuron0x1da8860()*0.140302);
}

double NNfunction_sb_cLsR::synapse0x1dbd5f0() {
   return (neuron0x1da8ba0()*-0.410385);
}

double NNfunction_sb_cLsR::synapse0x1dbd630() {
   return (neuron0x1da8ee0()*0.0394082);
}

double NNfunction_sb_cLsR::synapse0x1dbd670() {
   return (neuron0x1da9220()*0.0338915);
}

double NNfunction_sb_cLsR::synapse0x1dbd6b0() {
   return (neuron0x1da9560()*-0.249736);
}

double NNfunction_sb_cLsR::synapse0x1dbd140() {
   return (neuron0x1da98a0()*-0.0936347);
}

double NNfunction_sb_cLsR::synapse0x1dbd180() {
   return (neuron0x1da9e00()*0.117672);
}

double NNfunction_sb_cLsR::synapse0x1dbd800() {
   return (neuron0x1daa020()*-0.945165);
}

double NNfunction_sb_cLsR::synapse0x1dbd840() {
   return (neuron0x1daa360()*0.013787);
}

double NNfunction_sb_cLsR::synapse0x1dbd880() {
   return (neuron0x1daa6a0()*-0.0748203);
}

double NNfunction_sb_cLsR::synapse0x1dbd8c0() {
   return (neuron0x1daa9e0()*-0.0836168);
}

double NNfunction_sb_cLsR::synapse0x1dbd900() {
   return (neuron0x1daad20()*-0.181484);
}

double NNfunction_sb_cLsR::synapse0x1dbd940() {
   return (neuron0x1dab060()*-0.0518544);
}

double NNfunction_sb_cLsR::synapse0x1dbdcc0() {
   return (neuron0x1da64a0()*0.00441137);
}

double NNfunction_sb_cLsR::synapse0x1dbdd00() {
   return (neuron0x1da67e0()*0.00225458);
}

double NNfunction_sb_cLsR::synapse0x1dbdd40() {
   return (neuron0x1da6b20()*1.23145);
}

double NNfunction_sb_cLsR::synapse0x1dbdd80() {
   return (neuron0x1da6e60()*0.029828);
}

double NNfunction_sb_cLsR::synapse0x1dbddc0() {
   return (neuron0x1da71a0()*-0.0320422);
}

double NNfunction_sb_cLsR::synapse0x1dbde00() {
   return (neuron0x1da74e0()*-0.00956459);
}

double NNfunction_sb_cLsR::synapse0x1dbde40() {
   return (neuron0x1da7820()*-0.0436346);
}

double NNfunction_sb_cLsR::synapse0x1dbde80() {
   return (neuron0x1da7b60()*0.00214241);
}

double NNfunction_sb_cLsR::synapse0x1dbdec0() {
   return (neuron0x1da7ea0()*0.00438509);
}

double NNfunction_sb_cLsR::synapse0x1dbdf00() {
   return (neuron0x1da81e0()*0.0137198);
}

double NNfunction_sb_cLsR::synapse0x1dbdf40() {
   return (neuron0x1da8520()*0.0599321);
}

double NNfunction_sb_cLsR::synapse0x1dbdf80() {
   return (neuron0x1da8860()*0.0666837);
}

double NNfunction_sb_cLsR::synapse0x1dbdfc0() {
   return (neuron0x1da8ba0()*-0.956393);
}

double NNfunction_sb_cLsR::synapse0x1dbe000() {
   return (neuron0x1da8ee0()*0.0435356);
}

double NNfunction_sb_cLsR::synapse0x1dbe040() {
   return (neuron0x1da9220()*0.0389944);
}

double NNfunction_sb_cLsR::synapse0x1dbe080() {
   return (neuron0x1da9560()*-0.00733141);
}

double NNfunction_sb_cLsR::synapse0x1dbdb10() {
   return (neuron0x1da98a0()*-0.00671725);
}

double NNfunction_sb_cLsR::synapse0x1dbdb50() {
   return (neuron0x1da9e00()*-0.0496821);
}

double NNfunction_sb_cLsR::synapse0x1dbe1d0() {
   return (neuron0x1daa020()*0.0134348);
}

double NNfunction_sb_cLsR::synapse0x1dbe210() {
   return (neuron0x1daa360()*0.0543596);
}

double NNfunction_sb_cLsR::synapse0x1dbe250() {
   return (neuron0x1daa6a0()*0.0266887);
}

double NNfunction_sb_cLsR::synapse0x1dbe290() {
   return (neuron0x1daa9e0()*0.0182935);
}

double NNfunction_sb_cLsR::synapse0x1dbe2d0() {
   return (neuron0x1daad20()*0.0125765);
}

double NNfunction_sb_cLsR::synapse0x1dbe310() {
   return (neuron0x1dab060()*0.0237381);
}

double NNfunction_sb_cLsR::synapse0x1dbe690() {
   return (neuron0x1da64a0()*-0.043906);
}

double NNfunction_sb_cLsR::synapse0x1dbe6d0() {
   return (neuron0x1da67e0()*-0.00568826);
}

double NNfunction_sb_cLsR::synapse0x1dbe710() {
   return (neuron0x1da6b20()*-0.205859);
}

double NNfunction_sb_cLsR::synapse0x1dbe750() {
   return (neuron0x1da6e60()*0.872406);
}

double NNfunction_sb_cLsR::synapse0x1dbe790() {
   return (neuron0x1da71a0()*-0.0878171);
}

double NNfunction_sb_cLsR::synapse0x1dbe7d0() {
   return (neuron0x1da74e0()*0.0078387);
}

double NNfunction_sb_cLsR::synapse0x1dbe810() {
   return (neuron0x1da7820()*0.0828569);
}

double NNfunction_sb_cLsR::synapse0x1dbe850() {
   return (neuron0x1da7b60()*-0.0289857);
}

double NNfunction_sb_cLsR::synapse0x1dbe890() {
   return (neuron0x1da7ea0()*-0.000784793);
}

double NNfunction_sb_cLsR::synapse0x1dbe8d0() {
   return (neuron0x1da81e0()*-0.0158731);
}

double NNfunction_sb_cLsR::synapse0x1dbe910() {
   return (neuron0x1da8520()*-0.0249658);
}

double NNfunction_sb_cLsR::synapse0x1dbe950() {
   return (neuron0x1da8860()*0.137935);
}

double NNfunction_sb_cLsR::synapse0x1dbe990() {
   return (neuron0x1da8ba0()*-0.0550671);
}

double NNfunction_sb_cLsR::synapse0x1dbe9d0() {
   return (neuron0x1da8ee0()*-0.0645583);
}

double NNfunction_sb_cLsR::synapse0x1dbea10() {
   return (neuron0x1da9220()*-0.0134748);
}

double NNfunction_sb_cLsR::synapse0x1dbea50() {
   return (neuron0x1da9560()*-0.120784);
}

double NNfunction_sb_cLsR::synapse0x1dbe4e0() {
   return (neuron0x1da98a0()*-0.0430255);
}

double NNfunction_sb_cLsR::synapse0x1dbe520() {
   return (neuron0x1da9e00()*0.0859607);
}

double NNfunction_sb_cLsR::synapse0x1dbeba0() {
   return (neuron0x1daa020()*0.340905);
}

double NNfunction_sb_cLsR::synapse0x1dbebe0() {
   return (neuron0x1daa360()*0.0673332);
}

double NNfunction_sb_cLsR::synapse0x1dbec20() {
   return (neuron0x1daa6a0()*0.00485114);
}

double NNfunction_sb_cLsR::synapse0x1dbec60() {
   return (neuron0x1daa9e0()*-0.0157131);
}

double NNfunction_sb_cLsR::synapse0x1dbeca0() {
   return (neuron0x1daad20()*-0.0194461);
}

double NNfunction_sb_cLsR::synapse0x1dbece0() {
   return (neuron0x1dab060()*-0.0092967);
}

double NNfunction_sb_cLsR::synapse0x1dbf060() {
   return (neuron0x1da64a0()*-0.0724945);
}

double NNfunction_sb_cLsR::synapse0x1dbf0a0() {
   return (neuron0x1da67e0()*-0.0644713);
}

double NNfunction_sb_cLsR::synapse0x1dbf0e0() {
   return (neuron0x1da6b20()*-0.0965038);
}

double NNfunction_sb_cLsR::synapse0x1dbf120() {
   return (neuron0x1da6e60()*0.0621128);
}

double NNfunction_sb_cLsR::synapse0x1dbf160() {
   return (neuron0x1da71a0()*-0.00270053);
}

double NNfunction_sb_cLsR::synapse0x1dbf1a0() {
   return (neuron0x1da74e0()*-0.0424257);
}

double NNfunction_sb_cLsR::synapse0x1dbf1e0() {
   return (neuron0x1da7820()*-0.0680934);
}

double NNfunction_sb_cLsR::synapse0x1dbf220() {
   return (neuron0x1da7b60()*0.0292587);
}

double NNfunction_sb_cLsR::synapse0x1dbf260() {
   return (neuron0x1da7ea0()*-0.0249208);
}

double NNfunction_sb_cLsR::synapse0x1dbf2a0() {
   return (neuron0x1da81e0()*0.0595423);
}

double NNfunction_sb_cLsR::synapse0x1dbf2e0() {
   return (neuron0x1da8520()*0.0143577);
}

double NNfunction_sb_cLsR::synapse0x1dbf320() {
   return (neuron0x1da8860()*-0.0320039);
}

double NNfunction_sb_cLsR::synapse0x1dbf360() {
   return (neuron0x1da8ba0()*0.291312);
}

double NNfunction_sb_cLsR::synapse0x1dbf3a0() {
   return (neuron0x1da8ee0()*-0.10191);
}

double NNfunction_sb_cLsR::synapse0x1dbf3e0() {
   return (neuron0x1da9220()*0.0450604);
}

double NNfunction_sb_cLsR::synapse0x1dbf420() {
   return (neuron0x1da9560()*0.0171094);
}

double NNfunction_sb_cLsR::synapse0x1dbeeb0() {
   return (neuron0x1da98a0()*0.00566044);
}

double NNfunction_sb_cLsR::synapse0x1dbeef0() {
   return (neuron0x1da9e00()*-0.0558842);
}

double NNfunction_sb_cLsR::synapse0x1dbf570() {
   return (neuron0x1daa020()*0.102552);
}

double NNfunction_sb_cLsR::synapse0x1dbf5b0() {
   return (neuron0x1daa360()*-0.15847);
}

double NNfunction_sb_cLsR::synapse0x1dbf5f0() {
   return (neuron0x1daa6a0()*0.00837962);
}

double NNfunction_sb_cLsR::synapse0x1dbf630() {
   return (neuron0x1daa9e0()*-0.0209284);
}

double NNfunction_sb_cLsR::synapse0x1dbf670() {
   return (neuron0x1daad20()*-0.0403634);
}

double NNfunction_sb_cLsR::synapse0x1dbf6b0() {
   return (neuron0x1dab060()*-0.003181);
}

double NNfunction_sb_cLsR::synapse0x1dbfa30() {
   return (neuron0x1da64a0()*-0.131079);
}

double NNfunction_sb_cLsR::synapse0x1dbfa70() {
   return (neuron0x1da67e0()*0.0835419);
}

double NNfunction_sb_cLsR::synapse0x1dbfab0() {
   return (neuron0x1da6b20()*-0.0541476);
}

double NNfunction_sb_cLsR::synapse0x1dbfaf0() {
   return (neuron0x1da6e60()*0.479755);
}

double NNfunction_sb_cLsR::synapse0x1dbfb30() {
   return (neuron0x1da71a0()*-0.0754669);
}

double NNfunction_sb_cLsR::synapse0x1dbfb70() {
   return (neuron0x1da74e0()*-0.146316);
}

double NNfunction_sb_cLsR::synapse0x1dbfbb0() {
   return (neuron0x1da7820()*-0.107726);
}

double NNfunction_sb_cLsR::synapse0x1dbfbf0() {
   return (neuron0x1da7b60()*-0.00758375);
}

double NNfunction_sb_cLsR::synapse0x1dbfc30() {
   return (neuron0x1da7ea0()*0.122878);
}

double NNfunction_sb_cLsR::synapse0x1dbfc70() {
   return (neuron0x1da81e0()*0.152824);
}

double NNfunction_sb_cLsR::synapse0x1dbfcb0() {
   return (neuron0x1da8520()*0.189806);
}

double NNfunction_sb_cLsR::synapse0x1dbfcf0() {
   return (neuron0x1da8860()*-0.0402897);
}

double NNfunction_sb_cLsR::synapse0x1dbfd30() {
   return (neuron0x1da8ba0()*-0.440238);
}

double NNfunction_sb_cLsR::synapse0x1dbfd70() {
   return (neuron0x1da8ee0()*-0.106635);
}

double NNfunction_sb_cLsR::synapse0x1dbfdb0() {
   return (neuron0x1da9220()*-0.105306);
}

double NNfunction_sb_cLsR::synapse0x1dbfdf0() {
   return (neuron0x1da9560()*0.0529651);
}

double NNfunction_sb_cLsR::synapse0x1dbf880() {
   return (neuron0x1da98a0()*-0.0484583);
}

double NNfunction_sb_cLsR::synapse0x1dbf8c0() {
   return (neuron0x1da9e00()*-0.0104795);
}

double NNfunction_sb_cLsR::synapse0x1dbff40() {
   return (neuron0x1daa020()*-0.808871);
}

double NNfunction_sb_cLsR::synapse0x1dbff80() {
   return (neuron0x1daa360()*0.061047);
}

double NNfunction_sb_cLsR::synapse0x1dbffc0() {
   return (neuron0x1daa6a0()*0.0585354);
}

double NNfunction_sb_cLsR::synapse0x1dc0000() {
   return (neuron0x1daa9e0()*-0.0737649);
}

double NNfunction_sb_cLsR::synapse0x1dc0040() {
   return (neuron0x1daad20()*0.0865648);
}

double NNfunction_sb_cLsR::synapse0x1dc0080() {
   return (neuron0x1dab060()*0.00640912);
}

double NNfunction_sb_cLsR::synapse0x1dc0400() {
   return (neuron0x1da64a0()*-0.778288);
}

double NNfunction_sb_cLsR::synapse0x1dc0440() {
   return (neuron0x1da67e0()*0.421015);
}

double NNfunction_sb_cLsR::synapse0x1dc0480() {
   return (neuron0x1da6b20()*0.117612);
}

double NNfunction_sb_cLsR::synapse0x1dc04c0() {
   return (neuron0x1da6e60()*-1.65863);
}

double NNfunction_sb_cLsR::synapse0x1dc0500() {
   return (neuron0x1da71a0()*0.084802);
}

double NNfunction_sb_cLsR::synapse0x1dc0540() {
   return (neuron0x1da74e0()*0.159502);
}

double NNfunction_sb_cLsR::synapse0x1dc0580() {
   return (neuron0x1da7820()*0.0873197);
}

double NNfunction_sb_cLsR::synapse0x1dc05c0() {
   return (neuron0x1da7b60()*-0.516688);
}

double NNfunction_sb_cLsR::synapse0x1dc0600() {
   return (neuron0x1da7ea0()*-0.37236);
}

double NNfunction_sb_cLsR::synapse0x1dc0640() {
   return (neuron0x1da81e0()*-0.0589283);
}

double NNfunction_sb_cLsR::synapse0x1dc0680() {
   return (neuron0x1da8520()*-0.644935);
}

double NNfunction_sb_cLsR::synapse0x1dc06c0() {
   return (neuron0x1da8860()*-0.285031);
}

double NNfunction_sb_cLsR::synapse0x1dc0700() {
   return (neuron0x1da8ba0()*-0.835839);
}

double NNfunction_sb_cLsR::synapse0x1dc0740() {
   return (neuron0x1da8ee0()*-0.639848);
}

double NNfunction_sb_cLsR::synapse0x1dc0780() {
   return (neuron0x1da9220()*0.200856);
}

double NNfunction_sb_cLsR::synapse0x1dc07c0() {
   return (neuron0x1da9560()*0.109577);
}

double NNfunction_sb_cLsR::synapse0x1dc0250() {
   return (neuron0x1da98a0()*-0.0563229);
}

double NNfunction_sb_cLsR::synapse0x1dc0290() {
   return (neuron0x1da9e00()*-0.108358);
}

double NNfunction_sb_cLsR::synapse0x1dc0910() {
   return (neuron0x1daa020()*0.326329);
}

double NNfunction_sb_cLsR::synapse0x1dc0950() {
   return (neuron0x1daa360()*0.50202);
}

double NNfunction_sb_cLsR::synapse0x1dc0990() {
   return (neuron0x1daa6a0()*-0.209541);
}

double NNfunction_sb_cLsR::synapse0x1dc09d0() {
   return (neuron0x1daa9e0()*0.306298);
}

double NNfunction_sb_cLsR::synapse0x1dc0a10() {
   return (neuron0x1daad20()*-0.00503824);
}

double NNfunction_sb_cLsR::synapse0x1dc0a50() {
   return (neuron0x1dab060()*-0.230521);
}

double NNfunction_sb_cLsR::synapse0x1dc0dd0() {
   return (neuron0x1da64a0()*-0.00180928);
}

double NNfunction_sb_cLsR::synapse0x1db53a0() {
   return (neuron0x1da67e0()*0.0681053);
}

double NNfunction_sb_cLsR::synapse0x1db53e0() {
   return (neuron0x1da6b20()*0.025037);
}

double NNfunction_sb_cLsR::synapse0x1db5420() {
   return (neuron0x1da6e60()*0.943386);
}

double NNfunction_sb_cLsR::synapse0x1db5670() {
   return (neuron0x1da71a0()*0.0884033);
}

double NNfunction_sb_cLsR::synapse0x1db56b0() {
   return (neuron0x1da74e0()*-0.0318639);
}

double NNfunction_sb_cLsR::synapse0x1db56f0() {
   return (neuron0x1da7820()*0.0270382);
}

double NNfunction_sb_cLsR::synapse0x1db5940() {
   return (neuron0x1da7b60()*-0.0705068);
}

double NNfunction_sb_cLsR::synapse0x1db5980() {
   return (neuron0x1da7ea0()*-0.0665938);
}

double NNfunction_sb_cLsR::synapse0x1db5bd0() {
   return (neuron0x1da81e0()*0.106369);
}

double NNfunction_sb_cLsR::synapse0x1db5c10() {
   return (neuron0x1da8520()*0.0699906);
}

double NNfunction_sb_cLsR::synapse0x1db5c50() {
   return (neuron0x1da8860()*-0.0770357);
}

double NNfunction_sb_cLsR::synapse0x1db5ea0() {
   return (neuron0x1da8ba0()*-0.746323);
}

double NNfunction_sb_cLsR::synapse0x1db5ee0() {
   return (neuron0x1da8ee0()*-0.0584579);
}

double NNfunction_sb_cLsR::synapse0x1db6130() {
   return (neuron0x1da9220()*0.0223121);
}

double NNfunction_sb_cLsR::synapse0x1db6170() {
   return (neuron0x1da9560()*-0.120109);
}

double NNfunction_sb_cLsR::synapse0x1dc0c20() {
   return (neuron0x1da98a0()*0.0472416);
}

double NNfunction_sb_cLsR::synapse0x1dc0c60() {
   return (neuron0x1da9e00()*0.0853801);
}

double NNfunction_sb_cLsR::synapse0x1db62c0() {
   return (neuron0x1daa020()*-0.468074);
}

double NNfunction_sb_cLsR::synapse0x1db67d0() {
   return (neuron0x1daa360()*-0.0239045);
}

double NNfunction_sb_cLsR::synapse0x1db6810() {
   return (neuron0x1daa6a0()*0.036946);
}

double NNfunction_sb_cLsR::synapse0x1db6850() {
   return (neuron0x1daa9e0()*0.0726039);
}

double NNfunction_sb_cLsR::synapse0x1db6aa0() {
   return (neuron0x1daad20()*0.0657753);
}

double NNfunction_sb_cLsR::synapse0x1db6ae0() {
   return (neuron0x1dab060()*0.0539416);
}

double NNfunction_sb_cLsR::synapse0x1db6390() {
   return (neuron0x1da64a0()*-0.0174088);
}

double NNfunction_sb_cLsR::synapse0x1db63d0() {
   return (neuron0x1da67e0()*0.0135946);
}

double NNfunction_sb_cLsR::synapse0x1db6410() {
   return (neuron0x1da6b20()*0.0567189);
}

double NNfunction_sb_cLsR::synapse0x1db6450() {
   return (neuron0x1da6e60()*0.620977);
}

double NNfunction_sb_cLsR::synapse0x1db6dd0() {
   return (neuron0x1da71a0()*0.00166417);
}

double NNfunction_sb_cLsR::synapse0x1dc3120() {
   return (neuron0x1da74e0()*-0.0149661);
}

double NNfunction_sb_cLsR::synapse0x1dc3160() {
   return (neuron0x1da7820()*-0.0726125);
}

double NNfunction_sb_cLsR::synapse0x1dc31a0() {
   return (neuron0x1da7b60()*-0.0117587);
}

double NNfunction_sb_cLsR::synapse0x1dc31e0() {
   return (neuron0x1da7ea0()*-0.00512911);
}

double NNfunction_sb_cLsR::synapse0x1dc3220() {
   return (neuron0x1da81e0()*0.0272823);
}

double NNfunction_sb_cLsR::synapse0x1dc3260() {
   return (neuron0x1da8520()*0.0303662);
}

double NNfunction_sb_cLsR::synapse0x1dc32a0() {
   return (neuron0x1da8860()*-0.00840489);
}

double NNfunction_sb_cLsR::synapse0x1dc32e0() {
   return (neuron0x1da8ba0()*-0.39669);
}

double NNfunction_sb_cLsR::synapse0x1dc3320() {
   return (neuron0x1da8ee0()*0.00157421);
}

double NNfunction_sb_cLsR::synapse0x1dc3360() {
   return (neuron0x1da9220()*0.0306845);
}

double NNfunction_sb_cLsR::synapse0x1dc33a0() {
   return (neuron0x1da9560()*-0.0193621);
}

double NNfunction_sb_cLsR::synapse0x1db6cb0() {
   return (neuron0x1da98a0()*-0.000109669);
}

double NNfunction_sb_cLsR::synapse0x1db6cf0() {
   return (neuron0x1da9e00()*0.0124768);
}

double NNfunction_sb_cLsR::synapse0x1dc34f0() {
   return (neuron0x1daa020()*1.56326);
}

double NNfunction_sb_cLsR::synapse0x1dc3530() {
   return (neuron0x1daa360()*-0.000974241);
}

double NNfunction_sb_cLsR::synapse0x1dc3570() {
   return (neuron0x1daa6a0()*-0.00858541);
}

double NNfunction_sb_cLsR::synapse0x1dc35b0() {
   return (neuron0x1daa9e0()*0.0323683);
}

double NNfunction_sb_cLsR::synapse0x1dc35f0() {
   return (neuron0x1daad20()*-0.0136353);
}

double NNfunction_sb_cLsR::synapse0x1dc3630() {
   return (neuron0x1dab060()*0.0048926);
}

double NNfunction_sb_cLsR::synapse0x1dc39b0() {
   return (neuron0x1da64a0()*-0.0454066);
}

double NNfunction_sb_cLsR::synapse0x1dc39f0() {
   return (neuron0x1da67e0()*-0.077569);
}

double NNfunction_sb_cLsR::synapse0x1dc3a30() {
   return (neuron0x1da6b20()*-1.54215);
}

double NNfunction_sb_cLsR::synapse0x1dc3a70() {
   return (neuron0x1da6e60()*0.053408);
}

double NNfunction_sb_cLsR::synapse0x1dc3ab0() {
   return (neuron0x1da71a0()*0.00748367);
}

double NNfunction_sb_cLsR::synapse0x1dc3af0() {
   return (neuron0x1da74e0()*0.043674);
}

double NNfunction_sb_cLsR::synapse0x1dc3b30() {
   return (neuron0x1da7820()*0.0277184);
}

double NNfunction_sb_cLsR::synapse0x1dc3b70() {
   return (neuron0x1da7b60()*0.0336648);
}

double NNfunction_sb_cLsR::synapse0x1dc3bb0() {
   return (neuron0x1da7ea0()*-0.0198721);
}

double NNfunction_sb_cLsR::synapse0x1dc3bf0() {
   return (neuron0x1da81e0()*0.0138219);
}

double NNfunction_sb_cLsR::synapse0x1dc3c30() {
   return (neuron0x1da8520()*-0.0770299);
}

double NNfunction_sb_cLsR::synapse0x1dc3c70() {
   return (neuron0x1da8860()*-0.0511292);
}

double NNfunction_sb_cLsR::synapse0x1dc3cb0() {
   return (neuron0x1da8ba0()*0.316878);
}

double NNfunction_sb_cLsR::synapse0x1dc3cf0() {
   return (neuron0x1da8ee0()*-0.030019);
}

double NNfunction_sb_cLsR::synapse0x1dc3d30() {
   return (neuron0x1da9220()*-0.0751028);
}

double NNfunction_sb_cLsR::synapse0x1dc3d70() {
   return (neuron0x1da9560()*0.054976);
}

double NNfunction_sb_cLsR::synapse0x1dc3800() {
   return (neuron0x1da98a0()*-0.00506757);
}

double NNfunction_sb_cLsR::synapse0x1dc3840() {
   return (neuron0x1da9e00()*0.0322887);
}

double NNfunction_sb_cLsR::synapse0x1dc3ec0() {
   return (neuron0x1daa020()*-0.407393);
}

double NNfunction_sb_cLsR::synapse0x1dc3f00() {
   return (neuron0x1daa360()*-0.0427525);
}

double NNfunction_sb_cLsR::synapse0x1dc3f40() {
   return (neuron0x1daa6a0()*-0.0195218);
}

double NNfunction_sb_cLsR::synapse0x1dc3f80() {
   return (neuron0x1daa9e0()*-0.00301128);
}

double NNfunction_sb_cLsR::synapse0x1dc3fc0() {
   return (neuron0x1daad20()*-0.00459096);
}

double NNfunction_sb_cLsR::synapse0x1dc4000() {
   return (neuron0x1dab060()*0.0138107);
}

double NNfunction_sb_cLsR::synapse0x1dc4380() {
   return (neuron0x1da64a0()*0.125263);
}

double NNfunction_sb_cLsR::synapse0x1dc43c0() {
   return (neuron0x1da67e0()*0.176409);
}

double NNfunction_sb_cLsR::synapse0x1dc4400() {
   return (neuron0x1da6b20()*-0.441044);
}

double NNfunction_sb_cLsR::synapse0x1dc4440() {
   return (neuron0x1da6e60()*-0.482601);
}

double NNfunction_sb_cLsR::synapse0x1dc4480() {
   return (neuron0x1da71a0()*0.551307);
}

double NNfunction_sb_cLsR::synapse0x1dc44c0() {
   return (neuron0x1da74e0()*-0.00166513);
}

double NNfunction_sb_cLsR::synapse0x1dc4500() {
   return (neuron0x1da7820()*0.0400862);
}

double NNfunction_sb_cLsR::synapse0x1dc4540() {
   return (neuron0x1da7b60()*0.0138787);
}

double NNfunction_sb_cLsR::synapse0x1dc4580() {
   return (neuron0x1da7ea0()*-0.341563);
}

double NNfunction_sb_cLsR::synapse0x1dc45c0() {
   return (neuron0x1da81e0()*1.41802);
}

double NNfunction_sb_cLsR::synapse0x1dc4600() {
   return (neuron0x1da8520()*0.114225);
}

double NNfunction_sb_cLsR::synapse0x1dc4640() {
   return (neuron0x1da8860()*0.19257);
}

double NNfunction_sb_cLsR::synapse0x1dc4680() {
   return (neuron0x1da8ba0()*-0.274263);
}

double NNfunction_sb_cLsR::synapse0x1dc46c0() {
   return (neuron0x1da8ee0()*0.152255);
}

double NNfunction_sb_cLsR::synapse0x1dc4700() {
   return (neuron0x1da9220()*-0.0307047);
}

double NNfunction_sb_cLsR::synapse0x1dc4740() {
   return (neuron0x1da9560()*0.243909);
}

double NNfunction_sb_cLsR::synapse0x1dc41d0() {
   return (neuron0x1da98a0()*0.240738);
}

double NNfunction_sb_cLsR::synapse0x1dc4210() {
   return (neuron0x1da9e00()*-0.292956);
}

double NNfunction_sb_cLsR::synapse0x1dc4890() {
   return (neuron0x1daa020()*-0.478219);
}

double NNfunction_sb_cLsR::synapse0x1dc48d0() {
   return (neuron0x1daa360()*0.0511141);
}

double NNfunction_sb_cLsR::synapse0x1dc4910() {
   return (neuron0x1daa6a0()*-0.0108218);
}

double NNfunction_sb_cLsR::synapse0x1dc4950() {
   return (neuron0x1daa9e0()*-0.134653);
}

double NNfunction_sb_cLsR::synapse0x1dc4990() {
   return (neuron0x1daad20()*0.173951);
}

double NNfunction_sb_cLsR::synapse0x1dc49d0() {
   return (neuron0x1dab060()*-0.125797);
}

double NNfunction_sb_cLsR::synapse0x1dc4d50() {
   return (neuron0x1da64a0()*0.114511);
}

double NNfunction_sb_cLsR::synapse0x1dc4d90() {
   return (neuron0x1da67e0()*-0.708845);
}

double NNfunction_sb_cLsR::synapse0x1dc4dd0() {
   return (neuron0x1da6b20()*-0.387239);
}

double NNfunction_sb_cLsR::synapse0x1dc4e10() {
   return (neuron0x1da6e60()*0.34787);
}

double NNfunction_sb_cLsR::synapse0x1dc4e50() {
   return (neuron0x1da71a0()*0.222196);
}

double NNfunction_sb_cLsR::synapse0x1dc4e90() {
   return (neuron0x1da74e0()*-0.3381);
}

double NNfunction_sb_cLsR::synapse0x1dc4ed0() {
   return (neuron0x1da7820()*0.268294);
}

double NNfunction_sb_cLsR::synapse0x1dc4f10() {
   return (neuron0x1da7b60()*-0.250838);
}

double NNfunction_sb_cLsR::synapse0x1dc4f50() {
   return (neuron0x1da7ea0()*-0.545865);
}

double NNfunction_sb_cLsR::synapse0x1dc4f90() {
   return (neuron0x1da81e0()*0.230109);
}

double NNfunction_sb_cLsR::synapse0x1dc4fd0() {
   return (neuron0x1da8520()*-0.357003);
}

double NNfunction_sb_cLsR::synapse0x1dc5010() {
   return (neuron0x1da8860()*-0.380628);
}

double NNfunction_sb_cLsR::synapse0x1dc5050() {
   return (neuron0x1da8ba0()*-0.299753);
}

double NNfunction_sb_cLsR::synapse0x1dc5090() {
   return (neuron0x1da8ee0()*0.591588);
}

double NNfunction_sb_cLsR::synapse0x1dc50d0() {
   return (neuron0x1da9220()*-0.607625);
}

double NNfunction_sb_cLsR::synapse0x1dc5110() {
   return (neuron0x1da9560()*-0.271359);
}

double NNfunction_sb_cLsR::synapse0x1dc4ba0() {
   return (neuron0x1da98a0()*-0.379877);
}

double NNfunction_sb_cLsR::synapse0x1dc4be0() {
   return (neuron0x1da9e00()*-0.413105);
}

double NNfunction_sb_cLsR::synapse0x1dc5260() {
   return (neuron0x1daa020()*0.0337594);
}

double NNfunction_sb_cLsR::synapse0x1dc52a0() {
   return (neuron0x1daa360()*0.115298);
}

double NNfunction_sb_cLsR::synapse0x1dc52e0() {
   return (neuron0x1daa6a0()*0.0473685);
}

double NNfunction_sb_cLsR::synapse0x1dc5320() {
   return (neuron0x1daa9e0()*-0.0297721);
}

double NNfunction_sb_cLsR::synapse0x1dc5360() {
   return (neuron0x1daad20()*0.183624);
}

double NNfunction_sb_cLsR::synapse0x1dc53a0() {
   return (neuron0x1dab060()*-0.0210279);
}

double NNfunction_sb_cLsR::synapse0x1dc5720() {
   return (neuron0x1da64a0()*-0.255267);
}

double NNfunction_sb_cLsR::synapse0x1dc5760() {
   return (neuron0x1da67e0()*0.417433);
}

double NNfunction_sb_cLsR::synapse0x1dc57a0() {
   return (neuron0x1da6b20()*-0.331328);
}

double NNfunction_sb_cLsR::synapse0x1dc57e0() {
   return (neuron0x1da6e60()*-0.31252);
}

double NNfunction_sb_cLsR::synapse0x1dc5820() {
   return (neuron0x1da71a0()*-0.160752);
}

double NNfunction_sb_cLsR::synapse0x1dc5860() {
   return (neuron0x1da74e0()*0.0962382);
}

double NNfunction_sb_cLsR::synapse0x1dc58a0() {
   return (neuron0x1da7820()*-0.247772);
}

double NNfunction_sb_cLsR::synapse0x1dc58e0() {
   return (neuron0x1da7b60()*0.0852765);
}

double NNfunction_sb_cLsR::synapse0x1dc5920() {
   return (neuron0x1da7ea0()*-0.468743);
}

double NNfunction_sb_cLsR::synapse0x1dc5960() {
   return (neuron0x1da81e0()*0.125817);
}

double NNfunction_sb_cLsR::synapse0x1dc59a0() {
   return (neuron0x1da8520()*-0.0531427);
}

double NNfunction_sb_cLsR::synapse0x1dc59e0() {
   return (neuron0x1da8860()*-0.00834251);
}

double NNfunction_sb_cLsR::synapse0x1dc5a20() {
   return (neuron0x1da8ba0()*0.726825);
}

double NNfunction_sb_cLsR::synapse0x1dc5a60() {
   return (neuron0x1da8ee0()*-0.0580569);
}

double NNfunction_sb_cLsR::synapse0x1dc5aa0() {
   return (neuron0x1da9220()*0.0620229);
}

double NNfunction_sb_cLsR::synapse0x1dc5ae0() {
   return (neuron0x1da9560()*0.0831532);
}

double NNfunction_sb_cLsR::synapse0x1dc5570() {
   return (neuron0x1da98a0()*1.0036);
}

double NNfunction_sb_cLsR::synapse0x1dc55b0() {
   return (neuron0x1da9e00()*0.624919);
}

double NNfunction_sb_cLsR::synapse0x1dc5c30() {
   return (neuron0x1daa020()*0.48988);
}

double NNfunction_sb_cLsR::synapse0x1dc5c70() {
   return (neuron0x1daa360()*0.311445);
}

double NNfunction_sb_cLsR::synapse0x1dc5cb0() {
   return (neuron0x1daa6a0()*0.0273405);
}

double NNfunction_sb_cLsR::synapse0x1dc5cf0() {
   return (neuron0x1daa9e0()*-0.067833);
}

double NNfunction_sb_cLsR::synapse0x1dc5d30() {
   return (neuron0x1daad20()*0.243622);
}

double NNfunction_sb_cLsR::synapse0x1dc5d70() {
   return (neuron0x1dab060()*0.304884);
}

double NNfunction_sb_cLsR::synapse0x1dc60f0() {
   return (neuron0x1da64a0()*-0.181525);
}

double NNfunction_sb_cLsR::synapse0x1dc6130() {
   return (neuron0x1da67e0()*-0.171184);
}

double NNfunction_sb_cLsR::synapse0x1dc6170() {
   return (neuron0x1da6b20()*0.198392);
}

double NNfunction_sb_cLsR::synapse0x1dc61b0() {
   return (neuron0x1da6e60()*-0.54266);
}

double NNfunction_sb_cLsR::synapse0x1dc61f0() {
   return (neuron0x1da71a0()*-0.00244832);
}

double NNfunction_sb_cLsR::synapse0x1dc6230() {
   return (neuron0x1da74e0()*0.199607);
}

double NNfunction_sb_cLsR::synapse0x1dc6270() {
   return (neuron0x1da7820()*-0.20256);
}

double NNfunction_sb_cLsR::synapse0x1dc62b0() {
   return (neuron0x1da7b60()*0.618781);
}

double NNfunction_sb_cLsR::synapse0x1dc62f0() {
   return (neuron0x1da7ea0()*-0.0328545);
}

double NNfunction_sb_cLsR::synapse0x1dc6330() {
   return (neuron0x1da81e0()*-0.24284);
}

double NNfunction_sb_cLsR::synapse0x1dc6370() {
   return (neuron0x1da8520()*-0.0972731);
}

double NNfunction_sb_cLsR::synapse0x1dc63b0() {
   return (neuron0x1da8860()*-0.0482051);
}

double NNfunction_sb_cLsR::synapse0x1dc63f0() {
   return (neuron0x1da8ba0()*0.0593067);
}

double NNfunction_sb_cLsR::synapse0x1dc6430() {
   return (neuron0x1da8ee0()*-0.102259);
}

double NNfunction_sb_cLsR::synapse0x1dc6470() {
   return (neuron0x1da9220()*-0.270529);
}

double NNfunction_sb_cLsR::synapse0x1dc64b0() {
   return (neuron0x1da9560()*0.0413824);
}

double NNfunction_sb_cLsR::synapse0x1dc5f40() {
   return (neuron0x1da98a0()*-0.262281);
}

double NNfunction_sb_cLsR::synapse0x1dc5f80() {
   return (neuron0x1da9e00()*0.0257585);
}

double NNfunction_sb_cLsR::synapse0x1dc6600() {
   return (neuron0x1daa020()*-0.0844576);
}

double NNfunction_sb_cLsR::synapse0x1dc6640() {
   return (neuron0x1daa360()*0.232656);
}

double NNfunction_sb_cLsR::synapse0x1dc6680() {
   return (neuron0x1daa6a0()*-0.09074);
}

double NNfunction_sb_cLsR::synapse0x1dc66c0() {
   return (neuron0x1daa9e0()*0.103242);
}

double NNfunction_sb_cLsR::synapse0x1dc6700() {
   return (neuron0x1daad20()*-0.2043);
}

double NNfunction_sb_cLsR::synapse0x1dc6740() {
   return (neuron0x1dab060()*0.0684697);
}

double NNfunction_sb_cLsR::synapse0x1dc6ac0() {
   return (neuron0x1da64a0()*-0.393797);
}

double NNfunction_sb_cLsR::synapse0x1dc6b00() {
   return (neuron0x1da67e0()*-0.201164);
}

double NNfunction_sb_cLsR::synapse0x1dc6b40() {
   return (neuron0x1da6b20()*0.241589);
}

double NNfunction_sb_cLsR::synapse0x1dc6b80() {
   return (neuron0x1da6e60()*0.958337);
}

double NNfunction_sb_cLsR::synapse0x1dc6bc0() {
   return (neuron0x1da71a0()*-0.0710224);
}

double NNfunction_sb_cLsR::synapse0x1dc6c00() {
   return (neuron0x1da74e0()*0.546946);
}

double NNfunction_sb_cLsR::synapse0x1dc6c40() {
   return (neuron0x1da7820()*0.10922);
}

double NNfunction_sb_cLsR::synapse0x1dc6c80() {
   return (neuron0x1da7b60()*-0.483031);
}

double NNfunction_sb_cLsR::synapse0x1dc6cc0() {
   return (neuron0x1da7ea0()*0.399203);
}

double NNfunction_sb_cLsR::synapse0x1dc6d00() {
   return (neuron0x1da81e0()*0.284556);
}

double NNfunction_sb_cLsR::synapse0x1dc6d40() {
   return (neuron0x1da8520()*-0.363543);
}

double NNfunction_sb_cLsR::synapse0x1dc6d80() {
   return (neuron0x1da8860()*0.143871);
}

double NNfunction_sb_cLsR::synapse0x1dc6dc0() {
   return (neuron0x1da8ba0()*0.81549);
}

double NNfunction_sb_cLsR::synapse0x1dc6e00() {
   return (neuron0x1da8ee0()*-0.2727);
}

double NNfunction_sb_cLsR::synapse0x1dc6e40() {
   return (neuron0x1da9220()*0.493042);
}

double NNfunction_sb_cLsR::synapse0x1dc6e80() {
   return (neuron0x1da9560()*0.524188);
}

double NNfunction_sb_cLsR::synapse0x1dc6910() {
   return (neuron0x1da98a0()*-0.344627);
}

double NNfunction_sb_cLsR::synapse0x1dc6950() {
   return (neuron0x1da9e00()*-0.115878);
}

double NNfunction_sb_cLsR::synapse0x1dc6fd0() {
   return (neuron0x1daa020()*-0.349491);
}

double NNfunction_sb_cLsR::synapse0x1dc7010() {
   return (neuron0x1daa360()*0.360057);
}

double NNfunction_sb_cLsR::synapse0x1dc7050() {
   return (neuron0x1daa6a0()*0.254046);
}

double NNfunction_sb_cLsR::synapse0x1dc7090() {
   return (neuron0x1daa9e0()*-0.116314);
}

double NNfunction_sb_cLsR::synapse0x1dc70d0() {
   return (neuron0x1daad20()*-0.0666542);
}

double NNfunction_sb_cLsR::synapse0x1dc7110() {
   return (neuron0x1dab060()*-0.308431);
}

double NNfunction_sb_cLsR::synapse0x1dc7490() {
   return (neuron0x1da64a0()*0.0395037);
}

double NNfunction_sb_cLsR::synapse0x1dc74d0() {
   return (neuron0x1da67e0()*0.00852019);
}

double NNfunction_sb_cLsR::synapse0x1dc7510() {
   return (neuron0x1da6b20()*0.216218);
}

double NNfunction_sb_cLsR::synapse0x1dc7550() {
   return (neuron0x1da6e60()*-0.615154);
}

double NNfunction_sb_cLsR::synapse0x1dc7590() {
   return (neuron0x1da71a0()*-0.0425427);
}

double NNfunction_sb_cLsR::synapse0x1dc75d0() {
   return (neuron0x1da74e0()*-0.0926086);
}

double NNfunction_sb_cLsR::synapse0x1dc7610() {
   return (neuron0x1da7820()*-0.155326);
}

double NNfunction_sb_cLsR::synapse0x1dc7650() {
   return (neuron0x1da7b60()*0.040362);
}

double NNfunction_sb_cLsR::synapse0x1dc7690() {
   return (neuron0x1da7ea0()*0.0119614);
}

double NNfunction_sb_cLsR::synapse0x1dc76d0() {
   return (neuron0x1da81e0()*0.0651202);
}

double NNfunction_sb_cLsR::synapse0x1dc7710() {
   return (neuron0x1da8520()*0.144743);
}

double NNfunction_sb_cLsR::synapse0x1dc7750() {
   return (neuron0x1da8860()*-0.0344465);
}

double NNfunction_sb_cLsR::synapse0x1dc7790() {
   return (neuron0x1da8ba0()*0.947065);
}

double NNfunction_sb_cLsR::synapse0x1dc77d0() {
   return (neuron0x1da8ee0()*0.0952619);
}

double NNfunction_sb_cLsR::synapse0x1dc7810() {
   return (neuron0x1da9220()*0.0979202);
}

double NNfunction_sb_cLsR::synapse0x1dc7850() {
   return (neuron0x1da9560()*-0.00189733);
}

double NNfunction_sb_cLsR::synapse0x1dc72e0() {
   return (neuron0x1da98a0()*0.0555501);
}

double NNfunction_sb_cLsR::synapse0x1dc7320() {
   return (neuron0x1da9e00()*-0.0505897);
}

double NNfunction_sb_cLsR::synapse0x1dc79a0() {
   return (neuron0x1daa020()*-0.112283);
}

double NNfunction_sb_cLsR::synapse0x1dc79e0() {
   return (neuron0x1daa360()*-0.167741);
}

double NNfunction_sb_cLsR::synapse0x1dc7a20() {
   return (neuron0x1daa6a0()*0.00160241);
}

double NNfunction_sb_cLsR::synapse0x1dc7a60() {
   return (neuron0x1daa9e0()*0.0608986);
}

double NNfunction_sb_cLsR::synapse0x1dc7aa0() {
   return (neuron0x1daad20()*0.0122727);
}

double NNfunction_sb_cLsR::synapse0x1dc7ae0() {
   return (neuron0x1dab060()*0.0198087);
}

double NNfunction_sb_cLsR::synapse0x1db0590() {
   return (neuron0x1da64a0()*0.0485888);
}

double NNfunction_sb_cLsR::synapse0x1db05d0() {
   return (neuron0x1da67e0()*0.00161715);
}

double NNfunction_sb_cLsR::synapse0x1db0610() {
   return (neuron0x1da6b20()*-0.0629872);
}

double NNfunction_sb_cLsR::synapse0x1db0650() {
   return (neuron0x1da6e60()*-3.06149);
}

double NNfunction_sb_cLsR::synapse0x1db0690() {
   return (neuron0x1da71a0()*0.0412307);
}

double NNfunction_sb_cLsR::synapse0x1db06d0() {
   return (neuron0x1da74e0()*-0.0500007);
}

double NNfunction_sb_cLsR::synapse0x1db0710() {
   return (neuron0x1da7820()*0.0478591);
}

double NNfunction_sb_cLsR::synapse0x1db0750() {
   return (neuron0x1da7b60()*-0.0286792);
}

double NNfunction_sb_cLsR::synapse0x1dc8270() {
   return (neuron0x1da7ea0()*-0.001059);
}

double NNfunction_sb_cLsR::synapse0x1dc82b0() {
   return (neuron0x1da81e0()*0.0188127);
}

double NNfunction_sb_cLsR::synapse0x1dc82f0() {
   return (neuron0x1da8520()*0.00522463);
}

double NNfunction_sb_cLsR::synapse0x1dc8330() {
   return (neuron0x1da8860()*0.00325622);
}

double NNfunction_sb_cLsR::synapse0x1dc8370() {
   return (neuron0x1da8ba0()*0.764821);
}

double NNfunction_sb_cLsR::synapse0x1dc83b0() {
   return (neuron0x1da8ee0()*-0.000799549);
}

double NNfunction_sb_cLsR::synapse0x1dc83f0() {
   return (neuron0x1da9220()*0.00688878);
}

double NNfunction_sb_cLsR::synapse0x1dc8430() {
   return (neuron0x1da9560()*-0.0570887);
}

double NNfunction_sb_cLsR::synapse0x1dc7cb0() {
   return (neuron0x1da98a0()*0.00355443);
}

double NNfunction_sb_cLsR::synapse0x1dc7cf0() {
   return (neuron0x1da9e00()*0.0761578);
}

double NNfunction_sb_cLsR::synapse0x1dc8580() {
   return (neuron0x1daa020()*0.721242);
}

double NNfunction_sb_cLsR::synapse0x1dc85c0() {
   return (neuron0x1daa360()*-0.0242012);
}

double NNfunction_sb_cLsR::synapse0x1dc8600() {
   return (neuron0x1daa6a0()*-0.0317835);
}

double NNfunction_sb_cLsR::synapse0x1dc8640() {
   return (neuron0x1daa9e0()*-0.0500802);
}

double NNfunction_sb_cLsR::synapse0x1dc8680() {
   return (neuron0x1daad20()*-0.00628252);
}

double NNfunction_sb_cLsR::synapse0x1dc86c0() {
   return (neuron0x1dab060()*-0.0226367);
}

double NNfunction_sb_cLsR::synapse0x1dc8a40() {
   return (neuron0x1da64a0()*0.0496311);
}

double NNfunction_sb_cLsR::synapse0x1dc8a80() {
   return (neuron0x1da67e0()*-0.111656);
}

double NNfunction_sb_cLsR::synapse0x1dc8ac0() {
   return (neuron0x1da6b20()*0.0214378);
}

double NNfunction_sb_cLsR::synapse0x1dc8b00() {
   return (neuron0x1da6e60()*0.27776);
}

double NNfunction_sb_cLsR::synapse0x1dc8b40() {
   return (neuron0x1da71a0()*0.341202);
}

double NNfunction_sb_cLsR::synapse0x1dc8b80() {
   return (neuron0x1da74e0()*0.144841);
}

double NNfunction_sb_cLsR::synapse0x1dc8bc0() {
   return (neuron0x1da7820()*0.205389);
}

double NNfunction_sb_cLsR::synapse0x1dc8c00() {
   return (neuron0x1da7b60()*0.0469612);
}

double NNfunction_sb_cLsR::synapse0x1dc8c40() {
   return (neuron0x1da7ea0()*0.957114);
}

double NNfunction_sb_cLsR::synapse0x1dc8c80() {
   return (neuron0x1da81e0()*0.390904);
}

double NNfunction_sb_cLsR::synapse0x1dc8cc0() {
   return (neuron0x1da8520()*-0.366929);
}

double NNfunction_sb_cLsR::synapse0x1dc8d00() {
   return (neuron0x1da8860()*-0.365618);
}

double NNfunction_sb_cLsR::synapse0x1dc8d40() {
   return (neuron0x1da8ba0()*-0.167934);
}

double NNfunction_sb_cLsR::synapse0x1dc8d80() {
   return (neuron0x1da8ee0()*-0.0663452);
}

double NNfunction_sb_cLsR::synapse0x1dc8dc0() {
   return (neuron0x1da9220()*0.168454);
}

double NNfunction_sb_cLsR::synapse0x1dc8e00() {
   return (neuron0x1da9560()*0.267249);
}

double NNfunction_sb_cLsR::synapse0x1dc8890() {
   return (neuron0x1da98a0()*-0.0498218);
}

double NNfunction_sb_cLsR::synapse0x1dc88d0() {
   return (neuron0x1da9e00()*-0.231334);
}

double NNfunction_sb_cLsR::synapse0x1dc8f50() {
   return (neuron0x1daa020()*-0.174423);
}

double NNfunction_sb_cLsR::synapse0x1dc8f90() {
   return (neuron0x1daa360()*-0.113376);
}

double NNfunction_sb_cLsR::synapse0x1dc8fd0() {
   return (neuron0x1daa6a0()*-0.0242566);
}

double NNfunction_sb_cLsR::synapse0x1dc9010() {
   return (neuron0x1daa9e0()*0.013444);
}

double NNfunction_sb_cLsR::synapse0x1dc9050() {
   return (neuron0x1daad20()*-0.0685932);
}

double NNfunction_sb_cLsR::synapse0x1dc9090() {
   return (neuron0x1dab060()*0.0383793);
}

double NNfunction_sb_cLsR::synapse0x1dc9410() {
   return (neuron0x1da64a0()*0.0323212);
}

double NNfunction_sb_cLsR::synapse0x1dc9450() {
   return (neuron0x1da67e0()*-0.0908023);
}

double NNfunction_sb_cLsR::synapse0x1dc9490() {
   return (neuron0x1da6b20()*-0.146668);
}

double NNfunction_sb_cLsR::synapse0x1dc94d0() {
   return (neuron0x1da6e60()*-0.218551);
}

double NNfunction_sb_cLsR::synapse0x1dc9510() {
   return (neuron0x1da71a0()*0.908592);
}

double NNfunction_sb_cLsR::synapse0x1dc9550() {
   return (neuron0x1da74e0()*0.544957);
}

double NNfunction_sb_cLsR::synapse0x1dc9590() {
   return (neuron0x1da7820()*0.0151259);
}

double NNfunction_sb_cLsR::synapse0x1dc95d0() {
   return (neuron0x1da7b60()*0.0699789);
}

double NNfunction_sb_cLsR::synapse0x1dc9610() {
   return (neuron0x1da7ea0()*0.621272);
}

double NNfunction_sb_cLsR::synapse0x1dc9650() {
   return (neuron0x1da81e0()*0.574685);
}

double NNfunction_sb_cLsR::synapse0x1dc9690() {
   return (neuron0x1da8520()*-0.182598);
}

double NNfunction_sb_cLsR::synapse0x1dc96d0() {
   return (neuron0x1da8860()*-0.143999);
}

double NNfunction_sb_cLsR::synapse0x1dc9710() {
   return (neuron0x1da8ba0()*-0.0181074);
}

double NNfunction_sb_cLsR::synapse0x1dc9750() {
   return (neuron0x1da8ee0()*-0.0891566);
}

double NNfunction_sb_cLsR::synapse0x1dc9790() {
   return (neuron0x1da9220()*0.114068);
}

double NNfunction_sb_cLsR::synapse0x1dc97d0() {
   return (neuron0x1da9560()*0.568345);
}

double NNfunction_sb_cLsR::synapse0x1dc9260() {
   return (neuron0x1da98a0()*0.217433);
}

double NNfunction_sb_cLsR::synapse0x1dc92a0() {
   return (neuron0x1da9e00()*0.0480299);
}

double NNfunction_sb_cLsR::synapse0x1db9dd0() {
   return (neuron0x1daa020()*0.0010992);
}

double NNfunction_sb_cLsR::synapse0x1db9e10() {
   return (neuron0x1daa360()*-0.0842254);
}

double NNfunction_sb_cLsR::synapse0x1db9e50() {
   return (neuron0x1daa6a0()*-0.064953);
}

double NNfunction_sb_cLsR::synapse0x1db9e90() {
   return (neuron0x1daa9e0()*0.0173928);
}

double NNfunction_sb_cLsR::synapse0x1db9ed0() {
   return (neuron0x1daad20()*-0.026336);
}

double NNfunction_sb_cLsR::synapse0x1db9f10() {
   return (neuron0x1dab060()*0.133826);
}

double NNfunction_sb_cLsR::synapse0x1dba290() {
   return (neuron0x1da64a0()*0.0440428);
}

double NNfunction_sb_cLsR::synapse0x1dba2d0() {
   return (neuron0x1da67e0()*-0.0856236);
}

double NNfunction_sb_cLsR::synapse0x1dba310() {
   return (neuron0x1da6b20()*0.19632);
}

double NNfunction_sb_cLsR::synapse0x1dba350() {
   return (neuron0x1da6e60()*-0.118123);
}

double NNfunction_sb_cLsR::synapse0x1dba390() {
   return (neuron0x1da71a0()*-0.135832);
}

double NNfunction_sb_cLsR::synapse0x1dba3d0() {
   return (neuron0x1da74e0()*-0.43507);
}

double NNfunction_sb_cLsR::synapse0x1dba410() {
   return (neuron0x1da7820()*-0.608844);
}

double NNfunction_sb_cLsR::synapse0x1dba450() {
   return (neuron0x1da7b60()*0.0904391);
}

double NNfunction_sb_cLsR::synapse0x1dba490() {
   return (neuron0x1da7ea0()*-0.309224);
}

double NNfunction_sb_cLsR::synapse0x1dba4d0() {
   return (neuron0x1da81e0()*-0.14647);
}

double NNfunction_sb_cLsR::synapse0x1dba510() {
   return (neuron0x1da8520()*0.381714);
}

double NNfunction_sb_cLsR::synapse0x1dba550() {
   return (neuron0x1da8860()*0.309883);
}

double NNfunction_sb_cLsR::synapse0x1dba590() {
   return (neuron0x1da8ba0()*0.400441);
}

double NNfunction_sb_cLsR::synapse0x1dba5d0() {
   return (neuron0x1da8ee0()*-0.150107);
}

double NNfunction_sb_cLsR::synapse0x1dba610() {
   return (neuron0x1da9220()*0.533407);
}

double NNfunction_sb_cLsR::synapse0x1dba650() {
   return (neuron0x1da9560()*-0.831385);
}

double NNfunction_sb_cLsR::synapse0x1dba0e0() {
   return (neuron0x1da98a0()*0.458218);
}

double NNfunction_sb_cLsR::synapse0x1dba120() {
   return (neuron0x1da9e00()*0.248546);
}

double NNfunction_sb_cLsR::synapse0x1dba7a0() {
   return (neuron0x1daa020()*1.06196);
}

double NNfunction_sb_cLsR::synapse0x1dba7e0() {
   return (neuron0x1daa360()*-0.0118029);
}

double NNfunction_sb_cLsR::synapse0x1dba820() {
   return (neuron0x1daa6a0()*0.0165003);
}

double NNfunction_sb_cLsR::synapse0x1dba860() {
   return (neuron0x1daa9e0()*0.00789806);
}

double NNfunction_sb_cLsR::synapse0x1dba8a0() {
   return (neuron0x1daad20()*0.175056);
}

double NNfunction_sb_cLsR::synapse0x1dba8e0() {
   return (neuron0x1dab060()*-0.272763);
}

double NNfunction_sb_cLsR::synapse0x1dbac60() {
   return (neuron0x1da64a0()*0.0346698);
}

double NNfunction_sb_cLsR::synapse0x1dbaca0() {
   return (neuron0x1da67e0()*0.0184315);
}

double NNfunction_sb_cLsR::synapse0x1dbace0() {
   return (neuron0x1da6b20()*0.0119742);
}

double NNfunction_sb_cLsR::synapse0x1dbad20() {
   return (neuron0x1da6e60()*-11.869);
}

double NNfunction_sb_cLsR::synapse0x1dbad60() {
   return (neuron0x1da71a0()*0.0146277);
}

double NNfunction_sb_cLsR::synapse0x1dbada0() {
   return (neuron0x1da74e0()*0.0157228);
}

double NNfunction_sb_cLsR::synapse0x1dbade0() {
   return (neuron0x1da7820()*-0.0223912);
}

double NNfunction_sb_cLsR::synapse0x1dbae20() {
   return (neuron0x1da7b60()*-0.00113272);
}

double NNfunction_sb_cLsR::synapse0x1dbae60() {
   return (neuron0x1da7ea0()*0.0179468);
}

double NNfunction_sb_cLsR::synapse0x1dbaea0() {
   return (neuron0x1da81e0()*0.0148956);
}

double NNfunction_sb_cLsR::synapse0x1dbaee0() {
   return (neuron0x1da8520()*-0.0265153);
}

double NNfunction_sb_cLsR::synapse0x1dbaf20() {
   return (neuron0x1da8860()*0.0309729);
}

double NNfunction_sb_cLsR::synapse0x1dbaf60() {
   return (neuron0x1da8ba0()*-0.0235696);
}

double NNfunction_sb_cLsR::synapse0x1dbafa0() {
   return (neuron0x1da8ee0()*-0.0381128);
}

double NNfunction_sb_cLsR::synapse0x1dbafe0() {
   return (neuron0x1da9220()*0.0295542);
}

double NNfunction_sb_cLsR::synapse0x1dbb020() {
   return (neuron0x1da9560()*-0.0183012);
}

double NNfunction_sb_cLsR::synapse0x1dbaab0() {
   return (neuron0x1da98a0()*-0.0191945);
}

double NNfunction_sb_cLsR::synapse0x1dbaaf0() {
   return (neuron0x1da9e00()*0.0300764);
}

double NNfunction_sb_cLsR::synapse0x1dbb170() {
   return (neuron0x1daa020()*-0.00694612);
}

double NNfunction_sb_cLsR::synapse0x1dbb1b0() {
   return (neuron0x1daa360()*-0.012175);
}

double NNfunction_sb_cLsR::synapse0x1dbb1f0() {
   return (neuron0x1daa6a0()*-0.0257194);
}

double NNfunction_sb_cLsR::synapse0x1dbb230() {
   return (neuron0x1daa9e0()*-0.0175776);
}

double NNfunction_sb_cLsR::synapse0x1dbb270() {
   return (neuron0x1daad20()*0.0190907);
}

double NNfunction_sb_cLsR::synapse0x1dbb2b0() {
   return (neuron0x1dab060()*-0.00440123);
}

double NNfunction_sb_cLsR::synapse0x1dbb630() {
   return (neuron0x1da64a0()*0.0800706);
}

double NNfunction_sb_cLsR::synapse0x1dbb670() {
   return (neuron0x1da67e0()*-0.0725598);
}

double NNfunction_sb_cLsR::synapse0x1dbb6b0() {
   return (neuron0x1da6b20()*0.193956);
}

double NNfunction_sb_cLsR::synapse0x1dbb6f0() {
   return (neuron0x1da6e60()*0.608775);
}

double NNfunction_sb_cLsR::synapse0x1dbb730() {
   return (neuron0x1da71a0()*0.20525);
}

double NNfunction_sb_cLsR::synapse0x1dbb770() {
   return (neuron0x1da74e0()*0.133708);
}

double NNfunction_sb_cLsR::synapse0x1dbb7b0() {
   return (neuron0x1da7820()*0.223909);
}

double NNfunction_sb_cLsR::synapse0x1dbb7f0() {
   return (neuron0x1da7b60()*0.00873648);
}

double NNfunction_sb_cLsR::synapse0x1dbb830() {
   return (neuron0x1da7ea0()*-0.133714);
}

double NNfunction_sb_cLsR::synapse0x1dbb870() {
   return (neuron0x1da81e0()*-0.277079);
}

double NNfunction_sb_cLsR::synapse0x1dbb8b0() {
   return (neuron0x1da8520()*-0.269377);
}

double NNfunction_sb_cLsR::synapse0x1dbb8f0() {
   return (neuron0x1da8860()*0.074924);
}

double NNfunction_sb_cLsR::synapse0x1dbb930() {
   return (neuron0x1da8ba0()*0.981594);
}

double NNfunction_sb_cLsR::synapse0x1dbb970() {
   return (neuron0x1da8ee0()*0.0580321);
}

double NNfunction_sb_cLsR::synapse0x1dbb9b0() {
   return (neuron0x1da9220()*0.0592556);
}

double NNfunction_sb_cLsR::synapse0x1dbb9f0() {
   return (neuron0x1da9560()*-0.00286297);
}

double NNfunction_sb_cLsR::synapse0x1dbb480() {
   return (neuron0x1da98a0()*-0.0451881);
}

double NNfunction_sb_cLsR::synapse0x1dbb4c0() {
   return (neuron0x1da9e00()*-0.090814);
}

double NNfunction_sb_cLsR::synapse0x1dbbb40() {
   return (neuron0x1daa020()*0.959505);
}

double NNfunction_sb_cLsR::synapse0x1dbbb80() {
   return (neuron0x1daa360()*-0.115233);
}

double NNfunction_sb_cLsR::synapse0x1dbbbc0() {
   return (neuron0x1daa6a0()*-0.026492);
}

double NNfunction_sb_cLsR::synapse0x1dbbc00() {
   return (neuron0x1daa9e0()*0.046717);
}

double NNfunction_sb_cLsR::synapse0x1dbbc40() {
   return (neuron0x1daad20()*-0.128146);
}

double NNfunction_sb_cLsR::synapse0x1dbbc80() {
   return (neuron0x1dab060()*0.0220302);
}

double NNfunction_sb_cLsR::synapse0x1dcdb50() {
   return (neuron0x1da64a0()*0.0273182);
}

double NNfunction_sb_cLsR::synapse0x1dcdb90() {
   return (neuron0x1da67e0()*-0.0487174);
}

double NNfunction_sb_cLsR::synapse0x1dcdbd0() {
   return (neuron0x1da6b20()*-0.0544787);
}

double NNfunction_sb_cLsR::synapse0x1dcdc10() {
   return (neuron0x1da6e60()*-0.261184);
}

double NNfunction_sb_cLsR::synapse0x1dcdc50() {
   return (neuron0x1da71a0()*-0.0286357);
}

double NNfunction_sb_cLsR::synapse0x1dcdc90() {
   return (neuron0x1da74e0()*-0.0220376);
}

double NNfunction_sb_cLsR::synapse0x1dcdcd0() {
   return (neuron0x1da7820()*-0.0713545);
}

double NNfunction_sb_cLsR::synapse0x1dcdd10() {
   return (neuron0x1da7b60()*-0.000302192);
}

double NNfunction_sb_cLsR::synapse0x1dcdd50() {
   return (neuron0x1da7ea0()*0.0147143);
}

double NNfunction_sb_cLsR::synapse0x1dcdd90() {
   return (neuron0x1da81e0()*0.0371252);
}

double NNfunction_sb_cLsR::synapse0x1dcddd0() {
   return (neuron0x1da8520()*0.0197145);
}

double NNfunction_sb_cLsR::synapse0x1dcde10() {
   return (neuron0x1da8860()*-0.177133);
}

double NNfunction_sb_cLsR::synapse0x1dcde50() {
   return (neuron0x1da8ba0()*0.562705);
}

double NNfunction_sb_cLsR::synapse0x1dcde90() {
   return (neuron0x1da8ee0()*0.182342);
}

double NNfunction_sb_cLsR::synapse0x1dcded0() {
   return (neuron0x1da9220()*-0.209807);
}

double NNfunction_sb_cLsR::synapse0x1dcdf10() {
   return (neuron0x1da9560()*-0.243934);
}

double NNfunction_sb_cLsR::synapse0x1dbbcc0() {
   return (neuron0x1da98a0()*0.204455);
}

double NNfunction_sb_cLsR::synapse0x1dbbd00() {
   return (neuron0x1da9e00()*-0.0691369);
}

double NNfunction_sb_cLsR::synapse0x1dce060() {
   return (neuron0x1daa020()*0.528321);
}

double NNfunction_sb_cLsR::synapse0x1dce0a0() {
   return (neuron0x1daa360()*-0.00741552);
}

double NNfunction_sb_cLsR::synapse0x1dce0e0() {
   return (neuron0x1daa6a0()*0.0613758);
}

double NNfunction_sb_cLsR::synapse0x1dce120() {
   return (neuron0x1daa9e0()*0.0728588);
}

double NNfunction_sb_cLsR::synapse0x1dce160() {
   return (neuron0x1daad20()*0.0139234);
}

double NNfunction_sb_cLsR::synapse0x1dce1a0() {
   return (neuron0x1dab060()*0.0270717);
}

double NNfunction_sb_cLsR::synapse0x1dce520() {
   return (neuron0x1da64a0()*0.0178226);
}

double NNfunction_sb_cLsR::synapse0x1dce560() {
   return (neuron0x1da67e0()*-0.0162381);
}

double NNfunction_sb_cLsR::synapse0x1dce5a0() {
   return (neuron0x1da6b20()*-0.0281015);
}

double NNfunction_sb_cLsR::synapse0x1dce5e0() {
   return (neuron0x1da6e60()*-0.955805);
}

double NNfunction_sb_cLsR::synapse0x1dce620() {
   return (neuron0x1da71a0()*-0.0128489);
}

double NNfunction_sb_cLsR::synapse0x1dce660() {
   return (neuron0x1da74e0()*0.0510402);
}

double NNfunction_sb_cLsR::synapse0x1dce6a0() {
   return (neuron0x1da7820()*0.00539509);
}

double NNfunction_sb_cLsR::synapse0x1dce6e0() {
   return (neuron0x1da7b60()*-0.0136642);
}

double NNfunction_sb_cLsR::synapse0x1dce720() {
   return (neuron0x1da7ea0()*0.00465485);
}

double NNfunction_sb_cLsR::synapse0x1dce760() {
   return (neuron0x1da81e0()*0.0841226);
}

double NNfunction_sb_cLsR::synapse0x1dce7a0() {
   return (neuron0x1da8520()*-0.0640545);
}

double NNfunction_sb_cLsR::synapse0x1dce7e0() {
   return (neuron0x1da8860()*-0.0707765);
}

double NNfunction_sb_cLsR::synapse0x1dce820() {
   return (neuron0x1da8ba0()*2.38052);
}

double NNfunction_sb_cLsR::synapse0x1dce860() {
   return (neuron0x1da8ee0()*0.0570248);
}

double NNfunction_sb_cLsR::synapse0x1dce8a0() {
   return (neuron0x1da9220()*-0.0143774);
}

double NNfunction_sb_cLsR::synapse0x1dce8e0() {
   return (neuron0x1da9560()*0.0137534);
}

double NNfunction_sb_cLsR::synapse0x1dce370() {
   return (neuron0x1da98a0()*0.0373808);
}

double NNfunction_sb_cLsR::synapse0x1dce3b0() {
   return (neuron0x1da9e00()*0.0181263);
}

double NNfunction_sb_cLsR::synapse0x1dcea30() {
   return (neuron0x1daa020()*-0.2764);
}

double NNfunction_sb_cLsR::synapse0x1dcea70() {
   return (neuron0x1daa360()*0.0587973);
}

double NNfunction_sb_cLsR::synapse0x1dceab0() {
   return (neuron0x1daa6a0()*-0.0246624);
}

double NNfunction_sb_cLsR::synapse0x1dceaf0() {
   return (neuron0x1daa9e0()*-0.0627036);
}

double NNfunction_sb_cLsR::synapse0x1dceb30() {
   return (neuron0x1daad20()*0.013577);
}

double NNfunction_sb_cLsR::synapse0x1dceb70() {
   return (neuron0x1dab060()*-0.0101074);
}

double NNfunction_sb_cLsR::synapse0x1dceef0() {
   return (neuron0x1da64a0()*-0.0270599);
}

double NNfunction_sb_cLsR::synapse0x1dcef30() {
   return (neuron0x1da67e0()*-0.0430774);
}

double NNfunction_sb_cLsR::synapse0x1dcef70() {
   return (neuron0x1da6b20()*-0.0442812);
}

double NNfunction_sb_cLsR::synapse0x1dcefb0() {
   return (neuron0x1da6e60()*-1.30162);
}

double NNfunction_sb_cLsR::synapse0x1dceff0() {
   return (neuron0x1da71a0()*-0.02965);
}

double NNfunction_sb_cLsR::synapse0x1dcf030() {
   return (neuron0x1da74e0()*-0.0139769);
}

double NNfunction_sb_cLsR::synapse0x1dcf070() {
   return (neuron0x1da7820()*0.047292);
}

double NNfunction_sb_cLsR::synapse0x1dcf0b0() {
   return (neuron0x1da7b60()*-0.0140416);
}

double NNfunction_sb_cLsR::synapse0x1dcf0f0() {
   return (neuron0x1da7ea0()*0.00531883);
}

double NNfunction_sb_cLsR::synapse0x1dcf130() {
   return (neuron0x1da81e0()*-0.0271432);
}

double NNfunction_sb_cLsR::synapse0x1dcf170() {
   return (neuron0x1da8520()*-0.0107591);
}

double NNfunction_sb_cLsR::synapse0x1dcf1b0() {
   return (neuron0x1da8860()*-0.0308792);
}

double NNfunction_sb_cLsR::synapse0x1dcf1f0() {
   return (neuron0x1da8ba0()*0.0634409);
}

double NNfunction_sb_cLsR::synapse0x1dcf230() {
   return (neuron0x1da8ee0()*-0.00930019);
}

double NNfunction_sb_cLsR::synapse0x1dcf270() {
   return (neuron0x1da9220()*-0.0422418);
}

double NNfunction_sb_cLsR::synapse0x1dcf2b0() {
   return (neuron0x1da9560()*0.0758699);
}

double NNfunction_sb_cLsR::synapse0x1dced40() {
   return (neuron0x1da98a0()*-0.0190608);
}

double NNfunction_sb_cLsR::synapse0x1dced80() {
   return (neuron0x1da9e00()*-0.017084);
}

double NNfunction_sb_cLsR::synapse0x1dcf400() {
   return (neuron0x1daa020()*0.049013);
}

double NNfunction_sb_cLsR::synapse0x1dcf440() {
   return (neuron0x1daa360()*-0.00832307);
}

double NNfunction_sb_cLsR::synapse0x1dcf480() {
   return (neuron0x1daa6a0()*-0.00839792);
}

double NNfunction_sb_cLsR::synapse0x1dcf4c0() {
   return (neuron0x1daa9e0()*-0.028787);
}

double NNfunction_sb_cLsR::synapse0x1dcf500() {
   return (neuron0x1daad20()*-0.0174147);
}

double NNfunction_sb_cLsR::synapse0x1dcf540() {
   return (neuron0x1dab060()*-0.00974722);
}

double NNfunction_sb_cLsR::synapse0x1dcf8c0() {
   return (neuron0x1da64a0()*0.0386915);
}

double NNfunction_sb_cLsR::synapse0x1dcf900() {
   return (neuron0x1da67e0()*0.00762183);
}

double NNfunction_sb_cLsR::synapse0x1dcf940() {
   return (neuron0x1da6b20()*-0.162692);
}

double NNfunction_sb_cLsR::synapse0x1dcf980() {
   return (neuron0x1da6e60()*0.129726);
}

double NNfunction_sb_cLsR::synapse0x1dcf9c0() {
   return (neuron0x1da71a0()*-0.0208315);
}

double NNfunction_sb_cLsR::synapse0x1dcfa00() {
   return (neuron0x1da74e0()*-0.00310737);
}

double NNfunction_sb_cLsR::synapse0x1dcfa40() {
   return (neuron0x1da7820()*0.028616);
}

double NNfunction_sb_cLsR::synapse0x1dcfa80() {
   return (neuron0x1da7b60()*-0.00706972);
}

double NNfunction_sb_cLsR::synapse0x1dcfac0() {
   return (neuron0x1da7ea0()*0.0117685);
}

double NNfunction_sb_cLsR::synapse0x1dcfb00() {
   return (neuron0x1da81e0()*-0.00557543);
}

double NNfunction_sb_cLsR::synapse0x1dcfb40() {
   return (neuron0x1da8520()*-0.00728732);
}

double NNfunction_sb_cLsR::synapse0x1dcfb80() {
   return (neuron0x1da8860()*0.0464178);
}

double NNfunction_sb_cLsR::synapse0x1dcfbc0() {
   return (neuron0x1da8ba0()*1.24316);
}

double NNfunction_sb_cLsR::synapse0x1dcfc00() {
   return (neuron0x1da8ee0()*0.0544093);
}

double NNfunction_sb_cLsR::synapse0x1dcfc40() {
   return (neuron0x1da9220()*0.0356369);
}

double NNfunction_sb_cLsR::synapse0x1dcfc80() {
   return (neuron0x1da9560()*0.119036);
}

double NNfunction_sb_cLsR::synapse0x1dcf710() {
   return (neuron0x1da98a0()*0.00431578);
}

double NNfunction_sb_cLsR::synapse0x1dcf750() {
   return (neuron0x1da9e00()*0.0742373);
}

double NNfunction_sb_cLsR::synapse0x1dcfdd0() {
   return (neuron0x1daa020()*-0.0899962);
}

double NNfunction_sb_cLsR::synapse0x1dcfe10() {
   return (neuron0x1daa360()*-0.076093);
}

double NNfunction_sb_cLsR::synapse0x1dcfe50() {
   return (neuron0x1daa6a0()*-0.0223363);
}

double NNfunction_sb_cLsR::synapse0x1dcfe90() {
   return (neuron0x1daa9e0()*0.00686609);
}

double NNfunction_sb_cLsR::synapse0x1dcfed0() {
   return (neuron0x1daad20()*-0.0142798);
}

double NNfunction_sb_cLsR::synapse0x1dcff10() {
   return (neuron0x1dab060()*-0.00266379);
}

double NNfunction_sb_cLsR::synapse0x1dac4b0() {
   return (neuron0x1dab500()*0.202141);
}

double NNfunction_sb_cLsR::synapse0x1dac4f0() {
   return (neuron0x1dabe10()*0.056831);
}

double NNfunction_sb_cLsR::synapse0x1dad9c0() {
   return (neuron0x1dac8f0()*0.890796);
}

double NNfunction_sb_cLsR::synapse0x1dada00() {
   return (neuron0x1b66180()*-0.0573628);
}

double NNfunction_sb_cLsR::synapse0x1dae390() {
   return (neuron0x1dad710()*0.419603);
}

double NNfunction_sb_cLsR::synapse0x1dae3d0() {
   return (neuron0x1dae0e0()*-0.0463881);
}

double NNfunction_sb_cLsR::synapse0x1daf160() {
   return (neuron0x1daeeb0()*-0.00751053);
}

double NNfunction_sb_cLsR::synapse0x1daf1a0() {
   return (neuron0x1daf880()*0.0263583);
}

double NNfunction_sb_cLsR::synapse0x1dafb30() {
   return (neuron0x1db0250()*0.0303812);
}

double NNfunction_sb_cLsR::synapse0x1dafb70() {
   return (neuron0x1db0d30()*-1.04205);
}

double NNfunction_sb_cLsR::synapse0x1db0500() {
   return (neuron0x1db1700()*0.28143);
}

double NNfunction_sb_cLsR::synapse0x1db0540() {
   return (neuron0x1dae7e0()*0.213599);
}

double NNfunction_sb_cLsR::synapse0x1db0fe0() {
   return (neuron0x1db32b0()*-0.779593);
}

double NNfunction_sb_cLsR::synapse0x1db1020() {
   return (neuron0x1db3c80()*2.2413);
}

double NNfunction_sb_cLsR::synapse0x1db19b0() {
   return (neuron0x1db4650()*0.301499);
}

double NNfunction_sb_cLsR::synapse0x1db19f0() {
   return (neuron0x1db5020()*-0.369173);
}

double NNfunction_sb_cLsR::synapse0x1daea90() {
   return (neuron0x1db6e30()*0.0370201);
}

double NNfunction_sb_cLsR::synapse0x1daead0() {
   return (neuron0x1db7110()*0.0439403);
}

double NNfunction_sb_cLsR::synapse0x1db3560() {
   return (neuron0x1db7ae0()*1.78788);
}

double NNfunction_sb_cLsR::synapse0x1db35a0() {
   return (neuron0x1db84b0()*0.36287);
}

double NNfunction_sb_cLsR::synapse0x1db3f30() {
   return (neuron0x1db8e80()*-0.521185);
}

double NNfunction_sb_cLsR::synapse0x1db3f70() {
   return (neuron0x1db9850()*0.0749322);
}

double NNfunction_sb_cLsR::synapse0x1db4900() {
   return (neuron0x1db23a0()*-1.69866);
}

double NNfunction_sb_cLsR::synapse0x1db4940() {
   return (neuron0x1db2d70()*0.138723);
}

double NNfunction_sb_cLsR::synapse0x1db52d0() {
   return (neuron0x1dbc5e0()*3.12715);
}

double NNfunction_sb_cLsR::synapse0x1db5310() {
   return (neuron0x1dbcfb0()*0.369247);
}

double NNfunction_sb_cLsR::synapse0x1da9440() {
   return (neuron0x1dbd980()*-0.432858);
}

double NNfunction_sb_cLsR::synapse0x1da9480() {
   return (neuron0x1dbe350()*-0.574769);
}

double NNfunction_sb_cLsR::synapse0x1db73c0() {
   return (neuron0x1dbed20()*-0.805216);
}

double NNfunction_sb_cLsR::synapse0x1db7400() {
   return (neuron0x1dbf6f0()*0.700677);
}

double NNfunction_sb_cLsR::synapse0x1db7d90() {
   return (neuron0x1dc00c0()*0.0335447);
}

double NNfunction_sb_cLsR::synapse0x1db7dd0() {
   return (neuron0x1dc0a90()*0.544281);
}

double NNfunction_sb_cLsR::synapse0x1db8760() {
   return (neuron0x1db6b20()*0.883153);
}

double NNfunction_sb_cLsR::synapse0x1db87a0() {
   return (neuron0x1dc3670()*0.358966);
}

double NNfunction_sb_cLsR::synapse0x1db9130() {
   return (neuron0x1dc4040()*-0.0158781);
}

double NNfunction_sb_cLsR::synapse0x1db9170() {
   return (neuron0x1dc4a10()*0.0811947);
}

double NNfunction_sb_cLsR::synapse0x1db9b00() {
   return (neuron0x1dc53e0()*0.0200974);
}

double NNfunction_sb_cLsR::synapse0x1db9b40() {
   return (neuron0x1dc5db0()*0.0687505);
}

double NNfunction_sb_cLsR::synapse0x1db2650() {
   return (neuron0x1dc6780()*-0.0612209);
}

double NNfunction_sb_cLsR::synapse0x1db2690() {
   return (neuron0x1dc7150()*0.178548);
}

double NNfunction_sb_cLsR::synapse0x1dbbf00() {
   return (neuron0x1dc7b20()*-0.314055);
}

double NNfunction_sb_cLsR::synapse0x1dbbf40() {
   return (neuron0x1dc8700()*0.00299329);
}

double NNfunction_sb_cLsR::synapse0x1dbc890() {
   return (neuron0x1dc90d0()*0.000821649);
}

double NNfunction_sb_cLsR::synapse0x1dbc8d0() {
   return (neuron0x1db9f50()*-0.0246619);
}

double NNfunction_sb_cLsR::synapse0x1dbd260() {
   return (neuron0x1dba920()*1.04185);
}

double NNfunction_sb_cLsR::synapse0x1dbd2a0() {
   return (neuron0x1dbb2f0()*0.215835);
}

double NNfunction_sb_cLsR::synapse0x1dbdc30() {
   return (neuron0x1dcd930()*-1.09334);
}

double NNfunction_sb_cLsR::synapse0x1dbdc70() {
   return (neuron0x1dce1e0()*-0.100184);
}

double NNfunction_sb_cLsR::synapse0x1dbe600() {
   return (neuron0x1dcebb0()*-2.91944);
}

double NNfunction_sb_cLsR::synapse0x1dbe640() {
   return (neuron0x1dcf580()*-1.0861);
}

double NNfunction_sb_cLsR::synapse0x1dc0d40() {
   return (neuron0x1dab500()*-0.374399);
}

double NNfunction_sb_cLsR::synapse0x1dc0d80() {
   return (neuron0x1dabe10()*-0.48494);
}

double NNfunction_sb_cLsR::synapse0x1db6300() {
   return (neuron0x1dac8f0()*0.0519028);
}

double NNfunction_sb_cLsR::synapse0x1db6340() {
   return (neuron0x1b66180()*-0.764922);
}

double NNfunction_sb_cLsR::synapse0x1dc3920() {
   return (neuron0x1dad710()*-0.671657);
}

double NNfunction_sb_cLsR::synapse0x1dc3960() {
   return (neuron0x1dae0e0()*-0.347471);
}

double NNfunction_sb_cLsR::synapse0x1dc42f0() {
   return (neuron0x1daeeb0()*-0.875623);
}

double NNfunction_sb_cLsR::synapse0x1dc4330() {
   return (neuron0x1daf880()*-0.312816);
}

double NNfunction_sb_cLsR::synapse0x1dc4cc0() {
   return (neuron0x1db0250()*-0.249138);
}

double NNfunction_sb_cLsR::synapse0x1dc4d00() {
   return (neuron0x1db0d30()*0.0725745);
}

double NNfunction_sb_cLsR::synapse0x1dc5690() {
   return (neuron0x1db1700()*-0.995868);
}

double NNfunction_sb_cLsR::synapse0x1dc56d0() {
   return (neuron0x1dae7e0()*-0.693521);
}

double NNfunction_sb_cLsR::synapse0x1dc6060() {
   return (neuron0x1db32b0()*-0.566249);
}

double NNfunction_sb_cLsR::synapse0x1dc60a0() {
   return (neuron0x1db3c80()*-0.383634);
}

double NNfunction_sb_cLsR::synapse0x1dc6a30() {
   return (neuron0x1db4650()*-0.585023);
}

double NNfunction_sb_cLsR::synapse0x1dc6a70() {
   return (neuron0x1db5020()*-1.00944);
}

double NNfunction_sb_cLsR::synapse0x1dc7400() {
   return (neuron0x1db6e30()*-0.192171);
}

double NNfunction_sb_cLsR::synapse0x1dc7440() {
   return (neuron0x1db7110()*-0.617407);
}

double NNfunction_sb_cLsR::synapse0x1dc7dd0() {
   return (neuron0x1db7ae0()*0.560007);
}

double NNfunction_sb_cLsR::synapse0x1dc7e10() {
   return (neuron0x1db84b0()*-0.205135);
}

double NNfunction_sb_cLsR::synapse0x1dc89b0() {
   return (neuron0x1db8e80()*-0.390434);
}

double NNfunction_sb_cLsR::synapse0x1dc89f0() {
   return (neuron0x1db9850()*-0.203727);
}

double NNfunction_sb_cLsR::synapse0x1dc9380() {
   return (neuron0x1db23a0()*0.262145);
}

double NNfunction_sb_cLsR::synapse0x1dc93c0() {
   return (neuron0x1db2d70()*0.239363);
}

double NNfunction_sb_cLsR::synapse0x1dba200() {
   return (neuron0x1dbc5e0()*-0.557917);
}

double NNfunction_sb_cLsR::synapse0x1dba240() {
   return (neuron0x1dbcfb0()*-0.998486);
}

double NNfunction_sb_cLsR::synapse0x1dbabd0() {
   return (neuron0x1dbd980()*0.142977);
}

double NNfunction_sb_cLsR::synapse0x1dbac10() {
   return (neuron0x1dbe350()*0.00803744);
}

double NNfunction_sb_cLsR::synapse0x1dbb5a0() {
   return (neuron0x1dbed20()*-0.349436);
}

double NNfunction_sb_cLsR::synapse0x1dbb5e0() {
   return (neuron0x1dbf6f0()*-0.101349);
}

double NNfunction_sb_cLsR::synapse0x1dcdac0() {
   return (neuron0x1dc00c0()*-0.0182563);
}

double NNfunction_sb_cLsR::synapse0x1dcdb00() {
   return (neuron0x1dc0a90()*0.0979011);
}

double NNfunction_sb_cLsR::synapse0x1dce490() {
   return (neuron0x1db6b20()*-0.157871);
}

double NNfunction_sb_cLsR::synapse0x1dce4d0() {
   return (neuron0x1dc3670()*0.106767);
}

double NNfunction_sb_cLsR::synapse0x1dcee60() {
   return (neuron0x1dc4040()*-0.609799);
}

double NNfunction_sb_cLsR::synapse0x1dceea0() {
   return (neuron0x1dc4a10()*-0.591057);
}

double NNfunction_sb_cLsR::synapse0x1dcf830() {
   return (neuron0x1dc53e0()*0.0726075);
}

double NNfunction_sb_cLsR::synapse0x1dcf870() {
   return (neuron0x1dc5db0()*-0.17651);
}

double NNfunction_sb_cLsR::synapse0x1dab720() {
   return (neuron0x1dc6780()*-0.228429);
}

double NNfunction_sb_cLsR::synapse0x1dab760() {
   return (neuron0x1dc7150()*-0.451576);
}

double NNfunction_sb_cLsR::synapse0x1dbefd0() {
   return (neuron0x1dc7b20()*0.658878);
}

double NNfunction_sb_cLsR::synapse0x1dbf010() {
   return (neuron0x1dc8700()*-0.85509);
}

double NNfunction_sb_cLsR::synapse0x1dcff50() {
   return (neuron0x1dc90d0()*-0.305948);
}

double NNfunction_sb_cLsR::synapse0x1dcff90() {
   return (neuron0x1db9f50()*-0.58221);
}

double NNfunction_sb_cLsR::synapse0x1dcffd0() {
   return (neuron0x1dba920()*-0.360597);
}

double NNfunction_sb_cLsR::synapse0x1dd0010() {
   return (neuron0x1dbb2f0()*-0.525827);
}

double NNfunction_sb_cLsR::synapse0x1dd6ec0() {
   return (neuron0x1dcd930()*0.351377);
}

double NNfunction_sb_cLsR::synapse0x1dd6f00() {
   return (neuron0x1dce1e0()*-0.0246189);
}

double NNfunction_sb_cLsR::synapse0x1dd6f40() {
   return (neuron0x1dcebb0()*-0.198254);
}

double NNfunction_sb_cLsR::synapse0x1dd6f80() {
   return (neuron0x1dcf580()*-0.617816);
}

double NNfunction_sb_cLsR::synapse0x1dd7300() {
   return (neuron0x1dab500()*1.77078);
}

double NNfunction_sb_cLsR::synapse0x1dd7340() {
   return (neuron0x1dabe10()*1.03841);
}

double NNfunction_sb_cLsR::synapse0x1dd7380() {
   return (neuron0x1dac8f0()*1.91199);
}

double NNfunction_sb_cLsR::synapse0x1dd73c0() {
   return (neuron0x1b66180()*-0.0904867);
}

double NNfunction_sb_cLsR::synapse0x1dd7400() {
   return (neuron0x1dad710()*-0.75932);
}

double NNfunction_sb_cLsR::synapse0x1dd7440() {
   return (neuron0x1dae0e0()*0.0433793);
}

double NNfunction_sb_cLsR::synapse0x1dd7480() {
   return (neuron0x1daeeb0()*-0.04188);
}

double NNfunction_sb_cLsR::synapse0x1dd74c0() {
   return (neuron0x1daf880()*0.190566);
}

double NNfunction_sb_cLsR::synapse0x1dd7500() {
   return (neuron0x1db0250()*0.023848);
}

double NNfunction_sb_cLsR::synapse0x1dd7540() {
   return (neuron0x1db0d30()*1.32651);
}

double NNfunction_sb_cLsR::synapse0x1dd7580() {
   return (neuron0x1db1700()*0.704147);
}

double NNfunction_sb_cLsR::synapse0x1dd75c0() {
   return (neuron0x1dae7e0()*0.826367);
}

double NNfunction_sb_cLsR::synapse0x1dd7600() {
   return (neuron0x1db32b0()*-1.19002);
}

double NNfunction_sb_cLsR::synapse0x1dd7640() {
   return (neuron0x1db3c80()*0.218835);
}

double NNfunction_sb_cLsR::synapse0x1dd7680() {
   return (neuron0x1db4650()*2.10915);
}

double NNfunction_sb_cLsR::synapse0x1dd76c0() {
   return (neuron0x1db5020()*-5.26049);
}

double NNfunction_sb_cLsR::synapse0x1dd7150() {
   return (neuron0x1db6e30()*0.101477);
}

double NNfunction_sb_cLsR::synapse0x1dd7190() {
   return (neuron0x1db7110()*0.0420035);
}

double NNfunction_sb_cLsR::synapse0x1dd7810() {
   return (neuron0x1db7ae0()*4.25317);
}

double NNfunction_sb_cLsR::synapse0x1dd7850() {
   return (neuron0x1db84b0()*-1.00837);
}

double NNfunction_sb_cLsR::synapse0x1dd7890() {
   return (neuron0x1db8e80()*1.38468);
}

double NNfunction_sb_cLsR::synapse0x1dd78d0() {
   return (neuron0x1db9850()*0.127623);
}

double NNfunction_sb_cLsR::synapse0x1dd7910() {
   return (neuron0x1db23a0()*0.909099);
}

double NNfunction_sb_cLsR::synapse0x1dd7950() {
   return (neuron0x1db2d70()*0.432592);
}

double NNfunction_sb_cLsR::synapse0x1dd7990() {
   return (neuron0x1dbc5e0()*-4.31223);
}

double NNfunction_sb_cLsR::synapse0x1dd79d0() {
   return (neuron0x1dbcfb0()*0.732897);
}

double NNfunction_sb_cLsR::synapse0x1dd7a10() {
   return (neuron0x1dbd980()*0.659118);
}

double NNfunction_sb_cLsR::synapse0x1dd7a50() {
   return (neuron0x1dbe350()*1.58427);
}

double NNfunction_sb_cLsR::synapse0x1dd7a90() {
   return (neuron0x1dbed20()*2.17673);
}

double NNfunction_sb_cLsR::synapse0x1dd7ad0() {
   return (neuron0x1dbf6f0()*0.502062);
}

double NNfunction_sb_cLsR::synapse0x1dd7b10() {
   return (neuron0x1dc00c0()*-0.00561829);
}

double NNfunction_sb_cLsR::synapse0x1dd7b50() {
   return (neuron0x1dc0a90()*1.48348);
}

double NNfunction_sb_cLsR::synapse0x1dd7700() {
   return (neuron0x1db6b20()*1.84578);
}

double NNfunction_sb_cLsR::synapse0x1dd7740() {
   return (neuron0x1dc3670()*-0.431825);
}

double NNfunction_sb_cLsR::synapse0x1dd7780() {
   return (neuron0x1dc4040()*-0.0773003);
}

double NNfunction_sb_cLsR::synapse0x1dd77c0() {
   return (neuron0x1dc4a10()*0.0485895);
}

double NNfunction_sb_cLsR::synapse0x1dd7da0() {
   return (neuron0x1dc53e0()*0.135384);
}

double NNfunction_sb_cLsR::synapse0x1dd7de0() {
   return (neuron0x1dc5db0()*-0.0647255);
}

double NNfunction_sb_cLsR::synapse0x1dd7e20() {
   return (neuron0x1dc6780()*-0.020112);
}

double NNfunction_sb_cLsR::synapse0x1dd7e60() {
   return (neuron0x1dc7150()*-1.32425);
}

double NNfunction_sb_cLsR::synapse0x1dd7ea0() {
   return (neuron0x1dc7b20()*1.28343);
}

double NNfunction_sb_cLsR::synapse0x1dd7ee0() {
   return (neuron0x1dc8700()*-0.217028);
}

double NNfunction_sb_cLsR::synapse0x1dd7f20() {
   return (neuron0x1dc90d0()*0.0957385);
}

double NNfunction_sb_cLsR::synapse0x1dd7f60() {
   return (neuron0x1db9f50()*0.035854);
}

double NNfunction_sb_cLsR::synapse0x1dd7fa0() {
   return (neuron0x1dba920()*-5.34815);
}

double NNfunction_sb_cLsR::synapse0x1dd7fe0() {
   return (neuron0x1dbb2f0()*0.340122);
}

double NNfunction_sb_cLsR::synapse0x1dd8020() {
   return (neuron0x1dcd930()*1.50148);
}

double NNfunction_sb_cLsR::synapse0x1dd8060() {
   return (neuron0x1dce1e0()*-1.09757);
}

double NNfunction_sb_cLsR::synapse0x1dd80a0() {
   return (neuron0x1dcebb0()*-0.14894);
}

double NNfunction_sb_cLsR::synapse0x1dd80e0() {
   return (neuron0x1dcf580()*0.298543);
}

double NNfunction_sb_cLsR::synapse0x1dd8460() {
   return (neuron0x1dab500()*-0.146083);
}

double NNfunction_sb_cLsR::synapse0x1dd84a0() {
   return (neuron0x1dabe10()*-1.82021);
}

double NNfunction_sb_cLsR::synapse0x1dd84e0() {
   return (neuron0x1dac8f0()*0.319787);
}

double NNfunction_sb_cLsR::synapse0x1dd8520() {
   return (neuron0x1b66180()*-0.403599);
}

double NNfunction_sb_cLsR::synapse0x1dd8560() {
   return (neuron0x1dad710()*-0.0323026);
}

double NNfunction_sb_cLsR::synapse0x1dd85a0() {
   return (neuron0x1dae0e0()*0.256849);
}

double NNfunction_sb_cLsR::synapse0x1dd85e0() {
   return (neuron0x1daeeb0()*0.565682);
}

double NNfunction_sb_cLsR::synapse0x1dd8620() {
   return (neuron0x1daf880()*0.392103);
}

double NNfunction_sb_cLsR::synapse0x1dd8660() {
   return (neuron0x1db0250()*0.450883);
}

double NNfunction_sb_cLsR::synapse0x1dd86a0() {
   return (neuron0x1db0d30()*-0.415668);
}

double NNfunction_sb_cLsR::synapse0x1dd86e0() {
   return (neuron0x1db1700()*0.122884);
}

double NNfunction_sb_cLsR::synapse0x1dd8720() {
   return (neuron0x1dae7e0()*0.460675);
}

double NNfunction_sb_cLsR::synapse0x1dd8760() {
   return (neuron0x1db32b0()*0.333214);
}

double NNfunction_sb_cLsR::synapse0x1dd87a0() {
   return (neuron0x1db3c80()*-1.43189);
}

double NNfunction_sb_cLsR::synapse0x1dd87e0() {
   return (neuron0x1db4650()*0.153587);
}

double NNfunction_sb_cLsR::synapse0x1dd8820() {
   return (neuron0x1db5020()*-4.736);
}

double NNfunction_sb_cLsR::synapse0x1dd82b0() {
   return (neuron0x1db6e30()*0.563888);
}

double NNfunction_sb_cLsR::synapse0x1dd82f0() {
   return (neuron0x1db7110()*0.624261);
}

double NNfunction_sb_cLsR::synapse0x1dd8970() {
   return (neuron0x1db7ae0()*1.62326);
}

double NNfunction_sb_cLsR::synapse0x1dd89b0() {
   return (neuron0x1db84b0()*-0.838387);
}

double NNfunction_sb_cLsR::synapse0x1dd89f0() {
   return (neuron0x1db8e80()*-0.173446);
}

double NNfunction_sb_cLsR::synapse0x1dd8a30() {
   return (neuron0x1db9850()*0.551902);
}

double NNfunction_sb_cLsR::synapse0x1dd8a70() {
   return (neuron0x1db23a0()*0.16109);
}

double NNfunction_sb_cLsR::synapse0x1dd8ab0() {
   return (neuron0x1db2d70()*1.90555);
}

double NNfunction_sb_cLsR::synapse0x1dd8af0() {
   return (neuron0x1dbc5e0()*-1.23282);
}

double NNfunction_sb_cLsR::synapse0x1dd8b30() {
   return (neuron0x1dbcfb0()*0.990624);
}

double NNfunction_sb_cLsR::synapse0x1dd8b70() {
   return (neuron0x1dbd980()*0.740755);
}

double NNfunction_sb_cLsR::synapse0x1dd8bb0() {
   return (neuron0x1dbe350()*-0.124656);
}

double NNfunction_sb_cLsR::synapse0x1dd8bf0() {
   return (neuron0x1dbed20()*1.19468);
}

double NNfunction_sb_cLsR::synapse0x1dd8c30() {
   return (neuron0x1dbf6f0()*-0.497776);
}

double NNfunction_sb_cLsR::synapse0x1dd8c70() {
   return (neuron0x1dc00c0()*0.508715);
}

double NNfunction_sb_cLsR::synapse0x1dd8cb0() {
   return (neuron0x1dc0a90()*-1.05938);
}

double NNfunction_sb_cLsR::synapse0x1dd8860() {
   return (neuron0x1db6b20()*-1.29447);
}

double NNfunction_sb_cLsR::synapse0x1dd88a0() {
   return (neuron0x1dc3670()*-0.684837);
}

double NNfunction_sb_cLsR::synapse0x1dd88e0() {
   return (neuron0x1dc4040()*-0.51233);
}

double NNfunction_sb_cLsR::synapse0x1dd8920() {
   return (neuron0x1dc4a10()*0.315982);
}

double NNfunction_sb_cLsR::synapse0x1dd8f00() {
   return (neuron0x1dc53e0()*0.108845);
}

double NNfunction_sb_cLsR::synapse0x1dd8f40() {
   return (neuron0x1dc5db0()*-0.864231);
}

double NNfunction_sb_cLsR::synapse0x1dd8f80() {
   return (neuron0x1dc6780()*-0.602402);
}

double NNfunction_sb_cLsR::synapse0x1dd8fc0() {
   return (neuron0x1dc7150()*0.179508);
}

double NNfunction_sb_cLsR::synapse0x1dd9000() {
   return (neuron0x1dc7b20()*2.5463);
}

double NNfunction_sb_cLsR::synapse0x1dd9040() {
   return (neuron0x1dc8700()*-0.76054);
}

double NNfunction_sb_cLsR::synapse0x1dd9080() {
   return (neuron0x1dc90d0()*0.620059);
}

double NNfunction_sb_cLsR::synapse0x1dd90c0() {
   return (neuron0x1db9f50()*-0.801526);
}

double NNfunction_sb_cLsR::synapse0x1dd9100() {
   return (neuron0x1dba920()*2.96458);
}

double NNfunction_sb_cLsR::synapse0x1dd9140() {
   return (neuron0x1dbb2f0()*-1.3973);
}

double NNfunction_sb_cLsR::synapse0x1dd9180() {
   return (neuron0x1dcd930()*1.19016);
}

double NNfunction_sb_cLsR::synapse0x1dd91c0() {
   return (neuron0x1dce1e0()*1.36877);
}

double NNfunction_sb_cLsR::synapse0x1dd9200() {
   return (neuron0x1dcebb0()*0.497862);
}

double NNfunction_sb_cLsR::synapse0x1dd9240() {
   return (neuron0x1dcf580()*0.203431);
}

double NNfunction_sb_cLsR::synapse0x1dd95c0() {
   return (neuron0x1dab500()*0.180137);
}

double NNfunction_sb_cLsR::synapse0x1dd9600() {
   return (neuron0x1dabe10()*0.479882);
}

double NNfunction_sb_cLsR::synapse0x1dd9640() {
   return (neuron0x1dac8f0()*0.722739);
}

double NNfunction_sb_cLsR::synapse0x1dd9680() {
   return (neuron0x1b66180()*-0.0360763);
}

double NNfunction_sb_cLsR::synapse0x1dd96c0() {
   return (neuron0x1dad710()*0.265444);
}

double NNfunction_sb_cLsR::synapse0x1dd9700() {
   return (neuron0x1dae0e0()*0.956382);
}

double NNfunction_sb_cLsR::synapse0x1dd9740() {
   return (neuron0x1daeeb0()*-0.246879);
}

double NNfunction_sb_cLsR::synapse0x1dd9780() {
   return (neuron0x1daf880()*0.600286);
}

double NNfunction_sb_cLsR::synapse0x1dd97c0() {
   return (neuron0x1db0250()*0.607377);
}

double NNfunction_sb_cLsR::synapse0x1dd9800() {
   return (neuron0x1db0d30()*0.647601);
}

double NNfunction_sb_cLsR::synapse0x1dd9840() {
   return (neuron0x1db1700()*0.284126);
}

double NNfunction_sb_cLsR::synapse0x1dd9880() {
   return (neuron0x1dae7e0()*0.0959628);
}

double NNfunction_sb_cLsR::synapse0x1dd98c0() {
   return (neuron0x1db32b0()*-0.568021);
}

double NNfunction_sb_cLsR::synapse0x1dd9900() {
   return (neuron0x1db3c80()*-0.643477);
}

double NNfunction_sb_cLsR::synapse0x1dd9940() {
   return (neuron0x1db4650()*0.668309);
}

double NNfunction_sb_cLsR::synapse0x1dd9980() {
   return (neuron0x1db5020()*0.0674478);
}

double NNfunction_sb_cLsR::synapse0x1dd9410() {
   return (neuron0x1db6e30()*-0.53044);
}

double NNfunction_sb_cLsR::synapse0x1dd9450() {
   return (neuron0x1db7110()*0.673961);
}

double NNfunction_sb_cLsR::synapse0x1dd9ad0() {
   return (neuron0x1db7ae0()*0.690895);
}

double NNfunction_sb_cLsR::synapse0x1dd9b10() {
   return (neuron0x1db84b0()*0.124841);
}

double NNfunction_sb_cLsR::synapse0x1dd9b50() {
   return (neuron0x1db8e80()*0.138374);
}

double NNfunction_sb_cLsR::synapse0x1dd9b90() {
   return (neuron0x1db9850()*0.916784);
}

double NNfunction_sb_cLsR::synapse0x1dd9bd0() {
   return (neuron0x1db23a0()*0.512528);
}

double NNfunction_sb_cLsR::synapse0x1dd9c10() {
   return (neuron0x1db2d70()*0.82828);
}

double NNfunction_sb_cLsR::synapse0x1dd9c50() {
   return (neuron0x1dbc5e0()*-0.784353);
}

double NNfunction_sb_cLsR::synapse0x1dd9c90() {
   return (neuron0x1dbcfb0()*0.345245);
}

double NNfunction_sb_cLsR::synapse0x1dd9cd0() {
   return (neuron0x1dbd980()*0.636365);
}

double NNfunction_sb_cLsR::synapse0x1dd9d10() {
   return (neuron0x1dbe350()*1.20988);
}

double NNfunction_sb_cLsR::synapse0x1dd9d50() {
   return (neuron0x1dbed20()*1.40474);
}

double NNfunction_sb_cLsR::synapse0x1dd9d90() {
   return (neuron0x1dbf6f0()*-0.344948);
}

double NNfunction_sb_cLsR::synapse0x1dd9dd0() {
   return (neuron0x1dc00c0()*0.515085);
}

double NNfunction_sb_cLsR::synapse0x1dd9e10() {
   return (neuron0x1dc0a90()*-0.195082);
}

double NNfunction_sb_cLsR::synapse0x1dd99c0() {
   return (neuron0x1db6b20()*0.764898);
}

double NNfunction_sb_cLsR::synapse0x1dd9a00() {
   return (neuron0x1dc3670()*0.209618);
}

double NNfunction_sb_cLsR::synapse0x1dd9a40() {
   return (neuron0x1dc4040()*0.417616);
}

double NNfunction_sb_cLsR::synapse0x1dd9a80() {
   return (neuron0x1dc4a10()*0.141405);
}

double NNfunction_sb_cLsR::synapse0x1dda060() {
   return (neuron0x1dc53e0()*0.400217);
}

double NNfunction_sb_cLsR::synapse0x1dda0a0() {
   return (neuron0x1dc5db0()*-0.533171);
}

double NNfunction_sb_cLsR::synapse0x1dda0e0() {
   return (neuron0x1dc6780()*-0.239963);
}

double NNfunction_sb_cLsR::synapse0x1dda120() {
   return (neuron0x1dc7150()*0.644126);
}

double NNfunction_sb_cLsR::synapse0x1dda160() {
   return (neuron0x1dc7b20()*1.63203);
}

double NNfunction_sb_cLsR::synapse0x1dda1a0() {
   return (neuron0x1dc8700()*-0.350542);
}

double NNfunction_sb_cLsR::synapse0x1dda1e0() {
   return (neuron0x1dc90d0()*0.448792);
}

double NNfunction_sb_cLsR::synapse0x1dda220() {
   return (neuron0x1db9f50()*-0.58811);
}

double NNfunction_sb_cLsR::synapse0x1dda260() {
   return (neuron0x1dba920()*0.0380095);
}

double NNfunction_sb_cLsR::synapse0x1dda2a0() {
   return (neuron0x1dbb2f0()*1.04238);
}

double NNfunction_sb_cLsR::synapse0x1dda2e0() {
   return (neuron0x1dcd930()*1.11306);
}

double NNfunction_sb_cLsR::synapse0x1dda320() {
   return (neuron0x1dce1e0()*0.00364541);
}

double NNfunction_sb_cLsR::synapse0x1dda360() {
   return (neuron0x1dcebb0()*1.09817);
}

double NNfunction_sb_cLsR::synapse0x1dda3a0() {
   return (neuron0x1dcf580()*0.413951);
}

double NNfunction_sb_cLsR::synapse0x1dab4c0() {
   return (neuron0x1dd6780()*9.59268);
}

double NNfunction_sb_cLsR::synapse0x1dda600() {
   return (neuron0x1dd6b20()*2.07904);
}

double NNfunction_sb_cLsR::synapse0x1dda640() {
   return (neuron0x1dd6fc0()*-9.05365);
}

double NNfunction_sb_cLsR::synapse0x1dda680() {
   return (neuron0x1dd8120()*-6.87155);
}

double NNfunction_sb_cLsR::synapse0x1dda6c0() {
   return (neuron0x1dd9280()*3.24728);
}

