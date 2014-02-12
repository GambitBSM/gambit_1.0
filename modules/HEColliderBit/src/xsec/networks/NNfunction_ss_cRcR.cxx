#include "NNfunction_ss_cRcR.h"
#include <cmath>

double NNfunction_ss_cRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4986)/15.3503;
   input1 = (in1 - 7.06608)/1171.1;
   input2 = (in2 - 644.491)/620.605;
   input3 = (in3 - -60.3718)/832.488;
   input4 = (in4 - 1087.48)/974.774;
   input5 = (in5 - 909.047)/961.395;
   input6 = (in6 - 925.117)/970.934;
   input7 = (in7 - 934.421)/952.802;
   input8 = (in8 - 902.925)/950.437;
   input9 = (in9 - 887.419)/930.636;
   input10 = (in10 - 989.77)/939.818;
   input11 = (in11 - 711.105)/857.128;
   input12 = (in12 - 700.82)/851.496;
   input13 = (in13 - 501.432)/518.028;
   input14 = (in14 - 729.753)/838.774;
   input15 = (in15 - 192.908)/142.742;
   input16 = (in16 - 534.709)/564.861;
   input17 = (in17 - 739.135)/873.341;
   input18 = (in18 - 727.335)/874.182;
   input19 = (in19 - 785.115)/866.597;
   input20 = (in20 - -2.68725)/499.268;
   input21 = (in21 - 5.98673)/1156.4;
   input22 = (in22 - 4.05962)/1207.83;
   input23 = (in23 - -189.364)/608.223;
   switch(index) {
     case 0:
         return neuron0x1dd74b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cRcR::Value(int index, double* input) {
   input0 = (input[0] - 23.4986)/15.3503;
   input1 = (input[1] - 7.06608)/1171.1;
   input2 = (input[2] - 644.491)/620.605;
   input3 = (input[3] - -60.3718)/832.488;
   input4 = (input[4] - 1087.48)/974.774;
   input5 = (input[5] - 909.047)/961.395;
   input6 = (input[6] - 925.117)/970.934;
   input7 = (input[7] - 934.421)/952.802;
   input8 = (input[8] - 902.925)/950.437;
   input9 = (input[9] - 887.419)/930.636;
   input10 = (input[10] - 989.77)/939.818;
   input11 = (input[11] - 711.105)/857.128;
   input12 = (input[12] - 700.82)/851.496;
   input13 = (input[13] - 501.432)/518.028;
   input14 = (input[14] - 729.753)/838.774;
   input15 = (input[15] - 192.908)/142.742;
   input16 = (input[16] - 534.709)/564.861;
   input17 = (input[17] - 739.135)/873.341;
   input18 = (input[18] - 727.335)/874.182;
   input19 = (input[19] - 785.115)/866.597;
   input20 = (input[20] - -2.68725)/499.268;
   input21 = (input[21] - 5.98673)/1156.4;
   input22 = (input[22] - 4.05962)/1207.83;
   input23 = (input[23] - -189.364)/608.223;
   switch(index) {
     case 0:
         return neuron0x1dd74b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cRcR::neuron0x1da3570() {
   return input0;
}

double NNfunction_ss_cRcR::neuron0x1da38b0() {
   return input1;
}

double NNfunction_ss_cRcR::neuron0x1da3bf0() {
   return input2;
}

double NNfunction_ss_cRcR::neuron0x1da3f30() {
   return input3;
}

double NNfunction_ss_cRcR::neuron0x1da4270() {
   return input4;
}

double NNfunction_ss_cRcR::neuron0x1da45b0() {
   return input5;
}

double NNfunction_ss_cRcR::neuron0x1da48f0() {
   return input6;
}

double NNfunction_ss_cRcR::neuron0x1da4c30() {
   return input7;
}

double NNfunction_ss_cRcR::neuron0x1da4f70() {
   return input8;
}

double NNfunction_ss_cRcR::neuron0x1da52b0() {
   return input9;
}

double NNfunction_ss_cRcR::neuron0x1da55f0() {
   return input10;
}

double NNfunction_ss_cRcR::neuron0x1da5930() {
   return input11;
}

double NNfunction_ss_cRcR::neuron0x1da5c70() {
   return input12;
}

double NNfunction_ss_cRcR::neuron0x1da5fb0() {
   return input13;
}

double NNfunction_ss_cRcR::neuron0x1da62f0() {
   return input14;
}

double NNfunction_ss_cRcR::neuron0x1da6630() {
   return input15;
}

double NNfunction_ss_cRcR::neuron0x1da6970() {
   return input16;
}

double NNfunction_ss_cRcR::neuron0x1da6ed0() {
   return input17;
}

double NNfunction_ss_cRcR::neuron0x1da70f0() {
   return input18;
}

double NNfunction_ss_cRcR::neuron0x1da7430() {
   return input19;
}

double NNfunction_ss_cRcR::neuron0x1da7770() {
   return input20;
}

double NNfunction_ss_cRcR::neuron0x1da7ab0() {
   return input21;
}

double NNfunction_ss_cRcR::neuron0x1da7df0() {
   return input22;
}

double NNfunction_ss_cRcR::neuron0x1da8130() {
   return input23;
}

double NNfunction_ss_cRcR::input0x1da85d0() {
   double input = 1.14957;
   input += synapse0x1b633e0();
   input += synapse0x1da3430();
   input += synapse0x1da3470();
   input += synapse0x1da8880();
   input += synapse0x1da88c0();
   input += synapse0x1da8900();
   input += synapse0x1da8940();
   input += synapse0x1da8980();
   input += synapse0x1da89c0();
   input += synapse0x1da8a00();
   input += synapse0x1da8a40();
   input += synapse0x1da8a80();
   input += synapse0x1da8ac0();
   input += synapse0x1da8b00();
   input += synapse0x1da8b40();
   input += synapse0x1da8b80();
   input += synapse0x1da33a0();
   input += synapse0x1da33e0();
   input += synapse0x1b54c80();
   input += synapse0x1b54cc0();
   input += synapse0x1da8de0();
   input += synapse0x1da8e20();
   input += synapse0x1da8e60();
   input += synapse0x1da8ea0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1da85d0() {
   double input = input0x1da85d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1da8ee0() {
   double input = 0.0487393;
   input += synapse0x1da9220();
   input += synapse0x1da9260();
   input += synapse0x1da92a0();
   input += synapse0x1da92e0();
   input += synapse0x1da9320();
   input += synapse0x1da9360();
   input += synapse0x1da93a0();
   input += synapse0x1da93e0();
   input += synapse0x1da9420();
   input += synapse0x1da8cd0();
   input += synapse0x1da8d10();
   input += synapse0x1da8d50();
   input += synapse0x1da8d90();
   input += synapse0x1da9670();
   input += synapse0x1da96b0();
   input += synapse0x1da96f0();
   input += synapse0x1da9070();
   input += synapse0x1da90b0();
   input += synapse0x1da9840();
   input += synapse0x1da9880();
   input += synapse0x1da98c0();
   input += synapse0x1da9900();
   input += synapse0x1da9940();
   input += synapse0x1da9980();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1da8ee0() {
   double input = input0x1da8ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1da99c0() {
   double input = 1.83912;
   input += synapse0x1da9d00();
   input += synapse0x1da9d40();
   input += synapse0x1da9d80();
   input += synapse0x1da9dc0();
   input += synapse0x1da9e00();
   input += synapse0x1da9e40();
   input += synapse0x1da9e80();
   input += synapse0x1da9ec0();
   input += synapse0x1da9f00();
   input += synapse0x1da9f40();
   input += synapse0x1da9f80();
   input += synapse0x1da9fc0();
   input += synapse0x1daa000();
   input += synapse0x1daa040();
   input += synapse0x1daa080();
   input += synapse0x1daa0c0();
   input += synapse0x1da9b50();
   input += synapse0x1da9b90();
   input += synapse0x1b62ad0();
   input += synapse0x1b62b10();
   input += synapse0x1d92600();
   input += synapse0x1d92640();
   input += synapse0x1d92680();
   input += synapse0x1da34b0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1da99c0() {
   double input = input0x1da99c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1b63250() {
   double input = 0.0022481;
   input += synapse0x1da9610();
   input += synapse0x1da34f0();
   input += synapse0x1da3530();
   input += synapse0x1daa210();
   input += synapse0x1daa250();
   input += synapse0x1daa290();
   input += synapse0x1daa2d0();
   input += synapse0x1daa310();
   input += synapse0x1daa350();
   input += synapse0x1daa390();
   input += synapse0x1daa3d0();
   input += synapse0x1daa410();
   input += synapse0x1daa450();
   input += synapse0x1daa490();
   input += synapse0x1daa4d0();
   input += synapse0x1daa510();
   input += synapse0x1da9460();
   input += synapse0x1da94a0();
   input += synapse0x1daa660();
   input += synapse0x1daa6a0();
   input += synapse0x1daa6e0();
   input += synapse0x1daa720();
   input += synapse0x1daa760();
   input += synapse0x1daa7a0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1b63250() {
   double input = input0x1b63250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1daa7e0() {
   double input = -1.69767;
   input += synapse0x1daab20();
   input += synapse0x1daab60();
   input += synapse0x1daaba0();
   input += synapse0x1daabe0();
   input += synapse0x1daac20();
   input += synapse0x1daac60();
   input += synapse0x1daaca0();
   input += synapse0x1daace0();
   input += synapse0x1daad20();
   input += synapse0x1daad60();
   input += synapse0x1daada0();
   input += synapse0x1daade0();
   input += synapse0x1daae20();
   input += synapse0x1daae60();
   input += synapse0x1daaea0();
   input += synapse0x1daaee0();
   input += synapse0x1daa970();
   input += synapse0x1daa9b0();
   input += synapse0x1dab030();
   input += synapse0x1dab070();
   input += synapse0x1dab0b0();
   input += synapse0x1dab0f0();
   input += synapse0x1dab130();
   input += synapse0x1dab170();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1daa7e0() {
   double input = input0x1daa7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dab1b0() {
   double input = 1.42903;
   input += synapse0x1dab4f0();
   input += synapse0x1dab530();
   input += synapse0x1dab570();
   input += synapse0x1dab5b0();
   input += synapse0x1dab5f0();
   input += synapse0x1dab630();
   input += synapse0x1dab670();
   input += synapse0x1dab6b0();
   input += synapse0x1dab6f0();
   input += synapse0x1b62e40();
   input += synapse0x1b62e80();
   input += synapse0x1b62ec0();
   input += synapse0x1b62f00();
   input += synapse0x1b62f40();
   input += synapse0x1b62f80();
   input += synapse0x1b62fc0();
   input += synapse0x1dab340();
   input += synapse0x1dab380();
   input += synapse0x1b63110();
   input += synapse0x1b63150();
   input += synapse0x1b63190();
   input += synapse0x1b631d0();
   input += synapse0x1b63210();
   input += synapse0x1dabf40();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dab1b0() {
   double input = input0x1dab1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dabf80() {
   double input = 2.20654;
   input += synapse0x1dac2c0();
   input += synapse0x1dac300();
   input += synapse0x1dac340();
   input += synapse0x1dac380();
   input += synapse0x1dac3c0();
   input += synapse0x1dac400();
   input += synapse0x1dac440();
   input += synapse0x1dac480();
   input += synapse0x1dac4c0();
   input += synapse0x1dac500();
   input += synapse0x1dac540();
   input += synapse0x1dac580();
   input += synapse0x1dac5c0();
   input += synapse0x1dac600();
   input += synapse0x1dac640();
   input += synapse0x1dac680();
   input += synapse0x1dac110();
   input += synapse0x1dac150();
   input += synapse0x1dac7d0();
   input += synapse0x1dac810();
   input += synapse0x1dac850();
   input += synapse0x1dac890();
   input += synapse0x1dac8d0();
   input += synapse0x1dac910();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dabf80() {
   double input = input0x1dabf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dac950() {
   double input = 1.15695;
   input += synapse0x1dacc90();
   input += synapse0x1daccd0();
   input += synapse0x1dacd10();
   input += synapse0x1dacd50();
   input += synapse0x1dacd90();
   input += synapse0x1dacdd0();
   input += synapse0x1dace10();
   input += synapse0x1dace50();
   input += synapse0x1dace90();
   input += synapse0x1daced0();
   input += synapse0x1dacf10();
   input += synapse0x1dacf50();
   input += synapse0x1dacf90();
   input += synapse0x1dacfd0();
   input += synapse0x1dad010();
   input += synapse0x1dad050();
   input += synapse0x1dacae0();
   input += synapse0x1dacb20();
   input += synapse0x1dad1a0();
   input += synapse0x1dad1e0();
   input += synapse0x1dad220();
   input += synapse0x1dad260();
   input += synapse0x1dad2a0();
   input += synapse0x1dad2e0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dac950() {
   double input = input0x1dac950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dad320() {
   double input = -0.868744;
   input += synapse0x1da6dc0();
   input += synapse0x1da6e00();
   input += synapse0x1da6e40();
   input += synapse0x1da6e80();
   input += synapse0x1dad870();
   input += synapse0x1dad8b0();
   input += synapse0x1dad8f0();
   input += synapse0x1dad930();
   input += synapse0x1dad970();
   input += synapse0x1dad9b0();
   input += synapse0x1dad9f0();
   input += synapse0x1dada30();
   input += synapse0x1dada70();
   input += synapse0x1dadab0();
   input += synapse0x1dadaf0();
   input += synapse0x1dadb30();
   input += synapse0x1dad4b0();
   input += synapse0x1dad4f0();
   input += synapse0x1dadc80();
   input += synapse0x1dadcc0();
   input += synapse0x1dadd00();
   input += synapse0x1dadd40();
   input += synapse0x1dadd80();
   input += synapse0x1daddc0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dad320() {
   double input = input0x1dad320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dade00() {
   double input = 0.459187;
   input += synapse0x1dae140();
   input += synapse0x1dae180();
   input += synapse0x1dae1c0();
   input += synapse0x1dae200();
   input += synapse0x1dae240();
   input += synapse0x1dae280();
   input += synapse0x1dae2c0();
   input += synapse0x1dae300();
   input += synapse0x1dae340();
   input += synapse0x1dae380();
   input += synapse0x1dae3c0();
   input += synapse0x1dae400();
   input += synapse0x1dae440();
   input += synapse0x1dae480();
   input += synapse0x1dae4c0();
   input += synapse0x1dae500();
   input += synapse0x1dadf90();
   input += synapse0x1dadfd0();
   input += synapse0x1dae650();
   input += synapse0x1dae690();
   input += synapse0x1dae6d0();
   input += synapse0x1dae710();
   input += synapse0x1dae750();
   input += synapse0x1dae790();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dade00() {
   double input = input0x1dade00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dae7d0() {
   double input = -1.31068;
   input += synapse0x1daeb10();
   input += synapse0x1daeb50();
   input += synapse0x1daeb90();
   input += synapse0x1daebd0();
   input += synapse0x1daec10();
   input += synapse0x1daec50();
   input += synapse0x1daec90();
   input += synapse0x1daecd0();
   input += synapse0x1daed10();
   input += synapse0x1daed50();
   input += synapse0x1daed90();
   input += synapse0x1daedd0();
   input += synapse0x1daee10();
   input += synapse0x1daee50();
   input += synapse0x1daee90();
   input += synapse0x1daeed0();
   input += synapse0x1dae960();
   input += synapse0x1dae9a0();
   input += synapse0x1dab730();
   input += synapse0x1dab770();
   input += synapse0x1dab7b0();
   input += synapse0x1dab7f0();
   input += synapse0x1dab830();
   input += synapse0x1dab870();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dae7d0() {
   double input = input0x1dae7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dab8b0() {
   double input = 1.58594;
   input += synapse0x1dabbf0();
   input += synapse0x1dabc30();
   input += synapse0x1dabc70();
   input += synapse0x1dabcb0();
   input += synapse0x1dabcf0();
   input += synapse0x1dabd30();
   input += synapse0x1dabd70();
   input += synapse0x1dabdb0();
   input += synapse0x1dabdf0();
   input += synapse0x1dabe30();
   input += synapse0x1dabe70();
   input += synapse0x1dabeb0();
   input += synapse0x1dabef0();
   input += synapse0x1db0030();
   input += synapse0x1db0070();
   input += synapse0x1db00b0();
   input += synapse0x1daba40();
   input += synapse0x1daba80();
   input += synapse0x1db0200();
   input += synapse0x1db0240();
   input += synapse0x1db0280();
   input += synapse0x1db02c0();
   input += synapse0x1db0300();
   input += synapse0x1db0340();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dab8b0() {
   double input = input0x1dab8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1db0380() {
   double input = 0.450704;
   input += synapse0x1db06c0();
   input += synapse0x1db0700();
   input += synapse0x1db0740();
   input += synapse0x1db0780();
   input += synapse0x1db07c0();
   input += synapse0x1db0800();
   input += synapse0x1db0840();
   input += synapse0x1db0880();
   input += synapse0x1db08c0();
   input += synapse0x1db0900();
   input += synapse0x1db0940();
   input += synapse0x1db0980();
   input += synapse0x1db09c0();
   input += synapse0x1db0a00();
   input += synapse0x1db0a40();
   input += synapse0x1db0a80();
   input += synapse0x1db0510();
   input += synapse0x1db0550();
   input += synapse0x1db0bd0();
   input += synapse0x1db0c10();
   input += synapse0x1db0c50();
   input += synapse0x1db0c90();
   input += synapse0x1db0cd0();
   input += synapse0x1db0d10();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1db0380() {
   double input = input0x1db0380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1db0d50() {
   double input = 0.190454;
   input += synapse0x1db1090();
   input += synapse0x1db10d0();
   input += synapse0x1db1110();
   input += synapse0x1db1150();
   input += synapse0x1db1190();
   input += synapse0x1db11d0();
   input += synapse0x1db1210();
   input += synapse0x1db1250();
   input += synapse0x1db1290();
   input += synapse0x1db12d0();
   input += synapse0x1db1310();
   input += synapse0x1db1350();
   input += synapse0x1db1390();
   input += synapse0x1db13d0();
   input += synapse0x1db1410();
   input += synapse0x1db1450();
   input += synapse0x1db0ee0();
   input += synapse0x1db0f20();
   input += synapse0x1db15a0();
   input += synapse0x1db15e0();
   input += synapse0x1db1620();
   input += synapse0x1db1660();
   input += synapse0x1db16a0();
   input += synapse0x1db16e0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1db0d50() {
   double input = input0x1db0d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1db1720() {
   double input = -1.1613;
   input += synapse0x1db1a60();
   input += synapse0x1db1aa0();
   input += synapse0x1db1ae0();
   input += synapse0x1db1b20();
   input += synapse0x1db1b60();
   input += synapse0x1db1ba0();
   input += synapse0x1db1be0();
   input += synapse0x1db1c20();
   input += synapse0x1db1c60();
   input += synapse0x1db1ca0();
   input += synapse0x1db1ce0();
   input += synapse0x1db1d20();
   input += synapse0x1db1d60();
   input += synapse0x1db1da0();
   input += synapse0x1db1de0();
   input += synapse0x1db1e20();
   input += synapse0x1db18b0();
   input += synapse0x1db18f0();
   input += synapse0x1db1f70();
   input += synapse0x1db1fb0();
   input += synapse0x1db1ff0();
   input += synapse0x1db2030();
   input += synapse0x1db2070();
   input += synapse0x1db20b0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1db1720() {
   double input = input0x1db1720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1db20f0() {
   double input = 5.41837;
   input += synapse0x1db2430();
   input += synapse0x1da3790();
   input += synapse0x1da37d0();
   input += synapse0x1da3ad0();
   input += synapse0x1da3b10();
   input += synapse0x1da3e10();
   input += synapse0x1da3e50();
   input += synapse0x1da4150();
   input += synapse0x1da4190();
   input += synapse0x1da4490();
   input += synapse0x1da44d0();
   input += synapse0x1da47d0();
   input += synapse0x1da4810();
   input += synapse0x1da4b10();
   input += synapse0x1da4b50();
   input += synapse0x1da4e50();
   input += synapse0x1da4e90();
   input += synapse0x1da5190();
   input += synapse0x1da51d0();
   input += synapse0x1da54d0();
   input += synapse0x1da5510();
   input += synapse0x1da5810();
   input += synapse0x1da5850();
   input += synapse0x1da5b50();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1db20f0() {
   double input = input0x1db20f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1db3f00() {
   double input = -1.14437;
   input += synapse0x1da5b90();
   input += synapse0x1da6850();
   input += synapse0x1da6890();
   input += synapse0x1db2280();
   input += synapse0x1db22c0();
   input += synapse0x1da6b90();
   input += synapse0x1da6bd0();
   input += synapse0x1b54b60();
   input += synapse0x1b54ba0();
   input += synapse0x1da7310();
   input += synapse0x1da7350();
   input += synapse0x1da7650();
   input += synapse0x1da7690();
   input += synapse0x1da7990();
   input += synapse0x1da79d0();
   input += synapse0x1da7cd0();
   input += synapse0x1da7d10();
   input += synapse0x1da8010();
   input += synapse0x1da8050();
   input += synapse0x1da8350();
   input += synapse0x1da8390();
   input += synapse0x1da5e90();
   input += synapse0x1da5ed0();
   input += synapse0x1db41a0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1db3f00() {
   double input = input0x1db3f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1db41e0() {
   double input = 0.273285;
   input += synapse0x1db4520();
   input += synapse0x1db4560();
   input += synapse0x1db45a0();
   input += synapse0x1db45e0();
   input += synapse0x1db4620();
   input += synapse0x1db4660();
   input += synapse0x1db46a0();
   input += synapse0x1db46e0();
   input += synapse0x1db4720();
   input += synapse0x1db4760();
   input += synapse0x1db47a0();
   input += synapse0x1db47e0();
   input += synapse0x1db4820();
   input += synapse0x1db4860();
   input += synapse0x1db48a0();
   input += synapse0x1db48e0();
   input += synapse0x1db4370();
   input += synapse0x1db43b0();
   input += synapse0x1db4a30();
   input += synapse0x1db4a70();
   input += synapse0x1db4ab0();
   input += synapse0x1db4af0();
   input += synapse0x1db4b30();
   input += synapse0x1db4b70();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1db41e0() {
   double input = input0x1db41e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1db4bb0() {
   double input = -1.39153;
   input += synapse0x1db4ef0();
   input += synapse0x1db4f30();
   input += synapse0x1db4f70();
   input += synapse0x1db4fb0();
   input += synapse0x1db4ff0();
   input += synapse0x1db5030();
   input += synapse0x1db5070();
   input += synapse0x1db50b0();
   input += synapse0x1db50f0();
   input += synapse0x1db5130();
   input += synapse0x1db5170();
   input += synapse0x1db51b0();
   input += synapse0x1db51f0();
   input += synapse0x1db5230();
   input += synapse0x1db5270();
   input += synapse0x1db52b0();
   input += synapse0x1db4d40();
   input += synapse0x1db4d80();
   input += synapse0x1db5400();
   input += synapse0x1db5440();
   input += synapse0x1db5480();
   input += synapse0x1db54c0();
   input += synapse0x1db5500();
   input += synapse0x1db5540();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1db4bb0() {
   double input = input0x1db4bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1db5580() {
   double input = -0.801423;
   input += synapse0x1db58c0();
   input += synapse0x1db5900();
   input += synapse0x1db5940();
   input += synapse0x1db5980();
   input += synapse0x1db59c0();
   input += synapse0x1db5a00();
   input += synapse0x1db5a40();
   input += synapse0x1db5a80();
   input += synapse0x1db5ac0();
   input += synapse0x1db5b00();
   input += synapse0x1db5b40();
   input += synapse0x1db5b80();
   input += synapse0x1db5bc0();
   input += synapse0x1db5c00();
   input += synapse0x1db5c40();
   input += synapse0x1db5c80();
   input += synapse0x1db5710();
   input += synapse0x1db5750();
   input += synapse0x1db5dd0();
   input += synapse0x1db5e10();
   input += synapse0x1db5e50();
   input += synapse0x1db5e90();
   input += synapse0x1db5ed0();
   input += synapse0x1db5f10();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1db5580() {
   double input = input0x1db5580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1db5f50() {
   double input = 0.830117;
   input += synapse0x1db6290();
   input += synapse0x1db62d0();
   input += synapse0x1db6310();
   input += synapse0x1db6350();
   input += synapse0x1db6390();
   input += synapse0x1db63d0();
   input += synapse0x1db6410();
   input += synapse0x1db6450();
   input += synapse0x1db6490();
   input += synapse0x1db64d0();
   input += synapse0x1db6510();
   input += synapse0x1db6550();
   input += synapse0x1db6590();
   input += synapse0x1db65d0();
   input += synapse0x1db6610();
   input += synapse0x1db6650();
   input += synapse0x1db60e0();
   input += synapse0x1db6120();
   input += synapse0x1db67a0();
   input += synapse0x1db67e0();
   input += synapse0x1db6820();
   input += synapse0x1db6860();
   input += synapse0x1db68a0();
   input += synapse0x1db68e0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1db5f50() {
   double input = input0x1db5f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1db6920() {
   double input = -0.984316;
   input += synapse0x1db6c60();
   input += synapse0x1db6ca0();
   input += synapse0x1db6ce0();
   input += synapse0x1db6d20();
   input += synapse0x1db6d60();
   input += synapse0x1db6da0();
   input += synapse0x1db6de0();
   input += synapse0x1db6e20();
   input += synapse0x1db6e60();
   input += synapse0x1daf020();
   input += synapse0x1daf060();
   input += synapse0x1daf0a0();
   input += synapse0x1daf0e0();
   input += synapse0x1daf120();
   input += synapse0x1daf160();
   input += synapse0x1daf1a0();
   input += synapse0x1db6ab0();
   input += synapse0x1db6af0();
   input += synapse0x1daf2f0();
   input += synapse0x1daf330();
   input += synapse0x1daf370();
   input += synapse0x1daf3b0();
   input += synapse0x1daf3f0();
   input += synapse0x1daf430();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1db6920() {
   double input = input0x1db6920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1daf470() {
   double input = -0.691037;
   input += synapse0x1daf7b0();
   input += synapse0x1daf7f0();
   input += synapse0x1daf830();
   input += synapse0x1daf870();
   input += synapse0x1daf8b0();
   input += synapse0x1daf8f0();
   input += synapse0x1daf930();
   input += synapse0x1daf970();
   input += synapse0x1daf9b0();
   input += synapse0x1daf9f0();
   input += synapse0x1dafa30();
   input += synapse0x1dafa70();
   input += synapse0x1dafab0();
   input += synapse0x1dafaf0();
   input += synapse0x1dafb30();
   input += synapse0x1dafb70();
   input += synapse0x1daf600();
   input += synapse0x1daf640();
   input += synapse0x1dafcc0();
   input += synapse0x1dafd00();
   input += synapse0x1dafd40();
   input += synapse0x1dafd80();
   input += synapse0x1dafdc0();
   input += synapse0x1dafe00();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1daf470() {
   double input = input0x1daf470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dafe40() {
   double input = -1.20171;
   input += synapse0x1daffd0();
   input += synapse0x1db9060();
   input += synapse0x1db90a0();
   input += synapse0x1db90e0();
   input += synapse0x1db9120();
   input += synapse0x1db9160();
   input += synapse0x1db91a0();
   input += synapse0x1db91e0();
   input += synapse0x1db9220();
   input += synapse0x1db9260();
   input += synapse0x1db92a0();
   input += synapse0x1db92e0();
   input += synapse0x1db9320();
   input += synapse0x1db9360();
   input += synapse0x1db93a0();
   input += synapse0x1db93e0();
   input += synapse0x1db8eb0();
   input += synapse0x1db8ef0();
   input += synapse0x1db9530();
   input += synapse0x1db9570();
   input += synapse0x1db95b0();
   input += synapse0x1db95f0();
   input += synapse0x1db9630();
   input += synapse0x1db9670();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dafe40() {
   double input = input0x1dafe40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1db96b0() {
   double input = 3.10175;
   input += synapse0x1db99f0();
   input += synapse0x1db9a30();
   input += synapse0x1db9a70();
   input += synapse0x1db9ab0();
   input += synapse0x1db9af0();
   input += synapse0x1db9b30();
   input += synapse0x1db9b70();
   input += synapse0x1db9bb0();
   input += synapse0x1db9bf0();
   input += synapse0x1db9c30();
   input += synapse0x1db9c70();
   input += synapse0x1db9cb0();
   input += synapse0x1db9cf0();
   input += synapse0x1db9d30();
   input += synapse0x1db9d70();
   input += synapse0x1db9db0();
   input += synapse0x1db9840();
   input += synapse0x1db9880();
   input += synapse0x1db9f00();
   input += synapse0x1db9f40();
   input += synapse0x1db9f80();
   input += synapse0x1db9fc0();
   input += synapse0x1dba000();
   input += synapse0x1dba040();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1db96b0() {
   double input = input0x1db96b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dba080() {
   double input = -1.25832;
   input += synapse0x1dba3c0();
   input += synapse0x1dba400();
   input += synapse0x1dba440();
   input += synapse0x1dba480();
   input += synapse0x1dba4c0();
   input += synapse0x1dba500();
   input += synapse0x1dba540();
   input += synapse0x1dba580();
   input += synapse0x1dba5c0();
   input += synapse0x1dba600();
   input += synapse0x1dba640();
   input += synapse0x1dba680();
   input += synapse0x1dba6c0();
   input += synapse0x1dba700();
   input += synapse0x1dba740();
   input += synapse0x1dba780();
   input += synapse0x1dba210();
   input += synapse0x1dba250();
   input += synapse0x1dba8d0();
   input += synapse0x1dba910();
   input += synapse0x1dba950();
   input += synapse0x1dba990();
   input += synapse0x1dba9d0();
   input += synapse0x1dbaa10();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dba080() {
   double input = input0x1dba080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dbaa50() {
   double input = -0.632842;
   input += synapse0x1dbad90();
   input += synapse0x1dbadd0();
   input += synapse0x1dbae10();
   input += synapse0x1dbae50();
   input += synapse0x1dbae90();
   input += synapse0x1dbaed0();
   input += synapse0x1dbaf10();
   input += synapse0x1dbaf50();
   input += synapse0x1dbaf90();
   input += synapse0x1dbafd0();
   input += synapse0x1dbb010();
   input += synapse0x1dbb050();
   input += synapse0x1dbb090();
   input += synapse0x1dbb0d0();
   input += synapse0x1dbb110();
   input += synapse0x1dbb150();
   input += synapse0x1dbabe0();
   input += synapse0x1dbac20();
   input += synapse0x1dbb2a0();
   input += synapse0x1dbb2e0();
   input += synapse0x1dbb320();
   input += synapse0x1dbb360();
   input += synapse0x1dbb3a0();
   input += synapse0x1dbb3e0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dbaa50() {
   double input = input0x1dbaa50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dbb420() {
   double input = -6.64651;
   input += synapse0x1dbb760();
   input += synapse0x1dbb7a0();
   input += synapse0x1dbb7e0();
   input += synapse0x1dbb820();
   input += synapse0x1dbb860();
   input += synapse0x1dbb8a0();
   input += synapse0x1dbb8e0();
   input += synapse0x1dbb920();
   input += synapse0x1dbb960();
   input += synapse0x1dbb9a0();
   input += synapse0x1dbb9e0();
   input += synapse0x1dbba20();
   input += synapse0x1dbba60();
   input += synapse0x1dbbaa0();
   input += synapse0x1dbbae0();
   input += synapse0x1dbbb20();
   input += synapse0x1dbb5b0();
   input += synapse0x1dbb5f0();
   input += synapse0x1dbbc70();
   input += synapse0x1dbbcb0();
   input += synapse0x1dbbcf0();
   input += synapse0x1dbbd30();
   input += synapse0x1dbbd70();
   input += synapse0x1dbbdb0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dbb420() {
   double input = input0x1dbb420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dbbdf0() {
   double input = -2.34091;
   input += synapse0x1dbc130();
   input += synapse0x1dbc170();
   input += synapse0x1dbc1b0();
   input += synapse0x1dbc1f0();
   input += synapse0x1dbc230();
   input += synapse0x1dbc270();
   input += synapse0x1dbc2b0();
   input += synapse0x1dbc2f0();
   input += synapse0x1dbc330();
   input += synapse0x1dbc370();
   input += synapse0x1dbc3b0();
   input += synapse0x1dbc3f0();
   input += synapse0x1dbc430();
   input += synapse0x1dbc470();
   input += synapse0x1dbc4b0();
   input += synapse0x1dbc4f0();
   input += synapse0x1dbbf80();
   input += synapse0x1dbbfc0();
   input += synapse0x1dbc640();
   input += synapse0x1dbc680();
   input += synapse0x1dbc6c0();
   input += synapse0x1dbc700();
   input += synapse0x1dbc740();
   input += synapse0x1dbc780();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dbbdf0() {
   double input = input0x1dbbdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dbc7c0() {
   double input = -0.610916;
   input += synapse0x1dbcb00();
   input += synapse0x1dbcb40();
   input += synapse0x1dbcb80();
   input += synapse0x1dbcbc0();
   input += synapse0x1dbcc00();
   input += synapse0x1dbcc40();
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
   input += synapse0x1dbc950();
   input += synapse0x1dbc990();
   input += synapse0x1dbd010();
   input += synapse0x1dbd050();
   input += synapse0x1dbd090();
   input += synapse0x1dbd0d0();
   input += synapse0x1dbd110();
   input += synapse0x1dbd150();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dbc7c0() {
   double input = input0x1dbc7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dbd190() {
   double input = -1.49986;
   input += synapse0x1dbd4d0();
   input += synapse0x1dbd510();
   input += synapse0x1dbd550();
   input += synapse0x1dbd590();
   input += synapse0x1dbd5d0();
   input += synapse0x1dbd610();
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
   input += synapse0x1dbd320();
   input += synapse0x1dbd360();
   input += synapse0x1dbd9e0();
   input += synapse0x1dbda20();
   input += synapse0x1dbda60();
   input += synapse0x1dbdaa0();
   input += synapse0x1dbdae0();
   input += synapse0x1dbdb20();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dbd190() {
   double input = input0x1dbd190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dbdb60() {
   double input = -2.3579;
   input += synapse0x1dbdea0();
   input += synapse0x1db2470();
   input += synapse0x1db24b0();
   input += synapse0x1db24f0();
   input += synapse0x1db2740();
   input += synapse0x1db2780();
   input += synapse0x1db27c0();
   input += synapse0x1db2a10();
   input += synapse0x1db2a50();
   input += synapse0x1db2ca0();
   input += synapse0x1db2ce0();
   input += synapse0x1db2d20();
   input += synapse0x1db2f70();
   input += synapse0x1db2fb0();
   input += synapse0x1db3200();
   input += synapse0x1db3240();
   input += synapse0x1dbdcf0();
   input += synapse0x1dbdd30();
   input += synapse0x1db3390();
   input += synapse0x1db38a0();
   input += synapse0x1db38e0();
   input += synapse0x1db3920();
   input += synapse0x1db3b70();
   input += synapse0x1db3bb0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dbdb60() {
   double input = input0x1dbdb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1db3bf0() {
   double input = 0.509618;
   input += synapse0x1db3460();
   input += synapse0x1db34a0();
   input += synapse0x1db34e0();
   input += synapse0x1db3520();
   input += synapse0x1db3ea0();
   input += synapse0x1dc01f0();
   input += synapse0x1dc0230();
   input += synapse0x1dc0270();
   input += synapse0x1dc02b0();
   input += synapse0x1dc02f0();
   input += synapse0x1dc0330();
   input += synapse0x1dc0370();
   input += synapse0x1dc03b0();
   input += synapse0x1dc03f0();
   input += synapse0x1dc0430();
   input += synapse0x1dc0470();
   input += synapse0x1db3d80();
   input += synapse0x1db3dc0();
   input += synapse0x1dc05c0();
   input += synapse0x1dc0600();
   input += synapse0x1dc0640();
   input += synapse0x1dc0680();
   input += synapse0x1dc06c0();
   input += synapse0x1dc0700();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1db3bf0() {
   double input = input0x1db3bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dc0740() {
   double input = 1.10824;
   input += synapse0x1dc0a80();
   input += synapse0x1dc0ac0();
   input += synapse0x1dc0b00();
   input += synapse0x1dc0b40();
   input += synapse0x1dc0b80();
   input += synapse0x1dc0bc0();
   input += synapse0x1dc0c00();
   input += synapse0x1dc0c40();
   input += synapse0x1dc0c80();
   input += synapse0x1dc0cc0();
   input += synapse0x1dc0d00();
   input += synapse0x1dc0d40();
   input += synapse0x1dc0d80();
   input += synapse0x1dc0dc0();
   input += synapse0x1dc0e00();
   input += synapse0x1dc0e40();
   input += synapse0x1dc08d0();
   input += synapse0x1dc0910();
   input += synapse0x1dc0f90();
   input += synapse0x1dc0fd0();
   input += synapse0x1dc1010();
   input += synapse0x1dc1050();
   input += synapse0x1dc1090();
   input += synapse0x1dc10d0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dc0740() {
   double input = input0x1dc0740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dc1110() {
   double input = 0.470615;
   input += synapse0x1dc1450();
   input += synapse0x1dc1490();
   input += synapse0x1dc14d0();
   input += synapse0x1dc1510();
   input += synapse0x1dc1550();
   input += synapse0x1dc1590();
   input += synapse0x1dc15d0();
   input += synapse0x1dc1610();
   input += synapse0x1dc1650();
   input += synapse0x1dc1690();
   input += synapse0x1dc16d0();
   input += synapse0x1dc1710();
   input += synapse0x1dc1750();
   input += synapse0x1dc1790();
   input += synapse0x1dc17d0();
   input += synapse0x1dc1810();
   input += synapse0x1dc12a0();
   input += synapse0x1dc12e0();
   input += synapse0x1dc1960();
   input += synapse0x1dc19a0();
   input += synapse0x1dc19e0();
   input += synapse0x1dc1a20();
   input += synapse0x1dc1a60();
   input += synapse0x1dc1aa0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dc1110() {
   double input = input0x1dc1110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dc1ae0() {
   double input = -1.21288;
   input += synapse0x1dc1e20();
   input += synapse0x1dc1e60();
   input += synapse0x1dc1ea0();
   input += synapse0x1dc1ee0();
   input += synapse0x1dc1f20();
   input += synapse0x1dc1f60();
   input += synapse0x1dc1fa0();
   input += synapse0x1dc1fe0();
   input += synapse0x1dc2020();
   input += synapse0x1dc2060();
   input += synapse0x1dc20a0();
   input += synapse0x1dc20e0();
   input += synapse0x1dc2120();
   input += synapse0x1dc2160();
   input += synapse0x1dc21a0();
   input += synapse0x1dc21e0();
   input += synapse0x1dc1c70();
   input += synapse0x1dc1cb0();
   input += synapse0x1dc2330();
   input += synapse0x1dc2370();
   input += synapse0x1dc23b0();
   input += synapse0x1dc23f0();
   input += synapse0x1dc2430();
   input += synapse0x1dc2470();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dc1ae0() {
   double input = input0x1dc1ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dc24b0() {
   double input = -0.97538;
   input += synapse0x1dc27f0();
   input += synapse0x1dc2830();
   input += synapse0x1dc2870();
   input += synapse0x1dc28b0();
   input += synapse0x1dc28f0();
   input += synapse0x1dc2930();
   input += synapse0x1dc2970();
   input += synapse0x1dc29b0();
   input += synapse0x1dc29f0();
   input += synapse0x1dc2a30();
   input += synapse0x1dc2a70();
   input += synapse0x1dc2ab0();
   input += synapse0x1dc2af0();
   input += synapse0x1dc2b30();
   input += synapse0x1dc2b70();
   input += synapse0x1dc2bb0();
   input += synapse0x1dc2640();
   input += synapse0x1dc2680();
   input += synapse0x1dc2d00();
   input += synapse0x1dc2d40();
   input += synapse0x1dc2d80();
   input += synapse0x1dc2dc0();
   input += synapse0x1dc2e00();
   input += synapse0x1dc2e40();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dc24b0() {
   double input = input0x1dc24b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dc2e80() {
   double input = -0.260681;
   input += synapse0x1dc31c0();
   input += synapse0x1dc3200();
   input += synapse0x1dc3240();
   input += synapse0x1dc3280();
   input += synapse0x1dc32c0();
   input += synapse0x1dc3300();
   input += synapse0x1dc3340();
   input += synapse0x1dc3380();
   input += synapse0x1dc33c0();
   input += synapse0x1dc3400();
   input += synapse0x1dc3440();
   input += synapse0x1dc3480();
   input += synapse0x1dc34c0();
   input += synapse0x1dc3500();
   input += synapse0x1dc3540();
   input += synapse0x1dc3580();
   input += synapse0x1dc3010();
   input += synapse0x1dc3050();
   input += synapse0x1dc36d0();
   input += synapse0x1dc3710();
   input += synapse0x1dc3750();
   input += synapse0x1dc3790();
   input += synapse0x1dc37d0();
   input += synapse0x1dc3810();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dc2e80() {
   double input = input0x1dc2e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dc3850() {
   double input = 1.33476;
   input += synapse0x1dc3b90();
   input += synapse0x1dc3bd0();
   input += synapse0x1dc3c10();
   input += synapse0x1dc3c50();
   input += synapse0x1dc3c90();
   input += synapse0x1dc3cd0();
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
   input += synapse0x1dc39e0();
   input += synapse0x1dc3a20();
   input += synapse0x1dc40a0();
   input += synapse0x1dc40e0();
   input += synapse0x1dc4120();
   input += synapse0x1dc4160();
   input += synapse0x1dc41a0();
   input += synapse0x1dc41e0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dc3850() {
   double input = input0x1dc3850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dc4220() {
   double input = 0.360346;
   input += synapse0x1dc4560();
   input += synapse0x1dc45a0();
   input += synapse0x1dc45e0();
   input += synapse0x1dc4620();
   input += synapse0x1dc4660();
   input += synapse0x1dc46a0();
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
   input += synapse0x1dc43b0();
   input += synapse0x1dc43f0();
   input += synapse0x1dc4a70();
   input += synapse0x1dc4ab0();
   input += synapse0x1dc4af0();
   input += synapse0x1dc4b30();
   input += synapse0x1dc4b70();
   input += synapse0x1dc4bb0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dc4220() {
   double input = input0x1dc4220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dc4bf0() {
   double input = 1.19742;
   input += synapse0x1dad660();
   input += synapse0x1dad6a0();
   input += synapse0x1dad6e0();
   input += synapse0x1dad720();
   input += synapse0x1dad760();
   input += synapse0x1dad7a0();
   input += synapse0x1dad7e0();
   input += synapse0x1dad820();
   input += synapse0x1dc5340();
   input += synapse0x1dc5380();
   input += synapse0x1dc53c0();
   input += synapse0x1dc5400();
   input += synapse0x1dc5440();
   input += synapse0x1dc5480();
   input += synapse0x1dc54c0();
   input += synapse0x1dc5500();
   input += synapse0x1dc4d80();
   input += synapse0x1dc4dc0();
   input += synapse0x1dc5650();
   input += synapse0x1dc5690();
   input += synapse0x1dc56d0();
   input += synapse0x1dc5710();
   input += synapse0x1dc5750();
   input += synapse0x1dc5790();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dc4bf0() {
   double input = input0x1dc4bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dc57d0() {
   double input = -0.444101;
   input += synapse0x1dc5b10();
   input += synapse0x1dc5b50();
   input += synapse0x1dc5b90();
   input += synapse0x1dc5bd0();
   input += synapse0x1dc5c10();
   input += synapse0x1dc5c50();
   input += synapse0x1dc5c90();
   input += synapse0x1dc5cd0();
   input += synapse0x1dc5d10();
   input += synapse0x1dc5d50();
   input += synapse0x1dc5d90();
   input += synapse0x1dc5dd0();
   input += synapse0x1dc5e10();
   input += synapse0x1dc5e50();
   input += synapse0x1dc5e90();
   input += synapse0x1dc5ed0();
   input += synapse0x1dc5960();
   input += synapse0x1dc59a0();
   input += synapse0x1dc6020();
   input += synapse0x1dc6060();
   input += synapse0x1dc60a0();
   input += synapse0x1dc60e0();
   input += synapse0x1dc6120();
   input += synapse0x1dc6160();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dc57d0() {
   double input = input0x1dc57d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dc61a0() {
   double input = 0.918813;
   input += synapse0x1dc64e0();
   input += synapse0x1dc6520();
   input += synapse0x1dc6560();
   input += synapse0x1dc65a0();
   input += synapse0x1dc65e0();
   input += synapse0x1dc6620();
   input += synapse0x1dc6660();
   input += synapse0x1dc66a0();
   input += synapse0x1dc66e0();
   input += synapse0x1dc6720();
   input += synapse0x1dc6760();
   input += synapse0x1dc67a0();
   input += synapse0x1dc67e0();
   input += synapse0x1dc6820();
   input += synapse0x1dc6860();
   input += synapse0x1dc68a0();
   input += synapse0x1dc6330();
   input += synapse0x1dc6370();
   input += synapse0x1db6ea0();
   input += synapse0x1db6ee0();
   input += synapse0x1db6f20();
   input += synapse0x1db6f60();
   input += synapse0x1db6fa0();
   input += synapse0x1db6fe0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dc61a0() {
   double input = input0x1dc61a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1db7020() {
   double input = 0.178737;
   input += synapse0x1db7360();
   input += synapse0x1db73a0();
   input += synapse0x1db73e0();
   input += synapse0x1db7420();
   input += synapse0x1db7460();
   input += synapse0x1db74a0();
   input += synapse0x1db74e0();
   input += synapse0x1db7520();
   input += synapse0x1db7560();
   input += synapse0x1db75a0();
   input += synapse0x1db75e0();
   input += synapse0x1db7620();
   input += synapse0x1db7660();
   input += synapse0x1db76a0();
   input += synapse0x1db76e0();
   input += synapse0x1db7720();
   input += synapse0x1db71b0();
   input += synapse0x1db71f0();
   input += synapse0x1db7870();
   input += synapse0x1db78b0();
   input += synapse0x1db78f0();
   input += synapse0x1db7930();
   input += synapse0x1db7970();
   input += synapse0x1db79b0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1db7020() {
   double input = input0x1db7020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1db79f0() {
   double input = 0.638;
   input += synapse0x1db7d30();
   input += synapse0x1db7d70();
   input += synapse0x1db7db0();
   input += synapse0x1db7df0();
   input += synapse0x1db7e30();
   input += synapse0x1db7e70();
   input += synapse0x1db7eb0();
   input += synapse0x1db7ef0();
   input += synapse0x1db7f30();
   input += synapse0x1db7f70();
   input += synapse0x1db7fb0();
   input += synapse0x1db7ff0();
   input += synapse0x1db8030();
   input += synapse0x1db8070();
   input += synapse0x1db80b0();
   input += synapse0x1db80f0();
   input += synapse0x1db7b80();
   input += synapse0x1db7bc0();
   input += synapse0x1db8240();
   input += synapse0x1db8280();
   input += synapse0x1db82c0();
   input += synapse0x1db8300();
   input += synapse0x1db8340();
   input += synapse0x1db8380();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1db79f0() {
   double input = input0x1db79f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1db83c0() {
   double input = -0.11304;
   input += synapse0x1db8700();
   input += synapse0x1db8740();
   input += synapse0x1db8780();
   input += synapse0x1db87c0();
   input += synapse0x1db8800();
   input += synapse0x1db8840();
   input += synapse0x1db8880();
   input += synapse0x1db88c0();
   input += synapse0x1db8900();
   input += synapse0x1db8940();
   input += synapse0x1db8980();
   input += synapse0x1db89c0();
   input += synapse0x1db8a00();
   input += synapse0x1db8a40();
   input += synapse0x1db8a80();
   input += synapse0x1db8ac0();
   input += synapse0x1db8550();
   input += synapse0x1db8590();
   input += synapse0x1db8c10();
   input += synapse0x1db8c50();
   input += synapse0x1db8c90();
   input += synapse0x1db8cd0();
   input += synapse0x1db8d10();
   input += synapse0x1db8d50();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1db83c0() {
   double input = input0x1db83c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dcaa00() {
   double input = 2.06616;
   input += synapse0x1dcac20();
   input += synapse0x1dcac60();
   input += synapse0x1dcaca0();
   input += synapse0x1dcace0();
   input += synapse0x1dcad20();
   input += synapse0x1dcad60();
   input += synapse0x1dcada0();
   input += synapse0x1dcade0();
   input += synapse0x1dcae20();
   input += synapse0x1dcae60();
   input += synapse0x1dcaea0();
   input += synapse0x1dcaee0();
   input += synapse0x1dcaf20();
   input += synapse0x1dcaf60();
   input += synapse0x1dcafa0();
   input += synapse0x1dcafe0();
   input += synapse0x1db8d90();
   input += synapse0x1db8dd0();
   input += synapse0x1dcb130();
   input += synapse0x1dcb170();
   input += synapse0x1dcb1b0();
   input += synapse0x1dcb1f0();
   input += synapse0x1dcb230();
   input += synapse0x1dcb270();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dcaa00() {
   double input = input0x1dcaa00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dcb2b0() {
   double input = 0.848144;
   input += synapse0x1dcb5f0();
   input += synapse0x1dcb630();
   input += synapse0x1dcb670();
   input += synapse0x1dcb6b0();
   input += synapse0x1dcb6f0();
   input += synapse0x1dcb730();
   input += synapse0x1dcb770();
   input += synapse0x1dcb7b0();
   input += synapse0x1dcb7f0();
   input += synapse0x1dcb830();
   input += synapse0x1dcb870();
   input += synapse0x1dcb8b0();
   input += synapse0x1dcb8f0();
   input += synapse0x1dcb930();
   input += synapse0x1dcb970();
   input += synapse0x1dcb9b0();
   input += synapse0x1dcb440();
   input += synapse0x1dcb480();
   input += synapse0x1dcbb00();
   input += synapse0x1dcbb40();
   input += synapse0x1dcbb80();
   input += synapse0x1dcbbc0();
   input += synapse0x1dcbc00();
   input += synapse0x1dcbc40();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dcb2b0() {
   double input = input0x1dcb2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dcbc80() {
   double input = 2.20825;
   input += synapse0x1dcbfc0();
   input += synapse0x1dcc000();
   input += synapse0x1dcc040();
   input += synapse0x1dcc080();
   input += synapse0x1dcc0c0();
   input += synapse0x1dcc100();
   input += synapse0x1dcc140();
   input += synapse0x1dcc180();
   input += synapse0x1dcc1c0();
   input += synapse0x1dcc200();
   input += synapse0x1dcc240();
   input += synapse0x1dcc280();
   input += synapse0x1dcc2c0();
   input += synapse0x1dcc300();
   input += synapse0x1dcc340();
   input += synapse0x1dcc380();
   input += synapse0x1dcbe10();
   input += synapse0x1dcbe50();
   input += synapse0x1dcc4d0();
   input += synapse0x1dcc510();
   input += synapse0x1dcc550();
   input += synapse0x1dcc590();
   input += synapse0x1dcc5d0();
   input += synapse0x1dcc610();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dcbc80() {
   double input = input0x1dcbc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dcc650() {
   double input = 3.15928;
   input += synapse0x1dcc990();
   input += synapse0x1dcc9d0();
   input += synapse0x1dcca10();
   input += synapse0x1dcca50();
   input += synapse0x1dcca90();
   input += synapse0x1dccad0();
   input += synapse0x1dccb10();
   input += synapse0x1dccb50();
   input += synapse0x1dccb90();
   input += synapse0x1dccbd0();
   input += synapse0x1dccc10();
   input += synapse0x1dccc50();
   input += synapse0x1dccc90();
   input += synapse0x1dcccd0();
   input += synapse0x1dccd10();
   input += synapse0x1dccd50();
   input += synapse0x1dcc7e0();
   input += synapse0x1dcc820();
   input += synapse0x1dccea0();
   input += synapse0x1dccee0();
   input += synapse0x1dccf20();
   input += synapse0x1dccf60();
   input += synapse0x1dccfa0();
   input += synapse0x1dccfe0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dcc650() {
   double input = input0x1dcc650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dd3850() {
   double input = 1.07135;
   input += synapse0x1da9580();
   input += synapse0x1da95c0();
   input += synapse0x1daaa90();
   input += synapse0x1daaad0();
   input += synapse0x1dab460();
   input += synapse0x1dab4a0();
   input += synapse0x1dac230();
   input += synapse0x1dac270();
   input += synapse0x1dacc00();
   input += synapse0x1dacc40();
   input += synapse0x1dad5d0();
   input += synapse0x1dad610();
   input += synapse0x1dae0b0();
   input += synapse0x1dae0f0();
   input += synapse0x1daea80();
   input += synapse0x1daeac0();
   input += synapse0x1dabb60();
   input += synapse0x1dabba0();
   input += synapse0x1db0630();
   input += synapse0x1db0670();
   input += synapse0x1db1000();
   input += synapse0x1db1040();
   input += synapse0x1db19d0();
   input += synapse0x1db1a10();
   input += synapse0x1db23a0();
   input += synapse0x1db23e0();
   input += synapse0x1da6510();
   input += synapse0x1da6550();
   input += synapse0x1db4490();
   input += synapse0x1db44d0();
   input += synapse0x1db4e60();
   input += synapse0x1db4ea0();
   input += synapse0x1db5830();
   input += synapse0x1db5870();
   input += synapse0x1db6200();
   input += synapse0x1db6240();
   input += synapse0x1db6bd0();
   input += synapse0x1db6c10();
   input += synapse0x1daf720();
   input += synapse0x1daf760();
   input += synapse0x1db8fd0();
   input += synapse0x1db9010();
   input += synapse0x1db9960();
   input += synapse0x1db99a0();
   input += synapse0x1dba330();
   input += synapse0x1dba370();
   input += synapse0x1dbad00();
   input += synapse0x1dbad40();
   input += synapse0x1dbb6d0();
   input += synapse0x1dbb710();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dd3850() {
   double input = input0x1dd3850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dd3bf0() {
   double input = -1.3781;
   input += synapse0x1dbde10();
   input += synapse0x1dbde50();
   input += synapse0x1db33d0();
   input += synapse0x1db3410();
   input += synapse0x1dc09f0();
   input += synapse0x1dc0a30();
   input += synapse0x1dc13c0();
   input += synapse0x1dc1400();
   input += synapse0x1dc1d90();
   input += synapse0x1dc1dd0();
   input += synapse0x1dc2760();
   input += synapse0x1dc27a0();
   input += synapse0x1dc3130();
   input += synapse0x1dc3170();
   input += synapse0x1dc3b00();
   input += synapse0x1dc3b40();
   input += synapse0x1dc44d0();
   input += synapse0x1dc4510();
   input += synapse0x1dc4ea0();
   input += synapse0x1dc4ee0();
   input += synapse0x1dc5a80();
   input += synapse0x1dc5ac0();
   input += synapse0x1dc6450();
   input += synapse0x1dc6490();
   input += synapse0x1db72d0();
   input += synapse0x1db7310();
   input += synapse0x1db7ca0();
   input += synapse0x1db7ce0();
   input += synapse0x1db8670();
   input += synapse0x1db86b0();
   input += synapse0x1dcab90();
   input += synapse0x1dcabd0();
   input += synapse0x1dcb560();
   input += synapse0x1dcb5a0();
   input += synapse0x1dcbf30();
   input += synapse0x1dcbf70();
   input += synapse0x1dcc900();
   input += synapse0x1dcc940();
   input += synapse0x1da87f0();
   input += synapse0x1da8830();
   input += synapse0x1dbc0a0();
   input += synapse0x1dbc0e0();
   input += synapse0x1dcd020();
   input += synapse0x1dcd060();
   input += synapse0x1dcd0a0();
   input += synapse0x1dcd0e0();
   input += synapse0x1dd3f90();
   input += synapse0x1dd3fd0();
   input += synapse0x1dd4010();
   input += synapse0x1dd4050();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dd3bf0() {
   double input = input0x1dd3bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dd4090() {
   double input = 1.11997;
   input += synapse0x1dd43d0();
   input += synapse0x1dd4410();
   input += synapse0x1dd4450();
   input += synapse0x1dd4490();
   input += synapse0x1dd44d0();
   input += synapse0x1dd4510();
   input += synapse0x1dd4550();
   input += synapse0x1dd4590();
   input += synapse0x1dd45d0();
   input += synapse0x1dd4610();
   input += synapse0x1dd4650();
   input += synapse0x1dd4690();
   input += synapse0x1dd46d0();
   input += synapse0x1dd4710();
   input += synapse0x1dd4750();
   input += synapse0x1dd4790();
   input += synapse0x1dd4220();
   input += synapse0x1dd4260();
   input += synapse0x1dd48e0();
   input += synapse0x1dd4920();
   input += synapse0x1dd4960();
   input += synapse0x1dd49a0();
   input += synapse0x1dd49e0();
   input += synapse0x1dd4a20();
   input += synapse0x1dd4a60();
   input += synapse0x1dd4aa0();
   input += synapse0x1dd4ae0();
   input += synapse0x1dd4b20();
   input += synapse0x1dd4b60();
   input += synapse0x1dd4ba0();
   input += synapse0x1dd4be0();
   input += synapse0x1dd4c20();
   input += synapse0x1dd47d0();
   input += synapse0x1dd4810();
   input += synapse0x1dd4850();
   input += synapse0x1dd4890();
   input += synapse0x1dd4e70();
   input += synapse0x1dd4eb0();
   input += synapse0x1dd4ef0();
   input += synapse0x1dd4f30();
   input += synapse0x1dd4f70();
   input += synapse0x1dd4fb0();
   input += synapse0x1dd4ff0();
   input += synapse0x1dd5030();
   input += synapse0x1dd5070();
   input += synapse0x1dd50b0();
   input += synapse0x1dd50f0();
   input += synapse0x1dd5130();
   input += synapse0x1dd5170();
   input += synapse0x1dd51b0();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dd4090() {
   double input = input0x1dd4090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dd51f0() {
   double input = -1.18408;
   input += synapse0x1dd5530();
   input += synapse0x1dd5570();
   input += synapse0x1dd55b0();
   input += synapse0x1dd55f0();
   input += synapse0x1dd5630();
   input += synapse0x1dd5670();
   input += synapse0x1dd56b0();
   input += synapse0x1dd56f0();
   input += synapse0x1dd5730();
   input += synapse0x1dd5770();
   input += synapse0x1dd57b0();
   input += synapse0x1dd57f0();
   input += synapse0x1dd5830();
   input += synapse0x1dd5870();
   input += synapse0x1dd58b0();
   input += synapse0x1dd58f0();
   input += synapse0x1dd5380();
   input += synapse0x1dd53c0();
   input += synapse0x1dd5a40();
   input += synapse0x1dd5a80();
   input += synapse0x1dd5ac0();
   input += synapse0x1dd5b00();
   input += synapse0x1dd5b40();
   input += synapse0x1dd5b80();
   input += synapse0x1dd5bc0();
   input += synapse0x1dd5c00();
   input += synapse0x1dd5c40();
   input += synapse0x1dd5c80();
   input += synapse0x1dd5cc0();
   input += synapse0x1dd5d00();
   input += synapse0x1dd5d40();
   input += synapse0x1dd5d80();
   input += synapse0x1dd5930();
   input += synapse0x1dd5970();
   input += synapse0x1dd59b0();
   input += synapse0x1dd59f0();
   input += synapse0x1dd5fd0();
   input += synapse0x1dd6010();
   input += synapse0x1dd6050();
   input += synapse0x1dd6090();
   input += synapse0x1dd60d0();
   input += synapse0x1dd6110();
   input += synapse0x1dd6150();
   input += synapse0x1dd6190();
   input += synapse0x1dd61d0();
   input += synapse0x1dd6210();
   input += synapse0x1dd6250();
   input += synapse0x1dd6290();
   input += synapse0x1dd62d0();
   input += synapse0x1dd6310();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dd51f0() {
   double input = input0x1dd51f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dd6350() {
   double input = -1.79844;
   input += synapse0x1dd6690();
   input += synapse0x1dd66d0();
   input += synapse0x1dd6710();
   input += synapse0x1dd6750();
   input += synapse0x1dd6790();
   input += synapse0x1dd67d0();
   input += synapse0x1dd6810();
   input += synapse0x1dd6850();
   input += synapse0x1dd6890();
   input += synapse0x1dd68d0();
   input += synapse0x1dd6910();
   input += synapse0x1dd6950();
   input += synapse0x1dd6990();
   input += synapse0x1dd69d0();
   input += synapse0x1dd6a10();
   input += synapse0x1dd6a50();
   input += synapse0x1dd64e0();
   input += synapse0x1dd6520();
   input += synapse0x1dd6ba0();
   input += synapse0x1dd6be0();
   input += synapse0x1dd6c20();
   input += synapse0x1dd6c60();
   input += synapse0x1dd6ca0();
   input += synapse0x1dd6ce0();
   input += synapse0x1dd6d20();
   input += synapse0x1dd6d60();
   input += synapse0x1dd6da0();
   input += synapse0x1dd6de0();
   input += synapse0x1dd6e20();
   input += synapse0x1dd6e60();
   input += synapse0x1dd6ea0();
   input += synapse0x1dd6ee0();
   input += synapse0x1dd6a90();
   input += synapse0x1dd6ad0();
   input += synapse0x1dd6b10();
   input += synapse0x1dd6b50();
   input += synapse0x1dd7130();
   input += synapse0x1dd7170();
   input += synapse0x1dd71b0();
   input += synapse0x1dd71f0();
   input += synapse0x1dd7230();
   input += synapse0x1dd7270();
   input += synapse0x1dd72b0();
   input += synapse0x1dd72f0();
   input += synapse0x1dd7330();
   input += synapse0x1dd7370();
   input += synapse0x1dd73b0();
   input += synapse0x1dd73f0();
   input += synapse0x1dd7430();
   input += synapse0x1dd7470();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dd6350() {
   double input = input0x1dd6350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cRcR::input0x1dd74b0() {
   double input = 11.3755;
   input += synapse0x1da8590();
   input += synapse0x1dd76d0();
   input += synapse0x1dd7710();
   input += synapse0x1dd7750();
   input += synapse0x1dd7790();
   return input;
}

double NNfunction_ss_cRcR::neuron0x1dd74b0() {
   double input = input0x1dd74b0();
   return (input * 1)+0;
}

double NNfunction_ss_cRcR::synapse0x1b633e0() {
   return (neuron0x1da3570()*0.0059157);
}

double NNfunction_ss_cRcR::synapse0x1da3430() {
   return (neuron0x1da38b0()*-0.207236);
}

double NNfunction_ss_cRcR::synapse0x1da3470() {
   return (neuron0x1da3bf0()*-0.158046);
}

double NNfunction_ss_cRcR::synapse0x1da8880() {
   return (neuron0x1da3f30()*0.00572566);
}

double NNfunction_ss_cRcR::synapse0x1da88c0() {
   return (neuron0x1da4270()*-0.064496);
}

double NNfunction_ss_cRcR::synapse0x1da8900() {
   return (neuron0x1da45b0()*-0.0469655);
}

double NNfunction_ss_cRcR::synapse0x1da8940() {
   return (neuron0x1da48f0()*0.321585);
}

double NNfunction_ss_cRcR::synapse0x1da8980() {
   return (neuron0x1da4c30()*-0.245045);
}

double NNfunction_ss_cRcR::synapse0x1da89c0() {
   return (neuron0x1da4f70()*-0.270959);
}

double NNfunction_ss_cRcR::synapse0x1da8a00() {
   return (neuron0x1da52b0()*-0.119691);
}

double NNfunction_ss_cRcR::synapse0x1da8a40() {
   return (neuron0x1da55f0()*0.405368);
}

double NNfunction_ss_cRcR::synapse0x1da8a80() {
   return (neuron0x1da5930()*0.935257);
}

double NNfunction_ss_cRcR::synapse0x1da8ac0() {
   return (neuron0x1da5c70()*0.371053);
}

double NNfunction_ss_cRcR::synapse0x1da8b00() {
   return (neuron0x1da5fb0()*-0.174096);
}

double NNfunction_ss_cRcR::synapse0x1da8b40() {
   return (neuron0x1da62f0()*0.0645063);
}

double NNfunction_ss_cRcR::synapse0x1da8b80() {
   return (neuron0x1da6630()*-0.179327);
}

double NNfunction_ss_cRcR::synapse0x1da33a0() {
   return (neuron0x1da6970()*-0.131165);
}

double NNfunction_ss_cRcR::synapse0x1da33e0() {
   return (neuron0x1da6ed0()*0.328871);
}

double NNfunction_ss_cRcR::synapse0x1b54c80() {
   return (neuron0x1da70f0()*-0.310776);
}

double NNfunction_ss_cRcR::synapse0x1b54cc0() {
   return (neuron0x1da7430()*-0.245853);
}

double NNfunction_ss_cRcR::synapse0x1da8de0() {
   return (neuron0x1da7770()*-0.152902);
}

double NNfunction_ss_cRcR::synapse0x1da8e20() {
   return (neuron0x1da7ab0()*0.210217);
}

double NNfunction_ss_cRcR::synapse0x1da8e60() {
   return (neuron0x1da7df0()*0.0422102);
}

double NNfunction_ss_cRcR::synapse0x1da8ea0() {
   return (neuron0x1da8130()*0.150822);
}

double NNfunction_ss_cRcR::synapse0x1da9220() {
   return (neuron0x1da3570()*0.120876);
}

double NNfunction_ss_cRcR::synapse0x1da9260() {
   return (neuron0x1da38b0()*0.00559438);
}

double NNfunction_ss_cRcR::synapse0x1da92a0() {
   return (neuron0x1da3bf0()*0.266042);
}

double NNfunction_ss_cRcR::synapse0x1da92e0() {
   return (neuron0x1da3f30()*0.216731);
}

double NNfunction_ss_cRcR::synapse0x1da9320() {
   return (neuron0x1da4270()*-0.175767);
}

double NNfunction_ss_cRcR::synapse0x1da9360() {
   return (neuron0x1da45b0()*-0.381361);
}

double NNfunction_ss_cRcR::synapse0x1da93a0() {
   return (neuron0x1da48f0()*-0.0785224);
}

double NNfunction_ss_cRcR::synapse0x1da93e0() {
   return (neuron0x1da4c30()*-0.236164);
}

double NNfunction_ss_cRcR::synapse0x1da9420() {
   return (neuron0x1da4f70()*-0.136978);
}

double NNfunction_ss_cRcR::synapse0x1da8cd0() {
   return (neuron0x1da52b0()*0.0255866);
}

double NNfunction_ss_cRcR::synapse0x1da8d10() {
   return (neuron0x1da55f0()*1.60607);
}

double NNfunction_ss_cRcR::synapse0x1da8d50() {
   return (neuron0x1da5930()*1.14613);
}

double NNfunction_ss_cRcR::synapse0x1da8d90() {
   return (neuron0x1da5c70()*-0.0691973);
}

double NNfunction_ss_cRcR::synapse0x1da9670() {
   return (neuron0x1da5fb0()*0.0609852);
}

double NNfunction_ss_cRcR::synapse0x1da96b0() {
   return (neuron0x1da62f0()*-0.0970264);
}

double NNfunction_ss_cRcR::synapse0x1da96f0() {
   return (neuron0x1da6630()*-1.28997);
}

double NNfunction_ss_cRcR::synapse0x1da9070() {
   return (neuron0x1da6970()*0.174378);
}

double NNfunction_ss_cRcR::synapse0x1da90b0() {
   return (neuron0x1da6ed0()*-0.589783);
}

double NNfunction_ss_cRcR::synapse0x1da9840() {
   return (neuron0x1da70f0()*0.0604163);
}

double NNfunction_ss_cRcR::synapse0x1da9880() {
   return (neuron0x1da7430()*0.146453);
}

double NNfunction_ss_cRcR::synapse0x1da98c0() {
   return (neuron0x1da7770()*0.0207703);
}

double NNfunction_ss_cRcR::synapse0x1da9900() {
   return (neuron0x1da7ab0()*-0.330972);
}

double NNfunction_ss_cRcR::synapse0x1da9940() {
   return (neuron0x1da7df0()*0.163824);
}

double NNfunction_ss_cRcR::synapse0x1da9980() {
   return (neuron0x1da8130()*-0.39936);
}

double NNfunction_ss_cRcR::synapse0x1da9d00() {
   return (neuron0x1da3570()*0.0560409);
}

double NNfunction_ss_cRcR::synapse0x1da9d40() {
   return (neuron0x1da38b0()*-0.256785);
}

double NNfunction_ss_cRcR::synapse0x1da9d80() {
   return (neuron0x1da3bf0()*0.0589632);
}

double NNfunction_ss_cRcR::synapse0x1da9dc0() {
   return (neuron0x1da3f30()*0.388448);
}

double NNfunction_ss_cRcR::synapse0x1da9e00() {
   return (neuron0x1da4270()*0.1535);
}

double NNfunction_ss_cRcR::synapse0x1da9e40() {
   return (neuron0x1da45b0()*0.100826);
}

double NNfunction_ss_cRcR::synapse0x1da9e80() {
   return (neuron0x1da48f0()*-0.0884219);
}

double NNfunction_ss_cRcR::synapse0x1da9ec0() {
   return (neuron0x1da4c30()*0.0845831);
}

double NNfunction_ss_cRcR::synapse0x1da9f00() {
   return (neuron0x1da4f70()*-0.153264);
}

double NNfunction_ss_cRcR::synapse0x1da9f40() {
   return (neuron0x1da52b0()*-0.268705);
}

double NNfunction_ss_cRcR::synapse0x1da9f80() {
   return (neuron0x1da55f0()*0.278181);
}

double NNfunction_ss_cRcR::synapse0x1da9fc0() {
   return (neuron0x1da5930()*-0.589421);
}

double NNfunction_ss_cRcR::synapse0x1daa000() {
   return (neuron0x1da5c70()*0.913332);
}

double NNfunction_ss_cRcR::synapse0x1daa040() {
   return (neuron0x1da5fb0()*0.062853);
}

double NNfunction_ss_cRcR::synapse0x1daa080() {
   return (neuron0x1da62f0()*0.143537);
}

double NNfunction_ss_cRcR::synapse0x1daa0c0() {
   return (neuron0x1da6630()*0.108);
}

double NNfunction_ss_cRcR::synapse0x1da9b50() {
   return (neuron0x1da6970()*0.140361);
}

double NNfunction_ss_cRcR::synapse0x1da9b90() {
   return (neuron0x1da6ed0()*0.208108);
}

double NNfunction_ss_cRcR::synapse0x1b62ad0() {
   return (neuron0x1da70f0()*-0.085039);
}

double NNfunction_ss_cRcR::synapse0x1b62b10() {
   return (neuron0x1da7430()*0.00549717);
}

double NNfunction_ss_cRcR::synapse0x1d92600() {
   return (neuron0x1da7770()*-0.0165712);
}

double NNfunction_ss_cRcR::synapse0x1d92640() {
   return (neuron0x1da7ab0()*0.0618122);
}

double NNfunction_ss_cRcR::synapse0x1d92680() {
   return (neuron0x1da7df0()*0.0475293);
}

double NNfunction_ss_cRcR::synapse0x1da34b0() {
   return (neuron0x1da8130()*-0.0250828);
}

double NNfunction_ss_cRcR::synapse0x1da9610() {
   return (neuron0x1da3570()*-0.173511);
}

double NNfunction_ss_cRcR::synapse0x1da34f0() {
   return (neuron0x1da38b0()*-0.0384915);
}

double NNfunction_ss_cRcR::synapse0x1da3530() {
   return (neuron0x1da3bf0()*-0.0769837);
}

double NNfunction_ss_cRcR::synapse0x1daa210() {
   return (neuron0x1da3f30()*-0.0956913);
}

double NNfunction_ss_cRcR::synapse0x1daa250() {
   return (neuron0x1da4270()*-0.0677461);
}

double NNfunction_ss_cRcR::synapse0x1daa290() {
   return (neuron0x1da45b0()*-0.0139825);
}

double NNfunction_ss_cRcR::synapse0x1daa2d0() {
   return (neuron0x1da48f0()*-0.00421241);
}

double NNfunction_ss_cRcR::synapse0x1daa310() {
   return (neuron0x1da4c30()*0.093862);
}

double NNfunction_ss_cRcR::synapse0x1daa350() {
   return (neuron0x1da4f70()*-0.0648106);
}

double NNfunction_ss_cRcR::synapse0x1daa390() {
   return (neuron0x1da52b0()*0.102596);
}

double NNfunction_ss_cRcR::synapse0x1daa3d0() {
   return (neuron0x1da55f0()*0.429235);
}

double NNfunction_ss_cRcR::synapse0x1daa410() {
   return (neuron0x1da5930()*0.158869);
}

double NNfunction_ss_cRcR::synapse0x1daa450() {
   return (neuron0x1da5c70()*0.24762);
}

double NNfunction_ss_cRcR::synapse0x1daa490() {
   return (neuron0x1da5fb0()*-0.174658);
}

double NNfunction_ss_cRcR::synapse0x1daa4d0() {
   return (neuron0x1da62f0()*0.0666284);
}

double NNfunction_ss_cRcR::synapse0x1daa510() {
   return (neuron0x1da6630()*0.974703);
}

double NNfunction_ss_cRcR::synapse0x1da9460() {
   return (neuron0x1da6970()*-0.249171);
}

double NNfunction_ss_cRcR::synapse0x1da94a0() {
   return (neuron0x1da6ed0()*0.598517);
}

double NNfunction_ss_cRcR::synapse0x1daa660() {
   return (neuron0x1da70f0()*0.0261488);
}

double NNfunction_ss_cRcR::synapse0x1daa6a0() {
   return (neuron0x1da7430()*-0.0259341);
}

double NNfunction_ss_cRcR::synapse0x1daa6e0() {
   return (neuron0x1da7770()*-0.0689172);
}

double NNfunction_ss_cRcR::synapse0x1daa720() {
   return (neuron0x1da7ab0()*-0.0719934);
}

double NNfunction_ss_cRcR::synapse0x1daa760() {
   return (neuron0x1da7df0()*-0.28618);
}

double NNfunction_ss_cRcR::synapse0x1daa7a0() {
   return (neuron0x1da8130()*0.290529);
}

double NNfunction_ss_cRcR::synapse0x1daab20() {
   return (neuron0x1da3570()*0.00525345);
}

double NNfunction_ss_cRcR::synapse0x1daab60() {
   return (neuron0x1da38b0()*-0.0264891);
}

double NNfunction_ss_cRcR::synapse0x1daaba0() {
   return (neuron0x1da3bf0()*0.0110189);
}

double NNfunction_ss_cRcR::synapse0x1daabe0() {
   return (neuron0x1da3f30()*3.09108);
}

double NNfunction_ss_cRcR::synapse0x1daac20() {
   return (neuron0x1da4270()*-0.00298185);
}

double NNfunction_ss_cRcR::synapse0x1daac60() {
   return (neuron0x1da45b0()*-0.00873597);
}

double NNfunction_ss_cRcR::synapse0x1daaca0() {
   return (neuron0x1da48f0()*0.00301517);
}

double NNfunction_ss_cRcR::synapse0x1daace0() {
   return (neuron0x1da4c30()*0.0206206);
}

double NNfunction_ss_cRcR::synapse0x1daad20() {
   return (neuron0x1da4f70()*0.00292381);
}

double NNfunction_ss_cRcR::synapse0x1daad60() {
   return (neuron0x1da52b0()*-0.00202666);
}

double NNfunction_ss_cRcR::synapse0x1daada0() {
   return (neuron0x1da55f0()*-0.0167281);
}

double NNfunction_ss_cRcR::synapse0x1daade0() {
   return (neuron0x1da5930()*-0.0253563);
}

double NNfunction_ss_cRcR::synapse0x1daae20() {
   return (neuron0x1da5c70()*-0.00191792);
}

double NNfunction_ss_cRcR::synapse0x1daae60() {
   return (neuron0x1da5fb0()*0.026882);
}

double NNfunction_ss_cRcR::synapse0x1daaea0() {
   return (neuron0x1da62f0()*0.00318378);
}

double NNfunction_ss_cRcR::synapse0x1daaee0() {
   return (neuron0x1da6630()*0.273496);
}

double NNfunction_ss_cRcR::synapse0x1daa970() {
   return (neuron0x1da6970()*0.0310012);
}

double NNfunction_ss_cRcR::synapse0x1daa9b0() {
   return (neuron0x1da6ed0()*-0.0053261);
}

double NNfunction_ss_cRcR::synapse0x1dab030() {
   return (neuron0x1da70f0()*-0.0325516);
}

double NNfunction_ss_cRcR::synapse0x1dab070() {
   return (neuron0x1da7430()*-0.010913);
}

double NNfunction_ss_cRcR::synapse0x1dab0b0() {
   return (neuron0x1da7770()*-0.00117561);
}

double NNfunction_ss_cRcR::synapse0x1dab0f0() {
   return (neuron0x1da7ab0()*-0.000747238);
}

double NNfunction_ss_cRcR::synapse0x1dab130() {
   return (neuron0x1da7df0()*0.00122415);
}

double NNfunction_ss_cRcR::synapse0x1dab170() {
   return (neuron0x1da8130()*-0.00904665);
}

double NNfunction_ss_cRcR::synapse0x1dab4f0() {
   return (neuron0x1da3570()*0.507868);
}

double NNfunction_ss_cRcR::synapse0x1dab530() {
   return (neuron0x1da38b0()*1.02833);
}

double NNfunction_ss_cRcR::synapse0x1dab570() {
   return (neuron0x1da3bf0()*0.125647);
}

double NNfunction_ss_cRcR::synapse0x1dab5b0() {
   return (neuron0x1da3f30()*-0.019888);
}

double NNfunction_ss_cRcR::synapse0x1dab5f0() {
   return (neuron0x1da4270()*-0.818352);
}

double NNfunction_ss_cRcR::synapse0x1dab630() {
   return (neuron0x1da45b0()*0.800239);
}

double NNfunction_ss_cRcR::synapse0x1dab670() {
   return (neuron0x1da48f0()*0.993927);
}

double NNfunction_ss_cRcR::synapse0x1dab6b0() {
   return (neuron0x1da4c30()*0.778125);
}

double NNfunction_ss_cRcR::synapse0x1dab6f0() {
   return (neuron0x1da4f70()*0.853472);
}

double NNfunction_ss_cRcR::synapse0x1b62e40() {
   return (neuron0x1da52b0()*-0.437237);
}

double NNfunction_ss_cRcR::synapse0x1b62e80() {
   return (neuron0x1da55f0()*-0.345884);
}

double NNfunction_ss_cRcR::synapse0x1b62ec0() {
   return (neuron0x1da5930()*0.276255);
}

double NNfunction_ss_cRcR::synapse0x1b62f00() {
   return (neuron0x1da5c70()*-0.498181);
}

double NNfunction_ss_cRcR::synapse0x1b62f40() {
   return (neuron0x1da5fb0()*0.4082);
}

double NNfunction_ss_cRcR::synapse0x1b62f80() {
   return (neuron0x1da62f0()*-0.00480681);
}

double NNfunction_ss_cRcR::synapse0x1b62fc0() {
   return (neuron0x1da6630()*-0.0708316);
}

double NNfunction_ss_cRcR::synapse0x1dab340() {
   return (neuron0x1da6970()*0.468786);
}

double NNfunction_ss_cRcR::synapse0x1dab380() {
   return (neuron0x1da6ed0()*-1.0489);
}

double NNfunction_ss_cRcR::synapse0x1b63110() {
   return (neuron0x1da70f0()*0.842472);
}

double NNfunction_ss_cRcR::synapse0x1b63150() {
   return (neuron0x1da7430()*0.0719591);
}

double NNfunction_ss_cRcR::synapse0x1b63190() {
   return (neuron0x1da7770()*-0.639967);
}

double NNfunction_ss_cRcR::synapse0x1b631d0() {
   return (neuron0x1da7ab0()*-0.297487);
}

double NNfunction_ss_cRcR::synapse0x1b63210() {
   return (neuron0x1da7df0()*0.758338);
}

double NNfunction_ss_cRcR::synapse0x1dabf40() {
   return (neuron0x1da8130()*-0.430396);
}

double NNfunction_ss_cRcR::synapse0x1dac2c0() {
   return (neuron0x1da3570()*0.203821);
}

double NNfunction_ss_cRcR::synapse0x1dac300() {
   return (neuron0x1da38b0()*-0.619021);
}

double NNfunction_ss_cRcR::synapse0x1dac340() {
   return (neuron0x1da3bf0()*-0.179278);
}

double NNfunction_ss_cRcR::synapse0x1dac380() {
   return (neuron0x1da3f30()*-0.39823);
}

double NNfunction_ss_cRcR::synapse0x1dac3c0() {
   return (neuron0x1da4270()*-0.345648);
}

double NNfunction_ss_cRcR::synapse0x1dac400() {
   return (neuron0x1da45b0()*-0.319783);
}

double NNfunction_ss_cRcR::synapse0x1dac440() {
   return (neuron0x1da48f0()*0.306853);
}

double NNfunction_ss_cRcR::synapse0x1dac480() {
   return (neuron0x1da4c30()*0.154789);
}

double NNfunction_ss_cRcR::synapse0x1dac4c0() {
   return (neuron0x1da4f70()*0.0199169);
}

double NNfunction_ss_cRcR::synapse0x1dac500() {
   return (neuron0x1da52b0()*-0.439511);
}

double NNfunction_ss_cRcR::synapse0x1dac540() {
   return (neuron0x1da55f0()*0.608067);
}

double NNfunction_ss_cRcR::synapse0x1dac580() {
   return (neuron0x1da5930()*0.818755);
}

double NNfunction_ss_cRcR::synapse0x1dac5c0() {
   return (neuron0x1da5c70()*0.272801);
}

double NNfunction_ss_cRcR::synapse0x1dac600() {
   return (neuron0x1da5fb0()*-0.598064);
}

double NNfunction_ss_cRcR::synapse0x1dac640() {
   return (neuron0x1da62f0()*-0.026792);
}

double NNfunction_ss_cRcR::synapse0x1dac680() {
   return (neuron0x1da6630()*-0.453874);
}

double NNfunction_ss_cRcR::synapse0x1dac110() {
   return (neuron0x1da6970()*-0.817583);
}

double NNfunction_ss_cRcR::synapse0x1dac150() {
   return (neuron0x1da6ed0()*-0.34695);
}

double NNfunction_ss_cRcR::synapse0x1dac7d0() {
   return (neuron0x1da70f0()*-0.852657);
}

double NNfunction_ss_cRcR::synapse0x1dac810() {
   return (neuron0x1da7430()*0.110272);
}

double NNfunction_ss_cRcR::synapse0x1dac850() {
   return (neuron0x1da7770()*0.710579);
}

double NNfunction_ss_cRcR::synapse0x1dac890() {
   return (neuron0x1da7ab0()*-0.494384);
}

double NNfunction_ss_cRcR::synapse0x1dac8d0() {
   return (neuron0x1da7df0()*-1.02364);
}

double NNfunction_ss_cRcR::synapse0x1dac910() {
   return (neuron0x1da8130()*0.14328);
}

double NNfunction_ss_cRcR::synapse0x1dacc90() {
   return (neuron0x1da3570()*0.0727138);
}

double NNfunction_ss_cRcR::synapse0x1daccd0() {
   return (neuron0x1da38b0()*-0.0841128);
}

double NNfunction_ss_cRcR::synapse0x1dacd10() {
   return (neuron0x1da3bf0()*0.011498);
}

double NNfunction_ss_cRcR::synapse0x1dacd50() {
   return (neuron0x1da3f30()*0.335178);
}

double NNfunction_ss_cRcR::synapse0x1dacd90() {
   return (neuron0x1da4270()*0.207248);
}

double NNfunction_ss_cRcR::synapse0x1dacdd0() {
   return (neuron0x1da45b0()*0.896606);
}

double NNfunction_ss_cRcR::synapse0x1dace10() {
   return (neuron0x1da48f0()*-0.133536);
}

double NNfunction_ss_cRcR::synapse0x1dace50() {
   return (neuron0x1da4c30()*-0.0327264);
}

double NNfunction_ss_cRcR::synapse0x1dace90() {
   return (neuron0x1da4f70()*0.131284);
}

double NNfunction_ss_cRcR::synapse0x1daced0() {
   return (neuron0x1da52b0()*-0.0139965);
}

double NNfunction_ss_cRcR::synapse0x1dacf10() {
   return (neuron0x1da55f0()*-0.00756441);
}

double NNfunction_ss_cRcR::synapse0x1dacf50() {
   return (neuron0x1da5930()*0.0163636);
}

double NNfunction_ss_cRcR::synapse0x1dacf90() {
   return (neuron0x1da5c70()*0.0570657);
}

double NNfunction_ss_cRcR::synapse0x1dacfd0() {
   return (neuron0x1da5fb0()*0.1358);
}

double NNfunction_ss_cRcR::synapse0x1dad010() {
   return (neuron0x1da62f0()*-0.26251);
}

double NNfunction_ss_cRcR::synapse0x1dad050() {
   return (neuron0x1da6630()*-0.0610719);
}

double NNfunction_ss_cRcR::synapse0x1dacae0() {
   return (neuron0x1da6970()*0.340479);
}

double NNfunction_ss_cRcR::synapse0x1dacb20() {
   return (neuron0x1da6ed0()*0.155728);
}

double NNfunction_ss_cRcR::synapse0x1dad1a0() {
   return (neuron0x1da70f0()*0.0169501);
}

double NNfunction_ss_cRcR::synapse0x1dad1e0() {
   return (neuron0x1da7430()*-0.0837264);
}

double NNfunction_ss_cRcR::synapse0x1dad220() {
   return (neuron0x1da7770()*0.00823585);
}

double NNfunction_ss_cRcR::synapse0x1dad260() {
   return (neuron0x1da7ab0()*0.0761391);
}

double NNfunction_ss_cRcR::synapse0x1dad2a0() {
   return (neuron0x1da7df0()*0.031071);
}

double NNfunction_ss_cRcR::synapse0x1dad2e0() {
   return (neuron0x1da8130()*-0.0941198);
}

double NNfunction_ss_cRcR::synapse0x1da6dc0() {
   return (neuron0x1da3570()*0.223076);
}

double NNfunction_ss_cRcR::synapse0x1da6e00() {
   return (neuron0x1da38b0()*-0.326156);
}

double NNfunction_ss_cRcR::synapse0x1da6e40() {
   return (neuron0x1da3bf0()*0.225521);
}

double NNfunction_ss_cRcR::synapse0x1da6e80() {
   return (neuron0x1da3f30()*-1.62322);
}

double NNfunction_ss_cRcR::synapse0x1dad870() {
   return (neuron0x1da4270()*0.570277);
}

double NNfunction_ss_cRcR::synapse0x1dad8b0() {
   return (neuron0x1da45b0()*-1.14778);
}

double NNfunction_ss_cRcR::synapse0x1dad8f0() {
   return (neuron0x1da48f0()*-1.28593);
}

double NNfunction_ss_cRcR::synapse0x1dad930() {
   return (neuron0x1da4c30()*-1.07868);
}

double NNfunction_ss_cRcR::synapse0x1dad970() {
   return (neuron0x1da4f70()*0.605345);
}

double NNfunction_ss_cRcR::synapse0x1dad9b0() {
   return (neuron0x1da52b0()*-0.484048);
}

double NNfunction_ss_cRcR::synapse0x1dad9f0() {
   return (neuron0x1da55f0()*-0.146597);
}

double NNfunction_ss_cRcR::synapse0x1dada30() {
   return (neuron0x1da5930()*-0.114735);
}

double NNfunction_ss_cRcR::synapse0x1dada70() {
   return (neuron0x1da5c70()*0.0793584);
}

double NNfunction_ss_cRcR::synapse0x1dadab0() {
   return (neuron0x1da5fb0()*-0.22828);
}

double NNfunction_ss_cRcR::synapse0x1dadaf0() {
   return (neuron0x1da62f0()*0.156664);
}

double NNfunction_ss_cRcR::synapse0x1dadb30() {
   return (neuron0x1da6630()*0.834733);
}

double NNfunction_ss_cRcR::synapse0x1dad4b0() {
   return (neuron0x1da6970()*-0.363422);
}

double NNfunction_ss_cRcR::synapse0x1dad4f0() {
   return (neuron0x1da6ed0()*0.00698848);
}

double NNfunction_ss_cRcR::synapse0x1dadc80() {
   return (neuron0x1da70f0()*-0.325056);
}

double NNfunction_ss_cRcR::synapse0x1dadcc0() {
   return (neuron0x1da7430()*0.682839);
}

double NNfunction_ss_cRcR::synapse0x1dadd00() {
   return (neuron0x1da7770()*0.447511);
}

double NNfunction_ss_cRcR::synapse0x1dadd40() {
   return (neuron0x1da7ab0()*-0.0902206);
}

double NNfunction_ss_cRcR::synapse0x1dadd80() {
   return (neuron0x1da7df0()*0.107249);
}

double NNfunction_ss_cRcR::synapse0x1daddc0() {
   return (neuron0x1da8130()*0.00510536);
}

double NNfunction_ss_cRcR::synapse0x1dae140() {
   return (neuron0x1da3570()*0.0809544);
}

double NNfunction_ss_cRcR::synapse0x1dae180() {
   return (neuron0x1da38b0()*-0.0722024);
}

double NNfunction_ss_cRcR::synapse0x1dae1c0() {
   return (neuron0x1da3bf0()*0.101465);
}

double NNfunction_ss_cRcR::synapse0x1dae200() {
   return (neuron0x1da3f30()*-0.271289);
}

double NNfunction_ss_cRcR::synapse0x1dae240() {
   return (neuron0x1da4270()*-0.171245);
}

double NNfunction_ss_cRcR::synapse0x1dae280() {
   return (neuron0x1da45b0()*-0.369712);
}

double NNfunction_ss_cRcR::synapse0x1dae2c0() {
   return (neuron0x1da48f0()*-0.170825);
}

double NNfunction_ss_cRcR::synapse0x1dae300() {
   return (neuron0x1da4c30()*-0.221802);
}

double NNfunction_ss_cRcR::synapse0x1dae340() {
   return (neuron0x1da4f70()*-0.0922457);
}

double NNfunction_ss_cRcR::synapse0x1dae380() {
   return (neuron0x1da52b0()*0.10598);
}

double NNfunction_ss_cRcR::synapse0x1dae3c0() {
   return (neuron0x1da55f0()*0.185151);
}

double NNfunction_ss_cRcR::synapse0x1dae400() {
   return (neuron0x1da5930()*-0.125084);
}

double NNfunction_ss_cRcR::synapse0x1dae440() {
   return (neuron0x1da5c70()*0.0336637);
}

double NNfunction_ss_cRcR::synapse0x1dae480() {
   return (neuron0x1da5fb0()*-0.194959);
}

double NNfunction_ss_cRcR::synapse0x1dae4c0() {
   return (neuron0x1da62f0()*-0.150293);
}

double NNfunction_ss_cRcR::synapse0x1dae500() {
   return (neuron0x1da6630()*4.04473);
}

double NNfunction_ss_cRcR::synapse0x1dadf90() {
   return (neuron0x1da6970()*-0.152925);
}

double NNfunction_ss_cRcR::synapse0x1dadfd0() {
   return (neuron0x1da6ed0()*0.0195484);
}

double NNfunction_ss_cRcR::synapse0x1dae650() {
   return (neuron0x1da70f0()*-0.107648);
}

double NNfunction_ss_cRcR::synapse0x1dae690() {
   return (neuron0x1da7430()*0.0448216);
}

double NNfunction_ss_cRcR::synapse0x1dae6d0() {
   return (neuron0x1da7770()*-0.00806687);
}

double NNfunction_ss_cRcR::synapse0x1dae710() {
   return (neuron0x1da7ab0()*0.0808663);
}

double NNfunction_ss_cRcR::synapse0x1dae750() {
   return (neuron0x1da7df0()*-0.106917);
}

double NNfunction_ss_cRcR::synapse0x1dae790() {
   return (neuron0x1da8130()*0.164619);
}

double NNfunction_ss_cRcR::synapse0x1daeb10() {
   return (neuron0x1da3570()*0.0499122);
}

double NNfunction_ss_cRcR::synapse0x1daeb50() {
   return (neuron0x1da38b0()*0.276686);
}

double NNfunction_ss_cRcR::synapse0x1daeb90() {
   return (neuron0x1da3bf0()*-0.0764767);
}

double NNfunction_ss_cRcR::synapse0x1daebd0() {
   return (neuron0x1da3f30()*-0.39818);
}

double NNfunction_ss_cRcR::synapse0x1daec10() {
   return (neuron0x1da4270()*-0.000812425);
}

double NNfunction_ss_cRcR::synapse0x1daec50() {
   return (neuron0x1da45b0()*-0.204927);
}

double NNfunction_ss_cRcR::synapse0x1daec90() {
   return (neuron0x1da48f0()*-0.00200797);
}

double NNfunction_ss_cRcR::synapse0x1daecd0() {
   return (neuron0x1da4c30()*-0.162793);
}

double NNfunction_ss_cRcR::synapse0x1daed10() {
   return (neuron0x1da4f70()*0.19875);
}

double NNfunction_ss_cRcR::synapse0x1daed50() {
   return (neuron0x1da52b0()*0.131775);
}

double NNfunction_ss_cRcR::synapse0x1daed90() {
   return (neuron0x1da55f0()*0.0221464);
}

double NNfunction_ss_cRcR::synapse0x1daedd0() {
   return (neuron0x1da5930()*-0.148506);
}

double NNfunction_ss_cRcR::synapse0x1daee10() {
   return (neuron0x1da5c70()*0.0984957);
}

double NNfunction_ss_cRcR::synapse0x1daee50() {
   return (neuron0x1da5fb0()*-0.246849);
}

double NNfunction_ss_cRcR::synapse0x1daee90() {
   return (neuron0x1da62f0()*0.141799);
}

double NNfunction_ss_cRcR::synapse0x1daeed0() {
   return (neuron0x1da6630()*-0.428601);
}

double NNfunction_ss_cRcR::synapse0x1dae960() {
   return (neuron0x1da6970()*-0.0955125);
}

double NNfunction_ss_cRcR::synapse0x1dae9a0() {
   return (neuron0x1da6ed0()*-0.0420988);
}

double NNfunction_ss_cRcR::synapse0x1dab730() {
   return (neuron0x1da70f0()*0.156077);
}

double NNfunction_ss_cRcR::synapse0x1dab770() {
   return (neuron0x1da7430()*-0.573755);
}

double NNfunction_ss_cRcR::synapse0x1dab7b0() {
   return (neuron0x1da7770()*-0.102179);
}

double NNfunction_ss_cRcR::synapse0x1dab7f0() {
   return (neuron0x1da7ab0()*-0.0391843);
}

double NNfunction_ss_cRcR::synapse0x1dab830() {
   return (neuron0x1da7df0()*-0.00130076);
}

double NNfunction_ss_cRcR::synapse0x1dab870() {
   return (neuron0x1da8130()*0.0340301);
}

double NNfunction_ss_cRcR::synapse0x1dabbf0() {
   return (neuron0x1da3570()*0.247809);
}

double NNfunction_ss_cRcR::synapse0x1dabc30() {
   return (neuron0x1da38b0()*-0.326822);
}

double NNfunction_ss_cRcR::synapse0x1dabc70() {
   return (neuron0x1da3bf0()*0.451024);
}

double NNfunction_ss_cRcR::synapse0x1dabcb0() {
   return (neuron0x1da3f30()*-0.740506);
}

double NNfunction_ss_cRcR::synapse0x1dabcf0() {
   return (neuron0x1da4270()*0.346058);
}

double NNfunction_ss_cRcR::synapse0x1dabd30() {
   return (neuron0x1da45b0()*0.350806);
}

double NNfunction_ss_cRcR::synapse0x1dabd70() {
   return (neuron0x1da48f0()*0.0484922);
}

double NNfunction_ss_cRcR::synapse0x1dabdb0() {
   return (neuron0x1da4c30()*-0.0958712);
}

double NNfunction_ss_cRcR::synapse0x1dabdf0() {
   return (neuron0x1da4f70()*0.665756);
}

double NNfunction_ss_cRcR::synapse0x1dabe30() {
   return (neuron0x1da52b0()*-0.987316);
}

double NNfunction_ss_cRcR::synapse0x1dabe70() {
   return (neuron0x1da55f0()*0.262101);
}

double NNfunction_ss_cRcR::synapse0x1dabeb0() {
   return (neuron0x1da5930()*1.19019);
}

double NNfunction_ss_cRcR::synapse0x1dabef0() {
   return (neuron0x1da5c70()*-1.10323);
}

double NNfunction_ss_cRcR::synapse0x1db0030() {
   return (neuron0x1da5fb0()*0.320896);
}

double NNfunction_ss_cRcR::synapse0x1db0070() {
   return (neuron0x1da62f0()*-0.328664);
}

double NNfunction_ss_cRcR::synapse0x1db00b0() {
   return (neuron0x1da6630()*-1.10504);
}

double NNfunction_ss_cRcR::synapse0x1daba40() {
   return (neuron0x1da6970()*0.0712897);
}

double NNfunction_ss_cRcR::synapse0x1daba80() {
   return (neuron0x1da6ed0()*-0.727551);
}

double NNfunction_ss_cRcR::synapse0x1db0200() {
   return (neuron0x1da70f0()*-0.0801191);
}

double NNfunction_ss_cRcR::synapse0x1db0240() {
   return (neuron0x1da7430()*-0.0150746);
}

double NNfunction_ss_cRcR::synapse0x1db0280() {
   return (neuron0x1da7770()*0.660672);
}

double NNfunction_ss_cRcR::synapse0x1db02c0() {
   return (neuron0x1da7ab0()*0.635243);
}

double NNfunction_ss_cRcR::synapse0x1db0300() {
   return (neuron0x1da7df0()*-0.531422);
}

double NNfunction_ss_cRcR::synapse0x1db0340() {
   return (neuron0x1da8130()*-0.0191882);
}

double NNfunction_ss_cRcR::synapse0x1db06c0() {
   return (neuron0x1da3570()*0.00467551);
}

double NNfunction_ss_cRcR::synapse0x1db0700() {
   return (neuron0x1da38b0()*0.198302);
}

double NNfunction_ss_cRcR::synapse0x1db0740() {
   return (neuron0x1da3bf0()*-0.00770841);
}

double NNfunction_ss_cRcR::synapse0x1db0780() {
   return (neuron0x1da3f30()*-0.163677);
}

double NNfunction_ss_cRcR::synapse0x1db07c0() {
   return (neuron0x1da4270()*0.185653);
}

double NNfunction_ss_cRcR::synapse0x1db0800() {
   return (neuron0x1da45b0()*0.155789);
}

double NNfunction_ss_cRcR::synapse0x1db0840() {
   return (neuron0x1da48f0()*0.209453);
}

double NNfunction_ss_cRcR::synapse0x1db0880() {
   return (neuron0x1da4c30()*0.107194);
}

double NNfunction_ss_cRcR::synapse0x1db08c0() {
   return (neuron0x1da4f70()*0.0905389);
}

double NNfunction_ss_cRcR::synapse0x1db0900() {
   return (neuron0x1da52b0()*0.023755);
}

double NNfunction_ss_cRcR::synapse0x1db0940() {
   return (neuron0x1da55f0()*-0.121991);
}

double NNfunction_ss_cRcR::synapse0x1db0980() {
   return (neuron0x1da5930()*0.0285655);
}

double NNfunction_ss_cRcR::synapse0x1db09c0() {
   return (neuron0x1da5c70()*-0.125935);
}

double NNfunction_ss_cRcR::synapse0x1db0a00() {
   return (neuron0x1da5fb0()*0.0919441);
}

double NNfunction_ss_cRcR::synapse0x1db0a40() {
   return (neuron0x1da62f0()*0.120325);
}

double NNfunction_ss_cRcR::synapse0x1db0a80() {
   return (neuron0x1da6630()*0.681477);
}

double NNfunction_ss_cRcR::synapse0x1db0510() {
   return (neuron0x1da6970()*0.163127);
}

double NNfunction_ss_cRcR::synapse0x1db0550() {
   return (neuron0x1da6ed0()*-0.0710938);
}

double NNfunction_ss_cRcR::synapse0x1db0bd0() {
   return (neuron0x1da70f0()*-0.0411804);
}

double NNfunction_ss_cRcR::synapse0x1db0c10() {
   return (neuron0x1da7430()*-0.0306325);
}

double NNfunction_ss_cRcR::synapse0x1db0c50() {
   return (neuron0x1da7770()*0.0419076);
}

double NNfunction_ss_cRcR::synapse0x1db0c90() {
   return (neuron0x1da7ab0()*0.0202056);
}

double NNfunction_ss_cRcR::synapse0x1db0cd0() {
   return (neuron0x1da7df0()*0.0257604);
}

double NNfunction_ss_cRcR::synapse0x1db0d10() {
   return (neuron0x1da8130()*-0.0379773);
}

double NNfunction_ss_cRcR::synapse0x1db1090() {
   return (neuron0x1da3570()*-0.445699);
}

double NNfunction_ss_cRcR::synapse0x1db10d0() {
   return (neuron0x1da38b0()*0.100272);
}

double NNfunction_ss_cRcR::synapse0x1db1110() {
   return (neuron0x1da3bf0()*-0.304051);
}

double NNfunction_ss_cRcR::synapse0x1db1150() {
   return (neuron0x1da3f30()*0.339405);
}

double NNfunction_ss_cRcR::synapse0x1db1190() {
   return (neuron0x1da4270()*0.0518073);
}

double NNfunction_ss_cRcR::synapse0x1db11d0() {
   return (neuron0x1da45b0()*0.487353);
}

double NNfunction_ss_cRcR::synapse0x1db1210() {
   return (neuron0x1da48f0()*0.518976);
}

double NNfunction_ss_cRcR::synapse0x1db1250() {
   return (neuron0x1da4c30()*0.900773);
}

double NNfunction_ss_cRcR::synapse0x1db1290() {
   return (neuron0x1da4f70()*-0.278327);
}

double NNfunction_ss_cRcR::synapse0x1db12d0() {
   return (neuron0x1da52b0()*-0.0122073);
}

double NNfunction_ss_cRcR::synapse0x1db1310() {
   return (neuron0x1da55f0()*-0.210244);
}

double NNfunction_ss_cRcR::synapse0x1db1350() {
   return (neuron0x1da5930()*0.125945);
}

double NNfunction_ss_cRcR::synapse0x1db1390() {
   return (neuron0x1da5c70()*-0.000837962);
}

double NNfunction_ss_cRcR::synapse0x1db13d0() {
   return (neuron0x1da5fb0()*-0.345872);
}

double NNfunction_ss_cRcR::synapse0x1db1410() {
   return (neuron0x1da62f0()*0.35937);
}

double NNfunction_ss_cRcR::synapse0x1db1450() {
   return (neuron0x1da6630()*-1.54426);
}

double NNfunction_ss_cRcR::synapse0x1db0ee0() {
   return (neuron0x1da6970()*0.0939505);
}

double NNfunction_ss_cRcR::synapse0x1db0f20() {
   return (neuron0x1da6ed0()*0.29466);
}

double NNfunction_ss_cRcR::synapse0x1db15a0() {
   return (neuron0x1da70f0()*-0.0354483);
}

double NNfunction_ss_cRcR::synapse0x1db15e0() {
   return (neuron0x1da7430()*0.107511);
}

double NNfunction_ss_cRcR::synapse0x1db1620() {
   return (neuron0x1da7770()*-0.00546627);
}

double NNfunction_ss_cRcR::synapse0x1db1660() {
   return (neuron0x1da7ab0()*-0.204078);
}

double NNfunction_ss_cRcR::synapse0x1db16a0() {
   return (neuron0x1da7df0()*-0.277677);
}

double NNfunction_ss_cRcR::synapse0x1db16e0() {
   return (neuron0x1da8130()*0.00701315);
}

double NNfunction_ss_cRcR::synapse0x1db1a60() {
   return (neuron0x1da3570()*-1.01584);
}

double NNfunction_ss_cRcR::synapse0x1db1aa0() {
   return (neuron0x1da38b0()*0.103235);
}

double NNfunction_ss_cRcR::synapse0x1db1ae0() {
   return (neuron0x1da3bf0()*1.2428);
}

double NNfunction_ss_cRcR::synapse0x1db1b20() {
   return (neuron0x1da3f30()*-0.0683372);
}

double NNfunction_ss_cRcR::synapse0x1db1b60() {
   return (neuron0x1da4270()*-0.337791);
}

double NNfunction_ss_cRcR::synapse0x1db1ba0() {
   return (neuron0x1da45b0()*-0.717736);
}

double NNfunction_ss_cRcR::synapse0x1db1be0() {
   return (neuron0x1da48f0()*0.860118);
}

double NNfunction_ss_cRcR::synapse0x1db1c20() {
   return (neuron0x1da4c30()*1.63414);
}

double NNfunction_ss_cRcR::synapse0x1db1c60() {
   return (neuron0x1da4f70()*-0.0150466);
}

double NNfunction_ss_cRcR::synapse0x1db1ca0() {
   return (neuron0x1da52b0()*0.294319);
}

double NNfunction_ss_cRcR::synapse0x1db1ce0() {
   return (neuron0x1da55f0()*0.273069);
}

double NNfunction_ss_cRcR::synapse0x1db1d20() {
   return (neuron0x1da5930()*-0.830123);
}

double NNfunction_ss_cRcR::synapse0x1db1d60() {
   return (neuron0x1da5c70()*-0.702172);
}

double NNfunction_ss_cRcR::synapse0x1db1da0() {
   return (neuron0x1da5fb0()*0.150177);
}

double NNfunction_ss_cRcR::synapse0x1db1de0() {
   return (neuron0x1da62f0()*-0.906634);
}

double NNfunction_ss_cRcR::synapse0x1db1e20() {
   return (neuron0x1da6630()*0.589364);
}

double NNfunction_ss_cRcR::synapse0x1db18b0() {
   return (neuron0x1da6970()*-0.702296);
}

double NNfunction_ss_cRcR::synapse0x1db18f0() {
   return (neuron0x1da6ed0()*-0.359561);
}

double NNfunction_ss_cRcR::synapse0x1db1f70() {
   return (neuron0x1da70f0()*0.190923);
}

double NNfunction_ss_cRcR::synapse0x1db1fb0() {
   return (neuron0x1da7430()*-0.917192);
}

double NNfunction_ss_cRcR::synapse0x1db1ff0() {
   return (neuron0x1da7770()*0.280417);
}

double NNfunction_ss_cRcR::synapse0x1db2030() {
   return (neuron0x1da7ab0()*0.606837);
}

double NNfunction_ss_cRcR::synapse0x1db2070() {
   return (neuron0x1da7df0()*-0.801676);
}

double NNfunction_ss_cRcR::synapse0x1db20b0() {
   return (neuron0x1da8130()*-0.406023);
}

double NNfunction_ss_cRcR::synapse0x1db2430() {
   return (neuron0x1da3570()*-0.0084392);
}

double NNfunction_ss_cRcR::synapse0x1da3790() {
   return (neuron0x1da38b0()*-0.540084);
}

double NNfunction_ss_cRcR::synapse0x1da37d0() {
   return (neuron0x1da3bf0()*-0.0134289);
}

double NNfunction_ss_cRcR::synapse0x1da3ad0() {
   return (neuron0x1da3f30()*-2.77447);
}

double NNfunction_ss_cRcR::synapse0x1da3b10() {
   return (neuron0x1da4270()*0.106565);
}

double NNfunction_ss_cRcR::synapse0x1da3e10() {
   return (neuron0x1da45b0()*-0.0139407);
}

double NNfunction_ss_cRcR::synapse0x1da3e50() {
   return (neuron0x1da48f0()*-0.0460132);
}

double NNfunction_ss_cRcR::synapse0x1da4150() {
   return (neuron0x1da4c30()*0.0954207);
}

double NNfunction_ss_cRcR::synapse0x1da4190() {
   return (neuron0x1da4f70()*-0.0855557);
}

double NNfunction_ss_cRcR::synapse0x1da4490() {
   return (neuron0x1da52b0()*0.042374);
}

double NNfunction_ss_cRcR::synapse0x1da44d0() {
   return (neuron0x1da55f0()*-0.100062);
}

double NNfunction_ss_cRcR::synapse0x1da47d0() {
   return (neuron0x1da5930()*-0.110654);
}

double NNfunction_ss_cRcR::synapse0x1da4810() {
   return (neuron0x1da5c70()*0.180631);
}

double NNfunction_ss_cRcR::synapse0x1da4b10() {
   return (neuron0x1da5fb0()*0.18835);
}

double NNfunction_ss_cRcR::synapse0x1da4b50() {
   return (neuron0x1da62f0()*0.134654);
}

double NNfunction_ss_cRcR::synapse0x1da4e50() {
   return (neuron0x1da6630()*0.39604);
}

double NNfunction_ss_cRcR::synapse0x1da4e90() {
   return (neuron0x1da6970()*0.230709);
}

double NNfunction_ss_cRcR::synapse0x1da5190() {
   return (neuron0x1da6ed0()*0.208013);
}

double NNfunction_ss_cRcR::synapse0x1da51d0() {
   return (neuron0x1da70f0()*-0.485678);
}

double NNfunction_ss_cRcR::synapse0x1da54d0() {
   return (neuron0x1da7430()*0.00932915);
}

double NNfunction_ss_cRcR::synapse0x1da5510() {
   return (neuron0x1da7770()*-0.217215);
}

double NNfunction_ss_cRcR::synapse0x1da5810() {
   return (neuron0x1da7ab0()*0.00796205);
}

double NNfunction_ss_cRcR::synapse0x1da5850() {
   return (neuron0x1da7df0()*0.152117);
}

double NNfunction_ss_cRcR::synapse0x1da5b50() {
   return (neuron0x1da8130()*0.0967735);
}

double NNfunction_ss_cRcR::synapse0x1da5b90() {
   return (neuron0x1da3570()*-0.0196432);
}

double NNfunction_ss_cRcR::synapse0x1da6850() {
   return (neuron0x1da38b0()*-0.0984329);
}

double NNfunction_ss_cRcR::synapse0x1da6890() {
   return (neuron0x1da3bf0()*0.106025);
}

double NNfunction_ss_cRcR::synapse0x1db2280() {
   return (neuron0x1da3f30()*0.247738);
}

double NNfunction_ss_cRcR::synapse0x1db22c0() {
   return (neuron0x1da4270()*-0.0141482);
}

double NNfunction_ss_cRcR::synapse0x1da6b90() {
   return (neuron0x1da45b0()*-0.192827);
}

double NNfunction_ss_cRcR::synapse0x1da6bd0() {
   return (neuron0x1da48f0()*-1.13962);
}

double NNfunction_ss_cRcR::synapse0x1b54b60() {
   return (neuron0x1da4c30()*0.0280088);
}

double NNfunction_ss_cRcR::synapse0x1b54ba0() {
   return (neuron0x1da4f70()*-0.152055);
}

double NNfunction_ss_cRcR::synapse0x1da7310() {
   return (neuron0x1da52b0()*-0.0207689);
}

double NNfunction_ss_cRcR::synapse0x1da7350() {
   return (neuron0x1da55f0()*-0.0218326);
}

double NNfunction_ss_cRcR::synapse0x1da7650() {
   return (neuron0x1da5930()*-0.0682077);
}

double NNfunction_ss_cRcR::synapse0x1da7690() {
   return (neuron0x1da5c70()*-0.0190404);
}

double NNfunction_ss_cRcR::synapse0x1da7990() {
   return (neuron0x1da5fb0()*-0.0623628);
}

double NNfunction_ss_cRcR::synapse0x1da79d0() {
   return (neuron0x1da62f0()*-0.148759);
}

double NNfunction_ss_cRcR::synapse0x1da7cd0() {
   return (neuron0x1da6630()*-0.294283);
}

double NNfunction_ss_cRcR::synapse0x1da7d10() {
   return (neuron0x1da6970()*-0.409197);
}

double NNfunction_ss_cRcR::synapse0x1da8010() {
   return (neuron0x1da6ed0()*-0.0803615);
}

double NNfunction_ss_cRcR::synapse0x1da8050() {
   return (neuron0x1da70f0()*0.0413962);
}

double NNfunction_ss_cRcR::synapse0x1da8350() {
   return (neuron0x1da7430()*0.0511959);
}

double NNfunction_ss_cRcR::synapse0x1da8390() {
   return (neuron0x1da7770()*0.0261576);
}

double NNfunction_ss_cRcR::synapse0x1da5e90() {
   return (neuron0x1da7ab0()*0.0402895);
}

double NNfunction_ss_cRcR::synapse0x1da5ed0() {
   return (neuron0x1da7df0()*0.00733576);
}

double NNfunction_ss_cRcR::synapse0x1db41a0() {
   return (neuron0x1da8130()*0.0209209);
}

double NNfunction_ss_cRcR::synapse0x1db4520() {
   return (neuron0x1da3570()*-0.847641);
}

double NNfunction_ss_cRcR::synapse0x1db4560() {
   return (neuron0x1da38b0()*-0.233231);
}

double NNfunction_ss_cRcR::synapse0x1db45a0() {
   return (neuron0x1da3bf0()*0.370349);
}

double NNfunction_ss_cRcR::synapse0x1db45e0() {
   return (neuron0x1da3f30()*-3.25357);
}

double NNfunction_ss_cRcR::synapse0x1db4620() {
   return (neuron0x1da4270()*1.26537);
}

double NNfunction_ss_cRcR::synapse0x1db4660() {
   return (neuron0x1da45b0()*-0.164813);
}

double NNfunction_ss_cRcR::synapse0x1db46a0() {
   return (neuron0x1da48f0()*0.346686);
}

double NNfunction_ss_cRcR::synapse0x1db46e0() {
   return (neuron0x1da4c30()*-0.403077);
}

double NNfunction_ss_cRcR::synapse0x1db4720() {
   return (neuron0x1da4f70()*-0.0432018);
}

double NNfunction_ss_cRcR::synapse0x1db4760() {
   return (neuron0x1da52b0()*-0.295378);
}

double NNfunction_ss_cRcR::synapse0x1db47a0() {
   return (neuron0x1da55f0()*-0.396174);
}

double NNfunction_ss_cRcR::synapse0x1db47e0() {
   return (neuron0x1da5930()*-0.873839);
}

double NNfunction_ss_cRcR::synapse0x1db4820() {
   return (neuron0x1da5c70()*-0.19606);
}

double NNfunction_ss_cRcR::synapse0x1db4860() {
   return (neuron0x1da5fb0()*-0.218594);
}

double NNfunction_ss_cRcR::synapse0x1db48a0() {
   return (neuron0x1da62f0()*-0.0839222);
}

double NNfunction_ss_cRcR::synapse0x1db48e0() {
   return (neuron0x1da6630()*1.30344);
}

double NNfunction_ss_cRcR::synapse0x1db4370() {
   return (neuron0x1da6970()*0.991551);
}

double NNfunction_ss_cRcR::synapse0x1db43b0() {
   return (neuron0x1da6ed0()*-0.730451);
}

double NNfunction_ss_cRcR::synapse0x1db4a30() {
   return (neuron0x1da70f0()*-0.540542);
}

double NNfunction_ss_cRcR::synapse0x1db4a70() {
   return (neuron0x1da7430()*-0.173406);
}

double NNfunction_ss_cRcR::synapse0x1db4ab0() {
   return (neuron0x1da7770()*0.212811);
}

double NNfunction_ss_cRcR::synapse0x1db4af0() {
   return (neuron0x1da7ab0()*0.905796);
}

double NNfunction_ss_cRcR::synapse0x1db4b30() {
   return (neuron0x1da7df0()*0.120341);
}

double NNfunction_ss_cRcR::synapse0x1db4b70() {
   return (neuron0x1da8130()*-0.163604);
}

double NNfunction_ss_cRcR::synapse0x1db4ef0() {
   return (neuron0x1da3570()*-0.0946791);
}

double NNfunction_ss_cRcR::synapse0x1db4f30() {
   return (neuron0x1da38b0()*0.00149802);
}

double NNfunction_ss_cRcR::synapse0x1db4f70() {
   return (neuron0x1da3bf0()*-0.0383091);
}

double NNfunction_ss_cRcR::synapse0x1db4fb0() {
   return (neuron0x1da3f30()*0.0524319);
}

double NNfunction_ss_cRcR::synapse0x1db4ff0() {
   return (neuron0x1da4270()*-1.24829);
}

double NNfunction_ss_cRcR::synapse0x1db5030() {
   return (neuron0x1da45b0()*0.401321);
}

double NNfunction_ss_cRcR::synapse0x1db5070() {
   return (neuron0x1da48f0()*0.0334822);
}

double NNfunction_ss_cRcR::synapse0x1db50b0() {
   return (neuron0x1da4c30()*0.0298512);
}

double NNfunction_ss_cRcR::synapse0x1db50f0() {
   return (neuron0x1da4f70()*0.0550952);
}

double NNfunction_ss_cRcR::synapse0x1db5130() {
   return (neuron0x1da52b0()*0.0454499);
}

double NNfunction_ss_cRcR::synapse0x1db5170() {
   return (neuron0x1da55f0()*0.106254);
}

double NNfunction_ss_cRcR::synapse0x1db51b0() {
   return (neuron0x1da5930()*-0.105377);
}

double NNfunction_ss_cRcR::synapse0x1db51f0() {
   return (neuron0x1da5c70()*-0.164124);
}

double NNfunction_ss_cRcR::synapse0x1db5230() {
   return (neuron0x1da5fb0()*-0.00747152);
}

double NNfunction_ss_cRcR::synapse0x1db5270() {
   return (neuron0x1da62f0()*0.0785934);
}

double NNfunction_ss_cRcR::synapse0x1db52b0() {
   return (neuron0x1da6630()*-0.0195677);
}

double NNfunction_ss_cRcR::synapse0x1db4d40() {
   return (neuron0x1da6970()*-0.316978);
}

double NNfunction_ss_cRcR::synapse0x1db4d80() {
   return (neuron0x1da6ed0()*-0.0215264);
}

double NNfunction_ss_cRcR::synapse0x1db5400() {
   return (neuron0x1da70f0()*-0.0489939);
}

double NNfunction_ss_cRcR::synapse0x1db5440() {
   return (neuron0x1da7430()*0.0474332);
}

double NNfunction_ss_cRcR::synapse0x1db5480() {
   return (neuron0x1da7770()*-0.029492);
}

double NNfunction_ss_cRcR::synapse0x1db54c0() {
   return (neuron0x1da7ab0()*-0.0978093);
}

double NNfunction_ss_cRcR::synapse0x1db5500() {
   return (neuron0x1da7df0()*-0.149313);
}

double NNfunction_ss_cRcR::synapse0x1db5540() {
   return (neuron0x1da8130()*-0.0122326);
}

double NNfunction_ss_cRcR::synapse0x1db58c0() {
   return (neuron0x1da3570()*-0.538971);
}

double NNfunction_ss_cRcR::synapse0x1db5900() {
   return (neuron0x1da38b0()*0.0752056);
}

double NNfunction_ss_cRcR::synapse0x1db5940() {
   return (neuron0x1da3bf0()*-0.136972);
}

double NNfunction_ss_cRcR::synapse0x1db5980() {
   return (neuron0x1da3f30()*0.369981);
}

double NNfunction_ss_cRcR::synapse0x1db59c0() {
   return (neuron0x1da4270()*0.735604);
}

double NNfunction_ss_cRcR::synapse0x1db5a00() {
   return (neuron0x1da45b0()*0.484907);
}

double NNfunction_ss_cRcR::synapse0x1db5a40() {
   return (neuron0x1da48f0()*-0.170434);
}

double NNfunction_ss_cRcR::synapse0x1db5a80() {
   return (neuron0x1da4c30()*0.775704);
}

double NNfunction_ss_cRcR::synapse0x1db5ac0() {
   return (neuron0x1da4f70()*0.175943);
}

double NNfunction_ss_cRcR::synapse0x1db5b00() {
   return (neuron0x1da52b0()*-0.156936);
}

double NNfunction_ss_cRcR::synapse0x1db5b40() {
   return (neuron0x1da55f0()*-0.41422);
}

double NNfunction_ss_cRcR::synapse0x1db5b80() {
   return (neuron0x1da5930()*-0.19143);
}

double NNfunction_ss_cRcR::synapse0x1db5bc0() {
   return (neuron0x1da5c70()*0.195875);
}

double NNfunction_ss_cRcR::synapse0x1db5c00() {
   return (neuron0x1da5fb0()*0.00478484);
}

double NNfunction_ss_cRcR::synapse0x1db5c40() {
   return (neuron0x1da62f0()*0.687186);
}

double NNfunction_ss_cRcR::synapse0x1db5c80() {
   return (neuron0x1da6630()*1.43196);
}

double NNfunction_ss_cRcR::synapse0x1db5710() {
   return (neuron0x1da6970()*-0.595054);
}

double NNfunction_ss_cRcR::synapse0x1db5750() {
   return (neuron0x1da6ed0()*0.177594);
}

double NNfunction_ss_cRcR::synapse0x1db5dd0() {
   return (neuron0x1da70f0()*0.0569013);
}

double NNfunction_ss_cRcR::synapse0x1db5e10() {
   return (neuron0x1da7430()*-0.0406646);
}

double NNfunction_ss_cRcR::synapse0x1db5e50() {
   return (neuron0x1da7770()*0.0853951);
}

double NNfunction_ss_cRcR::synapse0x1db5e90() {
   return (neuron0x1da7ab0()*-0.376436);
}

double NNfunction_ss_cRcR::synapse0x1db5ed0() {
   return (neuron0x1da7df0()*-0.762545);
}

double NNfunction_ss_cRcR::synapse0x1db5f10() {
   return (neuron0x1da8130()*0.218745);
}

double NNfunction_ss_cRcR::synapse0x1db6290() {
   return (neuron0x1da3570()*-0.295662);
}

double NNfunction_ss_cRcR::synapse0x1db62d0() {
   return (neuron0x1da38b0()*-0.00774412);
}

double NNfunction_ss_cRcR::synapse0x1db6310() {
   return (neuron0x1da3bf0()*0.495153);
}

double NNfunction_ss_cRcR::synapse0x1db6350() {
   return (neuron0x1da3f30()*1.13147);
}

double NNfunction_ss_cRcR::synapse0x1db6390() {
   return (neuron0x1da4270()*-0.762534);
}

double NNfunction_ss_cRcR::synapse0x1db63d0() {
   return (neuron0x1da45b0()*-0.608521);
}

double NNfunction_ss_cRcR::synapse0x1db6410() {
   return (neuron0x1da48f0()*-0.00774773);
}

double NNfunction_ss_cRcR::synapse0x1db6450() {
   return (neuron0x1da4c30()*-0.483029);
}

double NNfunction_ss_cRcR::synapse0x1db6490() {
   return (neuron0x1da4f70()*0.280836);
}

double NNfunction_ss_cRcR::synapse0x1db64d0() {
   return (neuron0x1da52b0()*0.45764);
}

double NNfunction_ss_cRcR::synapse0x1db6510() {
   return (neuron0x1da55f0()*-0.0612511);
}

double NNfunction_ss_cRcR::synapse0x1db6550() {
   return (neuron0x1da5930()*-0.822233);
}

double NNfunction_ss_cRcR::synapse0x1db6590() {
   return (neuron0x1da5c70()*-0.787992);
}

double NNfunction_ss_cRcR::synapse0x1db65d0() {
   return (neuron0x1da5fb0()*-0.727563);
}

double NNfunction_ss_cRcR::synapse0x1db6610() {
   return (neuron0x1da62f0()*0.946);
}

double NNfunction_ss_cRcR::synapse0x1db6650() {
   return (neuron0x1da6630()*-0.706387);
}

double NNfunction_ss_cRcR::synapse0x1db60e0() {
   return (neuron0x1da6970()*-0.20767);
}

double NNfunction_ss_cRcR::synapse0x1db6120() {
   return (neuron0x1da6ed0()*0.80138);
}

double NNfunction_ss_cRcR::synapse0x1db67a0() {
   return (neuron0x1da70f0()*0.124468);
}

double NNfunction_ss_cRcR::synapse0x1db67e0() {
   return (neuron0x1da7430()*1.62584);
}

double NNfunction_ss_cRcR::synapse0x1db6820() {
   return (neuron0x1da7770()*-0.165905);
}

double NNfunction_ss_cRcR::synapse0x1db6860() {
   return (neuron0x1da7ab0()*0.0725991);
}

double NNfunction_ss_cRcR::synapse0x1db68a0() {
   return (neuron0x1da7df0()*-0.326092);
}

double NNfunction_ss_cRcR::synapse0x1db68e0() {
   return (neuron0x1da8130()*-0.379801);
}

double NNfunction_ss_cRcR::synapse0x1db6c60() {
   return (neuron0x1da3570()*0.0029813);
}

double NNfunction_ss_cRcR::synapse0x1db6ca0() {
   return (neuron0x1da38b0()*-0.593233);
}

double NNfunction_ss_cRcR::synapse0x1db6ce0() {
   return (neuron0x1da3bf0()*0.132101);
}

double NNfunction_ss_cRcR::synapse0x1db6d20() {
   return (neuron0x1da3f30()*-0.10292);
}

double NNfunction_ss_cRcR::synapse0x1db6d60() {
   return (neuron0x1da4270()*0.149982);
}

double NNfunction_ss_cRcR::synapse0x1db6da0() {
   return (neuron0x1da45b0()*-0.0785553);
}

double NNfunction_ss_cRcR::synapse0x1db6de0() {
   return (neuron0x1da48f0()*-0.0588368);
}

double NNfunction_ss_cRcR::synapse0x1db6e20() {
   return (neuron0x1da4c30()*-0.0753515);
}

double NNfunction_ss_cRcR::synapse0x1db6e60() {
   return (neuron0x1da4f70()*0.165478);
}

double NNfunction_ss_cRcR::synapse0x1daf020() {
   return (neuron0x1da52b0()*0.159647);
}

double NNfunction_ss_cRcR::synapse0x1daf060() {
   return (neuron0x1da55f0()*-0.608993);
}

double NNfunction_ss_cRcR::synapse0x1daf0a0() {
   return (neuron0x1da5930()*0.247999);
}

double NNfunction_ss_cRcR::synapse0x1daf0e0() {
   return (neuron0x1da5c70()*0.0894996);
}

double NNfunction_ss_cRcR::synapse0x1daf120() {
   return (neuron0x1da5fb0()*-0.514808);
}

double NNfunction_ss_cRcR::synapse0x1daf160() {
   return (neuron0x1da62f0()*-0.225732);
}

double NNfunction_ss_cRcR::synapse0x1daf1a0() {
   return (neuron0x1da6630()*0.0824714);
}

double NNfunction_ss_cRcR::synapse0x1db6ab0() {
   return (neuron0x1da6970()*-0.254279);
}

double NNfunction_ss_cRcR::synapse0x1db6af0() {
   return (neuron0x1da6ed0()*-0.0246027);
}

double NNfunction_ss_cRcR::synapse0x1daf2f0() {
   return (neuron0x1da70f0()*-0.28228);
}

double NNfunction_ss_cRcR::synapse0x1daf330() {
   return (neuron0x1da7430()*0.309155);
}

double NNfunction_ss_cRcR::synapse0x1daf370() {
   return (neuron0x1da7770()*-0.153241);
}

double NNfunction_ss_cRcR::synapse0x1daf3b0() {
   return (neuron0x1da7ab0()*0.166452);
}

double NNfunction_ss_cRcR::synapse0x1daf3f0() {
   return (neuron0x1da7df0()*0.206863);
}

double NNfunction_ss_cRcR::synapse0x1daf430() {
   return (neuron0x1da8130()*0.262583);
}

double NNfunction_ss_cRcR::synapse0x1daf7b0() {
   return (neuron0x1da3570()*0.517409);
}

double NNfunction_ss_cRcR::synapse0x1daf7f0() {
   return (neuron0x1da38b0()*0.0611784);
}

double NNfunction_ss_cRcR::synapse0x1daf830() {
   return (neuron0x1da3bf0()*-0.268223);
}

double NNfunction_ss_cRcR::synapse0x1daf870() {
   return (neuron0x1da3f30()*0.0982833);
}

double NNfunction_ss_cRcR::synapse0x1daf8b0() {
   return (neuron0x1da4270()*0.0496878);
}

double NNfunction_ss_cRcR::synapse0x1daf8f0() {
   return (neuron0x1da45b0()*0.577952);
}

double NNfunction_ss_cRcR::synapse0x1daf930() {
   return (neuron0x1da48f0()*0.175426);
}

double NNfunction_ss_cRcR::synapse0x1daf970() {
   return (neuron0x1da4c30()*0.570979);
}

double NNfunction_ss_cRcR::synapse0x1daf9b0() {
   return (neuron0x1da4f70()*-0.305499);
}

double NNfunction_ss_cRcR::synapse0x1daf9f0() {
   return (neuron0x1da52b0()*0.0204965);
}

double NNfunction_ss_cRcR::synapse0x1dafa30() {
   return (neuron0x1da55f0()*-0.721122);
}

double NNfunction_ss_cRcR::synapse0x1dafa70() {
   return (neuron0x1da5930()*-0.505681);
}

double NNfunction_ss_cRcR::synapse0x1dafab0() {
   return (neuron0x1da5c70()*-0.152006);
}

double NNfunction_ss_cRcR::synapse0x1dafaf0() {
   return (neuron0x1da5fb0()*-0.256701);
}

double NNfunction_ss_cRcR::synapse0x1dafb30() {
   return (neuron0x1da62f0()*0.173094);
}

double NNfunction_ss_cRcR::synapse0x1dafb70() {
   return (neuron0x1da6630()*-0.707486);
}

double NNfunction_ss_cRcR::synapse0x1daf600() {
   return (neuron0x1da6970()*0.297429);
}

double NNfunction_ss_cRcR::synapse0x1daf640() {
   return (neuron0x1da6ed0()*0.325145);
}

double NNfunction_ss_cRcR::synapse0x1dafcc0() {
   return (neuron0x1da70f0()*-0.380154);
}

double NNfunction_ss_cRcR::synapse0x1dafd00() {
   return (neuron0x1da7430()*-0.0743622);
}

double NNfunction_ss_cRcR::synapse0x1dafd40() {
   return (neuron0x1da7770()*-0.14842);
}

double NNfunction_ss_cRcR::synapse0x1dafd80() {
   return (neuron0x1da7ab0()*0.44801);
}

double NNfunction_ss_cRcR::synapse0x1dafdc0() {
   return (neuron0x1da7df0()*-0.103571);
}

double NNfunction_ss_cRcR::synapse0x1dafe00() {
   return (neuron0x1da8130()*-0.0685301);
}

double NNfunction_ss_cRcR::synapse0x1daffd0() {
   return (neuron0x1da3570()*-0.0382027);
}

double NNfunction_ss_cRcR::synapse0x1db9060() {
   return (neuron0x1da38b0()*-0.683216);
}

double NNfunction_ss_cRcR::synapse0x1db90a0() {
   return (neuron0x1da3bf0()*0.129308);
}

double NNfunction_ss_cRcR::synapse0x1db90e0() {
   return (neuron0x1da3f30()*0.663434);
}

double NNfunction_ss_cRcR::synapse0x1db9120() {
   return (neuron0x1da4270()*-0.164347);
}

double NNfunction_ss_cRcR::synapse0x1db9160() {
   return (neuron0x1da45b0()*-0.0534417);
}

double NNfunction_ss_cRcR::synapse0x1db91a0() {
   return (neuron0x1da48f0()*-0.287626);
}

double NNfunction_ss_cRcR::synapse0x1db91e0() {
   return (neuron0x1da4c30()*-0.0677699);
}

double NNfunction_ss_cRcR::synapse0x1db9220() {
   return (neuron0x1da4f70()*0.285554);
}

double NNfunction_ss_cRcR::synapse0x1db9260() {
   return (neuron0x1da52b0()*-0.783025);
}

double NNfunction_ss_cRcR::synapse0x1db92a0() {
   return (neuron0x1da55f0()*-0.189168);
}

double NNfunction_ss_cRcR::synapse0x1db92e0() {
   return (neuron0x1da5930()*0.145364);
}

double NNfunction_ss_cRcR::synapse0x1db9320() {
   return (neuron0x1da5c70()*-0.0715226);
}

double NNfunction_ss_cRcR::synapse0x1db9360() {
   return (neuron0x1da5fb0()*-0.182763);
}

double NNfunction_ss_cRcR::synapse0x1db93a0() {
   return (neuron0x1da62f0()*-0.142275);
}

double NNfunction_ss_cRcR::synapse0x1db93e0() {
   return (neuron0x1da6630()*-0.243652);
}

double NNfunction_ss_cRcR::synapse0x1db8eb0() {
   return (neuron0x1da6970()*-0.196184);
}

double NNfunction_ss_cRcR::synapse0x1db8ef0() {
   return (neuron0x1da6ed0()*0.276544);
}

double NNfunction_ss_cRcR::synapse0x1db9530() {
   return (neuron0x1da70f0()*0.0041089);
}

double NNfunction_ss_cRcR::synapse0x1db9570() {
   return (neuron0x1da7430()*-0.206023);
}

double NNfunction_ss_cRcR::synapse0x1db95b0() {
   return (neuron0x1da7770()*0.234835);
}

double NNfunction_ss_cRcR::synapse0x1db95f0() {
   return (neuron0x1da7ab0()*-0.165362);
}

double NNfunction_ss_cRcR::synapse0x1db9630() {
   return (neuron0x1da7df0()*0.0419319);
}

double NNfunction_ss_cRcR::synapse0x1db9670() {
   return (neuron0x1da8130()*-0.18009);
}

double NNfunction_ss_cRcR::synapse0x1db99f0() {
   return (neuron0x1da3570()*-0.0329587);
}

double NNfunction_ss_cRcR::synapse0x1db9a30() {
   return (neuron0x1da38b0()*0.851442);
}

double NNfunction_ss_cRcR::synapse0x1db9a70() {
   return (neuron0x1da3bf0()*-0.108444);
}

double NNfunction_ss_cRcR::synapse0x1db9ab0() {
   return (neuron0x1da3f30()*-0.812554);
}

double NNfunction_ss_cRcR::synapse0x1db9af0() {
   return (neuron0x1da4270()*0.240277);
}

double NNfunction_ss_cRcR::synapse0x1db9b30() {
   return (neuron0x1da45b0()*-0.0626224);
}

double NNfunction_ss_cRcR::synapse0x1db9b70() {
   return (neuron0x1da48f0()*-0.0593285);
}

double NNfunction_ss_cRcR::synapse0x1db9bb0() {
   return (neuron0x1da4c30()*-0.00234069);
}

double NNfunction_ss_cRcR::synapse0x1db9bf0() {
   return (neuron0x1da4f70()*0.0100277);
}

double NNfunction_ss_cRcR::synapse0x1db9c30() {
   return (neuron0x1da52b0()*-0.730174);
}

double NNfunction_ss_cRcR::synapse0x1db9c70() {
   return (neuron0x1da55f0()*-0.231681);
}

double NNfunction_ss_cRcR::synapse0x1db9cb0() {
   return (neuron0x1da5930()*-0.0994613);
}

double NNfunction_ss_cRcR::synapse0x1db9cf0() {
   return (neuron0x1da5c70()*0.298165);
}

double NNfunction_ss_cRcR::synapse0x1db9d30() {
   return (neuron0x1da5fb0()*-0.293611);
}

double NNfunction_ss_cRcR::synapse0x1db9d70() {
   return (neuron0x1da62f0()*-0.00257271);
}

double NNfunction_ss_cRcR::synapse0x1db9db0() {
   return (neuron0x1da6630()*0.321321);
}

double NNfunction_ss_cRcR::synapse0x1db9840() {
   return (neuron0x1da6970()*0.0228753);
}

double NNfunction_ss_cRcR::synapse0x1db9880() {
   return (neuron0x1da6ed0()*-0.0876985);
}

double NNfunction_ss_cRcR::synapse0x1db9f00() {
   return (neuron0x1da70f0()*0.506332);
}

double NNfunction_ss_cRcR::synapse0x1db9f40() {
   return (neuron0x1da7430()*0.0730703);
}

double NNfunction_ss_cRcR::synapse0x1db9f80() {
   return (neuron0x1da7770()*-0.0800216);
}

double NNfunction_ss_cRcR::synapse0x1db9fc0() {
   return (neuron0x1da7ab0()*0.0367162);
}

double NNfunction_ss_cRcR::synapse0x1dba000() {
   return (neuron0x1da7df0()*0.0213462);
}

double NNfunction_ss_cRcR::synapse0x1dba040() {
   return (neuron0x1da8130()*0.0571207);
}

double NNfunction_ss_cRcR::synapse0x1dba3c0() {
   return (neuron0x1da3570()*0.0137198);
}

double NNfunction_ss_cRcR::synapse0x1dba400() {
   return (neuron0x1da38b0()*0.031952);
}

double NNfunction_ss_cRcR::synapse0x1dba440() {
   return (neuron0x1da3bf0()*-0.0274062);
}

double NNfunction_ss_cRcR::synapse0x1dba480() {
   return (neuron0x1da3f30()*9.72954);
}

double NNfunction_ss_cRcR::synapse0x1dba4c0() {
   return (neuron0x1da4270()*0.0672439);
}

double NNfunction_ss_cRcR::synapse0x1dba500() {
   return (neuron0x1da45b0()*0.060377);
}

double NNfunction_ss_cRcR::synapse0x1dba540() {
   return (neuron0x1da48f0()*0.0493946);
}

double NNfunction_ss_cRcR::synapse0x1dba580() {
   return (neuron0x1da4c30()*-0.000376269);
}

double NNfunction_ss_cRcR::synapse0x1dba5c0() {
   return (neuron0x1da4f70()*-0.0207694);
}

double NNfunction_ss_cRcR::synapse0x1dba600() {
   return (neuron0x1da52b0()*0.0171831);
}

double NNfunction_ss_cRcR::synapse0x1dba640() {
   return (neuron0x1da55f0()*-0.0312264);
}

double NNfunction_ss_cRcR::synapse0x1dba680() {
   return (neuron0x1da5930()*-0.031879);
}

double NNfunction_ss_cRcR::synapse0x1dba6c0() {
   return (neuron0x1da5c70()*0.00431777);
}

double NNfunction_ss_cRcR::synapse0x1dba700() {
   return (neuron0x1da5fb0()*0.0301287);
}

double NNfunction_ss_cRcR::synapse0x1dba740() {
   return (neuron0x1da62f0()*-0.0341459);
}

double NNfunction_ss_cRcR::synapse0x1dba780() {
   return (neuron0x1da6630()*0.447182);
}

double NNfunction_ss_cRcR::synapse0x1dba210() {
   return (neuron0x1da6970()*0.0229182);
}

double NNfunction_ss_cRcR::synapse0x1dba250() {
   return (neuron0x1da6ed0()*-0.007687);
}

double NNfunction_ss_cRcR::synapse0x1dba8d0() {
   return (neuron0x1da70f0()*-0.0449327);
}

double NNfunction_ss_cRcR::synapse0x1dba910() {
   return (neuron0x1da7430()*-0.0501436);
}

double NNfunction_ss_cRcR::synapse0x1dba950() {
   return (neuron0x1da7770()*-0.0117625);
}

double NNfunction_ss_cRcR::synapse0x1dba990() {
   return (neuron0x1da7ab0()*-0.0245292);
}

double NNfunction_ss_cRcR::synapse0x1dba9d0() {
   return (neuron0x1da7df0()*-0.0259455);
}

double NNfunction_ss_cRcR::synapse0x1dbaa10() {
   return (neuron0x1da8130()*0.00492002);
}

double NNfunction_ss_cRcR::synapse0x1dbad90() {
   return (neuron0x1da3570()*-0.0364368);
}

double NNfunction_ss_cRcR::synapse0x1dbadd0() {
   return (neuron0x1da38b0()*0.179168);
}

double NNfunction_ss_cRcR::synapse0x1dbae10() {
   return (neuron0x1da3bf0()*0.0168148);
}

double NNfunction_ss_cRcR::synapse0x1dbae50() {
   return (neuron0x1da3f30()*-0.19164);
}

double NNfunction_ss_cRcR::synapse0x1dbae90() {
   return (neuron0x1da4270()*0.0824465);
}

double NNfunction_ss_cRcR::synapse0x1dbaed0() {
   return (neuron0x1da45b0()*-0.0324426);
}

double NNfunction_ss_cRcR::synapse0x1dbaf10() {
   return (neuron0x1da48f0()*-0.0496105);
}

double NNfunction_ss_cRcR::synapse0x1dbaf50() {
   return (neuron0x1da4c30()*-1.52429);
}

double NNfunction_ss_cRcR::synapse0x1dbaf90() {
   return (neuron0x1da4f70()*-0.0262419);
}

double NNfunction_ss_cRcR::synapse0x1dbafd0() {
   return (neuron0x1da52b0()*-0.0271322);
}

double NNfunction_ss_cRcR::synapse0x1dbb010() {
   return (neuron0x1da55f0()*0.221795);
}

double NNfunction_ss_cRcR::synapse0x1dbb050() {
   return (neuron0x1da5930()*0.0275344);
}

double NNfunction_ss_cRcR::synapse0x1dbb090() {
   return (neuron0x1da5c70()*-0.152596);
}

double NNfunction_ss_cRcR::synapse0x1dbb0d0() {
   return (neuron0x1da5fb0()*-0.158375);
}

double NNfunction_ss_cRcR::synapse0x1dbb110() {
   return (neuron0x1da62f0()*-0.267805);
}

double NNfunction_ss_cRcR::synapse0x1dbb150() {
   return (neuron0x1da6630()*0.0787123);
}

double NNfunction_ss_cRcR::synapse0x1dbabe0() {
   return (neuron0x1da6970()*-0.0997557);
}

double NNfunction_ss_cRcR::synapse0x1dbac20() {
   return (neuron0x1da6ed0()*-0.0483899);
}

double NNfunction_ss_cRcR::synapse0x1dbb2a0() {
   return (neuron0x1da70f0()*-0.0683093);
}

double NNfunction_ss_cRcR::synapse0x1dbb2e0() {
   return (neuron0x1da7430()*-0.00869285);
}

double NNfunction_ss_cRcR::synapse0x1dbb320() {
   return (neuron0x1da7770()*0.156054);
}

double NNfunction_ss_cRcR::synapse0x1dbb360() {
   return (neuron0x1da7ab0()*0.202902);
}

double NNfunction_ss_cRcR::synapse0x1dbb3a0() {
   return (neuron0x1da7df0()*-0.00696145);
}

double NNfunction_ss_cRcR::synapse0x1dbb3e0() {
   return (neuron0x1da8130()*0.0222303);
}

double NNfunction_ss_cRcR::synapse0x1dbb760() {
   return (neuron0x1da3570()*0.0226466);
}

double NNfunction_ss_cRcR::synapse0x1dbb7a0() {
   return (neuron0x1da38b0()*-0.00622973);
}

double NNfunction_ss_cRcR::synapse0x1dbb7e0() {
   return (neuron0x1da3bf0()*0.0236557);
}

double NNfunction_ss_cRcR::synapse0x1dbb820() {
   return (neuron0x1da3f30()*-3.58907);
}

double NNfunction_ss_cRcR::synapse0x1dbb860() {
   return (neuron0x1da4270()*-0.0557551);
}

double NNfunction_ss_cRcR::synapse0x1dbb8a0() {
   return (neuron0x1da45b0()*0.0374157);
}

double NNfunction_ss_cRcR::synapse0x1dbb8e0() {
   return (neuron0x1da48f0()*0.0467439);
}

double NNfunction_ss_cRcR::synapse0x1dbb920() {
   return (neuron0x1da4c30()*0.0343598);
}

double NNfunction_ss_cRcR::synapse0x1dbb960() {
   return (neuron0x1da4f70()*0.00116341);
}

double NNfunction_ss_cRcR::synapse0x1dbb9a0() {
   return (neuron0x1da52b0()*-0.023577);
}

double NNfunction_ss_cRcR::synapse0x1dbb9e0() {
   return (neuron0x1da55f0()*-0.0801573);
}

double NNfunction_ss_cRcR::synapse0x1dbba20() {
   return (neuron0x1da5930()*-0.044903);
}

double NNfunction_ss_cRcR::synapse0x1dbba60() {
   return (neuron0x1da5c70()*0.025466);
}

double NNfunction_ss_cRcR::synapse0x1dbbaa0() {
   return (neuron0x1da5fb0()*0.0347666);
}

double NNfunction_ss_cRcR::synapse0x1dbbae0() {
   return (neuron0x1da62f0()*-0.00695228);
}

double NNfunction_ss_cRcR::synapse0x1dbbb20() {
   return (neuron0x1da6630()*-0.175988);
}

double NNfunction_ss_cRcR::synapse0x1dbb5b0() {
   return (neuron0x1da6970()*0.00717945);
}

double NNfunction_ss_cRcR::synapse0x1dbb5f0() {
   return (neuron0x1da6ed0()*0.112129);
}

double NNfunction_ss_cRcR::synapse0x1dbbc70() {
   return (neuron0x1da70f0()*-0.151283);
}

double NNfunction_ss_cRcR::synapse0x1dbbcb0() {
   return (neuron0x1da7430()*-0.0201451);
}

double NNfunction_ss_cRcR::synapse0x1dbbcf0() {
   return (neuron0x1da7770()*-0.0371603);
}

double NNfunction_ss_cRcR::synapse0x1dbbd30() {
   return (neuron0x1da7ab0()*-0.0282386);
}

double NNfunction_ss_cRcR::synapse0x1dbbd70() {
   return (neuron0x1da7df0()*0.0500229);
}

double NNfunction_ss_cRcR::synapse0x1dbbdb0() {
   return (neuron0x1da8130()*-0.0365839);
}

double NNfunction_ss_cRcR::synapse0x1dbc130() {
   return (neuron0x1da3570()*-0.146465);
}

double NNfunction_ss_cRcR::synapse0x1dbc170() {
   return (neuron0x1da38b0()*0.570364);
}

double NNfunction_ss_cRcR::synapse0x1dbc1b0() {
   return (neuron0x1da3bf0()*-0.00353948);
}

double NNfunction_ss_cRcR::synapse0x1dbc1f0() {
   return (neuron0x1da3f30()*0.267353);
}

double NNfunction_ss_cRcR::synapse0x1dbc230() {
   return (neuron0x1da4270()*0.0283389);
}

double NNfunction_ss_cRcR::synapse0x1dbc270() {
   return (neuron0x1da45b0()*-0.234627);
}

double NNfunction_ss_cRcR::synapse0x1dbc2b0() {
   return (neuron0x1da48f0()*-0.241029);
}

double NNfunction_ss_cRcR::synapse0x1dbc2f0() {
   return (neuron0x1da4c30()*0.275204);
}

double NNfunction_ss_cRcR::synapse0x1dbc330() {
   return (neuron0x1da4f70()*0.202557);
}

double NNfunction_ss_cRcR::synapse0x1dbc370() {
   return (neuron0x1da52b0()*-0.326019);
}

double NNfunction_ss_cRcR::synapse0x1dbc3b0() {
   return (neuron0x1da55f0()*-0.374283);
}

double NNfunction_ss_cRcR::synapse0x1dbc3f0() {
   return (neuron0x1da5930()*0.400428);
}

double NNfunction_ss_cRcR::synapse0x1dbc430() {
   return (neuron0x1da5c70()*0.57692);
}

double NNfunction_ss_cRcR::synapse0x1dbc470() {
   return (neuron0x1da5fb0()*0.189682);
}

double NNfunction_ss_cRcR::synapse0x1dbc4b0() {
   return (neuron0x1da62f0()*0.16371);
}

double NNfunction_ss_cRcR::synapse0x1dbc4f0() {
   return (neuron0x1da6630()*-0.427317);
}

double NNfunction_ss_cRcR::synapse0x1dbbf80() {
   return (neuron0x1da6970()*-0.200389);
}

double NNfunction_ss_cRcR::synapse0x1dbbfc0() {
   return (neuron0x1da6ed0()*-0.358694);
}

double NNfunction_ss_cRcR::synapse0x1dbc640() {
   return (neuron0x1da70f0()*0.0856974);
}

double NNfunction_ss_cRcR::synapse0x1dbc680() {
   return (neuron0x1da7430()*0.195329);
}

double NNfunction_ss_cRcR::synapse0x1dbc6c0() {
   return (neuron0x1da7770()*-0.0764725);
}

double NNfunction_ss_cRcR::synapse0x1dbc700() {
   return (neuron0x1da7ab0()*-0.0699922);
}

double NNfunction_ss_cRcR::synapse0x1dbc740() {
   return (neuron0x1da7df0()*-0.207724);
}

double NNfunction_ss_cRcR::synapse0x1dbc780() {
   return (neuron0x1da8130()*0.00764256);
}

double NNfunction_ss_cRcR::synapse0x1dbcb00() {
   return (neuron0x1da3570()*-0.125957);
}

double NNfunction_ss_cRcR::synapse0x1dbcb40() {
   return (neuron0x1da38b0()*-0.559177);
}

double NNfunction_ss_cRcR::synapse0x1dbcb80() {
   return (neuron0x1da3bf0()*0.732086);
}

double NNfunction_ss_cRcR::synapse0x1dbcbc0() {
   return (neuron0x1da3f30()*0.224875);
}

double NNfunction_ss_cRcR::synapse0x1dbcc00() {
   return (neuron0x1da4270()*0.485239);
}

double NNfunction_ss_cRcR::synapse0x1dbcc40() {
   return (neuron0x1da45b0()*-2.06839);
}

double NNfunction_ss_cRcR::synapse0x1dbcc80() {
   return (neuron0x1da48f0()*-0.396445);
}

double NNfunction_ss_cRcR::synapse0x1dbccc0() {
   return (neuron0x1da4c30()*-0.781814);
}

double NNfunction_ss_cRcR::synapse0x1dbcd00() {
   return (neuron0x1da4f70()*0.266941);
}

double NNfunction_ss_cRcR::synapse0x1dbcd40() {
   return (neuron0x1da52b0()*0.181676);
}

double NNfunction_ss_cRcR::synapse0x1dbcd80() {
   return (neuron0x1da55f0()*-0.527332);
}

double NNfunction_ss_cRcR::synapse0x1dbcdc0() {
   return (neuron0x1da5930()*0.263218);
}

double NNfunction_ss_cRcR::synapse0x1dbce00() {
   return (neuron0x1da5c70()*1.00244);
}

double NNfunction_ss_cRcR::synapse0x1dbce40() {
   return (neuron0x1da5fb0()*-0.36151);
}

double NNfunction_ss_cRcR::synapse0x1dbce80() {
   return (neuron0x1da62f0()*-0.194582);
}

double NNfunction_ss_cRcR::synapse0x1dbcec0() {
   return (neuron0x1da6630()*0.231701);
}

double NNfunction_ss_cRcR::synapse0x1dbc950() {
   return (neuron0x1da6970()*-0.196168);
}

double NNfunction_ss_cRcR::synapse0x1dbc990() {
   return (neuron0x1da6ed0()*-0.658961);
}

double NNfunction_ss_cRcR::synapse0x1dbd010() {
   return (neuron0x1da70f0()*0.49967);
}

double NNfunction_ss_cRcR::synapse0x1dbd050() {
   return (neuron0x1da7430()*-0.500665);
}

double NNfunction_ss_cRcR::synapse0x1dbd090() {
   return (neuron0x1da7770()*-0.0504656);
}

double NNfunction_ss_cRcR::synapse0x1dbd0d0() {
   return (neuron0x1da7ab0()*-0.339989);
}

double NNfunction_ss_cRcR::synapse0x1dbd110() {
   return (neuron0x1da7df0()*0.0664821);
}

double NNfunction_ss_cRcR::synapse0x1dbd150() {
   return (neuron0x1da8130()*0.202746);
}

double NNfunction_ss_cRcR::synapse0x1dbd4d0() {
   return (neuron0x1da3570()*-0.0511851);
}

double NNfunction_ss_cRcR::synapse0x1dbd510() {
   return (neuron0x1da38b0()*-0.320402);
}

double NNfunction_ss_cRcR::synapse0x1dbd550() {
   return (neuron0x1da3bf0()*0.00120685);
}

double NNfunction_ss_cRcR::synapse0x1dbd590() {
   return (neuron0x1da3f30()*-0.7087);
}

double NNfunction_ss_cRcR::synapse0x1dbd5d0() {
   return (neuron0x1da4270()*-0.0948664);
}

double NNfunction_ss_cRcR::synapse0x1dbd610() {
   return (neuron0x1da45b0()*-0.263609);
}

double NNfunction_ss_cRcR::synapse0x1dbd650() {
   return (neuron0x1da48f0()*-0.0784349);
}

double NNfunction_ss_cRcR::synapse0x1dbd690() {
   return (neuron0x1da4c30()*-0.154341);
}

double NNfunction_ss_cRcR::synapse0x1dbd6d0() {
   return (neuron0x1da4f70()*-0.252575);
}

double NNfunction_ss_cRcR::synapse0x1dbd710() {
   return (neuron0x1da52b0()*-0.0720006);
}

double NNfunction_ss_cRcR::synapse0x1dbd750() {
   return (neuron0x1da55f0()*0.361156);
}

double NNfunction_ss_cRcR::synapse0x1dbd790() {
   return (neuron0x1da5930()*-0.123356);
}

double NNfunction_ss_cRcR::synapse0x1dbd7d0() {
   return (neuron0x1da5c70()*-0.077152);
}

double NNfunction_ss_cRcR::synapse0x1dbd810() {
   return (neuron0x1da5fb0()*-0.0580362);
}

double NNfunction_ss_cRcR::synapse0x1dbd850() {
   return (neuron0x1da62f0()*-0.0505172);
}

double NNfunction_ss_cRcR::synapse0x1dbd890() {
   return (neuron0x1da6630()*0.235233);
}

double NNfunction_ss_cRcR::synapse0x1dbd320() {
   return (neuron0x1da6970()*-0.224602);
}

double NNfunction_ss_cRcR::synapse0x1dbd360() {
   return (neuron0x1da6ed0()*-0.302741);
}

double NNfunction_ss_cRcR::synapse0x1dbd9e0() {
   return (neuron0x1da70f0()*0.36172);
}

double NNfunction_ss_cRcR::synapse0x1dbda20() {
   return (neuron0x1da7430()*0.364499);
}

double NNfunction_ss_cRcR::synapse0x1dbda60() {
   return (neuron0x1da7770()*0.010944);
}

double NNfunction_ss_cRcR::synapse0x1dbdaa0() {
   return (neuron0x1da7ab0()*0.0418699);
}

double NNfunction_ss_cRcR::synapse0x1dbdae0() {
   return (neuron0x1da7df0()*-0.0266243);
}

double NNfunction_ss_cRcR::synapse0x1dbdb20() {
   return (neuron0x1da8130()*0.0509895);
}

double NNfunction_ss_cRcR::synapse0x1dbdea0() {
   return (neuron0x1da3570()*-0.0839775);
}

double NNfunction_ss_cRcR::synapse0x1db2470() {
   return (neuron0x1da38b0()*0.584106);
}

double NNfunction_ss_cRcR::synapse0x1db24b0() {
   return (neuron0x1da3bf0()*0.0243271);
}

double NNfunction_ss_cRcR::synapse0x1db24f0() {
   return (neuron0x1da3f30()*-0.205022);
}

double NNfunction_ss_cRcR::synapse0x1db2740() {
   return (neuron0x1da4270()*-0.13638);
}

double NNfunction_ss_cRcR::synapse0x1db2780() {
   return (neuron0x1da45b0()*0.0758943);
}

double NNfunction_ss_cRcR::synapse0x1db27c0() {
   return (neuron0x1da48f0()*0.0862004);
}

double NNfunction_ss_cRcR::synapse0x1db2a10() {
   return (neuron0x1da4c30()*-0.239366);
}

double NNfunction_ss_cRcR::synapse0x1db2a50() {
   return (neuron0x1da4f70()*0.680638);
}

double NNfunction_ss_cRcR::synapse0x1db2ca0() {
   return (neuron0x1da52b0()*0.0187428);
}

double NNfunction_ss_cRcR::synapse0x1db2ce0() {
   return (neuron0x1da55f0()*0.480123);
}

double NNfunction_ss_cRcR::synapse0x1db2d20() {
   return (neuron0x1da5930()*-0.165774);
}

double NNfunction_ss_cRcR::synapse0x1db2f70() {
   return (neuron0x1da5c70()*0.0346006);
}

double NNfunction_ss_cRcR::synapse0x1db2fb0() {
   return (neuron0x1da5fb0()*-0.00199102);
}

double NNfunction_ss_cRcR::synapse0x1db3200() {
   return (neuron0x1da62f0()*-0.124129);
}

double NNfunction_ss_cRcR::synapse0x1db3240() {
   return (neuron0x1da6630()*-0.0725405);
}

double NNfunction_ss_cRcR::synapse0x1dbdcf0() {
   return (neuron0x1da6970()*-0.0661279);
}

double NNfunction_ss_cRcR::synapse0x1dbdd30() {
   return (neuron0x1da6ed0()*0.075878);
}

double NNfunction_ss_cRcR::synapse0x1db3390() {
   return (neuron0x1da70f0()*-0.41381);
}

double NNfunction_ss_cRcR::synapse0x1db38a0() {
   return (neuron0x1da7430()*0.364289);
}

double NNfunction_ss_cRcR::synapse0x1db38e0() {
   return (neuron0x1da7770()*0.0134129);
}

double NNfunction_ss_cRcR::synapse0x1db3920() {
   return (neuron0x1da7ab0()*0.117313);
}

double NNfunction_ss_cRcR::synapse0x1db3b70() {
   return (neuron0x1da7df0()*0.0200061);
}

double NNfunction_ss_cRcR::synapse0x1db3bb0() {
   return (neuron0x1da8130()*-0.00181287);
}

double NNfunction_ss_cRcR::synapse0x1db3460() {
   return (neuron0x1da3570()*0.691197);
}

double NNfunction_ss_cRcR::synapse0x1db34a0() {
   return (neuron0x1da38b0()*-1.08239);
}

double NNfunction_ss_cRcR::synapse0x1db34e0() {
   return (neuron0x1da3bf0()*-0.234395);
}

double NNfunction_ss_cRcR::synapse0x1db3520() {
   return (neuron0x1da3f30()*-1.64082);
}

double NNfunction_ss_cRcR::synapse0x1db3ea0() {
   return (neuron0x1da4270()*-0.0078143);
}

double NNfunction_ss_cRcR::synapse0x1dc01f0() {
   return (neuron0x1da45b0()*0.778184);
}

double NNfunction_ss_cRcR::synapse0x1dc0230() {
   return (neuron0x1da48f0()*0.913063);
}

double NNfunction_ss_cRcR::synapse0x1dc0270() {
   return (neuron0x1da4c30()*0.0992929);
}

double NNfunction_ss_cRcR::synapse0x1dc02b0() {
   return (neuron0x1da4f70()*-1.30261);
}

double NNfunction_ss_cRcR::synapse0x1dc02f0() {
   return (neuron0x1da52b0()*0.403181);
}

double NNfunction_ss_cRcR::synapse0x1dc0330() {
   return (neuron0x1da55f0()*-0.415928);
}

double NNfunction_ss_cRcR::synapse0x1dc0370() {
   return (neuron0x1da5930()*0.544004);
}

double NNfunction_ss_cRcR::synapse0x1dc03b0() {
   return (neuron0x1da5c70()*0.137615);
}

double NNfunction_ss_cRcR::synapse0x1dc03f0() {
   return (neuron0x1da5fb0()*0.211099);
}

double NNfunction_ss_cRcR::synapse0x1dc0430() {
   return (neuron0x1da62f0()*-0.225915);
}

double NNfunction_ss_cRcR::synapse0x1dc0470() {
   return (neuron0x1da6630()*0.441103);
}

double NNfunction_ss_cRcR::synapse0x1db3d80() {
   return (neuron0x1da6970()*0.715549);
}

double NNfunction_ss_cRcR::synapse0x1db3dc0() {
   return (neuron0x1da6ed0()*-0.245071);
}

double NNfunction_ss_cRcR::synapse0x1dc05c0() {
   return (neuron0x1da70f0()*-0.524387);
}

double NNfunction_ss_cRcR::synapse0x1dc0600() {
   return (neuron0x1da7430()*-0.839925);
}

double NNfunction_ss_cRcR::synapse0x1dc0640() {
   return (neuron0x1da7770()*-1.01855);
}

double NNfunction_ss_cRcR::synapse0x1dc0680() {
   return (neuron0x1da7ab0()*-0.495693);
}

double NNfunction_ss_cRcR::synapse0x1dc06c0() {
   return (neuron0x1da7df0()*2.29178);
}

double NNfunction_ss_cRcR::synapse0x1dc0700() {
   return (neuron0x1da8130()*-0.053109);
}

double NNfunction_ss_cRcR::synapse0x1dc0a80() {
   return (neuron0x1da3570()*-0.0173217);
}

double NNfunction_ss_cRcR::synapse0x1dc0ac0() {
   return (neuron0x1da38b0()*-0.166326);
}

double NNfunction_ss_cRcR::synapse0x1dc0b00() {
   return (neuron0x1da3bf0()*0.0104265);
}

double NNfunction_ss_cRcR::synapse0x1dc0b40() {
   return (neuron0x1da3f30()*-0.207975);
}

double NNfunction_ss_cRcR::synapse0x1dc0b80() {
   return (neuron0x1da4270()*0.0420116);
}

double NNfunction_ss_cRcR::synapse0x1dc0bc0() {
   return (neuron0x1da45b0()*0.0928356);
}

double NNfunction_ss_cRcR::synapse0x1dc0c00() {
   return (neuron0x1da48f0()*-0.0233106);
}

double NNfunction_ss_cRcR::synapse0x1dc0c40() {
   return (neuron0x1da4c30()*0.0786188);
}

double NNfunction_ss_cRcR::synapse0x1dc0c80() {
   return (neuron0x1da4f70()*0.299825);
}

double NNfunction_ss_cRcR::synapse0x1dc0cc0() {
   return (neuron0x1da52b0()*0.406178);
}

double NNfunction_ss_cRcR::synapse0x1dc0d00() {
   return (neuron0x1da55f0()*-0.0328812);
}

double NNfunction_ss_cRcR::synapse0x1dc0d40() {
   return (neuron0x1da5930()*0.371605);
}

double NNfunction_ss_cRcR::synapse0x1dc0d80() {
   return (neuron0x1da5c70()*0.68844);
}

double NNfunction_ss_cRcR::synapse0x1dc0dc0() {
   return (neuron0x1da5fb0()*-0.102291);
}

double NNfunction_ss_cRcR::synapse0x1dc0e00() {
   return (neuron0x1da62f0()*-0.0434104);
}

double NNfunction_ss_cRcR::synapse0x1dc0e40() {
   return (neuron0x1da6630()*-0.34095);
}

double NNfunction_ss_cRcR::synapse0x1dc08d0() {
   return (neuron0x1da6970()*-0.0705762);
}

double NNfunction_ss_cRcR::synapse0x1dc0910() {
   return (neuron0x1da6ed0()*-0.0278741);
}

double NNfunction_ss_cRcR::synapse0x1dc0f90() {
   return (neuron0x1da70f0()*0.391778);
}

double NNfunction_ss_cRcR::synapse0x1dc0fd0() {
   return (neuron0x1da7430()*0.0113875);
}

double NNfunction_ss_cRcR::synapse0x1dc1010() {
   return (neuron0x1da7770()*0.136831);
}

double NNfunction_ss_cRcR::synapse0x1dc1050() {
   return (neuron0x1da7ab0()*-0.0193985);
}

double NNfunction_ss_cRcR::synapse0x1dc1090() {
   return (neuron0x1da7df0()*0.0594549);
}

double NNfunction_ss_cRcR::synapse0x1dc10d0() {
   return (neuron0x1da8130()*-0.0463938);
}

double NNfunction_ss_cRcR::synapse0x1dc1450() {
   return (neuron0x1da3570()*-0.24138);
}

double NNfunction_ss_cRcR::synapse0x1dc1490() {
   return (neuron0x1da38b0()*-0.0230025);
}

double NNfunction_ss_cRcR::synapse0x1dc14d0() {
   return (neuron0x1da3bf0()*0.996916);
}

double NNfunction_ss_cRcR::synapse0x1dc1510() {
   return (neuron0x1da3f30()*-0.344834);
}

double NNfunction_ss_cRcR::synapse0x1dc1550() {
   return (neuron0x1da4270()*-0.424291);
}

double NNfunction_ss_cRcR::synapse0x1dc1590() {
   return (neuron0x1da45b0()*1.12166);
}

double NNfunction_ss_cRcR::synapse0x1dc15d0() {
   return (neuron0x1da48f0()*-0.186521);
}

double NNfunction_ss_cRcR::synapse0x1dc1610() {
   return (neuron0x1da4c30()*0.275995);
}

double NNfunction_ss_cRcR::synapse0x1dc1650() {
   return (neuron0x1da4f70()*-0.0473405);
}

double NNfunction_ss_cRcR::synapse0x1dc1690() {
   return (neuron0x1da52b0()*-0.0264391);
}

double NNfunction_ss_cRcR::synapse0x1dc16d0() {
   return (neuron0x1da55f0()*-0.658868);
}

double NNfunction_ss_cRcR::synapse0x1dc1710() {
   return (neuron0x1da5930()*-0.330852);
}

double NNfunction_ss_cRcR::synapse0x1dc1750() {
   return (neuron0x1da5c70()*-0.22484);
}

double NNfunction_ss_cRcR::synapse0x1dc1790() {
   return (neuron0x1da5fb0()*1.01908);
}

double NNfunction_ss_cRcR::synapse0x1dc17d0() {
   return (neuron0x1da62f0()*0.427451);
}

double NNfunction_ss_cRcR::synapse0x1dc1810() {
   return (neuron0x1da6630()*2.09883);
}

double NNfunction_ss_cRcR::synapse0x1dc12a0() {
   return (neuron0x1da6970()*0.347937);
}

double NNfunction_ss_cRcR::synapse0x1dc12e0() {
   return (neuron0x1da6ed0()*-0.408483);
}

double NNfunction_ss_cRcR::synapse0x1dc1960() {
   return (neuron0x1da70f0()*0.0935067);
}

double NNfunction_ss_cRcR::synapse0x1dc19a0() {
   return (neuron0x1da7430()*-0.188848);
}

double NNfunction_ss_cRcR::synapse0x1dc19e0() {
   return (neuron0x1da7770()*0.583061);
}

double NNfunction_ss_cRcR::synapse0x1dc1a20() {
   return (neuron0x1da7ab0()*0.410018);
}

double NNfunction_ss_cRcR::synapse0x1dc1a60() {
   return (neuron0x1da7df0()*0.568839);
}

double NNfunction_ss_cRcR::synapse0x1dc1aa0() {
   return (neuron0x1da8130()*-0.228908);
}

double NNfunction_ss_cRcR::synapse0x1dc1e20() {
   return (neuron0x1da3570()*-0.0213382);
}

double NNfunction_ss_cRcR::synapse0x1dc1e60() {
   return (neuron0x1da38b0()*0.000571568);
}

double NNfunction_ss_cRcR::synapse0x1dc1ea0() {
   return (neuron0x1da3bf0()*-0.00741999);
}

double NNfunction_ss_cRcR::synapse0x1dc1ee0() {
   return (neuron0x1da3f30()*-0.265636);
}

double NNfunction_ss_cRcR::synapse0x1dc1f20() {
   return (neuron0x1da4270()*0.466261);
}

double NNfunction_ss_cRcR::synapse0x1dc1f60() {
   return (neuron0x1da45b0()*0.297688);
}

double NNfunction_ss_cRcR::synapse0x1dc1fa0() {
   return (neuron0x1da48f0()*0.378247);
}

double NNfunction_ss_cRcR::synapse0x1dc1fe0() {
   return (neuron0x1da4c30()*-0.391823);
}

double NNfunction_ss_cRcR::synapse0x1dc2020() {
   return (neuron0x1da4f70()*-0.287798);
}

double NNfunction_ss_cRcR::synapse0x1dc2060() {
   return (neuron0x1da52b0()*0.39556);
}

double NNfunction_ss_cRcR::synapse0x1dc20a0() {
   return (neuron0x1da55f0()*-0.113196);
}

double NNfunction_ss_cRcR::synapse0x1dc20e0() {
   return (neuron0x1da5930()*-0.319198);
}

double NNfunction_ss_cRcR::synapse0x1dc2120() {
   return (neuron0x1da5c70()*0.092579);
}

double NNfunction_ss_cRcR::synapse0x1dc2160() {
   return (neuron0x1da5fb0()*-0.0555293);
}

double NNfunction_ss_cRcR::synapse0x1dc21a0() {
   return (neuron0x1da62f0()*0.75942);
}

double NNfunction_ss_cRcR::synapse0x1dc21e0() {
   return (neuron0x1da6630()*0.300159);
}

double NNfunction_ss_cRcR::synapse0x1dc1c70() {
   return (neuron0x1da6970()*-0.276462);
}

double NNfunction_ss_cRcR::synapse0x1dc1cb0() {
   return (neuron0x1da6ed0()*0.546325);
}

double NNfunction_ss_cRcR::synapse0x1dc2330() {
   return (neuron0x1da70f0()*-0.0992278);
}

double NNfunction_ss_cRcR::synapse0x1dc2370() {
   return (neuron0x1da7430()*-0.102737);
}

double NNfunction_ss_cRcR::synapse0x1dc23b0() {
   return (neuron0x1da7770()*-0.596639);
}

double NNfunction_ss_cRcR::synapse0x1dc23f0() {
   return (neuron0x1da7ab0()*-0.209981);
}

double NNfunction_ss_cRcR::synapse0x1dc2430() {
   return (neuron0x1da7df0()*0.199223);
}

double NNfunction_ss_cRcR::synapse0x1dc2470() {
   return (neuron0x1da8130()*0.522699);
}

double NNfunction_ss_cRcR::synapse0x1dc27f0() {
   return (neuron0x1da3570()*0.0499766);
}

double NNfunction_ss_cRcR::synapse0x1dc2830() {
   return (neuron0x1da38b0()*0.552195);
}

double NNfunction_ss_cRcR::synapse0x1dc2870() {
   return (neuron0x1da3bf0()*0.133187);
}

double NNfunction_ss_cRcR::synapse0x1dc28b0() {
   return (neuron0x1da3f30()*-0.225379);
}

double NNfunction_ss_cRcR::synapse0x1dc28f0() {
   return (neuron0x1da4270()*0.0235703);
}

double NNfunction_ss_cRcR::synapse0x1dc2930() {
   return (neuron0x1da45b0()*-0.0759027);
}

double NNfunction_ss_cRcR::synapse0x1dc2970() {
   return (neuron0x1da48f0()*-0.128774);
}

double NNfunction_ss_cRcR::synapse0x1dc29b0() {
   return (neuron0x1da4c30()*-0.117602);
}

double NNfunction_ss_cRcR::synapse0x1dc29f0() {
   return (neuron0x1da4f70()*-0.839359);
}

double NNfunction_ss_cRcR::synapse0x1dc2a30() {
   return (neuron0x1da52b0()*0.203897);
}

double NNfunction_ss_cRcR::synapse0x1dc2a70() {
   return (neuron0x1da55f0()*-0.168195);
}

double NNfunction_ss_cRcR::synapse0x1dc2ab0() {
   return (neuron0x1da5930()*0.0375392);
}

double NNfunction_ss_cRcR::synapse0x1dc2af0() {
   return (neuron0x1da5c70()*0.068415);
}

double NNfunction_ss_cRcR::synapse0x1dc2b30() {
   return (neuron0x1da5fb0()*-0.179188);
}

double NNfunction_ss_cRcR::synapse0x1dc2b70() {
   return (neuron0x1da62f0()*-0.0945552);
}

double NNfunction_ss_cRcR::synapse0x1dc2bb0() {
   return (neuron0x1da6630()*0.0840828);
}

double NNfunction_ss_cRcR::synapse0x1dc2640() {
   return (neuron0x1da6970()*-0.207266);
}

double NNfunction_ss_cRcR::synapse0x1dc2680() {
   return (neuron0x1da6ed0()*0.0505404);
}

double NNfunction_ss_cRcR::synapse0x1dc2d00() {
   return (neuron0x1da70f0()*-0.245023);
}

double NNfunction_ss_cRcR::synapse0x1dc2d40() {
   return (neuron0x1da7430()*0.170096);
}

double NNfunction_ss_cRcR::synapse0x1dc2d80() {
   return (neuron0x1da7770()*0.0470833);
}

double NNfunction_ss_cRcR::synapse0x1dc2dc0() {
   return (neuron0x1da7ab0()*0.000745869);
}

double NNfunction_ss_cRcR::synapse0x1dc2e00() {
   return (neuron0x1da7df0()*0.062329);
}

double NNfunction_ss_cRcR::synapse0x1dc2e40() {
   return (neuron0x1da8130()*-0.0592731);
}

double NNfunction_ss_cRcR::synapse0x1dc31c0() {
   return (neuron0x1da3570()*0.00250741);
}

double NNfunction_ss_cRcR::synapse0x1dc3200() {
   return (neuron0x1da38b0()*-3.84568);
}

double NNfunction_ss_cRcR::synapse0x1dc3240() {
   return (neuron0x1da3bf0()*0.227366);
}

double NNfunction_ss_cRcR::synapse0x1dc3280() {
   return (neuron0x1da3f30()*-0.410515);
}

double NNfunction_ss_cRcR::synapse0x1dc32c0() {
   return (neuron0x1da4270()*0.197775);
}

double NNfunction_ss_cRcR::synapse0x1dc3300() {
   return (neuron0x1da45b0()*0.185127);
}

double NNfunction_ss_cRcR::synapse0x1dc3340() {
   return (neuron0x1da48f0()*0.15977);
}

double NNfunction_ss_cRcR::synapse0x1dc3380() {
   return (neuron0x1da4c30()*1.02034);
}

double NNfunction_ss_cRcR::synapse0x1dc33c0() {
   return (neuron0x1da4f70()*0.159733);
}

double NNfunction_ss_cRcR::synapse0x1dc3400() {
   return (neuron0x1da52b0()*-0.090957);
}

double NNfunction_ss_cRcR::synapse0x1dc3440() {
   return (neuron0x1da55f0()*-0.309678);
}

double NNfunction_ss_cRcR::synapse0x1dc3480() {
   return (neuron0x1da5930()*0.0888683);
}

double NNfunction_ss_cRcR::synapse0x1dc34c0() {
   return (neuron0x1da5c70()*0.119805);
}

double NNfunction_ss_cRcR::synapse0x1dc3500() {
   return (neuron0x1da5fb0()*-0.340774);
}

double NNfunction_ss_cRcR::synapse0x1dc3540() {
   return (neuron0x1da62f0()*0.548703);
}

double NNfunction_ss_cRcR::synapse0x1dc3580() {
   return (neuron0x1da6630()*-0.412147);
}

double NNfunction_ss_cRcR::synapse0x1dc3010() {
   return (neuron0x1da6970()*0.285203);
}

double NNfunction_ss_cRcR::synapse0x1dc3050() {
   return (neuron0x1da6ed0()*0.538773);
}

double NNfunction_ss_cRcR::synapse0x1dc36d0() {
   return (neuron0x1da70f0()*0.562803);
}

double NNfunction_ss_cRcR::synapse0x1dc3710() {
   return (neuron0x1da7430()*0.391826);
}

double NNfunction_ss_cRcR::synapse0x1dc3750() {
   return (neuron0x1da7770()*-0.299409);
}

double NNfunction_ss_cRcR::synapse0x1dc3790() {
   return (neuron0x1da7ab0()*-0.0920415);
}

double NNfunction_ss_cRcR::synapse0x1dc37d0() {
   return (neuron0x1da7df0()*0.166422);
}

double NNfunction_ss_cRcR::synapse0x1dc3810() {
   return (neuron0x1da8130()*-0.366824);
}

double NNfunction_ss_cRcR::synapse0x1dc3b90() {
   return (neuron0x1da3570()*0.0113066);
}

double NNfunction_ss_cRcR::synapse0x1dc3bd0() {
   return (neuron0x1da38b0()*0.1184);
}

double NNfunction_ss_cRcR::synapse0x1dc3c10() {
   return (neuron0x1da3bf0()*-0.00770607);
}

double NNfunction_ss_cRcR::synapse0x1dc3c50() {
   return (neuron0x1da3f30()*3.18782);
}

double NNfunction_ss_cRcR::synapse0x1dc3c90() {
   return (neuron0x1da4270()*0.0259384);
}

double NNfunction_ss_cRcR::synapse0x1dc3cd0() {
   return (neuron0x1da45b0()*0.0158313);
}

double NNfunction_ss_cRcR::synapse0x1dc3d10() {
   return (neuron0x1da48f0()*0.00790333);
}

double NNfunction_ss_cRcR::synapse0x1dc3d50() {
   return (neuron0x1da4c30()*-0.022757);
}

double NNfunction_ss_cRcR::synapse0x1dc3d90() {
   return (neuron0x1da4f70()*0.0326548);
}

double NNfunction_ss_cRcR::synapse0x1dc3dd0() {
   return (neuron0x1da52b0()*-0.00509773);
}

double NNfunction_ss_cRcR::synapse0x1dc3e10() {
   return (neuron0x1da55f0()*-0.0516694);
}

double NNfunction_ss_cRcR::synapse0x1dc3e50() {
   return (neuron0x1da5930()*0.00639624);
}

double NNfunction_ss_cRcR::synapse0x1dc3e90() {
   return (neuron0x1da5c70()*-0.000165907);
}

double NNfunction_ss_cRcR::synapse0x1dc3ed0() {
   return (neuron0x1da5fb0()*-0.0362687);
}

double NNfunction_ss_cRcR::synapse0x1dc3f10() {
   return (neuron0x1da62f0()*-0.00356481);
}

double NNfunction_ss_cRcR::synapse0x1dc3f50() {
   return (neuron0x1da6630()*-0.389437);
}

double NNfunction_ss_cRcR::synapse0x1dc39e0() {
   return (neuron0x1da6970()*-0.0279112);
}

double NNfunction_ss_cRcR::synapse0x1dc3a20() {
   return (neuron0x1da6ed0()*0.043647);
}

double NNfunction_ss_cRcR::synapse0x1dc40a0() {
   return (neuron0x1da70f0()*-0.00507375);
}

double NNfunction_ss_cRcR::synapse0x1dc40e0() {
   return (neuron0x1da7430()*-0.0249742);
}

double NNfunction_ss_cRcR::synapse0x1dc4120() {
   return (neuron0x1da7770()*0.00692598);
}

double NNfunction_ss_cRcR::synapse0x1dc4160() {
   return (neuron0x1da7ab0()*-0.00135271);
}

double NNfunction_ss_cRcR::synapse0x1dc41a0() {
   return (neuron0x1da7df0()*0.0029909);
}

double NNfunction_ss_cRcR::synapse0x1dc41e0() {
   return (neuron0x1da8130()*-0.0210253);
}

double NNfunction_ss_cRcR::synapse0x1dc4560() {
   return (neuron0x1da3570()*-0.0733045);
}

double NNfunction_ss_cRcR::synapse0x1dc45a0() {
   return (neuron0x1da38b0()*-0.200101);
}

double NNfunction_ss_cRcR::synapse0x1dc45e0() {
   return (neuron0x1da3bf0()*0.0331559);
}

double NNfunction_ss_cRcR::synapse0x1dc4620() {
   return (neuron0x1da3f30()*7.93642);
}

double NNfunction_ss_cRcR::synapse0x1dc4660() {
   return (neuron0x1da4270()*-0.120742);
}

double NNfunction_ss_cRcR::synapse0x1dc46a0() {
   return (neuron0x1da45b0()*-0.110705);
}

double NNfunction_ss_cRcR::synapse0x1dc46e0() {
   return (neuron0x1da48f0()*0.0121923);
}

double NNfunction_ss_cRcR::synapse0x1dc4720() {
   return (neuron0x1da4c30()*0.0398929);
}

double NNfunction_ss_cRcR::synapse0x1dc4760() {
   return (neuron0x1da4f70()*-0.0765417);
}

double NNfunction_ss_cRcR::synapse0x1dc47a0() {
   return (neuron0x1da52b0()*-0.0237817);
}

double NNfunction_ss_cRcR::synapse0x1dc47e0() {
   return (neuron0x1da55f0()*0.089075);
}

double NNfunction_ss_cRcR::synapse0x1dc4820() {
   return (neuron0x1da5930()*-0.0374644);
}

double NNfunction_ss_cRcR::synapse0x1dc4860() {
   return (neuron0x1da5c70()*0.00110306);
}

double NNfunction_ss_cRcR::synapse0x1dc48a0() {
   return (neuron0x1da5fb0()*0.0278342);
}

double NNfunction_ss_cRcR::synapse0x1dc48e0() {
   return (neuron0x1da62f0()*0.0143652);
}

double NNfunction_ss_cRcR::synapse0x1dc4920() {
   return (neuron0x1da6630()*-0.21247);
}

double NNfunction_ss_cRcR::synapse0x1dc43b0() {
   return (neuron0x1da6970()*0.0542401);
}

double NNfunction_ss_cRcR::synapse0x1dc43f0() {
   return (neuron0x1da6ed0()*-0.0513526);
}

double NNfunction_ss_cRcR::synapse0x1dc4a70() {
   return (neuron0x1da70f0()*0.0354948);
}

double NNfunction_ss_cRcR::synapse0x1dc4ab0() {
   return (neuron0x1da7430()*0.0818816);
}

double NNfunction_ss_cRcR::synapse0x1dc4af0() {
   return (neuron0x1da7770()*-0.0677972);
}

double NNfunction_ss_cRcR::synapse0x1dc4b30() {
   return (neuron0x1da7ab0()*-0.0101335);
}

double NNfunction_ss_cRcR::synapse0x1dc4b70() {
   return (neuron0x1da7df0()*-0.00539459);
}

double NNfunction_ss_cRcR::synapse0x1dc4bb0() {
   return (neuron0x1da8130()*0.00702105);
}

double NNfunction_ss_cRcR::synapse0x1dad660() {
   return (neuron0x1da3570()*-0.0186453);
}

double NNfunction_ss_cRcR::synapse0x1dad6a0() {
   return (neuron0x1da38b0()*-0.0497833);
}

double NNfunction_ss_cRcR::synapse0x1dad6e0() {
   return (neuron0x1da3bf0()*-0.0149267);
}

double NNfunction_ss_cRcR::synapse0x1dad720() {
   return (neuron0x1da3f30()*0.269135);
}

double NNfunction_ss_cRcR::synapse0x1dad760() {
   return (neuron0x1da4270()*-0.0514657);
}

double NNfunction_ss_cRcR::synapse0x1dad7a0() {
   return (neuron0x1da45b0()*-0.0474633);
}

double NNfunction_ss_cRcR::synapse0x1dad7e0() {
   return (neuron0x1da48f0()*0.0198286);
}

double NNfunction_ss_cRcR::synapse0x1dad820() {
   return (neuron0x1da4c30()*-0.0181147);
}

double NNfunction_ss_cRcR::synapse0x1dc5340() {
   return (neuron0x1da4f70()*0.0286212);
}

double NNfunction_ss_cRcR::synapse0x1dc5380() {
   return (neuron0x1da52b0()*0.0273289);
}

double NNfunction_ss_cRcR::synapse0x1dc53c0() {
   return (neuron0x1da55f0()*0.0341716);
}

double NNfunction_ss_cRcR::synapse0x1dc5400() {
   return (neuron0x1da5930()*0.0265948);
}

double NNfunction_ss_cRcR::synapse0x1dc5440() {
   return (neuron0x1da5c70()*0.0225789);
}

double NNfunction_ss_cRcR::synapse0x1dc5480() {
   return (neuron0x1da5fb0()*-0.00209317);
}

double NNfunction_ss_cRcR::synapse0x1dc54c0() {
   return (neuron0x1da62f0()*-0.0600979);
}

double NNfunction_ss_cRcR::synapse0x1dc5500() {
   return (neuron0x1da6630()*-0.801362);
}

double NNfunction_ss_cRcR::synapse0x1dc4d80() {
   return (neuron0x1da6970()*-0.0527497);
}

double NNfunction_ss_cRcR::synapse0x1dc4dc0() {
   return (neuron0x1da6ed0()*0.0158749);
}

double NNfunction_ss_cRcR::synapse0x1dc5650() {
   return (neuron0x1da70f0()*0.0129529);
}

double NNfunction_ss_cRcR::synapse0x1dc5690() {
   return (neuron0x1da7430()*-0.0252575);
}

double NNfunction_ss_cRcR::synapse0x1dc56d0() {
   return (neuron0x1da7770()*0.0141023);
}

double NNfunction_ss_cRcR::synapse0x1dc5710() {
   return (neuron0x1da7ab0()*0.00254257);
}

double NNfunction_ss_cRcR::synapse0x1dc5750() {
   return (neuron0x1da7df0()*-0.00455822);
}

double NNfunction_ss_cRcR::synapse0x1dc5790() {
   return (neuron0x1da8130()*0.018391);
}

double NNfunction_ss_cRcR::synapse0x1dc5b10() {
   return (neuron0x1da3570()*-0.0653893);
}

double NNfunction_ss_cRcR::synapse0x1dc5b50() {
   return (neuron0x1da38b0()*0.0208327);
}

double NNfunction_ss_cRcR::synapse0x1dc5b90() {
   return (neuron0x1da3bf0()*0.0141926);
}

double NNfunction_ss_cRcR::synapse0x1dc5bd0() {
   return (neuron0x1da3f30()*-0.277756);
}

double NNfunction_ss_cRcR::synapse0x1dc5c10() {
   return (neuron0x1da4270()*0.121981);
}

double NNfunction_ss_cRcR::synapse0x1dc5c50() {
   return (neuron0x1da45b0()*-0.17696);
}

double NNfunction_ss_cRcR::synapse0x1dc5c90() {
   return (neuron0x1da48f0()*0.296074);
}

double NNfunction_ss_cRcR::synapse0x1dc5cd0() {
   return (neuron0x1da4c30()*0.160715);
}

double NNfunction_ss_cRcR::synapse0x1dc5d10() {
   return (neuron0x1da4f70()*-0.0746351);
}

double NNfunction_ss_cRcR::synapse0x1dc5d50() {
   return (neuron0x1da52b0()*-0.0193645);
}

double NNfunction_ss_cRcR::synapse0x1dc5d90() {
   return (neuron0x1da55f0()*-0.112547);
}

double NNfunction_ss_cRcR::synapse0x1dc5dd0() {
   return (neuron0x1da5930()*0.00583509);
}

double NNfunction_ss_cRcR::synapse0x1dc5e10() {
   return (neuron0x1da5c70()*-0.194971);
}

double NNfunction_ss_cRcR::synapse0x1dc5e50() {
   return (neuron0x1da5fb0()*-0.335418);
}

double NNfunction_ss_cRcR::synapse0x1dc5e90() {
   return (neuron0x1da62f0()*-1.14992);
}

double NNfunction_ss_cRcR::synapse0x1dc5ed0() {
   return (neuron0x1da6630()*0.0468024);
}

double NNfunction_ss_cRcR::synapse0x1dc5960() {
   return (neuron0x1da6970()*-0.465237);
}

double NNfunction_ss_cRcR::synapse0x1dc59a0() {
   return (neuron0x1da6ed0()*-0.0955263);
}

double NNfunction_ss_cRcR::synapse0x1dc6020() {
   return (neuron0x1da70f0()*-0.196866);
}

double NNfunction_ss_cRcR::synapse0x1dc6060() {
   return (neuron0x1da7430()*0.082426);
}

double NNfunction_ss_cRcR::synapse0x1dc60a0() {
   return (neuron0x1da7770()*-0.0712965);
}

double NNfunction_ss_cRcR::synapse0x1dc60e0() {
   return (neuron0x1da7ab0()*-0.0502616);
}

double NNfunction_ss_cRcR::synapse0x1dc6120() {
   return (neuron0x1da7df0()*0.0562455);
}

double NNfunction_ss_cRcR::synapse0x1dc6160() {
   return (neuron0x1da8130()*0.120044);
}

double NNfunction_ss_cRcR::synapse0x1dc64e0() {
   return (neuron0x1da3570()*0.163655);
}

double NNfunction_ss_cRcR::synapse0x1dc6520() {
   return (neuron0x1da38b0()*-0.324645);
}

double NNfunction_ss_cRcR::synapse0x1dc6560() {
   return (neuron0x1da3bf0()*0.31804);
}

double NNfunction_ss_cRcR::synapse0x1dc65a0() {
   return (neuron0x1da3f30()*0.0766661);
}

double NNfunction_ss_cRcR::synapse0x1dc65e0() {
   return (neuron0x1da4270()*0.0678021);
}

double NNfunction_ss_cRcR::synapse0x1dc6620() {
   return (neuron0x1da45b0()*0.162059);
}

double NNfunction_ss_cRcR::synapse0x1dc6660() {
   return (neuron0x1da48f0()*0.458104);
}

double NNfunction_ss_cRcR::synapse0x1dc66a0() {
   return (neuron0x1da4c30()*-0.168674);
}

double NNfunction_ss_cRcR::synapse0x1dc66e0() {
   return (neuron0x1da4f70()*0.0152321);
}

double NNfunction_ss_cRcR::synapse0x1dc6720() {
   return (neuron0x1da52b0()*0.0221733);
}

double NNfunction_ss_cRcR::synapse0x1dc6760() {
   return (neuron0x1da55f0()*0.226135);
}

double NNfunction_ss_cRcR::synapse0x1dc67a0() {
   return (neuron0x1da5930()*0.354739);
}

double NNfunction_ss_cRcR::synapse0x1dc67e0() {
   return (neuron0x1da5c70()*-0.265804);
}

double NNfunction_ss_cRcR::synapse0x1dc6820() {
   return (neuron0x1da5fb0()*0.0470252);
}

double NNfunction_ss_cRcR::synapse0x1dc6860() {
   return (neuron0x1da62f0()*0.0199395);
}

double NNfunction_ss_cRcR::synapse0x1dc68a0() {
   return (neuron0x1da6630()*-0.99109);
}

double NNfunction_ss_cRcR::synapse0x1dc6330() {
   return (neuron0x1da6970()*-0.38979);
}

double NNfunction_ss_cRcR::synapse0x1dc6370() {
   return (neuron0x1da6ed0()*-0.16212);
}

double NNfunction_ss_cRcR::synapse0x1db6ea0() {
   return (neuron0x1da70f0()*-0.16761);
}

double NNfunction_ss_cRcR::synapse0x1db6ee0() {
   return (neuron0x1da7430()*0.0623534);
}

double NNfunction_ss_cRcR::synapse0x1db6f20() {
   return (neuron0x1da7770()*0.302649);
}

double NNfunction_ss_cRcR::synapse0x1db6f60() {
   return (neuron0x1da7ab0()*0.179382);
}

double NNfunction_ss_cRcR::synapse0x1db6fa0() {
   return (neuron0x1da7df0()*-0.0851162);
}

double NNfunction_ss_cRcR::synapse0x1db6fe0() {
   return (neuron0x1da8130()*0.01135);
}

double NNfunction_ss_cRcR::synapse0x1db7360() {
   return (neuron0x1da3570()*-0.209335);
}

double NNfunction_ss_cRcR::synapse0x1db73a0() {
   return (neuron0x1da38b0()*-0.384006);
}

double NNfunction_ss_cRcR::synapse0x1db73e0() {
   return (neuron0x1da3bf0()*-0.247937);
}

double NNfunction_ss_cRcR::synapse0x1db7420() {
   return (neuron0x1da3f30()*0.517709);
}

double NNfunction_ss_cRcR::synapse0x1db7460() {
   return (neuron0x1da4270()*-0.551112);
}

double NNfunction_ss_cRcR::synapse0x1db74a0() {
   return (neuron0x1da45b0()*2.43332);
}

double NNfunction_ss_cRcR::synapse0x1db74e0() {
   return (neuron0x1da48f0()*-0.568514);
}

double NNfunction_ss_cRcR::synapse0x1db7520() {
   return (neuron0x1da4c30()*0.783325);
}

double NNfunction_ss_cRcR::synapse0x1db7560() {
   return (neuron0x1da4f70()*-0.395621);
}

double NNfunction_ss_cRcR::synapse0x1db75a0() {
   return (neuron0x1da52b0()*0.117998);
}

double NNfunction_ss_cRcR::synapse0x1db75e0() {
   return (neuron0x1da55f0()*0.31949);
}

double NNfunction_ss_cRcR::synapse0x1db7620() {
   return (neuron0x1da5930()*0.492054);
}

double NNfunction_ss_cRcR::synapse0x1db7660() {
   return (neuron0x1da5c70()*-0.159937);
}

double NNfunction_ss_cRcR::synapse0x1db76a0() {
   return (neuron0x1da5fb0()*0.0549313);
}

double NNfunction_ss_cRcR::synapse0x1db76e0() {
   return (neuron0x1da62f0()*-0.027323);
}

double NNfunction_ss_cRcR::synapse0x1db7720() {
   return (neuron0x1da6630()*-0.145858);
}

double NNfunction_ss_cRcR::synapse0x1db71b0() {
   return (neuron0x1da6970()*-0.334934);
}

double NNfunction_ss_cRcR::synapse0x1db71f0() {
   return (neuron0x1da6ed0()*0.898734);
}

double NNfunction_ss_cRcR::synapse0x1db7870() {
   return (neuron0x1da70f0()*0.766265);
}

double NNfunction_ss_cRcR::synapse0x1db78b0() {
   return (neuron0x1da7430()*0.129301);
}

double NNfunction_ss_cRcR::synapse0x1db78f0() {
   return (neuron0x1da7770()*-0.448864);
}

double NNfunction_ss_cRcR::synapse0x1db7930() {
   return (neuron0x1da7ab0()*0.457936);
}

double NNfunction_ss_cRcR::synapse0x1db7970() {
   return (neuron0x1da7df0()*-0.0211903);
}

double NNfunction_ss_cRcR::synapse0x1db79b0() {
   return (neuron0x1da8130()*-0.683265);
}

double NNfunction_ss_cRcR::synapse0x1db7d30() {
   return (neuron0x1da3570()*0.157557);
}

double NNfunction_ss_cRcR::synapse0x1db7d70() {
   return (neuron0x1da38b0()*-0.806933);
}

double NNfunction_ss_cRcR::synapse0x1db7db0() {
   return (neuron0x1da3bf0()*-0.444347);
}

double NNfunction_ss_cRcR::synapse0x1db7df0() {
   return (neuron0x1da3f30()*0.745);
}

double NNfunction_ss_cRcR::synapse0x1db7e30() {
   return (neuron0x1da4270()*-0.659155);
}

double NNfunction_ss_cRcR::synapse0x1db7e70() {
   return (neuron0x1da45b0()*-0.341851);
}

double NNfunction_ss_cRcR::synapse0x1db7eb0() {
   return (neuron0x1da48f0()*0.938029);
}

double NNfunction_ss_cRcR::synapse0x1db7ef0() {
   return (neuron0x1da4c30()*0.492096);
}

double NNfunction_ss_cRcR::synapse0x1db7f30() {
   return (neuron0x1da4f70()*0.933359);
}

double NNfunction_ss_cRcR::synapse0x1db7f70() {
   return (neuron0x1da52b0()*1.35797);
}

double NNfunction_ss_cRcR::synapse0x1db7fb0() {
   return (neuron0x1da55f0()*1.23481);
}

double NNfunction_ss_cRcR::synapse0x1db7ff0() {
   return (neuron0x1da5930()*-0.233825);
}

double NNfunction_ss_cRcR::synapse0x1db8030() {
   return (neuron0x1da5c70()*-0.511567);
}

double NNfunction_ss_cRcR::synapse0x1db8070() {
   return (neuron0x1da5fb0()*1.01307);
}

double NNfunction_ss_cRcR::synapse0x1db80b0() {
   return (neuron0x1da62f0()*-1.28563);
}

double NNfunction_ss_cRcR::synapse0x1db80f0() {
   return (neuron0x1da6630()*1.2145);
}

double NNfunction_ss_cRcR::synapse0x1db7b80() {
   return (neuron0x1da6970()*-0.09203);
}

double NNfunction_ss_cRcR::synapse0x1db7bc0() {
   return (neuron0x1da6ed0()*0.931634);
}

double NNfunction_ss_cRcR::synapse0x1db8240() {
   return (neuron0x1da70f0()*0.0788162);
}

double NNfunction_ss_cRcR::synapse0x1db8280() {
   return (neuron0x1da7430()*-0.266875);
}

double NNfunction_ss_cRcR::synapse0x1db82c0() {
   return (neuron0x1da7770()*-0.133789);
}

double NNfunction_ss_cRcR::synapse0x1db8300() {
   return (neuron0x1da7ab0()*-0.988779);
}

double NNfunction_ss_cRcR::synapse0x1db8340() {
   return (neuron0x1da7df0()*-0.0728859);
}

double NNfunction_ss_cRcR::synapse0x1db8380() {
   return (neuron0x1da8130()*0.438155);
}

double NNfunction_ss_cRcR::synapse0x1db8700() {
   return (neuron0x1da3570()*-0.00197864);
}

double NNfunction_ss_cRcR::synapse0x1db8740() {
   return (neuron0x1da38b0()*-0.0040255);
}

double NNfunction_ss_cRcR::synapse0x1db8780() {
   return (neuron0x1da3bf0()*0.111665);
}

double NNfunction_ss_cRcR::synapse0x1db87c0() {
   return (neuron0x1da3f30()*0.361336);
}

double NNfunction_ss_cRcR::synapse0x1db8800() {
   return (neuron0x1da4270()*-0.433167);
}

double NNfunction_ss_cRcR::synapse0x1db8840() {
   return (neuron0x1da45b0()*0.099028);
}

double NNfunction_ss_cRcR::synapse0x1db8880() {
   return (neuron0x1da48f0()*0.333386);
}

double NNfunction_ss_cRcR::synapse0x1db88c0() {
   return (neuron0x1da4c30()*0.500492);
}

double NNfunction_ss_cRcR::synapse0x1db8900() {
   return (neuron0x1da4f70()*-0.0699171);
}

double NNfunction_ss_cRcR::synapse0x1db8940() {
   return (neuron0x1da52b0()*0.199107);
}

double NNfunction_ss_cRcR::synapse0x1db8980() {
   return (neuron0x1da55f0()*-0.0218923);
}

double NNfunction_ss_cRcR::synapse0x1db89c0() {
   return (neuron0x1da5930()*-0.184885);
}

double NNfunction_ss_cRcR::synapse0x1db8a00() {
   return (neuron0x1da5c70()*0.244085);
}

double NNfunction_ss_cRcR::synapse0x1db8a40() {
   return (neuron0x1da5fb0()*-0.146371);
}

double NNfunction_ss_cRcR::synapse0x1db8a80() {
   return (neuron0x1da62f0()*0.433504);
}

double NNfunction_ss_cRcR::synapse0x1db8ac0() {
   return (neuron0x1da6630()*1.14566);
}

double NNfunction_ss_cRcR::synapse0x1db8550() {
   return (neuron0x1da6970()*-0.523251);
}

double NNfunction_ss_cRcR::synapse0x1db8590() {
   return (neuron0x1da6ed0()*-0.452338);
}

double NNfunction_ss_cRcR::synapse0x1db8c10() {
   return (neuron0x1da70f0()*0.234043);
}

double NNfunction_ss_cRcR::synapse0x1db8c50() {
   return (neuron0x1da7430()*0.0506498);
}

double NNfunction_ss_cRcR::synapse0x1db8c90() {
   return (neuron0x1da7770()*0.218471);
}

double NNfunction_ss_cRcR::synapse0x1db8cd0() {
   return (neuron0x1da7ab0()*-0.0325598);
}

double NNfunction_ss_cRcR::synapse0x1db8d10() {
   return (neuron0x1da7df0()*-0.137885);
}

double NNfunction_ss_cRcR::synapse0x1db8d50() {
   return (neuron0x1da8130()*0.0390938);
}

double NNfunction_ss_cRcR::synapse0x1dcac20() {
   return (neuron0x1da3570()*-0.0368299);
}

double NNfunction_ss_cRcR::synapse0x1dcac60() {
   return (neuron0x1da38b0()*0.00652639);
}

double NNfunction_ss_cRcR::synapse0x1dcaca0() {
   return (neuron0x1da3bf0()*0.0365188);
}

double NNfunction_ss_cRcR::synapse0x1dcace0() {
   return (neuron0x1da3f30()*-12.4812);
}

double NNfunction_ss_cRcR::synapse0x1dcad20() {
   return (neuron0x1da4270()*-0.00542006);
}

double NNfunction_ss_cRcR::synapse0x1dcad60() {
   return (neuron0x1da45b0()*-0.0180535);
}

double NNfunction_ss_cRcR::synapse0x1dcada0() {
   return (neuron0x1da48f0()*0.000236231);
}

double NNfunction_ss_cRcR::synapse0x1dcade0() {
   return (neuron0x1da4c30()*0.0173679);
}

double NNfunction_ss_cRcR::synapse0x1dcae20() {
   return (neuron0x1da4f70()*0.0372545);
}

double NNfunction_ss_cRcR::synapse0x1dcae60() {
   return (neuron0x1da52b0()*-0.0447602);
}

double NNfunction_ss_cRcR::synapse0x1dcaea0() {
   return (neuron0x1da55f0()*0.0234474);
}

double NNfunction_ss_cRcR::synapse0x1dcaee0() {
   return (neuron0x1da5930()*0.0468414);
}

double NNfunction_ss_cRcR::synapse0x1dcaf20() {
   return (neuron0x1da5c70()*-0.0358068);
}

double NNfunction_ss_cRcR::synapse0x1dcaf60() {
   return (neuron0x1da5fb0()*-0.0375822);
}

double NNfunction_ss_cRcR::synapse0x1dcafa0() {
   return (neuron0x1da62f0()*0.0371162);
}

double NNfunction_ss_cRcR::synapse0x1dcafe0() {
   return (neuron0x1da6630()*0.0143627);
}

double NNfunction_ss_cRcR::synapse0x1db8d90() {
   return (neuron0x1da6970()*-0.0142534);
}

double NNfunction_ss_cRcR::synapse0x1db8dd0() {
   return (neuron0x1da6ed0()*0.0131249);
}

double NNfunction_ss_cRcR::synapse0x1dcb130() {
   return (neuron0x1da70f0()*0.0488158);
}

double NNfunction_ss_cRcR::synapse0x1dcb170() {
   return (neuron0x1da7430()*0.0329311);
}

double NNfunction_ss_cRcR::synapse0x1dcb1b0() {
   return (neuron0x1da7770()*0.0454914);
}

double NNfunction_ss_cRcR::synapse0x1dcb1f0() {
   return (neuron0x1da7ab0()*-0.0118382);
}

double NNfunction_ss_cRcR::synapse0x1dcb230() {
   return (neuron0x1da7df0()*0.0101145);
}

double NNfunction_ss_cRcR::synapse0x1dcb270() {
   return (neuron0x1da8130()*-0.00106336);
}

double NNfunction_ss_cRcR::synapse0x1dcb5f0() {
   return (neuron0x1da3570()*0.0156003);
}

double NNfunction_ss_cRcR::synapse0x1dcb630() {
   return (neuron0x1da38b0()*0.092214);
}

double NNfunction_ss_cRcR::synapse0x1dcb670() {
   return (neuron0x1da3bf0()*-0.00713614);
}

double NNfunction_ss_cRcR::synapse0x1dcb6b0() {
   return (neuron0x1da3f30()*-0.314179);
}

double NNfunction_ss_cRcR::synapse0x1dcb6f0() {
   return (neuron0x1da4270()*-0.0755327);
}

double NNfunction_ss_cRcR::synapse0x1dcb730() {
   return (neuron0x1da45b0()*0.384633);
}

double NNfunction_ss_cRcR::synapse0x1dcb770() {
   return (neuron0x1da48f0()*0.0419242);
}

double NNfunction_ss_cRcR::synapse0x1dcb7b0() {
   return (neuron0x1da4c30()*0.161044);
}

double NNfunction_ss_cRcR::synapse0x1dcb7f0() {
   return (neuron0x1da4f70()*-0.141335);
}

double NNfunction_ss_cRcR::synapse0x1dcb830() {
   return (neuron0x1da52b0()*0.035242);
}

double NNfunction_ss_cRcR::synapse0x1dcb870() {
   return (neuron0x1da55f0()*0.289186);
}

double NNfunction_ss_cRcR::synapse0x1dcb8b0() {
   return (neuron0x1da5930()*0.208683);
}

double NNfunction_ss_cRcR::synapse0x1dcb8f0() {
   return (neuron0x1da5c70()*-0.273264);
}

double NNfunction_ss_cRcR::synapse0x1dcb930() {
   return (neuron0x1da5fb0()*0.181273);
}

double NNfunction_ss_cRcR::synapse0x1dcb970() {
   return (neuron0x1da62f0()*0.349227);
}

double NNfunction_ss_cRcR::synapse0x1dcb9b0() {
   return (neuron0x1da6630()*0.0818279);
}

double NNfunction_ss_cRcR::synapse0x1dcb440() {
   return (neuron0x1da6970()*-0.059537);
}

double NNfunction_ss_cRcR::synapse0x1dcb480() {
   return (neuron0x1da6ed0()*1.70367);
}

double NNfunction_ss_cRcR::synapse0x1dcbb00() {
   return (neuron0x1da70f0()*1.17474);
}

double NNfunction_ss_cRcR::synapse0x1dcbb40() {
   return (neuron0x1da7430()*0.0248177);
}

double NNfunction_ss_cRcR::synapse0x1dcbb80() {
   return (neuron0x1da7770()*-0.149491);
}

double NNfunction_ss_cRcR::synapse0x1dcbbc0() {
   return (neuron0x1da7ab0()*-0.106523);
}

double NNfunction_ss_cRcR::synapse0x1dcbc00() {
   return (neuron0x1da7df0()*-0.171923);
}

double NNfunction_ss_cRcR::synapse0x1dcbc40() {
   return (neuron0x1da8130()*-0.0278435);
}

double NNfunction_ss_cRcR::synapse0x1dcbfc0() {
   return (neuron0x1da3570()*-0.47605);
}

double NNfunction_ss_cRcR::synapse0x1dcc000() {
   return (neuron0x1da38b0()*-0.073279);
}

double NNfunction_ss_cRcR::synapse0x1dcc040() {
   return (neuron0x1da3bf0()*0.143291);
}

double NNfunction_ss_cRcR::synapse0x1dcc080() {
   return (neuron0x1da3f30()*-1.69958);
}

double NNfunction_ss_cRcR::synapse0x1dcc0c0() {
   return (neuron0x1da4270()*0.728149);
}

double NNfunction_ss_cRcR::synapse0x1dcc100() {
   return (neuron0x1da45b0()*1.24273);
}

double NNfunction_ss_cRcR::synapse0x1dcc140() {
   return (neuron0x1da48f0()*0.0291812);
}

double NNfunction_ss_cRcR::synapse0x1dcc180() {
   return (neuron0x1da4c30()*0.333976);
}

double NNfunction_ss_cRcR::synapse0x1dcc1c0() {
   return (neuron0x1da4f70()*-0.144791);
}

double NNfunction_ss_cRcR::synapse0x1dcc200() {
   return (neuron0x1da52b0()*0.902129);
}

double NNfunction_ss_cRcR::synapse0x1dcc240() {
   return (neuron0x1da55f0()*-1.05565);
}

double NNfunction_ss_cRcR::synapse0x1dcc280() {
   return (neuron0x1da5930()*-1.10259);
}

double NNfunction_ss_cRcR::synapse0x1dcc2c0() {
   return (neuron0x1da5c70()*0.738724);
}

double NNfunction_ss_cRcR::synapse0x1dcc300() {
   return (neuron0x1da5fb0()*-1.1087);
}

double NNfunction_ss_cRcR::synapse0x1dcc340() {
   return (neuron0x1da62f0()*0.764654);
}

double NNfunction_ss_cRcR::synapse0x1dcc380() {
   return (neuron0x1da6630()*-0.41052);
}

double NNfunction_ss_cRcR::synapse0x1dcbe10() {
   return (neuron0x1da6970()*-0.132995);
}

double NNfunction_ss_cRcR::synapse0x1dcbe50() {
   return (neuron0x1da6ed0()*0.825752);
}

double NNfunction_ss_cRcR::synapse0x1dcc4d0() {
   return (neuron0x1da70f0()*0.189017);
}

double NNfunction_ss_cRcR::synapse0x1dcc510() {
   return (neuron0x1da7430()*-0.11296);
}

double NNfunction_ss_cRcR::synapse0x1dcc550() {
   return (neuron0x1da7770()*-0.0258476);
}

double NNfunction_ss_cRcR::synapse0x1dcc590() {
   return (neuron0x1da7ab0()*0.197285);
}

double NNfunction_ss_cRcR::synapse0x1dcc5d0() {
   return (neuron0x1da7df0()*0.520191);
}

double NNfunction_ss_cRcR::synapse0x1dcc610() {
   return (neuron0x1da8130()*0.0615893);
}

double NNfunction_ss_cRcR::synapse0x1dcc990() {
   return (neuron0x1da3570()*0.0933299);
}

double NNfunction_ss_cRcR::synapse0x1dcc9d0() {
   return (neuron0x1da38b0()*1.08399);
}

double NNfunction_ss_cRcR::synapse0x1dcca10() {
   return (neuron0x1da3bf0()*-0.4001);
}

double NNfunction_ss_cRcR::synapse0x1dcca50() {
   return (neuron0x1da3f30()*-1.84392);
}

double NNfunction_ss_cRcR::synapse0x1dcca90() {
   return (neuron0x1da4270()*-0.123082);
}

double NNfunction_ss_cRcR::synapse0x1dccad0() {
   return (neuron0x1da45b0()*-0.168752);
}

double NNfunction_ss_cRcR::synapse0x1dccb10() {
   return (neuron0x1da48f0()*-0.362463);
}

double NNfunction_ss_cRcR::synapse0x1dccb50() {
   return (neuron0x1da4c30()*0.220544);
}

double NNfunction_ss_cRcR::synapse0x1dccb90() {
   return (neuron0x1da4f70()*0.314428);
}

double NNfunction_ss_cRcR::synapse0x1dccbd0() {
   return (neuron0x1da52b0()*0.166693);
}

double NNfunction_ss_cRcR::synapse0x1dccc10() {
   return (neuron0x1da55f0()*-0.246992);
}

double NNfunction_ss_cRcR::synapse0x1dccc50() {
   return (neuron0x1da5930()*-0.0581894);
}

double NNfunction_ss_cRcR::synapse0x1dccc90() {
   return (neuron0x1da5c70()*-0.0372974);
}

double NNfunction_ss_cRcR::synapse0x1dcccd0() {
   return (neuron0x1da5fb0()*-0.423572);
}

double NNfunction_ss_cRcR::synapse0x1dccd10() {
   return (neuron0x1da62f0()*-0.367238);
}

double NNfunction_ss_cRcR::synapse0x1dccd50() {
   return (neuron0x1da6630()*-1.17621);
}

double NNfunction_ss_cRcR::synapse0x1dcc7e0() {
   return (neuron0x1da6970()*-0.657882);
}

double NNfunction_ss_cRcR::synapse0x1dcc820() {
   return (neuron0x1da6ed0()*0.300009);
}

double NNfunction_ss_cRcR::synapse0x1dccea0() {
   return (neuron0x1da70f0()*-0.0193455);
}

double NNfunction_ss_cRcR::synapse0x1dccee0() {
   return (neuron0x1da7430()*0.141067);
}

double NNfunction_ss_cRcR::synapse0x1dccf20() {
   return (neuron0x1da7770()*0.334884);
}

double NNfunction_ss_cRcR::synapse0x1dccf60() {
   return (neuron0x1da7ab0()*0.275);
}

double NNfunction_ss_cRcR::synapse0x1dccfa0() {
   return (neuron0x1da7df0()*-1.41114);
}

double NNfunction_ss_cRcR::synapse0x1dccfe0() {
   return (neuron0x1da8130()*-0.38776);
}

double NNfunction_ss_cRcR::synapse0x1da9580() {
   return (neuron0x1da85d0()*-0.0522471);
}

double NNfunction_ss_cRcR::synapse0x1da95c0() {
   return (neuron0x1da8ee0()*0.151722);
}

double NNfunction_ss_cRcR::synapse0x1daaa90() {
   return (neuron0x1da99c0()*0.41246);
}

double NNfunction_ss_cRcR::synapse0x1daaad0() {
   return (neuron0x1b63250()*-0.535631);
}

double NNfunction_ss_cRcR::synapse0x1dab460() {
   return (neuron0x1daa7e0()*2.45215);
}

double NNfunction_ss_cRcR::synapse0x1dab4a0() {
   return (neuron0x1dab1b0()*0.166886);
}

double NNfunction_ss_cRcR::synapse0x1dac230() {
   return (neuron0x1dabf80()*0.1801);
}

double NNfunction_ss_cRcR::synapse0x1dac270() {
   return (neuron0x1dac950()*-0.360454);
}

double NNfunction_ss_cRcR::synapse0x1dacc00() {
   return (neuron0x1dad320()*0.116957);
}

double NNfunction_ss_cRcR::synapse0x1dacc40() {
   return (neuron0x1dade00()*0.414621);
}

double NNfunction_ss_cRcR::synapse0x1dad5d0() {
   return (neuron0x1dae7d0()*0.973477);
}

double NNfunction_ss_cRcR::synapse0x1dad610() {
   return (neuron0x1dab8b0()*-0.117735);
}

double NNfunction_ss_cRcR::synapse0x1dae0b0() {
   return (neuron0x1db0380()*0.205474);
}

double NNfunction_ss_cRcR::synapse0x1dae0f0() {
   return (neuron0x1db0d50()*0.500436);
}

double NNfunction_ss_cRcR::synapse0x1daea80() {
   return (neuron0x1db1720()*9.67107e-05);
}

double NNfunction_ss_cRcR::synapse0x1daeac0() {
   return (neuron0x1db20f0()*0.233462);
}

double NNfunction_ss_cRcR::synapse0x1dabb60() {
   return (neuron0x1db3f00()*0.335855);
}

double NNfunction_ss_cRcR::synapse0x1dabba0() {
   return (neuron0x1db41e0()*-0.0898656);
}

double NNfunction_ss_cRcR::synapse0x1db0630() {
   return (neuron0x1db4bb0()*0.378232);
}

double NNfunction_ss_cRcR::synapse0x1db0670() {
   return (neuron0x1db5580()*0.488048);
}

double NNfunction_ss_cRcR::synapse0x1db1000() {
   return (neuron0x1db5f50()*-0.0743729);
}

double NNfunction_ss_cRcR::synapse0x1db1040() {
   return (neuron0x1db6920()*-0.166954);
}

double NNfunction_ss_cRcR::synapse0x1db19d0() {
   return (neuron0x1daf470()*0.357643);
}

double NNfunction_ss_cRcR::synapse0x1db1a10() {
   return (neuron0x1dafe40()*-0.288816);
}

double NNfunction_ss_cRcR::synapse0x1db23a0() {
   return (neuron0x1db96b0()*0.54122);
}

double NNfunction_ss_cRcR::synapse0x1db23e0() {
   return (neuron0x1dba080()*1.21514);
}

double NNfunction_ss_cRcR::synapse0x1da6510() {
   return (neuron0x1dbaa50()*0.260691);
}

double NNfunction_ss_cRcR::synapse0x1da6550() {
   return (neuron0x1dbb420()*2.33028);
}

double NNfunction_ss_cRcR::synapse0x1db4490() {
   return (neuron0x1dbbdf0()*0.165512);
}

double NNfunction_ss_cRcR::synapse0x1db44d0() {
   return (neuron0x1dbc7c0()*-0.0119364);
}

double NNfunction_ss_cRcR::synapse0x1db4e60() {
   return (neuron0x1dbd190()*-0.214408);
}

double NNfunction_ss_cRcR::synapse0x1db4ea0() {
   return (neuron0x1dbdb60()*-0.328981);
}

double NNfunction_ss_cRcR::synapse0x1db5830() {
   return (neuron0x1db3bf0()*-0.0101593);
}

double NNfunction_ss_cRcR::synapse0x1db5870() {
   return (neuron0x1dc0740()*0.423692);
}

double NNfunction_ss_cRcR::synapse0x1db6200() {
   return (neuron0x1dc1110()*0.196006);
}

double NNfunction_ss_cRcR::synapse0x1db6240() {
   return (neuron0x1dc1ae0()*-0.0763624);
}

double NNfunction_ss_cRcR::synapse0x1db6bd0() {
   return (neuron0x1dc24b0()*-0.155996);
}

double NNfunction_ss_cRcR::synapse0x1db6c10() {
   return (neuron0x1dc2e80()*-0.147455);
}

double NNfunction_ss_cRcR::synapse0x1daf720() {
   return (neuron0x1dc3850()*-1.78321);
}

double NNfunction_ss_cRcR::synapse0x1daf760() {
   return (neuron0x1dc4220()*-4.3335);
}

double NNfunction_ss_cRcR::synapse0x1db8fd0() {
   return (neuron0x1dc4bf0()*-0.782404);
}

double NNfunction_ss_cRcR::synapse0x1db9010() {
   return (neuron0x1dc57d0()*0.323148);
}

double NNfunction_ss_cRcR::synapse0x1db9960() {
   return (neuron0x1dc61a0()*0.914792);
}

double NNfunction_ss_cRcR::synapse0x1db99a0() {
   return (neuron0x1db7020()*-0.0891073);
}

double NNfunction_ss_cRcR::synapse0x1dba330() {
   return (neuron0x1db79f0()*0.0194628);
}

double NNfunction_ss_cRcR::synapse0x1dba370() {
   return (neuron0x1db83c0()*-1.0099);
}

double NNfunction_ss_cRcR::synapse0x1dbad00() {
   return (neuron0x1dcaa00()*-2.57878);
}

double NNfunction_ss_cRcR::synapse0x1dbad40() {
   return (neuron0x1dcb2b0()*0.132687);
}

double NNfunction_ss_cRcR::synapse0x1dbb6d0() {
   return (neuron0x1dcbc80()*0.242708);
}

double NNfunction_ss_cRcR::synapse0x1dbb710() {
   return (neuron0x1dcc650()*-0.117734);
}

double NNfunction_ss_cRcR::synapse0x1dbde10() {
   return (neuron0x1da85d0()*-0.154225);
}

double NNfunction_ss_cRcR::synapse0x1dbde50() {
   return (neuron0x1da8ee0()*1.18305);
}

double NNfunction_ss_cRcR::synapse0x1db33d0() {
   return (neuron0x1da99c0()*-1.67949);
}

double NNfunction_ss_cRcR::synapse0x1db3410() {
   return (neuron0x1b63250()*-1.11674);
}

double NNfunction_ss_cRcR::synapse0x1dc09f0() {
   return (neuron0x1daa7e0()*7.08379);
}

double NNfunction_ss_cRcR::synapse0x1dc0a30() {
   return (neuron0x1dab1b0()*1.21567);
}

double NNfunction_ss_cRcR::synapse0x1dc13c0() {
   return (neuron0x1dabf80()*2.67784);
}

double NNfunction_ss_cRcR::synapse0x1dc1400() {
   return (neuron0x1dac950()*-2.10996);
}

double NNfunction_ss_cRcR::synapse0x1dc1d90() {
   return (neuron0x1dad320()*-1.26194);
}

double NNfunction_ss_cRcR::synapse0x1dc1dd0() {
   return (neuron0x1dade00()*1.7228);
}

double NNfunction_ss_cRcR::synapse0x1dc2760() {
   return (neuron0x1dae7d0()*-1.45021);
}

double NNfunction_ss_cRcR::synapse0x1dc27a0() {
   return (neuron0x1dab8b0()*1.46063);
}

double NNfunction_ss_cRcR::synapse0x1dc3130() {
   return (neuron0x1db0380()*-0.128104);
}

double NNfunction_ss_cRcR::synapse0x1dc3170() {
   return (neuron0x1db0d50()*-2.39378);
}

double NNfunction_ss_cRcR::synapse0x1dc3b00() {
   return (neuron0x1db1720()*2.10283);
}

double NNfunction_ss_cRcR::synapse0x1dc3b40() {
   return (neuron0x1db20f0()*5.85966);
}

double NNfunction_ss_cRcR::synapse0x1dc44d0() {
   return (neuron0x1db3f00()*0.923509);
}

double NNfunction_ss_cRcR::synapse0x1dc4510() {
   return (neuron0x1db41e0()*1.65951);
}

double NNfunction_ss_cRcR::synapse0x1dc4ea0() {
   return (neuron0x1db4bb0()*2.93692);
}

double NNfunction_ss_cRcR::synapse0x1dc4ee0() {
   return (neuron0x1db5580()*0.543907);
}

double NNfunction_ss_cRcR::synapse0x1dc5a80() {
   return (neuron0x1db5f50()*-0.759726);
}

double NNfunction_ss_cRcR::synapse0x1dc5ac0() {
   return (neuron0x1db6920()*-1.53888);
}

double NNfunction_ss_cRcR::synapse0x1dc6450() {
   return (neuron0x1daf470()*-1.96939);
}

double NNfunction_ss_cRcR::synapse0x1dc6490() {
   return (neuron0x1dafe40()*-2.88348);
}

double NNfunction_ss_cRcR::synapse0x1db72d0() {
   return (neuron0x1db96b0()*3.68621);
}

double NNfunction_ss_cRcR::synapse0x1db7310() {
   return (neuron0x1dba080()*6.70593);
}

double NNfunction_ss_cRcR::synapse0x1db7ca0() {
   return (neuron0x1dbaa50()*1.87285);
}

double NNfunction_ss_cRcR::synapse0x1db7ce0() {
   return (neuron0x1dbb420()*0.122535);
}

double NNfunction_ss_cRcR::synapse0x1db8670() {
   return (neuron0x1dbbdf0()*-2.25521);
}

double NNfunction_ss_cRcR::synapse0x1db86b0() {
   return (neuron0x1dbc7c0()*-1.21548);
}

double NNfunction_ss_cRcR::synapse0x1dcab90() {
   return (neuron0x1dbd190()*-0.474695);
}

double NNfunction_ss_cRcR::synapse0x1dcabd0() {
   return (neuron0x1dbdb60()*-2.15828);
}

double NNfunction_ss_cRcR::synapse0x1dcb560() {
   return (neuron0x1db3bf0()*2.60024);
}

double NNfunction_ss_cRcR::synapse0x1dcb5a0() {
   return (neuron0x1dc0740()*0.6115);
}

double NNfunction_ss_cRcR::synapse0x1dcbf30() {
   return (neuron0x1dc1110()*0.881367);
}

double NNfunction_ss_cRcR::synapse0x1dcbf70() {
   return (neuron0x1dc1ae0()*0.338265);
}

double NNfunction_ss_cRcR::synapse0x1dcc900() {
   return (neuron0x1dc24b0()*-1.6682);
}

double NNfunction_ss_cRcR::synapse0x1dcc940() {
   return (neuron0x1dc2e80()*1.7421);
}

double NNfunction_ss_cRcR::synapse0x1da87f0() {
   return (neuron0x1dc3850()*-3.92773);
}

double NNfunction_ss_cRcR::synapse0x1da8830() {
   return (neuron0x1dc4220()*-4.92064);
}

double NNfunction_ss_cRcR::synapse0x1dbc0a0() {
   return (neuron0x1dc4bf0()*-2.70304);
}

double NNfunction_ss_cRcR::synapse0x1dbc0e0() {
   return (neuron0x1dc57d0()*-0.237432);
}

double NNfunction_ss_cRcR::synapse0x1dcd020() {
   return (neuron0x1dc61a0()*-2.58967);
}

double NNfunction_ss_cRcR::synapse0x1dcd060() {
   return (neuron0x1db7020()*-2.45075);
}

double NNfunction_ss_cRcR::synapse0x1dcd0a0() {
   return (neuron0x1db79f0()*-1.39733);
}

double NNfunction_ss_cRcR::synapse0x1dcd0e0() {
   return (neuron0x1db83c0()*-1.91269);
}

double NNfunction_ss_cRcR::synapse0x1dd3f90() {
   return (neuron0x1dcaa00()*0.376324);
}

double NNfunction_ss_cRcR::synapse0x1dd3fd0() {
   return (neuron0x1dcb2b0()*2.15554);
}

double NNfunction_ss_cRcR::synapse0x1dd4010() {
   return (neuron0x1dcbc80()*2.28031);
}

double NNfunction_ss_cRcR::synapse0x1dd4050() {
   return (neuron0x1dcc650()*3.56303);
}

double NNfunction_ss_cRcR::synapse0x1dd43d0() {
   return (neuron0x1da85d0()*-2.40861);
}

double NNfunction_ss_cRcR::synapse0x1dd4410() {
   return (neuron0x1da8ee0()*-1.15076);
}

double NNfunction_ss_cRcR::synapse0x1dd4450() {
   return (neuron0x1da99c0()*-2.4609);
}

double NNfunction_ss_cRcR::synapse0x1dd4490() {
   return (neuron0x1b63250()*2.99246);
}

double NNfunction_ss_cRcR::synapse0x1dd44d0() {
   return (neuron0x1daa7e0()*-4.47261);
}

double NNfunction_ss_cRcR::synapse0x1dd4510() {
   return (neuron0x1dab1b0()*-0.429619);
}

double NNfunction_ss_cRcR::synapse0x1dd4550() {
   return (neuron0x1dabf80()*-0.617772);
}

double NNfunction_ss_cRcR::synapse0x1dd4590() {
   return (neuron0x1dac950()*3.01913);
}

double NNfunction_ss_cRcR::synapse0x1dd45d0() {
   return (neuron0x1dad320()*-0.89434);
}

double NNfunction_ss_cRcR::synapse0x1dd4610() {
   return (neuron0x1dade00()*-1.29119);
}

double NNfunction_ss_cRcR::synapse0x1dd4650() {
   return (neuron0x1dae7d0()*3.21602);
}

double NNfunction_ss_cRcR::synapse0x1dd4690() {
   return (neuron0x1dab8b0()*-0.772184);
}

double NNfunction_ss_cRcR::synapse0x1dd46d0() {
   return (neuron0x1db0380()*0.152023);
}

double NNfunction_ss_cRcR::synapse0x1dd4710() {
   return (neuron0x1db0d50()*-1.02615);
}

double NNfunction_ss_cRcR::synapse0x1dd4750() {
   return (neuron0x1db1720()*0.139612);
}

double NNfunction_ss_cRcR::synapse0x1dd4790() {
   return (neuron0x1db20f0()*-2.01544);
}

double NNfunction_ss_cRcR::synapse0x1dd4220() {
   return (neuron0x1db3f00()*-2.63382);
}

double NNfunction_ss_cRcR::synapse0x1dd4260() {
   return (neuron0x1db41e0()*-0.897481);
}

double NNfunction_ss_cRcR::synapse0x1dd48e0() {
   return (neuron0x1db4bb0()*-1.40703);
}

double NNfunction_ss_cRcR::synapse0x1dd4920() {
   return (neuron0x1db5580()*-1.15416);
}

double NNfunction_ss_cRcR::synapse0x1dd4960() {
   return (neuron0x1db5f50()*-0.877626);
}

double NNfunction_ss_cRcR::synapse0x1dd49a0() {
   return (neuron0x1db6920()*1.85128);
}

double NNfunction_ss_cRcR::synapse0x1dd49e0() {
   return (neuron0x1daf470()*-1.51705);
}

double NNfunction_ss_cRcR::synapse0x1dd4a20() {
   return (neuron0x1dafe40()*1.57501);
}

double NNfunction_ss_cRcR::synapse0x1dd4a60() {
   return (neuron0x1db96b0()*-1.75434);
}

double NNfunction_ss_cRcR::synapse0x1dd4aa0() {
   return (neuron0x1dba080()*-5.37616);
}

double NNfunction_ss_cRcR::synapse0x1dd4ae0() {
   return (neuron0x1dbaa50()*-1.61589);
}

double NNfunction_ss_cRcR::synapse0x1dd4b20() {
   return (neuron0x1dbb420()*6.96432);
}

double NNfunction_ss_cRcR::synapse0x1dd4b60() {
   return (neuron0x1dbbdf0()*1.97107);
}

double NNfunction_ss_cRcR::synapse0x1dd4ba0() {
   return (neuron0x1dbc7c0()*-0.759132);
}

double NNfunction_ss_cRcR::synapse0x1dd4be0() {
   return (neuron0x1dbd190()*4.47719);
}

double NNfunction_ss_cRcR::synapse0x1dd4c20() {
   return (neuron0x1dbdb60()*2.7402);
}

double NNfunction_ss_cRcR::synapse0x1dd47d0() {
   return (neuron0x1db3bf0()*0.109012);
}

double NNfunction_ss_cRcR::synapse0x1dd4810() {
   return (neuron0x1dc0740()*-2.70655);
}

double NNfunction_ss_cRcR::synapse0x1dd4850() {
   return (neuron0x1dc1110()*-0.815255);
}

double NNfunction_ss_cRcR::synapse0x1dd4890() {
   return (neuron0x1dc1ae0()*-1.60061);
}

double NNfunction_ss_cRcR::synapse0x1dd4e70() {
   return (neuron0x1dc24b0()*3.27073);
}

double NNfunction_ss_cRcR::synapse0x1dd4eb0() {
   return (neuron0x1dc2e80()*0.726815);
}

double NNfunction_ss_cRcR::synapse0x1dd4ef0() {
   return (neuron0x1dc3850()*3.95338);
}

double NNfunction_ss_cRcR::synapse0x1dd4f30() {
   return (neuron0x1dc4220()*4.16463);
}

double NNfunction_ss_cRcR::synapse0x1dd4f70() {
   return (neuron0x1dc4bf0()*3.29908);
}

double NNfunction_ss_cRcR::synapse0x1dd4fb0() {
   return (neuron0x1dc57d0()*-2.58225);
}

double NNfunction_ss_cRcR::synapse0x1dd4ff0() {
   return (neuron0x1dc61a0()*2.05483);
}

double NNfunction_ss_cRcR::synapse0x1dd5030() {
   return (neuron0x1db7020()*-0.421117);
}

double NNfunction_ss_cRcR::synapse0x1dd5070() {
   return (neuron0x1db79f0()*-0.600977);
}

double NNfunction_ss_cRcR::synapse0x1dd50b0() {
   return (neuron0x1db83c0()*-0.522694);
}

double NNfunction_ss_cRcR::synapse0x1dd50f0() {
   return (neuron0x1dcaa00()*-1.88397);
}

double NNfunction_ss_cRcR::synapse0x1dd5130() {
   return (neuron0x1dcb2b0()*-0.575168);
}

double NNfunction_ss_cRcR::synapse0x1dd5170() {
   return (neuron0x1dcbc80()*0.528124);
}

double NNfunction_ss_cRcR::synapse0x1dd51b0() {
   return (neuron0x1dcc650()*0.413514);
}

double NNfunction_ss_cRcR::synapse0x1dd5530() {
   return (neuron0x1da85d0()*-0.641561);
}

double NNfunction_ss_cRcR::synapse0x1dd5570() {
   return (neuron0x1da8ee0()*0.659983);
}

double NNfunction_ss_cRcR::synapse0x1dd55b0() {
   return (neuron0x1da99c0()*-0.649494);
}

double NNfunction_ss_cRcR::synapse0x1dd55f0() {
   return (neuron0x1b63250()*-0.266165);
}

double NNfunction_ss_cRcR::synapse0x1dd5630() {
   return (neuron0x1daa7e0()*6.42451);
}

double NNfunction_ss_cRcR::synapse0x1dd5670() {
   return (neuron0x1dab1b0()*0.100489);
}

double NNfunction_ss_cRcR::synapse0x1dd56b0() {
   return (neuron0x1dabf80()*-0.39505);
}

double NNfunction_ss_cRcR::synapse0x1dd56f0() {
   return (neuron0x1dac950()*-1.95539);
}

double NNfunction_ss_cRcR::synapse0x1dd5730() {
   return (neuron0x1dad320()*0.288831);
}

double NNfunction_ss_cRcR::synapse0x1dd5770() {
   return (neuron0x1dade00()*1.19351);
}

double NNfunction_ss_cRcR::synapse0x1dd57b0() {
   return (neuron0x1dae7d0()*1.00116);
}

double NNfunction_ss_cRcR::synapse0x1dd57f0() {
   return (neuron0x1dab8b0()*0.946517);
}

double NNfunction_ss_cRcR::synapse0x1dd5830() {
   return (neuron0x1db0380()*0.790213);
}

double NNfunction_ss_cRcR::synapse0x1dd5870() {
   return (neuron0x1db0d50()*0.0388045);
}

double NNfunction_ss_cRcR::synapse0x1dd58b0() {
   return (neuron0x1db1720()*0.640487);
}

double NNfunction_ss_cRcR::synapse0x1dd58f0() {
   return (neuron0x1db20f0()*2.00551);
}

double NNfunction_ss_cRcR::synapse0x1dd5380() {
   return (neuron0x1db3f00()*0.940026);
}

double NNfunction_ss_cRcR::synapse0x1dd53c0() {
   return (neuron0x1db41e0()*-0.740196);
}

double NNfunction_ss_cRcR::synapse0x1dd5a40() {
   return (neuron0x1db4bb0()*1.62273);
}

double NNfunction_ss_cRcR::synapse0x1dd5a80() {
   return (neuron0x1db5580()*0.4429);
}

double NNfunction_ss_cRcR::synapse0x1dd5ac0() {
   return (neuron0x1db5f50()*-0.870698);
}

double NNfunction_ss_cRcR::synapse0x1dd5b00() {
   return (neuron0x1db6920()*-0.658128);
}

double NNfunction_ss_cRcR::synapse0x1dd5b40() {
   return (neuron0x1daf470()*-0.415001);
}

double NNfunction_ss_cRcR::synapse0x1dd5b80() {
   return (neuron0x1dafe40()*-1.65426);
}

double NNfunction_ss_cRcR::synapse0x1dd5bc0() {
   return (neuron0x1db96b0()*2.84847);
}

double NNfunction_ss_cRcR::synapse0x1dd5c00() {
   return (neuron0x1dba080()*2.35705);
}

double NNfunction_ss_cRcR::synapse0x1dd5c40() {
   return (neuron0x1dbaa50()*1.56038);
}

double NNfunction_ss_cRcR::synapse0x1dd5c80() {
   return (neuron0x1dbb420()*0.371678);
}

double NNfunction_ss_cRcR::synapse0x1dd5cc0() {
   return (neuron0x1dbbdf0()*1.25244);
}

double NNfunction_ss_cRcR::synapse0x1dd5d00() {
   return (neuron0x1dbc7c0()*-2.06192);
}

double NNfunction_ss_cRcR::synapse0x1dd5d40() {
   return (neuron0x1dbd190()*-2.14971);
}

double NNfunction_ss_cRcR::synapse0x1dd5d80() {
   return (neuron0x1dbdb60()*1.60785);
}

double NNfunction_ss_cRcR::synapse0x1dd5930() {
   return (neuron0x1db3bf0()*0.330189);
}

double NNfunction_ss_cRcR::synapse0x1dd5970() {
   return (neuron0x1dc0740()*1.32042);
}

double NNfunction_ss_cRcR::synapse0x1dd59b0() {
   return (neuron0x1dc1110()*0.157934);
}

double NNfunction_ss_cRcR::synapse0x1dd59f0() {
   return (neuron0x1dc1ae0()*0.447083);
}

double NNfunction_ss_cRcR::synapse0x1dd5fd0() {
   return (neuron0x1dc24b0()*1.89231);
}

double NNfunction_ss_cRcR::synapse0x1dd6010() {
   return (neuron0x1dc2e80()*3.64254);
}

double NNfunction_ss_cRcR::synapse0x1dd6050() {
   return (neuron0x1dc3850()*-0.331628);
}

double NNfunction_ss_cRcR::synapse0x1dd6090() {
   return (neuron0x1dc4220()*-3.08787);
}

double NNfunction_ss_cRcR::synapse0x1dd60d0() {
   return (neuron0x1dc4bf0()*-1.30578);
}

double NNfunction_ss_cRcR::synapse0x1dd6110() {
   return (neuron0x1dc57d0()*0.917846);
}

double NNfunction_ss_cRcR::synapse0x1dd6150() {
   return (neuron0x1dc61a0()*-2.43697);
}

double NNfunction_ss_cRcR::synapse0x1dd6190() {
   return (neuron0x1db7020()*-1.99295);
}

double NNfunction_ss_cRcR::synapse0x1dd61d0() {
   return (neuron0x1db79f0()*-0.726097);
}

double NNfunction_ss_cRcR::synapse0x1dd6210() {
   return (neuron0x1db83c0()*-0.503706);
}

double NNfunction_ss_cRcR::synapse0x1dd6250() {
   return (neuron0x1dcaa00()*0.499269);
}

double NNfunction_ss_cRcR::synapse0x1dd6290() {
   return (neuron0x1dcb2b0()*1.43567);
}

double NNfunction_ss_cRcR::synapse0x1dd62d0() {
   return (neuron0x1dcbc80()*0.561038);
}

double NNfunction_ss_cRcR::synapse0x1dd6310() {
   return (neuron0x1dcc650()*0.490808);
}

double NNfunction_ss_cRcR::synapse0x1dd6690() {
   return (neuron0x1da85d0()*0.151697);
}

double NNfunction_ss_cRcR::synapse0x1dd66d0() {
   return (neuron0x1da8ee0()*-0.0986057);
}

double NNfunction_ss_cRcR::synapse0x1dd6710() {
   return (neuron0x1da99c0()*-0.0458302);
}

double NNfunction_ss_cRcR::synapse0x1dd6750() {
   return (neuron0x1b63250()*0.306235);
}

double NNfunction_ss_cRcR::synapse0x1dd6790() {
   return (neuron0x1daa7e0()*0.0732328);
}

double NNfunction_ss_cRcR::synapse0x1dd67d0() {
   return (neuron0x1dab1b0()*-0.11609);
}

double NNfunction_ss_cRcR::synapse0x1dd6810() {
   return (neuron0x1dabf80()*-0.106076);
}

double NNfunction_ss_cRcR::synapse0x1dd6850() {
   return (neuron0x1dac950()*-0.070775);
}

double NNfunction_ss_cRcR::synapse0x1dd6890() {
   return (neuron0x1dad320()*-0.0803017);
}

double NNfunction_ss_cRcR::synapse0x1dd68d0() {
   return (neuron0x1dade00()*-0.147556);
}

double NNfunction_ss_cRcR::synapse0x1dd6910() {
   return (neuron0x1dae7d0()*-0.7335);
}

double NNfunction_ss_cRcR::synapse0x1dd6950() {
   return (neuron0x1dab8b0()*0.0739356);
}

double NNfunction_ss_cRcR::synapse0x1dd6990() {
   return (neuron0x1db0380()*0.549574);
}

double NNfunction_ss_cRcR::synapse0x1dd69d0() {
   return (neuron0x1db0d50()*-0.307293);
}

double NNfunction_ss_cRcR::synapse0x1dd6a10() {
   return (neuron0x1db1720()*-0.0173738);
}

double NNfunction_ss_cRcR::synapse0x1dd6a50() {
   return (neuron0x1db20f0()*-0.0266585);
}

double NNfunction_ss_cRcR::synapse0x1dd64e0() {
   return (neuron0x1db3f00()*-0.00482308);
}

double NNfunction_ss_cRcR::synapse0x1dd6520() {
   return (neuron0x1db41e0()*0.0268611);
}

double NNfunction_ss_cRcR::synapse0x1dd6ba0() {
   return (neuron0x1db4bb0()*-0.0813752);
}

double NNfunction_ss_cRcR::synapse0x1dd6be0() {
   return (neuron0x1db5580()*-0.295188);
}

double NNfunction_ss_cRcR::synapse0x1dd6c20() {
   return (neuron0x1db5f50()*0.0490385);
}

double NNfunction_ss_cRcR::synapse0x1dd6c60() {
   return (neuron0x1db6920()*0.0252609);
}

double NNfunction_ss_cRcR::synapse0x1dd6ca0() {
   return (neuron0x1daf470()*-0.216768);
}

double NNfunction_ss_cRcR::synapse0x1dd6ce0() {
   return (neuron0x1dafe40()*0.164568);
}

double NNfunction_ss_cRcR::synapse0x1dd6d20() {
   return (neuron0x1db96b0()*-0.270811);
}

double NNfunction_ss_cRcR::synapse0x1dd6d60() {
   return (neuron0x1dba080()*1.34583);
}

double NNfunction_ss_cRcR::synapse0x1dd6da0() {
   return (neuron0x1dbaa50()*-0.00988952);
}

double NNfunction_ss_cRcR::synapse0x1dd6de0() {
   return (neuron0x1dbb420()*-1.26114);
}

double NNfunction_ss_cRcR::synapse0x1dd6e20() {
   return (neuron0x1dbbdf0()*-0.206675);
}

double NNfunction_ss_cRcR::synapse0x1dd6e60() {
   return (neuron0x1dbc7c0()*0.0426094);
}

double NNfunction_ss_cRcR::synapse0x1dd6ea0() {
   return (neuron0x1dbd190()*-0.0630141);
}

double NNfunction_ss_cRcR::synapse0x1dd6ee0() {
   return (neuron0x1dbdb60()*0.0295369);
}

double NNfunction_ss_cRcR::synapse0x1dd6a90() {
   return (neuron0x1db3bf0()*-0.00142019);
}

double NNfunction_ss_cRcR::synapse0x1dd6ad0() {
   return (neuron0x1dc0740()*-0.0240542);
}

double NNfunction_ss_cRcR::synapse0x1dd6b10() {
   return (neuron0x1dc1110()*-0.126925);
}

double NNfunction_ss_cRcR::synapse0x1dd6b50() {
   return (neuron0x1dc1ae0()*0.0442367);
}

double NNfunction_ss_cRcR::synapse0x1dd7130() {
   return (neuron0x1dc24b0()*-0.0805058);
}

double NNfunction_ss_cRcR::synapse0x1dd7170() {
   return (neuron0x1dc2e80()*0.0681099);
}

double NNfunction_ss_cRcR::synapse0x1dd71b0() {
   return (neuron0x1dc3850()*-0.0157249);
}

double NNfunction_ss_cRcR::synapse0x1dd71f0() {
   return (neuron0x1dc4220()*1.29775);
}

double NNfunction_ss_cRcR::synapse0x1dd7230() {
   return (neuron0x1dc4bf0()*-1.17326);
}

double NNfunction_ss_cRcR::synapse0x1dd7270() {
   return (neuron0x1dc57d0()*0.00762863);
}

double NNfunction_ss_cRcR::synapse0x1dd72b0() {
   return (neuron0x1dc61a0()*-0.563258);
}

double NNfunction_ss_cRcR::synapse0x1dd72f0() {
   return (neuron0x1db7020()*0.0783215);
}

double NNfunction_ss_cRcR::synapse0x1dd7330() {
   return (neuron0x1db79f0()*-0.0192951);
}

double NNfunction_ss_cRcR::synapse0x1dd7370() {
   return (neuron0x1db83c0()*0.631195);
}

double NNfunction_ss_cRcR::synapse0x1dd73b0() {
   return (neuron0x1dcaa00()*2.51174);
}

double NNfunction_ss_cRcR::synapse0x1dd73f0() {
   return (neuron0x1dcb2b0()*-0.0151649);
}

double NNfunction_ss_cRcR::synapse0x1dd7430() {
   return (neuron0x1dcbc80()*-0.159349);
}

double NNfunction_ss_cRcR::synapse0x1dd7470() {
   return (neuron0x1dcc650()*0.0630573);
}

double NNfunction_ss_cRcR::synapse0x1da8590() {
   return (neuron0x1dd3850()*-3.8315);
}

double NNfunction_ss_cRcR::synapse0x1dd76d0() {
   return (neuron0x1dd3bf0()*-6.31763);
}

double NNfunction_ss_cRcR::synapse0x1dd7710() {
   return (neuron0x1dd4090()*12.1053);
}

double NNfunction_ss_cRcR::synapse0x1dd7750() {
   return (neuron0x1dd51f0()*-3.01184);
}

double NNfunction_ss_cRcR::synapse0x1dd7790() {
   return (neuron0x1dd6350()*-7.08794);
}

