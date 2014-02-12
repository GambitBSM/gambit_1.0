#include "NNfunction_ss_sLsR.h"
#include <cmath>

double NNfunction_ss_sLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4878)/15.3133;
   input1 = (in1 - 4.79879)/1139;
   input2 = (in2 - 669.872)/623.443;
   input3 = (in3 - -53.6035)/770.967;
   input4 = (in4 - 1024.98)/936.713;
   input5 = (in5 - 871.321)/923.683;
   input6 = (in6 - 882.156)/929.608;
   input7 = (in7 - 902.934)/915.396;
   input8 = (in8 - 914.439)/972.399;
   input9 = (in9 - 888.005)/954.672;
   input10 = (in10 - 978.711)/957.351;
   input11 = (in11 - 708.616)/853.182;
   input12 = (in12 - 286.006)/270.722;
   input13 = (in13 - 495.639)/506.327;
   input14 = (in14 - 705.234)/797.518;
   input15 = (in15 - 694.138)/791.555;
   input16 = (in16 - 525.024)/544.111;
   input17 = (in17 - 762.888)/900.149;
   input18 = (in18 - 283.538)/273.975;
   input19 = (in19 - 800.971)/880.057;
   input20 = (in20 - -10.667)/482.89;
   input21 = (in21 - 5.01912)/1152.34;
   input22 = (in22 - 0.143479)/1197.86;
   input23 = (in23 - -204.62)/594.905;
   switch(index) {
     case 0:
         return neuron0x2c683f0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLsR::Value(int index, double* input) {
   input0 = (input[0] - 23.4878)/15.3133;
   input1 = (input[1] - 4.79879)/1139;
   input2 = (input[2] - 669.872)/623.443;
   input3 = (input[3] - -53.6035)/770.967;
   input4 = (input[4] - 1024.98)/936.713;
   input5 = (input[5] - 871.321)/923.683;
   input6 = (input[6] - 882.156)/929.608;
   input7 = (input[7] - 902.934)/915.396;
   input8 = (input[8] - 914.439)/972.399;
   input9 = (input[9] - 888.005)/954.672;
   input10 = (input[10] - 978.711)/957.351;
   input11 = (input[11] - 708.616)/853.182;
   input12 = (input[12] - 286.006)/270.722;
   input13 = (input[13] - 495.639)/506.327;
   input14 = (input[14] - 705.234)/797.518;
   input15 = (input[15] - 694.138)/791.555;
   input16 = (input[16] - 525.024)/544.111;
   input17 = (input[17] - 762.888)/900.149;
   input18 = (input[18] - 283.538)/273.975;
   input19 = (input[19] - 800.971)/880.057;
   input20 = (input[20] - -10.667)/482.89;
   input21 = (input[21] - 5.01912)/1152.34;
   input22 = (input[22] - 0.143479)/1197.86;
   input23 = (input[23] - -204.62)/594.905;
   switch(index) {
     case 0:
         return neuron0x2c683f0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLsR::neuron0x2c344b0() {
   return input0;
}

double NNfunction_ss_sLsR::neuron0x2c347f0() {
   return input1;
}

double NNfunction_ss_sLsR::neuron0x2c34b30() {
   return input2;
}

double NNfunction_ss_sLsR::neuron0x2c34e70() {
   return input3;
}

double NNfunction_ss_sLsR::neuron0x2c351b0() {
   return input4;
}

double NNfunction_ss_sLsR::neuron0x2c354f0() {
   return input5;
}

double NNfunction_ss_sLsR::neuron0x2c35830() {
   return input6;
}

double NNfunction_ss_sLsR::neuron0x2c35b70() {
   return input7;
}

double NNfunction_ss_sLsR::neuron0x2c35eb0() {
   return input8;
}

double NNfunction_ss_sLsR::neuron0x2c361f0() {
   return input9;
}

double NNfunction_ss_sLsR::neuron0x2c36530() {
   return input10;
}

double NNfunction_ss_sLsR::neuron0x2c36870() {
   return input11;
}

double NNfunction_ss_sLsR::neuron0x2c36bb0() {
   return input12;
}

double NNfunction_ss_sLsR::neuron0x2c36ef0() {
   return input13;
}

double NNfunction_ss_sLsR::neuron0x2c37230() {
   return input14;
}

double NNfunction_ss_sLsR::neuron0x2c37570() {
   return input15;
}

double NNfunction_ss_sLsR::neuron0x2c378b0() {
   return input16;
}

double NNfunction_ss_sLsR::neuron0x2c37e10() {
   return input17;
}

double NNfunction_ss_sLsR::neuron0x2c38030() {
   return input18;
}

double NNfunction_ss_sLsR::neuron0x2c38370() {
   return input19;
}

double NNfunction_ss_sLsR::neuron0x2c386b0() {
   return input20;
}

double NNfunction_ss_sLsR::neuron0x2c389f0() {
   return input21;
}

double NNfunction_ss_sLsR::neuron0x2c38d30() {
   return input22;
}

double NNfunction_ss_sLsR::neuron0x2c39070() {
   return input23;
}

double NNfunction_ss_sLsR::input0x2c39510() {
   double input = -2.82579;
   input += synapse0x29f4320();
   input += synapse0x2c34370();
   input += synapse0x2c343b0();
   input += synapse0x2c397c0();
   input += synapse0x2c39800();
   input += synapse0x2c39840();
   input += synapse0x2c39880();
   input += synapse0x2c398c0();
   input += synapse0x2c39900();
   input += synapse0x2c39940();
   input += synapse0x2c39980();
   input += synapse0x2c399c0();
   input += synapse0x2c39a00();
   input += synapse0x2c39a40();
   input += synapse0x2c39a80();
   input += synapse0x2c39ac0();
   input += synapse0x2c342e0();
   input += synapse0x2c34320();
   input += synapse0x29e5bc0();
   input += synapse0x29e5c00();
   input += synapse0x2c39d20();
   input += synapse0x2c39d60();
   input += synapse0x2c39da0();
   input += synapse0x2c39de0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c39510() {
   double input = input0x2c39510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c39e20() {
   double input = -2.15597;
   input += synapse0x2c3a160();
   input += synapse0x2c3a1a0();
   input += synapse0x2c3a1e0();
   input += synapse0x2c3a220();
   input += synapse0x2c3a260();
   input += synapse0x2c3a2a0();
   input += synapse0x2c3a2e0();
   input += synapse0x2c3a320();
   input += synapse0x2c3a360();
   input += synapse0x2c39c10();
   input += synapse0x2c39c50();
   input += synapse0x2c39c90();
   input += synapse0x2c39cd0();
   input += synapse0x2c3a5b0();
   input += synapse0x2c3a5f0();
   input += synapse0x2c3a630();
   input += synapse0x2c39fb0();
   input += synapse0x2c39ff0();
   input += synapse0x2c3a780();
   input += synapse0x2c3a7c0();
   input += synapse0x2c3a800();
   input += synapse0x2c3a840();
   input += synapse0x2c3a880();
   input += synapse0x2c3a8c0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c39e20() {
   double input = input0x2c39e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c3a900() {
   double input = 1.47972;
   input += synapse0x2c3ac40();
   input += synapse0x2c3ac80();
   input += synapse0x2c3acc0();
   input += synapse0x2c3ad00();
   input += synapse0x2c3ad40();
   input += synapse0x2c3ad80();
   input += synapse0x2c3adc0();
   input += synapse0x2c3ae00();
   input += synapse0x2c3ae40();
   input += synapse0x2c3ae80();
   input += synapse0x2c3aec0();
   input += synapse0x2c3af00();
   input += synapse0x2c3af40();
   input += synapse0x2c3af80();
   input += synapse0x2c3afc0();
   input += synapse0x2c3b000();
   input += synapse0x2c3aa90();
   input += synapse0x2c3aad0();
   input += synapse0x29f3a10();
   input += synapse0x29f3a50();
   input += synapse0x2c23540();
   input += synapse0x2c23580();
   input += synapse0x2c235c0();
   input += synapse0x2c343f0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c3a900() {
   double input = input0x2c3a900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x29f4190() {
   double input = 0.0976785;
   input += synapse0x2c3a550();
   input += synapse0x2c34430();
   input += synapse0x2c34470();
   input += synapse0x2c3b150();
   input += synapse0x2c3b190();
   input += synapse0x2c3b1d0();
   input += synapse0x2c3b210();
   input += synapse0x2c3b250();
   input += synapse0x2c3b290();
   input += synapse0x2c3b2d0();
   input += synapse0x2c3b310();
   input += synapse0x2c3b350();
   input += synapse0x2c3b390();
   input += synapse0x2c3b3d0();
   input += synapse0x2c3b410();
   input += synapse0x2c3b450();
   input += synapse0x2c3a3a0();
   input += synapse0x2c3a3e0();
   input += synapse0x2c3b5a0();
   input += synapse0x2c3b5e0();
   input += synapse0x2c3b620();
   input += synapse0x2c3b660();
   input += synapse0x2c3b6a0();
   input += synapse0x2c3b6e0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x29f4190() {
   double input = input0x29f4190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c3b720() {
   double input = -1.15434;
   input += synapse0x2c3ba60();
   input += synapse0x2c3baa0();
   input += synapse0x2c3bae0();
   input += synapse0x2c3bb20();
   input += synapse0x2c3bb60();
   input += synapse0x2c3bba0();
   input += synapse0x2c3bbe0();
   input += synapse0x2c3bc20();
   input += synapse0x2c3bc60();
   input += synapse0x2c3bca0();
   input += synapse0x2c3bce0();
   input += synapse0x2c3bd20();
   input += synapse0x2c3bd60();
   input += synapse0x2c3bda0();
   input += synapse0x2c3bde0();
   input += synapse0x2c3be20();
   input += synapse0x2c3b8b0();
   input += synapse0x2c3b8f0();
   input += synapse0x2c3bf70();
   input += synapse0x2c3bfb0();
   input += synapse0x2c3bff0();
   input += synapse0x2c3c030();
   input += synapse0x2c3c070();
   input += synapse0x2c3c0b0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c3b720() {
   double input = input0x2c3b720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c3c0f0() {
   double input = 0.102306;
   input += synapse0x2c3c430();
   input += synapse0x2c3c470();
   input += synapse0x2c3c4b0();
   input += synapse0x2c3c4f0();
   input += synapse0x2c3c530();
   input += synapse0x2c3c570();
   input += synapse0x2c3c5b0();
   input += synapse0x2c3c5f0();
   input += synapse0x2c3c630();
   input += synapse0x29f3d80();
   input += synapse0x29f3dc0();
   input += synapse0x29f3e00();
   input += synapse0x29f3e40();
   input += synapse0x29f3e80();
   input += synapse0x29f3ec0();
   input += synapse0x29f3f00();
   input += synapse0x2c3c280();
   input += synapse0x2c3c2c0();
   input += synapse0x29f4050();
   input += synapse0x29f4090();
   input += synapse0x29f40d0();
   input += synapse0x29f4110();
   input += synapse0x29f4150();
   input += synapse0x2c3ce80();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c3c0f0() {
   double input = input0x2c3c0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c3cec0() {
   double input = 0.719769;
   input += synapse0x2c3d200();
   input += synapse0x2c3d240();
   input += synapse0x2c3d280();
   input += synapse0x2c3d2c0();
   input += synapse0x2c3d300();
   input += synapse0x2c3d340();
   input += synapse0x2c3d380();
   input += synapse0x2c3d3c0();
   input += synapse0x2c3d400();
   input += synapse0x2c3d440();
   input += synapse0x2c3d480();
   input += synapse0x2c3d4c0();
   input += synapse0x2c3d500();
   input += synapse0x2c3d540();
   input += synapse0x2c3d580();
   input += synapse0x2c3d5c0();
   input += synapse0x2c3d050();
   input += synapse0x2c3d090();
   input += synapse0x2c3d710();
   input += synapse0x2c3d750();
   input += synapse0x2c3d790();
   input += synapse0x2c3d7d0();
   input += synapse0x2c3d810();
   input += synapse0x2c3d850();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c3cec0() {
   double input = input0x2c3cec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c3d890() {
   double input = -0.683043;
   input += synapse0x2c3dbd0();
   input += synapse0x2c3dc10();
   input += synapse0x2c3dc50();
   input += synapse0x2c3dc90();
   input += synapse0x2c3dcd0();
   input += synapse0x2c3dd10();
   input += synapse0x2c3dd50();
   input += synapse0x2c3dd90();
   input += synapse0x2c3ddd0();
   input += synapse0x2c3de10();
   input += synapse0x2c3de50();
   input += synapse0x2c3de90();
   input += synapse0x2c3ded0();
   input += synapse0x2c3df10();
   input += synapse0x2c3df50();
   input += synapse0x2c3df90();
   input += synapse0x2c3da20();
   input += synapse0x2c3da60();
   input += synapse0x2c3e0e0();
   input += synapse0x2c3e120();
   input += synapse0x2c3e160();
   input += synapse0x2c3e1a0();
   input += synapse0x2c3e1e0();
   input += synapse0x2c3e220();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c3d890() {
   double input = input0x2c3d890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c3e260() {
   double input = -3.36102;
   input += synapse0x2c37d00();
   input += synapse0x2c37d40();
   input += synapse0x2c37d80();
   input += synapse0x2c37dc0();
   input += synapse0x2c3e7b0();
   input += synapse0x2c3e7f0();
   input += synapse0x2c3e830();
   input += synapse0x2c3e870();
   input += synapse0x2c3e8b0();
   input += synapse0x2c3e8f0();
   input += synapse0x2c3e930();
   input += synapse0x2c3e970();
   input += synapse0x2c3e9b0();
   input += synapse0x2c3e9f0();
   input += synapse0x2c3ea30();
   input += synapse0x2c3ea70();
   input += synapse0x2c3e3f0();
   input += synapse0x2c3e430();
   input += synapse0x2c3ebc0();
   input += synapse0x2c3ec00();
   input += synapse0x2c3ec40();
   input += synapse0x2c3ec80();
   input += synapse0x2c3ecc0();
   input += synapse0x2c3ed00();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c3e260() {
   double input = input0x2c3e260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c3ed40() {
   double input = -1.00827;
   input += synapse0x2c3f080();
   input += synapse0x2c3f0c0();
   input += synapse0x2c3f100();
   input += synapse0x2c3f140();
   input += synapse0x2c3f180();
   input += synapse0x2c3f1c0();
   input += synapse0x2c3f200();
   input += synapse0x2c3f240();
   input += synapse0x2c3f280();
   input += synapse0x2c3f2c0();
   input += synapse0x2c3f300();
   input += synapse0x2c3f340();
   input += synapse0x2c3f380();
   input += synapse0x2c3f3c0();
   input += synapse0x2c3f400();
   input += synapse0x2c3f440();
   input += synapse0x2c3eed0();
   input += synapse0x2c3ef10();
   input += synapse0x2c3f590();
   input += synapse0x2c3f5d0();
   input += synapse0x2c3f610();
   input += synapse0x2c3f650();
   input += synapse0x2c3f690();
   input += synapse0x2c3f6d0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c3ed40() {
   double input = input0x2c3ed40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c3f710() {
   double input = 0.302849;
   input += synapse0x2c3fa50();
   input += synapse0x2c3fa90();
   input += synapse0x2c3fad0();
   input += synapse0x2c3fb10();
   input += synapse0x2c3fb50();
   input += synapse0x2c3fb90();
   input += synapse0x2c3fbd0();
   input += synapse0x2c3fc10();
   input += synapse0x2c3fc50();
   input += synapse0x2c3fc90();
   input += synapse0x2c3fcd0();
   input += synapse0x2c3fd10();
   input += synapse0x2c3fd50();
   input += synapse0x2c3fd90();
   input += synapse0x2c3fdd0();
   input += synapse0x2c3fe10();
   input += synapse0x2c3f8a0();
   input += synapse0x2c3f8e0();
   input += synapse0x2c3c670();
   input += synapse0x2c3c6b0();
   input += synapse0x2c3c6f0();
   input += synapse0x2c3c730();
   input += synapse0x2c3c770();
   input += synapse0x2c3c7b0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c3f710() {
   double input = input0x2c3f710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c3c7f0() {
   double input = 0.921923;
   input += synapse0x2c3cb30();
   input += synapse0x2c3cb70();
   input += synapse0x2c3cbb0();
   input += synapse0x2c3cbf0();
   input += synapse0x2c3cc30();
   input += synapse0x2c3cc70();
   input += synapse0x2c3ccb0();
   input += synapse0x2c3ccf0();
   input += synapse0x2c3cd30();
   input += synapse0x2c3cd70();
   input += synapse0x2c3cdb0();
   input += synapse0x2c3cdf0();
   input += synapse0x2c3ce30();
   input += synapse0x2c40f70();
   input += synapse0x2c40fb0();
   input += synapse0x2c40ff0();
   input += synapse0x2c3c980();
   input += synapse0x2c3c9c0();
   input += synapse0x2c41140();
   input += synapse0x2c41180();
   input += synapse0x2c411c0();
   input += synapse0x2c41200();
   input += synapse0x2c41240();
   input += synapse0x2c41280();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c3c7f0() {
   double input = input0x2c3c7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c412c0() {
   double input = -0.158661;
   input += synapse0x2c41600();
   input += synapse0x2c41640();
   input += synapse0x2c41680();
   input += synapse0x2c416c0();
   input += synapse0x2c41700();
   input += synapse0x2c41740();
   input += synapse0x2c41780();
   input += synapse0x2c417c0();
   input += synapse0x2c41800();
   input += synapse0x2c41840();
   input += synapse0x2c41880();
   input += synapse0x2c418c0();
   input += synapse0x2c41900();
   input += synapse0x2c41940();
   input += synapse0x2c41980();
   input += synapse0x2c419c0();
   input += synapse0x2c41450();
   input += synapse0x2c41490();
   input += synapse0x2c41b10();
   input += synapse0x2c41b50();
   input += synapse0x2c41b90();
   input += synapse0x2c41bd0();
   input += synapse0x2c41c10();
   input += synapse0x2c41c50();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c412c0() {
   double input = input0x2c412c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c41c90() {
   double input = 1.28775;
   input += synapse0x2c41fd0();
   input += synapse0x2c42010();
   input += synapse0x2c42050();
   input += synapse0x2c42090();
   input += synapse0x2c420d0();
   input += synapse0x2c42110();
   input += synapse0x2c42150();
   input += synapse0x2c42190();
   input += synapse0x2c421d0();
   input += synapse0x2c42210();
   input += synapse0x2c42250();
   input += synapse0x2c42290();
   input += synapse0x2c422d0();
   input += synapse0x2c42310();
   input += synapse0x2c42350();
   input += synapse0x2c42390();
   input += synapse0x2c41e20();
   input += synapse0x2c41e60();
   input += synapse0x2c424e0();
   input += synapse0x2c42520();
   input += synapse0x2c42560();
   input += synapse0x2c425a0();
   input += synapse0x2c425e0();
   input += synapse0x2c42620();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c41c90() {
   double input = input0x2c41c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c42660() {
   double input = -1.61959;
   input += synapse0x2c429a0();
   input += synapse0x2c429e0();
   input += synapse0x2c42a20();
   input += synapse0x2c42a60();
   input += synapse0x2c42aa0();
   input += synapse0x2c42ae0();
   input += synapse0x2c42b20();
   input += synapse0x2c42b60();
   input += synapse0x2c42ba0();
   input += synapse0x2c42be0();
   input += synapse0x2c42c20();
   input += synapse0x2c42c60();
   input += synapse0x2c42ca0();
   input += synapse0x2c42ce0();
   input += synapse0x2c42d20();
   input += synapse0x2c42d60();
   input += synapse0x2c427f0();
   input += synapse0x2c42830();
   input += synapse0x2c42eb0();
   input += synapse0x2c42ef0();
   input += synapse0x2c42f30();
   input += synapse0x2c42f70();
   input += synapse0x2c42fb0();
   input += synapse0x2c42ff0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c42660() {
   double input = input0x2c42660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c43030() {
   double input = -0.168598;
   input += synapse0x2c43370();
   input += synapse0x2c346d0();
   input += synapse0x2c34710();
   input += synapse0x2c34a10();
   input += synapse0x2c34a50();
   input += synapse0x2c34d50();
   input += synapse0x2c34d90();
   input += synapse0x2c35090();
   input += synapse0x2c350d0();
   input += synapse0x2c353d0();
   input += synapse0x2c35410();
   input += synapse0x2c35710();
   input += synapse0x2c35750();
   input += synapse0x2c35a50();
   input += synapse0x2c35a90();
   input += synapse0x2c35d90();
   input += synapse0x2c35dd0();
   input += synapse0x2c360d0();
   input += synapse0x2c36110();
   input += synapse0x2c36410();
   input += synapse0x2c36450();
   input += synapse0x2c36750();
   input += synapse0x2c36790();
   input += synapse0x2c36a90();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c43030() {
   double input = input0x2c43030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c44e40() {
   double input = -0.848196;
   input += synapse0x2c36ad0();
   input += synapse0x2c37790();
   input += synapse0x2c377d0();
   input += synapse0x2c431c0();
   input += synapse0x2c43200();
   input += synapse0x2c37ad0();
   input += synapse0x2c37b10();
   input += synapse0x29e5aa0();
   input += synapse0x29e5ae0();
   input += synapse0x2c38250();
   input += synapse0x2c38290();
   input += synapse0x2c38590();
   input += synapse0x2c385d0();
   input += synapse0x2c388d0();
   input += synapse0x2c38910();
   input += synapse0x2c38c10();
   input += synapse0x2c38c50();
   input += synapse0x2c38f50();
   input += synapse0x2c38f90();
   input += synapse0x2c39290();
   input += synapse0x2c392d0();
   input += synapse0x2c36dd0();
   input += synapse0x2c36e10();
   input += synapse0x2c450e0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c44e40() {
   double input = input0x2c44e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c45120() {
   double input = -3.01078;
   input += synapse0x2c45460();
   input += synapse0x2c454a0();
   input += synapse0x2c454e0();
   input += synapse0x2c45520();
   input += synapse0x2c45560();
   input += synapse0x2c455a0();
   input += synapse0x2c455e0();
   input += synapse0x2c45620();
   input += synapse0x2c45660();
   input += synapse0x2c456a0();
   input += synapse0x2c456e0();
   input += synapse0x2c45720();
   input += synapse0x2c45760();
   input += synapse0x2c457a0();
   input += synapse0x2c457e0();
   input += synapse0x2c45820();
   input += synapse0x2c452b0();
   input += synapse0x2c452f0();
   input += synapse0x2c45970();
   input += synapse0x2c459b0();
   input += synapse0x2c459f0();
   input += synapse0x2c45a30();
   input += synapse0x2c45a70();
   input += synapse0x2c45ab0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c45120() {
   double input = input0x2c45120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c45af0() {
   double input = 0.214468;
   input += synapse0x2c45e30();
   input += synapse0x2c45e70();
   input += synapse0x2c45eb0();
   input += synapse0x2c45ef0();
   input += synapse0x2c45f30();
   input += synapse0x2c45f70();
   input += synapse0x2c45fb0();
   input += synapse0x2c45ff0();
   input += synapse0x2c46030();
   input += synapse0x2c46070();
   input += synapse0x2c460b0();
   input += synapse0x2c460f0();
   input += synapse0x2c46130();
   input += synapse0x2c46170();
   input += synapse0x2c461b0();
   input += synapse0x2c461f0();
   input += synapse0x2c45c80();
   input += synapse0x2c45cc0();
   input += synapse0x2c46340();
   input += synapse0x2c46380();
   input += synapse0x2c463c0();
   input += synapse0x2c46400();
   input += synapse0x2c46440();
   input += synapse0x2c46480();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c45af0() {
   double input = input0x2c45af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c464c0() {
   double input = 0.676712;
   input += synapse0x2c46800();
   input += synapse0x2c46840();
   input += synapse0x2c46880();
   input += synapse0x2c468c0();
   input += synapse0x2c46900();
   input += synapse0x2c46940();
   input += synapse0x2c46980();
   input += synapse0x2c469c0();
   input += synapse0x2c46a00();
   input += synapse0x2c46a40();
   input += synapse0x2c46a80();
   input += synapse0x2c46ac0();
   input += synapse0x2c46b00();
   input += synapse0x2c46b40();
   input += synapse0x2c46b80();
   input += synapse0x2c46bc0();
   input += synapse0x2c46650();
   input += synapse0x2c46690();
   input += synapse0x2c46d10();
   input += synapse0x2c46d50();
   input += synapse0x2c46d90();
   input += synapse0x2c46dd0();
   input += synapse0x2c46e10();
   input += synapse0x2c46e50();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c464c0() {
   double input = input0x2c464c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c46e90() {
   double input = 0.801097;
   input += synapse0x2c471d0();
   input += synapse0x2c47210();
   input += synapse0x2c47250();
   input += synapse0x2c47290();
   input += synapse0x2c472d0();
   input += synapse0x2c47310();
   input += synapse0x2c47350();
   input += synapse0x2c47390();
   input += synapse0x2c473d0();
   input += synapse0x2c47410();
   input += synapse0x2c47450();
   input += synapse0x2c47490();
   input += synapse0x2c474d0();
   input += synapse0x2c47510();
   input += synapse0x2c47550();
   input += synapse0x2c47590();
   input += synapse0x2c47020();
   input += synapse0x2c47060();
   input += synapse0x2c476e0();
   input += synapse0x2c47720();
   input += synapse0x2c47760();
   input += synapse0x2c477a0();
   input += synapse0x2c477e0();
   input += synapse0x2c47820();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c46e90() {
   double input = input0x2c46e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c47860() {
   double input = 1.13494;
   input += synapse0x2c47ba0();
   input += synapse0x2c47be0();
   input += synapse0x2c47c20();
   input += synapse0x2c47c60();
   input += synapse0x2c47ca0();
   input += synapse0x2c47ce0();
   input += synapse0x2c47d20();
   input += synapse0x2c47d60();
   input += synapse0x2c47da0();
   input += synapse0x2c3ff60();
   input += synapse0x2c3ffa0();
   input += synapse0x2c3ffe0();
   input += synapse0x2c40020();
   input += synapse0x2c40060();
   input += synapse0x2c400a0();
   input += synapse0x2c400e0();
   input += synapse0x2c479f0();
   input += synapse0x2c47a30();
   input += synapse0x2c40230();
   input += synapse0x2c40270();
   input += synapse0x2c402b0();
   input += synapse0x2c402f0();
   input += synapse0x2c40330();
   input += synapse0x2c40370();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c47860() {
   double input = input0x2c47860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c403b0() {
   double input = 0.777711;
   input += synapse0x2c406f0();
   input += synapse0x2c40730();
   input += synapse0x2c40770();
   input += synapse0x2c407b0();
   input += synapse0x2c407f0();
   input += synapse0x2c40830();
   input += synapse0x2c40870();
   input += synapse0x2c408b0();
   input += synapse0x2c408f0();
   input += synapse0x2c40930();
   input += synapse0x2c40970();
   input += synapse0x2c409b0();
   input += synapse0x2c409f0();
   input += synapse0x2c40a30();
   input += synapse0x2c40a70();
   input += synapse0x2c40ab0();
   input += synapse0x2c40540();
   input += synapse0x2c40580();
   input += synapse0x2c40c00();
   input += synapse0x2c40c40();
   input += synapse0x2c40c80();
   input += synapse0x2c40cc0();
   input += synapse0x2c40d00();
   input += synapse0x2c40d40();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c403b0() {
   double input = input0x2c403b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c40d80() {
   double input = 0.215504;
   input += synapse0x2c40f10();
   input += synapse0x2c49fa0();
   input += synapse0x2c49fe0();
   input += synapse0x2c4a020();
   input += synapse0x2c4a060();
   input += synapse0x2c4a0a0();
   input += synapse0x2c4a0e0();
   input += synapse0x2c4a120();
   input += synapse0x2c4a160();
   input += synapse0x2c4a1a0();
   input += synapse0x2c4a1e0();
   input += synapse0x2c4a220();
   input += synapse0x2c4a260();
   input += synapse0x2c4a2a0();
   input += synapse0x2c4a2e0();
   input += synapse0x2c4a320();
   input += synapse0x2c49df0();
   input += synapse0x2c49e30();
   input += synapse0x2c4a470();
   input += synapse0x2c4a4b0();
   input += synapse0x2c4a4f0();
   input += synapse0x2c4a530();
   input += synapse0x2c4a570();
   input += synapse0x2c4a5b0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c40d80() {
   double input = input0x2c40d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c4a5f0() {
   double input = 0.132117;
   input += synapse0x2c4a930();
   input += synapse0x2c4a970();
   input += synapse0x2c4a9b0();
   input += synapse0x2c4a9f0();
   input += synapse0x2c4aa30();
   input += synapse0x2c4aa70();
   input += synapse0x2c4aab0();
   input += synapse0x2c4aaf0();
   input += synapse0x2c4ab30();
   input += synapse0x2c4ab70();
   input += synapse0x2c4abb0();
   input += synapse0x2c4abf0();
   input += synapse0x2c4ac30();
   input += synapse0x2c4ac70();
   input += synapse0x2c4acb0();
   input += synapse0x2c4acf0();
   input += synapse0x2c4a780();
   input += synapse0x2c4a7c0();
   input += synapse0x2c4ae40();
   input += synapse0x2c4ae80();
   input += synapse0x2c4aec0();
   input += synapse0x2c4af00();
   input += synapse0x2c4af40();
   input += synapse0x2c4af80();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c4a5f0() {
   double input = input0x2c4a5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c4afc0() {
   double input = -0.0753193;
   input += synapse0x2c4b300();
   input += synapse0x2c4b340();
   input += synapse0x2c4b380();
   input += synapse0x2c4b3c0();
   input += synapse0x2c4b400();
   input += synapse0x2c4b440();
   input += synapse0x2c4b480();
   input += synapse0x2c4b4c0();
   input += synapse0x2c4b500();
   input += synapse0x2c4b540();
   input += synapse0x2c4b580();
   input += synapse0x2c4b5c0();
   input += synapse0x2c4b600();
   input += synapse0x2c4b640();
   input += synapse0x2c4b680();
   input += synapse0x2c4b6c0();
   input += synapse0x2c4b150();
   input += synapse0x2c4b190();
   input += synapse0x2c4b810();
   input += synapse0x2c4b850();
   input += synapse0x2c4b890();
   input += synapse0x2c4b8d0();
   input += synapse0x2c4b910();
   input += synapse0x2c4b950();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c4afc0() {
   double input = input0x2c4afc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c4b990() {
   double input = -0.410624;
   input += synapse0x2c4bcd0();
   input += synapse0x2c4bd10();
   input += synapse0x2c4bd50();
   input += synapse0x2c4bd90();
   input += synapse0x2c4bdd0();
   input += synapse0x2c4be10();
   input += synapse0x2c4be50();
   input += synapse0x2c4be90();
   input += synapse0x2c4bed0();
   input += synapse0x2c4bf10();
   input += synapse0x2c4bf50();
   input += synapse0x2c4bf90();
   input += synapse0x2c4bfd0();
   input += synapse0x2c4c010();
   input += synapse0x2c4c050();
   input += synapse0x2c4c090();
   input += synapse0x2c4bb20();
   input += synapse0x2c4bb60();
   input += synapse0x2c4c1e0();
   input += synapse0x2c4c220();
   input += synapse0x2c4c260();
   input += synapse0x2c4c2a0();
   input += synapse0x2c4c2e0();
   input += synapse0x2c4c320();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c4b990() {
   double input = input0x2c4b990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c4c360() {
   double input = -0.00632049;
   input += synapse0x2c4c6a0();
   input += synapse0x2c4c6e0();
   input += synapse0x2c4c720();
   input += synapse0x2c4c760();
   input += synapse0x2c4c7a0();
   input += synapse0x2c4c7e0();
   input += synapse0x2c4c820();
   input += synapse0x2c4c860();
   input += synapse0x2c4c8a0();
   input += synapse0x2c4c8e0();
   input += synapse0x2c4c920();
   input += synapse0x2c4c960();
   input += synapse0x2c4c9a0();
   input += synapse0x2c4c9e0();
   input += synapse0x2c4ca20();
   input += synapse0x2c4ca60();
   input += synapse0x2c4c4f0();
   input += synapse0x2c4c530();
   input += synapse0x2c4cbb0();
   input += synapse0x2c4cbf0();
   input += synapse0x2c4cc30();
   input += synapse0x2c4cc70();
   input += synapse0x2c4ccb0();
   input += synapse0x2c4ccf0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c4c360() {
   double input = input0x2c4c360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c4cd30() {
   double input = 0.0912423;
   input += synapse0x2c4d070();
   input += synapse0x2c4d0b0();
   input += synapse0x2c4d0f0();
   input += synapse0x2c4d130();
   input += synapse0x2c4d170();
   input += synapse0x2c4d1b0();
   input += synapse0x2c4d1f0();
   input += synapse0x2c4d230();
   input += synapse0x2c4d270();
   input += synapse0x2c4d2b0();
   input += synapse0x2c4d2f0();
   input += synapse0x2c4d330();
   input += synapse0x2c4d370();
   input += synapse0x2c4d3b0();
   input += synapse0x2c4d3f0();
   input += synapse0x2c4d430();
   input += synapse0x2c4cec0();
   input += synapse0x2c4cf00();
   input += synapse0x2c4d580();
   input += synapse0x2c4d5c0();
   input += synapse0x2c4d600();
   input += synapse0x2c4d640();
   input += synapse0x2c4d680();
   input += synapse0x2c4d6c0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c4cd30() {
   double input = input0x2c4cd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c4d700() {
   double input = 2.32231;
   input += synapse0x2c4da40();
   input += synapse0x2c4da80();
   input += synapse0x2c4dac0();
   input += synapse0x2c4db00();
   input += synapse0x2c4db40();
   input += synapse0x2c4db80();
   input += synapse0x2c4dbc0();
   input += synapse0x2c4dc00();
   input += synapse0x2c4dc40();
   input += synapse0x2c4dc80();
   input += synapse0x2c4dcc0();
   input += synapse0x2c4dd00();
   input += synapse0x2c4dd40();
   input += synapse0x2c4dd80();
   input += synapse0x2c4ddc0();
   input += synapse0x2c4de00();
   input += synapse0x2c4d890();
   input += synapse0x2c4d8d0();
   input += synapse0x2c4df50();
   input += synapse0x2c4df90();
   input += synapse0x2c4dfd0();
   input += synapse0x2c4e010();
   input += synapse0x2c4e050();
   input += synapse0x2c4e090();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c4d700() {
   double input = input0x2c4d700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c4e0d0() {
   double input = -0.943876;
   input += synapse0x2c4e410();
   input += synapse0x2c4e450();
   input += synapse0x2c4e490();
   input += synapse0x2c4e4d0();
   input += synapse0x2c4e510();
   input += synapse0x2c4e550();
   input += synapse0x2c4e590();
   input += synapse0x2c4e5d0();
   input += synapse0x2c4e610();
   input += synapse0x2c4e650();
   input += synapse0x2c4e690();
   input += synapse0x2c4e6d0();
   input += synapse0x2c4e710();
   input += synapse0x2c4e750();
   input += synapse0x2c4e790();
   input += synapse0x2c4e7d0();
   input += synapse0x2c4e260();
   input += synapse0x2c4e2a0();
   input += synapse0x2c4e920();
   input += synapse0x2c4e960();
   input += synapse0x2c4e9a0();
   input += synapse0x2c4e9e0();
   input += synapse0x2c4ea20();
   input += synapse0x2c4ea60();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c4e0d0() {
   double input = input0x2c4e0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c4eaa0() {
   double input = 0.85416;
   input += synapse0x2c4ede0();
   input += synapse0x2c433b0();
   input += synapse0x2c433f0();
   input += synapse0x2c43430();
   input += synapse0x2c43680();
   input += synapse0x2c436c0();
   input += synapse0x2c43700();
   input += synapse0x2c43950();
   input += synapse0x2c43990();
   input += synapse0x2c43be0();
   input += synapse0x2c43c20();
   input += synapse0x2c43c60();
   input += synapse0x2c43eb0();
   input += synapse0x2c43ef0();
   input += synapse0x2c44140();
   input += synapse0x2c44180();
   input += synapse0x2c4ec30();
   input += synapse0x2c4ec70();
   input += synapse0x2c442d0();
   input += synapse0x2c447e0();
   input += synapse0x2c44820();
   input += synapse0x2c44860();
   input += synapse0x2c44ab0();
   input += synapse0x2c44af0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c4eaa0() {
   double input = input0x2c4eaa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c44b30() {
   double input = -2.33933;
   input += synapse0x2c443a0();
   input += synapse0x2c443e0();
   input += synapse0x2c44420();
   input += synapse0x2c44460();
   input += synapse0x2c44de0();
   input += synapse0x2c51130();
   input += synapse0x2c51170();
   input += synapse0x2c511b0();
   input += synapse0x2c511f0();
   input += synapse0x2c51230();
   input += synapse0x2c51270();
   input += synapse0x2c512b0();
   input += synapse0x2c512f0();
   input += synapse0x2c51330();
   input += synapse0x2c51370();
   input += synapse0x2c513b0();
   input += synapse0x2c44cc0();
   input += synapse0x2c44d00();
   input += synapse0x2c51500();
   input += synapse0x2c51540();
   input += synapse0x2c51580();
   input += synapse0x2c515c0();
   input += synapse0x2c51600();
   input += synapse0x2c51640();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c44b30() {
   double input = input0x2c44b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c51680() {
   double input = 4.0738;
   input += synapse0x2c519c0();
   input += synapse0x2c51a00();
   input += synapse0x2c51a40();
   input += synapse0x2c51a80();
   input += synapse0x2c51ac0();
   input += synapse0x2c51b00();
   input += synapse0x2c51b40();
   input += synapse0x2c51b80();
   input += synapse0x2c51bc0();
   input += synapse0x2c51c00();
   input += synapse0x2c51c40();
   input += synapse0x2c51c80();
   input += synapse0x2c51cc0();
   input += synapse0x2c51d00();
   input += synapse0x2c51d40();
   input += synapse0x2c51d80();
   input += synapse0x2c51810();
   input += synapse0x2c51850();
   input += synapse0x2c51ed0();
   input += synapse0x2c51f10();
   input += synapse0x2c51f50();
   input += synapse0x2c51f90();
   input += synapse0x2c51fd0();
   input += synapse0x2c52010();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c51680() {
   double input = input0x2c51680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c52050() {
   double input = -0.272073;
   input += synapse0x2c52390();
   input += synapse0x2c523d0();
   input += synapse0x2c52410();
   input += synapse0x2c52450();
   input += synapse0x2c52490();
   input += synapse0x2c524d0();
   input += synapse0x2c52510();
   input += synapse0x2c52550();
   input += synapse0x2c52590();
   input += synapse0x2c525d0();
   input += synapse0x2c52610();
   input += synapse0x2c52650();
   input += synapse0x2c52690();
   input += synapse0x2c526d0();
   input += synapse0x2c52710();
   input += synapse0x2c52750();
   input += synapse0x2c521e0();
   input += synapse0x2c52220();
   input += synapse0x2c528a0();
   input += synapse0x2c528e0();
   input += synapse0x2c52920();
   input += synapse0x2c52960();
   input += synapse0x2c529a0();
   input += synapse0x2c529e0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c52050() {
   double input = input0x2c52050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c52a20() {
   double input = 1.52115;
   input += synapse0x2c52d60();
   input += synapse0x2c52da0();
   input += synapse0x2c52de0();
   input += synapse0x2c52e20();
   input += synapse0x2c52e60();
   input += synapse0x2c52ea0();
   input += synapse0x2c52ee0();
   input += synapse0x2c52f20();
   input += synapse0x2c52f60();
   input += synapse0x2c52fa0();
   input += synapse0x2c52fe0();
   input += synapse0x2c53020();
   input += synapse0x2c53060();
   input += synapse0x2c530a0();
   input += synapse0x2c530e0();
   input += synapse0x2c53120();
   input += synapse0x2c52bb0();
   input += synapse0x2c52bf0();
   input += synapse0x2c53270();
   input += synapse0x2c532b0();
   input += synapse0x2c532f0();
   input += synapse0x2c53330();
   input += synapse0x2c53370();
   input += synapse0x2c533b0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c52a20() {
   double input = input0x2c52a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c533f0() {
   double input = 2.2576;
   input += synapse0x2c53730();
   input += synapse0x2c53770();
   input += synapse0x2c537b0();
   input += synapse0x2c537f0();
   input += synapse0x2c53830();
   input += synapse0x2c53870();
   input += synapse0x2c538b0();
   input += synapse0x2c538f0();
   input += synapse0x2c53930();
   input += synapse0x2c53970();
   input += synapse0x2c539b0();
   input += synapse0x2c539f0();
   input += synapse0x2c53a30();
   input += synapse0x2c53a70();
   input += synapse0x2c53ab0();
   input += synapse0x2c53af0();
   input += synapse0x2c53580();
   input += synapse0x2c535c0();
   input += synapse0x2c53c40();
   input += synapse0x2c53c80();
   input += synapse0x2c53cc0();
   input += synapse0x2c53d00();
   input += synapse0x2c53d40();
   input += synapse0x2c53d80();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c533f0() {
   double input = input0x2c533f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c53dc0() {
   double input = -0.452718;
   input += synapse0x2c54100();
   input += synapse0x2c54140();
   input += synapse0x2c54180();
   input += synapse0x2c541c0();
   input += synapse0x2c54200();
   input += synapse0x2c54240();
   input += synapse0x2c54280();
   input += synapse0x2c542c0();
   input += synapse0x2c54300();
   input += synapse0x2c54340();
   input += synapse0x2c54380();
   input += synapse0x2c543c0();
   input += synapse0x2c54400();
   input += synapse0x2c54440();
   input += synapse0x2c54480();
   input += synapse0x2c544c0();
   input += synapse0x2c53f50();
   input += synapse0x2c53f90();
   input += synapse0x2c54610();
   input += synapse0x2c54650();
   input += synapse0x2c54690();
   input += synapse0x2c546d0();
   input += synapse0x2c54710();
   input += synapse0x2c54750();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c53dc0() {
   double input = input0x2c53dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c54790() {
   double input = -1.73228;
   input += synapse0x2c54ad0();
   input += synapse0x2c54b10();
   input += synapse0x2c54b50();
   input += synapse0x2c54b90();
   input += synapse0x2c54bd0();
   input += synapse0x2c54c10();
   input += synapse0x2c54c50();
   input += synapse0x2c54c90();
   input += synapse0x2c54cd0();
   input += synapse0x2c54d10();
   input += synapse0x2c54d50();
   input += synapse0x2c54d90();
   input += synapse0x2c54dd0();
   input += synapse0x2c54e10();
   input += synapse0x2c54e50();
   input += synapse0x2c54e90();
   input += synapse0x2c54920();
   input += synapse0x2c54960();
   input += synapse0x2c54fe0();
   input += synapse0x2c55020();
   input += synapse0x2c55060();
   input += synapse0x2c550a0();
   input += synapse0x2c550e0();
   input += synapse0x2c55120();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c54790() {
   double input = input0x2c54790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c55160() {
   double input = -3.03822;
   input += synapse0x2c554a0();
   input += synapse0x2c554e0();
   input += synapse0x2c55520();
   input += synapse0x2c55560();
   input += synapse0x2c555a0();
   input += synapse0x2c555e0();
   input += synapse0x2c55620();
   input += synapse0x2c55660();
   input += synapse0x2c556a0();
   input += synapse0x2c556e0();
   input += synapse0x2c55720();
   input += synapse0x2c55760();
   input += synapse0x2c557a0();
   input += synapse0x2c557e0();
   input += synapse0x2c55820();
   input += synapse0x2c55860();
   input += synapse0x2c552f0();
   input += synapse0x2c55330();
   input += synapse0x2c559b0();
   input += synapse0x2c559f0();
   input += synapse0x2c55a30();
   input += synapse0x2c55a70();
   input += synapse0x2c55ab0();
   input += synapse0x2c55af0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c55160() {
   double input = input0x2c55160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c55b30() {
   double input = 3.28355;
   input += synapse0x2c3e5a0();
   input += synapse0x2c3e5e0();
   input += synapse0x2c3e620();
   input += synapse0x2c3e660();
   input += synapse0x2c3e6a0();
   input += synapse0x2c3e6e0();
   input += synapse0x2c3e720();
   input += synapse0x2c3e760();
   input += synapse0x2c56280();
   input += synapse0x2c562c0();
   input += synapse0x2c56300();
   input += synapse0x2c56340();
   input += synapse0x2c56380();
   input += synapse0x2c563c0();
   input += synapse0x2c56400();
   input += synapse0x2c56440();
   input += synapse0x2c55cc0();
   input += synapse0x2c55d00();
   input += synapse0x2c56590();
   input += synapse0x2c565d0();
   input += synapse0x2c56610();
   input += synapse0x2c56650();
   input += synapse0x2c56690();
   input += synapse0x2c566d0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c55b30() {
   double input = input0x2c55b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c56710() {
   double input = -0.879823;
   input += synapse0x2c56a50();
   input += synapse0x2c56a90();
   input += synapse0x2c56ad0();
   input += synapse0x2c56b10();
   input += synapse0x2c56b50();
   input += synapse0x2c56b90();
   input += synapse0x2c56bd0();
   input += synapse0x2c56c10();
   input += synapse0x2c56c50();
   input += synapse0x2c56c90();
   input += synapse0x2c56cd0();
   input += synapse0x2c56d10();
   input += synapse0x2c56d50();
   input += synapse0x2c56d90();
   input += synapse0x2c56dd0();
   input += synapse0x2c56e10();
   input += synapse0x2c568a0();
   input += synapse0x2c568e0();
   input += synapse0x2c56f60();
   input += synapse0x2c56fa0();
   input += synapse0x2c56fe0();
   input += synapse0x2c57020();
   input += synapse0x2c57060();
   input += synapse0x2c570a0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c56710() {
   double input = input0x2c56710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c570e0() {
   double input = 1.51974;
   input += synapse0x2c57420();
   input += synapse0x2c57460();
   input += synapse0x2c574a0();
   input += synapse0x2c574e0();
   input += synapse0x2c57520();
   input += synapse0x2c57560();
   input += synapse0x2c575a0();
   input += synapse0x2c575e0();
   input += synapse0x2c57620();
   input += synapse0x2c57660();
   input += synapse0x2c576a0();
   input += synapse0x2c576e0();
   input += synapse0x2c57720();
   input += synapse0x2c57760();
   input += synapse0x2c577a0();
   input += synapse0x2c577e0();
   input += synapse0x2c57270();
   input += synapse0x2c572b0();
   input += synapse0x2c47de0();
   input += synapse0x2c47e20();
   input += synapse0x2c47e60();
   input += synapse0x2c47ea0();
   input += synapse0x2c47ee0();
   input += synapse0x2c47f20();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c570e0() {
   double input = input0x2c570e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c47f60() {
   double input = -0.0635848;
   input += synapse0x2c482a0();
   input += synapse0x2c482e0();
   input += synapse0x2c48320();
   input += synapse0x2c48360();
   input += synapse0x2c483a0();
   input += synapse0x2c483e0();
   input += synapse0x2c48420();
   input += synapse0x2c48460();
   input += synapse0x2c484a0();
   input += synapse0x2c484e0();
   input += synapse0x2c48520();
   input += synapse0x2c48560();
   input += synapse0x2c485a0();
   input += synapse0x2c485e0();
   input += synapse0x2c48620();
   input += synapse0x2c48660();
   input += synapse0x2c480f0();
   input += synapse0x2c48130();
   input += synapse0x2c487b0();
   input += synapse0x2c487f0();
   input += synapse0x2c48830();
   input += synapse0x2c48870();
   input += synapse0x2c488b0();
   input += synapse0x2c488f0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c47f60() {
   double input = input0x2c47f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c48930() {
   double input = 1.37533;
   input += synapse0x2c48c70();
   input += synapse0x2c48cb0();
   input += synapse0x2c48cf0();
   input += synapse0x2c48d30();
   input += synapse0x2c48d70();
   input += synapse0x2c48db0();
   input += synapse0x2c48df0();
   input += synapse0x2c48e30();
   input += synapse0x2c48e70();
   input += synapse0x2c48eb0();
   input += synapse0x2c48ef0();
   input += synapse0x2c48f30();
   input += synapse0x2c48f70();
   input += synapse0x2c48fb0();
   input += synapse0x2c48ff0();
   input += synapse0x2c49030();
   input += synapse0x2c48ac0();
   input += synapse0x2c48b00();
   input += synapse0x2c49180();
   input += synapse0x2c491c0();
   input += synapse0x2c49200();
   input += synapse0x2c49240();
   input += synapse0x2c49280();
   input += synapse0x2c492c0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c48930() {
   double input = input0x2c48930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c49300() {
   double input = -0.244562;
   input += synapse0x2c49640();
   input += synapse0x2c49680();
   input += synapse0x2c496c0();
   input += synapse0x2c49700();
   input += synapse0x2c49740();
   input += synapse0x2c49780();
   input += synapse0x2c497c0();
   input += synapse0x2c49800();
   input += synapse0x2c49840();
   input += synapse0x2c49880();
   input += synapse0x2c498c0();
   input += synapse0x2c49900();
   input += synapse0x2c49940();
   input += synapse0x2c49980();
   input += synapse0x2c499c0();
   input += synapse0x2c49a00();
   input += synapse0x2c49490();
   input += synapse0x2c494d0();
   input += synapse0x2c49b50();
   input += synapse0x2c49b90();
   input += synapse0x2c49bd0();
   input += synapse0x2c49c10();
   input += synapse0x2c49c50();
   input += synapse0x2c49c90();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c49300() {
   double input = input0x2c49300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c5b940() {
   double input = 2.47887;
   input += synapse0x2c5bb60();
   input += synapse0x2c5bba0();
   input += synapse0x2c5bbe0();
   input += synapse0x2c5bc20();
   input += synapse0x2c5bc60();
   input += synapse0x2c5bca0();
   input += synapse0x2c5bce0();
   input += synapse0x2c5bd20();
   input += synapse0x2c5bd60();
   input += synapse0x2c5bda0();
   input += synapse0x2c5bde0();
   input += synapse0x2c5be20();
   input += synapse0x2c5be60();
   input += synapse0x2c5bea0();
   input += synapse0x2c5bee0();
   input += synapse0x2c5bf20();
   input += synapse0x2c49cd0();
   input += synapse0x2c49d10();
   input += synapse0x2c5c070();
   input += synapse0x2c5c0b0();
   input += synapse0x2c5c0f0();
   input += synapse0x2c5c130();
   input += synapse0x2c5c170();
   input += synapse0x2c5c1b0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c5b940() {
   double input = input0x2c5b940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c5c1f0() {
   double input = -1.4571;
   input += synapse0x2c5c530();
   input += synapse0x2c5c570();
   input += synapse0x2c5c5b0();
   input += synapse0x2c5c5f0();
   input += synapse0x2c5c630();
   input += synapse0x2c5c670();
   input += synapse0x2c5c6b0();
   input += synapse0x2c5c6f0();
   input += synapse0x2c5c730();
   input += synapse0x2c5c770();
   input += synapse0x2c5c7b0();
   input += synapse0x2c5c7f0();
   input += synapse0x2c5c830();
   input += synapse0x2c5c870();
   input += synapse0x2c5c8b0();
   input += synapse0x2c5c8f0();
   input += synapse0x2c5c380();
   input += synapse0x2c5c3c0();
   input += synapse0x2c5ca40();
   input += synapse0x2c5ca80();
   input += synapse0x2c5cac0();
   input += synapse0x2c5cb00();
   input += synapse0x2c5cb40();
   input += synapse0x2c5cb80();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c5c1f0() {
   double input = input0x2c5c1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c5cbc0() {
   double input = -2.60782;
   input += synapse0x2c5cf00();
   input += synapse0x2c5cf40();
   input += synapse0x2c5cf80();
   input += synapse0x2c5cfc0();
   input += synapse0x2c5d000();
   input += synapse0x2c5d040();
   input += synapse0x2c5d080();
   input += synapse0x2c5d0c0();
   input += synapse0x2c5d100();
   input += synapse0x2c5d140();
   input += synapse0x2c5d180();
   input += synapse0x2c5d1c0();
   input += synapse0x2c5d200();
   input += synapse0x2c5d240();
   input += synapse0x2c5d280();
   input += synapse0x2c5d2c0();
   input += synapse0x2c5cd50();
   input += synapse0x2c5cd90();
   input += synapse0x2c5d410();
   input += synapse0x2c5d450();
   input += synapse0x2c5d490();
   input += synapse0x2c5d4d0();
   input += synapse0x2c5d510();
   input += synapse0x2c5d550();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c5cbc0() {
   double input = input0x2c5cbc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c5d590() {
   double input = 1.03134;
   input += synapse0x2c5d8d0();
   input += synapse0x2c5d910();
   input += synapse0x2c5d950();
   input += synapse0x2c5d990();
   input += synapse0x2c5d9d0();
   input += synapse0x2c5da10();
   input += synapse0x2c5da50();
   input += synapse0x2c5da90();
   input += synapse0x2c5dad0();
   input += synapse0x2c5db10();
   input += synapse0x2c5db50();
   input += synapse0x2c5db90();
   input += synapse0x2c5dbd0();
   input += synapse0x2c5dc10();
   input += synapse0x2c5dc50();
   input += synapse0x2c5dc90();
   input += synapse0x2c5d720();
   input += synapse0x2c5d760();
   input += synapse0x2c5dde0();
   input += synapse0x2c5de20();
   input += synapse0x2c5de60();
   input += synapse0x2c5dea0();
   input += synapse0x2c5dee0();
   input += synapse0x2c5df20();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c5d590() {
   double input = input0x2c5d590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c64790() {
   double input = -1.42428;
   input += synapse0x2c3a4c0();
   input += synapse0x2c3a500();
   input += synapse0x2c3b9d0();
   input += synapse0x2c3ba10();
   input += synapse0x2c3c3a0();
   input += synapse0x2c3c3e0();
   input += synapse0x2c3d170();
   input += synapse0x2c3d1b0();
   input += synapse0x2c3db40();
   input += synapse0x2c3db80();
   input += synapse0x2c3e510();
   input += synapse0x2c3e550();
   input += synapse0x2c3eff0();
   input += synapse0x2c3f030();
   input += synapse0x2c3f9c0();
   input += synapse0x2c3fa00();
   input += synapse0x2c3caa0();
   input += synapse0x2c3cae0();
   input += synapse0x2c41570();
   input += synapse0x2c415b0();
   input += synapse0x2c41f40();
   input += synapse0x2c41f80();
   input += synapse0x2c42910();
   input += synapse0x2c42950();
   input += synapse0x2c432e0();
   input += synapse0x2c43320();
   input += synapse0x2c37450();
   input += synapse0x2c37490();
   input += synapse0x2c453d0();
   input += synapse0x2c45410();
   input += synapse0x2c45da0();
   input += synapse0x2c45de0();
   input += synapse0x2c46770();
   input += synapse0x2c467b0();
   input += synapse0x2c47140();
   input += synapse0x2c47180();
   input += synapse0x2c47b10();
   input += synapse0x2c47b50();
   input += synapse0x2c40660();
   input += synapse0x2c406a0();
   input += synapse0x2c49f10();
   input += synapse0x2c49f50();
   input += synapse0x2c4a8a0();
   input += synapse0x2c4a8e0();
   input += synapse0x2c4b270();
   input += synapse0x2c4b2b0();
   input += synapse0x2c4bc40();
   input += synapse0x2c4bc80();
   input += synapse0x2c4c610();
   input += synapse0x2c4c650();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c64790() {
   double input = input0x2c64790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c64b30() {
   double input = -1.32601;
   input += synapse0x2c4ed50();
   input += synapse0x2c4ed90();
   input += synapse0x2c44310();
   input += synapse0x2c44350();
   input += synapse0x2c51930();
   input += synapse0x2c51970();
   input += synapse0x2c52300();
   input += synapse0x2c52340();
   input += synapse0x2c52cd0();
   input += synapse0x2c52d10();
   input += synapse0x2c536a0();
   input += synapse0x2c536e0();
   input += synapse0x2c54070();
   input += synapse0x2c540b0();
   input += synapse0x2c54a40();
   input += synapse0x2c54a80();
   input += synapse0x2c55410();
   input += synapse0x2c55450();
   input += synapse0x2c55de0();
   input += synapse0x2c55e20();
   input += synapse0x2c569c0();
   input += synapse0x2c56a00();
   input += synapse0x2c57390();
   input += synapse0x2c573d0();
   input += synapse0x2c48210();
   input += synapse0x2c48250();
   input += synapse0x2c48be0();
   input += synapse0x2c48c20();
   input += synapse0x2c495b0();
   input += synapse0x2c495f0();
   input += synapse0x2c5bad0();
   input += synapse0x2c5bb10();
   input += synapse0x2c5c4a0();
   input += synapse0x2c5c4e0();
   input += synapse0x2c5ce70();
   input += synapse0x2c5ceb0();
   input += synapse0x2c5d840();
   input += synapse0x2c5d880();
   input += synapse0x2c39730();
   input += synapse0x2c39770();
   input += synapse0x2c4cfe0();
   input += synapse0x2c4d020();
   input += synapse0x2c5df60();
   input += synapse0x2c5dfa0();
   input += synapse0x2c5dfe0();
   input += synapse0x2c5e020();
   input += synapse0x2c64ed0();
   input += synapse0x2c64f10();
   input += synapse0x2c64f50();
   input += synapse0x2c64f90();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c64b30() {
   double input = input0x2c64b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c64fd0() {
   double input = 1.10213;
   input += synapse0x2c65310();
   input += synapse0x2c65350();
   input += synapse0x2c65390();
   input += synapse0x2c653d0();
   input += synapse0x2c65410();
   input += synapse0x2c65450();
   input += synapse0x2c65490();
   input += synapse0x2c654d0();
   input += synapse0x2c65510();
   input += synapse0x2c65550();
   input += synapse0x2c65590();
   input += synapse0x2c655d0();
   input += synapse0x2c65610();
   input += synapse0x2c65650();
   input += synapse0x2c65690();
   input += synapse0x2c656d0();
   input += synapse0x2c65160();
   input += synapse0x2c651a0();
   input += synapse0x2c65820();
   input += synapse0x2c65860();
   input += synapse0x2c658a0();
   input += synapse0x2c658e0();
   input += synapse0x2c65920();
   input += synapse0x2c65960();
   input += synapse0x2c659a0();
   input += synapse0x2c659e0();
   input += synapse0x2c65a20();
   input += synapse0x2c65a60();
   input += synapse0x2c65aa0();
   input += synapse0x2c65ae0();
   input += synapse0x2c65b20();
   input += synapse0x2c65b60();
   input += synapse0x2c65710();
   input += synapse0x2c65750();
   input += synapse0x2c65790();
   input += synapse0x2c657d0();
   input += synapse0x2c65db0();
   input += synapse0x2c65df0();
   input += synapse0x2c65e30();
   input += synapse0x2c65e70();
   input += synapse0x2c65eb0();
   input += synapse0x2c65ef0();
   input += synapse0x2c65f30();
   input += synapse0x2c65f70();
   input += synapse0x2c65fb0();
   input += synapse0x2c65ff0();
   input += synapse0x2c66030();
   input += synapse0x2c66070();
   input += synapse0x2c660b0();
   input += synapse0x2c660f0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c64fd0() {
   double input = input0x2c64fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c66130() {
   double input = 0.850271;
   input += synapse0x2c66470();
   input += synapse0x2c664b0();
   input += synapse0x2c664f0();
   input += synapse0x2c66530();
   input += synapse0x2c66570();
   input += synapse0x2c665b0();
   input += synapse0x2c665f0();
   input += synapse0x2c66630();
   input += synapse0x2c66670();
   input += synapse0x2c666b0();
   input += synapse0x2c666f0();
   input += synapse0x2c66730();
   input += synapse0x2c66770();
   input += synapse0x2c667b0();
   input += synapse0x2c667f0();
   input += synapse0x2c66830();
   input += synapse0x2c662c0();
   input += synapse0x2c66300();
   input += synapse0x2c66980();
   input += synapse0x2c669c0();
   input += synapse0x2c66a00();
   input += synapse0x2c66a40();
   input += synapse0x2c66a80();
   input += synapse0x2c66ac0();
   input += synapse0x2c66b00();
   input += synapse0x2c66b40();
   input += synapse0x2c66b80();
   input += synapse0x2c66bc0();
   input += synapse0x2c66c00();
   input += synapse0x2c66c40();
   input += synapse0x2c66c80();
   input += synapse0x2c66cc0();
   input += synapse0x2c66870();
   input += synapse0x2c668b0();
   input += synapse0x2c668f0();
   input += synapse0x2c66930();
   input += synapse0x2c66f10();
   input += synapse0x2c66f50();
   input += synapse0x2c66f90();
   input += synapse0x2c66fd0();
   input += synapse0x2c67010();
   input += synapse0x2c67050();
   input += synapse0x2c67090();
   input += synapse0x2c670d0();
   input += synapse0x2c67110();
   input += synapse0x2c67150();
   input += synapse0x2c67190();
   input += synapse0x2c671d0();
   input += synapse0x2c67210();
   input += synapse0x2c67250();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c66130() {
   double input = input0x2c66130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c67290() {
   double input = 0.163122;
   input += synapse0x2c675d0();
   input += synapse0x2c67610();
   input += synapse0x2c67650();
   input += synapse0x2c67690();
   input += synapse0x2c676d0();
   input += synapse0x2c67710();
   input += synapse0x2c67750();
   input += synapse0x2c67790();
   input += synapse0x2c677d0();
   input += synapse0x2c67810();
   input += synapse0x2c67850();
   input += synapse0x2c67890();
   input += synapse0x2c678d0();
   input += synapse0x2c67910();
   input += synapse0x2c67950();
   input += synapse0x2c67990();
   input += synapse0x2c67420();
   input += synapse0x2c67460();
   input += synapse0x2c67ae0();
   input += synapse0x2c67b20();
   input += synapse0x2c67b60();
   input += synapse0x2c67ba0();
   input += synapse0x2c67be0();
   input += synapse0x2c67c20();
   input += synapse0x2c67c60();
   input += synapse0x2c67ca0();
   input += synapse0x2c67ce0();
   input += synapse0x2c67d20();
   input += synapse0x2c67d60();
   input += synapse0x2c67da0();
   input += synapse0x2c67de0();
   input += synapse0x2c67e20();
   input += synapse0x2c679d0();
   input += synapse0x2c67a10();
   input += synapse0x2c67a50();
   input += synapse0x2c67a90();
   input += synapse0x2c68070();
   input += synapse0x2c680b0();
   input += synapse0x2c680f0();
   input += synapse0x2c68130();
   input += synapse0x2c68170();
   input += synapse0x2c681b0();
   input += synapse0x2c681f0();
   input += synapse0x2c68230();
   input += synapse0x2c68270();
   input += synapse0x2c682b0();
   input += synapse0x2c682f0();
   input += synapse0x2c68330();
   input += synapse0x2c68370();
   input += synapse0x2c683b0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c67290() {
   double input = input0x2c67290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLsR::input0x2c683f0() {
   double input = 8.25506;
   input += synapse0x2c394d0();
   input += synapse0x2c68610();
   input += synapse0x2c68650();
   input += synapse0x2c68690();
   input += synapse0x2c686d0();
   return input;
}

double NNfunction_ss_sLsR::neuron0x2c683f0() {
   double input = input0x2c683f0();
   return (input * 1)+0;
}

double NNfunction_ss_sLsR::synapse0x29f4320() {
   return (neuron0x2c344b0()*0.00242267);
}

double NNfunction_ss_sLsR::synapse0x2c34370() {
   return (neuron0x2c347f0()*0.0557292);
}

double NNfunction_ss_sLsR::synapse0x2c343b0() {
   return (neuron0x2c34b30()*-0.0272852);
}

double NNfunction_ss_sLsR::synapse0x2c397c0() {
   return (neuron0x2c34e70()*1.73141);
}

double NNfunction_ss_sLsR::synapse0x2c39800() {
   return (neuron0x2c351b0()*-0.0172711);
}

double NNfunction_ss_sLsR::synapse0x2c39840() {
   return (neuron0x2c354f0()*0.0138486);
}

double NNfunction_ss_sLsR::synapse0x2c39880() {
   return (neuron0x2c35830()*-0.0491372);
}

double NNfunction_ss_sLsR::synapse0x2c398c0() {
   return (neuron0x2c35b70()*-0.0690938);
}

double NNfunction_ss_sLsR::synapse0x2c39900() {
   return (neuron0x2c35eb0()*-0.0228999);
}

double NNfunction_ss_sLsR::synapse0x2c39940() {
   return (neuron0x2c361f0()*-0.0335616);
}

double NNfunction_ss_sLsR::synapse0x2c39980() {
   return (neuron0x2c36530()*-0.0241822);
}

double NNfunction_ss_sLsR::synapse0x2c399c0() {
   return (neuron0x2c36870()*-0.106006);
}

double NNfunction_ss_sLsR::synapse0x2c39a00() {
   return (neuron0x2c36bb0()*0.358032);
}

double NNfunction_ss_sLsR::synapse0x2c39a40() {
   return (neuron0x2c36ef0()*0.0584382);
}

double NNfunction_ss_sLsR::synapse0x2c39a80() {
   return (neuron0x2c37230()*-0.0395079);
}

double NNfunction_ss_sLsR::synapse0x2c39ac0() {
   return (neuron0x2c37570()*0.125828);
}

double NNfunction_ss_sLsR::synapse0x2c342e0() {
   return (neuron0x2c378b0()*0.0687611);
}

double NNfunction_ss_sLsR::synapse0x2c34320() {
   return (neuron0x2c37e10()*-0.0439575);
}

double NNfunction_ss_sLsR::synapse0x29e5bc0() {
   return (neuron0x2c38030()*0.250542);
}

double NNfunction_ss_sLsR::synapse0x29e5c00() {
   return (neuron0x2c38370()*-0.0555963);
}

double NNfunction_ss_sLsR::synapse0x2c39d20() {
   return (neuron0x2c386b0()*0.0242203);
}

double NNfunction_ss_sLsR::synapse0x2c39d60() {
   return (neuron0x2c389f0()*0.00936514);
}

double NNfunction_ss_sLsR::synapse0x2c39da0() {
   return (neuron0x2c38d30()*-0.0427277);
}

double NNfunction_ss_sLsR::synapse0x2c39de0() {
   return (neuron0x2c39070()*-0.00604568);
}

double NNfunction_ss_sLsR::synapse0x2c3a160() {
   return (neuron0x2c344b0()*-0.0315638);
}

double NNfunction_ss_sLsR::synapse0x2c3a1a0() {
   return (neuron0x2c347f0()*-0.0384977);
}

double NNfunction_ss_sLsR::synapse0x2c3a1e0() {
   return (neuron0x2c34b30()*-0.0652468);
}

double NNfunction_ss_sLsR::synapse0x2c3a220() {
   return (neuron0x2c34e70()*-0.484289);
}

double NNfunction_ss_sLsR::synapse0x2c3a260() {
   return (neuron0x2c351b0()*-0.0366206);
}

double NNfunction_ss_sLsR::synapse0x2c3a2a0() {
   return (neuron0x2c354f0()*0.0325788);
}

double NNfunction_ss_sLsR::synapse0x2c3a2e0() {
   return (neuron0x2c35830()*0.0589343);
}

double NNfunction_ss_sLsR::synapse0x2c3a320() {
   return (neuron0x2c35b70()*0.0825661);
}

double NNfunction_ss_sLsR::synapse0x2c3a360() {
   return (neuron0x2c35eb0()*-0.0136943);
}

double NNfunction_ss_sLsR::synapse0x2c39c10() {
   return (neuron0x2c361f0()*-0.016782);
}

double NNfunction_ss_sLsR::synapse0x2c39c50() {
   return (neuron0x2c36530()*-0.00354749);
}

double NNfunction_ss_sLsR::synapse0x2c39c90() {
   return (neuron0x2c36870()*0.111787);
}

double NNfunction_ss_sLsR::synapse0x2c39cd0() {
   return (neuron0x2c36bb0()*-1.62597);
}

double NNfunction_ss_sLsR::synapse0x2c3a5b0() {
   return (neuron0x2c36ef0()*-0.0354425);
}

double NNfunction_ss_sLsR::synapse0x2c3a5f0() {
   return (neuron0x2c37230()*-0.0235047);
}

double NNfunction_ss_sLsR::synapse0x2c3a630() {
   return (neuron0x2c37570()*-0.0219809);
}

double NNfunction_ss_sLsR::synapse0x2c39fb0() {
   return (neuron0x2c378b0()*-0.0825722);
}

double NNfunction_ss_sLsR::synapse0x2c39ff0() {
   return (neuron0x2c37e10()*0.0358017);
}

double NNfunction_ss_sLsR::synapse0x2c3a780() {
   return (neuron0x2c38030()*-1.62427);
}

double NNfunction_ss_sLsR::synapse0x2c3a7c0() {
   return (neuron0x2c38370()*0.0135896);
}

double NNfunction_ss_sLsR::synapse0x2c3a800() {
   return (neuron0x2c386b0()*0.0225075);
}

double NNfunction_ss_sLsR::synapse0x2c3a840() {
   return (neuron0x2c389f0()*-0.0165317);
}

double NNfunction_ss_sLsR::synapse0x2c3a880() {
   return (neuron0x2c38d30()*-0.00592608);
}

double NNfunction_ss_sLsR::synapse0x2c3a8c0() {
   return (neuron0x2c39070()*0.00921764);
}

double NNfunction_ss_sLsR::synapse0x2c3ac40() {
   return (neuron0x2c344b0()*-0.017925);
}

double NNfunction_ss_sLsR::synapse0x2c3ac80() {
   return (neuron0x2c347f0()*-0.0866544);
}

double NNfunction_ss_sLsR::synapse0x2c3acc0() {
   return (neuron0x2c34b30()*0.109506);
}

double NNfunction_ss_sLsR::synapse0x2c3ad00() {
   return (neuron0x2c34e70()*-0.214735);
}

double NNfunction_ss_sLsR::synapse0x2c3ad40() {
   return (neuron0x2c351b0()*0.0345304);
}

double NNfunction_ss_sLsR::synapse0x2c3ad80() {
   return (neuron0x2c354f0()*0.00317697);
}

double NNfunction_ss_sLsR::synapse0x2c3adc0() {
   return (neuron0x2c35830()*0.0272077);
}

double NNfunction_ss_sLsR::synapse0x2c3ae00() {
   return (neuron0x2c35b70()*0.0139933);
}

double NNfunction_ss_sLsR::synapse0x2c3ae40() {
   return (neuron0x2c35eb0()*-0.0046194);
}

double NNfunction_ss_sLsR::synapse0x2c3ae80() {
   return (neuron0x2c361f0()*0.0296589);
}

double NNfunction_ss_sLsR::synapse0x2c3aec0() {
   return (neuron0x2c36530()*0.0241168);
}

double NNfunction_ss_sLsR::synapse0x2c3af00() {
   return (neuron0x2c36870()*0.327389);
}

double NNfunction_ss_sLsR::synapse0x2c3af40() {
   return (neuron0x2c36bb0()*0.00704111);
}

double NNfunction_ss_sLsR::synapse0x2c3af80() {
   return (neuron0x2c36ef0()*-0.101799);
}

double NNfunction_ss_sLsR::synapse0x2c3afc0() {
   return (neuron0x2c37230()*0.169924);
}

double NNfunction_ss_sLsR::synapse0x2c3b000() {
   return (neuron0x2c37570()*0.350334);
}

double NNfunction_ss_sLsR::synapse0x2c3aa90() {
   return (neuron0x2c378b0()*-0.109973);
}

double NNfunction_ss_sLsR::synapse0x2c3aad0() {
   return (neuron0x2c37e10()*0.175503);
}

double NNfunction_ss_sLsR::synapse0x29f3a10() {
   return (neuron0x2c38030()*-0.0444029);
}

double NNfunction_ss_sLsR::synapse0x29f3a50() {
   return (neuron0x2c38370()*0.00649682);
}

double NNfunction_ss_sLsR::synapse0x2c23540() {
   return (neuron0x2c386b0()*-0.0282999);
}

double NNfunction_ss_sLsR::synapse0x2c23580() {
   return (neuron0x2c389f0()*0.0205632);
}

double NNfunction_ss_sLsR::synapse0x2c235c0() {
   return (neuron0x2c38d30()*-0.0169651);
}

double NNfunction_ss_sLsR::synapse0x2c343f0() {
   return (neuron0x2c39070()*0.0451846);
}

double NNfunction_ss_sLsR::synapse0x2c3a550() {
   return (neuron0x2c344b0()*0.908492);
}

double NNfunction_ss_sLsR::synapse0x2c34430() {
   return (neuron0x2c347f0()*0.0433921);
}

double NNfunction_ss_sLsR::synapse0x2c34470() {
   return (neuron0x2c34b30()*-0.790162);
}

double NNfunction_ss_sLsR::synapse0x2c3b150() {
   return (neuron0x2c34e70()*-1.22038);
}

double NNfunction_ss_sLsR::synapse0x2c3b190() {
   return (neuron0x2c351b0()*-0.406153);
}

double NNfunction_ss_sLsR::synapse0x2c3b1d0() {
   return (neuron0x2c354f0()*-0.0625395);
}

double NNfunction_ss_sLsR::synapse0x2c3b210() {
   return (neuron0x2c35830()*-0.402465);
}

double NNfunction_ss_sLsR::synapse0x2c3b250() {
   return (neuron0x2c35b70()*0.50901);
}

double NNfunction_ss_sLsR::synapse0x2c3b290() {
   return (neuron0x2c35eb0()*0.744479);
}

double NNfunction_ss_sLsR::synapse0x2c3b2d0() {
   return (neuron0x2c361f0()*0.359218);
}

double NNfunction_ss_sLsR::synapse0x2c3b310() {
   return (neuron0x2c36530()*-0.366905);
}

double NNfunction_ss_sLsR::synapse0x2c3b350() {
   return (neuron0x2c36870()*0.54963);
}

double NNfunction_ss_sLsR::synapse0x2c3b390() {
   return (neuron0x2c36bb0()*-1.49263);
}

double NNfunction_ss_sLsR::synapse0x2c3b3d0() {
   return (neuron0x2c36ef0()*0.118278);
}

double NNfunction_ss_sLsR::synapse0x2c3b410() {
   return (neuron0x2c37230()*-0.259823);
}

double NNfunction_ss_sLsR::synapse0x2c3b450() {
   return (neuron0x2c37570()*-0.544367);
}

double NNfunction_ss_sLsR::synapse0x2c3a3a0() {
   return (neuron0x2c378b0()*0.0239805);
}

double NNfunction_ss_sLsR::synapse0x2c3a3e0() {
   return (neuron0x2c37e10()*0.216561);
}

double NNfunction_ss_sLsR::synapse0x2c3b5a0() {
   return (neuron0x2c38030()*0.937344);
}

double NNfunction_ss_sLsR::synapse0x2c3b5e0() {
   return (neuron0x2c38370()*-0.142461);
}

double NNfunction_ss_sLsR::synapse0x2c3b620() {
   return (neuron0x2c386b0()*-1.19414);
}

double NNfunction_ss_sLsR::synapse0x2c3b660() {
   return (neuron0x2c389f0()*-1.0669);
}

double NNfunction_ss_sLsR::synapse0x2c3b6a0() {
   return (neuron0x2c38d30()*0.287271);
}

double NNfunction_ss_sLsR::synapse0x2c3b6e0() {
   return (neuron0x2c39070()*1.16998);
}

double NNfunction_ss_sLsR::synapse0x2c3ba60() {
   return (neuron0x2c344b0()*0.00170686);
}

double NNfunction_ss_sLsR::synapse0x2c3baa0() {
   return (neuron0x2c347f0()*0.0130691);
}

double NNfunction_ss_sLsR::synapse0x2c3bae0() {
   return (neuron0x2c34b30()*0.0084637);
}

double NNfunction_ss_sLsR::synapse0x2c3bb20() {
   return (neuron0x2c34e70()*0.0141336);
}

double NNfunction_ss_sLsR::synapse0x2c3bb60() {
   return (neuron0x2c351b0()*0.000835508);
}

double NNfunction_ss_sLsR::synapse0x2c3bba0() {
   return (neuron0x2c354f0()*0.00512716);
}

double NNfunction_ss_sLsR::synapse0x2c3bbe0() {
   return (neuron0x2c35830()*-0.00350914);
}

double NNfunction_ss_sLsR::synapse0x2c3bc20() {
   return (neuron0x2c35b70()*-0.0122499);
}

double NNfunction_ss_sLsR::synapse0x2c3bc60() {
   return (neuron0x2c35eb0()*-0.00242337);
}

double NNfunction_ss_sLsR::synapse0x2c3bca0() {
   return (neuron0x2c361f0()*0.00285848);
}

double NNfunction_ss_sLsR::synapse0x2c3bce0() {
   return (neuron0x2c36530()*-0.00535908);
}

double NNfunction_ss_sLsR::synapse0x2c3bd20() {
   return (neuron0x2c36870()*-0.00753439);
}

double NNfunction_ss_sLsR::synapse0x2c3bd60() {
   return (neuron0x2c36bb0()*-0.637539);
}

double NNfunction_ss_sLsR::synapse0x2c3bda0() {
   return (neuron0x2c36ef0()*-0.00871906);
}

double NNfunction_ss_sLsR::synapse0x2c3bde0() {
   return (neuron0x2c37230()*0.00626767);
}

double NNfunction_ss_sLsR::synapse0x2c3be20() {
   return (neuron0x2c37570()*0.0118785);
}

double NNfunction_ss_sLsR::synapse0x2c3b8b0() {
   return (neuron0x2c378b0()*0.00797644);
}

double NNfunction_ss_sLsR::synapse0x2c3b8f0() {
   return (neuron0x2c37e10()*0.000181447);
}

double NNfunction_ss_sLsR::synapse0x2c3bf70() {
   return (neuron0x2c38030()*0.522854);
}

double NNfunction_ss_sLsR::synapse0x2c3bfb0() {
   return (neuron0x2c38370()*-0.00810164);
}

double NNfunction_ss_sLsR::synapse0x2c3bff0() {
   return (neuron0x2c386b0()*0.0136601);
}

double NNfunction_ss_sLsR::synapse0x2c3c030() {
   return (neuron0x2c389f0()*0.00547214);
}

double NNfunction_ss_sLsR::synapse0x2c3c070() {
   return (neuron0x2c38d30()*0.00461045);
}

double NNfunction_ss_sLsR::synapse0x2c3c0b0() {
   return (neuron0x2c39070()*0.00186046);
}

double NNfunction_ss_sLsR::synapse0x2c3c430() {
   return (neuron0x2c344b0()*-0.317991);
}

double NNfunction_ss_sLsR::synapse0x2c3c470() {
   return (neuron0x2c347f0()*-0.279466);
}

double NNfunction_ss_sLsR::synapse0x2c3c4b0() {
   return (neuron0x2c34b30()*-0.593324);
}

double NNfunction_ss_sLsR::synapse0x2c3c4f0() {
   return (neuron0x2c34e70()*-0.22294);
}

double NNfunction_ss_sLsR::synapse0x2c3c530() {
   return (neuron0x2c351b0()*-0.0312064);
}

double NNfunction_ss_sLsR::synapse0x2c3c570() {
   return (neuron0x2c354f0()*-0.0358121);
}

double NNfunction_ss_sLsR::synapse0x2c3c5b0() {
   return (neuron0x2c35830()*0.271827);
}

double NNfunction_ss_sLsR::synapse0x2c3c5f0() {
   return (neuron0x2c35b70()*-0.8061);
}

double NNfunction_ss_sLsR::synapse0x2c3c630() {
   return (neuron0x2c35eb0()*-0.9868);
}

double NNfunction_ss_sLsR::synapse0x29f3d80() {
   return (neuron0x2c361f0()*-0.606434);
}

double NNfunction_ss_sLsR::synapse0x29f3dc0() {
   return (neuron0x2c36530()*0.68179);
}

double NNfunction_ss_sLsR::synapse0x29f3e00() {
   return (neuron0x2c36870()*-0.885541);
}

double NNfunction_ss_sLsR::synapse0x29f3e40() {
   return (neuron0x2c36bb0()*0.0981241);
}

double NNfunction_ss_sLsR::synapse0x29f3e80() {
   return (neuron0x2c36ef0()*-0.579549);
}

double NNfunction_ss_sLsR::synapse0x29f3ec0() {
   return (neuron0x2c37230()*0.0615852);
}

double NNfunction_ss_sLsR::synapse0x29f3f00() {
   return (neuron0x2c37570()*-0.258274);
}

double NNfunction_ss_sLsR::synapse0x2c3c280() {
   return (neuron0x2c378b0()*-0.309244);
}

double NNfunction_ss_sLsR::synapse0x2c3c2c0() {
   return (neuron0x2c37e10()*0.366532);
}

double NNfunction_ss_sLsR::synapse0x29f4050() {
   return (neuron0x2c38030()*-0.457024);
}

double NNfunction_ss_sLsR::synapse0x29f4090() {
   return (neuron0x2c38370()*1.23319);
}

double NNfunction_ss_sLsR::synapse0x29f40d0() {
   return (neuron0x2c386b0()*1.63684);
}

double NNfunction_ss_sLsR::synapse0x29f4110() {
   return (neuron0x2c389f0()*-0.81718);
}

double NNfunction_ss_sLsR::synapse0x29f4150() {
   return (neuron0x2c38d30()*-0.382126);
}

double NNfunction_ss_sLsR::synapse0x2c3ce80() {
   return (neuron0x2c39070()*0.144946);
}

double NNfunction_ss_sLsR::synapse0x2c3d200() {
   return (neuron0x2c344b0()*0.345801);
}

double NNfunction_ss_sLsR::synapse0x2c3d240() {
   return (neuron0x2c347f0()*0.0319715);
}

double NNfunction_ss_sLsR::synapse0x2c3d280() {
   return (neuron0x2c34b30()*0.385714);
}

double NNfunction_ss_sLsR::synapse0x2c3d2c0() {
   return (neuron0x2c34e70()*-1.53565);
}

double NNfunction_ss_sLsR::synapse0x2c3d300() {
   return (neuron0x2c351b0()*-0.15854);
}

double NNfunction_ss_sLsR::synapse0x2c3d340() {
   return (neuron0x2c354f0()*0.27911);
}

double NNfunction_ss_sLsR::synapse0x2c3d380() {
   return (neuron0x2c35830()*0.5907);
}

double NNfunction_ss_sLsR::synapse0x2c3d3c0() {
   return (neuron0x2c35b70()*-0.0315633);
}

double NNfunction_ss_sLsR::synapse0x2c3d400() {
   return (neuron0x2c35eb0()*-0.202727);
}

double NNfunction_ss_sLsR::synapse0x2c3d440() {
   return (neuron0x2c361f0()*-0.139588);
}

double NNfunction_ss_sLsR::synapse0x2c3d480() {
   return (neuron0x2c36530()*-0.417202);
}

double NNfunction_ss_sLsR::synapse0x2c3d4c0() {
   return (neuron0x2c36870()*0.0564757);
}

double NNfunction_ss_sLsR::synapse0x2c3d500() {
   return (neuron0x2c36bb0()*0.140543);
}

double NNfunction_ss_sLsR::synapse0x2c3d540() {
   return (neuron0x2c36ef0()*-0.208237);
}

double NNfunction_ss_sLsR::synapse0x2c3d580() {
   return (neuron0x2c37230()*1.11084);
}

double NNfunction_ss_sLsR::synapse0x2c3d5c0() {
   return (neuron0x2c37570()*0.686831);
}

double NNfunction_ss_sLsR::synapse0x2c3d050() {
   return (neuron0x2c378b0()*-0.840727);
}

double NNfunction_ss_sLsR::synapse0x2c3d090() {
   return (neuron0x2c37e10()*-0.199647);
}

double NNfunction_ss_sLsR::synapse0x2c3d710() {
   return (neuron0x2c38030()*0.656473);
}

double NNfunction_ss_sLsR::synapse0x2c3d750() {
   return (neuron0x2c38370()*-0.320315);
}

double NNfunction_ss_sLsR::synapse0x2c3d790() {
   return (neuron0x2c386b0()*0.942246);
}

double NNfunction_ss_sLsR::synapse0x2c3d7d0() {
   return (neuron0x2c389f0()*-0.498766);
}

double NNfunction_ss_sLsR::synapse0x2c3d810() {
   return (neuron0x2c38d30()*0.542933);
}

double NNfunction_ss_sLsR::synapse0x2c3d850() {
   return (neuron0x2c39070()*-0.133747);
}

double NNfunction_ss_sLsR::synapse0x2c3dbd0() {
   return (neuron0x2c344b0()*-0.429854);
}

double NNfunction_ss_sLsR::synapse0x2c3dc10() {
   return (neuron0x2c347f0()*-0.923538);
}

double NNfunction_ss_sLsR::synapse0x2c3dc50() {
   return (neuron0x2c34b30()*0.257973);
}

double NNfunction_ss_sLsR::synapse0x2c3dc90() {
   return (neuron0x2c34e70()*-1.18333);
}

double NNfunction_ss_sLsR::synapse0x2c3dcd0() {
   return (neuron0x2c351b0()*-0.173711);
}

double NNfunction_ss_sLsR::synapse0x2c3dd10() {
   return (neuron0x2c354f0()*-0.878437);
}

double NNfunction_ss_sLsR::synapse0x2c3dd50() {
   return (neuron0x2c35830()*0.795399);
}

double NNfunction_ss_sLsR::synapse0x2c3dd90() {
   return (neuron0x2c35b70()*0.436285);
}

double NNfunction_ss_sLsR::synapse0x2c3ddd0() {
   return (neuron0x2c35eb0()*1.36257);
}

double NNfunction_ss_sLsR::synapse0x2c3de10() {
   return (neuron0x2c361f0()*-0.145789);
}

double NNfunction_ss_sLsR::synapse0x2c3de50() {
   return (neuron0x2c36530()*1.40465);
}

double NNfunction_ss_sLsR::synapse0x2c3de90() {
   return (neuron0x2c36870()*0.291141);
}

double NNfunction_ss_sLsR::synapse0x2c3ded0() {
   return (neuron0x2c36bb0()*-0.650114);
}

double NNfunction_ss_sLsR::synapse0x2c3df10() {
   return (neuron0x2c36ef0()*-0.752075);
}

double NNfunction_ss_sLsR::synapse0x2c3df50() {
   return (neuron0x2c37230()*0.0790791);
}

double NNfunction_ss_sLsR::synapse0x2c3df90() {
   return (neuron0x2c37570()*0.764724);
}

double NNfunction_ss_sLsR::synapse0x2c3da20() {
   return (neuron0x2c378b0()*-0.00826951);
}

double NNfunction_ss_sLsR::synapse0x2c3da60() {
   return (neuron0x2c37e10()*-0.378545);
}

double NNfunction_ss_sLsR::synapse0x2c3e0e0() {
   return (neuron0x2c38030()*-0.0655499);
}

double NNfunction_ss_sLsR::synapse0x2c3e120() {
   return (neuron0x2c38370()*-0.195192);
}

double NNfunction_ss_sLsR::synapse0x2c3e160() {
   return (neuron0x2c386b0()*0.430937);
}

double NNfunction_ss_sLsR::synapse0x2c3e1a0() {
   return (neuron0x2c389f0()*-0.262296);
}

double NNfunction_ss_sLsR::synapse0x2c3e1e0() {
   return (neuron0x2c38d30()*0.0199676);
}

double NNfunction_ss_sLsR::synapse0x2c3e220() {
   return (neuron0x2c39070()*-0.000847278);
}

double NNfunction_ss_sLsR::synapse0x2c37d00() {
   return (neuron0x2c344b0()*0.140771);
}

double NNfunction_ss_sLsR::synapse0x2c37d40() {
   return (neuron0x2c347f0()*-0.356082);
}

double NNfunction_ss_sLsR::synapse0x2c37d80() {
   return (neuron0x2c34b30()*0.842499);
}

double NNfunction_ss_sLsR::synapse0x2c37dc0() {
   return (neuron0x2c34e70()*-2.08936);
}

double NNfunction_ss_sLsR::synapse0x2c3e7b0() {
   return (neuron0x2c351b0()*0.0548189);
}

double NNfunction_ss_sLsR::synapse0x2c3e7f0() {
   return (neuron0x2c354f0()*0.221403);
}

double NNfunction_ss_sLsR::synapse0x2c3e830() {
   return (neuron0x2c35830()*-0.317362);
}

double NNfunction_ss_sLsR::synapse0x2c3e870() {
   return (neuron0x2c35b70()*0.0722796);
}

double NNfunction_ss_sLsR::synapse0x2c3e8b0() {
   return (neuron0x2c35eb0()*0.0120855);
}

double NNfunction_ss_sLsR::synapse0x2c3e8f0() {
   return (neuron0x2c361f0()*-0.0470236);
}

double NNfunction_ss_sLsR::synapse0x2c3e930() {
   return (neuron0x2c36530()*-0.132059);
}

double NNfunction_ss_sLsR::synapse0x2c3e970() {
   return (neuron0x2c36870()*-0.229442);
}

double NNfunction_ss_sLsR::synapse0x2c3e9b0() {
   return (neuron0x2c36bb0()*0.512326);
}

double NNfunction_ss_sLsR::synapse0x2c3e9f0() {
   return (neuron0x2c36ef0()*0.228064);
}

double NNfunction_ss_sLsR::synapse0x2c3ea30() {
   return (neuron0x2c37230()*-0.157546);
}

double NNfunction_ss_sLsR::synapse0x2c3ea70() {
   return (neuron0x2c37570()*0.072273);
}

double NNfunction_ss_sLsR::synapse0x2c3e3f0() {
   return (neuron0x2c378b0()*0.0701658);
}

double NNfunction_ss_sLsR::synapse0x2c3e430() {
   return (neuron0x2c37e10()*0.0540379);
}

double NNfunction_ss_sLsR::synapse0x2c3ebc0() {
   return (neuron0x2c38030()*0.292206);
}

double NNfunction_ss_sLsR::synapse0x2c3ec00() {
   return (neuron0x2c38370()*0.00448185);
}

double NNfunction_ss_sLsR::synapse0x2c3ec40() {
   return (neuron0x2c386b0()*-0.283066);
}

double NNfunction_ss_sLsR::synapse0x2c3ec80() {
   return (neuron0x2c389f0()*0.0405047);
}

double NNfunction_ss_sLsR::synapse0x2c3ecc0() {
   return (neuron0x2c38d30()*-0.233465);
}

double NNfunction_ss_sLsR::synapse0x2c3ed00() {
   return (neuron0x2c39070()*0.0962035);
}

double NNfunction_ss_sLsR::synapse0x2c3f080() {
   return (neuron0x2c344b0()*0.0205125);
}

double NNfunction_ss_sLsR::synapse0x2c3f0c0() {
   return (neuron0x2c347f0()*-0.0385214);
}

double NNfunction_ss_sLsR::synapse0x2c3f100() {
   return (neuron0x2c34b30()*0.848458);
}

double NNfunction_ss_sLsR::synapse0x2c3f140() {
   return (neuron0x2c34e70()*1.97626);
}

double NNfunction_ss_sLsR::synapse0x2c3f180() {
   return (neuron0x2c351b0()*0.0122424);
}

double NNfunction_ss_sLsR::synapse0x2c3f1c0() {
   return (neuron0x2c354f0()*0.0411369);
}

double NNfunction_ss_sLsR::synapse0x2c3f200() {
   return (neuron0x2c35830()*0.00249679);
}

double NNfunction_ss_sLsR::synapse0x2c3f240() {
   return (neuron0x2c35b70()*0.0698549);
}

double NNfunction_ss_sLsR::synapse0x2c3f280() {
   return (neuron0x2c35eb0()*0.00416726);
}

double NNfunction_ss_sLsR::synapse0x2c3f2c0() {
   return (neuron0x2c361f0()*0.0174665);
}

double NNfunction_ss_sLsR::synapse0x2c3f300() {
   return (neuron0x2c36530()*-0.0145142);
}

double NNfunction_ss_sLsR::synapse0x2c3f340() {
   return (neuron0x2c36870()*-0.0577955);
}

double NNfunction_ss_sLsR::synapse0x2c3f380() {
   return (neuron0x2c36bb0()*-0.746823);
}

double NNfunction_ss_sLsR::synapse0x2c3f3c0() {
   return (neuron0x2c36ef0()*0.0896142);
}

double NNfunction_ss_sLsR::synapse0x2c3f400() {
   return (neuron0x2c37230()*0.0405362);
}

double NNfunction_ss_sLsR::synapse0x2c3f440() {
   return (neuron0x2c37570()*0.00879903);
}

double NNfunction_ss_sLsR::synapse0x2c3eed0() {
   return (neuron0x2c378b0()*0.0262226);
}

double NNfunction_ss_sLsR::synapse0x2c3ef10() {
   return (neuron0x2c37e10()*-0.0378721);
}

double NNfunction_ss_sLsR::synapse0x2c3f590() {
   return (neuron0x2c38030()*0.123388);
}

double NNfunction_ss_sLsR::synapse0x2c3f5d0() {
   return (neuron0x2c38370()*0.000181645);
}

double NNfunction_ss_sLsR::synapse0x2c3f610() {
   return (neuron0x2c386b0()*0.072248);
}

double NNfunction_ss_sLsR::synapse0x2c3f650() {
   return (neuron0x2c389f0()*-0.04613);
}

double NNfunction_ss_sLsR::synapse0x2c3f690() {
   return (neuron0x2c38d30()*-0.0373787);
}

double NNfunction_ss_sLsR::synapse0x2c3f6d0() {
   return (neuron0x2c39070()*0.082751);
}

double NNfunction_ss_sLsR::synapse0x2c3fa50() {
   return (neuron0x2c344b0()*-0.00224656);
}

double NNfunction_ss_sLsR::synapse0x2c3fa90() {
   return (neuron0x2c347f0()*0.0766626);
}

double NNfunction_ss_sLsR::synapse0x2c3fad0() {
   return (neuron0x2c34b30()*-0.260942);
}

double NNfunction_ss_sLsR::synapse0x2c3fb10() {
   return (neuron0x2c34e70()*1.12245);
}

double NNfunction_ss_sLsR::synapse0x2c3fb50() {
   return (neuron0x2c351b0()*0.0462795);
}

double NNfunction_ss_sLsR::synapse0x2c3fb90() {
   return (neuron0x2c354f0()*0.0718576);
}

double NNfunction_ss_sLsR::synapse0x2c3fbd0() {
   return (neuron0x2c35830()*-0.0200399);
}

double NNfunction_ss_sLsR::synapse0x2c3fc10() {
   return (neuron0x2c35b70()*-0.0543395);
}

double NNfunction_ss_sLsR::synapse0x2c3fc50() {
   return (neuron0x2c35eb0()*-0.00195508);
}

double NNfunction_ss_sLsR::synapse0x2c3fc90() {
   return (neuron0x2c361f0()*-0.0152633);
}

double NNfunction_ss_sLsR::synapse0x2c3fcd0() {
   return (neuron0x2c36530()*-0.00316223);
}

double NNfunction_ss_sLsR::synapse0x2c3fd10() {
   return (neuron0x2c36870()*0.0972729);
}

double NNfunction_ss_sLsR::synapse0x2c3fd50() {
   return (neuron0x2c36bb0()*0.126539);
}

double NNfunction_ss_sLsR::synapse0x2c3fd90() {
   return (neuron0x2c36ef0()*-0.116129);
}

double NNfunction_ss_sLsR::synapse0x2c3fdd0() {
   return (neuron0x2c37230()*0.18556);
}

double NNfunction_ss_sLsR::synapse0x2c3fe10() {
   return (neuron0x2c37570()*0.128735);
}

double NNfunction_ss_sLsR::synapse0x2c3f8a0() {
   return (neuron0x2c378b0()*-0.0840257);
}

double NNfunction_ss_sLsR::synapse0x2c3f8e0() {
   return (neuron0x2c37e10()*0.0313844);
}

double NNfunction_ss_sLsR::synapse0x2c3c670() {
   return (neuron0x2c38030()*0.17249);
}

double NNfunction_ss_sLsR::synapse0x2c3c6b0() {
   return (neuron0x2c38370()*0.0205393);
}

double NNfunction_ss_sLsR::synapse0x2c3c6f0() {
   return (neuron0x2c386b0()*0.0217723);
}

double NNfunction_ss_sLsR::synapse0x2c3c730() {
   return (neuron0x2c389f0()*0.0355781);
}

double NNfunction_ss_sLsR::synapse0x2c3c770() {
   return (neuron0x2c38d30()*0.116782);
}

double NNfunction_ss_sLsR::synapse0x2c3c7b0() {
   return (neuron0x2c39070()*-0.0106772);
}

double NNfunction_ss_sLsR::synapse0x2c3cb30() {
   return (neuron0x2c344b0()*-0.118879);
}

double NNfunction_ss_sLsR::synapse0x2c3cb70() {
   return (neuron0x2c347f0()*-0.642755);
}

double NNfunction_ss_sLsR::synapse0x2c3cbb0() {
   return (neuron0x2c34b30()*-1.03309);
}

double NNfunction_ss_sLsR::synapse0x2c3cbf0() {
   return (neuron0x2c34e70()*0.185611);
}

double NNfunction_ss_sLsR::synapse0x2c3cc30() {
   return (neuron0x2c351b0()*0.461249);
}

double NNfunction_ss_sLsR::synapse0x2c3cc70() {
   return (neuron0x2c354f0()*-1.16538);
}

double NNfunction_ss_sLsR::synapse0x2c3ccb0() {
   return (neuron0x2c35830()*-0.23576);
}

double NNfunction_ss_sLsR::synapse0x2c3ccf0() {
   return (neuron0x2c35b70()*0.344901);
}

double NNfunction_ss_sLsR::synapse0x2c3cd30() {
   return (neuron0x2c35eb0()*0.969158);
}

double NNfunction_ss_sLsR::synapse0x2c3cd70() {
   return (neuron0x2c361f0()*-0.018122);
}

double NNfunction_ss_sLsR::synapse0x2c3cdb0() {
   return (neuron0x2c36530()*-0.191549);
}

double NNfunction_ss_sLsR::synapse0x2c3cdf0() {
   return (neuron0x2c36870()*0.02864);
}

double NNfunction_ss_sLsR::synapse0x2c3ce30() {
   return (neuron0x2c36bb0()*-0.851073);
}

double NNfunction_ss_sLsR::synapse0x2c40f70() {
   return (neuron0x2c36ef0()*0.369579);
}

double NNfunction_ss_sLsR::synapse0x2c40fb0() {
   return (neuron0x2c37230()*0.070425);
}

double NNfunction_ss_sLsR::synapse0x2c40ff0() {
   return (neuron0x2c37570()*0.850955);
}

double NNfunction_ss_sLsR::synapse0x2c3c980() {
   return (neuron0x2c378b0()*-0.566956);
}

double NNfunction_ss_sLsR::synapse0x2c3c9c0() {
   return (neuron0x2c37e10()*-0.638683);
}

double NNfunction_ss_sLsR::synapse0x2c41140() {
   return (neuron0x2c38030()*-0.622972);
}

double NNfunction_ss_sLsR::synapse0x2c41180() {
   return (neuron0x2c38370()*-0.099379);
}

double NNfunction_ss_sLsR::synapse0x2c411c0() {
   return (neuron0x2c386b0()*-1.06386);
}

double NNfunction_ss_sLsR::synapse0x2c41200() {
   return (neuron0x2c389f0()*0.872198);
}

double NNfunction_ss_sLsR::synapse0x2c41240() {
   return (neuron0x2c38d30()*0.303428);
}

double NNfunction_ss_sLsR::synapse0x2c41280() {
   return (neuron0x2c39070()*-1.55374);
}

double NNfunction_ss_sLsR::synapse0x2c41600() {
   return (neuron0x2c344b0()*-0.00946134);
}

double NNfunction_ss_sLsR::synapse0x2c41640() {
   return (neuron0x2c347f0()*-0.194972);
}

double NNfunction_ss_sLsR::synapse0x2c41680() {
   return (neuron0x2c34b30()*0.685327);
}

double NNfunction_ss_sLsR::synapse0x2c416c0() {
   return (neuron0x2c34e70()*-1.90006);
}

double NNfunction_ss_sLsR::synapse0x2c41700() {
   return (neuron0x2c351b0()*0.486617);
}

double NNfunction_ss_sLsR::synapse0x2c41740() {
   return (neuron0x2c354f0()*0.118037);
}

double NNfunction_ss_sLsR::synapse0x2c41780() {
   return (neuron0x2c35830()*-0.11377);
}

double NNfunction_ss_sLsR::synapse0x2c417c0() {
   return (neuron0x2c35b70()*-0.0665347);
}

double NNfunction_ss_sLsR::synapse0x2c41800() {
   return (neuron0x2c35eb0()*0.0425121);
}

double NNfunction_ss_sLsR::synapse0x2c41840() {
   return (neuron0x2c361f0()*-0.334905);
}

double NNfunction_ss_sLsR::synapse0x2c41880() {
   return (neuron0x2c36530()*-0.0360047);
}

double NNfunction_ss_sLsR::synapse0x2c418c0() {
   return (neuron0x2c36870()*-0.387369);
}

double NNfunction_ss_sLsR::synapse0x2c41900() {
   return (neuron0x2c36bb0()*-0.0367339);
}

double NNfunction_ss_sLsR::synapse0x2c41940() {
   return (neuron0x2c36ef0()*0.692675);
}

double NNfunction_ss_sLsR::synapse0x2c41980() {
   return (neuron0x2c37230()*0.403999);
}

double NNfunction_ss_sLsR::synapse0x2c419c0() {
   return (neuron0x2c37570()*-0.885083);
}

double NNfunction_ss_sLsR::synapse0x2c41450() {
   return (neuron0x2c378b0()*0.0503278);
}

double NNfunction_ss_sLsR::synapse0x2c41490() {
   return (neuron0x2c37e10()*-0.196605);
}

double NNfunction_ss_sLsR::synapse0x2c41b10() {
   return (neuron0x2c38030()*0.145488);
}

double NNfunction_ss_sLsR::synapse0x2c41b50() {
   return (neuron0x2c38370()*0.240353);
}

double NNfunction_ss_sLsR::synapse0x2c41b90() {
   return (neuron0x2c386b0()*0.278363);
}

double NNfunction_ss_sLsR::synapse0x2c41bd0() {
   return (neuron0x2c389f0()*0.187296);
}

double NNfunction_ss_sLsR::synapse0x2c41c10() {
   return (neuron0x2c38d30()*0.00178484);
}

double NNfunction_ss_sLsR::synapse0x2c41c50() {
   return (neuron0x2c39070()*0.148112);
}

double NNfunction_ss_sLsR::synapse0x2c41fd0() {
   return (neuron0x2c344b0()*-0.0327422);
}

double NNfunction_ss_sLsR::synapse0x2c42010() {
   return (neuron0x2c347f0()*-0.0273924);
}

double NNfunction_ss_sLsR::synapse0x2c42050() {
   return (neuron0x2c34b30()*0.0148482);
}

double NNfunction_ss_sLsR::synapse0x2c42090() {
   return (neuron0x2c34e70()*-2.04109);
}

double NNfunction_ss_sLsR::synapse0x2c420d0() {
   return (neuron0x2c351b0()*0.0253292);
}

double NNfunction_ss_sLsR::synapse0x2c42110() {
   return (neuron0x2c354f0()*-0.0244142);
}

double NNfunction_ss_sLsR::synapse0x2c42150() {
   return (neuron0x2c35830()*0.0596624);
}

double NNfunction_ss_sLsR::synapse0x2c42190() {
   return (neuron0x2c35b70()*0.0407063);
}

double NNfunction_ss_sLsR::synapse0x2c421d0() {
   return (neuron0x2c35eb0()*-0.0210312);
}

double NNfunction_ss_sLsR::synapse0x2c42210() {
   return (neuron0x2c361f0()*0.0368007);
}

double NNfunction_ss_sLsR::synapse0x2c42250() {
   return (neuron0x2c36530()*-0.0205535);
}

double NNfunction_ss_sLsR::synapse0x2c42290() {
   return (neuron0x2c36870()*0.0798488);
}

double NNfunction_ss_sLsR::synapse0x2c422d0() {
   return (neuron0x2c36bb0()*-0.322505);
}

double NNfunction_ss_sLsR::synapse0x2c42310() {
   return (neuron0x2c36ef0()*-0.0749463);
}

double NNfunction_ss_sLsR::synapse0x2c42350() {
   return (neuron0x2c37230()*-0.00214829);
}

double NNfunction_ss_sLsR::synapse0x2c42390() {
   return (neuron0x2c37570()*0.0315621);
}

double NNfunction_ss_sLsR::synapse0x2c41e20() {
   return (neuron0x2c378b0()*-0.0435575);
}

double NNfunction_ss_sLsR::synapse0x2c41e60() {
   return (neuron0x2c37e10()*0.0227866);
}

double NNfunction_ss_sLsR::synapse0x2c424e0() {
   return (neuron0x2c38030()*0.364076);
}

double NNfunction_ss_sLsR::synapse0x2c42520() {
   return (neuron0x2c38370()*-0.0419798);
}

double NNfunction_ss_sLsR::synapse0x2c42560() {
   return (neuron0x2c386b0()*0.00742221);
}

double NNfunction_ss_sLsR::synapse0x2c425a0() {
   return (neuron0x2c389f0()*0.00697821);
}

double NNfunction_ss_sLsR::synapse0x2c425e0() {
   return (neuron0x2c38d30()*-0.00812966);
}

double NNfunction_ss_sLsR::synapse0x2c42620() {
   return (neuron0x2c39070()*0.014606);
}

double NNfunction_ss_sLsR::synapse0x2c429a0() {
   return (neuron0x2c344b0()*1.30872);
}

double NNfunction_ss_sLsR::synapse0x2c429e0() {
   return (neuron0x2c347f0()*0.267152);
}

double NNfunction_ss_sLsR::synapse0x2c42a20() {
   return (neuron0x2c34b30()*0.202385);
}

double NNfunction_ss_sLsR::synapse0x2c42a60() {
   return (neuron0x2c34e70()*0.435527);
}

double NNfunction_ss_sLsR::synapse0x2c42aa0() {
   return (neuron0x2c351b0()*-0.0592835);
}

double NNfunction_ss_sLsR::synapse0x2c42ae0() {
   return (neuron0x2c354f0()*1.48053);
}

double NNfunction_ss_sLsR::synapse0x2c42b20() {
   return (neuron0x2c35830()*-0.0716324);
}

double NNfunction_ss_sLsR::synapse0x2c42b60() {
   return (neuron0x2c35b70()*0.681999);
}

double NNfunction_ss_sLsR::synapse0x2c42ba0() {
   return (neuron0x2c35eb0()*-0.817766);
}

double NNfunction_ss_sLsR::synapse0x2c42be0() {
   return (neuron0x2c361f0()*-0.920895);
}

double NNfunction_ss_sLsR::synapse0x2c42c20() {
   return (neuron0x2c36530()*-0.870496);
}

double NNfunction_ss_sLsR::synapse0x2c42c60() {
   return (neuron0x2c36870()*0.226576);
}

double NNfunction_ss_sLsR::synapse0x2c42ca0() {
   return (neuron0x2c36bb0()*0.841515);
}

double NNfunction_ss_sLsR::synapse0x2c42ce0() {
   return (neuron0x2c36ef0()*-0.181591);
}

double NNfunction_ss_sLsR::synapse0x2c42d20() {
   return (neuron0x2c37230()*0.0692881);
}

double NNfunction_ss_sLsR::synapse0x2c42d60() {
   return (neuron0x2c37570()*-0.558937);
}

double NNfunction_ss_sLsR::synapse0x2c427f0() {
   return (neuron0x2c378b0()*0.446283);
}

double NNfunction_ss_sLsR::synapse0x2c42830() {
   return (neuron0x2c37e10()*0.892241);
}

double NNfunction_ss_sLsR::synapse0x2c42eb0() {
   return (neuron0x2c38030()*1.09341);
}

double NNfunction_ss_sLsR::synapse0x2c42ef0() {
   return (neuron0x2c38370()*0.0359719);
}

double NNfunction_ss_sLsR::synapse0x2c42f30() {
   return (neuron0x2c386b0()*0.2039);
}

double NNfunction_ss_sLsR::synapse0x2c42f70() {
   return (neuron0x2c389f0()*-0.223825);
}

double NNfunction_ss_sLsR::synapse0x2c42fb0() {
   return (neuron0x2c38d30()*-1.01617);
}

double NNfunction_ss_sLsR::synapse0x2c42ff0() {
   return (neuron0x2c39070()*-0.0272608);
}

double NNfunction_ss_sLsR::synapse0x2c43370() {
   return (neuron0x2c344b0()*-1.69587);
}

double NNfunction_ss_sLsR::synapse0x2c346d0() {
   return (neuron0x2c347f0()*1.02639);
}

double NNfunction_ss_sLsR::synapse0x2c34710() {
   return (neuron0x2c34b30()*0.196245);
}

double NNfunction_ss_sLsR::synapse0x2c34a10() {
   return (neuron0x2c34e70()*0.032893);
}

double NNfunction_ss_sLsR::synapse0x2c34a50() {
   return (neuron0x2c351b0()*0.0878125);
}

double NNfunction_ss_sLsR::synapse0x2c34d50() {
   return (neuron0x2c354f0()*-0.337877);
}

double NNfunction_ss_sLsR::synapse0x2c34d90() {
   return (neuron0x2c35830()*0.24348);
}

double NNfunction_ss_sLsR::synapse0x2c35090() {
   return (neuron0x2c35b70()*-0.408178);
}

double NNfunction_ss_sLsR::synapse0x2c350d0() {
   return (neuron0x2c35eb0()*0.898388);
}

double NNfunction_ss_sLsR::synapse0x2c353d0() {
   return (neuron0x2c361f0()*-0.290396);
}

double NNfunction_ss_sLsR::synapse0x2c35410() {
   return (neuron0x2c36530()*-0.772044);
}

double NNfunction_ss_sLsR::synapse0x2c35710() {
   return (neuron0x2c36870()*-0.589227);
}

double NNfunction_ss_sLsR::synapse0x2c35750() {
   return (neuron0x2c36bb0()*-1.12862);
}

double NNfunction_ss_sLsR::synapse0x2c35a50() {
   return (neuron0x2c36ef0()*-0.216298);
}

double NNfunction_ss_sLsR::synapse0x2c35a90() {
   return (neuron0x2c37230()*0.631163);
}

double NNfunction_ss_sLsR::synapse0x2c35d90() {
   return (neuron0x2c37570()*0.0569739);
}

double NNfunction_ss_sLsR::synapse0x2c35dd0() {
   return (neuron0x2c378b0()*-0.449827);
}

double NNfunction_ss_sLsR::synapse0x2c360d0() {
   return (neuron0x2c37e10()*-0.100578);
}

double NNfunction_ss_sLsR::synapse0x2c36110() {
   return (neuron0x2c38030()*-0.909969);
}

double NNfunction_ss_sLsR::synapse0x2c36410() {
   return (neuron0x2c38370()*0.348664);
}

double NNfunction_ss_sLsR::synapse0x2c36450() {
   return (neuron0x2c386b0()*0.397951);
}

double NNfunction_ss_sLsR::synapse0x2c36750() {
   return (neuron0x2c389f0()*-0.245971);
}

double NNfunction_ss_sLsR::synapse0x2c36790() {
   return (neuron0x2c38d30()*0.818983);
}

double NNfunction_ss_sLsR::synapse0x2c36a90() {
   return (neuron0x2c39070()*-0.293396);
}

double NNfunction_ss_sLsR::synapse0x2c36ad0() {
   return (neuron0x2c344b0()*-0.0169903);
}

double NNfunction_ss_sLsR::synapse0x2c37790() {
   return (neuron0x2c347f0()*-0.0156816);
}

double NNfunction_ss_sLsR::synapse0x2c377d0() {
   return (neuron0x2c34b30()*-0.0566535);
}

double NNfunction_ss_sLsR::synapse0x2c431c0() {
   return (neuron0x2c34e70()*3.3883);
}

double NNfunction_ss_sLsR::synapse0x2c43200() {
   return (neuron0x2c351b0()*0.00308673);
}

double NNfunction_ss_sLsR::synapse0x2c37ad0() {
   return (neuron0x2c354f0()*-0.00764229);
}

double NNfunction_ss_sLsR::synapse0x2c37b10() {
   return (neuron0x2c35830()*0.0310652);
}

double NNfunction_ss_sLsR::synapse0x29e5aa0() {
   return (neuron0x2c35b70()*0.00528994);
}

double NNfunction_ss_sLsR::synapse0x29e5ae0() {
   return (neuron0x2c35eb0()*-0.0132775);
}

double NNfunction_ss_sLsR::synapse0x2c38250() {
   return (neuron0x2c361f0()*0.00400029);
}

double NNfunction_ss_sLsR::synapse0x2c38290() {
   return (neuron0x2c36530()*-0.00538758);
}

double NNfunction_ss_sLsR::synapse0x2c38590() {
   return (neuron0x2c36870()*0.0190678);
}

double NNfunction_ss_sLsR::synapse0x2c385d0() {
   return (neuron0x2c36bb0()*-0.0055336);
}

double NNfunction_ss_sLsR::synapse0x2c388d0() {
   return (neuron0x2c36ef0()*-0.0176756);
}

double NNfunction_ss_sLsR::synapse0x2c38910() {
   return (neuron0x2c37230()*0.00376452);
}

double NNfunction_ss_sLsR::synapse0x2c38c10() {
   return (neuron0x2c37570()*0.0107202);
}

double NNfunction_ss_sLsR::synapse0x2c38c50() {
   return (neuron0x2c378b0()*-0.014723);
}

double NNfunction_ss_sLsR::synapse0x2c38f50() {
   return (neuron0x2c37e10()*0.00252906);
}

double NNfunction_ss_sLsR::synapse0x2c38f90() {
   return (neuron0x2c38030()*0.188543);
}

double NNfunction_ss_sLsR::synapse0x2c39290() {
   return (neuron0x2c38370()*-0.0241685);
}

double NNfunction_ss_sLsR::synapse0x2c392d0() {
   return (neuron0x2c386b0()*0.016714);
}

double NNfunction_ss_sLsR::synapse0x2c36dd0() {
   return (neuron0x2c389f0()*-0.0024294);
}

double NNfunction_ss_sLsR::synapse0x2c36e10() {
   return (neuron0x2c38d30()*-0.011814);
}

double NNfunction_ss_sLsR::synapse0x2c450e0() {
   return (neuron0x2c39070()*-0.0133924);
}

double NNfunction_ss_sLsR::synapse0x2c45460() {
   return (neuron0x2c344b0()*-0.0488053);
}

double NNfunction_ss_sLsR::synapse0x2c454a0() {
   return (neuron0x2c347f0()*0.302859);
}

double NNfunction_ss_sLsR::synapse0x2c454e0() {
   return (neuron0x2c34b30()*1.39498);
}

double NNfunction_ss_sLsR::synapse0x2c45520() {
   return (neuron0x2c34e70()*1.62963);
}

double NNfunction_ss_sLsR::synapse0x2c45560() {
   return (neuron0x2c351b0()*-0.218014);
}

double NNfunction_ss_sLsR::synapse0x2c455a0() {
   return (neuron0x2c354f0()*-0.0645122);
}

double NNfunction_ss_sLsR::synapse0x2c455e0() {
   return (neuron0x2c35830()*0.214557);
}

double NNfunction_ss_sLsR::synapse0x2c45620() {
   return (neuron0x2c35b70()*0.0652426);
}

double NNfunction_ss_sLsR::synapse0x2c45660() {
   return (neuron0x2c35eb0()*-0.0269233);
}

double NNfunction_ss_sLsR::synapse0x2c456a0() {
   return (neuron0x2c361f0()*-0.0435612);
}

double NNfunction_ss_sLsR::synapse0x2c456e0() {
   return (neuron0x2c36530()*0.107649);
}

double NNfunction_ss_sLsR::synapse0x2c45720() {
   return (neuron0x2c36870()*-0.0534821);
}

double NNfunction_ss_sLsR::synapse0x2c45760() {
   return (neuron0x2c36bb0()*-0.265312);
}

double NNfunction_ss_sLsR::synapse0x2c457a0() {
   return (neuron0x2c36ef0()*0.130764);
}

double NNfunction_ss_sLsR::synapse0x2c457e0() {
   return (neuron0x2c37230()*0.184064);
}

double NNfunction_ss_sLsR::synapse0x2c45820() {
   return (neuron0x2c37570()*-0.389611);
}

double NNfunction_ss_sLsR::synapse0x2c452b0() {
   return (neuron0x2c378b0()*0.0344589);
}

double NNfunction_ss_sLsR::synapse0x2c452f0() {
   return (neuron0x2c37e10()*-0.067956);
}

double NNfunction_ss_sLsR::synapse0x2c45970() {
   return (neuron0x2c38030()*-0.566624);
}

double NNfunction_ss_sLsR::synapse0x2c459b0() {
   return (neuron0x2c38370()*-0.343671);
}

double NNfunction_ss_sLsR::synapse0x2c459f0() {
   return (neuron0x2c386b0()*-0.0953637);
}

double NNfunction_ss_sLsR::synapse0x2c45a30() {
   return (neuron0x2c389f0()*-0.00548417);
}

double NNfunction_ss_sLsR::synapse0x2c45a70() {
   return (neuron0x2c38d30()*0.157258);
}

double NNfunction_ss_sLsR::synapse0x2c45ab0() {
   return (neuron0x2c39070()*-0.240162);
}

double NNfunction_ss_sLsR::synapse0x2c45e30() {
   return (neuron0x2c344b0()*0.0068015);
}

double NNfunction_ss_sLsR::synapse0x2c45e70() {
   return (neuron0x2c347f0()*0.0139478);
}

double NNfunction_ss_sLsR::synapse0x2c45eb0() {
   return (neuron0x2c34b30()*0.0809468);
}

double NNfunction_ss_sLsR::synapse0x2c45ef0() {
   return (neuron0x2c34e70()*1.58226);
}

double NNfunction_ss_sLsR::synapse0x2c45f30() {
   return (neuron0x2c351b0()*0.0172275);
}

double NNfunction_ss_sLsR::synapse0x2c45f70() {
   return (neuron0x2c354f0()*0.0188024);
}

double NNfunction_ss_sLsR::synapse0x2c45fb0() {
   return (neuron0x2c35830()*-0.00640514);
}

double NNfunction_ss_sLsR::synapse0x2c45ff0() {
   return (neuron0x2c35b70()*0.00709102);
}

double NNfunction_ss_sLsR::synapse0x2c46030() {
   return (neuron0x2c35eb0()*-0.014015);
}

double NNfunction_ss_sLsR::synapse0x2c46070() {
   return (neuron0x2c361f0()*-0.0133993);
}

double NNfunction_ss_sLsR::synapse0x2c460b0() {
   return (neuron0x2c36530()*-0.017107);
}

double NNfunction_ss_sLsR::synapse0x2c460f0() {
   return (neuron0x2c36870()*0.010859);
}

double NNfunction_ss_sLsR::synapse0x2c46130() {
   return (neuron0x2c36bb0()*-0.085557);
}

double NNfunction_ss_sLsR::synapse0x2c46170() {
   return (neuron0x2c36ef0()*0.0430759);
}

double NNfunction_ss_sLsR::synapse0x2c461b0() {
   return (neuron0x2c37230()*-0.0129324);
}

double NNfunction_ss_sLsR::synapse0x2c461f0() {
   return (neuron0x2c37570()*0.0314884);
}

double NNfunction_ss_sLsR::synapse0x2c45c80() {
   return (neuron0x2c378b0()*-0.0283104);
}

double NNfunction_ss_sLsR::synapse0x2c45cc0() {
   return (neuron0x2c37e10()*0.0200241);
}

double NNfunction_ss_sLsR::synapse0x2c46340() {
   return (neuron0x2c38030()*2.14428);
}

double NNfunction_ss_sLsR::synapse0x2c46380() {
   return (neuron0x2c38370()*-0.0273241);
}

double NNfunction_ss_sLsR::synapse0x2c463c0() {
   return (neuron0x2c386b0()*0.0204265);
}

double NNfunction_ss_sLsR::synapse0x2c46400() {
   return (neuron0x2c389f0()*-0.00809165);
}

double NNfunction_ss_sLsR::synapse0x2c46440() {
   return (neuron0x2c38d30()*-0.0122949);
}

double NNfunction_ss_sLsR::synapse0x2c46480() {
   return (neuron0x2c39070()*0.0313171);
}

double NNfunction_ss_sLsR::synapse0x2c46800() {
   return (neuron0x2c344b0()*-0.78359);
}

double NNfunction_ss_sLsR::synapse0x2c46840() {
   return (neuron0x2c347f0()*-0.365452);
}

double NNfunction_ss_sLsR::synapse0x2c46880() {
   return (neuron0x2c34b30()*0.0268685);
}

double NNfunction_ss_sLsR::synapse0x2c468c0() {
   return (neuron0x2c34e70()*-0.0673513);
}

double NNfunction_ss_sLsR::synapse0x2c46900() {
   return (neuron0x2c351b0()*1.28612);
}

double NNfunction_ss_sLsR::synapse0x2c46940() {
   return (neuron0x2c354f0()*0.80747);
}

double NNfunction_ss_sLsR::synapse0x2c46980() {
   return (neuron0x2c35830()*0.165922);
}

double NNfunction_ss_sLsR::synapse0x2c469c0() {
   return (neuron0x2c35b70()*0.252415);
}

double NNfunction_ss_sLsR::synapse0x2c46a00() {
   return (neuron0x2c35eb0()*-0.692628);
}

double NNfunction_ss_sLsR::synapse0x2c46a40() {
   return (neuron0x2c361f0()*0.534844);
}

double NNfunction_ss_sLsR::synapse0x2c46a80() {
   return (neuron0x2c36530()*-0.208619);
}

double NNfunction_ss_sLsR::synapse0x2c46ac0() {
   return (neuron0x2c36870()*-0.841095);
}

double NNfunction_ss_sLsR::synapse0x2c46b00() {
   return (neuron0x2c36bb0()*-0.49876);
}

double NNfunction_ss_sLsR::synapse0x2c46b40() {
   return (neuron0x2c36ef0()*0.925865);
}

double NNfunction_ss_sLsR::synapse0x2c46b80() {
   return (neuron0x2c37230()*-0.00400089);
}

double NNfunction_ss_sLsR::synapse0x2c46bc0() {
   return (neuron0x2c37570()*-0.0457273);
}

double NNfunction_ss_sLsR::synapse0x2c46650() {
   return (neuron0x2c378b0()*-0.945718);
}

double NNfunction_ss_sLsR::synapse0x2c46690() {
   return (neuron0x2c37e10()*0.164033);
}

double NNfunction_ss_sLsR::synapse0x2c46d10() {
   return (neuron0x2c38030()*-0.646867);
}

double NNfunction_ss_sLsR::synapse0x2c46d50() {
   return (neuron0x2c38370()*-0.339283);
}

double NNfunction_ss_sLsR::synapse0x2c46d90() {
   return (neuron0x2c386b0()*-1.32948);
}

double NNfunction_ss_sLsR::synapse0x2c46dd0() {
   return (neuron0x2c389f0()*-1.11485);
}

double NNfunction_ss_sLsR::synapse0x2c46e10() {
   return (neuron0x2c38d30()*-0.162418);
}

double NNfunction_ss_sLsR::synapse0x2c46e50() {
   return (neuron0x2c39070()*-0.13723);
}

double NNfunction_ss_sLsR::synapse0x2c471d0() {
   return (neuron0x2c344b0()*-1.27106);
}

double NNfunction_ss_sLsR::synapse0x2c47210() {
   return (neuron0x2c347f0()*0.075932);
}

double NNfunction_ss_sLsR::synapse0x2c47250() {
   return (neuron0x2c34b30()*-0.144374);
}

double NNfunction_ss_sLsR::synapse0x2c47290() {
   return (neuron0x2c34e70()*0.340236);
}

double NNfunction_ss_sLsR::synapse0x2c472d0() {
   return (neuron0x2c351b0()*-0.412852);
}

double NNfunction_ss_sLsR::synapse0x2c47310() {
   return (neuron0x2c354f0()*1.3457);
}

double NNfunction_ss_sLsR::synapse0x2c47350() {
   return (neuron0x2c35830()*0.162303);
}

double NNfunction_ss_sLsR::synapse0x2c47390() {
   return (neuron0x2c35b70()*0.498922);
}

double NNfunction_ss_sLsR::synapse0x2c473d0() {
   return (neuron0x2c35eb0()*-0.43816);
}

double NNfunction_ss_sLsR::synapse0x2c47410() {
   return (neuron0x2c361f0()*-1.62128);
}

double NNfunction_ss_sLsR::synapse0x2c47450() {
   return (neuron0x2c36530()*-0.162227);
}

double NNfunction_ss_sLsR::synapse0x2c47490() {
   return (neuron0x2c36870()*-0.404424);
}

double NNfunction_ss_sLsR::synapse0x2c474d0() {
   return (neuron0x2c36bb0()*0.402608);
}

double NNfunction_ss_sLsR::synapse0x2c47510() {
   return (neuron0x2c36ef0()*0.175164);
}

double NNfunction_ss_sLsR::synapse0x2c47550() {
   return (neuron0x2c37230()*0.192659);
}

double NNfunction_ss_sLsR::synapse0x2c47590() {
   return (neuron0x2c37570()*2.14074);
}

double NNfunction_ss_sLsR::synapse0x2c47020() {
   return (neuron0x2c378b0()*0.481639);
}

double NNfunction_ss_sLsR::synapse0x2c47060() {
   return (neuron0x2c37e10()*0.401988);
}

double NNfunction_ss_sLsR::synapse0x2c476e0() {
   return (neuron0x2c38030()*1.48104);
}

double NNfunction_ss_sLsR::synapse0x2c47720() {
   return (neuron0x2c38370()*0.646456);
}

double NNfunction_ss_sLsR::synapse0x2c47760() {
   return (neuron0x2c386b0()*0.211708);
}

double NNfunction_ss_sLsR::synapse0x2c477a0() {
   return (neuron0x2c389f0()*-1.05208);
}

double NNfunction_ss_sLsR::synapse0x2c477e0() {
   return (neuron0x2c38d30()*0.380374);
}

double NNfunction_ss_sLsR::synapse0x2c47820() {
   return (neuron0x2c39070()*0.854891);
}

double NNfunction_ss_sLsR::synapse0x2c47ba0() {
   return (neuron0x2c344b0()*1.2488);
}

double NNfunction_ss_sLsR::synapse0x2c47be0() {
   return (neuron0x2c347f0()*-1.46836);
}

double NNfunction_ss_sLsR::synapse0x2c47c20() {
   return (neuron0x2c34b30()*0.448207);
}

double NNfunction_ss_sLsR::synapse0x2c47c60() {
   return (neuron0x2c34e70()*-0.477539);
}

double NNfunction_ss_sLsR::synapse0x2c47ca0() {
   return (neuron0x2c351b0()*0.618057);
}

double NNfunction_ss_sLsR::synapse0x2c47ce0() {
   return (neuron0x2c354f0()*0.153366);
}

double NNfunction_ss_sLsR::synapse0x2c47d20() {
   return (neuron0x2c35830()*0.858119);
}

double NNfunction_ss_sLsR::synapse0x2c47d60() {
   return (neuron0x2c35b70()*-0.179728);
}

double NNfunction_ss_sLsR::synapse0x2c47da0() {
   return (neuron0x2c35eb0()*-0.455292);
}

double NNfunction_ss_sLsR::synapse0x2c3ff60() {
   return (neuron0x2c361f0()*-1.45269);
}

double NNfunction_ss_sLsR::synapse0x2c3ffa0() {
   return (neuron0x2c36530()*-0.329021);
}

double NNfunction_ss_sLsR::synapse0x2c3ffe0() {
   return (neuron0x2c36870()*-0.181791);
}

double NNfunction_ss_sLsR::synapse0x2c40020() {
   return (neuron0x2c36bb0()*-0.355162);
}

double NNfunction_ss_sLsR::synapse0x2c40060() {
   return (neuron0x2c36ef0()*0.16162);
}

double NNfunction_ss_sLsR::synapse0x2c400a0() {
   return (neuron0x2c37230()*0.0728677);
}

double NNfunction_ss_sLsR::synapse0x2c400e0() {
   return (neuron0x2c37570()*0.185372);
}

double NNfunction_ss_sLsR::synapse0x2c479f0() {
   return (neuron0x2c378b0()*-0.773012);
}

double NNfunction_ss_sLsR::synapse0x2c47a30() {
   return (neuron0x2c37e10()*-0.0862026);
}

double NNfunction_ss_sLsR::synapse0x2c40230() {
   return (neuron0x2c38030()*-0.128461);
}

double NNfunction_ss_sLsR::synapse0x2c40270() {
   return (neuron0x2c38370()*-0.191695);
}

double NNfunction_ss_sLsR::synapse0x2c402b0() {
   return (neuron0x2c386b0()*-0.132069);
}

double NNfunction_ss_sLsR::synapse0x2c402f0() {
   return (neuron0x2c389f0()*-0.640462);
}

double NNfunction_ss_sLsR::synapse0x2c40330() {
   return (neuron0x2c38d30()*0.735761);
}

double NNfunction_ss_sLsR::synapse0x2c40370() {
   return (neuron0x2c39070()*-0.128448);
}

double NNfunction_ss_sLsR::synapse0x2c406f0() {
   return (neuron0x2c344b0()*0.0126533);
}

double NNfunction_ss_sLsR::synapse0x2c40730() {
   return (neuron0x2c347f0()*0.0481922);
}

double NNfunction_ss_sLsR::synapse0x2c40770() {
   return (neuron0x2c34b30()*0.122705);
}

double NNfunction_ss_sLsR::synapse0x2c407b0() {
   return (neuron0x2c34e70()*-8.9687);
}

double NNfunction_ss_sLsR::synapse0x2c407f0() {
   return (neuron0x2c351b0()*0.021367);
}

double NNfunction_ss_sLsR::synapse0x2c40830() {
   return (neuron0x2c354f0()*0.026368);
}

double NNfunction_ss_sLsR::synapse0x2c40870() {
   return (neuron0x2c35830()*-0.0286492);
}

double NNfunction_ss_sLsR::synapse0x2c408b0() {
   return (neuron0x2c35b70()*-0.0278332);
}

double NNfunction_ss_sLsR::synapse0x2c408f0() {
   return (neuron0x2c35eb0()*0.01607);
}

double NNfunction_ss_sLsR::synapse0x2c40930() {
   return (neuron0x2c361f0()*-0.0131897);
}

double NNfunction_ss_sLsR::synapse0x2c40970() {
   return (neuron0x2c36530()*0.00753846);
}

double NNfunction_ss_sLsR::synapse0x2c409b0() {
   return (neuron0x2c36870()*-0.0489541);
}

double NNfunction_ss_sLsR::synapse0x2c409f0() {
   return (neuron0x2c36bb0()*0.202296);
}

double NNfunction_ss_sLsR::synapse0x2c40a30() {
   return (neuron0x2c36ef0()*-0.00125527);
}

double NNfunction_ss_sLsR::synapse0x2c40a70() {
   return (neuron0x2c37230()*-0.00906481);
}

double NNfunction_ss_sLsR::synapse0x2c40ab0() {
   return (neuron0x2c37570()*0.06604);
}

double NNfunction_ss_sLsR::synapse0x2c40540() {
   return (neuron0x2c378b0()*-0.0017212);
}

double NNfunction_ss_sLsR::synapse0x2c40580() {
   return (neuron0x2c37e10()*-0.0179068);
}

double NNfunction_ss_sLsR::synapse0x2c40c00() {
   return (neuron0x2c38030()*0.018021);
}

double NNfunction_ss_sLsR::synapse0x2c40c40() {
   return (neuron0x2c38370()*-0.0297258);
}

double NNfunction_ss_sLsR::synapse0x2c40c80() {
   return (neuron0x2c386b0()*-0.0159254);
}

double NNfunction_ss_sLsR::synapse0x2c40cc0() {
   return (neuron0x2c389f0()*-0.00702749);
}

double NNfunction_ss_sLsR::synapse0x2c40d00() {
   return (neuron0x2c38d30()*0.000349763);
}

double NNfunction_ss_sLsR::synapse0x2c40d40() {
   return (neuron0x2c39070()*-0.013525);
}

double NNfunction_ss_sLsR::synapse0x2c40f10() {
   return (neuron0x2c344b0()*0.446594);
}

double NNfunction_ss_sLsR::synapse0x2c49fa0() {
   return (neuron0x2c347f0()*0.465616);
}

double NNfunction_ss_sLsR::synapse0x2c49fe0() {
   return (neuron0x2c34b30()*0.0033959);
}

double NNfunction_ss_sLsR::synapse0x2c4a020() {
   return (neuron0x2c34e70()*1.4336);
}

double NNfunction_ss_sLsR::synapse0x2c4a060() {
   return (neuron0x2c351b0()*-0.113482);
}

double NNfunction_ss_sLsR::synapse0x2c4a0a0() {
   return (neuron0x2c354f0()*-0.0858527);
}

double NNfunction_ss_sLsR::synapse0x2c4a0e0() {
   return (neuron0x2c35830()*-0.282298);
}

double NNfunction_ss_sLsR::synapse0x2c4a120() {
   return (neuron0x2c35b70()*0.178266);
}

double NNfunction_ss_sLsR::synapse0x2c4a160() {
   return (neuron0x2c35eb0()*-0.0272603);
}

double NNfunction_ss_sLsR::synapse0x2c4a1a0() {
   return (neuron0x2c361f0()*0.0834032);
}

double NNfunction_ss_sLsR::synapse0x2c4a1e0() {
   return (neuron0x2c36530()*0.314227);
}

double NNfunction_ss_sLsR::synapse0x2c4a220() {
   return (neuron0x2c36870()*-0.300242);
}

double NNfunction_ss_sLsR::synapse0x2c4a260() {
   return (neuron0x2c36bb0()*-0.176478);
}

double NNfunction_ss_sLsR::synapse0x2c4a2a0() {
   return (neuron0x2c36ef0()*0.185246);
}

double NNfunction_ss_sLsR::synapse0x2c4a2e0() {
   return (neuron0x2c37230()*-1.02844);
}

double NNfunction_ss_sLsR::synapse0x2c4a320() {
   return (neuron0x2c37570()*0.131842);
}

double NNfunction_ss_sLsR::synapse0x2c49df0() {
   return (neuron0x2c378b0()*-0.65065);
}

double NNfunction_ss_sLsR::synapse0x2c49e30() {
   return (neuron0x2c37e10()*-0.201605);
}

double NNfunction_ss_sLsR::synapse0x2c4a470() {
   return (neuron0x2c38030()*1.01758);
}

double NNfunction_ss_sLsR::synapse0x2c4a4b0() {
   return (neuron0x2c38370()*0.801944);
}

double NNfunction_ss_sLsR::synapse0x2c4a4f0() {
   return (neuron0x2c386b0()*-0.365624);
}

double NNfunction_ss_sLsR::synapse0x2c4a530() {
   return (neuron0x2c389f0()*-0.380412);
}

double NNfunction_ss_sLsR::synapse0x2c4a570() {
   return (neuron0x2c38d30()*-0.276388);
}

double NNfunction_ss_sLsR::synapse0x2c4a5b0() {
   return (neuron0x2c39070()*0.251091);
}

double NNfunction_ss_sLsR::synapse0x2c4a930() {
   return (neuron0x2c344b0()*0.55404);
}

double NNfunction_ss_sLsR::synapse0x2c4a970() {
   return (neuron0x2c347f0()*0.339308);
}

double NNfunction_ss_sLsR::synapse0x2c4a9b0() {
   return (neuron0x2c34b30()*-0.202377);
}

double NNfunction_ss_sLsR::synapse0x2c4a9f0() {
   return (neuron0x2c34e70()*0.289566);
}

double NNfunction_ss_sLsR::synapse0x2c4aa30() {
   return (neuron0x2c351b0()*-0.31831);
}

double NNfunction_ss_sLsR::synapse0x2c4aa70() {
   return (neuron0x2c354f0()*-1.07257);
}

double NNfunction_ss_sLsR::synapse0x2c4aab0() {
   return (neuron0x2c35830()*-0.0181053);
}

double NNfunction_ss_sLsR::synapse0x2c4aaf0() {
   return (neuron0x2c35b70()*0.204846);
}

double NNfunction_ss_sLsR::synapse0x2c4ab30() {
   return (neuron0x2c35eb0()*-0.00768161);
}

double NNfunction_ss_sLsR::synapse0x2c4ab70() {
   return (neuron0x2c361f0()*0.812643);
}

double NNfunction_ss_sLsR::synapse0x2c4abb0() {
   return (neuron0x2c36530()*1.29309);
}

double NNfunction_ss_sLsR::synapse0x2c4abf0() {
   return (neuron0x2c36870()*-0.816487);
}

double NNfunction_ss_sLsR::synapse0x2c4ac30() {
   return (neuron0x2c36bb0()*-0.493459);
}

double NNfunction_ss_sLsR::synapse0x2c4ac70() {
   return (neuron0x2c36ef0()*0.215994);
}

double NNfunction_ss_sLsR::synapse0x2c4acb0() {
   return (neuron0x2c37230()*0.0877232);
}

double NNfunction_ss_sLsR::synapse0x2c4acf0() {
   return (neuron0x2c37570()*0.240749);
}

double NNfunction_ss_sLsR::synapse0x2c4a780() {
   return (neuron0x2c378b0()*0.161437);
}

double NNfunction_ss_sLsR::synapse0x2c4a7c0() {
   return (neuron0x2c37e10()*0.409109);
}

double NNfunction_ss_sLsR::synapse0x2c4ae40() {
   return (neuron0x2c38030()*0.358696);
}

double NNfunction_ss_sLsR::synapse0x2c4ae80() {
   return (neuron0x2c38370()*0.0654086);
}

double NNfunction_ss_sLsR::synapse0x2c4aec0() {
   return (neuron0x2c386b0()*-0.264343);
}

double NNfunction_ss_sLsR::synapse0x2c4af00() {
   return (neuron0x2c389f0()*-0.996174);
}

double NNfunction_ss_sLsR::synapse0x2c4af40() {
   return (neuron0x2c38d30()*-0.367495);
}

double NNfunction_ss_sLsR::synapse0x2c4af80() {
   return (neuron0x2c39070()*-0.0331541);
}

double NNfunction_ss_sLsR::synapse0x2c4b300() {
   return (neuron0x2c344b0()*-0.0919375);
}

double NNfunction_ss_sLsR::synapse0x2c4b340() {
   return (neuron0x2c347f0()*0.371106);
}

double NNfunction_ss_sLsR::synapse0x2c4b380() {
   return (neuron0x2c34b30()*0.0540691);
}

double NNfunction_ss_sLsR::synapse0x2c4b3c0() {
   return (neuron0x2c34e70()*-1.2899);
}

double NNfunction_ss_sLsR::synapse0x2c4b400() {
   return (neuron0x2c351b0()*0.564187);
}

double NNfunction_ss_sLsR::synapse0x2c4b440() {
   return (neuron0x2c354f0()*-0.535424);
}

double NNfunction_ss_sLsR::synapse0x2c4b480() {
   return (neuron0x2c35830()*0.291629);
}

double NNfunction_ss_sLsR::synapse0x2c4b4c0() {
   return (neuron0x2c35b70()*0.113949);
}

double NNfunction_ss_sLsR::synapse0x2c4b500() {
   return (neuron0x2c35eb0()*0.244004);
}

double NNfunction_ss_sLsR::synapse0x2c4b540() {
   return (neuron0x2c361f0()*0.797269);
}

double NNfunction_ss_sLsR::synapse0x2c4b580() {
   return (neuron0x2c36530()*0.908455);
}

double NNfunction_ss_sLsR::synapse0x2c4b5c0() {
   return (neuron0x2c36870()*-0.118736);
}

double NNfunction_ss_sLsR::synapse0x2c4b600() {
   return (neuron0x2c36bb0()*-1.69749);
}

double NNfunction_ss_sLsR::synapse0x2c4b640() {
   return (neuron0x2c36ef0()*-0.1569);
}

double NNfunction_ss_sLsR::synapse0x2c4b680() {
   return (neuron0x2c37230()*0.193432);
}

double NNfunction_ss_sLsR::synapse0x2c4b6c0() {
   return (neuron0x2c37570()*0.136624);
}

double NNfunction_ss_sLsR::synapse0x2c4b150() {
   return (neuron0x2c378b0()*-0.54494);
}

double NNfunction_ss_sLsR::synapse0x2c4b190() {
   return (neuron0x2c37e10()*-0.560831);
}

double NNfunction_ss_sLsR::synapse0x2c4b810() {
   return (neuron0x2c38030()*-1.15229);
}

double NNfunction_ss_sLsR::synapse0x2c4b850() {
   return (neuron0x2c38370()*-0.710813);
}

double NNfunction_ss_sLsR::synapse0x2c4b890() {
   return (neuron0x2c386b0()*-0.0526118);
}

double NNfunction_ss_sLsR::synapse0x2c4b8d0() {
   return (neuron0x2c389f0()*-0.407361);
}

double NNfunction_ss_sLsR::synapse0x2c4b910() {
   return (neuron0x2c38d30()*-0.120582);
}

double NNfunction_ss_sLsR::synapse0x2c4b950() {
   return (neuron0x2c39070()*-0.227909);
}

double NNfunction_ss_sLsR::synapse0x2c4bcd0() {
   return (neuron0x2c344b0()*0.00818652);
}

double NNfunction_ss_sLsR::synapse0x2c4bd10() {
   return (neuron0x2c347f0()*0.0235669);
}

double NNfunction_ss_sLsR::synapse0x2c4bd50() {
   return (neuron0x2c34b30()*0.00687197);
}

double NNfunction_ss_sLsR::synapse0x2c4bd90() {
   return (neuron0x2c34e70()*-2.73872);
}

double NNfunction_ss_sLsR::synapse0x2c4bdd0() {
   return (neuron0x2c351b0()*-0.00611154);
}

double NNfunction_ss_sLsR::synapse0x2c4be10() {
   return (neuron0x2c354f0()*0.00252688);
}

double NNfunction_ss_sLsR::synapse0x2c4be50() {
   return (neuron0x2c35830()*-0.0153161);
}

double NNfunction_ss_sLsR::synapse0x2c4be90() {
   return (neuron0x2c35b70()*-0.0145495);
}

double NNfunction_ss_sLsR::synapse0x2c4bed0() {
   return (neuron0x2c35eb0()*0.0108479);
}

double NNfunction_ss_sLsR::synapse0x2c4bf10() {
   return (neuron0x2c361f0()*-0.00520013);
}

double NNfunction_ss_sLsR::synapse0x2c4bf50() {
   return (neuron0x2c36530()*0.00375518);
}

double NNfunction_ss_sLsR::synapse0x2c4bf90() {
   return (neuron0x2c36870()*-0.00100689);
}

double NNfunction_ss_sLsR::synapse0x2c4bfd0() {
   return (neuron0x2c36bb0()*0.152);
}

double NNfunction_ss_sLsR::synapse0x2c4c010() {
   return (neuron0x2c36ef0()*0.00268779);
}

double NNfunction_ss_sLsR::synapse0x2c4c050() {
   return (neuron0x2c37230()*0.0144063);
}

double NNfunction_ss_sLsR::synapse0x2c4c090() {
   return (neuron0x2c37570()*0.00932562);
}

double NNfunction_ss_sLsR::synapse0x2c4bb20() {
   return (neuron0x2c378b0()*0.00354274);
}

double NNfunction_ss_sLsR::synapse0x2c4bb60() {
   return (neuron0x2c37e10()*-0.00657851);
}

double NNfunction_ss_sLsR::synapse0x2c4c1e0() {
   return (neuron0x2c38030()*0.0403367);
}

double NNfunction_ss_sLsR::synapse0x2c4c220() {
   return (neuron0x2c38370()*0.0120933);
}

double NNfunction_ss_sLsR::synapse0x2c4c260() {
   return (neuron0x2c386b0()*-0.00200123);
}

double NNfunction_ss_sLsR::synapse0x2c4c2a0() {
   return (neuron0x2c389f0()*0.00785616);
}

double NNfunction_ss_sLsR::synapse0x2c4c2e0() {
   return (neuron0x2c38d30()*0.0124568);
}

double NNfunction_ss_sLsR::synapse0x2c4c320() {
   return (neuron0x2c39070()*0.00779101);
}

double NNfunction_ss_sLsR::synapse0x2c4c6a0() {
   return (neuron0x2c344b0()*-0.130857);
}

double NNfunction_ss_sLsR::synapse0x2c4c6e0() {
   return (neuron0x2c347f0()*-0.401961);
}

double NNfunction_ss_sLsR::synapse0x2c4c720() {
   return (neuron0x2c34b30()*-0.028867);
}

double NNfunction_ss_sLsR::synapse0x2c4c760() {
   return (neuron0x2c34e70()*0.0363528);
}

double NNfunction_ss_sLsR::synapse0x2c4c7a0() {
   return (neuron0x2c351b0()*-0.391321);
}

double NNfunction_ss_sLsR::synapse0x2c4c7e0() {
   return (neuron0x2c354f0()*1.33001);
}

double NNfunction_ss_sLsR::synapse0x2c4c820() {
   return (neuron0x2c35830()*-0.083677);
}

double NNfunction_ss_sLsR::synapse0x2c4c860() {
   return (neuron0x2c35b70()*0.603567);
}

double NNfunction_ss_sLsR::synapse0x2c4c8a0() {
   return (neuron0x2c35eb0()*-0.0395377);
}

double NNfunction_ss_sLsR::synapse0x2c4c8e0() {
   return (neuron0x2c361f0()*-0.478242);
}

double NNfunction_ss_sLsR::synapse0x2c4c920() {
   return (neuron0x2c36530()*-0.801126);
}

double NNfunction_ss_sLsR::synapse0x2c4c960() {
   return (neuron0x2c36870()*0.252855);
}

double NNfunction_ss_sLsR::synapse0x2c4c9a0() {
   return (neuron0x2c36bb0()*-1.16143);
}

double NNfunction_ss_sLsR::synapse0x2c4c9e0() {
   return (neuron0x2c36ef0()*0.156921);
}

double NNfunction_ss_sLsR::synapse0x2c4ca20() {
   return (neuron0x2c37230()*-1.36209);
}

double NNfunction_ss_sLsR::synapse0x2c4ca60() {
   return (neuron0x2c37570()*1.54985);
}

double NNfunction_ss_sLsR::synapse0x2c4c4f0() {
   return (neuron0x2c378b0()*1.84563);
}

double NNfunction_ss_sLsR::synapse0x2c4c530() {
   return (neuron0x2c37e10()*-1.09348);
}

double NNfunction_ss_sLsR::synapse0x2c4cbb0() {
   return (neuron0x2c38030()*0.610138);
}

double NNfunction_ss_sLsR::synapse0x2c4cbf0() {
   return (neuron0x2c38370()*0.163199);
}

double NNfunction_ss_sLsR::synapse0x2c4cc30() {
   return (neuron0x2c386b0()*0.947695);
}

double NNfunction_ss_sLsR::synapse0x2c4cc70() {
   return (neuron0x2c389f0()*-0.000534732);
}

double NNfunction_ss_sLsR::synapse0x2c4ccb0() {
   return (neuron0x2c38d30()*1.02329);
}

double NNfunction_ss_sLsR::synapse0x2c4ccf0() {
   return (neuron0x2c39070()*0.247992);
}

double NNfunction_ss_sLsR::synapse0x2c4d070() {
   return (neuron0x2c344b0()*-0.339021);
}

double NNfunction_ss_sLsR::synapse0x2c4d0b0() {
   return (neuron0x2c347f0()*0.260842);
}

double NNfunction_ss_sLsR::synapse0x2c4d0f0() {
   return (neuron0x2c34b30()*-0.381019);
}

double NNfunction_ss_sLsR::synapse0x2c4d130() {
   return (neuron0x2c34e70()*0.638462);
}

double NNfunction_ss_sLsR::synapse0x2c4d170() {
   return (neuron0x2c351b0()*-0.411844);
}

double NNfunction_ss_sLsR::synapse0x2c4d1b0() {
   return (neuron0x2c354f0()*-0.28525);
}

double NNfunction_ss_sLsR::synapse0x2c4d1f0() {
   return (neuron0x2c35830()*-0.900311);
}

double NNfunction_ss_sLsR::synapse0x2c4d230() {
   return (neuron0x2c35b70()*-1.16459);
}

double NNfunction_ss_sLsR::synapse0x2c4d270() {
   return (neuron0x2c35eb0()*-0.804764);
}

double NNfunction_ss_sLsR::synapse0x2c4d2b0() {
   return (neuron0x2c361f0()*-0.840986);
}

double NNfunction_ss_sLsR::synapse0x2c4d2f0() {
   return (neuron0x2c36530()*-0.0566739);
}

double NNfunction_ss_sLsR::synapse0x2c4d330() {
   return (neuron0x2c36870()*-0.964233);
}

double NNfunction_ss_sLsR::synapse0x2c4d370() {
   return (neuron0x2c36bb0()*0.387929);
}

double NNfunction_ss_sLsR::synapse0x2c4d3b0() {
   return (neuron0x2c36ef0()*-0.277106);
}

double NNfunction_ss_sLsR::synapse0x2c4d3f0() {
   return (neuron0x2c37230()*0.681699);
}

double NNfunction_ss_sLsR::synapse0x2c4d430() {
   return (neuron0x2c37570()*0.396259);
}

double NNfunction_ss_sLsR::synapse0x2c4cec0() {
   return (neuron0x2c378b0()*0.287286);
}

double NNfunction_ss_sLsR::synapse0x2c4cf00() {
   return (neuron0x2c37e10()*0.483629);
}

double NNfunction_ss_sLsR::synapse0x2c4d580() {
   return (neuron0x2c38030()*-0.0231086);
}

double NNfunction_ss_sLsR::synapse0x2c4d5c0() {
   return (neuron0x2c38370()*-0.698949);
}

double NNfunction_ss_sLsR::synapse0x2c4d600() {
   return (neuron0x2c386b0()*0.868568);
}

double NNfunction_ss_sLsR::synapse0x2c4d640() {
   return (neuron0x2c389f0()*0.536426);
}

double NNfunction_ss_sLsR::synapse0x2c4d680() {
   return (neuron0x2c38d30()*0.111019);
}

double NNfunction_ss_sLsR::synapse0x2c4d6c0() {
   return (neuron0x2c39070()*-0.168752);
}

double NNfunction_ss_sLsR::synapse0x2c4da40() {
   return (neuron0x2c344b0()*-0.13156);
}

double NNfunction_ss_sLsR::synapse0x2c4da80() {
   return (neuron0x2c347f0()*0.110872);
}

double NNfunction_ss_sLsR::synapse0x2c4dac0() {
   return (neuron0x2c34b30()*-0.369365);
}

double NNfunction_ss_sLsR::synapse0x2c4db00() {
   return (neuron0x2c34e70()*3.69874);
}

double NNfunction_ss_sLsR::synapse0x2c4db40() {
   return (neuron0x2c351b0()*-0.151653);
}

double NNfunction_ss_sLsR::synapse0x2c4db80() {
   return (neuron0x2c354f0()*-0.0573341);
}

double NNfunction_ss_sLsR::synapse0x2c4dbc0() {
   return (neuron0x2c35830()*-0.0558865);
}

double NNfunction_ss_sLsR::synapse0x2c4dc00() {
   return (neuron0x2c35b70()*-0.0292854);
}

double NNfunction_ss_sLsR::synapse0x2c4dc40() {
   return (neuron0x2c35eb0()*-0.0332508);
}

double NNfunction_ss_sLsR::synapse0x2c4dc80() {
   return (neuron0x2c361f0()*0.244814);
}

double NNfunction_ss_sLsR::synapse0x2c4dcc0() {
   return (neuron0x2c36530()*-0.149395);
}

double NNfunction_ss_sLsR::synapse0x2c4dd00() {
   return (neuron0x2c36870()*-0.370257);
}

double NNfunction_ss_sLsR::synapse0x2c4dd40() {
   return (neuron0x2c36bb0()*-0.896132);
}

double NNfunction_ss_sLsR::synapse0x2c4dd80() {
   return (neuron0x2c36ef0()*-0.0235215);
}

double NNfunction_ss_sLsR::synapse0x2c4ddc0() {
   return (neuron0x2c37230()*-0.302124);
}

double NNfunction_ss_sLsR::synapse0x2c4de00() {
   return (neuron0x2c37570()*0.596619);
}

double NNfunction_ss_sLsR::synapse0x2c4d890() {
   return (neuron0x2c378b0()*0.176724);
}

double NNfunction_ss_sLsR::synapse0x2c4d8d0() {
   return (neuron0x2c37e10()*-0.0888838);
}

double NNfunction_ss_sLsR::synapse0x2c4df50() {
   return (neuron0x2c38030()*-1.12236);
}

double NNfunction_ss_sLsR::synapse0x2c4df90() {
   return (neuron0x2c38370()*-0.295205);
}

double NNfunction_ss_sLsR::synapse0x2c4dfd0() {
   return (neuron0x2c386b0()*-0.034214);
}

double NNfunction_ss_sLsR::synapse0x2c4e010() {
   return (neuron0x2c389f0()*0.0365779);
}

double NNfunction_ss_sLsR::synapse0x2c4e050() {
   return (neuron0x2c38d30()*0.0793097);
}

double NNfunction_ss_sLsR::synapse0x2c4e090() {
   return (neuron0x2c39070()*-0.0515886);
}

double NNfunction_ss_sLsR::synapse0x2c4e410() {
   return (neuron0x2c344b0()*-0.647809);
}

double NNfunction_ss_sLsR::synapse0x2c4e450() {
   return (neuron0x2c347f0()*-0.0569518);
}

double NNfunction_ss_sLsR::synapse0x2c4e490() {
   return (neuron0x2c34b30()*-0.136033);
}

double NNfunction_ss_sLsR::synapse0x2c4e4d0() {
   return (neuron0x2c34e70()*0.293038);
}

double NNfunction_ss_sLsR::synapse0x2c4e510() {
   return (neuron0x2c351b0()*-2.42152);
}

double NNfunction_ss_sLsR::synapse0x2c4e550() {
   return (neuron0x2c354f0()*0.183957);
}

double NNfunction_ss_sLsR::synapse0x2c4e590() {
   return (neuron0x2c35830()*0.138156);
}

double NNfunction_ss_sLsR::synapse0x2c4e5d0() {
   return (neuron0x2c35b70()*0.118266);
}

double NNfunction_ss_sLsR::synapse0x2c4e610() {
   return (neuron0x2c35eb0()*0.138279);
}

double NNfunction_ss_sLsR::synapse0x2c4e650() {
   return (neuron0x2c361f0()*0.328883);
}

double NNfunction_ss_sLsR::synapse0x2c4e690() {
   return (neuron0x2c36530()*-0.587416);
}

double NNfunction_ss_sLsR::synapse0x2c4e6d0() {
   return (neuron0x2c36870()*-0.582654);
}

double NNfunction_ss_sLsR::synapse0x2c4e710() {
   return (neuron0x2c36bb0()*1.7963);
}

double NNfunction_ss_sLsR::synapse0x2c4e750() {
   return (neuron0x2c36ef0()*0.917127);
}

double NNfunction_ss_sLsR::synapse0x2c4e790() {
   return (neuron0x2c37230()*-0.213516);
}

double NNfunction_ss_sLsR::synapse0x2c4e7d0() {
   return (neuron0x2c37570()*-0.694315);
}

double NNfunction_ss_sLsR::synapse0x2c4e260() {
   return (neuron0x2c378b0()*0.252161);
}

double NNfunction_ss_sLsR::synapse0x2c4e2a0() {
   return (neuron0x2c37e10()*0.267816);
}

double NNfunction_ss_sLsR::synapse0x2c4e920() {
   return (neuron0x2c38030()*-0.555712);
}

double NNfunction_ss_sLsR::synapse0x2c4e960() {
   return (neuron0x2c38370()*0.409357);
}

double NNfunction_ss_sLsR::synapse0x2c4e9a0() {
   return (neuron0x2c386b0()*-0.414201);
}

double NNfunction_ss_sLsR::synapse0x2c4e9e0() {
   return (neuron0x2c389f0()*-0.64519);
}

double NNfunction_ss_sLsR::synapse0x2c4ea20() {
   return (neuron0x2c38d30()*-0.153635);
}

double NNfunction_ss_sLsR::synapse0x2c4ea60() {
   return (neuron0x2c39070()*0.222902);
}

double NNfunction_ss_sLsR::synapse0x2c4ede0() {
   return (neuron0x2c344b0()*1.19034);
}

double NNfunction_ss_sLsR::synapse0x2c433b0() {
   return (neuron0x2c347f0()*0.196821);
}

double NNfunction_ss_sLsR::synapse0x2c433f0() {
   return (neuron0x2c34b30()*-0.356552);
}

double NNfunction_ss_sLsR::synapse0x2c43430() {
   return (neuron0x2c34e70()*1.04689);
}

double NNfunction_ss_sLsR::synapse0x2c43680() {
   return (neuron0x2c351b0()*1.83679);
}

double NNfunction_ss_sLsR::synapse0x2c436c0() {
   return (neuron0x2c354f0()*-0.856627);
}

double NNfunction_ss_sLsR::synapse0x2c43700() {
   return (neuron0x2c35830()*0.820041);
}

double NNfunction_ss_sLsR::synapse0x2c43950() {
   return (neuron0x2c35b70()*1.07987);
}

double NNfunction_ss_sLsR::synapse0x2c43990() {
   return (neuron0x2c35eb0()*0.77131);
}

double NNfunction_ss_sLsR::synapse0x2c43be0() {
   return (neuron0x2c361f0()*-0.440513);
}

double NNfunction_ss_sLsR::synapse0x2c43c20() {
   return (neuron0x2c36530()*-0.372782);
}

double NNfunction_ss_sLsR::synapse0x2c43c60() {
   return (neuron0x2c36870()*0.49247);
}

double NNfunction_ss_sLsR::synapse0x2c43eb0() {
   return (neuron0x2c36bb0()*0.177738);
}

double NNfunction_ss_sLsR::synapse0x2c43ef0() {
   return (neuron0x2c36ef0()*0.143939);
}

double NNfunction_ss_sLsR::synapse0x2c44140() {
   return (neuron0x2c37230()*1.24587);
}

double NNfunction_ss_sLsR::synapse0x2c44180() {
   return (neuron0x2c37570()*0.733358);
}

double NNfunction_ss_sLsR::synapse0x2c4ec30() {
   return (neuron0x2c378b0()*0.513338);
}

double NNfunction_ss_sLsR::synapse0x2c4ec70() {
   return (neuron0x2c37e10()*-0.384506);
}

double NNfunction_ss_sLsR::synapse0x2c442d0() {
   return (neuron0x2c38030()*-0.952199);
}

double NNfunction_ss_sLsR::synapse0x2c447e0() {
   return (neuron0x2c38370()*-0.598814);
}

double NNfunction_ss_sLsR::synapse0x2c44820() {
   return (neuron0x2c386b0()*-1.19681);
}

double NNfunction_ss_sLsR::synapse0x2c44860() {
   return (neuron0x2c389f0()*-0.373321);
}

double NNfunction_ss_sLsR::synapse0x2c44ab0() {
   return (neuron0x2c38d30()*0.721433);
}

double NNfunction_ss_sLsR::synapse0x2c44af0() {
   return (neuron0x2c39070()*-0.852846);
}

double NNfunction_ss_sLsR::synapse0x2c443a0() {
   return (neuron0x2c344b0()*0.0464757);
}

double NNfunction_ss_sLsR::synapse0x2c443e0() {
   return (neuron0x2c347f0()*0.180065);
}

double NNfunction_ss_sLsR::synapse0x2c44420() {
   return (neuron0x2c34b30()*-0.109278);
}

double NNfunction_ss_sLsR::synapse0x2c44460() {
   return (neuron0x2c34e70()*1.27442);
}

double NNfunction_ss_sLsR::synapse0x2c44de0() {
   return (neuron0x2c351b0()*0.0131623);
}

double NNfunction_ss_sLsR::synapse0x2c51130() {
   return (neuron0x2c354f0()*0.0349304);
}

double NNfunction_ss_sLsR::synapse0x2c51170() {
   return (neuron0x2c35830()*-0.0367243);
}

double NNfunction_ss_sLsR::synapse0x2c511b0() {
   return (neuron0x2c35b70()*-0.0855012);
}

double NNfunction_ss_sLsR::synapse0x2c511f0() {
   return (neuron0x2c35eb0()*-0.020599);
}

double NNfunction_ss_sLsR::synapse0x2c51230() {
   return (neuron0x2c361f0()*-0.0375563);
}

double NNfunction_ss_sLsR::synapse0x2c51270() {
   return (neuron0x2c36530()*-0.0447413);
}

double NNfunction_ss_sLsR::synapse0x2c512b0() {
   return (neuron0x2c36870()*-0.0794788);
}

double NNfunction_ss_sLsR::synapse0x2c512f0() {
   return (neuron0x2c36bb0()*-0.147647);
}

double NNfunction_ss_sLsR::synapse0x2c51330() {
   return (neuron0x2c36ef0()*-0.00302757);
}

double NNfunction_ss_sLsR::synapse0x2c51370() {
   return (neuron0x2c37230()*0.114695);
}

double NNfunction_ss_sLsR::synapse0x2c513b0() {
   return (neuron0x2c37570()*0.176411);
}

double NNfunction_ss_sLsR::synapse0x2c44cc0() {
   return (neuron0x2c378b0()*0.022124);
}

double NNfunction_ss_sLsR::synapse0x2c44d00() {
   return (neuron0x2c37e10()*-0.00359727);
}

double NNfunction_ss_sLsR::synapse0x2c51500() {
   return (neuron0x2c38030()*-0.00196674);
}

double NNfunction_ss_sLsR::synapse0x2c51540() {
   return (neuron0x2c38370()*-0.0257437);
}

double NNfunction_ss_sLsR::synapse0x2c51580() {
   return (neuron0x2c386b0()*0.0161087);
}

double NNfunction_ss_sLsR::synapse0x2c515c0() {
   return (neuron0x2c389f0()*0.022473);
}

double NNfunction_ss_sLsR::synapse0x2c51600() {
   return (neuron0x2c38d30()*-0.00798829);
}

double NNfunction_ss_sLsR::synapse0x2c51640() {
   return (neuron0x2c39070()*-0.0133782);
}

double NNfunction_ss_sLsR::synapse0x2c519c0() {
   return (neuron0x2c344b0()*0.0987183);
}

double NNfunction_ss_sLsR::synapse0x2c51a00() {
   return (neuron0x2c347f0()*-0.43464);
}

double NNfunction_ss_sLsR::synapse0x2c51a40() {
   return (neuron0x2c34b30()*-0.191113);
}

double NNfunction_ss_sLsR::synapse0x2c51a80() {
   return (neuron0x2c34e70()*2.64704);
}

double NNfunction_ss_sLsR::synapse0x2c51ac0() {
   return (neuron0x2c351b0()*0.143778);
}

double NNfunction_ss_sLsR::synapse0x2c51b00() {
   return (neuron0x2c354f0()*0.069231);
}

double NNfunction_ss_sLsR::synapse0x2c51b40() {
   return (neuron0x2c35830()*-0.15407);
}

double NNfunction_ss_sLsR::synapse0x2c51b80() {
   return (neuron0x2c35b70()*-0.113903);
}

double NNfunction_ss_sLsR::synapse0x2c51bc0() {
   return (neuron0x2c35eb0()*-0.0274023);
}

double NNfunction_ss_sLsR::synapse0x2c51c00() {
   return (neuron0x2c361f0()*0.0652046);
}

double NNfunction_ss_sLsR::synapse0x2c51c40() {
   return (neuron0x2c36530()*0.335384);
}

double NNfunction_ss_sLsR::synapse0x2c51c80() {
   return (neuron0x2c36870()*0.243185);
}

double NNfunction_ss_sLsR::synapse0x2c51cc0() {
   return (neuron0x2c36bb0()*-0.261363);
}

double NNfunction_ss_sLsR::synapse0x2c51d00() {
   return (neuron0x2c36ef0()*-0.610457);
}

double NNfunction_ss_sLsR::synapse0x2c51d40() {
   return (neuron0x2c37230()*0.290417);
}

double NNfunction_ss_sLsR::synapse0x2c51d80() {
   return (neuron0x2c37570()*0.243637);
}

double NNfunction_ss_sLsR::synapse0x2c51810() {
   return (neuron0x2c378b0()*-0.0270053);
}

double NNfunction_ss_sLsR::synapse0x2c51850() {
   return (neuron0x2c37e10()*-0.0927062);
}

double NNfunction_ss_sLsR::synapse0x2c51ed0() {
   return (neuron0x2c38030()*-0.434702);
}

double NNfunction_ss_sLsR::synapse0x2c51f10() {
   return (neuron0x2c38370()*-0.13481);
}

double NNfunction_ss_sLsR::synapse0x2c51f50() {
   return (neuron0x2c386b0()*-0.0663145);
}

double NNfunction_ss_sLsR::synapse0x2c51f90() {
   return (neuron0x2c389f0()*0.300175);
}

double NNfunction_ss_sLsR::synapse0x2c51fd0() {
   return (neuron0x2c38d30()*-0.0553006);
}

double NNfunction_ss_sLsR::synapse0x2c52010() {
   return (neuron0x2c39070()*0.560786);
}

double NNfunction_ss_sLsR::synapse0x2c52390() {
   return (neuron0x2c344b0()*0.82973);
}

double NNfunction_ss_sLsR::synapse0x2c523d0() {
   return (neuron0x2c347f0()*0.968587);
}

double NNfunction_ss_sLsR::synapse0x2c52410() {
   return (neuron0x2c34b30()*1.95215);
}

double NNfunction_ss_sLsR::synapse0x2c52450() {
   return (neuron0x2c34e70()*-0.511714);
}

double NNfunction_ss_sLsR::synapse0x2c52490() {
   return (neuron0x2c351b0()*-0.289597);
}

double NNfunction_ss_sLsR::synapse0x2c524d0() {
   return (neuron0x2c354f0()*0.511475);
}

double NNfunction_ss_sLsR::synapse0x2c52510() {
   return (neuron0x2c35830()*-0.491857);
}

double NNfunction_ss_sLsR::synapse0x2c52550() {
   return (neuron0x2c35b70()*0.144992);
}

double NNfunction_ss_sLsR::synapse0x2c52590() {
   return (neuron0x2c35eb0()*0.426249);
}

double NNfunction_ss_sLsR::synapse0x2c525d0() {
   return (neuron0x2c361f0()*0.147539);
}

double NNfunction_ss_sLsR::synapse0x2c52610() {
   return (neuron0x2c36530()*-0.15026);
}

double NNfunction_ss_sLsR::synapse0x2c52650() {
   return (neuron0x2c36870()*0.167313);
}

double NNfunction_ss_sLsR::synapse0x2c52690() {
   return (neuron0x2c36bb0()*0.00891206);
}

double NNfunction_ss_sLsR::synapse0x2c526d0() {
   return (neuron0x2c36ef0()*-1.28869);
}

double NNfunction_ss_sLsR::synapse0x2c52710() {
   return (neuron0x2c37230()*0.621319);
}

double NNfunction_ss_sLsR::synapse0x2c52750() {
   return (neuron0x2c37570()*-0.515863);
}

double NNfunction_ss_sLsR::synapse0x2c521e0() {
   return (neuron0x2c378b0()*0.00629789);
}

double NNfunction_ss_sLsR::synapse0x2c52220() {
   return (neuron0x2c37e10()*-0.00210656);
}

double NNfunction_ss_sLsR::synapse0x2c528a0() {
   return (neuron0x2c38030()*-1.80638);
}

double NNfunction_ss_sLsR::synapse0x2c528e0() {
   return (neuron0x2c38370()*1.10072);
}

double NNfunction_ss_sLsR::synapse0x2c52920() {
   return (neuron0x2c386b0()*0.0587823);
}

double NNfunction_ss_sLsR::synapse0x2c52960() {
   return (neuron0x2c389f0()*0.373546);
}

double NNfunction_ss_sLsR::synapse0x2c529a0() {
   return (neuron0x2c38d30()*0.760894);
}

double NNfunction_ss_sLsR::synapse0x2c529e0() {
   return (neuron0x2c39070()*1.23264);
}

double NNfunction_ss_sLsR::synapse0x2c52d60() {
   return (neuron0x2c344b0()*0.00708616);
}

double NNfunction_ss_sLsR::synapse0x2c52da0() {
   return (neuron0x2c347f0()*-0.0184314);
}

double NNfunction_ss_sLsR::synapse0x2c52de0() {
   return (neuron0x2c34b30()*0.0360541);
}

double NNfunction_ss_sLsR::synapse0x2c52e20() {
   return (neuron0x2c34e70()*0.162848);
}

double NNfunction_ss_sLsR::synapse0x2c52e60() {
   return (neuron0x2c351b0()*-0.00605816);
}

double NNfunction_ss_sLsR::synapse0x2c52ea0() {
   return (neuron0x2c354f0()*-0.00584414);
}

double NNfunction_ss_sLsR::synapse0x2c52ee0() {
   return (neuron0x2c35830()*-0.00697992);
}

double NNfunction_ss_sLsR::synapse0x2c52f20() {
   return (neuron0x2c35b70()*0.00220485);
}

double NNfunction_ss_sLsR::synapse0x2c52f60() {
   return (neuron0x2c35eb0()*0.00545826);
}

double NNfunction_ss_sLsR::synapse0x2c52fa0() {
   return (neuron0x2c361f0()*-0.0183238);
}

double NNfunction_ss_sLsR::synapse0x2c52fe0() {
   return (neuron0x2c36530()*-0.0018203);
}

double NNfunction_ss_sLsR::synapse0x2c53020() {
   return (neuron0x2c36870()*-0.0261743);
}

double NNfunction_ss_sLsR::synapse0x2c53060() {
   return (neuron0x2c36bb0()*-0.706019);
}

double NNfunction_ss_sLsR::synapse0x2c530a0() {
   return (neuron0x2c36ef0()*0.0110996);
}

double NNfunction_ss_sLsR::synapse0x2c530e0() {
   return (neuron0x2c37230()*-0.0304409);
}

double NNfunction_ss_sLsR::synapse0x2c53120() {
   return (neuron0x2c37570()*0.00447467);
}

double NNfunction_ss_sLsR::synapse0x2c52bb0() {
   return (neuron0x2c378b0()*0.0028505);
}

double NNfunction_ss_sLsR::synapse0x2c52bf0() {
   return (neuron0x2c37e10()*-0.00322953);
}

double NNfunction_ss_sLsR::synapse0x2c53270() {
   return (neuron0x2c38030()*-0.150082);
}

double NNfunction_ss_sLsR::synapse0x2c532b0() {
   return (neuron0x2c38370()*-0.000928891);
}

double NNfunction_ss_sLsR::synapse0x2c532f0() {
   return (neuron0x2c386b0()*-0.000152003);
}

double NNfunction_ss_sLsR::synapse0x2c53330() {
   return (neuron0x2c389f0()*-0.00513181);
}

double NNfunction_ss_sLsR::synapse0x2c53370() {
   return (neuron0x2c38d30()*-0.0209734);
}

double NNfunction_ss_sLsR::synapse0x2c533b0() {
   return (neuron0x2c39070()*0.0108384);
}

double NNfunction_ss_sLsR::synapse0x2c53730() {
   return (neuron0x2c344b0()*-0.0348915);
}

double NNfunction_ss_sLsR::synapse0x2c53770() {
   return (neuron0x2c347f0()*-0.0310181);
}

double NNfunction_ss_sLsR::synapse0x2c537b0() {
   return (neuron0x2c34b30()*0.032929);
}

double NNfunction_ss_sLsR::synapse0x2c537f0() {
   return (neuron0x2c34e70()*-2.12814);
}

double NNfunction_ss_sLsR::synapse0x2c53830() {
   return (neuron0x2c351b0()*0.000550254);
}

double NNfunction_ss_sLsR::synapse0x2c53870() {
   return (neuron0x2c354f0()*0.0173566);
}

double NNfunction_ss_sLsR::synapse0x2c538b0() {
   return (neuron0x2c35830()*0.0161251);
}

double NNfunction_ss_sLsR::synapse0x2c538f0() {
   return (neuron0x2c35b70()*0.0301611);
}

double NNfunction_ss_sLsR::synapse0x2c53930() {
   return (neuron0x2c35eb0()*0.000292098);
}

double NNfunction_ss_sLsR::synapse0x2c53970() {
   return (neuron0x2c361f0()*0.0151888);
}

double NNfunction_ss_sLsR::synapse0x2c539b0() {
   return (neuron0x2c36530()*0.0296102);
}

double NNfunction_ss_sLsR::synapse0x2c539f0() {
   return (neuron0x2c36870()*0.0345198);
}

double NNfunction_ss_sLsR::synapse0x2c53a30() {
   return (neuron0x2c36bb0()*0.167836);
}

double NNfunction_ss_sLsR::synapse0x2c53a70() {
   return (neuron0x2c36ef0()*-0.0283962);
}

double NNfunction_ss_sLsR::synapse0x2c53ab0() {
   return (neuron0x2c37230()*0.010653);
}

double NNfunction_ss_sLsR::synapse0x2c53af0() {
   return (neuron0x2c37570()*-0.0455964);
}

double NNfunction_ss_sLsR::synapse0x2c53580() {
   return (neuron0x2c378b0()*-0.0389681);
}

double NNfunction_ss_sLsR::synapse0x2c535c0() {
   return (neuron0x2c37e10()*0.00191397);
}

double NNfunction_ss_sLsR::synapse0x2c53c40() {
   return (neuron0x2c38030()*-0.208605);
}

double NNfunction_ss_sLsR::synapse0x2c53c80() {
   return (neuron0x2c38370()*0.00586061);
}

double NNfunction_ss_sLsR::synapse0x2c53cc0() {
   return (neuron0x2c386b0()*0.0180753);
}

double NNfunction_ss_sLsR::synapse0x2c53d00() {
   return (neuron0x2c389f0()*-0.0242446);
}

double NNfunction_ss_sLsR::synapse0x2c53d40() {
   return (neuron0x2c38d30()*-0.00950634);
}

double NNfunction_ss_sLsR::synapse0x2c53d80() {
   return (neuron0x2c39070()*-0.0170054);
}

double NNfunction_ss_sLsR::synapse0x2c54100() {
   return (neuron0x2c344b0()*-0.0955921);
}

double NNfunction_ss_sLsR::synapse0x2c54140() {
   return (neuron0x2c347f0()*0.436767);
}

double NNfunction_ss_sLsR::synapse0x2c54180() {
   return (neuron0x2c34b30()*-2.61477);
}

double NNfunction_ss_sLsR::synapse0x2c541c0() {
   return (neuron0x2c34e70()*0.00233512);
}

double NNfunction_ss_sLsR::synapse0x2c54200() {
   return (neuron0x2c351b0()*0.234552);
}

double NNfunction_ss_sLsR::synapse0x2c54240() {
   return (neuron0x2c354f0()*0.0585921);
}

double NNfunction_ss_sLsR::synapse0x2c54280() {
   return (neuron0x2c35830()*0.230194);
}

double NNfunction_ss_sLsR::synapse0x2c542c0() {
   return (neuron0x2c35b70()*-0.173873);
}

double NNfunction_ss_sLsR::synapse0x2c54300() {
   return (neuron0x2c35eb0()*-0.306807);
}

double NNfunction_ss_sLsR::synapse0x2c54340() {
   return (neuron0x2c361f0()*0.343228);
}

double NNfunction_ss_sLsR::synapse0x2c54380() {
   return (neuron0x2c36530()*0.106603);
}

double NNfunction_ss_sLsR::synapse0x2c543c0() {
   return (neuron0x2c36870()*-0.145846);
}

double NNfunction_ss_sLsR::synapse0x2c54400() {
   return (neuron0x2c36bb0()*0.922666);
}

double NNfunction_ss_sLsR::synapse0x2c54440() {
   return (neuron0x2c36ef0()*-0.0937731);
}

double NNfunction_ss_sLsR::synapse0x2c54480() {
   return (neuron0x2c37230()*-0.164305);
}

double NNfunction_ss_sLsR::synapse0x2c544c0() {
   return (neuron0x2c37570()*-0.0484319);
}

double NNfunction_ss_sLsR::synapse0x2c53f50() {
   return (neuron0x2c378b0()*-0.221173);
}

double NNfunction_ss_sLsR::synapse0x2c53f90() {
   return (neuron0x2c37e10()*-0.0378552);
}

double NNfunction_ss_sLsR::synapse0x2c54610() {
   return (neuron0x2c38030()*-0.320587);
}

double NNfunction_ss_sLsR::synapse0x2c54650() {
   return (neuron0x2c38370()*-0.566204);
}

double NNfunction_ss_sLsR::synapse0x2c54690() {
   return (neuron0x2c386b0()*0.0226462);
}

double NNfunction_ss_sLsR::synapse0x2c546d0() {
   return (neuron0x2c389f0()*0.350576);
}

double NNfunction_ss_sLsR::synapse0x2c54710() {
   return (neuron0x2c38d30()*-0.181072);
}

double NNfunction_ss_sLsR::synapse0x2c54750() {
   return (neuron0x2c39070()*0.20711);
}

double NNfunction_ss_sLsR::synapse0x2c54ad0() {
   return (neuron0x2c344b0()*-0.159009);
}

double NNfunction_ss_sLsR::synapse0x2c54b10() {
   return (neuron0x2c347f0()*-0.14057);
}

double NNfunction_ss_sLsR::synapse0x2c54b50() {
   return (neuron0x2c34b30()*-0.498185);
}

double NNfunction_ss_sLsR::synapse0x2c54b90() {
   return (neuron0x2c34e70()*1.09655);
}

double NNfunction_ss_sLsR::synapse0x2c54bd0() {
   return (neuron0x2c351b0()*-0.131604);
}

double NNfunction_ss_sLsR::synapse0x2c54c10() {
   return (neuron0x2c354f0()*0.304673);
}

double NNfunction_ss_sLsR::synapse0x2c54c50() {
   return (neuron0x2c35830()*-0.639027);
}

double NNfunction_ss_sLsR::synapse0x2c54c90() {
   return (neuron0x2c35b70()*0.625811);
}

double NNfunction_ss_sLsR::synapse0x2c54cd0() {
   return (neuron0x2c35eb0()*0.112463);
}

double NNfunction_ss_sLsR::synapse0x2c54d10() {
   return (neuron0x2c361f0()*-0.0471648);
}

double NNfunction_ss_sLsR::synapse0x2c54d50() {
   return (neuron0x2c36530()*0.163108);
}

double NNfunction_ss_sLsR::synapse0x2c54d90() {
   return (neuron0x2c36870()*0.487884);
}

double NNfunction_ss_sLsR::synapse0x2c54dd0() {
   return (neuron0x2c36bb0()*0.565147);
}

double NNfunction_ss_sLsR::synapse0x2c54e10() {
   return (neuron0x2c36ef0()*-0.0985888);
}

double NNfunction_ss_sLsR::synapse0x2c54e50() {
   return (neuron0x2c37230()*0.653751);
}

double NNfunction_ss_sLsR::synapse0x2c54e90() {
   return (neuron0x2c37570()*0.0763635);
}

double NNfunction_ss_sLsR::synapse0x2c54920() {
   return (neuron0x2c378b0()*-0.233715);
}

double NNfunction_ss_sLsR::synapse0x2c54960() {
   return (neuron0x2c37e10()*-0.305154);
}

double NNfunction_ss_sLsR::synapse0x2c54fe0() {
   return (neuron0x2c38030()*0.0868585);
}

double NNfunction_ss_sLsR::synapse0x2c55020() {
   return (neuron0x2c38370()*0.615206);
}

double NNfunction_ss_sLsR::synapse0x2c55060() {
   return (neuron0x2c386b0()*0.0298176);
}

double NNfunction_ss_sLsR::synapse0x2c550a0() {
   return (neuron0x2c389f0()*-0.369668);
}

double NNfunction_ss_sLsR::synapse0x2c550e0() {
   return (neuron0x2c38d30()*0.00955644);
}

double NNfunction_ss_sLsR::synapse0x2c55120() {
   return (neuron0x2c39070()*-0.147372);
}

double NNfunction_ss_sLsR::synapse0x2c554a0() {
   return (neuron0x2c344b0()*0.00677344);
}

double NNfunction_ss_sLsR::synapse0x2c554e0() {
   return (neuron0x2c347f0()*-0.109833);
}

double NNfunction_ss_sLsR::synapse0x2c55520() {
   return (neuron0x2c34b30()*0.156466);
}

double NNfunction_ss_sLsR::synapse0x2c55560() {
   return (neuron0x2c34e70()*1.31016);
}

double NNfunction_ss_sLsR::synapse0x2c555a0() {
   return (neuron0x2c351b0()*-0.0278788);
}

double NNfunction_ss_sLsR::synapse0x2c555e0() {
   return (neuron0x2c354f0()*-0.0234817);
}

double NNfunction_ss_sLsR::synapse0x2c55620() {
   return (neuron0x2c35830()*-0.0425759);
}

double NNfunction_ss_sLsR::synapse0x2c55660() {
   return (neuron0x2c35b70()*-0.0704267);
}

double NNfunction_ss_sLsR::synapse0x2c556a0() {
   return (neuron0x2c35eb0()*-0.0330518);
}

double NNfunction_ss_sLsR::synapse0x2c556e0() {
   return (neuron0x2c361f0()*-0.051748);
}

double NNfunction_ss_sLsR::synapse0x2c55720() {
   return (neuron0x2c36530()*-0.0132231);
}

double NNfunction_ss_sLsR::synapse0x2c55760() {
   return (neuron0x2c36870()*-0.145384);
}

double NNfunction_ss_sLsR::synapse0x2c557a0() {
   return (neuron0x2c36bb0()*-0.19897);
}

double NNfunction_ss_sLsR::synapse0x2c557e0() {
   return (neuron0x2c36ef0()*0.115978);
}

double NNfunction_ss_sLsR::synapse0x2c55820() {
   return (neuron0x2c37230()*-0.247316);
}

double NNfunction_ss_sLsR::synapse0x2c55860() {
   return (neuron0x2c37570()*0.120026);
}

double NNfunction_ss_sLsR::synapse0x2c552f0() {
   return (neuron0x2c378b0()*0.134621);
}

double NNfunction_ss_sLsR::synapse0x2c55330() {
   return (neuron0x2c37e10()*-0.0877905);
}

double NNfunction_ss_sLsR::synapse0x2c559b0() {
   return (neuron0x2c38030()*-0.0425917);
}

double NNfunction_ss_sLsR::synapse0x2c559f0() {
   return (neuron0x2c38370()*-0.0761706);
}

double NNfunction_ss_sLsR::synapse0x2c55a30() {
   return (neuron0x2c386b0()*-0.0041094);
}

double NNfunction_ss_sLsR::synapse0x2c55a70() {
   return (neuron0x2c389f0()*0.0341713);
}

double NNfunction_ss_sLsR::synapse0x2c55ab0() {
   return (neuron0x2c38d30()*-0.0421827);
}

double NNfunction_ss_sLsR::synapse0x2c55af0() {
   return (neuron0x2c39070()*0.0520042);
}

double NNfunction_ss_sLsR::synapse0x2c3e5a0() {
   return (neuron0x2c344b0()*0.0370484);
}

double NNfunction_ss_sLsR::synapse0x2c3e5e0() {
   return (neuron0x2c347f0()*-0.119319);
}

double NNfunction_ss_sLsR::synapse0x2c3e620() {
   return (neuron0x2c34b30()*0.894478);
}

double NNfunction_ss_sLsR::synapse0x2c3e660() {
   return (neuron0x2c34e70()*2.146);
}

double NNfunction_ss_sLsR::synapse0x2c3e6a0() {
   return (neuron0x2c351b0()*-0.158367);
}

double NNfunction_ss_sLsR::synapse0x2c3e6e0() {
   return (neuron0x2c354f0()*-0.0285855);
}

double NNfunction_ss_sLsR::synapse0x2c3e720() {
   return (neuron0x2c35830()*0.232018);
}

double NNfunction_ss_sLsR::synapse0x2c3e760() {
   return (neuron0x2c35b70()*0.376165);
}

double NNfunction_ss_sLsR::synapse0x2c56280() {
   return (neuron0x2c35eb0()*0.0448533);
}

double NNfunction_ss_sLsR::synapse0x2c562c0() {
   return (neuron0x2c361f0()*0.236753);
}

double NNfunction_ss_sLsR::synapse0x2c56300() {
   return (neuron0x2c36530()*-0.00111334);
}

double NNfunction_ss_sLsR::synapse0x2c56340() {
   return (neuron0x2c36870()*0.17427);
}

double NNfunction_ss_sLsR::synapse0x2c56380() {
   return (neuron0x2c36bb0()*-0.239334);
}

double NNfunction_ss_sLsR::synapse0x2c563c0() {
   return (neuron0x2c36ef0()*0.231756);
}

double NNfunction_ss_sLsR::synapse0x2c56400() {
   return (neuron0x2c37230()*-0.0242938);
}

double NNfunction_ss_sLsR::synapse0x2c56440() {
   return (neuron0x2c37570()*-0.299134);
}

double NNfunction_ss_sLsR::synapse0x2c55cc0() {
   return (neuron0x2c378b0()*0.0852582);
}

double NNfunction_ss_sLsR::synapse0x2c55d00() {
   return (neuron0x2c37e10()*0.0569643);
}

double NNfunction_ss_sLsR::synapse0x2c56590() {
   return (neuron0x2c38030()*0.567478);
}

double NNfunction_ss_sLsR::synapse0x2c565d0() {
   return (neuron0x2c38370()*0.122119);
}

double NNfunction_ss_sLsR::synapse0x2c56610() {
   return (neuron0x2c386b0()*0.0765814);
}

double NNfunction_ss_sLsR::synapse0x2c56650() {
   return (neuron0x2c389f0()*-0.125582);
}

double NNfunction_ss_sLsR::synapse0x2c56690() {
   return (neuron0x2c38d30()*-0.108302);
}

double NNfunction_ss_sLsR::synapse0x2c566d0() {
   return (neuron0x2c39070()*0.0111099);
}

double NNfunction_ss_sLsR::synapse0x2c56a50() {
   return (neuron0x2c344b0()*-0.0890314);
}

double NNfunction_ss_sLsR::synapse0x2c56a90() {
   return (neuron0x2c347f0()*0.598866);
}

double NNfunction_ss_sLsR::synapse0x2c56ad0() {
   return (neuron0x2c34b30()*-0.180576);
}

double NNfunction_ss_sLsR::synapse0x2c56b10() {
   return (neuron0x2c34e70()*1.16839);
}

double NNfunction_ss_sLsR::synapse0x2c56b50() {
   return (neuron0x2c351b0()*-1.04285);
}

double NNfunction_ss_sLsR::synapse0x2c56b90() {
   return (neuron0x2c354f0()*0.0819152);
}

double NNfunction_ss_sLsR::synapse0x2c56bd0() {
   return (neuron0x2c35830()*-0.0583364);
}

double NNfunction_ss_sLsR::synapse0x2c56c10() {
   return (neuron0x2c35b70()*-0.360299);
}

double NNfunction_ss_sLsR::synapse0x2c56c50() {
   return (neuron0x2c35eb0()*0.113013);
}

double NNfunction_ss_sLsR::synapse0x2c56c90() {
   return (neuron0x2c361f0()*0.369911);
}

double NNfunction_ss_sLsR::synapse0x2c56cd0() {
   return (neuron0x2c36530()*-0.375076);
}

double NNfunction_ss_sLsR::synapse0x2c56d10() {
   return (neuron0x2c36870()*-0.672337);
}

double NNfunction_ss_sLsR::synapse0x2c56d50() {
   return (neuron0x2c36bb0()*0.178965);
}

double NNfunction_ss_sLsR::synapse0x2c56d90() {
   return (neuron0x2c36ef0()*-0.242841);
}

double NNfunction_ss_sLsR::synapse0x2c56dd0() {
   return (neuron0x2c37230()*0.0576569);
}

double NNfunction_ss_sLsR::synapse0x2c56e10() {
   return (neuron0x2c37570()*-0.161401);
}

double NNfunction_ss_sLsR::synapse0x2c568a0() {
   return (neuron0x2c378b0()*-0.53117);
}

double NNfunction_ss_sLsR::synapse0x2c568e0() {
   return (neuron0x2c37e10()*0.423199);
}

double NNfunction_ss_sLsR::synapse0x2c56f60() {
   return (neuron0x2c38030()*0.00967485);
}

double NNfunction_ss_sLsR::synapse0x2c56fa0() {
   return (neuron0x2c38370()*-0.0720972);
}

double NNfunction_ss_sLsR::synapse0x2c56fe0() {
   return (neuron0x2c386b0()*0.0625432);
}

double NNfunction_ss_sLsR::synapse0x2c57020() {
   return (neuron0x2c389f0()*-0.196367);
}

double NNfunction_ss_sLsR::synapse0x2c57060() {
   return (neuron0x2c38d30()*-0.370188);
}

double NNfunction_ss_sLsR::synapse0x2c570a0() {
   return (neuron0x2c39070()*0.143014);
}

double NNfunction_ss_sLsR::synapse0x2c57420() {
   return (neuron0x2c344b0()*-1.04384);
}

double NNfunction_ss_sLsR::synapse0x2c57460() {
   return (neuron0x2c347f0()*-0.383709);
}

double NNfunction_ss_sLsR::synapse0x2c574a0() {
   return (neuron0x2c34b30()*0.518175);
}

double NNfunction_ss_sLsR::synapse0x2c574e0() {
   return (neuron0x2c34e70()*1.34213);
}

double NNfunction_ss_sLsR::synapse0x2c57520() {
   return (neuron0x2c351b0()*1.21998);
}

double NNfunction_ss_sLsR::synapse0x2c57560() {
   return (neuron0x2c354f0()*0.666145);
}

double NNfunction_ss_sLsR::synapse0x2c575a0() {
   return (neuron0x2c35830()*-0.495057);
}

double NNfunction_ss_sLsR::synapse0x2c575e0() {
   return (neuron0x2c35b70()*0.3768);
}

double NNfunction_ss_sLsR::synapse0x2c57620() {
   return (neuron0x2c35eb0()*0.384384);
}

double NNfunction_ss_sLsR::synapse0x2c57660() {
   return (neuron0x2c361f0()*0.332951);
}

double NNfunction_ss_sLsR::synapse0x2c576a0() {
   return (neuron0x2c36530()*-0.292223);
}

double NNfunction_ss_sLsR::synapse0x2c576e0() {
   return (neuron0x2c36870()*-0.905005);
}

double NNfunction_ss_sLsR::synapse0x2c57720() {
   return (neuron0x2c36bb0()*0.229135);
}

double NNfunction_ss_sLsR::synapse0x2c57760() {
   return (neuron0x2c36ef0()*1.08882);
}

double NNfunction_ss_sLsR::synapse0x2c577a0() {
   return (neuron0x2c37230()*-0.12201);
}

double NNfunction_ss_sLsR::synapse0x2c577e0() {
   return (neuron0x2c37570()*-0.206625);
}

double NNfunction_ss_sLsR::synapse0x2c57270() {
   return (neuron0x2c378b0()*-0.25221);
}

double NNfunction_ss_sLsR::synapse0x2c572b0() {
   return (neuron0x2c37e10()*0.0578999);
}

double NNfunction_ss_sLsR::synapse0x2c47de0() {
   return (neuron0x2c38030()*-0.228551);
}

double NNfunction_ss_sLsR::synapse0x2c47e20() {
   return (neuron0x2c38370()*-0.881405);
}

double NNfunction_ss_sLsR::synapse0x2c47e60() {
   return (neuron0x2c386b0()*0.418436);
}

double NNfunction_ss_sLsR::synapse0x2c47ea0() {
   return (neuron0x2c389f0()*-0.418807);
}

double NNfunction_ss_sLsR::synapse0x2c47ee0() {
   return (neuron0x2c38d30()*0.189332);
}

double NNfunction_ss_sLsR::synapse0x2c47f20() {
   return (neuron0x2c39070()*-0.701263);
}

double NNfunction_ss_sLsR::synapse0x2c482a0() {
   return (neuron0x2c344b0()*-0.18297);
}

double NNfunction_ss_sLsR::synapse0x2c482e0() {
   return (neuron0x2c347f0()*0.36065);
}

double NNfunction_ss_sLsR::synapse0x2c48320() {
   return (neuron0x2c34b30()*0.872088);
}

double NNfunction_ss_sLsR::synapse0x2c48360() {
   return (neuron0x2c34e70()*-0.203238);
}

double NNfunction_ss_sLsR::synapse0x2c483a0() {
   return (neuron0x2c351b0()*-0.669755);
}

double NNfunction_ss_sLsR::synapse0x2c483e0() {
   return (neuron0x2c354f0()*1.08952);
}

double NNfunction_ss_sLsR::synapse0x2c48420() {
   return (neuron0x2c35830()*0.673616);
}

double NNfunction_ss_sLsR::synapse0x2c48460() {
   return (neuron0x2c35b70()*0.847966);
}

double NNfunction_ss_sLsR::synapse0x2c484a0() {
   return (neuron0x2c35eb0()*-0.380437);
}

double NNfunction_ss_sLsR::synapse0x2c484e0() {
   return (neuron0x2c361f0()*0.535451);
}

double NNfunction_ss_sLsR::synapse0x2c48520() {
   return (neuron0x2c36530()*-0.258673);
}

double NNfunction_ss_sLsR::synapse0x2c48560() {
   return (neuron0x2c36870()*-1.37458);
}

double NNfunction_ss_sLsR::synapse0x2c485a0() {
   return (neuron0x2c36bb0()*0.135421);
}

double NNfunction_ss_sLsR::synapse0x2c485e0() {
   return (neuron0x2c36ef0()*0.471382);
}

double NNfunction_ss_sLsR::synapse0x2c48620() {
   return (neuron0x2c37230()*0.12737);
}

double NNfunction_ss_sLsR::synapse0x2c48660() {
   return (neuron0x2c37570()*0.713813);
}

double NNfunction_ss_sLsR::synapse0x2c480f0() {
   return (neuron0x2c378b0()*-0.210556);
}

double NNfunction_ss_sLsR::synapse0x2c48130() {
   return (neuron0x2c37e10()*0.429826);
}

double NNfunction_ss_sLsR::synapse0x2c487b0() {
   return (neuron0x2c38030()*0.93512);
}

double NNfunction_ss_sLsR::synapse0x2c487f0() {
   return (neuron0x2c38370()*-1.38987);
}

double NNfunction_ss_sLsR::synapse0x2c48830() {
   return (neuron0x2c386b0()*0.919153);
}

double NNfunction_ss_sLsR::synapse0x2c48870() {
   return (neuron0x2c389f0()*0.643227);
}

double NNfunction_ss_sLsR::synapse0x2c488b0() {
   return (neuron0x2c38d30()*-1.6811);
}

double NNfunction_ss_sLsR::synapse0x2c488f0() {
   return (neuron0x2c39070()*0.625618);
}

double NNfunction_ss_sLsR::synapse0x2c48c70() {
   return (neuron0x2c344b0()*-0.45263);
}

double NNfunction_ss_sLsR::synapse0x2c48cb0() {
   return (neuron0x2c347f0()*-0.850618);
}

double NNfunction_ss_sLsR::synapse0x2c48cf0() {
   return (neuron0x2c34b30()*-0.544868);
}

double NNfunction_ss_sLsR::synapse0x2c48d30() {
   return (neuron0x2c34e70()*-0.135246);
}

double NNfunction_ss_sLsR::synapse0x2c48d70() {
   return (neuron0x2c351b0()*-1.57655);
}

double NNfunction_ss_sLsR::synapse0x2c48db0() {
   return (neuron0x2c354f0()*-0.118175);
}

double NNfunction_ss_sLsR::synapse0x2c48df0() {
   return (neuron0x2c35830()*-0.211504);
}

double NNfunction_ss_sLsR::synapse0x2c48e30() {
   return (neuron0x2c35b70()*0.246421);
}

double NNfunction_ss_sLsR::synapse0x2c48e70() {
   return (neuron0x2c35eb0()*-0.167446);
}

double NNfunction_ss_sLsR::synapse0x2c48eb0() {
   return (neuron0x2c361f0()*0.0336644);
}

double NNfunction_ss_sLsR::synapse0x2c48ef0() {
   return (neuron0x2c36530()*0.788972);
}

double NNfunction_ss_sLsR::synapse0x2c48f30() {
   return (neuron0x2c36870()*-0.1155);
}

double NNfunction_ss_sLsR::synapse0x2c48f70() {
   return (neuron0x2c36bb0()*-1.41218);
}

double NNfunction_ss_sLsR::synapse0x2c48fb0() {
   return (neuron0x2c36ef0()*0.690292);
}

double NNfunction_ss_sLsR::synapse0x2c48ff0() {
   return (neuron0x2c37230()*-1.23794);
}

double NNfunction_ss_sLsR::synapse0x2c49030() {
   return (neuron0x2c37570()*-0.462701);
}

double NNfunction_ss_sLsR::synapse0x2c48ac0() {
   return (neuron0x2c378b0()*1.15359);
}

double NNfunction_ss_sLsR::synapse0x2c48b00() {
   return (neuron0x2c37e10()*-0.57904);
}

double NNfunction_ss_sLsR::synapse0x2c49180() {
   return (neuron0x2c38030()*0.0794522);
}

double NNfunction_ss_sLsR::synapse0x2c491c0() {
   return (neuron0x2c38370()*0.521348);
}

double NNfunction_ss_sLsR::synapse0x2c49200() {
   return (neuron0x2c386b0()*-0.450406);
}

double NNfunction_ss_sLsR::synapse0x2c49240() {
   return (neuron0x2c389f0()*0.0419153);
}

double NNfunction_ss_sLsR::synapse0x2c49280() {
   return (neuron0x2c38d30()*-0.557594);
}

double NNfunction_ss_sLsR::synapse0x2c492c0() {
   return (neuron0x2c39070()*-0.582);
}

double NNfunction_ss_sLsR::synapse0x2c49640() {
   return (neuron0x2c344b0()*0.00596707);
}

double NNfunction_ss_sLsR::synapse0x2c49680() {
   return (neuron0x2c347f0()*-0.0237331);
}

double NNfunction_ss_sLsR::synapse0x2c496c0() {
   return (neuron0x2c34b30()*0.0515498);
}

double NNfunction_ss_sLsR::synapse0x2c49700() {
   return (neuron0x2c34e70()*0.0557971);
}

double NNfunction_ss_sLsR::synapse0x2c49740() {
   return (neuron0x2c351b0()*0.00106506);
}

double NNfunction_ss_sLsR::synapse0x2c49780() {
   return (neuron0x2c354f0()*-0.00635095);
}

double NNfunction_ss_sLsR::synapse0x2c497c0() {
   return (neuron0x2c35830()*0.0148634);
}

double NNfunction_ss_sLsR::synapse0x2c49800() {
   return (neuron0x2c35b70()*-0.00155497);
}

double NNfunction_ss_sLsR::synapse0x2c49840() {
   return (neuron0x2c35eb0()*-0.00353126);
}

double NNfunction_ss_sLsR::synapse0x2c49880() {
   return (neuron0x2c361f0()*0.0113529);
}

double NNfunction_ss_sLsR::synapse0x2c498c0() {
   return (neuron0x2c36530()*-0.0234462);
}

double NNfunction_ss_sLsR::synapse0x2c49900() {
   return (neuron0x2c36870()*-0.00554387);
}

double NNfunction_ss_sLsR::synapse0x2c49940() {
   return (neuron0x2c36bb0()*-1.5774);
}

double NNfunction_ss_sLsR::synapse0x2c49980() {
   return (neuron0x2c36ef0()*-0.0407902);
}

double NNfunction_ss_sLsR::synapse0x2c499c0() {
   return (neuron0x2c37230()*-0.0121663);
}

double NNfunction_ss_sLsR::synapse0x2c49a00() {
   return (neuron0x2c37570()*-0.0123915);
}

double NNfunction_ss_sLsR::synapse0x2c49490() {
   return (neuron0x2c378b0()*-0.0125179);
}

double NNfunction_ss_sLsR::synapse0x2c494d0() {
   return (neuron0x2c37e10()*-0.00396939);
}

double NNfunction_ss_sLsR::synapse0x2c49b50() {
   return (neuron0x2c38030()*0.15472);
}

double NNfunction_ss_sLsR::synapse0x2c49b90() {
   return (neuron0x2c38370()*0.0101593);
}

double NNfunction_ss_sLsR::synapse0x2c49bd0() {
   return (neuron0x2c386b0()*0.0108452);
}

double NNfunction_ss_sLsR::synapse0x2c49c10() {
   return (neuron0x2c389f0()*0.00264242);
}

double NNfunction_ss_sLsR::synapse0x2c49c50() {
   return (neuron0x2c38d30()*0.00329589);
}

double NNfunction_ss_sLsR::synapse0x2c49c90() {
   return (neuron0x2c39070()*0.0143699);
}

double NNfunction_ss_sLsR::synapse0x2c5bb60() {
   return (neuron0x2c344b0()*-0.0394368);
}

double NNfunction_ss_sLsR::synapse0x2c5bba0() {
   return (neuron0x2c347f0()*-0.129732);
}

double NNfunction_ss_sLsR::synapse0x2c5bbe0() {
   return (neuron0x2c34b30()*-1.24323);
}

double NNfunction_ss_sLsR::synapse0x2c5bc20() {
   return (neuron0x2c34e70()*1.21821);
}

double NNfunction_ss_sLsR::synapse0x2c5bc60() {
   return (neuron0x2c351b0()*0.0274438);
}

double NNfunction_ss_sLsR::synapse0x2c5bca0() {
   return (neuron0x2c354f0()*-0.0109317);
}

double NNfunction_ss_sLsR::synapse0x2c5bce0() {
   return (neuron0x2c35830()*-0.00998993);
}

double NNfunction_ss_sLsR::synapse0x2c5bd20() {
   return (neuron0x2c35b70()*-0.00517169);
}

double NNfunction_ss_sLsR::synapse0x2c5bd60() {
   return (neuron0x2c35eb0()*0.0124408);
}

double NNfunction_ss_sLsR::synapse0x2c5bda0() {
   return (neuron0x2c361f0()*0.0163181);
}

double NNfunction_ss_sLsR::synapse0x2c5bde0() {
   return (neuron0x2c36530()*-0.0134351);
}

double NNfunction_ss_sLsR::synapse0x2c5be20() {
   return (neuron0x2c36870()*0.115839);
}

double NNfunction_ss_sLsR::synapse0x2c5be60() {
   return (neuron0x2c36bb0()*0.410936);
}

double NNfunction_ss_sLsR::synapse0x2c5bea0() {
   return (neuron0x2c36ef0()*-0.0615959);
}

double NNfunction_ss_sLsR::synapse0x2c5bee0() {
   return (neuron0x2c37230()*-0.115055);
}

double NNfunction_ss_sLsR::synapse0x2c5bf20() {
   return (neuron0x2c37570()*0.0534553);
}

double NNfunction_ss_sLsR::synapse0x2c49cd0() {
   return (neuron0x2c378b0()*-0.041572);
}

double NNfunction_ss_sLsR::synapse0x2c49d10() {
   return (neuron0x2c37e10()*0.0255094);
}

double NNfunction_ss_sLsR::synapse0x2c5c070() {
   return (neuron0x2c38030()*0.281479);
}

double NNfunction_ss_sLsR::synapse0x2c5c0b0() {
   return (neuron0x2c38370()*0.0565516);
}

double NNfunction_ss_sLsR::synapse0x2c5c0f0() {
   return (neuron0x2c386b0()*0.0125881);
}

double NNfunction_ss_sLsR::synapse0x2c5c130() {
   return (neuron0x2c389f0()*0.00497591);
}

double NNfunction_ss_sLsR::synapse0x2c5c170() {
   return (neuron0x2c38d30()*-0.0341381);
}

double NNfunction_ss_sLsR::synapse0x2c5c1b0() {
   return (neuron0x2c39070()*0.101329);
}

double NNfunction_ss_sLsR::synapse0x2c5c530() {
   return (neuron0x2c344b0()*-1.0453);
}

double NNfunction_ss_sLsR::synapse0x2c5c570() {
   return (neuron0x2c347f0()*-0.120912);
}

double NNfunction_ss_sLsR::synapse0x2c5c5b0() {
   return (neuron0x2c34b30()*-1.01593);
}

double NNfunction_ss_sLsR::synapse0x2c5c5f0() {
   return (neuron0x2c34e70()*0.279595);
}

double NNfunction_ss_sLsR::synapse0x2c5c630() {
   return (neuron0x2c351b0()*0.45507);
}

double NNfunction_ss_sLsR::synapse0x2c5c670() {
   return (neuron0x2c354f0()*0.533167);
}

double NNfunction_ss_sLsR::synapse0x2c5c6b0() {
   return (neuron0x2c35830()*0.310104);
}

double NNfunction_ss_sLsR::synapse0x2c5c6f0() {
   return (neuron0x2c35b70()*-0.199201);
}

double NNfunction_ss_sLsR::synapse0x2c5c730() {
   return (neuron0x2c35eb0()*-0.0805396);
}

double NNfunction_ss_sLsR::synapse0x2c5c770() {
   return (neuron0x2c361f0()*-0.220269);
}

double NNfunction_ss_sLsR::synapse0x2c5c7b0() {
   return (neuron0x2c36530()*-0.0443327);
}

double NNfunction_ss_sLsR::synapse0x2c5c7f0() {
   return (neuron0x2c36870()*-0.0465782);
}

double NNfunction_ss_sLsR::synapse0x2c5c830() {
   return (neuron0x2c36bb0()*-0.624444);
}

double NNfunction_ss_sLsR::synapse0x2c5c870() {
   return (neuron0x2c36ef0()*0.605818);
}

double NNfunction_ss_sLsR::synapse0x2c5c8b0() {
   return (neuron0x2c37230()*-1.29758);
}

double NNfunction_ss_sLsR::synapse0x2c5c8f0() {
   return (neuron0x2c37570()*1.32575);
}

double NNfunction_ss_sLsR::synapse0x2c5c380() {
   return (neuron0x2c378b0()*0.748859);
}

double NNfunction_ss_sLsR::synapse0x2c5c3c0() {
   return (neuron0x2c37e10()*-0.488778);
}

double NNfunction_ss_sLsR::synapse0x2c5ca40() {
   return (neuron0x2c38030()*0.0672612);
}

double NNfunction_ss_sLsR::synapse0x2c5ca80() {
   return (neuron0x2c38370()*-1.42014);
}

double NNfunction_ss_sLsR::synapse0x2c5cac0() {
   return (neuron0x2c386b0()*0.0442031);
}

double NNfunction_ss_sLsR::synapse0x2c5cb00() {
   return (neuron0x2c389f0()*0.13493);
}

double NNfunction_ss_sLsR::synapse0x2c5cb40() {
   return (neuron0x2c38d30()*0.657187);
}

double NNfunction_ss_sLsR::synapse0x2c5cb80() {
   return (neuron0x2c39070()*-0.171173);
}

double NNfunction_ss_sLsR::synapse0x2c5cf00() {
   return (neuron0x2c344b0()*-0.473466);
}

double NNfunction_ss_sLsR::synapse0x2c5cf40() {
   return (neuron0x2c347f0()*-0.376939);
}

double NNfunction_ss_sLsR::synapse0x2c5cf80() {
   return (neuron0x2c34b30()*-0.29459);
}

double NNfunction_ss_sLsR::synapse0x2c5cfc0() {
   return (neuron0x2c34e70()*-1.46405);
}

double NNfunction_ss_sLsR::synapse0x2c5d000() {
   return (neuron0x2c351b0()*0.135547);
}

double NNfunction_ss_sLsR::synapse0x2c5d040() {
   return (neuron0x2c354f0()*0.19326);
}

double NNfunction_ss_sLsR::synapse0x2c5d080() {
   return (neuron0x2c35830()*-0.454639);
}

double NNfunction_ss_sLsR::synapse0x2c5d0c0() {
   return (neuron0x2c35b70()*0.243436);
}

double NNfunction_ss_sLsR::synapse0x2c5d100() {
   return (neuron0x2c35eb0()*0.0471132);
}

double NNfunction_ss_sLsR::synapse0x2c5d140() {
   return (neuron0x2c361f0()*0.146854);
}

double NNfunction_ss_sLsR::synapse0x2c5d180() {
   return (neuron0x2c36530()*0.19537);
}

double NNfunction_ss_sLsR::synapse0x2c5d1c0() {
   return (neuron0x2c36870()*0.935107);
}

double NNfunction_ss_sLsR::synapse0x2c5d200() {
   return (neuron0x2c36bb0()*-0.509641);
}

double NNfunction_ss_sLsR::synapse0x2c5d240() {
   return (neuron0x2c36ef0()*0.243377);
}

double NNfunction_ss_sLsR::synapse0x2c5d280() {
   return (neuron0x2c37230()*0.696205);
}

double NNfunction_ss_sLsR::synapse0x2c5d2c0() {
   return (neuron0x2c37570()*0.163264);
}

double NNfunction_ss_sLsR::synapse0x2c5cd50() {
   return (neuron0x2c378b0()*-0.0562573);
}

double NNfunction_ss_sLsR::synapse0x2c5cd90() {
   return (neuron0x2c37e10()*-0.458612);
}

double NNfunction_ss_sLsR::synapse0x2c5d410() {
   return (neuron0x2c38030()*-0.445552);
}

double NNfunction_ss_sLsR::synapse0x2c5d450() {
   return (neuron0x2c38370()*-0.0128904);
}

double NNfunction_ss_sLsR::synapse0x2c5d490() {
   return (neuron0x2c386b0()*0.648011);
}

double NNfunction_ss_sLsR::synapse0x2c5d4d0() {
   return (neuron0x2c389f0()*0.381111);
}

double NNfunction_ss_sLsR::synapse0x2c5d510() {
   return (neuron0x2c38d30()*0.634305);
}

double NNfunction_ss_sLsR::synapse0x2c5d550() {
   return (neuron0x2c39070()*0.966295);
}

double NNfunction_ss_sLsR::synapse0x2c5d8d0() {
   return (neuron0x2c344b0()*-0.263186);
}

double NNfunction_ss_sLsR::synapse0x2c5d910() {
   return (neuron0x2c347f0()*0.26509);
}

double NNfunction_ss_sLsR::synapse0x2c5d950() {
   return (neuron0x2c34b30()*0.071328);
}

double NNfunction_ss_sLsR::synapse0x2c5d990() {
   return (neuron0x2c34e70()*0.474679);
}

double NNfunction_ss_sLsR::synapse0x2c5d9d0() {
   return (neuron0x2c351b0()*0.481128);
}

double NNfunction_ss_sLsR::synapse0x2c5da10() {
   return (neuron0x2c354f0()*-0.621161);
}

double NNfunction_ss_sLsR::synapse0x2c5da50() {
   return (neuron0x2c35830()*-0.293933);
}

double NNfunction_ss_sLsR::synapse0x2c5da90() {
   return (neuron0x2c35b70()*-0.978792);
}

double NNfunction_ss_sLsR::synapse0x2c5dad0() {
   return (neuron0x2c35eb0()*0.387775);
}

double NNfunction_ss_sLsR::synapse0x2c5db10() {
   return (neuron0x2c361f0()*0.822316);
}

double NNfunction_ss_sLsR::synapse0x2c5db50() {
   return (neuron0x2c36530()*-0.259213);
}

double NNfunction_ss_sLsR::synapse0x2c5db90() {
   return (neuron0x2c36870()*0.750047);
}

double NNfunction_ss_sLsR::synapse0x2c5dbd0() {
   return (neuron0x2c36bb0()*-1.00956);
}

double NNfunction_ss_sLsR::synapse0x2c5dc10() {
   return (neuron0x2c36ef0()*1.14726);
}

double NNfunction_ss_sLsR::synapse0x2c5dc50() {
   return (neuron0x2c37230()*0.451992);
}

double NNfunction_ss_sLsR::synapse0x2c5dc90() {
   return (neuron0x2c37570()*-0.448114);
}

double NNfunction_ss_sLsR::synapse0x2c5d720() {
   return (neuron0x2c378b0()*-0.236569);
}

double NNfunction_ss_sLsR::synapse0x2c5d760() {
   return (neuron0x2c37e10()*-0.442707);
}

double NNfunction_ss_sLsR::synapse0x2c5dde0() {
   return (neuron0x2c38030()*0.298731);
}

double NNfunction_ss_sLsR::synapse0x2c5de20() {
   return (neuron0x2c38370()*0.774463);
}

double NNfunction_ss_sLsR::synapse0x2c5de60() {
   return (neuron0x2c386b0()*-0.376803);
}

double NNfunction_ss_sLsR::synapse0x2c5dea0() {
   return (neuron0x2c389f0()*-0.140934);
}

double NNfunction_ss_sLsR::synapse0x2c5dee0() {
   return (neuron0x2c38d30()*1.478);
}

double NNfunction_ss_sLsR::synapse0x2c5df20() {
   return (neuron0x2c39070()*0.462184);
}

double NNfunction_ss_sLsR::synapse0x2c3a4c0() {
   return (neuron0x2c39510()*-0.810143);
}

double NNfunction_ss_sLsR::synapse0x2c3a500() {
   return (neuron0x2c39e20()*0.0179879);
}

double NNfunction_ss_sLsR::synapse0x2c3b9d0() {
   return (neuron0x2c3a900()*0.144255);
}

double NNfunction_ss_sLsR::synapse0x2c3ba10() {
   return (neuron0x29f4190()*0.0029138);
}

double NNfunction_ss_sLsR::synapse0x2c3c3a0() {
   return (neuron0x2c3b720()*0.566121);
}

double NNfunction_ss_sLsR::synapse0x2c3c3e0() {
   return (neuron0x2c3c0f0()*-0.00184789);
}

double NNfunction_ss_sLsR::synapse0x2c3d170() {
   return (neuron0x2c3cec0()*0.0840732);
}

double NNfunction_ss_sLsR::synapse0x2c3d1b0() {
   return (neuron0x2c3d890()*-0.0213852);
}

double NNfunction_ss_sLsR::synapse0x2c3db40() {
   return (neuron0x2c3e260()*-0.407661);
}

double NNfunction_ss_sLsR::synapse0x2c3db80() {
   return (neuron0x2c3ed40()*-0.929405);
}

double NNfunction_ss_sLsR::synapse0x2c3e510() {
   return (neuron0x2c3f710()*-0.825044);
}

double NNfunction_ss_sLsR::synapse0x2c3e550() {
   return (neuron0x2c3c7f0()*0.0169749);
}

double NNfunction_ss_sLsR::synapse0x2c3eff0() {
   return (neuron0x2c412c0()*0.0914258);
}

double NNfunction_ss_sLsR::synapse0x2c3f030() {
   return (neuron0x2c41c90()*0.518214);
}

double NNfunction_ss_sLsR::synapse0x2c3f9c0() {
   return (neuron0x2c42660()*0.0129428);
}

double NNfunction_ss_sLsR::synapse0x2c3fa00() {
   return (neuron0x2c43030()*-0.0293623);
}

double NNfunction_ss_sLsR::synapse0x2c3caa0() {
   return (neuron0x2c44e40()*0.0618864);
}

double NNfunction_ss_sLsR::synapse0x2c3cae0() {
   return (neuron0x2c45120()*-0.306219);
}

double NNfunction_ss_sLsR::synapse0x2c41570() {
   return (neuron0x2c45af0()*1.01755);
}

double NNfunction_ss_sLsR::synapse0x2c415b0() {
   return (neuron0x2c464c0()*0.0133222);
}

double NNfunction_ss_sLsR::synapse0x2c41f40() {
   return (neuron0x2c46e90()*0.00128256);
}

double NNfunction_ss_sLsR::synapse0x2c41f80() {
   return (neuron0x2c47860()*-0.0200321);
}

double NNfunction_ss_sLsR::synapse0x2c42910() {
   return (neuron0x2c403b0()*2.50859);
}

double NNfunction_ss_sLsR::synapse0x2c42950() {
   return (neuron0x2c40d80()*-0.111046);
}

double NNfunction_ss_sLsR::synapse0x2c432e0() {
   return (neuron0x2c4a5f0()*0.038294);
}

double NNfunction_ss_sLsR::synapse0x2c43320() {
   return (neuron0x2c4afc0()*-0.0208061);
}

double NNfunction_ss_sLsR::synapse0x2c37450() {
   return (neuron0x2c4b990()*1.23208);
}

double NNfunction_ss_sLsR::synapse0x2c37490() {
   return (neuron0x2c4c360()*-0.0128083);
}

double NNfunction_ss_sLsR::synapse0x2c453d0() {
   return (neuron0x2c4cd30()*-0.0302579);
}

double NNfunction_ss_sLsR::synapse0x2c45410() {
   return (neuron0x2c4d700()*0.38068);
}

double NNfunction_ss_sLsR::synapse0x2c45da0() {
   return (neuron0x2c4e0d0()*0.0279847);
}

double NNfunction_ss_sLsR::synapse0x2c45de0() {
   return (neuron0x2c4eaa0()*-0.0336577);
}

double NNfunction_ss_sLsR::synapse0x2c46770() {
   return (neuron0x2c44b30()*-0.978627);
}

double NNfunction_ss_sLsR::synapse0x2c467b0() {
   return (neuron0x2c51680()*0.108859);
}

double NNfunction_ss_sLsR::synapse0x2c47140() {
   return (neuron0x2c52050()*0.016269);
}

double NNfunction_ss_sLsR::synapse0x2c47180() {
   return (neuron0x2c52a20()*0.326028);
}

double NNfunction_ss_sLsR::synapse0x2c47b10() {
   return (neuron0x2c533f0()*-0.265176);
}

double NNfunction_ss_sLsR::synapse0x2c47b50() {
   return (neuron0x2c53dc0()*-0.136139);
}

double NNfunction_ss_sLsR::synapse0x2c40660() {
   return (neuron0x2c54790()*-0.00285985);
}

double NNfunction_ss_sLsR::synapse0x2c406a0() {
   return (neuron0x2c55160()*-1.30939);
}

double NNfunction_ss_sLsR::synapse0x2c49f10() {
   return (neuron0x2c55b30()*-0.331859);
}

double NNfunction_ss_sLsR::synapse0x2c49f50() {
   return (neuron0x2c56710()*-0.0445647);
}

double NNfunction_ss_sLsR::synapse0x2c4a8a0() {
   return (neuron0x2c570e0()*-0.00703904);
}

double NNfunction_ss_sLsR::synapse0x2c4a8e0() {
   return (neuron0x2c47f60()*0.024384);
}

double NNfunction_ss_sLsR::synapse0x2c4b270() {
   return (neuron0x2c48930()*0.0139067);
}

double NNfunction_ss_sLsR::synapse0x2c4b2b0() {
   return (neuron0x2c49300()*-0.67805);
}

double NNfunction_ss_sLsR::synapse0x2c4bc40() {
   return (neuron0x2c5b940()*-0.622806);
}

double NNfunction_ss_sLsR::synapse0x2c4bc80() {
   return (neuron0x2c5c1f0()*-0.0223102);
}

double NNfunction_ss_sLsR::synapse0x2c4c610() {
   return (neuron0x2c5cbc0()*0.0270563);
}

double NNfunction_ss_sLsR::synapse0x2c4c650() {
   return (neuron0x2c5d590()*0.005955);
}

double NNfunction_ss_sLsR::synapse0x2c4ed50() {
   return (neuron0x2c39510()*-2.85144);
}

double NNfunction_ss_sLsR::synapse0x2c4ed90() {
   return (neuron0x2c39e20()*-1.89758);
}

double NNfunction_ss_sLsR::synapse0x2c44310() {
   return (neuron0x2c3a900()*-0.0630902);
}

double NNfunction_ss_sLsR::synapse0x2c44350() {
   return (neuron0x29f4190()*1.97651);
}

double NNfunction_ss_sLsR::synapse0x2c51930() {
   return (neuron0x2c3b720()*0.107534);
}

double NNfunction_ss_sLsR::synapse0x2c51970() {
   return (neuron0x2c3c0f0()*2.23086);
}

double NNfunction_ss_sLsR::synapse0x2c52300() {
   return (neuron0x2c3cec0()*2.35962);
}

double NNfunction_ss_sLsR::synapse0x2c52340() {
   return (neuron0x2c3d890()*-1.47198);
}

double NNfunction_ss_sLsR::synapse0x2c52cd0() {
   return (neuron0x2c3e260()*-4.76244);
}

double NNfunction_ss_sLsR::synapse0x2c52d10() {
   return (neuron0x2c3ed40()*-0.000342268);
}

double NNfunction_ss_sLsR::synapse0x2c536a0() {
   return (neuron0x2c3f710()*-0.943246);
}

double NNfunction_ss_sLsR::synapse0x2c536e0() {
   return (neuron0x2c3c7f0()*2.44265);
}

double NNfunction_ss_sLsR::synapse0x2c54070() {
   return (neuron0x2c412c0()*0.059038);
}

double NNfunction_ss_sLsR::synapse0x2c540b0() {
   return (neuron0x2c41c90()*-0.989813);
}

double NNfunction_ss_sLsR::synapse0x2c54a40() {
   return (neuron0x2c42660()*1.81536);
}

double NNfunction_ss_sLsR::synapse0x2c54a80() {
   return (neuron0x2c43030()*-2.00847);
}

double NNfunction_ss_sLsR::synapse0x2c55410() {
   return (neuron0x2c44e40()*1.12921);
}

double NNfunction_ss_sLsR::synapse0x2c55450() {
   return (neuron0x2c45120()*-4.004);
}

double NNfunction_ss_sLsR::synapse0x2c55de0() {
   return (neuron0x2c45af0()*-2.57257);
}

double NNfunction_ss_sLsR::synapse0x2c55e20() {
   return (neuron0x2c464c0()*-2.26534);
}

double NNfunction_ss_sLsR::synapse0x2c569c0() {
   return (neuron0x2c46e90()*2.19405);
}

double NNfunction_ss_sLsR::synapse0x2c56a00() {
   return (neuron0x2c47860()*-2.81094);
}

double NNfunction_ss_sLsR::synapse0x2c57390() {
   return (neuron0x2c403b0()*-1.18417);
}

double NNfunction_ss_sLsR::synapse0x2c573d0() {
   return (neuron0x2c40d80()*1.26532);
}

double NNfunction_ss_sLsR::synapse0x2c48210() {
   return (neuron0x2c4a5f0()*-2.20461);
}

double NNfunction_ss_sLsR::synapse0x2c48250() {
   return (neuron0x2c4afc0()*2.59297);
}

double NNfunction_ss_sLsR::synapse0x2c48be0() {
   return (neuron0x2c4b990()*0.0976196);
}

double NNfunction_ss_sLsR::synapse0x2c48c20() {
   return (neuron0x2c4c360()*-2.9317);
}

double NNfunction_ss_sLsR::synapse0x2c495b0() {
   return (neuron0x2c4cd30()*1.80944);
}

double NNfunction_ss_sLsR::synapse0x2c495f0() {
   return (neuron0x2c4d700()*-2.20121);
}

double NNfunction_ss_sLsR::synapse0x2c5bad0() {
   return (neuron0x2c4e0d0()*2.29161);
}

double NNfunction_ss_sLsR::synapse0x2c5bb10() {
   return (neuron0x2c4eaa0()*1.85703);
}

double NNfunction_ss_sLsR::synapse0x2c5c4a0() {
   return (neuron0x2c44b30()*-2.42445);
}

double NNfunction_ss_sLsR::synapse0x2c5c4e0() {
   return (neuron0x2c51680()*4.90346);
}

double NNfunction_ss_sLsR::synapse0x2c5ce70() {
   return (neuron0x2c52050()*2.35471);
}

double NNfunction_ss_sLsR::synapse0x2c5ceb0() {
   return (neuron0x2c52a20()*0.488623);
}

double NNfunction_ss_sLsR::synapse0x2c5d840() {
   return (neuron0x2c533f0()*-0.298534);
}

double NNfunction_ss_sLsR::synapse0x2c5d880() {
   return (neuron0x2c53dc0()*-3.15911);
}

double NNfunction_ss_sLsR::synapse0x2c39730() {
   return (neuron0x2c54790()*-3.66115);
}

double NNfunction_ss_sLsR::synapse0x2c39770() {
   return (neuron0x2c55160()*-4.29008);
}

double NNfunction_ss_sLsR::synapse0x2c4cfe0() {
   return (neuron0x2c55b30()*4.39381);
}

double NNfunction_ss_sLsR::synapse0x2c4d020() {
   return (neuron0x2c56710()*-4.12127);
}

double NNfunction_ss_sLsR::synapse0x2c5df60() {
   return (neuron0x2c570e0()*2.78079);
}

double NNfunction_ss_sLsR::synapse0x2c5dfa0() {
   return (neuron0x2c47f60()*1.7655);
}

double NNfunction_ss_sLsR::synapse0x2c5dfe0() {
   return (neuron0x2c48930()*2.53236);
}

double NNfunction_ss_sLsR::synapse0x2c5e020() {
   return (neuron0x2c49300()*-1.75027);
}

double NNfunction_ss_sLsR::synapse0x2c64ed0() {
   return (neuron0x2c5b940()*2.50722);
}

double NNfunction_ss_sLsR::synapse0x2c64f10() {
   return (neuron0x2c5c1f0()*2.51342);
}

double NNfunction_ss_sLsR::synapse0x2c64f50() {
   return (neuron0x2c5cbc0()*-2.99688);
}

double NNfunction_ss_sLsR::synapse0x2c64f90() {
   return (neuron0x2c5d590()*2.40683);
}

double NNfunction_ss_sLsR::synapse0x2c65310() {
   return (neuron0x2c39510()*0.576592);
}

double NNfunction_ss_sLsR::synapse0x2c65350() {
   return (neuron0x2c39e20()*0.673628);
}

double NNfunction_ss_sLsR::synapse0x2c65390() {
   return (neuron0x2c3a900()*0.826029);
}

double NNfunction_ss_sLsR::synapse0x2c653d0() {
   return (neuron0x29f4190()*0.184251);
}

double NNfunction_ss_sLsR::synapse0x2c65410() {
   return (neuron0x2c3b720()*0.764628);
}

double NNfunction_ss_sLsR::synapse0x2c65450() {
   return (neuron0x2c3c0f0()*0.60798);
}

double NNfunction_ss_sLsR::synapse0x2c65490() {
   return (neuron0x2c3cec0()*0.226935);
}

double NNfunction_ss_sLsR::synapse0x2c654d0() {
   return (neuron0x2c3d890()*0.00794456);
}

double NNfunction_ss_sLsR::synapse0x2c65510() {
   return (neuron0x2c3e260()*0.585688);
}

double NNfunction_ss_sLsR::synapse0x2c65550() {
   return (neuron0x2c3ed40()*0.0893385);
}

double NNfunction_ss_sLsR::synapse0x2c65590() {
   return (neuron0x2c3f710()*0.202425);
}

double NNfunction_ss_sLsR::synapse0x2c655d0() {
   return (neuron0x2c3c7f0()*0.290911);
}

double NNfunction_ss_sLsR::synapse0x2c65610() {
   return (neuron0x2c412c0()*1.13075);
}

double NNfunction_ss_sLsR::synapse0x2c65650() {
   return (neuron0x2c41c90()*-0.197911);
}

double NNfunction_ss_sLsR::synapse0x2c65690() {
   return (neuron0x2c42660()*1.01302);
}

double NNfunction_ss_sLsR::synapse0x2c656d0() {
   return (neuron0x2c43030()*-0.125652);
}

double NNfunction_ss_sLsR::synapse0x2c65160() {
   return (neuron0x2c44e40()*0.840527);
}

double NNfunction_ss_sLsR::synapse0x2c651a0() {
   return (neuron0x2c45120()*0.493006);
}

double NNfunction_ss_sLsR::synapse0x2c65820() {
   return (neuron0x2c45af0()*1.06115);
}

double NNfunction_ss_sLsR::synapse0x2c65860() {
   return (neuron0x2c464c0()*0.254515);
}

double NNfunction_ss_sLsR::synapse0x2c658a0() {
   return (neuron0x2c46e90()*0.632604);
}

double NNfunction_ss_sLsR::synapse0x2c658e0() {
   return (neuron0x2c47860()*-0.0125453);
}

double NNfunction_ss_sLsR::synapse0x2c65920() {
   return (neuron0x2c403b0()*-0.39605);
}

double NNfunction_ss_sLsR::synapse0x2c65960() {
   return (neuron0x2c40d80()*0.900423);
}

double NNfunction_ss_sLsR::synapse0x2c659a0() {
   return (neuron0x2c4a5f0()*0.528301);
}

double NNfunction_ss_sLsR::synapse0x2c659e0() {
   return (neuron0x2c4afc0()*0.490288);
}

double NNfunction_ss_sLsR::synapse0x2c65a20() {
   return (neuron0x2c4b990()*1.06157);
}

double NNfunction_ss_sLsR::synapse0x2c65a60() {
   return (neuron0x2c4c360()*-0.54186);
}

double NNfunction_ss_sLsR::synapse0x2c65aa0() {
   return (neuron0x2c4cd30()*0.3361);
}

double NNfunction_ss_sLsR::synapse0x2c65ae0() {
   return (neuron0x2c4d700()*-1.02417);
}

double NNfunction_ss_sLsR::synapse0x2c65b20() {
   return (neuron0x2c4e0d0()*1.20985);
}

double NNfunction_ss_sLsR::synapse0x2c65b60() {
   return (neuron0x2c4eaa0()*0.336609);
}

double NNfunction_ss_sLsR::synapse0x2c65710() {
   return (neuron0x2c44b30()*0.244469);
}

double NNfunction_ss_sLsR::synapse0x2c65750() {
   return (neuron0x2c51680()*0.294362);
}

double NNfunction_ss_sLsR::synapse0x2c65790() {
   return (neuron0x2c52050()*0.724024);
}

double NNfunction_ss_sLsR::synapse0x2c657d0() {
   return (neuron0x2c52a20()*-0.00184681);
}

double NNfunction_ss_sLsR::synapse0x2c65db0() {
   return (neuron0x2c533f0()*0.393451);
}

double NNfunction_ss_sLsR::synapse0x2c65df0() {
   return (neuron0x2c53dc0()*-0.191031);
}

double NNfunction_ss_sLsR::synapse0x2c65e30() {
   return (neuron0x2c54790()*0.520624);
}

double NNfunction_ss_sLsR::synapse0x2c65e70() {
   return (neuron0x2c55160()*0.228018);
}

double NNfunction_ss_sLsR::synapse0x2c65eb0() {
   return (neuron0x2c55b30()*0.297952);
}

double NNfunction_ss_sLsR::synapse0x2c65ef0() {
   return (neuron0x2c56710()*0.334263);
}

double NNfunction_ss_sLsR::synapse0x2c65f30() {
   return (neuron0x2c570e0()*0.378254);
}

double NNfunction_ss_sLsR::synapse0x2c65f70() {
   return (neuron0x2c47f60()*0.667957);
}

double NNfunction_ss_sLsR::synapse0x2c65fb0() {
   return (neuron0x2c48930()*0.334813);
}

double NNfunction_ss_sLsR::synapse0x2c65ff0() {
   return (neuron0x2c49300()*0.297115);
}

double NNfunction_ss_sLsR::synapse0x2c66030() {
   return (neuron0x2c5b940()*-0.0718964);
}

double NNfunction_ss_sLsR::synapse0x2c66070() {
   return (neuron0x2c5c1f0()*0.637162);
}

double NNfunction_ss_sLsR::synapse0x2c660b0() {
   return (neuron0x2c5cbc0()*-0.0315361);
}

double NNfunction_ss_sLsR::synapse0x2c660f0() {
   return (neuron0x2c5d590()*0.36118);
}

double NNfunction_ss_sLsR::synapse0x2c66470() {
   return (neuron0x2c39510()*1.47106);
}

double NNfunction_ss_sLsR::synapse0x2c664b0() {
   return (neuron0x2c39e20()*0.164961);
}

double NNfunction_ss_sLsR::synapse0x2c664f0() {
   return (neuron0x2c3a900()*0.540527);
}

double NNfunction_ss_sLsR::synapse0x2c66530() {
   return (neuron0x29f4190()*-0.021514);
}

double NNfunction_ss_sLsR::synapse0x2c66570() {
   return (neuron0x2c3b720()*2.60916);
}

double NNfunction_ss_sLsR::synapse0x2c665b0() {
   return (neuron0x2c3c0f0()*-0.0161729);
}

double NNfunction_ss_sLsR::synapse0x2c665f0() {
   return (neuron0x2c3cec0()*-0.0299548);
}

double NNfunction_ss_sLsR::synapse0x2c66630() {
   return (neuron0x2c3d890()*0.0198944);
}

double NNfunction_ss_sLsR::synapse0x2c66670() {
   return (neuron0x2c3e260()*0.196139);
}

double NNfunction_ss_sLsR::synapse0x2c666b0() {
   return (neuron0x2c3ed40()*0.145128);
}

double NNfunction_ss_sLsR::synapse0x2c666f0() {
   return (neuron0x2c3f710()*-0.330173);
}

double NNfunction_ss_sLsR::synapse0x2c66730() {
   return (neuron0x2c3c7f0()*-0.0264558);
}

double NNfunction_ss_sLsR::synapse0x2c66770() {
   return (neuron0x2c412c0()*-0.00861247);
}

double NNfunction_ss_sLsR::synapse0x2c667b0() {
   return (neuron0x2c41c90()*-0.674577);
}

double NNfunction_ss_sLsR::synapse0x2c667f0() {
   return (neuron0x2c42660()*-0.00870635);
}

double NNfunction_ss_sLsR::synapse0x2c66830() {
   return (neuron0x2c43030()*0.0155563);
}

double NNfunction_ss_sLsR::synapse0x2c662c0() {
   return (neuron0x2c44e40()*1.72989);
}

double NNfunction_ss_sLsR::synapse0x2c66300() {
   return (neuron0x2c45120()*0.0675715);
}

double NNfunction_ss_sLsR::synapse0x2c66980() {
   return (neuron0x2c45af0()*-0.352954);
}

double NNfunction_ss_sLsR::synapse0x2c669c0() {
   return (neuron0x2c464c0()*0.00896177);
}

double NNfunction_ss_sLsR::synapse0x2c66a00() {
   return (neuron0x2c46e90()*-0.00147305);
}

double NNfunction_ss_sLsR::synapse0x2c66a40() {
   return (neuron0x2c47860()*0.0287901);
}

double NNfunction_ss_sLsR::synapse0x2c66a80() {
   return (neuron0x2c403b0()*-0.37569);
}

double NNfunction_ss_sLsR::synapse0x2c66ac0() {
   return (neuron0x2c40d80()*0.0252437);
}

double NNfunction_ss_sLsR::synapse0x2c66b00() {
   return (neuron0x2c4a5f0()*0.00136729);
}

double NNfunction_ss_sLsR::synapse0x2c66b40() {
   return (neuron0x2c4afc0()*-0.00937282);
}

double NNfunction_ss_sLsR::synapse0x2c66b80() {
   return (neuron0x2c4b990()*1.97209);
}

double NNfunction_ss_sLsR::synapse0x2c66bc0() {
   return (neuron0x2c4c360()*0.0210529);
}

double NNfunction_ss_sLsR::synapse0x2c66c00() {
   return (neuron0x2c4cd30()*-0.00328968);
}

double NNfunction_ss_sLsR::synapse0x2c66c40() {
   return (neuron0x2c4d700()*-0.153643);
}

double NNfunction_ss_sLsR::synapse0x2c66c80() {
   return (neuron0x2c4e0d0()*-0.0237131);
}

double NNfunction_ss_sLsR::synapse0x2c66cc0() {
   return (neuron0x2c4eaa0()*0.00450138);
}

double NNfunction_ss_sLsR::synapse0x2c66870() {
   return (neuron0x2c44b30()*-0.985973);
}

double NNfunction_ss_sLsR::synapse0x2c668b0() {
   return (neuron0x2c51680()*-0.104134);
}

double NNfunction_ss_sLsR::synapse0x2c668f0() {
   return (neuron0x2c52050()*-0.00955516);
}

double NNfunction_ss_sLsR::synapse0x2c66930() {
   return (neuron0x2c52a20()*-2.08796);
}

double NNfunction_ss_sLsR::synapse0x2c66f10() {
   return (neuron0x2c533f0()*-1.06316);
}

double NNfunction_ss_sLsR::synapse0x2c66f50() {
   return (neuron0x2c53dc0()*0.0272225);
}

double NNfunction_ss_sLsR::synapse0x2c66f90() {
   return (neuron0x2c54790()*0.0169186);
}

double NNfunction_ss_sLsR::synapse0x2c66fd0() {
   return (neuron0x2c55160()*-0.66356);
}

double NNfunction_ss_sLsR::synapse0x2c67010() {
   return (neuron0x2c55b30()*0.0190143);
}

double NNfunction_ss_sLsR::synapse0x2c67050() {
   return (neuron0x2c56710()*0.0374994);
}

double NNfunction_ss_sLsR::synapse0x2c67090() {
   return (neuron0x2c570e0()*-0.0162114);
}

double NNfunction_ss_sLsR::synapse0x2c670d0() {
   return (neuron0x2c47f60()*-0.022509);
}

double NNfunction_ss_sLsR::synapse0x2c67110() {
   return (neuron0x2c48930()*-0.0258225);
}

double NNfunction_ss_sLsR::synapse0x2c67150() {
   return (neuron0x2c49300()*-0.70126);
}

double NNfunction_ss_sLsR::synapse0x2c67190() {
   return (neuron0x2c5b940()*0.27995);
}

double NNfunction_ss_sLsR::synapse0x2c671d0() {
   return (neuron0x2c5c1f0()*-0.0214803);
}

double NNfunction_ss_sLsR::synapse0x2c67210() {
   return (neuron0x2c5cbc0()*0.00813833);
}

double NNfunction_ss_sLsR::synapse0x2c67250() {
   return (neuron0x2c5d590()*-0.00238337);
}

double NNfunction_ss_sLsR::synapse0x2c675d0() {
   return (neuron0x2c39510()*-0.0340812);
}

double NNfunction_ss_sLsR::synapse0x2c67610() {
   return (neuron0x2c39e20()*-1.51014);
}

double NNfunction_ss_sLsR::synapse0x2c67650() {
   return (neuron0x2c3a900()*-0.197471);
}

double NNfunction_ss_sLsR::synapse0x2c67690() {
   return (neuron0x29f4190()*0.0494795);
}

double NNfunction_ss_sLsR::synapse0x2c676d0() {
   return (neuron0x2c3b720()*-1.83273);
}

double NNfunction_ss_sLsR::synapse0x2c67710() {
   return (neuron0x2c3c0f0()*0.0501411);
}

double NNfunction_ss_sLsR::synapse0x2c67750() {
   return (neuron0x2c3cec0()*-0.120785);
}

double NNfunction_ss_sLsR::synapse0x2c67790() {
   return (neuron0x2c3d890()*-0.0485472);
}

double NNfunction_ss_sLsR::synapse0x2c677d0() {
   return (neuron0x2c3e260()*0.364213);
}

double NNfunction_ss_sLsR::synapse0x2c67810() {
   return (neuron0x2c3ed40()*1.92867);
}

double NNfunction_ss_sLsR::synapse0x2c67850() {
   return (neuron0x2c3f710()*1.34988);
}

double NNfunction_ss_sLsR::synapse0x2c67890() {
   return (neuron0x2c3c7f0()*0.0257966);
}

double NNfunction_ss_sLsR::synapse0x2c678d0() {
   return (neuron0x2c412c0()*-0.294141);
}

double NNfunction_ss_sLsR::synapse0x2c67910() {
   return (neuron0x2c41c90()*-1.235);
}

double NNfunction_ss_sLsR::synapse0x2c67950() {
   return (neuron0x2c42660()*0.000179663);
}

double NNfunction_ss_sLsR::synapse0x2c67990() {
   return (neuron0x2c43030()*0.0312255);
}

double NNfunction_ss_sLsR::synapse0x2c67420() {
   return (neuron0x2c44e40()*0.965992);
}

double NNfunction_ss_sLsR::synapse0x2c67460() {
   return (neuron0x2c45120()*0.535661);
}

double NNfunction_ss_sLsR::synapse0x2c67ae0() {
   return (neuron0x2c45af0()*-0.192331);
}

double NNfunction_ss_sLsR::synapse0x2c67b20() {
   return (neuron0x2c464c0()*-0.0453845);
}

double NNfunction_ss_sLsR::synapse0x2c67b60() {
   return (neuron0x2c46e90()*0.0122309);
}

double NNfunction_ss_sLsR::synapse0x2c67ba0() {
   return (neuron0x2c47860()*-0.00914829);
}

double NNfunction_ss_sLsR::synapse0x2c67be0() {
   return (neuron0x2c403b0()*-3.12285);
}

double NNfunction_ss_sLsR::synapse0x2c67c20() {
   return (neuron0x2c40d80()*0.10802);
}

double NNfunction_ss_sLsR::synapse0x2c67c60() {
   return (neuron0x2c4a5f0()*-0.0742113);
}

double NNfunction_ss_sLsR::synapse0x2c67ca0() {
   return (neuron0x2c4afc0()*0.0156247);
}

double NNfunction_ss_sLsR::synapse0x2c67ce0() {
   return (neuron0x2c4b990()*0.353605);
}

double NNfunction_ss_sLsR::synapse0x2c67d20() {
   return (neuron0x2c4c360()*-0.0154988);
}

double NNfunction_ss_sLsR::synapse0x2c67d60() {
   return (neuron0x2c4cd30()*0.0813361);
}

double NNfunction_ss_sLsR::synapse0x2c67da0() {
   return (neuron0x2c4d700()*-0.498131);
}

double NNfunction_ss_sLsR::synapse0x2c67de0() {
   return (neuron0x2c4e0d0()*-0.0265695);
}

double NNfunction_ss_sLsR::synapse0x2c67e20() {
   return (neuron0x2c4eaa0()*0.0654087);
}

double NNfunction_ss_sLsR::synapse0x2c679d0() {
   return (neuron0x2c44b30()*-0.22578);
}

double NNfunction_ss_sLsR::synapse0x2c67a10() {
   return (neuron0x2c51680()*-0.0571498);
}

double NNfunction_ss_sLsR::synapse0x2c67a50() {
   return (neuron0x2c52050()*-0.00826776);
}

double NNfunction_ss_sLsR::synapse0x2c67a90() {
   return (neuron0x2c52a20()*0.213634);
}

double NNfunction_ss_sLsR::synapse0x2c68070() {
   return (neuron0x2c533f0()*-1.0517);
}

double NNfunction_ss_sLsR::synapse0x2c680b0() {
   return (neuron0x2c53dc0()*0.16299);
}

double NNfunction_ss_sLsR::synapse0x2c680f0() {
   return (neuron0x2c54790()*-0.0529842);
}

double NNfunction_ss_sLsR::synapse0x2c68130() {
   return (neuron0x2c55160()*0.117015);
}

double NNfunction_ss_sLsR::synapse0x2c68170() {
   return (neuron0x2c55b30()*0.704005);
}

double NNfunction_ss_sLsR::synapse0x2c681b0() {
   return (neuron0x2c56710()*-0.0209173);
}

double NNfunction_ss_sLsR::synapse0x2c681f0() {
   return (neuron0x2c570e0()*0.0752159);
}

double NNfunction_ss_sLsR::synapse0x2c68230() {
   return (neuron0x2c47f60()*0.0103515);
}

double NNfunction_ss_sLsR::synapse0x2c68270() {
   return (neuron0x2c48930()*0.0461499);
}

double NNfunction_ss_sLsR::synapse0x2c682b0() {
   return (neuron0x2c49300()*0.195759);
}

double NNfunction_ss_sLsR::synapse0x2c682f0() {
   return (neuron0x2c5b940()*1.51432);
}

double NNfunction_ss_sLsR::synapse0x2c68330() {
   return (neuron0x2c5c1f0()*0.0621882);
}

double NNfunction_ss_sLsR::synapse0x2c68370() {
   return (neuron0x2c5cbc0()*-0.103597);
}

double NNfunction_ss_sLsR::synapse0x2c683b0() {
   return (neuron0x2c5d590()*-0.0161993);
}

double NNfunction_ss_sLsR::synapse0x2c394d0() {
   return (neuron0x2c64790()*-7.59349);
}

double NNfunction_ss_sLsR::synapse0x2c68610() {
   return (neuron0x2c64b30()*-7.19489);
}

double NNfunction_ss_sLsR::synapse0x2c68650() {
   return (neuron0x2c64fd0()*5.64177);
}

double NNfunction_ss_sLsR::synapse0x2c68690() {
   return (neuron0x2c66130()*-6.66931);
}

double NNfunction_ss_sLsR::synapse0x2c686d0() {
   return (neuron0x2c67290()*-5.16323);
}

