#include "NNfunction_ss_uLsR.h"
#include <cmath>

double NNfunction_ss_uLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.0282)/15.043;
   input1 = (in1 - 51.7345)/740.492;
   input2 = (in2 - 376.791)/477.748;
   input3 = (in3 - 267.676)/623.334;
   input4 = (in4 - 753.392)/687.885;
   input5 = (in5 - 660.236)/660.213;
   input6 = (in6 - 669.179)/668.153;
   input7 = (in7 - 659.137)/658.925;
   input8 = (in8 - 666.59)/699.483;
   input9 = (in9 - 656.508)/683.835;
   input10 = (in10 - 663.385)/707.16;
   input11 = (in11 - 584.851)/373.513;
   input12 = (in12 - 705.54)/595.726;
   input13 = (in13 - 541.881)/367.44;
   input14 = (in14 - 689.241)/549.171;
   input15 = (in15 - 689.49)/548.004;
   input16 = (in16 - 482.583)/379.672;
   input17 = (in17 - 713.501)/613.326;
   input18 = (in18 - 579.861)/376.507;
   input19 = (in19 - 708.698)/602.192;
   input20 = (in20 - -209.424)/407.779;
   input21 = (in21 - -268.533)/890.601;
   input22 = (in22 - 2.01505)/893.619;
   input23 = (in23 - -11.1985)/497.69;
   switch(index) {
     case 0:
         return neuron0x1ac20e0();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLsR::Value(int index, double* input) {
   input0 = (input[0] - 23.0282)/15.043;
   input1 = (input[1] - 51.7345)/740.492;
   input2 = (input[2] - 376.791)/477.748;
   input3 = (input[3] - 267.676)/623.334;
   input4 = (input[4] - 753.392)/687.885;
   input5 = (input[5] - 660.236)/660.213;
   input6 = (input[6] - 669.179)/668.153;
   input7 = (input[7] - 659.137)/658.925;
   input8 = (input[8] - 666.59)/699.483;
   input9 = (input[9] - 656.508)/683.835;
   input10 = (input[10] - 663.385)/707.16;
   input11 = (input[11] - 584.851)/373.513;
   input12 = (input[12] - 705.54)/595.726;
   input13 = (input[13] - 541.881)/367.44;
   input14 = (input[14] - 689.241)/549.171;
   input15 = (input[15] - 689.49)/548.004;
   input16 = (input[16] - 482.583)/379.672;
   input17 = (input[17] - 713.501)/613.326;
   input18 = (input[18] - 579.861)/376.507;
   input19 = (input[19] - 708.698)/602.192;
   input20 = (input[20] - -209.424)/407.779;
   input21 = (input[21] - -268.533)/890.601;
   input22 = (input[22] - 2.01505)/893.619;
   input23 = (input[23] - -11.1985)/497.69;
   switch(index) {
     case 0:
         return neuron0x1ac20e0();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLsR::neuron0x1a8e2a0() {
   return input0;
}

double NNfunction_ss_uLsR::neuron0x1a8e550() {
   return input1;
}

double NNfunction_ss_uLsR::neuron0x1a8e890() {
   return input2;
}

double NNfunction_ss_uLsR::neuron0x1a8ebd0() {
   return input3;
}

double NNfunction_ss_uLsR::neuron0x1a8ef10() {
   return input4;
}

double NNfunction_ss_uLsR::neuron0x1a8f250() {
   return input5;
}

double NNfunction_ss_uLsR::neuron0x1a8f590() {
   return input6;
}

double NNfunction_ss_uLsR::neuron0x1a8f8d0() {
   return input7;
}

double NNfunction_ss_uLsR::neuron0x1a8fc10() {
   return input8;
}

double NNfunction_ss_uLsR::neuron0x1a8ff50() {
   return input9;
}

double NNfunction_ss_uLsR::neuron0x1a90290() {
   return input10;
}

double NNfunction_ss_uLsR::neuron0x1a905d0() {
   return input11;
}

double NNfunction_ss_uLsR::neuron0x1a90910() {
   return input12;
}

double NNfunction_ss_uLsR::neuron0x1a90c50() {
   return input13;
}

double NNfunction_ss_uLsR::neuron0x1a90f90() {
   return input14;
}

double NNfunction_ss_uLsR::neuron0x1a912d0() {
   return input15;
}

double NNfunction_ss_uLsR::neuron0x1a91610() {
   return input16;
}

double NNfunction_ss_uLsR::neuron0x1a91b70() {
   return input17;
}

double NNfunction_ss_uLsR::neuron0x1a91d90() {
   return input18;
}

double NNfunction_ss_uLsR::neuron0x1a920d0() {
   return input19;
}

double NNfunction_ss_uLsR::neuron0x1a92410() {
   return input20;
}

double NNfunction_ss_uLsR::neuron0x1a92750() {
   return input21;
}

double NNfunction_ss_uLsR::neuron0x1a92a90() {
   return input22;
}

double NNfunction_ss_uLsR::neuron0x1a92dd0() {
   return input23;
}

double NNfunction_ss_uLsR::input0x1a93240() {
   double input = -0.0635077;
   input += synapse0x1a8e220();
   input += synapse0x1a8e260();
   input += synapse0x1a934f0();
   input += synapse0x1a93530();
   input += synapse0x1a93570();
   input += synapse0x1a935b0();
   input += synapse0x1a935f0();
   input += synapse0x1a93630();
   input += synapse0x1a93670();
   input += synapse0x1a936b0();
   input += synapse0x1a936f0();
   input += synapse0x1a93730();
   input += synapse0x1a93770();
   input += synapse0x1a937b0();
   input += synapse0x1a937f0();
   input += synapse0x1a93830();
   input += synapse0x1a8e190();
   input += synapse0x1a8e1d0();
   input += synapse0x1849360();
   input += synapse0x18493a0();
   input += synapse0x1a93a90();
   input += synapse0x1a93ad0();
   input += synapse0x1a93b10();
   input += synapse0x1a93b50();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a93240() {
   double input = input0x1a93240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a93b90() {
   double input = -0.0470097;
   input += synapse0x1a93ed0();
   input += synapse0x1a93f10();
   input += synapse0x1a93f50();
   input += synapse0x1a93f90();
   input += synapse0x1a93fd0();
   input += synapse0x1a94010();
   input += synapse0x1a94050();
   input += synapse0x1a94090();
   input += synapse0x1a940d0();
   input += synapse0x1a93980();
   input += synapse0x1a939c0();
   input += synapse0x1a93a00();
   input += synapse0x1a93a40();
   input += synapse0x1a94320();
   input += synapse0x1a94360();
   input += synapse0x1a943a0();
   input += synapse0x1a93d20();
   input += synapse0x1a93d60();
   input += synapse0x1a944f0();
   input += synapse0x1a94530();
   input += synapse0x1a94570();
   input += synapse0x1a945b0();
   input += synapse0x1a945f0();
   input += synapse0x1a94630();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a93b90() {
   double input = input0x1a93b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a94670() {
   double input = 0.338071;
   input += synapse0x1a949b0();
   input += synapse0x1a949f0();
   input += synapse0x1a94a30();
   input += synapse0x1a94a70();
   input += synapse0x1a94ab0();
   input += synapse0x1a94af0();
   input += synapse0x1a94b30();
   input += synapse0x1a94b70();
   input += synapse0x1a94bb0();
   input += synapse0x1a94bf0();
   input += synapse0x1a94c30();
   input += synapse0x1a94c70();
   input += synapse0x1a94cb0();
   input += synapse0x1a94cf0();
   input += synapse0x1a94d30();
   input += synapse0x1a94d70();
   input += synapse0x1a94800();
   input += synapse0x1a94840();
   input += synapse0x1a7d310();
   input += synapse0x1857260();
   input += synapse0x18572a0();
   input += synapse0x19727b0();
   input += synapse0x19727f0();
   input += synapse0x1a8e000();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a94670() {
   double input = input0x1a94670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x18579c0() {
   double input = -0.754016;
   input += synapse0x1857b50();
   input += synapse0x1a94230();
   input += synapse0x1a94270();
   input += synapse0x1a942b0();
   input += synapse0x1a94ec0();
   input += synapse0x1a94f00();
   input += synapse0x1a94f40();
   input += synapse0x1a94f80();
   input += synapse0x1a94fc0();
   input += synapse0x1a95000();
   input += synapse0x1a95040();
   input += synapse0x1a95080();
   input += synapse0x1a950c0();
   input += synapse0x1a95100();
   input += synapse0x1a95140();
   input += synapse0x1a95180();
   input += synapse0x1a8e040();
   input += synapse0x1a8e080();
   input += synapse0x1a8e0c0();
   input += synapse0x1a952d0();
   input += synapse0x1a95310();
   input += synapse0x1a95350();
   input += synapse0x1a95390();
   input += synapse0x1a953d0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x18579c0() {
   double input = input0x18579c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a95410() {
   double input = -0.854737;
   input += synapse0x1a95750();
   input += synapse0x1a95790();
   input += synapse0x1a957d0();
   input += synapse0x1a95810();
   input += synapse0x1a95850();
   input += synapse0x1a95890();
   input += synapse0x1a958d0();
   input += synapse0x1a95910();
   input += synapse0x1a95950();
   input += synapse0x1a95990();
   input += synapse0x1a959d0();
   input += synapse0x1a95a10();
   input += synapse0x1a95a50();
   input += synapse0x1a95a90();
   input += synapse0x1a95ad0();
   input += synapse0x1a95b10();
   input += synapse0x1a955a0();
   input += synapse0x1a955e0();
   input += synapse0x1a95c60();
   input += synapse0x1a95ca0();
   input += synapse0x1a95ce0();
   input += synapse0x1a95d20();
   input += synapse0x1a95d60();
   input += synapse0x1a95da0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a95410() {
   double input = input0x1a95410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a95de0() {
   double input = 0.365636;
   input += synapse0x1a96120();
   input += synapse0x1a96160();
   input += synapse0x1a961a0();
   input += synapse0x1a961e0();
   input += synapse0x1a96220();
   input += synapse0x1a96260();
   input += synapse0x1a962a0();
   input += synapse0x1a962e0();
   input += synapse0x1a96320();
   input += synapse0x18575b0();
   input += synapse0x18575f0();
   input += synapse0x1857630();
   input += synapse0x1857670();
   input += synapse0x18576b0();
   input += synapse0x18576f0();
   input += synapse0x1857730();
   input += synapse0x1a95f70();
   input += synapse0x1a95fb0();
   input += synapse0x1857880();
   input += synapse0x18578c0();
   input += synapse0x1857900();
   input += synapse0x1857940();
   input += synapse0x1857980();
   input += synapse0x1a96b70();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a95de0() {
   double input = input0x1a95de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a96bb0() {
   double input = 2.20386;
   input += synapse0x1a96ef0();
   input += synapse0x1a96f30();
   input += synapse0x1a96f70();
   input += synapse0x1a96fb0();
   input += synapse0x1a96ff0();
   input += synapse0x1a97030();
   input += synapse0x1a97070();
   input += synapse0x1a970b0();
   input += synapse0x1a970f0();
   input += synapse0x1a97130();
   input += synapse0x1a97170();
   input += synapse0x1a971b0();
   input += synapse0x1a971f0();
   input += synapse0x1a97230();
   input += synapse0x1a97270();
   input += synapse0x1a972b0();
   input += synapse0x1a96d40();
   input += synapse0x1a96d80();
   input += synapse0x1a97400();
   input += synapse0x1a97440();
   input += synapse0x1a97480();
   input += synapse0x1a974c0();
   input += synapse0x1a97500();
   input += synapse0x1a97540();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a96bb0() {
   double input = input0x1a96bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a97580() {
   double input = -0.338181;
   input += synapse0x1a978c0();
   input += synapse0x1a97900();
   input += synapse0x1a97940();
   input += synapse0x1a97980();
   input += synapse0x1a979c0();
   input += synapse0x1a97a00();
   input += synapse0x1a97a40();
   input += synapse0x1a97a80();
   input += synapse0x1a97ac0();
   input += synapse0x1a97b00();
   input += synapse0x1a97b40();
   input += synapse0x1a97b80();
   input += synapse0x1a97bc0();
   input += synapse0x1a97c00();
   input += synapse0x1a97c40();
   input += synapse0x1a97c80();
   input += synapse0x1a97710();
   input += synapse0x1a97750();
   input += synapse0x1a97dd0();
   input += synapse0x1a97e10();
   input += synapse0x1a97e50();
   input += synapse0x1a97e90();
   input += synapse0x1a97ed0();
   input += synapse0x1a97f10();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a97580() {
   double input = input0x1a97580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a97f50() {
   double input = 1.04118;
   input += synapse0x1a91a60();
   input += synapse0x1a91aa0();
   input += synapse0x1a91ae0();
   input += synapse0x1a91b20();
   input += synapse0x1a984a0();
   input += synapse0x1a984e0();
   input += synapse0x1a98520();
   input += synapse0x1a98560();
   input += synapse0x1a985a0();
   input += synapse0x1a985e0();
   input += synapse0x1a98620();
   input += synapse0x1a98660();
   input += synapse0x1a986a0();
   input += synapse0x1a986e0();
   input += synapse0x1a98720();
   input += synapse0x1a98760();
   input += synapse0x1a980e0();
   input += synapse0x1a98120();
   input += synapse0x1a988b0();
   input += synapse0x1a988f0();
   input += synapse0x1a98930();
   input += synapse0x1a98970();
   input += synapse0x1a989b0();
   input += synapse0x1a989f0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a97f50() {
   double input = input0x1a97f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a98a30() {
   double input = 0.253846;
   input += synapse0x1a98d70();
   input += synapse0x1a98db0();
   input += synapse0x1a98df0();
   input += synapse0x1a98e30();
   input += synapse0x1a98e70();
   input += synapse0x1a98eb0();
   input += synapse0x1a98ef0();
   input += synapse0x1a98f30();
   input += synapse0x1a98f70();
   input += synapse0x1a98fb0();
   input += synapse0x1a98ff0();
   input += synapse0x1a99030();
   input += synapse0x1a99070();
   input += synapse0x1a990b0();
   input += synapse0x1a990f0();
   input += synapse0x1a99130();
   input += synapse0x1a98bc0();
   input += synapse0x1a98c00();
   input += synapse0x1a99280();
   input += synapse0x1a992c0();
   input += synapse0x1a99300();
   input += synapse0x1a99340();
   input += synapse0x1a99380();
   input += synapse0x1a993c0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a98a30() {
   double input = input0x1a98a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a99400() {
   double input = -0.430859;
   input += synapse0x1a99740();
   input += synapse0x1a99780();
   input += synapse0x1a997c0();
   input += synapse0x1a99800();
   input += synapse0x1a99840();
   input += synapse0x1a99880();
   input += synapse0x1a998c0();
   input += synapse0x1a99900();
   input += synapse0x1a99940();
   input += synapse0x1a99980();
   input += synapse0x1a999c0();
   input += synapse0x1a99a00();
   input += synapse0x1a99a40();
   input += synapse0x1a99a80();
   input += synapse0x1a99ac0();
   input += synapse0x1a99b00();
   input += synapse0x1a99590();
   input += synapse0x1a995d0();
   input += synapse0x1a96360();
   input += synapse0x1a963a0();
   input += synapse0x1a963e0();
   input += synapse0x1a96420();
   input += synapse0x1a96460();
   input += synapse0x1a964a0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a99400() {
   double input = input0x1a99400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a964e0() {
   double input = -1.10507;
   input += synapse0x1a96820();
   input += synapse0x1a96860();
   input += synapse0x1a968a0();
   input += synapse0x1a968e0();
   input += synapse0x1a96920();
   input += synapse0x1a96960();
   input += synapse0x1a969a0();
   input += synapse0x1a969e0();
   input += synapse0x1a96a20();
   input += synapse0x1a96a60();
   input += synapse0x1a96aa0();
   input += synapse0x1a96ae0();
   input += synapse0x1a96b20();
   input += synapse0x1a9ac60();
   input += synapse0x1a9aca0();
   input += synapse0x1a9ace0();
   input += synapse0x1a96670();
   input += synapse0x1a966b0();
   input += synapse0x1a9ae30();
   input += synapse0x1a9ae70();
   input += synapse0x1a9aeb0();
   input += synapse0x1a9aef0();
   input += synapse0x1a9af30();
   input += synapse0x1a9af70();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a964e0() {
   double input = input0x1a964e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a9afb0() {
   double input = 0.0351631;
   input += synapse0x1a9b2f0();
   input += synapse0x1a9b330();
   input += synapse0x1a9b370();
   input += synapse0x1a9b3b0();
   input += synapse0x1a9b3f0();
   input += synapse0x1a9b430();
   input += synapse0x1a9b470();
   input += synapse0x1a9b4b0();
   input += synapse0x1a9b4f0();
   input += synapse0x1a9b530();
   input += synapse0x1a9b570();
   input += synapse0x1a9b5b0();
   input += synapse0x1a9b5f0();
   input += synapse0x1a9b630();
   input += synapse0x1a9b670();
   input += synapse0x1a9b6b0();
   input += synapse0x1a9b140();
   input += synapse0x1a9b180();
   input += synapse0x1a9b800();
   input += synapse0x1a9b840();
   input += synapse0x1a9b880();
   input += synapse0x1a9b8c0();
   input += synapse0x1a9b900();
   input += synapse0x1a9b940();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a9afb0() {
   double input = input0x1a9afb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a9b980() {
   double input = 0.737039;
   input += synapse0x1a9bcc0();
   input += synapse0x1a9bd00();
   input += synapse0x1a9bd40();
   input += synapse0x1a9bd80();
   input += synapse0x1a9bdc0();
   input += synapse0x1a9be00();
   input += synapse0x1a9be40();
   input += synapse0x1a9be80();
   input += synapse0x1a9bec0();
   input += synapse0x1a9bf00();
   input += synapse0x1a9bf40();
   input += synapse0x1a9bf80();
   input += synapse0x1a9bfc0();
   input += synapse0x1a9c000();
   input += synapse0x1a9c040();
   input += synapse0x1a9c080();
   input += synapse0x1a9bb10();
   input += synapse0x1a9bb50();
   input += synapse0x1a9c1d0();
   input += synapse0x1a9c210();
   input += synapse0x1a9c250();
   input += synapse0x1a9c290();
   input += synapse0x1a9c2d0();
   input += synapse0x1a9c310();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a9b980() {
   double input = input0x1a9b980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a9c350() {
   double input = -0.336432;
   input += synapse0x1a9c690();
   input += synapse0x1a9c6d0();
   input += synapse0x1a9c710();
   input += synapse0x1a9c750();
   input += synapse0x1a9c790();
   input += synapse0x1a9c7d0();
   input += synapse0x1a9c810();
   input += synapse0x1a9c850();
   input += synapse0x1a9c890();
   input += synapse0x1a9c8d0();
   input += synapse0x1a9c910();
   input += synapse0x1a9c950();
   input += synapse0x1a9c990();
   input += synapse0x1a9c9d0();
   input += synapse0x1a9ca10();
   input += synapse0x1a9ca50();
   input += synapse0x1a9c4e0();
   input += synapse0x1a9c520();
   input += synapse0x1a9cba0();
   input += synapse0x1a9cbe0();
   input += synapse0x1a9cc20();
   input += synapse0x1a9cc60();
   input += synapse0x1a9cca0();
   input += synapse0x1a9cce0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a9c350() {
   double input = input0x1a9c350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a9cd20() {
   double input = 0.60828;
   input += synapse0x1a9d060();
   input += synapse0x1a8e430();
   input += synapse0x1a8e470();
   input += synapse0x1a8e770();
   input += synapse0x1a8e7b0();
   input += synapse0x1a8eab0();
   input += synapse0x1a8eaf0();
   input += synapse0x1a8edf0();
   input += synapse0x1a8ee30();
   input += synapse0x1a8f130();
   input += synapse0x1a8f170();
   input += synapse0x1a8f470();
   input += synapse0x1a8f4b0();
   input += synapse0x1a8f7b0();
   input += synapse0x1a8f7f0();
   input += synapse0x1a8faf0();
   input += synapse0x1a8fb30();
   input += synapse0x1a8fe30();
   input += synapse0x1a8fe70();
   input += synapse0x1a90170();
   input += synapse0x1a901b0();
   input += synapse0x1a904b0();
   input += synapse0x1a904f0();
   input += synapse0x1a907f0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a9cd20() {
   double input = input0x1a9cd20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a9eb30() {
   double input = 0.104749;
   input += synapse0x1a90830();
   input += synapse0x1a914f0();
   input += synapse0x1a91530();
   input += synapse0x1a9ceb0();
   input += synapse0x1a9cef0();
   input += synapse0x1a91830();
   input += synapse0x1a91870();
   input += synapse0x1849240();
   input += synapse0x1849280();
   input += synapse0x1a91fb0();
   input += synapse0x1a91ff0();
   input += synapse0x1a922f0();
   input += synapse0x1a92330();
   input += synapse0x1a92630();
   input += synapse0x1a92670();
   input += synapse0x1a92970();
   input += synapse0x1a929b0();
   input += synapse0x1a92cb0();
   input += synapse0x1a92cf0();
   input += synapse0x1a92ff0();
   input += synapse0x1a93030();
   input += synapse0x1a90b30();
   input += synapse0x1a90b70();
   input += synapse0x1a9edd0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a9eb30() {
   double input = input0x1a9eb30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a9ee10() {
   double input = 1.1617;
   input += synapse0x1a9f150();
   input += synapse0x1a9f190();
   input += synapse0x1a9f1d0();
   input += synapse0x1a9f210();
   input += synapse0x1a9f250();
   input += synapse0x1a9f290();
   input += synapse0x1a9f2d0();
   input += synapse0x1a9f310();
   input += synapse0x1a9f350();
   input += synapse0x1a9f390();
   input += synapse0x1a9f3d0();
   input += synapse0x1a9f410();
   input += synapse0x1a9f450();
   input += synapse0x1a9f490();
   input += synapse0x1a9f4d0();
   input += synapse0x1a9f510();
   input += synapse0x1a9efa0();
   input += synapse0x1a9efe0();
   input += synapse0x1a9f660();
   input += synapse0x1a9f6a0();
   input += synapse0x1a9f6e0();
   input += synapse0x1a9f720();
   input += synapse0x1a9f760();
   input += synapse0x1a9f7a0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a9ee10() {
   double input = input0x1a9ee10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a9f7e0() {
   double input = -0.234533;
   input += synapse0x1a9fb20();
   input += synapse0x1a9fb60();
   input += synapse0x1a9fba0();
   input += synapse0x1a9fbe0();
   input += synapse0x1a9fc20();
   input += synapse0x1a9fc60();
   input += synapse0x1a9fca0();
   input += synapse0x1a9fce0();
   input += synapse0x1a9fd20();
   input += synapse0x1a9fd60();
   input += synapse0x1a9fda0();
   input += synapse0x1a9fde0();
   input += synapse0x1a9fe20();
   input += synapse0x1a9fe60();
   input += synapse0x1a9fea0();
   input += synapse0x1a9fee0();
   input += synapse0x1a9f970();
   input += synapse0x1a9f9b0();
   input += synapse0x1aa0030();
   input += synapse0x1aa0070();
   input += synapse0x1aa00b0();
   input += synapse0x1aa00f0();
   input += synapse0x1aa0130();
   input += synapse0x1aa0170();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a9f7e0() {
   double input = input0x1a9f7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aa01b0() {
   double input = 1.34115;
   input += synapse0x1aa04f0();
   input += synapse0x1aa0530();
   input += synapse0x1aa0570();
   input += synapse0x1aa05b0();
   input += synapse0x1aa05f0();
   input += synapse0x1aa0630();
   input += synapse0x1aa0670();
   input += synapse0x1aa06b0();
   input += synapse0x1aa06f0();
   input += synapse0x1aa0730();
   input += synapse0x1aa0770();
   input += synapse0x1aa07b0();
   input += synapse0x1aa07f0();
   input += synapse0x1aa0830();
   input += synapse0x1aa0870();
   input += synapse0x1aa08b0();
   input += synapse0x1aa0340();
   input += synapse0x1aa0380();
   input += synapse0x1aa0a00();
   input += synapse0x1aa0a40();
   input += synapse0x1aa0a80();
   input += synapse0x1aa0ac0();
   input += synapse0x1aa0b00();
   input += synapse0x1aa0b40();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aa01b0() {
   double input = input0x1aa01b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aa0b80() {
   double input = -0.32224;
   input += synapse0x1aa0ec0();
   input += synapse0x1aa0f00();
   input += synapse0x1aa0f40();
   input += synapse0x1aa0f80();
   input += synapse0x1aa0fc0();
   input += synapse0x1aa1000();
   input += synapse0x1aa1040();
   input += synapse0x1aa1080();
   input += synapse0x1aa10c0();
   input += synapse0x1aa1100();
   input += synapse0x1aa1140();
   input += synapse0x1aa1180();
   input += synapse0x1aa11c0();
   input += synapse0x1aa1200();
   input += synapse0x1aa1240();
   input += synapse0x1aa1280();
   input += synapse0x1aa0d10();
   input += synapse0x1aa0d50();
   input += synapse0x1aa13d0();
   input += synapse0x1aa1410();
   input += synapse0x1aa1450();
   input += synapse0x1aa1490();
   input += synapse0x1aa14d0();
   input += synapse0x1aa1510();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aa0b80() {
   double input = input0x1aa0b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aa1550() {
   double input = -0.613387;
   input += synapse0x1aa1890();
   input += synapse0x1aa18d0();
   input += synapse0x1aa1910();
   input += synapse0x1aa1950();
   input += synapse0x1aa1990();
   input += synapse0x1aa19d0();
   input += synapse0x1aa1a10();
   input += synapse0x1aa1a50();
   input += synapse0x1aa1a90();
   input += synapse0x1a99c50();
   input += synapse0x1a99c90();
   input += synapse0x1a99cd0();
   input += synapse0x1a99d10();
   input += synapse0x1a99d50();
   input += synapse0x1a99d90();
   input += synapse0x1a99dd0();
   input += synapse0x1aa16e0();
   input += synapse0x1aa1720();
   input += synapse0x1a99f20();
   input += synapse0x1a99f60();
   input += synapse0x1a99fa0();
   input += synapse0x1a99fe0();
   input += synapse0x1a9a020();
   input += synapse0x1a9a060();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aa1550() {
   double input = input0x1aa1550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a9a0a0() {
   double input = 1.27595;
   input += synapse0x1a9a3e0();
   input += synapse0x1a9a420();
   input += synapse0x1a9a460();
   input += synapse0x1a9a4a0();
   input += synapse0x1a9a4e0();
   input += synapse0x1a9a520();
   input += synapse0x1a9a560();
   input += synapse0x1a9a5a0();
   input += synapse0x1a9a5e0();
   input += synapse0x1a9a620();
   input += synapse0x1a9a660();
   input += synapse0x1a9a6a0();
   input += synapse0x1a9a6e0();
   input += synapse0x1a9a720();
   input += synapse0x1a9a760();
   input += synapse0x1a9a7a0();
   input += synapse0x1a9a230();
   input += synapse0x1a9a270();
   input += synapse0x1a9a8f0();
   input += synapse0x1a9a930();
   input += synapse0x1a9a970();
   input += synapse0x1a9a9b0();
   input += synapse0x1a9a9f0();
   input += synapse0x1a9aa30();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a9a0a0() {
   double input = input0x1a9a0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a9aa70() {
   double input = 5.25784;
   input += synapse0x1a9ac00();
   input += synapse0x1aa3c90();
   input += synapse0x1aa3cd0();
   input += synapse0x1aa3d10();
   input += synapse0x1aa3d50();
   input += synapse0x1aa3d90();
   input += synapse0x1aa3dd0();
   input += synapse0x1aa3e10();
   input += synapse0x1aa3e50();
   input += synapse0x1aa3e90();
   input += synapse0x1aa3ed0();
   input += synapse0x1aa3f10();
   input += synapse0x1aa3f50();
   input += synapse0x1aa3f90();
   input += synapse0x1aa3fd0();
   input += synapse0x1aa4010();
   input += synapse0x1aa3ae0();
   input += synapse0x1aa3b20();
   input += synapse0x1aa4160();
   input += synapse0x1aa41a0();
   input += synapse0x1aa41e0();
   input += synapse0x1aa4220();
   input += synapse0x1aa4260();
   input += synapse0x1aa42a0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a9aa70() {
   double input = input0x1a9aa70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aa42e0() {
   double input = 1.49329;
   input += synapse0x1aa4620();
   input += synapse0x1aa4660();
   input += synapse0x1aa46a0();
   input += synapse0x1aa46e0();
   input += synapse0x1aa4720();
   input += synapse0x1aa4760();
   input += synapse0x1aa47a0();
   input += synapse0x1aa47e0();
   input += synapse0x1aa4820();
   input += synapse0x1aa4860();
   input += synapse0x1aa48a0();
   input += synapse0x1aa48e0();
   input += synapse0x1aa4920();
   input += synapse0x1aa4960();
   input += synapse0x1aa49a0();
   input += synapse0x1aa49e0();
   input += synapse0x1aa4470();
   input += synapse0x1aa44b0();
   input += synapse0x1aa4b30();
   input += synapse0x1aa4b70();
   input += synapse0x1aa4bb0();
   input += synapse0x1aa4bf0();
   input += synapse0x1aa4c30();
   input += synapse0x1aa4c70();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aa42e0() {
   double input = input0x1aa42e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aa4cb0() {
   double input = -0.384749;
   input += synapse0x1aa4ff0();
   input += synapse0x1aa5030();
   input += synapse0x1aa5070();
   input += synapse0x1aa50b0();
   input += synapse0x1aa50f0();
   input += synapse0x1aa5130();
   input += synapse0x1aa5170();
   input += synapse0x1aa51b0();
   input += synapse0x1aa51f0();
   input += synapse0x1aa5230();
   input += synapse0x1aa5270();
   input += synapse0x1aa52b0();
   input += synapse0x1aa52f0();
   input += synapse0x1aa5330();
   input += synapse0x1aa5370();
   input += synapse0x1aa53b0();
   input += synapse0x1aa4e40();
   input += synapse0x1aa4e80();
   input += synapse0x1aa5500();
   input += synapse0x1aa5540();
   input += synapse0x1aa5580();
   input += synapse0x1aa55c0();
   input += synapse0x1aa5600();
   input += synapse0x1aa5640();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aa4cb0() {
   double input = input0x1aa4cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aa5680() {
   double input = 0.511743;
   input += synapse0x1aa59c0();
   input += synapse0x1aa5a00();
   input += synapse0x1aa5a40();
   input += synapse0x1aa5a80();
   input += synapse0x1aa5ac0();
   input += synapse0x1aa5b00();
   input += synapse0x1aa5b40();
   input += synapse0x1aa5b80();
   input += synapse0x1aa5bc0();
   input += synapse0x1aa5c00();
   input += synapse0x1aa5c40();
   input += synapse0x1aa5c80();
   input += synapse0x1aa5cc0();
   input += synapse0x1aa5d00();
   input += synapse0x1aa5d40();
   input += synapse0x1aa5d80();
   input += synapse0x1aa5810();
   input += synapse0x1aa5850();
   input += synapse0x1aa5ed0();
   input += synapse0x1aa5f10();
   input += synapse0x1aa5f50();
   input += synapse0x1aa5f90();
   input += synapse0x1aa5fd0();
   input += synapse0x1aa6010();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aa5680() {
   double input = input0x1aa5680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aa6050() {
   double input = 0.52977;
   input += synapse0x1aa6390();
   input += synapse0x1aa63d0();
   input += synapse0x1aa6410();
   input += synapse0x1aa6450();
   input += synapse0x1aa6490();
   input += synapse0x1aa64d0();
   input += synapse0x1aa6510();
   input += synapse0x1aa6550();
   input += synapse0x1aa6590();
   input += synapse0x1aa65d0();
   input += synapse0x1aa6610();
   input += synapse0x1aa6650();
   input += synapse0x1aa6690();
   input += synapse0x1aa66d0();
   input += synapse0x1aa6710();
   input += synapse0x1aa6750();
   input += synapse0x1aa61e0();
   input += synapse0x1aa6220();
   input += synapse0x1aa68a0();
   input += synapse0x1aa68e0();
   input += synapse0x1aa6920();
   input += synapse0x1aa6960();
   input += synapse0x1aa69a0();
   input += synapse0x1aa69e0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aa6050() {
   double input = input0x1aa6050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aa6a20() {
   double input = 2.03447;
   input += synapse0x1aa6d60();
   input += synapse0x1aa6da0();
   input += synapse0x1aa6de0();
   input += synapse0x1aa6e20();
   input += synapse0x1aa6e60();
   input += synapse0x1aa6ea0();
   input += synapse0x1aa6ee0();
   input += synapse0x1aa6f20();
   input += synapse0x1aa6f60();
   input += synapse0x1aa6fa0();
   input += synapse0x1aa6fe0();
   input += synapse0x1aa7020();
   input += synapse0x1aa7060();
   input += synapse0x1aa70a0();
   input += synapse0x1aa70e0();
   input += synapse0x1aa7120();
   input += synapse0x1aa6bb0();
   input += synapse0x1aa6bf0();
   input += synapse0x1aa7270();
   input += synapse0x1aa72b0();
   input += synapse0x1aa72f0();
   input += synapse0x1aa7330();
   input += synapse0x1aa7370();
   input += synapse0x1aa73b0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aa6a20() {
   double input = input0x1aa6a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aa73f0() {
   double input = -1.07521;
   input += synapse0x1aa7730();
   input += synapse0x1aa7770();
   input += synapse0x1aa77b0();
   input += synapse0x1aa77f0();
   input += synapse0x1aa7830();
   input += synapse0x1aa7870();
   input += synapse0x1aa78b0();
   input += synapse0x1aa78f0();
   input += synapse0x1aa7930();
   input += synapse0x1aa7970();
   input += synapse0x1aa79b0();
   input += synapse0x1aa79f0();
   input += synapse0x1aa7a30();
   input += synapse0x1aa7a70();
   input += synapse0x1aa7ab0();
   input += synapse0x1aa7af0();
   input += synapse0x1aa7580();
   input += synapse0x1aa75c0();
   input += synapse0x1aa7c40();
   input += synapse0x1aa7c80();
   input += synapse0x1aa7cc0();
   input += synapse0x1aa7d00();
   input += synapse0x1aa7d40();
   input += synapse0x1aa7d80();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aa73f0() {
   double input = input0x1aa73f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aa7dc0() {
   double input = 0.628872;
   input += synapse0x1aa8100();
   input += synapse0x1aa8140();
   input += synapse0x1aa8180();
   input += synapse0x1aa81c0();
   input += synapse0x1aa8200();
   input += synapse0x1aa8240();
   input += synapse0x1aa8280();
   input += synapse0x1aa82c0();
   input += synapse0x1aa8300();
   input += synapse0x1aa8340();
   input += synapse0x1aa8380();
   input += synapse0x1aa83c0();
   input += synapse0x1aa8400();
   input += synapse0x1aa8440();
   input += synapse0x1aa8480();
   input += synapse0x1aa84c0();
   input += synapse0x1aa7f50();
   input += synapse0x1aa7f90();
   input += synapse0x1aa8610();
   input += synapse0x1aa8650();
   input += synapse0x1aa8690();
   input += synapse0x1aa86d0();
   input += synapse0x1aa8710();
   input += synapse0x1aa8750();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aa7dc0() {
   double input = input0x1aa7dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aa8790() {
   double input = 1.57559;
   input += synapse0x1aa8ad0();
   input += synapse0x1a9d0a0();
   input += synapse0x1a9d0e0();
   input += synapse0x1a9d120();
   input += synapse0x1a9d370();
   input += synapse0x1a9d3b0();
   input += synapse0x1a9d3f0();
   input += synapse0x1a9d640();
   input += synapse0x1a9d680();
   input += synapse0x1a9d8d0();
   input += synapse0x1a9d910();
   input += synapse0x1a9d950();
   input += synapse0x1a9dba0();
   input += synapse0x1a9dbe0();
   input += synapse0x1a9de30();
   input += synapse0x1a9de70();
   input += synapse0x1aa8920();
   input += synapse0x1aa8960();
   input += synapse0x1a9dfc0();
   input += synapse0x1a9e4d0();
   input += synapse0x1a9e510();
   input += synapse0x1a9e550();
   input += synapse0x1a9e7a0();
   input += synapse0x1a9e7e0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aa8790() {
   double input = input0x1aa8790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1a9e820() {
   double input = 3.42897;
   input += synapse0x1a9e090();
   input += synapse0x1a9e0d0();
   input += synapse0x1a9e110();
   input += synapse0x1a9e150();
   input += synapse0x1a9ead0();
   input += synapse0x1aaae20();
   input += synapse0x1aaae60();
   input += synapse0x1aaaea0();
   input += synapse0x1aaaee0();
   input += synapse0x1aaaf20();
   input += synapse0x1aaaf60();
   input += synapse0x1aaafa0();
   input += synapse0x1aaafe0();
   input += synapse0x1aab020();
   input += synapse0x1aab060();
   input += synapse0x1aab0a0();
   input += synapse0x1a9e9b0();
   input += synapse0x1a9e9f0();
   input += synapse0x1aab1f0();
   input += synapse0x1aab230();
   input += synapse0x1aab270();
   input += synapse0x1aab2b0();
   input += synapse0x1aab2f0();
   input += synapse0x1aab330();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1a9e820() {
   double input = input0x1a9e820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aab370() {
   double input = -0.285677;
   input += synapse0x1aab6b0();
   input += synapse0x1aab6f0();
   input += synapse0x1aab730();
   input += synapse0x1aab770();
   input += synapse0x1aab7b0();
   input += synapse0x1aab7f0();
   input += synapse0x1aab830();
   input += synapse0x1aab870();
   input += synapse0x1aab8b0();
   input += synapse0x1aab8f0();
   input += synapse0x1aab930();
   input += synapse0x1aab970();
   input += synapse0x1aab9b0();
   input += synapse0x1aab9f0();
   input += synapse0x1aaba30();
   input += synapse0x1aaba70();
   input += synapse0x1aab500();
   input += synapse0x1aab540();
   input += synapse0x1aabbc0();
   input += synapse0x1aabc00();
   input += synapse0x1aabc40();
   input += synapse0x1aabc80();
   input += synapse0x1aabcc0();
   input += synapse0x1aabd00();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aab370() {
   double input = input0x1aab370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aabd40() {
   double input = -0.318335;
   input += synapse0x1aac080();
   input += synapse0x1aac0c0();
   input += synapse0x1aac100();
   input += synapse0x1aac140();
   input += synapse0x1aac180();
   input += synapse0x1aac1c0();
   input += synapse0x1aac200();
   input += synapse0x1aac240();
   input += synapse0x1aac280();
   input += synapse0x1aac2c0();
   input += synapse0x1aac300();
   input += synapse0x1aac340();
   input += synapse0x1aac380();
   input += synapse0x1aac3c0();
   input += synapse0x1aac400();
   input += synapse0x1aac440();
   input += synapse0x1aabed0();
   input += synapse0x1aabf10();
   input += synapse0x1aac590();
   input += synapse0x1aac5d0();
   input += synapse0x1aac610();
   input += synapse0x1aac650();
   input += synapse0x1aac690();
   input += synapse0x1aac6d0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aabd40() {
   double input = input0x1aabd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aac710() {
   double input = 0.0715044;
   input += synapse0x1aaca50();
   input += synapse0x1aaca90();
   input += synapse0x1aacad0();
   input += synapse0x1aacb10();
   input += synapse0x1aacb50();
   input += synapse0x1aacb90();
   input += synapse0x1aacbd0();
   input += synapse0x1aacc10();
   input += synapse0x1aacc50();
   input += synapse0x1aacc90();
   input += synapse0x1aaccd0();
   input += synapse0x1aacd10();
   input += synapse0x1aacd50();
   input += synapse0x1aacd90();
   input += synapse0x1aacdd0();
   input += synapse0x1aace10();
   input += synapse0x1aac8a0();
   input += synapse0x1aac8e0();
   input += synapse0x1aacf60();
   input += synapse0x1aacfa0();
   input += synapse0x1aacfe0();
   input += synapse0x1aad020();
   input += synapse0x1aad060();
   input += synapse0x1aad0a0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aac710() {
   double input = input0x1aac710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aad0e0() {
   double input = 2.63652;
   input += synapse0x1aad420();
   input += synapse0x1aad460();
   input += synapse0x1aad4a0();
   input += synapse0x1aad4e0();
   input += synapse0x1aad520();
   input += synapse0x1aad560();
   input += synapse0x1aad5a0();
   input += synapse0x1aad5e0();
   input += synapse0x1aad620();
   input += synapse0x1aad660();
   input += synapse0x1aad6a0();
   input += synapse0x1aad6e0();
   input += synapse0x1aad720();
   input += synapse0x1aad760();
   input += synapse0x1aad7a0();
   input += synapse0x1aad7e0();
   input += synapse0x1aad270();
   input += synapse0x1aad2b0();
   input += synapse0x1aad930();
   input += synapse0x1aad970();
   input += synapse0x1aad9b0();
   input += synapse0x1aad9f0();
   input += synapse0x1aada30();
   input += synapse0x1aada70();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aad0e0() {
   double input = input0x1aad0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aadab0() {
   double input = 0.577003;
   input += synapse0x1aaddf0();
   input += synapse0x1aade30();
   input += synapse0x1aade70();
   input += synapse0x1aadeb0();
   input += synapse0x1aadef0();
   input += synapse0x1aadf30();
   input += synapse0x1aadf70();
   input += synapse0x1aadfb0();
   input += synapse0x1aadff0();
   input += synapse0x1aae030();
   input += synapse0x1aae070();
   input += synapse0x1aae0b0();
   input += synapse0x1aae0f0();
   input += synapse0x1aae130();
   input += synapse0x1aae170();
   input += synapse0x1aae1b0();
   input += synapse0x1aadc40();
   input += synapse0x1aadc80();
   input += synapse0x1aae300();
   input += synapse0x1aae340();
   input += synapse0x1aae380();
   input += synapse0x1aae3c0();
   input += synapse0x1aae400();
   input += synapse0x1aae440();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aadab0() {
   double input = input0x1aadab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aae480() {
   double input = 1.49081;
   input += synapse0x1aae7c0();
   input += synapse0x1aae800();
   input += synapse0x1aae840();
   input += synapse0x1aae880();
   input += synapse0x1aae8c0();
   input += synapse0x1aae900();
   input += synapse0x1aae940();
   input += synapse0x1aae980();
   input += synapse0x1aae9c0();
   input += synapse0x1aaea00();
   input += synapse0x1aaea40();
   input += synapse0x1aaea80();
   input += synapse0x1aaeac0();
   input += synapse0x1aaeb00();
   input += synapse0x1aaeb40();
   input += synapse0x1aaeb80();
   input += synapse0x1aae610();
   input += synapse0x1aae650();
   input += synapse0x1aaecd0();
   input += synapse0x1aaed10();
   input += synapse0x1aaed50();
   input += synapse0x1aaed90();
   input += synapse0x1aaedd0();
   input += synapse0x1aaee10();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aae480() {
   double input = input0x1aae480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aaee50() {
   double input = 0.375657;
   input += synapse0x1aaf190();
   input += synapse0x1aaf1d0();
   input += synapse0x1aaf210();
   input += synapse0x1aaf250();
   input += synapse0x1aaf290();
   input += synapse0x1aaf2d0();
   input += synapse0x1aaf310();
   input += synapse0x1aaf350();
   input += synapse0x1aaf390();
   input += synapse0x1aaf3d0();
   input += synapse0x1aaf410();
   input += synapse0x1aaf450();
   input += synapse0x1aaf490();
   input += synapse0x1aaf4d0();
   input += synapse0x1aaf510();
   input += synapse0x1aaf550();
   input += synapse0x1aaefe0();
   input += synapse0x1aaf020();
   input += synapse0x1aaf6a0();
   input += synapse0x1aaf6e0();
   input += synapse0x1aaf720();
   input += synapse0x1aaf760();
   input += synapse0x1aaf7a0();
   input += synapse0x1aaf7e0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aaee50() {
   double input = input0x1aaee50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aaf820() {
   double input = -1.36578;
   input += synapse0x1a98290();
   input += synapse0x1a982d0();
   input += synapse0x1a98310();
   input += synapse0x1a98350();
   input += synapse0x1a98390();
   input += synapse0x1a983d0();
   input += synapse0x1a98410();
   input += synapse0x1a98450();
   input += synapse0x1aaff70();
   input += synapse0x1aaffb0();
   input += synapse0x1aafff0();
   input += synapse0x1ab0030();
   input += synapse0x1ab0070();
   input += synapse0x1ab00b0();
   input += synapse0x1ab00f0();
   input += synapse0x1ab0130();
   input += synapse0x1aaf9b0();
   input += synapse0x1aaf9f0();
   input += synapse0x1ab0280();
   input += synapse0x1ab02c0();
   input += synapse0x1ab0300();
   input += synapse0x1ab0340();
   input += synapse0x1ab0380();
   input += synapse0x1ab03c0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aaf820() {
   double input = input0x1aaf820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab0400() {
   double input = -0.155833;
   input += synapse0x1ab0740();
   input += synapse0x1ab0780();
   input += synapse0x1ab07c0();
   input += synapse0x1ab0800();
   input += synapse0x1ab0840();
   input += synapse0x1ab0880();
   input += synapse0x1ab08c0();
   input += synapse0x1ab0900();
   input += synapse0x1ab0940();
   input += synapse0x1ab0980();
   input += synapse0x1ab09c0();
   input += synapse0x1ab0a00();
   input += synapse0x1ab0a40();
   input += synapse0x1ab0a80();
   input += synapse0x1ab0ac0();
   input += synapse0x1ab0b00();
   input += synapse0x1ab0590();
   input += synapse0x1ab05d0();
   input += synapse0x1ab0c50();
   input += synapse0x1ab0c90();
   input += synapse0x1ab0cd0();
   input += synapse0x1ab0d10();
   input += synapse0x1ab0d50();
   input += synapse0x1ab0d90();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab0400() {
   double input = input0x1ab0400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab0dd0() {
   double input = -0.370775;
   input += synapse0x1ab1110();
   input += synapse0x1ab1150();
   input += synapse0x1ab1190();
   input += synapse0x1ab11d0();
   input += synapse0x1ab1210();
   input += synapse0x1ab1250();
   input += synapse0x1ab1290();
   input += synapse0x1ab12d0();
   input += synapse0x1ab1310();
   input += synapse0x1ab1350();
   input += synapse0x1ab1390();
   input += synapse0x1ab13d0();
   input += synapse0x1ab1410();
   input += synapse0x1ab1450();
   input += synapse0x1ab1490();
   input += synapse0x1ab14d0();
   input += synapse0x1ab0f60();
   input += synapse0x1ab0fa0();
   input += synapse0x1aa1ad0();
   input += synapse0x1aa1b10();
   input += synapse0x1aa1b50();
   input += synapse0x1aa1b90();
   input += synapse0x1aa1bd0();
   input += synapse0x1aa1c10();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab0dd0() {
   double input = input0x1ab0dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aa1c50() {
   double input = -1.23166;
   input += synapse0x1aa1f90();
   input += synapse0x1aa1fd0();
   input += synapse0x1aa2010();
   input += synapse0x1aa2050();
   input += synapse0x1aa2090();
   input += synapse0x1aa20d0();
   input += synapse0x1aa2110();
   input += synapse0x1aa2150();
   input += synapse0x1aa2190();
   input += synapse0x1aa21d0();
   input += synapse0x1aa2210();
   input += synapse0x1aa2250();
   input += synapse0x1aa2290();
   input += synapse0x1aa22d0();
   input += synapse0x1aa2310();
   input += synapse0x1aa2350();
   input += synapse0x1aa1de0();
   input += synapse0x1aa1e20();
   input += synapse0x1aa24a0();
   input += synapse0x1aa24e0();
   input += synapse0x1aa2520();
   input += synapse0x1aa2560();
   input += synapse0x1aa25a0();
   input += synapse0x1aa25e0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aa1c50() {
   double input = input0x1aa1c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aa2620() {
   double input = 0.742812;
   input += synapse0x1aa2960();
   input += synapse0x1aa29a0();
   input += synapse0x1aa29e0();
   input += synapse0x1aa2a20();
   input += synapse0x1aa2a60();
   input += synapse0x1aa2aa0();
   input += synapse0x1aa2ae0();
   input += synapse0x1aa2b20();
   input += synapse0x1aa2b60();
   input += synapse0x1aa2ba0();
   input += synapse0x1aa2be0();
   input += synapse0x1aa2c20();
   input += synapse0x1aa2c60();
   input += synapse0x1aa2ca0();
   input += synapse0x1aa2ce0();
   input += synapse0x1aa2d20();
   input += synapse0x1aa27b0();
   input += synapse0x1aa27f0();
   input += synapse0x1aa2e70();
   input += synapse0x1aa2eb0();
   input += synapse0x1aa2ef0();
   input += synapse0x1aa2f30();
   input += synapse0x1aa2f70();
   input += synapse0x1aa2fb0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aa2620() {
   double input = input0x1aa2620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1aa2ff0() {
   double input = 0.899478;
   input += synapse0x1aa3330();
   input += synapse0x1aa3370();
   input += synapse0x1aa33b0();
   input += synapse0x1aa33f0();
   input += synapse0x1aa3430();
   input += synapse0x1aa3470();
   input += synapse0x1aa34b0();
   input += synapse0x1aa34f0();
   input += synapse0x1aa3530();
   input += synapse0x1aa3570();
   input += synapse0x1aa35b0();
   input += synapse0x1aa35f0();
   input += synapse0x1aa3630();
   input += synapse0x1aa3670();
   input += synapse0x1aa36b0();
   input += synapse0x1aa36f0();
   input += synapse0x1aa3180();
   input += synapse0x1aa31c0();
   input += synapse0x1aa3840();
   input += synapse0x1aa3880();
   input += synapse0x1aa38c0();
   input += synapse0x1aa3900();
   input += synapse0x1aa3940();
   input += synapse0x1aa3980();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1aa2ff0() {
   double input = input0x1aa2ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab5630() {
   double input = 0.353635;
   input += synapse0x1ab5850();
   input += synapse0x1ab5890();
   input += synapse0x1ab58d0();
   input += synapse0x1ab5910();
   input += synapse0x1ab5950();
   input += synapse0x1ab5990();
   input += synapse0x1ab59d0();
   input += synapse0x1ab5a10();
   input += synapse0x1ab5a50();
   input += synapse0x1ab5a90();
   input += synapse0x1ab5ad0();
   input += synapse0x1ab5b10();
   input += synapse0x1ab5b50();
   input += synapse0x1ab5b90();
   input += synapse0x1ab5bd0();
   input += synapse0x1ab5c10();
   input += synapse0x1aa39c0();
   input += synapse0x1aa3a00();
   input += synapse0x1ab5d60();
   input += synapse0x1ab5da0();
   input += synapse0x1ab5de0();
   input += synapse0x1ab5e20();
   input += synapse0x1ab5e60();
   input += synapse0x1ab5ea0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab5630() {
   double input = input0x1ab5630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab5ee0() {
   double input = 0.135145;
   input += synapse0x1ab6220();
   input += synapse0x1ab6260();
   input += synapse0x1ab62a0();
   input += synapse0x1ab62e0();
   input += synapse0x1ab6320();
   input += synapse0x1ab6360();
   input += synapse0x1ab63a0();
   input += synapse0x1ab63e0();
   input += synapse0x1ab6420();
   input += synapse0x1ab6460();
   input += synapse0x1ab64a0();
   input += synapse0x1ab64e0();
   input += synapse0x1ab6520();
   input += synapse0x1ab6560();
   input += synapse0x1ab65a0();
   input += synapse0x1ab65e0();
   input += synapse0x1ab6070();
   input += synapse0x1ab60b0();
   input += synapse0x1ab6730();
   input += synapse0x1ab6770();
   input += synapse0x1ab67b0();
   input += synapse0x1ab67f0();
   input += synapse0x1ab6830();
   input += synapse0x1ab6870();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab5ee0() {
   double input = input0x1ab5ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab68b0() {
   double input = 0.53093;
   input += synapse0x1ab6bf0();
   input += synapse0x1ab6c30();
   input += synapse0x1ab6c70();
   input += synapse0x1ab6cb0();
   input += synapse0x1ab6cf0();
   input += synapse0x1ab6d30();
   input += synapse0x1ab6d70();
   input += synapse0x1ab6db0();
   input += synapse0x1ab6df0();
   input += synapse0x1ab6e30();
   input += synapse0x1ab6e70();
   input += synapse0x1ab6eb0();
   input += synapse0x1ab6ef0();
   input += synapse0x1ab6f30();
   input += synapse0x1ab6f70();
   input += synapse0x1ab6fb0();
   input += synapse0x1ab6a40();
   input += synapse0x1ab6a80();
   input += synapse0x1ab7100();
   input += synapse0x1ab7140();
   input += synapse0x1ab7180();
   input += synapse0x1ab71c0();
   input += synapse0x1ab7200();
   input += synapse0x1ab7240();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab68b0() {
   double input = input0x1ab68b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ab7280() {
   double input = -0.909232;
   input += synapse0x1ab75c0();
   input += synapse0x1ab7600();
   input += synapse0x1ab7640();
   input += synapse0x1ab7680();
   input += synapse0x1ab76c0();
   input += synapse0x1ab7700();
   input += synapse0x1ab7740();
   input += synapse0x1ab7780();
   input += synapse0x1ab77c0();
   input += synapse0x1ab7800();
   input += synapse0x1ab7840();
   input += synapse0x1ab7880();
   input += synapse0x1ab78c0();
   input += synapse0x1ab7900();
   input += synapse0x1ab7940();
   input += synapse0x1ab7980();
   input += synapse0x1ab7410();
   input += synapse0x1ab7450();
   input += synapse0x1ab7ad0();
   input += synapse0x1ab7b10();
   input += synapse0x1ab7b50();
   input += synapse0x1ab7b90();
   input += synapse0x1ab7bd0();
   input += synapse0x1ab7c10();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ab7280() {
   double input = input0x1ab7280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1abe480() {
   double input = 0.0401226;
   input += synapse0x1a941a0();
   input += synapse0x1a941e0();
   input += synapse0x1a956c0();
   input += synapse0x1a95700();
   input += synapse0x1a96090();
   input += synapse0x1a960d0();
   input += synapse0x1a96e60();
   input += synapse0x1a96ea0();
   input += synapse0x1a97830();
   input += synapse0x1a97870();
   input += synapse0x1a98200();
   input += synapse0x1a98240();
   input += synapse0x1a98ce0();
   input += synapse0x1a98d20();
   input += synapse0x1a996b0();
   input += synapse0x1a996f0();
   input += synapse0x1a96790();
   input += synapse0x1a967d0();
   input += synapse0x1a9b260();
   input += synapse0x1a9b2a0();
   input += synapse0x1a9bc30();
   input += synapse0x1a9bc70();
   input += synapse0x1a9c600();
   input += synapse0x1a9c640();
   input += synapse0x1a9cfd0();
   input += synapse0x1a9d010();
   input += synapse0x1a911b0();
   input += synapse0x1a911f0();
   input += synapse0x1a9f0c0();
   input += synapse0x1a9f100();
   input += synapse0x1a9fa90();
   input += synapse0x1a9fad0();
   input += synapse0x1aa0460();
   input += synapse0x1aa04a0();
   input += synapse0x1aa0e30();
   input += synapse0x1aa0e70();
   input += synapse0x1aa1800();
   input += synapse0x1aa1840();
   input += synapse0x1a9a350();
   input += synapse0x1a9a390();
   input += synapse0x1aa3c00();
   input += synapse0x1aa3c40();
   input += synapse0x1aa4590();
   input += synapse0x1aa45d0();
   input += synapse0x1aa4f60();
   input += synapse0x1aa4fa0();
   input += synapse0x1aa5930();
   input += synapse0x1aa5970();
   input += synapse0x1aa6300();
   input += synapse0x1aa6340();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1abe480() {
   double input = input0x1abe480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1abe820() {
   double input = -0.0190672;
   input += synapse0x1aa8a40();
   input += synapse0x1aa8a80();
   input += synapse0x1a9e000();
   input += synapse0x1a9e040();
   input += synapse0x1aab620();
   input += synapse0x1aab660();
   input += synapse0x1aabff0();
   input += synapse0x1aac030();
   input += synapse0x1aac9c0();
   input += synapse0x1aaca00();
   input += synapse0x1aad390();
   input += synapse0x1aad3d0();
   input += synapse0x1aadd60();
   input += synapse0x1aadda0();
   input += synapse0x1aae730();
   input += synapse0x1aae770();
   input += synapse0x1aaf100();
   input += synapse0x1aaf140();
   input += synapse0x1aafad0();
   input += synapse0x1aafb10();
   input += synapse0x1ab06b0();
   input += synapse0x1ab06f0();
   input += synapse0x1ab1080();
   input += synapse0x1ab10c0();
   input += synapse0x1aa1f00();
   input += synapse0x1aa1f40();
   input += synapse0x1aa28d0();
   input += synapse0x1aa2910();
   input += synapse0x1aa32a0();
   input += synapse0x1aa32e0();
   input += synapse0x1ab57c0();
   input += synapse0x1ab5800();
   input += synapse0x1ab6190();
   input += synapse0x1ab61d0();
   input += synapse0x1ab6b60();
   input += synapse0x1ab6ba0();
   input += synapse0x1ab7530();
   input += synapse0x1ab7570();
   input += synapse0x1a93460();
   input += synapse0x1a934a0();
   input += synapse0x1aa6cd0();
   input += synapse0x1aa6d10();
   input += synapse0x1ab7c50();
   input += synapse0x1ab7c90();
   input += synapse0x1ab7cd0();
   input += synapse0x1ab7d10();
   input += synapse0x1abebc0();
   input += synapse0x1abec00();
   input += synapse0x1abec40();
   input += synapse0x1abec80();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1abe820() {
   double input = input0x1abe820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1abecc0() {
   double input = -0.0386918;
   input += synapse0x1abf000();
   input += synapse0x1abf040();
   input += synapse0x1abf080();
   input += synapse0x1abf0c0();
   input += synapse0x1abf100();
   input += synapse0x1abf140();
   input += synapse0x1abf180();
   input += synapse0x1abf1c0();
   input += synapse0x1abf200();
   input += synapse0x1abf240();
   input += synapse0x1abf280();
   input += synapse0x1abf2c0();
   input += synapse0x1abf300();
   input += synapse0x1abf340();
   input += synapse0x1abf380();
   input += synapse0x1abf3c0();
   input += synapse0x1abee50();
   input += synapse0x1abee90();
   input += synapse0x1abf510();
   input += synapse0x1abf550();
   input += synapse0x1abf590();
   input += synapse0x1abf5d0();
   input += synapse0x1abf610();
   input += synapse0x1abf650();
   input += synapse0x1abf690();
   input += synapse0x1abf6d0();
   input += synapse0x1abf710();
   input += synapse0x1abf750();
   input += synapse0x1abf790();
   input += synapse0x1abf7d0();
   input += synapse0x1abf810();
   input += synapse0x1abf850();
   input += synapse0x1abf400();
   input += synapse0x1abf440();
   input += synapse0x1abf480();
   input += synapse0x1abf4c0();
   input += synapse0x1abfaa0();
   input += synapse0x1abfae0();
   input += synapse0x1abfb20();
   input += synapse0x1abfb60();
   input += synapse0x1abfba0();
   input += synapse0x1abfbe0();
   input += synapse0x1abfc20();
   input += synapse0x1abfc60();
   input += synapse0x1abfca0();
   input += synapse0x1abfce0();
   input += synapse0x1abfd20();
   input += synapse0x1abfd60();
   input += synapse0x1abfda0();
   input += synapse0x1abfde0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1abecc0() {
   double input = input0x1abecc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1abfe20() {
   double input = -0.0577799;
   input += synapse0x1ac0160();
   input += synapse0x1ac01a0();
   input += synapse0x1ac01e0();
   input += synapse0x1ac0220();
   input += synapse0x1ac0260();
   input += synapse0x1ac02a0();
   input += synapse0x1ac02e0();
   input += synapse0x1ac0320();
   input += synapse0x1ac0360();
   input += synapse0x1ac03a0();
   input += synapse0x1ac03e0();
   input += synapse0x1ac0420();
   input += synapse0x1ac0460();
   input += synapse0x1ac04a0();
   input += synapse0x1ac04e0();
   input += synapse0x1ac0520();
   input += synapse0x1abffb0();
   input += synapse0x1abfff0();
   input += synapse0x1ac0670();
   input += synapse0x1ac06b0();
   input += synapse0x1ac06f0();
   input += synapse0x1ac0730();
   input += synapse0x1ac0770();
   input += synapse0x1ac07b0();
   input += synapse0x1ac07f0();
   input += synapse0x1ac0830();
   input += synapse0x1ac0870();
   input += synapse0x1ac08b0();
   input += synapse0x1ac08f0();
   input += synapse0x1ac0930();
   input += synapse0x1ac0970();
   input += synapse0x1ac09b0();
   input += synapse0x1ac0560();
   input += synapse0x1ac05a0();
   input += synapse0x1ac05e0();
   input += synapse0x1ac0620();
   input += synapse0x1ac0c00();
   input += synapse0x1ac0c40();
   input += synapse0x1ac0c80();
   input += synapse0x1ac0cc0();
   input += synapse0x1ac0d00();
   input += synapse0x1ac0d40();
   input += synapse0x1ac0d80();
   input += synapse0x1ac0dc0();
   input += synapse0x1ac0e00();
   input += synapse0x1ac0e40();
   input += synapse0x1ac0e80();
   input += synapse0x1ac0ec0();
   input += synapse0x1ac0f00();
   input += synapse0x1ac0f40();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1abfe20() {
   double input = input0x1abfe20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac0f80() {
   double input = 0.474088;
   input += synapse0x1ac12c0();
   input += synapse0x1ac1300();
   input += synapse0x1ac1340();
   input += synapse0x1ac1380();
   input += synapse0x1ac13c0();
   input += synapse0x1ac1400();
   input += synapse0x1ac1440();
   input += synapse0x1ac1480();
   input += synapse0x1ac14c0();
   input += synapse0x1ac1500();
   input += synapse0x1ac1540();
   input += synapse0x1ac1580();
   input += synapse0x1ac15c0();
   input += synapse0x1ac1600();
   input += synapse0x1ac1640();
   input += synapse0x1ac1680();
   input += synapse0x1ac1110();
   input += synapse0x1ac1150();
   input += synapse0x1ac17d0();
   input += synapse0x1ac1810();
   input += synapse0x1ac1850();
   input += synapse0x1ac1890();
   input += synapse0x1ac18d0();
   input += synapse0x1ac1910();
   input += synapse0x1ac1950();
   input += synapse0x1ac1990();
   input += synapse0x1ac19d0();
   input += synapse0x1ac1a10();
   input += synapse0x1ac1a50();
   input += synapse0x1ac1a90();
   input += synapse0x1ac1ad0();
   input += synapse0x1ac1b10();
   input += synapse0x1ac16c0();
   input += synapse0x1ac1700();
   input += synapse0x1ac1740();
   input += synapse0x1ac1780();
   input += synapse0x1ac1d60();
   input += synapse0x1ac1da0();
   input += synapse0x1ac1de0();
   input += synapse0x1ac1e20();
   input += synapse0x1ac1e60();
   input += synapse0x1ac1ea0();
   input += synapse0x1ac1ee0();
   input += synapse0x1ac1f20();
   input += synapse0x1ac1f60();
   input += synapse0x1ac1fa0();
   input += synapse0x1ac1fe0();
   input += synapse0x1ac2020();
   input += synapse0x1ac2060();
   input += synapse0x1ac20a0();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac0f80() {
   double input = input0x1ac0f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLsR::input0x1ac20e0() {
   double input = 5.0889;
   input += synapse0x1ac2300();
   input += synapse0x1ac2340();
   input += synapse0x1ac2380();
   input += synapse0x1ac23c0();
   input += synapse0x1ac2400();
   return input;
}

double NNfunction_ss_uLsR::neuron0x1ac20e0() {
   double input = input0x1ac20e0();
   return (input * 1)+0;
}

double NNfunction_ss_uLsR::synapse0x1a8e220() {
   return (neuron0x1a8e2a0()*0.05841);
}

double NNfunction_ss_uLsR::synapse0x1a8e260() {
   return (neuron0x1a8e550()*0.0424373);
}

double NNfunction_ss_uLsR::synapse0x1a934f0() {
   return (neuron0x1a8e890()*0.205041);
}

double NNfunction_ss_uLsR::synapse0x1a93530() {
   return (neuron0x1a8ebd0()*-0.0685189);
}

double NNfunction_ss_uLsR::synapse0x1a93570() {
   return (neuron0x1a8ef10()*0.0154815);
}

double NNfunction_ss_uLsR::synapse0x1a935b0() {
   return (neuron0x1a8f250()*-0.101236);
}

double NNfunction_ss_uLsR::synapse0x1a935f0() {
   return (neuron0x1a8f590()*-0.0267187);
}

double NNfunction_ss_uLsR::synapse0x1a93630() {
   return (neuron0x1a8f8d0()*0.00352038);
}

double NNfunction_ss_uLsR::synapse0x1a93670() {
   return (neuron0x1a8fc10()*-0.0642814);
}

double NNfunction_ss_uLsR::synapse0x1a936b0() {
   return (neuron0x1a8ff50()*-0.00449416);
}

double NNfunction_ss_uLsR::synapse0x1a936f0() {
   return (neuron0x1a90290()*-0.0288914);
}

double NNfunction_ss_uLsR::synapse0x1a93730() {
   return (neuron0x1a905d0()*0.277391);
}

double NNfunction_ss_uLsR::synapse0x1a93770() {
   return (neuron0x1a90910()*-0.00761734);
}

double NNfunction_ss_uLsR::synapse0x1a937b0() {
   return (neuron0x1a90c50()*-0.0398818);
}

double NNfunction_ss_uLsR::synapse0x1a937f0() {
   return (neuron0x1a90f90()*-0.0193398);
}

double NNfunction_ss_uLsR::synapse0x1a93830() {
   return (neuron0x1a912d0()*-0.0206353);
}

double NNfunction_ss_uLsR::synapse0x1a8e190() {
   return (neuron0x1a91610()*-0.0376998);
}

double NNfunction_ss_uLsR::synapse0x1a8e1d0() {
   return (neuron0x1a91b70()*-0.0320373);
}

double NNfunction_ss_uLsR::synapse0x1849360() {
   return (neuron0x1a91d90()*-0.0737389);
}

double NNfunction_ss_uLsR::synapse0x18493a0() {
   return (neuron0x1a920d0()*0.0558103);
}

double NNfunction_ss_uLsR::synapse0x1a93a90() {
   return (neuron0x1a92410()*-0.0342083);
}

double NNfunction_ss_uLsR::synapse0x1a93ad0() {
   return (neuron0x1a92750()*0.137394);
}

double NNfunction_ss_uLsR::synapse0x1a93b10() {
   return (neuron0x1a92a90()*-0.0313243);
}

double NNfunction_ss_uLsR::synapse0x1a93b50() {
   return (neuron0x1a92dd0()*0.116003);
}

double NNfunction_ss_uLsR::synapse0x1a93ed0() {
   return (neuron0x1a8e2a0()*-0.317907);
}

double NNfunction_ss_uLsR::synapse0x1a93f10() {
   return (neuron0x1a8e550()*-0.38742);
}

double NNfunction_ss_uLsR::synapse0x1a93f50() {
   return (neuron0x1a8e890()*0.17245);
}

double NNfunction_ss_uLsR::synapse0x1a93f90() {
   return (neuron0x1a8ebd0()*0.0722504);
}

double NNfunction_ss_uLsR::synapse0x1a93fd0() {
   return (neuron0x1a8ef10()*-0.15121);
}

double NNfunction_ss_uLsR::synapse0x1a94010() {
   return (neuron0x1a8f250()*0.454252);
}

double NNfunction_ss_uLsR::synapse0x1a94050() {
   return (neuron0x1a8f590()*0.273879);
}

double NNfunction_ss_uLsR::synapse0x1a94090() {
   return (neuron0x1a8f8d0()*0.135284);
}

double NNfunction_ss_uLsR::synapse0x1a940d0() {
   return (neuron0x1a8fc10()*0.288686);
}

double NNfunction_ss_uLsR::synapse0x1a93980() {
   return (neuron0x1a8ff50()*-0.590438);
}

double NNfunction_ss_uLsR::synapse0x1a939c0() {
   return (neuron0x1a90290()*0.196069);
}

double NNfunction_ss_uLsR::synapse0x1a93a00() {
   return (neuron0x1a905d0()*1.13916);
}

double NNfunction_ss_uLsR::synapse0x1a93a40() {
   return (neuron0x1a90910()*0.00546091);
}

double NNfunction_ss_uLsR::synapse0x1a94320() {
   return (neuron0x1a90c50()*0.705729);
}

double NNfunction_ss_uLsR::synapse0x1a94360() {
   return (neuron0x1a90f90()*-0.449568);
}

double NNfunction_ss_uLsR::synapse0x1a943a0() {
   return (neuron0x1a912d0()*0.392808);
}

double NNfunction_ss_uLsR::synapse0x1a93d20() {
   return (neuron0x1a91610()*0.71411);
}

double NNfunction_ss_uLsR::synapse0x1a93d60() {
   return (neuron0x1a91b70()*-0.580287);
}

double NNfunction_ss_uLsR::synapse0x1a944f0() {
   return (neuron0x1a91d90()*-0.0717753);
}

double NNfunction_ss_uLsR::synapse0x1a94530() {
   return (neuron0x1a920d0()*0.0500665);
}

double NNfunction_ss_uLsR::synapse0x1a94570() {
   return (neuron0x1a92410()*-0.326807);
}

double NNfunction_ss_uLsR::synapse0x1a945b0() {
   return (neuron0x1a92750()*-0.0032221);
}

double NNfunction_ss_uLsR::synapse0x1a945f0() {
   return (neuron0x1a92a90()*1.10838);
}

double NNfunction_ss_uLsR::synapse0x1a94630() {
   return (neuron0x1a92dd0()*-0.148814);
}

double NNfunction_ss_uLsR::synapse0x1a949b0() {
   return (neuron0x1a8e2a0()*-0.36207);
}

double NNfunction_ss_uLsR::synapse0x1a949f0() {
   return (neuron0x1a8e550()*-0.21316);
}

double NNfunction_ss_uLsR::synapse0x1a94a30() {
   return (neuron0x1a8e890()*-0.35211);
}

double NNfunction_ss_uLsR::synapse0x1a94a70() {
   return (neuron0x1a8ebd0()*-0.553282);
}

double NNfunction_ss_uLsR::synapse0x1a94ab0() {
   return (neuron0x1a8ef10()*0.0625504);
}

double NNfunction_ss_uLsR::synapse0x1a94af0() {
   return (neuron0x1a8f250()*-0.763861);
}

double NNfunction_ss_uLsR::synapse0x1a94b30() {
   return (neuron0x1a8f590()*0.329089);
}

double NNfunction_ss_uLsR::synapse0x1a94b70() {
   return (neuron0x1a8f8d0()*-0.159325);
}

double NNfunction_ss_uLsR::synapse0x1a94bb0() {
   return (neuron0x1a8fc10()*0.445649);
}

double NNfunction_ss_uLsR::synapse0x1a94bf0() {
   return (neuron0x1a8ff50()*0.541848);
}

double NNfunction_ss_uLsR::synapse0x1a94c30() {
   return (neuron0x1a90290()*-0.365767);
}

double NNfunction_ss_uLsR::synapse0x1a94c70() {
   return (neuron0x1a905d0()*-0.408485);
}

double NNfunction_ss_uLsR::synapse0x1a94cb0() {
   return (neuron0x1a90910()*-0.904916);
}

double NNfunction_ss_uLsR::synapse0x1a94cf0() {
   return (neuron0x1a90c50()*-0.0871789);
}

double NNfunction_ss_uLsR::synapse0x1a94d30() {
   return (neuron0x1a90f90()*-0.0302585);
}

double NNfunction_ss_uLsR::synapse0x1a94d70() {
   return (neuron0x1a912d0()*0.251222);
}

double NNfunction_ss_uLsR::synapse0x1a94800() {
   return (neuron0x1a91610()*0.56524);
}

double NNfunction_ss_uLsR::synapse0x1a94840() {
   return (neuron0x1a91b70()*0.332895);
}

double NNfunction_ss_uLsR::synapse0x1a7d310() {
   return (neuron0x1a91d90()*-0.253533);
}

double NNfunction_ss_uLsR::synapse0x1857260() {
   return (neuron0x1a920d0()*1.13941);
}

double NNfunction_ss_uLsR::synapse0x18572a0() {
   return (neuron0x1a92410()*0.206326);
}

double NNfunction_ss_uLsR::synapse0x19727b0() {
   return (neuron0x1a92750()*-0.131872);
}

double NNfunction_ss_uLsR::synapse0x19727f0() {
   return (neuron0x1a92a90()*0.0162617);
}

double NNfunction_ss_uLsR::synapse0x1a8e000() {
   return (neuron0x1a92dd0()*0.0400397);
}

double NNfunction_ss_uLsR::synapse0x1857b50() {
   return (neuron0x1a8e2a0()*-0.0128308);
}

double NNfunction_ss_uLsR::synapse0x1a94230() {
   return (neuron0x1a8e550()*0.00230841);
}

double NNfunction_ss_uLsR::synapse0x1a94270() {
   return (neuron0x1a8e890()*0.0135837);
}

double NNfunction_ss_uLsR::synapse0x1a942b0() {
   return (neuron0x1a8ebd0()*-0.0468641);
}

double NNfunction_ss_uLsR::synapse0x1a94ec0() {
   return (neuron0x1a8ef10()*0.0057622);
}

double NNfunction_ss_uLsR::synapse0x1a94f00() {
   return (neuron0x1a8f250()*-0.00999682);
}

double NNfunction_ss_uLsR::synapse0x1a94f40() {
   return (neuron0x1a8f590()*0.012957);
}

double NNfunction_ss_uLsR::synapse0x1a94f80() {
   return (neuron0x1a8f8d0()*-0.000866715);
}

double NNfunction_ss_uLsR::synapse0x1a94fc0() {
   return (neuron0x1a8fc10()*-0.0117396);
}

double NNfunction_ss_uLsR::synapse0x1a95000() {
   return (neuron0x1a8ff50()*0.120661);
}

double NNfunction_ss_uLsR::synapse0x1a95040() {
   return (neuron0x1a90290()*-0.0211009);
}

double NNfunction_ss_uLsR::synapse0x1a95080() {
   return (neuron0x1a905d0()*0.352824);
}

double NNfunction_ss_uLsR::synapse0x1a950c0() {
   return (neuron0x1a90910()*-0.0104504);
}

double NNfunction_ss_uLsR::synapse0x1a95100() {
   return (neuron0x1a90c50()*0.00834674);
}

double NNfunction_ss_uLsR::synapse0x1a95140() {
   return (neuron0x1a90f90()*0.0297965);
}

double NNfunction_ss_uLsR::synapse0x1a95180() {
   return (neuron0x1a912d0()*0.0179824);
}

double NNfunction_ss_uLsR::synapse0x1a8e040() {
   return (neuron0x1a91610()*-0.021105);
}

double NNfunction_ss_uLsR::synapse0x1a8e080() {
   return (neuron0x1a91b70()*0.0141553);
}

double NNfunction_ss_uLsR::synapse0x1a8e0c0() {
   return (neuron0x1a91d90()*0.174703);
}

double NNfunction_ss_uLsR::synapse0x1a952d0() {
   return (neuron0x1a920d0()*-0.00520482);
}

double NNfunction_ss_uLsR::synapse0x1a95310() {
   return (neuron0x1a92410()*0.00664672);
}

double NNfunction_ss_uLsR::synapse0x1a95350() {
   return (neuron0x1a92750()*-0.00106961);
}

double NNfunction_ss_uLsR::synapse0x1a95390() {
   return (neuron0x1a92a90()*0.0039392);
}

double NNfunction_ss_uLsR::synapse0x1a953d0() {
   return (neuron0x1a92dd0()*0.0207438);
}

double NNfunction_ss_uLsR::synapse0x1a95750() {
   return (neuron0x1a8e2a0()*0.0025447);
}

double NNfunction_ss_uLsR::synapse0x1a95790() {
   return (neuron0x1a8e550()*0.113598);
}

double NNfunction_ss_uLsR::synapse0x1a957d0() {
   return (neuron0x1a8e890()*0.561217);
}

double NNfunction_ss_uLsR::synapse0x1a95810() {
   return (neuron0x1a8ebd0()*-0.305626);
}

double NNfunction_ss_uLsR::synapse0x1a95850() {
   return (neuron0x1a8ef10()*-0.31884);
}

double NNfunction_ss_uLsR::synapse0x1a95890() {
   return (neuron0x1a8f250()*0.150969);
}

double NNfunction_ss_uLsR::synapse0x1a958d0() {
   return (neuron0x1a8f590()*0.112976);
}

double NNfunction_ss_uLsR::synapse0x1a95910() {
   return (neuron0x1a8f8d0()*-0.230542);
}

double NNfunction_ss_uLsR::synapse0x1a95950() {
   return (neuron0x1a8fc10()*-0.165692);
}

double NNfunction_ss_uLsR::synapse0x1a95990() {
   return (neuron0x1a8ff50()*-0.110445);
}

double NNfunction_ss_uLsR::synapse0x1a959d0() {
   return (neuron0x1a90290()*0.198021);
}

double NNfunction_ss_uLsR::synapse0x1a95a10() {
   return (neuron0x1a905d0()*0.752619);
}

double NNfunction_ss_uLsR::synapse0x1a95a50() {
   return (neuron0x1a90910()*-0.678346);
}

double NNfunction_ss_uLsR::synapse0x1a95a90() {
   return (neuron0x1a90c50()*0.662752);
}

double NNfunction_ss_uLsR::synapse0x1a95ad0() {
   return (neuron0x1a90f90()*0.132425);
}

double NNfunction_ss_uLsR::synapse0x1a95b10() {
   return (neuron0x1a912d0()*0.423346);
}

double NNfunction_ss_uLsR::synapse0x1a955a0() {
   return (neuron0x1a91610()*0.319635);
}

double NNfunction_ss_uLsR::synapse0x1a955e0() {
   return (neuron0x1a91b70()*-0.0520664);
}

double NNfunction_ss_uLsR::synapse0x1a95c60() {
   return (neuron0x1a91d90()*0.600678);
}

double NNfunction_ss_uLsR::synapse0x1a95ca0() {
   return (neuron0x1a920d0()*0.125618);
}

double NNfunction_ss_uLsR::synapse0x1a95ce0() {
   return (neuron0x1a92410()*0.270065);
}

double NNfunction_ss_uLsR::synapse0x1a95d20() {
   return (neuron0x1a92750()*0.0282035);
}

double NNfunction_ss_uLsR::synapse0x1a95d60() {
   return (neuron0x1a92a90()*-0.115168);
}

double NNfunction_ss_uLsR::synapse0x1a95da0() {
   return (neuron0x1a92dd0()*0.529873);
}

double NNfunction_ss_uLsR::synapse0x1a96120() {
   return (neuron0x1a8e2a0()*0.185745);
}

double NNfunction_ss_uLsR::synapse0x1a96160() {
   return (neuron0x1a8e550()*0.054962);
}

double NNfunction_ss_uLsR::synapse0x1a961a0() {
   return (neuron0x1a8e890()*-0.351736);
}

double NNfunction_ss_uLsR::synapse0x1a961e0() {
   return (neuron0x1a8ebd0()*0.471394);
}

double NNfunction_ss_uLsR::synapse0x1a96220() {
   return (neuron0x1a8ef10()*-0.0215067);
}

double NNfunction_ss_uLsR::synapse0x1a96260() {
   return (neuron0x1a8f250()*-0.270669);
}

double NNfunction_ss_uLsR::synapse0x1a962a0() {
   return (neuron0x1a8f590()*-0.165011);
}

double NNfunction_ss_uLsR::synapse0x1a962e0() {
   return (neuron0x1a8f8d0()*0.0353983);
}

double NNfunction_ss_uLsR::synapse0x1a96320() {
   return (neuron0x1a8fc10()*0.122794);
}

double NNfunction_ss_uLsR::synapse0x18575b0() {
   return (neuron0x1a8ff50()*0.0811462);
}

double NNfunction_ss_uLsR::synapse0x18575f0() {
   return (neuron0x1a90290()*-0.380502);
}

double NNfunction_ss_uLsR::synapse0x1857630() {
   return (neuron0x1a905d0()*0.0120058);
}

double NNfunction_ss_uLsR::synapse0x1857670() {
   return (neuron0x1a90910()*0.108972);
}

double NNfunction_ss_uLsR::synapse0x18576b0() {
   return (neuron0x1a90c50()*0.152883);
}

double NNfunction_ss_uLsR::synapse0x18576f0() {
   return (neuron0x1a90f90()*0.583084);
}

double NNfunction_ss_uLsR::synapse0x1857730() {
   return (neuron0x1a912d0()*0.14501);
}

double NNfunction_ss_uLsR::synapse0x1a95f70() {
   return (neuron0x1a91610()*0.0867413);
}

double NNfunction_ss_uLsR::synapse0x1a95fb0() {
   return (neuron0x1a91b70()*-0.183429);
}

double NNfunction_ss_uLsR::synapse0x1857880() {
   return (neuron0x1a91d90()*-0.305064);
}

double NNfunction_ss_uLsR::synapse0x18578c0() {
   return (neuron0x1a920d0()*0.0684723);
}

double NNfunction_ss_uLsR::synapse0x1857900() {
   return (neuron0x1a92410()*-0.0431828);
}

double NNfunction_ss_uLsR::synapse0x1857940() {
   return (neuron0x1a92750()*0.255524);
}

double NNfunction_ss_uLsR::synapse0x1857980() {
   return (neuron0x1a92a90()*0.215093);
}

double NNfunction_ss_uLsR::synapse0x1a96b70() {
   return (neuron0x1a92dd0()*0.0841544);
}

double NNfunction_ss_uLsR::synapse0x1a96ef0() {
   return (neuron0x1a8e2a0()*0.014389);
}

double NNfunction_ss_uLsR::synapse0x1a96f30() {
   return (neuron0x1a8e550()*-0.0405905);
}

double NNfunction_ss_uLsR::synapse0x1a96f70() {
   return (neuron0x1a8e890()*-0.0884088);
}

double NNfunction_ss_uLsR::synapse0x1a96fb0() {
   return (neuron0x1a8ebd0()*-0.121904);
}

double NNfunction_ss_uLsR::synapse0x1a96ff0() {
   return (neuron0x1a8ef10()*0.0354527);
}

double NNfunction_ss_uLsR::synapse0x1a97030() {
   return (neuron0x1a8f250()*0.103276);
}

double NNfunction_ss_uLsR::synapse0x1a97070() {
   return (neuron0x1a8f590()*0.0117079);
}

double NNfunction_ss_uLsR::synapse0x1a970b0() {
   return (neuron0x1a8f8d0()*0.0690711);
}

double NNfunction_ss_uLsR::synapse0x1a970f0() {
   return (neuron0x1a8fc10()*0.185672);
}

double NNfunction_ss_uLsR::synapse0x1a97130() {
   return (neuron0x1a8ff50()*0.134523);
}

double NNfunction_ss_uLsR::synapse0x1a97170() {
   return (neuron0x1a90290()*0.0608588);
}

double NNfunction_ss_uLsR::synapse0x1a971b0() {
   return (neuron0x1a905d0()*-0.938129);
}

double NNfunction_ss_uLsR::synapse0x1a971f0() {
   return (neuron0x1a90910()*0.038178);
}

double NNfunction_ss_uLsR::synapse0x1a97230() {
   return (neuron0x1a90c50()*-0.04063);
}

double NNfunction_ss_uLsR::synapse0x1a97270() {
   return (neuron0x1a90f90()*-0.0231387);
}

double NNfunction_ss_uLsR::synapse0x1a972b0() {
   return (neuron0x1a912d0()*-0.00851423);
}

double NNfunction_ss_uLsR::synapse0x1a96d40() {
   return (neuron0x1a91610()*-0.00236191);
}

double NNfunction_ss_uLsR::synapse0x1a96d80() {
   return (neuron0x1a91b70()*-0.0127441);
}

double NNfunction_ss_uLsR::synapse0x1a97400() {
   return (neuron0x1a91d90()*1.22117);
}

double NNfunction_ss_uLsR::synapse0x1a97440() {
   return (neuron0x1a920d0()*-0.0530997);
}

double NNfunction_ss_uLsR::synapse0x1a97480() {
   return (neuron0x1a92410()*-0.0254574);
}

double NNfunction_ss_uLsR::synapse0x1a974c0() {
   return (neuron0x1a92750()*-0.0446112);
}

double NNfunction_ss_uLsR::synapse0x1a97500() {
   return (neuron0x1a92a90()*0.0894094);
}

double NNfunction_ss_uLsR::synapse0x1a97540() {
   return (neuron0x1a92dd0()*-0.0633932);
}

double NNfunction_ss_uLsR::synapse0x1a978c0() {
   return (neuron0x1a8e2a0()*-0.106035);
}

double NNfunction_ss_uLsR::synapse0x1a97900() {
   return (neuron0x1a8e550()*0.0968274);
}

double NNfunction_ss_uLsR::synapse0x1a97940() {
   return (neuron0x1a8e890()*-0.150742);
}

double NNfunction_ss_uLsR::synapse0x1a97980() {
   return (neuron0x1a8ebd0()*-0.491829);
}

double NNfunction_ss_uLsR::synapse0x1a979c0() {
   return (neuron0x1a8ef10()*0.160286);
}

double NNfunction_ss_uLsR::synapse0x1a97a00() {
   return (neuron0x1a8f250()*0.122755);
}

double NNfunction_ss_uLsR::synapse0x1a97a40() {
   return (neuron0x1a8f590()*0.00666261);
}

double NNfunction_ss_uLsR::synapse0x1a97a80() {
   return (neuron0x1a8f8d0()*0.304948);
}

double NNfunction_ss_uLsR::synapse0x1a97ac0() {
   return (neuron0x1a8fc10()*0.132821);
}

double NNfunction_ss_uLsR::synapse0x1a97b00() {
   return (neuron0x1a8ff50()*0.0189338);
}

double NNfunction_ss_uLsR::synapse0x1a97b40() {
   return (neuron0x1a90290()*-0.326419);
}

double NNfunction_ss_uLsR::synapse0x1a97b80() {
   return (neuron0x1a905d0()*0.553919);
}

double NNfunction_ss_uLsR::synapse0x1a97bc0() {
   return (neuron0x1a90910()*0.244905);
}

double NNfunction_ss_uLsR::synapse0x1a97c00() {
   return (neuron0x1a90c50()*0.337831);
}

double NNfunction_ss_uLsR::synapse0x1a97c40() {
   return (neuron0x1a90f90()*0.0823697);
}

double NNfunction_ss_uLsR::synapse0x1a97c80() {
   return (neuron0x1a912d0()*0.0390327);
}

double NNfunction_ss_uLsR::synapse0x1a97710() {
   return (neuron0x1a91610()*0.0382529);
}

double NNfunction_ss_uLsR::synapse0x1a97750() {
   return (neuron0x1a91b70()*0.310904);
}

double NNfunction_ss_uLsR::synapse0x1a97dd0() {
   return (neuron0x1a91d90()*-0.31281);
}

double NNfunction_ss_uLsR::synapse0x1a97e10() {
   return (neuron0x1a920d0()*-0.160198);
}

double NNfunction_ss_uLsR::synapse0x1a97e50() {
   return (neuron0x1a92410()*-0.0753466);
}

double NNfunction_ss_uLsR::synapse0x1a97e90() {
   return (neuron0x1a92750()*0.0264334);
}

double NNfunction_ss_uLsR::synapse0x1a97ed0() {
   return (neuron0x1a92a90()*0.0177049);
}

double NNfunction_ss_uLsR::synapse0x1a97f10() {
   return (neuron0x1a92dd0()*-0.107452);
}

double NNfunction_ss_uLsR::synapse0x1a91a60() {
   return (neuron0x1a8e2a0()*-0.0855789);
}

double NNfunction_ss_uLsR::synapse0x1a91aa0() {
   return (neuron0x1a8e550()*0.465609);
}

double NNfunction_ss_uLsR::synapse0x1a91ae0() {
   return (neuron0x1a8e890()*-0.214216);
}

double NNfunction_ss_uLsR::synapse0x1a91b20() {
   return (neuron0x1a8ebd0()*-2.80976);
}

double NNfunction_ss_uLsR::synapse0x1a984a0() {
   return (neuron0x1a8ef10()*0.0166924);
}

double NNfunction_ss_uLsR::synapse0x1a984e0() {
   return (neuron0x1a8f250()*0.475205);
}

double NNfunction_ss_uLsR::synapse0x1a98520() {
   return (neuron0x1a8f590()*0.4211);
}

double NNfunction_ss_uLsR::synapse0x1a98560() {
   return (neuron0x1a8f8d0()*1.41005);
}

double NNfunction_ss_uLsR::synapse0x1a985a0() {
   return (neuron0x1a8fc10()*-0.696672);
}

double NNfunction_ss_uLsR::synapse0x1a985e0() {
   return (neuron0x1a8ff50()*0.554962);
}

double NNfunction_ss_uLsR::synapse0x1a98620() {
   return (neuron0x1a90290()*0.909452);
}

double NNfunction_ss_uLsR::synapse0x1a98660() {
   return (neuron0x1a905d0()*-0.930771);
}

double NNfunction_ss_uLsR::synapse0x1a986a0() {
   return (neuron0x1a90910()*0.317077);
}

double NNfunction_ss_uLsR::synapse0x1a986e0() {
   return (neuron0x1a90c50()*-1.37712);
}

double NNfunction_ss_uLsR::synapse0x1a98720() {
   return (neuron0x1a90f90()*-0.373997);
}

double NNfunction_ss_uLsR::synapse0x1a98760() {
   return (neuron0x1a912d0()*0.906026);
}

double NNfunction_ss_uLsR::synapse0x1a980e0() {
   return (neuron0x1a91610()*0.438716);
}

double NNfunction_ss_uLsR::synapse0x1a98120() {
   return (neuron0x1a91b70()*0.837143);
}

double NNfunction_ss_uLsR::synapse0x1a988b0() {
   return (neuron0x1a91d90()*-0.802093);
}

double NNfunction_ss_uLsR::synapse0x1a988f0() {
   return (neuron0x1a920d0()*-0.103068);
}

double NNfunction_ss_uLsR::synapse0x1a98930() {
   return (neuron0x1a92410()*0.780053);
}

double NNfunction_ss_uLsR::synapse0x1a98970() {
   return (neuron0x1a92750()*0.195027);
}

double NNfunction_ss_uLsR::synapse0x1a989b0() {
   return (neuron0x1a92a90()*-0.309517);
}

double NNfunction_ss_uLsR::synapse0x1a989f0() {
   return (neuron0x1a92dd0()*-0.560872);
}

double NNfunction_ss_uLsR::synapse0x1a98d70() {
   return (neuron0x1a8e2a0()*0.090487);
}

double NNfunction_ss_uLsR::synapse0x1a98db0() {
   return (neuron0x1a8e550()*0.755886);
}

double NNfunction_ss_uLsR::synapse0x1a98df0() {
   return (neuron0x1a8e890()*-0.580142);
}

double NNfunction_ss_uLsR::synapse0x1a98e30() {
   return (neuron0x1a8ebd0()*-1.31288);
}

double NNfunction_ss_uLsR::synapse0x1a98e70() {
   return (neuron0x1a8ef10()*-0.636003);
}

double NNfunction_ss_uLsR::synapse0x1a98eb0() {
   return (neuron0x1a8f250()*0.203097);
}

double NNfunction_ss_uLsR::synapse0x1a98ef0() {
   return (neuron0x1a8f590()*0.528176);
}

double NNfunction_ss_uLsR::synapse0x1a98f30() {
   return (neuron0x1a8f8d0()*0.0754839);
}

double NNfunction_ss_uLsR::synapse0x1a98f70() {
   return (neuron0x1a8fc10()*-0.1431);
}

double NNfunction_ss_uLsR::synapse0x1a98fb0() {
   return (neuron0x1a8ff50()*0.157694);
}

double NNfunction_ss_uLsR::synapse0x1a98ff0() {
   return (neuron0x1a90290()*-0.124651);
}

double NNfunction_ss_uLsR::synapse0x1a99030() {
   return (neuron0x1a905d0()*-1.17107);
}

double NNfunction_ss_uLsR::synapse0x1a99070() {
   return (neuron0x1a90910()*0.645148);
}

double NNfunction_ss_uLsR::synapse0x1a990b0() {
   return (neuron0x1a90c50()*-0.792433);
}

double NNfunction_ss_uLsR::synapse0x1a990f0() {
   return (neuron0x1a90f90()*0.627031);
}

double NNfunction_ss_uLsR::synapse0x1a99130() {
   return (neuron0x1a912d0()*0.0717706);
}

double NNfunction_ss_uLsR::synapse0x1a98bc0() {
   return (neuron0x1a91610()*0.101239);
}

double NNfunction_ss_uLsR::synapse0x1a98c00() {
   return (neuron0x1a91b70()*0.105562);
}

double NNfunction_ss_uLsR::synapse0x1a99280() {
   return (neuron0x1a91d90()*0.087351);
}

double NNfunction_ss_uLsR::synapse0x1a992c0() {
   return (neuron0x1a920d0()*0.339246);
}

double NNfunction_ss_uLsR::synapse0x1a99300() {
   return (neuron0x1a92410()*-0.126534);
}

double NNfunction_ss_uLsR::synapse0x1a99340() {
   return (neuron0x1a92750()*-0.0510393);
}

double NNfunction_ss_uLsR::synapse0x1a99380() {
   return (neuron0x1a92a90()*0.0112047);
}

double NNfunction_ss_uLsR::synapse0x1a993c0() {
   return (neuron0x1a92dd0()*0.320879);
}

double NNfunction_ss_uLsR::synapse0x1a99740() {
   return (neuron0x1a8e2a0()*0.0263636);
}

double NNfunction_ss_uLsR::synapse0x1a99780() {
   return (neuron0x1a8e550()*0.525367);
}

double NNfunction_ss_uLsR::synapse0x1a997c0() {
   return (neuron0x1a8e890()*-0.986841);
}

double NNfunction_ss_uLsR::synapse0x1a99800() {
   return (neuron0x1a8ebd0()*0.455121);
}

double NNfunction_ss_uLsR::synapse0x1a99840() {
   return (neuron0x1a8ef10()*0.257337);
}

double NNfunction_ss_uLsR::synapse0x1a99880() {
   return (neuron0x1a8f250()*0.28343);
}

double NNfunction_ss_uLsR::synapse0x1a998c0() {
   return (neuron0x1a8f590()*-0.0288909);
}

double NNfunction_ss_uLsR::synapse0x1a99900() {
   return (neuron0x1a8f8d0()*0.685624);
}

double NNfunction_ss_uLsR::synapse0x1a99940() {
   return (neuron0x1a8fc10()*0.506701);
}

double NNfunction_ss_uLsR::synapse0x1a99980() {
   return (neuron0x1a8ff50()*0.908466);
}

double NNfunction_ss_uLsR::synapse0x1a999c0() {
   return (neuron0x1a90290()*0.680725);
}

double NNfunction_ss_uLsR::synapse0x1a99a00() {
   return (neuron0x1a905d0()*-0.686229);
}

double NNfunction_ss_uLsR::synapse0x1a99a40() {
   return (neuron0x1a90910()*-0.222574);
}

double NNfunction_ss_uLsR::synapse0x1a99a80() {
   return (neuron0x1a90c50()*0.127626);
}

double NNfunction_ss_uLsR::synapse0x1a99ac0() {
   return (neuron0x1a90f90()*-1.0032);
}

double NNfunction_ss_uLsR::synapse0x1a99b00() {
   return (neuron0x1a912d0()*0.145526);
}

double NNfunction_ss_uLsR::synapse0x1a99590() {
   return (neuron0x1a91610()*-0.335114);
}

double NNfunction_ss_uLsR::synapse0x1a995d0() {
   return (neuron0x1a91b70()*0.435371);
}

double NNfunction_ss_uLsR::synapse0x1a96360() {
   return (neuron0x1a91d90()*1.04922);
}

double NNfunction_ss_uLsR::synapse0x1a963a0() {
   return (neuron0x1a920d0()*-0.346606);
}

double NNfunction_ss_uLsR::synapse0x1a963e0() {
   return (neuron0x1a92410()*-0.117558);
}

double NNfunction_ss_uLsR::synapse0x1a96420() {
   return (neuron0x1a92750()*-0.69249);
}

double NNfunction_ss_uLsR::synapse0x1a96460() {
   return (neuron0x1a92a90()*0.632994);
}

double NNfunction_ss_uLsR::synapse0x1a964a0() {
   return (neuron0x1a92dd0()*0.209634);
}

double NNfunction_ss_uLsR::synapse0x1a96820() {
   return (neuron0x1a8e2a0()*-0.0262139);
}

double NNfunction_ss_uLsR::synapse0x1a96860() {
   return (neuron0x1a8e550()*0.0828699);
}

double NNfunction_ss_uLsR::synapse0x1a968a0() {
   return (neuron0x1a8e890()*-0.455786);
}

double NNfunction_ss_uLsR::synapse0x1a968e0() {
   return (neuron0x1a8ebd0()*0.552221);
}

double NNfunction_ss_uLsR::synapse0x1a96920() {
   return (neuron0x1a8ef10()*-0.0121223);
}

double NNfunction_ss_uLsR::synapse0x1a96960() {
   return (neuron0x1a8f250()*-0.0976793);
}

double NNfunction_ss_uLsR::synapse0x1a969a0() {
   return (neuron0x1a8f590()*0.00205383);
}

double NNfunction_ss_uLsR::synapse0x1a969e0() {
   return (neuron0x1a8f8d0()*0.0169524);
}

double NNfunction_ss_uLsR::synapse0x1a96a20() {
   return (neuron0x1a8fc10()*0.00194271);
}

double NNfunction_ss_uLsR::synapse0x1a96a60() {
   return (neuron0x1a8ff50()*-0.0196557);
}

double NNfunction_ss_uLsR::synapse0x1a96aa0() {
   return (neuron0x1a90290()*0.00373063);
}

double NNfunction_ss_uLsR::synapse0x1a96ae0() {
   return (neuron0x1a905d0()*-0.0566432);
}

double NNfunction_ss_uLsR::synapse0x1a96b20() {
   return (neuron0x1a90910()*-0.455539);
}

double NNfunction_ss_uLsR::synapse0x1a9ac60() {
   return (neuron0x1a90c50()*-0.0202394);
}

double NNfunction_ss_uLsR::synapse0x1a9aca0() {
   return (neuron0x1a90f90()*-0.264528);
}

double NNfunction_ss_uLsR::synapse0x1a9ace0() {
   return (neuron0x1a912d0()*-0.238161);
}

double NNfunction_ss_uLsR::synapse0x1a96670() {
   return (neuron0x1a91610()*0.0232634);
}

double NNfunction_ss_uLsR::synapse0x1a966b0() {
   return (neuron0x1a91b70()*-0.246043);
}

double NNfunction_ss_uLsR::synapse0x1a9ae30() {
   return (neuron0x1a91d90()*-0.018561);
}

double NNfunction_ss_uLsR::synapse0x1a9ae70() {
   return (neuron0x1a920d0()*0.0394538);
}

double NNfunction_ss_uLsR::synapse0x1a9aeb0() {
   return (neuron0x1a92410()*0.0283245);
}

double NNfunction_ss_uLsR::synapse0x1a9aef0() {
   return (neuron0x1a92750()*0.0470053);
}

double NNfunction_ss_uLsR::synapse0x1a9af30() {
   return (neuron0x1a92a90()*-0.0495508);
}

double NNfunction_ss_uLsR::synapse0x1a9af70() {
   return (neuron0x1a92dd0()*-0.033296);
}

double NNfunction_ss_uLsR::synapse0x1a9b2f0() {
   return (neuron0x1a8e2a0()*0.0604276);
}

double NNfunction_ss_uLsR::synapse0x1a9b330() {
   return (neuron0x1a8e550()*-0.00917267);
}

double NNfunction_ss_uLsR::synapse0x1a9b370() {
   return (neuron0x1a8e890()*0.0169135);
}

double NNfunction_ss_uLsR::synapse0x1a9b3b0() {
   return (neuron0x1a8ebd0()*-0.013308);
}

double NNfunction_ss_uLsR::synapse0x1a9b3f0() {
   return (neuron0x1a8ef10()*0.0265158);
}

double NNfunction_ss_uLsR::synapse0x1a9b430() {
   return (neuron0x1a8f250()*-0.115043);
}

double NNfunction_ss_uLsR::synapse0x1a9b470() {
   return (neuron0x1a8f590()*-0.0195672);
}

double NNfunction_ss_uLsR::synapse0x1a9b4b0() {
   return (neuron0x1a8f8d0()*0.0419031);
}

double NNfunction_ss_uLsR::synapse0x1a9b4f0() {
   return (neuron0x1a8fc10()*0.00112373);
}

double NNfunction_ss_uLsR::synapse0x1a9b530() {
   return (neuron0x1a8ff50()*-0.0435459);
}

double NNfunction_ss_uLsR::synapse0x1a9b570() {
   return (neuron0x1a90290()*0.0814332);
}

double NNfunction_ss_uLsR::synapse0x1a9b5b0() {
   return (neuron0x1a905d0()*0.144179);
}

double NNfunction_ss_uLsR::synapse0x1a9b5f0() {
   return (neuron0x1a90910()*0.102922);
}

double NNfunction_ss_uLsR::synapse0x1a9b630() {
   return (neuron0x1a90c50()*-0.0785734);
}

double NNfunction_ss_uLsR::synapse0x1a9b670() {
   return (neuron0x1a90f90()*0.0297132);
}

double NNfunction_ss_uLsR::synapse0x1a9b6b0() {
   return (neuron0x1a912d0()*-0.0062589);
}

double NNfunction_ss_uLsR::synapse0x1a9b140() {
   return (neuron0x1a91610()*-0.0589361);
}

double NNfunction_ss_uLsR::synapse0x1a9b180() {
   return (neuron0x1a91b70()*-0.0191971);
}

double NNfunction_ss_uLsR::synapse0x1a9b800() {
   return (neuron0x1a91d90()*0.140792);
}

double NNfunction_ss_uLsR::synapse0x1a9b840() {
   return (neuron0x1a920d0()*0.119854);
}

double NNfunction_ss_uLsR::synapse0x1a9b880() {
   return (neuron0x1a92410()*-0.0196658);
}

double NNfunction_ss_uLsR::synapse0x1a9b8c0() {
   return (neuron0x1a92750()*0.070719);
}

double NNfunction_ss_uLsR::synapse0x1a9b900() {
   return (neuron0x1a92a90()*-0.0404387);
}

double NNfunction_ss_uLsR::synapse0x1a9b940() {
   return (neuron0x1a92dd0()*0.0479634);
}

double NNfunction_ss_uLsR::synapse0x1a9bcc0() {
   return (neuron0x1a8e2a0()*-0.123093);
}

double NNfunction_ss_uLsR::synapse0x1a9bd00() {
   return (neuron0x1a8e550()*-0.0775339);
}

double NNfunction_ss_uLsR::synapse0x1a9bd40() {
   return (neuron0x1a8e890()*0.141316);
}

double NNfunction_ss_uLsR::synapse0x1a9bd80() {
   return (neuron0x1a8ebd0()*-0.0824004);
}

double NNfunction_ss_uLsR::synapse0x1a9bdc0() {
   return (neuron0x1a8ef10()*-0.670093);
}

double NNfunction_ss_uLsR::synapse0x1a9be00() {
   return (neuron0x1a8f250()*0.0274437);
}

double NNfunction_ss_uLsR::synapse0x1a9be40() {
   return (neuron0x1a8f590()*0.0777166);
}

double NNfunction_ss_uLsR::synapse0x1a9be80() {
   return (neuron0x1a8f8d0()*-0.0167849);
}

double NNfunction_ss_uLsR::synapse0x1a9bec0() {
   return (neuron0x1a8fc10()*0.247961);
}

double NNfunction_ss_uLsR::synapse0x1a9bf00() {
   return (neuron0x1a8ff50()*0.0779761);
}

double NNfunction_ss_uLsR::synapse0x1a9bf40() {
   return (neuron0x1a90290()*0.127664);
}

double NNfunction_ss_uLsR::synapse0x1a9bf80() {
   return (neuron0x1a905d0()*0.385122);
}

double NNfunction_ss_uLsR::synapse0x1a9bfc0() {
   return (neuron0x1a90910()*0.184681);
}

double NNfunction_ss_uLsR::synapse0x1a9c000() {
   return (neuron0x1a90c50()*0.607522);
}

double NNfunction_ss_uLsR::synapse0x1a9c040() {
   return (neuron0x1a90f90()*0.0843929);
}

double NNfunction_ss_uLsR::synapse0x1a9c080() {
   return (neuron0x1a912d0()*-0.0860559);
}

double NNfunction_ss_uLsR::synapse0x1a9bb10() {
   return (neuron0x1a91610()*0.120423);
}

double NNfunction_ss_uLsR::synapse0x1a9bb50() {
   return (neuron0x1a91b70()*-0.566665);
}

double NNfunction_ss_uLsR::synapse0x1a9c1d0() {
   return (neuron0x1a91d90()*-0.70011);
}

double NNfunction_ss_uLsR::synapse0x1a9c210() {
   return (neuron0x1a920d0()*-0.392836);
}

double NNfunction_ss_uLsR::synapse0x1a9c250() {
   return (neuron0x1a92410()*0.102138);
}

double NNfunction_ss_uLsR::synapse0x1a9c290() {
   return (neuron0x1a92750()*-0.608539);
}

double NNfunction_ss_uLsR::synapse0x1a9c2d0() {
   return (neuron0x1a92a90()*0.0150582);
}

double NNfunction_ss_uLsR::synapse0x1a9c310() {
   return (neuron0x1a92dd0()*0.461124);
}

double NNfunction_ss_uLsR::synapse0x1a9c690() {
   return (neuron0x1a8e2a0()*0.282449);
}

double NNfunction_ss_uLsR::synapse0x1a9c6d0() {
   return (neuron0x1a8e550()*0.610915);
}

double NNfunction_ss_uLsR::synapse0x1a9c710() {
   return (neuron0x1a8e890()*-0.648529);
}

double NNfunction_ss_uLsR::synapse0x1a9c750() {
   return (neuron0x1a8ebd0()*-0.306594);
}

double NNfunction_ss_uLsR::synapse0x1a9c790() {
   return (neuron0x1a8ef10()*-0.696949);
}

double NNfunction_ss_uLsR::synapse0x1a9c7d0() {
   return (neuron0x1a8f250()*0.502895);
}

double NNfunction_ss_uLsR::synapse0x1a9c810() {
   return (neuron0x1a8f590()*0.57142);
}

double NNfunction_ss_uLsR::synapse0x1a9c850() {
   return (neuron0x1a8f8d0()*-0.427094);
}

double NNfunction_ss_uLsR::synapse0x1a9c890() {
   return (neuron0x1a8fc10()*0.0760689);
}

double NNfunction_ss_uLsR::synapse0x1a9c8d0() {
   return (neuron0x1a8ff50()*0.103988);
}

double NNfunction_ss_uLsR::synapse0x1a9c910() {
   return (neuron0x1a90290()*0.632581);
}

double NNfunction_ss_uLsR::synapse0x1a9c950() {
   return (neuron0x1a905d0()*0.760326);
}

double NNfunction_ss_uLsR::synapse0x1a9c990() {
   return (neuron0x1a90910()*0.503931);
}

double NNfunction_ss_uLsR::synapse0x1a9c9d0() {
   return (neuron0x1a90c50()*0.706007);
}

double NNfunction_ss_uLsR::synapse0x1a9ca10() {
   return (neuron0x1a90f90()*-0.0755813);
}

double NNfunction_ss_uLsR::synapse0x1a9ca50() {
   return (neuron0x1a912d0()*-0.751591);
}

double NNfunction_ss_uLsR::synapse0x1a9c4e0() {
   return (neuron0x1a91610()*0.411214);
}

double NNfunction_ss_uLsR::synapse0x1a9c520() {
   return (neuron0x1a91b70()*-0.238055);
}

double NNfunction_ss_uLsR::synapse0x1a9cba0() {
   return (neuron0x1a91d90()*-0.393988);
}

double NNfunction_ss_uLsR::synapse0x1a9cbe0() {
   return (neuron0x1a920d0()*-0.671807);
}

double NNfunction_ss_uLsR::synapse0x1a9cc20() {
   return (neuron0x1a92410()*-0.256847);
}

double NNfunction_ss_uLsR::synapse0x1a9cc60() {
   return (neuron0x1a92750()*0.450368);
}

double NNfunction_ss_uLsR::synapse0x1a9cca0() {
   return (neuron0x1a92a90()*-0.161573);
}

double NNfunction_ss_uLsR::synapse0x1a9cce0() {
   return (neuron0x1a92dd0()*0.054763);
}

double NNfunction_ss_uLsR::synapse0x1a9d060() {
   return (neuron0x1a8e2a0()*-0.289993);
}

double NNfunction_ss_uLsR::synapse0x1a8e430() {
   return (neuron0x1a8e550()*0.269558);
}

double NNfunction_ss_uLsR::synapse0x1a8e470() {
   return (neuron0x1a8e890()*1.37671);
}

double NNfunction_ss_uLsR::synapse0x1a8e770() {
   return (neuron0x1a8ebd0()*2.74176);
}

double NNfunction_ss_uLsR::synapse0x1a8e7b0() {
   return (neuron0x1a8ef10()*0.577133);
}

double NNfunction_ss_uLsR::synapse0x1a8eab0() {
   return (neuron0x1a8f250()*-0.0392483);
}

double NNfunction_ss_uLsR::synapse0x1a8eaf0() {
   return (neuron0x1a8f590()*0.0242814);
}

double NNfunction_ss_uLsR::synapse0x1a8edf0() {
   return (neuron0x1a8f8d0()*-0.614629);
}

double NNfunction_ss_uLsR::synapse0x1a8ee30() {
   return (neuron0x1a8fc10()*-2.52294);
}

double NNfunction_ss_uLsR::synapse0x1a8f130() {
   return (neuron0x1a8ff50()*-0.475937);
}

double NNfunction_ss_uLsR::synapse0x1a8f170() {
   return (neuron0x1a90290()*0.358636);
}

double NNfunction_ss_uLsR::synapse0x1a8f470() {
   return (neuron0x1a905d0()*-1.30793);
}

double NNfunction_ss_uLsR::synapse0x1a8f4b0() {
   return (neuron0x1a90910()*-0.802193);
}

double NNfunction_ss_uLsR::synapse0x1a8f7b0() {
   return (neuron0x1a90c50()*-0.539062);
}

double NNfunction_ss_uLsR::synapse0x1a8f7f0() {
   return (neuron0x1a90f90()*-0.0403435);
}

double NNfunction_ss_uLsR::synapse0x1a8faf0() {
   return (neuron0x1a912d0()*-0.212123);
}

double NNfunction_ss_uLsR::synapse0x1a8fb30() {
   return (neuron0x1a91610()*0.435637);
}

double NNfunction_ss_uLsR::synapse0x1a8fe30() {
   return (neuron0x1a91b70()*0.258557);
}

double NNfunction_ss_uLsR::synapse0x1a8fe70() {
   return (neuron0x1a91d90()*2.01302);
}

double NNfunction_ss_uLsR::synapse0x1a90170() {
   return (neuron0x1a920d0()*0.579768);
}

double NNfunction_ss_uLsR::synapse0x1a901b0() {
   return (neuron0x1a92410()*0.417046);
}

double NNfunction_ss_uLsR::synapse0x1a904b0() {
   return (neuron0x1a92750()*-0.242853);
}

double NNfunction_ss_uLsR::synapse0x1a904f0() {
   return (neuron0x1a92a90()*0.153465);
}

double NNfunction_ss_uLsR::synapse0x1a907f0() {
   return (neuron0x1a92dd0()*0.0341006);
}

double NNfunction_ss_uLsR::synapse0x1a90830() {
   return (neuron0x1a8e2a0()*-0.584975);
}

double NNfunction_ss_uLsR::synapse0x1a914f0() {
   return (neuron0x1a8e550()*-0.508828);
}

double NNfunction_ss_uLsR::synapse0x1a91530() {
   return (neuron0x1a8e890()*-0.524702);
}

double NNfunction_ss_uLsR::synapse0x1a9ceb0() {
   return (neuron0x1a8ebd0()*-0.0205048);
}

double NNfunction_ss_uLsR::synapse0x1a9cef0() {
   return (neuron0x1a8ef10()*0.303472);
}

double NNfunction_ss_uLsR::synapse0x1a91830() {
   return (neuron0x1a8f250()*-0.279226);
}

double NNfunction_ss_uLsR::synapse0x1a91870() {
   return (neuron0x1a8f590()*-0.146759);
}

double NNfunction_ss_uLsR::synapse0x1849240() {
   return (neuron0x1a8f8d0()*-0.0239458);
}

double NNfunction_ss_uLsR::synapse0x1849280() {
   return (neuron0x1a8fc10()*0.14118);
}

double NNfunction_ss_uLsR::synapse0x1a91fb0() {
   return (neuron0x1a8ff50()*0.000116276);
}

double NNfunction_ss_uLsR::synapse0x1a91ff0() {
   return (neuron0x1a90290()*0.182465);
}

double NNfunction_ss_uLsR::synapse0x1a922f0() {
   return (neuron0x1a905d0()*0.0977271);
}

double NNfunction_ss_uLsR::synapse0x1a92330() {
   return (neuron0x1a90910()*-0.11529);
}

double NNfunction_ss_uLsR::synapse0x1a92630() {
   return (neuron0x1a90c50()*0.518515);
}

double NNfunction_ss_uLsR::synapse0x1a92670() {
   return (neuron0x1a90f90()*-0.186032);
}

double NNfunction_ss_uLsR::synapse0x1a92970() {
   return (neuron0x1a912d0()*-0.107281);
}

double NNfunction_ss_uLsR::synapse0x1a929b0() {
   return (neuron0x1a91610()*0.509799);
}

double NNfunction_ss_uLsR::synapse0x1a92cb0() {
   return (neuron0x1a91b70()*-0.112857);
}

double NNfunction_ss_uLsR::synapse0x1a92cf0() {
   return (neuron0x1a91d90()*-0.580609);
}

double NNfunction_ss_uLsR::synapse0x1a92ff0() {
   return (neuron0x1a920d0()*-0.00620841);
}

double NNfunction_ss_uLsR::synapse0x1a93030() {
   return (neuron0x1a92410()*0.081597);
}

double NNfunction_ss_uLsR::synapse0x1a90b30() {
   return (neuron0x1a92750()*0.319169);
}

double NNfunction_ss_uLsR::synapse0x1a90b70() {
   return (neuron0x1a92a90()*0.0606816);
}

double NNfunction_ss_uLsR::synapse0x1a9edd0() {
   return (neuron0x1a92dd0()*-0.523981);
}

double NNfunction_ss_uLsR::synapse0x1a9f150() {
   return (neuron0x1a8e2a0()*0.172505);
}

double NNfunction_ss_uLsR::synapse0x1a9f190() {
   return (neuron0x1a8e550()*-0.00453322);
}

double NNfunction_ss_uLsR::synapse0x1a9f1d0() {
   return (neuron0x1a8e890()*-0.218791);
}

double NNfunction_ss_uLsR::synapse0x1a9f210() {
   return (neuron0x1a8ebd0()*0.29415);
}

double NNfunction_ss_uLsR::synapse0x1a9f250() {
   return (neuron0x1a8ef10()*0.0572291);
}

double NNfunction_ss_uLsR::synapse0x1a9f290() {
   return (neuron0x1a8f250()*0.178176);
}

double NNfunction_ss_uLsR::synapse0x1a9f2d0() {
   return (neuron0x1a8f590()*-0.023946);
}

double NNfunction_ss_uLsR::synapse0x1a9f310() {
   return (neuron0x1a8f8d0()*-0.243982);
}

double NNfunction_ss_uLsR::synapse0x1a9f350() {
   return (neuron0x1a8fc10()*-0.252085);
}

double NNfunction_ss_uLsR::synapse0x1a9f390() {
   return (neuron0x1a8ff50()*-0.0390069);
}

double NNfunction_ss_uLsR::synapse0x1a9f3d0() {
   return (neuron0x1a90290()*0.142833);
}

double NNfunction_ss_uLsR::synapse0x1a9f410() {
   return (neuron0x1a905d0()*0.337691);
}

double NNfunction_ss_uLsR::synapse0x1a9f450() {
   return (neuron0x1a90910()*0.338783);
}

double NNfunction_ss_uLsR::synapse0x1a9f490() {
   return (neuron0x1a90c50()*-0.253835);
}

double NNfunction_ss_uLsR::synapse0x1a9f4d0() {
   return (neuron0x1a90f90()*-0.0403405);
}

double NNfunction_ss_uLsR::synapse0x1a9f510() {
   return (neuron0x1a912d0()*0.340507);
}

double NNfunction_ss_uLsR::synapse0x1a9efa0() {
   return (neuron0x1a91610()*-0.0990327);
}

double NNfunction_ss_uLsR::synapse0x1a9efe0() {
   return (neuron0x1a91b70()*0.214131);
}

double NNfunction_ss_uLsR::synapse0x1a9f660() {
   return (neuron0x1a91d90()*0.291096);
}

double NNfunction_ss_uLsR::synapse0x1a9f6a0() {
   return (neuron0x1a920d0()*-0.210218);
}

double NNfunction_ss_uLsR::synapse0x1a9f6e0() {
   return (neuron0x1a92410()*-0.0396956);
}

double NNfunction_ss_uLsR::synapse0x1a9f720() {
   return (neuron0x1a92750()*0.186163);
}

double NNfunction_ss_uLsR::synapse0x1a9f760() {
   return (neuron0x1a92a90()*-0.0560987);
}

double NNfunction_ss_uLsR::synapse0x1a9f7a0() {
   return (neuron0x1a92dd0()*0.110472);
}

double NNfunction_ss_uLsR::synapse0x1a9fb20() {
   return (neuron0x1a8e2a0()*-0.175784);
}

double NNfunction_ss_uLsR::synapse0x1a9fb60() {
   return (neuron0x1a8e550()*-0.358853);
}

double NNfunction_ss_uLsR::synapse0x1a9fba0() {
   return (neuron0x1a8e890()*0.00134636);
}

double NNfunction_ss_uLsR::synapse0x1a9fbe0() {
   return (neuron0x1a8ebd0()*0.116157);
}

double NNfunction_ss_uLsR::synapse0x1a9fc20() {
   return (neuron0x1a8ef10()*-0.131364);
}

double NNfunction_ss_uLsR::synapse0x1a9fc60() {
   return (neuron0x1a8f250()*0.28262);
}

double NNfunction_ss_uLsR::synapse0x1a9fca0() {
   return (neuron0x1a8f590()*-0.106554);
}

double NNfunction_ss_uLsR::synapse0x1a9fce0() {
   return (neuron0x1a8f8d0()*0.399339);
}

double NNfunction_ss_uLsR::synapse0x1a9fd20() {
   return (neuron0x1a8fc10()*-0.389048);
}

double NNfunction_ss_uLsR::synapse0x1a9fd60() {
   return (neuron0x1a8ff50()*-0.211688);
}

double NNfunction_ss_uLsR::synapse0x1a9fda0() {
   return (neuron0x1a90290()*0.319867);
}

double NNfunction_ss_uLsR::synapse0x1a9fde0() {
   return (neuron0x1a905d0()*1.01132);
}

double NNfunction_ss_uLsR::synapse0x1a9fe20() {
   return (neuron0x1a90910()*0.534967);
}

double NNfunction_ss_uLsR::synapse0x1a9fe60() {
   return (neuron0x1a90c50()*-0.013817);
}

double NNfunction_ss_uLsR::synapse0x1a9fea0() {
   return (neuron0x1a90f90()*-0.0831259);
}

double NNfunction_ss_uLsR::synapse0x1a9fee0() {
   return (neuron0x1a912d0()*0.583077);
}

double NNfunction_ss_uLsR::synapse0x1a9f970() {
   return (neuron0x1a91610()*-0.16853);
}

double NNfunction_ss_uLsR::synapse0x1a9f9b0() {
   return (neuron0x1a91b70()*-0.585758);
}

double NNfunction_ss_uLsR::synapse0x1aa0030() {
   return (neuron0x1a91d90()*0.189158);
}

double NNfunction_ss_uLsR::synapse0x1aa0070() {
   return (neuron0x1a920d0()*0.461631);
}

double NNfunction_ss_uLsR::synapse0x1aa00b0() {
   return (neuron0x1a92410()*-0.278325);
}

double NNfunction_ss_uLsR::synapse0x1aa00f0() {
   return (neuron0x1a92750()*-0.528666);
}

double NNfunction_ss_uLsR::synapse0x1aa0130() {
   return (neuron0x1a92a90()*0.522419);
}

double NNfunction_ss_uLsR::synapse0x1aa0170() {
   return (neuron0x1a92dd0()*0.115076);
}

double NNfunction_ss_uLsR::synapse0x1aa04f0() {
   return (neuron0x1a8e2a0()*-0.0266524);
}

double NNfunction_ss_uLsR::synapse0x1aa0530() {
   return (neuron0x1a8e550()*0.00842379);
}

double NNfunction_ss_uLsR::synapse0x1aa0570() {
   return (neuron0x1a8e890()*-0.0745801);
}

double NNfunction_ss_uLsR::synapse0x1aa05b0() {
   return (neuron0x1a8ebd0()*6.8119);
}

double NNfunction_ss_uLsR::synapse0x1aa05f0() {
   return (neuron0x1a8ef10()*0.0336438);
}

double NNfunction_ss_uLsR::synapse0x1aa0630() {
   return (neuron0x1a8f250()*-0.0277421);
}

double NNfunction_ss_uLsR::synapse0x1aa0670() {
   return (neuron0x1a8f590()*-0.0227829);
}

double NNfunction_ss_uLsR::synapse0x1aa06b0() {
   return (neuron0x1a8f8d0()*0.0235697);
}

double NNfunction_ss_uLsR::synapse0x1aa06f0() {
   return (neuron0x1a8fc10()*0.0181093);
}

double NNfunction_ss_uLsR::synapse0x1aa0730() {
   return (neuron0x1a8ff50()*0.0129529);
}

double NNfunction_ss_uLsR::synapse0x1aa0770() {
   return (neuron0x1a90290()*-0.00869406);
}

double NNfunction_ss_uLsR::synapse0x1aa07b0() {
   return (neuron0x1a905d0()*-0.196983);
}

double NNfunction_ss_uLsR::synapse0x1aa07f0() {
   return (neuron0x1a90910()*0.066478);
}

double NNfunction_ss_uLsR::synapse0x1aa0830() {
   return (neuron0x1a90c50()*0.0243615);
}

double NNfunction_ss_uLsR::synapse0x1aa0870() {
   return (neuron0x1a90f90()*0.0419036);
}

double NNfunction_ss_uLsR::synapse0x1aa08b0() {
   return (neuron0x1a912d0()*-0.0809612);
}

double NNfunction_ss_uLsR::synapse0x1aa0340() {
   return (neuron0x1a91610()*0.0429782);
}

double NNfunction_ss_uLsR::synapse0x1aa0380() {
   return (neuron0x1a91b70()*-0.0450301);
}

double NNfunction_ss_uLsR::synapse0x1aa0a00() {
   return (neuron0x1a91d90()*-0.306333);
}

double NNfunction_ss_uLsR::synapse0x1aa0a40() {
   return (neuron0x1a920d0()*-0.0222091);
}

double NNfunction_ss_uLsR::synapse0x1aa0a80() {
   return (neuron0x1a92410()*0.0101768);
}

double NNfunction_ss_uLsR::synapse0x1aa0ac0() {
   return (neuron0x1a92750()*0.027696);
}

double NNfunction_ss_uLsR::synapse0x1aa0b00() {
   return (neuron0x1a92a90()*0.00353993);
}

double NNfunction_ss_uLsR::synapse0x1aa0b40() {
   return (neuron0x1a92dd0()*0.0434811);
}

double NNfunction_ss_uLsR::synapse0x1aa0ec0() {
   return (neuron0x1a8e2a0()*0.209426);
}

double NNfunction_ss_uLsR::synapse0x1aa0f00() {
   return (neuron0x1a8e550()*0.781264);
}

double NNfunction_ss_uLsR::synapse0x1aa0f40() {
   return (neuron0x1a8e890()*-0.504337);
}

double NNfunction_ss_uLsR::synapse0x1aa0f80() {
   return (neuron0x1a8ebd0()*1.66415);
}

double NNfunction_ss_uLsR::synapse0x1aa0fc0() {
   return (neuron0x1a8ef10()*0.413711);
}

double NNfunction_ss_uLsR::synapse0x1aa1000() {
   return (neuron0x1a8f250()*-0.753355);
}

double NNfunction_ss_uLsR::synapse0x1aa1040() {
   return (neuron0x1a8f590()*-0.549905);
}

double NNfunction_ss_uLsR::synapse0x1aa1080() {
   return (neuron0x1a8f8d0()*0.552169);
}

double NNfunction_ss_uLsR::synapse0x1aa10c0() {
   return (neuron0x1a8fc10()*0.328326);
}

double NNfunction_ss_uLsR::synapse0x1aa1100() {
   return (neuron0x1a8ff50()*0.0444641);
}

double NNfunction_ss_uLsR::synapse0x1aa1140() {
   return (neuron0x1a90290()*-0.865006);
}

double NNfunction_ss_uLsR::synapse0x1aa1180() {
   return (neuron0x1a905d0()*0.0857768);
}

double NNfunction_ss_uLsR::synapse0x1aa11c0() {
   return (neuron0x1a90910()*0.276578);
}

double NNfunction_ss_uLsR::synapse0x1aa1200() {
   return (neuron0x1a90c50()*-0.193443);
}

double NNfunction_ss_uLsR::synapse0x1aa1240() {
   return (neuron0x1a90f90()*-0.810591);
}

double NNfunction_ss_uLsR::synapse0x1aa1280() {
   return (neuron0x1a912d0()*0.341339);
}

double NNfunction_ss_uLsR::synapse0x1aa0d10() {
   return (neuron0x1a91610()*-0.123097);
}

double NNfunction_ss_uLsR::synapse0x1aa0d50() {
   return (neuron0x1a91b70()*0.716586);
}

double NNfunction_ss_uLsR::synapse0x1aa13d0() {
   return (neuron0x1a91d90()*0.605623);
}

double NNfunction_ss_uLsR::synapse0x1aa1410() {
   return (neuron0x1a920d0()*0.59314);
}

double NNfunction_ss_uLsR::synapse0x1aa1450() {
   return (neuron0x1a92410()*-0.300886);
}

double NNfunction_ss_uLsR::synapse0x1aa1490() {
   return (neuron0x1a92750()*-0.875368);
}

double NNfunction_ss_uLsR::synapse0x1aa14d0() {
   return (neuron0x1a92a90()*1.36509);
}

double NNfunction_ss_uLsR::synapse0x1aa1510() {
   return (neuron0x1a92dd0()*0.689908);
}

double NNfunction_ss_uLsR::synapse0x1aa1890() {
   return (neuron0x1a8e2a0()*0.115707);
}

double NNfunction_ss_uLsR::synapse0x1aa18d0() {
   return (neuron0x1a8e550()*-0.020895);
}

double NNfunction_ss_uLsR::synapse0x1aa1910() {
   return (neuron0x1a8e890()*-0.00969506);
}

double NNfunction_ss_uLsR::synapse0x1aa1950() {
   return (neuron0x1a8ebd0()*0.0747401);
}

double NNfunction_ss_uLsR::synapse0x1aa1990() {
   return (neuron0x1a8ef10()*-0.226092);
}

double NNfunction_ss_uLsR::synapse0x1aa19d0() {
   return (neuron0x1a8f250()*0.597565);
}

double NNfunction_ss_uLsR::synapse0x1aa1a10() {
   return (neuron0x1a8f590()*1.07506);
}

double NNfunction_ss_uLsR::synapse0x1aa1a50() {
   return (neuron0x1a8f8d0()*0.164701);
}

double NNfunction_ss_uLsR::synapse0x1aa1a90() {
   return (neuron0x1a8fc10()*-1.21685);
}

double NNfunction_ss_uLsR::synapse0x1a99c50() {
   return (neuron0x1a8ff50()*0.374297);
}

double NNfunction_ss_uLsR::synapse0x1a99c90() {
   return (neuron0x1a90290()*0.311943);
}

double NNfunction_ss_uLsR::synapse0x1a99cd0() {
   return (neuron0x1a905d0()*0.0806088);
}

double NNfunction_ss_uLsR::synapse0x1a99d10() {
   return (neuron0x1a90910()*0.203631);
}

double NNfunction_ss_uLsR::synapse0x1a99d50() {
   return (neuron0x1a90c50()*0.0708569);
}

double NNfunction_ss_uLsR::synapse0x1a99d90() {
   return (neuron0x1a90f90()*-0.179895);
}

double NNfunction_ss_uLsR::synapse0x1a99dd0() {
   return (neuron0x1a912d0()*-0.378219);
}

double NNfunction_ss_uLsR::synapse0x1aa16e0() {
   return (neuron0x1a91610()*-0.227605);
}

double NNfunction_ss_uLsR::synapse0x1aa1720() {
   return (neuron0x1a91b70()*-0.492672);
}

double NNfunction_ss_uLsR::synapse0x1a99f20() {
   return (neuron0x1a91d90()*-0.492822);
}

double NNfunction_ss_uLsR::synapse0x1a99f60() {
   return (neuron0x1a920d0()*0.650301);
}

double NNfunction_ss_uLsR::synapse0x1a99fa0() {
   return (neuron0x1a92410()*-0.0196426);
}

double NNfunction_ss_uLsR::synapse0x1a99fe0() {
   return (neuron0x1a92750()*0.567806);
}

double NNfunction_ss_uLsR::synapse0x1a9a020() {
   return (neuron0x1a92a90()*0.489246);
}

double NNfunction_ss_uLsR::synapse0x1a9a060() {
   return (neuron0x1a92dd0()*-0.145077);
}

double NNfunction_ss_uLsR::synapse0x1a9a3e0() {
   return (neuron0x1a8e2a0()*0.0967224);
}

double NNfunction_ss_uLsR::synapse0x1a9a420() {
   return (neuron0x1a8e550()*0.169432);
}

double NNfunction_ss_uLsR::synapse0x1a9a460() {
   return (neuron0x1a8e890()*-1.0153);
}

double NNfunction_ss_uLsR::synapse0x1a9a4a0() {
   return (neuron0x1a8ebd0()*-0.195146);
}

double NNfunction_ss_uLsR::synapse0x1a9a4e0() {
   return (neuron0x1a8ef10()*0.0754439);
}

double NNfunction_ss_uLsR::synapse0x1a9a520() {
   return (neuron0x1a8f250()*-0.0304475);
}

double NNfunction_ss_uLsR::synapse0x1a9a560() {
   return (neuron0x1a8f590()*0.181669);
}

double NNfunction_ss_uLsR::synapse0x1a9a5a0() {
   return (neuron0x1a8f8d0()*-0.0384697);
}

double NNfunction_ss_uLsR::synapse0x1a9a5e0() {
   return (neuron0x1a8fc10()*0.00482858);
}

double NNfunction_ss_uLsR::synapse0x1a9a620() {
   return (neuron0x1a8ff50()*-0.06067);
}

double NNfunction_ss_uLsR::synapse0x1a9a660() {
   return (neuron0x1a90290()*0.158562);
}

double NNfunction_ss_uLsR::synapse0x1a9a6a0() {
   return (neuron0x1a905d0()*-0.154197);
}

double NNfunction_ss_uLsR::synapse0x1a9a6e0() {
   return (neuron0x1a90910()*0.0546262);
}

double NNfunction_ss_uLsR::synapse0x1a9a720() {
   return (neuron0x1a90c50()*0.286712);
}

double NNfunction_ss_uLsR::synapse0x1a9a760() {
   return (neuron0x1a90f90()*0.011064);
}

double NNfunction_ss_uLsR::synapse0x1a9a7a0() {
   return (neuron0x1a912d0()*-0.0283251);
}

double NNfunction_ss_uLsR::synapse0x1a9a230() {
   return (neuron0x1a91610()*-0.0536703);
}

double NNfunction_ss_uLsR::synapse0x1a9a270() {
   return (neuron0x1a91b70()*0.0577046);
}

double NNfunction_ss_uLsR::synapse0x1a9a8f0() {
   return (neuron0x1a91d90()*0.912903);
}

double NNfunction_ss_uLsR::synapse0x1a9a930() {
   return (neuron0x1a920d0()*0.466372);
}

double NNfunction_ss_uLsR::synapse0x1a9a970() {
   return (neuron0x1a92410()*0.0427194);
}

double NNfunction_ss_uLsR::synapse0x1a9a9b0() {
   return (neuron0x1a92750()*0.101563);
}

double NNfunction_ss_uLsR::synapse0x1a9a9f0() {
   return (neuron0x1a92a90()*-0.188175);
}

double NNfunction_ss_uLsR::synapse0x1a9aa30() {
   return (neuron0x1a92dd0()*0.337764);
}

double NNfunction_ss_uLsR::synapse0x1a9ac00() {
   return (neuron0x1a8e2a0()*-0.0314886);
}

double NNfunction_ss_uLsR::synapse0x1aa3c90() {
   return (neuron0x1a8e550()*-0.0114947);
}

double NNfunction_ss_uLsR::synapse0x1aa3cd0() {
   return (neuron0x1a8e890()*-0.0249217);
}

double NNfunction_ss_uLsR::synapse0x1aa3d10() {
   return (neuron0x1a8ebd0()*8.30484);
}

double NNfunction_ss_uLsR::synapse0x1aa3d50() {
   return (neuron0x1a8ef10()*-0.00519608);
}

double NNfunction_ss_uLsR::synapse0x1aa3d90() {
   return (neuron0x1a8f250()*-0.0134424);
}

double NNfunction_ss_uLsR::synapse0x1aa3dd0() {
   return (neuron0x1a8f590()*0.00446821);
}

double NNfunction_ss_uLsR::synapse0x1aa3e10() {
   return (neuron0x1a8f8d0()*0.00742609);
}

double NNfunction_ss_uLsR::synapse0x1aa3e50() {
   return (neuron0x1a8fc10()*0.012394);
}

double NNfunction_ss_uLsR::synapse0x1aa3e90() {
   return (neuron0x1a8ff50()*0.00603564);
}

double NNfunction_ss_uLsR::synapse0x1aa3ed0() {
   return (neuron0x1a90290()*-0.0210973);
}

double NNfunction_ss_uLsR::synapse0x1aa3f10() {
   return (neuron0x1a905d0()*0.428149);
}

double NNfunction_ss_uLsR::synapse0x1aa3f50() {
   return (neuron0x1a90910()*0.0237194);
}

double NNfunction_ss_uLsR::synapse0x1aa3f90() {
   return (neuron0x1a90c50()*0.0212022);
}

double NNfunction_ss_uLsR::synapse0x1aa3fd0() {
   return (neuron0x1a90f90()*-0.00564275);
}

double NNfunction_ss_uLsR::synapse0x1aa4010() {
   return (neuron0x1a912d0()*-0.0097287);
}

double NNfunction_ss_uLsR::synapse0x1aa3ae0() {
   return (neuron0x1a91610()*-0.0451314);
}

double NNfunction_ss_uLsR::synapse0x1aa3b20() {
   return (neuron0x1a91b70()*-0.0398718);
}

double NNfunction_ss_uLsR::synapse0x1aa4160() {
   return (neuron0x1a91d90()*0.358296);
}

double NNfunction_ss_uLsR::synapse0x1aa41a0() {
   return (neuron0x1a920d0()*-0.025721);
}

double NNfunction_ss_uLsR::synapse0x1aa41e0() {
   return (neuron0x1a92410()*0.0402242);
}

double NNfunction_ss_uLsR::synapse0x1aa4220() {
   return (neuron0x1a92750()*0.0166085);
}

double NNfunction_ss_uLsR::synapse0x1aa4260() {
   return (neuron0x1a92a90()*0.030973);
}

double NNfunction_ss_uLsR::synapse0x1aa42a0() {
   return (neuron0x1a92dd0()*0.048804);
}

double NNfunction_ss_uLsR::synapse0x1aa4620() {
   return (neuron0x1a8e2a0()*0.0457775);
}

double NNfunction_ss_uLsR::synapse0x1aa4660() {
   return (neuron0x1a8e550()*0.927095);
}

double NNfunction_ss_uLsR::synapse0x1aa46a0() {
   return (neuron0x1a8e890()*0.393439);
}

double NNfunction_ss_uLsR::synapse0x1aa46e0() {
   return (neuron0x1a8ebd0()*-0.688563);
}

double NNfunction_ss_uLsR::synapse0x1aa4720() {
   return (neuron0x1a8ef10()*-0.184979);
}

double NNfunction_ss_uLsR::synapse0x1aa4760() {
   return (neuron0x1a8f250()*1.82513);
}

double NNfunction_ss_uLsR::synapse0x1aa47a0() {
   return (neuron0x1a8f590()*0.797814);
}

double NNfunction_ss_uLsR::synapse0x1aa47e0() {
   return (neuron0x1a8f8d0()*0.355251);
}

double NNfunction_ss_uLsR::synapse0x1aa4820() {
   return (neuron0x1a8fc10()*1.42168);
}

double NNfunction_ss_uLsR::synapse0x1aa4860() {
   return (neuron0x1a8ff50()*-1.02059);
}

double NNfunction_ss_uLsR::synapse0x1aa48a0() {
   return (neuron0x1a90290()*1.04504);
}

double NNfunction_ss_uLsR::synapse0x1aa48e0() {
   return (neuron0x1a905d0()*-1.16363);
}

double NNfunction_ss_uLsR::synapse0x1aa4920() {
   return (neuron0x1a90910()*-0.00225026);
}

double NNfunction_ss_uLsR::synapse0x1aa4960() {
   return (neuron0x1a90c50()*0.273378);
}

double NNfunction_ss_uLsR::synapse0x1aa49a0() {
   return (neuron0x1a90f90()*-0.196586);
}

double NNfunction_ss_uLsR::synapse0x1aa49e0() {
   return (neuron0x1a912d0()*-0.184404);
}

double NNfunction_ss_uLsR::synapse0x1aa4470() {
   return (neuron0x1a91610()*0.0730569);
}

double NNfunction_ss_uLsR::synapse0x1aa44b0() {
   return (neuron0x1a91b70()*-1.21062);
}

double NNfunction_ss_uLsR::synapse0x1aa4b30() {
   return (neuron0x1a91d90()*0.584303);
}

double NNfunction_ss_uLsR::synapse0x1aa4b70() {
   return (neuron0x1a920d0()*0.447263);
}

double NNfunction_ss_uLsR::synapse0x1aa4bb0() {
   return (neuron0x1a92410()*0.577738);
}

double NNfunction_ss_uLsR::synapse0x1aa4bf0() {
   return (neuron0x1a92750()*0.900693);
}

double NNfunction_ss_uLsR::synapse0x1aa4c30() {
   return (neuron0x1a92a90()*-1.10522);
}

double NNfunction_ss_uLsR::synapse0x1aa4c70() {
   return (neuron0x1a92dd0()*0.0493524);
}

double NNfunction_ss_uLsR::synapse0x1aa4ff0() {
   return (neuron0x1a8e2a0()*-0.292581);
}

double NNfunction_ss_uLsR::synapse0x1aa5030() {
   return (neuron0x1a8e550()*0.0978707);
}

double NNfunction_ss_uLsR::synapse0x1aa5070() {
   return (neuron0x1a8e890()*-1.83068);
}

double NNfunction_ss_uLsR::synapse0x1aa50b0() {
   return (neuron0x1a8ebd0()*-0.259068);
}

double NNfunction_ss_uLsR::synapse0x1aa50f0() {
   return (neuron0x1a8ef10()*-0.112308);
}

double NNfunction_ss_uLsR::synapse0x1aa5130() {
   return (neuron0x1a8f250()*-0.25562);
}

double NNfunction_ss_uLsR::synapse0x1aa5170() {
   return (neuron0x1a8f590()*-0.0526197);
}

double NNfunction_ss_uLsR::synapse0x1aa51b0() {
   return (neuron0x1a8f8d0()*0.0684161);
}

double NNfunction_ss_uLsR::synapse0x1aa51f0() {
   return (neuron0x1a8fc10()*0.337878);
}

double NNfunction_ss_uLsR::synapse0x1aa5230() {
   return (neuron0x1a8ff50()*-0.0728454);
}

double NNfunction_ss_uLsR::synapse0x1aa5270() {
   return (neuron0x1a90290()*0.140063);
}

double NNfunction_ss_uLsR::synapse0x1aa52b0() {
   return (neuron0x1a905d0()*-0.0398248);
}

double NNfunction_ss_uLsR::synapse0x1aa52f0() {
   return (neuron0x1a90910()*-0.633728);
}

double NNfunction_ss_uLsR::synapse0x1aa5330() {
   return (neuron0x1a90c50()*-0.263525);
}

double NNfunction_ss_uLsR::synapse0x1aa5370() {
   return (neuron0x1a90f90()*0.161276);
}

double NNfunction_ss_uLsR::synapse0x1aa53b0() {
   return (neuron0x1a912d0()*0.57074);
}

double NNfunction_ss_uLsR::synapse0x1aa4e40() {
   return (neuron0x1a91610()*0.521877);
}

double NNfunction_ss_uLsR::synapse0x1aa4e80() {
   return (neuron0x1a91b70()*0.212517);
}

double NNfunction_ss_uLsR::synapse0x1aa5500() {
   return (neuron0x1a91d90()*-0.625546);
}

double NNfunction_ss_uLsR::synapse0x1aa5540() {
   return (neuron0x1a920d0()*0.206706);
}

double NNfunction_ss_uLsR::synapse0x1aa5580() {
   return (neuron0x1a92410()*-0.258196);
}

double NNfunction_ss_uLsR::synapse0x1aa55c0() {
   return (neuron0x1a92750()*-0.422308);
}

double NNfunction_ss_uLsR::synapse0x1aa5600() {
   return (neuron0x1a92a90()*0.117857);
}

double NNfunction_ss_uLsR::synapse0x1aa5640() {
   return (neuron0x1a92dd0()*0.211887);
}

double NNfunction_ss_uLsR::synapse0x1aa59c0() {
   return (neuron0x1a8e2a0()*0.0065723);
}

double NNfunction_ss_uLsR::synapse0x1aa5a00() {
   return (neuron0x1a8e550()*-0.0358124);
}

double NNfunction_ss_uLsR::synapse0x1aa5a40() {
   return (neuron0x1a8e890()*-0.049508);
}

double NNfunction_ss_uLsR::synapse0x1aa5a80() {
   return (neuron0x1a8ebd0()*-0.157502);
}

double NNfunction_ss_uLsR::synapse0x1aa5ac0() {
   return (neuron0x1a8ef10()*-0.056222);
}

double NNfunction_ss_uLsR::synapse0x1aa5b00() {
   return (neuron0x1a8f250()*0.0126337);
}

double NNfunction_ss_uLsR::synapse0x1aa5b40() {
   return (neuron0x1a8f590()*-0.0146824);
}

double NNfunction_ss_uLsR::synapse0x1aa5b80() {
   return (neuron0x1a8f8d0()*0.0469538);
}

double NNfunction_ss_uLsR::synapse0x1aa5bc0() {
   return (neuron0x1a8fc10()*-0.0167535);
}

double NNfunction_ss_uLsR::synapse0x1aa5c00() {
   return (neuron0x1a8ff50()*0.0129432);
}

double NNfunction_ss_uLsR::synapse0x1aa5c40() {
   return (neuron0x1a90290()*-0.0399147);
}

double NNfunction_ss_uLsR::synapse0x1aa5c80() {
   return (neuron0x1a905d0()*2.84242);
}

double NNfunction_ss_uLsR::synapse0x1aa5cc0() {
   return (neuron0x1a90910()*0.0116502);
}

double NNfunction_ss_uLsR::synapse0x1aa5d00() {
   return (neuron0x1a90c50()*-0.0360322);
}

double NNfunction_ss_uLsR::synapse0x1aa5d40() {
   return (neuron0x1a90f90()*0.00513234);
}

double NNfunction_ss_uLsR::synapse0x1aa5d80() {
   return (neuron0x1a912d0()*-0.0644225);
}

double NNfunction_ss_uLsR::synapse0x1aa5810() {
   return (neuron0x1a91610()*-0.0171035);
}

double NNfunction_ss_uLsR::synapse0x1aa5850() {
   return (neuron0x1a91b70()*0.0360293);
}

double NNfunction_ss_uLsR::synapse0x1aa5ed0() {
   return (neuron0x1a91d90()*-1.2579);
}

double NNfunction_ss_uLsR::synapse0x1aa5f10() {
   return (neuron0x1a920d0()*-0.0326931);
}

double NNfunction_ss_uLsR::synapse0x1aa5f50() {
   return (neuron0x1a92410()*-0.0708859);
}

double NNfunction_ss_uLsR::synapse0x1aa5f90() {
   return (neuron0x1a92750()*-0.0209484);
}

double NNfunction_ss_uLsR::synapse0x1aa5fd0() {
   return (neuron0x1a92a90()*-0.00798589);
}

double NNfunction_ss_uLsR::synapse0x1aa6010() {
   return (neuron0x1a92dd0()*0.0726561);
}

double NNfunction_ss_uLsR::synapse0x1aa6390() {
   return (neuron0x1a8e2a0()*0.126315);
}

double NNfunction_ss_uLsR::synapse0x1aa63d0() {
   return (neuron0x1a8e550()*0.490988);
}

double NNfunction_ss_uLsR::synapse0x1aa6410() {
   return (neuron0x1a8e890()*-0.171288);
}

double NNfunction_ss_uLsR::synapse0x1aa6450() {
   return (neuron0x1a8ebd0()*0.0566575);
}

double NNfunction_ss_uLsR::synapse0x1aa6490() {
   return (neuron0x1a8ef10()*0.153969);
}

double NNfunction_ss_uLsR::synapse0x1aa64d0() {
   return (neuron0x1a8f250()*-0.199831);
}

double NNfunction_ss_uLsR::synapse0x1aa6510() {
   return (neuron0x1a8f590()*0.732568);
}

double NNfunction_ss_uLsR::synapse0x1aa6550() {
   return (neuron0x1a8f8d0()*-0.17723);
}

double NNfunction_ss_uLsR::synapse0x1aa6590() {
   return (neuron0x1a8fc10()*0.63346);
}

double NNfunction_ss_uLsR::synapse0x1aa65d0() {
   return (neuron0x1a8ff50()*-0.00812166);
}

double NNfunction_ss_uLsR::synapse0x1aa6610() {
   return (neuron0x1a90290()*-0.447895);
}

double NNfunction_ss_uLsR::synapse0x1aa6650() {
   return (neuron0x1a905d0()*0.187523);
}

double NNfunction_ss_uLsR::synapse0x1aa6690() {
   return (neuron0x1a90910()*-0.378732);
}

double NNfunction_ss_uLsR::synapse0x1aa66d0() {
   return (neuron0x1a90c50()*0.243387);
}

double NNfunction_ss_uLsR::synapse0x1aa6710() {
   return (neuron0x1a90f90()*0.0634371);
}

double NNfunction_ss_uLsR::synapse0x1aa6750() {
   return (neuron0x1a912d0()*0.0983113);
}

double NNfunction_ss_uLsR::synapse0x1aa61e0() {
   return (neuron0x1a91610()*0.236155);
}

double NNfunction_ss_uLsR::synapse0x1aa6220() {
   return (neuron0x1a91b70()*0.177229);
}

double NNfunction_ss_uLsR::synapse0x1aa68a0() {
   return (neuron0x1a91d90()*0.258185);
}

double NNfunction_ss_uLsR::synapse0x1aa68e0() {
   return (neuron0x1a920d0()*-0.598816);
}

double NNfunction_ss_uLsR::synapse0x1aa6920() {
   return (neuron0x1a92410()*0.59461);
}

double NNfunction_ss_uLsR::synapse0x1aa6960() {
   return (neuron0x1a92750()*0.173496);
}

double NNfunction_ss_uLsR::synapse0x1aa69a0() {
   return (neuron0x1a92a90()*0.0662639);
}

double NNfunction_ss_uLsR::synapse0x1aa69e0() {
   return (neuron0x1a92dd0()*-0.628365);
}

double NNfunction_ss_uLsR::synapse0x1aa6d60() {
   return (neuron0x1a8e2a0()*-0.00588184);
}

double NNfunction_ss_uLsR::synapse0x1aa6da0() {
   return (neuron0x1a8e550()*0.00373645);
}

double NNfunction_ss_uLsR::synapse0x1aa6de0() {
   return (neuron0x1a8e890()*-0.0340576);
}

double NNfunction_ss_uLsR::synapse0x1aa6e20() {
   return (neuron0x1a8ebd0()*6.47518);
}

double NNfunction_ss_uLsR::synapse0x1aa6e60() {
   return (neuron0x1a8ef10()*-0.0107127);
}

double NNfunction_ss_uLsR::synapse0x1aa6ea0() {
   return (neuron0x1a8f250()*-0.0138924);
}

double NNfunction_ss_uLsR::synapse0x1aa6ee0() {
   return (neuron0x1a8f590()*-0.0153546);
}

double NNfunction_ss_uLsR::synapse0x1aa6f20() {
   return (neuron0x1a8f8d0()*-0.00717566);
}

double NNfunction_ss_uLsR::synapse0x1aa6f60() {
   return (neuron0x1a8fc10()*-0.00674453);
}

double NNfunction_ss_uLsR::synapse0x1aa6fa0() {
   return (neuron0x1a8ff50()*-0.0101498);
}

double NNfunction_ss_uLsR::synapse0x1aa6fe0() {
   return (neuron0x1a90290()*-0.0488563);
}

double NNfunction_ss_uLsR::synapse0x1aa7020() {
   return (neuron0x1a905d0()*-0.531246);
}

double NNfunction_ss_uLsR::synapse0x1aa7060() {
   return (neuron0x1a90910()*0.0284224);
}

double NNfunction_ss_uLsR::synapse0x1aa70a0() {
   return (neuron0x1a90c50()*-0.021375);
}

double NNfunction_ss_uLsR::synapse0x1aa70e0() {
   return (neuron0x1a90f90()*0.0215168);
}

double NNfunction_ss_uLsR::synapse0x1aa7120() {
   return (neuron0x1a912d0()*0.0154695);
}

double NNfunction_ss_uLsR::synapse0x1aa6bb0() {
   return (neuron0x1a91610()*-0.0297314);
}

double NNfunction_ss_uLsR::synapse0x1aa6bf0() {
   return (neuron0x1a91b70()*-0.0305538);
}

double NNfunction_ss_uLsR::synapse0x1aa7270() {
   return (neuron0x1a91d90()*-0.553174);
}

double NNfunction_ss_uLsR::synapse0x1aa72b0() {
   return (neuron0x1a920d0()*-0.00102441);
}

double NNfunction_ss_uLsR::synapse0x1aa72f0() {
   return (neuron0x1a92410()*0.0281843);
}

double NNfunction_ss_uLsR::synapse0x1aa7330() {
   return (neuron0x1a92750()*0.0175048);
}

double NNfunction_ss_uLsR::synapse0x1aa7370() {
   return (neuron0x1a92a90()*0.00477818);
}

double NNfunction_ss_uLsR::synapse0x1aa73b0() {
   return (neuron0x1a92dd0()*0.034643);
}

double NNfunction_ss_uLsR::synapse0x1aa7730() {
   return (neuron0x1a8e2a0()*-0.00957627);
}

double NNfunction_ss_uLsR::synapse0x1aa7770() {
   return (neuron0x1a8e550()*-0.00686486);
}

double NNfunction_ss_uLsR::synapse0x1aa77b0() {
   return (neuron0x1a8e890()*0.00929185);
}

double NNfunction_ss_uLsR::synapse0x1aa77f0() {
   return (neuron0x1a8ebd0()*-2.42074);
}

double NNfunction_ss_uLsR::synapse0x1aa7830() {
   return (neuron0x1a8ef10()*0.0190346);
}

double NNfunction_ss_uLsR::synapse0x1aa7870() {
   return (neuron0x1a8f250()*-0.0107874);
}

double NNfunction_ss_uLsR::synapse0x1aa78b0() {
   return (neuron0x1a8f590()*0.00770996);
}

double NNfunction_ss_uLsR::synapse0x1aa78f0() {
   return (neuron0x1a8f8d0()*0.00102312);
}

double NNfunction_ss_uLsR::synapse0x1aa7930() {
   return (neuron0x1a8fc10()*-0.0248883);
}

double NNfunction_ss_uLsR::synapse0x1aa7970() {
   return (neuron0x1a8ff50()*0.00783965);
}

double NNfunction_ss_uLsR::synapse0x1aa79b0() {
   return (neuron0x1a90290()*0.0086526);
}

double NNfunction_ss_uLsR::synapse0x1aa79f0() {
   return (neuron0x1a905d0()*-0.517414);
}

double NNfunction_ss_uLsR::synapse0x1aa7a30() {
   return (neuron0x1a90910()*0.0361627);
}

double NNfunction_ss_uLsR::synapse0x1aa7a70() {
   return (neuron0x1a90c50()*-0.0118174);
}

double NNfunction_ss_uLsR::synapse0x1aa7ab0() {
   return (neuron0x1a90f90()*0.0194882);
}

double NNfunction_ss_uLsR::synapse0x1aa7af0() {
   return (neuron0x1a912d0()*0.00226472);
}

double NNfunction_ss_uLsR::synapse0x1aa7580() {
   return (neuron0x1a91610()*0.0052723);
}

double NNfunction_ss_uLsR::synapse0x1aa75c0() {
   return (neuron0x1a91b70()*0.00761492);
}

double NNfunction_ss_uLsR::synapse0x1aa7c40() {
   return (neuron0x1a91d90()*-0.476571);
}

double NNfunction_ss_uLsR::synapse0x1aa7c80() {
   return (neuron0x1a920d0()*0.00732324);
}

double NNfunction_ss_uLsR::synapse0x1aa7cc0() {
   return (neuron0x1a92410()*0.00254465);
}

double NNfunction_ss_uLsR::synapse0x1aa7d00() {
   return (neuron0x1a92750()*0.00881584);
}

double NNfunction_ss_uLsR::synapse0x1aa7d40() {
   return (neuron0x1a92a90()*-0.0104508);
}

double NNfunction_ss_uLsR::synapse0x1aa7d80() {
   return (neuron0x1a92dd0()*0.00478312);
}

double NNfunction_ss_uLsR::synapse0x1aa8100() {
   return (neuron0x1a8e2a0()*-0.00208564);
}

double NNfunction_ss_uLsR::synapse0x1aa8140() {
   return (neuron0x1a8e550()*0.389536);
}

double NNfunction_ss_uLsR::synapse0x1aa8180() {
   return (neuron0x1a8e890()*-0.0752219);
}

double NNfunction_ss_uLsR::synapse0x1aa81c0() {
   return (neuron0x1a8ebd0()*0.478629);
}

double NNfunction_ss_uLsR::synapse0x1aa8200() {
   return (neuron0x1a8ef10()*-0.447026);
}

double NNfunction_ss_uLsR::synapse0x1aa8240() {
   return (neuron0x1a8f250()*-0.031911);
}

double NNfunction_ss_uLsR::synapse0x1aa8280() {
   return (neuron0x1a8f590()*0.0745964);
}

double NNfunction_ss_uLsR::synapse0x1aa82c0() {
   return (neuron0x1a8f8d0()*-0.651765);
}

double NNfunction_ss_uLsR::synapse0x1aa8300() {
   return (neuron0x1a8fc10()*-0.037399);
}

double NNfunction_ss_uLsR::synapse0x1aa8340() {
   return (neuron0x1a8ff50()*0.129252);
}

double NNfunction_ss_uLsR::synapse0x1aa8380() {
   return (neuron0x1a90290()*0.156783);
}

double NNfunction_ss_uLsR::synapse0x1aa83c0() {
   return (neuron0x1a905d0()*0.353147);
}

double NNfunction_ss_uLsR::synapse0x1aa8400() {
   return (neuron0x1a90910()*0.734438);
}

double NNfunction_ss_uLsR::synapse0x1aa8440() {
   return (neuron0x1a90c50()*0.542148);
}

double NNfunction_ss_uLsR::synapse0x1aa8480() {
   return (neuron0x1a90f90()*0.343318);
}

double NNfunction_ss_uLsR::synapse0x1aa84c0() {
   return (neuron0x1a912d0()*-0.0300448);
}

double NNfunction_ss_uLsR::synapse0x1aa7f50() {
   return (neuron0x1a91610()*-0.128405);
}

double NNfunction_ss_uLsR::synapse0x1aa7f90() {
   return (neuron0x1a91b70()*0.114729);
}

double NNfunction_ss_uLsR::synapse0x1aa8610() {
   return (neuron0x1a91d90()*0.0297198);
}

double NNfunction_ss_uLsR::synapse0x1aa8650() {
   return (neuron0x1a920d0()*0.444418);
}

double NNfunction_ss_uLsR::synapse0x1aa8690() {
   return (neuron0x1a92410()*-0.623588);
}

double NNfunction_ss_uLsR::synapse0x1aa86d0() {
   return (neuron0x1a92750()*-0.16837);
}

double NNfunction_ss_uLsR::synapse0x1aa8710() {
   return (neuron0x1a92a90()*0.63856);
}

double NNfunction_ss_uLsR::synapse0x1aa8750() {
   return (neuron0x1a92dd0()*1.08746);
}

double NNfunction_ss_uLsR::synapse0x1aa8ad0() {
   return (neuron0x1a8e2a0()*0.0235177);
}

double NNfunction_ss_uLsR::synapse0x1a9d0a0() {
   return (neuron0x1a8e550()*-0.0665261);
}

double NNfunction_ss_uLsR::synapse0x1a9d0e0() {
   return (neuron0x1a8e890()*-0.960627);
}

double NNfunction_ss_uLsR::synapse0x1a9d120() {
   return (neuron0x1a8ebd0()*-2.47723);
}

double NNfunction_ss_uLsR::synapse0x1a9d370() {
   return (neuron0x1a8ef10()*0.0668787);
}

double NNfunction_ss_uLsR::synapse0x1a9d3b0() {
   return (neuron0x1a8f250()*0.126869);
}

double NNfunction_ss_uLsR::synapse0x1a9d3f0() {
   return (neuron0x1a8f590()*-0.184991);
}

double NNfunction_ss_uLsR::synapse0x1a9d640() {
   return (neuron0x1a8f8d0()*-0.323871);
}

double NNfunction_ss_uLsR::synapse0x1a9d680() {
   return (neuron0x1a8fc10()*0.102507);
}

double NNfunction_ss_uLsR::synapse0x1a9d8d0() {
   return (neuron0x1a8ff50()*0.0782608);
}

double NNfunction_ss_uLsR::synapse0x1a9d910() {
   return (neuron0x1a90290()*0.0727842);
}

double NNfunction_ss_uLsR::synapse0x1a9d950() {
   return (neuron0x1a905d0()*0.410956);
}

double NNfunction_ss_uLsR::synapse0x1a9dba0() {
   return (neuron0x1a90910()*-0.219961);
}

double NNfunction_ss_uLsR::synapse0x1a9dbe0() {
   return (neuron0x1a90c50()*0.115551);
}

double NNfunction_ss_uLsR::synapse0x1a9de30() {
   return (neuron0x1a90f90()*-0.0694298);
}

double NNfunction_ss_uLsR::synapse0x1a9de70() {
   return (neuron0x1a912d0()*-0.0739618);
}

double NNfunction_ss_uLsR::synapse0x1aa8920() {
   return (neuron0x1a91610()*-0.174462);
}

double NNfunction_ss_uLsR::synapse0x1aa8960() {
   return (neuron0x1a91b70()*-0.132769);
}

double NNfunction_ss_uLsR::synapse0x1a9dfc0() {
   return (neuron0x1a91d90()*-0.144294);
}

double NNfunction_ss_uLsR::synapse0x1a9e4d0() {
   return (neuron0x1a920d0()*0.153993);
}

double NNfunction_ss_uLsR::synapse0x1a9e510() {
   return (neuron0x1a92410()*-0.35456);
}

double NNfunction_ss_uLsR::synapse0x1a9e550() {
   return (neuron0x1a92750()*0.127554);
}

double NNfunction_ss_uLsR::synapse0x1a9e7a0() {
   return (neuron0x1a92a90()*0.245946);
}

double NNfunction_ss_uLsR::synapse0x1a9e7e0() {
   return (neuron0x1a92dd0()*0.083754);
}

double NNfunction_ss_uLsR::synapse0x1a9e090() {
   return (neuron0x1a8e2a0()*-0.00716427);
}

double NNfunction_ss_uLsR::synapse0x1a9e0d0() {
   return (neuron0x1a8e550()*0.0634252);
}

double NNfunction_ss_uLsR::synapse0x1a9e110() {
   return (neuron0x1a8e890()*0.187023);
}

double NNfunction_ss_uLsR::synapse0x1a9e150() {
   return (neuron0x1a8ebd0()*1.51059);
}

double NNfunction_ss_uLsR::synapse0x1a9ead0() {
   return (neuron0x1a8ef10()*-0.0345539);
}

double NNfunction_ss_uLsR::synapse0x1aaae20() {
   return (neuron0x1a8f250()*0.0309594);
}

double NNfunction_ss_uLsR::synapse0x1aaae60() {
   return (neuron0x1a8f590()*0.019646);
}

double NNfunction_ss_uLsR::synapse0x1aaaea0() {
   return (neuron0x1a8f8d0()*0.0343041);
}

double NNfunction_ss_uLsR::synapse0x1aaaee0() {
   return (neuron0x1a8fc10()*-0.00278724);
}

double NNfunction_ss_uLsR::synapse0x1aaaf20() {
   return (neuron0x1a8ff50()*0.00694705);
}

double NNfunction_ss_uLsR::synapse0x1aaaf60() {
   return (neuron0x1a90290()*0.00155007);
}

double NNfunction_ss_uLsR::synapse0x1aaafa0() {
   return (neuron0x1a905d0()*-0.336963);
}

double NNfunction_ss_uLsR::synapse0x1aaafe0() {
   return (neuron0x1a90910()*0.0628426);
}

double NNfunction_ss_uLsR::synapse0x1aab020() {
   return (neuron0x1a90c50()*0.0291906);
}

double NNfunction_ss_uLsR::synapse0x1aab060() {
   return (neuron0x1a90f90()*-0.00126584);
}

double NNfunction_ss_uLsR::synapse0x1aab0a0() {
   return (neuron0x1a912d0()*0.00697293);
}

double NNfunction_ss_uLsR::synapse0x1a9e9b0() {
   return (neuron0x1a91610()*0.00425487);
}

double NNfunction_ss_uLsR::synapse0x1a9e9f0() {
   return (neuron0x1a91b70()*0.0548257);
}

double NNfunction_ss_uLsR::synapse0x1aab1f0() {
   return (neuron0x1a91d90()*-0.25798);
}

double NNfunction_ss_uLsR::synapse0x1aab230() {
   return (neuron0x1a920d0()*0.0241201);
}

double NNfunction_ss_uLsR::synapse0x1aab270() {
   return (neuron0x1a92410()*-0.0232326);
}

double NNfunction_ss_uLsR::synapse0x1aab2b0() {
   return (neuron0x1a92750()*-0.030306);
}

double NNfunction_ss_uLsR::synapse0x1aab2f0() {
   return (neuron0x1a92a90()*0.0291602);
}

double NNfunction_ss_uLsR::synapse0x1aab330() {
   return (neuron0x1a92dd0()*0.0284527);
}

double NNfunction_ss_uLsR::synapse0x1aab6b0() {
   return (neuron0x1a8e2a0()*0.166786);
}

double NNfunction_ss_uLsR::synapse0x1aab6f0() {
   return (neuron0x1a8e550()*-0.0719896);
}

double NNfunction_ss_uLsR::synapse0x1aab730() {
   return (neuron0x1a8e890()*0.440981);
}

double NNfunction_ss_uLsR::synapse0x1aab770() {
   return (neuron0x1a8ebd0()*0.701637);
}

double NNfunction_ss_uLsR::synapse0x1aab7b0() {
   return (neuron0x1a8ef10()*-0.107749);
}

double NNfunction_ss_uLsR::synapse0x1aab7f0() {
   return (neuron0x1a8f250()*-0.61423);
}

double NNfunction_ss_uLsR::synapse0x1aab830() {
   return (neuron0x1a8f590()*-0.31431);
}

double NNfunction_ss_uLsR::synapse0x1aab870() {
   return (neuron0x1a8f8d0()*-0.0941282);
}

double NNfunction_ss_uLsR::synapse0x1aab8b0() {
   return (neuron0x1a8fc10()*0.446967);
}

double NNfunction_ss_uLsR::synapse0x1aab8f0() {
   return (neuron0x1a8ff50()*0.654564);
}

double NNfunction_ss_uLsR::synapse0x1aab930() {
   return (neuron0x1a90290()*0.877131);
}

double NNfunction_ss_uLsR::synapse0x1aab970() {
   return (neuron0x1a905d0()*0.358189);
}

double NNfunction_ss_uLsR::synapse0x1aab9b0() {
   return (neuron0x1a90910()*-0.190062);
}

double NNfunction_ss_uLsR::synapse0x1aab9f0() {
   return (neuron0x1a90c50()*0.118697);
}

double NNfunction_ss_uLsR::synapse0x1aaba30() {
   return (neuron0x1a90f90()*0.82266);
}

double NNfunction_ss_uLsR::synapse0x1aaba70() {
   return (neuron0x1a912d0()*-0.424944);
}

double NNfunction_ss_uLsR::synapse0x1aab500() {
   return (neuron0x1a91610()*-0.450624);
}

double NNfunction_ss_uLsR::synapse0x1aab540() {
   return (neuron0x1a91b70()*0.758849);
}

double NNfunction_ss_uLsR::synapse0x1aabbc0() {
   return (neuron0x1a91d90()*0.978857);
}

double NNfunction_ss_uLsR::synapse0x1aabc00() {
   return (neuron0x1a920d0()*0.335131);
}

double NNfunction_ss_uLsR::synapse0x1aabc40() {
   return (neuron0x1a92410()*0.233837);
}

double NNfunction_ss_uLsR::synapse0x1aabc80() {
   return (neuron0x1a92750()*0.344535);
}

double NNfunction_ss_uLsR::synapse0x1aabcc0() {
   return (neuron0x1a92a90()*-0.0593667);
}

double NNfunction_ss_uLsR::synapse0x1aabd00() {
   return (neuron0x1a92dd0()*0.67133);
}

double NNfunction_ss_uLsR::synapse0x1aac080() {
   return (neuron0x1a8e2a0()*0.188365);
}

double NNfunction_ss_uLsR::synapse0x1aac0c0() {
   return (neuron0x1a8e550()*-0.0905643);
}

double NNfunction_ss_uLsR::synapse0x1aac100() {
   return (neuron0x1a8e890()*0.584354);
}

double NNfunction_ss_uLsR::synapse0x1aac140() {
   return (neuron0x1a8ebd0()*1.12187);
}

double NNfunction_ss_uLsR::synapse0x1aac180() {
   return (neuron0x1a8ef10()*0.0292201);
}

double NNfunction_ss_uLsR::synapse0x1aac1c0() {
   return (neuron0x1a8f250()*-0.0366993);
}

double NNfunction_ss_uLsR::synapse0x1aac200() {
   return (neuron0x1a8f590()*0.0263043);
}

double NNfunction_ss_uLsR::synapse0x1aac240() {
   return (neuron0x1a8f8d0()*-0.0811666);
}

double NNfunction_ss_uLsR::synapse0x1aac280() {
   return (neuron0x1a8fc10()*0.159337);
}

double NNfunction_ss_uLsR::synapse0x1aac2c0() {
   return (neuron0x1a8ff50()*-0.0851543);
}

double NNfunction_ss_uLsR::synapse0x1aac300() {
   return (neuron0x1a90290()*0.0825584);
}

double NNfunction_ss_uLsR::synapse0x1aac340() {
   return (neuron0x1a905d0()*0.330681);
}

double NNfunction_ss_uLsR::synapse0x1aac380() {
   return (neuron0x1a90910()*0.0485579);
}

double NNfunction_ss_uLsR::synapse0x1aac3c0() {
   return (neuron0x1a90c50()*-0.228817);
}

double NNfunction_ss_uLsR::synapse0x1aac400() {
   return (neuron0x1a90f90()*0.283222);
}

double NNfunction_ss_uLsR::synapse0x1aac440() {
   return (neuron0x1a912d0()*0.0778261);
}

double NNfunction_ss_uLsR::synapse0x1aabed0() {
   return (neuron0x1a91610()*-0.0678871);
}

double NNfunction_ss_uLsR::synapse0x1aabf10() {
   return (neuron0x1a91b70()*-0.137285);
}

double NNfunction_ss_uLsR::synapse0x1aac590() {
   return (neuron0x1a91d90()*0.910705);
}

double NNfunction_ss_uLsR::synapse0x1aac5d0() {
   return (neuron0x1a920d0()*-0.12319);
}

double NNfunction_ss_uLsR::synapse0x1aac610() {
   return (neuron0x1a92410()*0.141327);
}

double NNfunction_ss_uLsR::synapse0x1aac650() {
   return (neuron0x1a92750()*0.0243983);
}

double NNfunction_ss_uLsR::synapse0x1aac690() {
   return (neuron0x1a92a90()*-0.1026);
}

double NNfunction_ss_uLsR::synapse0x1aac6d0() {
   return (neuron0x1a92dd0()*-0.123354);
}

double NNfunction_ss_uLsR::synapse0x1aaca50() {
   return (neuron0x1a8e2a0()*0.189717);
}

double NNfunction_ss_uLsR::synapse0x1aaca90() {
   return (neuron0x1a8e550()*-0.0909484);
}

double NNfunction_ss_uLsR::synapse0x1aacad0() {
   return (neuron0x1a8e890()*0.509146);
}

double NNfunction_ss_uLsR::synapse0x1aacb10() {
   return (neuron0x1a8ebd0()*-0.0702564);
}

double NNfunction_ss_uLsR::synapse0x1aacb50() {
   return (neuron0x1a8ef10()*0.0321428);
}

double NNfunction_ss_uLsR::synapse0x1aacb90() {
   return (neuron0x1a8f250()*0.0488644);
}

double NNfunction_ss_uLsR::synapse0x1aacbd0() {
   return (neuron0x1a8f590()*0.0864011);
}

double NNfunction_ss_uLsR::synapse0x1aacc10() {
   return (neuron0x1a8f8d0()*-0.0652619);
}

double NNfunction_ss_uLsR::synapse0x1aacc50() {
   return (neuron0x1a8fc10()*-0.472021);
}

double NNfunction_ss_uLsR::synapse0x1aacc90() {
   return (neuron0x1a8ff50()*-0.0568945);
}

double NNfunction_ss_uLsR::synapse0x1aaccd0() {
   return (neuron0x1a90290()*0.690702);
}

double NNfunction_ss_uLsR::synapse0x1aacd10() {
   return (neuron0x1a905d0()*-0.432172);
}

double NNfunction_ss_uLsR::synapse0x1aacd50() {
   return (neuron0x1a90910()*0.684487);
}

double NNfunction_ss_uLsR::synapse0x1aacd90() {
   return (neuron0x1a90c50()*0.582367);
}

double NNfunction_ss_uLsR::synapse0x1aacdd0() {
   return (neuron0x1a90f90()*-0.0944132);
}

double NNfunction_ss_uLsR::synapse0x1aace10() {
   return (neuron0x1a912d0()*-0.318882);
}

double NNfunction_ss_uLsR::synapse0x1aac8a0() {
   return (neuron0x1a91610()*-1.26443);
}

double NNfunction_ss_uLsR::synapse0x1aac8e0() {
   return (neuron0x1a91b70()*-0.255778);
}

double NNfunction_ss_uLsR::synapse0x1aacf60() {
   return (neuron0x1a91d90()*-0.0617864);
}

double NNfunction_ss_uLsR::synapse0x1aacfa0() {
   return (neuron0x1a920d0()*-0.219267);
}

double NNfunction_ss_uLsR::synapse0x1aacfe0() {
   return (neuron0x1a92410()*0.168437);
}

double NNfunction_ss_uLsR::synapse0x1aad020() {
   return (neuron0x1a92750()*0.025909);
}

double NNfunction_ss_uLsR::synapse0x1aad060() {
   return (neuron0x1a92a90()*-0.0136437);
}

double NNfunction_ss_uLsR::synapse0x1aad0a0() {
   return (neuron0x1a92dd0()*0.01776);
}

double NNfunction_ss_uLsR::synapse0x1aad420() {
   return (neuron0x1a8e2a0()*-0.00858088);
}

double NNfunction_ss_uLsR::synapse0x1aad460() {
   return (neuron0x1a8e550()*-0.0200147);
}

double NNfunction_ss_uLsR::synapse0x1aad4a0() {
   return (neuron0x1a8e890()*0.0338304);
}

double NNfunction_ss_uLsR::synapse0x1aad4e0() {
   return (neuron0x1a8ebd0()*-1.93243);
}

double NNfunction_ss_uLsR::synapse0x1aad520() {
   return (neuron0x1a8ef10()*0.0116329);
}

double NNfunction_ss_uLsR::synapse0x1aad560() {
   return (neuron0x1a8f250()*0.0136442);
}

double NNfunction_ss_uLsR::synapse0x1aad5a0() {
   return (neuron0x1a8f590()*-0.00912969);
}

double NNfunction_ss_uLsR::synapse0x1aad5e0() {
   return (neuron0x1a8f8d0()*0.023218);
}

double NNfunction_ss_uLsR::synapse0x1aad620() {
   return (neuron0x1a8fc10()*-0.0124692);
}

double NNfunction_ss_uLsR::synapse0x1aad660() {
   return (neuron0x1a8ff50()*0.00227839);
}

double NNfunction_ss_uLsR::synapse0x1aad6a0() {
   return (neuron0x1a90290()*0.0404279);
}

double NNfunction_ss_uLsR::synapse0x1aad6e0() {
   return (neuron0x1a905d0()*-0.384583);
}

double NNfunction_ss_uLsR::synapse0x1aad720() {
   return (neuron0x1a90910()*0.00591554);
}

double NNfunction_ss_uLsR::synapse0x1aad760() {
   return (neuron0x1a90c50()*0.0537302);
}

double NNfunction_ss_uLsR::synapse0x1aad7a0() {
   return (neuron0x1a90f90()*-0.0277427);
}

double NNfunction_ss_uLsR::synapse0x1aad7e0() {
   return (neuron0x1a912d0()*-0.0245551);
}

double NNfunction_ss_uLsR::synapse0x1aad270() {
   return (neuron0x1a91610()*0.0299388);
}

double NNfunction_ss_uLsR::synapse0x1aad2b0() {
   return (neuron0x1a91b70()*0.0227538);
}

double NNfunction_ss_uLsR::synapse0x1aad930() {
   return (neuron0x1a91d90()*-0.360299);
}

double NNfunction_ss_uLsR::synapse0x1aad970() {
   return (neuron0x1a920d0()*0.0132136);
}

double NNfunction_ss_uLsR::synapse0x1aad9b0() {
   return (neuron0x1a92410()*0.000802552);
}

double NNfunction_ss_uLsR::synapse0x1aad9f0() {
   return (neuron0x1a92750()*-0.00164601);
}

double NNfunction_ss_uLsR::synapse0x1aada30() {
   return (neuron0x1a92a90()*0.0117925);
}

double NNfunction_ss_uLsR::synapse0x1aada70() {
   return (neuron0x1a92dd0()*0.0305911);
}

double NNfunction_ss_uLsR::synapse0x1aaddf0() {
   return (neuron0x1a8e2a0()*0.0143583);
}

double NNfunction_ss_uLsR::synapse0x1aade30() {
   return (neuron0x1a8e550()*-0.0114648);
}

double NNfunction_ss_uLsR::synapse0x1aade70() {
   return (neuron0x1a8e890()*0.0542219);
}

double NNfunction_ss_uLsR::synapse0x1aadeb0() {
   return (neuron0x1a8ebd0()*-0.00545562);
}

double NNfunction_ss_uLsR::synapse0x1aadef0() {
   return (neuron0x1a8ef10()*0.0158685);
}

double NNfunction_ss_uLsR::synapse0x1aadf30() {
   return (neuron0x1a8f250()*-0.020802);
}

double NNfunction_ss_uLsR::synapse0x1aadf70() {
   return (neuron0x1a8f590()*0.0166409);
}

double NNfunction_ss_uLsR::synapse0x1aadfb0() {
   return (neuron0x1a8f8d0()*0.0217207);
}

double NNfunction_ss_uLsR::synapse0x1aadff0() {
   return (neuron0x1a8fc10()*0.0188868);
}

double NNfunction_ss_uLsR::synapse0x1aae030() {
   return (neuron0x1a8ff50()*0.110712);
}

double NNfunction_ss_uLsR::synapse0x1aae070() {
   return (neuron0x1a90290()*0.0385489);
}

double NNfunction_ss_uLsR::synapse0x1aae0b0() {
   return (neuron0x1a905d0()*-0.619095);
}

double NNfunction_ss_uLsR::synapse0x1aae0f0() {
   return (neuron0x1a90910()*0.0354097);
}

double NNfunction_ss_uLsR::synapse0x1aae130() {
   return (neuron0x1a90c50()*-0.0171601);
}

double NNfunction_ss_uLsR::synapse0x1aae170() {
   return (neuron0x1a90f90()*0.0161397);
}

double NNfunction_ss_uLsR::synapse0x1aae1b0() {
   return (neuron0x1a912d0()*-0.00800581);
}

double NNfunction_ss_uLsR::synapse0x1aadc40() {
   return (neuron0x1a91610()*-0.0364212);
}

double NNfunction_ss_uLsR::synapse0x1aadc80() {
   return (neuron0x1a91b70()*-0.00683494);
}

double NNfunction_ss_uLsR::synapse0x1aae300() {
   return (neuron0x1a91d90()*-0.583554);
}

double NNfunction_ss_uLsR::synapse0x1aae340() {
   return (neuron0x1a920d0()*0.0283877);
}

double NNfunction_ss_uLsR::synapse0x1aae380() {
   return (neuron0x1a92410()*-0.00224817);
}

double NNfunction_ss_uLsR::synapse0x1aae3c0() {
   return (neuron0x1a92750()*-0.0179049);
}

double NNfunction_ss_uLsR::synapse0x1aae400() {
   return (neuron0x1a92a90()*0.0048082);
}

double NNfunction_ss_uLsR::synapse0x1aae440() {
   return (neuron0x1a92dd0()*-0.00865432);
}

double NNfunction_ss_uLsR::synapse0x1aae7c0() {
   return (neuron0x1a8e2a0()*0.00255681);
}

double NNfunction_ss_uLsR::synapse0x1aae800() {
   return (neuron0x1a8e550()*-0.0338274);
}

double NNfunction_ss_uLsR::synapse0x1aae840() {
   return (neuron0x1a8e890()*-0.073974);
}

double NNfunction_ss_uLsR::synapse0x1aae880() {
   return (neuron0x1a8ebd0()*0.0566442);
}

double NNfunction_ss_uLsR::synapse0x1aae8c0() {
   return (neuron0x1a8ef10()*-0.0442052);
}

double NNfunction_ss_uLsR::synapse0x1aae900() {
   return (neuron0x1a8f250()*0.115198);
}

double NNfunction_ss_uLsR::synapse0x1aae940() {
   return (neuron0x1a8f590()*-0.0962768);
}

double NNfunction_ss_uLsR::synapse0x1aae980() {
   return (neuron0x1a8f8d0()*-0.0464821);
}

double NNfunction_ss_uLsR::synapse0x1aae9c0() {
   return (neuron0x1a8fc10()*0.0698035);
}

double NNfunction_ss_uLsR::synapse0x1aaea00() {
   return (neuron0x1a8ff50()*-0.149108);
}

double NNfunction_ss_uLsR::synapse0x1aaea40() {
   return (neuron0x1a90290()*-0.0124501);
}

double NNfunction_ss_uLsR::synapse0x1aaea80() {
   return (neuron0x1a905d0()*0.695559);
}

double NNfunction_ss_uLsR::synapse0x1aaeac0() {
   return (neuron0x1a90910()*-0.0734298);
}

double NNfunction_ss_uLsR::synapse0x1aaeb00() {
   return (neuron0x1a90c50()*0.0467517);
}

double NNfunction_ss_uLsR::synapse0x1aaeb40() {
   return (neuron0x1a90f90()*-0.0531109);
}

double NNfunction_ss_uLsR::synapse0x1aaeb80() {
   return (neuron0x1a912d0()*-0.0213173);
}

double NNfunction_ss_uLsR::synapse0x1aae610() {
   return (neuron0x1a91610()*0.0608541);
}

double NNfunction_ss_uLsR::synapse0x1aae650() {
   return (neuron0x1a91b70()*0.0114756);
}

double NNfunction_ss_uLsR::synapse0x1aaecd0() {
   return (neuron0x1a91d90()*0.980215);
}

double NNfunction_ss_uLsR::synapse0x1aaed10() {
   return (neuron0x1a920d0()*0.0392949);
}

double NNfunction_ss_uLsR::synapse0x1aaed50() {
   return (neuron0x1a92410()*0.0499852);
}

double NNfunction_ss_uLsR::synapse0x1aaed90() {
   return (neuron0x1a92750()*-0.0238075);
}

double NNfunction_ss_uLsR::synapse0x1aaedd0() {
   return (neuron0x1a92a90()*0.10209);
}

double NNfunction_ss_uLsR::synapse0x1aaee10() {
   return (neuron0x1a92dd0()*-0.0299255);
}

double NNfunction_ss_uLsR::synapse0x1aaf190() {
   return (neuron0x1a8e2a0()*-0.00487211);
}

double NNfunction_ss_uLsR::synapse0x1aaf1d0() {
   return (neuron0x1a8e550()*0.118508);
}

double NNfunction_ss_uLsR::synapse0x1aaf210() {
   return (neuron0x1a8e890()*-1.09984);
}

double NNfunction_ss_uLsR::synapse0x1aaf250() {
   return (neuron0x1a8ebd0()*-1.27883);
}

double NNfunction_ss_uLsR::synapse0x1aaf290() {
   return (neuron0x1a8ef10()*0.151689);
}

double NNfunction_ss_uLsR::synapse0x1aaf2d0() {
   return (neuron0x1a8f250()*1.51853);
}

double NNfunction_ss_uLsR::synapse0x1aaf310() {
   return (neuron0x1a8f590()*0.456044);
}

double NNfunction_ss_uLsR::synapse0x1aaf350() {
   return (neuron0x1a8f8d0()*-0.0529941);
}

double NNfunction_ss_uLsR::synapse0x1aaf390() {
   return (neuron0x1a8fc10()*0.722102);
}

double NNfunction_ss_uLsR::synapse0x1aaf3d0() {
   return (neuron0x1a8ff50()*2.79694);
}

double NNfunction_ss_uLsR::synapse0x1aaf410() {
   return (neuron0x1a90290()*0.677047);
}

double NNfunction_ss_uLsR::synapse0x1aaf450() {
   return (neuron0x1a905d0()*-2.96065);
}

double NNfunction_ss_uLsR::synapse0x1aaf490() {
   return (neuron0x1a90910()*1.1272);
}

double NNfunction_ss_uLsR::synapse0x1aaf4d0() {
   return (neuron0x1a90c50()*-0.914424);
}

double NNfunction_ss_uLsR::synapse0x1aaf510() {
   return (neuron0x1a90f90()*0.274185);
}

double NNfunction_ss_uLsR::synapse0x1aaf550() {
   return (neuron0x1a912d0()*-0.056387);
}

double NNfunction_ss_uLsR::synapse0x1aaefe0() {
   return (neuron0x1a91610()*-0.340654);
}

double NNfunction_ss_uLsR::synapse0x1aaf020() {
   return (neuron0x1a91b70()*-0.0794815);
}

double NNfunction_ss_uLsR::synapse0x1aaf6a0() {
   return (neuron0x1a91d90()*0.762456);
}

double NNfunction_ss_uLsR::synapse0x1aaf6e0() {
   return (neuron0x1a920d0()*-0.604987);
}

double NNfunction_ss_uLsR::synapse0x1aaf720() {
   return (neuron0x1a92410()*1.00313);
}

double NNfunction_ss_uLsR::synapse0x1aaf760() {
   return (neuron0x1a92750()*-0.152675);
}

double NNfunction_ss_uLsR::synapse0x1aaf7a0() {
   return (neuron0x1a92a90()*-0.220893);
}

double NNfunction_ss_uLsR::synapse0x1aaf7e0() {
   return (neuron0x1a92dd0()*-0.188251);
}

double NNfunction_ss_uLsR::synapse0x1a98290() {
   return (neuron0x1a8e2a0()*0.00346436);
}

double NNfunction_ss_uLsR::synapse0x1a982d0() {
   return (neuron0x1a8e550()*0.00815061);
}

double NNfunction_ss_uLsR::synapse0x1a98310() {
   return (neuron0x1a8e890()*0.040925);
}

double NNfunction_ss_uLsR::synapse0x1a98350() {
   return (neuron0x1a8ebd0()*-1.87324);
}

double NNfunction_ss_uLsR::synapse0x1a98390() {
   return (neuron0x1a8ef10()*-0.00352355);
}

double NNfunction_ss_uLsR::synapse0x1a983d0() {
   return (neuron0x1a8f250()*-0.0110247);
}

double NNfunction_ss_uLsR::synapse0x1a98410() {
   return (neuron0x1a8f590()*-0.00248952);
}

double NNfunction_ss_uLsR::synapse0x1a98450() {
   return (neuron0x1a8f8d0()*-0.00498636);
}

double NNfunction_ss_uLsR::synapse0x1aaff70() {
   return (neuron0x1a8fc10()*-0.00382662);
}

double NNfunction_ss_uLsR::synapse0x1aaffb0() {
   return (neuron0x1a8ff50()*-0.00870217);
}

double NNfunction_ss_uLsR::synapse0x1aafff0() {
   return (neuron0x1a90290()*-0.0203916);
}

double NNfunction_ss_uLsR::synapse0x1ab0030() {
   return (neuron0x1a905d0()*0.277114);
}

double NNfunction_ss_uLsR::synapse0x1ab0070() {
   return (neuron0x1a90910()*-0.00214245);
}

double NNfunction_ss_uLsR::synapse0x1ab00b0() {
   return (neuron0x1a90c50()*0.00442016);
}

double NNfunction_ss_uLsR::synapse0x1ab00f0() {
   return (neuron0x1a90f90()*-0.00466857);
}

double NNfunction_ss_uLsR::synapse0x1ab0130() {
   return (neuron0x1a912d0()*0.00760662);
}

double NNfunction_ss_uLsR::synapse0x1aaf9b0() {
   return (neuron0x1a91610()*0.00380851);
}

double NNfunction_ss_uLsR::synapse0x1aaf9f0() {
   return (neuron0x1a91b70()*-0.00672796);
}

double NNfunction_ss_uLsR::synapse0x1ab0280() {
   return (neuron0x1a91d90()*0.321794);
}

double NNfunction_ss_uLsR::synapse0x1ab02c0() {
   return (neuron0x1a920d0()*-0.0124422);
}

double NNfunction_ss_uLsR::synapse0x1ab0300() {
   return (neuron0x1a92410()*-0.0120548);
}

double NNfunction_ss_uLsR::synapse0x1ab0340() {
   return (neuron0x1a92750()*0.00359679);
}

double NNfunction_ss_uLsR::synapse0x1ab0380() {
   return (neuron0x1a92a90()*-0.00301195);
}

double NNfunction_ss_uLsR::synapse0x1ab03c0() {
   return (neuron0x1a92dd0()*-0.00172901);
}

double NNfunction_ss_uLsR::synapse0x1ab0740() {
   return (neuron0x1a8e2a0()*0.161256);
}

double NNfunction_ss_uLsR::synapse0x1ab0780() {
   return (neuron0x1a8e550()*-0.0435913);
}

double NNfunction_ss_uLsR::synapse0x1ab07c0() {
   return (neuron0x1a8e890()*0.339388);
}

double NNfunction_ss_uLsR::synapse0x1ab0800() {
   return (neuron0x1a8ebd0()*-0.0488248);
}

double NNfunction_ss_uLsR::synapse0x1ab0840() {
   return (neuron0x1a8ef10()*0.0384207);
}

double NNfunction_ss_uLsR::synapse0x1ab0880() {
   return (neuron0x1a8f250()*0.173775);
}

double NNfunction_ss_uLsR::synapse0x1ab08c0() {
   return (neuron0x1a8f590()*0.0210347);
}

double NNfunction_ss_uLsR::synapse0x1ab0900() {
   return (neuron0x1a8f8d0()*0.106681);
}

double NNfunction_ss_uLsR::synapse0x1ab0940() {
   return (neuron0x1a8fc10()*0.0660969);
}

double NNfunction_ss_uLsR::synapse0x1ab0980() {
   return (neuron0x1a8ff50()*0.141076);
}

double NNfunction_ss_uLsR::synapse0x1ab09c0() {
   return (neuron0x1a90290()*-0.381222);
}

double NNfunction_ss_uLsR::synapse0x1ab0a00() {
   return (neuron0x1a905d0()*-0.179147);
}

double NNfunction_ss_uLsR::synapse0x1ab0a40() {
   return (neuron0x1a90910()*1.00556);
}

double NNfunction_ss_uLsR::synapse0x1ab0a80() {
   return (neuron0x1a90c50()*-0.165091);
}

double NNfunction_ss_uLsR::synapse0x1ab0ac0() {
   return (neuron0x1a90f90()*0.343966);
}

double NNfunction_ss_uLsR::synapse0x1ab0b00() {
   return (neuron0x1a912d0()*0.242532);
}

double NNfunction_ss_uLsR::synapse0x1ab0590() {
   return (neuron0x1a91610()*0.0785003);
}

double NNfunction_ss_uLsR::synapse0x1ab05d0() {
   return (neuron0x1a91b70()*0.454835);
}

double NNfunction_ss_uLsR::synapse0x1ab0c50() {
   return (neuron0x1a91d90()*-0.0522433);
}

double NNfunction_ss_uLsR::synapse0x1ab0c90() {
   return (neuron0x1a920d0()*-0.154841);
}

double NNfunction_ss_uLsR::synapse0x1ab0cd0() {
   return (neuron0x1a92410()*0.056153);
}

double NNfunction_ss_uLsR::synapse0x1ab0d10() {
   return (neuron0x1a92750()*0.112749);
}

double NNfunction_ss_uLsR::synapse0x1ab0d50() {
   return (neuron0x1a92a90()*0.385938);
}

double NNfunction_ss_uLsR::synapse0x1ab0d90() {
   return (neuron0x1a92dd0()*-0.182234);
}

double NNfunction_ss_uLsR::synapse0x1ab1110() {
   return (neuron0x1a8e2a0()*0.021339);
}

double NNfunction_ss_uLsR::synapse0x1ab1150() {
   return (neuron0x1a8e550()*0.0360449);
}

double NNfunction_ss_uLsR::synapse0x1ab1190() {
   return (neuron0x1a8e890()*-0.0846563);
}

double NNfunction_ss_uLsR::synapse0x1ab11d0() {
   return (neuron0x1a8ebd0()*0.132084);
}

double NNfunction_ss_uLsR::synapse0x1ab1210() {
   return (neuron0x1a8ef10()*0.0116287);
}

double NNfunction_ss_uLsR::synapse0x1ab1250() {
   return (neuron0x1a8f250()*-0.0114403);
}

double NNfunction_ss_uLsR::synapse0x1ab1290() {
   return (neuron0x1a8f590()*-0.0315175);
}

double NNfunction_ss_uLsR::synapse0x1ab12d0() {
   return (neuron0x1a8f8d0()*0.00309);
}

double NNfunction_ss_uLsR::synapse0x1ab1310() {
   return (neuron0x1a8fc10()*-0.0951728);
}

double NNfunction_ss_uLsR::synapse0x1ab1350() {
   return (neuron0x1a8ff50()*-0.0140607);
}

double NNfunction_ss_uLsR::synapse0x1ab1390() {
   return (neuron0x1a90290()*-0.105352);
}

double NNfunction_ss_uLsR::synapse0x1ab13d0() {
   return (neuron0x1a905d0()*-0.860189);
}

double NNfunction_ss_uLsR::synapse0x1ab1410() {
   return (neuron0x1a90910()*0.0160508);
}

double NNfunction_ss_uLsR::synapse0x1ab1450() {
   return (neuron0x1a90c50()*0.0722426);
}

double NNfunction_ss_uLsR::synapse0x1ab1490() {
   return (neuron0x1a90f90()*0.0816596);
}

double NNfunction_ss_uLsR::synapse0x1ab14d0() {
   return (neuron0x1a912d0()*0.0259667);
}

double NNfunction_ss_uLsR::synapse0x1ab0f60() {
   return (neuron0x1a91610()*-0.0500417);
}

double NNfunction_ss_uLsR::synapse0x1ab0fa0() {
   return (neuron0x1a91b70()*0.0267555);
}

double NNfunction_ss_uLsR::synapse0x1aa1ad0() {
   return (neuron0x1a91d90()*1.15064);
}

double NNfunction_ss_uLsR::synapse0x1aa1b10() {
   return (neuron0x1a920d0()*-0.015229);
}

double NNfunction_ss_uLsR::synapse0x1aa1b50() {
   return (neuron0x1a92410()*0.0445335);
}

double NNfunction_ss_uLsR::synapse0x1aa1b90() {
   return (neuron0x1a92750()*0.0350401);
}

double NNfunction_ss_uLsR::synapse0x1aa1bd0() {
   return (neuron0x1a92a90()*-0.0628138);
}

double NNfunction_ss_uLsR::synapse0x1aa1c10() {
   return (neuron0x1a92dd0()*0.0507718);
}

double NNfunction_ss_uLsR::synapse0x1aa1f90() {
   return (neuron0x1a8e2a0()*0.036556);
}

double NNfunction_ss_uLsR::synapse0x1aa1fd0() {
   return (neuron0x1a8e550()*-0.0351255);
}

double NNfunction_ss_uLsR::synapse0x1aa2010() {
   return (neuron0x1a8e890()*-0.100857);
}

double NNfunction_ss_uLsR::synapse0x1aa2050() {
   return (neuron0x1a8ebd0()*0.131448);
}

double NNfunction_ss_uLsR::synapse0x1aa2090() {
   return (neuron0x1a8ef10()*0.0281638);
}

double NNfunction_ss_uLsR::synapse0x1aa20d0() {
   return (neuron0x1a8f250()*-0.0362596);
}

double NNfunction_ss_uLsR::synapse0x1aa2110() {
   return (neuron0x1a8f590()*0.00570712);
}

double NNfunction_ss_uLsR::synapse0x1aa2150() {
   return (neuron0x1a8f8d0()*0.0235724);
}

double NNfunction_ss_uLsR::synapse0x1aa2190() {
   return (neuron0x1a8fc10()*-0.0522159);
}

double NNfunction_ss_uLsR::synapse0x1aa21d0() {
   return (neuron0x1a8ff50()*0.0504984);
}

double NNfunction_ss_uLsR::synapse0x1aa2210() {
   return (neuron0x1a90290()*-0.0229379);
}

double NNfunction_ss_uLsR::synapse0x1aa2250() {
   return (neuron0x1a905d0()*-0.0884845);
}

double NNfunction_ss_uLsR::synapse0x1aa2290() {
   return (neuron0x1a90910()*0.195502);
}

double NNfunction_ss_uLsR::synapse0x1aa22d0() {
   return (neuron0x1a90c50()*-0.0838377);
}

double NNfunction_ss_uLsR::synapse0x1aa2310() {
   return (neuron0x1a90f90()*0.196966);
}

double NNfunction_ss_uLsR::synapse0x1aa2350() {
   return (neuron0x1a912d0()*0.141093);
}

double NNfunction_ss_uLsR::synapse0x1aa1de0() {
   return (neuron0x1a91610()*-0.0926388);
}

double NNfunction_ss_uLsR::synapse0x1aa1e20() {
   return (neuron0x1a91b70()*0.0622237);
}

double NNfunction_ss_uLsR::synapse0x1aa24a0() {
   return (neuron0x1a91d90()*-0.171208);
}

double NNfunction_ss_uLsR::synapse0x1aa24e0() {
   return (neuron0x1a920d0()*0.012068);
}

double NNfunction_ss_uLsR::synapse0x1aa2520() {
   return (neuron0x1a92410()*0.0317673);
}

double NNfunction_ss_uLsR::synapse0x1aa2560() {
   return (neuron0x1a92750()*0.0152163);
}

double NNfunction_ss_uLsR::synapse0x1aa25a0() {
   return (neuron0x1a92a90()*-0.0331008);
}

double NNfunction_ss_uLsR::synapse0x1aa25e0() {
   return (neuron0x1a92dd0()*-0.00703949);
}

double NNfunction_ss_uLsR::synapse0x1aa2960() {
   return (neuron0x1a8e2a0()*0.183767);
}

double NNfunction_ss_uLsR::synapse0x1aa29a0() {
   return (neuron0x1a8e550()*-0.939467);
}

double NNfunction_ss_uLsR::synapse0x1aa29e0() {
   return (neuron0x1a8e890()*-0.673643);
}

double NNfunction_ss_uLsR::synapse0x1aa2a20() {
   return (neuron0x1a8ebd0()*0.46748);
}

double NNfunction_ss_uLsR::synapse0x1aa2a60() {
   return (neuron0x1a8ef10()*0.992161);
}

double NNfunction_ss_uLsR::synapse0x1aa2aa0() {
   return (neuron0x1a8f250()*0.538201);
}

double NNfunction_ss_uLsR::synapse0x1aa2ae0() {
   return (neuron0x1a8f590()*0.631631);
}

double NNfunction_ss_uLsR::synapse0x1aa2b20() {
   return (neuron0x1a8f8d0()*0.960326);
}

double NNfunction_ss_uLsR::synapse0x1aa2b60() {
   return (neuron0x1a8fc10()*0.33534);
}

double NNfunction_ss_uLsR::synapse0x1aa2ba0() {
   return (neuron0x1a8ff50()*0.325051);
}

double NNfunction_ss_uLsR::synapse0x1aa2be0() {
   return (neuron0x1a90290()*-0.10469);
}

double NNfunction_ss_uLsR::synapse0x1aa2c20() {
   return (neuron0x1a905d0()*-0.782229);
}

double NNfunction_ss_uLsR::synapse0x1aa2c60() {
   return (neuron0x1a90910()*-0.78497);
}

double NNfunction_ss_uLsR::synapse0x1aa2ca0() {
   return (neuron0x1a90c50()*-0.676475);
}

double NNfunction_ss_uLsR::synapse0x1aa2ce0() {
   return (neuron0x1a90f90()*0.425732);
}

double NNfunction_ss_uLsR::synapse0x1aa2d20() {
   return (neuron0x1a912d0()*0.569144);
}

double NNfunction_ss_uLsR::synapse0x1aa27b0() {
   return (neuron0x1a91610()*-0.256433);
}

double NNfunction_ss_uLsR::synapse0x1aa27f0() {
   return (neuron0x1a91b70()*-0.328234);
}

double NNfunction_ss_uLsR::synapse0x1aa2e70() {
   return (neuron0x1a91d90()*0.0720413);
}

double NNfunction_ss_uLsR::synapse0x1aa2eb0() {
   return (neuron0x1a920d0()*-0.0399891);
}

double NNfunction_ss_uLsR::synapse0x1aa2ef0() {
   return (neuron0x1a92410()*0.566599);
}

double NNfunction_ss_uLsR::synapse0x1aa2f30() {
   return (neuron0x1a92750()*-0.629454);
}

double NNfunction_ss_uLsR::synapse0x1aa2f70() {
   return (neuron0x1a92a90()*-0.604118);
}

double NNfunction_ss_uLsR::synapse0x1aa2fb0() {
   return (neuron0x1a92dd0()*-0.114417);
}

double NNfunction_ss_uLsR::synapse0x1aa3330() {
   return (neuron0x1a8e2a0()*-0.0391795);
}

double NNfunction_ss_uLsR::synapse0x1aa3370() {
   return (neuron0x1a8e550()*-0.134116);
}

double NNfunction_ss_uLsR::synapse0x1aa33b0() {
   return (neuron0x1a8e890()*-0.119183);
}

double NNfunction_ss_uLsR::synapse0x1aa33f0() {
   return (neuron0x1a8ebd0()*1.61272);
}

double NNfunction_ss_uLsR::synapse0x1aa3430() {
   return (neuron0x1a8ef10()*0.07171);
}

double NNfunction_ss_uLsR::synapse0x1aa3470() {
   return (neuron0x1a8f250()*-0.628956);
}

double NNfunction_ss_uLsR::synapse0x1aa34b0() {
   return (neuron0x1a8f590()*-0.447522);
}

double NNfunction_ss_uLsR::synapse0x1aa34f0() {
   return (neuron0x1a8f8d0()*-0.171227);
}

double NNfunction_ss_uLsR::synapse0x1aa3530() {
   return (neuron0x1a8fc10()*-0.149421);
}

double NNfunction_ss_uLsR::synapse0x1aa3570() {
   return (neuron0x1a8ff50()*-0.287487);
}

double NNfunction_ss_uLsR::synapse0x1aa35b0() {
   return (neuron0x1a90290()*-0.509304);
}

double NNfunction_ss_uLsR::synapse0x1aa35f0() {
   return (neuron0x1a905d0()*0.742987);
}

double NNfunction_ss_uLsR::synapse0x1aa3630() {
   return (neuron0x1a90910()*-0.142643);
}

double NNfunction_ss_uLsR::synapse0x1aa3670() {
   return (neuron0x1a90c50()*0.699734);
}

double NNfunction_ss_uLsR::synapse0x1aa36b0() {
   return (neuron0x1a90f90()*0.167455);
}

double NNfunction_ss_uLsR::synapse0x1aa36f0() {
   return (neuron0x1a912d0()*-0.112086);
}

double NNfunction_ss_uLsR::synapse0x1aa3180() {
   return (neuron0x1a91610()*-0.20921);
}

double NNfunction_ss_uLsR::synapse0x1aa31c0() {
   return (neuron0x1a91b70()*-0.0968842);
}

double NNfunction_ss_uLsR::synapse0x1aa3840() {
   return (neuron0x1a91d90()*0.423481);
}

double NNfunction_ss_uLsR::synapse0x1aa3880() {
   return (neuron0x1a920d0()*-0.135687);
}

double NNfunction_ss_uLsR::synapse0x1aa38c0() {
   return (neuron0x1a92410()*-0.56251);
}

double NNfunction_ss_uLsR::synapse0x1aa3900() {
   return (neuron0x1a92750()*-0.181548);
}

double NNfunction_ss_uLsR::synapse0x1aa3940() {
   return (neuron0x1a92a90()*0.45791);
}

double NNfunction_ss_uLsR::synapse0x1aa3980() {
   return (neuron0x1a92dd0()*0.319302);
}

double NNfunction_ss_uLsR::synapse0x1ab5850() {
   return (neuron0x1a8e2a0()*0.0799353);
}

double NNfunction_ss_uLsR::synapse0x1ab5890() {
   return (neuron0x1a8e550()*-0.0857586);
}

double NNfunction_ss_uLsR::synapse0x1ab58d0() {
   return (neuron0x1a8e890()*-0.0256674);
}

double NNfunction_ss_uLsR::synapse0x1ab5910() {
   return (neuron0x1a8ebd0()*-0.443306);
}

double NNfunction_ss_uLsR::synapse0x1ab5950() {
   return (neuron0x1a8ef10()*0.480844);
}

double NNfunction_ss_uLsR::synapse0x1ab5990() {
   return (neuron0x1a8f250()*0.382402);
}

double NNfunction_ss_uLsR::synapse0x1ab59d0() {
   return (neuron0x1a8f590()*0.543955);
}

double NNfunction_ss_uLsR::synapse0x1ab5a10() {
   return (neuron0x1a8f8d0()*-0.748365);
}

double NNfunction_ss_uLsR::synapse0x1ab5a50() {
   return (neuron0x1a8fc10()*-0.13184);
}

double NNfunction_ss_uLsR::synapse0x1ab5a90() {
   return (neuron0x1a8ff50()*-0.306657);
}

double NNfunction_ss_uLsR::synapse0x1ab5ad0() {
   return (neuron0x1a90290()*0.5392);
}

double NNfunction_ss_uLsR::synapse0x1ab5b10() {
   return (neuron0x1a905d0()*-0.0585891);
}

double NNfunction_ss_uLsR::synapse0x1ab5b50() {
   return (neuron0x1a90910()*0.771569);
}

double NNfunction_ss_uLsR::synapse0x1ab5b90() {
   return (neuron0x1a90c50()*-0.925535);
}

double NNfunction_ss_uLsR::synapse0x1ab5bd0() {
   return (neuron0x1a90f90()*-0.0389592);
}

double NNfunction_ss_uLsR::synapse0x1ab5c10() {
   return (neuron0x1a912d0()*-0.0684796);
}

double NNfunction_ss_uLsR::synapse0x1aa39c0() {
   return (neuron0x1a91610()*-0.588151);
}

double NNfunction_ss_uLsR::synapse0x1aa3a00() {
   return (neuron0x1a91b70()*1.46735);
}

double NNfunction_ss_uLsR::synapse0x1ab5d60() {
   return (neuron0x1a91d90()*0.756347);
}

double NNfunction_ss_uLsR::synapse0x1ab5da0() {
   return (neuron0x1a920d0()*1.17111);
}

double NNfunction_ss_uLsR::synapse0x1ab5de0() {
   return (neuron0x1a92410()*1.06909);
}

double NNfunction_ss_uLsR::synapse0x1ab5e20() {
   return (neuron0x1a92750()*-0.214169);
}

double NNfunction_ss_uLsR::synapse0x1ab5e60() {
   return (neuron0x1a92a90()*0.0576279);
}

double NNfunction_ss_uLsR::synapse0x1ab5ea0() {
   return (neuron0x1a92dd0()*0.808695);
}

double NNfunction_ss_uLsR::synapse0x1ab6220() {
   return (neuron0x1a8e2a0()*-0.335615);
}

double NNfunction_ss_uLsR::synapse0x1ab6260() {
   return (neuron0x1a8e550()*0.643544);
}

double NNfunction_ss_uLsR::synapse0x1ab62a0() {
   return (neuron0x1a8e890()*1.14614);
}

double NNfunction_ss_uLsR::synapse0x1ab62e0() {
   return (neuron0x1a8ebd0()*0.510298);
}

double NNfunction_ss_uLsR::synapse0x1ab6320() {
   return (neuron0x1a8ef10()*-0.456051);
}

double NNfunction_ss_uLsR::synapse0x1ab6360() {
   return (neuron0x1a8f250()*-1.52488);
}

double NNfunction_ss_uLsR::synapse0x1ab63a0() {
   return (neuron0x1a8f590()*0.368748);
}

double NNfunction_ss_uLsR::synapse0x1ab63e0() {
   return (neuron0x1a8f8d0()*-0.857734);
}

double NNfunction_ss_uLsR::synapse0x1ab6420() {
   return (neuron0x1a8fc10()*0.87558);
}

double NNfunction_ss_uLsR::synapse0x1ab6460() {
   return (neuron0x1a8ff50()*-0.310871);
}

double NNfunction_ss_uLsR::synapse0x1ab64a0() {
   return (neuron0x1a90290()*0.121994);
}

double NNfunction_ss_uLsR::synapse0x1ab64e0() {
   return (neuron0x1a905d0()*-0.830935);
}

double NNfunction_ss_uLsR::synapse0x1ab6520() {
   return (neuron0x1a90910()*0.11317);
}

double NNfunction_ss_uLsR::synapse0x1ab6560() {
   return (neuron0x1a90c50()*0.29301);
}

double NNfunction_ss_uLsR::synapse0x1ab65a0() {
   return (neuron0x1a90f90()*0.0860461);
}

double NNfunction_ss_uLsR::synapse0x1ab65e0() {
   return (neuron0x1a912d0()*0.94208);
}

double NNfunction_ss_uLsR::synapse0x1ab6070() {
   return (neuron0x1a91610()*0.130448);
}

double NNfunction_ss_uLsR::synapse0x1ab60b0() {
   return (neuron0x1a91b70()*0.235611);
}

double NNfunction_ss_uLsR::synapse0x1ab6730() {
   return (neuron0x1a91d90()*0.307911);
}

double NNfunction_ss_uLsR::synapse0x1ab6770() {
   return (neuron0x1a920d0()*-0.426418);
}

double NNfunction_ss_uLsR::synapse0x1ab67b0() {
   return (neuron0x1a92410()*0.080107);
}

double NNfunction_ss_uLsR::synapse0x1ab67f0() {
   return (neuron0x1a92750()*0.271583);
}

double NNfunction_ss_uLsR::synapse0x1ab6830() {
   return (neuron0x1a92a90()*-0.377629);
}

double NNfunction_ss_uLsR::synapse0x1ab6870() {
   return (neuron0x1a92dd0()*0.017129);
}

double NNfunction_ss_uLsR::synapse0x1ab6bf0() {
   return (neuron0x1a8e2a0()*0.0893681);
}

double NNfunction_ss_uLsR::synapse0x1ab6c30() {
   return (neuron0x1a8e550()*-0.646339);
}

double NNfunction_ss_uLsR::synapse0x1ab6c70() {
   return (neuron0x1a8e890()*0.692919);
}

double NNfunction_ss_uLsR::synapse0x1ab6cb0() {
   return (neuron0x1a8ebd0()*-0.197808);
}

double NNfunction_ss_uLsR::synapse0x1ab6cf0() {
   return (neuron0x1a8ef10()*-0.436927);
}

double NNfunction_ss_uLsR::synapse0x1ab6d30() {
   return (neuron0x1a8f250()*-0.88255);
}

double NNfunction_ss_uLsR::synapse0x1ab6d70() {
   return (neuron0x1a8f590()*0.861506);
}

double NNfunction_ss_uLsR::synapse0x1ab6db0() {
   return (neuron0x1a8f8d0()*0.618163);
}

double NNfunction_ss_uLsR::synapse0x1ab6df0() {
   return (neuron0x1a8fc10()*0.275844);
}

double NNfunction_ss_uLsR::synapse0x1ab6e30() {
   return (neuron0x1a8ff50()*0.280927);
}

double NNfunction_ss_uLsR::synapse0x1ab6e70() {
   return (neuron0x1a90290()*-0.0194714);
}

double NNfunction_ss_uLsR::synapse0x1ab6eb0() {
   return (neuron0x1a905d0()*-0.529985);
}

double NNfunction_ss_uLsR::synapse0x1ab6ef0() {
   return (neuron0x1a90910()*0.667443);
}

double NNfunction_ss_uLsR::synapse0x1ab6f30() {
   return (neuron0x1a90c50()*0.271876);
}

double NNfunction_ss_uLsR::synapse0x1ab6f70() {
   return (neuron0x1a90f90()*-0.246215);
}

double NNfunction_ss_uLsR::synapse0x1ab6fb0() {
   return (neuron0x1a912d0()*0.648409);
}

double NNfunction_ss_uLsR::synapse0x1ab6a40() {
   return (neuron0x1a91610()*-0.656153);
}

double NNfunction_ss_uLsR::synapse0x1ab6a80() {
   return (neuron0x1a91b70()*-0.679816);
}

double NNfunction_ss_uLsR::synapse0x1ab7100() {
   return (neuron0x1a91d90()*0.208001);
}

double NNfunction_ss_uLsR::synapse0x1ab7140() {
   return (neuron0x1a920d0()*-0.67277);
}

double NNfunction_ss_uLsR::synapse0x1ab7180() {
   return (neuron0x1a92410()*0.250864);
}

double NNfunction_ss_uLsR::synapse0x1ab71c0() {
   return (neuron0x1a92750()*0.0399631);
}

double NNfunction_ss_uLsR::synapse0x1ab7200() {
   return (neuron0x1a92a90()*-0.180712);
}

double NNfunction_ss_uLsR::synapse0x1ab7240() {
   return (neuron0x1a92dd0()*-0.139574);
}

double NNfunction_ss_uLsR::synapse0x1ab75c0() {
   return (neuron0x1a8e2a0()*-0.0565906);
}

double NNfunction_ss_uLsR::synapse0x1ab7600() {
   return (neuron0x1a8e550()*0.115686);
}

double NNfunction_ss_uLsR::synapse0x1ab7640() {
   return (neuron0x1a8e890()*0.929515);
}

double NNfunction_ss_uLsR::synapse0x1ab7680() {
   return (neuron0x1a8ebd0()*-0.63225);
}

double NNfunction_ss_uLsR::synapse0x1ab76c0() {
   return (neuron0x1a8ef10()*0.222011);
}

double NNfunction_ss_uLsR::synapse0x1ab7700() {
   return (neuron0x1a8f250()*-0.048874);
}

double NNfunction_ss_uLsR::synapse0x1ab7740() {
   return (neuron0x1a8f590()*0.0152561);
}

double NNfunction_ss_uLsR::synapse0x1ab7780() {
   return (neuron0x1a8f8d0()*0.127271);
}

double NNfunction_ss_uLsR::synapse0x1ab77c0() {
   return (neuron0x1a8fc10()*0.0731105);
}

double NNfunction_ss_uLsR::synapse0x1ab7800() {
   return (neuron0x1a8ff50()*0.0548153);
}

double NNfunction_ss_uLsR::synapse0x1ab7840() {
   return (neuron0x1a90290()*0.112391);
}

double NNfunction_ss_uLsR::synapse0x1ab7880() {
   return (neuron0x1a905d0()*-0.568244);
}

double NNfunction_ss_uLsR::synapse0x1ab78c0() {
   return (neuron0x1a90910()*-0.0548247);
}

double NNfunction_ss_uLsR::synapse0x1ab7900() {
   return (neuron0x1a90c50()*-0.0571405);
}

double NNfunction_ss_uLsR::synapse0x1ab7940() {
   return (neuron0x1a90f90()*-0.129007);
}

double NNfunction_ss_uLsR::synapse0x1ab7980() {
   return (neuron0x1a912d0()*-0.0228785);
}

double NNfunction_ss_uLsR::synapse0x1ab7410() {
   return (neuron0x1a91610()*0.098712);
}

double NNfunction_ss_uLsR::synapse0x1ab7450() {
   return (neuron0x1a91b70()*-0.0723641);
}

double NNfunction_ss_uLsR::synapse0x1ab7ad0() {
   return (neuron0x1a91d90()*-0.353291);
}

double NNfunction_ss_uLsR::synapse0x1ab7b10() {
   return (neuron0x1a920d0()*-0.0143629);
}

double NNfunction_ss_uLsR::synapse0x1ab7b50() {
   return (neuron0x1a92410()*-0.0316933);
}

double NNfunction_ss_uLsR::synapse0x1ab7b90() {
   return (neuron0x1a92750()*0.0780391);
}

double NNfunction_ss_uLsR::synapse0x1ab7bd0() {
   return (neuron0x1a92a90()*-0.0582883);
}

double NNfunction_ss_uLsR::synapse0x1ab7c10() {
   return (neuron0x1a92dd0()*-0.0911614);
}

double NNfunction_ss_uLsR::synapse0x1a941a0() {
   return (neuron0x1a93240()*-1.2932);
}

double NNfunction_ss_uLsR::synapse0x1a941e0() {
   return (neuron0x1a93b90()*-0.246884);
}

double NNfunction_ss_uLsR::synapse0x1a956c0() {
   return (neuron0x1a94670()*0.147918);
}

double NNfunction_ss_uLsR::synapse0x1a95700() {
   return (neuron0x18579c0()*1.08132);
}

double NNfunction_ss_uLsR::synapse0x1a96090() {
   return (neuron0x1a95410()*-0.69092);
}

double NNfunction_ss_uLsR::synapse0x1a960d0() {
   return (neuron0x1a95de0()*0.836394);
}

double NNfunction_ss_uLsR::synapse0x1a96e60() {
   return (neuron0x1a96bb0()*-1.49199);
}

double NNfunction_ss_uLsR::synapse0x1a96ea0() {
   return (neuron0x1a97580()*-0.682489);
}

double NNfunction_ss_uLsR::synapse0x1a97830() {
   return (neuron0x1a97f50()*0.1095);
}

double NNfunction_ss_uLsR::synapse0x1a97870() {
   return (neuron0x1a98a30()*0.174723);
}

double NNfunction_ss_uLsR::synapse0x1a98200() {
   return (neuron0x1a99400()*-0.0338428);
}

double NNfunction_ss_uLsR::synapse0x1a98240() {
   return (neuron0x1a964e0()*-1.37824);
}

double NNfunction_ss_uLsR::synapse0x1a98ce0() {
   return (neuron0x1a9afb0()*0.768187);
}

double NNfunction_ss_uLsR::synapse0x1a98d20() {
   return (neuron0x1a9b980()*-0.160233);
}

double NNfunction_ss_uLsR::synapse0x1a996b0() {
   return (neuron0x1a9c350()*0.0814981);
}

double NNfunction_ss_uLsR::synapse0x1a996f0() {
   return (neuron0x1a9cd20()*-0.0292864);
}

double NNfunction_ss_uLsR::synapse0x1a96790() {
   return (neuron0x1a9eb30()*0.164702);
}

double NNfunction_ss_uLsR::synapse0x1a967d0() {
   return (neuron0x1a9ee10()*0.802463);
}

double NNfunction_ss_uLsR::synapse0x1a9b260() {
   return (neuron0x1a9f7e0()*0.290795);
}

double NNfunction_ss_uLsR::synapse0x1a9b2a0() {
   return (neuron0x1aa01b0()*0.336123);
}

double NNfunction_ss_uLsR::synapse0x1a9bc30() {
   return (neuron0x1aa0b80()*-0.126316);
}

double NNfunction_ss_uLsR::synapse0x1a9bc70() {
   return (neuron0x1aa1550()*-0.0999646);
}

double NNfunction_ss_uLsR::synapse0x1a9c600() {
   return (neuron0x1a9a0a0()*-0.365097);
}

double NNfunction_ss_uLsR::synapse0x1a9c640() {
   return (neuron0x1a9aa70()*3.26192);
}

double NNfunction_ss_uLsR::synapse0x1a9cfd0() {
   return (neuron0x1aa42e0()*0.0180208);
}

double NNfunction_ss_uLsR::synapse0x1a9d010() {
   return (neuron0x1aa4cb0()*-0.210652);
}

double NNfunction_ss_uLsR::synapse0x1a911b0() {
   return (neuron0x1aa5680()*0.942384);
}

double NNfunction_ss_uLsR::synapse0x1a911f0() {
   return (neuron0x1aa6050()*0.39669);
}

double NNfunction_ss_uLsR::synapse0x1a9f0c0() {
   return (neuron0x1aa6a20()*-5.18735);
}

double NNfunction_ss_uLsR::synapse0x1a9f100() {
   return (neuron0x1aa73f0()*-4.05957);
}

double NNfunction_ss_uLsR::synapse0x1a9fa90() {
   return (neuron0x1aa7dc0()*0.287426);
}

double NNfunction_ss_uLsR::synapse0x1a9fad0() {
   return (neuron0x1aa8790()*-0.522801);
}

double NNfunction_ss_uLsR::synapse0x1aa0460() {
   return (neuron0x1a9e820()*3.58007);
}

double NNfunction_ss_uLsR::synapse0x1aa04a0() {
   return (neuron0x1aab370()*0.0888181);
}

double NNfunction_ss_uLsR::synapse0x1aa0e30() {
   return (neuron0x1aabd40()*-1.31066);
}

double NNfunction_ss_uLsR::synapse0x1aa0e70() {
   return (neuron0x1aac710()*-0.187374);
}

double NNfunction_ss_uLsR::synapse0x1aa1800() {
   return (neuron0x1aad0e0()*3.28129);
}

double NNfunction_ss_uLsR::synapse0x1aa1840() {
   return (neuron0x1aadab0()*-1.34821);
}

double NNfunction_ss_uLsR::synapse0x1a9a350() {
   return (neuron0x1aae480()*1.77625);
}

double NNfunction_ss_uLsR::synapse0x1a9a390() {
   return (neuron0x1aaee50()*0.153441);
}

double NNfunction_ss_uLsR::synapse0x1aa3c00() {
   return (neuron0x1aaf820()*2.23179);
}

double NNfunction_ss_uLsR::synapse0x1aa3c40() {
   return (neuron0x1ab0400()*-0.851308);
}

double NNfunction_ss_uLsR::synapse0x1aa4590() {
   return (neuron0x1ab0dd0()*1.64653);
}

double NNfunction_ss_uLsR::synapse0x1aa45d0() {
   return (neuron0x1aa1c50()*-1.22654);
}

double NNfunction_ss_uLsR::synapse0x1aa4f60() {
   return (neuron0x1aa2620()*0.250017);
}

double NNfunction_ss_uLsR::synapse0x1aa4fa0() {
   return (neuron0x1aa2ff0()*0.0944189);
}

double NNfunction_ss_uLsR::synapse0x1aa5930() {
   return (neuron0x1ab5630()*-0.0506707);
}

double NNfunction_ss_uLsR::synapse0x1aa5970() {
   return (neuron0x1ab5ee0()*-0.101222);
}

double NNfunction_ss_uLsR::synapse0x1aa6300() {
   return (neuron0x1ab68b0()*0.23534);
}

double NNfunction_ss_uLsR::synapse0x1aa6340() {
   return (neuron0x1ab7280()*1.05259);
}

double NNfunction_ss_uLsR::synapse0x1aa8a40() {
   return (neuron0x1a93240()*-0.418572);
}

double NNfunction_ss_uLsR::synapse0x1aa8a80() {
   return (neuron0x1a93b90()*-0.128386);
}

double NNfunction_ss_uLsR::synapse0x1a9e000() {
   return (neuron0x1a94670()*-0.211229);
}

double NNfunction_ss_uLsR::synapse0x1a9e040() {
   return (neuron0x18579c0()*1.24877);
}

double NNfunction_ss_uLsR::synapse0x1aab620() {
   return (neuron0x1a95410()*-0.0171745);
}

double NNfunction_ss_uLsR::synapse0x1aab660() {
   return (neuron0x1a95de0()*-0.655066);
}

double NNfunction_ss_uLsR::synapse0x1aabff0() {
   return (neuron0x1a96bb0()*0.146702);
}

double NNfunction_ss_uLsR::synapse0x1aac030() {
   return (neuron0x1a97580()*0.500958);
}

double NNfunction_ss_uLsR::synapse0x1aac9c0() {
   return (neuron0x1a97f50()*-0.172128);
}

double NNfunction_ss_uLsR::synapse0x1aaca00() {
   return (neuron0x1a98a30()*0.218958);
}

double NNfunction_ss_uLsR::synapse0x1aad390() {
   return (neuron0x1a99400()*-0.169994);
}

double NNfunction_ss_uLsR::synapse0x1aad3d0() {
   return (neuron0x1a964e0()*-0.00671141);
}

double NNfunction_ss_uLsR::synapse0x1aadd60() {
   return (neuron0x1a9afb0()*0.677056);
}

double NNfunction_ss_uLsR::synapse0x1aadda0() {
   return (neuron0x1a9b980()*0.479433);
}

double NNfunction_ss_uLsR::synapse0x1aae730() {
   return (neuron0x1a9c350()*-0.392237);
}

double NNfunction_ss_uLsR::synapse0x1aae770() {
   return (neuron0x1a9cd20()*0.184388);
}

double NNfunction_ss_uLsR::synapse0x1aaf100() {
   return (neuron0x1a9eb30()*0.149405);
}

double NNfunction_ss_uLsR::synapse0x1aaf140() {
   return (neuron0x1a9ee10()*0.42979);
}

double NNfunction_ss_uLsR::synapse0x1aafad0() {
   return (neuron0x1a9f7e0()*0.144981);
}

double NNfunction_ss_uLsR::synapse0x1aafb10() {
   return (neuron0x1aa01b0()*-0.541021);
}

double NNfunction_ss_uLsR::synapse0x1ab06b0() {
   return (neuron0x1aa0b80()*0.340415);
}

double NNfunction_ss_uLsR::synapse0x1ab06f0() {
   return (neuron0x1aa1550()*0.426383);
}

double NNfunction_ss_uLsR::synapse0x1ab1080() {
   return (neuron0x1a9a0a0()*0.0883007);
}

double NNfunction_ss_uLsR::synapse0x1ab10c0() {
   return (neuron0x1a9aa70()*1.59651);
}

double NNfunction_ss_uLsR::synapse0x1aa1f00() {
   return (neuron0x1aa42e0()*-0.126996);
}

double NNfunction_ss_uLsR::synapse0x1aa1f40() {
   return (neuron0x1aa4cb0()*-0.291323);
}

double NNfunction_ss_uLsR::synapse0x1aa28d0() {
   return (neuron0x1aa5680()*0.249279);
}

double NNfunction_ss_uLsR::synapse0x1aa2910() {
   return (neuron0x1aa6050()*0.257335);
}

double NNfunction_ss_uLsR::synapse0x1aa32a0() {
   return (neuron0x1aa6a20()*-1.33328);
}

double NNfunction_ss_uLsR::synapse0x1aa32e0() {
   return (neuron0x1aa73f0()*-0.51425);
}

double NNfunction_ss_uLsR::synapse0x1ab57c0() {
   return (neuron0x1aa7dc0()*-0.0654417);
}

double NNfunction_ss_uLsR::synapse0x1ab5800() {
   return (neuron0x1aa8790()*0.518368);
}

double NNfunction_ss_uLsR::synapse0x1ab6190() {
   return (neuron0x1a9e820()*-0.362903);
}

double NNfunction_ss_uLsR::synapse0x1ab61d0() {
   return (neuron0x1aab370()*0.514098);
}

double NNfunction_ss_uLsR::synapse0x1ab6b60() {
   return (neuron0x1aabd40()*0.513523);
}

double NNfunction_ss_uLsR::synapse0x1ab6ba0() {
   return (neuron0x1aac710()*-0.449126);
}

double NNfunction_ss_uLsR::synapse0x1ab7530() {
   return (neuron0x1aad0e0()*-0.672358);
}

double NNfunction_ss_uLsR::synapse0x1ab7570() {
   return (neuron0x1aadab0()*-0.853227);
}

double NNfunction_ss_uLsR::synapse0x1a93460() {
   return (neuron0x1aae480()*1.19645);
}

double NNfunction_ss_uLsR::synapse0x1a934a0() {
   return (neuron0x1aaee50()*-0.209949);
}

double NNfunction_ss_uLsR::synapse0x1aa6cd0() {
   return (neuron0x1aaf820()*0.367515);
}

double NNfunction_ss_uLsR::synapse0x1aa6d10() {
   return (neuron0x1ab0400()*-0.0802518);
}

double NNfunction_ss_uLsR::synapse0x1ab7c50() {
   return (neuron0x1ab0dd0()*0.20458);
}

double NNfunction_ss_uLsR::synapse0x1ab7c90() {
   return (neuron0x1aa1c50()*0.155165);
}

double NNfunction_ss_uLsR::synapse0x1ab7cd0() {
   return (neuron0x1aa2620()*0.0400506);
}

double NNfunction_ss_uLsR::synapse0x1ab7d10() {
   return (neuron0x1aa2ff0()*-0.257565);
}

double NNfunction_ss_uLsR::synapse0x1abebc0() {
   return (neuron0x1ab5630()*-0.303631);
}

double NNfunction_ss_uLsR::synapse0x1abec00() {
   return (neuron0x1ab5ee0()*0.268854);
}

double NNfunction_ss_uLsR::synapse0x1abec40() {
   return (neuron0x1ab68b0()*0.0344379);
}

double NNfunction_ss_uLsR::synapse0x1abec80() {
   return (neuron0x1ab7280()*-0.280695);
}

double NNfunction_ss_uLsR::synapse0x1abf000() {
   return (neuron0x1a93240()*-0.601885);
}

double NNfunction_ss_uLsR::synapse0x1abf040() {
   return (neuron0x1a93b90()*-0.452325);
}

double NNfunction_ss_uLsR::synapse0x1abf080() {
   return (neuron0x1a94670()*-0.413782);
}

double NNfunction_ss_uLsR::synapse0x1abf0c0() {
   return (neuron0x18579c0()*0.644287);
}

double NNfunction_ss_uLsR::synapse0x1abf100() {
   return (neuron0x1a95410()*0.0942011);
}

double NNfunction_ss_uLsR::synapse0x1abf140() {
   return (neuron0x1a95de0()*0.290521);
}

double NNfunction_ss_uLsR::synapse0x1abf180() {
   return (neuron0x1a96bb0()*0.0495428);
}

double NNfunction_ss_uLsR::synapse0x1abf1c0() {
   return (neuron0x1a97580()*0.441572);
}

double NNfunction_ss_uLsR::synapse0x1abf200() {
   return (neuron0x1a97f50()*0.372476);
}

double NNfunction_ss_uLsR::synapse0x1abf240() {
   return (neuron0x1a98a30()*0.315989);
}

double NNfunction_ss_uLsR::synapse0x1abf280() {
   return (neuron0x1a99400()*-0.0280197);
}

double NNfunction_ss_uLsR::synapse0x1abf2c0() {
   return (neuron0x1a964e0()*0.174349);
}

double NNfunction_ss_uLsR::synapse0x1abf300() {
   return (neuron0x1a9afb0()*0.753414);
}

double NNfunction_ss_uLsR::synapse0x1abf340() {
   return (neuron0x1a9b980()*0.363363);
}

double NNfunction_ss_uLsR::synapse0x1abf380() {
   return (neuron0x1a9c350()*-0.139141);
}

double NNfunction_ss_uLsR::synapse0x1abf3c0() {
   return (neuron0x1a9cd20()*-0.26967);
}

double NNfunction_ss_uLsR::synapse0x1abee50() {
   return (neuron0x1a9eb30()*0.742741);
}

double NNfunction_ss_uLsR::synapse0x1abee90() {
   return (neuron0x1a9ee10()*0.0789762);
}

double NNfunction_ss_uLsR::synapse0x1abf510() {
   return (neuron0x1a9f7e0()*-0.235617);
}

double NNfunction_ss_uLsR::synapse0x1abf550() {
   return (neuron0x1aa01b0()*-0.25281);
}

double NNfunction_ss_uLsR::synapse0x1abf590() {
   return (neuron0x1aa0b80()*-0.249701);
}

double NNfunction_ss_uLsR::synapse0x1abf5d0() {
   return (neuron0x1aa1550()*-0.157763);
}

double NNfunction_ss_uLsR::synapse0x1abf610() {
   return (neuron0x1a9a0a0()*0.243605);
}

double NNfunction_ss_uLsR::synapse0x1abf650() {
   return (neuron0x1a9aa70()*1.72218);
}

double NNfunction_ss_uLsR::synapse0x1abf690() {
   return (neuron0x1aa42e0()*0.246912);
}

double NNfunction_ss_uLsR::synapse0x1abf6d0() {
   return (neuron0x1aa4cb0()*-0.246904);
}

double NNfunction_ss_uLsR::synapse0x1abf710() {
   return (neuron0x1aa5680()*-0.30675);
}

double NNfunction_ss_uLsR::synapse0x1abf750() {
   return (neuron0x1aa6050()*-0.0470475);
}

double NNfunction_ss_uLsR::synapse0x1abf790() {
   return (neuron0x1aa6a20()*-1.30766);
}

double NNfunction_ss_uLsR::synapse0x1abf7d0() {
   return (neuron0x1aa73f0()*-1.70379);
}

double NNfunction_ss_uLsR::synapse0x1abf810() {
   return (neuron0x1aa7dc0()*0.129297);
}

double NNfunction_ss_uLsR::synapse0x1abf850() {
   return (neuron0x1aa8790()*1.02637);
}

double NNfunction_ss_uLsR::synapse0x1abf400() {
   return (neuron0x1a9e820()*0.0547093);
}

double NNfunction_ss_uLsR::synapse0x1abf440() {
   return (neuron0x1aab370()*-0.242733);
}

double NNfunction_ss_uLsR::synapse0x1abf480() {
   return (neuron0x1aabd40()*-0.420887);
}

double NNfunction_ss_uLsR::synapse0x1abf4c0() {
   return (neuron0x1aac710()*-0.106417);
}

double NNfunction_ss_uLsR::synapse0x1abfaa0() {
   return (neuron0x1aad0e0()*-0.238718);
}

double NNfunction_ss_uLsR::synapse0x1abfae0() {
   return (neuron0x1aadab0()*-1.005);
}

double NNfunction_ss_uLsR::synapse0x1abfb20() {
   return (neuron0x1aae480()*0.648882);
}

double NNfunction_ss_uLsR::synapse0x1abfb60() {
   return (neuron0x1aaee50()*0.287645);
}

double NNfunction_ss_uLsR::synapse0x1abfba0() {
   return (neuron0x1aaf820()*0.363384);
}

double NNfunction_ss_uLsR::synapse0x1abfbe0() {
   return (neuron0x1ab0400()*-0.109628);
}

double NNfunction_ss_uLsR::synapse0x1abfc20() {
   return (neuron0x1ab0dd0()*0.0178402);
}

double NNfunction_ss_uLsR::synapse0x1abfc60() {
   return (neuron0x1aa1c50()*-0.250549);
}

double NNfunction_ss_uLsR::synapse0x1abfca0() {
   return (neuron0x1aa2620()*0.0159841);
}

double NNfunction_ss_uLsR::synapse0x1abfce0() {
   return (neuron0x1aa2ff0()*0.513382);
}

double NNfunction_ss_uLsR::synapse0x1abfd20() {
   return (neuron0x1ab5630()*0.546956);
}

double NNfunction_ss_uLsR::synapse0x1abfd60() {
   return (neuron0x1ab5ee0()*-0.164493);
}

double NNfunction_ss_uLsR::synapse0x1abfda0() {
   return (neuron0x1ab68b0()*0.111744);
}

double NNfunction_ss_uLsR::synapse0x1abfde0() {
   return (neuron0x1ab7280()*0.298073);
}

double NNfunction_ss_uLsR::synapse0x1ac0160() {
   return (neuron0x1a93240()*0.47186);
}

double NNfunction_ss_uLsR::synapse0x1ac01a0() {
   return (neuron0x1a93b90()*0.25906);
}

double NNfunction_ss_uLsR::synapse0x1ac01e0() {
   return (neuron0x1a94670()*0.371386);
}

double NNfunction_ss_uLsR::synapse0x1ac0220() {
   return (neuron0x18579c0()*-0.936175);
}

double NNfunction_ss_uLsR::synapse0x1ac0260() {
   return (neuron0x1a95410()*0.0808998);
}

double NNfunction_ss_uLsR::synapse0x1ac02a0() {
   return (neuron0x1a95de0()*0.131671);
}

double NNfunction_ss_uLsR::synapse0x1ac02e0() {
   return (neuron0x1a96bb0()*-1.44508);
}

double NNfunction_ss_uLsR::synapse0x1ac0320() {
   return (neuron0x1a97580()*-0.656703);
}

double NNfunction_ss_uLsR::synapse0x1ac0360() {
   return (neuron0x1a97f50()*0.29787);
}

double NNfunction_ss_uLsR::synapse0x1ac03a0() {
   return (neuron0x1a98a30()*0.0596043);
}

double NNfunction_ss_uLsR::synapse0x1ac03e0() {
   return (neuron0x1a99400()*0.312543);
}

double NNfunction_ss_uLsR::synapse0x1ac0420() {
   return (neuron0x1a964e0()*0.336297);
}

double NNfunction_ss_uLsR::synapse0x1ac0460() {
   return (neuron0x1a9afb0()*-0.49589);
}

double NNfunction_ss_uLsR::synapse0x1ac04a0() {
   return (neuron0x1a9b980()*-0.6589);
}

double NNfunction_ss_uLsR::synapse0x1ac04e0() {
   return (neuron0x1a9c350()*0.449109);
}

double NNfunction_ss_uLsR::synapse0x1ac0520() {
   return (neuron0x1a9cd20()*-0.33805);
}

double NNfunction_ss_uLsR::synapse0x1abffb0() {
   return (neuron0x1a9eb30()*0.0341273);
}

double NNfunction_ss_uLsR::synapse0x1abfff0() {
   return (neuron0x1a9ee10()*-0.384029);
}

double NNfunction_ss_uLsR::synapse0x1ac0670() {
   return (neuron0x1a9f7e0()*-0.273409);
}

double NNfunction_ss_uLsR::synapse0x1ac06b0() {
   return (neuron0x1aa01b0()*0.790376);
}

double NNfunction_ss_uLsR::synapse0x1ac06f0() {
   return (neuron0x1aa0b80()*-0.302021);
}

double NNfunction_ss_uLsR::synapse0x1ac0730() {
   return (neuron0x1aa1550()*-0.345736);
}

double NNfunction_ss_uLsR::synapse0x1ac0770() {
   return (neuron0x1a9a0a0()*-0.595863);
}

double NNfunction_ss_uLsR::synapse0x1ac07b0() {
   return (neuron0x1a9aa70()*-1.7274);
}

double NNfunction_ss_uLsR::synapse0x1ac07f0() {
   return (neuron0x1aa42e0()*0.292494);
}

double NNfunction_ss_uLsR::synapse0x1ac0830() {
   return (neuron0x1aa4cb0()*0.386453);
}

double NNfunction_ss_uLsR::synapse0x1ac0870() {
   return (neuron0x1aa5680()*0.675391);
}

double NNfunction_ss_uLsR::synapse0x1ac08b0() {
   return (neuron0x1aa6050()*-0.228283);
}

double NNfunction_ss_uLsR::synapse0x1ac08f0() {
   return (neuron0x1aa6a20()*0.8977);
}

double NNfunction_ss_uLsR::synapse0x1ac0930() {
   return (neuron0x1aa73f0()*-0.104209);
}

double NNfunction_ss_uLsR::synapse0x1ac0970() {
   return (neuron0x1aa7dc0()*0.229156);
}

double NNfunction_ss_uLsR::synapse0x1ac09b0() {
   return (neuron0x1aa8790()*-0.571379);
}

double NNfunction_ss_uLsR::synapse0x1ac0560() {
   return (neuron0x1a9e820()*0.672106);
}

double NNfunction_ss_uLsR::synapse0x1ac05a0() {
   return (neuron0x1aab370()*-0.370081);
}

double NNfunction_ss_uLsR::synapse0x1ac05e0() {
   return (neuron0x1aabd40()*-0.131774);
}

double NNfunction_ss_uLsR::synapse0x1ac0620() {
   return (neuron0x1aac710()*0.467676);
}

double NNfunction_ss_uLsR::synapse0x1ac0c00() {
   return (neuron0x1aad0e0()*0.403742);
}

double NNfunction_ss_uLsR::synapse0x1ac0c40() {
   return (neuron0x1aadab0()*0.572205);
}

double NNfunction_ss_uLsR::synapse0x1ac0c80() {
   return (neuron0x1aae480()*0.264358);
}

double NNfunction_ss_uLsR::synapse0x1ac0cc0() {
   return (neuron0x1aaee50()*0.285983);
}

double NNfunction_ss_uLsR::synapse0x1ac0d00() {
   return (neuron0x1aaf820()*0.639406);
}

double NNfunction_ss_uLsR::synapse0x1ac0d40() {
   return (neuron0x1ab0400()*0.235799);
}

double NNfunction_ss_uLsR::synapse0x1ac0d80() {
   return (neuron0x1ab0dd0()*1.28739);
}

double NNfunction_ss_uLsR::synapse0x1ac0dc0() {
   return (neuron0x1aa1c50()*0.752784);
}

double NNfunction_ss_uLsR::synapse0x1ac0e00() {
   return (neuron0x1aa2620()*0.176726);
}

double NNfunction_ss_uLsR::synapse0x1ac0e40() {
   return (neuron0x1aa2ff0()*0.726838);
}

double NNfunction_ss_uLsR::synapse0x1ac0e80() {
   return (neuron0x1ab5630()*0.270343);
}

double NNfunction_ss_uLsR::synapse0x1ac0ec0() {
   return (neuron0x1ab5ee0()*-0.274264);
}

double NNfunction_ss_uLsR::synapse0x1ac0f00() {
   return (neuron0x1ab68b0()*0.0852911);
}

double NNfunction_ss_uLsR::synapse0x1ac0f40() {
   return (neuron0x1ab7280()*0.173984);
}

double NNfunction_ss_uLsR::synapse0x1ac12c0() {
   return (neuron0x1a93240()*-0.288184);
}

double NNfunction_ss_uLsR::synapse0x1ac1300() {
   return (neuron0x1a93b90()*0.489234);
}

double NNfunction_ss_uLsR::synapse0x1ac1340() {
   return (neuron0x1a94670()*0.581396);
}

double NNfunction_ss_uLsR::synapse0x1ac1380() {
   return (neuron0x18579c0()*0.871408);
}

double NNfunction_ss_uLsR::synapse0x1ac13c0() {
   return (neuron0x1a95410()*0.1887);
}

double NNfunction_ss_uLsR::synapse0x1ac1400() {
   return (neuron0x1a95de0()*0.350721);
}

double NNfunction_ss_uLsR::synapse0x1ac1440() {
   return (neuron0x1a96bb0()*-1.72378);
}

double NNfunction_ss_uLsR::synapse0x1ac1480() {
   return (neuron0x1a97580()*-0.952537);
}

double NNfunction_ss_uLsR::synapse0x1ac14c0() {
   return (neuron0x1a97f50()*0.360287);
}

double NNfunction_ss_uLsR::synapse0x1ac1500() {
   return (neuron0x1a98a30()*-0.117027);
}

double NNfunction_ss_uLsR::synapse0x1ac1540() {
   return (neuron0x1a99400()*0.44715);
}

double NNfunction_ss_uLsR::synapse0x1ac1580() {
   return (neuron0x1a964e0()*0.350574);
}

double NNfunction_ss_uLsR::synapse0x1ac15c0() {
   return (neuron0x1a9afb0()*0.534692);
}

double NNfunction_ss_uLsR::synapse0x1ac1600() {
   return (neuron0x1a9b980()*-1.04313);
}

double NNfunction_ss_uLsR::synapse0x1ac1640() {
   return (neuron0x1a9c350()*0.744255);
}

double NNfunction_ss_uLsR::synapse0x1ac1680() {
   return (neuron0x1a9cd20()*-0.418964);
}

double NNfunction_ss_uLsR::synapse0x1ac1110() {
   return (neuron0x1a9eb30()*-0.212307);
}

double NNfunction_ss_uLsR::synapse0x1ac1150() {
   return (neuron0x1a9ee10()*-0.700847);
}

double NNfunction_ss_uLsR::synapse0x1ac17d0() {
   return (neuron0x1a9f7e0()*-0.396491);
}

double NNfunction_ss_uLsR::synapse0x1ac1810() {
   return (neuron0x1aa01b0()*2.52011);
}

double NNfunction_ss_uLsR::synapse0x1ac1850() {
   return (neuron0x1aa0b80()*-0.46759);
}

double NNfunction_ss_uLsR::synapse0x1ac1890() {
   return (neuron0x1aa1550()*-0.559794);
}

double NNfunction_ss_uLsR::synapse0x1ac18d0() {
   return (neuron0x1a9a0a0()*-0.740209);
}

double NNfunction_ss_uLsR::synapse0x1ac1910() {
   return (neuron0x1a9aa70()*-2.84061);
}

double NNfunction_ss_uLsR::synapse0x1ac1950() {
   return (neuron0x1aa42e0()*0.344879);
}

double NNfunction_ss_uLsR::synapse0x1ac1990() {
   return (neuron0x1aa4cb0()*0.655974);
}

double NNfunction_ss_uLsR::synapse0x1ac19d0() {
   return (neuron0x1aa5680()*0.781186);
}

double NNfunction_ss_uLsR::synapse0x1ac1a10() {
   return (neuron0x1aa6050()*-0.471947);
}

double NNfunction_ss_uLsR::synapse0x1ac1a50() {
   return (neuron0x1aa6a20()*0.622841);
}

double NNfunction_ss_uLsR::synapse0x1ac1a90() {
   return (neuron0x1aa73f0()*-0.360879);
}

double NNfunction_ss_uLsR::synapse0x1ac1ad0() {
   return (neuron0x1aa7dc0()*0.203491);
}

double NNfunction_ss_uLsR::synapse0x1ac1b10() {
   return (neuron0x1aa8790()*-0.981062);
}

double NNfunction_ss_uLsR::synapse0x1ac16c0() {
   return (neuron0x1a9e820()*0.568318);
}

double NNfunction_ss_uLsR::synapse0x1ac1700() {
   return (neuron0x1aab370()*-0.695819);
}

double NNfunction_ss_uLsR::synapse0x1ac1740() {
   return (neuron0x1aabd40()*-0.0371669);
}

double NNfunction_ss_uLsR::synapse0x1ac1780() {
   return (neuron0x1aac710()*0.829289);
}

double NNfunction_ss_uLsR::synapse0x1ac1d60() {
   return (neuron0x1aad0e0()*-0.263449);
}

double NNfunction_ss_uLsR::synapse0x1ac1da0() {
   return (neuron0x1aadab0()*-0.48377);
}

double NNfunction_ss_uLsR::synapse0x1ac1de0() {
   return (neuron0x1aae480()*-0.806291);
}

double NNfunction_ss_uLsR::synapse0x1ac1e20() {
   return (neuron0x1aaee50()*0.360166);
}

double NNfunction_ss_uLsR::synapse0x1ac1e60() {
   return (neuron0x1aaf820()*1.84983);
}

double NNfunction_ss_uLsR::synapse0x1ac1ea0() {
   return (neuron0x1ab0400()*0.550568);
}

double NNfunction_ss_uLsR::synapse0x1ac1ee0() {
   return (neuron0x1ab0dd0()*1.53538);
}

double NNfunction_ss_uLsR::synapse0x1ac1f20() {
   return (neuron0x1aa1c50()*-0.159181);
}

double NNfunction_ss_uLsR::synapse0x1ac1f60() {
   return (neuron0x1aa2620()*0.130694);
}

double NNfunction_ss_uLsR::synapse0x1ac1fa0() {
   return (neuron0x1aa2ff0()*0.886131);
}

double NNfunction_ss_uLsR::synapse0x1ac1fe0() {
   return (neuron0x1ab5630()*0.397291);
}

double NNfunction_ss_uLsR::synapse0x1ac2020() {
   return (neuron0x1ab5ee0()*-0.393874);
}

double NNfunction_ss_uLsR::synapse0x1ac2060() {
   return (neuron0x1ab68b0()*0.0276573);
}

double NNfunction_ss_uLsR::synapse0x1ac20a0() {
   return (neuron0x1ab7280()*0.252296);
}

double NNfunction_ss_uLsR::synapse0x1ac2300() {
   return (neuron0x1abe480()*-7.74515);
}

double NNfunction_ss_uLsR::synapse0x1ac2340() {
   return (neuron0x1abe820()*-3.12902);
}

double NNfunction_ss_uLsR::synapse0x1ac2380() {
   return (neuron0x1abecc0()*-1.09533);
}

double NNfunction_ss_uLsR::synapse0x1ac23c0() {
   return (neuron0x1abfe20()*7.99818);
}

double NNfunction_ss_uLsR::synapse0x1ac2400() {
   return (neuron0x1ac0f80()*-4.88949);
}

