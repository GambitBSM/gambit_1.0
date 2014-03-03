#include "NNfunction_ss_cLsR.h"
#include <cmath>

double NNfunction_ss_cLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5024)/15.3427;
   input1 = (in1 - -0.547333)/1137.58;
   input2 = (in2 - 669.677)/623.242;
   input3 = (in3 - -52.0902)/756.626;
   input4 = (in4 - 1025.04)/935.81;
   input5 = (in5 - 872.867)/925.159;
   input6 = (in6 - 881.671)/929.372;
   input7 = (in7 - 901.984)/913.277;
   input8 = (in8 - 913.543)/970.331;
   input9 = (in9 - 883.085)/952.929;
   input10 = (in10 - 980.552)/957.491;
   input11 = (in11 - 709.112)/850.778;
   input12 = (in12 - 259.549)/240.676;
   input13 = (in13 - 494.345)/504.642;
   input14 = (in14 - 702.236)/793.898;
   input15 = (in15 - 691.303)/790.323;
   input16 = (in16 - 525.418)/545.067;
   input17 = (in17 - 761.777)/898.347;
   input18 = (in18 - 259.888)/248.362;
   input19 = (in19 - 798.718)/876.92;
   input20 = (in20 - -11.9505)/480.416;
   input21 = (in21 - 7.87804)/1148.78;
   input22 = (in22 - 5.24649)/1193.86;
   input23 = (in23 - -202.882)/592.127;
   switch(index) {
     case 0:
         return neuron0x2e553f0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLsR::Value(int index, double* input) {
   input0 = (input[0] - 23.5024)/15.3427;
   input1 = (input[1] - -0.547333)/1137.58;
   input2 = (input[2] - 669.677)/623.242;
   input3 = (input[3] - -52.0902)/756.626;
   input4 = (input[4] - 1025.04)/935.81;
   input5 = (input[5] - 872.867)/925.159;
   input6 = (input[6] - 881.671)/929.372;
   input7 = (input[7] - 901.984)/913.277;
   input8 = (input[8] - 913.543)/970.331;
   input9 = (input[9] - 883.085)/952.929;
   input10 = (input[10] - 980.552)/957.491;
   input11 = (input[11] - 709.112)/850.778;
   input12 = (input[12] - 259.549)/240.676;
   input13 = (input[13] - 494.345)/504.642;
   input14 = (input[14] - 702.236)/793.898;
   input15 = (input[15] - 691.303)/790.323;
   input16 = (input[16] - 525.418)/545.067;
   input17 = (input[17] - 761.777)/898.347;
   input18 = (input[18] - 259.888)/248.362;
   input19 = (input[19] - 798.718)/876.92;
   input20 = (input[20] - -11.9505)/480.416;
   input21 = (input[21] - 7.87804)/1148.78;
   input22 = (input[22] - 5.24649)/1193.86;
   input23 = (input[23] - -202.882)/592.127;
   switch(index) {
     case 0:
         return neuron0x2e553f0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLsR::neuron0x2e214b0() {
   return input0;
}

double NNfunction_ss_cLsR::neuron0x2e217f0() {
   return input1;
}

double NNfunction_ss_cLsR::neuron0x2e21b30() {
   return input2;
}

double NNfunction_ss_cLsR::neuron0x2e21e70() {
   return input3;
}

double NNfunction_ss_cLsR::neuron0x2e221b0() {
   return input4;
}

double NNfunction_ss_cLsR::neuron0x2e224f0() {
   return input5;
}

double NNfunction_ss_cLsR::neuron0x2e22830() {
   return input6;
}

double NNfunction_ss_cLsR::neuron0x2e22b70() {
   return input7;
}

double NNfunction_ss_cLsR::neuron0x2e22eb0() {
   return input8;
}

double NNfunction_ss_cLsR::neuron0x2e231f0() {
   return input9;
}

double NNfunction_ss_cLsR::neuron0x2e23530() {
   return input10;
}

double NNfunction_ss_cLsR::neuron0x2e23870() {
   return input11;
}

double NNfunction_ss_cLsR::neuron0x2e23bb0() {
   return input12;
}

double NNfunction_ss_cLsR::neuron0x2e23ef0() {
   return input13;
}

double NNfunction_ss_cLsR::neuron0x2e24230() {
   return input14;
}

double NNfunction_ss_cLsR::neuron0x2e24570() {
   return input15;
}

double NNfunction_ss_cLsR::neuron0x2e248b0() {
   return input16;
}

double NNfunction_ss_cLsR::neuron0x2e24e10() {
   return input17;
}

double NNfunction_ss_cLsR::neuron0x2e25030() {
   return input18;
}

double NNfunction_ss_cLsR::neuron0x2e25370() {
   return input19;
}

double NNfunction_ss_cLsR::neuron0x2e256b0() {
   return input20;
}

double NNfunction_ss_cLsR::neuron0x2e259f0() {
   return input21;
}

double NNfunction_ss_cLsR::neuron0x2e25d30() {
   return input22;
}

double NNfunction_ss_cLsR::neuron0x2e26070() {
   return input23;
}

double NNfunction_ss_cLsR::input0x2e26510() {
   double input = -1.96429;
   input += synapse0x2be1320();
   input += synapse0x2e21370();
   input += synapse0x2e213b0();
   input += synapse0x2e267c0();
   input += synapse0x2e26800();
   input += synapse0x2e26840();
   input += synapse0x2e26880();
   input += synapse0x2e268c0();
   input += synapse0x2e26900();
   input += synapse0x2e26940();
   input += synapse0x2e26980();
   input += synapse0x2e269c0();
   input += synapse0x2e26a00();
   input += synapse0x2e26a40();
   input += synapse0x2e26a80();
   input += synapse0x2e26ac0();
   input += synapse0x2e212e0();
   input += synapse0x2e21320();
   input += synapse0x2bd2bc0();
   input += synapse0x2bd2c00();
   input += synapse0x2e26d20();
   input += synapse0x2e26d60();
   input += synapse0x2e26da0();
   input += synapse0x2e26de0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e26510() {
   double input = input0x2e26510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e26e20() {
   double input = -1.75639;
   input += synapse0x2e27160();
   input += synapse0x2e271a0();
   input += synapse0x2e271e0();
   input += synapse0x2e27220();
   input += synapse0x2e27260();
   input += synapse0x2e272a0();
   input += synapse0x2e272e0();
   input += synapse0x2e27320();
   input += synapse0x2e27360();
   input += synapse0x2e26c10();
   input += synapse0x2e26c50();
   input += synapse0x2e26c90();
   input += synapse0x2e26cd0();
   input += synapse0x2e275b0();
   input += synapse0x2e275f0();
   input += synapse0x2e27630();
   input += synapse0x2e26fb0();
   input += synapse0x2e26ff0();
   input += synapse0x2e27780();
   input += synapse0x2e277c0();
   input += synapse0x2e27800();
   input += synapse0x2e27840();
   input += synapse0x2e27880();
   input += synapse0x2e278c0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e26e20() {
   double input = input0x2e26e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e27900() {
   double input = -0.445755;
   input += synapse0x2e27c40();
   input += synapse0x2e27c80();
   input += synapse0x2e27cc0();
   input += synapse0x2e27d00();
   input += synapse0x2e27d40();
   input += synapse0x2e27d80();
   input += synapse0x2e27dc0();
   input += synapse0x2e27e00();
   input += synapse0x2e27e40();
   input += synapse0x2e27e80();
   input += synapse0x2e27ec0();
   input += synapse0x2e27f00();
   input += synapse0x2e27f40();
   input += synapse0x2e27f80();
   input += synapse0x2e27fc0();
   input += synapse0x2e28000();
   input += synapse0x2e27a90();
   input += synapse0x2e27ad0();
   input += synapse0x2be0a10();
   input += synapse0x2be0a50();
   input += synapse0x2e10540();
   input += synapse0x2e10580();
   input += synapse0x2e105c0();
   input += synapse0x2e213f0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e27900() {
   double input = input0x2e27900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2be1190() {
   double input = -0.1881;
   input += synapse0x2e27550();
   input += synapse0x2e21430();
   input += synapse0x2e21470();
   input += synapse0x2e28150();
   input += synapse0x2e28190();
   input += synapse0x2e281d0();
   input += synapse0x2e28210();
   input += synapse0x2e28250();
   input += synapse0x2e28290();
   input += synapse0x2e282d0();
   input += synapse0x2e28310();
   input += synapse0x2e28350();
   input += synapse0x2e28390();
   input += synapse0x2e283d0();
   input += synapse0x2e28410();
   input += synapse0x2e28450();
   input += synapse0x2e273a0();
   input += synapse0x2e273e0();
   input += synapse0x2e285a0();
   input += synapse0x2e285e0();
   input += synapse0x2e28620();
   input += synapse0x2e28660();
   input += synapse0x2e286a0();
   input += synapse0x2e286e0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2be1190() {
   double input = input0x2be1190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e28720() {
   double input = -1.19628;
   input += synapse0x2e28a60();
   input += synapse0x2e28aa0();
   input += synapse0x2e28ae0();
   input += synapse0x2e28b20();
   input += synapse0x2e28b60();
   input += synapse0x2e28ba0();
   input += synapse0x2e28be0();
   input += synapse0x2e28c20();
   input += synapse0x2e28c60();
   input += synapse0x2e28ca0();
   input += synapse0x2e28ce0();
   input += synapse0x2e28d20();
   input += synapse0x2e28d60();
   input += synapse0x2e28da0();
   input += synapse0x2e28de0();
   input += synapse0x2e28e20();
   input += synapse0x2e288b0();
   input += synapse0x2e288f0();
   input += synapse0x2e28f70();
   input += synapse0x2e28fb0();
   input += synapse0x2e28ff0();
   input += synapse0x2e29030();
   input += synapse0x2e29070();
   input += synapse0x2e290b0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e28720() {
   double input = input0x2e28720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e290f0() {
   double input = 0.279293;
   input += synapse0x2e29430();
   input += synapse0x2e29470();
   input += synapse0x2e294b0();
   input += synapse0x2e294f0();
   input += synapse0x2e29530();
   input += synapse0x2e29570();
   input += synapse0x2e295b0();
   input += synapse0x2e295f0();
   input += synapse0x2e29630();
   input += synapse0x2be0d80();
   input += synapse0x2be0dc0();
   input += synapse0x2be0e00();
   input += synapse0x2be0e40();
   input += synapse0x2be0e80();
   input += synapse0x2be0ec0();
   input += synapse0x2be0f00();
   input += synapse0x2e29280();
   input += synapse0x2e292c0();
   input += synapse0x2be1050();
   input += synapse0x2be1090();
   input += synapse0x2be10d0();
   input += synapse0x2be1110();
   input += synapse0x2be1150();
   input += synapse0x2e29e80();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e290f0() {
   double input = input0x2e290f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e29ec0() {
   double input = -0.0529825;
   input += synapse0x2e2a200();
   input += synapse0x2e2a240();
   input += synapse0x2e2a280();
   input += synapse0x2e2a2c0();
   input += synapse0x2e2a300();
   input += synapse0x2e2a340();
   input += synapse0x2e2a380();
   input += synapse0x2e2a3c0();
   input += synapse0x2e2a400();
   input += synapse0x2e2a440();
   input += synapse0x2e2a480();
   input += synapse0x2e2a4c0();
   input += synapse0x2e2a500();
   input += synapse0x2e2a540();
   input += synapse0x2e2a580();
   input += synapse0x2e2a5c0();
   input += synapse0x2e2a050();
   input += synapse0x2e2a090();
   input += synapse0x2e2a710();
   input += synapse0x2e2a750();
   input += synapse0x2e2a790();
   input += synapse0x2e2a7d0();
   input += synapse0x2e2a810();
   input += synapse0x2e2a850();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e29ec0() {
   double input = input0x2e29ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e2a890() {
   double input = 0.0414692;
   input += synapse0x2e2abd0();
   input += synapse0x2e2ac10();
   input += synapse0x2e2ac50();
   input += synapse0x2e2ac90();
   input += synapse0x2e2acd0();
   input += synapse0x2e2ad10();
   input += synapse0x2e2ad50();
   input += synapse0x2e2ad90();
   input += synapse0x2e2add0();
   input += synapse0x2e2ae10();
   input += synapse0x2e2ae50();
   input += synapse0x2e2ae90();
   input += synapse0x2e2aed0();
   input += synapse0x2e2af10();
   input += synapse0x2e2af50();
   input += synapse0x2e2af90();
   input += synapse0x2e2aa20();
   input += synapse0x2e2aa60();
   input += synapse0x2e2b0e0();
   input += synapse0x2e2b120();
   input += synapse0x2e2b160();
   input += synapse0x2e2b1a0();
   input += synapse0x2e2b1e0();
   input += synapse0x2e2b220();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e2a890() {
   double input = input0x2e2a890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e2b260() {
   double input = 0.891584;
   input += synapse0x2e24d00();
   input += synapse0x2e24d40();
   input += synapse0x2e24d80();
   input += synapse0x2e24dc0();
   input += synapse0x2e2b7b0();
   input += synapse0x2e2b7f0();
   input += synapse0x2e2b830();
   input += synapse0x2e2b870();
   input += synapse0x2e2b8b0();
   input += synapse0x2e2b8f0();
   input += synapse0x2e2b930();
   input += synapse0x2e2b970();
   input += synapse0x2e2b9b0();
   input += synapse0x2e2b9f0();
   input += synapse0x2e2ba30();
   input += synapse0x2e2ba70();
   input += synapse0x2e2b3f0();
   input += synapse0x2e2b430();
   input += synapse0x2e2bbc0();
   input += synapse0x2e2bc00();
   input += synapse0x2e2bc40();
   input += synapse0x2e2bc80();
   input += synapse0x2e2bcc0();
   input += synapse0x2e2bd00();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e2b260() {
   double input = input0x2e2b260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e2bd40() {
   double input = -1.16626;
   input += synapse0x2e2c080();
   input += synapse0x2e2c0c0();
   input += synapse0x2e2c100();
   input += synapse0x2e2c140();
   input += synapse0x2e2c180();
   input += synapse0x2e2c1c0();
   input += synapse0x2e2c200();
   input += synapse0x2e2c240();
   input += synapse0x2e2c280();
   input += synapse0x2e2c2c0();
   input += synapse0x2e2c300();
   input += synapse0x2e2c340();
   input += synapse0x2e2c380();
   input += synapse0x2e2c3c0();
   input += synapse0x2e2c400();
   input += synapse0x2e2c440();
   input += synapse0x2e2bed0();
   input += synapse0x2e2bf10();
   input += synapse0x2e2c590();
   input += synapse0x2e2c5d0();
   input += synapse0x2e2c610();
   input += synapse0x2e2c650();
   input += synapse0x2e2c690();
   input += synapse0x2e2c6d0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e2bd40() {
   double input = input0x2e2bd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e2c710() {
   double input = -1.74898;
   input += synapse0x2e2ca50();
   input += synapse0x2e2ca90();
   input += synapse0x2e2cad0();
   input += synapse0x2e2cb10();
   input += synapse0x2e2cb50();
   input += synapse0x2e2cb90();
   input += synapse0x2e2cbd0();
   input += synapse0x2e2cc10();
   input += synapse0x2e2cc50();
   input += synapse0x2e2cc90();
   input += synapse0x2e2ccd0();
   input += synapse0x2e2cd10();
   input += synapse0x2e2cd50();
   input += synapse0x2e2cd90();
   input += synapse0x2e2cdd0();
   input += synapse0x2e2ce10();
   input += synapse0x2e2c8a0();
   input += synapse0x2e2c8e0();
   input += synapse0x2e29670();
   input += synapse0x2e296b0();
   input += synapse0x2e296f0();
   input += synapse0x2e29730();
   input += synapse0x2e29770();
   input += synapse0x2e297b0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e2c710() {
   double input = input0x2e2c710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e297f0() {
   double input = 0.480419;
   input += synapse0x2e29b30();
   input += synapse0x2e29b70();
   input += synapse0x2e29bb0();
   input += synapse0x2e29bf0();
   input += synapse0x2e29c30();
   input += synapse0x2e29c70();
   input += synapse0x2e29cb0();
   input += synapse0x2e29cf0();
   input += synapse0x2e29d30();
   input += synapse0x2e29d70();
   input += synapse0x2e29db0();
   input += synapse0x2e29df0();
   input += synapse0x2e29e30();
   input += synapse0x2e2df70();
   input += synapse0x2e2dfb0();
   input += synapse0x2e2dff0();
   input += synapse0x2e29980();
   input += synapse0x2e299c0();
   input += synapse0x2e2e140();
   input += synapse0x2e2e180();
   input += synapse0x2e2e1c0();
   input += synapse0x2e2e200();
   input += synapse0x2e2e240();
   input += synapse0x2e2e280();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e297f0() {
   double input = input0x2e297f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e2e2c0() {
   double input = 0.730572;
   input += synapse0x2e2e600();
   input += synapse0x2e2e640();
   input += synapse0x2e2e680();
   input += synapse0x2e2e6c0();
   input += synapse0x2e2e700();
   input += synapse0x2e2e740();
   input += synapse0x2e2e780();
   input += synapse0x2e2e7c0();
   input += synapse0x2e2e800();
   input += synapse0x2e2e840();
   input += synapse0x2e2e880();
   input += synapse0x2e2e8c0();
   input += synapse0x2e2e900();
   input += synapse0x2e2e940();
   input += synapse0x2e2e980();
   input += synapse0x2e2e9c0();
   input += synapse0x2e2e450();
   input += synapse0x2e2e490();
   input += synapse0x2e2eb10();
   input += synapse0x2e2eb50();
   input += synapse0x2e2eb90();
   input += synapse0x2e2ebd0();
   input += synapse0x2e2ec10();
   input += synapse0x2e2ec50();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e2e2c0() {
   double input = input0x2e2e2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e2ec90() {
   double input = 1.78633;
   input += synapse0x2e2efd0();
   input += synapse0x2e2f010();
   input += synapse0x2e2f050();
   input += synapse0x2e2f090();
   input += synapse0x2e2f0d0();
   input += synapse0x2e2f110();
   input += synapse0x2e2f150();
   input += synapse0x2e2f190();
   input += synapse0x2e2f1d0();
   input += synapse0x2e2f210();
   input += synapse0x2e2f250();
   input += synapse0x2e2f290();
   input += synapse0x2e2f2d0();
   input += synapse0x2e2f310();
   input += synapse0x2e2f350();
   input += synapse0x2e2f390();
   input += synapse0x2e2ee20();
   input += synapse0x2e2ee60();
   input += synapse0x2e2f4e0();
   input += synapse0x2e2f520();
   input += synapse0x2e2f560();
   input += synapse0x2e2f5a0();
   input += synapse0x2e2f5e0();
   input += synapse0x2e2f620();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e2ec90() {
   double input = input0x2e2ec90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e2f660() {
   double input = -0.342524;
   input += synapse0x2e2f9a0();
   input += synapse0x2e2f9e0();
   input += synapse0x2e2fa20();
   input += synapse0x2e2fa60();
   input += synapse0x2e2faa0();
   input += synapse0x2e2fae0();
   input += synapse0x2e2fb20();
   input += synapse0x2e2fb60();
   input += synapse0x2e2fba0();
   input += synapse0x2e2fbe0();
   input += synapse0x2e2fc20();
   input += synapse0x2e2fc60();
   input += synapse0x2e2fca0();
   input += synapse0x2e2fce0();
   input += synapse0x2e2fd20();
   input += synapse0x2e2fd60();
   input += synapse0x2e2f7f0();
   input += synapse0x2e2f830();
   input += synapse0x2e2feb0();
   input += synapse0x2e2fef0();
   input += synapse0x2e2ff30();
   input += synapse0x2e2ff70();
   input += synapse0x2e2ffb0();
   input += synapse0x2e2fff0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e2f660() {
   double input = input0x2e2f660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e30030() {
   double input = 0.744087;
   input += synapse0x2e30370();
   input += synapse0x2e216d0();
   input += synapse0x2e21710();
   input += synapse0x2e21a10();
   input += synapse0x2e21a50();
   input += synapse0x2e21d50();
   input += synapse0x2e21d90();
   input += synapse0x2e22090();
   input += synapse0x2e220d0();
   input += synapse0x2e223d0();
   input += synapse0x2e22410();
   input += synapse0x2e22710();
   input += synapse0x2e22750();
   input += synapse0x2e22a50();
   input += synapse0x2e22a90();
   input += synapse0x2e22d90();
   input += synapse0x2e22dd0();
   input += synapse0x2e230d0();
   input += synapse0x2e23110();
   input += synapse0x2e23410();
   input += synapse0x2e23450();
   input += synapse0x2e23750();
   input += synapse0x2e23790();
   input += synapse0x2e23a90();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e30030() {
   double input = input0x2e30030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e31e40() {
   double input = -0.143921;
   input += synapse0x2e23ad0();
   input += synapse0x2e24790();
   input += synapse0x2e247d0();
   input += synapse0x2e301c0();
   input += synapse0x2e30200();
   input += synapse0x2e24ad0();
   input += synapse0x2e24b10();
   input += synapse0x2bd2aa0();
   input += synapse0x2bd2ae0();
   input += synapse0x2e25250();
   input += synapse0x2e25290();
   input += synapse0x2e25590();
   input += synapse0x2e255d0();
   input += synapse0x2e258d0();
   input += synapse0x2e25910();
   input += synapse0x2e25c10();
   input += synapse0x2e25c50();
   input += synapse0x2e25f50();
   input += synapse0x2e25f90();
   input += synapse0x2e26290();
   input += synapse0x2e262d0();
   input += synapse0x2e23dd0();
   input += synapse0x2e23e10();
   input += synapse0x2e320e0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e31e40() {
   double input = input0x2e31e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e32120() {
   double input = -3.14857;
   input += synapse0x2e32460();
   input += synapse0x2e324a0();
   input += synapse0x2e324e0();
   input += synapse0x2e32520();
   input += synapse0x2e32560();
   input += synapse0x2e325a0();
   input += synapse0x2e325e0();
   input += synapse0x2e32620();
   input += synapse0x2e32660();
   input += synapse0x2e326a0();
   input += synapse0x2e326e0();
   input += synapse0x2e32720();
   input += synapse0x2e32760();
   input += synapse0x2e327a0();
   input += synapse0x2e327e0();
   input += synapse0x2e32820();
   input += synapse0x2e322b0();
   input += synapse0x2e322f0();
   input += synapse0x2e32970();
   input += synapse0x2e329b0();
   input += synapse0x2e329f0();
   input += synapse0x2e32a30();
   input += synapse0x2e32a70();
   input += synapse0x2e32ab0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e32120() {
   double input = input0x2e32120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e32af0() {
   double input = 2.35518;
   input += synapse0x2e32e30();
   input += synapse0x2e32e70();
   input += synapse0x2e32eb0();
   input += synapse0x2e32ef0();
   input += synapse0x2e32f30();
   input += synapse0x2e32f70();
   input += synapse0x2e32fb0();
   input += synapse0x2e32ff0();
   input += synapse0x2e33030();
   input += synapse0x2e33070();
   input += synapse0x2e330b0();
   input += synapse0x2e330f0();
   input += synapse0x2e33130();
   input += synapse0x2e33170();
   input += synapse0x2e331b0();
   input += synapse0x2e331f0();
   input += synapse0x2e32c80();
   input += synapse0x2e32cc0();
   input += synapse0x2e33340();
   input += synapse0x2e33380();
   input += synapse0x2e333c0();
   input += synapse0x2e33400();
   input += synapse0x2e33440();
   input += synapse0x2e33480();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e32af0() {
   double input = input0x2e32af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e334c0() {
   double input = 1.47086;
   input += synapse0x2e33800();
   input += synapse0x2e33840();
   input += synapse0x2e33880();
   input += synapse0x2e338c0();
   input += synapse0x2e33900();
   input += synapse0x2e33940();
   input += synapse0x2e33980();
   input += synapse0x2e339c0();
   input += synapse0x2e33a00();
   input += synapse0x2e33a40();
   input += synapse0x2e33a80();
   input += synapse0x2e33ac0();
   input += synapse0x2e33b00();
   input += synapse0x2e33b40();
   input += synapse0x2e33b80();
   input += synapse0x2e33bc0();
   input += synapse0x2e33650();
   input += synapse0x2e33690();
   input += synapse0x2e33d10();
   input += synapse0x2e33d50();
   input += synapse0x2e33d90();
   input += synapse0x2e33dd0();
   input += synapse0x2e33e10();
   input += synapse0x2e33e50();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e334c0() {
   double input = input0x2e334c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e33e90() {
   double input = 1.32387;
   input += synapse0x2e341d0();
   input += synapse0x2e34210();
   input += synapse0x2e34250();
   input += synapse0x2e34290();
   input += synapse0x2e342d0();
   input += synapse0x2e34310();
   input += synapse0x2e34350();
   input += synapse0x2e34390();
   input += synapse0x2e343d0();
   input += synapse0x2e34410();
   input += synapse0x2e34450();
   input += synapse0x2e34490();
   input += synapse0x2e344d0();
   input += synapse0x2e34510();
   input += synapse0x2e34550();
   input += synapse0x2e34590();
   input += synapse0x2e34020();
   input += synapse0x2e34060();
   input += synapse0x2e346e0();
   input += synapse0x2e34720();
   input += synapse0x2e34760();
   input += synapse0x2e347a0();
   input += synapse0x2e347e0();
   input += synapse0x2e34820();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e33e90() {
   double input = input0x2e33e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e34860() {
   double input = 1.63198;
   input += synapse0x2e34ba0();
   input += synapse0x2e34be0();
   input += synapse0x2e34c20();
   input += synapse0x2e34c60();
   input += synapse0x2e34ca0();
   input += synapse0x2e34ce0();
   input += synapse0x2e34d20();
   input += synapse0x2e34d60();
   input += synapse0x2e34da0();
   input += synapse0x2e2cf60();
   input += synapse0x2e2cfa0();
   input += synapse0x2e2cfe0();
   input += synapse0x2e2d020();
   input += synapse0x2e2d060();
   input += synapse0x2e2d0a0();
   input += synapse0x2e2d0e0();
   input += synapse0x2e349f0();
   input += synapse0x2e34a30();
   input += synapse0x2e2d230();
   input += synapse0x2e2d270();
   input += synapse0x2e2d2b0();
   input += synapse0x2e2d2f0();
   input += synapse0x2e2d330();
   input += synapse0x2e2d370();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e34860() {
   double input = input0x2e34860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e2d3b0() {
   double input = 1.08545;
   input += synapse0x2e2d6f0();
   input += synapse0x2e2d730();
   input += synapse0x2e2d770();
   input += synapse0x2e2d7b0();
   input += synapse0x2e2d7f0();
   input += synapse0x2e2d830();
   input += synapse0x2e2d870();
   input += synapse0x2e2d8b0();
   input += synapse0x2e2d8f0();
   input += synapse0x2e2d930();
   input += synapse0x2e2d970();
   input += synapse0x2e2d9b0();
   input += synapse0x2e2d9f0();
   input += synapse0x2e2da30();
   input += synapse0x2e2da70();
   input += synapse0x2e2dab0();
   input += synapse0x2e2d540();
   input += synapse0x2e2d580();
   input += synapse0x2e2dc00();
   input += synapse0x2e2dc40();
   input += synapse0x2e2dc80();
   input += synapse0x2e2dcc0();
   input += synapse0x2e2dd00();
   input += synapse0x2e2dd40();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e2d3b0() {
   double input = input0x2e2d3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e2dd80() {
   double input = 0.845633;
   input += synapse0x2e2df10();
   input += synapse0x2e36fa0();
   input += synapse0x2e36fe0();
   input += synapse0x2e37020();
   input += synapse0x2e37060();
   input += synapse0x2e370a0();
   input += synapse0x2e370e0();
   input += synapse0x2e37120();
   input += synapse0x2e37160();
   input += synapse0x2e371a0();
   input += synapse0x2e371e0();
   input += synapse0x2e37220();
   input += synapse0x2e37260();
   input += synapse0x2e372a0();
   input += synapse0x2e372e0();
   input += synapse0x2e37320();
   input += synapse0x2e36df0();
   input += synapse0x2e36e30();
   input += synapse0x2e37470();
   input += synapse0x2e374b0();
   input += synapse0x2e374f0();
   input += synapse0x2e37530();
   input += synapse0x2e37570();
   input += synapse0x2e375b0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e2dd80() {
   double input = input0x2e2dd80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e375f0() {
   double input = -1.83072;
   input += synapse0x2e37930();
   input += synapse0x2e37970();
   input += synapse0x2e379b0();
   input += synapse0x2e379f0();
   input += synapse0x2e37a30();
   input += synapse0x2e37a70();
   input += synapse0x2e37ab0();
   input += synapse0x2e37af0();
   input += synapse0x2e37b30();
   input += synapse0x2e37b70();
   input += synapse0x2e37bb0();
   input += synapse0x2e37bf0();
   input += synapse0x2e37c30();
   input += synapse0x2e37c70();
   input += synapse0x2e37cb0();
   input += synapse0x2e37cf0();
   input += synapse0x2e37780();
   input += synapse0x2e377c0();
   input += synapse0x2e37e40();
   input += synapse0x2e37e80();
   input += synapse0x2e37ec0();
   input += synapse0x2e37f00();
   input += synapse0x2e37f40();
   input += synapse0x2e37f80();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e375f0() {
   double input = input0x2e375f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e37fc0() {
   double input = -0.0770976;
   input += synapse0x2e38300();
   input += synapse0x2e38340();
   input += synapse0x2e38380();
   input += synapse0x2e383c0();
   input += synapse0x2e38400();
   input += synapse0x2e38440();
   input += synapse0x2e38480();
   input += synapse0x2e384c0();
   input += synapse0x2e38500();
   input += synapse0x2e38540();
   input += synapse0x2e38580();
   input += synapse0x2e385c0();
   input += synapse0x2e38600();
   input += synapse0x2e38640();
   input += synapse0x2e38680();
   input += synapse0x2e386c0();
   input += synapse0x2e38150();
   input += synapse0x2e38190();
   input += synapse0x2e38810();
   input += synapse0x2e38850();
   input += synapse0x2e38890();
   input += synapse0x2e388d0();
   input += synapse0x2e38910();
   input += synapse0x2e38950();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e37fc0() {
   double input = input0x2e37fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e38990() {
   double input = -1.08176;
   input += synapse0x2e38cd0();
   input += synapse0x2e38d10();
   input += synapse0x2e38d50();
   input += synapse0x2e38d90();
   input += synapse0x2e38dd0();
   input += synapse0x2e38e10();
   input += synapse0x2e38e50();
   input += synapse0x2e38e90();
   input += synapse0x2e38ed0();
   input += synapse0x2e38f10();
   input += synapse0x2e38f50();
   input += synapse0x2e38f90();
   input += synapse0x2e38fd0();
   input += synapse0x2e39010();
   input += synapse0x2e39050();
   input += synapse0x2e39090();
   input += synapse0x2e38b20();
   input += synapse0x2e38b60();
   input += synapse0x2e391e0();
   input += synapse0x2e39220();
   input += synapse0x2e39260();
   input += synapse0x2e392a0();
   input += synapse0x2e392e0();
   input += synapse0x2e39320();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e38990() {
   double input = input0x2e38990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e39360() {
   double input = -0.71359;
   input += synapse0x2e396a0();
   input += synapse0x2e396e0();
   input += synapse0x2e39720();
   input += synapse0x2e39760();
   input += synapse0x2e397a0();
   input += synapse0x2e397e0();
   input += synapse0x2e39820();
   input += synapse0x2e39860();
   input += synapse0x2e398a0();
   input += synapse0x2e398e0();
   input += synapse0x2e39920();
   input += synapse0x2e39960();
   input += synapse0x2e399a0();
   input += synapse0x2e399e0();
   input += synapse0x2e39a20();
   input += synapse0x2e39a60();
   input += synapse0x2e394f0();
   input += synapse0x2e39530();
   input += synapse0x2e39bb0();
   input += synapse0x2e39bf0();
   input += synapse0x2e39c30();
   input += synapse0x2e39c70();
   input += synapse0x2e39cb0();
   input += synapse0x2e39cf0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e39360() {
   double input = input0x2e39360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e39d30() {
   double input = 0.280404;
   input += synapse0x2e3a070();
   input += synapse0x2e3a0b0();
   input += synapse0x2e3a0f0();
   input += synapse0x2e3a130();
   input += synapse0x2e3a170();
   input += synapse0x2e3a1b0();
   input += synapse0x2e3a1f0();
   input += synapse0x2e3a230();
   input += synapse0x2e3a270();
   input += synapse0x2e3a2b0();
   input += synapse0x2e3a2f0();
   input += synapse0x2e3a330();
   input += synapse0x2e3a370();
   input += synapse0x2e3a3b0();
   input += synapse0x2e3a3f0();
   input += synapse0x2e3a430();
   input += synapse0x2e39ec0();
   input += synapse0x2e39f00();
   input += synapse0x2e3a580();
   input += synapse0x2e3a5c0();
   input += synapse0x2e3a600();
   input += synapse0x2e3a640();
   input += synapse0x2e3a680();
   input += synapse0x2e3a6c0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e39d30() {
   double input = input0x2e39d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e3a700() {
   double input = 1.23339;
   input += synapse0x2e3aa40();
   input += synapse0x2e3aa80();
   input += synapse0x2e3aac0();
   input += synapse0x2e3ab00();
   input += synapse0x2e3ab40();
   input += synapse0x2e3ab80();
   input += synapse0x2e3abc0();
   input += synapse0x2e3ac00();
   input += synapse0x2e3ac40();
   input += synapse0x2e3ac80();
   input += synapse0x2e3acc0();
   input += synapse0x2e3ad00();
   input += synapse0x2e3ad40();
   input += synapse0x2e3ad80();
   input += synapse0x2e3adc0();
   input += synapse0x2e3ae00();
   input += synapse0x2e3a890();
   input += synapse0x2e3a8d0();
   input += synapse0x2e3af50();
   input += synapse0x2e3af90();
   input += synapse0x2e3afd0();
   input += synapse0x2e3b010();
   input += synapse0x2e3b050();
   input += synapse0x2e3b090();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e3a700() {
   double input = input0x2e3a700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e3b0d0() {
   double input = 1.08845;
   input += synapse0x2e3b410();
   input += synapse0x2e3b450();
   input += synapse0x2e3b490();
   input += synapse0x2e3b4d0();
   input += synapse0x2e3b510();
   input += synapse0x2e3b550();
   input += synapse0x2e3b590();
   input += synapse0x2e3b5d0();
   input += synapse0x2e3b610();
   input += synapse0x2e3b650();
   input += synapse0x2e3b690();
   input += synapse0x2e3b6d0();
   input += synapse0x2e3b710();
   input += synapse0x2e3b750();
   input += synapse0x2e3b790();
   input += synapse0x2e3b7d0();
   input += synapse0x2e3b260();
   input += synapse0x2e3b2a0();
   input += synapse0x2e3b920();
   input += synapse0x2e3b960();
   input += synapse0x2e3b9a0();
   input += synapse0x2e3b9e0();
   input += synapse0x2e3ba20();
   input += synapse0x2e3ba60();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e3b0d0() {
   double input = input0x2e3b0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e3baa0() {
   double input = 0.217829;
   input += synapse0x2e3bde0();
   input += synapse0x2e303b0();
   input += synapse0x2e303f0();
   input += synapse0x2e30430();
   input += synapse0x2e30680();
   input += synapse0x2e306c0();
   input += synapse0x2e30700();
   input += synapse0x2e30950();
   input += synapse0x2e30990();
   input += synapse0x2e30be0();
   input += synapse0x2e30c20();
   input += synapse0x2e30c60();
   input += synapse0x2e30eb0();
   input += synapse0x2e30ef0();
   input += synapse0x2e31140();
   input += synapse0x2e31180();
   input += synapse0x2e3bc30();
   input += synapse0x2e3bc70();
   input += synapse0x2e312d0();
   input += synapse0x2e317e0();
   input += synapse0x2e31820();
   input += synapse0x2e31860();
   input += synapse0x2e31ab0();
   input += synapse0x2e31af0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e3baa0() {
   double input = input0x2e3baa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e31b30() {
   double input = -1.30101;
   input += synapse0x2e313a0();
   input += synapse0x2e313e0();
   input += synapse0x2e31420();
   input += synapse0x2e31460();
   input += synapse0x2e31de0();
   input += synapse0x2e3e130();
   input += synapse0x2e3e170();
   input += synapse0x2e3e1b0();
   input += synapse0x2e3e1f0();
   input += synapse0x2e3e230();
   input += synapse0x2e3e270();
   input += synapse0x2e3e2b0();
   input += synapse0x2e3e2f0();
   input += synapse0x2e3e330();
   input += synapse0x2e3e370();
   input += synapse0x2e3e3b0();
   input += synapse0x2e31cc0();
   input += synapse0x2e31d00();
   input += synapse0x2e3e500();
   input += synapse0x2e3e540();
   input += synapse0x2e3e580();
   input += synapse0x2e3e5c0();
   input += synapse0x2e3e600();
   input += synapse0x2e3e640();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e31b30() {
   double input = input0x2e31b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e3e680() {
   double input = 1.62528;
   input += synapse0x2e3e9c0();
   input += synapse0x2e3ea00();
   input += synapse0x2e3ea40();
   input += synapse0x2e3ea80();
   input += synapse0x2e3eac0();
   input += synapse0x2e3eb00();
   input += synapse0x2e3eb40();
   input += synapse0x2e3eb80();
   input += synapse0x2e3ebc0();
   input += synapse0x2e3ec00();
   input += synapse0x2e3ec40();
   input += synapse0x2e3ec80();
   input += synapse0x2e3ecc0();
   input += synapse0x2e3ed00();
   input += synapse0x2e3ed40();
   input += synapse0x2e3ed80();
   input += synapse0x2e3e810();
   input += synapse0x2e3e850();
   input += synapse0x2e3eed0();
   input += synapse0x2e3ef10();
   input += synapse0x2e3ef50();
   input += synapse0x2e3ef90();
   input += synapse0x2e3efd0();
   input += synapse0x2e3f010();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e3e680() {
   double input = input0x2e3e680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e3f050() {
   double input = 1.61774;
   input += synapse0x2e3f390();
   input += synapse0x2e3f3d0();
   input += synapse0x2e3f410();
   input += synapse0x2e3f450();
   input += synapse0x2e3f490();
   input += synapse0x2e3f4d0();
   input += synapse0x2e3f510();
   input += synapse0x2e3f550();
   input += synapse0x2e3f590();
   input += synapse0x2e3f5d0();
   input += synapse0x2e3f610();
   input += synapse0x2e3f650();
   input += synapse0x2e3f690();
   input += synapse0x2e3f6d0();
   input += synapse0x2e3f710();
   input += synapse0x2e3f750();
   input += synapse0x2e3f1e0();
   input += synapse0x2e3f220();
   input += synapse0x2e3f8a0();
   input += synapse0x2e3f8e0();
   input += synapse0x2e3f920();
   input += synapse0x2e3f960();
   input += synapse0x2e3f9a0();
   input += synapse0x2e3f9e0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e3f050() {
   double input = input0x2e3f050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e3fa20() {
   double input = 0.667149;
   input += synapse0x2e3fd60();
   input += synapse0x2e3fda0();
   input += synapse0x2e3fde0();
   input += synapse0x2e3fe20();
   input += synapse0x2e3fe60();
   input += synapse0x2e3fea0();
   input += synapse0x2e3fee0();
   input += synapse0x2e3ff20();
   input += synapse0x2e3ff60();
   input += synapse0x2e3ffa0();
   input += synapse0x2e3ffe0();
   input += synapse0x2e40020();
   input += synapse0x2e40060();
   input += synapse0x2e400a0();
   input += synapse0x2e400e0();
   input += synapse0x2e40120();
   input += synapse0x2e3fbb0();
   input += synapse0x2e3fbf0();
   input += synapse0x2e40270();
   input += synapse0x2e402b0();
   input += synapse0x2e402f0();
   input += synapse0x2e40330();
   input += synapse0x2e40370();
   input += synapse0x2e403b0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e3fa20() {
   double input = input0x2e3fa20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e403f0() {
   double input = 2.06194;
   input += synapse0x2e40730();
   input += synapse0x2e40770();
   input += synapse0x2e407b0();
   input += synapse0x2e407f0();
   input += synapse0x2e40830();
   input += synapse0x2e40870();
   input += synapse0x2e408b0();
   input += synapse0x2e408f0();
   input += synapse0x2e40930();
   input += synapse0x2e40970();
   input += synapse0x2e409b0();
   input += synapse0x2e409f0();
   input += synapse0x2e40a30();
   input += synapse0x2e40a70();
   input += synapse0x2e40ab0();
   input += synapse0x2e40af0();
   input += synapse0x2e40580();
   input += synapse0x2e405c0();
   input += synapse0x2e40c40();
   input += synapse0x2e40c80();
   input += synapse0x2e40cc0();
   input += synapse0x2e40d00();
   input += synapse0x2e40d40();
   input += synapse0x2e40d80();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e403f0() {
   double input = input0x2e403f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e40dc0() {
   double input = -0.639127;
   input += synapse0x2e41100();
   input += synapse0x2e41140();
   input += synapse0x2e41180();
   input += synapse0x2e411c0();
   input += synapse0x2e41200();
   input += synapse0x2e41240();
   input += synapse0x2e41280();
   input += synapse0x2e412c0();
   input += synapse0x2e41300();
   input += synapse0x2e41340();
   input += synapse0x2e41380();
   input += synapse0x2e413c0();
   input += synapse0x2e41400();
   input += synapse0x2e41440();
   input += synapse0x2e41480();
   input += synapse0x2e414c0();
   input += synapse0x2e40f50();
   input += synapse0x2e40f90();
   input += synapse0x2e41610();
   input += synapse0x2e41650();
   input += synapse0x2e41690();
   input += synapse0x2e416d0();
   input += synapse0x2e41710();
   input += synapse0x2e41750();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e40dc0() {
   double input = input0x2e40dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e41790() {
   double input = 0.00646624;
   input += synapse0x2e41ad0();
   input += synapse0x2e41b10();
   input += synapse0x2e41b50();
   input += synapse0x2e41b90();
   input += synapse0x2e41bd0();
   input += synapse0x2e41c10();
   input += synapse0x2e41c50();
   input += synapse0x2e41c90();
   input += synapse0x2e41cd0();
   input += synapse0x2e41d10();
   input += synapse0x2e41d50();
   input += synapse0x2e41d90();
   input += synapse0x2e41dd0();
   input += synapse0x2e41e10();
   input += synapse0x2e41e50();
   input += synapse0x2e41e90();
   input += synapse0x2e41920();
   input += synapse0x2e41960();
   input += synapse0x2e41fe0();
   input += synapse0x2e42020();
   input += synapse0x2e42060();
   input += synapse0x2e420a0();
   input += synapse0x2e420e0();
   input += synapse0x2e42120();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e41790() {
   double input = input0x2e41790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e42160() {
   double input = -5.87658;
   input += synapse0x2e424a0();
   input += synapse0x2e424e0();
   input += synapse0x2e42520();
   input += synapse0x2e42560();
   input += synapse0x2e425a0();
   input += synapse0x2e425e0();
   input += synapse0x2e42620();
   input += synapse0x2e42660();
   input += synapse0x2e426a0();
   input += synapse0x2e426e0();
   input += synapse0x2e42720();
   input += synapse0x2e42760();
   input += synapse0x2e427a0();
   input += synapse0x2e427e0();
   input += synapse0x2e42820();
   input += synapse0x2e42860();
   input += synapse0x2e422f0();
   input += synapse0x2e42330();
   input += synapse0x2e429b0();
   input += synapse0x2e429f0();
   input += synapse0x2e42a30();
   input += synapse0x2e42a70();
   input += synapse0x2e42ab0();
   input += synapse0x2e42af0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e42160() {
   double input = input0x2e42160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e42b30() {
   double input = 0.312751;
   input += synapse0x2e2b5a0();
   input += synapse0x2e2b5e0();
   input += synapse0x2e2b620();
   input += synapse0x2e2b660();
   input += synapse0x2e2b6a0();
   input += synapse0x2e2b6e0();
   input += synapse0x2e2b720();
   input += synapse0x2e2b760();
   input += synapse0x2e43280();
   input += synapse0x2e432c0();
   input += synapse0x2e43300();
   input += synapse0x2e43340();
   input += synapse0x2e43380();
   input += synapse0x2e433c0();
   input += synapse0x2e43400();
   input += synapse0x2e43440();
   input += synapse0x2e42cc0();
   input += synapse0x2e42d00();
   input += synapse0x2e43590();
   input += synapse0x2e435d0();
   input += synapse0x2e43610();
   input += synapse0x2e43650();
   input += synapse0x2e43690();
   input += synapse0x2e436d0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e42b30() {
   double input = input0x2e42b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e43710() {
   double input = -3.16297;
   input += synapse0x2e43a50();
   input += synapse0x2e43a90();
   input += synapse0x2e43ad0();
   input += synapse0x2e43b10();
   input += synapse0x2e43b50();
   input += synapse0x2e43b90();
   input += synapse0x2e43bd0();
   input += synapse0x2e43c10();
   input += synapse0x2e43c50();
   input += synapse0x2e43c90();
   input += synapse0x2e43cd0();
   input += synapse0x2e43d10();
   input += synapse0x2e43d50();
   input += synapse0x2e43d90();
   input += synapse0x2e43dd0();
   input += synapse0x2e43e10();
   input += synapse0x2e438a0();
   input += synapse0x2e438e0();
   input += synapse0x2e43f60();
   input += synapse0x2e43fa0();
   input += synapse0x2e43fe0();
   input += synapse0x2e44020();
   input += synapse0x2e44060();
   input += synapse0x2e440a0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e43710() {
   double input = input0x2e43710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e440e0() {
   double input = 1.3552;
   input += synapse0x2e44420();
   input += synapse0x2e44460();
   input += synapse0x2e444a0();
   input += synapse0x2e444e0();
   input += synapse0x2e44520();
   input += synapse0x2e44560();
   input += synapse0x2e445a0();
   input += synapse0x2e445e0();
   input += synapse0x2e44620();
   input += synapse0x2e44660();
   input += synapse0x2e446a0();
   input += synapse0x2e446e0();
   input += synapse0x2e44720();
   input += synapse0x2e44760();
   input += synapse0x2e447a0();
   input += synapse0x2e447e0();
   input += synapse0x2e44270();
   input += synapse0x2e442b0();
   input += synapse0x2e34de0();
   input += synapse0x2e34e20();
   input += synapse0x2e34e60();
   input += synapse0x2e34ea0();
   input += synapse0x2e34ee0();
   input += synapse0x2e34f20();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e440e0() {
   double input = input0x2e440e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e34f60() {
   double input = 0.425876;
   input += synapse0x2e352a0();
   input += synapse0x2e352e0();
   input += synapse0x2e35320();
   input += synapse0x2e35360();
   input += synapse0x2e353a0();
   input += synapse0x2e353e0();
   input += synapse0x2e35420();
   input += synapse0x2e35460();
   input += synapse0x2e354a0();
   input += synapse0x2e354e0();
   input += synapse0x2e35520();
   input += synapse0x2e35560();
   input += synapse0x2e355a0();
   input += synapse0x2e355e0();
   input += synapse0x2e35620();
   input += synapse0x2e35660();
   input += synapse0x2e350f0();
   input += synapse0x2e35130();
   input += synapse0x2e357b0();
   input += synapse0x2e357f0();
   input += synapse0x2e35830();
   input += synapse0x2e35870();
   input += synapse0x2e358b0();
   input += synapse0x2e358f0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e34f60() {
   double input = input0x2e34f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e35930() {
   double input = 1.83367;
   input += synapse0x2e35c70();
   input += synapse0x2e35cb0();
   input += synapse0x2e35cf0();
   input += synapse0x2e35d30();
   input += synapse0x2e35d70();
   input += synapse0x2e35db0();
   input += synapse0x2e35df0();
   input += synapse0x2e35e30();
   input += synapse0x2e35e70();
   input += synapse0x2e35eb0();
   input += synapse0x2e35ef0();
   input += synapse0x2e35f30();
   input += synapse0x2e35f70();
   input += synapse0x2e35fb0();
   input += synapse0x2e35ff0();
   input += synapse0x2e36030();
   input += synapse0x2e35ac0();
   input += synapse0x2e35b00();
   input += synapse0x2e36180();
   input += synapse0x2e361c0();
   input += synapse0x2e36200();
   input += synapse0x2e36240();
   input += synapse0x2e36280();
   input += synapse0x2e362c0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e35930() {
   double input = input0x2e35930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e36300() {
   double input = 0.815876;
   input += synapse0x2e36640();
   input += synapse0x2e36680();
   input += synapse0x2e366c0();
   input += synapse0x2e36700();
   input += synapse0x2e36740();
   input += synapse0x2e36780();
   input += synapse0x2e367c0();
   input += synapse0x2e36800();
   input += synapse0x2e36840();
   input += synapse0x2e36880();
   input += synapse0x2e368c0();
   input += synapse0x2e36900();
   input += synapse0x2e36940();
   input += synapse0x2e36980();
   input += synapse0x2e369c0();
   input += synapse0x2e36a00();
   input += synapse0x2e36490();
   input += synapse0x2e364d0();
   input += synapse0x2e36b50();
   input += synapse0x2e36b90();
   input += synapse0x2e36bd0();
   input += synapse0x2e36c10();
   input += synapse0x2e36c50();
   input += synapse0x2e36c90();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e36300() {
   double input = input0x2e36300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e48940() {
   double input = 1.46723;
   input += synapse0x2e48b60();
   input += synapse0x2e48ba0();
   input += synapse0x2e48be0();
   input += synapse0x2e48c20();
   input += synapse0x2e48c60();
   input += synapse0x2e48ca0();
   input += synapse0x2e48ce0();
   input += synapse0x2e48d20();
   input += synapse0x2e48d60();
   input += synapse0x2e48da0();
   input += synapse0x2e48de0();
   input += synapse0x2e48e20();
   input += synapse0x2e48e60();
   input += synapse0x2e48ea0();
   input += synapse0x2e48ee0();
   input += synapse0x2e48f20();
   input += synapse0x2e36cd0();
   input += synapse0x2e36d10();
   input += synapse0x2e49070();
   input += synapse0x2e490b0();
   input += synapse0x2e490f0();
   input += synapse0x2e49130();
   input += synapse0x2e49170();
   input += synapse0x2e491b0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e48940() {
   double input = input0x2e48940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e491f0() {
   double input = -0.600132;
   input += synapse0x2e49530();
   input += synapse0x2e49570();
   input += synapse0x2e495b0();
   input += synapse0x2e495f0();
   input += synapse0x2e49630();
   input += synapse0x2e49670();
   input += synapse0x2e496b0();
   input += synapse0x2e496f0();
   input += synapse0x2e49730();
   input += synapse0x2e49770();
   input += synapse0x2e497b0();
   input += synapse0x2e497f0();
   input += synapse0x2e49830();
   input += synapse0x2e49870();
   input += synapse0x2e498b0();
   input += synapse0x2e498f0();
   input += synapse0x2e49380();
   input += synapse0x2e493c0();
   input += synapse0x2e49a40();
   input += synapse0x2e49a80();
   input += synapse0x2e49ac0();
   input += synapse0x2e49b00();
   input += synapse0x2e49b40();
   input += synapse0x2e49b80();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e491f0() {
   double input = input0x2e491f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e49bc0() {
   double input = -1.30081;
   input += synapse0x2e49f00();
   input += synapse0x2e49f40();
   input += synapse0x2e49f80();
   input += synapse0x2e49fc0();
   input += synapse0x2e4a000();
   input += synapse0x2e4a040();
   input += synapse0x2e4a080();
   input += synapse0x2e4a0c0();
   input += synapse0x2e4a100();
   input += synapse0x2e4a140();
   input += synapse0x2e4a180();
   input += synapse0x2e4a1c0();
   input += synapse0x2e4a200();
   input += synapse0x2e4a240();
   input += synapse0x2e4a280();
   input += synapse0x2e4a2c0();
   input += synapse0x2e49d50();
   input += synapse0x2e49d90();
   input += synapse0x2e4a410();
   input += synapse0x2e4a450();
   input += synapse0x2e4a490();
   input += synapse0x2e4a4d0();
   input += synapse0x2e4a510();
   input += synapse0x2e4a550();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e49bc0() {
   double input = input0x2e49bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e4a590() {
   double input = -0.325933;
   input += synapse0x2e4a8d0();
   input += synapse0x2e4a910();
   input += synapse0x2e4a950();
   input += synapse0x2e4a990();
   input += synapse0x2e4a9d0();
   input += synapse0x2e4aa10();
   input += synapse0x2e4aa50();
   input += synapse0x2e4aa90();
   input += synapse0x2e4aad0();
   input += synapse0x2e4ab10();
   input += synapse0x2e4ab50();
   input += synapse0x2e4ab90();
   input += synapse0x2e4abd0();
   input += synapse0x2e4ac10();
   input += synapse0x2e4ac50();
   input += synapse0x2e4ac90();
   input += synapse0x2e4a720();
   input += synapse0x2e4a760();
   input += synapse0x2e4ade0();
   input += synapse0x2e4ae20();
   input += synapse0x2e4ae60();
   input += synapse0x2e4aea0();
   input += synapse0x2e4aee0();
   input += synapse0x2e4af20();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e4a590() {
   double input = input0x2e4a590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e51790() {
   double input = -0.664889;
   input += synapse0x2e274c0();
   input += synapse0x2e27500();
   input += synapse0x2e289d0();
   input += synapse0x2e28a10();
   input += synapse0x2e293a0();
   input += synapse0x2e293e0();
   input += synapse0x2e2a170();
   input += synapse0x2e2a1b0();
   input += synapse0x2e2ab40();
   input += synapse0x2e2ab80();
   input += synapse0x2e2b510();
   input += synapse0x2e2b550();
   input += synapse0x2e2bff0();
   input += synapse0x2e2c030();
   input += synapse0x2e2c9c0();
   input += synapse0x2e2ca00();
   input += synapse0x2e29aa0();
   input += synapse0x2e29ae0();
   input += synapse0x2e2e570();
   input += synapse0x2e2e5b0();
   input += synapse0x2e2ef40();
   input += synapse0x2e2ef80();
   input += synapse0x2e2f910();
   input += synapse0x2e2f950();
   input += synapse0x2e302e0();
   input += synapse0x2e30320();
   input += synapse0x2e24450();
   input += synapse0x2e24490();
   input += synapse0x2e323d0();
   input += synapse0x2e32410();
   input += synapse0x2e32da0();
   input += synapse0x2e32de0();
   input += synapse0x2e33770();
   input += synapse0x2e337b0();
   input += synapse0x2e34140();
   input += synapse0x2e34180();
   input += synapse0x2e34b10();
   input += synapse0x2e34b50();
   input += synapse0x2e2d660();
   input += synapse0x2e2d6a0();
   input += synapse0x2e36f10();
   input += synapse0x2e36f50();
   input += synapse0x2e378a0();
   input += synapse0x2e378e0();
   input += synapse0x2e38270();
   input += synapse0x2e382b0();
   input += synapse0x2e38c40();
   input += synapse0x2e38c80();
   input += synapse0x2e39610();
   input += synapse0x2e39650();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e51790() {
   double input = input0x2e51790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e51b30() {
   double input = -0.500409;
   input += synapse0x2e3bd50();
   input += synapse0x2e3bd90();
   input += synapse0x2e31310();
   input += synapse0x2e31350();
   input += synapse0x2e3e930();
   input += synapse0x2e3e970();
   input += synapse0x2e3f300();
   input += synapse0x2e3f340();
   input += synapse0x2e3fcd0();
   input += synapse0x2e3fd10();
   input += synapse0x2e406a0();
   input += synapse0x2e406e0();
   input += synapse0x2e41070();
   input += synapse0x2e410b0();
   input += synapse0x2e41a40();
   input += synapse0x2e41a80();
   input += synapse0x2e42410();
   input += synapse0x2e42450();
   input += synapse0x2e42de0();
   input += synapse0x2e42e20();
   input += synapse0x2e439c0();
   input += synapse0x2e43a00();
   input += synapse0x2e44390();
   input += synapse0x2e443d0();
   input += synapse0x2e35210();
   input += synapse0x2e35250();
   input += synapse0x2e35be0();
   input += synapse0x2e35c20();
   input += synapse0x2e365b0();
   input += synapse0x2e365f0();
   input += synapse0x2e48ad0();
   input += synapse0x2e48b10();
   input += synapse0x2e494a0();
   input += synapse0x2e494e0();
   input += synapse0x2e49e70();
   input += synapse0x2e49eb0();
   input += synapse0x2e4a840();
   input += synapse0x2e4a880();
   input += synapse0x2e26730();
   input += synapse0x2e26770();
   input += synapse0x2e39fe0();
   input += synapse0x2e3a020();
   input += synapse0x2e4af60();
   input += synapse0x2e4afa0();
   input += synapse0x2e4afe0();
   input += synapse0x2e4b020();
   input += synapse0x2e51ed0();
   input += synapse0x2e51f10();
   input += synapse0x2e51f50();
   input += synapse0x2e51f90();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e51b30() {
   double input = input0x2e51b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e51fd0() {
   double input = -0.308601;
   input += synapse0x2e52310();
   input += synapse0x2e52350();
   input += synapse0x2e52390();
   input += synapse0x2e523d0();
   input += synapse0x2e52410();
   input += synapse0x2e52450();
   input += synapse0x2e52490();
   input += synapse0x2e524d0();
   input += synapse0x2e52510();
   input += synapse0x2e52550();
   input += synapse0x2e52590();
   input += synapse0x2e525d0();
   input += synapse0x2e52610();
   input += synapse0x2e52650();
   input += synapse0x2e52690();
   input += synapse0x2e526d0();
   input += synapse0x2e52160();
   input += synapse0x2e521a0();
   input += synapse0x2e52820();
   input += synapse0x2e52860();
   input += synapse0x2e528a0();
   input += synapse0x2e528e0();
   input += synapse0x2e52920();
   input += synapse0x2e52960();
   input += synapse0x2e529a0();
   input += synapse0x2e529e0();
   input += synapse0x2e52a20();
   input += synapse0x2e52a60();
   input += synapse0x2e52aa0();
   input += synapse0x2e52ae0();
   input += synapse0x2e52b20();
   input += synapse0x2e52b60();
   input += synapse0x2e52710();
   input += synapse0x2e52750();
   input += synapse0x2e52790();
   input += synapse0x2e527d0();
   input += synapse0x2e52db0();
   input += synapse0x2e52df0();
   input += synapse0x2e52e30();
   input += synapse0x2e52e70();
   input += synapse0x2e52eb0();
   input += synapse0x2e52ef0();
   input += synapse0x2e52f30();
   input += synapse0x2e52f70();
   input += synapse0x2e52fb0();
   input += synapse0x2e52ff0();
   input += synapse0x2e53030();
   input += synapse0x2e53070();
   input += synapse0x2e530b0();
   input += synapse0x2e530f0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e51fd0() {
   double input = input0x2e51fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e53130() {
   double input = -0.13709;
   input += synapse0x2e53470();
   input += synapse0x2e534b0();
   input += synapse0x2e534f0();
   input += synapse0x2e53530();
   input += synapse0x2e53570();
   input += synapse0x2e535b0();
   input += synapse0x2e535f0();
   input += synapse0x2e53630();
   input += synapse0x2e53670();
   input += synapse0x2e536b0();
   input += synapse0x2e536f0();
   input += synapse0x2e53730();
   input += synapse0x2e53770();
   input += synapse0x2e537b0();
   input += synapse0x2e537f0();
   input += synapse0x2e53830();
   input += synapse0x2e532c0();
   input += synapse0x2e53300();
   input += synapse0x2e53980();
   input += synapse0x2e539c0();
   input += synapse0x2e53a00();
   input += synapse0x2e53a40();
   input += synapse0x2e53a80();
   input += synapse0x2e53ac0();
   input += synapse0x2e53b00();
   input += synapse0x2e53b40();
   input += synapse0x2e53b80();
   input += synapse0x2e53bc0();
   input += synapse0x2e53c00();
   input += synapse0x2e53c40();
   input += synapse0x2e53c80();
   input += synapse0x2e53cc0();
   input += synapse0x2e53870();
   input += synapse0x2e538b0();
   input += synapse0x2e538f0();
   input += synapse0x2e53930();
   input += synapse0x2e53f10();
   input += synapse0x2e53f50();
   input += synapse0x2e53f90();
   input += synapse0x2e53fd0();
   input += synapse0x2e54010();
   input += synapse0x2e54050();
   input += synapse0x2e54090();
   input += synapse0x2e540d0();
   input += synapse0x2e54110();
   input += synapse0x2e54150();
   input += synapse0x2e54190();
   input += synapse0x2e541d0();
   input += synapse0x2e54210();
   input += synapse0x2e54250();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e53130() {
   double input = input0x2e53130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e54290() {
   double input = -0.647748;
   input += synapse0x2e545d0();
   input += synapse0x2e54610();
   input += synapse0x2e54650();
   input += synapse0x2e54690();
   input += synapse0x2e546d0();
   input += synapse0x2e54710();
   input += synapse0x2e54750();
   input += synapse0x2e54790();
   input += synapse0x2e547d0();
   input += synapse0x2e54810();
   input += synapse0x2e54850();
   input += synapse0x2e54890();
   input += synapse0x2e548d0();
   input += synapse0x2e54910();
   input += synapse0x2e54950();
   input += synapse0x2e54990();
   input += synapse0x2e54420();
   input += synapse0x2e54460();
   input += synapse0x2e54ae0();
   input += synapse0x2e54b20();
   input += synapse0x2e54b60();
   input += synapse0x2e54ba0();
   input += synapse0x2e54be0();
   input += synapse0x2e54c20();
   input += synapse0x2e54c60();
   input += synapse0x2e54ca0();
   input += synapse0x2e54ce0();
   input += synapse0x2e54d20();
   input += synapse0x2e54d60();
   input += synapse0x2e54da0();
   input += synapse0x2e54de0();
   input += synapse0x2e54e20();
   input += synapse0x2e549d0();
   input += synapse0x2e54a10();
   input += synapse0x2e54a50();
   input += synapse0x2e54a90();
   input += synapse0x2e55070();
   input += synapse0x2e550b0();
   input += synapse0x2e550f0();
   input += synapse0x2e55130();
   input += synapse0x2e55170();
   input += synapse0x2e551b0();
   input += synapse0x2e551f0();
   input += synapse0x2e55230();
   input += synapse0x2e55270();
   input += synapse0x2e552b0();
   input += synapse0x2e552f0();
   input += synapse0x2e55330();
   input += synapse0x2e55370();
   input += synapse0x2e553b0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e54290() {
   double input = input0x2e54290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsR::input0x2e553f0() {
   double input = 13.443;
   input += synapse0x2e264d0();
   input += synapse0x2e55610();
   input += synapse0x2e55650();
   input += synapse0x2e55690();
   input += synapse0x2e556d0();
   return input;
}

double NNfunction_ss_cLsR::neuron0x2e553f0() {
   double input = input0x2e553f0();
   return (input * 1)+0;
}

double NNfunction_ss_cLsR::synapse0x2be1320() {
   return (neuron0x2e214b0()*-0.102502);
}

double NNfunction_ss_cLsR::synapse0x2e21370() {
   return (neuron0x2e217f0()*-0.132266);
}

double NNfunction_ss_cLsR::synapse0x2e213b0() {
   return (neuron0x2e21b30()*0.0845878);
}

double NNfunction_ss_cLsR::synapse0x2e267c0() {
   return (neuron0x2e21e70()*1.57171);
}

double NNfunction_ss_cLsR::synapse0x2e26800() {
   return (neuron0x2e221b0()*-0.0123384);
}

double NNfunction_ss_cLsR::synapse0x2e26840() {
   return (neuron0x2e224f0()*0.00180248);
}

double NNfunction_ss_cLsR::synapse0x2e26880() {
   return (neuron0x2e22830()*0.0551794);
}

double NNfunction_ss_cLsR::synapse0x2e268c0() {
   return (neuron0x2e22b70()*-0.0553269);
}

double NNfunction_ss_cLsR::synapse0x2e26900() {
   return (neuron0x2e22eb0()*-0.0469021);
}

double NNfunction_ss_cLsR::synapse0x2e26940() {
   return (neuron0x2e231f0()*-0.0247046);
}

double NNfunction_ss_cLsR::synapse0x2e26980() {
   return (neuron0x2e23530()*0.0273557);
}

double NNfunction_ss_cLsR::synapse0x2e269c0() {
   return (neuron0x2e23870()*-0.10685);
}

double NNfunction_ss_cLsR::synapse0x2e26a00() {
   return (neuron0x2e23bb0()*0.715878);
}

double NNfunction_ss_cLsR::synapse0x2e26a40() {
   return (neuron0x2e23ef0()*0.0460491);
}

double NNfunction_ss_cLsR::synapse0x2e26a80() {
   return (neuron0x2e24230()*-0.0845187);
}

double NNfunction_ss_cLsR::synapse0x2e26ac0() {
   return (neuron0x2e24570()*-0.0813616);
}

double NNfunction_ss_cLsR::synapse0x2e212e0() {
   return (neuron0x2e248b0()*0.0779305);
}

double NNfunction_ss_cLsR::synapse0x2e21320() {
   return (neuron0x2e24e10()*0.021619);
}

double NNfunction_ss_cLsR::synapse0x2bd2bc0() {
   return (neuron0x2e25030()*0.689389);
}

double NNfunction_ss_cLsR::synapse0x2bd2c00() {
   return (neuron0x2e25370()*-0.024886);
}

double NNfunction_ss_cLsR::synapse0x2e26d20() {
   return (neuron0x2e256b0()*0.0112867);
}

double NNfunction_ss_cLsR::synapse0x2e26d60() {
   return (neuron0x2e259f0()*-0.0201696);
}

double NNfunction_ss_cLsR::synapse0x2e26da0() {
   return (neuron0x2e25d30()*0.00121497);
}

double NNfunction_ss_cLsR::synapse0x2e26de0() {
   return (neuron0x2e26070()*-0.0325348);
}

double NNfunction_ss_cLsR::synapse0x2e27160() {
   return (neuron0x2e214b0()*0.000738761);
}

double NNfunction_ss_cLsR::synapse0x2e271a0() {
   return (neuron0x2e217f0()*-0.059015);
}

double NNfunction_ss_cLsR::synapse0x2e271e0() {
   return (neuron0x2e21b30()*0.574141);
}

double NNfunction_ss_cLsR::synapse0x2e27220() {
   return (neuron0x2e21e70()*-1.45912);
}

double NNfunction_ss_cLsR::synapse0x2e27260() {
   return (neuron0x2e221b0()*-0.00936208);
}

double NNfunction_ss_cLsR::synapse0x2e272a0() {
   return (neuron0x2e224f0()*0.0402241);
}

double NNfunction_ss_cLsR::synapse0x2e272e0() {
   return (neuron0x2e22830()*0.0453438);
}

double NNfunction_ss_cLsR::synapse0x2e27320() {
   return (neuron0x2e22b70()*-0.0663076);
}

double NNfunction_ss_cLsR::synapse0x2e27360() {
   return (neuron0x2e22eb0()*0.0186279);
}

double NNfunction_ss_cLsR::synapse0x2e26c10() {
   return (neuron0x2e231f0()*-0.0338402);
}

double NNfunction_ss_cLsR::synapse0x2e26c50() {
   return (neuron0x2e23530()*0.0354438);
}

double NNfunction_ss_cLsR::synapse0x2e26c90() {
   return (neuron0x2e23870()*0.0758681);
}

double NNfunction_ss_cLsR::synapse0x2e26cd0() {
   return (neuron0x2e23bb0()*-0.65044);
}

double NNfunction_ss_cLsR::synapse0x2e275b0() {
   return (neuron0x2e23ef0()*-0.0749405);
}

double NNfunction_ss_cLsR::synapse0x2e275f0() {
   return (neuron0x2e24230()*0.0166282);
}

double NNfunction_ss_cLsR::synapse0x2e27630() {
   return (neuron0x2e24570()*0.0272086);
}

double NNfunction_ss_cLsR::synapse0x2e26fb0() {
   return (neuron0x2e248b0()*0.02024);
}

double NNfunction_ss_cLsR::synapse0x2e26ff0() {
   return (neuron0x2e24e10()*0.0491617);
}

double NNfunction_ss_cLsR::synapse0x2e27780() {
   return (neuron0x2e25030()*-0.504848);
}

double NNfunction_ss_cLsR::synapse0x2e277c0() {
   return (neuron0x2e25370()*-0.0313399);
}

double NNfunction_ss_cLsR::synapse0x2e27800() {
   return (neuron0x2e256b0()*0.0128332);
}

double NNfunction_ss_cLsR::synapse0x2e27840() {
   return (neuron0x2e259f0()*0.0172496);
}

double NNfunction_ss_cLsR::synapse0x2e27880() {
   return (neuron0x2e25d30()*0.0250804);
}

double NNfunction_ss_cLsR::synapse0x2e278c0() {
   return (neuron0x2e26070()*-0.0402397);
}

double NNfunction_ss_cLsR::synapse0x2e27c40() {
   return (neuron0x2e214b0()*0.230495);
}

double NNfunction_ss_cLsR::synapse0x2e27c80() {
   return (neuron0x2e217f0()*0.454913);
}

double NNfunction_ss_cLsR::synapse0x2e27cc0() {
   return (neuron0x2e21b30()*-0.0400564);
}

double NNfunction_ss_cLsR::synapse0x2e27d00() {
   return (neuron0x2e21e70()*0.413963);
}

double NNfunction_ss_cLsR::synapse0x2e27d40() {
   return (neuron0x2e221b0()*-0.335678);
}

double NNfunction_ss_cLsR::synapse0x2e27d80() {
   return (neuron0x2e224f0()*-0.461691);
}

double NNfunction_ss_cLsR::synapse0x2e27dc0() {
   return (neuron0x2e22830()*0.926936);
}

double NNfunction_ss_cLsR::synapse0x2e27e00() {
   return (neuron0x2e22b70()*-0.184006);
}

double NNfunction_ss_cLsR::synapse0x2e27e40() {
   return (neuron0x2e22eb0()*-0.093814);
}

double NNfunction_ss_cLsR::synapse0x2e27e80() {
   return (neuron0x2e231f0()*0.325889);
}

double NNfunction_ss_cLsR::synapse0x2e27ec0() {
   return (neuron0x2e23530()*0.581342);
}

double NNfunction_ss_cLsR::synapse0x2e27f00() {
   return (neuron0x2e23870()*0.574923);
}

double NNfunction_ss_cLsR::synapse0x2e27f40() {
   return (neuron0x2e23bb0()*0.0490347);
}

double NNfunction_ss_cLsR::synapse0x2e27f80() {
   return (neuron0x2e23ef0()*-0.332509);
}

double NNfunction_ss_cLsR::synapse0x2e27fc0() {
   return (neuron0x2e24230()*-0.111829);
}

double NNfunction_ss_cLsR::synapse0x2e28000() {
   return (neuron0x2e24570()*-1.02103);
}

double NNfunction_ss_cLsR::synapse0x2e27a90() {
   return (neuron0x2e248b0()*-0.155652);
}

double NNfunction_ss_cLsR::synapse0x2e27ad0() {
   return (neuron0x2e24e10()*0.662334);
}

double NNfunction_ss_cLsR::synapse0x2be0a10() {
   return (neuron0x2e25030()*-0.366747);
}

double NNfunction_ss_cLsR::synapse0x2be0a50() {
   return (neuron0x2e25370()*-0.24103);
}

double NNfunction_ss_cLsR::synapse0x2e10540() {
   return (neuron0x2e256b0()*-0.463512);
}

double NNfunction_ss_cLsR::synapse0x2e10580() {
   return (neuron0x2e259f0()*0.0764603);
}

double NNfunction_ss_cLsR::synapse0x2e105c0() {
   return (neuron0x2e25d30()*-0.0700216);
}

double NNfunction_ss_cLsR::synapse0x2e213f0() {
   return (neuron0x2e26070()*-0.387716);
}

double NNfunction_ss_cLsR::synapse0x2e27550() {
   return (neuron0x2e214b0()*-0.577096);
}

double NNfunction_ss_cLsR::synapse0x2e21430() {
   return (neuron0x2e217f0()*0.584311);
}

double NNfunction_ss_cLsR::synapse0x2e21470() {
   return (neuron0x2e21b30()*-0.0695081);
}

double NNfunction_ss_cLsR::synapse0x2e28150() {
   return (neuron0x2e21e70()*-0.88323);
}

double NNfunction_ss_cLsR::synapse0x2e28190() {
   return (neuron0x2e221b0()*-0.146388);
}

double NNfunction_ss_cLsR::synapse0x2e281d0() {
   return (neuron0x2e224f0()*-0.290558);
}

double NNfunction_ss_cLsR::synapse0x2e28210() {
   return (neuron0x2e22830()*-0.0888986);
}

double NNfunction_ss_cLsR::synapse0x2e28250() {
   return (neuron0x2e22b70()*0.0829434);
}

double NNfunction_ss_cLsR::synapse0x2e28290() {
   return (neuron0x2e22eb0()*0.661594);
}

double NNfunction_ss_cLsR::synapse0x2e282d0() {
   return (neuron0x2e231f0()*0.50342);
}

double NNfunction_ss_cLsR::synapse0x2e28310() {
   return (neuron0x2e23530()*0.38556);
}

double NNfunction_ss_cLsR::synapse0x2e28350() {
   return (neuron0x2e23870()*-0.711656);
}

double NNfunction_ss_cLsR::synapse0x2e28390() {
   return (neuron0x2e23bb0()*-0.21979);
}

double NNfunction_ss_cLsR::synapse0x2e283d0() {
   return (neuron0x2e23ef0()*-0.872854);
}

double NNfunction_ss_cLsR::synapse0x2e28410() {
   return (neuron0x2e24230()*0.0319066);
}

double NNfunction_ss_cLsR::synapse0x2e28450() {
   return (neuron0x2e24570()*-0.384312);
}

double NNfunction_ss_cLsR::synapse0x2e273a0() {
   return (neuron0x2e248b0()*-0.279667);
}

double NNfunction_ss_cLsR::synapse0x2e273e0() {
   return (neuron0x2e24e10()*0.135078);
}

double NNfunction_ss_cLsR::synapse0x2e285a0() {
   return (neuron0x2e25030()*0.177814);
}

double NNfunction_ss_cLsR::synapse0x2e285e0() {
   return (neuron0x2e25370()*0.0701581);
}

double NNfunction_ss_cLsR::synapse0x2e28620() {
   return (neuron0x2e256b0()*-0.274239);
}

double NNfunction_ss_cLsR::synapse0x2e28660() {
   return (neuron0x2e259f0()*0.0107505);
}

double NNfunction_ss_cLsR::synapse0x2e286a0() {
   return (neuron0x2e25d30()*0.196319);
}

double NNfunction_ss_cLsR::synapse0x2e286e0() {
   return (neuron0x2e26070()*0.366942);
}

double NNfunction_ss_cLsR::synapse0x2e28a60() {
   return (neuron0x2e214b0()*0.0441838);
}

double NNfunction_ss_cLsR::synapse0x2e28aa0() {
   return (neuron0x2e217f0()*0.0151789);
}

double NNfunction_ss_cLsR::synapse0x2e28ae0() {
   return (neuron0x2e21b30()*0.00723239);
}

double NNfunction_ss_cLsR::synapse0x2e28b20() {
   return (neuron0x2e21e70()*0.169795);
}

double NNfunction_ss_cLsR::synapse0x2e28b60() {
   return (neuron0x2e221b0()*-0.00937096);
}

double NNfunction_ss_cLsR::synapse0x2e28ba0() {
   return (neuron0x2e224f0()*-0.0135421);
}

double NNfunction_ss_cLsR::synapse0x2e28be0() {
   return (neuron0x2e22830()*-0.00120893);
}

double NNfunction_ss_cLsR::synapse0x2e28c20() {
   return (neuron0x2e22b70()*-0.000872221);
}

double NNfunction_ss_cLsR::synapse0x2e28c60() {
   return (neuron0x2e22eb0()*0.0405979);
}

double NNfunction_ss_cLsR::synapse0x2e28ca0() {
   return (neuron0x2e231f0()*-0.0177385);
}

double NNfunction_ss_cLsR::synapse0x2e28ce0() {
   return (neuron0x2e23530()*-0.0209658);
}

double NNfunction_ss_cLsR::synapse0x2e28d20() {
   return (neuron0x2e23870()*0.0227997);
}

double NNfunction_ss_cLsR::synapse0x2e28d60() {
   return (neuron0x2e23bb0()*-0.80514);
}

double NNfunction_ss_cLsR::synapse0x2e28da0() {
   return (neuron0x2e23ef0()*0.010448);
}

double NNfunction_ss_cLsR::synapse0x2e28de0() {
   return (neuron0x2e24230()*0.0320787);
}

double NNfunction_ss_cLsR::synapse0x2e28e20() {
   return (neuron0x2e24570()*-0.0130331);
}

double NNfunction_ss_cLsR::synapse0x2e288b0() {
   return (neuron0x2e248b0()*-0.019053);
}

double NNfunction_ss_cLsR::synapse0x2e288f0() {
   return (neuron0x2e24e10()*0.0155529);
}

double NNfunction_ss_cLsR::synapse0x2e28f70() {
   return (neuron0x2e25030()*1.12217);
}

double NNfunction_ss_cLsR::synapse0x2e28fb0() {
   return (neuron0x2e25370()*-0.000669922);
}

double NNfunction_ss_cLsR::synapse0x2e28ff0() {
   return (neuron0x2e256b0()*-0.0199215);
}

double NNfunction_ss_cLsR::synapse0x2e29030() {
   return (neuron0x2e259f0()*0.00616129);
}

double NNfunction_ss_cLsR::synapse0x2e29070() {
   return (neuron0x2e25d30()*-0.00597358);
}

double NNfunction_ss_cLsR::synapse0x2e290b0() {
   return (neuron0x2e26070()*-0.0321919);
}

double NNfunction_ss_cLsR::synapse0x2e29430() {
   return (neuron0x2e214b0()*0.0980618);
}

double NNfunction_ss_cLsR::synapse0x2e29470() {
   return (neuron0x2e217f0()*0.294083);
}

double NNfunction_ss_cLsR::synapse0x2e294b0() {
   return (neuron0x2e21b30()*0.37043);
}

double NNfunction_ss_cLsR::synapse0x2e294f0() {
   return (neuron0x2e21e70()*-0.773092);
}

double NNfunction_ss_cLsR::synapse0x2e29530() {
   return (neuron0x2e221b0()*-0.58742);
}

double NNfunction_ss_cLsR::synapse0x2e29570() {
   return (neuron0x2e224f0()*-0.288236);
}

double NNfunction_ss_cLsR::synapse0x2e295b0() {
   return (neuron0x2e22830()*-0.150205);
}

double NNfunction_ss_cLsR::synapse0x2e295f0() {
   return (neuron0x2e22b70()*-0.314043);
}

double NNfunction_ss_cLsR::synapse0x2e29630() {
   return (neuron0x2e22eb0()*-0.474912);
}

double NNfunction_ss_cLsR::synapse0x2be0d80() {
   return (neuron0x2e231f0()*-0.037975);
}

double NNfunction_ss_cLsR::synapse0x2be0dc0() {
   return (neuron0x2e23530()*-0.13393);
}

double NNfunction_ss_cLsR::synapse0x2be0e00() {
   return (neuron0x2e23870()*-0.59362);
}

double NNfunction_ss_cLsR::synapse0x2be0e40() {
   return (neuron0x2e23bb0()*-0.0285452);
}

double NNfunction_ss_cLsR::synapse0x2be0e80() {
   return (neuron0x2e23ef0()*0.292807);
}

double NNfunction_ss_cLsR::synapse0x2be0ec0() {
   return (neuron0x2e24230()*-0.191196);
}

double NNfunction_ss_cLsR::synapse0x2be0f00() {
   return (neuron0x2e24570()*-0.0258133);
}

double NNfunction_ss_cLsR::synapse0x2e29280() {
   return (neuron0x2e248b0()*-0.393232);
}

double NNfunction_ss_cLsR::synapse0x2e292c0() {
   return (neuron0x2e24e10()*-0.324085);
}

double NNfunction_ss_cLsR::synapse0x2be1050() {
   return (neuron0x2e25030()*-0.273123);
}

double NNfunction_ss_cLsR::synapse0x2be1090() {
   return (neuron0x2e25370()*0.281613);
}

double NNfunction_ss_cLsR::synapse0x2be10d0() {
   return (neuron0x2e256b0()*0.421125);
}

double NNfunction_ss_cLsR::synapse0x2be1110() {
   return (neuron0x2e259f0()*0.613006);
}

double NNfunction_ss_cLsR::synapse0x2be1150() {
   return (neuron0x2e25d30()*-0.122293);
}

double NNfunction_ss_cLsR::synapse0x2e29e80() {
   return (neuron0x2e26070()*-0.129339);
}

double NNfunction_ss_cLsR::synapse0x2e2a200() {
   return (neuron0x2e214b0()*-0.110227);
}

double NNfunction_ss_cLsR::synapse0x2e2a240() {
   return (neuron0x2e217f0()*-0.247743);
}

double NNfunction_ss_cLsR::synapse0x2e2a280() {
   return (neuron0x2e21b30()*0.348388);
}

double NNfunction_ss_cLsR::synapse0x2e2a2c0() {
   return (neuron0x2e21e70()*-0.779008);
}

double NNfunction_ss_cLsR::synapse0x2e2a300() {
   return (neuron0x2e221b0()*-0.110601);
}

double NNfunction_ss_cLsR::synapse0x2e2a340() {
   return (neuron0x2e224f0()*0.250174);
}

double NNfunction_ss_cLsR::synapse0x2e2a380() {
   return (neuron0x2e22830()*0.289579);
}

double NNfunction_ss_cLsR::synapse0x2e2a3c0() {
   return (neuron0x2e22b70()*0.0272022);
}

double NNfunction_ss_cLsR::synapse0x2e2a400() {
   return (neuron0x2e22eb0()*-0.0221927);
}

double NNfunction_ss_cLsR::synapse0x2e2a440() {
   return (neuron0x2e231f0()*-0.051109);
}

double NNfunction_ss_cLsR::synapse0x2e2a480() {
   return (neuron0x2e23530()*-0.0492637);
}

double NNfunction_ss_cLsR::synapse0x2e2a4c0() {
   return (neuron0x2e23870()*-0.0605577);
}

double NNfunction_ss_cLsR::synapse0x2e2a500() {
   return (neuron0x2e23bb0()*0.545911);
}

double NNfunction_ss_cLsR::synapse0x2e2a540() {
   return (neuron0x2e23ef0()*0.287794);
}

double NNfunction_ss_cLsR::synapse0x2e2a580() {
   return (neuron0x2e24230()*-0.159738);
}

double NNfunction_ss_cLsR::synapse0x2e2a5c0() {
   return (neuron0x2e24570()*0.0614079);
}

double NNfunction_ss_cLsR::synapse0x2e2a050() {
   return (neuron0x2e248b0()*-0.149253);
}

double NNfunction_ss_cLsR::synapse0x2e2a090() {
   return (neuron0x2e24e10()*-0.157604);
}

double NNfunction_ss_cLsR::synapse0x2e2a710() {
   return (neuron0x2e25030()*0.282579);
}

double NNfunction_ss_cLsR::synapse0x2e2a750() {
   return (neuron0x2e25370()*-0.173684);
}

double NNfunction_ss_cLsR::synapse0x2e2a790() {
   return (neuron0x2e256b0()*-0.121884);
}

double NNfunction_ss_cLsR::synapse0x2e2a7d0() {
   return (neuron0x2e259f0()*0.163117);
}

double NNfunction_ss_cLsR::synapse0x2e2a810() {
   return (neuron0x2e25d30()*0.150923);
}

double NNfunction_ss_cLsR::synapse0x2e2a850() {
   return (neuron0x2e26070()*0.185717);
}

double NNfunction_ss_cLsR::synapse0x2e2abd0() {
   return (neuron0x2e214b0()*-0.452625);
}

double NNfunction_ss_cLsR::synapse0x2e2ac10() {
   return (neuron0x2e217f0()*-0.688271);
}

double NNfunction_ss_cLsR::synapse0x2e2ac50() {
   return (neuron0x2e21b30()*0.465276);
}

double NNfunction_ss_cLsR::synapse0x2e2ac90() {
   return (neuron0x2e21e70()*-0.410024);
}

double NNfunction_ss_cLsR::synapse0x2e2acd0() {
   return (neuron0x2e221b0()*-0.265721);
}

double NNfunction_ss_cLsR::synapse0x2e2ad10() {
   return (neuron0x2e224f0()*-0.911454);
}

double NNfunction_ss_cLsR::synapse0x2e2ad50() {
   return (neuron0x2e22830()*0.364078);
}

double NNfunction_ss_cLsR::synapse0x2e2ad90() {
   return (neuron0x2e22b70()*0.396521);
}

double NNfunction_ss_cLsR::synapse0x2e2add0() {
   return (neuron0x2e22eb0()*1.01835);
}

double NNfunction_ss_cLsR::synapse0x2e2ae10() {
   return (neuron0x2e231f0()*-0.679796);
}

double NNfunction_ss_cLsR::synapse0x2e2ae50() {
   return (neuron0x2e23530()*1.89575);
}

double NNfunction_ss_cLsR::synapse0x2e2ae90() {
   return (neuron0x2e23870()*-1.16777);
}

double NNfunction_ss_cLsR::synapse0x2e2aed0() {
   return (neuron0x2e23bb0()*-0.377223);
}

double NNfunction_ss_cLsR::synapse0x2e2af10() {
   return (neuron0x2e23ef0()*-0.275384);
}

double NNfunction_ss_cLsR::synapse0x2e2af50() {
   return (neuron0x2e24230()*0.533536);
}

double NNfunction_ss_cLsR::synapse0x2e2af90() {
   return (neuron0x2e24570()*0.444158);
}

double NNfunction_ss_cLsR::synapse0x2e2aa20() {
   return (neuron0x2e248b0()*-0.324156);
}

double NNfunction_ss_cLsR::synapse0x2e2aa60() {
   return (neuron0x2e24e10()*-1.34481);
}

double NNfunction_ss_cLsR::synapse0x2e2b0e0() {
   return (neuron0x2e25030()*-0.328553);
}

double NNfunction_ss_cLsR::synapse0x2e2b120() {
   return (neuron0x2e25370()*0.321308);
}

double NNfunction_ss_cLsR::synapse0x2e2b160() {
   return (neuron0x2e256b0()*0.0711863);
}

double NNfunction_ss_cLsR::synapse0x2e2b1a0() {
   return (neuron0x2e259f0()*0.127059);
}

double NNfunction_ss_cLsR::synapse0x2e2b1e0() {
   return (neuron0x2e25d30()*-0.190649);
}

double NNfunction_ss_cLsR::synapse0x2e2b220() {
   return (neuron0x2e26070()*0.726117);
}

double NNfunction_ss_cLsR::synapse0x2e24d00() {
   return (neuron0x2e214b0()*0.486546);
}

double NNfunction_ss_cLsR::synapse0x2e24d40() {
   return (neuron0x2e217f0()*0.405544);
}

double NNfunction_ss_cLsR::synapse0x2e24d80() {
   return (neuron0x2e21b30()*-0.0515713);
}

double NNfunction_ss_cLsR::synapse0x2e24dc0() {
   return (neuron0x2e21e70()*-1.02728);
}

double NNfunction_ss_cLsR::synapse0x2e2b7b0() {
   return (neuron0x2e221b0()*-0.00370017);
}

double NNfunction_ss_cLsR::synapse0x2e2b7f0() {
   return (neuron0x2e224f0()*-0.125082);
}

double NNfunction_ss_cLsR::synapse0x2e2b830() {
   return (neuron0x2e22830()*0.241266);
}

double NNfunction_ss_cLsR::synapse0x2e2b870() {
   return (neuron0x2e22b70()*-0.140704);
}

double NNfunction_ss_cLsR::synapse0x2e2b8b0() {
   return (neuron0x2e22eb0()*0.529771);
}

double NNfunction_ss_cLsR::synapse0x2e2b8f0() {
   return (neuron0x2e231f0()*-0.00680639);
}

double NNfunction_ss_cLsR::synapse0x2e2b930() {
   return (neuron0x2e23530()*0.211945);
}

double NNfunction_ss_cLsR::synapse0x2e2b970() {
   return (neuron0x2e23870()*-0.49815);
}

double NNfunction_ss_cLsR::synapse0x2e2b9b0() {
   return (neuron0x2e23bb0()*-0.258958);
}

double NNfunction_ss_cLsR::synapse0x2e2b9f0() {
   return (neuron0x2e23ef0()*1.15178);
}

double NNfunction_ss_cLsR::synapse0x2e2ba30() {
   return (neuron0x2e24230()*-1.10951);
}

double NNfunction_ss_cLsR::synapse0x2e2ba70() {
   return (neuron0x2e24570()*-0.209749);
}

double NNfunction_ss_cLsR::synapse0x2e2b3f0() {
   return (neuron0x2e248b0()*1.49235);
}

double NNfunction_ss_cLsR::synapse0x2e2b430() {
   return (neuron0x2e24e10()*0.0173853);
}

double NNfunction_ss_cLsR::synapse0x2e2bbc0() {
   return (neuron0x2e25030()*-0.458488);
}

double NNfunction_ss_cLsR::synapse0x2e2bc00() {
   return (neuron0x2e25370()*0.265637);
}

double NNfunction_ss_cLsR::synapse0x2e2bc40() {
   return (neuron0x2e256b0()*-0.532982);
}

double NNfunction_ss_cLsR::synapse0x2e2bc80() {
   return (neuron0x2e259f0()*0.696981);
}

double NNfunction_ss_cLsR::synapse0x2e2bcc0() {
   return (neuron0x2e25d30()*-0.487704);
}

double NNfunction_ss_cLsR::synapse0x2e2bd00() {
   return (neuron0x2e26070()*0.304612);
}

double NNfunction_ss_cLsR::synapse0x2e2c080() {
   return (neuron0x2e214b0()*-0.0208794);
}

double NNfunction_ss_cLsR::synapse0x2e2c0c0() {
   return (neuron0x2e217f0()*-0.00768367);
}

double NNfunction_ss_cLsR::synapse0x2e2c100() {
   return (neuron0x2e21b30()*-0.0816256);
}

double NNfunction_ss_cLsR::synapse0x2e2c140() {
   return (neuron0x2e21e70()*0.682604);
}

double NNfunction_ss_cLsR::synapse0x2e2c180() {
   return (neuron0x2e221b0()*-0.0231253);
}

double NNfunction_ss_cLsR::synapse0x2e2c1c0() {
   return (neuron0x2e224f0()*-0.00491607);
}

double NNfunction_ss_cLsR::synapse0x2e2c200() {
   return (neuron0x2e22830()*0.0312776);
}

double NNfunction_ss_cLsR::synapse0x2e2c240() {
   return (neuron0x2e22b70()*0.0201916);
}

double NNfunction_ss_cLsR::synapse0x2e2c280() {
   return (neuron0x2e22eb0()*-0.0331035);
}

double NNfunction_ss_cLsR::synapse0x2e2c2c0() {
   return (neuron0x2e231f0()*-0.0238441);
}

double NNfunction_ss_cLsR::synapse0x2e2c300() {
   return (neuron0x2e23530()*-0.00935865);
}

double NNfunction_ss_cLsR::synapse0x2e2c340() {
   return (neuron0x2e23870()*-0.0818888);
}

double NNfunction_ss_cLsR::synapse0x2e2c380() {
   return (neuron0x2e23bb0()*-0.205681);
}

double NNfunction_ss_cLsR::synapse0x2e2c3c0() {
   return (neuron0x2e23ef0()*0.0689266);
}

double NNfunction_ss_cLsR::synapse0x2e2c400() {
   return (neuron0x2e24230()*-0.156602);
}

double NNfunction_ss_cLsR::synapse0x2e2c440() {
   return (neuron0x2e24570()*-0.168199);
}

double NNfunction_ss_cLsR::synapse0x2e2bed0() {
   return (neuron0x2e248b0()*0.0455007);
}

double NNfunction_ss_cLsR::synapse0x2e2bf10() {
   return (neuron0x2e24e10()*-0.045081);
}

double NNfunction_ss_cLsR::synapse0x2e2c590() {
   return (neuron0x2e25030()*-0.122656);
}

double NNfunction_ss_cLsR::synapse0x2e2c5d0() {
   return (neuron0x2e25370()*-0.0145544);
}

double NNfunction_ss_cLsR::synapse0x2e2c610() {
   return (neuron0x2e256b0()*0.00154358);
}

double NNfunction_ss_cLsR::synapse0x2e2c650() {
   return (neuron0x2e259f0()*-0.0234826);
}

double NNfunction_ss_cLsR::synapse0x2e2c690() {
   return (neuron0x2e25d30()*-0.00941312);
}

double NNfunction_ss_cLsR::synapse0x2e2c6d0() {
   return (neuron0x2e26070()*-0.0414244);
}

double NNfunction_ss_cLsR::synapse0x2e2ca50() {
   return (neuron0x2e214b0()*0.0633587);
}

double NNfunction_ss_cLsR::synapse0x2e2ca90() {
   return (neuron0x2e217f0()*-0.178091);
}

double NNfunction_ss_cLsR::synapse0x2e2cad0() {
   return (neuron0x2e21b30()*-1.10984);
}

double NNfunction_ss_cLsR::synapse0x2e2cb10() {
   return (neuron0x2e21e70()*1.67552);
}

double NNfunction_ss_cLsR::synapse0x2e2cb50() {
   return (neuron0x2e221b0()*-0.0390428);
}

double NNfunction_ss_cLsR::synapse0x2e2cb90() {
   return (neuron0x2e224f0()*-0.154933);
}

double NNfunction_ss_cLsR::synapse0x2e2cbd0() {
   return (neuron0x2e22830()*0.208856);
}

double NNfunction_ss_cLsR::synapse0x2e2cc10() {
   return (neuron0x2e22b70()*-0.0676945);
}

double NNfunction_ss_cLsR::synapse0x2e2cc50() {
   return (neuron0x2e22eb0()*0.209015);
}

double NNfunction_ss_cLsR::synapse0x2e2cc90() {
   return (neuron0x2e231f0()*0.172353);
}

double NNfunction_ss_cLsR::synapse0x2e2ccd0() {
   return (neuron0x2e23530()*-0.366365);
}

double NNfunction_ss_cLsR::synapse0x2e2cd10() {
   return (neuron0x2e23870()*0.686057);
}

double NNfunction_ss_cLsR::synapse0x2e2cd50() {
   return (neuron0x2e23bb0()*-1.05691);
}

double NNfunction_ss_cLsR::synapse0x2e2cd90() {
   return (neuron0x2e23ef0()*-0.391066);
}

double NNfunction_ss_cLsR::synapse0x2e2cdd0() {
   return (neuron0x2e24230()*0.418052);
}

double NNfunction_ss_cLsR::synapse0x2e2ce10() {
   return (neuron0x2e24570()*0.14919);
}

double NNfunction_ss_cLsR::synapse0x2e2c8a0() {
   return (neuron0x2e248b0()*-0.209124);
}

double NNfunction_ss_cLsR::synapse0x2e2c8e0() {
   return (neuron0x2e24e10()*0.472154);
}

double NNfunction_ss_cLsR::synapse0x2e29670() {
   return (neuron0x2e25030()*-0.411794);
}

double NNfunction_ss_cLsR::synapse0x2e296b0() {
   return (neuron0x2e25370()*-0.151091);
}

double NNfunction_ss_cLsR::synapse0x2e296f0() {
   return (neuron0x2e256b0()*0.327175);
}

double NNfunction_ss_cLsR::synapse0x2e29730() {
   return (neuron0x2e259f0()*0.1927);
}

double NNfunction_ss_cLsR::synapse0x2e29770() {
   return (neuron0x2e25d30()*0.380446);
}

double NNfunction_ss_cLsR::synapse0x2e297b0() {
   return (neuron0x2e26070()*-0.436039);
}

double NNfunction_ss_cLsR::synapse0x2e29b30() {
   return (neuron0x2e214b0()*0.311955);
}

double NNfunction_ss_cLsR::synapse0x2e29b70() {
   return (neuron0x2e217f0()*-0.220496);
}

double NNfunction_ss_cLsR::synapse0x2e29bb0() {
   return (neuron0x2e21b30()*-0.783243);
}

double NNfunction_ss_cLsR::synapse0x2e29bf0() {
   return (neuron0x2e21e70()*0.220947);
}

double NNfunction_ss_cLsR::synapse0x2e29c30() {
   return (neuron0x2e221b0()*0.21001);
}

double NNfunction_ss_cLsR::synapse0x2e29c70() {
   return (neuron0x2e224f0()*-0.814501);
}

double NNfunction_ss_cLsR::synapse0x2e29cb0() {
   return (neuron0x2e22830()*-0.264934);
}

double NNfunction_ss_cLsR::synapse0x2e29cf0() {
   return (neuron0x2e22b70()*-0.483719);
}

double NNfunction_ss_cLsR::synapse0x2e29d30() {
   return (neuron0x2e22eb0()*1.64601);
}

double NNfunction_ss_cLsR::synapse0x2e29d70() {
   return (neuron0x2e231f0()*-0.317366);
}

double NNfunction_ss_cLsR::synapse0x2e29db0() {
   return (neuron0x2e23530()*-0.157762);
}

double NNfunction_ss_cLsR::synapse0x2e29df0() {
   return (neuron0x2e23870()*-0.503711);
}

double NNfunction_ss_cLsR::synapse0x2e29e30() {
   return (neuron0x2e23bb0()*-0.876806);
}

double NNfunction_ss_cLsR::synapse0x2e2df70() {
   return (neuron0x2e23ef0()*0.0767633);
}

double NNfunction_ss_cLsR::synapse0x2e2dfb0() {
   return (neuron0x2e24230()*0.491176);
}

double NNfunction_ss_cLsR::synapse0x2e2dff0() {
   return (neuron0x2e24570()*1.20008);
}

double NNfunction_ss_cLsR::synapse0x2e29980() {
   return (neuron0x2e248b0()*0.965427);
}

double NNfunction_ss_cLsR::synapse0x2e299c0() {
   return (neuron0x2e24e10()*-1.09668);
}

double NNfunction_ss_cLsR::synapse0x2e2e140() {
   return (neuron0x2e25030()*-0.398482);
}

double NNfunction_ss_cLsR::synapse0x2e2e180() {
   return (neuron0x2e25370()*0.241573);
}

double NNfunction_ss_cLsR::synapse0x2e2e1c0() {
   return (neuron0x2e256b0()*-0.440553);
}

double NNfunction_ss_cLsR::synapse0x2e2e200() {
   return (neuron0x2e259f0()*0.956269);
}

double NNfunction_ss_cLsR::synapse0x2e2e240() {
   return (neuron0x2e25d30()*0.286173);
}

double NNfunction_ss_cLsR::synapse0x2e2e280() {
   return (neuron0x2e26070()*-0.613077);
}

double NNfunction_ss_cLsR::synapse0x2e2e600() {
   return (neuron0x2e214b0()*0.371194);
}

double NNfunction_ss_cLsR::synapse0x2e2e640() {
   return (neuron0x2e217f0()*-0.317063);
}

double NNfunction_ss_cLsR::synapse0x2e2e680() {
   return (neuron0x2e21b30()*0.0585403);
}

double NNfunction_ss_cLsR::synapse0x2e2e6c0() {
   return (neuron0x2e21e70()*-1.67219);
}

double NNfunction_ss_cLsR::synapse0x2e2e700() {
   return (neuron0x2e221b0()*1.27728);
}

double NNfunction_ss_cLsR::synapse0x2e2e740() {
   return (neuron0x2e224f0()*0.401306);
}

double NNfunction_ss_cLsR::synapse0x2e2e780() {
   return (neuron0x2e22830()*-0.718073);
}

double NNfunction_ss_cLsR::synapse0x2e2e7c0() {
   return (neuron0x2e22b70()*0.848854);
}

double NNfunction_ss_cLsR::synapse0x2e2e800() {
   return (neuron0x2e22eb0()*-0.0229291);
}

double NNfunction_ss_cLsR::synapse0x2e2e840() {
   return (neuron0x2e231f0()*-0.83141);
}

double NNfunction_ss_cLsR::synapse0x2e2e880() {
   return (neuron0x2e23530()*0.598658);
}

double NNfunction_ss_cLsR::synapse0x2e2e8c0() {
   return (neuron0x2e23870()*-0.00300415);
}

double NNfunction_ss_cLsR::synapse0x2e2e900() {
   return (neuron0x2e23bb0()*-0.642246);
}

double NNfunction_ss_cLsR::synapse0x2e2e940() {
   return (neuron0x2e23ef0()*0.84426);
}

double NNfunction_ss_cLsR::synapse0x2e2e980() {
   return (neuron0x2e24230()*0.5273);
}

double NNfunction_ss_cLsR::synapse0x2e2e9c0() {
   return (neuron0x2e24570()*-0.171498);
}

double NNfunction_ss_cLsR::synapse0x2e2e450() {
   return (neuron0x2e248b0()*-0.00210261);
}

double NNfunction_ss_cLsR::synapse0x2e2e490() {
   return (neuron0x2e24e10()*-0.575487);
}

double NNfunction_ss_cLsR::synapse0x2e2eb10() {
   return (neuron0x2e25030()*0.0389158);
}

double NNfunction_ss_cLsR::synapse0x2e2eb50() {
   return (neuron0x2e25370()*0.660109);
}

double NNfunction_ss_cLsR::synapse0x2e2eb90() {
   return (neuron0x2e256b0()*1.08333);
}

double NNfunction_ss_cLsR::synapse0x2e2ebd0() {
   return (neuron0x2e259f0()*0.126541);
}

double NNfunction_ss_cLsR::synapse0x2e2ec10() {
   return (neuron0x2e25d30()*0.0589341);
}

double NNfunction_ss_cLsR::synapse0x2e2ec50() {
   return (neuron0x2e26070()*-0.341083);
}

double NNfunction_ss_cLsR::synapse0x2e2efd0() {
   return (neuron0x2e214b0()*-0.0301754);
}

double NNfunction_ss_cLsR::synapse0x2e2f010() {
   return (neuron0x2e217f0()*0.112956);
}

double NNfunction_ss_cLsR::synapse0x2e2f050() {
   return (neuron0x2e21b30()*-0.43742);
}

double NNfunction_ss_cLsR::synapse0x2e2f090() {
   return (neuron0x2e21e70()*-3.13794);
}

double NNfunction_ss_cLsR::synapse0x2e2f0d0() {
   return (neuron0x2e221b0()*0.0560894);
}

double NNfunction_ss_cLsR::synapse0x2e2f110() {
   return (neuron0x2e224f0()*-0.0107247);
}

double NNfunction_ss_cLsR::synapse0x2e2f150() {
   return (neuron0x2e22830()*0.022364);
}

double NNfunction_ss_cLsR::synapse0x2e2f190() {
   return (neuron0x2e22b70()*0.0211513);
}

double NNfunction_ss_cLsR::synapse0x2e2f1d0() {
   return (neuron0x2e22eb0()*-0.00789989);
}

double NNfunction_ss_cLsR::synapse0x2e2f210() {
   return (neuron0x2e231f0()*-0.00726571);
}

double NNfunction_ss_cLsR::synapse0x2e2f250() {
   return (neuron0x2e23530()*0.0338167);
}

double NNfunction_ss_cLsR::synapse0x2e2f290() {
   return (neuron0x2e23870()*0.109417);
}

double NNfunction_ss_cLsR::synapse0x2e2f2d0() {
   return (neuron0x2e23bb0()*0.374893);
}

double NNfunction_ss_cLsR::synapse0x2e2f310() {
   return (neuron0x2e23ef0()*0.0375692);
}

double NNfunction_ss_cLsR::synapse0x2e2f350() {
   return (neuron0x2e24230()*-0.01452);
}

double NNfunction_ss_cLsR::synapse0x2e2f390() {
   return (neuron0x2e24570()*0.0570319);
}

double NNfunction_ss_cLsR::synapse0x2e2ee20() {
   return (neuron0x2e248b0()*-0.0817024);
}

double NNfunction_ss_cLsR::synapse0x2e2ee60() {
   return (neuron0x2e24e10()*0.0434789);
}

double NNfunction_ss_cLsR::synapse0x2e2f4e0() {
   return (neuron0x2e25030()*0.261907);
}

double NNfunction_ss_cLsR::synapse0x2e2f520() {
   return (neuron0x2e25370()*-0.0135406);
}

double NNfunction_ss_cLsR::synapse0x2e2f560() {
   return (neuron0x2e256b0()*0.00628809);
}

double NNfunction_ss_cLsR::synapse0x2e2f5a0() {
   return (neuron0x2e259f0()*0.0428496);
}

double NNfunction_ss_cLsR::synapse0x2e2f5e0() {
   return (neuron0x2e25d30()*-0.0270997);
}

double NNfunction_ss_cLsR::synapse0x2e2f620() {
   return (neuron0x2e26070()*0.0900011);
}

double NNfunction_ss_cLsR::synapse0x2e2f9a0() {
   return (neuron0x2e214b0()*0.603196);
}

double NNfunction_ss_cLsR::synapse0x2e2f9e0() {
   return (neuron0x2e217f0()*0.303934);
}

double NNfunction_ss_cLsR::synapse0x2e2fa20() {
   return (neuron0x2e21b30()*-0.244741);
}

double NNfunction_ss_cLsR::synapse0x2e2fa60() {
   return (neuron0x2e21e70()*1.57864);
}

double NNfunction_ss_cLsR::synapse0x2e2faa0() {
   return (neuron0x2e221b0()*-1.02229);
}

double NNfunction_ss_cLsR::synapse0x2e2fae0() {
   return (neuron0x2e224f0()*0.853372);
}

double NNfunction_ss_cLsR::synapse0x2e2fb20() {
   return (neuron0x2e22830()*0.155806);
}

double NNfunction_ss_cLsR::synapse0x2e2fb60() {
   return (neuron0x2e22b70()*1.08911);
}

double NNfunction_ss_cLsR::synapse0x2e2fba0() {
   return (neuron0x2e22eb0()*-0.22978);
}

double NNfunction_ss_cLsR::synapse0x2e2fbe0() {
   return (neuron0x2e231f0()*-0.323338);
}

double NNfunction_ss_cLsR::synapse0x2e2fc20() {
   return (neuron0x2e23530()*0.217111);
}

double NNfunction_ss_cLsR::synapse0x2e2fc60() {
   return (neuron0x2e23870()*0.509051);
}

double NNfunction_ss_cLsR::synapse0x2e2fca0() {
   return (neuron0x2e23bb0()*0.789954);
}

double NNfunction_ss_cLsR::synapse0x2e2fce0() {
   return (neuron0x2e23ef0()*0.107397);
}

double NNfunction_ss_cLsR::synapse0x2e2fd20() {
   return (neuron0x2e24230()*0.0639767);
}

double NNfunction_ss_cLsR::synapse0x2e2fd60() {
   return (neuron0x2e24570()*-0.081737);
}

double NNfunction_ss_cLsR::synapse0x2e2f7f0() {
   return (neuron0x2e248b0()*0.474476);
}

double NNfunction_ss_cLsR::synapse0x2e2f830() {
   return (neuron0x2e24e10()*-0.532285);
}

double NNfunction_ss_cLsR::synapse0x2e2feb0() {
   return (neuron0x2e25030()*0.451629);
}

double NNfunction_ss_cLsR::synapse0x2e2fef0() {
   return (neuron0x2e25370()*-0.414707);
}

double NNfunction_ss_cLsR::synapse0x2e2ff30() {
   return (neuron0x2e256b0()*0.185059);
}

double NNfunction_ss_cLsR::synapse0x2e2ff70() {
   return (neuron0x2e259f0()*0.714951);
}

double NNfunction_ss_cLsR::synapse0x2e2ffb0() {
   return (neuron0x2e25d30()*-1.41587);
}

double NNfunction_ss_cLsR::synapse0x2e2fff0() {
   return (neuron0x2e26070()*0.943081);
}

double NNfunction_ss_cLsR::synapse0x2e30370() {
   return (neuron0x2e214b0()*0.0436864);
}

double NNfunction_ss_cLsR::synapse0x2e216d0() {
   return (neuron0x2e217f0()*0.00419003);
}

double NNfunction_ss_cLsR::synapse0x2e21710() {
   return (neuron0x2e21b30()*0.110658);
}

double NNfunction_ss_cLsR::synapse0x2e21a10() {
   return (neuron0x2e21e70()*-0.36018);
}

double NNfunction_ss_cLsR::synapse0x2e21a50() {
   return (neuron0x2e221b0()*-0.010074);
}

double NNfunction_ss_cLsR::synapse0x2e21d50() {
   return (neuron0x2e224f0()*-0.0167267);
}

double NNfunction_ss_cLsR::synapse0x2e21d90() {
   return (neuron0x2e22830()*0.000164415);
}

double NNfunction_ss_cLsR::synapse0x2e22090() {
   return (neuron0x2e22b70()*0.0101027);
}

double NNfunction_ss_cLsR::synapse0x2e220d0() {
   return (neuron0x2e22eb0()*0.0299543);
}

double NNfunction_ss_cLsR::synapse0x2e223d0() {
   return (neuron0x2e231f0()*-0.00194918);
}

double NNfunction_ss_cLsR::synapse0x2e22410() {
   return (neuron0x2e23530()*-0.0194639);
}

double NNfunction_ss_cLsR::synapse0x2e22710() {
   return (neuron0x2e23870()*-0.0368583);
}

double NNfunction_ss_cLsR::synapse0x2e22750() {
   return (neuron0x2e23bb0()*-0.476694);
}

double NNfunction_ss_cLsR::synapse0x2e22a50() {
   return (neuron0x2e23ef0()*-0.0170963);
}

double NNfunction_ss_cLsR::synapse0x2e22a90() {
   return (neuron0x2e24230()*0.00994967);
}

double NNfunction_ss_cLsR::synapse0x2e22d90() {
   return (neuron0x2e24570()*-0.0127509);
}

double NNfunction_ss_cLsR::synapse0x2e22dd0() {
   return (neuron0x2e248b0()*-0.0110955);
}

double NNfunction_ss_cLsR::synapse0x2e230d0() {
   return (neuron0x2e24e10()*-0.0394338);
}

double NNfunction_ss_cLsR::synapse0x2e23110() {
   return (neuron0x2e25030()*-0.416238);
}

double NNfunction_ss_cLsR::synapse0x2e23410() {
   return (neuron0x2e25370()*-0.00992441);
}

double NNfunction_ss_cLsR::synapse0x2e23450() {
   return (neuron0x2e256b0()*-0.0269657);
}

double NNfunction_ss_cLsR::synapse0x2e23750() {
   return (neuron0x2e259f0()*0.0030617);
}

double NNfunction_ss_cLsR::synapse0x2e23790() {
   return (neuron0x2e25d30()*-0.0138752);
}

double NNfunction_ss_cLsR::synapse0x2e23a90() {
   return (neuron0x2e26070()*-0.0027617);
}

double NNfunction_ss_cLsR::synapse0x2e23ad0() {
   return (neuron0x2e214b0()*-0.0175956);
}

double NNfunction_ss_cLsR::synapse0x2e24790() {
   return (neuron0x2e217f0()*0.00311391);
}

double NNfunction_ss_cLsR::synapse0x2e247d0() {
   return (neuron0x2e21b30()*0.103615);
}

double NNfunction_ss_cLsR::synapse0x2e301c0() {
   return (neuron0x2e21e70()*2.7139);
}

double NNfunction_ss_cLsR::synapse0x2e30200() {
   return (neuron0x2e221b0()*-0.0116386);
}

double NNfunction_ss_cLsR::synapse0x2e24ad0() {
   return (neuron0x2e224f0()*-0.00581403);
}

double NNfunction_ss_cLsR::synapse0x2e24b10() {
   return (neuron0x2e22830()*0.0180606);
}

double NNfunction_ss_cLsR::synapse0x2bd2aa0() {
   return (neuron0x2e22b70()*-0.00279782);
}

double NNfunction_ss_cLsR::synapse0x2bd2ae0() {
   return (neuron0x2e22eb0()*0.0033044);
}

double NNfunction_ss_cLsR::synapse0x2e25250() {
   return (neuron0x2e231f0()*-0.00989584);
}

double NNfunction_ss_cLsR::synapse0x2e25290() {
   return (neuron0x2e23530()*0.00931746);
}

double NNfunction_ss_cLsR::synapse0x2e25590() {
   return (neuron0x2e23870()*0.0268322);
}

double NNfunction_ss_cLsR::synapse0x2e255d0() {
   return (neuron0x2e23bb0()*0.316603);
}

double NNfunction_ss_cLsR::synapse0x2e258d0() {
   return (neuron0x2e23ef0()*0.00426738);
}

double NNfunction_ss_cLsR::synapse0x2e25910() {
   return (neuron0x2e24230()*0.00259191);
}

double NNfunction_ss_cLsR::synapse0x2e25c10() {
   return (neuron0x2e24570()*-0.00879208);
}

double NNfunction_ss_cLsR::synapse0x2e25c50() {
   return (neuron0x2e248b0()*-0.000198803);
}

double NNfunction_ss_cLsR::synapse0x2e25f50() {
   return (neuron0x2e24e10()*0.0165386);
}

double NNfunction_ss_cLsR::synapse0x2e25f90() {
   return (neuron0x2e25030()*0.387946);
}

double NNfunction_ss_cLsR::synapse0x2e26290() {
   return (neuron0x2e25370()*-0.015178);
}

double NNfunction_ss_cLsR::synapse0x2e262d0() {
   return (neuron0x2e256b0()*-0.00289268);
}

double NNfunction_ss_cLsR::synapse0x2e23dd0() {
   return (neuron0x2e259f0()*0.00629044);
}

double NNfunction_ss_cLsR::synapse0x2e23e10() {
   return (neuron0x2e25d30()*0.00557668);
}

double NNfunction_ss_cLsR::synapse0x2e320e0() {
   return (neuron0x2e26070()*-0.00998685);
}

double NNfunction_ss_cLsR::synapse0x2e32460() {
   return (neuron0x2e214b0()*0.0172298);
}

double NNfunction_ss_cLsR::synapse0x2e324a0() {
   return (neuron0x2e217f0()*-0.0462593);
}

double NNfunction_ss_cLsR::synapse0x2e324e0() {
   return (neuron0x2e21b30()*0.676831);
}

double NNfunction_ss_cLsR::synapse0x2e32520() {
   return (neuron0x2e21e70()*0.930638);
}

double NNfunction_ss_cLsR::synapse0x2e32560() {
   return (neuron0x2e221b0()*-0.0435299);
}

double NNfunction_ss_cLsR::synapse0x2e325a0() {
   return (neuron0x2e224f0()*-0.0274336);
}

double NNfunction_ss_cLsR::synapse0x2e325e0() {
   return (neuron0x2e22830()*0.0128157);
}

double NNfunction_ss_cLsR::synapse0x2e32620() {
   return (neuron0x2e22b70()*0.016844);
}

double NNfunction_ss_cLsR::synapse0x2e32660() {
   return (neuron0x2e22eb0()*0.00883317);
}

double NNfunction_ss_cLsR::synapse0x2e326a0() {
   return (neuron0x2e231f0()*-0.0138615);
}

double NNfunction_ss_cLsR::synapse0x2e326e0() {
   return (neuron0x2e23530()*0.00151034);
}

double NNfunction_ss_cLsR::synapse0x2e32720() {
   return (neuron0x2e23870()*-0.0203727);
}

double NNfunction_ss_cLsR::synapse0x2e32760() {
   return (neuron0x2e23bb0()*-0.572926);
}

double NNfunction_ss_cLsR::synapse0x2e327a0() {
   return (neuron0x2e23ef0()*0.0179877);
}

double NNfunction_ss_cLsR::synapse0x2e327e0() {
   return (neuron0x2e24230()*0.0672202);
}

double NNfunction_ss_cLsR::synapse0x2e32820() {
   return (neuron0x2e24570()*-0.0278556);
}

double NNfunction_ss_cLsR::synapse0x2e322b0() {
   return (neuron0x2e248b0()*0.0174192);
}

double NNfunction_ss_cLsR::synapse0x2e322f0() {
   return (neuron0x2e24e10()*-0.012005);
}

double NNfunction_ss_cLsR::synapse0x2e32970() {
   return (neuron0x2e25030()*-0.294786);
}

double NNfunction_ss_cLsR::synapse0x2e329b0() {
   return (neuron0x2e25370()*-0.0110619);
}

double NNfunction_ss_cLsR::synapse0x2e329f0() {
   return (neuron0x2e256b0()*-0.0186328);
}

double NNfunction_ss_cLsR::synapse0x2e32a30() {
   return (neuron0x2e259f0()*-0.011698);
}

double NNfunction_ss_cLsR::synapse0x2e32a70() {
   return (neuron0x2e25d30()*0.0134541);
}

double NNfunction_ss_cLsR::synapse0x2e32ab0() {
   return (neuron0x2e26070()*-0.0201946);
}

double NNfunction_ss_cLsR::synapse0x2e32e30() {
   return (neuron0x2e214b0()*0.00972894);
}

double NNfunction_ss_cLsR::synapse0x2e32e70() {
   return (neuron0x2e217f0()*0.10509);
}

double NNfunction_ss_cLsR::synapse0x2e32eb0() {
   return (neuron0x2e21b30()*-0.0895705);
}

double NNfunction_ss_cLsR::synapse0x2e32ef0() {
   return (neuron0x2e21e70()*1.17325);
}

double NNfunction_ss_cLsR::synapse0x2e32f30() {
   return (neuron0x2e221b0()*0.0150326);
}

double NNfunction_ss_cLsR::synapse0x2e32f70() {
   return (neuron0x2e224f0()*-0.0264467);
}

double NNfunction_ss_cLsR::synapse0x2e32fb0() {
   return (neuron0x2e22830()*-0.030926);
}

double NNfunction_ss_cLsR::synapse0x2e32ff0() {
   return (neuron0x2e22b70()*0.068013);
}

double NNfunction_ss_cLsR::synapse0x2e33030() {
   return (neuron0x2e22eb0()*-0.0470379);
}

double NNfunction_ss_cLsR::synapse0x2e33070() {
   return (neuron0x2e231f0()*0.00912722);
}

double NNfunction_ss_cLsR::synapse0x2e330b0() {
   return (neuron0x2e23530()*-0.0614987);
}

double NNfunction_ss_cLsR::synapse0x2e330f0() {
   return (neuron0x2e23870()*-0.0248036);
}

double NNfunction_ss_cLsR::synapse0x2e33130() {
   return (neuron0x2e23bb0()*1.3891);
}

double NNfunction_ss_cLsR::synapse0x2e33170() {
   return (neuron0x2e23ef0()*0.0587873);
}

double NNfunction_ss_cLsR::synapse0x2e331b0() {
   return (neuron0x2e24230()*0.0603798);
}

double NNfunction_ss_cLsR::synapse0x2e331f0() {
   return (neuron0x2e24570()*-0.090185);
}

double NNfunction_ss_cLsR::synapse0x2e32c80() {
   return (neuron0x2e248b0()*0.0292291);
}

double NNfunction_ss_cLsR::synapse0x2e32cc0() {
   return (neuron0x2e24e10()*0.040701);
}

double NNfunction_ss_cLsR::synapse0x2e33340() {
   return (neuron0x2e25030()*1.8912);
}

double NNfunction_ss_cLsR::synapse0x2e33380() {
   return (neuron0x2e25370()*-0.0832057);
}

double NNfunction_ss_cLsR::synapse0x2e333c0() {
   return (neuron0x2e256b0()*0.0260606);
}

double NNfunction_ss_cLsR::synapse0x2e33400() {
   return (neuron0x2e259f0()*0.0516172);
}

double NNfunction_ss_cLsR::synapse0x2e33440() {
   return (neuron0x2e25d30()*0.0316276);
}

double NNfunction_ss_cLsR::synapse0x2e33480() {
   return (neuron0x2e26070()*0.0375937);
}

double NNfunction_ss_cLsR::synapse0x2e33800() {
   return (neuron0x2e214b0()*0.704871);
}

double NNfunction_ss_cLsR::synapse0x2e33840() {
   return (neuron0x2e217f0()*-0.928319);
}

double NNfunction_ss_cLsR::synapse0x2e33880() {
   return (neuron0x2e21b30()*0.260361);
}

double NNfunction_ss_cLsR::synapse0x2e338c0() {
   return (neuron0x2e21e70()*-0.519709);
}

double NNfunction_ss_cLsR::synapse0x2e33900() {
   return (neuron0x2e221b0()*0.420035);
}

double NNfunction_ss_cLsR::synapse0x2e33940() {
   return (neuron0x2e224f0()*0.531948);
}

double NNfunction_ss_cLsR::synapse0x2e33980() {
   return (neuron0x2e22830()*-0.248427);
}

double NNfunction_ss_cLsR::synapse0x2e339c0() {
   return (neuron0x2e22b70()*0.168828);
}

double NNfunction_ss_cLsR::synapse0x2e33a00() {
   return (neuron0x2e22eb0()*-0.845658);
}

double NNfunction_ss_cLsR::synapse0x2e33a40() {
   return (neuron0x2e231f0()*0.081264);
}

double NNfunction_ss_cLsR::synapse0x2e33a80() {
   return (neuron0x2e23530()*-0.224362);
}

double NNfunction_ss_cLsR::synapse0x2e33ac0() {
   return (neuron0x2e23870()*-0.0336455);
}

double NNfunction_ss_cLsR::synapse0x2e33b00() {
   return (neuron0x2e23bb0()*-0.322979);
}

double NNfunction_ss_cLsR::synapse0x2e33b40() {
   return (neuron0x2e23ef0()*0.641197);
}

double NNfunction_ss_cLsR::synapse0x2e33b80() {
   return (neuron0x2e24230()*-0.041953);
}

double NNfunction_ss_cLsR::synapse0x2e33bc0() {
   return (neuron0x2e24570()*-0.746519);
}

double NNfunction_ss_cLsR::synapse0x2e33650() {
   return (neuron0x2e248b0()*-0.86344);
}

double NNfunction_ss_cLsR::synapse0x2e33690() {
   return (neuron0x2e24e10()*0.810295);
}

double NNfunction_ss_cLsR::synapse0x2e33d10() {
   return (neuron0x2e25030()*-0.91196);
}

double NNfunction_ss_cLsR::synapse0x2e33d50() {
   return (neuron0x2e25370()*-0.428525);
}

double NNfunction_ss_cLsR::synapse0x2e33d90() {
   return (neuron0x2e256b0()*-0.187941);
}

double NNfunction_ss_cLsR::synapse0x2e33dd0() {
   return (neuron0x2e259f0()*-0.911095);
}

double NNfunction_ss_cLsR::synapse0x2e33e10() {
   return (neuron0x2e25d30()*0.561536);
}

double NNfunction_ss_cLsR::synapse0x2e33e50() {
   return (neuron0x2e26070()*-0.636191);
}

double NNfunction_ss_cLsR::synapse0x2e341d0() {
   return (neuron0x2e214b0()*-0.792671);
}

double NNfunction_ss_cLsR::synapse0x2e34210() {
   return (neuron0x2e217f0()*-0.376726);
}

double NNfunction_ss_cLsR::synapse0x2e34250() {
   return (neuron0x2e21b30()*0.231194);
}

double NNfunction_ss_cLsR::synapse0x2e34290() {
   return (neuron0x2e21e70()*0.295737);
}

double NNfunction_ss_cLsR::synapse0x2e342d0() {
   return (neuron0x2e221b0()*0.0130081);
}

double NNfunction_ss_cLsR::synapse0x2e34310() {
   return (neuron0x2e224f0()*0.590689);
}

double NNfunction_ss_cLsR::synapse0x2e34350() {
   return (neuron0x2e22830()*0.118006);
}

double NNfunction_ss_cLsR::synapse0x2e34390() {
   return (neuron0x2e22b70()*0.0732038);
}

double NNfunction_ss_cLsR::synapse0x2e343d0() {
   return (neuron0x2e22eb0()*-0.11336);
}

double NNfunction_ss_cLsR::synapse0x2e34410() {
   return (neuron0x2e231f0()*-1.4659);
}

double NNfunction_ss_cLsR::synapse0x2e34450() {
   return (neuron0x2e23530()*-0.319562);
}

double NNfunction_ss_cLsR::synapse0x2e34490() {
   return (neuron0x2e23870()*-0.706705);
}

double NNfunction_ss_cLsR::synapse0x2e344d0() {
   return (neuron0x2e23bb0()*1.82102);
}

double NNfunction_ss_cLsR::synapse0x2e34510() {
   return (neuron0x2e23ef0()*0.297811);
}

double NNfunction_ss_cLsR::synapse0x2e34550() {
   return (neuron0x2e24230()*-0.13186);
}

double NNfunction_ss_cLsR::synapse0x2e34590() {
   return (neuron0x2e24570()*1.40772);
}

double NNfunction_ss_cLsR::synapse0x2e34020() {
   return (neuron0x2e248b0()*0.161414);
}

double NNfunction_ss_cLsR::synapse0x2e34060() {
   return (neuron0x2e24e10()*0.137529);
}

double NNfunction_ss_cLsR::synapse0x2e346e0() {
   return (neuron0x2e25030()*0.860564);
}

double NNfunction_ss_cLsR::synapse0x2e34720() {
   return (neuron0x2e25370()*0.959936);
}

double NNfunction_ss_cLsR::synapse0x2e34760() {
   return (neuron0x2e256b0()*0.717961);
}

double NNfunction_ss_cLsR::synapse0x2e347a0() {
   return (neuron0x2e259f0()*-0.692553);
}

double NNfunction_ss_cLsR::synapse0x2e347e0() {
   return (neuron0x2e25d30()*0.0341754);
}

double NNfunction_ss_cLsR::synapse0x2e34820() {
   return (neuron0x2e26070()*1.16667);
}

double NNfunction_ss_cLsR::synapse0x2e34ba0() {
   return (neuron0x2e214b0()*0.355771);
}

double NNfunction_ss_cLsR::synapse0x2e34be0() {
   return (neuron0x2e217f0()*-0.529661);
}

double NNfunction_ss_cLsR::synapse0x2e34c20() {
   return (neuron0x2e21b30()*-0.471164);
}

double NNfunction_ss_cLsR::synapse0x2e34c60() {
   return (neuron0x2e21e70()*0.0853857);
}

double NNfunction_ss_cLsR::synapse0x2e34ca0() {
   return (neuron0x2e221b0()*1.14096);
}

double NNfunction_ss_cLsR::synapse0x2e34ce0() {
   return (neuron0x2e224f0()*0.686528);
}

double NNfunction_ss_cLsR::synapse0x2e34d20() {
   return (neuron0x2e22830()*0.846616);
}

double NNfunction_ss_cLsR::synapse0x2e34d60() {
   return (neuron0x2e22b70()*-0.154981);
}

double NNfunction_ss_cLsR::synapse0x2e34da0() {
   return (neuron0x2e22eb0()*0.0636899);
}

double NNfunction_ss_cLsR::synapse0x2e2cf60() {
   return (neuron0x2e231f0()*-0.550063);
}

double NNfunction_ss_cLsR::synapse0x2e2cfa0() {
   return (neuron0x2e23530()*-0.152506);
}

double NNfunction_ss_cLsR::synapse0x2e2cfe0() {
   return (neuron0x2e23870()*0.47951);
}

double NNfunction_ss_cLsR::synapse0x2e2d020() {
   return (neuron0x2e23bb0()*-0.0808915);
}

double NNfunction_ss_cLsR::synapse0x2e2d060() {
   return (neuron0x2e23ef0()*0.0487381);
}

double NNfunction_ss_cLsR::synapse0x2e2d0a0() {
   return (neuron0x2e24230()*-0.0429857);
}

double NNfunction_ss_cLsR::synapse0x2e2d0e0() {
   return (neuron0x2e24570()*0.49008);
}

double NNfunction_ss_cLsR::synapse0x2e349f0() {
   return (neuron0x2e248b0()*0.230472);
}

double NNfunction_ss_cLsR::synapse0x2e34a30() {
   return (neuron0x2e24e10()*0.233475);
}

double NNfunction_ss_cLsR::synapse0x2e2d230() {
   return (neuron0x2e25030()*0.0966169);
}

double NNfunction_ss_cLsR::synapse0x2e2d270() {
   return (neuron0x2e25370()*-0.625255);
}

double NNfunction_ss_cLsR::synapse0x2e2d2b0() {
   return (neuron0x2e256b0()*0.00929756);
}

double NNfunction_ss_cLsR::synapse0x2e2d2f0() {
   return (neuron0x2e259f0()*-0.00149478);
}

double NNfunction_ss_cLsR::synapse0x2e2d330() {
   return (neuron0x2e25d30()*-0.154925);
}

double NNfunction_ss_cLsR::synapse0x2e2d370() {
   return (neuron0x2e26070()*0.793183);
}

double NNfunction_ss_cLsR::synapse0x2e2d6f0() {
   return (neuron0x2e214b0()*-0.0041548);
}

double NNfunction_ss_cLsR::synapse0x2e2d730() {
   return (neuron0x2e217f0()*-0.00363011);
}

double NNfunction_ss_cLsR::synapse0x2e2d770() {
   return (neuron0x2e21b30()*0.0751155);
}

double NNfunction_ss_cLsR::synapse0x2e2d7b0() {
   return (neuron0x2e21e70()*-8.86301);
}

double NNfunction_ss_cLsR::synapse0x2e2d7f0() {
   return (neuron0x2e221b0()*0.00928218);
}

double NNfunction_ss_cLsR::synapse0x2e2d830() {
   return (neuron0x2e224f0()*0.00948909);
}

double NNfunction_ss_cLsR::synapse0x2e2d870() {
   return (neuron0x2e22830()*-0.0359786);
}

double NNfunction_ss_cLsR::synapse0x2e2d8b0() {
   return (neuron0x2e22b70()*-0.00870561);
}

double NNfunction_ss_cLsR::synapse0x2e2d8f0() {
   return (neuron0x2e22eb0()*0.0219687);
}

double NNfunction_ss_cLsR::synapse0x2e2d930() {
   return (neuron0x2e231f0()*-0.014389);
}

double NNfunction_ss_cLsR::synapse0x2e2d970() {
   return (neuron0x2e23530()*0.0179553);
}

double NNfunction_ss_cLsR::synapse0x2e2d9b0() {
   return (neuron0x2e23870()*0.00192409);
}

double NNfunction_ss_cLsR::synapse0x2e2d9f0() {
   return (neuron0x2e23bb0()*0.227216);
}

double NNfunction_ss_cLsR::synapse0x2e2da30() {
   return (neuron0x2e23ef0()*-0.00449322);
}

double NNfunction_ss_cLsR::synapse0x2e2da70() {
   return (neuron0x2e24230()*-0.0229403);
}

double NNfunction_ss_cLsR::synapse0x2e2dab0() {
   return (neuron0x2e24570()*-0.03033);
}

double NNfunction_ss_cLsR::synapse0x2e2d540() {
   return (neuron0x2e248b0()*-0.00560064);
}

double NNfunction_ss_cLsR::synapse0x2e2d580() {
   return (neuron0x2e24e10()*-0.00258915);
}

double NNfunction_ss_cLsR::synapse0x2e2dc00() {
   return (neuron0x2e25030()*0.186013);
}

double NNfunction_ss_cLsR::synapse0x2e2dc40() {
   return (neuron0x2e25370()*-0.0147758);
}

double NNfunction_ss_cLsR::synapse0x2e2dc80() {
   return (neuron0x2e256b0()*0.0174517);
}

double NNfunction_ss_cLsR::synapse0x2e2dcc0() {
   return (neuron0x2e259f0()*-0.012146);
}

double NNfunction_ss_cLsR::synapse0x2e2dd00() {
   return (neuron0x2e25d30()*0.00443374);
}

double NNfunction_ss_cLsR::synapse0x2e2dd40() {
   return (neuron0x2e26070()*-0.0318066);
}

double NNfunction_ss_cLsR::synapse0x2e2df10() {
   return (neuron0x2e214b0()*-1.03569);
}

double NNfunction_ss_cLsR::synapse0x2e36fa0() {
   return (neuron0x2e217f0()*0.797549);
}

double NNfunction_ss_cLsR::synapse0x2e36fe0() {
   return (neuron0x2e21b30()*-0.324033);
}

double NNfunction_ss_cLsR::synapse0x2e37020() {
   return (neuron0x2e21e70()*1.92093);
}

double NNfunction_ss_cLsR::synapse0x2e37060() {
   return (neuron0x2e221b0()*-0.309931);
}

double NNfunction_ss_cLsR::synapse0x2e370a0() {
   return (neuron0x2e224f0()*0.696157);
}

double NNfunction_ss_cLsR::synapse0x2e370e0() {
   return (neuron0x2e22830()*0.400694);
}

double NNfunction_ss_cLsR::synapse0x2e37120() {
   return (neuron0x2e22b70()*-0.0128235);
}

double NNfunction_ss_cLsR::synapse0x2e37160() {
   return (neuron0x2e22eb0()*0.373259);
}

double NNfunction_ss_cLsR::synapse0x2e371a0() {
   return (neuron0x2e231f0()*0.80299);
}

double NNfunction_ss_cLsR::synapse0x2e371e0() {
   return (neuron0x2e23530()*-0.323064);
}

double NNfunction_ss_cLsR::synapse0x2e37220() {
   return (neuron0x2e23870()*0.292412);
}

double NNfunction_ss_cLsR::synapse0x2e37260() {
   return (neuron0x2e23bb0()*0.00844674);
}

double NNfunction_ss_cLsR::synapse0x2e372a0() {
   return (neuron0x2e23ef0()*0.782873);
}

double NNfunction_ss_cLsR::synapse0x2e372e0() {
   return (neuron0x2e24230()*-1.14679);
}

double NNfunction_ss_cLsR::synapse0x2e37320() {
   return (neuron0x2e24570()*0.351121);
}

double NNfunction_ss_cLsR::synapse0x2e36df0() {
   return (neuron0x2e248b0()*0.281702);
}

double NNfunction_ss_cLsR::synapse0x2e36e30() {
   return (neuron0x2e24e10()*0.427813);
}

double NNfunction_ss_cLsR::synapse0x2e37470() {
   return (neuron0x2e25030()*-0.607141);
}

double NNfunction_ss_cLsR::synapse0x2e374b0() {
   return (neuron0x2e25370()*0.866014);
}

double NNfunction_ss_cLsR::synapse0x2e374f0() {
   return (neuron0x2e256b0()*0.177646);
}

double NNfunction_ss_cLsR::synapse0x2e37530() {
   return (neuron0x2e259f0()*-0.725309);
}

double NNfunction_ss_cLsR::synapse0x2e37570() {
   return (neuron0x2e25d30()*0.123533);
}

double NNfunction_ss_cLsR::synapse0x2e375b0() {
   return (neuron0x2e26070()*-0.0755042);
}

double NNfunction_ss_cLsR::synapse0x2e37930() {
   return (neuron0x2e214b0()*0.228266);
}

double NNfunction_ss_cLsR::synapse0x2e37970() {
   return (neuron0x2e217f0()*-0.242992);
}

double NNfunction_ss_cLsR::synapse0x2e379b0() {
   return (neuron0x2e21b30()*-0.75993);
}

double NNfunction_ss_cLsR::synapse0x2e379f0() {
   return (neuron0x2e21e70()*0.509782);
}

double NNfunction_ss_cLsR::synapse0x2e37a30() {
   return (neuron0x2e221b0()*0.274649);
}

double NNfunction_ss_cLsR::synapse0x2e37a70() {
   return (neuron0x2e224f0()*-0.224422);
}

double NNfunction_ss_cLsR::synapse0x2e37ab0() {
   return (neuron0x2e22830()*0.212764);
}

double NNfunction_ss_cLsR::synapse0x2e37af0() {
   return (neuron0x2e22b70()*0.12099);
}

double NNfunction_ss_cLsR::synapse0x2e37b30() {
   return (neuron0x2e22eb0()*0.299786);
}

double NNfunction_ss_cLsR::synapse0x2e37b70() {
   return (neuron0x2e231f0()*0.112576);
}

double NNfunction_ss_cLsR::synapse0x2e37bb0() {
   return (neuron0x2e23530()*0.104931);
}

double NNfunction_ss_cLsR::synapse0x2e37bf0() {
   return (neuron0x2e23870()*0.273577);
}

double NNfunction_ss_cLsR::synapse0x2e37c30() {
   return (neuron0x2e23bb0()*0.842869);
}

double NNfunction_ss_cLsR::synapse0x2e37c70() {
   return (neuron0x2e23ef0()*0.731269);
}

double NNfunction_ss_cLsR::synapse0x2e37cb0() {
   return (neuron0x2e24230()*-0.148017);
}

double NNfunction_ss_cLsR::synapse0x2e37cf0() {
   return (neuron0x2e24570()*-0.050554);
}

double NNfunction_ss_cLsR::synapse0x2e37780() {
   return (neuron0x2e248b0()*-0.135782);
}

double NNfunction_ss_cLsR::synapse0x2e377c0() {
   return (neuron0x2e24e10()*-0.428674);
}

double NNfunction_ss_cLsR::synapse0x2e37e40() {
   return (neuron0x2e25030()*0.360495);
}

double NNfunction_ss_cLsR::synapse0x2e37e80() {
   return (neuron0x2e25370()*-0.200449);
}

double NNfunction_ss_cLsR::synapse0x2e37ec0() {
   return (neuron0x2e256b0()*-0.149124);
}

double NNfunction_ss_cLsR::synapse0x2e37f00() {
   return (neuron0x2e259f0()*0.258631);
}

double NNfunction_ss_cLsR::synapse0x2e37f40() {
   return (neuron0x2e25d30()*-0.233636);
}

double NNfunction_ss_cLsR::synapse0x2e37f80() {
   return (neuron0x2e26070()*-0.00238028);
}

double NNfunction_ss_cLsR::synapse0x2e38300() {
   return (neuron0x2e214b0()*0.122513);
}

double NNfunction_ss_cLsR::synapse0x2e38340() {
   return (neuron0x2e217f0()*0.201203);
}

double NNfunction_ss_cLsR::synapse0x2e38380() {
   return (neuron0x2e21b30()*0.747094);
}

double NNfunction_ss_cLsR::synapse0x2e383c0() {
   return (neuron0x2e21e70()*-0.236026);
}

double NNfunction_ss_cLsR::synapse0x2e38400() {
   return (neuron0x2e221b0()*0.375325);
}

double NNfunction_ss_cLsR::synapse0x2e38440() {
   return (neuron0x2e224f0()*0.079656);
}

double NNfunction_ss_cLsR::synapse0x2e38480() {
   return (neuron0x2e22830()*-0.540138);
}

double NNfunction_ss_cLsR::synapse0x2e384c0() {
   return (neuron0x2e22b70()*0.111515);
}

double NNfunction_ss_cLsR::synapse0x2e38500() {
   return (neuron0x2e22eb0()*0.022969);
}

double NNfunction_ss_cLsR::synapse0x2e38540() {
   return (neuron0x2e231f0()*-0.0747072);
}

double NNfunction_ss_cLsR::synapse0x2e38580() {
   return (neuron0x2e23530()*0.030883);
}

double NNfunction_ss_cLsR::synapse0x2e385c0() {
   return (neuron0x2e23870()*0.407304);
}

double NNfunction_ss_cLsR::synapse0x2e38600() {
   return (neuron0x2e23bb0()*0.179242);
}

double NNfunction_ss_cLsR::synapse0x2e38640() {
   return (neuron0x2e23ef0()*0.102732);
}

double NNfunction_ss_cLsR::synapse0x2e38680() {
   return (neuron0x2e24230()*-0.0606874);
}

double NNfunction_ss_cLsR::synapse0x2e386c0() {
   return (neuron0x2e24570()*0.344342);
}

double NNfunction_ss_cLsR::synapse0x2e38150() {
   return (neuron0x2e248b0()*-0.0268387);
}

double NNfunction_ss_cLsR::synapse0x2e38190() {
   return (neuron0x2e24e10()*-0.0244577);
}

double NNfunction_ss_cLsR::synapse0x2e38810() {
   return (neuron0x2e25030()*-0.880928);
}

double NNfunction_ss_cLsR::synapse0x2e38850() {
   return (neuron0x2e25370()*0.0455643);
}

double NNfunction_ss_cLsR::synapse0x2e38890() {
   return (neuron0x2e256b0()*-0.0856407);
}

double NNfunction_ss_cLsR::synapse0x2e388d0() {
   return (neuron0x2e259f0()*-0.162854);
}

double NNfunction_ss_cLsR::synapse0x2e38910() {
   return (neuron0x2e25d30()*-0.29912);
}

double NNfunction_ss_cLsR::synapse0x2e38950() {
   return (neuron0x2e26070()*-0.00924146);
}

double NNfunction_ss_cLsR::synapse0x2e38cd0() {
   return (neuron0x2e214b0()*0.00627546);
}

double NNfunction_ss_cLsR::synapse0x2e38d10() {
   return (neuron0x2e217f0()*-0.0221487);
}

double NNfunction_ss_cLsR::synapse0x2e38d50() {
   return (neuron0x2e21b30()*-0.0121077);
}

double NNfunction_ss_cLsR::synapse0x2e38d90() {
   return (neuron0x2e21e70()*-3.44742);
}

double NNfunction_ss_cLsR::synapse0x2e38dd0() {
   return (neuron0x2e221b0()*0.00984944);
}

double NNfunction_ss_cLsR::synapse0x2e38e10() {
   return (neuron0x2e224f0()*-0.00212314);
}

double NNfunction_ss_cLsR::synapse0x2e38e50() {
   return (neuron0x2e22830()*-0.0294943);
}

double NNfunction_ss_cLsR::synapse0x2e38e90() {
   return (neuron0x2e22b70()*-0.00992745);
}

double NNfunction_ss_cLsR::synapse0x2e38ed0() {
   return (neuron0x2e22eb0()*-0.00220079);
}

double NNfunction_ss_cLsR::synapse0x2e38f10() {
   return (neuron0x2e231f0()*-0.00511544);
}

double NNfunction_ss_cLsR::synapse0x2e38f50() {
   return (neuron0x2e23530()*-0.0269771);
}

double NNfunction_ss_cLsR::synapse0x2e38f90() {
   return (neuron0x2e23870()*-0.0672013);
}

double NNfunction_ss_cLsR::synapse0x2e38fd0() {
   return (neuron0x2e23bb0()*0.152728);
}

double NNfunction_ss_cLsR::synapse0x2e39010() {
   return (neuron0x2e23ef0()*-0.0221831);
}

double NNfunction_ss_cLsR::synapse0x2e39050() {
   return (neuron0x2e24230()*0.00967265);
}

double NNfunction_ss_cLsR::synapse0x2e39090() {
   return (neuron0x2e24570()*0.0272891);
}

double NNfunction_ss_cLsR::synapse0x2e38b20() {
   return (neuron0x2e248b0()*-0.00715453);
}

double NNfunction_ss_cLsR::synapse0x2e38b60() {
   return (neuron0x2e24e10()*-0.00174409);
}

double NNfunction_ss_cLsR::synapse0x2e391e0() {
   return (neuron0x2e25030()*0.102067);
}

double NNfunction_ss_cLsR::synapse0x2e39220() {
   return (neuron0x2e25370()*0.00389976);
}

double NNfunction_ss_cLsR::synapse0x2e39260() {
   return (neuron0x2e256b0()*0.00879594);
}

double NNfunction_ss_cLsR::synapse0x2e392a0() {
   return (neuron0x2e259f0()*0.00802678);
}

double NNfunction_ss_cLsR::synapse0x2e392e0() {
   return (neuron0x2e25d30()*-0.00690433);
}

double NNfunction_ss_cLsR::synapse0x2e39320() {
   return (neuron0x2e26070()*-0.00509601);
}

double NNfunction_ss_cLsR::synapse0x2e396a0() {
   return (neuron0x2e214b0()*-0.161176);
}

double NNfunction_ss_cLsR::synapse0x2e396e0() {
   return (neuron0x2e217f0()*0.649982);
}

double NNfunction_ss_cLsR::synapse0x2e39720() {
   return (neuron0x2e21b30()*-0.741657);
}

double NNfunction_ss_cLsR::synapse0x2e39760() {
   return (neuron0x2e21e70()*0.0560551);
}

double NNfunction_ss_cLsR::synapse0x2e397a0() {
   return (neuron0x2e221b0()*-0.842143);
}

double NNfunction_ss_cLsR::synapse0x2e397e0() {
   return (neuron0x2e224f0()*-0.234239);
}

double NNfunction_ss_cLsR::synapse0x2e39820() {
   return (neuron0x2e22830()*0.473701);
}

double NNfunction_ss_cLsR::synapse0x2e39860() {
   return (neuron0x2e22b70()*0.361711);
}

double NNfunction_ss_cLsR::synapse0x2e398a0() {
   return (neuron0x2e22eb0()*-0.163796);
}

double NNfunction_ss_cLsR::synapse0x2e398e0() {
   return (neuron0x2e231f0()*-0.469036);
}

double NNfunction_ss_cLsR::synapse0x2e39920() {
   return (neuron0x2e23530()*-0.314281);
}

double NNfunction_ss_cLsR::synapse0x2e39960() {
   return (neuron0x2e23870()*0.224384);
}

double NNfunction_ss_cLsR::synapse0x2e399a0() {
   return (neuron0x2e23bb0()*-2.02986);
}

double NNfunction_ss_cLsR::synapse0x2e399e0() {
   return (neuron0x2e23ef0()*0.37201);
}

double NNfunction_ss_cLsR::synapse0x2e39a20() {
   return (neuron0x2e24230()*0.0967459);
}

double NNfunction_ss_cLsR::synapse0x2e39a60() {
   return (neuron0x2e24570()*0.431332);
}

double NNfunction_ss_cLsR::synapse0x2e394f0() {
   return (neuron0x2e248b0()*0.320172);
}

double NNfunction_ss_cLsR::synapse0x2e39530() {
   return (neuron0x2e24e10()*-0.454581);
}

double NNfunction_ss_cLsR::synapse0x2e39bb0() {
   return (neuron0x2e25030()*-0.225315);
}

double NNfunction_ss_cLsR::synapse0x2e39bf0() {
   return (neuron0x2e25370()*0.800009);
}

double NNfunction_ss_cLsR::synapse0x2e39c30() {
   return (neuron0x2e256b0()*0.235003);
}

double NNfunction_ss_cLsR::synapse0x2e39c70() {
   return (neuron0x2e259f0()*-0.5005);
}

double NNfunction_ss_cLsR::synapse0x2e39cb0() {
   return (neuron0x2e25d30()*0.0108678);
}

double NNfunction_ss_cLsR::synapse0x2e39cf0() {
   return (neuron0x2e26070()*0.0266857);
}

double NNfunction_ss_cLsR::synapse0x2e3a070() {
   return (neuron0x2e214b0()*0.480483);
}

double NNfunction_ss_cLsR::synapse0x2e3a0b0() {
   return (neuron0x2e217f0()*-0.173101);
}

double NNfunction_ss_cLsR::synapse0x2e3a0f0() {
   return (neuron0x2e21b30()*-0.247699);
}

double NNfunction_ss_cLsR::synapse0x2e3a130() {
   return (neuron0x2e21e70()*0.513336);
}

double NNfunction_ss_cLsR::synapse0x2e3a170() {
   return (neuron0x2e221b0()*-0.269125);
}

double NNfunction_ss_cLsR::synapse0x2e3a1b0() {
   return (neuron0x2e224f0()*0.318893);
}

double NNfunction_ss_cLsR::synapse0x2e3a1f0() {
   return (neuron0x2e22830()*-0.46862);
}

double NNfunction_ss_cLsR::synapse0x2e3a230() {
   return (neuron0x2e22b70()*-0.495426);
}

double NNfunction_ss_cLsR::synapse0x2e3a270() {
   return (neuron0x2e22eb0()*-0.0845613);
}

double NNfunction_ss_cLsR::synapse0x2e3a2b0() {
   return (neuron0x2e231f0()*0.76857);
}

double NNfunction_ss_cLsR::synapse0x2e3a2f0() {
   return (neuron0x2e23530()*-0.0229237);
}

double NNfunction_ss_cLsR::synapse0x2e3a330() {
   return (neuron0x2e23870()*0.151888);
}

double NNfunction_ss_cLsR::synapse0x2e3a370() {
   return (neuron0x2e23bb0()*-0.667944);
}

double NNfunction_ss_cLsR::synapse0x2e3a3b0() {
   return (neuron0x2e23ef0()*-1.14837);
}

double NNfunction_ss_cLsR::synapse0x2e3a3f0() {
   return (neuron0x2e24230()*-0.413002);
}

double NNfunction_ss_cLsR::synapse0x2e3a430() {
   return (neuron0x2e24570()*-0.285947);
}

double NNfunction_ss_cLsR::synapse0x2e39ec0() {
   return (neuron0x2e248b0()*-0.197055);
}

double NNfunction_ss_cLsR::synapse0x2e39f00() {
   return (neuron0x2e24e10()*0.260456);
}

double NNfunction_ss_cLsR::synapse0x2e3a580() {
   return (neuron0x2e25030()*0.308679);
}

double NNfunction_ss_cLsR::synapse0x2e3a5c0() {
   return (neuron0x2e25370()*0.033402);
}

double NNfunction_ss_cLsR::synapse0x2e3a600() {
   return (neuron0x2e256b0()*0.862655);
}

double NNfunction_ss_cLsR::synapse0x2e3a640() {
   return (neuron0x2e259f0()*0.157957);
}

double NNfunction_ss_cLsR::synapse0x2e3a680() {
   return (neuron0x2e25d30()*-0.286194);
}

double NNfunction_ss_cLsR::synapse0x2e3a6c0() {
   return (neuron0x2e26070()*0.0457158);
}

double NNfunction_ss_cLsR::synapse0x2e3aa40() {
   return (neuron0x2e214b0()*-0.0199375);
}

double NNfunction_ss_cLsR::synapse0x2e3aa80() {
   return (neuron0x2e217f0()*0.0356597);
}

double NNfunction_ss_cLsR::synapse0x2e3aac0() {
   return (neuron0x2e21b30()*-0.036812);
}

double NNfunction_ss_cLsR::synapse0x2e3ab00() {
   return (neuron0x2e21e70()*3.65976);
}

double NNfunction_ss_cLsR::synapse0x2e3ab40() {
   return (neuron0x2e221b0()*-0.0514215);
}

double NNfunction_ss_cLsR::synapse0x2e3ab80() {
   return (neuron0x2e224f0()*-0.0167368);
}

double NNfunction_ss_cLsR::synapse0x2e3abc0() {
   return (neuron0x2e22830()*0.0315402);
}

double NNfunction_ss_cLsR::synapse0x2e3ac00() {
   return (neuron0x2e22b70()*0.030783);
}

double NNfunction_ss_cLsR::synapse0x2e3ac40() {
   return (neuron0x2e22eb0()*-0.00850261);
}

double NNfunction_ss_cLsR::synapse0x2e3ac80() {
   return (neuron0x2e231f0()*0.00482954);
}

double NNfunction_ss_cLsR::synapse0x2e3acc0() {
   return (neuron0x2e23530()*0.0256289);
}

double NNfunction_ss_cLsR::synapse0x2e3ad00() {
   return (neuron0x2e23870()*0.0804779);
}

double NNfunction_ss_cLsR::synapse0x2e3ad40() {
   return (neuron0x2e23bb0()*-0.514351);
}

double NNfunction_ss_cLsR::synapse0x2e3ad80() {
   return (neuron0x2e23ef0()*0.0179256);
}

double NNfunction_ss_cLsR::synapse0x2e3adc0() {
   return (neuron0x2e24230()*0.00100756);
}

double NNfunction_ss_cLsR::synapse0x2e3ae00() {
   return (neuron0x2e24570()*-0.0855775);
}

double NNfunction_ss_cLsR::synapse0x2e3a890() {
   return (neuron0x2e248b0()*0.00290688);
}

double NNfunction_ss_cLsR::synapse0x2e3a8d0() {
   return (neuron0x2e24e10()*-0.00864961);
}

double NNfunction_ss_cLsR::synapse0x2e3af50() {
   return (neuron0x2e25030()*-0.402829);
}

double NNfunction_ss_cLsR::synapse0x2e3af90() {
   return (neuron0x2e25370()*0.000478633);
}

double NNfunction_ss_cLsR::synapse0x2e3afd0() {
   return (neuron0x2e256b0()*0.017053);
}

double NNfunction_ss_cLsR::synapse0x2e3b010() {
   return (neuron0x2e259f0()*-0.00359814);
}

double NNfunction_ss_cLsR::synapse0x2e3b050() {
   return (neuron0x2e25d30()*0.0284921);
}

double NNfunction_ss_cLsR::synapse0x2e3b090() {
   return (neuron0x2e26070()*-0.0137805);
}

double NNfunction_ss_cLsR::synapse0x2e3b410() {
   return (neuron0x2e214b0()*-0.110978);
}

double NNfunction_ss_cLsR::synapse0x2e3b450() {
   return (neuron0x2e217f0()*0.305487);
}

double NNfunction_ss_cLsR::synapse0x2e3b490() {
   return (neuron0x2e21b30()*-0.502452);
}

double NNfunction_ss_cLsR::synapse0x2e3b4d0() {
   return (neuron0x2e21e70()*0.579479);
}

double NNfunction_ss_cLsR::synapse0x2e3b510() {
   return (neuron0x2e221b0()*-0.443124);
}

double NNfunction_ss_cLsR::synapse0x2e3b550() {
   return (neuron0x2e224f0()*0.623172);
}

double NNfunction_ss_cLsR::synapse0x2e3b590() {
   return (neuron0x2e22830()*-0.812605);
}

double NNfunction_ss_cLsR::synapse0x2e3b5d0() {
   return (neuron0x2e22b70()*-0.899519);
}

double NNfunction_ss_cLsR::synapse0x2e3b610() {
   return (neuron0x2e22eb0()*-0.379474);
}

double NNfunction_ss_cLsR::synapse0x2e3b650() {
   return (neuron0x2e231f0()*-1.21894);
}

double NNfunction_ss_cLsR::synapse0x2e3b690() {
   return (neuron0x2e23530()*0.222926);
}

double NNfunction_ss_cLsR::synapse0x2e3b6d0() {
   return (neuron0x2e23870()*0.0230828);
}

double NNfunction_ss_cLsR::synapse0x2e3b710() {
   return (neuron0x2e23bb0()*3.69955);
}

double NNfunction_ss_cLsR::synapse0x2e3b750() {
   return (neuron0x2e23ef0()*0.311442);
}

double NNfunction_ss_cLsR::synapse0x2e3b790() {
   return (neuron0x2e24230()*0.471956);
}

double NNfunction_ss_cLsR::synapse0x2e3b7d0() {
   return (neuron0x2e24570()*0.525032);
}

double NNfunction_ss_cLsR::synapse0x2e3b260() {
   return (neuron0x2e248b0()*-1.07179);
}

double NNfunction_ss_cLsR::synapse0x2e3b2a0() {
   return (neuron0x2e24e10()*-0.237995);
}

double NNfunction_ss_cLsR::synapse0x2e3b920() {
   return (neuron0x2e25030()*-0.219489);
}

double NNfunction_ss_cLsR::synapse0x2e3b960() {
   return (neuron0x2e25370()*0.0548298);
}

double NNfunction_ss_cLsR::synapse0x2e3b9a0() {
   return (neuron0x2e256b0()*0.621689);
}

double NNfunction_ss_cLsR::synapse0x2e3b9e0() {
   return (neuron0x2e259f0()*0.0838704);
}

double NNfunction_ss_cLsR::synapse0x2e3ba20() {
   return (neuron0x2e25d30()*0.340461);
}

double NNfunction_ss_cLsR::synapse0x2e3ba60() {
   return (neuron0x2e26070()*-0.413091);
}

double NNfunction_ss_cLsR::synapse0x2e3bde0() {
   return (neuron0x2e214b0()*0.833459);
}

double NNfunction_ss_cLsR::synapse0x2e303b0() {
   return (neuron0x2e217f0()*-0.088934);
}

double NNfunction_ss_cLsR::synapse0x2e303f0() {
   return (neuron0x2e21b30()*0.215095);
}

double NNfunction_ss_cLsR::synapse0x2e30430() {
   return (neuron0x2e21e70()*0.906781);
}

double NNfunction_ss_cLsR::synapse0x2e30680() {
   return (neuron0x2e221b0()*1.32203);
}

double NNfunction_ss_cLsR::synapse0x2e306c0() {
   return (neuron0x2e224f0()*-0.624411);
}

double NNfunction_ss_cLsR::synapse0x2e30700() {
   return (neuron0x2e22830()*1.03989);
}

double NNfunction_ss_cLsR::synapse0x2e30950() {
   return (neuron0x2e22b70()*0.117461);
}

double NNfunction_ss_cLsR::synapse0x2e30990() {
   return (neuron0x2e22eb0()*0.751768);
}

double NNfunction_ss_cLsR::synapse0x2e30be0() {
   return (neuron0x2e231f0()*-0.369481);
}

double NNfunction_ss_cLsR::synapse0x2e30c20() {
   return (neuron0x2e23530()*-0.271413);
}

double NNfunction_ss_cLsR::synapse0x2e30c60() {
   return (neuron0x2e23870()*0.45225);
}

double NNfunction_ss_cLsR::synapse0x2e30eb0() {
   return (neuron0x2e23bb0()*-0.00524441);
}

double NNfunction_ss_cLsR::synapse0x2e30ef0() {
   return (neuron0x2e23ef0()*0.480028);
}

double NNfunction_ss_cLsR::synapse0x2e31140() {
   return (neuron0x2e24230()*0.882561);
}

double NNfunction_ss_cLsR::synapse0x2e31180() {
   return (neuron0x2e24570()*1.12399);
}

double NNfunction_ss_cLsR::synapse0x2e3bc30() {
   return (neuron0x2e248b0()*0.285844);
}

double NNfunction_ss_cLsR::synapse0x2e3bc70() {
   return (neuron0x2e24e10()*-0.0840633);
}

double NNfunction_ss_cLsR::synapse0x2e312d0() {
   return (neuron0x2e25030()*0.100948);
}

double NNfunction_ss_cLsR::synapse0x2e317e0() {
   return (neuron0x2e25370()*-0.0510136);
}

double NNfunction_ss_cLsR::synapse0x2e31820() {
   return (neuron0x2e256b0()*-0.956544);
}

double NNfunction_ss_cLsR::synapse0x2e31860() {
   return (neuron0x2e259f0()*0.234802);
}

double NNfunction_ss_cLsR::synapse0x2e31ab0() {
   return (neuron0x2e25d30()*0.181249);
}

double NNfunction_ss_cLsR::synapse0x2e31af0() {
   return (neuron0x2e26070()*-0.139139);
}

double NNfunction_ss_cLsR::synapse0x2e313a0() {
   return (neuron0x2e214b0()*0.0237852);
}

double NNfunction_ss_cLsR::synapse0x2e313e0() {
   return (neuron0x2e217f0()*-0.0920824);
}

double NNfunction_ss_cLsR::synapse0x2e31420() {
   return (neuron0x2e21b30()*0.00376232);
}

double NNfunction_ss_cLsR::synapse0x2e31460() {
   return (neuron0x2e21e70()*-0.00592594);
}

double NNfunction_ss_cLsR::synapse0x2e31de0() {
   return (neuron0x2e221b0()*0.263176);
}

double NNfunction_ss_cLsR::synapse0x2e3e130() {
   return (neuron0x2e224f0()*-0.00747151);
}

double NNfunction_ss_cLsR::synapse0x2e3e170() {
   return (neuron0x2e22830()*0.0394498);
}

double NNfunction_ss_cLsR::synapse0x2e3e1b0() {
   return (neuron0x2e22b70()*-0.0544689);
}

double NNfunction_ss_cLsR::synapse0x2e3e1f0() {
   return (neuron0x2e22eb0()*-0.0355452);
}

double NNfunction_ss_cLsR::synapse0x2e3e230() {
   return (neuron0x2e231f0()*-0.06318);
}

double NNfunction_ss_cLsR::synapse0x2e3e270() {
   return (neuron0x2e23530()*-0.0293298);
}

double NNfunction_ss_cLsR::synapse0x2e3e2b0() {
   return (neuron0x2e23870()*-0.318491);
}

double NNfunction_ss_cLsR::synapse0x2e3e2f0() {
   return (neuron0x2e23bb0()*-1.03533);
}

double NNfunction_ss_cLsR::synapse0x2e3e330() {
   return (neuron0x2e23ef0()*-0.0591739);
}

double NNfunction_ss_cLsR::synapse0x2e3e370() {
   return (neuron0x2e24230()*0.0679199);
}

double NNfunction_ss_cLsR::synapse0x2e3e3b0() {
   return (neuron0x2e24570()*-0.0959929);
}

double NNfunction_ss_cLsR::synapse0x2e31cc0() {
   return (neuron0x2e248b0()*-0.0394768);
}

double NNfunction_ss_cLsR::synapse0x2e31d00() {
   return (neuron0x2e24e10()*-0.081884);
}

double NNfunction_ss_cLsR::synapse0x2e3e500() {
   return (neuron0x2e25030()*-2.66016);
}

double NNfunction_ss_cLsR::synapse0x2e3e540() {
   return (neuron0x2e25370()*-0.0143482);
}

double NNfunction_ss_cLsR::synapse0x2e3e580() {
   return (neuron0x2e256b0()*-0.0424012);
}

double NNfunction_ss_cLsR::synapse0x2e3e5c0() {
   return (neuron0x2e259f0()*0.0501712);
}

double NNfunction_ss_cLsR::synapse0x2e3e600() {
   return (neuron0x2e25d30()*0.000667271);
}

double NNfunction_ss_cLsR::synapse0x2e3e640() {
   return (neuron0x2e26070()*-0.160454);
}

double NNfunction_ss_cLsR::synapse0x2e3e9c0() {
   return (neuron0x2e214b0()*-0.0863547);
}

double NNfunction_ss_cLsR::synapse0x2e3ea00() {
   return (neuron0x2e217f0()*-0.297766);
}

double NNfunction_ss_cLsR::synapse0x2e3ea40() {
   return (neuron0x2e21b30()*-0.644446);
}

double NNfunction_ss_cLsR::synapse0x2e3ea80() {
   return (neuron0x2e21e70()*0.996194);
}

double NNfunction_ss_cLsR::synapse0x2e3eac0() {
   return (neuron0x2e221b0()*-0.0336614);
}

double NNfunction_ss_cLsR::synapse0x2e3eb00() {
   return (neuron0x2e224f0()*-0.129102);
}

double NNfunction_ss_cLsR::synapse0x2e3eb40() {
   return (neuron0x2e22830()*0.25005);
}

double NNfunction_ss_cLsR::synapse0x2e3eb80() {
   return (neuron0x2e22b70()*-0.0130953);
}

double NNfunction_ss_cLsR::synapse0x2e3ebc0() {
   return (neuron0x2e22eb0()*-0.0467613);
}

double NNfunction_ss_cLsR::synapse0x2e3ec00() {
   return (neuron0x2e231f0()*-0.0163171);
}

double NNfunction_ss_cLsR::synapse0x2e3ec40() {
   return (neuron0x2e23530()*-0.093209);
}

double NNfunction_ss_cLsR::synapse0x2e3ec80() {
   return (neuron0x2e23870()*0.256474);
}

double NNfunction_ss_cLsR::synapse0x2e3ecc0() {
   return (neuron0x2e23bb0()*-0.757152);
}

double NNfunction_ss_cLsR::synapse0x2e3ed00() {
   return (neuron0x2e23ef0()*-0.0682683);
}

double NNfunction_ss_cLsR::synapse0x2e3ed40() {
   return (neuron0x2e24230()*0.411145);
}

double NNfunction_ss_cLsR::synapse0x2e3ed80() {
   return (neuron0x2e24570()*-0.0931702);
}

double NNfunction_ss_cLsR::synapse0x2e3e810() {
   return (neuron0x2e248b0()*-0.181843);
}

double NNfunction_ss_cLsR::synapse0x2e3e850() {
   return (neuron0x2e24e10()*0.302696);
}

double NNfunction_ss_cLsR::synapse0x2e3eed0() {
   return (neuron0x2e25030()*-0.0738434);
}

double NNfunction_ss_cLsR::synapse0x2e3ef10() {
   return (neuron0x2e25370()*-0.0369367);
}

double NNfunction_ss_cLsR::synapse0x2e3ef50() {
   return (neuron0x2e256b0()*0.200275);
}

double NNfunction_ss_cLsR::synapse0x2e3ef90() {
   return (neuron0x2e259f0()*0.0773261);
}

double NNfunction_ss_cLsR::synapse0x2e3efd0() {
   return (neuron0x2e25d30()*0.21071);
}

double NNfunction_ss_cLsR::synapse0x2e3f010() {
   return (neuron0x2e26070()*-0.255648);
}

double NNfunction_ss_cLsR::synapse0x2e3f390() {
   return (neuron0x2e214b0()*0.487892);
}

double NNfunction_ss_cLsR::synapse0x2e3f3d0() {
   return (neuron0x2e217f0()*-0.406698);
}

double NNfunction_ss_cLsR::synapse0x2e3f410() {
   return (neuron0x2e21b30()*0.372849);
}

double NNfunction_ss_cLsR::synapse0x2e3f450() {
   return (neuron0x2e21e70()*1.98325);
}

double NNfunction_ss_cLsR::synapse0x2e3f490() {
   return (neuron0x2e221b0()*-0.204312);
}

double NNfunction_ss_cLsR::synapse0x2e3f4d0() {
   return (neuron0x2e224f0()*-0.681566);
}

double NNfunction_ss_cLsR::synapse0x2e3f510() {
   return (neuron0x2e22830()*-0.480282);
}

double NNfunction_ss_cLsR::synapse0x2e3f550() {
   return (neuron0x2e22b70()*-0.494432);
}

double NNfunction_ss_cLsR::synapse0x2e3f590() {
   return (neuron0x2e22eb0()*0.133814);
}

double NNfunction_ss_cLsR::synapse0x2e3f5d0() {
   return (neuron0x2e231f0()*-0.344163);
}

double NNfunction_ss_cLsR::synapse0x2e3f610() {
   return (neuron0x2e23530()*0.886455);
}

double NNfunction_ss_cLsR::synapse0x2e3f650() {
   return (neuron0x2e23870()*-0.0598839);
}

double NNfunction_ss_cLsR::synapse0x2e3f690() {
   return (neuron0x2e23bb0()*-1.4038);
}

double NNfunction_ss_cLsR::synapse0x2e3f6d0() {
   return (neuron0x2e23ef0()*-0.729405);
}

double NNfunction_ss_cLsR::synapse0x2e3f710() {
   return (neuron0x2e24230()*0.745245);
}

double NNfunction_ss_cLsR::synapse0x2e3f750() {
   return (neuron0x2e24570()*-1.62779);
}

double NNfunction_ss_cLsR::synapse0x2e3f1e0() {
   return (neuron0x2e248b0()*-0.440687);
}

double NNfunction_ss_cLsR::synapse0x2e3f220() {
   return (neuron0x2e24e10()*0.391573);
}

double NNfunction_ss_cLsR::synapse0x2e3f8a0() {
   return (neuron0x2e25030()*-0.840789);
}

double NNfunction_ss_cLsR::synapse0x2e3f8e0() {
   return (neuron0x2e25370()*-0.18513);
}

double NNfunction_ss_cLsR::synapse0x2e3f920() {
   return (neuron0x2e256b0()*-0.0357153);
}

double NNfunction_ss_cLsR::synapse0x2e3f960() {
   return (neuron0x2e259f0()*-0.0198954);
}

double NNfunction_ss_cLsR::synapse0x2e3f9a0() {
   return (neuron0x2e25d30()*0.737658);
}

double NNfunction_ss_cLsR::synapse0x2e3f9e0() {
   return (neuron0x2e26070()*0.239289);
}

double NNfunction_ss_cLsR::synapse0x2e3fd60() {
   return (neuron0x2e214b0()*0.691687);
}

double NNfunction_ss_cLsR::synapse0x2e3fda0() {
   return (neuron0x2e217f0()*-0.074316);
}

double NNfunction_ss_cLsR::synapse0x2e3fde0() {
   return (neuron0x2e21b30()*-0.760193);
}

double NNfunction_ss_cLsR::synapse0x2e3fe20() {
   return (neuron0x2e21e70()*-0.422033);
}

double NNfunction_ss_cLsR::synapse0x2e3fe60() {
   return (neuron0x2e221b0()*-0.0869729);
}

double NNfunction_ss_cLsR::synapse0x2e3fea0() {
   return (neuron0x2e224f0()*-0.30136);
}

double NNfunction_ss_cLsR::synapse0x2e3fee0() {
   return (neuron0x2e22830()*0.0943696);
}

double NNfunction_ss_cLsR::synapse0x2e3ff20() {
   return (neuron0x2e22b70()*-0.210129);
}

double NNfunction_ss_cLsR::synapse0x2e3ff60() {
   return (neuron0x2e22eb0()*-0.225111);
}

double NNfunction_ss_cLsR::synapse0x2e3ffa0() {
   return (neuron0x2e231f0()*0.422685);
}

double NNfunction_ss_cLsR::synapse0x2e3ffe0() {
   return (neuron0x2e23530()*0.0263718);
}

double NNfunction_ss_cLsR::synapse0x2e40020() {
   return (neuron0x2e23870()*-0.238632);
}

double NNfunction_ss_cLsR::synapse0x2e40060() {
   return (neuron0x2e23bb0()*-1.24714);
}

double NNfunction_ss_cLsR::synapse0x2e400a0() {
   return (neuron0x2e23ef0()*-0.187919);
}

double NNfunction_ss_cLsR::synapse0x2e400e0() {
   return (neuron0x2e24230()*0.453206);
}

double NNfunction_ss_cLsR::synapse0x2e40120() {
   return (neuron0x2e24570()*-0.309931);
}

double NNfunction_ss_cLsR::synapse0x2e3fbb0() {
   return (neuron0x2e248b0()*0.472108);
}

double NNfunction_ss_cLsR::synapse0x2e3fbf0() {
   return (neuron0x2e24e10()*-0.02801);
}

double NNfunction_ss_cLsR::synapse0x2e40270() {
   return (neuron0x2e25030()*-0.50721);
}

double NNfunction_ss_cLsR::synapse0x2e402b0() {
   return (neuron0x2e25370()*-0.0210836);
}

double NNfunction_ss_cLsR::synapse0x2e402f0() {
   return (neuron0x2e256b0()*0.0985418);
}

double NNfunction_ss_cLsR::synapse0x2e40330() {
   return (neuron0x2e259f0()*-0.25922);
}

double NNfunction_ss_cLsR::synapse0x2e40370() {
   return (neuron0x2e25d30()*-0.201585);
}

double NNfunction_ss_cLsR::synapse0x2e403b0() {
   return (neuron0x2e26070()*0.10106);
}

double NNfunction_ss_cLsR::synapse0x2e40730() {
   return (neuron0x2e214b0()*-0.053428);
}

double NNfunction_ss_cLsR::synapse0x2e40770() {
   return (neuron0x2e217f0()*0.0234874);
}

double NNfunction_ss_cLsR::synapse0x2e407b0() {
   return (neuron0x2e21b30()*0.500926);
}

double NNfunction_ss_cLsR::synapse0x2e407f0() {
   return (neuron0x2e21e70()*-2.81015);
}

double NNfunction_ss_cLsR::synapse0x2e40830() {
   return (neuron0x2e221b0()*-0.089069);
}

double NNfunction_ss_cLsR::synapse0x2e40870() {
   return (neuron0x2e224f0()*0.154981);
}

double NNfunction_ss_cLsR::synapse0x2e408b0() {
   return (neuron0x2e22830()*-0.0563221);
}

double NNfunction_ss_cLsR::synapse0x2e408f0() {
   return (neuron0x2e22b70()*-0.0280509);
}

double NNfunction_ss_cLsR::synapse0x2e40930() {
   return (neuron0x2e22eb0()*0.0282015);
}

double NNfunction_ss_cLsR::synapse0x2e40970() {
   return (neuron0x2e231f0()*-0.0171839);
}

double NNfunction_ss_cLsR::synapse0x2e409b0() {
   return (neuron0x2e23530()*-0.134823);
}

double NNfunction_ss_cLsR::synapse0x2e409f0() {
   return (neuron0x2e23870()*0.152141);
}

double NNfunction_ss_cLsR::synapse0x2e40a30() {
   return (neuron0x2e23bb0()*-0.801024);
}

double NNfunction_ss_cLsR::synapse0x2e40a70() {
   return (neuron0x2e23ef0()*-0.122426);
}

double NNfunction_ss_cLsR::synapse0x2e40ab0() {
   return (neuron0x2e24230()*0.0275141);
}

double NNfunction_ss_cLsR::synapse0x2e40af0() {
   return (neuron0x2e24570()*0.169137);
}

double NNfunction_ss_cLsR::synapse0x2e40580() {
   return (neuron0x2e248b0()*-0.060974);
}

double NNfunction_ss_cLsR::synapse0x2e405c0() {
   return (neuron0x2e24e10()*-0.0184901);
}

double NNfunction_ss_cLsR::synapse0x2e40c40() {
   return (neuron0x2e25030()*-0.332179);
}

double NNfunction_ss_cLsR::synapse0x2e40c80() {
   return (neuron0x2e25370()*0.0382114);
}

double NNfunction_ss_cLsR::synapse0x2e40cc0() {
   return (neuron0x2e256b0()*0.0139987);
}

double NNfunction_ss_cLsR::synapse0x2e40d00() {
   return (neuron0x2e259f0()*0.0746936);
}

double NNfunction_ss_cLsR::synapse0x2e40d40() {
   return (neuron0x2e25d30()*0.138946);
}

double NNfunction_ss_cLsR::synapse0x2e40d80() {
   return (neuron0x2e26070()*-0.0555012);
}

double NNfunction_ss_cLsR::synapse0x2e41100() {
   return (neuron0x2e214b0()*0.299714);
}

double NNfunction_ss_cLsR::synapse0x2e41140() {
   return (neuron0x2e217f0()*-0.100931);
}

double NNfunction_ss_cLsR::synapse0x2e41180() {
   return (neuron0x2e21b30()*-0.0463261);
}

double NNfunction_ss_cLsR::synapse0x2e411c0() {
   return (neuron0x2e21e70()*0.707543);
}

double NNfunction_ss_cLsR::synapse0x2e41200() {
   return (neuron0x2e221b0()*0.223804);
}

double NNfunction_ss_cLsR::synapse0x2e41240() {
   return (neuron0x2e224f0()*0.00105021);
}

double NNfunction_ss_cLsR::synapse0x2e41280() {
   return (neuron0x2e22830()*0.283148);
}

double NNfunction_ss_cLsR::synapse0x2e412c0() {
   return (neuron0x2e22b70()*-0.0694666);
}

double NNfunction_ss_cLsR::synapse0x2e41300() {
   return (neuron0x2e22eb0()*-0.296533);
}

double NNfunction_ss_cLsR::synapse0x2e41340() {
   return (neuron0x2e231f0()*-0.131782);
}

double NNfunction_ss_cLsR::synapse0x2e41380() {
   return (neuron0x2e23530()*-0.325124);
}

double NNfunction_ss_cLsR::synapse0x2e413c0() {
   return (neuron0x2e23870()*-0.362614);
}

double NNfunction_ss_cLsR::synapse0x2e41400() {
   return (neuron0x2e23bb0()*-0.454681);
}

double NNfunction_ss_cLsR::synapse0x2e41440() {
   return (neuron0x2e23ef0()*-0.0350909);
}

double NNfunction_ss_cLsR::synapse0x2e41480() {
   return (neuron0x2e24230()*0.309816);
}

double NNfunction_ss_cLsR::synapse0x2e414c0() {
   return (neuron0x2e24570()*0.145984);
}

double NNfunction_ss_cLsR::synapse0x2e40f50() {
   return (neuron0x2e248b0()*-0.323656);
}

double NNfunction_ss_cLsR::synapse0x2e40f90() {
   return (neuron0x2e24e10()*-0.386053);
}

double NNfunction_ss_cLsR::synapse0x2e41610() {
   return (neuron0x2e25030()*0.586944);
}

double NNfunction_ss_cLsR::synapse0x2e41650() {
   return (neuron0x2e25370()*0.0744835);
}

double NNfunction_ss_cLsR::synapse0x2e41690() {
   return (neuron0x2e256b0()*0.226338);
}

double NNfunction_ss_cLsR::synapse0x2e416d0() {
   return (neuron0x2e259f0()*0.0526478);
}

double NNfunction_ss_cLsR::synapse0x2e41710() {
   return (neuron0x2e25d30()*0.110004);
}

double NNfunction_ss_cLsR::synapse0x2e41750() {
   return (neuron0x2e26070()*-0.0349395);
}

double NNfunction_ss_cLsR::synapse0x2e41ad0() {
   return (neuron0x2e214b0()*-0.0159162);
}

double NNfunction_ss_cLsR::synapse0x2e41b10() {
   return (neuron0x2e217f0()*0.0234307);
}

double NNfunction_ss_cLsR::synapse0x2e41b50() {
   return (neuron0x2e21b30()*-0.102553);
}

double NNfunction_ss_cLsR::synapse0x2e41b90() {
   return (neuron0x2e21e70()*1.26234);
}

double NNfunction_ss_cLsR::synapse0x2e41bd0() {
   return (neuron0x2e221b0()*0.00725644);
}

double NNfunction_ss_cLsR::synapse0x2e41c10() {
   return (neuron0x2e224f0()*-0.00233484);
}

double NNfunction_ss_cLsR::synapse0x2e41c50() {
   return (neuron0x2e22830()*-0.0183139);
}

double NNfunction_ss_cLsR::synapse0x2e41c90() {
   return (neuron0x2e22b70()*9.95601e-05);
}

double NNfunction_ss_cLsR::synapse0x2e41cd0() {
   return (neuron0x2e22eb0()*-0.00763932);
}

double NNfunction_ss_cLsR::synapse0x2e41d10() {
   return (neuron0x2e231f0()*-0.000911541);
}

double NNfunction_ss_cLsR::synapse0x2e41d50() {
   return (neuron0x2e23530()*-0.0204518);
}

double NNfunction_ss_cLsR::synapse0x2e41d90() {
   return (neuron0x2e23870()*0.0354728);
}

double NNfunction_ss_cLsR::synapse0x2e41dd0() {
   return (neuron0x2e23bb0()*-0.0227426);
}

double NNfunction_ss_cLsR::synapse0x2e41e10() {
   return (neuron0x2e23ef0()*-0.0463339);
}

double NNfunction_ss_cLsR::synapse0x2e41e50() {
   return (neuron0x2e24230()*0.073036);
}

double NNfunction_ss_cLsR::synapse0x2e41e90() {
   return (neuron0x2e24570()*0.0443604);
}

double NNfunction_ss_cLsR::synapse0x2e41920() {
   return (neuron0x2e248b0()*-0.0461989);
}

double NNfunction_ss_cLsR::synapse0x2e41960() {
   return (neuron0x2e24e10()*0.0356237);
}

double NNfunction_ss_cLsR::synapse0x2e41fe0() {
   return (neuron0x2e25030()*-0.00899855);
}

double NNfunction_ss_cLsR::synapse0x2e42020() {
   return (neuron0x2e25370()*0.000369257);
}

double NNfunction_ss_cLsR::synapse0x2e42060() {
   return (neuron0x2e256b0()*0.0378348);
}

double NNfunction_ss_cLsR::synapse0x2e420a0() {
   return (neuron0x2e259f0()*0.0246429);
}

double NNfunction_ss_cLsR::synapse0x2e420e0() {
   return (neuron0x2e25d30()*0.0213223);
}

double NNfunction_ss_cLsR::synapse0x2e42120() {
   return (neuron0x2e26070()*-0.00668893);
}

double NNfunction_ss_cLsR::synapse0x2e424a0() {
   return (neuron0x2e214b0()*-0.106107);
}

double NNfunction_ss_cLsR::synapse0x2e424e0() {
   return (neuron0x2e217f0()*0.00846731);
}

double NNfunction_ss_cLsR::synapse0x2e42520() {
   return (neuron0x2e21b30()*-0.0425911);
}

double NNfunction_ss_cLsR::synapse0x2e42560() {
   return (neuron0x2e21e70()*2.40342);
}

double NNfunction_ss_cLsR::synapse0x2e425a0() {
   return (neuron0x2e221b0()*0.069047);
}

double NNfunction_ss_cLsR::synapse0x2e425e0() {
   return (neuron0x2e224f0()*0.244013);
}

double NNfunction_ss_cLsR::synapse0x2e42620() {
   return (neuron0x2e22830()*-0.0413971);
}

double NNfunction_ss_cLsR::synapse0x2e42660() {
   return (neuron0x2e22b70()*0.108774);
}

double NNfunction_ss_cLsR::synapse0x2e426a0() {
   return (neuron0x2e22eb0()*0.0513682);
}

double NNfunction_ss_cLsR::synapse0x2e426e0() {
   return (neuron0x2e231f0()*-0.012377);
}

double NNfunction_ss_cLsR::synapse0x2e42720() {
   return (neuron0x2e23530()*-0.0278646);
}

double NNfunction_ss_cLsR::synapse0x2e42760() {
   return (neuron0x2e23870()*0.0950535);
}

double NNfunction_ss_cLsR::synapse0x2e427a0() {
   return (neuron0x2e23bb0()*-0.338734);
}

double NNfunction_ss_cLsR::synapse0x2e427e0() {
   return (neuron0x2e23ef0()*-0.25532);
}

double NNfunction_ss_cLsR::synapse0x2e42820() {
   return (neuron0x2e24230()*-0.0942268);
}

double NNfunction_ss_cLsR::synapse0x2e42860() {
   return (neuron0x2e24570()*0.0809035);
}

double NNfunction_ss_cLsR::synapse0x2e422f0() {
   return (neuron0x2e248b0()*-0.0268614);
}

double NNfunction_ss_cLsR::synapse0x2e42330() {
   return (neuron0x2e24e10()*-0.0309221);
}

double NNfunction_ss_cLsR::synapse0x2e429b0() {
   return (neuron0x2e25030()*-0.251324);
}

double NNfunction_ss_cLsR::synapse0x2e429f0() {
   return (neuron0x2e25370()*0.0560432);
}

double NNfunction_ss_cLsR::synapse0x2e42a30() {
   return (neuron0x2e256b0()*0.16833);
}

double NNfunction_ss_cLsR::synapse0x2e42a70() {
   return (neuron0x2e259f0()*-0.101824);
}

double NNfunction_ss_cLsR::synapse0x2e42ab0() {
   return (neuron0x2e25d30()*0.00591831);
}

double NNfunction_ss_cLsR::synapse0x2e42af0() {
   return (neuron0x2e26070()*-0.0875567);
}

double NNfunction_ss_cLsR::synapse0x2e2b5a0() {
   return (neuron0x2e214b0()*0.325136);
}

double NNfunction_ss_cLsR::synapse0x2e2b5e0() {
   return (neuron0x2e217f0()*-0.171451);
}

double NNfunction_ss_cLsR::synapse0x2e2b620() {
   return (neuron0x2e21b30()*0.101952);
}

double NNfunction_ss_cLsR::synapse0x2e2b660() {
   return (neuron0x2e21e70()*1.25633);
}

double NNfunction_ss_cLsR::synapse0x2e2b6a0() {
   return (neuron0x2e221b0()*0.0609118);
}

double NNfunction_ss_cLsR::synapse0x2e2b6e0() {
   return (neuron0x2e224f0()*0.289532);
}

double NNfunction_ss_cLsR::synapse0x2e2b720() {
   return (neuron0x2e22830()*0.136832);
}

double NNfunction_ss_cLsR::synapse0x2e2b760() {
   return (neuron0x2e22b70()*0.0402568);
}

double NNfunction_ss_cLsR::synapse0x2e43280() {
   return (neuron0x2e22eb0()*-0.242176);
}

double NNfunction_ss_cLsR::synapse0x2e432c0() {
   return (neuron0x2e231f0()*-0.312837);
}

double NNfunction_ss_cLsR::synapse0x2e43300() {
   return (neuron0x2e23530()*-0.0543924);
}

double NNfunction_ss_cLsR::synapse0x2e43340() {
   return (neuron0x2e23870()*0.483862);
}

double NNfunction_ss_cLsR::synapse0x2e43380() {
   return (neuron0x2e23bb0()*0.0637643);
}

double NNfunction_ss_cLsR::synapse0x2e433c0() {
   return (neuron0x2e23ef0()*0.415415);
}

double NNfunction_ss_cLsR::synapse0x2e43400() {
   return (neuron0x2e24230()*-0.0642676);
}

double NNfunction_ss_cLsR::synapse0x2e43440() {
   return (neuron0x2e24570()*0.350916);
}

double NNfunction_ss_cLsR::synapse0x2e42cc0() {
   return (neuron0x2e248b0()*-0.107267);
}

double NNfunction_ss_cLsR::synapse0x2e42d00() {
   return (neuron0x2e24e10()*-0.357912);
}

double NNfunction_ss_cLsR::synapse0x2e43590() {
   return (neuron0x2e25030()*0.0217199);
}

double NNfunction_ss_cLsR::synapse0x2e435d0() {
   return (neuron0x2e25370()*-0.019567);
}

double NNfunction_ss_cLsR::synapse0x2e43610() {
   return (neuron0x2e256b0()*-0.0860369);
}

double NNfunction_ss_cLsR::synapse0x2e43650() {
   return (neuron0x2e259f0()*-0.0120552);
}

double NNfunction_ss_cLsR::synapse0x2e43690() {
   return (neuron0x2e25d30()*-0.0432348);
}

double NNfunction_ss_cLsR::synapse0x2e436d0() {
   return (neuron0x2e26070()*0.480718);
}

double NNfunction_ss_cLsR::synapse0x2e43a50() {
   return (neuron0x2e214b0()*0.222265);
}

double NNfunction_ss_cLsR::synapse0x2e43a90() {
   return (neuron0x2e217f0()*0.425885);
}

double NNfunction_ss_cLsR::synapse0x2e43ad0() {
   return (neuron0x2e21b30()*0.243942);
}

double NNfunction_ss_cLsR::synapse0x2e43b10() {
   return (neuron0x2e21e70()*1.57346);
}

double NNfunction_ss_cLsR::synapse0x2e43b50() {
   return (neuron0x2e221b0()*-0.256155);
}

double NNfunction_ss_cLsR::synapse0x2e43b90() {
   return (neuron0x2e224f0()*-0.578705);
}

double NNfunction_ss_cLsR::synapse0x2e43bd0() {
   return (neuron0x2e22830()*-0.288295);
}

double NNfunction_ss_cLsR::synapse0x2e43c10() {
   return (neuron0x2e22b70()*-0.114082);
}

double NNfunction_ss_cLsR::synapse0x2e43c50() {
   return (neuron0x2e22eb0()*0.0440795);
}

double NNfunction_ss_cLsR::synapse0x2e43c90() {
   return (neuron0x2e231f0()*0.141997);
}

double NNfunction_ss_cLsR::synapse0x2e43cd0() {
   return (neuron0x2e23530()*0.16345);
}

double NNfunction_ss_cLsR::synapse0x2e43d10() {
   return (neuron0x2e23870()*0.0225221);
}

double NNfunction_ss_cLsR::synapse0x2e43d50() {
   return (neuron0x2e23bb0()*0.292394);
}

double NNfunction_ss_cLsR::synapse0x2e43d90() {
   return (neuron0x2e23ef0()*-0.0809315);
}

double NNfunction_ss_cLsR::synapse0x2e43dd0() {
   return (neuron0x2e24230()*0.11654);
}

double NNfunction_ss_cLsR::synapse0x2e43e10() {
   return (neuron0x2e24570()*-0.140614);
}

double NNfunction_ss_cLsR::synapse0x2e438a0() {
   return (neuron0x2e248b0()*-0.0872339);
}

double NNfunction_ss_cLsR::synapse0x2e438e0() {
   return (neuron0x2e24e10()*-0.0428098);
}

double NNfunction_ss_cLsR::synapse0x2e43f60() {
   return (neuron0x2e25030()*0.202365);
}

double NNfunction_ss_cLsR::synapse0x2e43fa0() {
   return (neuron0x2e25370()*0.0576698);
}

double NNfunction_ss_cLsR::synapse0x2e43fe0() {
   return (neuron0x2e256b0()*-0.0886369);
}

double NNfunction_ss_cLsR::synapse0x2e44020() {
   return (neuron0x2e259f0()*0.0452554);
}

double NNfunction_ss_cLsR::synapse0x2e44060() {
   return (neuron0x2e25d30()*-0.00779211);
}

double NNfunction_ss_cLsR::synapse0x2e440a0() {
   return (neuron0x2e26070()*-0.0848145);
}

double NNfunction_ss_cLsR::synapse0x2e44420() {
   return (neuron0x2e214b0()*0.156737);
}

double NNfunction_ss_cLsR::synapse0x2e44460() {
   return (neuron0x2e217f0()*-0.0450205);
}

double NNfunction_ss_cLsR::synapse0x2e444a0() {
   return (neuron0x2e21b30()*0.896066);
}

double NNfunction_ss_cLsR::synapse0x2e444e0() {
   return (neuron0x2e21e70()*0.608308);
}

double NNfunction_ss_cLsR::synapse0x2e44520() {
   return (neuron0x2e221b0()*0.211547);
}

double NNfunction_ss_cLsR::synapse0x2e44560() {
   return (neuron0x2e224f0()*0.119947);
}

double NNfunction_ss_cLsR::synapse0x2e445a0() {
   return (neuron0x2e22830()*0.0752283);
}

double NNfunction_ss_cLsR::synapse0x2e445e0() {
   return (neuron0x2e22b70()*0.142247);
}

double NNfunction_ss_cLsR::synapse0x2e44620() {
   return (neuron0x2e22eb0()*0.176005);
}

double NNfunction_ss_cLsR::synapse0x2e44660() {
   return (neuron0x2e231f0()*-0.106221);
}

double NNfunction_ss_cLsR::synapse0x2e446a0() {
   return (neuron0x2e23530()*-0.17081);
}

double NNfunction_ss_cLsR::synapse0x2e446e0() {
   return (neuron0x2e23870()*-0.471717);
}

double NNfunction_ss_cLsR::synapse0x2e44720() {
   return (neuron0x2e23bb0()*-0.065118);
}

double NNfunction_ss_cLsR::synapse0x2e44760() {
   return (neuron0x2e23ef0()*0.438015);
}

double NNfunction_ss_cLsR::synapse0x2e447a0() {
   return (neuron0x2e24230()*-0.0345551);
}

double NNfunction_ss_cLsR::synapse0x2e447e0() {
   return (neuron0x2e24570()*-0.36396);
}

double NNfunction_ss_cLsR::synapse0x2e44270() {
   return (neuron0x2e248b0()*0.104477);
}

double NNfunction_ss_cLsR::synapse0x2e442b0() {
   return (neuron0x2e24e10()*-0.22619);
}

double NNfunction_ss_cLsR::synapse0x2e34de0() {
   return (neuron0x2e25030()*0.0392986);
}

double NNfunction_ss_cLsR::synapse0x2e34e20() {
   return (neuron0x2e25370()*-0.0523981);
}

double NNfunction_ss_cLsR::synapse0x2e34e60() {
   return (neuron0x2e256b0()*-0.0250886);
}

double NNfunction_ss_cLsR::synapse0x2e34ea0() {
   return (neuron0x2e259f0()*-0.0716459);
}

double NNfunction_ss_cLsR::synapse0x2e34ee0() {
   return (neuron0x2e25d30()*-0.067092);
}

double NNfunction_ss_cLsR::synapse0x2e34f20() {
   return (neuron0x2e26070()*-0.0889137);
}

double NNfunction_ss_cLsR::synapse0x2e352a0() {
   return (neuron0x2e214b0()*-0.0450523);
}

double NNfunction_ss_cLsR::synapse0x2e352e0() {
   return (neuron0x2e217f0()*-0.0569085);
}

double NNfunction_ss_cLsR::synapse0x2e35320() {
   return (neuron0x2e21b30()*-0.0558977);
}

double NNfunction_ss_cLsR::synapse0x2e35360() {
   return (neuron0x2e21e70()*-0.344518);
}

double NNfunction_ss_cLsR::synapse0x2e353a0() {
   return (neuron0x2e221b0()*0.0991216);
}

double NNfunction_ss_cLsR::synapse0x2e353e0() {
   return (neuron0x2e224f0()*0.521861);
}

double NNfunction_ss_cLsR::synapse0x2e35420() {
   return (neuron0x2e22830()*1.32966);
}

double NNfunction_ss_cLsR::synapse0x2e35460() {
   return (neuron0x2e22b70()*0.704304);
}

double NNfunction_ss_cLsR::synapse0x2e354a0() {
   return (neuron0x2e22eb0()*-0.575377);
}

double NNfunction_ss_cLsR::synapse0x2e354e0() {
   return (neuron0x2e231f0()*0.423831);
}

double NNfunction_ss_cLsR::synapse0x2e35520() {
   return (neuron0x2e23530()*-0.14815);
}

double NNfunction_ss_cLsR::synapse0x2e35560() {
   return (neuron0x2e23870()*-0.862191);
}

double NNfunction_ss_cLsR::synapse0x2e355a0() {
   return (neuron0x2e23bb0()*0.0391918);
}

double NNfunction_ss_cLsR::synapse0x2e355e0() {
   return (neuron0x2e23ef0()*1.40172);
}

double NNfunction_ss_cLsR::synapse0x2e35620() {
   return (neuron0x2e24230()*0.512453);
}

double NNfunction_ss_cLsR::synapse0x2e35660() {
   return (neuron0x2e24570()*1.71376);
}

double NNfunction_ss_cLsR::synapse0x2e350f0() {
   return (neuron0x2e248b0()*1.16973);
}

double NNfunction_ss_cLsR::synapse0x2e35130() {
   return (neuron0x2e24e10()*-0.452744);
}

double NNfunction_ss_cLsR::synapse0x2e357b0() {
   return (neuron0x2e25030()*0.653742);
}

double NNfunction_ss_cLsR::synapse0x2e357f0() {
   return (neuron0x2e25370()*-0.793718);
}

double NNfunction_ss_cLsR::synapse0x2e35830() {
   return (neuron0x2e256b0()*0.173242);
}

double NNfunction_ss_cLsR::synapse0x2e35870() {
   return (neuron0x2e259f0()*-0.0226733);
}

double NNfunction_ss_cLsR::synapse0x2e358b0() {
   return (neuron0x2e25d30()*-1.22185);
}

double NNfunction_ss_cLsR::synapse0x2e358f0() {
   return (neuron0x2e26070()*0.473515);
}

double NNfunction_ss_cLsR::synapse0x2e35c70() {
   return (neuron0x2e214b0()*-0.009006);
}

double NNfunction_ss_cLsR::synapse0x2e35cb0() {
   return (neuron0x2e217f0()*-1.11925);
}

double NNfunction_ss_cLsR::synapse0x2e35cf0() {
   return (neuron0x2e21b30()*-0.192878);
}

double NNfunction_ss_cLsR::synapse0x2e35d30() {
   return (neuron0x2e21e70()*0.0389859);
}

double NNfunction_ss_cLsR::synapse0x2e35d70() {
   return (neuron0x2e221b0()*-0.899077);
}

double NNfunction_ss_cLsR::synapse0x2e35db0() {
   return (neuron0x2e224f0()*-0.145389);
}

double NNfunction_ss_cLsR::synapse0x2e35df0() {
   return (neuron0x2e22830()*-0.389273);
}

double NNfunction_ss_cLsR::synapse0x2e35e30() {
   return (neuron0x2e22b70()*0.487401);
}

double NNfunction_ss_cLsR::synapse0x2e35e70() {
   return (neuron0x2e22eb0()*-0.276196);
}

double NNfunction_ss_cLsR::synapse0x2e35eb0() {
   return (neuron0x2e231f0()*-0.0317951);
}

double NNfunction_ss_cLsR::synapse0x2e35ef0() {
   return (neuron0x2e23530()*0.356055);
}

double NNfunction_ss_cLsR::synapse0x2e35f30() {
   return (neuron0x2e23870()*-0.360888);
}

double NNfunction_ss_cLsR::synapse0x2e35f70() {
   return (neuron0x2e23bb0()*-0.801695);
}

double NNfunction_ss_cLsR::synapse0x2e35fb0() {
   return (neuron0x2e23ef0()*0.632479);
}

double NNfunction_ss_cLsR::synapse0x2e35ff0() {
   return (neuron0x2e24230()*-0.867555);
}

double NNfunction_ss_cLsR::synapse0x2e36030() {
   return (neuron0x2e24570()*-0.499947);
}

double NNfunction_ss_cLsR::synapse0x2e35ac0() {
   return (neuron0x2e248b0()*1.2347);
}

double NNfunction_ss_cLsR::synapse0x2e35b00() {
   return (neuron0x2e24e10()*-0.908433);
}

double NNfunction_ss_cLsR::synapse0x2e36180() {
   return (neuron0x2e25030()*-0.249145);
}

double NNfunction_ss_cLsR::synapse0x2e361c0() {
   return (neuron0x2e25370()*0.308521);
}

double NNfunction_ss_cLsR::synapse0x2e36200() {
   return (neuron0x2e256b0()*-0.829224);
}

double NNfunction_ss_cLsR::synapse0x2e36240() {
   return (neuron0x2e259f0()*-0.074521);
}

double NNfunction_ss_cLsR::synapse0x2e36280() {
   return (neuron0x2e25d30()*0.398043);
}

double NNfunction_ss_cLsR::synapse0x2e362c0() {
   return (neuron0x2e26070()*-0.412976);
}

double NNfunction_ss_cLsR::synapse0x2e36640() {
   return (neuron0x2e214b0()*-0.0327732);
}

double NNfunction_ss_cLsR::synapse0x2e36680() {
   return (neuron0x2e217f0()*-0.0444682);
}

double NNfunction_ss_cLsR::synapse0x2e366c0() {
   return (neuron0x2e21b30()*-0.0176808);
}

double NNfunction_ss_cLsR::synapse0x2e36700() {
   return (neuron0x2e21e70()*-0.212689);
}

double NNfunction_ss_cLsR::synapse0x2e36740() {
   return (neuron0x2e221b0()*0.0254669);
}

double NNfunction_ss_cLsR::synapse0x2e36780() {
   return (neuron0x2e224f0()*0.0116826);
}

double NNfunction_ss_cLsR::synapse0x2e367c0() {
   return (neuron0x2e22830()*0.0251933);
}

double NNfunction_ss_cLsR::synapse0x2e36800() {
   return (neuron0x2e22b70()*0.00957313);
}

double NNfunction_ss_cLsR::synapse0x2e36840() {
   return (neuron0x2e22eb0()*-0.0398387);
}

double NNfunction_ss_cLsR::synapse0x2e36880() {
   return (neuron0x2e231f0()*0.0168302);
}

double NNfunction_ss_cLsR::synapse0x2e368c0() {
   return (neuron0x2e23530()*0.00560125);
}

double NNfunction_ss_cLsR::synapse0x2e36900() {
   return (neuron0x2e23870()*-0.04359);
}

double NNfunction_ss_cLsR::synapse0x2e36940() {
   return (neuron0x2e23bb0()*-1.25542);
}

double NNfunction_ss_cLsR::synapse0x2e36980() {
   return (neuron0x2e23ef0()*-0.0268643);
}

double NNfunction_ss_cLsR::synapse0x2e369c0() {
   return (neuron0x2e24230()*0.016634);
}

double NNfunction_ss_cLsR::synapse0x2e36a00() {
   return (neuron0x2e24570()*-0.0365384);
}

double NNfunction_ss_cLsR::synapse0x2e36490() {
   return (neuron0x2e248b0()*0.00712717);
}

double NNfunction_ss_cLsR::synapse0x2e364d0() {
   return (neuron0x2e24e10()*0.0405578);
}

double NNfunction_ss_cLsR::synapse0x2e36b50() {
   return (neuron0x2e25030()*0.485513);
}

double NNfunction_ss_cLsR::synapse0x2e36b90() {
   return (neuron0x2e25370()*-0.00117688);
}

double NNfunction_ss_cLsR::synapse0x2e36bd0() {
   return (neuron0x2e256b0()*0.0073504);
}

double NNfunction_ss_cLsR::synapse0x2e36c10() {
   return (neuron0x2e259f0()*3.95191e-05);
}

double NNfunction_ss_cLsR::synapse0x2e36c50() {
   return (neuron0x2e25d30()*0.0107244);
}

double NNfunction_ss_cLsR::synapse0x2e36c90() {
   return (neuron0x2e26070()*-0.0295641);
}

double NNfunction_ss_cLsR::synapse0x2e48b60() {
   return (neuron0x2e214b0()*-0.00660267);
}

double NNfunction_ss_cLsR::synapse0x2e48ba0() {
   return (neuron0x2e217f0()*0.337246);
}

double NNfunction_ss_cLsR::synapse0x2e48be0() {
   return (neuron0x2e21b30()*-0.642909);
}

double NNfunction_ss_cLsR::synapse0x2e48c20() {
   return (neuron0x2e21e70()*0.823637);
}

double NNfunction_ss_cLsR::synapse0x2e48c60() {
   return (neuron0x2e221b0()*0.440379);
}

double NNfunction_ss_cLsR::synapse0x2e48ca0() {
   return (neuron0x2e224f0()*0.0632562);
}

double NNfunction_ss_cLsR::synapse0x2e48ce0() {
   return (neuron0x2e22830()*0.192829);
}

double NNfunction_ss_cLsR::synapse0x2e48d20() {
   return (neuron0x2e22b70()*-0.0216866);
}

double NNfunction_ss_cLsR::synapse0x2e48d60() {
   return (neuron0x2e22eb0()*0.00501107);
}

double NNfunction_ss_cLsR::synapse0x2e48da0() {
   return (neuron0x2e231f0()*-0.176202);
}

double NNfunction_ss_cLsR::synapse0x2e48de0() {
   return (neuron0x2e23530()*-0.015417);
}

double NNfunction_ss_cLsR::synapse0x2e48e20() {
   return (neuron0x2e23870()*-0.389008);
}

double NNfunction_ss_cLsR::synapse0x2e48e60() {
   return (neuron0x2e23bb0()*0.221053);
}

double NNfunction_ss_cLsR::synapse0x2e48ea0() {
   return (neuron0x2e23ef0()*-0.0146909);
}

double NNfunction_ss_cLsR::synapse0x2e48ee0() {
   return (neuron0x2e24230()*-0.252097);
}

double NNfunction_ss_cLsR::synapse0x2e48f20() {
   return (neuron0x2e24570()*-0.243167);
}

double NNfunction_ss_cLsR::synapse0x2e36cd0() {
   return (neuron0x2e248b0()*0.379905);
}

double NNfunction_ss_cLsR::synapse0x2e36d10() {
   return (neuron0x2e24e10()*0.0962755);
}

double NNfunction_ss_cLsR::synapse0x2e49070() {
   return (neuron0x2e25030()*0.263599);
}

double NNfunction_ss_cLsR::synapse0x2e490b0() {
   return (neuron0x2e25370()*-0.0755222);
}

double NNfunction_ss_cLsR::synapse0x2e490f0() {
   return (neuron0x2e256b0()*-0.0890937);
}

double NNfunction_ss_cLsR::synapse0x2e49130() {
   return (neuron0x2e259f0()*-0.194076);
}

double NNfunction_ss_cLsR::synapse0x2e49170() {
   return (neuron0x2e25d30()*-0.0857582);
}

double NNfunction_ss_cLsR::synapse0x2e491b0() {
   return (neuron0x2e26070()*0.0882649);
}

double NNfunction_ss_cLsR::synapse0x2e49530() {
   return (neuron0x2e214b0()*-1.92677);
}

double NNfunction_ss_cLsR::synapse0x2e49570() {
   return (neuron0x2e217f0()*0.34115);
}

double NNfunction_ss_cLsR::synapse0x2e495b0() {
   return (neuron0x2e21b30()*-0.557281);
}

double NNfunction_ss_cLsR::synapse0x2e495f0() {
   return (neuron0x2e21e70()*0.354835);
}

double NNfunction_ss_cLsR::synapse0x2e49630() {
   return (neuron0x2e221b0()*0.0525107);
}

double NNfunction_ss_cLsR::synapse0x2e49670() {
   return (neuron0x2e224f0()*0.114136);
}

double NNfunction_ss_cLsR::synapse0x2e496b0() {
   return (neuron0x2e22830()*-0.0727721);
}

double NNfunction_ss_cLsR::synapse0x2e496f0() {
   return (neuron0x2e22b70()*-0.052755);
}

double NNfunction_ss_cLsR::synapse0x2e49730() {
   return (neuron0x2e22eb0()*-0.220831);
}

double NNfunction_ss_cLsR::synapse0x2e49770() {
   return (neuron0x2e231f0()*-0.73068);
}

double NNfunction_ss_cLsR::synapse0x2e497b0() {
   return (neuron0x2e23530()*-0.201801);
}

double NNfunction_ss_cLsR::synapse0x2e497f0() {
   return (neuron0x2e23870()*0.44658);
}

double NNfunction_ss_cLsR::synapse0x2e49830() {
   return (neuron0x2e23bb0()*-0.793332);
}

double NNfunction_ss_cLsR::synapse0x2e49870() {
   return (neuron0x2e23ef0()*0.446915);
}

double NNfunction_ss_cLsR::synapse0x2e498b0() {
   return (neuron0x2e24230()*-0.82409);
}

double NNfunction_ss_cLsR::synapse0x2e498f0() {
   return (neuron0x2e24570()*0.794573);
}

double NNfunction_ss_cLsR::synapse0x2e49380() {
   return (neuron0x2e248b0()*-0.112951);
}

double NNfunction_ss_cLsR::synapse0x2e493c0() {
   return (neuron0x2e24e10()*-0.2838);
}

double NNfunction_ss_cLsR::synapse0x2e49a40() {
   return (neuron0x2e25030()*-0.447466);
}

double NNfunction_ss_cLsR::synapse0x2e49a80() {
   return (neuron0x2e25370()*-1.47947);
}

double NNfunction_ss_cLsR::synapse0x2e49ac0() {
   return (neuron0x2e256b0()*0.24676);
}

double NNfunction_ss_cLsR::synapse0x2e49b00() {
   return (neuron0x2e259f0()*0.112098);
}

double NNfunction_ss_cLsR::synapse0x2e49b40() {
   return (neuron0x2e25d30()*-0.249658);
}

double NNfunction_ss_cLsR::synapse0x2e49b80() {
   return (neuron0x2e26070()*-1.00192);
}

double NNfunction_ss_cLsR::synapse0x2e49f00() {
   return (neuron0x2e214b0()*0.0488352);
}

double NNfunction_ss_cLsR::synapse0x2e49f40() {
   return (neuron0x2e217f0()*0.600043);
}

double NNfunction_ss_cLsR::synapse0x2e49f80() {
   return (neuron0x2e21b30()*0.363973);
}

double NNfunction_ss_cLsR::synapse0x2e49fc0() {
   return (neuron0x2e21e70()*-0.969286);
}

double NNfunction_ss_cLsR::synapse0x2e4a000() {
   return (neuron0x2e221b0()*-0.554286);
}

double NNfunction_ss_cLsR::synapse0x2e4a040() {
   return (neuron0x2e224f0()*0.480018);
}

double NNfunction_ss_cLsR::synapse0x2e4a080() {
   return (neuron0x2e22830()*-0.293968);
}

double NNfunction_ss_cLsR::synapse0x2e4a0c0() {
   return (neuron0x2e22b70()*-0.251506);
}

double NNfunction_ss_cLsR::synapse0x2e4a100() {
   return (neuron0x2e22eb0()*-0.225358);
}

double NNfunction_ss_cLsR::synapse0x2e4a140() {
   return (neuron0x2e231f0()*-0.237673);
}

double NNfunction_ss_cLsR::synapse0x2e4a180() {
   return (neuron0x2e23530()*0.118748);
}

double NNfunction_ss_cLsR::synapse0x2e4a1c0() {
   return (neuron0x2e23870()*0.349742);
}

double NNfunction_ss_cLsR::synapse0x2e4a200() {
   return (neuron0x2e23bb0()*0.687653);
}

double NNfunction_ss_cLsR::synapse0x2e4a240() {
   return (neuron0x2e23ef0()*0.94324);
}

double NNfunction_ss_cLsR::synapse0x2e4a280() {
   return (neuron0x2e24230()*0.594048);
}

double NNfunction_ss_cLsR::synapse0x2e4a2c0() {
   return (neuron0x2e24570()*0.295748);
}

double NNfunction_ss_cLsR::synapse0x2e49d50() {
   return (neuron0x2e248b0()*0.99118);
}

double NNfunction_ss_cLsR::synapse0x2e49d90() {
   return (neuron0x2e24e10()*0.157163);
}

double NNfunction_ss_cLsR::synapse0x2e4a410() {
   return (neuron0x2e25030()*0.689111);
}

double NNfunction_ss_cLsR::synapse0x2e4a450() {
   return (neuron0x2e25370()*0.0741487);
}

double NNfunction_ss_cLsR::synapse0x2e4a490() {
   return (neuron0x2e256b0()*0.877536);
}

double NNfunction_ss_cLsR::synapse0x2e4a4d0() {
   return (neuron0x2e259f0()*-0.311414);
}

double NNfunction_ss_cLsR::synapse0x2e4a510() {
   return (neuron0x2e25d30()*0.518189);
}

double NNfunction_ss_cLsR::synapse0x2e4a550() {
   return (neuron0x2e26070()*-0.2398);
}

double NNfunction_ss_cLsR::synapse0x2e4a8d0() {
   return (neuron0x2e214b0()*0.222817);
}

double NNfunction_ss_cLsR::synapse0x2e4a910() {
   return (neuron0x2e217f0()*0.109774);
}

double NNfunction_ss_cLsR::synapse0x2e4a950() {
   return (neuron0x2e21b30()*1.37168);
}

double NNfunction_ss_cLsR::synapse0x2e4a990() {
   return (neuron0x2e21e70()*0.542904);
}

double NNfunction_ss_cLsR::synapse0x2e4a9d0() {
   return (neuron0x2e221b0()*-0.433932);
}

double NNfunction_ss_cLsR::synapse0x2e4aa10() {
   return (neuron0x2e224f0()*-0.159901);
}

double NNfunction_ss_cLsR::synapse0x2e4aa50() {
   return (neuron0x2e22830()*-0.0729396);
}

double NNfunction_ss_cLsR::synapse0x2e4aa90() {
   return (neuron0x2e22b70()*0.90706);
}

double NNfunction_ss_cLsR::synapse0x2e4aad0() {
   return (neuron0x2e22eb0()*-0.961747);
}

double NNfunction_ss_cLsR::synapse0x2e4ab10() {
   return (neuron0x2e231f0()*0.851749);
}

double NNfunction_ss_cLsR::synapse0x2e4ab50() {
   return (neuron0x2e23530()*0.491454);
}

double NNfunction_ss_cLsR::synapse0x2e4ab90() {
   return (neuron0x2e23870()*0.889099);
}

double NNfunction_ss_cLsR::synapse0x2e4abd0() {
   return (neuron0x2e23bb0()*-1.34049);
}

double NNfunction_ss_cLsR::synapse0x2e4ac10() {
   return (neuron0x2e23ef0()*-0.00593301);
}

double NNfunction_ss_cLsR::synapse0x2e4ac50() {
   return (neuron0x2e24230()*0.0724552);
}

double NNfunction_ss_cLsR::synapse0x2e4ac90() {
   return (neuron0x2e24570()*-0.910411);
}

double NNfunction_ss_cLsR::synapse0x2e4a720() {
   return (neuron0x2e248b0()*0.32771);
}

double NNfunction_ss_cLsR::synapse0x2e4a760() {
   return (neuron0x2e24e10()*0.236832);
}

double NNfunction_ss_cLsR::synapse0x2e4ade0() {
   return (neuron0x2e25030()*-0.34565);
}

double NNfunction_ss_cLsR::synapse0x2e4ae20() {
   return (neuron0x2e25370()*0.098902);
}

double NNfunction_ss_cLsR::synapse0x2e4ae60() {
   return (neuron0x2e256b0()*-0.287758);
}

double NNfunction_ss_cLsR::synapse0x2e4aea0() {
   return (neuron0x2e259f0()*-0.540834);
}

double NNfunction_ss_cLsR::synapse0x2e4aee0() {
   return (neuron0x2e25d30()*0.0926066);
}

double NNfunction_ss_cLsR::synapse0x2e4af20() {
   return (neuron0x2e26070()*0.284976);
}

double NNfunction_ss_cLsR::synapse0x2e274c0() {
   return (neuron0x2e26510()*0.51173);
}

double NNfunction_ss_cLsR::synapse0x2e27500() {
   return (neuron0x2e26e20()*0.678308);
}

double NNfunction_ss_cLsR::synapse0x2e289d0() {
   return (neuron0x2e27900()*-0.42839);
}

double NNfunction_ss_cLsR::synapse0x2e28a10() {
   return (neuron0x2be1190()*-0.548818);
}

double NNfunction_ss_cLsR::synapse0x2e293a0() {
   return (neuron0x2e28720()*-0.243707);
}

double NNfunction_ss_cLsR::synapse0x2e293e0() {
   return (neuron0x2e290f0()*-0.584407);
}

double NNfunction_ss_cLsR::synapse0x2e2a170() {
   return (neuron0x2e29ec0()*-0.931069);
}

double NNfunction_ss_cLsR::synapse0x2e2a1b0() {
   return (neuron0x2e2a890()*0.146477);
}

double NNfunction_ss_cLsR::synapse0x2e2ab40() {
   return (neuron0x2e2b260()*0.354261);
}

double NNfunction_ss_cLsR::synapse0x2e2ab80() {
   return (neuron0x2e2bd40()*-1.25288);
}

double NNfunction_ss_cLsR::synapse0x2e2b510() {
   return (neuron0x2e2c710()*-0.693858);
}

double NNfunction_ss_cLsR::synapse0x2e2b550() {
   return (neuron0x2e297f0()*-0.239922);
}

double NNfunction_ss_cLsR::synapse0x2e2bff0() {
   return (neuron0x2e2e2c0()*-0.296707);
}

double NNfunction_ss_cLsR::synapse0x2e2c030() {
   return (neuron0x2e2ec90()*1.16496);
}

double NNfunction_ss_cLsR::synapse0x2e2c9c0() {
   return (neuron0x2e2f660()*0.169417);
}

double NNfunction_ss_cLsR::synapse0x2e2ca00() {
   return (neuron0x2e30030()*-1.31493);
}

double NNfunction_ss_cLsR::synapse0x2e29aa0() {
   return (neuron0x2e31e40()*-0.317706);
}

double NNfunction_ss_cLsR::synapse0x2e29ae0() {
   return (neuron0x2e32120()*-1.27952);
}

double NNfunction_ss_cLsR::synapse0x2e2e570() {
   return (neuron0x2e32af0()*0.973237);
}

double NNfunction_ss_cLsR::synapse0x2e2e5b0() {
   return (neuron0x2e334c0()*0.228459);
}

double NNfunction_ss_cLsR::synapse0x2e2ef40() {
   return (neuron0x2e33e90()*-0.299955);
}

double NNfunction_ss_cLsR::synapse0x2e2ef80() {
   return (neuron0x2e34860()*0.372146);
}

double NNfunction_ss_cLsR::synapse0x2e2f910() {
   return (neuron0x2e2d3b0()*2.34816);
}

double NNfunction_ss_cLsR::synapse0x2e2f950() {
   return (neuron0x2e2dd80()*-0.044399);
}

double NNfunction_ss_cLsR::synapse0x2e302e0() {
   return (neuron0x2e375f0()*0.750049);
}

double NNfunction_ss_cLsR::synapse0x2e30320() {
   return (neuron0x2e37fc0()*-0.810906);
}

double NNfunction_ss_cLsR::synapse0x2e24450() {
   return (neuron0x2e38990()*0.801004);
}

double NNfunction_ss_cLsR::synapse0x2e24490() {
   return (neuron0x2e39360()*0.306321);
}

double NNfunction_ss_cLsR::synapse0x2e323d0() {
   return (neuron0x2e39d30()*-0.402667);
}

double NNfunction_ss_cLsR::synapse0x2e32410() {
   return (neuron0x2e3a700()*1.95394);
}

double NNfunction_ss_cLsR::synapse0x2e32da0() {
   return (neuron0x2e3b0d0()*-0.157107);
}

double NNfunction_ss_cLsR::synapse0x2e32de0() {
   return (neuron0x2e3baa0()*-0.297566);
}

double NNfunction_ss_cLsR::synapse0x2e33770() {
   return (neuron0x2e31b30()*0.849101);
}

double NNfunction_ss_cLsR::synapse0x2e337b0() {
   return (neuron0x2e3e680()*-1.04706);
}

double NNfunction_ss_cLsR::synapse0x2e34140() {
   return (neuron0x2e3f050()*-0.0138502);
}

double NNfunction_ss_cLsR::synapse0x2e34180() {
   return (neuron0x2e3fa20()*-0.462804);
}

double NNfunction_ss_cLsR::synapse0x2e34b10() {
   return (neuron0x2e403f0()*1.55581);
}

double NNfunction_ss_cLsR::synapse0x2e34b50() {
   return (neuron0x2e40dc0()*0.791544);
}

double NNfunction_ss_cLsR::synapse0x2e2d660() {
   return (neuron0x2e41790()*-1.23614);
}

double NNfunction_ss_cLsR::synapse0x2e2d6a0() {
   return (neuron0x2e42160()*-1.4154);
}

double NNfunction_ss_cLsR::synapse0x2e36f10() {
   return (neuron0x2e42b30()*-0.965678);
}

double NNfunction_ss_cLsR::synapse0x2e36f50() {
   return (neuron0x2e43710()*1.28433);
}

double NNfunction_ss_cLsR::synapse0x2e378a0() {
   return (neuron0x2e440e0()*-0.723464);
}

double NNfunction_ss_cLsR::synapse0x2e378e0() {
   return (neuron0x2e34f60()*-0.205689);
}

double NNfunction_ss_cLsR::synapse0x2e38270() {
   return (neuron0x2e35930()*-0.333087);
}

double NNfunction_ss_cLsR::synapse0x2e382b0() {
   return (neuron0x2e36300()*0.323439);
}

double NNfunction_ss_cLsR::synapse0x2e38c40() {
   return (neuron0x2e48940()*-1.00026);
}

double NNfunction_ss_cLsR::synapse0x2e38c80() {
   return (neuron0x2e491f0()*-0.145222);
}

double NNfunction_ss_cLsR::synapse0x2e39610() {
   return (neuron0x2e49bc0()*0.0879803);
}

double NNfunction_ss_cLsR::synapse0x2e39650() {
   return (neuron0x2e4a590()*-0.161316);
}

double NNfunction_ss_cLsR::synapse0x2e3bd50() {
   return (neuron0x2e26510()*-2.72082);
}

double NNfunction_ss_cLsR::synapse0x2e3bd90() {
   return (neuron0x2e26e20()*-0.864755);
}

double NNfunction_ss_cLsR::synapse0x2e31310() {
   return (neuron0x2e27900()*0.829538);
}

double NNfunction_ss_cLsR::synapse0x2e31350() {
   return (neuron0x2be1190()*1.06416);
}

double NNfunction_ss_cLsR::synapse0x2e3e930() {
   return (neuron0x2e28720()*1.44589);
}

double NNfunction_ss_cLsR::synapse0x2e3e970() {
   return (neuron0x2e290f0()*1.14914);
}

double NNfunction_ss_cLsR::synapse0x2e3f300() {
   return (neuron0x2e29ec0()*1.81897);
}

double NNfunction_ss_cLsR::synapse0x2e3f340() {
   return (neuron0x2e2a890()*-0.289845);
}

double NNfunction_ss_cLsR::synapse0x2e3fcd0() {
   return (neuron0x2e2b260()*-0.686415);
}

double NNfunction_ss_cLsR::synapse0x2e3fd10() {
   return (neuron0x2e2bd40()*0.11408);
}

double NNfunction_ss_cLsR::synapse0x2e406a0() {
   return (neuron0x2e2c710()*1.34806);
}

double NNfunction_ss_cLsR::synapse0x2e406e0() {
   return (neuron0x2e297f0()*0.446651);
}

double NNfunction_ss_cLsR::synapse0x2e41070() {
   return (neuron0x2e2e2c0()*0.572324);
}

double NNfunction_ss_cLsR::synapse0x2e410b0() {
   return (neuron0x2e2ec90()*-2.2864);
}

double NNfunction_ss_cLsR::synapse0x2e41a40() {
   return (neuron0x2e2f660()*-0.335255);
}

double NNfunction_ss_cLsR::synapse0x2e41a80() {
   return (neuron0x2e30030()*0.0965904);
}

double NNfunction_ss_cLsR::synapse0x2e42410() {
   return (neuron0x2e31e40()*3.15977);
}

double NNfunction_ss_cLsR::synapse0x2e42450() {
   return (neuron0x2e32120()*-0.554121);
}

double NNfunction_ss_cLsR::synapse0x2e42de0() {
   return (neuron0x2e32af0()*-1.55346);
}

double NNfunction_ss_cLsR::synapse0x2e42e20() {
   return (neuron0x2e334c0()*-0.433829);
}

double NNfunction_ss_cLsR::synapse0x2e439c0() {
   return (neuron0x2e33e90()*0.585777);
}

double NNfunction_ss_cLsR::synapse0x2e43a00() {
   return (neuron0x2e34860()*-0.710834);
}

double NNfunction_ss_cLsR::synapse0x2e44390() {
   return (neuron0x2e2d3b0()*-1.48603);
}

double NNfunction_ss_cLsR::synapse0x2e443d0() {
   return (neuron0x2e2dd80()*0.0758934);
}

double NNfunction_ss_cLsR::synapse0x2e35210() {
   return (neuron0x2e375f0()*-1.44045);
}

double NNfunction_ss_cLsR::synapse0x2e35250() {
   return (neuron0x2e37fc0()*1.63591);
}

double NNfunction_ss_cLsR::synapse0x2e35be0() {
   return (neuron0x2e38990()*2.5747);
}

double NNfunction_ss_cLsR::synapse0x2e35c20() {
   return (neuron0x2e39360()*-0.568735);
}

double NNfunction_ss_cLsR::synapse0x2e365b0() {
   return (neuron0x2e39d30()*0.740589);
}

double NNfunction_ss_cLsR::synapse0x2e365f0() {
   return (neuron0x2e3a700()*-1.39679);
}

double NNfunction_ss_cLsR::synapse0x2e48ad0() {
   return (neuron0x2e3b0d0()*0.276283);
}

double NNfunction_ss_cLsR::synapse0x2e48b10() {
   return (neuron0x2e3baa0()*0.542461);
}

double NNfunction_ss_cLsR::synapse0x2e494a0() {
   return (neuron0x2e31b30()*-1.49602);
}

double NNfunction_ss_cLsR::synapse0x2e494e0() {
   return (neuron0x2e3e680()*2.15115);
}

double NNfunction_ss_cLsR::synapse0x2e49e70() {
   return (neuron0x2e3f050()*0.00735561);
}

double NNfunction_ss_cLsR::synapse0x2e49eb0() {
   return (neuron0x2e3fa20()*0.950415);
}

double NNfunction_ss_cLsR::synapse0x2e4a840() {
   return (neuron0x2e403f0()*-3.06853);
}

double NNfunction_ss_cLsR::synapse0x2e4a880() {
   return (neuron0x2e40dc0()*-1.48604);
}

double NNfunction_ss_cLsR::synapse0x2e26730() {
   return (neuron0x2e41790()*-1.59191);
}

double NNfunction_ss_cLsR::synapse0x2e26770() {
   return (neuron0x2e42160()*-5.66251);
}

double NNfunction_ss_cLsR::synapse0x2e39fe0() {
   return (neuron0x2e42b30()*1.76709);
}

double NNfunction_ss_cLsR::synapse0x2e3a020() {
   return (neuron0x2e43710()*-2.98731);
}

double NNfunction_ss_cLsR::synapse0x2e4af60() {
   return (neuron0x2e440e0()*1.37687);
}

double NNfunction_ss_cLsR::synapse0x2e4afa0() {
   return (neuron0x2e34f60()*0.391371);
}

double NNfunction_ss_cLsR::synapse0x2e4afe0() {
   return (neuron0x2e35930()*0.633468);
}

double NNfunction_ss_cLsR::synapse0x2e4b020() {
   return (neuron0x2e36300()*-1.45432);
}

double NNfunction_ss_cLsR::synapse0x2e51ed0() {
   return (neuron0x2e48940()*1.88372);
}

double NNfunction_ss_cLsR::synapse0x2e51f10() {
   return (neuron0x2e491f0()*0.297284);
}

double NNfunction_ss_cLsR::synapse0x2e51f50() {
   return (neuron0x2e49bc0()*-0.169947);
}

double NNfunction_ss_cLsR::synapse0x2e51f90() {
   return (neuron0x2e4a590()*0.307923);
}

double NNfunction_ss_cLsR::synapse0x2e52310() {
   return (neuron0x2e26510()*0.266676);
}

double NNfunction_ss_cLsR::synapse0x2e52350() {
   return (neuron0x2e26e20()*-2.18191);
}

double NNfunction_ss_cLsR::synapse0x2e52390() {
   return (neuron0x2e27900()*0.865992);
}

double NNfunction_ss_cLsR::synapse0x2e523d0() {
   return (neuron0x2be1190()*0.462214);
}

double NNfunction_ss_cLsR::synapse0x2e52410() {
   return (neuron0x2e28720()*0.432286);
}

double NNfunction_ss_cLsR::synapse0x2e52450() {
   return (neuron0x2e290f0()*0.578911);
}

double NNfunction_ss_cLsR::synapse0x2e52490() {
   return (neuron0x2e29ec0()*-1.9391);
}

double NNfunction_ss_cLsR::synapse0x2e524d0() {
   return (neuron0x2e2a890()*-2.35481);
}

double NNfunction_ss_cLsR::synapse0x2e52510() {
   return (neuron0x2e2b260()*1.08374);
}

double NNfunction_ss_cLsR::synapse0x2e52550() {
   return (neuron0x2e2bd40()*-0.244478);
}

double NNfunction_ss_cLsR::synapse0x2e52590() {
   return (neuron0x2e2c710()*0.11976);
}

double NNfunction_ss_cLsR::synapse0x2e525d0() {
   return (neuron0x2e297f0()*1.97572);
}

double NNfunction_ss_cLsR::synapse0x2e52610() {
   return (neuron0x2e2e2c0()*1.56201);
}

double NNfunction_ss_cLsR::synapse0x2e52650() {
   return (neuron0x2e2ec90()*-1.34725);
}

double NNfunction_ss_cLsR::synapse0x2e52690() {
   return (neuron0x2e2f660()*2.7934);
}

double NNfunction_ss_cLsR::synapse0x2e526d0() {
   return (neuron0x2e30030()*-0.0627877);
}

double NNfunction_ss_cLsR::synapse0x2e52160() {
   return (neuron0x2e31e40()*0.653893);
}

double NNfunction_ss_cLsR::synapse0x2e521a0() {
   return (neuron0x2e32120()*-0.787501);
}

double NNfunction_ss_cLsR::synapse0x2e52820() {
   return (neuron0x2e32af0()*-0.648373);
}

double NNfunction_ss_cLsR::synapse0x2e52860() {
   return (neuron0x2e334c0()*-2.63599);
}

double NNfunction_ss_cLsR::synapse0x2e528a0() {
   return (neuron0x2e33e90()*3.06817);
}

double NNfunction_ss_cLsR::synapse0x2e528e0() {
   return (neuron0x2e34860()*-2.50843);
}

double NNfunction_ss_cLsR::synapse0x2e52920() {
   return (neuron0x2e2d3b0()*-1.60498);
}

double NNfunction_ss_cLsR::synapse0x2e52960() {
   return (neuron0x2e2dd80()*2.96187);
}

double NNfunction_ss_cLsR::synapse0x2e529a0() {
   return (neuron0x2e375f0()*0.132901);
}

double NNfunction_ss_cLsR::synapse0x2e529e0() {
   return (neuron0x2e37fc0()*0.625265);
}

double NNfunction_ss_cLsR::synapse0x2e52a20() {
   return (neuron0x2e38990()*-0.275541);
}

double NNfunction_ss_cLsR::synapse0x2e52a60() {
   return (neuron0x2e39360()*-2.1072);
}

double NNfunction_ss_cLsR::synapse0x2e52aa0() {
   return (neuron0x2e39d30()*2.3172);
}

double NNfunction_ss_cLsR::synapse0x2e52ae0() {
   return (neuron0x2e3a700()*-1.8191);
}

double NNfunction_ss_cLsR::synapse0x2e52b20() {
   return (neuron0x2e3b0d0()*3.49155);
}

double NNfunction_ss_cLsR::synapse0x2e52b60() {
   return (neuron0x2e3baa0()*2.07593);
}

double NNfunction_ss_cLsR::synapse0x2e52710() {
   return (neuron0x2e31b30()*-2.66337);
}

double NNfunction_ss_cLsR::synapse0x2e52750() {
   return (neuron0x2e3e680()*3.2312);
}

double NNfunction_ss_cLsR::synapse0x2e52790() {
   return (neuron0x2e3f050()*4.18334);
}

double NNfunction_ss_cLsR::synapse0x2e527d0() {
   return (neuron0x2e3fa20()*1.5888);
}

double NNfunction_ss_cLsR::synapse0x2e52db0() {
   return (neuron0x2e403f0()*-1.02623);
}

double NNfunction_ss_cLsR::synapse0x2e52df0() {
   return (neuron0x2e40dc0()*0.621737);
}

double NNfunction_ss_cLsR::synapse0x2e52e30() {
   return (neuron0x2e41790()*1.85343);
}

double NNfunction_ss_cLsR::synapse0x2e52e70() {
   return (neuron0x2e42160()*0.591348);
}

double NNfunction_ss_cLsR::synapse0x2e52eb0() {
   return (neuron0x2e42b30()*1.96998);
}

double NNfunction_ss_cLsR::synapse0x2e52ef0() {
   return (neuron0x2e43710()*0.54817);
}

double NNfunction_ss_cLsR::synapse0x2e52f30() {
   return (neuron0x2e440e0()*3.17453);
}

double NNfunction_ss_cLsR::synapse0x2e52f70() {
   return (neuron0x2e34f60()*1.99715);
}

double NNfunction_ss_cLsR::synapse0x2e52fb0() {
   return (neuron0x2e35930()*1.71546);
}

double NNfunction_ss_cLsR::synapse0x2e52ff0() {
   return (neuron0x2e36300()*-1.48867);
}

double NNfunction_ss_cLsR::synapse0x2e53030() {
   return (neuron0x2e48940()*1.16061);
}

double NNfunction_ss_cLsR::synapse0x2e53070() {
   return (neuron0x2e491f0()*2.29416);
}

double NNfunction_ss_cLsR::synapse0x2e530b0() {
   return (neuron0x2e49bc0()*-3.32223);
}

double NNfunction_ss_cLsR::synapse0x2e530f0() {
   return (neuron0x2e4a590()*2.74815);
}

double NNfunction_ss_cLsR::synapse0x2e53470() {
   return (neuron0x2e26510()*0.67196);
}

double NNfunction_ss_cLsR::synapse0x2e534b0() {
   return (neuron0x2e26e20()*-1.73126);
}

double NNfunction_ss_cLsR::synapse0x2e534f0() {
   return (neuron0x2e27900()*0.123262);
}

double NNfunction_ss_cLsR::synapse0x2e53530() {
   return (neuron0x2be1190()*0.336946);
}

double NNfunction_ss_cLsR::synapse0x2e53570() {
   return (neuron0x2e28720()*-2.70107);
}

double NNfunction_ss_cLsR::synapse0x2e535b0() {
   return (neuron0x2e290f0()*0.212532);
}

double NNfunction_ss_cLsR::synapse0x2e535f0() {
   return (neuron0x2e29ec0()*-0.173272);
}

double NNfunction_ss_cLsR::synapse0x2e53630() {
   return (neuron0x2e2a890()*-0.0603638);
}

double NNfunction_ss_cLsR::synapse0x2e53670() {
   return (neuron0x2e2b260()*-0.198037);
}

double NNfunction_ss_cLsR::synapse0x2e536b0() {
   return (neuron0x2e2bd40()*0.882334);
}

double NNfunction_ss_cLsR::synapse0x2e536f0() {
   return (neuron0x2e2c710()*0.282811);
}

double NNfunction_ss_cLsR::synapse0x2e53730() {
   return (neuron0x2e297f0()*0.20181);
}

double NNfunction_ss_cLsR::synapse0x2e53770() {
   return (neuron0x2e2e2c0()*0.0130126);
}

double NNfunction_ss_cLsR::synapse0x2e537b0() {
   return (neuron0x2e2ec90()*-2.17193);
}

double NNfunction_ss_cLsR::synapse0x2e537f0() {
   return (neuron0x2e2f660()*-0.0547878);
}

double NNfunction_ss_cLsR::synapse0x2e53830() {
   return (neuron0x2e30030()*0.805562);
}

double NNfunction_ss_cLsR::synapse0x2e532c0() {
   return (neuron0x2e31e40()*1.41647);
}

double NNfunction_ss_cLsR::synapse0x2e53300() {
   return (neuron0x2e32120()*1.14687);
}

double NNfunction_ss_cLsR::synapse0x2e53980() {
   return (neuron0x2e32af0()*2.34736);
}

double NNfunction_ss_cLsR::synapse0x2e539c0() {
   return (neuron0x2e334c0()*-0.145589);
}

double NNfunction_ss_cLsR::synapse0x2e53a00() {
   return (neuron0x2e33e90()*0.0138643);
}

double NNfunction_ss_cLsR::synapse0x2e53a40() {
   return (neuron0x2e34860()*-0.257894);
}

double NNfunction_ss_cLsR::synapse0x2e53a80() {
   return (neuron0x2e2d3b0()*-4.81002);
}

double NNfunction_ss_cLsR::synapse0x2e53ac0() {
   return (neuron0x2e2dd80()*0.0328314);
}

double NNfunction_ss_cLsR::synapse0x2e53b00() {
   return (neuron0x2e375f0()*-0.485256);
}

double NNfunction_ss_cLsR::synapse0x2e53b40() {
   return (neuron0x2e37fc0()*0.171046);
}

double NNfunction_ss_cLsR::synapse0x2e53b80() {
   return (neuron0x2e38990()*0.00781765);
}

double NNfunction_ss_cLsR::synapse0x2e53bc0() {
   return (neuron0x2e39360()*-0.235975);
}

double NNfunction_ss_cLsR::synapse0x2e53c00() {
   return (neuron0x2e39d30()*0.41158);
}

double NNfunction_ss_cLsR::synapse0x2e53c40() {
   return (neuron0x2e3a700()*-1.73415);
}

double NNfunction_ss_cLsR::synapse0x2e53c80() {
   return (neuron0x2e3b0d0()*0.241434);
}

double NNfunction_ss_cLsR::synapse0x2e53cc0() {
   return (neuron0x2e3baa0()*0.241642);
}

double NNfunction_ss_cLsR::synapse0x2e53870() {
   return (neuron0x2e31b30()*-1.23167);
}

double NNfunction_ss_cLsR::synapse0x2e538b0() {
   return (neuron0x2e3e680()*1.04175);
}

double NNfunction_ss_cLsR::synapse0x2e538f0() {
   return (neuron0x2e3f050()*-0.000381185);
}

double NNfunction_ss_cLsR::synapse0x2e53930() {
   return (neuron0x2e3fa20()*-0.234673);
}

double NNfunction_ss_cLsR::synapse0x2e53f10() {
   return (neuron0x2e403f0()*-1.13724);
}

double NNfunction_ss_cLsR::synapse0x2e53f50() {
   return (neuron0x2e40dc0()*-0.384787);
}

double NNfunction_ss_cLsR::synapse0x2e53f90() {
   return (neuron0x2e41790()*0.096255);
}

double NNfunction_ss_cLsR::synapse0x2e53fd0() {
   return (neuron0x2e42160()*0.722186);
}

double NNfunction_ss_cLsR::synapse0x2e54010() {
   return (neuron0x2e42b30()*1.07026);
}

double NNfunction_ss_cLsR::synapse0x2e54050() {
   return (neuron0x2e43710()*0.325227);
}

double NNfunction_ss_cLsR::synapse0x2e54090() {
   return (neuron0x2e440e0()*0.778475);
}

double NNfunction_ss_cLsR::synapse0x2e540d0() {
   return (neuron0x2e34f60()*0.184276);
}

double NNfunction_ss_cLsR::synapse0x2e54110() {
   return (neuron0x2e35930()*0.19903);
}

double NNfunction_ss_cLsR::synapse0x2e54150() {
   return (neuron0x2e36300()*1.96648);
}

double NNfunction_ss_cLsR::synapse0x2e54190() {
   return (neuron0x2e48940()*0.816675);
}

double NNfunction_ss_cLsR::synapse0x2e541d0() {
   return (neuron0x2e491f0()*0.0278233);
}

double NNfunction_ss_cLsR::synapse0x2e54210() {
   return (neuron0x2e49bc0()*-0.0310778);
}

double NNfunction_ss_cLsR::synapse0x2e54250() {
   return (neuron0x2e4a590()*0.0706185);
}

double NNfunction_ss_cLsR::synapse0x2e545d0() {
   return (neuron0x2e26510()*0.148314);
}

double NNfunction_ss_cLsR::synapse0x2e54610() {
   return (neuron0x2e26e20()*-1.16811);
}

double NNfunction_ss_cLsR::synapse0x2e54650() {
   return (neuron0x2e27900()*-0.00414518);
}

double NNfunction_ss_cLsR::synapse0x2e54690() {
   return (neuron0x2be1190()*-0.0272441);
}

double NNfunction_ss_cLsR::synapse0x2e546d0() {
   return (neuron0x2e28720()*0.783747);
}

double NNfunction_ss_cLsR::synapse0x2e54710() {
   return (neuron0x2e290f0()*-0.0152737);
}

double NNfunction_ss_cLsR::synapse0x2e54750() {
   return (neuron0x2e29ec0()*-0.0692672);
}

double NNfunction_ss_cLsR::synapse0x2e54790() {
   return (neuron0x2e2a890()*-0.00538914);
}

double NNfunction_ss_cLsR::synapse0x2e547d0() {
   return (neuron0x2e2b260()*0.0133391);
}

double NNfunction_ss_cLsR::synapse0x2e54810() {
   return (neuron0x2e2bd40()*-0.133352);
}

double NNfunction_ss_cLsR::synapse0x2e54850() {
   return (neuron0x2e2c710()*-0.051884);
}

double NNfunction_ss_cLsR::synapse0x2e54890() {
   return (neuron0x2e297f0()*-0.0157324);
}

double NNfunction_ss_cLsR::synapse0x2e548d0() {
   return (neuron0x2e2e2c0()*-0.00792995);
}

double NNfunction_ss_cLsR::synapse0x2e54910() {
   return (neuron0x2e2ec90()*-0.399213);
}

double NNfunction_ss_cLsR::synapse0x2e54950() {
   return (neuron0x2e2f660()*0.011329);
}

double NNfunction_ss_cLsR::synapse0x2e54990() {
   return (neuron0x2e30030()*-1.7517);
}

double NNfunction_ss_cLsR::synapse0x2e54420() {
   return (neuron0x2e31e40()*1.94692);
}

double NNfunction_ss_cLsR::synapse0x2e54460() {
   return (neuron0x2e32120()*0.676769);
}

double NNfunction_ss_cLsR::synapse0x2e54ae0() {
   return (neuron0x2e32af0()*-0.355497);
}

double NNfunction_ss_cLsR::synapse0x2e54b20() {
   return (neuron0x2e334c0()*0.00658083);
}

double NNfunction_ss_cLsR::synapse0x2e54b60() {
   return (neuron0x2e33e90()*-0.0065336);
}

double NNfunction_ss_cLsR::synapse0x2e54ba0() {
   return (neuron0x2e34860()*0.0253275);
}

double NNfunction_ss_cLsR::synapse0x2e54be0() {
   return (neuron0x2e2d3b0()*-1.33551);
}

double NNfunction_ss_cLsR::synapse0x2e54c20() {
   return (neuron0x2e2dd80()*-0.00689779);
}

double NNfunction_ss_cLsR::synapse0x2e54c60() {
   return (neuron0x2e375f0()*0.0774044);
}

double NNfunction_ss_cLsR::synapse0x2e54ca0() {
   return (neuron0x2e37fc0()*-0.089168);
}

double NNfunction_ss_cLsR::synapse0x2e54ce0() {
   return (neuron0x2e38990()*0.327952);
}

double NNfunction_ss_cLsR::synapse0x2e54d20() {
   return (neuron0x2e39360()*-0.00564703);
}

double NNfunction_ss_cLsR::synapse0x2e54d60() {
   return (neuron0x2e39d30()*-0.0107813);
}

double NNfunction_ss_cLsR::synapse0x2e54da0() {
   return (neuron0x2e3a700()*-0.198113);
}

double NNfunction_ss_cLsR::synapse0x2e54de0() {
   return (neuron0x2e3b0d0()*-0.0127631);
}

double NNfunction_ss_cLsR::synapse0x2e54e20() {
   return (neuron0x2e3baa0()*0.00346198);
}

double NNfunction_ss_cLsR::synapse0x2e549d0() {
   return (neuron0x2e31b30()*0.0432853);
}

double NNfunction_ss_cLsR::synapse0x2e54a10() {
   return (neuron0x2e3e680()*-0.102822);
}

double NNfunction_ss_cLsR::synapse0x2e54a50() {
   return (neuron0x2e3f050()*0.00258259);
}

double NNfunction_ss_cLsR::synapse0x2e54a90() {
   return (neuron0x2e3fa20()*0.0109931);
}

double NNfunction_ss_cLsR::synapse0x2e55070() {
   return (neuron0x2e403f0()*0.165908);
}

double NNfunction_ss_cLsR::synapse0x2e550b0() {
   return (neuron0x2e40dc0()*-0.0108442);
}

double NNfunction_ss_cLsR::synapse0x2e550f0() {
   return (neuron0x2e41790()*0.772562);
}

double NNfunction_ss_cLsR::synapse0x2e55130() {
   return (neuron0x2e42160()*0.768311);
}

double NNfunction_ss_cLsR::synapse0x2e55170() {
   return (neuron0x2e42b30()*-0.0263351);
}

double NNfunction_ss_cLsR::synapse0x2e551b0() {
   return (neuron0x2e43710()*0.149999);
}

double NNfunction_ss_cLsR::synapse0x2e551f0() {
   return (neuron0x2e440e0()*0.0638069);
}

double NNfunction_ss_cLsR::synapse0x2e55230() {
   return (neuron0x2e34f60()*-0.00014908);
}

double NNfunction_ss_cLsR::synapse0x2e55270() {
   return (neuron0x2e35930()*0.00958124);
}

double NNfunction_ss_cLsR::synapse0x2e552b0() {
   return (neuron0x2e36300()*-0.751053);
}

double NNfunction_ss_cLsR::synapse0x2e552f0() {
   return (neuron0x2e48940()*0.0303117);
}

double NNfunction_ss_cLsR::synapse0x2e55330() {
   return (neuron0x2e491f0()*-0.00487563);
}

double NNfunction_ss_cLsR::synapse0x2e55370() {
   return (neuron0x2e49bc0()*-0.0353047);
}

double NNfunction_ss_cLsR::synapse0x2e553b0() {
   return (neuron0x2e4a590()*-0.000764413);
}

double NNfunction_ss_cLsR::synapse0x2e264d0() {
   return (neuron0x2e51790()*-11.1147);
}

double NNfunction_ss_cLsR::synapse0x2e55610() {
   return (neuron0x2e51b30()*-5.68635);
}

double NNfunction_ss_cLsR::synapse0x2e55650() {
   return (neuron0x2e51fd0()*-4.82136);
}

double NNfunction_ss_cLsR::synapse0x2e55690() {
   return (neuron0x2e53130()*-2.73863);
}

double NNfunction_ss_cLsR::synapse0x2e556d0() {
   return (neuron0x2e54290()*-6.2255);
}

