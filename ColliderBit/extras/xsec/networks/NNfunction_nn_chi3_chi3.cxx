#include "NNfunction_nn_chi3_chi3.h"
#include <cmath>

double NNfunction_nn_chi3_chi3::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.651)/15.2853;
   input1 = (in1 - -2.40432)/1020.31;
   input2 = (in2 - 436.822)/512.504;
   input3 = (in3 - 17.7327)/805.48;
   input4 = (in4 - 997.654)/903.467;
   input5 = (in5 - 922.394)/947.007;
   input6 = (in6 - 932.02)/947.245;
   input7 = (in7 - 927.253)/923.486;
   input8 = (in8 - 934.213)/960.84;
   input9 = (in9 - 921.082)/949.079;
   input10 = (in10 - 954.726)/931.087;
   input11 = (in11 - 693.045)/823.969;
   input12 = (in12 - 757.965)/867.91;
   input13 = (in13 - 525.388)/535.82;
   input14 = (in14 - 712.722)/796.722;
   input15 = (in15 - 759.579)/826.13;
   input16 = (in16 - 556.977)/567.547;
   input17 = (in17 - 781.555)/889.455;
   input18 = (in18 - 783.912)/894.88;
   input19 = (in19 - 776.702)/842.273;
   input20 = (in20 - -27.1595)/485.219;
   input21 = (in21 - -34.7747)/1089.88;
   input22 = (in22 - 6.78258)/1130.41;
   input23 = (in23 - -17.9624)/123.959;
   switch(index) {
     case 0:
         return neuron0x20535d0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi3_chi3::Value(int index, double* input) {
   input0 = (input[0] - 24.651)/15.2853;
   input1 = (input[1] - -2.40432)/1020.31;
   input2 = (input[2] - 436.822)/512.504;
   input3 = (input[3] - 17.7327)/805.48;
   input4 = (input[4] - 997.654)/903.467;
   input5 = (input[5] - 922.394)/947.007;
   input6 = (input[6] - 932.02)/947.245;
   input7 = (input[7] - 927.253)/923.486;
   input8 = (input[8] - 934.213)/960.84;
   input9 = (input[9] - 921.082)/949.079;
   input10 = (input[10] - 954.726)/931.087;
   input11 = (input[11] - 693.045)/823.969;
   input12 = (input[12] - 757.965)/867.91;
   input13 = (input[13] - 525.388)/535.82;
   input14 = (input[14] - 712.722)/796.722;
   input15 = (input[15] - 759.579)/826.13;
   input16 = (input[16] - 556.977)/567.547;
   input17 = (input[17] - 781.555)/889.455;
   input18 = (input[18] - 783.912)/894.88;
   input19 = (input[19] - 776.702)/842.273;
   input20 = (input[20] - -27.1595)/485.219;
   input21 = (input[21] - -34.7747)/1089.88;
   input22 = (input[22] - 6.78258)/1130.41;
   input23 = (input[23] - -17.9624)/123.959;
   switch(index) {
     case 0:
         return neuron0x20535d0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi3_chi3::neuron0x201f790() {
   return input0;
}

double NNfunction_nn_chi3_chi3::neuron0x201fa40() {
   return input1;
}

double NNfunction_nn_chi3_chi3::neuron0x201fd80() {
   return input2;
}

double NNfunction_nn_chi3_chi3::neuron0x20200c0() {
   return input3;
}

double NNfunction_nn_chi3_chi3::neuron0x2020400() {
   return input4;
}

double NNfunction_nn_chi3_chi3::neuron0x2020740() {
   return input5;
}

double NNfunction_nn_chi3_chi3::neuron0x2020a80() {
   return input6;
}

double NNfunction_nn_chi3_chi3::neuron0x2020dc0() {
   return input7;
}

double NNfunction_nn_chi3_chi3::neuron0x2021100() {
   return input8;
}

double NNfunction_nn_chi3_chi3::neuron0x2021440() {
   return input9;
}

double NNfunction_nn_chi3_chi3::neuron0x2021780() {
   return input10;
}

double NNfunction_nn_chi3_chi3::neuron0x2021ac0() {
   return input11;
}

double NNfunction_nn_chi3_chi3::neuron0x2021e00() {
   return input12;
}

double NNfunction_nn_chi3_chi3::neuron0x2022140() {
   return input13;
}

double NNfunction_nn_chi3_chi3::neuron0x2022480() {
   return input14;
}

double NNfunction_nn_chi3_chi3::neuron0x20227c0() {
   return input15;
}

double NNfunction_nn_chi3_chi3::neuron0x2022b00() {
   return input16;
}

double NNfunction_nn_chi3_chi3::neuron0x2023060() {
   return input17;
}

double NNfunction_nn_chi3_chi3::neuron0x2023280() {
   return input18;
}

double NNfunction_nn_chi3_chi3::neuron0x20235c0() {
   return input19;
}

double NNfunction_nn_chi3_chi3::neuron0x2023900() {
   return input20;
}

double NNfunction_nn_chi3_chi3::neuron0x2023c40() {
   return input21;
}

double NNfunction_nn_chi3_chi3::neuron0x2023f80() {
   return input22;
}

double NNfunction_nn_chi3_chi3::neuron0x20242c0() {
   return input23;
}

double NNfunction_nn_chi3_chi3::input0x2024730() {
   double input = -0.979107;
   input += synapse0x201f710();
   input += synapse0x201f750();
   input += synapse0x20249e0();
   input += synapse0x2024a20();
   input += synapse0x2024a60();
   input += synapse0x2024aa0();
   input += synapse0x2024ae0();
   input += synapse0x2024b20();
   input += synapse0x2024b60();
   input += synapse0x2024ba0();
   input += synapse0x2024be0();
   input += synapse0x2024c20();
   input += synapse0x2024c60();
   input += synapse0x2024ca0();
   input += synapse0x2024ce0();
   input += synapse0x2024d20();
   input += synapse0x201f680();
   input += synapse0x201f6c0();
   input += synapse0x1dda850();
   input += synapse0x1dda890();
   input += synapse0x2024f80();
   input += synapse0x2024fc0();
   input += synapse0x2025000();
   input += synapse0x2025040();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2024730() {
   double input = input0x2024730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2025080() {
   double input = 6.04578;
   input += synapse0x20253c0();
   input += synapse0x2025400();
   input += synapse0x2025440();
   input += synapse0x2025480();
   input += synapse0x20254c0();
   input += synapse0x2025500();
   input += synapse0x2025540();
   input += synapse0x2025580();
   input += synapse0x20255c0();
   input += synapse0x2024e70();
   input += synapse0x2024eb0();
   input += synapse0x2024ef0();
   input += synapse0x2024f30();
   input += synapse0x2025810();
   input += synapse0x2025850();
   input += synapse0x2025890();
   input += synapse0x2025210();
   input += synapse0x2025250();
   input += synapse0x20259e0();
   input += synapse0x2025a20();
   input += synapse0x2025a60();
   input += synapse0x2025aa0();
   input += synapse0x2025ae0();
   input += synapse0x2025b20();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2025080() {
   double input = input0x2025080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2025b60() {
   double input = -1.26488;
   input += synapse0x2025ea0();
   input += synapse0x2025ee0();
   input += synapse0x2025f20();
   input += synapse0x2025f60();
   input += synapse0x2025fa0();
   input += synapse0x2025fe0();
   input += synapse0x2026020();
   input += synapse0x2026060();
   input += synapse0x20260a0();
   input += synapse0x20260e0();
   input += synapse0x2026120();
   input += synapse0x2026160();
   input += synapse0x20261a0();
   input += synapse0x20261e0();
   input += synapse0x2026220();
   input += synapse0x2026260();
   input += synapse0x2025cf0();
   input += synapse0x2025d30();
   input += synapse0x200e800();
   input += synapse0x1de8750();
   input += synapse0x1de8790();
   input += synapse0x1f03ca0();
   input += synapse0x1f03ce0();
   input += synapse0x201f4f0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2025b60() {
   double input = input0x2025b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x1de8eb0() {
   double input = 1.03829;
   input += synapse0x1de9040();
   input += synapse0x2025720();
   input += synapse0x2025760();
   input += synapse0x20257a0();
   input += synapse0x20263b0();
   input += synapse0x20263f0();
   input += synapse0x2026430();
   input += synapse0x2026470();
   input += synapse0x20264b0();
   input += synapse0x20264f0();
   input += synapse0x2026530();
   input += synapse0x2026570();
   input += synapse0x20265b0();
   input += synapse0x20265f0();
   input += synapse0x2026630();
   input += synapse0x2026670();
   input += synapse0x201f530();
   input += synapse0x201f570();
   input += synapse0x201f5b0();
   input += synapse0x20267c0();
   input += synapse0x2026800();
   input += synapse0x2026840();
   input += synapse0x2026880();
   input += synapse0x20268c0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x1de8eb0() {
   double input = input0x1de8eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2026900() {
   double input = 0.965456;
   input += synapse0x2026c40();
   input += synapse0x2026c80();
   input += synapse0x2026cc0();
   input += synapse0x2026d00();
   input += synapse0x2026d40();
   input += synapse0x2026d80();
   input += synapse0x2026dc0();
   input += synapse0x2026e00();
   input += synapse0x2026e40();
   input += synapse0x2026e80();
   input += synapse0x2026ec0();
   input += synapse0x2026f00();
   input += synapse0x2026f40();
   input += synapse0x2026f80();
   input += synapse0x2026fc0();
   input += synapse0x2027000();
   input += synapse0x2026a90();
   input += synapse0x2026ad0();
   input += synapse0x2027150();
   input += synapse0x2027190();
   input += synapse0x20271d0();
   input += synapse0x2027210();
   input += synapse0x2027250();
   input += synapse0x2027290();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2026900() {
   double input = input0x2026900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x20272d0() {
   double input = 0.502104;
   input += synapse0x2027610();
   input += synapse0x2027650();
   input += synapse0x2027690();
   input += synapse0x20276d0();
   input += synapse0x2027710();
   input += synapse0x2027750();
   input += synapse0x2027790();
   input += synapse0x20277d0();
   input += synapse0x2027810();
   input += synapse0x1de8aa0();
   input += synapse0x1de8ae0();
   input += synapse0x1de8b20();
   input += synapse0x1de8b60();
   input += synapse0x1de8ba0();
   input += synapse0x1de8be0();
   input += synapse0x1de8c20();
   input += synapse0x2027460();
   input += synapse0x20274a0();
   input += synapse0x1de8d70();
   input += synapse0x1de8db0();
   input += synapse0x1de8df0();
   input += synapse0x1de8e30();
   input += synapse0x1de8e70();
   input += synapse0x2028060();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x20272d0() {
   double input = input0x20272d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x20280a0() {
   double input = 1.04405;
   input += synapse0x20283e0();
   input += synapse0x2028420();
   input += synapse0x2028460();
   input += synapse0x20284a0();
   input += synapse0x20284e0();
   input += synapse0x2028520();
   input += synapse0x2028560();
   input += synapse0x20285a0();
   input += synapse0x20285e0();
   input += synapse0x2028620();
   input += synapse0x2028660();
   input += synapse0x20286a0();
   input += synapse0x20286e0();
   input += synapse0x2028720();
   input += synapse0x2028760();
   input += synapse0x20287a0();
   input += synapse0x2028230();
   input += synapse0x2028270();
   input += synapse0x20288f0();
   input += synapse0x2028930();
   input += synapse0x2028970();
   input += synapse0x20289b0();
   input += synapse0x20289f0();
   input += synapse0x2028a30();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x20280a0() {
   double input = input0x20280a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2028a70() {
   double input = 0.693701;
   input += synapse0x2028db0();
   input += synapse0x2028df0();
   input += synapse0x2028e30();
   input += synapse0x2028e70();
   input += synapse0x2028eb0();
   input += synapse0x2028ef0();
   input += synapse0x2028f30();
   input += synapse0x2028f70();
   input += synapse0x2028fb0();
   input += synapse0x2028ff0();
   input += synapse0x2029030();
   input += synapse0x2029070();
   input += synapse0x20290b0();
   input += synapse0x20290f0();
   input += synapse0x2029130();
   input += synapse0x2029170();
   input += synapse0x2028c00();
   input += synapse0x2028c40();
   input += synapse0x20292c0();
   input += synapse0x2029300();
   input += synapse0x2029340();
   input += synapse0x2029380();
   input += synapse0x20293c0();
   input += synapse0x2029400();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2028a70() {
   double input = input0x2028a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2029440() {
   double input = 1.90497;
   input += synapse0x2022f50();
   input += synapse0x2022f90();
   input += synapse0x2022fd0();
   input += synapse0x2023010();
   input += synapse0x2029990();
   input += synapse0x20299d0();
   input += synapse0x2029a10();
   input += synapse0x2029a50();
   input += synapse0x2029a90();
   input += synapse0x2029ad0();
   input += synapse0x2029b10();
   input += synapse0x2029b50();
   input += synapse0x2029b90();
   input += synapse0x2029bd0();
   input += synapse0x2029c10();
   input += synapse0x2029c50();
   input += synapse0x20295d0();
   input += synapse0x2029610();
   input += synapse0x2029da0();
   input += synapse0x2029de0();
   input += synapse0x2029e20();
   input += synapse0x2029e60();
   input += synapse0x2029ea0();
   input += synapse0x2029ee0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2029440() {
   double input = input0x2029440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2029f20() {
   double input = -3.1566;
   input += synapse0x202a260();
   input += synapse0x202a2a0();
   input += synapse0x202a2e0();
   input += synapse0x202a320();
   input += synapse0x202a360();
   input += synapse0x202a3a0();
   input += synapse0x202a3e0();
   input += synapse0x202a420();
   input += synapse0x202a460();
   input += synapse0x202a4a0();
   input += synapse0x202a4e0();
   input += synapse0x202a520();
   input += synapse0x202a560();
   input += synapse0x202a5a0();
   input += synapse0x202a5e0();
   input += synapse0x202a620();
   input += synapse0x202a0b0();
   input += synapse0x202a0f0();
   input += synapse0x202a770();
   input += synapse0x202a7b0();
   input += synapse0x202a7f0();
   input += synapse0x202a830();
   input += synapse0x202a870();
   input += synapse0x202a8b0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2029f20() {
   double input = input0x2029f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x202a8f0() {
   double input = -0.220299;
   input += synapse0x202ac30();
   input += synapse0x202ac70();
   input += synapse0x202acb0();
   input += synapse0x202acf0();
   input += synapse0x202ad30();
   input += synapse0x202ad70();
   input += synapse0x202adb0();
   input += synapse0x202adf0();
   input += synapse0x202ae30();
   input += synapse0x202ae70();
   input += synapse0x202aeb0();
   input += synapse0x202aef0();
   input += synapse0x202af30();
   input += synapse0x202af70();
   input += synapse0x202afb0();
   input += synapse0x202aff0();
   input += synapse0x202aa80();
   input += synapse0x202aac0();
   input += synapse0x2027850();
   input += synapse0x2027890();
   input += synapse0x20278d0();
   input += synapse0x2027910();
   input += synapse0x2027950();
   input += synapse0x2027990();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x202a8f0() {
   double input = input0x202a8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x20279d0() {
   double input = -3.09972;
   input += synapse0x2027d10();
   input += synapse0x2027d50();
   input += synapse0x2027d90();
   input += synapse0x2027dd0();
   input += synapse0x2027e10();
   input += synapse0x2027e50();
   input += synapse0x2027e90();
   input += synapse0x2027ed0();
   input += synapse0x2027f10();
   input += synapse0x2027f50();
   input += synapse0x2027f90();
   input += synapse0x2027fd0();
   input += synapse0x2028010();
   input += synapse0x202c150();
   input += synapse0x202c190();
   input += synapse0x202c1d0();
   input += synapse0x2027b60();
   input += synapse0x2027ba0();
   input += synapse0x202c320();
   input += synapse0x202c360();
   input += synapse0x202c3a0();
   input += synapse0x202c3e0();
   input += synapse0x202c420();
   input += synapse0x202c460();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x20279d0() {
   double input = input0x20279d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x202c4a0() {
   double input = 0.931836;
   input += synapse0x202c7e0();
   input += synapse0x202c820();
   input += synapse0x202c860();
   input += synapse0x202c8a0();
   input += synapse0x202c8e0();
   input += synapse0x202c920();
   input += synapse0x202c960();
   input += synapse0x202c9a0();
   input += synapse0x202c9e0();
   input += synapse0x202ca20();
   input += synapse0x202ca60();
   input += synapse0x202caa0();
   input += synapse0x202cae0();
   input += synapse0x202cb20();
   input += synapse0x202cb60();
   input += synapse0x202cba0();
   input += synapse0x202c630();
   input += synapse0x202c670();
   input += synapse0x202ccf0();
   input += synapse0x202cd30();
   input += synapse0x202cd70();
   input += synapse0x202cdb0();
   input += synapse0x202cdf0();
   input += synapse0x202ce30();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x202c4a0() {
   double input = input0x202c4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x202ce70() {
   double input = 0.0465981;
   input += synapse0x202d1b0();
   input += synapse0x202d1f0();
   input += synapse0x202d230();
   input += synapse0x202d270();
   input += synapse0x202d2b0();
   input += synapse0x202d2f0();
   input += synapse0x202d330();
   input += synapse0x202d370();
   input += synapse0x202d3b0();
   input += synapse0x202d3f0();
   input += synapse0x202d430();
   input += synapse0x202d470();
   input += synapse0x202d4b0();
   input += synapse0x202d4f0();
   input += synapse0x202d530();
   input += synapse0x202d570();
   input += synapse0x202d000();
   input += synapse0x202d040();
   input += synapse0x202d6c0();
   input += synapse0x202d700();
   input += synapse0x202d740();
   input += synapse0x202d780();
   input += synapse0x202d7c0();
   input += synapse0x202d800();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x202ce70() {
   double input = input0x202ce70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x202d840() {
   double input = -0.0177599;
   input += synapse0x202db80();
   input += synapse0x202dbc0();
   input += synapse0x202dc00();
   input += synapse0x202dc40();
   input += synapse0x202dc80();
   input += synapse0x202dcc0();
   input += synapse0x202dd00();
   input += synapse0x202dd40();
   input += synapse0x202dd80();
   input += synapse0x202ddc0();
   input += synapse0x202de00();
   input += synapse0x202de40();
   input += synapse0x202de80();
   input += synapse0x202dec0();
   input += synapse0x202df00();
   input += synapse0x202df40();
   input += synapse0x202d9d0();
   input += synapse0x202da10();
   input += synapse0x202e090();
   input += synapse0x202e0d0();
   input += synapse0x202e110();
   input += synapse0x202e150();
   input += synapse0x202e190();
   input += synapse0x202e1d0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x202d840() {
   double input = input0x202d840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x202e210() {
   double input = 1.10692;
   input += synapse0x202e550();
   input += synapse0x201f920();
   input += synapse0x201f960();
   input += synapse0x201fc60();
   input += synapse0x201fca0();
   input += synapse0x201ffa0();
   input += synapse0x201ffe0();
   input += synapse0x20202e0();
   input += synapse0x2020320();
   input += synapse0x2020620();
   input += synapse0x2020660();
   input += synapse0x2020960();
   input += synapse0x20209a0();
   input += synapse0x2020ca0();
   input += synapse0x2020ce0();
   input += synapse0x2020fe0();
   input += synapse0x2021020();
   input += synapse0x2021320();
   input += synapse0x2021360();
   input += synapse0x2021660();
   input += synapse0x20216a0();
   input += synapse0x20219a0();
   input += synapse0x20219e0();
   input += synapse0x2021ce0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x202e210() {
   double input = input0x202e210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2030020() {
   double input = 0.900621;
   input += synapse0x2021d20();
   input += synapse0x20229e0();
   input += synapse0x2022a20();
   input += synapse0x202e3a0();
   input += synapse0x202e3e0();
   input += synapse0x2022d20();
   input += synapse0x2022d60();
   input += synapse0x1dda730();
   input += synapse0x1dda770();
   input += synapse0x20234a0();
   input += synapse0x20234e0();
   input += synapse0x20237e0();
   input += synapse0x2023820();
   input += synapse0x2023b20();
   input += synapse0x2023b60();
   input += synapse0x2023e60();
   input += synapse0x2023ea0();
   input += synapse0x20241a0();
   input += synapse0x20241e0();
   input += synapse0x20244e0();
   input += synapse0x2024520();
   input += synapse0x2022020();
   input += synapse0x2022060();
   input += synapse0x20302c0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2030020() {
   double input = input0x2030020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2030300() {
   double input = -4.88354;
   input += synapse0x2030640();
   input += synapse0x2030680();
   input += synapse0x20306c0();
   input += synapse0x2030700();
   input += synapse0x2030740();
   input += synapse0x2030780();
   input += synapse0x20307c0();
   input += synapse0x2030800();
   input += synapse0x2030840();
   input += synapse0x2030880();
   input += synapse0x20308c0();
   input += synapse0x2030900();
   input += synapse0x2030940();
   input += synapse0x2030980();
   input += synapse0x20309c0();
   input += synapse0x2030a00();
   input += synapse0x2030490();
   input += synapse0x20304d0();
   input += synapse0x2030b50();
   input += synapse0x2030b90();
   input += synapse0x2030bd0();
   input += synapse0x2030c10();
   input += synapse0x2030c50();
   input += synapse0x2030c90();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2030300() {
   double input = input0x2030300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2030cd0() {
   double input = 0.554667;
   input += synapse0x2031010();
   input += synapse0x2031050();
   input += synapse0x2031090();
   input += synapse0x20310d0();
   input += synapse0x2031110();
   input += synapse0x2031150();
   input += synapse0x2031190();
   input += synapse0x20311d0();
   input += synapse0x2031210();
   input += synapse0x2031250();
   input += synapse0x2031290();
   input += synapse0x20312d0();
   input += synapse0x2031310();
   input += synapse0x2031350();
   input += synapse0x2031390();
   input += synapse0x20313d0();
   input += synapse0x2030e60();
   input += synapse0x2030ea0();
   input += synapse0x2031520();
   input += synapse0x2031560();
   input += synapse0x20315a0();
   input += synapse0x20315e0();
   input += synapse0x2031620();
   input += synapse0x2031660();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2030cd0() {
   double input = input0x2030cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x20316a0() {
   double input = 0.870671;
   input += synapse0x20319e0();
   input += synapse0x2031a20();
   input += synapse0x2031a60();
   input += synapse0x2031aa0();
   input += synapse0x2031ae0();
   input += synapse0x2031b20();
   input += synapse0x2031b60();
   input += synapse0x2031ba0();
   input += synapse0x2031be0();
   input += synapse0x2031c20();
   input += synapse0x2031c60();
   input += synapse0x2031ca0();
   input += synapse0x2031ce0();
   input += synapse0x2031d20();
   input += synapse0x2031d60();
   input += synapse0x2031da0();
   input += synapse0x2031830();
   input += synapse0x2031870();
   input += synapse0x2031ef0();
   input += synapse0x2031f30();
   input += synapse0x2031f70();
   input += synapse0x2031fb0();
   input += synapse0x2031ff0();
   input += synapse0x2032030();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x20316a0() {
   double input = input0x20316a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2032070() {
   double input = -2.11114;
   input += synapse0x20323b0();
   input += synapse0x20323f0();
   input += synapse0x2032430();
   input += synapse0x2032470();
   input += synapse0x20324b0();
   input += synapse0x20324f0();
   input += synapse0x2032530();
   input += synapse0x2032570();
   input += synapse0x20325b0();
   input += synapse0x20325f0();
   input += synapse0x2032630();
   input += synapse0x2032670();
   input += synapse0x20326b0();
   input += synapse0x20326f0();
   input += synapse0x2032730();
   input += synapse0x2032770();
   input += synapse0x2032200();
   input += synapse0x2032240();
   input += synapse0x20328c0();
   input += synapse0x2032900();
   input += synapse0x2032940();
   input += synapse0x2032980();
   input += synapse0x20329c0();
   input += synapse0x2032a00();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2032070() {
   double input = input0x2032070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2032a40() {
   double input = -6.7913;
   input += synapse0x2032d80();
   input += synapse0x2032dc0();
   input += synapse0x2032e00();
   input += synapse0x2032e40();
   input += synapse0x2032e80();
   input += synapse0x2032ec0();
   input += synapse0x2032f00();
   input += synapse0x2032f40();
   input += synapse0x2032f80();
   input += synapse0x202b140();
   input += synapse0x202b180();
   input += synapse0x202b1c0();
   input += synapse0x202b200();
   input += synapse0x202b240();
   input += synapse0x202b280();
   input += synapse0x202b2c0();
   input += synapse0x2032bd0();
   input += synapse0x2032c10();
   input += synapse0x202b410();
   input += synapse0x202b450();
   input += synapse0x202b490();
   input += synapse0x202b4d0();
   input += synapse0x202b510();
   input += synapse0x202b550();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2032a40() {
   double input = input0x2032a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x202b590() {
   double input = -1.205;
   input += synapse0x202b8d0();
   input += synapse0x202b910();
   input += synapse0x202b950();
   input += synapse0x202b990();
   input += synapse0x202b9d0();
   input += synapse0x202ba10();
   input += synapse0x202ba50();
   input += synapse0x202ba90();
   input += synapse0x202bad0();
   input += synapse0x202bb10();
   input += synapse0x202bb50();
   input += synapse0x202bb90();
   input += synapse0x202bbd0();
   input += synapse0x202bc10();
   input += synapse0x202bc50();
   input += synapse0x202bc90();
   input += synapse0x202b720();
   input += synapse0x202b760();
   input += synapse0x202bde0();
   input += synapse0x202be20();
   input += synapse0x202be60();
   input += synapse0x202bea0();
   input += synapse0x202bee0();
   input += synapse0x202bf20();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x202b590() {
   double input = input0x202b590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x202bf60() {
   double input = 0.698855;
   input += synapse0x202c0f0();
   input += synapse0x2035180();
   input += synapse0x20351c0();
   input += synapse0x2035200();
   input += synapse0x2035240();
   input += synapse0x2035280();
   input += synapse0x20352c0();
   input += synapse0x2035300();
   input += synapse0x2035340();
   input += synapse0x2035380();
   input += synapse0x20353c0();
   input += synapse0x2035400();
   input += synapse0x2035440();
   input += synapse0x2035480();
   input += synapse0x20354c0();
   input += synapse0x2035500();
   input += synapse0x2034fd0();
   input += synapse0x2035010();
   input += synapse0x2035650();
   input += synapse0x2035690();
   input += synapse0x20356d0();
   input += synapse0x2035710();
   input += synapse0x2035750();
   input += synapse0x2035790();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x202bf60() {
   double input = input0x202bf60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x20357d0() {
   double input = 2.19177;
   input += synapse0x2035b10();
   input += synapse0x2035b50();
   input += synapse0x2035b90();
   input += synapse0x2035bd0();
   input += synapse0x2035c10();
   input += synapse0x2035c50();
   input += synapse0x2035c90();
   input += synapse0x2035cd0();
   input += synapse0x2035d10();
   input += synapse0x2035d50();
   input += synapse0x2035d90();
   input += synapse0x2035dd0();
   input += synapse0x2035e10();
   input += synapse0x2035e50();
   input += synapse0x2035e90();
   input += synapse0x2035ed0();
   input += synapse0x2035960();
   input += synapse0x20359a0();
   input += synapse0x2036020();
   input += synapse0x2036060();
   input += synapse0x20360a0();
   input += synapse0x20360e0();
   input += synapse0x2036120();
   input += synapse0x2036160();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x20357d0() {
   double input = input0x20357d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x20361a0() {
   double input = -2.36104;
   input += synapse0x20364e0();
   input += synapse0x2036520();
   input += synapse0x2036560();
   input += synapse0x20365a0();
   input += synapse0x20365e0();
   input += synapse0x2036620();
   input += synapse0x2036660();
   input += synapse0x20366a0();
   input += synapse0x20366e0();
   input += synapse0x2036720();
   input += synapse0x2036760();
   input += synapse0x20367a0();
   input += synapse0x20367e0();
   input += synapse0x2036820();
   input += synapse0x2036860();
   input += synapse0x20368a0();
   input += synapse0x2036330();
   input += synapse0x2036370();
   input += synapse0x20369f0();
   input += synapse0x2036a30();
   input += synapse0x2036a70();
   input += synapse0x2036ab0();
   input += synapse0x2036af0();
   input += synapse0x2036b30();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x20361a0() {
   double input = input0x20361a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2036b70() {
   double input = 2.07596;
   input += synapse0x2036eb0();
   input += synapse0x2036ef0();
   input += synapse0x2036f30();
   input += synapse0x2036f70();
   input += synapse0x2036fb0();
   input += synapse0x2036ff0();
   input += synapse0x2037030();
   input += synapse0x2037070();
   input += synapse0x20370b0();
   input += synapse0x20370f0();
   input += synapse0x2037130();
   input += synapse0x2037170();
   input += synapse0x20371b0();
   input += synapse0x20371f0();
   input += synapse0x2037230();
   input += synapse0x2037270();
   input += synapse0x2036d00();
   input += synapse0x2036d40();
   input += synapse0x20373c0();
   input += synapse0x2037400();
   input += synapse0x2037440();
   input += synapse0x2037480();
   input += synapse0x20374c0();
   input += synapse0x2037500();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2036b70() {
   double input = input0x2036b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2037540() {
   double input = -3.55053;
   input += synapse0x2037880();
   input += synapse0x20378c0();
   input += synapse0x2037900();
   input += synapse0x2037940();
   input += synapse0x2037980();
   input += synapse0x20379c0();
   input += synapse0x2037a00();
   input += synapse0x2037a40();
   input += synapse0x2037a80();
   input += synapse0x2037ac0();
   input += synapse0x2037b00();
   input += synapse0x2037b40();
   input += synapse0x2037b80();
   input += synapse0x2037bc0();
   input += synapse0x2037c00();
   input += synapse0x2037c40();
   input += synapse0x20376d0();
   input += synapse0x2037710();
   input += synapse0x2037d90();
   input += synapse0x2037dd0();
   input += synapse0x2037e10();
   input += synapse0x2037e50();
   input += synapse0x2037e90();
   input += synapse0x2037ed0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2037540() {
   double input = input0x2037540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2037f10() {
   double input = -5.06866;
   input += synapse0x2038250();
   input += synapse0x2038290();
   input += synapse0x20382d0();
   input += synapse0x2038310();
   input += synapse0x2038350();
   input += synapse0x2038390();
   input += synapse0x20383d0();
   input += synapse0x2038410();
   input += synapse0x2038450();
   input += synapse0x2038490();
   input += synapse0x20384d0();
   input += synapse0x2038510();
   input += synapse0x2038550();
   input += synapse0x2038590();
   input += synapse0x20385d0();
   input += synapse0x2038610();
   input += synapse0x20380a0();
   input += synapse0x20380e0();
   input += synapse0x2038760();
   input += synapse0x20387a0();
   input += synapse0x20387e0();
   input += synapse0x2038820();
   input += synapse0x2038860();
   input += synapse0x20388a0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2037f10() {
   double input = input0x2037f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x20388e0() {
   double input = -3.29147;
   input += synapse0x2038c20();
   input += synapse0x2038c60();
   input += synapse0x2038ca0();
   input += synapse0x2038ce0();
   input += synapse0x2038d20();
   input += synapse0x2038d60();
   input += synapse0x2038da0();
   input += synapse0x2038de0();
   input += synapse0x2038e20();
   input += synapse0x2038e60();
   input += synapse0x2038ea0();
   input += synapse0x2038ee0();
   input += synapse0x2038f20();
   input += synapse0x2038f60();
   input += synapse0x2038fa0();
   input += synapse0x2038fe0();
   input += synapse0x2038a70();
   input += synapse0x2038ab0();
   input += synapse0x2039130();
   input += synapse0x2039170();
   input += synapse0x20391b0();
   input += synapse0x20391f0();
   input += synapse0x2039230();
   input += synapse0x2039270();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x20388e0() {
   double input = input0x20388e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x20392b0() {
   double input = -3.54627;
   input += synapse0x20395f0();
   input += synapse0x2039630();
   input += synapse0x2039670();
   input += synapse0x20396b0();
   input += synapse0x20396f0();
   input += synapse0x2039730();
   input += synapse0x2039770();
   input += synapse0x20397b0();
   input += synapse0x20397f0();
   input += synapse0x2039830();
   input += synapse0x2039870();
   input += synapse0x20398b0();
   input += synapse0x20398f0();
   input += synapse0x2039930();
   input += synapse0x2039970();
   input += synapse0x20399b0();
   input += synapse0x2039440();
   input += synapse0x2039480();
   input += synapse0x2039b00();
   input += synapse0x2039b40();
   input += synapse0x2039b80();
   input += synapse0x2039bc0();
   input += synapse0x2039c00();
   input += synapse0x2039c40();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x20392b0() {
   double input = input0x20392b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2039c80() {
   double input = 8.54768;
   input += synapse0x2039fc0();
   input += synapse0x202e590();
   input += synapse0x202e5d0();
   input += synapse0x202e610();
   input += synapse0x202e860();
   input += synapse0x202e8a0();
   input += synapse0x202e8e0();
   input += synapse0x202eb30();
   input += synapse0x202eb70();
   input += synapse0x202edc0();
   input += synapse0x202ee00();
   input += synapse0x202ee40();
   input += synapse0x202f090();
   input += synapse0x202f0d0();
   input += synapse0x202f320();
   input += synapse0x202f360();
   input += synapse0x2039e10();
   input += synapse0x2039e50();
   input += synapse0x202f4b0();
   input += synapse0x202f9c0();
   input += synapse0x202fa00();
   input += synapse0x202fa40();
   input += synapse0x202fc90();
   input += synapse0x202fcd0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2039c80() {
   double input = input0x2039c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x202fd10() {
   double input = 1.38862;
   input += synapse0x202f580();
   input += synapse0x202f5c0();
   input += synapse0x202f600();
   input += synapse0x202f640();
   input += synapse0x202ffc0();
   input += synapse0x203c310();
   input += synapse0x203c350();
   input += synapse0x203c390();
   input += synapse0x203c3d0();
   input += synapse0x203c410();
   input += synapse0x203c450();
   input += synapse0x203c490();
   input += synapse0x203c4d0();
   input += synapse0x203c510();
   input += synapse0x203c550();
   input += synapse0x203c590();
   input += synapse0x202fea0();
   input += synapse0x202fee0();
   input += synapse0x203c6e0();
   input += synapse0x203c720();
   input += synapse0x203c760();
   input += synapse0x203c7a0();
   input += synapse0x203c7e0();
   input += synapse0x203c820();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x202fd10() {
   double input = input0x202fd10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x203c860() {
   double input = -1.27328;
   input += synapse0x203cba0();
   input += synapse0x203cbe0();
   input += synapse0x203cc20();
   input += synapse0x203cc60();
   input += synapse0x203cca0();
   input += synapse0x203cce0();
   input += synapse0x203cd20();
   input += synapse0x203cd60();
   input += synapse0x203cda0();
   input += synapse0x203cde0();
   input += synapse0x203ce20();
   input += synapse0x203ce60();
   input += synapse0x203cea0();
   input += synapse0x203cee0();
   input += synapse0x203cf20();
   input += synapse0x203cf60();
   input += synapse0x203c9f0();
   input += synapse0x203ca30();
   input += synapse0x203d0b0();
   input += synapse0x203d0f0();
   input += synapse0x203d130();
   input += synapse0x203d170();
   input += synapse0x203d1b0();
   input += synapse0x203d1f0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x203c860() {
   double input = input0x203c860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x203d230() {
   double input = 2.26711;
   input += synapse0x203d570();
   input += synapse0x203d5b0();
   input += synapse0x203d5f0();
   input += synapse0x203d630();
   input += synapse0x203d670();
   input += synapse0x203d6b0();
   input += synapse0x203d6f0();
   input += synapse0x203d730();
   input += synapse0x203d770();
   input += synapse0x203d7b0();
   input += synapse0x203d7f0();
   input += synapse0x203d830();
   input += synapse0x203d870();
   input += synapse0x203d8b0();
   input += synapse0x203d8f0();
   input += synapse0x203d930();
   input += synapse0x203d3c0();
   input += synapse0x203d400();
   input += synapse0x203da80();
   input += synapse0x203dac0();
   input += synapse0x203db00();
   input += synapse0x203db40();
   input += synapse0x203db80();
   input += synapse0x203dbc0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x203d230() {
   double input = input0x203d230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x203dc00() {
   double input = 1.21556;
   input += synapse0x203df40();
   input += synapse0x203df80();
   input += synapse0x203dfc0();
   input += synapse0x203e000();
   input += synapse0x203e040();
   input += synapse0x203e080();
   input += synapse0x203e0c0();
   input += synapse0x203e100();
   input += synapse0x203e140();
   input += synapse0x203e180();
   input += synapse0x203e1c0();
   input += synapse0x203e200();
   input += synapse0x203e240();
   input += synapse0x203e280();
   input += synapse0x203e2c0();
   input += synapse0x203e300();
   input += synapse0x203dd90();
   input += synapse0x203ddd0();
   input += synapse0x203e450();
   input += synapse0x203e490();
   input += synapse0x203e4d0();
   input += synapse0x203e510();
   input += synapse0x203e550();
   input += synapse0x203e590();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x203dc00() {
   double input = input0x203dc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x203e5d0() {
   double input = -0.637949;
   input += synapse0x203e910();
   input += synapse0x203e950();
   input += synapse0x203e990();
   input += synapse0x203e9d0();
   input += synapse0x203ea10();
   input += synapse0x203ea50();
   input += synapse0x203ea90();
   input += synapse0x203ead0();
   input += synapse0x203eb10();
   input += synapse0x203eb50();
   input += synapse0x203eb90();
   input += synapse0x203ebd0();
   input += synapse0x203ec10();
   input += synapse0x203ec50();
   input += synapse0x203ec90();
   input += synapse0x203ecd0();
   input += synapse0x203e760();
   input += synapse0x203e7a0();
   input += synapse0x203ee20();
   input += synapse0x203ee60();
   input += synapse0x203eea0();
   input += synapse0x203eee0();
   input += synapse0x203ef20();
   input += synapse0x203ef60();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x203e5d0() {
   double input = input0x203e5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x203efa0() {
   double input = 1.05993;
   input += synapse0x203f2e0();
   input += synapse0x203f320();
   input += synapse0x203f360();
   input += synapse0x203f3a0();
   input += synapse0x203f3e0();
   input += synapse0x203f420();
   input += synapse0x203f460();
   input += synapse0x203f4a0();
   input += synapse0x203f4e0();
   input += synapse0x203f520();
   input += synapse0x203f560();
   input += synapse0x203f5a0();
   input += synapse0x203f5e0();
   input += synapse0x203f620();
   input += synapse0x203f660();
   input += synapse0x203f6a0();
   input += synapse0x203f130();
   input += synapse0x203f170();
   input += synapse0x203f7f0();
   input += synapse0x203f830();
   input += synapse0x203f870();
   input += synapse0x203f8b0();
   input += synapse0x203f8f0();
   input += synapse0x203f930();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x203efa0() {
   double input = input0x203efa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x203f970() {
   double input = -1.34468;
   input += synapse0x203fcb0();
   input += synapse0x203fcf0();
   input += synapse0x203fd30();
   input += synapse0x203fd70();
   input += synapse0x203fdb0();
   input += synapse0x203fdf0();
   input += synapse0x203fe30();
   input += synapse0x203fe70();
   input += synapse0x203feb0();
   input += synapse0x203fef0();
   input += synapse0x203ff30();
   input += synapse0x203ff70();
   input += synapse0x203ffb0();
   input += synapse0x203fff0();
   input += synapse0x2040030();
   input += synapse0x2040070();
   input += synapse0x203fb00();
   input += synapse0x203fb40();
   input += synapse0x20401c0();
   input += synapse0x2040200();
   input += synapse0x2040240();
   input += synapse0x2040280();
   input += synapse0x20402c0();
   input += synapse0x2040300();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x203f970() {
   double input = input0x203f970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2040340() {
   double input = 0.0295704;
   input += synapse0x2040680();
   input += synapse0x20406c0();
   input += synapse0x2040700();
   input += synapse0x2040740();
   input += synapse0x2040780();
   input += synapse0x20407c0();
   input += synapse0x2040800();
   input += synapse0x2040840();
   input += synapse0x2040880();
   input += synapse0x20408c0();
   input += synapse0x2040900();
   input += synapse0x2040940();
   input += synapse0x2040980();
   input += synapse0x20409c0();
   input += synapse0x2040a00();
   input += synapse0x2040a40();
   input += synapse0x20404d0();
   input += synapse0x2040510();
   input += synapse0x2040b90();
   input += synapse0x2040bd0();
   input += synapse0x2040c10();
   input += synapse0x2040c50();
   input += synapse0x2040c90();
   input += synapse0x2040cd0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2040340() {
   double input = input0x2040340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2040d10() {
   double input = 4.41412;
   input += synapse0x2029780();
   input += synapse0x20297c0();
   input += synapse0x2029800();
   input += synapse0x2029840();
   input += synapse0x2029880();
   input += synapse0x20298c0();
   input += synapse0x2029900();
   input += synapse0x2029940();
   input += synapse0x2041460();
   input += synapse0x20414a0();
   input += synapse0x20414e0();
   input += synapse0x2041520();
   input += synapse0x2041560();
   input += synapse0x20415a0();
   input += synapse0x20415e0();
   input += synapse0x2041620();
   input += synapse0x2040ea0();
   input += synapse0x2040ee0();
   input += synapse0x2041770();
   input += synapse0x20417b0();
   input += synapse0x20417f0();
   input += synapse0x2041830();
   input += synapse0x2041870();
   input += synapse0x20418b0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2040d10() {
   double input = input0x2040d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x20418f0() {
   double input = -0.47008;
   input += synapse0x2041c30();
   input += synapse0x2041c70();
   input += synapse0x2041cb0();
   input += synapse0x2041cf0();
   input += synapse0x2041d30();
   input += synapse0x2041d70();
   input += synapse0x2041db0();
   input += synapse0x2041df0();
   input += synapse0x2041e30();
   input += synapse0x2041e70();
   input += synapse0x2041eb0();
   input += synapse0x2041ef0();
   input += synapse0x2041f30();
   input += synapse0x2041f70();
   input += synapse0x2041fb0();
   input += synapse0x2041ff0();
   input += synapse0x2041a80();
   input += synapse0x2041ac0();
   input += synapse0x2042140();
   input += synapse0x2042180();
   input += synapse0x20421c0();
   input += synapse0x2042200();
   input += synapse0x2042240();
   input += synapse0x2042280();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x20418f0() {
   double input = input0x20418f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x20422c0() {
   double input = -5.60581;
   input += synapse0x2042600();
   input += synapse0x2042640();
   input += synapse0x2042680();
   input += synapse0x20426c0();
   input += synapse0x2042700();
   input += synapse0x2042740();
   input += synapse0x2042780();
   input += synapse0x20427c0();
   input += synapse0x2042800();
   input += synapse0x2042840();
   input += synapse0x2042880();
   input += synapse0x20428c0();
   input += synapse0x2042900();
   input += synapse0x2042940();
   input += synapse0x2042980();
   input += synapse0x20429c0();
   input += synapse0x2042450();
   input += synapse0x2042490();
   input += synapse0x2032fc0();
   input += synapse0x2033000();
   input += synapse0x2033040();
   input += synapse0x2033080();
   input += synapse0x20330c0();
   input += synapse0x2033100();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x20422c0() {
   double input = input0x20422c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2033140() {
   double input = 0.150017;
   input += synapse0x2033480();
   input += synapse0x20334c0();
   input += synapse0x2033500();
   input += synapse0x2033540();
   input += synapse0x2033580();
   input += synapse0x20335c0();
   input += synapse0x2033600();
   input += synapse0x2033640();
   input += synapse0x2033680();
   input += synapse0x20336c0();
   input += synapse0x2033700();
   input += synapse0x2033740();
   input += synapse0x2033780();
   input += synapse0x20337c0();
   input += synapse0x2033800();
   input += synapse0x2033840();
   input += synapse0x20332d0();
   input += synapse0x2033310();
   input += synapse0x2033990();
   input += synapse0x20339d0();
   input += synapse0x2033a10();
   input += synapse0x2033a50();
   input += synapse0x2033a90();
   input += synapse0x2033ad0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2033140() {
   double input = input0x2033140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2033b10() {
   double input = 0.248417;
   input += synapse0x2033e50();
   input += synapse0x2033e90();
   input += synapse0x2033ed0();
   input += synapse0x2033f10();
   input += synapse0x2033f50();
   input += synapse0x2033f90();
   input += synapse0x2033fd0();
   input += synapse0x2034010();
   input += synapse0x2034050();
   input += synapse0x2034090();
   input += synapse0x20340d0();
   input += synapse0x2034110();
   input += synapse0x2034150();
   input += synapse0x2034190();
   input += synapse0x20341d0();
   input += synapse0x2034210();
   input += synapse0x2033ca0();
   input += synapse0x2033ce0();
   input += synapse0x2034360();
   input += synapse0x20343a0();
   input += synapse0x20343e0();
   input += synapse0x2034420();
   input += synapse0x2034460();
   input += synapse0x20344a0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2033b10() {
   double input = input0x2033b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x20344e0() {
   double input = -1.44258;
   input += synapse0x2034820();
   input += synapse0x2034860();
   input += synapse0x20348a0();
   input += synapse0x20348e0();
   input += synapse0x2034920();
   input += synapse0x2034960();
   input += synapse0x20349a0();
   input += synapse0x20349e0();
   input += synapse0x2034a20();
   input += synapse0x2034a60();
   input += synapse0x2034aa0();
   input += synapse0x2034ae0();
   input += synapse0x2034b20();
   input += synapse0x2034b60();
   input += synapse0x2034ba0();
   input += synapse0x2034be0();
   input += synapse0x2034670();
   input += synapse0x20346b0();
   input += synapse0x2034d30();
   input += synapse0x2034d70();
   input += synapse0x2034db0();
   input += synapse0x2034df0();
   input += synapse0x2034e30();
   input += synapse0x2034e70();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x20344e0() {
   double input = input0x20344e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2046b20() {
   double input = -1.81064;
   input += synapse0x2046d40();
   input += synapse0x2046d80();
   input += synapse0x2046dc0();
   input += synapse0x2046e00();
   input += synapse0x2046e40();
   input += synapse0x2046e80();
   input += synapse0x2046ec0();
   input += synapse0x2046f00();
   input += synapse0x2046f40();
   input += synapse0x2046f80();
   input += synapse0x2046fc0();
   input += synapse0x2047000();
   input += synapse0x2047040();
   input += synapse0x2047080();
   input += synapse0x20470c0();
   input += synapse0x2047100();
   input += synapse0x2034eb0();
   input += synapse0x2034ef0();
   input += synapse0x2047250();
   input += synapse0x2047290();
   input += synapse0x20472d0();
   input += synapse0x2047310();
   input += synapse0x2047350();
   input += synapse0x2047390();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2046b20() {
   double input = input0x2046b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x20473d0() {
   double input = -0.11542;
   input += synapse0x2047710();
   input += synapse0x2047750();
   input += synapse0x2047790();
   input += synapse0x20477d0();
   input += synapse0x2047810();
   input += synapse0x2047850();
   input += synapse0x2047890();
   input += synapse0x20478d0();
   input += synapse0x2047910();
   input += synapse0x2047950();
   input += synapse0x2047990();
   input += synapse0x20479d0();
   input += synapse0x2047a10();
   input += synapse0x2047a50();
   input += synapse0x2047a90();
   input += synapse0x2047ad0();
   input += synapse0x2047560();
   input += synapse0x20475a0();
   input += synapse0x2047c20();
   input += synapse0x2047c60();
   input += synapse0x2047ca0();
   input += synapse0x2047ce0();
   input += synapse0x2047d20();
   input += synapse0x2047d60();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x20473d0() {
   double input = input0x20473d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2047da0() {
   double input = 6.46576;
   input += synapse0x20480e0();
   input += synapse0x2048120();
   input += synapse0x2048160();
   input += synapse0x20481a0();
   input += synapse0x20481e0();
   input += synapse0x2048220();
   input += synapse0x2048260();
   input += synapse0x20482a0();
   input += synapse0x20482e0();
   input += synapse0x2048320();
   input += synapse0x2048360();
   input += synapse0x20483a0();
   input += synapse0x20483e0();
   input += synapse0x2048420();
   input += synapse0x2048460();
   input += synapse0x20484a0();
   input += synapse0x2047f30();
   input += synapse0x2047f70();
   input += synapse0x20485f0();
   input += synapse0x2048630();
   input += synapse0x2048670();
   input += synapse0x20486b0();
   input += synapse0x20486f0();
   input += synapse0x2048730();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2047da0() {
   double input = input0x2047da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2048770() {
   double input = -0.624309;
   input += synapse0x2048ab0();
   input += synapse0x2048af0();
   input += synapse0x2048b30();
   input += synapse0x2048b70();
   input += synapse0x2048bb0();
   input += synapse0x2048bf0();
   input += synapse0x2048c30();
   input += synapse0x2048c70();
   input += synapse0x2048cb0();
   input += synapse0x2048cf0();
   input += synapse0x2048d30();
   input += synapse0x2048d70();
   input += synapse0x2048db0();
   input += synapse0x2048df0();
   input += synapse0x2048e30();
   input += synapse0x2048e70();
   input += synapse0x2048900();
   input += synapse0x2048940();
   input += synapse0x2048fc0();
   input += synapse0x2049000();
   input += synapse0x2049040();
   input += synapse0x2049080();
   input += synapse0x20490c0();
   input += synapse0x2049100();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2048770() {
   double input = input0x2048770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x204f970() {
   double input = 1.36102;
   input += synapse0x2025690();
   input += synapse0x20256d0();
   input += synapse0x2026bb0();
   input += synapse0x2026bf0();
   input += synapse0x2027580();
   input += synapse0x20275c0();
   input += synapse0x2028350();
   input += synapse0x2028390();
   input += synapse0x2028d20();
   input += synapse0x2028d60();
   input += synapse0x20296f0();
   input += synapse0x2029730();
   input += synapse0x202a1d0();
   input += synapse0x202a210();
   input += synapse0x202aba0();
   input += synapse0x202abe0();
   input += synapse0x2027c80();
   input += synapse0x2027cc0();
   input += synapse0x202c750();
   input += synapse0x202c790();
   input += synapse0x202d120();
   input += synapse0x202d160();
   input += synapse0x202daf0();
   input += synapse0x202db30();
   input += synapse0x202e4c0();
   input += synapse0x202e500();
   input += synapse0x20226a0();
   input += synapse0x20226e0();
   input += synapse0x20305b0();
   input += synapse0x20305f0();
   input += synapse0x2030f80();
   input += synapse0x2030fc0();
   input += synapse0x2031950();
   input += synapse0x2031990();
   input += synapse0x2032320();
   input += synapse0x2032360();
   input += synapse0x2032cf0();
   input += synapse0x2032d30();
   input += synapse0x202b840();
   input += synapse0x202b880();
   input += synapse0x20350f0();
   input += synapse0x2035130();
   input += synapse0x2035a80();
   input += synapse0x2035ac0();
   input += synapse0x2036450();
   input += synapse0x2036490();
   input += synapse0x2036e20();
   input += synapse0x2036e60();
   input += synapse0x20377f0();
   input += synapse0x2037830();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x204f970() {
   double input = input0x204f970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x204fd10() {
   double input = -4.03492;
   input += synapse0x2039f30();
   input += synapse0x2039f70();
   input += synapse0x202f4f0();
   input += synapse0x202f530();
   input += synapse0x203cb10();
   input += synapse0x203cb50();
   input += synapse0x203d4e0();
   input += synapse0x203d520();
   input += synapse0x203deb0();
   input += synapse0x203def0();
   input += synapse0x203e880();
   input += synapse0x203e8c0();
   input += synapse0x203f250();
   input += synapse0x203f290();
   input += synapse0x203fc20();
   input += synapse0x203fc60();
   input += synapse0x20405f0();
   input += synapse0x2040630();
   input += synapse0x2040fc0();
   input += synapse0x2041000();
   input += synapse0x2041ba0();
   input += synapse0x2041be0();
   input += synapse0x2042570();
   input += synapse0x20425b0();
   input += synapse0x20333f0();
   input += synapse0x2033430();
   input += synapse0x2033dc0();
   input += synapse0x2033e00();
   input += synapse0x2034790();
   input += synapse0x20347d0();
   input += synapse0x2046cb0();
   input += synapse0x2046cf0();
   input += synapse0x2047680();
   input += synapse0x20476c0();
   input += synapse0x2048050();
   input += synapse0x2048090();
   input += synapse0x2048a20();
   input += synapse0x2048a60();
   input += synapse0x2024950();
   input += synapse0x2024990();
   input += synapse0x20381c0();
   input += synapse0x2038200();
   input += synapse0x2049140();
   input += synapse0x2049180();
   input += synapse0x20491c0();
   input += synapse0x2049200();
   input += synapse0x20500b0();
   input += synapse0x20500f0();
   input += synapse0x2050130();
   input += synapse0x2050170();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x204fd10() {
   double input = input0x204fd10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x20501b0() {
   double input = 0.704561;
   input += synapse0x20504f0();
   input += synapse0x2050530();
   input += synapse0x2050570();
   input += synapse0x20505b0();
   input += synapse0x20505f0();
   input += synapse0x2050630();
   input += synapse0x2050670();
   input += synapse0x20506b0();
   input += synapse0x20506f0();
   input += synapse0x2050730();
   input += synapse0x2050770();
   input += synapse0x20507b0();
   input += synapse0x20507f0();
   input += synapse0x2050830();
   input += synapse0x2050870();
   input += synapse0x20508b0();
   input += synapse0x2050340();
   input += synapse0x2050380();
   input += synapse0x2050a00();
   input += synapse0x2050a40();
   input += synapse0x2050a80();
   input += synapse0x2050ac0();
   input += synapse0x2050b00();
   input += synapse0x2050b40();
   input += synapse0x2050b80();
   input += synapse0x2050bc0();
   input += synapse0x2050c00();
   input += synapse0x2050c40();
   input += synapse0x2050c80();
   input += synapse0x2050cc0();
   input += synapse0x2050d00();
   input += synapse0x2050d40();
   input += synapse0x20508f0();
   input += synapse0x2050930();
   input += synapse0x2050970();
   input += synapse0x20509b0();
   input += synapse0x2050f90();
   input += synapse0x2050fd0();
   input += synapse0x2051010();
   input += synapse0x2051050();
   input += synapse0x2051090();
   input += synapse0x20510d0();
   input += synapse0x2051110();
   input += synapse0x2051150();
   input += synapse0x2051190();
   input += synapse0x20511d0();
   input += synapse0x2051210();
   input += synapse0x2051250();
   input += synapse0x2051290();
   input += synapse0x20512d0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x20501b0() {
   double input = input0x20501b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2051310() {
   double input = 0.576476;
   input += synapse0x2051650();
   input += synapse0x2051690();
   input += synapse0x20516d0();
   input += synapse0x2051710();
   input += synapse0x2051750();
   input += synapse0x2051790();
   input += synapse0x20517d0();
   input += synapse0x2051810();
   input += synapse0x2051850();
   input += synapse0x2051890();
   input += synapse0x20518d0();
   input += synapse0x2051910();
   input += synapse0x2051950();
   input += synapse0x2051990();
   input += synapse0x20519d0();
   input += synapse0x2051a10();
   input += synapse0x20514a0();
   input += synapse0x20514e0();
   input += synapse0x2051b60();
   input += synapse0x2051ba0();
   input += synapse0x2051be0();
   input += synapse0x2051c20();
   input += synapse0x2051c60();
   input += synapse0x2051ca0();
   input += synapse0x2051ce0();
   input += synapse0x2051d20();
   input += synapse0x2051d60();
   input += synapse0x2051da0();
   input += synapse0x2051de0();
   input += synapse0x2051e20();
   input += synapse0x2051e60();
   input += synapse0x2051ea0();
   input += synapse0x2051a50();
   input += synapse0x2051a90();
   input += synapse0x2051ad0();
   input += synapse0x2051b10();
   input += synapse0x20520f0();
   input += synapse0x2052130();
   input += synapse0x2052170();
   input += synapse0x20521b0();
   input += synapse0x20521f0();
   input += synapse0x2052230();
   input += synapse0x2052270();
   input += synapse0x20522b0();
   input += synapse0x20522f0();
   input += synapse0x2052330();
   input += synapse0x2052370();
   input += synapse0x20523b0();
   input += synapse0x20523f0();
   input += synapse0x2052430();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2051310() {
   double input = input0x2051310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x2052470() {
   double input = -0.720962;
   input += synapse0x20527b0();
   input += synapse0x20527f0();
   input += synapse0x2052830();
   input += synapse0x2052870();
   input += synapse0x20528b0();
   input += synapse0x20528f0();
   input += synapse0x2052930();
   input += synapse0x2052970();
   input += synapse0x20529b0();
   input += synapse0x20529f0();
   input += synapse0x2052a30();
   input += synapse0x2052a70();
   input += synapse0x2052ab0();
   input += synapse0x2052af0();
   input += synapse0x2052b30();
   input += synapse0x2052b70();
   input += synapse0x2052600();
   input += synapse0x2052640();
   input += synapse0x2052cc0();
   input += synapse0x2052d00();
   input += synapse0x2052d40();
   input += synapse0x2052d80();
   input += synapse0x2052dc0();
   input += synapse0x2052e00();
   input += synapse0x2052e40();
   input += synapse0x2052e80();
   input += synapse0x2052ec0();
   input += synapse0x2052f00();
   input += synapse0x2052f40();
   input += synapse0x2052f80();
   input += synapse0x2052fc0();
   input += synapse0x2053000();
   input += synapse0x2052bb0();
   input += synapse0x2052bf0();
   input += synapse0x2052c30();
   input += synapse0x2052c70();
   input += synapse0x2053250();
   input += synapse0x2053290();
   input += synapse0x20532d0();
   input += synapse0x2053310();
   input += synapse0x2053350();
   input += synapse0x2053390();
   input += synapse0x20533d0();
   input += synapse0x2053410();
   input += synapse0x2053450();
   input += synapse0x2053490();
   input += synapse0x20534d0();
   input += synapse0x2053510();
   input += synapse0x2053550();
   input += synapse0x2053590();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x2052470() {
   double input = input0x2052470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi3::input0x20535d0() {
   double input = 4.44238;
   input += synapse0x20537f0();
   input += synapse0x2053830();
   input += synapse0x2053870();
   input += synapse0x20538b0();
   input += synapse0x20538f0();
   return input;
}

double NNfunction_nn_chi3_chi3::neuron0x20535d0() {
   double input = input0x20535d0();
   return (input * 1)+0;
}

double NNfunction_nn_chi3_chi3::synapse0x201f710() {
   return (neuron0x201f790()*-0.247642);
}

double NNfunction_nn_chi3_chi3::synapse0x201f750() {
   return (neuron0x201fa40()*-0.0138753);
}

double NNfunction_nn_chi3_chi3::synapse0x20249e0() {
   return (neuron0x201fd80()*1.40979);
}

double NNfunction_nn_chi3_chi3::synapse0x2024a20() {
   return (neuron0x20200c0()*-0.64774);
}

double NNfunction_nn_chi3_chi3::synapse0x2024a60() {
   return (neuron0x2020400()*-0.202503);
}

double NNfunction_nn_chi3_chi3::synapse0x2024aa0() {
   return (neuron0x2020740()*0.205027);
}

double NNfunction_nn_chi3_chi3::synapse0x2024ae0() {
   return (neuron0x2020a80()*0.451714);
}

double NNfunction_nn_chi3_chi3::synapse0x2024b20() {
   return (neuron0x2020dc0()*0.173781);
}

double NNfunction_nn_chi3_chi3::synapse0x2024b60() {
   return (neuron0x2021100()*-0.777499);
}

double NNfunction_nn_chi3_chi3::synapse0x2024ba0() {
   return (neuron0x2021440()*-0.90936);
}

double NNfunction_nn_chi3_chi3::synapse0x2024be0() {
   return (neuron0x2021780()*0.290473);
}

double NNfunction_nn_chi3_chi3::synapse0x2024c20() {
   return (neuron0x2021ac0()*-0.300386);
}

double NNfunction_nn_chi3_chi3::synapse0x2024c60() {
   return (neuron0x2021e00()*-0.691615);
}

double NNfunction_nn_chi3_chi3::synapse0x2024ca0() {
   return (neuron0x2022140()*-0.178069);
}

double NNfunction_nn_chi3_chi3::synapse0x2024ce0() {
   return (neuron0x2022480()*0.405784);
}

double NNfunction_nn_chi3_chi3::synapse0x2024d20() {
   return (neuron0x20227c0()*0.0742149);
}

double NNfunction_nn_chi3_chi3::synapse0x201f680() {
   return (neuron0x2022b00()*-0.148154);
}

double NNfunction_nn_chi3_chi3::synapse0x201f6c0() {
   return (neuron0x2023060()*0.114448);
}

double NNfunction_nn_chi3_chi3::synapse0x1dda850() {
   return (neuron0x2023280()*-0.166028);
}

double NNfunction_nn_chi3_chi3::synapse0x1dda890() {
   return (neuron0x20235c0()*0.541023);
}

double NNfunction_nn_chi3_chi3::synapse0x2024f80() {
   return (neuron0x2023900()*-0.289579);
}

double NNfunction_nn_chi3_chi3::synapse0x2024fc0() {
   return (neuron0x2023c40()*0.0133661);
}

double NNfunction_nn_chi3_chi3::synapse0x2025000() {
   return (neuron0x2023f80()*-0.236692);
}

double NNfunction_nn_chi3_chi3::synapse0x2025040() {
   return (neuron0x20242c0()*-0.186272);
}

double NNfunction_nn_chi3_chi3::synapse0x20253c0() {
   return (neuron0x201f790()*0.0171894);
}

double NNfunction_nn_chi3_chi3::synapse0x2025400() {
   return (neuron0x201fa40()*-0.0119756);
}

double NNfunction_nn_chi3_chi3::synapse0x2025440() {
   return (neuron0x201fd80()*7.03658);
}

double NNfunction_nn_chi3_chi3::synapse0x2025480() {
   return (neuron0x20200c0()*-0.0242975);
}

double NNfunction_nn_chi3_chi3::synapse0x20254c0() {
   return (neuron0x2020400()*0.00629673);
}

double NNfunction_nn_chi3_chi3::synapse0x2025500() {
   return (neuron0x2020740()*-0.0112769);
}

double NNfunction_nn_chi3_chi3::synapse0x2025540() {
   return (neuron0x2020a80()*-0.0151175);
}

double NNfunction_nn_chi3_chi3::synapse0x2025580() {
   return (neuron0x2020dc0()*-0.00893392);
}

double NNfunction_nn_chi3_chi3::synapse0x20255c0() {
   return (neuron0x2021100()*-0.0135956);
}

double NNfunction_nn_chi3_chi3::synapse0x2024e70() {
   return (neuron0x2021440()*-0.0178263);
}

double NNfunction_nn_chi3_chi3::synapse0x2024eb0() {
   return (neuron0x2021780()*0.00604695);
}

double NNfunction_nn_chi3_chi3::synapse0x2024ef0() {
   return (neuron0x2021ac0()*0.0140701);
}

double NNfunction_nn_chi3_chi3::synapse0x2024f30() {
   return (neuron0x2021e00()*0.0820802);
}

double NNfunction_nn_chi3_chi3::synapse0x2025810() {
   return (neuron0x2022140()*-0.0182328);
}

double NNfunction_nn_chi3_chi3::synapse0x2025850() {
   return (neuron0x2022480()*-0.0774565);
}

double NNfunction_nn_chi3_chi3::synapse0x2025890() {
   return (neuron0x20227c0()*-0.0152681);
}

double NNfunction_nn_chi3_chi3::synapse0x2025210() {
   return (neuron0x2022b00()*-0.00263387);
}

double NNfunction_nn_chi3_chi3::synapse0x2025250() {
   return (neuron0x2023060()*-0.0182829);
}

double NNfunction_nn_chi3_chi3::synapse0x20259e0() {
   return (neuron0x2023280()*-0.0137083);
}

double NNfunction_nn_chi3_chi3::synapse0x2025a20() {
   return (neuron0x20235c0()*-0.00798001);
}

double NNfunction_nn_chi3_chi3::synapse0x2025a60() {
   return (neuron0x2023900()*0.0218287);
}

double NNfunction_nn_chi3_chi3::synapse0x2025aa0() {
   return (neuron0x2023c40()*-0.00306621);
}

double NNfunction_nn_chi3_chi3::synapse0x2025ae0() {
   return (neuron0x2023f80()*0.00426795);
}

double NNfunction_nn_chi3_chi3::synapse0x2025b20() {
   return (neuron0x20242c0()*-2.18265);
}

double NNfunction_nn_chi3_chi3::synapse0x2025ea0() {
   return (neuron0x201f790()*-0.0581577);
}

double NNfunction_nn_chi3_chi3::synapse0x2025ee0() {
   return (neuron0x201fa40()*0.0183131);
}

double NNfunction_nn_chi3_chi3::synapse0x2025f20() {
   return (neuron0x201fd80()*1.68864);
}

double NNfunction_nn_chi3_chi3::synapse0x2025f60() {
   return (neuron0x20200c0()*0.0172312);
}

double NNfunction_nn_chi3_chi3::synapse0x2025fa0() {
   return (neuron0x2020400()*-0.0403497);
}

double NNfunction_nn_chi3_chi3::synapse0x2025fe0() {
   return (neuron0x2020740()*0.0196589);
}

double NNfunction_nn_chi3_chi3::synapse0x2026020() {
   return (neuron0x2020a80()*0.0275763);
}

double NNfunction_nn_chi3_chi3::synapse0x2026060() {
   return (neuron0x2020dc0()*-0.0119621);
}

double NNfunction_nn_chi3_chi3::synapse0x20260a0() {
   return (neuron0x2021100()*0.0114769);
}

double NNfunction_nn_chi3_chi3::synapse0x20260e0() {
   return (neuron0x2021440()*-0.0243288);
}

double NNfunction_nn_chi3_chi3::synapse0x2026120() {
   return (neuron0x2021780()*-0.00109145);
}

double NNfunction_nn_chi3_chi3::synapse0x2026160() {
   return (neuron0x2021ac0()*-3.06257);
}

double NNfunction_nn_chi3_chi3::synapse0x20261a0() {
   return (neuron0x2021e00()*0.126822);
}

double NNfunction_nn_chi3_chi3::synapse0x20261e0() {
   return (neuron0x2022140()*0.043875);
}

double NNfunction_nn_chi3_chi3::synapse0x2026220() {
   return (neuron0x2022480()*0.10464);
}

double NNfunction_nn_chi3_chi3::synapse0x2026260() {
   return (neuron0x20227c0()*-0.000190892);
}

double NNfunction_nn_chi3_chi3::synapse0x2025cf0() {
   return (neuron0x2022b00()*0.00377087);
}

double NNfunction_nn_chi3_chi3::synapse0x2025d30() {
   return (neuron0x2023060()*0.0167972);
}

double NNfunction_nn_chi3_chi3::synapse0x200e800() {
   return (neuron0x2023280()*-0.0281642);
}

double NNfunction_nn_chi3_chi3::synapse0x1de8750() {
   return (neuron0x20235c0()*0.0401369);
}

double NNfunction_nn_chi3_chi3::synapse0x1de8790() {
   return (neuron0x2023900()*0.0190663);
}

double NNfunction_nn_chi3_chi3::synapse0x1f03ca0() {
   return (neuron0x2023c40()*-0.00486265);
}

double NNfunction_nn_chi3_chi3::synapse0x1f03ce0() {
   return (neuron0x2023f80()*-0.00193716);
}

double NNfunction_nn_chi3_chi3::synapse0x201f4f0() {
   return (neuron0x20242c0()*-0.00831772);
}

double NNfunction_nn_chi3_chi3::synapse0x1de9040() {
   return (neuron0x201f790()*-0.00422616);
}

double NNfunction_nn_chi3_chi3::synapse0x2025720() {
   return (neuron0x201fa40()*0.366795);
}

double NNfunction_nn_chi3_chi3::synapse0x2025760() {
   return (neuron0x201fd80()*-0.236528);
}

double NNfunction_nn_chi3_chi3::synapse0x20257a0() {
   return (neuron0x20200c0()*0.174597);
}

double NNfunction_nn_chi3_chi3::synapse0x20263b0() {
   return (neuron0x2020400()*-0.206371);
}

double NNfunction_nn_chi3_chi3::synapse0x20263f0() {
   return (neuron0x2020740()*0.224161);
}

double NNfunction_nn_chi3_chi3::synapse0x2026430() {
   return (neuron0x2020a80()*0.0768638);
}

double NNfunction_nn_chi3_chi3::synapse0x2026470() {
   return (neuron0x2020dc0()*-0.119887);
}

double NNfunction_nn_chi3_chi3::synapse0x20264b0() {
   return (neuron0x2021100()*-0.0533637);
}

double NNfunction_nn_chi3_chi3::synapse0x20264f0() {
   return (neuron0x2021440()*0.268879);
}

double NNfunction_nn_chi3_chi3::synapse0x2026530() {
   return (neuron0x2021780()*0.110751);
}

double NNfunction_nn_chi3_chi3::synapse0x2026570() {
   return (neuron0x2021ac0()*-0.207211);
}

double NNfunction_nn_chi3_chi3::synapse0x20265b0() {
   return (neuron0x2021e00()*0.115603);
}

double NNfunction_nn_chi3_chi3::synapse0x20265f0() {
   return (neuron0x2022140()*0.235778);
}

double NNfunction_nn_chi3_chi3::synapse0x2026630() {
   return (neuron0x2022480()*0.964011);
}

double NNfunction_nn_chi3_chi3::synapse0x2026670() {
   return (neuron0x20227c0()*0.382658);
}

double NNfunction_nn_chi3_chi3::synapse0x201f530() {
   return (neuron0x2022b00()*0.284476);
}

double NNfunction_nn_chi3_chi3::synapse0x201f570() {
   return (neuron0x2023060()*0.241272);
}

double NNfunction_nn_chi3_chi3::synapse0x201f5b0() {
   return (neuron0x2023280()*0.026874);
}

double NNfunction_nn_chi3_chi3::synapse0x20267c0() {
   return (neuron0x20235c0()*-0.132808);
}

double NNfunction_nn_chi3_chi3::synapse0x2026800() {
   return (neuron0x2023900()*-0.0937032);
}

double NNfunction_nn_chi3_chi3::synapse0x2026840() {
   return (neuron0x2023c40()*0.0746403);
}

double NNfunction_nn_chi3_chi3::synapse0x2026880() {
   return (neuron0x2023f80()*-0.18828);
}

double NNfunction_nn_chi3_chi3::synapse0x20268c0() {
   return (neuron0x20242c0()*-0.475787);
}

double NNfunction_nn_chi3_chi3::synapse0x2026c40() {
   return (neuron0x201f790()*0.0506417);
}

double NNfunction_nn_chi3_chi3::synapse0x2026c80() {
   return (neuron0x201fa40()*17.9894);
}

double NNfunction_nn_chi3_chi3::synapse0x2026cc0() {
   return (neuron0x201fd80()*-0.029164);
}

double NNfunction_nn_chi3_chi3::synapse0x2026d00() {
   return (neuron0x20200c0()*0.00257954);
}

double NNfunction_nn_chi3_chi3::synapse0x2026d40() {
   return (neuron0x2020400()*-0.00247091);
}

double NNfunction_nn_chi3_chi3::synapse0x2026d80() {
   return (neuron0x2020740()*0.00919369);
}

double NNfunction_nn_chi3_chi3::synapse0x2026dc0() {
   return (neuron0x2020a80()*0.0121292);
}

double NNfunction_nn_chi3_chi3::synapse0x2026e00() {
   return (neuron0x2020dc0()*-0.00416808);
}

double NNfunction_nn_chi3_chi3::synapse0x2026e40() {
   return (neuron0x2021100()*-0.00415418);
}

double NNfunction_nn_chi3_chi3::synapse0x2026e80() {
   return (neuron0x2021440()*0.00347638);
}

double NNfunction_nn_chi3_chi3::synapse0x2026ec0() {
   return (neuron0x2021780()*-0.0176886);
}

double NNfunction_nn_chi3_chi3::synapse0x2026f00() {
   return (neuron0x2021ac0()*-0.018918);
}

double NNfunction_nn_chi3_chi3::synapse0x2026f40() {
   return (neuron0x2021e00()*0.00956564);
}

double NNfunction_nn_chi3_chi3::synapse0x2026f80() {
   return (neuron0x2022140()*0.00732595);
}

double NNfunction_nn_chi3_chi3::synapse0x2026fc0() {
   return (neuron0x2022480()*0.352684);
}

double NNfunction_nn_chi3_chi3::synapse0x2027000() {
   return (neuron0x20227c0()*0.0186867);
}

double NNfunction_nn_chi3_chi3::synapse0x2026a90() {
   return (neuron0x2022b00()*0.00601367);
}

double NNfunction_nn_chi3_chi3::synapse0x2026ad0() {
   return (neuron0x2023060()*0.0229508);
}

double NNfunction_nn_chi3_chi3::synapse0x2027150() {
   return (neuron0x2023280()*0.00413746);
}

double NNfunction_nn_chi3_chi3::synapse0x2027190() {
   return (neuron0x20235c0()*0.00243777);
}

double NNfunction_nn_chi3_chi3::synapse0x20271d0() {
   return (neuron0x2023900()*-0.0111055);
}

double NNfunction_nn_chi3_chi3::synapse0x2027210() {
   return (neuron0x2023c40()*-0.00300597);
}

double NNfunction_nn_chi3_chi3::synapse0x2027250() {
   return (neuron0x2023f80()*-0.00496397);
}

double NNfunction_nn_chi3_chi3::synapse0x2027290() {
   return (neuron0x20242c0()*1.81838);
}

double NNfunction_nn_chi3_chi3::synapse0x2027610() {
   return (neuron0x201f790()*0.0474332);
}

double NNfunction_nn_chi3_chi3::synapse0x2027650() {
   return (neuron0x201fa40()*2.31506);
}

double NNfunction_nn_chi3_chi3::synapse0x2027690() {
   return (neuron0x201fd80()*1.32874);
}

double NNfunction_nn_chi3_chi3::synapse0x20276d0() {
   return (neuron0x20200c0()*0.0542704);
}

double NNfunction_nn_chi3_chi3::synapse0x2027710() {
   return (neuron0x2020400()*-0.0750081);
}

double NNfunction_nn_chi3_chi3::synapse0x2027750() {
   return (neuron0x2020740()*-0.038594);
}

double NNfunction_nn_chi3_chi3::synapse0x2027790() {
   return (neuron0x2020a80()*-0.0532362);
}

double NNfunction_nn_chi3_chi3::synapse0x20277d0() {
   return (neuron0x2020dc0()*0.0330433);
}

double NNfunction_nn_chi3_chi3::synapse0x2027810() {
   return (neuron0x2021100()*-0.037876);
}

double NNfunction_nn_chi3_chi3::synapse0x1de8aa0() {
   return (neuron0x2021440()*-0.00211058);
}

double NNfunction_nn_chi3_chi3::synapse0x1de8ae0() {
   return (neuron0x2021780()*-0.0989777);
}

double NNfunction_nn_chi3_chi3::synapse0x1de8b20() {
   return (neuron0x2021ac0()*-0.138157);
}

double NNfunction_nn_chi3_chi3::synapse0x1de8b60() {
   return (neuron0x2021e00()*-0.228543);
}

double NNfunction_nn_chi3_chi3::synapse0x1de8ba0() {
   return (neuron0x2022140()*-0.12135);
}

double NNfunction_nn_chi3_chi3::synapse0x1de8be0() {
   return (neuron0x2022480()*0.561092);
}

double NNfunction_nn_chi3_chi3::synapse0x1de8c20() {
   return (neuron0x20227c0()*-0.0268991);
}

double NNfunction_nn_chi3_chi3::synapse0x2027460() {
   return (neuron0x2022b00()*-0.0874688);
}

double NNfunction_nn_chi3_chi3::synapse0x20274a0() {
   return (neuron0x2023060()*-0.173529);
}

double NNfunction_nn_chi3_chi3::synapse0x1de8d70() {
   return (neuron0x2023280()*-0.105637);
}

double NNfunction_nn_chi3_chi3::synapse0x1de8db0() {
   return (neuron0x20235c0()*-0.0267258);
}

double NNfunction_nn_chi3_chi3::synapse0x1de8df0() {
   return (neuron0x2023900()*-0.0058668);
}

double NNfunction_nn_chi3_chi3::synapse0x1de8e30() {
   return (neuron0x2023c40()*0.0266091);
}

double NNfunction_nn_chi3_chi3::synapse0x1de8e70() {
   return (neuron0x2023f80()*-0.107444);
}

double NNfunction_nn_chi3_chi3::synapse0x2028060() {
   return (neuron0x20242c0()*-0.256826);
}

double NNfunction_nn_chi3_chi3::synapse0x20283e0() {
   return (neuron0x201f790()*-0.0544534);
}

double NNfunction_nn_chi3_chi3::synapse0x2028420() {
   return (neuron0x201fa40()*-0.0215217);
}

double NNfunction_nn_chi3_chi3::synapse0x2028460() {
   return (neuron0x201fd80()*-0.194283);
}

double NNfunction_nn_chi3_chi3::synapse0x20284a0() {
   return (neuron0x20200c0()*-0.0857068);
}

double NNfunction_nn_chi3_chi3::synapse0x20284e0() {
   return (neuron0x2020400()*0.182594);
}

double NNfunction_nn_chi3_chi3::synapse0x2028520() {
   return (neuron0x2020740()*0.728983);
}

double NNfunction_nn_chi3_chi3::synapse0x2028560() {
   return (neuron0x2020a80()*0.248856);
}

double NNfunction_nn_chi3_chi3::synapse0x20285a0() {
   return (neuron0x2020dc0()*-0.769514);
}

double NNfunction_nn_chi3_chi3::synapse0x20285e0() {
   return (neuron0x2021100()*0.521525);
}

double NNfunction_nn_chi3_chi3::synapse0x2028620() {
   return (neuron0x2021440()*0.66227);
}

double NNfunction_nn_chi3_chi3::synapse0x2028660() {
   return (neuron0x2021780()*-0.0714462);
}

double NNfunction_nn_chi3_chi3::synapse0x20286a0() {
   return (neuron0x2021ac0()*0.519515);
}

double NNfunction_nn_chi3_chi3::synapse0x20286e0() {
   return (neuron0x2021e00()*0.416947);
}

double NNfunction_nn_chi3_chi3::synapse0x2028720() {
   return (neuron0x2022140()*0.454858);
}

double NNfunction_nn_chi3_chi3::synapse0x2028760() {
   return (neuron0x2022480()*-0.293334);
}

double NNfunction_nn_chi3_chi3::synapse0x20287a0() {
   return (neuron0x20227c0()*0.35024);
}

double NNfunction_nn_chi3_chi3::synapse0x2028230() {
   return (neuron0x2022b00()*-0.188955);
}

double NNfunction_nn_chi3_chi3::synapse0x2028270() {
   return (neuron0x2023060()*0.691034);
}

double NNfunction_nn_chi3_chi3::synapse0x20288f0() {
   return (neuron0x2023280()*0.277243);
}

double NNfunction_nn_chi3_chi3::synapse0x2028930() {
   return (neuron0x20235c0()*0.00711198);
}

double NNfunction_nn_chi3_chi3::synapse0x2028970() {
   return (neuron0x2023900()*0.176563);
}

double NNfunction_nn_chi3_chi3::synapse0x20289b0() {
   return (neuron0x2023c40()*-0.128635);
}

double NNfunction_nn_chi3_chi3::synapse0x20289f0() {
   return (neuron0x2023f80()*-0.239364);
}

double NNfunction_nn_chi3_chi3::synapse0x2028a30() {
   return (neuron0x20242c0()*-0.438202);
}

double NNfunction_nn_chi3_chi3::synapse0x2028db0() {
   return (neuron0x201f790()*-0.136203);
}

double NNfunction_nn_chi3_chi3::synapse0x2028df0() {
   return (neuron0x201fa40()*-0.100713);
}

double NNfunction_nn_chi3_chi3::synapse0x2028e30() {
   return (neuron0x201fd80()*1.68247);
}

double NNfunction_nn_chi3_chi3::synapse0x2028e70() {
   return (neuron0x20200c0()*0.0194496);
}

double NNfunction_nn_chi3_chi3::synapse0x2028eb0() {
   return (neuron0x2020400()*0.00387041);
}

double NNfunction_nn_chi3_chi3::synapse0x2028ef0() {
   return (neuron0x2020740()*0.0447538);
}

double NNfunction_nn_chi3_chi3::synapse0x2028f30() {
   return (neuron0x2020a80()*-0.00572118);
}

double NNfunction_nn_chi3_chi3::synapse0x2028f70() {
   return (neuron0x2020dc0()*0.0566366);
}

double NNfunction_nn_chi3_chi3::synapse0x2028fb0() {
   return (neuron0x2021100()*-0.0248373);
}

double NNfunction_nn_chi3_chi3::synapse0x2028ff0() {
   return (neuron0x2021440()*0.00172049);
}

double NNfunction_nn_chi3_chi3::synapse0x2029030() {
   return (neuron0x2021780()*0.00726198);
}

double NNfunction_nn_chi3_chi3::synapse0x2029070() {
   return (neuron0x2021ac0()*0.193892);
}

double NNfunction_nn_chi3_chi3::synapse0x20290b0() {
   return (neuron0x2021e00()*-0.0835402);
}

double NNfunction_nn_chi3_chi3::synapse0x20290f0() {
   return (neuron0x2022140()*-0.0789321);
}

double NNfunction_nn_chi3_chi3::synapse0x2029130() {
   return (neuron0x2022480()*-0.0250917);
}

double NNfunction_nn_chi3_chi3::synapse0x2029170() {
   return (neuron0x20227c0()*-0.00478084);
}

double NNfunction_nn_chi3_chi3::synapse0x2028c00() {
   return (neuron0x2022b00()*-0.0673132);
}

double NNfunction_nn_chi3_chi3::synapse0x2028c40() {
   return (neuron0x2023060()*0.0535175);
}

double NNfunction_nn_chi3_chi3::synapse0x20292c0() {
   return (neuron0x2023280()*-0.066417);
}

double NNfunction_nn_chi3_chi3::synapse0x2029300() {
   return (neuron0x20235c0()*0.0138142);
}

double NNfunction_nn_chi3_chi3::synapse0x2029340() {
   return (neuron0x2023900()*0.0192224);
}

double NNfunction_nn_chi3_chi3::synapse0x2029380() {
   return (neuron0x2023c40()*-0.0160466);
}

double NNfunction_nn_chi3_chi3::synapse0x20293c0() {
   return (neuron0x2023f80()*-0.0293687);
}

double NNfunction_nn_chi3_chi3::synapse0x2029400() {
   return (neuron0x20242c0()*0.673275);
}

double NNfunction_nn_chi3_chi3::synapse0x2022f50() {
   return (neuron0x201f790()*0.0281703);
}

double NNfunction_nn_chi3_chi3::synapse0x2022f90() {
   return (neuron0x201fa40()*-0.0907237);
}

double NNfunction_nn_chi3_chi3::synapse0x2022fd0() {
   return (neuron0x201fd80()*-0.239141);
}

double NNfunction_nn_chi3_chi3::synapse0x2023010() {
   return (neuron0x20200c0()*-0.0225489);
}

double NNfunction_nn_chi3_chi3::synapse0x2029990() {
   return (neuron0x2020400()*0.032394);
}

double NNfunction_nn_chi3_chi3::synapse0x20299d0() {
   return (neuron0x2020740()*0.0211654);
}

double NNfunction_nn_chi3_chi3::synapse0x2029a10() {
   return (neuron0x2020a80()*0.0100393);
}

double NNfunction_nn_chi3_chi3::synapse0x2029a50() {
   return (neuron0x2020dc0()*0.00151);
}

double NNfunction_nn_chi3_chi3::synapse0x2029a90() {
   return (neuron0x2021100()*-0.0192606);
}

double NNfunction_nn_chi3_chi3::synapse0x2029ad0() {
   return (neuron0x2021440()*-0.0514495);
}

double NNfunction_nn_chi3_chi3::synapse0x2029b10() {
   return (neuron0x2021780()*0.0279918);
}

double NNfunction_nn_chi3_chi3::synapse0x2029b50() {
   return (neuron0x2021ac0()*0.00728032);
}

double NNfunction_nn_chi3_chi3::synapse0x2029b90() {
   return (neuron0x2021e00()*-0.00464171);
}

double NNfunction_nn_chi3_chi3::synapse0x2029bd0() {
   return (neuron0x2022140()*-0.0049329);
}

double NNfunction_nn_chi3_chi3::synapse0x2029c10() {
   return (neuron0x2022480()*2.50365);
}

double NNfunction_nn_chi3_chi3::synapse0x2029c50() {
   return (neuron0x20227c0()*-0.0570739);
}

double NNfunction_nn_chi3_chi3::synapse0x20295d0() {
   return (neuron0x2022b00()*0.0249863);
}

double NNfunction_nn_chi3_chi3::synapse0x2029610() {
   return (neuron0x2023060()*-0.151436);
}

double NNfunction_nn_chi3_chi3::synapse0x2029da0() {
   return (neuron0x2023280()*0.00148612);
}

double NNfunction_nn_chi3_chi3::synapse0x2029de0() {
   return (neuron0x20235c0()*-0.0691007);
}

double NNfunction_nn_chi3_chi3::synapse0x2029e20() {
   return (neuron0x2023900()*0.0154222);
}

double NNfunction_nn_chi3_chi3::synapse0x2029e60() {
   return (neuron0x2023c40()*-0.00510733);
}

double NNfunction_nn_chi3_chi3::synapse0x2029ea0() {
   return (neuron0x2023f80()*0.0345064);
}

double NNfunction_nn_chi3_chi3::synapse0x2029ee0() {
   return (neuron0x20242c0()*-0.595371);
}

double NNfunction_nn_chi3_chi3::synapse0x202a260() {
   return (neuron0x201f790()*0.108222);
}

double NNfunction_nn_chi3_chi3::synapse0x202a2a0() {
   return (neuron0x201fa40()*-0.00748907);
}

double NNfunction_nn_chi3_chi3::synapse0x202a2e0() {
   return (neuron0x201fd80()*-6.29559);
}

double NNfunction_nn_chi3_chi3::synapse0x202a320() {
   return (neuron0x20200c0()*0.0119102);
}

double NNfunction_nn_chi3_chi3::synapse0x202a360() {
   return (neuron0x2020400()*-0.00732283);
}

double NNfunction_nn_chi3_chi3::synapse0x202a3a0() {
   return (neuron0x2020740()*-0.00206547);
}

double NNfunction_nn_chi3_chi3::synapse0x202a3e0() {
   return (neuron0x2020a80()*-0.0197899);
}

double NNfunction_nn_chi3_chi3::synapse0x202a420() {
   return (neuron0x2020dc0()*-0.0254718);
}

double NNfunction_nn_chi3_chi3::synapse0x202a460() {
   return (neuron0x2021100()*0.00945666);
}

double NNfunction_nn_chi3_chi3::synapse0x202a4a0() {
   return (neuron0x2021440()*0.0199106);
}

double NNfunction_nn_chi3_chi3::synapse0x202a4e0() {
   return (neuron0x2021780()*-0.0181996);
}

double NNfunction_nn_chi3_chi3::synapse0x202a520() {
   return (neuron0x2021ac0()*2.08037);
}

double NNfunction_nn_chi3_chi3::synapse0x202a560() {
   return (neuron0x2021e00()*0.0137388);
}

double NNfunction_nn_chi3_chi3::synapse0x202a5a0() {
   return (neuron0x2022140()*-0.0694678);
}

double NNfunction_nn_chi3_chi3::synapse0x202a5e0() {
   return (neuron0x2022480()*-0.0535866);
}

double NNfunction_nn_chi3_chi3::synapse0x202a620() {
   return (neuron0x20227c0()*0.00112647);
}

double NNfunction_nn_chi3_chi3::synapse0x202a0b0() {
   return (neuron0x2022b00()*-0.00372995);
}

double NNfunction_nn_chi3_chi3::synapse0x202a0f0() {
   return (neuron0x2023060()*-0.0437673);
}

double NNfunction_nn_chi3_chi3::synapse0x202a770() {
   return (neuron0x2023280()*-0.0242868);
}

double NNfunction_nn_chi3_chi3::synapse0x202a7b0() {
   return (neuron0x20235c0()*0.00688517);
}

double NNfunction_nn_chi3_chi3::synapse0x202a7f0() {
   return (neuron0x2023900()*0.00109453);
}

double NNfunction_nn_chi3_chi3::synapse0x202a830() {
   return (neuron0x2023c40()*-0.00485143);
}

double NNfunction_nn_chi3_chi3::synapse0x202a870() {
   return (neuron0x2023f80()*-0.00143123);
}

double NNfunction_nn_chi3_chi3::synapse0x202a8b0() {
   return (neuron0x20242c0()*0.10138);
}

double NNfunction_nn_chi3_chi3::synapse0x202ac30() {
   return (neuron0x201f790()*0.103481);
}

double NNfunction_nn_chi3_chi3::synapse0x202ac70() {
   return (neuron0x201fa40()*0.0613332);
}

double NNfunction_nn_chi3_chi3::synapse0x202acb0() {
   return (neuron0x201fd80()*-1.78218);
}

double NNfunction_nn_chi3_chi3::synapse0x202acf0() {
   return (neuron0x20200c0()*-0.0168916);
}

double NNfunction_nn_chi3_chi3::synapse0x202ad30() {
   return (neuron0x2020400()*-0.00727736);
}

double NNfunction_nn_chi3_chi3::synapse0x202ad70() {
   return (neuron0x2020740()*-0.031695);
}

double NNfunction_nn_chi3_chi3::synapse0x202adb0() {
   return (neuron0x2020a80()*0.0156278);
}

double NNfunction_nn_chi3_chi3::synapse0x202adf0() {
   return (neuron0x2020dc0()*-0.0320233);
}

double NNfunction_nn_chi3_chi3::synapse0x202ae30() {
   return (neuron0x2021100()*0.0363642);
}

double NNfunction_nn_chi3_chi3::synapse0x202ae70() {
   return (neuron0x2021440()*0.00406985);
}

double NNfunction_nn_chi3_chi3::synapse0x202aeb0() {
   return (neuron0x2021780()*0.020061);
}

double NNfunction_nn_chi3_chi3::synapse0x202aef0() {
   return (neuron0x2021ac0()*0.0234718);
}

double NNfunction_nn_chi3_chi3::synapse0x202af30() {
   return (neuron0x2021e00()*0.110847);
}

double NNfunction_nn_chi3_chi3::synapse0x202af70() {
   return (neuron0x2022140()*0.0612249);
}

double NNfunction_nn_chi3_chi3::synapse0x202afb0() {
   return (neuron0x2022480()*0.0501672);
}

double NNfunction_nn_chi3_chi3::synapse0x202aff0() {
   return (neuron0x20227c0()*0.0388964);
}

double NNfunction_nn_chi3_chi3::synapse0x202aa80() {
   return (neuron0x2022b00()*0.0775791);
}

double NNfunction_nn_chi3_chi3::synapse0x202aac0() {
   return (neuron0x2023060()*-0.0146243);
}

double NNfunction_nn_chi3_chi3::synapse0x2027850() {
   return (neuron0x2023280()*0.0708733);
}

double NNfunction_nn_chi3_chi3::synapse0x2027890() {
   return (neuron0x20235c0()*-0.0136935);
}

double NNfunction_nn_chi3_chi3::synapse0x20278d0() {
   return (neuron0x2023900()*-0.0168253);
}

double NNfunction_nn_chi3_chi3::synapse0x2027910() {
   return (neuron0x2023c40()*0.00166754);
}

double NNfunction_nn_chi3_chi3::synapse0x2027950() {
   return (neuron0x2023f80()*0.0463792);
}

double NNfunction_nn_chi3_chi3::synapse0x2027990() {
   return (neuron0x20242c0()*-1.07766);
}

double NNfunction_nn_chi3_chi3::synapse0x2027d10() {
   return (neuron0x201f790()*-0.0187657);
}

double NNfunction_nn_chi3_chi3::synapse0x2027d50() {
   return (neuron0x201fa40()*0.00138733);
}

double NNfunction_nn_chi3_chi3::synapse0x2027d90() {
   return (neuron0x201fd80()*-3.90802);
}

double NNfunction_nn_chi3_chi3::synapse0x2027dd0() {
   return (neuron0x20200c0()*0.0109374);
}

double NNfunction_nn_chi3_chi3::synapse0x2027e10() {
   return (neuron0x2020400()*-0.00755108);
}

double NNfunction_nn_chi3_chi3::synapse0x2027e50() {
   return (neuron0x2020740()*0.0185631);
}

double NNfunction_nn_chi3_chi3::synapse0x2027e90() {
   return (neuron0x2020a80()*0.0109112);
}

double NNfunction_nn_chi3_chi3::synapse0x2027ed0() {
   return (neuron0x2020dc0()*0.00659587);
}

double NNfunction_nn_chi3_chi3::synapse0x2027f10() {
   return (neuron0x2021100()*0.0160015);
}

double NNfunction_nn_chi3_chi3::synapse0x2027f50() {
   return (neuron0x2021440()*0.00580839);
}

double NNfunction_nn_chi3_chi3::synapse0x2027f90() {
   return (neuron0x2021780()*0.0138645);
}

double NNfunction_nn_chi3_chi3::synapse0x2027fd0() {
   return (neuron0x2021ac0()*-0.34773);
}

double NNfunction_nn_chi3_chi3::synapse0x2028010() {
   return (neuron0x2021e00()*0.12877);
}

double NNfunction_nn_chi3_chi3::synapse0x202c150() {
   return (neuron0x2022140()*0.0327064);
}

double NNfunction_nn_chi3_chi3::synapse0x202c190() {
   return (neuron0x2022480()*0.0361516);
}

double NNfunction_nn_chi3_chi3::synapse0x202c1d0() {
   return (neuron0x20227c0()*-0.00551784);
}

double NNfunction_nn_chi3_chi3::synapse0x2027b60() {
   return (neuron0x2022b00()*0.0102205);
}

double NNfunction_nn_chi3_chi3::synapse0x2027ba0() {
   return (neuron0x2023060()*0.0456085);
}

double NNfunction_nn_chi3_chi3::synapse0x202c320() {
   return (neuron0x2023280()*-0.00544854);
}

double NNfunction_nn_chi3_chi3::synapse0x202c360() {
   return (neuron0x20235c0()*-0.00249245);
}

double NNfunction_nn_chi3_chi3::synapse0x202c3a0() {
   return (neuron0x2023900()*0.00274196);
}

double NNfunction_nn_chi3_chi3::synapse0x202c3e0() {
   return (neuron0x2023c40()*0.0257047);
}

double NNfunction_nn_chi3_chi3::synapse0x202c420() {
   return (neuron0x2023f80()*0.00862754);
}

double NNfunction_nn_chi3_chi3::synapse0x202c460() {
   return (neuron0x20242c0()*-0.67779);
}

double NNfunction_nn_chi3_chi3::synapse0x202c7e0() {
   return (neuron0x201f790()*1.17235);
}

double NNfunction_nn_chi3_chi3::synapse0x202c820() {
   return (neuron0x201fa40()*-0.0516214);
}

double NNfunction_nn_chi3_chi3::synapse0x202c860() {
   return (neuron0x201fd80()*0.0137484);
}

double NNfunction_nn_chi3_chi3::synapse0x202c8a0() {
   return (neuron0x20200c0()*-0.344242);
}

double NNfunction_nn_chi3_chi3::synapse0x202c8e0() {
   return (neuron0x2020400()*0.457001);
}

double NNfunction_nn_chi3_chi3::synapse0x202c920() {
   return (neuron0x2020740()*0.23193);
}

double NNfunction_nn_chi3_chi3::synapse0x202c960() {
   return (neuron0x2020a80()*1.04418);
}

double NNfunction_nn_chi3_chi3::synapse0x202c9a0() {
   return (neuron0x2020dc0()*-0.846604);
}

double NNfunction_nn_chi3_chi3::synapse0x202c9e0() {
   return (neuron0x2021100()*1.44366);
}

double NNfunction_nn_chi3_chi3::synapse0x202ca20() {
   return (neuron0x2021440()*-0.845571);
}

double NNfunction_nn_chi3_chi3::synapse0x202ca60() {
   return (neuron0x2021780()*0.188275);
}

double NNfunction_nn_chi3_chi3::synapse0x202caa0() {
   return (neuron0x2021ac0()*1.1508);
}

double NNfunction_nn_chi3_chi3::synapse0x202cae0() {
   return (neuron0x2021e00()*1.84478);
}

double NNfunction_nn_chi3_chi3::synapse0x202cb20() {
   return (neuron0x2022140()*0.430456);
}

double NNfunction_nn_chi3_chi3::synapse0x202cb60() {
   return (neuron0x2022480()*-0.191021);
}

double NNfunction_nn_chi3_chi3::synapse0x202cba0() {
   return (neuron0x20227c0()*0.288383);
}

double NNfunction_nn_chi3_chi3::synapse0x202c630() {
   return (neuron0x2022b00()*-0.220696);
}

double NNfunction_nn_chi3_chi3::synapse0x202c670() {
   return (neuron0x2023060()*0.914326);
}

double NNfunction_nn_chi3_chi3::synapse0x202ccf0() {
   return (neuron0x2023280()*0.706977);
}

double NNfunction_nn_chi3_chi3::synapse0x202cd30() {
   return (neuron0x20235c0()*-0.0686379);
}

double NNfunction_nn_chi3_chi3::synapse0x202cd70() {
   return (neuron0x2023900()*-0.636298);
}

double NNfunction_nn_chi3_chi3::synapse0x202cdb0() {
   return (neuron0x2023c40()*-0.0353772);
}

double NNfunction_nn_chi3_chi3::synapse0x202cdf0() {
   return (neuron0x2023f80()*0.0811894);
}

double NNfunction_nn_chi3_chi3::synapse0x202ce30() {
   return (neuron0x20242c0()*-1.12373);
}

double NNfunction_nn_chi3_chi3::synapse0x202d1b0() {
   return (neuron0x201f790()*0.0820438);
}

double NNfunction_nn_chi3_chi3::synapse0x202d1f0() {
   return (neuron0x201fa40()*6.27559);
}

double NNfunction_nn_chi3_chi3::synapse0x202d230() {
   return (neuron0x201fd80()*0.202994);
}

double NNfunction_nn_chi3_chi3::synapse0x202d270() {
   return (neuron0x20200c0()*-0.000998455);
}

double NNfunction_nn_chi3_chi3::synapse0x202d2b0() {
   return (neuron0x2020400()*0.0293182);
}

double NNfunction_nn_chi3_chi3::synapse0x202d2f0() {
   return (neuron0x2020740()*-0.014204);
}

double NNfunction_nn_chi3_chi3::synapse0x202d330() {
   return (neuron0x2020a80()*-0.0347408);
}

double NNfunction_nn_chi3_chi3::synapse0x202d370() {
   return (neuron0x2020dc0()*-0.0212696);
}

double NNfunction_nn_chi3_chi3::synapse0x202d3b0() {
   return (neuron0x2021100()*-0.0215856);
}

double NNfunction_nn_chi3_chi3::synapse0x202d3f0() {
   return (neuron0x2021440()*0.0225723);
}

double NNfunction_nn_chi3_chi3::synapse0x202d430() {
   return (neuron0x2021780()*-0.00524574);
}

double NNfunction_nn_chi3_chi3::synapse0x202d470() {
   return (neuron0x2021ac0()*-0.0233898);
}

double NNfunction_nn_chi3_chi3::synapse0x202d4b0() {
   return (neuron0x2021e00()*-0.0149582);
}

double NNfunction_nn_chi3_chi3::synapse0x202d4f0() {
   return (neuron0x2022140()*0.0107285);
}

double NNfunction_nn_chi3_chi3::synapse0x202d530() {
   return (neuron0x2022480()*0.335939);
}

double NNfunction_nn_chi3_chi3::synapse0x202d570() {
   return (neuron0x20227c0()*-0.00362095);
}

double NNfunction_nn_chi3_chi3::synapse0x202d000() {
   return (neuron0x2022b00()*0.0123977);
}

double NNfunction_nn_chi3_chi3::synapse0x202d040() {
   return (neuron0x2023060()*-0.0178042);
}

double NNfunction_nn_chi3_chi3::synapse0x202d6c0() {
   return (neuron0x2023280()*0.00752801);
}

double NNfunction_nn_chi3_chi3::synapse0x202d700() {
   return (neuron0x20235c0()*-0.0204934);
}

double NNfunction_nn_chi3_chi3::synapse0x202d740() {
   return (neuron0x2023900()*0.000568034);
}

double NNfunction_nn_chi3_chi3::synapse0x202d780() {
   return (neuron0x2023c40()*-0.00400656);
}

double NNfunction_nn_chi3_chi3::synapse0x202d7c0() {
   return (neuron0x2023f80()*-0.039313);
}

double NNfunction_nn_chi3_chi3::synapse0x202d800() {
   return (neuron0x20242c0()*0.705236);
}

double NNfunction_nn_chi3_chi3::synapse0x202db80() {
   return (neuron0x201f790()*0.100045);
}

double NNfunction_nn_chi3_chi3::synapse0x202dbc0() {
   return (neuron0x201fa40()*4.61563);
}

double NNfunction_nn_chi3_chi3::synapse0x202dc00() {
   return (neuron0x201fd80()*0.0202311);
}

double NNfunction_nn_chi3_chi3::synapse0x202dc40() {
   return (neuron0x20200c0()*0.000579898);
}

double NNfunction_nn_chi3_chi3::synapse0x202dc80() {
   return (neuron0x2020400()*0.00562063);
}

double NNfunction_nn_chi3_chi3::synapse0x202dcc0() {
   return (neuron0x2020740()*-0.00217237);
}

double NNfunction_nn_chi3_chi3::synapse0x202dd00() {
   return (neuron0x2020a80()*-0.0295866);
}

double NNfunction_nn_chi3_chi3::synapse0x202dd40() {
   return (neuron0x2020dc0()*-0.0103062);
}

double NNfunction_nn_chi3_chi3::synapse0x202dd80() {
   return (neuron0x2021100()*-0.0175552);
}

double NNfunction_nn_chi3_chi3::synapse0x202ddc0() {
   return (neuron0x2021440()*0.00439209);
}

double NNfunction_nn_chi3_chi3::synapse0x202de00() {
   return (neuron0x2021780()*-0.0138616);
}

double NNfunction_nn_chi3_chi3::synapse0x202de40() {
   return (neuron0x2021ac0()*-0.0555459);
}

double NNfunction_nn_chi3_chi3::synapse0x202de80() {
   return (neuron0x2021e00()*-0.0253502);
}

double NNfunction_nn_chi3_chi3::synapse0x202dec0() {
   return (neuron0x2022140()*0.0119216);
}

double NNfunction_nn_chi3_chi3::synapse0x202df00() {
   return (neuron0x2022480()*0.446079);
}

double NNfunction_nn_chi3_chi3::synapse0x202df40() {
   return (neuron0x20227c0()*0.0121289);
}

double NNfunction_nn_chi3_chi3::synapse0x202d9d0() {
   return (neuron0x2022b00()*-0.0133114);
}

double NNfunction_nn_chi3_chi3::synapse0x202da10() {
   return (neuron0x2023060()*-0.00306937);
}

double NNfunction_nn_chi3_chi3::synapse0x202e090() {
   return (neuron0x2023280()*-0.0108908);
}

double NNfunction_nn_chi3_chi3::synapse0x202e0d0() {
   return (neuron0x20235c0()*-0.0107942);
}

double NNfunction_nn_chi3_chi3::synapse0x202e110() {
   return (neuron0x2023900()*-0.023877);
}

double NNfunction_nn_chi3_chi3::synapse0x202e150() {
   return (neuron0x2023c40()*-0.00771029);
}

double NNfunction_nn_chi3_chi3::synapse0x202e190() {
   return (neuron0x2023f80()*-0.045711);
}

double NNfunction_nn_chi3_chi3::synapse0x202e1d0() {
   return (neuron0x20242c0()*0.806228);
}

double NNfunction_nn_chi3_chi3::synapse0x202e550() {
   return (neuron0x201f790()*0.0598071);
}

double NNfunction_nn_chi3_chi3::synapse0x201f920() {
   return (neuron0x201fa40()*-0.0207154);
}

double NNfunction_nn_chi3_chi3::synapse0x201f960() {
   return (neuron0x201fd80()*-0.188397);
}

double NNfunction_nn_chi3_chi3::synapse0x201fc60() {
   return (neuron0x20200c0()*0.0363949);
}

double NNfunction_nn_chi3_chi3::synapse0x201fca0() {
   return (neuron0x2020400()*0.00615323);
}

double NNfunction_nn_chi3_chi3::synapse0x201ffa0() {
   return (neuron0x2020740()*0.0254516);
}

double NNfunction_nn_chi3_chi3::synapse0x201ffe0() {
   return (neuron0x2020a80()*0.0330176);
}

double NNfunction_nn_chi3_chi3::synapse0x20202e0() {
   return (neuron0x2020dc0()*0.04192);
}

double NNfunction_nn_chi3_chi3::synapse0x2020320() {
   return (neuron0x2021100()*0.0462785);
}

double NNfunction_nn_chi3_chi3::synapse0x2020620() {
   return (neuron0x2021440()*-0.0210008);
}

double NNfunction_nn_chi3_chi3::synapse0x2020660() {
   return (neuron0x2021780()*-0.0169274);
}

double NNfunction_nn_chi3_chi3::synapse0x2020960() {
   return (neuron0x2021ac0()*0.0923597);
}

double NNfunction_nn_chi3_chi3::synapse0x20209a0() {
   return (neuron0x2021e00()*0.0943523);
}

double NNfunction_nn_chi3_chi3::synapse0x2020ca0() {
   return (neuron0x2022140()*0.0246971);
}

double NNfunction_nn_chi3_chi3::synapse0x2020ce0() {
   return (neuron0x2022480()*-0.109356);
}

double NNfunction_nn_chi3_chi3::synapse0x2020fe0() {
   return (neuron0x20227c0()*0.0297186);
}

double NNfunction_nn_chi3_chi3::synapse0x2021020() {
   return (neuron0x2022b00()*-0.0701098);
}

double NNfunction_nn_chi3_chi3::synapse0x2021320() {
   return (neuron0x2023060()*0.178824);
}

double NNfunction_nn_chi3_chi3::synapse0x2021360() {
   return (neuron0x2023280()*0.012141);
}

double NNfunction_nn_chi3_chi3::synapse0x2021660() {
   return (neuron0x20235c0()*0.0034523);
}

double NNfunction_nn_chi3_chi3::synapse0x20216a0() {
   return (neuron0x2023900()*-0.0106108);
}

double NNfunction_nn_chi3_chi3::synapse0x20219a0() {
   return (neuron0x2023c40()*0.0117854);
}

double NNfunction_nn_chi3_chi3::synapse0x20219e0() {
   return (neuron0x2023f80()*0.013211);
}

double NNfunction_nn_chi3_chi3::synapse0x2021ce0() {
   return (neuron0x20242c0()*-0.748929);
}

double NNfunction_nn_chi3_chi3::synapse0x2021d20() {
   return (neuron0x201f790()*0.0624078);
}

double NNfunction_nn_chi3_chi3::synapse0x20229e0() {
   return (neuron0x201fa40()*-0.104225);
}

double NNfunction_nn_chi3_chi3::synapse0x2022a20() {
   return (neuron0x201fd80()*3.48305);
}

double NNfunction_nn_chi3_chi3::synapse0x202e3a0() {
   return (neuron0x20200c0()*0.103361);
}

double NNfunction_nn_chi3_chi3::synapse0x202e3e0() {
   return (neuron0x2020400()*0.0241103);
}

double NNfunction_nn_chi3_chi3::synapse0x2022d20() {
   return (neuron0x2020740()*-0.121227);
}

double NNfunction_nn_chi3_chi3::synapse0x2022d60() {
   return (neuron0x2020a80()*-0.0889295);
}

double NNfunction_nn_chi3_chi3::synapse0x1dda730() {
   return (neuron0x2020dc0()*-0.0474072);
}

double NNfunction_nn_chi3_chi3::synapse0x1dda770() {
   return (neuron0x2021100()*-0.062629);
}

double NNfunction_nn_chi3_chi3::synapse0x20234a0() {
   return (neuron0x2021440()*-0.00257173);
}

double NNfunction_nn_chi3_chi3::synapse0x20234e0() {
   return (neuron0x2021780()*-0.0872785);
}

double NNfunction_nn_chi3_chi3::synapse0x20237e0() {
   return (neuron0x2021ac0()*1.23326);
}

double NNfunction_nn_chi3_chi3::synapse0x2023820() {
   return (neuron0x2021e00()*-0.098111);
}

double NNfunction_nn_chi3_chi3::synapse0x2023b20() {
   return (neuron0x2022140()*0.193406);
}

double NNfunction_nn_chi3_chi3::synapse0x2023b60() {
   return (neuron0x2022480()*-0.500944);
}

double NNfunction_nn_chi3_chi3::synapse0x2023e60() {
   return (neuron0x20227c0()*0.287445);
}

double NNfunction_nn_chi3_chi3::synapse0x2023ea0() {
   return (neuron0x2022b00()*0.288094);
}

double NNfunction_nn_chi3_chi3::synapse0x20241a0() {
   return (neuron0x2023060()*-0.43535);
}

double NNfunction_nn_chi3_chi3::synapse0x20241e0() {
   return (neuron0x2023280()*-0.106315);
}

double NNfunction_nn_chi3_chi3::synapse0x20244e0() {
   return (neuron0x20235c0()*0.349716);
}

double NNfunction_nn_chi3_chi3::synapse0x2024520() {
   return (neuron0x2023900()*-0.191964);
}

double NNfunction_nn_chi3_chi3::synapse0x2022020() {
   return (neuron0x2023c40()*0.0442754);
}

double NNfunction_nn_chi3_chi3::synapse0x2022060() {
   return (neuron0x2023f80()*-0.0472869);
}

double NNfunction_nn_chi3_chi3::synapse0x20302c0() {
   return (neuron0x20242c0()*-1.42964);
}

double NNfunction_nn_chi3_chi3::synapse0x2030640() {
   return (neuron0x201f790()*-0.0248438);
}

double NNfunction_nn_chi3_chi3::synapse0x2030680() {
   return (neuron0x201fa40()*0.0180485);
}

double NNfunction_nn_chi3_chi3::synapse0x20306c0() {
   return (neuron0x201fd80()*-7.25958);
}

double NNfunction_nn_chi3_chi3::synapse0x2030700() {
   return (neuron0x20200c0()*0.0356826);
}

double NNfunction_nn_chi3_chi3::synapse0x2030740() {
   return (neuron0x2020400()*-0.0158048);
}

double NNfunction_nn_chi3_chi3::synapse0x2030780() {
   return (neuron0x2020740()*0.000472255);
}

double NNfunction_nn_chi3_chi3::synapse0x20307c0() {
   return (neuron0x2020a80()*-0.0356361);
}

double NNfunction_nn_chi3_chi3::synapse0x2030800() {
   return (neuron0x2020dc0()*-0.00318686);
}

double NNfunction_nn_chi3_chi3::synapse0x2030840() {
   return (neuron0x2021100()*0.00195836);
}

double NNfunction_nn_chi3_chi3::synapse0x2030880() {
   return (neuron0x2021440()*-0.015123);
}

double NNfunction_nn_chi3_chi3::synapse0x20308c0() {
   return (neuron0x2021780()*0.0571502);
}

double NNfunction_nn_chi3_chi3::synapse0x2030900() {
   return (neuron0x2021ac0()*0.227247);
}

double NNfunction_nn_chi3_chi3::synapse0x2030940() {
   return (neuron0x2021e00()*0.15766);
}

double NNfunction_nn_chi3_chi3::synapse0x2030980() {
   return (neuron0x2022140()*0.0386768);
}

double NNfunction_nn_chi3_chi3::synapse0x20309c0() {
   return (neuron0x2022480()*0.00889368);
}

double NNfunction_nn_chi3_chi3::synapse0x2030a00() {
   return (neuron0x20227c0()*-0.0484206);
}

double NNfunction_nn_chi3_chi3::synapse0x2030490() {
   return (neuron0x2022b00()*0.0467213);
}

double NNfunction_nn_chi3_chi3::synapse0x20304d0() {
   return (neuron0x2023060()*0.0596403);
}

double NNfunction_nn_chi3_chi3::synapse0x2030b50() {
   return (neuron0x2023280()*-0.000905907);
}

double NNfunction_nn_chi3_chi3::synapse0x2030b90() {
   return (neuron0x20235c0()*-0.0253985);
}

double NNfunction_nn_chi3_chi3::synapse0x2030bd0() {
   return (neuron0x2023900()*0.0117735);
}

double NNfunction_nn_chi3_chi3::synapse0x2030c10() {
   return (neuron0x2023c40()*0.0186089);
}

double NNfunction_nn_chi3_chi3::synapse0x2030c50() {
   return (neuron0x2023f80()*-0.023879);
}

double NNfunction_nn_chi3_chi3::synapse0x2030c90() {
   return (neuron0x20242c0()*-0.833145);
}

double NNfunction_nn_chi3_chi3::synapse0x2031010() {
   return (neuron0x201f790()*-0.0125691);
}

double NNfunction_nn_chi3_chi3::synapse0x2031050() {
   return (neuron0x201fa40()*-0.28668);
}

double NNfunction_nn_chi3_chi3::synapse0x2031090() {
   return (neuron0x201fd80()*-0.430036);
}

double NNfunction_nn_chi3_chi3::synapse0x20310d0() {
   return (neuron0x20200c0()*0.0577232);
}

double NNfunction_nn_chi3_chi3::synapse0x2031110() {
   return (neuron0x2020400()*-0.0166162);
}

double NNfunction_nn_chi3_chi3::synapse0x2031150() {
   return (neuron0x2020740()*0.0978883);
}

double NNfunction_nn_chi3_chi3::synapse0x2031190() {
   return (neuron0x2020a80()*-0.013329);
}

double NNfunction_nn_chi3_chi3::synapse0x20311d0() {
   return (neuron0x2020dc0()*0.0537297);
}

double NNfunction_nn_chi3_chi3::synapse0x2031210() {
   return (neuron0x2021100()*0.0400629);
}

double NNfunction_nn_chi3_chi3::synapse0x2031250() {
   return (neuron0x2021440()*0.0387118);
}

double NNfunction_nn_chi3_chi3::synapse0x2031290() {
   return (neuron0x2021780()*-0.0901845);
}

double NNfunction_nn_chi3_chi3::synapse0x20312d0() {
   return (neuron0x2021ac0()*-0.0234399);
}

double NNfunction_nn_chi3_chi3::synapse0x2031310() {
   return (neuron0x2021e00()*-0.0133088);
}

double NNfunction_nn_chi3_chi3::synapse0x2031350() {
   return (neuron0x2022140()*0.0481486);
}

double NNfunction_nn_chi3_chi3::synapse0x2031390() {
   return (neuron0x2022480()*-0.612626);
}

double NNfunction_nn_chi3_chi3::synapse0x20313d0() {
   return (neuron0x20227c0()*0.0554641);
}

double NNfunction_nn_chi3_chi3::synapse0x2030e60() {
   return (neuron0x2022b00()*0.0628144);
}

double NNfunction_nn_chi3_chi3::synapse0x2030ea0() {
   return (neuron0x2023060()*0.0343912);
}

double NNfunction_nn_chi3_chi3::synapse0x2031520() {
   return (neuron0x2023280()*0.0168858);
}

double NNfunction_nn_chi3_chi3::synapse0x2031560() {
   return (neuron0x20235c0()*0.0153884);
}

double NNfunction_nn_chi3_chi3::synapse0x20315a0() {
   return (neuron0x2023900()*-0.0169265);
}

double NNfunction_nn_chi3_chi3::synapse0x20315e0() {
   return (neuron0x2023c40()*-0.0265551);
}

double NNfunction_nn_chi3_chi3::synapse0x2031620() {
   return (neuron0x2023f80()*0.0895312);
}

double NNfunction_nn_chi3_chi3::synapse0x2031660() {
   return (neuron0x20242c0()*1.43009);
}

double NNfunction_nn_chi3_chi3::synapse0x20319e0() {
   return (neuron0x201f790()*-0.0151729);
}

double NNfunction_nn_chi3_chi3::synapse0x2031a20() {
   return (neuron0x201fa40()*0.133706);
}

double NNfunction_nn_chi3_chi3::synapse0x2031a60() {
   return (neuron0x201fd80()*-0.0662809);
}

double NNfunction_nn_chi3_chi3::synapse0x2031aa0() {
   return (neuron0x20200c0()*0.0193396);
}

double NNfunction_nn_chi3_chi3::synapse0x2031ae0() {
   return (neuron0x2020400()*0.0710947);
}

double NNfunction_nn_chi3_chi3::synapse0x2031b20() {
   return (neuron0x2020740()*-0.0345636);
}

double NNfunction_nn_chi3_chi3::synapse0x2031b60() {
   return (neuron0x2020a80()*-0.0448413);
}

double NNfunction_nn_chi3_chi3::synapse0x2031ba0() {
   return (neuron0x2020dc0()*0.0135738);
}

double NNfunction_nn_chi3_chi3::synapse0x2031be0() {
   return (neuron0x2021100()*0.036031);
}

double NNfunction_nn_chi3_chi3::synapse0x2031c20() {
   return (neuron0x2021440()*-0.0329103);
}

double NNfunction_nn_chi3_chi3::synapse0x2031c60() {
   return (neuron0x2021780()*0.0113456);
}

double NNfunction_nn_chi3_chi3::synapse0x2031ca0() {
   return (neuron0x2021ac0()*-0.0253431);
}

double NNfunction_nn_chi3_chi3::synapse0x2031ce0() {
   return (neuron0x2021e00()*-0.00437527);
}

double NNfunction_nn_chi3_chi3::synapse0x2031d20() {
   return (neuron0x2022140()*0.019693);
}

double NNfunction_nn_chi3_chi3::synapse0x2031d60() {
   return (neuron0x2022480()*-0.598128);
}

double NNfunction_nn_chi3_chi3::synapse0x2031da0() {
   return (neuron0x20227c0()*-0.0281546);
}

double NNfunction_nn_chi3_chi3::synapse0x2031830() {
   return (neuron0x2022b00()*-0.0552397);
}

double NNfunction_nn_chi3_chi3::synapse0x2031870() {
   return (neuron0x2023060()*-0.0192314);
}

double NNfunction_nn_chi3_chi3::synapse0x2031ef0() {
   return (neuron0x2023280()*-0.0527549);
}

double NNfunction_nn_chi3_chi3::synapse0x2031f30() {
   return (neuron0x20235c0()*0.0186333);
}

double NNfunction_nn_chi3_chi3::synapse0x2031f70() {
   return (neuron0x2023900()*-0.0159253);
}

double NNfunction_nn_chi3_chi3::synapse0x2031fb0() {
   return (neuron0x2023c40()*0.0211675);
}

double NNfunction_nn_chi3_chi3::synapse0x2031ff0() {
   return (neuron0x2023f80()*-0.068266);
}

double NNfunction_nn_chi3_chi3::synapse0x2032030() {
   return (neuron0x20242c0()*-3.79926);
}

double NNfunction_nn_chi3_chi3::synapse0x20323b0() {
   return (neuron0x201f790()*-0.0256908);
}

double NNfunction_nn_chi3_chi3::synapse0x20323f0() {
   return (neuron0x201fa40()*-8.28213);
}

double NNfunction_nn_chi3_chi3::synapse0x2032430() {
   return (neuron0x201fd80()*-0.153953);
}

double NNfunction_nn_chi3_chi3::synapse0x2032470() {
   return (neuron0x20200c0()*0.0357865);
}

double NNfunction_nn_chi3_chi3::synapse0x20324b0() {
   return (neuron0x2020400()*0.0119238);
}

double NNfunction_nn_chi3_chi3::synapse0x20324f0() {
   return (neuron0x2020740()*-0.00251225);
}

double NNfunction_nn_chi3_chi3::synapse0x2032530() {
   return (neuron0x2020a80()*-0.0343555);
}

double NNfunction_nn_chi3_chi3::synapse0x2032570() {
   return (neuron0x2020dc0()*-0.0111967);
}

double NNfunction_nn_chi3_chi3::synapse0x20325b0() {
   return (neuron0x2021100()*-0.0114705);
}

double NNfunction_nn_chi3_chi3::synapse0x20325f0() {
   return (neuron0x2021440()*-0.0142193);
}

double NNfunction_nn_chi3_chi3::synapse0x2032630() {
   return (neuron0x2021780()*0.00143541);
}

double NNfunction_nn_chi3_chi3::synapse0x2032670() {
   return (neuron0x2021ac0()*-0.018382);
}

double NNfunction_nn_chi3_chi3::synapse0x20326b0() {
   return (neuron0x2021e00()*-0.000223735);
}

double NNfunction_nn_chi3_chi3::synapse0x20326f0() {
   return (neuron0x2022140()*-0.0156197);
}

double NNfunction_nn_chi3_chi3::synapse0x2032730() {
   return (neuron0x2022480()*0.352542);
}

double NNfunction_nn_chi3_chi3::synapse0x2032770() {
   return (neuron0x20227c0()*0.007257);
}

double NNfunction_nn_chi3_chi3::synapse0x2032200() {
   return (neuron0x2022b00()*0.012793);
}

double NNfunction_nn_chi3_chi3::synapse0x2032240() {
   return (neuron0x2023060()*-0.00505116);
}

double NNfunction_nn_chi3_chi3::synapse0x20328c0() {
   return (neuron0x2023280()*-0.0217592);
}

double NNfunction_nn_chi3_chi3::synapse0x2032900() {
   return (neuron0x20235c0()*-0.0197277);
}

double NNfunction_nn_chi3_chi3::synapse0x2032940() {
   return (neuron0x2023900()*-0.0101045);
}

double NNfunction_nn_chi3_chi3::synapse0x2032980() {
   return (neuron0x2023c40()*-0.00724492);
}

double NNfunction_nn_chi3_chi3::synapse0x20329c0() {
   return (neuron0x2023f80()*-0.031292);
}

double NNfunction_nn_chi3_chi3::synapse0x2032a00() {
   return (neuron0x20242c0()*-0.521727);
}

double NNfunction_nn_chi3_chi3::synapse0x2032d80() {
   return (neuron0x201f790()*-0.0384847);
}

double NNfunction_nn_chi3_chi3::synapse0x2032dc0() {
   return (neuron0x201fa40()*0.0191635);
}

double NNfunction_nn_chi3_chi3::synapse0x2032e00() {
   return (neuron0x201fd80()*-8.01668);
}

double NNfunction_nn_chi3_chi3::synapse0x2032e40() {
   return (neuron0x20200c0()*0.0084978);
}

double NNfunction_nn_chi3_chi3::synapse0x2032e80() {
   return (neuron0x2020400()*-0.0239488);
}

double NNfunction_nn_chi3_chi3::synapse0x2032ec0() {
   return (neuron0x2020740()*-0.0166638);
}

double NNfunction_nn_chi3_chi3::synapse0x2032f00() {
   return (neuron0x2020a80()*-0.00760224);
}

double NNfunction_nn_chi3_chi3::synapse0x2032f40() {
   return (neuron0x2020dc0()*-0.007307);
}

double NNfunction_nn_chi3_chi3::synapse0x2032f80() {
   return (neuron0x2021100()*-0.001171);
}

double NNfunction_nn_chi3_chi3::synapse0x202b140() {
   return (neuron0x2021440()*-0.0111246);
}

double NNfunction_nn_chi3_chi3::synapse0x202b180() {
   return (neuron0x2021780()*0.0287593);
}

double NNfunction_nn_chi3_chi3::synapse0x202b1c0() {
   return (neuron0x2021ac0()*0.172636);
}

double NNfunction_nn_chi3_chi3::synapse0x202b200() {
   return (neuron0x2021e00()*0.0334176);
}

double NNfunction_nn_chi3_chi3::synapse0x202b240() {
   return (neuron0x2022140()*0.00866016);
}

double NNfunction_nn_chi3_chi3::synapse0x202b280() {
   return (neuron0x2022480()*0.0619118);
}

double NNfunction_nn_chi3_chi3::synapse0x202b2c0() {
   return (neuron0x20227c0()*-0.0106436);
}

double NNfunction_nn_chi3_chi3::synapse0x2032bd0() {
   return (neuron0x2022b00()*0.0201103);
}

double NNfunction_nn_chi3_chi3::synapse0x2032c10() {
   return (neuron0x2023060()*0.0285792);
}

double NNfunction_nn_chi3_chi3::synapse0x202b410() {
   return (neuron0x2023280()*0.00687419);
}

double NNfunction_nn_chi3_chi3::synapse0x202b450() {
   return (neuron0x20235c0()*0.00172795);
}

double NNfunction_nn_chi3_chi3::synapse0x202b490() {
   return (neuron0x2023900()*0.0124581);
}

double NNfunction_nn_chi3_chi3::synapse0x202b4d0() {
   return (neuron0x2023c40()*-0.0137504);
}

double NNfunction_nn_chi3_chi3::synapse0x202b510() {
   return (neuron0x2023f80()*-0.00794363);
}

double NNfunction_nn_chi3_chi3::synapse0x202b550() {
   return (neuron0x20242c0()*-1.28567);
}

double NNfunction_nn_chi3_chi3::synapse0x202b8d0() {
   return (neuron0x201f790()*-0.574305);
}

double NNfunction_nn_chi3_chi3::synapse0x202b910() {
   return (neuron0x201fa40()*-0.717495);
}

double NNfunction_nn_chi3_chi3::synapse0x202b950() {
   return (neuron0x201fd80()*0.601948);
}

double NNfunction_nn_chi3_chi3::synapse0x202b990() {
   return (neuron0x20200c0()*-0.326488);
}

double NNfunction_nn_chi3_chi3::synapse0x202b9d0() {
   return (neuron0x2020400()*0.279023);
}

double NNfunction_nn_chi3_chi3::synapse0x202ba10() {
   return (neuron0x2020740()*-0.150193);
}

double NNfunction_nn_chi3_chi3::synapse0x202ba50() {
   return (neuron0x2020a80()*-0.154331);
}

double NNfunction_nn_chi3_chi3::synapse0x202ba90() {
   return (neuron0x2020dc0()*0.175114);
}

double NNfunction_nn_chi3_chi3::synapse0x202bad0() {
   return (neuron0x2021100()*0.361046);
}

double NNfunction_nn_chi3_chi3::synapse0x202bb10() {
   return (neuron0x2021440()*-0.253684);
}

double NNfunction_nn_chi3_chi3::synapse0x202bb50() {
   return (neuron0x2021780()*0.00177253);
}

double NNfunction_nn_chi3_chi3::synapse0x202bb90() {
   return (neuron0x2021ac0()*0.457239);
}

double NNfunction_nn_chi3_chi3::synapse0x202bbd0() {
   return (neuron0x2021e00()*0.307375);
}

double NNfunction_nn_chi3_chi3::synapse0x202bc10() {
   return (neuron0x2022140()*-0.040762);
}

double NNfunction_nn_chi3_chi3::synapse0x202bc50() {
   return (neuron0x2022480()*-0.690711);
}

double NNfunction_nn_chi3_chi3::synapse0x202bc90() {
   return (neuron0x20227c0()*-0.200424);
}

double NNfunction_nn_chi3_chi3::synapse0x202b720() {
   return (neuron0x2022b00()*-0.46113);
}

double NNfunction_nn_chi3_chi3::synapse0x202b760() {
   return (neuron0x2023060()*-0.0812014);
}

double NNfunction_nn_chi3_chi3::synapse0x202bde0() {
   return (neuron0x2023280()*0.163313);
}

double NNfunction_nn_chi3_chi3::synapse0x202be20() {
   return (neuron0x20235c0()*0.424081);
}

double NNfunction_nn_chi3_chi3::synapse0x202be60() {
   return (neuron0x2023900()*0.22565);
}

double NNfunction_nn_chi3_chi3::synapse0x202bea0() {
   return (neuron0x2023c40()*-0.238364);
}

double NNfunction_nn_chi3_chi3::synapse0x202bee0() {
   return (neuron0x2023f80()*0.188023);
}

double NNfunction_nn_chi3_chi3::synapse0x202bf20() {
   return (neuron0x20242c0()*0.630276);
}

double NNfunction_nn_chi3_chi3::synapse0x202c0f0() {
   return (neuron0x201f790()*-0.137038);
}

double NNfunction_nn_chi3_chi3::synapse0x2035180() {
   return (neuron0x201fa40()*-0.189338);
}

double NNfunction_nn_chi3_chi3::synapse0x20351c0() {
   return (neuron0x201fd80()*0.604282);
}

double NNfunction_nn_chi3_chi3::synapse0x2035200() {
   return (neuron0x20200c0()*0.150821);
}

double NNfunction_nn_chi3_chi3::synapse0x2035240() {
   return (neuron0x2020400()*0.0943757);
}

double NNfunction_nn_chi3_chi3::synapse0x2035280() {
   return (neuron0x2020740()*-0.00293236);
}

double NNfunction_nn_chi3_chi3::synapse0x20352c0() {
   return (neuron0x2020a80()*-0.113195);
}

double NNfunction_nn_chi3_chi3::synapse0x2035300() {
   return (neuron0x2020dc0()*0.422029);
}

double NNfunction_nn_chi3_chi3::synapse0x2035340() {
   return (neuron0x2021100()*0.287884);
}

double NNfunction_nn_chi3_chi3::synapse0x2035380() {
   return (neuron0x2021440()*-0.309141);
}

double NNfunction_nn_chi3_chi3::synapse0x20353c0() {
   return (neuron0x2021780()*-0.301205);
}

double NNfunction_nn_chi3_chi3::synapse0x2035400() {
   return (neuron0x2021ac0()*-0.270368);
}

double NNfunction_nn_chi3_chi3::synapse0x2035440() {
   return (neuron0x2021e00()*-0.22673);
}

double NNfunction_nn_chi3_chi3::synapse0x2035480() {
   return (neuron0x2022140()*-0.0917563);
}

double NNfunction_nn_chi3_chi3::synapse0x20354c0() {
   return (neuron0x2022480()*0.406839);
}

double NNfunction_nn_chi3_chi3::synapse0x2035500() {
   return (neuron0x20227c0()*-0.15141);
}

double NNfunction_nn_chi3_chi3::synapse0x2034fd0() {
   return (neuron0x2022b00()*-0.259676);
}

double NNfunction_nn_chi3_chi3::synapse0x2035010() {
   return (neuron0x2023060()*1.73502);
}

double NNfunction_nn_chi3_chi3::synapse0x2035650() {
   return (neuron0x2023280()*-0.197153);
}

double NNfunction_nn_chi3_chi3::synapse0x2035690() {
   return (neuron0x20235c0()*0.0378184);
}

double NNfunction_nn_chi3_chi3::synapse0x20356d0() {
   return (neuron0x2023900()*-0.00758602);
}

double NNfunction_nn_chi3_chi3::synapse0x2035710() {
   return (neuron0x2023c40()*-0.0315954);
}

double NNfunction_nn_chi3_chi3::synapse0x2035750() {
   return (neuron0x2023f80()*0.0557464);
}

double NNfunction_nn_chi3_chi3::synapse0x2035790() {
   return (neuron0x20242c0()*-0.660311);
}

double NNfunction_nn_chi3_chi3::synapse0x2035b10() {
   return (neuron0x201f790()*0.277179);
}

double NNfunction_nn_chi3_chi3::synapse0x2035b50() {
   return (neuron0x201fa40()*-0.401194);
}

double NNfunction_nn_chi3_chi3::synapse0x2035b90() {
   return (neuron0x201fd80()*2.57256);
}

double NNfunction_nn_chi3_chi3::synapse0x2035bd0() {
   return (neuron0x20200c0()*-0.244561);
}

double NNfunction_nn_chi3_chi3::synapse0x2035c10() {
   return (neuron0x2020400()*0.144446);
}

double NNfunction_nn_chi3_chi3::synapse0x2035c50() {
   return (neuron0x2020740()*0.43651);
}

double NNfunction_nn_chi3_chi3::synapse0x2035c90() {
   return (neuron0x2020a80()*0.0113306);
}

double NNfunction_nn_chi3_chi3::synapse0x2035cd0() {
   return (neuron0x2020dc0()*0.00419169);
}

double NNfunction_nn_chi3_chi3::synapse0x2035d10() {
   return (neuron0x2021100()*-0.0225008);
}

double NNfunction_nn_chi3_chi3::synapse0x2035d50() {
   return (neuron0x2021440()*-0.128916);
}

double NNfunction_nn_chi3_chi3::synapse0x2035d90() {
   return (neuron0x2021780()*-0.152021);
}

double NNfunction_nn_chi3_chi3::synapse0x2035dd0() {
   return (neuron0x2021ac0()*0.991373);
}

double NNfunction_nn_chi3_chi3::synapse0x2035e10() {
   return (neuron0x2021e00()*0.539623);
}

double NNfunction_nn_chi3_chi3::synapse0x2035e50() {
   return (neuron0x2022140()*-0.10184);
}

double NNfunction_nn_chi3_chi3::synapse0x2035e90() {
   return (neuron0x2022480()*1.48405);
}

double NNfunction_nn_chi3_chi3::synapse0x2035ed0() {
   return (neuron0x20227c0()*-0.10621);
}

double NNfunction_nn_chi3_chi3::synapse0x2035960() {
   return (neuron0x2022b00()*-0.354176);
}

double NNfunction_nn_chi3_chi3::synapse0x20359a0() {
   return (neuron0x2023060()*0.352821);
}

double NNfunction_nn_chi3_chi3::synapse0x2036020() {
   return (neuron0x2023280()*0.125142);
}

double NNfunction_nn_chi3_chi3::synapse0x2036060() {
   return (neuron0x20235c0()*0.187991);
}

double NNfunction_nn_chi3_chi3::synapse0x20360a0() {
   return (neuron0x2023900()*0.502411);
}

double NNfunction_nn_chi3_chi3::synapse0x20360e0() {
   return (neuron0x2023c40()*0.0068041);
}

double NNfunction_nn_chi3_chi3::synapse0x2036120() {
   return (neuron0x2023f80()*0.348693);
}

double NNfunction_nn_chi3_chi3::synapse0x2036160() {
   return (neuron0x20242c0()*1.52387);
}

double NNfunction_nn_chi3_chi3::synapse0x20364e0() {
   return (neuron0x201f790()*-0.030768);
}

double NNfunction_nn_chi3_chi3::synapse0x2036520() {
   return (neuron0x201fa40()*10.7175);
}

double NNfunction_nn_chi3_chi3::synapse0x2036560() {
   return (neuron0x201fd80()*-0.249804);
}

double NNfunction_nn_chi3_chi3::synapse0x20365a0() {
   return (neuron0x20200c0()*0.035895);
}

double NNfunction_nn_chi3_chi3::synapse0x20365e0() {
   return (neuron0x2020400()*-8.51758e-05);
}

double NNfunction_nn_chi3_chi3::synapse0x2036620() {
   return (neuron0x2020740()*-0.00923425);
}

double NNfunction_nn_chi3_chi3::synapse0x2036660() {
   return (neuron0x2020a80()*-0.0388724);
}

double NNfunction_nn_chi3_chi3::synapse0x20366a0() {
   return (neuron0x2020dc0()*-0.0126326);
}

double NNfunction_nn_chi3_chi3::synapse0x20366e0() {
   return (neuron0x2021100()*-0.0216789);
}

double NNfunction_nn_chi3_chi3::synapse0x2036720() {
   return (neuron0x2021440()*-0.0140433);
}

double NNfunction_nn_chi3_chi3::synapse0x2036760() {
   return (neuron0x2021780()*0.00982843);
}

double NNfunction_nn_chi3_chi3::synapse0x20367a0() {
   return (neuron0x2021ac0()*-0.0163881);
}

double NNfunction_nn_chi3_chi3::synapse0x20367e0() {
   return (neuron0x2021e00()*-0.0064001);
}

double NNfunction_nn_chi3_chi3::synapse0x2036820() {
   return (neuron0x2022140()*-0.00991549);
}

double NNfunction_nn_chi3_chi3::synapse0x2036860() {
   return (neuron0x2022480()*0.521602);
}

double NNfunction_nn_chi3_chi3::synapse0x20368a0() {
   return (neuron0x20227c0()*0.00737944);
}

double NNfunction_nn_chi3_chi3::synapse0x2036330() {
   return (neuron0x2022b00()*0.0173162);
}

double NNfunction_nn_chi3_chi3::synapse0x2036370() {
   return (neuron0x2023060()*0.00390758);
}

double NNfunction_nn_chi3_chi3::synapse0x20369f0() {
   return (neuron0x2023280()*-0.0093446);
}

double NNfunction_nn_chi3_chi3::synapse0x2036a30() {
   return (neuron0x20235c0()*-0.0357203);
}

double NNfunction_nn_chi3_chi3::synapse0x2036a70() {
   return (neuron0x2023900()*0.0168314);
}

double NNfunction_nn_chi3_chi3::synapse0x2036ab0() {
   return (neuron0x2023c40()*-0.0168592);
}

double NNfunction_nn_chi3_chi3::synapse0x2036af0() {
   return (neuron0x2023f80()*-0.00607439);
}

double NNfunction_nn_chi3_chi3::synapse0x2036b30() {
   return (neuron0x20242c0()*-0.562775);
}

double NNfunction_nn_chi3_chi3::synapse0x2036eb0() {
   return (neuron0x201f790()*0.0575711);
}

double NNfunction_nn_chi3_chi3::synapse0x2036ef0() {
   return (neuron0x201fa40()*0.0745115);
}

double NNfunction_nn_chi3_chi3::synapse0x2036f30() {
   return (neuron0x201fd80()*-0.0412377);
}

double NNfunction_nn_chi3_chi3::synapse0x2036f70() {
   return (neuron0x20200c0()*0.0265334);
}

double NNfunction_nn_chi3_chi3::synapse0x2036fb0() {
   return (neuron0x2020400()*0.0143411);
}

double NNfunction_nn_chi3_chi3::synapse0x2036ff0() {
   return (neuron0x2020740()*-0.0210382);
}

double NNfunction_nn_chi3_chi3::synapse0x2037030() {
   return (neuron0x2020a80()*-0.0263016);
}

double NNfunction_nn_chi3_chi3::synapse0x2037070() {
   return (neuron0x2020dc0()*-0.0166531);
}

double NNfunction_nn_chi3_chi3::synapse0x20370b0() {
   return (neuron0x2021100()*0.00549273);
}

double NNfunction_nn_chi3_chi3::synapse0x20370f0() {
   return (neuron0x2021440()*-0.0281147);
}

double NNfunction_nn_chi3_chi3::synapse0x2037130() {
   return (neuron0x2021780()*-0.00972287);
}

double NNfunction_nn_chi3_chi3::synapse0x2037170() {
   return (neuron0x2021ac0()*-0.0151289);
}

double NNfunction_nn_chi3_chi3::synapse0x20371b0() {
   return (neuron0x2021e00()*-0.0146351);
}

double NNfunction_nn_chi3_chi3::synapse0x20371f0() {
   return (neuron0x2022140()*-0.0666255);
}

double NNfunction_nn_chi3_chi3::synapse0x2037230() {
   return (neuron0x2022480()*0.511932);
}

double NNfunction_nn_chi3_chi3::synapse0x2037270() {
   return (neuron0x20227c0()*0.00397805);
}

double NNfunction_nn_chi3_chi3::synapse0x2036d00() {
   return (neuron0x2022b00()*0.0536886);
}

double NNfunction_nn_chi3_chi3::synapse0x2036d40() {
   return (neuron0x2023060()*0.118531);
}

double NNfunction_nn_chi3_chi3::synapse0x20373c0() {
   return (neuron0x2023280()*0.0966591);
}

double NNfunction_nn_chi3_chi3::synapse0x2037400() {
   return (neuron0x20235c0()*-0.0185071);
}

double NNfunction_nn_chi3_chi3::synapse0x2037440() {
   return (neuron0x2023900()*-0.0665178);
}

double NNfunction_nn_chi3_chi3::synapse0x2037480() {
   return (neuron0x2023c40()*0.0180761);
}

double NNfunction_nn_chi3_chi3::synapse0x20374c0() {
   return (neuron0x2023f80()*-0.0290113);
}

double NNfunction_nn_chi3_chi3::synapse0x2037500() {
   return (neuron0x20242c0()*-4.40226);
}

double NNfunction_nn_chi3_chi3::synapse0x2037880() {
   return (neuron0x201f790()*-0.0122253);
}

double NNfunction_nn_chi3_chi3::synapse0x20378c0() {
   return (neuron0x201fa40()*-0.0197575);
}

double NNfunction_nn_chi3_chi3::synapse0x2037900() {
   return (neuron0x201fd80()*0.28141);
}

double NNfunction_nn_chi3_chi3::synapse0x2037940() {
   return (neuron0x20200c0()*-0.0061488);
}

double NNfunction_nn_chi3_chi3::synapse0x2037980() {
   return (neuron0x2020400()*0.00405335);
}

double NNfunction_nn_chi3_chi3::synapse0x20379c0() {
   return (neuron0x2020740()*-0.0515264);
}

double NNfunction_nn_chi3_chi3::synapse0x2037a00() {
   return (neuron0x2020a80()*-0.000127351);
}

double NNfunction_nn_chi3_chi3::synapse0x2037a40() {
   return (neuron0x2020dc0()*-0.0638119);
}

double NNfunction_nn_chi3_chi3::synapse0x2037a80() {
   return (neuron0x2021100()*-0.0406645);
}

double NNfunction_nn_chi3_chi3::synapse0x2037ac0() {
   return (neuron0x2021440()*0.0122981);
}

double NNfunction_nn_chi3_chi3::synapse0x2037b00() {
   return (neuron0x2021780()*0.00671093);
}

double NNfunction_nn_chi3_chi3::synapse0x2037b40() {
   return (neuron0x2021ac0()*-0.0629186);
}

double NNfunction_nn_chi3_chi3::synapse0x2037b80() {
   return (neuron0x2021e00()*-0.0342564);
}

double NNfunction_nn_chi3_chi3::synapse0x2037bc0() {
   return (neuron0x2022140()*-0.0111643);
}

double NNfunction_nn_chi3_chi3::synapse0x2037c00() {
   return (neuron0x2022480()*-0.0606759);
}

double NNfunction_nn_chi3_chi3::synapse0x2037c40() {
   return (neuron0x20227c0()*-0.0191922);
}

double NNfunction_nn_chi3_chi3::synapse0x20376d0() {
   return (neuron0x2022b00()*-0.00154124);
}

double NNfunction_nn_chi3_chi3::synapse0x2037710() {
   return (neuron0x2023060()*-0.131568);
}

double NNfunction_nn_chi3_chi3::synapse0x2037d90() {
   return (neuron0x2023280()*-0.0910908);
}

double NNfunction_nn_chi3_chi3::synapse0x2037dd0() {
   return (neuron0x20235c0()*0.00266357);
}

double NNfunction_nn_chi3_chi3::synapse0x2037e10() {
   return (neuron0x2023900()*0.0612435);
}

double NNfunction_nn_chi3_chi3::synapse0x2037e50() {
   return (neuron0x2023c40()*-0.000628257);
}

double NNfunction_nn_chi3_chi3::synapse0x2037e90() {
   return (neuron0x2023f80()*-0.028992);
}

double NNfunction_nn_chi3_chi3::synapse0x2037ed0() {
   return (neuron0x20242c0()*3.61464);
}

double NNfunction_nn_chi3_chi3::synapse0x2038250() {
   return (neuron0x201f790()*-0.0503667);
}

double NNfunction_nn_chi3_chi3::synapse0x2038290() {
   return (neuron0x201fa40()*0.00774172);
}

double NNfunction_nn_chi3_chi3::synapse0x20382d0() {
   return (neuron0x201fd80()*-4.85709);
}

double NNfunction_nn_chi3_chi3::synapse0x2038310() {
   return (neuron0x20200c0()*0.0176414);
}

double NNfunction_nn_chi3_chi3::synapse0x2038350() {
   return (neuron0x2020400()*-0.00375955);
}

double NNfunction_nn_chi3_chi3::synapse0x2038390() {
   return (neuron0x2020740()*0.002269);
}

double NNfunction_nn_chi3_chi3::synapse0x20383d0() {
   return (neuron0x2020a80()*0.00404376);
}

double NNfunction_nn_chi3_chi3::synapse0x2038410() {
   return (neuron0x2020dc0()*0.00341561);
}

double NNfunction_nn_chi3_chi3::synapse0x2038450() {
   return (neuron0x2021100()*0.00638909);
}

double NNfunction_nn_chi3_chi3::synapse0x2038490() {
   return (neuron0x2021440()*0.0113078);
}

double NNfunction_nn_chi3_chi3::synapse0x20384d0() {
   return (neuron0x2021780()*0.0006098);
}

double NNfunction_nn_chi3_chi3::synapse0x2038510() {
   return (neuron0x2021ac0()*-0.0841612);
}

double NNfunction_nn_chi3_chi3::synapse0x2038550() {
   return (neuron0x2021e00()*-0.062856);
}

double NNfunction_nn_chi3_chi3::synapse0x2038590() {
   return (neuron0x2022140()*-0.00352025);
}

double NNfunction_nn_chi3_chi3::synapse0x20385d0() {
   return (neuron0x2022480()*0.0399216);
}

double NNfunction_nn_chi3_chi3::synapse0x2038610() {
   return (neuron0x20227c0()*0.00288233);
}

double NNfunction_nn_chi3_chi3::synapse0x20380a0() {
   return (neuron0x2022b00()*-9.2126e-05);
}

double NNfunction_nn_chi3_chi3::synapse0x20380e0() {
   return (neuron0x2023060()*0.0126089);
}

double NNfunction_nn_chi3_chi3::synapse0x2038760() {
   return (neuron0x2023280()*0.0125999);
}

double NNfunction_nn_chi3_chi3::synapse0x20387a0() {
   return (neuron0x20235c0()*-0.00113012);
}

double NNfunction_nn_chi3_chi3::synapse0x20387e0() {
   return (neuron0x2023900()*-0.00482274);
}

double NNfunction_nn_chi3_chi3::synapse0x2038820() {
   return (neuron0x2023c40()*0.00371612);
}

double NNfunction_nn_chi3_chi3::synapse0x2038860() {
   return (neuron0x2023f80()*-0.000254498);
}

double NNfunction_nn_chi3_chi3::synapse0x20388a0() {
   return (neuron0x20242c0()*1.69533);
}

double NNfunction_nn_chi3_chi3::synapse0x2038c20() {
   return (neuron0x201f790()*0.0612854);
}

double NNfunction_nn_chi3_chi3::synapse0x2038c60() {
   return (neuron0x201fa40()*-0.81354);
}

double NNfunction_nn_chi3_chi3::synapse0x2038ca0() {
   return (neuron0x201fd80()*-0.335189);
}

double NNfunction_nn_chi3_chi3::synapse0x2038ce0() {
   return (neuron0x20200c0()*-0.00479587);
}

double NNfunction_nn_chi3_chi3::synapse0x2038d20() {
   return (neuron0x2020400()*-0.0403578);
}

double NNfunction_nn_chi3_chi3::synapse0x2038d60() {
   return (neuron0x2020740()*0.0176506);
}

double NNfunction_nn_chi3_chi3::synapse0x2038da0() {
   return (neuron0x2020a80()*0.0506366);
}

double NNfunction_nn_chi3_chi3::synapse0x2038de0() {
   return (neuron0x2020dc0()*0.0782766);
}

double NNfunction_nn_chi3_chi3::synapse0x2038e20() {
   return (neuron0x2021100()*0.0347867);
}

double NNfunction_nn_chi3_chi3::synapse0x2038e60() {
   return (neuron0x2021440()*-0.0405386);
}

double NNfunction_nn_chi3_chi3::synapse0x2038ea0() {
   return (neuron0x2021780()*-0.0329032);
}

double NNfunction_nn_chi3_chi3::synapse0x2038ee0() {
   return (neuron0x2021ac0()*0.169042);
}

double NNfunction_nn_chi3_chi3::synapse0x2038f20() {
   return (neuron0x2021e00()*0.0891185);
}

double NNfunction_nn_chi3_chi3::synapse0x2038f60() {
   return (neuron0x2022140()*0.025718);
}

double NNfunction_nn_chi3_chi3::synapse0x2038fa0() {
   return (neuron0x2022480()*-1.453);
}

double NNfunction_nn_chi3_chi3::synapse0x2038fe0() {
   return (neuron0x20227c0()*-0.055955);
}

double NNfunction_nn_chi3_chi3::synapse0x2038a70() {
   return (neuron0x2022b00()*0.019401);
}

double NNfunction_nn_chi3_chi3::synapse0x2038ab0() {
   return (neuron0x2023060()*0.0565872);
}

double NNfunction_nn_chi3_chi3::synapse0x2039130() {
   return (neuron0x2023280()*0.0194429);
}

double NNfunction_nn_chi3_chi3::synapse0x2039170() {
   return (neuron0x20235c0()*0.0514038);
}

double NNfunction_nn_chi3_chi3::synapse0x20391b0() {
   return (neuron0x2023900()*-0.0119222);
}

double NNfunction_nn_chi3_chi3::synapse0x20391f0() {
   return (neuron0x2023c40()*0.0256047);
}

double NNfunction_nn_chi3_chi3::synapse0x2039230() {
   return (neuron0x2023f80()*0.123783);
}

double NNfunction_nn_chi3_chi3::synapse0x2039270() {
   return (neuron0x20242c0()*2.37497);
}

double NNfunction_nn_chi3_chi3::synapse0x20395f0() {
   return (neuron0x201f790()*-0.0642372);
}

double NNfunction_nn_chi3_chi3::synapse0x2039630() {
   return (neuron0x201fa40()*-0.00183168);
}

double NNfunction_nn_chi3_chi3::synapse0x2039670() {
   return (neuron0x201fd80()*-0.555189);
}

double NNfunction_nn_chi3_chi3::synapse0x20396b0() {
   return (neuron0x20200c0()*0.0441621);
}

double NNfunction_nn_chi3_chi3::synapse0x20396f0() {
   return (neuron0x2020400()*-0.0281958);
}

double NNfunction_nn_chi3_chi3::synapse0x2039730() {
   return (neuron0x2020740()*-0.01555);
}

double NNfunction_nn_chi3_chi3::synapse0x2039770() {
   return (neuron0x2020a80()*-0.0363916);
}

double NNfunction_nn_chi3_chi3::synapse0x20397b0() {
   return (neuron0x2020dc0()*0.0212379);
}

double NNfunction_nn_chi3_chi3::synapse0x20397f0() {
   return (neuron0x2021100()*-0.0193393);
}

double NNfunction_nn_chi3_chi3::synapse0x2039830() {
   return (neuron0x2021440()*-0.0752637);
}

double NNfunction_nn_chi3_chi3::synapse0x2039870() {
   return (neuron0x2021780()*0.00719441);
}

double NNfunction_nn_chi3_chi3::synapse0x20398b0() {
   return (neuron0x2021ac0()*0.807505);
}

double NNfunction_nn_chi3_chi3::synapse0x20398f0() {
   return (neuron0x2021e00()*-2.73903);
}

double NNfunction_nn_chi3_chi3::synapse0x2039930() {
   return (neuron0x2022140()*-0.0219846);
}

double NNfunction_nn_chi3_chi3::synapse0x2039970() {
   return (neuron0x2022480()*-0.00886851);
}

double NNfunction_nn_chi3_chi3::synapse0x20399b0() {
   return (neuron0x20227c0()*-0.0613318);
}

double NNfunction_nn_chi3_chi3::synapse0x2039440() {
   return (neuron0x2022b00()*-0.0216094);
}

double NNfunction_nn_chi3_chi3::synapse0x2039480() {
   return (neuron0x2023060()*-0.0554543);
}

double NNfunction_nn_chi3_chi3::synapse0x2039b00() {
   return (neuron0x2023280()*-0.0226278);
}

double NNfunction_nn_chi3_chi3::synapse0x2039b40() {
   return (neuron0x20235c0()*-0.000218723);
}

double NNfunction_nn_chi3_chi3::synapse0x2039b80() {
   return (neuron0x2023900()*-0.0438388);
}

double NNfunction_nn_chi3_chi3::synapse0x2039bc0() {
   return (neuron0x2023c40()*0.0113473);
}

double NNfunction_nn_chi3_chi3::synapse0x2039c00() {
   return (neuron0x2023f80()*-0.0286984);
}

double NNfunction_nn_chi3_chi3::synapse0x2039c40() {
   return (neuron0x20242c0()*0.130281);
}

double NNfunction_nn_chi3_chi3::synapse0x2039fc0() {
   return (neuron0x201f790()*0.0398205);
}

double NNfunction_nn_chi3_chi3::synapse0x202e590() {
   return (neuron0x201fa40()*-0.00175184);
}

double NNfunction_nn_chi3_chi3::synapse0x202e5d0() {
   return (neuron0x201fd80()*8.73893);
}

double NNfunction_nn_chi3_chi3::synapse0x202e610() {
   return (neuron0x20200c0()*-0.00863959);
}

double NNfunction_nn_chi3_chi3::synapse0x202e860() {
   return (neuron0x2020400()*0.0123483);
}

double NNfunction_nn_chi3_chi3::synapse0x202e8a0() {
   return (neuron0x2020740()*0.0145415);
}

double NNfunction_nn_chi3_chi3::synapse0x202e8e0() {
   return (neuron0x2020a80()*0.015996);
}

double NNfunction_nn_chi3_chi3::synapse0x202eb30() {
   return (neuron0x2020dc0()*0.00417049);
}

double NNfunction_nn_chi3_chi3::synapse0x202eb70() {
   return (neuron0x2021100()*0.00173133);
}

double NNfunction_nn_chi3_chi3::synapse0x202edc0() {
   return (neuron0x2021440()*0.00396025);
}

double NNfunction_nn_chi3_chi3::synapse0x202ee00() {
   return (neuron0x2021780()*-0.0231377);
}

double NNfunction_nn_chi3_chi3::synapse0x202ee40() {
   return (neuron0x2021ac0()*-0.00300503);
}

double NNfunction_nn_chi3_chi3::synapse0x202f090() {
   return (neuron0x2021e00()*0.0114959);
}

double NNfunction_nn_chi3_chi3::synapse0x202f0d0() {
   return (neuron0x2022140()*0.00200579);
}

double NNfunction_nn_chi3_chi3::synapse0x202f320() {
   return (neuron0x2022480()*-0.0364762);
}

double NNfunction_nn_chi3_chi3::synapse0x202f360() {
   return (neuron0x20227c0()*0.0144808);
}

double NNfunction_nn_chi3_chi3::synapse0x2039e10() {
   return (neuron0x2022b00()*-0.00692933);
}

double NNfunction_nn_chi3_chi3::synapse0x2039e50() {
   return (neuron0x2023060()*-0.0118375);
}

double NNfunction_nn_chi3_chi3::synapse0x202f4b0() {
   return (neuron0x2023280()*0.00525218);
}

double NNfunction_nn_chi3_chi3::synapse0x202f9c0() {
   return (neuron0x20235c0()*-0.00790701);
}

double NNfunction_nn_chi3_chi3::synapse0x202fa00() {
   return (neuron0x2023900()*-0.00563053);
}

double NNfunction_nn_chi3_chi3::synapse0x202fa40() {
   return (neuron0x2023c40()*0.00623585);
}

double NNfunction_nn_chi3_chi3::synapse0x202fc90() {
   return (neuron0x2023f80()*0.0124022);
}

double NNfunction_nn_chi3_chi3::synapse0x202fcd0() {
   return (neuron0x20242c0()*2.11845);
}

double NNfunction_nn_chi3_chi3::synapse0x202f580() {
   return (neuron0x201f790()*-0.319565);
}

double NNfunction_nn_chi3_chi3::synapse0x202f5c0() {
   return (neuron0x201fa40()*-1.91116);
}

double NNfunction_nn_chi3_chi3::synapse0x202f600() {
   return (neuron0x201fd80()*-0.505535);
}

double NNfunction_nn_chi3_chi3::synapse0x202f640() {
   return (neuron0x20200c0()*-0.0620786);
}

double NNfunction_nn_chi3_chi3::synapse0x202ffc0() {
   return (neuron0x2020400()*0.419354);
}

double NNfunction_nn_chi3_chi3::synapse0x203c310() {
   return (neuron0x2020740()*-0.569496);
}

double NNfunction_nn_chi3_chi3::synapse0x203c350() {
   return (neuron0x2020a80()*0.513505);
}

double NNfunction_nn_chi3_chi3::synapse0x203c390() {
   return (neuron0x2020dc0()*-0.0549633);
}

double NNfunction_nn_chi3_chi3::synapse0x203c3d0() {
   return (neuron0x2021100()*-0.027934);
}

double NNfunction_nn_chi3_chi3::synapse0x203c410() {
   return (neuron0x2021440()*-0.020378);
}

double NNfunction_nn_chi3_chi3::synapse0x203c450() {
   return (neuron0x2021780()*0.458012);
}

double NNfunction_nn_chi3_chi3::synapse0x203c490() {
   return (neuron0x2021ac0()*-0.447833);
}

double NNfunction_nn_chi3_chi3::synapse0x203c4d0() {
   return (neuron0x2021e00()*-0.545537);
}

double NNfunction_nn_chi3_chi3::synapse0x203c510() {
   return (neuron0x2022140()*-0.328418);
}

double NNfunction_nn_chi3_chi3::synapse0x203c550() {
   return (neuron0x2022480()*-1.08382);
}

double NNfunction_nn_chi3_chi3::synapse0x203c590() {
   return (neuron0x20227c0()*-0.24493);
}

double NNfunction_nn_chi3_chi3::synapse0x202fea0() {
   return (neuron0x2022b00()*-0.469328);
}

double NNfunction_nn_chi3_chi3::synapse0x202fee0() {
   return (neuron0x2023060()*0.164567);
}

double NNfunction_nn_chi3_chi3::synapse0x203c6e0() {
   return (neuron0x2023280()*0.251815);
}

double NNfunction_nn_chi3_chi3::synapse0x203c720() {
   return (neuron0x20235c0()*-0.157661);
}

double NNfunction_nn_chi3_chi3::synapse0x203c760() {
   return (neuron0x2023900()*0.188724);
}

double NNfunction_nn_chi3_chi3::synapse0x203c7a0() {
   return (neuron0x2023c40()*0.0807154);
}

double NNfunction_nn_chi3_chi3::synapse0x203c7e0() {
   return (neuron0x2023f80()*-0.257618);
}

double NNfunction_nn_chi3_chi3::synapse0x203c820() {
   return (neuron0x20242c0()*0.95227);
}

double NNfunction_nn_chi3_chi3::synapse0x203cba0() {
   return (neuron0x201f790()*0.00600485);
}

double NNfunction_nn_chi3_chi3::synapse0x203cbe0() {
   return (neuron0x201fa40()*0.35549);
}

double NNfunction_nn_chi3_chi3::synapse0x203cc20() {
   return (neuron0x201fd80()*-0.0109638);
}

double NNfunction_nn_chi3_chi3::synapse0x203cc60() {
   return (neuron0x20200c0()*0.0256301);
}

double NNfunction_nn_chi3_chi3::synapse0x203cca0() {
   return (neuron0x2020400()*0.013323);
}

double NNfunction_nn_chi3_chi3::synapse0x203cce0() {
   return (neuron0x2020740()*0.0200945);
}

double NNfunction_nn_chi3_chi3::synapse0x203cd20() {
   return (neuron0x2020a80()*-0.0208323);
}

double NNfunction_nn_chi3_chi3::synapse0x203cd60() {
   return (neuron0x2020dc0()*-0.0150769);
}

double NNfunction_nn_chi3_chi3::synapse0x203cda0() {
   return (neuron0x2021100()*-0.0204205);
}

double NNfunction_nn_chi3_chi3::synapse0x203cde0() {
   return (neuron0x2021440()*-0.023038);
}

double NNfunction_nn_chi3_chi3::synapse0x203ce20() {
   return (neuron0x2021780()*-0.0539454);
}

double NNfunction_nn_chi3_chi3::synapse0x203ce60() {
   return (neuron0x2021ac0()*-0.138384);
}

double NNfunction_nn_chi3_chi3::synapse0x203cea0() {
   return (neuron0x2021e00()*-0.0412445);
}

double NNfunction_nn_chi3_chi3::synapse0x203cee0() {
   return (neuron0x2022140()*0.0173906);
}

double NNfunction_nn_chi3_chi3::synapse0x203cf20() {
   return (neuron0x2022480()*0.597516);
}

double NNfunction_nn_chi3_chi3::synapse0x203cf60() {
   return (neuron0x20227c0()*0.0348131);
}

double NNfunction_nn_chi3_chi3::synapse0x203c9f0() {
   return (neuron0x2022b00()*-0.016507);
}

double NNfunction_nn_chi3_chi3::synapse0x203ca30() {
   return (neuron0x2023060()*-0.105622);
}

double NNfunction_nn_chi3_chi3::synapse0x203d0b0() {
   return (neuron0x2023280()*-0.0270281);
}

double NNfunction_nn_chi3_chi3::synapse0x203d0f0() {
   return (neuron0x20235c0()*-0.0180395);
}

double NNfunction_nn_chi3_chi3::synapse0x203d130() {
   return (neuron0x2023900()*-0.0286661);
}

double NNfunction_nn_chi3_chi3::synapse0x203d170() {
   return (neuron0x2023c40()*-0.0416939);
}

double NNfunction_nn_chi3_chi3::synapse0x203d1b0() {
   return (neuron0x2023f80()*-0.0231732);
}

double NNfunction_nn_chi3_chi3::synapse0x203d1f0() {
   return (neuron0x20242c0()*-1.10767);
}

double NNfunction_nn_chi3_chi3::synapse0x203d570() {
   return (neuron0x201f790()*-0.0117553);
}

double NNfunction_nn_chi3_chi3::synapse0x203d5b0() {
   return (neuron0x201fa40()*0.00204668);
}

double NNfunction_nn_chi3_chi3::synapse0x203d5f0() {
   return (neuron0x201fd80()*2.62692);
}

double NNfunction_nn_chi3_chi3::synapse0x203d630() {
   return (neuron0x20200c0()*0.0225951);
}

double NNfunction_nn_chi3_chi3::synapse0x203d670() {
   return (neuron0x2020400()*0.00877125);
}

double NNfunction_nn_chi3_chi3::synapse0x203d6b0() {
   return (neuron0x2020740()*0.00577369);
}

double NNfunction_nn_chi3_chi3::synapse0x203d6f0() {
   return (neuron0x2020a80()*0.0229837);
}

double NNfunction_nn_chi3_chi3::synapse0x203d730() {
   return (neuron0x2020dc0()*0.0207175);
}

double NNfunction_nn_chi3_chi3::synapse0x203d770() {
   return (neuron0x2021100()*0.00388171);
}

double NNfunction_nn_chi3_chi3::synapse0x203d7b0() {
   return (neuron0x2021440()*-0.0146208);
}

double NNfunction_nn_chi3_chi3::synapse0x203d7f0() {
   return (neuron0x2021780()*-0.00885473);
}

double NNfunction_nn_chi3_chi3::synapse0x203d830() {
   return (neuron0x2021ac0()*0.280717);
}

double NNfunction_nn_chi3_chi3::synapse0x203d870() {
   return (neuron0x2021e00()*0.000263564);
}

double NNfunction_nn_chi3_chi3::synapse0x203d8b0() {
   return (neuron0x2022140()*0.00315425);
}

double NNfunction_nn_chi3_chi3::synapse0x203d8f0() {
   return (neuron0x2022480()*-0.0031737);
}

double NNfunction_nn_chi3_chi3::synapse0x203d930() {
   return (neuron0x20227c0()*0.0380205);
}

double NNfunction_nn_chi3_chi3::synapse0x203d3c0() {
   return (neuron0x2022b00()*-0.00978371);
}

double NNfunction_nn_chi3_chi3::synapse0x203d400() {
   return (neuron0x2023060()*0.0214724);
}

double NNfunction_nn_chi3_chi3::synapse0x203da80() {
   return (neuron0x2023280()*0.00711768);
}

double NNfunction_nn_chi3_chi3::synapse0x203dac0() {
   return (neuron0x20235c0()*0.0133156);
}

double NNfunction_nn_chi3_chi3::synapse0x203db00() {
   return (neuron0x2023900()*-0.0380838);
}

double NNfunction_nn_chi3_chi3::synapse0x203db40() {
   return (neuron0x2023c40()*-0.00326373);
}

double NNfunction_nn_chi3_chi3::synapse0x203db80() {
   return (neuron0x2023f80()*-0.00115048);
}

double NNfunction_nn_chi3_chi3::synapse0x203dbc0() {
   return (neuron0x20242c0()*-1.00476);
}

double NNfunction_nn_chi3_chi3::synapse0x203df40() {
   return (neuron0x201f790()*-0.518366);
}

double NNfunction_nn_chi3_chi3::synapse0x203df80() {
   return (neuron0x201fa40()*-1.24135);
}

double NNfunction_nn_chi3_chi3::synapse0x203dfc0() {
   return (neuron0x201fd80()*-0.430162);
}

double NNfunction_nn_chi3_chi3::synapse0x203e000() {
   return (neuron0x20200c0()*0.184929);
}

double NNfunction_nn_chi3_chi3::synapse0x203e040() {
   return (neuron0x2020400()*-0.0106687);
}

double NNfunction_nn_chi3_chi3::synapse0x203e080() {
   return (neuron0x2020740()*-0.554588);
}

double NNfunction_nn_chi3_chi3::synapse0x203e0c0() {
   return (neuron0x2020a80()*-0.438807);
}

double NNfunction_nn_chi3_chi3::synapse0x203e100() {
   return (neuron0x2020dc0()*-0.0806832);
}

double NNfunction_nn_chi3_chi3::synapse0x203e140() {
   return (neuron0x2021100()*0.352564);
}

double NNfunction_nn_chi3_chi3::synapse0x203e180() {
   return (neuron0x2021440()*0.595502);
}

double NNfunction_nn_chi3_chi3::synapse0x203e1c0() {
   return (neuron0x2021780()*0.610484);
}

double NNfunction_nn_chi3_chi3::synapse0x203e200() {
   return (neuron0x2021ac0()*-0.506238);
}

double NNfunction_nn_chi3_chi3::synapse0x203e240() {
   return (neuron0x2021e00()*-0.227774);
}

double NNfunction_nn_chi3_chi3::synapse0x203e280() {
   return (neuron0x2022140()*-0.0323074);
}

double NNfunction_nn_chi3_chi3::synapse0x203e2c0() {
   return (neuron0x2022480()*-1.05993);
}

double NNfunction_nn_chi3_chi3::synapse0x203e300() {
   return (neuron0x20227c0()*-0.417525);
}

double NNfunction_nn_chi3_chi3::synapse0x203dd90() {
   return (neuron0x2022b00()*0.0647201);
}

double NNfunction_nn_chi3_chi3::synapse0x203ddd0() {
   return (neuron0x2023060()*0.262607);
}

double NNfunction_nn_chi3_chi3::synapse0x203e450() {
   return (neuron0x2023280()*0.195319);
}

double NNfunction_nn_chi3_chi3::synapse0x203e490() {
   return (neuron0x20235c0()*-0.304644);
}

double NNfunction_nn_chi3_chi3::synapse0x203e4d0() {
   return (neuron0x2023900()*0.172583);
}

double NNfunction_nn_chi3_chi3::synapse0x203e510() {
   return (neuron0x2023c40()*-0.582343);
}

double NNfunction_nn_chi3_chi3::synapse0x203e550() {
   return (neuron0x2023f80()*0.109248);
}

double NNfunction_nn_chi3_chi3::synapse0x203e590() {
   return (neuron0x20242c0()*0.875037);
}

double NNfunction_nn_chi3_chi3::synapse0x203e910() {
   return (neuron0x201f790()*-0.878559);
}

double NNfunction_nn_chi3_chi3::synapse0x203e950() {
   return (neuron0x201fa40()*-0.255917);
}

double NNfunction_nn_chi3_chi3::synapse0x203e990() {
   return (neuron0x201fd80()*-1.46187);
}

double NNfunction_nn_chi3_chi3::synapse0x203e9d0() {
   return (neuron0x20200c0()*0.246897);
}

double NNfunction_nn_chi3_chi3::synapse0x203ea10() {
   return (neuron0x2020400()*0.0586644);
}

double NNfunction_nn_chi3_chi3::synapse0x203ea50() {
   return (neuron0x2020740()*0.128532);
}

double NNfunction_nn_chi3_chi3::synapse0x203ea90() {
   return (neuron0x2020a80()*0.355038);
}

double NNfunction_nn_chi3_chi3::synapse0x203ead0() {
   return (neuron0x2020dc0()*-0.139021);
}

double NNfunction_nn_chi3_chi3::synapse0x203eb10() {
   return (neuron0x2021100()*-0.0417576);
}

double NNfunction_nn_chi3_chi3::synapse0x203eb50() {
   return (neuron0x2021440()*0.256495);
}

double NNfunction_nn_chi3_chi3::synapse0x203eb90() {
   return (neuron0x2021780()*0.0950102);
}

double NNfunction_nn_chi3_chi3::synapse0x203ebd0() {
   return (neuron0x2021ac0()*-0.26205);
}

double NNfunction_nn_chi3_chi3::synapse0x203ec10() {
   return (neuron0x2021e00()*-0.184267);
}

double NNfunction_nn_chi3_chi3::synapse0x203ec50() {
   return (neuron0x2022140()*0.193229);
}

double NNfunction_nn_chi3_chi3::synapse0x203ec90() {
   return (neuron0x2022480()*0.0754309);
}

double NNfunction_nn_chi3_chi3::synapse0x203ecd0() {
   return (neuron0x20227c0()*0.047799);
}

double NNfunction_nn_chi3_chi3::synapse0x203e760() {
   return (neuron0x2022b00()*-0.118658);
}

double NNfunction_nn_chi3_chi3::synapse0x203e7a0() {
   return (neuron0x2023060()*-0.195013);
}

double NNfunction_nn_chi3_chi3::synapse0x203ee20() {
   return (neuron0x2023280()*0.0813524);
}

double NNfunction_nn_chi3_chi3::synapse0x203ee60() {
   return (neuron0x20235c0()*-0.105658);
}

double NNfunction_nn_chi3_chi3::synapse0x203eea0() {
   return (neuron0x2023900()*0.0125798);
}

double NNfunction_nn_chi3_chi3::synapse0x203eee0() {
   return (neuron0x2023c40()*-0.0907711);
}

double NNfunction_nn_chi3_chi3::synapse0x203ef20() {
   return (neuron0x2023f80()*-0.146746);
}

double NNfunction_nn_chi3_chi3::synapse0x203ef60() {
   return (neuron0x20242c0()*2.65032);
}

double NNfunction_nn_chi3_chi3::synapse0x203f2e0() {
   return (neuron0x201f790()*0.0353104);
}

double NNfunction_nn_chi3_chi3::synapse0x203f320() {
   return (neuron0x201fa40()*-19.8672);
}

double NNfunction_nn_chi3_chi3::synapse0x203f360() {
   return (neuron0x201fd80()*0.0218098);
}

double NNfunction_nn_chi3_chi3::synapse0x203f3a0() {
   return (neuron0x20200c0()*0.0086885);
}

double NNfunction_nn_chi3_chi3::synapse0x203f3e0() {
   return (neuron0x2020400()*-0.0104283);
}

double NNfunction_nn_chi3_chi3::synapse0x203f420() {
   return (neuron0x2020740()*0.010035);
}

double NNfunction_nn_chi3_chi3::synapse0x203f460() {
   return (neuron0x2020a80()*-0.00395682);
}

double NNfunction_nn_chi3_chi3::synapse0x203f4a0() {
   return (neuron0x2020dc0()*0.006952);
}

double NNfunction_nn_chi3_chi3::synapse0x203f4e0() {
   return (neuron0x2021100()*-0.0080916);
}

double NNfunction_nn_chi3_chi3::synapse0x203f520() {
   return (neuron0x2021440()*0.014489);
}

double NNfunction_nn_chi3_chi3::synapse0x203f560() {
   return (neuron0x2021780()*-0.00116171);
}

double NNfunction_nn_chi3_chi3::synapse0x203f5a0() {
   return (neuron0x2021ac0()*-0.00605893);
}

double NNfunction_nn_chi3_chi3::synapse0x203f5e0() {
   return (neuron0x2021e00()*-0.01713);
}

double NNfunction_nn_chi3_chi3::synapse0x203f620() {
   return (neuron0x2022140()*0.00314416);
}

double NNfunction_nn_chi3_chi3::synapse0x203f660() {
   return (neuron0x2022480()*0.32503);
}

double NNfunction_nn_chi3_chi3::synapse0x203f6a0() {
   return (neuron0x20227c0()*-0.000997145);
}

double NNfunction_nn_chi3_chi3::synapse0x203f130() {
   return (neuron0x2022b00()*-0.0171978);
}

double NNfunction_nn_chi3_chi3::synapse0x203f170() {
   return (neuron0x2023060()*-0.00198242);
}

double NNfunction_nn_chi3_chi3::synapse0x203f7f0() {
   return (neuron0x2023280()*-0.0045668);
}

double NNfunction_nn_chi3_chi3::synapse0x203f830() {
   return (neuron0x20235c0()*-0.0020698);
}

double NNfunction_nn_chi3_chi3::synapse0x203f870() {
   return (neuron0x2023900()*-0.000823632);
}

double NNfunction_nn_chi3_chi3::synapse0x203f8b0() {
   return (neuron0x2023c40()*0.00652039);
}

double NNfunction_nn_chi3_chi3::synapse0x203f8f0() {
   return (neuron0x2023f80()*-0.00905325);
}

double NNfunction_nn_chi3_chi3::synapse0x203f930() {
   return (neuron0x20242c0()*1.81932);
}

double NNfunction_nn_chi3_chi3::synapse0x203fcb0() {
   return (neuron0x201f790()*0.0834229);
}

double NNfunction_nn_chi3_chi3::synapse0x203fcf0() {
   return (neuron0x201fa40()*2.66964);
}

double NNfunction_nn_chi3_chi3::synapse0x203fd30() {
   return (neuron0x201fd80()*-0.317291);
}

double NNfunction_nn_chi3_chi3::synapse0x203fd70() {
   return (neuron0x20200c0()*-0.0382617);
}

double NNfunction_nn_chi3_chi3::synapse0x203fdb0() {
   return (neuron0x2020400()*-0.0503617);
}

double NNfunction_nn_chi3_chi3::synapse0x203fdf0() {
   return (neuron0x2020740()*0.0951616);
}

double NNfunction_nn_chi3_chi3::synapse0x203fe30() {
   return (neuron0x2020a80()*0.0119987);
}

double NNfunction_nn_chi3_chi3::synapse0x203fe70() {
   return (neuron0x2020dc0()*0.0236984);
}

double NNfunction_nn_chi3_chi3::synapse0x203feb0() {
   return (neuron0x2021100()*0.0757849);
}

double NNfunction_nn_chi3_chi3::synapse0x203fef0() {
   return (neuron0x2021440()*0.0122786);
}

double NNfunction_nn_chi3_chi3::synapse0x203ff30() {
   return (neuron0x2021780()*0.123959);
}

double NNfunction_nn_chi3_chi3::synapse0x203ff70() {
   return (neuron0x2021ac0()*0.150975);
}

double NNfunction_nn_chi3_chi3::synapse0x203ffb0() {
   return (neuron0x2021e00()*0.249415);
}

double NNfunction_nn_chi3_chi3::synapse0x203fff0() {
   return (neuron0x2022140()*0.13348);
}

double NNfunction_nn_chi3_chi3::synapse0x2040030() {
   return (neuron0x2022480()*-1.93066);
}

double NNfunction_nn_chi3_chi3::synapse0x2040070() {
   return (neuron0x20227c0()*-0.0120085);
}

double NNfunction_nn_chi3_chi3::synapse0x203fb00() {
   return (neuron0x2022b00()*0.123448);
}

double NNfunction_nn_chi3_chi3::synapse0x203fb40() {
   return (neuron0x2023060()*0.148566);
}

double NNfunction_nn_chi3_chi3::synapse0x20401c0() {
   return (neuron0x2023280()*0.222569);
}

double NNfunction_nn_chi3_chi3::synapse0x2040200() {
   return (neuron0x20235c0()*0.0894533);
}

double NNfunction_nn_chi3_chi3::synapse0x2040240() {
   return (neuron0x2023900()*-0.0343834);
}

double NNfunction_nn_chi3_chi3::synapse0x2040280() {
   return (neuron0x2023c40()*-0.0784328);
}

double NNfunction_nn_chi3_chi3::synapse0x20402c0() {
   return (neuron0x2023f80()*0.101143);
}

double NNfunction_nn_chi3_chi3::synapse0x2040300() {
   return (neuron0x20242c0()*-1.97107);
}

double NNfunction_nn_chi3_chi3::synapse0x2040680() {
   return (neuron0x201f790()*0.0316686);
}

double NNfunction_nn_chi3_chi3::synapse0x20406c0() {
   return (neuron0x201fa40()*-0.0197031);
}

double NNfunction_nn_chi3_chi3::synapse0x2040700() {
   return (neuron0x201fd80()*1.27154);
}

double NNfunction_nn_chi3_chi3::synapse0x2040740() {
   return (neuron0x20200c0()*0.0315796);
}

double NNfunction_nn_chi3_chi3::synapse0x2040780() {
   return (neuron0x2020400()*-0.0112482);
}

double NNfunction_nn_chi3_chi3::synapse0x20407c0() {
   return (neuron0x2020740()*0.0101944);
}

double NNfunction_nn_chi3_chi3::synapse0x2040800() {
   return (neuron0x2020a80()*-0.00016819);
}

double NNfunction_nn_chi3_chi3::synapse0x2040840() {
   return (neuron0x2020dc0()*0.00822641);
}

double NNfunction_nn_chi3_chi3::synapse0x2040880() {
   return (neuron0x2021100()*0.0186151);
}

double NNfunction_nn_chi3_chi3::synapse0x20408c0() {
   return (neuron0x2021440()*-0.0157778);
}

double NNfunction_nn_chi3_chi3::synapse0x2040900() {
   return (neuron0x2021780()*0.0112172);
}

double NNfunction_nn_chi3_chi3::synapse0x2040940() {
   return (neuron0x2021ac0()*-0.0142148);
}

double NNfunction_nn_chi3_chi3::synapse0x2040980() {
   return (neuron0x2021e00()*0.0904031);
}

double NNfunction_nn_chi3_chi3::synapse0x20409c0() {
   return (neuron0x2022140()*0.0226037);
}

double NNfunction_nn_chi3_chi3::synapse0x2040a00() {
   return (neuron0x2022480()*0.0223515);
}

double NNfunction_nn_chi3_chi3::synapse0x2040a40() {
   return (neuron0x20227c0()*-0.00100559);
}

double NNfunction_nn_chi3_chi3::synapse0x20404d0() {
   return (neuron0x2022b00()*-0.000727652);
}

double NNfunction_nn_chi3_chi3::synapse0x2040510() {
   return (neuron0x2023060()*0.0397637);
}

double NNfunction_nn_chi3_chi3::synapse0x2040b90() {
   return (neuron0x2023280()*-0.00762087);
}

double NNfunction_nn_chi3_chi3::synapse0x2040bd0() {
   return (neuron0x20235c0()*0.000739806);
}

double NNfunction_nn_chi3_chi3::synapse0x2040c10() {
   return (neuron0x2023900()*0.0122093);
}

double NNfunction_nn_chi3_chi3::synapse0x2040c50() {
   return (neuron0x2023c40()*0.01059);
}

double NNfunction_nn_chi3_chi3::synapse0x2040c90() {
   return (neuron0x2023f80()*0.00168418);
}

double NNfunction_nn_chi3_chi3::synapse0x2040cd0() {
   return (neuron0x20242c0()*0.0376006);
}

double NNfunction_nn_chi3_chi3::synapse0x2029780() {
   return (neuron0x201f790()*0.0232666);
}

double NNfunction_nn_chi3_chi3::synapse0x20297c0() {
   return (neuron0x201fa40()*-0.018862);
}

double NNfunction_nn_chi3_chi3::synapse0x2029800() {
   return (neuron0x201fd80()*3.32109);
}

double NNfunction_nn_chi3_chi3::synapse0x2029840() {
   return (neuron0x20200c0()*-0.00740231);
}

double NNfunction_nn_chi3_chi3::synapse0x2029880() {
   return (neuron0x2020400()*0.0332799);
}

double NNfunction_nn_chi3_chi3::synapse0x20298c0() {
   return (neuron0x2020740()*-0.00483965);
}

double NNfunction_nn_chi3_chi3::synapse0x2029900() {
   return (neuron0x2020a80()*-0.0359334);
}

double NNfunction_nn_chi3_chi3::synapse0x2029940() {
   return (neuron0x2020dc0()*0.00674033);
}

double NNfunction_nn_chi3_chi3::synapse0x2041460() {
   return (neuron0x2021100()*-0.0193776);
}

double NNfunction_nn_chi3_chi3::synapse0x20414a0() {
   return (neuron0x2021440()*0.000635196);
}

double NNfunction_nn_chi3_chi3::synapse0x20414e0() {
   return (neuron0x2021780()*-0.00927755);
}

double NNfunction_nn_chi3_chi3::synapse0x2041520() {
   return (neuron0x2021ac0()*1.07935);
}

double NNfunction_nn_chi3_chi3::synapse0x2041560() {
   return (neuron0x2021e00()*-0.111231);
}

double NNfunction_nn_chi3_chi3::synapse0x20415a0() {
   return (neuron0x2022140()*-0.0628417);
}

double NNfunction_nn_chi3_chi3::synapse0x20415e0() {
   return (neuron0x2022480()*-0.051631);
}

double NNfunction_nn_chi3_chi3::synapse0x2041620() {
   return (neuron0x20227c0()*0.0115907);
}

double NNfunction_nn_chi3_chi3::synapse0x2040ea0() {
   return (neuron0x2022b00()*-0.0162386);
}

double NNfunction_nn_chi3_chi3::synapse0x2040ee0() {
   return (neuron0x2023060()*-0.0503476);
}

double NNfunction_nn_chi3_chi3::synapse0x2041770() {
   return (neuron0x2023280()*0.00169696);
}

double NNfunction_nn_chi3_chi3::synapse0x20417b0() {
   return (neuron0x20235c0()*-0.0182318);
}

double NNfunction_nn_chi3_chi3::synapse0x20417f0() {
   return (neuron0x2023900()*-0.0205123);
}

double NNfunction_nn_chi3_chi3::synapse0x2041830() {
   return (neuron0x2023c40()*0.00641574);
}

double NNfunction_nn_chi3_chi3::synapse0x2041870() {
   return (neuron0x2023f80()*-0.016164);
}

double NNfunction_nn_chi3_chi3::synapse0x20418b0() {
   return (neuron0x20242c0()*0.0972268);
}

double NNfunction_nn_chi3_chi3::synapse0x2041c30() {
   return (neuron0x201f790()*0.00124625);
}

double NNfunction_nn_chi3_chi3::synapse0x2041c70() {
   return (neuron0x201fa40()*-1.37372);
}

double NNfunction_nn_chi3_chi3::synapse0x2041cb0() {
   return (neuron0x201fd80()*-1.28366);
}

double NNfunction_nn_chi3_chi3::synapse0x2041cf0() {
   return (neuron0x20200c0()*-0.0226183);
}

double NNfunction_nn_chi3_chi3::synapse0x2041d30() {
   return (neuron0x2020400()*0.0551301);
}

double NNfunction_nn_chi3_chi3::synapse0x2041d70() {
   return (neuron0x2020740()*0.068275);
}

double NNfunction_nn_chi3_chi3::synapse0x2041db0() {
   return (neuron0x2020a80()*0.048286);
}

double NNfunction_nn_chi3_chi3::synapse0x2041df0() {
   return (neuron0x2020dc0()*0.0237204);
}

double NNfunction_nn_chi3_chi3::synapse0x2041e30() {
   return (neuron0x2021100()*0.0301413);
}

double NNfunction_nn_chi3_chi3::synapse0x2041e70() {
   return (neuron0x2021440()*-0.0919091);
}

double NNfunction_nn_chi3_chi3::synapse0x2041eb0() {
   return (neuron0x2021780()*0.0830251);
}

double NNfunction_nn_chi3_chi3::synapse0x2041ef0() {
   return (neuron0x2021ac0()*-0.0335674);
}

double NNfunction_nn_chi3_chi3::synapse0x2041f30() {
   return (neuron0x2021e00()*0.203876);
}

double NNfunction_nn_chi3_chi3::synapse0x2041f70() {
   return (neuron0x2022140()*0.0372682);
}

double NNfunction_nn_chi3_chi3::synapse0x2041fb0() {
   return (neuron0x2022480()*-1.30528);
}

double NNfunction_nn_chi3_chi3::synapse0x2041ff0() {
   return (neuron0x20227c0()*-0.0414061);
}

double NNfunction_nn_chi3_chi3::synapse0x2041a80() {
   return (neuron0x2022b00()*0.0867977);
}

double NNfunction_nn_chi3_chi3::synapse0x2041ac0() {
   return (neuron0x2023060()*0.205561);
}

double NNfunction_nn_chi3_chi3::synapse0x2042140() {
   return (neuron0x2023280()*-0.0286846);
}

double NNfunction_nn_chi3_chi3::synapse0x2042180() {
   return (neuron0x20235c0()*0.00772827);
}

double NNfunction_nn_chi3_chi3::synapse0x20421c0() {
   return (neuron0x2023900()*0.0196098);
}

double NNfunction_nn_chi3_chi3::synapse0x2042200() {
   return (neuron0x2023c40()*-0.0174897);
}

double NNfunction_nn_chi3_chi3::synapse0x2042240() {
   return (neuron0x2023f80()*0.0791536);
}

double NNfunction_nn_chi3_chi3::synapse0x2042280() {
   return (neuron0x20242c0()*0.568979);
}

double NNfunction_nn_chi3_chi3::synapse0x2042600() {
   return (neuron0x201f790()*-0.0777164);
}

double NNfunction_nn_chi3_chi3::synapse0x2042640() {
   return (neuron0x201fa40()*15.4311);
}

double NNfunction_nn_chi3_chi3::synapse0x2042680() {
   return (neuron0x201fd80()*-6.60803);
}

double NNfunction_nn_chi3_chi3::synapse0x20426c0() {
   return (neuron0x20200c0()*0.031825);
}

double NNfunction_nn_chi3_chi3::synapse0x2042700() {
   return (neuron0x2020400()*-0.0170382);
}

double NNfunction_nn_chi3_chi3::synapse0x2042740() {
   return (neuron0x2020740()*0.0146088);
}

double NNfunction_nn_chi3_chi3::synapse0x2042780() {
   return (neuron0x2020a80()*-0.0258076);
}

double NNfunction_nn_chi3_chi3::synapse0x20427c0() {
   return (neuron0x2020dc0()*0.00914109);
}

double NNfunction_nn_chi3_chi3::synapse0x2042800() {
   return (neuron0x2021100()*-0.00214065);
}

double NNfunction_nn_chi3_chi3::synapse0x2042840() {
   return (neuron0x2021440()*-0.0387849);
}

double NNfunction_nn_chi3_chi3::synapse0x2042880() {
   return (neuron0x2021780()*-0.0574718);
}

double NNfunction_nn_chi3_chi3::synapse0x20428c0() {
   return (neuron0x2021ac0()*-0.0723999);
}

double NNfunction_nn_chi3_chi3::synapse0x2042900() {
   return (neuron0x2021e00()*-0.0465277);
}

double NNfunction_nn_chi3_chi3::synapse0x2042940() {
   return (neuron0x2022140()*-0.0417328);
}

double NNfunction_nn_chi3_chi3::synapse0x2042980() {
   return (neuron0x2022480()*0.248338);
}

double NNfunction_nn_chi3_chi3::synapse0x20429c0() {
   return (neuron0x20227c0()*0.02058);
}

double NNfunction_nn_chi3_chi3::synapse0x2042450() {
   return (neuron0x2022b00()*-0.0324912);
}

double NNfunction_nn_chi3_chi3::synapse0x2042490() {
   return (neuron0x2023060()*-0.0180864);
}

double NNfunction_nn_chi3_chi3::synapse0x2032fc0() {
   return (neuron0x2023280()*0.026036);
}

double NNfunction_nn_chi3_chi3::synapse0x2033000() {
   return (neuron0x20235c0()*-0.00606161);
}

double NNfunction_nn_chi3_chi3::synapse0x2033040() {
   return (neuron0x2023900()*-0.0913687);
}

double NNfunction_nn_chi3_chi3::synapse0x2033080() {
   return (neuron0x2023c40()*-0.0292419);
}

double NNfunction_nn_chi3_chi3::synapse0x20330c0() {
   return (neuron0x2023f80()*0.0172327);
}

double NNfunction_nn_chi3_chi3::synapse0x2033100() {
   return (neuron0x20242c0()*-0.114683);
}

double NNfunction_nn_chi3_chi3::synapse0x2033480() {
   return (neuron0x201f790()*0.142576);
}

double NNfunction_nn_chi3_chi3::synapse0x20334c0() {
   return (neuron0x201fa40()*-1.53243);
}

double NNfunction_nn_chi3_chi3::synapse0x2033500() {
   return (neuron0x201fd80()*0.402551);
}

double NNfunction_nn_chi3_chi3::synapse0x2033540() {
   return (neuron0x20200c0()*-0.0348219);
}

double NNfunction_nn_chi3_chi3::synapse0x2033580() {
   return (neuron0x2020400()*0.0560952);
}

double NNfunction_nn_chi3_chi3::synapse0x20335c0() {
   return (neuron0x2020740()*-0.0574798);
}

double NNfunction_nn_chi3_chi3::synapse0x2033600() {
   return (neuron0x2020a80()*-0.0407416);
}

double NNfunction_nn_chi3_chi3::synapse0x2033640() {
   return (neuron0x2020dc0()*-0.166209);
}

double NNfunction_nn_chi3_chi3::synapse0x2033680() {
   return (neuron0x2021100()*-0.0596425);
}

double NNfunction_nn_chi3_chi3::synapse0x20336c0() {
   return (neuron0x2021440()*0.0594376);
}

double NNfunction_nn_chi3_chi3::synapse0x2033700() {
   return (neuron0x2021780()*-0.0245556);
}

double NNfunction_nn_chi3_chi3::synapse0x2033740() {
   return (neuron0x2021ac0()*0.079636);
}

double NNfunction_nn_chi3_chi3::synapse0x2033780() {
   return (neuron0x2021e00()*-0.193019);
}

double NNfunction_nn_chi3_chi3::synapse0x20337c0() {
   return (neuron0x2022140()*0.0108845);
}

double NNfunction_nn_chi3_chi3::synapse0x2033800() {
   return (neuron0x2022480()*0.640083);
}

double NNfunction_nn_chi3_chi3::synapse0x2033840() {
   return (neuron0x20227c0()*-0.136264);
}

double NNfunction_nn_chi3_chi3::synapse0x20332d0() {
   return (neuron0x2022b00()*0.0576679);
}

double NNfunction_nn_chi3_chi3::synapse0x2033310() {
   return (neuron0x2023060()*-0.234184);
}

double NNfunction_nn_chi3_chi3::synapse0x2033990() {
   return (neuron0x2023280()*0.00727387);
}

double NNfunction_nn_chi3_chi3::synapse0x20339d0() {
   return (neuron0x20235c0()*0.0819911);
}

double NNfunction_nn_chi3_chi3::synapse0x2033a10() {
   return (neuron0x2023900()*0.0809398);
}

double NNfunction_nn_chi3_chi3::synapse0x2033a50() {
   return (neuron0x2023c40()*-0.00662928);
}

double NNfunction_nn_chi3_chi3::synapse0x2033a90() {
   return (neuron0x2023f80()*-0.065189);
}

double NNfunction_nn_chi3_chi3::synapse0x2033ad0() {
   return (neuron0x20242c0()*1.11442);
}

double NNfunction_nn_chi3_chi3::synapse0x2033e50() {
   return (neuron0x201f790()*-0.956167);
}

double NNfunction_nn_chi3_chi3::synapse0x2033e90() {
   return (neuron0x201fa40()*-0.241208);
}

double NNfunction_nn_chi3_chi3::synapse0x2033ed0() {
   return (neuron0x201fd80()*-1.77293);
}

double NNfunction_nn_chi3_chi3::synapse0x2033f10() {
   return (neuron0x20200c0()*1.01543);
}

double NNfunction_nn_chi3_chi3::synapse0x2033f50() {
   return (neuron0x2020400()*0.507113);
}

double NNfunction_nn_chi3_chi3::synapse0x2033f90() {
   return (neuron0x2020740()*0.529326);
}

double NNfunction_nn_chi3_chi3::synapse0x2033fd0() {
   return (neuron0x2020a80()*0.48939);
}

double NNfunction_nn_chi3_chi3::synapse0x2034010() {
   return (neuron0x2020dc0()*0.33847);
}

double NNfunction_nn_chi3_chi3::synapse0x2034050() {
   return (neuron0x2021100()*0.310863);
}

double NNfunction_nn_chi3_chi3::synapse0x2034090() {
   return (neuron0x2021440()*-0.356425);
}

double NNfunction_nn_chi3_chi3::synapse0x20340d0() {
   return (neuron0x2021780()*-0.0617444);
}

double NNfunction_nn_chi3_chi3::synapse0x2034110() {
   return (neuron0x2021ac0()*-1.32967);
}

double NNfunction_nn_chi3_chi3::synapse0x2034150() {
   return (neuron0x2021e00()*-0.501289);
}

double NNfunction_nn_chi3_chi3::synapse0x2034190() {
   return (neuron0x2022140()*0.919565);
}

double NNfunction_nn_chi3_chi3::synapse0x20341d0() {
   return (neuron0x2022480()*-0.358232);
}

double NNfunction_nn_chi3_chi3::synapse0x2034210() {
   return (neuron0x20227c0()*0.37999);
}

double NNfunction_nn_chi3_chi3::synapse0x2033ca0() {
   return (neuron0x2022b00()*0.538278);
}

double NNfunction_nn_chi3_chi3::synapse0x2033ce0() {
   return (neuron0x2023060()*-0.867799);
}

double NNfunction_nn_chi3_chi3::synapse0x2034360() {
   return (neuron0x2023280()*0.837025);
}

double NNfunction_nn_chi3_chi3::synapse0x20343a0() {
   return (neuron0x20235c0()*0.0852731);
}

double NNfunction_nn_chi3_chi3::synapse0x20343e0() {
   return (neuron0x2023900()*0.372277);
}

double NNfunction_nn_chi3_chi3::synapse0x2034420() {
   return (neuron0x2023c40()*-0.716827);
}

double NNfunction_nn_chi3_chi3::synapse0x2034460() {
   return (neuron0x2023f80()*-0.359526);
}

double NNfunction_nn_chi3_chi3::synapse0x20344a0() {
   return (neuron0x20242c0()*2.63785);
}

double NNfunction_nn_chi3_chi3::synapse0x2034820() {
   return (neuron0x201f790()*-0.0710959);
}

double NNfunction_nn_chi3_chi3::synapse0x2034860() {
   return (neuron0x201fa40()*0.0315357);
}

double NNfunction_nn_chi3_chi3::synapse0x20348a0() {
   return (neuron0x201fd80()*0.213637);
}

double NNfunction_nn_chi3_chi3::synapse0x20348e0() {
   return (neuron0x20200c0()*0.0487574);
}

double NNfunction_nn_chi3_chi3::synapse0x2034920() {
   return (neuron0x2020400()*0.00322598);
}

double NNfunction_nn_chi3_chi3::synapse0x2034960() {
   return (neuron0x2020740()*0.000575481);
}

double NNfunction_nn_chi3_chi3::synapse0x20349a0() {
   return (neuron0x2020a80()*0.0196508);
}

double NNfunction_nn_chi3_chi3::synapse0x20349e0() {
   return (neuron0x2020dc0()*-0.00352677);
}

double NNfunction_nn_chi3_chi3::synapse0x2034a20() {
   return (neuron0x2021100()*-0.0131965);
}

double NNfunction_nn_chi3_chi3::synapse0x2034a60() {
   return (neuron0x2021440()*0.0135569);
}

double NNfunction_nn_chi3_chi3::synapse0x2034aa0() {
   return (neuron0x2021780()*-0.023181);
}

double NNfunction_nn_chi3_chi3::synapse0x2034ae0() {
   return (neuron0x2021ac0()*-0.0766321);
}

double NNfunction_nn_chi3_chi3::synapse0x2034b20() {
   return (neuron0x2021e00()*-0.0407144);
}

double NNfunction_nn_chi3_chi3::synapse0x2034b60() {
   return (neuron0x2022140()*-0.0166655);
}

double NNfunction_nn_chi3_chi3::synapse0x2034ba0() {
   return (neuron0x2022480()*-0.0169186);
}

double NNfunction_nn_chi3_chi3::synapse0x2034be0() {
   return (neuron0x20227c0()*0.0301752);
}

double NNfunction_nn_chi3_chi3::synapse0x2034670() {
   return (neuron0x2022b00()*0.0199831);
}

double NNfunction_nn_chi3_chi3::synapse0x20346b0() {
   return (neuron0x2023060()*-0.0264888);
}

double NNfunction_nn_chi3_chi3::synapse0x2034d30() {
   return (neuron0x2023280()*0.00383211);
}

double NNfunction_nn_chi3_chi3::synapse0x2034d70() {
   return (neuron0x20235c0()*-0.000703046);
}

double NNfunction_nn_chi3_chi3::synapse0x2034db0() {
   return (neuron0x2023900()*-0.0103645);
}

double NNfunction_nn_chi3_chi3::synapse0x2034df0() {
   return (neuron0x2023c40()*-0.00560839);
}

double NNfunction_nn_chi3_chi3::synapse0x2034e30() {
   return (neuron0x2023f80()*0.00979138);
}

double NNfunction_nn_chi3_chi3::synapse0x2034e70() {
   return (neuron0x20242c0()*-0.633247);
}

double NNfunction_nn_chi3_chi3::synapse0x2046d40() {
   return (neuron0x201f790()*0.260665);
}

double NNfunction_nn_chi3_chi3::synapse0x2046d80() {
   return (neuron0x201fa40()*1.30284);
}

double NNfunction_nn_chi3_chi3::synapse0x2046dc0() {
   return (neuron0x201fd80()*0.708633);
}

double NNfunction_nn_chi3_chi3::synapse0x2046e00() {
   return (neuron0x20200c0()*0.0624545);
}

double NNfunction_nn_chi3_chi3::synapse0x2046e40() {
   return (neuron0x2020400()*-0.244857);
}

double NNfunction_nn_chi3_chi3::synapse0x2046e80() {
   return (neuron0x2020740()*0.439989);
}

double NNfunction_nn_chi3_chi3::synapse0x2046ec0() {
   return (neuron0x2020a80()*0.0334363);
}

double NNfunction_nn_chi3_chi3::synapse0x2046f00() {
   return (neuron0x2020dc0()*0.0697211);
}

double NNfunction_nn_chi3_chi3::synapse0x2046f40() {
   return (neuron0x2021100()*-0.0974338);
}

double NNfunction_nn_chi3_chi3::synapse0x2046f80() {
   return (neuron0x2021440()*-0.210722);
}

double NNfunction_nn_chi3_chi3::synapse0x2046fc0() {
   return (neuron0x2021780()*-0.464614);
}

double NNfunction_nn_chi3_chi3::synapse0x2047000() {
   return (neuron0x2021ac0()*0.595785);
}

double NNfunction_nn_chi3_chi3::synapse0x2047040() {
   return (neuron0x2021e00()*0.42926);
}

double NNfunction_nn_chi3_chi3::synapse0x2047080() {
   return (neuron0x2022140()*0.0236796);
}

double NNfunction_nn_chi3_chi3::synapse0x20470c0() {
   return (neuron0x2022480()*1.00369);
}

double NNfunction_nn_chi3_chi3::synapse0x2047100() {
   return (neuron0x20227c0()*0.117295);
}

double NNfunction_nn_chi3_chi3::synapse0x2034eb0() {
   return (neuron0x2022b00()*-0.0287683);
}

double NNfunction_nn_chi3_chi3::synapse0x2034ef0() {
   return (neuron0x2023060()*-0.147124);
}

double NNfunction_nn_chi3_chi3::synapse0x2047250() {
   return (neuron0x2023280()*-0.175792);
}

double NNfunction_nn_chi3_chi3::synapse0x2047290() {
   return (neuron0x20235c0()*0.103948);
}

double NNfunction_nn_chi3_chi3::synapse0x20472d0() {
   return (neuron0x2023900()*-0.056876);
}

double NNfunction_nn_chi3_chi3::synapse0x2047310() {
   return (neuron0x2023c40()*0.298643);
}

double NNfunction_nn_chi3_chi3::synapse0x2047350() {
   return (neuron0x2023f80()*0.146823);
}

double NNfunction_nn_chi3_chi3::synapse0x2047390() {
   return (neuron0x20242c0()*-0.641014);
}

double NNfunction_nn_chi3_chi3::synapse0x2047710() {
   return (neuron0x201f790()*-0.17417);
}

double NNfunction_nn_chi3_chi3::synapse0x2047750() {
   return (neuron0x201fa40()*-0.432541);
}

double NNfunction_nn_chi3_chi3::synapse0x2047790() {
   return (neuron0x201fd80()*0.433454);
}

double NNfunction_nn_chi3_chi3::synapse0x20477d0() {
   return (neuron0x20200c0()*0.00596937);
}

double NNfunction_nn_chi3_chi3::synapse0x2047810() {
   return (neuron0x2020400()*-0.0281972);
}

double NNfunction_nn_chi3_chi3::synapse0x2047850() {
   return (neuron0x2020740()*-0.0702201);
}

double NNfunction_nn_chi3_chi3::synapse0x2047890() {
   return (neuron0x2020a80()*-0.0561244);
}

double NNfunction_nn_chi3_chi3::synapse0x20478d0() {
   return (neuron0x2020dc0()*0.097716);
}

double NNfunction_nn_chi3_chi3::synapse0x2047910() {
   return (neuron0x2021100()*-0.0618017);
}

double NNfunction_nn_chi3_chi3::synapse0x2047950() {
   return (neuron0x2021440()*-0.122804);
}

double NNfunction_nn_chi3_chi3::synapse0x2047990() {
   return (neuron0x2021780()*-0.286748);
}

double NNfunction_nn_chi3_chi3::synapse0x20479d0() {
   return (neuron0x2021ac0()*-0.331017);
}

double NNfunction_nn_chi3_chi3::synapse0x2047a10() {
   return (neuron0x2021e00()*-0.15376);
}

double NNfunction_nn_chi3_chi3::synapse0x2047a50() {
   return (neuron0x2022140()*-0.17598);
}

double NNfunction_nn_chi3_chi3::synapse0x2047a90() {
   return (neuron0x2022480()*0.492351);
}

double NNfunction_nn_chi3_chi3::synapse0x2047ad0() {
   return (neuron0x20227c0()*-0.087391);
}

double NNfunction_nn_chi3_chi3::synapse0x2047560() {
   return (neuron0x2022b00()*-0.124431);
}

double NNfunction_nn_chi3_chi3::synapse0x20475a0() {
   return (neuron0x2023060()*0.346867);
}

double NNfunction_nn_chi3_chi3::synapse0x2047c20() {
   return (neuron0x2023280()*-0.124505);
}

double NNfunction_nn_chi3_chi3::synapse0x2047c60() {
   return (neuron0x20235c0()*-0.171705);
}

double NNfunction_nn_chi3_chi3::synapse0x2047ca0() {
   return (neuron0x2023900()*-0.12103);
}

double NNfunction_nn_chi3_chi3::synapse0x2047ce0() {
   return (neuron0x2023c40()*0.156267);
}

double NNfunction_nn_chi3_chi3::synapse0x2047d20() {
   return (neuron0x2023f80()*0.0976126);
}

double NNfunction_nn_chi3_chi3::synapse0x2047d60() {
   return (neuron0x20242c0()*1.55216);
}

double NNfunction_nn_chi3_chi3::synapse0x20480e0() {
   return (neuron0x201f790()*0.110089);
}

double NNfunction_nn_chi3_chi3::synapse0x2048120() {
   return (neuron0x201fa40()*17.6718);
}

double NNfunction_nn_chi3_chi3::synapse0x2048160() {
   return (neuron0x201fd80()*7.67654);
}

double NNfunction_nn_chi3_chi3::synapse0x20481a0() {
   return (neuron0x20200c0()*-0.0413926);
}

double NNfunction_nn_chi3_chi3::synapse0x20481e0() {
   return (neuron0x2020400()*0.0623438);
}

double NNfunction_nn_chi3_chi3::synapse0x2048220() {
   return (neuron0x2020740()*-0.00214246);
}

double NNfunction_nn_chi3_chi3::synapse0x2048260() {
   return (neuron0x2020a80()*-0.00738092);
}

double NNfunction_nn_chi3_chi3::synapse0x20482a0() {
   return (neuron0x2020dc0()*0.00484787);
}

double NNfunction_nn_chi3_chi3::synapse0x20482e0() {
   return (neuron0x2021100()*-0.00237937);
}

double NNfunction_nn_chi3_chi3::synapse0x2048320() {
   return (neuron0x2021440()*0.00445571);
}

double NNfunction_nn_chi3_chi3::synapse0x2048360() {
   return (neuron0x2021780()*-0.0739525);
}

double NNfunction_nn_chi3_chi3::synapse0x20483a0() {
   return (neuron0x2021ac0()*-0.0364252);
}

double NNfunction_nn_chi3_chi3::synapse0x20483e0() {
   return (neuron0x2021e00()*-0.0189933);
}

double NNfunction_nn_chi3_chi3::synapse0x2048420() {
   return (neuron0x2022140()*-0.00539224);
}

double NNfunction_nn_chi3_chi3::synapse0x2048460() {
   return (neuron0x2022480()*0.0776385);
}

double NNfunction_nn_chi3_chi3::synapse0x20484a0() {
   return (neuron0x20227c0()*-0.0224623);
}

double NNfunction_nn_chi3_chi3::synapse0x2047f30() {
   return (neuron0x2022b00()*-0.0474977);
}

double NNfunction_nn_chi3_chi3::synapse0x2047f70() {
   return (neuron0x2023060()*-0.0778716);
}

double NNfunction_nn_chi3_chi3::synapse0x20485f0() {
   return (neuron0x2023280()*0.0141547);
}

double NNfunction_nn_chi3_chi3::synapse0x2048630() {
   return (neuron0x20235c0()*-0.0112376);
}

double NNfunction_nn_chi3_chi3::synapse0x2048670() {
   return (neuron0x2023900()*0.00574341);
}

double NNfunction_nn_chi3_chi3::synapse0x20486b0() {
   return (neuron0x2023c40()*0.0139391);
}

double NNfunction_nn_chi3_chi3::synapse0x20486f0() {
   return (neuron0x2023f80()*-0.00460696);
}

double NNfunction_nn_chi3_chi3::synapse0x2048730() {
   return (neuron0x20242c0()*0.00545238);
}

double NNfunction_nn_chi3_chi3::synapse0x2048ab0() {
   return (neuron0x201f790()*0.0997989);
}

double NNfunction_nn_chi3_chi3::synapse0x2048af0() {
   return (neuron0x201fa40()*-0.0556814);
}

double NNfunction_nn_chi3_chi3::synapse0x2048b30() {
   return (neuron0x201fd80()*-0.0510754);
}

double NNfunction_nn_chi3_chi3::synapse0x2048b70() {
   return (neuron0x20200c0()*-1.78459);
}

double NNfunction_nn_chi3_chi3::synapse0x2048bb0() {
   return (neuron0x2020400()*0.12396);
}

double NNfunction_nn_chi3_chi3::synapse0x2048bf0() {
   return (neuron0x2020740()*-0.0886771);
}

double NNfunction_nn_chi3_chi3::synapse0x2048c30() {
   return (neuron0x2020a80()*-0.121158);
}

double NNfunction_nn_chi3_chi3::synapse0x2048c70() {
   return (neuron0x2020dc0()*-0.0286904);
}

double NNfunction_nn_chi3_chi3::synapse0x2048cb0() {
   return (neuron0x2021100()*0.0847131);
}

double NNfunction_nn_chi3_chi3::synapse0x2048cf0() {
   return (neuron0x2021440()*0.294078);
}

double NNfunction_nn_chi3_chi3::synapse0x2048d30() {
   return (neuron0x2021780()*-0.0264915);
}

double NNfunction_nn_chi3_chi3::synapse0x2048d70() {
   return (neuron0x2021ac0()*0.240984);
}

double NNfunction_nn_chi3_chi3::synapse0x2048db0() {
   return (neuron0x2021e00()*0.109478);
}

double NNfunction_nn_chi3_chi3::synapse0x2048df0() {
   return (neuron0x2022140()*0.440699);
}

double NNfunction_nn_chi3_chi3::synapse0x2048e30() {
   return (neuron0x2022480()*0.40849);
}

double NNfunction_nn_chi3_chi3::synapse0x2048e70() {
   return (neuron0x20227c0()*-0.150046);
}

double NNfunction_nn_chi3_chi3::synapse0x2048900() {
   return (neuron0x2022b00()*-0.0621339);
}

double NNfunction_nn_chi3_chi3::synapse0x2048940() {
   return (neuron0x2023060()*-0.000702598);
}

double NNfunction_nn_chi3_chi3::synapse0x2048fc0() {
   return (neuron0x2023280()*0.0851847);
}

double NNfunction_nn_chi3_chi3::synapse0x2049000() {
   return (neuron0x20235c0()*0.0767411);
}

double NNfunction_nn_chi3_chi3::synapse0x2049040() {
   return (neuron0x2023900()*-0.0706942);
}

double NNfunction_nn_chi3_chi3::synapse0x2049080() {
   return (neuron0x2023c40()*-0.0339675);
}

double NNfunction_nn_chi3_chi3::synapse0x20490c0() {
   return (neuron0x2023f80()*0.113943);
}

double NNfunction_nn_chi3_chi3::synapse0x2049100() {
   return (neuron0x20242c0()*-0.0632513);
}

double NNfunction_nn_chi3_chi3::synapse0x2025690() {
   return (neuron0x2024730()*0.073908);
}

double NNfunction_nn_chi3_chi3::synapse0x20256d0() {
   return (neuron0x2025080()*2.43902);
}

double NNfunction_nn_chi3_chi3::synapse0x2026bb0() {
   return (neuron0x2025b60()*-1.5796);
}

double NNfunction_nn_chi3_chi3::synapse0x2026bf0() {
   return (neuron0x1de8eb0()*0.492803);
}

double NNfunction_nn_chi3_chi3::synapse0x2027580() {
   return (neuron0x2026900()*2.19976);
}

double NNfunction_nn_chi3_chi3::synapse0x20275c0() {
   return (neuron0x20272d0()*0.54573);
}

double NNfunction_nn_chi3_chi3::synapse0x2028350() {
   return (neuron0x20280a0()*-0.0746155);
}

double NNfunction_nn_chi3_chi3::synapse0x2028390() {
   return (neuron0x2028a70()*0.368123);
}

double NNfunction_nn_chi3_chi3::synapse0x2028d20() {
   return (neuron0x2029440()*-0.998901);
}

double NNfunction_nn_chi3_chi3::synapse0x2028d60() {
   return (neuron0x2029f20()*1.06557);
}

double NNfunction_nn_chi3_chi3::synapse0x20296f0() {
   return (neuron0x202a8f0()*-0.184689);
}

double NNfunction_nn_chi3_chi3::synapse0x2029730() {
   return (neuron0x20279d0()*-3.2234);
}

double NNfunction_nn_chi3_chi3::synapse0x202a1d0() {
   return (neuron0x202c4a0()*0.0552066);
}

double NNfunction_nn_chi3_chi3::synapse0x202a210() {
   return (neuron0x202ce70()*-1.14502);
}

double NNfunction_nn_chi3_chi3::synapse0x202aba0() {
   return (neuron0x202d840()*-0.81997);
}

double NNfunction_nn_chi3_chi3::synapse0x202abe0() {
   return (neuron0x202e210()*-1.39198);
}

double NNfunction_nn_chi3_chi3::synapse0x2027c80() {
   return (neuron0x2030020()*-0.28646);
}

double NNfunction_nn_chi3_chi3::synapse0x2027cc0() {
   return (neuron0x2030300()*0.195174);
}

double NNfunction_nn_chi3_chi3::synapse0x202c750() {
   return (neuron0x2030cd0()*0.273492);
}

double NNfunction_nn_chi3_chi3::synapse0x202c790() {
   return (neuron0x20316a0()*1.2337);
}

double NNfunction_nn_chi3_chi3::synapse0x202d120() {
   return (neuron0x2032070()*-2.1491);
}

double NNfunction_nn_chi3_chi3::synapse0x202d160() {
   return (neuron0x2032a40()*0.0755988);
}

double NNfunction_nn_chi3_chi3::synapse0x202daf0() {
   return (neuron0x202b590()*0.370422);
}

double NNfunction_nn_chi3_chi3::synapse0x202db30() {
   return (neuron0x202bf60()*-0.391366);
}

double NNfunction_nn_chi3_chi3::synapse0x202e4c0() {
   return (neuron0x20357d0()*0.0784269);
}

double NNfunction_nn_chi3_chi3::synapse0x202e500() {
   return (neuron0x20361a0()*-0.185323);
}

double NNfunction_nn_chi3_chi3::synapse0x20226a0() {
   return (neuron0x2036b70()*-1.46369);
}

double NNfunction_nn_chi3_chi3::synapse0x20226e0() {
   return (neuron0x2037540()*-1.16256);
}

double NNfunction_nn_chi3_chi3::synapse0x20305b0() {
   return (neuron0x2037f10()*5.34231);
}

double NNfunction_nn_chi3_chi3::synapse0x20305f0() {
   return (neuron0x20388e0()*-0.394246);
}

double NNfunction_nn_chi3_chi3::synapse0x2030f80() {
   return (neuron0x20392b0()*-0.387632);
}

double NNfunction_nn_chi3_chi3::synapse0x2030fc0() {
   return (neuron0x2039c80()*-1.78841);
}

double NNfunction_nn_chi3_chi3::synapse0x2031950() {
   return (neuron0x202fd10()*-0.040051);
}

double NNfunction_nn_chi3_chi3::synapse0x2031990() {
   return (neuron0x203c860()*2.34239);
}

double NNfunction_nn_chi3_chi3::synapse0x2032320() {
   return (neuron0x203d230()*2.71598);
}

double NNfunction_nn_chi3_chi3::synapse0x2032360() {
   return (neuron0x203dc00()*0.0188139);
}

double NNfunction_nn_chi3_chi3::synapse0x2032cf0() {
   return (neuron0x203e5d0()*-0.158402);
}

double NNfunction_nn_chi3_chi3::synapse0x2032d30() {
   return (neuron0x203efa0()*1.87218);
}

double NNfunction_nn_chi3_chi3::synapse0x202b840() {
   return (neuron0x203f970()*0.57336);
}

double NNfunction_nn_chi3_chi3::synapse0x202b880() {
   return (neuron0x2040340()*4.02772);
}

double NNfunction_nn_chi3_chi3::synapse0x20350f0() {
   return (neuron0x2040d10()*-5.56058);
}

double NNfunction_nn_chi3_chi3::synapse0x2035130() {
   return (neuron0x20418f0()*0.737919);
}

double NNfunction_nn_chi3_chi3::synapse0x2035a80() {
   return (neuron0x20422c0()*-4.13528);
}

double NNfunction_nn_chi3_chi3::synapse0x2035ac0() {
   return (neuron0x2033140()*0.403916);
}

double NNfunction_nn_chi3_chi3::synapse0x2036450() {
   return (neuron0x2033b10()*0.0225354);
}

double NNfunction_nn_chi3_chi3::synapse0x2036490() {
   return (neuron0x20344e0()*1.0316);
}

double NNfunction_nn_chi3_chi3::synapse0x2036e20() {
   return (neuron0x2046b20()*-0.278183);
}

double NNfunction_nn_chi3_chi3::synapse0x2036e60() {
   return (neuron0x20473d0()*0.79272);
}

double NNfunction_nn_chi3_chi3::synapse0x20377f0() {
   return (neuron0x2047da0()*3.46503);
}

double NNfunction_nn_chi3_chi3::synapse0x2037830() {
   return (neuron0x2048770()*0.0967291);
}

double NNfunction_nn_chi3_chi3::synapse0x2039f30() {
   return (neuron0x2024730()*-0.369456);
}

double NNfunction_nn_chi3_chi3::synapse0x2039f70() {
   return (neuron0x2025080()*-1.37927);
}

double NNfunction_nn_chi3_chi3::synapse0x202f4f0() {
   return (neuron0x2025b60()*-0.0298805);
}

double NNfunction_nn_chi3_chi3::synapse0x202f530() {
   return (neuron0x1de8eb0()*-1.45378);
}

double NNfunction_nn_chi3_chi3::synapse0x203cb10() {
   return (neuron0x2026900()*9.40751);
}

double NNfunction_nn_chi3_chi3::synapse0x203cb50() {
   return (neuron0x20272d0()*-1.91626);
}

double NNfunction_nn_chi3_chi3::synapse0x203d4e0() {
   return (neuron0x20280a0()*0.501462);
}

double NNfunction_nn_chi3_chi3::synapse0x203d520() {
   return (neuron0x2028a70()*-0.598253);
}

double NNfunction_nn_chi3_chi3::synapse0x203deb0() {
   return (neuron0x2029440()*0.121914);
}

double NNfunction_nn_chi3_chi3::synapse0x203def0() {
   return (neuron0x2029f20()*0.10837);
}

double NNfunction_nn_chi3_chi3::synapse0x203e880() {
   return (neuron0x202a8f0()*-2.24579);
}

double NNfunction_nn_chi3_chi3::synapse0x203e8c0() {
   return (neuron0x20279d0()*0.572328);
}

double NNfunction_nn_chi3_chi3::synapse0x203f250() {
   return (neuron0x202c4a0()*-0.24201);
}

double NNfunction_nn_chi3_chi3::synapse0x203f290() {
   return (neuron0x202ce70()*-3.83255);
}

double NNfunction_nn_chi3_chi3::synapse0x203fc20() {
   return (neuron0x202d840()*-3.17026);
}

double NNfunction_nn_chi3_chi3::synapse0x203fc60() {
   return (neuron0x202e210()*-1.99434);
}

double NNfunction_nn_chi3_chi3::synapse0x20405f0() {
   return (neuron0x2030020()*-0.454432);
}

double NNfunction_nn_chi3_chi3::synapse0x2040630() {
   return (neuron0x2030300()*1.18294);
}

double NNfunction_nn_chi3_chi3::synapse0x2040fc0() {
   return (neuron0x2030cd0()*-3.89841);
}

double NNfunction_nn_chi3_chi3::synapse0x2041000() {
   return (neuron0x20316a0()*1.41259);
}

double NNfunction_nn_chi3_chi3::synapse0x2041ba0() {
   return (neuron0x2032070()*-2.39177);
}

double NNfunction_nn_chi3_chi3::synapse0x2041be0() {
   return (neuron0x2032a40()*-0.850805);
}

double NNfunction_nn_chi3_chi3::synapse0x2042570() {
   return (neuron0x202b590()*-0.668151);
}

double NNfunction_nn_chi3_chi3::synapse0x20425b0() {
   return (neuron0x202bf60()*0.0914364);
}

double NNfunction_nn_chi3_chi3::synapse0x20333f0() {
   return (neuron0x20357d0()*-0.54811);
}

double NNfunction_nn_chi3_chi3::synapse0x2033430() {
   return (neuron0x20361a0()*-0.773087);
}

double NNfunction_nn_chi3_chi3::synapse0x2033dc0() {
   return (neuron0x2036b70()*0.0966054);
}

double NNfunction_nn_chi3_chi3::synapse0x2033e00() {
   return (neuron0x2037540()*-3.29505);
}

double NNfunction_nn_chi3_chi3::synapse0x2034790() {
   return (neuron0x2037f10()*-2.73844);
}

double NNfunction_nn_chi3_chi3::synapse0x20347d0() {
   return (neuron0x20388e0()*-3.90228);
}

double NNfunction_nn_chi3_chi3::synapse0x2046cb0() {
   return (neuron0x20392b0()*-0.146029);
}

double NNfunction_nn_chi3_chi3::synapse0x2046cf0() {
   return (neuron0x2039c80()*4.76062);
}

double NNfunction_nn_chi3_chi3::synapse0x2047680() {
   return (neuron0x202fd10()*-1.04761);
}

double NNfunction_nn_chi3_chi3::synapse0x20476c0() {
   return (neuron0x203c860()*-1.53088);
}

double NNfunction_nn_chi3_chi3::synapse0x2048050() {
   return (neuron0x203d230()*0.179971);
}

double NNfunction_nn_chi3_chi3::synapse0x2048090() {
   return (neuron0x203dc00()*-0.837898);
}

double NNfunction_nn_chi3_chi3::synapse0x2048a20() {
   return (neuron0x203e5d0()*-0.831076);
}

double NNfunction_nn_chi3_chi3::synapse0x2048a60() {
   return (neuron0x203efa0()*6.99062);
}

double NNfunction_nn_chi3_chi3::synapse0x2024950() {
   return (neuron0x203f970()*0.438022);
}

double NNfunction_nn_chi3_chi3::synapse0x2024990() {
   return (neuron0x2040340()*-1.44139);
}

double NNfunction_nn_chi3_chi3::synapse0x20381c0() {
   return (neuron0x2040d10()*1.03755);
}

double NNfunction_nn_chi3_chi3::synapse0x2038200() {
   return (neuron0x20418f0()*-1.85324);
}

double NNfunction_nn_chi3_chi3::synapse0x2049140() {
   return (neuron0x20422c0()*-0.232875);
}

double NNfunction_nn_chi3_chi3::synapse0x2049180() {
   return (neuron0x2033140()*-1.5567);
}

double NNfunction_nn_chi3_chi3::synapse0x20491c0() {
   return (neuron0x2033b10()*0.259721);
}

double NNfunction_nn_chi3_chi3::synapse0x2049200() {
   return (neuron0x20344e0()*-0.335247);
}

double NNfunction_nn_chi3_chi3::synapse0x20500b0() {
   return (neuron0x2046b20()*-1.72818);
}

double NNfunction_nn_chi3_chi3::synapse0x20500f0() {
   return (neuron0x20473d0()*0.000371826);
}

double NNfunction_nn_chi3_chi3::synapse0x2050130() {
   return (neuron0x2047da0()*2.02602);
}

double NNfunction_nn_chi3_chi3::synapse0x2050170() {
   return (neuron0x2048770()*-0.261152);
}

double NNfunction_nn_chi3_chi3::synapse0x20504f0() {
   return (neuron0x2024730()*0.031688);
}

double NNfunction_nn_chi3_chi3::synapse0x2050530() {
   return (neuron0x2025080()*-0.440705);
}

double NNfunction_nn_chi3_chi3::synapse0x2050570() {
   return (neuron0x2025b60()*0.0793238);
}

double NNfunction_nn_chi3_chi3::synapse0x20505b0() {
   return (neuron0x1de8eb0()*-0.272637);
}

double NNfunction_nn_chi3_chi3::synapse0x20505f0() {
   return (neuron0x2026900()*1.06045);
}

double NNfunction_nn_chi3_chi3::synapse0x2050630() {
   return (neuron0x20272d0()*-0.665288);
}

double NNfunction_nn_chi3_chi3::synapse0x2050670() {
   return (neuron0x20280a0()*0.077207);
}

double NNfunction_nn_chi3_chi3::synapse0x20506b0() {
   return (neuron0x2028a70()*-1.48753);
}

double NNfunction_nn_chi3_chi3::synapse0x20506f0() {
   return (neuron0x2029440()*-0.10878);
}

double NNfunction_nn_chi3_chi3::synapse0x2050730() {
   return (neuron0x2029f20()*0.107769);
}

double NNfunction_nn_chi3_chi3::synapse0x2050770() {
   return (neuron0x202a8f0()*-1.27514);
}

double NNfunction_nn_chi3_chi3::synapse0x20507b0() {
   return (neuron0x20279d0()*0.535831);
}

double NNfunction_nn_chi3_chi3::synapse0x20507f0() {
   return (neuron0x202c4a0()*0.0107765);
}

double NNfunction_nn_chi3_chi3::synapse0x2050830() {
   return (neuron0x202ce70()*1.06798);
}

double NNfunction_nn_chi3_chi3::synapse0x2050870() {
   return (neuron0x202d840()*-0.184934);
}

double NNfunction_nn_chi3_chi3::synapse0x20508b0() {
   return (neuron0x202e210()*-1.71991);
}

double NNfunction_nn_chi3_chi3::synapse0x2050340() {
   return (neuron0x2030020()*0.0630721);
}

double NNfunction_nn_chi3_chi3::synapse0x2050380() {
   return (neuron0x2030300()*-0.297437);
}

double NNfunction_nn_chi3_chi3::synapse0x2050a00() {
   return (neuron0x2030cd0()*0.363284);
}

double NNfunction_nn_chi3_chi3::synapse0x2050a40() {
   return (neuron0x20316a0()*0.107207);
}

double NNfunction_nn_chi3_chi3::synapse0x2050a80() {
   return (neuron0x2032070()*0.547102);
}

double NNfunction_nn_chi3_chi3::synapse0x2050ac0() {
   return (neuron0x2032a40()*-0.917912);
}

double NNfunction_nn_chi3_chi3::synapse0x2050b00() {
   return (neuron0x202b590()*-0.155616);
}

double NNfunction_nn_chi3_chi3::synapse0x2050b40() {
   return (neuron0x202bf60()*0.226413);
}

double NNfunction_nn_chi3_chi3::synapse0x2050b80() {
   return (neuron0x20357d0()*0.0596806);
}

double NNfunction_nn_chi3_chi3::synapse0x2050bc0() {
   return (neuron0x20361a0()*0.174226);
}

double NNfunction_nn_chi3_chi3::synapse0x2050c00() {
   return (neuron0x2036b70()*1.42724);
}

double NNfunction_nn_chi3_chi3::synapse0x2050c40() {
   return (neuron0x2037540()*0.533609);
}

double NNfunction_nn_chi3_chi3::synapse0x2050c80() {
   return (neuron0x2037f10()*-0.295721);
}

double NNfunction_nn_chi3_chi3::synapse0x2050cc0() {
   return (neuron0x20388e0()*0.65544);
}

double NNfunction_nn_chi3_chi3::synapse0x2050d00() {
   return (neuron0x20392b0()*-0.0481546);
}

double NNfunction_nn_chi3_chi3::synapse0x2050d40() {
   return (neuron0x2039c80()*-1.41292);
}

double NNfunction_nn_chi3_chi3::synapse0x20508f0() {
   return (neuron0x202fd10()*0.094396);
}

double NNfunction_nn_chi3_chi3::synapse0x2050930() {
   return (neuron0x203c860()*-1.22841);
}

double NNfunction_nn_chi3_chi3::synapse0x2050970() {
   return (neuron0x203d230()*0.444223);
}

double NNfunction_nn_chi3_chi3::synapse0x20509b0() {
   return (neuron0x203dc00()*0.0855024);
}

double NNfunction_nn_chi3_chi3::synapse0x2050f90() {
   return (neuron0x203e5d0()*0.0844955);
}

double NNfunction_nn_chi3_chi3::synapse0x2050fd0() {
   return (neuron0x203efa0()*1.4073);
}

double NNfunction_nn_chi3_chi3::synapse0x2051010() {
   return (neuron0x203f970()*-0.754608);
}

double NNfunction_nn_chi3_chi3::synapse0x2051050() {
   return (neuron0x2040340()*0.0291135);
}

double NNfunction_nn_chi3_chi3::synapse0x2051090() {
   return (neuron0x2040d10()*1.3178);
}

double NNfunction_nn_chi3_chi3::synapse0x20510d0() {
   return (neuron0x20418f0()*-0.592914);
}

double NNfunction_nn_chi3_chi3::synapse0x2051110() {
   return (neuron0x20422c0()*0.685638);
}

double NNfunction_nn_chi3_chi3::synapse0x2051150() {
   return (neuron0x2033140()*-0.937821);
}

double NNfunction_nn_chi3_chi3::synapse0x2051190() {
   return (neuron0x2033b10()*-0.0408041);
}

double NNfunction_nn_chi3_chi3::synapse0x20511d0() {
   return (neuron0x20344e0()*-1.02589);
}

double NNfunction_nn_chi3_chi3::synapse0x2051210() {
   return (neuron0x2046b20()*0.307837);
}

double NNfunction_nn_chi3_chi3::synapse0x2051250() {
   return (neuron0x20473d0()*-0.582253);
}

double NNfunction_nn_chi3_chi3::synapse0x2051290() {
   return (neuron0x2047da0()*-0.566848);
}

double NNfunction_nn_chi3_chi3::synapse0x20512d0() {
   return (neuron0x2048770()*-0.063388);
}

double NNfunction_nn_chi3_chi3::synapse0x2051650() {
   return (neuron0x2024730()*0.0360503);
}

double NNfunction_nn_chi3_chi3::synapse0x2051690() {
   return (neuron0x2025080()*0.142545);
}

double NNfunction_nn_chi3_chi3::synapse0x20516d0() {
   return (neuron0x2025b60()*0.260202);
}

double NNfunction_nn_chi3_chi3::synapse0x2051710() {
   return (neuron0x1de8eb0()*-0.40444);
}

double NNfunction_nn_chi3_chi3::synapse0x2051750() {
   return (neuron0x2026900()*-1.0791);
}

double NNfunction_nn_chi3_chi3::synapse0x2051790() {
   return (neuron0x20272d0()*0.0204345);
}

double NNfunction_nn_chi3_chi3::synapse0x20517d0() {
   return (neuron0x20280a0()*-0.0812512);
}

double NNfunction_nn_chi3_chi3::synapse0x2051810() {
   return (neuron0x2028a70()*0.10078);
}

double NNfunction_nn_chi3_chi3::synapse0x2051850() {
   return (neuron0x2029440()*-0.704802);
}

double NNfunction_nn_chi3_chi3::synapse0x2051890() {
   return (neuron0x2029f20()*0.129267);
}

double NNfunction_nn_chi3_chi3::synapse0x20518d0() {
   return (neuron0x202a8f0()*0.301432);
}

double NNfunction_nn_chi3_chi3::synapse0x2051910() {
   return (neuron0x20279d0()*-0.952588);
}

double NNfunction_nn_chi3_chi3::synapse0x2051950() {
   return (neuron0x202c4a0()*0.0418028);
}

double NNfunction_nn_chi3_chi3::synapse0x2051990() {
   return (neuron0x202ce70()*0.0881691);
}

double NNfunction_nn_chi3_chi3::synapse0x20519d0() {
   return (neuron0x202d840()*-0.600803);
}

double NNfunction_nn_chi3_chi3::synapse0x2051a10() {
   return (neuron0x202e210()*0.310639);
}

double NNfunction_nn_chi3_chi3::synapse0x20514a0() {
   return (neuron0x2030020()*0.477901);
}

double NNfunction_nn_chi3_chi3::synapse0x20514e0() {
   return (neuron0x2030300()*1.22831);
}

double NNfunction_nn_chi3_chi3::synapse0x2051b60() {
   return (neuron0x2030cd0()*0.0135688);
}

double NNfunction_nn_chi3_chi3::synapse0x2051ba0() {
   return (neuron0x20316a0()*-1.3847);
}

double NNfunction_nn_chi3_chi3::synapse0x2051be0() {
   return (neuron0x2032070()*-0.278907);
}

double NNfunction_nn_chi3_chi3::synapse0x2051c20() {
   return (neuron0x2032a40()*-0.0522998);
}

double NNfunction_nn_chi3_chi3::synapse0x2051c60() {
   return (neuron0x202b590()*-0.536909);
}

double NNfunction_nn_chi3_chi3::synapse0x2051ca0() {
   return (neuron0x202bf60()*0.169326);
}

double NNfunction_nn_chi3_chi3::synapse0x2051ce0() {
   return (neuron0x20357d0()*0.039261);
}

double NNfunction_nn_chi3_chi3::synapse0x2051d20() {
   return (neuron0x20361a0()*-1.0383);
}

double NNfunction_nn_chi3_chi3::synapse0x2051d60() {
   return (neuron0x2036b70()*0.547154);
}

double NNfunction_nn_chi3_chi3::synapse0x2051da0() {
   return (neuron0x2037540()*0.244509);
}

double NNfunction_nn_chi3_chi3::synapse0x2051de0() {
   return (neuron0x2037f10()*1.01221);
}

double NNfunction_nn_chi3_chi3::synapse0x2051e20() {
   return (neuron0x20388e0()*-0.141169);
}

double NNfunction_nn_chi3_chi3::synapse0x2051e60() {
   return (neuron0x20392b0()*-0.0612239);
}

double NNfunction_nn_chi3_chi3::synapse0x2051ea0() {
   return (neuron0x2039c80()*0.189863);
}

double NNfunction_nn_chi3_chi3::synapse0x2051a50() {
   return (neuron0x202fd10()*0.551902);
}

double NNfunction_nn_chi3_chi3::synapse0x2051a90() {
   return (neuron0x203c860()*1.20166);
}

double NNfunction_nn_chi3_chi3::synapse0x2051ad0() {
   return (neuron0x203d230()*-0.291669);
}

double NNfunction_nn_chi3_chi3::synapse0x2051b10() {
   return (neuron0x203dc00()*0.477377);
}

double NNfunction_nn_chi3_chi3::synapse0x20520f0() {
   return (neuron0x203e5d0()*0.16959);
}

double NNfunction_nn_chi3_chi3::synapse0x2052130() {
   return (neuron0x203efa0()*-1.37627);
}

double NNfunction_nn_chi3_chi3::synapse0x2052170() {
   return (neuron0x203f970()*0.197456);
}

double NNfunction_nn_chi3_chi3::synapse0x20521b0() {
   return (neuron0x2040340()*0.760715);
}

double NNfunction_nn_chi3_chi3::synapse0x20521f0() {
   return (neuron0x2040d10()*1.24765);
}

double NNfunction_nn_chi3_chi3::synapse0x2052230() {
   return (neuron0x20418f0()*0.412358);
}

double NNfunction_nn_chi3_chi3::synapse0x2052270() {
   return (neuron0x20422c0()*2.60935);
}

double NNfunction_nn_chi3_chi3::synapse0x20522b0() {
   return (neuron0x2033140()*0.588224);
}

double NNfunction_nn_chi3_chi3::synapse0x20522f0() {
   return (neuron0x2033b10()*-0.0163866);
}

double NNfunction_nn_chi3_chi3::synapse0x2052330() {
   return (neuron0x20344e0()*0.331502);
}

double NNfunction_nn_chi3_chi3::synapse0x2052370() {
   return (neuron0x2046b20()*1.30842);
}

double NNfunction_nn_chi3_chi3::synapse0x20523b0() {
   return (neuron0x20473d0()*-0.578398);
}

double NNfunction_nn_chi3_chi3::synapse0x20523f0() {
   return (neuron0x2047da0()*-1.47118);
}

double NNfunction_nn_chi3_chi3::synapse0x2052430() {
   return (neuron0x2048770()*0.120526);
}

double NNfunction_nn_chi3_chi3::synapse0x20527b0() {
   return (neuron0x2024730()*-0.0516748);
}

double NNfunction_nn_chi3_chi3::synapse0x20527f0() {
   return (neuron0x2025080()*1.26865);
}

double NNfunction_nn_chi3_chi3::synapse0x2052830() {
   return (neuron0x2025b60()*0.0554717);
}

double NNfunction_nn_chi3_chi3::synapse0x2052870() {
   return (neuron0x1de8eb0()*0.0237186);
}

double NNfunction_nn_chi3_chi3::synapse0x20528b0() {
   return (neuron0x2026900()*-1.90731);
}

double NNfunction_nn_chi3_chi3::synapse0x20528f0() {
   return (neuron0x20272d0()*0.354273);
}

double NNfunction_nn_chi3_chi3::synapse0x2052930() {
   return (neuron0x20280a0()*-0.0648574);
}

double NNfunction_nn_chi3_chi3::synapse0x2052970() {
   return (neuron0x2028a70()*0.996952);
}

double NNfunction_nn_chi3_chi3::synapse0x20529b0() {
   return (neuron0x2029440()*0.505163);
}

double NNfunction_nn_chi3_chi3::synapse0x20529f0() {
   return (neuron0x2029f20()*-0.0760887);
}

double NNfunction_nn_chi3_chi3::synapse0x2052a30() {
   return (neuron0x202a8f0()*0.832721);
}

double NNfunction_nn_chi3_chi3::synapse0x2052a70() {
   return (neuron0x20279d0()*-0.80792);
}

double NNfunction_nn_chi3_chi3::synapse0x2052ab0() {
   return (neuron0x202c4a0()*-0.0283579);
}

double NNfunction_nn_chi3_chi3::synapse0x2052af0() {
   return (neuron0x202ce70()*-2.00562);
}

double NNfunction_nn_chi3_chi3::synapse0x2052b30() {
   return (neuron0x202d840()*1.15055);
}

double NNfunction_nn_chi3_chi3::synapse0x2052b70() {
   return (neuron0x202e210()*2.38389);
}

double NNfunction_nn_chi3_chi3::synapse0x2052600() {
   return (neuron0x2030020()*0.0743159);
}

double NNfunction_nn_chi3_chi3::synapse0x2052640() {
   return (neuron0x2030300()*1.39761);
}

double NNfunction_nn_chi3_chi3::synapse0x2052cc0() {
   return (neuron0x2030cd0()*-0.67981);
}

double NNfunction_nn_chi3_chi3::synapse0x2052d00() {
   return (neuron0x20316a0()*-1.06132);
}

double NNfunction_nn_chi3_chi3::synapse0x2052d40() {
   return (neuron0x2032070()*0.354011);
}

double NNfunction_nn_chi3_chi3::synapse0x2052d80() {
   return (neuron0x2032a40()*-1.89552);
}

double NNfunction_nn_chi3_chi3::synapse0x2052dc0() {
   return (neuron0x202b590()*-0.0892449);
}

double NNfunction_nn_chi3_chi3::synapse0x2052e00() {
   return (neuron0x202bf60()*-0.0466997);
}

double NNfunction_nn_chi3_chi3::synapse0x2052e40() {
   return (neuron0x20357d0()*-0.0819419);
}

double NNfunction_nn_chi3_chi3::synapse0x2052e80() {
   return (neuron0x20361a0()*0.197656);
}

double NNfunction_nn_chi3_chi3::synapse0x2052ec0() {
   return (neuron0x2036b70()*-0.860571);
}

double NNfunction_nn_chi3_chi3::synapse0x2052f00() {
   return (neuron0x2037540()*0.110283);
}

double NNfunction_nn_chi3_chi3::synapse0x2052f40() {
   return (neuron0x2037f10()*1.5426);
}

double NNfunction_nn_chi3_chi3::synapse0x2052f80() {
   return (neuron0x20388e0()*-0.57988);
}

double NNfunction_nn_chi3_chi3::synapse0x2052fc0() {
   return (neuron0x20392b0()*0.00752684);
}

double NNfunction_nn_chi3_chi3::synapse0x2053000() {
   return (neuron0x2039c80()*-0.744242);
}

double NNfunction_nn_chi3_chi3::synapse0x2052bb0() {
   return (neuron0x202fd10()*-0.00221849);
}

double NNfunction_nn_chi3_chi3::synapse0x2052bf0() {
   return (neuron0x203c860()*0.296241);
}

double NNfunction_nn_chi3_chi3::synapse0x2052c30() {
   return (neuron0x203d230()*-0.310971);
}

double NNfunction_nn_chi3_chi3::synapse0x2052c70() {
   return (neuron0x203dc00()*-0.0155927);
}

double NNfunction_nn_chi3_chi3::synapse0x2053250() {
   return (neuron0x203e5d0()*-0.022382);
}

double NNfunction_nn_chi3_chi3::synapse0x2053290() {
   return (neuron0x203efa0()*-2.41445);
}

double NNfunction_nn_chi3_chi3::synapse0x20532d0() {
   return (neuron0x203f970()*0.629543);
}

double NNfunction_nn_chi3_chi3::synapse0x2053310() {
   return (neuron0x2040340()*0.282883);
}

double NNfunction_nn_chi3_chi3::synapse0x2053350() {
   return (neuron0x2040d10()*-0.17012);
}

double NNfunction_nn_chi3_chi3::synapse0x2053390() {
   return (neuron0x20418f0()*0.322008);
}

double NNfunction_nn_chi3_chi3::synapse0x20533d0() {
   return (neuron0x20422c0()*0.815556);
}

double NNfunction_nn_chi3_chi3::synapse0x2053410() {
   return (neuron0x2033140()*0.993018);
}

double NNfunction_nn_chi3_chi3::synapse0x2053450() {
   return (neuron0x2033b10()*0.0478273);
}

double NNfunction_nn_chi3_chi3::synapse0x2053490() {
   return (neuron0x20344e0()*2.61258);
}

double NNfunction_nn_chi3_chi3::synapse0x20534d0() {
   return (neuron0x2046b20()*0.0279122);
}

double NNfunction_nn_chi3_chi3::synapse0x2053510() {
   return (neuron0x20473d0()*0.1416);
}

double NNfunction_nn_chi3_chi3::synapse0x2053550() {
   return (neuron0x2047da0()*-0.354457);
}

double NNfunction_nn_chi3_chi3::synapse0x2053590() {
   return (neuron0x2048770()*0.161408);
}

double NNfunction_nn_chi3_chi3::synapse0x20537f0() {
   return (neuron0x204f970()*-4.22469);
}

double NNfunction_nn_chi3_chi3::synapse0x2053830() {
   return (neuron0x204fd10()*12.3156);
}

double NNfunction_nn_chi3_chi3::synapse0x2053870() {
   return (neuron0x20501b0()*-10.3583);
}

double NNfunction_nn_chi3_chi3::synapse0x20538b0() {
   return (neuron0x2051310()*3.58831);
}

double NNfunction_nn_chi3_chi3::synapse0x20538f0() {
   return (neuron0x2052470()*-8.09959);
}

