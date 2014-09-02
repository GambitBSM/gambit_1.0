#include "NNfunction_uLg.h"
#include <cmath>

double NNfunction_uLg::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.577)/15.3347;
   input1 = (in1 - -0.90768)/1163.22;
   input2 = (in2 - 662.87)/629.509;
   input3 = (in3 - -42.3914)/814.789;
   input4 = (in4 - 1068.66)/962.836;
   input5 = (in5 - 905.059)/957.155;
   input6 = (in6 - 912.194)/957.624;
   input7 = (in7 - 932.728)/938.141;
   input8 = (in8 - 930.267)/976.056;
   input9 = (in9 - 914.184)/959.9;
   input10 = (in10 - 985.451)/954.84;
   input11 = (in11 - 597.522)/673.258;
   input12 = (in12 - 733.696)/873.91;
   input13 = (in13 - 505.536)/520.392;
   input14 = (in14 - 732.09)/824.824;
   input15 = (in15 - 733.305)/824.807;
   input16 = (in16 - 543.368)/572.009;
   input17 = (in17 - 765.297)/905.644;
   input18 = (in18 - 761.144)/905.453;
   input19 = (in19 - 808.161)/880.213;
   input20 = (in20 - -3.80148)/495.332;
   input21 = (in21 - 0.532227)/1154.27;
   input22 = (in22 - 0.770008)/1203.8;
   input23 = (in23 - -203.388)/609.644;
   switch(index) {
     case 0:
         return neuron0x345cce0();
     default:
         return 0.;
   }
}

double NNfunction_uLg::Value(int index, double* input) {
   input0 = (input[0] - 23.577)/15.3347;
   input1 = (input[1] - -0.90768)/1163.22;
   input2 = (input[2] - 662.87)/629.509;
   input3 = (input[3] - -42.3914)/814.789;
   input4 = (input[4] - 1068.66)/962.836;
   input5 = (input[5] - 905.059)/957.155;
   input6 = (input[6] - 912.194)/957.624;
   input7 = (input[7] - 932.728)/938.141;
   input8 = (input[8] - 930.267)/976.056;
   input9 = (input[9] - 914.184)/959.9;
   input10 = (input[10] - 985.451)/954.84;
   input11 = (input[11] - 597.522)/673.258;
   input12 = (input[12] - 733.696)/873.91;
   input13 = (input[13] - 505.536)/520.392;
   input14 = (input[14] - 732.09)/824.824;
   input15 = (input[15] - 733.305)/824.807;
   input16 = (input[16] - 543.368)/572.009;
   input17 = (input[17] - 765.297)/905.644;
   input18 = (input[18] - 761.144)/905.453;
   input19 = (input[19] - 808.161)/880.213;
   input20 = (input[20] - -3.80148)/495.332;
   input21 = (input[21] - 0.532227)/1154.27;
   input22 = (input[22] - 0.770008)/1203.8;
   input23 = (input[23] - -203.388)/609.644;
   switch(index) {
     case 0:
         return neuron0x345cce0();
     default:
         return 0.;
   }
}

double NNfunction_uLg::neuron0x3428dd0() {
   return input0;
}

double NNfunction_uLg::neuron0x3429110() {
   return input1;
}

double NNfunction_uLg::neuron0x3429450() {
   return input2;
}

double NNfunction_uLg::neuron0x3429790() {
   return input3;
}

double NNfunction_uLg::neuron0x3429ad0() {
   return input4;
}

double NNfunction_uLg::neuron0x3429e10() {
   return input5;
}

double NNfunction_uLg::neuron0x342a150() {
   return input6;
}

double NNfunction_uLg::neuron0x342a490() {
   return input7;
}

double NNfunction_uLg::neuron0x342a7d0() {
   return input8;
}

double NNfunction_uLg::neuron0x342ab10() {
   return input9;
}

double NNfunction_uLg::neuron0x342ae50() {
   return input10;
}

double NNfunction_uLg::neuron0x342b190() {
   return input11;
}

double NNfunction_uLg::neuron0x342b4d0() {
   return input12;
}

double NNfunction_uLg::neuron0x342b810() {
   return input13;
}

double NNfunction_uLg::neuron0x342bb50() {
   return input14;
}

double NNfunction_uLg::neuron0x342be90() {
   return input15;
}

double NNfunction_uLg::neuron0x342c1d0() {
   return input16;
}

double NNfunction_uLg::neuron0x342c730() {
   return input17;
}

double NNfunction_uLg::neuron0x342c950() {
   return input18;
}

double NNfunction_uLg::neuron0x342cc90() {
   return input19;
}

double NNfunction_uLg::neuron0x342cfd0() {
   return input20;
}

double NNfunction_uLg::neuron0x342d310() {
   return input21;
}

double NNfunction_uLg::neuron0x342d650() {
   return input22;
}

double NNfunction_uLg::neuron0x342d990() {
   return input23;
}

double NNfunction_uLg::input0x342de00() {
   double input = 0.429225;
   input += synapse0x3428c90();
   input += synapse0x3428cd0();
   input += synapse0x342e0b0();
   input += synapse0x342e0f0();
   input += synapse0x342e130();
   input += synapse0x342e170();
   input += synapse0x342e1b0();
   input += synapse0x342e1f0();
   input += synapse0x342e230();
   input += synapse0x342e270();
   input += synapse0x342e2b0();
   input += synapse0x342e2f0();
   input += synapse0x342e330();
   input += synapse0x342e370();
   input += synapse0x342e3b0();
   input += synapse0x342e3f0();
   input += synapse0x3428c00();
   input += synapse0x3428c40();
   input += synapse0x31da840();
   input += synapse0x31da880();
   input += synapse0x342e650();
   input += synapse0x342e690();
   input += synapse0x342e6d0();
   input += synapse0x342e710();
   return input;
}

