#include "NNfunction_ss_dLdR.h"
#include <cmath>

double NNfunction_ss_dLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4913)/15.3409;
   input1 = (in1 - 0.629612)/1150.06;
   input2 = (in2 - 664.301)/626.35;
   input3 = (in3 - -53.1049)/812.298;
   input4 = (in4 - 1051.01)/945.921;
   input5 = (in5 - 886.049)/936.702;
   input6 = (in6 - 901.528)/939.401;
   input7 = (in7 - 917.755)/927.62;
   input8 = (in8 - 930.742)/979.128;
   input9 = (in9 - 904.203)/956.915;
   input10 = (in10 - 992.905)/957.49;
   input11 = (in11 - 498.58)/546.643;
   input12 = (in12 - 731.612)/879.591;
   input13 = (in13 - 507.406)/526.375;
   input14 = (in14 - 711.32)/806.709;
   input15 = (in15 - 714.716)/808.277;
   input16 = (in16 - 538.03)/561.307;
   input17 = (in17 - 529.655)/583.089;
   input18 = (in18 - 755.184)/901.813;
   input19 = (in19 - 808.087)/885.889;
   input20 = (in20 - -4.25827)/493.223;
   input21 = (in21 - 3.54339)/1156.89;
   input22 = (in22 - 4.21061)/1211.96;
   input23 = (in23 - -196.465)/603.503;
   switch(index) {
     case 0:
         return neuron0x1e514b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLdR::Value(int index, double* input) {
   input0 = (input[0] - 23.4913)/15.3409;
   input1 = (input[1] - 0.629612)/1150.06;
   input2 = (input[2] - 664.301)/626.35;
   input3 = (input[3] - -53.1049)/812.298;
   input4 = (input[4] - 1051.01)/945.921;
   input5 = (input[5] - 886.049)/936.702;
   input6 = (input[6] - 901.528)/939.401;
   input7 = (input[7] - 917.755)/927.62;
   input8 = (input[8] - 930.742)/979.128;
   input9 = (input[9] - 904.203)/956.915;
   input10 = (input[10] - 992.905)/957.49;
   input11 = (input[11] - 498.58)/546.643;
   input12 = (input[12] - 731.612)/879.591;
   input13 = (input[13] - 507.406)/526.375;
   input14 = (input[14] - 711.32)/806.709;
   input15 = (input[15] - 714.716)/808.277;
   input16 = (input[16] - 538.03)/561.307;
   input17 = (input[17] - 529.655)/583.089;
   input18 = (input[18] - 755.184)/901.813;
   input19 = (input[19] - 808.087)/885.889;
   input20 = (input[20] - -4.25827)/493.223;
   input21 = (input[21] - 3.54339)/1156.89;
   input22 = (input[22] - 4.21061)/1211.96;
   input23 = (input[23] - -196.465)/603.503;
   switch(index) {
     case 0:
         return neuron0x1e514b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLdR::neuron0x1e1d570() {
   return input0;
}

double NNfunction_ss_dLdR::neuron0x1e1d8b0() {
   return input1;
}

double NNfunction_ss_dLdR::neuron0x1e1dbf0() {
   return input2;
}

double NNfunction_ss_dLdR::neuron0x1e1df30() {
   return input3;
}

double NNfunction_ss_dLdR::neuron0x1e1e270() {
   return input4;
}

double NNfunction_ss_dLdR::neuron0x1e1e5b0() {
   return input5;
}

double NNfunction_ss_dLdR::neuron0x1e1e8f0() {
   return input6;
}

double NNfunction_ss_dLdR::neuron0x1e1ec30() {
   return input7;
}

double NNfunction_ss_dLdR::neuron0x1e1ef70() {
   return input8;
}

double NNfunction_ss_dLdR::neuron0x1e1f2b0() {
   return input9;
}

double NNfunction_ss_dLdR::neuron0x1e1f5f0() {
   return input10;
}

double NNfunction_ss_dLdR::neuron0x1e1f930() {
   return input11;
}

double NNfunction_ss_dLdR::neuron0x1e1fc70() {
   return input12;
}

double NNfunction_ss_dLdR::neuron0x1e1ffb0() {
   return input13;
}

double NNfunction_ss_dLdR::neuron0x1e202f0() {
   return input14;
}

double NNfunction_ss_dLdR::neuron0x1e20630() {
   return input15;
}

double NNfunction_ss_dLdR::neuron0x1e20970() {
   return input16;
}

double NNfunction_ss_dLdR::neuron0x1e20ed0() {
   return input17;
}

double NNfunction_ss_dLdR::neuron0x1e210f0() {
   return input18;
}

double NNfunction_ss_dLdR::neuron0x1e21430() {
   return input19;
}

double NNfunction_ss_dLdR::neuron0x1e21770() {
   return input20;
}

double NNfunction_ss_dLdR::neuron0x1e21ab0() {
   return input21;
}

double NNfunction_ss_dLdR::neuron0x1e21df0() {
   return input22;
}

double NNfunction_ss_dLdR::neuron0x1e22130() {
   return input23;
}

double NNfunction_ss_dLdR::input0x1e225d0() {
   double input = -0.474386;
   input += synapse0x1bdd3e0();
   input += synapse0x1e1d430();
   input += synapse0x1e1d470();
   input += synapse0x1e22880();
   input += synapse0x1e228c0();
   input += synapse0x1e22900();
   input += synapse0x1e22940();
   input += synapse0x1e22980();
   input += synapse0x1e229c0();
   input += synapse0x1e22a00();
   input += synapse0x1e22a40();
   input += synapse0x1e22a80();
   input += synapse0x1e22ac0();
   input += synapse0x1e22b00();
   input += synapse0x1e22b40();
   input += synapse0x1e22b80();
   input += synapse0x1e1d3a0();
   input += synapse0x1e1d3e0();
   input += synapse0x1bcec80();
   input += synapse0x1bcecc0();
   input += synapse0x1e22de0();
   input += synapse0x1e22e20();
   input += synapse0x1e22e60();
   input += synapse0x1e22ea0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e225d0() {
   double input = input0x1e225d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e22ee0() {
   double input = 0.957098;
   input += synapse0x1e23220();
   input += synapse0x1e23260();
   input += synapse0x1e232a0();
   input += synapse0x1e232e0();
   input += synapse0x1e23320();
   input += synapse0x1e23360();
   input += synapse0x1e233a0();
   input += synapse0x1e233e0();
   input += synapse0x1e23420();
   input += synapse0x1e22cd0();
   input += synapse0x1e22d10();
   input += synapse0x1e22d50();
   input += synapse0x1e22d90();
   input += synapse0x1e23670();
   input += synapse0x1e236b0();
   input += synapse0x1e236f0();
   input += synapse0x1e23070();
   input += synapse0x1e230b0();
   input += synapse0x1e23840();
   input += synapse0x1e23880();
   input += synapse0x1e238c0();
   input += synapse0x1e23900();
   input += synapse0x1e23940();
   input += synapse0x1e23980();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e22ee0() {
   double input = input0x1e22ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e239c0() {
   double input = 3.08519;
   input += synapse0x1e23d00();
   input += synapse0x1e23d40();
   input += synapse0x1e23d80();
   input += synapse0x1e23dc0();
   input += synapse0x1e23e00();
   input += synapse0x1e23e40();
   input += synapse0x1e23e80();
   input += synapse0x1e23ec0();
   input += synapse0x1e23f00();
   input += synapse0x1e23f40();
   input += synapse0x1e23f80();
   input += synapse0x1e23fc0();
   input += synapse0x1e24000();
   input += synapse0x1e24040();
   input += synapse0x1e24080();
   input += synapse0x1e240c0();
   input += synapse0x1e23b50();
   input += synapse0x1e23b90();
   input += synapse0x1bdcad0();
   input += synapse0x1bdcb10();
   input += synapse0x1e0c600();
   input += synapse0x1e0c640();
   input += synapse0x1e0c680();
   input += synapse0x1e1d4b0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e239c0() {
   double input = input0x1e239c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1bdd250() {
   double input = 0.502138;
   input += synapse0x1e23610();
   input += synapse0x1e1d4f0();
   input += synapse0x1e1d530();
   input += synapse0x1e24210();
   input += synapse0x1e24250();
   input += synapse0x1e24290();
   input += synapse0x1e242d0();
   input += synapse0x1e24310();
   input += synapse0x1e24350();
   input += synapse0x1e24390();
   input += synapse0x1e243d0();
   input += synapse0x1e24410();
   input += synapse0x1e24450();
   input += synapse0x1e24490();
   input += synapse0x1e244d0();
   input += synapse0x1e24510();
   input += synapse0x1e23460();
   input += synapse0x1e234a0();
   input += synapse0x1e24660();
   input += synapse0x1e246a0();
   input += synapse0x1e246e0();
   input += synapse0x1e24720();
   input += synapse0x1e24760();
   input += synapse0x1e247a0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1bdd250() {
   double input = input0x1bdd250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e247e0() {
   double input = -0.720288;
   input += synapse0x1e24b20();
   input += synapse0x1e24b60();
   input += synapse0x1e24ba0();
   input += synapse0x1e24be0();
   input += synapse0x1e24c20();
   input += synapse0x1e24c60();
   input += synapse0x1e24ca0();
   input += synapse0x1e24ce0();
   input += synapse0x1e24d20();
   input += synapse0x1e24d60();
   input += synapse0x1e24da0();
   input += synapse0x1e24de0();
   input += synapse0x1e24e20();
   input += synapse0x1e24e60();
   input += synapse0x1e24ea0();
   input += synapse0x1e24ee0();
   input += synapse0x1e24970();
   input += synapse0x1e249b0();
   input += synapse0x1e25030();
   input += synapse0x1e25070();
   input += synapse0x1e250b0();
   input += synapse0x1e250f0();
   input += synapse0x1e25130();
   input += synapse0x1e25170();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e247e0() {
   double input = input0x1e247e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e251b0() {
   double input = -0.112128;
   input += synapse0x1e254f0();
   input += synapse0x1e25530();
   input += synapse0x1e25570();
   input += synapse0x1e255b0();
   input += synapse0x1e255f0();
   input += synapse0x1e25630();
   input += synapse0x1e25670();
   input += synapse0x1e256b0();
   input += synapse0x1e256f0();
   input += synapse0x1bdce40();
   input += synapse0x1bdce80();
   input += synapse0x1bdcec0();
   input += synapse0x1bdcf00();
   input += synapse0x1bdcf40();
   input += synapse0x1bdcf80();
   input += synapse0x1bdcfc0();
   input += synapse0x1e25340();
   input += synapse0x1e25380();
   input += synapse0x1bdd110();
   input += synapse0x1bdd150();
   input += synapse0x1bdd190();
   input += synapse0x1bdd1d0();
   input += synapse0x1bdd210();
   input += synapse0x1e25f40();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e251b0() {
   double input = input0x1e251b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e25f80() {
   double input = 0.550006;
   input += synapse0x1e262c0();
   input += synapse0x1e26300();
   input += synapse0x1e26340();
   input += synapse0x1e26380();
   input += synapse0x1e263c0();
   input += synapse0x1e26400();
   input += synapse0x1e26440();
   input += synapse0x1e26480();
   input += synapse0x1e264c0();
   input += synapse0x1e26500();
   input += synapse0x1e26540();
   input += synapse0x1e26580();
   input += synapse0x1e265c0();
   input += synapse0x1e26600();
   input += synapse0x1e26640();
   input += synapse0x1e26680();
   input += synapse0x1e26110();
   input += synapse0x1e26150();
   input += synapse0x1e267d0();
   input += synapse0x1e26810();
   input += synapse0x1e26850();
   input += synapse0x1e26890();
   input += synapse0x1e268d0();
   input += synapse0x1e26910();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e25f80() {
   double input = input0x1e25f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e26950() {
   double input = 2.45474;
   input += synapse0x1e26c90();
   input += synapse0x1e26cd0();
   input += synapse0x1e26d10();
   input += synapse0x1e26d50();
   input += synapse0x1e26d90();
   input += synapse0x1e26dd0();
   input += synapse0x1e26e10();
   input += synapse0x1e26e50();
   input += synapse0x1e26e90();
   input += synapse0x1e26ed0();
   input += synapse0x1e26f10();
   input += synapse0x1e26f50();
   input += synapse0x1e26f90();
   input += synapse0x1e26fd0();
   input += synapse0x1e27010();
   input += synapse0x1e27050();
   input += synapse0x1e26ae0();
   input += synapse0x1e26b20();
   input += synapse0x1e271a0();
   input += synapse0x1e271e0();
   input += synapse0x1e27220();
   input += synapse0x1e27260();
   input += synapse0x1e272a0();
   input += synapse0x1e272e0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e26950() {
   double input = input0x1e26950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e27320() {
   double input = 0.534866;
   input += synapse0x1e20dc0();
   input += synapse0x1e20e00();
   input += synapse0x1e20e40();
   input += synapse0x1e20e80();
   input += synapse0x1e27870();
   input += synapse0x1e278b0();
   input += synapse0x1e278f0();
   input += synapse0x1e27930();
   input += synapse0x1e27970();
   input += synapse0x1e279b0();
   input += synapse0x1e279f0();
   input += synapse0x1e27a30();
   input += synapse0x1e27a70();
   input += synapse0x1e27ab0();
   input += synapse0x1e27af0();
   input += synapse0x1e27b30();
   input += synapse0x1e274b0();
   input += synapse0x1e274f0();
   input += synapse0x1e27c80();
   input += synapse0x1e27cc0();
   input += synapse0x1e27d00();
   input += synapse0x1e27d40();
   input += synapse0x1e27d80();
   input += synapse0x1e27dc0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e27320() {
   double input = input0x1e27320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e27e00() {
   double input = 0.2139;
   input += synapse0x1e28140();
   input += synapse0x1e28180();
   input += synapse0x1e281c0();
   input += synapse0x1e28200();
   input += synapse0x1e28240();
   input += synapse0x1e28280();
   input += synapse0x1e282c0();
   input += synapse0x1e28300();
   input += synapse0x1e28340();
   input += synapse0x1e28380();
   input += synapse0x1e283c0();
   input += synapse0x1e28400();
   input += synapse0x1e28440();
   input += synapse0x1e28480();
   input += synapse0x1e284c0();
   input += synapse0x1e28500();
   input += synapse0x1e27f90();
   input += synapse0x1e27fd0();
   input += synapse0x1e28650();
   input += synapse0x1e28690();
   input += synapse0x1e286d0();
   input += synapse0x1e28710();
   input += synapse0x1e28750();
   input += synapse0x1e28790();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e27e00() {
   double input = input0x1e27e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e287d0() {
   double input = 1.34846;
   input += synapse0x1e28b10();
   input += synapse0x1e28b50();
   input += synapse0x1e28b90();
   input += synapse0x1e28bd0();
   input += synapse0x1e28c10();
   input += synapse0x1e28c50();
   input += synapse0x1e28c90();
   input += synapse0x1e28cd0();
   input += synapse0x1e28d10();
   input += synapse0x1e28d50();
   input += synapse0x1e28d90();
   input += synapse0x1e28dd0();
   input += synapse0x1e28e10();
   input += synapse0x1e28e50();
   input += synapse0x1e28e90();
   input += synapse0x1e28ed0();
   input += synapse0x1e28960();
   input += synapse0x1e289a0();
   input += synapse0x1e25730();
   input += synapse0x1e25770();
   input += synapse0x1e257b0();
   input += synapse0x1e257f0();
   input += synapse0x1e25830();
   input += synapse0x1e25870();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e287d0() {
   double input = input0x1e287d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e258b0() {
   double input = -1.65192;
   input += synapse0x1e25bf0();
   input += synapse0x1e25c30();
   input += synapse0x1e25c70();
   input += synapse0x1e25cb0();
   input += synapse0x1e25cf0();
   input += synapse0x1e25d30();
   input += synapse0x1e25d70();
   input += synapse0x1e25db0();
   input += synapse0x1e25df0();
   input += synapse0x1e25e30();
   input += synapse0x1e25e70();
   input += synapse0x1e25eb0();
   input += synapse0x1e25ef0();
   input += synapse0x1e2a030();
   input += synapse0x1e2a070();
   input += synapse0x1e2a0b0();
   input += synapse0x1e25a40();
   input += synapse0x1e25a80();
   input += synapse0x1e2a200();
   input += synapse0x1e2a240();
   input += synapse0x1e2a280();
   input += synapse0x1e2a2c0();
   input += synapse0x1e2a300();
   input += synapse0x1e2a340();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e258b0() {
   double input = input0x1e258b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e2a380() {
   double input = 2.03293;
   input += synapse0x1e2a6c0();
   input += synapse0x1e2a700();
   input += synapse0x1e2a740();
   input += synapse0x1e2a780();
   input += synapse0x1e2a7c0();
   input += synapse0x1e2a800();
   input += synapse0x1e2a840();
   input += synapse0x1e2a880();
   input += synapse0x1e2a8c0();
   input += synapse0x1e2a900();
   input += synapse0x1e2a940();
   input += synapse0x1e2a980();
   input += synapse0x1e2a9c0();
   input += synapse0x1e2aa00();
   input += synapse0x1e2aa40();
   input += synapse0x1e2aa80();
   input += synapse0x1e2a510();
   input += synapse0x1e2a550();
   input += synapse0x1e2abd0();
   input += synapse0x1e2ac10();
   input += synapse0x1e2ac50();
   input += synapse0x1e2ac90();
   input += synapse0x1e2acd0();
   input += synapse0x1e2ad10();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e2a380() {
   double input = input0x1e2a380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e2ad50() {
   double input = -0.458019;
   input += synapse0x1e2b090();
   input += synapse0x1e2b0d0();
   input += synapse0x1e2b110();
   input += synapse0x1e2b150();
   input += synapse0x1e2b190();
   input += synapse0x1e2b1d0();
   input += synapse0x1e2b210();
   input += synapse0x1e2b250();
   input += synapse0x1e2b290();
   input += synapse0x1e2b2d0();
   input += synapse0x1e2b310();
   input += synapse0x1e2b350();
   input += synapse0x1e2b390();
   input += synapse0x1e2b3d0();
   input += synapse0x1e2b410();
   input += synapse0x1e2b450();
   input += synapse0x1e2aee0();
   input += synapse0x1e2af20();
   input += synapse0x1e2b5a0();
   input += synapse0x1e2b5e0();
   input += synapse0x1e2b620();
   input += synapse0x1e2b660();
   input += synapse0x1e2b6a0();
   input += synapse0x1e2b6e0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e2ad50() {
   double input = input0x1e2ad50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e2b720() {
   double input = -0.886959;
   input += synapse0x1e2ba60();
   input += synapse0x1e2baa0();
   input += synapse0x1e2bae0();
   input += synapse0x1e2bb20();
   input += synapse0x1e2bb60();
   input += synapse0x1e2bba0();
   input += synapse0x1e2bbe0();
   input += synapse0x1e2bc20();
   input += synapse0x1e2bc60();
   input += synapse0x1e2bca0();
   input += synapse0x1e2bce0();
   input += synapse0x1e2bd20();
   input += synapse0x1e2bd60();
   input += synapse0x1e2bda0();
   input += synapse0x1e2bde0();
   input += synapse0x1e2be20();
   input += synapse0x1e2b8b0();
   input += synapse0x1e2b8f0();
   input += synapse0x1e2bf70();
   input += synapse0x1e2bfb0();
   input += synapse0x1e2bff0();
   input += synapse0x1e2c030();
   input += synapse0x1e2c070();
   input += synapse0x1e2c0b0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e2b720() {
   double input = input0x1e2b720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e2c0f0() {
   double input = -3.8896;
   input += synapse0x1e2c430();
   input += synapse0x1e1d790();
   input += synapse0x1e1d7d0();
   input += synapse0x1e1dad0();
   input += synapse0x1e1db10();
   input += synapse0x1e1de10();
   input += synapse0x1e1de50();
   input += synapse0x1e1e150();
   input += synapse0x1e1e190();
   input += synapse0x1e1e490();
   input += synapse0x1e1e4d0();
   input += synapse0x1e1e7d0();
   input += synapse0x1e1e810();
   input += synapse0x1e1eb10();
   input += synapse0x1e1eb50();
   input += synapse0x1e1ee50();
   input += synapse0x1e1ee90();
   input += synapse0x1e1f190();
   input += synapse0x1e1f1d0();
   input += synapse0x1e1f4d0();
   input += synapse0x1e1f510();
   input += synapse0x1e1f810();
   input += synapse0x1e1f850();
   input += synapse0x1e1fb50();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e2c0f0() {
   double input = input0x1e2c0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e2df00() {
   double input = 0.699951;
   input += synapse0x1e1fb90();
   input += synapse0x1e20850();
   input += synapse0x1e20890();
   input += synapse0x1e2c280();
   input += synapse0x1e2c2c0();
   input += synapse0x1e20b90();
   input += synapse0x1e20bd0();
   input += synapse0x1bceb60();
   input += synapse0x1bceba0();
   input += synapse0x1e21310();
   input += synapse0x1e21350();
   input += synapse0x1e21650();
   input += synapse0x1e21690();
   input += synapse0x1e21990();
   input += synapse0x1e219d0();
   input += synapse0x1e21cd0();
   input += synapse0x1e21d10();
   input += synapse0x1e22010();
   input += synapse0x1e22050();
   input += synapse0x1e22350();
   input += synapse0x1e22390();
   input += synapse0x1e1fe90();
   input += synapse0x1e1fed0();
   input += synapse0x1e2e1a0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e2df00() {
   double input = input0x1e2df00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e2e1e0() {
   double input = 1.21269;
   input += synapse0x1e2e520();
   input += synapse0x1e2e560();
   input += synapse0x1e2e5a0();
   input += synapse0x1e2e5e0();
   input += synapse0x1e2e620();
   input += synapse0x1e2e660();
   input += synapse0x1e2e6a0();
   input += synapse0x1e2e6e0();
   input += synapse0x1e2e720();
   input += synapse0x1e2e760();
   input += synapse0x1e2e7a0();
   input += synapse0x1e2e7e0();
   input += synapse0x1e2e820();
   input += synapse0x1e2e860();
   input += synapse0x1e2e8a0();
   input += synapse0x1e2e8e0();
   input += synapse0x1e2e370();
   input += synapse0x1e2e3b0();
   input += synapse0x1e2ea30();
   input += synapse0x1e2ea70();
   input += synapse0x1e2eab0();
   input += synapse0x1e2eaf0();
   input += synapse0x1e2eb30();
   input += synapse0x1e2eb70();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e2e1e0() {
   double input = input0x1e2e1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e2ebb0() {
   double input = -1.96799;
   input += synapse0x1e2eef0();
   input += synapse0x1e2ef30();
   input += synapse0x1e2ef70();
   input += synapse0x1e2efb0();
   input += synapse0x1e2eff0();
   input += synapse0x1e2f030();
   input += synapse0x1e2f070();
   input += synapse0x1e2f0b0();
   input += synapse0x1e2f0f0();
   input += synapse0x1e2f130();
   input += synapse0x1e2f170();
   input += synapse0x1e2f1b0();
   input += synapse0x1e2f1f0();
   input += synapse0x1e2f230();
   input += synapse0x1e2f270();
   input += synapse0x1e2f2b0();
   input += synapse0x1e2ed40();
   input += synapse0x1e2ed80();
   input += synapse0x1e2f400();
   input += synapse0x1e2f440();
   input += synapse0x1e2f480();
   input += synapse0x1e2f4c0();
   input += synapse0x1e2f500();
   input += synapse0x1e2f540();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e2ebb0() {
   double input = input0x1e2ebb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e2f580() {
   double input = 1.17877;
   input += synapse0x1e2f8c0();
   input += synapse0x1e2f900();
   input += synapse0x1e2f940();
   input += synapse0x1e2f980();
   input += synapse0x1e2f9c0();
   input += synapse0x1e2fa00();
   input += synapse0x1e2fa40();
   input += synapse0x1e2fa80();
   input += synapse0x1e2fac0();
   input += synapse0x1e2fb00();
   input += synapse0x1e2fb40();
   input += synapse0x1e2fb80();
   input += synapse0x1e2fbc0();
   input += synapse0x1e2fc00();
   input += synapse0x1e2fc40();
   input += synapse0x1e2fc80();
   input += synapse0x1e2f710();
   input += synapse0x1e2f750();
   input += synapse0x1e2fdd0();
   input += synapse0x1e2fe10();
   input += synapse0x1e2fe50();
   input += synapse0x1e2fe90();
   input += synapse0x1e2fed0();
   input += synapse0x1e2ff10();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e2f580() {
   double input = input0x1e2f580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e2ff50() {
   double input = 0.034228;
   input += synapse0x1e30290();
   input += synapse0x1e302d0();
   input += synapse0x1e30310();
   input += synapse0x1e30350();
   input += synapse0x1e30390();
   input += synapse0x1e303d0();
   input += synapse0x1e30410();
   input += synapse0x1e30450();
   input += synapse0x1e30490();
   input += synapse0x1e304d0();
   input += synapse0x1e30510();
   input += synapse0x1e30550();
   input += synapse0x1e30590();
   input += synapse0x1e305d0();
   input += synapse0x1e30610();
   input += synapse0x1e30650();
   input += synapse0x1e300e0();
   input += synapse0x1e30120();
   input += synapse0x1e307a0();
   input += synapse0x1e307e0();
   input += synapse0x1e30820();
   input += synapse0x1e30860();
   input += synapse0x1e308a0();
   input += synapse0x1e308e0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e2ff50() {
   double input = input0x1e2ff50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e30920() {
   double input = -0.758021;
   input += synapse0x1e30c60();
   input += synapse0x1e30ca0();
   input += synapse0x1e30ce0();
   input += synapse0x1e30d20();
   input += synapse0x1e30d60();
   input += synapse0x1e30da0();
   input += synapse0x1e30de0();
   input += synapse0x1e30e20();
   input += synapse0x1e30e60();
   input += synapse0x1e29020();
   input += synapse0x1e29060();
   input += synapse0x1e290a0();
   input += synapse0x1e290e0();
   input += synapse0x1e29120();
   input += synapse0x1e29160();
   input += synapse0x1e291a0();
   input += synapse0x1e30ab0();
   input += synapse0x1e30af0();
   input += synapse0x1e292f0();
   input += synapse0x1e29330();
   input += synapse0x1e29370();
   input += synapse0x1e293b0();
   input += synapse0x1e293f0();
   input += synapse0x1e29430();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e30920() {
   double input = input0x1e30920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e29470() {
   double input = 0.772764;
   input += synapse0x1e297b0();
   input += synapse0x1e297f0();
   input += synapse0x1e29830();
   input += synapse0x1e29870();
   input += synapse0x1e298b0();
   input += synapse0x1e298f0();
   input += synapse0x1e29930();
   input += synapse0x1e29970();
   input += synapse0x1e299b0();
   input += synapse0x1e299f0();
   input += synapse0x1e29a30();
   input += synapse0x1e29a70();
   input += synapse0x1e29ab0();
   input += synapse0x1e29af0();
   input += synapse0x1e29b30();
   input += synapse0x1e29b70();
   input += synapse0x1e29600();
   input += synapse0x1e29640();
   input += synapse0x1e29cc0();
   input += synapse0x1e29d00();
   input += synapse0x1e29d40();
   input += synapse0x1e29d80();
   input += synapse0x1e29dc0();
   input += synapse0x1e29e00();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e29470() {
   double input = input0x1e29470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e29e40() {
   double input = 1.5534;
   input += synapse0x1e29fd0();
   input += synapse0x1e33060();
   input += synapse0x1e330a0();
   input += synapse0x1e330e0();
   input += synapse0x1e33120();
   input += synapse0x1e33160();
   input += synapse0x1e331a0();
   input += synapse0x1e331e0();
   input += synapse0x1e33220();
   input += synapse0x1e33260();
   input += synapse0x1e332a0();
   input += synapse0x1e332e0();
   input += synapse0x1e33320();
   input += synapse0x1e33360();
   input += synapse0x1e333a0();
   input += synapse0x1e333e0();
   input += synapse0x1e32eb0();
   input += synapse0x1e32ef0();
   input += synapse0x1e33530();
   input += synapse0x1e33570();
   input += synapse0x1e335b0();
   input += synapse0x1e335f0();
   input += synapse0x1e33630();
   input += synapse0x1e33670();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e29e40() {
   double input = input0x1e29e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e336b0() {
   double input = -1.16367;
   input += synapse0x1e339f0();
   input += synapse0x1e33a30();
   input += synapse0x1e33a70();
   input += synapse0x1e33ab0();
   input += synapse0x1e33af0();
   input += synapse0x1e33b30();
   input += synapse0x1e33b70();
   input += synapse0x1e33bb0();
   input += synapse0x1e33bf0();
   input += synapse0x1e33c30();
   input += synapse0x1e33c70();
   input += synapse0x1e33cb0();
   input += synapse0x1e33cf0();
   input += synapse0x1e33d30();
   input += synapse0x1e33d70();
   input += synapse0x1e33db0();
   input += synapse0x1e33840();
   input += synapse0x1e33880();
   input += synapse0x1e33f00();
   input += synapse0x1e33f40();
   input += synapse0x1e33f80();
   input += synapse0x1e33fc0();
   input += synapse0x1e34000();
   input += synapse0x1e34040();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e336b0() {
   double input = input0x1e336b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e34080() {
   double input = 1.87666;
   input += synapse0x1e343c0();
   input += synapse0x1e34400();
   input += synapse0x1e34440();
   input += synapse0x1e34480();
   input += synapse0x1e344c0();
   input += synapse0x1e34500();
   input += synapse0x1e34540();
   input += synapse0x1e34580();
   input += synapse0x1e345c0();
   input += synapse0x1e34600();
   input += synapse0x1e34640();
   input += synapse0x1e34680();
   input += synapse0x1e346c0();
   input += synapse0x1e34700();
   input += synapse0x1e34740();
   input += synapse0x1e34780();
   input += synapse0x1e34210();
   input += synapse0x1e34250();
   input += synapse0x1e348d0();
   input += synapse0x1e34910();
   input += synapse0x1e34950();
   input += synapse0x1e34990();
   input += synapse0x1e349d0();
   input += synapse0x1e34a10();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e34080() {
   double input = input0x1e34080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e34a50() {
   double input = -0.91646;
   input += synapse0x1e34d90();
   input += synapse0x1e34dd0();
   input += synapse0x1e34e10();
   input += synapse0x1e34e50();
   input += synapse0x1e34e90();
   input += synapse0x1e34ed0();
   input += synapse0x1e34f10();
   input += synapse0x1e34f50();
   input += synapse0x1e34f90();
   input += synapse0x1e34fd0();
   input += synapse0x1e35010();
   input += synapse0x1e35050();
   input += synapse0x1e35090();
   input += synapse0x1e350d0();
   input += synapse0x1e35110();
   input += synapse0x1e35150();
   input += synapse0x1e34be0();
   input += synapse0x1e34c20();
   input += synapse0x1e352a0();
   input += synapse0x1e352e0();
   input += synapse0x1e35320();
   input += synapse0x1e35360();
   input += synapse0x1e353a0();
   input += synapse0x1e353e0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e34a50() {
   double input = input0x1e34a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e35420() {
   double input = 0.661289;
   input += synapse0x1e35760();
   input += synapse0x1e357a0();
   input += synapse0x1e357e0();
   input += synapse0x1e35820();
   input += synapse0x1e35860();
   input += synapse0x1e358a0();
   input += synapse0x1e358e0();
   input += synapse0x1e35920();
   input += synapse0x1e35960();
   input += synapse0x1e359a0();
   input += synapse0x1e359e0();
   input += synapse0x1e35a20();
   input += synapse0x1e35a60();
   input += synapse0x1e35aa0();
   input += synapse0x1e35ae0();
   input += synapse0x1e35b20();
   input += synapse0x1e355b0();
   input += synapse0x1e355f0();
   input += synapse0x1e35c70();
   input += synapse0x1e35cb0();
   input += synapse0x1e35cf0();
   input += synapse0x1e35d30();
   input += synapse0x1e35d70();
   input += synapse0x1e35db0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e35420() {
   double input = input0x1e35420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e35df0() {
   double input = -1.43904;
   input += synapse0x1e36130();
   input += synapse0x1e36170();
   input += synapse0x1e361b0();
   input += synapse0x1e361f0();
   input += synapse0x1e36230();
   input += synapse0x1e36270();
   input += synapse0x1e362b0();
   input += synapse0x1e362f0();
   input += synapse0x1e36330();
   input += synapse0x1e36370();
   input += synapse0x1e363b0();
   input += synapse0x1e363f0();
   input += synapse0x1e36430();
   input += synapse0x1e36470();
   input += synapse0x1e364b0();
   input += synapse0x1e364f0();
   input += synapse0x1e35f80();
   input += synapse0x1e35fc0();
   input += synapse0x1e36640();
   input += synapse0x1e36680();
   input += synapse0x1e366c0();
   input += synapse0x1e36700();
   input += synapse0x1e36740();
   input += synapse0x1e36780();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e35df0() {
   double input = input0x1e35df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e367c0() {
   double input = 1.25025;
   input += synapse0x1e36b00();
   input += synapse0x1e36b40();
   input += synapse0x1e36b80();
   input += synapse0x1e36bc0();
   input += synapse0x1e36c00();
   input += synapse0x1e36c40();
   input += synapse0x1e36c80();
   input += synapse0x1e36cc0();
   input += synapse0x1e36d00();
   input += synapse0x1e36d40();
   input += synapse0x1e36d80();
   input += synapse0x1e36dc0();
   input += synapse0x1e36e00();
   input += synapse0x1e36e40();
   input += synapse0x1e36e80();
   input += synapse0x1e36ec0();
   input += synapse0x1e36950();
   input += synapse0x1e36990();
   input += synapse0x1e37010();
   input += synapse0x1e37050();
   input += synapse0x1e37090();
   input += synapse0x1e370d0();
   input += synapse0x1e37110();
   input += synapse0x1e37150();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e367c0() {
   double input = input0x1e367c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e37190() {
   double input = 0.237432;
   input += synapse0x1e374d0();
   input += synapse0x1e37510();
   input += synapse0x1e37550();
   input += synapse0x1e37590();
   input += synapse0x1e375d0();
   input += synapse0x1e37610();
   input += synapse0x1e37650();
   input += synapse0x1e37690();
   input += synapse0x1e376d0();
   input += synapse0x1e37710();
   input += synapse0x1e37750();
   input += synapse0x1e37790();
   input += synapse0x1e377d0();
   input += synapse0x1e37810();
   input += synapse0x1e37850();
   input += synapse0x1e37890();
   input += synapse0x1e37320();
   input += synapse0x1e37360();
   input += synapse0x1e379e0();
   input += synapse0x1e37a20();
   input += synapse0x1e37a60();
   input += synapse0x1e37aa0();
   input += synapse0x1e37ae0();
   input += synapse0x1e37b20();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e37190() {
   double input = input0x1e37190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e37b60() {
   double input = -0.182841;
   input += synapse0x1e37ea0();
   input += synapse0x1e2c470();
   input += synapse0x1e2c4b0();
   input += synapse0x1e2c4f0();
   input += synapse0x1e2c740();
   input += synapse0x1e2c780();
   input += synapse0x1e2c7c0();
   input += synapse0x1e2ca10();
   input += synapse0x1e2ca50();
   input += synapse0x1e2cca0();
   input += synapse0x1e2cce0();
   input += synapse0x1e2cd20();
   input += synapse0x1e2cf70();
   input += synapse0x1e2cfb0();
   input += synapse0x1e2d200();
   input += synapse0x1e2d240();
   input += synapse0x1e37cf0();
   input += synapse0x1e37d30();
   input += synapse0x1e2d390();
   input += synapse0x1e2d8a0();
   input += synapse0x1e2d8e0();
   input += synapse0x1e2d920();
   input += synapse0x1e2db70();
   input += synapse0x1e2dbb0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e37b60() {
   double input = input0x1e37b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e2dbf0() {
   double input = 0.393039;
   input += synapse0x1e2d460();
   input += synapse0x1e2d4a0();
   input += synapse0x1e2d4e0();
   input += synapse0x1e2d520();
   input += synapse0x1e2dea0();
   input += synapse0x1e3a1f0();
   input += synapse0x1e3a230();
   input += synapse0x1e3a270();
   input += synapse0x1e3a2b0();
   input += synapse0x1e3a2f0();
   input += synapse0x1e3a330();
   input += synapse0x1e3a370();
   input += synapse0x1e3a3b0();
   input += synapse0x1e3a3f0();
   input += synapse0x1e3a430();
   input += synapse0x1e3a470();
   input += synapse0x1e2dd80();
   input += synapse0x1e2ddc0();
   input += synapse0x1e3a5c0();
   input += synapse0x1e3a600();
   input += synapse0x1e3a640();
   input += synapse0x1e3a680();
   input += synapse0x1e3a6c0();
   input += synapse0x1e3a700();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e2dbf0() {
   double input = input0x1e2dbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e3a740() {
   double input = 0.413227;
   input += synapse0x1e3aa80();
   input += synapse0x1e3aac0();
   input += synapse0x1e3ab00();
   input += synapse0x1e3ab40();
   input += synapse0x1e3ab80();
   input += synapse0x1e3abc0();
   input += synapse0x1e3ac00();
   input += synapse0x1e3ac40();
   input += synapse0x1e3ac80();
   input += synapse0x1e3acc0();
   input += synapse0x1e3ad00();
   input += synapse0x1e3ad40();
   input += synapse0x1e3ad80();
   input += synapse0x1e3adc0();
   input += synapse0x1e3ae00();
   input += synapse0x1e3ae40();
   input += synapse0x1e3a8d0();
   input += synapse0x1e3a910();
   input += synapse0x1e3af90();
   input += synapse0x1e3afd0();
   input += synapse0x1e3b010();
   input += synapse0x1e3b050();
   input += synapse0x1e3b090();
   input += synapse0x1e3b0d0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e3a740() {
   double input = input0x1e3a740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e3b110() {
   double input = 1.40626;
   input += synapse0x1e3b450();
   input += synapse0x1e3b490();
   input += synapse0x1e3b4d0();
   input += synapse0x1e3b510();
   input += synapse0x1e3b550();
   input += synapse0x1e3b590();
   input += synapse0x1e3b5d0();
   input += synapse0x1e3b610();
   input += synapse0x1e3b650();
   input += synapse0x1e3b690();
   input += synapse0x1e3b6d0();
   input += synapse0x1e3b710();
   input += synapse0x1e3b750();
   input += synapse0x1e3b790();
   input += synapse0x1e3b7d0();
   input += synapse0x1e3b810();
   input += synapse0x1e3b2a0();
   input += synapse0x1e3b2e0();
   input += synapse0x1e3b960();
   input += synapse0x1e3b9a0();
   input += synapse0x1e3b9e0();
   input += synapse0x1e3ba20();
   input += synapse0x1e3ba60();
   input += synapse0x1e3baa0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e3b110() {
   double input = input0x1e3b110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e3bae0() {
   double input = 0.0887207;
   input += synapse0x1e3be20();
   input += synapse0x1e3be60();
   input += synapse0x1e3bea0();
   input += synapse0x1e3bee0();
   input += synapse0x1e3bf20();
   input += synapse0x1e3bf60();
   input += synapse0x1e3bfa0();
   input += synapse0x1e3bfe0();
   input += synapse0x1e3c020();
   input += synapse0x1e3c060();
   input += synapse0x1e3c0a0();
   input += synapse0x1e3c0e0();
   input += synapse0x1e3c120();
   input += synapse0x1e3c160();
   input += synapse0x1e3c1a0();
   input += synapse0x1e3c1e0();
   input += synapse0x1e3bc70();
   input += synapse0x1e3bcb0();
   input += synapse0x1e3c330();
   input += synapse0x1e3c370();
   input += synapse0x1e3c3b0();
   input += synapse0x1e3c3f0();
   input += synapse0x1e3c430();
   input += synapse0x1e3c470();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e3bae0() {
   double input = input0x1e3bae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e3c4b0() {
   double input = -1.26539;
   input += synapse0x1e3c7f0();
   input += synapse0x1e3c830();
   input += synapse0x1e3c870();
   input += synapse0x1e3c8b0();
   input += synapse0x1e3c8f0();
   input += synapse0x1e3c930();
   input += synapse0x1e3c970();
   input += synapse0x1e3c9b0();
   input += synapse0x1e3c9f0();
   input += synapse0x1e3ca30();
   input += synapse0x1e3ca70();
   input += synapse0x1e3cab0();
   input += synapse0x1e3caf0();
   input += synapse0x1e3cb30();
   input += synapse0x1e3cb70();
   input += synapse0x1e3cbb0();
   input += synapse0x1e3c640();
   input += synapse0x1e3c680();
   input += synapse0x1e3cd00();
   input += synapse0x1e3cd40();
   input += synapse0x1e3cd80();
   input += synapse0x1e3cdc0();
   input += synapse0x1e3ce00();
   input += synapse0x1e3ce40();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e3c4b0() {
   double input = input0x1e3c4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e3ce80() {
   double input = 0.910704;
   input += synapse0x1e3d1c0();
   input += synapse0x1e3d200();
   input += synapse0x1e3d240();
   input += synapse0x1e3d280();
   input += synapse0x1e3d2c0();
   input += synapse0x1e3d300();
   input += synapse0x1e3d340();
   input += synapse0x1e3d380();
   input += synapse0x1e3d3c0();
   input += synapse0x1e3d400();
   input += synapse0x1e3d440();
   input += synapse0x1e3d480();
   input += synapse0x1e3d4c0();
   input += synapse0x1e3d500();
   input += synapse0x1e3d540();
   input += synapse0x1e3d580();
   input += synapse0x1e3d010();
   input += synapse0x1e3d050();
   input += synapse0x1e3d6d0();
   input += synapse0x1e3d710();
   input += synapse0x1e3d750();
   input += synapse0x1e3d790();
   input += synapse0x1e3d7d0();
   input += synapse0x1e3d810();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e3ce80() {
   double input = input0x1e3ce80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e3d850() {
   double input = 0.698893;
   input += synapse0x1e3db90();
   input += synapse0x1e3dbd0();
   input += synapse0x1e3dc10();
   input += synapse0x1e3dc50();
   input += synapse0x1e3dc90();
   input += synapse0x1e3dcd0();
   input += synapse0x1e3dd10();
   input += synapse0x1e3dd50();
   input += synapse0x1e3dd90();
   input += synapse0x1e3ddd0();
   input += synapse0x1e3de10();
   input += synapse0x1e3de50();
   input += synapse0x1e3de90();
   input += synapse0x1e3ded0();
   input += synapse0x1e3df10();
   input += synapse0x1e3df50();
   input += synapse0x1e3d9e0();
   input += synapse0x1e3da20();
   input += synapse0x1e3e0a0();
   input += synapse0x1e3e0e0();
   input += synapse0x1e3e120();
   input += synapse0x1e3e160();
   input += synapse0x1e3e1a0();
   input += synapse0x1e3e1e0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e3d850() {
   double input = input0x1e3d850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e3e220() {
   double input = -1.91637;
   input += synapse0x1e3e560();
   input += synapse0x1e3e5a0();
   input += synapse0x1e3e5e0();
   input += synapse0x1e3e620();
   input += synapse0x1e3e660();
   input += synapse0x1e3e6a0();
   input += synapse0x1e3e6e0();
   input += synapse0x1e3e720();
   input += synapse0x1e3e760();
   input += synapse0x1e3e7a0();
   input += synapse0x1e3e7e0();
   input += synapse0x1e3e820();
   input += synapse0x1e3e860();
   input += synapse0x1e3e8a0();
   input += synapse0x1e3e8e0();
   input += synapse0x1e3e920();
   input += synapse0x1e3e3b0();
   input += synapse0x1e3e3f0();
   input += synapse0x1e3ea70();
   input += synapse0x1e3eab0();
   input += synapse0x1e3eaf0();
   input += synapse0x1e3eb30();
   input += synapse0x1e3eb70();
   input += synapse0x1e3ebb0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e3e220() {
   double input = input0x1e3e220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e3ebf0() {
   double input = 3.06731;
   input += synapse0x1e27660();
   input += synapse0x1e276a0();
   input += synapse0x1e276e0();
   input += synapse0x1e27720();
   input += synapse0x1e27760();
   input += synapse0x1e277a0();
   input += synapse0x1e277e0();
   input += synapse0x1e27820();
   input += synapse0x1e3f340();
   input += synapse0x1e3f380();
   input += synapse0x1e3f3c0();
   input += synapse0x1e3f400();
   input += synapse0x1e3f440();
   input += synapse0x1e3f480();
   input += synapse0x1e3f4c0();
   input += synapse0x1e3f500();
   input += synapse0x1e3ed80();
   input += synapse0x1e3edc0();
   input += synapse0x1e3f650();
   input += synapse0x1e3f690();
   input += synapse0x1e3f6d0();
   input += synapse0x1e3f710();
   input += synapse0x1e3f750();
   input += synapse0x1e3f790();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e3ebf0() {
   double input = input0x1e3ebf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e3f7d0() {
   double input = 0.324773;
   input += synapse0x1e3fb10();
   input += synapse0x1e3fb50();
   input += synapse0x1e3fb90();
   input += synapse0x1e3fbd0();
   input += synapse0x1e3fc10();
   input += synapse0x1e3fc50();
   input += synapse0x1e3fc90();
   input += synapse0x1e3fcd0();
   input += synapse0x1e3fd10();
   input += synapse0x1e3fd50();
   input += synapse0x1e3fd90();
   input += synapse0x1e3fdd0();
   input += synapse0x1e3fe10();
   input += synapse0x1e3fe50();
   input += synapse0x1e3fe90();
   input += synapse0x1e3fed0();
   input += synapse0x1e3f960();
   input += synapse0x1e3f9a0();
   input += synapse0x1e40020();
   input += synapse0x1e40060();
   input += synapse0x1e400a0();
   input += synapse0x1e400e0();
   input += synapse0x1e40120();
   input += synapse0x1e40160();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e3f7d0() {
   double input = input0x1e3f7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e401a0() {
   double input = 0.840424;
   input += synapse0x1e404e0();
   input += synapse0x1e40520();
   input += synapse0x1e40560();
   input += synapse0x1e405a0();
   input += synapse0x1e405e0();
   input += synapse0x1e40620();
   input += synapse0x1e40660();
   input += synapse0x1e406a0();
   input += synapse0x1e406e0();
   input += synapse0x1e40720();
   input += synapse0x1e40760();
   input += synapse0x1e407a0();
   input += synapse0x1e407e0();
   input += synapse0x1e40820();
   input += synapse0x1e40860();
   input += synapse0x1e408a0();
   input += synapse0x1e40330();
   input += synapse0x1e40370();
   input += synapse0x1e30ea0();
   input += synapse0x1e30ee0();
   input += synapse0x1e30f20();
   input += synapse0x1e30f60();
   input += synapse0x1e30fa0();
   input += synapse0x1e30fe0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e401a0() {
   double input = input0x1e401a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e31020() {
   double input = 1.99431;
   input += synapse0x1e31360();
   input += synapse0x1e313a0();
   input += synapse0x1e313e0();
   input += synapse0x1e31420();
   input += synapse0x1e31460();
   input += synapse0x1e314a0();
   input += synapse0x1e314e0();
   input += synapse0x1e31520();
   input += synapse0x1e31560();
   input += synapse0x1e315a0();
   input += synapse0x1e315e0();
   input += synapse0x1e31620();
   input += synapse0x1e31660();
   input += synapse0x1e316a0();
   input += synapse0x1e316e0();
   input += synapse0x1e31720();
   input += synapse0x1e311b0();
   input += synapse0x1e311f0();
   input += synapse0x1e31870();
   input += synapse0x1e318b0();
   input += synapse0x1e318f0();
   input += synapse0x1e31930();
   input += synapse0x1e31970();
   input += synapse0x1e319b0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e31020() {
   double input = input0x1e31020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e319f0() {
   double input = -0.409448;
   input += synapse0x1e31d30();
   input += synapse0x1e31d70();
   input += synapse0x1e31db0();
   input += synapse0x1e31df0();
   input += synapse0x1e31e30();
   input += synapse0x1e31e70();
   input += synapse0x1e31eb0();
   input += synapse0x1e31ef0();
   input += synapse0x1e31f30();
   input += synapse0x1e31f70();
   input += synapse0x1e31fb0();
   input += synapse0x1e31ff0();
   input += synapse0x1e32030();
   input += synapse0x1e32070();
   input += synapse0x1e320b0();
   input += synapse0x1e320f0();
   input += synapse0x1e31b80();
   input += synapse0x1e31bc0();
   input += synapse0x1e32240();
   input += synapse0x1e32280();
   input += synapse0x1e322c0();
   input += synapse0x1e32300();
   input += synapse0x1e32340();
   input += synapse0x1e32380();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e319f0() {
   double input = input0x1e319f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e323c0() {
   double input = -1.16733;
   input += synapse0x1e32700();
   input += synapse0x1e32740();
   input += synapse0x1e32780();
   input += synapse0x1e327c0();
   input += synapse0x1e32800();
   input += synapse0x1e32840();
   input += synapse0x1e32880();
   input += synapse0x1e328c0();
   input += synapse0x1e32900();
   input += synapse0x1e32940();
   input += synapse0x1e32980();
   input += synapse0x1e329c0();
   input += synapse0x1e32a00();
   input += synapse0x1e32a40();
   input += synapse0x1e32a80();
   input += synapse0x1e32ac0();
   input += synapse0x1e32550();
   input += synapse0x1e32590();
   input += synapse0x1e32c10();
   input += synapse0x1e32c50();
   input += synapse0x1e32c90();
   input += synapse0x1e32cd0();
   input += synapse0x1e32d10();
   input += synapse0x1e32d50();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e323c0() {
   double input = input0x1e323c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e44a00() {
   double input = 0.896895;
   input += synapse0x1e44c20();
   input += synapse0x1e44c60();
   input += synapse0x1e44ca0();
   input += synapse0x1e44ce0();
   input += synapse0x1e44d20();
   input += synapse0x1e44d60();
   input += synapse0x1e44da0();
   input += synapse0x1e44de0();
   input += synapse0x1e44e20();
   input += synapse0x1e44e60();
   input += synapse0x1e44ea0();
   input += synapse0x1e44ee0();
   input += synapse0x1e44f20();
   input += synapse0x1e44f60();
   input += synapse0x1e44fa0();
   input += synapse0x1e44fe0();
   input += synapse0x1e32d90();
   input += synapse0x1e32dd0();
   input += synapse0x1e45130();
   input += synapse0x1e45170();
   input += synapse0x1e451b0();
   input += synapse0x1e451f0();
   input += synapse0x1e45230();
   input += synapse0x1e45270();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e44a00() {
   double input = input0x1e44a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e452b0() {
   double input = 0.0281358;
   input += synapse0x1e455f0();
   input += synapse0x1e45630();
   input += synapse0x1e45670();
   input += synapse0x1e456b0();
   input += synapse0x1e456f0();
   input += synapse0x1e45730();
   input += synapse0x1e45770();
   input += synapse0x1e457b0();
   input += synapse0x1e457f0();
   input += synapse0x1e45830();
   input += synapse0x1e45870();
   input += synapse0x1e458b0();
   input += synapse0x1e458f0();
   input += synapse0x1e45930();
   input += synapse0x1e45970();
   input += synapse0x1e459b0();
   input += synapse0x1e45440();
   input += synapse0x1e45480();
   input += synapse0x1e45b00();
   input += synapse0x1e45b40();
   input += synapse0x1e45b80();
   input += synapse0x1e45bc0();
   input += synapse0x1e45c00();
   input += synapse0x1e45c40();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e452b0() {
   double input = input0x1e452b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e45c80() {
   double input = -3.86949;
   input += synapse0x1e45fc0();
   input += synapse0x1e46000();
   input += synapse0x1e46040();
   input += synapse0x1e46080();
   input += synapse0x1e460c0();
   input += synapse0x1e46100();
   input += synapse0x1e46140();
   input += synapse0x1e46180();
   input += synapse0x1e461c0();
   input += synapse0x1e46200();
   input += synapse0x1e46240();
   input += synapse0x1e46280();
   input += synapse0x1e462c0();
   input += synapse0x1e46300();
   input += synapse0x1e46340();
   input += synapse0x1e46380();
   input += synapse0x1e45e10();
   input += synapse0x1e45e50();
   input += synapse0x1e464d0();
   input += synapse0x1e46510();
   input += synapse0x1e46550();
   input += synapse0x1e46590();
   input += synapse0x1e465d0();
   input += synapse0x1e46610();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e45c80() {
   double input = input0x1e45c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e46650() {
   double input = -1.46645;
   input += synapse0x1e46990();
   input += synapse0x1e469d0();
   input += synapse0x1e46a10();
   input += synapse0x1e46a50();
   input += synapse0x1e46a90();
   input += synapse0x1e46ad0();
   input += synapse0x1e46b10();
   input += synapse0x1e46b50();
   input += synapse0x1e46b90();
   input += synapse0x1e46bd0();
   input += synapse0x1e46c10();
   input += synapse0x1e46c50();
   input += synapse0x1e46c90();
   input += synapse0x1e46cd0();
   input += synapse0x1e46d10();
   input += synapse0x1e46d50();
   input += synapse0x1e467e0();
   input += synapse0x1e46820();
   input += synapse0x1e46ea0();
   input += synapse0x1e46ee0();
   input += synapse0x1e46f20();
   input += synapse0x1e46f60();
   input += synapse0x1e46fa0();
   input += synapse0x1e46fe0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e46650() {
   double input = input0x1e46650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e4d850() {
   double input = -1.3908;
   input += synapse0x1e23580();
   input += synapse0x1e235c0();
   input += synapse0x1e24a90();
   input += synapse0x1e24ad0();
   input += synapse0x1e25460();
   input += synapse0x1e254a0();
   input += synapse0x1e26230();
   input += synapse0x1e26270();
   input += synapse0x1e26c00();
   input += synapse0x1e26c40();
   input += synapse0x1e275d0();
   input += synapse0x1e27610();
   input += synapse0x1e280b0();
   input += synapse0x1e280f0();
   input += synapse0x1e28a80();
   input += synapse0x1e28ac0();
   input += synapse0x1e25b60();
   input += synapse0x1e25ba0();
   input += synapse0x1e2a630();
   input += synapse0x1e2a670();
   input += synapse0x1e2b000();
   input += synapse0x1e2b040();
   input += synapse0x1e2b9d0();
   input += synapse0x1e2ba10();
   input += synapse0x1e2c3a0();
   input += synapse0x1e2c3e0();
   input += synapse0x1e20510();
   input += synapse0x1e20550();
   input += synapse0x1e2e490();
   input += synapse0x1e2e4d0();
   input += synapse0x1e2ee60();
   input += synapse0x1e2eea0();
   input += synapse0x1e2f830();
   input += synapse0x1e2f870();
   input += synapse0x1e30200();
   input += synapse0x1e30240();
   input += synapse0x1e30bd0();
   input += synapse0x1e30c10();
   input += synapse0x1e29720();
   input += synapse0x1e29760();
   input += synapse0x1e32fd0();
   input += synapse0x1e33010();
   input += synapse0x1e33960();
   input += synapse0x1e339a0();
   input += synapse0x1e34330();
   input += synapse0x1e34370();
   input += synapse0x1e34d00();
   input += synapse0x1e34d40();
   input += synapse0x1e356d0();
   input += synapse0x1e35710();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e4d850() {
   double input = input0x1e4d850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e4dbf0() {
   double input = 0.0835683;
   input += synapse0x1e37e10();
   input += synapse0x1e37e50();
   input += synapse0x1e2d3d0();
   input += synapse0x1e2d410();
   input += synapse0x1e3a9f0();
   input += synapse0x1e3aa30();
   input += synapse0x1e3b3c0();
   input += synapse0x1e3b400();
   input += synapse0x1e3bd90();
   input += synapse0x1e3bdd0();
   input += synapse0x1e3c760();
   input += synapse0x1e3c7a0();
   input += synapse0x1e3d130();
   input += synapse0x1e3d170();
   input += synapse0x1e3db00();
   input += synapse0x1e3db40();
   input += synapse0x1e3e4d0();
   input += synapse0x1e3e510();
   input += synapse0x1e3eea0();
   input += synapse0x1e3eee0();
   input += synapse0x1e3fa80();
   input += synapse0x1e3fac0();
   input += synapse0x1e40450();
   input += synapse0x1e40490();
   input += synapse0x1e312d0();
   input += synapse0x1e31310();
   input += synapse0x1e31ca0();
   input += synapse0x1e31ce0();
   input += synapse0x1e32670();
   input += synapse0x1e326b0();
   input += synapse0x1e44b90();
   input += synapse0x1e44bd0();
   input += synapse0x1e45560();
   input += synapse0x1e455a0();
   input += synapse0x1e45f30();
   input += synapse0x1e45f70();
   input += synapse0x1e46900();
   input += synapse0x1e46940();
   input += synapse0x1e227f0();
   input += synapse0x1e22830();
   input += synapse0x1e360a0();
   input += synapse0x1e360e0();
   input += synapse0x1e47020();
   input += synapse0x1e47060();
   input += synapse0x1e470a0();
   input += synapse0x1e470e0();
   input += synapse0x1e4df90();
   input += synapse0x1e4dfd0();
   input += synapse0x1e4e010();
   input += synapse0x1e4e050();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e4dbf0() {
   double input = input0x1e4dbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e4e090() {
   double input = -0.432308;
   input += synapse0x1e4e3d0();
   input += synapse0x1e4e410();
   input += synapse0x1e4e450();
   input += synapse0x1e4e490();
   input += synapse0x1e4e4d0();
   input += synapse0x1e4e510();
   input += synapse0x1e4e550();
   input += synapse0x1e4e590();
   input += synapse0x1e4e5d0();
   input += synapse0x1e4e610();
   input += synapse0x1e4e650();
   input += synapse0x1e4e690();
   input += synapse0x1e4e6d0();
   input += synapse0x1e4e710();
   input += synapse0x1e4e750();
   input += synapse0x1e4e790();
   input += synapse0x1e4e220();
   input += synapse0x1e4e260();
   input += synapse0x1e4e8e0();
   input += synapse0x1e4e920();
   input += synapse0x1e4e960();
   input += synapse0x1e4e9a0();
   input += synapse0x1e4e9e0();
   input += synapse0x1e4ea20();
   input += synapse0x1e4ea60();
   input += synapse0x1e4eaa0();
   input += synapse0x1e4eae0();
   input += synapse0x1e4eb20();
   input += synapse0x1e4eb60();
   input += synapse0x1e4eba0();
   input += synapse0x1e4ebe0();
   input += synapse0x1e4ec20();
   input += synapse0x1e4e7d0();
   input += synapse0x1e4e810();
   input += synapse0x1e4e850();
   input += synapse0x1e4e890();
   input += synapse0x1e4ee70();
   input += synapse0x1e4eeb0();
   input += synapse0x1e4eef0();
   input += synapse0x1e4ef30();
   input += synapse0x1e4ef70();
   input += synapse0x1e4efb0();
   input += synapse0x1e4eff0();
   input += synapse0x1e4f030();
   input += synapse0x1e4f070();
   input += synapse0x1e4f0b0();
   input += synapse0x1e4f0f0();
   input += synapse0x1e4f130();
   input += synapse0x1e4f170();
   input += synapse0x1e4f1b0();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e4e090() {
   double input = input0x1e4e090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e4f1f0() {
   double input = -1.12473;
   input += synapse0x1e4f530();
   input += synapse0x1e4f570();
   input += synapse0x1e4f5b0();
   input += synapse0x1e4f5f0();
   input += synapse0x1e4f630();
   input += synapse0x1e4f670();
   input += synapse0x1e4f6b0();
   input += synapse0x1e4f6f0();
   input += synapse0x1e4f730();
   input += synapse0x1e4f770();
   input += synapse0x1e4f7b0();
   input += synapse0x1e4f7f0();
   input += synapse0x1e4f830();
   input += synapse0x1e4f870();
   input += synapse0x1e4f8b0();
   input += synapse0x1e4f8f0();
   input += synapse0x1e4f380();
   input += synapse0x1e4f3c0();
   input += synapse0x1e4fa40();
   input += synapse0x1e4fa80();
   input += synapse0x1e4fac0();
   input += synapse0x1e4fb00();
   input += synapse0x1e4fb40();
   input += synapse0x1e4fb80();
   input += synapse0x1e4fbc0();
   input += synapse0x1e4fc00();
   input += synapse0x1e4fc40();
   input += synapse0x1e4fc80();
   input += synapse0x1e4fcc0();
   input += synapse0x1e4fd00();
   input += synapse0x1e4fd40();
   input += synapse0x1e4fd80();
   input += synapse0x1e4f930();
   input += synapse0x1e4f970();
   input += synapse0x1e4f9b0();
   input += synapse0x1e4f9f0();
   input += synapse0x1e4ffd0();
   input += synapse0x1e50010();
   input += synapse0x1e50050();
   input += synapse0x1e50090();
   input += synapse0x1e500d0();
   input += synapse0x1e50110();
   input += synapse0x1e50150();
   input += synapse0x1e50190();
   input += synapse0x1e501d0();
   input += synapse0x1e50210();
   input += synapse0x1e50250();
   input += synapse0x1e50290();
   input += synapse0x1e502d0();
   input += synapse0x1e50310();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e4f1f0() {
   double input = input0x1e4f1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e50350() {
   double input = 0.925681;
   input += synapse0x1e50690();
   input += synapse0x1e506d0();
   input += synapse0x1e50710();
   input += synapse0x1e50750();
   input += synapse0x1e50790();
   input += synapse0x1e507d0();
   input += synapse0x1e50810();
   input += synapse0x1e50850();
   input += synapse0x1e50890();
   input += synapse0x1e508d0();
   input += synapse0x1e50910();
   input += synapse0x1e50950();
   input += synapse0x1e50990();
   input += synapse0x1e509d0();
   input += synapse0x1e50a10();
   input += synapse0x1e50a50();
   input += synapse0x1e504e0();
   input += synapse0x1e50520();
   input += synapse0x1e50ba0();
   input += synapse0x1e50be0();
   input += synapse0x1e50c20();
   input += synapse0x1e50c60();
   input += synapse0x1e50ca0();
   input += synapse0x1e50ce0();
   input += synapse0x1e50d20();
   input += synapse0x1e50d60();
   input += synapse0x1e50da0();
   input += synapse0x1e50de0();
   input += synapse0x1e50e20();
   input += synapse0x1e50e60();
   input += synapse0x1e50ea0();
   input += synapse0x1e50ee0();
   input += synapse0x1e50a90();
   input += synapse0x1e50ad0();
   input += synapse0x1e50b10();
   input += synapse0x1e50b50();
   input += synapse0x1e51130();
   input += synapse0x1e51170();
   input += synapse0x1e511b0();
   input += synapse0x1e511f0();
   input += synapse0x1e51230();
   input += synapse0x1e51270();
   input += synapse0x1e512b0();
   input += synapse0x1e512f0();
   input += synapse0x1e51330();
   input += synapse0x1e51370();
   input += synapse0x1e513b0();
   input += synapse0x1e513f0();
   input += synapse0x1e51430();
   input += synapse0x1e51470();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e50350() {
   double input = input0x1e50350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLdR::input0x1e514b0() {
   double input = 7.60583;
   input += synapse0x1e22590();
   input += synapse0x1e516d0();
   input += synapse0x1e51710();
   input += synapse0x1e51750();
   input += synapse0x1e51790();
   return input;
}

double NNfunction_ss_dLdR::neuron0x1e514b0() {
   double input = input0x1e514b0();
   return (input * 1)+0;
}

double NNfunction_ss_dLdR::synapse0x1bdd3e0() {
   return (neuron0x1e1d570()*0.124485);
}

double NNfunction_ss_dLdR::synapse0x1e1d430() {
   return (neuron0x1e1d8b0()*1.24455);
}

double NNfunction_ss_dLdR::synapse0x1e1d470() {
   return (neuron0x1e1dbf0()*-0.879988);
}

double NNfunction_ss_dLdR::synapse0x1e22880() {
   return (neuron0x1e1df30()*-0.318259);
}

double NNfunction_ss_dLdR::synapse0x1e228c0() {
   return (neuron0x1e1e270()*-0.391309);
}

double NNfunction_ss_dLdR::synapse0x1e22900() {
   return (neuron0x1e1e5b0()*-0.799764);
}

double NNfunction_ss_dLdR::synapse0x1e22940() {
   return (neuron0x1e1e8f0()*0.0231603);
}

double NNfunction_ss_dLdR::synapse0x1e22980() {
   return (neuron0x1e1ec30()*0.0728009);
}

double NNfunction_ss_dLdR::synapse0x1e229c0() {
   return (neuron0x1e1ef70()*0.00469292);
}

double NNfunction_ss_dLdR::synapse0x1e22a00() {
   return (neuron0x1e1f2b0()*0.991964);
}

double NNfunction_ss_dLdR::synapse0x1e22a40() {
   return (neuron0x1e1f5f0()*-0.727886);
}

double NNfunction_ss_dLdR::synapse0x1e22a80() {
   return (neuron0x1e1f930()*-0.250475);
}

double NNfunction_ss_dLdR::synapse0x1e22ac0() {
   return (neuron0x1e1fc70()*0.845087);
}

double NNfunction_ss_dLdR::synapse0x1e22b00() {
   return (neuron0x1e1ffb0()*0.736055);
}

double NNfunction_ss_dLdR::synapse0x1e22b40() {
   return (neuron0x1e202f0()*-0.192994);
}

double NNfunction_ss_dLdR::synapse0x1e22b80() {
   return (neuron0x1e20630()*0.0670481);
}

double NNfunction_ss_dLdR::synapse0x1e1d3a0() {
   return (neuron0x1e20970()*-1.70954);
}

double NNfunction_ss_dLdR::synapse0x1e1d3e0() {
   return (neuron0x1e20ed0()*-1.06341);
}

double NNfunction_ss_dLdR::synapse0x1bcec80() {
   return (neuron0x1e210f0()*-0.203598);
}

double NNfunction_ss_dLdR::synapse0x1bcecc0() {
   return (neuron0x1e21430()*-0.607059);
}

double NNfunction_ss_dLdR::synapse0x1e22de0() {
   return (neuron0x1e21770()*-0.596645);
}

double NNfunction_ss_dLdR::synapse0x1e22e20() {
   return (neuron0x1e21ab0()*0.691517);
}

double NNfunction_ss_dLdR::synapse0x1e22e60() {
   return (neuron0x1e21df0()*0.431442);
}

double NNfunction_ss_dLdR::synapse0x1e22ea0() {
   return (neuron0x1e22130()*-0.494264);
}

double NNfunction_ss_dLdR::synapse0x1e23220() {
   return (neuron0x1e1d570()*-0.750647);
}

double NNfunction_ss_dLdR::synapse0x1e23260() {
   return (neuron0x1e1d8b0()*0.128685);
}

double NNfunction_ss_dLdR::synapse0x1e232a0() {
   return (neuron0x1e1dbf0()*-0.369971);
}

double NNfunction_ss_dLdR::synapse0x1e232e0() {
   return (neuron0x1e1df30()*0.879854);
}

double NNfunction_ss_dLdR::synapse0x1e23320() {
   return (neuron0x1e1e270()*0.451738);
}

double NNfunction_ss_dLdR::synapse0x1e23360() {
   return (neuron0x1e1e5b0()*-1.25937);
}

double NNfunction_ss_dLdR::synapse0x1e233a0() {
   return (neuron0x1e1e8f0()*1.09126);
}

double NNfunction_ss_dLdR::synapse0x1e233e0() {
   return (neuron0x1e1ec30()*-0.537388);
}

double NNfunction_ss_dLdR::synapse0x1e23420() {
   return (neuron0x1e1ef70()*0.380957);
}

double NNfunction_ss_dLdR::synapse0x1e22cd0() {
   return (neuron0x1e1f2b0()*0.750581);
}

double NNfunction_ss_dLdR::synapse0x1e22d10() {
   return (neuron0x1e1f5f0()*0.112268);
}

double NNfunction_ss_dLdR::synapse0x1e22d50() {
   return (neuron0x1e1f930()*-0.131681);
}

double NNfunction_ss_dLdR::synapse0x1e22d90() {
   return (neuron0x1e1fc70()*-0.0330837);
}

double NNfunction_ss_dLdR::synapse0x1e23670() {
   return (neuron0x1e1ffb0()*-0.447443);
}

double NNfunction_ss_dLdR::synapse0x1e236b0() {
   return (neuron0x1e202f0()*-0.477324);
}

double NNfunction_ss_dLdR::synapse0x1e236f0() {
   return (neuron0x1e20630()*0.226272);
}

double NNfunction_ss_dLdR::synapse0x1e23070() {
   return (neuron0x1e20970()*-0.660508);
}

double NNfunction_ss_dLdR::synapse0x1e230b0() {
   return (neuron0x1e20ed0()*-0.468696);
}

double NNfunction_ss_dLdR::synapse0x1e23840() {
   return (neuron0x1e210f0()*-1.06089);
}

double NNfunction_ss_dLdR::synapse0x1e23880() {
   return (neuron0x1e21430()*-0.317959);
}

double NNfunction_ss_dLdR::synapse0x1e238c0() {
   return (neuron0x1e21770()*0.895404);
}

double NNfunction_ss_dLdR::synapse0x1e23900() {
   return (neuron0x1e21ab0()*-0.218347);
}

double NNfunction_ss_dLdR::synapse0x1e23940() {
   return (neuron0x1e21df0()*-0.64385);
}

double NNfunction_ss_dLdR::synapse0x1e23980() {
   return (neuron0x1e22130()*-0.0882797);
}

double NNfunction_ss_dLdR::synapse0x1e23d00() {
   return (neuron0x1e1d570()*0.0106579);
}

double NNfunction_ss_dLdR::synapse0x1e23d40() {
   return (neuron0x1e1d8b0()*0.00199525);
}

double NNfunction_ss_dLdR::synapse0x1e23d80() {
   return (neuron0x1e1dbf0()*0.00186044);
}

double NNfunction_ss_dLdR::synapse0x1e23dc0() {
   return (neuron0x1e1df30()*-0.099532);
}

double NNfunction_ss_dLdR::synapse0x1e23e00() {
   return (neuron0x1e1e270()*0.00356635);
}

double NNfunction_ss_dLdR::synapse0x1e23e40() {
   return (neuron0x1e1e5b0()*0.00032392);
}

double NNfunction_ss_dLdR::synapse0x1e23e80() {
   return (neuron0x1e1e8f0()*-0.00930459);
}

double NNfunction_ss_dLdR::synapse0x1e23ec0() {
   return (neuron0x1e1ec30()*0.015689);
}

double NNfunction_ss_dLdR::synapse0x1e23f00() {
   return (neuron0x1e1ef70()*-0.00111249);
}

double NNfunction_ss_dLdR::synapse0x1e23f40() {
   return (neuron0x1e1f2b0()*-0.019482);
}

double NNfunction_ss_dLdR::synapse0x1e23f80() {
   return (neuron0x1e1f5f0()*0.00776649);
}

double NNfunction_ss_dLdR::synapse0x1e23fc0() {
   return (neuron0x1e1f930()*-0.194675);
}

double NNfunction_ss_dLdR::synapse0x1e24000() {
   return (neuron0x1e1fc70()*0.0235052);
}

double NNfunction_ss_dLdR::synapse0x1e24040() {
   return (neuron0x1e1ffb0()*0.0134574);
}

double NNfunction_ss_dLdR::synapse0x1e24080() {
   return (neuron0x1e202f0()*0.0320967);
}

double NNfunction_ss_dLdR::synapse0x1e240c0() {
   return (neuron0x1e20630()*0.0288034);
}

double NNfunction_ss_dLdR::synapse0x1e23b50() {
   return (neuron0x1e20970()*0.019734);
}

double NNfunction_ss_dLdR::synapse0x1e23b90() {
   return (neuron0x1e20ed0()*2.22172);
}

double NNfunction_ss_dLdR::synapse0x1bdcad0() {
   return (neuron0x1e210f0()*-0.00231597);
}

double NNfunction_ss_dLdR::synapse0x1bdcb10() {
   return (neuron0x1e21430()*0.019002);
}

double NNfunction_ss_dLdR::synapse0x1e0c600() {
   return (neuron0x1e21770()*-0.00133869);
}

double NNfunction_ss_dLdR::synapse0x1e0c640() {
   return (neuron0x1e21ab0()*-0.00128475);
}

double NNfunction_ss_dLdR::synapse0x1e0c680() {
   return (neuron0x1e21df0()*0.00172361);
}

double NNfunction_ss_dLdR::synapse0x1e1d4b0() {
   return (neuron0x1e22130()*0.0118071);
}

double NNfunction_ss_dLdR::synapse0x1e23610() {
   return (neuron0x1e1d570()*0.106547);
}

double NNfunction_ss_dLdR::synapse0x1e1d4f0() {
   return (neuron0x1e1d8b0()*0.281283);
}

double NNfunction_ss_dLdR::synapse0x1e1d530() {
   return (neuron0x1e1dbf0()*-0.316357);
}

double NNfunction_ss_dLdR::synapse0x1e24210() {
   return (neuron0x1e1df30()*-1.21672);
}

double NNfunction_ss_dLdR::synapse0x1e24250() {
   return (neuron0x1e1e270()*0.397608);
}

double NNfunction_ss_dLdR::synapse0x1e24290() {
   return (neuron0x1e1e5b0()*-0.561791);
}

double NNfunction_ss_dLdR::synapse0x1e242d0() {
   return (neuron0x1e1e8f0()*-0.295303);
}

double NNfunction_ss_dLdR::synapse0x1e24310() {
   return (neuron0x1e1ec30()*0.200239);
}

double NNfunction_ss_dLdR::synapse0x1e24350() {
   return (neuron0x1e1ef70()*0.79803);
}

double NNfunction_ss_dLdR::synapse0x1e24390() {
   return (neuron0x1e1f2b0()*0.217513);
}

double NNfunction_ss_dLdR::synapse0x1e243d0() {
   return (neuron0x1e1f5f0()*0.641004);
}

double NNfunction_ss_dLdR::synapse0x1e24410() {
   return (neuron0x1e1f930()*0.167702);
}

double NNfunction_ss_dLdR::synapse0x1e24450() {
   return (neuron0x1e1fc70()*0.720887);
}

double NNfunction_ss_dLdR::synapse0x1e24490() {
   return (neuron0x1e1ffb0()*0.501608);
}

double NNfunction_ss_dLdR::synapse0x1e244d0() {
   return (neuron0x1e202f0()*0.0552135);
}

double NNfunction_ss_dLdR::synapse0x1e24510() {
   return (neuron0x1e20630()*0.375779);
}

double NNfunction_ss_dLdR::synapse0x1e23460() {
   return (neuron0x1e20970()*0.124262);
}

double NNfunction_ss_dLdR::synapse0x1e234a0() {
   return (neuron0x1e20ed0()*1.8547);
}

double NNfunction_ss_dLdR::synapse0x1e24660() {
   return (neuron0x1e210f0()*0.142402);
}

double NNfunction_ss_dLdR::synapse0x1e246a0() {
   return (neuron0x1e21430()*-0.493195);
}

double NNfunction_ss_dLdR::synapse0x1e246e0() {
   return (neuron0x1e21770()*-0.0673277);
}

double NNfunction_ss_dLdR::synapse0x1e24720() {
   return (neuron0x1e21ab0()*-0.259152);
}

double NNfunction_ss_dLdR::synapse0x1e24760() {
   return (neuron0x1e21df0()*-0.513707);
}

double NNfunction_ss_dLdR::synapse0x1e247a0() {
   return (neuron0x1e22130()*0.130636);
}

double NNfunction_ss_dLdR::synapse0x1e24b20() {
   return (neuron0x1e1d570()*-0.315672);
}

double NNfunction_ss_dLdR::synapse0x1e24b60() {
   return (neuron0x1e1d8b0()*0.0425293);
}

double NNfunction_ss_dLdR::synapse0x1e24ba0() {
   return (neuron0x1e1dbf0()*0.118993);
}

double NNfunction_ss_dLdR::synapse0x1e24be0() {
   return (neuron0x1e1df30()*-0.618986);
}

double NNfunction_ss_dLdR::synapse0x1e24c20() {
   return (neuron0x1e1e270()*0.179695);
}

double NNfunction_ss_dLdR::synapse0x1e24c60() {
   return (neuron0x1e1e5b0()*-0.683241);
}

double NNfunction_ss_dLdR::synapse0x1e24ca0() {
   return (neuron0x1e1e8f0()*0.656954);
}

double NNfunction_ss_dLdR::synapse0x1e24ce0() {
   return (neuron0x1e1ec30()*-0.580053);
}

double NNfunction_ss_dLdR::synapse0x1e24d20() {
   return (neuron0x1e1ef70()*0.422996);
}

double NNfunction_ss_dLdR::synapse0x1e24d60() {
   return (neuron0x1e1f2b0()*-0.123228);
}

double NNfunction_ss_dLdR::synapse0x1e24da0() {
   return (neuron0x1e1f5f0()*-0.366764);
}

double NNfunction_ss_dLdR::synapse0x1e24de0() {
   return (neuron0x1e1f930()*-0.833941);
}

double NNfunction_ss_dLdR::synapse0x1e24e20() {
   return (neuron0x1e1fc70()*-0.521151);
}

double NNfunction_ss_dLdR::synapse0x1e24e60() {
   return (neuron0x1e1ffb0()*0.336159);
}

double NNfunction_ss_dLdR::synapse0x1e24ea0() {
   return (neuron0x1e202f0()*0.0206298);
}

double NNfunction_ss_dLdR::synapse0x1e24ee0() {
   return (neuron0x1e20630()*-0.533998);
}

double NNfunction_ss_dLdR::synapse0x1e24970() {
   return (neuron0x1e20970()*0.175375);
}

double NNfunction_ss_dLdR::synapse0x1e249b0() {
   return (neuron0x1e20ed0()*0.200106);
}

double NNfunction_ss_dLdR::synapse0x1e25030() {
   return (neuron0x1e210f0()*-0.333617);
}

double NNfunction_ss_dLdR::synapse0x1e25070() {
   return (neuron0x1e21430()*-0.605182);
}

double NNfunction_ss_dLdR::synapse0x1e250b0() {
   return (neuron0x1e21770()*-0.228867);
}

double NNfunction_ss_dLdR::synapse0x1e250f0() {
   return (neuron0x1e21ab0()*0.515104);
}

double NNfunction_ss_dLdR::synapse0x1e25130() {
   return (neuron0x1e21df0()*-0.82958);
}

double NNfunction_ss_dLdR::synapse0x1e25170() {
   return (neuron0x1e22130()*0.122874);
}

double NNfunction_ss_dLdR::synapse0x1e254f0() {
   return (neuron0x1e1d570()*0.133052);
}

double NNfunction_ss_dLdR::synapse0x1e25530() {
   return (neuron0x1e1d8b0()*-0.143025);
}

double NNfunction_ss_dLdR::synapse0x1e25570() {
   return (neuron0x1e1dbf0()*0.0111208);
}

double NNfunction_ss_dLdR::synapse0x1e255b0() {
   return (neuron0x1e1df30()*0.437447);
}

double NNfunction_ss_dLdR::synapse0x1e255f0() {
   return (neuron0x1e1e270()*-0.208169);
}

double NNfunction_ss_dLdR::synapse0x1e25630() {
   return (neuron0x1e1e5b0()*0.0429213);
}

double NNfunction_ss_dLdR::synapse0x1e25670() {
   return (neuron0x1e1e8f0()*-0.450192);
}

double NNfunction_ss_dLdR::synapse0x1e256b0() {
   return (neuron0x1e1ec30()*0.388197);
}

double NNfunction_ss_dLdR::synapse0x1e256f0() {
   return (neuron0x1e1ef70()*-0.546418);
}

double NNfunction_ss_dLdR::synapse0x1bdce40() {
   return (neuron0x1e1f2b0()*-0.563535);
}

double NNfunction_ss_dLdR::synapse0x1bdce80() {
   return (neuron0x1e1f5f0()*0.209574);
}

double NNfunction_ss_dLdR::synapse0x1bdcec0() {
   return (neuron0x1e1f930()*-0.573851);
}

double NNfunction_ss_dLdR::synapse0x1bdcf00() {
   return (neuron0x1e1fc70()*-0.17016);
}

double NNfunction_ss_dLdR::synapse0x1bdcf40() {
   return (neuron0x1e1ffb0()*-0.57662);
}

double NNfunction_ss_dLdR::synapse0x1bdcf80() {
   return (neuron0x1e202f0()*0.235177);
}

double NNfunction_ss_dLdR::synapse0x1bdcfc0() {
   return (neuron0x1e20630()*0.629705);
}

double NNfunction_ss_dLdR::synapse0x1e25340() {
   return (neuron0x1e20970()*0.611955);
}

double NNfunction_ss_dLdR::synapse0x1e25380() {
   return (neuron0x1e20ed0()*0.0711891);
}

double NNfunction_ss_dLdR::synapse0x1bdd110() {
   return (neuron0x1e210f0()*-0.0269423);
}

double NNfunction_ss_dLdR::synapse0x1bdd150() {
   return (neuron0x1e21430()*-0.342659);
}

double NNfunction_ss_dLdR::synapse0x1bdd190() {
   return (neuron0x1e21770()*-0.169406);
}

double NNfunction_ss_dLdR::synapse0x1bdd1d0() {
   return (neuron0x1e21ab0()*0.708258);
}

double NNfunction_ss_dLdR::synapse0x1bdd210() {
   return (neuron0x1e21df0()*-0.334981);
}

double NNfunction_ss_dLdR::synapse0x1e25f40() {
   return (neuron0x1e22130()*1.1141);
}

double NNfunction_ss_dLdR::synapse0x1e262c0() {
   return (neuron0x1e1d570()*-0.0245945);
}

double NNfunction_ss_dLdR::synapse0x1e26300() {
   return (neuron0x1e1d8b0()*-0.0142861);
}

double NNfunction_ss_dLdR::synapse0x1e26340() {
   return (neuron0x1e1dbf0()*0.0376366);
}

double NNfunction_ss_dLdR::synapse0x1e26380() {
   return (neuron0x1e1df30()*-0.00695449);
}

double NNfunction_ss_dLdR::synapse0x1e263c0() {
   return (neuron0x1e1e270()*0.0203801);
}

double NNfunction_ss_dLdR::synapse0x1e26400() {
   return (neuron0x1e1e5b0()*-0.000204764);
}

double NNfunction_ss_dLdR::synapse0x1e26440() {
   return (neuron0x1e1e8f0()*0.0053115);
}

double NNfunction_ss_dLdR::synapse0x1e26480() {
   return (neuron0x1e1ec30()*0.01755);
}

double NNfunction_ss_dLdR::synapse0x1e264c0() {
   return (neuron0x1e1ef70()*-0.00813286);
}

double NNfunction_ss_dLdR::synapse0x1e26500() {
   return (neuron0x1e1f2b0()*-0.0160611);
}

double NNfunction_ss_dLdR::synapse0x1e26540() {
   return (neuron0x1e1f5f0()*0.00692912);
}

double NNfunction_ss_dLdR::synapse0x1e26580() {
   return (neuron0x1e1f930()*0.979452);
}

double NNfunction_ss_dLdR::synapse0x1e265c0() {
   return (neuron0x1e1fc70()*-0.0281719);
}

double NNfunction_ss_dLdR::synapse0x1e26600() {
   return (neuron0x1e1ffb0()*0.0206973);
}

double NNfunction_ss_dLdR::synapse0x1e26640() {
   return (neuron0x1e202f0()*0.00726715);
}

double NNfunction_ss_dLdR::synapse0x1e26680() {
   return (neuron0x1e20630()*0.00295568);
}

double NNfunction_ss_dLdR::synapse0x1e26110() {
   return (neuron0x1e20970()*0.0464545);
}

double NNfunction_ss_dLdR::synapse0x1e26150() {
   return (neuron0x1e20ed0()*-0.0115081);
}

double NNfunction_ss_dLdR::synapse0x1e267d0() {
   return (neuron0x1e210f0()*-0.0110349);
}

double NNfunction_ss_dLdR::synapse0x1e26810() {
   return (neuron0x1e21430()*0.000293451);
}

double NNfunction_ss_dLdR::synapse0x1e26850() {
   return (neuron0x1e21770()*0.00355154);
}

double NNfunction_ss_dLdR::synapse0x1e26890() {
   return (neuron0x1e21ab0()*0.00876136);
}

double NNfunction_ss_dLdR::synapse0x1e268d0() {
   return (neuron0x1e21df0()*0.00841205);
}

double NNfunction_ss_dLdR::synapse0x1e26910() {
   return (neuron0x1e22130()*0.0311534);
}

double NNfunction_ss_dLdR::synapse0x1e26c90() {
   return (neuron0x1e1d570()*0.0232661);
}

double NNfunction_ss_dLdR::synapse0x1e26cd0() {
   return (neuron0x1e1d8b0()*-0.236154);
}

double NNfunction_ss_dLdR::synapse0x1e26d10() {
   return (neuron0x1e1dbf0()*0.199049);
}

double NNfunction_ss_dLdR::synapse0x1e26d50() {
   return (neuron0x1e1df30()*-0.976265);
}

double NNfunction_ss_dLdR::synapse0x1e26d90() {
   return (neuron0x1e1e270()*-0.220414);
}

double NNfunction_ss_dLdR::synapse0x1e26dd0() {
   return (neuron0x1e1e5b0()*-0.0268401);
}

double NNfunction_ss_dLdR::synapse0x1e26e10() {
   return (neuron0x1e1e8f0()*-0.274637);
}

double NNfunction_ss_dLdR::synapse0x1e26e50() {
   return (neuron0x1e1ec30()*0.134025);
}

double NNfunction_ss_dLdR::synapse0x1e26e90() {
   return (neuron0x1e1ef70()*0.116749);
}

double NNfunction_ss_dLdR::synapse0x1e26ed0() {
   return (neuron0x1e1f2b0()*0.426233);
}

double NNfunction_ss_dLdR::synapse0x1e26f10() {
   return (neuron0x1e1f5f0()*0.240774);
}

double NNfunction_ss_dLdR::synapse0x1e26f50() {
   return (neuron0x1e1f930()*-1.59103);
}

double NNfunction_ss_dLdR::synapse0x1e26f90() {
   return (neuron0x1e1fc70()*0.409563);
}

double NNfunction_ss_dLdR::synapse0x1e26fd0() {
   return (neuron0x1e1ffb0()*-0.256394);
}

double NNfunction_ss_dLdR::synapse0x1e27010() {
   return (neuron0x1e202f0()*-0.00514877);
}

double NNfunction_ss_dLdR::synapse0x1e27050() {
   return (neuron0x1e20630()*-0.190486);
}

double NNfunction_ss_dLdR::synapse0x1e26ae0() {
   return (neuron0x1e20970()*-0.00652145);
}

double NNfunction_ss_dLdR::synapse0x1e26b20() {
   return (neuron0x1e20ed0()*-1.00801);
}

double NNfunction_ss_dLdR::synapse0x1e271a0() {
   return (neuron0x1e210f0()*0.692828);
}

double NNfunction_ss_dLdR::synapse0x1e271e0() {
   return (neuron0x1e21430()*0.253145);
}

double NNfunction_ss_dLdR::synapse0x1e27220() {
   return (neuron0x1e21770()*0.414155);
}

double NNfunction_ss_dLdR::synapse0x1e27260() {
   return (neuron0x1e21ab0()*0.320381);
}

double NNfunction_ss_dLdR::synapse0x1e272a0() {
   return (neuron0x1e21df0()*0.0296882);
}

double NNfunction_ss_dLdR::synapse0x1e272e0() {
   return (neuron0x1e22130()*0.488311);
}

double NNfunction_ss_dLdR::synapse0x1e20dc0() {
   return (neuron0x1e1d570()*-0.057213);
}

double NNfunction_ss_dLdR::synapse0x1e20e00() {
   return (neuron0x1e1d8b0()*0.00164366);
}

double NNfunction_ss_dLdR::synapse0x1e20e40() {
   return (neuron0x1e1dbf0()*-0.0192071);
}

double NNfunction_ss_dLdR::synapse0x1e20e80() {
   return (neuron0x1e1df30()*3.25795);
}

double NNfunction_ss_dLdR::synapse0x1e27870() {
   return (neuron0x1e1e270()*0.0497534);
}

double NNfunction_ss_dLdR::synapse0x1e278b0() {
   return (neuron0x1e1e5b0()*0.0594817);
}

double NNfunction_ss_dLdR::synapse0x1e278f0() {
   return (neuron0x1e1e8f0()*-0.0139918);
}

double NNfunction_ss_dLdR::synapse0x1e27930() {
   return (neuron0x1e1ec30()*-0.0306182);
}

double NNfunction_ss_dLdR::synapse0x1e27970() {
   return (neuron0x1e1ef70()*-0.0254043);
}

double NNfunction_ss_dLdR::synapse0x1e279b0() {
   return (neuron0x1e1f2b0()*0.0372333);
}

double NNfunction_ss_dLdR::synapse0x1e279f0() {
   return (neuron0x1e1f5f0()*0.00457693);
}

double NNfunction_ss_dLdR::synapse0x1e27a30() {
   return (neuron0x1e1f930()*-0.314108);
}

double NNfunction_ss_dLdR::synapse0x1e27a70() {
   return (neuron0x1e1fc70()*-0.00733187);
}

double NNfunction_ss_dLdR::synapse0x1e27ab0() {
   return (neuron0x1e1ffb0()*-0.0157073);
}

double NNfunction_ss_dLdR::synapse0x1e27af0() {
   return (neuron0x1e202f0()*-0.048157);
}

double NNfunction_ss_dLdR::synapse0x1e27b30() {
   return (neuron0x1e20630()*-0.0513758);
}

double NNfunction_ss_dLdR::synapse0x1e274b0() {
   return (neuron0x1e20970()*0.018901);
}

double NNfunction_ss_dLdR::synapse0x1e274f0() {
   return (neuron0x1e20ed0()*1.69064);
}

double NNfunction_ss_dLdR::synapse0x1e27c80() {
   return (neuron0x1e210f0()*-0.00973815);
}

double NNfunction_ss_dLdR::synapse0x1e27cc0() {
   return (neuron0x1e21430()*0.0004711);
}

double NNfunction_ss_dLdR::synapse0x1e27d00() {
   return (neuron0x1e21770()*0.0133393);
}

double NNfunction_ss_dLdR::synapse0x1e27d40() {
   return (neuron0x1e21ab0()*-0.00677211);
}

double NNfunction_ss_dLdR::synapse0x1e27d80() {
   return (neuron0x1e21df0()*0.0121736);
}

double NNfunction_ss_dLdR::synapse0x1e27dc0() {
   return (neuron0x1e22130()*-0.0041976);
}

double NNfunction_ss_dLdR::synapse0x1e28140() {
   return (neuron0x1e1d570()*-0.376067);
}

double NNfunction_ss_dLdR::synapse0x1e28180() {
   return (neuron0x1e1d8b0()*-0.241503);
}

double NNfunction_ss_dLdR::synapse0x1e281c0() {
   return (neuron0x1e1dbf0()*0.615222);
}

double NNfunction_ss_dLdR::synapse0x1e28200() {
   return (neuron0x1e1df30()*-0.258684);
}

double NNfunction_ss_dLdR::synapse0x1e28240() {
   return (neuron0x1e1e270()*-0.671667);
}

double NNfunction_ss_dLdR::synapse0x1e28280() {
   return (neuron0x1e1e5b0()*-0.421182);
}

double NNfunction_ss_dLdR::synapse0x1e282c0() {
   return (neuron0x1e1e8f0()*0.0438832);
}

double NNfunction_ss_dLdR::synapse0x1e28300() {
   return (neuron0x1e1ec30()*-0.582585);
}

double NNfunction_ss_dLdR::synapse0x1e28340() {
   return (neuron0x1e1ef70()*0.246685);
}

double NNfunction_ss_dLdR::synapse0x1e28380() {
   return (neuron0x1e1f2b0()*0.815623);
}

double NNfunction_ss_dLdR::synapse0x1e283c0() {
   return (neuron0x1e1f5f0()*0.417314);
}

double NNfunction_ss_dLdR::synapse0x1e28400() {
   return (neuron0x1e1f930()*0.146176);
}

double NNfunction_ss_dLdR::synapse0x1e28440() {
   return (neuron0x1e1fc70()*0.818327);
}

double NNfunction_ss_dLdR::synapse0x1e28480() {
   return (neuron0x1e1ffb0()*-0.478075);
}

double NNfunction_ss_dLdR::synapse0x1e284c0() {
   return (neuron0x1e202f0()*0.46085);
}

double NNfunction_ss_dLdR::synapse0x1e28500() {
   return (neuron0x1e20630()*-1.07085);
}

double NNfunction_ss_dLdR::synapse0x1e27f90() {
   return (neuron0x1e20970()*-0.579977);
}

double NNfunction_ss_dLdR::synapse0x1e27fd0() {
   return (neuron0x1e20ed0()*0.498294);
}

double NNfunction_ss_dLdR::synapse0x1e28650() {
   return (neuron0x1e210f0()*0.144438);
}

double NNfunction_ss_dLdR::synapse0x1e28690() {
   return (neuron0x1e21430()*-0.58316);
}

double NNfunction_ss_dLdR::synapse0x1e286d0() {
   return (neuron0x1e21770()*0.548093);
}

double NNfunction_ss_dLdR::synapse0x1e28710() {
   return (neuron0x1e21ab0()*0.435609);
}

double NNfunction_ss_dLdR::synapse0x1e28750() {
   return (neuron0x1e21df0()*0.882808);
}

double NNfunction_ss_dLdR::synapse0x1e28790() {
   return (neuron0x1e22130()*0.251957);
}

double NNfunction_ss_dLdR::synapse0x1e28b10() {
   return (neuron0x1e1d570()*0.00259469);
}

double NNfunction_ss_dLdR::synapse0x1e28b50() {
   return (neuron0x1e1d8b0()*0.00739693);
}

double NNfunction_ss_dLdR::synapse0x1e28b90() {
   return (neuron0x1e1dbf0()*-0.00537616);
}

double NNfunction_ss_dLdR::synapse0x1e28bd0() {
   return (neuron0x1e1df30()*-1.01783);
}

double NNfunction_ss_dLdR::synapse0x1e28c10() {
   return (neuron0x1e1e270()*6.69849e-05);
}

double NNfunction_ss_dLdR::synapse0x1e28c50() {
   return (neuron0x1e1e5b0()*-0.0244385);
}

double NNfunction_ss_dLdR::synapse0x1e28c90() {
   return (neuron0x1e1e8f0()*0.00213081);
}

double NNfunction_ss_dLdR::synapse0x1e28cd0() {
   return (neuron0x1e1ec30()*-0.000863881);
}

double NNfunction_ss_dLdR::synapse0x1e28d10() {
   return (neuron0x1e1ef70()*0.0095198);
}

double NNfunction_ss_dLdR::synapse0x1e28d50() {
   return (neuron0x1e1f2b0()*0.0133989);
}

double NNfunction_ss_dLdR::synapse0x1e28d90() {
   return (neuron0x1e1f5f0()*0.00617625);
}

double NNfunction_ss_dLdR::synapse0x1e28dd0() {
   return (neuron0x1e1f930()*-0.535238);
}

double NNfunction_ss_dLdR::synapse0x1e28e10() {
   return (neuron0x1e1fc70()*-0.0178941);
}

double NNfunction_ss_dLdR::synapse0x1e28e50() {
   return (neuron0x1e1ffb0()*0.0267427);
}

double NNfunction_ss_dLdR::synapse0x1e28e90() {
   return (neuron0x1e202f0()*-0.0142148);
}

double NNfunction_ss_dLdR::synapse0x1e28ed0() {
   return (neuron0x1e20630()*-0.0264263);
}

double NNfunction_ss_dLdR::synapse0x1e28960() {
   return (neuron0x1e20970()*-0.011399);
}

double NNfunction_ss_dLdR::synapse0x1e289a0() {
   return (neuron0x1e20ed0()*-0.749054);
}

double NNfunction_ss_dLdR::synapse0x1e25730() {
   return (neuron0x1e210f0()*-0.0189722);
}

double NNfunction_ss_dLdR::synapse0x1e25770() {
   return (neuron0x1e21430()*-0.0123712);
}

double NNfunction_ss_dLdR::synapse0x1e257b0() {
   return (neuron0x1e21770()*0.0121773);
}

double NNfunction_ss_dLdR::synapse0x1e257f0() {
   return (neuron0x1e21ab0()*0.0160216);
}

double NNfunction_ss_dLdR::synapse0x1e25830() {
   return (neuron0x1e21df0()*0.00558073);
}

double NNfunction_ss_dLdR::synapse0x1e25870() {
   return (neuron0x1e22130()*-0.00582686);
}

double NNfunction_ss_dLdR::synapse0x1e25bf0() {
   return (neuron0x1e1d570()*-0.00281086);
}

double NNfunction_ss_dLdR::synapse0x1e25c30() {
   return (neuron0x1e1d8b0()*-0.00516009);
}

double NNfunction_ss_dLdR::synapse0x1e25c70() {
   return (neuron0x1e1dbf0()*-0.024089);
}

double NNfunction_ss_dLdR::synapse0x1e25cb0() {
   return (neuron0x1e1df30()*3.88199);
}

double NNfunction_ss_dLdR::synapse0x1e25cf0() {
   return (neuron0x1e1e270()*-0.0133398);
}

double NNfunction_ss_dLdR::synapse0x1e25d30() {
   return (neuron0x1e1e5b0()*5.82749e-05);
}

double NNfunction_ss_dLdR::synapse0x1e25d70() {
   return (neuron0x1e1e8f0()*0.00360222);
}

double NNfunction_ss_dLdR::synapse0x1e25db0() {
   return (neuron0x1e1ec30()*0.00523867);
}

double NNfunction_ss_dLdR::synapse0x1e25df0() {
   return (neuron0x1e1ef70()*-0.00519298);
}

double NNfunction_ss_dLdR::synapse0x1e25e30() {
   return (neuron0x1e1f2b0()*0.0138675);
}

double NNfunction_ss_dLdR::synapse0x1e25e70() {
   return (neuron0x1e1f5f0()*0.0206698);
}

double NNfunction_ss_dLdR::synapse0x1e25eb0() {
   return (neuron0x1e1f930()*0.0297068);
}

double NNfunction_ss_dLdR::synapse0x1e25ef0() {
   return (neuron0x1e1fc70()*0.012752);
}

double NNfunction_ss_dLdR::synapse0x1e2a030() {
   return (neuron0x1e1ffb0()*0.00349327);
}

double NNfunction_ss_dLdR::synapse0x1e2a070() {
   return (neuron0x1e202f0()*0.00197198);
}

double NNfunction_ss_dLdR::synapse0x1e2a0b0() {
   return (neuron0x1e20630()*-0.00394298);
}

double NNfunction_ss_dLdR::synapse0x1e25a40() {
   return (neuron0x1e20970()*-0.000521227);
}

double NNfunction_ss_dLdR::synapse0x1e25a80() {
   return (neuron0x1e20ed0()*0.118291);
}

double NNfunction_ss_dLdR::synapse0x1e2a200() {
   return (neuron0x1e210f0()*0.0040041);
}

double NNfunction_ss_dLdR::synapse0x1e2a240() {
   return (neuron0x1e21430()*0.027568);
}

double NNfunction_ss_dLdR::synapse0x1e2a280() {
   return (neuron0x1e21770()*0.00780956);
}

double NNfunction_ss_dLdR::synapse0x1e2a2c0() {
   return (neuron0x1e21ab0()*-0.00162595);
}

double NNfunction_ss_dLdR::synapse0x1e2a300() {
   return (neuron0x1e21df0()*-0.00487883);
}

double NNfunction_ss_dLdR::synapse0x1e2a340() {
   return (neuron0x1e22130()*0.0108602);
}

double NNfunction_ss_dLdR::synapse0x1e2a6c0() {
   return (neuron0x1e1d570()*0.812407);
}

double NNfunction_ss_dLdR::synapse0x1e2a700() {
   return (neuron0x1e1d8b0()*-0.606078);
}

double NNfunction_ss_dLdR::synapse0x1e2a740() {
   return (neuron0x1e1dbf0()*-0.350816);
}

double NNfunction_ss_dLdR::synapse0x1e2a780() {
   return (neuron0x1e1df30()*0.976554);
}

double NNfunction_ss_dLdR::synapse0x1e2a7c0() {
   return (neuron0x1e1e270()*-0.598753);
}

double NNfunction_ss_dLdR::synapse0x1e2a800() {
   return (neuron0x1e1e5b0()*0.227502);
}

double NNfunction_ss_dLdR::synapse0x1e2a840() {
   return (neuron0x1e1e8f0()*-0.530199);
}

double NNfunction_ss_dLdR::synapse0x1e2a880() {
   return (neuron0x1e1ec30()*-0.408973);
}

double NNfunction_ss_dLdR::synapse0x1e2a8c0() {
   return (neuron0x1e1ef70()*0.42119);
}

double NNfunction_ss_dLdR::synapse0x1e2a900() {
   return (neuron0x1e1f2b0()*0.674319);
}

double NNfunction_ss_dLdR::synapse0x1e2a940() {
   return (neuron0x1e1f5f0()*-0.492867);
}

double NNfunction_ss_dLdR::synapse0x1e2a980() {
   return (neuron0x1e1f930()*0.178018);
}

double NNfunction_ss_dLdR::synapse0x1e2a9c0() {
   return (neuron0x1e1fc70()*0.55969);
}

double NNfunction_ss_dLdR::synapse0x1e2aa00() {
   return (neuron0x1e1ffb0()*0.423405);
}

double NNfunction_ss_dLdR::synapse0x1e2aa40() {
   return (neuron0x1e202f0()*-0.37345);
}

double NNfunction_ss_dLdR::synapse0x1e2aa80() {
   return (neuron0x1e20630()*0.760075);
}

double NNfunction_ss_dLdR::synapse0x1e2a510() {
   return (neuron0x1e20970()*-0.77493);
}

double NNfunction_ss_dLdR::synapse0x1e2a550() {
   return (neuron0x1e20ed0()*-0.0216147);
}

double NNfunction_ss_dLdR::synapse0x1e2abd0() {
   return (neuron0x1e210f0()*0.378861);
}

double NNfunction_ss_dLdR::synapse0x1e2ac10() {
   return (neuron0x1e21430()*0.361);
}

double NNfunction_ss_dLdR::synapse0x1e2ac50() {
   return (neuron0x1e21770()*-0.287743);
}

double NNfunction_ss_dLdR::synapse0x1e2ac90() {
   return (neuron0x1e21ab0()*0.873775);
}

double NNfunction_ss_dLdR::synapse0x1e2acd0() {
   return (neuron0x1e21df0()*0.117742);
}

double NNfunction_ss_dLdR::synapse0x1e2ad10() {
   return (neuron0x1e22130()*0.730338);
}

double NNfunction_ss_dLdR::synapse0x1e2b090() {
   return (neuron0x1e1d570()*0.12397);
}

double NNfunction_ss_dLdR::synapse0x1e2b0d0() {
   return (neuron0x1e1d8b0()*0.492529);
}

double NNfunction_ss_dLdR::synapse0x1e2b110() {
   return (neuron0x1e1dbf0()*-0.208569);
}

double NNfunction_ss_dLdR::synapse0x1e2b150() {
   return (neuron0x1e1df30()*-1.42298);
}

double NNfunction_ss_dLdR::synapse0x1e2b190() {
   return (neuron0x1e1e270()*-0.135074);
}

double NNfunction_ss_dLdR::synapse0x1e2b1d0() {
   return (neuron0x1e1e5b0()*0.371859);
}

double NNfunction_ss_dLdR::synapse0x1e2b210() {
   return (neuron0x1e1e8f0()*-1.0644);
}

double NNfunction_ss_dLdR::synapse0x1e2b250() {
   return (neuron0x1e1ec30()*0.255972);
}

double NNfunction_ss_dLdR::synapse0x1e2b290() {
   return (neuron0x1e1ef70()*0.303299);
}

double NNfunction_ss_dLdR::synapse0x1e2b2d0() {
   return (neuron0x1e1f2b0()*0.429468);
}

double NNfunction_ss_dLdR::synapse0x1e2b310() {
   return (neuron0x1e1f5f0()*-0.293369);
}

double NNfunction_ss_dLdR::synapse0x1e2b350() {
   return (neuron0x1e1f930()*0.384765);
}

double NNfunction_ss_dLdR::synapse0x1e2b390() {
   return (neuron0x1e1fc70()*-0.39666);
}

double NNfunction_ss_dLdR::synapse0x1e2b3d0() {
   return (neuron0x1e1ffb0()*0.0400637);
}

double NNfunction_ss_dLdR::synapse0x1e2b410() {
   return (neuron0x1e202f0()*-0.358106);
}

double NNfunction_ss_dLdR::synapse0x1e2b450() {
   return (neuron0x1e20630()*0.257088);
}

double NNfunction_ss_dLdR::synapse0x1e2aee0() {
   return (neuron0x1e20970()*-0.163834);
}

double NNfunction_ss_dLdR::synapse0x1e2af20() {
   return (neuron0x1e20ed0()*0.194871);
}

double NNfunction_ss_dLdR::synapse0x1e2b5a0() {
   return (neuron0x1e210f0()*0.286559);
}

double NNfunction_ss_dLdR::synapse0x1e2b5e0() {
   return (neuron0x1e21430()*0.101817);
}

double NNfunction_ss_dLdR::synapse0x1e2b620() {
   return (neuron0x1e21770()*0.0961704);
}

double NNfunction_ss_dLdR::synapse0x1e2b660() {
   return (neuron0x1e21ab0()*0.311596);
}

double NNfunction_ss_dLdR::synapse0x1e2b6a0() {
   return (neuron0x1e21df0()*-0.568177);
}

double NNfunction_ss_dLdR::synapse0x1e2b6e0() {
   return (neuron0x1e22130()*0.0188938);
}

double NNfunction_ss_dLdR::synapse0x1e2ba60() {
   return (neuron0x1e1d570()*0.538253);
}

double NNfunction_ss_dLdR::synapse0x1e2baa0() {
   return (neuron0x1e1d8b0()*0.0508975);
}

double NNfunction_ss_dLdR::synapse0x1e2bae0() {
   return (neuron0x1e1dbf0()*0.1065);
}

double NNfunction_ss_dLdR::synapse0x1e2bb20() {
   return (neuron0x1e1df30()*0.312903);
}

double NNfunction_ss_dLdR::synapse0x1e2bb60() {
   return (neuron0x1e1e270()*0.0176267);
}

double NNfunction_ss_dLdR::synapse0x1e2bba0() {
   return (neuron0x1e1e5b0()*-0.153037);
}

double NNfunction_ss_dLdR::synapse0x1e2bbe0() {
   return (neuron0x1e1e8f0()*-0.679242);
}

double NNfunction_ss_dLdR::synapse0x1e2bc20() {
   return (neuron0x1e1ec30()*-0.0662556);
}

double NNfunction_ss_dLdR::synapse0x1e2bc60() {
   return (neuron0x1e1ef70()*1.27822);
}

double NNfunction_ss_dLdR::synapse0x1e2bca0() {
   return (neuron0x1e1f2b0()*-0.320973);
}

double NNfunction_ss_dLdR::synapse0x1e2bce0() {
   return (neuron0x1e1f5f0()*1.47909);
}

double NNfunction_ss_dLdR::synapse0x1e2bd20() {
   return (neuron0x1e1f930()*-0.295261);
}

double NNfunction_ss_dLdR::synapse0x1e2bd60() {
   return (neuron0x1e1fc70()*-1.26401);
}

double NNfunction_ss_dLdR::synapse0x1e2bda0() {
   return (neuron0x1e1ffb0()*0.341852);
}

double NNfunction_ss_dLdR::synapse0x1e2bde0() {
   return (neuron0x1e202f0()*-0.017317);
}

double NNfunction_ss_dLdR::synapse0x1e2be20() {
   return (neuron0x1e20630()*0.778117);
}

double NNfunction_ss_dLdR::synapse0x1e2b8b0() {
   return (neuron0x1e20970()*-0.565318);
}

double NNfunction_ss_dLdR::synapse0x1e2b8f0() {
   return (neuron0x1e20ed0()*-1.94505);
}

double NNfunction_ss_dLdR::synapse0x1e2bf70() {
   return (neuron0x1e210f0()*-0.198704);
}

double NNfunction_ss_dLdR::synapse0x1e2bfb0() {
   return (neuron0x1e21430()*0.16283);
}

double NNfunction_ss_dLdR::synapse0x1e2bff0() {
   return (neuron0x1e21770()*0.134775);
}

double NNfunction_ss_dLdR::synapse0x1e2c030() {
   return (neuron0x1e21ab0()*0.137429);
}

double NNfunction_ss_dLdR::synapse0x1e2c070() {
   return (neuron0x1e21df0()*0.0466367);
}

double NNfunction_ss_dLdR::synapse0x1e2c0b0() {
   return (neuron0x1e22130()*0.107972);
}

double NNfunction_ss_dLdR::synapse0x1e2c430() {
   return (neuron0x1e1d570()*0.0769799);
}

double NNfunction_ss_dLdR::synapse0x1e1d790() {
   return (neuron0x1e1d8b0()*0.0712332);
}

double NNfunction_ss_dLdR::synapse0x1e1d7d0() {
   return (neuron0x1e1dbf0()*0.0372859);
}

double NNfunction_ss_dLdR::synapse0x1e1dad0() {
   return (neuron0x1e1df30()*-2.46736);
}

double NNfunction_ss_dLdR::synapse0x1e1db10() {
   return (neuron0x1e1e270()*-0.0326908);
}

double NNfunction_ss_dLdR::synapse0x1e1de10() {
   return (neuron0x1e1e5b0()*-0.0623039);
}

double NNfunction_ss_dLdR::synapse0x1e1de50() {
   return (neuron0x1e1e8f0()*0.0192024);
}

double NNfunction_ss_dLdR::synapse0x1e1e150() {
   return (neuron0x1e1ec30()*-0.0224574);
}

double NNfunction_ss_dLdR::synapse0x1e1e190() {
   return (neuron0x1e1ef70()*0.049278);
}

double NNfunction_ss_dLdR::synapse0x1e1e490() {
   return (neuron0x1e1f2b0()*0.0097753);
}

double NNfunction_ss_dLdR::synapse0x1e1e4d0() {
   return (neuron0x1e1f5f0()*0.00767563);
}

double NNfunction_ss_dLdR::synapse0x1e1e7d0() {
   return (neuron0x1e1f930()*0.0697506);
}

double NNfunction_ss_dLdR::synapse0x1e1e810() {
   return (neuron0x1e1fc70()*0.0513143);
}

double NNfunction_ss_dLdR::synapse0x1e1eb10() {
   return (neuron0x1e1ffb0()*-0.0146557);
}

double NNfunction_ss_dLdR::synapse0x1e1eb50() {
   return (neuron0x1e202f0()*-0.0183429);
}

double NNfunction_ss_dLdR::synapse0x1e1ee50() {
   return (neuron0x1e20630()*-0.0273399);
}

double NNfunction_ss_dLdR::synapse0x1e1ee90() {
   return (neuron0x1e20970()*-0.0672322);
}

double NNfunction_ss_dLdR::synapse0x1e1f190() {
   return (neuron0x1e20ed0()*-0.0415483);
}

double NNfunction_ss_dLdR::synapse0x1e1f1d0() {
   return (neuron0x1e210f0()*-0.0115484);
}

double NNfunction_ss_dLdR::synapse0x1e1f4d0() {
   return (neuron0x1e21430()*-0.0530605);
}

double NNfunction_ss_dLdR::synapse0x1e1f510() {
   return (neuron0x1e21770()*0.021075);
}

double NNfunction_ss_dLdR::synapse0x1e1f810() {
   return (neuron0x1e21ab0()*0.029836);
}

double NNfunction_ss_dLdR::synapse0x1e1f850() {
   return (neuron0x1e21df0()*0.0271603);
}

double NNfunction_ss_dLdR::synapse0x1e1fb50() {
   return (neuron0x1e22130()*-0.071044);
}

double NNfunction_ss_dLdR::synapse0x1e1fb90() {
   return (neuron0x1e1d570()*0.920154);
}

double NNfunction_ss_dLdR::synapse0x1e20850() {
   return (neuron0x1e1d8b0()*1.69426);
}

double NNfunction_ss_dLdR::synapse0x1e20890() {
   return (neuron0x1e1dbf0()*-0.270763);
}

double NNfunction_ss_dLdR::synapse0x1e2c280() {
   return (neuron0x1e1df30()*0.0718193);
}

double NNfunction_ss_dLdR::synapse0x1e2c2c0() {
   return (neuron0x1e1e270()*-0.428541);
}

double NNfunction_ss_dLdR::synapse0x1e20b90() {
   return (neuron0x1e1e5b0()*0.507243);
}

double NNfunction_ss_dLdR::synapse0x1e20bd0() {
   return (neuron0x1e1e8f0()*-0.621134);
}

double NNfunction_ss_dLdR::synapse0x1bceb60() {
   return (neuron0x1e1ec30()*-0.399682);
}

double NNfunction_ss_dLdR::synapse0x1bceba0() {
   return (neuron0x1e1ef70()*0.231124);
}

double NNfunction_ss_dLdR::synapse0x1e21310() {
   return (neuron0x1e1f2b0()*0.86282);
}

double NNfunction_ss_dLdR::synapse0x1e21350() {
   return (neuron0x1e1f5f0()*-0.35544);
}

double NNfunction_ss_dLdR::synapse0x1e21650() {
   return (neuron0x1e1f930()*0.789782);
}

double NNfunction_ss_dLdR::synapse0x1e21690() {
   return (neuron0x1e1fc70()*-0.542919);
}

double NNfunction_ss_dLdR::synapse0x1e21990() {
   return (neuron0x1e1ffb0()*0.120757);
}

double NNfunction_ss_dLdR::synapse0x1e219d0() {
   return (neuron0x1e202f0()*0.248998);
}

double NNfunction_ss_dLdR::synapse0x1e21cd0() {
   return (neuron0x1e20630()*-0.88872);
}

double NNfunction_ss_dLdR::synapse0x1e21d10() {
   return (neuron0x1e20970()*-0.160769);
}

double NNfunction_ss_dLdR::synapse0x1e22010() {
   return (neuron0x1e20ed0()*0.958782);
}

double NNfunction_ss_dLdR::synapse0x1e22050() {
   return (neuron0x1e210f0()*0.458638);
}

double NNfunction_ss_dLdR::synapse0x1e22350() {
   return (neuron0x1e21430()*0.89712);
}

double NNfunction_ss_dLdR::synapse0x1e22390() {
   return (neuron0x1e21770()*0.200967);
}

double NNfunction_ss_dLdR::synapse0x1e1fe90() {
   return (neuron0x1e21ab0()*-0.138914);
}

double NNfunction_ss_dLdR::synapse0x1e1fed0() {
   return (neuron0x1e21df0()*-0.0992373);
}

double NNfunction_ss_dLdR::synapse0x1e2e1a0() {
   return (neuron0x1e22130()*-0.401058);
}

double NNfunction_ss_dLdR::synapse0x1e2e520() {
   return (neuron0x1e1d570()*-0.380791);
}

double NNfunction_ss_dLdR::synapse0x1e2e560() {
   return (neuron0x1e1d8b0()*0.239261);
}

double NNfunction_ss_dLdR::synapse0x1e2e5a0() {
   return (neuron0x1e1dbf0()*-0.826127);
}

double NNfunction_ss_dLdR::synapse0x1e2e5e0() {
   return (neuron0x1e1df30()*-1.32338);
}

double NNfunction_ss_dLdR::synapse0x1e2e620() {
   return (neuron0x1e1e270()*0.113826);
}

double NNfunction_ss_dLdR::synapse0x1e2e660() {
   return (neuron0x1e1e5b0()*-0.551253);
}

double NNfunction_ss_dLdR::synapse0x1e2e6a0() {
   return (neuron0x1e1e8f0()*-0.100397);
}

double NNfunction_ss_dLdR::synapse0x1e2e6e0() {
   return (neuron0x1e1ec30()*0.798557);
}

double NNfunction_ss_dLdR::synapse0x1e2e720() {
   return (neuron0x1e1ef70()*-0.282642);
}

double NNfunction_ss_dLdR::synapse0x1e2e760() {
   return (neuron0x1e1f2b0()*0.225571);
}

double NNfunction_ss_dLdR::synapse0x1e2e7a0() {
   return (neuron0x1e1f5f0()*0.233976);
}

double NNfunction_ss_dLdR::synapse0x1e2e7e0() {
   return (neuron0x1e1f930()*0.539143);
}

double NNfunction_ss_dLdR::synapse0x1e2e820() {
   return (neuron0x1e1fc70()*-0.2176);
}

double NNfunction_ss_dLdR::synapse0x1e2e860() {
   return (neuron0x1e1ffb0()*-0.15339);
}

double NNfunction_ss_dLdR::synapse0x1e2e8a0() {
   return (neuron0x1e202f0()*-0.114772);
}

double NNfunction_ss_dLdR::synapse0x1e2e8e0() {
   return (neuron0x1e20630()*-0.478293);
}

double NNfunction_ss_dLdR::synapse0x1e2e370() {
   return (neuron0x1e20970()*0.0918052);
}

double NNfunction_ss_dLdR::synapse0x1e2e3b0() {
   return (neuron0x1e20ed0()*0.376509);
}

double NNfunction_ss_dLdR::synapse0x1e2ea30() {
   return (neuron0x1e210f0()*0.0317098);
}

double NNfunction_ss_dLdR::synapse0x1e2ea70() {
   return (neuron0x1e21430()*0.296966);
}

double NNfunction_ss_dLdR::synapse0x1e2eab0() {
   return (neuron0x1e21770()*-0.0495849);
}

double NNfunction_ss_dLdR::synapse0x1e2eaf0() {
   return (neuron0x1e21ab0()*0.509328);
}

double NNfunction_ss_dLdR::synapse0x1e2eb30() {
   return (neuron0x1e21df0()*-0.274507);
}

double NNfunction_ss_dLdR::synapse0x1e2eb70() {
   return (neuron0x1e22130()*0.17422);
}

double NNfunction_ss_dLdR::synapse0x1e2eef0() {
   return (neuron0x1e1d570()*0.0263082);
}

double NNfunction_ss_dLdR::synapse0x1e2ef30() {
   return (neuron0x1e1d8b0()*0.415344);
}

double NNfunction_ss_dLdR::synapse0x1e2ef70() {
   return (neuron0x1e1dbf0()*0.322338);
}

double NNfunction_ss_dLdR::synapse0x1e2efb0() {
   return (neuron0x1e1df30()*1.05214);
}

double NNfunction_ss_dLdR::synapse0x1e2eff0() {
   return (neuron0x1e1e270()*0.0531199);
}

double NNfunction_ss_dLdR::synapse0x1e2f030() {
   return (neuron0x1e1e5b0()*0.171761);
}

double NNfunction_ss_dLdR::synapse0x1e2f070() {
   return (neuron0x1e1e8f0()*-0.0199872);
}

double NNfunction_ss_dLdR::synapse0x1e2f0b0() {
   return (neuron0x1e1ec30()*-0.0598986);
}

double NNfunction_ss_dLdR::synapse0x1e2f0f0() {
   return (neuron0x1e1ef70()*0.104534);
}

double NNfunction_ss_dLdR::synapse0x1e2f130() {
   return (neuron0x1e1f2b0()*0.0476343);
}

double NNfunction_ss_dLdR::synapse0x1e2f170() {
   return (neuron0x1e1f5f0()*0.0613932);
}

double NNfunction_ss_dLdR::synapse0x1e2f1b0() {
   return (neuron0x1e1f930()*0.0567276);
}

double NNfunction_ss_dLdR::synapse0x1e2f1f0() {
   return (neuron0x1e1fc70()*0.452342);
}

double NNfunction_ss_dLdR::synapse0x1e2f230() {
   return (neuron0x1e1ffb0()*-0.220297);
}

double NNfunction_ss_dLdR::synapse0x1e2f270() {
   return (neuron0x1e202f0()*-0.0433464);
}

double NNfunction_ss_dLdR::synapse0x1e2f2b0() {
   return (neuron0x1e20630()*0.179924);
}

double NNfunction_ss_dLdR::synapse0x1e2ed40() {
   return (neuron0x1e20970()*-0.238164);
}

double NNfunction_ss_dLdR::synapse0x1e2ed80() {
   return (neuron0x1e20ed0()*-0.235024);
}

double NNfunction_ss_dLdR::synapse0x1e2f400() {
   return (neuron0x1e210f0()*0.149491);
}

double NNfunction_ss_dLdR::synapse0x1e2f440() {
   return (neuron0x1e21430()*0.0571489);
}

double NNfunction_ss_dLdR::synapse0x1e2f480() {
   return (neuron0x1e21770()*0.0233429);
}

double NNfunction_ss_dLdR::synapse0x1e2f4c0() {
   return (neuron0x1e21ab0()*0.0519973);
}

double NNfunction_ss_dLdR::synapse0x1e2f500() {
   return (neuron0x1e21df0()*-0.0543089);
}

double NNfunction_ss_dLdR::synapse0x1e2f540() {
   return (neuron0x1e22130()*-0.0853375);
}

double NNfunction_ss_dLdR::synapse0x1e2f8c0() {
   return (neuron0x1e1d570()*-0.0143026);
}

double NNfunction_ss_dLdR::synapse0x1e2f900() {
   return (neuron0x1e1d8b0()*0.0101118);
}

double NNfunction_ss_dLdR::synapse0x1e2f940() {
   return (neuron0x1e1dbf0()*-0.000449997);
}

double NNfunction_ss_dLdR::synapse0x1e2f980() {
   return (neuron0x1e1df30()*0.845764);
}

double NNfunction_ss_dLdR::synapse0x1e2f9c0() {
   return (neuron0x1e1e270()*0.00147276);
}

double NNfunction_ss_dLdR::synapse0x1e2fa00() {
   return (neuron0x1e1e5b0()*0.0112726);
}

double NNfunction_ss_dLdR::synapse0x1e2fa40() {
   return (neuron0x1e1e8f0()*0.00754222);
}

double NNfunction_ss_dLdR::synapse0x1e2fa80() {
   return (neuron0x1e1ec30()*-0.00492896);
}

double NNfunction_ss_dLdR::synapse0x1e2fac0() {
   return (neuron0x1e1ef70()*-0.00182571);
}

double NNfunction_ss_dLdR::synapse0x1e2fb00() {
   return (neuron0x1e1f2b0()*0.0133215);
}

double NNfunction_ss_dLdR::synapse0x1e2fb40() {
   return (neuron0x1e1f5f0()*0.0257647);
}

double NNfunction_ss_dLdR::synapse0x1e2fb80() {
   return (neuron0x1e1f930()*-0.59728);
}

double NNfunction_ss_dLdR::synapse0x1e2fbc0() {
   return (neuron0x1e1fc70()*-0.0214987);
}

double NNfunction_ss_dLdR::synapse0x1e2fc00() {
   return (neuron0x1e1ffb0()*-0.00135512);
}

double NNfunction_ss_dLdR::synapse0x1e2fc40() {
   return (neuron0x1e202f0()*-0.0163946);
}

double NNfunction_ss_dLdR::synapse0x1e2fc80() {
   return (neuron0x1e20630()*-0.023857);
}

double NNfunction_ss_dLdR::synapse0x1e2f710() {
   return (neuron0x1e20970()*0.00640714);
}

double NNfunction_ss_dLdR::synapse0x1e2f750() {
   return (neuron0x1e20ed0()*-0.709358);
}

double NNfunction_ss_dLdR::synapse0x1e2fdd0() {
   return (neuron0x1e210f0()*-0.0192947);
}

double NNfunction_ss_dLdR::synapse0x1e2fe10() {
   return (neuron0x1e21430()*0.0175778);
}

double NNfunction_ss_dLdR::synapse0x1e2fe50() {
   return (neuron0x1e21770()*-0.00975464);
}

double NNfunction_ss_dLdR::synapse0x1e2fe90() {
   return (neuron0x1e21ab0()*0.00851024);
}

double NNfunction_ss_dLdR::synapse0x1e2fed0() {
   return (neuron0x1e21df0()*-0.0237155);
}

double NNfunction_ss_dLdR::synapse0x1e2ff10() {
   return (neuron0x1e22130()*0.0196166);
}

double NNfunction_ss_dLdR::synapse0x1e30290() {
   return (neuron0x1e1d570()*0.640233);
}

double NNfunction_ss_dLdR::synapse0x1e302d0() {
   return (neuron0x1e1d8b0()*-0.0559465);
}

double NNfunction_ss_dLdR::synapse0x1e30310() {
   return (neuron0x1e1dbf0()*0.24684);
}

double NNfunction_ss_dLdR::synapse0x1e30350() {
   return (neuron0x1e1df30()*0.404359);
}

double NNfunction_ss_dLdR::synapse0x1e30390() {
   return (neuron0x1e1e270()*0.527121);
}

double NNfunction_ss_dLdR::synapse0x1e303d0() {
   return (neuron0x1e1e5b0()*0.161475);
}

double NNfunction_ss_dLdR::synapse0x1e30410() {
   return (neuron0x1e1e8f0()*-0.519863);
}

double NNfunction_ss_dLdR::synapse0x1e30450() {
   return (neuron0x1e1ec30()*-0.582653);
}

double NNfunction_ss_dLdR::synapse0x1e30490() {
   return (neuron0x1e1ef70()*0.849731);
}

double NNfunction_ss_dLdR::synapse0x1e304d0() {
   return (neuron0x1e1f2b0()*0.569968);
}

double NNfunction_ss_dLdR::synapse0x1e30510() {
   return (neuron0x1e1f5f0()*-0.0535858);
}

double NNfunction_ss_dLdR::synapse0x1e30550() {
   return (neuron0x1e1f930()*0.579227);
}

double NNfunction_ss_dLdR::synapse0x1e30590() {
   return (neuron0x1e1fc70()*0.326436);
}

double NNfunction_ss_dLdR::synapse0x1e305d0() {
   return (neuron0x1e1ffb0()*0.4644);
}

double NNfunction_ss_dLdR::synapse0x1e30610() {
   return (neuron0x1e202f0()*-0.451797);
}

double NNfunction_ss_dLdR::synapse0x1e30650() {
   return (neuron0x1e20630()*-0.232401);
}

double NNfunction_ss_dLdR::synapse0x1e300e0() {
   return (neuron0x1e20970()*-0.760613);
}

double NNfunction_ss_dLdR::synapse0x1e30120() {
   return (neuron0x1e20ed0()*0.128474);
}

double NNfunction_ss_dLdR::synapse0x1e307a0() {
   return (neuron0x1e210f0()*-0.116239);
}

double NNfunction_ss_dLdR::synapse0x1e307e0() {
   return (neuron0x1e21430()*-0.397172);
}

double NNfunction_ss_dLdR::synapse0x1e30820() {
   return (neuron0x1e21770()*-0.469223);
}

double NNfunction_ss_dLdR::synapse0x1e30860() {
   return (neuron0x1e21ab0()*0.382504);
}

double NNfunction_ss_dLdR::synapse0x1e308a0() {
   return (neuron0x1e21df0()*-0.107401);
}

double NNfunction_ss_dLdR::synapse0x1e308e0() {
   return (neuron0x1e22130()*-0.157597);
}

double NNfunction_ss_dLdR::synapse0x1e30c60() {
   return (neuron0x1e1d570()*0.0119676);
}

double NNfunction_ss_dLdR::synapse0x1e30ca0() {
   return (neuron0x1e1d8b0()*0.00572079);
}

double NNfunction_ss_dLdR::synapse0x1e30ce0() {
   return (neuron0x1e1dbf0()*0.0833845);
}

double NNfunction_ss_dLdR::synapse0x1e30d20() {
   return (neuron0x1e1df30()*2.12089);
}

double NNfunction_ss_dLdR::synapse0x1e30d60() {
   return (neuron0x1e1e270()*-0.00283658);
}

double NNfunction_ss_dLdR::synapse0x1e30da0() {
   return (neuron0x1e1e5b0()*0.01995);
}

double NNfunction_ss_dLdR::synapse0x1e30de0() {
   return (neuron0x1e1e8f0()*-0.0214884);
}

double NNfunction_ss_dLdR::synapse0x1e30e20() {
   return (neuron0x1e1ec30()*-0.00594429);
}

double NNfunction_ss_dLdR::synapse0x1e30e60() {
   return (neuron0x1e1ef70()*-0.0108405);
}

double NNfunction_ss_dLdR::synapse0x1e29020() {
   return (neuron0x1e1f2b0()*0.00331537);
}

double NNfunction_ss_dLdR::synapse0x1e29060() {
   return (neuron0x1e1f5f0()*0.042789);
}

double NNfunction_ss_dLdR::synapse0x1e290a0() {
   return (neuron0x1e1f930()*0.165991);
}

double NNfunction_ss_dLdR::synapse0x1e290e0() {
   return (neuron0x1e1fc70()*0.0459292);
}

double NNfunction_ss_dLdR::synapse0x1e29120() {
   return (neuron0x1e1ffb0()*-0.0134975);
}

double NNfunction_ss_dLdR::synapse0x1e29160() {
   return (neuron0x1e202f0()*0.0695014);
}

double NNfunction_ss_dLdR::synapse0x1e291a0() {
   return (neuron0x1e20630()*0.0276186);
}

double NNfunction_ss_dLdR::synapse0x1e30ab0() {
   return (neuron0x1e20970()*-0.0256734);
}

double NNfunction_ss_dLdR::synapse0x1e30af0() {
   return (neuron0x1e20ed0()*-1.45263);
}

double NNfunction_ss_dLdR::synapse0x1e292f0() {
   return (neuron0x1e210f0()*0.0204561);
}

double NNfunction_ss_dLdR::synapse0x1e29330() {
   return (neuron0x1e21430()*0.0657655);
}

double NNfunction_ss_dLdR::synapse0x1e29370() {
   return (neuron0x1e21770()*0.0043462);
}

double NNfunction_ss_dLdR::synapse0x1e293b0() {
   return (neuron0x1e21ab0()*0.0252913);
}

double NNfunction_ss_dLdR::synapse0x1e293f0() {
   return (neuron0x1e21df0()*-0.0376173);
}

double NNfunction_ss_dLdR::synapse0x1e29430() {
   return (neuron0x1e22130()*0.0252593);
}

double NNfunction_ss_dLdR::synapse0x1e297b0() {
   return (neuron0x1e1d570()*0.380639);
}

double NNfunction_ss_dLdR::synapse0x1e297f0() {
   return (neuron0x1e1d8b0()*-0.130787);
}

double NNfunction_ss_dLdR::synapse0x1e29830() {
   return (neuron0x1e1dbf0()*-0.0627996);
}

double NNfunction_ss_dLdR::synapse0x1e29870() {
   return (neuron0x1e1df30()*-0.97099);
}

double NNfunction_ss_dLdR::synapse0x1e298b0() {
   return (neuron0x1e1e270()*0.770088);
}

double NNfunction_ss_dLdR::synapse0x1e298f0() {
   return (neuron0x1e1e5b0()*-0.412207);
}

double NNfunction_ss_dLdR::synapse0x1e29930() {
   return (neuron0x1e1e8f0()*0.0973639);
}

double NNfunction_ss_dLdR::synapse0x1e29970() {
   return (neuron0x1e1ec30()*0.474874);
}

double NNfunction_ss_dLdR::synapse0x1e299b0() {
   return (neuron0x1e1ef70()*0.533848);
}

double NNfunction_ss_dLdR::synapse0x1e299f0() {
   return (neuron0x1e1f2b0()*-0.25558);
}

double NNfunction_ss_dLdR::synapse0x1e29a30() {
   return (neuron0x1e1f5f0()*-0.267266);
}

double NNfunction_ss_dLdR::synapse0x1e29a70() {
   return (neuron0x1e1f930()*0.98649);
}

double NNfunction_ss_dLdR::synapse0x1e29ab0() {
   return (neuron0x1e1fc70()*-0.890224);
}

double NNfunction_ss_dLdR::synapse0x1e29af0() {
   return (neuron0x1e1ffb0()*0.426146);
}

double NNfunction_ss_dLdR::synapse0x1e29b30() {
   return (neuron0x1e202f0()*-1.38188);
}

double NNfunction_ss_dLdR::synapse0x1e29b70() {
   return (neuron0x1e20630()*-0.272227);
}

double NNfunction_ss_dLdR::synapse0x1e29600() {
   return (neuron0x1e20970()*0.48764);
}

double NNfunction_ss_dLdR::synapse0x1e29640() {
   return (neuron0x1e20ed0()*0.13033);
}

double NNfunction_ss_dLdR::synapse0x1e29cc0() {
   return (neuron0x1e210f0()*-1.2536);
}

double NNfunction_ss_dLdR::synapse0x1e29d00() {
   return (neuron0x1e21430()*-0.971542);
}

double NNfunction_ss_dLdR::synapse0x1e29d40() {
   return (neuron0x1e21770()*-0.193346);
}

double NNfunction_ss_dLdR::synapse0x1e29d80() {
   return (neuron0x1e21ab0()*0.457169);
}

double NNfunction_ss_dLdR::synapse0x1e29dc0() {
   return (neuron0x1e21df0()*0.568499);
}

double NNfunction_ss_dLdR::synapse0x1e29e00() {
   return (neuron0x1e22130()*-0.374657);
}

double NNfunction_ss_dLdR::synapse0x1e29fd0() {
   return (neuron0x1e1d570()*0.301621);
}

double NNfunction_ss_dLdR::synapse0x1e33060() {
   return (neuron0x1e1d8b0()*0.874959);
}

double NNfunction_ss_dLdR::synapse0x1e330a0() {
   return (neuron0x1e1dbf0()*-0.447955);
}

double NNfunction_ss_dLdR::synapse0x1e330e0() {
   return (neuron0x1e1df30()*0.986986);
}

double NNfunction_ss_dLdR::synapse0x1e33120() {
   return (neuron0x1e1e270()*-0.0170325);
}

double NNfunction_ss_dLdR::synapse0x1e33160() {
   return (neuron0x1e1e5b0()*-0.130278);
}

double NNfunction_ss_dLdR::synapse0x1e331a0() {
   return (neuron0x1e1e8f0()*-1.20051);
}

double NNfunction_ss_dLdR::synapse0x1e331e0() {
   return (neuron0x1e1ec30()*-0.540174);
}

double NNfunction_ss_dLdR::synapse0x1e33220() {
   return (neuron0x1e1ef70()*-0.94432);
}

double NNfunction_ss_dLdR::synapse0x1e33260() {
   return (neuron0x1e1f2b0()*-0.257932);
}

double NNfunction_ss_dLdR::synapse0x1e332a0() {
   return (neuron0x1e1f5f0()*0.242164);
}

double NNfunction_ss_dLdR::synapse0x1e332e0() {
   return (neuron0x1e1f930()*-0.913271);
}

double NNfunction_ss_dLdR::synapse0x1e33320() {
   return (neuron0x1e1fc70()*0.0168637);
}

double NNfunction_ss_dLdR::synapse0x1e33360() {
   return (neuron0x1e1ffb0()*-0.146203);
}

double NNfunction_ss_dLdR::synapse0x1e333a0() {
   return (neuron0x1e202f0()*0.982695);
}

double NNfunction_ss_dLdR::synapse0x1e333e0() {
   return (neuron0x1e20630()*-0.879117);
}

double NNfunction_ss_dLdR::synapse0x1e32eb0() {
   return (neuron0x1e20970()*-0.0618952);
}

double NNfunction_ss_dLdR::synapse0x1e32ef0() {
   return (neuron0x1e20ed0()*-0.258063);
}

double NNfunction_ss_dLdR::synapse0x1e33530() {
   return (neuron0x1e210f0()*1.41295);
}

double NNfunction_ss_dLdR::synapse0x1e33570() {
   return (neuron0x1e21430()*-0.544942);
}

double NNfunction_ss_dLdR::synapse0x1e335b0() {
   return (neuron0x1e21770()*0.0347016);
}

double NNfunction_ss_dLdR::synapse0x1e335f0() {
   return (neuron0x1e21ab0()*-0.132457);
}

double NNfunction_ss_dLdR::synapse0x1e33630() {
   return (neuron0x1e21df0()*-0.158301);
}

double NNfunction_ss_dLdR::synapse0x1e33670() {
   return (neuron0x1e22130()*-0.9129);
}

double NNfunction_ss_dLdR::synapse0x1e339f0() {
   return (neuron0x1e1d570()*0.396144);
}

double NNfunction_ss_dLdR::synapse0x1e33a30() {
   return (neuron0x1e1d8b0()*0.324808);
}

double NNfunction_ss_dLdR::synapse0x1e33a70() {
   return (neuron0x1e1dbf0()*1.01723);
}

double NNfunction_ss_dLdR::synapse0x1e33ab0() {
   return (neuron0x1e1df30()*-0.0244239);
}

double NNfunction_ss_dLdR::synapse0x1e33af0() {
   return (neuron0x1e1e270()*0.248623);
}

double NNfunction_ss_dLdR::synapse0x1e33b30() {
   return (neuron0x1e1e5b0()*-0.73919);
}

double NNfunction_ss_dLdR::synapse0x1e33b70() {
   return (neuron0x1e1e8f0()*-0.357933);
}

double NNfunction_ss_dLdR::synapse0x1e33bb0() {
   return (neuron0x1e1ec30()*0.433282);
}

double NNfunction_ss_dLdR::synapse0x1e33bf0() {
   return (neuron0x1e1ef70()*-0.0303675);
}

double NNfunction_ss_dLdR::synapse0x1e33c30() {
   return (neuron0x1e1f2b0()*0.471137);
}

double NNfunction_ss_dLdR::synapse0x1e33c70() {
   return (neuron0x1e1f5f0()*0.882146);
}

double NNfunction_ss_dLdR::synapse0x1e33cb0() {
   return (neuron0x1e1f930()*-2.56647);
}

double NNfunction_ss_dLdR::synapse0x1e33cf0() {
   return (neuron0x1e1fc70()*-0.196413);
}

double NNfunction_ss_dLdR::synapse0x1e33d30() {
   return (neuron0x1e1ffb0()*-0.390027);
}

double NNfunction_ss_dLdR::synapse0x1e33d70() {
   return (neuron0x1e202f0()*-1.66123);
}

double NNfunction_ss_dLdR::synapse0x1e33db0() {
   return (neuron0x1e20630()*-0.130486);
}

double NNfunction_ss_dLdR::synapse0x1e33840() {
   return (neuron0x1e20970()*0.15757);
}

double NNfunction_ss_dLdR::synapse0x1e33880() {
   return (neuron0x1e20ed0()*-0.55256);
}

double NNfunction_ss_dLdR::synapse0x1e33f00() {
   return (neuron0x1e210f0()*0.210737);
}

double NNfunction_ss_dLdR::synapse0x1e33f40() {
   return (neuron0x1e21430()*0.729382);
}

double NNfunction_ss_dLdR::synapse0x1e33f80() {
   return (neuron0x1e21770()*-0.491817);
}

double NNfunction_ss_dLdR::synapse0x1e33fc0() {
   return (neuron0x1e21ab0()*0.0700203);
}

double NNfunction_ss_dLdR::synapse0x1e34000() {
   return (neuron0x1e21df0()*0.137145);
}

double NNfunction_ss_dLdR::synapse0x1e34040() {
   return (neuron0x1e22130()*0.27286);
}

double NNfunction_ss_dLdR::synapse0x1e343c0() {
   return (neuron0x1e1d570()*-0.0652805);
}

double NNfunction_ss_dLdR::synapse0x1e34400() {
   return (neuron0x1e1d8b0()*-0.216623);
}

double NNfunction_ss_dLdR::synapse0x1e34440() {
   return (neuron0x1e1dbf0()*0.0973132);
}

double NNfunction_ss_dLdR::synapse0x1e34480() {
   return (neuron0x1e1df30()*-0.336787);
}

double NNfunction_ss_dLdR::synapse0x1e344c0() {
   return (neuron0x1e1e270()*-0.000423858);
}

double NNfunction_ss_dLdR::synapse0x1e34500() {
   return (neuron0x1e1e5b0()*-0.0143633);
}

double NNfunction_ss_dLdR::synapse0x1e34540() {
   return (neuron0x1e1e8f0()*0.185915);
}

double NNfunction_ss_dLdR::synapse0x1e34580() {
   return (neuron0x1e1ec30()*-0.0528779);
}

double NNfunction_ss_dLdR::synapse0x1e345c0() {
   return (neuron0x1e1ef70()*-0.0522486);
}

double NNfunction_ss_dLdR::synapse0x1e34600() {
   return (neuron0x1e1f2b0()*0.0143682);
}

double NNfunction_ss_dLdR::synapse0x1e34640() {
   return (neuron0x1e1f5f0()*-0.0478345);
}

double NNfunction_ss_dLdR::synapse0x1e34680() {
   return (neuron0x1e1f930()*0.0064222);
}

double NNfunction_ss_dLdR::synapse0x1e346c0() {
   return (neuron0x1e1fc70()*0.877654);
}

double NNfunction_ss_dLdR::synapse0x1e34700() {
   return (neuron0x1e1ffb0()*-0.279107);
}

double NNfunction_ss_dLdR::synapse0x1e34740() {
   return (neuron0x1e202f0()*1.08236);
}

double NNfunction_ss_dLdR::synapse0x1e34780() {
   return (neuron0x1e20630()*0.934911);
}

double NNfunction_ss_dLdR::synapse0x1e34210() {
   return (neuron0x1e20970()*-0.235007);
}

double NNfunction_ss_dLdR::synapse0x1e34250() {
   return (neuron0x1e20ed0()*-0.5522);
}

double NNfunction_ss_dLdR::synapse0x1e348d0() {
   return (neuron0x1e210f0()*0.567394);
}

double NNfunction_ss_dLdR::synapse0x1e34910() {
   return (neuron0x1e21430()*-0.116563);
}

double NNfunction_ss_dLdR::synapse0x1e34950() {
   return (neuron0x1e21770()*-0.259584);
}

double NNfunction_ss_dLdR::synapse0x1e34990() {
   return (neuron0x1e21ab0()*-0.0383894);
}

double NNfunction_ss_dLdR::synapse0x1e349d0() {
   return (neuron0x1e21df0()*-0.0194629);
}

double NNfunction_ss_dLdR::synapse0x1e34a10() {
   return (neuron0x1e22130()*-0.0191018);
}

double NNfunction_ss_dLdR::synapse0x1e34d90() {
   return (neuron0x1e1d570()*-0.537664);
}

double NNfunction_ss_dLdR::synapse0x1e34dd0() {
   return (neuron0x1e1d8b0()*-0.651033);
}

double NNfunction_ss_dLdR::synapse0x1e34e10() {
   return (neuron0x1e1dbf0()*-0.257685);
}

double NNfunction_ss_dLdR::synapse0x1e34e50() {
   return (neuron0x1e1df30()*0.453785);
}

double NNfunction_ss_dLdR::synapse0x1e34e90() {
   return (neuron0x1e1e270()*-0.463129);
}

double NNfunction_ss_dLdR::synapse0x1e34ed0() {
   return (neuron0x1e1e5b0()*0.281289);
}

double NNfunction_ss_dLdR::synapse0x1e34f10() {
   return (neuron0x1e1e8f0()*0.371504);
}

double NNfunction_ss_dLdR::synapse0x1e34f50() {
   return (neuron0x1e1ec30()*-0.0773346);
}

double NNfunction_ss_dLdR::synapse0x1e34f90() {
   return (neuron0x1e1ef70()*-0.62319);
}

double NNfunction_ss_dLdR::synapse0x1e34fd0() {
   return (neuron0x1e1f2b0()*0.158376);
}

double NNfunction_ss_dLdR::synapse0x1e35010() {
   return (neuron0x1e1f5f0()*-0.763078);
}

double NNfunction_ss_dLdR::synapse0x1e35050() {
   return (neuron0x1e1f930()*-0.158909);
}

double NNfunction_ss_dLdR::synapse0x1e35090() {
   return (neuron0x1e1fc70()*-0.881474);
}

double NNfunction_ss_dLdR::synapse0x1e350d0() {
   return (neuron0x1e1ffb0()*0.160194);
}

double NNfunction_ss_dLdR::synapse0x1e35110() {
   return (neuron0x1e202f0()*0.64828);
}

double NNfunction_ss_dLdR::synapse0x1e35150() {
   return (neuron0x1e20630()*-0.370328);
}

double NNfunction_ss_dLdR::synapse0x1e34be0() {
   return (neuron0x1e20970()*0.731724);
}

double NNfunction_ss_dLdR::synapse0x1e34c20() {
   return (neuron0x1e20ed0()*-0.350519);
}

double NNfunction_ss_dLdR::synapse0x1e352a0() {
   return (neuron0x1e210f0()*0.0591826);
}

double NNfunction_ss_dLdR::synapse0x1e352e0() {
   return (neuron0x1e21430()*-0.612835);
}

double NNfunction_ss_dLdR::synapse0x1e35320() {
   return (neuron0x1e21770()*0.62594);
}

double NNfunction_ss_dLdR::synapse0x1e35360() {
   return (neuron0x1e21ab0()*-0.458866);
}

double NNfunction_ss_dLdR::synapse0x1e353a0() {
   return (neuron0x1e21df0()*0.2512);
}

double NNfunction_ss_dLdR::synapse0x1e353e0() {
   return (neuron0x1e22130()*-0.401377);
}

double NNfunction_ss_dLdR::synapse0x1e35760() {
   return (neuron0x1e1d570()*0.0722749);
}

double NNfunction_ss_dLdR::synapse0x1e357a0() {
   return (neuron0x1e1d8b0()*1.53844);
}

double NNfunction_ss_dLdR::synapse0x1e357e0() {
   return (neuron0x1e1dbf0()*-0.340153);
}

double NNfunction_ss_dLdR::synapse0x1e35820() {
   return (neuron0x1e1df30()*0.407626);
}

double NNfunction_ss_dLdR::synapse0x1e35860() {
   return (neuron0x1e1e270()*-0.79113);
}

double NNfunction_ss_dLdR::synapse0x1e358a0() {
   return (neuron0x1e1e5b0()*-0.526567);
}

double NNfunction_ss_dLdR::synapse0x1e358e0() {
   return (neuron0x1e1e8f0()*0.744163);
}

double NNfunction_ss_dLdR::synapse0x1e35920() {
   return (neuron0x1e1ec30()*0.225569);
}

double NNfunction_ss_dLdR::synapse0x1e35960() {
   return (neuron0x1e1ef70()*0.452768);
}

double NNfunction_ss_dLdR::synapse0x1e359a0() {
   return (neuron0x1e1f2b0()*0.60713);
}

double NNfunction_ss_dLdR::synapse0x1e359e0() {
   return (neuron0x1e1f5f0()*0.747572);
}

double NNfunction_ss_dLdR::synapse0x1e35a20() {
   return (neuron0x1e1f930()*-0.987244);
}

double NNfunction_ss_dLdR::synapse0x1e35a60() {
   return (neuron0x1e1fc70()*-0.0979991);
}

double NNfunction_ss_dLdR::synapse0x1e35aa0() {
   return (neuron0x1e1ffb0()*0.556358);
}

double NNfunction_ss_dLdR::synapse0x1e35ae0() {
   return (neuron0x1e202f0()*-1.11933);
}

double NNfunction_ss_dLdR::synapse0x1e35b20() {
   return (neuron0x1e20630()*0.013916);
}

double NNfunction_ss_dLdR::synapse0x1e355b0() {
   return (neuron0x1e20970()*0.926931);
}

double NNfunction_ss_dLdR::synapse0x1e355f0() {
   return (neuron0x1e20ed0()*-0.547798);
}

double NNfunction_ss_dLdR::synapse0x1e35c70() {
   return (neuron0x1e210f0()*-0.528293);
}

double NNfunction_ss_dLdR::synapse0x1e35cb0() {
   return (neuron0x1e21430()*-0.503576);
}

double NNfunction_ss_dLdR::synapse0x1e35cf0() {
   return (neuron0x1e21770()*-0.155453);
}

double NNfunction_ss_dLdR::synapse0x1e35d30() {
   return (neuron0x1e21ab0()*-0.753002);
}

double NNfunction_ss_dLdR::synapse0x1e35d70() {
   return (neuron0x1e21df0()*0.325485);
}

double NNfunction_ss_dLdR::synapse0x1e35db0() {
   return (neuron0x1e22130()*0.258859);
}

double NNfunction_ss_dLdR::synapse0x1e36130() {
   return (neuron0x1e1d570()*0.0264742);
}

double NNfunction_ss_dLdR::synapse0x1e36170() {
   return (neuron0x1e1d8b0()*0.449312);
}

double NNfunction_ss_dLdR::synapse0x1e361b0() {
   return (neuron0x1e1dbf0()*-1.10901);
}

double NNfunction_ss_dLdR::synapse0x1e361f0() {
   return (neuron0x1e1df30()*-0.309186);
}

double NNfunction_ss_dLdR::synapse0x1e36230() {
   return (neuron0x1e1e270()*0.0385847);
}

double NNfunction_ss_dLdR::synapse0x1e36270() {
   return (neuron0x1e1e5b0()*-0.561074);
}

double NNfunction_ss_dLdR::synapse0x1e362b0() {
   return (neuron0x1e1e8f0()*0.287806);
}

double NNfunction_ss_dLdR::synapse0x1e362f0() {
   return (neuron0x1e1ec30()*-0.21856);
}

double NNfunction_ss_dLdR::synapse0x1e36330() {
   return (neuron0x1e1ef70()*0.44397);
}

double NNfunction_ss_dLdR::synapse0x1e36370() {
   return (neuron0x1e1f2b0()*-0.0531569);
}

double NNfunction_ss_dLdR::synapse0x1e363b0() {
   return (neuron0x1e1f5f0()*-0.289716);
}

double NNfunction_ss_dLdR::synapse0x1e363f0() {
   return (neuron0x1e1f930()*1.6048);
}

double NNfunction_ss_dLdR::synapse0x1e36430() {
   return (neuron0x1e1fc70()*0.864219);
}

double NNfunction_ss_dLdR::synapse0x1e36470() {
   return (neuron0x1e1ffb0()*0.372877);
}

double NNfunction_ss_dLdR::synapse0x1e364b0() {
   return (neuron0x1e202f0()*1.09213);
}

double NNfunction_ss_dLdR::synapse0x1e364f0() {
   return (neuron0x1e20630()*-1.50378);
}

double NNfunction_ss_dLdR::synapse0x1e35f80() {
   return (neuron0x1e20970()*0.0529522);
}

double NNfunction_ss_dLdR::synapse0x1e35fc0() {
   return (neuron0x1e20ed0()*0.8678);
}

double NNfunction_ss_dLdR::synapse0x1e36640() {
   return (neuron0x1e210f0()*0.506165);
}

double NNfunction_ss_dLdR::synapse0x1e36680() {
   return (neuron0x1e21430()*0.530946);
}

double NNfunction_ss_dLdR::synapse0x1e366c0() {
   return (neuron0x1e21770()*0.758142);
}

double NNfunction_ss_dLdR::synapse0x1e36700() {
   return (neuron0x1e21ab0()*-0.176742);
}

double NNfunction_ss_dLdR::synapse0x1e36740() {
   return (neuron0x1e21df0()*0.692402);
}

double NNfunction_ss_dLdR::synapse0x1e36780() {
   return (neuron0x1e22130()*-0.0345795);
}

double NNfunction_ss_dLdR::synapse0x1e36b00() {
   return (neuron0x1e1d570()*0.00359951);
}

double NNfunction_ss_dLdR::synapse0x1e36b40() {
   return (neuron0x1e1d8b0()*0.00860058);
}

double NNfunction_ss_dLdR::synapse0x1e36b80() {
   return (neuron0x1e1dbf0()*-0.0140164);
}

double NNfunction_ss_dLdR::synapse0x1e36bc0() {
   return (neuron0x1e1df30()*-3.33541);
}

double NNfunction_ss_dLdR::synapse0x1e36c00() {
   return (neuron0x1e1e270()*0.015184);
}

double NNfunction_ss_dLdR::synapse0x1e36c40() {
   return (neuron0x1e1e5b0()*-0.0444127);
}

double NNfunction_ss_dLdR::synapse0x1e36c80() {
   return (neuron0x1e1e8f0()*0.042167);
}

double NNfunction_ss_dLdR::synapse0x1e36cc0() {
   return (neuron0x1e1ec30()*-0.00303549);
}

double NNfunction_ss_dLdR::synapse0x1e36d00() {
   return (neuron0x1e1ef70()*0.0114412);
}

double NNfunction_ss_dLdR::synapse0x1e36d40() {
   return (neuron0x1e1f2b0()*-0.0254336);
}

double NNfunction_ss_dLdR::synapse0x1e36d80() {
   return (neuron0x1e1f5f0()*-0.035597);
}

double NNfunction_ss_dLdR::synapse0x1e36dc0() {
   return (neuron0x1e1f930()*1.76357);
}

double NNfunction_ss_dLdR::synapse0x1e36e00() {
   return (neuron0x1e1fc70()*-0.0657253);
}

double NNfunction_ss_dLdR::synapse0x1e36e40() {
   return (neuron0x1e1ffb0()*0.0226206);
}

double NNfunction_ss_dLdR::synapse0x1e36e80() {
   return (neuron0x1e202f0()*0.0175238);
}

double NNfunction_ss_dLdR::synapse0x1e36ec0() {
   return (neuron0x1e20630()*-0.00443148);
}

double NNfunction_ss_dLdR::synapse0x1e36950() {
   return (neuron0x1e20970()*0.0323703);
}

double NNfunction_ss_dLdR::synapse0x1e36990() {
   return (neuron0x1e20ed0()*-0.0963043);
}

double NNfunction_ss_dLdR::synapse0x1e37010() {
   return (neuron0x1e210f0()*-0.0780869);
}

double NNfunction_ss_dLdR::synapse0x1e37050() {
   return (neuron0x1e21430()*-0.0945916);
}

double NNfunction_ss_dLdR::synapse0x1e37090() {
   return (neuron0x1e21770()*0.0360045);
}

double NNfunction_ss_dLdR::synapse0x1e370d0() {
   return (neuron0x1e21ab0()*0.0240119);
}

double NNfunction_ss_dLdR::synapse0x1e37110() {
   return (neuron0x1e21df0()*0.0156858);
}

double NNfunction_ss_dLdR::synapse0x1e37150() {
   return (neuron0x1e22130()*-0.0526534);
}

double NNfunction_ss_dLdR::synapse0x1e374d0() {
   return (neuron0x1e1d570()*0.132423);
}

double NNfunction_ss_dLdR::synapse0x1e37510() {
   return (neuron0x1e1d8b0()*0.491094);
}

double NNfunction_ss_dLdR::synapse0x1e37550() {
   return (neuron0x1e1dbf0()*0.304964);
}

double NNfunction_ss_dLdR::synapse0x1e37590() {
   return (neuron0x1e1df30()*-0.0457792);
}

double NNfunction_ss_dLdR::synapse0x1e375d0() {
   return (neuron0x1e1e270()*0.225146);
}

double NNfunction_ss_dLdR::synapse0x1e37610() {
   return (neuron0x1e1e5b0()*-0.574286);
}

double NNfunction_ss_dLdR::synapse0x1e37650() {
   return (neuron0x1e1e8f0()*-0.038473);
}

double NNfunction_ss_dLdR::synapse0x1e37690() {
   return (neuron0x1e1ec30()*0.919597);
}

double NNfunction_ss_dLdR::synapse0x1e376d0() {
   return (neuron0x1e1ef70()*0.264602);
}

double NNfunction_ss_dLdR::synapse0x1e37710() {
   return (neuron0x1e1f2b0()*-0.328412);
}

double NNfunction_ss_dLdR::synapse0x1e37750() {
   return (neuron0x1e1f5f0()*0.0116274);
}

double NNfunction_ss_dLdR::synapse0x1e37790() {
   return (neuron0x1e1f930()*0.841486);
}

double NNfunction_ss_dLdR::synapse0x1e377d0() {
   return (neuron0x1e1fc70()*1.46236);
}

double NNfunction_ss_dLdR::synapse0x1e37810() {
   return (neuron0x1e1ffb0()*0.347836);
}

double NNfunction_ss_dLdR::synapse0x1e37850() {
   return (neuron0x1e202f0()*-0.212464);
}

double NNfunction_ss_dLdR::synapse0x1e37890() {
   return (neuron0x1e20630()*0.156961);
}

double NNfunction_ss_dLdR::synapse0x1e37320() {
   return (neuron0x1e20970()*-0.215293);
}

double NNfunction_ss_dLdR::synapse0x1e37360() {
   return (neuron0x1e20ed0()*0.127716);
}

double NNfunction_ss_dLdR::synapse0x1e379e0() {
   return (neuron0x1e210f0()*-0.3977);
}

double NNfunction_ss_dLdR::synapse0x1e37a20() {
   return (neuron0x1e21430()*0.480803);
}

double NNfunction_ss_dLdR::synapse0x1e37a60() {
   return (neuron0x1e21770()*-0.711462);
}

double NNfunction_ss_dLdR::synapse0x1e37aa0() {
   return (neuron0x1e21ab0()*-0.193527);
}

double NNfunction_ss_dLdR::synapse0x1e37ae0() {
   return (neuron0x1e21df0()*-0.27043);
}

double NNfunction_ss_dLdR::synapse0x1e37b20() {
   return (neuron0x1e22130()*-0.104791);
}

double NNfunction_ss_dLdR::synapse0x1e37ea0() {
   return (neuron0x1e1d570()*0.0094486);
}

double NNfunction_ss_dLdR::synapse0x1e2c470() {
   return (neuron0x1e1d8b0()*0.0128254);
}

double NNfunction_ss_dLdR::synapse0x1e2c4b0() {
   return (neuron0x1e1dbf0()*-0.01371);
}

double NNfunction_ss_dLdR::synapse0x1e2c4f0() {
   return (neuron0x1e1df30()*-6.80223);
}

double NNfunction_ss_dLdR::synapse0x1e2c740() {
   return (neuron0x1e1e270()*-0.00382065);
}

double NNfunction_ss_dLdR::synapse0x1e2c780() {
   return (neuron0x1e1e5b0()*0.0127167);
}

double NNfunction_ss_dLdR::synapse0x1e2c7c0() {
   return (neuron0x1e1e8f0()*-0.0290511);
}

double NNfunction_ss_dLdR::synapse0x1e2ca10() {
   return (neuron0x1e1ec30()*-0.00767428);
}

double NNfunction_ss_dLdR::synapse0x1e2ca50() {
   return (neuron0x1e1ef70()*0.00798163);
}

double NNfunction_ss_dLdR::synapse0x1e2cca0() {
   return (neuron0x1e1f2b0()*0.000686435);
}

double NNfunction_ss_dLdR::synapse0x1e2cce0() {
   return (neuron0x1e1f5f0()*0.0299135);
}

double NNfunction_ss_dLdR::synapse0x1e2cd20() {
   return (neuron0x1e1f930()*0.265841);
}

double NNfunction_ss_dLdR::synapse0x1e2cf70() {
   return (neuron0x1e1fc70()*0.0642772);
}

double NNfunction_ss_dLdR::synapse0x1e2cfb0() {
   return (neuron0x1e1ffb0()*0.0141099);
}

double NNfunction_ss_dLdR::synapse0x1e2d200() {
   return (neuron0x1e202f0()*0.0161552);
}

double NNfunction_ss_dLdR::synapse0x1e2d240() {
   return (neuron0x1e20630()*-0.00741325);
}

double NNfunction_ss_dLdR::synapse0x1e37cf0() {
   return (neuron0x1e20970()*-0.0182244);
}

double NNfunction_ss_dLdR::synapse0x1e37d30() {
   return (neuron0x1e20ed0()*0.209629);
}

double NNfunction_ss_dLdR::synapse0x1e2d390() {
   return (neuron0x1e210f0()*0.0401502);
}

double NNfunction_ss_dLdR::synapse0x1e2d8a0() {
   return (neuron0x1e21430()*0.0184875);
}

double NNfunction_ss_dLdR::synapse0x1e2d8e0() {
   return (neuron0x1e21770()*0.00590961);
}

double NNfunction_ss_dLdR::synapse0x1e2d920() {
   return (neuron0x1e21ab0()*0.0122044);
}

double NNfunction_ss_dLdR::synapse0x1e2db70() {
   return (neuron0x1e21df0()*-0.00918987);
}

double NNfunction_ss_dLdR::synapse0x1e2dbb0() {
   return (neuron0x1e22130()*0.00706698);
}

double NNfunction_ss_dLdR::synapse0x1e2d460() {
   return (neuron0x1e1d570()*0.706118);
}

double NNfunction_ss_dLdR::synapse0x1e2d4a0() {
   return (neuron0x1e1d8b0()*0.262078);
}

double NNfunction_ss_dLdR::synapse0x1e2d4e0() {
   return (neuron0x1e1dbf0()*-0.454494);
}

double NNfunction_ss_dLdR::synapse0x1e2d520() {
   return (neuron0x1e1df30()*-0.422092);
}

double NNfunction_ss_dLdR::synapse0x1e2dea0() {
   return (neuron0x1e1e270()*0.70744);
}

double NNfunction_ss_dLdR::synapse0x1e3a1f0() {
   return (neuron0x1e1e5b0()*-0.766005);
}

double NNfunction_ss_dLdR::synapse0x1e3a230() {
   return (neuron0x1e1e8f0()*-0.410218);
}

double NNfunction_ss_dLdR::synapse0x1e3a270() {
   return (neuron0x1e1ec30()*0.0326897);
}

double NNfunction_ss_dLdR::synapse0x1e3a2b0() {
   return (neuron0x1e1ef70()*0.517919);
}

double NNfunction_ss_dLdR::synapse0x1e3a2f0() {
   return (neuron0x1e1f2b0()*0.404757);
}

double NNfunction_ss_dLdR::synapse0x1e3a330() {
   return (neuron0x1e1f5f0()*-0.206625);
}

double NNfunction_ss_dLdR::synapse0x1e3a370() {
   return (neuron0x1e1f930()*-0.603141);
}

double NNfunction_ss_dLdR::synapse0x1e3a3b0() {
   return (neuron0x1e1fc70()*0.794758);
}

double NNfunction_ss_dLdR::synapse0x1e3a3f0() {
   return (neuron0x1e1ffb0()*1.27676);
}

double NNfunction_ss_dLdR::synapse0x1e3a430() {
   return (neuron0x1e202f0()*-0.138385);
}

double NNfunction_ss_dLdR::synapse0x1e3a470() {
   return (neuron0x1e20630()*-0.11647);
}

double NNfunction_ss_dLdR::synapse0x1e2dd80() {
   return (neuron0x1e20970()*0.564459);
}

double NNfunction_ss_dLdR::synapse0x1e2ddc0() {
   return (neuron0x1e20ed0()*-0.0305245);
}

double NNfunction_ss_dLdR::synapse0x1e3a5c0() {
   return (neuron0x1e210f0()*0.164128);
}

double NNfunction_ss_dLdR::synapse0x1e3a600() {
   return (neuron0x1e21430()*-0.342525);
}

double NNfunction_ss_dLdR::synapse0x1e3a640() {
   return (neuron0x1e21770()*0.491681);
}

double NNfunction_ss_dLdR::synapse0x1e3a680() {
   return (neuron0x1e21ab0()*0.363441);
}

double NNfunction_ss_dLdR::synapse0x1e3a6c0() {
   return (neuron0x1e21df0()*-0.982525);
}

double NNfunction_ss_dLdR::synapse0x1e3a700() {
   return (neuron0x1e22130()*0.485843);
}

double NNfunction_ss_dLdR::synapse0x1e3aa80() {
   return (neuron0x1e1d570()*-0.350882);
}

double NNfunction_ss_dLdR::synapse0x1e3aac0() {
   return (neuron0x1e1d8b0()*0.762258);
}

double NNfunction_ss_dLdR::synapse0x1e3ab00() {
   return (neuron0x1e1dbf0()*-0.762624);
}

double NNfunction_ss_dLdR::synapse0x1e3ab40() {
   return (neuron0x1e1df30()*0.822374);
}

double NNfunction_ss_dLdR::synapse0x1e3ab80() {
   return (neuron0x1e1e270()*-0.0900891);
}

double NNfunction_ss_dLdR::synapse0x1e3abc0() {
   return (neuron0x1e1e5b0()*-0.822287);
}

double NNfunction_ss_dLdR::synapse0x1e3ac00() {
   return (neuron0x1e1e8f0()*0.203459);
}

double NNfunction_ss_dLdR::synapse0x1e3ac40() {
   return (neuron0x1e1ec30()*-0.146823);
}

double NNfunction_ss_dLdR::synapse0x1e3ac80() {
   return (neuron0x1e1ef70()*0.432229);
}

double NNfunction_ss_dLdR::synapse0x1e3acc0() {
   return (neuron0x1e1f2b0()*0.25869);
}

double NNfunction_ss_dLdR::synapse0x1e3ad00() {
   return (neuron0x1e1f5f0()*-0.00337846);
}

double NNfunction_ss_dLdR::synapse0x1e3ad40() {
   return (neuron0x1e1f930()*1.86197);
}

double NNfunction_ss_dLdR::synapse0x1e3ad80() {
   return (neuron0x1e1fc70()*0.0493778);
}

double NNfunction_ss_dLdR::synapse0x1e3adc0() {
   return (neuron0x1e1ffb0()*0.724643);
}

double NNfunction_ss_dLdR::synapse0x1e3ae00() {
   return (neuron0x1e202f0()*0.245781);
}

double NNfunction_ss_dLdR::synapse0x1e3ae40() {
   return (neuron0x1e20630()*0.135272);
}

double NNfunction_ss_dLdR::synapse0x1e3a8d0() {
   return (neuron0x1e20970()*-0.346118);
}

double NNfunction_ss_dLdR::synapse0x1e3a910() {
   return (neuron0x1e20ed0()*1.22931);
}

double NNfunction_ss_dLdR::synapse0x1e3af90() {
   return (neuron0x1e210f0()*0.622197);
}

double NNfunction_ss_dLdR::synapse0x1e3afd0() {
   return (neuron0x1e21430()*0.543764);
}

double NNfunction_ss_dLdR::synapse0x1e3b010() {
   return (neuron0x1e21770()*0.5327);
}

double NNfunction_ss_dLdR::synapse0x1e3b050() {
   return (neuron0x1e21ab0()*0.229515);
}

double NNfunction_ss_dLdR::synapse0x1e3b090() {
   return (neuron0x1e21df0()*0.950671);
}

double NNfunction_ss_dLdR::synapse0x1e3b0d0() {
   return (neuron0x1e22130()*0.245171);
}

double NNfunction_ss_dLdR::synapse0x1e3b450() {
   return (neuron0x1e1d570()*0.0157199);
}

double NNfunction_ss_dLdR::synapse0x1e3b490() {
   return (neuron0x1e1d8b0()*-0.000369504);
}

double NNfunction_ss_dLdR::synapse0x1e3b4d0() {
   return (neuron0x1e1dbf0()*-0.013107);
}

double NNfunction_ss_dLdR::synapse0x1e3b510() {
   return (neuron0x1e1df30()*-0.0294473);
}

double NNfunction_ss_dLdR::synapse0x1e3b550() {
   return (neuron0x1e1e270()*-0.0020237);
}

double NNfunction_ss_dLdR::synapse0x1e3b590() {
   return (neuron0x1e1e5b0()*-0.0071978);
}

double NNfunction_ss_dLdR::synapse0x1e3b5d0() {
   return (neuron0x1e1e8f0()*-0.0120823);
}

double NNfunction_ss_dLdR::synapse0x1e3b610() {
   return (neuron0x1e1ec30()*-0.00098928);
}

double NNfunction_ss_dLdR::synapse0x1e3b650() {
   return (neuron0x1e1ef70()*0.00946082);
}

double NNfunction_ss_dLdR::synapse0x1e3b690() {
   return (neuron0x1e1f2b0()*-0.0054398);
}

double NNfunction_ss_dLdR::synapse0x1e3b6d0() {
   return (neuron0x1e1f5f0()*-0.00915335);
}

double NNfunction_ss_dLdR::synapse0x1e3b710() {
   return (neuron0x1e1f930()*-1.38226);
}

double NNfunction_ss_dLdR::synapse0x1e3b750() {
   return (neuron0x1e1fc70()*-0.00408814);
}

double NNfunction_ss_dLdR::synapse0x1e3b790() {
   return (neuron0x1e1ffb0()*0.00637978);
}

double NNfunction_ss_dLdR::synapse0x1e3b7d0() {
   return (neuron0x1e202f0()*-0.0229237);
}

double NNfunction_ss_dLdR::synapse0x1e3b810() {
   return (neuron0x1e20630()*-0.0112268);
}

double NNfunction_ss_dLdR::synapse0x1e3b2a0() {
   return (neuron0x1e20970()*0.00231021);
}

double NNfunction_ss_dLdR::synapse0x1e3b2e0() {
   return (neuron0x1e20ed0()*-0.100319);
}

double NNfunction_ss_dLdR::synapse0x1e3b960() {
   return (neuron0x1e210f0()*-0.0111136);
}

double NNfunction_ss_dLdR::synapse0x1e3b9a0() {
   return (neuron0x1e21430()*-0.00480008);
}

double NNfunction_ss_dLdR::synapse0x1e3b9e0() {
   return (neuron0x1e21770()*0.0046343);
}

double NNfunction_ss_dLdR::synapse0x1e3ba20() {
   return (neuron0x1e21ab0()*3.20091e-06);
}

double NNfunction_ss_dLdR::synapse0x1e3ba60() {
   return (neuron0x1e21df0()*0.00287823);
}

double NNfunction_ss_dLdR::synapse0x1e3baa0() {
   return (neuron0x1e22130()*-0.019518);
}

double NNfunction_ss_dLdR::synapse0x1e3be20() {
   return (neuron0x1e1d570()*0.0739908);
}

double NNfunction_ss_dLdR::synapse0x1e3be60() {
   return (neuron0x1e1d8b0()*0.132579);
}

double NNfunction_ss_dLdR::synapse0x1e3bea0() {
   return (neuron0x1e1dbf0()*-0.0666766);
}

double NNfunction_ss_dLdR::synapse0x1e3bee0() {
   return (neuron0x1e1df30()*-0.0806559);
}

double NNfunction_ss_dLdR::synapse0x1e3bf20() {
   return (neuron0x1e1e270()*-0.113895);
}

double NNfunction_ss_dLdR::synapse0x1e3bf60() {
   return (neuron0x1e1e5b0()*0.540938);
}

double NNfunction_ss_dLdR::synapse0x1e3bfa0() {
   return (neuron0x1e1e8f0()*-0.516492);
}

double NNfunction_ss_dLdR::synapse0x1e3bfe0() {
   return (neuron0x1e1ec30()*-0.828821);
}

double NNfunction_ss_dLdR::synapse0x1e3c020() {
   return (neuron0x1e1ef70()*-0.425585);
}

double NNfunction_ss_dLdR::synapse0x1e3c060() {
   return (neuron0x1e1f2b0()*0.214401);
}

double NNfunction_ss_dLdR::synapse0x1e3c0a0() {
   return (neuron0x1e1f5f0()*-1.036);
}

double NNfunction_ss_dLdR::synapse0x1e3c0e0() {
   return (neuron0x1e1f930()*-0.867527);
}

double NNfunction_ss_dLdR::synapse0x1e3c120() {
   return (neuron0x1e1fc70()*0.0707354);
}

double NNfunction_ss_dLdR::synapse0x1e3c160() {
   return (neuron0x1e1ffb0()*-0.526762);
}

double NNfunction_ss_dLdR::synapse0x1e3c1a0() {
   return (neuron0x1e202f0()*-0.840737);
}

double NNfunction_ss_dLdR::synapse0x1e3c1e0() {
   return (neuron0x1e20630()*-0.427896);
}

double NNfunction_ss_dLdR::synapse0x1e3bc70() {
   return (neuron0x1e20970()*-0.806203);
}

double NNfunction_ss_dLdR::synapse0x1e3bcb0() {
   return (neuron0x1e20ed0()*-1.12085);
}

double NNfunction_ss_dLdR::synapse0x1e3c330() {
   return (neuron0x1e210f0()*0.154625);
}

double NNfunction_ss_dLdR::synapse0x1e3c370() {
   return (neuron0x1e21430()*1.06685);
}

double NNfunction_ss_dLdR::synapse0x1e3c3b0() {
   return (neuron0x1e21770()*-0.545141);
}

double NNfunction_ss_dLdR::synapse0x1e3c3f0() {
   return (neuron0x1e21ab0()*-0.924588);
}

double NNfunction_ss_dLdR::synapse0x1e3c430() {
   return (neuron0x1e21df0()*-0.577872);
}

double NNfunction_ss_dLdR::synapse0x1e3c470() {
   return (neuron0x1e22130()*-0.147748);
}

double NNfunction_ss_dLdR::synapse0x1e3c7f0() {
   return (neuron0x1e1d570()*-0.0226913);
}

double NNfunction_ss_dLdR::synapse0x1e3c830() {
   return (neuron0x1e1d8b0()*0.00514397);
}

double NNfunction_ss_dLdR::synapse0x1e3c870() {
   return (neuron0x1e1dbf0()*-0.0286585);
}

double NNfunction_ss_dLdR::synapse0x1e3c8b0() {
   return (neuron0x1e1df30()*-1.61907);
}

double NNfunction_ss_dLdR::synapse0x1e3c8f0() {
   return (neuron0x1e1e270()*0.00158109);
}

double NNfunction_ss_dLdR::synapse0x1e3c930() {
   return (neuron0x1e1e5b0()*-0.00740686);
}

double NNfunction_ss_dLdR::synapse0x1e3c970() {
   return (neuron0x1e1e8f0()*0.0104867);
}

double NNfunction_ss_dLdR::synapse0x1e3c9b0() {
   return (neuron0x1e1ec30()*-0.014454);
}

double NNfunction_ss_dLdR::synapse0x1e3c9f0() {
   return (neuron0x1e1ef70()*-0.00112442);
}

double NNfunction_ss_dLdR::synapse0x1e3ca30() {
   return (neuron0x1e1f2b0()*0.00939258);
}

double NNfunction_ss_dLdR::synapse0x1e3ca70() {
   return (neuron0x1e1f5f0()*0.0180548);
}

double NNfunction_ss_dLdR::synapse0x1e3cab0() {
   return (neuron0x1e1f930()*0.0260373);
}

double NNfunction_ss_dLdR::synapse0x1e3caf0() {
   return (neuron0x1e1fc70()*-0.0196093);
}

double NNfunction_ss_dLdR::synapse0x1e3cb30() {
   return (neuron0x1e1ffb0()*0.0255907);
}

double NNfunction_ss_dLdR::synapse0x1e3cb70() {
   return (neuron0x1e202f0()*-0.0234724);
}

double NNfunction_ss_dLdR::synapse0x1e3cbb0() {
   return (neuron0x1e20630()*-0.0264838);
}

double NNfunction_ss_dLdR::synapse0x1e3c640() {
   return (neuron0x1e20970()*0.0315261);
}

double NNfunction_ss_dLdR::synapse0x1e3c680() {
   return (neuron0x1e20ed0()*-0.0458207);
}

double NNfunction_ss_dLdR::synapse0x1e3cd00() {
   return (neuron0x1e210f0()*-0.00824413);
}

double NNfunction_ss_dLdR::synapse0x1e3cd40() {
   return (neuron0x1e21430()*0.00382397);
}

double NNfunction_ss_dLdR::synapse0x1e3cd80() {
   return (neuron0x1e21770()*0.00789657);
}

double NNfunction_ss_dLdR::synapse0x1e3cdc0() {
   return (neuron0x1e21ab0()*0.0233804);
}

double NNfunction_ss_dLdR::synapse0x1e3ce00() {
   return (neuron0x1e21df0()*-0.00749212);
}

double NNfunction_ss_dLdR::synapse0x1e3ce40() {
   return (neuron0x1e22130()*0.0191033);
}

double NNfunction_ss_dLdR::synapse0x1e3d1c0() {
   return (neuron0x1e1d570()*0.324121);
}

double NNfunction_ss_dLdR::synapse0x1e3d200() {
   return (neuron0x1e1d8b0()*-0.754584);
}

double NNfunction_ss_dLdR::synapse0x1e3d240() {
   return (neuron0x1e1dbf0()*2.0501);
}

double NNfunction_ss_dLdR::synapse0x1e3d280() {
   return (neuron0x1e1df30()*0.475451);
}

double NNfunction_ss_dLdR::synapse0x1e3d2c0() {
   return (neuron0x1e1e270()*-0.555563);
}

double NNfunction_ss_dLdR::synapse0x1e3d300() {
   return (neuron0x1e1e5b0()*0.498387);
}

double NNfunction_ss_dLdR::synapse0x1e3d340() {
   return (neuron0x1e1e8f0()*0.0172614);
}

double NNfunction_ss_dLdR::synapse0x1e3d380() {
   return (neuron0x1e1ec30()*-0.707492);
}

double NNfunction_ss_dLdR::synapse0x1e3d3c0() {
   return (neuron0x1e1ef70()*-0.0726544);
}

double NNfunction_ss_dLdR::synapse0x1e3d400() {
   return (neuron0x1e1f2b0()*-0.123079);
}

double NNfunction_ss_dLdR::synapse0x1e3d440() {
   return (neuron0x1e1f5f0()*-1.12902);
}

double NNfunction_ss_dLdR::synapse0x1e3d480() {
   return (neuron0x1e1f930()*0.418033);
}

double NNfunction_ss_dLdR::synapse0x1e3d4c0() {
   return (neuron0x1e1fc70()*0.00753243);
}

double NNfunction_ss_dLdR::synapse0x1e3d500() {
   return (neuron0x1e1ffb0()*-0.514209);
}

double NNfunction_ss_dLdR::synapse0x1e3d540() {
   return (neuron0x1e202f0()*1.26292);
}

double NNfunction_ss_dLdR::synapse0x1e3d580() {
   return (neuron0x1e20630()*0.203708);
}

double NNfunction_ss_dLdR::synapse0x1e3d010() {
   return (neuron0x1e20970()*0.404408);
}

double NNfunction_ss_dLdR::synapse0x1e3d050() {
   return (neuron0x1e20ed0()*0.371243);
}

double NNfunction_ss_dLdR::synapse0x1e3d6d0() {
   return (neuron0x1e210f0()*-0.554402);
}

double NNfunction_ss_dLdR::synapse0x1e3d710() {
   return (neuron0x1e21430()*0.784735);
}

double NNfunction_ss_dLdR::synapse0x1e3d750() {
   return (neuron0x1e21770()*0.30946);
}

double NNfunction_ss_dLdR::synapse0x1e3d790() {
   return (neuron0x1e21ab0()*0.196483);
}

double NNfunction_ss_dLdR::synapse0x1e3d7d0() {
   return (neuron0x1e21df0()*0.155766);
}

double NNfunction_ss_dLdR::synapse0x1e3d810() {
   return (neuron0x1e22130()*-0.355179);
}

double NNfunction_ss_dLdR::synapse0x1e3db90() {
   return (neuron0x1e1d570()*-0.65914);
}

double NNfunction_ss_dLdR::synapse0x1e3dbd0() {
   return (neuron0x1e1d8b0()*-0.272346);
}

double NNfunction_ss_dLdR::synapse0x1e3dc10() {
   return (neuron0x1e1dbf0()*-0.893365);
}

double NNfunction_ss_dLdR::synapse0x1e3dc50() {
   return (neuron0x1e1df30()*-0.0473343);
}

double NNfunction_ss_dLdR::synapse0x1e3dc90() {
   return (neuron0x1e1e270()*-0.509651);
}

double NNfunction_ss_dLdR::synapse0x1e3dcd0() {
   return (neuron0x1e1e5b0()*0.113423);
}

double NNfunction_ss_dLdR::synapse0x1e3dd10() {
   return (neuron0x1e1e8f0()*0.139925);
}

double NNfunction_ss_dLdR::synapse0x1e3dd50() {
   return (neuron0x1e1ec30()*-0.376633);
}

double NNfunction_ss_dLdR::synapse0x1e3dd90() {
   return (neuron0x1e1ef70()*0.502134);
}

double NNfunction_ss_dLdR::synapse0x1e3ddd0() {
   return (neuron0x1e1f2b0()*0.0295917);
}

double NNfunction_ss_dLdR::synapse0x1e3de10() {
   return (neuron0x1e1f5f0()*1.52271);
}

double NNfunction_ss_dLdR::synapse0x1e3de50() {
   return (neuron0x1e1f930()*0.583537);
}

double NNfunction_ss_dLdR::synapse0x1e3de90() {
   return (neuron0x1e1fc70()*1.45495);
}

double NNfunction_ss_dLdR::synapse0x1e3ded0() {
   return (neuron0x1e1ffb0()*0.603263);
}

double NNfunction_ss_dLdR::synapse0x1e3df10() {
   return (neuron0x1e202f0()*0.079542);
}

double NNfunction_ss_dLdR::synapse0x1e3df50() {
   return (neuron0x1e20630()*-1.29027);
}

double NNfunction_ss_dLdR::synapse0x1e3d9e0() {
   return (neuron0x1e20970()*-0.265592);
}

double NNfunction_ss_dLdR::synapse0x1e3da20() {
   return (neuron0x1e20ed0()*0.868389);
}

double NNfunction_ss_dLdR::synapse0x1e3e0a0() {
   return (neuron0x1e210f0()*-0.27035);
}

double NNfunction_ss_dLdR::synapse0x1e3e0e0() {
   return (neuron0x1e21430()*-0.671138);
}

double NNfunction_ss_dLdR::synapse0x1e3e120() {
   return (neuron0x1e21770()*-0.495375);
}

double NNfunction_ss_dLdR::synapse0x1e3e160() {
   return (neuron0x1e21ab0()*0.697364);
}

double NNfunction_ss_dLdR::synapse0x1e3e1a0() {
   return (neuron0x1e21df0()*-0.444082);
}

double NNfunction_ss_dLdR::synapse0x1e3e1e0() {
   return (neuron0x1e22130()*0.126282);
}

double NNfunction_ss_dLdR::synapse0x1e3e560() {
   return (neuron0x1e1d570()*0.00643246);
}

double NNfunction_ss_dLdR::synapse0x1e3e5a0() {
   return (neuron0x1e1d8b0()*0.00806797);
}

double NNfunction_ss_dLdR::synapse0x1e3e5e0() {
   return (neuron0x1e1dbf0()*0.00353611);
}

double NNfunction_ss_dLdR::synapse0x1e3e620() {
   return (neuron0x1e1df30()*10.5826);
}

double NNfunction_ss_dLdR::synapse0x1e3e660() {
   return (neuron0x1e1e270()*0.0201753);
}

double NNfunction_ss_dLdR::synapse0x1e3e6a0() {
   return (neuron0x1e1e5b0()*0.00285881);
}

double NNfunction_ss_dLdR::synapse0x1e3e6e0() {
   return (neuron0x1e1e8f0()*-0.0142257);
}

double NNfunction_ss_dLdR::synapse0x1e3e720() {
   return (neuron0x1e1ec30()*-0.027893);
}

double NNfunction_ss_dLdR::synapse0x1e3e760() {
   return (neuron0x1e1ef70()*0.016884);
}

double NNfunction_ss_dLdR::synapse0x1e3e7a0() {
   return (neuron0x1e1f2b0()*-0.0191046);
}

double NNfunction_ss_dLdR::synapse0x1e3e7e0() {
   return (neuron0x1e1f5f0()*0.0162849);
}

double NNfunction_ss_dLdR::synapse0x1e3e820() {
   return (neuron0x1e1f930()*0.227295);
}

double NNfunction_ss_dLdR::synapse0x1e3e860() {
   return (neuron0x1e1fc70()*0.0148023);
}

double NNfunction_ss_dLdR::synapse0x1e3e8a0() {
   return (neuron0x1e1ffb0()*0.0310545);
}

double NNfunction_ss_dLdR::synapse0x1e3e8e0() {
   return (neuron0x1e202f0()*0.00975608);
}

double NNfunction_ss_dLdR::synapse0x1e3e920() {
   return (neuron0x1e20630()*0.00789534);
}

double NNfunction_ss_dLdR::synapse0x1e3e3b0() {
   return (neuron0x1e20970()*-0.00126023);
}

double NNfunction_ss_dLdR::synapse0x1e3e3f0() {
   return (neuron0x1e20ed0()*0.385434);
}

double NNfunction_ss_dLdR::synapse0x1e3ea70() {
   return (neuron0x1e210f0()*0.0366068);
}

double NNfunction_ss_dLdR::synapse0x1e3eab0() {
   return (neuron0x1e21430()*-0.0255824);
}

double NNfunction_ss_dLdR::synapse0x1e3eaf0() {
   return (neuron0x1e21770()*-0.0385017);
}

double NNfunction_ss_dLdR::synapse0x1e3eb30() {
   return (neuron0x1e21ab0()*0.0174519);
}

double NNfunction_ss_dLdR::synapse0x1e3eb70() {
   return (neuron0x1e21df0()*-0.0281439);
}

double NNfunction_ss_dLdR::synapse0x1e3ebb0() {
   return (neuron0x1e22130()*-0.0100683);
}

double NNfunction_ss_dLdR::synapse0x1e27660() {
   return (neuron0x1e1d570()*0.0718145);
}

double NNfunction_ss_dLdR::synapse0x1e276a0() {
   return (neuron0x1e1d8b0()*-0.0175252);
}

double NNfunction_ss_dLdR::synapse0x1e276e0() {
   return (neuron0x1e1dbf0()*0.0655823);
}

double NNfunction_ss_dLdR::synapse0x1e27720() {
   return (neuron0x1e1df30()*-2.56791);
}

double NNfunction_ss_dLdR::synapse0x1e27760() {
   return (neuron0x1e1e270()*-0.0326116);
}

double NNfunction_ss_dLdR::synapse0x1e277a0() {
   return (neuron0x1e1e5b0()*-0.00850908);
}

double NNfunction_ss_dLdR::synapse0x1e277e0() {
   return (neuron0x1e1e8f0()*-0.00199973);
}

double NNfunction_ss_dLdR::synapse0x1e27820() {
   return (neuron0x1e1ec30()*0.0403612);
}

double NNfunction_ss_dLdR::synapse0x1e3f340() {
   return (neuron0x1e1ef70()*-0.00363302);
}

double NNfunction_ss_dLdR::synapse0x1e3f380() {
   return (neuron0x1e1f2b0()*-0.0118354);
}

double NNfunction_ss_dLdR::synapse0x1e3f3c0() {
   return (neuron0x1e1f5f0()*-0.0347497);
}

double NNfunction_ss_dLdR::synapse0x1e3f400() {
   return (neuron0x1e1f930()*0.358692);
}

double NNfunction_ss_dLdR::synapse0x1e3f440() {
   return (neuron0x1e1fc70()*0.0338992);
}

double NNfunction_ss_dLdR::synapse0x1e3f480() {
   return (neuron0x1e1ffb0()*-0.0770538);
}

double NNfunction_ss_dLdR::synapse0x1e3f4c0() {
   return (neuron0x1e202f0()*0.067299);
}

double NNfunction_ss_dLdR::synapse0x1e3f500() {
   return (neuron0x1e20630()*0.0484423);
}

double NNfunction_ss_dLdR::synapse0x1e3ed80() {
   return (neuron0x1e20970()*-0.0766841);
}

double NNfunction_ss_dLdR::synapse0x1e3edc0() {
   return (neuron0x1e20ed0()*0.0643297);
}

double NNfunction_ss_dLdR::synapse0x1e3f650() {
   return (neuron0x1e210f0()*-0.00209652);
}

double NNfunction_ss_dLdR::synapse0x1e3f690() {
   return (neuron0x1e21430()*-0.00534492);
}

double NNfunction_ss_dLdR::synapse0x1e3f6d0() {
   return (neuron0x1e21770()*-0.0238471);
}

double NNfunction_ss_dLdR::synapse0x1e3f710() {
   return (neuron0x1e21ab0()*-0.0687028);
}

double NNfunction_ss_dLdR::synapse0x1e3f750() {
   return (neuron0x1e21df0()*0.00575033);
}

double NNfunction_ss_dLdR::synapse0x1e3f790() {
   return (neuron0x1e22130()*-0.0457098);
}

double NNfunction_ss_dLdR::synapse0x1e3fb10() {
   return (neuron0x1e1d570()*-0.0199374);
}

double NNfunction_ss_dLdR::synapse0x1e3fb50() {
   return (neuron0x1e1d8b0()*-0.00522062);
}

double NNfunction_ss_dLdR::synapse0x1e3fb90() {
   return (neuron0x1e1dbf0()*0.0303071);
}

double NNfunction_ss_dLdR::synapse0x1e3fbd0() {
   return (neuron0x1e1df30()*0.125278);
}

double NNfunction_ss_dLdR::synapse0x1e3fc10() {
   return (neuron0x1e1e270()*0.0236813);
}

double NNfunction_ss_dLdR::synapse0x1e3fc50() {
   return (neuron0x1e1e5b0()*0.0212645);
}

double NNfunction_ss_dLdR::synapse0x1e3fc90() {
   return (neuron0x1e1e8f0()*0.00125148);
}

double NNfunction_ss_dLdR::synapse0x1e3fcd0() {
   return (neuron0x1e1ec30()*0.0131569);
}

double NNfunction_ss_dLdR::synapse0x1e3fd10() {
   return (neuron0x1e1ef70()*-0.00374319);
}

double NNfunction_ss_dLdR::synapse0x1e3fd50() {
   return (neuron0x1e1f2b0()*-0.010666);
}

double NNfunction_ss_dLdR::synapse0x1e3fd90() {
   return (neuron0x1e1f5f0()*-0.0230786);
}

double NNfunction_ss_dLdR::synapse0x1e3fdd0() {
   return (neuron0x1e1f930()*2.26844);
}

double NNfunction_ss_dLdR::synapse0x1e3fe10() {
   return (neuron0x1e1fc70()*-0.00695078);
}

double NNfunction_ss_dLdR::synapse0x1e3fe50() {
   return (neuron0x1e1ffb0()*0.000724022);
}

double NNfunction_ss_dLdR::synapse0x1e3fe90() {
   return (neuron0x1e202f0()*0.0182944);
}

double NNfunction_ss_dLdR::synapse0x1e3fed0() {
   return (neuron0x1e20630()*0.0168567);
}

double NNfunction_ss_dLdR::synapse0x1e3f960() {
   return (neuron0x1e20970()*0.0204521);
}

double NNfunction_ss_dLdR::synapse0x1e3f9a0() {
   return (neuron0x1e20ed0()*-0.195231);
}

double NNfunction_ss_dLdR::synapse0x1e40020() {
   return (neuron0x1e210f0()*-0.00238394);
}

double NNfunction_ss_dLdR::synapse0x1e40060() {
   return (neuron0x1e21430()*-0.00458938);
}

double NNfunction_ss_dLdR::synapse0x1e400a0() {
   return (neuron0x1e21770()*-0.00229606);
}

double NNfunction_ss_dLdR::synapse0x1e400e0() {
   return (neuron0x1e21ab0()*0.00379777);
}

double NNfunction_ss_dLdR::synapse0x1e40120() {
   return (neuron0x1e21df0()*0.0058342);
}

double NNfunction_ss_dLdR::synapse0x1e40160() {
   return (neuron0x1e22130()*0.0417444);
}

double NNfunction_ss_dLdR::synapse0x1e404e0() {
   return (neuron0x1e1d570()*0.164275);
}

double NNfunction_ss_dLdR::synapse0x1e40520() {
   return (neuron0x1e1d8b0()*-0.145991);
}

double NNfunction_ss_dLdR::synapse0x1e40560() {
   return (neuron0x1e1dbf0()*-0.0220203);
}

double NNfunction_ss_dLdR::synapse0x1e405a0() {
   return (neuron0x1e1df30()*-1.07122);
}

double NNfunction_ss_dLdR::synapse0x1e405e0() {
   return (neuron0x1e1e270()*0.0535588);
}

double NNfunction_ss_dLdR::synapse0x1e40620() {
   return (neuron0x1e1e5b0()*0.0623697);
}

double NNfunction_ss_dLdR::synapse0x1e40660() {
   return (neuron0x1e1e8f0()*0.200812);
}

double NNfunction_ss_dLdR::synapse0x1e406a0() {
   return (neuron0x1e1ec30()*0.570375);
}

double NNfunction_ss_dLdR::synapse0x1e406e0() {
   return (neuron0x1e1ef70()*-0.131091);
}

double NNfunction_ss_dLdR::synapse0x1e40720() {
   return (neuron0x1e1f2b0()*-0.41371);
}

double NNfunction_ss_dLdR::synapse0x1e40760() {
   return (neuron0x1e1f5f0()*0.220272);
}

double NNfunction_ss_dLdR::synapse0x1e407a0() {
   return (neuron0x1e1f930()*2.53488);
}

double NNfunction_ss_dLdR::synapse0x1e407e0() {
   return (neuron0x1e1fc70()*0.580521);
}

double NNfunction_ss_dLdR::synapse0x1e40820() {
   return (neuron0x1e1ffb0()*0.292647);
}

double NNfunction_ss_dLdR::synapse0x1e40860() {
   return (neuron0x1e202f0()*0.193891);
}

double NNfunction_ss_dLdR::synapse0x1e408a0() {
   return (neuron0x1e20630()*-0.267994);
}

double NNfunction_ss_dLdR::synapse0x1e40330() {
   return (neuron0x1e20970()*0.480144);
}

double NNfunction_ss_dLdR::synapse0x1e40370() {
   return (neuron0x1e20ed0()*0.743249);
}

double NNfunction_ss_dLdR::synapse0x1e30ea0() {
   return (neuron0x1e210f0()*-0.382222);
}

double NNfunction_ss_dLdR::synapse0x1e30ee0() {
   return (neuron0x1e21430()*-0.14623);
}

double NNfunction_ss_dLdR::synapse0x1e30f20() {
   return (neuron0x1e21770()*0.271959);
}

double NNfunction_ss_dLdR::synapse0x1e30f60() {
   return (neuron0x1e21ab0()*-0.12032);
}

double NNfunction_ss_dLdR::synapse0x1e30fa0() {
   return (neuron0x1e21df0()*0.441307);
}

double NNfunction_ss_dLdR::synapse0x1e30fe0() {
   return (neuron0x1e22130()*-0.106147);
}

double NNfunction_ss_dLdR::synapse0x1e31360() {
   return (neuron0x1e1d570()*-0.74984);
}

double NNfunction_ss_dLdR::synapse0x1e313a0() {
   return (neuron0x1e1d8b0()*-0.565514);
}

double NNfunction_ss_dLdR::synapse0x1e313e0() {
   return (neuron0x1e1dbf0()*-0.543467);
}

double NNfunction_ss_dLdR::synapse0x1e31420() {
   return (neuron0x1e1df30()*1.93795);
}

double NNfunction_ss_dLdR::synapse0x1e31460() {
   return (neuron0x1e1e270()*0.539446);
}

double NNfunction_ss_dLdR::synapse0x1e314a0() {
   return (neuron0x1e1e5b0()*-0.344793);
}

double NNfunction_ss_dLdR::synapse0x1e314e0() {
   return (neuron0x1e1e8f0()*-0.311647);
}

double NNfunction_ss_dLdR::synapse0x1e31520() {
   return (neuron0x1e1ec30()*0.841052);
}

double NNfunction_ss_dLdR::synapse0x1e31560() {
   return (neuron0x1e1ef70()*0.297867);
}

double NNfunction_ss_dLdR::synapse0x1e315a0() {
   return (neuron0x1e1f2b0()*-0.479897);
}

double NNfunction_ss_dLdR::synapse0x1e315e0() {
   return (neuron0x1e1f5f0()*0.345594);
}

double NNfunction_ss_dLdR::synapse0x1e31620() {
   return (neuron0x1e1f930()*-0.485473);
}

double NNfunction_ss_dLdR::synapse0x1e31660() {
   return (neuron0x1e1fc70()*-0.46771);
}

double NNfunction_ss_dLdR::synapse0x1e316a0() {
   return (neuron0x1e1ffb0()*-0.0525144);
}

double NNfunction_ss_dLdR::synapse0x1e316e0() {
   return (neuron0x1e202f0()*-0.333666);
}

double NNfunction_ss_dLdR::synapse0x1e31720() {
   return (neuron0x1e20630()*-0.404276);
}

double NNfunction_ss_dLdR::synapse0x1e311b0() {
   return (neuron0x1e20970()*0.0958244);
}

double NNfunction_ss_dLdR::synapse0x1e311f0() {
   return (neuron0x1e20ed0()*-1.0563);
}

double NNfunction_ss_dLdR::synapse0x1e31870() {
   return (neuron0x1e210f0()*0.172857);
}

double NNfunction_ss_dLdR::synapse0x1e318b0() {
   return (neuron0x1e21430()*-0.600569);
}

double NNfunction_ss_dLdR::synapse0x1e318f0() {
   return (neuron0x1e21770()*0.0179919);
}

double NNfunction_ss_dLdR::synapse0x1e31930() {
   return (neuron0x1e21ab0()*0.341172);
}

double NNfunction_ss_dLdR::synapse0x1e31970() {
   return (neuron0x1e21df0()*0.277194);
}

double NNfunction_ss_dLdR::synapse0x1e319b0() {
   return (neuron0x1e22130()*-0.254292);
}

double NNfunction_ss_dLdR::synapse0x1e31d30() {
   return (neuron0x1e1d570()*-0.581903);
}

double NNfunction_ss_dLdR::synapse0x1e31d70() {
   return (neuron0x1e1d8b0()*-0.0193863);
}

double NNfunction_ss_dLdR::synapse0x1e31db0() {
   return (neuron0x1e1dbf0()*-0.186541);
}

double NNfunction_ss_dLdR::synapse0x1e31df0() {
   return (neuron0x1e1df30()*0.372808);
}

double NNfunction_ss_dLdR::synapse0x1e31e30() {
   return (neuron0x1e1e270()*-0.188946);
}

double NNfunction_ss_dLdR::synapse0x1e31e70() {
   return (neuron0x1e1e5b0()*0.253625);
}

double NNfunction_ss_dLdR::synapse0x1e31eb0() {
   return (neuron0x1e1e8f0()*0.135374);
}

double NNfunction_ss_dLdR::synapse0x1e31ef0() {
   return (neuron0x1e1ec30()*0.126636);
}

double NNfunction_ss_dLdR::synapse0x1e31f30() {
   return (neuron0x1e1ef70()*0.358214);
}

double NNfunction_ss_dLdR::synapse0x1e31f70() {
   return (neuron0x1e1f2b0()*-0.123881);
}

double NNfunction_ss_dLdR::synapse0x1e31fb0() {
   return (neuron0x1e1f5f0()*0.987633);
}

double NNfunction_ss_dLdR::synapse0x1e31ff0() {
   return (neuron0x1e1f930()*-2.93262);
}

double NNfunction_ss_dLdR::synapse0x1e32030() {
   return (neuron0x1e1fc70()*-0.132366);
}

double NNfunction_ss_dLdR::synapse0x1e32070() {
   return (neuron0x1e1ffb0()*0.0363862);
}

double NNfunction_ss_dLdR::synapse0x1e320b0() {
   return (neuron0x1e202f0()*-0.374541);
}

double NNfunction_ss_dLdR::synapse0x1e320f0() {
   return (neuron0x1e20630()*-0.271161);
}

double NNfunction_ss_dLdR::synapse0x1e31b80() {
   return (neuron0x1e20970()*0.451717);
}

double NNfunction_ss_dLdR::synapse0x1e31bc0() {
   return (neuron0x1e20ed0()*-0.508737);
}

double NNfunction_ss_dLdR::synapse0x1e32240() {
   return (neuron0x1e210f0()*0.323264);
}

double NNfunction_ss_dLdR::synapse0x1e32280() {
   return (neuron0x1e21430()*-0.435557);
}

double NNfunction_ss_dLdR::synapse0x1e322c0() {
   return (neuron0x1e21770()*0.184267);
}

double NNfunction_ss_dLdR::synapse0x1e32300() {
   return (neuron0x1e21ab0()*0.159416);
}

double NNfunction_ss_dLdR::synapse0x1e32340() {
   return (neuron0x1e21df0()*0.183165);
}

double NNfunction_ss_dLdR::synapse0x1e32380() {
   return (neuron0x1e22130()*0.283676);
}

double NNfunction_ss_dLdR::synapse0x1e32700() {
   return (neuron0x1e1d570()*-0.477459);
}

double NNfunction_ss_dLdR::synapse0x1e32740() {
   return (neuron0x1e1d8b0()*-0.674279);
}

double NNfunction_ss_dLdR::synapse0x1e32780() {
   return (neuron0x1e1dbf0()*-0.508064);
}

double NNfunction_ss_dLdR::synapse0x1e327c0() {
   return (neuron0x1e1df30()*0.519524);
}

double NNfunction_ss_dLdR::synapse0x1e32800() {
   return (neuron0x1e1e270()*-0.348571);
}

double NNfunction_ss_dLdR::synapse0x1e32840() {
   return (neuron0x1e1e5b0()*-0.494964);
}

double NNfunction_ss_dLdR::synapse0x1e32880() {
   return (neuron0x1e1e8f0()*0.397378);
}

double NNfunction_ss_dLdR::synapse0x1e328c0() {
   return (neuron0x1e1ec30()*-0.366004);
}

double NNfunction_ss_dLdR::synapse0x1e32900() {
   return (neuron0x1e1ef70()*-0.0410309);
}

double NNfunction_ss_dLdR::synapse0x1e32940() {
   return (neuron0x1e1f2b0()*0.0715337);
}

double NNfunction_ss_dLdR::synapse0x1e32980() {
   return (neuron0x1e1f5f0()*-0.0657197);
}

double NNfunction_ss_dLdR::synapse0x1e329c0() {
   return (neuron0x1e1f930()*0.089136);
}

double NNfunction_ss_dLdR::synapse0x1e32a00() {
   return (neuron0x1e1fc70()*-0.332154);
}

double NNfunction_ss_dLdR::synapse0x1e32a40() {
   return (neuron0x1e1ffb0()*-0.935569);
}

double NNfunction_ss_dLdR::synapse0x1e32a80() {
   return (neuron0x1e202f0()*-0.171806);
}

double NNfunction_ss_dLdR::synapse0x1e32ac0() {
   return (neuron0x1e20630()*-0.684024);
}

double NNfunction_ss_dLdR::synapse0x1e32550() {
   return (neuron0x1e20970()*-0.213272);
}

double NNfunction_ss_dLdR::synapse0x1e32590() {
   return (neuron0x1e20ed0()*0.493666);
}

double NNfunction_ss_dLdR::synapse0x1e32c10() {
   return (neuron0x1e210f0()*0.125775);
}

double NNfunction_ss_dLdR::synapse0x1e32c50() {
   return (neuron0x1e21430()*-0.183843);
}

double NNfunction_ss_dLdR::synapse0x1e32c90() {
   return (neuron0x1e21770()*-0.308755);
}

double NNfunction_ss_dLdR::synapse0x1e32cd0() {
   return (neuron0x1e21ab0()*0.277239);
}

double NNfunction_ss_dLdR::synapse0x1e32d10() {
   return (neuron0x1e21df0()*0.548794);
}

double NNfunction_ss_dLdR::synapse0x1e32d50() {
   return (neuron0x1e22130()*-0.246118);
}

double NNfunction_ss_dLdR::synapse0x1e44c20() {
   return (neuron0x1e1d570()*0.0452367);
}

double NNfunction_ss_dLdR::synapse0x1e44c60() {
   return (neuron0x1e1d8b0()*0.030967);
}

double NNfunction_ss_dLdR::synapse0x1e44ca0() {
   return (neuron0x1e1dbf0()*-0.0126473);
}

double NNfunction_ss_dLdR::synapse0x1e44ce0() {
   return (neuron0x1e1df30()*0.135416);
}

double NNfunction_ss_dLdR::synapse0x1e44d20() {
   return (neuron0x1e1e270()*-0.0139905);
}

double NNfunction_ss_dLdR::synapse0x1e44d60() {
   return (neuron0x1e1e5b0()*-0.00553093);
}

double NNfunction_ss_dLdR::synapse0x1e44da0() {
   return (neuron0x1e1e8f0()*-0.0194219);
}

double NNfunction_ss_dLdR::synapse0x1e44de0() {
   return (neuron0x1e1ec30()*0.017323);
}

double NNfunction_ss_dLdR::synapse0x1e44e20() {
   return (neuron0x1e1ef70()*0.0281167);
}

double NNfunction_ss_dLdR::synapse0x1e44e60() {
   return (neuron0x1e1f2b0()*-0.0178175);
}

double NNfunction_ss_dLdR::synapse0x1e44ea0() {
   return (neuron0x1e1f5f0()*0.0192794);
}

double NNfunction_ss_dLdR::synapse0x1e44ee0() {
   return (neuron0x1e1f930()*0.0998784);
}

double NNfunction_ss_dLdR::synapse0x1e44f20() {
   return (neuron0x1e1fc70()*0.103161);
}

double NNfunction_ss_dLdR::synapse0x1e44f60() {
   return (neuron0x1e1ffb0()*0.00192884);
}

double NNfunction_ss_dLdR::synapse0x1e44fa0() {
   return (neuron0x1e202f0()*0.050318);
}

double NNfunction_ss_dLdR::synapse0x1e44fe0() {
   return (neuron0x1e20630()*0.0475735);
}

double NNfunction_ss_dLdR::synapse0x1e32d90() {
   return (neuron0x1e20970()*-0.0277527);
}

double NNfunction_ss_dLdR::synapse0x1e32dd0() {
   return (neuron0x1e20ed0()*1.22926);
}

double NNfunction_ss_dLdR::synapse0x1e45130() {
   return (neuron0x1e210f0()*0.022211);
}

double NNfunction_ss_dLdR::synapse0x1e45170() {
   return (neuron0x1e21430()*0.0154945);
}

double NNfunction_ss_dLdR::synapse0x1e451b0() {
   return (neuron0x1e21770()*0.00407664);
}

double NNfunction_ss_dLdR::synapse0x1e451f0() {
   return (neuron0x1e21ab0()*-0.00828345);
}

double NNfunction_ss_dLdR::synapse0x1e45230() {
   return (neuron0x1e21df0()*0.00592658);
}

double NNfunction_ss_dLdR::synapse0x1e45270() {
   return (neuron0x1e22130()*-0.03167);
}

double NNfunction_ss_dLdR::synapse0x1e455f0() {
   return (neuron0x1e1d570()*0.0602116);
}

double NNfunction_ss_dLdR::synapse0x1e45630() {
   return (neuron0x1e1d8b0()*-0.0594474);
}

double NNfunction_ss_dLdR::synapse0x1e45670() {
   return (neuron0x1e1dbf0()*2.10697);
}

double NNfunction_ss_dLdR::synapse0x1e456b0() {
   return (neuron0x1e1df30()*-0.0734792);
}

double NNfunction_ss_dLdR::synapse0x1e456f0() {
   return (neuron0x1e1e270()*0.135137);
}

double NNfunction_ss_dLdR::synapse0x1e45730() {
   return (neuron0x1e1e5b0()*-0.207179);
}

double NNfunction_ss_dLdR::synapse0x1e45770() {
   return (neuron0x1e1e8f0()*-0.0149083);
}

double NNfunction_ss_dLdR::synapse0x1e457b0() {
   return (neuron0x1e1ec30()*0.23141);
}

double NNfunction_ss_dLdR::synapse0x1e457f0() {
   return (neuron0x1e1ef70()*0.0151785);
}

double NNfunction_ss_dLdR::synapse0x1e45830() {
   return (neuron0x1e1f2b0()*-0.0305745);
}

double NNfunction_ss_dLdR::synapse0x1e45870() {
   return (neuron0x1e1f5f0()*0.0669376);
}

double NNfunction_ss_dLdR::synapse0x1e458b0() {
   return (neuron0x1e1f930()*-0.629511);
}

double NNfunction_ss_dLdR::synapse0x1e458f0() {
   return (neuron0x1e1fc70()*-0.124789);
}

double NNfunction_ss_dLdR::synapse0x1e45930() {
   return (neuron0x1e1ffb0()*0.0694793);
}

double NNfunction_ss_dLdR::synapse0x1e45970() {
   return (neuron0x1e202f0()*-0.119935);
}

double NNfunction_ss_dLdR::synapse0x1e459b0() {
   return (neuron0x1e20630()*-0.0897662);
}

double NNfunction_ss_dLdR::synapse0x1e45440() {
   return (neuron0x1e20970()*0.135302);
}

double NNfunction_ss_dLdR::synapse0x1e45480() {
   return (neuron0x1e20ed0()*0.0332409);
}

double NNfunction_ss_dLdR::synapse0x1e45b00() {
   return (neuron0x1e210f0()*0.000192713);
}

double NNfunction_ss_dLdR::synapse0x1e45b40() {
   return (neuron0x1e21430()*0.231079);
}

double NNfunction_ss_dLdR::synapse0x1e45b80() {
   return (neuron0x1e21770()*-0.12183);
}

double NNfunction_ss_dLdR::synapse0x1e45bc0() {
   return (neuron0x1e21ab0()*-0.125958);
}

double NNfunction_ss_dLdR::synapse0x1e45c00() {
   return (neuron0x1e21df0()*0.0112509);
}

double NNfunction_ss_dLdR::synapse0x1e45c40() {
   return (neuron0x1e22130()*0.0729822);
}

double NNfunction_ss_dLdR::synapse0x1e45fc0() {
   return (neuron0x1e1d570()*0.11073);
}

double NNfunction_ss_dLdR::synapse0x1e46000() {
   return (neuron0x1e1d8b0()*-0.223154);
}

double NNfunction_ss_dLdR::synapse0x1e46040() {
   return (neuron0x1e1dbf0()*0.138003);
}

double NNfunction_ss_dLdR::synapse0x1e46080() {
   return (neuron0x1e1df30()*2.12566);
}

double NNfunction_ss_dLdR::synapse0x1e460c0() {
   return (neuron0x1e1e270()*-0.0821603);
}

double NNfunction_ss_dLdR::synapse0x1e46100() {
   return (neuron0x1e1e5b0()*-0.00162413);
}

double NNfunction_ss_dLdR::synapse0x1e46140() {
   return (neuron0x1e1e8f0()*-0.0282007);
}

double NNfunction_ss_dLdR::synapse0x1e46180() {
   return (neuron0x1e1ec30()*0.210198);
}

double NNfunction_ss_dLdR::synapse0x1e461c0() {
   return (neuron0x1e1ef70()*0.0345418);
}

double NNfunction_ss_dLdR::synapse0x1e46200() {
   return (neuron0x1e1f2b0()*0.0917139);
}

double NNfunction_ss_dLdR::synapse0x1e46240() {
   return (neuron0x1e1f5f0()*-0.00824233);
}

double NNfunction_ss_dLdR::synapse0x1e46280() {
   return (neuron0x1e1f930()*0.159281);
}

double NNfunction_ss_dLdR::synapse0x1e462c0() {
   return (neuron0x1e1fc70()*-0.0329412);
}

double NNfunction_ss_dLdR::synapse0x1e46300() {
   return (neuron0x1e1ffb0()*-0.16485);
}

double NNfunction_ss_dLdR::synapse0x1e46340() {
   return (neuron0x1e202f0()*-0.0246669);
}

double NNfunction_ss_dLdR::synapse0x1e46380() {
   return (neuron0x1e20630()*-0.0209456);
}

double NNfunction_ss_dLdR::synapse0x1e45e10() {
   return (neuron0x1e20970()*-0.0605641);
}

double NNfunction_ss_dLdR::synapse0x1e45e50() {
   return (neuron0x1e20ed0()*0.815505);
}

double NNfunction_ss_dLdR::synapse0x1e464d0() {
   return (neuron0x1e210f0()*0.0232932);
}

double NNfunction_ss_dLdR::synapse0x1e46510() {
   return (neuron0x1e21430()*0.244781);
}

double NNfunction_ss_dLdR::synapse0x1e46550() {
   return (neuron0x1e21770()*-0.029695);
}

double NNfunction_ss_dLdR::synapse0x1e46590() {
   return (neuron0x1e21ab0()*-0.0996685);
}

double NNfunction_ss_dLdR::synapse0x1e465d0() {
   return (neuron0x1e21df0()*0.0081267);
}

double NNfunction_ss_dLdR::synapse0x1e46610() {
   return (neuron0x1e22130()*0.228752);
}

double NNfunction_ss_dLdR::synapse0x1e46990() {
   return (neuron0x1e1d570()*-0.124066);
}

double NNfunction_ss_dLdR::synapse0x1e469d0() {
   return (neuron0x1e1d8b0()*0.324227);
}

double NNfunction_ss_dLdR::synapse0x1e46a10() {
   return (neuron0x1e1dbf0()*0.944974);
}

double NNfunction_ss_dLdR::synapse0x1e46a50() {
   return (neuron0x1e1df30()*0.423728);
}

double NNfunction_ss_dLdR::synapse0x1e46a90() {
   return (neuron0x1e1e270()*0.293124);
}

double NNfunction_ss_dLdR::synapse0x1e46ad0() {
   return (neuron0x1e1e5b0()*-0.291644);
}

double NNfunction_ss_dLdR::synapse0x1e46b10() {
   return (neuron0x1e1e8f0()*-0.0869534);
}

double NNfunction_ss_dLdR::synapse0x1e46b50() {
   return (neuron0x1e1ec30()*-0.773622);
}

double NNfunction_ss_dLdR::synapse0x1e46b90() {
   return (neuron0x1e1ef70()*-0.626242);
}

double NNfunction_ss_dLdR::synapse0x1e46bd0() {
   return (neuron0x1e1f2b0()*0.598786);
}

double NNfunction_ss_dLdR::synapse0x1e46c10() {
   return (neuron0x1e1f5f0()*-0.75719);
}

double NNfunction_ss_dLdR::synapse0x1e46c50() {
   return (neuron0x1e1f930()*1.2112);
}

double NNfunction_ss_dLdR::synapse0x1e46c90() {
   return (neuron0x1e1fc70()*0.315722);
}

double NNfunction_ss_dLdR::synapse0x1e46cd0() {
   return (neuron0x1e1ffb0()*-0.219566);
}

double NNfunction_ss_dLdR::synapse0x1e46d10() {
   return (neuron0x1e202f0()*0.033253);
}

double NNfunction_ss_dLdR::synapse0x1e46d50() {
   return (neuron0x1e20630()*-0.205897);
}

double NNfunction_ss_dLdR::synapse0x1e467e0() {
   return (neuron0x1e20970()*-0.951906);
}

double NNfunction_ss_dLdR::synapse0x1e46820() {
   return (neuron0x1e20ed0()*-1.52767);
}

double NNfunction_ss_dLdR::synapse0x1e46ea0() {
   return (neuron0x1e210f0()*-0.278886);
}

double NNfunction_ss_dLdR::synapse0x1e46ee0() {
   return (neuron0x1e21430()*0.996514);
}

double NNfunction_ss_dLdR::synapse0x1e46f20() {
   return (neuron0x1e21770()*0.00273949);
}

double NNfunction_ss_dLdR::synapse0x1e46f60() {
   return (neuron0x1e21ab0()*-0.275333);
}

double NNfunction_ss_dLdR::synapse0x1e46fa0() {
   return (neuron0x1e21df0()*0.141892);
}

double NNfunction_ss_dLdR::synapse0x1e46fe0() {
   return (neuron0x1e22130()*-0.525507);
}

double NNfunction_ss_dLdR::synapse0x1e23580() {
   return (neuron0x1e225d0()*-0.00245375);
}

double NNfunction_ss_dLdR::synapse0x1e235c0() {
   return (neuron0x1e22ee0()*0.00492303);
}

double NNfunction_ss_dLdR::synapse0x1e24a90() {
   return (neuron0x1e239c0()*0.659714);
}

double NNfunction_ss_dLdR::synapse0x1e24ad0() {
   return (neuron0x1bdd250()*-0.00169964);
}

double NNfunction_ss_dLdR::synapse0x1e25460() {
   return (neuron0x1e247e0()*-0.00868966);
}

double NNfunction_ss_dLdR::synapse0x1e254a0() {
   return (neuron0x1e251b0()*0.00562108);
}

double NNfunction_ss_dLdR::synapse0x1e26230() {
   return (neuron0x1e25f80()*0.77705);
}

double NNfunction_ss_dLdR::synapse0x1e26270() {
   return (neuron0x1e26950()*0.0193287);
}

double NNfunction_ss_dLdR::synapse0x1e26c00() {
   return (neuron0x1e27320()*0.0101636);
}

double NNfunction_ss_dLdR::synapse0x1e26c40() {
   return (neuron0x1e27e00()*-0.0148556);
}

double NNfunction_ss_dLdR::synapse0x1e275d0() {
   return (neuron0x1e287d0()*1.07829);
}

double NNfunction_ss_dLdR::synapse0x1e27610() {
   return (neuron0x1e258b0()*-0.320619);
}

double NNfunction_ss_dLdR::synapse0x1e280b0() {
   return (neuron0x1e2a380()*0.00712615);
}

double NNfunction_ss_dLdR::synapse0x1e280f0() {
   return (neuron0x1e2ad50()*-0.00677372);
}

double NNfunction_ss_dLdR::synapse0x1e28a80() {
   return (neuron0x1e2b720()*-0.0049851);
}

double NNfunction_ss_dLdR::synapse0x1e28ac0() {
   return (neuron0x1e2c0f0()*0.0853153);
}

double NNfunction_ss_dLdR::synapse0x1e25b60() {
   return (neuron0x1e2df00()*-0.0065318);
}

double NNfunction_ss_dLdR::synapse0x1e25ba0() {
   return (neuron0x1e2e1e0()*-0.011308);
}

double NNfunction_ss_dLdR::synapse0x1e2a630() {
   return (neuron0x1e2ebb0()*-0.00295815);
}

double NNfunction_ss_dLdR::synapse0x1e2a670() {
   return (neuron0x1e2f580()*1.13851);
}

double NNfunction_ss_dLdR::synapse0x1e2b000() {
   return (neuron0x1e2ff50()*-0.00536236);
}

double NNfunction_ss_dLdR::synapse0x1e2b040() {
   return (neuron0x1e30920()*-0.0980507);
}

double NNfunction_ss_dLdR::synapse0x1e2b9d0() {
   return (neuron0x1e29470()*-0.00412382);
}

double NNfunction_ss_dLdR::synapse0x1e2ba10() {
   return (neuron0x1e29e40()*0.00671751);
}

double NNfunction_ss_dLdR::synapse0x1e2c3a0() {
   return (neuron0x1e336b0()*-0.0166995);
}

double NNfunction_ss_dLdR::synapse0x1e2c3e0() {
   return (neuron0x1e34080()*-0.00769435);
}

double NNfunction_ss_dLdR::synapse0x1e20510() {
   return (neuron0x1e34a50()*-0.00118723);
}

double NNfunction_ss_dLdR::synapse0x1e20550() {
   return (neuron0x1e35420()*0.0011771);
}

double NNfunction_ss_dLdR::synapse0x1e2e490() {
   return (neuron0x1e35df0()*0.00103677);
}

double NNfunction_ss_dLdR::synapse0x1e2e4d0() {
   return (neuron0x1e367c0()*-0.00918045);
}

double NNfunction_ss_dLdR::synapse0x1e2ee60() {
   return (neuron0x1e37190()*-0.0067285);
}

double NNfunction_ss_dLdR::synapse0x1e2eea0() {
   return (neuron0x1e37b60()*-0.117744);
}

double NNfunction_ss_dLdR::synapse0x1e2f830() {
   return (neuron0x1e2dbf0()*-0.00988136);
}

double NNfunction_ss_dLdR::synapse0x1e2f870() {
   return (neuron0x1e3a740()*-0.00160749);
}

double NNfunction_ss_dLdR::synapse0x1e30200() {
   return (neuron0x1e3b110()*0.56218);
}

double NNfunction_ss_dLdR::synapse0x1e30240() {
   return (neuron0x1e3bae0()*0.00942504);
}

double NNfunction_ss_dLdR::synapse0x1e30bd0() {
   return (neuron0x1e3c4b0()*-0.843022);
}

double NNfunction_ss_dLdR::synapse0x1e30c10() {
   return (neuron0x1e3ce80()*0.00172465);
}

double NNfunction_ss_dLdR::synapse0x1e29720() {
   return (neuron0x1e3d850()*-0.0135544);
}

double NNfunction_ss_dLdR::synapse0x1e29760() {
   return (neuron0x1e3e220()*-0.00375065);
}

double NNfunction_ss_dLdR::synapse0x1e32fd0() {
   return (neuron0x1e3ebf0()*0.425265);
}

double NNfunction_ss_dLdR::synapse0x1e33010() {
   return (neuron0x1e3f7d0()*0.0836661);
}

double NNfunction_ss_dLdR::synapse0x1e33960() {
   return (neuron0x1e401a0()*-0.0499446);
}

double NNfunction_ss_dLdR::synapse0x1e339a0() {
   return (neuron0x1e31020()*0.00835434);
}

double NNfunction_ss_dLdR::synapse0x1e34330() {
   return (neuron0x1e319f0()*-0.00498437);
}

double NNfunction_ss_dLdR::synapse0x1e34370() {
   return (neuron0x1e323c0()*0.0187165);
}

double NNfunction_ss_dLdR::synapse0x1e34d00() {
   return (neuron0x1e44a00()*-0.310625);
}

double NNfunction_ss_dLdR::synapse0x1e34d40() {
   return (neuron0x1e452b0()*-0.0023314);
}

double NNfunction_ss_dLdR::synapse0x1e356d0() {
   return (neuron0x1e45c80()*-0.0756238);
}

double NNfunction_ss_dLdR::synapse0x1e35710() {
   return (neuron0x1e46650()*-0.0188485);
}

double NNfunction_ss_dLdR::synapse0x1e37e10() {
   return (neuron0x1e225d0()*-2.23065);
}

double NNfunction_ss_dLdR::synapse0x1e37e50() {
   return (neuron0x1e22ee0()*2.51677);
}

double NNfunction_ss_dLdR::synapse0x1e2d3d0() {
   return (neuron0x1e239c0()*-1.23737);
}

double NNfunction_ss_dLdR::synapse0x1e2d410() {
   return (neuron0x1bdd250()*-1.01804);
}

double NNfunction_ss_dLdR::synapse0x1e3a9f0() {
   return (neuron0x1e247e0()*-2.35214);
}

double NNfunction_ss_dLdR::synapse0x1e3aa30() {
   return (neuron0x1e251b0()*1.07665);
}

double NNfunction_ss_dLdR::synapse0x1e3b3c0() {
   return (neuron0x1e25f80()*-0.967692);
}

double NNfunction_ss_dLdR::synapse0x1e3b400() {
   return (neuron0x1e26950()*-1.25325);
}

double NNfunction_ss_dLdR::synapse0x1e3bd90() {
   return (neuron0x1e27320()*0.765672);
}

double NNfunction_ss_dLdR::synapse0x1e3bdd0() {
   return (neuron0x1e27e00()*-1.31069);
}

double NNfunction_ss_dLdR::synapse0x1e3c760() {
   return (neuron0x1e287d0()*-1.11285);
}

double NNfunction_ss_dLdR::synapse0x1e3c7a0() {
   return (neuron0x1e258b0()*0.854738);
}

double NNfunction_ss_dLdR::synapse0x1e3d130() {
   return (neuron0x1e2a380()*2.42587);
}

double NNfunction_ss_dLdR::synapse0x1e3d170() {
   return (neuron0x1e2ad50()*-2.88659);
}

double NNfunction_ss_dLdR::synapse0x1e3db00() {
   return (neuron0x1e2b720()*-1.81389);
}

double NNfunction_ss_dLdR::synapse0x1e3db40() {
   return (neuron0x1e2c0f0()*-4.8886);
}

double NNfunction_ss_dLdR::synapse0x1e3e4d0() {
   return (neuron0x1e2df00()*2.19912);
}

double NNfunction_ss_dLdR::synapse0x1e3e510() {
   return (neuron0x1e2e1e0()*0.542019);
}

double NNfunction_ss_dLdR::synapse0x1e3eea0() {
   return (neuron0x1e2ebb0()*-0.324545);
}

double NNfunction_ss_dLdR::synapse0x1e3eee0() {
   return (neuron0x1e2f580()*2.66536);
}

double NNfunction_ss_dLdR::synapse0x1e3fa80() {
   return (neuron0x1e2ff50()*-0.060752);
}

double NNfunction_ss_dLdR::synapse0x1e3fac0() {
   return (neuron0x1e30920()*0.463842);
}

double NNfunction_ss_dLdR::synapse0x1e40450() {
   return (neuron0x1e29470()*2.1815);
}

double NNfunction_ss_dLdR::synapse0x1e40490() {
   return (neuron0x1e29e40()*2.46987);
}

double NNfunction_ss_dLdR::synapse0x1e312d0() {
   return (neuron0x1e336b0()*-2.79724);
}

double NNfunction_ss_dLdR::synapse0x1e31310() {
   return (neuron0x1e34080()*1.25746);
}

double NNfunction_ss_dLdR::synapse0x1e31ca0() {
   return (neuron0x1e34a50()*-1.26624);
}

double NNfunction_ss_dLdR::synapse0x1e31ce0() {
   return (neuron0x1e35420()*2.41232);
}

double NNfunction_ss_dLdR::synapse0x1e32670() {
   return (neuron0x1e35df0()*-1.29305);
}

double NNfunction_ss_dLdR::synapse0x1e326b0() {
   return (neuron0x1e367c0()*1.07948);
}

double NNfunction_ss_dLdR::synapse0x1e44b90() {
   return (neuron0x1e37190()*-0.0441015);
}

double NNfunction_ss_dLdR::synapse0x1e44bd0() {
   return (neuron0x1e37b60()*5.89067);
}

double NNfunction_ss_dLdR::synapse0x1e45560() {
   return (neuron0x1e2dbf0()*1.31245);
}

double NNfunction_ss_dLdR::synapse0x1e455a0() {
   return (neuron0x1e3a740()*2.38959);
}

double NNfunction_ss_dLdR::synapse0x1e45f30() {
   return (neuron0x1e3b110()*0.381166);
}

double NNfunction_ss_dLdR::synapse0x1e45f70() {
   return (neuron0x1e3bae0()*0.218898);
}

double NNfunction_ss_dLdR::synapse0x1e46900() {
   return (neuron0x1e3c4b0()*-1.1821);
}

double NNfunction_ss_dLdR::synapse0x1e46940() {
   return (neuron0x1e3ce80()*1.78929);
}

double NNfunction_ss_dLdR::synapse0x1e227f0() {
   return (neuron0x1e3d850()*2.29424);
}

double NNfunction_ss_dLdR::synapse0x1e22830() {
   return (neuron0x1e3e220()*2.53747);
}

double NNfunction_ss_dLdR::synapse0x1e360a0() {
   return (neuron0x1e3ebf0()*-2.79488);
}

double NNfunction_ss_dLdR::synapse0x1e360e0() {
   return (neuron0x1e3f7d0()*1.58588);
}

double NNfunction_ss_dLdR::synapse0x1e47020() {
   return (neuron0x1e401a0()*-2.38466);
}

double NNfunction_ss_dLdR::synapse0x1e47060() {
   return (neuron0x1e31020()*3.31696);
}

double NNfunction_ss_dLdR::synapse0x1e470a0() {
   return (neuron0x1e319f0()*-0.254395);
}

double NNfunction_ss_dLdR::synapse0x1e470e0() {
   return (neuron0x1e323c0()*-0.0409759);
}

double NNfunction_ss_dLdR::synapse0x1e4df90() {
   return (neuron0x1e44a00()*1.31408);
}

double NNfunction_ss_dLdR::synapse0x1e4dfd0() {
   return (neuron0x1e452b0()*2.85781);
}

double NNfunction_ss_dLdR::synapse0x1e4e010() {
   return (neuron0x1e45c80()*0.861412);
}

double NNfunction_ss_dLdR::synapse0x1e4e050() {
   return (neuron0x1e46650()*-0.903319);
}

double NNfunction_ss_dLdR::synapse0x1e4e3d0() {
   return (neuron0x1e225d0()*-0.774171);
}

double NNfunction_ss_dLdR::synapse0x1e4e410() {
   return (neuron0x1e22ee0()*-0.135748);
}

double NNfunction_ss_dLdR::synapse0x1e4e450() {
   return (neuron0x1e239c0()*2.16191);
}

double NNfunction_ss_dLdR::synapse0x1e4e490() {
   return (neuron0x1bdd250()*2.13977);
}

double NNfunction_ss_dLdR::synapse0x1e4e4d0() {
   return (neuron0x1e247e0()*0.941287);
}

double NNfunction_ss_dLdR::synapse0x1e4e510() {
   return (neuron0x1e251b0()*-2.02491);
}

double NNfunction_ss_dLdR::synapse0x1e4e550() {
   return (neuron0x1e25f80()*-0.590553);
}

double NNfunction_ss_dLdR::synapse0x1e4e590() {
   return (neuron0x1e26950()*2.26373);
}

double NNfunction_ss_dLdR::synapse0x1e4e5d0() {
   return (neuron0x1e27320()*1.81405);
}

double NNfunction_ss_dLdR::synapse0x1e4e610() {
   return (neuron0x1e27e00()*1.06806);
}

double NNfunction_ss_dLdR::synapse0x1e4e650() {
   return (neuron0x1e287d0()*0.26721);
}

double NNfunction_ss_dLdR::synapse0x1e4e690() {
   return (neuron0x1e258b0()*1.76641);
}

double NNfunction_ss_dLdR::synapse0x1e4e6d0() {
   return (neuron0x1e2a380()*0.82722);
}

double NNfunction_ss_dLdR::synapse0x1e4e710() {
   return (neuron0x1e2ad50()*0.858232);
}

double NNfunction_ss_dLdR::synapse0x1e4e750() {
   return (neuron0x1e2b720()*-1.22199);
}

double NNfunction_ss_dLdR::synapse0x1e4e790() {
   return (neuron0x1e2c0f0()*0.538238);
}

double NNfunction_ss_dLdR::synapse0x1e4e220() {
   return (neuron0x1e2df00()*-0.501519);
}

double NNfunction_ss_dLdR::synapse0x1e4e260() {
   return (neuron0x1e2e1e0()*1.92105);
}

double NNfunction_ss_dLdR::synapse0x1e4e8e0() {
   return (neuron0x1e2ebb0()*-3.49725);
}

double NNfunction_ss_dLdR::synapse0x1e4e920() {
   return (neuron0x1e2f580()*-1.13318);
}

double NNfunction_ss_dLdR::synapse0x1e4e960() {
   return (neuron0x1e2ff50()*-1.17692);
}

double NNfunction_ss_dLdR::synapse0x1e4e9a0() {
   return (neuron0x1e30920()*-1.92601);
}

double NNfunction_ss_dLdR::synapse0x1e4e9e0() {
   return (neuron0x1e29470()*1.01733);
}

double NNfunction_ss_dLdR::synapse0x1e4ea20() {
   return (neuron0x1e29e40()*0.630902);
}

double NNfunction_ss_dLdR::synapse0x1e4ea60() {
   return (neuron0x1e336b0()*0.0724519);
}

double NNfunction_ss_dLdR::synapse0x1e4eaa0() {
   return (neuron0x1e34080()*1.70884);
}

double NNfunction_ss_dLdR::synapse0x1e4eae0() {
   return (neuron0x1e34a50()*-2.37526);
}

double NNfunction_ss_dLdR::synapse0x1e4eb20() {
   return (neuron0x1e35420()*0.479897);
}

double NNfunction_ss_dLdR::synapse0x1e4eb60() {
   return (neuron0x1e35df0()*-1.55437);
}

double NNfunction_ss_dLdR::synapse0x1e4eba0() {
   return (neuron0x1e367c0()*2.23174);
}

double NNfunction_ss_dLdR::synapse0x1e4ebe0() {
   return (neuron0x1e37190()*-2.28814);
}

double NNfunction_ss_dLdR::synapse0x1e4ec20() {
   return (neuron0x1e37b60()*6.23043);
}

double NNfunction_ss_dLdR::synapse0x1e4e7d0() {
   return (neuron0x1e2dbf0()*-1.81491);
}

double NNfunction_ss_dLdR::synapse0x1e4e810() {
   return (neuron0x1e3a740()*1.33735);
}

double NNfunction_ss_dLdR::synapse0x1e4e850() {
   return (neuron0x1e3b110()*0.192121);
}

double NNfunction_ss_dLdR::synapse0x1e4e890() {
   return (neuron0x1e3bae0()*1.75039);
}

double NNfunction_ss_dLdR::synapse0x1e4ee70() {
   return (neuron0x1e3c4b0()*1.20222);
}

double NNfunction_ss_dLdR::synapse0x1e4eeb0() {
   return (neuron0x1e3ce80()*1.11172);
}

double NNfunction_ss_dLdR::synapse0x1e4eef0() {
   return (neuron0x1e3d850()*-0.0459182);
}

double NNfunction_ss_dLdR::synapse0x1e4ef30() {
   return (neuron0x1e3e220()*8.25798);
}

double NNfunction_ss_dLdR::synapse0x1e4ef70() {
   return (neuron0x1e3ebf0()*-1.75468);
}

double NNfunction_ss_dLdR::synapse0x1e4efb0() {
   return (neuron0x1e3f7d0()*-0.585234);
}

double NNfunction_ss_dLdR::synapse0x1e4eff0() {
   return (neuron0x1e401a0()*2.47877);
}

double NNfunction_ss_dLdR::synapse0x1e4f030() {
   return (neuron0x1e31020()*-0.699242);
}

double NNfunction_ss_dLdR::synapse0x1e4f070() {
   return (neuron0x1e319f0()*-2.76488);
}

double NNfunction_ss_dLdR::synapse0x1e4f0b0() {
   return (neuron0x1e323c0()*-2.22195);
}

double NNfunction_ss_dLdR::synapse0x1e4f0f0() {
   return (neuron0x1e44a00()*-1.47263);
}

double NNfunction_ss_dLdR::synapse0x1e4f130() {
   return (neuron0x1e452b0()*0.447721);
}

double NNfunction_ss_dLdR::synapse0x1e4f170() {
   return (neuron0x1e45c80()*-4.98917);
}

double NNfunction_ss_dLdR::synapse0x1e4f1b0() {
   return (neuron0x1e46650()*-1.94856);
}

double NNfunction_ss_dLdR::synapse0x1e4f530() {
   return (neuron0x1e225d0()*-1.06979);
}

double NNfunction_ss_dLdR::synapse0x1e4f570() {
   return (neuron0x1e22ee0()*-0.764405);
}

double NNfunction_ss_dLdR::synapse0x1e4f5b0() {
   return (neuron0x1e239c0()*-0.605004);
}

double NNfunction_ss_dLdR::synapse0x1e4f5f0() {
   return (neuron0x1bdd250()*-0.245763);
}

double NNfunction_ss_dLdR::synapse0x1e4f630() {
   return (neuron0x1e247e0()*-0.403557);
}

double NNfunction_ss_dLdR::synapse0x1e4f670() {
   return (neuron0x1e251b0()*-0.060467);
}

double NNfunction_ss_dLdR::synapse0x1e4f6b0() {
   return (neuron0x1e25f80()*-1.03082);
}

double NNfunction_ss_dLdR::synapse0x1e4f6f0() {
   return (neuron0x1e26950()*-1.58573);
}

double NNfunction_ss_dLdR::synapse0x1e4f730() {
   return (neuron0x1e27320()*0.50506);
}

double NNfunction_ss_dLdR::synapse0x1e4f770() {
   return (neuron0x1e27e00()*0.187757);
}

double NNfunction_ss_dLdR::synapse0x1e4f7b0() {
   return (neuron0x1e287d0()*-1.06942);
}

double NNfunction_ss_dLdR::synapse0x1e4f7f0() {
   return (neuron0x1e258b0()*0.486277);
}

double NNfunction_ss_dLdR::synapse0x1e4f830() {
   return (neuron0x1e2a380()*-0.873316);
}

double NNfunction_ss_dLdR::synapse0x1e4f870() {
   return (neuron0x1e2ad50()*-1.24567);
}

double NNfunction_ss_dLdR::synapse0x1e4f8b0() {
   return (neuron0x1e2b720()*-0.616216);
}

double NNfunction_ss_dLdR::synapse0x1e4f8f0() {
   return (neuron0x1e2c0f0()*-0.92025);
}

double NNfunction_ss_dLdR::synapse0x1e4f380() {
   return (neuron0x1e2df00()*-0.11362);
}

double NNfunction_ss_dLdR::synapse0x1e4f3c0() {
   return (neuron0x1e2e1e0()*0.163034);
}

double NNfunction_ss_dLdR::synapse0x1e4fa40() {
   return (neuron0x1e2ebb0()*-0.644413);
}

double NNfunction_ss_dLdR::synapse0x1e4fa80() {
   return (neuron0x1e2f580()*-0.493088);
}

double NNfunction_ss_dLdR::synapse0x1e4fac0() {
   return (neuron0x1e2ff50()*-1.10847);
}

double NNfunction_ss_dLdR::synapse0x1e4fb00() {
   return (neuron0x1e30920()*-0.879508);
}

double NNfunction_ss_dLdR::synapse0x1e4fb40() {
   return (neuron0x1e29470()*-0.0679758);
}

double NNfunction_ss_dLdR::synapse0x1e4fb80() {
   return (neuron0x1e29e40()*-0.466413);
}

double NNfunction_ss_dLdR::synapse0x1e4fbc0() {
   return (neuron0x1e336b0()*-1.2236);
}

double NNfunction_ss_dLdR::synapse0x1e4fc00() {
   return (neuron0x1e34080()*0.194621);
}

double NNfunction_ss_dLdR::synapse0x1e4fc40() {
   return (neuron0x1e34a50()*-0.446983);
}

double NNfunction_ss_dLdR::synapse0x1e4fc80() {
   return (neuron0x1e35420()*-0.229023);
}

double NNfunction_ss_dLdR::synapse0x1e4fcc0() {
   return (neuron0x1e35df0()*-0.390261);
}

double NNfunction_ss_dLdR::synapse0x1e4fd00() {
   return (neuron0x1e367c0()*0.511115);
}

double NNfunction_ss_dLdR::synapse0x1e4fd40() {
   return (neuron0x1e37190()*0.101091);
}

double NNfunction_ss_dLdR::synapse0x1e4fd80() {
   return (neuron0x1e37b60()*0.513068);
}

double NNfunction_ss_dLdR::synapse0x1e4f930() {
   return (neuron0x1e2dbf0()*-0.568941);
}

double NNfunction_ss_dLdR::synapse0x1e4f970() {
   return (neuron0x1e3a740()*0.200586);
}

double NNfunction_ss_dLdR::synapse0x1e4f9b0() {
   return (neuron0x1e3b110()*-1.04378);
}

double NNfunction_ss_dLdR::synapse0x1e4f9f0() {
   return (neuron0x1e3bae0()*-0.9692);
}

double NNfunction_ss_dLdR::synapse0x1e4ffd0() {
   return (neuron0x1e3c4b0()*-0.282719);
}

double NNfunction_ss_dLdR::synapse0x1e50010() {
   return (neuron0x1e3ce80()*-0.19956);
}

double NNfunction_ss_dLdR::synapse0x1e50050() {
   return (neuron0x1e3d850()*0.136831);
}

double NNfunction_ss_dLdR::synapse0x1e50090() {
   return (neuron0x1e3e220()*0.270989);
}

double NNfunction_ss_dLdR::synapse0x1e500d0() {
   return (neuron0x1e3ebf0()*-0.636191);
}

double NNfunction_ss_dLdR::synapse0x1e50110() {
   return (neuron0x1e3f7d0()*-0.738839);
}

double NNfunction_ss_dLdR::synapse0x1e50150() {
   return (neuron0x1e401a0()*-1.13489);
}

double NNfunction_ss_dLdR::synapse0x1e50190() {
   return (neuron0x1e31020()*-0.858567);
}

double NNfunction_ss_dLdR::synapse0x1e501d0() {
   return (neuron0x1e319f0()*-1.52634);
}

double NNfunction_ss_dLdR::synapse0x1e50210() {
   return (neuron0x1e323c0()*0.652017);
}

double NNfunction_ss_dLdR::synapse0x1e50250() {
   return (neuron0x1e44a00()*0.255992);
}

double NNfunction_ss_dLdR::synapse0x1e50290() {
   return (neuron0x1e452b0()*-0.159303);
}

double NNfunction_ss_dLdR::synapse0x1e502d0() {
   return (neuron0x1e45c80()*0.001078);
}

double NNfunction_ss_dLdR::synapse0x1e50310() {
   return (neuron0x1e46650()*-0.127038);
}

double NNfunction_ss_dLdR::synapse0x1e50690() {
   return (neuron0x1e225d0()*0.00624656);
}

double NNfunction_ss_dLdR::synapse0x1e506d0() {
   return (neuron0x1e22ee0()*0.0133721);
}

double NNfunction_ss_dLdR::synapse0x1e50710() {
   return (neuron0x1e239c0()*-0.83135);
}

double NNfunction_ss_dLdR::synapse0x1e50750() {
   return (neuron0x1bdd250()*-0.0317539);
}

double NNfunction_ss_dLdR::synapse0x1e50790() {
   return (neuron0x1e247e0()*-0.0507459);
}

double NNfunction_ss_dLdR::synapse0x1e507d0() {
   return (neuron0x1e251b0()*0.0477971);
}

double NNfunction_ss_dLdR::synapse0x1e50810() {
   return (neuron0x1e25f80()*-1.49147);
}

double NNfunction_ss_dLdR::synapse0x1e50850() {
   return (neuron0x1e26950()*0.0302405);
}

double NNfunction_ss_dLdR::synapse0x1e50890() {
   return (neuron0x1e27320()*0.553396);
}

double NNfunction_ss_dLdR::synapse0x1e508d0() {
   return (neuron0x1e27e00()*-0.0316955);
}

double NNfunction_ss_dLdR::synapse0x1e50910() {
   return (neuron0x1e287d0()*-0.095182);
}

double NNfunction_ss_dLdR::synapse0x1e50950() {
   return (neuron0x1e258b0()*1.57656);
}

double NNfunction_ss_dLdR::synapse0x1e50990() {
   return (neuron0x1e2a380()*0.00193424);
}

double NNfunction_ss_dLdR::synapse0x1e509d0() {
   return (neuron0x1e2ad50()*-0.0194718);
}

double NNfunction_ss_dLdR::synapse0x1e50a10() {
   return (neuron0x1e2b720()*0.00281891);
}

double NNfunction_ss_dLdR::synapse0x1e50a50() {
   return (neuron0x1e2c0f0()*-1.1443);
}

double NNfunction_ss_dLdR::synapse0x1e504e0() {
   return (neuron0x1e2df00()*-0.0131629);
}

double NNfunction_ss_dLdR::synapse0x1e50520() {
   return (neuron0x1e2e1e0()*-0.0251564);
}

double NNfunction_ss_dLdR::synapse0x1e50ba0() {
   return (neuron0x1e2ebb0()*-0.235656);
}

double NNfunction_ss_dLdR::synapse0x1e50be0() {
   return (neuron0x1e2f580()*-0.393877);
}

double NNfunction_ss_dLdR::synapse0x1e50c20() {
   return (neuron0x1e2ff50()*0.00497993);
}

double NNfunction_ss_dLdR::synapse0x1e50c60() {
   return (neuron0x1e30920()*-0.792726);
}

double NNfunction_ss_dLdR::synapse0x1e50ca0() {
   return (neuron0x1e29470()*-0.0203922);
}

double NNfunction_ss_dLdR::synapse0x1e50ce0() {
   return (neuron0x1e29e40()*0.00552096);
}

double NNfunction_ss_dLdR::synapse0x1e50d20() {
   return (neuron0x1e336b0()*-0.0394641);
}

double NNfunction_ss_dLdR::synapse0x1e50d60() {
   return (neuron0x1e34080()*0.114233);
}

double NNfunction_ss_dLdR::synapse0x1e50da0() {
   return (neuron0x1e34a50()*0.0156927);
}

double NNfunction_ss_dLdR::synapse0x1e50de0() {
   return (neuron0x1e35420()*0.00986117);
}

double NNfunction_ss_dLdR::synapse0x1e50e20() {
   return (neuron0x1e35df0()*0.00906094);
}

double NNfunction_ss_dLdR::synapse0x1e50e60() {
   return (neuron0x1e367c0()*0.463223);
}

double NNfunction_ss_dLdR::synapse0x1e50ea0() {
   return (neuron0x1e37190()*0.0180379);
}

double NNfunction_ss_dLdR::synapse0x1e50ee0() {
   return (neuron0x1e37b60()*1.02911);
}

double NNfunction_ss_dLdR::synapse0x1e50a90() {
   return (neuron0x1e2dbf0()*0.0151597);
}

double NNfunction_ss_dLdR::synapse0x1e50ad0() {
   return (neuron0x1e3a740()*-0.0193035);
}

double NNfunction_ss_dLdR::synapse0x1e50b10() {
   return (neuron0x1e3b110()*-1.18432);
}

double NNfunction_ss_dLdR::synapse0x1e50b50() {
   return (neuron0x1e3bae0()*-0.0105451);
}

double NNfunction_ss_dLdR::synapse0x1e51130() {
   return (neuron0x1e3c4b0()*2.67377);
}

double NNfunction_ss_dLdR::synapse0x1e51170() {
   return (neuron0x1e3ce80()*0.00697795);
}

double NNfunction_ss_dLdR::synapse0x1e511b0() {
   return (neuron0x1e3d850()*-0.0203847);
}

double NNfunction_ss_dLdR::synapse0x1e511f0() {
   return (neuron0x1e3e220()*0.81143);
}

double NNfunction_ss_dLdR::synapse0x1e51230() {
   return (neuron0x1e3ebf0()*-0.599131);
}

double NNfunction_ss_dLdR::synapse0x1e51270() {
   return (neuron0x1e3f7d0()*1.51983);
}

double NNfunction_ss_dLdR::synapse0x1e512b0() {
   return (neuron0x1e401a0()*-0.115099);
}

double NNfunction_ss_dLdR::synapse0x1e512f0() {
   return (neuron0x1e31020()*0.0216393);
}

double NNfunction_ss_dLdR::synapse0x1e51330() {
   return (neuron0x1e319f0()*-0.00952987);
}

double NNfunction_ss_dLdR::synapse0x1e51370() {
   return (neuron0x1e323c0()*0.0359532);
}

double NNfunction_ss_dLdR::synapse0x1e513b0() {
   return (neuron0x1e44a00()*1.56415);
}

double NNfunction_ss_dLdR::synapse0x1e513f0() {
   return (neuron0x1e452b0()*0.20372);
}

double NNfunction_ss_dLdR::synapse0x1e51430() {
   return (neuron0x1e45c80()*-0.236736);
}

double NNfunction_ss_dLdR::synapse0x1e51470() {
   return (neuron0x1e46650()*-0.0182111);
}

double NNfunction_ss_dLdR::synapse0x1e22590() {
   return (neuron0x1e4d850()*9.96441);
}

double NNfunction_ss_dLdR::synapse0x1e516d0() {
   return (neuron0x1e4dbf0()*-5.42846);
}

double NNfunction_ss_dLdR::synapse0x1e51710() {
   return (neuron0x1e4e090()*-6.54307);
}

double NNfunction_ss_dLdR::synapse0x1e51750() {
   return (neuron0x1e4f1f0()*-2.96471);
}

double NNfunction_ss_dLdR::synapse0x1e51790() {
   return (neuron0x1e50350()*-6.02742);
}

