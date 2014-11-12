#include "NNfunction_ng_chi03.h"
#include <cmath>

double NNfunction_ng_chi03::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.0936)/15.1051;
   input1 = (in1 - 8.59789)/960.515;
   input2 = (in2 - 488.629)/553.674;
   input3 = (in3 - 96.283)/679.636;
   input4 = (in4 - 920.978)/843.302;
   input5 = (in5 - 852.008)/864.008;
   input6 = (in6 - 858.728)/867.422;
   input7 = (in7 - 851.51)/845.919;
   input8 = (in8 - 862.489)/880.934;
   input9 = (in9 - 852.044)/867.255;
   input10 = (in10 - 873.173)/860.908;
   input11 = (in11 - 686.577)/713.625;
   input12 = (in12 - 749.168)/774.513;
   input13 = (in13 - 535.187)/474.331;
   input14 = (in14 - 737.751)/729.218;
   input15 = (in15 - 760.011)/747.117;
   input16 = (in16 - 539.942)/508.029;
   input17 = (in17 - 771.066)/799.897;
   input18 = (in18 - 773.32)/803.562;
   input19 = (in19 - 769.762)/761.701;
   input20 = (in20 - -81.2194)/448.219;
   input21 = (in21 - -108.572)/1003.04;
   input22 = (in22 - 4.02623)/1042.26;
   input23 = (in23 - -38.4417)/266.77;
   switch(index) {
     case 0:
         return neuron0x22653f0();
     default:
         return 0.;
   }
}

double NNfunction_ng_chi03::Value(int index, double* input) {
   input0 = (input[0] - 24.0936)/15.1051;
   input1 = (input[1] - 8.59789)/960.515;
   input2 = (input[2] - 488.629)/553.674;
   input3 = (input[3] - 96.283)/679.636;
   input4 = (input[4] - 920.978)/843.302;
   input5 = (input[5] - 852.008)/864.008;
   input6 = (input[6] - 858.728)/867.422;
   input7 = (input[7] - 851.51)/845.919;
   input8 = (input[8] - 862.489)/880.934;
   input9 = (input[9] - 852.044)/867.255;
   input10 = (input[10] - 873.173)/860.908;
   input11 = (input[11] - 686.577)/713.625;
   input12 = (input[12] - 749.168)/774.513;
   input13 = (input[13] - 535.187)/474.331;
   input14 = (input[14] - 737.751)/729.218;
   input15 = (input[15] - 760.011)/747.117;
   input16 = (input[16] - 539.942)/508.029;
   input17 = (input[17] - 771.066)/799.897;
   input18 = (input[18] - 773.32)/803.562;
   input19 = (input[19] - 769.762)/761.701;
   input20 = (input[20] - -81.2194)/448.219;
   input21 = (input[21] - -108.572)/1003.04;
   input22 = (input[22] - 4.02623)/1042.26;
   input23 = (input[23] - -38.4417)/266.77;
   switch(index) {
     case 0:
         return neuron0x22653f0();
     default:
         return 0.;
   }
}

double NNfunction_ng_chi03::neuron0x2230460() {
   return input0;
}

double NNfunction_ng_chi03::neuron0x2230710() {
   return input1;
}

double NNfunction_ng_chi03::neuron0x2230a50() {
   return input2;
}

double NNfunction_ng_chi03::neuron0x2230d90() {
   return input3;
}

double NNfunction_ng_chi03::neuron0x22310d0() {
   return input4;
}

double NNfunction_ng_chi03::neuron0x2231410() {
   return input5;
}

double NNfunction_ng_chi03::neuron0x2231750() {
   return input6;
}

double NNfunction_ng_chi03::neuron0x2231a90() {
   return input7;
}

double NNfunction_ng_chi03::neuron0x2231dd0() {
   return input8;
}

double NNfunction_ng_chi03::neuron0x2232110() {
   return input9;
}

double NNfunction_ng_chi03::neuron0x2232450() {
   return input10;
}

double NNfunction_ng_chi03::neuron0x2232790() {
   return input11;
}

double NNfunction_ng_chi03::neuron0x2232ad0() {
   return input12;
}

double NNfunction_ng_chi03::neuron0x2232e10() {
   return input13;
}

double NNfunction_ng_chi03::neuron0x2233150() {
   return input14;
}

double NNfunction_ng_chi03::neuron0x2233490() {
   return input15;
}

double NNfunction_ng_chi03::neuron0x22337d0() {
   return input16;
}

double NNfunction_ng_chi03::neuron0x2233d30() {
   return input17;
}

double NNfunction_ng_chi03::neuron0x2234070() {
   return input18;
}

double NNfunction_ng_chi03::neuron0x22343b0() {
   return input19;
}

double NNfunction_ng_chi03::neuron0x22346f0() {
   return input20;
}

double NNfunction_ng_chi03::neuron0x2234a30() {
   return input21;
}

double NNfunction_ng_chi03::neuron0x2234d70() {
   return input22;
}

double NNfunction_ng_chi03::neuron0x22350b0() {
   return input23;
}

double NNfunction_ng_chi03::input0x2235520() {
   double input = -2.06745;
   input += synapse0x2235860();
   input += synapse0x22358a0();
   input += synapse0x22358e0();
   input += synapse0x2235920();
   input += synapse0x2235960();
   input += synapse0x22359a0();
   input += synapse0x22359e0();
   input += synapse0x2235a20();
   input += synapse0x2235a60();
   input += synapse0x2235aa0();
   input += synapse0x2235ae0();
   input += synapse0x2235b20();
   input += synapse0x2235b60();
   input += synapse0x2235ba0();
   input += synapse0x2235be0();
   input += synapse0x2235c20();
   input += synapse0x22356b0();
   input += synapse0x22356f0();
   input += synapse0x1fec7a0();
   input += synapse0x1fec7e0();
   input += synapse0x2235c60();
   input += synapse0x2235ca0();
   input += synapse0x2235ce0();
   input += synapse0x2235d20();
   return input;
}