double NNfunction_uLg::neuron0x342de00() {
   double input = input0x342de00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x342e750() {
   double input = 0.991442;
   input += synapse0x342ea90();
   input += synapse0x342ead0();
   input += synapse0x342eb10();
   input += synapse0x342eb50();
   input += synapse0x342eb90();
   input += synapse0x342ebd0();
   input += synapse0x342ec10();
   input += synapse0x342ec50();
   input += synapse0x342ec90();
   input += synapse0x342e540();
   input += synapse0x342e580();
   input += synapse0x342e5c0();
   input += synapse0x342e600();
   input += synapse0x342eee0();
   input += synapse0x342ef20();
   input += synapse0x342ef60();
   input += synapse0x342e8e0();
   input += synapse0x342e920();
   input += synapse0x342f0b0();
   input += synapse0x342f0f0();
   input += synapse0x342f130();
   input += synapse0x342f170();
   input += synapse0x342f1b0();
   input += synapse0x342f1f0();
   return input;
}

double NNfunction_uLg::neuron0x342e750() {
   double input = input0x342e750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x342f230() {
   double input = -0.23125;
   input += synapse0x342f570();
   input += synapse0x342f5b0();
   input += synapse0x342f5f0();
   input += synapse0x342f630();
   input += synapse0x342f670();
   input += synapse0x342f6b0();
   input += synapse0x342f6f0();
   input += synapse0x342f730();
   input += synapse0x342f770();
   input += synapse0x342f7b0();
   input += synapse0x342f7f0();
   input += synapse0x342f830();
   input += synapse0x342f870();
   input += synapse0x342f8b0();
   input += synapse0x342f8f0();
   input += synapse0x342f930();
   input += synapse0x342f3c0();
   input += synapse0x342f400();
   input += synapse0x31dac70();
   input += synapse0x31e83d0();
   input += synapse0x31e8410();
   input += synapse0x3417e60();
   input += synapse0x3417ea0();
   input += synapse0x3417ee0();
   return input;
}

double NNfunction_uLg::neuron0x342f230() {
   double input = input0x342f230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x342ecd0() {
   double input = 0.229244;
   input += synapse0x31e8c70();
   input += synapse0x342ee60();
   input += synapse0x342eea0();
   input += synapse0x342fa80();
   input += synapse0x342fac0();
   input += synapse0x342fb00();
   input += synapse0x342fb40();
   input += synapse0x342fb80();
   input += synapse0x342fbc0();
   input += synapse0x342fc00();
   input += synapse0x342fc40();
   input += synapse0x342fc80();
   input += synapse0x342fcc0();
   input += synapse0x342fd00();
   input += synapse0x342fd40();
   input += synapse0x342fd80();
   input += synapse0x3428d10();
   input += synapse0x3428d50();
   input += synapse0x3428d90();
   input += synapse0x342fed0();
   input += synapse0x342ff10();
   input += synapse0x342ff50();
   input += synapse0x342ff90();
   input += synapse0x342ffd0();
   return input;
}

double NNfunction_uLg::neuron0x342ecd0() {
   double input = input0x342ecd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3430010() {
   double input = -2.08279;
   input += synapse0x3430350();
   input += synapse0x3430390();
   input += synapse0x34303d0();
   input += synapse0x3430410();
   input += synapse0x3430450();
   input += synapse0x3430490();
   input += synapse0x34304d0();
   input += synapse0x3430510();
   input += synapse0x3430550();
   input += synapse0x3430590();
   input += synapse0x34305d0();
   input += synapse0x3430610();
   input += synapse0x3430650();
   input += synapse0x3430690();
   input += synapse0x34306d0();
   input += synapse0x3430710();
   input += synapse0x34301a0();
   input += synapse0x34301e0();
   input += synapse0x3430860();
   input += synapse0x34308a0();
   input += synapse0x34308e0();
   input += synapse0x3430920();
   input += synapse0x3430960();
   input += synapse0x34309a0();
   return input;
}

double NNfunction_uLg::neuron0x3430010() {
   double input = input0x3430010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x34309e0() {
   double input = 0.0618262;
   input += synapse0x3430d20();
   input += synapse0x3430d60();
   input += synapse0x3430da0();
   input += synapse0x3430de0();
   input += synapse0x3430e20();
   input += synapse0x3430e60();
   input += synapse0x3430ea0();
   input += synapse0x3430ee0();
   input += synapse0x3430f20();
   input += synapse0x31e8740();
   input += synapse0x31e8780();
   input += synapse0x31e87c0();
   input += synapse0x31e8800();
   input += synapse0x31e8840();
   input += synapse0x31e8880();
   input += synapse0x31e88c0();
   input += synapse0x3430b70();
   input += synapse0x3430bb0();
   input += synapse0x31e8a10();
   input += synapse0x31e8a50();
   input += synapse0x31e8a90();
   input += synapse0x31e8ad0();
   input += synapse0x31e8b10();
   input += synapse0x3431770();
   return input;
}

double NNfunction_uLg::neuron0x34309e0() {
   double input = input0x34309e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x34317b0() {
   double input = 0.304997;
   input += synapse0x3431af0();
   input += synapse0x3431b30();
   input += synapse0x3431b70();
   input += synapse0x3431bb0();
   input += synapse0x3431bf0();
   input += synapse0x3431c30();
   input += synapse0x3431c70();
   input += synapse0x3431cb0();
   input += synapse0x3431cf0();
   input += synapse0x3431d30();
   input += synapse0x3431d70();
   input += synapse0x3431db0();
   input += synapse0x3431df0();
   input += synapse0x3431e30();
   input += synapse0x3431e70();
   input += synapse0x3431eb0();
   input += synapse0x3431940();
   input += synapse0x3431980();
   input += synapse0x3432000();
   input += synapse0x3432040();
   input += synapse0x3432080();
   input += synapse0x34320c0();
   input += synapse0x3432100();
   input += synapse0x3432140();
   return input;
}

double NNfunction_uLg::neuron0x34317b0() {
   double input = input0x34317b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3432180() {
   double input = 1.13354;
   input += synapse0x34324c0();
   input += synapse0x3432500();
   input += synapse0x3432540();
   input += synapse0x3432580();
   input += synapse0x34325c0();
   input += synapse0x3432600();
   input += synapse0x3432640();
   input += synapse0x3432680();
   input += synapse0x34326c0();
   input += synapse0x3432700();
   input += synapse0x3432740();
   input += synapse0x3432780();
   input += synapse0x34327c0();
   input += synapse0x3432800();
   input += synapse0x3432840();
   input += synapse0x3432880();
   input += synapse0x3432310();
   input += synapse0x3432350();
   input += synapse0x34329d0();
   input += synapse0x3432a10();
   input += synapse0x3432a50();
   input += synapse0x3432a90();
   input += synapse0x3432ad0();
   input += synapse0x3432b10();
   return input;
}

double NNfunction_uLg::neuron0x3432180() {
   double input = input0x3432180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3432b50() {
   double input = 1.53854;
   input += synapse0x342c620();
   input += synapse0x342c660();
   input += synapse0x342c6a0();
   input += synapse0x342c6e0();
   input += synapse0x34330a0();
   input += synapse0x34330e0();
   input += synapse0x3433120();
   input += synapse0x3433160();
   input += synapse0x34331a0();
   input += synapse0x34331e0();
   input += synapse0x3433220();
   input += synapse0x3433260();
   input += synapse0x34332a0();
   input += synapse0x34332e0();
   input += synapse0x3433320();
   input += synapse0x3433360();
   input += synapse0x3432ce0();
   input += synapse0x3432d20();
   input += synapse0x34334b0();
   input += synapse0x34334f0();
   input += synapse0x3433530();
   input += synapse0x3433570();
   input += synapse0x34335b0();
   input += synapse0x34335f0();
   return input;
}

double NNfunction_uLg::neuron0x3432b50() {
   double input = input0x3432b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3433630() {
   double input = 1.17393;
   input += synapse0x3433970();
   input += synapse0x34339b0();
   input += synapse0x34339f0();
   input += synapse0x3433a30();
   input += synapse0x3433a70();
   input += synapse0x3433ab0();
   input += synapse0x3433af0();
   input += synapse0x3433b30();
   input += synapse0x3433b70();
   input += synapse0x3433bb0();
   input += synapse0x3433bf0();
   input += synapse0x3433c30();
   input += synapse0x3433c70();
   input += synapse0x3433cb0();
   input += synapse0x3433cf0();
   input += synapse0x3433d30();
   input += synapse0x34337c0();
   input += synapse0x3433800();
   input += synapse0x3433e80();
   input += synapse0x3433ec0();
   input += synapse0x3433f00();
   input += synapse0x3433f40();
   input += synapse0x3433f80();
   input += synapse0x3433fc0();
   return input;
}

double NNfunction_uLg::neuron0x3433630() {
   double input = input0x3433630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3434000() {
   double input = -0.421264;
   input += synapse0x3434340();
   input += synapse0x3434380();
   input += synapse0x34343c0();
   input += synapse0x3434400();
   input += synapse0x3434440();
   input += synapse0x3434480();
   input += synapse0x34344c0();
   input += synapse0x3434500();
   input += synapse0x3434540();
   input += synapse0x3434580();
   input += synapse0x34345c0();
   input += synapse0x3434600();
   input += synapse0x3434640();
   input += synapse0x3434680();
   input += synapse0x34346c0();
   input += synapse0x3434700();
   input += synapse0x3434190();
   input += synapse0x34341d0();
   input += synapse0x3430f60();
   input += synapse0x3430fa0();
   input += synapse0x3430fe0();
   input += synapse0x3431020();
   input += synapse0x3431060();
   input += synapse0x34310a0();
   return input;
}

double NNfunction_uLg::neuron0x3434000() {
   double input = input0x3434000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x34310e0() {
   double input = 0.190633;
   input += synapse0x3431420();
   input += synapse0x3431460();
   input += synapse0x34314a0();
   input += synapse0x34314e0();
   input += synapse0x3431520();
   input += synapse0x3431560();
   input += synapse0x34315a0();
   input += synapse0x34315e0();
   input += synapse0x3431620();
   input += synapse0x3431660();
   input += synapse0x34316a0();
   input += synapse0x34316e0();
   input += synapse0x3431720();
   input += synapse0x3435860();
   input += synapse0x34358a0();
   input += synapse0x34358e0();
   input += synapse0x3431270();
   input += synapse0x34312b0();
   input += synapse0x3435a30();
   input += synapse0x3435a70();
   input += synapse0x3435ab0();
   input += synapse0x3435af0();
   input += synapse0x3435b30();
   input += synapse0x3435b70();
   return input;
}

double NNfunction_uLg::neuron0x34310e0() {
   double input = input0x34310e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3435bb0() {
   double input = -1.3984;
   input += synapse0x3435ef0();
   input += synapse0x3435f30();
   input += synapse0x3435f70();
   input += synapse0x3435fb0();
   input += synapse0x3435ff0();
   input += synapse0x3436030();
   input += synapse0x3436070();
   input += synapse0x34360b0();
   input += synapse0x34360f0();
   input += synapse0x3436130();
   input += synapse0x3436170();
   input += synapse0x34361b0();
   input += synapse0x34361f0();
   input += synapse0x3436230();
   input += synapse0x3436270();
   input += synapse0x34362b0();
   input += synapse0x3435d40();
   input += synapse0x3435d80();
   input += synapse0x3436400();
   input += synapse0x3436440();
   input += synapse0x3436480();
   input += synapse0x34364c0();
   input += synapse0x3436500();
   input += synapse0x3436540();
   return input;
}

double NNfunction_uLg::neuron0x3435bb0() {
   double input = input0x3435bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3436580() {
   double input = -0.409988;
   input += synapse0x34368c0();
   input += synapse0x3436900();
   input += synapse0x3436940();
   input += synapse0x3436980();
   input += synapse0x34369c0();
   input += synapse0x3436a00();
   input += synapse0x3436a40();
   input += synapse0x3436a80();
   input += synapse0x3436ac0();
   input += synapse0x3436b00();
   input += synapse0x3436b40();
   input += synapse0x3436b80();
   input += synapse0x3436bc0();
   input += synapse0x3436c00();
   input += synapse0x3436c40();
   input += synapse0x3436c80();
   input += synapse0x3436710();
   input += synapse0x3436750();
   input += synapse0x3436dd0();
   input += synapse0x3436e10();
   input += synapse0x3436e50();
   input += synapse0x3436e90();
   input += synapse0x3436ed0();
   input += synapse0x3436f10();
   return input;
}

double NNfunction_uLg::neuron0x3436580() {
   double input = input0x3436580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3436f50() {
   double input = -0.493277;
   input += synapse0x3437290();
   input += synapse0x34372d0();
   input += synapse0x3437310();
   input += synapse0x3437350();
   input += synapse0x3437390();
   input += synapse0x34373d0();
   input += synapse0x3437410();
   input += synapse0x3437450();
   input += synapse0x3437490();
   input += synapse0x34374d0();
   input += synapse0x3437510();
   input += synapse0x3437550();
   input += synapse0x3437590();
   input += synapse0x34375d0();
   input += synapse0x3437610();
   input += synapse0x3437650();
   input += synapse0x34370e0();
   input += synapse0x3437120();
   input += synapse0x34377a0();
   input += synapse0x34377e0();
   input += synapse0x3437820();
   input += synapse0x3437860();
   input += synapse0x34378a0();
   input += synapse0x34378e0();
   return input;
}

double NNfunction_uLg::neuron0x3436f50() {
   double input = input0x3436f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3437920() {
   double input = -0.289079;
   input += synapse0x3437c60();
   input += synapse0x3428ff0();
   input += synapse0x3429030();
   input += synapse0x3429330();
   input += synapse0x3429370();
   input += synapse0x3429670();
   input += synapse0x34296b0();
   input += synapse0x34299b0();
   input += synapse0x34299f0();
   input += synapse0x3429cf0();
   input += synapse0x3429d30();
   input += synapse0x342a030();
   input += synapse0x342a070();
   input += synapse0x342a370();
   input += synapse0x342a3b0();
   input += synapse0x342a6b0();
   input += synapse0x342a6f0();
   input += synapse0x342a9f0();
   input += synapse0x342aa30();
   input += synapse0x342ad30();
   input += synapse0x342ad70();
   input += synapse0x342b070();
   input += synapse0x342b0b0();
   input += synapse0x342b3b0();
   return input;
}

double NNfunction_uLg::neuron0x3437920() {
   double input = input0x3437920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3439730() {
   double input = 0.741223;
   input += synapse0x342b3f0();
   input += synapse0x342c0b0();
   input += synapse0x342c0f0();
   input += synapse0x3437ab0();
   input += synapse0x3437af0();
   input += synapse0x342c3f0();
   input += synapse0x342c430();
   input += synapse0x31da720();
   input += synapse0x31da760();
   input += synapse0x342cb70();
   input += synapse0x342cbb0();
   input += synapse0x342ceb0();
   input += synapse0x342cef0();
   input += synapse0x342d1f0();
   input += synapse0x342d230();
   input += synapse0x342d530();
   input += synapse0x342d570();
   input += synapse0x342d870();
   input += synapse0x342d8b0();
   input += synapse0x342dbb0();
   input += synapse0x342dbf0();
   input += synapse0x342b6f0();
   input += synapse0x342b730();
   input += synapse0x34399d0();
   return input;
}

double NNfunction_uLg::neuron0x3439730() {
   double input = input0x3439730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3439a10() {
   double input = 1.31531;
   input += synapse0x3439d50();
   input += synapse0x3439d90();
   input += synapse0x3439dd0();
   input += synapse0x3439e10();
   input += synapse0x3439e50();
   input += synapse0x3439e90();
   input += synapse0x3439ed0();
   input += synapse0x3439f10();
   input += synapse0x3439f50();
   input += synapse0x3439f90();
   input += synapse0x3439fd0();
   input += synapse0x343a010();
   input += synapse0x343a050();
   input += synapse0x343a090();
   input += synapse0x343a0d0();
   input += synapse0x343a110();
   input += synapse0x3439ba0();
   input += synapse0x3439be0();
   input += synapse0x343a260();
   input += synapse0x343a2a0();
   input += synapse0x343a2e0();
   input += synapse0x343a320();
   input += synapse0x343a360();
   input += synapse0x343a3a0();
   return input;
}

double NNfunction_uLg::neuron0x3439a10() {
   double input = input0x3439a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x343a3e0() {
   double input = -0.931309;
   input += synapse0x343a720();
   input += synapse0x343a760();
   input += synapse0x343a7a0();
   input += synapse0x343a7e0();
   input += synapse0x343a820();
   input += synapse0x343a860();
   input += synapse0x343a8a0();
   input += synapse0x343a8e0();
   input += synapse0x343a920();
   input += synapse0x343a960();
   input += synapse0x343a9a0();
   input += synapse0x343a9e0();
   input += synapse0x343aa20();
   input += synapse0x343aa60();
   input += synapse0x343aaa0();
   input += synapse0x343aae0();
   input += synapse0x343a570();
   input += synapse0x343a5b0();
   input += synapse0x343ac30();
   input += synapse0x343ac70();
   input += synapse0x343acb0();
   input += synapse0x343acf0();
   input += synapse0x343ad30();
   input += synapse0x343ad70();
   return input;
}

double NNfunction_uLg::neuron0x343a3e0() {
   double input = input0x343a3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x343adb0() {
   double input = -0.863092;
   input += synapse0x343b0f0();
   input += synapse0x343b130();
   input += synapse0x343b170();
   input += synapse0x343b1b0();
   input += synapse0x343b1f0();
   input += synapse0x343b230();
   input += synapse0x343b270();
   input += synapse0x343b2b0();
   input += synapse0x343b2f0();
   input += synapse0x343b330();
   input += synapse0x343b370();
   input += synapse0x343b3b0();
   input += synapse0x343b3f0();
   input += synapse0x343b430();
   input += synapse0x343b470();
   input += synapse0x343b4b0();
   input += synapse0x343af40();
   input += synapse0x343af80();
   input += synapse0x343b600();
   input += synapse0x343b640();
   input += synapse0x343b680();
   input += synapse0x343b6c0();
   input += synapse0x343b700();
   input += synapse0x343b740();
   return input;
}

double NNfunction_uLg::neuron0x343adb0() {
   double input = input0x343adb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x343b780() {
   double input = -0.311685;
   input += synapse0x343bac0();
   input += synapse0x343bb00();
   input += synapse0x343bb40();
   input += synapse0x343bb80();
   input += synapse0x343bbc0();
   input += synapse0x343bc00();
   input += synapse0x343bc40();
   input += synapse0x343bc80();
   input += synapse0x343bcc0();
   input += synapse0x343bd00();
   input += synapse0x343bd40();
   input += synapse0x343bd80();
   input += synapse0x343bdc0();
   input += synapse0x343be00();
   input += synapse0x343be40();
   input += synapse0x343be80();
   input += synapse0x343b910();
   input += synapse0x343b950();
   input += synapse0x343bfd0();
   input += synapse0x343c010();
   input += synapse0x343c050();
   input += synapse0x343c090();
   input += synapse0x343c0d0();
   input += synapse0x343c110();
   return input;
}

double NNfunction_uLg::neuron0x343b780() {
   double input = input0x343b780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x343c150() {
   double input = 0.162989;
   input += synapse0x343c490();
   input += synapse0x343c4d0();
   input += synapse0x343c510();
   input += synapse0x343c550();
   input += synapse0x343c590();
   input += synapse0x343c5d0();
   input += synapse0x343c610();
   input += synapse0x343c650();
   input += synapse0x343c690();
   input += synapse0x3434850();
   input += synapse0x3434890();
   input += synapse0x34348d0();
   input += synapse0x3434910();
   input += synapse0x3434950();
   input += synapse0x3434990();
   input += synapse0x34349d0();
   input += synapse0x343c2e0();
   input += synapse0x343c320();
   input += synapse0x3434b20();
   input += synapse0x3434b60();
   input += synapse0x3434ba0();
   input += synapse0x3434be0();
   input += synapse0x3434c20();
   input += synapse0x3434c60();
   return input;
}

double NNfunction_uLg::neuron0x343c150() {
   double input = input0x343c150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3434ca0() {
   double input = 0.804755;
   input += synapse0x3434fe0();
   input += synapse0x3435020();
   input += synapse0x3435060();
   input += synapse0x34350a0();
   input += synapse0x34350e0();
   input += synapse0x3435120();
   input += synapse0x3435160();
   input += synapse0x34351a0();
   input += synapse0x34351e0();
   input += synapse0x3435220();
   input += synapse0x3435260();
   input += synapse0x34352a0();
   input += synapse0x34352e0();
   input += synapse0x3435320();
   input += synapse0x3435360();
   input += synapse0x34353a0();
   input += synapse0x3434e30();
   input += synapse0x3434e70();
   input += synapse0x34354f0();
   input += synapse0x3435530();
   input += synapse0x3435570();
   input += synapse0x34355b0();
   input += synapse0x34355f0();
   input += synapse0x3435630();
   return input;
}

double NNfunction_uLg::neuron0x3434ca0() {
   double input = input0x3434ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3435670() {
   double input = 0.660873;
   input += synapse0x3435800();
   input += synapse0x343e890();
   input += synapse0x343e8d0();
   input += synapse0x343e910();
   input += synapse0x343e950();
   input += synapse0x343e990();
   input += synapse0x343e9d0();
   input += synapse0x343ea10();
   input += synapse0x343ea50();
   input += synapse0x343ea90();
   input += synapse0x343ead0();
   input += synapse0x343eb10();
   input += synapse0x343eb50();
   input += synapse0x343eb90();
   input += synapse0x343ebd0();
   input += synapse0x343ec10();
   input += synapse0x343e6e0();
   input += synapse0x343e720();
   input += synapse0x343ed60();
   input += synapse0x343eda0();
   input += synapse0x343ede0();
   input += synapse0x343ee20();
   input += synapse0x343ee60();
   input += synapse0x343eea0();
   return input;
}

double NNfunction_uLg::neuron0x3435670() {
   double input = input0x3435670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x343eee0() {
   double input = 2.02642;
   input += synapse0x343f220();
   input += synapse0x343f260();
   input += synapse0x343f2a0();
   input += synapse0x343f2e0();
   input += synapse0x343f320();
   input += synapse0x343f360();
   input += synapse0x343f3a0();
   input += synapse0x343f3e0();
   input += synapse0x343f420();
   input += synapse0x343f460();
   input += synapse0x343f4a0();
   input += synapse0x343f4e0();
   input += synapse0x343f520();
   input += synapse0x343f560();
   input += synapse0x343f5a0();
   input += synapse0x343f5e0();
   input += synapse0x343f070();
   input += synapse0x343f0b0();
   input += synapse0x343f730();
   input += synapse0x343f770();
   input += synapse0x343f7b0();
   input += synapse0x343f7f0();
   input += synapse0x343f830();
   input += synapse0x343f870();
   return input;
}

double NNfunction_uLg::neuron0x343eee0() {
   double input = input0x343eee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x343f8b0() {
   double input = 0.42049;
   input += synapse0x343fbf0();
   input += synapse0x343fc30();
   input += synapse0x343fc70();
   input += synapse0x343fcb0();
   input += synapse0x343fcf0();
   input += synapse0x343fd30();
   input += synapse0x343fd70();
   input += synapse0x343fdb0();
   input += synapse0x343fdf0();
   input += synapse0x343fe30();
   input += synapse0x343fe70();
   input += synapse0x343feb0();
   input += synapse0x343fef0();
   input += synapse0x343ff30();
   input += synapse0x343ff70();
   input += synapse0x343ffb0();
   input += synapse0x343fa40();
   input += synapse0x343fa80();
   input += synapse0x3440100();
   input += synapse0x3440140();
   input += synapse0x3440180();
   input += synapse0x34401c0();
   input += synapse0x3440200();
   input += synapse0x3440240();
   return input;
}

double NNfunction_uLg::neuron0x343f8b0() {
   double input = input0x343f8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3440280() {
   double input = -1.72446;
   input += synapse0x34405c0();
   input += synapse0x3440600();
   input += synapse0x3440640();
   input += synapse0x3440680();
   input += synapse0x34406c0();
   input += synapse0x3440700();
   input += synapse0x3440740();
   input += synapse0x3440780();
   input += synapse0x34407c0();
   input += synapse0x3440800();
   input += synapse0x3440840();
   input += synapse0x3440880();
   input += synapse0x34408c0();
   input += synapse0x3440900();
   input += synapse0x3440940();
   input += synapse0x3440980();
   input += synapse0x3440410();
   input += synapse0x3440450();
   input += synapse0x3440ad0();
   input += synapse0x3440b10();
   input += synapse0x3440b50();
   input += synapse0x3440b90();
   input += synapse0x3440bd0();
   input += synapse0x3440c10();
   return input;
}

double NNfunction_uLg::neuron0x3440280() {
   double input = input0x3440280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3440c50() {
   double input = -0.378193;
   input += synapse0x3440f90();
   input += synapse0x3440fd0();
   input += synapse0x3441010();
   input += synapse0x3441050();
   input += synapse0x3441090();
   input += synapse0x34410d0();
   input += synapse0x3441110();
   input += synapse0x3441150();
   input += synapse0x3441190();
   input += synapse0x34411d0();
   input += synapse0x3441210();
   input += synapse0x3441250();
   input += synapse0x3441290();
   input += synapse0x34412d0();
   input += synapse0x3441310();
   input += synapse0x3441350();
   input += synapse0x3440de0();
   input += synapse0x3440e20();
   input += synapse0x34414a0();
   input += synapse0x34414e0();
   input += synapse0x3441520();
   input += synapse0x3441560();
   input += synapse0x34415a0();
   input += synapse0x34415e0();
   return input;
}

double NNfunction_uLg::neuron0x3440c50() {
   double input = input0x3440c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3441620() {
   double input = 0.075638;
   input += synapse0x3441960();
   input += synapse0x34419a0();
   input += synapse0x34419e0();
   input += synapse0x3441a20();
   input += synapse0x3441a60();
   input += synapse0x3441aa0();
   input += synapse0x3441ae0();
   input += synapse0x3441b20();
   input += synapse0x3441b60();
   input += synapse0x3441ba0();
   input += synapse0x3441be0();
   input += synapse0x3441c20();
   input += synapse0x3441c60();
   input += synapse0x3441ca0();
   input += synapse0x3441ce0();
   input += synapse0x3441d20();
   input += synapse0x34417b0();
   input += synapse0x34417f0();
   input += synapse0x3441e70();
   input += synapse0x3441eb0();
   input += synapse0x3441ef0();
   input += synapse0x3441f30();
   input += synapse0x3441f70();
   input += synapse0x3441fb0();
   return input;
}

double NNfunction_uLg::neuron0x3441620() {
   double input = input0x3441620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3441ff0() {
   double input = 0.832691;
   input += synapse0x3442330();
   input += synapse0x3442370();
   input += synapse0x34423b0();
   input += synapse0x34423f0();
   input += synapse0x3442430();
   input += synapse0x3442470();
   input += synapse0x34424b0();
   input += synapse0x34424f0();
   input += synapse0x3442530();
   input += synapse0x3442570();
   input += synapse0x34425b0();
   input += synapse0x34425f0();
   input += synapse0x3442630();
   input += synapse0x3442670();
   input += synapse0x34426b0();
   input += synapse0x34426f0();
   input += synapse0x3442180();
   input += synapse0x34421c0();
   input += synapse0x3442840();
   input += synapse0x3442880();
   input += synapse0x34428c0();
   input += synapse0x3442900();
   input += synapse0x3442940();
   input += synapse0x3442980();
   return input;
}

double NNfunction_uLg::neuron0x3441ff0() {
   double input = input0x3441ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x34429c0() {
   double input = 0.383005;
   input += synapse0x3442d00();
   input += synapse0x3442d40();
   input += synapse0x3442d80();
   input += synapse0x3442dc0();
   input += synapse0x3442e00();
   input += synapse0x3442e40();
   input += synapse0x3442e80();
   input += synapse0x3442ec0();
   input += synapse0x3442f00();
   input += synapse0x3442f40();
   input += synapse0x3442f80();
   input += synapse0x3442fc0();
   input += synapse0x3443000();
   input += synapse0x3443040();
   input += synapse0x3443080();
   input += synapse0x34430c0();
   input += synapse0x3442b50();
   input += synapse0x3442b90();
   input += synapse0x3443210();
   input += synapse0x3443250();
   input += synapse0x3443290();
   input += synapse0x34432d0();
   input += synapse0x3443310();
   input += synapse0x3443350();
   return input;
}

double NNfunction_uLg::neuron0x34429c0() {
   double input = input0x34429c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3443390() {
   double input = 0.538123;
   input += synapse0x34436d0();
   input += synapse0x3437ca0();
   input += synapse0x3437ce0();
   input += synapse0x3437d20();
   input += synapse0x3437f70();
   input += synapse0x3437fb0();
   input += synapse0x3437ff0();
   input += synapse0x3438240();
   input += synapse0x3438280();
   input += synapse0x34384d0();
   input += synapse0x3438510();
   input += synapse0x3438550();
   input += synapse0x34387a0();
   input += synapse0x34387e0();
   input += synapse0x3438a30();
   input += synapse0x3438a70();
   input += synapse0x3443520();
   input += synapse0x3443560();
   input += synapse0x3438bc0();
   input += synapse0x34390d0();
   input += synapse0x3439110();
   input += synapse0x3439150();
   input += synapse0x34393a0();
   input += synapse0x34393e0();
   return input;
}

double NNfunction_uLg::neuron0x3443390() {
   double input = input0x3443390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3439420() {
   double input = 1.1806;
   input += synapse0x3438c90();
   input += synapse0x3438cd0();
   input += synapse0x3438d10();
   input += synapse0x3438d50();
   input += synapse0x34396d0();
   input += synapse0x3445a20();
   input += synapse0x3445a60();
   input += synapse0x3445aa0();
   input += synapse0x3445ae0();
   input += synapse0x3445b20();
   input += synapse0x3445b60();
   input += synapse0x3445ba0();
   input += synapse0x3445be0();
   input += synapse0x3445c20();
   input += synapse0x3445c60();
   input += synapse0x3445ca0();
   input += synapse0x34395b0();
   input += synapse0x34395f0();
   input += synapse0x3445df0();
   input += synapse0x3445e30();
   input += synapse0x3445e70();
   input += synapse0x3445eb0();
   input += synapse0x3445ef0();
   input += synapse0x3445f30();
   return input;
}

double NNfunction_uLg::neuron0x3439420() {
   double input = input0x3439420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3445f70() {
   double input = 0.383423;
   input += synapse0x34462b0();
   input += synapse0x34462f0();
   input += synapse0x3446330();
   input += synapse0x3446370();
   input += synapse0x34463b0();
   input += synapse0x34463f0();
   input += synapse0x3446430();
   input += synapse0x3446470();
   input += synapse0x34464b0();
   input += synapse0x34464f0();
   input += synapse0x3446530();
   input += synapse0x3446570();
   input += synapse0x34465b0();
   input += synapse0x34465f0();
   input += synapse0x3446630();
   input += synapse0x3446670();
   input += synapse0x3446100();
   input += synapse0x3446140();
   input += synapse0x34467c0();
   input += synapse0x3446800();
   input += synapse0x3446840();
   input += synapse0x3446880();
   input += synapse0x34468c0();
   input += synapse0x3446900();
   return input;
}

double NNfunction_uLg::neuron0x3445f70() {
   double input = input0x3445f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3446940() {
   double input = 0.673467;
   input += synapse0x3446c80();
   input += synapse0x3446cc0();
   input += synapse0x3446d00();
   input += synapse0x3446d40();
   input += synapse0x3446d80();
   input += synapse0x3446dc0();
   input += synapse0x3446e00();
   input += synapse0x3446e40();
   input += synapse0x3446e80();
   input += synapse0x3446ec0();
   input += synapse0x3446f00();
   input += synapse0x3446f40();
   input += synapse0x3446f80();
   input += synapse0x3446fc0();
   input += synapse0x3447000();
   input += synapse0x3447040();
   input += synapse0x3446ad0();
   input += synapse0x3446b10();
   input += synapse0x3447190();
   input += synapse0x34471d0();
   input += synapse0x3447210();
   input += synapse0x3447250();
   input += synapse0x3447290();
   input += synapse0x34472d0();
   return input;
}

double NNfunction_uLg::neuron0x3446940() {
   double input = input0x3446940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3447310() {
   double input = -0.272109;
   input += synapse0x3447650();
   input += synapse0x3447690();
   input += synapse0x34476d0();
   input += synapse0x3447710();
   input += synapse0x3447750();
   input += synapse0x3447790();
   input += synapse0x34477d0();
   input += synapse0x3447810();
   input += synapse0x3447850();
   input += synapse0x3447890();
   input += synapse0x34478d0();
   input += synapse0x3447910();
   input += synapse0x3447950();
   input += synapse0x3447990();
   input += synapse0x34479d0();
   input += synapse0x3447a10();
   input += synapse0x34474a0();
   input += synapse0x34474e0();
   input += synapse0x3447b60();
   input += synapse0x3447ba0();
   input += synapse0x3447be0();
   input += synapse0x3447c20();
   input += synapse0x3447c60();
   input += synapse0x3447ca0();
   return input;
}

double NNfunction_uLg::neuron0x3447310() {
   double input = input0x3447310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3447ce0() {
   double input = 0.923816;
   input += synapse0x3448020();
   input += synapse0x3448060();
   input += synapse0x34480a0();
   input += synapse0x34480e0();
   input += synapse0x3448120();
   input += synapse0x3448160();
   input += synapse0x34481a0();
   input += synapse0x34481e0();
   input += synapse0x3448220();
   input += synapse0x3448260();
   input += synapse0x34482a0();
   input += synapse0x34482e0();
   input += synapse0x3448320();
   input += synapse0x3448360();
   input += synapse0x34483a0();
   input += synapse0x34483e0();
   input += synapse0x3447e70();
   input += synapse0x3447eb0();
   input += synapse0x3448530();
   input += synapse0x3448570();
   input += synapse0x34485b0();
   input += synapse0x34485f0();
   input += synapse0x3448630();
   input += synapse0x3448670();
   return input;
}

double NNfunction_uLg::neuron0x3447ce0() {
   double input = input0x3447ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x34486b0() {
   double input = 1.52997;
   input += synapse0x34489f0();
   input += synapse0x3448a30();
   input += synapse0x3448a70();
   input += synapse0x3448ab0();
   input += synapse0x3448af0();
   input += synapse0x3448b30();
   input += synapse0x3448b70();
   input += synapse0x3448bb0();
   input += synapse0x3448bf0();
   input += synapse0x3448c30();
   input += synapse0x3448c70();
   input += synapse0x3448cb0();
   input += synapse0x3448cf0();
   input += synapse0x3448d30();
   input += synapse0x3448d70();
   input += synapse0x3448db0();
   input += synapse0x3448840();
   input += synapse0x3448880();
   input += synapse0x3448f00();
   input += synapse0x3448f40();
   input += synapse0x3448f80();
   input += synapse0x3448fc0();
   input += synapse0x3449000();
   input += synapse0x3449040();
   return input;
}

double NNfunction_uLg::neuron0x34486b0() {
   double input = input0x34486b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3449080() {
   double input = -0.738741;
   input += synapse0x34493c0();
   input += synapse0x3449400();
   input += synapse0x3449440();
   input += synapse0x3449480();
   input += synapse0x34494c0();
   input += synapse0x3449500();
   input += synapse0x3449540();
   input += synapse0x3449580();
   input += synapse0x34495c0();
   input += synapse0x3449600();
   input += synapse0x3449640();
   input += synapse0x3449680();
   input += synapse0x34496c0();
   input += synapse0x3449700();
   input += synapse0x3449740();
   input += synapse0x3449780();
   input += synapse0x3449210();
   input += synapse0x3449250();
   input += synapse0x34498d0();
   input += synapse0x3449910();
   input += synapse0x3449950();
   input += synapse0x3449990();
   input += synapse0x34499d0();
   input += synapse0x3449a10();
   return input;
}

double NNfunction_uLg::neuron0x3449080() {
   double input = input0x3449080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3449a50() {
   double input = -0.626499;
   input += synapse0x3449d90();
   input += synapse0x3449dd0();
   input += synapse0x3449e10();
   input += synapse0x3449e50();
   input += synapse0x3449e90();
   input += synapse0x3449ed0();
   input += synapse0x3449f10();
   input += synapse0x3449f50();
   input += synapse0x3449f90();
   input += synapse0x3449fd0();
   input += synapse0x344a010();
   input += synapse0x344a050();
   input += synapse0x344a090();
   input += synapse0x344a0d0();
   input += synapse0x344a110();
   input += synapse0x344a150();
   input += synapse0x3449be0();
   input += synapse0x3449c20();
   input += synapse0x344a2a0();
   input += synapse0x344a2e0();
   input += synapse0x344a320();
   input += synapse0x344a360();
   input += synapse0x344a3a0();
   input += synapse0x344a3e0();
   return input;
}

double NNfunction_uLg::neuron0x3449a50() {
   double input = input0x3449a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x344a420() {
   double input = 0.427469;
   input += synapse0x3432e90();
   input += synapse0x3432ed0();
   input += synapse0x3432f10();
   input += synapse0x3432f50();
   input += synapse0x3432f90();
   input += synapse0x3432fd0();
   input += synapse0x3433010();
   input += synapse0x3433050();
   input += synapse0x344ab70();
   input += synapse0x344abb0();
   input += synapse0x344abf0();
   input += synapse0x344ac30();
   input += synapse0x344ac70();
   input += synapse0x344acb0();
   input += synapse0x344acf0();
   input += synapse0x344ad30();
   input += synapse0x344a5b0();
   input += synapse0x344a5f0();
   input += synapse0x344ae80();
   input += synapse0x344aec0();
   input += synapse0x344af00();
   input += synapse0x344af40();
   input += synapse0x344af80();
   input += synapse0x344afc0();
   return input;
}

double NNfunction_uLg::neuron0x344a420() {
   double input = input0x344a420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x344b000() {
   double input = -1.29833;
   input += synapse0x344b340();
   input += synapse0x344b380();
   input += synapse0x344b3c0();
   input += synapse0x344b400();
   input += synapse0x344b440();
   input += synapse0x344b480();
   input += synapse0x344b4c0();
   input += synapse0x344b500();
   input += synapse0x344b540();
   input += synapse0x344b580();
   input += synapse0x344b5c0();
   input += synapse0x344b600();
   input += synapse0x344b640();
   input += synapse0x344b680();
   input += synapse0x344b6c0();
   input += synapse0x344b700();
   input += synapse0x344b190();
   input += synapse0x344b1d0();
   input += synapse0x344b850();
   input += synapse0x344b890();
   input += synapse0x344b8d0();
   input += synapse0x344b910();
   input += synapse0x344b950();
   input += synapse0x344b990();
   return input;
}

double NNfunction_uLg::neuron0x344b000() {
   double input = input0x344b000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x344b9d0() {
   double input = 1.75398;
   input += synapse0x344bd10();
   input += synapse0x344bd50();
   input += synapse0x344bd90();
   input += synapse0x344bdd0();
   input += synapse0x344be10();
   input += synapse0x344be50();
   input += synapse0x344be90();
   input += synapse0x344bed0();
   input += synapse0x344bf10();
   input += synapse0x344bf50();
   input += synapse0x344bf90();
   input += synapse0x344bfd0();
   input += synapse0x344c010();
   input += synapse0x344c050();
   input += synapse0x344c090();
   input += synapse0x344c0d0();
   input += synapse0x344bb60();
   input += synapse0x344bba0();
   input += synapse0x343c6d0();
   input += synapse0x343c710();
   input += synapse0x343c750();
   input += synapse0x343c790();
   input += synapse0x343c7d0();
   input += synapse0x343c810();
   return input;
}

double NNfunction_uLg::neuron0x344b9d0() {
   double input = input0x344b9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x343c850() {
   double input = 0.592351;
   input += synapse0x343cb90();
   input += synapse0x343cbd0();
   input += synapse0x343cc10();
   input += synapse0x343cc50();
   input += synapse0x343cc90();
   input += synapse0x343ccd0();
   input += synapse0x343cd10();
   input += synapse0x343cd50();
   input += synapse0x343cd90();
   input += synapse0x343cdd0();
   input += synapse0x343ce10();
   input += synapse0x343ce50();
   input += synapse0x343ce90();
   input += synapse0x343ced0();
   input += synapse0x343cf10();
   input += synapse0x343cf50();
   input += synapse0x343c9e0();
   input += synapse0x343ca20();
   input += synapse0x343d0a0();
   input += synapse0x343d0e0();
   input += synapse0x343d120();
   input += synapse0x343d160();
   input += synapse0x343d1a0();
   input += synapse0x343d1e0();
   return input;
}

double NNfunction_uLg::neuron0x343c850() {
   double input = input0x343c850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x343d220() {
   double input = 0.590795;
   input += synapse0x343d560();
   input += synapse0x343d5a0();
   input += synapse0x343d5e0();
   input += synapse0x343d620();
   input += synapse0x343d660();
   input += synapse0x343d6a0();
   input += synapse0x343d6e0();
   input += synapse0x343d720();
   input += synapse0x343d760();
   input += synapse0x343d7a0();
   input += synapse0x343d7e0();
   input += synapse0x343d820();
   input += synapse0x343d860();
   input += synapse0x343d8a0();
   input += synapse0x343d8e0();
   input += synapse0x343d920();
   input += synapse0x343d3b0();
   input += synapse0x343d3f0();
   input += synapse0x343da70();
   input += synapse0x343dab0();
   input += synapse0x343daf0();
   input += synapse0x343db30();
   input += synapse0x343db70();
   input += synapse0x343dbb0();
   return input;
}

double NNfunction_uLg::neuron0x343d220() {
   double input = input0x343d220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x343dbf0() {
   double input = -0.814284;
   input += synapse0x343df30();
   input += synapse0x343df70();
   input += synapse0x343dfb0();
   input += synapse0x343dff0();
   input += synapse0x343e030();
   input += synapse0x343e070();
   input += synapse0x343e0b0();
   input += synapse0x343e0f0();
   input += synapse0x343e130();
   input += synapse0x343e170();
   input += synapse0x343e1b0();
   input += synapse0x343e1f0();
   input += synapse0x343e230();
   input += synapse0x343e270();
   input += synapse0x343e2b0();
   input += synapse0x343e2f0();
   input += synapse0x343dd80();
   input += synapse0x343ddc0();
   input += synapse0x343e440();
   input += synapse0x343e480();
   input += synapse0x343e4c0();
   input += synapse0x343e500();
   input += synapse0x343e540();
   input += synapse0x343e580();
   return input;
}

double NNfunction_uLg::neuron0x343dbf0() {
   double input = input0x343dbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3450230() {
   double input = 0.0229956;
   input += synapse0x3450450();
   input += synapse0x3450490();
   input += synapse0x34504d0();
   input += synapse0x3450510();
   input += synapse0x3450550();
   input += synapse0x3450590();
   input += synapse0x34505d0();
   input += synapse0x3450610();
   input += synapse0x3450650();
   input += synapse0x3450690();
   input += synapse0x34506d0();
   input += synapse0x3450710();
   input += synapse0x3450750();
   input += synapse0x3450790();
   input += synapse0x34507d0();
   input += synapse0x3450810();
   input += synapse0x343e5c0();
   input += synapse0x343e600();
   input += synapse0x3450960();
   input += synapse0x34509a0();
   input += synapse0x34509e0();
   input += synapse0x3450a20();
   input += synapse0x3450a60();
   input += synapse0x3450aa0();
   return input;
}

double NNfunction_uLg::neuron0x3450230() {
   double input = input0x3450230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3450ae0() {
   double input = -0.0754806;
   input += synapse0x3450e20();
   input += synapse0x3450e60();
   input += synapse0x3450ea0();
   input += synapse0x3450ee0();
   input += synapse0x3450f20();
   input += synapse0x3450f60();
   input += synapse0x3450fa0();
   input += synapse0x3450fe0();
   input += synapse0x3451020();
   input += synapse0x3451060();
   input += synapse0x34510a0();
   input += synapse0x34510e0();
   input += synapse0x3451120();
   input += synapse0x3451160();
   input += synapse0x34511a0();
   input += synapse0x34511e0();
   input += synapse0x3450c70();
   input += synapse0x3450cb0();
   input += synapse0x3451330();
   input += synapse0x3451370();
   input += synapse0x34513b0();
   input += synapse0x34513f0();
   input += synapse0x3451430();
   input += synapse0x3451470();
   return input;
}

double NNfunction_uLg::neuron0x3450ae0() {
   double input = input0x3450ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x34514b0() {
   double input = 0.522765;
   input += synapse0x34517f0();
   input += synapse0x3451830();
   input += synapse0x3451870();
   input += synapse0x34518b0();
   input += synapse0x34518f0();
   input += synapse0x3451930();
   input += synapse0x3451970();
   input += synapse0x34519b0();
   input += synapse0x34519f0();
   input += synapse0x3451a30();
   input += synapse0x3451a70();
   input += synapse0x3451ab0();
   input += synapse0x3451af0();
   input += synapse0x3451b30();
   input += synapse0x3451b70();
   input += synapse0x3451bb0();
   input += synapse0x3451640();
   input += synapse0x3451680();
   input += synapse0x3451d00();
   input += synapse0x3451d40();
   input += synapse0x3451d80();
   input += synapse0x3451dc0();
   input += synapse0x3451e00();
   input += synapse0x3451e40();
   return input;
}

double NNfunction_uLg::neuron0x34514b0() {
   double input = input0x34514b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3451e80() {
   double input = 0.399354;
   input += synapse0x34521c0();
   input += synapse0x3452200();
   input += synapse0x3452240();
   input += synapse0x3452280();
   input += synapse0x34522c0();
   input += synapse0x3452300();
   input += synapse0x3452340();
   input += synapse0x3452380();
   input += synapse0x34523c0();
   input += synapse0x3452400();
   input += synapse0x3452440();
   input += synapse0x3452480();
   input += synapse0x34524c0();
   input += synapse0x3452500();
   input += synapse0x3452540();
   input += synapse0x3452580();
   input += synapse0x3452010();
   input += synapse0x3452050();
   input += synapse0x34526d0();
   input += synapse0x3452710();
   input += synapse0x3452750();
   input += synapse0x3452790();
   input += synapse0x34527d0();
   input += synapse0x3452810();
   return input;
}

double NNfunction_uLg::neuron0x3451e80() {
   double input = input0x3451e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3459080() {
   double input = 0.323542;
   input += synapse0x31e8be0();
   input += synapse0x31e8c20();
   input += synapse0x34302c0();
   input += synapse0x3430300();
   input += synapse0x3430c90();
   input += synapse0x3430cd0();
   input += synapse0x3431a60();
   input += synapse0x3431aa0();
   input += synapse0x3432430();
   input += synapse0x3432470();
   input += synapse0x3432e00();
   input += synapse0x3432e40();
   input += synapse0x34338e0();
   input += synapse0x3433920();
   input += synapse0x34342b0();
   input += synapse0x34342f0();
   input += synapse0x3431390();
   input += synapse0x34313d0();
   input += synapse0x3435e60();
   input += synapse0x3435ea0();
   input += synapse0x3436830();
   input += synapse0x3436870();
   input += synapse0x3437200();
   input += synapse0x3437240();
   input += synapse0x3437bd0();
   input += synapse0x3437c10();
   input += synapse0x342bd70();
   input += synapse0x342bdb0();
   input += synapse0x3439cc0();
   input += synapse0x3439d00();
   input += synapse0x343a690();
   input += synapse0x343a6d0();
   input += synapse0x343b060();
   input += synapse0x343b0a0();
   input += synapse0x343ba30();
   input += synapse0x343ba70();
   input += synapse0x343c400();
   input += synapse0x343c440();
   input += synapse0x3434f50();
   input += synapse0x3434f90();
   input += synapse0x343e800();
   input += synapse0x343e840();
   input += synapse0x343f190();
   input += synapse0x343f1d0();
   input += synapse0x343fb60();
   input += synapse0x343fba0();
   input += synapse0x3440530();
   input += synapse0x3440570();
   input += synapse0x3440f00();
   input += synapse0x3440f40();
   return input;
}

double NNfunction_uLg::neuron0x3459080() {
   double input = input0x3459080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x3459420() {
   double input = -1.16271;
   input += synapse0x3443640();
   input += synapse0x3443680();
   input += synapse0x3438c00();
   input += synapse0x3438c40();
   input += synapse0x3446220();
   input += synapse0x3446260();
   input += synapse0x3446bf0();
   input += synapse0x3446c30();
   input += synapse0x34475c0();
   input += synapse0x3447600();
   input += synapse0x3447f90();
   input += synapse0x3447fd0();
   input += synapse0x3448960();
   input += synapse0x34489a0();
   input += synapse0x3449330();
   input += synapse0x3449370();
   input += synapse0x3449d00();
   input += synapse0x3449d40();
   input += synapse0x344a6d0();
   input += synapse0x344a710();
   input += synapse0x344b2b0();
   input += synapse0x344b2f0();
   input += synapse0x344bc80();
   input += synapse0x344bcc0();
   input += synapse0x343cb00();
   input += synapse0x343cb40();
   input += synapse0x343d4d0();
   input += synapse0x343d510();
   input += synapse0x343dea0();
   input += synapse0x343dee0();
   input += synapse0x34503c0();
   input += synapse0x3450400();
   input += synapse0x3450d90();
   input += synapse0x3450dd0();
   input += synapse0x3451760();
   input += synapse0x34517a0();
   input += synapse0x3452130();
   input += synapse0x3452170();
   input += synapse0x342e020();
   input += synapse0x342e060();
   input += synapse0x34418d0();
   input += synapse0x3441910();
   input += synapse0x3452850();
   input += synapse0x3452890();
   input += synapse0x34528d0();
   input += synapse0x3452910();
   input += synapse0x34597c0();
   input += synapse0x3459800();
   input += synapse0x3459840();
   input += synapse0x3459880();
   return input;
}

double NNfunction_uLg::neuron0x3459420() {
   double input = input0x3459420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x34598c0() {
   double input = -0.913406;
   input += synapse0x3459c00();
   input += synapse0x3459c40();
   input += synapse0x3459c80();
   input += synapse0x3459cc0();
   input += synapse0x3459d00();
   input += synapse0x3459d40();
   input += synapse0x3459d80();
   input += synapse0x3459dc0();
   input += synapse0x3459e00();
   input += synapse0x3459e40();
   input += synapse0x3459e80();
   input += synapse0x3459ec0();
   input += synapse0x3459f00();
   input += synapse0x3459f40();
   input += synapse0x3459f80();
   input += synapse0x3459fc0();
   input += synapse0x3459a50();
   input += synapse0x3459a90();
   input += synapse0x345a110();
   input += synapse0x345a150();
   input += synapse0x345a190();
   input += synapse0x345a1d0();
   input += synapse0x345a210();
   input += synapse0x345a250();
   input += synapse0x345a290();
   input += synapse0x345a2d0();
   input += synapse0x345a310();
   input += synapse0x345a350();
   input += synapse0x345a390();
   input += synapse0x345a3d0();
   input += synapse0x345a410();
   input += synapse0x345a450();
   input += synapse0x345a000();
   input += synapse0x345a040();
   input += synapse0x345a080();
   input += synapse0x345a0c0();
   input += synapse0x345a6a0();
   input += synapse0x345a6e0();
   input += synapse0x345a720();
   input += synapse0x345a760();
   input += synapse0x345a7a0();
   input += synapse0x345a7e0();
   input += synapse0x345a820();
   input += synapse0x345a860();
   input += synapse0x345a8a0();
   input += synapse0x345a8e0();
   input += synapse0x345a920();
   input += synapse0x345a960();
   input += synapse0x345a9a0();
   input += synapse0x345a9e0();
   return input;
}

double NNfunction_uLg::neuron0x34598c0() {
   double input = input0x34598c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x345aa20() {
   double input = 0.0312962;
   input += synapse0x345ad60();
   input += synapse0x345ada0();
   input += synapse0x345ade0();
   input += synapse0x345ae20();
   input += synapse0x345ae60();
   input += synapse0x345aea0();
   input += synapse0x345aee0();
   input += synapse0x345af20();
   input += synapse0x345af60();
   input += synapse0x345afa0();
   input += synapse0x345afe0();
   input += synapse0x345b020();
   input += synapse0x345b060();
   input += synapse0x345b0a0();
   input += synapse0x345b0e0();
   input += synapse0x345b120();
   input += synapse0x345abb0();
   input += synapse0x345abf0();
   input += synapse0x345b270();
   input += synapse0x345b2b0();
   input += synapse0x345b2f0();
   input += synapse0x345b330();
   input += synapse0x345b370();
   input += synapse0x345b3b0();
   input += synapse0x345b3f0();
   input += synapse0x345b430();
   input += synapse0x345b470();
   input += synapse0x345b4b0();
   input += synapse0x345b4f0();
   input += synapse0x345b530();
   input += synapse0x345b570();
   input += synapse0x345b5b0();
   input += synapse0x345b160();
   input += synapse0x345b1a0();
   input += synapse0x345b1e0();
   input += synapse0x345b220();
   input += synapse0x345b800();
   input += synapse0x345b840();
   input += synapse0x345b880();
   input += synapse0x345b8c0();
   input += synapse0x345b900();
   input += synapse0x345b940();
   input += synapse0x345b980();
   input += synapse0x345b9c0();
   input += synapse0x345ba00();
   input += synapse0x345ba40();
   input += synapse0x345ba80();
   input += synapse0x345bac0();
   input += synapse0x345bb00();
   input += synapse0x345bb40();
   return input;
}

double NNfunction_uLg::neuron0x345aa20() {
   double input = input0x345aa20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x345bb80() {
   double input = -0.812334;
   input += synapse0x345bec0();
   input += synapse0x345bf00();
   input += synapse0x345bf40();
   input += synapse0x345bf80();
   input += synapse0x345bfc0();
   input += synapse0x345c000();
   input += synapse0x345c040();
   input += synapse0x345c080();
   input += synapse0x345c0c0();
   input += synapse0x345c100();
   input += synapse0x345c140();
   input += synapse0x345c180();
   input += synapse0x345c1c0();
   input += synapse0x345c200();
   input += synapse0x345c240();
   input += synapse0x345c280();
   input += synapse0x345bd10();
   input += synapse0x345bd50();
   input += synapse0x345c3d0();
   input += synapse0x345c410();
   input += synapse0x345c450();
   input += synapse0x345c490();
   input += synapse0x345c4d0();
   input += synapse0x345c510();
   input += synapse0x345c550();
   input += synapse0x345c590();
   input += synapse0x345c5d0();
   input += synapse0x345c610();
   input += synapse0x345c650();
   input += synapse0x345c690();
   input += synapse0x345c6d0();
   input += synapse0x345c710();
   input += synapse0x345c2c0();
   input += synapse0x345c300();
   input += synapse0x345c340();
   input += synapse0x345c380();
   input += synapse0x345c960();
   input += synapse0x345c9a0();
   input += synapse0x345c9e0();
   input += synapse0x345ca20();
   input += synapse0x345ca60();
   input += synapse0x345caa0();
   input += synapse0x345cae0();
   input += synapse0x345cb20();
   input += synapse0x345cb60();
   input += synapse0x345cba0();
   input += synapse0x345cbe0();
   input += synapse0x345cc20();
   input += synapse0x345cc60();
   input += synapse0x345cca0();
   return input;
}

double NNfunction_uLg::neuron0x345bb80() {
   double input = input0x345bb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_uLg::input0x345cce0() {
   double input = 13.0711;
   input += synapse0x345cf00();
   input += synapse0x345cf40();
   input += synapse0x345cf80();
   input += synapse0x345cfc0();
   input += synapse0x345d000();
   return input;
}

double NNfunction_uLg::neuron0x345cce0() {
   double input = input0x345cce0();
   return (input * 1)+0;
}

double NNfunction_uLg::synapse0x3428c90() {
   return (neuron0x3428dd0()*0.600494);
}

double NNfunction_uLg::synapse0x3428cd0() {
   return (neuron0x3429110()*-0.137664);
}

double NNfunction_uLg::synapse0x342e0b0() {
   return (neuron0x3429450()*-0.247347);
}

double NNfunction_uLg::synapse0x342e0f0() {
   return (neuron0x3429790()*0.179852);
}

double NNfunction_uLg::synapse0x342e130() {
   return (neuron0x3429ad0()*-0.11341);
}

double NNfunction_uLg::synapse0x342e170() {
   return (neuron0x3429e10()*0.05181);
}

double NNfunction_uLg::synapse0x342e1b0() {
   return (neuron0x342a150()*-0.416115);
}

double NNfunction_uLg::synapse0x342e1f0() {
   return (neuron0x342a490()*-0.209638);
}

double NNfunction_uLg::synapse0x342e230() {
   return (neuron0x342a7d0()*-0.0882185);
}

double NNfunction_uLg::synapse0x342e270() {
   return (neuron0x342ab10()*0.204155);
}

double NNfunction_uLg::synapse0x342e2b0() {
   return (neuron0x342ae50()*-0.635171);
}

double NNfunction_uLg::synapse0x342e2f0() {
   return (neuron0x342b190()*-1.01931);
}

double NNfunction_uLg::synapse0x342e330() {
   return (neuron0x342b4d0()*0.283245);
}

double NNfunction_uLg::synapse0x342e370() {
   return (neuron0x342b810()*-0.301413);
}

double NNfunction_uLg::synapse0x342e3b0() {
   return (neuron0x342bb50()*0.02881);
}

double NNfunction_uLg::synapse0x342e3f0() {
   return (neuron0x342be90()*0.247011);
}

double NNfunction_uLg::synapse0x3428c00() {
   return (neuron0x342c1d0()*0.138951);
}

double NNfunction_uLg::synapse0x3428c40() {
   return (neuron0x342c730()*-0.286794);
}

double NNfunction_uLg::synapse0x31da840() {
   return (neuron0x342c950()*-0.285681);
}

double NNfunction_uLg::synapse0x31da880() {
   return (neuron0x342cc90()*0.455592);
}

double NNfunction_uLg::synapse0x342e650() {
   return (neuron0x342cfd0()*0.0679283);
}

double NNfunction_uLg::synapse0x342e690() {
   return (neuron0x342d310()*-0.468663);
}

double NNfunction_uLg::synapse0x342e6d0() {
   return (neuron0x342d650()*-0.187935);
}

double NNfunction_uLg::synapse0x342e710() {
   return (neuron0x342d990()*0.274977);
}

double NNfunction_uLg::synapse0x342ea90() {
   return (neuron0x3428dd0()*-0.0758173);
}

double NNfunction_uLg::synapse0x342ead0() {
   return (neuron0x3429110()*0.027083);
}

double NNfunction_uLg::synapse0x342eb10() {
   return (neuron0x3429450()*-0.736242);
}

double NNfunction_uLg::synapse0x342eb50() {
   return (neuron0x3429790()*-0.0868318);
}

double NNfunction_uLg::synapse0x342eb90() {
   return (neuron0x3429ad0()*-0.321524);
}

double NNfunction_uLg::synapse0x342ebd0() {
   return (neuron0x3429e10()*0.234196);
}

double NNfunction_uLg::synapse0x342ec10() {
   return (neuron0x342a150()*-0.306045);
}

double NNfunction_uLg::synapse0x342ec50() {
   return (neuron0x342a490()*-0.260157);
}

double NNfunction_uLg::synapse0x342ec90() {
   return (neuron0x342a7d0()*0.247223);
}

double NNfunction_uLg::synapse0x342e540() {
   return (neuron0x342ab10()*-0.23262);
}

double NNfunction_uLg::synapse0x342e580() {
   return (neuron0x342ae50()*-0.0866162);
}

double NNfunction_uLg::synapse0x342e5c0() {
   return (neuron0x342b190()*-0.433951);
}

double NNfunction_uLg::synapse0x342e600() {
   return (neuron0x342b4d0()*-0.017949);
}

double NNfunction_uLg::synapse0x342eee0() {
   return (neuron0x342b810()*-0.0154902);
}

double NNfunction_uLg::synapse0x342ef20() {
   return (neuron0x342bb50()*-0.307625);
}

double NNfunction_uLg::synapse0x342ef60() {
   return (neuron0x342be90()*0.692626);
}

double NNfunction_uLg::synapse0x342e8e0() {
   return (neuron0x342c1d0()*-0.368039);
}

double NNfunction_uLg::synapse0x342e920() {
   return (neuron0x342c730()*-0.462372);
}

double NNfunction_uLg::synapse0x342f0b0() {
   return (neuron0x342c950()*-0.138202);
}

double NNfunction_uLg::synapse0x342f0f0() {
   return (neuron0x342cc90()*0.237189);
}

double NNfunction_uLg::synapse0x342f130() {
   return (neuron0x342cfd0()*0.136928);
}

double NNfunction_uLg::synapse0x342f170() {
   return (neuron0x342d310()*0.596939);
}

double NNfunction_uLg::synapse0x342f1b0() {
   return (neuron0x342d650()*-0.216726);
}

double NNfunction_uLg::synapse0x342f1f0() {
   return (neuron0x342d990()*-0.0719971);
}

double NNfunction_uLg::synapse0x342f570() {
   return (neuron0x3428dd0()*-0.00182487);
}

double NNfunction_uLg::synapse0x342f5b0() {
   return (neuron0x3429110()*-0.0334535);
}

double NNfunction_uLg::synapse0x342f5f0() {
   return (neuron0x3429450()*-0.071884);
}

double NNfunction_uLg::synapse0x342f630() {
   return (neuron0x3429790()*-0.704098);
}

double NNfunction_uLg::synapse0x342f670() {
   return (neuron0x3429ad0()*0.0080518);
}

double NNfunction_uLg::synapse0x342f6b0() {
   return (neuron0x3429e10()*-0.0377241);
}

double NNfunction_uLg::synapse0x342f6f0() {
   return (neuron0x342a150()*0.0254678);
}

double NNfunction_uLg::synapse0x342f730() {
   return (neuron0x342a490()*0.010993);
}

double NNfunction_uLg::synapse0x342f770() {
   return (neuron0x342a7d0()*0.0456301);
}

double NNfunction_uLg::synapse0x342f7b0() {
   return (neuron0x342ab10()*-0.030431);
}

double NNfunction_uLg::synapse0x342f7f0() {
   return (neuron0x342ae50()*0.033875);
}

double NNfunction_uLg::synapse0x342f830() {
   return (neuron0x342b190()*-1.97832);
}

double NNfunction_uLg::synapse0x342f870() {
   return (neuron0x342b4d0()*0.0423363);
}

double NNfunction_uLg::synapse0x342f8b0() {
   return (neuron0x342b810()*0.00745358);
}

double NNfunction_uLg::synapse0x342f8f0() {
   return (neuron0x342bb50()*-0.150381);
}

double NNfunction_uLg::synapse0x342f930() {
   return (neuron0x342be90()*-0.0166245);
}

double NNfunction_uLg::synapse0x342f3c0() {
   return (neuron0x342c1d0()*0.0251494);
}

double NNfunction_uLg::synapse0x342f400() {
   return (neuron0x342c730()*0.0419175);
}

double NNfunction_uLg::synapse0x31dac70() {
   return (neuron0x342c950()*0.0288082);
}

double NNfunction_uLg::synapse0x31e83d0() {
   return (neuron0x342cc90()*0.0240376);
}

double NNfunction_uLg::synapse0x31e8410() {
   return (neuron0x342cfd0()*0.0297707);
}

double NNfunction_uLg::synapse0x3417e60() {
   return (neuron0x342d310()*0.00830486);
}

double NNfunction_uLg::synapse0x3417ea0() {
   return (neuron0x342d650()*0.0216097);
}

double NNfunction_uLg::synapse0x3417ee0() {
   return (neuron0x342d990()*0.0243986);
}

double NNfunction_uLg::synapse0x31e8c70() {
   return (neuron0x3428dd0()*0.00863699);
}

double NNfunction_uLg::synapse0x342ee60() {
   return (neuron0x3429110()*0.0620358);
}

double NNfunction_uLg::synapse0x342eea0() {
   return (neuron0x3429450()*-0.251578);
}

double NNfunction_uLg::synapse0x342fa80() {
   return (neuron0x3429790()*-0.00221539);
}

double NNfunction_uLg::synapse0x342fac0() {
   return (neuron0x3429ad0()*-0.0113369);
}

double NNfunction_uLg::synapse0x342fb00() {
   return (neuron0x3429e10()*0.0328931);
}

double NNfunction_uLg::synapse0x342fb40() {
   return (neuron0x342a150()*0.0410975);
}

double NNfunction_uLg::synapse0x342fb80() {
   return (neuron0x342a490()*-0.0832747);
}

double NNfunction_uLg::synapse0x342fbc0() {
   return (neuron0x342a7d0()*0.022618);
}

double NNfunction_uLg::synapse0x342fc00() {
   return (neuron0x342ab10()*0.00607716);
}

double NNfunction_uLg::synapse0x342fc40() {
   return (neuron0x342ae50()*0.0131155);
}

double NNfunction_uLg::synapse0x342fc80() {
   return (neuron0x342b190()*-0.531012);
}

double NNfunction_uLg::synapse0x342fcc0() {
   return (neuron0x342b4d0()*0.140932);
}

double NNfunction_uLg::synapse0x342fd00() {
   return (neuron0x342b810()*0.0166328);
}

double NNfunction_uLg::synapse0x342fd40() {
   return (neuron0x342bb50()*-0.0717542);
}

double NNfunction_uLg::synapse0x342fd80() {
   return (neuron0x342be90()*0.0942495);
}

double NNfunction_uLg::synapse0x3428d10() {
   return (neuron0x342c1d0()*0.0239816);
}

double NNfunction_uLg::synapse0x3428d50() {
   return (neuron0x342c730()*-0.0120747);
}

double NNfunction_uLg::synapse0x3428d90() {
   return (neuron0x342c950()*-0.0105728);
}

double NNfunction_uLg::synapse0x342fed0() {
   return (neuron0x342cc90()*-0.061735);
}

double NNfunction_uLg::synapse0x342ff10() {
   return (neuron0x342cfd0()*-0.0231061);
}

double NNfunction_uLg::synapse0x342ff50() {
   return (neuron0x342d310()*-0.00855285);
}

double NNfunction_uLg::synapse0x342ff90() {
   return (neuron0x342d650()*-0.00777306);
}

double NNfunction_uLg::synapse0x342ffd0() {
   return (neuron0x342d990()*-0.00269519);
}

double NNfunction_uLg::synapse0x3430350() {
   return (neuron0x3428dd0()*0.00990664);
}

double NNfunction_uLg::synapse0x3430390() {
   return (neuron0x3429110()*0.0017952);
}

double NNfunction_uLg::synapse0x34303d0() {
   return (neuron0x3429450()*0.0163606);
}

double NNfunction_uLg::synapse0x3430410() {
   return (neuron0x3429790()*1.92704);
}

double NNfunction_uLg::synapse0x3430450() {
   return (neuron0x3429ad0()*0.0112586);
}

double NNfunction_uLg::synapse0x3430490() {
   return (neuron0x3429e10()*-0.00184203);
}

double NNfunction_uLg::synapse0x34304d0() {
   return (neuron0x342a150()*0.0123859);
}

double NNfunction_uLg::synapse0x3430510() {
   return (neuron0x342a490()*0.00763819);
}

double NNfunction_uLg::synapse0x3430550() {
   return (neuron0x342a7d0()*-0.00406735);
}

double NNfunction_uLg::synapse0x3430590() {
   return (neuron0x342ab10()*-0.00465555);
}

double NNfunction_uLg::synapse0x34305d0() {
   return (neuron0x342ae50()*-0.0129751);
}

double NNfunction_uLg::synapse0x3430610() {
   return (neuron0x342b190()*-0.0065579);
}

double NNfunction_uLg::synapse0x3430650() {
   return (neuron0x342b4d0()*0.0176421);
}

double NNfunction_uLg::synapse0x3430690() {
   return (neuron0x342b810()*0.0038423);
}

double NNfunction_uLg::synapse0x34306d0() {
   return (neuron0x342bb50()*0.0122686);
}

double NNfunction_uLg::synapse0x3430710() {
   return (neuron0x342be90()*0.00881589);
}

double NNfunction_uLg::synapse0x34301a0() {
   return (neuron0x342c1d0()*0.00550138);
}

double NNfunction_uLg::synapse0x34301e0() {
   return (neuron0x342c730()*0.0129894);
}

double NNfunction_uLg::synapse0x3430860() {
   return (neuron0x342c950()*0.0141631);
}

double NNfunction_uLg::synapse0x34308a0() {
   return (neuron0x342cc90()*-0.000295784);
}

double NNfunction_uLg::synapse0x34308e0() {
   return (neuron0x342cfd0()*0.00977067);
}

double NNfunction_uLg::synapse0x3430920() {
   return (neuron0x342d310()*-0.00119363);
}

double NNfunction_uLg::synapse0x3430960() {
   return (neuron0x342d650()*0.00897558);
}

double NNfunction_uLg::synapse0x34309a0() {
   return (neuron0x342d990()*0.00468756);
}

double NNfunction_uLg::synapse0x3430d20() {
   return (neuron0x3428dd0()*0.00934196);
}

double NNfunction_uLg::synapse0x3430d60() {
   return (neuron0x3429110()*-0.0125566);
}

double NNfunction_uLg::synapse0x3430da0() {
   return (neuron0x3429450()*-0.187962);
}

double NNfunction_uLg::synapse0x3430de0() {
   return (neuron0x3429790()*0.293513);
}

double NNfunction_uLg::synapse0x3430e20() {
   return (neuron0x3429ad0()*-0.00500176);
}

double NNfunction_uLg::synapse0x3430e60() {
   return (neuron0x3429e10()*0.00472815);
}

double NNfunction_uLg::synapse0x3430ea0() {
   return (neuron0x342a150()*-0.0139163);
}

double NNfunction_uLg::synapse0x3430ee0() {
   return (neuron0x342a490()*0.0118918);
}

double NNfunction_uLg::synapse0x3430f20() {
   return (neuron0x342a7d0()*-0.000575064);
}

double NNfunction_uLg::synapse0x31e8740() {
   return (neuron0x342ab10()*0.00401375);
}

double NNfunction_uLg::synapse0x31e8780() {
   return (neuron0x342ae50()*0.00164339);
}

double NNfunction_uLg::synapse0x31e87c0() {
   return (neuron0x342b190()*-0.094238);
}

double NNfunction_uLg::synapse0x31e8800() {
   return (neuron0x342b4d0()*-0.0216705);
}

double NNfunction_uLg::synapse0x31e8840() {
   return (neuron0x342b810()*0.0200001);
}

double NNfunction_uLg::synapse0x31e8880() {
   return (neuron0x342bb50()*-0.0253974);
}

double NNfunction_uLg::synapse0x31e88c0() {
   return (neuron0x342be90()*-0.0307062);
}

double NNfunction_uLg::synapse0x3430b70() {
   return (neuron0x342c1d0()*0.0168427);
}

double NNfunction_uLg::synapse0x3430bb0() {
   return (neuron0x342c730()*-0.00579256);
}

double NNfunction_uLg::synapse0x31e8a10() {
   return (neuron0x342c950()*-0.014727);
}

double NNfunction_uLg::synapse0x31e8a50() {
   return (neuron0x342cc90()*0.00397458);
}

double NNfunction_uLg::synapse0x31e8a90() {
   return (neuron0x342cfd0()*-0.00266317);
}

double NNfunction_uLg::synapse0x31e8ad0() {
   return (neuron0x342d310()*-0.00806545);
}

double NNfunction_uLg::synapse0x31e8b10() {
   return (neuron0x342d650()*0.00347765);
}

double NNfunction_uLg::synapse0x3431770() {
   return (neuron0x342d990()*0.000165775);
}

double NNfunction_uLg::synapse0x3431af0() {
   return (neuron0x3428dd0()*0.00420838);
}

double NNfunction_uLg::synapse0x3431b30() {
   return (neuron0x3429110()*0.00312951);
}

double NNfunction_uLg::synapse0x3431b70() {
   return (neuron0x3429450()*0.0149257);
}

double NNfunction_uLg::synapse0x3431bb0() {
   return (neuron0x3429790()*-16.4348);
}

double NNfunction_uLg::synapse0x3431bf0() {
   return (neuron0x3429ad0()*0.00704663);
}

double NNfunction_uLg::synapse0x3431c30() {
   return (neuron0x3429e10()*0.00538743);
}

double NNfunction_uLg::synapse0x3431c70() {
   return (neuron0x342a150()*0.00097932);
}

double NNfunction_uLg::synapse0x3431cb0() {
   return (neuron0x342a490()*0.000991735);
}

double NNfunction_uLg::synapse0x3431cf0() {
   return (neuron0x342a7d0()*-0.0045898);
}

double NNfunction_uLg::synapse0x3431d30() {
   return (neuron0x342ab10()*0.00212228);
}

double NNfunction_uLg::synapse0x3431d70() {
   return (neuron0x342ae50()*-0.0050017);
}

double NNfunction_uLg::synapse0x3431db0() {
   return (neuron0x342b190()*-0.0499577);
}

double NNfunction_uLg::synapse0x3431df0() {
   return (neuron0x342b4d0()*0.00861968);
}

double NNfunction_uLg::synapse0x3431e30() {
   return (neuron0x342b810()*-0.00786849);
}

double NNfunction_uLg::synapse0x3431e70() {
   return (neuron0x342bb50()*0.00398707);
}

double NNfunction_uLg::synapse0x3431eb0() {
   return (neuron0x342be90()*0.00606898);
}

double NNfunction_uLg::synapse0x3431940() {
   return (neuron0x342c1d0()*-0.00293016);
}

double NNfunction_uLg::synapse0x3431980() {
   return (neuron0x342c730()*-0.00457415);
}

double NNfunction_uLg::synapse0x3432000() {
   return (neuron0x342c950()*0.000360857);
}

double NNfunction_uLg::synapse0x3432040() {
   return (neuron0x342cc90()*-0.00666256);
}

double NNfunction_uLg::synapse0x3432080() {
   return (neuron0x342cfd0()*0.00546175);
}

double NNfunction_uLg::synapse0x34320c0() {
   return (neuron0x342d310()*0.00223866);
}

double NNfunction_uLg::synapse0x3432100() {
   return (neuron0x342d650()*0.00817892);
}

double NNfunction_uLg::synapse0x3432140() {
   return (neuron0x342d990()*0.0025914);
}

double NNfunction_uLg::synapse0x34324c0() {
   return (neuron0x3428dd0()*0.00750158);
}

double NNfunction_uLg::synapse0x3432500() {
   return (neuron0x3429110()*-0.0118095);
}

double NNfunction_uLg::synapse0x3432540() {
   return (neuron0x3429450()*-0.041143);
}

double NNfunction_uLg::synapse0x3432580() {
   return (neuron0x3429790()*0.212873);
}

double NNfunction_uLg::synapse0x34325c0() {
   return (neuron0x3429ad0()*0.00222488);
}

double NNfunction_uLg::synapse0x3432600() {
   return (neuron0x3429e10()*-0.0036233);
}

double NNfunction_uLg::synapse0x3432640() {
   return (neuron0x342a150()*0.00589267);
}

double NNfunction_uLg::synapse0x3432680() {
   return (neuron0x342a490()*-0.011046);
}

double NNfunction_uLg::synapse0x34326c0() {
   return (neuron0x342a7d0()*0.00610443);
}

double NNfunction_uLg::synapse0x3432700() {
   return (neuron0x342ab10()*0.0107239);
}

double NNfunction_uLg::synapse0x3432740() {
   return (neuron0x342ae50()*0.00754344);
}

double NNfunction_uLg::synapse0x3432780() {
   return (neuron0x342b190()*-1.94951);
}

double NNfunction_uLg::synapse0x34327c0() {
   return (neuron0x342b4d0()*0.0123966);
}

double NNfunction_uLg::synapse0x3432800() {
   return (neuron0x342b810()*-0.00323114);
}

double NNfunction_uLg::synapse0x3432840() {
   return (neuron0x342bb50()*0.0232813);
}

double NNfunction_uLg::synapse0x3432880() {
   return (neuron0x342be90()*0.0043766);
}

double NNfunction_uLg::synapse0x3432310() {
   return (neuron0x342c1d0()*-0.00364149);
}

double NNfunction_uLg::synapse0x3432350() {
   return (neuron0x342c730()*0.00819491);
}

double NNfunction_uLg::synapse0x34329d0() {
   return (neuron0x342c950()*-0.00122009);
}

double NNfunction_uLg::synapse0x3432a10() {
   return (neuron0x342cc90()*-0.0147178);
}

double NNfunction_uLg::synapse0x3432a50() {
   return (neuron0x342cfd0()*-0.00139419);
}

double NNfunction_uLg::synapse0x3432a90() {
   return (neuron0x342d310()*-0.0106614);
}

double NNfunction_uLg::synapse0x3432ad0() {
   return (neuron0x342d650()*-9.08784e-05);
}

double NNfunction_uLg::synapse0x3432b10() {
   return (neuron0x342d990()*-0.00260314);
}

double NNfunction_uLg::synapse0x342c620() {
   return (neuron0x3428dd0()*-0.00767803);
}

double NNfunction_uLg::synapse0x342c660() {
   return (neuron0x3429110()*0.0116889);
}

double NNfunction_uLg::synapse0x342c6a0() {
   return (neuron0x3429450()*-0.0153761);
}

double NNfunction_uLg::synapse0x342c6e0() {
   return (neuron0x3429790()*-0.0616815);
}

double NNfunction_uLg::synapse0x34330a0() {
   return (neuron0x3429ad0()*-0.00378698);
}

double NNfunction_uLg::synapse0x34330e0() {
   return (neuron0x3429e10()*0.00037417);
}

double NNfunction_uLg::synapse0x3433120() {
   return (neuron0x342a150()*-0.0070219);
}

double NNfunction_uLg::synapse0x3433160() {
   return (neuron0x342a490()*0.00578417);
}

double NNfunction_uLg::synapse0x34331a0() {
   return (neuron0x342a7d0()*-0.0257244);
}

double NNfunction_uLg::synapse0x34331e0() {
   return (neuron0x342ab10()*0.000897148);
}

double NNfunction_uLg::synapse0x3433220() {
   return (neuron0x342ae50()*-0.0162158);
}

double NNfunction_uLg::synapse0x3433260() {
   return (neuron0x342b190()*3.79184);
}

double NNfunction_uLg::synapse0x34332a0() {
   return (neuron0x342b4d0()*0.00481578);
}

double NNfunction_uLg::synapse0x34332e0() {
   return (neuron0x342b810()*0.0262769);
}

double NNfunction_uLg::synapse0x3433320() {
   return (neuron0x342bb50()*0.012961);
}

double NNfunction_uLg::synapse0x3433360() {
   return (neuron0x342be90()*0.0128151);
}

double NNfunction_uLg::synapse0x3432ce0() {
   return (neuron0x342c1d0()*0.0180711);
}

double NNfunction_uLg::synapse0x3432d20() {
   return (neuron0x342c730()*-0.000112682);
}

double NNfunction_uLg::synapse0x34334b0() {
   return (neuron0x342c950()*0.0151766);
}

double NNfunction_uLg::synapse0x34334f0() {
   return (neuron0x342cc90()*0.0120448);
}

double NNfunction_uLg::synapse0x3433530() {
   return (neuron0x342cfd0()*-0.005268);
}

double NNfunction_uLg::synapse0x3433570() {
   return (neuron0x342d310()*0.0113958);
}

double NNfunction_uLg::synapse0x34335b0() {
   return (neuron0x342d650()*-0.00291378);
}

double NNfunction_uLg::synapse0x34335f0() {
   return (neuron0x342d990()*-0.00877132);
}

double NNfunction_uLg::synapse0x3433970() {
   return (neuron0x3428dd0()*-0.00240218);
}

double NNfunction_uLg::synapse0x34339b0() {
   return (neuron0x3429110()*-0.0256234);
}

double NNfunction_uLg::synapse0x34339f0() {
   return (neuron0x3429450()*0.0804505);
}

double NNfunction_uLg::synapse0x3433a30() {
   return (neuron0x3429790()*0.0358793);
}

double NNfunction_uLg::synapse0x3433a70() {
   return (neuron0x3429ad0()*-0.103586);
}

double NNfunction_uLg::synapse0x3433ab0() {
   return (neuron0x3429e10()*0.0618828);
}

double NNfunction_uLg::synapse0x3433af0() {
   return (neuron0x342a150()*-0.026621);
}

double NNfunction_uLg::synapse0x3433b30() {
   return (neuron0x342a490()*0.0740349);
}

double NNfunction_uLg::synapse0x3433b70() {
   return (neuron0x342a7d0()*-0.024002);
}

double NNfunction_uLg::synapse0x3433bb0() {
   return (neuron0x342ab10()*0.0523034);
}

double NNfunction_uLg::synapse0x3433bf0() {
   return (neuron0x342ae50()*-0.0174641);
}

double NNfunction_uLg::synapse0x3433c30() {
   return (neuron0x342b190()*-0.248568);
}

double NNfunction_uLg::synapse0x3433c70() {
   return (neuron0x342b4d0()*0.676701);
}

double NNfunction_uLg::synapse0x3433cb0() {
   return (neuron0x342b810()*0.0268459);
}

double NNfunction_uLg::synapse0x3433cf0() {
   return (neuron0x342bb50()*0.539349);
}

double NNfunction_uLg::synapse0x3433d30() {
   return (neuron0x342be90()*0.570048);
}

double NNfunction_uLg::synapse0x34337c0() {
   return (neuron0x342c1d0()*0.0920143);
}

double NNfunction_uLg::synapse0x3433800() {
   return (neuron0x342c730()*0.404729);
}

double NNfunction_uLg::synapse0x3433e80() {
   return (neuron0x342c950()*0.480449);
}

double NNfunction_uLg::synapse0x3433ec0() {
   return (neuron0x342cc90()*-0.0368488);
}

double NNfunction_uLg::synapse0x3433f00() {
   return (neuron0x342cfd0()*0.0547698);
}

double NNfunction_uLg::synapse0x3433f40() {
   return (neuron0x342d310()*-0.050718);
}

double NNfunction_uLg::synapse0x3433f80() {
   return (neuron0x342d650()*-0.0111342);
}

double NNfunction_uLg::synapse0x3433fc0() {
   return (neuron0x342d990()*0.0443932);
}

double NNfunction_uLg::synapse0x3434340() {
   return (neuron0x3428dd0()*-0.205196);
}

double NNfunction_uLg::synapse0x3434380() {
   return (neuron0x3429110()*0.264917);
}

double NNfunction_uLg::synapse0x34343c0() {
   return (neuron0x3429450()*-0.296174);
}

double NNfunction_uLg::synapse0x3434400() {
   return (neuron0x3429790()*0.263088);
}

double NNfunction_uLg::synapse0x3434440() {
   return (neuron0x3429ad0()*-0.299759);
}

double NNfunction_uLg::synapse0x3434480() {
   return (neuron0x3429e10()*0.530816);
}

double NNfunction_uLg::synapse0x34344c0() {
   return (neuron0x342a150()*0.203264);
}

double NNfunction_uLg::synapse0x3434500() {
   return (neuron0x342a490()*0.147314);
}

double NNfunction_uLg::synapse0x3434540() {
   return (neuron0x342a7d0()*-0.0706976);
}

double NNfunction_uLg::synapse0x3434580() {
   return (neuron0x342ab10()*-0.0285883);
}

double NNfunction_uLg::synapse0x34345c0() {
   return (neuron0x342ae50()*0.216717);
}

double NNfunction_uLg::synapse0x3434600() {
   return (neuron0x342b190()*-0.725674);
}

double NNfunction_uLg::synapse0x3434640() {
   return (neuron0x342b4d0()*-0.202251);
}

double NNfunction_uLg::synapse0x3434680() {
   return (neuron0x342b810()*-0.150482);
}

double NNfunction_uLg::synapse0x34346c0() {
   return (neuron0x342bb50()*-0.346842);
}

double NNfunction_uLg::synapse0x3434700() {
   return (neuron0x342be90()*0.336849);
}

double NNfunction_uLg::synapse0x3434190() {
   return (neuron0x342c1d0()*-0.261691);
}

double NNfunction_uLg::synapse0x34341d0() {
   return (neuron0x342c730()*0.468852);
}

double NNfunction_uLg::synapse0x3430f60() {
   return (neuron0x342c950()*-0.213652);
}

double NNfunction_uLg::synapse0x3430fa0() {
   return (neuron0x342cc90()*0.320178);
}

double NNfunction_uLg::synapse0x3430fe0() {
   return (neuron0x342cfd0()*0.0835824);
}

double NNfunction_uLg::synapse0x3431020() {
   return (neuron0x342d310()*0.161188);
}

double NNfunction_uLg::synapse0x3431060() {
   return (neuron0x342d650()*0.177234);
}

double NNfunction_uLg::synapse0x34310a0() {
   return (neuron0x342d990()*0.179289);
}

double NNfunction_uLg::synapse0x3431420() {
   return (neuron0x3428dd0()*-0.0976279);
}

double NNfunction_uLg::synapse0x3431460() {
   return (neuron0x3429110()*-0.124357);
}

double NNfunction_uLg::synapse0x34314a0() {
   return (neuron0x3429450()*-0.0903503);
}

double NNfunction_uLg::synapse0x34314e0() {
   return (neuron0x3429790()*0.0392408);
}

double NNfunction_uLg::synapse0x3431520() {
   return (neuron0x3429ad0()*0.115698);
}

double NNfunction_uLg::synapse0x3431560() {
   return (neuron0x3429e10()*-0.125535);
}

double NNfunction_uLg::synapse0x34315a0() {
   return (neuron0x342a150()*-0.0470978);
}

double NNfunction_uLg::synapse0x34315e0() {
   return (neuron0x342a490()*-0.0108656);
}

double NNfunction_uLg::synapse0x3431620() {
   return (neuron0x342a7d0()*-0.0457964);
}

double NNfunction_uLg::synapse0x3431660() {
   return (neuron0x342ab10()*-0.00101105);
}

double NNfunction_uLg::synapse0x34316a0() {
   return (neuron0x342ae50()*0.030579);
}

double NNfunction_uLg::synapse0x34316e0() {
   return (neuron0x342b190()*-0.552203);
}

double NNfunction_uLg::synapse0x3431720() {
   return (neuron0x342b4d0()*0.187107);
}

double NNfunction_uLg::synapse0x3435860() {
   return (neuron0x342b810()*-0.388247);
}

double NNfunction_uLg::synapse0x34358a0() {
   return (neuron0x342bb50()*0.119082);
}

double NNfunction_uLg::synapse0x34358e0() {
   return (neuron0x342be90()*0.82424);
}

double NNfunction_uLg::synapse0x3431270() {
   return (neuron0x342c1d0()*-0.313544);
}

double NNfunction_uLg::synapse0x34312b0() {
   return (neuron0x342c730()*0.0557579);
}

double NNfunction_uLg::synapse0x3435a30() {
   return (neuron0x342c950()*0.0578789);
}

double NNfunction_uLg::synapse0x3435a70() {
   return (neuron0x342cc90()*0.172238);
}

double NNfunction_uLg::synapse0x3435ab0() {
   return (neuron0x342cfd0()*-0.00725757);
}

double NNfunction_uLg::synapse0x3435af0() {
   return (neuron0x342d310()*0.040648);
}

double NNfunction_uLg::synapse0x3435b30() {
   return (neuron0x342d650()*-0.00656621);
}

double NNfunction_uLg::synapse0x3435b70() {
   return (neuron0x342d990()*-0.0185289);
}

double NNfunction_uLg::synapse0x3435ef0() {
   return (neuron0x3428dd0()*0.00266901);
}

double NNfunction_uLg::synapse0x3435f30() {
   return (neuron0x3429110()*0.000279831);
}

double NNfunction_uLg::synapse0x3435f70() {
   return (neuron0x3429450()*0.0123832);
}

double NNfunction_uLg::synapse0x3435fb0() {
   return (neuron0x3429790()*5.30918);
}

double NNfunction_uLg::synapse0x3435ff0() {
   return (neuron0x3429ad0()*0.00351555);
}

double NNfunction_uLg::synapse0x3436030() {
   return (neuron0x3429e10()*-0.000808775);
}

double NNfunction_uLg::synapse0x3436070() {
   return (neuron0x342a150()*-9.98286e-05);
}

double NNfunction_uLg::synapse0x34360b0() {
   return (neuron0x342a490()*0.00161622);
}

double NNfunction_uLg::synapse0x34360f0() {
   return (neuron0x342a7d0()*0.00127084);
}

double NNfunction_uLg::synapse0x3436130() {
   return (neuron0x342ab10()*-0.00168746);
}

double NNfunction_uLg::synapse0x3436170() {
   return (neuron0x342ae50()*-0.00328973);
}

double NNfunction_uLg::synapse0x34361b0() {
   return (neuron0x342b190()*0.0677933);
}

double NNfunction_uLg::synapse0x34361f0() {
   return (neuron0x342b4d0()*0.00965036);
}

double NNfunction_uLg::synapse0x3436230() {
   return (neuron0x342b810()*-0.00466997);
}

double NNfunction_uLg::synapse0x3436270() {
   return (neuron0x342bb50()*0.000297918);
}

double NNfunction_uLg::synapse0x34362b0() {
   return (neuron0x342be90()*-0.0022901);
}

double NNfunction_uLg::synapse0x3435d40() {
   return (neuron0x342c1d0()*-0.00616036);
}

double NNfunction_uLg::synapse0x3435d80() {
   return (neuron0x342c730()*0.00346015);
}

double NNfunction_uLg::synapse0x3436400() {
   return (neuron0x342c950()*0.00735319);
}

double NNfunction_uLg::synapse0x3436440() {
   return (neuron0x342cc90()*-0.0068258);
}

double NNfunction_uLg::synapse0x3436480() {
   return (neuron0x342cfd0()*-0.000139696);
}

double NNfunction_uLg::synapse0x34364c0() {
   return (neuron0x342d310()*0.00438849);
}

double NNfunction_uLg::synapse0x3436500() {
   return (neuron0x342d650()*0.00177606);
}

double NNfunction_uLg::synapse0x3436540() {
   return (neuron0x342d990()*0.0020803);
}

double NNfunction_uLg::synapse0x34368c0() {
   return (neuron0x3428dd0()*-0.0825043);
}

double NNfunction_uLg::synapse0x3436900() {
   return (neuron0x3429110()*-0.0936378);
}

double NNfunction_uLg::synapse0x3436940() {
   return (neuron0x3429450()*-0.282021);
}

double NNfunction_uLg::synapse0x3436980() {
   return (neuron0x3429790()*0.589119);
}

double NNfunction_uLg::synapse0x34369c0() {
   return (neuron0x3429ad0()*0.296363);
}

double NNfunction_uLg::synapse0x3436a00() {
   return (neuron0x3429e10()*-0.133675);
}

double NNfunction_uLg::synapse0x3436a40() {
   return (neuron0x342a150()*-0.412074);
}

double NNfunction_uLg::synapse0x3436a80() {
   return (neuron0x342a490()*-0.285827);
}

double NNfunction_uLg::synapse0x3436ac0() {
   return (neuron0x342a7d0()*0.113521);
}

double NNfunction_uLg::synapse0x3436b00() {
   return (neuron0x342ab10()*0.528763);
}

double NNfunction_uLg::synapse0x3436b40() {
   return (neuron0x342ae50()*-0.247301);
}

double NNfunction_uLg::synapse0x3436b80() {
   return (neuron0x342b190()*0.131883);
}

double NNfunction_uLg::synapse0x3436bc0() {
   return (neuron0x342b4d0()*-0.126986);
}

double NNfunction_uLg::synapse0x3436c00() {
   return (neuron0x342b810()*0.129326);
}

double NNfunction_uLg::synapse0x3436c40() {
   return (neuron0x342bb50()*0.301508);
}

double NNfunction_uLg::synapse0x3436c80() {
   return (neuron0x342be90()*-0.0429526);
}

double NNfunction_uLg::synapse0x3436710() {
   return (neuron0x342c1d0()*0.666342);
}

double NNfunction_uLg::synapse0x3436750() {
   return (neuron0x342c730()*0.456011);
}

double NNfunction_uLg::synapse0x3436dd0() {
   return (neuron0x342c950()*0.313551);
}

double NNfunction_uLg::synapse0x3436e10() {
   return (neuron0x342cc90()*0.524581);
}

double NNfunction_uLg::synapse0x3436e50() {
   return (neuron0x342cfd0()*-0.16299);
}

double NNfunction_uLg::synapse0x3436e90() {
   return (neuron0x342d310()*-0.0946874);
}

double NNfunction_uLg::synapse0x3436ed0() {
   return (neuron0x342d650()*-0.177029);
}

double NNfunction_uLg::synapse0x3436f10() {
   return (neuron0x342d990()*0.0885959);
}

double NNfunction_uLg::synapse0x3437290() {
   return (neuron0x3428dd0()*0.0749328);
}

double NNfunction_uLg::synapse0x34372d0() {
   return (neuron0x3429110()*-0.176186);
}

double NNfunction_uLg::synapse0x3437310() {
   return (neuron0x3429450()*0.0366936);
}

double NNfunction_uLg::synapse0x3437350() {
   return (neuron0x3429790()*0.072531);
}

double NNfunction_uLg::synapse0x3437390() {
   return (neuron0x3429ad0()*0.0159985);
}

double NNfunction_uLg::synapse0x34373d0() {
   return (neuron0x3429e10()*0.166778);
}

double NNfunction_uLg::synapse0x3437410() {
   return (neuron0x342a150()*-0.55284);
}

double NNfunction_uLg::synapse0x3437450() {
   return (neuron0x342a490()*0.210054);
}

double NNfunction_uLg::synapse0x3437490() {
   return (neuron0x342a7d0()*-0.145892);
}

double NNfunction_uLg::synapse0x34374d0() {
   return (neuron0x342ab10()*-0.161971);
}

double NNfunction_uLg::synapse0x3437510() {
   return (neuron0x342ae50()*-0.0584052);
}

double NNfunction_uLg::synapse0x3437550() {
   return (neuron0x342b190()*0.0599653);
}

double NNfunction_uLg::synapse0x3437590() {
   return (neuron0x342b4d0()*-0.773655);
}

double NNfunction_uLg::synapse0x34375d0() {
   return (neuron0x342b810()*0.390474);
}

double NNfunction_uLg::synapse0x3437610() {
   return (neuron0x342bb50()*0.398634);
}

double NNfunction_uLg::synapse0x3437650() {
   return (neuron0x342be90()*0.227604);
}

double NNfunction_uLg::synapse0x34370e0() {
   return (neuron0x342c1d0()*0.139983);
}

double NNfunction_uLg::synapse0x3437120() {
   return (neuron0x342c730()*0.0737197);
}

double NNfunction_uLg::synapse0x34377a0() {
   return (neuron0x342c950()*-0.146211);
}

double NNfunction_uLg::synapse0x34377e0() {
   return (neuron0x342cc90()*-0.492104);
}

double NNfunction_uLg::synapse0x3437820() {
   return (neuron0x342cfd0()*-0.218188);
}

double NNfunction_uLg::synapse0x3437860() {
   return (neuron0x342d310()*-0.109096);
}

double NNfunction_uLg::synapse0x34378a0() {
   return (neuron0x342d650()*0.116381);
}

double NNfunction_uLg::synapse0x34378e0() {
   return (neuron0x342d990()*0.0501342);
}

double NNfunction_uLg::synapse0x3437c60() {
   return (neuron0x3428dd0()*-0.16358);
}

double NNfunction_uLg::synapse0x3428ff0() {
   return (neuron0x3429110()*-0.219827);
}

double NNfunction_uLg::synapse0x3429030() {
   return (neuron0x3429450()*-0.556705);
}

double NNfunction_uLg::synapse0x3429330() {
   return (neuron0x3429790()*0.678011);
}

double NNfunction_uLg::synapse0x3429370() {
   return (neuron0x3429ad0()*-0.30786);
}

double NNfunction_uLg::synapse0x3429670() {
   return (neuron0x3429e10()*-0.623925);
}

double NNfunction_uLg::synapse0x34296b0() {
   return (neuron0x342a150()*0.335905);
}

double NNfunction_uLg::synapse0x34299b0() {
   return (neuron0x342a490()*0.20149);
}

double NNfunction_uLg::synapse0x34299f0() {
   return (neuron0x342a7d0()*-0.186177);
}

double NNfunction_uLg::synapse0x3429cf0() {
   return (neuron0x342ab10()*-0.198046);
}

double NNfunction_uLg::synapse0x3429d30() {
   return (neuron0x342ae50()*0.42433);
}

double NNfunction_uLg::synapse0x342a030() {
   return (neuron0x342b190()*-0.28021);
}

double NNfunction_uLg::synapse0x342a070() {
   return (neuron0x342b4d0()*0.184971);
}

double NNfunction_uLg::synapse0x342a370() {
   return (neuron0x342b810()*-0.0228402);
}

double NNfunction_uLg::synapse0x342a3b0() {
   return (neuron0x342bb50()*-0.082295);
}

double NNfunction_uLg::synapse0x342a6b0() {
   return (neuron0x342be90()*0.48753);
}

double NNfunction_uLg::synapse0x342a6f0() {
   return (neuron0x342c1d0()*-0.0415076);
}

double NNfunction_uLg::synapse0x342a9f0() {
   return (neuron0x342c730()*-0.11506);
}

double NNfunction_uLg::synapse0x342aa30() {
   return (neuron0x342c950()*0.370271);
}

double NNfunction_uLg::synapse0x342ad30() {
   return (neuron0x342cc90()*0.448687);
}

double NNfunction_uLg::synapse0x342ad70() {
   return (neuron0x342cfd0()*-0.313721);
}

double NNfunction_uLg::synapse0x342b070() {
   return (neuron0x342d310()*0.172725);
}

double NNfunction_uLg::synapse0x342b0b0() {
   return (neuron0x342d650()*-0.151732);
}

double NNfunction_uLg::synapse0x342b3b0() {
   return (neuron0x342d990()*-0.335806);
}

double NNfunction_uLg::synapse0x342b3f0() {
   return (neuron0x3428dd0()*-0.00900435);
}

double NNfunction_uLg::synapse0x342c0b0() {
   return (neuron0x3429110()*-0.0967187);
}

double NNfunction_uLg::synapse0x342c0f0() {
   return (neuron0x3429450()*0.192229);
}

double NNfunction_uLg::synapse0x3437ab0() {
   return (neuron0x3429790()*-0.111285);
}

double NNfunction_uLg::synapse0x3437af0() {
   return (neuron0x3429ad0()*0.101423);
}

double NNfunction_uLg::synapse0x342c3f0() {
   return (neuron0x3429e10()*0.0648786);
}

double NNfunction_uLg::synapse0x342c430() {
   return (neuron0x342a150()*-0.156268);
}

double NNfunction_uLg::synapse0x31da720() {
   return (neuron0x342a490()*-0.0409419);
}

double NNfunction_uLg::synapse0x31da760() {
   return (neuron0x342a7d0()*-0.0486293);
}

double NNfunction_uLg::synapse0x342cb70() {
   return (neuron0x342ab10()*0.00286458);
}

double NNfunction_uLg::synapse0x342cbb0() {
   return (neuron0x342ae50()*-0.0492061);
}

double NNfunction_uLg::synapse0x342ceb0() {
   return (neuron0x342b190()*-0.678704);
}

double NNfunction_uLg::synapse0x342cef0() {
   return (neuron0x342b4d0()*-0.304182);
}

double NNfunction_uLg::synapse0x342d1f0() {
   return (neuron0x342b810()*0.347025);
}

double NNfunction_uLg::synapse0x342d230() {
   return (neuron0x342bb50()*-0.172258);
}

double NNfunction_uLg::synapse0x342d530() {
   return (neuron0x342be90()*-0.0616586);
}

double NNfunction_uLg::synapse0x342d570() {
   return (neuron0x342c1d0()*0.642144);
}

double NNfunction_uLg::synapse0x342d870() {
   return (neuron0x342c730()*-0.236735);
}

double NNfunction_uLg::synapse0x342d8b0() {
   return (neuron0x342c950()*-0.226369);
}

double NNfunction_uLg::synapse0x342dbb0() {
   return (neuron0x342cc90()*-0.309484);
}

double NNfunction_uLg::synapse0x342dbf0() {
   return (neuron0x342cfd0()*-0.00102445);
}

double NNfunction_uLg::synapse0x342b6f0() {
   return (neuron0x342d310()*0.0701844);
}

double NNfunction_uLg::synapse0x342b730() {
   return (neuron0x342d650()*-0.0357529);
}

double NNfunction_uLg::synapse0x34399d0() {
   return (neuron0x342d990()*-0.212598);
}

double NNfunction_uLg::synapse0x3439d50() {
   return (neuron0x3428dd0()*0.195908);
}

double NNfunction_uLg::synapse0x3439d90() {
   return (neuron0x3429110()*0.057506);
}

double NNfunction_uLg::synapse0x3439dd0() {
   return (neuron0x3429450()*-0.694033);
}

double NNfunction_uLg::synapse0x3439e10() {
   return (neuron0x3429790()*-0.592464);
}

double NNfunction_uLg::synapse0x3439e50() {
   return (neuron0x3429ad0()*-0.078049);
}

double NNfunction_uLg::synapse0x3439e90() {
   return (neuron0x3429e10()*-0.315681);
}

double NNfunction_uLg::synapse0x3439ed0() {
   return (neuron0x342a150()*0.045726);
}

double NNfunction_uLg::synapse0x3439f10() {
   return (neuron0x342a490()*-0.504364);
}

double NNfunction_uLg::synapse0x3439f50() {
   return (neuron0x342a7d0()*-0.252283);
}

double NNfunction_uLg::synapse0x3439f90() {
   return (neuron0x342ab10()*-0.170135);
}

double NNfunction_uLg::synapse0x3439fd0() {
   return (neuron0x342ae50()*0.188292);
}

double NNfunction_uLg::synapse0x343a010() {
   return (neuron0x342b190()*0.795649);
}

double NNfunction_uLg::synapse0x343a050() {
   return (neuron0x342b4d0()*-0.283306);
}

double NNfunction_uLg::synapse0x343a090() {
   return (neuron0x342b810()*0.110101);
}

double NNfunction_uLg::synapse0x343a0d0() {
   return (neuron0x342bb50()*-0.264713);
}

double NNfunction_uLg::synapse0x343a110() {
   return (neuron0x342be90()*0.00854979);
}

double NNfunction_uLg::synapse0x3439ba0() {
   return (neuron0x342c1d0()*0.450604);
}

double NNfunction_uLg::synapse0x3439be0() {
   return (neuron0x342c730()*-0.141033);
}

double NNfunction_uLg::synapse0x343a260() {
   return (neuron0x342c950()*-0.201549);
}

double NNfunction_uLg::synapse0x343a2a0() {
   return (neuron0x342cc90()*-0.345924);
}

double NNfunction_uLg::synapse0x343a2e0() {
   return (neuron0x342cfd0()*-0.11961);
}

double NNfunction_uLg::synapse0x343a320() {
   return (neuron0x342d310()*-0.0309341);
}

double NNfunction_uLg::synapse0x343a360() {
   return (neuron0x342d650()*0.183555);
}

double NNfunction_uLg::synapse0x343a3a0() {
   return (neuron0x342d990()*-0.18246);
}

double NNfunction_uLg::synapse0x343a720() {
   return (neuron0x3428dd0()*0.0227714);
}

double NNfunction_uLg::synapse0x343a760() {
   return (neuron0x3429110()*-0.00353372);
}

double NNfunction_uLg::synapse0x343a7a0() {
   return (neuron0x3429450()*0.0955038);
}

double NNfunction_uLg::synapse0x343a7e0() {
   return (neuron0x3429790()*-1.76541);
}

double NNfunction_uLg::synapse0x343a820() {
   return (neuron0x3429ad0()*0.0228885);
}

double NNfunction_uLg::synapse0x343a860() {
   return (neuron0x3429e10()*-0.0127153);
}

double NNfunction_uLg::synapse0x343a8a0() {
   return (neuron0x342a150()*0.00783111);
}

double NNfunction_uLg::synapse0x343a8e0() {
   return (neuron0x342a490()*0.00219943);
}

double NNfunction_uLg::synapse0x343a920() {
   return (neuron0x342a7d0()*-0.010148);
}

double NNfunction_uLg::synapse0x343a960() {
   return (neuron0x342ab10()*0.00703682);
}

double NNfunction_uLg::synapse0x343a9a0() {
   return (neuron0x342ae50()*-0.0124257);
}

double NNfunction_uLg::synapse0x343a9e0() {
   return (neuron0x342b190()*-0.0874855);
}

double NNfunction_uLg::synapse0x343aa20() {
   return (neuron0x342b4d0()*0.0174151);
}

double NNfunction_uLg::synapse0x343aa60() {
   return (neuron0x342b810()*-0.00517821);
}

double NNfunction_uLg::synapse0x343aaa0() {
   return (neuron0x342bb50()*0.00643478);
}

double NNfunction_uLg::synapse0x343aae0() {
   return (neuron0x342be90()*0.00183701);
}

double NNfunction_uLg::synapse0x343a570() {
   return (neuron0x342c1d0()*-0.0384434);
}

double NNfunction_uLg::synapse0x343a5b0() {
   return (neuron0x342c730()*0.0149213);
}

double NNfunction_uLg::synapse0x343ac30() {
   return (neuron0x342c950()*-0.00187448);
}

double NNfunction_uLg::synapse0x343ac70() {
   return (neuron0x342cc90()*-0.0113523);
}

double NNfunction_uLg::synapse0x343acb0() {
   return (neuron0x342cfd0()*0.00338262);
}

double NNfunction_uLg::synapse0x343acf0() {
   return (neuron0x342d310()*0.000996648);
}

double NNfunction_uLg::synapse0x343ad30() {
   return (neuron0x342d650()*0.00511763);
}

double NNfunction_uLg::synapse0x343ad70() {
   return (neuron0x342d990()*-0.0091703);
}

double NNfunction_uLg::synapse0x343b0f0() {
   return (neuron0x3428dd0()*-0.0126634);
}

double NNfunction_uLg::synapse0x343b130() {
   return (neuron0x3429110()*0.0247637);
}

double NNfunction_uLg::synapse0x343b170() {
   return (neuron0x3429450()*-0.00404856);
}

double NNfunction_uLg::synapse0x343b1b0() {
   return (neuron0x3429790()*-2.41655);
}

double NNfunction_uLg::synapse0x343b1f0() {
   return (neuron0x3429ad0()*0.00385877);
}

double NNfunction_uLg::synapse0x343b230() {
   return (neuron0x3429e10()*0.0030149);
}

double NNfunction_uLg::synapse0x343b270() {
   return (neuron0x342a150()*0.00919333);
}

double NNfunction_uLg::synapse0x343b2b0() {
   return (neuron0x342a490()*0.0140427);
}

double NNfunction_uLg::synapse0x343b2f0() {
   return (neuron0x342a7d0()*-0.0189629);
}

double NNfunction_uLg::synapse0x343b330() {
   return (neuron0x342ab10()*-0.0332293);
}

double NNfunction_uLg::synapse0x343b370() {
   return (neuron0x342ae50()*-0.0178543);
}

double NNfunction_uLg::synapse0x343b3b0() {
   return (neuron0x342b190()*-1.66226);
}

double NNfunction_uLg::synapse0x343b3f0() {
   return (neuron0x342b4d0()*0.11569);
}

double NNfunction_uLg::synapse0x343b430() {
   return (neuron0x342b810()*0.00756751);
}

double NNfunction_uLg::synapse0x343b470() {
   return (neuron0x342bb50()*0.0180258);
}

double NNfunction_uLg::synapse0x343b4b0() {
   return (neuron0x342be90()*0.0638381);
}

double NNfunction_uLg::synapse0x343af40() {
   return (neuron0x342c1d0()*0.0295208);
}

double NNfunction_uLg::synapse0x343af80() {
   return (neuron0x342c730()*0.0744492);
}

double NNfunction_uLg::synapse0x343b600() {
   return (neuron0x342c950()*0.0676976);
}

double NNfunction_uLg::synapse0x343b640() {
   return (neuron0x342cc90()*0.0208999);
}

double NNfunction_uLg::synapse0x343b680() {
   return (neuron0x342cfd0()*0.0154469);
}

double NNfunction_uLg::synapse0x343b6c0() {
   return (neuron0x342d310()*0.0177516);
}

double NNfunction_uLg::synapse0x343b700() {
   return (neuron0x342d650()*0.0123346);
}

double NNfunction_uLg::synapse0x343b740() {
   return (neuron0x342d990()*0.0123584);
}

double NNfunction_uLg::synapse0x343bac0() {
   return (neuron0x3428dd0()*0.133527);
}

double NNfunction_uLg::synapse0x343bb00() {
   return (neuron0x3429110()*-0.00482339);
}

double NNfunction_uLg::synapse0x343bb40() {
   return (neuron0x3429450()*0.174597);
}

double NNfunction_uLg::synapse0x343bb80() {
   return (neuron0x3429790()*-0.332143);
}

double NNfunction_uLg::synapse0x343bbc0() {
   return (neuron0x3429ad0()*0.154003);
}

double NNfunction_uLg::synapse0x343bc00() {
   return (neuron0x3429e10()*0.196076);
}

double NNfunction_uLg::synapse0x343bc40() {
   return (neuron0x342a150()*0.0444909);
}

double NNfunction_uLg::synapse0x343bc80() {
   return (neuron0x342a490()*-0.721736);
}

double NNfunction_uLg::synapse0x343bcc0() {
   return (neuron0x342a7d0()*-0.138437);
}

double NNfunction_uLg::synapse0x343bd00() {
   return (neuron0x342ab10()*0.671194);
}

double NNfunction_uLg::synapse0x343bd40() {
   return (neuron0x342ae50()*0.213797);
}

double NNfunction_uLg::synapse0x343bd80() {
   return (neuron0x342b190()*-0.795366);
}

double NNfunction_uLg::synapse0x343bdc0() {
   return (neuron0x342b4d0()*-0.0632687);
}

double NNfunction_uLg::synapse0x343be00() {
   return (neuron0x342b810()*0.00225043);
}

double NNfunction_uLg::synapse0x343be40() {
   return (neuron0x342bb50()*0.106521);
}

double NNfunction_uLg::synapse0x343be80() {
   return (neuron0x342be90()*0.354132);
}

double NNfunction_uLg::synapse0x343b910() {
   return (neuron0x342c1d0()*0.313451);
}

double NNfunction_uLg::synapse0x343b950() {
   return (neuron0x342c730()*0.114781);
}

double NNfunction_uLg::synapse0x343bfd0() {
   return (neuron0x342c950()*0.0554218);
}

double NNfunction_uLg::synapse0x343c010() {
   return (neuron0x342cc90()*-0.495492);
}

double NNfunction_uLg::synapse0x343c050() {
   return (neuron0x342cfd0()*-0.145347);
}

double NNfunction_uLg::synapse0x343c090() {
   return (neuron0x342d310()*0.112933);
}

double NNfunction_uLg::synapse0x343c0d0() {
   return (neuron0x342d650()*-0.0163504);
}

double NNfunction_uLg::synapse0x343c110() {
   return (neuron0x342d990()*0.224637);
}

double NNfunction_uLg::synapse0x343c490() {
   return (neuron0x3428dd0()*0.038253);
}

double NNfunction_uLg::synapse0x343c4d0() {
   return (neuron0x3429110()*-0.029122);
}

double NNfunction_uLg::synapse0x343c510() {
   return (neuron0x3429450()*0.0156467);
}

double NNfunction_uLg::synapse0x343c550() {
   return (neuron0x3429790()*-1.56848);
}

double NNfunction_uLg::synapse0x343c590() {
   return (neuron0x3429ad0()*-0.051498);
}

double NNfunction_uLg::synapse0x343c5d0() {
   return (neuron0x3429e10()*-0.127458);
}

double NNfunction_uLg::synapse0x343c610() {
   return (neuron0x342a150()*-0.0191712);
}

double NNfunction_uLg::synapse0x343c650() {
   return (neuron0x342a490()*0.0338293);
}

double NNfunction_uLg::synapse0x343c690() {
   return (neuron0x342a7d0()*0.0316981);
}

double NNfunction_uLg::synapse0x3434850() {
   return (neuron0x342ab10()*0.214771);
}

double NNfunction_uLg::synapse0x3434890() {
   return (neuron0x342ae50()*0.100795);
}

double NNfunction_uLg::synapse0x34348d0() {
   return (neuron0x342b190()*1.07618);
}

double NNfunction_uLg::synapse0x3434910() {
   return (neuron0x342b4d0()*-0.383372);
}

double NNfunction_uLg::synapse0x3434950() {
   return (neuron0x342b810()*-0.226043);
}

double NNfunction_uLg::synapse0x3434990() {
   return (neuron0x342bb50()*-0.118102);
}

double NNfunction_uLg::synapse0x34349d0() {
   return (neuron0x342be90()*-0.254641);
}

double NNfunction_uLg::synapse0x343c2e0() {
   return (neuron0x342c1d0()*-0.232437);
}

double NNfunction_uLg::synapse0x343c320() {
   return (neuron0x342c730()*-0.243714);
}

double NNfunction_uLg::synapse0x3434b20() {
   return (neuron0x342c950()*-0.206705);
}

double NNfunction_uLg::synapse0x3434b60() {
   return (neuron0x342cc90()*-0.130036);
}

double NNfunction_uLg::synapse0x3434ba0() {
   return (neuron0x342cfd0()*0.0552595);
}

double NNfunction_uLg::synapse0x3434be0() {
   return (neuron0x342d310()*-0.12555);
}

double NNfunction_uLg::synapse0x3434c20() {
   return (neuron0x342d650()*-0.159843);
}

double NNfunction_uLg::synapse0x3434c60() {
   return (neuron0x342d990()*-0.0576224);
}

double NNfunction_uLg::synapse0x3434fe0() {
   return (neuron0x3428dd0()*-0.0106533);
}

double NNfunction_uLg::synapse0x3435020() {
   return (neuron0x3429110()*-0.00644178);
}

double NNfunction_uLg::synapse0x3435060() {
   return (neuron0x3429450()*-0.0142133);
}

double NNfunction_uLg::synapse0x34350a0() {
   return (neuron0x3429790()*-0.910954);
}

double NNfunction_uLg::synapse0x34350e0() {
   return (neuron0x3429ad0()*0.0072128);
}

double NNfunction_uLg::synapse0x3435120() {
   return (neuron0x3429e10()*0.0136511);
}

double NNfunction_uLg::synapse0x3435160() {
   return (neuron0x342a150()*0.0259753);
}

double NNfunction_uLg::synapse0x34351a0() {
   return (neuron0x342a490()*-0.0176655);
}

double NNfunction_uLg::synapse0x34351e0() {
   return (neuron0x342a7d0()*0.0118428);
}

double NNfunction_uLg::synapse0x3435220() {
   return (neuron0x342ab10()*0.0272671);
}

double NNfunction_uLg::synapse0x3435260() {
   return (neuron0x342ae50()*-0.00589437);
}

double NNfunction_uLg::synapse0x34352a0() {
   return (neuron0x342b190()*-0.903883);
}

double NNfunction_uLg::synapse0x34352e0() {
   return (neuron0x342b4d0()*-0.0366496);
}

double NNfunction_uLg::synapse0x3435320() {
   return (neuron0x342b810()*-0.0238098);
}

double NNfunction_uLg::synapse0x3435360() {
   return (neuron0x342bb50()*0.0395757);
}

double NNfunction_uLg::synapse0x34353a0() {
   return (neuron0x342be90()*0.012418);
}

double NNfunction_uLg::synapse0x3434e30() {
   return (neuron0x342c1d0()*-0.0048446);
}

double NNfunction_uLg::synapse0x3434e70() {
   return (neuron0x342c730()*-0.0284945);
}

double NNfunction_uLg::synapse0x34354f0() {
   return (neuron0x342c950()*0.00590637);
}

double NNfunction_uLg::synapse0x3435530() {
   return (neuron0x342cc90()*-0.0110477);
}

double NNfunction_uLg::synapse0x3435570() {
   return (neuron0x342cfd0()*-0.0191105);
}

double NNfunction_uLg::synapse0x34355b0() {
   return (neuron0x342d310()*0.00806665);
}

double NNfunction_uLg::synapse0x34355f0() {
   return (neuron0x342d650()*-0.0019816);
}

double NNfunction_uLg::synapse0x3435630() {
   return (neuron0x342d990()*0.000717181);
}

double NNfunction_uLg::synapse0x3435800() {
   return (neuron0x3428dd0()*0.455952);
}

double NNfunction_uLg::synapse0x343e890() {
   return (neuron0x3429110()*-0.289552);
}

double NNfunction_uLg::synapse0x343e8d0() {
   return (neuron0x3429450()*0.409233);
}

double NNfunction_uLg::synapse0x343e910() {
   return (neuron0x3429790()*-0.154202);
}

double NNfunction_uLg::synapse0x343e950() {
   return (neuron0x3429ad0()*0.43777);
}

double NNfunction_uLg::synapse0x343e990() {
   return (neuron0x3429e10()*0.00814338);
}

double NNfunction_uLg::synapse0x343e9d0() {
   return (neuron0x342a150()*0.18185);
}

double NNfunction_uLg::synapse0x343ea10() {
   return (neuron0x342a490()*-0.0187624);
}

double NNfunction_uLg::synapse0x343ea50() {
   return (neuron0x342a7d0()*-0.0015578);
}

double NNfunction_uLg::synapse0x343ea90() {
   return (neuron0x342ab10()*-0.0753378);
}

double NNfunction_uLg::synapse0x343ead0() {
   return (neuron0x342ae50()*0.0897177);
}

double NNfunction_uLg::synapse0x343eb10() {
   return (neuron0x342b190()*0.202482);
}

double NNfunction_uLg::synapse0x343eb50() {
   return (neuron0x342b4d0()*0.204232);
}

double NNfunction_uLg::synapse0x343eb90() {
   return (neuron0x342b810()*-0.17219);
}

double NNfunction_uLg::synapse0x343ebd0() {
   return (neuron0x342bb50()*-0.2491);
}

double NNfunction_uLg::synapse0x343ec10() {
   return (neuron0x342be90()*0.394733);
}

double NNfunction_uLg::synapse0x343e6e0() {
   return (neuron0x342c1d0()*0.264279);
}

double NNfunction_uLg::synapse0x343e720() {
   return (neuron0x342c730()*0.400835);
}

double NNfunction_uLg::synapse0x343ed60() {
   return (neuron0x342c950()*0.222607);
}

double NNfunction_uLg::synapse0x343eda0() {
   return (neuron0x342cc90()*0.143225);
}

double NNfunction_uLg::synapse0x343ede0() {
   return (neuron0x342cfd0()*-0.11011);
}

double NNfunction_uLg::synapse0x343ee20() {
   return (neuron0x342d310()*-0.170746);
}

double NNfunction_uLg::synapse0x343ee60() {
   return (neuron0x342d650()*0.237797);
}

double NNfunction_uLg::synapse0x343eea0() {
   return (neuron0x342d990()*0.13925);
}

double NNfunction_uLg::synapse0x343f220() {
   return (neuron0x3428dd0()*0.00199608);
}

double NNfunction_uLg::synapse0x343f260() {
   return (neuron0x3429110()*-0.0013117);
}

double NNfunction_uLg::synapse0x343f2a0() {
   return (neuron0x3429450()*-0.0511208);
}

double NNfunction_uLg::synapse0x343f2e0() {
   return (neuron0x3429790()*0.428244);
}

double NNfunction_uLg::synapse0x343f320() {
   return (neuron0x3429ad0()*0.00789428);
}

double NNfunction_uLg::synapse0x343f360() {
   return (neuron0x3429e10()*0.00564129);
}

double NNfunction_uLg::synapse0x343f3a0() {
   return (neuron0x342a150()*0.0108307);
}

double NNfunction_uLg::synapse0x343f3e0() {
   return (neuron0x342a490()*0.00264651);
}

double NNfunction_uLg::synapse0x343f420() {
   return (neuron0x342a7d0()*-0.00617462);
}

double NNfunction_uLg::synapse0x343f460() {
   return (neuron0x342ab10()*0.00649158);
}

double NNfunction_uLg::synapse0x343f4a0() {
   return (neuron0x342ae50()*-0.0112521);
}

double NNfunction_uLg::synapse0x343f4e0() {
   return (neuron0x342b190()*-0.672975);
}

double NNfunction_uLg::synapse0x343f520() {
   return (neuron0x342b4d0()*0.0266506);
}

double NNfunction_uLg::synapse0x343f560() {
   return (neuron0x342b810()*-0.00357976);
}

double NNfunction_uLg::synapse0x343f5a0() {
   return (neuron0x342bb50()*0.0171872);
}

double NNfunction_uLg::synapse0x343f5e0() {
   return (neuron0x342be90()*0.0137579);
}

double NNfunction_uLg::synapse0x343f070() {
   return (neuron0x342c1d0()*0.0152961);
}

double NNfunction_uLg::synapse0x343f0b0() {
   return (neuron0x342c730()*0.0200374);
}

double NNfunction_uLg::synapse0x343f730() {
   return (neuron0x342c950()*0.0332236);
}

double NNfunction_uLg::synapse0x343f770() {
   return (neuron0x342cc90()*-0.00979389);
}

double NNfunction_uLg::synapse0x343f7b0() {
   return (neuron0x342cfd0()*0.0116547);
}

double NNfunction_uLg::synapse0x343f7f0() {
   return (neuron0x342d310()*-0.00240994);
}

double NNfunction_uLg::synapse0x343f830() {
   return (neuron0x342d650()*0.00268114);
}

double NNfunction_uLg::synapse0x343f870() {
   return (neuron0x342d990()*-0.000272985);
}

double NNfunction_uLg::synapse0x343fbf0() {
   return (neuron0x3428dd0()*-0.414364);
}

double NNfunction_uLg::synapse0x343fc30() {
   return (neuron0x3429110()*-0.56888);
}

double NNfunction_uLg::synapse0x343fc70() {
   return (neuron0x3429450()*-0.304414);
}

double NNfunction_uLg::synapse0x343fcb0() {
   return (neuron0x3429790()*-0.369447);
}

double NNfunction_uLg::synapse0x343fcf0() {
   return (neuron0x3429ad0()*-0.0599502);
}

double NNfunction_uLg::synapse0x343fd30() {
   return (neuron0x3429e10()*0.393817);
}

double NNfunction_uLg::synapse0x343fd70() {
   return (neuron0x342a150()*0.0665645);
}

double NNfunction_uLg::synapse0x343fdb0() {
   return (neuron0x342a490()*0.157491);
}

double NNfunction_uLg::synapse0x343fdf0() {
   return (neuron0x342a7d0()*0.237227);
}

double NNfunction_uLg::synapse0x343fe30() {
   return (neuron0x342ab10()*0.0229769);
}

double NNfunction_uLg::synapse0x343fe70() {
   return (neuron0x342ae50()*-0.328841);
}

double NNfunction_uLg::synapse0x343feb0() {
   return (neuron0x342b190()*0.0727792);
}

double NNfunction_uLg::synapse0x343fef0() {
   return (neuron0x342b4d0()*-0.0549066);
}

double NNfunction_uLg::synapse0x343ff30() {
   return (neuron0x342b810()*0.238536);
}

double NNfunction_uLg::synapse0x343ff70() {
   return (neuron0x342bb50()*-0.155001);
}

double NNfunction_uLg::synapse0x343ffb0() {
   return (neuron0x342be90()*0.337634);
}

double NNfunction_uLg::synapse0x343fa40() {
   return (neuron0x342c1d0()*0.492617);
}

double NNfunction_uLg::synapse0x343fa80() {
   return (neuron0x342c730()*-0.00612667);
}

double NNfunction_uLg::synapse0x3440100() {
   return (neuron0x342c950()*0.0597564);
}

double NNfunction_uLg::synapse0x3440140() {
   return (neuron0x342cc90()*-0.146309);
}

double NNfunction_uLg::synapse0x3440180() {
   return (neuron0x342cfd0()*0.110004);
}

double NNfunction_uLg::synapse0x34401c0() {
   return (neuron0x342d310()*0.30458);
}

double NNfunction_uLg::synapse0x3440200() {
   return (neuron0x342d650()*-0.166034);
}

double NNfunction_uLg::synapse0x3440240() {
   return (neuron0x342d990()*0.286317);
}

double NNfunction_uLg::synapse0x34405c0() {
   return (neuron0x3428dd0()*-0.0176612);
}

double NNfunction_uLg::synapse0x3440600() {
   return (neuron0x3429110()*0.00678957);
}

double NNfunction_uLg::synapse0x3440640() {
   return (neuron0x3429450()*0.0049137);
}

double NNfunction_uLg::synapse0x3440680() {
   return (neuron0x3429790()*0.389644);
}

double NNfunction_uLg::synapse0x34406c0() {
   return (neuron0x3429ad0()*-0.0104083);
}

double NNfunction_uLg::synapse0x3440700() {
   return (neuron0x3429e10()*0.0126712);
}

double NNfunction_uLg::synapse0x3440740() {
   return (neuron0x342a150()*0.00579175);
}

double NNfunction_uLg::synapse0x3440780() {
   return (neuron0x342a490()*-0.00814739);
}

double NNfunction_uLg::synapse0x34407c0() {
   return (neuron0x342a7d0()*0.0060314);
}

double NNfunction_uLg::synapse0x3440800() {
   return (neuron0x342ab10()*0.00764735);
}

double NNfunction_uLg::synapse0x3440840() {
   return (neuron0x342ae50()*0.012002);
}

double NNfunction_uLg::synapse0x3440880() {
   return (neuron0x342b190()*0.673849);
}

double NNfunction_uLg::synapse0x34408c0() {
   return (neuron0x342b4d0()*-0.0218078);
}

double NNfunction_uLg::synapse0x3440900() {
   return (neuron0x342b810()*0.00729256);
}

double NNfunction_uLg::synapse0x3440940() {
   return (neuron0x342bb50()*0.0130957);
}

double NNfunction_uLg::synapse0x3440980() {
   return (neuron0x342be90()*-0.000250346);
}

double NNfunction_uLg::synapse0x3440410() {
   return (neuron0x342c1d0()*0.0173504);
}

double NNfunction_uLg::synapse0x3440450() {
   return (neuron0x342c730()*-0.0256913);
}

double NNfunction_uLg::synapse0x3440ad0() {
   return (neuron0x342c950()*-0.0129113);
}

double NNfunction_uLg::synapse0x3440b10() {
   return (neuron0x342cc90()*0.00517026);
}

double NNfunction_uLg::synapse0x3440b50() {
   return (neuron0x342cfd0()*-0.00817413);
}

double NNfunction_uLg::synapse0x3440b90() {
   return (neuron0x342d310()*0.00854791);
}

double NNfunction_uLg::synapse0x3440bd0() {
   return (neuron0x342d650()*-0.00401984);
}

double NNfunction_uLg::synapse0x3440c10() {
   return (neuron0x342d990()*0.000399011);
}

double NNfunction_uLg::synapse0x3440f90() {
   return (neuron0x3428dd0()*-0.00814898);
}

double NNfunction_uLg::synapse0x3440fd0() {
   return (neuron0x3429110()*0.00484376);
}

double NNfunction_uLg::synapse0x3441010() {
   return (neuron0x3429450()*-0.000822275);
}

double NNfunction_uLg::synapse0x3441050() {
   return (neuron0x3429790()*4.19377);
}

double NNfunction_uLg::synapse0x3441090() {
   return (neuron0x3429ad0()*-0.00973134);
}

double NNfunction_uLg::synapse0x34410d0() {
   return (neuron0x3429e10()*-0.0017301);
}

double NNfunction_uLg::synapse0x3441110() {
   return (neuron0x342a150()*-0.00875509);
}

double NNfunction_uLg::synapse0x3441150() {
   return (neuron0x342a490()*-0.000244716);
}

double NNfunction_uLg::synapse0x3441190() {
   return (neuron0x342a7d0()*0.00763671);
}

double NNfunction_uLg::synapse0x34411d0() {
   return (neuron0x342ab10()*0.00405341);
}

double NNfunction_uLg::synapse0x3441210() {
   return (neuron0x342ae50()*0.00844629);
}

double NNfunction_uLg::synapse0x3441250() {
   return (neuron0x342b190()*-0.5367);
}

double NNfunction_uLg::synapse0x3441290() {
   return (neuron0x342b4d0()*-0.0179652);
}

double NNfunction_uLg::synapse0x34412d0() {
   return (neuron0x342b810()*0.000601678);
}

double NNfunction_uLg::synapse0x3441310() {
   return (neuron0x342bb50()*-0.00797813);
}

double NNfunction_uLg::synapse0x3441350() {
   return (neuron0x342be90()*-0.00875426);
}

double NNfunction_uLg::synapse0x3440de0() {
   return (neuron0x342c1d0()*-0.00255215);
}

double NNfunction_uLg::synapse0x3440e20() {
   return (neuron0x342c730()*-0.0211459);
}

double NNfunction_uLg::synapse0x34414a0() {
   return (neuron0x342c950()*-0.00897754);
}

double NNfunction_uLg::synapse0x34414e0() {
   return (neuron0x342cc90()*0.00286217);
}

double NNfunction_uLg::synapse0x3441520() {
   return (neuron0x342cfd0()*-0.00108658);
}

double NNfunction_uLg::synapse0x3441560() {
   return (neuron0x342d310()*0.00503029);
}

double NNfunction_uLg::synapse0x34415a0() {
   return (neuron0x342d650()*5.63786e-05);
}

double NNfunction_uLg::synapse0x34415e0() {
   return (neuron0x342d990()*-0.00254503);
}

double NNfunction_uLg::synapse0x3441960() {
   return (neuron0x3428dd0()*-0.0153487);
}

double NNfunction_uLg::synapse0x34419a0() {
   return (neuron0x3429110()*-0.0209977);
}

double NNfunction_uLg::synapse0x34419e0() {
   return (neuron0x3429450()*-0.186047);
}

double NNfunction_uLg::synapse0x3441a20() {
   return (neuron0x3429790()*-0.0172654);
}

double NNfunction_uLg::synapse0x3441a60() {
   return (neuron0x3429ad0()*-0.00625642);
}

double NNfunction_uLg::synapse0x3441aa0() {
   return (neuron0x3429e10()*0.00402099);
}

double NNfunction_uLg::synapse0x3441ae0() {
   return (neuron0x342a150()*-0.0297766);
}

double NNfunction_uLg::synapse0x3441b20() {
   return (neuron0x342a490()*-0.0605089);
}

double NNfunction_uLg::synapse0x3441b60() {
   return (neuron0x342a7d0()*0.0128908);
}

double NNfunction_uLg::synapse0x3441ba0() {
   return (neuron0x342ab10()*-0.0127758);
}

double NNfunction_uLg::synapse0x3441be0() {
   return (neuron0x342ae50()*0.00854132);
}

double NNfunction_uLg::synapse0x3441c20() {
   return (neuron0x342b190()*-0.579436);
}

double NNfunction_uLg::synapse0x3441c60() {
   return (neuron0x342b4d0()*-0.0508997);
}

double NNfunction_uLg::synapse0x3441ca0() {
   return (neuron0x342b810()*-0.0317304);
}

double NNfunction_uLg::synapse0x3441ce0() {
   return (neuron0x342bb50()*0.391057);
}

double NNfunction_uLg::synapse0x3441d20() {
   return (neuron0x342be90()*-0.139065);
}

double NNfunction_uLg::synapse0x34417b0() {
   return (neuron0x342c1d0()*-0.0368821);
}

double NNfunction_uLg::synapse0x34417f0() {
   return (neuron0x342c730()*-0.0303056);
}

double NNfunction_uLg::synapse0x3441e70() {
   return (neuron0x342c950()*-0.0290038);
}

double NNfunction_uLg::synapse0x3441eb0() {
   return (neuron0x342cc90()*0.0173755);
}

double NNfunction_uLg::synapse0x3441ef0() {
   return (neuron0x342cfd0()*-0.017974);
}

double NNfunction_uLg::synapse0x3441f30() {
   return (neuron0x342d310()*0.023316);
}

double NNfunction_uLg::synapse0x3441f70() {
   return (neuron0x342d650()*-0.00280048);
}

double NNfunction_uLg::synapse0x3441fb0() {
   return (neuron0x342d990()*-0.010186);
}

double NNfunction_uLg::synapse0x3442330() {
   return (neuron0x3428dd0()*-0.00751271);
}

double NNfunction_uLg::synapse0x3442370() {
   return (neuron0x3429110()*-0.0291164);
}

double NNfunction_uLg::synapse0x34423b0() {
   return (neuron0x3429450()*-0.739727);
}

double NNfunction_uLg::synapse0x34423f0() {
   return (neuron0x3429790()*-0.0526741);
}

double NNfunction_uLg::synapse0x3442430() {
   return (neuron0x3429ad0()*-0.0209563);
}

double NNfunction_uLg::synapse0x3442470() {
   return (neuron0x3429e10()*-0.0289254);
}

double NNfunction_uLg::synapse0x34424b0() {
   return (neuron0x342a150()*-0.00813251);
}

double NNfunction_uLg::synapse0x34424f0() {
   return (neuron0x342a490()*-0.0357364);
}

double NNfunction_uLg::synapse0x3442530() {
   return (neuron0x342a7d0()*0.0145602);
}

double NNfunction_uLg::synapse0x3442570() {
   return (neuron0x342ab10()*0.0128345);
}

double NNfunction_uLg::synapse0x34425b0() {
   return (neuron0x342ae50()*-0.000623949);
}

double NNfunction_uLg::synapse0x34425f0() {
   return (neuron0x342b190()*0.901772);
}

double NNfunction_uLg::synapse0x3442630() {
   return (neuron0x342b4d0()*0.0177729);
}

double NNfunction_uLg::synapse0x3442670() {
   return (neuron0x342b810()*-0.0600882);
}

double NNfunction_uLg::synapse0x34426b0() {
   return (neuron0x342bb50()*-0.0055157);
}

double NNfunction_uLg::synapse0x34426f0() {
   return (neuron0x342be90()*-0.021307);
}

double NNfunction_uLg::synapse0x3442180() {
   return (neuron0x342c1d0()*-0.0847523);
}

double NNfunction_uLg::synapse0x34421c0() {
   return (neuron0x342c730()*-0.00123799);
}

double NNfunction_uLg::synapse0x3442840() {
   return (neuron0x342c950()*0.0305263);
}

double NNfunction_uLg::synapse0x3442880() {
   return (neuron0x342cc90()*0.00440021);
}

double NNfunction_uLg::synapse0x34428c0() {
   return (neuron0x342cfd0()*-0.0119842);
}

double NNfunction_uLg::synapse0x3442900() {
   return (neuron0x342d310()*-0.00332138);
}

double NNfunction_uLg::synapse0x3442940() {
   return (neuron0x342d650()*-0.0133077);
}

double NNfunction_uLg::synapse0x3442980() {
   return (neuron0x342d990()*-0.0111487);
}

double NNfunction_uLg::synapse0x3442d00() {
   return (neuron0x3428dd0()*-0.0786864);
}

double NNfunction_uLg::synapse0x3442d40() {
   return (neuron0x3429110()*-0.145755);
}

double NNfunction_uLg::synapse0x3442d80() {
   return (neuron0x3429450()*-0.223329);
}

double NNfunction_uLg::synapse0x3442dc0() {
   return (neuron0x3429790()*-0.112204);
}

double NNfunction_uLg::synapse0x3442e00() {
   return (neuron0x3429ad0()*-0.190268);
}

double NNfunction_uLg::synapse0x3442e40() {
   return (neuron0x3429e10()*-0.161118);
}

double NNfunction_uLg::synapse0x3442e80() {
   return (neuron0x342a150()*-0.197419);
}

double NNfunction_uLg::synapse0x3442ec0() {
   return (neuron0x342a490()*0.232982);
}

double NNfunction_uLg::synapse0x3442f00() {
   return (neuron0x342a7d0()*-0.0115633);
}

double NNfunction_uLg::synapse0x3442f40() {
   return (neuron0x342ab10()*0.0235424);
}

double NNfunction_uLg::synapse0x3442f80() {
   return (neuron0x342ae50()*0.0720255);
}

double NNfunction_uLg::synapse0x3442fc0() {
   return (neuron0x342b190()*-0.499591);
}

double NNfunction_uLg::synapse0x3443000() {
   return (neuron0x342b4d0()*-0.142025);
}

double NNfunction_uLg::synapse0x3443040() {
   return (neuron0x342b810()*-0.177976);
}

double NNfunction_uLg::synapse0x3443080() {
   return (neuron0x342bb50()*-0.371132);
}

double NNfunction_uLg::synapse0x34430c0() {
   return (neuron0x342be90()*-0.298879);
}

double NNfunction_uLg::synapse0x3442b50() {
   return (neuron0x342c1d0()*0.213603);
}

double NNfunction_uLg::synapse0x3442b90() {
   return (neuron0x342c730()*0.421724);
}

double NNfunction_uLg::synapse0x3443210() {
   return (neuron0x342c950()*-0.131076);
}

double NNfunction_uLg::synapse0x3443250() {
   return (neuron0x342cc90()*-0.215701);
}

double NNfunction_uLg::synapse0x3443290() {
   return (neuron0x342cfd0()*-0.0514424);
}

double NNfunction_uLg::synapse0x34432d0() {
   return (neuron0x342d310()*0.0439722);
}

double NNfunction_uLg::synapse0x3443310() {
   return (neuron0x342d650()*0.0741108);
}

double NNfunction_uLg::synapse0x3443350() {
   return (neuron0x342d990()*0.0284004);
}

double NNfunction_uLg::synapse0x34436d0() {
   return (neuron0x3428dd0()*-0.380452);
}

double NNfunction_uLg::synapse0x3437ca0() {
   return (neuron0x3429110()*0.348717);
}

double NNfunction_uLg::synapse0x3437ce0() {
   return (neuron0x3429450()*-0.272968);
}

double NNfunction_uLg::synapse0x3437d20() {
   return (neuron0x3429790()*-0.455248);
}

double NNfunction_uLg::synapse0x3437f70() {
   return (neuron0x3429ad0()*-0.779311);
}

double NNfunction_uLg::synapse0x3437fb0() {
   return (neuron0x3429e10()*-0.227119);
}

double NNfunction_uLg::synapse0x3437ff0() {
   return (neuron0x342a150()*-0.300816);
}

double NNfunction_uLg::synapse0x3438240() {
   return (neuron0x342a490()*0.155505);
}

double NNfunction_uLg::synapse0x3438280() {
   return (neuron0x342a7d0()*-0.229287);
}

double NNfunction_uLg::synapse0x34384d0() {
   return (neuron0x342ab10()*-0.152102);
}

double NNfunction_uLg::synapse0x3438510() {
   return (neuron0x342ae50()*-0.491355);
}

double NNfunction_uLg::synapse0x3438550() {
   return (neuron0x342b190()*-0.335477);
}

double NNfunction_uLg::synapse0x34387a0() {
   return (neuron0x342b4d0()*-0.608801);
}

double NNfunction_uLg::synapse0x34387e0() {
   return (neuron0x342b810()*-0.0787507);
}

double NNfunction_uLg::synapse0x3438a30() {
   return (neuron0x342bb50()*0.0905238);
}

double NNfunction_uLg::synapse0x3438a70() {
   return (neuron0x342be90()*0.385095);
}

double NNfunction_uLg::synapse0x3443520() {
   return (neuron0x342c1d0()*0.57811);
}

double NNfunction_uLg::synapse0x3443560() {
   return (neuron0x342c730()*0.0330076);
}

double NNfunction_uLg::synapse0x3438bc0() {
   return (neuron0x342c950()*-0.115233);
}

double NNfunction_uLg::synapse0x34390d0() {
   return (neuron0x342cc90()*0.316124);
}

double NNfunction_uLg::synapse0x3439110() {
   return (neuron0x342cfd0()*0.168861);
}

double NNfunction_uLg::synapse0x3439150() {
   return (neuron0x342d310()*0.0793427);
}

double NNfunction_uLg::synapse0x34393a0() {
   return (neuron0x342d650()*-0.152809);
}

double NNfunction_uLg::synapse0x34393e0() {
   return (neuron0x342d990()*0.177808);
}

double NNfunction_uLg::synapse0x3438c90() {
   return (neuron0x3428dd0()*-0.000558061);
}

double NNfunction_uLg::synapse0x3438cd0() {
   return (neuron0x3429110()*-0.0157614);
}

double NNfunction_uLg::synapse0x3438d10() {
   return (neuron0x3429450()*-0.125178);
}

double NNfunction_uLg::synapse0x3438d50() {
   return (neuron0x3429790()*-0.294638);
}

double NNfunction_uLg::synapse0x34396d0() {
   return (neuron0x3429ad0()*-0.0596612);
}

double NNfunction_uLg::synapse0x3445a20() {
   return (neuron0x3429e10()*-0.0261966);
}

double NNfunction_uLg::synapse0x3445a60() {
   return (neuron0x342a150()*-0.00743115);
}

double NNfunction_uLg::synapse0x3445aa0() {
   return (neuron0x342a490()*-0.0280212);
}

double NNfunction_uLg::synapse0x3445ae0() {
   return (neuron0x342a7d0()*0.0181164);
}

double NNfunction_uLg::synapse0x3445b20() {
   return (neuron0x342ab10()*0.0110037);
}

double NNfunction_uLg::synapse0x3445b60() {
   return (neuron0x342ae50()*0.0186167);
}

double NNfunction_uLg::synapse0x3445ba0() {
   return (neuron0x342b190()*-0.240466);
}

double NNfunction_uLg::synapse0x3445be0() {
   return (neuron0x342b4d0()*-0.288941);
}

double NNfunction_uLg::synapse0x3445c20() {
   return (neuron0x342b810()*0.000518836);
}

double NNfunction_uLg::synapse0x3445c60() {
   return (neuron0x342bb50()*-0.133856);
}

double NNfunction_uLg::synapse0x3445ca0() {
   return (neuron0x342be90()*-0.00857725);
}

double NNfunction_uLg::synapse0x34395b0() {
   return (neuron0x342c1d0()*-0.0229246);
}

double NNfunction_uLg::synapse0x34395f0() {
   return (neuron0x342c730()*-0.0737045);
}

double NNfunction_uLg::synapse0x3445df0() {
   return (neuron0x342c950()*-0.0279252);
}

double NNfunction_uLg::synapse0x3445e30() {
   return (neuron0x342cc90()*-0.0126027);
}

double NNfunction_uLg::synapse0x3445e70() {
   return (neuron0x342cfd0()*-0.0121749);
}

double NNfunction_uLg::synapse0x3445eb0() {
   return (neuron0x342d310()*-0.0109085);
}

double NNfunction_uLg::synapse0x3445ef0() {
   return (neuron0x342d650()*-0.0132509);
}

double NNfunction_uLg::synapse0x3445f30() {
   return (neuron0x342d990()*-0.00188801);
}

double NNfunction_uLg::synapse0x34462b0() {
   return (neuron0x3428dd0()*0.179612);
}

double NNfunction_uLg::synapse0x34462f0() {
   return (neuron0x3429110()*-0.0565452);
}

double NNfunction_uLg::synapse0x3446330() {
   return (neuron0x3429450()*-0.199593);
}

double NNfunction_uLg::synapse0x3446370() {
   return (neuron0x3429790()*-0.208739);
}

double NNfunction_uLg::synapse0x34463b0() {
   return (neuron0x3429ad0()*0.067324);
}

double NNfunction_uLg::synapse0x34463f0() {
   return (neuron0x3429e10()*0.0734096);
}

double NNfunction_uLg::synapse0x3446430() {
   return (neuron0x342a150()*-0.00894267);
}

double NNfunction_uLg::synapse0x3446470() {
   return (neuron0x342a490()*-0.0654054);
}

double NNfunction_uLg::synapse0x34464b0() {
   return (neuron0x342a7d0()*-0.360167);
}

double NNfunction_uLg::synapse0x34464f0() {
   return (neuron0x342ab10()*-0.301688);
}

double NNfunction_uLg::synapse0x3446530() {
   return (neuron0x342ae50()*0.377401);
}

double NNfunction_uLg::synapse0x3446570() {
   return (neuron0x342b190()*1.57289);
}

double NNfunction_uLg::synapse0x34465b0() {
   return (neuron0x342b4d0()*0.401236);
}

double NNfunction_uLg::synapse0x34465f0() {
   return (neuron0x342b810()*-0.15809);
}

double NNfunction_uLg::synapse0x3446630() {
   return (neuron0x342bb50()*0.0945179);
}

double NNfunction_uLg::synapse0x3446670() {
   return (neuron0x342be90()*-0.0278227);
}

double NNfunction_uLg::synapse0x3446100() {
   return (neuron0x342c1d0()*0.189346);
}

double NNfunction_uLg::synapse0x3446140() {
   return (neuron0x342c730()*0.17489);
}

double NNfunction_uLg::synapse0x34467c0() {
   return (neuron0x342c950()*0.0506235);
}

double NNfunction_uLg::synapse0x3446800() {
   return (neuron0x342cc90()*0.172933);
}

double NNfunction_uLg::synapse0x3446840() {
   return (neuron0x342cfd0()*-0.246741);
}

double NNfunction_uLg::synapse0x3446880() {
   return (neuron0x342d310()*0.294574);
}

double NNfunction_uLg::synapse0x34468c0() {
   return (neuron0x342d650()*-0.156285);
}

double NNfunction_uLg::synapse0x3446900() {
   return (neuron0x342d990()*0.0460051);
}

double NNfunction_uLg::synapse0x3446c80() {
   return (neuron0x3428dd0()*-0.304093);
}

double NNfunction_uLg::synapse0x3446cc0() {
   return (neuron0x3429110()*-0.00918582);
}

double NNfunction_uLg::synapse0x3446d00() {
   return (neuron0x3429450()*0.0580082);
}

double NNfunction_uLg::synapse0x3446d40() {
   return (neuron0x3429790()*-0.377748);
}

double NNfunction_uLg::synapse0x3446d80() {
   return (neuron0x3429ad0()*-0.0983045);
}

double NNfunction_uLg::synapse0x3446dc0() {
   return (neuron0x3429e10()*0.11409);
}

double NNfunction_uLg::synapse0x3446e00() {
   return (neuron0x342a150()*0.133356);
}

double NNfunction_uLg::synapse0x3446e40() {
   return (neuron0x342a490()*-0.0266639);
}

double NNfunction_uLg::synapse0x3446e80() {
   return (neuron0x342a7d0()*0.0869563);
}

double NNfunction_uLg::synapse0x3446ec0() {
   return (neuron0x342ab10()*0.188563);
}

double NNfunction_uLg::synapse0x3446f00() {
   return (neuron0x342ae50()*0.101846);
}

double NNfunction_uLg::synapse0x3446f40() {
   return (neuron0x342b190()*-0.516469);
}

double NNfunction_uLg::synapse0x3446f80() {
   return (neuron0x342b4d0()*-0.0819512);
}

double NNfunction_uLg::synapse0x3446fc0() {
   return (neuron0x342b810()*0.0968647);
}

double NNfunction_uLg::synapse0x3447000() {
   return (neuron0x342bb50()*-0.0748195);
}

double NNfunction_uLg::synapse0x3447040() {
   return (neuron0x342be90()*-0.211426);
}

double NNfunction_uLg::synapse0x3446ad0() {
   return (neuron0x342c1d0()*0.0958441);
}

double NNfunction_uLg::synapse0x3446b10() {
   return (neuron0x342c730()*-0.356696);
}

double NNfunction_uLg::synapse0x3447190() {
   return (neuron0x342c950()*-0.0080703);
}

double NNfunction_uLg::synapse0x34471d0() {
   return (neuron0x342cc90()*0.197449);
}

double NNfunction_uLg::synapse0x3447210() {
   return (neuron0x342cfd0()*0.136052);
}

double NNfunction_uLg::synapse0x3447250() {
   return (neuron0x342d310()*0.0510657);
}

double NNfunction_uLg::synapse0x3447290() {
   return (neuron0x342d650()*0.101243);
}

double NNfunction_uLg::synapse0x34472d0() {
   return (neuron0x342d990()*0.113897);
}

double NNfunction_uLg::synapse0x3447650() {
   return (neuron0x3428dd0()*-0.0325059);
}

double NNfunction_uLg::synapse0x3447690() {
   return (neuron0x3429110()*0.292638);
}

double NNfunction_uLg::synapse0x34476d0() {
   return (neuron0x3429450()*0.0188806);
}

double NNfunction_uLg::synapse0x3447710() {
   return (neuron0x3429790()*-0.657542);
}

double NNfunction_uLg::synapse0x3447750() {
   return (neuron0x3429ad0()*-0.778677);
}

double NNfunction_uLg::synapse0x3447790() {
   return (neuron0x3429e10()*-0.242195);
}

double NNfunction_uLg::synapse0x34477d0() {
   return (neuron0x342a150()*0.0270987);
}

double NNfunction_uLg::synapse0x3447810() {
   return (neuron0x342a490()*-0.224034);
}

double NNfunction_uLg::synapse0x3447850() {
   return (neuron0x342a7d0()*-0.429864);
}

double NNfunction_uLg::synapse0x3447890() {
   return (neuron0x342ab10()*-0.128232);
}

double NNfunction_uLg::synapse0x34478d0() {
   return (neuron0x342ae50()*-0.359094);
}

double NNfunction_uLg::synapse0x3447910() {
   return (neuron0x342b190()*-0.494723);
}

double NNfunction_uLg::synapse0x3447950() {
   return (neuron0x342b4d0()*0.195096);
}

double NNfunction_uLg::synapse0x3447990() {
   return (neuron0x342b810()*-0.562768);
}

double NNfunction_uLg::synapse0x34479d0() {
   return (neuron0x342bb50()*-0.298236);
}

double NNfunction_uLg::synapse0x3447a10() {
   return (neuron0x342be90()*-0.27869);
}

double NNfunction_uLg::synapse0x34474a0() {
   return (neuron0x342c1d0()*-0.815267);
}

double NNfunction_uLg::synapse0x34474e0() {
   return (neuron0x342c730()*-0.379918);
}

double NNfunction_uLg::synapse0x3447b60() {
   return (neuron0x342c950()*-0.219501);
}

double NNfunction_uLg::synapse0x3447ba0() {
   return (neuron0x342cc90()*0.105629);
}

double NNfunction_uLg::synapse0x3447be0() {
   return (neuron0x342cfd0()*0.198156);
}

double NNfunction_uLg::synapse0x3447c20() {
   return (neuron0x342d310()*0.173609);
}

double NNfunction_uLg::synapse0x3447c60() {
   return (neuron0x342d650()*-0.00539439);
}

double NNfunction_uLg::synapse0x3447ca0() {
   return (neuron0x342d990()*-0.465584);
}

double NNfunction_uLg::synapse0x3448020() {
   return (neuron0x3428dd0()*-0.0306229);
}

double NNfunction_uLg::synapse0x3448060() {
   return (neuron0x3429110()*-0.157982);
}

double NNfunction_uLg::synapse0x34480a0() {
   return (neuron0x3429450()*-0.275577);
}

double NNfunction_uLg::synapse0x34480e0() {
   return (neuron0x3429790()*-0.304485);
}

double NNfunction_uLg::synapse0x3448120() {
   return (neuron0x3429ad0()*-0.0302088);
}

double NNfunction_uLg::synapse0x3448160() {
   return (neuron0x3429e10()*-0.0263107);
}

double NNfunction_uLg::synapse0x34481a0() {
   return (neuron0x342a150()*-0.168149);
}

double NNfunction_uLg::synapse0x34481e0() {
   return (neuron0x342a490()*0.0264894);
}

double NNfunction_uLg::synapse0x3448220() {
   return (neuron0x342a7d0()*0.0503929);
}

double NNfunction_uLg::synapse0x3448260() {
   return (neuron0x342ab10()*-0.0295065);
}

double NNfunction_uLg::synapse0x34482a0() {
   return (neuron0x342ae50()*0.0522019);
}

double NNfunction_uLg::synapse0x34482e0() {
   return (neuron0x342b190()*-0.238136);
}

double NNfunction_uLg::synapse0x3448320() {
   return (neuron0x342b4d0()*0.345065);
}

double NNfunction_uLg::synapse0x3448360() {
   return (neuron0x342b810()*-0.197776);
}

double NNfunction_uLg::synapse0x34483a0() {
   return (neuron0x342bb50()*-0.201218);
}

double NNfunction_uLg::synapse0x34483e0() {
   return (neuron0x342be90()*-0.328699);
}

double NNfunction_uLg::synapse0x3447e70() {
   return (neuron0x342c1d0()*-0.174887);
}

double NNfunction_uLg::synapse0x3447eb0() {
   return (neuron0x342c730()*-0.142065);
}

double NNfunction_uLg::synapse0x3448530() {
   return (neuron0x342c950()*-0.0462607);
}

double NNfunction_uLg::synapse0x3448570() {
   return (neuron0x342cc90()*0.0531996);
}

double NNfunction_uLg::synapse0x34485b0() {
   return (neuron0x342cfd0()*-0.0786585);
}

double NNfunction_uLg::synapse0x34485f0() {
   return (neuron0x342d310()*0.0357835);
}

double NNfunction_uLg::synapse0x3448630() {
   return (neuron0x342d650()*-0.0740889);
}

double NNfunction_uLg::synapse0x3448670() {
   return (neuron0x342d990()*-0.0339789);
}

double NNfunction_uLg::synapse0x34489f0() {
   return (neuron0x3428dd0()*-0.000198164);
}

double NNfunction_uLg::synapse0x3448a30() {
   return (neuron0x3429110()*0.00305337);
}

double NNfunction_uLg::synapse0x3448a70() {
   return (neuron0x3429450()*-0.00330285);
}

double NNfunction_uLg::synapse0x3448ab0() {
   return (neuron0x3429790()*-16.8735);
}

double NNfunction_uLg::synapse0x3448af0() {
   return (neuron0x3429ad0()*0.000634276);
}

double NNfunction_uLg::synapse0x3448b30() {
   return (neuron0x3429e10()*-0.0112275);
}

double NNfunction_uLg::synapse0x3448b70() {
   return (neuron0x342a150()*-0.000949951);
}

double NNfunction_uLg::synapse0x3448bb0() {
   return (neuron0x342a490()*-0.00625699);
}

double NNfunction_uLg::synapse0x3448bf0() {
   return (neuron0x342a7d0()*0.00224946);
}

double NNfunction_uLg::synapse0x3448c30() {
   return (neuron0x342ab10()*0.000935834);
}

double NNfunction_uLg::synapse0x3448c70() {
   return (neuron0x342ae50()*-0.0010493);
}

double NNfunction_uLg::synapse0x3448cb0() {
   return (neuron0x342b190()*0.0722809);
}

double NNfunction_uLg::synapse0x3448cf0() {
   return (neuron0x342b4d0()*-0.00302206);
}

double NNfunction_uLg::synapse0x3448d30() {
   return (neuron0x342b810()*0.014481);
}

double NNfunction_uLg::synapse0x3448d70() {
   return (neuron0x342bb50()*-0.0119003);
}

double NNfunction_uLg::synapse0x3448db0() {
   return (neuron0x342be90()*-0.0158589);
}

double NNfunction_uLg::synapse0x3448840() {
   return (neuron0x342c1d0()*0.00638783);
}

double NNfunction_uLg::synapse0x3448880() {
   return (neuron0x342c730()*-0.0093506);
}

double NNfunction_uLg::synapse0x3448f00() {
   return (neuron0x342c950()*-0.00043662);
}

double NNfunction_uLg::synapse0x3448f40() {
   return (neuron0x342cc90()*0.00471719);
}

double NNfunction_uLg::synapse0x3448f80() {
   return (neuron0x342cfd0()*0.00631331);
}

double NNfunction_uLg::synapse0x3448fc0() {
   return (neuron0x342d310()*0.0133006);
}

double NNfunction_uLg::synapse0x3449000() {
   return (neuron0x342d650()*0.0023636);
}

double NNfunction_uLg::synapse0x3449040() {
   return (neuron0x342d990()*0.00201574);
}

double NNfunction_uLg::synapse0x34493c0() {
   return (neuron0x3428dd0()*0.0104913);
}

double NNfunction_uLg::synapse0x3449400() {
   return (neuron0x3429110()*0.0401622);
}

double NNfunction_uLg::synapse0x3449440() {
   return (neuron0x3429450()*0.254164);
}

double NNfunction_uLg::synapse0x3449480() {
   return (neuron0x3429790()*-0.00362532);
}

double NNfunction_uLg::synapse0x34494c0() {
   return (neuron0x3429ad0()*-0.0121856);
}

double NNfunction_uLg::synapse0x3449500() {
   return (neuron0x3429e10()*0.0592936);
}

double NNfunction_uLg::synapse0x3449540() {
   return (neuron0x342a150()*0.000990959);
}

double NNfunction_uLg::synapse0x3449580() {
   return (neuron0x342a490()*0.0413027);
}

double NNfunction_uLg::synapse0x34495c0() {
   return (neuron0x342a7d0()*-0.0125717);
}

double NNfunction_uLg::synapse0x3449600() {
   return (neuron0x342ab10()*-0.021782);
}

double NNfunction_uLg::synapse0x3449640() {
   return (neuron0x342ae50()*0.00510431);
}

double NNfunction_uLg::synapse0x3449680() {
   return (neuron0x342b190()*-0.322783);
}

double NNfunction_uLg::synapse0x34496c0() {
   return (neuron0x342b4d0()*-0.105253);
}

double NNfunction_uLg::synapse0x3449700() {
   return (neuron0x342b810()*0.109995);
}

double NNfunction_uLg::synapse0x3449740() {
   return (neuron0x342bb50()*-0.0017836);
}

double NNfunction_uLg::synapse0x3449780() {
   return (neuron0x342be90()*0.0331412);
}

double NNfunction_uLg::synapse0x3449210() {
   return (neuron0x342c1d0()*0.14761);
}

double NNfunction_uLg::synapse0x3449250() {
   return (neuron0x342c730()*-0.0934144);
}

double NNfunction_uLg::synapse0x34498d0() {
   return (neuron0x342c950()*-0.0762426);
}

double NNfunction_uLg::synapse0x3449910() {
   return (neuron0x342cc90()*-0.000797046);
}

double NNfunction_uLg::synapse0x3449950() {
   return (neuron0x342cfd0()*-0.0114264);
}

double NNfunction_uLg::synapse0x3449990() {
   return (neuron0x342d310()*0.0199149);
}

double NNfunction_uLg::synapse0x34499d0() {
   return (neuron0x342d650()*0.0114954);
}

double NNfunction_uLg::synapse0x3449a10() {
   return (neuron0x342d990()*0.020399);
}

double NNfunction_uLg::synapse0x3449d90() {
   return (neuron0x3428dd0()*-0.000107373);
}

double NNfunction_uLg::synapse0x3449dd0() {
   return (neuron0x3429110()*0.00307293);
}

double NNfunction_uLg::synapse0x3449e10() {
   return (neuron0x3429450()*0.012252);
}

double NNfunction_uLg::synapse0x3449e50() {
   return (neuron0x3429790()*-3.95615);
}

double NNfunction_uLg::synapse0x3449e90() {
   return (neuron0x3429ad0()*0.00553116);
}

double NNfunction_uLg::synapse0x3449ed0() {
   return (neuron0x3429e10()*0.000607486);
}

double NNfunction_uLg::synapse0x3449f10() {
   return (neuron0x342a150()*0.00775867);
}

double NNfunction_uLg::synapse0x3449f50() {
   return (neuron0x342a490()*0.00524202);
}

double NNfunction_uLg::synapse0x3449f90() {
   return (neuron0x342a7d0()*-0.0028176);
}

double NNfunction_uLg::synapse0x3449fd0() {
   return (neuron0x342ab10()*-0.00598465);
}

double NNfunction_uLg::synapse0x344a010() {
   return (neuron0x342ae50()*-0.0109871);
}

double NNfunction_uLg::synapse0x344a050() {
   return (neuron0x342b190()*0.188785);
}

double NNfunction_uLg::synapse0x344a090() {
   return (neuron0x342b4d0()*0.0370801);
}

double NNfunction_uLg::synapse0x344a0d0() {
   return (neuron0x342b810()*-0.00508752);
}

double NNfunction_uLg::synapse0x344a110() {
   return (neuron0x342bb50()*0.0114246);
}

double NNfunction_uLg::synapse0x344a150() {
   return (neuron0x342be90()*0.0129795);
}

double NNfunction_uLg::synapse0x3449be0() {
   return (neuron0x342c1d0()*0.00479384);
}

double NNfunction_uLg::synapse0x3449c20() {
   return (neuron0x342c730()*0.0231022);
}

double NNfunction_uLg::synapse0x344a2a0() {
   return (neuron0x342c950()*0.0283101);
}

double NNfunction_uLg::synapse0x344a2e0() {
   return (neuron0x342cc90()*-0.00109282);
}

double NNfunction_uLg::synapse0x344a320() {
   return (neuron0x342cfd0()*0.0117967);
}

double NNfunction_uLg::synapse0x344a360() {
   return (neuron0x342d310()*0.00234303);
}

double NNfunction_uLg::synapse0x344a3a0() {
   return (neuron0x342d650()*0.00630466);
}

double NNfunction_uLg::synapse0x344a3e0() {
   return (neuron0x342d990()*-0.00140088);
}

double NNfunction_uLg::synapse0x3432e90() {
   return (neuron0x3428dd0()*-0.0464749);
}

double NNfunction_uLg::synapse0x3432ed0() {
   return (neuron0x3429110()*-0.0144017);
}

double NNfunction_uLg::synapse0x3432f10() {
   return (neuron0x3429450()*1.76848);
}

double NNfunction_uLg::synapse0x3432f50() {
   return (neuron0x3429790()*-0.0351056);
}

double NNfunction_uLg::synapse0x3432f90() {
   return (neuron0x3429ad0()*-0.0498839);
}

double NNfunction_uLg::synapse0x3432fd0() {
   return (neuron0x3429e10()*-0.0483686);
}

double NNfunction_uLg::synapse0x3433010() {
   return (neuron0x342a150()*-0.0215325);
}

double NNfunction_uLg::synapse0x3433050() {
   return (neuron0x342a490()*-0.0566493);
}

double NNfunction_uLg::synapse0x344ab70() {
   return (neuron0x342a7d0()*0.0435728);
}

double NNfunction_uLg::synapse0x344abb0() {
   return (neuron0x342ab10()*0.0107419);
}

double NNfunction_uLg::synapse0x344abf0() {
   return (neuron0x342ae50()*0.0536399);
}

double NNfunction_uLg::synapse0x344ac30() {
   return (neuron0x342b190()*-0.143862);
}

double NNfunction_uLg::synapse0x344ac70() {
   return (neuron0x342b4d0()*-0.018813);
}

double NNfunction_uLg::synapse0x344acb0() {
   return (neuron0x342b810()*-0.00343211);
}

double NNfunction_uLg::synapse0x344acf0() {
   return (neuron0x342bb50()*-0.0545621);
}

double NNfunction_uLg::synapse0x344ad30() {
   return (neuron0x342be90()*0.0282365);
}

double NNfunction_uLg::synapse0x344a5b0() {
   return (neuron0x342c1d0()*-0.00146232);
}

double NNfunction_uLg::synapse0x344a5f0() {
   return (neuron0x342c730()*-0.0392336);
}

double NNfunction_uLg::synapse0x344ae80() {
   return (neuron0x342c950()*-0.0187372);
}

double NNfunction_uLg::synapse0x344aec0() {
   return (neuron0x342cc90()*0.0191365);
}

double NNfunction_uLg::synapse0x344af00() {
   return (neuron0x342cfd0()*-0.0274615);
}

double NNfunction_uLg::synapse0x344af40() {
   return (neuron0x342d310()*0.00933119);
}

double NNfunction_uLg::synapse0x344af80() {
   return (neuron0x342d650()*-0.0212533);
}

double NNfunction_uLg::synapse0x344afc0() {
   return (neuron0x342d990()*-0.0188277);
}

double NNfunction_uLg::synapse0x344b340() {
   return (neuron0x3428dd0()*-0.0973164);
}

double NNfunction_uLg::synapse0x344b380() {
   return (neuron0x3429110()*-0.0836876);
}

double NNfunction_uLg::synapse0x344b3c0() {
   return (neuron0x3429450()*-0.126029);
}

double NNfunction_uLg::synapse0x344b400() {
   return (neuron0x3429790()*-1.29043);
}

double NNfunction_uLg::synapse0x344b440() {
   return (neuron0x3429ad0()*-0.0145178);
}

double NNfunction_uLg::synapse0x344b480() {
   return (neuron0x3429e10()*0.106313);
}

double NNfunction_uLg::synapse0x344b4c0() {
   return (neuron0x342a150()*0.128936);
}

double NNfunction_uLg::synapse0x344b500() {
   return (neuron0x342a490()*-0.240425);
}

double NNfunction_uLg::synapse0x344b540() {
   return (neuron0x342a7d0()*0.0322298);
}

double NNfunction_uLg::synapse0x344b580() {
   return (neuron0x342ab10()*-0.0297072);
}

double NNfunction_uLg::synapse0x344b5c0() {
   return (neuron0x342ae50()*0.0528201);
}

double NNfunction_uLg::synapse0x344b600() {
   return (neuron0x342b190()*0.0347602);
}

double NNfunction_uLg::synapse0x344b640() {
   return (neuron0x342b4d0()*-0.063393);
}

double NNfunction_uLg::synapse0x344b680() {
   return (neuron0x342b810()*-0.353107);
}

double NNfunction_uLg::synapse0x344b6c0() {
   return (neuron0x342bb50()*-0.00729486);
}

double NNfunction_uLg::synapse0x344b700() {
   return (neuron0x342be90()*-0.112176);
}

double NNfunction_uLg::synapse0x344b190() {
   return (neuron0x342c1d0()*0.136577);
}

double NNfunction_uLg::synapse0x344b1d0() {
   return (neuron0x342c730()*-0.107959);
}

double NNfunction_uLg::synapse0x344b850() {
   return (neuron0x342c950()*0.125249);
}

double NNfunction_uLg::synapse0x344b890() {
   return (neuron0x342cc90()*-0.221589);
}

double NNfunction_uLg::synapse0x344b8d0() {
   return (neuron0x342cfd0()*-0.0412999);
}

double NNfunction_uLg::synapse0x344b910() {
   return (neuron0x342d310()*0.0589723);
}

double NNfunction_uLg::synapse0x344b950() {
   return (neuron0x342d650()*-0.0262846);
}

double NNfunction_uLg::synapse0x344b990() {
   return (neuron0x342d990()*-0.0633995);
}

double NNfunction_uLg::synapse0x344bd10() {
   return (neuron0x3428dd0()*0.000265276);
}

double NNfunction_uLg::synapse0x344bd50() {
   return (neuron0x3429110()*-0.00574882);
}

double NNfunction_uLg::synapse0x344bd90() {
   return (neuron0x3429450()*0.014765);
}

double NNfunction_uLg::synapse0x344bdd0() {
   return (neuron0x3429790()*1.63716);
}

double NNfunction_uLg::synapse0x344be10() {
   return (neuron0x3429ad0()*-0.006965);
}

double NNfunction_uLg::synapse0x344be50() {
   return (neuron0x3429e10()*-0.00555166);
}

double NNfunction_uLg::synapse0x344be90() {
   return (neuron0x342a150()*-0.0167084);
}

double NNfunction_uLg::synapse0x344bed0() {
   return (neuron0x342a490()*-0.007399);
}

double NNfunction_uLg::synapse0x344bf10() {
   return (neuron0x342a7d0()*0.00664873);
}

double NNfunction_uLg::synapse0x344bf50() {
   return (neuron0x342ab10()*0.00589821);
}

double NNfunction_uLg::synapse0x344bf90() {
   return (neuron0x342ae50()*0.0114028);
}

double NNfunction_uLg::synapse0x344bfd0() {
   return (neuron0x342b190()*0.352837);
}

double NNfunction_uLg::synapse0x344c010() {
   return (neuron0x342b4d0()*-0.0214445);
}

double NNfunction_uLg::synapse0x344c050() {
   return (neuron0x342b810()*-0.00527074);
}

double NNfunction_uLg::synapse0x344c090() {
   return (neuron0x342bb50()*-0.0148029);
}

double NNfunction_uLg::synapse0x344c0d0() {
   return (neuron0x342be90()*-0.014927);
}

double NNfunction_uLg::synapse0x344bb60() {
   return (neuron0x342c1d0()*-0.0252295);
}

double NNfunction_uLg::synapse0x344bba0() {
   return (neuron0x342c730()*-0.01535);
}

double NNfunction_uLg::synapse0x343c6d0() {
   return (neuron0x342c950()*-0.0280339);
}

double NNfunction_uLg::synapse0x343c710() {
   return (neuron0x342cc90()*0.00106686);
}

double NNfunction_uLg::synapse0x343c750() {
   return (neuron0x342cfd0()*-0.0121678);
}

double NNfunction_uLg::synapse0x343c790() {
   return (neuron0x342d310()*-0.00119372);
}

double NNfunction_uLg::synapse0x343c7d0() {
   return (neuron0x342d650()*-0.00718732);
}

double NNfunction_uLg::synapse0x343c810() {
   return (neuron0x342d990()*-0.00771507);
}

double NNfunction_uLg::synapse0x343cb90() {
   return (neuron0x3428dd0()*-0.0521078);
}

double NNfunction_uLg::synapse0x343cbd0() {
   return (neuron0x3429110()*-0.0570928);
}

double NNfunction_uLg::synapse0x343cc10() {
   return (neuron0x3429450()*-0.226738);
}

double NNfunction_uLg::synapse0x343cc50() {
   return (neuron0x3429790()*0.306836);
}

double NNfunction_uLg::synapse0x343cc90() {
   return (neuron0x3429ad0()*-0.0664599);
}

double NNfunction_uLg::synapse0x343ccd0() {
   return (neuron0x3429e10()*0.0115929);
}

double NNfunction_uLg::synapse0x343cd10() {
   return (neuron0x342a150()*0.111906);
}

double NNfunction_uLg::synapse0x343cd50() {
   return (neuron0x342a490()*-0.000468519);
}

double NNfunction_uLg::synapse0x343cd90() {
   return (neuron0x342a7d0()*0.420147);
}

double NNfunction_uLg::synapse0x343cdd0() {
   return (neuron0x342ab10()*0.179655);
}

double NNfunction_uLg::synapse0x343ce10() {
   return (neuron0x342ae50()*0.0750068);
}

double NNfunction_uLg::synapse0x343ce50() {
   return (neuron0x342b190()*2.70261);
}

double NNfunction_uLg::synapse0x343ce90() {
   return (neuron0x342b4d0()*0.25508);
}

double NNfunction_uLg::synapse0x343ced0() {
   return (neuron0x342b810()*0.26879);
}

double NNfunction_uLg::synapse0x343cf10() {
   return (neuron0x342bb50()*0.0378888);
}

double NNfunction_uLg::synapse0x343cf50() {
   return (neuron0x342be90()*0.0553428);
}

double NNfunction_uLg::synapse0x343c9e0() {
   return (neuron0x342c1d0()*0.0985212);
}

double NNfunction_uLg::synapse0x343ca20() {
   return (neuron0x342c730()*-0.013302);
}

double NNfunction_uLg::synapse0x343d0a0() {
   return (neuron0x342c950()*0.0193966);
}

double NNfunction_uLg::synapse0x343d0e0() {
   return (neuron0x342cc90()*0.145042);
}

double NNfunction_uLg::synapse0x343d120() {
   return (neuron0x342cfd0()*0.0370707);
}

double NNfunction_uLg::synapse0x343d160() {
   return (neuron0x342d310()*0.0200628);
}

double NNfunction_uLg::synapse0x343d1a0() {
   return (neuron0x342d650()*0.0702177);
}

double NNfunction_uLg::synapse0x343d1e0() {
   return (neuron0x342d990()*0.0698734);
}

double NNfunction_uLg::synapse0x343d560() {
   return (neuron0x3428dd0()*-0.188278);
}

double NNfunction_uLg::synapse0x343d5a0() {
   return (neuron0x3429110()*-0.0363718);
}

double NNfunction_uLg::synapse0x343d5e0() {
   return (neuron0x3429450()*-0.834387);
}

double NNfunction_uLg::synapse0x343d620() {
   return (neuron0x3429790()*-0.423308);
}

double NNfunction_uLg::synapse0x343d660() {
   return (neuron0x3429ad0()*-0.0453737);
}

double NNfunction_uLg::synapse0x343d6a0() {
   return (neuron0x3429e10()*0.251277);
}

double NNfunction_uLg::synapse0x343d6e0() {
   return (neuron0x342a150()*0.317975);
}

double NNfunction_uLg::synapse0x343d720() {
   return (neuron0x342a490()*0.884158);
}

double NNfunction_uLg::synapse0x343d760() {
   return (neuron0x342a7d0()*0.0895207);
}

double NNfunction_uLg::synapse0x343d7a0() {
   return (neuron0x342ab10()*-0.372364);
}

double NNfunction_uLg::synapse0x343d7e0() {
   return (neuron0x342ae50()*-0.132432);
}

double NNfunction_uLg::synapse0x343d820() {
   return (neuron0x342b190()*-0.169631);
}

double NNfunction_uLg::synapse0x343d860() {
   return (neuron0x342b4d0()*-0.358768);
}

double NNfunction_uLg::synapse0x343d8a0() {
   return (neuron0x342b810()*-0.106557);
}

double NNfunction_uLg::synapse0x343d8e0() {
   return (neuron0x342bb50()*-0.152791);
}

double NNfunction_uLg::synapse0x343d920() {
   return (neuron0x342be90()*0.153637);
}

double NNfunction_uLg::synapse0x343d3b0() {
   return (neuron0x342c1d0()*-0.0487255);
}

double NNfunction_uLg::synapse0x343d3f0() {
   return (neuron0x342c730()*-0.0983082);
}

double NNfunction_uLg::synapse0x343da70() {
   return (neuron0x342c950()*0.250721);
}

double NNfunction_uLg::synapse0x343dab0() {
   return (neuron0x342cc90()*-0.0980618);
}

double NNfunction_uLg::synapse0x343daf0() {
   return (neuron0x342cfd0()*-0.379625);
}

double NNfunction_uLg::synapse0x343db30() {
   return (neuron0x342d310()*-0.167798);
}

double NNfunction_uLg::synapse0x343db70() {
   return (neuron0x342d650()*0.0897468);
}

double NNfunction_uLg::synapse0x343dbb0() {
   return (neuron0x342d990()*-0.325287);
}

double NNfunction_uLg::synapse0x343df30() {
   return (neuron0x3428dd0()*-0.00201428);
}

double NNfunction_uLg::synapse0x343df70() {
   return (neuron0x3429110()*0.0644006);
}

double NNfunction_uLg::synapse0x343dfb0() {
   return (neuron0x3429450()*0.013695);
}

double NNfunction_uLg::synapse0x343dff0() {
   return (neuron0x3429790()*1.45043);
}

double NNfunction_uLg::synapse0x343e030() {
   return (neuron0x3429ad0()*0.0324356);
}

double NNfunction_uLg::synapse0x343e070() {
   return (neuron0x3429e10()*0.0068914);
}

double NNfunction_uLg::synapse0x343e0b0() {
   return (neuron0x342a150()*0.00740149);
}

double NNfunction_uLg::synapse0x343e0f0() {
   return (neuron0x342a490()*0.054154);
}

double NNfunction_uLg::synapse0x343e130() {
   return (neuron0x342a7d0()*-0.074814);
}

double NNfunction_uLg::synapse0x343e170() {
   return (neuron0x342ab10()*0.015698);
}

double NNfunction_uLg::synapse0x343e1b0() {
   return (neuron0x342ae50()*-0.0501415);
}

double NNfunction_uLg::synapse0x343e1f0() {
   return (neuron0x342b190()*0.951721);
}

double NNfunction_uLg::synapse0x343e230() {
   return (neuron0x342b4d0()*0.171213);
}

double NNfunction_uLg::synapse0x343e270() {
   return (neuron0x342b810()*0.101015);
}

double NNfunction_uLg::synapse0x343e2b0() {
   return (neuron0x342bb50()*0.137258);
}

double NNfunction_uLg::synapse0x343e2f0() {
   return (neuron0x342be90()*0.112776);
}

double NNfunction_uLg::synapse0x343dd80() {
   return (neuron0x342c1d0()*0.0572159);
}

double NNfunction_uLg::synapse0x343ddc0() {
   return (neuron0x342c730()*0.130173);
}

double NNfunction_uLg::synapse0x343e440() {
   return (neuron0x342c950()*0.0966042);
}

double NNfunction_uLg::synapse0x343e480() {
   return (neuron0x342cc90()*0.0400592);
}

double NNfunction_uLg::synapse0x343e4c0() {
   return (neuron0x342cfd0()*0.00730896);
}

double NNfunction_uLg::synapse0x343e500() {
   return (neuron0x342d310()*-0.018698);
}

double NNfunction_uLg::synapse0x343e540() {
   return (neuron0x342d650()*-0.00324067);
}

double NNfunction_uLg::synapse0x343e580() {
   return (neuron0x342d990()*0.00267153);
}

double NNfunction_uLg::synapse0x3450450() {
   return (neuron0x3428dd0()*0.201804);
}

double NNfunction_uLg::synapse0x3450490() {
   return (neuron0x3429110()*-0.19554);
}

double NNfunction_uLg::synapse0x34504d0() {
   return (neuron0x3429450()*-0.270496);
}

double NNfunction_uLg::synapse0x3450510() {
   return (neuron0x3429790()*-0.423273);
}

double NNfunction_uLg::synapse0x3450550() {
   return (neuron0x3429ad0()*-0.235419);
}

double NNfunction_uLg::synapse0x3450590() {
   return (neuron0x3429e10()*-0.220198);
}

double NNfunction_uLg::synapse0x34505d0() {
   return (neuron0x342a150()*0.10586);
}

double NNfunction_uLg::synapse0x3450610() {
   return (neuron0x342a490()*0.207954);
}

double NNfunction_uLg::synapse0x3450650() {
   return (neuron0x342a7d0()*-0.402548);
}

double NNfunction_uLg::synapse0x3450690() {
   return (neuron0x342ab10()*-0.00332841);
}

double NNfunction_uLg::synapse0x34506d0() {
   return (neuron0x342ae50()*0.124116);
}

double NNfunction_uLg::synapse0x3450710() {
   return (neuron0x342b190()*0.200568);
}

double NNfunction_uLg::synapse0x3450750() {
   return (neuron0x342b4d0()*-0.11221);
}

double NNfunction_uLg::synapse0x3450790() {
   return (neuron0x342b810()*0.206596);
}

double NNfunction_uLg::synapse0x34507d0() {
   return (neuron0x342bb50()*-0.24482);
}

double NNfunction_uLg::synapse0x3450810() {
   return (neuron0x342be90()*-0.177189);
}

double NNfunction_uLg::synapse0x343e5c0() {
   return (neuron0x342c1d0()*0.201914);
}

double NNfunction_uLg::synapse0x343e600() {
   return (neuron0x342c730()*-0.0346987);
}

double NNfunction_uLg::synapse0x3450960() {
   return (neuron0x342c950()*0.339302);
}

double NNfunction_uLg::synapse0x34509a0() {
   return (neuron0x342cc90()*-0.362496);
}

double NNfunction_uLg::synapse0x34509e0() {
   return (neuron0x342cfd0()*0.284525);
}

double NNfunction_uLg::synapse0x3450a20() {
   return (neuron0x342d310()*-0.527942);
}

double NNfunction_uLg::synapse0x3450a60() {
   return (neuron0x342d650()*0.156451);
}

double NNfunction_uLg::synapse0x3450aa0() {
   return (neuron0x342d990()*-0.268797);
}

double NNfunction_uLg::synapse0x3450e20() {
   return (neuron0x3428dd0()*-0.264204);
}

double NNfunction_uLg::synapse0x3450e60() {
   return (neuron0x3429110()*-0.427502);
}

double NNfunction_uLg::synapse0x3450ea0() {
   return (neuron0x3429450()*0.278901);
}

double NNfunction_uLg::synapse0x3450ee0() {
   return (neuron0x3429790()*-0.300301);
}

double NNfunction_uLg::synapse0x3450f20() {
   return (neuron0x3429ad0()*-0.134079);
}

double NNfunction_uLg::synapse0x3450f60() {
   return (neuron0x3429e10()*0.24088);
}

double NNfunction_uLg::synapse0x3450fa0() {
   return (neuron0x342a150()*-0.0567802);
}

double NNfunction_uLg::synapse0x3450fe0() {
   return (neuron0x342a490()*0.257686);
}

double NNfunction_uLg::synapse0x3451020() {
   return (neuron0x342a7d0()*0.346887);
}

double NNfunction_uLg::synapse0x3451060() {
   return (neuron0x342ab10()*-0.640485);
}

double NNfunction_uLg::synapse0x34510a0() {
   return (neuron0x342ae50()*-0.126033);
}

double NNfunction_uLg::synapse0x34510e0() {
   return (neuron0x342b190()*-0.858357);
}

double NNfunction_uLg::synapse0x3451120() {
   return (neuron0x342b4d0()*0.170727);
}

double NNfunction_uLg::synapse0x3451160() {
   return (neuron0x342b810()*-0.712354);
}

double NNfunction_uLg::synapse0x34511a0() {
   return (neuron0x342bb50()*-0.314317);
}

double NNfunction_uLg::synapse0x34511e0() {
   return (neuron0x342be90()*-0.0116026);
}

double NNfunction_uLg::synapse0x3450c70() {
   return (neuron0x342c1d0()*0.194596);
}

double NNfunction_uLg::synapse0x3450cb0() {
   return (neuron0x342c730()*-0.0598839);
}

double NNfunction_uLg::synapse0x3451330() {
   return (neuron0x342c950()*-0.0127155);
}

double NNfunction_uLg::synapse0x3451370() {
   return (neuron0x342cc90()*-0.243277);
}

double NNfunction_uLg::synapse0x34513b0() {
   return (neuron0x342cfd0()*0.105763);
}

double NNfunction_uLg::synapse0x34513f0() {
   return (neuron0x342d310()*0.343008);
}

double NNfunction_uLg::synapse0x3451430() {
   return (neuron0x342d650()*-0.266393);
}

double NNfunction_uLg::synapse0x3451470() {
   return (neuron0x342d990()*-0.404079);
}

double NNfunction_uLg::synapse0x34517f0() {
   return (neuron0x3428dd0()*-0.0308463);
}

double NNfunction_uLg::synapse0x3451830() {
   return (neuron0x3429110()*0.377298);
}

double NNfunction_uLg::synapse0x3451870() {
   return (neuron0x3429450()*-0.220853);
}

double NNfunction_uLg::synapse0x34518b0() {
   return (neuron0x3429790()*-0.198152);
}

double NNfunction_uLg::synapse0x34518f0() {
   return (neuron0x3429ad0()*-0.218884);
}

double NNfunction_uLg::synapse0x3451930() {
   return (neuron0x3429e10()*-0.108773);
}

double NNfunction_uLg::synapse0x3451970() {
   return (neuron0x342a150()*0.283768);
}

double NNfunction_uLg::synapse0x34519b0() {
   return (neuron0x342a490()*0.105599);
}

double NNfunction_uLg::synapse0x34519f0() {
   return (neuron0x342a7d0()*-0.29133);
}

double NNfunction_uLg::synapse0x3451a30() {
   return (neuron0x342ab10()*-0.170626);
}

double NNfunction_uLg::synapse0x3451a70() {
   return (neuron0x342ae50()*0.244307);
}

double NNfunction_uLg::synapse0x3451ab0() {
   return (neuron0x342b190()*0.522922);
}

double NNfunction_uLg::synapse0x3451af0() {
   return (neuron0x342b4d0()*0.210551);
}

double NNfunction_uLg::synapse0x3451b30() {
   return (neuron0x342b810()*0.160048);
}

double NNfunction_uLg::synapse0x3451b70() {
   return (neuron0x342bb50()*0.0138383);
}

double NNfunction_uLg::synapse0x3451bb0() {
   return (neuron0x342be90()*-0.0644098);
}

double NNfunction_uLg::synapse0x3451640() {
   return (neuron0x342c1d0()*0.163469);
}

double NNfunction_uLg::synapse0x3451680() {
   return (neuron0x342c730()*0.221814);
}

double NNfunction_uLg::synapse0x3451d00() {
   return (neuron0x342c950()*0.152041);
}

double NNfunction_uLg::synapse0x3451d40() {
   return (neuron0x342cc90()*0.206095);
}

double NNfunction_uLg::synapse0x3451d80() {
   return (neuron0x342cfd0()*-0.183628);
}

double NNfunction_uLg::synapse0x3451dc0() {
   return (neuron0x342d310()*-0.171325);
}

double NNfunction_uLg::synapse0x3451e00() {
   return (neuron0x342d650()*-0.148892);
}

double NNfunction_uLg::synapse0x3451e40() {
   return (neuron0x342d990()*-0.00669395);
}

double NNfunction_uLg::synapse0x34521c0() {
   return (neuron0x3428dd0()*0.288904);
}

double NNfunction_uLg::synapse0x3452200() {
   return (neuron0x3429110()*0.175679);
}

double NNfunction_uLg::synapse0x3452240() {
   return (neuron0x3429450()*-0.471588);
}

double NNfunction_uLg::synapse0x3452280() {
   return (neuron0x3429790()*0.00426816);
}

double NNfunction_uLg::synapse0x34522c0() {
   return (neuron0x3429ad0()*0.869472);
}

double NNfunction_uLg::synapse0x3452300() {
   return (neuron0x3429e10()*0.0111268);
}

double NNfunction_uLg::synapse0x3452340() {
   return (neuron0x342a150()*-0.19266);
}

double NNfunction_uLg::synapse0x3452380() {
   return (neuron0x342a490()*-0.196321);
}

double NNfunction_uLg::synapse0x34523c0() {
   return (neuron0x342a7d0()*-0.123261);
}

double NNfunction_uLg::synapse0x3452400() {
   return (neuron0x342ab10()*-0.0145324);
}

double NNfunction_uLg::synapse0x3452440() {
   return (neuron0x342ae50()*-0.0138547);
}

double NNfunction_uLg::synapse0x3452480() {
   return (neuron0x342b190()*-0.417148);
}

double NNfunction_uLg::synapse0x34524c0() {
   return (neuron0x342b4d0()*-0.219983);
}

double NNfunction_uLg::synapse0x3452500() {
   return (neuron0x342b810()*-0.209012);
}

double NNfunction_uLg::synapse0x3452540() {
   return (neuron0x342bb50()*-0.160186);
}

double NNfunction_uLg::synapse0x3452580() {
   return (neuron0x342be90()*-0.228635);
}

double NNfunction_uLg::synapse0x3452010() {
   return (neuron0x342c1d0()*-0.199503);
}

double NNfunction_uLg::synapse0x3452050() {
   return (neuron0x342c730()*0.126286);
}

double NNfunction_uLg::synapse0x34526d0() {
   return (neuron0x342c950()*0.220611);
}

double NNfunction_uLg::synapse0x3452710() {
   return (neuron0x342cc90()*0.243524);
}

double NNfunction_uLg::synapse0x3452750() {
   return (neuron0x342cfd0()*-0.044345);
}

double NNfunction_uLg::synapse0x3452790() {
   return (neuron0x342d310()*0.209335);
}

double NNfunction_uLg::synapse0x34527d0() {
   return (neuron0x342d650()*0.170584);
}

double NNfunction_uLg::synapse0x3452810() {
   return (neuron0x342d990()*0.12101);
}

double NNfunction_uLg::synapse0x31e8be0() {
   return (neuron0x342de00()*0.0217662);
}

double NNfunction_uLg::synapse0x31e8c20() {
   return (neuron0x342e750()*-0.0174592);
}

double NNfunction_uLg::synapse0x34302c0() {
   return (neuron0x342f230()*0.585704);
}

double NNfunction_uLg::synapse0x3430300() {
   return (neuron0x342ecd0()*0.987819);
}

double NNfunction_uLg::synapse0x3430c90() {
   return (neuron0x3430010()*2.33291);
}

double NNfunction_uLg::synapse0x3430cd0() {
   return (neuron0x34309e0()*1.19859);
}

double NNfunction_uLg::synapse0x3431a60() {
   return (neuron0x34317b0()*1.386);
}

double NNfunction_uLg::synapse0x3431aa0() {
   return (neuron0x3432180()*-1.42184);
}

double NNfunction_uLg::synapse0x3432430() {
   return (neuron0x3432b50()*0.862882);
}

double NNfunction_uLg::synapse0x3432470() {
   return (neuron0x3433630()*0.0389455);
}

double NNfunction_uLg::synapse0x3432e00() {
   return (neuron0x3434000()*0.0259318);
}

double NNfunction_uLg::synapse0x3432e40() {
   return (neuron0x34310e0()*0.112594);
}

double NNfunction_uLg::synapse0x34338e0() {
   return (neuron0x3435bb0()*1.93643);
}

double NNfunction_uLg::synapse0x3433920() {
   return (neuron0x3436580()*-0.0223144);
}

double NNfunction_uLg::synapse0x34342b0() {
   return (neuron0x3436f50()*0.0172639);
}

double NNfunction_uLg::synapse0x34342f0() {
   return (neuron0x3437920()*0.0373409);
}

double NNfunction_uLg::synapse0x3431390() {
   return (neuron0x3439730()*0.0803441);
}

double NNfunction_uLg::synapse0x34313d0() {
   return (neuron0x3439a10()*-0.083982);
}

double NNfunction_uLg::synapse0x3435e60() {
   return (neuron0x343a3e0()*0.235201);
}

double NNfunction_uLg::synapse0x3435ea0() {
   return (neuron0x343adb0()*-0.536227);
}

double NNfunction_uLg::synapse0x3436830() {
   return (neuron0x343b780()*0.0210817);
}

double NNfunction_uLg::synapse0x3436870() {
   return (neuron0x343c150()*0.0355814);
}

double NNfunction_uLg::synapse0x3437200() {
   return (neuron0x3434ca0()*-0.182629);
}

double NNfunction_uLg::synapse0x3437240() {
   return (neuron0x3435670()*0.0377516);
}

double NNfunction_uLg::synapse0x3437bd0() {
   return (neuron0x343eee0()*-0.907542);
}

double NNfunction_uLg::synapse0x3437c10() {
   return (neuron0x343f8b0()*-0.0240613);
}

double NNfunction_uLg::synapse0x342bd70() {
   return (neuron0x3440280()*1.45885);
}

double NNfunction_uLg::synapse0x342bdb0() {
   return (neuron0x3440c50()*-1.90685);
}

double NNfunction_uLg::synapse0x3439cc0() {
   return (neuron0x3441620()*0.757996);
}

double NNfunction_uLg::synapse0x3439d00() {
   return (neuron0x3441ff0()*-0.746653);
}

double NNfunction_uLg::synapse0x343a690() {
   return (neuron0x34429c0()*0.0679885);
}

double NNfunction_uLg::synapse0x343a6d0() {
   return (neuron0x3443390()*-0.0293843);
}

double NNfunction_uLg::synapse0x343b060() {
   return (neuron0x3439420()*1.2156);
}

double NNfunction_uLg::synapse0x343b0a0() {
   return (neuron0x3445f70()*-0.0519378);
}

double NNfunction_uLg::synapse0x343ba30() {
   return (neuron0x3446940()*0.0940818);
}

double NNfunction_uLg::synapse0x343ba70() {
   return (neuron0x3447310()*0.00470285);
}

double NNfunction_uLg::synapse0x343c400() {
   return (neuron0x3447ce0()*0.235192);
}

double NNfunction_uLg::synapse0x343c440() {
   return (neuron0x34486b0()*-1.52225);
}

double NNfunction_uLg::synapse0x3434f50() {
   return (neuron0x3449080()*-0.253164);
}

double NNfunction_uLg::synapse0x3434f90() {
   return (neuron0x3449a50()*0.941614);
}

double NNfunction_uLg::synapse0x343e800() {
   return (neuron0x344a420()*0.118247);
}

double NNfunction_uLg::synapse0x343e840() {
   return (neuron0x344b000()*-0.154336);
}

double NNfunction_uLg::synapse0x343f190() {
   return (neuron0x344b9d0()*-1.4469);
}

double NNfunction_uLg::synapse0x343f1d0() {
   return (neuron0x343c850()*-0.0642808);
}

double NNfunction_uLg::synapse0x343fb60() {
   return (neuron0x343d220()*-0.0257001);
}

double NNfunction_uLg::synapse0x343fba0() {
   return (neuron0x343dbf0()*0.581347);
}

double NNfunction_uLg::synapse0x3440530() {
   return (neuron0x3450230()*-0.0244449);
}

double NNfunction_uLg::synapse0x3440570() {
   return (neuron0x3450ae0()*0.0464114);
}

double NNfunction_uLg::synapse0x3440f00() {
   return (neuron0x34514b0()*0.0352895);
}

double NNfunction_uLg::synapse0x3440f40() {
   return (neuron0x3451e80()*0.00401849);
}

double NNfunction_uLg::synapse0x3443640() {
   return (neuron0x342de00()*-0.946953);
}

double NNfunction_uLg::synapse0x3443680() {
   return (neuron0x342e750()*0.0323697);
}

double NNfunction_uLg::synapse0x3438c00() {
   return (neuron0x342f230()*-0.564359);
}

double NNfunction_uLg::synapse0x3438c40() {
   return (neuron0x342ecd0()*0.155103);
}

double NNfunction_uLg::synapse0x3446220() {
   return (neuron0x3430010()*-0.296623);
}

double NNfunction_uLg::synapse0x3446260() {
   return (neuron0x34309e0()*-0.448257);
}

double NNfunction_uLg::synapse0x3446bf0() {
   return (neuron0x34317b0()*-0.960246);
}

double NNfunction_uLg::synapse0x3446c30() {
   return (neuron0x3432180()*0.0474518);
}

double NNfunction_uLg::synapse0x34475c0() {
   return (neuron0x3432b50()*-0.918975);
}

double NNfunction_uLg::synapse0x3447600() {
   return (neuron0x3433630()*-0.972506);
}

double NNfunction_uLg::synapse0x3447f90() {
   return (neuron0x3434000()*-0.195789);
}

double NNfunction_uLg::synapse0x3447fd0() {
   return (neuron0x34310e0()*-0.269734);
}

double NNfunction_uLg::synapse0x3448960() {
   return (neuron0x3435bb0()*-0.784819);
}

double NNfunction_uLg::synapse0x34489a0() {
   return (neuron0x3436580()*0.531252);
}

double NNfunction_uLg::synapse0x3449330() {
   return (neuron0x3436f50()*-0.40482);
}

double NNfunction_uLg::synapse0x3449370() {
   return (neuron0x3437920()*-0.183689);
}

double NNfunction_uLg::synapse0x3449d00() {
   return (neuron0x3439730()*-1.04095);
}

double NNfunction_uLg::synapse0x3449d40() {
   return (neuron0x3439a10()*-1.0349);
}

double NNfunction_uLg::synapse0x344a6d0() {
   return (neuron0x343a3e0()*-0.0966053);
}

double NNfunction_uLg::synapse0x344a710() {
   return (neuron0x343adb0()*0.126061);
}

double NNfunction_uLg::synapse0x344b2b0() {
   return (neuron0x343b780()*-0.47333);
}

double NNfunction_uLg::synapse0x344b2f0() {
   return (neuron0x343c150()*-0.592282);
}

double NNfunction_uLg::synapse0x344bc80() {
   return (neuron0x3434ca0()*-0.637984);
}

double NNfunction_uLg::synapse0x344bcc0() {
   return (neuron0x3435670()*-0.777005);
}

double NNfunction_uLg::synapse0x343cb00() {
   return (neuron0x343eee0()*-0.824999);
}

double NNfunction_uLg::synapse0x343cb40() {
   return (neuron0x343f8b0()*-0.495167);
}

double NNfunction_uLg::synapse0x343d4d0() {
   return (neuron0x3440280()*-1.35241);
}

double NNfunction_uLg::synapse0x343d510() {
   return (neuron0x3440c50()*-0.443526);
}

double NNfunction_uLg::synapse0x343dea0() {
   return (neuron0x3441620()*-0.396467);
}

double NNfunction_uLg::synapse0x343dee0() {
   return (neuron0x3441ff0()*-0.605969);
}

double NNfunction_uLg::synapse0x34503c0() {
   return (neuron0x34429c0()*-0.925367);
}

double NNfunction_uLg::synapse0x3450400() {
   return (neuron0x3443390()*-0.962813);
}

double NNfunction_uLg::synapse0x3450d90() {
   return (neuron0x3439420()*-0.729318);
}

double NNfunction_uLg::synapse0x3450dd0() {
   return (neuron0x3445f70()*-0.781843);
}

double NNfunction_uLg::synapse0x3451760() {
   return (neuron0x3446940()*-0.862109);
}

double NNfunction_uLg::synapse0x34517a0() {
   return (neuron0x3447310()*-1.36203);
}

double NNfunction_uLg::synapse0x3452130() {
   return (neuron0x3447ce0()*-0.137626);
}

double NNfunction_uLg::synapse0x3452170() {
   return (neuron0x34486b0()*-0.554052);
}

double NNfunction_uLg::synapse0x342e020() {
   return (neuron0x3449080()*-0.177745);
}

double NNfunction_uLg::synapse0x342e060() {
   return (neuron0x3449a50()*-0.672256);
}

double NNfunction_uLg::synapse0x34418d0() {
   return (neuron0x344a420()*-0.571224);
}

double NNfunction_uLg::synapse0x3441910() {
   return (neuron0x344b000()*-0.85807);
}

double NNfunction_uLg::synapse0x3452850() {
   return (neuron0x344b9d0()*-0.0052148);
}

double NNfunction_uLg::synapse0x3452890() {
   return (neuron0x343c850()*-0.546058);
}

double NNfunction_uLg::synapse0x34528d0() {
   return (neuron0x343d220()*-0.0341539);
}

double NNfunction_uLg::synapse0x3452910() {
   return (neuron0x343dbf0()*-0.142149);
}

double NNfunction_uLg::synapse0x34597c0() {
   return (neuron0x3450230()*-0.76078);
}

double NNfunction_uLg::synapse0x3459800() {
   return (neuron0x3450ae0()*-1.16656);
}

double NNfunction_uLg::synapse0x3459840() {
   return (neuron0x34514b0()*-1.21226);
}

double NNfunction_uLg::synapse0x3459880() {
   return (neuron0x3451e80()*-0.543561);
}

double NNfunction_uLg::synapse0x3459c00() {
   return (neuron0x342de00()*-0.0156189);
}

double NNfunction_uLg::synapse0x3459c40() {
   return (neuron0x342e750()*0.00983391);
}

double NNfunction_uLg::synapse0x3459c80() {
   return (neuron0x342f230()*-0.397099);
}

double NNfunction_uLg::synapse0x3459cc0() {
   return (neuron0x342ecd0()*-0.269844);
}

double NNfunction_uLg::synapse0x3459d00() {
   return (neuron0x3430010()*1.27061);
}

double NNfunction_uLg::synapse0x3459d40() {
   return (neuron0x34309e0()*1.14336);
}

double NNfunction_uLg::synapse0x3459d80() {
   return (neuron0x34317b0()*0.441199);
}

double NNfunction_uLg::synapse0x3459dc0() {
   return (neuron0x3432180()*0.00126796);
}

double NNfunction_uLg::synapse0x3459e00() {
   return (neuron0x3432b50()*0.135788);
}

double NNfunction_uLg::synapse0x3459e40() {
   return (neuron0x3433630()*0.0661112);
}

double NNfunction_uLg::synapse0x3459e80() {
   return (neuron0x3434000()*-0.0203231);
}

double NNfunction_uLg::synapse0x3459ec0() {
   return (neuron0x34310e0()*-0.0227312);
}

double NNfunction_uLg::synapse0x3459f00() {
   return (neuron0x3435bb0()*1.30394);
}

double NNfunction_uLg::synapse0x3459f40() {
   return (neuron0x3436580()*0.0168101);
}

double NNfunction_uLg::synapse0x3459f80() {
   return (neuron0x3436f50()*-0.0120451);
}

double NNfunction_uLg::synapse0x3459fc0() {
   return (neuron0x3437920()*-0.0150691);
}

double NNfunction_uLg::synapse0x3459a50() {
   return (neuron0x3439730()*-0.0161246);
}

double NNfunction_uLg::synapse0x3459a90() {
   return (neuron0x3439a10()*0.0397493);
}

double NNfunction_uLg::synapse0x345a110() {
   return (neuron0x343a3e0()*0.746266);
}

double NNfunction_uLg::synapse0x345a150() {
   return (neuron0x343adb0()*-0.0771373);
}

double NNfunction_uLg::synapse0x345a190() {
   return (neuron0x343b780()*-0.0104069);
}

double NNfunction_uLg::synapse0x345a1d0() {
   return (neuron0x343c150()*0.00102902);
}

double NNfunction_uLg::synapse0x345a210() {
   return (neuron0x3434ca0()*-0.444889);
}

double NNfunction_uLg::synapse0x345a250() {
   return (neuron0x3435670()*-0.0103092);
}

double NNfunction_uLg::synapse0x345a290() {
   return (neuron0x343eee0()*-1.35978);
}

double NNfunction_uLg::synapse0x345a2d0() {
   return (neuron0x343f8b0()*0.0169328);
}

double NNfunction_uLg::synapse0x345a310() {
   return (neuron0x3440280()*1.70139);
}

double NNfunction_uLg::synapse0x345a350() {
   return (neuron0x3440c50()*0.391111);
}

double NNfunction_uLg::synapse0x345a390() {
   return (neuron0x3441620()*-0.265273);
}

double NNfunction_uLg::synapse0x345a3d0() {
   return (neuron0x3441ff0()*-0.0999396);
}

double NNfunction_uLg::synapse0x345a410() {
   return (neuron0x34429c0()*-0.0553617);
}

double NNfunction_uLg::synapse0x345a450() {
   return (neuron0x3443390()*0.0161052);
}

double NNfunction_uLg::synapse0x345a000() {
   return (neuron0x3439420()*-0.330111);
}

double NNfunction_uLg::synapse0x345a040() {
   return (neuron0x3445f70()*0.0336692);
}

double NNfunction_uLg::synapse0x345a080() {
   return (neuron0x3446940()*-0.0637978);
}

double NNfunction_uLg::synapse0x345a0c0() {
   return (neuron0x3447310()*-0.00773364);
}

double NNfunction_uLg::synapse0x345a6a0() {
   return (neuron0x3447ce0()*-0.0945775);
}

double NNfunction_uLg::synapse0x345a6e0() {
   return (neuron0x34486b0()*-0.297312);
}

double NNfunction_uLg::synapse0x345a720() {
   return (neuron0x3449080()*-0.45867);
}

double NNfunction_uLg::synapse0x345a760() {
   return (neuron0x3449a50()*1.69244);
}

double NNfunction_uLg::synapse0x345a7a0() {
   return (neuron0x344a420()*0.0737335);
}

double NNfunction_uLg::synapse0x345a7e0() {
   return (neuron0x344b000()*0.0576594);
}

double NNfunction_uLg::synapse0x345a820() {
   return (neuron0x344b9d0()*-1.81082);
}

double NNfunction_uLg::synapse0x345a860() {
   return (neuron0x343c850()*0.0894677);
}

double NNfunction_uLg::synapse0x345a8a0() {
   return (neuron0x343d220()*0.0098083);
}

double NNfunction_uLg::synapse0x345a8e0() {
   return (neuron0x343dbf0()*-0.19469);
}

double NNfunction_uLg::synapse0x345a920() {
   return (neuron0x3450230()*0.00601808);
}

double NNfunction_uLg::synapse0x345a960() {
   return (neuron0x3450ae0()*-0.0176294);
}

double NNfunction_uLg::synapse0x345a9a0() {
   return (neuron0x34514b0()*-0.00462799);
}

double NNfunction_uLg::synapse0x345a9e0() {
   return (neuron0x3451e80()*0.00267534);
}

double NNfunction_uLg::synapse0x345ad60() {
   return (neuron0x342de00()*-0.369942);
}

double NNfunction_uLg::synapse0x345ada0() {
   return (neuron0x342e750()*0.605119);
}

double NNfunction_uLg::synapse0x345ade0() {
   return (neuron0x342f230()*-0.591401);
}

double NNfunction_uLg::synapse0x345ae20() {
   return (neuron0x342ecd0()*0.22283);
}

double NNfunction_uLg::synapse0x345ae60() {
   return (neuron0x3430010()*1.90383);
}

double NNfunction_uLg::synapse0x345aea0() {
   return (neuron0x34309e0()*0.649728);
}

double NNfunction_uLg::synapse0x345aee0() {
   return (neuron0x34317b0()*7.12213);
}

double NNfunction_uLg::synapse0x345af20() {
   return (neuron0x3432180()*-0.457399);
}

double NNfunction_uLg::synapse0x345af60() {
   return (neuron0x3432b50()*2.35874);
}

double NNfunction_uLg::synapse0x345afa0() {
   return (neuron0x3433630()*0.719616);
}

double NNfunction_uLg::synapse0x345afe0() {
   return (neuron0x3434000()*0.148613);
}

double NNfunction_uLg::synapse0x345b020() {
   return (neuron0x34310e0()*0.318897);
}

double NNfunction_uLg::synapse0x345b060() {
   return (neuron0x3435bb0()*3.4609);
}

double NNfunction_uLg::synapse0x345b0a0() {
   return (neuron0x3436580()*0.245634);
}

double NNfunction_uLg::synapse0x345b0e0() {
   return (neuron0x3436f50()*-0.620734);
}

double NNfunction_uLg::synapse0x345b120() {
   return (neuron0x3437920()*-0.883055);
}

double NNfunction_uLg::synapse0x345abb0() {
   return (neuron0x3439730()*0.368539);
}

double NNfunction_uLg::synapse0x345abf0() {
   return (neuron0x3439a10()*1.45183);
}

double NNfunction_uLg::synapse0x345b270() {
   return (neuron0x343a3e0()*0.0948454);
}

double NNfunction_uLg::synapse0x345b2b0() {
   return (neuron0x343adb0()*-2.43861);
}

double NNfunction_uLg::synapse0x345b2f0() {
   return (neuron0x343b780()*-0.889147);
}

double NNfunction_uLg::synapse0x345b330() {
   return (neuron0x343c150()*1.30899);
}

double NNfunction_uLg::synapse0x345b370() {
   return (neuron0x3434ca0()*-0.643061);
}

double NNfunction_uLg::synapse0x345b3b0() {
   return (neuron0x3435670()*-0.573179);
}

double NNfunction_uLg::synapse0x345b3f0() {
   return (neuron0x343eee0()*-0.309147);
}

double NNfunction_uLg::synapse0x345b430() {
   return (neuron0x343f8b0()*0.831003);
}

double NNfunction_uLg::synapse0x345b470() {
   return (neuron0x3440280()*0.0940845);
}

double NNfunction_uLg::synapse0x345b4b0() {
   return (neuron0x3440c50()*-2.2456);
}

double NNfunction_uLg::synapse0x345b4f0() {
   return (neuron0x3441620()*0.15223);
}

double NNfunction_uLg::synapse0x345b530() {
   return (neuron0x3441ff0()*0.591516);
}

double NNfunction_uLg::synapse0x345b570() {
   return (neuron0x34429c0()*0.0395972);
}

double NNfunction_uLg::synapse0x345b5b0() {
   return (neuron0x3443390()*0.494329);
}

double NNfunction_uLg::synapse0x345b160() {
   return (neuron0x3439420()*0.14941);
}

double NNfunction_uLg::synapse0x345b1a0() {
   return (neuron0x3445f70()*1.17366);
}

double NNfunction_uLg::synapse0x345b1e0() {
   return (neuron0x3446940()*-0.66497);
}

double NNfunction_uLg::synapse0x345b220() {
   return (neuron0x3447310()*-0.171845);
}

double NNfunction_uLg::synapse0x345b800() {
   return (neuron0x3447ce0()*0.638388);
}

double NNfunction_uLg::synapse0x345b840() {
   return (neuron0x34486b0()*-6.97899);
}

double NNfunction_uLg::synapse0x345b880() {
   return (neuron0x3449080()*-0.366043);
}

double NNfunction_uLg::synapse0x345b8c0() {
   return (neuron0x3449a50()*2.69085);
}

double NNfunction_uLg::synapse0x345b900() {
   return (neuron0x344a420()*2.83495);
}

double NNfunction_uLg::synapse0x345b940() {
   return (neuron0x344b000()*0.291541);
}

double NNfunction_uLg::synapse0x345b980() {
   return (neuron0x344b9d0()*-1.28305);
}

double NNfunction_uLg::synapse0x345b9c0() {
   return (neuron0x343c850()*2.04276);
}

double NNfunction_uLg::synapse0x345ba00() {
   return (neuron0x343d220()*0.781741);
}

double NNfunction_uLg::synapse0x345ba40() {
   return (neuron0x343dbf0()*1.3603);
}

double NNfunction_uLg::synapse0x345ba80() {
   return (neuron0x3450230()*0.584086);
}

double NNfunction_uLg::synapse0x345bac0() {
   return (neuron0x3450ae0()*-1.03384);
}

double NNfunction_uLg::synapse0x345bb00() {
   return (neuron0x34514b0()*-0.175189);
}

double NNfunction_uLg::synapse0x345bb40() {
   return (neuron0x3451e80()*0.644263);
}

double NNfunction_uLg::synapse0x345bec0() {
   return (neuron0x342de00()*-0.591828);
}

double NNfunction_uLg::synapse0x345bf00() {
   return (neuron0x342e750()*-0.562183);
}

double NNfunction_uLg::synapse0x345bf40() {
   return (neuron0x342f230()*-0.750048);
}

double NNfunction_uLg::synapse0x345bf80() {
   return (neuron0x342ecd0()*-0.243948);
}

double NNfunction_uLg::synapse0x345bfc0() {
   return (neuron0x3430010()*0.111319);
}

double NNfunction_uLg::synapse0x345c000() {
   return (neuron0x34309e0()*-0.513654);
}

double NNfunction_uLg::synapse0x345c040() {
   return (neuron0x34317b0()*-0.361654);
}

double NNfunction_uLg::synapse0x345c080() {
   return (neuron0x3432180()*-0.317461);
}

double NNfunction_uLg::synapse0x345c0c0() {
   return (neuron0x3432b50()*0.35369);
}

double NNfunction_uLg::synapse0x345c100() {
   return (neuron0x3433630()*-0.512439);
}

double NNfunction_uLg::synapse0x345c140() {
   return (neuron0x3434000()*-0.050293);
}

double NNfunction_uLg::synapse0x345c180() {
   return (neuron0x34310e0()*-0.128353);
}

double NNfunction_uLg::synapse0x345c1c0() {
   return (neuron0x3435bb0()*-0.588321);
}

double NNfunction_uLg::synapse0x345c200() {
   return (neuron0x3436580()*-0.118491);
}

double NNfunction_uLg::synapse0x345c240() {
   return (neuron0x3436f50()*-0.700051);
}

double NNfunction_uLg::synapse0x345c280() {
   return (neuron0x3437920()*-0.84938);
}

double NNfunction_uLg::synapse0x345bd10() {
   return (neuron0x3439730()*-0.490632);
}

double NNfunction_uLg::synapse0x345bd50() {
   return (neuron0x3439a10()*-0.598774);
}

double NNfunction_uLg::synapse0x345c3d0() {
   return (neuron0x343a3e0()*-0.270351);
}

double NNfunction_uLg::synapse0x345c410() {
   return (neuron0x343adb0()*-0.998921);
}

double NNfunction_uLg::synapse0x345c450() {
   return (neuron0x343b780()*-0.244423);
}

double NNfunction_uLg::synapse0x345c490() {
   return (neuron0x343c150()*-0.393728);
}

double NNfunction_uLg::synapse0x345c4d0() {
   return (neuron0x3434ca0()*-1.08384);
}

double NNfunction_uLg::synapse0x345c510() {
   return (neuron0x3435670()*-0.810794);
}

double NNfunction_uLg::synapse0x345c550() {
   return (neuron0x343eee0()*-0.929678);
}

double NNfunction_uLg::synapse0x345c590() {
   return (neuron0x343f8b0()*-0.427641);
}

double NNfunction_uLg::synapse0x345c5d0() {
   return (neuron0x3440280()*-0.67226);
}

double NNfunction_uLg::synapse0x345c610() {
   return (neuron0x3440c50()*-0.558066);
}

double NNfunction_uLg::synapse0x345c650() {
   return (neuron0x3441620()*-0.754313);
}

double NNfunction_uLg::synapse0x345c690() {
   return (neuron0x3441ff0()*-0.685005);
}

double NNfunction_uLg::synapse0x345c6d0() {
   return (neuron0x34429c0()*-0.702098);
}

double NNfunction_uLg::synapse0x345c710() {
   return (neuron0x3443390()*-0.874287);
}

double NNfunction_uLg::synapse0x345c2c0() {
   return (neuron0x3439420()*-0.82605);
}

double NNfunction_uLg::synapse0x345c300() {
   return (neuron0x3445f70()*-0.57613);
}

double NNfunction_uLg::synapse0x345c340() {
   return (neuron0x3446940()*-0.890299);
}

double NNfunction_uLg::synapse0x345c380() {
   return (neuron0x3447310()*-0.375867);
}

double NNfunction_uLg::synapse0x345c960() {
   return (neuron0x3447ce0()*-0.423142);
}

double NNfunction_uLg::synapse0x345c9a0() {
   return (neuron0x34486b0()*-0.446175);
}

double NNfunction_uLg::synapse0x345c9e0() {
   return (neuron0x3449080()*-0.212809);
}

double NNfunction_uLg::synapse0x345ca20() {
   return (neuron0x3449a50()*-0.633829);
}

double NNfunction_uLg::synapse0x345ca60() {
   return (neuron0x344a420()*-0.704903);
}

double NNfunction_uLg::synapse0x345caa0() {
   return (neuron0x344b000()*-0.40638);
}

double NNfunction_uLg::synapse0x345cae0() {
   return (neuron0x344b9d0()*-0.448443);
}

double NNfunction_uLg::synapse0x345cb20() {
   return (neuron0x343c850()*-0.544642);
}

double NNfunction_uLg::synapse0x345cb60() {
   return (neuron0x343d220()*-0.646226);
}

double NNfunction_uLg::synapse0x345cba0() {
   return (neuron0x343dbf0()*-0.0324492);
}

double NNfunction_uLg::synapse0x345cbe0() {
   return (neuron0x3450230()*-0.051922);
}

double NNfunction_uLg::synapse0x345cc20() {
   return (neuron0x3450ae0()*-0.557333);
}

double NNfunction_uLg::synapse0x345cc60() {
   return (neuron0x34514b0()*-0.1393);
}

double NNfunction_uLg::synapse0x345cca0() {
   return (neuron0x3451e80()*-0.41104);
}

double NNfunction_uLg::synapse0x345cf00() {
   return (neuron0x3459080()*-7.02561);
}

double NNfunction_uLg::synapse0x345cf40() {
   return (neuron0x3459420()*-1.01137);
}

double NNfunction_uLg::synapse0x345cf80() {
   return (neuron0x34598c0()*-7.00056);
}

double NNfunction_uLg::synapse0x345cfc0() {
   return (neuron0x345aa20()*-6.38622);
}

double NNfunction_uLg::synapse0x345d000() {
   return (neuron0x345bb80()*1.76531);
}

