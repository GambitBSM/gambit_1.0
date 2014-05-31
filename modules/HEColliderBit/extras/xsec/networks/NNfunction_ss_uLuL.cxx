#include "NNfunction_ss_uLuL.h"
#include <cmath>

double NNfunction_ss_uLuL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5182)/15.3222;
   input1 = (in1 - -1.72662)/1150.96;
   input2 = (in2 - 662.737)/625.85;
   input3 = (in3 - -56.8035)/831.99;
   input4 = (in4 - 1067.62)/957.723;
   input5 = (in5 - 896.245)/947.299;
   input6 = (in6 - 909.412)/950.13;
   input7 = (in7 - 926.688)/935.282;
   input8 = (in8 - 929.739)/976.447;
   input9 = (in9 - 904.374)/955.071;
   input10 = (in10 - 992.533)/959.013;
   input11 = (in11 - 420.281)/416.188;
   input12 = (in12 - 729.488)/877.49;
   input13 = (in13 - 508.764)/528.757;
   input14 = (in14 - 720.956)/817.884;
   input15 = (in15 - 724.268)/820.377;
   input16 = (in16 - 539.585)/566.947;
   input17 = (in17 - 767.384)/905.731;
   input18 = (in18 - 754.5)/902.127;
   input19 = (in19 - 808.843)/887.467;
   input20 = (in20 - -4.66647)/494.011;
   input21 = (in21 - 2.27074)/1162.28;
   input22 = (in22 - 9.64184)/1205.72;
   input23 = (in23 - -192.635)/596.962;
   switch(index) {
     case 0:
         return neuron0x2dfd510();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLuL::Value(int index, double* input) {
   input0 = (input[0] - 23.5182)/15.3222;
   input1 = (input[1] - -1.72662)/1150.96;
   input2 = (input[2] - 662.737)/625.85;
   input3 = (input[3] - -56.8035)/831.99;
   input4 = (input[4] - 1067.62)/957.723;
   input5 = (input[5] - 896.245)/947.299;
   input6 = (input[6] - 909.412)/950.13;
   input7 = (input[7] - 926.688)/935.282;
   input8 = (input[8] - 929.739)/976.447;
   input9 = (input[9] - 904.374)/955.071;
   input10 = (input[10] - 992.533)/959.013;
   input11 = (input[11] - 420.281)/416.188;
   input12 = (input[12] - 729.488)/877.49;
   input13 = (input[13] - 508.764)/528.757;
   input14 = (input[14] - 720.956)/817.884;
   input15 = (input[15] - 724.268)/820.377;
   input16 = (input[16] - 539.585)/566.947;
   input17 = (input[17] - 767.384)/905.731;
   input18 = (input[18] - 754.5)/902.127;
   input19 = (input[19] - 808.843)/887.467;
   input20 = (input[20] - -4.66647)/494.011;
   input21 = (input[21] - 2.27074)/1162.28;
   input22 = (input[22] - 9.64184)/1205.72;
   input23 = (input[23] - -192.635)/596.962;
   switch(index) {
     case 0:
         return neuron0x2dfd510();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLuL::neuron0x2dc95d0() {
   return input0;
}

double NNfunction_ss_uLuL::neuron0x2dc9910() {
   return input1;
}

double NNfunction_ss_uLuL::neuron0x2dc9c50() {
   return input2;
}

double NNfunction_ss_uLuL::neuron0x2dc9f90() {
   return input3;
}

double NNfunction_ss_uLuL::neuron0x2dca2d0() {
   return input4;
}

double NNfunction_ss_uLuL::neuron0x2dca610() {
   return input5;
}

double NNfunction_ss_uLuL::neuron0x2dca950() {
   return input6;
}

double NNfunction_ss_uLuL::neuron0x2dcac90() {
   return input7;
}

double NNfunction_ss_uLuL::neuron0x2dcafd0() {
   return input8;
}

double NNfunction_ss_uLuL::neuron0x2dcb310() {
   return input9;
}

double NNfunction_ss_uLuL::neuron0x2dcb650() {
   return input10;
}

double NNfunction_ss_uLuL::neuron0x2dcb990() {
   return input11;
}

double NNfunction_ss_uLuL::neuron0x2dcbcd0() {
   return input12;
}

double NNfunction_ss_uLuL::neuron0x2dcc010() {
   return input13;
}

double NNfunction_ss_uLuL::neuron0x2dcc350() {
   return input14;
}

double NNfunction_ss_uLuL::neuron0x2dcc690() {
   return input15;
}

double NNfunction_ss_uLuL::neuron0x2dcc9d0() {
   return input16;
}

double NNfunction_ss_uLuL::neuron0x2dccf30() {
   return input17;
}

double NNfunction_ss_uLuL::neuron0x2dcd150() {
   return input18;
}

double NNfunction_ss_uLuL::neuron0x2dcd490() {
   return input19;
}

double NNfunction_ss_uLuL::neuron0x2dcd7d0() {
   return input20;
}

double NNfunction_ss_uLuL::neuron0x2dcdb10() {
   return input21;
}

double NNfunction_ss_uLuL::neuron0x2dcde50() {
   return input22;
}

double NNfunction_ss_uLuL::neuron0x2dce190() {
   return input23;
}

double NNfunction_ss_uLuL::input0x2dce630() {
   double input = -0.232462;
   input += synapse0x2b89440();
   input += synapse0x2dc9490();
   input += synapse0x2dc94d0();
   input += synapse0x2dce8e0();
   input += synapse0x2dce920();
   input += synapse0x2dce960();
   input += synapse0x2dce9a0();
   input += synapse0x2dce9e0();
   input += synapse0x2dcea20();
   input += synapse0x2dcea60();
   input += synapse0x2dceaa0();
   input += synapse0x2dceae0();
   input += synapse0x2dceb20();
   input += synapse0x2dceb60();
   input += synapse0x2dceba0();
   input += synapse0x2dcebe0();
   input += synapse0x2dc9400();
   input += synapse0x2dc9440();
   input += synapse0x2b7ad40();
   input += synapse0x2b7ad80();
   input += synapse0x2dcee40();
   input += synapse0x2dcee80();
   input += synapse0x2dceec0();
   input += synapse0x2dcef00();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dce630() {
   double input = input0x2dce630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dcef40() {
   double input = -0.142135;
   input += synapse0x2dcf280();
   input += synapse0x2dcf2c0();
   input += synapse0x2dcf300();
   input += synapse0x2dcf340();
   input += synapse0x2dcf380();
   input += synapse0x2dcf3c0();
   input += synapse0x2dcf400();
   input += synapse0x2dcf440();
   input += synapse0x2dcf480();
   input += synapse0x2dced30();
   input += synapse0x2dced70();
   input += synapse0x2dcedb0();
   input += synapse0x2dcedf0();
   input += synapse0x2dcf6d0();
   input += synapse0x2dcf710();
   input += synapse0x2dcf750();
   input += synapse0x2dcf0d0();
   input += synapse0x2dcf110();
   input += synapse0x2dcf8a0();
   input += synapse0x2dcf8e0();
   input += synapse0x2dcf920();
   input += synapse0x2dcf960();
   input += synapse0x2dcf9a0();
   input += synapse0x2dcf9e0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dcef40() {
   double input = input0x2dcef40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dcfa20() {
   double input = -0.463756;
   input += synapse0x2dcfd60();
   input += synapse0x2dcfda0();
   input += synapse0x2dcfde0();
   input += synapse0x2dcfe20();
   input += synapse0x2dcfe60();
   input += synapse0x2dcfea0();
   input += synapse0x2dcfee0();
   input += synapse0x2dcff20();
   input += synapse0x2dcff60();
   input += synapse0x2dcffa0();
   input += synapse0x2dcffe0();
   input += synapse0x2dd0020();
   input += synapse0x2dd0060();
   input += synapse0x2dd00a0();
   input += synapse0x2dd00e0();
   input += synapse0x2dd0120();
   input += synapse0x2dcfbb0();
   input += synapse0x2dcfbf0();
   input += synapse0x2b88b30();
   input += synapse0x2b88b70();
   input += synapse0x2db8660();
   input += synapse0x2db86a0();
   input += synapse0x2db86e0();
   input += synapse0x2dc9510();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dcfa20() {
   double input = input0x2dcfa20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2b892b0() {
   double input = -0.649638;
   input += synapse0x2dcf670();
   input += synapse0x2dc9550();
   input += synapse0x2dc9590();
   input += synapse0x2dd0270();
   input += synapse0x2dd02b0();
   input += synapse0x2dd02f0();
   input += synapse0x2dd0330();
   input += synapse0x2dd0370();
   input += synapse0x2dd03b0();
   input += synapse0x2dd03f0();
   input += synapse0x2dd0430();
   input += synapse0x2dd0470();
   input += synapse0x2dd04b0();
   input += synapse0x2dd04f0();
   input += synapse0x2dd0530();
   input += synapse0x2dd0570();
   input += synapse0x2dcf4c0();
   input += synapse0x2dcf500();
   input += synapse0x2dd06c0();
   input += synapse0x2dd0700();
   input += synapse0x2dd0740();
   input += synapse0x2dd0780();
   input += synapse0x2dd07c0();
   input += synapse0x2dd0800();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2b892b0() {
   double input = input0x2b892b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd0840() {
   double input = 0.80031;
   input += synapse0x2dd0b80();
   input += synapse0x2dd0bc0();
   input += synapse0x2dd0c00();
   input += synapse0x2dd0c40();
   input += synapse0x2dd0c80();
   input += synapse0x2dd0cc0();
   input += synapse0x2dd0d00();
   input += synapse0x2dd0d40();
   input += synapse0x2dd0d80();
   input += synapse0x2dd0dc0();
   input += synapse0x2dd0e00();
   input += synapse0x2dd0e40();
   input += synapse0x2dd0e80();
   input += synapse0x2dd0ec0();
   input += synapse0x2dd0f00();
   input += synapse0x2dd0f40();
   input += synapse0x2dd09d0();
   input += synapse0x2dd0a10();
   input += synapse0x2dd1090();
   input += synapse0x2dd10d0();
   input += synapse0x2dd1110();
   input += synapse0x2dd1150();
   input += synapse0x2dd1190();
   input += synapse0x2dd11d0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd0840() {
   double input = input0x2dd0840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd1210() {
   double input = 0.566434;
   input += synapse0x2dd1550();
   input += synapse0x2dd1590();
   input += synapse0x2dd15d0();
   input += synapse0x2dd1610();
   input += synapse0x2dd1650();
   input += synapse0x2dd1690();
   input += synapse0x2dd16d0();
   input += synapse0x2dd1710();
   input += synapse0x2dd1750();
   input += synapse0x2b88ea0();
   input += synapse0x2b88ee0();
   input += synapse0x2b88f20();
   input += synapse0x2b88f60();
   input += synapse0x2b88fa0();
   input += synapse0x2b88fe0();
   input += synapse0x2b89020();
   input += synapse0x2dd13a0();
   input += synapse0x2dd13e0();
   input += synapse0x2b89170();
   input += synapse0x2b891b0();
   input += synapse0x2b891f0();
   input += synapse0x2b89230();
   input += synapse0x2b89270();
   input += synapse0x2dd1fa0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd1210() {
   double input = input0x2dd1210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd1fe0() {
   double input = -0.604171;
   input += synapse0x2dd2320();
   input += synapse0x2dd2360();
   input += synapse0x2dd23a0();
   input += synapse0x2dd23e0();
   input += synapse0x2dd2420();
   input += synapse0x2dd2460();
   input += synapse0x2dd24a0();
   input += synapse0x2dd24e0();
   input += synapse0x2dd2520();
   input += synapse0x2dd2560();
   input += synapse0x2dd25a0();
   input += synapse0x2dd25e0();
   input += synapse0x2dd2620();
   input += synapse0x2dd2660();
   input += synapse0x2dd26a0();
   input += synapse0x2dd26e0();
   input += synapse0x2dd2170();
   input += synapse0x2dd21b0();
   input += synapse0x2dd2830();
   input += synapse0x2dd2870();
   input += synapse0x2dd28b0();
   input += synapse0x2dd28f0();
   input += synapse0x2dd2930();
   input += synapse0x2dd2970();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd1fe0() {
   double input = input0x2dd1fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd29b0() {
   double input = 1.39408;
   input += synapse0x2dd2cf0();
   input += synapse0x2dd2d30();
   input += synapse0x2dd2d70();
   input += synapse0x2dd2db0();
   input += synapse0x2dd2df0();
   input += synapse0x2dd2e30();
   input += synapse0x2dd2e70();
   input += synapse0x2dd2eb0();
   input += synapse0x2dd2ef0();
   input += synapse0x2dd2f30();
   input += synapse0x2dd2f70();
   input += synapse0x2dd2fb0();
   input += synapse0x2dd2ff0();
   input += synapse0x2dd3030();
   input += synapse0x2dd3070();
   input += synapse0x2dd30b0();
   input += synapse0x2dd2b40();
   input += synapse0x2dd2b80();
   input += synapse0x2dd3200();
   input += synapse0x2dd3240();
   input += synapse0x2dd3280();
   input += synapse0x2dd32c0();
   input += synapse0x2dd3300();
   input += synapse0x2dd3340();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd29b0() {
   double input = input0x2dd29b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd3380() {
   double input = -1.44031;
   input += synapse0x2dcce20();
   input += synapse0x2dcce60();
   input += synapse0x2dccea0();
   input += synapse0x2dccee0();
   input += synapse0x2dd38d0();
   input += synapse0x2dd3910();
   input += synapse0x2dd3950();
   input += synapse0x2dd3990();
   input += synapse0x2dd39d0();
   input += synapse0x2dd3a10();
   input += synapse0x2dd3a50();
   input += synapse0x2dd3a90();
   input += synapse0x2dd3ad0();
   input += synapse0x2dd3b10();
   input += synapse0x2dd3b50();
   input += synapse0x2dd3b90();
   input += synapse0x2dd3510();
   input += synapse0x2dd3550();
   input += synapse0x2dd3ce0();
   input += synapse0x2dd3d20();
   input += synapse0x2dd3d60();
   input += synapse0x2dd3da0();
   input += synapse0x2dd3de0();
   input += synapse0x2dd3e20();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd3380() {
   double input = input0x2dd3380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd3e60() {
   double input = 0.325853;
   input += synapse0x2dd41a0();
   input += synapse0x2dd41e0();
   input += synapse0x2dd4220();
   input += synapse0x2dd4260();
   input += synapse0x2dd42a0();
   input += synapse0x2dd42e0();
   input += synapse0x2dd4320();
   input += synapse0x2dd4360();
   input += synapse0x2dd43a0();
   input += synapse0x2dd43e0();
   input += synapse0x2dd4420();
   input += synapse0x2dd4460();
   input += synapse0x2dd44a0();
   input += synapse0x2dd44e0();
   input += synapse0x2dd4520();
   input += synapse0x2dd4560();
   input += synapse0x2dd3ff0();
   input += synapse0x2dd4030();
   input += synapse0x2dd46b0();
   input += synapse0x2dd46f0();
   input += synapse0x2dd4730();
   input += synapse0x2dd4770();
   input += synapse0x2dd47b0();
   input += synapse0x2dd47f0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd3e60() {
   double input = input0x2dd3e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd4830() {
   double input = 2.58026;
   input += synapse0x2dd4b70();
   input += synapse0x2dd4bb0();
   input += synapse0x2dd4bf0();
   input += synapse0x2dd4c30();
   input += synapse0x2dd4c70();
   input += synapse0x2dd4cb0();
   input += synapse0x2dd4cf0();
   input += synapse0x2dd4d30();
   input += synapse0x2dd4d70();
   input += synapse0x2dd4db0();
   input += synapse0x2dd4df0();
   input += synapse0x2dd4e30();
   input += synapse0x2dd4e70();
   input += synapse0x2dd4eb0();
   input += synapse0x2dd4ef0();
   input += synapse0x2dd4f30();
   input += synapse0x2dd49c0();
   input += synapse0x2dd4a00();
   input += synapse0x2dd1790();
   input += synapse0x2dd17d0();
   input += synapse0x2dd1810();
   input += synapse0x2dd1850();
   input += synapse0x2dd1890();
   input += synapse0x2dd18d0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd4830() {
   double input = input0x2dd4830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd1910() {
   double input = 0.294367;
   input += synapse0x2dd1c50();
   input += synapse0x2dd1c90();
   input += synapse0x2dd1cd0();
   input += synapse0x2dd1d10();
   input += synapse0x2dd1d50();
   input += synapse0x2dd1d90();
   input += synapse0x2dd1dd0();
   input += synapse0x2dd1e10();
   input += synapse0x2dd1e50();
   input += synapse0x2dd1e90();
   input += synapse0x2dd1ed0();
   input += synapse0x2dd1f10();
   input += synapse0x2dd1f50();
   input += synapse0x2dd6090();
   input += synapse0x2dd60d0();
   input += synapse0x2dd6110();
   input += synapse0x2dd1aa0();
   input += synapse0x2dd1ae0();
   input += synapse0x2dd6260();
   input += synapse0x2dd62a0();
   input += synapse0x2dd62e0();
   input += synapse0x2dd6320();
   input += synapse0x2dd6360();
   input += synapse0x2dd63a0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd1910() {
   double input = input0x2dd1910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd63e0() {
   double input = -0.547166;
   input += synapse0x2dd6720();
   input += synapse0x2dd6760();
   input += synapse0x2dd67a0();
   input += synapse0x2dd67e0();
   input += synapse0x2dd6820();
   input += synapse0x2dd6860();
   input += synapse0x2dd68a0();
   input += synapse0x2dd68e0();
   input += synapse0x2dd6920();
   input += synapse0x2dd6960();
   input += synapse0x2dd69a0();
   input += synapse0x2dd69e0();
   input += synapse0x2dd6a20();
   input += synapse0x2dd6a60();
   input += synapse0x2dd6aa0();
   input += synapse0x2dd6ae0();
   input += synapse0x2dd6570();
   input += synapse0x2dd65b0();
   input += synapse0x2dd6c30();
   input += synapse0x2dd6c70();
   input += synapse0x2dd6cb0();
   input += synapse0x2dd6cf0();
   input += synapse0x2dd6d30();
   input += synapse0x2dd6d70();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd63e0() {
   double input = input0x2dd63e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd6db0() {
   double input = 2.05576;
   input += synapse0x2dd70f0();
   input += synapse0x2dd7130();
   input += synapse0x2dd7170();
   input += synapse0x2dd71b0();
   input += synapse0x2dd71f0();
   input += synapse0x2dd7230();
   input += synapse0x2dd7270();
   input += synapse0x2dd72b0();
   input += synapse0x2dd72f0();
   input += synapse0x2dd7330();
   input += synapse0x2dd7370();
   input += synapse0x2dd73b0();
   input += synapse0x2dd73f0();
   input += synapse0x2dd7430();
   input += synapse0x2dd7470();
   input += synapse0x2dd74b0();
   input += synapse0x2dd6f40();
   input += synapse0x2dd6f80();
   input += synapse0x2dd7600();
   input += synapse0x2dd7640();
   input += synapse0x2dd7680();
   input += synapse0x2dd76c0();
   input += synapse0x2dd7700();
   input += synapse0x2dd7740();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd6db0() {
   double input = input0x2dd6db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd7780() {
   double input = -0.553148;
   input += synapse0x2dd7ac0();
   input += synapse0x2dd7b00();
   input += synapse0x2dd7b40();
   input += synapse0x2dd7b80();
   input += synapse0x2dd7bc0();
   input += synapse0x2dd7c00();
   input += synapse0x2dd7c40();
   input += synapse0x2dd7c80();
   input += synapse0x2dd7cc0();
   input += synapse0x2dd7d00();
   input += synapse0x2dd7d40();
   input += synapse0x2dd7d80();
   input += synapse0x2dd7dc0();
   input += synapse0x2dd7e00();
   input += synapse0x2dd7e40();
   input += synapse0x2dd7e80();
   input += synapse0x2dd7910();
   input += synapse0x2dd7950();
   input += synapse0x2dd7fd0();
   input += synapse0x2dd8010();
   input += synapse0x2dd8050();
   input += synapse0x2dd8090();
   input += synapse0x2dd80d0();
   input += synapse0x2dd8110();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd7780() {
   double input = input0x2dd7780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd8150() {
   double input = -0.386113;
   input += synapse0x2dd8490();
   input += synapse0x2dc97f0();
   input += synapse0x2dc9830();
   input += synapse0x2dc9b30();
   input += synapse0x2dc9b70();
   input += synapse0x2dc9e70();
   input += synapse0x2dc9eb0();
   input += synapse0x2dca1b0();
   input += synapse0x2dca1f0();
   input += synapse0x2dca4f0();
   input += synapse0x2dca530();
   input += synapse0x2dca830();
   input += synapse0x2dca870();
   input += synapse0x2dcab70();
   input += synapse0x2dcabb0();
   input += synapse0x2dcaeb0();
   input += synapse0x2dcaef0();
   input += synapse0x2dcb1f0();
   input += synapse0x2dcb230();
   input += synapse0x2dcb530();
   input += synapse0x2dcb570();
   input += synapse0x2dcb870();
   input += synapse0x2dcb8b0();
   input += synapse0x2dcbbb0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd8150() {
   double input = input0x2dd8150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd9f60() {
   double input = -0.244036;
   input += synapse0x2dcbbf0();
   input += synapse0x2dcc8b0();
   input += synapse0x2dcc8f0();
   input += synapse0x2dd82e0();
   input += synapse0x2dd8320();
   input += synapse0x2dccbf0();
   input += synapse0x2dccc30();
   input += synapse0x2b7ac20();
   input += synapse0x2b7ac60();
   input += synapse0x2dcd370();
   input += synapse0x2dcd3b0();
   input += synapse0x2dcd6b0();
   input += synapse0x2dcd6f0();
   input += synapse0x2dcd9f0();
   input += synapse0x2dcda30();
   input += synapse0x2dcdd30();
   input += synapse0x2dcdd70();
   input += synapse0x2dce070();
   input += synapse0x2dce0b0();
   input += synapse0x2dce3b0();
   input += synapse0x2dce3f0();
   input += synapse0x2dcbef0();
   input += synapse0x2dcbf30();
   input += synapse0x2dda200();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd9f60() {
   double input = input0x2dd9f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dda240() {
   double input = 0.445405;
   input += synapse0x2dda580();
   input += synapse0x2dda5c0();
   input += synapse0x2dda600();
   input += synapse0x2dda640();
   input += synapse0x2dda680();
   input += synapse0x2dda6c0();
   input += synapse0x2dda700();
   input += synapse0x2dda740();
   input += synapse0x2dda780();
   input += synapse0x2dda7c0();
   input += synapse0x2dda800();
   input += synapse0x2dda840();
   input += synapse0x2dda880();
   input += synapse0x2dda8c0();
   input += synapse0x2dda900();
   input += synapse0x2dda940();
   input += synapse0x2dda3d0();
   input += synapse0x2dda410();
   input += synapse0x2ddaa90();
   input += synapse0x2ddaad0();
   input += synapse0x2ddab10();
   input += synapse0x2ddab50();
   input += synapse0x2ddab90();
   input += synapse0x2ddabd0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dda240() {
   double input = input0x2dda240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2ddac10() {
   double input = -0.33994;
   input += synapse0x2ddaf50();
   input += synapse0x2ddaf90();
   input += synapse0x2ddafd0();
   input += synapse0x2ddb010();
   input += synapse0x2ddb050();
   input += synapse0x2ddb090();
   input += synapse0x2ddb0d0();
   input += synapse0x2ddb110();
   input += synapse0x2ddb150();
   input += synapse0x2ddb190();
   input += synapse0x2ddb1d0();
   input += synapse0x2ddb210();
   input += synapse0x2ddb250();
   input += synapse0x2ddb290();
   input += synapse0x2ddb2d0();
   input += synapse0x2ddb310();
   input += synapse0x2ddada0();
   input += synapse0x2ddade0();
   input += synapse0x2ddb460();
   input += synapse0x2ddb4a0();
   input += synapse0x2ddb4e0();
   input += synapse0x2ddb520();
   input += synapse0x2ddb560();
   input += synapse0x2ddb5a0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2ddac10() {
   double input = input0x2ddac10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2ddb5e0() {
   double input = -1.25714;
   input += synapse0x2ddb920();
   input += synapse0x2ddb960();
   input += synapse0x2ddb9a0();
   input += synapse0x2ddb9e0();
   input += synapse0x2ddba20();
   input += synapse0x2ddba60();
   input += synapse0x2ddbaa0();
   input += synapse0x2ddbae0();
   input += synapse0x2ddbb20();
   input += synapse0x2ddbb60();
   input += synapse0x2ddbba0();
   input += synapse0x2ddbbe0();
   input += synapse0x2ddbc20();
   input += synapse0x2ddbc60();
   input += synapse0x2ddbca0();
   input += synapse0x2ddbce0();
   input += synapse0x2ddb770();
   input += synapse0x2ddb7b0();
   input += synapse0x2ddbe30();
   input += synapse0x2ddbe70();
   input += synapse0x2ddbeb0();
   input += synapse0x2ddbef0();
   input += synapse0x2ddbf30();
   input += synapse0x2ddbf70();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2ddb5e0() {
   double input = input0x2ddb5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2ddbfb0() {
   double input = 0.0194255;
   input += synapse0x2ddc2f0();
   input += synapse0x2ddc330();
   input += synapse0x2ddc370();
   input += synapse0x2ddc3b0();
   input += synapse0x2ddc3f0();
   input += synapse0x2ddc430();
   input += synapse0x2ddc470();
   input += synapse0x2ddc4b0();
   input += synapse0x2ddc4f0();
   input += synapse0x2ddc530();
   input += synapse0x2ddc570();
   input += synapse0x2ddc5b0();
   input += synapse0x2ddc5f0();
   input += synapse0x2ddc630();
   input += synapse0x2ddc670();
   input += synapse0x2ddc6b0();
   input += synapse0x2ddc140();
   input += synapse0x2ddc180();
   input += synapse0x2ddc800();
   input += synapse0x2ddc840();
   input += synapse0x2ddc880();
   input += synapse0x2ddc8c0();
   input += synapse0x2ddc900();
   input += synapse0x2ddc940();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2ddbfb0() {
   double input = input0x2ddbfb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2ddc980() {
   double input = 0.316113;
   input += synapse0x2ddccc0();
   input += synapse0x2ddcd00();
   input += synapse0x2ddcd40();
   input += synapse0x2ddcd80();
   input += synapse0x2ddcdc0();
   input += synapse0x2ddce00();
   input += synapse0x2ddce40();
   input += synapse0x2ddce80();
   input += synapse0x2ddcec0();
   input += synapse0x2dd5080();
   input += synapse0x2dd50c0();
   input += synapse0x2dd5100();
   input += synapse0x2dd5140();
   input += synapse0x2dd5180();
   input += synapse0x2dd51c0();
   input += synapse0x2dd5200();
   input += synapse0x2ddcb10();
   input += synapse0x2ddcb50();
   input += synapse0x2dd5350();
   input += synapse0x2dd5390();
   input += synapse0x2dd53d0();
   input += synapse0x2dd5410();
   input += synapse0x2dd5450();
   input += synapse0x2dd5490();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2ddc980() {
   double input = input0x2ddc980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd54d0() {
   double input = 0.566513;
   input += synapse0x2dd5810();
   input += synapse0x2dd5850();
   input += synapse0x2dd5890();
   input += synapse0x2dd58d0();
   input += synapse0x2dd5910();
   input += synapse0x2dd5950();
   input += synapse0x2dd5990();
   input += synapse0x2dd59d0();
   input += synapse0x2dd5a10();
   input += synapse0x2dd5a50();
   input += synapse0x2dd5a90();
   input += synapse0x2dd5ad0();
   input += synapse0x2dd5b10();
   input += synapse0x2dd5b50();
   input += synapse0x2dd5b90();
   input += synapse0x2dd5bd0();
   input += synapse0x2dd5660();
   input += synapse0x2dd56a0();
   input += synapse0x2dd5d20();
   input += synapse0x2dd5d60();
   input += synapse0x2dd5da0();
   input += synapse0x2dd5de0();
   input += synapse0x2dd5e20();
   input += synapse0x2dd5e60();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd54d0() {
   double input = input0x2dd54d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd5ea0() {
   double input = 0.283121;
   input += synapse0x2dd6030();
   input += synapse0x2ddf0c0();
   input += synapse0x2ddf100();
   input += synapse0x2ddf140();
   input += synapse0x2ddf180();
   input += synapse0x2ddf1c0();
   input += synapse0x2ddf200();
   input += synapse0x2ddf240();
   input += synapse0x2ddf280();
   input += synapse0x2ddf2c0();
   input += synapse0x2ddf300();
   input += synapse0x2ddf340();
   input += synapse0x2ddf380();
   input += synapse0x2ddf3c0();
   input += synapse0x2ddf400();
   input += synapse0x2ddf440();
   input += synapse0x2ddef10();
   input += synapse0x2ddef50();
   input += synapse0x2ddf590();
   input += synapse0x2ddf5d0();
   input += synapse0x2ddf610();
   input += synapse0x2ddf650();
   input += synapse0x2ddf690();
   input += synapse0x2ddf6d0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd5ea0() {
   double input = input0x2dd5ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2ddf710() {
   double input = -0.448572;
   input += synapse0x2ddfa50();
   input += synapse0x2ddfa90();
   input += synapse0x2ddfad0();
   input += synapse0x2ddfb10();
   input += synapse0x2ddfb50();
   input += synapse0x2ddfb90();
   input += synapse0x2ddfbd0();
   input += synapse0x2ddfc10();
   input += synapse0x2ddfc50();
   input += synapse0x2ddfc90();
   input += synapse0x2ddfcd0();
   input += synapse0x2ddfd10();
   input += synapse0x2ddfd50();
   input += synapse0x2ddfd90();
   input += synapse0x2ddfdd0();
   input += synapse0x2ddfe10();
   input += synapse0x2ddf8a0();
   input += synapse0x2ddf8e0();
   input += synapse0x2ddff60();
   input += synapse0x2ddffa0();
   input += synapse0x2ddffe0();
   input += synapse0x2de0020();
   input += synapse0x2de0060();
   input += synapse0x2de00a0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2ddf710() {
   double input = input0x2ddf710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2de00e0() {
   double input = 0.798214;
   input += synapse0x2de0420();
   input += synapse0x2de0460();
   input += synapse0x2de04a0();
   input += synapse0x2de04e0();
   input += synapse0x2de0520();
   input += synapse0x2de0560();
   input += synapse0x2de05a0();
   input += synapse0x2de05e0();
   input += synapse0x2de0620();
   input += synapse0x2de0660();
   input += synapse0x2de06a0();
   input += synapse0x2de06e0();
   input += synapse0x2de0720();
   input += synapse0x2de0760();
   input += synapse0x2de07a0();
   input += synapse0x2de07e0();
   input += synapse0x2de0270();
   input += synapse0x2de02b0();
   input += synapse0x2de0930();
   input += synapse0x2de0970();
   input += synapse0x2de09b0();
   input += synapse0x2de09f0();
   input += synapse0x2de0a30();
   input += synapse0x2de0a70();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2de00e0() {
   double input = input0x2de00e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2de0ab0() {
   double input = 0.249995;
   input += synapse0x2de0df0();
   input += synapse0x2de0e30();
   input += synapse0x2de0e70();
   input += synapse0x2de0eb0();
   input += synapse0x2de0ef0();
   input += synapse0x2de0f30();
   input += synapse0x2de0f70();
   input += synapse0x2de0fb0();
   input += synapse0x2de0ff0();
   input += synapse0x2de1030();
   input += synapse0x2de1070();
   input += synapse0x2de10b0();
   input += synapse0x2de10f0();
   input += synapse0x2de1130();
   input += synapse0x2de1170();
   input += synapse0x2de11b0();
   input += synapse0x2de0c40();
   input += synapse0x2de0c80();
   input += synapse0x2de1300();
   input += synapse0x2de1340();
   input += synapse0x2de1380();
   input += synapse0x2de13c0();
   input += synapse0x2de1400();
   input += synapse0x2de1440();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2de0ab0() {
   double input = input0x2de0ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2de1480() {
   double input = -0.738664;
   input += synapse0x2de17c0();
   input += synapse0x2de1800();
   input += synapse0x2de1840();
   input += synapse0x2de1880();
   input += synapse0x2de18c0();
   input += synapse0x2de1900();
   input += synapse0x2de1940();
   input += synapse0x2de1980();
   input += synapse0x2de19c0();
   input += synapse0x2de1a00();
   input += synapse0x2de1a40();
   input += synapse0x2de1a80();
   input += synapse0x2de1ac0();
   input += synapse0x2de1b00();
   input += synapse0x2de1b40();
   input += synapse0x2de1b80();
   input += synapse0x2de1610();
   input += synapse0x2de1650();
   input += synapse0x2de1cd0();
   input += synapse0x2de1d10();
   input += synapse0x2de1d50();
   input += synapse0x2de1d90();
   input += synapse0x2de1dd0();
   input += synapse0x2de1e10();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2de1480() {
   double input = input0x2de1480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2de1e50() {
   double input = -0.258073;
   input += synapse0x2de2190();
   input += synapse0x2de21d0();
   input += synapse0x2de2210();
   input += synapse0x2de2250();
   input += synapse0x2de2290();
   input += synapse0x2de22d0();
   input += synapse0x2de2310();
   input += synapse0x2de2350();
   input += synapse0x2de2390();
   input += synapse0x2de23d0();
   input += synapse0x2de2410();
   input += synapse0x2de2450();
   input += synapse0x2de2490();
   input += synapse0x2de24d0();
   input += synapse0x2de2510();
   input += synapse0x2de2550();
   input += synapse0x2de1fe0();
   input += synapse0x2de2020();
   input += synapse0x2de26a0();
   input += synapse0x2de26e0();
   input += synapse0x2de2720();
   input += synapse0x2de2760();
   input += synapse0x2de27a0();
   input += synapse0x2de27e0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2de1e50() {
   double input = input0x2de1e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2de2820() {
   double input = 2.15039;
   input += synapse0x2de2b60();
   input += synapse0x2de2ba0();
   input += synapse0x2de2be0();
   input += synapse0x2de2c20();
   input += synapse0x2de2c60();
   input += synapse0x2de2ca0();
   input += synapse0x2de2ce0();
   input += synapse0x2de2d20();
   input += synapse0x2de2d60();
   input += synapse0x2de2da0();
   input += synapse0x2de2de0();
   input += synapse0x2de2e20();
   input += synapse0x2de2e60();
   input += synapse0x2de2ea0();
   input += synapse0x2de2ee0();
   input += synapse0x2de2f20();
   input += synapse0x2de29b0();
   input += synapse0x2de29f0();
   input += synapse0x2de3070();
   input += synapse0x2de30b0();
   input += synapse0x2de30f0();
   input += synapse0x2de3130();
   input += synapse0x2de3170();
   input += synapse0x2de31b0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2de2820() {
   double input = input0x2de2820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2de31f0() {
   double input = 1.57514;
   input += synapse0x2de3530();
   input += synapse0x2de3570();
   input += synapse0x2de35b0();
   input += synapse0x2de35f0();
   input += synapse0x2de3630();
   input += synapse0x2de3670();
   input += synapse0x2de36b0();
   input += synapse0x2de36f0();
   input += synapse0x2de3730();
   input += synapse0x2de3770();
   input += synapse0x2de37b0();
   input += synapse0x2de37f0();
   input += synapse0x2de3830();
   input += synapse0x2de3870();
   input += synapse0x2de38b0();
   input += synapse0x2de38f0();
   input += synapse0x2de3380();
   input += synapse0x2de33c0();
   input += synapse0x2de3a40();
   input += synapse0x2de3a80();
   input += synapse0x2de3ac0();
   input += synapse0x2de3b00();
   input += synapse0x2de3b40();
   input += synapse0x2de3b80();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2de31f0() {
   double input = input0x2de31f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2de3bc0() {
   double input = -5.85967;
   input += synapse0x2de3f00();
   input += synapse0x2dd84d0();
   input += synapse0x2dd8510();
   input += synapse0x2dd8550();
   input += synapse0x2dd87a0();
   input += synapse0x2dd87e0();
   input += synapse0x2dd8820();
   input += synapse0x2dd8a70();
   input += synapse0x2dd8ab0();
   input += synapse0x2dd8d00();
   input += synapse0x2dd8d40();
   input += synapse0x2dd8d80();
   input += synapse0x2dd8fd0();
   input += synapse0x2dd9010();
   input += synapse0x2dd9260();
   input += synapse0x2dd92a0();
   input += synapse0x2de3d50();
   input += synapse0x2de3d90();
   input += synapse0x2dd93f0();
   input += synapse0x2dd9900();
   input += synapse0x2dd9940();
   input += synapse0x2dd9980();
   input += synapse0x2dd9bd0();
   input += synapse0x2dd9c10();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2de3bc0() {
   double input = input0x2de3bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dd9c50() {
   double input = -0.118239;
   input += synapse0x2dd94c0();
   input += synapse0x2dd9500();
   input += synapse0x2dd9540();
   input += synapse0x2dd9580();
   input += synapse0x2dd9f00();
   input += synapse0x2de6250();
   input += synapse0x2de6290();
   input += synapse0x2de62d0();
   input += synapse0x2de6310();
   input += synapse0x2de6350();
   input += synapse0x2de6390();
   input += synapse0x2de63d0();
   input += synapse0x2de6410();
   input += synapse0x2de6450();
   input += synapse0x2de6490();
   input += synapse0x2de64d0();
   input += synapse0x2dd9de0();
   input += synapse0x2dd9e20();
   input += synapse0x2de6620();
   input += synapse0x2de6660();
   input += synapse0x2de66a0();
   input += synapse0x2de66e0();
   input += synapse0x2de6720();
   input += synapse0x2de6760();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dd9c50() {
   double input = input0x2dd9c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2de67a0() {
   double input = 0.655217;
   input += synapse0x2de6ae0();
   input += synapse0x2de6b20();
   input += synapse0x2de6b60();
   input += synapse0x2de6ba0();
   input += synapse0x2de6be0();
   input += synapse0x2de6c20();
   input += synapse0x2de6c60();
   input += synapse0x2de6ca0();
   input += synapse0x2de6ce0();
   input += synapse0x2de6d20();
   input += synapse0x2de6d60();
   input += synapse0x2de6da0();
   input += synapse0x2de6de0();
   input += synapse0x2de6e20();
   input += synapse0x2de6e60();
   input += synapse0x2de6ea0();
   input += synapse0x2de6930();
   input += synapse0x2de6970();
   input += synapse0x2de6ff0();
   input += synapse0x2de7030();
   input += synapse0x2de7070();
   input += synapse0x2de70b0();
   input += synapse0x2de70f0();
   input += synapse0x2de7130();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2de67a0() {
   double input = input0x2de67a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2de7170() {
   double input = 2.41559;
   input += synapse0x2de74b0();
   input += synapse0x2de74f0();
   input += synapse0x2de7530();
   input += synapse0x2de7570();
   input += synapse0x2de75b0();
   input += synapse0x2de75f0();
   input += synapse0x2de7630();
   input += synapse0x2de7670();
   input += synapse0x2de76b0();
   input += synapse0x2de76f0();
   input += synapse0x2de7730();
   input += synapse0x2de7770();
   input += synapse0x2de77b0();
   input += synapse0x2de77f0();
   input += synapse0x2de7830();
   input += synapse0x2de7870();
   input += synapse0x2de7300();
   input += synapse0x2de7340();
   input += synapse0x2de79c0();
   input += synapse0x2de7a00();
   input += synapse0x2de7a40();
   input += synapse0x2de7a80();
   input += synapse0x2de7ac0();
   input += synapse0x2de7b00();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2de7170() {
   double input = input0x2de7170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2de7b40() {
   double input = -0.153598;
   input += synapse0x2de7e80();
   input += synapse0x2de7ec0();
   input += synapse0x2de7f00();
   input += synapse0x2de7f40();
   input += synapse0x2de7f80();
   input += synapse0x2de7fc0();
   input += synapse0x2de8000();
   input += synapse0x2de8040();
   input += synapse0x2de8080();
   input += synapse0x2de80c0();
   input += synapse0x2de8100();
   input += synapse0x2de8140();
   input += synapse0x2de8180();
   input += synapse0x2de81c0();
   input += synapse0x2de8200();
   input += synapse0x2de8240();
   input += synapse0x2de7cd0();
   input += synapse0x2de7d10();
   input += synapse0x2de8390();
   input += synapse0x2de83d0();
   input += synapse0x2de8410();
   input += synapse0x2de8450();
   input += synapse0x2de8490();
   input += synapse0x2de84d0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2de7b40() {
   double input = input0x2de7b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2de8510() {
   double input = -1.0025;
   input += synapse0x2de8850();
   input += synapse0x2de8890();
   input += synapse0x2de88d0();
   input += synapse0x2de8910();
   input += synapse0x2de8950();
   input += synapse0x2de8990();
   input += synapse0x2de89d0();
   input += synapse0x2de8a10();
   input += synapse0x2de8a50();
   input += synapse0x2de8a90();
   input += synapse0x2de8ad0();
   input += synapse0x2de8b10();
   input += synapse0x2de8b50();
   input += synapse0x2de8b90();
   input += synapse0x2de8bd0();
   input += synapse0x2de8c10();
   input += synapse0x2de86a0();
   input += synapse0x2de86e0();
   input += synapse0x2de8d60();
   input += synapse0x2de8da0();
   input += synapse0x2de8de0();
   input += synapse0x2de8e20();
   input += synapse0x2de8e60();
   input += synapse0x2de8ea0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2de8510() {
   double input = input0x2de8510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2de8ee0() {
   double input = -1.29416;
   input += synapse0x2de9220();
   input += synapse0x2de9260();
   input += synapse0x2de92a0();
   input += synapse0x2de92e0();
   input += synapse0x2de9320();
   input += synapse0x2de9360();
   input += synapse0x2de93a0();
   input += synapse0x2de93e0();
   input += synapse0x2de9420();
   input += synapse0x2de9460();
   input += synapse0x2de94a0();
   input += synapse0x2de94e0();
   input += synapse0x2de9520();
   input += synapse0x2de9560();
   input += synapse0x2de95a0();
   input += synapse0x2de95e0();
   input += synapse0x2de9070();
   input += synapse0x2de90b0();
   input += synapse0x2de9730();
   input += synapse0x2de9770();
   input += synapse0x2de97b0();
   input += synapse0x2de97f0();
   input += synapse0x2de9830();
   input += synapse0x2de9870();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2de8ee0() {
   double input = input0x2de8ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2de98b0() {
   double input = 0.122688;
   input += synapse0x2de9bf0();
   input += synapse0x2de9c30();
   input += synapse0x2de9c70();
   input += synapse0x2de9cb0();
   input += synapse0x2de9cf0();
   input += synapse0x2de9d30();
   input += synapse0x2de9d70();
   input += synapse0x2de9db0();
   input += synapse0x2de9df0();
   input += synapse0x2de9e30();
   input += synapse0x2de9e70();
   input += synapse0x2de9eb0();
   input += synapse0x2de9ef0();
   input += synapse0x2de9f30();
   input += synapse0x2de9f70();
   input += synapse0x2de9fb0();
   input += synapse0x2de9a40();
   input += synapse0x2de9a80();
   input += synapse0x2dea100();
   input += synapse0x2dea140();
   input += synapse0x2dea180();
   input += synapse0x2dea1c0();
   input += synapse0x2dea200();
   input += synapse0x2dea240();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2de98b0() {
   double input = input0x2de98b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dea280() {
   double input = -1.29645;
   input += synapse0x2dea5c0();
   input += synapse0x2dea600();
   input += synapse0x2dea640();
   input += synapse0x2dea680();
   input += synapse0x2dea6c0();
   input += synapse0x2dea700();
   input += synapse0x2dea740();
   input += synapse0x2dea780();
   input += synapse0x2dea7c0();
   input += synapse0x2dea800();
   input += synapse0x2dea840();
   input += synapse0x2dea880();
   input += synapse0x2dea8c0();
   input += synapse0x2dea900();
   input += synapse0x2dea940();
   input += synapse0x2dea980();
   input += synapse0x2dea410();
   input += synapse0x2dea450();
   input += synapse0x2deaad0();
   input += synapse0x2deab10();
   input += synapse0x2deab50();
   input += synapse0x2deab90();
   input += synapse0x2deabd0();
   input += synapse0x2deac10();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dea280() {
   double input = input0x2dea280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2deac50() {
   double input = 0.406946;
   input += synapse0x2dd36c0();
   input += synapse0x2dd3700();
   input += synapse0x2dd3740();
   input += synapse0x2dd3780();
   input += synapse0x2dd37c0();
   input += synapse0x2dd3800();
   input += synapse0x2dd3840();
   input += synapse0x2dd3880();
   input += synapse0x2deb3a0();
   input += synapse0x2deb3e0();
   input += synapse0x2deb420();
   input += synapse0x2deb460();
   input += synapse0x2deb4a0();
   input += synapse0x2deb4e0();
   input += synapse0x2deb520();
   input += synapse0x2deb560();
   input += synapse0x2deade0();
   input += synapse0x2deae20();
   input += synapse0x2deb6b0();
   input += synapse0x2deb6f0();
   input += synapse0x2deb730();
   input += synapse0x2deb770();
   input += synapse0x2deb7b0();
   input += synapse0x2deb7f0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2deac50() {
   double input = input0x2deac50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2deb830() {
   double input = 0.141064;
   input += synapse0x2debb70();
   input += synapse0x2debbb0();
   input += synapse0x2debbf0();
   input += synapse0x2debc30();
   input += synapse0x2debc70();
   input += synapse0x2debcb0();
   input += synapse0x2debcf0();
   input += synapse0x2debd30();
   input += synapse0x2debd70();
   input += synapse0x2debdb0();
   input += synapse0x2debdf0();
   input += synapse0x2debe30();
   input += synapse0x2debe70();
   input += synapse0x2debeb0();
   input += synapse0x2debef0();
   input += synapse0x2debf30();
   input += synapse0x2deb9c0();
   input += synapse0x2deba00();
   input += synapse0x2dec080();
   input += synapse0x2dec0c0();
   input += synapse0x2dec100();
   input += synapse0x2dec140();
   input += synapse0x2dec180();
   input += synapse0x2dec1c0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2deb830() {
   double input = input0x2deb830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dec200() {
   double input = 1.09353;
   input += synapse0x2dec540();
   input += synapse0x2dec580();
   input += synapse0x2dec5c0();
   input += synapse0x2dec600();
   input += synapse0x2dec640();
   input += synapse0x2dec680();
   input += synapse0x2dec6c0();
   input += synapse0x2dec700();
   input += synapse0x2dec740();
   input += synapse0x2dec780();
   input += synapse0x2dec7c0();
   input += synapse0x2dec800();
   input += synapse0x2dec840();
   input += synapse0x2dec880();
   input += synapse0x2dec8c0();
   input += synapse0x2dec900();
   input += synapse0x2dec390();
   input += synapse0x2dec3d0();
   input += synapse0x2ddcf00();
   input += synapse0x2ddcf40();
   input += synapse0x2ddcf80();
   input += synapse0x2ddcfc0();
   input += synapse0x2ddd000();
   input += synapse0x2ddd040();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dec200() {
   double input = input0x2dec200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2ddd080() {
   double input = 2.74529;
   input += synapse0x2ddd3c0();
   input += synapse0x2ddd400();
   input += synapse0x2ddd440();
   input += synapse0x2ddd480();
   input += synapse0x2ddd4c0();
   input += synapse0x2ddd500();
   input += synapse0x2ddd540();
   input += synapse0x2ddd580();
   input += synapse0x2ddd5c0();
   input += synapse0x2ddd600();
   input += synapse0x2ddd640();
   input += synapse0x2ddd680();
   input += synapse0x2ddd6c0();
   input += synapse0x2ddd700();
   input += synapse0x2ddd740();
   input += synapse0x2ddd780();
   input += synapse0x2ddd210();
   input += synapse0x2ddd250();
   input += synapse0x2ddd8d0();
   input += synapse0x2ddd910();
   input += synapse0x2ddd950();
   input += synapse0x2ddd990();
   input += synapse0x2ddd9d0();
   input += synapse0x2ddda10();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2ddd080() {
   double input = input0x2ddd080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2ddda50() {
   double input = -0.230877;
   input += synapse0x2dddd90();
   input += synapse0x2ddddd0();
   input += synapse0x2ddde10();
   input += synapse0x2ddde50();
   input += synapse0x2ddde90();
   input += synapse0x2ddded0();
   input += synapse0x2dddf10();
   input += synapse0x2dddf50();
   input += synapse0x2dddf90();
   input += synapse0x2dddfd0();
   input += synapse0x2dde010();
   input += synapse0x2dde050();
   input += synapse0x2dde090();
   input += synapse0x2dde0d0();
   input += synapse0x2dde110();
   input += synapse0x2dde150();
   input += synapse0x2dddbe0();
   input += synapse0x2dddc20();
   input += synapse0x2dde2a0();
   input += synapse0x2dde2e0();
   input += synapse0x2dde320();
   input += synapse0x2dde360();
   input += synapse0x2dde3a0();
   input += synapse0x2dde3e0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2ddda50() {
   double input = input0x2ddda50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dde420() {
   double input = 2.79296;
   input += synapse0x2dde760();
   input += synapse0x2dde7a0();
   input += synapse0x2dde7e0();
   input += synapse0x2dde820();
   input += synapse0x2dde860();
   input += synapse0x2dde8a0();
   input += synapse0x2dde8e0();
   input += synapse0x2dde920();
   input += synapse0x2dde960();
   input += synapse0x2dde9a0();
   input += synapse0x2dde9e0();
   input += synapse0x2ddea20();
   input += synapse0x2ddea60();
   input += synapse0x2ddeaa0();
   input += synapse0x2ddeae0();
   input += synapse0x2ddeb20();
   input += synapse0x2dde5b0();
   input += synapse0x2dde5f0();
   input += synapse0x2ddec70();
   input += synapse0x2ddecb0();
   input += synapse0x2ddecf0();
   input += synapse0x2dded30();
   input += synapse0x2dded70();
   input += synapse0x2ddedb0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dde420() {
   double input = input0x2dde420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2df0a60() {
   double input = -0.713919;
   input += synapse0x2df0c80();
   input += synapse0x2df0cc0();
   input += synapse0x2df0d00();
   input += synapse0x2df0d40();
   input += synapse0x2df0d80();
   input += synapse0x2df0dc0();
   input += synapse0x2df0e00();
   input += synapse0x2df0e40();
   input += synapse0x2df0e80();
   input += synapse0x2df0ec0();
   input += synapse0x2df0f00();
   input += synapse0x2df0f40();
   input += synapse0x2df0f80();
   input += synapse0x2df0fc0();
   input += synapse0x2df1000();
   input += synapse0x2df1040();
   input += synapse0x2ddedf0();
   input += synapse0x2ddee30();
   input += synapse0x2df1190();
   input += synapse0x2df11d0();
   input += synapse0x2df1210();
   input += synapse0x2df1250();
   input += synapse0x2df1290();
   input += synapse0x2df12d0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2df0a60() {
   double input = input0x2df0a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2df1310() {
   double input = -0.961451;
   input += synapse0x2df1650();
   input += synapse0x2df1690();
   input += synapse0x2df16d0();
   input += synapse0x2df1710();
   input += synapse0x2df1750();
   input += synapse0x2df1790();
   input += synapse0x2df17d0();
   input += synapse0x2df1810();
   input += synapse0x2df1850();
   input += synapse0x2df1890();
   input += synapse0x2df18d0();
   input += synapse0x2df1910();
   input += synapse0x2df1950();
   input += synapse0x2df1990();
   input += synapse0x2df19d0();
   input += synapse0x2df1a10();
   input += synapse0x2df14a0();
   input += synapse0x2df14e0();
   input += synapse0x2df1b60();
   input += synapse0x2df1ba0();
   input += synapse0x2df1be0();
   input += synapse0x2df1c20();
   input += synapse0x2df1c60();
   input += synapse0x2df1ca0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2df1310() {
   double input = input0x2df1310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2df1ce0() {
   double input = -1.11421;
   input += synapse0x2df2020();
   input += synapse0x2df2060();
   input += synapse0x2df20a0();
   input += synapse0x2df20e0();
   input += synapse0x2df2120();
   input += synapse0x2df2160();
   input += synapse0x2df21a0();
   input += synapse0x2df21e0();
   input += synapse0x2df2220();
   input += synapse0x2df2260();
   input += synapse0x2df22a0();
   input += synapse0x2df22e0();
   input += synapse0x2df2320();
   input += synapse0x2df2360();
   input += synapse0x2df23a0();
   input += synapse0x2df23e0();
   input += synapse0x2df1e70();
   input += synapse0x2df1eb0();
   input += synapse0x2df2530();
   input += synapse0x2df2570();
   input += synapse0x2df25b0();
   input += synapse0x2df25f0();
   input += synapse0x2df2630();
   input += synapse0x2df2670();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2df1ce0() {
   double input = input0x2df1ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2df26b0() {
   double input = -0.173738;
   input += synapse0x2df29f0();
   input += synapse0x2df2a30();
   input += synapse0x2df2a70();
   input += synapse0x2df2ab0();
   input += synapse0x2df2af0();
   input += synapse0x2df2b30();
   input += synapse0x2df2b70();
   input += synapse0x2df2bb0();
   input += synapse0x2df2bf0();
   input += synapse0x2df2c30();
   input += synapse0x2df2c70();
   input += synapse0x2df2cb0();
   input += synapse0x2df2cf0();
   input += synapse0x2df2d30();
   input += synapse0x2df2d70();
   input += synapse0x2df2db0();
   input += synapse0x2df2840();
   input += synapse0x2df2880();
   input += synapse0x2df2f00();
   input += synapse0x2df2f40();
   input += synapse0x2df2f80();
   input += synapse0x2df2fc0();
   input += synapse0x2df3000();
   input += synapse0x2df3040();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2df26b0() {
   double input = input0x2df26b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2df98b0() {
   double input = -0.0739825;
   input += synapse0x2dcf5e0();
   input += synapse0x2dcf620();
   input += synapse0x2dd0af0();
   input += synapse0x2dd0b30();
   input += synapse0x2dd14c0();
   input += synapse0x2dd1500();
   input += synapse0x2dd2290();
   input += synapse0x2dd22d0();
   input += synapse0x2dd2c60();
   input += synapse0x2dd2ca0();
   input += synapse0x2dd3630();
   input += synapse0x2dd3670();
   input += synapse0x2dd4110();
   input += synapse0x2dd4150();
   input += synapse0x2dd4ae0();
   input += synapse0x2dd4b20();
   input += synapse0x2dd1bc0();
   input += synapse0x2dd1c00();
   input += synapse0x2dd6690();
   input += synapse0x2dd66d0();
   input += synapse0x2dd7060();
   input += synapse0x2dd70a0();
   input += synapse0x2dd7a30();
   input += synapse0x2dd7a70();
   input += synapse0x2dd8400();
   input += synapse0x2dd8440();
   input += synapse0x2dcc570();
   input += synapse0x2dcc5b0();
   input += synapse0x2dda4f0();
   input += synapse0x2dda530();
   input += synapse0x2ddaec0();
   input += synapse0x2ddaf00();
   input += synapse0x2ddb890();
   input += synapse0x2ddb8d0();
   input += synapse0x2ddc260();
   input += synapse0x2ddc2a0();
   input += synapse0x2ddcc30();
   input += synapse0x2ddcc70();
   input += synapse0x2dd5780();
   input += synapse0x2dd57c0();
   input += synapse0x2ddf030();
   input += synapse0x2ddf070();
   input += synapse0x2ddf9c0();
   input += synapse0x2ddfa00();
   input += synapse0x2de0390();
   input += synapse0x2de03d0();
   input += synapse0x2de0d60();
   input += synapse0x2de0da0();
   input += synapse0x2de1730();
   input += synapse0x2de1770();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2df98b0() {
   double input = input0x2df98b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2df9c50() {
   double input = 0.514357;
   input += synapse0x2de3e70();
   input += synapse0x2de3eb0();
   input += synapse0x2dd9430();
   input += synapse0x2dd9470();
   input += synapse0x2de6a50();
   input += synapse0x2de6a90();
   input += synapse0x2de7420();
   input += synapse0x2de7460();
   input += synapse0x2de7df0();
   input += synapse0x2de7e30();
   input += synapse0x2de87c0();
   input += synapse0x2de8800();
   input += synapse0x2de9190();
   input += synapse0x2de91d0();
   input += synapse0x2de9b60();
   input += synapse0x2de9ba0();
   input += synapse0x2dea530();
   input += synapse0x2dea570();
   input += synapse0x2deaf00();
   input += synapse0x2deaf40();
   input += synapse0x2debae0();
   input += synapse0x2debb20();
   input += synapse0x2dec4b0();
   input += synapse0x2dec4f0();
   input += synapse0x2ddd330();
   input += synapse0x2ddd370();
   input += synapse0x2dddd00();
   input += synapse0x2dddd40();
   input += synapse0x2dde6d0();
   input += synapse0x2dde710();
   input += synapse0x2df0bf0();
   input += synapse0x2df0c30();
   input += synapse0x2df15c0();
   input += synapse0x2df1600();
   input += synapse0x2df1f90();
   input += synapse0x2df1fd0();
   input += synapse0x2df2960();
   input += synapse0x2df29a0();
   input += synapse0x2dce850();
   input += synapse0x2dce890();
   input += synapse0x2de2100();
   input += synapse0x2de2140();
   input += synapse0x2df3080();
   input += synapse0x2df30c0();
   input += synapse0x2df3100();
   input += synapse0x2df3140();
   input += synapse0x2df9ff0();
   input += synapse0x2dfa030();
   input += synapse0x2dfa070();
   input += synapse0x2dfa0b0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2df9c50() {
   double input = input0x2df9c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dfa0f0() {
   double input = 0.376998;
   input += synapse0x2dfa430();
   input += synapse0x2dfa470();
   input += synapse0x2dfa4b0();
   input += synapse0x2dfa4f0();
   input += synapse0x2dfa530();
   input += synapse0x2dfa570();
   input += synapse0x2dfa5b0();
   input += synapse0x2dfa5f0();
   input += synapse0x2dfa630();
   input += synapse0x2dfa670();
   input += synapse0x2dfa6b0();
   input += synapse0x2dfa6f0();
   input += synapse0x2dfa730();
   input += synapse0x2dfa770();
   input += synapse0x2dfa7b0();
   input += synapse0x2dfa7f0();
   input += synapse0x2dfa280();
   input += synapse0x2dfa2c0();
   input += synapse0x2dfa940();
   input += synapse0x2dfa980();
   input += synapse0x2dfa9c0();
   input += synapse0x2dfaa00();
   input += synapse0x2dfaa40();
   input += synapse0x2dfaa80();
   input += synapse0x2dfaac0();
   input += synapse0x2dfab00();
   input += synapse0x2dfab40();
   input += synapse0x2dfab80();
   input += synapse0x2dfabc0();
   input += synapse0x2dfac00();
   input += synapse0x2dfac40();
   input += synapse0x2dfac80();
   input += synapse0x2dfa830();
   input += synapse0x2dfa870();
   input += synapse0x2dfa8b0();
   input += synapse0x2dfa8f0();
   input += synapse0x2dfaed0();
   input += synapse0x2dfaf10();
   input += synapse0x2dfaf50();
   input += synapse0x2dfaf90();
   input += synapse0x2dfafd0();
   input += synapse0x2dfb010();
   input += synapse0x2dfb050();
   input += synapse0x2dfb090();
   input += synapse0x2dfb0d0();
   input += synapse0x2dfb110();
   input += synapse0x2dfb150();
   input += synapse0x2dfb190();
   input += synapse0x2dfb1d0();
   input += synapse0x2dfb210();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dfa0f0() {
   double input = input0x2dfa0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dfb250() {
   double input = -1.3681;
   input += synapse0x2dfb590();
   input += synapse0x2dfb5d0();
   input += synapse0x2dfb610();
   input += synapse0x2dfb650();
   input += synapse0x2dfb690();
   input += synapse0x2dfb6d0();
   input += synapse0x2dfb710();
   input += synapse0x2dfb750();
   input += synapse0x2dfb790();
   input += synapse0x2dfb7d0();
   input += synapse0x2dfb810();
   input += synapse0x2dfb850();
   input += synapse0x2dfb890();
   input += synapse0x2dfb8d0();
   input += synapse0x2dfb910();
   input += synapse0x2dfb950();
   input += synapse0x2dfb3e0();
   input += synapse0x2dfb420();
   input += synapse0x2dfbaa0();
   input += synapse0x2dfbae0();
   input += synapse0x2dfbb20();
   input += synapse0x2dfbb60();
   input += synapse0x2dfbba0();
   input += synapse0x2dfbbe0();
   input += synapse0x2dfbc20();
   input += synapse0x2dfbc60();
   input += synapse0x2dfbca0();
   input += synapse0x2dfbce0();
   input += synapse0x2dfbd20();
   input += synapse0x2dfbd60();
   input += synapse0x2dfbda0();
   input += synapse0x2dfbde0();
   input += synapse0x2dfb990();
   input += synapse0x2dfb9d0();
   input += synapse0x2dfba10();
   input += synapse0x2dfba50();
   input += synapse0x2dfc030();
   input += synapse0x2dfc070();
   input += synapse0x2dfc0b0();
   input += synapse0x2dfc0f0();
   input += synapse0x2dfc130();
   input += synapse0x2dfc170();
   input += synapse0x2dfc1b0();
   input += synapse0x2dfc1f0();
   input += synapse0x2dfc230();
   input += synapse0x2dfc270();
   input += synapse0x2dfc2b0();
   input += synapse0x2dfc2f0();
   input += synapse0x2dfc330();
   input += synapse0x2dfc370();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dfb250() {
   double input = input0x2dfb250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dfc3b0() {
   double input = -0.313913;
   input += synapse0x2dfc6f0();
   input += synapse0x2dfc730();
   input += synapse0x2dfc770();
   input += synapse0x2dfc7b0();
   input += synapse0x2dfc7f0();
   input += synapse0x2dfc830();
   input += synapse0x2dfc870();
   input += synapse0x2dfc8b0();
   input += synapse0x2dfc8f0();
   input += synapse0x2dfc930();
   input += synapse0x2dfc970();
   input += synapse0x2dfc9b0();
   input += synapse0x2dfc9f0();
   input += synapse0x2dfca30();
   input += synapse0x2dfca70();
   input += synapse0x2dfcab0();
   input += synapse0x2dfc540();
   input += synapse0x2dfc580();
   input += synapse0x2dfcc00();
   input += synapse0x2dfcc40();
   input += synapse0x2dfcc80();
   input += synapse0x2dfccc0();
   input += synapse0x2dfcd00();
   input += synapse0x2dfcd40();
   input += synapse0x2dfcd80();
   input += synapse0x2dfcdc0();
   input += synapse0x2dfce00();
   input += synapse0x2dfce40();
   input += synapse0x2dfce80();
   input += synapse0x2dfcec0();
   input += synapse0x2dfcf00();
   input += synapse0x2dfcf40();
   input += synapse0x2dfcaf0();
   input += synapse0x2dfcb30();
   input += synapse0x2dfcb70();
   input += synapse0x2dfcbb0();
   input += synapse0x2dfd190();
   input += synapse0x2dfd1d0();
   input += synapse0x2dfd210();
   input += synapse0x2dfd250();
   input += synapse0x2dfd290();
   input += synapse0x2dfd2d0();
   input += synapse0x2dfd310();
   input += synapse0x2dfd350();
   input += synapse0x2dfd390();
   input += synapse0x2dfd3d0();
   input += synapse0x2dfd410();
   input += synapse0x2dfd450();
   input += synapse0x2dfd490();
   input += synapse0x2dfd4d0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dfc3b0() {
   double input = input0x2dfc3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuL::input0x2dfd510() {
   double input = -1.82206;
   input += synapse0x2dce5f0();
   input += synapse0x2dfd730();
   input += synapse0x2dfd770();
   input += synapse0x2dfd7b0();
   input += synapse0x2dfd7f0();
   return input;
}

double NNfunction_ss_uLuL::neuron0x2dfd510() {
   double input = input0x2dfd510();
   return (input * 1)+0;
}

double NNfunction_ss_uLuL::synapse0x2b89440() {
   return (neuron0x2dc95d0()*0.0835175);
}

double NNfunction_ss_uLuL::synapse0x2dc9490() {
   return (neuron0x2dc9910()*-0.0844086);
}

double NNfunction_ss_uLuL::synapse0x2dc94d0() {
   return (neuron0x2dc9c50()*0.420785);
}

double NNfunction_ss_uLuL::synapse0x2dce8e0() {
   return (neuron0x2dc9f90()*-0.0733731);
}

double NNfunction_ss_uLuL::synapse0x2dce920() {
   return (neuron0x2dca2d0()*0.0401842);
}

double NNfunction_ss_uLuL::synapse0x2dce960() {
   return (neuron0x2dca610()*-0.379319);
}

double NNfunction_ss_uLuL::synapse0x2dce9a0() {
   return (neuron0x2dca950()*-0.436381);
}

double NNfunction_ss_uLuL::synapse0x2dce9e0() {
   return (neuron0x2dcac90()*0.31008);
}

double NNfunction_ss_uLuL::synapse0x2dcea20() {
   return (neuron0x2dcafd0()*0.117639);
}

double NNfunction_ss_uLuL::synapse0x2dcea60() {
   return (neuron0x2dcb310()*-0.72087);
}

double NNfunction_ss_uLuL::synapse0x2dceaa0() {
   return (neuron0x2dcb650()*0.303299);
}

double NNfunction_ss_uLuL::synapse0x2dceae0() {
   return (neuron0x2dcb990()*0.125517);
}

double NNfunction_ss_uLuL::synapse0x2dceb20() {
   return (neuron0x2dcbcd0()*1.20132);
}

double NNfunction_ss_uLuL::synapse0x2dceb60() {
   return (neuron0x2dcc010()*0.789557);
}

double NNfunction_ss_uLuL::synapse0x2dceba0() {
   return (neuron0x2dcc350()*0.595468);
}

double NNfunction_ss_uLuL::synapse0x2dcebe0() {
   return (neuron0x2dcc690()*0.456544);
}

double NNfunction_ss_uLuL::synapse0x2dc9400() {
   return (neuron0x2dcc9d0()*0.462807);
}

double NNfunction_ss_uLuL::synapse0x2dc9440() {
   return (neuron0x2dccf30()*0.525101);
}

double NNfunction_ss_uLuL::synapse0x2b7ad40() {
   return (neuron0x2dcd150()*-0.0920972);
}

double NNfunction_ss_uLuL::synapse0x2b7ad80() {
   return (neuron0x2dcd490()*0.401281);
}

double NNfunction_ss_uLuL::synapse0x2dcee40() {
   return (neuron0x2dcd7d0()*0.219855);
}

double NNfunction_ss_uLuL::synapse0x2dcee80() {
   return (neuron0x2dcdb10()*-0.129865);
}

double NNfunction_ss_uLuL::synapse0x2dceec0() {
   return (neuron0x2dcde50()*-0.468228);
}

double NNfunction_ss_uLuL::synapse0x2dcef00() {
   return (neuron0x2dce190()*-0.354239);
}

double NNfunction_ss_uLuL::synapse0x2dcf280() {
   return (neuron0x2dc95d0()*0.0877945);
}

double NNfunction_ss_uLuL::synapse0x2dcf2c0() {
   return (neuron0x2dc9910()*-0.115857);
}

double NNfunction_ss_uLuL::synapse0x2dcf300() {
   return (neuron0x2dc9c50()*-0.343182);
}

double NNfunction_ss_uLuL::synapse0x2dcf340() {
   return (neuron0x2dc9f90()*-0.105686);
}

double NNfunction_ss_uLuL::synapse0x2dcf380() {
   return (neuron0x2dca2d0()*0.722664);
}

double NNfunction_ss_uLuL::synapse0x2dcf3c0() {
   return (neuron0x2dca610()*-0.17517);
}

double NNfunction_ss_uLuL::synapse0x2dcf400() {
   return (neuron0x2dca950()*0.956094);
}

double NNfunction_ss_uLuL::synapse0x2dcf440() {
   return (neuron0x2dcac90()*0.616431);
}

double NNfunction_ss_uLuL::synapse0x2dcf480() {
   return (neuron0x2dcafd0()*-0.15007);
}

double NNfunction_ss_uLuL::synapse0x2dced30() {
   return (neuron0x2dcb310()*0.270022);
}

double NNfunction_ss_uLuL::synapse0x2dced70() {
   return (neuron0x2dcb650()*-0.396906);
}

double NNfunction_ss_uLuL::synapse0x2dcedb0() {
   return (neuron0x2dcb990()*-1.01667);
}

double NNfunction_ss_uLuL::synapse0x2dcedf0() {
   return (neuron0x2dcbcd0()*0.61521);
}

double NNfunction_ss_uLuL::synapse0x2dcf6d0() {
   return (neuron0x2dcc010()*-0.606135);
}

double NNfunction_ss_uLuL::synapse0x2dcf710() {
   return (neuron0x2dcc350()*-0.912035);
}

double NNfunction_ss_uLuL::synapse0x2dcf750() {
   return (neuron0x2dcc690()*-0.417249);
}

double NNfunction_ss_uLuL::synapse0x2dcf0d0() {
   return (neuron0x2dcc9d0()*0.863286);
}

double NNfunction_ss_uLuL::synapse0x2dcf110() {
   return (neuron0x2dccf30()*0.192409);
}

double NNfunction_ss_uLuL::synapse0x2dcf8a0() {
   return (neuron0x2dcd150()*-0.472135);
}

double NNfunction_ss_uLuL::synapse0x2dcf8e0() {
   return (neuron0x2dcd490()*-0.176576);
}

double NNfunction_ss_uLuL::synapse0x2dcf920() {
   return (neuron0x2dcd7d0()*0.352864);
}

double NNfunction_ss_uLuL::synapse0x2dcf960() {
   return (neuron0x2dcdb10()*-0.142081);
}

double NNfunction_ss_uLuL::synapse0x2dcf9a0() {
   return (neuron0x2dcde50()*0.0388727);
}

double NNfunction_ss_uLuL::synapse0x2dcf9e0() {
   return (neuron0x2dce190()*-0.292818);
}

double NNfunction_ss_uLuL::synapse0x2dcfd60() {
   return (neuron0x2dc95d0()*-0.0114393);
}

double NNfunction_ss_uLuL::synapse0x2dcfda0() {
   return (neuron0x2dc9910()*0.330434);
}

double NNfunction_ss_uLuL::synapse0x2dcfde0() {
   return (neuron0x2dc9c50()*1.09183);
}

double NNfunction_ss_uLuL::synapse0x2dcfe20() {
   return (neuron0x2dc9f90()*0.546399);
}

double NNfunction_ss_uLuL::synapse0x2dcfe60() {
   return (neuron0x2dca2d0()*0.394399);
}

double NNfunction_ss_uLuL::synapse0x2dcfea0() {
   return (neuron0x2dca610()*0.0357857);
}

double NNfunction_ss_uLuL::synapse0x2dcfee0() {
   return (neuron0x2dca950()*-0.114904);
}

double NNfunction_ss_uLuL::synapse0x2dcff20() {
   return (neuron0x2dcac90()*-0.183061);
}

double NNfunction_ss_uLuL::synapse0x2dcff60() {
   return (neuron0x2dcafd0()*-0.149946);
}

double NNfunction_ss_uLuL::synapse0x2dcffa0() {
   return (neuron0x2dcb310()*0.306874);
}

double NNfunction_ss_uLuL::synapse0x2dcffe0() {
   return (neuron0x2dcb650()*-0.107948);
}

double NNfunction_ss_uLuL::synapse0x2dd0020() {
   return (neuron0x2dcb990()*0.89181);
}

double NNfunction_ss_uLuL::synapse0x2dd0060() {
   return (neuron0x2dcbcd0()*0.327398);
}

double NNfunction_ss_uLuL::synapse0x2dd00a0() {
   return (neuron0x2dcc010()*-0.482458);
}

double NNfunction_ss_uLuL::synapse0x2dd00e0() {
   return (neuron0x2dcc350()*-0.0406363);
}

double NNfunction_ss_uLuL::synapse0x2dd0120() {
   return (neuron0x2dcc690()*0.14573);
}

double NNfunction_ss_uLuL::synapse0x2dcfbb0() {
   return (neuron0x2dcc9d0()*-0.460303);
}

double NNfunction_ss_uLuL::synapse0x2dcfbf0() {
   return (neuron0x2dccf30()*-0.0140011);
}

double NNfunction_ss_uLuL::synapse0x2b88b30() {
   return (neuron0x2dcd150()*0.27892);
}

double NNfunction_ss_uLuL::synapse0x2b88b70() {
   return (neuron0x2dcd490()*0.366063);
}

double NNfunction_ss_uLuL::synapse0x2db8660() {
   return (neuron0x2dcd7d0()*-0.127424);
}

double NNfunction_ss_uLuL::synapse0x2db86a0() {
   return (neuron0x2dcdb10()*0.100617);
}

double NNfunction_ss_uLuL::synapse0x2db86e0() {
   return (neuron0x2dcde50()*0.0962008);
}

double NNfunction_ss_uLuL::synapse0x2dc9510() {
   return (neuron0x2dce190()*0.113696);
}

double NNfunction_ss_uLuL::synapse0x2dcf670() {
   return (neuron0x2dc95d0()*-0.373769);
}

double NNfunction_ss_uLuL::synapse0x2dc9550() {
   return (neuron0x2dc9910()*-0.167048);
}

double NNfunction_ss_uLuL::synapse0x2dc9590() {
   return (neuron0x2dc9c50()*0.121483);
}

double NNfunction_ss_uLuL::synapse0x2dd0270() {
   return (neuron0x2dc9f90()*-0.0404122);
}

double NNfunction_ss_uLuL::synapse0x2dd02b0() {
   return (neuron0x2dca2d0()*0.229339);
}

double NNfunction_ss_uLuL::synapse0x2dd02f0() {
   return (neuron0x2dca610()*0.59878);
}

double NNfunction_ss_uLuL::synapse0x2dd0330() {
   return (neuron0x2dca950()*0.0558405);
}

double NNfunction_ss_uLuL::synapse0x2dd0370() {
   return (neuron0x2dcac90()*0.297248);
}

double NNfunction_ss_uLuL::synapse0x2dd03b0() {
   return (neuron0x2dcafd0()*0.155557);
}

double NNfunction_ss_uLuL::synapse0x2dd03f0() {
   return (neuron0x2dcb310()*-0.464774);
}

double NNfunction_ss_uLuL::synapse0x2dd0430() {
   return (neuron0x2dcb650()*0.614449);
}

double NNfunction_ss_uLuL::synapse0x2dd0470() {
   return (neuron0x2dcb990()*-0.379576);
}

double NNfunction_ss_uLuL::synapse0x2dd04b0() {
   return (neuron0x2dcbcd0()*-0.468958);
}

double NNfunction_ss_uLuL::synapse0x2dd04f0() {
   return (neuron0x2dcc010()*0.0381115);
}

double NNfunction_ss_uLuL::synapse0x2dd0530() {
   return (neuron0x2dcc350()*-1.12928);
}

double NNfunction_ss_uLuL::synapse0x2dd0570() {
   return (neuron0x2dcc690()*0.32836);
}

double NNfunction_ss_uLuL::synapse0x2dcf4c0() {
   return (neuron0x2dcc9d0()*-0.0426082);
}

double NNfunction_ss_uLuL::synapse0x2dcf500() {
   return (neuron0x2dccf30()*-0.368008);
}

double NNfunction_ss_uLuL::synapse0x2dd06c0() {
   return (neuron0x2dcd150()*-0.49481);
}

double NNfunction_ss_uLuL::synapse0x2dd0700() {
   return (neuron0x2dcd490()*0.0240547);
}

double NNfunction_ss_uLuL::synapse0x2dd0740() {
   return (neuron0x2dcd7d0()*-0.270296);
}

double NNfunction_ss_uLuL::synapse0x2dd0780() {
   return (neuron0x2dcdb10()*-0.187581);
}

double NNfunction_ss_uLuL::synapse0x2dd07c0() {
   return (neuron0x2dcde50()*0.103426);
}

double NNfunction_ss_uLuL::synapse0x2dd0800() {
   return (neuron0x2dce190()*-0.167121);
}

double NNfunction_ss_uLuL::synapse0x2dd0b80() {
   return (neuron0x2dc95d0()*0.537008);
}

double NNfunction_ss_uLuL::synapse0x2dd0bc0() {
   return (neuron0x2dc9910()*0.329664);
}

double NNfunction_ss_uLuL::synapse0x2dd0c00() {
   return (neuron0x2dc9c50()*-0.61467);
}

double NNfunction_ss_uLuL::synapse0x2dd0c40() {
   return (neuron0x2dc9f90()*0.471458);
}

double NNfunction_ss_uLuL::synapse0x2dd0c80() {
   return (neuron0x2dca2d0()*0.0156585);
}

double NNfunction_ss_uLuL::synapse0x2dd0cc0() {
   return (neuron0x2dca610()*-0.0289701);
}

double NNfunction_ss_uLuL::synapse0x2dd0d00() {
   return (neuron0x2dca950()*0.0733576);
}

double NNfunction_ss_uLuL::synapse0x2dd0d40() {
   return (neuron0x2dcac90()*-0.731128);
}

double NNfunction_ss_uLuL::synapse0x2dd0d80() {
   return (neuron0x2dcafd0()*-0.345017);
}

double NNfunction_ss_uLuL::synapse0x2dd0dc0() {
   return (neuron0x2dcb310()*0.309672);
}

double NNfunction_ss_uLuL::synapse0x2dd0e00() {
   return (neuron0x2dcb650()*-0.119732);
}

double NNfunction_ss_uLuL::synapse0x2dd0e40() {
   return (neuron0x2dcb990()*-1.87254);
}

double NNfunction_ss_uLuL::synapse0x2dd0e80() {
   return (neuron0x2dcbcd0()*0.463658);
}

double NNfunction_ss_uLuL::synapse0x2dd0ec0() {
   return (neuron0x2dcc010()*-0.339127);
}

double NNfunction_ss_uLuL::synapse0x2dd0f00() {
   return (neuron0x2dcc350()*-0.0815541);
}

double NNfunction_ss_uLuL::synapse0x2dd0f40() {
   return (neuron0x2dcc690()*0.288393);
}

double NNfunction_ss_uLuL::synapse0x2dd09d0() {
   return (neuron0x2dcc9d0()*0.763289);
}

double NNfunction_ss_uLuL::synapse0x2dd0a10() {
   return (neuron0x2dccf30()*0.0461369);
}

double NNfunction_ss_uLuL::synapse0x2dd1090() {
   return (neuron0x2dcd150()*0.361244);
}

double NNfunction_ss_uLuL::synapse0x2dd10d0() {
   return (neuron0x2dcd490()*-0.168978);
}

double NNfunction_ss_uLuL::synapse0x2dd1110() {
   return (neuron0x2dcd7d0()*-0.115138);
}

double NNfunction_ss_uLuL::synapse0x2dd1150() {
   return (neuron0x2dcdb10()*0.472367);
}

double NNfunction_ss_uLuL::synapse0x2dd1190() {
   return (neuron0x2dcde50()*0.251466);
}

double NNfunction_ss_uLuL::synapse0x2dd11d0() {
   return (neuron0x2dce190()*0.157615);
}

double NNfunction_ss_uLuL::synapse0x2dd1550() {
   return (neuron0x2dc95d0()*-0.215958);
}

double NNfunction_ss_uLuL::synapse0x2dd1590() {
   return (neuron0x2dc9910()*0.00935947);
}

double NNfunction_ss_uLuL::synapse0x2dd15d0() {
   return (neuron0x2dc9c50()*0.700361);
}

double NNfunction_ss_uLuL::synapse0x2dd1610() {
   return (neuron0x2dc9f90()*0.0491063);
}

double NNfunction_ss_uLuL::synapse0x2dd1650() {
   return (neuron0x2dca2d0()*-0.632124);
}

double NNfunction_ss_uLuL::synapse0x2dd1690() {
   return (neuron0x2dca610()*-0.439299);
}

double NNfunction_ss_uLuL::synapse0x2dd16d0() {
   return (neuron0x2dca950()*-0.360534);
}

double NNfunction_ss_uLuL::synapse0x2dd1710() {
   return (neuron0x2dcac90()*0.111054);
}

double NNfunction_ss_uLuL::synapse0x2dd1750() {
   return (neuron0x2dcafd0()*0.203546);
}

double NNfunction_ss_uLuL::synapse0x2b88ea0() {
   return (neuron0x2dcb310()*0.544422);
}

double NNfunction_ss_uLuL::synapse0x2b88ee0() {
   return (neuron0x2dcb650()*0.156335);
}

double NNfunction_ss_uLuL::synapse0x2b88f20() {
   return (neuron0x2dcb990()*-0.462073);
}

double NNfunction_ss_uLuL::synapse0x2b88f60() {
   return (neuron0x2dcbcd0()*0.529762);
}

double NNfunction_ss_uLuL::synapse0x2b88fa0() {
   return (neuron0x2dcc010()*0.40501);
}

double NNfunction_ss_uLuL::synapse0x2b88fe0() {
   return (neuron0x2dcc350()*0.896179);
}

double NNfunction_ss_uLuL::synapse0x2b89020() {
   return (neuron0x2dcc690()*-0.0798262);
}

double NNfunction_ss_uLuL::synapse0x2dd13a0() {
   return (neuron0x2dcc9d0()*-0.0215683);
}

double NNfunction_ss_uLuL::synapse0x2dd13e0() {
   return (neuron0x2dccf30()*-0.499937);
}

double NNfunction_ss_uLuL::synapse0x2b89170() {
   return (neuron0x2dcd150()*0.251853);
}

double NNfunction_ss_uLuL::synapse0x2b891b0() {
   return (neuron0x2dcd490()*0.000668727);
}

double NNfunction_ss_uLuL::synapse0x2b891f0() {
   return (neuron0x2dcd7d0()*0.0246716);
}

double NNfunction_ss_uLuL::synapse0x2b89230() {
   return (neuron0x2dcdb10()*-0.284039);
}

double NNfunction_ss_uLuL::synapse0x2b89270() {
   return (neuron0x2dcde50()*-0.123025);
}

double NNfunction_ss_uLuL::synapse0x2dd1fa0() {
   return (neuron0x2dce190()*0.326595);
}

double NNfunction_ss_uLuL::synapse0x2dd2320() {
   return (neuron0x2dc95d0()*-0.600361);
}

double NNfunction_ss_uLuL::synapse0x2dd2360() {
   return (neuron0x2dc9910()*-0.604863);
}

double NNfunction_ss_uLuL::synapse0x2dd23a0() {
   return (neuron0x2dc9c50()*-0.305401);
}

double NNfunction_ss_uLuL::synapse0x2dd23e0() {
   return (neuron0x2dc9f90()*-0.486138);
}

double NNfunction_ss_uLuL::synapse0x2dd2420() {
   return (neuron0x2dca2d0()*-0.0407576);
}

double NNfunction_ss_uLuL::synapse0x2dd2460() {
   return (neuron0x2dca610()*0.182934);
}

double NNfunction_ss_uLuL::synapse0x2dd24a0() {
   return (neuron0x2dca950()*-0.0242352);
}

double NNfunction_ss_uLuL::synapse0x2dd24e0() {
   return (neuron0x2dcac90()*-1.14221);
}

double NNfunction_ss_uLuL::synapse0x2dd2520() {
   return (neuron0x2dcafd0()*0.0606583);
}

double NNfunction_ss_uLuL::synapse0x2dd2560() {
   return (neuron0x2dcb310()*0.489673);
}

double NNfunction_ss_uLuL::synapse0x2dd25a0() {
   return (neuron0x2dcb650()*0.0332237);
}

double NNfunction_ss_uLuL::synapse0x2dd25e0() {
   return (neuron0x2dcb990()*0.418406);
}

double NNfunction_ss_uLuL::synapse0x2dd2620() {
   return (neuron0x2dcbcd0()*0.845658);
}

double NNfunction_ss_uLuL::synapse0x2dd2660() {
   return (neuron0x2dcc010()*-0.556731);
}

double NNfunction_ss_uLuL::synapse0x2dd26a0() {
   return (neuron0x2dcc350()*-0.165205);
}

double NNfunction_ss_uLuL::synapse0x2dd26e0() {
   return (neuron0x2dcc690()*-0.154245);
}

double NNfunction_ss_uLuL::synapse0x2dd2170() {
   return (neuron0x2dcc9d0()*-0.645353);
}

double NNfunction_ss_uLuL::synapse0x2dd21b0() {
   return (neuron0x2dccf30()*-0.0493572);
}

double NNfunction_ss_uLuL::synapse0x2dd2830() {
   return (neuron0x2dcd150()*0.0627584);
}

double NNfunction_ss_uLuL::synapse0x2dd2870() {
   return (neuron0x2dcd490()*0.149732);
}

double NNfunction_ss_uLuL::synapse0x2dd28b0() {
   return (neuron0x2dcd7d0()*0.247195);
}

double NNfunction_ss_uLuL::synapse0x2dd28f0() {
   return (neuron0x2dcdb10()*-0.10257);
}

double NNfunction_ss_uLuL::synapse0x2dd2930() {
   return (neuron0x2dcde50()*0.314967);
}

double NNfunction_ss_uLuL::synapse0x2dd2970() {
   return (neuron0x2dce190()*-0.332981);
}

double NNfunction_ss_uLuL::synapse0x2dd2cf0() {
   return (neuron0x2dc95d0()*0.0711766);
}

double NNfunction_ss_uLuL::synapse0x2dd2d30() {
   return (neuron0x2dc9910()*-0.0839594);
}

double NNfunction_ss_uLuL::synapse0x2dd2d70() {
   return (neuron0x2dc9c50()*0.142858);
}

double NNfunction_ss_uLuL::synapse0x2dd2db0() {
   return (neuron0x2dc9f90()*0.0332752);
}

double NNfunction_ss_uLuL::synapse0x2dd2df0() {
   return (neuron0x2dca2d0()*-0.33482);
}

double NNfunction_ss_uLuL::synapse0x2dd2e30() {
   return (neuron0x2dca610()*-0.315271);
}

double NNfunction_ss_uLuL::synapse0x2dd2e70() {
   return (neuron0x2dca950()*-0.161793);
}

double NNfunction_ss_uLuL::synapse0x2dd2eb0() {
   return (neuron0x2dcac90()*0.124025);
}

double NNfunction_ss_uLuL::synapse0x2dd2ef0() {
   return (neuron0x2dcafd0()*0.162005);
}

double NNfunction_ss_uLuL::synapse0x2dd2f30() {
   return (neuron0x2dcb310()*0.243373);
}

double NNfunction_ss_uLuL::synapse0x2dd2f70() {
   return (neuron0x2dcb650()*0.29801);
}

double NNfunction_ss_uLuL::synapse0x2dd2fb0() {
   return (neuron0x2dcb990()*-0.610291);
}

double NNfunction_ss_uLuL::synapse0x2dd2ff0() {
   return (neuron0x2dcbcd0()*-0.129662);
}

double NNfunction_ss_uLuL::synapse0x2dd3030() {
   return (neuron0x2dcc010()*0.302805);
}

double NNfunction_ss_uLuL::synapse0x2dd3070() {
   return (neuron0x2dcc350()*0.337961);
}

double NNfunction_ss_uLuL::synapse0x2dd30b0() {
   return (neuron0x2dcc690()*0.0751812);
}

double NNfunction_ss_uLuL::synapse0x2dd2b40() {
   return (neuron0x2dcc9d0()*-0.169533);
}

double NNfunction_ss_uLuL::synapse0x2dd2b80() {
   return (neuron0x2dccf30()*-0.425694);
}

double NNfunction_ss_uLuL::synapse0x2dd3200() {
   return (neuron0x2dcd150()*0.227929);
}

double NNfunction_ss_uLuL::synapse0x2dd3240() {
   return (neuron0x2dcd490()*0.0247628);
}

double NNfunction_ss_uLuL::synapse0x2dd3280() {
   return (neuron0x2dcd7d0()*-0.052552);
}

double NNfunction_ss_uLuL::synapse0x2dd32c0() {
   return (neuron0x2dcdb10()*-0.101857);
}

double NNfunction_ss_uLuL::synapse0x2dd3300() {
   return (neuron0x2dcde50()*-0.207105);
}

double NNfunction_ss_uLuL::synapse0x2dd3340() {
   return (neuron0x2dce190()*0.0579847);
}

double NNfunction_ss_uLuL::synapse0x2dcce20() {
   return (neuron0x2dc95d0()*0.00781598);
}

double NNfunction_ss_uLuL::synapse0x2dcce60() {
   return (neuron0x2dc9910()*-0.00363885);
}

double NNfunction_ss_uLuL::synapse0x2dccea0() {
   return (neuron0x2dc9c50()*0.0289631);
}

double NNfunction_ss_uLuL::synapse0x2dccee0() {
   return (neuron0x2dc9f90()*2.55581);
}

double NNfunction_ss_uLuL::synapse0x2dd38d0() {
   return (neuron0x2dca2d0()*0.00082659);
}

double NNfunction_ss_uLuL::synapse0x2dd3910() {
   return (neuron0x2dca610()*0.00892467);
}

double NNfunction_ss_uLuL::synapse0x2dd3950() {
   return (neuron0x2dca950()*-0.0012567);
}

double NNfunction_ss_uLuL::synapse0x2dd3990() {
   return (neuron0x2dcac90()*-0.0021751);
}

double NNfunction_ss_uLuL::synapse0x2dd39d0() {
   return (neuron0x2dcafd0()*0.00413702);
}

double NNfunction_ss_uLuL::synapse0x2dd3a10() {
   return (neuron0x2dcb310()*0.00303595);
}

double NNfunction_ss_uLuL::synapse0x2dd3a50() {
   return (neuron0x2dcb650()*-0.00291455);
}

double NNfunction_ss_uLuL::synapse0x2dd3a90() {
   return (neuron0x2dcb990()*0.0823834);
}

double NNfunction_ss_uLuL::synapse0x2dd3ad0() {
   return (neuron0x2dcbcd0()*0.00610145);
}

double NNfunction_ss_uLuL::synapse0x2dd3b10() {
   return (neuron0x2dcc010()*0.000485908);
}

double NNfunction_ss_uLuL::synapse0x2dd3b50() {
   return (neuron0x2dcc350()*0.00345195);
}

double NNfunction_ss_uLuL::synapse0x2dd3b90() {
   return (neuron0x2dcc690()*-0.00677725);
}

double NNfunction_ss_uLuL::synapse0x2dd3510() {
   return (neuron0x2dcc9d0()*-0.00174573);
}

double NNfunction_ss_uLuL::synapse0x2dd3550() {
   return (neuron0x2dccf30()*-0.00584418);
}

double NNfunction_ss_uLuL::synapse0x2dd3ce0() {
   return (neuron0x2dcd150()*-0.00171872);
}

double NNfunction_ss_uLuL::synapse0x2dd3d20() {
   return (neuron0x2dcd490()*-0.00259845);
}

double NNfunction_ss_uLuL::synapse0x2dd3d60() {
   return (neuron0x2dcd7d0()*0.00567213);
}

double NNfunction_ss_uLuL::synapse0x2dd3da0() {
   return (neuron0x2dcdb10()*0.00493392);
}

double NNfunction_ss_uLuL::synapse0x2dd3de0() {
   return (neuron0x2dcde50()*-0.00324351);
}

double NNfunction_ss_uLuL::synapse0x2dd3e20() {
   return (neuron0x2dce190()*2.26246e-05);
}

double NNfunction_ss_uLuL::synapse0x2dd41a0() {
   return (neuron0x2dc95d0()*-0.198707);
}

double NNfunction_ss_uLuL::synapse0x2dd41e0() {
   return (neuron0x2dc9910()*-0.756178);
}

double NNfunction_ss_uLuL::synapse0x2dd4220() {
   return (neuron0x2dc9c50()*0.522369);
}

double NNfunction_ss_uLuL::synapse0x2dd4260() {
   return (neuron0x2dc9f90()*-0.786764);
}

double NNfunction_ss_uLuL::synapse0x2dd42a0() {
   return (neuron0x2dca2d0()*-0.65006);
}

double NNfunction_ss_uLuL::synapse0x2dd42e0() {
   return (neuron0x2dca610()*-0.726828);
}

double NNfunction_ss_uLuL::synapse0x2dd4320() {
   return (neuron0x2dca950()*-0.504597);
}

double NNfunction_ss_uLuL::synapse0x2dd4360() {
   return (neuron0x2dcac90()*-1.31127);
}

double NNfunction_ss_uLuL::synapse0x2dd43a0() {
   return (neuron0x2dcafd0()*1.08382);
}

double NNfunction_ss_uLuL::synapse0x2dd43e0() {
   return (neuron0x2dcb310()*0.227191);
}

double NNfunction_ss_uLuL::synapse0x2dd4420() {
   return (neuron0x2dcb650()*0.247034);
}

double NNfunction_ss_uLuL::synapse0x2dd4460() {
   return (neuron0x2dcb990()*1.26684);
}

double NNfunction_ss_uLuL::synapse0x2dd44a0() {
   return (neuron0x2dcbcd0()*0.573761);
}

double NNfunction_ss_uLuL::synapse0x2dd44e0() {
   return (neuron0x2dcc010()*0.459233);
}

double NNfunction_ss_uLuL::synapse0x2dd4520() {
   return (neuron0x2dcc350()*-0.124121);
}

double NNfunction_ss_uLuL::synapse0x2dd4560() {
   return (neuron0x2dcc690()*0.115366);
}

double NNfunction_ss_uLuL::synapse0x2dd3ff0() {
   return (neuron0x2dcc9d0()*-0.450718);
}

double NNfunction_ss_uLuL::synapse0x2dd4030() {
   return (neuron0x2dccf30()*-0.0245236);
}

double NNfunction_ss_uLuL::synapse0x2dd46b0() {
   return (neuron0x2dcd150()*0.0561549);
}

double NNfunction_ss_uLuL::synapse0x2dd46f0() {
   return (neuron0x2dcd490()*0.294299);
}

double NNfunction_ss_uLuL::synapse0x2dd4730() {
   return (neuron0x2dcd7d0()*0.167209);
}

double NNfunction_ss_uLuL::synapse0x2dd4770() {
   return (neuron0x2dcdb10()*-0.324602);
}

double NNfunction_ss_uLuL::synapse0x2dd47b0() {
   return (neuron0x2dcde50()*0.666665);
}

double NNfunction_ss_uLuL::synapse0x2dd47f0() {
   return (neuron0x2dce190()*-0.0132643);
}

double NNfunction_ss_uLuL::synapse0x2dd4b70() {
   return (neuron0x2dc95d0()*-0.000531031);
}

double NNfunction_ss_uLuL::synapse0x2dd4bb0() {
   return (neuron0x2dc9910()*0.0102576);
}

double NNfunction_ss_uLuL::synapse0x2dd4bf0() {
   return (neuron0x2dc9c50()*-0.0043951);
}

double NNfunction_ss_uLuL::synapse0x2dd4c30() {
   return (neuron0x2dc9f90()*0.199378);
}

double NNfunction_ss_uLuL::synapse0x2dd4c70() {
   return (neuron0x2dca2d0()*-0.0384743);
}

double NNfunction_ss_uLuL::synapse0x2dd4cb0() {
   return (neuron0x2dca610()*-0.0351936);
}

double NNfunction_ss_uLuL::synapse0x2dd4cf0() {
   return (neuron0x2dca950()*-0.00636606);
}

double NNfunction_ss_uLuL::synapse0x2dd4d30() {
   return (neuron0x2dcac90()*0.0283192);
}

double NNfunction_ss_uLuL::synapse0x2dd4d70() {
   return (neuron0x2dcafd0()*0.0878537);
}

double NNfunction_ss_uLuL::synapse0x2dd4db0() {
   return (neuron0x2dcb310()*0.0107599);
}

double NNfunction_ss_uLuL::synapse0x2dd4df0() {
   return (neuron0x2dcb650()*0.0562931);
}

double NNfunction_ss_uLuL::synapse0x2dd4e30() {
   return (neuron0x2dcb990()*-2.0785);
}

double NNfunction_ss_uLuL::synapse0x2dd4e70() {
   return (neuron0x2dcbcd0()*-0.0327929);
}

double NNfunction_ss_uLuL::synapse0x2dd4eb0() {
   return (neuron0x2dcc010()*0.0353673);
}

double NNfunction_ss_uLuL::synapse0x2dd4ef0() {
   return (neuron0x2dcc350()*-0.0484381);
}

double NNfunction_ss_uLuL::synapse0x2dd4f30() {
   return (neuron0x2dcc690()*-0.0316656);
}

double NNfunction_ss_uLuL::synapse0x2dd49c0() {
   return (neuron0x2dcc9d0()*-0.00652269);
}

double NNfunction_ss_uLuL::synapse0x2dd4a00() {
   return (neuron0x2dccf30()*-0.0322398);
}

double NNfunction_ss_uLuL::synapse0x2dd1790() {
   return (neuron0x2dcd150()*-0.00369201);
}

double NNfunction_ss_uLuL::synapse0x2dd17d0() {
   return (neuron0x2dcd490()*0.0174537);
}

double NNfunction_ss_uLuL::synapse0x2dd1810() {
   return (neuron0x2dcd7d0()*0.0010163);
}

double NNfunction_ss_uLuL::synapse0x2dd1850() {
   return (neuron0x2dcdb10()*0.00551564);
}

double NNfunction_ss_uLuL::synapse0x2dd1890() {
   return (neuron0x2dcde50()*-0.0136467);
}

double NNfunction_ss_uLuL::synapse0x2dd18d0() {
   return (neuron0x2dce190()*0.00214073);
}

double NNfunction_ss_uLuL::synapse0x2dd1c50() {
   return (neuron0x2dc95d0()*-0.332321);
}

double NNfunction_ss_uLuL::synapse0x2dd1c90() {
   return (neuron0x2dc9910()*-0.84985);
}

double NNfunction_ss_uLuL::synapse0x2dd1cd0() {
   return (neuron0x2dc9c50()*-0.0829071);
}

double NNfunction_ss_uLuL::synapse0x2dd1d10() {
   return (neuron0x2dc9f90()*0.158302);
}

double NNfunction_ss_uLuL::synapse0x2dd1d50() {
   return (neuron0x2dca2d0()*0.0609606);
}

double NNfunction_ss_uLuL::synapse0x2dd1d90() {
   return (neuron0x2dca610()*0.0304725);
}

double NNfunction_ss_uLuL::synapse0x2dd1dd0() {
   return (neuron0x2dca950()*-0.0565535);
}

double NNfunction_ss_uLuL::synapse0x2dd1e10() {
   return (neuron0x2dcac90()*0.582339);
}

double NNfunction_ss_uLuL::synapse0x2dd1e50() {
   return (neuron0x2dcafd0()*-0.724363);
}

double NNfunction_ss_uLuL::synapse0x2dd1e90() {
   return (neuron0x2dcb310()*0.505904);
}

double NNfunction_ss_uLuL::synapse0x2dd1ed0() {
   return (neuron0x2dcb650()*0.157762);
}

double NNfunction_ss_uLuL::synapse0x2dd1f10() {
   return (neuron0x2dcb990()*1.0084);
}

double NNfunction_ss_uLuL::synapse0x2dd1f50() {
   return (neuron0x2dcbcd0()*0.224147);
}

double NNfunction_ss_uLuL::synapse0x2dd6090() {
   return (neuron0x2dcc010()*-0.0589671);
}

double NNfunction_ss_uLuL::synapse0x2dd60d0() {
   return (neuron0x2dcc350()*-0.265902);
}

double NNfunction_ss_uLuL::synapse0x2dd6110() {
   return (neuron0x2dcc690()*0.052369);
}

double NNfunction_ss_uLuL::synapse0x2dd1aa0() {
   return (neuron0x2dcc9d0()*-0.27077);
}

double NNfunction_ss_uLuL::synapse0x2dd1ae0() {
   return (neuron0x2dccf30()*0.152966);
}

double NNfunction_ss_uLuL::synapse0x2dd6260() {
   return (neuron0x2dcd150()*0.732588);
}

double NNfunction_ss_uLuL::synapse0x2dd62a0() {
   return (neuron0x2dcd490()*-0.479919);
}

double NNfunction_ss_uLuL::synapse0x2dd62e0() {
   return (neuron0x2dcd7d0()*-0.541751);
}

double NNfunction_ss_uLuL::synapse0x2dd6320() {
   return (neuron0x2dcdb10()*0.101647);
}

double NNfunction_ss_uLuL::synapse0x2dd6360() {
   return (neuron0x2dcde50()*0.381228);
}

double NNfunction_ss_uLuL::synapse0x2dd63a0() {
   return (neuron0x2dce190()*-0.329768);
}

double NNfunction_ss_uLuL::synapse0x2dd6720() {
   return (neuron0x2dc95d0()*-0.0030606);
}

double NNfunction_ss_uLuL::synapse0x2dd6760() {
   return (neuron0x2dc9910()*-0.00601915);
}

double NNfunction_ss_uLuL::synapse0x2dd67a0() {
   return (neuron0x2dc9c50()*-0.00587108);
}

double NNfunction_ss_uLuL::synapse0x2dd67e0() {
   return (neuron0x2dc9f90()*3.37761);
}

double NNfunction_ss_uLuL::synapse0x2dd6820() {
   return (neuron0x2dca2d0()*-0.00340068);
}

double NNfunction_ss_uLuL::synapse0x2dd6860() {
   return (neuron0x2dca610()*0.0100932);
}

double NNfunction_ss_uLuL::synapse0x2dd68a0() {
   return (neuron0x2dca950()*-0.00630623);
}

double NNfunction_ss_uLuL::synapse0x2dd68e0() {
   return (neuron0x2dcac90()*0.00656071);
}

double NNfunction_ss_uLuL::synapse0x2dd6920() {
   return (neuron0x2dcafd0()*0.0040101);
}

double NNfunction_ss_uLuL::synapse0x2dd6960() {
   return (neuron0x2dcb310()*-0.00359349);
}

double NNfunction_ss_uLuL::synapse0x2dd69a0() {
   return (neuron0x2dcb650()*-0.00697352);
}

double NNfunction_ss_uLuL::synapse0x2dd69e0() {
   return (neuron0x2dcb990()*-1.13519);
}

double NNfunction_ss_uLuL::synapse0x2dd6a20() {
   return (neuron0x2dcbcd0()*0.023856);
}

double NNfunction_ss_uLuL::synapse0x2dd6a60() {
   return (neuron0x2dcc010()*-0.0155031);
}

double NNfunction_ss_uLuL::synapse0x2dd6aa0() {
   return (neuron0x2dcc350()*0.00412494);
}

double NNfunction_ss_uLuL::synapse0x2dd6ae0() {
   return (neuron0x2dcc690()*0.00318967);
}

double NNfunction_ss_uLuL::synapse0x2dd6570() {
   return (neuron0x2dcc9d0()*-0.0156348);
}

double NNfunction_ss_uLuL::synapse0x2dd65b0() {
   return (neuron0x2dccf30()*0.00571286);
}

double NNfunction_ss_uLuL::synapse0x2dd6c30() {
   return (neuron0x2dcd150()*0.00481007);
}

double NNfunction_ss_uLuL::synapse0x2dd6c70() {
   return (neuron0x2dcd490()*0.0227825);
}

double NNfunction_ss_uLuL::synapse0x2dd6cb0() {
   return (neuron0x2dcd7d0()*0.00387688);
}

double NNfunction_ss_uLuL::synapse0x2dd6cf0() {
   return (neuron0x2dcdb10()*0.000431132);
}

double NNfunction_ss_uLuL::synapse0x2dd6d30() {
   return (neuron0x2dcde50()*-0.00240778);
}

double NNfunction_ss_uLuL::synapse0x2dd6d70() {
   return (neuron0x2dce190()*0.0177284);
}

double NNfunction_ss_uLuL::synapse0x2dd70f0() {
   return (neuron0x2dc95d0()*-0.0538514);
}

double NNfunction_ss_uLuL::synapse0x2dd7130() {
   return (neuron0x2dc9910()*0.0234786);
}

double NNfunction_ss_uLuL::synapse0x2dd7170() {
   return (neuron0x2dc9c50()*-0.0427206);
}

double NNfunction_ss_uLuL::synapse0x2dd71b0() {
   return (neuron0x2dc9f90()*0.319693);
}

double NNfunction_ss_uLuL::synapse0x2dd71f0() {
   return (neuron0x2dca2d0()*0.0172073);
}

double NNfunction_ss_uLuL::synapse0x2dd7230() {
   return (neuron0x2dca610()*0.0216688);
}

double NNfunction_ss_uLuL::synapse0x2dd7270() {
   return (neuron0x2dca950()*0.0268038);
}

double NNfunction_ss_uLuL::synapse0x2dd72b0() {
   return (neuron0x2dcac90()*-0.0199355);
}

double NNfunction_ss_uLuL::synapse0x2dd72f0() {
   return (neuron0x2dcafd0()*-0.106282);
}

double NNfunction_ss_uLuL::synapse0x2dd7330() {
   return (neuron0x2dcb310()*-0.0656499);
}

double NNfunction_ss_uLuL::synapse0x2dd7370() {
   return (neuron0x2dcb650()*-0.0603408);
}

double NNfunction_ss_uLuL::synapse0x2dd73b0() {
   return (neuron0x2dcb990()*-1.00575);
}

double NNfunction_ss_uLuL::synapse0x2dd73f0() {
   return (neuron0x2dcbcd0()*0.0510333);
}

double NNfunction_ss_uLuL::synapse0x2dd7430() {
   return (neuron0x2dcc010()*-0.0561595);
}

double NNfunction_ss_uLuL::synapse0x2dd7470() {
   return (neuron0x2dcc350()*-0.0168221);
}

double NNfunction_ss_uLuL::synapse0x2dd74b0() {
   return (neuron0x2dcc690()*-0.0227115);
}

double NNfunction_ss_uLuL::synapse0x2dd6f40() {
   return (neuron0x2dcc9d0()*0.063776);
}

double NNfunction_ss_uLuL::synapse0x2dd6f80() {
   return (neuron0x2dccf30()*0.033469);
}

double NNfunction_ss_uLuL::synapse0x2dd7600() {
   return (neuron0x2dcd150()*-0.00784477);
}

double NNfunction_ss_uLuL::synapse0x2dd7640() {
   return (neuron0x2dcd490()*0.00733099);
}

double NNfunction_ss_uLuL::synapse0x2dd7680() {
   return (neuron0x2dcd7d0()*0.00326274);
}

double NNfunction_ss_uLuL::synapse0x2dd76c0() {
   return (neuron0x2dcdb10()*-0.00546679);
}

double NNfunction_ss_uLuL::synapse0x2dd7700() {
   return (neuron0x2dcde50()*0.00066617);
}

double NNfunction_ss_uLuL::synapse0x2dd7740() {
   return (neuron0x2dce190()*-0.000998663);
}

double NNfunction_ss_uLuL::synapse0x2dd7ac0() {
   return (neuron0x2dc95d0()*-0.340384);
}

double NNfunction_ss_uLuL::synapse0x2dd7b00() {
   return (neuron0x2dc9910()*-0.142926);
}

double NNfunction_ss_uLuL::synapse0x2dd7b40() {
   return (neuron0x2dc9c50()*0.0388471);
}

double NNfunction_ss_uLuL::synapse0x2dd7b80() {
   return (neuron0x2dc9f90()*0.0534888);
}

double NNfunction_ss_uLuL::synapse0x2dd7bc0() {
   return (neuron0x2dca2d0()*-0.0364218);
}

double NNfunction_ss_uLuL::synapse0x2dd7c00() {
   return (neuron0x2dca610()*0.315274);
}

double NNfunction_ss_uLuL::synapse0x2dd7c40() {
   return (neuron0x2dca950()*-0.188789);
}

double NNfunction_ss_uLuL::synapse0x2dd7c80() {
   return (neuron0x2dcac90()*0.257989);
}

double NNfunction_ss_uLuL::synapse0x2dd7cc0() {
   return (neuron0x2dcafd0()*0.511866);
}

double NNfunction_ss_uLuL::synapse0x2dd7d00() {
   return (neuron0x2dcb310()*-0.604193);
}

double NNfunction_ss_uLuL::synapse0x2dd7d40() {
   return (neuron0x2dcb650()*-0.169243);
}

double NNfunction_ss_uLuL::synapse0x2dd7d80() {
   return (neuron0x2dcb990()*0.980304);
}

double NNfunction_ss_uLuL::synapse0x2dd7dc0() {
   return (neuron0x2dcbcd0()*-0.523686);
}

double NNfunction_ss_uLuL::synapse0x2dd7e00() {
   return (neuron0x2dcc010()*0.132196);
}

double NNfunction_ss_uLuL::synapse0x2dd7e40() {
   return (neuron0x2dcc350()*-0.0590165);
}

double NNfunction_ss_uLuL::synapse0x2dd7e80() {
   return (neuron0x2dcc690()*0.52676);
}

double NNfunction_ss_uLuL::synapse0x2dd7910() {
   return (neuron0x2dcc9d0()*0.150307);
}

double NNfunction_ss_uLuL::synapse0x2dd7950() {
   return (neuron0x2dccf30()*-0.152757);
}

double NNfunction_ss_uLuL::synapse0x2dd7fd0() {
   return (neuron0x2dcd150()*-0.656788);
}

double NNfunction_ss_uLuL::synapse0x2dd8010() {
   return (neuron0x2dcd490()*-0.268765);
}

double NNfunction_ss_uLuL::synapse0x2dd8050() {
   return (neuron0x2dcd7d0()*0.766043);
}

double NNfunction_ss_uLuL::synapse0x2dd8090() {
   return (neuron0x2dcdb10()*-0.333499);
}

double NNfunction_ss_uLuL::synapse0x2dd80d0() {
   return (neuron0x2dcde50()*-0.588196);
}

double NNfunction_ss_uLuL::synapse0x2dd8110() {
   return (neuron0x2dce190()*-0.234915);
}

double NNfunction_ss_uLuL::synapse0x2dd8490() {
   return (neuron0x2dc95d0()*0.192714);
}

double NNfunction_ss_uLuL::synapse0x2dc97f0() {
   return (neuron0x2dc9910()*-0.222317);
}

double NNfunction_ss_uLuL::synapse0x2dc9830() {
   return (neuron0x2dc9c50()*0.303975);
}

double NNfunction_ss_uLuL::synapse0x2dc9b30() {
   return (neuron0x2dc9f90()*-0.0533502);
}

double NNfunction_ss_uLuL::synapse0x2dc9b70() {
   return (neuron0x2dca2d0()*0.601696);
}

double NNfunction_ss_uLuL::synapse0x2dc9e70() {
   return (neuron0x2dca610()*0.0236126);
}

double NNfunction_ss_uLuL::synapse0x2dc9eb0() {
   return (neuron0x2dca950()*-0.198477);
}

double NNfunction_ss_uLuL::synapse0x2dca1b0() {
   return (neuron0x2dcac90()*0.424257);
}

double NNfunction_ss_uLuL::synapse0x2dca1f0() {
   return (neuron0x2dcafd0()*-0.341342);
}

double NNfunction_ss_uLuL::synapse0x2dca4f0() {
   return (neuron0x2dcb310()*0.21307);
}

double NNfunction_ss_uLuL::synapse0x2dca530() {
   return (neuron0x2dcb650()*0.100713);
}

double NNfunction_ss_uLuL::synapse0x2dca830() {
   return (neuron0x2dcb990()*-0.805529);
}

double NNfunction_ss_uLuL::synapse0x2dca870() {
   return (neuron0x2dcbcd0()*-0.43597);
}

double NNfunction_ss_uLuL::synapse0x2dcab70() {
   return (neuron0x2dcc010()*-0.390843);
}

double NNfunction_ss_uLuL::synapse0x2dcabb0() {
   return (neuron0x2dcc350()*0.253501);
}

double NNfunction_ss_uLuL::synapse0x2dcaeb0() {
   return (neuron0x2dcc690()*0.0262049);
}

double NNfunction_ss_uLuL::synapse0x2dcaef0() {
   return (neuron0x2dcc9d0()*-0.183352);
}

double NNfunction_ss_uLuL::synapse0x2dcb1f0() {
   return (neuron0x2dccf30()*0.283004);
}

double NNfunction_ss_uLuL::synapse0x2dcb230() {
   return (neuron0x2dcd150()*-0.583016);
}

double NNfunction_ss_uLuL::synapse0x2dcb530() {
   return (neuron0x2dcd490()*-0.123342);
}

double NNfunction_ss_uLuL::synapse0x2dcb570() {
   return (neuron0x2dcd7d0()*-0.0146297);
}

double NNfunction_ss_uLuL::synapse0x2dcb870() {
   return (neuron0x2dcdb10()*0.376066);
}

double NNfunction_ss_uLuL::synapse0x2dcb8b0() {
   return (neuron0x2dcde50()*-0.222587);
}

double NNfunction_ss_uLuL::synapse0x2dcbbb0() {
   return (neuron0x2dce190()*-0.109382);
}

double NNfunction_ss_uLuL::synapse0x2dcbbf0() {
   return (neuron0x2dc95d0()*0.369228);
}

double NNfunction_ss_uLuL::synapse0x2dcc8b0() {
   return (neuron0x2dc9910()*-0.198357);
}

double NNfunction_ss_uLuL::synapse0x2dcc8f0() {
   return (neuron0x2dc9c50()*-0.249082);
}

double NNfunction_ss_uLuL::synapse0x2dd82e0() {
   return (neuron0x2dc9f90()*0.403728);
}

double NNfunction_ss_uLuL::synapse0x2dd8320() {
   return (neuron0x2dca2d0()*0.274836);
}

double NNfunction_ss_uLuL::synapse0x2dccbf0() {
   return (neuron0x2dca610()*-0.352489);
}

double NNfunction_ss_uLuL::synapse0x2dccc30() {
   return (neuron0x2dca950()*-0.283039);
}

double NNfunction_ss_uLuL::synapse0x2b7ac20() {
   return (neuron0x2dcac90()*0.393093);
}

double NNfunction_ss_uLuL::synapse0x2b7ac60() {
   return (neuron0x2dcafd0()*0.395053);
}

double NNfunction_ss_uLuL::synapse0x2dcd370() {
   return (neuron0x2dcb310()*-0.758323);
}

double NNfunction_ss_uLuL::synapse0x2dcd3b0() {
   return (neuron0x2dcb650()*0.436385);
}

double NNfunction_ss_uLuL::synapse0x2dcd6b0() {
   return (neuron0x2dcb990()*0.526388);
}

double NNfunction_ss_uLuL::synapse0x2dcd6f0() {
   return (neuron0x2dcbcd0()*1.38027);
}

double NNfunction_ss_uLuL::synapse0x2dcd9f0() {
   return (neuron0x2dcc010()*0.677169);
}

double NNfunction_ss_uLuL::synapse0x2dcda30() {
   return (neuron0x2dcc350()*0.61551);
}

double NNfunction_ss_uLuL::synapse0x2dcdd30() {
   return (neuron0x2dcc690()*0.304416);
}

double NNfunction_ss_uLuL::synapse0x2dcdd70() {
   return (neuron0x2dcc9d0()*0.356689);
}

double NNfunction_ss_uLuL::synapse0x2dce070() {
   return (neuron0x2dccf30()*0.843816);
}

double NNfunction_ss_uLuL::synapse0x2dce0b0() {
   return (neuron0x2dcd150()*0.0379769);
}

double NNfunction_ss_uLuL::synapse0x2dce3b0() {
   return (neuron0x2dcd490()*0.630287);
}

double NNfunction_ss_uLuL::synapse0x2dce3f0() {
   return (neuron0x2dcd7d0()*0.0310151);
}

double NNfunction_ss_uLuL::synapse0x2dcbef0() {
   return (neuron0x2dcdb10()*-0.492065);
}

double NNfunction_ss_uLuL::synapse0x2dcbf30() {
   return (neuron0x2dcde50()*-0.718977);
}

double NNfunction_ss_uLuL::synapse0x2dda200() {
   return (neuron0x2dce190()*-0.343455);
}

double NNfunction_ss_uLuL::synapse0x2dda580() {
   return (neuron0x2dc95d0()*-0.497009);
}

double NNfunction_ss_uLuL::synapse0x2dda5c0() {
   return (neuron0x2dc9910()*-0.0510147);
}

double NNfunction_ss_uLuL::synapse0x2dda600() {
   return (neuron0x2dc9c50()*0.0688621);
}

double NNfunction_ss_uLuL::synapse0x2dda640() {
   return (neuron0x2dc9f90()*1.14639);
}

double NNfunction_ss_uLuL::synapse0x2dda680() {
   return (neuron0x2dca2d0()*0.0780368);
}

double NNfunction_ss_uLuL::synapse0x2dda6c0() {
   return (neuron0x2dca610()*0.0536075);
}

double NNfunction_ss_uLuL::synapse0x2dda700() {
   return (neuron0x2dca950()*-1.29954);
}

double NNfunction_ss_uLuL::synapse0x2dda740() {
   return (neuron0x2dcac90()*0.313888);
}

double NNfunction_ss_uLuL::synapse0x2dda780() {
   return (neuron0x2dcafd0()*-0.195142);
}

double NNfunction_ss_uLuL::synapse0x2dda7c0() {
   return (neuron0x2dcb310()*0.460428);
}

double NNfunction_ss_uLuL::synapse0x2dda800() {
   return (neuron0x2dcb650()*0.227922);
}

double NNfunction_ss_uLuL::synapse0x2dda840() {
   return (neuron0x2dcb990()*-0.591794);
}

double NNfunction_ss_uLuL::synapse0x2dda880() {
   return (neuron0x2dcbcd0()*-0.306764);
}

double NNfunction_ss_uLuL::synapse0x2dda8c0() {
   return (neuron0x2dcc010()*-0.360917);
}

double NNfunction_ss_uLuL::synapse0x2dda900() {
   return (neuron0x2dcc350()*0.352061);
}

double NNfunction_ss_uLuL::synapse0x2dda940() {
   return (neuron0x2dcc690()*0.578514);
}

double NNfunction_ss_uLuL::synapse0x2dda3d0() {
   return (neuron0x2dcc9d0()*-0.253241);
}

double NNfunction_ss_uLuL::synapse0x2dda410() {
   return (neuron0x2dccf30()*0.58597);
}

double NNfunction_ss_uLuL::synapse0x2ddaa90() {
   return (neuron0x2dcd150()*-0.0508926);
}

double NNfunction_ss_uLuL::synapse0x2ddaad0() {
   return (neuron0x2dcd490()*0.0117162);
}

double NNfunction_ss_uLuL::synapse0x2ddab10() {
   return (neuron0x2dcd7d0()*-0.0197136);
}

double NNfunction_ss_uLuL::synapse0x2ddab50() {
   return (neuron0x2dcdb10()*0.0986178);
}

double NNfunction_ss_uLuL::synapse0x2ddab90() {
   return (neuron0x2dcde50()*0.497355);
}

double NNfunction_ss_uLuL::synapse0x2ddabd0() {
   return (neuron0x2dce190()*-0.332553);
}

double NNfunction_ss_uLuL::synapse0x2ddaf50() {
   return (neuron0x2dc95d0()*0.0437898);
}

double NNfunction_ss_uLuL::synapse0x2ddaf90() {
   return (neuron0x2dc9910()*-0.0458472);
}

double NNfunction_ss_uLuL::synapse0x2ddafd0() {
   return (neuron0x2dc9c50()*-0.230893);
}

double NNfunction_ss_uLuL::synapse0x2ddb010() {
   return (neuron0x2dc9f90()*0.289332);
}

double NNfunction_ss_uLuL::synapse0x2ddb050() {
   return (neuron0x2dca2d0()*0.170188);
}

double NNfunction_ss_uLuL::synapse0x2ddb090() {
   return (neuron0x2dca610()*0.159142);
}

double NNfunction_ss_uLuL::synapse0x2ddb0d0() {
   return (neuron0x2dca950()*-0.132196);
}

double NNfunction_ss_uLuL::synapse0x2ddb110() {
   return (neuron0x2dcac90()*-0.33313);
}

double NNfunction_ss_uLuL::synapse0x2ddb150() {
   return (neuron0x2dcafd0()*-0.11112);
}

double NNfunction_ss_uLuL::synapse0x2ddb190() {
   return (neuron0x2dcb310()*0.720112);
}

double NNfunction_ss_uLuL::synapse0x2ddb1d0() {
   return (neuron0x2dcb650()*-0.064025);
}

double NNfunction_ss_uLuL::synapse0x2ddb210() {
   return (neuron0x2dcb990()*-1.04811);
}

double NNfunction_ss_uLuL::synapse0x2ddb250() {
   return (neuron0x2dcbcd0()*0.496969);
}

double NNfunction_ss_uLuL::synapse0x2ddb290() {
   return (neuron0x2dcc010()*-0.208917);
}

double NNfunction_ss_uLuL::synapse0x2ddb2d0() {
   return (neuron0x2dcc350()*0.478214);
}

double NNfunction_ss_uLuL::synapse0x2ddb310() {
   return (neuron0x2dcc690()*0.133155);
}

double NNfunction_ss_uLuL::synapse0x2ddada0() {
   return (neuron0x2dcc9d0()*0.0703559);
}

double NNfunction_ss_uLuL::synapse0x2ddade0() {
   return (neuron0x2dccf30()*0.346602);
}

double NNfunction_ss_uLuL::synapse0x2ddb460() {
   return (neuron0x2dcd150()*0.123789);
}

double NNfunction_ss_uLuL::synapse0x2ddb4a0() {
   return (neuron0x2dcd490()*0.495125);
}

double NNfunction_ss_uLuL::synapse0x2ddb4e0() {
   return (neuron0x2dcd7d0()*-0.00792292);
}

double NNfunction_ss_uLuL::synapse0x2ddb520() {
   return (neuron0x2dcdb10()*-0.172531);
}

double NNfunction_ss_uLuL::synapse0x2ddb560() {
   return (neuron0x2dcde50()*-0.0201066);
}

double NNfunction_ss_uLuL::synapse0x2ddb5a0() {
   return (neuron0x2dce190()*-0.147204);
}

double NNfunction_ss_uLuL::synapse0x2ddb920() {
   return (neuron0x2dc95d0()*-0.00116032);
}

double NNfunction_ss_uLuL::synapse0x2ddb960() {
   return (neuron0x2dc9910()*0.0122331);
}

double NNfunction_ss_uLuL::synapse0x2ddb9a0() {
   return (neuron0x2dc9c50()*-0.0420633);
}

double NNfunction_ss_uLuL::synapse0x2ddb9e0() {
   return (neuron0x2dc9f90()*1.20105);
}

double NNfunction_ss_uLuL::synapse0x2ddba20() {
   return (neuron0x2dca2d0()*-0.0261628);
}

double NNfunction_ss_uLuL::synapse0x2ddba60() {
   return (neuron0x2dca610()*-0.0307836);
}

double NNfunction_ss_uLuL::synapse0x2ddbaa0() {
   return (neuron0x2dca950()*0.0103913);
}

double NNfunction_ss_uLuL::synapse0x2ddbae0() {
   return (neuron0x2dcac90()*0.0302768);
}

double NNfunction_ss_uLuL::synapse0x2ddbb20() {
   return (neuron0x2dcafd0()*0.0686042);
}

double NNfunction_ss_uLuL::synapse0x2ddbb60() {
   return (neuron0x2dcb310()*-0.0139371);
}

double NNfunction_ss_uLuL::synapse0x2ddbba0() {
   return (neuron0x2dcb650()*0.00293233);
}

double NNfunction_ss_uLuL::synapse0x2ddbbe0() {
   return (neuron0x2dcb990()*-1.1207);
}

double NNfunction_ss_uLuL::synapse0x2ddbc20() {
   return (neuron0x2dcbcd0()*0.0205111);
}

double NNfunction_ss_uLuL::synapse0x2ddbc60() {
   return (neuron0x2dcc010()*0.00120827);
}

double NNfunction_ss_uLuL::synapse0x2ddbca0() {
   return (neuron0x2dcc350()*-0.0389464);
}

double NNfunction_ss_uLuL::synapse0x2ddbce0() {
   return (neuron0x2dcc690()*-0.0351899);
}

double NNfunction_ss_uLuL::synapse0x2ddb770() {
   return (neuron0x2dcc9d0()*-0.0430495);
}

double NNfunction_ss_uLuL::synapse0x2ddb7b0() {
   return (neuron0x2dccf30()*-0.0261201);
}

double NNfunction_ss_uLuL::synapse0x2ddbe30() {
   return (neuron0x2dcd150()*-0.0279551);
}

double NNfunction_ss_uLuL::synapse0x2ddbe70() {
   return (neuron0x2dcd490()*0.034055);
}

double NNfunction_ss_uLuL::synapse0x2ddbeb0() {
   return (neuron0x2dcd7d0()*-0.00346751);
}

double NNfunction_ss_uLuL::synapse0x2ddbef0() {
   return (neuron0x2dcdb10()*0.0145098);
}

double NNfunction_ss_uLuL::synapse0x2ddbf30() {
   return (neuron0x2dcde50()*0.00205362);
}

double NNfunction_ss_uLuL::synapse0x2ddbf70() {
   return (neuron0x2dce190()*-0.00333935);
}

double NNfunction_ss_uLuL::synapse0x2ddc2f0() {
   return (neuron0x2dc95d0()*0.169676);
}

double NNfunction_ss_uLuL::synapse0x2ddc330() {
   return (neuron0x2dc9910()*0.0496486);
}

double NNfunction_ss_uLuL::synapse0x2ddc370() {
   return (neuron0x2dc9c50()*0.102158);
}

double NNfunction_ss_uLuL::synapse0x2ddc3b0() {
   return (neuron0x2dc9f90()*0.37063);
}

double NNfunction_ss_uLuL::synapse0x2ddc3f0() {
   return (neuron0x2dca2d0()*-0.0107977);
}

double NNfunction_ss_uLuL::synapse0x2ddc430() {
   return (neuron0x2dca610()*-0.0887298);
}

double NNfunction_ss_uLuL::synapse0x2ddc470() {
   return (neuron0x2dca950()*-0.0270273);
}

double NNfunction_ss_uLuL::synapse0x2ddc4b0() {
   return (neuron0x2dcac90()*0.0446577);
}

double NNfunction_ss_uLuL::synapse0x2ddc4f0() {
   return (neuron0x2dcafd0()*0.123432);
}

double NNfunction_ss_uLuL::synapse0x2ddc530() {
   return (neuron0x2dcb310()*0.0932993);
}

double NNfunction_ss_uLuL::synapse0x2ddc570() {
   return (neuron0x2dcb650()*0.0924459);
}

double NNfunction_ss_uLuL::synapse0x2ddc5b0() {
   return (neuron0x2dcb990()*0.491881);
}

double NNfunction_ss_uLuL::synapse0x2ddc5f0() {
   return (neuron0x2dcbcd0()*0.0243878);
}

double NNfunction_ss_uLuL::synapse0x2ddc630() {
   return (neuron0x2dcc010()*-0.0263327);
}

double NNfunction_ss_uLuL::synapse0x2ddc670() {
   return (neuron0x2dcc350()*0.0217555);
}

double NNfunction_ss_uLuL::synapse0x2ddc6b0() {
   return (neuron0x2dcc690()*0.000778439);
}

double NNfunction_ss_uLuL::synapse0x2ddc140() {
   return (neuron0x2dcc9d0()*-0.14149);
}

double NNfunction_ss_uLuL::synapse0x2ddc180() {
   return (neuron0x2dccf30()*-0.0370517);
}

double NNfunction_ss_uLuL::synapse0x2ddc800() {
   return (neuron0x2dcd150()*0.0761221);
}

double NNfunction_ss_uLuL::synapse0x2ddc840() {
   return (neuron0x2dcd490()*-0.102081);
}

double NNfunction_ss_uLuL::synapse0x2ddc880() {
   return (neuron0x2dcd7d0()*-0.0483879);
}

double NNfunction_ss_uLuL::synapse0x2ddc8c0() {
   return (neuron0x2dcdb10()*0.108181);
}

double NNfunction_ss_uLuL::synapse0x2ddc900() {
   return (neuron0x2dcde50()*0.150051);
}

double NNfunction_ss_uLuL::synapse0x2ddc940() {
   return (neuron0x2dce190()*-0.0435024);
}

double NNfunction_ss_uLuL::synapse0x2ddccc0() {
   return (neuron0x2dc95d0()*0.274803);
}

double NNfunction_ss_uLuL::synapse0x2ddcd00() {
   return (neuron0x2dc9910()*-0.000765494);
}

double NNfunction_ss_uLuL::synapse0x2ddcd40() {
   return (neuron0x2dc9c50()*0.148101);
}

double NNfunction_ss_uLuL::synapse0x2ddcd80() {
   return (neuron0x2dc9f90()*-0.239173);
}

double NNfunction_ss_uLuL::synapse0x2ddcdc0() {
   return (neuron0x2dca2d0()*-0.318708);
}

double NNfunction_ss_uLuL::synapse0x2ddce00() {
   return (neuron0x2dca610()*-0.298403);
}

double NNfunction_ss_uLuL::synapse0x2ddce40() {
   return (neuron0x2dca950()*0.0209033);
}

double NNfunction_ss_uLuL::synapse0x2ddce80() {
   return (neuron0x2dcac90()*0.65063);
}

double NNfunction_ss_uLuL::synapse0x2ddcec0() {
   return (neuron0x2dcafd0()*0.227129);
}

double NNfunction_ss_uLuL::synapse0x2dd5080() {
   return (neuron0x2dcb310()*-0.453951);
}

double NNfunction_ss_uLuL::synapse0x2dd50c0() {
   return (neuron0x2dcb650()*-0.669127);
}

double NNfunction_ss_uLuL::synapse0x2dd5100() {
   return (neuron0x2dcb990()*-0.207838);
}

double NNfunction_ss_uLuL::synapse0x2dd5140() {
   return (neuron0x2dcbcd0()*0.242327);
}

double NNfunction_ss_uLuL::synapse0x2dd5180() {
   return (neuron0x2dcc010()*0.523942);
}

double NNfunction_ss_uLuL::synapse0x2dd51c0() {
   return (neuron0x2dcc350()*-1.03286);
}

double NNfunction_ss_uLuL::synapse0x2dd5200() {
   return (neuron0x2dcc690()*-0.0598708);
}

double NNfunction_ss_uLuL::synapse0x2ddcb10() {
   return (neuron0x2dcc9d0()*0.340253);
}

double NNfunction_ss_uLuL::synapse0x2ddcb50() {
   return (neuron0x2dccf30()*0.442205);
}

double NNfunction_ss_uLuL::synapse0x2dd5350() {
   return (neuron0x2dcd150()*0.108152);
}

double NNfunction_ss_uLuL::synapse0x2dd5390() {
   return (neuron0x2dcd490()*-0.506096);
}

double NNfunction_ss_uLuL::synapse0x2dd53d0() {
   return (neuron0x2dcd7d0()*0.281809);
}

double NNfunction_ss_uLuL::synapse0x2dd5410() {
   return (neuron0x2dcdb10()*-0.387979);
}

double NNfunction_ss_uLuL::synapse0x2dd5450() {
   return (neuron0x2dcde50()*0.0607733);
}

double NNfunction_ss_uLuL::synapse0x2dd5490() {
   return (neuron0x2dce190()*0.0822911);
}

double NNfunction_ss_uLuL::synapse0x2dd5810() {
   return (neuron0x2dc95d0()*-0.43676);
}

double NNfunction_ss_uLuL::synapse0x2dd5850() {
   return (neuron0x2dc9910()*0.0956406);
}

double NNfunction_ss_uLuL::synapse0x2dd5890() {
   return (neuron0x2dc9c50()*-0.145024);
}

double NNfunction_ss_uLuL::synapse0x2dd58d0() {
   return (neuron0x2dc9f90()*-0.60821);
}

double NNfunction_ss_uLuL::synapse0x2dd5910() {
   return (neuron0x2dca2d0()*0.695832);
}

double NNfunction_ss_uLuL::synapse0x2dd5950() {
   return (neuron0x2dca610()*0.120417);
}

double NNfunction_ss_uLuL::synapse0x2dd5990() {
   return (neuron0x2dca950()*-0.347798);
}

double NNfunction_ss_uLuL::synapse0x2dd59d0() {
   return (neuron0x2dcac90()*0.379077);
}

double NNfunction_ss_uLuL::synapse0x2dd5a10() {
   return (neuron0x2dcafd0()*-0.106135);
}

double NNfunction_ss_uLuL::synapse0x2dd5a50() {
   return (neuron0x2dcb310()*-0.168173);
}

double NNfunction_ss_uLuL::synapse0x2dd5a90() {
   return (neuron0x2dcb650()*0.164312);
}

double NNfunction_ss_uLuL::synapse0x2dd5ad0() {
   return (neuron0x2dcb990()*1.25194);
}

double NNfunction_ss_uLuL::synapse0x2dd5b10() {
   return (neuron0x2dcbcd0()*-0.542063);
}

double NNfunction_ss_uLuL::synapse0x2dd5b50() {
   return (neuron0x2dcc010()*0.0992648);
}

double NNfunction_ss_uLuL::synapse0x2dd5b90() {
   return (neuron0x2dcc350()*-0.456787);
}

double NNfunction_ss_uLuL::synapse0x2dd5bd0() {
   return (neuron0x2dcc690()*-0.119666);
}

double NNfunction_ss_uLuL::synapse0x2dd5660() {
   return (neuron0x2dcc9d0()*0.0325314);
}

double NNfunction_ss_uLuL::synapse0x2dd56a0() {
   return (neuron0x2dccf30()*-0.233889);
}

double NNfunction_ss_uLuL::synapse0x2dd5d20() {
   return (neuron0x2dcd150()*-0.979455);
}

double NNfunction_ss_uLuL::synapse0x2dd5d60() {
   return (neuron0x2dcd490()*0.213443);
}

double NNfunction_ss_uLuL::synapse0x2dd5da0() {
   return (neuron0x2dcd7d0()*0.0382206);
}

double NNfunction_ss_uLuL::synapse0x2dd5de0() {
   return (neuron0x2dcdb10()*-0.12416);
}

double NNfunction_ss_uLuL::synapse0x2dd5e20() {
   return (neuron0x2dcde50()*0.287232);
}

double NNfunction_ss_uLuL::synapse0x2dd5e60() {
   return (neuron0x2dce190()*0.273226);
}

double NNfunction_ss_uLuL::synapse0x2dd6030() {
   return (neuron0x2dc95d0()*0.529649);
}

double NNfunction_ss_uLuL::synapse0x2ddf0c0() {
   return (neuron0x2dc9910()*0.122608);
}

double NNfunction_ss_uLuL::synapse0x2ddf100() {
   return (neuron0x2dc9c50()*-0.353442);
}

double NNfunction_ss_uLuL::synapse0x2ddf140() {
   return (neuron0x2dc9f90()*0.000191138);
}

double NNfunction_ss_uLuL::synapse0x2ddf180() {
   return (neuron0x2dca2d0()*-0.142519);
}

double NNfunction_ss_uLuL::synapse0x2ddf1c0() {
   return (neuron0x2dca610()*0.384662);
}

double NNfunction_ss_uLuL::synapse0x2ddf200() {
   return (neuron0x2dca950()*-0.536414);
}

double NNfunction_ss_uLuL::synapse0x2ddf240() {
   return (neuron0x2dcac90()*-0.208191);
}

double NNfunction_ss_uLuL::synapse0x2ddf280() {
   return (neuron0x2dcafd0()*0.168909);
}

double NNfunction_ss_uLuL::synapse0x2ddf2c0() {
   return (neuron0x2dcb310()*-0.401279);
}

double NNfunction_ss_uLuL::synapse0x2ddf300() {
   return (neuron0x2dcb650()*0.570263);
}

double NNfunction_ss_uLuL::synapse0x2ddf340() {
   return (neuron0x2dcb990()*-0.193747);
}

double NNfunction_ss_uLuL::synapse0x2ddf380() {
   return (neuron0x2dcbcd0()*0.461218);
}

double NNfunction_ss_uLuL::synapse0x2ddf3c0() {
   return (neuron0x2dcc010()*-0.59524);
}

double NNfunction_ss_uLuL::synapse0x2ddf400() {
   return (neuron0x2dcc350()*0.480771);
}

double NNfunction_ss_uLuL::synapse0x2ddf440() {
   return (neuron0x2dcc690()*-0.536363);
}

double NNfunction_ss_uLuL::synapse0x2ddef10() {
   return (neuron0x2dcc9d0()*0.264465);
}

double NNfunction_ss_uLuL::synapse0x2ddef50() {
   return (neuron0x2dccf30()*0.169265);
}

double NNfunction_ss_uLuL::synapse0x2ddf590() {
   return (neuron0x2dcd150()*0.503617);
}

double NNfunction_ss_uLuL::synapse0x2ddf5d0() {
   return (neuron0x2dcd490()*0.484662);
}

double NNfunction_ss_uLuL::synapse0x2ddf610() {
   return (neuron0x2dcd7d0()*-0.237125);
}

double NNfunction_ss_uLuL::synapse0x2ddf650() {
   return (neuron0x2dcdb10()*-0.496891);
}

double NNfunction_ss_uLuL::synapse0x2ddf690() {
   return (neuron0x2dcde50()*0.0348352);
}

double NNfunction_ss_uLuL::synapse0x2ddf6d0() {
   return (neuron0x2dce190()*-0.90716);
}

double NNfunction_ss_uLuL::synapse0x2ddfa50() {
   return (neuron0x2dc95d0()*0.369517);
}

double NNfunction_ss_uLuL::synapse0x2ddfa90() {
   return (neuron0x2dc9910()*0.950692);
}

double NNfunction_ss_uLuL::synapse0x2ddfad0() {
   return (neuron0x2dc9c50()*-0.642715);
}

double NNfunction_ss_uLuL::synapse0x2ddfb10() {
   return (neuron0x2dc9f90()*0.245787);
}

double NNfunction_ss_uLuL::synapse0x2ddfb50() {
   return (neuron0x2dca2d0()*0.383981);
}

double NNfunction_ss_uLuL::synapse0x2ddfb90() {
   return (neuron0x2dca610()*0.229691);
}

double NNfunction_ss_uLuL::synapse0x2ddfbd0() {
   return (neuron0x2dca950()*0.163174);
}

double NNfunction_ss_uLuL::synapse0x2ddfc10() {
   return (neuron0x2dcac90()*1.28461);
}

double NNfunction_ss_uLuL::synapse0x2ddfc50() {
   return (neuron0x2dcafd0()*-0.692016);
}

double NNfunction_ss_uLuL::synapse0x2ddfc90() {
   return (neuron0x2dcb310()*-0.440938);
}

double NNfunction_ss_uLuL::synapse0x2ddfcd0() {
   return (neuron0x2dcb650()*-0.156469);
}

double NNfunction_ss_uLuL::synapse0x2ddfd10() {
   return (neuron0x2dcb990()*-0.514791);
}

double NNfunction_ss_uLuL::synapse0x2ddfd50() {
   return (neuron0x2dcbcd0()*-0.760773);
}

double NNfunction_ss_uLuL::synapse0x2ddfd90() {
   return (neuron0x2dcc010()*-0.52613);
}

double NNfunction_ss_uLuL::synapse0x2ddfdd0() {
   return (neuron0x2dcc350()*0.236312);
}

double NNfunction_ss_uLuL::synapse0x2ddfe10() {
   return (neuron0x2dcc690()*0.258818);
}

double NNfunction_ss_uLuL::synapse0x2ddf8a0() {
   return (neuron0x2dcc9d0()*0.710925);
}

double NNfunction_ss_uLuL::synapse0x2ddf8e0() {
   return (neuron0x2dccf30()*0.0831493);
}

double NNfunction_ss_uLuL::synapse0x2ddff60() {
   return (neuron0x2dcd150()*0.00042836);
}

double NNfunction_ss_uLuL::synapse0x2ddffa0() {
   return (neuron0x2dcd490()*-0.0686951);
}

double NNfunction_ss_uLuL::synapse0x2ddffe0() {
   return (neuron0x2dcd7d0()*-0.225984);
}

double NNfunction_ss_uLuL::synapse0x2de0020() {
   return (neuron0x2dcdb10()*-0.396727);
}

double NNfunction_ss_uLuL::synapse0x2de0060() {
   return (neuron0x2dcde50()*-0.732522);
}

double NNfunction_ss_uLuL::synapse0x2de00a0() {
   return (neuron0x2dce190()*0.0922635);
}

double NNfunction_ss_uLuL::synapse0x2de0420() {
   return (neuron0x2dc95d0()*0.0645542);
}

double NNfunction_ss_uLuL::synapse0x2de0460() {
   return (neuron0x2dc9910()*0.106273);
}

double NNfunction_ss_uLuL::synapse0x2de04a0() {
   return (neuron0x2dc9c50()*-0.981625);
}

double NNfunction_ss_uLuL::synapse0x2de04e0() {
   return (neuron0x2dc9f90()*0.740403);
}

double NNfunction_ss_uLuL::synapse0x2de0520() {
   return (neuron0x2dca2d0()*0.484898);
}

double NNfunction_ss_uLuL::synapse0x2de0560() {
   return (neuron0x2dca610()*0.207797);
}

double NNfunction_ss_uLuL::synapse0x2de05a0() {
   return (neuron0x2dca950()*0.196814);
}

double NNfunction_ss_uLuL::synapse0x2de05e0() {
   return (neuron0x2dcac90()*0.0923141);
}

double NNfunction_ss_uLuL::synapse0x2de0620() {
   return (neuron0x2dcafd0()*-0.0495261);
}

double NNfunction_ss_uLuL::synapse0x2de0660() {
   return (neuron0x2dcb310()*0.0424272);
}

double NNfunction_ss_uLuL::synapse0x2de06a0() {
   return (neuron0x2dcb650()*-0.039009);
}

double NNfunction_ss_uLuL::synapse0x2de06e0() {
   return (neuron0x2dcb990()*-0.844445);
}

double NNfunction_ss_uLuL::synapse0x2de0720() {
   return (neuron0x2dcbcd0()*-0.0121977);
}

double NNfunction_ss_uLuL::synapse0x2de0760() {
   return (neuron0x2dcc010()*-0.457325);
}

double NNfunction_ss_uLuL::synapse0x2de07a0() {
   return (neuron0x2dcc350()*0.604629);
}

double NNfunction_ss_uLuL::synapse0x2de07e0() {
   return (neuron0x2dcc690()*0.866916);
}

double NNfunction_ss_uLuL::synapse0x2de0270() {
   return (neuron0x2dcc9d0()*-0.083429);
}

double NNfunction_ss_uLuL::synapse0x2de02b0() {
   return (neuron0x2dccf30()*0.447535);
}

double NNfunction_ss_uLuL::synapse0x2de0930() {
   return (neuron0x2dcd150()*-0.140857);
}

double NNfunction_ss_uLuL::synapse0x2de0970() {
   return (neuron0x2dcd490()*0.265292);
}

double NNfunction_ss_uLuL::synapse0x2de09b0() {
   return (neuron0x2dcd7d0()*0.316214);
}

double NNfunction_ss_uLuL::synapse0x2de09f0() {
   return (neuron0x2dcdb10()*-0.34222);
}

double NNfunction_ss_uLuL::synapse0x2de0a30() {
   return (neuron0x2dcde50()*-0.220719);
}

double NNfunction_ss_uLuL::synapse0x2de0a70() {
   return (neuron0x2dce190()*-0.0120955);
}

double NNfunction_ss_uLuL::synapse0x2de0df0() {
   return (neuron0x2dc95d0()*-0.0561633);
}

double NNfunction_ss_uLuL::synapse0x2de0e30() {
   return (neuron0x2dc9910()*-0.204489);
}

double NNfunction_ss_uLuL::synapse0x2de0e70() {
   return (neuron0x2dc9c50()*-1.3733);
}

double NNfunction_ss_uLuL::synapse0x2de0eb0() {
   return (neuron0x2dc9f90()*0.930402);
}

double NNfunction_ss_uLuL::synapse0x2de0ef0() {
   return (neuron0x2dca2d0()*-0.307932);
}

double NNfunction_ss_uLuL::synapse0x2de0f30() {
   return (neuron0x2dca610()*-0.274891);
}

double NNfunction_ss_uLuL::synapse0x2de0f70() {
   return (neuron0x2dca950()*-0.458155);
}

double NNfunction_ss_uLuL::synapse0x2de0fb0() {
   return (neuron0x2dcac90()*-0.265896);
}

double NNfunction_ss_uLuL::synapse0x2de0ff0() {
   return (neuron0x2dcafd0()*0.235163);
}

double NNfunction_ss_uLuL::synapse0x2de1030() {
   return (neuron0x2dcb310()*-0.0227874);
}

double NNfunction_ss_uLuL::synapse0x2de1070() {
   return (neuron0x2dcb650()*0.131254);
}

double NNfunction_ss_uLuL::synapse0x2de10b0() {
   return (neuron0x2dcb990()*1.07434);
}

double NNfunction_ss_uLuL::synapse0x2de10f0() {
   return (neuron0x2dcbcd0()*0.034038);
}

double NNfunction_ss_uLuL::synapse0x2de1130() {
   return (neuron0x2dcc010()*0.109493);
}

double NNfunction_ss_uLuL::synapse0x2de1170() {
   return (neuron0x2dcc350()*0.156661);
}

double NNfunction_ss_uLuL::synapse0x2de11b0() {
   return (neuron0x2dcc690()*-0.345046);
}

double NNfunction_ss_uLuL::synapse0x2de0c40() {
   return (neuron0x2dcc9d0()*-0.116875);
}

double NNfunction_ss_uLuL::synapse0x2de0c80() {
   return (neuron0x2dccf30()*0.137585);
}

double NNfunction_ss_uLuL::synapse0x2de1300() {
   return (neuron0x2dcd150()*0.137037);
}

double NNfunction_ss_uLuL::synapse0x2de1340() {
   return (neuron0x2dcd490()*0.0829963);
}

double NNfunction_ss_uLuL::synapse0x2de1380() {
   return (neuron0x2dcd7d0()*-0.0339887);
}

double NNfunction_ss_uLuL::synapse0x2de13c0() {
   return (neuron0x2dcdb10()*-0.0425408);
}

double NNfunction_ss_uLuL::synapse0x2de1400() {
   return (neuron0x2dcde50()*-0.0744059);
}

double NNfunction_ss_uLuL::synapse0x2de1440() {
   return (neuron0x2dce190()*-0.0566812);
}

double NNfunction_ss_uLuL::synapse0x2de17c0() {
   return (neuron0x2dc95d0()*-0.0466452);
}

double NNfunction_ss_uLuL::synapse0x2de1800() {
   return (neuron0x2dc9910()*-0.186449);
}

double NNfunction_ss_uLuL::synapse0x2de1840() {
   return (neuron0x2dc9c50()*0.984764);
}

double NNfunction_ss_uLuL::synapse0x2de1880() {
   return (neuron0x2dc9f90()*0.685837);
}

double NNfunction_ss_uLuL::synapse0x2de18c0() {
   return (neuron0x2dca2d0()*-0.208661);
}

double NNfunction_ss_uLuL::synapse0x2de1900() {
   return (neuron0x2dca610()*-0.588267);
}

double NNfunction_ss_uLuL::synapse0x2de1940() {
   return (neuron0x2dca950()*0.378133);
}

double NNfunction_ss_uLuL::synapse0x2de1980() {
   return (neuron0x2dcac90()*-0.735181);
}

double NNfunction_ss_uLuL::synapse0x2de19c0() {
   return (neuron0x2dcafd0()*0.559584);
}

double NNfunction_ss_uLuL::synapse0x2de1a00() {
   return (neuron0x2dcb310()*-0.388687);
}

double NNfunction_ss_uLuL::synapse0x2de1a40() {
   return (neuron0x2dcb650()*0.332927);
}

double NNfunction_ss_uLuL::synapse0x2de1a80() {
   return (neuron0x2dcb990()*0.852063);
}

double NNfunction_ss_uLuL::synapse0x2de1ac0() {
   return (neuron0x2dcbcd0()*0.152882);
}

double NNfunction_ss_uLuL::synapse0x2de1b00() {
   return (neuron0x2dcc010()*-0.120057);
}

double NNfunction_ss_uLuL::synapse0x2de1b40() {
   return (neuron0x2dcc350()*0.615431);
}

double NNfunction_ss_uLuL::synapse0x2de1b80() {
   return (neuron0x2dcc690()*0.545233);
}

double NNfunction_ss_uLuL::synapse0x2de1610() {
   return (neuron0x2dcc9d0()*0.0749961);
}

double NNfunction_ss_uLuL::synapse0x2de1650() {
   return (neuron0x2dccf30()*-0.291372);
}

double NNfunction_ss_uLuL::synapse0x2de1cd0() {
   return (neuron0x2dcd150()*-0.137872);
}

double NNfunction_ss_uLuL::synapse0x2de1d10() {
   return (neuron0x2dcd490()*-0.246511);
}

double NNfunction_ss_uLuL::synapse0x2de1d50() {
   return (neuron0x2dcd7d0()*-0.115691);
}

double NNfunction_ss_uLuL::synapse0x2de1d90() {
   return (neuron0x2dcdb10()*-0.174317);
}

double NNfunction_ss_uLuL::synapse0x2de1dd0() {
   return (neuron0x2dcde50()*-0.394105);
}

double NNfunction_ss_uLuL::synapse0x2de1e10() {
   return (neuron0x2dce190()*0.00927638);
}

double NNfunction_ss_uLuL::synapse0x2de2190() {
   return (neuron0x2dc95d0()*0.269562);
}

double NNfunction_ss_uLuL::synapse0x2de21d0() {
   return (neuron0x2dc9910()*0.070761);
}

double NNfunction_ss_uLuL::synapse0x2de2210() {
   return (neuron0x2dc9c50()*-0.634683);
}

double NNfunction_ss_uLuL::synapse0x2de2250() {
   return (neuron0x2dc9f90()*0.339769);
}

double NNfunction_ss_uLuL::synapse0x2de2290() {
   return (neuron0x2dca2d0()*0.435241);
}

double NNfunction_ss_uLuL::synapse0x2de22d0() {
   return (neuron0x2dca610()*0.0518791);
}

double NNfunction_ss_uLuL::synapse0x2de2310() {
   return (neuron0x2dca950()*0.0883857);
}

double NNfunction_ss_uLuL::synapse0x2de2350() {
   return (neuron0x2dcac90()*0.24499);
}

double NNfunction_ss_uLuL::synapse0x2de2390() {
   return (neuron0x2dcafd0()*-0.390282);
}

double NNfunction_ss_uLuL::synapse0x2de23d0() {
   return (neuron0x2dcb310()*0.260824);
}

double NNfunction_ss_uLuL::synapse0x2de2410() {
   return (neuron0x2dcb650()*-0.42987);
}

double NNfunction_ss_uLuL::synapse0x2de2450() {
   return (neuron0x2dcb990()*0.0517697);
}

double NNfunction_ss_uLuL::synapse0x2de2490() {
   return (neuron0x2dcbcd0()*0.319446);
}

double NNfunction_ss_uLuL::synapse0x2de24d0() {
   return (neuron0x2dcc010()*-0.708399);
}

double NNfunction_ss_uLuL::synapse0x2de2510() {
   return (neuron0x2dcc350()*-0.0582268);
}

double NNfunction_ss_uLuL::synapse0x2de2550() {
   return (neuron0x2dcc690()*-0.891487);
}

double NNfunction_ss_uLuL::synapse0x2de1fe0() {
   return (neuron0x2dcc9d0()*0.0349431);
}

double NNfunction_ss_uLuL::synapse0x2de2020() {
   return (neuron0x2dccf30()*-0.0177853);
}

double NNfunction_ss_uLuL::synapse0x2de26a0() {
   return (neuron0x2dcd150()*-0.602206);
}

double NNfunction_ss_uLuL::synapse0x2de26e0() {
   return (neuron0x2dcd490()*-0.155071);
}

double NNfunction_ss_uLuL::synapse0x2de2720() {
   return (neuron0x2dcd7d0()*0.416139);
}

double NNfunction_ss_uLuL::synapse0x2de2760() {
   return (neuron0x2dcdb10()*0.138963);
}

double NNfunction_ss_uLuL::synapse0x2de27a0() {
   return (neuron0x2dcde50()*-0.0924376);
}

double NNfunction_ss_uLuL::synapse0x2de27e0() {
   return (neuron0x2dce190()*-0.420384);
}

double NNfunction_ss_uLuL::synapse0x2de2b60() {
   return (neuron0x2dc95d0()*-0.00659677);
}

double NNfunction_ss_uLuL::synapse0x2de2ba0() {
   return (neuron0x2dc9910()*-0.00100326);
}

double NNfunction_ss_uLuL::synapse0x2de2be0() {
   return (neuron0x2dc9c50()*0.0248308);
}

double NNfunction_ss_uLuL::synapse0x2de2c20() {
   return (neuron0x2dc9f90()*-17.4313);
}

double NNfunction_ss_uLuL::synapse0x2de2c60() {
   return (neuron0x2dca2d0()*0.00725066);
}

double NNfunction_ss_uLuL::synapse0x2de2ca0() {
   return (neuron0x2dca610()*-0.00192006);
}

double NNfunction_ss_uLuL::synapse0x2de2ce0() {
   return (neuron0x2dca950()*0.0143676);
}

double NNfunction_ss_uLuL::synapse0x2de2d20() {
   return (neuron0x2dcac90()*0.0322553);
}

double NNfunction_ss_uLuL::synapse0x2de2d60() {
   return (neuron0x2dcafd0()*-0.00975091);
}

double NNfunction_ss_uLuL::synapse0x2de2da0() {
   return (neuron0x2dcb310()*-0.00171815);
}

double NNfunction_ss_uLuL::synapse0x2de2de0() {
   return (neuron0x2dcb650()*-0.00885277);
}

double NNfunction_ss_uLuL::synapse0x2de2e20() {
   return (neuron0x2dcb990()*-0.233229);
}

double NNfunction_ss_uLuL::synapse0x2de2e60() {
   return (neuron0x2dcbcd0()*-0.00329456);
}

double NNfunction_ss_uLuL::synapse0x2de2ea0() {
   return (neuron0x2dcc010()*-0.00223009);
}

double NNfunction_ss_uLuL::synapse0x2de2ee0() {
   return (neuron0x2dcc350()*-0.0233368);
}

double NNfunction_ss_uLuL::synapse0x2de2f20() {
   return (neuron0x2dcc690()*0.00688804);
}

double NNfunction_ss_uLuL::synapse0x2de29b0() {
   return (neuron0x2dcc9d0()*-0.0156651);
}

double NNfunction_ss_uLuL::synapse0x2de29f0() {
   return (neuron0x2dccf30()*0.0150408);
}

double NNfunction_ss_uLuL::synapse0x2de3070() {
   return (neuron0x2dcd150()*0.0203767);
}

double NNfunction_ss_uLuL::synapse0x2de30b0() {
   return (neuron0x2dcd490()*-0.00462537);
}

double NNfunction_ss_uLuL::synapse0x2de30f0() {
   return (neuron0x2dcd7d0()*-0.00596723);
}

double NNfunction_ss_uLuL::synapse0x2de3130() {
   return (neuron0x2dcdb10()*-0.0137467);
}

double NNfunction_ss_uLuL::synapse0x2de3170() {
   return (neuron0x2dcde50()*-0.0169977);
}

double NNfunction_ss_uLuL::synapse0x2de31b0() {
   return (neuron0x2dce190()*0.00462894);
}

double NNfunction_ss_uLuL::synapse0x2de3530() {
   return (neuron0x2dc95d0()*0.0608783);
}

double NNfunction_ss_uLuL::synapse0x2de3570() {
   return (neuron0x2dc9910()*-0.161782);
}

double NNfunction_ss_uLuL::synapse0x2de35b0() {
   return (neuron0x2dc9c50()*-0.377758);
}

double NNfunction_ss_uLuL::synapse0x2de35f0() {
   return (neuron0x2dc9f90()*0.170172);
}

double NNfunction_ss_uLuL::synapse0x2de3630() {
   return (neuron0x2dca2d0()*-0.0483699);
}

double NNfunction_ss_uLuL::synapse0x2de3670() {
   return (neuron0x2dca610()*0.129875);
}

double NNfunction_ss_uLuL::synapse0x2de36b0() {
   return (neuron0x2dca950()*0.0684807);
}

double NNfunction_ss_uLuL::synapse0x2de36f0() {
   return (neuron0x2dcac90()*0.0681313);
}

double NNfunction_ss_uLuL::synapse0x2de3730() {
   return (neuron0x2dcafd0()*-0.0647498);
}

double NNfunction_ss_uLuL::synapse0x2de3770() {
   return (neuron0x2dcb310()*0.083408);
}

double NNfunction_ss_uLuL::synapse0x2de37b0() {
   return (neuron0x2dcb650()*0.00943259);
}

double NNfunction_ss_uLuL::synapse0x2de37f0() {
   return (neuron0x2dcb990()*-0.116701);
}

double NNfunction_ss_uLuL::synapse0x2de3830() {
   return (neuron0x2dcbcd0()*0.531436);
}

double NNfunction_ss_uLuL::synapse0x2de3870() {
   return (neuron0x2dcc010()*-0.317452);
}

double NNfunction_ss_uLuL::synapse0x2de38b0() {
   return (neuron0x2dcc350()*0.27498);
}

double NNfunction_ss_uLuL::synapse0x2de38f0() {
   return (neuron0x2dcc690()*0.301991);
}

double NNfunction_ss_uLuL::synapse0x2de3380() {
   return (neuron0x2dcc9d0()*-0.308918);
}

double NNfunction_ss_uLuL::synapse0x2de33c0() {
   return (neuron0x2dccf30()*0.240012);
}

double NNfunction_ss_uLuL::synapse0x2de3a40() {
   return (neuron0x2dcd150()*0.277633);
}

double NNfunction_ss_uLuL::synapse0x2de3a80() {
   return (neuron0x2dcd490()*0.0384285);
}

double NNfunction_ss_uLuL::synapse0x2de3ac0() {
   return (neuron0x2dcd7d0()*-0.0507211);
}

double NNfunction_ss_uLuL::synapse0x2de3b00() {
   return (neuron0x2dcdb10()*0.054613);
}

double NNfunction_ss_uLuL::synapse0x2de3b40() {
   return (neuron0x2dcde50()*0.0224683);
}

double NNfunction_ss_uLuL::synapse0x2de3b80() {
   return (neuron0x2dce190()*-0.00638314);
}

double NNfunction_ss_uLuL::synapse0x2de3f00() {
   return (neuron0x2dc95d0()*0.0536807);
}

double NNfunction_ss_uLuL::synapse0x2dd84d0() {
   return (neuron0x2dc9910()*-0.0153438);
}

double NNfunction_ss_uLuL::synapse0x2dd8510() {
   return (neuron0x2dc9c50()*0.0113958);
}

double NNfunction_ss_uLuL::synapse0x2dd8550() {
   return (neuron0x2dc9f90()*-4.16336);
}

double NNfunction_ss_uLuL::synapse0x2dd87a0() {
   return (neuron0x2dca2d0()*-0.0562116);
}

double NNfunction_ss_uLuL::synapse0x2dd87e0() {
   return (neuron0x2dca610()*-0.0265437);
}

double NNfunction_ss_uLuL::synapse0x2dd8820() {
   return (neuron0x2dca950()*0.0490537);
}

double NNfunction_ss_uLuL::synapse0x2dd8a70() {
   return (neuron0x2dcac90()*-0.0191502);
}

double NNfunction_ss_uLuL::synapse0x2dd8ab0() {
   return (neuron0x2dcafd0()*-0.00869957);
}

double NNfunction_ss_uLuL::synapse0x2dd8d00() {
   return (neuron0x2dcb310()*0.0201929);
}

double NNfunction_ss_uLuL::synapse0x2dd8d40() {
   return (neuron0x2dcb650()*-0.0632787);
}

double NNfunction_ss_uLuL::synapse0x2dd8d80() {
   return (neuron0x2dcb990()*1.82422);
}

double NNfunction_ss_uLuL::synapse0x2dd8fd0() {
   return (neuron0x2dcbcd0()*-0.0455896);
}

double NNfunction_ss_uLuL::synapse0x2dd9010() {
   return (neuron0x2dcc010()*-0.0154086);
}

double NNfunction_ss_uLuL::synapse0x2dd9260() {
   return (neuron0x2dcc350()*0.0561185);
}

double NNfunction_ss_uLuL::synapse0x2dd92a0() {
   return (neuron0x2dcc690()*-0.0272537);
}

double NNfunction_ss_uLuL::synapse0x2de3d50() {
   return (neuron0x2dcc9d0()*0.039542);
}

double NNfunction_ss_uLuL::synapse0x2de3d90() {
   return (neuron0x2dccf30()*0.00785566);
}

double NNfunction_ss_uLuL::synapse0x2dd93f0() {
   return (neuron0x2dcd150()*0.0106399);
}

double NNfunction_ss_uLuL::synapse0x2dd9900() {
   return (neuron0x2dcd490()*0.00684736);
}

double NNfunction_ss_uLuL::synapse0x2dd9940() {
   return (neuron0x2dcd7d0()*0.0338132);
}

double NNfunction_ss_uLuL::synapse0x2dd9980() {
   return (neuron0x2dcdb10()*-0.0256609);
}

double NNfunction_ss_uLuL::synapse0x2dd9bd0() {
   return (neuron0x2dcde50()*-0.00703251);
}

double NNfunction_ss_uLuL::synapse0x2dd9c10() {
   return (neuron0x2dce190()*0.0179914);
}

double NNfunction_ss_uLuL::synapse0x2dd94c0() {
   return (neuron0x2dc95d0()*0.579006);
}

double NNfunction_ss_uLuL::synapse0x2dd9500() {
   return (neuron0x2dc9910()*-0.0228824);
}

double NNfunction_ss_uLuL::synapse0x2dd9540() {
   return (neuron0x2dc9c50()*0.450911);
}

double NNfunction_ss_uLuL::synapse0x2dd9580() {
   return (neuron0x2dc9f90()*-0.879964);
}

double NNfunction_ss_uLuL::synapse0x2dd9f00() {
   return (neuron0x2dca2d0()*-0.384711);
}

double NNfunction_ss_uLuL::synapse0x2de6250() {
   return (neuron0x2dca610()*-0.00759635);
}

double NNfunction_ss_uLuL::synapse0x2de6290() {
   return (neuron0x2dca950()*-0.144704);
}

double NNfunction_ss_uLuL::synapse0x2de62d0() {
   return (neuron0x2dcac90()*-0.141828);
}

double NNfunction_ss_uLuL::synapse0x2de6310() {
   return (neuron0x2dcafd0()*-0.225206);
}

double NNfunction_ss_uLuL::synapse0x2de6350() {
   return (neuron0x2dcb310()*0.263006);
}

double NNfunction_ss_uLuL::synapse0x2de6390() {
   return (neuron0x2dcb650()*-0.62791);
}

double NNfunction_ss_uLuL::synapse0x2de63d0() {
   return (neuron0x2dcb990()*0.138173);
}

double NNfunction_ss_uLuL::synapse0x2de6410() {
   return (neuron0x2dcbcd0()*-0.129366);
}

double NNfunction_ss_uLuL::synapse0x2de6450() {
   return (neuron0x2dcc010()*0.148266);
}

double NNfunction_ss_uLuL::synapse0x2de6490() {
   return (neuron0x2dcc350()*-0.161354);
}

double NNfunction_ss_uLuL::synapse0x2de64d0() {
   return (neuron0x2dcc690()*-0.20729);
}

double NNfunction_ss_uLuL::synapse0x2dd9de0() {
   return (neuron0x2dcc9d0()*0.494871);
}

double NNfunction_ss_uLuL::synapse0x2dd9e20() {
   return (neuron0x2dccf30()*0.275348);
}

double NNfunction_ss_uLuL::synapse0x2de6620() {
   return (neuron0x2dcd150()*-0.427981);
}

double NNfunction_ss_uLuL::synapse0x2de6660() {
   return (neuron0x2dcd490()*0.0603949);
}

double NNfunction_ss_uLuL::synapse0x2de66a0() {
   return (neuron0x2dcd7d0()*0.494093);
}

double NNfunction_ss_uLuL::synapse0x2de66e0() {
   return (neuron0x2dcdb10()*-0.323145);
}

double NNfunction_ss_uLuL::synapse0x2de6720() {
   return (neuron0x2dcde50()*-0.85302);
}

double NNfunction_ss_uLuL::synapse0x2de6760() {
   return (neuron0x2dce190()*0.719295);
}

double NNfunction_ss_uLuL::synapse0x2de6ae0() {
   return (neuron0x2dc95d0()*0.271213);
}

double NNfunction_ss_uLuL::synapse0x2de6b20() {
   return (neuron0x2dc9910()*0.383206);
}

double NNfunction_ss_uLuL::synapse0x2de6b60() {
   return (neuron0x2dc9c50()*-0.755673);
}

double NNfunction_ss_uLuL::synapse0x2de6ba0() {
   return (neuron0x2dc9f90()*-0.43227);
}

double NNfunction_ss_uLuL::synapse0x2de6be0() {
   return (neuron0x2dca2d0()*-0.30821);
}

double NNfunction_ss_uLuL::synapse0x2de6c20() {
   return (neuron0x2dca610()*-0.24112);
}

double NNfunction_ss_uLuL::synapse0x2de6c60() {
   return (neuron0x2dca950()*0.382668);
}

double NNfunction_ss_uLuL::synapse0x2de6ca0() {
   return (neuron0x2dcac90()*-0.370852);
}

double NNfunction_ss_uLuL::synapse0x2de6ce0() {
   return (neuron0x2dcafd0()*-0.109791);
}

double NNfunction_ss_uLuL::synapse0x2de6d20() {
   return (neuron0x2dcb310()*0.723217);
}

double NNfunction_ss_uLuL::synapse0x2de6d60() {
   return (neuron0x2dcb650()*0.587347);
}

double NNfunction_ss_uLuL::synapse0x2de6da0() {
   return (neuron0x2dcb990()*0.0824903);
}

double NNfunction_ss_uLuL::synapse0x2de6de0() {
   return (neuron0x2dcbcd0()*0.677131);
}

double NNfunction_ss_uLuL::synapse0x2de6e20() {
   return (neuron0x2dcc010()*0.249673);
}

double NNfunction_ss_uLuL::synapse0x2de6e60() {
   return (neuron0x2dcc350()*-0.589619);
}

double NNfunction_ss_uLuL::synapse0x2de6ea0() {
   return (neuron0x2dcc690()*-0.484404);
}

double NNfunction_ss_uLuL::synapse0x2de6930() {
   return (neuron0x2dcc9d0()*-0.177806);
}

double NNfunction_ss_uLuL::synapse0x2de6970() {
   return (neuron0x2dccf30()*0.306354);
}

double NNfunction_ss_uLuL::synapse0x2de6ff0() {
   return (neuron0x2dcd150()*-0.692505);
}

double NNfunction_ss_uLuL::synapse0x2de7030() {
   return (neuron0x2dcd490()*0.36633);
}

double NNfunction_ss_uLuL::synapse0x2de7070() {
   return (neuron0x2dcd7d0()*-0.406805);
}

double NNfunction_ss_uLuL::synapse0x2de70b0() {
   return (neuron0x2dcdb10()*0.16221);
}

double NNfunction_ss_uLuL::synapse0x2de70f0() {
   return (neuron0x2dcde50()*-0.45323);
}

double NNfunction_ss_uLuL::synapse0x2de7130() {
   return (neuron0x2dce190()*-0.00609531);
}

double NNfunction_ss_uLuL::synapse0x2de74b0() {
   return (neuron0x2dc95d0()*0.0563103);
}

double NNfunction_ss_uLuL::synapse0x2de74f0() {
   return (neuron0x2dc9910()*0.0116115);
}

double NNfunction_ss_uLuL::synapse0x2de7530() {
   return (neuron0x2dc9c50()*0.0403455);
}

double NNfunction_ss_uLuL::synapse0x2de7570() {
   return (neuron0x2dc9f90()*-0.405311);
}

double NNfunction_ss_uLuL::synapse0x2de75b0() {
   return (neuron0x2dca2d0()*0.0403314);
}

double NNfunction_ss_uLuL::synapse0x2de75f0() {
   return (neuron0x2dca610()*-3.59815e-05);
}

double NNfunction_ss_uLuL::synapse0x2de7630() {
   return (neuron0x2dca950()*-0.0449583);
}

double NNfunction_ss_uLuL::synapse0x2de7670() {
   return (neuron0x2dcac90()*-0.0156769);
}

double NNfunction_ss_uLuL::synapse0x2de76b0() {
   return (neuron0x2dcafd0()*0.131368);
}

double NNfunction_ss_uLuL::synapse0x2de76f0() {
   return (neuron0x2dcb310()*-0.00790398);
}

double NNfunction_ss_uLuL::synapse0x2de7730() {
   return (neuron0x2dcb650()*0.0306731);
}

double NNfunction_ss_uLuL::synapse0x2de7770() {
   return (neuron0x2dcb990()*-0.886932);
}

double NNfunction_ss_uLuL::synapse0x2de77b0() {
   return (neuron0x2dcbcd0()*0.0379504);
}

double NNfunction_ss_uLuL::synapse0x2de77f0() {
   return (neuron0x2dcc010()*0.00552189);
}

double NNfunction_ss_uLuL::synapse0x2de7830() {
   return (neuron0x2dcc350()*-0.0243166);
}

double NNfunction_ss_uLuL::synapse0x2de7870() {
   return (neuron0x2dcc690()*0.0143201);
}

double NNfunction_ss_uLuL::synapse0x2de7300() {
   return (neuron0x2dcc9d0()*-0.0623285);
}

double NNfunction_ss_uLuL::synapse0x2de7340() {
   return (neuron0x2dccf30()*0.0453753);
}

double NNfunction_ss_uLuL::synapse0x2de79c0() {
   return (neuron0x2dcd150()*-0.0255873);
}

double NNfunction_ss_uLuL::synapse0x2de7a00() {
   return (neuron0x2dcd490()*0.0510157);
}

double NNfunction_ss_uLuL::synapse0x2de7a40() {
   return (neuron0x2dcd7d0()*-0.0110442);
}

double NNfunction_ss_uLuL::synapse0x2de7a80() {
   return (neuron0x2dcdb10()*0.0641946);
}

double NNfunction_ss_uLuL::synapse0x2de7ac0() {
   return (neuron0x2dcde50()*0.0637256);
}

double NNfunction_ss_uLuL::synapse0x2de7b00() {
   return (neuron0x2dce190()*-0.0264787);
}

double NNfunction_ss_uLuL::synapse0x2de7e80() {
   return (neuron0x2dc95d0()*-0.187236);
}

double NNfunction_ss_uLuL::synapse0x2de7ec0() {
   return (neuron0x2dc9910()*-0.0332395);
}

double NNfunction_ss_uLuL::synapse0x2de7f00() {
   return (neuron0x2dc9c50()*-0.150054);
}

double NNfunction_ss_uLuL::synapse0x2de7f40() {
   return (neuron0x2dc9f90()*-0.250939);
}

double NNfunction_ss_uLuL::synapse0x2de7f80() {
   return (neuron0x2dca2d0()*0.254841);
}

double NNfunction_ss_uLuL::synapse0x2de7fc0() {
   return (neuron0x2dca610()*0.2674);
}

double NNfunction_ss_uLuL::synapse0x2de8000() {
   return (neuron0x2dca950()*0.170242);
}

double NNfunction_ss_uLuL::synapse0x2de8040() {
   return (neuron0x2dcac90()*0.0172604);
}

double NNfunction_ss_uLuL::synapse0x2de8080() {
   return (neuron0x2dcafd0()*-0.474964);
}

double NNfunction_ss_uLuL::synapse0x2de80c0() {
   return (neuron0x2dcb310()*-0.225712);
}

double NNfunction_ss_uLuL::synapse0x2de8100() {
   return (neuron0x2dcb650()*-0.471458);
}

double NNfunction_ss_uLuL::synapse0x2de8140() {
   return (neuron0x2dcb990()*-1.88797);
}

double NNfunction_ss_uLuL::synapse0x2de8180() {
   return (neuron0x2dcbcd0()*-0.166096);
}

double NNfunction_ss_uLuL::synapse0x2de81c0() {
   return (neuron0x2dcc010()*-0.0514004);
}

double NNfunction_ss_uLuL::synapse0x2de8200() {
   return (neuron0x2dcc350()*-0.194034);
}

double NNfunction_ss_uLuL::synapse0x2de8240() {
   return (neuron0x2dcc690()*0.0150598);
}

double NNfunction_ss_uLuL::synapse0x2de7cd0() {
   return (neuron0x2dcc9d0()*0.128438);
}

double NNfunction_ss_uLuL::synapse0x2de7d10() {
   return (neuron0x2dccf30()*0.232181);
}

double NNfunction_ss_uLuL::synapse0x2de8390() {
   return (neuron0x2dcd150()*-0.386693);
}

double NNfunction_ss_uLuL::synapse0x2de83d0() {
   return (neuron0x2dcd490()*0.52493);
}

double NNfunction_ss_uLuL::synapse0x2de8410() {
   return (neuron0x2dcd7d0()*0.187405);
}

double NNfunction_ss_uLuL::synapse0x2de8450() {
   return (neuron0x2dcdb10()*-0.330772);
}

double NNfunction_ss_uLuL::synapse0x2de8490() {
   return (neuron0x2dcde50()*-0.339228);
}

double NNfunction_ss_uLuL::synapse0x2de84d0() {
   return (neuron0x2dce190()*-0.000183687);
}

double NNfunction_ss_uLuL::synapse0x2de8850() {
   return (neuron0x2dc95d0()*0.0732284);
}

double NNfunction_ss_uLuL::synapse0x2de8890() {
   return (neuron0x2dc9910()*0.222062);
}

double NNfunction_ss_uLuL::synapse0x2de88d0() {
   return (neuron0x2dc9c50()*0.530772);
}

double NNfunction_ss_uLuL::synapse0x2de8910() {
   return (neuron0x2dc9f90()*-0.387602);
}

double NNfunction_ss_uLuL::synapse0x2de8950() {
   return (neuron0x2dca2d0()*-0.134572);
}

double NNfunction_ss_uLuL::synapse0x2de8990() {
   return (neuron0x2dca610()*0.424314);
}

double NNfunction_ss_uLuL::synapse0x2de89d0() {
   return (neuron0x2dca950()*0.54444);
}

double NNfunction_ss_uLuL::synapse0x2de8a10() {
   return (neuron0x2dcac90()*-0.133799);
}

double NNfunction_ss_uLuL::synapse0x2de8a50() {
   return (neuron0x2dcafd0()*-0.492021);
}

double NNfunction_ss_uLuL::synapse0x2de8a90() {
   return (neuron0x2dcb310()*-0.25641);
}

double NNfunction_ss_uLuL::synapse0x2de8ad0() {
   return (neuron0x2dcb650()*-0.197314);
}

double NNfunction_ss_uLuL::synapse0x2de8b10() {
   return (neuron0x2dcb990()*-0.171805);
}

double NNfunction_ss_uLuL::synapse0x2de8b50() {
   return (neuron0x2dcbcd0()*-0.0688131);
}

double NNfunction_ss_uLuL::synapse0x2de8b90() {
   return (neuron0x2dcc010()*0.13517);
}

double NNfunction_ss_uLuL::synapse0x2de8bd0() {
   return (neuron0x2dcc350()*-0.00933044);
}

double NNfunction_ss_uLuL::synapse0x2de8c10() {
   return (neuron0x2dcc690()*0.0429726);
}

double NNfunction_ss_uLuL::synapse0x2de86a0() {
   return (neuron0x2dcc9d0()*0.0892245);
}

double NNfunction_ss_uLuL::synapse0x2de86e0() {
   return (neuron0x2dccf30()*0.527582);
}

double NNfunction_ss_uLuL::synapse0x2de8d60() {
   return (neuron0x2dcd150()*0.241741);
}

double NNfunction_ss_uLuL::synapse0x2de8da0() {
   return (neuron0x2dcd490()*-0.259694);
}

double NNfunction_ss_uLuL::synapse0x2de8de0() {
   return (neuron0x2dcd7d0()*-0.157689);
}

double NNfunction_ss_uLuL::synapse0x2de8e20() {
   return (neuron0x2dcdb10()*-0.0127584);
}

double NNfunction_ss_uLuL::synapse0x2de8e60() {
   return (neuron0x2dcde50()*0.270826);
}

double NNfunction_ss_uLuL::synapse0x2de8ea0() {
   return (neuron0x2dce190()*0.227994);
}

double NNfunction_ss_uLuL::synapse0x2de9220() {
   return (neuron0x2dc95d0()*-0.0481679);
}

double NNfunction_ss_uLuL::synapse0x2de9260() {
   return (neuron0x2dc9910()*-0.0602817);
}

double NNfunction_ss_uLuL::synapse0x2de92a0() {
   return (neuron0x2dc9c50()*1.56989);
}

double NNfunction_ss_uLuL::synapse0x2de92e0() {
   return (neuron0x2dc9f90()*-0.19843);
}

double NNfunction_ss_uLuL::synapse0x2de9320() {
   return (neuron0x2dca2d0()*0.0544103);
}

double NNfunction_ss_uLuL::synapse0x2de9360() {
   return (neuron0x2dca610()*0.0434537);
}

double NNfunction_ss_uLuL::synapse0x2de93a0() {
   return (neuron0x2dca950()*-0.0297706);
}

double NNfunction_ss_uLuL::synapse0x2de93e0() {
   return (neuron0x2dcac90()*0.0633123);
}

double NNfunction_ss_uLuL::synapse0x2de9420() {
   return (neuron0x2dcafd0()*-0.0306273);
}

double NNfunction_ss_uLuL::synapse0x2de9460() {
   return (neuron0x2dcb310()*0.0156964);
}

double NNfunction_ss_uLuL::synapse0x2de94a0() {
   return (neuron0x2dcb650()*-0.0585435);
}

double NNfunction_ss_uLuL::synapse0x2de94e0() {
   return (neuron0x2dcb990()*-0.970392);
}

double NNfunction_ss_uLuL::synapse0x2de9520() {
   return (neuron0x2dcbcd0()*-0.0373489);
}

double NNfunction_ss_uLuL::synapse0x2de9560() {
   return (neuron0x2dcc010()*0.0271579);
}

double NNfunction_ss_uLuL::synapse0x2de95a0() {
   return (neuron0x2dcc350()*0.0404282);
}

double NNfunction_ss_uLuL::synapse0x2de95e0() {
   return (neuron0x2dcc690()*-0.0227467);
}

double NNfunction_ss_uLuL::synapse0x2de9070() {
   return (neuron0x2dcc9d0()*0.0590624);
}

double NNfunction_ss_uLuL::synapse0x2de90b0() {
   return (neuron0x2dccf30()*0.0811593);
}

double NNfunction_ss_uLuL::synapse0x2de9730() {
   return (neuron0x2dcd150()*0.00983629);
}

double NNfunction_ss_uLuL::synapse0x2de9770() {
   return (neuron0x2dcd490()*-0.137347);
}

double NNfunction_ss_uLuL::synapse0x2de97b0() {
   return (neuron0x2dcd7d0()*0.0367133);
}

double NNfunction_ss_uLuL::synapse0x2de97f0() {
   return (neuron0x2dcdb10()*-0.0485461);
}

double NNfunction_ss_uLuL::synapse0x2de9830() {
   return (neuron0x2dcde50()*0.0884531);
}

double NNfunction_ss_uLuL::synapse0x2de9870() {
   return (neuron0x2dce190()*-0.0584812);
}

double NNfunction_ss_uLuL::synapse0x2de9bf0() {
   return (neuron0x2dc95d0()*0.00845614);
}

double NNfunction_ss_uLuL::synapse0x2de9c30() {
   return (neuron0x2dc9910()*-0.00285628);
}

double NNfunction_ss_uLuL::synapse0x2de9c70() {
   return (neuron0x2dc9c50()*-0.0149582);
}

double NNfunction_ss_uLuL::synapse0x2de9cb0() {
   return (neuron0x2dc9f90()*-16.6868);
}

double NNfunction_ss_uLuL::synapse0x2de9cf0() {
   return (neuron0x2dca2d0()*0.0217609);
}

double NNfunction_ss_uLuL::synapse0x2de9d30() {
   return (neuron0x2dca610()*0.0185546);
}

double NNfunction_ss_uLuL::synapse0x2de9d70() {
   return (neuron0x2dca950()*0.0112152);
}

double NNfunction_ss_uLuL::synapse0x2de9db0() {
   return (neuron0x2dcac90()*0.00491445);
}

double NNfunction_ss_uLuL::synapse0x2de9df0() {
   return (neuron0x2dcafd0()*-0.0191286);
}

double NNfunction_ss_uLuL::synapse0x2de9e30() {
   return (neuron0x2dcb310()*0.00326254);
}

double NNfunction_ss_uLuL::synapse0x2de9e70() {
   return (neuron0x2dcb650()*-0.00516487);
}

double NNfunction_ss_uLuL::synapse0x2de9eb0() {
   return (neuron0x2dcb990()*0.404846);
}

double NNfunction_ss_uLuL::synapse0x2de9ef0() {
   return (neuron0x2dcbcd0()*0.0380032);
}

double NNfunction_ss_uLuL::synapse0x2de9f30() {
   return (neuron0x2dcc010()*-0.0178841);
}

double NNfunction_ss_uLuL::synapse0x2de9f70() {
   return (neuron0x2dcc350()*-0.0117566);
}

double NNfunction_ss_uLuL::synapse0x2de9fb0() {
   return (neuron0x2dcc690()*0.0293404);
}

double NNfunction_ss_uLuL::synapse0x2de9a40() {
   return (neuron0x2dcc9d0()*-0.00275588);
}

double NNfunction_ss_uLuL::synapse0x2de9a80() {
   return (neuron0x2dccf30()*0.0216602);
}

double NNfunction_ss_uLuL::synapse0x2dea100() {
   return (neuron0x2dcd150()*-0.0109668);
}

double NNfunction_ss_uLuL::synapse0x2dea140() {
   return (neuron0x2dcd490()*0.00088545);
}

double NNfunction_ss_uLuL::synapse0x2dea180() {
   return (neuron0x2dcd7d0()*-0.0012594);
}

double NNfunction_ss_uLuL::synapse0x2dea1c0() {
   return (neuron0x2dcdb10()*-0.0171908);
}

double NNfunction_ss_uLuL::synapse0x2dea200() {
   return (neuron0x2dcde50()*-0.00957419);
}

double NNfunction_ss_uLuL::synapse0x2dea240() {
   return (neuron0x2dce190()*0.00030304);
}

double NNfunction_ss_uLuL::synapse0x2dea5c0() {
   return (neuron0x2dc95d0()*0.00779853);
}

double NNfunction_ss_uLuL::synapse0x2dea600() {
   return (neuron0x2dc9910()*0.00177418);
}

double NNfunction_ss_uLuL::synapse0x2dea640() {
   return (neuron0x2dc9c50()*0.00941739);
}

double NNfunction_ss_uLuL::synapse0x2dea680() {
   return (neuron0x2dc9f90()*13.7993);
}

double NNfunction_ss_uLuL::synapse0x2dea6c0() {
   return (neuron0x2dca2d0()*0.00207733);
}

double NNfunction_ss_uLuL::synapse0x2dea700() {
   return (neuron0x2dca610()*-0.00452725);
}

double NNfunction_ss_uLuL::synapse0x2dea740() {
   return (neuron0x2dca950()*-0.0210024);
}

double NNfunction_ss_uLuL::synapse0x2dea780() {
   return (neuron0x2dcac90()*-0.030158);
}

double NNfunction_ss_uLuL::synapse0x2dea7c0() {
   return (neuron0x2dcafd0()*-0.0153974);
}

double NNfunction_ss_uLuL::synapse0x2dea800() {
   return (neuron0x2dcb310()*0.00366722);
}

double NNfunction_ss_uLuL::synapse0x2dea840() {
   return (neuron0x2dcb650()*0.00495253);
}

double NNfunction_ss_uLuL::synapse0x2dea880() {
   return (neuron0x2dcb990()*0.491838);
}

double NNfunction_ss_uLuL::synapse0x2dea8c0() {
   return (neuron0x2dcbcd0()*0.00241844);
}

double NNfunction_ss_uLuL::synapse0x2dea900() {
   return (neuron0x2dcc010()*-0.00450023);
}

double NNfunction_ss_uLuL::synapse0x2dea940() {
   return (neuron0x2dcc350()*0.031408);
}

double NNfunction_ss_uLuL::synapse0x2dea980() {
   return (neuron0x2dcc690()*0.0285922);
}

double NNfunction_ss_uLuL::synapse0x2dea410() {
   return (neuron0x2dcc9d0()*-0.00444803);
}

double NNfunction_ss_uLuL::synapse0x2dea450() {
   return (neuron0x2dccf30()*-0.0189103);
}

double NNfunction_ss_uLuL::synapse0x2deaad0() {
   return (neuron0x2dcd150()*-0.0290954);
}

double NNfunction_ss_uLuL::synapse0x2deab10() {
   return (neuron0x2dcd490()*0.00617583);
}

double NNfunction_ss_uLuL::synapse0x2deab50() {
   return (neuron0x2dcd7d0()*0.00696603);
}

double NNfunction_ss_uLuL::synapse0x2deab90() {
   return (neuron0x2dcdb10()*0.0225543);
}

double NNfunction_ss_uLuL::synapse0x2deabd0() {
   return (neuron0x2dcde50()*0.0120555);
}

double NNfunction_ss_uLuL::synapse0x2deac10() {
   return (neuron0x2dce190()*0.000623996);
}

double NNfunction_ss_uLuL::synapse0x2dd36c0() {
   return (neuron0x2dc95d0()*-0.02476);
}

double NNfunction_ss_uLuL::synapse0x2dd3700() {
   return (neuron0x2dc9910()*-0.321348);
}

double NNfunction_ss_uLuL::synapse0x2dd3740() {
   return (neuron0x2dc9c50()*0.0915424);
}

double NNfunction_ss_uLuL::synapse0x2dd3780() {
   return (neuron0x2dc9f90()*-0.782218);
}

double NNfunction_ss_uLuL::synapse0x2dd37c0() {
   return (neuron0x2dca2d0()*0.740536);
}

double NNfunction_ss_uLuL::synapse0x2dd3800() {
   return (neuron0x2dca610()*0.192506);
}

double NNfunction_ss_uLuL::synapse0x2dd3840() {
   return (neuron0x2dca950()*-0.00394976);
}

double NNfunction_ss_uLuL::synapse0x2dd3880() {
   return (neuron0x2dcac90()*-0.363793);
}

double NNfunction_ss_uLuL::synapse0x2deb3a0() {
   return (neuron0x2dcafd0()*-0.222958);
}

double NNfunction_ss_uLuL::synapse0x2deb3e0() {
   return (neuron0x2dcb310()*0.150383);
}

double NNfunction_ss_uLuL::synapse0x2deb420() {
   return (neuron0x2dcb650()*-0.107156);
}

double NNfunction_ss_uLuL::synapse0x2deb460() {
   return (neuron0x2dcb990()*0.37574);
}

double NNfunction_ss_uLuL::synapse0x2deb4a0() {
   return (neuron0x2dcbcd0()*0.108625);
}

double NNfunction_ss_uLuL::synapse0x2deb4e0() {
   return (neuron0x2dcc010()*-0.529328);
}

double NNfunction_ss_uLuL::synapse0x2deb520() {
   return (neuron0x2dcc350()*-0.303722);
}

double NNfunction_ss_uLuL::synapse0x2deb560() {
   return (neuron0x2dcc690()*0.220419);
}

double NNfunction_ss_uLuL::synapse0x2deade0() {
   return (neuron0x2dcc9d0()*-0.658241);
}

double NNfunction_ss_uLuL::synapse0x2deae20() {
   return (neuron0x2dccf30()*-0.0384372);
}

double NNfunction_ss_uLuL::synapse0x2deb6b0() {
   return (neuron0x2dcd150()*0.0418305);
}

double NNfunction_ss_uLuL::synapse0x2deb6f0() {
   return (neuron0x2dcd490()*-0.226477);
}

double NNfunction_ss_uLuL::synapse0x2deb730() {
   return (neuron0x2dcd7d0()*-0.608749);
}

double NNfunction_ss_uLuL::synapse0x2deb770() {
   return (neuron0x2dcdb10()*0.231448);
}

double NNfunction_ss_uLuL::synapse0x2deb7b0() {
   return (neuron0x2dcde50()*0.301422);
}

double NNfunction_ss_uLuL::synapse0x2deb7f0() {
   return (neuron0x2dce190()*-0.501717);
}

double NNfunction_ss_uLuL::synapse0x2debb70() {
   return (neuron0x2dc95d0()*-0.476821);
}

double NNfunction_ss_uLuL::synapse0x2debbb0() {
   return (neuron0x2dc9910()*-0.0117752);
}

double NNfunction_ss_uLuL::synapse0x2debbf0() {
   return (neuron0x2dc9c50()*-1.2273);
}

double NNfunction_ss_uLuL::synapse0x2debc30() {
   return (neuron0x2dc9f90()*-1.08874);
}

double NNfunction_ss_uLuL::synapse0x2debc70() {
   return (neuron0x2dca2d0()*-0.130853);
}

double NNfunction_ss_uLuL::synapse0x2debcb0() {
   return (neuron0x2dca610()*-0.427689);
}

double NNfunction_ss_uLuL::synapse0x2debcf0() {
   return (neuron0x2dca950()*-0.467487);
}

double NNfunction_ss_uLuL::synapse0x2debd30() {
   return (neuron0x2dcac90()*0.312553);
}

double NNfunction_ss_uLuL::synapse0x2debd70() {
   return (neuron0x2dcafd0()*-0.120165);
}

double NNfunction_ss_uLuL::synapse0x2debdb0() {
   return (neuron0x2dcb310()*-0.197458);
}

double NNfunction_ss_uLuL::synapse0x2debdf0() {
   return (neuron0x2dcb650()*0.0988385);
}

double NNfunction_ss_uLuL::synapse0x2debe30() {
   return (neuron0x2dcb990()*1.15107);
}

double NNfunction_ss_uLuL::synapse0x2debe70() {
   return (neuron0x2dcbcd0()*-0.0132208);
}

double NNfunction_ss_uLuL::synapse0x2debeb0() {
   return (neuron0x2dcc010()*0.585925);
}

double NNfunction_ss_uLuL::synapse0x2debef0() {
   return (neuron0x2dcc350()*-0.110478);
}

double NNfunction_ss_uLuL::synapse0x2debf30() {
   return (neuron0x2dcc690()*-0.101472);
}

double NNfunction_ss_uLuL::synapse0x2deb9c0() {
   return (neuron0x2dcc9d0()*-0.271727);
}

double NNfunction_ss_uLuL::synapse0x2deba00() {
   return (neuron0x2dccf30()*-0.421617);
}

double NNfunction_ss_uLuL::synapse0x2dec080() {
   return (neuron0x2dcd150()*-0.0570627);
}

double NNfunction_ss_uLuL::synapse0x2dec0c0() {
   return (neuron0x2dcd490()*-0.102765);
}

double NNfunction_ss_uLuL::synapse0x2dec100() {
   return (neuron0x2dcd7d0()*0.0228891);
}

double NNfunction_ss_uLuL::synapse0x2dec140() {
   return (neuron0x2dcdb10()*0.186815);
}

double NNfunction_ss_uLuL::synapse0x2dec180() {
   return (neuron0x2dcde50()*-0.180953);
}

double NNfunction_ss_uLuL::synapse0x2dec1c0() {
   return (neuron0x2dce190()*-0.530367);
}

double NNfunction_ss_uLuL::synapse0x2dec540() {
   return (neuron0x2dc95d0()*0.107842);
}

double NNfunction_ss_uLuL::synapse0x2dec580() {
   return (neuron0x2dc9910()*-0.0457687);
}

double NNfunction_ss_uLuL::synapse0x2dec5c0() {
   return (neuron0x2dc9c50()*0.435077);
}

double NNfunction_ss_uLuL::synapse0x2dec600() {
   return (neuron0x2dc9f90()*0.749991);
}

double NNfunction_ss_uLuL::synapse0x2dec640() {
   return (neuron0x2dca2d0()*-0.159432);
}

double NNfunction_ss_uLuL::synapse0x2dec680() {
   return (neuron0x2dca610()*-0.208698);
}

double NNfunction_ss_uLuL::synapse0x2dec6c0() {
   return (neuron0x2dca950()*0.672265);
}

double NNfunction_ss_uLuL::synapse0x2dec700() {
   return (neuron0x2dcac90()*-0.220008);
}

double NNfunction_ss_uLuL::synapse0x2dec740() {
   return (neuron0x2dcafd0()*-0.172249);
}

double NNfunction_ss_uLuL::synapse0x2dec780() {
   return (neuron0x2dcb310()*0.0188245);
}

double NNfunction_ss_uLuL::synapse0x2dec7c0() {
   return (neuron0x2dcb650()*0.169423);
}

double NNfunction_ss_uLuL::synapse0x2dec800() {
   return (neuron0x2dcb990()*-0.387091);
}

double NNfunction_ss_uLuL::synapse0x2dec840() {
   return (neuron0x2dcbcd0()*-0.170196);
}

double NNfunction_ss_uLuL::synapse0x2dec880() {
   return (neuron0x2dcc010()*0.197386);
}

double NNfunction_ss_uLuL::synapse0x2dec8c0() {
   return (neuron0x2dcc350()*-0.0552903);
}

double NNfunction_ss_uLuL::synapse0x2dec900() {
   return (neuron0x2dcc690()*-0.422483);
}

double NNfunction_ss_uLuL::synapse0x2dec390() {
   return (neuron0x2dcc9d0()*-0.28786);
}

double NNfunction_ss_uLuL::synapse0x2dec3d0() {
   return (neuron0x2dccf30()*0.178059);
}

double NNfunction_ss_uLuL::synapse0x2ddcf00() {
   return (neuron0x2dcd150()*0.56499);
}

double NNfunction_ss_uLuL::synapse0x2ddcf40() {
   return (neuron0x2dcd490()*0.0683063);
}

double NNfunction_ss_uLuL::synapse0x2ddcf80() {
   return (neuron0x2dcd7d0()*-0.0478764);
}

double NNfunction_ss_uLuL::synapse0x2ddcfc0() {
   return (neuron0x2dcdb10()*0.080994);
}

double NNfunction_ss_uLuL::synapse0x2ddd000() {
   return (neuron0x2dcde50()*-0.318928);
}

double NNfunction_ss_uLuL::synapse0x2ddd040() {
   return (neuron0x2dce190()*-0.671709);
}

double NNfunction_ss_uLuL::synapse0x2ddd3c0() {
   return (neuron0x2dc95d0()*-0.0342078);
}

double NNfunction_ss_uLuL::synapse0x2ddd400() {
   return (neuron0x2dc9910()*0.0246754);
}

double NNfunction_ss_uLuL::synapse0x2ddd440() {
   return (neuron0x2dc9c50()*-0.789959);
}

double NNfunction_ss_uLuL::synapse0x2ddd480() {
   return (neuron0x2dc9f90()*-0.899188);
}

double NNfunction_ss_uLuL::synapse0x2ddd4c0() {
   return (neuron0x2dca2d0()*-0.0102891);
}

double NNfunction_ss_uLuL::synapse0x2ddd500() {
   return (neuron0x2dca610()*-0.0248585);
}

double NNfunction_ss_uLuL::synapse0x2ddd540() {
   return (neuron0x2dca950()*0.0591286);
}

double NNfunction_ss_uLuL::synapse0x2ddd580() {
   return (neuron0x2dcac90()*-0.0173755);
}

double NNfunction_ss_uLuL::synapse0x2ddd5c0() {
   return (neuron0x2dcafd0()*-0.00730895);
}

double NNfunction_ss_uLuL::synapse0x2ddd600() {
   return (neuron0x2dcb310()*-0.00118227);
}

double NNfunction_ss_uLuL::synapse0x2ddd640() {
   return (neuron0x2dcb650()*0.00160497);
}

double NNfunction_ss_uLuL::synapse0x2ddd680() {
   return (neuron0x2dcb990()*0.869636);
}

double NNfunction_ss_uLuL::synapse0x2ddd6c0() {
   return (neuron0x2dcbcd0()*-0.0606638);
}

double NNfunction_ss_uLuL::synapse0x2ddd700() {
   return (neuron0x2dcc010()*0.0145822);
}

double NNfunction_ss_uLuL::synapse0x2ddd740() {
   return (neuron0x2dcc350()*-0.0486812);
}

double NNfunction_ss_uLuL::synapse0x2ddd780() {
   return (neuron0x2dcc690()*-0.0035175);
}

double NNfunction_ss_uLuL::synapse0x2ddd210() {
   return (neuron0x2dcc9d0()*-0.0290793);
}

double NNfunction_ss_uLuL::synapse0x2ddd250() {
   return (neuron0x2dccf30()*0.00762144);
}

double NNfunction_ss_uLuL::synapse0x2ddd8d0() {
   return (neuron0x2dcd150()*0.0350051);
}

double NNfunction_ss_uLuL::synapse0x2ddd910() {
   return (neuron0x2dcd490()*-0.00430983);
}

double NNfunction_ss_uLuL::synapse0x2ddd950() {
   return (neuron0x2dcd7d0()*-0.0235566);
}

double NNfunction_ss_uLuL::synapse0x2ddd990() {
   return (neuron0x2dcdb10()*-0.0320354);
}

double NNfunction_ss_uLuL::synapse0x2ddd9d0() {
   return (neuron0x2dcde50()*0.00637222);
}

double NNfunction_ss_uLuL::synapse0x2ddda10() {
   return (neuron0x2dce190()*-0.0186885);
}

double NNfunction_ss_uLuL::synapse0x2dddd90() {
   return (neuron0x2dc95d0()*-0.0851312);
}

double NNfunction_ss_uLuL::synapse0x2ddddd0() {
   return (neuron0x2dc9910()*-0.0666838);
}

double NNfunction_ss_uLuL::synapse0x2ddde10() {
   return (neuron0x2dc9c50()*-0.0505733);
}

double NNfunction_ss_uLuL::synapse0x2ddde50() {
   return (neuron0x2dc9f90()*0.328842);
}

double NNfunction_ss_uLuL::synapse0x2ddde90() {
   return (neuron0x2dca2d0()*0.00711832);
}

double NNfunction_ss_uLuL::synapse0x2ddded0() {
   return (neuron0x2dca610()*0.0982568);
}

double NNfunction_ss_uLuL::synapse0x2dddf10() {
   return (neuron0x2dca950()*0.0731619);
}

double NNfunction_ss_uLuL::synapse0x2dddf50() {
   return (neuron0x2dcac90()*-0.0105671);
}

double NNfunction_ss_uLuL::synapse0x2dddf90() {
   return (neuron0x2dcafd0()*-0.0541695);
}

double NNfunction_ss_uLuL::synapse0x2dddfd0() {
   return (neuron0x2dcb310()*-0.0308522);
}

double NNfunction_ss_uLuL::synapse0x2dde010() {
   return (neuron0x2dcb650()*-0.0392718);
}

double NNfunction_ss_uLuL::synapse0x2dde050() {
   return (neuron0x2dcb990()*0.145464);
}

double NNfunction_ss_uLuL::synapse0x2dde090() {
   return (neuron0x2dcbcd0()*-0.0323479);
}

double NNfunction_ss_uLuL::synapse0x2dde0d0() {
   return (neuron0x2dcc010()*-0.00381358);
}

double NNfunction_ss_uLuL::synapse0x2dde110() {
   return (neuron0x2dcc350()*0.0394319);
}

double NNfunction_ss_uLuL::synapse0x2dde150() {
   return (neuron0x2dcc690()*0.0598922);
}

double NNfunction_ss_uLuL::synapse0x2dddbe0() {
   return (neuron0x2dcc9d0()*0.0141392);
}

double NNfunction_ss_uLuL::synapse0x2dddc20() {
   return (neuron0x2dccf30()*0.0432029);
}

double NNfunction_ss_uLuL::synapse0x2dde2a0() {
   return (neuron0x2dcd150()*0.0251186);
}

double NNfunction_ss_uLuL::synapse0x2dde2e0() {
   return (neuron0x2dcd490()*0.00345836);
}

double NNfunction_ss_uLuL::synapse0x2dde320() {
   return (neuron0x2dcd7d0()*0.0133749);
}

double NNfunction_ss_uLuL::synapse0x2dde360() {
   return (neuron0x2dcdb10()*-0.0791449);
}

double NNfunction_ss_uLuL::synapse0x2dde3a0() {
   return (neuron0x2dcde50()*-0.0635812);
}

double NNfunction_ss_uLuL::synapse0x2dde3e0() {
   return (neuron0x2dce190()*-0.00346152);
}

double NNfunction_ss_uLuL::synapse0x2dde760() {
   return (neuron0x2dc95d0()*0.0158188);
}

double NNfunction_ss_uLuL::synapse0x2dde7a0() {
   return (neuron0x2dc9910()*-0.00559659);
}

double NNfunction_ss_uLuL::synapse0x2dde7e0() {
   return (neuron0x2dc9c50()*0.325461);
}

double NNfunction_ss_uLuL::synapse0x2dde820() {
   return (neuron0x2dc9f90()*-0.725286);
}

double NNfunction_ss_uLuL::synapse0x2dde860() {
   return (neuron0x2dca2d0()*0.0164065);
}

double NNfunction_ss_uLuL::synapse0x2dde8a0() {
   return (neuron0x2dca610()*0.0157662);
}

double NNfunction_ss_uLuL::synapse0x2dde8e0() {
   return (neuron0x2dca950()*-0.011309);
}

double NNfunction_ss_uLuL::synapse0x2dde920() {
   return (neuron0x2dcac90()*-0.0157728);
}

double NNfunction_ss_uLuL::synapse0x2dde960() {
   return (neuron0x2dcafd0()*-0.0167954);
}

double NNfunction_ss_uLuL::synapse0x2dde9a0() {
   return (neuron0x2dcb310()*0.0252826);
}

double NNfunction_ss_uLuL::synapse0x2dde9e0() {
   return (neuron0x2dcb650()*0.00616158);
}

double NNfunction_ss_uLuL::synapse0x2ddea20() {
   return (neuron0x2dcb990()*0.429479);
}

double NNfunction_ss_uLuL::synapse0x2ddea60() {
   return (neuron0x2dcbcd0()*-0.0105145);
}

double NNfunction_ss_uLuL::synapse0x2ddeaa0() {
   return (neuron0x2dcc010()*-0.00523788);
}

double NNfunction_ss_uLuL::synapse0x2ddeae0() {
   return (neuron0x2dcc350()*0.0499062);
}

double NNfunction_ss_uLuL::synapse0x2ddeb20() {
   return (neuron0x2dcc690()*0.0612813);
}

double NNfunction_ss_uLuL::synapse0x2dde5b0() {
   return (neuron0x2dcc9d0()*-0.00897671);
}

double NNfunction_ss_uLuL::synapse0x2dde5f0() {
   return (neuron0x2dccf30()*0.0337235);
}

double NNfunction_ss_uLuL::synapse0x2ddec70() {
   return (neuron0x2dcd150()*0.0124346);
}

double NNfunction_ss_uLuL::synapse0x2ddecb0() {
   return (neuron0x2dcd490()*-0.0121816);
}

double NNfunction_ss_uLuL::synapse0x2ddecf0() {
   return (neuron0x2dcd7d0()*-0.01197);
}

double NNfunction_ss_uLuL::synapse0x2dded30() {
   return (neuron0x2dcdb10()*0.00228141);
}

double NNfunction_ss_uLuL::synapse0x2dded70() {
   return (neuron0x2dcde50()*0.0108913);
}

double NNfunction_ss_uLuL::synapse0x2ddedb0() {
   return (neuron0x2dce190()*0.00593184);
}

double NNfunction_ss_uLuL::synapse0x2df0c80() {
   return (neuron0x2dc95d0()*-0.234359);
}

double NNfunction_ss_uLuL::synapse0x2df0cc0() {
   return (neuron0x2dc9910()*-0.113487);
}

double NNfunction_ss_uLuL::synapse0x2df0d00() {
   return (neuron0x2dc9c50()*-0.166951);
}

double NNfunction_ss_uLuL::synapse0x2df0d40() {
   return (neuron0x2dc9f90()*-0.625409);
}

double NNfunction_ss_uLuL::synapse0x2df0d80() {
   return (neuron0x2dca2d0()*-0.204889);
}

double NNfunction_ss_uLuL::synapse0x2df0dc0() {
   return (neuron0x2dca610()*-0.615733);
}

double NNfunction_ss_uLuL::synapse0x2df0e00() {
   return (neuron0x2dca950()*-0.838537);
}

double NNfunction_ss_uLuL::synapse0x2df0e40() {
   return (neuron0x2dcac90()*-0.160783);
}

double NNfunction_ss_uLuL::synapse0x2df0e80() {
   return (neuron0x2dcafd0()*0.050453);
}

double NNfunction_ss_uLuL::synapse0x2df0ec0() {
   return (neuron0x2dcb310()*-0.506863);
}

double NNfunction_ss_uLuL::synapse0x2df0f00() {
   return (neuron0x2dcb650()*0.272909);
}

double NNfunction_ss_uLuL::synapse0x2df0f40() {
   return (neuron0x2dcb990()*1.11079);
}

double NNfunction_ss_uLuL::synapse0x2df0f80() {
   return (neuron0x2dcbcd0()*-0.307426);
}

double NNfunction_ss_uLuL::synapse0x2df0fc0() {
   return (neuron0x2dcc010()*0.141628);
}

double NNfunction_ss_uLuL::synapse0x2df1000() {
   return (neuron0x2dcc350()*0.823588);
}

double NNfunction_ss_uLuL::synapse0x2df1040() {
   return (neuron0x2dcc690()*0.528175);
}

double NNfunction_ss_uLuL::synapse0x2ddedf0() {
   return (neuron0x2dcc9d0()*0.415911);
}

double NNfunction_ss_uLuL::synapse0x2ddee30() {
   return (neuron0x2dccf30()*0.240791);
}

double NNfunction_ss_uLuL::synapse0x2df1190() {
   return (neuron0x2dcd150()*0.205692);
}

double NNfunction_ss_uLuL::synapse0x2df11d0() {
   return (neuron0x2dcd490()*0.332324);
}

double NNfunction_ss_uLuL::synapse0x2df1210() {
   return (neuron0x2dcd7d0()*0.147184);
}

double NNfunction_ss_uLuL::synapse0x2df1250() {
   return (neuron0x2dcdb10()*0.25101);
}

double NNfunction_ss_uLuL::synapse0x2df1290() {
   return (neuron0x2dcde50()*0.217342);
}

double NNfunction_ss_uLuL::synapse0x2df12d0() {
   return (neuron0x2dce190()*0.536925);
}

double NNfunction_ss_uLuL::synapse0x2df1650() {
   return (neuron0x2dc95d0()*-0.056118);
}

double NNfunction_ss_uLuL::synapse0x2df1690() {
   return (neuron0x2dc9910()*0.0162796);
}

double NNfunction_ss_uLuL::synapse0x2df16d0() {
   return (neuron0x2dc9c50()*-0.0645968);
}

double NNfunction_ss_uLuL::synapse0x2df1710() {
   return (neuron0x2dc9f90()*0.344751);
}

double NNfunction_ss_uLuL::synapse0x2df1750() {
   return (neuron0x2dca2d0()*-0.0730302);
}

double NNfunction_ss_uLuL::synapse0x2df1790() {
   return (neuron0x2dca610()*-0.0892108);
}

double NNfunction_ss_uLuL::synapse0x2df17d0() {
   return (neuron0x2dca950()*-0.0480637);
}

double NNfunction_ss_uLuL::synapse0x2df1810() {
   return (neuron0x2dcac90()*0.041442);
}

double NNfunction_ss_uLuL::synapse0x2df1850() {
   return (neuron0x2dcafd0()*0.08792);
}

double NNfunction_ss_uLuL::synapse0x2df1890() {
   return (neuron0x2dcb310()*-0.0441087);
}

double NNfunction_ss_uLuL::synapse0x2df18d0() {
   return (neuron0x2dcb650()*0.157329);
}

double NNfunction_ss_uLuL::synapse0x2df1910() {
   return (neuron0x2dcb990()*-3.51964);
}

double NNfunction_ss_uLuL::synapse0x2df1950() {
   return (neuron0x2dcbcd0()*0.00637846);
}

double NNfunction_ss_uLuL::synapse0x2df1990() {
   return (neuron0x2dcc010()*0.0428192);
}

double NNfunction_ss_uLuL::synapse0x2df19d0() {
   return (neuron0x2dcc350()*-0.103493);
}

double NNfunction_ss_uLuL::synapse0x2df1a10() {
   return (neuron0x2dcc690()*-0.0376604);
}

double NNfunction_ss_uLuL::synapse0x2df14a0() {
   return (neuron0x2dcc9d0()*0.0676262);
}

double NNfunction_ss_uLuL::synapse0x2df14e0() {
   return (neuron0x2dccf30()*-0.0517672);
}

double NNfunction_ss_uLuL::synapse0x2df1b60() {
   return (neuron0x2dcd150()*-0.00320907);
}

double NNfunction_ss_uLuL::synapse0x2df1ba0() {
   return (neuron0x2dcd490()*0.0308303);
}

double NNfunction_ss_uLuL::synapse0x2df1be0() {
   return (neuron0x2dcd7d0()*0.000237664);
}

double NNfunction_ss_uLuL::synapse0x2df1c20() {
   return (neuron0x2dcdb10()*-0.0448378);
}

double NNfunction_ss_uLuL::synapse0x2df1c60() {
   return (neuron0x2dcde50()*-0.0387646);
}

double NNfunction_ss_uLuL::synapse0x2df1ca0() {
   return (neuron0x2dce190()*-0.0792994);
}

double NNfunction_ss_uLuL::synapse0x2df2020() {
   return (neuron0x2dc95d0()*-0.549756);
}

double NNfunction_ss_uLuL::synapse0x2df2060() {
   return (neuron0x2dc9910()*-0.362291);
}

double NNfunction_ss_uLuL::synapse0x2df20a0() {
   return (neuron0x2dc9c50()*-0.140098);
}

double NNfunction_ss_uLuL::synapse0x2df20e0() {
   return (neuron0x2dc9f90()*-0.125807);
}

double NNfunction_ss_uLuL::synapse0x2df2120() {
   return (neuron0x2dca2d0()*-0.223444);
}

double NNfunction_ss_uLuL::synapse0x2df2160() {
   return (neuron0x2dca610()*-0.538131);
}

double NNfunction_ss_uLuL::synapse0x2df21a0() {
   return (neuron0x2dca950()*-0.236575);
}

double NNfunction_ss_uLuL::synapse0x2df21e0() {
   return (neuron0x2dcac90()*-0.383236);
}

double NNfunction_ss_uLuL::synapse0x2df2220() {
   return (neuron0x2dcafd0()*0.548855);
}

double NNfunction_ss_uLuL::synapse0x2df2260() {
   return (neuron0x2dcb310()*0.0850192);
}

double NNfunction_ss_uLuL::synapse0x2df22a0() {
   return (neuron0x2dcb650()*0.0245043);
}

double NNfunction_ss_uLuL::synapse0x2df22e0() {
   return (neuron0x2dcb990()*1.554);
}

double NNfunction_ss_uLuL::synapse0x2df2320() {
   return (neuron0x2dcbcd0()*0.132452);
}

double NNfunction_ss_uLuL::synapse0x2df2360() {
   return (neuron0x2dcc010()*0.730805);
}

double NNfunction_ss_uLuL::synapse0x2df23a0() {
   return (neuron0x2dcc350()*0.395214);
}

double NNfunction_ss_uLuL::synapse0x2df23e0() {
   return (neuron0x2dcc690()*-0.694866);
}

double NNfunction_ss_uLuL::synapse0x2df1e70() {
   return (neuron0x2dcc9d0()*-0.753818);
}

double NNfunction_ss_uLuL::synapse0x2df1eb0() {
   return (neuron0x2dccf30()*-0.502171);
}

double NNfunction_ss_uLuL::synapse0x2df2530() {
   return (neuron0x2dcd150()*-0.195658);
}

double NNfunction_ss_uLuL::synapse0x2df2570() {
   return (neuron0x2dcd490()*0.219352);
}

double NNfunction_ss_uLuL::synapse0x2df25b0() {
   return (neuron0x2dcd7d0()*-0.165586);
}

double NNfunction_ss_uLuL::synapse0x2df25f0() {
   return (neuron0x2dcdb10()*-0.269613);
}

double NNfunction_ss_uLuL::synapse0x2df2630() {
   return (neuron0x2dcde50()*-0.236742);
}

double NNfunction_ss_uLuL::synapse0x2df2670() {
   return (neuron0x2dce190()*-0.421176);
}

double NNfunction_ss_uLuL::synapse0x2df29f0() {
   return (neuron0x2dc95d0()*-0.118252);
}

double NNfunction_ss_uLuL::synapse0x2df2a30() {
   return (neuron0x2dc9910()*-0.00756622);
}

double NNfunction_ss_uLuL::synapse0x2df2a70() {
   return (neuron0x2dc9c50()*-0.37711);
}

double NNfunction_ss_uLuL::synapse0x2df2ab0() {
   return (neuron0x2dc9f90()*-0.0419776);
}

double NNfunction_ss_uLuL::synapse0x2df2af0() {
   return (neuron0x2dca2d0()*-0.0326306);
}

double NNfunction_ss_uLuL::synapse0x2df2b30() {
   return (neuron0x2dca610()*0.0588741);
}

double NNfunction_ss_uLuL::synapse0x2df2b70() {
   return (neuron0x2dca950()*0.0620617);
}

double NNfunction_ss_uLuL::synapse0x2df2bb0() {
   return (neuron0x2dcac90()*0.0582581);
}

double NNfunction_ss_uLuL::synapse0x2df2bf0() {
   return (neuron0x2dcafd0()*0.0253596);
}

double NNfunction_ss_uLuL::synapse0x2df2c30() {
   return (neuron0x2dcb310()*-0.0939179);
}

double NNfunction_ss_uLuL::synapse0x2df2c70() {
   return (neuron0x2dcb650()*0.072077);
}

double NNfunction_ss_uLuL::synapse0x2df2cb0() {
   return (neuron0x2dcb990()*2.05185);
}

double NNfunction_ss_uLuL::synapse0x2df2cf0() {
   return (neuron0x2dcbcd0()*0.0452009);
}

double NNfunction_ss_uLuL::synapse0x2df2d30() {
   return (neuron0x2dcc010()*0.0701939);
}

double NNfunction_ss_uLuL::synapse0x2df2d70() {
   return (neuron0x2dcc350()*-0.104887);
}

double NNfunction_ss_uLuL::synapse0x2df2db0() {
   return (neuron0x2dcc690()*-0.0342085);
}

double NNfunction_ss_uLuL::synapse0x2df2840() {
   return (neuron0x2dcc9d0()*0.10868);
}

double NNfunction_ss_uLuL::synapse0x2df2880() {
   return (neuron0x2dccf30()*0.116371);
}

double NNfunction_ss_uLuL::synapse0x2df2f00() {
   return (neuron0x2dcd150()*0.114359);
}

double NNfunction_ss_uLuL::synapse0x2df2f40() {
   return (neuron0x2dcd490()*0.0518071);
}

double NNfunction_ss_uLuL::synapse0x2df2f80() {
   return (neuron0x2dcd7d0()*0.0177427);
}

double NNfunction_ss_uLuL::synapse0x2df2fc0() {
   return (neuron0x2dcdb10()*-0.117085);
}

double NNfunction_ss_uLuL::synapse0x2df3000() {
   return (neuron0x2dcde50()*-0.0561793);
}

double NNfunction_ss_uLuL::synapse0x2df3040() {
   return (neuron0x2dce190()*-0.0509161);
}

double NNfunction_ss_uLuL::synapse0x2dcf5e0() {
   return (neuron0x2dce630()*1.54389);
}

double NNfunction_ss_uLuL::synapse0x2dcf620() {
   return (neuron0x2dcef40()*-0.941827);
}

double NNfunction_ss_uLuL::synapse0x2dd0af0() {
   return (neuron0x2dcfa20()*1.50514);
}

double NNfunction_ss_uLuL::synapse0x2dd0b30() {
   return (neuron0x2b892b0()*1.25556);
}

double NNfunction_ss_uLuL::synapse0x2dd14c0() {
   return (neuron0x2dd0840()*-1.44952);
}

double NNfunction_ss_uLuL::synapse0x2dd1500() {
   return (neuron0x2dd1210()*-0.966726);
}

double NNfunction_ss_uLuL::synapse0x2dd2290() {
   return (neuron0x2dd1fe0()*1.09874);
}

double NNfunction_ss_uLuL::synapse0x2dd22d0() {
   return (neuron0x2dd29b0()*1.15407);
}

double NNfunction_ss_uLuL::synapse0x2dd2c60() {
   return (neuron0x2dd3380()*-5.26096);
}

double NNfunction_ss_uLuL::synapse0x2dd2ca0() {
   return (neuron0x2dd3e60()*1.1794);
}

double NNfunction_ss_uLuL::synapse0x2dd3630() {
   return (neuron0x2dd4830()*2.46104);
}

double NNfunction_ss_uLuL::synapse0x2dd3670() {
   return (neuron0x2dd1910()*-0.720619);
}

double NNfunction_ss_uLuL::synapse0x2dd4110() {
   return (neuron0x2dd63e0()*3.43237);
}

double NNfunction_ss_uLuL::synapse0x2dd4150() {
   return (neuron0x2dd6db0()*1.83711);
}

double NNfunction_ss_uLuL::synapse0x2dd4ae0() {
   return (neuron0x2dd7780()*-1.25898);
}

double NNfunction_ss_uLuL::synapse0x2dd4b20() {
   return (neuron0x2dd8150()*2.20924);
}

double NNfunction_ss_uLuL::synapse0x2dd1bc0() {
   return (neuron0x2dd9f60()*-1.13262);
}

double NNfunction_ss_uLuL::synapse0x2dd1c00() {
   return (neuron0x2dda240()*-1.05782);
}

double NNfunction_ss_uLuL::synapse0x2dd6690() {
   return (neuron0x2ddac10()*2.68039);
}

double NNfunction_ss_uLuL::synapse0x2dd66d0() {
   return (neuron0x2ddb5e0()*-0.109406);
}

double NNfunction_ss_uLuL::synapse0x2dd7060() {
   return (neuron0x2ddbfb0()*0.738968);
}

double NNfunction_ss_uLuL::synapse0x2dd70a0() {
   return (neuron0x2ddc980()*1.09904);
}

double NNfunction_ss_uLuL::synapse0x2dd7a30() {
   return (neuron0x2dd54d0()*-1.18517);
}

double NNfunction_ss_uLuL::synapse0x2dd7a70() {
   return (neuron0x2dd5ea0()*-1.0137);
}

double NNfunction_ss_uLuL::synapse0x2dd8400() {
   return (neuron0x2ddf710()*1.44991);
}

double NNfunction_ss_uLuL::synapse0x2dd8440() {
   return (neuron0x2de00e0()*-1.09583);
}

double NNfunction_ss_uLuL::synapse0x2dcc570() {
   return (neuron0x2de0ab0()*1.81893);
}

double NNfunction_ss_uLuL::synapse0x2dcc5b0() {
   return (neuron0x2de1480()*1.15282);
}

double NNfunction_ss_uLuL::synapse0x2dda4f0() {
   return (neuron0x2de1e50()*0.966454);
}

double NNfunction_ss_uLuL::synapse0x2dda530() {
   return (neuron0x2de2820()*-1.59146);
}

double NNfunction_ss_uLuL::synapse0x2ddaec0() {
   return (neuron0x2de31f0()*-1.68092);
}

double NNfunction_ss_uLuL::synapse0x2ddaf00() {
   return (neuron0x2de3bc0()*5.69263);
}

double NNfunction_ss_uLuL::synapse0x2ddb890() {
   return (neuron0x2dd9c50()*-1.26806);
}

double NNfunction_ss_uLuL::synapse0x2ddb8d0() {
   return (neuron0x2de67a0()*-1.11316);
}

double NNfunction_ss_uLuL::synapse0x2ddc260() {
   return (neuron0x2de7170()*0.810289);
}

double NNfunction_ss_uLuL::synapse0x2ddc2a0() {
   return (neuron0x2de7b40()*-0.274172);
}

double NNfunction_ss_uLuL::synapse0x2ddcc30() {
   return (neuron0x2de8510()*1.58828);
}

double NNfunction_ss_uLuL::synapse0x2ddcc70() {
   return (neuron0x2de8ee0()*-2.267);
}

double NNfunction_ss_uLuL::synapse0x2dd5780() {
   return (neuron0x2de98b0()*-5.98568);
}

double NNfunction_ss_uLuL::synapse0x2dd57c0() {
   return (neuron0x2dea280()*-8.26374);
}

double NNfunction_ss_uLuL::synapse0x2ddf030() {
   return (neuron0x2deac50()*-1.31856);
}

double NNfunction_ss_uLuL::synapse0x2ddf070() {
   return (neuron0x2deb830()*1.07576);
}

double NNfunction_ss_uLuL::synapse0x2ddf9c0() {
   return (neuron0x2dec200()*-1.09137);
}

double NNfunction_ss_uLuL::synapse0x2ddfa00() {
   return (neuron0x2ddd080()*-3.69974);
}

double NNfunction_ss_uLuL::synapse0x2de0390() {
   return (neuron0x2ddda50()*1.36735);
}

double NNfunction_ss_uLuL::synapse0x2de03d0() {
   return (neuron0x2dde420()*-0.510464);
}

double NNfunction_ss_uLuL::synapse0x2de0d60() {
   return (neuron0x2df0a60()*-1.02391);
}

double NNfunction_ss_uLuL::synapse0x2de0da0() {
   return (neuron0x2df1310()*3.25731);
}

double NNfunction_ss_uLuL::synapse0x2de1730() {
   return (neuron0x2df1ce0()*-1.4985);
}

double NNfunction_ss_uLuL::synapse0x2de1770() {
   return (neuron0x2df26b0()*-1.74964);
}

double NNfunction_ss_uLuL::synapse0x2de3e70() {
   return (neuron0x2dce630()*-0.0797185);
}

double NNfunction_ss_uLuL::synapse0x2de3eb0() {
   return (neuron0x2dcef40()*0.0340251);
}

double NNfunction_ss_uLuL::synapse0x2dd9430() {
   return (neuron0x2dcfa20()*-0.0163451);
}

double NNfunction_ss_uLuL::synapse0x2dd9470() {
   return (neuron0x2b892b0()*-0.022963);
}

double NNfunction_ss_uLuL::synapse0x2de6a50() {
   return (neuron0x2dd0840()*0.0343859);
}

double NNfunction_ss_uLuL::synapse0x2de6a90() {
   return (neuron0x2dd1210()*0.0359347);
}

double NNfunction_ss_uLuL::synapse0x2de7420() {
   return (neuron0x2dd1fe0()*-0.0663315);
}

double NNfunction_ss_uLuL::synapse0x2de7460() {
   return (neuron0x2dd29b0()*-0.0994033);
}

double NNfunction_ss_uLuL::synapse0x2de7df0() {
   return (neuron0x2dd3380()*-2.36605);
}

double NNfunction_ss_uLuL::synapse0x2de7e30() {
   return (neuron0x2dd3e60()*-0.0684318);
}

double NNfunction_ss_uLuL::synapse0x2de87c0() {
   return (neuron0x2dd4830()*1.89038);
}

double NNfunction_ss_uLuL::synapse0x2de8800() {
   return (neuron0x2dd1910()*0.0230692);
}

double NNfunction_ss_uLuL::synapse0x2de9190() {
   return (neuron0x2dd63e0()*1.67887);
}

double NNfunction_ss_uLuL::synapse0x2de91d0() {
   return (neuron0x2dd6db0()*1.50077);
}

double NNfunction_ss_uLuL::synapse0x2de9b60() {
   return (neuron0x2dd7780()*0.0403084);
}

double NNfunction_ss_uLuL::synapse0x2de9ba0() {
   return (neuron0x2dd8150()*-0.103049);
}

double NNfunction_ss_uLuL::synapse0x2dea530() {
   return (neuron0x2dd9f60()*0.0629412);
}

double NNfunction_ss_uLuL::synapse0x2dea570() {
   return (neuron0x2dda240()*0.0474492);
}

double NNfunction_ss_uLuL::synapse0x2deaf00() {
   return (neuron0x2ddac10()*-0.0784165);
}

double NNfunction_ss_uLuL::synapse0x2deaf40() {
   return (neuron0x2ddb5e0()*-0.554319);
}

double NNfunction_ss_uLuL::synapse0x2debae0() {
   return (neuron0x2ddbfb0()*0.879848);
}

double NNfunction_ss_uLuL::synapse0x2debb20() {
   return (neuron0x2ddc980()*-0.0475862);
}

double NNfunction_ss_uLuL::synapse0x2dec4b0() {
   return (neuron0x2dd54d0()*0.03609);
}

double NNfunction_ss_uLuL::synapse0x2dec4f0() {
   return (neuron0x2dd5ea0()*0.0234813);
}

double NNfunction_ss_uLuL::synapse0x2ddd330() {
   return (neuron0x2ddf710()*-0.0745883);
}

double NNfunction_ss_uLuL::synapse0x2ddd370() {
   return (neuron0x2de00e0()*0.0105061);
}

double NNfunction_ss_uLuL::synapse0x2dddd00() {
   return (neuron0x2de0ab0()*-0.0313578);
}

double NNfunction_ss_uLuL::synapse0x2dddd40() {
   return (neuron0x2de1480()*-0.0431751);
}

double NNfunction_ss_uLuL::synapse0x2dde6d0() {
   return (neuron0x2de1e50()*-0.0216334);
}

double NNfunction_ss_uLuL::synapse0x2dde710() {
   return (neuron0x2de2820()*-1.56284);
}

double NNfunction_ss_uLuL::synapse0x2df0bf0() {
   return (neuron0x2de31f0()*-0.163239);
}

double NNfunction_ss_uLuL::synapse0x2df0c30() {
   return (neuron0x2de3bc0()*-0.199467);
}

double NNfunction_ss_uLuL::synapse0x2df15c0() {
   return (neuron0x2dd9c50()*0.0726642);
}

double NNfunction_ss_uLuL::synapse0x2df1600() {
   return (neuron0x2de67a0()*0.0550792);
}

double NNfunction_ss_uLuL::synapse0x2df1f90() {
   return (neuron0x2de7170()*0.603671);
}

double NNfunction_ss_uLuL::synapse0x2df1fd0() {
   return (neuron0x2de7b40()*0.103642);
}

double NNfunction_ss_uLuL::synapse0x2df2960() {
   return (neuron0x2de8510()*-0.0758942);
}

double NNfunction_ss_uLuL::synapse0x2df29a0() {
   return (neuron0x2de8ee0()*-0.0875233);
}

double NNfunction_ss_uLuL::synapse0x2dce850() {
   return (neuron0x2de98b0()*-0.914541);
}

double NNfunction_ss_uLuL::synapse0x2dce890() {
   return (neuron0x2dea280()*-2.87038);
}

double NNfunction_ss_uLuL::synapse0x2de2100() {
   return (neuron0x2deac50()*0.0398527);
}

double NNfunction_ss_uLuL::synapse0x2de2140() {
   return (neuron0x2deb830()*-0.0462096);
}

double NNfunction_ss_uLuL::synapse0x2df3080() {
   return (neuron0x2dec200()*0.0236843);
}

double NNfunction_ss_uLuL::synapse0x2df30c0() {
   return (neuron0x2ddd080()*-0.782863);
}

double NNfunction_ss_uLuL::synapse0x2df3100() {
   return (neuron0x2ddda50()*1.25685);
}

double NNfunction_ss_uLuL::synapse0x2df3140() {
   return (neuron0x2dde420()*-2.97416);
}

double NNfunction_ss_uLuL::synapse0x2df9ff0() {
   return (neuron0x2df0a60()*0.0622696);
}

double NNfunction_ss_uLuL::synapse0x2dfa030() {
   return (neuron0x2df1310()*0.333411);
}

double NNfunction_ss_uLuL::synapse0x2dfa070() {
   return (neuron0x2df1ce0()*0.0804883);
}

double NNfunction_ss_uLuL::synapse0x2dfa0b0() {
   return (neuron0x2df26b0()*-0.345268);
}

double NNfunction_ss_uLuL::synapse0x2dfa430() {
   return (neuron0x2dce630()*0.00511543);
}

double NNfunction_ss_uLuL::synapse0x2dfa470() {
   return (neuron0x2dcef40()*0.0534556);
}

double NNfunction_ss_uLuL::synapse0x2dfa4b0() {
   return (neuron0x2dcfa20()*0.0108299);
}

double NNfunction_ss_uLuL::synapse0x2dfa4f0() {
   return (neuron0x2b892b0()*-0.0107978);
}

double NNfunction_ss_uLuL::synapse0x2dfa530() {
   return (neuron0x2dd0840()*0.00138765);
}

double NNfunction_ss_uLuL::synapse0x2dfa570() {
   return (neuron0x2dd1210()*0.159292);
}

double NNfunction_ss_uLuL::synapse0x2dfa5b0() {
   return (neuron0x2dd1fe0()*-0.152898);
}

double NNfunction_ss_uLuL::synapse0x2dfa5f0() {
   return (neuron0x2dd29b0()*-0.659995);
}

double NNfunction_ss_uLuL::synapse0x2dfa630() {
   return (neuron0x2dd3380()*-1.21667);
}

double NNfunction_ss_uLuL::synapse0x2dfa670() {
   return (neuron0x2dd3e60()*-0.0263998);
}

double NNfunction_ss_uLuL::synapse0x2dfa6b0() {
   return (neuron0x2dd4830()*-1.9105);
}

double NNfunction_ss_uLuL::synapse0x2dfa6f0() {
   return (neuron0x2dd1910()*-0.0664672);
}

double NNfunction_ss_uLuL::synapse0x2dfa730() {
   return (neuron0x2dd63e0()*0.153075);
}

double NNfunction_ss_uLuL::synapse0x2dfa770() {
   return (neuron0x2dd6db0()*-1.78918);
}

double NNfunction_ss_uLuL::synapse0x2dfa7b0() {
   return (neuron0x2dd7780()*0.0401724);
}

double NNfunction_ss_uLuL::synapse0x2dfa7f0() {
   return (neuron0x2dd8150()*-0.0950283);
}

double NNfunction_ss_uLuL::synapse0x2dfa280() {
   return (neuron0x2dd9f60()*0.0109786);
}

double NNfunction_ss_uLuL::synapse0x2dfa2c0() {
   return (neuron0x2dda240()*0.00573584);
}

double NNfunction_ss_uLuL::synapse0x2dfa940() {
   return (neuron0x2ddac10()*0.0174575);
}

double NNfunction_ss_uLuL::synapse0x2dfa980() {
   return (neuron0x2ddb5e0()*3.14795);
}

double NNfunction_ss_uLuL::synapse0x2dfa9c0() {
   return (neuron0x2ddbfb0()*-0.0438315);
}

double NNfunction_ss_uLuL::synapse0x2dfaa00() {
   return (neuron0x2ddc980()*-0.0358488);
}

double NNfunction_ss_uLuL::synapse0x2dfaa40() {
   return (neuron0x2dd54d0()*-0.014454);
}

double NNfunction_ss_uLuL::synapse0x2dfaa80() {
   return (neuron0x2dd5ea0()*0.0556359);
}

double NNfunction_ss_uLuL::synapse0x2dfaac0() {
   return (neuron0x2ddf710()*-0.117452);
}

double NNfunction_ss_uLuL::synapse0x2dfab00() {
   return (neuron0x2de00e0()*0.0401867);
}

double NNfunction_ss_uLuL::synapse0x2dfab40() {
   return (neuron0x2de0ab0()*-0.0604473);
}

double NNfunction_ss_uLuL::synapse0x2dfab80() {
   return (neuron0x2de1480()*-0.0290507);
}

double NNfunction_ss_uLuL::synapse0x2dfabc0() {
   return (neuron0x2de1e50()*-0.133134);
}

double NNfunction_ss_uLuL::synapse0x2dfac00() {
   return (neuron0x2de2820()*5.97094);
}

double NNfunction_ss_uLuL::synapse0x2dfac40() {
   return (neuron0x2de31f0()*0.227954);
}

double NNfunction_ss_uLuL::synapse0x2dfac80() {
   return (neuron0x2de3bc0()*-0.737181);
}

double NNfunction_ss_uLuL::synapse0x2dfa830() {
   return (neuron0x2dd9c50()*0.032531);
}

double NNfunction_ss_uLuL::synapse0x2dfa870() {
   return (neuron0x2de67a0()*0.0170634);
}

double NNfunction_ss_uLuL::synapse0x2dfa8b0() {
   return (neuron0x2de7170()*-1.52041);
}

double NNfunction_ss_uLuL::synapse0x2dfa8f0() {
   return (neuron0x2de7b40()*-0.247887);
}

double NNfunction_ss_uLuL::synapse0x2dfaed0() {
   return (neuron0x2de8510()*-0.147577);
}

double NNfunction_ss_uLuL::synapse0x2dfaf10() {
   return (neuron0x2de8ee0()*-0.0317099);
}

double NNfunction_ss_uLuL::synapse0x2dfaf50() {
   return (neuron0x2de98b0()*-6.15493);
}

double NNfunction_ss_uLuL::synapse0x2dfaf90() {
   return (neuron0x2dea280()*-0.12125);
}

double NNfunction_ss_uLuL::synapse0x2dfafd0() {
   return (neuron0x2deac50()*0.067062);
}

double NNfunction_ss_uLuL::synapse0x2dfb010() {
   return (neuron0x2deb830()*0.0832688);
}

double NNfunction_ss_uLuL::synapse0x2dfb050() {
   return (neuron0x2dec200()*0.1158);
}

double NNfunction_ss_uLuL::synapse0x2dfb090() {
   return (neuron0x2ddd080()*-0.480722);
}

double NNfunction_ss_uLuL::synapse0x2dfb0d0() {
   return (neuron0x2ddda50()*-0.489842);
}

double NNfunction_ss_uLuL::synapse0x2dfb110() {
   return (neuron0x2dde420()*0.428115);
}

double NNfunction_ss_uLuL::synapse0x2dfb150() {
   return (neuron0x2df0a60()*0.079483);
}

double NNfunction_ss_uLuL::synapse0x2dfb190() {
   return (neuron0x2df1310()*-0.0522218);
}

double NNfunction_ss_uLuL::synapse0x2dfb1d0() {
   return (neuron0x2df1ce0()*0.0168624);
}

double NNfunction_ss_uLuL::synapse0x2dfb210() {
   return (neuron0x2df26b0()*1.0029);
}

double NNfunction_ss_uLuL::synapse0x2dfb590() {
   return (neuron0x2dce630()*-0.393843);
}

double NNfunction_ss_uLuL::synapse0x2dfb5d0() {
   return (neuron0x2dcef40()*-0.335016);
}

double NNfunction_ss_uLuL::synapse0x2dfb610() {
   return (neuron0x2dcfa20()*-1.04225);
}

double NNfunction_ss_uLuL::synapse0x2dfb650() {
   return (neuron0x2b892b0()*-0.932447);
}

double NNfunction_ss_uLuL::synapse0x2dfb690() {
   return (neuron0x2dd0840()*0.00499428);
}

double NNfunction_ss_uLuL::synapse0x2dfb6d0() {
   return (neuron0x2dd1210()*0.479729);
}

double NNfunction_ss_uLuL::synapse0x2dfb710() {
   return (neuron0x2dd1fe0()*-1.55459);
}

double NNfunction_ss_uLuL::synapse0x2dfb750() {
   return (neuron0x2dd29b0()*-1.42459);
}

double NNfunction_ss_uLuL::synapse0x2dfb790() {
   return (neuron0x2dd3380()*-0.25654);
}

double NNfunction_ss_uLuL::synapse0x2dfb7d0() {
   return (neuron0x2dd3e60()*-0.261071);
}

double NNfunction_ss_uLuL::synapse0x2dfb810() {
   return (neuron0x2dd4830()*-1.27463);
}

double NNfunction_ss_uLuL::synapse0x2dfb850() {
   return (neuron0x2dd1910()*0.246398);
}

double NNfunction_ss_uLuL::synapse0x2dfb890() {
   return (neuron0x2dd63e0()*-1.16469);
}

double NNfunction_ss_uLuL::synapse0x2dfb8d0() {
   return (neuron0x2dd6db0()*-1.59987);
}

double NNfunction_ss_uLuL::synapse0x2dfb910() {
   return (neuron0x2dd7780()*-0.698952);
}

double NNfunction_ss_uLuL::synapse0x2dfb950() {
   return (neuron0x2dd8150()*-1.49554);
}

double NNfunction_ss_uLuL::synapse0x2dfb3e0() {
   return (neuron0x2dd9f60()*-0.0845837);
}

double NNfunction_ss_uLuL::synapse0x2dfb420() {
   return (neuron0x2dda240()*-0.459437);
}

double NNfunction_ss_uLuL::synapse0x2dfbaa0() {
   return (neuron0x2ddac10()*-0.993072);
}

double NNfunction_ss_uLuL::synapse0x2dfbae0() {
   return (neuron0x2ddb5e0()*-0.387303);
}

double NNfunction_ss_uLuL::synapse0x2dfbb20() {
   return (neuron0x2ddbfb0()*-1.00366);
}

double NNfunction_ss_uLuL::synapse0x2dfbb60() {
   return (neuron0x2ddc980()*-0.515592);
}

double NNfunction_ss_uLuL::synapse0x2dfbba0() {
   return (neuron0x2dd54d0()*-1.19421);
}

double NNfunction_ss_uLuL::synapse0x2dfbbe0() {
   return (neuron0x2dd5ea0()*-0.807772);
}

double NNfunction_ss_uLuL::synapse0x2dfbc20() {
   return (neuron0x2ddf710()*-1.1039);
}

double NNfunction_ss_uLuL::synapse0x2dfbc60() {
   return (neuron0x2de00e0()*-0.0182287);
}

double NNfunction_ss_uLuL::synapse0x2dfbca0() {
   return (neuron0x2de0ab0()*-0.741704);
}

double NNfunction_ss_uLuL::synapse0x2dfbce0() {
   return (neuron0x2de1480()*-0.439874);
}

double NNfunction_ss_uLuL::synapse0x2dfbd20() {
   return (neuron0x2de1e50()*-0.602768);
}

double NNfunction_ss_uLuL::synapse0x2dfbd60() {
   return (neuron0x2de2820()*0.330839);
}

double NNfunction_ss_uLuL::synapse0x2dfbda0() {
   return (neuron0x2de31f0()*0.368906);
}

double NNfunction_ss_uLuL::synapse0x2dfbde0() {
   return (neuron0x2de3bc0()*0.557426);
}

double NNfunction_ss_uLuL::synapse0x2dfb990() {
   return (neuron0x2dd9c50()*-0.0294223);
}

double NNfunction_ss_uLuL::synapse0x2dfb9d0() {
   return (neuron0x2de67a0()*-0.258969);
}

double NNfunction_ss_uLuL::synapse0x2dfba10() {
   return (neuron0x2de7170()*-1.77051);
}

double NNfunction_ss_uLuL::synapse0x2dfba50() {
   return (neuron0x2de7b40()*-0.953209);
}

double NNfunction_ss_uLuL::synapse0x2dfc030() {
   return (neuron0x2de8510()*-0.952978);
}

double NNfunction_ss_uLuL::synapse0x2dfc070() {
   return (neuron0x2de8ee0()*0.0648622);
}

double NNfunction_ss_uLuL::synapse0x2dfc0b0() {
   return (neuron0x2de98b0()*-0.346013);
}

double NNfunction_ss_uLuL::synapse0x2dfc0f0() {
   return (neuron0x2dea280()*0.380997);
}

double NNfunction_ss_uLuL::synapse0x2dfc130() {
   return (neuron0x2deac50()*-1.14489);
}

double NNfunction_ss_uLuL::synapse0x2dfc170() {
   return (neuron0x2deb830()*-0.550675);
}

double NNfunction_ss_uLuL::synapse0x2dfc1b0() {
   return (neuron0x2dec200()*-0.594832);
}

double NNfunction_ss_uLuL::synapse0x2dfc1f0() {
   return (neuron0x2ddd080()*-0.369775);
}

double NNfunction_ss_uLuL::synapse0x2dfc230() {
   return (neuron0x2ddda50()*-1.30961);
}

double NNfunction_ss_uLuL::synapse0x2dfc270() {
   return (neuron0x2dde420()*0.389887);
}

double NNfunction_ss_uLuL::synapse0x2dfc2b0() {
   return (neuron0x2df0a60()*0.50821);
}

double NNfunction_ss_uLuL::synapse0x2dfc2f0() {
   return (neuron0x2df1310()*-0.559037);
}

double NNfunction_ss_uLuL::synapse0x2dfc330() {
   return (neuron0x2df1ce0()*-0.206748);
}

double NNfunction_ss_uLuL::synapse0x2dfc370() {
   return (neuron0x2df26b0()*0.347837);
}

double NNfunction_ss_uLuL::synapse0x2dfc6f0() {
   return (neuron0x2dce630()*-1.02472);
}

double NNfunction_ss_uLuL::synapse0x2dfc730() {
   return (neuron0x2dcef40()*0.0447605);
}

double NNfunction_ss_uLuL::synapse0x2dfc770() {
   return (neuron0x2dcfa20()*-1.01807);
}

double NNfunction_ss_uLuL::synapse0x2dfc7b0() {
   return (neuron0x2b892b0()*-0.0282577);
}

double NNfunction_ss_uLuL::synapse0x2dfc7f0() {
   return (neuron0x2dd0840()*-0.0938531);
}

double NNfunction_ss_uLuL::synapse0x2dfc830() {
   return (neuron0x2dd1210()*-0.179832);
}

double NNfunction_ss_uLuL::synapse0x2dfc870() {
   return (neuron0x2dd1fe0()*-0.793677);
}

double NNfunction_ss_uLuL::synapse0x2dfc8b0() {
   return (neuron0x2dd29b0()*-0.525651);
}

double NNfunction_ss_uLuL::synapse0x2dfc8f0() {
   return (neuron0x2dd3380()*-0.982692);
}

double NNfunction_ss_uLuL::synapse0x2dfc930() {
   return (neuron0x2dd3e60()*-0.786024);
}

double NNfunction_ss_uLuL::synapse0x2dfc970() {
   return (neuron0x2dd4830()*-0.504273);
}

double NNfunction_ss_uLuL::synapse0x2dfc9b0() {
   return (neuron0x2dd1910()*-0.429549);
}

double NNfunction_ss_uLuL::synapse0x2dfc9f0() {
   return (neuron0x2dd63e0()*-0.411317);
}

double NNfunction_ss_uLuL::synapse0x2dfca30() {
   return (neuron0x2dd6db0()*-0.574191);
}

double NNfunction_ss_uLuL::synapse0x2dfca70() {
   return (neuron0x2dd7780()*-0.691672);
}

double NNfunction_ss_uLuL::synapse0x2dfcab0() {
   return (neuron0x2dd8150()*-0.336819);
}

double NNfunction_ss_uLuL::synapse0x2dfc540() {
   return (neuron0x2dd9f60()*-0.463262);
}

double NNfunction_ss_uLuL::synapse0x2dfc580() {
   return (neuron0x2dda240()*-0.218776);
}

double NNfunction_ss_uLuL::synapse0x2dfcc00() {
   return (neuron0x2ddac10()*-0.552431);
}

double NNfunction_ss_uLuL::synapse0x2dfcc40() {
   return (neuron0x2ddb5e0()*0.0696347);
}

double NNfunction_ss_uLuL::synapse0x2dfcc80() {
   return (neuron0x2ddbfb0()*-0.282445);
}

double NNfunction_ss_uLuL::synapse0x2dfccc0() {
   return (neuron0x2ddc980()*0.243383);
}

double NNfunction_ss_uLuL::synapse0x2dfcd00() {
   return (neuron0x2dd54d0()*-0.0927453);
}

double NNfunction_ss_uLuL::synapse0x2dfcd40() {
   return (neuron0x2dd5ea0()*-0.0703113);
}

double NNfunction_ss_uLuL::synapse0x2dfcd80() {
   return (neuron0x2ddf710()*-0.653212);
}

double NNfunction_ss_uLuL::synapse0x2dfcdc0() {
   return (neuron0x2de00e0()*-0.63243);
}

double NNfunction_ss_uLuL::synapse0x2dfce00() {
   return (neuron0x2de0ab0()*-0.855955);
}

double NNfunction_ss_uLuL::synapse0x2dfce40() {
   return (neuron0x2de1480()*-0.865843);
}

double NNfunction_ss_uLuL::synapse0x2dfce80() {
   return (neuron0x2de1e50()*0.0749254);
}

double NNfunction_ss_uLuL::synapse0x2dfcec0() {
   return (neuron0x2de2820()*-0.903435);
}

double NNfunction_ss_uLuL::synapse0x2dfcf00() {
   return (neuron0x2de31f0()*-0.57666);
}

double NNfunction_ss_uLuL::synapse0x2dfcf40() {
   return (neuron0x2de3bc0()*-0.045202);
}

double NNfunction_ss_uLuL::synapse0x2dfcaf0() {
   return (neuron0x2dd9c50()*0.0868843);
}

double NNfunction_ss_uLuL::synapse0x2dfcb30() {
   return (neuron0x2de67a0()*-0.656426);
}

double NNfunction_ss_uLuL::synapse0x2dfcb70() {
   return (neuron0x2de7170()*-0.475032);
}

double NNfunction_ss_uLuL::synapse0x2dfcbb0() {
   return (neuron0x2de7b40()*0.184987);
}

double NNfunction_ss_uLuL::synapse0x2dfd190() {
   return (neuron0x2de8510()*-0.282883);
}

double NNfunction_ss_uLuL::synapse0x2dfd1d0() {
   return (neuron0x2de8ee0()*-0.749257);
}

double NNfunction_ss_uLuL::synapse0x2dfd210() {
   return (neuron0x2de98b0()*-0.645595);
}

double NNfunction_ss_uLuL::synapse0x2dfd250() {
   return (neuron0x2dea280()*-0.714176);
}

double NNfunction_ss_uLuL::synapse0x2dfd290() {
   return (neuron0x2deac50()*-1.36291);
}

double NNfunction_ss_uLuL::synapse0x2dfd2d0() {
   return (neuron0x2deb830()*-0.139844);
}

double NNfunction_ss_uLuL::synapse0x2dfd310() {
   return (neuron0x2dec200()*-0.0221276);
}

double NNfunction_ss_uLuL::synapse0x2dfd350() {
   return (neuron0x2ddd080()*-0.413614);
}

double NNfunction_ss_uLuL::synapse0x2dfd390() {
   return (neuron0x2ddda50()*0.0924378);
}

double NNfunction_ss_uLuL::synapse0x2dfd3d0() {
   return (neuron0x2dde420()*-0.0368125);
}

double NNfunction_ss_uLuL::synapse0x2dfd410() {
   return (neuron0x2df0a60()*-0.457569);
}

double NNfunction_ss_uLuL::synapse0x2dfd450() {
   return (neuron0x2df1310()*0.17552);
}

double NNfunction_ss_uLuL::synapse0x2dfd490() {
   return (neuron0x2df1ce0()*-0.950109);
}

double NNfunction_ss_uLuL::synapse0x2dfd4d0() {
   return (neuron0x2df26b0()*-0.324977);
}

double NNfunction_ss_uLuL::synapse0x2dce5f0() {
   return (neuron0x2df98b0()*10.1386);
}

double NNfunction_ss_uLuL::synapse0x2dfd730() {
   return (neuron0x2df9c50()*8.11703);
}

double NNfunction_ss_uLuL::synapse0x2dfd770() {
   return (neuron0x2dfa0f0()*-9.16912);
}

double NNfunction_ss_uLuL::synapse0x2dfd7b0() {
   return (neuron0x2dfb250()*-3.73123);
}

double NNfunction_ss_uLuL::synapse0x2dfd7f0() {
   return (neuron0x2dfc3b0()*1.23959);
}

