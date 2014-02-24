#include "NNfunction_ss_sLcR.h"
#include <cmath>

double NNfunction_ss_sLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4614)/15.3411;
   input1 = (in1 - 10.3712)/1157.66;
   input2 = (in2 - 654.45)/613.372;
   input3 = (in3 - -47.6052)/759.229;
   input4 = (in4 - 1041.17)/946.138;
   input5 = (in5 - 887.069)/946.542;
   input6 = (in6 - 894.651)/949.22;
   input7 = (in7 - 917.814)/939.071;
   input8 = (in8 - 895.481)/950.562;
   input9 = (in9 - 871.696)/925.933;
   input10 = (in10 - 975.703)/940.689;
   input11 = (in11 - 686.318)/828.686;
   input12 = (in12 - 253.871)/234.06;
   input13 = (in13 - 491.108)/504.489;
   input14 = (in14 - 710.923)/811.951;
   input15 = (in15 - 273.974)/253.446;
   input16 = (in16 - 525.966)/549.642;
   input17 = (in17 - 738.263)/872.398;
   input18 = (in18 - 724.187)/869.094;
   input19 = (in19 - 779.905)/856.591;
   input20 = (in20 - -4.389)/481.512;
   input21 = (in21 - 4.58786)/1143.64;
   input22 = (in22 - 5.24358)/1196.53;
   input23 = (in23 - -197.92)/603.48;
   switch(index) {
     case 0:
         return neuron0x2fab3f0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLcR::Value(int index, double* input) {
   input0 = (input[0] - 23.4614)/15.3411;
   input1 = (input[1] - 10.3712)/1157.66;
   input2 = (input[2] - 654.45)/613.372;
   input3 = (input[3] - -47.6052)/759.229;
   input4 = (input[4] - 1041.17)/946.138;
   input5 = (input[5] - 887.069)/946.542;
   input6 = (input[6] - 894.651)/949.22;
   input7 = (input[7] - 917.814)/939.071;
   input8 = (input[8] - 895.481)/950.562;
   input9 = (input[9] - 871.696)/925.933;
   input10 = (input[10] - 975.703)/940.689;
   input11 = (input[11] - 686.318)/828.686;
   input12 = (input[12] - 253.871)/234.06;
   input13 = (input[13] - 491.108)/504.489;
   input14 = (input[14] - 710.923)/811.951;
   input15 = (input[15] - 273.974)/253.446;
   input16 = (input[16] - 525.966)/549.642;
   input17 = (input[17] - 738.263)/872.398;
   input18 = (input[18] - 724.187)/869.094;
   input19 = (input[19] - 779.905)/856.591;
   input20 = (input[20] - -4.389)/481.512;
   input21 = (input[21] - 4.58786)/1143.64;
   input22 = (input[22] - 5.24358)/1196.53;
   input23 = (input[23] - -197.92)/603.48;
   switch(index) {
     case 0:
         return neuron0x2fab3f0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sLcR::neuron0x2f774b0() {
   return input0;
}

double NNfunction_ss_sLcR::neuron0x2f777f0() {
   return input1;
}

double NNfunction_ss_sLcR::neuron0x2f77b30() {
   return input2;
}

double NNfunction_ss_sLcR::neuron0x2f77e70() {
   return input3;
}

double NNfunction_ss_sLcR::neuron0x2f781b0() {
   return input4;
}

double NNfunction_ss_sLcR::neuron0x2f784f0() {
   return input5;
}

double NNfunction_ss_sLcR::neuron0x2f78830() {
   return input6;
}

double NNfunction_ss_sLcR::neuron0x2f78b70() {
   return input7;
}

double NNfunction_ss_sLcR::neuron0x2f78eb0() {
   return input8;
}

double NNfunction_ss_sLcR::neuron0x2f791f0() {
   return input9;
}

double NNfunction_ss_sLcR::neuron0x2f79530() {
   return input10;
}

double NNfunction_ss_sLcR::neuron0x2f79870() {
   return input11;
}

double NNfunction_ss_sLcR::neuron0x2f79bb0() {
   return input12;
}

double NNfunction_ss_sLcR::neuron0x2f79ef0() {
   return input13;
}

double NNfunction_ss_sLcR::neuron0x2f7a230() {
   return input14;
}

double NNfunction_ss_sLcR::neuron0x2f7a570() {
   return input15;
}

double NNfunction_ss_sLcR::neuron0x2f7a8b0() {
   return input16;
}

double NNfunction_ss_sLcR::neuron0x2f7ae10() {
   return input17;
}

double NNfunction_ss_sLcR::neuron0x2f7b030() {
   return input18;
}

double NNfunction_ss_sLcR::neuron0x2f7b370() {
   return input19;
}

double NNfunction_ss_sLcR::neuron0x2f7b6b0() {
   return input20;
}

double NNfunction_ss_sLcR::neuron0x2f7b9f0() {
   return input21;
}

double NNfunction_ss_sLcR::neuron0x2f7bd30() {
   return input22;
}

double NNfunction_ss_sLcR::neuron0x2f7c070() {
   return input23;
}

double NNfunction_ss_sLcR::input0x2f7c510() {
   double input = 0.404671;
   input += synapse0x2d37320();
   input += synapse0x2f77370();
   input += synapse0x2f773b0();
   input += synapse0x2f7c7c0();
   input += synapse0x2f7c800();
   input += synapse0x2f7c840();
   input += synapse0x2f7c880();
   input += synapse0x2f7c8c0();
   input += synapse0x2f7c900();
   input += synapse0x2f7c940();
   input += synapse0x2f7c980();
   input += synapse0x2f7c9c0();
   input += synapse0x2f7ca00();
   input += synapse0x2f7ca40();
   input += synapse0x2f7ca80();
   input += synapse0x2f7cac0();
   input += synapse0x2f772e0();
   input += synapse0x2f77320();
   input += synapse0x2d28bc0();
   input += synapse0x2d28c00();
   input += synapse0x2f7cd20();
   input += synapse0x2f7cd60();
   input += synapse0x2f7cda0();
   input += synapse0x2f7cde0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f7c510() {
   double input = input0x2f7c510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f7ce20() {
   double input = -1.61181;
   input += synapse0x2f7d160();
   input += synapse0x2f7d1a0();
   input += synapse0x2f7d1e0();
   input += synapse0x2f7d220();
   input += synapse0x2f7d260();
   input += synapse0x2f7d2a0();
   input += synapse0x2f7d2e0();
   input += synapse0x2f7d320();
   input += synapse0x2f7d360();
   input += synapse0x2f7cc10();
   input += synapse0x2f7cc50();
   input += synapse0x2f7cc90();
   input += synapse0x2f7ccd0();
   input += synapse0x2f7d5b0();
   input += synapse0x2f7d5f0();
   input += synapse0x2f7d630();
   input += synapse0x2f7cfb0();
   input += synapse0x2f7cff0();
   input += synapse0x2f7d780();
   input += synapse0x2f7d7c0();
   input += synapse0x2f7d800();
   input += synapse0x2f7d840();
   input += synapse0x2f7d880();
   input += synapse0x2f7d8c0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f7ce20() {
   double input = input0x2f7ce20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f7d900() {
   double input = 1.96397;
   input += synapse0x2f7dc40();
   input += synapse0x2f7dc80();
   input += synapse0x2f7dcc0();
   input += synapse0x2f7dd00();
   input += synapse0x2f7dd40();
   input += synapse0x2f7dd80();
   input += synapse0x2f7ddc0();
   input += synapse0x2f7de00();
   input += synapse0x2f7de40();
   input += synapse0x2f7de80();
   input += synapse0x2f7dec0();
   input += synapse0x2f7df00();
   input += synapse0x2f7df40();
   input += synapse0x2f7df80();
   input += synapse0x2f7dfc0();
   input += synapse0x2f7e000();
   input += synapse0x2f7da90();
   input += synapse0x2f7dad0();
   input += synapse0x2d36a10();
   input += synapse0x2d36a50();
   input += synapse0x2f66540();
   input += synapse0x2f66580();
   input += synapse0x2f665c0();
   input += synapse0x2f773f0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f7d900() {
   double input = input0x2f7d900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2d37190() {
   double input = -0.709916;
   input += synapse0x2f7d550();
   input += synapse0x2f77430();
   input += synapse0x2f77470();
   input += synapse0x2f7e150();
   input += synapse0x2f7e190();
   input += synapse0x2f7e1d0();
   input += synapse0x2f7e210();
   input += synapse0x2f7e250();
   input += synapse0x2f7e290();
   input += synapse0x2f7e2d0();
   input += synapse0x2f7e310();
   input += synapse0x2f7e350();
   input += synapse0x2f7e390();
   input += synapse0x2f7e3d0();
   input += synapse0x2f7e410();
   input += synapse0x2f7e450();
   input += synapse0x2f7d3a0();
   input += synapse0x2f7d3e0();
   input += synapse0x2f7e5a0();
   input += synapse0x2f7e5e0();
   input += synapse0x2f7e620();
   input += synapse0x2f7e660();
   input += synapse0x2f7e6a0();
   input += synapse0x2f7e6e0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2d37190() {
   double input = input0x2d37190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f7e720() {
   double input = -0.271696;
   input += synapse0x2f7ea60();
   input += synapse0x2f7eaa0();
   input += synapse0x2f7eae0();
   input += synapse0x2f7eb20();
   input += synapse0x2f7eb60();
   input += synapse0x2f7eba0();
   input += synapse0x2f7ebe0();
   input += synapse0x2f7ec20();
   input += synapse0x2f7ec60();
   input += synapse0x2f7eca0();
   input += synapse0x2f7ece0();
   input += synapse0x2f7ed20();
   input += synapse0x2f7ed60();
   input += synapse0x2f7eda0();
   input += synapse0x2f7ede0();
   input += synapse0x2f7ee20();
   input += synapse0x2f7e8b0();
   input += synapse0x2f7e8f0();
   input += synapse0x2f7ef70();
   input += synapse0x2f7efb0();
   input += synapse0x2f7eff0();
   input += synapse0x2f7f030();
   input += synapse0x2f7f070();
   input += synapse0x2f7f0b0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f7e720() {
   double input = input0x2f7e720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f7f0f0() {
   double input = 0.90941;
   input += synapse0x2f7f430();
   input += synapse0x2f7f470();
   input += synapse0x2f7f4b0();
   input += synapse0x2f7f4f0();
   input += synapse0x2f7f530();
   input += synapse0x2f7f570();
   input += synapse0x2f7f5b0();
   input += synapse0x2f7f5f0();
   input += synapse0x2f7f630();
   input += synapse0x2d36d80();
   input += synapse0x2d36dc0();
   input += synapse0x2d36e00();
   input += synapse0x2d36e40();
   input += synapse0x2d36e80();
   input += synapse0x2d36ec0();
   input += synapse0x2d36f00();
   input += synapse0x2f7f280();
   input += synapse0x2f7f2c0();
   input += synapse0x2d37050();
   input += synapse0x2d37090();
   input += synapse0x2d370d0();
   input += synapse0x2d37110();
   input += synapse0x2d37150();
   input += synapse0x2f7fe80();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f7f0f0() {
   double input = input0x2f7f0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f7fec0() {
   double input = 1.21696;
   input += synapse0x2f80200();
   input += synapse0x2f80240();
   input += synapse0x2f80280();
   input += synapse0x2f802c0();
   input += synapse0x2f80300();
   input += synapse0x2f80340();
   input += synapse0x2f80380();
   input += synapse0x2f803c0();
   input += synapse0x2f80400();
   input += synapse0x2f80440();
   input += synapse0x2f80480();
   input += synapse0x2f804c0();
   input += synapse0x2f80500();
   input += synapse0x2f80540();
   input += synapse0x2f80580();
   input += synapse0x2f805c0();
   input += synapse0x2f80050();
   input += synapse0x2f80090();
   input += synapse0x2f80710();
   input += synapse0x2f80750();
   input += synapse0x2f80790();
   input += synapse0x2f807d0();
   input += synapse0x2f80810();
   input += synapse0x2f80850();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f7fec0() {
   double input = input0x2f7fec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f80890() {
   double input = -0.830668;
   input += synapse0x2f80bd0();
   input += synapse0x2f80c10();
   input += synapse0x2f80c50();
   input += synapse0x2f80c90();
   input += synapse0x2f80cd0();
   input += synapse0x2f80d10();
   input += synapse0x2f80d50();
   input += synapse0x2f80d90();
   input += synapse0x2f80dd0();
   input += synapse0x2f80e10();
   input += synapse0x2f80e50();
   input += synapse0x2f80e90();
   input += synapse0x2f80ed0();
   input += synapse0x2f80f10();
   input += synapse0x2f80f50();
   input += synapse0x2f80f90();
   input += synapse0x2f80a20();
   input += synapse0x2f80a60();
   input += synapse0x2f810e0();
   input += synapse0x2f81120();
   input += synapse0x2f81160();
   input += synapse0x2f811a0();
   input += synapse0x2f811e0();
   input += synapse0x2f81220();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f80890() {
   double input = input0x2f80890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f81260() {
   double input = -0.63767;
   input += synapse0x2f7ad00();
   input += synapse0x2f7ad40();
   input += synapse0x2f7ad80();
   input += synapse0x2f7adc0();
   input += synapse0x2f817b0();
   input += synapse0x2f817f0();
   input += synapse0x2f81830();
   input += synapse0x2f81870();
   input += synapse0x2f818b0();
   input += synapse0x2f818f0();
   input += synapse0x2f81930();
   input += synapse0x2f81970();
   input += synapse0x2f819b0();
   input += synapse0x2f819f0();
   input += synapse0x2f81a30();
   input += synapse0x2f81a70();
   input += synapse0x2f813f0();
   input += synapse0x2f81430();
   input += synapse0x2f81bc0();
   input += synapse0x2f81c00();
   input += synapse0x2f81c40();
   input += synapse0x2f81c80();
   input += synapse0x2f81cc0();
   input += synapse0x2f81d00();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f81260() {
   double input = input0x2f81260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f81d40() {
   double input = -0.800314;
   input += synapse0x2f82080();
   input += synapse0x2f820c0();
   input += synapse0x2f82100();
   input += synapse0x2f82140();
   input += synapse0x2f82180();
   input += synapse0x2f821c0();
   input += synapse0x2f82200();
   input += synapse0x2f82240();
   input += synapse0x2f82280();
   input += synapse0x2f822c0();
   input += synapse0x2f82300();
   input += synapse0x2f82340();
   input += synapse0x2f82380();
   input += synapse0x2f823c0();
   input += synapse0x2f82400();
   input += synapse0x2f82440();
   input += synapse0x2f81ed0();
   input += synapse0x2f81f10();
   input += synapse0x2f82590();
   input += synapse0x2f825d0();
   input += synapse0x2f82610();
   input += synapse0x2f82650();
   input += synapse0x2f82690();
   input += synapse0x2f826d0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f81d40() {
   double input = input0x2f81d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f82710() {
   double input = 1.06851;
   input += synapse0x2f82a50();
   input += synapse0x2f82a90();
   input += synapse0x2f82ad0();
   input += synapse0x2f82b10();
   input += synapse0x2f82b50();
   input += synapse0x2f82b90();
   input += synapse0x2f82bd0();
   input += synapse0x2f82c10();
   input += synapse0x2f82c50();
   input += synapse0x2f82c90();
   input += synapse0x2f82cd0();
   input += synapse0x2f82d10();
   input += synapse0x2f82d50();
   input += synapse0x2f82d90();
   input += synapse0x2f82dd0();
   input += synapse0x2f82e10();
   input += synapse0x2f828a0();
   input += synapse0x2f828e0();
   input += synapse0x2f7f670();
   input += synapse0x2f7f6b0();
   input += synapse0x2f7f6f0();
   input += synapse0x2f7f730();
   input += synapse0x2f7f770();
   input += synapse0x2f7f7b0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f82710() {
   double input = input0x2f82710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f7f7f0() {
   double input = 0.188388;
   input += synapse0x2f7fb30();
   input += synapse0x2f7fb70();
   input += synapse0x2f7fbb0();
   input += synapse0x2f7fbf0();
   input += synapse0x2f7fc30();
   input += synapse0x2f7fc70();
   input += synapse0x2f7fcb0();
   input += synapse0x2f7fcf0();
   input += synapse0x2f7fd30();
   input += synapse0x2f7fd70();
   input += synapse0x2f7fdb0();
   input += synapse0x2f7fdf0();
   input += synapse0x2f7fe30();
   input += synapse0x2f83f70();
   input += synapse0x2f83fb0();
   input += synapse0x2f83ff0();
   input += synapse0x2f7f980();
   input += synapse0x2f7f9c0();
   input += synapse0x2f84140();
   input += synapse0x2f84180();
   input += synapse0x2f841c0();
   input += synapse0x2f84200();
   input += synapse0x2f84240();
   input += synapse0x2f84280();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f7f7f0() {
   double input = input0x2f7f7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f842c0() {
   double input = 0.0280802;
   input += synapse0x2f84600();
   input += synapse0x2f84640();
   input += synapse0x2f84680();
   input += synapse0x2f846c0();
   input += synapse0x2f84700();
   input += synapse0x2f84740();
   input += synapse0x2f84780();
   input += synapse0x2f847c0();
   input += synapse0x2f84800();
   input += synapse0x2f84840();
   input += synapse0x2f84880();
   input += synapse0x2f848c0();
   input += synapse0x2f84900();
   input += synapse0x2f84940();
   input += synapse0x2f84980();
   input += synapse0x2f849c0();
   input += synapse0x2f84450();
   input += synapse0x2f84490();
   input += synapse0x2f84b10();
   input += synapse0x2f84b50();
   input += synapse0x2f84b90();
   input += synapse0x2f84bd0();
   input += synapse0x2f84c10();
   input += synapse0x2f84c50();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f842c0() {
   double input = input0x2f842c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f84c90() {
   double input = 0.338054;
   input += synapse0x2f84fd0();
   input += synapse0x2f85010();
   input += synapse0x2f85050();
   input += synapse0x2f85090();
   input += synapse0x2f850d0();
   input += synapse0x2f85110();
   input += synapse0x2f85150();
   input += synapse0x2f85190();
   input += synapse0x2f851d0();
   input += synapse0x2f85210();
   input += synapse0x2f85250();
   input += synapse0x2f85290();
   input += synapse0x2f852d0();
   input += synapse0x2f85310();
   input += synapse0x2f85350();
   input += synapse0x2f85390();
   input += synapse0x2f84e20();
   input += synapse0x2f84e60();
   input += synapse0x2f854e0();
   input += synapse0x2f85520();
   input += synapse0x2f85560();
   input += synapse0x2f855a0();
   input += synapse0x2f855e0();
   input += synapse0x2f85620();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f84c90() {
   double input = input0x2f84c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f85660() {
   double input = 0.467188;
   input += synapse0x2f859a0();
   input += synapse0x2f859e0();
   input += synapse0x2f85a20();
   input += synapse0x2f85a60();
   input += synapse0x2f85aa0();
   input += synapse0x2f85ae0();
   input += synapse0x2f85b20();
   input += synapse0x2f85b60();
   input += synapse0x2f85ba0();
   input += synapse0x2f85be0();
   input += synapse0x2f85c20();
   input += synapse0x2f85c60();
   input += synapse0x2f85ca0();
   input += synapse0x2f85ce0();
   input += synapse0x2f85d20();
   input += synapse0x2f85d60();
   input += synapse0x2f857f0();
   input += synapse0x2f85830();
   input += synapse0x2f85eb0();
   input += synapse0x2f85ef0();
   input += synapse0x2f85f30();
   input += synapse0x2f85f70();
   input += synapse0x2f85fb0();
   input += synapse0x2f85ff0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f85660() {
   double input = input0x2f85660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f86030() {
   double input = -2.8239;
   input += synapse0x2f86370();
   input += synapse0x2f776d0();
   input += synapse0x2f77710();
   input += synapse0x2f77a10();
   input += synapse0x2f77a50();
   input += synapse0x2f77d50();
   input += synapse0x2f77d90();
   input += synapse0x2f78090();
   input += synapse0x2f780d0();
   input += synapse0x2f783d0();
   input += synapse0x2f78410();
   input += synapse0x2f78710();
   input += synapse0x2f78750();
   input += synapse0x2f78a50();
   input += synapse0x2f78a90();
   input += synapse0x2f78d90();
   input += synapse0x2f78dd0();
   input += synapse0x2f790d0();
   input += synapse0x2f79110();
   input += synapse0x2f79410();
   input += synapse0x2f79450();
   input += synapse0x2f79750();
   input += synapse0x2f79790();
   input += synapse0x2f79a90();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f86030() {
   double input = input0x2f86030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f87e40() {
   double input = 0.735881;
   input += synapse0x2f79ad0();
   input += synapse0x2f7a790();
   input += synapse0x2f7a7d0();
   input += synapse0x2f861c0();
   input += synapse0x2f86200();
   input += synapse0x2f7aad0();
   input += synapse0x2f7ab10();
   input += synapse0x2d28aa0();
   input += synapse0x2d28ae0();
   input += synapse0x2f7b250();
   input += synapse0x2f7b290();
   input += synapse0x2f7b590();
   input += synapse0x2f7b5d0();
   input += synapse0x2f7b8d0();
   input += synapse0x2f7b910();
   input += synapse0x2f7bc10();
   input += synapse0x2f7bc50();
   input += synapse0x2f7bf50();
   input += synapse0x2f7bf90();
   input += synapse0x2f7c290();
   input += synapse0x2f7c2d0();
   input += synapse0x2f79dd0();
   input += synapse0x2f79e10();
   input += synapse0x2f880e0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f87e40() {
   double input = input0x2f87e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f88120() {
   double input = -0.660359;
   input += synapse0x2f88460();
   input += synapse0x2f884a0();
   input += synapse0x2f884e0();
   input += synapse0x2f88520();
   input += synapse0x2f88560();
   input += synapse0x2f885a0();
   input += synapse0x2f885e0();
   input += synapse0x2f88620();
   input += synapse0x2f88660();
   input += synapse0x2f886a0();
   input += synapse0x2f886e0();
   input += synapse0x2f88720();
   input += synapse0x2f88760();
   input += synapse0x2f887a0();
   input += synapse0x2f887e0();
   input += synapse0x2f88820();
   input += synapse0x2f882b0();
   input += synapse0x2f882f0();
   input += synapse0x2f88970();
   input += synapse0x2f889b0();
   input += synapse0x2f889f0();
   input += synapse0x2f88a30();
   input += synapse0x2f88a70();
   input += synapse0x2f88ab0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f88120() {
   double input = input0x2f88120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f88af0() {
   double input = -2.10861;
   input += synapse0x2f88e30();
   input += synapse0x2f88e70();
   input += synapse0x2f88eb0();
   input += synapse0x2f88ef0();
   input += synapse0x2f88f30();
   input += synapse0x2f88f70();
   input += synapse0x2f88fb0();
   input += synapse0x2f88ff0();
   input += synapse0x2f89030();
   input += synapse0x2f89070();
   input += synapse0x2f890b0();
   input += synapse0x2f890f0();
   input += synapse0x2f89130();
   input += synapse0x2f89170();
   input += synapse0x2f891b0();
   input += synapse0x2f891f0();
   input += synapse0x2f88c80();
   input += synapse0x2f88cc0();
   input += synapse0x2f89340();
   input += synapse0x2f89380();
   input += synapse0x2f893c0();
   input += synapse0x2f89400();
   input += synapse0x2f89440();
   input += synapse0x2f89480();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f88af0() {
   double input = input0x2f88af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f894c0() {
   double input = 0.434758;
   input += synapse0x2f89800();
   input += synapse0x2f89840();
   input += synapse0x2f89880();
   input += synapse0x2f898c0();
   input += synapse0x2f89900();
   input += synapse0x2f89940();
   input += synapse0x2f89980();
   input += synapse0x2f899c0();
   input += synapse0x2f89a00();
   input += synapse0x2f89a40();
   input += synapse0x2f89a80();
   input += synapse0x2f89ac0();
   input += synapse0x2f89b00();
   input += synapse0x2f89b40();
   input += synapse0x2f89b80();
   input += synapse0x2f89bc0();
   input += synapse0x2f89650();
   input += synapse0x2f89690();
   input += synapse0x2f89d10();
   input += synapse0x2f89d50();
   input += synapse0x2f89d90();
   input += synapse0x2f89dd0();
   input += synapse0x2f89e10();
   input += synapse0x2f89e50();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f894c0() {
   double input = input0x2f894c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f89e90() {
   double input = 0.465417;
   input += synapse0x2f8a1d0();
   input += synapse0x2f8a210();
   input += synapse0x2f8a250();
   input += synapse0x2f8a290();
   input += synapse0x2f8a2d0();
   input += synapse0x2f8a310();
   input += synapse0x2f8a350();
   input += synapse0x2f8a390();
   input += synapse0x2f8a3d0();
   input += synapse0x2f8a410();
   input += synapse0x2f8a450();
   input += synapse0x2f8a490();
   input += synapse0x2f8a4d0();
   input += synapse0x2f8a510();
   input += synapse0x2f8a550();
   input += synapse0x2f8a590();
   input += synapse0x2f8a020();
   input += synapse0x2f8a060();
   input += synapse0x2f8a6e0();
   input += synapse0x2f8a720();
   input += synapse0x2f8a760();
   input += synapse0x2f8a7a0();
   input += synapse0x2f8a7e0();
   input += synapse0x2f8a820();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f89e90() {
   double input = input0x2f89e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f8a860() {
   double input = -0.313883;
   input += synapse0x2f8aba0();
   input += synapse0x2f8abe0();
   input += synapse0x2f8ac20();
   input += synapse0x2f8ac60();
   input += synapse0x2f8aca0();
   input += synapse0x2f8ace0();
   input += synapse0x2f8ad20();
   input += synapse0x2f8ad60();
   input += synapse0x2f8ada0();
   input += synapse0x2f82f60();
   input += synapse0x2f82fa0();
   input += synapse0x2f82fe0();
   input += synapse0x2f83020();
   input += synapse0x2f83060();
   input += synapse0x2f830a0();
   input += synapse0x2f830e0();
   input += synapse0x2f8a9f0();
   input += synapse0x2f8aa30();
   input += synapse0x2f83230();
   input += synapse0x2f83270();
   input += synapse0x2f832b0();
   input += synapse0x2f832f0();
   input += synapse0x2f83330();
   input += synapse0x2f83370();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f8a860() {
   double input = input0x2f8a860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f833b0() {
   double input = 1.79795;
   input += synapse0x2f836f0();
   input += synapse0x2f83730();
   input += synapse0x2f83770();
   input += synapse0x2f837b0();
   input += synapse0x2f837f0();
   input += synapse0x2f83830();
   input += synapse0x2f83870();
   input += synapse0x2f838b0();
   input += synapse0x2f838f0();
   input += synapse0x2f83930();
   input += synapse0x2f83970();
   input += synapse0x2f839b0();
   input += synapse0x2f839f0();
   input += synapse0x2f83a30();
   input += synapse0x2f83a70();
   input += synapse0x2f83ab0();
   input += synapse0x2f83540();
   input += synapse0x2f83580();
   input += synapse0x2f83c00();
   input += synapse0x2f83c40();
   input += synapse0x2f83c80();
   input += synapse0x2f83cc0();
   input += synapse0x2f83d00();
   input += synapse0x2f83d40();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f833b0() {
   double input = input0x2f833b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f83d80() {
   double input = 0.341597;
   input += synapse0x2f83f10();
   input += synapse0x2f8cfa0();
   input += synapse0x2f8cfe0();
   input += synapse0x2f8d020();
   input += synapse0x2f8d060();
   input += synapse0x2f8d0a0();
   input += synapse0x2f8d0e0();
   input += synapse0x2f8d120();
   input += synapse0x2f8d160();
   input += synapse0x2f8d1a0();
   input += synapse0x2f8d1e0();
   input += synapse0x2f8d220();
   input += synapse0x2f8d260();
   input += synapse0x2f8d2a0();
   input += synapse0x2f8d2e0();
   input += synapse0x2f8d320();
   input += synapse0x2f8cdf0();
   input += synapse0x2f8ce30();
   input += synapse0x2f8d470();
   input += synapse0x2f8d4b0();
   input += synapse0x2f8d4f0();
   input += synapse0x2f8d530();
   input += synapse0x2f8d570();
   input += synapse0x2f8d5b0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f83d80() {
   double input = input0x2f83d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f8d5f0() {
   double input = -0.805767;
   input += synapse0x2f8d930();
   input += synapse0x2f8d970();
   input += synapse0x2f8d9b0();
   input += synapse0x2f8d9f0();
   input += synapse0x2f8da30();
   input += synapse0x2f8da70();
   input += synapse0x2f8dab0();
   input += synapse0x2f8daf0();
   input += synapse0x2f8db30();
   input += synapse0x2f8db70();
   input += synapse0x2f8dbb0();
   input += synapse0x2f8dbf0();
   input += synapse0x2f8dc30();
   input += synapse0x2f8dc70();
   input += synapse0x2f8dcb0();
   input += synapse0x2f8dcf0();
   input += synapse0x2f8d780();
   input += synapse0x2f8d7c0();
   input += synapse0x2f8de40();
   input += synapse0x2f8de80();
   input += synapse0x2f8dec0();
   input += synapse0x2f8df00();
   input += synapse0x2f8df40();
   input += synapse0x2f8df80();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f8d5f0() {
   double input = input0x2f8d5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f8dfc0() {
   double input = -0.545398;
   input += synapse0x2f8e300();
   input += synapse0x2f8e340();
   input += synapse0x2f8e380();
   input += synapse0x2f8e3c0();
   input += synapse0x2f8e400();
   input += synapse0x2f8e440();
   input += synapse0x2f8e480();
   input += synapse0x2f8e4c0();
   input += synapse0x2f8e500();
   input += synapse0x2f8e540();
   input += synapse0x2f8e580();
   input += synapse0x2f8e5c0();
   input += synapse0x2f8e600();
   input += synapse0x2f8e640();
   input += synapse0x2f8e680();
   input += synapse0x2f8e6c0();
   input += synapse0x2f8e150();
   input += synapse0x2f8e190();
   input += synapse0x2f8e810();
   input += synapse0x2f8e850();
   input += synapse0x2f8e890();
   input += synapse0x2f8e8d0();
   input += synapse0x2f8e910();
   input += synapse0x2f8e950();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f8dfc0() {
   double input = input0x2f8dfc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f8e990() {
   double input = -2.02004;
   input += synapse0x2f8ecd0();
   input += synapse0x2f8ed10();
   input += synapse0x2f8ed50();
   input += synapse0x2f8ed90();
   input += synapse0x2f8edd0();
   input += synapse0x2f8ee10();
   input += synapse0x2f8ee50();
   input += synapse0x2f8ee90();
   input += synapse0x2f8eed0();
   input += synapse0x2f8ef10();
   input += synapse0x2f8ef50();
   input += synapse0x2f8ef90();
   input += synapse0x2f8efd0();
   input += synapse0x2f8f010();
   input += synapse0x2f8f050();
   input += synapse0x2f8f090();
   input += synapse0x2f8eb20();
   input += synapse0x2f8eb60();
   input += synapse0x2f8f1e0();
   input += synapse0x2f8f220();
   input += synapse0x2f8f260();
   input += synapse0x2f8f2a0();
   input += synapse0x2f8f2e0();
   input += synapse0x2f8f320();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f8e990() {
   double input = input0x2f8e990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f8f360() {
   double input = 1.49768;
   input += synapse0x2f8f6a0();
   input += synapse0x2f8f6e0();
   input += synapse0x2f8f720();
   input += synapse0x2f8f760();
   input += synapse0x2f8f7a0();
   input += synapse0x2f8f7e0();
   input += synapse0x2f8f820();
   input += synapse0x2f8f860();
   input += synapse0x2f8f8a0();
   input += synapse0x2f8f8e0();
   input += synapse0x2f8f920();
   input += synapse0x2f8f960();
   input += synapse0x2f8f9a0();
   input += synapse0x2f8f9e0();
   input += synapse0x2f8fa20();
   input += synapse0x2f8fa60();
   input += synapse0x2f8f4f0();
   input += synapse0x2f8f530();
   input += synapse0x2f8fbb0();
   input += synapse0x2f8fbf0();
   input += synapse0x2f8fc30();
   input += synapse0x2f8fc70();
   input += synapse0x2f8fcb0();
   input += synapse0x2f8fcf0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f8f360() {
   double input = input0x2f8f360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f8fd30() {
   double input = -1.4179;
   input += synapse0x2f90070();
   input += synapse0x2f900b0();
   input += synapse0x2f900f0();
   input += synapse0x2f90130();
   input += synapse0x2f90170();
   input += synapse0x2f901b0();
   input += synapse0x2f901f0();
   input += synapse0x2f90230();
   input += synapse0x2f90270();
   input += synapse0x2f902b0();
   input += synapse0x2f902f0();
   input += synapse0x2f90330();
   input += synapse0x2f90370();
   input += synapse0x2f903b0();
   input += synapse0x2f903f0();
   input += synapse0x2f90430();
   input += synapse0x2f8fec0();
   input += synapse0x2f8ff00();
   input += synapse0x2f90580();
   input += synapse0x2f905c0();
   input += synapse0x2f90600();
   input += synapse0x2f90640();
   input += synapse0x2f90680();
   input += synapse0x2f906c0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f8fd30() {
   double input = input0x2f8fd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f90700() {
   double input = 1.33594;
   input += synapse0x2f90a40();
   input += synapse0x2f90a80();
   input += synapse0x2f90ac0();
   input += synapse0x2f90b00();
   input += synapse0x2f90b40();
   input += synapse0x2f90b80();
   input += synapse0x2f90bc0();
   input += synapse0x2f90c00();
   input += synapse0x2f90c40();
   input += synapse0x2f90c80();
   input += synapse0x2f90cc0();
   input += synapse0x2f90d00();
   input += synapse0x2f90d40();
   input += synapse0x2f90d80();
   input += synapse0x2f90dc0();
   input += synapse0x2f90e00();
   input += synapse0x2f90890();
   input += synapse0x2f908d0();
   input += synapse0x2f90f50();
   input += synapse0x2f90f90();
   input += synapse0x2f90fd0();
   input += synapse0x2f91010();
   input += synapse0x2f91050();
   input += synapse0x2f91090();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f90700() {
   double input = input0x2f90700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f910d0() {
   double input = -1.15169;
   input += synapse0x2f91410();
   input += synapse0x2f91450();
   input += synapse0x2f91490();
   input += synapse0x2f914d0();
   input += synapse0x2f91510();
   input += synapse0x2f91550();
   input += synapse0x2f91590();
   input += synapse0x2f915d0();
   input += synapse0x2f91610();
   input += synapse0x2f91650();
   input += synapse0x2f91690();
   input += synapse0x2f916d0();
   input += synapse0x2f91710();
   input += synapse0x2f91750();
   input += synapse0x2f91790();
   input += synapse0x2f917d0();
   input += synapse0x2f91260();
   input += synapse0x2f912a0();
   input += synapse0x2f91920();
   input += synapse0x2f91960();
   input += synapse0x2f919a0();
   input += synapse0x2f919e0();
   input += synapse0x2f91a20();
   input += synapse0x2f91a60();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f910d0() {
   double input = input0x2f910d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f91aa0() {
   double input = -0.357824;
   input += synapse0x2f91de0();
   input += synapse0x2f863b0();
   input += synapse0x2f863f0();
   input += synapse0x2f86430();
   input += synapse0x2f86680();
   input += synapse0x2f866c0();
   input += synapse0x2f86700();
   input += synapse0x2f86950();
   input += synapse0x2f86990();
   input += synapse0x2f86be0();
   input += synapse0x2f86c20();
   input += synapse0x2f86c60();
   input += synapse0x2f86eb0();
   input += synapse0x2f86ef0();
   input += synapse0x2f87140();
   input += synapse0x2f87180();
   input += synapse0x2f91c30();
   input += synapse0x2f91c70();
   input += synapse0x2f872d0();
   input += synapse0x2f877e0();
   input += synapse0x2f87820();
   input += synapse0x2f87860();
   input += synapse0x2f87ab0();
   input += synapse0x2f87af0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f91aa0() {
   double input = input0x2f91aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f87b30() {
   double input = -1.21163;
   input += synapse0x2f873a0();
   input += synapse0x2f873e0();
   input += synapse0x2f87420();
   input += synapse0x2f87460();
   input += synapse0x2f87de0();
   input += synapse0x2f94130();
   input += synapse0x2f94170();
   input += synapse0x2f941b0();
   input += synapse0x2f941f0();
   input += synapse0x2f94230();
   input += synapse0x2f94270();
   input += synapse0x2f942b0();
   input += synapse0x2f942f0();
   input += synapse0x2f94330();
   input += synapse0x2f94370();
   input += synapse0x2f943b0();
   input += synapse0x2f87cc0();
   input += synapse0x2f87d00();
   input += synapse0x2f94500();
   input += synapse0x2f94540();
   input += synapse0x2f94580();
   input += synapse0x2f945c0();
   input += synapse0x2f94600();
   input += synapse0x2f94640();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f87b30() {
   double input = input0x2f87b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f94680() {
   double input = 1.85753;
   input += synapse0x2f949c0();
   input += synapse0x2f94a00();
   input += synapse0x2f94a40();
   input += synapse0x2f94a80();
   input += synapse0x2f94ac0();
   input += synapse0x2f94b00();
   input += synapse0x2f94b40();
   input += synapse0x2f94b80();
   input += synapse0x2f94bc0();
   input += synapse0x2f94c00();
   input += synapse0x2f94c40();
   input += synapse0x2f94c80();
   input += synapse0x2f94cc0();
   input += synapse0x2f94d00();
   input += synapse0x2f94d40();
   input += synapse0x2f94d80();
   input += synapse0x2f94810();
   input += synapse0x2f94850();
   input += synapse0x2f94ed0();
   input += synapse0x2f94f10();
   input += synapse0x2f94f50();
   input += synapse0x2f94f90();
   input += synapse0x2f94fd0();
   input += synapse0x2f95010();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f94680() {
   double input = input0x2f94680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f95050() {
   double input = 2.86668;
   input += synapse0x2f95390();
   input += synapse0x2f953d0();
   input += synapse0x2f95410();
   input += synapse0x2f95450();
   input += synapse0x2f95490();
   input += synapse0x2f954d0();
   input += synapse0x2f95510();
   input += synapse0x2f95550();
   input += synapse0x2f95590();
   input += synapse0x2f955d0();
   input += synapse0x2f95610();
   input += synapse0x2f95650();
   input += synapse0x2f95690();
   input += synapse0x2f956d0();
   input += synapse0x2f95710();
   input += synapse0x2f95750();
   input += synapse0x2f951e0();
   input += synapse0x2f95220();
   input += synapse0x2f958a0();
   input += synapse0x2f958e0();
   input += synapse0x2f95920();
   input += synapse0x2f95960();
   input += synapse0x2f959a0();
   input += synapse0x2f959e0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f95050() {
   double input = input0x2f95050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f95a20() {
   double input = 0.177996;
   input += synapse0x2f95d60();
   input += synapse0x2f95da0();
   input += synapse0x2f95de0();
   input += synapse0x2f95e20();
   input += synapse0x2f95e60();
   input += synapse0x2f95ea0();
   input += synapse0x2f95ee0();
   input += synapse0x2f95f20();
   input += synapse0x2f95f60();
   input += synapse0x2f95fa0();
   input += synapse0x2f95fe0();
   input += synapse0x2f96020();
   input += synapse0x2f96060();
   input += synapse0x2f960a0();
   input += synapse0x2f960e0();
   input += synapse0x2f96120();
   input += synapse0x2f95bb0();
   input += synapse0x2f95bf0();
   input += synapse0x2f96270();
   input += synapse0x2f962b0();
   input += synapse0x2f962f0();
   input += synapse0x2f96330();
   input += synapse0x2f96370();
   input += synapse0x2f963b0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f95a20() {
   double input = input0x2f95a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f963f0() {
   double input = 0.833843;
   input += synapse0x2f96730();
   input += synapse0x2f96770();
   input += synapse0x2f967b0();
   input += synapse0x2f967f0();
   input += synapse0x2f96830();
   input += synapse0x2f96870();
   input += synapse0x2f968b0();
   input += synapse0x2f968f0();
   input += synapse0x2f96930();
   input += synapse0x2f96970();
   input += synapse0x2f969b0();
   input += synapse0x2f969f0();
   input += synapse0x2f96a30();
   input += synapse0x2f96a70();
   input += synapse0x2f96ab0();
   input += synapse0x2f96af0();
   input += synapse0x2f96580();
   input += synapse0x2f965c0();
   input += synapse0x2f96c40();
   input += synapse0x2f96c80();
   input += synapse0x2f96cc0();
   input += synapse0x2f96d00();
   input += synapse0x2f96d40();
   input += synapse0x2f96d80();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f963f0() {
   double input = input0x2f963f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f96dc0() {
   double input = -8.09251;
   input += synapse0x2f97100();
   input += synapse0x2f97140();
   input += synapse0x2f97180();
   input += synapse0x2f971c0();
   input += synapse0x2f97200();
   input += synapse0x2f97240();
   input += synapse0x2f97280();
   input += synapse0x2f972c0();
   input += synapse0x2f97300();
   input += synapse0x2f97340();
   input += synapse0x2f97380();
   input += synapse0x2f973c0();
   input += synapse0x2f97400();
   input += synapse0x2f97440();
   input += synapse0x2f97480();
   input += synapse0x2f974c0();
   input += synapse0x2f96f50();
   input += synapse0x2f96f90();
   input += synapse0x2f97610();
   input += synapse0x2f97650();
   input += synapse0x2f97690();
   input += synapse0x2f976d0();
   input += synapse0x2f97710();
   input += synapse0x2f97750();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f96dc0() {
   double input = input0x2f96dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f97790() {
   double input = 1.19318;
   input += synapse0x2f97ad0();
   input += synapse0x2f97b10();
   input += synapse0x2f97b50();
   input += synapse0x2f97b90();
   input += synapse0x2f97bd0();
   input += synapse0x2f97c10();
   input += synapse0x2f97c50();
   input += synapse0x2f97c90();
   input += synapse0x2f97cd0();
   input += synapse0x2f97d10();
   input += synapse0x2f97d50();
   input += synapse0x2f97d90();
   input += synapse0x2f97dd0();
   input += synapse0x2f97e10();
   input += synapse0x2f97e50();
   input += synapse0x2f97e90();
   input += synapse0x2f97920();
   input += synapse0x2f97960();
   input += synapse0x2f97fe0();
   input += synapse0x2f98020();
   input += synapse0x2f98060();
   input += synapse0x2f980a0();
   input += synapse0x2f980e0();
   input += synapse0x2f98120();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f97790() {
   double input = input0x2f97790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f98160() {
   double input = -0.129982;
   input += synapse0x2f984a0();
   input += synapse0x2f984e0();
   input += synapse0x2f98520();
   input += synapse0x2f98560();
   input += synapse0x2f985a0();
   input += synapse0x2f985e0();
   input += synapse0x2f98620();
   input += synapse0x2f98660();
   input += synapse0x2f986a0();
   input += synapse0x2f986e0();
   input += synapse0x2f98720();
   input += synapse0x2f98760();
   input += synapse0x2f987a0();
   input += synapse0x2f987e0();
   input += synapse0x2f98820();
   input += synapse0x2f98860();
   input += synapse0x2f982f0();
   input += synapse0x2f98330();
   input += synapse0x2f989b0();
   input += synapse0x2f989f0();
   input += synapse0x2f98a30();
   input += synapse0x2f98a70();
   input += synapse0x2f98ab0();
   input += synapse0x2f98af0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f98160() {
   double input = input0x2f98160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f98b30() {
   double input = 1.7736;
   input += synapse0x2f815a0();
   input += synapse0x2f815e0();
   input += synapse0x2f81620();
   input += synapse0x2f81660();
   input += synapse0x2f816a0();
   input += synapse0x2f816e0();
   input += synapse0x2f81720();
   input += synapse0x2f81760();
   input += synapse0x2f99280();
   input += synapse0x2f992c0();
   input += synapse0x2f99300();
   input += synapse0x2f99340();
   input += synapse0x2f99380();
   input += synapse0x2f993c0();
   input += synapse0x2f99400();
   input += synapse0x2f99440();
   input += synapse0x2f98cc0();
   input += synapse0x2f98d00();
   input += synapse0x2f99590();
   input += synapse0x2f995d0();
   input += synapse0x2f99610();
   input += synapse0x2f99650();
   input += synapse0x2f99690();
   input += synapse0x2f996d0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f98b30() {
   double input = input0x2f98b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f99710() {
   double input = 0.268004;
   input += synapse0x2f99a50();
   input += synapse0x2f99a90();
   input += synapse0x2f99ad0();
   input += synapse0x2f99b10();
   input += synapse0x2f99b50();
   input += synapse0x2f99b90();
   input += synapse0x2f99bd0();
   input += synapse0x2f99c10();
   input += synapse0x2f99c50();
   input += synapse0x2f99c90();
   input += synapse0x2f99cd0();
   input += synapse0x2f99d10();
   input += synapse0x2f99d50();
   input += synapse0x2f99d90();
   input += synapse0x2f99dd0();
   input += synapse0x2f99e10();
   input += synapse0x2f998a0();
   input += synapse0x2f998e0();
   input += synapse0x2f99f60();
   input += synapse0x2f99fa0();
   input += synapse0x2f99fe0();
   input += synapse0x2f9a020();
   input += synapse0x2f9a060();
   input += synapse0x2f9a0a0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f99710() {
   double input = input0x2f99710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f9a0e0() {
   double input = 2.48825;
   input += synapse0x2f9a420();
   input += synapse0x2f9a460();
   input += synapse0x2f9a4a0();
   input += synapse0x2f9a4e0();
   input += synapse0x2f9a520();
   input += synapse0x2f9a560();
   input += synapse0x2f9a5a0();
   input += synapse0x2f9a5e0();
   input += synapse0x2f9a620();
   input += synapse0x2f9a660();
   input += synapse0x2f9a6a0();
   input += synapse0x2f9a6e0();
   input += synapse0x2f9a720();
   input += synapse0x2f9a760();
   input += synapse0x2f9a7a0();
   input += synapse0x2f9a7e0();
   input += synapse0x2f9a270();
   input += synapse0x2f9a2b0();
   input += synapse0x2f8ade0();
   input += synapse0x2f8ae20();
   input += synapse0x2f8ae60();
   input += synapse0x2f8aea0();
   input += synapse0x2f8aee0();
   input += synapse0x2f8af20();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f9a0e0() {
   double input = input0x2f9a0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f8af60() {
   double input = 0.397891;
   input += synapse0x2f8b2a0();
   input += synapse0x2f8b2e0();
   input += synapse0x2f8b320();
   input += synapse0x2f8b360();
   input += synapse0x2f8b3a0();
   input += synapse0x2f8b3e0();
   input += synapse0x2f8b420();
   input += synapse0x2f8b460();
   input += synapse0x2f8b4a0();
   input += synapse0x2f8b4e0();
   input += synapse0x2f8b520();
   input += synapse0x2f8b560();
   input += synapse0x2f8b5a0();
   input += synapse0x2f8b5e0();
   input += synapse0x2f8b620();
   input += synapse0x2f8b660();
   input += synapse0x2f8b0f0();
   input += synapse0x2f8b130();
   input += synapse0x2f8b7b0();
   input += synapse0x2f8b7f0();
   input += synapse0x2f8b830();
   input += synapse0x2f8b870();
   input += synapse0x2f8b8b0();
   input += synapse0x2f8b8f0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f8af60() {
   double input = input0x2f8af60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f8b930() {
   double input = -0.385279;
   input += synapse0x2f8bc70();
   input += synapse0x2f8bcb0();
   input += synapse0x2f8bcf0();
   input += synapse0x2f8bd30();
   input += synapse0x2f8bd70();
   input += synapse0x2f8bdb0();
   input += synapse0x2f8bdf0();
   input += synapse0x2f8be30();
   input += synapse0x2f8be70();
   input += synapse0x2f8beb0();
   input += synapse0x2f8bef0();
   input += synapse0x2f8bf30();
   input += synapse0x2f8bf70();
   input += synapse0x2f8bfb0();
   input += synapse0x2f8bff0();
   input += synapse0x2f8c030();
   input += synapse0x2f8bac0();
   input += synapse0x2f8bb00();
   input += synapse0x2f8c180();
   input += synapse0x2f8c1c0();
   input += synapse0x2f8c200();
   input += synapse0x2f8c240();
   input += synapse0x2f8c280();
   input += synapse0x2f8c2c0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f8b930() {
   double input = input0x2f8b930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f8c300() {
   double input = 6.00184;
   input += synapse0x2f8c640();
   input += synapse0x2f8c680();
   input += synapse0x2f8c6c0();
   input += synapse0x2f8c700();
   input += synapse0x2f8c740();
   input += synapse0x2f8c780();
   input += synapse0x2f8c7c0();
   input += synapse0x2f8c800();
   input += synapse0x2f8c840();
   input += synapse0x2f8c880();
   input += synapse0x2f8c8c0();
   input += synapse0x2f8c900();
   input += synapse0x2f8c940();
   input += synapse0x2f8c980();
   input += synapse0x2f8c9c0();
   input += synapse0x2f8ca00();
   input += synapse0x2f8c490();
   input += synapse0x2f8c4d0();
   input += synapse0x2f8cb50();
   input += synapse0x2f8cb90();
   input += synapse0x2f8cbd0();
   input += synapse0x2f8cc10();
   input += synapse0x2f8cc50();
   input += synapse0x2f8cc90();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f8c300() {
   double input = input0x2f8c300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f9e940() {
   double input = -0.514263;
   input += synapse0x2f9eb60();
   input += synapse0x2f9eba0();
   input += synapse0x2f9ebe0();
   input += synapse0x2f9ec20();
   input += synapse0x2f9ec60();
   input += synapse0x2f9eca0();
   input += synapse0x2f9ece0();
   input += synapse0x2f9ed20();
   input += synapse0x2f9ed60();
   input += synapse0x2f9eda0();
   input += synapse0x2f9ede0();
   input += synapse0x2f9ee20();
   input += synapse0x2f9ee60();
   input += synapse0x2f9eea0();
   input += synapse0x2f9eee0();
   input += synapse0x2f9ef20();
   input += synapse0x2f8ccd0();
   input += synapse0x2f8cd10();
   input += synapse0x2f9f070();
   input += synapse0x2f9f0b0();
   input += synapse0x2f9f0f0();
   input += synapse0x2f9f130();
   input += synapse0x2f9f170();
   input += synapse0x2f9f1b0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f9e940() {
   double input = input0x2f9e940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f9f1f0() {
   double input = -0.195984;
   input += synapse0x2f9f530();
   input += synapse0x2f9f570();
   input += synapse0x2f9f5b0();
   input += synapse0x2f9f5f0();
   input += synapse0x2f9f630();
   input += synapse0x2f9f670();
   input += synapse0x2f9f6b0();
   input += synapse0x2f9f6f0();
   input += synapse0x2f9f730();
   input += synapse0x2f9f770();
   input += synapse0x2f9f7b0();
   input += synapse0x2f9f7f0();
   input += synapse0x2f9f830();
   input += synapse0x2f9f870();
   input += synapse0x2f9f8b0();
   input += synapse0x2f9f8f0();
   input += synapse0x2f9f380();
   input += synapse0x2f9f3c0();
   input += synapse0x2f9fa40();
   input += synapse0x2f9fa80();
   input += synapse0x2f9fac0();
   input += synapse0x2f9fb00();
   input += synapse0x2f9fb40();
   input += synapse0x2f9fb80();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f9f1f0() {
   double input = input0x2f9f1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2f9fbc0() {
   double input = -0.0552859;
   input += synapse0x2f9ff00();
   input += synapse0x2f9ff40();
   input += synapse0x2f9ff80();
   input += synapse0x2f9ffc0();
   input += synapse0x2fa0000();
   input += synapse0x2fa0040();
   input += synapse0x2fa0080();
   input += synapse0x2fa00c0();
   input += synapse0x2fa0100();
   input += synapse0x2fa0140();
   input += synapse0x2fa0180();
   input += synapse0x2fa01c0();
   input += synapse0x2fa0200();
   input += synapse0x2fa0240();
   input += synapse0x2fa0280();
   input += synapse0x2fa02c0();
   input += synapse0x2f9fd50();
   input += synapse0x2f9fd90();
   input += synapse0x2fa0410();
   input += synapse0x2fa0450();
   input += synapse0x2fa0490();
   input += synapse0x2fa04d0();
   input += synapse0x2fa0510();
   input += synapse0x2fa0550();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2f9fbc0() {
   double input = input0x2f9fbc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2fa0590() {
   double input = -4.14217;
   input += synapse0x2fa08d0();
   input += synapse0x2fa0910();
   input += synapse0x2fa0950();
   input += synapse0x2fa0990();
   input += synapse0x2fa09d0();
   input += synapse0x2fa0a10();
   input += synapse0x2fa0a50();
   input += synapse0x2fa0a90();
   input += synapse0x2fa0ad0();
   input += synapse0x2fa0b10();
   input += synapse0x2fa0b50();
   input += synapse0x2fa0b90();
   input += synapse0x2fa0bd0();
   input += synapse0x2fa0c10();
   input += synapse0x2fa0c50();
   input += synapse0x2fa0c90();
   input += synapse0x2fa0720();
   input += synapse0x2fa0760();
   input += synapse0x2fa0de0();
   input += synapse0x2fa0e20();
   input += synapse0x2fa0e60();
   input += synapse0x2fa0ea0();
   input += synapse0x2fa0ee0();
   input += synapse0x2fa0f20();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2fa0590() {
   double input = input0x2fa0590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2fa7790() {
   double input = -0.480902;
   input += synapse0x2f7d4c0();
   input += synapse0x2f7d500();
   input += synapse0x2f7e9d0();
   input += synapse0x2f7ea10();
   input += synapse0x2f7f3a0();
   input += synapse0x2f7f3e0();
   input += synapse0x2f80170();
   input += synapse0x2f801b0();
   input += synapse0x2f80b40();
   input += synapse0x2f80b80();
   input += synapse0x2f81510();
   input += synapse0x2f81550();
   input += synapse0x2f81ff0();
   input += synapse0x2f82030();
   input += synapse0x2f829c0();
   input += synapse0x2f82a00();
   input += synapse0x2f7faa0();
   input += synapse0x2f7fae0();
   input += synapse0x2f84570();
   input += synapse0x2f845b0();
   input += synapse0x2f84f40();
   input += synapse0x2f84f80();
   input += synapse0x2f85910();
   input += synapse0x2f85950();
   input += synapse0x2f862e0();
   input += synapse0x2f86320();
   input += synapse0x2f7a450();
   input += synapse0x2f7a490();
   input += synapse0x2f883d0();
   input += synapse0x2f88410();
   input += synapse0x2f88da0();
   input += synapse0x2f88de0();
   input += synapse0x2f89770();
   input += synapse0x2f897b0();
   input += synapse0x2f8a140();
   input += synapse0x2f8a180();
   input += synapse0x2f8ab10();
   input += synapse0x2f8ab50();
   input += synapse0x2f83660();
   input += synapse0x2f836a0();
   input += synapse0x2f8cf10();
   input += synapse0x2f8cf50();
   input += synapse0x2f8d8a0();
   input += synapse0x2f8d8e0();
   input += synapse0x2f8e270();
   input += synapse0x2f8e2b0();
   input += synapse0x2f8ec40();
   input += synapse0x2f8ec80();
   input += synapse0x2f8f610();
   input += synapse0x2f8f650();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2fa7790() {
   double input = input0x2fa7790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2fa7b30() {
   double input = -0.0591644;
   input += synapse0x2f91d50();
   input += synapse0x2f91d90();
   input += synapse0x2f87310();
   input += synapse0x2f87350();
   input += synapse0x2f94930();
   input += synapse0x2f94970();
   input += synapse0x2f95300();
   input += synapse0x2f95340();
   input += synapse0x2f95cd0();
   input += synapse0x2f95d10();
   input += synapse0x2f966a0();
   input += synapse0x2f966e0();
   input += synapse0x2f97070();
   input += synapse0x2f970b0();
   input += synapse0x2f97a40();
   input += synapse0x2f97a80();
   input += synapse0x2f98410();
   input += synapse0x2f98450();
   input += synapse0x2f98de0();
   input += synapse0x2f98e20();
   input += synapse0x2f999c0();
   input += synapse0x2f99a00();
   input += synapse0x2f9a390();
   input += synapse0x2f9a3d0();
   input += synapse0x2f8b210();
   input += synapse0x2f8b250();
   input += synapse0x2f8bbe0();
   input += synapse0x2f8bc20();
   input += synapse0x2f8c5b0();
   input += synapse0x2f8c5f0();
   input += synapse0x2f9ead0();
   input += synapse0x2f9eb10();
   input += synapse0x2f9f4a0();
   input += synapse0x2f9f4e0();
   input += synapse0x2f9fe70();
   input += synapse0x2f9feb0();
   input += synapse0x2fa0840();
   input += synapse0x2fa0880();
   input += synapse0x2f7c730();
   input += synapse0x2f7c770();
   input += synapse0x2f8ffe0();
   input += synapse0x2f90020();
   input += synapse0x2fa0f60();
   input += synapse0x2fa0fa0();
   input += synapse0x2fa0fe0();
   input += synapse0x2fa1020();
   input += synapse0x2fa7ed0();
   input += synapse0x2fa7f10();
   input += synapse0x2fa7f50();
   input += synapse0x2fa7f90();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2fa7b30() {
   double input = input0x2fa7b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2fa7fd0() {
   double input = 0.577693;
   input += synapse0x2fa8310();
   input += synapse0x2fa8350();
   input += synapse0x2fa8390();
   input += synapse0x2fa83d0();
   input += synapse0x2fa8410();
   input += synapse0x2fa8450();
   input += synapse0x2fa8490();
   input += synapse0x2fa84d0();
   input += synapse0x2fa8510();
   input += synapse0x2fa8550();
   input += synapse0x2fa8590();
   input += synapse0x2fa85d0();
   input += synapse0x2fa8610();
   input += synapse0x2fa8650();
   input += synapse0x2fa8690();
   input += synapse0x2fa86d0();
   input += synapse0x2fa8160();
   input += synapse0x2fa81a0();
   input += synapse0x2fa8820();
   input += synapse0x2fa8860();
   input += synapse0x2fa88a0();
   input += synapse0x2fa88e0();
   input += synapse0x2fa8920();
   input += synapse0x2fa8960();
   input += synapse0x2fa89a0();
   input += synapse0x2fa89e0();
   input += synapse0x2fa8a20();
   input += synapse0x2fa8a60();
   input += synapse0x2fa8aa0();
   input += synapse0x2fa8ae0();
   input += synapse0x2fa8b20();
   input += synapse0x2fa8b60();
   input += synapse0x2fa8710();
   input += synapse0x2fa8750();
   input += synapse0x2fa8790();
   input += synapse0x2fa87d0();
   input += synapse0x2fa8db0();
   input += synapse0x2fa8df0();
   input += synapse0x2fa8e30();
   input += synapse0x2fa8e70();
   input += synapse0x2fa8eb0();
   input += synapse0x2fa8ef0();
   input += synapse0x2fa8f30();
   input += synapse0x2fa8f70();
   input += synapse0x2fa8fb0();
   input += synapse0x2fa8ff0();
   input += synapse0x2fa9030();
   input += synapse0x2fa9070();
   input += synapse0x2fa90b0();
   input += synapse0x2fa90f0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2fa7fd0() {
   double input = input0x2fa7fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2fa9130() {
   double input = -0.864794;
   input += synapse0x2fa9470();
   input += synapse0x2fa94b0();
   input += synapse0x2fa94f0();
   input += synapse0x2fa9530();
   input += synapse0x2fa9570();
   input += synapse0x2fa95b0();
   input += synapse0x2fa95f0();
   input += synapse0x2fa9630();
   input += synapse0x2fa9670();
   input += synapse0x2fa96b0();
   input += synapse0x2fa96f0();
   input += synapse0x2fa9730();
   input += synapse0x2fa9770();
   input += synapse0x2fa97b0();
   input += synapse0x2fa97f0();
   input += synapse0x2fa9830();
   input += synapse0x2fa92c0();
   input += synapse0x2fa9300();
   input += synapse0x2fa9980();
   input += synapse0x2fa99c0();
   input += synapse0x2fa9a00();
   input += synapse0x2fa9a40();
   input += synapse0x2fa9a80();
   input += synapse0x2fa9ac0();
   input += synapse0x2fa9b00();
   input += synapse0x2fa9b40();
   input += synapse0x2fa9b80();
   input += synapse0x2fa9bc0();
   input += synapse0x2fa9c00();
   input += synapse0x2fa9c40();
   input += synapse0x2fa9c80();
   input += synapse0x2fa9cc0();
   input += synapse0x2fa9870();
   input += synapse0x2fa98b0();
   input += synapse0x2fa98f0();
   input += synapse0x2fa9930();
   input += synapse0x2fa9f10();
   input += synapse0x2fa9f50();
   input += synapse0x2fa9f90();
   input += synapse0x2fa9fd0();
   input += synapse0x2faa010();
   input += synapse0x2faa050();
   input += synapse0x2faa090();
   input += synapse0x2faa0d0();
   input += synapse0x2faa110();
   input += synapse0x2faa150();
   input += synapse0x2faa190();
   input += synapse0x2faa1d0();
   input += synapse0x2faa210();
   input += synapse0x2faa250();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2fa9130() {
   double input = input0x2fa9130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2faa290() {
   double input = 0.398646;
   input += synapse0x2faa5d0();
   input += synapse0x2faa610();
   input += synapse0x2faa650();
   input += synapse0x2faa690();
   input += synapse0x2faa6d0();
   input += synapse0x2faa710();
   input += synapse0x2faa750();
   input += synapse0x2faa790();
   input += synapse0x2faa7d0();
   input += synapse0x2faa810();
   input += synapse0x2faa850();
   input += synapse0x2faa890();
   input += synapse0x2faa8d0();
   input += synapse0x2faa910();
   input += synapse0x2faa950();
   input += synapse0x2faa990();
   input += synapse0x2faa420();
   input += synapse0x2faa460();
   input += synapse0x2faaae0();
   input += synapse0x2faab20();
   input += synapse0x2faab60();
   input += synapse0x2faaba0();
   input += synapse0x2faabe0();
   input += synapse0x2faac20();
   input += synapse0x2faac60();
   input += synapse0x2faaca0();
   input += synapse0x2faace0();
   input += synapse0x2faad20();
   input += synapse0x2faad60();
   input += synapse0x2faada0();
   input += synapse0x2faade0();
   input += synapse0x2faae20();
   input += synapse0x2faa9d0();
   input += synapse0x2faaa10();
   input += synapse0x2faaa50();
   input += synapse0x2faaa90();
   input += synapse0x2fab070();
   input += synapse0x2fab0b0();
   input += synapse0x2fab0f0();
   input += synapse0x2fab130();
   input += synapse0x2fab170();
   input += synapse0x2fab1b0();
   input += synapse0x2fab1f0();
   input += synapse0x2fab230();
   input += synapse0x2fab270();
   input += synapse0x2fab2b0();
   input += synapse0x2fab2f0();
   input += synapse0x2fab330();
   input += synapse0x2fab370();
   input += synapse0x2fab3b0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2faa290() {
   double input = input0x2faa290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sLcR::input0x2fab3f0() {
   double input = 13.4639;
   input += synapse0x2f7c4d0();
   input += synapse0x2fab610();
   input += synapse0x2fab650();
   input += synapse0x2fab690();
   input += synapse0x2fab6d0();
   return input;
}

double NNfunction_ss_sLcR::neuron0x2fab3f0() {
   double input = input0x2fab3f0();
   return (input * 1)+0;
}

double NNfunction_ss_sLcR::synapse0x2d37320() {
   return (neuron0x2f774b0()*-0.555574);
}

double NNfunction_ss_sLcR::synapse0x2f77370() {
   return (neuron0x2f777f0()*-0.146637);
}

double NNfunction_ss_sLcR::synapse0x2f773b0() {
   return (neuron0x2f77b30()*-0.532841);
}

double NNfunction_ss_sLcR::synapse0x2f7c7c0() {
   return (neuron0x2f77e70()*1.32269);
}

double NNfunction_ss_sLcR::synapse0x2f7c800() {
   return (neuron0x2f781b0()*0.657469);
}

double NNfunction_ss_sLcR::synapse0x2f7c840() {
   return (neuron0x2f784f0()*1.23141);
}

double NNfunction_ss_sLcR::synapse0x2f7c880() {
   return (neuron0x2f78830()*-0.119478);
}

double NNfunction_ss_sLcR::synapse0x2f7c8c0() {
   return (neuron0x2f78b70()*0.534671);
}

double NNfunction_ss_sLcR::synapse0x2f7c900() {
   return (neuron0x2f78eb0()*-0.979639);
}

double NNfunction_ss_sLcR::synapse0x2f7c940() {
   return (neuron0x2f791f0()*0.210339);
}

double NNfunction_ss_sLcR::synapse0x2f7c980() {
   return (neuron0x2f79530()*0.0916867);
}

double NNfunction_ss_sLcR::synapse0x2f7c9c0() {
   return (neuron0x2f79870()*-0.427781);
}

double NNfunction_ss_sLcR::synapse0x2f7ca00() {
   return (neuron0x2f79bb0()*0.34058);
}

double NNfunction_ss_sLcR::synapse0x2f7ca40() {
   return (neuron0x2f79ef0()*-0.000354317);
}

double NNfunction_ss_sLcR::synapse0x2f7ca80() {
   return (neuron0x2f7a230()*0.642878);
}

double NNfunction_ss_sLcR::synapse0x2f7cac0() {
   return (neuron0x2f7a570()*-0.0585112);
}

double NNfunction_ss_sLcR::synapse0x2f772e0() {
   return (neuron0x2f7a8b0()*-0.0325275);
}

double NNfunction_ss_sLcR::synapse0x2f77320() {
   return (neuron0x2f7ae10()*-0.0568328);
}

double NNfunction_ss_sLcR::synapse0x2d28bc0() {
   return (neuron0x2f7b030()*0.201084);
}

double NNfunction_ss_sLcR::synapse0x2d28c00() {
   return (neuron0x2f7b370()*-0.169429);
}

double NNfunction_ss_sLcR::synapse0x2f7cd20() {
   return (neuron0x2f7b6b0()*-0.428668);
}

double NNfunction_ss_sLcR::synapse0x2f7cd60() {
   return (neuron0x2f7b9f0()*-1.12242);
}

double NNfunction_ss_sLcR::synapse0x2f7cda0() {
   return (neuron0x2f7bd30()*0.242642);
}

double NNfunction_ss_sLcR::synapse0x2f7cde0() {
   return (neuron0x2f7c070()*0.0127137);
}

double NNfunction_ss_sLcR::synapse0x2f7d160() {
   return (neuron0x2f774b0()*0.0648368);
}

double NNfunction_ss_sLcR::synapse0x2f7d1a0() {
   return (neuron0x2f777f0()*0.0133544);
}

double NNfunction_ss_sLcR::synapse0x2f7d1e0() {
   return (neuron0x2f77b30()*0.0650676);
}

double NNfunction_ss_sLcR::synapse0x2f7d220() {
   return (neuron0x2f77e70()*-2.38523);
}

double NNfunction_ss_sLcR::synapse0x2f7d260() {
   return (neuron0x2f781b0()*0.0126736);
}

double NNfunction_ss_sLcR::synapse0x2f7d2a0() {
   return (neuron0x2f784f0()*0.0231303);
}

double NNfunction_ss_sLcR::synapse0x2f7d2e0() {
   return (neuron0x2f78830()*0.0221015);
}

double NNfunction_ss_sLcR::synapse0x2f7d320() {
   return (neuron0x2f78b70()*0.0928774);
}

double NNfunction_ss_sLcR::synapse0x2f7d360() {
   return (neuron0x2f78eb0()*-0.0738677);
}

double NNfunction_ss_sLcR::synapse0x2f7cc10() {
   return (neuron0x2f791f0()*0.0133433);
}

double NNfunction_ss_sLcR::synapse0x2f7cc50() {
   return (neuron0x2f79530()*-0.0310084);
}

double NNfunction_ss_sLcR::synapse0x2f7cc90() {
   return (neuron0x2f79870()*0.00721174);
}

double NNfunction_ss_sLcR::synapse0x2f7ccd0() {
   return (neuron0x2f79bb0()*-0.0536487);
}

double NNfunction_ss_sLcR::synapse0x2f7d5b0() {
   return (neuron0x2f79ef0()*-0.100566);
}

double NNfunction_ss_sLcR::synapse0x2f7d5f0() {
   return (neuron0x2f7a230()*0.00443876);
}

double NNfunction_ss_sLcR::synapse0x2f7d630() {
   return (neuron0x2f7a570()*-2.24329);
}

double NNfunction_ss_sLcR::synapse0x2f7cfb0() {
   return (neuron0x2f7a8b0()*0.0430631);
}

double NNfunction_ss_sLcR::synapse0x2f7cff0() {
   return (neuron0x2f7ae10()*0.00292892);
}

double NNfunction_ss_sLcR::synapse0x2f7d780() {
   return (neuron0x2f7b030()*-0.0297981);
}

double NNfunction_ss_sLcR::synapse0x2f7d7c0() {
   return (neuron0x2f7b370()*-0.046031);
}

double NNfunction_ss_sLcR::synapse0x2f7d800() {
   return (neuron0x2f7b6b0()*0.0748151);
}

double NNfunction_ss_sLcR::synapse0x2f7d840() {
   return (neuron0x2f7b9f0()*0.0770496);
}

double NNfunction_ss_sLcR::synapse0x2f7d880() {
   return (neuron0x2f7bd30()*0.0119922);
}

double NNfunction_ss_sLcR::synapse0x2f7d8c0() {
   return (neuron0x2f7c070()*0.112816);
}

double NNfunction_ss_sLcR::synapse0x2f7dc40() {
   return (neuron0x2f774b0()*-0.0943634);
}

double NNfunction_ss_sLcR::synapse0x2f7dc80() {
   return (neuron0x2f777f0()*0.609987);
}

double NNfunction_ss_sLcR::synapse0x2f7dcc0() {
   return (neuron0x2f77b30()*-0.292955);
}

double NNfunction_ss_sLcR::synapse0x2f7dd00() {
   return (neuron0x2f77e70()*-1.03904);
}

double NNfunction_ss_sLcR::synapse0x2f7dd40() {
   return (neuron0x2f781b0()*0.0277081);
}

double NNfunction_ss_sLcR::synapse0x2f7dd80() {
   return (neuron0x2f784f0()*-0.0235437);
}

double NNfunction_ss_sLcR::synapse0x2f7ddc0() {
   return (neuron0x2f78830()*0.177247);
}

double NNfunction_ss_sLcR::synapse0x2f7de00() {
   return (neuron0x2f78b70()*0.0963901);
}

double NNfunction_ss_sLcR::synapse0x2f7de40() {
   return (neuron0x2f78eb0()*0.257379);
}

double NNfunction_ss_sLcR::synapse0x2f7de80() {
   return (neuron0x2f791f0()*-0.247124);
}

double NNfunction_ss_sLcR::synapse0x2f7dec0() {
   return (neuron0x2f79530()*0.302328);
}

double NNfunction_ss_sLcR::synapse0x2f7df00() {
   return (neuron0x2f79870()*-0.0825663);
}

double NNfunction_ss_sLcR::synapse0x2f7df40() {
   return (neuron0x2f79bb0()*-0.50474);
}

double NNfunction_ss_sLcR::synapse0x2f7df80() {
   return (neuron0x2f79ef0()*-0.174882);
}

double NNfunction_ss_sLcR::synapse0x2f7dfc0() {
   return (neuron0x2f7a230()*-0.0525881);
}

double NNfunction_ss_sLcR::synapse0x2f7e000() {
   return (neuron0x2f7a570()*-0.53091);
}

double NNfunction_ss_sLcR::synapse0x2f7da90() {
   return (neuron0x2f7a8b0()*-0.0665718);
}

double NNfunction_ss_sLcR::synapse0x2f7dad0() {
   return (neuron0x2f7ae10()*-0.221152);
}

double NNfunction_ss_sLcR::synapse0x2d36a10() {
   return (neuron0x2f7b030()*0.352441);
}

double NNfunction_ss_sLcR::synapse0x2d36a50() {
   return (neuron0x2f7b370()*0.00229181);
}

double NNfunction_ss_sLcR::synapse0x2f66540() {
   return (neuron0x2f7b6b0()*0.0578341);
}

double NNfunction_ss_sLcR::synapse0x2f66580() {
   return (neuron0x2f7b9f0()*0.0203843);
}

double NNfunction_ss_sLcR::synapse0x2f665c0() {
   return (neuron0x2f7bd30()*-0.072515);
}

double NNfunction_ss_sLcR::synapse0x2f773f0() {
   return (neuron0x2f7c070()*0.0740635);
}

double NNfunction_ss_sLcR::synapse0x2f7d550() {
   return (neuron0x2f774b0()*0.0524034);
}

double NNfunction_ss_sLcR::synapse0x2f77430() {
   return (neuron0x2f777f0()*0.199993);
}

double NNfunction_ss_sLcR::synapse0x2f77470() {
   return (neuron0x2f77b30()*-0.131138);
}

double NNfunction_ss_sLcR::synapse0x2f7e150() {
   return (neuron0x2f77e70()*0.5479);
}

double NNfunction_ss_sLcR::synapse0x2f7e190() {
   return (neuron0x2f781b0()*0.0166273);
}

double NNfunction_ss_sLcR::synapse0x2f7e1d0() {
   return (neuron0x2f784f0()*0.75645);
}

double NNfunction_ss_sLcR::synapse0x2f7e210() {
   return (neuron0x2f78830()*-0.341919);
}

double NNfunction_ss_sLcR::synapse0x2f7e250() {
   return (neuron0x2f78b70()*0.319315);
}

double NNfunction_ss_sLcR::synapse0x2f7e290() {
   return (neuron0x2f78eb0()*0.85242);
}

double NNfunction_ss_sLcR::synapse0x2f7e2d0() {
   return (neuron0x2f791f0()*-0.777004);
}

double NNfunction_ss_sLcR::synapse0x2f7e310() {
   return (neuron0x2f79530()*1.02354);
}

double NNfunction_ss_sLcR::synapse0x2f7e350() {
   return (neuron0x2f79870()*0.40162);
}

double NNfunction_ss_sLcR::synapse0x2f7e390() {
   return (neuron0x2f79bb0()*0.522962);
}

double NNfunction_ss_sLcR::synapse0x2f7e3d0() {
   return (neuron0x2f79ef0()*-0.561537);
}

double NNfunction_ss_sLcR::synapse0x2f7e410() {
   return (neuron0x2f7a230()*0.878317);
}

double NNfunction_ss_sLcR::synapse0x2f7e450() {
   return (neuron0x2f7a570()*0.294906);
}

double NNfunction_ss_sLcR::synapse0x2f7d3a0() {
   return (neuron0x2f7a8b0()*-0.708195);
}

double NNfunction_ss_sLcR::synapse0x2f7d3e0() {
   return (neuron0x2f7ae10()*0.389931);
}

double NNfunction_ss_sLcR::synapse0x2f7e5a0() {
   return (neuron0x2f7b030()*0.0613214);
}

double NNfunction_ss_sLcR::synapse0x2f7e5e0() {
   return (neuron0x2f7b370()*-0.591878);
}

double NNfunction_ss_sLcR::synapse0x2f7e620() {
   return (neuron0x2f7b6b0()*-0.0933012);
}

double NNfunction_ss_sLcR::synapse0x2f7e660() {
   return (neuron0x2f7b9f0()*-0.679134);
}

double NNfunction_ss_sLcR::synapse0x2f7e6a0() {
   return (neuron0x2f7bd30()*0.153207);
}

double NNfunction_ss_sLcR::synapse0x2f7e6e0() {
   return (neuron0x2f7c070()*-0.449389);
}

double NNfunction_ss_sLcR::synapse0x2f7ea60() {
   return (neuron0x2f774b0()*0.0142278);
}

double NNfunction_ss_sLcR::synapse0x2f7eaa0() {
   return (neuron0x2f777f0()*-0.0472569);
}

double NNfunction_ss_sLcR::synapse0x2f7eae0() {
   return (neuron0x2f77b30()*0.00511645);
}

double NNfunction_ss_sLcR::synapse0x2f7eb20() {
   return (neuron0x2f77e70()*-0.0209207);
}

double NNfunction_ss_sLcR::synapse0x2f7eb60() {
   return (neuron0x2f781b0()*0.0338516);
}

double NNfunction_ss_sLcR::synapse0x2f7eba0() {
   return (neuron0x2f784f0()*-0.00438151);
}

double NNfunction_ss_sLcR::synapse0x2f7ebe0() {
   return (neuron0x2f78830()*0.00213717);
}

double NNfunction_ss_sLcR::synapse0x2f7ec20() {
   return (neuron0x2f78b70()*-0.025793);
}

double NNfunction_ss_sLcR::synapse0x2f7ec60() {
   return (neuron0x2f78eb0()*-0.0545943);
}

double NNfunction_ss_sLcR::synapse0x2f7eca0() {
   return (neuron0x2f791f0()*0.0060113);
}

double NNfunction_ss_sLcR::synapse0x2f7ece0() {
   return (neuron0x2f79530()*-0.0175185);
}

double NNfunction_ss_sLcR::synapse0x2f7ed20() {
   return (neuron0x2f79870()*0.0144086);
}

double NNfunction_ss_sLcR::synapse0x2f7ed60() {
   return (neuron0x2f79bb0()*-0.135685);
}

double NNfunction_ss_sLcR::synapse0x2f7eda0() {
   return (neuron0x2f79ef0()*0.0425562);
}

double NNfunction_ss_sLcR::synapse0x2f7ede0() {
   return (neuron0x2f7a230()*0.0291121);
}

double NNfunction_ss_sLcR::synapse0x2f7ee20() {
   return (neuron0x2f7a570()*1.335);
}

double NNfunction_ss_sLcR::synapse0x2f7e8b0() {
   return (neuron0x2f7a8b0()*0.0260804);
}

double NNfunction_ss_sLcR::synapse0x2f7e8f0() {
   return (neuron0x2f7ae10()*-0.0111809);
}

double NNfunction_ss_sLcR::synapse0x2f7ef70() {
   return (neuron0x2f7b030()*0.0162105);
}

double NNfunction_ss_sLcR::synapse0x2f7efb0() {
   return (neuron0x2f7b370()*0.00969087);
}

double NNfunction_ss_sLcR::synapse0x2f7eff0() {
   return (neuron0x2f7b6b0()*-0.000370517);
}

double NNfunction_ss_sLcR::synapse0x2f7f030() {
   return (neuron0x2f7b9f0()*-0.0203001);
}

double NNfunction_ss_sLcR::synapse0x2f7f070() {
   return (neuron0x2f7bd30()*-0.0262302);
}

double NNfunction_ss_sLcR::synapse0x2f7f0b0() {
   return (neuron0x2f7c070()*-0.0107007);
}

double NNfunction_ss_sLcR::synapse0x2f7f430() {
   return (neuron0x2f774b0()*0.435759);
}

double NNfunction_ss_sLcR::synapse0x2f7f470() {
   return (neuron0x2f777f0()*0.00863845);
}

double NNfunction_ss_sLcR::synapse0x2f7f4b0() {
   return (neuron0x2f77b30()*-0.0401065);
}

double NNfunction_ss_sLcR::synapse0x2f7f4f0() {
   return (neuron0x2f77e70()*0.0348423);
}

double NNfunction_ss_sLcR::synapse0x2f7f530() {
   return (neuron0x2f781b0()*0.304042);
}

double NNfunction_ss_sLcR::synapse0x2f7f570() {
   return (neuron0x2f784f0()*0.770625);
}

double NNfunction_ss_sLcR::synapse0x2f7f5b0() {
   return (neuron0x2f78830()*0.191323);
}

double NNfunction_ss_sLcR::synapse0x2f7f5f0() {
   return (neuron0x2f78b70()*0.0328109);
}

double NNfunction_ss_sLcR::synapse0x2f7f630() {
   return (neuron0x2f78eb0()*-0.413119);
}

double NNfunction_ss_sLcR::synapse0x2d36d80() {
   return (neuron0x2f791f0()*1.04978);
}

double NNfunction_ss_sLcR::synapse0x2d36dc0() {
   return (neuron0x2f79530()*-0.630374);
}

double NNfunction_ss_sLcR::synapse0x2d36e00() {
   return (neuron0x2f79870()*-0.644309);
}

double NNfunction_ss_sLcR::synapse0x2d36e40() {
   return (neuron0x2f79bb0()*0.855602);
}

double NNfunction_ss_sLcR::synapse0x2d36e80() {
   return (neuron0x2f79ef0()*-0.464871);
}

double NNfunction_ss_sLcR::synapse0x2d36ec0() {
   return (neuron0x2f7a230()*0.0757923);
}

double NNfunction_ss_sLcR::synapse0x2d36f00() {
   return (neuron0x2f7a570()*-0.546913);
}

double NNfunction_ss_sLcR::synapse0x2f7f280() {
   return (neuron0x2f7a8b0()*0.0180931);
}

double NNfunction_ss_sLcR::synapse0x2f7f2c0() {
   return (neuron0x2f7ae10()*-0.322455);
}

double NNfunction_ss_sLcR::synapse0x2d37050() {
   return (neuron0x2f7b030()*-0.145093);
}

double NNfunction_ss_sLcR::synapse0x2d37090() {
   return (neuron0x2f7b370()*0.773319);
}

double NNfunction_ss_sLcR::synapse0x2d370d0() {
   return (neuron0x2f7b6b0()*0.695346);
}

double NNfunction_ss_sLcR::synapse0x2d37110() {
   return (neuron0x2f7b9f0()*-0.121415);
}

double NNfunction_ss_sLcR::synapse0x2d37150() {
   return (neuron0x2f7bd30()*-1.18094);
}

double NNfunction_ss_sLcR::synapse0x2f7fe80() {
   return (neuron0x2f7c070()*-0.0948831);
}

double NNfunction_ss_sLcR::synapse0x2f80200() {
   return (neuron0x2f774b0()*0.0297017);
}

double NNfunction_ss_sLcR::synapse0x2f80240() {
   return (neuron0x2f777f0()*0.117659);
}

double NNfunction_ss_sLcR::synapse0x2f80280() {
   return (neuron0x2f77b30()*0.0950128);
}

double NNfunction_ss_sLcR::synapse0x2f802c0() {
   return (neuron0x2f77e70()*-0.345711);
}

double NNfunction_ss_sLcR::synapse0x2f80300() {
   return (neuron0x2f781b0()*0.0373506);
}

double NNfunction_ss_sLcR::synapse0x2f80340() {
   return (neuron0x2f784f0()*0.0144892);
}

double NNfunction_ss_sLcR::synapse0x2f80380() {
   return (neuron0x2f78830()*0.00598129);
}

double NNfunction_ss_sLcR::synapse0x2f803c0() {
   return (neuron0x2f78b70()*-0.0185128);
}

double NNfunction_ss_sLcR::synapse0x2f80400() {
   return (neuron0x2f78eb0()*-0.0211224);
}

double NNfunction_ss_sLcR::synapse0x2f80440() {
   return (neuron0x2f791f0()*0.0343043);
}

double NNfunction_ss_sLcR::synapse0x2f80480() {
   return (neuron0x2f79530()*-0.00688354);
}

double NNfunction_ss_sLcR::synapse0x2f804c0() {
   return (neuron0x2f79870()*0.0969789);
}

double NNfunction_ss_sLcR::synapse0x2f80500() {
   return (neuron0x2f79bb0()*0.0817208);
}

double NNfunction_ss_sLcR::synapse0x2f80540() {
   return (neuron0x2f79ef0()*0.0153372);
}

double NNfunction_ss_sLcR::synapse0x2f80580() {
   return (neuron0x2f7a230()*0.0726759);
}

double NNfunction_ss_sLcR::synapse0x2f805c0() {
   return (neuron0x2f7a570()*0.12616);
}

double NNfunction_ss_sLcR::synapse0x2f80050() {
   return (neuron0x2f7a8b0()*-0.0292689);
}

double NNfunction_ss_sLcR::synapse0x2f80090() {
   return (neuron0x2f7ae10()*0.162121);
}

double NNfunction_ss_sLcR::synapse0x2f80710() {
   return (neuron0x2f7b030()*0.0686132);
}

double NNfunction_ss_sLcR::synapse0x2f80750() {
   return (neuron0x2f7b370()*-0.0682901);
}

double NNfunction_ss_sLcR::synapse0x2f80790() {
   return (neuron0x2f7b6b0()*-0.0202527);
}

double NNfunction_ss_sLcR::synapse0x2f807d0() {
   return (neuron0x2f7b9f0()*-0.0345774);
}

double NNfunction_ss_sLcR::synapse0x2f80810() {
   return (neuron0x2f7bd30()*-0.00139474);
}

double NNfunction_ss_sLcR::synapse0x2f80850() {
   return (neuron0x2f7c070()*0.0131583);
}

double NNfunction_ss_sLcR::synapse0x2f80bd0() {
   return (neuron0x2f774b0()*0.247399);
}

double NNfunction_ss_sLcR::synapse0x2f80c10() {
   return (neuron0x2f777f0()*0.75603);
}

double NNfunction_ss_sLcR::synapse0x2f80c50() {
   return (neuron0x2f77b30()*-1.80797);
}

double NNfunction_ss_sLcR::synapse0x2f80c90() {
   return (neuron0x2f77e70()*-0.0481759);
}

double NNfunction_ss_sLcR::synapse0x2f80cd0() {
   return (neuron0x2f781b0()*-0.0498127);
}

double NNfunction_ss_sLcR::synapse0x2f80d10() {
   return (neuron0x2f784f0()*-0.264386);
}

double NNfunction_ss_sLcR::synapse0x2f80d50() {
   return (neuron0x2f78830()*0.128835);
}

double NNfunction_ss_sLcR::synapse0x2f80d90() {
   return (neuron0x2f78b70()*0.0775681);
}

double NNfunction_ss_sLcR::synapse0x2f80dd0() {
   return (neuron0x2f78eb0()*-0.279873);
}

double NNfunction_ss_sLcR::synapse0x2f80e10() {
   return (neuron0x2f791f0()*0.349244);
}

double NNfunction_ss_sLcR::synapse0x2f80e50() {
   return (neuron0x2f79530()*-0.270459);
}

double NNfunction_ss_sLcR::synapse0x2f80e90() {
   return (neuron0x2f79870()*0.145822);
}

double NNfunction_ss_sLcR::synapse0x2f80ed0() {
   return (neuron0x2f79bb0()*-0.337255);
}

double NNfunction_ss_sLcR::synapse0x2f80f10() {
   return (neuron0x2f79ef0()*0.335293);
}

double NNfunction_ss_sLcR::synapse0x2f80f50() {
   return (neuron0x2f7a230()*0.133148);
}

double NNfunction_ss_sLcR::synapse0x2f80f90() {
   return (neuron0x2f7a570()*-0.47457);
}

double NNfunction_ss_sLcR::synapse0x2f80a20() {
   return (neuron0x2f7a8b0()*-0.19375);
}

double NNfunction_ss_sLcR::synapse0x2f80a60() {
   return (neuron0x2f7ae10()*0.110182);
}

double NNfunction_ss_sLcR::synapse0x2f810e0() {
   return (neuron0x2f7b030()*-0.381061);
}

double NNfunction_ss_sLcR::synapse0x2f81120() {
   return (neuron0x2f7b370()*0.462864);
}

double NNfunction_ss_sLcR::synapse0x2f81160() {
   return (neuron0x2f7b6b0()*-0.249967);
}

double NNfunction_ss_sLcR::synapse0x2f811a0() {
   return (neuron0x2f7b9f0()*-0.612538);
}

double NNfunction_ss_sLcR::synapse0x2f811e0() {
   return (neuron0x2f7bd30()*-0.681112);
}

double NNfunction_ss_sLcR::synapse0x2f81220() {
   return (neuron0x2f7c070()*0.144286);
}

double NNfunction_ss_sLcR::synapse0x2f7ad00() {
   return (neuron0x2f774b0()*-0.496883);
}

double NNfunction_ss_sLcR::synapse0x2f7ad40() {
   return (neuron0x2f777f0()*-0.34123);
}

double NNfunction_ss_sLcR::synapse0x2f7ad80() {
   return (neuron0x2f77b30()*0.278542);
}

double NNfunction_ss_sLcR::synapse0x2f7adc0() {
   return (neuron0x2f77e70()*-1.4553);
}

double NNfunction_ss_sLcR::synapse0x2f817b0() {
   return (neuron0x2f781b0()*-0.0732852);
}

double NNfunction_ss_sLcR::synapse0x2f817f0() {
   return (neuron0x2f784f0()*-0.174258);
}

double NNfunction_ss_sLcR::synapse0x2f81830() {
   return (neuron0x2f78830()*0.239958);
}

double NNfunction_ss_sLcR::synapse0x2f81870() {
   return (neuron0x2f78b70()*0.188271);
}

double NNfunction_ss_sLcR::synapse0x2f818b0() {
   return (neuron0x2f78eb0()*0.606331);
}

double NNfunction_ss_sLcR::synapse0x2f818f0() {
   return (neuron0x2f791f0()*0.418352);
}

double NNfunction_ss_sLcR::synapse0x2f81930() {
   return (neuron0x2f79530()*0.578512);
}

double NNfunction_ss_sLcR::synapse0x2f81970() {
   return (neuron0x2f79870()*-0.552839);
}

double NNfunction_ss_sLcR::synapse0x2f819b0() {
   return (neuron0x2f79bb0()*-0.60697);
}

double NNfunction_ss_sLcR::synapse0x2f819f0() {
   return (neuron0x2f79ef0()*-0.0540827);
}

double NNfunction_ss_sLcR::synapse0x2f81a30() {
   return (neuron0x2f7a230()*0.552117);
}

double NNfunction_ss_sLcR::synapse0x2f81a70() {
   return (neuron0x2f7a570()*-0.786367);
}

double NNfunction_ss_sLcR::synapse0x2f813f0() {
   return (neuron0x2f7a8b0()*-0.00580853);
}

double NNfunction_ss_sLcR::synapse0x2f81430() {
   return (neuron0x2f7ae10()*-0.643423);
}

double NNfunction_ss_sLcR::synapse0x2f81bc0() {
   return (neuron0x2f7b030()*1.09332);
}

double NNfunction_ss_sLcR::synapse0x2f81c00() {
   return (neuron0x2f7b370()*-0.335866);
}

double NNfunction_ss_sLcR::synapse0x2f81c40() {
   return (neuron0x2f7b6b0()*0.261742);
}

double NNfunction_ss_sLcR::synapse0x2f81c80() {
   return (neuron0x2f7b9f0()*0.492106);
}

double NNfunction_ss_sLcR::synapse0x2f81cc0() {
   return (neuron0x2f7bd30()*-0.561169);
}

double NNfunction_ss_sLcR::synapse0x2f81d00() {
   return (neuron0x2f7c070()*0.841313);
}

double NNfunction_ss_sLcR::synapse0x2f82080() {
   return (neuron0x2f774b0()*-0.0517202);
}

double NNfunction_ss_sLcR::synapse0x2f820c0() {
   return (neuron0x2f777f0()*-0.413458);
}

double NNfunction_ss_sLcR::synapse0x2f82100() {
   return (neuron0x2f77b30()*0.0713265);
}

double NNfunction_ss_sLcR::synapse0x2f82140() {
   return (neuron0x2f77e70()*1.54808);
}

double NNfunction_ss_sLcR::synapse0x2f82180() {
   return (neuron0x2f781b0()*-0.0430987);
}

double NNfunction_ss_sLcR::synapse0x2f821c0() {
   return (neuron0x2f784f0()*-0.00490403);
}

double NNfunction_ss_sLcR::synapse0x2f82200() {
   return (neuron0x2f78830()*0.0196911);
}

double NNfunction_ss_sLcR::synapse0x2f82240() {
   return (neuron0x2f78b70()*0.0689175);
}

double NNfunction_ss_sLcR::synapse0x2f82280() {
   return (neuron0x2f78eb0()*0.0694216);
}

double NNfunction_ss_sLcR::synapse0x2f822c0() {
   return (neuron0x2f791f0()*-0.0248619);
}

double NNfunction_ss_sLcR::synapse0x2f82300() {
   return (neuron0x2f79530()*-0.0691158);
}

double NNfunction_ss_sLcR::synapse0x2f82340() {
   return (neuron0x2f79870()*-0.188775);
}

double NNfunction_ss_sLcR::synapse0x2f82380() {
   return (neuron0x2f79bb0()*-0.0842241);
}

double NNfunction_ss_sLcR::synapse0x2f823c0() {
   return (neuron0x2f79ef0()*0.0734627);
}

double NNfunction_ss_sLcR::synapse0x2f82400() {
   return (neuron0x2f7a230()*0.00219379);
}

double NNfunction_ss_sLcR::synapse0x2f82440() {
   return (neuron0x2f7a570()*-0.167129);
}

double NNfunction_ss_sLcR::synapse0x2f81ed0() {
   return (neuron0x2f7a8b0()*-0.0424389);
}

double NNfunction_ss_sLcR::synapse0x2f81f10() {
   return (neuron0x2f7ae10()*0.0412812);
}

double NNfunction_ss_sLcR::synapse0x2f82590() {
   return (neuron0x2f7b030()*0.237954);
}

double NNfunction_ss_sLcR::synapse0x2f825d0() {
   return (neuron0x2f7b370()*0.148836);
}

double NNfunction_ss_sLcR::synapse0x2f82610() {
   return (neuron0x2f7b6b0()*-0.171634);
}

double NNfunction_ss_sLcR::synapse0x2f82650() {
   return (neuron0x2f7b9f0()*-0.013122);
}

double NNfunction_ss_sLcR::synapse0x2f82690() {
   return (neuron0x2f7bd30()*0.0215746);
}

double NNfunction_ss_sLcR::synapse0x2f826d0() {
   return (neuron0x2f7c070()*0.00912209);
}

double NNfunction_ss_sLcR::synapse0x2f82a50() {
   return (neuron0x2f774b0()*-0.739362);
}

double NNfunction_ss_sLcR::synapse0x2f82a90() {
   return (neuron0x2f777f0()*0.458117);
}

double NNfunction_ss_sLcR::synapse0x2f82ad0() {
   return (neuron0x2f77b30()*-0.583704);
}

double NNfunction_ss_sLcR::synapse0x2f82b10() {
   return (neuron0x2f77e70()*0.39659);
}

double NNfunction_ss_sLcR::synapse0x2f82b50() {
   return (neuron0x2f781b0()*-0.605166);
}

double NNfunction_ss_sLcR::synapse0x2f82b90() {
   return (neuron0x2f784f0()*0.279371);
}

double NNfunction_ss_sLcR::synapse0x2f82bd0() {
   return (neuron0x2f78830()*-0.062599);
}

double NNfunction_ss_sLcR::synapse0x2f82c10() {
   return (neuron0x2f78b70()*-0.278383);
}

double NNfunction_ss_sLcR::synapse0x2f82c50() {
   return (neuron0x2f78eb0()*0.229465);
}

double NNfunction_ss_sLcR::synapse0x2f82c90() {
   return (neuron0x2f791f0()*0.58589);
}

double NNfunction_ss_sLcR::synapse0x2f82cd0() {
   return (neuron0x2f79530()*-0.45897);
}

double NNfunction_ss_sLcR::synapse0x2f82d10() {
   return (neuron0x2f79870()*0.665298);
}

double NNfunction_ss_sLcR::synapse0x2f82d50() {
   return (neuron0x2f79bb0()*0.341407);
}

double NNfunction_ss_sLcR::synapse0x2f82d90() {
   return (neuron0x2f79ef0()*-0.650184);
}

double NNfunction_ss_sLcR::synapse0x2f82dd0() {
   return (neuron0x2f7a230()*0.450499);
}

double NNfunction_ss_sLcR::synapse0x2f82e10() {
   return (neuron0x2f7a570()*0.56065);
}

double NNfunction_ss_sLcR::synapse0x2f828a0() {
   return (neuron0x2f7a8b0()*-0.660063);
}

double NNfunction_ss_sLcR::synapse0x2f828e0() {
   return (neuron0x2f7ae10()*-0.607627);
}

double NNfunction_ss_sLcR::synapse0x2f7f670() {
   return (neuron0x2f7b030()*0.3135);
}

double NNfunction_ss_sLcR::synapse0x2f7f6b0() {
   return (neuron0x2f7b370()*-0.481355);
}

double NNfunction_ss_sLcR::synapse0x2f7f6f0() {
   return (neuron0x2f7b6b0()*0.33586);
}

double NNfunction_ss_sLcR::synapse0x2f7f730() {
   return (neuron0x2f7b9f0()*0.398988);
}

double NNfunction_ss_sLcR::synapse0x2f7f770() {
   return (neuron0x2f7bd30()*0.641656);
}

double NNfunction_ss_sLcR::synapse0x2f7f7b0() {
   return (neuron0x2f7c070()*-0.420345);
}

double NNfunction_ss_sLcR::synapse0x2f7fb30() {
   return (neuron0x2f774b0()*-0.19162);
}

double NNfunction_ss_sLcR::synapse0x2f7fb70() {
   return (neuron0x2f777f0()*-0.216256);
}

double NNfunction_ss_sLcR::synapse0x2f7fbb0() {
   return (neuron0x2f77b30()*0.216888);
}

double NNfunction_ss_sLcR::synapse0x2f7fbf0() {
   return (neuron0x2f77e70()*-0.449195);
}

double NNfunction_ss_sLcR::synapse0x2f7fc30() {
   return (neuron0x2f781b0()*-0.478692);
}

double NNfunction_ss_sLcR::synapse0x2f7fc70() {
   return (neuron0x2f784f0()*-0.0466641);
}

double NNfunction_ss_sLcR::synapse0x2f7fcb0() {
   return (neuron0x2f78830()*-0.430567);
}

double NNfunction_ss_sLcR::synapse0x2f7fcf0() {
   return (neuron0x2f78b70()*-0.0871238);
}

double NNfunction_ss_sLcR::synapse0x2f7fd30() {
   return (neuron0x2f78eb0()*0.447072);
}

double NNfunction_ss_sLcR::synapse0x2f7fd70() {
   return (neuron0x2f791f0()*0.167322);
}

double NNfunction_ss_sLcR::synapse0x2f7fdb0() {
   return (neuron0x2f79530()*0.0375843);
}

double NNfunction_ss_sLcR::synapse0x2f7fdf0() {
   return (neuron0x2f79870()*0.715899);
}

double NNfunction_ss_sLcR::synapse0x2f7fe30() {
   return (neuron0x2f79bb0()*0.16413);
}

double NNfunction_ss_sLcR::synapse0x2f83f70() {
   return (neuron0x2f79ef0()*-0.106342);
}

double NNfunction_ss_sLcR::synapse0x2f83fb0() {
   return (neuron0x2f7a230()*-0.0474729);
}

double NNfunction_ss_sLcR::synapse0x2f83ff0() {
   return (neuron0x2f7a570()*-0.308894);
}

double NNfunction_ss_sLcR::synapse0x2f7f980() {
   return (neuron0x2f7a8b0()*0.214238);
}

double NNfunction_ss_sLcR::synapse0x2f7f9c0() {
   return (neuron0x2f7ae10()*-0.049442);
}

double NNfunction_ss_sLcR::synapse0x2f84140() {
   return (neuron0x2f7b030()*-0.0637934);
}

double NNfunction_ss_sLcR::synapse0x2f84180() {
   return (neuron0x2f7b370()*0.377637);
}

double NNfunction_ss_sLcR::synapse0x2f841c0() {
   return (neuron0x2f7b6b0()*-0.0120363);
}

double NNfunction_ss_sLcR::synapse0x2f84200() {
   return (neuron0x2f7b9f0()*-0.233138);
}

double NNfunction_ss_sLcR::synapse0x2f84240() {
   return (neuron0x2f7bd30()*-0.0116168);
}

double NNfunction_ss_sLcR::synapse0x2f84280() {
   return (neuron0x2f7c070()*-0.270422);
}

double NNfunction_ss_sLcR::synapse0x2f84600() {
   return (neuron0x2f774b0()*-0.0564764);
}

double NNfunction_ss_sLcR::synapse0x2f84640() {
   return (neuron0x2f777f0()*-0.336865);
}

double NNfunction_ss_sLcR::synapse0x2f84680() {
   return (neuron0x2f77b30()*1.41907);
}

double NNfunction_ss_sLcR::synapse0x2f846c0() {
   return (neuron0x2f77e70()*0.101176);
}

double NNfunction_ss_sLcR::synapse0x2f84700() {
   return (neuron0x2f781b0()*2.07378);
}

double NNfunction_ss_sLcR::synapse0x2f84740() {
   return (neuron0x2f784f0()*0.0251712);
}

double NNfunction_ss_sLcR::synapse0x2f84780() {
   return (neuron0x2f78830()*-0.588316);
}

double NNfunction_ss_sLcR::synapse0x2f847c0() {
   return (neuron0x2f78b70()*-0.170375);
}

double NNfunction_ss_sLcR::synapse0x2f84800() {
   return (neuron0x2f78eb0()*0.919549);
}

double NNfunction_ss_sLcR::synapse0x2f84840() {
   return (neuron0x2f791f0()*0.860955);
}

double NNfunction_ss_sLcR::synapse0x2f84880() {
   return (neuron0x2f79530()*-0.133376);
}

double NNfunction_ss_sLcR::synapse0x2f848c0() {
   return (neuron0x2f79870()*0.796274);
}

double NNfunction_ss_sLcR::synapse0x2f84900() {
   return (neuron0x2f79bb0()*-0.941704);
}

double NNfunction_ss_sLcR::synapse0x2f84940() {
   return (neuron0x2f79ef0()*1.30891);
}

double NNfunction_ss_sLcR::synapse0x2f84980() {
   return (neuron0x2f7a230()*-0.194814);
}

double NNfunction_ss_sLcR::synapse0x2f849c0() {
   return (neuron0x2f7a570()*-0.466459);
}

double NNfunction_ss_sLcR::synapse0x2f84450() {
   return (neuron0x2f7a8b0()*0.245684);
}

double NNfunction_ss_sLcR::synapse0x2f84490() {
   return (neuron0x2f7ae10()*0.807815);
}

double NNfunction_ss_sLcR::synapse0x2f84b10() {
   return (neuron0x2f7b030()*-0.71151);
}

double NNfunction_ss_sLcR::synapse0x2f84b50() {
   return (neuron0x2f7b370()*0.124016);
}

double NNfunction_ss_sLcR::synapse0x2f84b90() {
   return (neuron0x2f7b6b0()*0.449223);
}

double NNfunction_ss_sLcR::synapse0x2f84bd0() {
   return (neuron0x2f7b9f0()*0.159923);
}

double NNfunction_ss_sLcR::synapse0x2f84c10() {
   return (neuron0x2f7bd30()*-0.568976);
}

double NNfunction_ss_sLcR::synapse0x2f84c50() {
   return (neuron0x2f7c070()*-1.22663);
}

double NNfunction_ss_sLcR::synapse0x2f84fd0() {
   return (neuron0x2f774b0()*-0.0258614);
}

double NNfunction_ss_sLcR::synapse0x2f85010() {
   return (neuron0x2f777f0()*-0.27406);
}

double NNfunction_ss_sLcR::synapse0x2f85050() {
   return (neuron0x2f77b30()*-0.11658);
}

double NNfunction_ss_sLcR::synapse0x2f85090() {
   return (neuron0x2f77e70()*-2.75891);
}

double NNfunction_ss_sLcR::synapse0x2f850d0() {
   return (neuron0x2f781b0()*-0.0460784);
}

double NNfunction_ss_sLcR::synapse0x2f85110() {
   return (neuron0x2f784f0()*0.0095606);
}

double NNfunction_ss_sLcR::synapse0x2f85150() {
   return (neuron0x2f78830()*-0.0399373);
}

double NNfunction_ss_sLcR::synapse0x2f85190() {
   return (neuron0x2f78b70()*-0.0345348);
}

double NNfunction_ss_sLcR::synapse0x2f851d0() {
   return (neuron0x2f78eb0()*0.198245);
}

double NNfunction_ss_sLcR::synapse0x2f85210() {
   return (neuron0x2f791f0()*0.0989465);
}

double NNfunction_ss_sLcR::synapse0x2f85250() {
   return (neuron0x2f79530()*0.00881222);
}

double NNfunction_ss_sLcR::synapse0x2f85290() {
   return (neuron0x2f79870()*-0.141361);
}

double NNfunction_ss_sLcR::synapse0x2f852d0() {
   return (neuron0x2f79bb0()*0.0729514);
}

double NNfunction_ss_sLcR::synapse0x2f85310() {
   return (neuron0x2f79ef0()*-0.0833023);
}

double NNfunction_ss_sLcR::synapse0x2f85350() {
   return (neuron0x2f7a230()*0.0796946);
}

double NNfunction_ss_sLcR::synapse0x2f85390() {
   return (neuron0x2f7a570()*-0.118677);
}

double NNfunction_ss_sLcR::synapse0x2f84e20() {
   return (neuron0x2f7a8b0()*-0.0691052);
}

double NNfunction_ss_sLcR::synapse0x2f84e60() {
   return (neuron0x2f7ae10()*0.219096);
}

double NNfunction_ss_sLcR::synapse0x2f854e0() {
   return (neuron0x2f7b030()*0.0936556);
}

double NNfunction_ss_sLcR::synapse0x2f85520() {
   return (neuron0x2f7b370()*0.148283);
}

double NNfunction_ss_sLcR::synapse0x2f85560() {
   return (neuron0x2f7b6b0()*-0.0735389);
}

double NNfunction_ss_sLcR::synapse0x2f855a0() {
   return (neuron0x2f7b9f0()*0.020187);
}

double NNfunction_ss_sLcR::synapse0x2f855e0() {
   return (neuron0x2f7bd30()*0.0317026);
}

double NNfunction_ss_sLcR::synapse0x2f85620() {
   return (neuron0x2f7c070()*0.0384507);
}

double NNfunction_ss_sLcR::synapse0x2f859a0() {
   return (neuron0x2f774b0()*0.0887164);
}

double NNfunction_ss_sLcR::synapse0x2f859e0() {
   return (neuron0x2f777f0()*-0.0478711);
}

double NNfunction_ss_sLcR::synapse0x2f85a20() {
   return (neuron0x2f77b30()*-0.0773769);
}

double NNfunction_ss_sLcR::synapse0x2f85a60() {
   return (neuron0x2f77e70()*1.87295);
}

double NNfunction_ss_sLcR::synapse0x2f85aa0() {
   return (neuron0x2f781b0()*0.0760126);
}

double NNfunction_ss_sLcR::synapse0x2f85ae0() {
   return (neuron0x2f784f0()*-0.0254181);
}

double NNfunction_ss_sLcR::synapse0x2f85b20() {
   return (neuron0x2f78830()*0.147112);
}

double NNfunction_ss_sLcR::synapse0x2f85b60() {
   return (neuron0x2f78b70()*-0.114305);
}

double NNfunction_ss_sLcR::synapse0x2f85ba0() {
   return (neuron0x2f78eb0()*-0.0435668);
}

double NNfunction_ss_sLcR::synapse0x2f85be0() {
   return (neuron0x2f791f0()*0.0254992);
}

double NNfunction_ss_sLcR::synapse0x2f85c20() {
   return (neuron0x2f79530()*-0.115395);
}

double NNfunction_ss_sLcR::synapse0x2f85c60() {
   return (neuron0x2f79870()*-0.0290453);
}

double NNfunction_ss_sLcR::synapse0x2f85ca0() {
   return (neuron0x2f79bb0()*2.61336);
}

double NNfunction_ss_sLcR::synapse0x2f85ce0() {
   return (neuron0x2f79ef0()*0.123261);
}

double NNfunction_ss_sLcR::synapse0x2f85d20() {
   return (neuron0x2f7a230()*0.12489);
}

double NNfunction_ss_sLcR::synapse0x2f85d60() {
   return (neuron0x2f7a570()*-0.022456);
}

double NNfunction_ss_sLcR::synapse0x2f857f0() {
   return (neuron0x2f7a8b0()*0.0414297);
}

double NNfunction_ss_sLcR::synapse0x2f85830() {
   return (neuron0x2f7ae10()*0.0360265);
}

double NNfunction_ss_sLcR::synapse0x2f85eb0() {
   return (neuron0x2f7b030()*0.148319);
}

double NNfunction_ss_sLcR::synapse0x2f85ef0() {
   return (neuron0x2f7b370()*-0.0862347);
}

double NNfunction_ss_sLcR::synapse0x2f85f30() {
   return (neuron0x2f7b6b0()*-0.0719116);
}

double NNfunction_ss_sLcR::synapse0x2f85f70() {
   return (neuron0x2f7b9f0()*-0.156175);
}

double NNfunction_ss_sLcR::synapse0x2f85fb0() {
   return (neuron0x2f7bd30()*0.00464588);
}

double NNfunction_ss_sLcR::synapse0x2f85ff0() {
   return (neuron0x2f7c070()*-0.0704402);
}

double NNfunction_ss_sLcR::synapse0x2f86370() {
   return (neuron0x2f774b0()*-0.0130074);
}

double NNfunction_ss_sLcR::synapse0x2f776d0() {
   return (neuron0x2f777f0()*0.361124);
}

double NNfunction_ss_sLcR::synapse0x2f77710() {
   return (neuron0x2f77b30()*0.982022);
}

double NNfunction_ss_sLcR::synapse0x2f77a10() {
   return (neuron0x2f77e70()*0.32171);
}

double NNfunction_ss_sLcR::synapse0x2f77a50() {
   return (neuron0x2f781b0()*-0.0659276);
}

double NNfunction_ss_sLcR::synapse0x2f77d50() {
   return (neuron0x2f784f0()*-0.0352906);
}

double NNfunction_ss_sLcR::synapse0x2f77d90() {
   return (neuron0x2f78830()*-0.113309);
}

double NNfunction_ss_sLcR::synapse0x2f78090() {
   return (neuron0x2f78b70()*-0.0295028);
}

double NNfunction_ss_sLcR::synapse0x2f780d0() {
   return (neuron0x2f78eb0()*0.0459458);
}

double NNfunction_ss_sLcR::synapse0x2f783d0() {
   return (neuron0x2f791f0()*0.00739236);
}

double NNfunction_ss_sLcR::synapse0x2f78410() {
   return (neuron0x2f79530()*-0.0173097);
}

double NNfunction_ss_sLcR::synapse0x2f78710() {
   return (neuron0x2f79870()*-0.498472);
}

double NNfunction_ss_sLcR::synapse0x2f78750() {
   return (neuron0x2f79bb0()*-0.0994296);
}

double NNfunction_ss_sLcR::synapse0x2f78a50() {
   return (neuron0x2f79ef0()*0.0753882);
}

double NNfunction_ss_sLcR::synapse0x2f78a90() {
   return (neuron0x2f7a230()*-0.12543);
}

double NNfunction_ss_sLcR::synapse0x2f78d90() {
   return (neuron0x2f7a570()*-0.262787);
}

double NNfunction_ss_sLcR::synapse0x2f78dd0() {
   return (neuron0x2f7a8b0()*0.0869988);
}

double NNfunction_ss_sLcR::synapse0x2f790d0() {
   return (neuron0x2f7ae10()*-0.159172);
}

double NNfunction_ss_sLcR::synapse0x2f79110() {
   return (neuron0x2f7b030()*-0.174151);
}

double NNfunction_ss_sLcR::synapse0x2f79410() {
   return (neuron0x2f7b370()*0.0696855);
}

double NNfunction_ss_sLcR::synapse0x2f79450() {
   return (neuron0x2f7b6b0()*-0.0880458);
}

double NNfunction_ss_sLcR::synapse0x2f79750() {
   return (neuron0x2f7b9f0()*-0.0643948);
}

double NNfunction_ss_sLcR::synapse0x2f79790() {
   return (neuron0x2f7bd30()*-0.0548571);
}

double NNfunction_ss_sLcR::synapse0x2f79a90() {
   return (neuron0x2f7c070()*0.021896);
}

double NNfunction_ss_sLcR::synapse0x2f79ad0() {
   return (neuron0x2f774b0()*-0.0108317);
}

double NNfunction_ss_sLcR::synapse0x2f7a790() {
   return (neuron0x2f777f0()*-0.070702);
}

double NNfunction_ss_sLcR::synapse0x2f7a7d0() {
   return (neuron0x2f77b30()*0.0748845);
}

double NNfunction_ss_sLcR::synapse0x2f861c0() {
   return (neuron0x2f77e70()*2.96911);
}

double NNfunction_ss_sLcR::synapse0x2f86200() {
   return (neuron0x2f781b0()*-0.00402422);
}

double NNfunction_ss_sLcR::synapse0x2f7aad0() {
   return (neuron0x2f784f0()*0.0163126);
}

double NNfunction_ss_sLcR::synapse0x2f7ab10() {
   return (neuron0x2f78830()*-0.00601505);
}

double NNfunction_ss_sLcR::synapse0x2d28aa0() {
   return (neuron0x2f78b70()*0.0173017);
}

double NNfunction_ss_sLcR::synapse0x2d28ae0() {
   return (neuron0x2f78eb0()*-0.0276272);
}

double NNfunction_ss_sLcR::synapse0x2f7b250() {
   return (neuron0x2f791f0()*-0.0256463);
}

double NNfunction_ss_sLcR::synapse0x2f7b290() {
   return (neuron0x2f79530()*0.0159534);
}

double NNfunction_ss_sLcR::synapse0x2f7b590() {
   return (neuron0x2f79870()*0.0279789);
}

double NNfunction_ss_sLcR::synapse0x2f7b5d0() {
   return (neuron0x2f79bb0()*0.452808);
}

double NNfunction_ss_sLcR::synapse0x2f7b8d0() {
   return (neuron0x2f79ef0()*-0.00359422);
}

double NNfunction_ss_sLcR::synapse0x2f7b910() {
   return (neuron0x2f7a230()*-0.0423086);
}

double NNfunction_ss_sLcR::synapse0x2f7bc10() {
   return (neuron0x2f7a570()*0.716386);
}

double NNfunction_ss_sLcR::synapse0x2f7bc50() {
   return (neuron0x2f7a8b0()*-0.0103668);
}

double NNfunction_ss_sLcR::synapse0x2f7bf50() {
   return (neuron0x2f7ae10()*-0.0503575);
}

double NNfunction_ss_sLcR::synapse0x2f7bf90() {
   return (neuron0x2f7b030()*-0.0177294);
}

double NNfunction_ss_sLcR::synapse0x2f7c290() {
   return (neuron0x2f7b370()*0.0198399);
}

double NNfunction_ss_sLcR::synapse0x2f7c2d0() {
   return (neuron0x2f7b6b0()*0.0251917);
}

double NNfunction_ss_sLcR::synapse0x2f79dd0() {
   return (neuron0x2f7b9f0()*0.0282087);
}

double NNfunction_ss_sLcR::synapse0x2f79e10() {
   return (neuron0x2f7bd30()*0.00155218);
}

double NNfunction_ss_sLcR::synapse0x2f880e0() {
   return (neuron0x2f7c070()*0.0290121);
}

double NNfunction_ss_sLcR::synapse0x2f88460() {
   return (neuron0x2f774b0()*-0.0463924);
}

double NNfunction_ss_sLcR::synapse0x2f884a0() {
   return (neuron0x2f777f0()*-0.446663);
}

double NNfunction_ss_sLcR::synapse0x2f884e0() {
   return (neuron0x2f77b30()*0.400439);
}

double NNfunction_ss_sLcR::synapse0x2f88520() {
   return (neuron0x2f77e70()*0.359639);
}

double NNfunction_ss_sLcR::synapse0x2f88560() {
   return (neuron0x2f781b0()*-0.24646);
}

double NNfunction_ss_sLcR::synapse0x2f885a0() {
   return (neuron0x2f784f0()*1.19646);
}

double NNfunction_ss_sLcR::synapse0x2f885e0() {
   return (neuron0x2f78830()*0.604063);
}

double NNfunction_ss_sLcR::synapse0x2f88620() {
   return (neuron0x2f78b70()*0.0640799);
}

double NNfunction_ss_sLcR::synapse0x2f88660() {
   return (neuron0x2f78eb0()*0.219613);
}

double NNfunction_ss_sLcR::synapse0x2f886a0() {
   return (neuron0x2f791f0()*-0.44845);
}

double NNfunction_ss_sLcR::synapse0x2f886e0() {
   return (neuron0x2f79530()*-0.702583);
}

double NNfunction_ss_sLcR::synapse0x2f88720() {
   return (neuron0x2f79870()*-0.563942);
}

double NNfunction_ss_sLcR::synapse0x2f88760() {
   return (neuron0x2f79bb0()*0.321762);
}

double NNfunction_ss_sLcR::synapse0x2f887a0() {
   return (neuron0x2f79ef0()*-1.45384);
}

double NNfunction_ss_sLcR::synapse0x2f887e0() {
   return (neuron0x2f7a230()*1.10983);
}

double NNfunction_ss_sLcR::synapse0x2f88820() {
   return (neuron0x2f7a570()*1.26428);
}

double NNfunction_ss_sLcR::synapse0x2f882b0() {
   return (neuron0x2f7a8b0()*-0.0915187);
}

double NNfunction_ss_sLcR::synapse0x2f882f0() {
   return (neuron0x2f7ae10()*0.139045);
}

double NNfunction_ss_sLcR::synapse0x2f88970() {
   return (neuron0x2f7b030()*0.347894);
}

double NNfunction_ss_sLcR::synapse0x2f889b0() {
   return (neuron0x2f7b370()*1.39056);
}

double NNfunction_ss_sLcR::synapse0x2f889f0() {
   return (neuron0x2f7b6b0()*0.181863);
}

double NNfunction_ss_sLcR::synapse0x2f88a30() {
   return (neuron0x2f7b9f0()*-0.587294);
}

double NNfunction_ss_sLcR::synapse0x2f88a70() {
   return (neuron0x2f7bd30()*0.459577);
}

double NNfunction_ss_sLcR::synapse0x2f88ab0() {
   return (neuron0x2f7c070()*0.657598);
}

double NNfunction_ss_sLcR::synapse0x2f88e30() {
   return (neuron0x2f774b0()*0.025952);
}

double NNfunction_ss_sLcR::synapse0x2f88e70() {
   return (neuron0x2f777f0()*-0.0913512);
}

double NNfunction_ss_sLcR::synapse0x2f88eb0() {
   return (neuron0x2f77b30()*0.180669);
}

double NNfunction_ss_sLcR::synapse0x2f88ef0() {
   return (neuron0x2f77e70()*0.46919);
}

double NNfunction_ss_sLcR::synapse0x2f88f30() {
   return (neuron0x2f781b0()*-0.018305);
}

double NNfunction_ss_sLcR::synapse0x2f88f70() {
   return (neuron0x2f784f0()*-0.0245092);
}

double NNfunction_ss_sLcR::synapse0x2f88fb0() {
   return (neuron0x2f78830()*0.0134936);
}

double NNfunction_ss_sLcR::synapse0x2f88ff0() {
   return (neuron0x2f78b70()*0.0160458);
}

double NNfunction_ss_sLcR::synapse0x2f89030() {
   return (neuron0x2f78eb0()*-0.0267465);
}

double NNfunction_ss_sLcR::synapse0x2f89070() {
   return (neuron0x2f791f0()*-0.00158269);
}

double NNfunction_ss_sLcR::synapse0x2f890b0() {
   return (neuron0x2f79530()*-0.00578538);
}

double NNfunction_ss_sLcR::synapse0x2f890f0() {
   return (neuron0x2f79870()*0.157882);
}

double NNfunction_ss_sLcR::synapse0x2f89130() {
   return (neuron0x2f79bb0()*-0.0524348);
}

double NNfunction_ss_sLcR::synapse0x2f89170() {
   return (neuron0x2f79ef0()*-0.0808297);
}

double NNfunction_ss_sLcR::synapse0x2f891b0() {
   return (neuron0x2f7a230()*0.00950429);
}

double NNfunction_ss_sLcR::synapse0x2f891f0() {
   return (neuron0x2f7a570()*0.0262134);
}

double NNfunction_ss_sLcR::synapse0x2f88c80() {
   return (neuron0x2f7a8b0()*-0.056056);
}

double NNfunction_ss_sLcR::synapse0x2f88cc0() {
   return (neuron0x2f7ae10()*0.0399958);
}

double NNfunction_ss_sLcR::synapse0x2f89340() {
   return (neuron0x2f7b030()*0.0935751);
}

double NNfunction_ss_sLcR::synapse0x2f89380() {
   return (neuron0x2f7b370()*0.00978744);
}

double NNfunction_ss_sLcR::synapse0x2f893c0() {
   return (neuron0x2f7b6b0()*0.0162039);
}

double NNfunction_ss_sLcR::synapse0x2f89400() {
   return (neuron0x2f7b9f0()*-0.00260048);
}

double NNfunction_ss_sLcR::synapse0x2f89440() {
   return (neuron0x2f7bd30()*-0.0176429);
}

double NNfunction_ss_sLcR::synapse0x2f89480() {
   return (neuron0x2f7c070()*0.0187143);
}

double NNfunction_ss_sLcR::synapse0x2f89800() {
   return (neuron0x2f774b0()*0.895747);
}

double NNfunction_ss_sLcR::synapse0x2f89840() {
   return (neuron0x2f777f0()*-0.106224);
}

double NNfunction_ss_sLcR::synapse0x2f89880() {
   return (neuron0x2f77b30()*0.0498361);
}

double NNfunction_ss_sLcR::synapse0x2f898c0() {
   return (neuron0x2f77e70()*0.438205);
}

double NNfunction_ss_sLcR::synapse0x2f89900() {
   return (neuron0x2f781b0()*0.687974);
}

double NNfunction_ss_sLcR::synapse0x2f89940() {
   return (neuron0x2f784f0()*0.445364);
}

double NNfunction_ss_sLcR::synapse0x2f89980() {
   return (neuron0x2f78830()*-0.497637);
}

double NNfunction_ss_sLcR::synapse0x2f899c0() {
   return (neuron0x2f78b70()*0.294122);
}

double NNfunction_ss_sLcR::synapse0x2f89a00() {
   return (neuron0x2f78eb0()*0.448515);
}

double NNfunction_ss_sLcR::synapse0x2f89a40() {
   return (neuron0x2f791f0()*0.0379217);
}

double NNfunction_ss_sLcR::synapse0x2f89a80() {
   return (neuron0x2f79530()*-0.221656);
}

double NNfunction_ss_sLcR::synapse0x2f89ac0() {
   return (neuron0x2f79870()*0.472953);
}

double NNfunction_ss_sLcR::synapse0x2f89b00() {
   return (neuron0x2f79bb0()*-0.0568533);
}

double NNfunction_ss_sLcR::synapse0x2f89b40() {
   return (neuron0x2f79ef0()*0.633529);
}

double NNfunction_ss_sLcR::synapse0x2f89b80() {
   return (neuron0x2f7a230()*-0.221567);
}

double NNfunction_ss_sLcR::synapse0x2f89bc0() {
   return (neuron0x2f7a570()*-0.376659);
}

double NNfunction_ss_sLcR::synapse0x2f89650() {
   return (neuron0x2f7a8b0()*-0.0125254);
}

double NNfunction_ss_sLcR::synapse0x2f89690() {
   return (neuron0x2f7ae10()*0.805901);
}

double NNfunction_ss_sLcR::synapse0x2f89d10() {
   return (neuron0x2f7b030()*-0.254415);
}

double NNfunction_ss_sLcR::synapse0x2f89d50() {
   return (neuron0x2f7b370()*0.604302);
}

double NNfunction_ss_sLcR::synapse0x2f89d90() {
   return (neuron0x2f7b6b0()*0.482438);
}

double NNfunction_ss_sLcR::synapse0x2f89dd0() {
   return (neuron0x2f7b9f0()*-0.539281);
}

double NNfunction_ss_sLcR::synapse0x2f89e10() {
   return (neuron0x2f7bd30()*-0.035648);
}

double NNfunction_ss_sLcR::synapse0x2f89e50() {
   return (neuron0x2f7c070()*-0.672892);
}

double NNfunction_ss_sLcR::synapse0x2f8a1d0() {
   return (neuron0x2f774b0()*-0.245436);
}

double NNfunction_ss_sLcR::synapse0x2f8a210() {
   return (neuron0x2f777f0()*0.147442);
}

double NNfunction_ss_sLcR::synapse0x2f8a250() {
   return (neuron0x2f77b30()*-0.59575);
}

double NNfunction_ss_sLcR::synapse0x2f8a290() {
   return (neuron0x2f77e70()*-0.164615);
}

double NNfunction_ss_sLcR::synapse0x2f8a2d0() {
   return (neuron0x2f781b0()*-1.68592);
}

double NNfunction_ss_sLcR::synapse0x2f8a310() {
   return (neuron0x2f784f0()*-0.324859);
}

double NNfunction_ss_sLcR::synapse0x2f8a350() {
   return (neuron0x2f78830()*0.654644);
}

double NNfunction_ss_sLcR::synapse0x2f8a390() {
   return (neuron0x2f78b70()*0.344484);
}

double NNfunction_ss_sLcR::synapse0x2f8a3d0() {
   return (neuron0x2f78eb0()*-0.0979256);
}

double NNfunction_ss_sLcR::synapse0x2f8a410() {
   return (neuron0x2f791f0()*-0.0466103);
}

double NNfunction_ss_sLcR::synapse0x2f8a450() {
   return (neuron0x2f79530()*0.0821449);
}

double NNfunction_ss_sLcR::synapse0x2f8a490() {
   return (neuron0x2f79870()*-0.941124);
}

double NNfunction_ss_sLcR::synapse0x2f8a4d0() {
   return (neuron0x2f79bb0()*1.68931);
}

double NNfunction_ss_sLcR::synapse0x2f8a510() {
   return (neuron0x2f79ef0()*0.0256282);
}

double NNfunction_ss_sLcR::synapse0x2f8a550() {
   return (neuron0x2f7a230()*-0.390153);
}

double NNfunction_ss_sLcR::synapse0x2f8a590() {
   return (neuron0x2f7a570()*1.10456);
}

double NNfunction_ss_sLcR::synapse0x2f8a020() {
   return (neuron0x2f7a8b0()*0.0109317);
}

double NNfunction_ss_sLcR::synapse0x2f8a060() {
   return (neuron0x2f7ae10()*-0.523137);
}

double NNfunction_ss_sLcR::synapse0x2f8a6e0() {
   return (neuron0x2f7b030()*0.566604);
}

double NNfunction_ss_sLcR::synapse0x2f8a720() {
   return (neuron0x2f7b370()*-0.246334);
}

double NNfunction_ss_sLcR::synapse0x2f8a760() {
   return (neuron0x2f7b6b0()*-0.470539);
}

double NNfunction_ss_sLcR::synapse0x2f8a7a0() {
   return (neuron0x2f7b9f0()*-0.728612);
}

double NNfunction_ss_sLcR::synapse0x2f8a7e0() {
   return (neuron0x2f7bd30()*0.0869224);
}

double NNfunction_ss_sLcR::synapse0x2f8a820() {
   return (neuron0x2f7c070()*0.248774);
}

double NNfunction_ss_sLcR::synapse0x2f8aba0() {
   return (neuron0x2f774b0()*-0.201915);
}

double NNfunction_ss_sLcR::synapse0x2f8abe0() {
   return (neuron0x2f777f0()*-0.667504);
}

double NNfunction_ss_sLcR::synapse0x2f8ac20() {
   return (neuron0x2f77b30()*-0.980013);
}

double NNfunction_ss_sLcR::synapse0x2f8ac60() {
   return (neuron0x2f77e70()*0.389368);
}

double NNfunction_ss_sLcR::synapse0x2f8aca0() {
   return (neuron0x2f781b0()*0.933306);
}

double NNfunction_ss_sLcR::synapse0x2f8ace0() {
   return (neuron0x2f784f0()*0.395612);
}

double NNfunction_ss_sLcR::synapse0x2f8ad20() {
   return (neuron0x2f78830()*-0.468915);
}

double NNfunction_ss_sLcR::synapse0x2f8ad60() {
   return (neuron0x2f78b70()*0.280804);
}

double NNfunction_ss_sLcR::synapse0x2f8ada0() {
   return (neuron0x2f78eb0()*-0.129278);
}

double NNfunction_ss_sLcR::synapse0x2f82f60() {
   return (neuron0x2f791f0()*-0.00965354);
}

double NNfunction_ss_sLcR::synapse0x2f82fa0() {
   return (neuron0x2f79530()*-0.847454);
}

double NNfunction_ss_sLcR::synapse0x2f82fe0() {
   return (neuron0x2f79870()*0.920841);
}

double NNfunction_ss_sLcR::synapse0x2f83020() {
   return (neuron0x2f79bb0()*-0.0436015);
}

double NNfunction_ss_sLcR::synapse0x2f83060() {
   return (neuron0x2f79ef0()*0.408763);
}

double NNfunction_ss_sLcR::synapse0x2f830a0() {
   return (neuron0x2f7a230()*1.06741);
}

double NNfunction_ss_sLcR::synapse0x2f830e0() {
   return (neuron0x2f7a570()*-1.1962);
}

double NNfunction_ss_sLcR::synapse0x2f8a9f0() {
   return (neuron0x2f7a8b0()*-0.403525);
}

double NNfunction_ss_sLcR::synapse0x2f8aa30() {
   return (neuron0x2f7ae10()*-0.515726);
}

double NNfunction_ss_sLcR::synapse0x2f83230() {
   return (neuron0x2f7b030()*0.711434);
}

double NNfunction_ss_sLcR::synapse0x2f83270() {
   return (neuron0x2f7b370()*-0.0975239);
}

double NNfunction_ss_sLcR::synapse0x2f832b0() {
   return (neuron0x2f7b6b0()*-0.0647322);
}

double NNfunction_ss_sLcR::synapse0x2f832f0() {
   return (neuron0x2f7b9f0()*-1.20861);
}

double NNfunction_ss_sLcR::synapse0x2f83330() {
   return (neuron0x2f7bd30()*-0.235389);
}

double NNfunction_ss_sLcR::synapse0x2f83370() {
   return (neuron0x2f7c070()*-0.55244);
}

double NNfunction_ss_sLcR::synapse0x2f836f0() {
   return (neuron0x2f774b0()*-0.00552388);
}

double NNfunction_ss_sLcR::synapse0x2f83730() {
   return (neuron0x2f777f0()*0.0679142);
}

double NNfunction_ss_sLcR::synapse0x2f83770() {
   return (neuron0x2f77b30()*-0.0503524);
}

double NNfunction_ss_sLcR::synapse0x2f837b0() {
   return (neuron0x2f77e70()*-2.30765);
}

double NNfunction_ss_sLcR::synapse0x2f837f0() {
   return (neuron0x2f781b0()*0.017095);
}

double NNfunction_ss_sLcR::synapse0x2f83830() {
   return (neuron0x2f784f0()*0.0134094);
}

double NNfunction_ss_sLcR::synapse0x2f83870() {
   return (neuron0x2f78830()*0.00853747);
}

double NNfunction_ss_sLcR::synapse0x2f838b0() {
   return (neuron0x2f78b70()*-0.00150605);
}

double NNfunction_ss_sLcR::synapse0x2f838f0() {
   return (neuron0x2f78eb0()*0.00548374);
}

double NNfunction_ss_sLcR::synapse0x2f83930() {
   return (neuron0x2f791f0()*-0.00776966);
}

double NNfunction_ss_sLcR::synapse0x2f83970() {
   return (neuron0x2f79530()*-0.00128827);
}

double NNfunction_ss_sLcR::synapse0x2f839b0() {
   return (neuron0x2f79870()*-0.0428859);
}

double NNfunction_ss_sLcR::synapse0x2f839f0() {
   return (neuron0x2f79bb0()*-0.150828);
}

double NNfunction_ss_sLcR::synapse0x2f83a30() {
   return (neuron0x2f79ef0()*0.0321962);
}

double NNfunction_ss_sLcR::synapse0x2f83a70() {
   return (neuron0x2f7a230()*0.00434764);
}

double NNfunction_ss_sLcR::synapse0x2f83ab0() {
   return (neuron0x2f7a570()*-0.301256);
}

double NNfunction_ss_sLcR::synapse0x2f83540() {
   return (neuron0x2f7a8b0()*0.0176551);
}

double NNfunction_ss_sLcR::synapse0x2f83580() {
   return (neuron0x2f7ae10()*0.00467574);
}

double NNfunction_ss_sLcR::synapse0x2f83c00() {
   return (neuron0x2f7b030()*0.00188534);
}

double NNfunction_ss_sLcR::synapse0x2f83c40() {
   return (neuron0x2f7b370()*-0.0236302);
}

double NNfunction_ss_sLcR::synapse0x2f83c80() {
   return (neuron0x2f7b6b0()*-0.0018216);
}

double NNfunction_ss_sLcR::synapse0x2f83cc0() {
   return (neuron0x2f7b9f0()*-0.00910255);
}

double NNfunction_ss_sLcR::synapse0x2f83d00() {
   return (neuron0x2f7bd30()*-0.00208744);
}

double NNfunction_ss_sLcR::synapse0x2f83d40() {
   return (neuron0x2f7c070()*-0.00623745);
}

double NNfunction_ss_sLcR::synapse0x2f83f10() {
   return (neuron0x2f774b0()*1.65815);
}

double NNfunction_ss_sLcR::synapse0x2f8cfa0() {
   return (neuron0x2f777f0()*0.139336);
}

double NNfunction_ss_sLcR::synapse0x2f8cfe0() {
   return (neuron0x2f77b30()*0.0594237);
}

double NNfunction_ss_sLcR::synapse0x2f8d020() {
   return (neuron0x2f77e70()*-0.344046);
}

double NNfunction_ss_sLcR::synapse0x2f8d060() {
   return (neuron0x2f781b0()*1.38353);
}

double NNfunction_ss_sLcR::synapse0x2f8d0a0() {
   return (neuron0x2f784f0()*0.484552);
}

double NNfunction_ss_sLcR::synapse0x2f8d0e0() {
   return (neuron0x2f78830()*-0.776249);
}

double NNfunction_ss_sLcR::synapse0x2f8d120() {
   return (neuron0x2f78b70()*0.442355);
}

double NNfunction_ss_sLcR::synapse0x2f8d160() {
   return (neuron0x2f78eb0()*0.248959);
}

double NNfunction_ss_sLcR::synapse0x2f8d1a0() {
   return (neuron0x2f791f0()*-0.708135);
}

double NNfunction_ss_sLcR::synapse0x2f8d1e0() {
   return (neuron0x2f79530()*0.390124);
}

double NNfunction_ss_sLcR::synapse0x2f8d220() {
   return (neuron0x2f79870()*0.918538);
}

double NNfunction_ss_sLcR::synapse0x2f8d260() {
   return (neuron0x2f79bb0()*-0.460955);
}

double NNfunction_ss_sLcR::synapse0x2f8d2a0() {
   return (neuron0x2f79ef0()*-0.438075);
}

double NNfunction_ss_sLcR::synapse0x2f8d2e0() {
   return (neuron0x2f7a230()*-1.35771);
}

double NNfunction_ss_sLcR::synapse0x2f8d320() {
   return (neuron0x2f7a570()*0.0798198);
}

double NNfunction_ss_sLcR::synapse0x2f8cdf0() {
   return (neuron0x2f7a8b0()*0.0506049);
}

double NNfunction_ss_sLcR::synapse0x2f8ce30() {
   return (neuron0x2f7ae10()*1.12587);
}

double NNfunction_ss_sLcR::synapse0x2f8d470() {
   return (neuron0x2f7b030()*0.370002);
}

double NNfunction_ss_sLcR::synapse0x2f8d4b0() {
   return (neuron0x2f7b370()*-0.171781);
}

double NNfunction_ss_sLcR::synapse0x2f8d4f0() {
   return (neuron0x2f7b6b0()*-1.74178);
}

double NNfunction_ss_sLcR::synapse0x2f8d530() {
   return (neuron0x2f7b9f0()*0.134487);
}

double NNfunction_ss_sLcR::synapse0x2f8d570() {
   return (neuron0x2f7bd30()*0.51275);
}

double NNfunction_ss_sLcR::synapse0x2f8d5b0() {
   return (neuron0x2f7c070()*-0.142511);
}

double NNfunction_ss_sLcR::synapse0x2f8d930() {
   return (neuron0x2f774b0()*-0.459938);
}

double NNfunction_ss_sLcR::synapse0x2f8d970() {
   return (neuron0x2f777f0()*-0.125404);
}

double NNfunction_ss_sLcR::synapse0x2f8d9b0() {
   return (neuron0x2f77b30()*0.096551);
}

double NNfunction_ss_sLcR::synapse0x2f8d9f0() {
   return (neuron0x2f77e70()*-0.566461);
}

double NNfunction_ss_sLcR::synapse0x2f8da30() {
   return (neuron0x2f781b0()*-0.0875973);
}

double NNfunction_ss_sLcR::synapse0x2f8da70() {
   return (neuron0x2f784f0()*-0.70772);
}

double NNfunction_ss_sLcR::synapse0x2f8dab0() {
   return (neuron0x2f78830()*-0.322223);
}

double NNfunction_ss_sLcR::synapse0x2f8daf0() {
   return (neuron0x2f78b70()*-0.132167);
}

double NNfunction_ss_sLcR::synapse0x2f8db30() {
   return (neuron0x2f78eb0()*0.303851);
}

double NNfunction_ss_sLcR::synapse0x2f8db70() {
   return (neuron0x2f791f0()*-0.815901);
}

double NNfunction_ss_sLcR::synapse0x2f8dbb0() {
   return (neuron0x2f79530()*0.518018);
}

double NNfunction_ss_sLcR::synapse0x2f8dbf0() {
   return (neuron0x2f79870()*0.319155);
}

double NNfunction_ss_sLcR::synapse0x2f8dc30() {
   return (neuron0x2f79bb0()*-1.21745);
}

double NNfunction_ss_sLcR::synapse0x2f8dc70() {
   return (neuron0x2f79ef0()*0.535967);
}

double NNfunction_ss_sLcR::synapse0x2f8dcb0() {
   return (neuron0x2f7a230()*-0.208284);
}

double NNfunction_ss_sLcR::synapse0x2f8dcf0() {
   return (neuron0x2f7a570()*0.422001);
}

double NNfunction_ss_sLcR::synapse0x2f8d780() {
   return (neuron0x2f7a8b0()*-0.00224978);
}

double NNfunction_ss_sLcR::synapse0x2f8d7c0() {
   return (neuron0x2f7ae10()*0.615751);
}

double NNfunction_ss_sLcR::synapse0x2f8de40() {
   return (neuron0x2f7b030()*-0.0059135);
}

double NNfunction_ss_sLcR::synapse0x2f8de80() {
   return (neuron0x2f7b370()*-0.558137);
}

double NNfunction_ss_sLcR::synapse0x2f8dec0() {
   return (neuron0x2f7b6b0()*-0.541928);
}

double NNfunction_ss_sLcR::synapse0x2f8df00() {
   return (neuron0x2f7b9f0()*0.0954472);
}

double NNfunction_ss_sLcR::synapse0x2f8df40() {
   return (neuron0x2f7bd30()*1.01836);
}

double NNfunction_ss_sLcR::synapse0x2f8df80() {
   return (neuron0x2f7c070()*-0.0477284);
}

double NNfunction_ss_sLcR::synapse0x2f8e300() {
   return (neuron0x2f774b0()*-0.351281);
}

double NNfunction_ss_sLcR::synapse0x2f8e340() {
   return (neuron0x2f777f0()*1.04648);
}

double NNfunction_ss_sLcR::synapse0x2f8e380() {
   return (neuron0x2f77b30()*-1.25479);
}

double NNfunction_ss_sLcR::synapse0x2f8e3c0() {
   return (neuron0x2f77e70()*0.208533);
}

double NNfunction_ss_sLcR::synapse0x2f8e400() {
   return (neuron0x2f781b0()*-0.547802);
}

double NNfunction_ss_sLcR::synapse0x2f8e440() {
   return (neuron0x2f784f0()*-0.00681412);
}

double NNfunction_ss_sLcR::synapse0x2f8e480() {
   return (neuron0x2f78830()*-0.357433);
}

double NNfunction_ss_sLcR::synapse0x2f8e4c0() {
   return (neuron0x2f78b70()*-0.115287);
}

double NNfunction_ss_sLcR::synapse0x2f8e500() {
   return (neuron0x2f78eb0()*0.131166);
}

double NNfunction_ss_sLcR::synapse0x2f8e540() {
   return (neuron0x2f791f0()*0.178355);
}

double NNfunction_ss_sLcR::synapse0x2f8e580() {
   return (neuron0x2f79530()*0.42786);
}

double NNfunction_ss_sLcR::synapse0x2f8e5c0() {
   return (neuron0x2f79870()*-0.803034);
}

double NNfunction_ss_sLcR::synapse0x2f8e600() {
   return (neuron0x2f79bb0()*0.100709);
}

double NNfunction_ss_sLcR::synapse0x2f8e640() {
   return (neuron0x2f79ef0()*-0.418808);
}

double NNfunction_ss_sLcR::synapse0x2f8e680() {
   return (neuron0x2f7a230()*2.20949);
}

double NNfunction_ss_sLcR::synapse0x2f8e6c0() {
   return (neuron0x2f7a570()*-0.00741393);
}

double NNfunction_ss_sLcR::synapse0x2f8e150() {
   return (neuron0x2f7a8b0()*0.259091);
}

double NNfunction_ss_sLcR::synapse0x2f8e190() {
   return (neuron0x2f7ae10()*-0.381755);
}

double NNfunction_ss_sLcR::synapse0x2f8e810() {
   return (neuron0x2f7b030()*-0.490983);
}

double NNfunction_ss_sLcR::synapse0x2f8e850() {
   return (neuron0x2f7b370()*-0.0158457);
}

double NNfunction_ss_sLcR::synapse0x2f8e890() {
   return (neuron0x2f7b6b0()*-0.0748986);
}

double NNfunction_ss_sLcR::synapse0x2f8e8d0() {
   return (neuron0x2f7b9f0()*-0.463645);
}

double NNfunction_ss_sLcR::synapse0x2f8e910() {
   return (neuron0x2f7bd30()*-0.0259934);
}

double NNfunction_ss_sLcR::synapse0x2f8e950() {
   return (neuron0x2f7c070()*0.146125);
}

double NNfunction_ss_sLcR::synapse0x2f8ecd0() {
   return (neuron0x2f774b0()*0.00823987);
}

double NNfunction_ss_sLcR::synapse0x2f8ed10() {
   return (neuron0x2f777f0()*0.00770928);
}

double NNfunction_ss_sLcR::synapse0x2f8ed50() {
   return (neuron0x2f77b30()*-0.033012);
}

double NNfunction_ss_sLcR::synapse0x2f8ed90() {
   return (neuron0x2f77e70()*-3.55267);
}

double NNfunction_ss_sLcR::synapse0x2f8edd0() {
   return (neuron0x2f781b0()*0.00338196);
}

double NNfunction_ss_sLcR::synapse0x2f8ee10() {
   return (neuron0x2f784f0()*-0.0102145);
}

double NNfunction_ss_sLcR::synapse0x2f8ee50() {
   return (neuron0x2f78830()*-0.00519684);
}

double NNfunction_ss_sLcR::synapse0x2f8ee90() {
   return (neuron0x2f78b70()*0.00942176);
}

double NNfunction_ss_sLcR::synapse0x2f8eed0() {
   return (neuron0x2f78eb0()*-0.0040425);
}

double NNfunction_ss_sLcR::synapse0x2f8ef10() {
   return (neuron0x2f791f0()*0.0195826);
}

double NNfunction_ss_sLcR::synapse0x2f8ef50() {
   return (neuron0x2f79530()*-0.0138708);
}

double NNfunction_ss_sLcR::synapse0x2f8ef90() {
   return (neuron0x2f79870()*-0.00671236);
}

double NNfunction_ss_sLcR::synapse0x2f8efd0() {
   return (neuron0x2f79bb0()*0.126188);
}

double NNfunction_ss_sLcR::synapse0x2f8f010() {
   return (neuron0x2f79ef0()*0.0205527);
}

double NNfunction_ss_sLcR::synapse0x2f8f050() {
   return (neuron0x2f7a230()*0.0288016);
}

double NNfunction_ss_sLcR::synapse0x2f8f090() {
   return (neuron0x2f7a570()*0.157564);
}

double NNfunction_ss_sLcR::synapse0x2f8eb20() {
   return (neuron0x2f7a8b0()*0.0104928);
}

double NNfunction_ss_sLcR::synapse0x2f8eb60() {
   return (neuron0x2f7ae10()*0.0262382);
}

double NNfunction_ss_sLcR::synapse0x2f8f1e0() {
   return (neuron0x2f7b030()*-0.000748931);
}

double NNfunction_ss_sLcR::synapse0x2f8f220() {
   return (neuron0x2f7b370()*-0.00886462);
}

double NNfunction_ss_sLcR::synapse0x2f8f260() {
   return (neuron0x2f7b6b0()*-0.0133555);
}

double NNfunction_ss_sLcR::synapse0x2f8f2a0() {
   return (neuron0x2f7b9f0()*-0.0130979);
}

double NNfunction_ss_sLcR::synapse0x2f8f2e0() {
   return (neuron0x2f7bd30()*-0.00122279);
}

double NNfunction_ss_sLcR::synapse0x2f8f320() {
   return (neuron0x2f7c070()*-0.02578);
}

double NNfunction_ss_sLcR::synapse0x2f8f6a0() {
   return (neuron0x2f774b0()*-0.437306);
}

double NNfunction_ss_sLcR::synapse0x2f8f6e0() {
   return (neuron0x2f777f0()*0.837633);
}

double NNfunction_ss_sLcR::synapse0x2f8f720() {
   return (neuron0x2f77b30()*-0.217598);
}

double NNfunction_ss_sLcR::synapse0x2f8f760() {
   return (neuron0x2f77e70()*0.443771);
}

double NNfunction_ss_sLcR::synapse0x2f8f7a0() {
   return (neuron0x2f781b0()*-0.18662);
}

double NNfunction_ss_sLcR::synapse0x2f8f7e0() {
   return (neuron0x2f784f0()*0.116738);
}

double NNfunction_ss_sLcR::synapse0x2f8f820() {
   return (neuron0x2f78830()*-0.0250945);
}

double NNfunction_ss_sLcR::synapse0x2f8f860() {
   return (neuron0x2f78b70()*0.17983);
}

double NNfunction_ss_sLcR::synapse0x2f8f8a0() {
   return (neuron0x2f78eb0()*0.6105);
}

double NNfunction_ss_sLcR::synapse0x2f8f8e0() {
   return (neuron0x2f791f0()*-0.282632);
}

double NNfunction_ss_sLcR::synapse0x2f8f920() {
   return (neuron0x2f79530()*0.553682);
}

double NNfunction_ss_sLcR::synapse0x2f8f960() {
   return (neuron0x2f79870()*-0.0938284);
}

double NNfunction_ss_sLcR::synapse0x2f8f9a0() {
   return (neuron0x2f79bb0()*-1.1395);
}

double NNfunction_ss_sLcR::synapse0x2f8f9e0() {
   return (neuron0x2f79ef0()*-0.195889);
}

double NNfunction_ss_sLcR::synapse0x2f8fa20() {
   return (neuron0x2f7a230()*-0.0237854);
}

double NNfunction_ss_sLcR::synapse0x2f8fa60() {
   return (neuron0x2f7a570()*-0.677069);
}

double NNfunction_ss_sLcR::synapse0x2f8f4f0() {
   return (neuron0x2f7a8b0()*-0.0375755);
}

double NNfunction_ss_sLcR::synapse0x2f8f530() {
   return (neuron0x2f7ae10()*-0.316834);
}

double NNfunction_ss_sLcR::synapse0x2f8fbb0() {
   return (neuron0x2f7b030()*0.460455);
}

double NNfunction_ss_sLcR::synapse0x2f8fbf0() {
   return (neuron0x2f7b370()*-0.0646607);
}

double NNfunction_ss_sLcR::synapse0x2f8fc30() {
   return (neuron0x2f7b6b0()*-0.131586);
}

double NNfunction_ss_sLcR::synapse0x2f8fc70() {
   return (neuron0x2f7b9f0()*0.0590756);
}

double NNfunction_ss_sLcR::synapse0x2f8fcb0() {
   return (neuron0x2f7bd30()*0.0215202);
}

double NNfunction_ss_sLcR::synapse0x2f8fcf0() {
   return (neuron0x2f7c070()*0.0468317);
}

double NNfunction_ss_sLcR::synapse0x2f90070() {
   return (neuron0x2f774b0()*-0.149808);
}

double NNfunction_ss_sLcR::synapse0x2f900b0() {
   return (neuron0x2f777f0()*-0.0182309);
}

double NNfunction_ss_sLcR::synapse0x2f900f0() {
   return (neuron0x2f77b30()*0.0314951);
}

double NNfunction_ss_sLcR::synapse0x2f90130() {
   return (neuron0x2f77e70()*0.474687);
}

double NNfunction_ss_sLcR::synapse0x2f90170() {
   return (neuron0x2f781b0()*-0.342667);
}

double NNfunction_ss_sLcR::synapse0x2f901b0() {
   return (neuron0x2f784f0()*0.0184162);
}

double NNfunction_ss_sLcR::synapse0x2f901f0() {
   return (neuron0x2f78830()*-0.130518);
}

double NNfunction_ss_sLcR::synapse0x2f90230() {
   return (neuron0x2f78b70()*0.215827);
}

double NNfunction_ss_sLcR::synapse0x2f90270() {
   return (neuron0x2f78eb0()*0.272651);
}

double NNfunction_ss_sLcR::synapse0x2f902b0() {
   return (neuron0x2f791f0()*-0.133512);
}

double NNfunction_ss_sLcR::synapse0x2f902f0() {
   return (neuron0x2f79530()*0.214636);
}

double NNfunction_ss_sLcR::synapse0x2f90330() {
   return (neuron0x2f79870()*-0.0290355);
}

double NNfunction_ss_sLcR::synapse0x2f90370() {
   return (neuron0x2f79bb0()*-2.22469);
}

double NNfunction_ss_sLcR::synapse0x2f903b0() {
   return (neuron0x2f79ef0()*-0.190522);
}

double NNfunction_ss_sLcR::synapse0x2f903f0() {
   return (neuron0x2f7a230()*-0.362727);
}

double NNfunction_ss_sLcR::synapse0x2f90430() {
   return (neuron0x2f7a570()*0.0535358);
}

double NNfunction_ss_sLcR::synapse0x2f8fec0() {
   return (neuron0x2f7a8b0()*-0.0326745);
}

double NNfunction_ss_sLcR::synapse0x2f8ff00() {
   return (neuron0x2f7ae10()*-0.230934);
}

double NNfunction_ss_sLcR::synapse0x2f90580() {
   return (neuron0x2f7b030()*-0.0364418);
}

double NNfunction_ss_sLcR::synapse0x2f905c0() {
   return (neuron0x2f7b370()*0.180316);
}

double NNfunction_ss_sLcR::synapse0x2f90600() {
   return (neuron0x2f7b6b0()*0.0887304);
}

double NNfunction_ss_sLcR::synapse0x2f90640() {
   return (neuron0x2f7b9f0()*0.21393);
}

double NNfunction_ss_sLcR::synapse0x2f90680() {
   return (neuron0x2f7bd30()*0.0997536);
}

double NNfunction_ss_sLcR::synapse0x2f906c0() {
   return (neuron0x2f7c070()*0.0786067);
}

double NNfunction_ss_sLcR::synapse0x2f90a40() {
   return (neuron0x2f774b0()*-0.0389706);
}

double NNfunction_ss_sLcR::synapse0x2f90a80() {
   return (neuron0x2f777f0()*-0.164523);
}

double NNfunction_ss_sLcR::synapse0x2f90ac0() {
   return (neuron0x2f77b30()*0.0910126);
}

double NNfunction_ss_sLcR::synapse0x2f90b00() {
   return (neuron0x2f77e70()*3.46865);
}

double NNfunction_ss_sLcR::synapse0x2f90b40() {
   return (neuron0x2f781b0()*-0.0131564);
}

double NNfunction_ss_sLcR::synapse0x2f90b80() {
   return (neuron0x2f784f0()*0.0365942);
}

double NNfunction_ss_sLcR::synapse0x2f90bc0() {
   return (neuron0x2f78830()*0.0058913);
}

double NNfunction_ss_sLcR::synapse0x2f90c00() {
   return (neuron0x2f78b70()*-0.0235722);
}

double NNfunction_ss_sLcR::synapse0x2f90c40() {
   return (neuron0x2f78eb0()*-0.0813576);
}

double NNfunction_ss_sLcR::synapse0x2f90c80() {
   return (neuron0x2f791f0()*-0.0268512);
}

double NNfunction_ss_sLcR::synapse0x2f90cc0() {
   return (neuron0x2f79530()*0.00280619);
}

double NNfunction_ss_sLcR::synapse0x2f90d00() {
   return (neuron0x2f79870()*0.00250618);
}

double NNfunction_ss_sLcR::synapse0x2f90d40() {
   return (neuron0x2f79bb0()*-0.843203);
}

double NNfunction_ss_sLcR::synapse0x2f90d80() {
   return (neuron0x2f79ef0()*0.0173566);
}

double NNfunction_ss_sLcR::synapse0x2f90dc0() {
   return (neuron0x2f7a230()*-0.0454187);
}

double NNfunction_ss_sLcR::synapse0x2f90e00() {
   return (neuron0x2f7a570()*-0.840332);
}

double NNfunction_ss_sLcR::synapse0x2f90890() {
   return (neuron0x2f7a8b0()*0.00389469);
}

double NNfunction_ss_sLcR::synapse0x2f908d0() {
   return (neuron0x2f7ae10()*-0.154118);
}

double NNfunction_ss_sLcR::synapse0x2f90f50() {
   return (neuron0x2f7b030()*0.0361945);
}

double NNfunction_ss_sLcR::synapse0x2f90f90() {
   return (neuron0x2f7b370()*0.0274621);
}

double NNfunction_ss_sLcR::synapse0x2f90fd0() {
   return (neuron0x2f7b6b0()*0.0255407);
}

double NNfunction_ss_sLcR::synapse0x2f91010() {
   return (neuron0x2f7b9f0()*0.00306447);
}

double NNfunction_ss_sLcR::synapse0x2f91050() {
   return (neuron0x2f7bd30()*-0.0284918);
}

double NNfunction_ss_sLcR::synapse0x2f91090() {
   return (neuron0x2f7c070()*0.0411675);
}

double NNfunction_ss_sLcR::synapse0x2f91410() {
   return (neuron0x2f774b0()*-0.0180336);
}

double NNfunction_ss_sLcR::synapse0x2f91450() {
   return (neuron0x2f777f0()*-0.00419595);
}

double NNfunction_ss_sLcR::synapse0x2f91490() {
   return (neuron0x2f77b30()*0.0165991);
}

double NNfunction_ss_sLcR::synapse0x2f914d0() {
   return (neuron0x2f77e70()*0.153662);
}

double NNfunction_ss_sLcR::synapse0x2f91510() {
   return (neuron0x2f781b0()*-0.0169656);
}

double NNfunction_ss_sLcR::synapse0x2f91550() {
   return (neuron0x2f784f0()*-0.00340429);
}

double NNfunction_ss_sLcR::synapse0x2f91590() {
   return (neuron0x2f78830()*-0.00756973);
}

double NNfunction_ss_sLcR::synapse0x2f915d0() {
   return (neuron0x2f78b70()*0.0292972);
}

double NNfunction_ss_sLcR::synapse0x2f91610() {
   return (neuron0x2f78eb0()*0.018958);
}

double NNfunction_ss_sLcR::synapse0x2f91650() {
   return (neuron0x2f791f0()*-0.0130324);
}

double NNfunction_ss_sLcR::synapse0x2f91690() {
   return (neuron0x2f79530()*0.00415516);
}

double NNfunction_ss_sLcR::synapse0x2f916d0() {
   return (neuron0x2f79870()*0.00417389);
}

double NNfunction_ss_sLcR::synapse0x2f91710() {
   return (neuron0x2f79bb0()*0.59434);
}

double NNfunction_ss_sLcR::synapse0x2f91750() {
   return (neuron0x2f79ef0()*-0.00742593);
}

double NNfunction_ss_sLcR::synapse0x2f91790() {
   return (neuron0x2f7a230()*-0.0194202);
}

double NNfunction_ss_sLcR::synapse0x2f917d0() {
   return (neuron0x2f7a570()*-0.642136);
}

double NNfunction_ss_sLcR::synapse0x2f91260() {
   return (neuron0x2f7a8b0()*-0.0104725);
}

double NNfunction_ss_sLcR::synapse0x2f912a0() {
   return (neuron0x2f7ae10()*-0.0252294);
}

double NNfunction_ss_sLcR::synapse0x2f91920() {
   return (neuron0x2f7b030()*-0.023616);
}

double NNfunction_ss_sLcR::synapse0x2f91960() {
   return (neuron0x2f7b370()*0.0227646);
}

double NNfunction_ss_sLcR::synapse0x2f919a0() {
   return (neuron0x2f7b6b0()*0.000164235);
}

double NNfunction_ss_sLcR::synapse0x2f919e0() {
   return (neuron0x2f7b9f0()*0.0222375);
}

double NNfunction_ss_sLcR::synapse0x2f91a20() {
   return (neuron0x2f7bd30()*0.0138788);
}

double NNfunction_ss_sLcR::synapse0x2f91a60() {
   return (neuron0x2f7c070()*-0.00118152);
}

double NNfunction_ss_sLcR::synapse0x2f91de0() {
   return (neuron0x2f774b0()*1.37774);
}

double NNfunction_ss_sLcR::synapse0x2f863b0() {
   return (neuron0x2f777f0()*0.243164);
}

double NNfunction_ss_sLcR::synapse0x2f863f0() {
   return (neuron0x2f77b30()*-0.943651);
}

double NNfunction_ss_sLcR::synapse0x2f86430() {
   return (neuron0x2f77e70()*0.672107);
}

double NNfunction_ss_sLcR::synapse0x2f86680() {
   return (neuron0x2f781b0()*0.6946);
}

double NNfunction_ss_sLcR::synapse0x2f866c0() {
   return (neuron0x2f784f0()*0.150519);
}

double NNfunction_ss_sLcR::synapse0x2f86700() {
   return (neuron0x2f78830()*1.78709);
}

double NNfunction_ss_sLcR::synapse0x2f86950() {
   return (neuron0x2f78b70()*-0.348261);
}

double NNfunction_ss_sLcR::synapse0x2f86990() {
   return (neuron0x2f78eb0()*0.149064);
}

double NNfunction_ss_sLcR::synapse0x2f86be0() {
   return (neuron0x2f791f0()*0.477204);
}

double NNfunction_ss_sLcR::synapse0x2f86c20() {
   return (neuron0x2f79530()*-0.0137752);
}

double NNfunction_ss_sLcR::synapse0x2f86c60() {
   return (neuron0x2f79870()*0.473856);
}

double NNfunction_ss_sLcR::synapse0x2f86eb0() {
   return (neuron0x2f79bb0()*-0.38223);
}

double NNfunction_ss_sLcR::synapse0x2f86ef0() {
   return (neuron0x2f79ef0()*0.242445);
}

double NNfunction_ss_sLcR::synapse0x2f87140() {
   return (neuron0x2f7a230()*0.691827);
}

double NNfunction_ss_sLcR::synapse0x2f87180() {
   return (neuron0x2f7a570()*0.305502);
}

double NNfunction_ss_sLcR::synapse0x2f91c30() {
   return (neuron0x2f7a8b0()*0.1978);
}

double NNfunction_ss_sLcR::synapse0x2f91c70() {
   return (neuron0x2f7ae10()*0.203012);
}

double NNfunction_ss_sLcR::synapse0x2f872d0() {
   return (neuron0x2f7b030()*0.703462);
}

double NNfunction_ss_sLcR::synapse0x2f877e0() {
   return (neuron0x2f7b370()*-0.177643);
}

double NNfunction_ss_sLcR::synapse0x2f87820() {
   return (neuron0x2f7b6b0()*-0.135323);
}

double NNfunction_ss_sLcR::synapse0x2f87860() {
   return (neuron0x2f7b9f0()*-0.177361);
}

double NNfunction_ss_sLcR::synapse0x2f87ab0() {
   return (neuron0x2f7bd30()*-0.218364);
}

double NNfunction_ss_sLcR::synapse0x2f87af0() {
   return (neuron0x2f7c070()*-0.553906);
}

double NNfunction_ss_sLcR::synapse0x2f873a0() {
   return (neuron0x2f774b0()*0.740372);
}

double NNfunction_ss_sLcR::synapse0x2f873e0() {
   return (neuron0x2f777f0()*-0.454215);
}

double NNfunction_ss_sLcR::synapse0x2f87420() {
   return (neuron0x2f77b30()*0.161499);
}

double NNfunction_ss_sLcR::synapse0x2f87460() {
   return (neuron0x2f77e70()*-1.01871);
}

double NNfunction_ss_sLcR::synapse0x2f87de0() {
   return (neuron0x2f781b0()*0.100387);
}

double NNfunction_ss_sLcR::synapse0x2f94130() {
   return (neuron0x2f784f0()*0.235651);
}

double NNfunction_ss_sLcR::synapse0x2f94170() {
   return (neuron0x2f78830()*0.210353);
}

double NNfunction_ss_sLcR::synapse0x2f941b0() {
   return (neuron0x2f78b70()*-0.103366);
}

double NNfunction_ss_sLcR::synapse0x2f941f0() {
   return (neuron0x2f78eb0()*-0.582713);
}

double NNfunction_ss_sLcR::synapse0x2f94230() {
   return (neuron0x2f791f0()*-0.170563);
}

double NNfunction_ss_sLcR::synapse0x2f94270() {
   return (neuron0x2f79530()*0.203323);
}

double NNfunction_ss_sLcR::synapse0x2f942b0() {
   return (neuron0x2f79870()*0.0294802);
}

double NNfunction_ss_sLcR::synapse0x2f942f0() {
   return (neuron0x2f79bb0()*-0.0990048);
}

double NNfunction_ss_sLcR::synapse0x2f94330() {
   return (neuron0x2f79ef0()*-0.615686);
}

double NNfunction_ss_sLcR::synapse0x2f94370() {
   return (neuron0x2f7a230()*-0.00527264);
}

double NNfunction_ss_sLcR::synapse0x2f943b0() {
   return (neuron0x2f7a570()*-0.0924663);
}

double NNfunction_ss_sLcR::synapse0x2f87cc0() {
   return (neuron0x2f7a8b0()*0.0758792);
}

double NNfunction_ss_sLcR::synapse0x2f87d00() {
   return (neuron0x2f7ae10()*0.190458);
}

double NNfunction_ss_sLcR::synapse0x2f94500() {
   return (neuron0x2f7b030()*-0.301289);
}

double NNfunction_ss_sLcR::synapse0x2f94540() {
   return (neuron0x2f7b370()*0.120212);
}

double NNfunction_ss_sLcR::synapse0x2f94580() {
   return (neuron0x2f7b6b0()*0.128317);
}

double NNfunction_ss_sLcR::synapse0x2f945c0() {
   return (neuron0x2f7b9f0()*0.115603);
}

double NNfunction_ss_sLcR::synapse0x2f94600() {
   return (neuron0x2f7bd30()*0.277695);
}

double NNfunction_ss_sLcR::synapse0x2f94640() {
   return (neuron0x2f7c070()*0.174721);
}

double NNfunction_ss_sLcR::synapse0x2f949c0() {
   return (neuron0x2f774b0()*0.0106763);
}

double NNfunction_ss_sLcR::synapse0x2f94a00() {
   return (neuron0x2f777f0()*-0.591369);
}

double NNfunction_ss_sLcR::synapse0x2f94a40() {
   return (neuron0x2f77b30()*-0.77486);
}

double NNfunction_ss_sLcR::synapse0x2f94a80() {
   return (neuron0x2f77e70()*1.35193);
}

double NNfunction_ss_sLcR::synapse0x2f94ac0() {
   return (neuron0x2f781b0()*0.251729);
}

double NNfunction_ss_sLcR::synapse0x2f94b00() {
   return (neuron0x2f784f0()*0.105058);
}

double NNfunction_ss_sLcR::synapse0x2f94b40() {
   return (neuron0x2f78830()*-0.292353);
}

double NNfunction_ss_sLcR::synapse0x2f94b80() {
   return (neuron0x2f78b70()*0.0436257);
}

double NNfunction_ss_sLcR::synapse0x2f94bc0() {
   return (neuron0x2f78eb0()*-0.944503);
}

double NNfunction_ss_sLcR::synapse0x2f94c00() {
   return (neuron0x2f791f0()*-0.890008);
}

double NNfunction_ss_sLcR::synapse0x2f94c40() {
   return (neuron0x2f79530()*0.164619);
}

double NNfunction_ss_sLcR::synapse0x2f94c80() {
   return (neuron0x2f79870()*0.654585);
}

double NNfunction_ss_sLcR::synapse0x2f94cc0() {
   return (neuron0x2f79bb0()*-0.267232);
}

double NNfunction_ss_sLcR::synapse0x2f94d00() {
   return (neuron0x2f79ef0()*-0.24213);
}

double NNfunction_ss_sLcR::synapse0x2f94d40() {
   return (neuron0x2f7a230()*0.456186);
}

double NNfunction_ss_sLcR::synapse0x2f94d80() {
   return (neuron0x2f7a570()*-0.155171);
}

double NNfunction_ss_sLcR::synapse0x2f94810() {
   return (neuron0x2f7a8b0()*0.186346);
}

double NNfunction_ss_sLcR::synapse0x2f94850() {
   return (neuron0x2f7ae10()*0.290664);
}

double NNfunction_ss_sLcR::synapse0x2f94ed0() {
   return (neuron0x2f7b030()*0.439804);
}

double NNfunction_ss_sLcR::synapse0x2f94f10() {
   return (neuron0x2f7b370()*-0.117551);
}

double NNfunction_ss_sLcR::synapse0x2f94f50() {
   return (neuron0x2f7b6b0()*0.266726);
}

double NNfunction_ss_sLcR::synapse0x2f94f90() {
   return (neuron0x2f7b9f0()*0.469808);
}

double NNfunction_ss_sLcR::synapse0x2f94fd0() {
   return (neuron0x2f7bd30()*-0.10107);
}

double NNfunction_ss_sLcR::synapse0x2f95010() {
   return (neuron0x2f7c070()*0.536707);
}

double NNfunction_ss_sLcR::synapse0x2f95390() {
   return (neuron0x2f774b0()*-0.0112167);
}

double NNfunction_ss_sLcR::synapse0x2f953d0() {
   return (neuron0x2f777f0()*0.0771926);
}

double NNfunction_ss_sLcR::synapse0x2f95410() {
   return (neuron0x2f77b30()*-0.0209973);
}

double NNfunction_ss_sLcR::synapse0x2f95450() {
   return (neuron0x2f77e70()*1.99094);
}

double NNfunction_ss_sLcR::synapse0x2f95490() {
   return (neuron0x2f781b0()*-0.0236622);
}

double NNfunction_ss_sLcR::synapse0x2f954d0() {
   return (neuron0x2f784f0()*-0.00151818);
}

double NNfunction_ss_sLcR::synapse0x2f95510() {
   return (neuron0x2f78830()*-0.0118245);
}

double NNfunction_ss_sLcR::synapse0x2f95550() {
   return (neuron0x2f78b70()*-0.0056456);
}

double NNfunction_ss_sLcR::synapse0x2f95590() {
   return (neuron0x2f78eb0()*0.0354059);
}

double NNfunction_ss_sLcR::synapse0x2f955d0() {
   return (neuron0x2f791f0()*0.0526175);
}

double NNfunction_ss_sLcR::synapse0x2f95610() {
   return (neuron0x2f79530()*0.00871439);
}

double NNfunction_ss_sLcR::synapse0x2f95650() {
   return (neuron0x2f79870()*-0.0891588);
}

double NNfunction_ss_sLcR::synapse0x2f95690() {
   return (neuron0x2f79bb0()*-0.413478);
}

double NNfunction_ss_sLcR::synapse0x2f956d0() {
   return (neuron0x2f79ef0()*0.0308357);
}

double NNfunction_ss_sLcR::synapse0x2f95710() {
   return (neuron0x2f7a230()*-0.0744122);
}

double NNfunction_ss_sLcR::synapse0x2f95750() {
   return (neuron0x2f7a570()*-0.992904);
}

double NNfunction_ss_sLcR::synapse0x2f951e0() {
   return (neuron0x2f7a8b0()*0.0365418);
}

double NNfunction_ss_sLcR::synapse0x2f95220() {
   return (neuron0x2f7ae10()*-0.0304373);
}

double NNfunction_ss_sLcR::synapse0x2f958a0() {
   return (neuron0x2f7b030()*-0.0933021);
}

double NNfunction_ss_sLcR::synapse0x2f958e0() {
   return (neuron0x2f7b370()*-0.0674096);
}

double NNfunction_ss_sLcR::synapse0x2f95920() {
   return (neuron0x2f7b6b0()*-0.00242347);
}

double NNfunction_ss_sLcR::synapse0x2f95960() {
   return (neuron0x2f7b9f0()*-0.0160651);
}

double NNfunction_ss_sLcR::synapse0x2f959a0() {
   return (neuron0x2f7bd30()*-0.0364811);
}

double NNfunction_ss_sLcR::synapse0x2f959e0() {
   return (neuron0x2f7c070()*-0.0586773);
}

double NNfunction_ss_sLcR::synapse0x2f95d60() {
   return (neuron0x2f774b0()*-0.314092);
}

double NNfunction_ss_sLcR::synapse0x2f95da0() {
   return (neuron0x2f777f0()*-0.472467);
}

double NNfunction_ss_sLcR::synapse0x2f95de0() {
   return (neuron0x2f77b30()*-0.213856);
}

double NNfunction_ss_sLcR::synapse0x2f95e20() {
   return (neuron0x2f77e70()*0.723917);
}

double NNfunction_ss_sLcR::synapse0x2f95e60() {
   return (neuron0x2f781b0()*0.149324);
}

double NNfunction_ss_sLcR::synapse0x2f95ea0() {
   return (neuron0x2f784f0()*0.32433);
}

double NNfunction_ss_sLcR::synapse0x2f95ee0() {
   return (neuron0x2f78830()*-0.453478);
}

double NNfunction_ss_sLcR::synapse0x2f95f20() {
   return (neuron0x2f78b70()*-0.869467);
}

double NNfunction_ss_sLcR::synapse0x2f95f60() {
   return (neuron0x2f78eb0()*0.0700418);
}

double NNfunction_ss_sLcR::synapse0x2f95fa0() {
   return (neuron0x2f791f0()*0.339661);
}

double NNfunction_ss_sLcR::synapse0x2f95fe0() {
   return (neuron0x2f79530()*2.40598);
}

double NNfunction_ss_sLcR::synapse0x2f96020() {
   return (neuron0x2f79870()*-0.389337);
}

double NNfunction_ss_sLcR::synapse0x2f96060() {
   return (neuron0x2f79bb0()*0.339145);
}

double NNfunction_ss_sLcR::synapse0x2f960a0() {
   return (neuron0x2f79ef0()*-1.21712);
}

double NNfunction_ss_sLcR::synapse0x2f960e0() {
   return (neuron0x2f7a230()*0.102386);
}

double NNfunction_ss_sLcR::synapse0x2f96120() {
   return (neuron0x2f7a570()*-0.107385);
}

double NNfunction_ss_sLcR::synapse0x2f95bb0() {
   return (neuron0x2f7a8b0()*0.111422);
}

double NNfunction_ss_sLcR::synapse0x2f95bf0() {
   return (neuron0x2f7ae10()*0.0595735);
}

double NNfunction_ss_sLcR::synapse0x2f96270() {
   return (neuron0x2f7b030()*-0.36394);
}

double NNfunction_ss_sLcR::synapse0x2f962b0() {
   return (neuron0x2f7b370()*0.821509);
}

double NNfunction_ss_sLcR::synapse0x2f962f0() {
   return (neuron0x2f7b6b0()*0.146596);
}

double NNfunction_ss_sLcR::synapse0x2f96330() {
   return (neuron0x2f7b9f0()*0.305523);
}

double NNfunction_ss_sLcR::synapse0x2f96370() {
   return (neuron0x2f7bd30()*0.235283);
}

double NNfunction_ss_sLcR::synapse0x2f963b0() {
   return (neuron0x2f7c070()*-0.0900875);
}

double NNfunction_ss_sLcR::synapse0x2f96730() {
   return (neuron0x2f774b0()*0.000805571);
}

double NNfunction_ss_sLcR::synapse0x2f96770() {
   return (neuron0x2f777f0()*-0.057705);
}

double NNfunction_ss_sLcR::synapse0x2f967b0() {
   return (neuron0x2f77b30()*0.156201);
}

double NNfunction_ss_sLcR::synapse0x2f967f0() {
   return (neuron0x2f77e70()*-5.59746);
}

double NNfunction_ss_sLcR::synapse0x2f96830() {
   return (neuron0x2f781b0()*0.0093255);
}

double NNfunction_ss_sLcR::synapse0x2f96870() {
   return (neuron0x2f784f0()*0.0226756);
}

double NNfunction_ss_sLcR::synapse0x2f968b0() {
   return (neuron0x2f78830()*0.0232747);
}

double NNfunction_ss_sLcR::synapse0x2f968f0() {
   return (neuron0x2f78b70()*-0.00257552);
}

double NNfunction_ss_sLcR::synapse0x2f96930() {
   return (neuron0x2f78eb0()*-0.193782);
}

double NNfunction_ss_sLcR::synapse0x2f96970() {
   return (neuron0x2f791f0()*-0.130894);
}

double NNfunction_ss_sLcR::synapse0x2f969b0() {
   return (neuron0x2f79530()*-0.0271442);
}

double NNfunction_ss_sLcR::synapse0x2f969f0() {
   return (neuron0x2f79870()*0.0650792);
}

double NNfunction_ss_sLcR::synapse0x2f96a30() {
   return (neuron0x2f79bb0()*0.364194);
}

double NNfunction_ss_sLcR::synapse0x2f96a70() {
   return (neuron0x2f79ef0()*0.173508);
}

double NNfunction_ss_sLcR::synapse0x2f96ab0() {
   return (neuron0x2f7a230()*-0.0843103);
}

double NNfunction_ss_sLcR::synapse0x2f96af0() {
   return (neuron0x2f7a570()*0.868798);
}

double NNfunction_ss_sLcR::synapse0x2f96580() {
   return (neuron0x2f7a8b0()*0.0503234);
}

double NNfunction_ss_sLcR::synapse0x2f965c0() {
   return (neuron0x2f7ae10()*-0.290689);
}

double NNfunction_ss_sLcR::synapse0x2f96c40() {
   return (neuron0x2f7b030()*0.0930791);
}

double NNfunction_ss_sLcR::synapse0x2f96c80() {
   return (neuron0x2f7b370()*-0.00608396);
}

double NNfunction_ss_sLcR::synapse0x2f96cc0() {
   return (neuron0x2f7b6b0()*0.0313679);
}

double NNfunction_ss_sLcR::synapse0x2f96d00() {
   return (neuron0x2f7b9f0()*-0.00755014);
}

double NNfunction_ss_sLcR::synapse0x2f96d40() {
   return (neuron0x2f7bd30()*0.0144924);
}

double NNfunction_ss_sLcR::synapse0x2f96d80() {
   return (neuron0x2f7c070()*-0.011079);
}

double NNfunction_ss_sLcR::synapse0x2f97100() {
   return (neuron0x2f774b0()*0.0493783);
}

double NNfunction_ss_sLcR::synapse0x2f97140() {
   return (neuron0x2f777f0()*0.119833);
}

double NNfunction_ss_sLcR::synapse0x2f97180() {
   return (neuron0x2f77b30()*-0.0442694);
}

double NNfunction_ss_sLcR::synapse0x2f971c0() {
   return (neuron0x2f77e70()*3.57202);
}

double NNfunction_ss_sLcR::synapse0x2f97200() {
   return (neuron0x2f781b0()*0.0069298);
}

double NNfunction_ss_sLcR::synapse0x2f97240() {
   return (neuron0x2f784f0()*0.0212474);
}

double NNfunction_ss_sLcR::synapse0x2f97280() {
   return (neuron0x2f78830()*-0.0242787);
}

double NNfunction_ss_sLcR::synapse0x2f972c0() {
   return (neuron0x2f78b70()*-0.0586726);
}

double NNfunction_ss_sLcR::synapse0x2f97300() {
   return (neuron0x2f78eb0()*0.114073);
}

double NNfunction_ss_sLcR::synapse0x2f97340() {
   return (neuron0x2f791f0()*0.0795465);
}

double NNfunction_ss_sLcR::synapse0x2f97380() {
   return (neuron0x2f79530()*0.0759288);
}

double NNfunction_ss_sLcR::synapse0x2f973c0() {
   return (neuron0x2f79870()*-0.023807);
}

double NNfunction_ss_sLcR::synapse0x2f97400() {
   return (neuron0x2f79bb0()*0.00449266);
}

double NNfunction_ss_sLcR::synapse0x2f97440() {
   return (neuron0x2f79ef0()*-0.156558);
}

double NNfunction_ss_sLcR::synapse0x2f97480() {
   return (neuron0x2f7a230()*-0.0370467);
}

double NNfunction_ss_sLcR::synapse0x2f974c0() {
   return (neuron0x2f7a570()*-0.259157);
}

double NNfunction_ss_sLcR::synapse0x2f96f50() {
   return (neuron0x2f7a8b0()*-0.155243);
}

double NNfunction_ss_sLcR::synapse0x2f96f90() {
   return (neuron0x2f7ae10()*-0.039148);
}

double NNfunction_ss_sLcR::synapse0x2f97610() {
   return (neuron0x2f7b030()*-0.0557479);
}

double NNfunction_ss_sLcR::synapse0x2f97650() {
   return (neuron0x2f7b370()*0.062455);
}

double NNfunction_ss_sLcR::synapse0x2f97690() {
   return (neuron0x2f7b6b0()*0.144437);
}

double NNfunction_ss_sLcR::synapse0x2f976d0() {
   return (neuron0x2f7b9f0()*-0.00674517);
}

double NNfunction_ss_sLcR::synapse0x2f97710() {
   return (neuron0x2f7bd30()*0.0132778);
}

double NNfunction_ss_sLcR::synapse0x2f97750() {
   return (neuron0x2f7c070()*-0.0636443);
}

double NNfunction_ss_sLcR::synapse0x2f97ad0() {
   return (neuron0x2f774b0()*-0.32359);
}

double NNfunction_ss_sLcR::synapse0x2f97b10() {
   return (neuron0x2f777f0()*0.451165);
}

double NNfunction_ss_sLcR::synapse0x2f97b50() {
   return (neuron0x2f77b30()*-0.468905);
}

double NNfunction_ss_sLcR::synapse0x2f97b90() {
   return (neuron0x2f77e70()*1.01448);
}

double NNfunction_ss_sLcR::synapse0x2f97bd0() {
   return (neuron0x2f781b0()*-0.0686155);
}

double NNfunction_ss_sLcR::synapse0x2f97c10() {
   return (neuron0x2f784f0()*0.282148);
}

double NNfunction_ss_sLcR::synapse0x2f97c50() {
   return (neuron0x2f78830()*-0.0150318);
}

double NNfunction_ss_sLcR::synapse0x2f97c90() {
   return (neuron0x2f78b70()*0.226167);
}

double NNfunction_ss_sLcR::synapse0x2f97cd0() {
   return (neuron0x2f78eb0()*0.318161);
}

double NNfunction_ss_sLcR::synapse0x2f97d10() {
   return (neuron0x2f791f0()*-0.23477);
}

double NNfunction_ss_sLcR::synapse0x2f97d50() {
   return (neuron0x2f79530()*-0.0314528);
}

double NNfunction_ss_sLcR::synapse0x2f97d90() {
   return (neuron0x2f79870()*-0.921042);
}

double NNfunction_ss_sLcR::synapse0x2f97dd0() {
   return (neuron0x2f79bb0()*0.0963301);
}

double NNfunction_ss_sLcR::synapse0x2f97e10() {
   return (neuron0x2f79ef0()*-0.537723);
}

double NNfunction_ss_sLcR::synapse0x2f97e50() {
   return (neuron0x2f7a230()*-0.96587);
}

double NNfunction_ss_sLcR::synapse0x2f97e90() {
   return (neuron0x2f7a570()*-0.700877);
}

double NNfunction_ss_sLcR::synapse0x2f97920() {
   return (neuron0x2f7a8b0()*-0.378666);
}

double NNfunction_ss_sLcR::synapse0x2f97960() {
   return (neuron0x2f7ae10()*-0.538175);
}

double NNfunction_ss_sLcR::synapse0x2f97fe0() {
   return (neuron0x2f7b030()*-0.466516);
}

double NNfunction_ss_sLcR::synapse0x2f98020() {
   return (neuron0x2f7b370()*0.226718);
}

double NNfunction_ss_sLcR::synapse0x2f98060() {
   return (neuron0x2f7b6b0()*-0.131195);
}

double NNfunction_ss_sLcR::synapse0x2f980a0() {
   return (neuron0x2f7b9f0()*-0.41411);
}

double NNfunction_ss_sLcR::synapse0x2f980e0() {
   return (neuron0x2f7bd30()*0.534723);
}

double NNfunction_ss_sLcR::synapse0x2f98120() {
   return (neuron0x2f7c070()*-0.189535);
}

double NNfunction_ss_sLcR::synapse0x2f984a0() {
   return (neuron0x2f774b0()*-0.890165);
}

double NNfunction_ss_sLcR::synapse0x2f984e0() {
   return (neuron0x2f777f0()*-0.220264);
}

double NNfunction_ss_sLcR::synapse0x2f98520() {
   return (neuron0x2f77b30()*-0.472191);
}

double NNfunction_ss_sLcR::synapse0x2f98560() {
   return (neuron0x2f77e70()*0.528161);
}

double NNfunction_ss_sLcR::synapse0x2f985a0() {
   return (neuron0x2f781b0()*-0.849404);
}

double NNfunction_ss_sLcR::synapse0x2f985e0() {
   return (neuron0x2f784f0()*0.828828);
}

double NNfunction_ss_sLcR::synapse0x2f98620() {
   return (neuron0x2f78830()*1.02301);
}

double NNfunction_ss_sLcR::synapse0x2f98660() {
   return (neuron0x2f78b70()*-0.452632);
}

double NNfunction_ss_sLcR::synapse0x2f986a0() {
   return (neuron0x2f78eb0()*-0.348562);
}

double NNfunction_ss_sLcR::synapse0x2f986e0() {
   return (neuron0x2f791f0()*0.526121);
}

double NNfunction_ss_sLcR::synapse0x2f98720() {
   return (neuron0x2f79530()*0.430765);
}

double NNfunction_ss_sLcR::synapse0x2f98760() {
   return (neuron0x2f79870()*-1.64495);
}

double NNfunction_ss_sLcR::synapse0x2f987a0() {
   return (neuron0x2f79bb0()*-1.0307);
}

double NNfunction_ss_sLcR::synapse0x2f987e0() {
   return (neuron0x2f79ef0()*-0.109316);
}

double NNfunction_ss_sLcR::synapse0x2f98820() {
   return (neuron0x2f7a230()*-0.196622);
}

double NNfunction_ss_sLcR::synapse0x2f98860() {
   return (neuron0x2f7a570()*0.415758);
}

double NNfunction_ss_sLcR::synapse0x2f982f0() {
   return (neuron0x2f7a8b0()*0.841532);
}

double NNfunction_ss_sLcR::synapse0x2f98330() {
   return (neuron0x2f7ae10()*0.269842);
}

double NNfunction_ss_sLcR::synapse0x2f989b0() {
   return (neuron0x2f7b030()*0.00771727);
}

double NNfunction_ss_sLcR::synapse0x2f989f0() {
   return (neuron0x2f7b370()*0.464398);
}

double NNfunction_ss_sLcR::synapse0x2f98a30() {
   return (neuron0x2f7b6b0()*-1.29553);
}

double NNfunction_ss_sLcR::synapse0x2f98a70() {
   return (neuron0x2f7b9f0()*0.707473);
}

double NNfunction_ss_sLcR::synapse0x2f98ab0() {
   return (neuron0x2f7bd30()*0.667712);
}

double NNfunction_ss_sLcR::synapse0x2f98af0() {
   return (neuron0x2f7c070()*-0.150333);
}

double NNfunction_ss_sLcR::synapse0x2f815a0() {
   return (neuron0x2f774b0()*-0.376806);
}

double NNfunction_ss_sLcR::synapse0x2f815e0() {
   return (neuron0x2f777f0()*-1.04209);
}

double NNfunction_ss_sLcR::synapse0x2f81620() {
   return (neuron0x2f77b30()*-0.038289);
}

double NNfunction_ss_sLcR::synapse0x2f81660() {
   return (neuron0x2f77e70()*1.08953);
}

double NNfunction_ss_sLcR::synapse0x2f816a0() {
   return (neuron0x2f781b0()*-0.247866);
}

double NNfunction_ss_sLcR::synapse0x2f816e0() {
   return (neuron0x2f784f0()*-0.557473);
}

double NNfunction_ss_sLcR::synapse0x2f81720() {
   return (neuron0x2f78830()*-0.388095);
}

double NNfunction_ss_sLcR::synapse0x2f81760() {
   return (neuron0x2f78b70()*0.442579);
}

double NNfunction_ss_sLcR::synapse0x2f99280() {
   return (neuron0x2f78eb0()*-0.219509);
}

double NNfunction_ss_sLcR::synapse0x2f992c0() {
   return (neuron0x2f791f0()*-0.0686624);
}

double NNfunction_ss_sLcR::synapse0x2f99300() {
   return (neuron0x2f79530()*-0.360745);
}

double NNfunction_ss_sLcR::synapse0x2f99340() {
   return (neuron0x2f79870()*0.37238);
}

double NNfunction_ss_sLcR::synapse0x2f99380() {
   return (neuron0x2f79bb0()*-0.586655);
}

double NNfunction_ss_sLcR::synapse0x2f993c0() {
   return (neuron0x2f79ef0()*0.418573);
}

double NNfunction_ss_sLcR::synapse0x2f99400() {
   return (neuron0x2f7a230()*0.2586);
}

double NNfunction_ss_sLcR::synapse0x2f99440() {
   return (neuron0x2f7a570()*0.372109);
}

double NNfunction_ss_sLcR::synapse0x2f98cc0() {
   return (neuron0x2f7a8b0()*0.22838);
}

double NNfunction_ss_sLcR::synapse0x2f98d00() {
   return (neuron0x2f7ae10()*0.233456);
}

double NNfunction_ss_sLcR::synapse0x2f99590() {
   return (neuron0x2f7b030()*-0.0569328);
}

double NNfunction_ss_sLcR::synapse0x2f995d0() {
   return (neuron0x2f7b370()*0.212198);
}

double NNfunction_ss_sLcR::synapse0x2f99610() {
   return (neuron0x2f7b6b0()*0.203143);
}

double NNfunction_ss_sLcR::synapse0x2f99650() {
   return (neuron0x2f7b9f0()*0.345898);
}

double NNfunction_ss_sLcR::synapse0x2f99690() {
   return (neuron0x2f7bd30()*-0.58405);
}

double NNfunction_ss_sLcR::synapse0x2f996d0() {
   return (neuron0x2f7c070()*0.24741);
}

double NNfunction_ss_sLcR::synapse0x2f99a50() {
   return (neuron0x2f774b0()*0.760073);
}

double NNfunction_ss_sLcR::synapse0x2f99a90() {
   return (neuron0x2f777f0()*0.973688);
}

double NNfunction_ss_sLcR::synapse0x2f99ad0() {
   return (neuron0x2f77b30()*0.0457665);
}

double NNfunction_ss_sLcR::synapse0x2f99b10() {
   return (neuron0x2f77e70()*0.10541);
}

double NNfunction_ss_sLcR::synapse0x2f99b50() {
   return (neuron0x2f781b0()*-0.057276);
}

double NNfunction_ss_sLcR::synapse0x2f99b90() {
   return (neuron0x2f784f0()*-0.439648);
}

double NNfunction_ss_sLcR::synapse0x2f99bd0() {
   return (neuron0x2f78830()*-0.102339);
}

double NNfunction_ss_sLcR::synapse0x2f99c10() {
   return (neuron0x2f78b70()*0.0546026);
}

double NNfunction_ss_sLcR::synapse0x2f99c50() {
   return (neuron0x2f78eb0()*-0.335877);
}

double NNfunction_ss_sLcR::synapse0x2f99c90() {
   return (neuron0x2f791f0()*-0.450419);
}

double NNfunction_ss_sLcR::synapse0x2f99cd0() {
   return (neuron0x2f79530()*-0.495913);
}

double NNfunction_ss_sLcR::synapse0x2f99d10() {
   return (neuron0x2f79870()*0.0757613);
}

double NNfunction_ss_sLcR::synapse0x2f99d50() {
   return (neuron0x2f79bb0()*1.26664);
}

double NNfunction_ss_sLcR::synapse0x2f99d90() {
   return (neuron0x2f79ef0()*-0.385203);
}

double NNfunction_ss_sLcR::synapse0x2f99dd0() {
   return (neuron0x2f7a230()*-0.27016);
}

double NNfunction_ss_sLcR::synapse0x2f99e10() {
   return (neuron0x2f7a570()*0.079197);
}

double NNfunction_ss_sLcR::synapse0x2f998a0() {
   return (neuron0x2f7a8b0()*-0.303012);
}

double NNfunction_ss_sLcR::synapse0x2f998e0() {
   return (neuron0x2f7ae10()*0.184213);
}

double NNfunction_ss_sLcR::synapse0x2f99f60() {
   return (neuron0x2f7b030()*-0.245375);
}

double NNfunction_ss_sLcR::synapse0x2f99fa0() {
   return (neuron0x2f7b370()*-0.234648);
}

double NNfunction_ss_sLcR::synapse0x2f99fe0() {
   return (neuron0x2f7b6b0()*-0.0831717);
}

double NNfunction_ss_sLcR::synapse0x2f9a020() {
   return (neuron0x2f7b9f0()*0.2707);
}

double NNfunction_ss_sLcR::synapse0x2f9a060() {
   return (neuron0x2f7bd30()*-0.580773);
}

double NNfunction_ss_sLcR::synapse0x2f9a0a0() {
   return (neuron0x2f7c070()*0.925302);
}

double NNfunction_ss_sLcR::synapse0x2f9a420() {
   return (neuron0x2f774b0()*0.116601);
}

double NNfunction_ss_sLcR::synapse0x2f9a460() {
   return (neuron0x2f777f0()*-0.415376);
}

double NNfunction_ss_sLcR::synapse0x2f9a4a0() {
   return (neuron0x2f77b30()*0.754868);
}

double NNfunction_ss_sLcR::synapse0x2f9a4e0() {
   return (neuron0x2f77e70()*1.41291);
}

double NNfunction_ss_sLcR::synapse0x2f9a520() {
   return (neuron0x2f781b0()*0.0276579);
}

double NNfunction_ss_sLcR::synapse0x2f9a560() {
   return (neuron0x2f784f0()*-0.0562971);
}

double NNfunction_ss_sLcR::synapse0x2f9a5a0() {
   return (neuron0x2f78830()*0.502436);
}

double NNfunction_ss_sLcR::synapse0x2f9a5e0() {
   return (neuron0x2f78b70()*0.53098);
}

double NNfunction_ss_sLcR::synapse0x2f9a620() {
   return (neuron0x2f78eb0()*-0.645822);
}

double NNfunction_ss_sLcR::synapse0x2f9a660() {
   return (neuron0x2f791f0()*0.131524);
}

double NNfunction_ss_sLcR::synapse0x2f9a6a0() {
   return (neuron0x2f79530()*-0.470355);
}

double NNfunction_ss_sLcR::synapse0x2f9a6e0() {
   return (neuron0x2f79870()*-0.72806);
}

double NNfunction_ss_sLcR::synapse0x2f9a720() {
   return (neuron0x2f79bb0()*-0.403904);
}

double NNfunction_ss_sLcR::synapse0x2f9a760() {
   return (neuron0x2f79ef0()*0.956952);
}

double NNfunction_ss_sLcR::synapse0x2f9a7a0() {
   return (neuron0x2f7a230()*0.635832);
}

double NNfunction_ss_sLcR::synapse0x2f9a7e0() {
   return (neuron0x2f7a570()*0.0156041);
}

double NNfunction_ss_sLcR::synapse0x2f9a270() {
   return (neuron0x2f7a8b0()*-0.17065);
}

double NNfunction_ss_sLcR::synapse0x2f9a2b0() {
   return (neuron0x2f7ae10()*-0.415328);
}

double NNfunction_ss_sLcR::synapse0x2f8ade0() {
   return (neuron0x2f7b030()*-0.137883);
}

double NNfunction_ss_sLcR::synapse0x2f8ae20() {
   return (neuron0x2f7b370()*-0.89649);
}

double NNfunction_ss_sLcR::synapse0x2f8ae60() {
   return (neuron0x2f7b6b0()*0.0444229);
}

double NNfunction_ss_sLcR::synapse0x2f8aea0() {
   return (neuron0x2f7b9f0()*-0.403163);
}

double NNfunction_ss_sLcR::synapse0x2f8aee0() {
   return (neuron0x2f7bd30()*-0.266636);
}

double NNfunction_ss_sLcR::synapse0x2f8af20() {
   return (neuron0x2f7c070()*0.0953126);
}

double NNfunction_ss_sLcR::synapse0x2f8b2a0() {
   return (neuron0x2f774b0()*0.737632);
}

double NNfunction_ss_sLcR::synapse0x2f8b2e0() {
   return (neuron0x2f777f0()*-1.492);
}

double NNfunction_ss_sLcR::synapse0x2f8b320() {
   return (neuron0x2f77b30()*0.69686);
}

double NNfunction_ss_sLcR::synapse0x2f8b360() {
   return (neuron0x2f77e70()*-0.9059);
}

double NNfunction_ss_sLcR::synapse0x2f8b3a0() {
   return (neuron0x2f781b0()*-0.75295);
}

double NNfunction_ss_sLcR::synapse0x2f8b3e0() {
   return (neuron0x2f784f0()*0.810167);
}

double NNfunction_ss_sLcR::synapse0x2f8b420() {
   return (neuron0x2f78830()*0.626208);
}

double NNfunction_ss_sLcR::synapse0x2f8b460() {
   return (neuron0x2f78b70()*-1.3526);
}

double NNfunction_ss_sLcR::synapse0x2f8b4a0() {
   return (neuron0x2f78eb0()*0.868577);
}

double NNfunction_ss_sLcR::synapse0x2f8b4e0() {
   return (neuron0x2f791f0()*0.687012);
}

double NNfunction_ss_sLcR::synapse0x2f8b520() {
   return (neuron0x2f79530()*0.974334);
}

double NNfunction_ss_sLcR::synapse0x2f8b560() {
   return (neuron0x2f79870()*0.0998259);
}

double NNfunction_ss_sLcR::synapse0x2f8b5a0() {
   return (neuron0x2f79bb0()*-0.0200162);
}

double NNfunction_ss_sLcR::synapse0x2f8b5e0() {
   return (neuron0x2f79ef0()*0.770372);
}

double NNfunction_ss_sLcR::synapse0x2f8b620() {
   return (neuron0x2f7a230()*0.41042);
}

double NNfunction_ss_sLcR::synapse0x2f8b660() {
   return (neuron0x2f7a570()*0.60817);
}

double NNfunction_ss_sLcR::synapse0x2f8b0f0() {
   return (neuron0x2f7a8b0()*-0.0319704);
}

double NNfunction_ss_sLcR::synapse0x2f8b130() {
   return (neuron0x2f7ae10()*-0.0277581);
}

double NNfunction_ss_sLcR::synapse0x2f8b7b0() {
   return (neuron0x2f7b030()*0.192325);
}

double NNfunction_ss_sLcR::synapse0x2f8b7f0() {
   return (neuron0x2f7b370()*-0.574593);
}

double NNfunction_ss_sLcR::synapse0x2f8b830() {
   return (neuron0x2f7b6b0()*-0.517458);
}

double NNfunction_ss_sLcR::synapse0x2f8b870() {
   return (neuron0x2f7b9f0()*-0.586599);
}

double NNfunction_ss_sLcR::synapse0x2f8b8b0() {
   return (neuron0x2f7bd30()*-0.364539);
}

double NNfunction_ss_sLcR::synapse0x2f8b8f0() {
   return (neuron0x2f7c070()*0.868228);
}

double NNfunction_ss_sLcR::synapse0x2f8bc70() {
   return (neuron0x2f774b0()*-0.344465);
}

double NNfunction_ss_sLcR::synapse0x2f8bcb0() {
   return (neuron0x2f777f0()*-0.036403);
}

double NNfunction_ss_sLcR::synapse0x2f8bcf0() {
   return (neuron0x2f77b30()*0.00674832);
}

double NNfunction_ss_sLcR::synapse0x2f8bd30() {
   return (neuron0x2f77e70()*1.23393);
}

double NNfunction_ss_sLcR::synapse0x2f8bd70() {
   return (neuron0x2f781b0()*-0.0411653);
}

double NNfunction_ss_sLcR::synapse0x2f8bdb0() {
   return (neuron0x2f784f0()*-0.368589);
}

double NNfunction_ss_sLcR::synapse0x2f8bdf0() {
   return (neuron0x2f78830()*0.684314);
}

double NNfunction_ss_sLcR::synapse0x2f8be30() {
   return (neuron0x2f78b70()*0.0506692);
}

double NNfunction_ss_sLcR::synapse0x2f8be70() {
   return (neuron0x2f78eb0()*-0.0963517);
}

double NNfunction_ss_sLcR::synapse0x2f8beb0() {
   return (neuron0x2f791f0()*-0.21739);
}

double NNfunction_ss_sLcR::synapse0x2f8bef0() {
   return (neuron0x2f79530()*0.213422);
}

double NNfunction_ss_sLcR::synapse0x2f8bf30() {
   return (neuron0x2f79870()*-0.39236);
}

double NNfunction_ss_sLcR::synapse0x2f8bf70() {
   return (neuron0x2f79bb0()*-0.453157);
}

double NNfunction_ss_sLcR::synapse0x2f8bfb0() {
   return (neuron0x2f79ef0()*0.575309);
}

double NNfunction_ss_sLcR::synapse0x2f8bff0() {
   return (neuron0x2f7a230()*0.0191859);
}

double NNfunction_ss_sLcR::synapse0x2f8c030() {
   return (neuron0x2f7a570()*0.155253);
}

double NNfunction_ss_sLcR::synapse0x2f8bac0() {
   return (neuron0x2f7a8b0()*0.519769);
}

double NNfunction_ss_sLcR::synapse0x2f8bb00() {
   return (neuron0x2f7ae10()*-0.0905176);
}

double NNfunction_ss_sLcR::synapse0x2f8c180() {
   return (neuron0x2f7b030()*-0.643329);
}

double NNfunction_ss_sLcR::synapse0x2f8c1c0() {
   return (neuron0x2f7b370()*-0.512074);
}

double NNfunction_ss_sLcR::synapse0x2f8c200() {
   return (neuron0x2f7b6b0()*-0.0526604);
}

double NNfunction_ss_sLcR::synapse0x2f8c240() {
   return (neuron0x2f7b9f0()*0.0093265);
}

double NNfunction_ss_sLcR::synapse0x2f8c280() {
   return (neuron0x2f7bd30()*0.0198239);
}

double NNfunction_ss_sLcR::synapse0x2f8c2c0() {
   return (neuron0x2f7c070()*-0.729579);
}

double NNfunction_ss_sLcR::synapse0x2f8c640() {
   return (neuron0x2f774b0()*0.0830947);
}

double NNfunction_ss_sLcR::synapse0x2f8c680() {
   return (neuron0x2f777f0()*-0.0434757);
}

double NNfunction_ss_sLcR::synapse0x2f8c6c0() {
   return (neuron0x2f77b30()*-0.115825);
}

double NNfunction_ss_sLcR::synapse0x2f8c700() {
   return (neuron0x2f77e70()*-2.95442);
}

double NNfunction_ss_sLcR::synapse0x2f8c740() {
   return (neuron0x2f781b0()*0.0229371);
}

double NNfunction_ss_sLcR::synapse0x2f8c780() {
   return (neuron0x2f784f0()*0.000873976);
}

double NNfunction_ss_sLcR::synapse0x2f8c7c0() {
   return (neuron0x2f78830()*0.117659);
}

double NNfunction_ss_sLcR::synapse0x2f8c800() {
   return (neuron0x2f78b70()*0.0214595);
}

double NNfunction_ss_sLcR::synapse0x2f8c840() {
   return (neuron0x2f78eb0()*0.00976457);
}

double NNfunction_ss_sLcR::synapse0x2f8c880() {
   return (neuron0x2f791f0()*-0.110905);
}

double NNfunction_ss_sLcR::synapse0x2f8c8c0() {
   return (neuron0x2f79530()*-0.201872);
}

double NNfunction_ss_sLcR::synapse0x2f8c900() {
   return (neuron0x2f79870()*-0.237322);
}

double NNfunction_ss_sLcR::synapse0x2f8c940() {
   return (neuron0x2f79bb0()*0.345243);
}

double NNfunction_ss_sLcR::synapse0x2f8c980() {
   return (neuron0x2f79ef0()*0.0910114);
}

double NNfunction_ss_sLcR::synapse0x2f8c9c0() {
   return (neuron0x2f7a230()*0.0413488);
}

double NNfunction_ss_sLcR::synapse0x2f8ca00() {
   return (neuron0x2f7a570()*0.664095);
}

double NNfunction_ss_sLcR::synapse0x2f8c490() {
   return (neuron0x2f7a8b0()*0.204049);
}

double NNfunction_ss_sLcR::synapse0x2f8c4d0() {
   return (neuron0x2f7ae10()*-0.0222706);
}

double NNfunction_ss_sLcR::synapse0x2f8cb50() {
   return (neuron0x2f7b030()*0.134956);
}

double NNfunction_ss_sLcR::synapse0x2f8cb90() {
   return (neuron0x2f7b370()*-0.0934288);
}

double NNfunction_ss_sLcR::synapse0x2f8cbd0() {
   return (neuron0x2f7b6b0()*-0.117232);
}

double NNfunction_ss_sLcR::synapse0x2f8cc10() {
   return (neuron0x2f7b9f0()*-0.0377602);
}

double NNfunction_ss_sLcR::synapse0x2f8cc50() {
   return (neuron0x2f7bd30()*-0.136066);
}

double NNfunction_ss_sLcR::synapse0x2f8cc90() {
   return (neuron0x2f7c070()*0.0285618);
}

double NNfunction_ss_sLcR::synapse0x2f9eb60() {
   return (neuron0x2f774b0()*-0.0114235);
}

double NNfunction_ss_sLcR::synapse0x2f9eba0() {
   return (neuron0x2f777f0()*-0.0873716);
}

double NNfunction_ss_sLcR::synapse0x2f9ebe0() {
   return (neuron0x2f77b30()*0.0637316);
}

double NNfunction_ss_sLcR::synapse0x2f9ec20() {
   return (neuron0x2f77e70()*6.44404);
}

double NNfunction_ss_sLcR::synapse0x2f9ec60() {
   return (neuron0x2f781b0()*0.00148609);
}

double NNfunction_ss_sLcR::synapse0x2f9eca0() {
   return (neuron0x2f784f0()*0.00664174);
}

double NNfunction_ss_sLcR::synapse0x2f9ece0() {
   return (neuron0x2f78830()*0.0038645);
}

double NNfunction_ss_sLcR::synapse0x2f9ed20() {
   return (neuron0x2f78b70()*-0.0344534);
}

double NNfunction_ss_sLcR::synapse0x2f9ed60() {
   return (neuron0x2f78eb0()*-0.0748474);
}

double NNfunction_ss_sLcR::synapse0x2f9eda0() {
   return (neuron0x2f791f0()*-0.0333036);
}

double NNfunction_ss_sLcR::synapse0x2f9ede0() {
   return (neuron0x2f79530()*0.00541857);
}

double NNfunction_ss_sLcR::synapse0x2f9ee20() {
   return (neuron0x2f79870()*0.0278143);
}

double NNfunction_ss_sLcR::synapse0x2f9ee60() {
   return (neuron0x2f79bb0()*-0.389634);
}

double NNfunction_ss_sLcR::synapse0x2f9eea0() {
   return (neuron0x2f79ef0()*0.0184814);
}

double NNfunction_ss_sLcR::synapse0x2f9eee0() {
   return (neuron0x2f7a230()*-0.0407759);
}

double NNfunction_ss_sLcR::synapse0x2f9ef20() {
   return (neuron0x2f7a570()*-0.274896);
}

double NNfunction_ss_sLcR::synapse0x2f8ccd0() {
   return (neuron0x2f7a8b0()*-0.0128652);
}

double NNfunction_ss_sLcR::synapse0x2f8cd10() {
   return (neuron0x2f7ae10()*-0.163289);
}

double NNfunction_ss_sLcR::synapse0x2f9f070() {
   return (neuron0x2f7b030()*0.0510082);
}

double NNfunction_ss_sLcR::synapse0x2f9f0b0() {
   return (neuron0x2f7b370()*0.0407888);
}

double NNfunction_ss_sLcR::synapse0x2f9f0f0() {
   return (neuron0x2f7b6b0()*0.0105221);
}

double NNfunction_ss_sLcR::synapse0x2f9f130() {
   return (neuron0x2f7b9f0()*0.00513906);
}

double NNfunction_ss_sLcR::synapse0x2f9f170() {
   return (neuron0x2f7bd30()*-0.00914323);
}

double NNfunction_ss_sLcR::synapse0x2f9f1b0() {
   return (neuron0x2f7c070()*0.0333742);
}

double NNfunction_ss_sLcR::synapse0x2f9f530() {
   return (neuron0x2f774b0()*0.185542);
}

double NNfunction_ss_sLcR::synapse0x2f9f570() {
   return (neuron0x2f777f0()*0.0292423);
}

double NNfunction_ss_sLcR::synapse0x2f9f5b0() {
   return (neuron0x2f77b30()*-0.090018);
}

double NNfunction_ss_sLcR::synapse0x2f9f5f0() {
   return (neuron0x2f77e70()*-0.812445);
}

double NNfunction_ss_sLcR::synapse0x2f9f630() {
   return (neuron0x2f781b0()*-0.136113);
}

double NNfunction_ss_sLcR::synapse0x2f9f670() {
   return (neuron0x2f784f0()*1.21265);
}

double NNfunction_ss_sLcR::synapse0x2f9f6b0() {
   return (neuron0x2f78830()*-0.0547754);
}

double NNfunction_ss_sLcR::synapse0x2f9f6f0() {
   return (neuron0x2f78b70()*0.810391);
}

double NNfunction_ss_sLcR::synapse0x2f9f730() {
   return (neuron0x2f78eb0()*-0.0470548);
}

double NNfunction_ss_sLcR::synapse0x2f9f770() {
   return (neuron0x2f791f0()*-0.145645);
}

double NNfunction_ss_sLcR::synapse0x2f9f7b0() {
   return (neuron0x2f79530()*0.389189);
}

double NNfunction_ss_sLcR::synapse0x2f9f7f0() {
   return (neuron0x2f79870()*-0.0438396);
}

double NNfunction_ss_sLcR::synapse0x2f9f830() {
   return (neuron0x2f79bb0()*-0.314331);
}

double NNfunction_ss_sLcR::synapse0x2f9f870() {
   return (neuron0x2f79ef0()*0.312725);
}

double NNfunction_ss_sLcR::synapse0x2f9f8b0() {
   return (neuron0x2f7a230()*0.243031);
}

double NNfunction_ss_sLcR::synapse0x2f9f8f0() {
   return (neuron0x2f7a570()*-0.463207);
}

double NNfunction_ss_sLcR::synapse0x2f9f380() {
   return (neuron0x2f7a8b0()*-0.412211);
}

double NNfunction_ss_sLcR::synapse0x2f9f3c0() {
   return (neuron0x2f7ae10()*-0.121181);
}

double NNfunction_ss_sLcR::synapse0x2f9fa40() {
   return (neuron0x2f7b030()*-0.0256516);
}

double NNfunction_ss_sLcR::synapse0x2f9fa80() {
   return (neuron0x2f7b370()*-0.34284);
}

double NNfunction_ss_sLcR::synapse0x2f9fac0() {
   return (neuron0x2f7b6b0()*0.283945);
}

double NNfunction_ss_sLcR::synapse0x2f9fb00() {
   return (neuron0x2f7b9f0()*-0.141289);
}

double NNfunction_ss_sLcR::synapse0x2f9fb40() {
   return (neuron0x2f7bd30()*0.211694);
}

double NNfunction_ss_sLcR::synapse0x2f9fb80() {
   return (neuron0x2f7c070()*-0.41978);
}

double NNfunction_ss_sLcR::synapse0x2f9ff00() {
   return (neuron0x2f774b0()*-0.123912);
}

double NNfunction_ss_sLcR::synapse0x2f9ff40() {
   return (neuron0x2f777f0()*-0.0831837);
}

double NNfunction_ss_sLcR::synapse0x2f9ff80() {
   return (neuron0x2f77b30()*0.517318);
}

double NNfunction_ss_sLcR::synapse0x2f9ffc0() {
   return (neuron0x2f77e70()*-0.597987);
}

double NNfunction_ss_sLcR::synapse0x2fa0000() {
   return (neuron0x2f781b0()*-0.261426);
}

double NNfunction_ss_sLcR::synapse0x2fa0040() {
   return (neuron0x2f784f0()*0.22232);
}

double NNfunction_ss_sLcR::synapse0x2fa0080() {
   return (neuron0x2f78830()*0.273605);
}

double NNfunction_ss_sLcR::synapse0x2fa00c0() {
   return (neuron0x2f78b70()*0.201633);
}

double NNfunction_ss_sLcR::synapse0x2fa0100() {
   return (neuron0x2f78eb0()*-0.211321);
}

double NNfunction_ss_sLcR::synapse0x2fa0140() {
   return (neuron0x2f791f0()*-0.0834921);
}

double NNfunction_ss_sLcR::synapse0x2fa0180() {
   return (neuron0x2f79530()*0.149075);
}

double NNfunction_ss_sLcR::synapse0x2fa01c0() {
   return (neuron0x2f79870()*-0.0833545);
}

double NNfunction_ss_sLcR::synapse0x2fa0200() {
   return (neuron0x2f79bb0()*0.0129218);
}

double NNfunction_ss_sLcR::synapse0x2fa0240() {
   return (neuron0x2f79ef0()*-0.367075);
}

double NNfunction_ss_sLcR::synapse0x2fa0280() {
   return (neuron0x2f7a230()*0.199071);
}

double NNfunction_ss_sLcR::synapse0x2fa02c0() {
   return (neuron0x2f7a570()*0.50555);
}

double NNfunction_ss_sLcR::synapse0x2f9fd50() {
   return (neuron0x2f7a8b0()*0.0181286);
}

double NNfunction_ss_sLcR::synapse0x2f9fd90() {
   return (neuron0x2f7ae10()*-0.0532722);
}

double NNfunction_ss_sLcR::synapse0x2fa0410() {
   return (neuron0x2f7b030()*-0.313655);
}

double NNfunction_ss_sLcR::synapse0x2fa0450() {
   return (neuron0x2f7b370()*-0.353791);
}

double NNfunction_ss_sLcR::synapse0x2fa0490() {
   return (neuron0x2f7b6b0()*0.0998978);
}

double NNfunction_ss_sLcR::synapse0x2fa04d0() {
   return (neuron0x2f7b9f0()*0.0901316);
}

double NNfunction_ss_sLcR::synapse0x2fa0510() {
   return (neuron0x2f7bd30()*0.16763);
}

double NNfunction_ss_sLcR::synapse0x2fa0550() {
   return (neuron0x2f7c070()*-0.258595);
}

double NNfunction_ss_sLcR::synapse0x2fa08d0() {
   return (neuron0x2f774b0()*-0.128467);
}

double NNfunction_ss_sLcR::synapse0x2fa0910() {
   return (neuron0x2f777f0()*0.108569);
}

double NNfunction_ss_sLcR::synapse0x2fa0950() {
   return (neuron0x2f77b30()*0.0822845);
}

double NNfunction_ss_sLcR::synapse0x2fa0990() {
   return (neuron0x2f77e70()*1.23197);
}

double NNfunction_ss_sLcR::synapse0x2fa09d0() {
   return (neuron0x2f781b0()*-0.021995);
}

double NNfunction_ss_sLcR::synapse0x2fa0a10() {
   return (neuron0x2f784f0()*0.00596505);
}

double NNfunction_ss_sLcR::synapse0x2fa0a50() {
   return (neuron0x2f78830()*-0.115378);
}

double NNfunction_ss_sLcR::synapse0x2fa0a90() {
   return (neuron0x2f78b70()*-0.0203171);
}

double NNfunction_ss_sLcR::synapse0x2fa0ad0() {
   return (neuron0x2f78eb0()*-0.0103218);
}

double NNfunction_ss_sLcR::synapse0x2fa0b10() {
   return (neuron0x2f791f0()*0.105331);
}

double NNfunction_ss_sLcR::synapse0x2fa0b50() {
   return (neuron0x2f79530()*0.206097);
}

double NNfunction_ss_sLcR::synapse0x2fa0b90() {
   return (neuron0x2f79870()*0.284031);
}

double NNfunction_ss_sLcR::synapse0x2fa0bd0() {
   return (neuron0x2f79bb0()*-0.292198);
}

double NNfunction_ss_sLcR::synapse0x2fa0c10() {
   return (neuron0x2f79ef0()*-0.00868417);
}

double NNfunction_ss_sLcR::synapse0x2fa0c50() {
   return (neuron0x2f7a230()*-0.0328797);
}

double NNfunction_ss_sLcR::synapse0x2fa0c90() {
   return (neuron0x2f7a570()*-0.649773);
}

double NNfunction_ss_sLcR::synapse0x2fa0720() {
   return (neuron0x2f7a8b0()*-0.125898);
}

double NNfunction_ss_sLcR::synapse0x2fa0760() {
   return (neuron0x2f7ae10()*0.0880982);
}

double NNfunction_ss_sLcR::synapse0x2fa0de0() {
   return (neuron0x2f7b030()*-0.132018);
}

double NNfunction_ss_sLcR::synapse0x2fa0e20() {
   return (neuron0x2f7b370()*0.0661745);
}

double NNfunction_ss_sLcR::synapse0x2fa0e60() {
   return (neuron0x2f7b6b0()*0.0221075);
}

double NNfunction_ss_sLcR::synapse0x2fa0ea0() {
   return (neuron0x2f7b9f0()*0.0568134);
}

double NNfunction_ss_sLcR::synapse0x2fa0ee0() {
   return (neuron0x2f7bd30()*0.125357);
}

double NNfunction_ss_sLcR::synapse0x2fa0f20() {
   return (neuron0x2f7c070()*0.00315903);
}

double NNfunction_ss_sLcR::synapse0x2f7d4c0() {
   return (neuron0x2f7c510()*-0.267116);
}

double NNfunction_ss_sLcR::synapse0x2f7d500() {
   return (neuron0x2f7ce20()*-1.66375);
}

double NNfunction_ss_sLcR::synapse0x2f7e9d0() {
   return (neuron0x2f7d900()*-1.10037);
}

double NNfunction_ss_sLcR::synapse0x2f7ea10() {
   return (neuron0x2d37190()*0.400427);
}

double NNfunction_ss_sLcR::synapse0x2f7f3a0() {
   return (neuron0x2f7e720()*-0.328426);
}

double NNfunction_ss_sLcR::synapse0x2f7f3e0() {
   return (neuron0x2f7f0f0()*-1.23378);
}

double NNfunction_ss_sLcR::synapse0x2f80170() {
   return (neuron0x2f7fec0()*0.49799);
}

double NNfunction_ss_sLcR::synapse0x2f801b0() {
   return (neuron0x2f80890()*0.474883);
}

double NNfunction_ss_sLcR::synapse0x2f80b40() {
   return (neuron0x2f81260()*-0.02138);
}

double NNfunction_ss_sLcR::synapse0x2f80b80() {
   return (neuron0x2f81d40()*-1.12611);
}

double NNfunction_ss_sLcR::synapse0x2f81510() {
   return (neuron0x2f82710()*-0.646925);
}

double NNfunction_ss_sLcR::synapse0x2f81550() {
   return (neuron0x2f7f7f0()*-1.00136);
}

double NNfunction_ss_sLcR::synapse0x2f81ff0() {
   return (neuron0x2f842c0()*-0.557618);
}

double NNfunction_ss_sLcR::synapse0x2f82030() {
   return (neuron0x2f84c90()*1.22371);
}

double NNfunction_ss_sLcR::synapse0x2f829c0() {
   return (neuron0x2f85660()*0.997848);
}

double NNfunction_ss_sLcR::synapse0x2f82a00() {
   return (neuron0x2f86030()*0.284125);
}

double NNfunction_ss_sLcR::synapse0x2f7faa0() {
   return (neuron0x2f87e40()*-0.188504);
}

double NNfunction_ss_sLcR::synapse0x2f7fae0() {
   return (neuron0x2f88120()*-0.492662);
}

double NNfunction_ss_sLcR::synapse0x2f84570() {
   return (neuron0x2f88af0()*-1.5495);
}

double NNfunction_ss_sLcR::synapse0x2f845b0() {
   return (neuron0x2f894c0()*0.512175);
}

double NNfunction_ss_sLcR::synapse0x2f84f40() {
   return (neuron0x2f89e90()*-0.45995);
}

double NNfunction_ss_sLcR::synapse0x2f84f80() {
   return (neuron0x2f8a860()*0.435454);
}

double NNfunction_ss_sLcR::synapse0x2f85910() {
   return (neuron0x2f833b0()*0.769198);
}

double NNfunction_ss_sLcR::synapse0x2f85950() {
   return (neuron0x2f83d80()*-0.363306);
}

double NNfunction_ss_sLcR::synapse0x2f862e0() {
   return (neuron0x2f8d5f0()*-1.3516);
}

double NNfunction_ss_sLcR::synapse0x2f86320() {
   return (neuron0x2f8dfc0()*-0.341637);
}

double NNfunction_ss_sLcR::synapse0x2f7a450() {
   return (neuron0x2f8e990()*0.390978);
}

double NNfunction_ss_sLcR::synapse0x2f7a490() {
   return (neuron0x2f8f360()*0.973245);
}

double NNfunction_ss_sLcR::synapse0x2f883d0() {
   return (neuron0x2f8fd30()*0.625221);
}

double NNfunction_ss_sLcR::synapse0x2f88410() {
   return (neuron0x2f90700()*1.63609);
}

double NNfunction_ss_sLcR::synapse0x2f88da0() {
   return (neuron0x2f910d0()*1.30166);
}

double NNfunction_ss_sLcR::synapse0x2f88de0() {
   return (neuron0x2f91aa0()*-0.262362);
}

double NNfunction_ss_sLcR::synapse0x2f89770() {
   return (neuron0x2f87b30()*0.14804);
}

double NNfunction_ss_sLcR::synapse0x2f897b0() {
   return (neuron0x2f94680()*-0.418521);
}

double NNfunction_ss_sLcR::synapse0x2f8a140() {
   return (neuron0x2f95050()*0.584164);
}

double NNfunction_ss_sLcR::synapse0x2f8a180() {
   return (neuron0x2f95a20()*-0.195344);
}

double NNfunction_ss_sLcR::synapse0x2f8ab10() {
   return (neuron0x2f963f0()*1.7754);
}

double NNfunction_ss_sLcR::synapse0x2f8ab50() {
   return (neuron0x2f96dc0()*-3.4056);
}

double NNfunction_ss_sLcR::synapse0x2f83660() {
   return (neuron0x2f97790()*-0.388011);
}

double NNfunction_ss_sLcR::synapse0x2f836a0() {
   return (neuron0x2f98160()*0.326185);
}

double NNfunction_ss_sLcR::synapse0x2f8cf10() {
   return (neuron0x2f98b30()*0.0924543);
}

double NNfunction_ss_sLcR::synapse0x2f8cf50() {
   return (neuron0x2f99710()*-0.761258);
}

double NNfunction_ss_sLcR::synapse0x2f8d8a0() {
   return (neuron0x2f9a0e0()*-0.144335);
}

double NNfunction_ss_sLcR::synapse0x2f8d8e0() {
   return (neuron0x2f8af60()*-0.175075);
}

double NNfunction_ss_sLcR::synapse0x2f8e270() {
   return (neuron0x2f8b930()*-1.03905);
}

double NNfunction_ss_sLcR::synapse0x2f8e2b0() {
   return (neuron0x2f8c300()*1.93465);
}

double NNfunction_ss_sLcR::synapse0x2f8ec40() {
   return (neuron0x2f9e940()*-1.87327);
}

double NNfunction_ss_sLcR::synapse0x2f8ec80() {
   return (neuron0x2f9f1f0()*-0.758116);
}

double NNfunction_ss_sLcR::synapse0x2f8f610() {
   return (neuron0x2f9fbc0()*1.51251);
}

double NNfunction_ss_sLcR::synapse0x2f8f650() {
   return (neuron0x2fa0590()*0.693881);
}

double NNfunction_ss_sLcR::synapse0x2f91d50() {
   return (neuron0x2f7c510()*0.0224186);
}

double NNfunction_ss_sLcR::synapse0x2f91d90() {
   return (neuron0x2f7ce20()*-1.50958);
}

double NNfunction_ss_sLcR::synapse0x2f87310() {
   return (neuron0x2f7d900()*-0.619135);
}

double NNfunction_ss_sLcR::synapse0x2f87350() {
   return (neuron0x2d37190()*-0.0376706);
}

double NNfunction_ss_sLcR::synapse0x2f94930() {
   return (neuron0x2f7e720()*0.128321);
}

double NNfunction_ss_sLcR::synapse0x2f94970() {
   return (neuron0x2f7f0f0()*-0.00652932);
}

double NNfunction_ss_sLcR::synapse0x2f95300() {
   return (neuron0x2f7fec0()*-0.107268);
}

double NNfunction_ss_sLcR::synapse0x2f95340() {
   return (neuron0x2f80890()*-0.171903);
}

double NNfunction_ss_sLcR::synapse0x2f95cd0() {
   return (neuron0x2f81260()*-0.123471);
}

double NNfunction_ss_sLcR::synapse0x2f95d10() {
   return (neuron0x2f81d40()*1.25396);
}

double NNfunction_ss_sLcR::synapse0x2f966a0() {
   return (neuron0x2f82710()*0.200633);
}

double NNfunction_ss_sLcR::synapse0x2f966e0() {
   return (neuron0x2f7f7f0()*-0.141121);
}

double NNfunction_ss_sLcR::synapse0x2f97070() {
   return (neuron0x2f842c0()*0.0812853);
}

double NNfunction_ss_sLcR::synapse0x2f970b0() {
   return (neuron0x2f84c90()*-2.68533);
}

double NNfunction_ss_sLcR::synapse0x2f97a40() {
   return (neuron0x2f85660()*1.81045);
}

double NNfunction_ss_sLcR::synapse0x2f97a80() {
   return (neuron0x2f86030()*-0.0439484);
}

double NNfunction_ss_sLcR::synapse0x2f98410() {
   return (neuron0x2f87e40()*3.29831);
}

double NNfunction_ss_sLcR::synapse0x2f98450() {
   return (neuron0x2f88120()*0.0946777);
}

double NNfunction_ss_sLcR::synapse0x2f98de0() {
   return (neuron0x2f88af0()*0.589594);
}

double NNfunction_ss_sLcR::synapse0x2f98e20() {
   return (neuron0x2f894c0()*-0.0703418);
}

double NNfunction_ss_sLcR::synapse0x2f999c0() {
   return (neuron0x2f89e90()*0.00163607);
}

double NNfunction_ss_sLcR::synapse0x2f99a00() {
   return (neuron0x2f8a860()*-0.168996);
}

double NNfunction_ss_sLcR::synapse0x2f9a390() {
   return (neuron0x2f833b0()*-1.14887);
}

double NNfunction_ss_sLcR::synapse0x2f9a3d0() {
   return (neuron0x2f83d80()*0.039255);
}

double NNfunction_ss_sLcR::synapse0x2f8b210() {
   return (neuron0x2f8d5f0()*-0.104084);
}

double NNfunction_ss_sLcR::synapse0x2f8b250() {
   return (neuron0x2f8dfc0()*0.186055);
}

double NNfunction_ss_sLcR::synapse0x2f8bbe0() {
   return (neuron0x2f8e990()*0.289071);
}

double NNfunction_ss_sLcR::synapse0x2f8bc20() {
   return (neuron0x2f8f360()*0.221928);
}

double NNfunction_ss_sLcR::synapse0x2f8c5b0() {
   return (neuron0x2f8fd30()*1.1835);
}

double NNfunction_ss_sLcR::synapse0x2f8c5f0() {
   return (neuron0x2f90700()*-0.324714);
}

double NNfunction_ss_sLcR::synapse0x2f9ead0() {
   return (neuron0x2f910d0()*-0.507847);
}

double NNfunction_ss_sLcR::synapse0x2f9eb10() {
   return (neuron0x2f91aa0()*0.175685);
}

double NNfunction_ss_sLcR::synapse0x2f9f4a0() {
   return (neuron0x2f87b30()*-0.115726);
}

double NNfunction_ss_sLcR::synapse0x2f9f4e0() {
   return (neuron0x2f94680()*0.315673);
}

double NNfunction_ss_sLcR::synapse0x2f9fe70() {
   return (neuron0x2f95050()*0.419882);
}

double NNfunction_ss_sLcR::synapse0x2f9feb0() {
   return (neuron0x2f95a20()*0.0816601);
}

double NNfunction_ss_sLcR::synapse0x2fa0840() {
   return (neuron0x2f963f0()*-3.07331);
}

double NNfunction_ss_sLcR::synapse0x2fa0880() {
   return (neuron0x2f96dc0()*-0.136103);
}

double NNfunction_ss_sLcR::synapse0x2f7c730() {
   return (neuron0x2f97790()*0.107298);
}

double NNfunction_ss_sLcR::synapse0x2f7c770() {
   return (neuron0x2f98160()*-0.0119694);
}

double NNfunction_ss_sLcR::synapse0x2f8ffe0() {
   return (neuron0x2f98b30()*0.09802);
}

double NNfunction_ss_sLcR::synapse0x2f90020() {
   return (neuron0x2f99710()*-0.0730084);
}

double NNfunction_ss_sLcR::synapse0x2fa0f60() {
   return (neuron0x2f9a0e0()*0.159022);
}

double NNfunction_ss_sLcR::synapse0x2fa0fa0() {
   return (neuron0x2f8af60()*0.079461);
}

double NNfunction_ss_sLcR::synapse0x2fa0fe0() {
   return (neuron0x2f8b930()*-0.0128936);
}

double NNfunction_ss_sLcR::synapse0x2fa1020() {
   return (neuron0x2f8c300()*-1.5743);
}

double NNfunction_ss_sLcR::synapse0x2fa7ed0() {
   return (neuron0x2f9e940()*2.06143);
}

double NNfunction_ss_sLcR::synapse0x2fa7f10() {
   return (neuron0x2f9f1f0()*-0.0233266);
}

double NNfunction_ss_sLcR::synapse0x2fa7f50() {
   return (neuron0x2f9fbc0()*-0.736349);
}

double NNfunction_ss_sLcR::synapse0x2fa7f90() {
   return (neuron0x2fa0590()*0.770613);
}

double NNfunction_ss_sLcR::synapse0x2fa8310() {
   return (neuron0x2f7c510()*0.0642772);
}

double NNfunction_ss_sLcR::synapse0x2fa8350() {
   return (neuron0x2f7ce20()*0.350901);
}

double NNfunction_ss_sLcR::synapse0x2fa8390() {
   return (neuron0x2f7d900()*0.299859);
}

double NNfunction_ss_sLcR::synapse0x2fa83d0() {
   return (neuron0x2d37190()*-0.108037);
}

double NNfunction_ss_sLcR::synapse0x2fa8410() {
   return (neuron0x2f7e720()*1.14884);
}

double NNfunction_ss_sLcR::synapse0x2fa8450() {
   return (neuron0x2f7f0f0()*0.35527);
}

double NNfunction_ss_sLcR::synapse0x2fa8490() {
   return (neuron0x2f7fec0()*0.871075);
}

double NNfunction_ss_sLcR::synapse0x2fa84d0() {
   return (neuron0x2f80890()*-0.145463);
}

double NNfunction_ss_sLcR::synapse0x2fa8510() {
   return (neuron0x2f81260()*0.0409667);
}

double NNfunction_ss_sLcR::synapse0x2fa8550() {
   return (neuron0x2f81d40()*-0.113323);
}

double NNfunction_ss_sLcR::synapse0x2fa8590() {
   return (neuron0x2f82710()*0.13526);
}

double NNfunction_ss_sLcR::synapse0x2fa85d0() {
   return (neuron0x2f7f7f0()*0.303353);
}

double NNfunction_ss_sLcR::synapse0x2fa8610() {
   return (neuron0x2f842c0()*0.153311);
}

double NNfunction_ss_sLcR::synapse0x2fa8650() {
   return (neuron0x2f84c90()*0.0696191);
}

double NNfunction_ss_sLcR::synapse0x2fa8690() {
   return (neuron0x2f85660()*-0.0294552);
}

double NNfunction_ss_sLcR::synapse0x2fa86d0() {
   return (neuron0x2f86030()*-0.339756);
}

double NNfunction_ss_sLcR::synapse0x2fa8160() {
   return (neuron0x2f87e40()*0.282543);
}

double NNfunction_ss_sLcR::synapse0x2fa81a0() {
   return (neuron0x2f88120()*0.146071);
}

double NNfunction_ss_sLcR::synapse0x2fa8820() {
   return (neuron0x2f88af0()*-0.311221);
}

double NNfunction_ss_sLcR::synapse0x2fa8860() {
   return (neuron0x2f894c0()*-0.13917);
}

double NNfunction_ss_sLcR::synapse0x2fa88a0() {
   return (neuron0x2f89e90()*0.107871);
}

double NNfunction_ss_sLcR::synapse0x2fa88e0() {
   return (neuron0x2f8a860()*-0.116392);
}

double NNfunction_ss_sLcR::synapse0x2fa8920() {
   return (neuron0x2f833b0()*-2.50615);
}

double NNfunction_ss_sLcR::synapse0x2fa8960() {
   return (neuron0x2f83d80()*0.0886646);
}

double NNfunction_ss_sLcR::synapse0x2fa89a0() {
   return (neuron0x2f8d5f0()*0.397037);
}

double NNfunction_ss_sLcR::synapse0x2fa89e0() {
   return (neuron0x2f8dfc0()*0.0631601);
}

double NNfunction_ss_sLcR::synapse0x2fa8a20() {
   return (neuron0x2f8e990()*1.07098);
}

double NNfunction_ss_sLcR::synapse0x2fa8a60() {
   return (neuron0x2f8f360()*-0.179222);
}

double NNfunction_ss_sLcR::synapse0x2fa8aa0() {
   return (neuron0x2f8fd30()*0.0192155);
}

double NNfunction_ss_sLcR::synapse0x2fa8ae0() {
   return (neuron0x2f90700()*-0.365977);
}

double NNfunction_ss_sLcR::synapse0x2fa8b20() {
   return (neuron0x2f910d0()*1.41174);
}

double NNfunction_ss_sLcR::synapse0x2fa8b60() {
   return (neuron0x2f91aa0()*0.0622561);
}

double NNfunction_ss_sLcR::synapse0x2fa8710() {
   return (neuron0x2f87b30()*-0.0427936);
}

double NNfunction_ss_sLcR::synapse0x2fa8750() {
   return (neuron0x2f94680()*0.106797);
}

double NNfunction_ss_sLcR::synapse0x2fa8790() {
   return (neuron0x2f95050()*-0.518604);
}

double NNfunction_ss_sLcR::synapse0x2fa87d0() {
   return (neuron0x2f95a20()*0.0338862);
}

double NNfunction_ss_sLcR::synapse0x2fa8db0() {
   return (neuron0x2f963f0()*0.538953);
}

double NNfunction_ss_sLcR::synapse0x2fa8df0() {
   return (neuron0x2f96dc0()*1.23306);
}

double NNfunction_ss_sLcR::synapse0x2fa8e30() {
   return (neuron0x2f97790()*0.117702);
}

double NNfunction_ss_sLcR::synapse0x2fa8e70() {
   return (neuron0x2f98160()*-0.07404);
}

double NNfunction_ss_sLcR::synapse0x2fa8eb0() {
   return (neuron0x2f98b30()*-0.0512268);
}

double NNfunction_ss_sLcR::synapse0x2fa8ef0() {
   return (neuron0x2f99710()*0.22928);
}

double NNfunction_ss_sLcR::synapse0x2fa8f30() {
   return (neuron0x2f9a0e0()*0.0378394);
}

double NNfunction_ss_sLcR::synapse0x2fa8f70() {
   return (neuron0x2f8af60()*0.0522458);
}

double NNfunction_ss_sLcR::synapse0x2fa8fb0() {
   return (neuron0x2f8b930()*0.269588);
}

double NNfunction_ss_sLcR::synapse0x2fa8ff0() {
   return (neuron0x2f8c300()*-1.44133);
}

double NNfunction_ss_sLcR::synapse0x2fa9030() {
   return (neuron0x2f9e940()*-1.39344);
}

double NNfunction_ss_sLcR::synapse0x2fa9070() {
   return (neuron0x2f9f1f0()*0.175962);
}

double NNfunction_ss_sLcR::synapse0x2fa90b0() {
   return (neuron0x2f9fbc0()*-0.345747);
}

double NNfunction_ss_sLcR::synapse0x2fa90f0() {
   return (neuron0x2fa0590()*-2.47139);
}

double NNfunction_ss_sLcR::synapse0x2fa9470() {
   return (neuron0x2f7c510()*2.22336);
}

double NNfunction_ss_sLcR::synapse0x2fa94b0() {
   return (neuron0x2f7ce20()*0.0618443);
}

double NNfunction_ss_sLcR::synapse0x2fa94f0() {
   return (neuron0x2f7d900()*-0.141501);
}

double NNfunction_ss_sLcR::synapse0x2fa9530() {
   return (neuron0x2d37190()*-2.16643);
}

double NNfunction_ss_sLcR::synapse0x2fa9570() {
   return (neuron0x2f7e720()*0.113247);
}

double NNfunction_ss_sLcR::synapse0x2fa95b0() {
   return (neuron0x2f7f0f0()*0.342016);
}

double NNfunction_ss_sLcR::synapse0x2fa95f0() {
   return (neuron0x2f7fec0()*-0.282372);
}

double NNfunction_ss_sLcR::synapse0x2fa9630() {
   return (neuron0x2f80890()*-3.2371);
}

double NNfunction_ss_sLcR::synapse0x2fa9670() {
   return (neuron0x2f81260()*-3.50549);
}

double NNfunction_ss_sLcR::synapse0x2fa96b0() {
   return (neuron0x2f81d40()*-1.59164);
}

double NNfunction_ss_sLcR::synapse0x2fa96f0() {
   return (neuron0x2f82710()*2.32443);
}

double NNfunction_ss_sLcR::synapse0x2fa9730() {
   return (neuron0x2f7f7f0()*-0.0635889);
}

double NNfunction_ss_sLcR::synapse0x2fa9770() {
   return (neuron0x2f842c0()*1.76304);
}

double NNfunction_ss_sLcR::synapse0x2fa97b0() {
   return (neuron0x2f84c90()*-2.48647);
}

double NNfunction_ss_sLcR::synapse0x2fa97f0() {
   return (neuron0x2f85660()*0.388928);
}

double NNfunction_ss_sLcR::synapse0x2fa9830() {
   return (neuron0x2f86030()*-2.90721);
}

double NNfunction_ss_sLcR::synapse0x2fa92c0() {
   return (neuron0x2f87e40()*0.106154);
}

double NNfunction_ss_sLcR::synapse0x2fa9300() {
   return (neuron0x2f88120()*1.0721);
}

double NNfunction_ss_sLcR::synapse0x2fa9980() {
   return (neuron0x2f88af0()*1.63912);
}

double NNfunction_ss_sLcR::synapse0x2fa99c0() {
   return (neuron0x2f894c0()*1.17732);
}

double NNfunction_ss_sLcR::synapse0x2fa9a00() {
   return (neuron0x2f89e90()*2.21003);
}

double NNfunction_ss_sLcR::synapse0x2fa9a40() {
   return (neuron0x2f8a860()*-2.18917);
}

double NNfunction_ss_sLcR::synapse0x2fa9a80() {
   return (neuron0x2f833b0()*-1.96917);
}

double NNfunction_ss_sLcR::synapse0x2fa9ac0() {
   return (neuron0x2f83d80()*1.60449);
}

double NNfunction_ss_sLcR::synapse0x2fa9b00() {
   return (neuron0x2f8d5f0()*-1.00224);
}

double NNfunction_ss_sLcR::synapse0x2fa9b40() {
   return (neuron0x2f8dfc0()*2.13162);
}

double NNfunction_ss_sLcR::synapse0x2fa9b80() {
   return (neuron0x2f8e990()*4.81526);
}

double NNfunction_ss_sLcR::synapse0x2fa9bc0() {
   return (neuron0x2f8f360()*1.82026);
}

double NNfunction_ss_sLcR::synapse0x2fa9c00() {
   return (neuron0x2f8fd30()*2.0128);
}

double NNfunction_ss_sLcR::synapse0x2fa9c40() {
   return (neuron0x2f90700()*-2.84722);
}

double NNfunction_ss_sLcR::synapse0x2fa9c80() {
   return (neuron0x2f910d0()*1.2835);
}

double NNfunction_ss_sLcR::synapse0x2fa9cc0() {
   return (neuron0x2f91aa0()*2.63081);
}

double NNfunction_ss_sLcR::synapse0x2fa9870() {
   return (neuron0x2f87b30()*-3.33076);
}

double NNfunction_ss_sLcR::synapse0x2fa98b0() {
   return (neuron0x2f94680()*2.89495);
}

double NNfunction_ss_sLcR::synapse0x2fa98f0() {
   return (neuron0x2f95050()*3.95431);
}

double NNfunction_ss_sLcR::synapse0x2fa9930() {
   return (neuron0x2f95a20()*2.45058);
}

double NNfunction_ss_sLcR::synapse0x2fa9f10() {
   return (neuron0x2f963f0()*-0.885205);
}

double NNfunction_ss_sLcR::synapse0x2fa9f50() {
   return (neuron0x2f96dc0()*0.11494);
}

double NNfunction_ss_sLcR::synapse0x2fa9f90() {
   return (neuron0x2f97790()*2.37739);
}

double NNfunction_ss_sLcR::synapse0x2fa9fd0() {
   return (neuron0x2f98160()*-1.52594);
}

double NNfunction_ss_sLcR::synapse0x2faa010() {
   return (neuron0x2f98b30()*3.15552);
}

double NNfunction_ss_sLcR::synapse0x2faa050() {
   return (neuron0x2f99710()*1.18276);
}

double NNfunction_ss_sLcR::synapse0x2faa090() {
   return (neuron0x2f9a0e0()*3.13764);
}

double NNfunction_ss_sLcR::synapse0x2faa0d0() {
   return (neuron0x2f8af60()*1.67054);
}

double NNfunction_ss_sLcR::synapse0x2faa110() {
   return (neuron0x2f8b930()*0.267463);
}

double NNfunction_ss_sLcR::synapse0x2faa150() {
   return (neuron0x2f8c300()*-2.00813);
}

double NNfunction_ss_sLcR::synapse0x2faa190() {
   return (neuron0x2f9e940()*-4.34926);
}

double NNfunction_ss_sLcR::synapse0x2faa1d0() {
   return (neuron0x2f9f1f0()*-2.17682);
}

double NNfunction_ss_sLcR::synapse0x2faa210() {
   return (neuron0x2f9fbc0()*-1.16887);
}

double NNfunction_ss_sLcR::synapse0x2faa250() {
   return (neuron0x2fa0590()*-1.10717);
}

double NNfunction_ss_sLcR::synapse0x2faa5d0() {
   return (neuron0x2f7c510()*0.208983);
}

double NNfunction_ss_sLcR::synapse0x2faa610() {
   return (neuron0x2f7ce20()*1.84976);
}

double NNfunction_ss_sLcR::synapse0x2faa650() {
   return (neuron0x2f7d900()*1.41191);
}

double NNfunction_ss_sLcR::synapse0x2faa690() {
   return (neuron0x2d37190()*-0.374271);
}

double NNfunction_ss_sLcR::synapse0x2faa6d0() {
   return (neuron0x2f7e720()*0.641116);
}

double NNfunction_ss_sLcR::synapse0x2faa710() {
   return (neuron0x2f7f0f0()*1.15222);
}

double NNfunction_ss_sLcR::synapse0x2faa750() {
   return (neuron0x2f7fec0()*1.11985);
}

double NNfunction_ss_sLcR::synapse0x2faa790() {
   return (neuron0x2f80890()*-0.434139);
}

double NNfunction_ss_sLcR::synapse0x2faa7d0() {
   return (neuron0x2f81260()*0.0259207);
}

double NNfunction_ss_sLcR::synapse0x2faa810() {
   return (neuron0x2f81d40()*1.51497);
}

double NNfunction_ss_sLcR::synapse0x2faa850() {
   return (neuron0x2f82710()*0.601049);
}

double NNfunction_ss_sLcR::synapse0x2faa890() {
   return (neuron0x2f7f7f0()*1.03603);
}

double NNfunction_ss_sLcR::synapse0x2faa8d0() {
   return (neuron0x2f842c0()*0.506168);
}

double NNfunction_ss_sLcR::synapse0x2faa910() {
   return (neuron0x2f84c90()*-1.54411);
}

double NNfunction_ss_sLcR::synapse0x2faa950() {
   return (neuron0x2f85660()*-1.23092);
}

double NNfunction_ss_sLcR::synapse0x2faa990() {
   return (neuron0x2f86030()*-0.472963);
}

double NNfunction_ss_sLcR::synapse0x2faa420() {
   return (neuron0x2f87e40()*1.90767);
}

double NNfunction_ss_sLcR::synapse0x2faa460() {
   return (neuron0x2f88120()*0.446451);
}

double NNfunction_ss_sLcR::synapse0x2faaae0() {
   return (neuron0x2f88af0()*-1.81079);
}

double NNfunction_ss_sLcR::synapse0x2faab20() {
   return (neuron0x2f894c0()*-0.476695);
}

double NNfunction_ss_sLcR::synapse0x2faab60() {
   return (neuron0x2f89e90()*0.439096);
}

double NNfunction_ss_sLcR::synapse0x2faaba0() {
   return (neuron0x2f8a860()*-0.378532);
}

double NNfunction_ss_sLcR::synapse0x2faabe0() {
   return (neuron0x2f833b0()*-2.62271);
}

double NNfunction_ss_sLcR::synapse0x2faac20() {
   return (neuron0x2f83d80()*0.330772);
}

double NNfunction_ss_sLcR::synapse0x2faac60() {
   return (neuron0x2f8d5f0()*1.24631);
}

double NNfunction_ss_sLcR::synapse0x2faaca0() {
   return (neuron0x2f8dfc0()*0.293566);
}

double NNfunction_ss_sLcR::synapse0x2faace0() {
   return (neuron0x2f8e990()*1.97867);
}

double NNfunction_ss_sLcR::synapse0x2faad20() {
   return (neuron0x2f8f360()*-1.06706);
}

double NNfunction_ss_sLcR::synapse0x2faad60() {
   return (neuron0x2f8fd30()*-0.82647);
}

double NNfunction_ss_sLcR::synapse0x2faada0() {
   return (neuron0x2f90700()*-0.29908);
}

double NNfunction_ss_sLcR::synapse0x2faade0() {
   return (neuron0x2f910d0()*-0.555229);
}

double NNfunction_ss_sLcR::synapse0x2faae20() {
   return (neuron0x2f91aa0()*0.215854);
}

double NNfunction_ss_sLcR::synapse0x2faa9d0() {
   return (neuron0x2f87b30()*-0.126767);
}

double NNfunction_ss_sLcR::synapse0x2faaa10() {
   return (neuron0x2f94680()*0.360945);
}

double NNfunction_ss_sLcR::synapse0x2faaa50() {
   return (neuron0x2f95050()*-0.876503);
}

double NNfunction_ss_sLcR::synapse0x2faaa90() {
   return (neuron0x2f95a20()*0.191371);
}

double NNfunction_ss_sLcR::synapse0x2fab070() {
   return (neuron0x2f963f0()*-2.0403);
}

double NNfunction_ss_sLcR::synapse0x2fab0b0() {
   return (neuron0x2f96dc0()*-6.92761);
}

double NNfunction_ss_sLcR::synapse0x2fab0f0() {
   return (neuron0x2f97790()*0.323204);
}

double NNfunction_ss_sLcR::synapse0x2fab130() {
   return (neuron0x2f98160()*-0.327398);
}

double NNfunction_ss_sLcR::synapse0x2fab170() {
   return (neuron0x2f98b30()*-0.142355);
}

double NNfunction_ss_sLcR::synapse0x2fab1b0() {
   return (neuron0x2f99710()*0.691782);
}

double NNfunction_ss_sLcR::synapse0x2fab1f0() {
   return (neuron0x2f9a0e0()*0.111603);
}

double NNfunction_ss_sLcR::synapse0x2fab230() {
   return (neuron0x2f8af60()*0.152928);
}

double NNfunction_ss_sLcR::synapse0x2fab270() {
   return (neuron0x2f8b930()*0.95747);
}

double NNfunction_ss_sLcR::synapse0x2fab2b0() {
   return (neuron0x2f8c300()*-3.57322);
}

double NNfunction_ss_sLcR::synapse0x2fab2f0() {
   return (neuron0x2f9e940()*1.26203);
}

double NNfunction_ss_sLcR::synapse0x2fab330() {
   return (neuron0x2f9f1f0()*0.718048);
}

double NNfunction_ss_sLcR::synapse0x2fab370() {
   return (neuron0x2f9fbc0()*-1.31056);
}

double NNfunction_ss_sLcR::synapse0x2fab3b0() {
   return (neuron0x2fa0590()*-1.58104);
}

double NNfunction_ss_sLcR::synapse0x2f7c4d0() {
   return (neuron0x2fa7790()*-7.6883);
}

double NNfunction_ss_sLcR::synapse0x2fab610() {
   return (neuron0x2fa7b30()*-2.2688);
}

double NNfunction_ss_sLcR::synapse0x2fab650() {
   return (neuron0x2fa7fd0()*-6.1499);
}

double NNfunction_ss_sLcR::synapse0x2fab690() {
   return (neuron0x2fa9130()*-5.33419);
}

double NNfunction_ss_sLcR::synapse0x2fab6d0() {
   return (neuron0x2faa290()*-7.18487);
}

