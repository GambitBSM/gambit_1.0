#include "NNfunction_sb_dRdR.h"
#include <cmath>

double NNfunction_sb_dRdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9018)/15.0522;
   input1 = (in1 - 61.4337)/731.729;
   input2 = (in2 - 374.493)/463.711;
   input3 = (in3 - 308.444)/630.141;
   input4 = (in4 - 763.964)/677.216;
   input5 = (in5 - 668.496)/651.277;
   input6 = (in6 - 672.382)/653.528;
   input7 = (in7 - 667.603)/651.907;
   input8 = (in8 - 664.64)/682.558;
   input9 = (in9 - 656.492)/668.253;
   input10 = (in10 - 658.008)/686.268;
   input11 = (in11 - 732.359)/586.267;
   input12 = (in12 - 733.408)/589.165;
   input13 = (in13 - 568.751)/373.06;
   input14 = (in14 - 719.11)/548.617;
   input15 = (in15 - 720.314)/549.299;
   input16 = (in16 - 504.966)/385.309;
   input17 = (in17 - 565.294)/328.321;
   input18 = (in18 - 733.054)/599.869;
   input19 = (in19 - 729.853)/587.013;
   input20 = (in20 - -238.983)/423.396;
   input21 = (in21 - -309.722)/898.482;
   input22 = (in22 - -3.62832)/896.145;
   input23 = (in23 - 2.78253)/515.931;
   switch(index) {
     case 0:
         return neuron0x25f6e20();
     default:
         return 0.;
   }
}

double NNfunction_sb_dRdR::Value(int index, double* input) {
   input0 = (input[0] - 22.9018)/15.0522;
   input1 = (input[1] - 61.4337)/731.729;
   input2 = (input[2] - 374.493)/463.711;
   input3 = (input[3] - 308.444)/630.141;
   input4 = (input[4] - 763.964)/677.216;
   input5 = (input[5] - 668.496)/651.277;
   input6 = (input[6] - 672.382)/653.528;
   input7 = (input[7] - 667.603)/651.907;
   input8 = (input[8] - 664.64)/682.558;
   input9 = (input[9] - 656.492)/668.253;
   input10 = (input[10] - 658.008)/686.268;
   input11 = (input[11] - 732.359)/586.267;
   input12 = (input[12] - 733.408)/589.165;
   input13 = (input[13] - 568.751)/373.06;
   input14 = (input[14] - 719.11)/548.617;
   input15 = (input[15] - 720.314)/549.299;
   input16 = (input[16] - 504.966)/385.309;
   input17 = (input[17] - 565.294)/328.321;
   input18 = (input[18] - 733.054)/599.869;
   input19 = (input[19] - 729.853)/587.013;
   input20 = (input[20] - -238.983)/423.396;
   input21 = (input[21] - -309.722)/898.482;
   input22 = (input[22] - -3.62832)/896.145;
   input23 = (input[23] - 2.78253)/515.931;
   switch(index) {
     case 0:
         return neuron0x25f6e20();
     default:
         return 0.;
   }
}

double NNfunction_sb_dRdR::neuron0x25c1e90() {
   return input0;
}

double NNfunction_sb_dRdR::neuron0x25c2140() {
   return input1;
}

double NNfunction_sb_dRdR::neuron0x25c2480() {
   return input2;
}

double NNfunction_sb_dRdR::neuron0x25c27c0() {
   return input3;
}

double NNfunction_sb_dRdR::neuron0x25c2b00() {
   return input4;
}

double NNfunction_sb_dRdR::neuron0x25c2e40() {
   return input5;
}

double NNfunction_sb_dRdR::neuron0x25c3180() {
   return input6;
}

double NNfunction_sb_dRdR::neuron0x25c34c0() {
   return input7;
}

double NNfunction_sb_dRdR::neuron0x25c3800() {
   return input8;
}

double NNfunction_sb_dRdR::neuron0x25c3b40() {
   return input9;
}

double NNfunction_sb_dRdR::neuron0x25c3e80() {
   return input10;
}

double NNfunction_sb_dRdR::neuron0x25c41c0() {
   return input11;
}

double NNfunction_sb_dRdR::neuron0x25c4500() {
   return input12;
}

double NNfunction_sb_dRdR::neuron0x25c4840() {
   return input13;
}

double NNfunction_sb_dRdR::neuron0x25c4b80() {
   return input14;
}

double NNfunction_sb_dRdR::neuron0x25c4ec0() {
   return input15;
}

double NNfunction_sb_dRdR::neuron0x25c5200() {
   return input16;
}

double NNfunction_sb_dRdR::neuron0x25c5760() {
   return input17;
}

double NNfunction_sb_dRdR::neuron0x25c5aa0() {
   return input18;
}

double NNfunction_sb_dRdR::neuron0x25c5de0() {
   return input19;
}

double NNfunction_sb_dRdR::neuron0x25c6120() {
   return input20;
}

double NNfunction_sb_dRdR::neuron0x25c6460() {
   return input21;
}

double NNfunction_sb_dRdR::neuron0x25c67a0() {
   return input22;
}

double NNfunction_sb_dRdR::neuron0x25c6ae0() {
   return input23;
}

