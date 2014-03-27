#include "NNfunction_NG_3.h"
#include <cmath>

double NNfunction_NG_3::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.8402)/15.3219;
   input1 = (in1 - -16.4444)/1131.97;
   input2 = (in2 - 626.669)/598.341;
   input3 = (in3 - -24.5001)/764.107;
   input4 = (in4 - 1024.59)/933.288;
   input5 = (in5 - 900.139)/953.11;
   input6 = (in6 - 909.538)/956.951;
   input7 = (in7 - 912.684)/933.008;
   input8 = (in8 - 919.074)/970.618;
   input9 = (in9 - 904.667)/954.203;
   input10 = (in10 - 962.74)/946.345;
   input11 = (in11 - 627.822)/774.775;
   input12 = (in12 - 714.912)/857.008;
   input13 = (in13 - 483.233)/499.408;
   input14 = (in14 - 701.077)/798.17;
   input15 = (in15 - 732.052)/822.103;
   input16 = (in16 - 547.536)/572.809;
   input17 = (in17 - 747.653)/888.841;
   input18 = (in18 - 750.783)/893.516;
   input19 = (in19 - 769.202)/851.888;
   input20 = (in20 - -2.17766)/492.476;
   input21 = (in21 - -9.62474)/1138.1;
   input22 = (in22 - -0.375757)/1195.54;
   input23 = (in23 - -84.1938)/245.775;
   switch(index) {
     case 0:
         return neuron0x2c52bc0();
     default:
         return 0.;
   }
}

double NNfunction_NG_3::Value(int index, double* input) {
   input0 = (input[0] - 23.8402)/15.3219;
   input1 = (input[1] - -16.4444)/1131.97;
   input2 = (input[2] - 626.669)/598.341;
   input3 = (input[3] - -24.5001)/764.107;
   input4 = (input[4] - 1024.59)/933.288;
   input5 = (input[5] - 900.139)/953.11;
   input6 = (input[6] - 909.538)/956.951;
   input7 = (input[7] - 912.684)/933.008;
   input8 = (input[8] - 919.074)/970.618;
   input9 = (input[9] - 904.667)/954.203;
   input10 = (input[10] - 962.74)/946.345;
   input11 = (input[11] - 627.822)/774.775;
   input12 = (input[12] - 714.912)/857.008;
   input13 = (input[13] - 483.233)/499.408;
   input14 = (input[14] - 701.077)/798.17;
   input15 = (input[15] - 732.052)/822.103;
   input16 = (input[16] - 547.536)/572.809;
   input17 = (input[17] - 747.653)/888.841;
   input18 = (input[18] - 750.783)/893.516;
   input19 = (input[19] - 769.202)/851.888;
   input20 = (input[20] - -2.17766)/492.476;
   input21 = (input[21] - -9.62474)/1138.1;
   input22 = (input[22] - -0.375757)/1195.54;
   input23 = (input[23] - -84.1938)/245.775;
   switch(index) {
     case 0:
         return neuron0x2c52bc0();
     default:
         return 0.;
   }
}

double NNfunction_NG_3::neuron0x2c1ec80() {
   return input0;
}

double NNfunction_NG_3::neuron0x2c1efc0() {
   return input1;
}

double NNfunction_NG_3::neuron0x2c1f300() {
   return input2;
}

double NNfunction_NG_3::neuron0x2c1f640() {
   return input3;
}

double NNfunction_NG_3::neuron0x2c1f980() {
   return input4;
}

double NNfunction_NG_3::neuron0x2c1fcc0() {
   return input5;
}

double NNfunction_NG_3::neuron0x2c20000() {
   return input6;
}

double NNfunction_NG_3::neuron0x2c20340() {
   return input7;
}

double NNfunction_NG_3::neuron0x2c20680() {
   return input8;
}

double NNfunction_NG_3::neuron0x2c209c0() {
   return input9;
}

double NNfunction_NG_3::neuron0x2c20d00() {
   return input10;
}

double NNfunction_NG_3::neuron0x2c21040() {
   return input11;
}

double NNfunction_NG_3::neuron0x2c21380() {
   return input12;
}

double NNfunction_NG_3::neuron0x2c216c0() {
   return input13;
}

double NNfunction_NG_3::neuron0x2c21a00() {
   return input14;
}

double NNfunction_NG_3::neuron0x2c21d40() {
   return input15;
}

double NNfunction_NG_3::neuron0x2c22080() {
   return input16;
}

double NNfunction_NG_3::neuron0x2c225e0() {
   return input17;
}

double NNfunction_NG_3::neuron0x2c22800() {
   return input18;
}

double NNfunction_NG_3::neuron0x2c22b40() {
   return input19;
}

double NNfunction_NG_3::neuron0x2c22e80() {
   return input20;
}

double NNfunction_NG_3::neuron0x2c231c0() {
   return input21;
}

double NNfunction_NG_3::neuron0x2c23500() {
   return input22;
}

double NNfunction_NG_3::neuron0x2c23840() {
   return input23;
}

double NNfunction_NG_3::input0x2c23ce0() {
   double input = 1.00717;
   input += synapse0x29deaf0();
   input += synapse0x2c1eb40();
   input += synapse0x2c1eb80();
   input += synapse0x2c23f90();
   input += synapse0x2c23fd0();
   input += synapse0x2c24010();
   input += synapse0x2c24050();
   input += synapse0x2c24090();
   input += synapse0x2c240d0();
   input += synapse0x2c24110();
   input += synapse0x2c24150();
   input += synapse0x2c24190();
   input += synapse0x2c241d0();
   input += synapse0x2c24210();
   input += synapse0x2c24250();
   input += synapse0x2c24290();
   input += synapse0x2c1eab0();
   input += synapse0x2c1eaf0();
   input += synapse0x29d0350();
   input += synapse0x29d0390();
   input += synapse0x2c244f0();
   input += synapse0x2c24530();
   input += synapse0x2c24570();
   input += synapse0x2c245b0();
   return input;
}