double NNfunction_ng_chi03::neuron0x2235520() {
   double input = input0x2235520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2235d60() {
   double input = 0.375145;
   input += synapse0x22360a0();
   input += synapse0x22360e0();
   input += synapse0x2236120();
   input += synapse0x2236160();
   input += synapse0x22361a0();
   input += synapse0x22361e0();
   input += synapse0x2236220();
   input += synapse0x2236260();
   input += synapse0x22362a0();
   input += synapse0x1fec5f0();
   input += synapse0x1fec630();
   input += synapse0x1fec670();
   input += synapse0x1fec6b0();
   input += synapse0x22364f0();
   input += synapse0x2236530();
   input += synapse0x2236570();
   input += synapse0x2235ef0();
   input += synapse0x2235f30();
   input += synapse0x22366c0();
   input += synapse0x2236700();
   input += synapse0x2236740();
   input += synapse0x2236780();
   input += synapse0x22367c0();
   input += synapse0x2236800();
   return input;
}

double NNfunction_ng_chi03::neuron0x2235d60() {
   double input = input0x2235d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2236840() {
   double input = -0.71739;
   input += synapse0x2236b80();
   input += synapse0x2236bc0();
   input += synapse0x2236c00();
   input += synapse0x2236c40();
   input += synapse0x2236c80();
   input += synapse0x2236cc0();
   input += synapse0x2236d00();
   input += synapse0x2236d40();
   input += synapse0x2236d80();
   input += synapse0x2236dc0();
   input += synapse0x2236e00();
   input += synapse0x2236e40();
   input += synapse0x2236e80();
   input += synapse0x2236ec0();
   input += synapse0x2236f00();
   input += synapse0x2236f40();
   input += synapse0x22369d0();
   input += synapse0x2236a10();
   input += synapse0x1ffa500();
   input += synapse0x1ffa540();
   input += synapse0x2238e70();
   input += synapse0x2238eb0();
   input += synapse0x22301a0();
   input += synapse0x22301e0();
   return input;
}

double NNfunction_ng_chi03::neuron0x2236840() {
   double input = input0x2236840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x1ffac60() {
   double input = 3.21881;
   input += synapse0x1ffadf0();
   input += synapse0x2236400();
   input += synapse0x2236440();
   input += synapse0x2236480();
   input += synapse0x2237090();
   input += synapse0x22370d0();
   input += synapse0x2237110();
   input += synapse0x2237150();
   input += synapse0x2237190();
   input += synapse0x22371d0();
   input += synapse0x2237210();
   input += synapse0x2237250();
   input += synapse0x2237290();
   input += synapse0x22372d0();
   input += synapse0x2237310();
   input += synapse0x2237350();
   input += synapse0x2230220();
   input += synapse0x2230260();
   input += synapse0x22374a0();
   input += synapse0x22374e0();
   input += synapse0x2237520();
   input += synapse0x2237560();
   input += synapse0x22375a0();
   input += synapse0x22375e0();
   return input;
}

double NNfunction_ng_chi03::neuron0x1ffac60() {
   double input = input0x1ffac60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2237620() {
   double input = -0.826623;
   input += synapse0x2237960();
   input += synapse0x22379a0();
   input += synapse0x22379e0();
   input += synapse0x2237a20();
   input += synapse0x2237a60();
   input += synapse0x2237aa0();
   input += synapse0x2237ae0();
   input += synapse0x2237b20();
   input += synapse0x2237b60();
   input += synapse0x2237ba0();
   input += synapse0x2237be0();
   input += synapse0x2237c20();
   input += synapse0x2237c60();
   input += synapse0x2237ca0();
   input += synapse0x2237ce0();
   input += synapse0x2237d20();
   input += synapse0x2237e70();
   input += synapse0x22377b0();
   input += synapse0x22377f0();
   input += synapse0x2238fb0();
   input += synapse0x2238ff0();
   input += synapse0x2239030();
   input += synapse0x2239070();
   input += synapse0x22390b0();
   return input;
}

double NNfunction_ng_chi03::neuron0x2237620() {
   double input = input0x2237620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x22390f0() {
   double input = -2.97439;
   input += synapse0x2239430();
   input += synapse0x2239470();
   input += synapse0x22394b0();
   input += synapse0x22394f0();
   input += synapse0x2239530();
   input += synapse0x2239570();
   input += synapse0x22395b0();
   input += synapse0x22395f0();
   input += synapse0x2239630();
   input += synapse0x1ffa850();
   input += synapse0x1ffa890();
   input += synapse0x1ffa8d0();
   input += synapse0x1ffa910();
   input += synapse0x1ffa950();
   input += synapse0x1ffa990();
   input += synapse0x1ffa9d0();
   input += synapse0x2239280();
   input += synapse0x22392c0();
   input += synapse0x1ffab20();
   input += synapse0x1ffab60();
   input += synapse0x1ffaba0();
   input += synapse0x1ffabe0();
   input += synapse0x1ffac20();
   input += synapse0x2239e80();
   return input;
}

double NNfunction_ng_chi03::neuron0x22390f0() {
   double input = input0x22390f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2239ec0() {
   double input = -0.366742;
   input += synapse0x223a200();
   input += synapse0x223a240();
   input += synapse0x223a280();
   input += synapse0x223a2c0();
   input += synapse0x223a300();
   input += synapse0x223a340();
   input += synapse0x223a380();
   input += synapse0x223a3c0();
   input += synapse0x223a400();
   input += synapse0x223a440();
   input += synapse0x223a480();
   input += synapse0x223a4c0();
   input += synapse0x223a500();
   input += synapse0x223a540();
   input += synapse0x223a580();
   input += synapse0x223a5c0();
   input += synapse0x223a050();
   input += synapse0x223a090();
   input += synapse0x223a710();
   input += synapse0x223a750();
   input += synapse0x223a790();
   input += synapse0x223a7d0();
   input += synapse0x223a810();
   input += synapse0x223a850();
   return input;
}

double NNfunction_ng_chi03::neuron0x2239ec0() {
   double input = input0x2239ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x223a890() {
   double input = 0.0981253;
   input += synapse0x223abd0();
   input += synapse0x223ac10();
   input += synapse0x223ac50();
   input += synapse0x223ac90();
   input += synapse0x223acd0();
   input += synapse0x223ad10();
   input += synapse0x223ad50();
   input += synapse0x223ad90();
   input += synapse0x223add0();
   input += synapse0x223ae10();
   input += synapse0x223ae50();
   input += synapse0x223ae90();
   input += synapse0x223aed0();
   input += synapse0x223af10();
   input += synapse0x223af50();
   input += synapse0x223af90();
   input += synapse0x223aa20();
   input += synapse0x223aa60();
   input += synapse0x223b0e0();
   input += synapse0x223b120();
   input += synapse0x223b160();
   input += synapse0x223b1a0();
   input += synapse0x223b1e0();
   input += synapse0x223b220();
   return input;
}

double NNfunction_ng_chi03::neuron0x223a890() {
   double input = input0x223a890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x223b260() {
   double input = 2.01773;
   input += synapse0x2233c20();
   input += synapse0x2233c60();
   input += synapse0x2233ca0();
   input += synapse0x2233ce0();
   input += synapse0x223b7b0();
   input += synapse0x223b7f0();
   input += synapse0x223b830();
   input += synapse0x223b870();
   input += synapse0x223b8b0();
   input += synapse0x223b8f0();
   input += synapse0x223b930();
   input += synapse0x223b970();
   input += synapse0x223b9b0();
   input += synapse0x223b9f0();
   input += synapse0x223ba30();
   input += synapse0x223ba70();
   input += synapse0x223b3f0();
   input += synapse0x223b430();
   input += synapse0x223bbc0();
   input += synapse0x223bc00();
   input += synapse0x223bc40();
   input += synapse0x223bc80();
   input += synapse0x223bcc0();
   input += synapse0x223bd00();
   return input;
}

double NNfunction_ng_chi03::neuron0x223b260() {
   double input = input0x223b260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x223bd40() {
   double input = -0.509918;
   input += synapse0x223c080();
   input += synapse0x223c0c0();
   input += synapse0x223c100();
   input += synapse0x223c140();
   input += synapse0x223c180();
   input += synapse0x223c1c0();
   input += synapse0x223c200();
   input += synapse0x223c240();
   input += synapse0x223c280();
   input += synapse0x223c2c0();
   input += synapse0x223c300();
   input += synapse0x223c340();
   input += synapse0x223c380();
   input += synapse0x223c3c0();
   input += synapse0x223c400();
   input += synapse0x223c440();
   input += synapse0x223bed0();
   input += synapse0x223bf10();
   input += synapse0x223c590();
   input += synapse0x223c5d0();
   input += synapse0x223c610();
   input += synapse0x223c650();
   input += synapse0x223c690();
   input += synapse0x223c6d0();
   return input;
}

double NNfunction_ng_chi03::neuron0x223bd40() {
   double input = input0x223bd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x223c710() {
   double input = -1.14686;
   input += synapse0x223ca50();
   input += synapse0x223ca90();
   input += synapse0x223cad0();
   input += synapse0x223cb10();
   input += synapse0x223cb50();
   input += synapse0x223cb90();
   input += synapse0x223cbd0();
   input += synapse0x223cc10();
   input += synapse0x223cc50();
   input += synapse0x223cc90();
   input += synapse0x223ccd0();
   input += synapse0x223cd10();
   input += synapse0x223cd50();
   input += synapse0x223cd90();
   input += synapse0x223cdd0();
   input += synapse0x223ce10();
   input += synapse0x223c8a0();
   input += synapse0x223c8e0();
   input += synapse0x2239670();
   input += synapse0x22396b0();
   input += synapse0x22396f0();
   input += synapse0x2239730();
   input += synapse0x2239770();
   input += synapse0x22397b0();
   return input;
}

double NNfunction_ng_chi03::neuron0x223c710() {
   double input = input0x223c710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x22397f0() {
   double input = -0.563938;
   input += synapse0x2239b30();
   input += synapse0x2239b70();
   input += synapse0x2239bb0();
   input += synapse0x2239bf0();
   input += synapse0x2239c30();
   input += synapse0x2239c70();
   input += synapse0x2239cb0();
   input += synapse0x2239cf0();
   input += synapse0x2239d30();
   input += synapse0x2239d70();
   input += synapse0x2239db0();
   input += synapse0x2239df0();
   input += synapse0x2239e30();
   input += synapse0x223df70();
   input += synapse0x223dfb0();
   input += synapse0x223dff0();
   input += synapse0x2239980();
   input += synapse0x22399c0();
   input += synapse0x223e140();
   input += synapse0x223e180();
   input += synapse0x223e1c0();
   input += synapse0x223e200();
   input += synapse0x223e240();
   input += synapse0x223e280();
   return input;
}

double NNfunction_ng_chi03::neuron0x22397f0() {
   double input = input0x22397f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x223e2c0() {
   double input = -4.42612;
   input += synapse0x223e600();
   input += synapse0x223e640();
   input += synapse0x223e680();
   input += synapse0x223e6c0();
   input += synapse0x223e700();
   input += synapse0x223e740();
   input += synapse0x223e780();
   input += synapse0x223e7c0();
   input += synapse0x223e800();
   input += synapse0x223e840();
   input += synapse0x223e880();
   input += synapse0x223e8c0();
   input += synapse0x223e900();
   input += synapse0x223e940();
   input += synapse0x223e980();
   input += synapse0x223e9c0();
   input += synapse0x223e450();
   input += synapse0x223e490();
   input += synapse0x223eb10();
   input += synapse0x223eb50();
   input += synapse0x223eb90();
   input += synapse0x223ebd0();
   input += synapse0x223ec10();
   input += synapse0x223ec50();
   return input;
}

double NNfunction_ng_chi03::neuron0x223e2c0() {
   double input = input0x223e2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x223ec90() {
   double input = -4.25274;
   input += synapse0x223efd0();
   input += synapse0x223f010();
   input += synapse0x223f050();
   input += synapse0x223f090();
   input += synapse0x223f0d0();
   input += synapse0x223f110();
   input += synapse0x223f150();
   input += synapse0x223f190();
   input += synapse0x223f1d0();
   input += synapse0x223f210();
   input += synapse0x223f250();
   input += synapse0x223f290();
   input += synapse0x223f2d0();
   input += synapse0x223f310();
   input += synapse0x223f350();
   input += synapse0x223f390();
   input += synapse0x223ee20();
   input += synapse0x223ee60();
   input += synapse0x223f4e0();
   input += synapse0x223f520();
   input += synapse0x223f560();
   input += synapse0x223f5a0();
   input += synapse0x223f5e0();
   input += synapse0x223f620();
   return input;
}

double NNfunction_ng_chi03::neuron0x223ec90() {
   double input = input0x223ec90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x223f660() {
   double input = 0.0957352;
   input += synapse0x223f9a0();
   input += synapse0x223f9e0();
   input += synapse0x223fa20();
   input += synapse0x223fa60();
   input += synapse0x223faa0();
   input += synapse0x223fae0();
   input += synapse0x223fb20();
   input += synapse0x223fb60();
   input += synapse0x223fba0();
   input += synapse0x223fbe0();
   input += synapse0x223fc20();
   input += synapse0x223fc60();
   input += synapse0x223fca0();
   input += synapse0x223fce0();
   input += synapse0x223fd20();
   input += synapse0x223fd60();
   input += synapse0x223f7f0();
   input += synapse0x223f830();
   input += synapse0x223feb0();
   input += synapse0x223fef0();
   input += synapse0x223ff30();
   input += synapse0x223ff70();
   input += synapse0x223ffb0();
   input += synapse0x223fff0();
   return input;
}

double NNfunction_ng_chi03::neuron0x223f660() {
   double input = input0x223f660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2240030() {
   double input = 1.60905;
   input += synapse0x2240370();
   input += synapse0x22305f0();
   input += synapse0x2230630();
   input += synapse0x2230930();
   input += synapse0x2230970();
   input += synapse0x2230c70();
   input += synapse0x2230cb0();
   input += synapse0x2230fb0();
   input += synapse0x2230ff0();
   input += synapse0x22312f0();
   input += synapse0x2231330();
   input += synapse0x2231630();
   input += synapse0x2231670();
   input += synapse0x2231970();
   input += synapse0x22319b0();
   input += synapse0x2231cb0();
   input += synapse0x2231cf0();
   input += synapse0x2231ff0();
   input += synapse0x2232030();
   input += synapse0x2232330();
   input += synapse0x2232370();
   input += synapse0x2232670();
   input += synapse0x22326b0();
   input += synapse0x22329b0();
   return input;
}

double NNfunction_ng_chi03::neuron0x2240030() {
   double input = input0x2240030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2241e40() {
   double input = -2.15108;
   input += synapse0x22329f0();
   input += synapse0x22336b0();
   input += synapse0x22336f0();
   input += synapse0x22401c0();
   input += synapse0x2240200();
   input += synapse0x22339f0();
   input += synapse0x2233a30();
   input += synapse0x2233f50();
   input += synapse0x2233f90();
   input += synapse0x2234290();
   input += synapse0x22342d0();
   input += synapse0x22345d0();
   input += synapse0x2234610();
   input += synapse0x2234910();
   input += synapse0x2234950();
   input += synapse0x2234c50();
   input += synapse0x2234c90();
   input += synapse0x2234f90();
   input += synapse0x2234fd0();
   input += synapse0x22352d0();
   input += synapse0x2235310();
   input += synapse0x2232cf0();
   input += synapse0x2232d30();
   input += synapse0x22420e0();
   return input;
}

double NNfunction_ng_chi03::neuron0x2241e40() {
   double input = input0x2241e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2242120() {
   double input = -0.869895;
   input += synapse0x2242460();
   input += synapse0x22424a0();
   input += synapse0x22424e0();
   input += synapse0x2242520();
   input += synapse0x2242560();
   input += synapse0x22425a0();
   input += synapse0x22425e0();
   input += synapse0x2242620();
   input += synapse0x2242660();
   input += synapse0x22426a0();
   input += synapse0x22426e0();
   input += synapse0x2242720();
   input += synapse0x2242760();
   input += synapse0x22427a0();
   input += synapse0x22427e0();
   input += synapse0x2242820();
   input += synapse0x22422b0();
   input += synapse0x22422f0();
   input += synapse0x2242970();
   input += synapse0x22429b0();
   input += synapse0x22429f0();
   input += synapse0x2242a30();
   input += synapse0x2242a70();
   input += synapse0x2242ab0();
   return input;
}

double NNfunction_ng_chi03::neuron0x2242120() {
   double input = input0x2242120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2242af0() {
   double input = 0.496608;
   input += synapse0x2242e30();
   input += synapse0x2242e70();
   input += synapse0x2242eb0();
   input += synapse0x2242ef0();
   input += synapse0x2242f30();
   input += synapse0x2242f70();
   input += synapse0x2242fb0();
   input += synapse0x2242ff0();
   input += synapse0x2243030();
   input += synapse0x2243070();
   input += synapse0x22430b0();
   input += synapse0x22430f0();
   input += synapse0x2243130();
   input += synapse0x2243170();
   input += synapse0x22431b0();
   input += synapse0x22431f0();
   input += synapse0x2242c80();
   input += synapse0x2242cc0();
   input += synapse0x2243340();
   input += synapse0x2243380();
   input += synapse0x22433c0();
   input += synapse0x2243400();
   input += synapse0x2243440();
   input += synapse0x2243480();
   return input;
}

double NNfunction_ng_chi03::neuron0x2242af0() {
   double input = input0x2242af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x22434c0() {
   double input = -0.460715;
   input += synapse0x2243800();
   input += synapse0x2243840();
   input += synapse0x2243880();
   input += synapse0x22438c0();
   input += synapse0x2243900();
   input += synapse0x2243940();
   input += synapse0x2243980();
   input += synapse0x22439c0();
   input += synapse0x2243a00();
   input += synapse0x2243a40();
   input += synapse0x2243a80();
   input += synapse0x2243ac0();
   input += synapse0x2243b00();
   input += synapse0x2243b40();
   input += synapse0x2243b80();
   input += synapse0x2243bc0();
   input += synapse0x2243650();
   input += synapse0x2243690();
   input += synapse0x2243d10();
   input += synapse0x2243d50();
   input += synapse0x2243d90();
   input += synapse0x2243dd0();
   input += synapse0x2243e10();
   input += synapse0x2243e50();
   return input;
}

double NNfunction_ng_chi03::neuron0x22434c0() {
   double input = input0x22434c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2243e90() {
   double input = 2.31252;
   input += synapse0x22441d0();
   input += synapse0x2244210();
   input += synapse0x2244250();
   input += synapse0x2244290();
   input += synapse0x22442d0();
   input += synapse0x2244310();
   input += synapse0x2244350();
   input += synapse0x2244390();
   input += synapse0x22443d0();
   input += synapse0x2244410();
   input += synapse0x2244450();
   input += synapse0x2244490();
   input += synapse0x22444d0();
   input += synapse0x2244510();
   input += synapse0x2244550();
   input += synapse0x2244590();
   input += synapse0x2244020();
   input += synapse0x2244060();
   input += synapse0x22446e0();
   input += synapse0x2244720();
   input += synapse0x2244760();
   input += synapse0x22447a0();
   input += synapse0x22447e0();
   input += synapse0x2244820();
   return input;
}

double NNfunction_ng_chi03::neuron0x2243e90() {
   double input = input0x2243e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2244860() {
   double input = -0.90969;
   input += synapse0x2244ba0();
   input += synapse0x2244be0();
   input += synapse0x2244c20();
   input += synapse0x2244c60();
   input += synapse0x2244ca0();
   input += synapse0x2244ce0();
   input += synapse0x2244d20();
   input += synapse0x2244d60();
   input += synapse0x2244da0();
   input += synapse0x223cf60();
   input += synapse0x223cfa0();
   input += synapse0x223cfe0();
   input += synapse0x223d020();
   input += synapse0x223d060();
   input += synapse0x223d0a0();
   input += synapse0x223d0e0();
   input += synapse0x22449f0();
   input += synapse0x2244a30();
   input += synapse0x223d230();
   input += synapse0x223d270();
   input += synapse0x223d2b0();
   input += synapse0x223d2f0();
   input += synapse0x223d330();
   input += synapse0x223d370();
   return input;
}

double NNfunction_ng_chi03::neuron0x2244860() {
   double input = input0x2244860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x223d3b0() {
   double input = 1.14523;
   input += synapse0x223d6f0();
   input += synapse0x223d730();
   input += synapse0x223d770();
   input += synapse0x223d7b0();
   input += synapse0x223d7f0();
   input += synapse0x223d830();
   input += synapse0x223d870();
   input += synapse0x223d8b0();
   input += synapse0x223d8f0();
   input += synapse0x223d930();
   input += synapse0x223d970();
   input += synapse0x223d9b0();
   input += synapse0x223d9f0();
   input += synapse0x223da30();
   input += synapse0x223da70();
   input += synapse0x223dab0();
   input += synapse0x223d540();
   input += synapse0x223d580();
   input += synapse0x223dc00();
   input += synapse0x223dc40();
   input += synapse0x223dc80();
   input += synapse0x223dcc0();
   input += synapse0x223dd00();
   input += synapse0x223dd40();
   return input;
}

double NNfunction_ng_chi03::neuron0x223d3b0() {
   double input = input0x223d3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x223dd80() {
   double input = -0.729197;
   input += synapse0x223df10();
   input += synapse0x2246fa0();
   input += synapse0x2246fe0();
   input += synapse0x2247020();
   input += synapse0x2247060();
   input += synapse0x22470a0();
   input += synapse0x22470e0();
   input += synapse0x2247120();
   input += synapse0x2247160();
   input += synapse0x22471a0();
   input += synapse0x22471e0();
   input += synapse0x2247220();
   input += synapse0x2247260();
   input += synapse0x22472a0();
   input += synapse0x22472e0();
   input += synapse0x2247320();
   input += synapse0x2246df0();
   input += synapse0x2246e30();
   input += synapse0x2247470();
   input += synapse0x22474b0();
   input += synapse0x22474f0();
   input += synapse0x2247530();
   input += synapse0x2247570();
   input += synapse0x22475b0();
   return input;
}

double NNfunction_ng_chi03::neuron0x223dd80() {
   double input = input0x223dd80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x22475f0() {
   double input = -3.68841;
   input += synapse0x2247930();
   input += synapse0x2247970();
   input += synapse0x22479b0();
   input += synapse0x22479f0();
   input += synapse0x2247a30();
   input += synapse0x2247a70();
   input += synapse0x2247ab0();
   input += synapse0x2247af0();
   input += synapse0x2247b30();
   input += synapse0x2247b70();
   input += synapse0x2247bb0();
   input += synapse0x2247bf0();
   input += synapse0x2247c30();
   input += synapse0x2247c70();
   input += synapse0x2247cb0();
   input += synapse0x2247cf0();
   input += synapse0x2247780();
   input += synapse0x22477c0();
   input += synapse0x2247e40();
   input += synapse0x2247e80();
   input += synapse0x2247ec0();
   input += synapse0x2247f00();
   input += synapse0x2247f40();
   input += synapse0x2247f80();
   return input;
}

double NNfunction_ng_chi03::neuron0x22475f0() {
   double input = input0x22475f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2247fc0() {
   double input = -0.122732;
   input += synapse0x2248300();
   input += synapse0x2248340();
   input += synapse0x2248380();
   input += synapse0x22483c0();
   input += synapse0x2248400();
   input += synapse0x2248440();
   input += synapse0x2248480();
   input += synapse0x22484c0();
   input += synapse0x2248500();
   input += synapse0x2248540();
   input += synapse0x2248580();
   input += synapse0x22485c0();
   input += synapse0x2248600();
   input += synapse0x2248640();
   input += synapse0x2248680();
   input += synapse0x22486c0();
   input += synapse0x2248150();
   input += synapse0x2248190();
   input += synapse0x2248810();
   input += synapse0x2248850();
   input += synapse0x2248890();
   input += synapse0x22488d0();
   input += synapse0x2248910();
   input += synapse0x2248950();
   return input;
}

double NNfunction_ng_chi03::neuron0x2247fc0() {
   double input = input0x2247fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2248990() {
   double input = 0.166253;
   input += synapse0x2248cd0();
   input += synapse0x2248d10();
   input += synapse0x2248d50();
   input += synapse0x2248d90();
   input += synapse0x2248dd0();
   input += synapse0x2248e10();
   input += synapse0x2248e50();
   input += synapse0x2248e90();
   input += synapse0x2248ed0();
   input += synapse0x2248f10();
   input += synapse0x2248f50();
   input += synapse0x2248f90();
   input += synapse0x2248fd0();
   input += synapse0x2249010();
   input += synapse0x2249050();
   input += synapse0x2249090();
   input += synapse0x2248b20();
   input += synapse0x2248b60();
   input += synapse0x22491e0();
   input += synapse0x2249220();
   input += synapse0x2249260();
   input += synapse0x22492a0();
   input += synapse0x22492e0();
   input += synapse0x2249320();
   return input;
}

double NNfunction_ng_chi03::neuron0x2248990() {
   double input = input0x2248990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2249360() {
   double input = -1.21428;
   input += synapse0x22496a0();
   input += synapse0x22496e0();
   input += synapse0x2249720();
   input += synapse0x2249760();
   input += synapse0x22497a0();
   input += synapse0x22497e0();
   input += synapse0x2249820();
   input += synapse0x2249860();
   input += synapse0x22498a0();
   input += synapse0x22498e0();
   input += synapse0x2249920();
   input += synapse0x2249960();
   input += synapse0x22499a0();
   input += synapse0x22499e0();
   input += synapse0x2249a20();
   input += synapse0x2249a60();
   input += synapse0x22494f0();
   input += synapse0x2249530();
   input += synapse0x2249bb0();
   input += synapse0x2249bf0();
   input += synapse0x2249c30();
   input += synapse0x2249c70();
   input += synapse0x2249cb0();
   input += synapse0x2249cf0();
   return input;
}

double NNfunction_ng_chi03::neuron0x2249360() {
   double input = input0x2249360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2249d30() {
   double input = -5.50603;
   input += synapse0x224a070();
   input += synapse0x224a0b0();
   input += synapse0x224a0f0();
   input += synapse0x224a130();
   input += synapse0x224a170();
   input += synapse0x224a1b0();
   input += synapse0x224a1f0();
   input += synapse0x224a230();
   input += synapse0x224a270();
   input += synapse0x224a2b0();
   input += synapse0x224a2f0();
   input += synapse0x224a330();
   input += synapse0x224a370();
   input += synapse0x224a3b0();
   input += synapse0x224a3f0();
   input += synapse0x224a430();
   input += synapse0x2249ec0();
   input += synapse0x2249f00();
   input += synapse0x224a580();
   input += synapse0x224a5c0();
   input += synapse0x224a600();
   input += synapse0x224a640();
   input += synapse0x224a680();
   input += synapse0x224a6c0();
   return input;
}

double NNfunction_ng_chi03::neuron0x2249d30() {
   double input = input0x2249d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x224a700() {
   double input = -1.0326;
   input += synapse0x224aa40();
   input += synapse0x224aa80();
   input += synapse0x224aac0();
   input += synapse0x224ab00();
   input += synapse0x224ab40();
   input += synapse0x224ab80();
   input += synapse0x224abc0();
   input += synapse0x224ac00();
   input += synapse0x224ac40();
   input += synapse0x224ac80();
   input += synapse0x224acc0();
   input += synapse0x224ad00();
   input += synapse0x224ad40();
   input += synapse0x224ad80();
   input += synapse0x224adc0();
   input += synapse0x224ae00();
   input += synapse0x224a890();
   input += synapse0x224a8d0();
   input += synapse0x224af50();
   input += synapse0x224af90();
   input += synapse0x224afd0();
   input += synapse0x224b010();
   input += synapse0x224b050();
   input += synapse0x224b090();
   return input;
}

double NNfunction_ng_chi03::neuron0x224a700() {
   double input = input0x224a700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x224b0d0() {
   double input = -2.65847;
   input += synapse0x224b410();
   input += synapse0x224b450();
   input += synapse0x224b490();
   input += synapse0x224b4d0();
   input += synapse0x224b510();
   input += synapse0x224b550();
   input += synapse0x224b590();
   input += synapse0x224b5d0();
   input += synapse0x224b610();
   input += synapse0x224b650();
   input += synapse0x224b690();
   input += synapse0x224b6d0();
   input += synapse0x224b710();
   input += synapse0x224b750();
   input += synapse0x224b790();
   input += synapse0x224b7d0();
   input += synapse0x224b260();
   input += synapse0x224b2a0();
   input += synapse0x224b920();
   input += synapse0x224b960();
   input += synapse0x224b9a0();
   input += synapse0x224b9e0();
   input += synapse0x224ba20();
   input += synapse0x224ba60();
   return input;
}

double NNfunction_ng_chi03::neuron0x224b0d0() {
   double input = input0x224b0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x224baa0() {
   double input = -1.07238;
   input += synapse0x224bde0();
   input += synapse0x22403b0();
   input += synapse0x22403f0();
   input += synapse0x2240430();
   input += synapse0x2240680();
   input += synapse0x22406c0();
   input += synapse0x2240700();
   input += synapse0x2240950();
   input += synapse0x2240990();
   input += synapse0x2240be0();
   input += synapse0x2240c20();
   input += synapse0x2240c60();
   input += synapse0x2240eb0();
   input += synapse0x2240ef0();
   input += synapse0x2241140();
   input += synapse0x2241180();
   input += synapse0x224bc30();
   input += synapse0x224bc70();
   input += synapse0x22412d0();
   input += synapse0x22417e0();
   input += synapse0x2241820();
   input += synapse0x2241860();
   input += synapse0x2241ab0();
   input += synapse0x2241af0();
   return input;
}

double NNfunction_ng_chi03::neuron0x224baa0() {
   double input = input0x224baa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2241b30() {
   double input = 1.9837;
   input += synapse0x22413a0();
   input += synapse0x22413e0();
   input += synapse0x2241420();
   input += synapse0x2241460();
   input += synapse0x2241de0();
   input += synapse0x224e130();
   input += synapse0x224e170();
   input += synapse0x224e1b0();
   input += synapse0x224e1f0();
   input += synapse0x224e230();
   input += synapse0x224e270();
   input += synapse0x224e2b0();
   input += synapse0x224e2f0();
   input += synapse0x224e330();
   input += synapse0x224e370();
   input += synapse0x224e3b0();
   input += synapse0x2241cc0();
   input += synapse0x2241d00();
   input += synapse0x224e500();
   input += synapse0x224e540();
   input += synapse0x224e580();
   input += synapse0x224e5c0();
   input += synapse0x224e600();
   input += synapse0x224e640();
   return input;
}

double NNfunction_ng_chi03::neuron0x2241b30() {
   double input = input0x2241b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x224e680() {
   double input = -5.96718;
   input += synapse0x224e9c0();
   input += synapse0x224ea00();
   input += synapse0x224ea40();
   input += synapse0x224ea80();
   input += synapse0x224eac0();
   input += synapse0x224eb00();
   input += synapse0x224eb40();
   input += synapse0x224eb80();
   input += synapse0x224ebc0();
   input += synapse0x224ec00();
   input += synapse0x224ec40();
   input += synapse0x224ec80();
   input += synapse0x224ecc0();
   input += synapse0x224ed00();
   input += synapse0x224ed40();
   input += synapse0x224ed80();
   input += synapse0x224e810();
   input += synapse0x224e850();
   input += synapse0x224eed0();
   input += synapse0x224ef10();
   input += synapse0x224ef50();
   input += synapse0x224ef90();
   input += synapse0x224efd0();
   input += synapse0x224f010();
   return input;
}

double NNfunction_ng_chi03::neuron0x224e680() {
   double input = input0x224e680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x224f050() {
   double input = -0.177869;
   input += synapse0x224f390();
   input += synapse0x224f3d0();
   input += synapse0x224f410();
   input += synapse0x224f450();
   input += synapse0x224f490();
   input += synapse0x224f4d0();
   input += synapse0x224f510();
   input += synapse0x224f550();
   input += synapse0x224f590();
   input += synapse0x224f5d0();
   input += synapse0x224f610();
   input += synapse0x224f650();
   input += synapse0x224f690();
   input += synapse0x224f6d0();
   input += synapse0x224f710();
   input += synapse0x224f750();
   input += synapse0x224f1e0();
   input += synapse0x224f220();
   input += synapse0x224f8a0();
   input += synapse0x224f8e0();
   input += synapse0x224f920();
   input += synapse0x224f960();
   input += synapse0x224f9a0();
   input += synapse0x224f9e0();
   return input;
}

double NNfunction_ng_chi03::neuron0x224f050() {
   double input = input0x224f050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x224fa20() {
   double input = -1.33473;
   input += synapse0x224fd60();
   input += synapse0x224fda0();
   input += synapse0x224fde0();
   input += synapse0x224fe20();
   input += synapse0x224fe60();
   input += synapse0x224fea0();
   input += synapse0x224fee0();
   input += synapse0x224ff20();
   input += synapse0x224ff60();
   input += synapse0x224ffa0();
   input += synapse0x224ffe0();
   input += synapse0x2250020();
   input += synapse0x2250060();
   input += synapse0x22500a0();
   input += synapse0x22500e0();
   input += synapse0x2250120();
   input += synapse0x224fbb0();
   input += synapse0x224fbf0();
   input += synapse0x2250270();
   input += synapse0x22502b0();
   input += synapse0x22502f0();
   input += synapse0x2250330();
   input += synapse0x2250370();
   input += synapse0x22503b0();
   return input;
}

double NNfunction_ng_chi03::neuron0x224fa20() {
   double input = input0x224fa20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x22503f0() {
   double input = -1.85549;
   input += synapse0x2250730();
   input += synapse0x2250770();
   input += synapse0x22507b0();
   input += synapse0x22507f0();
   input += synapse0x2250830();
   input += synapse0x2250870();
   input += synapse0x22508b0();
   input += synapse0x22508f0();
   input += synapse0x2250930();
   input += synapse0x2250970();
   input += synapse0x22509b0();
   input += synapse0x22509f0();
   input += synapse0x2250a30();
   input += synapse0x2250a70();
   input += synapse0x2250ab0();
   input += synapse0x2250af0();
   input += synapse0x2250580();
   input += synapse0x22505c0();
   input += synapse0x2250c40();
   input += synapse0x2250c80();
   input += synapse0x2250cc0();
   input += synapse0x2250d00();
   input += synapse0x2250d40();
   input += synapse0x2250d80();
   return input;
}

double NNfunction_ng_chi03::neuron0x22503f0() {
   double input = input0x22503f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2250dc0() {
   double input = -2.61238;
   input += synapse0x2251100();
   input += synapse0x2251140();
   input += synapse0x2251180();
   input += synapse0x22511c0();
   input += synapse0x2251200();
   input += synapse0x2251240();
   input += synapse0x2251280();
   input += synapse0x22512c0();
   input += synapse0x2251300();
   input += synapse0x2251340();
   input += synapse0x2251380();
   input += synapse0x22513c0();
   input += synapse0x2251400();
   input += synapse0x2251440();
   input += synapse0x2251480();
   input += synapse0x22514c0();
   input += synapse0x2250f50();
   input += synapse0x2250f90();
   input += synapse0x2251610();
   input += synapse0x2251650();
   input += synapse0x2251690();
   input += synapse0x22516d0();
   input += synapse0x2251710();
   input += synapse0x2251750();
   return input;
}

double NNfunction_ng_chi03::neuron0x2250dc0() {
   double input = input0x2250dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2251790() {
   double input = 0.0841282;
   input += synapse0x2251ad0();
   input += synapse0x2251b10();
   input += synapse0x2251b50();
   input += synapse0x2251b90();
   input += synapse0x2251bd0();
   input += synapse0x2251c10();
   input += synapse0x2251c50();
   input += synapse0x2251c90();
   input += synapse0x2251cd0();
   input += synapse0x2251d10();
   input += synapse0x2251d50();
   input += synapse0x2251d90();
   input += synapse0x2251dd0();
   input += synapse0x2251e10();
   input += synapse0x2251e50();
   input += synapse0x2251e90();
   input += synapse0x2251920();
   input += synapse0x2251960();
   input += synapse0x2251fe0();
   input += synapse0x2252020();
   input += synapse0x2252060();
   input += synapse0x22520a0();
   input += synapse0x22520e0();
   input += synapse0x2252120();
   return input;
}

double NNfunction_ng_chi03::neuron0x2251790() {
   double input = input0x2251790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2252160() {
   double input = 1.76446;
   input += synapse0x22524a0();
   input += synapse0x22524e0();
   input += synapse0x2252520();
   input += synapse0x2252560();
   input += synapse0x22525a0();
   input += synapse0x22525e0();
   input += synapse0x2252620();
   input += synapse0x2252660();
   input += synapse0x22526a0();
   input += synapse0x22526e0();
   input += synapse0x2252720();
   input += synapse0x2252760();
   input += synapse0x22527a0();
   input += synapse0x22527e0();
   input += synapse0x2252820();
   input += synapse0x2252860();
   input += synapse0x22522f0();
   input += synapse0x2252330();
   input += synapse0x22529b0();
   input += synapse0x22529f0();
   input += synapse0x2252a30();
   input += synapse0x2252a70();
   input += synapse0x2252ab0();
   input += synapse0x2252af0();
   return input;
}

double NNfunction_ng_chi03::neuron0x2252160() {
   double input = input0x2252160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2252b30() {
   double input = 0.803728;
   input += synapse0x223b5a0();
   input += synapse0x223b5e0();
   input += synapse0x223b620();
   input += synapse0x223b660();
   input += synapse0x223b6a0();
   input += synapse0x223b6e0();
   input += synapse0x223b720();
   input += synapse0x223b760();
   input += synapse0x2253280();
   input += synapse0x22532c0();
   input += synapse0x2253300();
   input += synapse0x2253340();
   input += synapse0x2253380();
   input += synapse0x22533c0();
   input += synapse0x2253400();
   input += synapse0x2253440();
   input += synapse0x2252cc0();
   input += synapse0x2252d00();
   input += synapse0x2253590();
   input += synapse0x22535d0();
   input += synapse0x2253610();
   input += synapse0x2253650();
   input += synapse0x2253690();
   input += synapse0x22536d0();
   return input;
}

double NNfunction_ng_chi03::neuron0x2252b30() {
   double input = input0x2252b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2253710() {
   double input = 0.650126;
   input += synapse0x2253a50();
   input += synapse0x2253a90();
   input += synapse0x2253ad0();
   input += synapse0x2253b10();
   input += synapse0x2253b50();
   input += synapse0x2253b90();
   input += synapse0x2253bd0();
   input += synapse0x2253c10();
   input += synapse0x2253c50();
   input += synapse0x2253c90();
   input += synapse0x2253cd0();
   input += synapse0x2253d10();
   input += synapse0x2253d50();
   input += synapse0x2253d90();
   input += synapse0x2253dd0();
   input += synapse0x2253e10();
   input += synapse0x22538a0();
   input += synapse0x22538e0();
   input += synapse0x2253f60();
   input += synapse0x2253fa0();
   input += synapse0x2253fe0();
   input += synapse0x2254020();
   input += synapse0x2254060();
   input += synapse0x22540a0();
   return input;
}

double NNfunction_ng_chi03::neuron0x2253710() {
   double input = input0x2253710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x22540e0() {
   double input = -1.50249;
   input += synapse0x2254420();
   input += synapse0x2254460();
   input += synapse0x22544a0();
   input += synapse0x22544e0();
   input += synapse0x2254520();
   input += synapse0x2254560();
   input += synapse0x22545a0();
   input += synapse0x22545e0();
   input += synapse0x2254620();
   input += synapse0x2254660();
   input += synapse0x22546a0();
   input += synapse0x22546e0();
   input += synapse0x2254720();
   input += synapse0x2254760();
   input += synapse0x22547a0();
   input += synapse0x22547e0();
   input += synapse0x2254270();
   input += synapse0x22542b0();
   input += synapse0x2244de0();
   input += synapse0x2244e20();
   input += synapse0x2244e60();
   input += synapse0x2244ea0();
   input += synapse0x2244ee0();
   input += synapse0x2244f20();
   return input;
}

double NNfunction_ng_chi03::neuron0x22540e0() {
   double input = input0x22540e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2244f60() {
   double input = -0.0765739;
   input += synapse0x22452a0();
   input += synapse0x22452e0();
   input += synapse0x2245320();
   input += synapse0x2245360();
   input += synapse0x22453a0();
   input += synapse0x22453e0();
   input += synapse0x2245420();
   input += synapse0x2245460();
   input += synapse0x22454a0();
   input += synapse0x22454e0();
   input += synapse0x2245520();
   input += synapse0x2245560();
   input += synapse0x22455a0();
   input += synapse0x22455e0();
   input += synapse0x2245620();
   input += synapse0x2245660();
   input += synapse0x22450f0();
   input += synapse0x2245130();
   input += synapse0x22457b0();
   input += synapse0x22457f0();
   input += synapse0x2245830();
   input += synapse0x2245870();
   input += synapse0x22458b0();
   input += synapse0x22458f0();
   return input;
}

double NNfunction_ng_chi03::neuron0x2244f60() {
   double input = input0x2244f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2245930() {
   double input = -0.33539;
   input += synapse0x2245c70();
   input += synapse0x2245cb0();
   input += synapse0x2245cf0();
   input += synapse0x2245d30();
   input += synapse0x2245d70();
   input += synapse0x2245db0();
   input += synapse0x2245df0();
   input += synapse0x2245e30();
   input += synapse0x2245e70();
   input += synapse0x2245eb0();
   input += synapse0x2245ef0();
   input += synapse0x2245f30();
   input += synapse0x2245f70();
   input += synapse0x2245fb0();
   input += synapse0x2245ff0();
   input += synapse0x2246030();
   input += synapse0x2245ac0();
   input += synapse0x2245b00();
   input += synapse0x2246180();
   input += synapse0x22461c0();
   input += synapse0x2246200();
   input += synapse0x2246240();
   input += synapse0x2246280();
   input += synapse0x22462c0();
   return input;
}

double NNfunction_ng_chi03::neuron0x2245930() {
   double input = input0x2245930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2246300() {
   double input = 0.432583;
   input += synapse0x2246640();
   input += synapse0x2246680();
   input += synapse0x22466c0();
   input += synapse0x2246700();
   input += synapse0x2246740();
   input += synapse0x2246780();
   input += synapse0x22467c0();
   input += synapse0x2246800();
   input += synapse0x2246840();
   input += synapse0x2246880();
   input += synapse0x22468c0();
   input += synapse0x2246900();
   input += synapse0x2246940();
   input += synapse0x2246980();
   input += synapse0x22469c0();
   input += synapse0x2246a00();
   input += synapse0x2246490();
   input += synapse0x22464d0();
   input += synapse0x2246b50();
   input += synapse0x2246b90();
   input += synapse0x2246bd0();
   input += synapse0x2246c10();
   input += synapse0x2246c50();
   input += synapse0x2246c90();
   return input;
}

double NNfunction_ng_chi03::neuron0x2246300() {
   double input = input0x2246300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2258940() {
   double input = 0.461677;
   input += synapse0x2258b60();
   input += synapse0x2258ba0();
   input += synapse0x2258be0();
   input += synapse0x2258c20();
   input += synapse0x2258c60();
   input += synapse0x2258ca0();
   input += synapse0x2258ce0();
   input += synapse0x2258d20();
   input += synapse0x2258d60();
   input += synapse0x2258da0();
   input += synapse0x2258de0();
   input += synapse0x2258e20();
   input += synapse0x2258e60();
   input += synapse0x2258ea0();
   input += synapse0x2258ee0();
   input += synapse0x2258f20();
   input += synapse0x2246cd0();
   input += synapse0x2246d10();
   input += synapse0x2259070();
   input += synapse0x22590b0();
   input += synapse0x22590f0();
   input += synapse0x2259130();
   input += synapse0x2259170();
   input += synapse0x22591b0();
   return input;
}

double NNfunction_ng_chi03::neuron0x2258940() {
   double input = input0x2258940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x22591f0() {
   double input = 0.247839;
   input += synapse0x2259530();
   input += synapse0x2259570();
   input += synapse0x22595b0();
   input += synapse0x22595f0();
   input += synapse0x2259630();
   input += synapse0x2259670();
   input += synapse0x22596b0();
   input += synapse0x22596f0();
   input += synapse0x2259730();
   input += synapse0x2259770();
   input += synapse0x22597b0();
   input += synapse0x22597f0();
   input += synapse0x2259830();
   input += synapse0x2259870();
   input += synapse0x22598b0();
   input += synapse0x22598f0();
   input += synapse0x2259380();
   input += synapse0x22593c0();
   input += synapse0x2259a40();
   input += synapse0x2259a80();
   input += synapse0x2259ac0();
   input += synapse0x2259b00();
   input += synapse0x2259b40();
   input += synapse0x2259b80();
   return input;
}

double NNfunction_ng_chi03::neuron0x22591f0() {
   double input = input0x22591f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2259bc0() {
   double input = 1.22175;
   input += synapse0x2259f00();
   input += synapse0x2259f40();
   input += synapse0x2259f80();
   input += synapse0x2259fc0();
   input += synapse0x225a000();
   input += synapse0x225a040();
   input += synapse0x225a080();
   input += synapse0x225a0c0();
   input += synapse0x225a100();
   input += synapse0x225a140();
   input += synapse0x225a180();
   input += synapse0x225a1c0();
   input += synapse0x225a200();
   input += synapse0x225a240();
   input += synapse0x225a280();
   input += synapse0x225a2c0();
   input += synapse0x2259d50();
   input += synapse0x2259d90();
   input += synapse0x225a410();
   input += synapse0x225a450();
   input += synapse0x225a490();
   input += synapse0x225a4d0();
   input += synapse0x225a510();
   input += synapse0x225a550();
   return input;
}

double NNfunction_ng_chi03::neuron0x2259bc0() {
   double input = input0x2259bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x225a590() {
   double input = 0.507581;
   input += synapse0x225a8d0();
   input += synapse0x225a910();
   input += synapse0x225a950();
   input += synapse0x225a990();
   input += synapse0x225a9d0();
   input += synapse0x225aa10();
   input += synapse0x225aa50();
   input += synapse0x225aa90();
   input += synapse0x225aad0();
   input += synapse0x225ab10();
   input += synapse0x225ab50();
   input += synapse0x225ab90();
   input += synapse0x225abd0();
   input += synapse0x225ac10();
   input += synapse0x225ac50();
   input += synapse0x225ac90();
   input += synapse0x225a720();
   input += synapse0x225a760();
   input += synapse0x225ade0();
   input += synapse0x225ae20();
   input += synapse0x225ae60();
   input += synapse0x225aea0();
   input += synapse0x225aee0();
   input += synapse0x225af20();
   return input;
}

double NNfunction_ng_chi03::neuron0x225a590() {
   double input = input0x225a590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2261790() {
   double input = -0.0524559;
   input += synapse0x2236370();
   input += synapse0x22363b0();
   input += synapse0x22378d0();
   input += synapse0x2237910();
   input += synapse0x22393a0();
   input += synapse0x22393e0();
   input += synapse0x223a170();
   input += synapse0x223a1b0();
   input += synapse0x223ab40();
   input += synapse0x223ab80();
   input += synapse0x223b510();
   input += synapse0x223b550();
   input += synapse0x223bff0();
   input += synapse0x223c030();
   input += synapse0x223c9c0();
   input += synapse0x223ca00();
   input += synapse0x2239aa0();
   input += synapse0x2239ae0();
   input += synapse0x223e570();
   input += synapse0x223e5b0();
   input += synapse0x223ef40();
   input += synapse0x223ef80();
   input += synapse0x223f910();
   input += synapse0x223f950();
   input += synapse0x22402e0();
   input += synapse0x2240320();
   input += synapse0x2233370();
   input += synapse0x22333b0();
   input += synapse0x22423d0();
   input += synapse0x2242410();
   input += synapse0x2242da0();
   input += synapse0x2242de0();
   input += synapse0x2243770();
   input += synapse0x22437b0();
   input += synapse0x2244140();
   input += synapse0x2244180();
   input += synapse0x2244b10();
   input += synapse0x2244b50();
   input += synapse0x223d660();
   input += synapse0x223d6a0();
   input += synapse0x2246f10();
   input += synapse0x2246f50();
   input += synapse0x22478a0();
   input += synapse0x22478e0();
   input += synapse0x2248270();
   input += synapse0x22482b0();
   input += synapse0x2248c40();
   input += synapse0x2248c80();
   input += synapse0x2249610();
   input += synapse0x2249650();
   return input;
}

double NNfunction_ng_chi03::neuron0x2261790() {
   double input = input0x2261790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2261b30() {
   double input = 1.52608;
   input += synapse0x224bd50();
   input += synapse0x224bd90();
   input += synapse0x2241310();
   input += synapse0x2241350();
   input += synapse0x224e930();
   input += synapse0x224e970();
   input += synapse0x224f300();
   input += synapse0x224f340();
   input += synapse0x224fcd0();
   input += synapse0x224fd10();
   input += synapse0x22506a0();
   input += synapse0x22506e0();
   input += synapse0x2251070();
   input += synapse0x22510b0();
   input += synapse0x2251a40();
   input += synapse0x2251a80();
   input += synapse0x2252410();
   input += synapse0x2252450();
   input += synapse0x2252de0();
   input += synapse0x2252e20();
   input += synapse0x22539c0();
   input += synapse0x2253a00();
   input += synapse0x2254390();
   input += synapse0x22543d0();
   input += synapse0x2245210();
   input += synapse0x2245250();
   input += synapse0x2245be0();
   input += synapse0x2245c20();
   input += synapse0x22465b0();
   input += synapse0x22465f0();
   input += synapse0x2258ad0();
   input += synapse0x2258b10();
   input += synapse0x22594a0();
   input += synapse0x22594e0();
   input += synapse0x2259e70();
   input += synapse0x2259eb0();
   input += synapse0x225a840();
   input += synapse0x225a880();
   input += synapse0x22357d0();
   input += synapse0x2235810();
   input += synapse0x2249fe0();
   input += synapse0x224a020();
   input += synapse0x225af60();
   input += synapse0x225afa0();
   input += synapse0x225afe0();
   input += synapse0x225b020();
   input += synapse0x2261ed0();
   input += synapse0x2261f10();
   input += synapse0x2261f50();
   input += synapse0x2261f90();
   return input;
}

double NNfunction_ng_chi03::neuron0x2261b30() {
   double input = input0x2261b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2261fd0() {
   double input = -0.355069;
   input += synapse0x2262310();
   input += synapse0x2262350();
   input += synapse0x2262390();
   input += synapse0x22623d0();
   input += synapse0x2262410();
   input += synapse0x2262450();
   input += synapse0x2262490();
   input += synapse0x22624d0();
   input += synapse0x2262510();
   input += synapse0x2262550();
   input += synapse0x2262590();
   input += synapse0x22625d0();
   input += synapse0x2262610();
   input += synapse0x2262650();
   input += synapse0x2262690();
   input += synapse0x22626d0();
   input += synapse0x2262160();
   input += synapse0x22621a0();
   input += synapse0x2262820();
   input += synapse0x2262860();
   input += synapse0x22628a0();
   input += synapse0x22628e0();
   input += synapse0x2262920();
   input += synapse0x2262960();
   input += synapse0x22629a0();
   input += synapse0x22629e0();
   input += synapse0x2262a20();
   input += synapse0x2262a60();
   input += synapse0x2262aa0();
   input += synapse0x2262ae0();
   input += synapse0x2262b20();
   input += synapse0x2262b60();
   input += synapse0x2262710();
   input += synapse0x2262750();
   input += synapse0x2262790();
   input += synapse0x22627d0();
   input += synapse0x2262db0();
   input += synapse0x2262df0();
   input += synapse0x2262e30();
   input += synapse0x2262e70();
   input += synapse0x2262eb0();
   input += synapse0x2262ef0();
   input += synapse0x2262f30();
   input += synapse0x2262f70();
   input += synapse0x2262fb0();
   input += synapse0x2262ff0();
   input += synapse0x2263030();
   input += synapse0x2263070();
   input += synapse0x22630b0();
   input += synapse0x22630f0();
   return input;
}

double NNfunction_ng_chi03::neuron0x2261fd0() {
   double input = input0x2261fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2263130() {
   double input = 0.897555;
   input += synapse0x2263470();
   input += synapse0x22634b0();
   input += synapse0x22634f0();
   input += synapse0x2263530();
   input += synapse0x2263570();
   input += synapse0x22635b0();
   input += synapse0x22635f0();
   input += synapse0x2263630();
   input += synapse0x2263670();
   input += synapse0x22636b0();
   input += synapse0x22636f0();
   input += synapse0x2263730();
   input += synapse0x2263770();
   input += synapse0x22637b0();
   input += synapse0x22637f0();
   input += synapse0x2263830();
   input += synapse0x22632c0();
   input += synapse0x2263300();
   input += synapse0x2263980();
   input += synapse0x22639c0();
   input += synapse0x2263a00();
   input += synapse0x2263a40();
   input += synapse0x2263a80();
   input += synapse0x2263ac0();
   input += synapse0x2263b00();
   input += synapse0x2263b40();
   input += synapse0x2263b80();
   input += synapse0x2263bc0();
   input += synapse0x2263c00();
   input += synapse0x2263c40();
   input += synapse0x2263c80();
   input += synapse0x2263cc0();
   input += synapse0x2263870();
   input += synapse0x22638b0();
   input += synapse0x22638f0();
   input += synapse0x2263930();
   input += synapse0x2263f10();
   input += synapse0x2263f50();
   input += synapse0x2263f90();
   input += synapse0x2263fd0();
   input += synapse0x2264010();
   input += synapse0x2264050();
   input += synapse0x2264090();
   input += synapse0x22640d0();
   input += synapse0x2264110();
   input += synapse0x2264150();
   input += synapse0x2264190();
   input += synapse0x22641d0();
   input += synapse0x2264210();
   input += synapse0x2264250();
   return input;
}

double NNfunction_ng_chi03::neuron0x2263130() {
   double input = input0x2263130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x2264290() {
   double input = 0.0975384;
   input += synapse0x22645d0();
   input += synapse0x2264610();
   input += synapse0x2264650();
   input += synapse0x2264690();
   input += synapse0x22646d0();
   input += synapse0x2264710();
   input += synapse0x2264750();
   input += synapse0x2264790();
   input += synapse0x22647d0();
   input += synapse0x2264810();
   input += synapse0x2264850();
   input += synapse0x2264890();
   input += synapse0x22648d0();
   input += synapse0x2264910();
   input += synapse0x2264950();
   input += synapse0x2264990();
   input += synapse0x2264420();
   input += synapse0x2264460();
   input += synapse0x2264ae0();
   input += synapse0x2264b20();
   input += synapse0x2264b60();
   input += synapse0x2264ba0();
   input += synapse0x2264be0();
   input += synapse0x2264c20();
   input += synapse0x2264c60();
   input += synapse0x2264ca0();
   input += synapse0x2264ce0();
   input += synapse0x2264d20();
   input += synapse0x2264d60();
   input += synapse0x2264da0();
   input += synapse0x2264de0();
   input += synapse0x2264e20();
   input += synapse0x22649d0();
   input += synapse0x2264a10();
   input += synapse0x2264a50();
   input += synapse0x2264a90();
   input += synapse0x2265070();
   input += synapse0x22650b0();
   input += synapse0x22650f0();
   input += synapse0x2265130();
   input += synapse0x2265170();
   input += synapse0x22651b0();
   input += synapse0x22651f0();
   input += synapse0x2265230();
   input += synapse0x2265270();
   input += synapse0x22652b0();
   input += synapse0x22652f0();
   input += synapse0x2265330();
   input += synapse0x2265370();
   input += synapse0x22653b0();
   return input;
}

double NNfunction_ng_chi03::neuron0x2264290() {
   double input = input0x2264290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chi03::input0x22653f0() {
   double input = 2.73884;
   input += synapse0x2265610();
   input += synapse0x2265650();
   input += synapse0x2265690();
   input += synapse0x22656d0();
   input += synapse0x2265710();
   return input;
}

double NNfunction_ng_chi03::neuron0x22653f0() {
   double input = input0x22653f0();
   return (input * 1)+0;
}

double NNfunction_ng_chi03::synapse0x2235860() {
   return (neuron0x2230460()*0.0270639);
}

double NNfunction_ng_chi03::synapse0x22358a0() {
   return (neuron0x2230710()*-0.0271625);
}

double NNfunction_ng_chi03::synapse0x22358e0() {
   return (neuron0x2230a50()*0.265117);
}

double NNfunction_ng_chi03::synapse0x2235920() {
   return (neuron0x2230d90()*-0.0543666);
}

double NNfunction_ng_chi03::synapse0x2235960() {
   return (neuron0x22310d0()*0.00527274);
}

double NNfunction_ng_chi03::synapse0x22359a0() {
   return (neuron0x2231410()*0.00666336);
}

double NNfunction_ng_chi03::synapse0x22359e0() {
   return (neuron0x2231750()*-0.0149651);
}

double NNfunction_ng_chi03::synapse0x2235a20() {
   return (neuron0x2231a90()*-0.0231082);
}

double NNfunction_ng_chi03::synapse0x2235a60() {
   return (neuron0x2231dd0()*0.0116555);
}

double NNfunction_ng_chi03::synapse0x2235aa0() {
   return (neuron0x2232110()*-0.0174545);
}

double NNfunction_ng_chi03::synapse0x2235ae0() {
   return (neuron0x2232450()*-0.00431275);
}

double NNfunction_ng_chi03::synapse0x2235b20() {
   return (neuron0x2232790()*0.151759);
}

double NNfunction_ng_chi03::synapse0x2235b60() {
   return (neuron0x2232ad0()*0.0288017);
}

double NNfunction_ng_chi03::synapse0x2235ba0() {
   return (neuron0x2232e10()*0.0293936);
}

double NNfunction_ng_chi03::synapse0x2235be0() {
   return (neuron0x2233150()*0.0190963);
}

double NNfunction_ng_chi03::synapse0x2235c20() {
   return (neuron0x2233490()*0.00107128);
}

double NNfunction_ng_chi03::synapse0x22356b0() {
   return (neuron0x22337d0()*0.0130343);
}

double NNfunction_ng_chi03::synapse0x22356f0() {
   return (neuron0x2233d30()*0.0252237);
}

double NNfunction_ng_chi03::synapse0x1fec7a0() {
   return (neuron0x2234070()*0.00417587);
}

double NNfunction_ng_chi03::synapse0x1fec7e0() {
   return (neuron0x22343b0()*0.00393821);
}

double NNfunction_ng_chi03::synapse0x2235c60() {
   return (neuron0x22346f0()*-0.00918445);
}

double NNfunction_ng_chi03::synapse0x2235ca0() {
   return (neuron0x2234a30()*-0.00751646);
}

double NNfunction_ng_chi03::synapse0x2235ce0() {
   return (neuron0x2234d70()*0.00166254);
}

double NNfunction_ng_chi03::synapse0x2235d20() {
   return (neuron0x22350b0()*-0.672931);
}

double NNfunction_ng_chi03::synapse0x22360a0() {
   return (neuron0x2230460()*-0.124402);
}

double NNfunction_ng_chi03::synapse0x22360e0() {
   return (neuron0x2230710()*0.026246);
}

double NNfunction_ng_chi03::synapse0x2236120() {
   return (neuron0x2230a50()*-0.0780806);
}

double NNfunction_ng_chi03::synapse0x2236160() {
   return (neuron0x2230d90()*-0.417417);
}

double NNfunction_ng_chi03::synapse0x22361a0() {
   return (neuron0x22310d0()*0.0399431);
}

double NNfunction_ng_chi03::synapse0x22361e0() {
   return (neuron0x2231410()*0.0669853);
}

double NNfunction_ng_chi03::synapse0x2236220() {
   return (neuron0x2231750()*-0.0320288);
}

double NNfunction_ng_chi03::synapse0x2236260() {
   return (neuron0x2231a90()*0.0918594);
}

double NNfunction_ng_chi03::synapse0x22362a0() {
   return (neuron0x2231dd0()*-0.0235984);
}

double NNfunction_ng_chi03::synapse0x1fec5f0() {
   return (neuron0x2232110()*-0.22879);
}

double NNfunction_ng_chi03::synapse0x1fec630() {
   return (neuron0x2232450()*-0.103862);
}

double NNfunction_ng_chi03::synapse0x1fec670() {
   return (neuron0x2232790()*-1.31855);
}

double NNfunction_ng_chi03::synapse0x1fec6b0() {
   return (neuron0x2232ad0()*1.18661);
}

double NNfunction_ng_chi03::synapse0x22364f0() {
   return (neuron0x2232e10()*-0.0963187);
}

double NNfunction_ng_chi03::synapse0x2236530() {
   return (neuron0x2233150()*-0.0608029);
}

double NNfunction_ng_chi03::synapse0x2236570() {
   return (neuron0x2233490()*-0.220371);
}

double NNfunction_ng_chi03::synapse0x2235ef0() {
   return (neuron0x22337d0()*-0.145962);
}

double NNfunction_ng_chi03::synapse0x2235f30() {
   return (neuron0x2233d30()*-0.30036);
}

double NNfunction_ng_chi03::synapse0x22366c0() {
   return (neuron0x2234070()*-0.0326792);
}

double NNfunction_ng_chi03::synapse0x2236700() {
   return (neuron0x22343b0()*0.0291944);
}

double NNfunction_ng_chi03::synapse0x2236740() {
   return (neuron0x22346f0()*0.0694414);
}

double NNfunction_ng_chi03::synapse0x2236780() {
   return (neuron0x2234a30()*0.0154064);
}

double NNfunction_ng_chi03::synapse0x22367c0() {
   return (neuron0x2234d70()*0.158831);
}

double NNfunction_ng_chi03::synapse0x2236800() {
   return (neuron0x22350b0()*0.867935);
}

double NNfunction_ng_chi03::synapse0x2236b80() {
   return (neuron0x2230460()*0.301638);
}

double NNfunction_ng_chi03::synapse0x2236bc0() {
   return (neuron0x2230710()*0.000947915);
}

double NNfunction_ng_chi03::synapse0x2236c00() {
   return (neuron0x2230a50()*0.218825);
}

double NNfunction_ng_chi03::synapse0x2236c40() {
   return (neuron0x2230d90()*-2.01907);
}

double NNfunction_ng_chi03::synapse0x2236c80() {
   return (neuron0x22310d0()*0.0893381);
}

double NNfunction_ng_chi03::synapse0x2236cc0() {
   return (neuron0x2231410()*-0.00117787);
}

double NNfunction_ng_chi03::synapse0x2236d00() {
   return (neuron0x2231750()*0.0941096);
}

double NNfunction_ng_chi03::synapse0x2236d40() {
   return (neuron0x2231a90()*-0.262415);
}

double NNfunction_ng_chi03::synapse0x2236d80() {
   return (neuron0x2231dd0()*-0.16336);
}

double NNfunction_ng_chi03::synapse0x2236dc0() {
   return (neuron0x2232110()*-0.00839012);
}

double NNfunction_ng_chi03::synapse0x2236e00() {
   return (neuron0x2232450()*-0.0873743);
}

double NNfunction_ng_chi03::synapse0x2236e40() {
   return (neuron0x2232790()*-0.490739);
}

double NNfunction_ng_chi03::synapse0x2236e80() {
   return (neuron0x2232ad0()*0.1319);
}

double NNfunction_ng_chi03::synapse0x2236ec0() {
   return (neuron0x2232e10()*-0.0615964);
}

double NNfunction_ng_chi03::synapse0x2236f00() {
   return (neuron0x2233150()*0.118036);
}

double NNfunction_ng_chi03::synapse0x2236f40() {
   return (neuron0x2233490()*-0.0839222);
}

double NNfunction_ng_chi03::synapse0x22369d0() {
   return (neuron0x22337d0()*-0.317154);
}

double NNfunction_ng_chi03::synapse0x2236a10() {
   return (neuron0x2233d30()*0.0599091);
}

double NNfunction_ng_chi03::synapse0x1ffa500() {
   return (neuron0x2234070()*-0.157484);
}

double NNfunction_ng_chi03::synapse0x1ffa540() {
   return (neuron0x22343b0()*0.268956);
}

double NNfunction_ng_chi03::synapse0x2238e70() {
   return (neuron0x22346f0()*-0.943576);
}

double NNfunction_ng_chi03::synapse0x2238eb0() {
   return (neuron0x2234a30()*-0.327277);
}

double NNfunction_ng_chi03::synapse0x22301a0() {
   return (neuron0x2234d70()*-0.268563);
}

double NNfunction_ng_chi03::synapse0x22301e0() {
   return (neuron0x22350b0()*-0.208776);
}

double NNfunction_ng_chi03::synapse0x1ffadf0() {
   return (neuron0x2230460()*0.0569379);
}

double NNfunction_ng_chi03::synapse0x2236400() {
   return (neuron0x2230710()*-0.0717771);
}

double NNfunction_ng_chi03::synapse0x2236440() {
   return (neuron0x2230a50()*2.87452);
}

double NNfunction_ng_chi03::synapse0x2236480() {
   return (neuron0x2230d90()*-0.0751479);
}

double NNfunction_ng_chi03::synapse0x2237090() {
   return (neuron0x22310d0()*0.00598435);
}

double NNfunction_ng_chi03::synapse0x22370d0() {
   return (neuron0x2231410()*0.000792383);
}

double NNfunction_ng_chi03::synapse0x2237110() {
   return (neuron0x2231750()*-0.00267898);
}

double NNfunction_ng_chi03::synapse0x2237150() {
   return (neuron0x2231a90()*-0.00727756);
}

double NNfunction_ng_chi03::synapse0x2237190() {
   return (neuron0x2231dd0()*0.00976994);
}

double NNfunction_ng_chi03::synapse0x22371d0() {
   return (neuron0x2232110()*-0.004425);
}

double NNfunction_ng_chi03::synapse0x2237210() {
   return (neuron0x2232450()*0.033638);
}

double NNfunction_ng_chi03::synapse0x2237250() {
   return (neuron0x2232790()*0.0301731);
}

double NNfunction_ng_chi03::synapse0x2237290() {
   return (neuron0x2232ad0()*0.0130846);
}

double NNfunction_ng_chi03::synapse0x22372d0() {
   return (neuron0x2232e10()*-0.00774614);
}

double NNfunction_ng_chi03::synapse0x2237310() {
   return (neuron0x2233150()*-0.00348606);
}

double NNfunction_ng_chi03::synapse0x2237350() {
   return (neuron0x2233490()*0.0131507);
}

double NNfunction_ng_chi03::synapse0x2230220() {
   return (neuron0x22337d0()*-0.0192971);
}

double NNfunction_ng_chi03::synapse0x2230260() {
   return (neuron0x2233d30()*0.044543);
}

double NNfunction_ng_chi03::synapse0x22374a0() {
   return (neuron0x2234070()*-0.0403815);
}

double NNfunction_ng_chi03::synapse0x22374e0() {
   return (neuron0x22343b0()*0.0159306);
}

double NNfunction_ng_chi03::synapse0x2237520() {
   return (neuron0x22346f0()*-0.00425169);
}

double NNfunction_ng_chi03::synapse0x2237560() {
   return (neuron0x2234a30()*-0.0118206);
}

double NNfunction_ng_chi03::synapse0x22375a0() {
   return (neuron0x2234d70()*0.0116471);
}

double NNfunction_ng_chi03::synapse0x22375e0() {
   return (neuron0x22350b0()*-3.22721);
}

double NNfunction_ng_chi03::synapse0x2237960() {
   return (neuron0x2230460()*0.0680279);
}

double NNfunction_ng_chi03::synapse0x22379a0() {
   return (neuron0x2230710()*-0.389545);
}

double NNfunction_ng_chi03::synapse0x22379e0() {
   return (neuron0x2230a50()*-0.229571);
}

double NNfunction_ng_chi03::synapse0x2237a20() {
   return (neuron0x2230d90()*0.217226);
}

double NNfunction_ng_chi03::synapse0x2237a60() {
   return (neuron0x22310d0()*-0.0319635);
}

double NNfunction_ng_chi03::synapse0x2237aa0() {
   return (neuron0x2231410()*0.010586);
}

double NNfunction_ng_chi03::synapse0x2237ae0() {
   return (neuron0x2231750()*-0.0237225);
}

double NNfunction_ng_chi03::synapse0x2237b20() {
   return (neuron0x2231a90()*-0.0112281);
}

double NNfunction_ng_chi03::synapse0x2237b60() {
   return (neuron0x2231dd0()*0.007291);
}

double NNfunction_ng_chi03::synapse0x2237ba0() {
   return (neuron0x2232110()*-0.00802382);
}

double NNfunction_ng_chi03::synapse0x2237be0() {
   return (neuron0x2232450()*0.036957);
}

double NNfunction_ng_chi03::synapse0x2237c20() {
   return (neuron0x2232790()*1.06792);
}

double NNfunction_ng_chi03::synapse0x2237c60() {
   return (neuron0x2232ad0()*-0.108214);
}

double NNfunction_ng_chi03::synapse0x2237ca0() {
   return (neuron0x2232e10()*-0.00638049);
}

double NNfunction_ng_chi03::synapse0x2237ce0() {
   return (neuron0x2233150()*-0.870764);
}

double NNfunction_ng_chi03::synapse0x2237d20() {
   return (neuron0x2233490()*0.0112724);
}

double NNfunction_ng_chi03::synapse0x2237e70() {
   return (neuron0x22337d0()*0.0191444);
}

double NNfunction_ng_chi03::synapse0x22377b0() {
   return (neuron0x2233d30()*-0.326133);
}

double NNfunction_ng_chi03::synapse0x22377f0() {
   return (neuron0x2234070()*-0.0363916);
}

double NNfunction_ng_chi03::synapse0x2238fb0() {
   return (neuron0x22343b0()*0.0332319);
}

double NNfunction_ng_chi03::synapse0x2238ff0() {
   return (neuron0x22346f0()*-0.0337977);
}

double NNfunction_ng_chi03::synapse0x2239030() {
   return (neuron0x2234a30()*0.0556055);
}

double NNfunction_ng_chi03::synapse0x2239070() {
   return (neuron0x2234d70()*-0.039283);
}

double NNfunction_ng_chi03::synapse0x22390b0() {
   return (neuron0x22350b0()*0.708909);
}

double NNfunction_ng_chi03::synapse0x2239430() {
   return (neuron0x2230460()*-0.0498188);
}

double NNfunction_ng_chi03::synapse0x2239470() {
   return (neuron0x2230710()*0.0735721);
}

double NNfunction_ng_chi03::synapse0x22394b0() {
   return (neuron0x2230a50()*-3.01957);
}

double NNfunction_ng_chi03::synapse0x22394f0() {
   return (neuron0x2230d90()*0.0630829);
}

double NNfunction_ng_chi03::synapse0x2239530() {
   return (neuron0x22310d0()*-0.00541085);
}

double NNfunction_ng_chi03::synapse0x2239570() {
   return (neuron0x2231410()*-0.000766604);
}

double NNfunction_ng_chi03::synapse0x22395b0() {
   return (neuron0x2231750()*0.000460494);
}

double NNfunction_ng_chi03::synapse0x22395f0() {
   return (neuron0x2231a90()*0.0167853);
}

double NNfunction_ng_chi03::synapse0x2239630() {
   return (neuron0x2231dd0()*-0.0107688);
}

double NNfunction_ng_chi03::synapse0x1ffa850() {
   return (neuron0x2232110()*-9.53352e-05);
}

double NNfunction_ng_chi03::synapse0x1ffa890() {
   return (neuron0x2232450()*-0.0324083);
}

double NNfunction_ng_chi03::synapse0x1ffa8d0() {
   return (neuron0x2232790()*-0.045329);
}

double NNfunction_ng_chi03::synapse0x1ffa910() {
   return (neuron0x2232ad0()*-0.0244555);
}

double NNfunction_ng_chi03::synapse0x1ffa950() {
   return (neuron0x2232e10()*0.00527761);
}

double NNfunction_ng_chi03::synapse0x1ffa990() {
   return (neuron0x2233150()*0.0132868);
}

double NNfunction_ng_chi03::synapse0x1ffa9d0() {
   return (neuron0x2233490()*-0.0153583);
}

double NNfunction_ng_chi03::synapse0x2239280() {
   return (neuron0x22337d0()*0.0177457);
}

double NNfunction_ng_chi03::synapse0x22392c0() {
   return (neuron0x2233d30()*-0.0323137);
}

double NNfunction_ng_chi03::synapse0x1ffab20() {
   return (neuron0x2234070()*0.037153);
}

double NNfunction_ng_chi03::synapse0x1ffab60() {
   return (neuron0x22343b0()*-0.0138588);
}

double NNfunction_ng_chi03::synapse0x1ffaba0() {
   return (neuron0x22346f0()*0.00558322);
}

double NNfunction_ng_chi03::synapse0x1ffabe0() {
   return (neuron0x2234a30()*0.0125369);
}

double NNfunction_ng_chi03::synapse0x1ffac20() {
   return (neuron0x2234d70()*-0.00480209);
}

double NNfunction_ng_chi03::synapse0x2239e80() {
   return (neuron0x22350b0()*3.06534);
}

double NNfunction_ng_chi03::synapse0x223a200() {
   return (neuron0x2230460()*0.0215412);
}

double NNfunction_ng_chi03::synapse0x223a240() {
   return (neuron0x2230710()*-11.5109);
}

double NNfunction_ng_chi03::synapse0x223a280() {
   return (neuron0x2230a50()*0.184647);
}

double NNfunction_ng_chi03::synapse0x223a2c0() {
   return (neuron0x2230d90()*0.00121952);
}

double NNfunction_ng_chi03::synapse0x223a300() {
   return (neuron0x22310d0()*-0.0212066);
}

double NNfunction_ng_chi03::synapse0x223a340() {
   return (neuron0x2231410()*0.00226762);
}

double NNfunction_ng_chi03::synapse0x223a380() {
   return (neuron0x2231750()*0.00138371);
}

double NNfunction_ng_chi03::synapse0x223a3c0() {
   return (neuron0x2231a90()*-0.00679923);
}

double NNfunction_ng_chi03::synapse0x223a400() {
   return (neuron0x2231dd0()*0.00334691);
}

double NNfunction_ng_chi03::synapse0x223a440() {
   return (neuron0x2232110()*0.0104305);
}

double NNfunction_ng_chi03::synapse0x223a480() {
   return (neuron0x2232450()*0.0107398);
}

double NNfunction_ng_chi03::synapse0x223a4c0() {
   return (neuron0x2232790()*0.0915756);
}

double NNfunction_ng_chi03::synapse0x223a500() {
   return (neuron0x2232ad0()*0.00316392);
}

double NNfunction_ng_chi03::synapse0x223a540() {
   return (neuron0x2232e10()*-7.67782e-05);
}

double NNfunction_ng_chi03::synapse0x223a580() {
   return (neuron0x2233150()*-0.0530234);
}

double NNfunction_ng_chi03::synapse0x223a5c0() {
   return (neuron0x2233490()*-0.00348801);
}

double NNfunction_ng_chi03::synapse0x223a050() {
   return (neuron0x22337d0()*0.00780083);
}

double NNfunction_ng_chi03::synapse0x223a090() {
   return (neuron0x2233d30()*-0.02065);
}

double NNfunction_ng_chi03::synapse0x223a710() {
   return (neuron0x2234070()*-0.00169419);
}

double NNfunction_ng_chi03::synapse0x223a750() {
   return (neuron0x22343b0()*-0.00272807);
}

double NNfunction_ng_chi03::synapse0x223a790() {
   return (neuron0x22346f0()*0.00438933);
}

double NNfunction_ng_chi03::synapse0x223a7d0() {
   return (neuron0x2234a30()*-0.0145421);
}

double NNfunction_ng_chi03::synapse0x223a810() {
   return (neuron0x2234d70()*-0.0114338);
}

double NNfunction_ng_chi03::synapse0x223a850() {
   return (neuron0x22350b0()*2.68768);
}

double NNfunction_ng_chi03::synapse0x223abd0() {
   return (neuron0x2230460()*-0.00962762);
}

double NNfunction_ng_chi03::synapse0x223ac10() {
   return (neuron0x2230710()*0.0385663);
}

double NNfunction_ng_chi03::synapse0x223ac50() {
   return (neuron0x2230a50()*-2.0385);
}

double NNfunction_ng_chi03::synapse0x223ac90() {
   return (neuron0x2230d90()*0.0867045);
}

double NNfunction_ng_chi03::synapse0x223acd0() {
   return (neuron0x22310d0()*-0.0478678);
}

double NNfunction_ng_chi03::synapse0x223ad10() {
   return (neuron0x2231410()*0.00408322);
}

double NNfunction_ng_chi03::synapse0x223ad50() {
   return (neuron0x2231750()*-0.0168964);
}

double NNfunction_ng_chi03::synapse0x223ad90() {
   return (neuron0x2231a90()*0.0118178);
}

double NNfunction_ng_chi03::synapse0x223add0() {
   return (neuron0x2231dd0()*-0.0216071);
}

double NNfunction_ng_chi03::synapse0x223ae10() {
   return (neuron0x2232110()*0.0344435);
}

double NNfunction_ng_chi03::synapse0x223ae50() {
   return (neuron0x2232450()*0.0123101);
}

double NNfunction_ng_chi03::synapse0x223ae90() {
   return (neuron0x2232790()*-0.32706);
}

double NNfunction_ng_chi03::synapse0x223aed0() {
   return (neuron0x2232ad0()*-0.0778508);
}

double NNfunction_ng_chi03::synapse0x223af10() {
   return (neuron0x2232e10()*-0.0339729);
}

double NNfunction_ng_chi03::synapse0x223af50() {
   return (neuron0x2233150()*0.23766);
}

double NNfunction_ng_chi03::synapse0x223af90() {
   return (neuron0x2233490()*0.0276113);
}

double NNfunction_ng_chi03::synapse0x223aa20() {
   return (neuron0x22337d0()*-0.0120045);
}

double NNfunction_ng_chi03::synapse0x223aa60() {
   return (neuron0x2233d30()*0.065114);
}

double NNfunction_ng_chi03::synapse0x223b0e0() {
   return (neuron0x2234070()*-0.021865);
}

double NNfunction_ng_chi03::synapse0x223b120() {
   return (neuron0x22343b0()*0.0126131);
}

double NNfunction_ng_chi03::synapse0x223b160() {
   return (neuron0x22346f0()*0.0288742);
}

double NNfunction_ng_chi03::synapse0x223b1a0() {
   return (neuron0x2234a30()*0.0125393);
}

double NNfunction_ng_chi03::synapse0x223b1e0() {
   return (neuron0x2234d70()*-0.00095028);
}

double NNfunction_ng_chi03::synapse0x223b220() {
   return (neuron0x22350b0()*0.824708);
}

double NNfunction_ng_chi03::synapse0x2233c20() {
   return (neuron0x2230460()*0.00925077);
}

double NNfunction_ng_chi03::synapse0x2233c60() {
   return (neuron0x2230710()*0.657253);
}

double NNfunction_ng_chi03::synapse0x2233ca0() {
   return (neuron0x2230a50()*0.20664);
}

double NNfunction_ng_chi03::synapse0x2233ce0() {
   return (neuron0x2230d90()*-0.0713146);
}

double NNfunction_ng_chi03::synapse0x223b7b0() {
   return (neuron0x22310d0()*0.0201266);
}

double NNfunction_ng_chi03::synapse0x223b7f0() {
   return (neuron0x2231410()*0.00771597);
}

double NNfunction_ng_chi03::synapse0x223b830() {
   return (neuron0x2231750()*0.0270217);
}

double NNfunction_ng_chi03::synapse0x223b870() {
   return (neuron0x2231a90()*0.0228226);
}

double NNfunction_ng_chi03::synapse0x223b8b0() {
   return (neuron0x2231dd0()*-0.013694);
}

double NNfunction_ng_chi03::synapse0x223b8f0() {
   return (neuron0x2232110()*-0.00772111);
}

double NNfunction_ng_chi03::synapse0x223b930() {
   return (neuron0x2232450()*-0.0308085);
}

double NNfunction_ng_chi03::synapse0x223b970() {
   return (neuron0x2232790()*-0.289849);
}

double NNfunction_ng_chi03::synapse0x223b9b0() {
   return (neuron0x2232ad0()*-0.0852587);
}

double NNfunction_ng_chi03::synapse0x223b9f0() {
   return (neuron0x2232e10()*-0.0455199);
}

double NNfunction_ng_chi03::synapse0x223ba30() {
   return (neuron0x2233150()*2.13261);
}

double NNfunction_ng_chi03::synapse0x223ba70() {
   return (neuron0x2233490()*0.0238909);
}

double NNfunction_ng_chi03::synapse0x223b3f0() {
   return (neuron0x22337d0()*0.00798828);
}

double NNfunction_ng_chi03::synapse0x223b430() {
   return (neuron0x2233d30()*-0.323947);
}

double NNfunction_ng_chi03::synapse0x223bbc0() {
   return (neuron0x2234070()*-0.0403922);
}

double NNfunction_ng_chi03::synapse0x223bc00() {
   return (neuron0x22343b0()*-0.0188697);
}

double NNfunction_ng_chi03::synapse0x223bc40() {
   return (neuron0x22346f0()*0.000301483);
}

double NNfunction_ng_chi03::synapse0x223bc80() {
   return (neuron0x2234a30()*0.0114068);
}

double NNfunction_ng_chi03::synapse0x223bcc0() {
   return (neuron0x2234d70()*-0.0170382);
}

double NNfunction_ng_chi03::synapse0x223bd00() {
   return (neuron0x22350b0()*-0.250493);
}

double NNfunction_ng_chi03::synapse0x223c080() {
   return (neuron0x2230460()*-0.0485253);
}

double NNfunction_ng_chi03::synapse0x223c0c0() {
   return (neuron0x2230710()*0.448036);
}

double NNfunction_ng_chi03::synapse0x223c100() {
   return (neuron0x2230a50()*0.263624);
}

double NNfunction_ng_chi03::synapse0x223c140() {
   return (neuron0x2230d90()*-1.96023);
}

double NNfunction_ng_chi03::synapse0x223c180() {
   return (neuron0x22310d0()*-0.0669144);
}

double NNfunction_ng_chi03::synapse0x223c1c0() {
   return (neuron0x2231410()*-0.00148241);
}

double NNfunction_ng_chi03::synapse0x223c200() {
   return (neuron0x2231750()*-0.0320726);
}

double NNfunction_ng_chi03::synapse0x223c240() {
   return (neuron0x2231a90()*0.100091);
}

double NNfunction_ng_chi03::synapse0x223c280() {
   return (neuron0x2231dd0()*-0.427788);
}

double NNfunction_ng_chi03::synapse0x223c2c0() {
   return (neuron0x2232110()*0.0259367);
}

double NNfunction_ng_chi03::synapse0x223c300() {
   return (neuron0x2232450()*0.216011);
}

double NNfunction_ng_chi03::synapse0x223c340() {
   return (neuron0x2232790()*0.0893258);
}

double NNfunction_ng_chi03::synapse0x223c380() {
   return (neuron0x2232ad0()*0.173205);
}

double NNfunction_ng_chi03::synapse0x223c3c0() {
   return (neuron0x2232e10()*0.418355);
}

double NNfunction_ng_chi03::synapse0x223c400() {
   return (neuron0x2233150()*0.00390932);
}

double NNfunction_ng_chi03::synapse0x223c440() {
   return (neuron0x2233490()*-0.286275);
}

double NNfunction_ng_chi03::synapse0x223bed0() {
   return (neuron0x22337d0()*0.521074);
}

double NNfunction_ng_chi03::synapse0x223bf10() {
   return (neuron0x2233d30()*0.140537);
}

double NNfunction_ng_chi03::synapse0x223c590() {
   return (neuron0x2234070()*-0.281618);
}

double NNfunction_ng_chi03::synapse0x223c5d0() {
   return (neuron0x22343b0()*-0.201318);
}

double NNfunction_ng_chi03::synapse0x223c610() {
   return (neuron0x22346f0()*-0.0848477);
}

double NNfunction_ng_chi03::synapse0x223c650() {
   return (neuron0x2234a30()*-0.171746);
}

double NNfunction_ng_chi03::synapse0x223c690() {
   return (neuron0x2234d70()*0.122066);
}

double NNfunction_ng_chi03::synapse0x223c6d0() {
   return (neuron0x22350b0()*-0.469474);
}

double NNfunction_ng_chi03::synapse0x223ca50() {
   return (neuron0x2230460()*0.0340639);
}

double NNfunction_ng_chi03::synapse0x223ca90() {
   return (neuron0x2230710()*-0.123307);
}

double NNfunction_ng_chi03::synapse0x223cad0() {
   return (neuron0x2230a50()*0.195672);
}

double NNfunction_ng_chi03::synapse0x223cb10() {
   return (neuron0x2230d90()*-1.09081);
}

double NNfunction_ng_chi03::synapse0x223cb50() {
   return (neuron0x22310d0()*0.738128);
}

double NNfunction_ng_chi03::synapse0x223cb90() {
   return (neuron0x2231410()*-0.536914);
}

double NNfunction_ng_chi03::synapse0x223cbd0() {
   return (neuron0x2231750()*-0.290551);
}

double NNfunction_ng_chi03::synapse0x223cc10() {
   return (neuron0x2231a90()*0.0891389);
}

double NNfunction_ng_chi03::synapse0x223cc50() {
   return (neuron0x2231dd0()*0.119937);
}

double NNfunction_ng_chi03::synapse0x223cc90() {
   return (neuron0x2232110()*0.181252);
}

double NNfunction_ng_chi03::synapse0x223ccd0() {
   return (neuron0x2232450()*0.354068);
}

double NNfunction_ng_chi03::synapse0x223cd10() {
   return (neuron0x2232790()*0.36929);
}

double NNfunction_ng_chi03::synapse0x223cd50() {
   return (neuron0x2232ad0()*-1.39545);
}

double NNfunction_ng_chi03::synapse0x223cd90() {
   return (neuron0x2232e10()*0.303841);
}

double NNfunction_ng_chi03::synapse0x223cdd0() {
   return (neuron0x2233150()*0.245366);
}

double NNfunction_ng_chi03::synapse0x223ce10() {
   return (neuron0x2233490()*-0.111437);
}

double NNfunction_ng_chi03::synapse0x223c8a0() {
   return (neuron0x22337d0()*0.745739);
}

double NNfunction_ng_chi03::synapse0x223c8e0() {
   return (neuron0x2233d30()*-0.100981);
}

double NNfunction_ng_chi03::synapse0x2239670() {
   return (neuron0x2234070()*0.179905);
}

double NNfunction_ng_chi03::synapse0x22396b0() {
   return (neuron0x22343b0()*0.0891201);
}

double NNfunction_ng_chi03::synapse0x22396f0() {
   return (neuron0x22346f0()*0.99581);
}

double NNfunction_ng_chi03::synapse0x2239730() {
   return (neuron0x2234a30()*0.853556);
}

double NNfunction_ng_chi03::synapse0x2239770() {
   return (neuron0x2234d70()*0.191938);
}

double NNfunction_ng_chi03::synapse0x22397b0() {
   return (neuron0x22350b0()*-0.671994);
}

double NNfunction_ng_chi03::synapse0x2239b30() {
   return (neuron0x2230460()*-0.0661582);
}

double NNfunction_ng_chi03::synapse0x2239b70() {
   return (neuron0x2230710()*-0.217341);
}

double NNfunction_ng_chi03::synapse0x2239bb0() {
   return (neuron0x2230a50()*1.36821);
}

double NNfunction_ng_chi03::synapse0x2239bf0() {
   return (neuron0x2230d90()*-0.753191);
}

double NNfunction_ng_chi03::synapse0x2239c30() {
   return (neuron0x22310d0()*0.293135);
}

double NNfunction_ng_chi03::synapse0x2239c70() {
   return (neuron0x2231410()*0.302781);
}

double NNfunction_ng_chi03::synapse0x2239cb0() {
   return (neuron0x2231750()*-0.16814);
}

double NNfunction_ng_chi03::synapse0x2239cf0() {
   return (neuron0x2231a90()*0.366505);
}

double NNfunction_ng_chi03::synapse0x2239d30() {
   return (neuron0x2231dd0()*-0.193298);
}

double NNfunction_ng_chi03::synapse0x2239d70() {
   return (neuron0x2232110()*0.44121);
}

double NNfunction_ng_chi03::synapse0x2239db0() {
   return (neuron0x2232450()*-0.144046);
}

double NNfunction_ng_chi03::synapse0x2239df0() {
   return (neuron0x2232790()*0.593338);
}

double NNfunction_ng_chi03::synapse0x2239e30() {
   return (neuron0x2232ad0()*-1.04976);
}

double NNfunction_ng_chi03::synapse0x223df70() {
   return (neuron0x2232e10()*-0.410959);
}

double NNfunction_ng_chi03::synapse0x223dfb0() {
   return (neuron0x2233150()*0.180411);
}

double NNfunction_ng_chi03::synapse0x223dff0() {
   return (neuron0x2233490()*0.30035);
}

double NNfunction_ng_chi03::synapse0x2239980() {
   return (neuron0x22337d0()*-0.2847);
}

double NNfunction_ng_chi03::synapse0x22399c0() {
   return (neuron0x2233d30()*0.347937);
}

double NNfunction_ng_chi03::synapse0x223e140() {
   return (neuron0x2234070()*-0.0107447);
}

double NNfunction_ng_chi03::synapse0x223e180() {
   return (neuron0x22343b0()*0.209557);
}

double NNfunction_ng_chi03::synapse0x223e1c0() {
   return (neuron0x22346f0()*-0.283987);
}

double NNfunction_ng_chi03::synapse0x223e200() {
   return (neuron0x2234a30()*-0.218169);
}

double NNfunction_ng_chi03::synapse0x223e240() {
   return (neuron0x2234d70()*-0.462392);
}

double NNfunction_ng_chi03::synapse0x223e280() {
   return (neuron0x22350b0()*0.139813);
}

double NNfunction_ng_chi03::synapse0x223e600() {
   return (neuron0x2230460()*0.0023174);
}

double NNfunction_ng_chi03::synapse0x223e640() {
   return (neuron0x2230710()*0.00127578);
}

double NNfunction_ng_chi03::synapse0x223e680() {
   return (neuron0x2230a50()*-4.1137);
}

double NNfunction_ng_chi03::synapse0x223e6c0() {
   return (neuron0x2230d90()*0.0634629);
}

double NNfunction_ng_chi03::synapse0x223e700() {
   return (neuron0x22310d0()*0.00205148);
}

double NNfunction_ng_chi03::synapse0x223e740() {
   return (neuron0x2231410()*-0.00521399);
}

double NNfunction_ng_chi03::synapse0x223e780() {
   return (neuron0x2231750()*0.000787689);
}

double NNfunction_ng_chi03::synapse0x223e7c0() {
   return (neuron0x2231a90()*-0.01094);
}

double NNfunction_ng_chi03::synapse0x223e800() {
   return (neuron0x2231dd0()*0.0130904);
}

double NNfunction_ng_chi03::synapse0x223e840() {
   return (neuron0x2232110()*-0.00382376);
}

double NNfunction_ng_chi03::synapse0x223e880() {
   return (neuron0x2232450()*-0.00412612);
}

double NNfunction_ng_chi03::synapse0x223e8c0() {
   return (neuron0x2232790()*-0.000448953);
}

double NNfunction_ng_chi03::synapse0x223e900() {
   return (neuron0x2232ad0()*-0.0120349);
}

double NNfunction_ng_chi03::synapse0x223e940() {
   return (neuron0x2232e10()*0.00859816);
}

double NNfunction_ng_chi03::synapse0x223e980() {
   return (neuron0x2233150()*-0.0253714);
}

double NNfunction_ng_chi03::synapse0x223e9c0() {
   return (neuron0x2233490()*-0.0106168);
}

double NNfunction_ng_chi03::synapse0x223e450() {
   return (neuron0x22337d0()*0.000991678);
}

double NNfunction_ng_chi03::synapse0x223e490() {
   return (neuron0x2233d30()*-0.0199624);
}

double NNfunction_ng_chi03::synapse0x223eb10() {
   return (neuron0x2234070()*0.00294174);
}

double NNfunction_ng_chi03::synapse0x223eb50() {
   return (neuron0x22343b0()*0.000788614);
}

double NNfunction_ng_chi03::synapse0x223eb90() {
   return (neuron0x22346f0()*0.00774364);
}

double NNfunction_ng_chi03::synapse0x223ebd0() {
   return (neuron0x2234a30()*0.00291338);
}

double NNfunction_ng_chi03::synapse0x223ec10() {
   return (neuron0x2234d70()*-0.00424771);
}

double NNfunction_ng_chi03::synapse0x223ec50() {
   return (neuron0x22350b0()*-2.29341);
}

double NNfunction_ng_chi03::synapse0x223efd0() {
   return (neuron0x2230460()*-0.0460697);
}

double NNfunction_ng_chi03::synapse0x223f010() {
   return (neuron0x2230710()*-0.024881);
}

double NNfunction_ng_chi03::synapse0x223f050() {
   return (neuron0x2230a50()*-4.32664);
}

double NNfunction_ng_chi03::synapse0x223f090() {
   return (neuron0x2230d90()*0.0455783);
}

double NNfunction_ng_chi03::synapse0x223f0d0() {
   return (neuron0x22310d0()*0.0145099);
}

double NNfunction_ng_chi03::synapse0x223f110() {
   return (neuron0x2231410()*-0.00603597);
}

double NNfunction_ng_chi03::synapse0x223f150() {
   return (neuron0x2231750()*0.0089087);
}

double NNfunction_ng_chi03::synapse0x223f190() {
   return (neuron0x2231a90()*-0.0264391);
}

double NNfunction_ng_chi03::synapse0x223f1d0() {
   return (neuron0x2231dd0()*0.0142421);
}

double NNfunction_ng_chi03::synapse0x223f210() {
   return (neuron0x2232110()*-0.0137891);
}

double NNfunction_ng_chi03::synapse0x223f250() {
   return (neuron0x2232450()*0.00283684);
}

double NNfunction_ng_chi03::synapse0x223f290() {
   return (neuron0x2232790()*0.0407595);
}

double NNfunction_ng_chi03::synapse0x223f2d0() {
   return (neuron0x2232ad0()*-0.0146754);
}

double NNfunction_ng_chi03::synapse0x223f310() {
   return (neuron0x2232e10()*0.0280463);
}

double NNfunction_ng_chi03::synapse0x223f350() {
   return (neuron0x2233150()*-0.0808765);
}

double NNfunction_ng_chi03::synapse0x223f390() {
   return (neuron0x2233490()*-0.0035759);
}

double NNfunction_ng_chi03::synapse0x223ee20() {
   return (neuron0x22337d0()*0.00522796);
}

double NNfunction_ng_chi03::synapse0x223ee60() {
   return (neuron0x2233d30()*-0.0497211);
}

double NNfunction_ng_chi03::synapse0x223f4e0() {
   return (neuron0x2234070()*-0.0170432);
}

double NNfunction_ng_chi03::synapse0x223f520() {
   return (neuron0x22343b0()*-0.0149144);
}

double NNfunction_ng_chi03::synapse0x223f560() {
   return (neuron0x22346f0()*-0.00996943);
}

double NNfunction_ng_chi03::synapse0x223f5a0() {
   return (neuron0x2234a30()*0.00396469);
}

double NNfunction_ng_chi03::synapse0x223f5e0() {
   return (neuron0x2234d70()*0.00133885);
}

double NNfunction_ng_chi03::synapse0x223f620() {
   return (neuron0x22350b0()*-2.20651);
}

double NNfunction_ng_chi03::synapse0x223f9a0() {
   return (neuron0x2230460()*0.0515117);
}

double NNfunction_ng_chi03::synapse0x223f9e0() {
   return (neuron0x2230710()*0.213959);
}

double NNfunction_ng_chi03::synapse0x223fa20() {
   return (neuron0x2230a50()*0.101226);
}

double NNfunction_ng_chi03::synapse0x223fa60() {
   return (neuron0x2230d90()*-2.64372);
}

double NNfunction_ng_chi03::synapse0x223faa0() {
   return (neuron0x22310d0()*-0.00163043);
}

double NNfunction_ng_chi03::synapse0x223fae0() {
   return (neuron0x2231410()*-0.11545);
}

double NNfunction_ng_chi03::synapse0x223fb20() {
   return (neuron0x2231750()*-0.0150169);
}

double NNfunction_ng_chi03::synapse0x223fb60() {
   return (neuron0x2231a90()*-0.0221263);
}

double NNfunction_ng_chi03::synapse0x223fba0() {
   return (neuron0x2231dd0()*0.0147703);
}

double NNfunction_ng_chi03::synapse0x223fbe0() {
   return (neuron0x2232110()*-0.0667447);
}

double NNfunction_ng_chi03::synapse0x223fc20() {
   return (neuron0x2232450()*0.00613843);
}

double NNfunction_ng_chi03::synapse0x223fc60() {
   return (neuron0x2232790()*0.0398872);
}

double NNfunction_ng_chi03::synapse0x223fca0() {
   return (neuron0x2232ad0()*0.100127);
}

double NNfunction_ng_chi03::synapse0x223fce0() {
   return (neuron0x2232e10()*-0.0048721);
}

double NNfunction_ng_chi03::synapse0x223fd20() {
   return (neuron0x2233150()*0.018156);
}

double NNfunction_ng_chi03::synapse0x223fd60() {
   return (neuron0x2233490()*0.0197056);
}

double NNfunction_ng_chi03::synapse0x223f7f0() {
   return (neuron0x22337d0()*-0.122556);
}

double NNfunction_ng_chi03::synapse0x223f830() {
   return (neuron0x2233d30()*0.0215377);
}

double NNfunction_ng_chi03::synapse0x223feb0() {
   return (neuron0x2234070()*-0.0379092);
}

double NNfunction_ng_chi03::synapse0x223fef0() {
   return (neuron0x22343b0()*-0.0388356);
}

double NNfunction_ng_chi03::synapse0x223ff30() {
   return (neuron0x22346f0()*-0.0320497);
}

double NNfunction_ng_chi03::synapse0x223ff70() {
   return (neuron0x2234a30()*-0.119338);
}

double NNfunction_ng_chi03::synapse0x223ffb0() {
   return (neuron0x2234d70()*0.021272);
}

double NNfunction_ng_chi03::synapse0x223fff0() {
   return (neuron0x22350b0()*1.08868);
}

double NNfunction_ng_chi03::synapse0x2240370() {
   return (neuron0x2230460()*-0.0167637);
}

double NNfunction_ng_chi03::synapse0x22305f0() {
   return (neuron0x2230710()*-3.8217);
}

double NNfunction_ng_chi03::synapse0x2230630() {
   return (neuron0x2230a50()*1.03951);
}

double NNfunction_ng_chi03::synapse0x2230930() {
   return (neuron0x2230d90()*0.0325031);
}

double NNfunction_ng_chi03::synapse0x2230970() {
   return (neuron0x22310d0()*-0.00204822);
}

double NNfunction_ng_chi03::synapse0x2230c70() {
   return (neuron0x2231410()*-0.00693988);
}

double NNfunction_ng_chi03::synapse0x2230cb0() {
   return (neuron0x2231750()*-0.00467818);
}

double NNfunction_ng_chi03::synapse0x2230fb0() {
   return (neuron0x2231a90()*-0.00277261);
}

double NNfunction_ng_chi03::synapse0x2230ff0() {
   return (neuron0x2231dd0()*0.0101537);
}

double NNfunction_ng_chi03::synapse0x22312f0() {
   return (neuron0x2232110()*0.00301923);
}

double NNfunction_ng_chi03::synapse0x2231330() {
   return (neuron0x2232450()*0.0154874);
}

double NNfunction_ng_chi03::synapse0x2231630() {
   return (neuron0x2232790()*0.238898);
}

double NNfunction_ng_chi03::synapse0x2231670() {
   return (neuron0x2232ad0()*0.0227434);
}

double NNfunction_ng_chi03::synapse0x2231970() {
   return (neuron0x2232e10()*-0.00504817);
}

double NNfunction_ng_chi03::synapse0x22319b0() {
   return (neuron0x2233150()*-0.130381);
}

double NNfunction_ng_chi03::synapse0x2231cb0() {
   return (neuron0x2233490()*-0.0148082);
}

double NNfunction_ng_chi03::synapse0x2231cf0() {
   return (neuron0x22337d0()*0.0152356);
}

double NNfunction_ng_chi03::synapse0x2231ff0() {
   return (neuron0x2233d30()*-0.0242736);
}

double NNfunction_ng_chi03::synapse0x2232030() {
   return (neuron0x2234070()*0.0111113);
}

double NNfunction_ng_chi03::synapse0x2232330() {
   return (neuron0x22343b0()*0.000391143);
}

double NNfunction_ng_chi03::synapse0x2232370() {
   return (neuron0x22346f0()*-0.0108652);
}

double NNfunction_ng_chi03::synapse0x2232670() {
   return (neuron0x2234a30()*-0.00125055);
}

double NNfunction_ng_chi03::synapse0x22326b0() {
   return (neuron0x2234d70()*0.00417054);
}

double NNfunction_ng_chi03::synapse0x22329b0() {
   return (neuron0x22350b0()*-0.3217);
}

double NNfunction_ng_chi03::synapse0x22329f0() {
   return (neuron0x2230460()*-0.127885);
}

double NNfunction_ng_chi03::synapse0x22336b0() {
   return (neuron0x2230710()*0.0171072);
}

double NNfunction_ng_chi03::synapse0x22336f0() {
   return (neuron0x2230a50()*0.80841);
}

double NNfunction_ng_chi03::synapse0x22401c0() {
   return (neuron0x2230d90()*-0.0646316);
}

double NNfunction_ng_chi03::synapse0x2240200() {
   return (neuron0x22310d0()*0.0541465);
}

double NNfunction_ng_chi03::synapse0x22339f0() {
   return (neuron0x2231410()*-0.00100191);
}

double NNfunction_ng_chi03::synapse0x2233a30() {
   return (neuron0x2231750()*-0.0270121);
}

double NNfunction_ng_chi03::synapse0x2233f50() {
   return (neuron0x2231a90()*0.023584);
}

double NNfunction_ng_chi03::synapse0x2233f90() {
   return (neuron0x2231dd0()*0.0567225);
}

double NNfunction_ng_chi03::synapse0x2234290() {
   return (neuron0x2232110()*-0.0216325);
}

double NNfunction_ng_chi03::synapse0x22342d0() {
   return (neuron0x2232450()*0.0178107);
}

double NNfunction_ng_chi03::synapse0x22345d0() {
   return (neuron0x2232790()*-0.946195);
}

double NNfunction_ng_chi03::synapse0x2234610() {
   return (neuron0x2232ad0()*-0.00749111);
}

double NNfunction_ng_chi03::synapse0x2234910() {
   return (neuron0x2232e10()*-0.0280821);
}

double NNfunction_ng_chi03::synapse0x2234950() {
   return (neuron0x2233150()*0.0848293);
}

double NNfunction_ng_chi03::synapse0x2234c50() {
   return (neuron0x2233490()*0.0276228);
}

double NNfunction_ng_chi03::synapse0x2234c90() {
   return (neuron0x22337d0()*-0.0369923);
}

double NNfunction_ng_chi03::synapse0x2234f90() {
   return (neuron0x2233d30()*-0.0437095);
}

double NNfunction_ng_chi03::synapse0x2234fd0() {
   return (neuron0x2234070()*-0.0413441);
}

double NNfunction_ng_chi03::synapse0x22352d0() {
   return (neuron0x22343b0()*-0.0469663);
}

double NNfunction_ng_chi03::synapse0x2235310() {
   return (neuron0x22346f0()*-0.053209);
}

double NNfunction_ng_chi03::synapse0x2232cf0() {
   return (neuron0x2234a30()*-0.0298622);
}

double NNfunction_ng_chi03::synapse0x2232d30() {
   return (neuron0x2234d70()*-0.0504793);
}

double NNfunction_ng_chi03::synapse0x22420e0() {
   return (neuron0x22350b0()*-1.68976);
}

double NNfunction_ng_chi03::synapse0x2242460() {
   return (neuron0x2230460()*-0.00634443);
}

double NNfunction_ng_chi03::synapse0x22424a0() {
   return (neuron0x2230710()*-0.356386);
}

double NNfunction_ng_chi03::synapse0x22424e0() {
   return (neuron0x2230a50()*-0.0306711);
}

double NNfunction_ng_chi03::synapse0x2242520() {
   return (neuron0x2230d90()*-3.27758);
}

double NNfunction_ng_chi03::synapse0x2242560() {
   return (neuron0x22310d0()*0.0105454);
}

double NNfunction_ng_chi03::synapse0x22425a0() {
   return (neuron0x2231410()*0.0178973);
}

double NNfunction_ng_chi03::synapse0x22425e0() {
   return (neuron0x2231750()*0.00589411);
}

double NNfunction_ng_chi03::synapse0x2242620() {
   return (neuron0x2231a90()*0.0567663);
}

double NNfunction_ng_chi03::synapse0x2242660() {
   return (neuron0x2231dd0()*-0.0339565);
}

double NNfunction_ng_chi03::synapse0x22426a0() {
   return (neuron0x2232110()*0.0165206);
}

double NNfunction_ng_chi03::synapse0x22426e0() {
   return (neuron0x2232450()*0.00598481);
}

double NNfunction_ng_chi03::synapse0x2242720() {
   return (neuron0x2232790()*-0.0331782);
}

double NNfunction_ng_chi03::synapse0x2242760() {
   return (neuron0x2232ad0()*-0.242529);
}

double NNfunction_ng_chi03::synapse0x22427a0() {
   return (neuron0x2232e10()*-0.00197824);
}

double NNfunction_ng_chi03::synapse0x22427e0() {
   return (neuron0x2233150()*0.130253);
}

double NNfunction_ng_chi03::synapse0x2242820() {
   return (neuron0x2233490()*-0.0401286);
}

double NNfunction_ng_chi03::synapse0x22422b0() {
   return (neuron0x22337d0()*-0.0196821);
}

double NNfunction_ng_chi03::synapse0x22422f0() {
   return (neuron0x2233d30()*0.0569554);
}

double NNfunction_ng_chi03::synapse0x2242970() {
   return (neuron0x2234070()*-0.0791065);
}

double NNfunction_ng_chi03::synapse0x22429b0() {
   return (neuron0x22343b0()*0.0176431);
}

double NNfunction_ng_chi03::synapse0x22429f0() {
   return (neuron0x22346f0()*0.00480225);
}

double NNfunction_ng_chi03::synapse0x2242a30() {
   return (neuron0x2234a30()*-0.0296749);
}

double NNfunction_ng_chi03::synapse0x2242a70() {
   return (neuron0x2234d70()*-0.000139382);
}

double NNfunction_ng_chi03::synapse0x2242ab0() {
   return (neuron0x22350b0()*-0.204078);
}

double NNfunction_ng_chi03::synapse0x2242e30() {
   return (neuron0x2230460()*-0.127029);
}

double NNfunction_ng_chi03::synapse0x2242e70() {
   return (neuron0x2230710()*0.0114217);
}

double NNfunction_ng_chi03::synapse0x2242eb0() {
   return (neuron0x2230a50()*-0.62664);
}

double NNfunction_ng_chi03::synapse0x2242ef0() {
   return (neuron0x2230d90()*1.17366);
}

double NNfunction_ng_chi03::synapse0x2242f30() {
   return (neuron0x22310d0()*-0.0208981);
}

double NNfunction_ng_chi03::synapse0x2242f70() {
   return (neuron0x2231410()*-0.0251934);
}

double NNfunction_ng_chi03::synapse0x2242fb0() {
   return (neuron0x2231750()*0.0599098);
}

double NNfunction_ng_chi03::synapse0x2242ff0() {
   return (neuron0x2231a90()*-0.0505268);
}

double NNfunction_ng_chi03::synapse0x2243030() {
   return (neuron0x2231dd0()*0.012713);
}

double NNfunction_ng_chi03::synapse0x2243070() {
   return (neuron0x2232110()*-0.0389778);
}

double NNfunction_ng_chi03::synapse0x22430b0() {
   return (neuron0x2232450()*0.0543335);
}

double NNfunction_ng_chi03::synapse0x22430f0() {
   return (neuron0x2232790()*1.25727);
}

double NNfunction_ng_chi03::synapse0x2243130() {
   return (neuron0x2232ad0()*-0.680885);
}

double NNfunction_ng_chi03::synapse0x2243170() {
   return (neuron0x2232e10()*0.0151473);
}

double NNfunction_ng_chi03::synapse0x22431b0() {
   return (neuron0x2233150()*-0.21587);
}

double NNfunction_ng_chi03::synapse0x22431f0() {
   return (neuron0x2233490()*-0.00185959);
}

double NNfunction_ng_chi03::synapse0x2242c80() {
   return (neuron0x22337d0()*-0.0511389);
}

double NNfunction_ng_chi03::synapse0x2242cc0() {
   return (neuron0x2233d30()*-0.148432);
}

double NNfunction_ng_chi03::synapse0x2243340() {
   return (neuron0x2234070()*0.007276);
}

double NNfunction_ng_chi03::synapse0x2243380() {
   return (neuron0x22343b0()*-0.0274487);
}

double NNfunction_ng_chi03::synapse0x22433c0() {
   return (neuron0x22346f0()*-0.0393938);
}

double NNfunction_ng_chi03::synapse0x2243400() {
   return (neuron0x2234a30()*-0.00960815);
}

double NNfunction_ng_chi03::synapse0x2243440() {
   return (neuron0x2234d70()*-0.0323247);
}

double NNfunction_ng_chi03::synapse0x2243480() {
   return (neuron0x22350b0()*0.168283);
}

double NNfunction_ng_chi03::synapse0x2243800() {
   return (neuron0x2230460()*0.0498056);
}

double NNfunction_ng_chi03::synapse0x2243840() {
   return (neuron0x2230710()*0.845113);
}

double NNfunction_ng_chi03::synapse0x2243880() {
   return (neuron0x2230a50()*0.180346);
}

double NNfunction_ng_chi03::synapse0x22438c0() {
   return (neuron0x2230d90()*-0.149988);
}

double NNfunction_ng_chi03::synapse0x2243900() {
   return (neuron0x22310d0()*-0.0665262);
}

double NNfunction_ng_chi03::synapse0x2243940() {
   return (neuron0x2231410()*0.0153963);
}

double NNfunction_ng_chi03::synapse0x2243980() {
   return (neuron0x2231750()*-0.00053004);
}

double NNfunction_ng_chi03::synapse0x22439c0() {
   return (neuron0x2231a90()*0.0428102);
}

double NNfunction_ng_chi03::synapse0x2243a00() {
   return (neuron0x2231dd0()*0.0387818);
}

double NNfunction_ng_chi03::synapse0x2243a40() {
   return (neuron0x2232110()*-0.0143478);
}

double NNfunction_ng_chi03::synapse0x2243a80() {
   return (neuron0x2232450()*0.00115267);
}

double NNfunction_ng_chi03::synapse0x2243ac0() {
   return (neuron0x2232790()*-0.488762);
}

double NNfunction_ng_chi03::synapse0x2243b00() {
   return (neuron0x2232ad0()*-0.0234552);
}

double NNfunction_ng_chi03::synapse0x2243b40() {
   return (neuron0x2232e10()*-0.0687894);
}

double NNfunction_ng_chi03::synapse0x2243b80() {
   return (neuron0x2233150()*0.579769);
}

double NNfunction_ng_chi03::synapse0x2243bc0() {
   return (neuron0x2233490()*-0.0979856);
}

double NNfunction_ng_chi03::synapse0x2243650() {
   return (neuron0x22337d0()*0.0556216);
}

double NNfunction_ng_chi03::synapse0x2243690() {
   return (neuron0x2233d30()*1.597);
}

double NNfunction_ng_chi03::synapse0x2243d10() {
   return (neuron0x2234070()*0.00244103);
}

double NNfunction_ng_chi03::synapse0x2243d50() {
   return (neuron0x22343b0()*-0.0235902);
}

double NNfunction_ng_chi03::synapse0x2243d90() {
   return (neuron0x22346f0()*-0.0497192);
}

double NNfunction_ng_chi03::synapse0x2243dd0() {
   return (neuron0x2234a30()*0.0708012);
}

double NNfunction_ng_chi03::synapse0x2243e10() {
   return (neuron0x2234d70()*-6.35242e-06);
}

double NNfunction_ng_chi03::synapse0x2243e50() {
   return (neuron0x22350b0()*-0.167177);
}

double NNfunction_ng_chi03::synapse0x22441d0() {
   return (neuron0x2230460()*0.0593776);
}

double NNfunction_ng_chi03::synapse0x2244210() {
   return (neuron0x2230710()*0.343153);
}

double NNfunction_ng_chi03::synapse0x2244250() {
   return (neuron0x2230a50()*0.021552);
}

double NNfunction_ng_chi03::synapse0x2244290() {
   return (neuron0x2230d90()*-0.488843);
}

double NNfunction_ng_chi03::synapse0x22442d0() {
   return (neuron0x22310d0()*0.0304674);
}

double NNfunction_ng_chi03::synapse0x2244310() {
   return (neuron0x2231410()*-0.0404292);
}

double NNfunction_ng_chi03::synapse0x2244350() {
   return (neuron0x2231750()*0.0152394);
}

double NNfunction_ng_chi03::synapse0x2244390() {
   return (neuron0x2231a90()*-0.0333404);
}

double NNfunction_ng_chi03::synapse0x22443d0() {
   return (neuron0x2231dd0()*0.0560522);
}

double NNfunction_ng_chi03::synapse0x2244410() {
   return (neuron0x2232110()*0.0854057);
}

double NNfunction_ng_chi03::synapse0x2244450() {
   return (neuron0x2232450()*-0.0211889);
}

double NNfunction_ng_chi03::synapse0x2244490() {
   return (neuron0x2232790()*-0.122142);
}

double NNfunction_ng_chi03::synapse0x22444d0() {
   return (neuron0x2232ad0()*0.0800949);
}

double NNfunction_ng_chi03::synapse0x2244510() {
   return (neuron0x2232e10()*-0.0618708);
}

double NNfunction_ng_chi03::synapse0x2244550() {
   return (neuron0x2233150()*-0.632542);
}

double NNfunction_ng_chi03::synapse0x2244590() {
   return (neuron0x2233490()*-0.0361);
}

double NNfunction_ng_chi03::synapse0x2244020() {
   return (neuron0x22337d0()*-0.00940035);
}

double NNfunction_ng_chi03::synapse0x2244060() {
   return (neuron0x2233d30()*1.62747);
}

double NNfunction_ng_chi03::synapse0x22446e0() {
   return (neuron0x2234070()*0.0112618);
}

double NNfunction_ng_chi03::synapse0x2244720() {
   return (neuron0x22343b0()*0.0153075);
}

double NNfunction_ng_chi03::synapse0x2244760() {
   return (neuron0x22346f0()*-0.0335152);
}

double NNfunction_ng_chi03::synapse0x22447a0() {
   return (neuron0x2234a30()*0.00615006);
}

double NNfunction_ng_chi03::synapse0x22447e0() {
   return (neuron0x2234d70()*-0.0306876);
}

double NNfunction_ng_chi03::synapse0x2244820() {
   return (neuron0x22350b0()*-0.184696);
}

double NNfunction_ng_chi03::synapse0x2244ba0() {
   return (neuron0x2230460()*-0.0376738);
}

double NNfunction_ng_chi03::synapse0x2244be0() {
   return (neuron0x2230710()*-2.59013);
}

double NNfunction_ng_chi03::synapse0x2244c20() {
   return (neuron0x2230a50()*1.89693);
}

double NNfunction_ng_chi03::synapse0x2244c60() {
   return (neuron0x2230d90()*-0.0529706);
}

double NNfunction_ng_chi03::synapse0x2244ca0() {
   return (neuron0x22310d0()*0.000135464);
}

double NNfunction_ng_chi03::synapse0x2244ce0() {
   return (neuron0x2231410()*0.00989295);
}

double NNfunction_ng_chi03::synapse0x2244d20() {
   return (neuron0x2231750()*-0.0257811);
}

double NNfunction_ng_chi03::synapse0x2244d60() {
   return (neuron0x2231a90()*0.00184397);
}

double NNfunction_ng_chi03::synapse0x2244da0() {
   return (neuron0x2231dd0()*0.0420303);
}

double NNfunction_ng_chi03::synapse0x223cf60() {
   return (neuron0x2232110()*0.0150774);
}

double NNfunction_ng_chi03::synapse0x223cfa0() {
   return (neuron0x2232450()*0.0339872);
}

double NNfunction_ng_chi03::synapse0x223cfe0() {
   return (neuron0x2232790()*0.499947);
}

double NNfunction_ng_chi03::synapse0x223d020() {
   return (neuron0x2232ad0()*-0.00780398);
}

double NNfunction_ng_chi03::synapse0x223d060() {
   return (neuron0x2232e10()*0.0250006);
}

double NNfunction_ng_chi03::synapse0x223d0a0() {
   return (neuron0x2233150()*-0.184708);
}

double NNfunction_ng_chi03::synapse0x223d0e0() {
   return (neuron0x2233490()*-0.0188528);
}

double NNfunction_ng_chi03::synapse0x22449f0() {
   return (neuron0x22337d0()*0.0164711);
}

double NNfunction_ng_chi03::synapse0x2244a30() {
   return (neuron0x2233d30()*-0.0163411);
}

double NNfunction_ng_chi03::synapse0x223d230() {
   return (neuron0x2234070()*0.0187746);
}

double NNfunction_ng_chi03::synapse0x223d270() {
   return (neuron0x22343b0()*-0.00291734);
}

double NNfunction_ng_chi03::synapse0x223d2b0() {
   return (neuron0x22346f0()*-0.0274738);
}

double NNfunction_ng_chi03::synapse0x223d2f0() {
   return (neuron0x2234a30()*-0.00660996);
}

double NNfunction_ng_chi03::synapse0x223d330() {
   return (neuron0x2234d70()*-0.0344227);
}

double NNfunction_ng_chi03::synapse0x223d370() {
   return (neuron0x22350b0()*-0.552623);
}

double NNfunction_ng_chi03::synapse0x223d6f0() {
   return (neuron0x2230460()*-0.0995547);
}

double NNfunction_ng_chi03::synapse0x223d730() {
   return (neuron0x2230710()*-0.0233551);
}

double NNfunction_ng_chi03::synapse0x223d770() {
   return (neuron0x2230a50()*0.213575);
}

double NNfunction_ng_chi03::synapse0x223d7b0() {
   return (neuron0x2230d90()*-3.16263);
}

double NNfunction_ng_chi03::synapse0x223d7f0() {
   return (neuron0x22310d0()*-0.0323006);
}

double NNfunction_ng_chi03::synapse0x223d830() {
   return (neuron0x2231410()*0.109904);
}

double NNfunction_ng_chi03::synapse0x223d870() {
   return (neuron0x2231750()*-0.0507032);
}

double NNfunction_ng_chi03::synapse0x223d8b0() {
   return (neuron0x2231a90()*-0.0753605);
}

double NNfunction_ng_chi03::synapse0x223d8f0() {
   return (neuron0x2231dd0()*-0.00548524);
}

double NNfunction_ng_chi03::synapse0x223d930() {
   return (neuron0x2232110()*0.0132557);
}

double NNfunction_ng_chi03::synapse0x223d970() {
   return (neuron0x2232450()*-0.0344237);
}

double NNfunction_ng_chi03::synapse0x223d9b0() {
   return (neuron0x2232790()*2.07513);
}

double NNfunction_ng_chi03::synapse0x223d9f0() {
   return (neuron0x2232ad0()*-0.342805);
}

double NNfunction_ng_chi03::synapse0x223da30() {
   return (neuron0x2232e10()*0.008904);
}

double NNfunction_ng_chi03::synapse0x223da70() {
   return (neuron0x2233150()*0.100955);
}

double NNfunction_ng_chi03::synapse0x223dab0() {
   return (neuron0x2233490()*-0.137292);
}

double NNfunction_ng_chi03::synapse0x223d540() {
   return (neuron0x22337d0()*-0.00653148);
}

double NNfunction_ng_chi03::synapse0x223d580() {
   return (neuron0x2233d30()*-0.120564);
}

double NNfunction_ng_chi03::synapse0x223dc00() {
   return (neuron0x2234070()*-0.0371347);
}

double NNfunction_ng_chi03::synapse0x223dc40() {
   return (neuron0x22343b0()*-0.00933369);
}

double NNfunction_ng_chi03::synapse0x223dc80() {
   return (neuron0x22346f0()*-0.0146231);
}

double NNfunction_ng_chi03::synapse0x223dcc0() {
   return (neuron0x2234a30()*-0.0317083);
}

double NNfunction_ng_chi03::synapse0x223dd00() {
   return (neuron0x2234d70()*-0.0661289);
}

double NNfunction_ng_chi03::synapse0x223dd40() {
   return (neuron0x22350b0()*-0.128258);
}

double NNfunction_ng_chi03::synapse0x223df10() {
   return (neuron0x2230460()*-0.129861);
}

double NNfunction_ng_chi03::synapse0x2246fa0() {
   return (neuron0x2230710()*-0.00408);
}

double NNfunction_ng_chi03::synapse0x2246fe0() {
   return (neuron0x2230a50()*0.818206);
}

double NNfunction_ng_chi03::synapse0x2247020() {
   return (neuron0x2230d90()*1.00463);
}

double NNfunction_ng_chi03::synapse0x2247060() {
   return (neuron0x22310d0()*0.0287818);
}

double NNfunction_ng_chi03::synapse0x22470a0() {
   return (neuron0x2231410()*0.0690962);
}

double NNfunction_ng_chi03::synapse0x22470e0() {
   return (neuron0x2231750()*-0.121784);
}

double NNfunction_ng_chi03::synapse0x2247120() {
   return (neuron0x2231a90()*-0.0309451);
}

double NNfunction_ng_chi03::synapse0x2247160() {
   return (neuron0x2231dd0()*-0.0639434);
}

double NNfunction_ng_chi03::synapse0x22471a0() {
   return (neuron0x2232110()*0.0190085);
}

double NNfunction_ng_chi03::synapse0x22471e0() {
   return (neuron0x2232450()*-0.171953);
}

double NNfunction_ng_chi03::synapse0x2247220() {
   return (neuron0x2232790()*-1.62357);
}

double NNfunction_ng_chi03::synapse0x2247260() {
   return (neuron0x2232ad0()*0.532223);
}

double NNfunction_ng_chi03::synapse0x22472a0() {
   return (neuron0x2232e10()*-0.0453099);
}

double NNfunction_ng_chi03::synapse0x22472e0() {
   return (neuron0x2233150()*0.189885);
}

double NNfunction_ng_chi03::synapse0x2247320() {
   return (neuron0x2233490()*0.0211545);
}

double NNfunction_ng_chi03::synapse0x2246df0() {
   return (neuron0x22337d0()*-0.0350945);
}

double NNfunction_ng_chi03::synapse0x2246e30() {
   return (neuron0x2233d30()*0.142214);
}

double NNfunction_ng_chi03::synapse0x2247470() {
   return (neuron0x2234070()*0.0549622);
}

double NNfunction_ng_chi03::synapse0x22474b0() {
   return (neuron0x22343b0()*-0.0629247);
}

double NNfunction_ng_chi03::synapse0x22474f0() {
   return (neuron0x22346f0()*-0.112189);
}

double NNfunction_ng_chi03::synapse0x2247530() {
   return (neuron0x2234a30()*-0.119436);
}

double NNfunction_ng_chi03::synapse0x2247570() {
   return (neuron0x2234d70()*-0.08657);
}

double NNfunction_ng_chi03::synapse0x22475b0() {
   return (neuron0x22350b0()*0.0396071);
}

double NNfunction_ng_chi03::synapse0x2247930() {
   return (neuron0x2230460()*-0.0420307);
}

double NNfunction_ng_chi03::synapse0x2247970() {
   return (neuron0x2230710()*0.074392);
}

double NNfunction_ng_chi03::synapse0x22479b0() {
   return (neuron0x2230a50()*0.35996);
}

double NNfunction_ng_chi03::synapse0x22479f0() {
   return (neuron0x2230d90()*-0.0199692);
}

double NNfunction_ng_chi03::synapse0x2247a30() {
   return (neuron0x22310d0()*-0.0111257);
}

double NNfunction_ng_chi03::synapse0x2247a70() {
   return (neuron0x2231410()*-0.0131719);
}

double NNfunction_ng_chi03::synapse0x2247ab0() {
   return (neuron0x2231750()*-0.00605663);
}

double NNfunction_ng_chi03::synapse0x2247af0() {
   return (neuron0x2231a90()*-0.0249557);
}

double NNfunction_ng_chi03::synapse0x2247b30() {
   return (neuron0x2231dd0()*0.00666004);
}

double NNfunction_ng_chi03::synapse0x2247b70() {
   return (neuron0x2232110()*-0.037452);
}

double NNfunction_ng_chi03::synapse0x2247bb0() {
   return (neuron0x2232450()*0.0169972);
}

double NNfunction_ng_chi03::synapse0x2247bf0() {
   return (neuron0x2232790()*0.309935);
}

double NNfunction_ng_chi03::synapse0x2247c30() {
   return (neuron0x2232ad0()*0.0296808);
}

double NNfunction_ng_chi03::synapse0x2247c70() {
   return (neuron0x2232e10()*0.04736);
}

double NNfunction_ng_chi03::synapse0x2247cb0() {
   return (neuron0x2233150()*-0.102649);
}

double NNfunction_ng_chi03::synapse0x2247cf0() {
   return (neuron0x2233490()*-0.0143721);
}

double NNfunction_ng_chi03::synapse0x2247780() {
   return (neuron0x22337d0()*0.0182155);
}

double NNfunction_ng_chi03::synapse0x22477c0() {
   return (neuron0x2233d30()*0.0307805);
}

double NNfunction_ng_chi03::synapse0x2247e40() {
   return (neuron0x2234070()*0.00192146);
}

double NNfunction_ng_chi03::synapse0x2247e80() {
   return (neuron0x22343b0()*-0.00543977);
}

double NNfunction_ng_chi03::synapse0x2247ec0() {
   return (neuron0x22346f0()*-0.00325588);
}

double NNfunction_ng_chi03::synapse0x2247f00() {
   return (neuron0x2234a30()*0.00322631);
}

double NNfunction_ng_chi03::synapse0x2247f40() {
   return (neuron0x2234d70()*0.0116948);
}

double NNfunction_ng_chi03::synapse0x2247f80() {
   return (neuron0x22350b0()*1.64557);
}

double NNfunction_ng_chi03::synapse0x2248300() {
   return (neuron0x2230460()*0.196166);
}

double NNfunction_ng_chi03::synapse0x2248340() {
   return (neuron0x2230710()*0.131654);
}

double NNfunction_ng_chi03::synapse0x2248380() {
   return (neuron0x2230a50()*0.16944);
}

double NNfunction_ng_chi03::synapse0x22483c0() {
   return (neuron0x2230d90()*-3.26945);
}

double NNfunction_ng_chi03::synapse0x2248400() {
   return (neuron0x22310d0()*0.411047);
}

double NNfunction_ng_chi03::synapse0x2248440() {
   return (neuron0x2231410()*-0.0229474);
}

double NNfunction_ng_chi03::synapse0x2248480() {
   return (neuron0x2231750()*-0.0147798);
}

double NNfunction_ng_chi03::synapse0x22484c0() {
   return (neuron0x2231a90()*-0.177955);
}

double NNfunction_ng_chi03::synapse0x2248500() {
   return (neuron0x2231dd0()*-0.108994);
}

double NNfunction_ng_chi03::synapse0x2248540() {
   return (neuron0x2232110()*-0.34022);
}

double NNfunction_ng_chi03::synapse0x2248580() {
   return (neuron0x2232450()*0.158498);
}

double NNfunction_ng_chi03::synapse0x22485c0() {
   return (neuron0x2232790()*-0.139688);
}

double NNfunction_ng_chi03::synapse0x2248600() {
   return (neuron0x2232ad0()*0.222429);
}

double NNfunction_ng_chi03::synapse0x2248640() {
   return (neuron0x2232e10()*-0.107814);
}

double NNfunction_ng_chi03::synapse0x2248680() {
   return (neuron0x2233150()*-0.821415);
}

double NNfunction_ng_chi03::synapse0x22486c0() {
   return (neuron0x2233490()*0.639326);
}

double NNfunction_ng_chi03::synapse0x2248150() {
   return (neuron0x22337d0()*-0.387602);
}

double NNfunction_ng_chi03::synapse0x2248190() {
   return (neuron0x2233d30()*0.606481);
}

double NNfunction_ng_chi03::synapse0x2248810() {
   return (neuron0x2234070()*-0.0612009);
}

double NNfunction_ng_chi03::synapse0x2248850() {
   return (neuron0x22343b0()*-0.272344);
}

double NNfunction_ng_chi03::synapse0x2248890() {
   return (neuron0x22346f0()*-0.0148332);
}

double NNfunction_ng_chi03::synapse0x22488d0() {
   return (neuron0x2234a30()*-0.126935);
}

double NNfunction_ng_chi03::synapse0x2248910() {
   return (neuron0x2234d70()*0.0211045);
}

double NNfunction_ng_chi03::synapse0x2248950() {
   return (neuron0x22350b0()*0.990435);
}

double NNfunction_ng_chi03::synapse0x2248cd0() {
   return (neuron0x2230460()*-0.0139991);
}

double NNfunction_ng_chi03::synapse0x2248d10() {
   return (neuron0x2230710()*-0.0175316);
}

double NNfunction_ng_chi03::synapse0x2248d50() {
   return (neuron0x2230a50()*1.11646);
}

double NNfunction_ng_chi03::synapse0x2248d90() {
   return (neuron0x2230d90()*-0.747213);
}

double NNfunction_ng_chi03::synapse0x2248dd0() {
   return (neuron0x22310d0()*0.018272);
}

double NNfunction_ng_chi03::synapse0x2248e10() {
   return (neuron0x2231410()*0.0239413);
}

double NNfunction_ng_chi03::synapse0x2248e50() {
   return (neuron0x2231750()*-0.00918744);
}

double NNfunction_ng_chi03::synapse0x2248e90() {
   return (neuron0x2231a90()*-0.0192438);
}

double NNfunction_ng_chi03::synapse0x2248ed0() {
   return (neuron0x2231dd0()*0.00789972);
}

double NNfunction_ng_chi03::synapse0x2248f10() {
   return (neuron0x2232110()*-0.0230513);
}

double NNfunction_ng_chi03::synapse0x2248f50() {
   return (neuron0x2232450()*0.0306926);
}

double NNfunction_ng_chi03::synapse0x2248f90() {
   return (neuron0x2232790()*0.876922);
}

double NNfunction_ng_chi03::synapse0x2248fd0() {
   return (neuron0x2232ad0()*-0.00622436);
}

double NNfunction_ng_chi03::synapse0x2249010() {
   return (neuron0x2232e10()*-0.0287151);
}

double NNfunction_ng_chi03::synapse0x2249050() {
   return (neuron0x2233150()*0.0187143);
}

double NNfunction_ng_chi03::synapse0x2249090() {
   return (neuron0x2233490()*-0.035145);
}

double NNfunction_ng_chi03::synapse0x2248b20() {
   return (neuron0x22337d0()*-0.024672);
}

double NNfunction_ng_chi03::synapse0x2248b60() {
   return (neuron0x2233d30()*-0.0416217);
}

double NNfunction_ng_chi03::synapse0x22491e0() {
   return (neuron0x2234070()*0.00118909);
}

double NNfunction_ng_chi03::synapse0x2249220() {
   return (neuron0x22343b0()*-0.000338303);
}

double NNfunction_ng_chi03::synapse0x2249260() {
   return (neuron0x22346f0()*0.0132305);
}

double NNfunction_ng_chi03::synapse0x22492a0() {
   return (neuron0x2234a30()*-0.0471093);
}

double NNfunction_ng_chi03::synapse0x22492e0() {
   return (neuron0x2234d70()*-0.00491179);
}

double NNfunction_ng_chi03::synapse0x2249320() {
   return (neuron0x22350b0()*-0.249587);
}

double NNfunction_ng_chi03::synapse0x22496a0() {
   return (neuron0x2230460()*-0.0301294);
}

double NNfunction_ng_chi03::synapse0x22496e0() {
   return (neuron0x2230710()*-0.0104198);
}

double NNfunction_ng_chi03::synapse0x2249720() {
   return (neuron0x2230a50()*-0.0609744);
}

double NNfunction_ng_chi03::synapse0x2249760() {
   return (neuron0x2230d90()*-7.4529);
}

double NNfunction_ng_chi03::synapse0x22497a0() {
   return (neuron0x22310d0()*0.00288455);
}

double NNfunction_ng_chi03::synapse0x22497e0() {
   return (neuron0x2231410()*-0.0194278);
}

double NNfunction_ng_chi03::synapse0x2249820() {
   return (neuron0x2231750()*0.0107317);
}

double NNfunction_ng_chi03::synapse0x2249860() {
   return (neuron0x2231a90()*0.0158707);
}

double NNfunction_ng_chi03::synapse0x22498a0() {
   return (neuron0x2231dd0()*0.00871092);
}

double NNfunction_ng_chi03::synapse0x22498e0() {
   return (neuron0x2232110()*-0.00262156);
}

double NNfunction_ng_chi03::synapse0x2249920() {
   return (neuron0x2232450()*-0.00861927);
}

double NNfunction_ng_chi03::synapse0x2249960() {
   return (neuron0x2232790()*0.0547145);
}

double NNfunction_ng_chi03::synapse0x22499a0() {
   return (neuron0x2232ad0()*0.0474342);
}

double NNfunction_ng_chi03::synapse0x22499e0() {
   return (neuron0x2232e10()*-0.0186453);
}

double NNfunction_ng_chi03::synapse0x2249a20() {
   return (neuron0x2233150()*-0.000689586);
}

double NNfunction_ng_chi03::synapse0x2249a60() {
   return (neuron0x2233490()*0.0177891);
}

double NNfunction_ng_chi03::synapse0x22494f0() {
   return (neuron0x22337d0()*-0.00928636);
}

double NNfunction_ng_chi03::synapse0x2249530() {
   return (neuron0x2233d30()*0.0118859);
}

double NNfunction_ng_chi03::synapse0x2249bb0() {
   return (neuron0x2234070()*-0.0107614);
}

double NNfunction_ng_chi03::synapse0x2249bf0() {
   return (neuron0x22343b0()*-0.0125989);
}

double NNfunction_ng_chi03::synapse0x2249c30() {
   return (neuron0x22346f0()*-0.0153901);
}

double NNfunction_ng_chi03::synapse0x2249c70() {
   return (neuron0x2234a30()*0.00842887);
}

double NNfunction_ng_chi03::synapse0x2249cb0() {
   return (neuron0x2234d70()*-0.00151248);
}

double NNfunction_ng_chi03::synapse0x2249cf0() {
   return (neuron0x22350b0()*-0.0978215);
}

double NNfunction_ng_chi03::synapse0x224a070() {
   return (neuron0x2230460()*0.00308422);
}

double NNfunction_ng_chi03::synapse0x224a0b0() {
   return (neuron0x2230710()*-9.30709);
}

double NNfunction_ng_chi03::synapse0x224a0f0() {
   return (neuron0x2230a50()*-4.40334);
}

double NNfunction_ng_chi03::synapse0x224a130() {
   return (neuron0x2230d90()*-0.0613016);
}

double NNfunction_ng_chi03::synapse0x224a170() {
   return (neuron0x22310d0()*0.0012806);
}

double NNfunction_ng_chi03::synapse0x224a1b0() {
   return (neuron0x2231410()*0.0273764);
}

double NNfunction_ng_chi03::synapse0x224a1f0() {
   return (neuron0x2231750()*0.0436922);
}

double NNfunction_ng_chi03::synapse0x224a230() {
   return (neuron0x2231a90()*-0.0288338);
}

double NNfunction_ng_chi03::synapse0x224a270() {
   return (neuron0x2231dd0()*-0.00589873);
}

double NNfunction_ng_chi03::synapse0x224a2b0() {
   return (neuron0x2232110()*-0.00464103);
}

double NNfunction_ng_chi03::synapse0x224a2f0() {
   return (neuron0x2232450()*-0.00935138);
}

double NNfunction_ng_chi03::synapse0x224a330() {
   return (neuron0x2232790()*-0.209638);
}

double NNfunction_ng_chi03::synapse0x224a370() {
   return (neuron0x2232ad0()*-0.0555372);
}

double NNfunction_ng_chi03::synapse0x224a3b0() {
   return (neuron0x2232e10()*-0.0163075);
}

double NNfunction_ng_chi03::synapse0x224a3f0() {
   return (neuron0x2233150()*0.281616);
}

double NNfunction_ng_chi03::synapse0x224a430() {
   return (neuron0x2233490()*0.0218686);
}

double NNfunction_ng_chi03::synapse0x2249ec0() {
   return (neuron0x22337d0()*0.0943539);
}

double NNfunction_ng_chi03::synapse0x2249f00() {
   return (neuron0x2233d30()*0.0172151);
}

double NNfunction_ng_chi03::synapse0x224a580() {
   return (neuron0x2234070()*0.00986535);
}

double NNfunction_ng_chi03::synapse0x224a5c0() {
   return (neuron0x22343b0()*-0.055692);
}

double NNfunction_ng_chi03::synapse0x224a600() {
   return (neuron0x22346f0()*-0.0485912);
}

double NNfunction_ng_chi03::synapse0x224a640() {
   return (neuron0x2234a30()*0.00609588);
}

double NNfunction_ng_chi03::synapse0x224a680() {
   return (neuron0x2234d70()*0.0080705);
}

double NNfunction_ng_chi03::synapse0x224a6c0() {
   return (neuron0x22350b0()*0.148355);
}

double NNfunction_ng_chi03::synapse0x224aa40() {
   return (neuron0x2230460()*-0.0183437);
}

double NNfunction_ng_chi03::synapse0x224aa80() {
   return (neuron0x2230710()*0.00336273);
}

double NNfunction_ng_chi03::synapse0x224aac0() {
   return (neuron0x2230a50()*-0.242389);
}

double NNfunction_ng_chi03::synapse0x224ab00() {
   return (neuron0x2230d90()*-1.08196);
}

double NNfunction_ng_chi03::synapse0x224ab40() {
   return (neuron0x22310d0()*-0.00122748);
}

double NNfunction_ng_chi03::synapse0x224ab80() {
   return (neuron0x2231410()*0.00179487);
}

double NNfunction_ng_chi03::synapse0x224abc0() {
   return (neuron0x2231750()*0.000777109);
}

double NNfunction_ng_chi03::synapse0x224ac00() {
   return (neuron0x2231a90()*0.00586856);
}

double NNfunction_ng_chi03::synapse0x224ac40() {
   return (neuron0x2231dd0()*-0.00702348);
}

double NNfunction_ng_chi03::synapse0x224ac80() {
   return (neuron0x2232110()*0.0100057);
}

double NNfunction_ng_chi03::synapse0x224acc0() {
   return (neuron0x2232450()*0.00397611);
}

double NNfunction_ng_chi03::synapse0x224ad00() {
   return (neuron0x2232790()*0.0831467);
}

double NNfunction_ng_chi03::synapse0x224ad40() {
   return (neuron0x2232ad0()*0.026955);
}

double NNfunction_ng_chi03::synapse0x224ad80() {
   return (neuron0x2232e10()*0.00294665);
}

double NNfunction_ng_chi03::synapse0x224adc0() {
   return (neuron0x2233150()*0.00563327);
}

double NNfunction_ng_chi03::synapse0x224ae00() {
   return (neuron0x2233490()*-0.0048704);
}

double NNfunction_ng_chi03::synapse0x224a890() {
   return (neuron0x22337d0()*0.00804462);
}

double NNfunction_ng_chi03::synapse0x224a8d0() {
   return (neuron0x2233d30()*0.0082259);
}

double NNfunction_ng_chi03::synapse0x224af50() {
   return (neuron0x2234070()*-0.00504021);
}

double NNfunction_ng_chi03::synapse0x224af90() {
   return (neuron0x22343b0()*-0.00917981);
}

double NNfunction_ng_chi03::synapse0x224afd0() {
   return (neuron0x22346f0()*-0.00127697);
}

double NNfunction_ng_chi03::synapse0x224b010() {
   return (neuron0x2234a30()*-0.00287603);
}

double NNfunction_ng_chi03::synapse0x224b050() {
   return (neuron0x2234d70()*-0.00285428);
}

double NNfunction_ng_chi03::synapse0x224b090() {
   return (neuron0x22350b0()*-0.136589);
}

double NNfunction_ng_chi03::synapse0x224b410() {
   return (neuron0x2230460()*0.049447);
}

double NNfunction_ng_chi03::synapse0x224b450() {
   return (neuron0x2230710()*0.0162481);
}

double NNfunction_ng_chi03::synapse0x224b490() {
   return (neuron0x2230a50()*-0.165582);
}

double NNfunction_ng_chi03::synapse0x224b4d0() {
   return (neuron0x2230d90()*-0.0326492);
}

double NNfunction_ng_chi03::synapse0x224b510() {
   return (neuron0x22310d0()*0.00817548);
}

double NNfunction_ng_chi03::synapse0x224b550() {
   return (neuron0x2231410()*-0.00587176);
}

double NNfunction_ng_chi03::synapse0x224b590() {
   return (neuron0x2231750()*0.0247235);
}

double NNfunction_ng_chi03::synapse0x224b5d0() {
   return (neuron0x2231a90()*-0.0370894);
}

double NNfunction_ng_chi03::synapse0x224b610() {
   return (neuron0x2231dd0()*0.0208219);
}

double NNfunction_ng_chi03::synapse0x224b650() {
   return (neuron0x2232110()*0.00524687);
}

double NNfunction_ng_chi03::synapse0x224b690() {
   return (neuron0x2232450()*-0.0121347);
}

double NNfunction_ng_chi03::synapse0x224b6d0() {
   return (neuron0x2232790()*0.495434);
}

double NNfunction_ng_chi03::synapse0x224b710() {
   return (neuron0x2232ad0()*-0.88387);
}

double NNfunction_ng_chi03::synapse0x224b750() {
   return (neuron0x2232e10()*0.0185819);
}

double NNfunction_ng_chi03::synapse0x224b790() {
   return (neuron0x2233150()*-0.0453085);
}

double NNfunction_ng_chi03::synapse0x224b7d0() {
   return (neuron0x2233490()*0.0139404);
}

double NNfunction_ng_chi03::synapse0x224b260() {
   return (neuron0x22337d0()*0.031655);
}

double NNfunction_ng_chi03::synapse0x224b2a0() {
   return (neuron0x2233d30()*0.0281962);
}

double NNfunction_ng_chi03::synapse0x224b920() {
   return (neuron0x2234070()*-0.0232198);
}

double NNfunction_ng_chi03::synapse0x224b960() {
   return (neuron0x22343b0()*-0.0214617);
}

double NNfunction_ng_chi03::synapse0x224b9a0() {
   return (neuron0x22346f0()*-0.0201448);
}

double NNfunction_ng_chi03::synapse0x224b9e0() {
   return (neuron0x2234a30()*-0.000802162);
}

double NNfunction_ng_chi03::synapse0x224ba20() {
   return (neuron0x2234d70()*-0.0170637);
}

double NNfunction_ng_chi03::synapse0x224ba60() {
   return (neuron0x22350b0()*0.0848655);
}

double NNfunction_ng_chi03::synapse0x224bde0() {
   return (neuron0x2230460()*-0.0246455);
}

double NNfunction_ng_chi03::synapse0x22403b0() {
   return (neuron0x2230710()*-0.0119255);
}

double NNfunction_ng_chi03::synapse0x22403f0() {
   return (neuron0x2230a50()*-0.120553);
}

double NNfunction_ng_chi03::synapse0x2240430() {
   return (neuron0x2230d90()*4.00836);
}

double NNfunction_ng_chi03::synapse0x2240680() {
   return (neuron0x22310d0()*0.0292045);
}

double NNfunction_ng_chi03::synapse0x22406c0() {
   return (neuron0x2231410()*0.00631398);
}

double NNfunction_ng_chi03::synapse0x2240700() {
   return (neuron0x2231750()*-0.0154447);
}

double NNfunction_ng_chi03::synapse0x2240950() {
   return (neuron0x2231a90()*0.0257767);
}

double NNfunction_ng_chi03::synapse0x2240990() {
   return (neuron0x2231dd0()*-0.00199549);
}

double NNfunction_ng_chi03::synapse0x2240be0() {
   return (neuron0x2232110()*-0.0140162);
}

double NNfunction_ng_chi03::synapse0x2240c20() {
   return (neuron0x2232450()*0.00761722);
}

double NNfunction_ng_chi03::synapse0x2240c60() {
   return (neuron0x2232790()*-0.0328531);
}

double NNfunction_ng_chi03::synapse0x2240eb0() {
   return (neuron0x2232ad0()*-0.0176559);
}

double NNfunction_ng_chi03::synapse0x2240ef0() {
   return (neuron0x2232e10()*-0.00386419);
}

double NNfunction_ng_chi03::synapse0x2241140() {
   return (neuron0x2233150()*-0.0232891);
}

double NNfunction_ng_chi03::synapse0x2241180() {
   return (neuron0x2233490()*0.00630394);
}

double NNfunction_ng_chi03::synapse0x224bc30() {
   return (neuron0x22337d0()*0.0128699);
}

double NNfunction_ng_chi03::synapse0x224bc70() {
   return (neuron0x2233d30()*0.0245956);
}

double NNfunction_ng_chi03::synapse0x22412d0() {
   return (neuron0x2234070()*-0.0435466);
}

double NNfunction_ng_chi03::synapse0x22417e0() {
   return (neuron0x22343b0()*-0.0151039);
}

double NNfunction_ng_chi03::synapse0x2241820() {
   return (neuron0x22346f0()*-0.0122223);
}

double NNfunction_ng_chi03::synapse0x2241860() {
   return (neuron0x2234a30()*-0.00331511);
}

double NNfunction_ng_chi03::synapse0x2241ab0() {
   return (neuron0x2234d70()*0.00168741);
}

double NNfunction_ng_chi03::synapse0x2241af0() {
   return (neuron0x22350b0()*-0.0826379);
}

double NNfunction_ng_chi03::synapse0x22413a0() {
   return (neuron0x2230460()*0.0111716);
}

double NNfunction_ng_chi03::synapse0x22413e0() {
   return (neuron0x2230710()*0.107047);
}

double NNfunction_ng_chi03::synapse0x2241420() {
   return (neuron0x2230a50()*0.337666);
}

double NNfunction_ng_chi03::synapse0x2241460() {
   return (neuron0x2230d90()*0.567866);
}

double NNfunction_ng_chi03::synapse0x2241de0() {
   return (neuron0x22310d0()*0.0764414);
}

double NNfunction_ng_chi03::synapse0x224e130() {
   return (neuron0x2231410()*-0.080163);
}

double NNfunction_ng_chi03::synapse0x224e170() {
   return (neuron0x2231750()*-0.0340049);
}

double NNfunction_ng_chi03::synapse0x224e1b0() {
   return (neuron0x2231a90()*0.0664948);
}

double NNfunction_ng_chi03::synapse0x224e1f0() {
   return (neuron0x2231dd0()*-0.00950511);
}

double NNfunction_ng_chi03::synapse0x224e230() {
   return (neuron0x2232110()*-0.0527476);
}

double NNfunction_ng_chi03::synapse0x224e270() {
   return (neuron0x2232450()*0.0343248);
}

double NNfunction_ng_chi03::synapse0x224e2b0() {
   return (neuron0x2232790()*0.0289895);
}

double NNfunction_ng_chi03::synapse0x224e2f0() {
   return (neuron0x2232ad0()*-0.433988);
}

double NNfunction_ng_chi03::synapse0x224e330() {
   return (neuron0x2232e10()*-0.0649034);
}

double NNfunction_ng_chi03::synapse0x224e370() {
   return (neuron0x2233150()*-0.429377);
}

double NNfunction_ng_chi03::synapse0x224e3b0() {
   return (neuron0x2233490()*0.0299538);
}

double NNfunction_ng_chi03::synapse0x2241cc0() {
   return (neuron0x22337d0()*-0.0418749);
}

double NNfunction_ng_chi03::synapse0x2241d00() {
   return (neuron0x2233d30()*0.307286);
}

double NNfunction_ng_chi03::synapse0x224e500() {
   return (neuron0x2234070()*-0.0379501);
}

double NNfunction_ng_chi03::synapse0x224e540() {
   return (neuron0x22343b0()*-0.0234587);
}

double NNfunction_ng_chi03::synapse0x224e580() {
   return (neuron0x22346f0()*0.063829);
}

double NNfunction_ng_chi03::synapse0x224e5c0() {
   return (neuron0x2234a30()*0.0127287);
}

double NNfunction_ng_chi03::synapse0x224e600() {
   return (neuron0x2234d70()*0.0343803);
}

double NNfunction_ng_chi03::synapse0x224e640() {
   return (neuron0x22350b0()*0.110363);
}

double NNfunction_ng_chi03::synapse0x224e9c0() {
   return (neuron0x2230460()*0.0194429);
}

double NNfunction_ng_chi03::synapse0x224ea00() {
   return (neuron0x2230710()*-0.021512);
}

double NNfunction_ng_chi03::synapse0x224ea40() {
   return (neuron0x2230a50()*-5.28517);
}

double NNfunction_ng_chi03::synapse0x224ea80() {
   return (neuron0x2230d90()*-0.0245458);
}

double NNfunction_ng_chi03::synapse0x224eac0() {
   return (neuron0x22310d0()*0.0283201);
}

double NNfunction_ng_chi03::synapse0x224eb00() {
   return (neuron0x2231410()*-0.0155971);
}

double NNfunction_ng_chi03::synapse0x224eb40() {
   return (neuron0x2231750()*-0.00752456);
}

double NNfunction_ng_chi03::synapse0x224eb80() {
   return (neuron0x2231a90()*-0.00822235);
}

double NNfunction_ng_chi03::synapse0x224ebc0() {
   return (neuron0x2231dd0()*0.0305897);
}

double NNfunction_ng_chi03::synapse0x224ec00() {
   return (neuron0x2232110()*-0.0174355);
}

double NNfunction_ng_chi03::synapse0x224ec40() {
   return (neuron0x2232450()*-0.00209624);
}

double NNfunction_ng_chi03::synapse0x224ec80() {
   return (neuron0x2232790()*0.105538);
}

double NNfunction_ng_chi03::synapse0x224ecc0() {
   return (neuron0x2232ad0()*-0.0249481);
}

double NNfunction_ng_chi03::synapse0x224ed00() {
   return (neuron0x2232e10()*-0.00641768);
}

double NNfunction_ng_chi03::synapse0x224ed40() {
   return (neuron0x2233150()*-0.0445456);
}

double NNfunction_ng_chi03::synapse0x224ed80() {
   return (neuron0x2233490()*0.0124685);
}

double NNfunction_ng_chi03::synapse0x224e810() {
   return (neuron0x22337d0()*-0.00681822);
}

double NNfunction_ng_chi03::synapse0x224e850() {
   return (neuron0x2233d30()*0.0017852);
}

double NNfunction_ng_chi03::synapse0x224eed0() {
   return (neuron0x2234070()*-0.0121309);
}

double NNfunction_ng_chi03::synapse0x224ef10() {
   return (neuron0x22343b0()*-0.000212305);
}

double NNfunction_ng_chi03::synapse0x224ef50() {
   return (neuron0x22346f0()*-0.0169389);
}

double NNfunction_ng_chi03::synapse0x224ef90() {
   return (neuron0x2234a30()*-0.0244624);
}

double NNfunction_ng_chi03::synapse0x224efd0() {
   return (neuron0x2234d70()*-0.00706608);
}

double NNfunction_ng_chi03::synapse0x224f010() {
   return (neuron0x22350b0()*2.2586);
}

double NNfunction_ng_chi03::synapse0x224f390() {
   return (neuron0x2230460()*-0.282567);
}

double NNfunction_ng_chi03::synapse0x224f3d0() {
   return (neuron0x2230710()*0.814748);
}

double NNfunction_ng_chi03::synapse0x224f410() {
   return (neuron0x2230a50()*-0.350401);
}

double NNfunction_ng_chi03::synapse0x224f450() {
   return (neuron0x2230d90()*0.00727441);
}

double NNfunction_ng_chi03::synapse0x224f490() {
   return (neuron0x22310d0()*0.0101108);
}

double NNfunction_ng_chi03::synapse0x224f4d0() {
   return (neuron0x2231410()*0.168578);
}

double NNfunction_ng_chi03::synapse0x224f510() {
   return (neuron0x2231750()*0.202513);
}

double NNfunction_ng_chi03::synapse0x224f550() {
   return (neuron0x2231a90()*-0.65156);
}

double NNfunction_ng_chi03::synapse0x224f590() {
   return (neuron0x2231dd0()*-0.55851);
}

double NNfunction_ng_chi03::synapse0x224f5d0() {
   return (neuron0x2232110()*-0.0815453);
}

double NNfunction_ng_chi03::synapse0x224f610() {
   return (neuron0x2232450()*-0.144732);
}

double NNfunction_ng_chi03::synapse0x224f650() {
   return (neuron0x2232790()*1.26593);
}

double NNfunction_ng_chi03::synapse0x224f690() {
   return (neuron0x2232ad0()*0.794325);
}

double NNfunction_ng_chi03::synapse0x224f6d0() {
   return (neuron0x2232e10()*-0.00350541);
}

double NNfunction_ng_chi03::synapse0x224f710() {
   return (neuron0x2233150()*0.722785);
}

double NNfunction_ng_chi03::synapse0x224f750() {
   return (neuron0x2233490()*-0.260096);
}

double NNfunction_ng_chi03::synapse0x224f1e0() {
   return (neuron0x22337d0()*-0.128958);
}

double NNfunction_ng_chi03::synapse0x224f220() {
   return (neuron0x2233d30()*0.0623777);
}

double NNfunction_ng_chi03::synapse0x224f8a0() {
   return (neuron0x2234070()*-0.467165);
}

double NNfunction_ng_chi03::synapse0x224f8e0() {
   return (neuron0x22343b0()*-0.298106);
}

double NNfunction_ng_chi03::synapse0x224f920() {
   return (neuron0x22346f0()*-1.20195);
}

double NNfunction_ng_chi03::synapse0x224f960() {
   return (neuron0x2234a30()*-0.812571);
}

double NNfunction_ng_chi03::synapse0x224f9a0() {
   return (neuron0x2234d70()*-0.437279);
}

double NNfunction_ng_chi03::synapse0x224f9e0() {
   return (neuron0x22350b0()*-0.0474973);
}

double NNfunction_ng_chi03::synapse0x224fd60() {
   return (neuron0x2230460()*0.00266442);
}

double NNfunction_ng_chi03::synapse0x224fda0() {
   return (neuron0x2230710()*-4.14394);
}

double NNfunction_ng_chi03::synapse0x224fde0() {
   return (neuron0x2230a50()*-0.493163);
}

double NNfunction_ng_chi03::synapse0x224fe20() {
   return (neuron0x2230d90()*0.074469);
}

double NNfunction_ng_chi03::synapse0x224fe60() {
   return (neuron0x22310d0()*-0.024578);
}

double NNfunction_ng_chi03::synapse0x224fea0() {
   return (neuron0x2231410()*-0.00438254);
}

double NNfunction_ng_chi03::synapse0x224fee0() {
   return (neuron0x2231750()*0.000245694);
}

double NNfunction_ng_chi03::synapse0x224ff20() {
   return (neuron0x2231a90()*-0.0015812);
}

double NNfunction_ng_chi03::synapse0x224ff60() {
   return (neuron0x2231dd0()*0.0177807);
}

double NNfunction_ng_chi03::synapse0x224ffa0() {
   return (neuron0x2232110()*-0.00299503);
}

double NNfunction_ng_chi03::synapse0x224ffe0() {
   return (neuron0x2232450()*0.00983991);
}

double NNfunction_ng_chi03::synapse0x2250020() {
   return (neuron0x2232790()*-0.076009);
}

double NNfunction_ng_chi03::synapse0x2250060() {
   return (neuron0x2232ad0()*-0.00393777);
}

double NNfunction_ng_chi03::synapse0x22500a0() {
   return (neuron0x2232e10()*-0.00356924);
}

double NNfunction_ng_chi03::synapse0x22500e0() {
   return (neuron0x2233150()*-0.015753);
}

double NNfunction_ng_chi03::synapse0x2250120() {
   return (neuron0x2233490()*0.017892);
}

double NNfunction_ng_chi03::synapse0x224fbb0() {
   return (neuron0x22337d0()*-0.0169684);
}

double NNfunction_ng_chi03::synapse0x224fbf0() {
   return (neuron0x2233d30()*0.0234198);
}

double NNfunction_ng_chi03::synapse0x2250270() {
   return (neuron0x2234070()*0.00125092);
}

double NNfunction_ng_chi03::synapse0x22502b0() {
   return (neuron0x22343b0()*0.00220151);
}

double NNfunction_ng_chi03::synapse0x22502f0() {
   return (neuron0x22346f0()*-0.00246404);
}

double NNfunction_ng_chi03::synapse0x2250330() {
   return (neuron0x2234a30()*-0.00716705);
}

double NNfunction_ng_chi03::synapse0x2250370() {
   return (neuron0x2234d70()*0.000401753);
}

double NNfunction_ng_chi03::synapse0x22503b0() {
   return (neuron0x22350b0()*0.562144);
}

double NNfunction_ng_chi03::synapse0x2250730() {
   return (neuron0x2230460()*-0.0438169);
}

double NNfunction_ng_chi03::synapse0x2250770() {
   return (neuron0x2230710()*-0.064778);
}

double NNfunction_ng_chi03::synapse0x22507b0() {
   return (neuron0x2230a50()*-2.73471);
}

double NNfunction_ng_chi03::synapse0x22507f0() {
   return (neuron0x2230d90()*-0.0390896);
}

double NNfunction_ng_chi03::synapse0x2250830() {
   return (neuron0x22310d0()*0.0120038);
}

double NNfunction_ng_chi03::synapse0x2250870() {
   return (neuron0x2231410()*-0.00493898);
}

double NNfunction_ng_chi03::synapse0x22508b0() {
   return (neuron0x2231750()*-0.00842681);
}

double NNfunction_ng_chi03::synapse0x22508f0() {
   return (neuron0x2231a90()*-0.0165206);
}

double NNfunction_ng_chi03::synapse0x2250930() {
   return (neuron0x2231dd0()*-0.00917444);
}

double NNfunction_ng_chi03::synapse0x2250970() {
   return (neuron0x2232110()*0.00737995);
}

double NNfunction_ng_chi03::synapse0x22509b0() {
   return (neuron0x2232450()*0.00326345);
}

double NNfunction_ng_chi03::synapse0x22509f0() {
   return (neuron0x2232790()*-0.156444);
}

double NNfunction_ng_chi03::synapse0x2250a30() {
   return (neuron0x2232ad0()*-0.0318004);
}

double NNfunction_ng_chi03::synapse0x2250a70() {
   return (neuron0x2232e10()*0.00628534);
}

double NNfunction_ng_chi03::synapse0x2250ab0() {
   return (neuron0x2233150()*0.0281555);
}

double NNfunction_ng_chi03::synapse0x2250af0() {
   return (neuron0x2233490()*0.00536927);
}

double NNfunction_ng_chi03::synapse0x2250580() {
   return (neuron0x22337d0()*-0.0107317);
}

double NNfunction_ng_chi03::synapse0x22505c0() {
   return (neuron0x2233d30()*-0.0266874);
}

double NNfunction_ng_chi03::synapse0x2250c40() {
   return (neuron0x2234070()*-0.0246293);
}

double NNfunction_ng_chi03::synapse0x2250c80() {
   return (neuron0x22343b0()*0.0115492);
}

double NNfunction_ng_chi03::synapse0x2250cc0() {
   return (neuron0x22346f0()*-0.0138905);
}

double NNfunction_ng_chi03::synapse0x2250d00() {
   return (neuron0x2234a30()*0.00799033);
}

double NNfunction_ng_chi03::synapse0x2250d40() {
   return (neuron0x2234d70()*-0.00557567);
}

double NNfunction_ng_chi03::synapse0x2250d80() {
   return (neuron0x22350b0()*-2.60871);
}

double NNfunction_ng_chi03::synapse0x2251100() {
   return (neuron0x2230460()*-0.00913686);
}

double NNfunction_ng_chi03::synapse0x2251140() {
   return (neuron0x2230710()*0.00666136);
}

double NNfunction_ng_chi03::synapse0x2251180() {
   return (neuron0x2230a50()*-0.252826);
}

double NNfunction_ng_chi03::synapse0x22511c0() {
   return (neuron0x2230d90()*1.8911);
}

double NNfunction_ng_chi03::synapse0x2251200() {
   return (neuron0x22310d0()*0.000769991);
}

double NNfunction_ng_chi03::synapse0x2251240() {
   return (neuron0x2231410()*0.000417226);
}

double NNfunction_ng_chi03::synapse0x2251280() {
   return (neuron0x2231750()*-0.00309674);
}

double NNfunction_ng_chi03::synapse0x22512c0() {
   return (neuron0x2231a90()*0.0160693);
}

double NNfunction_ng_chi03::synapse0x2251300() {
   return (neuron0x2231dd0()*-0.0208414);
}

double NNfunction_ng_chi03::synapse0x2251340() {
   return (neuron0x2232110()*0.0102966);
}

double NNfunction_ng_chi03::synapse0x2251380() {
   return (neuron0x2232450()*0.00619908);
}

double NNfunction_ng_chi03::synapse0x22513c0() {
   return (neuron0x2232790()*0.0329558);
}

double NNfunction_ng_chi03::synapse0x2251400() {
   return (neuron0x2232ad0()*-0.0362836);
}

double NNfunction_ng_chi03::synapse0x2251440() {
   return (neuron0x2232e10()*0.00423031);
}

double NNfunction_ng_chi03::synapse0x2251480() {
   return (neuron0x2233150()*-0.0105134);
}

double NNfunction_ng_chi03::synapse0x22514c0() {
   return (neuron0x2233490()*0.00294039);
}

double NNfunction_ng_chi03::synapse0x2250f50() {
   return (neuron0x22337d0()*0.0133931);
}

double NNfunction_ng_chi03::synapse0x2250f90() {
   return (neuron0x2233d30()*0.00353517);
}

double NNfunction_ng_chi03::synapse0x2251610() {
   return (neuron0x2234070()*-0.0181407);
}

double NNfunction_ng_chi03::synapse0x2251650() {
   return (neuron0x22343b0()*-0.0014292);
}

double NNfunction_ng_chi03::synapse0x2251690() {
   return (neuron0x22346f0()*-0.00325107);
}

double NNfunction_ng_chi03::synapse0x22516d0() {
   return (neuron0x2234a30()*0.00402256);
}

double NNfunction_ng_chi03::synapse0x2251710() {
   return (neuron0x2234d70()*-0.00537346);
}

double NNfunction_ng_chi03::synapse0x2251750() {
   return (neuron0x22350b0()*-0.0770154);
}

double NNfunction_ng_chi03::synapse0x2251ad0() {
   return (neuron0x2230460()*-0.0155751);
}

double NNfunction_ng_chi03::synapse0x2251b10() {
   return (neuron0x2230710()*-0.0237888);
}

double NNfunction_ng_chi03::synapse0x2251b50() {
   return (neuron0x2230a50()*-0.460581);
}

double NNfunction_ng_chi03::synapse0x2251b90() {
   return (neuron0x2230d90()*0.00940936);
}

double NNfunction_ng_chi03::synapse0x2251bd0() {
   return (neuron0x22310d0()*0.0142706);
}

double NNfunction_ng_chi03::synapse0x2251c10() {
   return (neuron0x2231410()*0.00584894);
}

double NNfunction_ng_chi03::synapse0x2251c50() {
   return (neuron0x2231750()*-0.0455199);
}

double NNfunction_ng_chi03::synapse0x2251c90() {
   return (neuron0x2231a90()*0.0126852);
}

double NNfunction_ng_chi03::synapse0x2251cd0() {
   return (neuron0x2231dd0()*-0.0344009);
}

double NNfunction_ng_chi03::synapse0x2251d10() {
   return (neuron0x2232110()*-0.0186245);
}

double NNfunction_ng_chi03::synapse0x2251d50() {
   return (neuron0x2232450()*-0.0260311);
}

double NNfunction_ng_chi03::synapse0x2251d90() {
   return (neuron0x2232790()*0.966846);
}

double NNfunction_ng_chi03::synapse0x2251dd0() {
   return (neuron0x2232ad0()*-0.188449);
}

double NNfunction_ng_chi03::synapse0x2251e10() {
   return (neuron0x2232e10()*-0.0296566);
}

double NNfunction_ng_chi03::synapse0x2251e50() {
   return (neuron0x2233150()*0.131768);
}

double NNfunction_ng_chi03::synapse0x2251e90() {
   return (neuron0x2233490()*0.0291321);
}

double NNfunction_ng_chi03::synapse0x2251920() {
   return (neuron0x22337d0()*-0.0194711);
}

double NNfunction_ng_chi03::synapse0x2251960() {
   return (neuron0x2233d30()*0.0566621);
}

double NNfunction_ng_chi03::synapse0x2251fe0() {
   return (neuron0x2234070()*-0.00488668);
}

double NNfunction_ng_chi03::synapse0x2252020() {
   return (neuron0x22343b0()*0.0110083);
}

double NNfunction_ng_chi03::synapse0x2252060() {
   return (neuron0x22346f0()*0.0175525);
}

double NNfunction_ng_chi03::synapse0x22520a0() {
   return (neuron0x2234a30()*0.0186302);
}

double NNfunction_ng_chi03::synapse0x22520e0() {
   return (neuron0x2234d70()*0.0325001);
}

double NNfunction_ng_chi03::synapse0x2252120() {
   return (neuron0x22350b0()*0.139083);
}

double NNfunction_ng_chi03::synapse0x22524a0() {
   return (neuron0x2230460()*-0.0389264);
}

double NNfunction_ng_chi03::synapse0x22524e0() {
   return (neuron0x2230710()*-9.3406e-05);
}

double NNfunction_ng_chi03::synapse0x2252520() {
   return (neuron0x2230a50()*-0.043334);
}

double NNfunction_ng_chi03::synapse0x2252560() {
   return (neuron0x2230d90()*-2.25322);
}

double NNfunction_ng_chi03::synapse0x22525a0() {
   return (neuron0x22310d0()*0.0187438);
}

double NNfunction_ng_chi03::synapse0x22525e0() {
   return (neuron0x2231410()*0.0146714);
}

double NNfunction_ng_chi03::synapse0x2252620() {
   return (neuron0x2231750()*0.0687122);
}

double NNfunction_ng_chi03::synapse0x2252660() {
   return (neuron0x2231a90()*-0.0413584);
}

double NNfunction_ng_chi03::synapse0x22526a0() {
   return (neuron0x2231dd0()*0.080448);
}

double NNfunction_ng_chi03::synapse0x22526e0() {
   return (neuron0x2232110()*0.00222873);
}

double NNfunction_ng_chi03::synapse0x2252720() {
   return (neuron0x2232450()*-0.0332806);
}

double NNfunction_ng_chi03::synapse0x2252760() {
   return (neuron0x2232790()*-1.11537);
}

double NNfunction_ng_chi03::synapse0x22527a0() {
   return (neuron0x2232ad0()*0.619151);
}

double NNfunction_ng_chi03::synapse0x22527e0() {
   return (neuron0x2232e10()*-0.0269562);
}

double NNfunction_ng_chi03::synapse0x2252820() {
   return (neuron0x2233150()*0.0954602);
}

double NNfunction_ng_chi03::synapse0x2252860() {
   return (neuron0x2233490()*-0.026959);
}

double NNfunction_ng_chi03::synapse0x22522f0() {
   return (neuron0x22337d0()*0.0357479);
}

double NNfunction_ng_chi03::synapse0x2252330() {
   return (neuron0x2233d30()*-0.0693303);
}

double NNfunction_ng_chi03::synapse0x22529b0() {
   return (neuron0x2234070()*0.0281909);
}

double NNfunction_ng_chi03::synapse0x22529f0() {
   return (neuron0x22343b0()*-9.07465e-05);
}

double NNfunction_ng_chi03::synapse0x2252a30() {
   return (neuron0x22346f0()*0.00771497);
}

double NNfunction_ng_chi03::synapse0x2252a70() {
   return (neuron0x2234a30()*0.0237668);
}

double NNfunction_ng_chi03::synapse0x2252ab0() {
   return (neuron0x2234d70()*-0.00636098);
}

double NNfunction_ng_chi03::synapse0x2252af0() {
   return (neuron0x22350b0()*-0.0339271);
}

double NNfunction_ng_chi03::synapse0x223b5a0() {
   return (neuron0x2230460()*-0.0412964);
}

double NNfunction_ng_chi03::synapse0x223b5e0() {
   return (neuron0x2230710()*-15.0396);
}

double NNfunction_ng_chi03::synapse0x223b620() {
   return (neuron0x2230a50()*-0.317204);
}

double NNfunction_ng_chi03::synapse0x223b660() {
   return (neuron0x2230d90()*0.0269844);
}

double NNfunction_ng_chi03::synapse0x223b6a0() {
   return (neuron0x22310d0()*-0.0176137);
}

double NNfunction_ng_chi03::synapse0x223b6e0() {
   return (neuron0x2231410()*-0.0213241);
}

double NNfunction_ng_chi03::synapse0x223b720() {
   return (neuron0x2231750()*0.0128791);
}

double NNfunction_ng_chi03::synapse0x223b760() {
   return (neuron0x2231a90()*-0.0139384);
}

double NNfunction_ng_chi03::synapse0x2253280() {
   return (neuron0x2231dd0()*-0.0120126);
}

double NNfunction_ng_chi03::synapse0x22532c0() {
   return (neuron0x2232110()*0.0108318);
}

double NNfunction_ng_chi03::synapse0x2253300() {
   return (neuron0x2232450()*-0.00351992);
}

double NNfunction_ng_chi03::synapse0x2253340() {
   return (neuron0x2232790()*0.0246406);
}

double NNfunction_ng_chi03::synapse0x2253380() {
   return (neuron0x2232ad0()*-0.00820035);
}

double NNfunction_ng_chi03::synapse0x22533c0() {
   return (neuron0x2232e10()*-0.00805507);
}

double NNfunction_ng_chi03::synapse0x2253400() {
   return (neuron0x2233150()*-0.0722615);
}

double NNfunction_ng_chi03::synapse0x2253440() {
   return (neuron0x2233490()*0.00327756);
}

double NNfunction_ng_chi03::synapse0x2252cc0() {
   return (neuron0x22337d0()*0.00226581);
}

double NNfunction_ng_chi03::synapse0x2252d00() {
   return (neuron0x2233d30()*-0.000469198);
}

double NNfunction_ng_chi03::synapse0x2253590() {
   return (neuron0x2234070()*0.028451);
}

double NNfunction_ng_chi03::synapse0x22535d0() {
   return (neuron0x22343b0()*-0.0157566);
}

double NNfunction_ng_chi03::synapse0x2253610() {
   return (neuron0x22346f0()*-0.0106061);
}

double NNfunction_ng_chi03::synapse0x2253650() {
   return (neuron0x2234a30()*-0.0248044);
}

double NNfunction_ng_chi03::synapse0x2253690() {
   return (neuron0x2234d70()*-0.010463);
}

double NNfunction_ng_chi03::synapse0x22536d0() {
   return (neuron0x22350b0()*-3.56567);
}

double NNfunction_ng_chi03::synapse0x2253a50() {
   return (neuron0x2230460()*-0.0339141);
}

double NNfunction_ng_chi03::synapse0x2253a90() {
   return (neuron0x2230710()*4.22197);
}

double NNfunction_ng_chi03::synapse0x2253ad0() {
   return (neuron0x2230a50()*2.39914);
}

double NNfunction_ng_chi03::synapse0x2253b10() {
   return (neuron0x2230d90()*-0.0378902);
}

double NNfunction_ng_chi03::synapse0x2253b50() {
   return (neuron0x22310d0()*0.0112432);
}

double NNfunction_ng_chi03::synapse0x2253b90() {
   return (neuron0x2231410()*0.017771);
}

double NNfunction_ng_chi03::synapse0x2253bd0() {
   return (neuron0x2231750()*0.00690712);
}

double NNfunction_ng_chi03::synapse0x2253c10() {
   return (neuron0x2231a90()*0.0343021);
}

double NNfunction_ng_chi03::synapse0x2253c50() {
   return (neuron0x2231dd0()*0.020382);
}

double NNfunction_ng_chi03::synapse0x2253c90() {
   return (neuron0x2232110()*-0.00792704);
}

double NNfunction_ng_chi03::synapse0x2253cd0() {
   return (neuron0x2232450()*0.00121378);
}

double NNfunction_ng_chi03::synapse0x2253d10() {
   return (neuron0x2232790()*-0.0456972);
}

double NNfunction_ng_chi03::synapse0x2253d50() {
   return (neuron0x2232ad0()*0.00734892);
}

double NNfunction_ng_chi03::synapse0x2253d90() {
   return (neuron0x2232e10()*0.0502383);
}

double NNfunction_ng_chi03::synapse0x2253dd0() {
   return (neuron0x2233150()*0.169339);
}

double NNfunction_ng_chi03::synapse0x2253e10() {
   return (neuron0x2233490()*-0.00407346);
}

double NNfunction_ng_chi03::synapse0x22538a0() {
   return (neuron0x22337d0()*-0.00884009);
}

double NNfunction_ng_chi03::synapse0x22538e0() {
   return (neuron0x2233d30()*0.0475056);
}

double NNfunction_ng_chi03::synapse0x2253f60() {
   return (neuron0x2234070()*-0.0116087);
}

double NNfunction_ng_chi03::synapse0x2253fa0() {
   return (neuron0x22343b0()*0.0207064);
}

double NNfunction_ng_chi03::synapse0x2253fe0() {
   return (neuron0x22346f0()*-0.0148228);
}

double NNfunction_ng_chi03::synapse0x2254020() {
   return (neuron0x2234a30()*-0.00446455);
}

double NNfunction_ng_chi03::synapse0x2254060() {
   return (neuron0x2234d70()*-0.0134041);
}

double NNfunction_ng_chi03::synapse0x22540a0() {
   return (neuron0x22350b0()*0.907637);
}

double NNfunction_ng_chi03::synapse0x2254420() {
   return (neuron0x2230460()*0.0306538);
}

double NNfunction_ng_chi03::synapse0x2254460() {
   return (neuron0x2230710()*0.0183741);
}

double NNfunction_ng_chi03::synapse0x22544a0() {
   return (neuron0x2230a50()*0.826903);
}

double NNfunction_ng_chi03::synapse0x22544e0() {
   return (neuron0x2230d90()*-0.0573438);
}

double NNfunction_ng_chi03::synapse0x2254520() {
   return (neuron0x22310d0()*-0.00122499);
}

double NNfunction_ng_chi03::synapse0x2254560() {
   return (neuron0x2231410()*0.00561677);
}

double NNfunction_ng_chi03::synapse0x22545a0() {
   return (neuron0x2231750()*0.01526);
}

double NNfunction_ng_chi03::synapse0x22545e0() {
   return (neuron0x2231a90()*-0.00136256);
}

double NNfunction_ng_chi03::synapse0x2254620() {
   return (neuron0x2231dd0()*0.00331399);
}

double NNfunction_ng_chi03::synapse0x2254660() {
   return (neuron0x2232110()*-0.000713262);
}

double NNfunction_ng_chi03::synapse0x22546a0() {
   return (neuron0x2232450()*0.000820047);
}

double NNfunction_ng_chi03::synapse0x22546e0() {
   return (neuron0x2232790()*0.176958);
}

double NNfunction_ng_chi03::synapse0x2254720() {
   return (neuron0x2232ad0()*0.0156088);
}

double NNfunction_ng_chi03::synapse0x2254760() {
   return (neuron0x2232e10()*-0.000808284);
}

double NNfunction_ng_chi03::synapse0x22547a0() {
   return (neuron0x2233150()*-0.0461586);
}

double NNfunction_ng_chi03::synapse0x22547e0() {
   return (neuron0x2233490()*9.76631e-05);
}

double NNfunction_ng_chi03::synapse0x2254270() {
   return (neuron0x22337d0()*-0.00829535);
}

double NNfunction_ng_chi03::synapse0x22542b0() {
   return (neuron0x2233d30()*-0.00218511);
}

double NNfunction_ng_chi03::synapse0x2244de0() {
   return (neuron0x2234070()*0.00469159);
}

double NNfunction_ng_chi03::synapse0x2244e20() {
   return (neuron0x22343b0()*0.0144035);
}

double NNfunction_ng_chi03::synapse0x2244e60() {
   return (neuron0x22346f0()*0.00565398);
}

double NNfunction_ng_chi03::synapse0x2244ea0() {
   return (neuron0x2234a30()*-0.00216851);
}

double NNfunction_ng_chi03::synapse0x2244ee0() {
   return (neuron0x2234d70()*-0.00443263);
}

double NNfunction_ng_chi03::synapse0x2244f20() {
   return (neuron0x22350b0()*0.399728);
}

double NNfunction_ng_chi03::synapse0x22452a0() {
   return (neuron0x2230460()*0.579233);
}

double NNfunction_ng_chi03::synapse0x22452e0() {
   return (neuron0x2230710()*-0.103698);
}

double NNfunction_ng_chi03::synapse0x2245320() {
   return (neuron0x2230a50()*-0.547704);
}

double NNfunction_ng_chi03::synapse0x2245360() {
   return (neuron0x2230d90()*-0.277951);
}

double NNfunction_ng_chi03::synapse0x22453a0() {
   return (neuron0x22310d0()*-0.216724);
}

double NNfunction_ng_chi03::synapse0x22453e0() {
   return (neuron0x2231410()*0.188267);
}

double NNfunction_ng_chi03::synapse0x2245420() {
   return (neuron0x2231750()*0.0879517);
}

double NNfunction_ng_chi03::synapse0x2245460() {
   return (neuron0x2231a90()*0.00439043);
}

double NNfunction_ng_chi03::synapse0x22454a0() {
   return (neuron0x2231dd0()*0.0693829);
}

double NNfunction_ng_chi03::synapse0x22454e0() {
   return (neuron0x2232110()*0.0506045);
}

double NNfunction_ng_chi03::synapse0x2245520() {
   return (neuron0x2232450()*-0.163825);
}

double NNfunction_ng_chi03::synapse0x2245560() {
   return (neuron0x2232790()*-0.405872);
}

double NNfunction_ng_chi03::synapse0x22455a0() {
   return (neuron0x2232ad0()*-0.221667);
}

double NNfunction_ng_chi03::synapse0x22455e0() {
   return (neuron0x2232e10()*-0.361084);
}

double NNfunction_ng_chi03::synapse0x2245620() {
   return (neuron0x2233150()*0.320277);
}

double NNfunction_ng_chi03::synapse0x2245660() {
   return (neuron0x2233490()*-0.291958);
}

double NNfunction_ng_chi03::synapse0x22450f0() {
   return (neuron0x22337d0()*-0.0145072);
}

double NNfunction_ng_chi03::synapse0x2245130() {
   return (neuron0x2233d30()*0.271682);
}

double NNfunction_ng_chi03::synapse0x22457b0() {
   return (neuron0x2234070()*-0.828209);
}

double NNfunction_ng_chi03::synapse0x22457f0() {
   return (neuron0x22343b0()*0.0345263);
}

double NNfunction_ng_chi03::synapse0x2245830() {
   return (neuron0x22346f0()*-0.0933008);
}

double NNfunction_ng_chi03::synapse0x2245870() {
   return (neuron0x2234a30()*0.221268);
}

double NNfunction_ng_chi03::synapse0x22458b0() {
   return (neuron0x2234d70()*-0.113219);
}

double NNfunction_ng_chi03::synapse0x22458f0() {
   return (neuron0x22350b0()*0.275078);
}

double NNfunction_ng_chi03::synapse0x2245c70() {
   return (neuron0x2230460()*0.013536);
}

double NNfunction_ng_chi03::synapse0x2245cb0() {
   return (neuron0x2230710()*2.30772);
}

double NNfunction_ng_chi03::synapse0x2245cf0() {
   return (neuron0x2230a50()*0.94168);
}

double NNfunction_ng_chi03::synapse0x2245d30() {
   return (neuron0x2230d90()*0.0416574);
}

double NNfunction_ng_chi03::synapse0x2245d70() {
   return (neuron0x22310d0()*0.0346016);
}

double NNfunction_ng_chi03::synapse0x2245db0() {
   return (neuron0x2231410()*0.00693331);
}

double NNfunction_ng_chi03::synapse0x2245df0() {
   return (neuron0x2231750()*-0.0149429);
}

double NNfunction_ng_chi03::synapse0x2245e30() {
   return (neuron0x2231a90()*0.00445133);
}

double NNfunction_ng_chi03::synapse0x2245e70() {
   return (neuron0x2231dd0()*0.0467116);
}

double NNfunction_ng_chi03::synapse0x2245eb0() {
   return (neuron0x2232110()*0.00972589);
}

double NNfunction_ng_chi03::synapse0x2245ef0() {
   return (neuron0x2232450()*0.00605945);
}

double NNfunction_ng_chi03::synapse0x2245f30() {
   return (neuron0x2232790()*0.358018);
}

double NNfunction_ng_chi03::synapse0x2245f70() {
   return (neuron0x2232ad0()*-0.0875451);
}

double NNfunction_ng_chi03::synapse0x2245fb0() {
   return (neuron0x2232e10()*-0.0590611);
}

double NNfunction_ng_chi03::synapse0x2245ff0() {
   return (neuron0x2233150()*-0.690681);
}

double NNfunction_ng_chi03::synapse0x2246030() {
   return (neuron0x2233490()*0.0298258);
}

double NNfunction_ng_chi03::synapse0x2245ac0() {
   return (neuron0x22337d0()*0.0634574);
}

double NNfunction_ng_chi03::synapse0x2245b00() {
   return (neuron0x2233d30()*-0.0523618);
}

double NNfunction_ng_chi03::synapse0x2246180() {
   return (neuron0x2234070()*-0.0752461);
}

double NNfunction_ng_chi03::synapse0x22461c0() {
   return (neuron0x22343b0()*-0.0557111);
}

double NNfunction_ng_chi03::synapse0x2246200() {
   return (neuron0x22346f0()*0.0620112);
}

double NNfunction_ng_chi03::synapse0x2246240() {
   return (neuron0x2234a30()*-0.0196146);
}

double NNfunction_ng_chi03::synapse0x2246280() {
   return (neuron0x2234d70()*0.0297466);
}

double NNfunction_ng_chi03::synapse0x22462c0() {
   return (neuron0x22350b0()*-0.288892);
}

double NNfunction_ng_chi03::synapse0x2246640() {
   return (neuron0x2230460()*0.00457908);
}

double NNfunction_ng_chi03::synapse0x2246680() {
   return (neuron0x2230710()*0.00355914);
}

double NNfunction_ng_chi03::synapse0x22466c0() {
   return (neuron0x2230a50()*-0.0368381);
}

double NNfunction_ng_chi03::synapse0x2246700() {
   return (neuron0x2230d90()*10.2206);
}

double NNfunction_ng_chi03::synapse0x2246740() {
   return (neuron0x22310d0()*-0.0228138);
}

double NNfunction_ng_chi03::synapse0x2246780() {
   return (neuron0x2231410()*-0.00488726);
}

double NNfunction_ng_chi03::synapse0x22467c0() {
   return (neuron0x2231750()*-0.0121103);
}

double NNfunction_ng_chi03::synapse0x2246800() {
   return (neuron0x2231a90()*-0.0283655);
}

double NNfunction_ng_chi03::synapse0x2246840() {
   return (neuron0x2231dd0()*-0.0223525);
}

double NNfunction_ng_chi03::synapse0x2246880() {
   return (neuron0x2232110()*0.00451529);
}

double NNfunction_ng_chi03::synapse0x22468c0() {
   return (neuron0x2232450()*0.000245603);
}

double NNfunction_ng_chi03::synapse0x2246900() {
   return (neuron0x2232790()*-0.0482255);
}

double NNfunction_ng_chi03::synapse0x2246940() {
   return (neuron0x2232ad0()*0.00390311);
}

double NNfunction_ng_chi03::synapse0x2246980() {
   return (neuron0x2232e10()*0.00778244);
}

double NNfunction_ng_chi03::synapse0x22469c0() {
   return (neuron0x2233150()*0.0270446);
}

double NNfunction_ng_chi03::synapse0x2246a00() {
   return (neuron0x2233490()*-0.00033083);
}

double NNfunction_ng_chi03::synapse0x2246490() {
   return (neuron0x22337d0()*-0.0075667);
}

double NNfunction_ng_chi03::synapse0x22464d0() {
   return (neuron0x2233d30()*0.00636053);
}

double NNfunction_ng_chi03::synapse0x2246b50() {
   return (neuron0x2234070()*0.0346635);
}

double NNfunction_ng_chi03::synapse0x2246b90() {
   return (neuron0x22343b0()*0.0089848);
}

double NNfunction_ng_chi03::synapse0x2246bd0() {
   return (neuron0x22346f0()*0.0116721);
}

double NNfunction_ng_chi03::synapse0x2246c10() {
   return (neuron0x2234a30()*-0.0135145);
}

double NNfunction_ng_chi03::synapse0x2246c50() {
   return (neuron0x2234d70()*-0.000155945);
}

double NNfunction_ng_chi03::synapse0x2246c90() {
   return (neuron0x22350b0()*0.0318449);
}

double NNfunction_ng_chi03::synapse0x2258b60() {
   return (neuron0x2230460()*0.638908);
}

double NNfunction_ng_chi03::synapse0x2258ba0() {
   return (neuron0x2230710()*-0.0487474);
}

double NNfunction_ng_chi03::synapse0x2258be0() {
   return (neuron0x2230a50()*1.23234);
}

double NNfunction_ng_chi03::synapse0x2258c20() {
   return (neuron0x2230d90()*-1.69943);
}

double NNfunction_ng_chi03::synapse0x2258c60() {
   return (neuron0x22310d0()*0.0111023);
}

double NNfunction_ng_chi03::synapse0x2258ca0() {
   return (neuron0x2231410()*-0.0718853);
}

double NNfunction_ng_chi03::synapse0x2258ce0() {
   return (neuron0x2231750()*0.0193684);
}

double NNfunction_ng_chi03::synapse0x2258d20() {
   return (neuron0x2231a90()*-0.0396341);
}

double NNfunction_ng_chi03::synapse0x2258d60() {
   return (neuron0x2231dd0()*0.0205525);
}

double NNfunction_ng_chi03::synapse0x2258da0() {
   return (neuron0x2232110()*0.0613585);
}

double NNfunction_ng_chi03::synapse0x2258de0() {
   return (neuron0x2232450()*-0.0114522);
}

double NNfunction_ng_chi03::synapse0x2258e20() {
   return (neuron0x2232790()*-0.0783016);
}

double NNfunction_ng_chi03::synapse0x2258e60() {
   return (neuron0x2232ad0()*0.808576);
}

double NNfunction_ng_chi03::synapse0x2258ea0() {
   return (neuron0x2232e10()*-0.0175741);
}

double NNfunction_ng_chi03::synapse0x2258ee0() {
   return (neuron0x2233150()*0.26027);
}

double NNfunction_ng_chi03::synapse0x2258f20() {
   return (neuron0x2233490()*-0.0968368);
}

double NNfunction_ng_chi03::synapse0x2246cd0() {
   return (neuron0x22337d0()*-0.0146511);
}

double NNfunction_ng_chi03::synapse0x2246d10() {
   return (neuron0x2233d30()*0.108819);
}

double NNfunction_ng_chi03::synapse0x2259070() {
   return (neuron0x2234070()*-0.0438756);
}

double NNfunction_ng_chi03::synapse0x22590b0() {
   return (neuron0x22343b0()*0.185909);
}

double NNfunction_ng_chi03::synapse0x22590f0() {
   return (neuron0x22346f0()*0.097062);
}

double NNfunction_ng_chi03::synapse0x2259130() {
   return (neuron0x2234a30()*0.0317511);
}

double NNfunction_ng_chi03::synapse0x2259170() {
   return (neuron0x2234d70()*0.0528108);
}

double NNfunction_ng_chi03::synapse0x22591b0() {
   return (neuron0x22350b0()*-0.262192);
}

double NNfunction_ng_chi03::synapse0x2259530() {
   return (neuron0x2230460()*0.102955);
}

double NNfunction_ng_chi03::synapse0x2259570() {
   return (neuron0x2230710()*-0.473381);
}

double NNfunction_ng_chi03::synapse0x22595b0() {
   return (neuron0x2230a50()*-0.0170749);
}

double NNfunction_ng_chi03::synapse0x22595f0() {
   return (neuron0x2230d90()*0.0899934);
}

double NNfunction_ng_chi03::synapse0x2259630() {
   return (neuron0x22310d0()*0.0431515);
}

double NNfunction_ng_chi03::synapse0x2259670() {
   return (neuron0x2231410()*-0.0406079);
}

double NNfunction_ng_chi03::synapse0x22596b0() {
   return (neuron0x2231750()*-0.01592);
}

double NNfunction_ng_chi03::synapse0x22596f0() {
   return (neuron0x2231a90()*-0.00770739);
}

double NNfunction_ng_chi03::synapse0x2259730() {
   return (neuron0x2231dd0()*-0.026595);
}

double NNfunction_ng_chi03::synapse0x2259770() {
   return (neuron0x2232110()*-0.0918013);
}

double NNfunction_ng_chi03::synapse0x22597b0() {
   return (neuron0x2232450()*0.0151224);
}

double NNfunction_ng_chi03::synapse0x22597f0() {
   return (neuron0x2232790()*0.321434);
}

double NNfunction_ng_chi03::synapse0x2259830() {
   return (neuron0x2232ad0()*-0.101307);
}

double NNfunction_ng_chi03::synapse0x2259870() {
   return (neuron0x2232e10()*-0.0176434);
}

double NNfunction_ng_chi03::synapse0x22598b0() {
   return (neuron0x2233150()*-1.82214);
}

double NNfunction_ng_chi03::synapse0x22598f0() {
   return (neuron0x2233490()*0.00823216);
}

double NNfunction_ng_chi03::synapse0x2259380() {
   return (neuron0x22337d0()*-0.0895956);
}

double NNfunction_ng_chi03::synapse0x22593c0() {
   return (neuron0x2233d30()*0.216887);
}

double NNfunction_ng_chi03::synapse0x2259a40() {
   return (neuron0x2234070()*-0.0205629);
}

double NNfunction_ng_chi03::synapse0x2259a80() {
   return (neuron0x22343b0()*-0.0449101);
}

double NNfunction_ng_chi03::synapse0x2259ac0() {
   return (neuron0x22346f0()*-0.0553852);
}

double NNfunction_ng_chi03::synapse0x2259b00() {
   return (neuron0x2234a30()*-0.0116032);
}

double NNfunction_ng_chi03::synapse0x2259b40() {
   return (neuron0x2234d70()*-0.0396656);
}

double NNfunction_ng_chi03::synapse0x2259b80() {
   return (neuron0x22350b0()*0.284565);
}

double NNfunction_ng_chi03::synapse0x2259f00() {
   return (neuron0x2230460()*-0.0606381);
}

double NNfunction_ng_chi03::synapse0x2259f40() {
   return (neuron0x2230710()*-0.035653);
}

double NNfunction_ng_chi03::synapse0x2259f80() {
   return (neuron0x2230a50()*0.425005);
}

double NNfunction_ng_chi03::synapse0x2259fc0() {
   return (neuron0x2230d90()*1.27862);
}

double NNfunction_ng_chi03::synapse0x225a000() {
   return (neuron0x22310d0()*-0.0954479);
}

double NNfunction_ng_chi03::synapse0x225a040() {
   return (neuron0x2231410()*-0.00391064);
}

double NNfunction_ng_chi03::synapse0x225a080() {
   return (neuron0x2231750()*-0.0734114);
}

double NNfunction_ng_chi03::synapse0x225a0c0() {
   return (neuron0x2231a90()*0.064935);
}

double NNfunction_ng_chi03::synapse0x225a100() {
   return (neuron0x2231dd0()*-0.101543);
}

double NNfunction_ng_chi03::synapse0x225a140() {
   return (neuron0x2232110()*-0.0171803);
}

double NNfunction_ng_chi03::synapse0x225a180() {
   return (neuron0x2232450()*0.0326563);
}

double NNfunction_ng_chi03::synapse0x225a1c0() {
   return (neuron0x2232790()*-0.656477);
}

double NNfunction_ng_chi03::synapse0x225a200() {
   return (neuron0x2232ad0()*-0.177784);
}

double NNfunction_ng_chi03::synapse0x225a240() {
   return (neuron0x2232e10()*0.00595075);
}

double NNfunction_ng_chi03::synapse0x225a280() {
   return (neuron0x2233150()*0.0840542);
}

double NNfunction_ng_chi03::synapse0x225a2c0() {
   return (neuron0x2233490()*0.044437);
}

double NNfunction_ng_chi03::synapse0x2259d50() {
   return (neuron0x22337d0()*0.064049);
}

double NNfunction_ng_chi03::synapse0x2259d90() {
   return (neuron0x2233d30()*1.69013);
}

double NNfunction_ng_chi03::synapse0x225a410() {
   return (neuron0x2234070()*-0.126041);
}

double NNfunction_ng_chi03::synapse0x225a450() {
   return (neuron0x22343b0()*-0.0353922);
}

double NNfunction_ng_chi03::synapse0x225a490() {
   return (neuron0x22346f0()*0.0841083);
}

double NNfunction_ng_chi03::synapse0x225a4d0() {
   return (neuron0x2234a30()*0.0544365);
}

double NNfunction_ng_chi03::synapse0x225a510() {
   return (neuron0x2234d70()*0.0570787);
}

double NNfunction_ng_chi03::synapse0x225a550() {
   return (neuron0x22350b0()*-0.080169);
}

double NNfunction_ng_chi03::synapse0x225a8d0() {
   return (neuron0x2230460()*0.00613327);
}

double NNfunction_ng_chi03::synapse0x225a910() {
   return (neuron0x2230710()*-0.303619);
}

double NNfunction_ng_chi03::synapse0x225a950() {
   return (neuron0x2230a50()*-0.269139);
}

double NNfunction_ng_chi03::synapse0x225a990() {
   return (neuron0x2230d90()*-0.102401);
}

double NNfunction_ng_chi03::synapse0x225a9d0() {
   return (neuron0x22310d0()*0.0432287);
}

double NNfunction_ng_chi03::synapse0x225aa10() {
   return (neuron0x2231410()*0.000305501);
}

double NNfunction_ng_chi03::synapse0x225aa50() {
   return (neuron0x2231750()*0.0226951);
}

double NNfunction_ng_chi03::synapse0x225aa90() {
   return (neuron0x2231a90()*-0.025582);
}

double NNfunction_ng_chi03::synapse0x225aad0() {
   return (neuron0x2231dd0()*-0.00372551);
}

double NNfunction_ng_chi03::synapse0x225ab10() {
   return (neuron0x2232110()*-0.0341115);
}

double NNfunction_ng_chi03::synapse0x225ab50() {
   return (neuron0x2232450()*0.0387839);
}

double NNfunction_ng_chi03::synapse0x225ab90() {
   return (neuron0x2232790()*0.556974);
}

double NNfunction_ng_chi03::synapse0x225abd0() {
   return (neuron0x2232ad0()*0.0639572);
}

double NNfunction_ng_chi03::synapse0x225ac10() {
   return (neuron0x2232e10()*0.0182914);
}

double NNfunction_ng_chi03::synapse0x225ac50() {
   return (neuron0x2233150()*0.289064);
}

double NNfunction_ng_chi03::synapse0x225ac90() {
   return (neuron0x2233490()*0.0568194);
}

double NNfunction_ng_chi03::synapse0x225a720() {
   return (neuron0x22337d0()*-0.0456655);
}

double NNfunction_ng_chi03::synapse0x225a760() {
   return (neuron0x2233d30()*-1.6109);
}

double NNfunction_ng_chi03::synapse0x225ade0() {
   return (neuron0x2234070()*0.0477796);
}

double NNfunction_ng_chi03::synapse0x225ae20() {
   return (neuron0x22343b0()*0.0488955);
}

double NNfunction_ng_chi03::synapse0x225ae60() {
   return (neuron0x22346f0()*0.0255977);
}

double NNfunction_ng_chi03::synapse0x225aea0() {
   return (neuron0x2234a30()*-0.0301378);
}

double NNfunction_ng_chi03::synapse0x225aee0() {
   return (neuron0x2234d70()*-0.0143797);
}

double NNfunction_ng_chi03::synapse0x225af20() {
   return (neuron0x22350b0()*0.165583);
}

double NNfunction_ng_chi03::synapse0x2236370() {
   return (neuron0x2235520()*2.05192);
}

double NNfunction_ng_chi03::synapse0x22363b0() {
   return (neuron0x2235d60()*0.0260937);
}

double NNfunction_ng_chi03::synapse0x22378d0() {
   return (neuron0x2236840()*0.124862);
}

double NNfunction_ng_chi03::synapse0x2237910() {
   return (neuron0x1ffac60()*-1.85719);
}

double NNfunction_ng_chi03::synapse0x22393a0() {
   return (neuron0x2237620()*-1.1973);
}

double NNfunction_ng_chi03::synapse0x22393e0() {
   return (neuron0x22390f0()*-1.73318);
}

double NNfunction_ng_chi03::synapse0x223a170() {
   return (neuron0x2239ec0()*-0.127998);
}

double NNfunction_ng_chi03::synapse0x223a1b0() {
   return (neuron0x223a890()*0.200837);
}

double NNfunction_ng_chi03::synapse0x223ab40() {
   return (neuron0x223b260()*1.96532);
}

double NNfunction_ng_chi03::synapse0x223ab80() {
   return (neuron0x223bd40()*0.0541901);
}

double NNfunction_ng_chi03::synapse0x223b510() {
   return (neuron0x223c710()*-0.0606982);
}

double NNfunction_ng_chi03::synapse0x223b550() {
   return (neuron0x22397f0()*-0.0789149);
}

double NNfunction_ng_chi03::synapse0x223bff0() {
   return (neuron0x223e2c0()*3.75664);
}

double NNfunction_ng_chi03::synapse0x223c030() {
   return (neuron0x223ec90()*-1.92685);
}

double NNfunction_ng_chi03::synapse0x223c9c0() {
   return (neuron0x223f660()*-0.70694);
}

double NNfunction_ng_chi03::synapse0x223ca00() {
   return (neuron0x2240030()*-5.20787);
}

double NNfunction_ng_chi03::synapse0x2239aa0() {
   return (neuron0x2241e40()*-0.906507);
}

double NNfunction_ng_chi03::synapse0x2239ae0() {
   return (neuron0x2242120()*0.454636);
}

double NNfunction_ng_chi03::synapse0x223e570() {
   return (neuron0x2242af0()*0.211714);
}

double NNfunction_ng_chi03::synapse0x223e5b0() {
   return (neuron0x22434c0()*0.605248);
}

double NNfunction_ng_chi03::synapse0x223ef40() {
   return (neuron0x2243e90()*0.987297);
}

double NNfunction_ng_chi03::synapse0x223ef80() {
   return (neuron0x2244860()*1.59412);
}

double NNfunction_ng_chi03::synapse0x223f910() {
   return (neuron0x223d3b0()*0.281237);
}

double NNfunction_ng_chi03::synapse0x223f950() {
   return (neuron0x223dd80()*-0.0457797);
}

double NNfunction_ng_chi03::synapse0x22402e0() {
   return (neuron0x22475f0()*3.13634);
}

double NNfunction_ng_chi03::synapse0x2240320() {
   return (neuron0x2247fc0()*0.0510216);
}

double NNfunction_ng_chi03::synapse0x2233370() {
   return (neuron0x2248990()*-0.303393);
}

double NNfunction_ng_chi03::synapse0x22333b0() {
   return (neuron0x2249360()*2.05242);
}

double NNfunction_ng_chi03::synapse0x22423d0() {
   return (neuron0x2249d30()*2.87557);
}

double NNfunction_ng_chi03::synapse0x2242410() {
   return (neuron0x224a700()*2.20092);
}

double NNfunction_ng_chi03::synapse0x2242da0() {
   return (neuron0x224b0d0()*0.0226383);
}

double NNfunction_ng_chi03::synapse0x2242de0() {
   return (neuron0x224baa0()*1.07571);
}

double NNfunction_ng_chi03::synapse0x2243770() {
   return (neuron0x2241b30()*-0.182386);
}

double NNfunction_ng_chi03::synapse0x22437b0() {
   return (neuron0x224e680()*0.120444);
}

double NNfunction_ng_chi03::synapse0x2244140() {
   return (neuron0x224f050()*-0.100346);
}

double NNfunction_ng_chi03::synapse0x2244180() {
   return (neuron0x224fa20()*2.6685);
}

double NNfunction_ng_chi03::synapse0x2244b10() {
   return (neuron0x22503f0()*0.0596312);
}

double NNfunction_ng_chi03::synapse0x2244b50() {
   return (neuron0x2250dc0()*1.47381);
}

double NNfunction_ng_chi03::synapse0x223d660() {
   return (neuron0x2251790()*0.0938227);
}

double NNfunction_ng_chi03::synapse0x223d6a0() {
   return (neuron0x2252160()*0.168212);
}

double NNfunction_ng_chi03::synapse0x2246f10() {
   return (neuron0x2252b30()*-0.261459);
}

double NNfunction_ng_chi03::synapse0x2246f50() {
   return (neuron0x2253710()*-0.259449);
}

double NNfunction_ng_chi03::synapse0x22478a0() {
   return (neuron0x22540e0()*-0.305766);
}

double NNfunction_ng_chi03::synapse0x22478e0() {
   return (neuron0x2244f60()*-0.121075);
}

double NNfunction_ng_chi03::synapse0x2248270() {
   return (neuron0x2245930()*0.8132);
}

double NNfunction_ng_chi03::synapse0x22482b0() {
   return (neuron0x2246300()*1.88218);
}

double NNfunction_ng_chi03::synapse0x2248c40() {
   return (neuron0x2258940()*0.337598);
}

double NNfunction_ng_chi03::synapse0x2248c80() {
   return (neuron0x22591f0()*0.61978);
}

double NNfunction_ng_chi03::synapse0x2249610() {
   return (neuron0x2259bc0()*0.417098);
}

double NNfunction_ng_chi03::synapse0x2249650() {
   return (neuron0x225a590()*1.02956);
}

double NNfunction_ng_chi03::synapse0x224bd50() {
   return (neuron0x2235520()*1.57201);
}

double NNfunction_ng_chi03::synapse0x224bd90() {
   return (neuron0x2235d60()*0.0294395);
}

double NNfunction_ng_chi03::synapse0x2241310() {
   return (neuron0x2236840()*-0.0846168);
}

double NNfunction_ng_chi03::synapse0x2241350() {
   return (neuron0x1ffac60()*0.22913);
}

double NNfunction_ng_chi03::synapse0x224e930() {
   return (neuron0x2237620()*-0.215189);
}

double NNfunction_ng_chi03::synapse0x224e970() {
   return (neuron0x22390f0()*0.399932);
}

double NNfunction_ng_chi03::synapse0x224f300() {
   return (neuron0x2239ec0()*-3.34225);
}

double NNfunction_ng_chi03::synapse0x224f340() {
   return (neuron0x223a890()*-1.26098);
}

double NNfunction_ng_chi03::synapse0x224fcd0() {
   return (neuron0x223b260()*-0.217417);
}

double NNfunction_ng_chi03::synapse0x224fd10() {
   return (neuron0x223bd40()*0.221074);
}

double NNfunction_ng_chi03::synapse0x22506a0() {
   return (neuron0x223c710()*0.0136615);
}

double NNfunction_ng_chi03::synapse0x22506e0() {
   return (neuron0x22397f0()*0.136958);
}

double NNfunction_ng_chi03::synapse0x2251070() {
   return (neuron0x223e2c0()*-0.856015);
}

double NNfunction_ng_chi03::synapse0x22510b0() {
   return (neuron0x223ec90()*-3.41039);
}

double NNfunction_ng_chi03::synapse0x2251a40() {
   return (neuron0x223f660()*-0.0109585);
}

double NNfunction_ng_chi03::synapse0x2251a80() {
   return (neuron0x2240030()*-0.192206);
}

double NNfunction_ng_chi03::synapse0x2252410() {
   return (neuron0x2241e40()*-0.0619679);
}

double NNfunction_ng_chi03::synapse0x2252450() {
   return (neuron0x2242120()*-0.154622);
}

double NNfunction_ng_chi03::synapse0x2252de0() {
   return (neuron0x2242af0()*0.335692);
}

double NNfunction_ng_chi03::synapse0x2252e20() {
   return (neuron0x22434c0()*-0.168459);
}

double NNfunction_ng_chi03::synapse0x22539c0() {
   return (neuron0x2243e90()*0.0485691);
}

double NNfunction_ng_chi03::synapse0x2253a00() {
   return (neuron0x2244860()*-0.426756);
}

double NNfunction_ng_chi03::synapse0x2254390() {
   return (neuron0x223d3b0()*0.0502076);
}

double NNfunction_ng_chi03::synapse0x22543d0() {
   return (neuron0x223dd80()*-0.229906);
}

double NNfunction_ng_chi03::synapse0x2245210() {
   return (neuron0x22475f0()*-0.559371);
}

double NNfunction_ng_chi03::synapse0x2245250() {
   return (neuron0x2247fc0()*0.0682836);
}

double NNfunction_ng_chi03::synapse0x2245be0() {
   return (neuron0x2248990()*0.368023);
}

double NNfunction_ng_chi03::synapse0x2245c20() {
   return (neuron0x2249360()*-0.0145042);
}

double NNfunction_ng_chi03::synapse0x22465b0() {
   return (neuron0x2249d30()*-0.111718);
}

double NNfunction_ng_chi03::synapse0x22465f0() {
   return (neuron0x224a700()*-0.761142);
}

double NNfunction_ng_chi03::synapse0x2258ad0() {
   return (neuron0x224b0d0()*0.16707);
}

double NNfunction_ng_chi03::synapse0x2258b10() {
   return (neuron0x224baa0()*0.291569);
}

double NNfunction_ng_chi03::synapse0x22594a0() {
   return (neuron0x2241b30()*-0.47203);
}

double NNfunction_ng_chi03::synapse0x22594e0() {
   return (neuron0x224e680()*2.33172);
}

double NNfunction_ng_chi03::synapse0x2259e70() {
   return (neuron0x224f050()*-0.0715292);
}

double NNfunction_ng_chi03::synapse0x2259eb0() {
   return (neuron0x224fa20()*1.07609);
}

double NNfunction_ng_chi03::synapse0x225a840() {
   return (neuron0x22503f0()*0.977054);
}

double NNfunction_ng_chi03::synapse0x225a880() {
   return (neuron0x2250dc0()*0.0543715);
}

double NNfunction_ng_chi03::synapse0x22357d0() {
   return (neuron0x2251790()*-0.555809);
}

double NNfunction_ng_chi03::synapse0x2235810() {
   return (neuron0x2252160()*0.183987);
}

double NNfunction_ng_chi03::synapse0x2249fe0() {
   return (neuron0x2252b30()*3.13985);
}

double NNfunction_ng_chi03::synapse0x224a020() {
   return (neuron0x2253710()*-0.0130887);
}

double NNfunction_ng_chi03::synapse0x225af60() {
   return (neuron0x22540e0()*0.893554);
}

double NNfunction_ng_chi03::synapse0x225afa0() {
   return (neuron0x2244f60()*0.131741);
}

double NNfunction_ng_chi03::synapse0x225afe0() {
   return (neuron0x2245930()*0.228231);
}

double NNfunction_ng_chi03::synapse0x225b020() {
   return (neuron0x2246300()*-0.131183);
}

double NNfunction_ng_chi03::synapse0x2261ed0() {
   return (neuron0x2258940()*0.212821);
}

double NNfunction_ng_chi03::synapse0x2261f10() {
   return (neuron0x22591f0()*0.00772204);
}

double NNfunction_ng_chi03::synapse0x2261f50() {
   return (neuron0x2259bc0()*0.0972079);
}

double NNfunction_ng_chi03::synapse0x2261f90() {
   return (neuron0x225a590()*0.0352411);
}

double NNfunction_ng_chi03::synapse0x2262310() {
   return (neuron0x2235520()*0.915535);
}

double NNfunction_ng_chi03::synapse0x2262350() {
   return (neuron0x2235d60()*-0.0887028);
}

double NNfunction_ng_chi03::synapse0x2262390() {
   return (neuron0x2236840()*-0.0471601);
}

double NNfunction_ng_chi03::synapse0x22623d0() {
   return (neuron0x1ffac60()*-0.168417);
}

double NNfunction_ng_chi03::synapse0x2262410() {
   return (neuron0x2237620()*0.422936);
}

double NNfunction_ng_chi03::synapse0x2262450() {
   return (neuron0x22390f0()*-0.429143);
}

double NNfunction_ng_chi03::synapse0x2262490() {
   return (neuron0x2239ec0()*-2.15692);
}

double NNfunction_ng_chi03::synapse0x22624d0() {
   return (neuron0x223a890()*-0.753269);
}

double NNfunction_ng_chi03::synapse0x2262510() {
   return (neuron0x223b260()*-0.138313);
}

double NNfunction_ng_chi03::synapse0x2262550() {
   return (neuron0x223bd40()*-0.0632799);
}

double NNfunction_ng_chi03::synapse0x2262590() {
   return (neuron0x223c710()*0.0524219);
}

double NNfunction_ng_chi03::synapse0x22625d0() {
   return (neuron0x22397f0()*-0.0214504);
}

double NNfunction_ng_chi03::synapse0x2262610() {
   return (neuron0x223e2c0()*0.368667);
}

double NNfunction_ng_chi03::synapse0x2262650() {
   return (neuron0x223ec90()*-1.17806);
}

double NNfunction_ng_chi03::synapse0x2262690() {
   return (neuron0x223f660()*0.377206);
}

double NNfunction_ng_chi03::synapse0x22626d0() {
   return (neuron0x2240030()*-1.05492);
}

double NNfunction_ng_chi03::synapse0x2262160() {
   return (neuron0x2241e40()*0.233815);
}

double NNfunction_ng_chi03::synapse0x22621a0() {
   return (neuron0x2242120()*0.529673);
}

double NNfunction_ng_chi03::synapse0x2262820() {
   return (neuron0x2242af0()*-0.353584);
}

double NNfunction_ng_chi03::synapse0x2262860() {
   return (neuron0x22434c0()*0.14476);
}

double NNfunction_ng_chi03::synapse0x22628a0() {
   return (neuron0x2243e90()*0.181471);
}

double NNfunction_ng_chi03::synapse0x22628e0() {
   return (neuron0x2244860()*-0.381789);
}

double NNfunction_ng_chi03::synapse0x2262920() {
   return (neuron0x223d3b0()*-0.126463);
}

double NNfunction_ng_chi03::synapse0x2262960() {
   return (neuron0x223dd80()*0.158433);
}

double NNfunction_ng_chi03::synapse0x22629a0() {
   return (neuron0x22475f0()*-0.684342);
}

double NNfunction_ng_chi03::synapse0x22629e0() {
   return (neuron0x2247fc0()*-0.0255724);
}

double NNfunction_ng_chi03::synapse0x2262a20() {
   return (neuron0x2248990()*0.430427);
}

double NNfunction_ng_chi03::synapse0x2262a60() {
   return (neuron0x2249360()*-0.512566);
}

double NNfunction_ng_chi03::synapse0x2262aa0() {
   return (neuron0x2249d30()*0.777997);
}

double NNfunction_ng_chi03::synapse0x2262ae0() {
   return (neuron0x224a700()*1.54941);
}

double NNfunction_ng_chi03::synapse0x2262b20() {
   return (neuron0x224b0d0()*0.111777);
}

double NNfunction_ng_chi03::synapse0x2262b60() {
   return (neuron0x224baa0()*0.58058);
}

double NNfunction_ng_chi03::synapse0x2262710() {
   return (neuron0x2241b30()*0.402492);
}

double NNfunction_ng_chi03::synapse0x2262750() {
   return (neuron0x224e680()*2.38578);
}

double NNfunction_ng_chi03::synapse0x2262790() {
   return (neuron0x224f050()*0.0369279);
}

double NNfunction_ng_chi03::synapse0x22627d0() {
   return (neuron0x224fa20()*0.522757);
}

double NNfunction_ng_chi03::synapse0x2262db0() {
   return (neuron0x22503f0()*0.203422);
}

double NNfunction_ng_chi03::synapse0x2262df0() {
   return (neuron0x2250dc0()*0.991442);
}

double NNfunction_ng_chi03::synapse0x2262e30() {
   return (neuron0x2251790()*-0.109371);
}

double NNfunction_ng_chi03::synapse0x2262e70() {
   return (neuron0x2252160()*-0.0736191);
}

double NNfunction_ng_chi03::synapse0x2262eb0() {
   return (neuron0x2252b30()*1.6704);
}

double NNfunction_ng_chi03::synapse0x2262ef0() {
   return (neuron0x2253710()*-0.062399);
}

double NNfunction_ng_chi03::synapse0x2262f30() {
   return (neuron0x22540e0()*1.41849);
}

double NNfunction_ng_chi03::synapse0x2262f70() {
   return (neuron0x2244f60()*0.0439157);
}

double NNfunction_ng_chi03::synapse0x2262fb0() {
   return (neuron0x2245930()*-0.605522);
}

double NNfunction_ng_chi03::synapse0x2262ff0() {
   return (neuron0x2246300()*-0.144167);
}

double NNfunction_ng_chi03::synapse0x2263030() {
   return (neuron0x2258940()*-0.25856);
}

double NNfunction_ng_chi03::synapse0x2263070() {
   return (neuron0x22591f0()*-0.57374);
}

double NNfunction_ng_chi03::synapse0x22630b0() {
   return (neuron0x2259bc0()*0.08242);
}

double NNfunction_ng_chi03::synapse0x22630f0() {
   return (neuron0x225a590()*0.175721);
}

double NNfunction_ng_chi03::synapse0x2263470() {
   return (neuron0x2235520()*-1.45876);
}

double NNfunction_ng_chi03::synapse0x22634b0() {
   return (neuron0x2235d60()*0.00275151);
}

double NNfunction_ng_chi03::synapse0x22634f0() {
   return (neuron0x2236840()*0.0277663);
}

double NNfunction_ng_chi03::synapse0x2263530() {
   return (neuron0x1ffac60()*2.45233);
}

double NNfunction_ng_chi03::synapse0x2263570() {
   return (neuron0x2237620()*0.413875);
}

double NNfunction_ng_chi03::synapse0x22635b0() {
   return (neuron0x22390f0()*2.46976);
}

double NNfunction_ng_chi03::synapse0x22635f0() {
   return (neuron0x2239ec0()*-0.0285939);
}

double NNfunction_ng_chi03::synapse0x2263630() {
   return (neuron0x223a890()*0.56994);
}

double NNfunction_ng_chi03::synapse0x2263670() {
   return (neuron0x223b260()*0.0122293);
}

double NNfunction_ng_chi03::synapse0x22636b0() {
   return (neuron0x223bd40()*-0.160221);
}

double NNfunction_ng_chi03::synapse0x22636f0() {
   return (neuron0x223c710()*0.043736);
}

double NNfunction_ng_chi03::synapse0x2263730() {
   return (neuron0x22397f0()*-0.0771345);
}

double NNfunction_ng_chi03::synapse0x2263770() {
   return (neuron0x223e2c0()*-0.797533);
}

double NNfunction_ng_chi03::synapse0x22637b0() {
   return (neuron0x223ec90()*1.17232);
}

double NNfunction_ng_chi03::synapse0x22637f0() {
   return (neuron0x223f660()*0.189338);
}

double NNfunction_ng_chi03::synapse0x2263830() {
   return (neuron0x2240030()*-1.70157);
}

double NNfunction_ng_chi03::synapse0x22632c0() {
   return (neuron0x2241e40()*-0.0343741);
}

double NNfunction_ng_chi03::synapse0x2263300() {
   return (neuron0x2242120()*0.588419);
}

double NNfunction_ng_chi03::synapse0x2263980() {
   return (neuron0x2242af0()*-0.791888);
}

double NNfunction_ng_chi03::synapse0x22639c0() {
   return (neuron0x22434c0()*0.201456);
}

double NNfunction_ng_chi03::synapse0x2263a00() {
   return (neuron0x2243e90()*0.08749);
}

double NNfunction_ng_chi03::synapse0x2263a40() {
   return (neuron0x2244860()*-0.135477);
}

double NNfunction_ng_chi03::synapse0x2263a80() {
   return (neuron0x223d3b0()*-0.462956);
}

double NNfunction_ng_chi03::synapse0x2263ac0() {
   return (neuron0x223dd80()*0.346643);
}

double NNfunction_ng_chi03::synapse0x2263b00() {
   return (neuron0x22475f0()*-1.22661);
}

double NNfunction_ng_chi03::synapse0x2263b40() {
   return (neuron0x2247fc0()*-0.0370656);
}

double NNfunction_ng_chi03::synapse0x2263b80() {
   return (neuron0x2248990()*0.69498);
}

double NNfunction_ng_chi03::synapse0x2263bc0() {
   return (neuron0x2249360()*-2.07115);
}

double NNfunction_ng_chi03::synapse0x2263c00() {
   return (neuron0x2249d30()*0.974628);
}

double NNfunction_ng_chi03::synapse0x2263c40() {
   return (neuron0x224a700()*-1.61938);
}

double NNfunction_ng_chi03::synapse0x2263c80() {
   return (neuron0x224b0d0()*1.14411);
}

double NNfunction_ng_chi03::synapse0x2263cc0() {
   return (neuron0x224baa0()*-0.825598);
}

double NNfunction_ng_chi03::synapse0x2263870() {
   return (neuron0x2241b30()*0.689032);
}

double NNfunction_ng_chi03::synapse0x22638b0() {
   return (neuron0x224e680()*0.00727991);
}

double NNfunction_ng_chi03::synapse0x22638f0() {
   return (neuron0x224f050()*0.0610596);
}

double NNfunction_ng_chi03::synapse0x2263930() {
   return (neuron0x224fa20()*0.0647521);
}

double NNfunction_ng_chi03::synapse0x2263f10() {
   return (neuron0x22503f0()*0.469782);
}

double NNfunction_ng_chi03::synapse0x2263f50() {
   return (neuron0x2250dc0()*-1.26829);
}

double NNfunction_ng_chi03::synapse0x2263f90() {
   return (neuron0x2251790()*-0.901874);
}

double NNfunction_ng_chi03::synapse0x2263fd0() {
   return (neuron0x2252160()*-0.649016);
}

double NNfunction_ng_chi03::synapse0x2264010() {
   return (neuron0x2252b30()*-0.507313);
}

double NNfunction_ng_chi03::synapse0x2264050() {
   return (neuron0x2253710()*-0.744445);
}

double NNfunction_ng_chi03::synapse0x2264090() {
   return (neuron0x22540e0()*-2.73016);
}

double NNfunction_ng_chi03::synapse0x22640d0() {
   return (neuron0x2244f60()*-0.00454669);
}

double NNfunction_ng_chi03::synapse0x2264110() {
   return (neuron0x2245930()*-0.615115);
}

double NNfunction_ng_chi03::synapse0x2264150() {
   return (neuron0x2246300()*-1.60756);
}

double NNfunction_ng_chi03::synapse0x2264190() {
   return (neuron0x2258940()*-0.473532);
}

double NNfunction_ng_chi03::synapse0x22641d0() {
   return (neuron0x22591f0()*-0.409336);
}

double NNfunction_ng_chi03::synapse0x2264210() {
   return (neuron0x2259bc0()*0.012157);
}

double NNfunction_ng_chi03::synapse0x2264250() {
   return (neuron0x225a590()*0.113686);
}

double NNfunction_ng_chi03::synapse0x22645d0() {
   return (neuron0x2235520()*0.159092);
}

double NNfunction_ng_chi03::synapse0x2264610() {
   return (neuron0x2235d60()*-1.16141);
}

double NNfunction_ng_chi03::synapse0x2264650() {
   return (neuron0x2236840()*-0.675216);
}

double NNfunction_ng_chi03::synapse0x2264690() {
   return (neuron0x1ffac60()*0.598914);
}

double NNfunction_ng_chi03::synapse0x22646d0() {
   return (neuron0x2237620()*0.43706);
}

double NNfunction_ng_chi03::synapse0x2264710() {
   return (neuron0x22390f0()*0.167095);
}

double NNfunction_ng_chi03::synapse0x2264750() {
   return (neuron0x2239ec0()*0.139113);
}

double NNfunction_ng_chi03::synapse0x2264790() {
   return (neuron0x223a890()*0.693527);
}

double NNfunction_ng_chi03::synapse0x22647d0() {
   return (neuron0x223b260()*-0.101834);
}

double NNfunction_ng_chi03::synapse0x2264810() {
   return (neuron0x223bd40()*-1.12556);
}

double NNfunction_ng_chi03::synapse0x2264850() {
   return (neuron0x223c710()*-0.65178);
}

double NNfunction_ng_chi03::synapse0x2264890() {
   return (neuron0x22397f0()*-0.545696);
}

double NNfunction_ng_chi03::synapse0x22648d0() {
   return (neuron0x223e2c0()*-0.434976);
}

double NNfunction_ng_chi03::synapse0x2264910() {
   return (neuron0x223ec90()*-0.0125508);
}

double NNfunction_ng_chi03::synapse0x2264950() {
   return (neuron0x223f660()*-0.282735);
}

double NNfunction_ng_chi03::synapse0x2264990() {
   return (neuron0x2240030()*0.38443);
}

double NNfunction_ng_chi03::synapse0x2264420() {
   return (neuron0x2241e40()*-0.437039);
}

double NNfunction_ng_chi03::synapse0x2264460() {
   return (neuron0x2242120()*-2.52857);
}

double NNfunction_ng_chi03::synapse0x2264ae0() {
   return (neuron0x2242af0()*-0.418041);
}

double NNfunction_ng_chi03::synapse0x2264b20() {
   return (neuron0x22434c0()*0.736863);
}

double NNfunction_ng_chi03::synapse0x2264b60() {
   return (neuron0x2243e90()*-1.17179);
}

double NNfunction_ng_chi03::synapse0x2264ba0() {
   return (neuron0x2244860()*0.104991);
}

double NNfunction_ng_chi03::synapse0x2264be0() {
   return (neuron0x223d3b0()*-1.18954);
}

double NNfunction_ng_chi03::synapse0x2264c20() {
   return (neuron0x223dd80()*0.393307);
}

double NNfunction_ng_chi03::synapse0x2264c60() {
   return (neuron0x22475f0()*-0.716583);
}

double NNfunction_ng_chi03::synapse0x2264ca0() {
   return (neuron0x2247fc0()*-1.29822);
}

double NNfunction_ng_chi03::synapse0x2264ce0() {
   return (neuron0x2248990()*-0.754349);
}

double NNfunction_ng_chi03::synapse0x2264d20() {
   return (neuron0x2249360()*-1.50061);
}

double NNfunction_ng_chi03::synapse0x2264d60() {
   return (neuron0x2249d30()*1.04727);
}

double NNfunction_ng_chi03::synapse0x2264da0() {
   return (neuron0x224a700()*-0.600167);
}

double NNfunction_ng_chi03::synapse0x2264de0() {
   return (neuron0x224b0d0()*-0.626668);
}

double NNfunction_ng_chi03::synapse0x2264e20() {
   return (neuron0x224baa0()*1.14262);
}

double NNfunction_ng_chi03::synapse0x22649d0() {
   return (neuron0x2241b30()*0.393074);
}

double NNfunction_ng_chi03::synapse0x2264a10() {
   return (neuron0x224e680()*-0.187997);
}

double NNfunction_ng_chi03::synapse0x2264a50() {
   return (neuron0x224f050()*0.510658);
}

double NNfunction_ng_chi03::synapse0x2264a90() {
   return (neuron0x224fa20()*-1.13912);
}

double NNfunction_ng_chi03::synapse0x2265070() {
   return (neuron0x22503f0()*-0.320412);
}

double NNfunction_ng_chi03::synapse0x22650b0() {
   return (neuron0x2250dc0()*0.778035);
}

double NNfunction_ng_chi03::synapse0x22650f0() {
   return (neuron0x2251790()*0.368893);
}

double NNfunction_ng_chi03::synapse0x2265130() {
   return (neuron0x2252160()*-2.28048);
}

double NNfunction_ng_chi03::synapse0x2265170() {
   return (neuron0x2252b30()*-0.753194);
}

double NNfunction_ng_chi03::synapse0x22651b0() {
   return (neuron0x2253710()*-0.431067);
}

double NNfunction_ng_chi03::synapse0x22651f0() {
   return (neuron0x22540e0()*-0.640073);
}

double NNfunction_ng_chi03::synapse0x2265230() {
   return (neuron0x2244f60()*-1.07577);
}

double NNfunction_ng_chi03::synapse0x2265270() {
   return (neuron0x2245930()*-0.0188571);
}

double NNfunction_ng_chi03::synapse0x22652b0() {
   return (neuron0x2246300()*2.44467);
}

double NNfunction_ng_chi03::synapse0x22652f0() {
   return (neuron0x2258940()*0.966045);
}

double NNfunction_ng_chi03::synapse0x2265330() {
   return (neuron0x22591f0()*-0.109455);
}

double NNfunction_ng_chi03::synapse0x2265370() {
   return (neuron0x2259bc0()*0.531677);
}

double NNfunction_ng_chi03::synapse0x22653b0() {
   return (neuron0x225a590()*-0.217171);
}

double NNfunction_ng_chi03::synapse0x2265610() {
   return (neuron0x2261790()*-7.34088);
}

double NNfunction_ng_chi03::synapse0x2265650() {
   return (neuron0x2261b30()*4.74211);
}

double NNfunction_ng_chi03::synapse0x2265690() {
   return (neuron0x2261fd0()*-6.16582);
}

double NNfunction_ng_chi03::synapse0x22656d0() {
   return (neuron0x2263130()*9.12784);
}

double NNfunction_ng_chi03::synapse0x2265710() {
   return (neuron0x2264290()*-0.657821);
}