double NNfunction_sb_dRdR::input0x25c6f50() {
   double input = 0.332992;
   input += synapse0x25c7290();
   input += synapse0x25c72d0();
   input += synapse0x25c7310();
   input += synapse0x25c7350();
   input += synapse0x25c7390();
   input += synapse0x25c73d0();
   input += synapse0x25c7410();
   input += synapse0x25c7450();
   input += synapse0x25c7490();
   input += synapse0x25c74d0();
   input += synapse0x25c7510();
   input += synapse0x25c7550();
   input += synapse0x25c7590();
   input += synapse0x25c75d0();
   input += synapse0x25c7610();
   input += synapse0x25c7650();
   input += synapse0x25c70e0();
   input += synapse0x25c7120();
   input += synapse0x237e060();
   input += synapse0x237e0a0();
   input += synapse0x25c7690();
   input += synapse0x25c76d0();
   input += synapse0x25c7710();
   input += synapse0x25c7750();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25c6f50() {
   double input = input0x25c6f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25c7790() {
   double input = 5.43686;
   input += synapse0x25c7ad0();
   input += synapse0x25c7b10();
   input += synapse0x25c7b50();
   input += synapse0x25c7b90();
   input += synapse0x25c7bd0();
   input += synapse0x25c7c10();
   input += synapse0x25c7c50();
   input += synapse0x25c7c90();
   input += synapse0x25c7cd0();
   input += synapse0x237deb0();
   input += synapse0x237def0();
   input += synapse0x237df30();
   input += synapse0x237df70();
   input += synapse0x25c7f20();
   input += synapse0x25c7f60();
   input += synapse0x25c7fa0();
   input += synapse0x25c7920();
   input += synapse0x25c7960();
   input += synapse0x25c80f0();
   input += synapse0x25c8130();
   input += synapse0x25c8170();
   input += synapse0x25c81b0();
   input += synapse0x25c81f0();
   input += synapse0x25c8230();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25c7790() {
   double input = input0x25c7790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25c8270() {
   double input = -0.351864;
   input += synapse0x25c85b0();
   input += synapse0x25c85f0();
   input += synapse0x25c8630();
   input += synapse0x25c8670();
   input += synapse0x25c86b0();
   input += synapse0x25c86f0();
   input += synapse0x25c8730();
   input += synapse0x25c8770();
   input += synapse0x25c87b0();
   input += synapse0x25c87f0();
   input += synapse0x25c8830();
   input += synapse0x25c8870();
   input += synapse0x25c88b0();
   input += synapse0x25c88f0();
   input += synapse0x25c8930();
   input += synapse0x25c8970();
   input += synapse0x25c8400();
   input += synapse0x25c8440();
   input += synapse0x237e6f0();
   input += synapse0x238bf80();
   input += synapse0x238bfc0();
   input += synapse0x25ca8a0();
   input += synapse0x25ca8e0();
   input += synapse0x25c1bd0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25c8270() {
   double input = input0x25c8270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25c7d10() {
   double input = 0.267644;
   input += synapse0x25c1ca0();
   input += synapse0x238c800();
   input += synapse0x25c7ea0();
   input += synapse0x25c7ee0();
   input += synapse0x25c8ac0();
   input += synapse0x25c8b00();
   input += synapse0x25c8b40();
   input += synapse0x25c8b80();
   input += synapse0x25c8bc0();
   input += synapse0x25c8c00();
   input += synapse0x25c8c40();
   input += synapse0x25c8c80();
   input += synapse0x25c8cc0();
   input += synapse0x25c8d00();
   input += synapse0x25c8d40();
   input += synapse0x25c8d80();
   input += synapse0x25c1c10();
   input += synapse0x25c1c50();
   input += synapse0x25c8ed0();
   input += synapse0x25c8f10();
   input += synapse0x25c8f50();
   input += synapse0x25c8f90();
   input += synapse0x25c8fd0();
   input += synapse0x25c9010();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25c7d10() {
   double input = input0x25c7d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25c9050() {
   double input = -1.31591;
   input += synapse0x25c9390();
   input += synapse0x25c93d0();
   input += synapse0x25c9410();
   input += synapse0x25c9450();
   input += synapse0x25c9490();
   input += synapse0x25c94d0();
   input += synapse0x25c9510();
   input += synapse0x25c9550();
   input += synapse0x25c9590();
   input += synapse0x25c95d0();
   input += synapse0x25c9610();
   input += synapse0x25c9650();
   input += synapse0x25c9690();
   input += synapse0x25c96d0();
   input += synapse0x25c9710();
   input += synapse0x25c9750();
   input += synapse0x25c98a0();
   input += synapse0x25c91e0();
   input += synapse0x25c9220();
   input += synapse0x25ca9e0();
   input += synapse0x25caa20();
   input += synapse0x25caa60();
   input += synapse0x25caaa0();
   input += synapse0x25caae0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25c9050() {
   double input = input0x25c9050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25cab20() {
   double input = -1.10218;
   input += synapse0x25cae60();
   input += synapse0x25caea0();
   input += synapse0x25caee0();
   input += synapse0x25caf20();
   input += synapse0x25caf60();
   input += synapse0x25cafa0();
   input += synapse0x25cafe0();
   input += synapse0x25cb020();
   input += synapse0x25cb060();
   input += synapse0x238c2d0();
   input += synapse0x238c310();
   input += synapse0x238c350();
   input += synapse0x238c390();
   input += synapse0x238c3d0();
   input += synapse0x238c410();
   input += synapse0x238c450();
   input += synapse0x25cacb0();
   input += synapse0x25cacf0();
   input += synapse0x238c5a0();
   input += synapse0x238c5e0();
   input += synapse0x238c620();
   input += synapse0x238c660();
   input += synapse0x238c6a0();
   input += synapse0x25cb8b0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25cab20() {
   double input = input0x25cab20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25cb8f0() {
   double input = -0.00428902;
   input += synapse0x25cbc30();
   input += synapse0x25cbc70();
   input += synapse0x25cbcb0();
   input += synapse0x25cbcf0();
   input += synapse0x25cbd30();
   input += synapse0x25cbd70();
   input += synapse0x25cbdb0();
   input += synapse0x25cbdf0();
   input += synapse0x25cbe30();
   input += synapse0x25cbe70();
   input += synapse0x25cbeb0();
   input += synapse0x25cbef0();
   input += synapse0x25cbf30();
   input += synapse0x25cbf70();
   input += synapse0x25cbfb0();
   input += synapse0x25cbff0();
   input += synapse0x25cba80();
   input += synapse0x25cbac0();
   input += synapse0x25cc140();
   input += synapse0x25cc180();
   input += synapse0x25cc1c0();
   input += synapse0x25cc200();
   input += synapse0x25cc240();
   input += synapse0x25cc280();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25cb8f0() {
   double input = input0x25cb8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25cc2c0() {
   double input = 0.120742;
   input += synapse0x25cc600();
   input += synapse0x25cc640();
   input += synapse0x25cc680();
   input += synapse0x25cc6c0();
   input += synapse0x25cc700();
   input += synapse0x25cc740();
   input += synapse0x25cc780();
   input += synapse0x25cc7c0();
   input += synapse0x25cc800();
   input += synapse0x25cc840();
   input += synapse0x25cc880();
   input += synapse0x25cc8c0();
   input += synapse0x25cc900();
   input += synapse0x25cc940();
   input += synapse0x25cc980();
   input += synapse0x25cc9c0();
   input += synapse0x25cc450();
   input += synapse0x25cc490();
   input += synapse0x25ccb10();
   input += synapse0x25ccb50();
   input += synapse0x25ccb90();
   input += synapse0x25ccbd0();
   input += synapse0x25ccc10();
   input += synapse0x25ccc50();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25cc2c0() {
   double input = input0x25cc2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25ccc90() {
   double input = -0.822865;
   input += synapse0x25c5650();
   input += synapse0x25c5690();
   input += synapse0x25c56d0();
   input += synapse0x25c5710();
   input += synapse0x25cd1e0();
   input += synapse0x25cd220();
   input += synapse0x25cd260();
   input += synapse0x25cd2a0();
   input += synapse0x25cd2e0();
   input += synapse0x25cd320();
   input += synapse0x25cd360();
   input += synapse0x25cd3a0();
   input += synapse0x25cd3e0();
   input += synapse0x25cd420();
   input += synapse0x25cd460();
   input += synapse0x25cd4a0();
   input += synapse0x25cce20();
   input += synapse0x25cce60();
   input += synapse0x25cd5f0();
   input += synapse0x25cd630();
   input += synapse0x25cd670();
   input += synapse0x25cd6b0();
   input += synapse0x25cd6f0();
   input += synapse0x25cd730();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25ccc90() {
   double input = input0x25ccc90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25cd770() {
   double input = 1.44376;
   input += synapse0x25cdab0();
   input += synapse0x25cdaf0();
   input += synapse0x25cdb30();
   input += synapse0x25cdb70();
   input += synapse0x25cdbb0();
   input += synapse0x25cdbf0();
   input += synapse0x25cdc30();
   input += synapse0x25cdc70();
   input += synapse0x25cdcb0();
   input += synapse0x25cdcf0();
   input += synapse0x25cdd30();
   input += synapse0x25cdd70();
   input += synapse0x25cddb0();
   input += synapse0x25cddf0();
   input += synapse0x25cde30();
   input += synapse0x25cde70();
   input += synapse0x25cd900();
   input += synapse0x25cd940();
   input += synapse0x25cdfc0();
   input += synapse0x25ce000();
   input += synapse0x25ce040();
   input += synapse0x25ce080();
   input += synapse0x25ce0c0();
   input += synapse0x25ce100();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25cd770() {
   double input = input0x25cd770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25ce140() {
   double input = -1.66915;
   input += synapse0x25ce480();
   input += synapse0x25ce4c0();
   input += synapse0x25ce500();
   input += synapse0x25ce540();
   input += synapse0x25ce580();
   input += synapse0x25ce5c0();
   input += synapse0x25ce600();
   input += synapse0x25ce640();
   input += synapse0x25ce680();
   input += synapse0x25ce6c0();
   input += synapse0x25ce700();
   input += synapse0x25ce740();
   input += synapse0x25ce780();
   input += synapse0x25ce7c0();
   input += synapse0x25ce800();
   input += synapse0x25ce840();
   input += synapse0x25ce2d0();
   input += synapse0x25ce310();
   input += synapse0x25cb0a0();
   input += synapse0x25cb0e0();
   input += synapse0x25cb120();
   input += synapse0x25cb160();
   input += synapse0x25cb1a0();
   input += synapse0x25cb1e0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25ce140() {
   double input = input0x25ce140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25cb220() {
   double input = 1.13959;
   input += synapse0x25cb560();
   input += synapse0x25cb5a0();
   input += synapse0x25cb5e0();
   input += synapse0x25cb620();
   input += synapse0x25cb660();
   input += synapse0x25cb6a0();
   input += synapse0x25cb6e0();
   input += synapse0x25cb720();
   input += synapse0x25cb760();
   input += synapse0x25cb7a0();
   input += synapse0x25cb7e0();
   input += synapse0x25cb820();
   input += synapse0x25cb860();
   input += synapse0x25cf9a0();
   input += synapse0x25cf9e0();
   input += synapse0x25cfa20();
   input += synapse0x25cb3b0();
   input += synapse0x25cb3f0();
   input += synapse0x25cfb70();
   input += synapse0x25cfbb0();
   input += synapse0x25cfbf0();
   input += synapse0x25cfc30();
   input += synapse0x25cfc70();
   input += synapse0x25cfcb0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25cb220() {
   double input = input0x25cb220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25cfcf0() {
   double input = 0.392246;
   input += synapse0x25d0030();
   input += synapse0x25d0070();
   input += synapse0x25d00b0();
   input += synapse0x25d00f0();
   input += synapse0x25d0130();
   input += synapse0x25d0170();
   input += synapse0x25d01b0();
   input += synapse0x25d01f0();
   input += synapse0x25d0230();
   input += synapse0x25d0270();
   input += synapse0x25d02b0();
   input += synapse0x25d02f0();
   input += synapse0x25d0330();
   input += synapse0x25d0370();
   input += synapse0x25d03b0();
   input += synapse0x25d03f0();
   input += synapse0x25cfe80();
   input += synapse0x25cfec0();
   input += synapse0x25d0540();
   input += synapse0x25d0580();
   input += synapse0x25d05c0();
   input += synapse0x25d0600();
   input += synapse0x25d0640();
   input += synapse0x25d0680();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25cfcf0() {
   double input = input0x25cfcf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25d06c0() {
   double input = -0.901408;
   input += synapse0x25d0a00();
   input += synapse0x25d0a40();
   input += synapse0x25d0a80();
   input += synapse0x25d0ac0();
   input += synapse0x25d0b00();
   input += synapse0x25d0b40();
   input += synapse0x25d0b80();
   input += synapse0x25d0bc0();
   input += synapse0x25d0c00();
   input += synapse0x25d0c40();
   input += synapse0x25d0c80();
   input += synapse0x25d0cc0();
   input += synapse0x25d0d00();
   input += synapse0x25d0d40();
   input += synapse0x25d0d80();
   input += synapse0x25d0dc0();
   input += synapse0x25d0850();
   input += synapse0x25d0890();
   input += synapse0x25d0f10();
   input += synapse0x25d0f50();
   input += synapse0x25d0f90();
   input += synapse0x25d0fd0();
   input += synapse0x25d1010();
   input += synapse0x25d1050();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25d06c0() {
   double input = input0x25d06c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25d1090() {
   double input = -0.981047;
   input += synapse0x25d13d0();
   input += synapse0x25d1410();
   input += synapse0x25d1450();
   input += synapse0x25d1490();
   input += synapse0x25d14d0();
   input += synapse0x25d1510();
   input += synapse0x25d1550();
   input += synapse0x25d1590();
   input += synapse0x25d15d0();
   input += synapse0x25d1610();
   input += synapse0x25d1650();
   input += synapse0x25d1690();
   input += synapse0x25d16d0();
   input += synapse0x25d1710();
   input += synapse0x25d1750();
   input += synapse0x25d1790();
   input += synapse0x25d1220();
   input += synapse0x25d1260();
   input += synapse0x25d18e0();
   input += synapse0x25d1920();
   input += synapse0x25d1960();
   input += synapse0x25d19a0();
   input += synapse0x25d19e0();
   input += synapse0x25d1a20();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25d1090() {
   double input = input0x25d1090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25d1a60() {
   double input = 1.75629;
   input += synapse0x25d1da0();
   input += synapse0x25c2020();
   input += synapse0x25c2060();
   input += synapse0x25c2360();
   input += synapse0x25c23a0();
   input += synapse0x25c26a0();
   input += synapse0x25c26e0();
   input += synapse0x25c29e0();
   input += synapse0x25c2a20();
   input += synapse0x25c2d20();
   input += synapse0x25c2d60();
   input += synapse0x25c3060();
   input += synapse0x25c30a0();
   input += synapse0x25c33a0();
   input += synapse0x25c33e0();
   input += synapse0x25c36e0();
   input += synapse0x25c3720();
   input += synapse0x25c3a20();
   input += synapse0x25c3a60();
   input += synapse0x25c3d60();
   input += synapse0x25c3da0();
   input += synapse0x25c40a0();
   input += synapse0x25c40e0();
   input += synapse0x25c43e0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25d1a60() {
   double input = input0x25d1a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25d3870() {
   double input = 0.713557;
   input += synapse0x25c4420();
   input += synapse0x25c50e0();
   input += synapse0x25c5120();
   input += synapse0x25d1bf0();
   input += synapse0x25d1c30();
   input += synapse0x25c5420();
   input += synapse0x25c5460();
   input += synapse0x25c5980();
   input += synapse0x25c59c0();
   input += synapse0x25c5cc0();
   input += synapse0x25c5d00();
   input += synapse0x25c6000();
   input += synapse0x25c6040();
   input += synapse0x25c6340();
   input += synapse0x25c6380();
   input += synapse0x25c6680();
   input += synapse0x25c66c0();
   input += synapse0x25c69c0();
   input += synapse0x25c6a00();
   input += synapse0x25c6d00();
   input += synapse0x25c6d40();
   input += synapse0x25c4720();
   input += synapse0x25c4760();
   input += synapse0x25d3b10();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25d3870() {
   double input = input0x25d3870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25d3b50() {
   double input = -1.20033;
   input += synapse0x25d3e90();
   input += synapse0x25d3ed0();
   input += synapse0x25d3f10();
   input += synapse0x25d3f50();
   input += synapse0x25d3f90();
   input += synapse0x25d3fd0();
   input += synapse0x25d4010();
   input += synapse0x25d4050();
   input += synapse0x25d4090();
   input += synapse0x25d40d0();
   input += synapse0x25d4110();
   input += synapse0x25d4150();
   input += synapse0x25d4190();
   input += synapse0x25d41d0();
   input += synapse0x25d4210();
   input += synapse0x25d4250();
   input += synapse0x25d3ce0();
   input += synapse0x25d3d20();
   input += synapse0x25d43a0();
   input += synapse0x25d43e0();
   input += synapse0x25d4420();
   input += synapse0x25d4460();
   input += synapse0x25d44a0();
   input += synapse0x25d44e0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25d3b50() {
   double input = input0x25d3b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25d4520() {
   double input = 0.384623;
   input += synapse0x25d4860();
   input += synapse0x25d48a0();
   input += synapse0x25d48e0();
   input += synapse0x25d4920();
   input += synapse0x25d4960();
   input += synapse0x25d49a0();
   input += synapse0x25d49e0();
   input += synapse0x25d4a20();
   input += synapse0x25d4a60();
   input += synapse0x25d4aa0();
   input += synapse0x25d4ae0();
   input += synapse0x25d4b20();
   input += synapse0x25d4b60();
   input += synapse0x25d4ba0();
   input += synapse0x25d4be0();
   input += synapse0x25d4c20();
   input += synapse0x25d46b0();
   input += synapse0x25d46f0();
   input += synapse0x25d4d70();
   input += synapse0x25d4db0();
   input += synapse0x25d4df0();
   input += synapse0x25d4e30();
   input += synapse0x25d4e70();
   input += synapse0x25d4eb0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25d4520() {
   double input = input0x25d4520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25d4ef0() {
   double input = -0.883632;
   input += synapse0x25d5230();
   input += synapse0x25d5270();
   input += synapse0x25d52b0();
   input += synapse0x25d52f0();
   input += synapse0x25d5330();
   input += synapse0x25d5370();
   input += synapse0x25d53b0();
   input += synapse0x25d53f0();
   input += synapse0x25d5430();
   input += synapse0x25d5470();
   input += synapse0x25d54b0();
   input += synapse0x25d54f0();
   input += synapse0x25d5530();
   input += synapse0x25d5570();
   input += synapse0x25d55b0();
   input += synapse0x25d55f0();
   input += synapse0x25d5080();
   input += synapse0x25d50c0();
   input += synapse0x25d5740();
   input += synapse0x25d5780();
   input += synapse0x25d57c0();
   input += synapse0x25d5800();
   input += synapse0x25d5840();
   input += synapse0x25d5880();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25d4ef0() {
   double input = input0x25d4ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25d58c0() {
   double input = -0.830665;
   input += synapse0x25d5c00();
   input += synapse0x25d5c40();
   input += synapse0x25d5c80();
   input += synapse0x25d5cc0();
   input += synapse0x25d5d00();
   input += synapse0x25d5d40();
   input += synapse0x25d5d80();
   input += synapse0x25d5dc0();
   input += synapse0x25d5e00();
   input += synapse0x25d5e40();
   input += synapse0x25d5e80();
   input += synapse0x25d5ec0();
   input += synapse0x25d5f00();
   input += synapse0x25d5f40();
   input += synapse0x25d5f80();
   input += synapse0x25d5fc0();
   input += synapse0x25d5a50();
   input += synapse0x25d5a90();
   input += synapse0x25d6110();
   input += synapse0x25d6150();
   input += synapse0x25d6190();
   input += synapse0x25d61d0();
   input += synapse0x25d6210();
   input += synapse0x25d6250();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25d58c0() {
   double input = input0x25d58c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25d6290() {
   double input = 2.55314;
   input += synapse0x25d65d0();
   input += synapse0x25d6610();
   input += synapse0x25d6650();
   input += synapse0x25d6690();
   input += synapse0x25d66d0();
   input += synapse0x25d6710();
   input += synapse0x25d6750();
   input += synapse0x25d6790();
   input += synapse0x25d67d0();
   input += synapse0x25ce990();
   input += synapse0x25ce9d0();
   input += synapse0x25cea10();
   input += synapse0x25cea50();
   input += synapse0x25cea90();
   input += synapse0x25cead0();
   input += synapse0x25ceb10();
   input += synapse0x25d6420();
   input += synapse0x25d6460();
   input += synapse0x25cec60();
   input += synapse0x25ceca0();
   input += synapse0x25cece0();
   input += synapse0x25ced20();
   input += synapse0x25ced60();
   input += synapse0x25ceda0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25d6290() {
   double input = input0x25d6290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25cede0() {
   double input = -0.169728;
   input += synapse0x25cf120();
   input += synapse0x25cf160();
   input += synapse0x25cf1a0();
   input += synapse0x25cf1e0();
   input += synapse0x25cf220();
   input += synapse0x25cf260();
   input += synapse0x25cf2a0();
   input += synapse0x25cf2e0();
   input += synapse0x25cf320();
   input += synapse0x25cf360();
   input += synapse0x25cf3a0();
   input += synapse0x25cf3e0();
   input += synapse0x25cf420();
   input += synapse0x25cf460();
   input += synapse0x25cf4a0();
   input += synapse0x25cf4e0();
   input += synapse0x25cef70();
   input += synapse0x25cefb0();
   input += synapse0x25cf630();
   input += synapse0x25cf670();
   input += synapse0x25cf6b0();
   input += synapse0x25cf6f0();
   input += synapse0x25cf730();
   input += synapse0x25cf770();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25cede0() {
   double input = input0x25cede0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25cf7b0() {
   double input = -0.0634005;
   input += synapse0x25cf940();
   input += synapse0x25d89d0();
   input += synapse0x25d8a10();
   input += synapse0x25d8a50();
   input += synapse0x25d8a90();
   input += synapse0x25d8ad0();
   input += synapse0x25d8b10();
   input += synapse0x25d8b50();
   input += synapse0x25d8b90();
   input += synapse0x25d8bd0();
   input += synapse0x25d8c10();
   input += synapse0x25d8c50();
   input += synapse0x25d8c90();
   input += synapse0x25d8cd0();
   input += synapse0x25d8d10();
   input += synapse0x25d8d50();
   input += synapse0x25d8820();
   input += synapse0x25d8860();
   input += synapse0x25d8ea0();
   input += synapse0x25d8ee0();
   input += synapse0x25d8f20();
   input += synapse0x25d8f60();
   input += synapse0x25d8fa0();
   input += synapse0x25d8fe0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25cf7b0() {
   double input = input0x25cf7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25d9020() {
   double input = -4.66732;
   input += synapse0x25d9360();
   input += synapse0x25d93a0();
   input += synapse0x25d93e0();
   input += synapse0x25d9420();
   input += synapse0x25d9460();
   input += synapse0x25d94a0();
   input += synapse0x25d94e0();
   input += synapse0x25d9520();
   input += synapse0x25d9560();
   input += synapse0x25d95a0();
   input += synapse0x25d95e0();
   input += synapse0x25d9620();
   input += synapse0x25d9660();
   input += synapse0x25d96a0();
   input += synapse0x25d96e0();
   input += synapse0x25d9720();
   input += synapse0x25d91b0();
   input += synapse0x25d91f0();
   input += synapse0x25d9870();
   input += synapse0x25d98b0();
   input += synapse0x25d98f0();
   input += synapse0x25d9930();
   input += synapse0x25d9970();
   input += synapse0x25d99b0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25d9020() {
   double input = input0x25d9020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25d99f0() {
   double input = 1.84805;
   input += synapse0x25d9d30();
   input += synapse0x25d9d70();
   input += synapse0x25d9db0();
   input += synapse0x25d9df0();
   input += synapse0x25d9e30();
   input += synapse0x25d9e70();
   input += synapse0x25d9eb0();
   input += synapse0x25d9ef0();
   input += synapse0x25d9f30();
   input += synapse0x25d9f70();
   input += synapse0x25d9fb0();
   input += synapse0x25d9ff0();
   input += synapse0x25da030();
   input += synapse0x25da070();
   input += synapse0x25da0b0();
   input += synapse0x25da0f0();
   input += synapse0x25d9b80();
   input += synapse0x25d9bc0();
   input += synapse0x25da240();
   input += synapse0x25da280();
   input += synapse0x25da2c0();
   input += synapse0x25da300();
   input += synapse0x25da340();
   input += synapse0x25da380();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25d99f0() {
   double input = input0x25d99f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25da3c0() {
   double input = 0.905967;
   input += synapse0x25da700();
   input += synapse0x25da740();
   input += synapse0x25da780();
   input += synapse0x25da7c0();
   input += synapse0x25da800();
   input += synapse0x25da840();
   input += synapse0x25da880();
   input += synapse0x25da8c0();
   input += synapse0x25da900();
   input += synapse0x25da940();
   input += synapse0x25da980();
   input += synapse0x25da9c0();
   input += synapse0x25daa00();
   input += synapse0x25daa40();
   input += synapse0x25daa80();
   input += synapse0x25daac0();
   input += synapse0x25da550();
   input += synapse0x25da590();
   input += synapse0x25dac10();
   input += synapse0x25dac50();
   input += synapse0x25dac90();
   input += synapse0x25dacd0();
   input += synapse0x25dad10();
   input += synapse0x25dad50();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25da3c0() {
   double input = input0x25da3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25dad90() {
   double input = 0.312797;
   input += synapse0x25db0d0();
   input += synapse0x25db110();
   input += synapse0x25db150();
   input += synapse0x25db190();
   input += synapse0x25db1d0();
   input += synapse0x25db210();
   input += synapse0x25db250();
   input += synapse0x25db290();
   input += synapse0x25db2d0();
   input += synapse0x25db310();
   input += synapse0x25db350();
   input += synapse0x25db390();
   input += synapse0x25db3d0();
   input += synapse0x25db410();
   input += synapse0x25db450();
   input += synapse0x25db490();
   input += synapse0x25daf20();
   input += synapse0x25daf60();
   input += synapse0x25db5e0();
   input += synapse0x25db620();
   input += synapse0x25db660();
   input += synapse0x25db6a0();
   input += synapse0x25db6e0();
   input += synapse0x25db720();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25dad90() {
   double input = input0x25dad90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25db760() {
   double input = -0.903504;
   input += synapse0x25dbaa0();
   input += synapse0x25dbae0();
   input += synapse0x25dbb20();
   input += synapse0x25dbb60();
   input += synapse0x25dbba0();
   input += synapse0x25dbbe0();
   input += synapse0x25dbc20();
   input += synapse0x25dbc60();
   input += synapse0x25dbca0();
   input += synapse0x25dbce0();
   input += synapse0x25dbd20();
   input += synapse0x25dbd60();
   input += synapse0x25dbda0();
   input += synapse0x25dbde0();
   input += synapse0x25dbe20();
   input += synapse0x25dbe60();
   input += synapse0x25db8f0();
   input += synapse0x25db930();
   input += synapse0x25dbfb0();
   input += synapse0x25dbff0();
   input += synapse0x25dc030();
   input += synapse0x25dc070();
   input += synapse0x25dc0b0();
   input += synapse0x25dc0f0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25db760() {
   double input = input0x25db760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25dc130() {
   double input = 0.124367;
   input += synapse0x25dc470();
   input += synapse0x25dc4b0();
   input += synapse0x25dc4f0();
   input += synapse0x25dc530();
   input += synapse0x25dc570();
   input += synapse0x25dc5b0();
   input += synapse0x25dc5f0();
   input += synapse0x25dc630();
   input += synapse0x25dc670();
   input += synapse0x25dc6b0();
   input += synapse0x25dc6f0();
   input += synapse0x25dc730();
   input += synapse0x25dc770();
   input += synapse0x25dc7b0();
   input += synapse0x25dc7f0();
   input += synapse0x25dc830();
   input += synapse0x25dc2c0();
   input += synapse0x25dc300();
   input += synapse0x25dc980();
   input += synapse0x25dc9c0();
   input += synapse0x25dca00();
   input += synapse0x25dca40();
   input += synapse0x25dca80();
   input += synapse0x25dcac0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25dc130() {
   double input = input0x25dc130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25dcb00() {
   double input = -2.16359;
   input += synapse0x25dce40();
   input += synapse0x25dce80();
   input += synapse0x25dcec0();
   input += synapse0x25dcf00();
   input += synapse0x25dcf40();
   input += synapse0x25dcf80();
   input += synapse0x25dcfc0();
   input += synapse0x25dd000();
   input += synapse0x25dd040();
   input += synapse0x25dd080();
   input += synapse0x25dd0c0();
   input += synapse0x25dd100();
   input += synapse0x25dd140();
   input += synapse0x25dd180();
   input += synapse0x25dd1c0();
   input += synapse0x25dd200();
   input += synapse0x25dcc90();
   input += synapse0x25dccd0();
   input += synapse0x25dd350();
   input += synapse0x25dd390();
   input += synapse0x25dd3d0();
   input += synapse0x25dd410();
   input += synapse0x25dd450();
   input += synapse0x25dd490();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25dcb00() {
   double input = input0x25dcb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25dd4d0() {
   double input = 0.310559;
   input += synapse0x25dd810();
   input += synapse0x25d1de0();
   input += synapse0x25d1e20();
   input += synapse0x25d1e60();
   input += synapse0x25d20b0();
   input += synapse0x25d20f0();
   input += synapse0x25d2130();
   input += synapse0x25d2380();
   input += synapse0x25d23c0();
   input += synapse0x25d2610();
   input += synapse0x25d2650();
   input += synapse0x25d2690();
   input += synapse0x25d28e0();
   input += synapse0x25d2920();
   input += synapse0x25d2b70();
   input += synapse0x25d2bb0();
   input += synapse0x25dd660();
   input += synapse0x25dd6a0();
   input += synapse0x25d2d00();
   input += synapse0x25d3210();
   input += synapse0x25d3250();
   input += synapse0x25d3290();
   input += synapse0x25d34e0();
   input += synapse0x25d3520();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25dd4d0() {
   double input = input0x25dd4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25d3560() {
   double input = -0.319844;
   input += synapse0x25d2dd0();
   input += synapse0x25d2e10();
   input += synapse0x25d2e50();
   input += synapse0x25d2e90();
   input += synapse0x25d3810();
   input += synapse0x25dfb60();
   input += synapse0x25dfba0();
   input += synapse0x25dfbe0();
   input += synapse0x25dfc20();
   input += synapse0x25dfc60();
   input += synapse0x25dfca0();
   input += synapse0x25dfce0();
   input += synapse0x25dfd20();
   input += synapse0x25dfd60();
   input += synapse0x25dfda0();
   input += synapse0x25dfde0();
   input += synapse0x25d36f0();
   input += synapse0x25d3730();
   input += synapse0x25dff30();
   input += synapse0x25dff70();
   input += synapse0x25dffb0();
   input += synapse0x25dfff0();
   input += synapse0x25e0030();
   input += synapse0x25e0070();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25d3560() {
   double input = input0x25d3560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25e00b0() {
   double input = 0.205006;
   input += synapse0x25e03f0();
   input += synapse0x25e0430();
   input += synapse0x25e0470();
   input += synapse0x25e04b0();
   input += synapse0x25e04f0();
   input += synapse0x25e0530();
   input += synapse0x25e0570();
   input += synapse0x25e05b0();
   input += synapse0x25e05f0();
   input += synapse0x25e0630();
   input += synapse0x25e0670();
   input += synapse0x25e06b0();
   input += synapse0x25e06f0();
   input += synapse0x25e0730();
   input += synapse0x25e0770();
   input += synapse0x25e07b0();
   input += synapse0x25e0240();
   input += synapse0x25e0280();
   input += synapse0x25e0900();
   input += synapse0x25e0940();
   input += synapse0x25e0980();
   input += synapse0x25e09c0();
   input += synapse0x25e0a00();
   input += synapse0x25e0a40();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25e00b0() {
   double input = input0x25e00b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25e0a80() {
   double input = 0.654462;
   input += synapse0x25e0dc0();
   input += synapse0x25e0e00();
   input += synapse0x25e0e40();
   input += synapse0x25e0e80();
   input += synapse0x25e0ec0();
   input += synapse0x25e0f00();
   input += synapse0x25e0f40();
   input += synapse0x25e0f80();
   input += synapse0x25e0fc0();
   input += synapse0x25e1000();
   input += synapse0x25e1040();
   input += synapse0x25e1080();
   input += synapse0x25e10c0();
   input += synapse0x25e1100();
   input += synapse0x25e1140();
   input += synapse0x25e1180();
   input += synapse0x25e0c10();
   input += synapse0x25e0c50();
   input += synapse0x25e12d0();
   input += synapse0x25e1310();
   input += synapse0x25e1350();
   input += synapse0x25e1390();
   input += synapse0x25e13d0();
   input += synapse0x25e1410();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25e0a80() {
   double input = input0x25e0a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25e1450() {
   double input = 5.91076;
   input += synapse0x25e1790();
   input += synapse0x25e17d0();
   input += synapse0x25e1810();
   input += synapse0x25e1850();
   input += synapse0x25e1890();
   input += synapse0x25e18d0();
   input += synapse0x25e1910();
   input += synapse0x25e1950();
   input += synapse0x25e1990();
   input += synapse0x25e19d0();
   input += synapse0x25e1a10();
   input += synapse0x25e1a50();
   input += synapse0x25e1a90();
   input += synapse0x25e1ad0();
   input += synapse0x25e1b10();
   input += synapse0x25e1b50();
   input += synapse0x25e15e0();
   input += synapse0x25e1620();
   input += synapse0x25e1ca0();
   input += synapse0x25e1ce0();
   input += synapse0x25e1d20();
   input += synapse0x25e1d60();
   input += synapse0x25e1da0();
   input += synapse0x25e1de0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25e1450() {
   double input = input0x25e1450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25e1e20() {
   double input = 2.00569;
   input += synapse0x25e2160();
   input += synapse0x25e21a0();
   input += synapse0x25e21e0();
   input += synapse0x25e2220();
   input += synapse0x25e2260();
   input += synapse0x25e22a0();
   input += synapse0x25e22e0();
   input += synapse0x25e2320();
   input += synapse0x25e2360();
   input += synapse0x25e23a0();
   input += synapse0x25e23e0();
   input += synapse0x25e2420();
   input += synapse0x25e2460();
   input += synapse0x25e24a0();
   input += synapse0x25e24e0();
   input += synapse0x25e2520();
   input += synapse0x25e1fb0();
   input += synapse0x25e1ff0();
   input += synapse0x25e2670();
   input += synapse0x25e26b0();
   input += synapse0x25e26f0();
   input += synapse0x25e2730();
   input += synapse0x25e2770();
   input += synapse0x25e27b0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25e1e20() {
   double input = input0x25e1e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25e27f0() {
   double input = -0.932185;
   input += synapse0x25e2b30();
   input += synapse0x25e2b70();
   input += synapse0x25e2bb0();
   input += synapse0x25e2bf0();
   input += synapse0x25e2c30();
   input += synapse0x25e2c70();
   input += synapse0x25e2cb0();
   input += synapse0x25e2cf0();
   input += synapse0x25e2d30();
   input += synapse0x25e2d70();
   input += synapse0x25e2db0();
   input += synapse0x25e2df0();
   input += synapse0x25e2e30();
   input += synapse0x25e2e70();
   input += synapse0x25e2eb0();
   input += synapse0x25e2ef0();
   input += synapse0x25e2980();
   input += synapse0x25e29c0();
   input += synapse0x25e3040();
   input += synapse0x25e3080();
   input += synapse0x25e30c0();
   input += synapse0x25e3100();
   input += synapse0x25e3140();
   input += synapse0x25e3180();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25e27f0() {
   double input = input0x25e27f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25e31c0() {
   double input = 0.167801;
   input += synapse0x25e3500();
   input += synapse0x25e3540();
   input += synapse0x25e3580();
   input += synapse0x25e35c0();
   input += synapse0x25e3600();
   input += synapse0x25e3640();
   input += synapse0x25e3680();
   input += synapse0x25e36c0();
   input += synapse0x25e3700();
   input += synapse0x25e3740();
   input += synapse0x25e3780();
   input += synapse0x25e37c0();
   input += synapse0x25e3800();
   input += synapse0x25e3840();
   input += synapse0x25e3880();
   input += synapse0x25e38c0();
   input += synapse0x25e3350();
   input += synapse0x25e3390();
   input += synapse0x25e3a10();
   input += synapse0x25e3a50();
   input += synapse0x25e3a90();
   input += synapse0x25e3ad0();
   input += synapse0x25e3b10();
   input += synapse0x25e3b50();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25e31c0() {
   double input = input0x25e31c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25e3b90() {
   double input = 0.736017;
   input += synapse0x25e3ed0();
   input += synapse0x25e3f10();
   input += synapse0x25e3f50();
   input += synapse0x25e3f90();
   input += synapse0x25e3fd0();
   input += synapse0x25e4010();
   input += synapse0x25e4050();
   input += synapse0x25e4090();
   input += synapse0x25e40d0();
   input += synapse0x25e4110();
   input += synapse0x25e4150();
   input += synapse0x25e4190();
   input += synapse0x25e41d0();
   input += synapse0x25e4210();
   input += synapse0x25e4250();
   input += synapse0x25e4290();
   input += synapse0x25e3d20();
   input += synapse0x25e3d60();
   input += synapse0x25e43e0();
   input += synapse0x25e4420();
   input += synapse0x25e4460();
   input += synapse0x25e44a0();
   input += synapse0x25e44e0();
   input += synapse0x25e4520();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25e3b90() {
   double input = input0x25e3b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25e4560() {
   double input = -2.16263;
   input += synapse0x25ccfd0();
   input += synapse0x25cd010();
   input += synapse0x25cd050();
   input += synapse0x25cd090();
   input += synapse0x25cd0d0();
   input += synapse0x25cd110();
   input += synapse0x25cd150();
   input += synapse0x25cd190();
   input += synapse0x25e4cb0();
   input += synapse0x25e4cf0();
   input += synapse0x25e4d30();
   input += synapse0x25e4d70();
   input += synapse0x25e4db0();
   input += synapse0x25e4df0();
   input += synapse0x25e4e30();
   input += synapse0x25e4e70();
   input += synapse0x25e46f0();
   input += synapse0x25e4730();
   input += synapse0x25e4fc0();
   input += synapse0x25e5000();
   input += synapse0x25e5040();
   input += synapse0x25e5080();
   input += synapse0x25e50c0();
   input += synapse0x25e5100();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25e4560() {
   double input = input0x25e4560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25e5140() {
   double input = -1.43934;
   input += synapse0x25e5480();
   input += synapse0x25e54c0();
   input += synapse0x25e5500();
   input += synapse0x25e5540();
   input += synapse0x25e5580();
   input += synapse0x25e55c0();
   input += synapse0x25e5600();
   input += synapse0x25e5640();
   input += synapse0x25e5680();
   input += synapse0x25e56c0();
   input += synapse0x25e5700();
   input += synapse0x25e5740();
   input += synapse0x25e5780();
   input += synapse0x25e57c0();
   input += synapse0x25e5800();
   input += synapse0x25e5840();
   input += synapse0x25e52d0();
   input += synapse0x25e5310();
   input += synapse0x25e5990();
   input += synapse0x25e59d0();
   input += synapse0x25e5a10();
   input += synapse0x25e5a50();
   input += synapse0x25e5a90();
   input += synapse0x25e5ad0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25e5140() {
   double input = input0x25e5140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25e5b10() {
   double input = -0.734254;
   input += synapse0x25e5e50();
   input += synapse0x25e5e90();
   input += synapse0x25e5ed0();
   input += synapse0x25e5f10();
   input += synapse0x25e5f50();
   input += synapse0x25e5f90();
   input += synapse0x25e5fd0();
   input += synapse0x25e6010();
   input += synapse0x25e6050();
   input += synapse0x25e6090();
   input += synapse0x25e60d0();
   input += synapse0x25e6110();
   input += synapse0x25e6150();
   input += synapse0x25e6190();
   input += synapse0x25e61d0();
   input += synapse0x25e6210();
   input += synapse0x25e5ca0();
   input += synapse0x25e5ce0();
   input += synapse0x25d6810();
   input += synapse0x25d6850();
   input += synapse0x25d6890();
   input += synapse0x25d68d0();
   input += synapse0x25d6910();
   input += synapse0x25d6950();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25e5b10() {
   double input = input0x25e5b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25d6990() {
   double input = 0.342936;
   input += synapse0x25d6cd0();
   input += synapse0x25d6d10();
   input += synapse0x25d6d50();
   input += synapse0x25d6d90();
   input += synapse0x25d6dd0();
   input += synapse0x25d6e10();
   input += synapse0x25d6e50();
   input += synapse0x25d6e90();
   input += synapse0x25d6ed0();
   input += synapse0x25d6f10();
   input += synapse0x25d6f50();
   input += synapse0x25d6f90();
   input += synapse0x25d6fd0();
   input += synapse0x25d7010();
   input += synapse0x25d7050();
   input += synapse0x25d7090();
   input += synapse0x25d6b20();
   input += synapse0x25d6b60();
   input += synapse0x25d71e0();
   input += synapse0x25d7220();
   input += synapse0x25d7260();
   input += synapse0x25d72a0();
   input += synapse0x25d72e0();
   input += synapse0x25d7320();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25d6990() {
   double input = input0x25d6990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25d7360() {
   double input = 0.010773;
   input += synapse0x25d76a0();
   input += synapse0x25d76e0();
   input += synapse0x25d7720();
   input += synapse0x25d7760();
   input += synapse0x25d77a0();
   input += synapse0x25d77e0();
   input += synapse0x25d7820();
   input += synapse0x25d7860();
   input += synapse0x25d78a0();
   input += synapse0x25d78e0();
   input += synapse0x25d7920();
   input += synapse0x25d7960();
   input += synapse0x25d79a0();
   input += synapse0x25d79e0();
   input += synapse0x25d7a20();
   input += synapse0x25d7a60();
   input += synapse0x25d74f0();
   input += synapse0x25d7530();
   input += synapse0x25d7bb0();
   input += synapse0x25d7bf0();
   input += synapse0x25d7c30();
   input += synapse0x25d7c70();
   input += synapse0x25d7cb0();
   input += synapse0x25d7cf0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25d7360() {
   double input = input0x25d7360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25d7d30() {
   double input = 0.16691;
   input += synapse0x25d8070();
   input += synapse0x25d80b0();
   input += synapse0x25d80f0();
   input += synapse0x25d8130();
   input += synapse0x25d8170();
   input += synapse0x25d81b0();
   input += synapse0x25d81f0();
   input += synapse0x25d8230();
   input += synapse0x25d8270();
   input += synapse0x25d82b0();
   input += synapse0x25d82f0();
   input += synapse0x25d8330();
   input += synapse0x25d8370();
   input += synapse0x25d83b0();
   input += synapse0x25d83f0();
   input += synapse0x25d8430();
   input += synapse0x25d7ec0();
   input += synapse0x25d7f00();
   input += synapse0x25d8580();
   input += synapse0x25d85c0();
   input += synapse0x25d8600();
   input += synapse0x25d8640();
   input += synapse0x25d8680();
   input += synapse0x25d86c0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25d7d30() {
   double input = input0x25d7d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25ea370() {
   double input = 0.540839;
   input += synapse0x25ea590();
   input += synapse0x25ea5d0();
   input += synapse0x25ea610();
   input += synapse0x25ea650();
   input += synapse0x25ea690();
   input += synapse0x25ea6d0();
   input += synapse0x25ea710();
   input += synapse0x25ea750();
   input += synapse0x25ea790();
   input += synapse0x25ea7d0();
   input += synapse0x25ea810();
   input += synapse0x25ea850();
   input += synapse0x25ea890();
   input += synapse0x25ea8d0();
   input += synapse0x25ea910();
   input += synapse0x25ea950();
   input += synapse0x25d8700();
   input += synapse0x25d8740();
   input += synapse0x25eaaa0();
   input += synapse0x25eaae0();
   input += synapse0x25eab20();
   input += synapse0x25eab60();
   input += synapse0x25eaba0();
   input += synapse0x25eabe0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25ea370() {
   double input = input0x25ea370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25eac20() {
   double input = -0.492575;
   input += synapse0x25eaf60();
   input += synapse0x25eafa0();
   input += synapse0x25eafe0();
   input += synapse0x25eb020();
   input += synapse0x25eb060();
   input += synapse0x25eb0a0();
   input += synapse0x25eb0e0();
   input += synapse0x25eb120();
   input += synapse0x25eb160();
   input += synapse0x25eb1a0();
   input += synapse0x25eb1e0();
   input += synapse0x25eb220();
   input += synapse0x25eb260();
   input += synapse0x25eb2a0();
   input += synapse0x25eb2e0();
   input += synapse0x25eb320();
   input += synapse0x25eadb0();
   input += synapse0x25eadf0();
   input += synapse0x25eb470();
   input += synapse0x25eb4b0();
   input += synapse0x25eb4f0();
   input += synapse0x25eb530();
   input += synapse0x25eb570();
   input += synapse0x25eb5b0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25eac20() {
   double input = input0x25eac20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25eb5f0() {
   double input = 0.864776;
   input += synapse0x25eb930();
   input += synapse0x25eb970();
   input += synapse0x25eb9b0();
   input += synapse0x25eb9f0();
   input += synapse0x25eba30();
   input += synapse0x25eba70();
   input += synapse0x25ebab0();
   input += synapse0x25ebaf0();
   input += synapse0x25ebb30();
   input += synapse0x25ebb70();
   input += synapse0x25ebbb0();
   input += synapse0x25ebbf0();
   input += synapse0x25ebc30();
   input += synapse0x25ebc70();
   input += synapse0x25ebcb0();
   input += synapse0x25ebcf0();
   input += synapse0x25eb780();
   input += synapse0x25eb7c0();
   input += synapse0x25ebe40();
   input += synapse0x25ebe80();
   input += synapse0x25ebec0();
   input += synapse0x25ebf00();
   input += synapse0x25ebf40();
   input += synapse0x25ebf80();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25eb5f0() {
   double input = input0x25eb5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25ebfc0() {
   double input = -0.724874;
   input += synapse0x25ec300();
   input += synapse0x25ec340();
   input += synapse0x25ec380();
   input += synapse0x25ec3c0();
   input += synapse0x25ec400();
   input += synapse0x25ec440();
   input += synapse0x25ec480();
   input += synapse0x25ec4c0();
   input += synapse0x25ec500();
   input += synapse0x25ec540();
   input += synapse0x25ec580();
   input += synapse0x25ec5c0();
   input += synapse0x25ec600();
   input += synapse0x25ec640();
   input += synapse0x25ec680();
   input += synapse0x25ec6c0();
   input += synapse0x25ec150();
   input += synapse0x25ec190();
   input += synapse0x25ec810();
   input += synapse0x25ec850();
   input += synapse0x25ec890();
   input += synapse0x25ec8d0();
   input += synapse0x25ec910();
   input += synapse0x25ec950();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25ebfc0() {
   double input = input0x25ebfc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25f31c0() {
   double input = -0.171219;
   input += synapse0x238c770();
   input += synapse0x238c7b0();
   input += synapse0x25c9300();
   input += synapse0x25c9340();
   input += synapse0x25cadd0();
   input += synapse0x25cae10();
   input += synapse0x25cbba0();
   input += synapse0x25cbbe0();
   input += synapse0x25cc570();
   input += synapse0x25cc5b0();
   input += synapse0x25ccf40();
   input += synapse0x25ccf80();
   input += synapse0x25cda20();
   input += synapse0x25cda60();
   input += synapse0x25ce3f0();
   input += synapse0x25ce430();
   input += synapse0x25cb4d0();
   input += synapse0x25cb510();
   input += synapse0x25cffa0();
   input += synapse0x25cffe0();
   input += synapse0x25d0970();
   input += synapse0x25d09b0();
   input += synapse0x25d1340();
   input += synapse0x25d1380();
   input += synapse0x25d1d10();
   input += synapse0x25d1d50();
   input += synapse0x25c4da0();
   input += synapse0x25c4de0();
   input += synapse0x25d3e00();
   input += synapse0x25d3e40();
   input += synapse0x25d47d0();
   input += synapse0x25d4810();
   input += synapse0x25d51a0();
   input += synapse0x25d51e0();
   input += synapse0x25d5b70();
   input += synapse0x25d5bb0();
   input += synapse0x25d6540();
   input += synapse0x25d6580();
   input += synapse0x25cf090();
   input += synapse0x25cf0d0();
   input += synapse0x25d8940();
   input += synapse0x25d8980();
   input += synapse0x25d92d0();
   input += synapse0x25d9310();
   input += synapse0x25d9ca0();
   input += synapse0x25d9ce0();
   input += synapse0x25da670();
   input += synapse0x25da6b0();
   input += synapse0x25db040();
   input += synapse0x25db080();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25f31c0() {
   double input = input0x25f31c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25f3560() {
   double input = 0.407142;
   input += synapse0x25dd780();
   input += synapse0x25dd7c0();
   input += synapse0x25d2d40();
   input += synapse0x25d2d80();
   input += synapse0x25e0360();
   input += synapse0x25e03a0();
   input += synapse0x25e0d30();
   input += synapse0x25e0d70();
   input += synapse0x25e1700();
   input += synapse0x25e1740();
   input += synapse0x25e20d0();
   input += synapse0x25e2110();
   input += synapse0x25e2aa0();
   input += synapse0x25e2ae0();
   input += synapse0x25e3470();
   input += synapse0x25e34b0();
   input += synapse0x25e3e40();
   input += synapse0x25e3e80();
   input += synapse0x25e4810();
   input += synapse0x25e4850();
   input += synapse0x25e53f0();
   input += synapse0x25e5430();
   input += synapse0x25e5dc0();
   input += synapse0x25e5e00();
   input += synapse0x25d6c40();
   input += synapse0x25d6c80();
   input += synapse0x25d7610();
   input += synapse0x25d7650();
   input += synapse0x25d7fe0();
   input += synapse0x25d8020();
   input += synapse0x25ea500();
   input += synapse0x25ea540();
   input += synapse0x25eaed0();
   input += synapse0x25eaf10();
   input += synapse0x25eb8a0();
   input += synapse0x25eb8e0();
   input += synapse0x25ec270();
   input += synapse0x25ec2b0();
   input += synapse0x25c7200();
   input += synapse0x25c7240();
   input += synapse0x25dba10();
   input += synapse0x25dba50();
   input += synapse0x25ec990();
   input += synapse0x25ec9d0();
   input += synapse0x25eca10();
   input += synapse0x25eca50();
   input += synapse0x25f3900();
   input += synapse0x25f3940();
   input += synapse0x25f3980();
   input += synapse0x25f39c0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25f3560() {
   double input = input0x25f3560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25f3a00() {
   double input = 0.1941;
   input += synapse0x25f3d40();
   input += synapse0x25f3d80();
   input += synapse0x25f3dc0();
   input += synapse0x25f3e00();
   input += synapse0x25f3e40();
   input += synapse0x25f3e80();
   input += synapse0x25f3ec0();
   input += synapse0x25f3f00();
   input += synapse0x25f3f40();
   input += synapse0x25f3f80();
   input += synapse0x25f3fc0();
   input += synapse0x25f4000();
   input += synapse0x25f4040();
   input += synapse0x25f4080();
   input += synapse0x25f40c0();
   input += synapse0x25f4100();
   input += synapse0x25f3b90();
   input += synapse0x25f3bd0();
   input += synapse0x25f4250();
   input += synapse0x25f4290();
   input += synapse0x25f42d0();
   input += synapse0x25f4310();
   input += synapse0x25f4350();
   input += synapse0x25f4390();
   input += synapse0x25f43d0();
   input += synapse0x25f4410();
   input += synapse0x25f4450();
   input += synapse0x25f4490();
   input += synapse0x25f44d0();
   input += synapse0x25f4510();
   input += synapse0x25f4550();
   input += synapse0x25f4590();
   input += synapse0x25f4140();
   input += synapse0x25f4180();
   input += synapse0x25f41c0();
   input += synapse0x25f4200();
   input += synapse0x25f47e0();
   input += synapse0x25f4820();
   input += synapse0x25f4860();
   input += synapse0x25f48a0();
   input += synapse0x25f48e0();
   input += synapse0x25f4920();
   input += synapse0x25f4960();
   input += synapse0x25f49a0();
   input += synapse0x25f49e0();
   input += synapse0x25f4a20();
   input += synapse0x25f4a60();
   input += synapse0x25f4aa0();
   input += synapse0x25f4ae0();
   input += synapse0x25f4b20();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25f3a00() {
   double input = input0x25f3a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25f4b60() {
   double input = -1.52879;
   input += synapse0x25f4ea0();
   input += synapse0x25f4ee0();
   input += synapse0x25f4f20();
   input += synapse0x25f4f60();
   input += synapse0x25f4fa0();
   input += synapse0x25f4fe0();
   input += synapse0x25f5020();
   input += synapse0x25f5060();
   input += synapse0x25f50a0();
   input += synapse0x25f50e0();
   input += synapse0x25f5120();
   input += synapse0x25f5160();
   input += synapse0x25f51a0();
   input += synapse0x25f51e0();
   input += synapse0x25f5220();
   input += synapse0x25f5260();
   input += synapse0x25f4cf0();
   input += synapse0x25f4d30();
   input += synapse0x25f53b0();
   input += synapse0x25f53f0();
   input += synapse0x25f5430();
   input += synapse0x25f5470();
   input += synapse0x25f54b0();
   input += synapse0x25f54f0();
   input += synapse0x25f5530();
   input += synapse0x25f5570();
   input += synapse0x25f55b0();
   input += synapse0x25f55f0();
   input += synapse0x25f5630();
   input += synapse0x25f5670();
   input += synapse0x25f56b0();
   input += synapse0x25f56f0();
   input += synapse0x25f52a0();
   input += synapse0x25f52e0();
   input += synapse0x25f5320();
   input += synapse0x25f5360();
   input += synapse0x25f5940();
   input += synapse0x25f5980();
   input += synapse0x25f59c0();
   input += synapse0x25f5a00();
   input += synapse0x25f5a40();
   input += synapse0x25f5a80();
   input += synapse0x25f5ac0();
   input += synapse0x25f5b00();
   input += synapse0x25f5b40();
   input += synapse0x25f5b80();
   input += synapse0x25f5bc0();
   input += synapse0x25f5c00();
   input += synapse0x25f5c40();
   input += synapse0x25f5c80();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25f4b60() {
   double input = input0x25f4b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25f5cc0() {
   double input = 0.653983;
   input += synapse0x25f6000();
   input += synapse0x25f6040();
   input += synapse0x25f6080();
   input += synapse0x25f60c0();
   input += synapse0x25f6100();
   input += synapse0x25f6140();
   input += synapse0x25f6180();
   input += synapse0x25f61c0();
   input += synapse0x25f6200();
   input += synapse0x25f6240();
   input += synapse0x25f6280();
   input += synapse0x25f62c0();
   input += synapse0x25f6300();
   input += synapse0x25f6340();
   input += synapse0x25f6380();
   input += synapse0x25f63c0();
   input += synapse0x25f5e50();
   input += synapse0x25f5e90();
   input += synapse0x25f6510();
   input += synapse0x25f6550();
   input += synapse0x25f6590();
   input += synapse0x25f65d0();
   input += synapse0x25f6610();
   input += synapse0x25f6650();
   input += synapse0x25f6690();
   input += synapse0x25f66d0();
   input += synapse0x25f6710();
   input += synapse0x25f6750();
   input += synapse0x25f6790();
   input += synapse0x25f67d0();
   input += synapse0x25f6810();
   input += synapse0x25f6850();
   input += synapse0x25f6400();
   input += synapse0x25f6440();
   input += synapse0x25f6480();
   input += synapse0x25f64c0();
   input += synapse0x25f6aa0();
   input += synapse0x25f6ae0();
   input += synapse0x25f6b20();
   input += synapse0x25f6b60();
   input += synapse0x25f6ba0();
   input += synapse0x25f6be0();
   input += synapse0x25f6c20();
   input += synapse0x25f6c60();
   input += synapse0x25f6ca0();
   input += synapse0x25f6ce0();
   input += synapse0x25f6d20();
   input += synapse0x25f6d60();
   input += synapse0x25f6da0();
   input += synapse0x25f6de0();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25f5cc0() {
   double input = input0x25f5cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dRdR::input0x25f6e20() {
   double input = 10.2399;
   input += synapse0x25f7040();
   input += synapse0x25f7080();
   input += synapse0x25f70c0();
   input += synapse0x25f7100();
   input += synapse0x25f7140();
   return input;
}

double NNfunction_sb_dRdR::neuron0x25f6e20() {
   double input = input0x25f6e20();
   return (input * 1)+0;
}

double NNfunction_sb_dRdR::synapse0x25c7290() {
   return (neuron0x25c1e90()*-0.0996147);
}

double NNfunction_sb_dRdR::synapse0x25c72d0() {
   return (neuron0x25c2140()*0.421659);
}

double NNfunction_sb_dRdR::synapse0x25c7310() {
   return (neuron0x25c2480()*-0.311487);
}

double NNfunction_sb_dRdR::synapse0x25c7350() {
   return (neuron0x25c27c0()*0.757524);
}

double NNfunction_sb_dRdR::synapse0x25c7390() {
   return (neuron0x25c2b00()*-0.0632729);
}

double NNfunction_sb_dRdR::synapse0x25c73d0() {
   return (neuron0x25c2e40()*0.18553);
}

double NNfunction_sb_dRdR::synapse0x25c7410() {
   return (neuron0x25c3180()*0.10908);
}

double NNfunction_sb_dRdR::synapse0x25c7450() {
   return (neuron0x25c34c0()*0.0805122);
}

double NNfunction_sb_dRdR::synapse0x25c7490() {
   return (neuron0x25c3800()*0.312998);
}

double NNfunction_sb_dRdR::synapse0x25c74d0() {
   return (neuron0x25c3b40()*0.16205);
}

double NNfunction_sb_dRdR::synapse0x25c7510() {
   return (neuron0x25c3e80()*0.141126);
}

double NNfunction_sb_dRdR::synapse0x25c7550() {
   return (neuron0x25c41c0()*-0.0420244);
}

double NNfunction_sb_dRdR::synapse0x25c7590() {
   return (neuron0x25c4500()*-0.305994);
}

double NNfunction_sb_dRdR::synapse0x25c75d0() {
   return (neuron0x25c4840()*-0.458172);
}

double NNfunction_sb_dRdR::synapse0x25c7610() {
   return (neuron0x25c4b80()*0.592008);
}

double NNfunction_sb_dRdR::synapse0x25c7650() {
   return (neuron0x25c4ec0()*0.971219);
}

double NNfunction_sb_dRdR::synapse0x25c70e0() {
   return (neuron0x25c5200()*1.24999);
}

double NNfunction_sb_dRdR::synapse0x25c7120() {
   return (neuron0x25c5760()*-0.132243);
}

double NNfunction_sb_dRdR::synapse0x237e060() {
   return (neuron0x25c5aa0()*0.26718);
}

double NNfunction_sb_dRdR::synapse0x237e0a0() {
   return (neuron0x25c5de0()*-0.259042);
}

double NNfunction_sb_dRdR::synapse0x25c7690() {
   return (neuron0x25c6120()*0.122504);
}

double NNfunction_sb_dRdR::synapse0x25c76d0() {
   return (neuron0x25c6460()*-0.229519);
}

double NNfunction_sb_dRdR::synapse0x25c7710() {
   return (neuron0x25c67a0()*0.204677);
}

double NNfunction_sb_dRdR::synapse0x25c7750() {
   return (neuron0x25c6ae0()*0.232233);
}

double NNfunction_sb_dRdR::synapse0x25c7ad0() {
   return (neuron0x25c1e90()*-0.00923111);
}

double NNfunction_sb_dRdR::synapse0x25c7b10() {
   return (neuron0x25c2140()*-0.022643);
}

double NNfunction_sb_dRdR::synapse0x25c7b50() {
   return (neuron0x25c2480()*-0.0166572);
}

double NNfunction_sb_dRdR::synapse0x25c7b90() {
   return (neuron0x25c27c0()*-3.08142);
}

double NNfunction_sb_dRdR::synapse0x25c7bd0() {
   return (neuron0x25c2b00()*0.0150319);
}

double NNfunction_sb_dRdR::synapse0x25c7c10() {
   return (neuron0x25c2e40()*-0.00176845);
}

double NNfunction_sb_dRdR::synapse0x25c7c50() {
   return (neuron0x25c3180()*0.0092017);
}

double NNfunction_sb_dRdR::synapse0x25c7c90() {
   return (neuron0x25c34c0()*0.0134751);
}

double NNfunction_sb_dRdR::synapse0x25c7cd0() {
   return (neuron0x25c3800()*-0.0148635);
}

double NNfunction_sb_dRdR::synapse0x237deb0() {
   return (neuron0x25c3b40()*0.0282328);
}

double NNfunction_sb_dRdR::synapse0x237def0() {
   return (neuron0x25c3e80()*0.0101657);
}

double NNfunction_sb_dRdR::synapse0x237df30() {
   return (neuron0x25c41c0()*0.0603176);
}

double NNfunction_sb_dRdR::synapse0x237df70() {
   return (neuron0x25c4500()*0.038918);
}

double NNfunction_sb_dRdR::synapse0x25c7f20() {
   return (neuron0x25c4840()*-0.0336133);
}

double NNfunction_sb_dRdR::synapse0x25c7f60() {
   return (neuron0x25c4b80()*0.0306218);
}

double NNfunction_sb_dRdR::synapse0x25c7fa0() {
   return (neuron0x25c4ec0()*0.0236118);
}

double NNfunction_sb_dRdR::synapse0x25c7920() {
   return (neuron0x25c5200()*-0.0572674);
}

double NNfunction_sb_dRdR::synapse0x25c7960() {
   return (neuron0x25c5760()*-0.621595);
}

double NNfunction_sb_dRdR::synapse0x25c80f0() {
   return (neuron0x25c5aa0()*-0.00546065);
}

double NNfunction_sb_dRdR::synapse0x25c8130() {
   return (neuron0x25c5de0()*0.0255573);
}

double NNfunction_sb_dRdR::synapse0x25c8170() {
   return (neuron0x25c6120()*-0.00935814);
}

double NNfunction_sb_dRdR::synapse0x25c81b0() {
   return (neuron0x25c6460()*0.0160331);
}

double NNfunction_sb_dRdR::synapse0x25c81f0() {
   return (neuron0x25c67a0()*-0.00954358);
}

double NNfunction_sb_dRdR::synapse0x25c8230() {
   return (neuron0x25c6ae0()*0.0030387);
}

double NNfunction_sb_dRdR::synapse0x25c85b0() {
   return (neuron0x25c1e90()*-0.103887);
}

double NNfunction_sb_dRdR::synapse0x25c85f0() {
   return (neuron0x25c2140()*-0.0739559);
}

double NNfunction_sb_dRdR::synapse0x25c8630() {
   return (neuron0x25c2480()*0.0366969);
}

double NNfunction_sb_dRdR::synapse0x25c8670() {
   return (neuron0x25c27c0()*-0.100378);
}

double NNfunction_sb_dRdR::synapse0x25c86b0() {
   return (neuron0x25c2b00()*0.0194206);
}

double NNfunction_sb_dRdR::synapse0x25c86f0() {
   return (neuron0x25c2e40()*0.133259);
}

double NNfunction_sb_dRdR::synapse0x25c8730() {
   return (neuron0x25c3180()*0.0785668);
}

double NNfunction_sb_dRdR::synapse0x25c8770() {
   return (neuron0x25c34c0()*0.0890929);
}

double NNfunction_sb_dRdR::synapse0x25c87b0() {
   return (neuron0x25c3800()*-0.157271);
}

double NNfunction_sb_dRdR::synapse0x25c87f0() {
   return (neuron0x25c3b40()*0.277421);
}

double NNfunction_sb_dRdR::synapse0x25c8830() {
   return (neuron0x25c3e80()*0.314874);
}

double NNfunction_sb_dRdR::synapse0x25c8870() {
   return (neuron0x25c41c0()*-0.0823855);
}

double NNfunction_sb_dRdR::synapse0x25c88b0() {
   return (neuron0x25c4500()*0.0310201);
}

double NNfunction_sb_dRdR::synapse0x25c88f0() {
   return (neuron0x25c4840()*-0.194966);
}

double NNfunction_sb_dRdR::synapse0x25c8930() {
   return (neuron0x25c4b80()*0.124588);
}

double NNfunction_sb_dRdR::synapse0x25c8970() {
   return (neuron0x25c4ec0()*0.0242158);
}

double NNfunction_sb_dRdR::synapse0x25c8400() {
   return (neuron0x25c5200()*-0.0309015);
}

double NNfunction_sb_dRdR::synapse0x25c8440() {
   return (neuron0x25c5760()*-1.65689);
}

double NNfunction_sb_dRdR::synapse0x237e6f0() {
   return (neuron0x25c5aa0()*-0.407293);
}

double NNfunction_sb_dRdR::synapse0x238bf80() {
   return (neuron0x25c5de0()*-0.26105);
}

double NNfunction_sb_dRdR::synapse0x238bfc0() {
   return (neuron0x25c6120()*-0.0493823);
}

double NNfunction_sb_dRdR::synapse0x25ca8a0() {
   return (neuron0x25c6460()*0.00341784);
}

double NNfunction_sb_dRdR::synapse0x25ca8e0() {
   return (neuron0x25c67a0()*-0.00947058);
}

double NNfunction_sb_dRdR::synapse0x25c1bd0() {
   return (neuron0x25c6ae0()*-0.0259568);
}

double NNfunction_sb_dRdR::synapse0x25c1ca0() {
   return (neuron0x25c1e90()*0.0904369);
}

double NNfunction_sb_dRdR::synapse0x238c800() {
   return (neuron0x25c2140()*0.331107);
}

double NNfunction_sb_dRdR::synapse0x25c7ea0() {
   return (neuron0x25c2480()*-0.370317);
}

double NNfunction_sb_dRdR::synapse0x25c7ee0() {
   return (neuron0x25c27c0()*0.243481);
}

double NNfunction_sb_dRdR::synapse0x25c8ac0() {
   return (neuron0x25c2b00()*0.107383);
}

double NNfunction_sb_dRdR::synapse0x25c8b00() {
   return (neuron0x25c2e40()*1.09653);
}

double NNfunction_sb_dRdR::synapse0x25c8b40() {
   return (neuron0x25c3180()*0.955592);
}

double NNfunction_sb_dRdR::synapse0x25c8b80() {
   return (neuron0x25c34c0()*0.0269494);
}

double NNfunction_sb_dRdR::synapse0x25c8bc0() {
   return (neuron0x25c3800()*-0.0226882);
}

double NNfunction_sb_dRdR::synapse0x25c8c00() {
   return (neuron0x25c3b40()*0.398599);
}

double NNfunction_sb_dRdR::synapse0x25c8c40() {
   return (neuron0x25c3e80()*0.037391);
}

double NNfunction_sb_dRdR::synapse0x25c8c80() {
   return (neuron0x25c41c0()*-0.402284);
}

double NNfunction_sb_dRdR::synapse0x25c8cc0() {
   return (neuron0x25c4500()*0.05044);
}

double NNfunction_sb_dRdR::synapse0x25c8d00() {
   return (neuron0x25c4840()*-0.343331);
}

double NNfunction_sb_dRdR::synapse0x25c8d40() {
   return (neuron0x25c4b80()*1.27818);
}

double NNfunction_sb_dRdR::synapse0x25c8d80() {
   return (neuron0x25c4ec0()*-0.353869);
}

double NNfunction_sb_dRdR::synapse0x25c1c10() {
   return (neuron0x25c5200()*-0.33295);
}

double NNfunction_sb_dRdR::synapse0x25c1c50() {
   return (neuron0x25c5760()*-0.74895);
}

double NNfunction_sb_dRdR::synapse0x25c8ed0() {
   return (neuron0x25c5aa0()*-0.208713);
}

double NNfunction_sb_dRdR::synapse0x25c8f10() {
   return (neuron0x25c5de0()*-0.154105);
}

double NNfunction_sb_dRdR::synapse0x25c8f50() {
   return (neuron0x25c6120()*0.0364791);
}

double NNfunction_sb_dRdR::synapse0x25c8f90() {
   return (neuron0x25c6460()*0.326931);
}

double NNfunction_sb_dRdR::synapse0x25c8fd0() {
   return (neuron0x25c67a0()*-0.339887);
}

double NNfunction_sb_dRdR::synapse0x25c9010() {
   return (neuron0x25c6ae0()*0.0138784);
}

double NNfunction_sb_dRdR::synapse0x25c9390() {
   return (neuron0x25c1e90()*-0.0399766);
}

double NNfunction_sb_dRdR::synapse0x25c93d0() {
   return (neuron0x25c2140()*-0.0102626);
}

double NNfunction_sb_dRdR::synapse0x25c9410() {
   return (neuron0x25c2480()*0.000791753);
}

double NNfunction_sb_dRdR::synapse0x25c9450() {
   return (neuron0x25c27c0()*-0.111931);
}

double NNfunction_sb_dRdR::synapse0x25c9490() {
   return (neuron0x25c2b00()*0.0247818);
}

double NNfunction_sb_dRdR::synapse0x25c94d0() {
   return (neuron0x25c2e40()*0.0155257);
}

double NNfunction_sb_dRdR::synapse0x25c9510() {
   return (neuron0x25c3180()*0.0217227);
}

double NNfunction_sb_dRdR::synapse0x25c9550() {
   return (neuron0x25c34c0()*0.00102779);
}

double NNfunction_sb_dRdR::synapse0x25c9590() {
   return (neuron0x25c3800()*0.0960299);
}

double NNfunction_sb_dRdR::synapse0x25c95d0() {
   return (neuron0x25c3b40()*0.00572194);
}

double NNfunction_sb_dRdR::synapse0x25c9610() {
   return (neuron0x25c3e80()*0.0383677);
}

double NNfunction_sb_dRdR::synapse0x25c9650() {
   return (neuron0x25c41c0()*0.0422149);
}

double NNfunction_sb_dRdR::synapse0x25c9690() {
   return (neuron0x25c4500()*0.0111067);
}

double NNfunction_sb_dRdR::synapse0x25c96d0() {
   return (neuron0x25c4840()*-0.00564255);
}

double NNfunction_sb_dRdR::synapse0x25c9710() {
   return (neuron0x25c4b80()*0.0262078);
}

double NNfunction_sb_dRdR::synapse0x25c9750() {
   return (neuron0x25c4ec0()*0.00366721);
}

double NNfunction_sb_dRdR::synapse0x25c98a0() {
   return (neuron0x25c5200()*0.0218308);
}

double NNfunction_sb_dRdR::synapse0x25c91e0() {
   return (neuron0x25c5760()*-2.62426);
}

double NNfunction_sb_dRdR::synapse0x25c9220() {
   return (neuron0x25c5aa0()*-0.0163675);
}

double NNfunction_sb_dRdR::synapse0x25ca9e0() {
   return (neuron0x25c5de0()*0.0138056);
}

double NNfunction_sb_dRdR::synapse0x25caa20() {
   return (neuron0x25c6120()*0.0091495);
}

double NNfunction_sb_dRdR::synapse0x25caa60() {
   return (neuron0x25c6460()*-0.0272427);
}

double NNfunction_sb_dRdR::synapse0x25caaa0() {
   return (neuron0x25c67a0()*-0.0025734);
}

double NNfunction_sb_dRdR::synapse0x25caae0() {
   return (neuron0x25c6ae0()*0.00283949);
}

double NNfunction_sb_dRdR::synapse0x25cae60() {
   return (neuron0x25c1e90()*0.221072);
}

double NNfunction_sb_dRdR::synapse0x25caea0() {
   return (neuron0x25c2140()*-0.0273645);
}

double NNfunction_sb_dRdR::synapse0x25caee0() {
   return (neuron0x25c2480()*0.0623908);
}

double NNfunction_sb_dRdR::synapse0x25caf20() {
   return (neuron0x25c27c0()*0.198739);
}

double NNfunction_sb_dRdR::synapse0x25caf60() {
   return (neuron0x25c2b00()*-0.0439032);
}

double NNfunction_sb_dRdR::synapse0x25cafa0() {
   return (neuron0x25c2e40()*-0.0577832);
}

double NNfunction_sb_dRdR::synapse0x25cafe0() {
   return (neuron0x25c3180()*-0.125137);
}

double NNfunction_sb_dRdR::synapse0x25cb020() {
   return (neuron0x25c34c0()*0.0236548);
}

double NNfunction_sb_dRdR::synapse0x25cb060() {
   return (neuron0x25c3800()*-0.325711);
}

double NNfunction_sb_dRdR::synapse0x238c2d0() {
   return (neuron0x25c3b40()*0.0115008);
}

double NNfunction_sb_dRdR::synapse0x238c310() {
   return (neuron0x25c3e80()*-0.153992);
}

double NNfunction_sb_dRdR::synapse0x238c350() {
   return (neuron0x25c41c0()*0.0269529);
}

double NNfunction_sb_dRdR::synapse0x238c390() {
   return (neuron0x25c4500()*0.116389);
}

double NNfunction_sb_dRdR::synapse0x238c3d0() {
   return (neuron0x25c4840()*0.0532864);
}

double NNfunction_sb_dRdR::synapse0x238c410() {
   return (neuron0x25c4b80()*0.0500223);
}

double NNfunction_sb_dRdR::synapse0x238c450() {
   return (neuron0x25c4ec0()*-0.00196166);
}

double NNfunction_sb_dRdR::synapse0x25cacb0() {
   return (neuron0x25c5200()*0.00404256);
}

double NNfunction_sb_dRdR::synapse0x25cacf0() {
   return (neuron0x25c5760()*-2.52317);
}

double NNfunction_sb_dRdR::synapse0x238c5a0() {
   return (neuron0x25c5aa0()*0.0551189);
}

double NNfunction_sb_dRdR::synapse0x238c5e0() {
   return (neuron0x25c5de0()*-0.0184837);
}

double NNfunction_sb_dRdR::synapse0x238c620() {
   return (neuron0x25c6120()*-0.0351522);
}

double NNfunction_sb_dRdR::synapse0x238c660() {
   return (neuron0x25c6460()*0.0874688);
}

double NNfunction_sb_dRdR::synapse0x238c6a0() {
   return (neuron0x25c67a0()*0.00492631);
}

double NNfunction_sb_dRdR::synapse0x25cb8b0() {
   return (neuron0x25c6ae0()*0.117214);
}

double NNfunction_sb_dRdR::synapse0x25cbc30() {
   return (neuron0x25c1e90()*-0.144372);
}

double NNfunction_sb_dRdR::synapse0x25cbc70() {
   return (neuron0x25c2140()*-0.221405);
}

double NNfunction_sb_dRdR::synapse0x25cbcb0() {
   return (neuron0x25c2480()*-0.253281);
}

double NNfunction_sb_dRdR::synapse0x25cbcf0() {
   return (neuron0x25c27c0()*0.321639);
}

double NNfunction_sb_dRdR::synapse0x25cbd30() {
   return (neuron0x25c2b00()*-0.0470225);
}

double NNfunction_sb_dRdR::synapse0x25cbd70() {
   return (neuron0x25c2e40()*-0.0618681);
}

double NNfunction_sb_dRdR::synapse0x25cbdb0() {
   return (neuron0x25c3180()*0.0246342);
}

double NNfunction_sb_dRdR::synapse0x25cbdf0() {
   return (neuron0x25c34c0()*0.534659);
}

double NNfunction_sb_dRdR::synapse0x25cbe30() {
   return (neuron0x25c3800()*0.17082);
}

double NNfunction_sb_dRdR::synapse0x25cbe70() {
   return (neuron0x25c3b40()*-0.356521);
}

double NNfunction_sb_dRdR::synapse0x25cbeb0() {
   return (neuron0x25c3e80()*0.2619);
}

double NNfunction_sb_dRdR::synapse0x25cbef0() {
   return (neuron0x25c41c0()*0.0508917);
}

double NNfunction_sb_dRdR::synapse0x25cbf30() {
   return (neuron0x25c4500()*0.372747);
}

double NNfunction_sb_dRdR::synapse0x25cbf70() {
   return (neuron0x25c4840()*-0.334393);
}

double NNfunction_sb_dRdR::synapse0x25cbfb0() {
   return (neuron0x25c4b80()*-0.559971);
}

double NNfunction_sb_dRdR::synapse0x25cbff0() {
   return (neuron0x25c4ec0()*0.281509);
}

double NNfunction_sb_dRdR::synapse0x25cba80() {
   return (neuron0x25c5200()*0.210573);
}

double NNfunction_sb_dRdR::synapse0x25cbac0() {
   return (neuron0x25c5760()*-0.921899);
}

double NNfunction_sb_dRdR::synapse0x25cc140() {
   return (neuron0x25c5aa0()*-0.0527322);
}

double NNfunction_sb_dRdR::synapse0x25cc180() {
   return (neuron0x25c5de0()*-0.00749078);
}

double NNfunction_sb_dRdR::synapse0x25cc1c0() {
   return (neuron0x25c6120()*0.0681049);
}

double NNfunction_sb_dRdR::synapse0x25cc200() {
   return (neuron0x25c6460()*0.662544);
}

double NNfunction_sb_dRdR::synapse0x25cc240() {
   return (neuron0x25c67a0()*0.424765);
}

double NNfunction_sb_dRdR::synapse0x25cc280() {
   return (neuron0x25c6ae0()*0.0228019);
}

double NNfunction_sb_dRdR::synapse0x25cc600() {
   return (neuron0x25c1e90()*0.0217592);
}

double NNfunction_sb_dRdR::synapse0x25cc640() {
   return (neuron0x25c2140()*-0.165457);
}

double NNfunction_sb_dRdR::synapse0x25cc680() {
   return (neuron0x25c2480()*0.103613);
}

double NNfunction_sb_dRdR::synapse0x25cc6c0() {
   return (neuron0x25c27c0()*0.158316);
}

double NNfunction_sb_dRdR::synapse0x25cc700() {
   return (neuron0x25c2b00()*0.00587005);
}

double NNfunction_sb_dRdR::synapse0x25cc740() {
   return (neuron0x25c2e40()*0.0755057);
}

double NNfunction_sb_dRdR::synapse0x25cc780() {
   return (neuron0x25c3180()*0.0556969);
}

double NNfunction_sb_dRdR::synapse0x25cc7c0() {
   return (neuron0x25c34c0()*-0.125062);
}

double NNfunction_sb_dRdR::synapse0x25cc800() {
   return (neuron0x25c3800()*-0.59343);
}

double NNfunction_sb_dRdR::synapse0x25cc840() {
   return (neuron0x25c3b40()*-0.364259);
}

double NNfunction_sb_dRdR::synapse0x25cc880() {
   return (neuron0x25c3e80()*0.320133);
}

double NNfunction_sb_dRdR::synapse0x25cc8c0() {
   return (neuron0x25c41c0()*-0.326304);
}

double NNfunction_sb_dRdR::synapse0x25cc900() {
   return (neuron0x25c4500()*0.407108);
}

double NNfunction_sb_dRdR::synapse0x25cc940() {
   return (neuron0x25c4840()*-0.411862);
}

double NNfunction_sb_dRdR::synapse0x25cc980() {
   return (neuron0x25c4b80()*-0.266034);
}

double NNfunction_sb_dRdR::synapse0x25cc9c0() {
   return (neuron0x25c4ec0()*-0.0972354);
}

double NNfunction_sb_dRdR::synapse0x25cc450() {
   return (neuron0x25c5200()*-0.197194);
}

double NNfunction_sb_dRdR::synapse0x25cc490() {
   return (neuron0x25c5760()*0.901168);
}

double NNfunction_sb_dRdR::synapse0x25ccb10() {
   return (neuron0x25c5aa0()*-0.112856);
}

double NNfunction_sb_dRdR::synapse0x25ccb50() {
   return (neuron0x25c5de0()*-0.240235);
}

double NNfunction_sb_dRdR::synapse0x25ccb90() {
   return (neuron0x25c6120()*0.34357);
}

double NNfunction_sb_dRdR::synapse0x25ccbd0() {
   return (neuron0x25c6460()*-0.154273);
}

double NNfunction_sb_dRdR::synapse0x25ccc10() {
   return (neuron0x25c67a0()*-0.372504);
}

double NNfunction_sb_dRdR::synapse0x25ccc50() {
   return (neuron0x25c6ae0()*0.132387);
}

double NNfunction_sb_dRdR::synapse0x25c5650() {
   return (neuron0x25c1e90()*0.112987);
}

double NNfunction_sb_dRdR::synapse0x25c5690() {
   return (neuron0x25c2140()*-0.212384);
}

double NNfunction_sb_dRdR::synapse0x25c56d0() {
   return (neuron0x25c2480()*0.0258062);
}

double NNfunction_sb_dRdR::synapse0x25c5710() {
   return (neuron0x25c27c0()*0.014853);
}

double NNfunction_sb_dRdR::synapse0x25cd1e0() {
   return (neuron0x25c2b00()*0.0176537);
}

double NNfunction_sb_dRdR::synapse0x25cd220() {
   return (neuron0x25c2e40()*0.0081745);
}

double NNfunction_sb_dRdR::synapse0x25cd260() {
   return (neuron0x25c3180()*0.089353);
}

double NNfunction_sb_dRdR::synapse0x25cd2a0() {
   return (neuron0x25c34c0()*0.156194);
}

double NNfunction_sb_dRdR::synapse0x25cd2e0() {
   return (neuron0x25c3800()*0.645928);
}

double NNfunction_sb_dRdR::synapse0x25cd320() {
   return (neuron0x25c3b40()*-0.38862);
}

double NNfunction_sb_dRdR::synapse0x25cd360() {
   return (neuron0x25c3e80()*0.494814);
}

double NNfunction_sb_dRdR::synapse0x25cd3a0() {
   return (neuron0x25c41c0()*0.255995);
}

double NNfunction_sb_dRdR::synapse0x25cd3e0() {
   return (neuron0x25c4500()*0.270281);
}

double NNfunction_sb_dRdR::synapse0x25cd420() {
   return (neuron0x25c4840()*0.349531);
}

double NNfunction_sb_dRdR::synapse0x25cd460() {
   return (neuron0x25c4b80()*0.19062);
}

double NNfunction_sb_dRdR::synapse0x25cd4a0() {
   return (neuron0x25c4ec0()*0.0784539);
}

double NNfunction_sb_dRdR::synapse0x25cce20() {
   return (neuron0x25c5200()*-0.782247);
}

double NNfunction_sb_dRdR::synapse0x25cce60() {
   return (neuron0x25c5760()*-1.4702);
}

double NNfunction_sb_dRdR::synapse0x25cd5f0() {
   return (neuron0x25c5aa0()*-0.246265);
}

double NNfunction_sb_dRdR::synapse0x25cd630() {
   return (neuron0x25c5de0()*-0.176049);
}

double NNfunction_sb_dRdR::synapse0x25cd670() {
   return (neuron0x25c6120()*-0.399123);
}

double NNfunction_sb_dRdR::synapse0x25cd6b0() {
   return (neuron0x25c6460()*-0.1546);
}

double NNfunction_sb_dRdR::synapse0x25cd6f0() {
   return (neuron0x25c67a0()*-0.206015);
}

double NNfunction_sb_dRdR::synapse0x25cd730() {
   return (neuron0x25c6ae0()*0.269906);
}

double NNfunction_sb_dRdR::synapse0x25cdab0() {
   return (neuron0x25c1e90()*-0.00921139);
}

double NNfunction_sb_dRdR::synapse0x25cdaf0() {
   return (neuron0x25c2140()*-0.00717683);
}

double NNfunction_sb_dRdR::synapse0x25cdb30() {
   return (neuron0x25c2480()*0.00291735);
}

double NNfunction_sb_dRdR::synapse0x25cdb70() {
   return (neuron0x25c27c0()*-0.0334483);
}

double NNfunction_sb_dRdR::synapse0x25cdbb0() {
   return (neuron0x25c2b00()*0.0146587);
}

double NNfunction_sb_dRdR::synapse0x25cdbf0() {
   return (neuron0x25c2e40()*0.0091936);
}

double NNfunction_sb_dRdR::synapse0x25cdc30() {
   return (neuron0x25c3180()*0.0114124);
}

double NNfunction_sb_dRdR::synapse0x25cdc70() {
   return (neuron0x25c34c0()*-0.0116233);
}

double NNfunction_sb_dRdR::synapse0x25cdcb0() {
   return (neuron0x25c3800()*0.0142996);
}

double NNfunction_sb_dRdR::synapse0x25cdcf0() {
   return (neuron0x25c3b40()*0.00160847);
}

double NNfunction_sb_dRdR::synapse0x25cdd30() {
   return (neuron0x25c3e80()*0.00963699);
}

double NNfunction_sb_dRdR::synapse0x25cdd70() {
   return (neuron0x25c41c0()*0.340349);
}

double NNfunction_sb_dRdR::synapse0x25cddb0() {
   return (neuron0x25c4500()*0.355021);
}

double NNfunction_sb_dRdR::synapse0x25cddf0() {
   return (neuron0x25c4840()*-0.0346124);
}

double NNfunction_sb_dRdR::synapse0x25cde30() {
   return (neuron0x25c4b80()*0.187028);
}

double NNfunction_sb_dRdR::synapse0x25cde70() {
   return (neuron0x25c4ec0()*0.185709);
}

double NNfunction_sb_dRdR::synapse0x25cd900() {
   return (neuron0x25c5200()*-0.0135376);
}

double NNfunction_sb_dRdR::synapse0x25cd940() {
   return (neuron0x25c5760()*-0.281295);
}

double NNfunction_sb_dRdR::synapse0x25cdfc0() {
   return (neuron0x25c5aa0()*0.19077);
}

double NNfunction_sb_dRdR::synapse0x25ce000() {
   return (neuron0x25c5de0()*0.00205581);
}

double NNfunction_sb_dRdR::synapse0x25ce040() {
   return (neuron0x25c6120()*-0.0133414);
}

double NNfunction_sb_dRdR::synapse0x25ce080() {
   return (neuron0x25c6460()*0.00531707);
}

double NNfunction_sb_dRdR::synapse0x25ce0c0() {
   return (neuron0x25c67a0()*-0.00300194);
}

double NNfunction_sb_dRdR::synapse0x25ce100() {
   return (neuron0x25c6ae0()*-0.00719904);
}

double NNfunction_sb_dRdR::synapse0x25ce480() {
   return (neuron0x25c1e90()*-0.0107449);
}

double NNfunction_sb_dRdR::synapse0x25ce4c0() {
   return (neuron0x25c2140()*0.00709478);
}

double NNfunction_sb_dRdR::synapse0x25ce500() {
   return (neuron0x25c2480()*0.00102877);
}

double NNfunction_sb_dRdR::synapse0x25ce540() {
   return (neuron0x25c27c0()*-2.28343);
}

double NNfunction_sb_dRdR::synapse0x25ce580() {
   return (neuron0x25c2b00()*-0.007849);
}

double NNfunction_sb_dRdR::synapse0x25ce5c0() {
   return (neuron0x25c2e40()*0.00464804);
}

double NNfunction_sb_dRdR::synapse0x25ce600() {
   return (neuron0x25c3180()*0.00879713);
}

double NNfunction_sb_dRdR::synapse0x25ce640() {
   return (neuron0x25c34c0()*-0.00384213);
}

double NNfunction_sb_dRdR::synapse0x25ce680() {
   return (neuron0x25c3800()*0.0012135);
}

double NNfunction_sb_dRdR::synapse0x25ce6c0() {
   return (neuron0x25c3b40()*0.0120125);
}

double NNfunction_sb_dRdR::synapse0x25ce700() {
   return (neuron0x25c3e80()*0.00439769);
}

double NNfunction_sb_dRdR::synapse0x25ce740() {
   return (neuron0x25c41c0()*-0.0151995);
}

double NNfunction_sb_dRdR::synapse0x25ce780() {
   return (neuron0x25c4500()*-0.0101196);
}

double NNfunction_sb_dRdR::synapse0x25ce7c0() {
   return (neuron0x25c4840()*0.0169528);
}

double NNfunction_sb_dRdR::synapse0x25ce800() {
   return (neuron0x25c4b80()*-0.00820871);
}

double NNfunction_sb_dRdR::synapse0x25ce840() {
   return (neuron0x25c4ec0()*-0.00246098);
}

double NNfunction_sb_dRdR::synapse0x25ce2d0() {
   return (neuron0x25c5200()*0.0238713);
}

double NNfunction_sb_dRdR::synapse0x25ce310() {
   return (neuron0x25c5760()*0.427335);
}

double NNfunction_sb_dRdR::synapse0x25cb0a0() {
   return (neuron0x25c5aa0()*-0.00886395);
}

double NNfunction_sb_dRdR::synapse0x25cb0e0() {
   return (neuron0x25c5de0()*-0.00127785);
}

double NNfunction_sb_dRdR::synapse0x25cb120() {
   return (neuron0x25c6120()*0.00107769);
}

double NNfunction_sb_dRdR::synapse0x25cb160() {
   return (neuron0x25c6460()*0.00759603);
}

double NNfunction_sb_dRdR::synapse0x25cb1a0() {
   return (neuron0x25c67a0()*0.000162782);
}

double NNfunction_sb_dRdR::synapse0x25cb1e0() {
   return (neuron0x25c6ae0()*-0.00166696);
}

double NNfunction_sb_dRdR::synapse0x25cb560() {
   return (neuron0x25c1e90()*-0.300791);
}

double NNfunction_sb_dRdR::synapse0x25cb5a0() {
   return (neuron0x25c2140()*0.0775188);
}

double NNfunction_sb_dRdR::synapse0x25cb5e0() {
   return (neuron0x25c2480()*0.0180233);
}

double NNfunction_sb_dRdR::synapse0x25cb620() {
   return (neuron0x25c27c0()*0.428061);
}

double NNfunction_sb_dRdR::synapse0x25cb660() {
   return (neuron0x25c2b00()*0.169101);
}

double NNfunction_sb_dRdR::synapse0x25cb6a0() {
   return (neuron0x25c2e40()*0.157279);
}

double NNfunction_sb_dRdR::synapse0x25cb6e0() {
   return (neuron0x25c3180()*0.0899666);
}

double NNfunction_sb_dRdR::synapse0x25cb720() {
   return (neuron0x25c34c0()*0.259552);
}

double NNfunction_sb_dRdR::synapse0x25cb760() {
   return (neuron0x25c3800()*-0.345109);
}

double NNfunction_sb_dRdR::synapse0x25cb7a0() {
   return (neuron0x25c3b40()*-0.0588385);
}

double NNfunction_sb_dRdR::synapse0x25cb7e0() {
   return (neuron0x25c3e80()*-0.125508);
}

double NNfunction_sb_dRdR::synapse0x25cb820() {
   return (neuron0x25c41c0()*0.564726);
}

double NNfunction_sb_dRdR::synapse0x25cb860() {
   return (neuron0x25c4500()*0.486933);
}

double NNfunction_sb_dRdR::synapse0x25cf9a0() {
   return (neuron0x25c4840()*0.242617);
}

double NNfunction_sb_dRdR::synapse0x25cf9e0() {
   return (neuron0x25c4b80()*0.117841);
}

double NNfunction_sb_dRdR::synapse0x25cfa20() {
   return (neuron0x25c4ec0()*0.275354);
}

double NNfunction_sb_dRdR::synapse0x25cb3b0() {
   return (neuron0x25c5200()*-0.00549001);
}

double NNfunction_sb_dRdR::synapse0x25cb3f0() {
   return (neuron0x25c5760()*-0.457406);
}

double NNfunction_sb_dRdR::synapse0x25cfb70() {
   return (neuron0x25c5aa0()*0.461201);
}

double NNfunction_sb_dRdR::synapse0x25cfbb0() {
   return (neuron0x25c5de0()*0.207709);
}

double NNfunction_sb_dRdR::synapse0x25cfbf0() {
   return (neuron0x25c6120()*0.205882);
}

double NNfunction_sb_dRdR::synapse0x25cfc30() {
   return (neuron0x25c6460()*0.0545933);
}

double NNfunction_sb_dRdR::synapse0x25cfc70() {
   return (neuron0x25c67a0()*-0.113231);
}

double NNfunction_sb_dRdR::synapse0x25cfcb0() {
   return (neuron0x25c6ae0()*-0.111446);
}

double NNfunction_sb_dRdR::synapse0x25d0030() {
   return (neuron0x25c1e90()*-0.107604);
}

double NNfunction_sb_dRdR::synapse0x25d0070() {
   return (neuron0x25c2140()*0.186525);
}

double NNfunction_sb_dRdR::synapse0x25d00b0() {
   return (neuron0x25c2480()*0.0113412);
}

double NNfunction_sb_dRdR::synapse0x25d00f0() {
   return (neuron0x25c27c0()*0.0886071);
}

double NNfunction_sb_dRdR::synapse0x25d0130() {
   return (neuron0x25c2b00()*-0.0879349);
}

double NNfunction_sb_dRdR::synapse0x25d0170() {
   return (neuron0x25c2e40()*0.759331);
}

double NNfunction_sb_dRdR::synapse0x25d01b0() {
   return (neuron0x25c3180()*-0.513441);
}

double NNfunction_sb_dRdR::synapse0x25d01f0() {
   return (neuron0x25c34c0()*-0.0892501);
}

double NNfunction_sb_dRdR::synapse0x25d0230() {
   return (neuron0x25c3800()*-0.126645);
}

double NNfunction_sb_dRdR::synapse0x25d0270() {
   return (neuron0x25c3b40()*0.0014759);
}

double NNfunction_sb_dRdR::synapse0x25d02b0() {
   return (neuron0x25c3e80()*0.0569473);
}

double NNfunction_sb_dRdR::synapse0x25d02f0() {
   return (neuron0x25c41c0()*0.145582);
}

double NNfunction_sb_dRdR::synapse0x25d0330() {
   return (neuron0x25c4500()*0.312413);
}

double NNfunction_sb_dRdR::synapse0x25d0370() {
   return (neuron0x25c4840()*-0.125111);
}

double NNfunction_sb_dRdR::synapse0x25d03b0() {
   return (neuron0x25c4b80()*-0.402414);
}

double NNfunction_sb_dRdR::synapse0x25d03f0() {
   return (neuron0x25c4ec0()*-0.443702);
}

double NNfunction_sb_dRdR::synapse0x25cfe80() {
   return (neuron0x25c5200()*-0.0349048);
}

double NNfunction_sb_dRdR::synapse0x25cfec0() {
   return (neuron0x25c5760()*-1.11481);
}

double NNfunction_sb_dRdR::synapse0x25d0540() {
   return (neuron0x25c5aa0()*-0.0287817);
}

double NNfunction_sb_dRdR::synapse0x25d0580() {
   return (neuron0x25c5de0()*0.0878244);
}

double NNfunction_sb_dRdR::synapse0x25d05c0() {
   return (neuron0x25c6120()*0.112622);
}

double NNfunction_sb_dRdR::synapse0x25d0600() {
   return (neuron0x25c6460()*-0.0964443);
}

double NNfunction_sb_dRdR::synapse0x25d0640() {
   return (neuron0x25c67a0()*-0.0925714);
}

double NNfunction_sb_dRdR::synapse0x25d0680() {
   return (neuron0x25c6ae0()*-0.0686226);
}

double NNfunction_sb_dRdR::synapse0x25d0a00() {
   return (neuron0x25c1e90()*-0.191568);
}

double NNfunction_sb_dRdR::synapse0x25d0a40() {
   return (neuron0x25c2140()*0.397502);
}

double NNfunction_sb_dRdR::synapse0x25d0a80() {
   return (neuron0x25c2480()*0.457625);
}

double NNfunction_sb_dRdR::synapse0x25d0ac0() {
   return (neuron0x25c27c0()*0.729105);
}

double NNfunction_sb_dRdR::synapse0x25d0b00() {
   return (neuron0x25c2b00()*0.108578);
}

double NNfunction_sb_dRdR::synapse0x25d0b40() {
   return (neuron0x25c2e40()*0.180285);
}

double NNfunction_sb_dRdR::synapse0x25d0b80() {
   return (neuron0x25c3180()*-0.425174);
}

double NNfunction_sb_dRdR::synapse0x25d0bc0() {
   return (neuron0x25c34c0()*0.0557722);
}

double NNfunction_sb_dRdR::synapse0x25d0c00() {
   return (neuron0x25c3800()*-0.0927649);
}

double NNfunction_sb_dRdR::synapse0x25d0c40() {
   return (neuron0x25c3b40()*-0.193917);
}

double NNfunction_sb_dRdR::synapse0x25d0c80() {
   return (neuron0x25c3e80()*0.297371);
}

double NNfunction_sb_dRdR::synapse0x25d0cc0() {
   return (neuron0x25c41c0()*0.12003);
}

double NNfunction_sb_dRdR::synapse0x25d0d00() {
   return (neuron0x25c4500()*0.656537);
}

double NNfunction_sb_dRdR::synapse0x25d0d40() {
   return (neuron0x25c4840()*-0.34155);
}

double NNfunction_sb_dRdR::synapse0x25d0d80() {
   return (neuron0x25c4b80()*0.342311);
}

double NNfunction_sb_dRdR::synapse0x25d0dc0() {
   return (neuron0x25c4ec0()*-0.482355);
}

double NNfunction_sb_dRdR::synapse0x25d0850() {
   return (neuron0x25c5200()*0.0464088);
}

double NNfunction_sb_dRdR::synapse0x25d0890() {
   return (neuron0x25c5760()*0.358854);
}

double NNfunction_sb_dRdR::synapse0x25d0f10() {
   return (neuron0x25c5aa0()*-0.0280924);
}

double NNfunction_sb_dRdR::synapse0x25d0f50() {
   return (neuron0x25c5de0()*-0.217601);
}

double NNfunction_sb_dRdR::synapse0x25d0f90() {
   return (neuron0x25c6120()*1.02335);
}

double NNfunction_sb_dRdR::synapse0x25d0fd0() {
   return (neuron0x25c6460()*-0.321499);
}

double NNfunction_sb_dRdR::synapse0x25d1010() {
   return (neuron0x25c67a0()*0.0308422);
}

double NNfunction_sb_dRdR::synapse0x25d1050() {
   return (neuron0x25c6ae0()*-0.075614);
}

double NNfunction_sb_dRdR::synapse0x25d13d0() {
   return (neuron0x25c1e90()*0.0504546);
}

double NNfunction_sb_dRdR::synapse0x25d1410() {
   return (neuron0x25c2140()*-0.0161199);
}

double NNfunction_sb_dRdR::synapse0x25d1450() {
   return (neuron0x25c2480()*0.0789905);
}

double NNfunction_sb_dRdR::synapse0x25d1490() {
   return (neuron0x25c27c0()*-0.121103);
}

double NNfunction_sb_dRdR::synapse0x25d14d0() {
   return (neuron0x25c2b00()*-0.00854141);
}

double NNfunction_sb_dRdR::synapse0x25d1510() {
   return (neuron0x25c2e40()*0.141389);
}

double NNfunction_sb_dRdR::synapse0x25d1550() {
   return (neuron0x25c3180()*-0.204165);
}

double NNfunction_sb_dRdR::synapse0x25d1590() {
   return (neuron0x25c34c0()*0.0739401);
}

double NNfunction_sb_dRdR::synapse0x25d15d0() {
   return (neuron0x25c3800()*-0.131645);
}

double NNfunction_sb_dRdR::synapse0x25d1610() {
   return (neuron0x25c3b40()*-0.226345);
}

double NNfunction_sb_dRdR::synapse0x25d1650() {
   return (neuron0x25c3e80()*0.515992);
}

double NNfunction_sb_dRdR::synapse0x25d1690() {
   return (neuron0x25c41c0()*0.256647);
}

double NNfunction_sb_dRdR::synapse0x25d16d0() {
   return (neuron0x25c4500()*0.152608);
}

double NNfunction_sb_dRdR::synapse0x25d1710() {
   return (neuron0x25c4840()*0.0415239);
}

double NNfunction_sb_dRdR::synapse0x25d1750() {
   return (neuron0x25c4b80()*0.125324);
}

double NNfunction_sb_dRdR::synapse0x25d1790() {
   return (neuron0x25c4ec0()*-0.0120397);
}

double NNfunction_sb_dRdR::synapse0x25d1220() {
   return (neuron0x25c5200()*0.0862583);
}

double NNfunction_sb_dRdR::synapse0x25d1260() {
   return (neuron0x25c5760()*-1.25658);
}

double NNfunction_sb_dRdR::synapse0x25d18e0() {
   return (neuron0x25c5aa0()*-0.0195542);
}

double NNfunction_sb_dRdR::synapse0x25d1920() {
   return (neuron0x25c5de0()*0.277493);
}

double NNfunction_sb_dRdR::synapse0x25d1960() {
   return (neuron0x25c6120()*0.237566);
}

double NNfunction_sb_dRdR::synapse0x25d19a0() {
   return (neuron0x25c6460()*0.0331644);
}

double NNfunction_sb_dRdR::synapse0x25d19e0() {
   return (neuron0x25c67a0()*-0.044728);
}

double NNfunction_sb_dRdR::synapse0x25d1a20() {
   return (neuron0x25c6ae0()*-0.150371);
}

double NNfunction_sb_dRdR::synapse0x25d1da0() {
   return (neuron0x25c1e90()*0.37491);
}

double NNfunction_sb_dRdR::synapse0x25c2020() {
   return (neuron0x25c2140()*-0.069366);
}

double NNfunction_sb_dRdR::synapse0x25c2060() {
   return (neuron0x25c2480()*-0.0574368);
}

double NNfunction_sb_dRdR::synapse0x25c2360() {
   return (neuron0x25c27c0()*-0.281206);
}

double NNfunction_sb_dRdR::synapse0x25c23a0() {
   return (neuron0x25c2b00()*-0.148783);
}

double NNfunction_sb_dRdR::synapse0x25c26a0() {
   return (neuron0x25c2e40()*0.237337);
}

double NNfunction_sb_dRdR::synapse0x25c26e0() {
   return (neuron0x25c3180()*-0.666845);
}

double NNfunction_sb_dRdR::synapse0x25c29e0() {
   return (neuron0x25c34c0()*-0.10725);
}

double NNfunction_sb_dRdR::synapse0x25c2a20() {
   return (neuron0x25c3800()*0.144171);
}

double NNfunction_sb_dRdR::synapse0x25c2d20() {
   return (neuron0x25c3b40()*-0.000690307);
}

double NNfunction_sb_dRdR::synapse0x25c2d60() {
   return (neuron0x25c3e80()*0.0831181);
}

double NNfunction_sb_dRdR::synapse0x25c3060() {
   return (neuron0x25c41c0()*-0.356943);
}

double NNfunction_sb_dRdR::synapse0x25c30a0() {
   return (neuron0x25c4500()*-0.332338);
}

double NNfunction_sb_dRdR::synapse0x25c33a0() {
   return (neuron0x25c4840()*0.244724);
}

double NNfunction_sb_dRdR::synapse0x25c33e0() {
   return (neuron0x25c4b80()*-0.0857356);
}

double NNfunction_sb_dRdR::synapse0x25c36e0() {
   return (neuron0x25c4ec0()*-0.218301);
}

double NNfunction_sb_dRdR::synapse0x25c3720() {
   return (neuron0x25c5200()*0.636582);
}

double NNfunction_sb_dRdR::synapse0x25c3a20() {
   return (neuron0x25c5760()*-0.927246);
}

double NNfunction_sb_dRdR::synapse0x25c3a60() {
   return (neuron0x25c5aa0()*-0.100457);
}

double NNfunction_sb_dRdR::synapse0x25c3d60() {
   return (neuron0x25c5de0()*0.0148249);
}

double NNfunction_sb_dRdR::synapse0x25c3da0() {
   return (neuron0x25c6120()*-0.0898409);
}

double NNfunction_sb_dRdR::synapse0x25c40a0() {
   return (neuron0x25c6460()*0.134579);
}

double NNfunction_sb_dRdR::synapse0x25c40e0() {
   return (neuron0x25c67a0()*0.296693);
}

double NNfunction_sb_dRdR::synapse0x25c43e0() {
   return (neuron0x25c6ae0()*-0.0774778);
}

double NNfunction_sb_dRdR::synapse0x25c4420() {
   return (neuron0x25c1e90()*0.0206131);
}

double NNfunction_sb_dRdR::synapse0x25c50e0() {
   return (neuron0x25c2140()*0.0394696);
}

double NNfunction_sb_dRdR::synapse0x25c5120() {
   return (neuron0x25c2480()*-0.0258843);
}

double NNfunction_sb_dRdR::synapse0x25d1bf0() {
   return (neuron0x25c27c0()*0.238593);
}

double NNfunction_sb_dRdR::synapse0x25d1c30() {
   return (neuron0x25c2b00()*0.0215873);
}

double NNfunction_sb_dRdR::synapse0x25c5420() {
   return (neuron0x25c2e40()*-0.00841735);
}

double NNfunction_sb_dRdR::synapse0x25c5460() {
   return (neuron0x25c3180()*0.223808);
}

double NNfunction_sb_dRdR::synapse0x25c5980() {
   return (neuron0x25c34c0()*-0.491423);
}

double NNfunction_sb_dRdR::synapse0x25c59c0() {
   return (neuron0x25c3800()*0.0646939);
}

double NNfunction_sb_dRdR::synapse0x25c5cc0() {
   return (neuron0x25c3b40()*-0.141985);
}

double NNfunction_sb_dRdR::synapse0x25c5d00() {
   return (neuron0x25c3e80()*0.054001);
}

double NNfunction_sb_dRdR::synapse0x25c6000() {
   return (neuron0x25c41c0()*-0.11839);
}

double NNfunction_sb_dRdR::synapse0x25c6040() {
   return (neuron0x25c4500()*-0.198353);
}

double NNfunction_sb_dRdR::synapse0x25c6340() {
   return (neuron0x25c4840()*0.00429258);
}

double NNfunction_sb_dRdR::synapse0x25c6380() {
   return (neuron0x25c4b80()*-0.389318);
}

double NNfunction_sb_dRdR::synapse0x25c6680() {
   return (neuron0x25c4ec0()*-0.066368);
}

double NNfunction_sb_dRdR::synapse0x25c66c0() {
   return (neuron0x25c5200()*0.075524);
}

double NNfunction_sb_dRdR::synapse0x25c69c0() {
   return (neuron0x25c5760()*1.36621);
}

double NNfunction_sb_dRdR::synapse0x25c6a00() {
   return (neuron0x25c5aa0()*-0.0709096);
}

double NNfunction_sb_dRdR::synapse0x25c6d00() {
   return (neuron0x25c5de0()*-0.00167373);
}

double NNfunction_sb_dRdR::synapse0x25c6d40() {
   return (neuron0x25c6120()*-0.0422726);
}

double NNfunction_sb_dRdR::synapse0x25c4720() {
   return (neuron0x25c6460()*-0.0252463);
}

double NNfunction_sb_dRdR::synapse0x25c4760() {
   return (neuron0x25c67a0()*0.0012125);
}

double NNfunction_sb_dRdR::synapse0x25d3b10() {
   return (neuron0x25c6ae0()*0.0165646);
}

double NNfunction_sb_dRdR::synapse0x25d3e90() {
   return (neuron0x25c1e90()*0.0405333);
}

double NNfunction_sb_dRdR::synapse0x25d3ed0() {
   return (neuron0x25c2140()*0.0111526);
}

double NNfunction_sb_dRdR::synapse0x25d3f10() {
   return (neuron0x25c2480()*0.0115234);
}

double NNfunction_sb_dRdR::synapse0x25d3f50() {
   return (neuron0x25c27c0()*0.0404957);
}

double NNfunction_sb_dRdR::synapse0x25d3f90() {
   return (neuron0x25c2b00()*-0.0132688);
}

double NNfunction_sb_dRdR::synapse0x25d3fd0() {
   return (neuron0x25c2e40()*-0.0135039);
}

double NNfunction_sb_dRdR::synapse0x25d4010() {
   return (neuron0x25c3180()*-0.0108508);
}

double NNfunction_sb_dRdR::synapse0x25d4050() {
   return (neuron0x25c34c0()*-0.0256641);
}

double NNfunction_sb_dRdR::synapse0x25d4090() {
   return (neuron0x25c3800()*0.26676);
}

double NNfunction_sb_dRdR::synapse0x25d40d0() {
   return (neuron0x25c3b40()*0.00209568);
}

double NNfunction_sb_dRdR::synapse0x25d4110() {
   return (neuron0x25c3e80()*0.1163);
}

double NNfunction_sb_dRdR::synapse0x25d4150() {
   return (neuron0x25c41c0()*-0.0781455);
}

double NNfunction_sb_dRdR::synapse0x25d4190() {
   return (neuron0x25c4500()*-0.00440347);
}

double NNfunction_sb_dRdR::synapse0x25d41d0() {
   return (neuron0x25c4840()*-0.0521368);
}

double NNfunction_sb_dRdR::synapse0x25d4210() {
   return (neuron0x25c4b80()*-0.0641017);
}

double NNfunction_sb_dRdR::synapse0x25d4250() {
   return (neuron0x25c4ec0()*-0.04441);
}

double NNfunction_sb_dRdR::synapse0x25d3ce0() {
   return (neuron0x25c5200()*-0.014296);
}

double NNfunction_sb_dRdR::synapse0x25d3d20() {
   return (neuron0x25c5760()*0.493805);
}

double NNfunction_sb_dRdR::synapse0x25d43a0() {
   return (neuron0x25c5aa0()*0.0347301);
}

double NNfunction_sb_dRdR::synapse0x25d43e0() {
   return (neuron0x25c5de0()*-0.0464369);
}

double NNfunction_sb_dRdR::synapse0x25d4420() {
   return (neuron0x25c6120()*0.0228126);
}

double NNfunction_sb_dRdR::synapse0x25d4460() {
   return (neuron0x25c6460()*0.0141529);
}

double NNfunction_sb_dRdR::synapse0x25d44a0() {
   return (neuron0x25c67a0()*-0.00725926);
}

double NNfunction_sb_dRdR::synapse0x25d44e0() {
   return (neuron0x25c6ae0()*0.0287223);
}

double NNfunction_sb_dRdR::synapse0x25d4860() {
   return (neuron0x25c1e90()*-0.153075);
}

double NNfunction_sb_dRdR::synapse0x25d48a0() {
   return (neuron0x25c2140()*-0.142087);
}

double NNfunction_sb_dRdR::synapse0x25d48e0() {
   return (neuron0x25c2480()*0.862696);
}

double NNfunction_sb_dRdR::synapse0x25d4920() {
   return (neuron0x25c27c0()*0.517672);
}

double NNfunction_sb_dRdR::synapse0x25d4960() {
   return (neuron0x25c2b00()*-0.173918);
}

double NNfunction_sb_dRdR::synapse0x25d49a0() {
   return (neuron0x25c2e40()*0.52035);
}

double NNfunction_sb_dRdR::synapse0x25d49e0() {
   return (neuron0x25c3180()*-0.0446135);
}

double NNfunction_sb_dRdR::synapse0x25d4a20() {
   return (neuron0x25c34c0()*-0.266133);
}

double NNfunction_sb_dRdR::synapse0x25d4a60() {
   return (neuron0x25c3800()*-0.173067);
}

double NNfunction_sb_dRdR::synapse0x25d4aa0() {
   return (neuron0x25c3b40()*0.448688);
}

double NNfunction_sb_dRdR::synapse0x25d4ae0() {
   return (neuron0x25c3e80()*0.444645);
}

double NNfunction_sb_dRdR::synapse0x25d4b20() {
   return (neuron0x25c41c0()*0.166996);
}

double NNfunction_sb_dRdR::synapse0x25d4b60() {
   return (neuron0x25c4500()*-0.0215884);
}

double NNfunction_sb_dRdR::synapse0x25d4ba0() {
   return (neuron0x25c4840()*0.401802);
}

double NNfunction_sb_dRdR::synapse0x25d4be0() {
   return (neuron0x25c4b80()*-0.149941);
}

double NNfunction_sb_dRdR::synapse0x25d4c20() {
   return (neuron0x25c4ec0()*0.224981);
}

double NNfunction_sb_dRdR::synapse0x25d46b0() {
   return (neuron0x25c5200()*0.54683);
}

double NNfunction_sb_dRdR::synapse0x25d46f0() {
   return (neuron0x25c5760()*0.530731);
}

double NNfunction_sb_dRdR::synapse0x25d4d70() {
   return (neuron0x25c5aa0()*0.0569469);
}

double NNfunction_sb_dRdR::synapse0x25d4db0() {
   return (neuron0x25c5de0()*-0.170855);
}

double NNfunction_sb_dRdR::synapse0x25d4df0() {
   return (neuron0x25c6120()*0.105616);
}

double NNfunction_sb_dRdR::synapse0x25d4e30() {
   return (neuron0x25c6460()*-0.0708968);
}

double NNfunction_sb_dRdR::synapse0x25d4e70() {
   return (neuron0x25c67a0()*0.604407);
}

double NNfunction_sb_dRdR::synapse0x25d4eb0() {
   return (neuron0x25c6ae0()*0.502493);
}

double NNfunction_sb_dRdR::synapse0x25d5230() {
   return (neuron0x25c1e90()*0.00191813);
}

double NNfunction_sb_dRdR::synapse0x25d5270() {
   return (neuron0x25c2140()*-0.0182037);
}

double NNfunction_sb_dRdR::synapse0x25d52b0() {
   return (neuron0x25c2480()*0.043318);
}

double NNfunction_sb_dRdR::synapse0x25d52f0() {
   return (neuron0x25c27c0()*-0.224473);
}

double NNfunction_sb_dRdR::synapse0x25d5330() {
   return (neuron0x25c2b00()*0.00686462);
}

double NNfunction_sb_dRdR::synapse0x25d5370() {
   return (neuron0x25c2e40()*0.0630614);
}

double NNfunction_sb_dRdR::synapse0x25d53b0() {
   return (neuron0x25c3180()*-0.0444093);
}

double NNfunction_sb_dRdR::synapse0x25d53f0() {
   return (neuron0x25c34c0()*0.165198);
}

double NNfunction_sb_dRdR::synapse0x25d5430() {
   return (neuron0x25c3800()*-0.0148458);
}

double NNfunction_sb_dRdR::synapse0x25d5470() {
   return (neuron0x25c3b40()*0.364544);
}

double NNfunction_sb_dRdR::synapse0x25d54b0() {
   return (neuron0x25c3e80()*-0.0757446);
}

double NNfunction_sb_dRdR::synapse0x25d54f0() {
   return (neuron0x25c41c0()*0.0322016);
}

double NNfunction_sb_dRdR::synapse0x25d5530() {
   return (neuron0x25c4500()*0.138215);
}

double NNfunction_sb_dRdR::synapse0x25d5570() {
   return (neuron0x25c4840()*-0.0423117);
}

double NNfunction_sb_dRdR::synapse0x25d55b0() {
   return (neuron0x25c4b80()*0.148616);
}

double NNfunction_sb_dRdR::synapse0x25d55f0() {
   return (neuron0x25c4ec0()*0.0642595);
}

double NNfunction_sb_dRdR::synapse0x25d5080() {
   return (neuron0x25c5200()*0.00329437);
}

double NNfunction_sb_dRdR::synapse0x25d50c0() {
   return (neuron0x25c5760()*-1.01348);
}

double NNfunction_sb_dRdR::synapse0x25d5740() {
   return (neuron0x25c5aa0()*0.118929);
}

double NNfunction_sb_dRdR::synapse0x25d5780() {
   return (neuron0x25c5de0()*-0.0278106);
}

double NNfunction_sb_dRdR::synapse0x25d57c0() {
   return (neuron0x25c6120()*0.00374117);
}

double NNfunction_sb_dRdR::synapse0x25d5800() {
   return (neuron0x25c6460()*-0.00284007);
}

double NNfunction_sb_dRdR::synapse0x25d5840() {
   return (neuron0x25c67a0()*-0.044733);
}

double NNfunction_sb_dRdR::synapse0x25d5880() {
   return (neuron0x25c6ae0()*-0.0412956);
}

double NNfunction_sb_dRdR::synapse0x25d5c00() {
   return (neuron0x25c1e90()*0.0128046);
}

double NNfunction_sb_dRdR::synapse0x25d5c40() {
   return (neuron0x25c2140()*0.0609577);
}

double NNfunction_sb_dRdR::synapse0x25d5c80() {
   return (neuron0x25c2480()*-0.024607);
}

double NNfunction_sb_dRdR::synapse0x25d5cc0() {
   return (neuron0x25c27c0()*0.0307364);
}

double NNfunction_sb_dRdR::synapse0x25d5d00() {
   return (neuron0x25c2b00()*-0.027319);
}

double NNfunction_sb_dRdR::synapse0x25d5d40() {
   return (neuron0x25c2e40()*-0.0477515);
}

double NNfunction_sb_dRdR::synapse0x25d5d80() {
   return (neuron0x25c3180()*-0.0638377);
}

double NNfunction_sb_dRdR::synapse0x25d5dc0() {
   return (neuron0x25c34c0()*-0.113699);
}

double NNfunction_sb_dRdR::synapse0x25d5e00() {
   return (neuron0x25c3800()*0.0317256);
}

double NNfunction_sb_dRdR::synapse0x25d5e40() {
   return (neuron0x25c3b40()*0.354719);
}

double NNfunction_sb_dRdR::synapse0x25d5e80() {
   return (neuron0x25c3e80()*-0.0712326);
}

double NNfunction_sb_dRdR::synapse0x25d5ec0() {
   return (neuron0x25c41c0()*0.0608279);
}

double NNfunction_sb_dRdR::synapse0x25d5f00() {
   return (neuron0x25c4500()*-0.0716067);
}

double NNfunction_sb_dRdR::synapse0x25d5f40() {
   return (neuron0x25c4840()*0.0570669);
}

double NNfunction_sb_dRdR::synapse0x25d5f80() {
   return (neuron0x25c4b80()*-0.0527505);
}

double NNfunction_sb_dRdR::synapse0x25d5fc0() {
   return (neuron0x25c4ec0()*-0.0948209);
}

double NNfunction_sb_dRdR::synapse0x25d5a50() {
   return (neuron0x25c5200()*-0.0511862);
}

double NNfunction_sb_dRdR::synapse0x25d5a90() {
   return (neuron0x25c5760()*0.430667);
}

double NNfunction_sb_dRdR::synapse0x25d6110() {
   return (neuron0x25c5aa0()*-0.119269);
}

double NNfunction_sb_dRdR::synapse0x25d6150() {
   return (neuron0x25c5de0()*0.13756);
}

double NNfunction_sb_dRdR::synapse0x25d6190() {
   return (neuron0x25c6120()*-0.00462259);
}

double NNfunction_sb_dRdR::synapse0x25d61d0() {
   return (neuron0x25c6460()*0.0231365);
}

double NNfunction_sb_dRdR::synapse0x25d6210() {
   return (neuron0x25c67a0()*-0.00600012);
}

double NNfunction_sb_dRdR::synapse0x25d6250() {
   return (neuron0x25c6ae0()*0.031902);
}

double NNfunction_sb_dRdR::synapse0x25d65d0() {
   return (neuron0x25c1e90()*-0.0427589);
}

double NNfunction_sb_dRdR::synapse0x25d6610() {
   return (neuron0x25c2140()*-0.349725);
}

double NNfunction_sb_dRdR::synapse0x25d6650() {
   return (neuron0x25c2480()*-0.0307052);
}

double NNfunction_sb_dRdR::synapse0x25d6690() {
   return (neuron0x25c27c0()*1.12266);
}

double NNfunction_sb_dRdR::synapse0x25d66d0() {
   return (neuron0x25c2b00()*-0.036216);
}

double NNfunction_sb_dRdR::synapse0x25d6710() {
   return (neuron0x25c2e40()*-0.0688607);
}

double NNfunction_sb_dRdR::synapse0x25d6750() {
   return (neuron0x25c3180()*-0.0662532);
}

double NNfunction_sb_dRdR::synapse0x25d6790() {
   return (neuron0x25c34c0()*-0.0842856);
}

double NNfunction_sb_dRdR::synapse0x25d67d0() {
   return (neuron0x25c3800()*0.00711644);
}

double NNfunction_sb_dRdR::synapse0x25ce990() {
   return (neuron0x25c3b40()*-0.0718834);
}

double NNfunction_sb_dRdR::synapse0x25ce9d0() {
   return (neuron0x25c3e80()*0.0121742);
}

double NNfunction_sb_dRdR::synapse0x25cea10() {
   return (neuron0x25c41c0()*-0.0144322);
}

double NNfunction_sb_dRdR::synapse0x25cea50() {
   return (neuron0x25c4500()*0.102951);
}

double NNfunction_sb_dRdR::synapse0x25cea90() {
   return (neuron0x25c4840()*0.0152182);
}

double NNfunction_sb_dRdR::synapse0x25cead0() {
   return (neuron0x25c4b80()*-0.135918);
}

double NNfunction_sb_dRdR::synapse0x25ceb10() {
   return (neuron0x25c4ec0()*-0.0695187);
}

double NNfunction_sb_dRdR::synapse0x25d6420() {
   return (neuron0x25c5200()*-0.148133);
}

double NNfunction_sb_dRdR::synapse0x25d6460() {
   return (neuron0x25c5760()*-0.769564);
}

double NNfunction_sb_dRdR::synapse0x25cec60() {
   return (neuron0x25c5aa0()*-0.0204108);
}

double NNfunction_sb_dRdR::synapse0x25ceca0() {
   return (neuron0x25c5de0()*-0.0107482);
}

double NNfunction_sb_dRdR::synapse0x25cece0() {
   return (neuron0x25c6120()*-0.00312412);
}

double NNfunction_sb_dRdR::synapse0x25ced20() {
   return (neuron0x25c6460()*0.0233344);
}

double NNfunction_sb_dRdR::synapse0x25ced60() {
   return (neuron0x25c67a0()*-0.0560471);
}

double NNfunction_sb_dRdR::synapse0x25ceda0() {
   return (neuron0x25c6ae0()*0.036574);
}

double NNfunction_sb_dRdR::synapse0x25cf120() {
   return (neuron0x25c1e90()*-0.014558);
}

double NNfunction_sb_dRdR::synapse0x25cf160() {
   return (neuron0x25c2140()*-0.0865147);
}

double NNfunction_sb_dRdR::synapse0x25cf1a0() {
   return (neuron0x25c2480()*0.169912);
}

double NNfunction_sb_dRdR::synapse0x25cf1e0() {
   return (neuron0x25c27c0()*0.622909);
}

double NNfunction_sb_dRdR::synapse0x25cf220() {
   return (neuron0x25c2b00()*-0.367895);
}

double NNfunction_sb_dRdR::synapse0x25cf260() {
   return (neuron0x25c2e40()*-0.289955);
}

double NNfunction_sb_dRdR::synapse0x25cf2a0() {
   return (neuron0x25c3180()*0.0406211);
}

double NNfunction_sb_dRdR::synapse0x25cf2e0() {
   return (neuron0x25c34c0()*-0.250163);
}

double NNfunction_sb_dRdR::synapse0x25cf320() {
   return (neuron0x25c3800()*-0.202335);
}

double NNfunction_sb_dRdR::synapse0x25cf360() {
   return (neuron0x25c3b40()*0.5181);
}

double NNfunction_sb_dRdR::synapse0x25cf3a0() {
   return (neuron0x25c3e80()*-0.49508);
}

double NNfunction_sb_dRdR::synapse0x25cf3e0() {
   return (neuron0x25c41c0()*-0.167885);
}

double NNfunction_sb_dRdR::synapse0x25cf420() {
   return (neuron0x25c4500()*-0.0819091);
}

double NNfunction_sb_dRdR::synapse0x25cf460() {
   return (neuron0x25c4840()*-0.183744);
}

double NNfunction_sb_dRdR::synapse0x25cf4a0() {
   return (neuron0x25c4b80()*0.0180806);
}

double NNfunction_sb_dRdR::synapse0x25cf4e0() {
   return (neuron0x25c4ec0()*-0.0412546);
}

double NNfunction_sb_dRdR::synapse0x25cef70() {
   return (neuron0x25c5200()*0.181419);
}

double NNfunction_sb_dRdR::synapse0x25cefb0() {
   return (neuron0x25c5760()*0.478381);
}

double NNfunction_sb_dRdR::synapse0x25cf630() {
   return (neuron0x25c5aa0()*-0.192219);
}

double NNfunction_sb_dRdR::synapse0x25cf670() {
   return (neuron0x25c5de0()*-0.384818);
}

double NNfunction_sb_dRdR::synapse0x25cf6b0() {
   return (neuron0x25c6120()*-0.39545);
}

double NNfunction_sb_dRdR::synapse0x25cf6f0() {
   return (neuron0x25c6460()*-0.0612113);
}

double NNfunction_sb_dRdR::synapse0x25cf730() {
   return (neuron0x25c67a0()*-0.167414);
}

double NNfunction_sb_dRdR::synapse0x25cf770() {
   return (neuron0x25c6ae0()*0.36792);
}

double NNfunction_sb_dRdR::synapse0x25cf940() {
   return (neuron0x25c1e90()*-0.605384);
}

double NNfunction_sb_dRdR::synapse0x25d89d0() {
   return (neuron0x25c2140()*0.269678);
}

double NNfunction_sb_dRdR::synapse0x25d8a10() {
   return (neuron0x25c2480()*0.61229);
}

double NNfunction_sb_dRdR::synapse0x25d8a50() {
   return (neuron0x25c27c0()*0.193026);
}

double NNfunction_sb_dRdR::synapse0x25d8a90() {
   return (neuron0x25c2b00()*0.498204);
}

double NNfunction_sb_dRdR::synapse0x25d8ad0() {
   return (neuron0x25c2e40()*-0.081446);
}

double NNfunction_sb_dRdR::synapse0x25d8b10() {
   return (neuron0x25c3180()*-0.056985);
}

double NNfunction_sb_dRdR::synapse0x25d8b50() {
   return (neuron0x25c34c0()*0.0659334);
}

double NNfunction_sb_dRdR::synapse0x25d8b90() {
   return (neuron0x25c3800()*0.195287);
}

double NNfunction_sb_dRdR::synapse0x25d8bd0() {
   return (neuron0x25c3b40()*-0.379069);
}

double NNfunction_sb_dRdR::synapse0x25d8c10() {
   return (neuron0x25c3e80()*-0.00542672);
}

double NNfunction_sb_dRdR::synapse0x25d8c50() {
   return (neuron0x25c41c0()*-0.054867);
}

double NNfunction_sb_dRdR::synapse0x25d8c90() {
   return (neuron0x25c4500()*-0.0590197);
}

double NNfunction_sb_dRdR::synapse0x25d8cd0() {
   return (neuron0x25c4840()*-0.145255);
}

double NNfunction_sb_dRdR::synapse0x25d8d10() {
   return (neuron0x25c4b80()*-0.185335);
}

double NNfunction_sb_dRdR::synapse0x25d8d50() {
   return (neuron0x25c4ec0()*-0.120837);
}

double NNfunction_sb_dRdR::synapse0x25d8820() {
   return (neuron0x25c5200()*-0.237044);
}

double NNfunction_sb_dRdR::synapse0x25d8860() {
   return (neuron0x25c5760()*1.17754);
}

double NNfunction_sb_dRdR::synapse0x25d8ea0() {
   return (neuron0x25c5aa0()*1.13736);
}

double NNfunction_sb_dRdR::synapse0x25d8ee0() {
   return (neuron0x25c5de0()*-0.214122);
}

double NNfunction_sb_dRdR::synapse0x25d8f20() {
   return (neuron0x25c6120()*0.0896332);
}

double NNfunction_sb_dRdR::synapse0x25d8f60() {
   return (neuron0x25c6460()*0.264257);
}

double NNfunction_sb_dRdR::synapse0x25d8fa0() {
   return (neuron0x25c67a0()*-0.0529478);
}

double NNfunction_sb_dRdR::synapse0x25d8fe0() {
   return (neuron0x25c6ae0()*0.330625);
}

double NNfunction_sb_dRdR::synapse0x25d9360() {
   return (neuron0x25c1e90()*-0.000987897);
}

double NNfunction_sb_dRdR::synapse0x25d93a0() {
   return (neuron0x25c2140()*-0.000273956);
}

double NNfunction_sb_dRdR::synapse0x25d93e0() {
   return (neuron0x25c2480()*-0.00845077);
}

double NNfunction_sb_dRdR::synapse0x25d9420() {
   return (neuron0x25c27c0()*0.0598241);
}

double NNfunction_sb_dRdR::synapse0x25d9460() {
   return (neuron0x25c2b00()*0.00485962);
}

double NNfunction_sb_dRdR::synapse0x25d94a0() {
   return (neuron0x25c2e40()*0.00388027);
}

double NNfunction_sb_dRdR::synapse0x25d94e0() {
   return (neuron0x25c3180()*-0.00154446);
}

double NNfunction_sb_dRdR::synapse0x25d9520() {
   return (neuron0x25c34c0()*0.0115859);
}

double NNfunction_sb_dRdR::synapse0x25d9560() {
   return (neuron0x25c3800()*-0.00900732);
}

double NNfunction_sb_dRdR::synapse0x25d95a0() {
   return (neuron0x25c3b40()*-0.0198132);
}

double NNfunction_sb_dRdR::synapse0x25d95e0() {
   return (neuron0x25c3e80()*0.00667291);
}

double NNfunction_sb_dRdR::synapse0x25d9620() {
   return (neuron0x25c41c0()*0.00359244);
}

double NNfunction_sb_dRdR::synapse0x25d9660() {
   return (neuron0x25c4500()*-0.000180667);
}

double NNfunction_sb_dRdR::synapse0x25d96a0() {
   return (neuron0x25c4840()*-0.0206822);
}

double NNfunction_sb_dRdR::synapse0x25d96e0() {
   return (neuron0x25c4b80()*0.030614);
}

double NNfunction_sb_dRdR::synapse0x25d9720() {
   return (neuron0x25c4ec0()*0.00382765);
}

double NNfunction_sb_dRdR::synapse0x25d91b0() {
   return (neuron0x25c5200()*-0.0123961);
}

double NNfunction_sb_dRdR::synapse0x25d91f0() {
   return (neuron0x25c5760()*-4.36997);
}

double NNfunction_sb_dRdR::synapse0x25d9870() {
   return (neuron0x25c5aa0()*0.0130098);
}

double NNfunction_sb_dRdR::synapse0x25d98b0() {
   return (neuron0x25c5de0()*-0.00194594);
}

double NNfunction_sb_dRdR::synapse0x25d98f0() {
   return (neuron0x25c6120()*-0.00356663);
}

double NNfunction_sb_dRdR::synapse0x25d9930() {
   return (neuron0x25c6460()*0.00562653);
}

double NNfunction_sb_dRdR::synapse0x25d9970() {
   return (neuron0x25c67a0()*0.00591856);
}

double NNfunction_sb_dRdR::synapse0x25d99b0() {
   return (neuron0x25c6ae0()*-0.000392786);
}

double NNfunction_sb_dRdR::synapse0x25d9d30() {
   return (neuron0x25c1e90()*0.0336679);
}

double NNfunction_sb_dRdR::synapse0x25d9d70() {
   return (neuron0x25c2140()*-0.0341887);
}

double NNfunction_sb_dRdR::synapse0x25d9db0() {
   return (neuron0x25c2480()*-0.0555801);
}

double NNfunction_sb_dRdR::synapse0x25d9df0() {
   return (neuron0x25c27c0()*0.111667);
}

double NNfunction_sb_dRdR::synapse0x25d9e30() {
   return (neuron0x25c2b00()*-0.886355);
}

double NNfunction_sb_dRdR::synapse0x25d9e70() {
   return (neuron0x25c2e40()*0.139303);
}

double NNfunction_sb_dRdR::synapse0x25d9eb0() {
   return (neuron0x25c3180()*0.534587);
}

double NNfunction_sb_dRdR::synapse0x25d9ef0() {
   return (neuron0x25c34c0()*0.821071);
}

double NNfunction_sb_dRdR::synapse0x25d9f30() {
   return (neuron0x25c3800()*0.0189361);
}

double NNfunction_sb_dRdR::synapse0x25d9f70() {
   return (neuron0x25c3b40()*-0.361262);
}

double NNfunction_sb_dRdR::synapse0x25d9fb0() {
   return (neuron0x25c3e80()*0.0606088);
}

double NNfunction_sb_dRdR::synapse0x25d9ff0() {
   return (neuron0x25c41c0()*-0.232645);
}

double NNfunction_sb_dRdR::synapse0x25da030() {
   return (neuron0x25c4500()*-0.0971253);
}

double NNfunction_sb_dRdR::synapse0x25da070() {
   return (neuron0x25c4840()*-0.0609394);
}

double NNfunction_sb_dRdR::synapse0x25da0b0() {
   return (neuron0x25c4b80()*-0.474337);
}

double NNfunction_sb_dRdR::synapse0x25da0f0() {
   return (neuron0x25c4ec0()*-0.164353);
}

double NNfunction_sb_dRdR::synapse0x25d9b80() {
   return (neuron0x25c5200()*0.00556579);
}

double NNfunction_sb_dRdR::synapse0x25d9bc0() {
   return (neuron0x25c5760()*-0.564162);
}

double NNfunction_sb_dRdR::synapse0x25da240() {
   return (neuron0x25c5aa0()*-0.0416181);
}

double NNfunction_sb_dRdR::synapse0x25da280() {
   return (neuron0x25c5de0()*-0.163764);
}

double NNfunction_sb_dRdR::synapse0x25da2c0() {
   return (neuron0x25c6120()*-0.0620266);
}

double NNfunction_sb_dRdR::synapse0x25da300() {
   return (neuron0x25c6460()*0.19369);
}

double NNfunction_sb_dRdR::synapse0x25da340() {
   return (neuron0x25c67a0()*0.109846);
}

double NNfunction_sb_dRdR::synapse0x25da380() {
   return (neuron0x25c6ae0()*0.00130235);
}

double NNfunction_sb_dRdR::synapse0x25da700() {
   return (neuron0x25c1e90()*-0.0268881);
}

double NNfunction_sb_dRdR::synapse0x25da740() {
   return (neuron0x25c2140()*0.21676);
}

double NNfunction_sb_dRdR::synapse0x25da780() {
   return (neuron0x25c2480()*-0.0810352);
}

double NNfunction_sb_dRdR::synapse0x25da7c0() {
   return (neuron0x25c27c0()*0.622006);
}

double NNfunction_sb_dRdR::synapse0x25da800() {
   return (neuron0x25c2b00()*0.442291);
}

double NNfunction_sb_dRdR::synapse0x25da840() {
   return (neuron0x25c2e40()*-0.241094);
}

double NNfunction_sb_dRdR::synapse0x25da880() {
   return (neuron0x25c3180()*0.0566665);
}

double NNfunction_sb_dRdR::synapse0x25da8c0() {
   return (neuron0x25c34c0()*0.389914);
}

double NNfunction_sb_dRdR::synapse0x25da900() {
   return (neuron0x25c3800()*0.0249312);
}

double NNfunction_sb_dRdR::synapse0x25da940() {
   return (neuron0x25c3b40()*-0.0445726);
}

double NNfunction_sb_dRdR::synapse0x25da980() {
   return (neuron0x25c3e80()*-0.155444);
}

double NNfunction_sb_dRdR::synapse0x25da9c0() {
   return (neuron0x25c41c0()*-0.0493663);
}

double NNfunction_sb_dRdR::synapse0x25daa00() {
   return (neuron0x25c4500()*-0.120095);
}

double NNfunction_sb_dRdR::synapse0x25daa40() {
   return (neuron0x25c4840()*0.0468318);
}

double NNfunction_sb_dRdR::synapse0x25daa80() {
   return (neuron0x25c4b80()*-0.245592);
}

double NNfunction_sb_dRdR::synapse0x25daac0() {
   return (neuron0x25c4ec0()*-0.167331);
}

double NNfunction_sb_dRdR::synapse0x25da550() {
   return (neuron0x25c5200()*0.0494563);
}

double NNfunction_sb_dRdR::synapse0x25da590() {
   return (neuron0x25c5760()*-0.942815);
}

double NNfunction_sb_dRdR::synapse0x25dac10() {
   return (neuron0x25c5aa0()*-0.0483494);
}

double NNfunction_sb_dRdR::synapse0x25dac50() {
   return (neuron0x25c5de0()*0.0606286);
}

double NNfunction_sb_dRdR::synapse0x25dac90() {
   return (neuron0x25c6120()*-0.183524);
}

double NNfunction_sb_dRdR::synapse0x25dacd0() {
   return (neuron0x25c6460()*0.0132899);
}

double NNfunction_sb_dRdR::synapse0x25dad10() {
   return (neuron0x25c67a0()*0.0299083);
}

double NNfunction_sb_dRdR::synapse0x25dad50() {
   return (neuron0x25c6ae0()*0.0134306);
}

double NNfunction_sb_dRdR::synapse0x25db0d0() {
   return (neuron0x25c1e90()*0.509964);
}

double NNfunction_sb_dRdR::synapse0x25db110() {
   return (neuron0x25c2140()*-0.480658);
}

double NNfunction_sb_dRdR::synapse0x25db150() {
   return (neuron0x25c2480()*0.49452);
}

double NNfunction_sb_dRdR::synapse0x25db190() {
   return (neuron0x25c27c0()*0.113806);
}

double NNfunction_sb_dRdR::synapse0x25db1d0() {
   return (neuron0x25c2b00()*0.714381);
}

double NNfunction_sb_dRdR::synapse0x25db210() {
   return (neuron0x25c2e40()*0.127826);
}

double NNfunction_sb_dRdR::synapse0x25db250() {
   return (neuron0x25c3180()*0.347657);
}

double NNfunction_sb_dRdR::synapse0x25db290() {
   return (neuron0x25c34c0()*-0.710572);
}

double NNfunction_sb_dRdR::synapse0x25db2d0() {
   return (neuron0x25c3800()*0.0468429);
}

double NNfunction_sb_dRdR::synapse0x25db310() {
   return (neuron0x25c3b40()*-0.810878);
}

double NNfunction_sb_dRdR::synapse0x25db350() {
   return (neuron0x25c3e80()*-0.628354);
}

double NNfunction_sb_dRdR::synapse0x25db390() {
   return (neuron0x25c41c0()*0.248585);
}

double NNfunction_sb_dRdR::synapse0x25db3d0() {
   return (neuron0x25c4500()*-0.16773);
}

double NNfunction_sb_dRdR::synapse0x25db410() {
   return (neuron0x25c4840()*0.45887);
}

double NNfunction_sb_dRdR::synapse0x25db450() {
   return (neuron0x25c4b80()*0.14017);
}

double NNfunction_sb_dRdR::synapse0x25db490() {
   return (neuron0x25c4ec0()*0.15989);
}

double NNfunction_sb_dRdR::synapse0x25daf20() {
   return (neuron0x25c5200()*-0.0500334);
}

double NNfunction_sb_dRdR::synapse0x25daf60() {
   return (neuron0x25c5760()*-0.186332);
}

double NNfunction_sb_dRdR::synapse0x25db5e0() {
   return (neuron0x25c5aa0()*0.403975);
}

double NNfunction_sb_dRdR::synapse0x25db620() {
   return (neuron0x25c5de0()*-0.347477);
}

double NNfunction_sb_dRdR::synapse0x25db660() {
   return (neuron0x25c6120()*-0.921933);
}

double NNfunction_sb_dRdR::synapse0x25db6a0() {
   return (neuron0x25c6460()*-0.173473);
}

double NNfunction_sb_dRdR::synapse0x25db6e0() {
   return (neuron0x25c67a0()*0.930062);
}

double NNfunction_sb_dRdR::synapse0x25db720() {
   return (neuron0x25c6ae0()*0.115937);
}

double NNfunction_sb_dRdR::synapse0x25dbaa0() {
   return (neuron0x25c1e90()*-0.339022);
}

double NNfunction_sb_dRdR::synapse0x25dbae0() {
   return (neuron0x25c2140()*-0.346751);
}

double NNfunction_sb_dRdR::synapse0x25dbb20() {
   return (neuron0x25c2480()*0.363091);
}

double NNfunction_sb_dRdR::synapse0x25dbb60() {
   return (neuron0x25c27c0()*0.0242996);
}

double NNfunction_sb_dRdR::synapse0x25dbba0() {
   return (neuron0x25c2b00()*-0.0649116);
}

double NNfunction_sb_dRdR::synapse0x25dbbe0() {
   return (neuron0x25c2e40()*-0.0620815);
}

double NNfunction_sb_dRdR::synapse0x25dbc20() {
   return (neuron0x25c3180()*-0.460566);
}

double NNfunction_sb_dRdR::synapse0x25dbc60() {
   return (neuron0x25c34c0()*-0.140923);
}

double NNfunction_sb_dRdR::synapse0x25dbca0() {
   return (neuron0x25c3800()*0.376264);
}

double NNfunction_sb_dRdR::synapse0x25dbce0() {
   return (neuron0x25c3b40()*0.0879466);
}

double NNfunction_sb_dRdR::synapse0x25dbd20() {
   return (neuron0x25c3e80()*-0.639102);
}

double NNfunction_sb_dRdR::synapse0x25dbd60() {
   return (neuron0x25c41c0()*0.617488);
}

double NNfunction_sb_dRdR::synapse0x25dbda0() {
   return (neuron0x25c4500()*0.821294);
}

double NNfunction_sb_dRdR::synapse0x25dbde0() {
   return (neuron0x25c4840()*0.668323);
}

double NNfunction_sb_dRdR::synapse0x25dbe20() {
   return (neuron0x25c4b80()*-0.089604);
}

double NNfunction_sb_dRdR::synapse0x25dbe60() {
   return (neuron0x25c4ec0()*0.0799104);
}

double NNfunction_sb_dRdR::synapse0x25db8f0() {
   return (neuron0x25c5200()*0.308462);
}

double NNfunction_sb_dRdR::synapse0x25db930() {
   return (neuron0x25c5760()*1.53221);
}

double NNfunction_sb_dRdR::synapse0x25dbfb0() {
   return (neuron0x25c5aa0()*-0.262981);
}

double NNfunction_sb_dRdR::synapse0x25dbff0() {
   return (neuron0x25c5de0()*-0.491784);
}

double NNfunction_sb_dRdR::synapse0x25dc030() {
   return (neuron0x25c6120()*-0.0575654);
}

double NNfunction_sb_dRdR::synapse0x25dc070() {
   return (neuron0x25c6460()*-0.103354);
}

double NNfunction_sb_dRdR::synapse0x25dc0b0() {
   return (neuron0x25c67a0()*-0.193927);
}

double NNfunction_sb_dRdR::synapse0x25dc0f0() {
   return (neuron0x25c6ae0()*-0.283842);
}

double NNfunction_sb_dRdR::synapse0x25dc470() {
   return (neuron0x25c1e90()*0.0797745);
}

double NNfunction_sb_dRdR::synapse0x25dc4b0() {
   return (neuron0x25c2140()*0.806813);
}

double NNfunction_sb_dRdR::synapse0x25dc4f0() {
   return (neuron0x25c2480()*0.542135);
}

double NNfunction_sb_dRdR::synapse0x25dc530() {
   return (neuron0x25c27c0()*-0.568038);
}

double NNfunction_sb_dRdR::synapse0x25dc570() {
   return (neuron0x25c2b00()*0.0327062);
}

double NNfunction_sb_dRdR::synapse0x25dc5b0() {
   return (neuron0x25c2e40()*-0.790763);
}

double NNfunction_sb_dRdR::synapse0x25dc5f0() {
   return (neuron0x25c3180()*0.203189);
}

double NNfunction_sb_dRdR::synapse0x25dc630() {
   return (neuron0x25c34c0()*-0.184605);
}

double NNfunction_sb_dRdR::synapse0x25dc670() {
   return (neuron0x25c3800()*-0.190761);
}

double NNfunction_sb_dRdR::synapse0x25dc6b0() {
   return (neuron0x25c3b40()*-0.00465804);
}

double NNfunction_sb_dRdR::synapse0x25dc6f0() {
   return (neuron0x25c3e80()*-0.0115279);
}

double NNfunction_sb_dRdR::synapse0x25dc730() {
   return (neuron0x25c41c0()*-0.529269);
}

double NNfunction_sb_dRdR::synapse0x25dc770() {
   return (neuron0x25c4500()*-0.0845997);
}

double NNfunction_sb_dRdR::synapse0x25dc7b0() {
   return (neuron0x25c4840()*-0.487272);
}

double NNfunction_sb_dRdR::synapse0x25dc7f0() {
   return (neuron0x25c4b80()*-0.515312);
}

double NNfunction_sb_dRdR::synapse0x25dc830() {
   return (neuron0x25c4ec0()*0.0460134);
}

double NNfunction_sb_dRdR::synapse0x25dc2c0() {
   return (neuron0x25c5200()*0.541768);
}

double NNfunction_sb_dRdR::synapse0x25dc300() {
   return (neuron0x25c5760()*-1.83329);
}

double NNfunction_sb_dRdR::synapse0x25dc980() {
   return (neuron0x25c5aa0()*0.135415);
}

double NNfunction_sb_dRdR::synapse0x25dc9c0() {
   return (neuron0x25c5de0()*-0.539246);
}

double NNfunction_sb_dRdR::synapse0x25dca00() {
   return (neuron0x25c6120()*0.43185);
}

double NNfunction_sb_dRdR::synapse0x25dca40() {
   return (neuron0x25c6460()*0.343878);
}

double NNfunction_sb_dRdR::synapse0x25dca80() {
   return (neuron0x25c67a0()*-0.116334);
}

double NNfunction_sb_dRdR::synapse0x25dcac0() {
   return (neuron0x25c6ae0()*-0.264542);
}

double NNfunction_sb_dRdR::synapse0x25dce40() {
   return (neuron0x25c1e90()*0.0148458);
}

double NNfunction_sb_dRdR::synapse0x25dce80() {
   return (neuron0x25c2140()*0.00590169);
}

double NNfunction_sb_dRdR::synapse0x25dcec0() {
   return (neuron0x25c2480()*-0.00444959);
}

double NNfunction_sb_dRdR::synapse0x25dcf00() {
   return (neuron0x25c27c0()*-6.82708);
}

double NNfunction_sb_dRdR::synapse0x25dcf40() {
   return (neuron0x25c2b00()*-0.012584);
}

double NNfunction_sb_dRdR::synapse0x25dcf80() {
   return (neuron0x25c2e40()*0.00288991);
}

double NNfunction_sb_dRdR::synapse0x25dcfc0() {
   return (neuron0x25c3180()*0.00637444);
}

double NNfunction_sb_dRdR::synapse0x25dd000() {
   return (neuron0x25c34c0()*-0.0294159);
}

double NNfunction_sb_dRdR::synapse0x25dd040() {
   return (neuron0x25c3800()*-0.00261179);
}

double NNfunction_sb_dRdR::synapse0x25dd080() {
   return (neuron0x25c3b40()*0.0345804);
}

double NNfunction_sb_dRdR::synapse0x25dd0c0() {
   return (neuron0x25c3e80()*0.00801154);
}

double NNfunction_sb_dRdR::synapse0x25dd100() {
   return (neuron0x25c41c0()*-0.0397254);
}

double NNfunction_sb_dRdR::synapse0x25dd140() {
   return (neuron0x25c4500()*-0.00933814);
}

double NNfunction_sb_dRdR::synapse0x25dd180() {
   return (neuron0x25c4840()*-0.00614837);
}

double NNfunction_sb_dRdR::synapse0x25dd1c0() {
   return (neuron0x25c4b80()*0.0068933);
}

double NNfunction_sb_dRdR::synapse0x25dd200() {
   return (neuron0x25c4ec0()*-0.0321722);
}

double NNfunction_sb_dRdR::synapse0x25dcc90() {
   return (neuron0x25c5200()*-0.0140112);
}

double NNfunction_sb_dRdR::synapse0x25dccd0() {
   return (neuron0x25c5760()*-0.185459);
}

double NNfunction_sb_dRdR::synapse0x25dd350() {
   return (neuron0x25c5aa0()*0.0187806);
}

double NNfunction_sb_dRdR::synapse0x25dd390() {
   return (neuron0x25c5de0()*0.0112567);
}

double NNfunction_sb_dRdR::synapse0x25dd3d0() {
   return (neuron0x25c6120()*-0.00408451);
}

double NNfunction_sb_dRdR::synapse0x25dd410() {
   return (neuron0x25c6460()*-0.0229267);
}

double NNfunction_sb_dRdR::synapse0x25dd450() {
   return (neuron0x25c67a0()*0.00716033);
}

double NNfunction_sb_dRdR::synapse0x25dd490() {
   return (neuron0x25c6ae0()*0.00753596);
}

double NNfunction_sb_dRdR::synapse0x25dd810() {
   return (neuron0x25c1e90()*1.18104);
}

double NNfunction_sb_dRdR::synapse0x25d1de0() {
   return (neuron0x25c2140()*-0.974988);
}

double NNfunction_sb_dRdR::synapse0x25d1e20() {
   return (neuron0x25c2480()*0.121456);
}

double NNfunction_sb_dRdR::synapse0x25d1e60() {
   return (neuron0x25c27c0()*-0.279593);
}

double NNfunction_sb_dRdR::synapse0x25d20b0() {
   return (neuron0x25c2b00()*-0.678629);
}

double NNfunction_sb_dRdR::synapse0x25d20f0() {
   return (neuron0x25c2e40()*-0.318851);
}

double NNfunction_sb_dRdR::synapse0x25d2130() {
   return (neuron0x25c3180()*-0.829612);
}

double NNfunction_sb_dRdR::synapse0x25d2380() {
   return (neuron0x25c34c0()*-0.0895686);
}

double NNfunction_sb_dRdR::synapse0x25d23c0() {
   return (neuron0x25c3800()*0.401139);
}

double NNfunction_sb_dRdR::synapse0x25d2610() {
   return (neuron0x25c3b40()*0.073096);
}

double NNfunction_sb_dRdR::synapse0x25d2650() {
   return (neuron0x25c3e80()*0.302436);
}

double NNfunction_sb_dRdR::synapse0x25d2690() {
   return (neuron0x25c41c0()*-0.179758);
}

double NNfunction_sb_dRdR::synapse0x25d28e0() {
   return (neuron0x25c4500()*-0.368593);
}

double NNfunction_sb_dRdR::synapse0x25d2920() {
   return (neuron0x25c4840()*-0.467282);
}

double NNfunction_sb_dRdR::synapse0x25d2b70() {
   return (neuron0x25c4b80()*0.345268);
}

double NNfunction_sb_dRdR::synapse0x25d2bb0() {
   return (neuron0x25c4ec0()*-0.0815437);
}

double NNfunction_sb_dRdR::synapse0x25dd660() {
   return (neuron0x25c5200()*0.0994593);
}

double NNfunction_sb_dRdR::synapse0x25dd6a0() {
   return (neuron0x25c5760()*-1.20371);
}

double NNfunction_sb_dRdR::synapse0x25d2d00() {
   return (neuron0x25c5aa0()*0.383494);
}

double NNfunction_sb_dRdR::synapse0x25d3210() {
   return (neuron0x25c5de0()*0.27397);
}

double NNfunction_sb_dRdR::synapse0x25d3250() {
   return (neuron0x25c6120()*-0.0719232);
}

double NNfunction_sb_dRdR::synapse0x25d3290() {
   return (neuron0x25c6460()*0.177337);
}

double NNfunction_sb_dRdR::synapse0x25d34e0() {
   return (neuron0x25c67a0()*0.156743);
}

double NNfunction_sb_dRdR::synapse0x25d3520() {
   return (neuron0x25c6ae0()*0.345172);
}

double NNfunction_sb_dRdR::synapse0x25d2dd0() {
   return (neuron0x25c1e90()*-0.0354362);
}

double NNfunction_sb_dRdR::synapse0x25d2e10() {
   return (neuron0x25c2140()*-0.0844979);
}

double NNfunction_sb_dRdR::synapse0x25d2e50() {
   return (neuron0x25c2480()*0.0311873);
}

double NNfunction_sb_dRdR::synapse0x25d2e90() {
   return (neuron0x25c27c0()*-0.216584);
}

double NNfunction_sb_dRdR::synapse0x25d3810() {
   return (neuron0x25c2b00()*-0.075862);
}

double NNfunction_sb_dRdR::synapse0x25dfb60() {
   return (neuron0x25c2e40()*-0.0180909);
}

double NNfunction_sb_dRdR::synapse0x25dfba0() {
   return (neuron0x25c3180()*-0.028993);
}

double NNfunction_sb_dRdR::synapse0x25dfbe0() {
   return (neuron0x25c34c0()*-0.216784);
}

double NNfunction_sb_dRdR::synapse0x25dfc20() {
   return (neuron0x25c3800()*-0.353988);
}

double NNfunction_sb_dRdR::synapse0x25dfc60() {
   return (neuron0x25c3b40()*0.438907);
}

double NNfunction_sb_dRdR::synapse0x25dfca0() {
   return (neuron0x25c3e80()*0.779159);
}

double NNfunction_sb_dRdR::synapse0x25dfce0() {
   return (neuron0x25c41c0()*-0.0444207);
}

double NNfunction_sb_dRdR::synapse0x25dfd20() {
   return (neuron0x25c4500()*-0.00987457);
}

double NNfunction_sb_dRdR::synapse0x25dfd60() {
   return (neuron0x25c4840()*0.334238);
}

double NNfunction_sb_dRdR::synapse0x25dfda0() {
   return (neuron0x25c4b80()*0.0983763);
}

double NNfunction_sb_dRdR::synapse0x25dfde0() {
   return (neuron0x25c4ec0()*-0.166829);
}

double NNfunction_sb_dRdR::synapse0x25d36f0() {
   return (neuron0x25c5200()*0.0472959);
}

double NNfunction_sb_dRdR::synapse0x25d3730() {
   return (neuron0x25c5760()*1.85102);
}

double NNfunction_sb_dRdR::synapse0x25dff30() {
   return (neuron0x25c5aa0()*0.335269);
}

double NNfunction_sb_dRdR::synapse0x25dff70() {
   return (neuron0x25c5de0()*0.0229765);
}

double NNfunction_sb_dRdR::synapse0x25dffb0() {
   return (neuron0x25c6120()*-0.179122);
}

double NNfunction_sb_dRdR::synapse0x25dfff0() {
   return (neuron0x25c6460()*-0.128975);
}

double NNfunction_sb_dRdR::synapse0x25e0030() {
   return (neuron0x25c67a0()*0.0629023);
}

double NNfunction_sb_dRdR::synapse0x25e0070() {
   return (neuron0x25c6ae0()*0.0662064);
}

double NNfunction_sb_dRdR::synapse0x25e03f0() {
   return (neuron0x25c1e90()*0.0422993);
}

double NNfunction_sb_dRdR::synapse0x25e0430() {
   return (neuron0x25c2140()*0.146697);
}

double NNfunction_sb_dRdR::synapse0x25e0470() {
   return (neuron0x25c2480()*-0.640255);
}

double NNfunction_sb_dRdR::synapse0x25e04b0() {
   return (neuron0x25c27c0()*-0.290329);
}

double NNfunction_sb_dRdR::synapse0x25e04f0() {
   return (neuron0x25c2b00()*0.110614);
}

double NNfunction_sb_dRdR::synapse0x25e0530() {
   return (neuron0x25c2e40()*0.0403081);
}

double NNfunction_sb_dRdR::synapse0x25e0570() {
   return (neuron0x25c3180()*0.307694);
}

double NNfunction_sb_dRdR::synapse0x25e05b0() {
   return (neuron0x25c34c0()*-0.205734);
}

double NNfunction_sb_dRdR::synapse0x25e05f0() {
   return (neuron0x25c3800()*-0.623762);
}

double NNfunction_sb_dRdR::synapse0x25e0630() {
   return (neuron0x25c3b40()*-0.258874);
}

double NNfunction_sb_dRdR::synapse0x25e0670() {
   return (neuron0x25c3e80()*-0.0750983);
}

double NNfunction_sb_dRdR::synapse0x25e06b0() {
   return (neuron0x25c41c0()*0.993938);
}

double NNfunction_sb_dRdR::synapse0x25e06f0() {
   return (neuron0x25c4500()*0.598142);
}

double NNfunction_sb_dRdR::synapse0x25e0730() {
   return (neuron0x25c4840()*-0.0203582);
}

double NNfunction_sb_dRdR::synapse0x25e0770() {
   return (neuron0x25c4b80()*-0.0307177);
}

double NNfunction_sb_dRdR::synapse0x25e07b0() {
   return (neuron0x25c4ec0()*-0.76596);
}

double NNfunction_sb_dRdR::synapse0x25e0240() {
   return (neuron0x25c5200()*-0.668307);
}

double NNfunction_sb_dRdR::synapse0x25e0280() {
   return (neuron0x25c5760()*-0.567406);
}

double NNfunction_sb_dRdR::synapse0x25e0900() {
   return (neuron0x25c5aa0()*-0.688342);
}

double NNfunction_sb_dRdR::synapse0x25e0940() {
   return (neuron0x25c5de0()*0.227465);
}

double NNfunction_sb_dRdR::synapse0x25e0980() {
   return (neuron0x25c6120()*-0.236325);
}

double NNfunction_sb_dRdR::synapse0x25e09c0() {
   return (neuron0x25c6460()*-0.230727);
}

double NNfunction_sb_dRdR::synapse0x25e0a00() {
   return (neuron0x25c67a0()*-0.00659902);
}

double NNfunction_sb_dRdR::synapse0x25e0a40() {
   return (neuron0x25c6ae0()*0.00580508);
}

double NNfunction_sb_dRdR::synapse0x25e0dc0() {
   return (neuron0x25c1e90()*0.4615);
}

double NNfunction_sb_dRdR::synapse0x25e0e00() {
   return (neuron0x25c2140()*-0.269893);
}

double NNfunction_sb_dRdR::synapse0x25e0e40() {
   return (neuron0x25c2480()*-0.673738);
}

double NNfunction_sb_dRdR::synapse0x25e0e80() {
   return (neuron0x25c27c0()*0.487794);
}

double NNfunction_sb_dRdR::synapse0x25e0ec0() {
   return (neuron0x25c2b00()*-0.495656);
}

double NNfunction_sb_dRdR::synapse0x25e0f00() {
   return (neuron0x25c2e40()*-0.390462);
}

double NNfunction_sb_dRdR::synapse0x25e0f40() {
   return (neuron0x25c3180()*0.0522132);
}

double NNfunction_sb_dRdR::synapse0x25e0f80() {
   return (neuron0x25c34c0()*-0.016606);
}

double NNfunction_sb_dRdR::synapse0x25e0fc0() {
   return (neuron0x25c3800()*-0.403579);
}

double NNfunction_sb_dRdR::synapse0x25e1000() {
   return (neuron0x25c3b40()*0.141646);
}

double NNfunction_sb_dRdR::synapse0x25e1040() {
   return (neuron0x25c3e80()*-0.305373);
}

double NNfunction_sb_dRdR::synapse0x25e1080() {
   return (neuron0x25c41c0()*0.99434);
}

double NNfunction_sb_dRdR::synapse0x25e10c0() {
   return (neuron0x25c4500()*0.0252667);
}

double NNfunction_sb_dRdR::synapse0x25e1100() {
   return (neuron0x25c4840()*0.702464);
}

double NNfunction_sb_dRdR::synapse0x25e1140() {
   return (neuron0x25c4b80()*0.084291);
}

double NNfunction_sb_dRdR::synapse0x25e1180() {
   return (neuron0x25c4ec0()*-0.427315);
}

double NNfunction_sb_dRdR::synapse0x25e0c10() {
   return (neuron0x25c5200()*0.125196);
}

double NNfunction_sb_dRdR::synapse0x25e0c50() {
   return (neuron0x25c5760()*-0.169305);
}

double NNfunction_sb_dRdR::synapse0x25e12d0() {
   return (neuron0x25c5aa0()*-0.575673);
}

double NNfunction_sb_dRdR::synapse0x25e1310() {
   return (neuron0x25c5de0()*0.385312);
}

double NNfunction_sb_dRdR::synapse0x25e1350() {
   return (neuron0x25c6120()*-0.35228);
}

double NNfunction_sb_dRdR::synapse0x25e1390() {
   return (neuron0x25c6460()*0.153758);
}

double NNfunction_sb_dRdR::synapse0x25e13d0() {
   return (neuron0x25c67a0()*-0.50923);
}

double NNfunction_sb_dRdR::synapse0x25e1410() {
   return (neuron0x25c6ae0()*-0.203884);
}

double NNfunction_sb_dRdR::synapse0x25e1790() {
   return (neuron0x25c1e90()*-0.023334);
}

double NNfunction_sb_dRdR::synapse0x25e17d0() {
   return (neuron0x25c2140()*0.0884709);
}

double NNfunction_sb_dRdR::synapse0x25e1810() {
   return (neuron0x25c2480()*-0.0202349);
}

double NNfunction_sb_dRdR::synapse0x25e1850() {
   return (neuron0x25c27c0()*2.35623);
}

double NNfunction_sb_dRdR::synapse0x25e1890() {
   return (neuron0x25c2b00()*-0.0370893);
}

double NNfunction_sb_dRdR::synapse0x25e18d0() {
   return (neuron0x25c2e40()*0.0666254);
}

double NNfunction_sb_dRdR::synapse0x25e1910() {
   return (neuron0x25c3180()*0.0165135);
}

double NNfunction_sb_dRdR::synapse0x25e1950() {
   return (neuron0x25c34c0()*0.013133);
}

double NNfunction_sb_dRdR::synapse0x25e1990() {
   return (neuron0x25c3800()*0.0215333);
}

double NNfunction_sb_dRdR::synapse0x25e19d0() {
   return (neuron0x25c3b40()*0.00153585);
}

double NNfunction_sb_dRdR::synapse0x25e1a10() {
   return (neuron0x25c3e80()*0.0441279);
}

double NNfunction_sb_dRdR::synapse0x25e1a50() {
   return (neuron0x25c41c0()*0.00509597);
}

double NNfunction_sb_dRdR::synapse0x25e1a90() {
   return (neuron0x25c4500()*0.000961005);
}

double NNfunction_sb_dRdR::synapse0x25e1ad0() {
   return (neuron0x25c4840()*-0.018645);
}

double NNfunction_sb_dRdR::synapse0x25e1b10() {
   return (neuron0x25c4b80()*0.0562432);
}

double NNfunction_sb_dRdR::synapse0x25e1b50() {
   return (neuron0x25c4ec0()*0.0384109);
}

double NNfunction_sb_dRdR::synapse0x25e15e0() {
   return (neuron0x25c5200()*0.0751913);
}

double NNfunction_sb_dRdR::synapse0x25e1620() {
   return (neuron0x25c5760()*-1.02128);
}

double NNfunction_sb_dRdR::synapse0x25e1ca0() {
   return (neuron0x25c5aa0()*0.00707092);
}

double NNfunction_sb_dRdR::synapse0x25e1ce0() {
   return (neuron0x25c5de0()*-0.0130069);
}

double NNfunction_sb_dRdR::synapse0x25e1d20() {
   return (neuron0x25c6120()*0.0136851);
}

double NNfunction_sb_dRdR::synapse0x25e1d60() {
   return (neuron0x25c6460()*0.00148847);
}

double NNfunction_sb_dRdR::synapse0x25e1da0() {
   return (neuron0x25c67a0()*0.0164382);
}

double NNfunction_sb_dRdR::synapse0x25e1de0() {
   return (neuron0x25c6ae0()*-0.0194673);
}

double NNfunction_sb_dRdR::synapse0x25e2160() {
   return (neuron0x25c1e90()*0.121161);
}

double NNfunction_sb_dRdR::synapse0x25e21a0() {
   return (neuron0x25c2140()*0.00211162);
}

double NNfunction_sb_dRdR::synapse0x25e21e0() {
   return (neuron0x25c2480()*0.0123115);
}

double NNfunction_sb_dRdR::synapse0x25e2220() {
   return (neuron0x25c27c0()*-0.0119855);
}

double NNfunction_sb_dRdR::synapse0x25e2260() {
   return (neuron0x25c2b00()*-0.0101149);
}

double NNfunction_sb_dRdR::synapse0x25e22a0() {
   return (neuron0x25c2e40()*-0.0129596);
}

double NNfunction_sb_dRdR::synapse0x25e22e0() {
   return (neuron0x25c3180()*-0.0201079);
}

double NNfunction_sb_dRdR::synapse0x25e2320() {
   return (neuron0x25c34c0()*0.0239134);
}

double NNfunction_sb_dRdR::synapse0x25e2360() {
   return (neuron0x25c3800()*0.0124132);
}

double NNfunction_sb_dRdR::synapse0x25e23a0() {
   return (neuron0x25c3b40()*0.0159291);
}

double NNfunction_sb_dRdR::synapse0x25e23e0() {
   return (neuron0x25c3e80()*-0.00338892);
}

double NNfunction_sb_dRdR::synapse0x25e2420() {
   return (neuron0x25c41c0()*0.0134205);
}

double NNfunction_sb_dRdR::synapse0x25e2460() {
   return (neuron0x25c4500()*0.074601);
}

double NNfunction_sb_dRdR::synapse0x25e24a0() {
   return (neuron0x25c4840()*0.00678442);
}

double NNfunction_sb_dRdR::synapse0x25e24e0() {
   return (neuron0x25c4b80()*0.0202093);
}

double NNfunction_sb_dRdR::synapse0x25e2520() {
   return (neuron0x25c4ec0()*-0.0130736);
}

double NNfunction_sb_dRdR::synapse0x25e1fb0() {
   return (neuron0x25c5200()*-0.0160151);
}

double NNfunction_sb_dRdR::synapse0x25e1ff0() {
   return (neuron0x25c5760()*-1.26432);
}

double NNfunction_sb_dRdR::synapse0x25e2670() {
   return (neuron0x25c5aa0()*0.0410263);
}

double NNfunction_sb_dRdR::synapse0x25e26b0() {
   return (neuron0x25c5de0()*-0.0170891);
}

double NNfunction_sb_dRdR::synapse0x25e26f0() {
   return (neuron0x25c6120()*0.0120638);
}

double NNfunction_sb_dRdR::synapse0x25e2730() {
   return (neuron0x25c6460()*0.0398838);
}

double NNfunction_sb_dRdR::synapse0x25e2770() {
   return (neuron0x25c67a0()*-0.00200306);
}

double NNfunction_sb_dRdR::synapse0x25e27b0() {
   return (neuron0x25c6ae0()*0.0654563);
}

double NNfunction_sb_dRdR::synapse0x25e2b30() {
   return (neuron0x25c1e90()*0.197546);
}

double NNfunction_sb_dRdR::synapse0x25e2b70() {
   return (neuron0x25c2140()*0.0983541);
}

double NNfunction_sb_dRdR::synapse0x25e2bb0() {
   return (neuron0x25c2480()*-0.193409);
}

double NNfunction_sb_dRdR::synapse0x25e2bf0() {
   return (neuron0x25c27c0()*-1.93599);
}

double NNfunction_sb_dRdR::synapse0x25e2c30() {
   return (neuron0x25c2b00()*0.17657);
}

double NNfunction_sb_dRdR::synapse0x25e2c70() {
   return (neuron0x25c2e40()*-0.0610537);
}

double NNfunction_sb_dRdR::synapse0x25e2cb0() {
   return (neuron0x25c3180()*-0.504333);
}

double NNfunction_sb_dRdR::synapse0x25e2cf0() {
   return (neuron0x25c34c0()*0.260754);
}

double NNfunction_sb_dRdR::synapse0x25e2d30() {
   return (neuron0x25c3800()*0.0231556);
}

double NNfunction_sb_dRdR::synapse0x25e2d70() {
   return (neuron0x25c3b40()*-1.20699);
}

double NNfunction_sb_dRdR::synapse0x25e2db0() {
   return (neuron0x25c3e80()*-0.185845);
}

double NNfunction_sb_dRdR::synapse0x25e2df0() {
   return (neuron0x25c41c0()*0.59661);
}

double NNfunction_sb_dRdR::synapse0x25e2e30() {
   return (neuron0x25c4500()*0.165834);
}

double NNfunction_sb_dRdR::synapse0x25e2e70() {
   return (neuron0x25c4840()*0.778499);
}

double NNfunction_sb_dRdR::synapse0x25e2eb0() {
   return (neuron0x25c4b80()*-0.0135256);
}

double NNfunction_sb_dRdR::synapse0x25e2ef0() {
   return (neuron0x25c4ec0()*-0.27114);
}

double NNfunction_sb_dRdR::synapse0x25e2980() {
   return (neuron0x25c5200()*0.107479);
}

double NNfunction_sb_dRdR::synapse0x25e29c0() {
   return (neuron0x25c5760()*0.280252);
}

double NNfunction_sb_dRdR::synapse0x25e3040() {
   return (neuron0x25c5aa0()*-0.0527855);
}

double NNfunction_sb_dRdR::synapse0x25e3080() {
   return (neuron0x25c5de0()*0.2185);
}

double NNfunction_sb_dRdR::synapse0x25e30c0() {
   return (neuron0x25c6120()*-0.109238);
}

double NNfunction_sb_dRdR::synapse0x25e3100() {
   return (neuron0x25c6460()*0.19905);
}

double NNfunction_sb_dRdR::synapse0x25e3140() {
   return (neuron0x25c67a0()*0.692546);
}

double NNfunction_sb_dRdR::synapse0x25e3180() {
   return (neuron0x25c6ae0()*-0.102903);
}

double NNfunction_sb_dRdR::synapse0x25e3500() {
   return (neuron0x25c1e90()*0.140101);
}

double NNfunction_sb_dRdR::synapse0x25e3540() {
   return (neuron0x25c2140()*-0.331075);
}

double NNfunction_sb_dRdR::synapse0x25e3580() {
   return (neuron0x25c2480()*0.232912);
}

double NNfunction_sb_dRdR::synapse0x25e35c0() {
   return (neuron0x25c27c0()*-0.784494);
}

double NNfunction_sb_dRdR::synapse0x25e3600() {
   return (neuron0x25c2b00()*-0.260349);
}

double NNfunction_sb_dRdR::synapse0x25e3640() {
   return (neuron0x25c2e40()*-0.203654);
}

double NNfunction_sb_dRdR::synapse0x25e3680() {
   return (neuron0x25c3180()*0.875767);
}

double NNfunction_sb_dRdR::synapse0x25e36c0() {
   return (neuron0x25c34c0()*-0.0848979);
}

double NNfunction_sb_dRdR::synapse0x25e3700() {
   return (neuron0x25c3800()*0.15838);
}

double NNfunction_sb_dRdR::synapse0x25e3740() {
   return (neuron0x25c3b40()*0.397164);
}

double NNfunction_sb_dRdR::synapse0x25e3780() {
   return (neuron0x25c3e80()*0.327861);
}

double NNfunction_sb_dRdR::synapse0x25e37c0() {
   return (neuron0x25c41c0()*-0.359214);
}

double NNfunction_sb_dRdR::synapse0x25e3800() {
   return (neuron0x25c4500()*-0.174498);
}

double NNfunction_sb_dRdR::synapse0x25e3840() {
   return (neuron0x25c4840()*-0.0523462);
}

double NNfunction_sb_dRdR::synapse0x25e3880() {
   return (neuron0x25c4b80()*-0.440974);
}

double NNfunction_sb_dRdR::synapse0x25e38c0() {
   return (neuron0x25c4ec0()*-1.24891);
}

double NNfunction_sb_dRdR::synapse0x25e3350() {
   return (neuron0x25c5200()*-0.286499);
}

double NNfunction_sb_dRdR::synapse0x25e3390() {
   return (neuron0x25c5760()*-0.405352);
}

double NNfunction_sb_dRdR::synapse0x25e3a10() {
   return (neuron0x25c5aa0()*-0.0960006);
}

double NNfunction_sb_dRdR::synapse0x25e3a50() {
   return (neuron0x25c5de0()*0.120466);
}

double NNfunction_sb_dRdR::synapse0x25e3a90() {
   return (neuron0x25c6120()*0.327673);
}

double NNfunction_sb_dRdR::synapse0x25e3ad0() {
   return (neuron0x25c6460()*-0.476106);
}

double NNfunction_sb_dRdR::synapse0x25e3b10() {
   return (neuron0x25c67a0()*-0.0252306);
}

double NNfunction_sb_dRdR::synapse0x25e3b50() {
   return (neuron0x25c6ae0()*-0.468229);
}

double NNfunction_sb_dRdR::synapse0x25e3ed0() {
   return (neuron0x25c1e90()*-0.0509975);
}

double NNfunction_sb_dRdR::synapse0x25e3f10() {
   return (neuron0x25c2140()*-0.158518);
}

double NNfunction_sb_dRdR::synapse0x25e3f50() {
   return (neuron0x25c2480()*0.0770755);
}

double NNfunction_sb_dRdR::synapse0x25e3f90() {
   return (neuron0x25c27c0()*-0.0519101);
}

double NNfunction_sb_dRdR::synapse0x25e3fd0() {
   return (neuron0x25c2b00()*0.119076);
}

double NNfunction_sb_dRdR::synapse0x25e4010() {
   return (neuron0x25c2e40()*0.138266);
}

double NNfunction_sb_dRdR::synapse0x25e4050() {
   return (neuron0x25c3180()*0.147617);
}

double NNfunction_sb_dRdR::synapse0x25e4090() {
   return (neuron0x25c34c0()*0.117458);
}

double NNfunction_sb_dRdR::synapse0x25e40d0() {
   return (neuron0x25c3800()*-0.0578744);
}

double NNfunction_sb_dRdR::synapse0x25e4110() {
   return (neuron0x25c3b40()*-0.01723);
}

double NNfunction_sb_dRdR::synapse0x25e4150() {
   return (neuron0x25c3e80()*0.0506669);
}

double NNfunction_sb_dRdR::synapse0x25e4190() {
   return (neuron0x25c41c0()*-0.0404469);
}

double NNfunction_sb_dRdR::synapse0x25e41d0() {
   return (neuron0x25c4500()*-0.0624894);
}

double NNfunction_sb_dRdR::synapse0x25e4210() {
   return (neuron0x25c4840()*-0.00789037);
}

double NNfunction_sb_dRdR::synapse0x25e4250() {
   return (neuron0x25c4b80()*0.0911674);
}

double NNfunction_sb_dRdR::synapse0x25e4290() {
   return (neuron0x25c4ec0()*0.00537742);
}

double NNfunction_sb_dRdR::synapse0x25e3d20() {
   return (neuron0x25c5200()*0.202089);
}

double NNfunction_sb_dRdR::synapse0x25e3d60() {
   return (neuron0x25c5760()*-0.647776);
}

double NNfunction_sb_dRdR::synapse0x25e43e0() {
   return (neuron0x25c5aa0()*-0.017926);
}

double NNfunction_sb_dRdR::synapse0x25e4420() {
   return (neuron0x25c5de0()*-0.0784267);
}

double NNfunction_sb_dRdR::synapse0x25e4460() {
   return (neuron0x25c6120()*-0.00227473);
}

double NNfunction_sb_dRdR::synapse0x25e44a0() {
   return (neuron0x25c6460()*-0.0476734);
}

double NNfunction_sb_dRdR::synapse0x25e44e0() {
   return (neuron0x25c67a0()*0.00177321);
}

double NNfunction_sb_dRdR::synapse0x25e4520() {
   return (neuron0x25c6ae0()*-0.0439277);
}

double NNfunction_sb_dRdR::synapse0x25ccfd0() {
   return (neuron0x25c1e90()*-0.091255);
}

double NNfunction_sb_dRdR::synapse0x25cd010() {
   return (neuron0x25c2140()*0.0233686);
}

double NNfunction_sb_dRdR::synapse0x25cd050() {
   return (neuron0x25c2480()*-0.0445075);
}

double NNfunction_sb_dRdR::synapse0x25cd090() {
   return (neuron0x25c27c0()*0.335706);
}

double NNfunction_sb_dRdR::synapse0x25cd0d0() {
   return (neuron0x25c2b00()*0.00503376);
}

double NNfunction_sb_dRdR::synapse0x25cd110() {
   return (neuron0x25c2e40()*0.0519176);
}

double NNfunction_sb_dRdR::synapse0x25cd150() {
   return (neuron0x25c3180()*0.0510342);
}

double NNfunction_sb_dRdR::synapse0x25cd190() {
   return (neuron0x25c34c0()*0.0296959);
}

double NNfunction_sb_dRdR::synapse0x25e4cb0() {
   return (neuron0x25c3800()*0.20863);
}

double NNfunction_sb_dRdR::synapse0x25e4cf0() {
   return (neuron0x25c3b40()*0.0592873);
}

double NNfunction_sb_dRdR::synapse0x25e4d30() {
   return (neuron0x25c3e80()*0.101806);
}

double NNfunction_sb_dRdR::synapse0x25e4d70() {
   return (neuron0x25c41c0()*-0.108038);
}

double NNfunction_sb_dRdR::synapse0x25e4db0() {
   return (neuron0x25c4500()*-0.0506208);
}

double NNfunction_sb_dRdR::synapse0x25e4df0() {
   return (neuron0x25c4840()*-0.101707);
}

double NNfunction_sb_dRdR::synapse0x25e4e30() {
   return (neuron0x25c4b80()*-0.0326673);
}

double NNfunction_sb_dRdR::synapse0x25e4e70() {
   return (neuron0x25c4ec0()*0.00463511);
}

double NNfunction_sb_dRdR::synapse0x25e46f0() {
   return (neuron0x25c5200()*-0.0261121);
}

double NNfunction_sb_dRdR::synapse0x25e4730() {
   return (neuron0x25c5760()*-3.00582);
}

double NNfunction_sb_dRdR::synapse0x25e4fc0() {
   return (neuron0x25c5aa0()*0.151224);
}

double NNfunction_sb_dRdR::synapse0x25e5000() {
   return (neuron0x25c5de0()*-0.0680663);
}

double NNfunction_sb_dRdR::synapse0x25e5040() {
   return (neuron0x25c6120()*-0.010879);
}

double NNfunction_sb_dRdR::synapse0x25e5080() {
   return (neuron0x25c6460()*0.0543936);
}

double NNfunction_sb_dRdR::synapse0x25e50c0() {
   return (neuron0x25c67a0()*-0.0246909);
}

double NNfunction_sb_dRdR::synapse0x25e5100() {
   return (neuron0x25c6ae0()*-0.164603);
}

double NNfunction_sb_dRdR::synapse0x25e5480() {
   return (neuron0x25c1e90()*0.137229);
}

double NNfunction_sb_dRdR::synapse0x25e54c0() {
   return (neuron0x25c2140()*0.0106737);
}

double NNfunction_sb_dRdR::synapse0x25e5500() {
   return (neuron0x25c2480()*0.0109882);
}

double NNfunction_sb_dRdR::synapse0x25e5540() {
   return (neuron0x25c27c0()*0.015289);
}

double NNfunction_sb_dRdR::synapse0x25e5580() {
   return (neuron0x25c2b00()*-0.0218343);
}

double NNfunction_sb_dRdR::synapse0x25e55c0() {
   return (neuron0x25c2e40()*-0.0293265);
}

double NNfunction_sb_dRdR::synapse0x25e5600() {
   return (neuron0x25c3180()*-0.0361926);
}

double NNfunction_sb_dRdR::synapse0x25e5640() {
   return (neuron0x25c34c0()*0.0380929);
}

double NNfunction_sb_dRdR::synapse0x25e5680() {
   return (neuron0x25c3800()*-0.118593);
}

double NNfunction_sb_dRdR::synapse0x25e56c0() {
   return (neuron0x25c3b40()*-0.0329592);
}

double NNfunction_sb_dRdR::synapse0x25e5700() {
   return (neuron0x25c3e80()*-0.0525519);
}

double NNfunction_sb_dRdR::synapse0x25e5740() {
   return (neuron0x25c41c0()*-0.0581257);
}

double NNfunction_sb_dRdR::synapse0x25e5780() {
   return (neuron0x25c4500()*-0.00900937);
}

double NNfunction_sb_dRdR::synapse0x25e57c0() {
   return (neuron0x25c4840()*0.0407332);
}

double NNfunction_sb_dRdR::synapse0x25e5800() {
   return (neuron0x25c4b80()*0.00588245);
}

double NNfunction_sb_dRdR::synapse0x25e5840() {
   return (neuron0x25c4ec0()*-0.0510328);
}

double NNfunction_sb_dRdR::synapse0x25e52d0() {
   return (neuron0x25c5200()*-0.0199966);
}

double NNfunction_sb_dRdR::synapse0x25e5310() {
   return (neuron0x25c5760()*1.07623);
}

double NNfunction_sb_dRdR::synapse0x25e5990() {
   return (neuron0x25c5aa0()*-0.00701485);
}

double NNfunction_sb_dRdR::synapse0x25e59d0() {
   return (neuron0x25c5de0()*-0.00937792);
}

double NNfunction_sb_dRdR::synapse0x25e5a10() {
   return (neuron0x25c6120()*0.0157506);
}

double NNfunction_sb_dRdR::synapse0x25e5a50() {
   return (neuron0x25c6460()*0.027548);
}

double NNfunction_sb_dRdR::synapse0x25e5a90() {
   return (neuron0x25c67a0()*0.00330402);
}

double NNfunction_sb_dRdR::synapse0x25e5ad0() {
   return (neuron0x25c6ae0()*0.0744434);
}

double NNfunction_sb_dRdR::synapse0x25e5e50() {
   return (neuron0x25c1e90()*-0.00123933);
}

double NNfunction_sb_dRdR::synapse0x25e5e90() {
   return (neuron0x25c2140()*-0.0291568);
}

double NNfunction_sb_dRdR::synapse0x25e5ed0() {
   return (neuron0x25c2480()*-0.00975495);
}

double NNfunction_sb_dRdR::synapse0x25e5f10() {
   return (neuron0x25c27c0()*3.13128);
}

double NNfunction_sb_dRdR::synapse0x25e5f50() {
   return (neuron0x25c2b00()*0.00638242);
}

double NNfunction_sb_dRdR::synapse0x25e5f90() {
   return (neuron0x25c2e40()*0.0037346);
}

double NNfunction_sb_dRdR::synapse0x25e5fd0() {
   return (neuron0x25c3180()*-0.000621692);
}

double NNfunction_sb_dRdR::synapse0x25e6010() {
   return (neuron0x25c34c0()*0.00285325);
}

double NNfunction_sb_dRdR::synapse0x25e6050() {
   return (neuron0x25c3800()*-0.000245723);
}

double NNfunction_sb_dRdR::synapse0x25e6090() {
   return (neuron0x25c3b40()*0.011585);
}

double NNfunction_sb_dRdR::synapse0x25e60d0() {
   return (neuron0x25c3e80()*0.0112989);
}

double NNfunction_sb_dRdR::synapse0x25e6110() {
   return (neuron0x25c41c0()*0.00324435);
}

double NNfunction_sb_dRdR::synapse0x25e6150() {
   return (neuron0x25c4500()*0.00848614);
}

double NNfunction_sb_dRdR::synapse0x25e6190() {
   return (neuron0x25c4840()*0.0060108);
}

double NNfunction_sb_dRdR::synapse0x25e61d0() {
   return (neuron0x25c4b80()*0.00304605);
}

double NNfunction_sb_dRdR::synapse0x25e6210() {
   return (neuron0x25c4ec0()*0.00702987);
}

double NNfunction_sb_dRdR::synapse0x25e5ca0() {
   return (neuron0x25c5200()*-0.0109232);
}

double NNfunction_sb_dRdR::synapse0x25e5ce0() {
   return (neuron0x25c5760()*0.0614765);
}

double NNfunction_sb_dRdR::synapse0x25d6810() {
   return (neuron0x25c5aa0()*-0.00518048);
}

double NNfunction_sb_dRdR::synapse0x25d6850() {
   return (neuron0x25c5de0()*0.013182);
}

double NNfunction_sb_dRdR::synapse0x25d6890() {
   return (neuron0x25c6120()*-0.00452855);
}

double NNfunction_sb_dRdR::synapse0x25d68d0() {
   return (neuron0x25c6460()*0.00440895);
}

double NNfunction_sb_dRdR::synapse0x25d6910() {
   return (neuron0x25c67a0()*-0.00329148);
}

double NNfunction_sb_dRdR::synapse0x25d6950() {
   return (neuron0x25c6ae0()*-0.0025437);
}

double NNfunction_sb_dRdR::synapse0x25d6cd0() {
   return (neuron0x25c1e90()*-0.00467722);
}

double NNfunction_sb_dRdR::synapse0x25d6d10() {
   return (neuron0x25c2140()*0.0944222);
}

double NNfunction_sb_dRdR::synapse0x25d6d50() {
   return (neuron0x25c2480()*0.0424465);
}

double NNfunction_sb_dRdR::synapse0x25d6d90() {
   return (neuron0x25c27c0()*0.286992);
}

double NNfunction_sb_dRdR::synapse0x25d6dd0() {
   return (neuron0x25c2b00()*-0.156772);
}

double NNfunction_sb_dRdR::synapse0x25d6e10() {
   return (neuron0x25c2e40()*-0.189448);
}

double NNfunction_sb_dRdR::synapse0x25d6e50() {
   return (neuron0x25c3180()*-0.0999515);
}

double NNfunction_sb_dRdR::synapse0x25d6e90() {
   return (neuron0x25c34c0()*-0.211096);
}

double NNfunction_sb_dRdR::synapse0x25d6ed0() {
   return (neuron0x25c3800()*-0.0492013);
}

double NNfunction_sb_dRdR::synapse0x25d6f10() {
   return (neuron0x25c3b40()*0.0316432);
}

double NNfunction_sb_dRdR::synapse0x25d6f50() {
   return (neuron0x25c3e80()*0.0353081);
}

double NNfunction_sb_dRdR::synapse0x25d6f90() {
   return (neuron0x25c41c0()*0.0130145);
}

double NNfunction_sb_dRdR::synapse0x25d6fd0() {
   return (neuron0x25c4500()*-0.0994204);
}

double NNfunction_sb_dRdR::synapse0x25d7010() {
   return (neuron0x25c4840()*0.0539201);
}

double NNfunction_sb_dRdR::synapse0x25d7050() {
   return (neuron0x25c4b80()*0.638368);
}

double NNfunction_sb_dRdR::synapse0x25d7090() {
   return (neuron0x25c4ec0()*-0.217629);
}

double NNfunction_sb_dRdR::synapse0x25d6b20() {
   return (neuron0x25c5200()*-0.0888301);
}

double NNfunction_sb_dRdR::synapse0x25d6b60() {
   return (neuron0x25c5760()*-0.952328);
}

double NNfunction_sb_dRdR::synapse0x25d71e0() {
   return (neuron0x25c5aa0()*-0.00259807);
}

double NNfunction_sb_dRdR::synapse0x25d7220() {
   return (neuron0x25c5de0()*0.062693);
}

double NNfunction_sb_dRdR::synapse0x25d7260() {
   return (neuron0x25c6120()*-6.67844e-05);
}

double NNfunction_sb_dRdR::synapse0x25d72a0() {
   return (neuron0x25c6460()*-0.0887208);
}

double NNfunction_sb_dRdR::synapse0x25d72e0() {
   return (neuron0x25c67a0()*-0.0387455);
}

double NNfunction_sb_dRdR::synapse0x25d7320() {
   return (neuron0x25c6ae0()*-0.0186366);
}

double NNfunction_sb_dRdR::synapse0x25d76a0() {
   return (neuron0x25c1e90()*-0.244393);
}

double NNfunction_sb_dRdR::synapse0x25d76e0() {
   return (neuron0x25c2140()*-0.373816);
}

double NNfunction_sb_dRdR::synapse0x25d7720() {
   return (neuron0x25c2480()*0.378585);
}

double NNfunction_sb_dRdR::synapse0x25d7760() {
   return (neuron0x25c27c0()*-0.63031);
}

double NNfunction_sb_dRdR::synapse0x25d77a0() {
   return (neuron0x25c2b00()*0.722804);
}

double NNfunction_sb_dRdR::synapse0x25d77e0() {
   return (neuron0x25c2e40()*0.0679351);
}

double NNfunction_sb_dRdR::synapse0x25d7820() {
   return (neuron0x25c3180()*0.10205);
}

double NNfunction_sb_dRdR::synapse0x25d7860() {
   return (neuron0x25c34c0()*0.3567);
}

double NNfunction_sb_dRdR::synapse0x25d78a0() {
   return (neuron0x25c3800()*0.42696);
}

double NNfunction_sb_dRdR::synapse0x25d78e0() {
   return (neuron0x25c3b40()*-0.32896);
}

double NNfunction_sb_dRdR::synapse0x25d7920() {
   return (neuron0x25c3e80()*-0.493436);
}

double NNfunction_sb_dRdR::synapse0x25d7960() {
   return (neuron0x25c41c0()*-0.346403);
}

double NNfunction_sb_dRdR::synapse0x25d79a0() {
   return (neuron0x25c4500()*0.195738);
}

double NNfunction_sb_dRdR::synapse0x25d79e0() {
   return (neuron0x25c4840()*0.871212);
}

double NNfunction_sb_dRdR::synapse0x25d7a20() {
   return (neuron0x25c4b80()*0.196784);
}

double NNfunction_sb_dRdR::synapse0x25d7a60() {
   return (neuron0x25c4ec0()*1.21396);
}

double NNfunction_sb_dRdR::synapse0x25d74f0() {
   return (neuron0x25c5200()*-0.487914);
}

double NNfunction_sb_dRdR::synapse0x25d7530() {
   return (neuron0x25c5760()*0.243852);
}

double NNfunction_sb_dRdR::synapse0x25d7bb0() {
   return (neuron0x25c5aa0()*-0.290383);
}

double NNfunction_sb_dRdR::synapse0x25d7bf0() {
   return (neuron0x25c5de0()*-0.597308);
}

double NNfunction_sb_dRdR::synapse0x25d7c30() {
   return (neuron0x25c6120()*-0.414356);
}

double NNfunction_sb_dRdR::synapse0x25d7c70() {
   return (neuron0x25c6460()*-0.00597031);
}

double NNfunction_sb_dRdR::synapse0x25d7cb0() {
   return (neuron0x25c67a0()*-0.54561);
}

double NNfunction_sb_dRdR::synapse0x25d7cf0() {
   return (neuron0x25c6ae0()*0.053901);
}

double NNfunction_sb_dRdR::synapse0x25d8070() {
   return (neuron0x25c1e90()*-0.0755266);
}

double NNfunction_sb_dRdR::synapse0x25d80b0() {
   return (neuron0x25c2140()*-0.0224013);
}

double NNfunction_sb_dRdR::synapse0x25d80f0() {
   return (neuron0x25c2480()*-0.0881835);
}

double NNfunction_sb_dRdR::synapse0x25d8130() {
   return (neuron0x25c27c0()*0.262393);
}

double NNfunction_sb_dRdR::synapse0x25d8170() {
   return (neuron0x25c2b00()*-0.047975);
}

double NNfunction_sb_dRdR::synapse0x25d81b0() {
   return (neuron0x25c2e40()*0.108905);
}

double NNfunction_sb_dRdR::synapse0x25d81f0() {
   return (neuron0x25c3180()*-0.04153);
}

double NNfunction_sb_dRdR::synapse0x25d8230() {
   return (neuron0x25c34c0()*0.0146154);
}

double NNfunction_sb_dRdR::synapse0x25d8270() {
   return (neuron0x25c3800()*-0.0491403);
}

double NNfunction_sb_dRdR::synapse0x25d82b0() {
   return (neuron0x25c3b40()*0.0267218);
}

double NNfunction_sb_dRdR::synapse0x25d82f0() {
   return (neuron0x25c3e80()*-0.0498307);
}

double NNfunction_sb_dRdR::synapse0x25d8330() {
   return (neuron0x25c41c0()*0.0677268);
}

double NNfunction_sb_dRdR::synapse0x25d8370() {
   return (neuron0x25c4500()*0.197657);
}

double NNfunction_sb_dRdR::synapse0x25d83b0() {
   return (neuron0x25c4840()*-0.0982093);
}

double NNfunction_sb_dRdR::synapse0x25d83f0() {
   return (neuron0x25c4b80()*-0.197932);
}

double NNfunction_sb_dRdR::synapse0x25d8430() {
   return (neuron0x25c4ec0()*1.45575);
}

double NNfunction_sb_dRdR::synapse0x25d7ec0() {
   return (neuron0x25c5200()*-0.0519071);
}

double NNfunction_sb_dRdR::synapse0x25d7f00() {
   return (neuron0x25c5760()*-0.0962875);
}

double NNfunction_sb_dRdR::synapse0x25d8580() {
   return (neuron0x25c5aa0()*-0.0672576);
}

double NNfunction_sb_dRdR::synapse0x25d85c0() {
   return (neuron0x25c5de0()*0.0590418);
}

double NNfunction_sb_dRdR::synapse0x25d8600() {
   return (neuron0x25c6120()*-0.167062);
}

double NNfunction_sb_dRdR::synapse0x25d8640() {
   return (neuron0x25c6460()*0.0432051);
}

double NNfunction_sb_dRdR::synapse0x25d8680() {
   return (neuron0x25c67a0()*-0.00868054);
}

double NNfunction_sb_dRdR::synapse0x25d86c0() {
   return (neuron0x25c6ae0()*-0.120971);
}

double NNfunction_sb_dRdR::synapse0x25ea590() {
   return (neuron0x25c1e90()*-0.218904);
}

double NNfunction_sb_dRdR::synapse0x25ea5d0() {
   return (neuron0x25c2140()*-0.748471);
}

double NNfunction_sb_dRdR::synapse0x25ea610() {
   return (neuron0x25c2480()*0.54676);
}

double NNfunction_sb_dRdR::synapse0x25ea650() {
   return (neuron0x25c27c0()*-0.684951);
}

double NNfunction_sb_dRdR::synapse0x25ea690() {
   return (neuron0x25c2b00()*0.593743);
}

double NNfunction_sb_dRdR::synapse0x25ea6d0() {
   return (neuron0x25c2e40()*0.0125307);
}

double NNfunction_sb_dRdR::synapse0x25ea710() {
   return (neuron0x25c3180()*-0.0736516);
}

double NNfunction_sb_dRdR::synapse0x25ea750() {
   return (neuron0x25c34c0()*0.273447);
}

double NNfunction_sb_dRdR::synapse0x25ea790() {
   return (neuron0x25c3800()*0.0407096);
}

double NNfunction_sb_dRdR::synapse0x25ea7d0() {
   return (neuron0x25c3b40()*0.168582);
}

double NNfunction_sb_dRdR::synapse0x25ea810() {
   return (neuron0x25c3e80()*0.402106);
}

double NNfunction_sb_dRdR::synapse0x25ea850() {
   return (neuron0x25c41c0()*-0.21554);
}

double NNfunction_sb_dRdR::synapse0x25ea890() {
   return (neuron0x25c4500()*0.8518);
}

double NNfunction_sb_dRdR::synapse0x25ea8d0() {
   return (neuron0x25c4840()*-0.513191);
}

double NNfunction_sb_dRdR::synapse0x25ea910() {
   return (neuron0x25c4b80()*0.146794);
}

double NNfunction_sb_dRdR::synapse0x25ea950() {
   return (neuron0x25c4ec0()*-0.246497);
}

double NNfunction_sb_dRdR::synapse0x25d8700() {
   return (neuron0x25c5200()*0.579423);
}

double NNfunction_sb_dRdR::synapse0x25d8740() {
   return (neuron0x25c5760()*-0.191812);
}

double NNfunction_sb_dRdR::synapse0x25eaaa0() {
   return (neuron0x25c5aa0()*-0.271956);
}

double NNfunction_sb_dRdR::synapse0x25eaae0() {
   return (neuron0x25c5de0()*-0.251601);
}

double NNfunction_sb_dRdR::synapse0x25eab20() {
   return (neuron0x25c6120()*0.145024);
}

double NNfunction_sb_dRdR::synapse0x25eab60() {
   return (neuron0x25c6460()*0.0491878);
}

double NNfunction_sb_dRdR::synapse0x25eaba0() {
   return (neuron0x25c67a0()*-0.282502);
}

double NNfunction_sb_dRdR::synapse0x25eabe0() {
   return (neuron0x25c6ae0()*-0.376102);
}

double NNfunction_sb_dRdR::synapse0x25eaf60() {
   return (neuron0x25c1e90()*0.0641572);
}

double NNfunction_sb_dRdR::synapse0x25eafa0() {
   return (neuron0x25c2140()*0.0856229);
}

double NNfunction_sb_dRdR::synapse0x25eafe0() {
   return (neuron0x25c2480()*0.158578);
}

double NNfunction_sb_dRdR::synapse0x25eb020() {
   return (neuron0x25c27c0()*-0.197493);
}

double NNfunction_sb_dRdR::synapse0x25eb060() {
   return (neuron0x25c2b00()*-0.262972);
}

double NNfunction_sb_dRdR::synapse0x25eb0a0() {
   return (neuron0x25c2e40()*-0.17279);
}

double NNfunction_sb_dRdR::synapse0x25eb0e0() {
   return (neuron0x25c3180()*0.135498);
}

double NNfunction_sb_dRdR::synapse0x25eb120() {
   return (neuron0x25c34c0()*-0.103837);
}

double NNfunction_sb_dRdR::synapse0x25eb160() {
   return (neuron0x25c3800()*-0.417603);
}

double NNfunction_sb_dRdR::synapse0x25eb1a0() {
   return (neuron0x25c3b40()*-0.109619);
}

double NNfunction_sb_dRdR::synapse0x25eb1e0() {
   return (neuron0x25c3e80()*0.110331);
}

double NNfunction_sb_dRdR::synapse0x25eb220() {
   return (neuron0x25c41c0()*0.25979);
}

double NNfunction_sb_dRdR::synapse0x25eb260() {
   return (neuron0x25c4500()*-0.546753);
}

double NNfunction_sb_dRdR::synapse0x25eb2a0() {
   return (neuron0x25c4840()*-0.778892);
}

double NNfunction_sb_dRdR::synapse0x25eb2e0() {
   return (neuron0x25c4b80()*-0.171413);
}

double NNfunction_sb_dRdR::synapse0x25eb320() {
   return (neuron0x25c4ec0()*-0.325876);
}

double NNfunction_sb_dRdR::synapse0x25eadb0() {
   return (neuron0x25c5200()*-0.11583);
}

double NNfunction_sb_dRdR::synapse0x25eadf0() {
   return (neuron0x25c5760()*0.480205);
}

double NNfunction_sb_dRdR::synapse0x25eb470() {
   return (neuron0x25c5aa0()*0.231127);
}

double NNfunction_sb_dRdR::synapse0x25eb4b0() {
   return (neuron0x25c5de0()*-1.0487);
}

double NNfunction_sb_dRdR::synapse0x25eb4f0() {
   return (neuron0x25c6120()*0.306453);
}

double NNfunction_sb_dRdR::synapse0x25eb530() {
   return (neuron0x25c6460()*0.112471);
}

double NNfunction_sb_dRdR::synapse0x25eb570() {
   return (neuron0x25c67a0()*0.026287);
}

double NNfunction_sb_dRdR::synapse0x25eb5b0() {
   return (neuron0x25c6ae0()*-0.00926257);
}

double NNfunction_sb_dRdR::synapse0x25eb930() {
   return (neuron0x25c1e90()*0.226117);
}

double NNfunction_sb_dRdR::synapse0x25eb970() {
   return (neuron0x25c2140()*0.0170597);
}

double NNfunction_sb_dRdR::synapse0x25eb9b0() {
   return (neuron0x25c2480()*0.0542674);
}

double NNfunction_sb_dRdR::synapse0x25eb9f0() {
   return (neuron0x25c27c0()*1.31478);
}

double NNfunction_sb_dRdR::synapse0x25eba30() {
   return (neuron0x25c2b00()*0.0180146);
}

double NNfunction_sb_dRdR::synapse0x25eba70() {
   return (neuron0x25c2e40()*0.111485);
}

double NNfunction_sb_dRdR::synapse0x25ebab0() {
   return (neuron0x25c3180()*-0.0855428);
}

double NNfunction_sb_dRdR::synapse0x25ebaf0() {
   return (neuron0x25c34c0()*0.232654);
}

double NNfunction_sb_dRdR::synapse0x25ebb30() {
   return (neuron0x25c3800()*-0.11404);
}

double NNfunction_sb_dRdR::synapse0x25ebb70() {
   return (neuron0x25c3b40()*-0.0388046);
}

double NNfunction_sb_dRdR::synapse0x25ebbb0() {
   return (neuron0x25c3e80()*-0.080276);
}

double NNfunction_sb_dRdR::synapse0x25ebbf0() {
   return (neuron0x25c41c0()*0.420936);
}

double NNfunction_sb_dRdR::synapse0x25ebc30() {
   return (neuron0x25c4500()*0.335258);
}

double NNfunction_sb_dRdR::synapse0x25ebc70() {
   return (neuron0x25c4840()*-0.283506);
}

double NNfunction_sb_dRdR::synapse0x25ebcb0() {
   return (neuron0x25c4b80()*0.118779);
}

double NNfunction_sb_dRdR::synapse0x25ebcf0() {
   return (neuron0x25c4ec0()*0.344969);
}

double NNfunction_sb_dRdR::synapse0x25eb780() {
   return (neuron0x25c5200()*-0.283223);
}

double NNfunction_sb_dRdR::synapse0x25eb7c0() {
   return (neuron0x25c5760()*-1.73812);
}

double NNfunction_sb_dRdR::synapse0x25ebe40() {
   return (neuron0x25c5aa0()*0.322533);
}

double NNfunction_sb_dRdR::synapse0x25ebe80() {
   return (neuron0x25c5de0()*0.258647);
}

double NNfunction_sb_dRdR::synapse0x25ebec0() {
   return (neuron0x25c6120()*0.168858);
}

double NNfunction_sb_dRdR::synapse0x25ebf00() {
   return (neuron0x25c6460()*0.190438);
}

double NNfunction_sb_dRdR::synapse0x25ebf40() {
   return (neuron0x25c67a0()*0.0304955);
}

double NNfunction_sb_dRdR::synapse0x25ebf80() {
   return (neuron0x25c6ae0()*-0.0606863);
}

double NNfunction_sb_dRdR::synapse0x25ec300() {
   return (neuron0x25c1e90()*-0.0242347);
}

double NNfunction_sb_dRdR::synapse0x25ec340() {
   return (neuron0x25c2140()*-0.0328749);
}

double NNfunction_sb_dRdR::synapse0x25ec380() {
   return (neuron0x25c2480()*0.0296028);
}

double NNfunction_sb_dRdR::synapse0x25ec3c0() {
   return (neuron0x25c27c0()*-5.5637);
}

double NNfunction_sb_dRdR::synapse0x25ec400() {
   return (neuron0x25c2b00()*0.0524693);
}

double NNfunction_sb_dRdR::synapse0x25ec440() {
   return (neuron0x25c2e40()*0.00752963);
}

double NNfunction_sb_dRdR::synapse0x25ec480() {
   return (neuron0x25c3180()*-0.0146403);
}

double NNfunction_sb_dRdR::synapse0x25ec4c0() {
   return (neuron0x25c34c0()*-0.0088597);
}

double NNfunction_sb_dRdR::synapse0x25ec500() {
   return (neuron0x25c3800()*0.0357347);
}

double NNfunction_sb_dRdR::synapse0x25ec540() {
   return (neuron0x25c3b40()*0.0109914);
}

double NNfunction_sb_dRdR::synapse0x25ec580() {
   return (neuron0x25c3e80()*0.108143);
}

double NNfunction_sb_dRdR::synapse0x25ec5c0() {
   return (neuron0x25c41c0()*0.00237604);
}

double NNfunction_sb_dRdR::synapse0x25ec600() {
   return (neuron0x25c4500()*0.0534702);
}

double NNfunction_sb_dRdR::synapse0x25ec640() {
   return (neuron0x25c4840()*0.153147);
}

double NNfunction_sb_dRdR::synapse0x25ec680() {
   return (neuron0x25c4b80()*0.0562996);
}

double NNfunction_sb_dRdR::synapse0x25ec6c0() {
   return (neuron0x25c4ec0()*0.00455237);
}

double NNfunction_sb_dRdR::synapse0x25ec150() {
   return (neuron0x25c5200()*0.030403);
}

double NNfunction_sb_dRdR::synapse0x25ec190() {
   return (neuron0x25c5760()*1.84966);
}

double NNfunction_sb_dRdR::synapse0x25ec810() {
   return (neuron0x25c5aa0()*-0.0121187);
}

double NNfunction_sb_dRdR::synapse0x25ec850() {
   return (neuron0x25c5de0()*0.00014853);
}

double NNfunction_sb_dRdR::synapse0x25ec890() {
   return (neuron0x25c6120()*0.0491867);
}

double NNfunction_sb_dRdR::synapse0x25ec8d0() {
   return (neuron0x25c6460()*-0.0457623);
}

double NNfunction_sb_dRdR::synapse0x25ec910() {
   return (neuron0x25c67a0()*-0.0159247);
}

double NNfunction_sb_dRdR::synapse0x25ec950() {
   return (neuron0x25c6ae0()*0.00707686);
}

double NNfunction_sb_dRdR::synapse0x238c770() {
   return (neuron0x25c6f50()*-0.0689211);
}

double NNfunction_sb_dRdR::synapse0x238c7b0() {
   return (neuron0x25c7790()*0.00291371);
}

double NNfunction_sb_dRdR::synapse0x25c9300() {
   return (neuron0x25c8270()*-0.471965);
}

double NNfunction_sb_dRdR::synapse0x25c9340() {
   return (neuron0x25c7d10()*0.608764);
}

double NNfunction_sb_dRdR::synapse0x25cadd0() {
   return (neuron0x25c9050()*-0.0756598);
}

double NNfunction_sb_dRdR::synapse0x25cae10() {
   return (neuron0x25cab20()*-0.345097);
}

double NNfunction_sb_dRdR::synapse0x25cbba0() {
   return (neuron0x25cb8f0()*0.13442);
}

double NNfunction_sb_dRdR::synapse0x25cbbe0() {
   return (neuron0x25cc2c0()*0.169201);
}

double NNfunction_sb_dRdR::synapse0x25cc570() {
   return (neuron0x25ccc90()*-0.458782);
}

double NNfunction_sb_dRdR::synapse0x25cc5b0() {
   return (neuron0x25cd770()*0.426674);
}

double NNfunction_sb_dRdR::synapse0x25ccf40() {
   return (neuron0x25ce140()*0.409694);
}

double NNfunction_sb_dRdR::synapse0x25ccf80() {
   return (neuron0x25cb220()*-0.557825);
}

double NNfunction_sb_dRdR::synapse0x25cda20() {
   return (neuron0x25cfcf0()*-0.417584);
}

double NNfunction_sb_dRdR::synapse0x25cda60() {
   return (neuron0x25d06c0()*0.408408);
}

double NNfunction_sb_dRdR::synapse0x25ce3f0() {
   return (neuron0x25d1090()*-0.895951);
}

double NNfunction_sb_dRdR::synapse0x25ce430() {
   return (neuron0x25d1a60()*0.636912);
}

double NNfunction_sb_dRdR::synapse0x25cb4d0() {
   return (neuron0x25d3870()*0.903699);
}

double NNfunction_sb_dRdR::synapse0x25cb510() {
   return (neuron0x25d3b50()*0.73889);
}

double NNfunction_sb_dRdR::synapse0x25cffa0() {
   return (neuron0x25d4520()*0.324755);
}

double NNfunction_sb_dRdR::synapse0x25cffe0() {
   return (neuron0x25d4ef0()*-0.172353);
}

double NNfunction_sb_dRdR::synapse0x25d0970() {
   return (neuron0x25d58c0()*0.451009);
}

double NNfunction_sb_dRdR::synapse0x25d09b0() {
   return (neuron0x25d6290()*-0.761892);
}

double NNfunction_sb_dRdR::synapse0x25d1340() {
   return (neuron0x25cede0()*0.0776915);
}

double NNfunction_sb_dRdR::synapse0x25d1380() {
   return (neuron0x25cf7b0()*0.67293);
}

double NNfunction_sb_dRdR::synapse0x25d1d10() {
   return (neuron0x25d9020()*-0.384489);
}

double NNfunction_sb_dRdR::synapse0x25d1d50() {
   return (neuron0x25d99f0()*0.334923);
}

double NNfunction_sb_dRdR::synapse0x25c4da0() {
   return (neuron0x25da3c0()*-0.237853);
}

double NNfunction_sb_dRdR::synapse0x25c4de0() {
   return (neuron0x25dad90()*-0.290537);
}

double NNfunction_sb_dRdR::synapse0x25d3e00() {
   return (neuron0x25db760()*-0.307457);
}

double NNfunction_sb_dRdR::synapse0x25d3e40() {
   return (neuron0x25dc130()*0.398314);
}

double NNfunction_sb_dRdR::synapse0x25d47d0() {
   return (neuron0x25dcb00()*0.199893);
}

double NNfunction_sb_dRdR::synapse0x25d4810() {
   return (neuron0x25dd4d0()*0.150524);
}

double NNfunction_sb_dRdR::synapse0x25d51a0() {
   return (neuron0x25d3560()*0.445907);
}

double NNfunction_sb_dRdR::synapse0x25d51e0() {
   return (neuron0x25e00b0()*0.244724);
}

double NNfunction_sb_dRdR::synapse0x25d5b70() {
   return (neuron0x25e0a80()*-0.00179056);
}

double NNfunction_sb_dRdR::synapse0x25d5bb0() {
   return (neuron0x25e1450()*0.00250864);
}

double NNfunction_sb_dRdR::synapse0x25d6540() {
   return (neuron0x25e1e20()*-0.434519);
}

double NNfunction_sb_dRdR::synapse0x25d6580() {
   return (neuron0x25e27f0()*0.462845);
}

double NNfunction_sb_dRdR::synapse0x25cf090() {
   return (neuron0x25e31c0()*0.224675);
}

double NNfunction_sb_dRdR::synapse0x25cf0d0() {
   return (neuron0x25e3b90()*-0.201563);
}

double NNfunction_sb_dRdR::synapse0x25d8940() {
   return (neuron0x25e4560()*-1.01323);
}

double NNfunction_sb_dRdR::synapse0x25d8980() {
   return (neuron0x25e5140()*0.764564);
}

double NNfunction_sb_dRdR::synapse0x25d92d0() {
   return (neuron0x25e5b10()*0.649196);
}

double NNfunction_sb_dRdR::synapse0x25d9310() {
   return (neuron0x25d6990()*-0.30918);
}

double NNfunction_sb_dRdR::synapse0x25d9ca0() {
   return (neuron0x25d7360()*0.696571);
}

double NNfunction_sb_dRdR::synapse0x25d9ce0() {
   return (neuron0x25d7d30()*-0.208594);
}

double NNfunction_sb_dRdR::synapse0x25da670() {
   return (neuron0x25ea370()*0.435079);
}

double NNfunction_sb_dRdR::synapse0x25da6b0() {
   return (neuron0x25eac20()*0.214106);
}

double NNfunction_sb_dRdR::synapse0x25db040() {
   return (neuron0x25eb5f0()*0.26181);
}

double NNfunction_sb_dRdR::synapse0x25db080() {
   return (neuron0x25ebfc0()*0.154123);
}

double NNfunction_sb_dRdR::synapse0x25dd780() {
   return (neuron0x25c6f50()*0.0161643);
}

double NNfunction_sb_dRdR::synapse0x25dd7c0() {
   return (neuron0x25c7790()*-0.908328);
}

double NNfunction_sb_dRdR::synapse0x25d2d40() {
   return (neuron0x25c8270()*0.13872);
}

double NNfunction_sb_dRdR::synapse0x25d2d80() {
   return (neuron0x25c7d10()*0.0093036);
}

double NNfunction_sb_dRdR::synapse0x25e0360() {
   return (neuron0x25c9050()*0.552774);
}

double NNfunction_sb_dRdR::synapse0x25e03a0() {
   return (neuron0x25cab20()*-0.128027);
}

double NNfunction_sb_dRdR::synapse0x25e0d30() {
   return (neuron0x25cb8f0()*0.00955339);
}

double NNfunction_sb_dRdR::synapse0x25e0d70() {
   return (neuron0x25cc2c0()*-0.0255926);
}

double NNfunction_sb_dRdR::synapse0x25e1700() {
   return (neuron0x25ccc90()*-0.0341474);
}

double NNfunction_sb_dRdR::synapse0x25e1740() {
   return (neuron0x25cd770()*-0.884714);
}

double NNfunction_sb_dRdR::synapse0x25e20d0() {
   return (neuron0x25ce140()*-1.47002);
}

double NNfunction_sb_dRdR::synapse0x25e2110() {
   return (neuron0x25cb220()*-0.0519832);
}

double NNfunction_sb_dRdR::synapse0x25e2aa0() {
   return (neuron0x25cfcf0()*-0.0830744);
}

double NNfunction_sb_dRdR::synapse0x25e2ae0() {
   return (neuron0x25d06c0()*-0.00958257);
}

double NNfunction_sb_dRdR::synapse0x25e3470() {
   return (neuron0x25d1090()*0.0574251);
}

double NNfunction_sb_dRdR::synapse0x25e34b0() {
   return (neuron0x25d1a60()*-0.0313312);
}

double NNfunction_sb_dRdR::synapse0x25e3e40() {
   return (neuron0x25d3870()*0.289976);
}

double NNfunction_sb_dRdR::synapse0x25e3e80() {
   return (neuron0x25d3b50()*-0.537655);
}

double NNfunction_sb_dRdR::synapse0x25e4810() {
   return (neuron0x25d4520()*0.0424226);
}

double NNfunction_sb_dRdR::synapse0x25e4850() {
   return (neuron0x25d4ef0()*0.480052);
}

double NNfunction_sb_dRdR::synapse0x25e53f0() {
   return (neuron0x25d58c0()*-0.423791);
}

double NNfunction_sb_dRdR::synapse0x25e5430() {
   return (neuron0x25d6290()*-0.229969);
}

double NNfunction_sb_dRdR::synapse0x25e5dc0() {
   return (neuron0x25cede0()*-0.0202254);
}

double NNfunction_sb_dRdR::synapse0x25e5e00() {
   return (neuron0x25cf7b0()*0.0649689);
}

double NNfunction_sb_dRdR::synapse0x25d6c40() {
   return (neuron0x25d9020()*0.993008);
}

double NNfunction_sb_dRdR::synapse0x25d6c80() {
   return (neuron0x25d99f0()*-0.0337773);
}

double NNfunction_sb_dRdR::synapse0x25d7610() {
   return (neuron0x25da3c0()*-0.132552);
}

double NNfunction_sb_dRdR::synapse0x25d7650() {
   return (neuron0x25dad90()*-0.000571764);
}

double NNfunction_sb_dRdR::synapse0x25d7fe0() {
   return (neuron0x25db760()*-0.0162567);
}

double NNfunction_sb_dRdR::synapse0x25d8020() {
   return (neuron0x25dc130()*-0.0071831);
}

double NNfunction_sb_dRdR::synapse0x25ea500() {
   return (neuron0x25dcb00()*0.482027);
}

double NNfunction_sb_dRdR::synapse0x25ea540() {
   return (neuron0x25dd4d0()*0.00605124);
}

double NNfunction_sb_dRdR::synapse0x25eaed0() {
   return (neuron0x25d3560()*-0.0456793);
}

double NNfunction_sb_dRdR::synapse0x25eaf10() {
   return (neuron0x25e00b0()*0.00165957);
}

double NNfunction_sb_dRdR::synapse0x25eb8a0() {
   return (neuron0x25e0a80()*0.0538544);
}

double NNfunction_sb_dRdR::synapse0x25eb8e0() {
   return (neuron0x25e1450()*-0.68712);
}

double NNfunction_sb_dRdR::synapse0x25ec270() {
   return (neuron0x25e1e20()*1.67223);
}

double NNfunction_sb_dRdR::synapse0x25ec2b0() {
   return (neuron0x25e27f0()*0.0245072);
}

double NNfunction_sb_dRdR::synapse0x25c7200() {
   return (neuron0x25e31c0()*0.0242715);
}

double NNfunction_sb_dRdR::synapse0x25c7240() {
   return (neuron0x25e3b90()*-0.780544);
}

double NNfunction_sb_dRdR::synapse0x25dba10() {
   return (neuron0x25e4560()*-0.232594);
}

double NNfunction_sb_dRdR::synapse0x25dba50() {
   return (neuron0x25e5140()*-0.750127);
}

double NNfunction_sb_dRdR::synapse0x25ec990() {
   return (neuron0x25e5b10()*-0.820271);
}

double NNfunction_sb_dRdR::synapse0x25ec9d0() {
   return (neuron0x25d6990()*-0.187343);
}

double NNfunction_sb_dRdR::synapse0x25eca10() {
   return (neuron0x25d7360()*0.0504907);
}

double NNfunction_sb_dRdR::synapse0x25eca50() {
   return (neuron0x25d7d30()*-0.102329);
}

double NNfunction_sb_dRdR::synapse0x25f3900() {
   return (neuron0x25ea370()*0.043963);
}

double NNfunction_sb_dRdR::synapse0x25f3940() {
   return (neuron0x25eac20()*-0.04093);
}

double NNfunction_sb_dRdR::synapse0x25f3980() {
   return (neuron0x25eb5f0()*-0.0165513);
}

double NNfunction_sb_dRdR::synapse0x25f39c0() {
   return (neuron0x25ebfc0()*-0.0769008);
}

double NNfunction_sb_dRdR::synapse0x25f3d40() {
   return (neuron0x25c6f50()*0.0138705);
}

double NNfunction_sb_dRdR::synapse0x25f3d80() {
   return (neuron0x25c7790()*-0.413286);
}

double NNfunction_sb_dRdR::synapse0x25f3dc0() {
   return (neuron0x25c8270()*0.0717852);
}

double NNfunction_sb_dRdR::synapse0x25f3e00() {
   return (neuron0x25c7d10()*0.0139938);
}

double NNfunction_sb_dRdR::synapse0x25f3e40() {
   return (neuron0x25c9050()*-0.76911);
}

double NNfunction_sb_dRdR::synapse0x25f3e80() {
   return (neuron0x25cab20()*-0.505647);
}

double NNfunction_sb_dRdR::synapse0x25f3ec0() {
   return (neuron0x25cb8f0()*0.0196533);
}

double NNfunction_sb_dRdR::synapse0x25f3f00() {
   return (neuron0x25cc2c0()*-0.0286919);
}

double NNfunction_sb_dRdR::synapse0x25f3f40() {
   return (neuron0x25ccc90()*-0.0069989);
}

double NNfunction_sb_dRdR::synapse0x25f3f80() {
   return (neuron0x25cd770()*0.766223);
}

double NNfunction_sb_dRdR::synapse0x25f3fc0() {
   return (neuron0x25ce140()*0.367026);
}

double NNfunction_sb_dRdR::synapse0x25f4000() {
   return (neuron0x25cb220()*-0.00480756);
}

double NNfunction_sb_dRdR::synapse0x25f4040() {
   return (neuron0x25cfcf0()*-0.0165924);
}

double NNfunction_sb_dRdR::synapse0x25f4080() {
   return (neuron0x25d06c0()*-0.0142056);
}

double NNfunction_sb_dRdR::synapse0x25f40c0() {
   return (neuron0x25d1090()*0.0461861);
}

double NNfunction_sb_dRdR::synapse0x25f4100() {
   return (neuron0x25d1a60()*-0.000297894);
}

double NNfunction_sb_dRdR::synapse0x25f3b90() {
   return (neuron0x25d3870()*0.178925);
}

double NNfunction_sb_dRdR::synapse0x25f3bd0() {
   return (neuron0x25d3b50()*0.512612);
}

double NNfunction_sb_dRdR::synapse0x25f4250() {
   return (neuron0x25d4520()*0.0228264);
}

double NNfunction_sb_dRdR::synapse0x25f4290() {
   return (neuron0x25d4ef0()*0.327725);
}

double NNfunction_sb_dRdR::synapse0x25f42d0() {
   return (neuron0x25d58c0()*-0.0198083);
}

double NNfunction_sb_dRdR::synapse0x25f4310() {
   return (neuron0x25d6290()*-0.0580401);
}

double NNfunction_sb_dRdR::synapse0x25f4350() {
   return (neuron0x25cede0()*3.1696e-05);
}

double NNfunction_sb_dRdR::synapse0x25f4390() {
   return (neuron0x25cf7b0()*0.0299754);
}

double NNfunction_sb_dRdR::synapse0x25f43d0() {
   return (neuron0x25d9020()*-1.43446);
}

double NNfunction_sb_dRdR::synapse0x25f4410() {
   return (neuron0x25d99f0()*-0.0101607);
}

double NNfunction_sb_dRdR::synapse0x25f4450() {
   return (neuron0x25da3c0()*-0.0304145);
}

double NNfunction_sb_dRdR::synapse0x25f4490() {
   return (neuron0x25dad90()*-0.00153297);
}

double NNfunction_sb_dRdR::synapse0x25f44d0() {
   return (neuron0x25db760()*-0.0103563);
}

double NNfunction_sb_dRdR::synapse0x25f4510() {
   return (neuron0x25dc130()*0.00236669);
}

double NNfunction_sb_dRdR::synapse0x25f4550() {
   return (neuron0x25dcb00()*-0.0995477);
}

double NNfunction_sb_dRdR::synapse0x25f4590() {
   return (neuron0x25dd4d0()*0.00025352);
}

double NNfunction_sb_dRdR::synapse0x25f4140() {
   return (neuron0x25d3560()*-0.0347282);
}

double NNfunction_sb_dRdR::synapse0x25f4180() {
   return (neuron0x25e00b0()*-0.00535259);
}

double NNfunction_sb_dRdR::synapse0x25f41c0() {
   return (neuron0x25e0a80()*0.0342539);
}

double NNfunction_sb_dRdR::synapse0x25f4200() {
   return (neuron0x25e1450()*-0.437283);
}

double NNfunction_sb_dRdR::synapse0x25f47e0() {
   return (neuron0x25e1e20()*-1.37896);
}

double NNfunction_sb_dRdR::synapse0x25f4820() {
   return (neuron0x25e27f0()*0.0176466);
}

double NNfunction_sb_dRdR::synapse0x25f4860() {
   return (neuron0x25e31c0()*0.0215029);
}

double NNfunction_sb_dRdR::synapse0x25f48a0() {
   return (neuron0x25e3b90()*-0.254586);
}

double NNfunction_sb_dRdR::synapse0x25f48e0() {
   return (neuron0x25e4560()*-0.602431);
}

double NNfunction_sb_dRdR::synapse0x25f4920() {
   return (neuron0x25e5140()*1.3162);
}

double NNfunction_sb_dRdR::synapse0x25f4960() {
   return (neuron0x25e5b10()*0.348184);
}

double NNfunction_sb_dRdR::synapse0x25f49a0() {
   return (neuron0x25d6990()*-0.0920553);
}

double NNfunction_sb_dRdR::synapse0x25f49e0() {
   return (neuron0x25d7360()*0.0307518);
}

double NNfunction_sb_dRdR::synapse0x25f4a20() {
   return (neuron0x25d7d30()*-0.0359886);
}

double NNfunction_sb_dRdR::synapse0x25f4a60() {
   return (neuron0x25ea370()*0.0191901);
}

double NNfunction_sb_dRdR::synapse0x25f4aa0() {
   return (neuron0x25eac20()*-0.010799);
}

double NNfunction_sb_dRdR::synapse0x25f4ae0() {
   return (neuron0x25eb5f0()*-0.0289371);
}

double NNfunction_sb_dRdR::synapse0x25f4b20() {
   return (neuron0x25ebfc0()*-0.0390335);
}

double NNfunction_sb_dRdR::synapse0x25f4ea0() {
   return (neuron0x25c6f50()*0.321015);
}

double NNfunction_sb_dRdR::synapse0x25f4ee0() {
   return (neuron0x25c7790()*4.98657);
}

double NNfunction_sb_dRdR::synapse0x25f4f20() {
   return (neuron0x25c8270()*-1.47951);
}

double NNfunction_sb_dRdR::synapse0x25f4f60() {
   return (neuron0x25c7d10()*0.540163);
}

double NNfunction_sb_dRdR::synapse0x25f4fa0() {
   return (neuron0x25c9050()*-1.21817);
}

double NNfunction_sb_dRdR::synapse0x25f4fe0() {
   return (neuron0x25cab20()*-2.3338);
}

double NNfunction_sb_dRdR::synapse0x25f5020() {
   return (neuron0x25cb8f0()*-0.351395);
}

double NNfunction_sb_dRdR::synapse0x25f5060() {
   return (neuron0x25cc2c0()*0.55885);
}

double NNfunction_sb_dRdR::synapse0x25f50a0() {
   return (neuron0x25ccc90()*-0.615162);
}

double NNfunction_sb_dRdR::synapse0x25f50e0() {
   return (neuron0x25cd770()*-0.768774);
}

double NNfunction_sb_dRdR::synapse0x25f5120() {
   return (neuron0x25ce140()*4.84653);
}

double NNfunction_sb_dRdR::synapse0x25f5160() {
   return (neuron0x25cb220()*-1.20344);
}

double NNfunction_sb_dRdR::synapse0x25f51a0() {
   return (neuron0x25cfcf0()*0.633024);
}

double NNfunction_sb_dRdR::synapse0x25f51e0() {
   return (neuron0x25d06c0()*-0.303222);
}

double NNfunction_sb_dRdR::synapse0x25f5220() {
   return (neuron0x25d1090()*-1.0341);
}

double NNfunction_sb_dRdR::synapse0x25f5260() {
   return (neuron0x25d1a60()*0.854199);
}

double NNfunction_sb_dRdR::synapse0x25f4cf0() {
   return (neuron0x25d3870()*-1.81903);
}

double NNfunction_sb_dRdR::synapse0x25f4d30() {
   return (neuron0x25d3b50()*0.602467);
}

double NNfunction_sb_dRdR::synapse0x25f53b0() {
   return (neuron0x25d4520()*0.461955);
}

double NNfunction_sb_dRdR::synapse0x25f53f0() {
   return (neuron0x25d4ef0()*-1.19223);
}

double NNfunction_sb_dRdR::synapse0x25f5430() {
   return (neuron0x25d58c0()*0.423703);
}

double NNfunction_sb_dRdR::synapse0x25f5470() {
   return (neuron0x25d6290()*3.06658);
}

double NNfunction_sb_dRdR::synapse0x25f54b0() {
   return (neuron0x25cede0()*-0.697603);
}

double NNfunction_sb_dRdR::synapse0x25f54f0() {
   return (neuron0x25cf7b0()*0.398432);
}

double NNfunction_sb_dRdR::synapse0x25f5530() {
   return (neuron0x25d9020()*-3.18892);
}

double NNfunction_sb_dRdR::synapse0x25f5570() {
   return (neuron0x25d99f0()*0.659242);
}

double NNfunction_sb_dRdR::synapse0x25f55b0() {
   return (neuron0x25da3c0()*1.65188);
}

double NNfunction_sb_dRdR::synapse0x25f55f0() {
   return (neuron0x25dad90()*0.249514);
}

double NNfunction_sb_dRdR::synapse0x25f5630() {
   return (neuron0x25db760()*0.301434);
}

double NNfunction_sb_dRdR::synapse0x25f5670() {
   return (neuron0x25dc130()*0.337616);
}

double NNfunction_sb_dRdR::synapse0x25f56b0() {
   return (neuron0x25dcb00()*-2.85465);
}

double NNfunction_sb_dRdR::synapse0x25f56f0() {
   return (neuron0x25dd4d0()*-0.357896);
}

double NNfunction_sb_dRdR::synapse0x25f52a0() {
   return (neuron0x25d3560()*1.05942);
}

double NNfunction_sb_dRdR::synapse0x25f52e0() {
   return (neuron0x25e00b0()*0.00163554);
}

double NNfunction_sb_dRdR::synapse0x25f5320() {
   return (neuron0x25e0a80()*0.461415);
}

double NNfunction_sb_dRdR::synapse0x25f5360() {
   return (neuron0x25e1450()*5.13204);
}

double NNfunction_sb_dRdR::synapse0x25f5940() {
   return (neuron0x25e1e20()*-2.37057);
}

double NNfunction_sb_dRdR::synapse0x25f5980() {
   return (neuron0x25e27f0()*-0.177043);
}

double NNfunction_sb_dRdR::synapse0x25f59c0() {
   return (neuron0x25e31c0()*0.391507);
}

double NNfunction_sb_dRdR::synapse0x25f5a00() {
   return (neuron0x25e3b90()*-1.37419);
}

double NNfunction_sb_dRdR::synapse0x25f5a40() {
   return (neuron0x25e4560()*-3.13104);
}

double NNfunction_sb_dRdR::synapse0x25f5a80() {
   return (neuron0x25e5140()*0.559799);
}

double NNfunction_sb_dRdR::synapse0x25f5ac0() {
   return (neuron0x25e5b10()*2.67501);
}

double NNfunction_sb_dRdR::synapse0x25f5b00() {
   return (neuron0x25d6990()*1.09778);
}

double NNfunction_sb_dRdR::synapse0x25f5b40() {
   return (neuron0x25d7360()*0.296941);
}

double NNfunction_sb_dRdR::synapse0x25f5b80() {
   return (neuron0x25d7d30()*0.644878);
}

double NNfunction_sb_dRdR::synapse0x25f5bc0() {
   return (neuron0x25ea370()*0.476633);
}

double NNfunction_sb_dRdR::synapse0x25f5c00() {
   return (neuron0x25eac20()*0.262209);
}

double NNfunction_sb_dRdR::synapse0x25f5c40() {
   return (neuron0x25eb5f0()*1.78134);
}

double NNfunction_sb_dRdR::synapse0x25f5c80() {
   return (neuron0x25ebfc0()*2.27172);
}

double NNfunction_sb_dRdR::synapse0x25f6000() {
   return (neuron0x25c6f50()*1.36077);
}

double NNfunction_sb_dRdR::synapse0x25f6040() {
   return (neuron0x25c7790()*2.86711);
}

double NNfunction_sb_dRdR::synapse0x25f6080() {
   return (neuron0x25c8270()*-0.229284);
}

double NNfunction_sb_dRdR::synapse0x25f60c0() {
   return (neuron0x25c7d10()*0.482844);
}

double NNfunction_sb_dRdR::synapse0x25f6100() {
   return (neuron0x25c9050()*-0.721978);
}

double NNfunction_sb_dRdR::synapse0x25f6140() {
   return (neuron0x25cab20()*-2.00035);
}

double NNfunction_sb_dRdR::synapse0x25f6180() {
   return (neuron0x25cb8f0()*-0.947552);
}

double NNfunction_sb_dRdR::synapse0x25f61c0() {
   return (neuron0x25cc2c0()*0.63354);
}

double NNfunction_sb_dRdR::synapse0x25f6200() {
   return (neuron0x25ccc90()*-1.63759);
}

double NNfunction_sb_dRdR::synapse0x25f6240() {
   return (neuron0x25cd770()*0.782006);
}

double NNfunction_sb_dRdR::synapse0x25f6280() {
   return (neuron0x25ce140()*1.71289);
}

double NNfunction_sb_dRdR::synapse0x25f62c0() {
   return (neuron0x25cb220()*-0.500526);
}

double NNfunction_sb_dRdR::synapse0x25f6300() {
   return (neuron0x25cfcf0()*0.896649);
}

double NNfunction_sb_dRdR::synapse0x25f6340() {
   return (neuron0x25d06c0()*-1.45322);
}

double NNfunction_sb_dRdR::synapse0x25f6380() {
   return (neuron0x25d1090()*-2.30346);
}

double NNfunction_sb_dRdR::synapse0x25f63c0() {
   return (neuron0x25d1a60()*0.575159);
}

double NNfunction_sb_dRdR::synapse0x25f5e50() {
   return (neuron0x25d3870()*1.0689);
}

double NNfunction_sb_dRdR::synapse0x25f5e90() {
   return (neuron0x25d3b50()*0.839947);
}

double NNfunction_sb_dRdR::synapse0x25f6510() {
   return (neuron0x25d4520()*0.370363);
}

double NNfunction_sb_dRdR::synapse0x25f6550() {
   return (neuron0x25d4ef0()*-0.982435);
}

double NNfunction_sb_dRdR::synapse0x25f6590() {
   return (neuron0x25d58c0()*1.45529);
}

double NNfunction_sb_dRdR::synapse0x25f65d0() {
   return (neuron0x25d6290()*-0.651589);
}

double NNfunction_sb_dRdR::synapse0x25f6610() {
   return (neuron0x25cede0()*-0.702868);
}

double NNfunction_sb_dRdR::synapse0x25f6650() {
   return (neuron0x25cf7b0()*1.08726);
}

double NNfunction_sb_dRdR::synapse0x25f6690() {
   return (neuron0x25d9020()*-2.23968);
}

double NNfunction_sb_dRdR::synapse0x25f66d0() {
   return (neuron0x25d99f0()*0.917908);
}

double NNfunction_sb_dRdR::synapse0x25f6710() {
   return (neuron0x25da3c0()*-0.195944);
}

double NNfunction_sb_dRdR::synapse0x25f6750() {
   return (neuron0x25dad90()*-1.74947);
}

double NNfunction_sb_dRdR::synapse0x25f6790() {
   return (neuron0x25db760()*1.52971);
}

double NNfunction_sb_dRdR::synapse0x25f67d0() {
   return (neuron0x25dc130()*1.18124);
}

double NNfunction_sb_dRdR::synapse0x25f6810() {
   return (neuron0x25dcb00()*-4.80098);
}

double NNfunction_sb_dRdR::synapse0x25f6850() {
   return (neuron0x25dd4d0()*2.35039);
}

double NNfunction_sb_dRdR::synapse0x25f6400() {
   return (neuron0x25d3560()*0.857728);
}

double NNfunction_sb_dRdR::synapse0x25f6440() {
   return (neuron0x25e00b0()*1.67687);
}

double NNfunction_sb_dRdR::synapse0x25f6480() {
   return (neuron0x25e0a80()*-0.242576);
}

double NNfunction_sb_dRdR::synapse0x25f64c0() {
   return (neuron0x25e1450()*1.4175);
}

double NNfunction_sb_dRdR::synapse0x25f6aa0() {
   return (neuron0x25e1e20()*-0.770037);
}

double NNfunction_sb_dRdR::synapse0x25f6ae0() {
   return (neuron0x25e27f0()*2.7649);
}

double NNfunction_sb_dRdR::synapse0x25f6b20() {
   return (neuron0x25e31c0()*1.5073);
}

double NNfunction_sb_dRdR::synapse0x25f6b60() {
   return (neuron0x25e3b90()*-0.948747);
}

double NNfunction_sb_dRdR::synapse0x25f6ba0() {
   return (neuron0x25e4560()*-1.97011);
}

double NNfunction_sb_dRdR::synapse0x25f6be0() {
   return (neuron0x25e5140()*1.61434);
}

double NNfunction_sb_dRdR::synapse0x25f6c20() {
   return (neuron0x25e5b10()*3.91111);
}

double NNfunction_sb_dRdR::synapse0x25f6c60() {
   return (neuron0x25d6990()*0.829031);
}

double NNfunction_sb_dRdR::synapse0x25f6ca0() {
   return (neuron0x25d7360()*0.895129);
}

double NNfunction_sb_dRdR::synapse0x25f6ce0() {
   return (neuron0x25d7d30()*0.816009);
}

double NNfunction_sb_dRdR::synapse0x25f6d20() {
   return (neuron0x25ea370()*1.27923);
}

double NNfunction_sb_dRdR::synapse0x25f6d60() {
   return (neuron0x25eac20()*0.489626);
}

double NNfunction_sb_dRdR::synapse0x25f6da0() {
   return (neuron0x25eb5f0()*0.43641);
}

double NNfunction_sb_dRdR::synapse0x25f6de0() {
   return (neuron0x25ebfc0()*3.98982);
}

double NNfunction_sb_dRdR::synapse0x25f7040() {
   return (neuron0x25f31c0()*-0.200527);
}

double NNfunction_sb_dRdR::synapse0x25f7080() {
   return (neuron0x25f3560()*6.58164);
}

double NNfunction_sb_dRdR::synapse0x25f70c0() {
   return (neuron0x25f3a00()*-4.62955);
}

double NNfunction_sb_dRdR::synapse0x25f7100() {
   return (neuron0x25f4b60()*-7.46735);
}

double NNfunction_sb_dRdR::synapse0x25f7140() {
   return (neuron0x25f5cc0()*-3.78975);
}