double NNfunction_NG_3::neuron0x2c23ce0() {
   double input = input0x2c23ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c245f0() {
   double input = -0.455449;
   input += synapse0x2c24930();
   input += synapse0x2c24970();
   input += synapse0x2c249b0();
   input += synapse0x2c249f0();
   input += synapse0x2c24a30();
   input += synapse0x2c24a70();
   input += synapse0x2c24ab0();
   input += synapse0x2c24af0();
   input += synapse0x2c24b30();
   input += synapse0x2c243e0();
   input += synapse0x2c24420();
   input += synapse0x2c24460();
   input += synapse0x2c244a0();
   input += synapse0x2c24d80();
   input += synapse0x2c24dc0();
   input += synapse0x2c24e00();
   input += synapse0x2c24780();
   input += synapse0x2c247c0();
   input += synapse0x2c24f50();
   input += synapse0x2c24f90();
   input += synapse0x2c24fd0();
   input += synapse0x2c25010();
   input += synapse0x2c25050();
   input += synapse0x2c25090();
   return input;
}

double NNfunction_NG_3::neuron0x2c245f0() {
   double input = input0x2c245f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c250d0() {
   double input = -2.52517;
   input += synapse0x2c25410();
   input += synapse0x2c25450();
   input += synapse0x2c25490();
   input += synapse0x2c254d0();
   input += synapse0x2c25510();
   input += synapse0x2c25550();
   input += synapse0x2c25590();
   input += synapse0x2c255d0();
   input += synapse0x2c25610();
   input += synapse0x2c25650();
   input += synapse0x2c25690();
   input += synapse0x2c256d0();
   input += synapse0x2c25710();
   input += synapse0x2c25750();
   input += synapse0x2c25790();
   input += synapse0x2c257d0();
   input += synapse0x2c25260();
   input += synapse0x2c252a0();
   input += synapse0x29de1c0();
   input += synapse0x29de200();
   input += synapse0x2c0dd10();
   input += synapse0x2c0dd50();
   input += synapse0x2c0dd90();
   input += synapse0x2c1ebc0();
   return input;
}

double NNfunction_NG_3::neuron0x2c250d0() {
   double input = input0x2c250d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x29de960() {
   double input = -4.87891;
   input += synapse0x2c24d20();
   input += synapse0x2c1ec00();
   input += synapse0x2c1ec40();
   input += synapse0x2c25920();
   input += synapse0x2c25960();
   input += synapse0x2c259a0();
   input += synapse0x2c259e0();
   input += synapse0x2c25a20();
   input += synapse0x2c25a60();
   input += synapse0x2c25aa0();
   input += synapse0x2c25ae0();
   input += synapse0x2c25b20();
   input += synapse0x2c25b60();
   input += synapse0x2c25ba0();
   input += synapse0x2c25be0();
   input += synapse0x2c25c20();
   input += synapse0x2c24b70();
   input += synapse0x2c24bb0();
   input += synapse0x2c25d70();
   input += synapse0x2c25db0();
   input += synapse0x2c25df0();
   input += synapse0x2c25e30();
   input += synapse0x2c25e70();
   input += synapse0x2c25eb0();
   return input;
}

double NNfunction_NG_3::neuron0x29de960() {
   double input = input0x29de960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c25ef0() {
   double input = -0.741646;
   input += synapse0x2c26230();
   input += synapse0x2c26270();
   input += synapse0x2c262b0();
   input += synapse0x2c262f0();
   input += synapse0x2c26330();
   input += synapse0x2c26370();
   input += synapse0x2c263b0();
   input += synapse0x2c263f0();
   input += synapse0x2c26430();
   input += synapse0x2c26470();
   input += synapse0x2c264b0();
   input += synapse0x2c264f0();
   input += synapse0x2c26530();
   input += synapse0x2c26570();
   input += synapse0x2c265b0();
   input += synapse0x2c265f0();
   input += synapse0x2c26080();
   input += synapse0x2c260c0();
   input += synapse0x2c26740();
   input += synapse0x2c26780();
   input += synapse0x2c267c0();
   input += synapse0x2c26800();
   input += synapse0x2c26840();
   input += synapse0x2c26880();
   return input;
}

double NNfunction_NG_3::neuron0x2c25ef0() {
   double input = input0x2c25ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c268c0() {
   double input = 1.97817;
   input += synapse0x2c26c00();
   input += synapse0x2c26c40();
   input += synapse0x2c26c80();
   input += synapse0x2c26cc0();
   input += synapse0x2c26d00();
   input += synapse0x2c26d40();
   input += synapse0x2c26d80();
   input += synapse0x2c26dc0();
   input += synapse0x2c26e00();
   input += synapse0x29de550();
   input += synapse0x29de590();
   input += synapse0x29de5d0();
   input += synapse0x29de610();
   input += synapse0x29de650();
   input += synapse0x29de690();
   input += synapse0x29de6d0();
   input += synapse0x2c26a50();
   input += synapse0x2c26a90();
   input += synapse0x29de820();
   input += synapse0x29de860();
   input += synapse0x29de8a0();
   input += synapse0x29de8e0();
   input += synapse0x29de920();
   input += synapse0x2c27650();
   return input;
}

double NNfunction_NG_3::neuron0x2c268c0() {
   double input = input0x2c268c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c27690() {
   double input = -3.85311;
   input += synapse0x2c279d0();
   input += synapse0x2c27a10();
   input += synapse0x2c27a50();
   input += synapse0x2c27a90();
   input += synapse0x2c27ad0();
   input += synapse0x2c27b10();
   input += synapse0x2c27b50();
   input += synapse0x2c27b90();
   input += synapse0x2c27bd0();
   input += synapse0x2c27c10();
   input += synapse0x2c27c50();
   input += synapse0x2c27c90();
   input += synapse0x2c27cd0();
   input += synapse0x2c27d10();
   input += synapse0x2c27d50();
   input += synapse0x2c27d90();
   input += synapse0x2c27820();
   input += synapse0x2c27860();
   input += synapse0x2c27ee0();
   input += synapse0x2c27f20();
   input += synapse0x2c27f60();
   input += synapse0x2c27fa0();
   input += synapse0x2c27fe0();
   input += synapse0x2c28020();
   return input;
}

double NNfunction_NG_3::neuron0x2c27690() {
   double input = input0x2c27690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c28060() {
   double input = -0.16933;
   input += synapse0x2c283a0();
   input += synapse0x2c283e0();
   input += synapse0x2c28420();
   input += synapse0x2c28460();
   input += synapse0x2c284a0();
   input += synapse0x2c284e0();
   input += synapse0x2c28520();
   input += synapse0x2c28560();
   input += synapse0x2c285a0();
   input += synapse0x2c285e0();
   input += synapse0x2c28620();
   input += synapse0x2c28660();
   input += synapse0x2c286a0();
   input += synapse0x2c286e0();
   input += synapse0x2c28720();
   input += synapse0x2c28760();
   input += synapse0x2c281f0();
   input += synapse0x2c28230();
   input += synapse0x2c288b0();
   input += synapse0x2c288f0();
   input += synapse0x2c28930();
   input += synapse0x2c28970();
   input += synapse0x2c289b0();
   input += synapse0x2c289f0();
   return input;
}

double NNfunction_NG_3::neuron0x2c28060() {
   double input = input0x2c28060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c28a30() {
   double input = -0.894825;
   input += synapse0x2c224d0();
   input += synapse0x2c22510();
   input += synapse0x2c22550();
   input += synapse0x2c22590();
   input += synapse0x2c28f80();
   input += synapse0x2c28fc0();
   input += synapse0x2c29000();
   input += synapse0x2c29040();
   input += synapse0x2c29080();
   input += synapse0x2c290c0();
   input += synapse0x2c29100();
   input += synapse0x2c29140();
   input += synapse0x2c29180();
   input += synapse0x2c291c0();
   input += synapse0x2c29200();
   input += synapse0x2c29240();
   input += synapse0x2c28bc0();
   input += synapse0x2c28c00();
   input += synapse0x2c29390();
   input += synapse0x2c293d0();
   input += synapse0x2c29410();
   input += synapse0x2c29450();
   input += synapse0x2c29490();
   input += synapse0x2c294d0();
   return input;
}

double NNfunction_NG_3::neuron0x2c28a30() {
   double input = input0x2c28a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c29510() {
   double input = -0.744445;
   input += synapse0x2c29850();
   input += synapse0x2c29890();
   input += synapse0x2c298d0();
   input += synapse0x2c29910();
   input += synapse0x2c29950();
   input += synapse0x2c29990();
   input += synapse0x2c299d0();
   input += synapse0x2c29a10();
   input += synapse0x2c29a50();
   input += synapse0x2c29a90();
   input += synapse0x2c29ad0();
   input += synapse0x2c29b10();
   input += synapse0x2c29b50();
   input += synapse0x2c29b90();
   input += synapse0x2c29bd0();
   input += synapse0x2c29c10();
   input += synapse0x2c296a0();
   input += synapse0x2c296e0();
   input += synapse0x2c29d60();
   input += synapse0x2c29da0();
   input += synapse0x2c29de0();
   input += synapse0x2c29e20();
   input += synapse0x2c29e60();
   input += synapse0x2c29ea0();
   return input;
}

double NNfunction_NG_3::neuron0x2c29510() {
   double input = input0x2c29510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c29ee0() {
   double input = -0.500598;
   input += synapse0x2c2a220();
   input += synapse0x2c2a260();
   input += synapse0x2c2a2a0();
   input += synapse0x2c2a2e0();
   input += synapse0x2c2a320();
   input += synapse0x2c2a360();
   input += synapse0x2c2a3a0();
   input += synapse0x2c2a3e0();
   input += synapse0x2c2a420();
   input += synapse0x2c2a460();
   input += synapse0x2c2a4a0();
   input += synapse0x2c2a4e0();
   input += synapse0x2c2a520();
   input += synapse0x2c2a560();
   input += synapse0x2c2a5a0();
   input += synapse0x2c2a5e0();
   input += synapse0x2c2a070();
   input += synapse0x2c2a0b0();
   input += synapse0x2c26e40();
   input += synapse0x2c26e80();
   input += synapse0x2c26ec0();
   input += synapse0x2c26f00();
   input += synapse0x2c26f40();
   input += synapse0x2c26f80();
   return input;
}

double NNfunction_NG_3::neuron0x2c29ee0() {
   double input = input0x2c29ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c26fc0() {
   double input = -1.63725;
   input += synapse0x2c27300();
   input += synapse0x2c27340();
   input += synapse0x2c27380();
   input += synapse0x2c273c0();
   input += synapse0x2c27400();
   input += synapse0x2c27440();
   input += synapse0x2c27480();
   input += synapse0x2c274c0();
   input += synapse0x2c27500();
   input += synapse0x2c27540();
   input += synapse0x2c27580();
   input += synapse0x2c275c0();
   input += synapse0x2c27600();
   input += synapse0x2c2b740();
   input += synapse0x2c2b780();
   input += synapse0x2c2b7c0();
   input += synapse0x2c27150();
   input += synapse0x2c27190();
   input += synapse0x2c2b910();
   input += synapse0x2c2b950();
   input += synapse0x2c2b990();
   input += synapse0x2c2b9d0();
   input += synapse0x2c2ba10();
   input += synapse0x2c2ba50();
   return input;
}

double NNfunction_NG_3::neuron0x2c26fc0() {
   double input = input0x2c26fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c2ba90() {
   double input = -1.13876;
   input += synapse0x2c2bdd0();
   input += synapse0x2c2be10();
   input += synapse0x2c2be50();
   input += synapse0x2c2be90();
   input += synapse0x2c2bed0();
   input += synapse0x2c2bf10();
   input += synapse0x2c2bf50();
   input += synapse0x2c2bf90();
   input += synapse0x2c2bfd0();
   input += synapse0x2c2c010();
   input += synapse0x2c2c050();
   input += synapse0x2c2c090();
   input += synapse0x2c2c0d0();
   input += synapse0x2c2c110();
   input += synapse0x2c2c150();
   input += synapse0x2c2c190();
   input += synapse0x2c2bc20();
   input += synapse0x2c2bc60();
   input += synapse0x2c2c2e0();
   input += synapse0x2c2c320();
   input += synapse0x2c2c360();
   input += synapse0x2c2c3a0();
   input += synapse0x2c2c3e0();
   input += synapse0x2c2c420();
   return input;
}

double NNfunction_NG_3::neuron0x2c2ba90() {
   double input = input0x2c2ba90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c2c460() {
   double input = -0.267496;
   input += synapse0x2c2c7a0();
   input += synapse0x2c2c7e0();
   input += synapse0x2c2c820();
   input += synapse0x2c2c860();
   input += synapse0x2c2c8a0();
   input += synapse0x2c2c8e0();
   input += synapse0x2c2c920();
   input += synapse0x2c2c960();
   input += synapse0x2c2c9a0();
   input += synapse0x2c2c9e0();
   input += synapse0x2c2ca20();
   input += synapse0x2c2ca60();
   input += synapse0x2c2caa0();
   input += synapse0x2c2cae0();
   input += synapse0x2c2cb20();
   input += synapse0x2c2cb60();
   input += synapse0x2c2c5f0();
   input += synapse0x2c2c630();
   input += synapse0x2c2ccb0();
   input += synapse0x2c2ccf0();
   input += synapse0x2c2cd30();
   input += synapse0x2c2cd70();
   input += synapse0x2c2cdb0();
   input += synapse0x2c2cdf0();
   return input;
}

double NNfunction_NG_3::neuron0x2c2c460() {
   double input = input0x2c2c460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c2ce30() {
   double input = -1.77735;
   input += synapse0x2c2d170();
   input += synapse0x2c2d1b0();
   input += synapse0x2c2d1f0();
   input += synapse0x2c2d230();
   input += synapse0x2c2d270();
   input += synapse0x2c2d2b0();
   input += synapse0x2c2d2f0();
   input += synapse0x2c2d330();
   input += synapse0x2c2d370();
   input += synapse0x2c2d3b0();
   input += synapse0x2c2d3f0();
   input += synapse0x2c2d430();
   input += synapse0x2c2d470();
   input += synapse0x2c2d4b0();
   input += synapse0x2c2d4f0();
   input += synapse0x2c2d530();
   input += synapse0x2c2cfc0();
   input += synapse0x2c2d000();
   input += synapse0x2c2d680();
   input += synapse0x2c2d6c0();
   input += synapse0x2c2d700();
   input += synapse0x2c2d740();
   input += synapse0x2c2d780();
   input += synapse0x2c2d7c0();
   return input;
}

double NNfunction_NG_3::neuron0x2c2ce30() {
   double input = input0x2c2ce30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c2d800() {
   double input = 1.42892;
   input += synapse0x2c2db40();
   input += synapse0x2c1eea0();
   input += synapse0x2c1eee0();
   input += synapse0x2c1f1e0();
   input += synapse0x2c1f220();
   input += synapse0x2c1f520();
   input += synapse0x2c1f560();
   input += synapse0x2c1f860();
   input += synapse0x2c1f8a0();
   input += synapse0x2c1fba0();
   input += synapse0x2c1fbe0();
   input += synapse0x2c1fee0();
   input += synapse0x2c1ff20();
   input += synapse0x2c20220();
   input += synapse0x2c20260();
   input += synapse0x2c20560();
   input += synapse0x2c205a0();
   input += synapse0x2c208a0();
   input += synapse0x2c208e0();
   input += synapse0x2c20be0();
   input += synapse0x2c20c20();
   input += synapse0x2c20f20();
   input += synapse0x2c20f60();
   input += synapse0x2c21260();
   return input;
}

double NNfunction_NG_3::neuron0x2c2d800() {
   double input = input0x2c2d800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c2f610() {
   double input = -2.36185;
   input += synapse0x2c212a0();
   input += synapse0x2c21f60();
   input += synapse0x2c21fa0();
   input += synapse0x2c2d990();
   input += synapse0x2c2d9d0();
   input += synapse0x2c222a0();
   input += synapse0x2c222e0();
   input += synapse0x29d0230();
   input += synapse0x29d0270();
   input += synapse0x2c22a20();
   input += synapse0x2c22a60();
   input += synapse0x2c22d60();
   input += synapse0x2c22da0();
   input += synapse0x2c230a0();
   input += synapse0x2c230e0();
   input += synapse0x2c233e0();
   input += synapse0x2c23420();
   input += synapse0x2c23720();
   input += synapse0x2c23760();
   input += synapse0x2c23a60();
   input += synapse0x2c23aa0();
   input += synapse0x2c215a0();
   input += synapse0x2c215e0();
   input += synapse0x2c2f8b0();
   return input;
}

double NNfunction_NG_3::neuron0x2c2f610() {
   double input = input0x2c2f610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c2f8f0() {
   double input = 0.251288;
   input += synapse0x2c2fc30();
   input += synapse0x2c2fc70();
   input += synapse0x2c2fcb0();
   input += synapse0x2c2fcf0();
   input += synapse0x2c2fd30();
   input += synapse0x2c2fd70();
   input += synapse0x2c2fdb0();
   input += synapse0x2c2fdf0();
   input += synapse0x2c2fe30();
   input += synapse0x2c2fe70();
   input += synapse0x2c2feb0();
   input += synapse0x2c2fef0();
   input += synapse0x2c2ff30();
   input += synapse0x2c2ff70();
   input += synapse0x2c2ffb0();
   input += synapse0x2c2fff0();
   input += synapse0x2c2fa80();
   input += synapse0x2c2fac0();
   input += synapse0x2c30140();
   input += synapse0x2c30180();
   input += synapse0x2c301c0();
   input += synapse0x2c30200();
   input += synapse0x2c30240();
   input += synapse0x2c30280();
   return input;
}

double NNfunction_NG_3::neuron0x2c2f8f0() {
   double input = input0x2c2f8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c302c0() {
   double input = 1.75125;
   input += synapse0x2c30600();
   input += synapse0x2c30640();
   input += synapse0x2c30680();
   input += synapse0x2c306c0();
   input += synapse0x2c30700();
   input += synapse0x2c30740();
   input += synapse0x2c30780();
   input += synapse0x2c307c0();
   input += synapse0x2c30800();
   input += synapse0x2c30840();
   input += synapse0x2c30880();
   input += synapse0x2c308c0();
   input += synapse0x2c30900();
   input += synapse0x2c30940();
   input += synapse0x2c30980();
   input += synapse0x2c309c0();
   input += synapse0x2c30450();
   input += synapse0x2c30490();
   input += synapse0x2c30b10();
   input += synapse0x2c30b50();
   input += synapse0x2c30b90();
   input += synapse0x2c30bd0();
   input += synapse0x2c30c10();
   input += synapse0x2c30c50();
   return input;
}

double NNfunction_NG_3::neuron0x2c302c0() {
   double input = input0x2c302c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c30c90() {
   double input = 1.1628;
   input += synapse0x2c30fd0();
   input += synapse0x2c31010();
   input += synapse0x2c31050();
   input += synapse0x2c31090();
   input += synapse0x2c310d0();
   input += synapse0x2c31110();
   input += synapse0x2c31150();
   input += synapse0x2c31190();
   input += synapse0x2c311d0();
   input += synapse0x2c31210();
   input += synapse0x2c31250();
   input += synapse0x2c31290();
   input += synapse0x2c312d0();
   input += synapse0x2c31310();
   input += synapse0x2c31350();
   input += synapse0x2c31390();
   input += synapse0x2c30e20();
   input += synapse0x2c30e60();
   input += synapse0x2c314e0();
   input += synapse0x2c31520();
   input += synapse0x2c31560();
   input += synapse0x2c315a0();
   input += synapse0x2c315e0();
   input += synapse0x2c31620();
   return input;
}

double NNfunction_NG_3::neuron0x2c30c90() {
   double input = input0x2c30c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c31660() {
   double input = 2.49317;
   input += synapse0x2c319a0();
   input += synapse0x2c319e0();
   input += synapse0x2c31a20();
   input += synapse0x2c31a60();
   input += synapse0x2c31aa0();
   input += synapse0x2c31ae0();
   input += synapse0x2c31b20();
   input += synapse0x2c31b60();
   input += synapse0x2c31ba0();
   input += synapse0x2c31be0();
   input += synapse0x2c31c20();
   input += synapse0x2c31c60();
   input += synapse0x2c31ca0();
   input += synapse0x2c31ce0();
   input += synapse0x2c31d20();
   input += synapse0x2c31d60();
   input += synapse0x2c317f0();
   input += synapse0x2c31830();
   input += synapse0x2c31eb0();
   input += synapse0x2c31ef0();
   input += synapse0x2c31f30();
   input += synapse0x2c31f70();
   input += synapse0x2c31fb0();
   input += synapse0x2c31ff0();
   return input;
}

double NNfunction_NG_3::neuron0x2c31660() {
   double input = input0x2c31660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c32030() {
   double input = -0.955091;
   input += synapse0x2c32370();
   input += synapse0x2c323b0();
   input += synapse0x2c323f0();
   input += synapse0x2c32430();
   input += synapse0x2c32470();
   input += synapse0x2c324b0();
   input += synapse0x2c324f0();
   input += synapse0x2c32530();
   input += synapse0x2c32570();
   input += synapse0x2c2a730();
   input += synapse0x2c2a770();
   input += synapse0x2c2a7b0();
   input += synapse0x2c2a7f0();
   input += synapse0x2c2a830();
   input += synapse0x2c2a870();
   input += synapse0x2c2a8b0();
   input += synapse0x2c321c0();
   input += synapse0x2c32200();
   input += synapse0x2c2aa00();
   input += synapse0x2c2aa40();
   input += synapse0x2c2aa80();
   input += synapse0x2c2aac0();
   input += synapse0x2c2ab00();
   input += synapse0x2c2ab40();
   return input;
}

double NNfunction_NG_3::neuron0x2c32030() {
   double input = input0x2c32030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c2ab80() {
   double input = 1.79112;
   input += synapse0x2c2aec0();
   input += synapse0x2c2af00();
   input += synapse0x2c2af40();
   input += synapse0x2c2af80();
   input += synapse0x2c2afc0();
   input += synapse0x2c2b000();
   input += synapse0x2c2b040();
   input += synapse0x2c2b080();
   input += synapse0x2c2b0c0();
   input += synapse0x2c2b100();
   input += synapse0x2c2b140();
   input += synapse0x2c2b180();
   input += synapse0x2c2b1c0();
   input += synapse0x2c2b200();
   input += synapse0x2c2b240();
   input += synapse0x2c2b280();
   input += synapse0x2c2ad10();
   input += synapse0x2c2ad50();
   input += synapse0x2c2b3d0();
   input += synapse0x2c2b410();
   input += synapse0x2c2b450();
   input += synapse0x2c2b490();
   input += synapse0x2c2b4d0();
   input += synapse0x2c2b510();
   return input;
}

double NNfunction_NG_3::neuron0x2c2ab80() {
   double input = input0x2c2ab80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c2b550() {
   double input = 0.721276;
   input += synapse0x2c2b6e0();
   input += synapse0x2c34770();
   input += synapse0x2c347b0();
   input += synapse0x2c347f0();
   input += synapse0x2c34830();
   input += synapse0x2c34870();
   input += synapse0x2c348b0();
   input += synapse0x2c348f0();
   input += synapse0x2c34930();
   input += synapse0x2c34970();
   input += synapse0x2c349b0();
   input += synapse0x2c349f0();
   input += synapse0x2c34a30();
   input += synapse0x2c34a70();
   input += synapse0x2c34ab0();
   input += synapse0x2c34af0();
   input += synapse0x2c345c0();
   input += synapse0x2c34600();
   input += synapse0x2c34c40();
   input += synapse0x2c34c80();
   input += synapse0x2c34cc0();
   input += synapse0x2c34d00();
   input += synapse0x2c34d40();
   input += synapse0x2c34d80();
   return input;
}

double NNfunction_NG_3::neuron0x2c2b550() {
   double input = input0x2c2b550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c34dc0() {
   double input = -0.905498;
   input += synapse0x2c35100();
   input += synapse0x2c35140();
   input += synapse0x2c35180();
   input += synapse0x2c351c0();
   input += synapse0x2c35200();
   input += synapse0x2c35240();
   input += synapse0x2c35280();
   input += synapse0x2c352c0();
   input += synapse0x2c35300();
   input += synapse0x2c35340();
   input += synapse0x2c35380();
   input += synapse0x2c353c0();
   input += synapse0x2c35400();
   input += synapse0x2c35440();
   input += synapse0x2c35480();
   input += synapse0x2c354c0();
   input += synapse0x2c34f50();
   input += synapse0x2c34f90();
   input += synapse0x2c35610();
   input += synapse0x2c35650();
   input += synapse0x2c35690();
   input += synapse0x2c356d0();
   input += synapse0x2c35710();
   input += synapse0x2c35750();
   return input;
}

double NNfunction_NG_3::neuron0x2c34dc0() {
   double input = input0x2c34dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c35790() {
   double input = -1.5614;
   input += synapse0x2c35ad0();
   input += synapse0x2c35b10();
   input += synapse0x2c35b50();
   input += synapse0x2c35b90();
   input += synapse0x2c35bd0();
   input += synapse0x2c35c10();
   input += synapse0x2c35c50();
   input += synapse0x2c35c90();
   input += synapse0x2c35cd0();
   input += synapse0x2c35d10();
   input += synapse0x2c35d50();
   input += synapse0x2c35d90();
   input += synapse0x2c35dd0();
   input += synapse0x2c35e10();
   input += synapse0x2c35e50();
   input += synapse0x2c35e90();
   input += synapse0x2c35920();
   input += synapse0x2c35960();
   input += synapse0x2c35fe0();
   input += synapse0x2c36020();
   input += synapse0x2c36060();
   input += synapse0x2c360a0();
   input += synapse0x2c360e0();
   input += synapse0x2c36120();
   return input;
}

double NNfunction_NG_3::neuron0x2c35790() {
   double input = input0x2c35790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c36160() {
   double input = -1.39054;
   input += synapse0x2c364a0();
   input += synapse0x2c364e0();
   input += synapse0x2c36520();
   input += synapse0x2c36560();
   input += synapse0x2c365a0();
   input += synapse0x2c365e0();
   input += synapse0x2c36620();
   input += synapse0x2c36660();
   input += synapse0x2c366a0();
   input += synapse0x2c366e0();
   input += synapse0x2c36720();
   input += synapse0x2c36760();
   input += synapse0x2c367a0();
   input += synapse0x2c367e0();
   input += synapse0x2c36820();
   input += synapse0x2c36860();
   input += synapse0x2c362f0();
   input += synapse0x2c36330();
   input += synapse0x2c369b0();
   input += synapse0x2c369f0();
   input += synapse0x2c36a30();
   input += synapse0x2c36a70();
   input += synapse0x2c36ab0();
   input += synapse0x2c36af0();
   return input;
}

double NNfunction_NG_3::neuron0x2c36160() {
   double input = input0x2c36160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c36b30() {
   double input = 1.60952;
   input += synapse0x2c36e70();
   input += synapse0x2c36eb0();
   input += synapse0x2c36ef0();
   input += synapse0x2c36f30();
   input += synapse0x2c36f70();
   input += synapse0x2c36fb0();
   input += synapse0x2c36ff0();
   input += synapse0x2c37030();
   input += synapse0x2c37070();
   input += synapse0x2c370b0();
   input += synapse0x2c370f0();
   input += synapse0x2c37130();
   input += synapse0x2c37170();
   input += synapse0x2c371b0();
   input += synapse0x2c371f0();
   input += synapse0x2c37230();
   input += synapse0x2c36cc0();
   input += synapse0x2c36d00();
   input += synapse0x2c37380();
   input += synapse0x2c373c0();
   input += synapse0x2c37400();
   input += synapse0x2c37440();
   input += synapse0x2c37480();
   input += synapse0x2c374c0();
   return input;
}

double NNfunction_NG_3::neuron0x2c36b30() {
   double input = input0x2c36b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c37500() {
   double input = 1.61232;
   input += synapse0x2c37840();
   input += synapse0x2c37880();
   input += synapse0x2c378c0();
   input += synapse0x2c37900();
   input += synapse0x2c37940();
   input += synapse0x2c37980();
   input += synapse0x2c379c0();
   input += synapse0x2c37a00();
   input += synapse0x2c37a40();
   input += synapse0x2c37a80();
   input += synapse0x2c37ac0();
   input += synapse0x2c37b00();
   input += synapse0x2c37b40();
   input += synapse0x2c37b80();
   input += synapse0x2c37bc0();
   input += synapse0x2c37c00();
   input += synapse0x2c37690();
   input += synapse0x2c376d0();
   input += synapse0x2c37d50();
   input += synapse0x2c37d90();
   input += synapse0x2c37dd0();
   input += synapse0x2c37e10();
   input += synapse0x2c37e50();
   input += synapse0x2c37e90();
   return input;
}

double NNfunction_NG_3::neuron0x2c37500() {
   double input = input0x2c37500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c37ed0() {
   double input = -0.765092;
   input += synapse0x2c38210();
   input += synapse0x2c38250();
   input += synapse0x2c38290();
   input += synapse0x2c382d0();
   input += synapse0x2c38310();
   input += synapse0x2c38350();
   input += synapse0x2c38390();
   input += synapse0x2c383d0();
   input += synapse0x2c38410();
   input += synapse0x2c38450();
   input += synapse0x2c38490();
   input += synapse0x2c384d0();
   input += synapse0x2c38510();
   input += synapse0x2c38550();
   input += synapse0x2c38590();
   input += synapse0x2c385d0();
   input += synapse0x2c38060();
   input += synapse0x2c380a0();
   input += synapse0x2c38720();
   input += synapse0x2c38760();
   input += synapse0x2c387a0();
   input += synapse0x2c387e0();
   input += synapse0x2c38820();
   input += synapse0x2c38860();
   return input;
}

double NNfunction_NG_3::neuron0x2c37ed0() {
   double input = input0x2c37ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c388a0() {
   double input = 0.0634825;
   input += synapse0x2c38be0();
   input += synapse0x2c38c20();
   input += synapse0x2c38c60();
   input += synapse0x2c38ca0();
   input += synapse0x2c38ce0();
   input += synapse0x2c38d20();
   input += synapse0x2c38d60();
   input += synapse0x2c38da0();
   input += synapse0x2c38de0();
   input += synapse0x2c38e20();
   input += synapse0x2c38e60();
   input += synapse0x2c38ea0();
   input += synapse0x2c38ee0();
   input += synapse0x2c38f20();
   input += synapse0x2c38f60();
   input += synapse0x2c38fa0();
   input += synapse0x2c38a30();
   input += synapse0x2c38a70();
   input += synapse0x2c390f0();
   input += synapse0x2c39130();
   input += synapse0x2c39170();
   input += synapse0x2c391b0();
   input += synapse0x2c391f0();
   input += synapse0x2c39230();
   return input;
}

double NNfunction_NG_3::neuron0x2c388a0() {
   double input = input0x2c388a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c39270() {
   double input = 2.30731;
   input += synapse0x2c395b0();
   input += synapse0x2c2db80();
   input += synapse0x2c2dbc0();
   input += synapse0x2c2dc00();
   input += synapse0x2c2de50();
   input += synapse0x2c2de90();
   input += synapse0x2c2ded0();
   input += synapse0x2c2e120();
   input += synapse0x2c2e160();
   input += synapse0x2c2e3b0();
   input += synapse0x2c2e3f0();
   input += synapse0x2c2e430();
   input += synapse0x2c2e680();
   input += synapse0x2c2e6c0();
   input += synapse0x2c2e910();
   input += synapse0x2c2e950();
   input += synapse0x2c39400();
   input += synapse0x2c39440();
   input += synapse0x2c2eaa0();
   input += synapse0x2c2efb0();
   input += synapse0x2c2eff0();
   input += synapse0x2c2f030();
   input += synapse0x2c2f280();
   input += synapse0x2c2f2c0();
   return input;
}

double NNfunction_NG_3::neuron0x2c39270() {
   double input = input0x2c39270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c2f300() {
   double input = -0.224922;
   input += synapse0x2c2eb70();
   input += synapse0x2c2ebb0();
   input += synapse0x2c2ebf0();
   input += synapse0x2c2ec30();
   input += synapse0x2c2f5b0();
   input += synapse0x2c3b900();
   input += synapse0x2c3b940();
   input += synapse0x2c3b980();
   input += synapse0x2c3b9c0();
   input += synapse0x2c3ba00();
   input += synapse0x2c3ba40();
   input += synapse0x2c3ba80();
   input += synapse0x2c3bac0();
   input += synapse0x2c3bb00();
   input += synapse0x2c3bb40();
   input += synapse0x2c3bb80();
   input += synapse0x2c2f490();
   input += synapse0x2c2f4d0();
   input += synapse0x2c3bcd0();
   input += synapse0x2c3bd10();
   input += synapse0x2c3bd50();
   input += synapse0x2c3bd90();
   input += synapse0x2c3bdd0();
   input += synapse0x2c3be10();
   return input;
}

double NNfunction_NG_3::neuron0x2c2f300() {
   double input = input0x2c2f300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c3be50() {
   double input = -0.162004;
   input += synapse0x2c3c190();
   input += synapse0x2c3c1d0();
   input += synapse0x2c3c210();
   input += synapse0x2c3c250();
   input += synapse0x2c3c290();
   input += synapse0x2c3c2d0();
   input += synapse0x2c3c310();
   input += synapse0x2c3c350();
   input += synapse0x2c3c390();
   input += synapse0x2c3c3d0();
   input += synapse0x2c3c410();
   input += synapse0x2c3c450();
   input += synapse0x2c3c490();
   input += synapse0x2c3c4d0();
   input += synapse0x2c3c510();
   input += synapse0x2c3c550();
   input += synapse0x2c3bfe0();
   input += synapse0x2c3c020();
   input += synapse0x2c3c6a0();
   input += synapse0x2c3c6e0();
   input += synapse0x2c3c720();
   input += synapse0x2c3c760();
   input += synapse0x2c3c7a0();
   input += synapse0x2c3c7e0();
   return input;
}

double NNfunction_NG_3::neuron0x2c3be50() {
   double input = input0x2c3be50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c3c820() {
   double input = -1.15031;
   input += synapse0x2c3cb60();
   input += synapse0x2c3cba0();
   input += synapse0x2c3cbe0();
   input += synapse0x2c3cc20();
   input += synapse0x2c3cc60();
   input += synapse0x2c3cca0();
   input += synapse0x2c3cce0();
   input += synapse0x2c3cd20();
   input += synapse0x2c3cd60();
   input += synapse0x2c3cda0();
   input += synapse0x2c3cde0();
   input += synapse0x2c3ce20();
   input += synapse0x2c3ce60();
   input += synapse0x2c3cea0();
   input += synapse0x2c3cee0();
   input += synapse0x2c3cf20();
   input += synapse0x2c3c9b0();
   input += synapse0x2c3c9f0();
   input += synapse0x2c3d070();
   input += synapse0x2c3d0b0();
   input += synapse0x2c3d0f0();
   input += synapse0x2c3d130();
   input += synapse0x2c3d170();
   input += synapse0x2c3d1b0();
   return input;
}

double NNfunction_NG_3::neuron0x2c3c820() {
   double input = input0x2c3c820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c3d1f0() {
   double input = -0.499996;
   input += synapse0x2c3d530();
   input += synapse0x2c3d570();
   input += synapse0x2c3d5b0();
   input += synapse0x2c3d5f0();
   input += synapse0x2c3d630();
   input += synapse0x2c3d670();
   input += synapse0x2c3d6b0();
   input += synapse0x2c3d6f0();
   input += synapse0x2c3d730();
   input += synapse0x2c3d770();
   input += synapse0x2c3d7b0();
   input += synapse0x2c3d7f0();
   input += synapse0x2c3d830();
   input += synapse0x2c3d870();
   input += synapse0x2c3d8b0();
   input += synapse0x2c3d8f0();
   input += synapse0x2c3d380();
   input += synapse0x2c3d3c0();
   input += synapse0x2c3da40();
   input += synapse0x2c3da80();
   input += synapse0x2c3dac0();
   input += synapse0x2c3db00();
   input += synapse0x2c3db40();
   input += synapse0x2c3db80();
   return input;
}

double NNfunction_NG_3::neuron0x2c3d1f0() {
   double input = input0x2c3d1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c3dbc0() {
   double input = 2.10874;
   input += synapse0x2c3df00();
   input += synapse0x2c3df40();
   input += synapse0x2c3df80();
   input += synapse0x2c3dfc0();
   input += synapse0x2c3e000();
   input += synapse0x2c3e040();
   input += synapse0x2c3e080();
   input += synapse0x2c3e0c0();
   input += synapse0x2c3e100();
   input += synapse0x2c3e140();
   input += synapse0x2c3e180();
   input += synapse0x2c3e1c0();
   input += synapse0x2c3e200();
   input += synapse0x2c3e240();
   input += synapse0x2c3e280();
   input += synapse0x2c3e2c0();
   input += synapse0x2c3dd50();
   input += synapse0x2c3dd90();
   input += synapse0x2c3e410();
   input += synapse0x2c3e450();
   input += synapse0x2c3e490();
   input += synapse0x2c3e4d0();
   input += synapse0x2c3e510();
   input += synapse0x2c3e550();
   return input;
}

double NNfunction_NG_3::neuron0x2c3dbc0() {
   double input = input0x2c3dbc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c3e590() {
   double input = -0.469138;
   input += synapse0x2c3e8d0();
   input += synapse0x2c3e910();
   input += synapse0x2c3e950();
   input += synapse0x2c3e990();
   input += synapse0x2c3e9d0();
   input += synapse0x2c3ea10();
   input += synapse0x2c3ea50();
   input += synapse0x2c3ea90();
   input += synapse0x2c3ead0();
   input += synapse0x2c3eb10();
   input += synapse0x2c3eb50();
   input += synapse0x2c3eb90();
   input += synapse0x2c3ebd0();
   input += synapse0x2c3ec10();
   input += synapse0x2c3ec50();
   input += synapse0x2c3ec90();
   input += synapse0x2c3e720();
   input += synapse0x2c3e760();
   input += synapse0x2c3ede0();
   input += synapse0x2c3ee20();
   input += synapse0x2c3ee60();
   input += synapse0x2c3eea0();
   input += synapse0x2c3eee0();
   input += synapse0x2c3ef20();
   return input;
}

double NNfunction_NG_3::neuron0x2c3e590() {
   double input = input0x2c3e590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c3ef60() {
   double input = 0.381195;
   input += synapse0x2c3f2a0();
   input += synapse0x2c3f2e0();
   input += synapse0x2c3f320();
   input += synapse0x2c3f360();
   input += synapse0x2c3f3a0();
   input += synapse0x2c3f3e0();
   input += synapse0x2c3f420();
   input += synapse0x2c3f460();
   input += synapse0x2c3f4a0();
   input += synapse0x2c3f4e0();
   input += synapse0x2c3f520();
   input += synapse0x2c3f560();
   input += synapse0x2c3f5a0();
   input += synapse0x2c3f5e0();
   input += synapse0x2c3f620();
   input += synapse0x2c3f660();
   input += synapse0x2c3f0f0();
   input += synapse0x2c3f130();
   input += synapse0x2c3f7b0();
   input += synapse0x2c3f7f0();
   input += synapse0x2c3f830();
   input += synapse0x2c3f870();
   input += synapse0x2c3f8b0();
   input += synapse0x2c3f8f0();
   return input;
}

double NNfunction_NG_3::neuron0x2c3ef60() {
   double input = input0x2c3ef60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c3f930() {
   double input = 1.45305;
   input += synapse0x2c3fc70();
   input += synapse0x2c3fcb0();
   input += synapse0x2c3fcf0();
   input += synapse0x2c3fd30();
   input += synapse0x2c3fd70();
   input += synapse0x2c3fdb0();
   input += synapse0x2c3fdf0();
   input += synapse0x2c3fe30();
   input += synapse0x2c3fe70();
   input += synapse0x2c3feb0();
   input += synapse0x2c3fef0();
   input += synapse0x2c3ff30();
   input += synapse0x2c3ff70();
   input += synapse0x2c3ffb0();
   input += synapse0x2c3fff0();
   input += synapse0x2c40030();
   input += synapse0x2c3fac0();
   input += synapse0x2c3fb00();
   input += synapse0x2c40180();
   input += synapse0x2c401c0();
   input += synapse0x2c40200();
   input += synapse0x2c40240();
   input += synapse0x2c40280();
   input += synapse0x2c402c0();
   return input;
}

double NNfunction_NG_3::neuron0x2c3f930() {
   double input = input0x2c3f930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c40300() {
   double input = -0.25514;
   input += synapse0x2c28d70();
   input += synapse0x2c28db0();
   input += synapse0x2c28df0();
   input += synapse0x2c28e30();
   input += synapse0x2c28e70();
   input += synapse0x2c28eb0();
   input += synapse0x2c28ef0();
   input += synapse0x2c28f30();
   input += synapse0x2c40a50();
   input += synapse0x2c40a90();
   input += synapse0x2c40ad0();
   input += synapse0x2c40b10();
   input += synapse0x2c40b50();
   input += synapse0x2c40b90();
   input += synapse0x2c40bd0();
   input += synapse0x2c40c10();
   input += synapse0x2c40490();
   input += synapse0x2c404d0();
   input += synapse0x2c40d60();
   input += synapse0x2c40da0();
   input += synapse0x2c40de0();
   input += synapse0x2c40e20();
   input += synapse0x2c40e60();
   input += synapse0x2c40ea0();
   return input;
}

double NNfunction_NG_3::neuron0x2c40300() {
   double input = input0x2c40300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c40ee0() {
   double input = 0.279812;
   input += synapse0x2c41220();
   input += synapse0x2c41260();
   input += synapse0x2c412a0();
   input += synapse0x2c412e0();
   input += synapse0x2c41320();
   input += synapse0x2c41360();
   input += synapse0x2c413a0();
   input += synapse0x2c413e0();
   input += synapse0x2c41420();
   input += synapse0x2c41460();
   input += synapse0x2c414a0();
   input += synapse0x2c414e0();
   input += synapse0x2c41520();
   input += synapse0x2c41560();
   input += synapse0x2c415a0();
   input += synapse0x2c415e0();
   input += synapse0x2c41070();
   input += synapse0x2c410b0();
   input += synapse0x2c41730();
   input += synapse0x2c41770();
   input += synapse0x2c417b0();
   input += synapse0x2c417f0();
   input += synapse0x2c41830();
   input += synapse0x2c41870();
   return input;
}

double NNfunction_NG_3::neuron0x2c40ee0() {
   double input = input0x2c40ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c418b0() {
   double input = -3.61834;
   input += synapse0x2c41bf0();
   input += synapse0x2c41c30();
   input += synapse0x2c41c70();
   input += synapse0x2c41cb0();
   input += synapse0x2c41cf0();
   input += synapse0x2c41d30();
   input += synapse0x2c41d70();
   input += synapse0x2c41db0();
   input += synapse0x2c41df0();
   input += synapse0x2c41e30();
   input += synapse0x2c41e70();
   input += synapse0x2c41eb0();
   input += synapse0x2c41ef0();
   input += synapse0x2c41f30();
   input += synapse0x2c41f70();
   input += synapse0x2c41fb0();
   input += synapse0x2c41a40();
   input += synapse0x2c41a80();
   input += synapse0x2c325b0();
   input += synapse0x2c325f0();
   input += synapse0x2c32630();
   input += synapse0x2c32670();
   input += synapse0x2c326b0();
   input += synapse0x2c326f0();
   return input;
}

double NNfunction_NG_3::neuron0x2c418b0() {
   double input = input0x2c418b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c32730() {
   double input = 0.936732;
   input += synapse0x2c32a70();
   input += synapse0x2c32ab0();
   input += synapse0x2c32af0();
   input += synapse0x2c32b30();
   input += synapse0x2c32b70();
   input += synapse0x2c32bb0();
   input += synapse0x2c32bf0();
   input += synapse0x2c32c30();
   input += synapse0x2c32c70();
   input += synapse0x2c32cb0();
   input += synapse0x2c32cf0();
   input += synapse0x2c32d30();
   input += synapse0x2c32d70();
   input += synapse0x2c32db0();
   input += synapse0x2c32df0();
   input += synapse0x2c32e30();
   input += synapse0x2c328c0();
   input += synapse0x2c32900();
   input += synapse0x2c32f80();
   input += synapse0x2c32fc0();
   input += synapse0x2c33000();
   input += synapse0x2c33040();
   input += synapse0x2c33080();
   input += synapse0x2c330c0();
   return input;
}

double NNfunction_NG_3::neuron0x2c32730() {
   double input = input0x2c32730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c33100() {
   double input = -0.0679478;
   input += synapse0x2c33440();
   input += synapse0x2c33480();
   input += synapse0x2c334c0();
   input += synapse0x2c33500();
   input += synapse0x2c33540();
   input += synapse0x2c33580();
   input += synapse0x2c335c0();
   input += synapse0x2c33600();
   input += synapse0x2c33640();
   input += synapse0x2c33680();
   input += synapse0x2c336c0();
   input += synapse0x2c33700();
   input += synapse0x2c33740();
   input += synapse0x2c33780();
   input += synapse0x2c337c0();
   input += synapse0x2c33800();
   input += synapse0x2c33290();
   input += synapse0x2c332d0();
   input += synapse0x2c33950();
   input += synapse0x2c33990();
   input += synapse0x2c339d0();
   input += synapse0x2c33a10();
   input += synapse0x2c33a50();
   input += synapse0x2c33a90();
   return input;
}

double NNfunction_NG_3::neuron0x2c33100() {
   double input = input0x2c33100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c33ad0() {
   double input = -0.282499;
   input += synapse0x2c33e10();
   input += synapse0x2c33e50();
   input += synapse0x2c33e90();
   input += synapse0x2c33ed0();
   input += synapse0x2c33f10();
   input += synapse0x2c33f50();
   input += synapse0x2c33f90();
   input += synapse0x2c33fd0();
   input += synapse0x2c34010();
   input += synapse0x2c34050();
   input += synapse0x2c34090();
   input += synapse0x2c340d0();
   input += synapse0x2c34110();
   input += synapse0x2c34150();
   input += synapse0x2c34190();
   input += synapse0x2c341d0();
   input += synapse0x2c33c60();
   input += synapse0x2c33ca0();
   input += synapse0x2c34320();
   input += synapse0x2c34360();
   input += synapse0x2c343a0();
   input += synapse0x2c343e0();
   input += synapse0x2c34420();
   input += synapse0x2c34460();
   return input;
}

double NNfunction_NG_3::neuron0x2c33ad0() {
   double input = input0x2c33ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c46110() {
   double input = -0.197638;
   input += synapse0x2c46330();
   input += synapse0x2c46370();
   input += synapse0x2c463b0();
   input += synapse0x2c463f0();
   input += synapse0x2c46430();
   input += synapse0x2c46470();
   input += synapse0x2c464b0();
   input += synapse0x2c464f0();
   input += synapse0x2c46530();
   input += synapse0x2c46570();
   input += synapse0x2c465b0();
   input += synapse0x2c465f0();
   input += synapse0x2c46630();
   input += synapse0x2c46670();
   input += synapse0x2c466b0();
   input += synapse0x2c466f0();
   input += synapse0x2c344a0();
   input += synapse0x2c344e0();
   input += synapse0x2c46840();
   input += synapse0x2c46880();
   input += synapse0x2c468c0();
   input += synapse0x2c46900();
   input += synapse0x2c46940();
   input += synapse0x2c46980();
   return input;
}

double NNfunction_NG_3::neuron0x2c46110() {
   double input = input0x2c46110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c469c0() {
   double input = 0.0123122;
   input += synapse0x2c46d00();
   input += synapse0x2c46d40();
   input += synapse0x2c46d80();
   input += synapse0x2c46dc0();
   input += synapse0x2c46e00();
   input += synapse0x2c46e40();
   input += synapse0x2c46e80();
   input += synapse0x2c46ec0();
   input += synapse0x2c46f00();
   input += synapse0x2c46f40();
   input += synapse0x2c46f80();
   input += synapse0x2c46fc0();
   input += synapse0x2c47000();
   input += synapse0x2c47040();
   input += synapse0x2c47080();
   input += synapse0x2c470c0();
   input += synapse0x2c46b50();
   input += synapse0x2c46b90();
   input += synapse0x2c47210();
   input += synapse0x2c47250();
   input += synapse0x2c47290();
   input += synapse0x2c472d0();
   input += synapse0x2c47310();
   input += synapse0x2c47350();
   return input;
}

double NNfunction_NG_3::neuron0x2c469c0() {
   double input = input0x2c469c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c47390() {
   double input = 0.981933;
   input += synapse0x2c476d0();
   input += synapse0x2c47710();
   input += synapse0x2c47750();
   input += synapse0x2c47790();
   input += synapse0x2c477d0();
   input += synapse0x2c47810();
   input += synapse0x2c47850();
   input += synapse0x2c47890();
   input += synapse0x2c478d0();
   input += synapse0x2c47910();
   input += synapse0x2c47950();
   input += synapse0x2c47990();
   input += synapse0x2c479d0();
   input += synapse0x2c47a10();
   input += synapse0x2c47a50();
   input += synapse0x2c47a90();
   input += synapse0x2c47520();
   input += synapse0x2c47560();
   input += synapse0x2c47be0();
   input += synapse0x2c47c20();
   input += synapse0x2c47c60();
   input += synapse0x2c47ca0();
   input += synapse0x2c47ce0();
   input += synapse0x2c47d20();
   return input;
}

double NNfunction_NG_3::neuron0x2c47390() {
   double input = input0x2c47390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c47d60() {
   double input = 2.28878;
   input += synapse0x2c480a0();
   input += synapse0x2c480e0();
   input += synapse0x2c48120();
   input += synapse0x2c48160();
   input += synapse0x2c481a0();
   input += synapse0x2c481e0();
   input += synapse0x2c48220();
   input += synapse0x2c48260();
   input += synapse0x2c482a0();
   input += synapse0x2c482e0();
   input += synapse0x2c48320();
   input += synapse0x2c48360();
   input += synapse0x2c483a0();
   input += synapse0x2c483e0();
   input += synapse0x2c48420();
   input += synapse0x2c48460();
   input += synapse0x2c47ef0();
   input += synapse0x2c47f30();
   input += synapse0x2c485b0();
   input += synapse0x2c485f0();
   input += synapse0x2c48630();
   input += synapse0x2c48670();
   input += synapse0x2c486b0();
   input += synapse0x2c486f0();
   return input;
}

double NNfunction_NG_3::neuron0x2c47d60() {
   double input = input0x2c47d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c4ef60() {
   double input = -1.04272;
   input += synapse0x2c24c90();
   input += synapse0x2c24cd0();
   input += synapse0x2c261a0();
   input += synapse0x2c261e0();
   input += synapse0x2c26b70();
   input += synapse0x2c26bb0();
   input += synapse0x2c27940();
   input += synapse0x2c27980();
   input += synapse0x2c28310();
   input += synapse0x2c28350();
   input += synapse0x2c28ce0();
   input += synapse0x2c28d20();
   input += synapse0x2c297c0();
   input += synapse0x2c29800();
   input += synapse0x2c2a190();
   input += synapse0x2c2a1d0();
   input += synapse0x2c27270();
   input += synapse0x2c272b0();
   input += synapse0x2c2bd40();
   input += synapse0x2c2bd80();
   input += synapse0x2c2c710();
   input += synapse0x2c2c750();
   input += synapse0x2c2d0e0();
   input += synapse0x2c2d120();
   input += synapse0x2c2dab0();
   input += synapse0x2c2daf0();
   input += synapse0x2c21c20();
   input += synapse0x2c21c60();
   input += synapse0x2c2fba0();
   input += synapse0x2c2fbe0();
   input += synapse0x2c30570();
   input += synapse0x2c305b0();
   input += synapse0x2c30f40();
   input += synapse0x2c30f80();
   input += synapse0x2c31910();
   input += synapse0x2c31950();
   input += synapse0x2c322e0();
   input += synapse0x2c32320();
   input += synapse0x2c2ae30();
   input += synapse0x2c2ae70();
   input += synapse0x2c346e0();
   input += synapse0x2c34720();
   input += synapse0x2c35070();
   input += synapse0x2c350b0();
   input += synapse0x2c35a40();
   input += synapse0x2c35a80();
   input += synapse0x2c36410();
   input += synapse0x2c36450();
   input += synapse0x2c36de0();
   input += synapse0x2c36e20();
   return input;
}

double NNfunction_NG_3::neuron0x2c4ef60() {
   double input = input0x2c4ef60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c4f300() {
   double input = -0.842386;
   input += synapse0x2c39520();
   input += synapse0x2c39560();
   input += synapse0x2c2eae0();
   input += synapse0x2c2eb20();
   input += synapse0x2c3c100();
   input += synapse0x2c3c140();
   input += synapse0x2c3cad0();
   input += synapse0x2c3cb10();
   input += synapse0x2c3d4a0();
   input += synapse0x2c3d4e0();
   input += synapse0x2c3de70();
   input += synapse0x2c3deb0();
   input += synapse0x2c3e840();
   input += synapse0x2c3e880();
   input += synapse0x2c3f210();
   input += synapse0x2c3f250();
   input += synapse0x2c3fbe0();
   input += synapse0x2c3fc20();
   input += synapse0x2c405b0();
   input += synapse0x2c405f0();
   input += synapse0x2c41190();
   input += synapse0x2c411d0();
   input += synapse0x2c41b60();
   input += synapse0x2c41ba0();
   input += synapse0x2c329e0();
   input += synapse0x2c32a20();
   input += synapse0x2c333b0();
   input += synapse0x2c333f0();
   input += synapse0x2c33d80();
   input += synapse0x2c33dc0();
   input += synapse0x2c462a0();
   input += synapse0x2c462e0();
   input += synapse0x2c46c70();
   input += synapse0x2c46cb0();
   input += synapse0x2c47640();
   input += synapse0x2c47680();
   input += synapse0x2c48010();
   input += synapse0x2c48050();
   input += synapse0x2c23f00();
   input += synapse0x2c23f40();
   input += synapse0x2c377b0();
   input += synapse0x2c377f0();
   input += synapse0x2c48730();
   input += synapse0x2c48770();
   input += synapse0x2c487b0();
   input += synapse0x2c487f0();
   input += synapse0x2c4f6a0();
   input += synapse0x2c4f6e0();
   input += synapse0x2c4f720();
   input += synapse0x2c4f760();
   return input;
}

double NNfunction_NG_3::neuron0x2c4f300() {
   double input = input0x2c4f300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c4f7a0() {
   double input = -1.93429;
   input += synapse0x2c4fae0();
   input += synapse0x2c4fb20();
   input += synapse0x2c4fb60();
   input += synapse0x2c4fba0();
   input += synapse0x2c4fbe0();
   input += synapse0x2c4fc20();
   input += synapse0x2c4fc60();
   input += synapse0x2c4fca0();
   input += synapse0x2c4fce0();
   input += synapse0x2c4fd20();
   input += synapse0x2c4fd60();
   input += synapse0x2c4fda0();
   input += synapse0x2c4fde0();
   input += synapse0x2c4fe20();
   input += synapse0x2c4fe60();
   input += synapse0x2c4fea0();
   input += synapse0x2c4f930();
   input += synapse0x2c4f970();
   input += synapse0x2c4fff0();
   input += synapse0x2c50030();
   input += synapse0x2c50070();
   input += synapse0x2c500b0();
   input += synapse0x2c500f0();
   input += synapse0x2c50130();
   input += synapse0x2c50170();
   input += synapse0x2c501b0();
   input += synapse0x2c501f0();
   input += synapse0x2c50230();
   input += synapse0x2c50270();
   input += synapse0x2c502b0();
   input += synapse0x2c502f0();
   input += synapse0x2c50330();
   input += synapse0x2c4fee0();
   input += synapse0x2c4ff20();
   input += synapse0x2c4ff60();
   input += synapse0x2c4ffa0();
   input += synapse0x2c50580();
   input += synapse0x2c505c0();
   input += synapse0x2c50600();
   input += synapse0x2c50640();
   input += synapse0x2c50680();
   input += synapse0x2c506c0();
   input += synapse0x2c50700();
   input += synapse0x2c50740();
   input += synapse0x2c50780();
   input += synapse0x2c507c0();
   input += synapse0x2c50800();
   input += synapse0x2c50840();
   input += synapse0x2c50880();
   input += synapse0x2c508c0();
   return input;
}

double NNfunction_NG_3::neuron0x2c4f7a0() {
   double input = input0x2c4f7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c50900() {
   double input = -0.132362;
   input += synapse0x2c50c40();
   input += synapse0x2c50c80();
   input += synapse0x2c50cc0();
   input += synapse0x2c50d00();
   input += synapse0x2c50d40();
   input += synapse0x2c50d80();
   input += synapse0x2c50dc0();
   input += synapse0x2c50e00();
   input += synapse0x2c50e40();
   input += synapse0x2c50e80();
   input += synapse0x2c50ec0();
   input += synapse0x2c50f00();
   input += synapse0x2c50f40();
   input += synapse0x2c50f80();
   input += synapse0x2c50fc0();
   input += synapse0x2c51000();
   input += synapse0x2c50a90();
   input += synapse0x2c50ad0();
   input += synapse0x2c51150();
   input += synapse0x2c51190();
   input += synapse0x2c511d0();
   input += synapse0x2c51210();
   input += synapse0x2c51250();
   input += synapse0x2c51290();
   input += synapse0x2c512d0();
   input += synapse0x2c51310();
   input += synapse0x2c51350();
   input += synapse0x2c51390();
   input += synapse0x2c513d0();
   input += synapse0x2c51410();
   input += synapse0x2c51450();
   input += synapse0x2c51490();
   input += synapse0x2c51040();
   input += synapse0x2c51080();
   input += synapse0x2c510c0();
   input += synapse0x2c51100();
   input += synapse0x2c516e0();
   input += synapse0x2c51720();
   input += synapse0x2c51760();
   input += synapse0x2c517a0();
   input += synapse0x2c517e0();
   input += synapse0x2c51820();
   input += synapse0x2c51860();
   input += synapse0x2c518a0();
   input += synapse0x2c518e0();
   input += synapse0x2c51920();
   input += synapse0x2c51960();
   input += synapse0x2c519a0();
   input += synapse0x2c519e0();
   input += synapse0x2c51a20();
   return input;
}

double NNfunction_NG_3::neuron0x2c50900() {
   double input = input0x2c50900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c51a60() {
   double input = -0.524617;
   input += synapse0x2c51da0();
   input += synapse0x2c51de0();
   input += synapse0x2c51e20();
   input += synapse0x2c51e60();
   input += synapse0x2c51ea0();
   input += synapse0x2c51ee0();
   input += synapse0x2c51f20();
   input += synapse0x2c51f60();
   input += synapse0x2c51fa0();
   input += synapse0x2c51fe0();
   input += synapse0x2c52020();
   input += synapse0x2c52060();
   input += synapse0x2c520a0();
   input += synapse0x2c520e0();
   input += synapse0x2c52120();
   input += synapse0x2c52160();
   input += synapse0x2c51bf0();
   input += synapse0x2c51c30();
   input += synapse0x2c522b0();
   input += synapse0x2c522f0();
   input += synapse0x2c52330();
   input += synapse0x2c52370();
   input += synapse0x2c523b0();
   input += synapse0x2c523f0();
   input += synapse0x2c52430();
   input += synapse0x2c52470();
   input += synapse0x2c524b0();
   input += synapse0x2c524f0();
   input += synapse0x2c52530();
   input += synapse0x2c52570();
   input += synapse0x2c525b0();
   input += synapse0x2c525f0();
   input += synapse0x2c521a0();
   input += synapse0x2c521e0();
   input += synapse0x2c52220();
   input += synapse0x2c52260();
   input += synapse0x2c52840();
   input += synapse0x2c52880();
   input += synapse0x2c528c0();
   input += synapse0x2c52900();
   input += synapse0x2c52940();
   input += synapse0x2c52980();
   input += synapse0x2c529c0();
   input += synapse0x2c52a00();
   input += synapse0x2c52a40();
   input += synapse0x2c52a80();
   input += synapse0x2c52ac0();
   input += synapse0x2c52b00();
   input += synapse0x2c52b40();
   input += synapse0x2c52b80();
   return input;
}

double NNfunction_NG_3::neuron0x2c51a60() {
   double input = input0x2c51a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_3::input0x2c52bc0() {
   double input = 8.22462;
   input += synapse0x2c23ca0();
   input += synapse0x2c52de0();
   input += synapse0x2c52e20();
   input += synapse0x2c52e60();
   input += synapse0x2c52ea0();
   return input;
}

double NNfunction_NG_3::neuron0x2c52bc0() {
   double input = input0x2c52bc0();
   return (input * 1)+0;
}

double NNfunction_NG_3::synapse0x29deaf0() {
   return (neuron0x2c1ec80()*-0.0182263);
}

double NNfunction_NG_3::synapse0x2c1eb40() {
   return (neuron0x2c1efc0()*-0.364746);
}

double NNfunction_NG_3::synapse0x2c1eb80() {
   return (neuron0x2c1f300()*-0.0710656);
}

double NNfunction_NG_3::synapse0x2c23f90() {
   return (neuron0x2c1f640()*2.46359);
}

double NNfunction_NG_3::synapse0x2c23fd0() {
   return (neuron0x2c1f980()*0.0131336);
}

double NNfunction_NG_3::synapse0x2c24010() {
   return (neuron0x2c1fcc0()*-0.0340516);
}

double NNfunction_NG_3::synapse0x2c24050() {
   return (neuron0x2c20000()*-0.0629761);
}

double NNfunction_NG_3::synapse0x2c24090() {
   return (neuron0x2c20340()*-0.0745207);
}

double NNfunction_NG_3::synapse0x2c240d0() {
   return (neuron0x2c20680()*0.0605198);
}

double NNfunction_NG_3::synapse0x2c24110() {
   return (neuron0x2c209c0()*0.00515798);
}

double NNfunction_NG_3::synapse0x2c24150() {
   return (neuron0x2c20d00()*0.00723342);
}

double NNfunction_NG_3::synapse0x2c24190() {
   return (neuron0x2c21040()*0.00538504);
}

double NNfunction_NG_3::synapse0x2c241d0() {
   return (neuron0x2c21380()*0.098835);
}

double NNfunction_NG_3::synapse0x2c24210() {
   return (neuron0x2c216c0()*-0.0495751);
}

double NNfunction_NG_3::synapse0x2c24250() {
   return (neuron0x2c21a00()*-1.24358);
}

double NNfunction_NG_3::synapse0x2c24290() {
   return (neuron0x2c21d40()*0.00414888);
}

double NNfunction_NG_3::synapse0x2c1eab0() {
   return (neuron0x2c22080()*-0.0125201);
}

double NNfunction_NG_3::synapse0x2c1eaf0() {
   return (neuron0x2c225e0()*0.144267);
}

double NNfunction_NG_3::synapse0x29d0350() {
   return (neuron0x2c22800()*0.113105);
}

double NNfunction_NG_3::synapse0x29d0390() {
   return (neuron0x2c22b40()*0.0501167);
}

double NNfunction_NG_3::synapse0x2c244f0() {
   return (neuron0x2c22e80()*-0.0485756);
}

double NNfunction_NG_3::synapse0x2c24530() {
   return (neuron0x2c231c0()*-0.0272968);
}

double NNfunction_NG_3::synapse0x2c24570() {
   return (neuron0x2c23500()*-0.0131487);
}

double NNfunction_NG_3::synapse0x2c245b0() {
   return (neuron0x2c23840()*-0.0642592);
}

double NNfunction_NG_3::synapse0x2c24930() {
   return (neuron0x2c1ec80()*-0.00454654);
}

double NNfunction_NG_3::synapse0x2c24970() {
   return (neuron0x2c1efc0()*2.67805);
}

double NNfunction_NG_3::synapse0x2c249b0() {
   return (neuron0x2c1f300()*-0.26147);
}

double NNfunction_NG_3::synapse0x2c249f0() {
   return (neuron0x2c1f640()*-0.0497498);
}

double NNfunction_NG_3::synapse0x2c24a30() {
   return (neuron0x2c1f980()*-0.0130713);
}

double NNfunction_NG_3::synapse0x2c24a70() {
   return (neuron0x2c1fcc0()*-0.0167447);
}

double NNfunction_NG_3::synapse0x2c24ab0() {
   return (neuron0x2c20000()*0.00474756);
}

double NNfunction_NG_3::synapse0x2c24af0() {
   return (neuron0x2c20340()*0.00361451);
}

double NNfunction_NG_3::synapse0x2c24b30() {
   return (neuron0x2c20680()*-0.020346);
}

double NNfunction_NG_3::synapse0x2c243e0() {
   return (neuron0x2c209c0()*0.00790499);
}

double NNfunction_NG_3::synapse0x2c24420() {
   return (neuron0x2c20d00()*0.000318675);
}

double NNfunction_NG_3::synapse0x2c24460() {
   return (neuron0x2c21040()*-0.116233);
}

double NNfunction_NG_3::synapse0x2c244a0() {
   return (neuron0x2c21380()*0.00619319);
}

double NNfunction_NG_3::synapse0x2c24d80() {
   return (neuron0x2c216c0()*-0.00405875);
}

double NNfunction_NG_3::synapse0x2c24dc0() {
   return (neuron0x2c21a00()*0.0714922);
}

double NNfunction_NG_3::synapse0x2c24e00() {
   return (neuron0x2c21d40()*0.0151663);
}

double NNfunction_NG_3::synapse0x2c24780() {
   return (neuron0x2c22080()*0.0134667);
}

double NNfunction_NG_3::synapse0x2c247c0() {
   return (neuron0x2c225e0()*0.0224126);
}

double NNfunction_NG_3::synapse0x2c24f50() {
   return (neuron0x2c22800()*0.00622398);
}

double NNfunction_NG_3::synapse0x2c24f90() {
   return (neuron0x2c22b40()*-0.011782);
}

double NNfunction_NG_3::synapse0x2c24fd0() {
   return (neuron0x2c22e80()*-0.0047361);
}

double NNfunction_NG_3::synapse0x2c25010() {
   return (neuron0x2c231c0()*-0.00197784);
}

double NNfunction_NG_3::synapse0x2c25050() {
   return (neuron0x2c23500()*-0.000704462);
}

double NNfunction_NG_3::synapse0x2c25090() {
   return (neuron0x2c23840()*-0.722272);
}

double NNfunction_NG_3::synapse0x2c25410() {
   return (neuron0x2c1ec80()*0.0415016);
}

double NNfunction_NG_3::synapse0x2c25450() {
   return (neuron0x2c1efc0()*1.89855);
}

double NNfunction_NG_3::synapse0x2c25490() {
   return (neuron0x2c1f300()*0.411812);
}

double NNfunction_NG_3::synapse0x2c254d0() {
   return (neuron0x2c1f640()*0.27007);
}

double NNfunction_NG_3::synapse0x2c25510() {
   return (neuron0x2c1f980()*-0.0407313);
}

double NNfunction_NG_3::synapse0x2c25550() {
   return (neuron0x2c1fcc0()*-0.0843281);
}

double NNfunction_NG_3::synapse0x2c25590() {
   return (neuron0x2c20000()*-0.0423009);
}

double NNfunction_NG_3::synapse0x2c255d0() {
   return (neuron0x2c20340()*-0.0242509);
}

double NNfunction_NG_3::synapse0x2c25610() {
   return (neuron0x2c20680()*0.031348);
}

double NNfunction_NG_3::synapse0x2c25650() {
   return (neuron0x2c209c0()*-0.00354638);
}

double NNfunction_NG_3::synapse0x2c25690() {
   return (neuron0x2c20d00()*-0.0283809);
}

double NNfunction_NG_3::synapse0x2c256d0() {
   return (neuron0x2c21040()*0.512338);
}

double NNfunction_NG_3::synapse0x2c25710() {
   return (neuron0x2c21380()*0.127342);
}

double NNfunction_NG_3::synapse0x2c25750() {
   return (neuron0x2c216c0()*-0.017615);
}

double NNfunction_NG_3::synapse0x2c25790() {
   return (neuron0x2c21a00()*-2.92304);
}

double NNfunction_NG_3::synapse0x2c257d0() {
   return (neuron0x2c21d40()*-0.0808623);
}

double NNfunction_NG_3::synapse0x2c25260() {
   return (neuron0x2c22080()*-0.0233763);
}

double NNfunction_NG_3::synapse0x2c252a0() {
   return (neuron0x2c225e0()*0.292546);
}

double NNfunction_NG_3::synapse0x29de1c0() {
   return (neuron0x2c22800()*0.0398013);
}

double NNfunction_NG_3::synapse0x29de200() {
   return (neuron0x2c22b40()*-0.00867724);
}

double NNfunction_NG_3::synapse0x2c0dd10() {
   return (neuron0x2c22e80()*0.0398672);
}

double NNfunction_NG_3::synapse0x2c0dd50() {
   return (neuron0x2c231c0()*-0.0176757);
}

double NNfunction_NG_3::synapse0x2c0dd90() {
   return (neuron0x2c23500()*-0.0444116);
}

double NNfunction_NG_3::synapse0x2c1ebc0() {
   return (neuron0x2c23840()*-0.014028);
}

double NNfunction_NG_3::synapse0x2c24d20() {
   return (neuron0x2c1ec80()*0.0259735);
}

double NNfunction_NG_3::synapse0x2c1ec00() {
   return (neuron0x2c1efc0()*-0.0302825);
}

double NNfunction_NG_3::synapse0x2c1ec40() {
   return (neuron0x2c1f300()*-3.6461);
}

double NNfunction_NG_3::synapse0x2c25920() {
   return (neuron0x2c1f640()*-0.0537875);
}

double NNfunction_NG_3::synapse0x2c25960() {
   return (neuron0x2c1f980()*0.0170908);
}

double NNfunction_NG_3::synapse0x2c259a0() {
   return (neuron0x2c1fcc0()*0.000656071);
}

double NNfunction_NG_3::synapse0x2c259e0() {
   return (neuron0x2c20000()*0.0027615);
}

double NNfunction_NG_3::synapse0x2c25a20() {
   return (neuron0x2c20340()*-0.00110733);
}

double NNfunction_NG_3::synapse0x2c25a60() {
   return (neuron0x2c20680()*0.000356126);
}

double NNfunction_NG_3::synapse0x2c25aa0() {
   return (neuron0x2c209c0()*0.00247961);
}

double NNfunction_NG_3::synapse0x2c25ae0() {
   return (neuron0x2c20d00()*0.00140519);
}

double NNfunction_NG_3::synapse0x2c25b20() {
   return (neuron0x2c21040()*0.174559);
}

double NNfunction_NG_3::synapse0x2c25b60() {
   return (neuron0x2c21380()*0.0482735);
}

double NNfunction_NG_3::synapse0x2c25ba0() {
   return (neuron0x2c216c0()*-0.000516361);
}

double NNfunction_NG_3::synapse0x2c25be0() {
   return (neuron0x2c21a00()*-0.079555);
}

double NNfunction_NG_3::synapse0x2c25c20() {
   return (neuron0x2c21d40()*-0.00949907);
}

double NNfunction_NG_3::synapse0x2c24b70() {
   return (neuron0x2c22080()*0.00594516);
}

double NNfunction_NG_3::synapse0x2c24bb0() {
   return (neuron0x2c225e0()*-0.02692);
}

double NNfunction_NG_3::synapse0x2c25d70() {
   return (neuron0x2c22800()*-0.00114547);
}

double NNfunction_NG_3::synapse0x2c25db0() {
   return (neuron0x2c22b40()*0.00358023);
}

double NNfunction_NG_3::synapse0x2c25df0() {
   return (neuron0x2c22e80()*0.00547253);
}

double NNfunction_NG_3::synapse0x2c25e30() {
   return (neuron0x2c231c0()*-0.00979479);
}

double NNfunction_NG_3::synapse0x2c25e70() {
   return (neuron0x2c23500()*-0.018332);
}

double NNfunction_NG_3::synapse0x2c25eb0() {
   return (neuron0x2c23840()*1.42113);
}

double NNfunction_NG_3::synapse0x2c26230() {
   return (neuron0x2c1ec80()*-0.0190005);
}

double NNfunction_NG_3::synapse0x2c26270() {
   return (neuron0x2c1efc0()*-0.0442023);
}

double NNfunction_NG_3::synapse0x2c262b0() {
   return (neuron0x2c1f300()*0.119773);
}

double NNfunction_NG_3::synapse0x2c262f0() {
   return (neuron0x2c1f640()*0.531051);
}

double NNfunction_NG_3::synapse0x2c26330() {
   return (neuron0x2c1f980()*0.0390222);
}

double NNfunction_NG_3::synapse0x2c26370() {
   return (neuron0x2c1fcc0()*-0.00715673);
}

double NNfunction_NG_3::synapse0x2c263b0() {
   return (neuron0x2c20000()*0.0259472);
}

double NNfunction_NG_3::synapse0x2c263f0() {
   return (neuron0x2c20340()*0.0608657);
}

double NNfunction_NG_3::synapse0x2c26430() {
   return (neuron0x2c20680()*0.0353601);
}

double NNfunction_NG_3::synapse0x2c26470() {
   return (neuron0x2c209c0()*-0.0178314);
}

double NNfunction_NG_3::synapse0x2c264b0() {
   return (neuron0x2c20d00()*-0.0985385);
}

double NNfunction_NG_3::synapse0x2c264f0() {
   return (neuron0x2c21040()*0.16006);
}

double NNfunction_NG_3::synapse0x2c26530() {
   return (neuron0x2c21380()*-1.63692);
}

double NNfunction_NG_3::synapse0x2c26570() {
   return (neuron0x2c216c0()*0.00214521);
}

double NNfunction_NG_3::synapse0x2c265b0() {
   return (neuron0x2c21a00()*-0.179595);
}

double NNfunction_NG_3::synapse0x2c265f0() {
   return (neuron0x2c21d40()*0.0179742);
}

double NNfunction_NG_3::synapse0x2c26080() {
   return (neuron0x2c22080()*0.0731248);
}

double NNfunction_NG_3::synapse0x2c260c0() {
   return (neuron0x2c225e0()*-0.130474);
}

double NNfunction_NG_3::synapse0x2c26740() {
   return (neuron0x2c22800()*-0.076467);
}

double NNfunction_NG_3::synapse0x2c26780() {
   return (neuron0x2c22b40()*-0.000390552);
}

double NNfunction_NG_3::synapse0x2c267c0() {
   return (neuron0x2c22e80()*-0.0412375);
}

double NNfunction_NG_3::synapse0x2c26800() {
   return (neuron0x2c231c0()*0.070587);
}

double NNfunction_NG_3::synapse0x2c26840() {
   return (neuron0x2c23500()*0.0134316);
}

double NNfunction_NG_3::synapse0x2c26880() {
   return (neuron0x2c23840()*-0.023976);
}

double NNfunction_NG_3::synapse0x2c26c00() {
   return (neuron0x2c1ec80()*0.0398946);
}

double NNfunction_NG_3::synapse0x2c26c40() {
   return (neuron0x2c1efc0()*8.69069);
}

double NNfunction_NG_3::synapse0x2c26c80() {
   return (neuron0x2c1f300()*0.305328);
}

double NNfunction_NG_3::synapse0x2c26cc0() {
   return (neuron0x2c1f640()*-0.0372995);
}

double NNfunction_NG_3::synapse0x2c26d00() {
   return (neuron0x2c1f980()*-0.0414236);
}

double NNfunction_NG_3::synapse0x2c26d40() {
   return (neuron0x2c1fcc0()*0.0010438);
}

double NNfunction_NG_3::synapse0x2c26d80() {
   return (neuron0x2c20000()*0.0084831);
}

double NNfunction_NG_3::synapse0x2c26dc0() {
   return (neuron0x2c20340()*-0.00122378);
}

double NNfunction_NG_3::synapse0x2c26e00() {
   return (neuron0x2c20680()*0.030486);
}

double NNfunction_NG_3::synapse0x29de550() {
   return (neuron0x2c209c0()*-0.0044889);
}

double NNfunction_NG_3::synapse0x29de590() {
   return (neuron0x2c20d00()*-0.00830079);
}

double NNfunction_NG_3::synapse0x29de5d0() {
   return (neuron0x2c21040()*0.0520753);
}

double NNfunction_NG_3::synapse0x29de610() {
   return (neuron0x2c21380()*0.0297149);
}

double NNfunction_NG_3::synapse0x29de650() {
   return (neuron0x2c216c0()*-0.03274);
}

double NNfunction_NG_3::synapse0x29de690() {
   return (neuron0x2c21a00()*-0.0542328);
}

double NNfunction_NG_3::synapse0x29de6d0() {
   return (neuron0x2c21d40()*-0.0141984);
}

double NNfunction_NG_3::synapse0x2c26a50() {
   return (neuron0x2c22080()*-0.0152418);
}

double NNfunction_NG_3::synapse0x2c26a90() {
   return (neuron0x2c225e0()*-0.0448088);
}

double NNfunction_NG_3::synapse0x29de820() {
   return (neuron0x2c22800()*0.00831767);
}

double NNfunction_NG_3::synapse0x29de860() {
   return (neuron0x2c22b40()*0.00741873);
}

double NNfunction_NG_3::synapse0x29de8a0() {
   return (neuron0x2c22e80()*0.00109657);
}

double NNfunction_NG_3::synapse0x29de8e0() {
   return (neuron0x2c231c0()*0.031638);
}

double NNfunction_NG_3::synapse0x29de920() {
   return (neuron0x2c23500()*-0.0134546);
}

double NNfunction_NG_3::synapse0x2c27650() {
   return (neuron0x2c23840()*-2.53343);
}

double NNfunction_NG_3::synapse0x2c279d0() {
   return (neuron0x2c1ec80()*-0.0097394);
}

double NNfunction_NG_3::synapse0x2c27a10() {
   return (neuron0x2c1efc0()*-0.169964);
}

double NNfunction_NG_3::synapse0x2c27a50() {
   return (neuron0x2c1f300()*-0.00869493);
}

double NNfunction_NG_3::synapse0x2c27a90() {
   return (neuron0x2c1f640()*0.171462);
}

double NNfunction_NG_3::synapse0x2c27ad0() {
   return (neuron0x2c1f980()*0.0213495);
}

double NNfunction_NG_3::synapse0x2c27b10() {
   return (neuron0x2c1fcc0()*0.029208);
}

double NNfunction_NG_3::synapse0x2c27b50() {
   return (neuron0x2c20000()*0.0412191);
}

double NNfunction_NG_3::synapse0x2c27b90() {
   return (neuron0x2c20340()*0.0435245);
}

double NNfunction_NG_3::synapse0x2c27bd0() {
   return (neuron0x2c20680()*-0.0575142);
}

double NNfunction_NG_3::synapse0x2c27c10() {
   return (neuron0x2c209c0()*-0.0941935);
}

double NNfunction_NG_3::synapse0x2c27c50() {
   return (neuron0x2c20d00()*-0.0519328);
}

double NNfunction_NG_3::synapse0x2c27c90() {
   return (neuron0x2c21040()*0.319756);
}

double NNfunction_NG_3::synapse0x2c27cd0() {
   return (neuron0x2c21380()*0.0368627);
}

double NNfunction_NG_3::synapse0x2c27d10() {
   return (neuron0x2c216c0()*-0.00480972);
}

double NNfunction_NG_3::synapse0x2c27d50() {
   return (neuron0x2c21a00()*0.751653);
}

double NNfunction_NG_3::synapse0x2c27d90() {
   return (neuron0x2c21d40()*0.0113933);
}

double NNfunction_NG_3::synapse0x2c27820() {
   return (neuron0x2c22080()*0.0275456);
}

double NNfunction_NG_3::synapse0x2c27860() {
   return (neuron0x2c225e0()*-2.81724);
}

double NNfunction_NG_3::synapse0x2c27ee0() {
   return (neuron0x2c22800()*0.014782);
}

double NNfunction_NG_3::synapse0x2c27f20() {
   return (neuron0x2c22b40()*-0.0383679);
}

double NNfunction_NG_3::synapse0x2c27f60() {
   return (neuron0x2c22e80()*0.0030003);
}

double NNfunction_NG_3::synapse0x2c27fa0() {
   return (neuron0x2c231c0()*0.00509599);
}

double NNfunction_NG_3::synapse0x2c27fe0() {
   return (neuron0x2c23500()*-0.0103473);
}

double NNfunction_NG_3::synapse0x2c28020() {
   return (neuron0x2c23840()*0.227606);
}

double NNfunction_NG_3::synapse0x2c283a0() {
   return (neuron0x2c1ec80()*0.0345247);
}

double NNfunction_NG_3::synapse0x2c283e0() {
   return (neuron0x2c1efc0()*-0.0493198);
}

double NNfunction_NG_3::synapse0x2c28420() {
   return (neuron0x2c1f300()*0.851279);
}

double NNfunction_NG_3::synapse0x2c28460() {
   return (neuron0x2c1f640()*0.10457);
}

double NNfunction_NG_3::synapse0x2c284a0() {
   return (neuron0x2c1f980()*0.00981263);
}

double NNfunction_NG_3::synapse0x2c284e0() {
   return (neuron0x2c1fcc0()*-0.0122538);
}

double NNfunction_NG_3::synapse0x2c28520() {
   return (neuron0x2c20000()*-0.0208667);
}

double NNfunction_NG_3::synapse0x2c28560() {
   return (neuron0x2c20340()*0.0160662);
}

double NNfunction_NG_3::synapse0x2c285a0() {
   return (neuron0x2c20680()*-0.0262505);
}

double NNfunction_NG_3::synapse0x2c285e0() {
   return (neuron0x2c209c0()*0.0709725);
}

double NNfunction_NG_3::synapse0x2c28620() {
   return (neuron0x2c20d00()*0.0377506);
}

double NNfunction_NG_3::synapse0x2c28660() {
   return (neuron0x2c21040()*0.458916);
}

double NNfunction_NG_3::synapse0x2c286a0() {
   return (neuron0x2c21380()*-0.0484843);
}

double NNfunction_NG_3::synapse0x2c286e0() {
   return (neuron0x2c216c0()*0.00240256);
}

double NNfunction_NG_3::synapse0x2c28720() {
   return (neuron0x2c21a00()*-0.361155);
}

double NNfunction_NG_3::synapse0x2c28760() {
   return (neuron0x2c21d40()*-0.0178243);
}

double NNfunction_NG_3::synapse0x2c281f0() {
   return (neuron0x2c22080()*-0.0102054);
}

double NNfunction_NG_3::synapse0x2c28230() {
   return (neuron0x2c225e0()*-0.0466085);
}

double NNfunction_NG_3::synapse0x2c288b0() {
   return (neuron0x2c22800()*0.0184118);
}

double NNfunction_NG_3::synapse0x2c288f0() {
   return (neuron0x2c22b40()*0.0176028);
}

double NNfunction_NG_3::synapse0x2c28930() {
   return (neuron0x2c22e80()*0.0346889);
}

double NNfunction_NG_3::synapse0x2c28970() {
   return (neuron0x2c231c0()*-0.00790813);
}

double NNfunction_NG_3::synapse0x2c289b0() {
   return (neuron0x2c23500()*0.00109577);
}

double NNfunction_NG_3::synapse0x2c289f0() {
   return (neuron0x2c23840()*0.0634544);
}

double NNfunction_NG_3::synapse0x2c224d0() {
   return (neuron0x2c1ec80()*0.0156061);
}

double NNfunction_NG_3::synapse0x2c22510() {
   return (neuron0x2c1efc0()*0.0635184);
}

double NNfunction_NG_3::synapse0x2c22550() {
   return (neuron0x2c1f300()*0.424594);
}

double NNfunction_NG_3::synapse0x2c22590() {
   return (neuron0x2c1f640()*-1.27199);
}

double NNfunction_NG_3::synapse0x2c28f80() {
   return (neuron0x2c1f980()*-0.0370076);
}

double NNfunction_NG_3::synapse0x2c28fc0() {
   return (neuron0x2c1fcc0()*0.00262224);
}

double NNfunction_NG_3::synapse0x2c29000() {
   return (neuron0x2c20000()*0.00972184);
}

double NNfunction_NG_3::synapse0x2c29040() {
   return (neuron0x2c20340()*-0.0363935);
}

double NNfunction_NG_3::synapse0x2c29080() {
   return (neuron0x2c20680()*-0.00287757);
}

double NNfunction_NG_3::synapse0x2c290c0() {
   return (neuron0x2c209c0()*-0.0527404);
}

double NNfunction_NG_3::synapse0x2c29100() {
   return (neuron0x2c20d00()*0.00467133);
}

double NNfunction_NG_3::synapse0x2c29140() {
   return (neuron0x2c21040()*0.129053);
}

double NNfunction_NG_3::synapse0x2c29180() {
   return (neuron0x2c21380()*-0.0414701);
}

double NNfunction_NG_3::synapse0x2c291c0() {
   return (neuron0x2c216c0()*-0.0446081);
}

double NNfunction_NG_3::synapse0x2c29200() {
   return (neuron0x2c21a00()*0.170269);
}

double NNfunction_NG_3::synapse0x2c29240() {
   return (neuron0x2c21d40()*-0.0464139);
}

double NNfunction_NG_3::synapse0x2c28bc0() {
   return (neuron0x2c22080()*-0.0247036);
}

double NNfunction_NG_3::synapse0x2c28c00() {
   return (neuron0x2c225e0()*-0.0397687);
}

double NNfunction_NG_3::synapse0x2c29390() {
   return (neuron0x2c22800()*-0.0267577);
}

double NNfunction_NG_3::synapse0x2c293d0() {
   return (neuron0x2c22b40()*-0.00062265);
}

double NNfunction_NG_3::synapse0x2c29410() {
   return (neuron0x2c22e80()*0.0420764);
}

double NNfunction_NG_3::synapse0x2c29450() {
   return (neuron0x2c231c0()*0.0358437);
}

double NNfunction_NG_3::synapse0x2c29490() {
   return (neuron0x2c23500()*-0.00168377);
}

double NNfunction_NG_3::synapse0x2c294d0() {
   return (neuron0x2c23840()*1.43197);
}

double NNfunction_NG_3::synapse0x2c29850() {
   return (neuron0x2c1ec80()*-0.051292);
}

double NNfunction_NG_3::synapse0x2c29890() {
   return (neuron0x2c1efc0()*0.121303);
}

double NNfunction_NG_3::synapse0x2c298d0() {
   return (neuron0x2c1f300()*-0.300436);
}

double NNfunction_NG_3::synapse0x2c29910() {
   return (neuron0x2c1f640()*-2.35505);
}

double NNfunction_NG_3::synapse0x2c29950() {
   return (neuron0x2c1f980()*-0.0542537);
}

double NNfunction_NG_3::synapse0x2c29990() {
   return (neuron0x2c1fcc0()*-0.00696959);
}

double NNfunction_NG_3::synapse0x2c299d0() {
   return (neuron0x2c20000()*-0.0631509);
}

double NNfunction_NG_3::synapse0x2c29a10() {
   return (neuron0x2c20340()*0.00531496);
}

double NNfunction_NG_3::synapse0x2c29a50() {
   return (neuron0x2c20680()*0.019687);
}

double NNfunction_NG_3::synapse0x2c29a90() {
   return (neuron0x2c209c0()*0.0391074);
}

double NNfunction_NG_3::synapse0x2c29ad0() {
   return (neuron0x2c20d00()*0.0132589);
}

double NNfunction_NG_3::synapse0x2c29b10() {
   return (neuron0x2c21040()*0.143621);
}

double NNfunction_NG_3::synapse0x2c29b50() {
   return (neuron0x2c21380()*0.144632);
}

double NNfunction_NG_3::synapse0x2c29b90() {
   return (neuron0x2c216c0()*-0.0180199);
}

double NNfunction_NG_3::synapse0x2c29bd0() {
   return (neuron0x2c21a00()*0.0961678);
}

double NNfunction_NG_3::synapse0x2c29c10() {
   return (neuron0x2c21d40()*-0.0231282);
}

double NNfunction_NG_3::synapse0x2c296a0() {
   return (neuron0x2c22080()*-0.0253807);
}

double NNfunction_NG_3::synapse0x2c296e0() {
   return (neuron0x2c225e0()*-0.0898201);
}

double NNfunction_NG_3::synapse0x2c29d60() {
   return (neuron0x2c22800()*-0.00218499);
}

double NNfunction_NG_3::synapse0x2c29da0() {
   return (neuron0x2c22b40()*0.00355129);
}

double NNfunction_NG_3::synapse0x2c29de0() {
   return (neuron0x2c22e80()*-0.0174898);
}

double NNfunction_NG_3::synapse0x2c29e20() {
   return (neuron0x2c231c0()*-0.00977977);
}

double NNfunction_NG_3::synapse0x2c29e60() {
   return (neuron0x2c23500()*-0.027562);
}

double NNfunction_NG_3::synapse0x2c29ea0() {
   return (neuron0x2c23840()*0.13744);
}

double NNfunction_NG_3::synapse0x2c2a220() {
   return (neuron0x2c1ec80()*0.00112098);
}

double NNfunction_NG_3::synapse0x2c2a260() {
   return (neuron0x2c1efc0()*0.0120294);
}

double NNfunction_NG_3::synapse0x2c2a2a0() {
   return (neuron0x2c1f300()*0.0310443);
}

double NNfunction_NG_3::synapse0x2c2a2e0() {
   return (neuron0x2c1f640()*12.1019);
}

double NNfunction_NG_3::synapse0x2c2a320() {
   return (neuron0x2c1f980()*0.00670519);
}

double NNfunction_NG_3::synapse0x2c2a360() {
   return (neuron0x2c1fcc0()*0.00255793);
}

double NNfunction_NG_3::synapse0x2c2a3a0() {
   return (neuron0x2c20000()*-0.026107);
}

double NNfunction_NG_3::synapse0x2c2a3e0() {
   return (neuron0x2c20340()*-0.0222592);
}

double NNfunction_NG_3::synapse0x2c2a420() {
   return (neuron0x2c20680()*-0.00511936);
}

double NNfunction_NG_3::synapse0x2c2a460() {
   return (neuron0x2c209c0()*0.0134061);
}

double NNfunction_NG_3::synapse0x2c2a4a0() {
   return (neuron0x2c20d00()*-0.00193875);
}

double NNfunction_NG_3::synapse0x2c2a4e0() {
   return (neuron0x2c21040()*0.0264014);
}

double NNfunction_NG_3::synapse0x2c2a520() {
   return (neuron0x2c21380()*0.0136809);
}

double NNfunction_NG_3::synapse0x2c2a560() {
   return (neuron0x2c216c0()*0.0083216);
}

double NNfunction_NG_3::synapse0x2c2a5a0() {
   return (neuron0x2c21a00()*0.01154);
}

double NNfunction_NG_3::synapse0x2c2a5e0() {
   return (neuron0x2c21d40()*-0.0119526);
}

double NNfunction_NG_3::synapse0x2c2a070() {
   return (neuron0x2c22080()*0.0158851);
}

double NNfunction_NG_3::synapse0x2c2a0b0() {
   return (neuron0x2c225e0()*-0.00501018);
}

double NNfunction_NG_3::synapse0x2c26e40() {
   return (neuron0x2c22800()*0.0116071);
}

double NNfunction_NG_3::synapse0x2c26e80() {
   return (neuron0x2c22b40()*0.000364358);
}

double NNfunction_NG_3::synapse0x2c26ec0() {
   return (neuron0x2c22e80()*0.0171539);
}

double NNfunction_NG_3::synapse0x2c26f00() {
   return (neuron0x2c231c0()*-0.0155641);
}

double NNfunction_NG_3::synapse0x2c26f40() {
   return (neuron0x2c23500()*0.00771687);
}

double NNfunction_NG_3::synapse0x2c26f80() {
   return (neuron0x2c23840()*0.01363);
}

double NNfunction_NG_3::synapse0x2c27300() {
   return (neuron0x2c1ec80()*0.0117662);
}

double NNfunction_NG_3::synapse0x2c27340() {
   return (neuron0x2c1efc0()*-0.0139231);
}

double NNfunction_NG_3::synapse0x2c27380() {
   return (neuron0x2c1f300()*0.0112899);
}

double NNfunction_NG_3::synapse0x2c273c0() {
   return (neuron0x2c1f640()*-1.35967);
}

double NNfunction_NG_3::synapse0x2c27400() {
   return (neuron0x2c1f980()*0.0109292);
}

double NNfunction_NG_3::synapse0x2c27440() {
   return (neuron0x2c1fcc0()*0.00299568);
}

double NNfunction_NG_3::synapse0x2c27480() {
   return (neuron0x2c20000()*0.00280953);
}

double NNfunction_NG_3::synapse0x2c274c0() {
   return (neuron0x2c20340()*0.00130268);
}

double NNfunction_NG_3::synapse0x2c27500() {
   return (neuron0x2c20680()*-0.0125169);
}

double NNfunction_NG_3::synapse0x2c27540() {
   return (neuron0x2c209c0()*-0.00381919);
}

double NNfunction_NG_3::synapse0x2c27580() {
   return (neuron0x2c20d00()*-0.00599939);
}

double NNfunction_NG_3::synapse0x2c275c0() {
   return (neuron0x2c21040()*0.0700636);
}

double NNfunction_NG_3::synapse0x2c27600() {
   return (neuron0x2c21380()*-0.00479945);
}

double NNfunction_NG_3::synapse0x2c2b740() {
   return (neuron0x2c216c0()*0.0101526);
}

double NNfunction_NG_3::synapse0x2c2b780() {
   return (neuron0x2c21a00()*0.00932773);
}

double NNfunction_NG_3::synapse0x2c2b7c0() {
   return (neuron0x2c21d40()*0.00594757);
}

double NNfunction_NG_3::synapse0x2c27150() {
   return (neuron0x2c22080()*0.0119105);
}

double NNfunction_NG_3::synapse0x2c27190() {
   return (neuron0x2c225e0()*-0.00683868);
}

double NNfunction_NG_3::synapse0x2c2b910() {
   return (neuron0x2c22800()*-0.000391223);
}

double NNfunction_NG_3::synapse0x2c2b950() {
   return (neuron0x2c22b40()*0.00384947);
}

double NNfunction_NG_3::synapse0x2c2b990() {
   return (neuron0x2c22e80()*0.0079866);
}

double NNfunction_NG_3::synapse0x2c2b9d0() {
   return (neuron0x2c231c0()*0.00432899);
}

double NNfunction_NG_3::synapse0x2c2ba10() {
   return (neuron0x2c23500()*0.00861595);
}

double NNfunction_NG_3::synapse0x2c2ba50() {
   return (neuron0x2c23840()*-0.0118038);
}

double NNfunction_NG_3::synapse0x2c2bdd0() {
   return (neuron0x2c1ec80()*-0.0400376);
}

double NNfunction_NG_3::synapse0x2c2be10() {
   return (neuron0x2c1efc0()*0.0463986);
}

double NNfunction_NG_3::synapse0x2c2be50() {
   return (neuron0x2c1f300()*-0.479465);
}

double NNfunction_NG_3::synapse0x2c2be90() {
   return (neuron0x2c1f640()*-0.974497);
}

double NNfunction_NG_3::synapse0x2c2bed0() {
   return (neuron0x2c1f980()*0.0162799);
}

double NNfunction_NG_3::synapse0x2c2bf10() {
   return (neuron0x2c1fcc0()*-0.0120756);
}

double NNfunction_NG_3::synapse0x2c2bf50() {
   return (neuron0x2c20000()*0.0234856);
}

double NNfunction_NG_3::synapse0x2c2bf90() {
   return (neuron0x2c20340()*0.0261851);
}

double NNfunction_NG_3::synapse0x2c2bfd0() {
   return (neuron0x2c20680()*-0.0250085);
}

double NNfunction_NG_3::synapse0x2c2c010() {
   return (neuron0x2c209c0()*-0.0740476);
}

double NNfunction_NG_3::synapse0x2c2c050() {
   return (neuron0x2c20d00()*-0.0945198);
}

double NNfunction_NG_3::synapse0x2c2c090() {
   return (neuron0x2c21040()*-0.659827);
}

double NNfunction_NG_3::synapse0x2c2c0d0() {
   return (neuron0x2c21380()*-0.0440263);
}

double NNfunction_NG_3::synapse0x2c2c110() {
   return (neuron0x2c216c0()*-0.0583824);
}

double NNfunction_NG_3::synapse0x2c2c150() {
   return (neuron0x2c21a00()*0.759392);
}

double NNfunction_NG_3::synapse0x2c2c190() {
   return (neuron0x2c21d40()*0.0323372);
}

double NNfunction_NG_3::synapse0x2c2bc20() {
   return (neuron0x2c22080()*0.0485422);
}

double NNfunction_NG_3::synapse0x2c2bc60() {
   return (neuron0x2c225e0()*-0.0914268);
}

double NNfunction_NG_3::synapse0x2c2c2e0() {
   return (neuron0x2c22800()*-0.0927156);
}

double NNfunction_NG_3::synapse0x2c2c320() {
   return (neuron0x2c22b40()*-0.0110368);
}

double NNfunction_NG_3::synapse0x2c2c360() {
   return (neuron0x2c22e80()*-0.0393);
}

double NNfunction_NG_3::synapse0x2c2c3a0() {
   return (neuron0x2c231c0()*-0.0239404);
}

double NNfunction_NG_3::synapse0x2c2c3e0() {
   return (neuron0x2c23500()*-0.00769906);
}

double NNfunction_NG_3::synapse0x2c2c420() {
   return (neuron0x2c23840()*0.139529);
}

double NNfunction_NG_3::synapse0x2c2c7a0() {
   return (neuron0x2c1ec80()*0.0819313);
}

double NNfunction_NG_3::synapse0x2c2c7e0() {
   return (neuron0x2c1efc0()*0.0791079);
}

double NNfunction_NG_3::synapse0x2c2c820() {
   return (neuron0x2c1f300()*0.680888);
}

double NNfunction_NG_3::synapse0x2c2c860() {
   return (neuron0x2c1f640()*1.76049);
}

double NNfunction_NG_3::synapse0x2c2c8a0() {
   return (neuron0x2c1f980()*0.015333);
}

double NNfunction_NG_3::synapse0x2c2c8e0() {
   return (neuron0x2c1fcc0()*0.0174067);
}

double NNfunction_NG_3::synapse0x2c2c920() {
   return (neuron0x2c20000()*0.0598519);
}

double NNfunction_NG_3::synapse0x2c2c960() {
   return (neuron0x2c20340()*0.0282291);
}

double NNfunction_NG_3::synapse0x2c2c9a0() {
   return (neuron0x2c20680()*-0.00376524);
}

double NNfunction_NG_3::synapse0x2c2c9e0() {
   return (neuron0x2c209c0()*-0.0357847);
}

double NNfunction_NG_3::synapse0x2c2ca20() {
   return (neuron0x2c20d00()*-0.0624015);
}

double NNfunction_NG_3::synapse0x2c2ca60() {
   return (neuron0x2c21040()*-0.241099);
}

double NNfunction_NG_3::synapse0x2c2caa0() {
   return (neuron0x2c21380()*-0.0754385);
}

double NNfunction_NG_3::synapse0x2c2cae0() {
   return (neuron0x2c216c0()*0.0116634);
}

double NNfunction_NG_3::synapse0x2c2cb20() {
   return (neuron0x2c21a00()*0.0570985);
}

double NNfunction_NG_3::synapse0x2c2cb60() {
   return (neuron0x2c21d40()*0.0132232);
}

double NNfunction_NG_3::synapse0x2c2c5f0() {
   return (neuron0x2c22080()*-0.015049);
}

double NNfunction_NG_3::synapse0x2c2c630() {
   return (neuron0x2c225e0()*0.0511423);
}

double NNfunction_NG_3::synapse0x2c2ccb0() {
   return (neuron0x2c22800()*-0.0296813);
}

double NNfunction_NG_3::synapse0x2c2ccf0() {
   return (neuron0x2c22b40()*0.00412949);
}

double NNfunction_NG_3::synapse0x2c2cd30() {
   return (neuron0x2c22e80()*-0.000731225);
}

double NNfunction_NG_3::synapse0x2c2cd70() {
   return (neuron0x2c231c0()*0.00432146);
}

double NNfunction_NG_3::synapse0x2c2cdb0() {
   return (neuron0x2c23500()*0.0307577);
}

double NNfunction_NG_3::synapse0x2c2cdf0() {
   return (neuron0x2c23840()*-0.298595);
}

double NNfunction_NG_3::synapse0x2c2d170() {
   return (neuron0x2c1ec80()*-0.0451333);
}

double NNfunction_NG_3::synapse0x2c2d1b0() {
   return (neuron0x2c1efc0()*0.052085);
}

double NNfunction_NG_3::synapse0x2c2d1f0() {
   return (neuron0x2c1f300()*1.75629);
}

double NNfunction_NG_3::synapse0x2c2d230() {
   return (neuron0x2c1f640()*-0.126836);
}

double NNfunction_NG_3::synapse0x2c2d270() {
   return (neuron0x2c1f980()*0.0253414);
}

double NNfunction_NG_3::synapse0x2c2d2b0() {
   return (neuron0x2c1fcc0()*0.00553008);
}

double NNfunction_NG_3::synapse0x2c2d2f0() {
   return (neuron0x2c20000()*0.0275726);
}

double NNfunction_NG_3::synapse0x2c2d330() {
   return (neuron0x2c20340()*0.0206753);
}

double NNfunction_NG_3::synapse0x2c2d370() {
   return (neuron0x2c20680()*-0.0100484);
}

double NNfunction_NG_3::synapse0x2c2d3b0() {
   return (neuron0x2c209c0()*0.025983);
}

double NNfunction_NG_3::synapse0x2c2d3f0() {
   return (neuron0x2c20d00()*0.00762212);
}

double NNfunction_NG_3::synapse0x2c2d430() {
   return (neuron0x2c21040()*0.150249);
}

double NNfunction_NG_3::synapse0x2c2d470() {
   return (neuron0x2c21380()*-0.222581);
}

double NNfunction_NG_3::synapse0x2c2d4b0() {
   return (neuron0x2c216c0()*-0.0187416);
}

double NNfunction_NG_3::synapse0x2c2d4f0() {
   return (neuron0x2c21a00()*-0.308351);
}

double NNfunction_NG_3::synapse0x2c2d530() {
   return (neuron0x2c21d40()*0.010878);
}

double NNfunction_NG_3::synapse0x2c2cfc0() {
   return (neuron0x2c22080()*0.0111091);
}

double NNfunction_NG_3::synapse0x2c2d000() {
   return (neuron0x2c225e0()*-0.0556369);
}

double NNfunction_NG_3::synapse0x2c2d680() {
   return (neuron0x2c22800()*-0.0158186);
}

double NNfunction_NG_3::synapse0x2c2d6c0() {
   return (neuron0x2c22b40()*-0.016578);
}

double NNfunction_NG_3::synapse0x2c2d700() {
   return (neuron0x2c22e80()*-0.0119053);
}

double NNfunction_NG_3::synapse0x2c2d740() {
   return (neuron0x2c231c0()*0.0127459);
}

double NNfunction_NG_3::synapse0x2c2d780() {
   return (neuron0x2c23500()*-0.0306128);
}

double NNfunction_NG_3::synapse0x2c2d7c0() {
   return (neuron0x2c23840()*0.365872);
}

double NNfunction_NG_3::synapse0x2c2db40() {
   return (neuron0x2c1ec80()*0.00788614);
}

double NNfunction_NG_3::synapse0x2c1eea0() {
   return (neuron0x2c1efc0()*3.32202);
}

double NNfunction_NG_3::synapse0x2c1eee0() {
   return (neuron0x2c1f300()*0.251927);
}

double NNfunction_NG_3::synapse0x2c1f1e0() {
   return (neuron0x2c1f640()*0.387745);
}

double NNfunction_NG_3::synapse0x2c1f220() {
   return (neuron0x2c1f980()*-0.0513515);
}

double NNfunction_NG_3::synapse0x2c1f520() {
   return (neuron0x2c1fcc0()*-0.0191595);
}

double NNfunction_NG_3::synapse0x2c1f560() {
   return (neuron0x2c20000()*-0.00336515);
}

double NNfunction_NG_3::synapse0x2c1f860() {
   return (neuron0x2c20340()*-0.0311611);
}

double NNfunction_NG_3::synapse0x2c1f8a0() {
   return (neuron0x2c20680()*-0.0383036);
}

double NNfunction_NG_3::synapse0x2c1fba0() {
   return (neuron0x2c209c0()*0.0180235);
}

double NNfunction_NG_3::synapse0x2c1fbe0() {
   return (neuron0x2c20d00()*-0.0718269);
}

double NNfunction_NG_3::synapse0x2c1fee0() {
   return (neuron0x2c21040()*-0.485754);
}

double NNfunction_NG_3::synapse0x2c1ff20() {
   return (neuron0x2c21380()*-0.0636448);
}

double NNfunction_NG_3::synapse0x2c20220() {
   return (neuron0x2c216c0()*-0.00274116);
}

double NNfunction_NG_3::synapse0x2c20260() {
   return (neuron0x2c21a00()*2.53318);
}

double NNfunction_NG_3::synapse0x2c20560() {
   return (neuron0x2c21d40()*-0.0320415);
}

double NNfunction_NG_3::synapse0x2c205a0() {
   return (neuron0x2c22080()*0.0542708);
}

double NNfunction_NG_3::synapse0x2c208a0() {
   return (neuron0x2c225e0()*-0.0741233);
}

double NNfunction_NG_3::synapse0x2c208e0() {
   return (neuron0x2c22800()*-0.0546163);
}

double NNfunction_NG_3::synapse0x2c20be0() {
   return (neuron0x2c22b40()*-0.0467021);
}

double NNfunction_NG_3::synapse0x2c20c20() {
   return (neuron0x2c22e80()*0.02936);
}

double NNfunction_NG_3::synapse0x2c20f20() {
   return (neuron0x2c231c0()*0.00308111);
}

double NNfunction_NG_3::synapse0x2c20f60() {
   return (neuron0x2c23500()*-0.00267967);
}

double NNfunction_NG_3::synapse0x2c21260() {
   return (neuron0x2c23840()*0.146256);
}

double NNfunction_NG_3::synapse0x2c212a0() {
   return (neuron0x2c1ec80()*-0.0106295);
}

double NNfunction_NG_3::synapse0x2c21f60() {
   return (neuron0x2c1efc0()*-0.0324416);
}

double NNfunction_NG_3::synapse0x2c21fa0() {
   return (neuron0x2c1f300()*-3.83273);
}

double NNfunction_NG_3::synapse0x2c2d990() {
   return (neuron0x2c1f640()*-0.0108371);
}

double NNfunction_NG_3::synapse0x2c2d9d0() {
   return (neuron0x2c1f980()*0.0056897);
}

double NNfunction_NG_3::synapse0x2c222a0() {
   return (neuron0x2c1fcc0()*0.00131958);
}

double NNfunction_NG_3::synapse0x2c222e0() {
   return (neuron0x2c20000()*0.0095964);
}

double NNfunction_NG_3::synapse0x29d0230() {
   return (neuron0x2c20340()*-0.00800467);
}

double NNfunction_NG_3::synapse0x29d0270() {
   return (neuron0x2c20680()*0.00484965);
}

double NNfunction_NG_3::synapse0x2c22a20() {
   return (neuron0x2c209c0()*0.00861778);
}

double NNfunction_NG_3::synapse0x2c22a60() {
   return (neuron0x2c20d00()*0.00757303);
}

double NNfunction_NG_3::synapse0x2c22d60() {
   return (neuron0x2c21040()*0.0675705);
}

double NNfunction_NG_3::synapse0x2c22da0() {
   return (neuron0x2c21380()*0.00581078);
}

double NNfunction_NG_3::synapse0x2c230a0() {
   return (neuron0x2c216c0()*0.0206927);
}

double NNfunction_NG_3::synapse0x2c230e0() {
   return (neuron0x2c21a00()*0.0210755);
}

double NNfunction_NG_3::synapse0x2c233e0() {
   return (neuron0x2c21d40()*0.0138718);
}

double NNfunction_NG_3::synapse0x2c23420() {
   return (neuron0x2c22080()*-0.00291149);
}

double NNfunction_NG_3::synapse0x2c23720() {
   return (neuron0x2c225e0()*-0.00162927);
}

double NNfunction_NG_3::synapse0x2c23760() {
   return (neuron0x2c22800()*-0.0283086);
}

double NNfunction_NG_3::synapse0x2c23a60() {
   return (neuron0x2c22b40()*0.0219212);
}

double NNfunction_NG_3::synapse0x2c23aa0() {
   return (neuron0x2c22e80()*0.00897171);
}

double NNfunction_NG_3::synapse0x2c215a0() {
   return (neuron0x2c231c0()*0.00864029);
}

double NNfunction_NG_3::synapse0x2c215e0() {
   return (neuron0x2c23500()*-0.00254575);
}

double NNfunction_NG_3::synapse0x2c2f8b0() {
   return (neuron0x2c23840()*-2.46925);
}

double NNfunction_NG_3::synapse0x2c2fc30() {
   return (neuron0x2c1ec80()*0.0479945);
}

double NNfunction_NG_3::synapse0x2c2fc70() {
   return (neuron0x2c1efc0()*0.0825504);
}

double NNfunction_NG_3::synapse0x2c2fcb0() {
   return (neuron0x2c1f300()*-0.20895);
}

double NNfunction_NG_3::synapse0x2c2fcf0() {
   return (neuron0x2c1f640()*0.373431);
}

double NNfunction_NG_3::synapse0x2c2fd30() {
   return (neuron0x2c1f980()*-0.467737);
}

double NNfunction_NG_3::synapse0x2c2fd70() {
   return (neuron0x2c1fcc0()*-0.170738);
}

double NNfunction_NG_3::synapse0x2c2fdb0() {
   return (neuron0x2c20000()*-0.345307);
}

double NNfunction_NG_3::synapse0x2c2fdf0() {
   return (neuron0x2c20340()*-0.417333);
}

double NNfunction_NG_3::synapse0x2c2fe30() {
   return (neuron0x2c20680()*0.166039);
}

double NNfunction_NG_3::synapse0x2c2fe70() {
   return (neuron0x2c209c0()*0.225585);
}

double NNfunction_NG_3::synapse0x2c2feb0() {
   return (neuron0x2c20d00()*-0.0928319);
}

double NNfunction_NG_3::synapse0x2c2fef0() {
   return (neuron0x2c21040()*0.510069);
}

double NNfunction_NG_3::synapse0x2c2ff30() {
   return (neuron0x2c21380()*0.0164988);
}

double NNfunction_NG_3::synapse0x2c2ff70() {
   return (neuron0x2c216c0()*0.335327);
}

double NNfunction_NG_3::synapse0x2c2ffb0() {
   return (neuron0x2c21a00()*0.218709);
}

double NNfunction_NG_3::synapse0x2c2fff0() {
   return (neuron0x2c21d40()*0.26);
}

double NNfunction_NG_3::synapse0x2c2fa80() {
   return (neuron0x2c22080()*-0.000184048);
}

double NNfunction_NG_3::synapse0x2c2fac0() {
   return (neuron0x2c225e0()*-0.0422727);
}

double NNfunction_NG_3::synapse0x2c30140() {
   return (neuron0x2c22800()*0.0926638);
}

double NNfunction_NG_3::synapse0x2c30180() {
   return (neuron0x2c22b40()*0.123866);
}

double NNfunction_NG_3::synapse0x2c301c0() {
   return (neuron0x2c22e80()*-0.22744);
}

double NNfunction_NG_3::synapse0x2c30200() {
   return (neuron0x2c231c0()*-0.0990485);
}

double NNfunction_NG_3::synapse0x2c30240() {
   return (neuron0x2c23500()*-0.228683);
}

double NNfunction_NG_3::synapse0x2c30280() {
   return (neuron0x2c23840()*0.0284353);
}

double NNfunction_NG_3::synapse0x2c30600() {
   return (neuron0x2c1ec80()*-0.0310232);
}

double NNfunction_NG_3::synapse0x2c30640() {
   return (neuron0x2c1efc0()*-10.7706);
}

double NNfunction_NG_3::synapse0x2c30680() {
   return (neuron0x2c1f300()*0.689314);
}

double NNfunction_NG_3::synapse0x2c306c0() {
   return (neuron0x2c1f640()*0.0125985);
}

double NNfunction_NG_3::synapse0x2c30700() {
   return (neuron0x2c1f980()*-0.00309163);
}

double NNfunction_NG_3::synapse0x2c30740() {
   return (neuron0x2c1fcc0()*-0.006883);
}

double NNfunction_NG_3::synapse0x2c30780() {
   return (neuron0x2c20000()*-0.00576086);
}

double NNfunction_NG_3::synapse0x2c307c0() {
   return (neuron0x2c20340()*0.00330376);
}

double NNfunction_NG_3::synapse0x2c30800() {
   return (neuron0x2c20680()*-0.0137288);
}

double NNfunction_NG_3::synapse0x2c30840() {
   return (neuron0x2c209c0()*0.0119519);
}

double NNfunction_NG_3::synapse0x2c30880() {
   return (neuron0x2c20d00()*-0.0019119);
}

double NNfunction_NG_3::synapse0x2c308c0() {
   return (neuron0x2c21040()*0.0656627);
}

double NNfunction_NG_3::synapse0x2c30900() {
   return (neuron0x2c21380()*0.00178473);
}

double NNfunction_NG_3::synapse0x2c30940() {
   return (neuron0x2c216c0()*0.00720043);
}

double NNfunction_NG_3::synapse0x2c30980() {
   return (neuron0x2c21a00()*-0.0467148);
}

double NNfunction_NG_3::synapse0x2c309c0() {
   return (neuron0x2c21d40()*-0.0161339);
}

double NNfunction_NG_3::synapse0x2c30450() {
   return (neuron0x2c22080()*0.00441933);
}

double NNfunction_NG_3::synapse0x2c30490() {
   return (neuron0x2c225e0()*0.00996279);
}

double NNfunction_NG_3::synapse0x2c30b10() {
   return (neuron0x2c22800()*0.00532291);
}

double NNfunction_NG_3::synapse0x2c30b50() {
   return (neuron0x2c22b40()*0.00929383);
}

double NNfunction_NG_3::synapse0x2c30b90() {
   return (neuron0x2c22e80()*0.00214034);
}

double NNfunction_NG_3::synapse0x2c30bd0() {
   return (neuron0x2c231c0()*-0.00954607);
}

double NNfunction_NG_3::synapse0x2c30c10() {
   return (neuron0x2c23500()*0.00116651);
}

double NNfunction_NG_3::synapse0x2c30c50() {
   return (neuron0x2c23840()*-0.443325);
}

double NNfunction_NG_3::synapse0x2c30fd0() {
   return (neuron0x2c1ec80()*0.0103479);
}

double NNfunction_NG_3::synapse0x2c31010() {
   return (neuron0x2c1efc0()*0.0157134);
}

double NNfunction_NG_3::synapse0x2c31050() {
   return (neuron0x2c1f300()*-0.23566);
}

double NNfunction_NG_3::synapse0x2c31090() {
   return (neuron0x2c1f640()*-0.842648);
}

double NNfunction_NG_3::synapse0x2c310d0() {
   return (neuron0x2c1f980()*-0.00944137);
}

double NNfunction_NG_3::synapse0x2c31110() {
   return (neuron0x2c1fcc0()*-0.00254841);
}

double NNfunction_NG_3::synapse0x2c31150() {
   return (neuron0x2c20000()*-0.00675619);
}

double NNfunction_NG_3::synapse0x2c31190() {
   return (neuron0x2c20340()*-0.00261123);
}

double NNfunction_NG_3::synapse0x2c311d0() {
   return (neuron0x2c20680()*0.013407);
}

double NNfunction_NG_3::synapse0x2c31210() {
   return (neuron0x2c209c0()*0.00406499);
}

double NNfunction_NG_3::synapse0x2c31250() {
   return (neuron0x2c20d00()*0.0043441);
}

double NNfunction_NG_3::synapse0x2c31290() {
   return (neuron0x2c21040()*0.000379543);
}

double NNfunction_NG_3::synapse0x2c312d0() {
   return (neuron0x2c21380()*0.0537183);
}

double NNfunction_NG_3::synapse0x2c31310() {
   return (neuron0x2c216c0()*0.00407143);
}

double NNfunction_NG_3::synapse0x2c31350() {
   return (neuron0x2c21a00()*0.0280877);
}

double NNfunction_NG_3::synapse0x2c31390() {
   return (neuron0x2c21d40()*-0.000125518);
}

double NNfunction_NG_3::synapse0x2c30e20() {
   return (neuron0x2c22080()*-0.00352718);
}

double NNfunction_NG_3::synapse0x2c30e60() {
   return (neuron0x2c225e0()*0.0157725);
}

double NNfunction_NG_3::synapse0x2c314e0() {
   return (neuron0x2c22800()*-0.000885193);
}

double NNfunction_NG_3::synapse0x2c31520() {
   return (neuron0x2c22b40()*-0.0150335);
}

double NNfunction_NG_3::synapse0x2c31560() {
   return (neuron0x2c22e80()*-0.028133);
}

double NNfunction_NG_3::synapse0x2c315a0() {
   return (neuron0x2c231c0()*-0.00350424);
}

double NNfunction_NG_3::synapse0x2c315e0() {
   return (neuron0x2c23500()*-0.0070833);
}

double NNfunction_NG_3::synapse0x2c31620() {
   return (neuron0x2c23840()*-0.448867);
}

double NNfunction_NG_3::synapse0x2c319a0() {
   return (neuron0x2c1ec80()*0.0459601);
}

double NNfunction_NG_3::synapse0x2c319e0() {
   return (neuron0x2c1efc0()*-0.197876);
}

double NNfunction_NG_3::synapse0x2c31a20() {
   return (neuron0x2c1f300()*3.08302);
}

double NNfunction_NG_3::synapse0x2c31a60() {
   return (neuron0x2c1f640()*-0.00538253);
}

double NNfunction_NG_3::synapse0x2c31aa0() {
   return (neuron0x2c1f980()*0.0566413);
}

double NNfunction_NG_3::synapse0x2c31ae0() {
   return (neuron0x2c1fcc0()*0.0241817);
}

double NNfunction_NG_3::synapse0x2c31b20() {
   return (neuron0x2c20000()*0.00152077);
}

double NNfunction_NG_3::synapse0x2c31b60() {
   return (neuron0x2c20340()*0.0363021);
}

double NNfunction_NG_3::synapse0x2c31ba0() {
   return (neuron0x2c20680()*-0.0182532);
}

double NNfunction_NG_3::synapse0x2c31be0() {
   return (neuron0x2c209c0()*-0.0338999);
}

double NNfunction_NG_3::synapse0x2c31c20() {
   return (neuron0x2c20d00()*0.00913243);
}

double NNfunction_NG_3::synapse0x2c31c60() {
   return (neuron0x2c21040()*0.341748);
}

double NNfunction_NG_3::synapse0x2c31ca0() {
   return (neuron0x2c21380()*0.0177992);
}

double NNfunction_NG_3::synapse0x2c31ce0() {
   return (neuron0x2c216c0()*0.00436236);
}

double NNfunction_NG_3::synapse0x2c31d20() {
   return (neuron0x2c21a00()*-0.107738);
}

double NNfunction_NG_3::synapse0x2c31d60() {
   return (neuron0x2c21d40()*-0.0228239);
}

double NNfunction_NG_3::synapse0x2c317f0() {
   return (neuron0x2c22080()*0.00193848);
}

double NNfunction_NG_3::synapse0x2c31830() {
   return (neuron0x2c225e0()*-0.0514174);
}

double NNfunction_NG_3::synapse0x2c31eb0() {
   return (neuron0x2c22800()*0.00157423);
}

double NNfunction_NG_3::synapse0x2c31ef0() {
   return (neuron0x2c22b40()*-0.0319042);
}

double NNfunction_NG_3::synapse0x2c31f30() {
   return (neuron0x2c22e80()*-0.00854285);
}

double NNfunction_NG_3::synapse0x2c31f70() {
   return (neuron0x2c231c0()*-0.0153152);
}

double NNfunction_NG_3::synapse0x2c31fb0() {
   return (neuron0x2c23500()*-0.0143226);
}

double NNfunction_NG_3::synapse0x2c31ff0() {
   return (neuron0x2c23840()*0.633653);
}

double NNfunction_NG_3::synapse0x2c32370() {
   return (neuron0x2c1ec80()*0.0609756);
}

double NNfunction_NG_3::synapse0x2c323b0() {
   return (neuron0x2c1efc0()*-3.15122);
}

double NNfunction_NG_3::synapse0x2c323f0() {
   return (neuron0x2c1f300()*-1.0871);
}

double NNfunction_NG_3::synapse0x2c32430() {
   return (neuron0x2c1f640()*-0.02941);
}

double NNfunction_NG_3::synapse0x2c32470() {
   return (neuron0x2c1f980()*0.0264106);
}

double NNfunction_NG_3::synapse0x2c324b0() {
   return (neuron0x2c1fcc0()*-0.00030083);
}

double NNfunction_NG_3::synapse0x2c324f0() {
   return (neuron0x2c20000()*0.00350404);
}

double NNfunction_NG_3::synapse0x2c32530() {
   return (neuron0x2c20340()*0.0110927);
}

double NNfunction_NG_3::synapse0x2c32570() {
   return (neuron0x2c20680()*0.0185423);
}

double NNfunction_NG_3::synapse0x2c2a730() {
   return (neuron0x2c209c0()*0.00193569);
}

double NNfunction_NG_3::synapse0x2c2a770() {
   return (neuron0x2c20d00()*-0.0114816);
}

double NNfunction_NG_3::synapse0x2c2a7b0() {
   return (neuron0x2c21040()*-0.137186);
}

double NNfunction_NG_3::synapse0x2c2a7f0() {
   return (neuron0x2c21380()*0.0114964);
}

double NNfunction_NG_3::synapse0x2c2a830() {
   return (neuron0x2c216c0()*0.0239281);
}

double NNfunction_NG_3::synapse0x2c2a870() {
   return (neuron0x2c21a00()*-0.00326757);
}

double NNfunction_NG_3::synapse0x2c2a8b0() {
   return (neuron0x2c21d40()*-0.0173707);
}

double NNfunction_NG_3::synapse0x2c321c0() {
   return (neuron0x2c22080()*0.0156946);
}

double NNfunction_NG_3::synapse0x2c32200() {
   return (neuron0x2c225e0()*0.00271985);
}

double NNfunction_NG_3::synapse0x2c2aa00() {
   return (neuron0x2c22800()*0.00759204);
}

double NNfunction_NG_3::synapse0x2c2aa40() {
   return (neuron0x2c22b40()*0.00198585);
}

double NNfunction_NG_3::synapse0x2c2aa80() {
   return (neuron0x2c22e80()*-0.00276915);
}

double NNfunction_NG_3::synapse0x2c2aac0() {
   return (neuron0x2c231c0()*-0.027798);
}

double NNfunction_NG_3::synapse0x2c2ab00() {
   return (neuron0x2c23500()*0.00789077);
}

double NNfunction_NG_3::synapse0x2c2ab40() {
   return (neuron0x2c23840()*-0.93038);
}

double NNfunction_NG_3::synapse0x2c2aec0() {
   return (neuron0x2c1ec80()*-0.0128119);
}

double NNfunction_NG_3::synapse0x2c2af00() {
   return (neuron0x2c1efc0()*0.0477427);
}

double NNfunction_NG_3::synapse0x2c2af40() {
   return (neuron0x2c1f300()*0.486269);
}

double NNfunction_NG_3::synapse0x2c2af80() {
   return (neuron0x2c1f640()*-0.928877);
}

double NNfunction_NG_3::synapse0x2c2afc0() {
   return (neuron0x2c1f980()*-0.0125384);
}

double NNfunction_NG_3::synapse0x2c2b000() {
   return (neuron0x2c1fcc0()*0.0137623);
}

double NNfunction_NG_3::synapse0x2c2b040() {
   return (neuron0x2c20000()*-0.00406639);
}

double NNfunction_NG_3::synapse0x2c2b080() {
   return (neuron0x2c20340()*-0.00858071);
}

double NNfunction_NG_3::synapse0x2c2b0c0() {
   return (neuron0x2c20680()*-0.0073532);
}

double NNfunction_NG_3::synapse0x2c2b100() {
   return (neuron0x2c209c0()*-0.00989622);
}

double NNfunction_NG_3::synapse0x2c2b140() {
   return (neuron0x2c20d00()*-0.012172);
}

double NNfunction_NG_3::synapse0x2c2b180() {
   return (neuron0x2c21040()*-0.0118023);
}

double NNfunction_NG_3::synapse0x2c2b1c0() {
   return (neuron0x2c21380()*-0.0270608);
}

double NNfunction_NG_3::synapse0x2c2b200() {
   return (neuron0x2c216c0()*-0.0138744);
}

double NNfunction_NG_3::synapse0x2c2b240() {
   return (neuron0x2c21a00()*0.0274749);
}

double NNfunction_NG_3::synapse0x2c2b280() {
   return (neuron0x2c21d40()*0.000679768);
}

double NNfunction_NG_3::synapse0x2c2ad10() {
   return (neuron0x2c22080()*-0.0224652);
}

double NNfunction_NG_3::synapse0x2c2ad50() {
   return (neuron0x2c225e0()*0.00180255);
}

double NNfunction_NG_3::synapse0x2c2b3d0() {
   return (neuron0x2c22800()*-0.0155363);
}

double NNfunction_NG_3::synapse0x2c2b410() {
   return (neuron0x2c22b40()*0.010972);
}

double NNfunction_NG_3::synapse0x2c2b450() {
   return (neuron0x2c22e80()*0.00722262);
}

double NNfunction_NG_3::synapse0x2c2b490() {
   return (neuron0x2c231c0()*-0.00333503);
}

double NNfunction_NG_3::synapse0x2c2b4d0() {
   return (neuron0x2c23500()*0.000114942);
}

double NNfunction_NG_3::synapse0x2c2b510() {
   return (neuron0x2c23840()*0.60893);
}

double NNfunction_NG_3::synapse0x2c2b6e0() {
   return (neuron0x2c1ec80()*0.0506292);
}

double NNfunction_NG_3::synapse0x2c34770() {
   return (neuron0x2c1efc0()*-0.00435624);
}

double NNfunction_NG_3::synapse0x2c347b0() {
   return (neuron0x2c1f300()*0.138265);
}

double NNfunction_NG_3::synapse0x2c347f0() {
   return (neuron0x2c1f640()*-0.472937);
}

double NNfunction_NG_3::synapse0x2c34830() {
   return (neuron0x2c1f980()*0.0200966);
}

double NNfunction_NG_3::synapse0x2c34870() {
   return (neuron0x2c1fcc0()*0.00377845);
}

double NNfunction_NG_3::synapse0x2c348b0() {
   return (neuron0x2c20000()*0.000224136);
}

double NNfunction_NG_3::synapse0x2c348f0() {
   return (neuron0x2c20340()*9.61016e-05);
}

double NNfunction_NG_3::synapse0x2c34930() {
   return (neuron0x2c20680()*0.00341104);
}

double NNfunction_NG_3::synapse0x2c34970() {
   return (neuron0x2c209c0()*0.0226393);
}

double NNfunction_NG_3::synapse0x2c349b0() {
   return (neuron0x2c20d00()*0.01104);
}

double NNfunction_NG_3::synapse0x2c349f0() {
   return (neuron0x2c21040()*0.76092);
}

double NNfunction_NG_3::synapse0x2c34a30() {
   return (neuron0x2c21380()*0.074329);
}

double NNfunction_NG_3::synapse0x2c34a70() {
   return (neuron0x2c216c0()*0.0269841);
}

double NNfunction_NG_3::synapse0x2c34ab0() {
   return (neuron0x2c21a00()*-0.0252637);
}

double NNfunction_NG_3::synapse0x2c34af0() {
   return (neuron0x2c21d40()*-0.0103767);
}

double NNfunction_NG_3::synapse0x2c345c0() {
   return (neuron0x2c22080()*-0.00519236);
}

double NNfunction_NG_3::synapse0x2c34600() {
   return (neuron0x2c225e0()*0.0172227);
}

double NNfunction_NG_3::synapse0x2c34c40() {
   return (neuron0x2c22800()*0.0184315);
}

double NNfunction_NG_3::synapse0x2c34c80() {
   return (neuron0x2c22b40()*0.0177146);
}

double NNfunction_NG_3::synapse0x2c34cc0() {
   return (neuron0x2c22e80()*-0.0172499);
}

double NNfunction_NG_3::synapse0x2c34d00() {
   return (neuron0x2c231c0()*0.0110295);
}

double NNfunction_NG_3::synapse0x2c34d40() {
   return (neuron0x2c23500()*-0.020805);
}

double NNfunction_NG_3::synapse0x2c34d80() {
   return (neuron0x2c23840()*-0.708338);
}

double NNfunction_NG_3::synapse0x2c35100() {
   return (neuron0x2c1ec80()*0.0205117);
}

double NNfunction_NG_3::synapse0x2c35140() {
   return (neuron0x2c1efc0()*-0.0545634);
}

double NNfunction_NG_3::synapse0x2c35180() {
   return (neuron0x2c1f300()*-0.643269);
}

double NNfunction_NG_3::synapse0x2c351c0() {
   return (neuron0x2c1f640()*-0.0846671);
}

double NNfunction_NG_3::synapse0x2c35200() {
   return (neuron0x2c1f980()*0.0286901);
}

double NNfunction_NG_3::synapse0x2c35240() {
   return (neuron0x2c1fcc0()*0.0350648);
}

double NNfunction_NG_3::synapse0x2c35280() {
   return (neuron0x2c20000()*0.0519101);
}

double NNfunction_NG_3::synapse0x2c352c0() {
   return (neuron0x2c20340()*0.0667981);
}

double NNfunction_NG_3::synapse0x2c35300() {
   return (neuron0x2c20680()*-0.0440326);
}

double NNfunction_NG_3::synapse0x2c35340() {
   return (neuron0x2c209c0()*-0.0453547);
}

double NNfunction_NG_3::synapse0x2c35380() {
   return (neuron0x2c20d00()*-0.0126071);
}

double NNfunction_NG_3::synapse0x2c353c0() {
   return (neuron0x2c21040()*0.363747);
}

double NNfunction_NG_3::synapse0x2c35400() {
   return (neuron0x2c21380()*0.0333561);
}

double NNfunction_NG_3::synapse0x2c35440() {
   return (neuron0x2c216c0()*-0.0265454);
}

double NNfunction_NG_3::synapse0x2c35480() {
   return (neuron0x2c21a00()*0.170744);
}

double NNfunction_NG_3::synapse0x2c354c0() {
   return (neuron0x2c21d40()*-0.0295617);
}

double NNfunction_NG_3::synapse0x2c34f50() {
   return (neuron0x2c22080()*-0.0497779);
}

double NNfunction_NG_3::synapse0x2c34f90() {
   return (neuron0x2c225e0()*-0.0682651);
}

double NNfunction_NG_3::synapse0x2c35610() {
   return (neuron0x2c22800()*-0.0448389);
}

double NNfunction_NG_3::synapse0x2c35650() {
   return (neuron0x2c22b40()*-0.0461429);
}

double NNfunction_NG_3::synapse0x2c35690() {
   return (neuron0x2c22e80()*-0.0298494);
}

double NNfunction_NG_3::synapse0x2c356d0() {
   return (neuron0x2c231c0()*0.0598031);
}

double NNfunction_NG_3::synapse0x2c35710() {
   return (neuron0x2c23500()*-0.000562118);
}

double NNfunction_NG_3::synapse0x2c35750() {
   return (neuron0x2c23840()*1.35682);
}

double NNfunction_NG_3::synapse0x2c35ad0() {
   return (neuron0x2c1ec80()*-0.00548552);
}

double NNfunction_NG_3::synapse0x2c35b10() {
   return (neuron0x2c1efc0()*0.057184);
}

double NNfunction_NG_3::synapse0x2c35b50() {
   return (neuron0x2c1f300()*0.0522016);
}

double NNfunction_NG_3::synapse0x2c35b90() {
   return (neuron0x2c1f640()*-1.08029);
}

double NNfunction_NG_3::synapse0x2c35bd0() {
   return (neuron0x2c1f980()*-0.0203766);
}

double NNfunction_NG_3::synapse0x2c35c10() {
   return (neuron0x2c1fcc0()*-0.009191);
}

double NNfunction_NG_3::synapse0x2c35c50() {
   return (neuron0x2c20000()*-0.00868458);
}

double NNfunction_NG_3::synapse0x2c35c90() {
   return (neuron0x2c20340()*-0.00294631);
}

double NNfunction_NG_3::synapse0x2c35cd0() {
   return (neuron0x2c20680()*-0.0188165);
}

double NNfunction_NG_3::synapse0x2c35d10() {
   return (neuron0x2c209c0()*0.0334199);
}

double NNfunction_NG_3::synapse0x2c35d50() {
   return (neuron0x2c20d00()*-0.0117171);
}

double NNfunction_NG_3::synapse0x2c35d90() {
   return (neuron0x2c21040()*-2.47607);
}

double NNfunction_NG_3::synapse0x2c35dd0() {
   return (neuron0x2c21380()*0.281249);
}

double NNfunction_NG_3::synapse0x2c35e10() {
   return (neuron0x2c216c0()*0.00659358);
}

double NNfunction_NG_3::synapse0x2c35e50() {
   return (neuron0x2c21a00()*-0.146581);
}

double NNfunction_NG_3::synapse0x2c35e90() {
   return (neuron0x2c21d40()*0.0418224);
}

double NNfunction_NG_3::synapse0x2c35920() {
   return (neuron0x2c22080()*0.00886247);
}

double NNfunction_NG_3::synapse0x2c35960() {
   return (neuron0x2c225e0()*0.0521205);
}

double NNfunction_NG_3::synapse0x2c35fe0() {
   return (neuron0x2c22800()*-0.0067291);
}

double NNfunction_NG_3::synapse0x2c36020() {
   return (neuron0x2c22b40()*0.0406128);
}

double NNfunction_NG_3::synapse0x2c36060() {
   return (neuron0x2c22e80()*-0.0229924);
}

double NNfunction_NG_3::synapse0x2c360a0() {
   return (neuron0x2c231c0()*-0.00201988);
}

double NNfunction_NG_3::synapse0x2c360e0() {
   return (neuron0x2c23500()*0.00182797);
}

double NNfunction_NG_3::synapse0x2c36120() {
   return (neuron0x2c23840()*0.239303);
}

double NNfunction_NG_3::synapse0x2c364a0() {
   return (neuron0x2c1ec80()*0.00749507);
}

double NNfunction_NG_3::synapse0x2c364e0() {
   return (neuron0x2c1efc0()*0.00620109);
}

double NNfunction_NG_3::synapse0x2c36520() {
   return (neuron0x2c1f300()*-0.0753948);
}

double NNfunction_NG_3::synapse0x2c36560() {
   return (neuron0x2c1f640()*3.44067);
}

double NNfunction_NG_3::synapse0x2c365a0() {
   return (neuron0x2c1f980()*-0.0167313);
}

double NNfunction_NG_3::synapse0x2c365e0() {
   return (neuron0x2c1fcc0()*-0.000710457);
}

double NNfunction_NG_3::synapse0x2c36620() {
   return (neuron0x2c20000()*-0.00222144);
}

double NNfunction_NG_3::synapse0x2c36660() {
   return (neuron0x2c20340()*0.0122245);
}

double NNfunction_NG_3::synapse0x2c366a0() {
   return (neuron0x2c20680()*0.00937073);
}

double NNfunction_NG_3::synapse0x2c366e0() {
   return (neuron0x2c209c0()*-0.0108607);
}

double NNfunction_NG_3::synapse0x2c36720() {
   return (neuron0x2c20d00()*-0.0170923);
}

double NNfunction_NG_3::synapse0x2c36760() {
   return (neuron0x2c21040()*-0.0833797);
}

double NNfunction_NG_3::synapse0x2c367a0() {
   return (neuron0x2c21380()*0.0045275);
}

double NNfunction_NG_3::synapse0x2c367e0() {
   return (neuron0x2c216c0()*-0.00867371);
}

double NNfunction_NG_3::synapse0x2c36820() {
   return (neuron0x2c21a00()*-0.0707408);
}

double NNfunction_NG_3::synapse0x2c36860() {
   return (neuron0x2c21d40()*-0.0137278);
}

double NNfunction_NG_3::synapse0x2c362f0() {
   return (neuron0x2c22080()*-0.018739);
}

double NNfunction_NG_3::synapse0x2c36330() {
   return (neuron0x2c225e0()*-0.00931328);
}

double NNfunction_NG_3::synapse0x2c369b0() {
   return (neuron0x2c22800()*-0.00761193);
}

double NNfunction_NG_3::synapse0x2c369f0() {
   return (neuron0x2c22b40()*0.000918265);
}

double NNfunction_NG_3::synapse0x2c36a30() {
   return (neuron0x2c22e80()*-0.00249115);
}

double NNfunction_NG_3::synapse0x2c36a70() {
   return (neuron0x2c231c0()*0.00359893);
}

double NNfunction_NG_3::synapse0x2c36ab0() {
   return (neuron0x2c23500()*0.00209278);
}

double NNfunction_NG_3::synapse0x2c36af0() {
   return (neuron0x2c23840()*0.019403);
}

double NNfunction_NG_3::synapse0x2c36e70() {
   return (neuron0x2c1ec80()*0.002356);
}

double NNfunction_NG_3::synapse0x2c36eb0() {
   return (neuron0x2c1efc0()*8.60981);
}

double NNfunction_NG_3::synapse0x2c36ef0() {
   return (neuron0x2c1f300()*0.958171);
}

double NNfunction_NG_3::synapse0x2c36f30() {
   return (neuron0x2c1f640()*-0.0104176);
}

double NNfunction_NG_3::synapse0x2c36f70() {
   return (neuron0x2c1f980()*0.0481866);
}

double NNfunction_NG_3::synapse0x2c36fb0() {
   return (neuron0x2c1fcc0()*0.00777091);
}

double NNfunction_NG_3::synapse0x2c36ff0() {
   return (neuron0x2c20000()*0.0127514);
}

double NNfunction_NG_3::synapse0x2c37030() {
   return (neuron0x2c20340()*-0.00453126);
}

double NNfunction_NG_3::synapse0x2c37070() {
   return (neuron0x2c20680()*0.0161261);
}

double NNfunction_NG_3::synapse0x2c370b0() {
   return (neuron0x2c209c0()*0.0136695);
}

double NNfunction_NG_3::synapse0x2c370f0() {
   return (neuron0x2c20d00()*-0.0108894);
}

double NNfunction_NG_3::synapse0x2c37130() {
   return (neuron0x2c21040()*0.0154577);
}

double NNfunction_NG_3::synapse0x2c37170() {
   return (neuron0x2c21380()*-0.00379665);
}

double NNfunction_NG_3::synapse0x2c371b0() {
   return (neuron0x2c216c0()*0.00450188);
}

double NNfunction_NG_3::synapse0x2c371f0() {
   return (neuron0x2c21a00()*-0.0261455);
}

double NNfunction_NG_3::synapse0x2c37230() {
   return (neuron0x2c21d40()*0.000753188);
}

double NNfunction_NG_3::synapse0x2c36cc0() {
   return (neuron0x2c22080()*-0.0136973);
}

double NNfunction_NG_3::synapse0x2c36d00() {
   return (neuron0x2c225e0()*-0.02208);
}

double NNfunction_NG_3::synapse0x2c37380() {
   return (neuron0x2c22800()*0.00471735);
}

double NNfunction_NG_3::synapse0x2c373c0() {
   return (neuron0x2c22b40()*0.0018673);
}

double NNfunction_NG_3::synapse0x2c37400() {
   return (neuron0x2c22e80()*0.0108708);
}

double NNfunction_NG_3::synapse0x2c37440() {
   return (neuron0x2c231c0()*0.00555057);
}

double NNfunction_NG_3::synapse0x2c37480() {
   return (neuron0x2c23500()*0.00473461);
}

double NNfunction_NG_3::synapse0x2c374c0() {
   return (neuron0x2c23840()*0.406624);
}

double NNfunction_NG_3::synapse0x2c37840() {
   return (neuron0x2c1ec80()*-0.0519806);
}

double NNfunction_NG_3::synapse0x2c37880() {
   return (neuron0x2c1efc0()*-0.063624);
}

double NNfunction_NG_3::synapse0x2c378c0() {
   return (neuron0x2c1f300()*0.253374);
}

double NNfunction_NG_3::synapse0x2c37900() {
   return (neuron0x2c1f640()*-4.22286);
}

double NNfunction_NG_3::synapse0x2c37940() {
   return (neuron0x2c1f980()*0.0398216);
}

double NNfunction_NG_3::synapse0x2c37980() {
   return (neuron0x2c1fcc0()*0.000298051);
}

double NNfunction_NG_3::synapse0x2c379c0() {
   return (neuron0x2c20000()*-0.0345461);
}

double NNfunction_NG_3::synapse0x2c37a00() {
   return (neuron0x2c20340()*-0.0359008);
}

double NNfunction_NG_3::synapse0x2c37a40() {
   return (neuron0x2c20680()*0.0100922);
}

double NNfunction_NG_3::synapse0x2c37a80() {
   return (neuron0x2c209c0()*0.0210935);
}

double NNfunction_NG_3::synapse0x2c37ac0() {
   return (neuron0x2c20d00()*0.00619494);
}

double NNfunction_NG_3::synapse0x2c37b00() {
   return (neuron0x2c21040()*1.69229);
}

double NNfunction_NG_3::synapse0x2c37b40() {
   return (neuron0x2c21380()*-0.0371296);
}

double NNfunction_NG_3::synapse0x2c37b80() {
   return (neuron0x2c216c0()*0.00555165);
}

double NNfunction_NG_3::synapse0x2c37bc0() {
   return (neuron0x2c21a00()*-0.207495);
}

double NNfunction_NG_3::synapse0x2c37c00() {
   return (neuron0x2c21d40()*-0.0218132);
}

double NNfunction_NG_3::synapse0x2c37690() {
   return (neuron0x2c22080()*0.0264948);
}

double NNfunction_NG_3::synapse0x2c376d0() {
   return (neuron0x2c225e0()*-0.156157);
}

double NNfunction_NG_3::synapse0x2c37d50() {
   return (neuron0x2c22800()*-0.0427066);
}

double NNfunction_NG_3::synapse0x2c37d90() {
   return (neuron0x2c22b40()*-0.0116165);
}

double NNfunction_NG_3::synapse0x2c37dd0() {
   return (neuron0x2c22e80()*-0.00744517);
}

double NNfunction_NG_3::synapse0x2c37e10() {
   return (neuron0x2c231c0()*0.00093784);
}

double NNfunction_NG_3::synapse0x2c37e50() {
   return (neuron0x2c23500()*-0.027642);
}

double NNfunction_NG_3::synapse0x2c37e90() {
   return (neuron0x2c23840()*-0.144299);
}

double NNfunction_NG_3::synapse0x2c38210() {
   return (neuron0x2c1ec80()*0.0191853);
}

double NNfunction_NG_3::synapse0x2c38250() {
   return (neuron0x2c1efc0()*-0.017294);
}

double NNfunction_NG_3::synapse0x2c38290() {
   return (neuron0x2c1f300()*-0.944015);
}

double NNfunction_NG_3::synapse0x2c382d0() {
   return (neuron0x2c1f640()*1.86212);
}

double NNfunction_NG_3::synapse0x2c38310() {
   return (neuron0x2c1f980()*0.0284754);
}

double NNfunction_NG_3::synapse0x2c38350() {
   return (neuron0x2c1fcc0()*0.00106259);
}

double NNfunction_NG_3::synapse0x2c38390() {
   return (neuron0x2c20000()*0.0478889);
}

double NNfunction_NG_3::synapse0x2c383d0() {
   return (neuron0x2c20340()*0.00670957);
}

double NNfunction_NG_3::synapse0x2c38410() {
   return (neuron0x2c20680()*-0.0499034);
}

double NNfunction_NG_3::synapse0x2c38450() {
   return (neuron0x2c209c0()*0.0257459);
}

double NNfunction_NG_3::synapse0x2c38490() {
   return (neuron0x2c20d00()*-0.0632469);
}

double NNfunction_NG_3::synapse0x2c384d0() {
   return (neuron0x2c21040()*0.550079);
}

double NNfunction_NG_3::synapse0x2c38510() {
   return (neuron0x2c21380()*-0.429649);
}

double NNfunction_NG_3::synapse0x2c38550() {
   return (neuron0x2c216c0()*0.012198);
}

double NNfunction_NG_3::synapse0x2c38590() {
   return (neuron0x2c21a00()*0.0386617);
}

double NNfunction_NG_3::synapse0x2c385d0() {
   return (neuron0x2c21d40()*-0.0378261);
}

double NNfunction_NG_3::synapse0x2c38060() {
   return (neuron0x2c22080()*0.0100213);
}

double NNfunction_NG_3::synapse0x2c380a0() {
   return (neuron0x2c225e0()*-0.0405939);
}

double NNfunction_NG_3::synapse0x2c38720() {
   return (neuron0x2c22800()*-0.0407229);
}

double NNfunction_NG_3::synapse0x2c38760() {
   return (neuron0x2c22b40()*-0.0189409);
}

double NNfunction_NG_3::synapse0x2c387a0() {
   return (neuron0x2c22e80()*0.0207342);
}

double NNfunction_NG_3::synapse0x2c387e0() {
   return (neuron0x2c231c0()*0.00262865);
}

double NNfunction_NG_3::synapse0x2c38820() {
   return (neuron0x2c23500()*-0.00458428);
}

double NNfunction_NG_3::synapse0x2c38860() {
   return (neuron0x2c23840()*0.209113);
}

double NNfunction_NG_3::synapse0x2c38be0() {
   return (neuron0x2c1ec80()*-0.0867909);
}

double NNfunction_NG_3::synapse0x2c38c20() {
   return (neuron0x2c1efc0()*-1.91673);
}

double NNfunction_NG_3::synapse0x2c38c60() {
   return (neuron0x2c1f300()*-0.718366);
}

double NNfunction_NG_3::synapse0x2c38ca0() {
   return (neuron0x2c1f640()*-0.0107686);
}

double NNfunction_NG_3::synapse0x2c38ce0() {
   return (neuron0x2c1f980()*-0.0292043);
}

double NNfunction_NG_3::synapse0x2c38d20() {
   return (neuron0x2c1fcc0()*0.0367676);
}

double NNfunction_NG_3::synapse0x2c38d60() {
   return (neuron0x2c20000()*-0.00621317);
}

double NNfunction_NG_3::synapse0x2c38da0() {
   return (neuron0x2c20340()*0.0149032);
}

double NNfunction_NG_3::synapse0x2c38de0() {
   return (neuron0x2c20680()*0.0670211);
}

double NNfunction_NG_3::synapse0x2c38e20() {
   return (neuron0x2c209c0()*-0.00130771);
}

double NNfunction_NG_3::synapse0x2c38e60() {
   return (neuron0x2c20d00()*-0.0163447);
}

double NNfunction_NG_3::synapse0x2c38ea0() {
   return (neuron0x2c21040()*-0.352228);
}

double NNfunction_NG_3::synapse0x2c38ee0() {
   return (neuron0x2c21380()*0.0325874);
}

double NNfunction_NG_3::synapse0x2c38f20() {
   return (neuron0x2c216c0()*-0.0107924);
}

double NNfunction_NG_3::synapse0x2c38f60() {
   return (neuron0x2c21a00()*0.517899);
}

double NNfunction_NG_3::synapse0x2c38fa0() {
   return (neuron0x2c21d40()*0.00815296);
}

double NNfunction_NG_3::synapse0x2c38a30() {
   return (neuron0x2c22080()*-0.0400752);
}

double NNfunction_NG_3::synapse0x2c38a70() {
   return (neuron0x2c225e0()*0.0368853);
}

double NNfunction_NG_3::synapse0x2c390f0() {
   return (neuron0x2c22800()*0.0403815);
}

double NNfunction_NG_3::synapse0x2c39130() {
   return (neuron0x2c22b40()*0.0204356);
}

double NNfunction_NG_3::synapse0x2c39170() {
   return (neuron0x2c22e80()*0.041684);
}

double NNfunction_NG_3::synapse0x2c391b0() {
   return (neuron0x2c231c0()*0.0314596);
}

double NNfunction_NG_3::synapse0x2c391f0() {
   return (neuron0x2c23500()*-0.00661923);
}

double NNfunction_NG_3::synapse0x2c39230() {
   return (neuron0x2c23840()*0.649579);
}

double NNfunction_NG_3::synapse0x2c395b0() {
   return (neuron0x2c1ec80()*-0.0209808);
}

double NNfunction_NG_3::synapse0x2c2db80() {
   return (neuron0x2c1efc0()*-10.477);
}

double NNfunction_NG_3::synapse0x2c2dbc0() {
   return (neuron0x2c1f300()*0.127011);
}

double NNfunction_NG_3::synapse0x2c2dc00() {
   return (neuron0x2c1f640()*0.0180195);
}

double NNfunction_NG_3::synapse0x2c2de50() {
   return (neuron0x2c1f980()*-0.0168071);
}

double NNfunction_NG_3::synapse0x2c2de90() {
   return (neuron0x2c1fcc0()*-0.00616201);
}

double NNfunction_NG_3::synapse0x2c2ded0() {
   return (neuron0x2c20000()*0.0293171);
}

double NNfunction_NG_3::synapse0x2c2e120() {
   return (neuron0x2c20340()*0.0221303);
}

double NNfunction_NG_3::synapse0x2c2e160() {
   return (neuron0x2c20680()*-0.0166476);
}

double NNfunction_NG_3::synapse0x2c2e3b0() {
   return (neuron0x2c209c0()*0.0230269);
}

double NNfunction_NG_3::synapse0x2c2e3f0() {
   return (neuron0x2c20d00()*-0.000295537);
}

double NNfunction_NG_3::synapse0x2c2e430() {
   return (neuron0x2c21040()*0.177798);
}

double NNfunction_NG_3::synapse0x2c2e680() {
   return (neuron0x2c21380()*-0.00251548);
}

double NNfunction_NG_3::synapse0x2c2e6c0() {
   return (neuron0x2c216c0()*0.00884006);
}

double NNfunction_NG_3::synapse0x2c2e910() {
   return (neuron0x2c21a00()*-0.110317);
}

double NNfunction_NG_3::synapse0x2c2e950() {
   return (neuron0x2c21d40()*0.00270065);
}

double NNfunction_NG_3::synapse0x2c39400() {
   return (neuron0x2c22080()*0.0168203);
}

double NNfunction_NG_3::synapse0x2c39440() {
   return (neuron0x2c225e0()*-0.0320295);
}

double NNfunction_NG_3::synapse0x2c2eaa0() {
   return (neuron0x2c22800()*-0.0159721);
}

double NNfunction_NG_3::synapse0x2c2efb0() {
   return (neuron0x2c22b40()*-0.00321203);
}

double NNfunction_NG_3::synapse0x2c2eff0() {
   return (neuron0x2c22e80()*-0.00129776);
}

double NNfunction_NG_3::synapse0x2c2f030() {
   return (neuron0x2c231c0()*0.00959578);
}

double NNfunction_NG_3::synapse0x2c2f280() {
   return (neuron0x2c23500()*0.0192539);
}

double NNfunction_NG_3::synapse0x2c2f2c0() {
   return (neuron0x2c23840()*-2.97864);
}

double NNfunction_NG_3::synapse0x2c2eb70() {
   return (neuron0x2c1ec80()*0.0943886);
}

double NNfunction_NG_3::synapse0x2c2ebb0() {
   return (neuron0x2c1efc0()*-0.643717);
}

double NNfunction_NG_3::synapse0x2c2ebf0() {
   return (neuron0x2c1f300()*0.113312);
}

double NNfunction_NG_3::synapse0x2c2ec30() {
   return (neuron0x2c1f640()*0.45898);
}

double NNfunction_NG_3::synapse0x2c2f5b0() {
   return (neuron0x2c1f980()*-0.0949362);
}

double NNfunction_NG_3::synapse0x2c3b900() {
   return (neuron0x2c1fcc0()*0.0188656);
}

double NNfunction_NG_3::synapse0x2c3b940() {
   return (neuron0x2c20000()*-0.0450958);
}

double NNfunction_NG_3::synapse0x2c3b980() {
   return (neuron0x2c20340()*-0.0437075);
}

double NNfunction_NG_3::synapse0x2c3b9c0() {
   return (neuron0x2c20680()*0.00138377);
}

double NNfunction_NG_3::synapse0x2c3ba00() {
   return (neuron0x2c209c0()*-0.0448632);
}

double NNfunction_NG_3::synapse0x2c3ba40() {
   return (neuron0x2c20d00()*0.0455301);
}

double NNfunction_NG_3::synapse0x2c3ba80() {
   return (neuron0x2c21040()*1.6517);
}

double NNfunction_NG_3::synapse0x2c3bac0() {
   return (neuron0x2c21380()*-0.0653654);
}

double NNfunction_NG_3::synapse0x2c3bb00() {
   return (neuron0x2c216c0()*0.106958);
}

double NNfunction_NG_3::synapse0x2c3bb40() {
   return (neuron0x2c21a00()*-0.868541);
}

double NNfunction_NG_3::synapse0x2c3bb80() {
   return (neuron0x2c21d40()*-0.0500776);
}

double NNfunction_NG_3::synapse0x2c2f490() {
   return (neuron0x2c22080()*0.00638607);
}

double NNfunction_NG_3::synapse0x2c2f4d0() {
   return (neuron0x2c225e0()*-0.398208);
}

double NNfunction_NG_3::synapse0x2c3bcd0() {
   return (neuron0x2c22800()*-0.029846);
}

double NNfunction_NG_3::synapse0x2c3bd10() {
   return (neuron0x2c22b40()*0.00107943);
}

double NNfunction_NG_3::synapse0x2c3bd50() {
   return (neuron0x2c22e80()*-0.0765048);
}

double NNfunction_NG_3::synapse0x2c3bd90() {
   return (neuron0x2c231c0()*0.02882);
}

double NNfunction_NG_3::synapse0x2c3bdd0() {
   return (neuron0x2c23500()*-0.00305325);
}

double NNfunction_NG_3::synapse0x2c3be10() {
   return (neuron0x2c23840()*0.113499);
}

double NNfunction_NG_3::synapse0x2c3c190() {
   return (neuron0x2c1ec80()*-0.0307612);
}

double NNfunction_NG_3::synapse0x2c3c1d0() {
   return (neuron0x2c1efc0()*-0.147348);
}

double NNfunction_NG_3::synapse0x2c3c210() {
   return (neuron0x2c1f300()*-0.112999);
}

double NNfunction_NG_3::synapse0x2c3c250() {
   return (neuron0x2c1f640()*2.32254);
}

double NNfunction_NG_3::synapse0x2c3c290() {
   return (neuron0x2c1f980()*0.00778887);
}

double NNfunction_NG_3::synapse0x2c3c2d0() {
   return (neuron0x2c1fcc0()*-0.0134111);
}

double NNfunction_NG_3::synapse0x2c3c310() {
   return (neuron0x2c20000()*-0.0359935);
}

double NNfunction_NG_3::synapse0x2c3c350() {
   return (neuron0x2c20340()*-0.0217414);
}

double NNfunction_NG_3::synapse0x2c3c390() {
   return (neuron0x2c20680()*0.0320391);
}

double NNfunction_NG_3::synapse0x2c3c3d0() {
   return (neuron0x2c209c0()*0.00179088);
}

double NNfunction_NG_3::synapse0x2c3c410() {
   return (neuron0x2c20d00()*0.00540755);
}

double NNfunction_NG_3::synapse0x2c3c450() {
   return (neuron0x2c21040()*-0.196064);
}

double NNfunction_NG_3::synapse0x2c3c490() {
   return (neuron0x2c21380()*0.106405);
}

double NNfunction_NG_3::synapse0x2c3c4d0() {
   return (neuron0x2c216c0()*-0.0120187);
}

double NNfunction_NG_3::synapse0x2c3c510() {
   return (neuron0x2c21a00()*-0.476673);
}

double NNfunction_NG_3::synapse0x2c3c550() {
   return (neuron0x2c21d40()*0.0119818);
}

double NNfunction_NG_3::synapse0x2c3bfe0() {
   return (neuron0x2c22080()*0.00602477);
}

double NNfunction_NG_3::synapse0x2c3c020() {
   return (neuron0x2c225e0()*0.000468407);
}

double NNfunction_NG_3::synapse0x2c3c6a0() {
   return (neuron0x2c22800()*0.0589517);
}

double NNfunction_NG_3::synapse0x2c3c6e0() {
   return (neuron0x2c22b40()*0.0173359);
}

double NNfunction_NG_3::synapse0x2c3c720() {
   return (neuron0x2c22e80()*-0.0327743);
}

double NNfunction_NG_3::synapse0x2c3c760() {
   return (neuron0x2c231c0()*-0.00303953);
}

double NNfunction_NG_3::synapse0x2c3c7a0() {
   return (neuron0x2c23500()*-4.89132e-05);
}

double NNfunction_NG_3::synapse0x2c3c7e0() {
   return (neuron0x2c23840()*0.00938256);
}

double NNfunction_NG_3::synapse0x2c3cb60() {
   return (neuron0x2c1ec80()*0.0236417);
}

double NNfunction_NG_3::synapse0x2c3cba0() {
   return (neuron0x2c1efc0()*0.0118439);
}

double NNfunction_NG_3::synapse0x2c3cbe0() {
   return (neuron0x2c1f300()*-0.160184);
}

double NNfunction_NG_3::synapse0x2c3cc20() {
   return (neuron0x2c1f640()*-1.02127);
}

double NNfunction_NG_3::synapse0x2c3cc60() {
   return (neuron0x2c1f980()*0.0323785);
}

double NNfunction_NG_3::synapse0x2c3cca0() {
   return (neuron0x2c1fcc0()*0.0234522);
}

double NNfunction_NG_3::synapse0x2c3cce0() {
   return (neuron0x2c20000()*-0.000722712);
}

double NNfunction_NG_3::synapse0x2c3cd20() {
   return (neuron0x2c20340()*-0.0189592);
}

double NNfunction_NG_3::synapse0x2c3cd60() {
   return (neuron0x2c20680()*-0.0435156);
}

double NNfunction_NG_3::synapse0x2c3cda0() {
   return (neuron0x2c209c0()*0.00975513);
}

double NNfunction_NG_3::synapse0x2c3cde0() {
   return (neuron0x2c20d00()*-0.032857);
}

double NNfunction_NG_3::synapse0x2c3ce20() {
   return (neuron0x2c21040()*0.590749);
}

double NNfunction_NG_3::synapse0x2c3ce60() {
   return (neuron0x2c21380()*-0.650896);
}

double NNfunction_NG_3::synapse0x2c3cea0() {
   return (neuron0x2c216c0()*-0.000342899);
}

double NNfunction_NG_3::synapse0x2c3cee0() {
   return (neuron0x2c21a00()*0.0930464);
}

double NNfunction_NG_3::synapse0x2c3cf20() {
   return (neuron0x2c21d40()*0.0458893);
}

double NNfunction_NG_3::synapse0x2c3c9b0() {
   return (neuron0x2c22080()*-0.0120052);
}

double NNfunction_NG_3::synapse0x2c3c9f0() {
   return (neuron0x2c225e0()*0.0877063);
}

double NNfunction_NG_3::synapse0x2c3d070() {
   return (neuron0x2c22800()*-0.0130526);
}

double NNfunction_NG_3::synapse0x2c3d0b0() {
   return (neuron0x2c22b40()*-0.0178679);
}

double NNfunction_NG_3::synapse0x2c3d0f0() {
   return (neuron0x2c22e80()*-0.00175171);
}

double NNfunction_NG_3::synapse0x2c3d130() {
   return (neuron0x2c231c0()*-0.0174981);
}

double NNfunction_NG_3::synapse0x2c3d170() {
   return (neuron0x2c23500()*-0.0109191);
}

double NNfunction_NG_3::synapse0x2c3d1b0() {
   return (neuron0x2c23840()*-0.120317);
}

double NNfunction_NG_3::synapse0x2c3d530() {
   return (neuron0x2c1ec80()*0.023664);
}

double NNfunction_NG_3::synapse0x2c3d570() {
   return (neuron0x2c1efc0()*-0.0388133);
}

double NNfunction_NG_3::synapse0x2c3d5b0() {
   return (neuron0x2c1f300()*-0.77312);
}

double NNfunction_NG_3::synapse0x2c3d5f0() {
   return (neuron0x2c1f640()*-0.408764);
}

double NNfunction_NG_3::synapse0x2c3d630() {
   return (neuron0x2c1f980()*0.0315833);
}

double NNfunction_NG_3::synapse0x2c3d670() {
   return (neuron0x2c1fcc0()*-0.00978712);
}

double NNfunction_NG_3::synapse0x2c3d6b0() {
   return (neuron0x2c20000()*0.0078312);
}

double NNfunction_NG_3::synapse0x2c3d6f0() {
   return (neuron0x2c20340()*0.0156213);
}

double NNfunction_NG_3::synapse0x2c3d730() {
   return (neuron0x2c20680()*-0.00955549);
}

double NNfunction_NG_3::synapse0x2c3d770() {
   return (neuron0x2c209c0()*-0.00718448);
}

double NNfunction_NG_3::synapse0x2c3d7b0() {
   return (neuron0x2c20d00()*-0.0456688);
}

double NNfunction_NG_3::synapse0x2c3d7f0() {
   return (neuron0x2c21040()*0.942226);
}

double NNfunction_NG_3::synapse0x2c3d830() {
   return (neuron0x2c21380()*-0.912717);
}

double NNfunction_NG_3::synapse0x2c3d870() {
   return (neuron0x2c216c0()*-0.00276106);
}

double NNfunction_NG_3::synapse0x2c3d8b0() {
   return (neuron0x2c21a00()*0.0495481);
}

double NNfunction_NG_3::synapse0x2c3d8f0() {
   return (neuron0x2c21d40()*0.0555753);
}

double NNfunction_NG_3::synapse0x2c3d380() {
   return (neuron0x2c22080()*-0.00118575);
}

double NNfunction_NG_3::synapse0x2c3d3c0() {
   return (neuron0x2c225e0()*0.0712643);
}

double NNfunction_NG_3::synapse0x2c3da40() {
   return (neuron0x2c22800()*-0.00675322);
}

double NNfunction_NG_3::synapse0x2c3da80() {
   return (neuron0x2c22b40()*-0.028943);
}

double NNfunction_NG_3::synapse0x2c3dac0() {
   return (neuron0x2c22e80()*-0.0288879);
}

double NNfunction_NG_3::synapse0x2c3db00() {
   return (neuron0x2c231c0()*0.0101439);
}

double NNfunction_NG_3::synapse0x2c3db40() {
   return (neuron0x2c23500()*0.0181476);
}

double NNfunction_NG_3::synapse0x2c3db80() {
   return (neuron0x2c23840()*-0.121342);
}

double NNfunction_NG_3::synapse0x2c3df00() {
   return (neuron0x2c1ec80()*-0.0214417);
}

double NNfunction_NG_3::synapse0x2c3df40() {
   return (neuron0x2c1efc0()*-5.57095);
}

double NNfunction_NG_3::synapse0x2c3df80() {
   return (neuron0x2c1f300()*2.14164);
}

double NNfunction_NG_3::synapse0x2c3dfc0() {
   return (neuron0x2c1f640()*0.0317118);
}

double NNfunction_NG_3::synapse0x2c3e000() {
   return (neuron0x2c1f980()*-0.0294051);
}

double NNfunction_NG_3::synapse0x2c3e040() {
   return (neuron0x2c1fcc0()*-0.0027523);
}

double NNfunction_NG_3::synapse0x2c3e080() {
   return (neuron0x2c20000()*-0.00221453);
}

double NNfunction_NG_3::synapse0x2c3e0c0() {
   return (neuron0x2c20340()*0.000743832);
}

double NNfunction_NG_3::synapse0x2c3e100() {
   return (neuron0x2c20680()*0.0136803);
}

double NNfunction_NG_3::synapse0x2c3e140() {
   return (neuron0x2c209c0()*-0.0143739);
}

double NNfunction_NG_3::synapse0x2c3e180() {
   return (neuron0x2c20d00()*0.0132163);
}

double NNfunction_NG_3::synapse0x2c3e1c0() {
   return (neuron0x2c21040()*0.325186);
}

double NNfunction_NG_3::synapse0x2c3e200() {
   return (neuron0x2c21380()*-0.00421222);
}

double NNfunction_NG_3::synapse0x2c3e240() {
   return (neuron0x2c216c0()*0.0303032);
}

double NNfunction_NG_3::synapse0x2c3e280() {
   return (neuron0x2c21a00()*-0.0601299);
}

double NNfunction_NG_3::synapse0x2c3e2c0() {
   return (neuron0x2c21d40()*-0.0118923);
}

double NNfunction_NG_3::synapse0x2c3dd50() {
   return (neuron0x2c22080()*0.0336772);
}

double NNfunction_NG_3::synapse0x2c3dd90() {
   return (neuron0x2c225e0()*-0.0290219);
}

double NNfunction_NG_3::synapse0x2c3e410() {
   return (neuron0x2c22800()*-0.0219064);
}

double NNfunction_NG_3::synapse0x2c3e450() {
   return (neuron0x2c22b40()*-0.0271377);
}

double NNfunction_NG_3::synapse0x2c3e490() {
   return (neuron0x2c22e80()*0.00286814);
}

double NNfunction_NG_3::synapse0x2c3e4d0() {
   return (neuron0x2c231c0()*-0.0125107);
}

double NNfunction_NG_3::synapse0x2c3e510() {
   return (neuron0x2c23500()*0.00950982);
}

double NNfunction_NG_3::synapse0x2c3e550() {
   return (neuron0x2c23840()*-0.0744759);
}

double NNfunction_NG_3::synapse0x2c3e8d0() {
   return (neuron0x2c1ec80()*0.00147439);
}

double NNfunction_NG_3::synapse0x2c3e910() {
   return (neuron0x2c1efc0()*-0.00325575);
}

double NNfunction_NG_3::synapse0x2c3e950() {
   return (neuron0x2c1f300()*0.0447883);
}

double NNfunction_NG_3::synapse0x2c3e990() {
   return (neuron0x2c1f640()*0.0604577);
}

double NNfunction_NG_3::synapse0x2c3e9d0() {
   return (neuron0x2c1f980()*0.0119714);
}

double NNfunction_NG_3::synapse0x2c3ea10() {
   return (neuron0x2c1fcc0()*-0.00587985);
}

double NNfunction_NG_3::synapse0x2c3ea50() {
   return (neuron0x2c20000()*-0.0121058);
}

double NNfunction_NG_3::synapse0x2c3ea90() {
   return (neuron0x2c20340()*0.0107254);
}

double NNfunction_NG_3::synapse0x2c3ead0() {
   return (neuron0x2c20680()*-0.0169255);
}

double NNfunction_NG_3::synapse0x2c3eb10() {
   return (neuron0x2c209c0()*-0.027722);
}

double NNfunction_NG_3::synapse0x2c3eb50() {
   return (neuron0x2c20d00()*0.0354201);
}

double NNfunction_NG_3::synapse0x2c3eb90() {
   return (neuron0x2c21040()*0.0746516);
}

double NNfunction_NG_3::synapse0x2c3ebd0() {
   return (neuron0x2c21380()*0.0221453);
}

double NNfunction_NG_3::synapse0x2c3ec10() {
   return (neuron0x2c216c0()*0.0036706);
}

double NNfunction_NG_3::synapse0x2c3ec50() {
   return (neuron0x2c21a00()*-0.00826608);
}

double NNfunction_NG_3::synapse0x2c3ec90() {
   return (neuron0x2c21d40()*-0.00683144);
}

double NNfunction_NG_3::synapse0x2c3e720() {
   return (neuron0x2c22080()*0.00193256);
}

double NNfunction_NG_3::synapse0x2c3e760() {
   return (neuron0x2c225e0()*-0.0188929);
}

double NNfunction_NG_3::synapse0x2c3ede0() {
   return (neuron0x2c22800()*0.00196955);
}

double NNfunction_NG_3::synapse0x2c3ee20() {
   return (neuron0x2c22b40()*0.000519066);
}

double NNfunction_NG_3::synapse0x2c3ee60() {
   return (neuron0x2c22e80()*0.0153451);
}

double NNfunction_NG_3::synapse0x2c3eea0() {
   return (neuron0x2c231c0()*0.0181298);
}

double NNfunction_NG_3::synapse0x2c3eee0() {
   return (neuron0x2c23500()*-0.00779218);
}

double NNfunction_NG_3::synapse0x2c3ef20() {
   return (neuron0x2c23840()*3.71638);
}

double NNfunction_NG_3::synapse0x2c3f2a0() {
   return (neuron0x2c1ec80()*0.0499725);
}

double NNfunction_NG_3::synapse0x2c3f2e0() {
   return (neuron0x2c1efc0()*0.722147);
}

double NNfunction_NG_3::synapse0x2c3f320() {
   return (neuron0x2c1f300()*1.19956);
}

double NNfunction_NG_3::synapse0x2c3f360() {
   return (neuron0x2c1f640()*-0.0545539);
}

double NNfunction_NG_3::synapse0x2c3f3a0() {
   return (neuron0x2c1f980()*0.163352);
}

double NNfunction_NG_3::synapse0x2c3f3e0() {
   return (neuron0x2c1fcc0()*-0.0214175);
}

double NNfunction_NG_3::synapse0x2c3f420() {
   return (neuron0x2c20000()*0.0149486);
}

double NNfunction_NG_3::synapse0x2c3f460() {
   return (neuron0x2c20340()*0.00520947);
}

double NNfunction_NG_3::synapse0x2c3f4a0() {
   return (neuron0x2c20680()*-0.0302775);
}

double NNfunction_NG_3::synapse0x2c3f4e0() {
   return (neuron0x2c209c0()*0.0681005);
}

double NNfunction_NG_3::synapse0x2c3f520() {
   return (neuron0x2c20d00()*-0.0585683);
}

double NNfunction_NG_3::synapse0x2c3f560() {
   return (neuron0x2c21040()*0.297602);
}

double NNfunction_NG_3::synapse0x2c3f5a0() {
   return (neuron0x2c21380()*0.122655);
}

double NNfunction_NG_3::synapse0x2c3f5e0() {
   return (neuron0x2c216c0()*0.102139);
}

double NNfunction_NG_3::synapse0x2c3f620() {
   return (neuron0x2c21a00()*0.111957);
}

double NNfunction_NG_3::synapse0x2c3f660() {
   return (neuron0x2c21d40()*-0.11971);
}

double NNfunction_NG_3::synapse0x2c3f0f0() {
   return (neuron0x2c22080()*0.0315953);
}

double NNfunction_NG_3::synapse0x2c3f130() {
   return (neuron0x2c225e0()*0.177875);
}

double NNfunction_NG_3::synapse0x2c3f7b0() {
   return (neuron0x2c22800()*-0.0193124);
}

double NNfunction_NG_3::synapse0x2c3f7f0() {
   return (neuron0x2c22b40()*-0.0220838);
}

double NNfunction_NG_3::synapse0x2c3f830() {
   return (neuron0x2c22e80()*-0.106992);
}

double NNfunction_NG_3::synapse0x2c3f870() {
   return (neuron0x2c231c0()*-0.00969212);
}

double NNfunction_NG_3::synapse0x2c3f8b0() {
   return (neuron0x2c23500()*0.0425872);
}

double NNfunction_NG_3::synapse0x2c3f8f0() {
   return (neuron0x2c23840()*-0.456836);
}

double NNfunction_NG_3::synapse0x2c3fc70() {
   return (neuron0x2c1ec80()*-0.0235081);
}

double NNfunction_NG_3::synapse0x2c3fcb0() {
   return (neuron0x2c1efc0()*-0.0161026);
}

double NNfunction_NG_3::synapse0x2c3fcf0() {
   return (neuron0x2c1f300()*1.26753);
}

double NNfunction_NG_3::synapse0x2c3fd30() {
   return (neuron0x2c1f640()*-0.0093142);
}

double NNfunction_NG_3::synapse0x2c3fd70() {
   return (neuron0x2c1f980()*0.0362907);
}

double NNfunction_NG_3::synapse0x2c3fdb0() {
   return (neuron0x2c1fcc0()*0.0109411);
}

double NNfunction_NG_3::synapse0x2c3fdf0() {
   return (neuron0x2c20000()*0.0272345);
}

double NNfunction_NG_3::synapse0x2c3fe30() {
   return (neuron0x2c20340()*0.00829875);
}

double NNfunction_NG_3::synapse0x2c3fe70() {
   return (neuron0x2c20680()*-0.0262976);
}

double NNfunction_NG_3::synapse0x2c3feb0() {
   return (neuron0x2c209c0()*0.0378797);
}

double NNfunction_NG_3::synapse0x2c3fef0() {
   return (neuron0x2c20d00()*0.0185744);
}

double NNfunction_NG_3::synapse0x2c3ff30() {
   return (neuron0x2c21040()*0.385866);
}

double NNfunction_NG_3::synapse0x2c3ff70() {
   return (neuron0x2c21380()*-0.0127452);
}

double NNfunction_NG_3::synapse0x2c3ffb0() {
   return (neuron0x2c216c0()*-0.0176769);
}

double NNfunction_NG_3::synapse0x2c3fff0() {
   return (neuron0x2c21a00()*-0.179187);
}

double NNfunction_NG_3::synapse0x2c40030() {
   return (neuron0x2c21d40()*0.0072825);
}

double NNfunction_NG_3::synapse0x2c3fac0() {
   return (neuron0x2c22080()*0.011286);
}

double NNfunction_NG_3::synapse0x2c3fb00() {
   return (neuron0x2c225e0()*0.00256724);
}

double NNfunction_NG_3::synapse0x2c40180() {
   return (neuron0x2c22800()*0.00786736);
}

double NNfunction_NG_3::synapse0x2c401c0() {
   return (neuron0x2c22b40()*-0.00836954);
}

double NNfunction_NG_3::synapse0x2c40200() {
   return (neuron0x2c22e80()*0.00377476);
}

double NNfunction_NG_3::synapse0x2c40240() {
   return (neuron0x2c231c0()*0.0108154);
}

double NNfunction_NG_3::synapse0x2c40280() {
   return (neuron0x2c23500()*0.00668789);
}

double NNfunction_NG_3::synapse0x2c402c0() {
   return (neuron0x2c23840()*1.20666);
}

double NNfunction_NG_3::synapse0x2c28d70() {
   return (neuron0x2c1ec80()*-0.0018348);
}

double NNfunction_NG_3::synapse0x2c28db0() {
   return (neuron0x2c1efc0()*-0.429392);
}

double NNfunction_NG_3::synapse0x2c28df0() {
   return (neuron0x2c1f300()*0.157486);
}

double NNfunction_NG_3::synapse0x2c28e30() {
   return (neuron0x2c1f640()*0.168208);
}

double NNfunction_NG_3::synapse0x2c28e70() {
   return (neuron0x2c1f980()*0.381701);
}

double NNfunction_NG_3::synapse0x2c28eb0() {
   return (neuron0x2c1fcc0()*-0.6005);
}

double NNfunction_NG_3::synapse0x2c28ef0() {
   return (neuron0x2c20000()*-0.17455);
}

double NNfunction_NG_3::synapse0x2c28f30() {
   return (neuron0x2c20340()*0.0773346);
}

double NNfunction_NG_3::synapse0x2c40a50() {
   return (neuron0x2c20680()*0.413624);
}

double NNfunction_NG_3::synapse0x2c40a90() {
   return (neuron0x2c209c0()*0.108294);
}

double NNfunction_NG_3::synapse0x2c40ad0() {
   return (neuron0x2c20d00()*0.0643571);
}

double NNfunction_NG_3::synapse0x2c40b10() {
   return (neuron0x2c21040()*0.00562183);
}

double NNfunction_NG_3::synapse0x2c40b50() {
   return (neuron0x2c21380()*0.135416);
}

double NNfunction_NG_3::synapse0x2c40b90() {
   return (neuron0x2c216c0()*-0.161415);
}

double NNfunction_NG_3::synapse0x2c40bd0() {
   return (neuron0x2c21a00()*0.406547);
}

double NNfunction_NG_3::synapse0x2c40c10() {
   return (neuron0x2c21d40()*-0.0888119);
}

double NNfunction_NG_3::synapse0x2c40490() {
   return (neuron0x2c22080()*0.435217);
}

double NNfunction_NG_3::synapse0x2c404d0() {
   return (neuron0x2c225e0()*-0.350082);
}

double NNfunction_NG_3::synapse0x2c40d60() {
   return (neuron0x2c22800()*0.348049);
}

double NNfunction_NG_3::synapse0x2c40da0() {
   return (neuron0x2c22b40()*0.484439);
}

double NNfunction_NG_3::synapse0x2c40de0() {
   return (neuron0x2c22e80()*0.107554);
}

double NNfunction_NG_3::synapse0x2c40e20() {
   return (neuron0x2c231c0()*-0.0147774);
}

double NNfunction_NG_3::synapse0x2c40e60() {
   return (neuron0x2c23500()*-0.584409);
}

double NNfunction_NG_3::synapse0x2c40ea0() {
   return (neuron0x2c23840()*-0.467557);
}

double NNfunction_NG_3::synapse0x2c41220() {
   return (neuron0x2c1ec80()*-0.0181324);
}

double NNfunction_NG_3::synapse0x2c41260() {
   return (neuron0x2c1efc0()*0.0731484);
}

double NNfunction_NG_3::synapse0x2c412a0() {
   return (neuron0x2c1f300()*0.627346);
}

double NNfunction_NG_3::synapse0x2c412e0() {
   return (neuron0x2c1f640()*-0.106655);
}

double NNfunction_NG_3::synapse0x2c41320() {
   return (neuron0x2c1f980()*-0.0418875);
}

double NNfunction_NG_3::synapse0x2c41360() {
   return (neuron0x2c1fcc0()*0.00310138);
}

double NNfunction_NG_3::synapse0x2c413a0() {
   return (neuron0x2c20000()*-0.003494);
}

double NNfunction_NG_3::synapse0x2c413e0() {
   return (neuron0x2c20340()*-0.00659952);
}

double NNfunction_NG_3::synapse0x2c41420() {
   return (neuron0x2c20680()*0.0123145);
}

double NNfunction_NG_3::synapse0x2c41460() {
   return (neuron0x2c209c0()*-0.0151993);
}

double NNfunction_NG_3::synapse0x2c414a0() {
   return (neuron0x2c20d00()*-0.000489437);
}

double NNfunction_NG_3::synapse0x2c414e0() {
   return (neuron0x2c21040()*-0.063497);
}

double NNfunction_NG_3::synapse0x2c41520() {
   return (neuron0x2c21380()*0.0161262);
}

double NNfunction_NG_3::synapse0x2c41560() {
   return (neuron0x2c216c0()*-0.00567497);
}

double NNfunction_NG_3::synapse0x2c415a0() {
   return (neuron0x2c21a00()*0.0969339);
}

double NNfunction_NG_3::synapse0x2c415e0() {
   return (neuron0x2c21d40()*0.00987849);
}

double NNfunction_NG_3::synapse0x2c41070() {
   return (neuron0x2c22080()*-0.0105915);
}

double NNfunction_NG_3::synapse0x2c410b0() {
   return (neuron0x2c225e0()*0.0186377);
}

double NNfunction_NG_3::synapse0x2c41730() {
   return (neuron0x2c22800()*-0.00181003);
}

double NNfunction_NG_3::synapse0x2c41770() {
   return (neuron0x2c22b40()*0.00355939);
}

double NNfunction_NG_3::synapse0x2c417b0() {
   return (neuron0x2c22e80()*0.00396888);
}

double NNfunction_NG_3::synapse0x2c417f0() {
   return (neuron0x2c231c0()*0.00227273);
}

double NNfunction_NG_3::synapse0x2c41830() {
   return (neuron0x2c23500()*0.00188979);
}

double NNfunction_NG_3::synapse0x2c41870() {
   return (neuron0x2c23840()*0.912611);
}

double NNfunction_NG_3::synapse0x2c41bf0() {
   return (neuron0x2c1ec80()*-0.0136548);
}

double NNfunction_NG_3::synapse0x2c41c30() {
   return (neuron0x2c1efc0()*0.00288464);
}

double NNfunction_NG_3::synapse0x2c41c70() {
   return (neuron0x2c1f300()*-3.75714);
}

double NNfunction_NG_3::synapse0x2c41cb0() {
   return (neuron0x2c1f640()*0.01425);
}

double NNfunction_NG_3::synapse0x2c41cf0() {
   return (neuron0x2c1f980()*0.0153175);
}

double NNfunction_NG_3::synapse0x2c41d30() {
   return (neuron0x2c1fcc0()*0.00126031);
}

double NNfunction_NG_3::synapse0x2c41d70() {
   return (neuron0x2c20000()*0.0140738);
}

double NNfunction_NG_3::synapse0x2c41db0() {
   return (neuron0x2c20340()*0.0112966);
}

double NNfunction_NG_3::synapse0x2c41df0() {
   return (neuron0x2c20680()*-0.00670619);
}

double NNfunction_NG_3::synapse0x2c41e30() {
   return (neuron0x2c209c0()*0.0192526);
}

double NNfunction_NG_3::synapse0x2c41e70() {
   return (neuron0x2c20d00()*-0.0189745);
}

double NNfunction_NG_3::synapse0x2c41eb0() {
   return (neuron0x2c21040()*-0.0347735);
}

double NNfunction_NG_3::synapse0x2c41ef0() {
   return (neuron0x2c21380()*-0.0687044);
}

double NNfunction_NG_3::synapse0x2c41f30() {
   return (neuron0x2c216c0()*-0.00770979);
}

double NNfunction_NG_3::synapse0x2c41f70() {
   return (neuron0x2c21a00()*0.0688463);
}

double NNfunction_NG_3::synapse0x2c41fb0() {
   return (neuron0x2c21d40()*-0.0117889);
}

double NNfunction_NG_3::synapse0x2c41a40() {
   return (neuron0x2c22080()*-0.0309403);
}

double NNfunction_NG_3::synapse0x2c41a80() {
   return (neuron0x2c225e0()*-0.0187628);
}

double NNfunction_NG_3::synapse0x2c325b0() {
   return (neuron0x2c22800()*0.00415998);
}

double NNfunction_NG_3::synapse0x2c325f0() {
   return (neuron0x2c22b40()*-0.00345796);
}

double NNfunction_NG_3::synapse0x2c32630() {
   return (neuron0x2c22e80()*-0.00623502);
}

double NNfunction_NG_3::synapse0x2c32670() {
   return (neuron0x2c231c0()*-0.00576925);
}

double NNfunction_NG_3::synapse0x2c326b0() {
   return (neuron0x2c23500()*0.00100996);
}

double NNfunction_NG_3::synapse0x2c326f0() {
   return (neuron0x2c23840()*2.50405);
}

double NNfunction_NG_3::synapse0x2c32a70() {
   return (neuron0x2c1ec80()*-0.00763197);
}

double NNfunction_NG_3::synapse0x2c32ab0() {
   return (neuron0x2c1efc0()*7.61322);
}

double NNfunction_NG_3::synapse0x2c32af0() {
   return (neuron0x2c1f300()*1.07482);
}

double NNfunction_NG_3::synapse0x2c32b30() {
   return (neuron0x2c1f640()*-0.0155741);
}

double NNfunction_NG_3::synapse0x2c32b70() {
   return (neuron0x2c1f980()*0.0227013);
}

double NNfunction_NG_3::synapse0x2c32bb0() {
   return (neuron0x2c1fcc0()*0.00469145);
}

double NNfunction_NG_3::synapse0x2c32bf0() {
   return (neuron0x2c20000()*0.00436885);
}

double NNfunction_NG_3::synapse0x2c32c30() {
   return (neuron0x2c20340()*-0.00647452);
}

double NNfunction_NG_3::synapse0x2c32c70() {
   return (neuron0x2c20680()*0.00953096);
}

double NNfunction_NG_3::synapse0x2c32cb0() {
   return (neuron0x2c209c0()*-0.000231601);
}

double NNfunction_NG_3::synapse0x2c32cf0() {
   return (neuron0x2c20d00()*-0.00300995);
}

double NNfunction_NG_3::synapse0x2c32d30() {
   return (neuron0x2c21040()*0.00301976);
}

double NNfunction_NG_3::synapse0x2c32d70() {
   return (neuron0x2c21380()*0.00510598);
}

double NNfunction_NG_3::synapse0x2c32db0() {
   return (neuron0x2c216c0()*-0.000843986);
}

double NNfunction_NG_3::synapse0x2c32df0() {
   return (neuron0x2c21a00()*-0.000486938);
}

double NNfunction_NG_3::synapse0x2c32e30() {
   return (neuron0x2c21d40()*0.00706553);
}

double NNfunction_NG_3::synapse0x2c328c0() {
   return (neuron0x2c22080()*-0.0113843);
}

double NNfunction_NG_3::synapse0x2c32900() {
   return (neuron0x2c225e0()*-0.00570477);
}

double NNfunction_NG_3::synapse0x2c32f80() {
   return (neuron0x2c22800()*0.00451508);
}

double NNfunction_NG_3::synapse0x2c32fc0() {
   return (neuron0x2c22b40()*0.00648194);
}

double NNfunction_NG_3::synapse0x2c33000() {
   return (neuron0x2c22e80()*-0.00260625);
}

double NNfunction_NG_3::synapse0x2c33040() {
   return (neuron0x2c231c0()*0.0105159);
}

double NNfunction_NG_3::synapse0x2c33080() {
   return (neuron0x2c23500()*0.00170201);
}

double NNfunction_NG_3::synapse0x2c330c0() {
   return (neuron0x2c23840()*0.295746);
}

double NNfunction_NG_3::synapse0x2c33440() {
   return (neuron0x2c1ec80()*0.0212259);
}

double NNfunction_NG_3::synapse0x2c33480() {
   return (neuron0x2c1efc0()*-0.0451285);
}

double NNfunction_NG_3::synapse0x2c334c0() {
   return (neuron0x2c1f300()*0.116459);
}

double NNfunction_NG_3::synapse0x2c33500() {
   return (neuron0x2c1f640()*-2.78882);
}

double NNfunction_NG_3::synapse0x2c33540() {
   return (neuron0x2c1f980()*0.0137918);
}

double NNfunction_NG_3::synapse0x2c33580() {
   return (neuron0x2c1fcc0()*0.0109683);
}

double NNfunction_NG_3::synapse0x2c335c0() {
   return (neuron0x2c20000()*-0.00921454);
}

double NNfunction_NG_3::synapse0x2c33600() {
   return (neuron0x2c20340()*-0.030515);
}

double NNfunction_NG_3::synapse0x2c33640() {
   return (neuron0x2c20680()*0.025732);
}

double NNfunction_NG_3::synapse0x2c33680() {
   return (neuron0x2c209c0()*-0.00688179);
}

double NNfunction_NG_3::synapse0x2c336c0() {
   return (neuron0x2c20d00()*0.00500056);
}

double NNfunction_NG_3::synapse0x2c33700() {
   return (neuron0x2c21040()*0.232836);
}

double NNfunction_NG_3::synapse0x2c33740() {
   return (neuron0x2c21380()*0.0721556);
}

double NNfunction_NG_3::synapse0x2c33780() {
   return (neuron0x2c216c0()*-0.0279523);
}

double NNfunction_NG_3::synapse0x2c337c0() {
   return (neuron0x2c21a00()*-0.166277);
}

double NNfunction_NG_3::synapse0x2c33800() {
   return (neuron0x2c21d40()*0.0156391);
}

double NNfunction_NG_3::synapse0x2c33290() {
   return (neuron0x2c22080()*0.00921919);
}

double NNfunction_NG_3::synapse0x2c332d0() {
   return (neuron0x2c225e0()*0.0625164);
}

double NNfunction_NG_3::synapse0x2c33950() {
   return (neuron0x2c22800()*0.0273911);
}

double NNfunction_NG_3::synapse0x2c33990() {
   return (neuron0x2c22b40()*0.0209734);
}

double NNfunction_NG_3::synapse0x2c339d0() {
   return (neuron0x2c22e80()*-0.00371935);
}

double NNfunction_NG_3::synapse0x2c33a10() {
   return (neuron0x2c231c0()*0.0206956);
}

double NNfunction_NG_3::synapse0x2c33a50() {
   return (neuron0x2c23500()*0.0183517);
}

double NNfunction_NG_3::synapse0x2c33a90() {
   return (neuron0x2c23840()*-0.43219);
}

double NNfunction_NG_3::synapse0x2c33e10() {
   return (neuron0x2c1ec80()*0.0236309);
}

double NNfunction_NG_3::synapse0x2c33e50() {
   return (neuron0x2c1efc0()*1.82183);
}

double NNfunction_NG_3::synapse0x2c33e90() {
   return (neuron0x2c1f300()*0.279539);
}

double NNfunction_NG_3::synapse0x2c33ed0() {
   return (neuron0x2c1f640()*-3.07451);
}

double NNfunction_NG_3::synapse0x2c33f10() {
   return (neuron0x2c1f980()*-0.0353583);
}

double NNfunction_NG_3::synapse0x2c33f50() {
   return (neuron0x2c1fcc0()*0.00886394);
}

double NNfunction_NG_3::synapse0x2c33f90() {
   return (neuron0x2c20000()*-0.0602171);
}

double NNfunction_NG_3::synapse0x2c33fd0() {
   return (neuron0x2c20340()*-0.0312545);
}

double NNfunction_NG_3::synapse0x2c34010() {
   return (neuron0x2c20680()*0.01123);
}

double NNfunction_NG_3::synapse0x2c34050() {
   return (neuron0x2c209c0()*-0.0183062);
}

double NNfunction_NG_3::synapse0x2c34090() {
   return (neuron0x2c20d00()*-0.0279413);
}

double NNfunction_NG_3::synapse0x2c340d0() {
   return (neuron0x2c21040()*0.175226);
}

double NNfunction_NG_3::synapse0x2c34110() {
   return (neuron0x2c21380()*0.108781);
}

double NNfunction_NG_3::synapse0x2c34150() {
   return (neuron0x2c216c0()*-0.0821386);
}

double NNfunction_NG_3::synapse0x2c34190() {
   return (neuron0x2c21a00()*-0.184119);
}

double NNfunction_NG_3::synapse0x2c341d0() {
   return (neuron0x2c21d40()*0.0208997);
}

double NNfunction_NG_3::synapse0x2c33c60() {
   return (neuron0x2c22080()*-0.0685764);
}

double NNfunction_NG_3::synapse0x2c33ca0() {
   return (neuron0x2c225e0()*-0.0616545);
}

double NNfunction_NG_3::synapse0x2c34320() {
   return (neuron0x2c22800()*0.0187748);
}

double NNfunction_NG_3::synapse0x2c34360() {
   return (neuron0x2c22b40()*-0.00299983);
}

double NNfunction_NG_3::synapse0x2c343a0() {
   return (neuron0x2c22e80()*-0.0149528);
}

double NNfunction_NG_3::synapse0x2c343e0() {
   return (neuron0x2c231c0()*0.0270267);
}

double NNfunction_NG_3::synapse0x2c34420() {
   return (neuron0x2c23500()*0.000961847);
}

double NNfunction_NG_3::synapse0x2c34460() {
   return (neuron0x2c23840()*0.241319);
}

double NNfunction_NG_3::synapse0x2c46330() {
   return (neuron0x2c1ec80()*-0.0294708);
}

double NNfunction_NG_3::synapse0x2c46370() {
   return (neuron0x2c1efc0()*0.0140041);
}

double NNfunction_NG_3::synapse0x2c463b0() {
   return (neuron0x2c1f300()*-0.349439);
}

double NNfunction_NG_3::synapse0x2c463f0() {
   return (neuron0x2c1f640()*1.76102);
}

double NNfunction_NG_3::synapse0x2c46430() {
   return (neuron0x2c1f980()*-0.0179442);
}

double NNfunction_NG_3::synapse0x2c46470() {
   return (neuron0x2c1fcc0()*-0.0259002);
}

double NNfunction_NG_3::synapse0x2c464b0() {
   return (neuron0x2c20000()*-0.00731778);
}

double NNfunction_NG_3::synapse0x2c464f0() {
   return (neuron0x2c20340()*0.00163774);
}

double NNfunction_NG_3::synapse0x2c46530() {
   return (neuron0x2c20680()*-0.0270602);
}

double NNfunction_NG_3::synapse0x2c46570() {
   return (neuron0x2c209c0()*-0.0292056);
}

double NNfunction_NG_3::synapse0x2c465b0() {
   return (neuron0x2c20d00()*-0.0074015);
}

double NNfunction_NG_3::synapse0x2c465f0() {
   return (neuron0x2c21040()*-1.43419);
}

double NNfunction_NG_3::synapse0x2c46630() {
   return (neuron0x2c21380()*-0.0334244);
}

double NNfunction_NG_3::synapse0x2c46670() {
   return (neuron0x2c216c0()*-0.000484188);
}

double NNfunction_NG_3::synapse0x2c466b0() {
   return (neuron0x2c21a00()*0.107949);
}

double NNfunction_NG_3::synapse0x2c466f0() {
   return (neuron0x2c21d40()*0.0374021);
}

double NNfunction_NG_3::synapse0x2c344a0() {
   return (neuron0x2c22080()*0.00591365);
}

double NNfunction_NG_3::synapse0x2c344e0() {
   return (neuron0x2c225e0()*0.00785986);
}

double NNfunction_NG_3::synapse0x2c46840() {
   return (neuron0x2c22800()*-0.0210844);
}

double NNfunction_NG_3::synapse0x2c46880() {
   return (neuron0x2c22b40()*-0.048466);
}

double NNfunction_NG_3::synapse0x2c468c0() {
   return (neuron0x2c22e80()*-0.0182723);
}

double NNfunction_NG_3::synapse0x2c46900() {
   return (neuron0x2c231c0()*-0.0394536);
}

double NNfunction_NG_3::synapse0x2c46940() {
   return (neuron0x2c23500()*0.0100131);
}

double NNfunction_NG_3::synapse0x2c46980() {
   return (neuron0x2c23840()*0.609626);
}

double NNfunction_NG_3::synapse0x2c46d00() {
   return (neuron0x2c1ec80()*0.0415849);
}

double NNfunction_NG_3::synapse0x2c46d40() {
   return (neuron0x2c1efc0()*0.0312909);
}

double NNfunction_NG_3::synapse0x2c46d80() {
   return (neuron0x2c1f300()*-0.0865357);
}

double NNfunction_NG_3::synapse0x2c46dc0() {
   return (neuron0x2c1f640()*0.121702);
}

double NNfunction_NG_3::synapse0x2c46e00() {
   return (neuron0x2c1f980()*0.252886);
}

double NNfunction_NG_3::synapse0x2c46e40() {
   return (neuron0x2c1fcc0()*-0.063621);
}

double NNfunction_NG_3::synapse0x2c46e80() {
   return (neuron0x2c20000()*0.109858);
}

double NNfunction_NG_3::synapse0x2c46ec0() {
   return (neuron0x2c20340()*0.20873);
}

double NNfunction_NG_3::synapse0x2c46f00() {
   return (neuron0x2c20680()*0.179578);
}

double NNfunction_NG_3::synapse0x2c46f40() {
   return (neuron0x2c209c0()*-0.366856);
}

double NNfunction_NG_3::synapse0x2c46f80() {
   return (neuron0x2c20d00()*0.0204303);
}

double NNfunction_NG_3::synapse0x2c46fc0() {
   return (neuron0x2c21040()*-1.03105);
}

double NNfunction_NG_3::synapse0x2c47000() {
   return (neuron0x2c21380()*-0.201439);
}

double NNfunction_NG_3::synapse0x2c47040() {
   return (neuron0x2c216c0()*-0.272789);
}

double NNfunction_NG_3::synapse0x2c47080() {
   return (neuron0x2c21a00()*-0.241065);
}

double NNfunction_NG_3::synapse0x2c470c0() {
   return (neuron0x2c21d40()*-0.374375);
}

double NNfunction_NG_3::synapse0x2c46b50() {
   return (neuron0x2c22080()*0.28943);
}

double NNfunction_NG_3::synapse0x2c46b90() {
   return (neuron0x2c225e0()*-0.604028);
}

double NNfunction_NG_3::synapse0x2c47210() {
   return (neuron0x2c22800()*-0.135405);
}

double NNfunction_NG_3::synapse0x2c47250() {
   return (neuron0x2c22b40()*-0.338153);
}

double NNfunction_NG_3::synapse0x2c47290() {
   return (neuron0x2c22e80()*-0.360971);
}

double NNfunction_NG_3::synapse0x2c472d0() {
   return (neuron0x2c231c0()*0.113893);
}

double NNfunction_NG_3::synapse0x2c47310() {
   return (neuron0x2c23500()*0.0824702);
}

double NNfunction_NG_3::synapse0x2c47350() {
   return (neuron0x2c23840()*0.0654531);
}

double NNfunction_NG_3::synapse0x2c476d0() {
   return (neuron0x2c1ec80()*-0.0134465);
}

double NNfunction_NG_3::synapse0x2c47710() {
   return (neuron0x2c1efc0()*0.0512583);
}

double NNfunction_NG_3::synapse0x2c47750() {
   return (neuron0x2c1f300()*0.41124);
}

double NNfunction_NG_3::synapse0x2c47790() {
   return (neuron0x2c1f640()*0.0106903);
}

double NNfunction_NG_3::synapse0x2c477d0() {
   return (neuron0x2c1f980()*-0.0327449);
}

double NNfunction_NG_3::synapse0x2c47810() {
   return (neuron0x2c1fcc0()*0.00188802);
}

double NNfunction_NG_3::synapse0x2c47850() {
   return (neuron0x2c20000()*0.0089716);
}

double NNfunction_NG_3::synapse0x2c47890() {
   return (neuron0x2c20340()*-0.00488482);
}

double NNfunction_NG_3::synapse0x2c478d0() {
   return (neuron0x2c20680()*0.00454999);
}

double NNfunction_NG_3::synapse0x2c47910() {
   return (neuron0x2c209c0()*-0.00199406);
}

double NNfunction_NG_3::synapse0x2c47950() {
   return (neuron0x2c20d00()*-0.00281624);
}

double NNfunction_NG_3::synapse0x2c47990() {
   return (neuron0x2c21040()*-0.109568);
}

double NNfunction_NG_3::synapse0x2c479d0() {
   return (neuron0x2c21380()*-0.00808361);
}

double NNfunction_NG_3::synapse0x2c47a10() {
   return (neuron0x2c216c0()*-0.00493229);
}

double NNfunction_NG_3::synapse0x2c47a50() {
   return (neuron0x2c21a00()*0.0403794);
}

double NNfunction_NG_3::synapse0x2c47a90() {
   return (neuron0x2c21d40()*0.0153219);
}

double NNfunction_NG_3::synapse0x2c47520() {
   return (neuron0x2c22080()*-0.00253675);
}

double NNfunction_NG_3::synapse0x2c47560() {
   return (neuron0x2c225e0()*0.0228132);
}

double NNfunction_NG_3::synapse0x2c47be0() {
   return (neuron0x2c22800()*0.0080936);
}

double NNfunction_NG_3::synapse0x2c47c20() {
   return (neuron0x2c22b40()*-0.00444057);
}

double NNfunction_NG_3::synapse0x2c47c60() {
   return (neuron0x2c22e80()*0.0043603);
}

double NNfunction_NG_3::synapse0x2c47ca0() {
   return (neuron0x2c231c0()*0.0111303);
}

double NNfunction_NG_3::synapse0x2c47ce0() {
   return (neuron0x2c23500()*0.00643795);
}

double NNfunction_NG_3::synapse0x2c47d20() {
   return (neuron0x2c23840()*1.07288);
}

double NNfunction_NG_3::synapse0x2c480a0() {
   return (neuron0x2c1ec80()*-0.0640522);
}

double NNfunction_NG_3::synapse0x2c480e0() {
   return (neuron0x2c1efc0()*0.0247433);
}

double NNfunction_NG_3::synapse0x2c48120() {
   return (neuron0x2c1f300()*0.637883);
}

double NNfunction_NG_3::synapse0x2c48160() {
   return (neuron0x2c1f640()*-3.21404);
}

double NNfunction_NG_3::synapse0x2c481a0() {
   return (neuron0x2c1f980()*-0.0521996);
}

double NNfunction_NG_3::synapse0x2c481e0() {
   return (neuron0x2c1fcc0()*-0.00820326);
}

double NNfunction_NG_3::synapse0x2c48220() {
   return (neuron0x2c20000()*-0.00186509);
}

double NNfunction_NG_3::synapse0x2c48260() {
   return (neuron0x2c20340()*-0.0373731);
}

double NNfunction_NG_3::synapse0x2c482a0() {
   return (neuron0x2c20680()*0.0174788);
}

double NNfunction_NG_3::synapse0x2c482e0() {
   return (neuron0x2c209c0()*-0.0466018);
}

double NNfunction_NG_3::synapse0x2c48320() {
   return (neuron0x2c20d00()*0.10259);
}

double NNfunction_NG_3::synapse0x2c48360() {
   return (neuron0x2c21040()*-0.648965);
}

double NNfunction_NG_3::synapse0x2c483a0() {
   return (neuron0x2c21380()*0.676598);
}

double NNfunction_NG_3::synapse0x2c483e0() {
   return (neuron0x2c216c0()*0.0277157);
}

double NNfunction_NG_3::synapse0x2c48420() {
   return (neuron0x2c21a00()*-0.141749);
}

double NNfunction_NG_3::synapse0x2c48460() {
   return (neuron0x2c21d40()*0.0646186);
}

double NNfunction_NG_3::synapse0x2c47ef0() {
   return (neuron0x2c22080()*-0.0039631);
}

double NNfunction_NG_3::synapse0x2c47f30() {
   return (neuron0x2c225e0()*0.0310188);
}

double NNfunction_NG_3::synapse0x2c485b0() {
   return (neuron0x2c22800()*0.0812118);
}

double NNfunction_NG_3::synapse0x2c485f0() {
   return (neuron0x2c22b40()*-0.0131381);
}

double NNfunction_NG_3::synapse0x2c48630() {
   return (neuron0x2c22e80()*-0.0356538);
}

double NNfunction_NG_3::synapse0x2c48670() {
   return (neuron0x2c231c0()*0.003712);
}

double NNfunction_NG_3::synapse0x2c486b0() {
   return (neuron0x2c23500()*0.00225039);
}

double NNfunction_NG_3::synapse0x2c486f0() {
   return (neuron0x2c23840()*-0.349589);
}

double NNfunction_NG_3::synapse0x2c24c90() {
   return (neuron0x2c23ce0()*-0.670114);
}

double NNfunction_NG_3::synapse0x2c24cd0() {
   return (neuron0x2c245f0()*-3.79507);
}

double NNfunction_NG_3::synapse0x2c261a0() {
   return (neuron0x2c250d0()*1.085);
}

double NNfunction_NG_3::synapse0x2c261e0() {
   return (neuron0x29de960()*2.0322);
}

double NNfunction_NG_3::synapse0x2c26b70() {
   return (neuron0x2c25ef0()*-0.656603);
}

double NNfunction_NG_3::synapse0x2c26bb0() {
   return (neuron0x2c268c0()*2.57548);
}

double NNfunction_NG_3::synapse0x2c27940() {
   return (neuron0x2c27690()*1.47425);
}

double NNfunction_NG_3::synapse0x2c27980() {
   return (neuron0x2c28060()*-0.972157);
}

double NNfunction_NG_3::synapse0x2c28310() {
   return (neuron0x2c28a30()*-0.955165);
}

double NNfunction_NG_3::synapse0x2c28350() {
   return (neuron0x2c29510()*0.675419);
}

double NNfunction_NG_3::synapse0x2c28ce0() {
   return (neuron0x2c29ee0()*-0.303314);
}

double NNfunction_NG_3::synapse0x2c28d20() {
   return (neuron0x2c26fc0()*1.13431);
}

double NNfunction_NG_3::synapse0x2c297c0() {
   return (neuron0x2c2ba90()*0.740363);
}

double NNfunction_NG_3::synapse0x2c29800() {
   return (neuron0x2c2c460()*0.40136);
}

double NNfunction_NG_3::synapse0x2c2a190() {
   return (neuron0x2c2ce30()*2.75222);
}

double NNfunction_NG_3::synapse0x2c2a1d0() {
   return (neuron0x2c2d800()*-0.917643);
}

double NNfunction_NG_3::synapse0x2c27270() {
   return (neuron0x2c2f610()*-2.64182);
}

double NNfunction_NG_3::synapse0x2c272b0() {
   return (neuron0x2c2f8f0()*-0.340023);
}

double NNfunction_NG_3::synapse0x2c2bd40() {
   return (neuron0x2c302c0()*2.74923);
}

double NNfunction_NG_3::synapse0x2c2bd80() {
   return (neuron0x2c30c90()*0.474289);
}

double NNfunction_NG_3::synapse0x2c2c710() {
   return (neuron0x2c31660()*-2.2956);
}

double NNfunction_NG_3::synapse0x2c2c750() {
   return (neuron0x2c32030()*-3.6691);
}

double NNfunction_NG_3::synapse0x2c2d0e0() {
   return (neuron0x2c2ab80()*-0.0477126);
}

double NNfunction_NG_3::synapse0x2c2d120() {
   return (neuron0x2c2b550()*-0.0133796);
}

double NNfunction_NG_3::synapse0x2c2dab0() {
   return (neuron0x2c34dc0()*-1.02645);
}

double NNfunction_NG_3::synapse0x2c2daf0() {
   return (neuron0x2c35790()*-0.432195);
}

double NNfunction_NG_3::synapse0x2c21c20() {
   return (neuron0x2c36160()*0.554313);
}

double NNfunction_NG_3::synapse0x2c21c60() {
   return (neuron0x2c36b30()*3.88312);
}

double NNfunction_NG_3::synapse0x2c2fba0() {
   return (neuron0x2c37500()*-0.0800254);
}

double NNfunction_NG_3::synapse0x2c2fbe0() {
   return (neuron0x2c37ed0()*-0.152489);
}

double NNfunction_NG_3::synapse0x2c30570() {
   return (neuron0x2c388a0()*-0.803193);
}

double NNfunction_NG_3::synapse0x2c305b0() {
   return (neuron0x2c39270()*2.18415);
}

double NNfunction_NG_3::synapse0x2c30f40() {
   return (neuron0x2c2f300()*1.05726);
}

double NNfunction_NG_3::synapse0x2c30f80() {
   return (neuron0x2c3be50()*1.11769);
}

double NNfunction_NG_3::synapse0x2c31910() {
   return (neuron0x2c3c820()*-1.74612);
}

double NNfunction_NG_3::synapse0x2c31950() {
   return (neuron0x2c3d1f0()*1.89942);
}

double NNfunction_NG_3::synapse0x2c322e0() {
   return (neuron0x2c3dbc0()*4.20968);
}

double NNfunction_NG_3::synapse0x2c32320() {
   return (neuron0x2c3e590()*-0.363108);
}

double NNfunction_NG_3::synapse0x2c2ae30() {
   return (neuron0x2c3ef60()*0.673724);
}

double NNfunction_NG_3::synapse0x2c2ae70() {
   return (neuron0x2c3f930()*0.24323);
}

double NNfunction_NG_3::synapse0x2c346e0() {
   return (neuron0x2c40300()*0.0308241);
}

double NNfunction_NG_3::synapse0x2c34720() {
   return (neuron0x2c40ee0()*1.23173);
}

double NNfunction_NG_3::synapse0x2c35070() {
   return (neuron0x2c418b0()*-1.60367);
}

double NNfunction_NG_3::synapse0x2c350b0() {
   return (neuron0x2c32730()*1.20389);
}

double NNfunction_NG_3::synapse0x2c35a40() {
   return (neuron0x2c33100()*-0.539458);
}

double NNfunction_NG_3::synapse0x2c35a80() {
   return (neuron0x2c33ad0()*1.04546);
}

double NNfunction_NG_3::synapse0x2c36410() {
   return (neuron0x2c46110()*0.00999892);
}

double NNfunction_NG_3::synapse0x2c36450() {
   return (neuron0x2c469c0()*-0.416318);
}

double NNfunction_NG_3::synapse0x2c36de0() {
   return (neuron0x2c47390()*-2.45509);
}

double NNfunction_NG_3::synapse0x2c36e20() {
   return (neuron0x2c47d60()*-0.0866864);
}

double NNfunction_NG_3::synapse0x2c39520() {
   return (neuron0x2c23ce0()*0.210012);
}

double NNfunction_NG_3::synapse0x2c39560() {
   return (neuron0x2c245f0()*0.779514);
}

double NNfunction_NG_3::synapse0x2c2eae0() {
   return (neuron0x2c250d0()*-0.147912);
}

double NNfunction_NG_3::synapse0x2c2eb20() {
   return (neuron0x29de960()*0.344098);
}

double NNfunction_NG_3::synapse0x2c3c100() {
   return (neuron0x2c25ef0()*-0.0662227);
}

double NNfunction_NG_3::synapse0x2c3c140() {
   return (neuron0x2c268c0()*-0.449613);
}

double NNfunction_NG_3::synapse0x2c3cad0() {
   return (neuron0x2c27690()*-0.203735);
}

double NNfunction_NG_3::synapse0x2c3cb10() {
   return (neuron0x2c28060()*0.224982);
}

double NNfunction_NG_3::synapse0x2c3d4a0() {
   return (neuron0x2c28a30()*-0.235084);
}

double NNfunction_NG_3::synapse0x2c3d4e0() {
   return (neuron0x2c29510()*-0.55246);
}

double NNfunction_NG_3::synapse0x2c3de70() {
   return (neuron0x2c29ee0()*1.80481);
}

double NNfunction_NG_3::synapse0x2c3deb0() {
   return (neuron0x2c26fc0()*0.915768);
}

double NNfunction_NG_3::synapse0x2c3e840() {
   return (neuron0x2c2ba90()*0.247761);
}

double NNfunction_NG_3::synapse0x2c3e880() {
   return (neuron0x2c2c460()*-0.568852);
}

double NNfunction_NG_3::synapse0x2c3f210() {
   return (neuron0x2c2ce30()*0.0223464);
}

double NNfunction_NG_3::synapse0x2c3f250() {
   return (neuron0x2c2d800()*0.168186);
}

double NNfunction_NG_3::synapse0x2c3fbe0() {
   return (neuron0x2c2f610()*0.17292);
}

double NNfunction_NG_3::synapse0x2c3fc20() {
   return (neuron0x2c2f8f0()*0.121656);
}

double NNfunction_NG_3::synapse0x2c405b0() {
   return (neuron0x2c302c0()*0.0665832);
}

double NNfunction_NG_3::synapse0x2c405f0() {
   return (neuron0x2c30c90()*-1.71574);
}

double NNfunction_NG_3::synapse0x2c41190() {
   return (neuron0x2c31660()*0.251886);
}

double NNfunction_NG_3::synapse0x2c411d0() {
   return (neuron0x2c32030()*0.715748);
}

double NNfunction_NG_3::synapse0x2c41b60() {
   return (neuron0x2c2ab80()*-0.76352);
}

double NNfunction_NG_3::synapse0x2c41ba0() {
   return (neuron0x2c2b550()*0.857516);
}

double NNfunction_NG_3::synapse0x2c329e0() {
   return (neuron0x2c34dc0()*0.116096);
}

double NNfunction_NG_3::synapse0x2c32a20() {
   return (neuron0x2c35790()*-0.050362);
}

double NNfunction_NG_3::synapse0x2c333b0() {
   return (neuron0x2c36160()*0.644931);
}

double NNfunction_NG_3::synapse0x2c333f0() {
   return (neuron0x2c36b30()*-1.38125);
}

double NNfunction_NG_3::synapse0x2c33d80() {
   return (neuron0x2c37500()*-0.159711);
}

double NNfunction_NG_3::synapse0x2c33dc0() {
   return (neuron0x2c37ed0()*-0.187843);
}

double NNfunction_NG_3::synapse0x2c462a0() {
   return (neuron0x2c388a0()*0.231778);
}

double NNfunction_NG_3::synapse0x2c462e0() {
   return (neuron0x2c39270()*-0.464762);
}

double NNfunction_NG_3::synapse0x2c46c70() {
   return (neuron0x2c2f300()*-0.202201);
}

double NNfunction_NG_3::synapse0x2c46cb0() {
   return (neuron0x2c3be50()*-0.324193);
}

double NNfunction_NG_3::synapse0x2c47640() {
   return (neuron0x2c3c820()*-0.236737);
}

double NNfunction_NG_3::synapse0x2c47680() {
   return (neuron0x2c3d1f0()*0.136367);
}

double NNfunction_NG_3::synapse0x2c48010() {
   return (neuron0x2c3dbc0()*-0.264324);
}

double NNfunction_NG_3::synapse0x2c48050() {
   return (neuron0x2c3e590()*-0.053357);
}

double NNfunction_NG_3::synapse0x2c23f00() {
   return (neuron0x2c3ef60()*-0.0487055);
}

double NNfunction_NG_3::synapse0x2c23f40() {
   return (neuron0x2c3f930()*0.63796);
}

double NNfunction_NG_3::synapse0x2c377b0() {
   return (neuron0x2c40300()*-0.0531058);
}

double NNfunction_NG_3::synapse0x2c377f0() {
   return (neuron0x2c40ee0()*1.51203);
}

double NNfunction_NG_3::synapse0x2c48730() {
   return (neuron0x2c418b0()*-0.0131369);
}

double NNfunction_NG_3::synapse0x2c48770() {
   return (neuron0x2c32730()*1.36871);
}

double NNfunction_NG_3::synapse0x2c487b0() {
   return (neuron0x2c33100()*0.26606);
}

double NNfunction_NG_3::synapse0x2c487f0() {
   return (neuron0x2c33ad0()*-0.134736);
}

double NNfunction_NG_3::synapse0x2c4f6a0() {
   return (neuron0x2c46110()*0.0563237);
}

double NNfunction_NG_3::synapse0x2c4f6e0() {
   return (neuron0x2c469c0()*0.106742);
}

double NNfunction_NG_3::synapse0x2c4f720() {
   return (neuron0x2c47390()*-1.11388);
}

double NNfunction_NG_3::synapse0x2c4f760() {
   return (neuron0x2c47d60()*-0.333161);
}

double NNfunction_NG_3::synapse0x2c4fae0() {
   return (neuron0x2c23ce0()*0.20413);
}

double NNfunction_NG_3::synapse0x2c4fb20() {
   return (neuron0x2c245f0()*0.766647);
}

double NNfunction_NG_3::synapse0x2c4fb60() {
   return (neuron0x2c250d0()*-0.236225);
}

double NNfunction_NG_3::synapse0x2c4fba0() {
   return (neuron0x29de960()*0.392549);
}

double NNfunction_NG_3::synapse0x2c4fbe0() {
   return (neuron0x2c25ef0()*-0.0450313);
}

double NNfunction_NG_3::synapse0x2c4fc20() {
   return (neuron0x2c268c0()*-0.460433);
}

double NNfunction_NG_3::synapse0x2c4fc60() {
   return (neuron0x2c27690()*-0.302777);
}

double NNfunction_NG_3::synapse0x2c4fca0() {
   return (neuron0x2c28060()*-0.186811);
}

double NNfunction_NG_3::synapse0x2c4fce0() {
   return (neuron0x2c28a30()*0.217517);
}

double NNfunction_NG_3::synapse0x2c4fd20() {
   return (neuron0x2c29510()*0.936934);
}

double NNfunction_NG_3::synapse0x2c4fd60() {
   return (neuron0x2c29ee0()*-1.65162);
}

double NNfunction_NG_3::synapse0x2c4fda0() {
   return (neuron0x2c26fc0()*1.5105);
}

double NNfunction_NG_3::synapse0x2c4fde0() {
   return (neuron0x2c2ba90()*-0.437765);
}

double NNfunction_NG_3::synapse0x2c4fe20() {
   return (neuron0x2c2c460()*0.696648);
}

double NNfunction_NG_3::synapse0x2c4fe60() {
   return (neuron0x2c2ce30()*0.069572);
}

double NNfunction_NG_3::synapse0x2c4fea0() {
   return (neuron0x2c2d800()*0.217865);
}

double NNfunction_NG_3::synapse0x2c4f930() {
   return (neuron0x2c2f610()*0.129508);
}

double NNfunction_NG_3::synapse0x2c4f970() {
   return (neuron0x2c2f8f0()*0.0142379);
}

double NNfunction_NG_3::synapse0x2c4fff0() {
   return (neuron0x2c302c0()*-0.00292631);
}

double NNfunction_NG_3::synapse0x2c50030() {
   return (neuron0x2c30c90()*-0.870557);
}

double NNfunction_NG_3::synapse0x2c50070() {
   return (neuron0x2c31660()*0.274386);
}

double NNfunction_NG_3::synapse0x2c500b0() {
   return (neuron0x2c32030()*0.547907);
}

double NNfunction_NG_3::synapse0x2c500f0() {
   return (neuron0x2c2ab80()*-0.881527);
}

double NNfunction_NG_3::synapse0x2c50130() {
   return (neuron0x2c2b550()*0.215683);
}

double NNfunction_NG_3::synapse0x2c50170() {
   return (neuron0x2c34dc0()*0.196989);
}

double NNfunction_NG_3::synapse0x2c501b0() {
   return (neuron0x2c35790()*-0.145172);
}

double NNfunction_NG_3::synapse0x2c501f0() {
   return (neuron0x2c36160()*0.83035);
}

double NNfunction_NG_3::synapse0x2c50230() {
   return (neuron0x2c36b30()*-1.40842);
}

double NNfunction_NG_3::synapse0x2c50270() {
   return (neuron0x2c37500()*0.704744);
}

double NNfunction_NG_3::synapse0x2c502b0() {
   return (neuron0x2c37ed0()*0.585886);
}

double NNfunction_NG_3::synapse0x2c502f0() {
   return (neuron0x2c388a0()*0.283113);
}

double NNfunction_NG_3::synapse0x2c50330() {
   return (neuron0x2c39270()*-0.419173);
}

double NNfunction_NG_3::synapse0x2c4fee0() {
   return (neuron0x2c2f300()*-0.123146);
}

double NNfunction_NG_3::synapse0x2c4ff20() {
   return (neuron0x2c3be50()*-0.740075);
}

double NNfunction_NG_3::synapse0x2c4ff60() {
   return (neuron0x2c3c820()*0.0626331);
}

double NNfunction_NG_3::synapse0x2c4ffa0() {
   return (neuron0x2c3d1f0()*-0.0214239);
}

double NNfunction_NG_3::synapse0x2c50580() {
   return (neuron0x2c3dbc0()*-0.221823);
}

double NNfunction_NG_3::synapse0x2c505c0() {
   return (neuron0x2c3e590()*-0.0857425);
}

double NNfunction_NG_3::synapse0x2c50600() {
   return (neuron0x2c3ef60()*-0.00985218);
}

double NNfunction_NG_3::synapse0x2c50640() {
   return (neuron0x2c3f930()*0.479424);
}

double NNfunction_NG_3::synapse0x2c50680() {
   return (neuron0x2c40300()*0.0397972);
}

double NNfunction_NG_3::synapse0x2c506c0() {
   return (neuron0x2c40ee0()*1.32255);
}

double NNfunction_NG_3::synapse0x2c50700() {
   return (neuron0x2c418b0()*-0.0869529);
}

double NNfunction_NG_3::synapse0x2c50740() {
   return (neuron0x2c32730()*1.34665);
}

double NNfunction_NG_3::synapse0x2c50780() {
   return (neuron0x2c33100()*0.76076);
}

double NNfunction_NG_3::synapse0x2c507c0() {
   return (neuron0x2c33ad0()*-0.302524);
}

double NNfunction_NG_3::synapse0x2c50800() {
   return (neuron0x2c46110()*0.528001);
}

double NNfunction_NG_3::synapse0x2c50840() {
   return (neuron0x2c469c0()*0.0261006);
}

double NNfunction_NG_3::synapse0x2c50880() {
   return (neuron0x2c47390()*-1.11706);
}

double NNfunction_NG_3::synapse0x2c508c0() {
   return (neuron0x2c47d60()*0.893544);
}

double NNfunction_NG_3::synapse0x2c50c40() {
   return (neuron0x2c23ce0()*-0.394495);
}

double NNfunction_NG_3::synapse0x2c50c80() {
   return (neuron0x2c245f0()*-0.278041);
}

double NNfunction_NG_3::synapse0x2c50cc0() {
   return (neuron0x2c250d0()*-0.4808);
}

double NNfunction_NG_3::synapse0x2c50d00() {
   return (neuron0x29de960()*-0.177341);
}

double NNfunction_NG_3::synapse0x2c50d40() {
   return (neuron0x2c25ef0()*-0.412374);
}

double NNfunction_NG_3::synapse0x2c50d80() {
   return (neuron0x2c268c0()*-0.357161);
}

double NNfunction_NG_3::synapse0x2c50dc0() {
   return (neuron0x2c27690()*-0.73211);
}

double NNfunction_NG_3::synapse0x2c50e00() {
   return (neuron0x2c28060()*0.128689);
}

double NNfunction_NG_3::synapse0x2c50e40() {
   return (neuron0x2c28a30()*-0.4328);
}

double NNfunction_NG_3::synapse0x2c50e80() {
   return (neuron0x2c29510()*-0.00720841);
}

double NNfunction_NG_3::synapse0x2c50ec0() {
   return (neuron0x2c29ee0()*-0.719913);
}

double NNfunction_NG_3::synapse0x2c50f00() {
   return (neuron0x2c26fc0()*0.332882);
}

double NNfunction_NG_3::synapse0x2c50f40() {
   return (neuron0x2c2ba90()*-0.113769);
}

double NNfunction_NG_3::synapse0x2c50f80() {
   return (neuron0x2c2c460()*0.368342);
}

double NNfunction_NG_3::synapse0x2c50fc0() {
   return (neuron0x2c2ce30()*-0.162774);
}

double NNfunction_NG_3::synapse0x2c51000() {
   return (neuron0x2c2d800()*1.19904);
}

double NNfunction_NG_3::synapse0x2c50a90() {
   return (neuron0x2c2f610()*1.03322);
}

double NNfunction_NG_3::synapse0x2c50ad0() {
   return (neuron0x2c2f8f0()*-0.0304641);
}

double NNfunction_NG_3::synapse0x2c51150() {
   return (neuron0x2c302c0()*1.10021);
}

double NNfunction_NG_3::synapse0x2c51190() {
   return (neuron0x2c30c90()*0.28133);
}

double NNfunction_NG_3::synapse0x2c511d0() {
   return (neuron0x2c31660()*-0.559914);
}

double NNfunction_NG_3::synapse0x2c51210() {
   return (neuron0x2c32030()*0.208302);
}

double NNfunction_NG_3::synapse0x2c51250() {
   return (neuron0x2c2ab80()*-0.133747);
}

double NNfunction_NG_3::synapse0x2c51290() {
   return (neuron0x2c2b550()*0.035554);
}

double NNfunction_NG_3::synapse0x2c512d0() {
   return (neuron0x2c34dc0()*-0.289042);
}

double NNfunction_NG_3::synapse0x2c51310() {
   return (neuron0x2c35790()*-0.218248);
}

double NNfunction_NG_3::synapse0x2c51350() {
   return (neuron0x2c36160()*-0.0301233);
}

double NNfunction_NG_3::synapse0x2c51390() {
   return (neuron0x2c36b30()*0.70559);
}

double NNfunction_NG_3::synapse0x2c513d0() {
   return (neuron0x2c37500()*-0.946075);
}

double NNfunction_NG_3::synapse0x2c51410() {
   return (neuron0x2c37ed0()*-0.547863);
}

double NNfunction_NG_3::synapse0x2c51450() {
   return (neuron0x2c388a0()*-0.420384);
}

double NNfunction_NG_3::synapse0x2c51490() {
   return (neuron0x2c39270()*-0.428734);
}

double NNfunction_NG_3::synapse0x2c51040() {
   return (neuron0x2c2f300()*-0.646398);
}

double NNfunction_NG_3::synapse0x2c51080() {
   return (neuron0x2c3be50()*0.24636);
}

double NNfunction_NG_3::synapse0x2c510c0() {
   return (neuron0x2c3c820()*-0.137158);
}

double NNfunction_NG_3::synapse0x2c51100() {
   return (neuron0x2c3d1f0()*0.41826);
}

double NNfunction_NG_3::synapse0x2c516e0() {
   return (neuron0x2c3dbc0()*0.168713);
}

double NNfunction_NG_3::synapse0x2c51720() {
   return (neuron0x2c3e590()*-1.06369);
}

double NNfunction_NG_3::synapse0x2c51760() {
   return (neuron0x2c3ef60()*-0.420622);
}

double NNfunction_NG_3::synapse0x2c517a0() {
   return (neuron0x2c3f930()*-0.16304);
}

double NNfunction_NG_3::synapse0x2c517e0() {
   return (neuron0x2c40300()*0.0864333);
}

double NNfunction_NG_3::synapse0x2c51820() {
   return (neuron0x2c40ee0()*-0.496039);
}

double NNfunction_NG_3::synapse0x2c51860() {
   return (neuron0x2c418b0()*-0.636509);
}

double NNfunction_NG_3::synapse0x2c518a0() {
   return (neuron0x2c32730()*0.214293);
}

double NNfunction_NG_3::synapse0x2c518e0() {
   return (neuron0x2c33100()*-0.0768713);
}

double NNfunction_NG_3::synapse0x2c51920() {
   return (neuron0x2c33ad0()*-0.431169);
}

double NNfunction_NG_3::synapse0x2c51960() {
   return (neuron0x2c46110()*-0.140134);
}

double NNfunction_NG_3::synapse0x2c519a0() {
   return (neuron0x2c469c0()*0.283213);
}

double NNfunction_NG_3::synapse0x2c519e0() {
   return (neuron0x2c47390()*-0.481335);
}

double NNfunction_NG_3::synapse0x2c51a20() {
   return (neuron0x2c47d60()*-0.0665422);
}

double NNfunction_NG_3::synapse0x2c51da0() {
   return (neuron0x2c23ce0()*-0.042232);
}

double NNfunction_NG_3::synapse0x2c51de0() {
   return (neuron0x2c245f0()*0.59989);
}

double NNfunction_NG_3::synapse0x2c51e20() {
   return (neuron0x2c250d0()*-0.105619);
}

double NNfunction_NG_3::synapse0x2c51e60() {
   return (neuron0x29de960()*1.65624);
}

double NNfunction_NG_3::synapse0x2c51ea0() {
   return (neuron0x2c25ef0()*-0.0764723);
}

double NNfunction_NG_3::synapse0x2c51ee0() {
   return (neuron0x2c268c0()*-0.25728);
}

double NNfunction_NG_3::synapse0x2c51f20() {
   return (neuron0x2c27690()*-0.433127);
}

double NNfunction_NG_3::synapse0x2c51f60() {
   return (neuron0x2c28060()*-1.17869);
}

double NNfunction_NG_3::synapse0x2c51fa0() {
   return (neuron0x2c28a30()*-1.09293);
}

double NNfunction_NG_3::synapse0x2c51fe0() {
   return (neuron0x2c29510()*-0.187725);
}

double NNfunction_NG_3::synapse0x2c52020() {
   return (neuron0x2c29ee0()*0.0134988);
}

double NNfunction_NG_3::synapse0x2c52060() {
   return (neuron0x2c26fc0()*0.383117);
}

double NNfunction_NG_3::synapse0x2c520a0() {
   return (neuron0x2c2ba90()*-0.476592);
}

double NNfunction_NG_3::synapse0x2c520e0() {
   return (neuron0x2c2c460()*-0.0202091);
}

double NNfunction_NG_3::synapse0x2c52120() {
   return (neuron0x2c2ce30()*-0.32763);
}

double NNfunction_NG_3::synapse0x2c52160() {
   return (neuron0x2c2d800()*0.309657);
}

double NNfunction_NG_3::synapse0x2c51bf0() {
   return (neuron0x2c2f610()*-0.948036);
}

double NNfunction_NG_3::synapse0x2c51c30() {
   return (neuron0x2c2f8f0()*-0.0934206);
}

double NNfunction_NG_3::synapse0x2c522b0() {
   return (neuron0x2c302c0()*4.7742);
}

double NNfunction_NG_3::synapse0x2c522f0() {
   return (neuron0x2c30c90()*0.745742);
}

double NNfunction_NG_3::synapse0x2c52330() {
   return (neuron0x2c31660()*-2.14371);
}

double NNfunction_NG_3::synapse0x2c52370() {
   return (neuron0x2c32030()*0.44471);
}

double NNfunction_NG_3::synapse0x2c523b0() {
   return (neuron0x2c2ab80()*-1.20879);
}

double NNfunction_NG_3::synapse0x2c523f0() {
   return (neuron0x2c2b550()*0.405038);
}

double NNfunction_NG_3::synapse0x2c52430() {
   return (neuron0x2c34dc0()*0.994058);
}

double NNfunction_NG_3::synapse0x2c52470() {
   return (neuron0x2c35790()*-0.290874);
}

double NNfunction_NG_3::synapse0x2c524b0() {
   return (neuron0x2c36160()*1.34662);
}

double NNfunction_NG_3::synapse0x2c524f0() {
   return (neuron0x2c36b30()*0.896223);
}

double NNfunction_NG_3::synapse0x2c52530() {
   return (neuron0x2c37500()*-0.252229);
}

double NNfunction_NG_3::synapse0x2c52570() {
   return (neuron0x2c37ed0()*-0.352468);
}

double NNfunction_NG_3::synapse0x2c525b0() {
   return (neuron0x2c388a0()*-0.969849);
}

double NNfunction_NG_3::synapse0x2c525f0() {
   return (neuron0x2c39270()*-0.27497);
}

double NNfunction_NG_3::synapse0x2c521a0() {
   return (neuron0x2c2f300()*-0.259899);
}

double NNfunction_NG_3::synapse0x2c521e0() {
   return (neuron0x2c3be50()*-1.18473);
}

double NNfunction_NG_3::synapse0x2c52220() {
   return (neuron0x2c3c820()*0.0232009);
}

double NNfunction_NG_3::synapse0x2c52260() {
   return (neuron0x2c3d1f0()*0.0869166);
}

double NNfunction_NG_3::synapse0x2c52840() {
   return (neuron0x2c3dbc0()*1.41386);
}

double NNfunction_NG_3::synapse0x2c52880() {
   return (neuron0x2c3e590()*-1.83985);
}

double NNfunction_NG_3::synapse0x2c528c0() {
   return (neuron0x2c3ef60()*-1.12202);
}

double NNfunction_NG_3::synapse0x2c52900() {
   return (neuron0x2c3f930()*-1.90052);
}

double NNfunction_NG_3::synapse0x2c52940() {
   return (neuron0x2c40300()*0.0205435);
}

double NNfunction_NG_3::synapse0x2c52980() {
   return (neuron0x2c40ee0()*-1.81798);
}

double NNfunction_NG_3::synapse0x2c529c0() {
   return (neuron0x2c418b0()*-0.179489);
}

double NNfunction_NG_3::synapse0x2c52a00() {
   return (neuron0x2c32730()*4.76541);
}

double NNfunction_NG_3::synapse0x2c52a40() {
   return (neuron0x2c33100()*0.681924);
}

double NNfunction_NG_3::synapse0x2c52a80() {
   return (neuron0x2c33ad0()*-0.224164);
}

double NNfunction_NG_3::synapse0x2c52ac0() {
   return (neuron0x2c46110()*-0.532611);
}

double NNfunction_NG_3::synapse0x2c52b00() {
   return (neuron0x2c469c0()*-0.0128222);
}

double NNfunction_NG_3::synapse0x2c52b40() {
   return (neuron0x2c47390()*-1.75456);
}

double NNfunction_NG_3::synapse0x2c52b80() {
   return (neuron0x2c47d60()*0.0444084);
}

double NNfunction_NG_3::synapse0x2c23ca0() {
   return (neuron0x2c4ef60()*-2.5815);
}

double NNfunction_NG_3::synapse0x2c52de0() {
   return (neuron0x2c4f300()*-10.8401);
}

double NNfunction_NG_3::synapse0x2c52e20() {
   return (neuron0x2c4f7a0()*-10.3369);
}

double NNfunction_NG_3::synapse0x2c52e60() {
   return (neuron0x2c50900()*2.17966);
}

double NNfunction_NG_3::synapse0x2c52ea0() {
   return (neuron0x2c51a60()*-3.66361);
}

