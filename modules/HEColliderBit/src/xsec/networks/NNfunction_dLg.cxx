#include "NNfunction_dLg.h"
#include <cmath>

double NNfunction_dLg::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5748)/15.3268;
   input1 = (in1 - -1.19635)/1162.49;
   input2 = (in2 - 662.216)/628.555;
   input3 = (in3 - -42.167)/807.758;
   input4 = (in4 - 1064.59)/961.023;
   input5 = (in5 - 901.899)/954.726;
   input6 = (in6 - 909.826)/955.376;
   input7 = (in7 - 929.957)/935.595;
   input8 = (in8 - 929.46)/976.21;
   input9 = (in9 - 913.869)/960.442;
   input10 = (in10 - 984.241)/954.747;
   input11 = (in11 - 545.29)/601.418;
   input12 = (in12 - 732.784)/873.118;
   input13 = (in13 - 504.043)/518.556;
   input14 = (in14 - 728.758)/820.852;
   input15 = (in15 - 730.452)/822.273;
   input16 = (in16 - 542.069)/569.847;
   input17 = (in17 - 764.152)/904.197;
   input18 = (in18 - 761.019)/905.157;
   input19 = (in19 - 807.98)/879.616;
   input20 = (in20 - -3.64081)/494.245;
   input21 = (in21 - 1.35623)/1153.08;
   input22 = (in22 - 0.705442)/1202.61;
   input23 = (in23 - -203.04)/608.462;
   switch(index) {
     case 0:
         return neuron0x339ec50();
     default:
         return 0.;
   }
}

double NNfunction_dLg::Value(int index, double* input) {
   input0 = (input[0] - 23.5748)/15.3268;
   input1 = (input[1] - -1.19635)/1162.49;
   input2 = (input[2] - 662.216)/628.555;
   input3 = (input[3] - -42.167)/807.758;
   input4 = (input[4] - 1064.59)/961.023;
   input5 = (input[5] - 901.899)/954.726;
   input6 = (input[6] - 909.826)/955.376;
   input7 = (input[7] - 929.957)/935.595;
   input8 = (input[8] - 929.46)/976.21;
   input9 = (input[9] - 913.869)/960.442;
   input10 = (input[10] - 984.241)/954.747;
   input11 = (input[11] - 545.29)/601.418;
   input12 = (input[12] - 732.784)/873.118;
   input13 = (input[13] - 504.043)/518.556;
   input14 = (input[14] - 728.758)/820.852;
   input15 = (input[15] - 730.452)/822.273;
   input16 = (input[16] - 542.069)/569.847;
   input17 = (input[17] - 764.152)/904.197;
   input18 = (input[18] - 761.019)/905.157;
   input19 = (input[19] - 807.98)/879.616;
   input20 = (input[20] - -3.64081)/494.245;
   input21 = (input[21] - 1.35623)/1153.08;
   input22 = (input[22] - 0.705442)/1202.61;
   input23 = (input[23] - -203.04)/608.462;
   switch(index) {
     case 0:
         return neuron0x339ec50();
     default:
         return 0.;
   }
}

double NNfunction_dLg::neuron0x336ad40() {
   return input0;
}

double NNfunction_dLg::neuron0x336b080() {
   return input1;
}

double NNfunction_dLg::neuron0x336b3c0() {
   return input2;
}

double NNfunction_dLg::neuron0x336b700() {
   return input3;
}

double NNfunction_dLg::neuron0x336ba40() {
   return input4;
}

double NNfunction_dLg::neuron0x336bd80() {
   return input5;
}

double NNfunction_dLg::neuron0x336c0c0() {
   return input6;
}

double NNfunction_dLg::neuron0x336c400() {
   return input7;
}

double NNfunction_dLg::neuron0x336c740() {
   return input8;
}

double NNfunction_dLg::neuron0x336ca80() {
   return input9;
}

double NNfunction_dLg::neuron0x336cdc0() {
   return input10;
}

double NNfunction_dLg::neuron0x336d100() {
   return input11;
}

double NNfunction_dLg::neuron0x336d440() {
   return input12;
}

double NNfunction_dLg::neuron0x336d780() {
   return input13;
}

double NNfunction_dLg::neuron0x336dac0() {
   return input14;
}

double NNfunction_dLg::neuron0x336de00() {
   return input15;
}

double NNfunction_dLg::neuron0x336e140() {
   return input16;
}

double NNfunction_dLg::neuron0x336e6a0() {
   return input17;
}

double NNfunction_dLg::neuron0x336e8c0() {
   return input18;
}

double NNfunction_dLg::neuron0x336ec00() {
   return input19;
}

double NNfunction_dLg::neuron0x336ef40() {
   return input20;
}

double NNfunction_dLg::neuron0x336f280() {
   return input21;
}

double NNfunction_dLg::neuron0x336f5c0() {
   return input22;
}

double NNfunction_dLg::neuron0x336f900() {
   return input23;
}

double NNfunction_dLg::input0x336fd70() {
   double input = 0.274726;
   input += synapse0x336ac00();
   input += synapse0x336ac40();
   input += synapse0x3370020();
   input += synapse0x3370060();
   input += synapse0x33700a0();
   input += synapse0x33700e0();
   input += synapse0x3370120();
   input += synapse0x3370160();
   input += synapse0x33701a0();
   input += synapse0x33701e0();
   input += synapse0x3370220();
   input += synapse0x3370260();
   input += synapse0x33702a0();
   input += synapse0x33702e0();
   input += synapse0x3370320();
   input += synapse0x3370360();
   input += synapse0x336ab70();
   input += synapse0x336abb0();
   input += synapse0x311c850();
   input += synapse0x311c890();
   input += synapse0x33705c0();
   input += synapse0x3370600();
   input += synapse0x3370640();
   input += synapse0x3370680();
   return input;
}

double NNfunction_dLg::neuron0x336fd70() {
   double input = input0x336fd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x33706c0() {
   double input = 0.651926;
   input += synapse0x3370a00();
   input += synapse0x3370a40();
   input += synapse0x3370a80();
   input += synapse0x3370ac0();
   input += synapse0x3370b00();
   input += synapse0x3370b40();
   input += synapse0x3370b80();
   input += synapse0x3370bc0();
   input += synapse0x3370c00();
   input += synapse0x33704b0();
   input += synapse0x33704f0();
   input += synapse0x3370530();
   input += synapse0x3370570();
   input += synapse0x3370e50();
   input += synapse0x3370e90();
   input += synapse0x3370ed0();
   input += synapse0x3370850();
   input += synapse0x3370890();
   input += synapse0x3371020();
   input += synapse0x3371060();
   input += synapse0x33710a0();
   input += synapse0x33710e0();
   input += synapse0x3371120();
   input += synapse0x3371160();
   return input;
}

double NNfunction_dLg::neuron0x33706c0() {
   double input = input0x33706c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x33711a0() {
   double input = 0.265006;
   input += synapse0x33714e0();
   input += synapse0x3371520();
   input += synapse0x3371560();
   input += synapse0x33715a0();
   input += synapse0x33715e0();
   input += synapse0x3371620();
   input += synapse0x3371660();
   input += synapse0x33716a0();
   input += synapse0x33716e0();
   input += synapse0x3371720();
   input += synapse0x3371760();
   input += synapse0x33717a0();
   input += synapse0x33717e0();
   input += synapse0x3371820();
   input += synapse0x3371860();
   input += synapse0x33718a0();
   input += synapse0x3371330();
   input += synapse0x3371370();
   input += synapse0x311cc80();
   input += synapse0x312a340();
   input += synapse0x312a380();
   input += synapse0x3359dd0();
   input += synapse0x3359e10();
   input += synapse0x3359e50();
   return input;
}

double NNfunction_dLg::neuron0x33711a0() {
   double input = input0x33711a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3370c40() {
   double input = -0.0949278;
   input += synapse0x312abe0();
   input += synapse0x3370dd0();
   input += synapse0x3370e10();
   input += synapse0x33719f0();
   input += synapse0x3371a30();
   input += synapse0x3371a70();
   input += synapse0x3371ab0();
   input += synapse0x3371af0();
   input += synapse0x3371b30();
   input += synapse0x3371b70();
   input += synapse0x3371bb0();
   input += synapse0x3371bf0();
   input += synapse0x3371c30();
   input += synapse0x3371c70();
   input += synapse0x3371cb0();
   input += synapse0x3371cf0();
   input += synapse0x336ac80();
   input += synapse0x336acc0();
   input += synapse0x336ad00();
   input += synapse0x3371e40();
   input += synapse0x3371e80();
   input += synapse0x3371ec0();
   input += synapse0x3371f00();
   input += synapse0x3371f40();
   return input;
}

double NNfunction_dLg::neuron0x3370c40() {
   double input = input0x3370c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3371f80() {
   double input = -2.51875;
   input += synapse0x33722c0();
   input += synapse0x3372300();
   input += synapse0x3372340();
   input += synapse0x3372380();
   input += synapse0x33723c0();
   input += synapse0x3372400();
   input += synapse0x3372440();
   input += synapse0x3372480();
   input += synapse0x33724c0();
   input += synapse0x3372500();
   input += synapse0x3372540();
   input += synapse0x3372580();
   input += synapse0x33725c0();
   input += synapse0x3372600();
   input += synapse0x3372640();
   input += synapse0x3372680();
   input += synapse0x3372110();
   input += synapse0x3372150();
   input += synapse0x33727d0();
   input += synapse0x3372810();
   input += synapse0x3372850();
   input += synapse0x3372890();
   input += synapse0x33728d0();
   input += synapse0x3372910();
   return input;
}

double NNfunction_dLg::neuron0x3371f80() {
   double input = input0x3371f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3372950() {
   double input = -0.681274;
   input += synapse0x3372c90();
   input += synapse0x3372cd0();
   input += synapse0x3372d10();
   input += synapse0x3372d50();
   input += synapse0x3372d90();
   input += synapse0x3372dd0();
   input += synapse0x3372e10();
   input += synapse0x3372e50();
   input += synapse0x3372e90();
   input += synapse0x312a6b0();
   input += synapse0x312a6f0();
   input += synapse0x312a730();
   input += synapse0x312a770();
   input += synapse0x312a7b0();
   input += synapse0x312a7f0();
   input += synapse0x312a830();
   input += synapse0x3372ae0();
   input += synapse0x3372b20();
   input += synapse0x312a980();
   input += synapse0x312a9c0();
   input += synapse0x312aa00();
   input += synapse0x312aa40();
   input += synapse0x312aa80();
   input += synapse0x33736e0();
   return input;
}

double NNfunction_dLg::neuron0x3372950() {
   double input = input0x3372950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3373720() {
   double input = 3.22632;
   input += synapse0x3373a60();
   input += synapse0x3373aa0();
   input += synapse0x3373ae0();
   input += synapse0x3373b20();
   input += synapse0x3373b60();
   input += synapse0x3373ba0();
   input += synapse0x3373be0();
   input += synapse0x3373c20();
   input += synapse0x3373c60();
   input += synapse0x3373ca0();
   input += synapse0x3373ce0();
   input += synapse0x3373d20();
   input += synapse0x3373d60();
   input += synapse0x3373da0();
   input += synapse0x3373de0();
   input += synapse0x3373e20();
   input += synapse0x33738b0();
   input += synapse0x33738f0();
   input += synapse0x3373f70();
   input += synapse0x3373fb0();
   input += synapse0x3373ff0();
   input += synapse0x3374030();
   input += synapse0x3374070();
   input += synapse0x33740b0();
   return input;
}

double NNfunction_dLg::neuron0x3373720() {
   double input = input0x3373720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x33740f0() {
   double input = 0.561463;
   input += synapse0x3374430();
   input += synapse0x3374470();
   input += synapse0x33744b0();
   input += synapse0x33744f0();
   input += synapse0x3374530();
   input += synapse0x3374570();
   input += synapse0x33745b0();
   input += synapse0x33745f0();
   input += synapse0x3374630();
   input += synapse0x3374670();
   input += synapse0x33746b0();
   input += synapse0x33746f0();
   input += synapse0x3374730();
   input += synapse0x3374770();
   input += synapse0x33747b0();
   input += synapse0x33747f0();
   input += synapse0x3374280();
   input += synapse0x33742c0();
   input += synapse0x3374940();
   input += synapse0x3374980();
   input += synapse0x33749c0();
   input += synapse0x3374a00();
   input += synapse0x3374a40();
   input += synapse0x3374a80();
   return input;
}

double NNfunction_dLg::neuron0x33740f0() {
   double input = input0x33740f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3374ac0() {
   double input = -1.49606;
   input += synapse0x336e590();
   input += synapse0x336e5d0();
   input += synapse0x336e610();
   input += synapse0x336e650();
   input += synapse0x3375010();
   input += synapse0x3375050();
   input += synapse0x3375090();
   input += synapse0x33750d0();
   input += synapse0x3375110();
   input += synapse0x3375150();
   input += synapse0x3375190();
   input += synapse0x33751d0();
   input += synapse0x3375210();
   input += synapse0x3375250();
   input += synapse0x3375290();
   input += synapse0x33752d0();
   input += synapse0x3374c50();
   input += synapse0x3374c90();
   input += synapse0x3375420();
   input += synapse0x3375460();
   input += synapse0x33754a0();
   input += synapse0x33754e0();
   input += synapse0x3375520();
   input += synapse0x3375560();
   return input;
}

double NNfunction_dLg::neuron0x3374ac0() {
   double input = input0x3374ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x33755a0() {
   double input = 0.110099;
   input += synapse0x33758e0();
   input += synapse0x3375920();
   input += synapse0x3375960();
   input += synapse0x33759a0();
   input += synapse0x33759e0();
   input += synapse0x3375a20();
   input += synapse0x3375a60();
   input += synapse0x3375aa0();
   input += synapse0x3375ae0();
   input += synapse0x3375b20();
   input += synapse0x3375b60();
   input += synapse0x3375ba0();
   input += synapse0x3375be0();
   input += synapse0x3375c20();
   input += synapse0x3375c60();
   input += synapse0x3375ca0();
   input += synapse0x3375730();
   input += synapse0x3375770();
   input += synapse0x3375df0();
   input += synapse0x3375e30();
   input += synapse0x3375e70();
   input += synapse0x3375eb0();
   input += synapse0x3375ef0();
   input += synapse0x3375f30();
   return input;
}

double NNfunction_dLg::neuron0x33755a0() {
   double input = input0x33755a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3375f70() {
   double input = -0.336981;
   input += synapse0x33762b0();
   input += synapse0x33762f0();
   input += synapse0x3376330();
   input += synapse0x3376370();
   input += synapse0x33763b0();
   input += synapse0x33763f0();
   input += synapse0x3376430();
   input += synapse0x3376470();
   input += synapse0x33764b0();
   input += synapse0x33764f0();
   input += synapse0x3376530();
   input += synapse0x3376570();
   input += synapse0x33765b0();
   input += synapse0x33765f0();
   input += synapse0x3376630();
   input += synapse0x3376670();
   input += synapse0x3376100();
   input += synapse0x3376140();
   input += synapse0x3372ed0();
   input += synapse0x3372f10();
   input += synapse0x3372f50();
   input += synapse0x3372f90();
   input += synapse0x3372fd0();
   input += synapse0x3373010();
   return input;
}

double NNfunction_dLg::neuron0x3375f70() {
   double input = input0x3375f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3373050() {
   double input = 0.870398;
   input += synapse0x3373390();
   input += synapse0x33733d0();
   input += synapse0x3373410();
   input += synapse0x3373450();
   input += synapse0x3373490();
   input += synapse0x33734d0();
   input += synapse0x3373510();
   input += synapse0x3373550();
   input += synapse0x3373590();
   input += synapse0x33735d0();
   input += synapse0x3373610();
   input += synapse0x3373650();
   input += synapse0x3373690();
   input += synapse0x33777d0();
   input += synapse0x3377810();
   input += synapse0x3377850();
   input += synapse0x33731e0();
   input += synapse0x3373220();
   input += synapse0x33779a0();
   input += synapse0x33779e0();
   input += synapse0x3377a20();
   input += synapse0x3377a60();
   input += synapse0x3377aa0();
   input += synapse0x3377ae0();
   return input;
}

double NNfunction_dLg::neuron0x3373050() {
   double input = input0x3373050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3377b20() {
   double input = -2.08089;
   input += synapse0x3377e60();
   input += synapse0x3377ea0();
   input += synapse0x3377ee0();
   input += synapse0x3377f20();
   input += synapse0x3377f60();
   input += synapse0x3377fa0();
   input += synapse0x3377fe0();
   input += synapse0x3378020();
   input += synapse0x3378060();
   input += synapse0x33780a0();
   input += synapse0x33780e0();
   input += synapse0x3378120();
   input += synapse0x3378160();
   input += synapse0x33781a0();
   input += synapse0x33781e0();
   input += synapse0x3378220();
   input += synapse0x3377cb0();
   input += synapse0x3377cf0();
   input += synapse0x3378370();
   input += synapse0x33783b0();
   input += synapse0x33783f0();
   input += synapse0x3378430();
   input += synapse0x3378470();
   input += synapse0x33784b0();
   return input;
}

double NNfunction_dLg::neuron0x3377b20() {
   double input = input0x3377b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x33784f0() {
   double input = -0.551633;
   input += synapse0x3378830();
   input += synapse0x3378870();
   input += synapse0x33788b0();
   input += synapse0x33788f0();
   input += synapse0x3378930();
   input += synapse0x3378970();
   input += synapse0x33789b0();
   input += synapse0x33789f0();
   input += synapse0x3378a30();
   input += synapse0x3378a70();
   input += synapse0x3378ab0();
   input += synapse0x3378af0();
   input += synapse0x3378b30();
   input += synapse0x3378b70();
   input += synapse0x3378bb0();
   input += synapse0x3378bf0();
   input += synapse0x3378680();
   input += synapse0x33786c0();
   input += synapse0x3378d40();
   input += synapse0x3378d80();
   input += synapse0x3378dc0();
   input += synapse0x3378e00();
   input += synapse0x3378e40();
   input += synapse0x3378e80();
   return input;
}

double NNfunction_dLg::neuron0x33784f0() {
   double input = input0x33784f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3378ec0() {
   double input = -0.264989;
   input += synapse0x3379200();
   input += synapse0x3379240();
   input += synapse0x3379280();
   input += synapse0x33792c0();
   input += synapse0x3379300();
   input += synapse0x3379340();
   input += synapse0x3379380();
   input += synapse0x33793c0();
   input += synapse0x3379400();
   input += synapse0x3379440();
   input += synapse0x3379480();
   input += synapse0x33794c0();
   input += synapse0x3379500();
   input += synapse0x3379540();
   input += synapse0x3379580();
   input += synapse0x33795c0();
   input += synapse0x3379050();
   input += synapse0x3379090();
   input += synapse0x3379710();
   input += synapse0x3379750();
   input += synapse0x3379790();
   input += synapse0x33797d0();
   input += synapse0x3379810();
   input += synapse0x3379850();
   return input;
}

double NNfunction_dLg::neuron0x3378ec0() {
   double input = input0x3378ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3379890() {
   double input = -0.116816;
   input += synapse0x3379bd0();
   input += synapse0x336af60();
   input += synapse0x336afa0();
   input += synapse0x336b2a0();
   input += synapse0x336b2e0();
   input += synapse0x336b5e0();
   input += synapse0x336b620();
   input += synapse0x336b920();
   input += synapse0x336b960();
   input += synapse0x336bc60();
   input += synapse0x336bca0();
   input += synapse0x336bfa0();
   input += synapse0x336bfe0();
   input += synapse0x336c2e0();
   input += synapse0x336c320();
   input += synapse0x336c620();
   input += synapse0x336c660();
   input += synapse0x336c960();
   input += synapse0x336c9a0();
   input += synapse0x336cca0();
   input += synapse0x336cce0();
   input += synapse0x336cfe0();
   input += synapse0x336d020();
   input += synapse0x336d320();
   return input;
}

double NNfunction_dLg::neuron0x3379890() {
   double input = input0x3379890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x337b6a0() {
   double input = 0.374115;
   input += synapse0x336d360();
   input += synapse0x336e020();
   input += synapse0x336e060();
   input += synapse0x3379a20();
   input += synapse0x3379a60();
   input += synapse0x336e360();
   input += synapse0x336e3a0();
   input += synapse0x311c730();
   input += synapse0x311c770();
   input += synapse0x336eae0();
   input += synapse0x336eb20();
   input += synapse0x336ee20();
   input += synapse0x336ee60();
   input += synapse0x336f160();
   input += synapse0x336f1a0();
   input += synapse0x336f4a0();
   input += synapse0x336f4e0();
   input += synapse0x336f7e0();
   input += synapse0x336f820();
   input += synapse0x336fb20();
   input += synapse0x336fb60();
   input += synapse0x336d660();
   input += synapse0x336d6a0();
   input += synapse0x337b940();
   return input;
}

double NNfunction_dLg::neuron0x337b6a0() {
   double input = input0x337b6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x337b980() {
   double input = 0.26516;
   input += synapse0x337bcc0();
   input += synapse0x337bd00();
   input += synapse0x337bd40();
   input += synapse0x337bd80();
   input += synapse0x337bdc0();
   input += synapse0x337be00();
   input += synapse0x337be40();
   input += synapse0x337be80();
   input += synapse0x337bec0();
   input += synapse0x337bf00();
   input += synapse0x337bf40();
   input += synapse0x337bf80();
   input += synapse0x337bfc0();
   input += synapse0x337c000();
   input += synapse0x337c040();
   input += synapse0x337c080();
   input += synapse0x337bb10();
   input += synapse0x337bb50();
   input += synapse0x337c1d0();
   input += synapse0x337c210();
   input += synapse0x337c250();
   input += synapse0x337c290();
   input += synapse0x337c2d0();
   input += synapse0x337c310();
   return input;
}

double NNfunction_dLg::neuron0x337b980() {
   double input = input0x337b980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x337c350() {
   double input = -1.2702;
   input += synapse0x337c690();
   input += synapse0x337c6d0();
   input += synapse0x337c710();
   input += synapse0x337c750();
   input += synapse0x337c790();
   input += synapse0x337c7d0();
   input += synapse0x337c810();
   input += synapse0x337c850();
   input += synapse0x337c890();
   input += synapse0x337c8d0();
   input += synapse0x337c910();
   input += synapse0x337c950();
   input += synapse0x337c990();
   input += synapse0x337c9d0();
   input += synapse0x337ca10();
   input += synapse0x337ca50();
   input += synapse0x337c4e0();
   input += synapse0x337c520();
   input += synapse0x337cba0();
   input += synapse0x337cbe0();
   input += synapse0x337cc20();
   input += synapse0x337cc60();
   input += synapse0x337cca0();
   input += synapse0x337cce0();
   return input;
}

double NNfunction_dLg::neuron0x337c350() {
   double input = input0x337c350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x337cd20() {
   double input = 0.481381;
   input += synapse0x337d060();
   input += synapse0x337d0a0();
   input += synapse0x337d0e0();
   input += synapse0x337d120();
   input += synapse0x337d160();
   input += synapse0x337d1a0();
   input += synapse0x337d1e0();
   input += synapse0x337d220();
   input += synapse0x337d260();
   input += synapse0x337d2a0();
   input += synapse0x337d2e0();
   input += synapse0x337d320();
   input += synapse0x337d360();
   input += synapse0x337d3a0();
   input += synapse0x337d3e0();
   input += synapse0x337d420();
   input += synapse0x337ceb0();
   input += synapse0x337cef0();
   input += synapse0x337d570();
   input += synapse0x337d5b0();
   input += synapse0x337d5f0();
   input += synapse0x337d630();
   input += synapse0x337d670();
   input += synapse0x337d6b0();
   return input;
}

double NNfunction_dLg::neuron0x337cd20() {
   double input = input0x337cd20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x337d6f0() {
   double input = -0.10248;
   input += synapse0x337da30();
   input += synapse0x337da70();
   input += synapse0x337dab0();
   input += synapse0x337daf0();
   input += synapse0x337db30();
   input += synapse0x337db70();
   input += synapse0x337dbb0();
   input += synapse0x337dbf0();
   input += synapse0x337dc30();
   input += synapse0x337dc70();
   input += synapse0x337dcb0();
   input += synapse0x337dcf0();
   input += synapse0x337dd30();
   input += synapse0x337dd70();
   input += synapse0x337ddb0();
   input += synapse0x337ddf0();
   input += synapse0x337d880();
   input += synapse0x337d8c0();
   input += synapse0x337df40();
   input += synapse0x337df80();
   input += synapse0x337dfc0();
   input += synapse0x337e000();
   input += synapse0x337e040();
   input += synapse0x337e080();
   return input;
}

double NNfunction_dLg::neuron0x337d6f0() {
   double input = input0x337d6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x337e0c0() {
   double input = -0.119484;
   input += synapse0x337e400();
   input += synapse0x337e440();
   input += synapse0x337e480();
   input += synapse0x337e4c0();
   input += synapse0x337e500();
   input += synapse0x337e540();
   input += synapse0x337e580();
   input += synapse0x337e5c0();
   input += synapse0x337e600();
   input += synapse0x33767c0();
   input += synapse0x3376800();
   input += synapse0x3376840();
   input += synapse0x3376880();
   input += synapse0x33768c0();
   input += synapse0x3376900();
   input += synapse0x3376940();
   input += synapse0x337e250();
   input += synapse0x337e290();
   input += synapse0x3376a90();
   input += synapse0x3376ad0();
   input += synapse0x3376b10();
   input += synapse0x3376b50();
   input += synapse0x3376b90();
   input += synapse0x3376bd0();
   return input;
}

double NNfunction_dLg::neuron0x337e0c0() {
   double input = input0x337e0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3376c10() {
   double input = 1.28621;
   input += synapse0x3376f50();
   input += synapse0x3376f90();
   input += synapse0x3376fd0();
   input += synapse0x3377010();
   input += synapse0x3377050();
   input += synapse0x3377090();
   input += synapse0x33770d0();
   input += synapse0x3377110();
   input += synapse0x3377150();
   input += synapse0x3377190();
   input += synapse0x33771d0();
   input += synapse0x3377210();
   input += synapse0x3377250();
   input += synapse0x3377290();
   input += synapse0x33772d0();
   input += synapse0x3377310();
   input += synapse0x3376da0();
   input += synapse0x3376de0();
   input += synapse0x3377460();
   input += synapse0x33774a0();
   input += synapse0x33774e0();
   input += synapse0x3377520();
   input += synapse0x3377560();
   input += synapse0x33775a0();
   return input;
}

double NNfunction_dLg::neuron0x3376c10() {
   double input = input0x3376c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x33775e0() {
   double input = 0.509398;
   input += synapse0x3377770();
   input += synapse0x3380800();
   input += synapse0x3380840();
   input += synapse0x3380880();
   input += synapse0x33808c0();
   input += synapse0x3380900();
   input += synapse0x3380940();
   input += synapse0x3380980();
   input += synapse0x33809c0();
   input += synapse0x3380a00();
   input += synapse0x3380a40();
   input += synapse0x3380a80();
   input += synapse0x3380ac0();
   input += synapse0x3380b00();
   input += synapse0x3380b40();
   input += synapse0x3380b80();
   input += synapse0x3380650();
   input += synapse0x3380690();
   input += synapse0x3380cd0();
   input += synapse0x3380d10();
   input += synapse0x3380d50();
   input += synapse0x3380d90();
   input += synapse0x3380dd0();
   input += synapse0x3380e10();
   return input;
}

double NNfunction_dLg::neuron0x33775e0() {
   double input = input0x33775e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3380e50() {
   double input = 1.09507;
   input += synapse0x3381190();
   input += synapse0x33811d0();
   input += synapse0x3381210();
   input += synapse0x3381250();
   input += synapse0x3381290();
   input += synapse0x33812d0();
   input += synapse0x3381310();
   input += synapse0x3381350();
   input += synapse0x3381390();
   input += synapse0x33813d0();
   input += synapse0x3381410();
   input += synapse0x3381450();
   input += synapse0x3381490();
   input += synapse0x33814d0();
   input += synapse0x3381510();
   input += synapse0x3381550();
   input += synapse0x3380fe0();
   input += synapse0x3381020();
   input += synapse0x33816a0();
   input += synapse0x33816e0();
   input += synapse0x3381720();
   input += synapse0x3381760();
   input += synapse0x33817a0();
   input += synapse0x33817e0();
   return input;
}

double NNfunction_dLg::neuron0x3380e50() {
   double input = input0x3380e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3381820() {
   double input = -0.205842;
   input += synapse0x3381b60();
   input += synapse0x3381ba0();
   input += synapse0x3381be0();
   input += synapse0x3381c20();
   input += synapse0x3381c60();
   input += synapse0x3381ca0();
   input += synapse0x3381ce0();
   input += synapse0x3381d20();
   input += synapse0x3381d60();
   input += synapse0x3381da0();
   input += synapse0x3381de0();
   input += synapse0x3381e20();
   input += synapse0x3381e60();
   input += synapse0x3381ea0();
   input += synapse0x3381ee0();
   input += synapse0x3381f20();
   input += synapse0x33819b0();
   input += synapse0x33819f0();
   input += synapse0x3382070();
   input += synapse0x33820b0();
   input += synapse0x33820f0();
   input += synapse0x3382130();
   input += synapse0x3382170();
   input += synapse0x33821b0();
   return input;
}

double NNfunction_dLg::neuron0x3381820() {
   double input = input0x3381820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x33821f0() {
   double input = -0.370125;
   input += synapse0x3382530();
   input += synapse0x3382570();
   input += synapse0x33825b0();
   input += synapse0x33825f0();
   input += synapse0x3382630();
   input += synapse0x3382670();
   input += synapse0x33826b0();
   input += synapse0x33826f0();
   input += synapse0x3382730();
   input += synapse0x3382770();
   input += synapse0x33827b0();
   input += synapse0x33827f0();
   input += synapse0x3382830();
   input += synapse0x3382870();
   input += synapse0x33828b0();
   input += synapse0x33828f0();
   input += synapse0x3382380();
   input += synapse0x33823c0();
   input += synapse0x3382a40();
   input += synapse0x3382a80();
   input += synapse0x3382ac0();
   input += synapse0x3382b00();
   input += synapse0x3382b40();
   input += synapse0x3382b80();
   return input;
}

double NNfunction_dLg::neuron0x33821f0() {
   double input = input0x33821f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3382bc0() {
   double input = -0.247576;
   input += synapse0x3382f00();
   input += synapse0x3382f40();
   input += synapse0x3382f80();
   input += synapse0x3382fc0();
   input += synapse0x3383000();
   input += synapse0x3383040();
   input += synapse0x3383080();
   input += synapse0x33830c0();
   input += synapse0x3383100();
   input += synapse0x3383140();
   input += synapse0x3383180();
   input += synapse0x33831c0();
   input += synapse0x3383200();
   input += synapse0x3383240();
   input += synapse0x3383280();
   input += synapse0x33832c0();
   input += synapse0x3382d50();
   input += synapse0x3382d90();
   input += synapse0x3383410();
   input += synapse0x3383450();
   input += synapse0x3383490();
   input += synapse0x33834d0();
   input += synapse0x3383510();
   input += synapse0x3383550();
   return input;
}

double NNfunction_dLg::neuron0x3382bc0() {
   double input = input0x3382bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3383590() {
   double input = -0.0978743;
   input += synapse0x33838d0();
   input += synapse0x3383910();
   input += synapse0x3383950();
   input += synapse0x3383990();
   input += synapse0x33839d0();
   input += synapse0x3383a10();
   input += synapse0x3383a50();
   input += synapse0x3383a90();
   input += synapse0x3383ad0();
   input += synapse0x3383b10();
   input += synapse0x3383b50();
   input += synapse0x3383b90();
   input += synapse0x3383bd0();
   input += synapse0x3383c10();
   input += synapse0x3383c50();
   input += synapse0x3383c90();
   input += synapse0x3383720();
   input += synapse0x3383760();
   input += synapse0x3383de0();
   input += synapse0x3383e20();
   input += synapse0x3383e60();
   input += synapse0x3383ea0();
   input += synapse0x3383ee0();
   input += synapse0x3383f20();
   return input;
}

double NNfunction_dLg::neuron0x3383590() {
   double input = input0x3383590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3383f60() {
   double input = 0.643616;
   input += synapse0x33842a0();
   input += synapse0x33842e0();
   input += synapse0x3384320();
   input += synapse0x3384360();
   input += synapse0x33843a0();
   input += synapse0x33843e0();
   input += synapse0x3384420();
   input += synapse0x3384460();
   input += synapse0x33844a0();
   input += synapse0x33844e0();
   input += synapse0x3384520();
   input += synapse0x3384560();
   input += synapse0x33845a0();
   input += synapse0x33845e0();
   input += synapse0x3384620();
   input += synapse0x3384660();
   input += synapse0x33840f0();
   input += synapse0x3384130();
   input += synapse0x33847b0();
   input += synapse0x33847f0();
   input += synapse0x3384830();
   input += synapse0x3384870();
   input += synapse0x33848b0();
   input += synapse0x33848f0();
   return input;
}

double NNfunction_dLg::neuron0x3383f60() {
   double input = input0x3383f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3384930() {
   double input = 0.380795;
   input += synapse0x3384c70();
   input += synapse0x3384cb0();
   input += synapse0x3384cf0();
   input += synapse0x3384d30();
   input += synapse0x3384d70();
   input += synapse0x3384db0();
   input += synapse0x3384df0();
   input += synapse0x3384e30();
   input += synapse0x3384e70();
   input += synapse0x3384eb0();
   input += synapse0x3384ef0();
   input += synapse0x3384f30();
   input += synapse0x3384f70();
   input += synapse0x3384fb0();
   input += synapse0x3384ff0();
   input += synapse0x3385030();
   input += synapse0x3384ac0();
   input += synapse0x3384b00();
   input += synapse0x3385180();
   input += synapse0x33851c0();
   input += synapse0x3385200();
   input += synapse0x3385240();
   input += synapse0x3385280();
   input += synapse0x33852c0();
   return input;
}

double NNfunction_dLg::neuron0x3384930() {
   double input = input0x3384930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3385300() {
   double input = 0.502036;
   input += synapse0x3385640();
   input += synapse0x3379c10();
   input += synapse0x3379c50();
   input += synapse0x3379c90();
   input += synapse0x3379ee0();
   input += synapse0x3379f20();
   input += synapse0x3379f60();
   input += synapse0x337a1b0();
   input += synapse0x337a1f0();
   input += synapse0x337a440();
   input += synapse0x337a480();
   input += synapse0x337a4c0();
   input += synapse0x337a710();
   input += synapse0x337a750();
   input += synapse0x337a9a0();
   input += synapse0x337a9e0();
   input += synapse0x3385490();
   input += synapse0x33854d0();
   input += synapse0x337ab30();
   input += synapse0x337b040();
   input += synapse0x337b080();
   input += synapse0x337b0c0();
   input += synapse0x337b310();
   input += synapse0x337b350();
   return input;
}

double NNfunction_dLg::neuron0x3385300() {
   double input = input0x3385300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x337b390() {
   double input = 0.91561;
   input += synapse0x337ac00();
   input += synapse0x337ac40();
   input += synapse0x337ac80();
   input += synapse0x337acc0();
   input += synapse0x337b640();
   input += synapse0x3387990();
   input += synapse0x33879d0();
   input += synapse0x3387a10();
   input += synapse0x3387a50();
   input += synapse0x3387a90();
   input += synapse0x3387ad0();
   input += synapse0x3387b10();
   input += synapse0x3387b50();
   input += synapse0x3387b90();
   input += synapse0x3387bd0();
   input += synapse0x3387c10();
   input += synapse0x337b520();
   input += synapse0x337b560();
   input += synapse0x3387d60();
   input += synapse0x3387da0();
   input += synapse0x3387de0();
   input += synapse0x3387e20();
   input += synapse0x3387e60();
   input += synapse0x3387ea0();
   return input;
}

double NNfunction_dLg::neuron0x337b390() {
   double input = input0x337b390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3387ee0() {
   double input = 0.659435;
   input += synapse0x3388220();
   input += synapse0x3388260();
   input += synapse0x33882a0();
   input += synapse0x33882e0();
   input += synapse0x3388320();
   input += synapse0x3388360();
   input += synapse0x33883a0();
   input += synapse0x33883e0();
   input += synapse0x3388420();
   input += synapse0x3388460();
   input += synapse0x33884a0();
   input += synapse0x33884e0();
   input += synapse0x3388520();
   input += synapse0x3388560();
   input += synapse0x33885a0();
   input += synapse0x33885e0();
   input += synapse0x3388070();
   input += synapse0x33880b0();
   input += synapse0x3388730();
   input += synapse0x3388770();
   input += synapse0x33887b0();
   input += synapse0x33887f0();
   input += synapse0x3388830();
   input += synapse0x3388870();
   return input;
}

double NNfunction_dLg::neuron0x3387ee0() {
   double input = input0x3387ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x33888b0() {
   double input = 0.474833;
   input += synapse0x3388bf0();
   input += synapse0x3388c30();
   input += synapse0x3388c70();
   input += synapse0x3388cb0();
   input += synapse0x3388cf0();
   input += synapse0x3388d30();
   input += synapse0x3388d70();
   input += synapse0x3388db0();
   input += synapse0x3388df0();
   input += synapse0x3388e30();
   input += synapse0x3388e70();
   input += synapse0x3388eb0();
   input += synapse0x3388ef0();
   input += synapse0x3388f30();
   input += synapse0x3388f70();
   input += synapse0x3388fb0();
   input += synapse0x3388a40();
   input += synapse0x3388a80();
   input += synapse0x3389100();
   input += synapse0x3389140();
   input += synapse0x3389180();
   input += synapse0x33891c0();
   input += synapse0x3389200();
   input += synapse0x3389240();
   return input;
}

double NNfunction_dLg::neuron0x33888b0() {
   double input = input0x33888b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3389280() {
   double input = -0.153953;
   input += synapse0x33895c0();
   input += synapse0x3389600();
   input += synapse0x3389640();
   input += synapse0x3389680();
   input += synapse0x33896c0();
   input += synapse0x3389700();
   input += synapse0x3389740();
   input += synapse0x3389780();
   input += synapse0x33897c0();
   input += synapse0x3389800();
   input += synapse0x3389840();
   input += synapse0x3389880();
   input += synapse0x33898c0();
   input += synapse0x3389900();
   input += synapse0x3389940();
   input += synapse0x3389980();
   input += synapse0x3389410();
   input += synapse0x3389450();
   input += synapse0x3389ad0();
   input += synapse0x3389b10();
   input += synapse0x3389b50();
   input += synapse0x3389b90();
   input += synapse0x3389bd0();
   input += synapse0x3389c10();
   return input;
}

double NNfunction_dLg::neuron0x3389280() {
   double input = input0x3389280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3389c50() {
   double input = 0.38345;
   input += synapse0x3389f90();
   input += synapse0x3389fd0();
   input += synapse0x338a010();
   input += synapse0x338a050();
   input += synapse0x338a090();
   input += synapse0x338a0d0();
   input += synapse0x338a110();
   input += synapse0x338a150();
   input += synapse0x338a190();
   input += synapse0x338a1d0();
   input += synapse0x338a210();
   input += synapse0x338a250();
   input += synapse0x338a290();
   input += synapse0x338a2d0();
   input += synapse0x338a310();
   input += synapse0x338a350();
   input += synapse0x3389de0();
   input += synapse0x3389e20();
   input += synapse0x338a4a0();
   input += synapse0x338a4e0();
   input += synapse0x338a520();
   input += synapse0x338a560();
   input += synapse0x338a5a0();
   input += synapse0x338a5e0();
   return input;
}

double NNfunction_dLg::neuron0x3389c50() {
   double input = input0x3389c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x338a620() {
   double input = 0.674418;
   input += synapse0x338a960();
   input += synapse0x338a9a0();
   input += synapse0x338a9e0();
   input += synapse0x338aa20();
   input += synapse0x338aa60();
   input += synapse0x338aaa0();
   input += synapse0x338aae0();
   input += synapse0x338ab20();
   input += synapse0x338ab60();
   input += synapse0x338aba0();
   input += synapse0x338abe0();
   input += synapse0x338ac20();
   input += synapse0x338ac60();
   input += synapse0x338aca0();
   input += synapse0x338ace0();
   input += synapse0x338ad20();
   input += synapse0x338a7b0();
   input += synapse0x338a7f0();
   input += synapse0x338ae70();
   input += synapse0x338aeb0();
   input += synapse0x338aef0();
   input += synapse0x338af30();
   input += synapse0x338af70();
   input += synapse0x338afb0();
   return input;
}

double NNfunction_dLg::neuron0x338a620() {
   double input = input0x338a620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x338aff0() {
   double input = -1.52834;
   input += synapse0x338b330();
   input += synapse0x338b370();
   input += synapse0x338b3b0();
   input += synapse0x338b3f0();
   input += synapse0x338b430();
   input += synapse0x338b470();
   input += synapse0x338b4b0();
   input += synapse0x338b4f0();
   input += synapse0x338b530();
   input += synapse0x338b570();
   input += synapse0x338b5b0();
   input += synapse0x338b5f0();
   input += synapse0x338b630();
   input += synapse0x338b670();
   input += synapse0x338b6b0();
   input += synapse0x338b6f0();
   input += synapse0x338b180();
   input += synapse0x338b1c0();
   input += synapse0x338b840();
   input += synapse0x338b880();
   input += synapse0x338b8c0();
   input += synapse0x338b900();
   input += synapse0x338b940();
   input += synapse0x338b980();
   return input;
}

double NNfunction_dLg::neuron0x338aff0() {
   double input = input0x338aff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x338b9c0() {
   double input = 0.604826;
   input += synapse0x338bd00();
   input += synapse0x338bd40();
   input += synapse0x338bd80();
   input += synapse0x338bdc0();
   input += synapse0x338be00();
   input += synapse0x338be40();
   input += synapse0x338be80();
   input += synapse0x338bec0();
   input += synapse0x338bf00();
   input += synapse0x338bf40();
   input += synapse0x338bf80();
   input += synapse0x338bfc0();
   input += synapse0x338c000();
   input += synapse0x338c040();
   input += synapse0x338c080();
   input += synapse0x338c0c0();
   input += synapse0x338bb50();
   input += synapse0x338bb90();
   input += synapse0x338c210();
   input += synapse0x338c250();
   input += synapse0x338c290();
   input += synapse0x338c2d0();
   input += synapse0x338c310();
   input += synapse0x338c350();
   return input;
}

double NNfunction_dLg::neuron0x338b9c0() {
   double input = input0x338b9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x338c390() {
   double input = -0.117767;
   input += synapse0x3374e00();
   input += synapse0x3374e40();
   input += synapse0x3374e80();
   input += synapse0x3374ec0();
   input += synapse0x3374f00();
   input += synapse0x3374f40();
   input += synapse0x3374f80();
   input += synapse0x3374fc0();
   input += synapse0x338cae0();
   input += synapse0x338cb20();
   input += synapse0x338cb60();
   input += synapse0x338cba0();
   input += synapse0x338cbe0();
   input += synapse0x338cc20();
   input += synapse0x338cc60();
   input += synapse0x338cca0();
   input += synapse0x338c520();
   input += synapse0x338c560();
   input += synapse0x338cdf0();
   input += synapse0x338ce30();
   input += synapse0x338ce70();
   input += synapse0x338ceb0();
   input += synapse0x338cef0();
   input += synapse0x338cf30();
   return input;
}

double NNfunction_dLg::neuron0x338c390() {
   double input = input0x338c390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x338cf70() {
   double input = -0.50138;
   input += synapse0x338d2b0();
   input += synapse0x338d2f0();
   input += synapse0x338d330();
   input += synapse0x338d370();
   input += synapse0x338d3b0();
   input += synapse0x338d3f0();
   input += synapse0x338d430();
   input += synapse0x338d470();
   input += synapse0x338d4b0();
   input += synapse0x338d4f0();
   input += synapse0x338d530();
   input += synapse0x338d570();
   input += synapse0x338d5b0();
   input += synapse0x338d5f0();
   input += synapse0x338d630();
   input += synapse0x338d670();
   input += synapse0x338d100();
   input += synapse0x338d140();
   input += synapse0x338d7c0();
   input += synapse0x338d800();
   input += synapse0x338d840();
   input += synapse0x338d880();
   input += synapse0x338d8c0();
   input += synapse0x338d900();
   return input;
}

double NNfunction_dLg::neuron0x338cf70() {
   double input = input0x338cf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x338d940() {
   double input = 1.88903;
   input += synapse0x338dc80();
   input += synapse0x338dcc0();
   input += synapse0x338dd00();
   input += synapse0x338dd40();
   input += synapse0x338dd80();
   input += synapse0x338ddc0();
   input += synapse0x338de00();
   input += synapse0x338de40();
   input += synapse0x338de80();
   input += synapse0x338dec0();
   input += synapse0x338df00();
   input += synapse0x338df40();
   input += synapse0x338df80();
   input += synapse0x338dfc0();
   input += synapse0x338e000();
   input += synapse0x338e040();
   input += synapse0x338dad0();
   input += synapse0x338db10();
   input += synapse0x337e640();
   input += synapse0x337e680();
   input += synapse0x337e6c0();
   input += synapse0x337e700();
   input += synapse0x337e740();
   input += synapse0x337e780();
   return input;
}

double NNfunction_dLg::neuron0x338d940() {
   double input = input0x338d940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x337e7c0() {
   double input = -0.600135;
   input += synapse0x337eb00();
   input += synapse0x337eb40();
   input += synapse0x337eb80();
   input += synapse0x337ebc0();
   input += synapse0x337ec00();
   input += synapse0x337ec40();
   input += synapse0x337ec80();
   input += synapse0x337ecc0();
   input += synapse0x337ed00();
   input += synapse0x337ed40();
   input += synapse0x337ed80();
   input += synapse0x337edc0();
   input += synapse0x337ee00();
   input += synapse0x337ee40();
   input += synapse0x337ee80();
   input += synapse0x337eec0();
   input += synapse0x337e950();
   input += synapse0x337e990();
   input += synapse0x337f010();
   input += synapse0x337f050();
   input += synapse0x337f090();
   input += synapse0x337f0d0();
   input += synapse0x337f110();
   input += synapse0x337f150();
   return input;
}

double NNfunction_dLg::neuron0x337e7c0() {
   double input = input0x337e7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x337f190() {
   double input = 0.292935;
   input += synapse0x337f4d0();
   input += synapse0x337f510();
   input += synapse0x337f550();
   input += synapse0x337f590();
   input += synapse0x337f5d0();
   input += synapse0x337f610();
   input += synapse0x337f650();
   input += synapse0x337f690();
   input += synapse0x337f6d0();
   input += synapse0x337f710();
   input += synapse0x337f750();
   input += synapse0x337f790();
   input += synapse0x337f7d0();
   input += synapse0x337f810();
   input += synapse0x337f850();
   input += synapse0x337f890();
   input += synapse0x337f320();
   input += synapse0x337f360();
   input += synapse0x337f9e0();
   input += synapse0x337fa20();
   input += synapse0x337fa60();
   input += synapse0x337faa0();
   input += synapse0x337fae0();
   input += synapse0x337fb20();
   return input;
}

double NNfunction_dLg::neuron0x337f190() {
   double input = input0x337f190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x337fb60() {
   double input = -1.4746;
   input += synapse0x337fea0();
   input += synapse0x337fee0();
   input += synapse0x337ff20();
   input += synapse0x337ff60();
   input += synapse0x337ffa0();
   input += synapse0x337ffe0();
   input += synapse0x3380020();
   input += synapse0x3380060();
   input += synapse0x33800a0();
   input += synapse0x33800e0();
   input += synapse0x3380120();
   input += synapse0x3380160();
   input += synapse0x33801a0();
   input += synapse0x33801e0();
   input += synapse0x3380220();
   input += synapse0x3380260();
   input += synapse0x337fcf0();
   input += synapse0x337fd30();
   input += synapse0x33803b0();
   input += synapse0x33803f0();
   input += synapse0x3380430();
   input += synapse0x3380470();
   input += synapse0x33804b0();
   input += synapse0x33804f0();
   return input;
}

double NNfunction_dLg::neuron0x337fb60() {
   double input = input0x337fb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x33921a0() {
   double input = -0.046323;
   input += synapse0x33923c0();
   input += synapse0x3392400();
   input += synapse0x3392440();
   input += synapse0x3392480();
   input += synapse0x33924c0();
   input += synapse0x3392500();
   input += synapse0x3392540();
   input += synapse0x3392580();
   input += synapse0x33925c0();
   input += synapse0x3392600();
   input += synapse0x3392640();
   input += synapse0x3392680();
   input += synapse0x33926c0();
   input += synapse0x3392700();
   input += synapse0x3392740();
   input += synapse0x3392780();
   input += synapse0x3380530();
   input += synapse0x3380570();
   input += synapse0x33928d0();
   input += synapse0x3392910();
   input += synapse0x3392950();
   input += synapse0x3392990();
   input += synapse0x33929d0();
   input += synapse0x3392a10();
   return input;
}

double NNfunction_dLg::neuron0x33921a0() {
   double input = input0x33921a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3392a50() {
   double input = 0.120781;
   input += synapse0x3392d90();
   input += synapse0x3392dd0();
   input += synapse0x3392e10();
   input += synapse0x3392e50();
   input += synapse0x3392e90();
   input += synapse0x3392ed0();
   input += synapse0x3392f10();
   input += synapse0x3392f50();
   input += synapse0x3392f90();
   input += synapse0x3392fd0();
   input += synapse0x3393010();
   input += synapse0x3393050();
   input += synapse0x3393090();
   input += synapse0x33930d0();
   input += synapse0x3393110();
   input += synapse0x3393150();
   input += synapse0x3392be0();
   input += synapse0x3392c20();
   input += synapse0x33932a0();
   input += synapse0x33932e0();
   input += synapse0x3393320();
   input += synapse0x3393360();
   input += synapse0x33933a0();
   input += synapse0x33933e0();
   return input;
}

double NNfunction_dLg::neuron0x3392a50() {
   double input = input0x3392a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3393420() {
   double input = 0.272484;
   input += synapse0x3393760();
   input += synapse0x33937a0();
   input += synapse0x33937e0();
   input += synapse0x3393820();
   input += synapse0x3393860();
   input += synapse0x33938a0();
   input += synapse0x33938e0();
   input += synapse0x3393920();
   input += synapse0x3393960();
   input += synapse0x33939a0();
   input += synapse0x33939e0();
   input += synapse0x3393a20();
   input += synapse0x3393a60();
   input += synapse0x3393aa0();
   input += synapse0x3393ae0();
   input += synapse0x3393b20();
   input += synapse0x33935b0();
   input += synapse0x33935f0();
   input += synapse0x3393c70();
   input += synapse0x3393cb0();
   input += synapse0x3393cf0();
   input += synapse0x3393d30();
   input += synapse0x3393d70();
   input += synapse0x3393db0();
   return input;
}

double NNfunction_dLg::neuron0x3393420() {
   double input = input0x3393420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x3393df0() {
   double input = -0.206569;
   input += synapse0x3394130();
   input += synapse0x3394170();
   input += synapse0x33941b0();
   input += synapse0x33941f0();
   input += synapse0x3394230();
   input += synapse0x3394270();
   input += synapse0x33942b0();
   input += synapse0x33942f0();
   input += synapse0x3394330();
   input += synapse0x3394370();
   input += synapse0x33943b0();
   input += synapse0x33943f0();
   input += synapse0x3394430();
   input += synapse0x3394470();
   input += synapse0x33944b0();
   input += synapse0x33944f0();
   input += synapse0x3393f80();
   input += synapse0x3393fc0();
   input += synapse0x3394640();
   input += synapse0x3394680();
   input += synapse0x33946c0();
   input += synapse0x3394700();
   input += synapse0x3394740();
   input += synapse0x3394780();
   return input;
}

double NNfunction_dLg::neuron0x3393df0() {
   double input = input0x3393df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x339aff0() {
   double input = -0.635333;
   input += synapse0x312ab50();
   input += synapse0x312ab90();
   input += synapse0x3372230();
   input += synapse0x3372270();
   input += synapse0x3372c00();
   input += synapse0x3372c40();
   input += synapse0x33739d0();
   input += synapse0x3373a10();
   input += synapse0x33743a0();
   input += synapse0x33743e0();
   input += synapse0x3374d70();
   input += synapse0x3374db0();
   input += synapse0x3375850();
   input += synapse0x3375890();
   input += synapse0x3376220();
   input += synapse0x3376260();
   input += synapse0x3373300();
   input += synapse0x3373340();
   input += synapse0x3377dd0();
   input += synapse0x3377e10();
   input += synapse0x33787a0();
   input += synapse0x33787e0();
   input += synapse0x3379170();
   input += synapse0x33791b0();
   input += synapse0x3379b40();
   input += synapse0x3379b80();
   input += synapse0x336dce0();
   input += synapse0x336dd20();
   input += synapse0x337bc30();
   input += synapse0x337bc70();
   input += synapse0x337c600();
   input += synapse0x337c640();
   input += synapse0x337cfd0();
   input += synapse0x337d010();
   input += synapse0x337d9a0();
   input += synapse0x337d9e0();
   input += synapse0x337e370();
   input += synapse0x337e3b0();
   input += synapse0x3376ec0();
   input += synapse0x3376f00();
   input += synapse0x3380770();
   input += synapse0x33807b0();
   input += synapse0x3381100();
   input += synapse0x3381140();
   input += synapse0x3381ad0();
   input += synapse0x3381b10();
   input += synapse0x33824a0();
   input += synapse0x33824e0();
   input += synapse0x3382e70();
   input += synapse0x3382eb0();
   return input;
}

double NNfunction_dLg::neuron0x339aff0() {
   double input = input0x339aff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x339b390() {
   double input = -1.00367;
   input += synapse0x33855b0();
   input += synapse0x33855f0();
   input += synapse0x337ab70();
   input += synapse0x337abb0();
   input += synapse0x3388190();
   input += synapse0x33881d0();
   input += synapse0x3388b60();
   input += synapse0x3388ba0();
   input += synapse0x3389530();
   input += synapse0x3389570();
   input += synapse0x3389f00();
   input += synapse0x3389f40();
   input += synapse0x338a8d0();
   input += synapse0x338a910();
   input += synapse0x338b2a0();
   input += synapse0x338b2e0();
   input += synapse0x338bc70();
   input += synapse0x338bcb0();
   input += synapse0x338c640();
   input += synapse0x338c680();
   input += synapse0x338d220();
   input += synapse0x338d260();
   input += synapse0x338dbf0();
   input += synapse0x338dc30();
   input += synapse0x337ea70();
   input += synapse0x337eab0();
   input += synapse0x337f440();
   input += synapse0x337f480();
   input += synapse0x337fe10();
   input += synapse0x337fe50();
   input += synapse0x3392330();
   input += synapse0x3392370();
   input += synapse0x3392d00();
   input += synapse0x3392d40();
   input += synapse0x33936d0();
   input += synapse0x3393710();
   input += synapse0x33940a0();
   input += synapse0x33940e0();
   input += synapse0x336ff90();
   input += synapse0x336ffd0();
   input += synapse0x3383840();
   input += synapse0x3383880();
   input += synapse0x33947c0();
   input += synapse0x3394800();
   input += synapse0x3394840();
   input += synapse0x3394880();
   input += synapse0x339b730();
   input += synapse0x339b770();
   input += synapse0x339b7b0();
   input += synapse0x339b7f0();
   return input;
}

double NNfunction_dLg::neuron0x339b390() {
   double input = input0x339b390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x339b830() {
   double input = -0.795383;
   input += synapse0x339bb70();
   input += synapse0x339bbb0();
   input += synapse0x339bbf0();
   input += synapse0x339bc30();
   input += synapse0x339bc70();
   input += synapse0x339bcb0();
   input += synapse0x339bcf0();
   input += synapse0x339bd30();
   input += synapse0x339bd70();
   input += synapse0x339bdb0();
   input += synapse0x339bdf0();
   input += synapse0x339be30();
   input += synapse0x339be70();
   input += synapse0x339beb0();
   input += synapse0x339bef0();
   input += synapse0x339bf30();
   input += synapse0x339b9c0();
   input += synapse0x339ba00();
   input += synapse0x339c080();
   input += synapse0x339c0c0();
   input += synapse0x339c100();
   input += synapse0x339c140();
   input += synapse0x339c180();
   input += synapse0x339c1c0();
   input += synapse0x339c200();
   input += synapse0x339c240();
   input += synapse0x339c280();
   input += synapse0x339c2c0();
   input += synapse0x339c300();
   input += synapse0x339c340();
   input += synapse0x339c380();
   input += synapse0x339c3c0();
   input += synapse0x339bf70();
   input += synapse0x339bfb0();
   input += synapse0x339bff0();
   input += synapse0x339c030();
   input += synapse0x339c610();
   input += synapse0x339c650();
   input += synapse0x339c690();
   input += synapse0x339c6d0();
   input += synapse0x339c710();
   input += synapse0x339c750();
   input += synapse0x339c790();
   input += synapse0x339c7d0();
   input += synapse0x339c810();
   input += synapse0x339c850();
   input += synapse0x339c890();
   input += synapse0x339c8d0();
   input += synapse0x339c910();
   input += synapse0x339c950();
   return input;
}

double NNfunction_dLg::neuron0x339b830() {
   double input = input0x339b830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x339c990() {
   double input = -0.92759;
   input += synapse0x339ccd0();
   input += synapse0x339cd10();
   input += synapse0x339cd50();
   input += synapse0x339cd90();
   input += synapse0x339cdd0();
   input += synapse0x339ce10();
   input += synapse0x339ce50();
   input += synapse0x339ce90();
   input += synapse0x339ced0();
   input += synapse0x339cf10();
   input += synapse0x339cf50();
   input += synapse0x339cf90();
   input += synapse0x339cfd0();
   input += synapse0x339d010();
   input += synapse0x339d050();
   input += synapse0x339d090();
   input += synapse0x339cb20();
   input += synapse0x339cb60();
   input += synapse0x339d1e0();
   input += synapse0x339d220();
   input += synapse0x339d260();
   input += synapse0x339d2a0();
   input += synapse0x339d2e0();
   input += synapse0x339d320();
   input += synapse0x339d360();
   input += synapse0x339d3a0();
   input += synapse0x339d3e0();
   input += synapse0x339d420();
   input += synapse0x339d460();
   input += synapse0x339d4a0();
   input += synapse0x339d4e0();
   input += synapse0x339d520();
   input += synapse0x339d0d0();
   input += synapse0x339d110();
   input += synapse0x339d150();
   input += synapse0x339d190();
   input += synapse0x339d770();
   input += synapse0x339d7b0();
   input += synapse0x339d7f0();
   input += synapse0x339d830();
   input += synapse0x339d870();
   input += synapse0x339d8b0();
   input += synapse0x339d8f0();
   input += synapse0x339d930();
   input += synapse0x339d970();
   input += synapse0x339d9b0();
   input += synapse0x339d9f0();
   input += synapse0x339da30();
   input += synapse0x339da70();
   input += synapse0x339dab0();
   return input;
}

double NNfunction_dLg::neuron0x339c990() {
   double input = input0x339c990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x339daf0() {
   double input = -0.49438;
   input += synapse0x339de30();
   input += synapse0x339de70();
   input += synapse0x339deb0();
   input += synapse0x339def0();
   input += synapse0x339df30();
   input += synapse0x339df70();
   input += synapse0x339dfb0();
   input += synapse0x339dff0();
   input += synapse0x339e030();
   input += synapse0x339e070();
   input += synapse0x339e0b0();
   input += synapse0x339e0f0();
   input += synapse0x339e130();
   input += synapse0x339e170();
   input += synapse0x339e1b0();
   input += synapse0x339e1f0();
   input += synapse0x339dc80();
   input += synapse0x339dcc0();
   input += synapse0x339e340();
   input += synapse0x339e380();
   input += synapse0x339e3c0();
   input += synapse0x339e400();
   input += synapse0x339e440();
   input += synapse0x339e480();
   input += synapse0x339e4c0();
   input += synapse0x339e500();
   input += synapse0x339e540();
   input += synapse0x339e580();
   input += synapse0x339e5c0();
   input += synapse0x339e600();
   input += synapse0x339e640();
   input += synapse0x339e680();
   input += synapse0x339e230();
   input += synapse0x339e270();
   input += synapse0x339e2b0();
   input += synapse0x339e2f0();
   input += synapse0x339e8d0();
   input += synapse0x339e910();
   input += synapse0x339e950();
   input += synapse0x339e990();
   input += synapse0x339e9d0();
   input += synapse0x339ea10();
   input += synapse0x339ea50();
   input += synapse0x339ea90();
   input += synapse0x339ead0();
   input += synapse0x339eb10();
   input += synapse0x339eb50();
   input += synapse0x339eb90();
   input += synapse0x339ebd0();
   input += synapse0x339ec10();
   return input;
}

double NNfunction_dLg::neuron0x339daf0() {
   double input = input0x339daf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_dLg::input0x339ec50() {
   double input = 10.2352;
   input += synapse0x339ee70();
   input += synapse0x339eeb0();
   input += synapse0x339eef0();
   input += synapse0x339ef30();
   input += synapse0x339ef70();
   return input;
}

double NNfunction_dLg::neuron0x339ec50() {
   double input = input0x339ec50();
   return (input * 1)+0;
}

double NNfunction_dLg::synapse0x336ac00() {
   return (neuron0x336ad40()*0.400754);
}

double NNfunction_dLg::synapse0x336ac40() {
   return (neuron0x336b080()*0.141143);
}

double NNfunction_dLg::synapse0x3370020() {
   return (neuron0x336b3c0()*-0.354581);
}

double NNfunction_dLg::synapse0x3370060() {
   return (neuron0x336b700()*0.0831854);
}

double NNfunction_dLg::synapse0x33700a0() {
   return (neuron0x336ba40()*-0.298559);
}

double NNfunction_dLg::synapse0x33700e0() {
   return (neuron0x336bd80()*-0.1355);
}

double NNfunction_dLg::synapse0x3370120() {
   return (neuron0x336c0c0()*-0.484305);
}

double NNfunction_dLg::synapse0x3370160() {
   return (neuron0x336c400()*-0.345608);
}

double NNfunction_dLg::synapse0x33701a0() {
   return (neuron0x336c740()*0.0771814);
}

double NNfunction_dLg::synapse0x33701e0() {
   return (neuron0x336ca80()*0.0440402);
}

double NNfunction_dLg::synapse0x3370220() {
   return (neuron0x336cdc0()*-0.490599);
}

double NNfunction_dLg::synapse0x3370260() {
   return (neuron0x336d100()*-0.35839);
}

double NNfunction_dLg::synapse0x33702a0() {
   return (neuron0x336d440()*0.313564);
}

double NNfunction_dLg::synapse0x33702e0() {
   return (neuron0x336d780()*-0.271169);
}

double NNfunction_dLg::synapse0x3370320() {
   return (neuron0x336dac0()*0.173632);
}

double NNfunction_dLg::synapse0x3370360() {
   return (neuron0x336de00()*0.284004);
}

double NNfunction_dLg::synapse0x336ab70() {
   return (neuron0x336e140()*0.105131);
}

double NNfunction_dLg::synapse0x336abb0() {
   return (neuron0x336e6a0()*-0.125495);
}

double NNfunction_dLg::synapse0x311c850() {
   return (neuron0x336e8c0()*-0.185699);
}

double NNfunction_dLg::synapse0x311c890() {
   return (neuron0x336ec00()*0.266808);
}

double NNfunction_dLg::synapse0x33705c0() {
   return (neuron0x336ef40()*-0.0673245);
}

double NNfunction_dLg::synapse0x3370600() {
   return (neuron0x336f280()*-0.397731);
}

double NNfunction_dLg::synapse0x3370640() {
   return (neuron0x336f5c0()*-0.403765);
}

double NNfunction_dLg::synapse0x3370680() {
   return (neuron0x336f900()*0.0935966);
}

double NNfunction_dLg::synapse0x3370a00() {
   return (neuron0x336ad40()*-0.141024);
}

double NNfunction_dLg::synapse0x3370a40() {
   return (neuron0x336b080()*-0.0957976);
}

double NNfunction_dLg::synapse0x3370a80() {
   return (neuron0x336b3c0()*-0.0210699);
}

double NNfunction_dLg::synapse0x3370ac0() {
   return (neuron0x336b700()*0.620954);
}

double NNfunction_dLg::synapse0x3370b00() {
   return (neuron0x336ba40()*-0.0970816);
}

double NNfunction_dLg::synapse0x3370b40() {
   return (neuron0x336bd80()*0.133532);
}

double NNfunction_dLg::synapse0x3370b80() {
   return (neuron0x336c0c0()*-0.103494);
}

double NNfunction_dLg::synapse0x3370bc0() {
   return (neuron0x336c400()*-0.137809);
}

double NNfunction_dLg::synapse0x3370c00() {
   return (neuron0x336c740()*-0.0665187);
}

double NNfunction_dLg::synapse0x33704b0() {
   return (neuron0x336ca80()*-0.0801763);
}

double NNfunction_dLg::synapse0x33704f0() {
   return (neuron0x336cdc0()*0.106274);
}

double NNfunction_dLg::synapse0x3370530() {
   return (neuron0x336d100()*-0.359152);
}

double NNfunction_dLg::synapse0x3370570() {
   return (neuron0x336d440()*-0.315514);
}

double NNfunction_dLg::synapse0x3370e50() {
   return (neuron0x336d780()*-0.118005);
}

double NNfunction_dLg::synapse0x3370e90() {
   return (neuron0x336dac0()*-0.0393458);
}

double NNfunction_dLg::synapse0x3370ed0() {
   return (neuron0x336de00()*0.319697);
}

double NNfunction_dLg::synapse0x3370850() {
   return (neuron0x336e140()*-0.066682);
}

double NNfunction_dLg::synapse0x3370890() {
   return (neuron0x336e6a0()*-0.18932);
}

double NNfunction_dLg::synapse0x3371020() {
   return (neuron0x336e8c0()*-0.158445);
}

double NNfunction_dLg::synapse0x3371060() {
   return (neuron0x336ec00()*0.675568);
}

double NNfunction_dLg::synapse0x33710a0() {
   return (neuron0x336ef40()*0.0264236);
}

double NNfunction_dLg::synapse0x33710e0() {
   return (neuron0x336f280()*0.0783725);
}

double NNfunction_dLg::synapse0x3371120() {
   return (neuron0x336f5c0()*-0.0199335);
}

double NNfunction_dLg::synapse0x3371160() {
   return (neuron0x336f900()*-0.017627);
}

double NNfunction_dLg::synapse0x33714e0() {
   return (neuron0x336ad40()*0.0739256);
}

double NNfunction_dLg::synapse0x3371520() {
   return (neuron0x336b080()*-0.114411);
}

double NNfunction_dLg::synapse0x3371560() {
   return (neuron0x336b3c0()*-0.10169);
}

double NNfunction_dLg::synapse0x33715a0() {
   return (neuron0x336b700()*-0.771653);
}

double NNfunction_dLg::synapse0x33715e0() {
   return (neuron0x336ba40()*0.145349);
}

double NNfunction_dLg::synapse0x3371620() {
   return (neuron0x336bd80()*-0.174821);
}

double NNfunction_dLg::synapse0x3371660() {
   return (neuron0x336c0c0()*-0.0304868);
}

double NNfunction_dLg::synapse0x33716a0() {
   return (neuron0x336c400()*0.0990662);
}

double NNfunction_dLg::synapse0x33716e0() {
   return (neuron0x336c740()*0.21753);
}

double NNfunction_dLg::synapse0x3371720() {
   return (neuron0x336ca80()*-0.111391);
}

double NNfunction_dLg::synapse0x3371760() {
   return (neuron0x336cdc0()*0.030966);
}

double NNfunction_dLg::synapse0x33717a0() {
   return (neuron0x336d100()*-0.13992);
}

double NNfunction_dLg::synapse0x33717e0() {
   return (neuron0x336d440()*0.301105);
}

double NNfunction_dLg::synapse0x3371820() {
   return (neuron0x336d780()*0.121388);
}

double NNfunction_dLg::synapse0x3371860() {
   return (neuron0x336dac0()*-0.218972);
}

double NNfunction_dLg::synapse0x33718a0() {
   return (neuron0x336de00()*-0.382499);
}

double NNfunction_dLg::synapse0x3371330() {
   return (neuron0x336e140()*-0.173936);
}

double NNfunction_dLg::synapse0x3371370() {
   return (neuron0x336e6a0()*0.0306335);
}

double NNfunction_dLg::synapse0x311cc80() {
   return (neuron0x336e8c0()*-0.374145);
}

double NNfunction_dLg::synapse0x312a340() {
   return (neuron0x336ec00()*0.171704);
}

double NNfunction_dLg::synapse0x312a380() {
   return (neuron0x336ef40()*0.00523643);
}

double NNfunction_dLg::synapse0x3359dd0() {
   return (neuron0x336f280()*0.122169);
}

double NNfunction_dLg::synapse0x3359e10() {
   return (neuron0x336f5c0()*-0.091113);
}

double NNfunction_dLg::synapse0x3359e50() {
   return (neuron0x336f900()*-0.0418799);
}

double NNfunction_dLg::synapse0x312abe0() {
   return (neuron0x336ad40()*0.261651);
}

double NNfunction_dLg::synapse0x3370dd0() {
   return (neuron0x336b080()*-0.0460316);
}

double NNfunction_dLg::synapse0x3370e10() {
   return (neuron0x336b3c0()*-0.0808072);
}

double NNfunction_dLg::synapse0x33719f0() {
   return (neuron0x336b700()*0.30461);
}

double NNfunction_dLg::synapse0x3371a30() {
   return (neuron0x336ba40()*-0.252269);
}

double NNfunction_dLg::synapse0x3371a70() {
   return (neuron0x336bd80()*0.11776);
}

double NNfunction_dLg::synapse0x3371ab0() {
   return (neuron0x336c0c0()*-0.091102);
}

double NNfunction_dLg::synapse0x3371af0() {
   return (neuron0x336c400()*-0.204932);
}

double NNfunction_dLg::synapse0x3371b30() {
   return (neuron0x336c740()*0.0329654);
}

double NNfunction_dLg::synapse0x3371b70() {
   return (neuron0x336ca80()*0.451932);
}

double NNfunction_dLg::synapse0x3371bb0() {
   return (neuron0x336cdc0()*0.198458);
}

double NNfunction_dLg::synapse0x3371bf0() {
   return (neuron0x336d100()*-0.285413);
}

double NNfunction_dLg::synapse0x3371c30() {
   return (neuron0x336d440()*0.28643);
}

double NNfunction_dLg::synapse0x3371c70() {
   return (neuron0x336d780()*0.112952);
}

double NNfunction_dLg::synapse0x3371cb0() {
   return (neuron0x336dac0()*-0.189761);
}

double NNfunction_dLg::synapse0x3371cf0() {
   return (neuron0x336de00()*-0.152727);
}

double NNfunction_dLg::synapse0x336ac80() {
   return (neuron0x336e140()*0.0800105);
}

double NNfunction_dLg::synapse0x336acc0() {
   return (neuron0x336e6a0()*-0.180685);
}

double NNfunction_dLg::synapse0x336ad00() {
   return (neuron0x336e8c0()*-0.12483);
}

double NNfunction_dLg::synapse0x3371e40() {
   return (neuron0x336ec00()*0.216076);
}

double NNfunction_dLg::synapse0x3371e80() {
   return (neuron0x336ef40()*0.0953396);
}

double NNfunction_dLg::synapse0x3371ec0() {
   return (neuron0x336f280()*-0.221329);
}

double NNfunction_dLg::synapse0x3371f00() {
   return (neuron0x336f5c0()*0.0860607);
}

double NNfunction_dLg::synapse0x3371f40() {
   return (neuron0x336f900()*0.142135);
}

double NNfunction_dLg::synapse0x33722c0() {
   return (neuron0x336ad40()*0.0025449);
}

double NNfunction_dLg::synapse0x3372300() {
   return (neuron0x336b080()*-0.000562001);
}

double NNfunction_dLg::synapse0x3372340() {
   return (neuron0x336b3c0()*0.0374837);
}

double NNfunction_dLg::synapse0x3372380() {
   return (neuron0x336b700()*-0.233773);
}

double NNfunction_dLg::synapse0x33723c0() {
   return (neuron0x336ba40()*-0.00108127);
}

double NNfunction_dLg::synapse0x3372400() {
   return (neuron0x336bd80()*0.00039117);
}

double NNfunction_dLg::synapse0x3372440() {
   return (neuron0x336c0c0()*0.0028687);
}

double NNfunction_dLg::synapse0x3372480() {
   return (neuron0x336c400()*0.000911398);
}

double NNfunction_dLg::synapse0x33724c0() {
   return (neuron0x336c740()*-0.00183298);
}

double NNfunction_dLg::synapse0x3372500() {
   return (neuron0x336ca80()*0.00098573);
}

double NNfunction_dLg::synapse0x3372540() {
   return (neuron0x336cdc0()*-0.00680424);
}

double NNfunction_dLg::synapse0x3372580() {
   return (neuron0x336d100()*0.787099);
}

double NNfunction_dLg::synapse0x33725c0() {
   return (neuron0x336d440()*-0.0161226);
}

double NNfunction_dLg::synapse0x3372600() {
   return (neuron0x336d780()*-0.00283855);
}

double NNfunction_dLg::synapse0x3372640() {
   return (neuron0x336dac0()*-0.00453575);
}

double NNfunction_dLg::synapse0x3372680() {
   return (neuron0x336de00()*-0.000549261);
}

double NNfunction_dLg::synapse0x3372110() {
   return (neuron0x336e140()*0.00584947);
}

double NNfunction_dLg::synapse0x3372150() {
   return (neuron0x336e6a0()*-0.0155973);
}

double NNfunction_dLg::synapse0x33727d0() {
   return (neuron0x336e8c0()*-0.0108707);
}

double NNfunction_dLg::synapse0x3372810() {
   return (neuron0x336ec00()*-0.00197297);
}

double NNfunction_dLg::synapse0x3372850() {
   return (neuron0x336ef40()*-0.00136989);
}

double NNfunction_dLg::synapse0x3372890() {
   return (neuron0x336f280()*-0.0036363);
}

double NNfunction_dLg::synapse0x33728d0() {
   return (neuron0x336f5c0()*0.00326333);
}

double NNfunction_dLg::synapse0x3372910() {
   return (neuron0x336f900()*-0.00229668);
}

double NNfunction_dLg::synapse0x3372c90() {
   return (neuron0x336ad40()*-0.00717964);
}

double NNfunction_dLg::synapse0x3372cd0() {
   return (neuron0x336b080()*0.00661243);
}

double NNfunction_dLg::synapse0x3372d10() {
   return (neuron0x336b3c0()*-0.110557);
}

double NNfunction_dLg::synapse0x3372d50() {
   return (neuron0x336b700()*0.234035);
}

double NNfunction_dLg::synapse0x3372d90() {
   return (neuron0x336ba40()*0.00106786);
}

double NNfunction_dLg::synapse0x3372dd0() {
   return (neuron0x336bd80()*-0.00705427);
}

double NNfunction_dLg::synapse0x3372e10() {
   return (neuron0x336c0c0()*0.00185917);
}

double NNfunction_dLg::synapse0x3372e50() {
   return (neuron0x336c400()*0.00474387);
}

double NNfunction_dLg::synapse0x3372e90() {
   return (neuron0x336c740()*0.0705473);
}

double NNfunction_dLg::synapse0x312a6b0() {
   return (neuron0x336ca80()*0.00866384);
}

double NNfunction_dLg::synapse0x312a6f0() {
   return (neuron0x336cdc0()*0.108258);
}

double NNfunction_dLg::synapse0x312a730() {
   return (neuron0x336d100()*0.301096);
}

double NNfunction_dLg::synapse0x312a770() {
   return (neuron0x336d440()*0.00512113);
}

double NNfunction_dLg::synapse0x312a7b0() {
   return (neuron0x336d780()*0.00667075);
}

double NNfunction_dLg::synapse0x312a7f0() {
   return (neuron0x336dac0()*-0.0297636);
}

double NNfunction_dLg::synapse0x312a830() {
   return (neuron0x336de00()*-0.0266589);
}

double NNfunction_dLg::synapse0x3372ae0() {
   return (neuron0x336e140()*-0.00411591);
}

double NNfunction_dLg::synapse0x3372b20() {
   return (neuron0x336e6a0()*-0.0152887);
}

double NNfunction_dLg::synapse0x312a980() {
   return (neuron0x336e8c0()*0.0112313);
}

double NNfunction_dLg::synapse0x312a9c0() {
   return (neuron0x336ec00()*0.00313483);
}

double NNfunction_dLg::synapse0x312aa00() {
   return (neuron0x336ef40()*0.00556048);
}

double NNfunction_dLg::synapse0x312aa40() {
   return (neuron0x336f280()*0.00249313);
}

double NNfunction_dLg::synapse0x312aa80() {
   return (neuron0x336f5c0()*-0.00154506);
}

double NNfunction_dLg::synapse0x33736e0() {
   return (neuron0x336f900()*0.00976362);
}

double NNfunction_dLg::synapse0x3373a60() {
   return (neuron0x336ad40()*0.00682025);
}

double NNfunction_dLg::synapse0x3373aa0() {
   return (neuron0x336b080()*-0.0090152);
}

double NNfunction_dLg::synapse0x3373ae0() {
   return (neuron0x336b3c0()*0.0405753);
}

double NNfunction_dLg::synapse0x3373b20() {
   return (neuron0x336b700()*-3.33305);
}

double NNfunction_dLg::synapse0x3373b60() {
   return (neuron0x336ba40()*-0.0200348);
}

double NNfunction_dLg::synapse0x3373ba0() {
   return (neuron0x336bd80()*-0.0135514);
}

double NNfunction_dLg::synapse0x3373be0() {
   return (neuron0x336c0c0()*-0.0154571);
}

double NNfunction_dLg::synapse0x3373c20() {
   return (neuron0x336c400()*-0.0209522);
}

double NNfunction_dLg::synapse0x3373c60() {
   return (neuron0x336c740()*-0.00425086);
}

double NNfunction_dLg::synapse0x3373ca0() {
   return (neuron0x336ca80()*0.0139213);
}

double NNfunction_dLg::synapse0x3373ce0() {
   return (neuron0x336cdc0()*0.0144635);
}

double NNfunction_dLg::synapse0x3373d20() {
   return (neuron0x336d100()*3.75908);
}

double NNfunction_dLg::synapse0x3373d60() {
   return (neuron0x336d440()*-0.0220329);
}

double NNfunction_dLg::synapse0x3373da0() {
   return (neuron0x336d780()*0.0488745);
}

double NNfunction_dLg::synapse0x3373de0() {
   return (neuron0x336dac0()*-0.0509461);
}

double NNfunction_dLg::synapse0x3373e20() {
   return (neuron0x336de00()*-0.0141826);
}

double NNfunction_dLg::synapse0x33738b0() {
   return (neuron0x336e140()*0.0413192);
}

double NNfunction_dLg::synapse0x33738f0() {
   return (neuron0x336e6a0()*-0.0341348);
}

double NNfunction_dLg::synapse0x3373f70() {
   return (neuron0x336e8c0()*-0.00898029);
}

double NNfunction_dLg::synapse0x3373fb0() {
   return (neuron0x336ec00()*-0.0126206);
}

double NNfunction_dLg::synapse0x3373ff0() {
   return (neuron0x336ef40()*-0.0121645);
}

double NNfunction_dLg::synapse0x3374030() {
   return (neuron0x336f280()*-0.00389098);
}

double NNfunction_dLg::synapse0x3374070() {
   return (neuron0x336f5c0()*0.00451032);
}

double NNfunction_dLg::synapse0x33740b0() {
   return (neuron0x336f900()*-0.0160014);
}

double NNfunction_dLg::synapse0x3374430() {
   return (neuron0x336ad40()*0.0155971);
}

double NNfunction_dLg::synapse0x3374470() {
   return (neuron0x336b080()*-0.00972768);
}

double NNfunction_dLg::synapse0x33744b0() {
   return (neuron0x336b3c0()*0.0258069);
}

double NNfunction_dLg::synapse0x33744f0() {
   return (neuron0x336b700()*0.993782);
}

double NNfunction_dLg::synapse0x3374530() {
   return (neuron0x336ba40()*0.0209904);
}

double NNfunction_dLg::synapse0x3374570() {
   return (neuron0x336bd80()*0.0051129);
}

double NNfunction_dLg::synapse0x33745b0() {
   return (neuron0x336c0c0()*0.0212721);
}

double NNfunction_dLg::synapse0x33745f0() {
   return (neuron0x336c400()*0.021467);
}

double NNfunction_dLg::synapse0x3374630() {
   return (neuron0x336c740()*0.00324525);
}

double NNfunction_dLg::synapse0x3374670() {
   return (neuron0x336ca80()*0.011664);
}

double NNfunction_dLg::synapse0x33746b0() {
   return (neuron0x336cdc0()*-0.00297865);
}

double NNfunction_dLg::synapse0x33746f0() {
   return (neuron0x336d100()*-1.00329);
}

double NNfunction_dLg::synapse0x3374730() {
   return (neuron0x336d440()*0.1869);
}

double NNfunction_dLg::synapse0x3374770() {
   return (neuron0x336d780()*-0.073949);
}

double NNfunction_dLg::synapse0x33747b0() {
   return (neuron0x336dac0()*0.0275193);
}

double NNfunction_dLg::synapse0x33747f0() {
   return (neuron0x336de00()*0.0770007);
}

double NNfunction_dLg::synapse0x3374280() {
   return (neuron0x336e140()*-0.0646181);
}

double NNfunction_dLg::synapse0x33742c0() {
   return (neuron0x336e6a0()*0.0571762);
}

double NNfunction_dLg::synapse0x3374940() {
   return (neuron0x336e8c0()*0.109837);
}

double NNfunction_dLg::synapse0x3374980() {
   return (neuron0x336ec00()*0.00534573);
}

double NNfunction_dLg::synapse0x33749c0() {
   return (neuron0x336ef40()*0.0192065);
}

double NNfunction_dLg::synapse0x3374a00() {
   return (neuron0x336f280()*-0.00315836);
}

double NNfunction_dLg::synapse0x3374a40() {
   return (neuron0x336f5c0()*-0.00351392);
}

double NNfunction_dLg::synapse0x3374a80() {
   return (neuron0x336f900()*-0.00620572);
}

double NNfunction_dLg::synapse0x336e590() {
   return (neuron0x336ad40()*0.00153417);
}

double NNfunction_dLg::synapse0x336e5d0() {
   return (neuron0x336b080()*8.26784e-05);
}

double NNfunction_dLg::synapse0x336e610() {
   return (neuron0x336b3c0()*0.00358664);
}

double NNfunction_dLg::synapse0x336e650() {
   return (neuron0x336b700()*5.55664);
}

double NNfunction_dLg::synapse0x3375010() {
   return (neuron0x336ba40()*0.00134893);
}

double NNfunction_dLg::synapse0x3375050() {
   return (neuron0x336bd80()*-0.000140098);
}

double NNfunction_dLg::synapse0x3375090() {
   return (neuron0x336c0c0()*-0.000472937);
}

double NNfunction_dLg::synapse0x33750d0() {
   return (neuron0x336c400()*0.00105056);
}

double NNfunction_dLg::synapse0x3375110() {
   return (neuron0x336c740()*0.00150847);
}

double NNfunction_dLg::synapse0x3375150() {
   return (neuron0x336ca80()*0.000702629);
}

double NNfunction_dLg::synapse0x3375190() {
   return (neuron0x336cdc0()*-0.0027076);
}

double NNfunction_dLg::synapse0x33751d0() {
   return (neuron0x336d100()*-0.178306);
}

double NNfunction_dLg::synapse0x3375210() {
   return (neuron0x336d440()*0.00523147);
}

double NNfunction_dLg::synapse0x3375250() {
   return (neuron0x336d780()*-0.00229885);
}

double NNfunction_dLg::synapse0x3375290() {
   return (neuron0x336dac0()*0.00324955);
}

double NNfunction_dLg::synapse0x33752d0() {
   return (neuron0x336de00()*0.00550222);
}

double NNfunction_dLg::synapse0x3374c50() {
   return (neuron0x336e140()*-0.00802615);
}

double NNfunction_dLg::synapse0x3374c90() {
   return (neuron0x336e6a0()*0.00227591);
}

double NNfunction_dLg::synapse0x3375420() {
   return (neuron0x336e8c0()*0.00427996);
}

double NNfunction_dLg::synapse0x3375460() {
   return (neuron0x336ec00()*-0.00604682);
}

double NNfunction_dLg::synapse0x33754a0() {
   return (neuron0x336ef40()*-0.00470741);
}

double NNfunction_dLg::synapse0x33754e0() {
   return (neuron0x336f280()*-0.00028584);
}

double NNfunction_dLg::synapse0x3375520() {
   return (neuron0x336f5c0()*-0.000804293);
}

double NNfunction_dLg::synapse0x3375560() {
   return (neuron0x336f900()*0.002685);
}

double NNfunction_dLg::synapse0x33758e0() {
   return (neuron0x336ad40()*-0.00596476);
}

double NNfunction_dLg::synapse0x3375920() {
   return (neuron0x336b080()*0.0125246);
}

double NNfunction_dLg::synapse0x3375960() {
   return (neuron0x336b3c0()*0.207937);
}

double NNfunction_dLg::synapse0x33759a0() {
   return (neuron0x336b700()*-0.298305);
}

double NNfunction_dLg::synapse0x33759e0() {
   return (neuron0x336ba40()*0.00311446);
}

double NNfunction_dLg::synapse0x3375a20() {
   return (neuron0x336bd80()*0.0155912);
}

double NNfunction_dLg::synapse0x3375a60() {
   return (neuron0x336c0c0()*0.0117689);
}

double NNfunction_dLg::synapse0x3375aa0() {
   return (neuron0x336c400()*0.00887698);
}

double NNfunction_dLg::synapse0x3375ae0() {
   return (neuron0x336c740()*0.079917);
}

double NNfunction_dLg::synapse0x3375b20() {
   return (neuron0x336ca80()*-0.0125383);
}

double NNfunction_dLg::synapse0x3375b60() {
   return (neuron0x336cdc0()*0.100091);
}

double NNfunction_dLg::synapse0x3375ba0() {
   return (neuron0x336d100()*-0.242642);
}

double NNfunction_dLg::synapse0x3375be0() {
   return (neuron0x336d440()*-0.0384765);
}

double NNfunction_dLg::synapse0x3375c20() {
   return (neuron0x336d780()*0.0401352);
}

double NNfunction_dLg::synapse0x3375c60() {
   return (neuron0x336dac0()*0.06771);
}

double NNfunction_dLg::synapse0x3375ca0() {
   return (neuron0x336de00()*0.0596798);
}

double NNfunction_dLg::synapse0x3375730() {
   return (neuron0x336e140()*-0.00882906);
}

double NNfunction_dLg::synapse0x3375770() {
   return (neuron0x336e6a0()*0.045757);
}

double NNfunction_dLg::synapse0x3375df0() {
   return (neuron0x336e8c0()*-0.00413774);
}

double NNfunction_dLg::synapse0x3375e30() {
   return (neuron0x336ec00()*-5.67158e-05);
}

double NNfunction_dLg::synapse0x3375e70() {
   return (neuron0x336ef40()*0.00631587);
}

double NNfunction_dLg::synapse0x3375eb0() {
   return (neuron0x336f280()*-0.00207824);
}

double NNfunction_dLg::synapse0x3375ef0() {
   return (neuron0x336f5c0()*-0.00857403);
}

double NNfunction_dLg::synapse0x3375f30() {
   return (neuron0x336f900()*0.0173741);
}

double NNfunction_dLg::synapse0x33762b0() {
   return (neuron0x336ad40()*-0.295681);
}

double NNfunction_dLg::synapse0x33762f0() {
   return (neuron0x336b080()*0.417946);
}

double NNfunction_dLg::synapse0x3376330() {
   return (neuron0x336b3c0()*-0.266199);
}

double NNfunction_dLg::synapse0x3376370() {
   return (neuron0x336b700()*0.317694);
}

double NNfunction_dLg::synapse0x33763b0() {
   return (neuron0x336ba40()*-0.379752);
}

double NNfunction_dLg::synapse0x33763f0() {
   return (neuron0x336bd80()*0.457406);
}

double NNfunction_dLg::synapse0x3376430() {
   return (neuron0x336c0c0()*0.352584);
}

double NNfunction_dLg::synapse0x3376470() {
   return (neuron0x336c400()*0.227388);
}

double NNfunction_dLg::synapse0x33764b0() {
   return (neuron0x336c740()*0.0250829);
}

double NNfunction_dLg::synapse0x33764f0() {
   return (neuron0x336ca80()*-0.0235108);
}

double NNfunction_dLg::synapse0x3376530() {
   return (neuron0x336cdc0()*0.434386);
}

double NNfunction_dLg::synapse0x3376570() {
   return (neuron0x336d100()*-0.148928);
}

double NNfunction_dLg::synapse0x33765b0() {
   return (neuron0x336d440()*-0.245166);
}

double NNfunction_dLg::synapse0x33765f0() {
   return (neuron0x336d780()*-0.129949);
}

double NNfunction_dLg::synapse0x3376630() {
   return (neuron0x336dac0()*-0.259315);
}

double NNfunction_dLg::synapse0x3376670() {
   return (neuron0x336de00()*0.272331);
}

double NNfunction_dLg::synapse0x3376100() {
   return (neuron0x336e140()*-0.176691);
}

double NNfunction_dLg::synapse0x3376140() {
   return (neuron0x336e6a0()*0.452882);
}

double NNfunction_dLg::synapse0x3372ed0() {
   return (neuron0x336e8c0()*-0.25255);
}

double NNfunction_dLg::synapse0x3372f10() {
   return (neuron0x336ec00()*0.23497);
}

double NNfunction_dLg::synapse0x3372f50() {
   return (neuron0x336ef40()*0.155246);
}

double NNfunction_dLg::synapse0x3372f90() {
   return (neuron0x336f280()*0.297975);
}

double NNfunction_dLg::synapse0x3372fd0() {
   return (neuron0x336f5c0()*0.100913);
}

double NNfunction_dLg::synapse0x3373010() {
   return (neuron0x336f900()*0.221801);
}

double NNfunction_dLg::synapse0x3373390() {
   return (neuron0x336ad40()*-0.030264);
}

double NNfunction_dLg::synapse0x33733d0() {
   return (neuron0x336b080()*0.032467);
}

double NNfunction_dLg::synapse0x3373410() {
   return (neuron0x336b3c0()*0.128666);
}

double NNfunction_dLg::synapse0x3373450() {
   return (neuron0x336b700()*0.15976);
}

double NNfunction_dLg::synapse0x3373490() {
   return (neuron0x336ba40()*-0.0110466);
}

double NNfunction_dLg::synapse0x33734d0() {
   return (neuron0x336bd80()*-0.037301);
}

double NNfunction_dLg::synapse0x3373510() {
   return (neuron0x336c0c0()*-0.0198122);
}

double NNfunction_dLg::synapse0x3373550() {
   return (neuron0x336c400()*-0.0494778);
}

double NNfunction_dLg::synapse0x3373590() {
   return (neuron0x336c740()*0.00486191);
}

double NNfunction_dLg::synapse0x33735d0() {
   return (neuron0x336ca80()*0.0288112);
}

double NNfunction_dLg::synapse0x3373610() {
   return (neuron0x336cdc0()*-0.00308376);
}

double NNfunction_dLg::synapse0x3373650() {
   return (neuron0x336d100()*-0.18254);
}

double NNfunction_dLg::synapse0x3373690() {
   return (neuron0x336d440()*0.73768);
}

double NNfunction_dLg::synapse0x33777d0() {
   return (neuron0x336d780()*-0.132644);
}

double NNfunction_dLg::synapse0x3377810() {
   return (neuron0x336dac0()*0.381178);
}

double NNfunction_dLg::synapse0x3377850() {
   return (neuron0x336de00()*0.257587);
}

double NNfunction_dLg::synapse0x33731e0() {
   return (neuron0x336e140()*-0.162202);
}

double NNfunction_dLg::synapse0x3373220() {
   return (neuron0x336e6a0()*0.22929);
}

double NNfunction_dLg::synapse0x33779a0() {
   return (neuron0x336e8c0()*0.130184);
}

double NNfunction_dLg::synapse0x33779e0() {
   return (neuron0x336ec00()*0.0589925);
}

double NNfunction_dLg::synapse0x3377a20() {
   return (neuron0x336ef40()*0.000462367);
}

double NNfunction_dLg::synapse0x3377a60() {
   return (neuron0x336f280()*0.0142508);
}

double NNfunction_dLg::synapse0x3377aa0() {
   return (neuron0x336f5c0()*-0.0329072);
}

double NNfunction_dLg::synapse0x3377ae0() {
   return (neuron0x336f900()*0.0334041);
}

double NNfunction_dLg::synapse0x3377e60() {
   return (neuron0x336ad40()*0.0023915);
}

double NNfunction_dLg::synapse0x3377ea0() {
   return (neuron0x336b080()*-0.00130189);
}

double NNfunction_dLg::synapse0x3377ee0() {
   return (neuron0x336b3c0()*0.00253354);
}

double NNfunction_dLg::synapse0x3377f20() {
   return (neuron0x336b700()*2.07082);
}

double NNfunction_dLg::synapse0x3377f60() {
   return (neuron0x336ba40()*-0.000546559);
}

double NNfunction_dLg::synapse0x3377fa0() {
   return (neuron0x336bd80()*-0.00166558);
}

double NNfunction_dLg::synapse0x3377fe0() {
   return (neuron0x336c0c0()*0.00228999);
}

double NNfunction_dLg::synapse0x3378020() {
   return (neuron0x336c400()*0.00104741);
}

double NNfunction_dLg::synapse0x3378060() {
   return (neuron0x336c740()*0.00338949);
}

double NNfunction_dLg::synapse0x33780a0() {
   return (neuron0x336ca80()*0.00269113);
}

double NNfunction_dLg::synapse0x33780e0() {
   return (neuron0x336cdc0()*-0.007784);
}

double NNfunction_dLg::synapse0x3378120() {
   return (neuron0x336d100()*-0.287584);
}

double NNfunction_dLg::synapse0x3378160() {
   return (neuron0x336d440()*0.0066974);
}

double NNfunction_dLg::synapse0x33781a0() {
   return (neuron0x336d780()*0.00131592);
}

double NNfunction_dLg::synapse0x33781e0() {
   return (neuron0x336dac0()*0.0120381);
}

double NNfunction_dLg::synapse0x3378220() {
   return (neuron0x336de00()*0.00891706);
}

double NNfunction_dLg::synapse0x3377cb0() {
   return (neuron0x336e140()*-0.00468371);
}

double NNfunction_dLg::synapse0x3377cf0() {
   return (neuron0x336e6a0()*0.00768272);
}

double NNfunction_dLg::synapse0x3378370() {
   return (neuron0x336e8c0()*0.00645682);
}

double NNfunction_dLg::synapse0x33783b0() {
   return (neuron0x336ec00()*0.00211759);
}

double NNfunction_dLg::synapse0x33783f0() {
   return (neuron0x336ef40()*0.00457699);
}

double NNfunction_dLg::synapse0x3378430() {
   return (neuron0x336f280()*0.000878786);
}

double NNfunction_dLg::synapse0x3378470() {
   return (neuron0x336f5c0()*0.00075073);
}

double NNfunction_dLg::synapse0x33784b0() {
   return (neuron0x336f900()*-0.00130507);
}

double NNfunction_dLg::synapse0x3378830() {
   return (neuron0x336ad40()*-0.162012);
}

double NNfunction_dLg::synapse0x3378870() {
   return (neuron0x336b080()*-0.124544);
}

double NNfunction_dLg::synapse0x33788b0() {
   return (neuron0x336b3c0()*-0.378132);
}

double NNfunction_dLg::synapse0x33788f0() {
   return (neuron0x336b700()*0.658112);
}

double NNfunction_dLg::synapse0x3378930() {
   return (neuron0x336ba40()*0.205272);
}

double NNfunction_dLg::synapse0x3378970() {
   return (neuron0x336bd80()*-0.148367);
}

double NNfunction_dLg::synapse0x33789b0() {
   return (neuron0x336c0c0()*-0.256403);
}

double NNfunction_dLg::synapse0x33789f0() {
   return (neuron0x336c400()*-0.0854223);
}

double NNfunction_dLg::synapse0x3378a30() {
   return (neuron0x336c740()*0.0439197);
}

double NNfunction_dLg::synapse0x3378a70() {
   return (neuron0x336ca80()*0.413056);
}

double NNfunction_dLg::synapse0x3378ab0() {
   return (neuron0x336cdc0()*-0.196042);
}

double NNfunction_dLg::synapse0x3378af0() {
   return (neuron0x336d100()*0.215032);
}

double NNfunction_dLg::synapse0x3378b30() {
   return (neuron0x336d440()*-0.159467);
}

double NNfunction_dLg::synapse0x3378b70() {
   return (neuron0x336d780()*0.139443);
}

double NNfunction_dLg::synapse0x3378bb0() {
   return (neuron0x336dac0()*0.330102);
}

double NNfunction_dLg::synapse0x3378bf0() {
   return (neuron0x336de00()*-0.0479112);
}

double NNfunction_dLg::synapse0x3378680() {
   return (neuron0x336e140()*0.492731);
}

double NNfunction_dLg::synapse0x33786c0() {
   return (neuron0x336e6a0()*0.407081);
}

double NNfunction_dLg::synapse0x3378d40() {
   return (neuron0x336e8c0()*0.165164);
}

double NNfunction_dLg::synapse0x3378d80() {
   return (neuron0x336ec00()*0.397998);
}

double NNfunction_dLg::synapse0x3378dc0() {
   return (neuron0x336ef40()*-0.0458876);
}

double NNfunction_dLg::synapse0x3378e00() {
   return (neuron0x336f280()*0.033428);
}

double NNfunction_dLg::synapse0x3378e40() {
   return (neuron0x336f5c0()*-0.204702);
}

double NNfunction_dLg::synapse0x3378e80() {
   return (neuron0x336f900()*0.0263089);
}

double NNfunction_dLg::synapse0x3379200() {
   return (neuron0x336ad40()*-0.0585011);
}

double NNfunction_dLg::synapse0x3379240() {
   return (neuron0x336b080()*-0.207406);
}

double NNfunction_dLg::synapse0x3379280() {
   return (neuron0x336b3c0()*0.604994);
}

double NNfunction_dLg::synapse0x33792c0() {
   return (neuron0x336b700()*-0.811799);
}

double NNfunction_dLg::synapse0x3379300() {
   return (neuron0x336ba40()*-0.0578192);
}

double NNfunction_dLg::synapse0x3379340() {
   return (neuron0x336bd80()*-0.0043692);
}

double NNfunction_dLg::synapse0x3379380() {
   return (neuron0x336c0c0()*-0.231794);
}

double NNfunction_dLg::synapse0x33793c0() {
   return (neuron0x336c400()*-0.152302);
}

double NNfunction_dLg::synapse0x3379400() {
   return (neuron0x336c740()*-0.104904);
}

double NNfunction_dLg::synapse0x3379440() {
   return (neuron0x336ca80()*-0.0997691);
}

double NNfunction_dLg::synapse0x3379480() {
   return (neuron0x336cdc0()*-0.0450811);
}

double NNfunction_dLg::synapse0x33794c0() {
   return (neuron0x336d100()*-0.116969);
}

double NNfunction_dLg::synapse0x3379500() {
   return (neuron0x336d440()*-0.439719);
}

double NNfunction_dLg::synapse0x3379540() {
   return (neuron0x336d780()*0.0361502);
}

double NNfunction_dLg::synapse0x3379580() {
   return (neuron0x336dac0()*0.392214);
}

double NNfunction_dLg::synapse0x33795c0() {
   return (neuron0x336de00()*0.109708);
}

double NNfunction_dLg::synapse0x3379050() {
   return (neuron0x336e140()*0.0348827);
}

double NNfunction_dLg::synapse0x3379090() {
   return (neuron0x336e6a0()*0.145645);
}

double NNfunction_dLg::synapse0x3379710() {
   return (neuron0x336e8c0()*-0.0963456);
}

double NNfunction_dLg::synapse0x3379750() {
   return (neuron0x336ec00()*-0.253308);
}

double NNfunction_dLg::synapse0x3379790() {
   return (neuron0x336ef40()*-0.137291);
}

double NNfunction_dLg::synapse0x33797d0() {
   return (neuron0x336f280()*-0.00538847);
}

double NNfunction_dLg::synapse0x3379810() {
   return (neuron0x336f5c0()*-0.0830699);
}

double NNfunction_dLg::synapse0x3379850() {
   return (neuron0x336f900()*0.0142483);
}

double NNfunction_dLg::synapse0x3379bd0() {
   return (neuron0x336ad40()*0.0747185);
}

double NNfunction_dLg::synapse0x336af60() {
   return (neuron0x336b080()*0.0192654);
}

double NNfunction_dLg::synapse0x336afa0() {
   return (neuron0x336b3c0()*-0.237654);
}

double NNfunction_dLg::synapse0x336b2a0() {
   return (neuron0x336b700()*0.8362);
}

double NNfunction_dLg::synapse0x336b2e0() {
   return (neuron0x336ba40()*0.0428361);
}

double NNfunction_dLg::synapse0x336b5e0() {
   return (neuron0x336bd80()*-0.295716);
}

double NNfunction_dLg::synapse0x336b620() {
   return (neuron0x336c0c0()*0.344202);
}

double NNfunction_dLg::synapse0x336b920() {
   return (neuron0x336c400()*0.156792);
}

double NNfunction_dLg::synapse0x336b960() {
   return (neuron0x336c740()*0.00369476);
}

double NNfunction_dLg::synapse0x336bc60() {
   return (neuron0x336ca80()*-0.258317);
}

double NNfunction_dLg::synapse0x336bca0() {
   return (neuron0x336cdc0()*0.439627);
}

double NNfunction_dLg::synapse0x336bfa0() {
   return (neuron0x336d100()*0.243264);
}

double NNfunction_dLg::synapse0x336bfe0() {
   return (neuron0x336d440()*-0.0968);
}

double NNfunction_dLg::synapse0x336c2e0() {
   return (neuron0x336d780()*0.275123);
}

double NNfunction_dLg::synapse0x336c320() {
   return (neuron0x336dac0()*-0.259207);
}

double NNfunction_dLg::synapse0x336c620() {
   return (neuron0x336de00()*0.304898);
}

double NNfunction_dLg::synapse0x336c660() {
   return (neuron0x336e140()*0.175957);
}

double NNfunction_dLg::synapse0x336c960() {
   return (neuron0x336e6a0()*-0.414836);
}

double NNfunction_dLg::synapse0x336c9a0() {
   return (neuron0x336e8c0()*0.312845);
}

double NNfunction_dLg::synapse0x336cca0() {
   return (neuron0x336ec00()*0.211459);
}

double NNfunction_dLg::synapse0x336cce0() {
   return (neuron0x336ef40()*0.0166047);
}

double NNfunction_dLg::synapse0x336cfe0() {
   return (neuron0x336f280()*0.158204);
}

double NNfunction_dLg::synapse0x336d020() {
   return (neuron0x336f5c0()*-0.110837);
}

double NNfunction_dLg::synapse0x336d320() {
   return (neuron0x336f900()*-0.158045);
}

double NNfunction_dLg::synapse0x336d360() {
   return (neuron0x336ad40()*0.0709275);
}

double NNfunction_dLg::synapse0x336e020() {
   return (neuron0x336b080()*-0.228574);
}

double NNfunction_dLg::synapse0x336e060() {
   return (neuron0x336b3c0()*-0.0844318);
}

double NNfunction_dLg::synapse0x3379a20() {
   return (neuron0x336b700()*0.277286);
}

double NNfunction_dLg::synapse0x3379a60() {
   return (neuron0x336ba40()*0.138616);
}

double NNfunction_dLg::synapse0x336e360() {
   return (neuron0x336bd80()*0.0119783);
}

double NNfunction_dLg::synapse0x336e3a0() {
   return (neuron0x336c0c0()*-0.15751);
}

double NNfunction_dLg::synapse0x311c730() {
   return (neuron0x336c400()*-0.127092);
}

double NNfunction_dLg::synapse0x311c770() {
   return (neuron0x336c740()*0.00169524);
}

double NNfunction_dLg::synapse0x336eae0() {
   return (neuron0x336ca80()*0.0344302);
}

double NNfunction_dLg::synapse0x336eb20() {
   return (neuron0x336cdc0()*-0.112004);
}

double NNfunction_dLg::synapse0x336ee20() {
   return (neuron0x336d100()*-0.52192);
}

double NNfunction_dLg::synapse0x336ee60() {
   return (neuron0x336d440()*-0.0636725);
}

double NNfunction_dLg::synapse0x336f160() {
   return (neuron0x336d780()*0.227173);
}

double NNfunction_dLg::synapse0x336f1a0() {
   return (neuron0x336dac0()*-0.114204);
}

double NNfunction_dLg::synapse0x336f4a0() {
   return (neuron0x336de00()*-0.144402);
}

double NNfunction_dLg::synapse0x336f4e0() {
   return (neuron0x336e140()*0.538466);
}

double NNfunction_dLg::synapse0x336f7e0() {
   return (neuron0x336e6a0()*-0.066144);
}

double NNfunction_dLg::synapse0x336f820() {
   return (neuron0x336e8c0()*-0.204154);
}

double NNfunction_dLg::synapse0x336fb20() {
   return (neuron0x336ec00()*-0.182252);
}

double NNfunction_dLg::synapse0x336fb60() {
   return (neuron0x336ef40()*0.122699);
}

double NNfunction_dLg::synapse0x336d660() {
   return (neuron0x336f280()*0.00164941);
}

double NNfunction_dLg::synapse0x336d6a0() {
   return (neuron0x336f5c0()*-0.0224153);
}

double NNfunction_dLg::synapse0x337b940() {
   return (neuron0x336f900()*-0.196623);
}

double NNfunction_dLg::synapse0x337bcc0() {
   return (neuron0x336ad40()*0.0469246);
}

double NNfunction_dLg::synapse0x337bd00() {
   return (neuron0x336b080()*-0.319816);
}

double NNfunction_dLg::synapse0x337bd40() {
   return (neuron0x336b3c0()*0.245047);
}

double NNfunction_dLg::synapse0x337bd80() {
   return (neuron0x336b700()*-0.906924);
}

double NNfunction_dLg::synapse0x337bdc0() {
   return (neuron0x336ba40()*-0.740566);
}

double NNfunction_dLg::synapse0x337be00() {
   return (neuron0x336bd80()*-0.256012);
}

double NNfunction_dLg::synapse0x337be40() {
   return (neuron0x336c0c0()*0.0630099);
}

double NNfunction_dLg::synapse0x337be80() {
   return (neuron0x336c400()*0.320192);
}

double NNfunction_dLg::synapse0x337bec0() {
   return (neuron0x336c740()*-0.229459);
}

double NNfunction_dLg::synapse0x337bf00() {
   return (neuron0x336ca80()*0.0552166);
}

double NNfunction_dLg::synapse0x337bf40() {
   return (neuron0x336cdc0()*-0.458545);
}

double NNfunction_dLg::synapse0x337bf80() {
   return (neuron0x336d100()*0.106017);
}

double NNfunction_dLg::synapse0x337bfc0() {
   return (neuron0x336d440()*-0.47654);
}

double NNfunction_dLg::synapse0x337c000() {
   return (neuron0x336d780()*0.414949);
}

double NNfunction_dLg::synapse0x337c040() {
   return (neuron0x336dac0()*0.142191);
}

double NNfunction_dLg::synapse0x337c080() {
   return (neuron0x336de00()*0.432848);
}

double NNfunction_dLg::synapse0x337bb10() {
   return (neuron0x336e140()*0.0807701);
}

double NNfunction_dLg::synapse0x337bb50() {
   return (neuron0x336e6a0()*0.178567);
}

double NNfunction_dLg::synapse0x337c1d0() {
   return (neuron0x336e8c0()*-0.373176);
}

double NNfunction_dLg::synapse0x337c210() {
   return (neuron0x336ec00()*-0.114764);
}

double NNfunction_dLg::synapse0x337c250() {
   return (neuron0x336ef40()*-0.0823165);
}

double NNfunction_dLg::synapse0x337c290() {
   return (neuron0x336f280()*0.416526);
}

double NNfunction_dLg::synapse0x337c2d0() {
   return (neuron0x336f5c0()*0.112031);
}

double NNfunction_dLg::synapse0x337c310() {
   return (neuron0x336f900()*0.0473336);
}

double NNfunction_dLg::synapse0x337c690() {
   return (neuron0x336ad40()*0.0131701);
}

double NNfunction_dLg::synapse0x337c6d0() {
   return (neuron0x336b080()*-0.00418952);
}

double NNfunction_dLg::synapse0x337c710() {
   return (neuron0x336b3c0()*-0.0180741);
}

double NNfunction_dLg::synapse0x337c750() {
   return (neuron0x336b700()*-2.47305);
}

double NNfunction_dLg::synapse0x337c790() {
   return (neuron0x336ba40()*0.00156468);
}

double NNfunction_dLg::synapse0x337c7d0() {
   return (neuron0x336bd80()*0.00145667);
}

double NNfunction_dLg::synapse0x337c810() {
   return (neuron0x336c0c0()*0.00520083);
}

double NNfunction_dLg::synapse0x337c850() {
   return (neuron0x336c400()*-0.0045213);
}

double NNfunction_dLg::synapse0x337c890() {
   return (neuron0x336c740()*0.00116694);
}

double NNfunction_dLg::synapse0x337c8d0() {
   return (neuron0x336ca80()*0.0164425);
}

double NNfunction_dLg::synapse0x337c910() {
   return (neuron0x336cdc0()*-0.0310024);
}

double NNfunction_dLg::synapse0x337c950() {
   return (neuron0x336d100()*-0.0118039);
}

double NNfunction_dLg::synapse0x337c990() {
   return (neuron0x336d440()*0.0423587);
}

double NNfunction_dLg::synapse0x337c9d0() {
   return (neuron0x336d780()*0.0154568);
}

double NNfunction_dLg::synapse0x337ca10() {
   return (neuron0x336dac0()*0.0367319);
}

double NNfunction_dLg::synapse0x337ca50() {
   return (neuron0x336de00()*0.0433638);
}

double NNfunction_dLg::synapse0x337c4e0() {
   return (neuron0x336e140()*-0.010903);
}

double NNfunction_dLg::synapse0x337c520() {
   return (neuron0x336e6a0()*0.0327507);
}

double NNfunction_dLg::synapse0x337cba0() {
   return (neuron0x336e8c0()*0.0362943);
}

double NNfunction_dLg::synapse0x337cbe0() {
   return (neuron0x336ec00()*-0.00628296);
}

double NNfunction_dLg::synapse0x337cc20() {
   return (neuron0x336ef40()*-0.000850968);
}

double NNfunction_dLg::synapse0x337cc60() {
   return (neuron0x336f280()*0.0143798);
}

double NNfunction_dLg::synapse0x337cca0() {
   return (neuron0x336f5c0()*0.00776929);
}

double NNfunction_dLg::synapse0x337cce0() {
   return (neuron0x336f900()*-0.0156417);
}

double NNfunction_dLg::synapse0x337d060() {
   return (neuron0x336ad40()*-0.0107234);
}

double NNfunction_dLg::synapse0x337d0a0() {
   return (neuron0x336b080()*0.0189721);
}

double NNfunction_dLg::synapse0x337d0e0() {
   return (neuron0x336b3c0()*-0.0594425);
}

double NNfunction_dLg::synapse0x337d120() {
   return (neuron0x336b700()*-0.908298);
}

double NNfunction_dLg::synapse0x337d160() {
   return (neuron0x336ba40()*-0.0313541);
}

double NNfunction_dLg::synapse0x337d1a0() {
   return (neuron0x336bd80()*-0.0600066);
}

double NNfunction_dLg::synapse0x337d1e0() {
   return (neuron0x336c0c0()*-0.0452041);
}

double NNfunction_dLg::synapse0x337d220() {
   return (neuron0x336c400()*-0.0635608);
}

double NNfunction_dLg::synapse0x337d260() {
   return (neuron0x336c740()*-0.00236537);
}

double NNfunction_dLg::synapse0x337d2a0() {
   return (neuron0x336ca80()*0.00541828);
}

double NNfunction_dLg::synapse0x337d2e0() {
   return (neuron0x336cdc0()*0.00339772);
}

double NNfunction_dLg::synapse0x337d320() {
   return (neuron0x336d100()*0.314164);
}

double NNfunction_dLg::synapse0x337d360() {
   return (neuron0x336d440()*-0.307408);
}

double NNfunction_dLg::synapse0x337d3a0() {
   return (neuron0x336d780()*-0.0151094);
}

double NNfunction_dLg::synapse0x337d3e0() {
   return (neuron0x336dac0()*-0.0275235);
}

double NNfunction_dLg::synapse0x337d420() {
   return (neuron0x336de00()*-0.140631);
}

double NNfunction_dLg::synapse0x337ceb0() {
   return (neuron0x336e140()*-0.00154934);
}

double NNfunction_dLg::synapse0x337cef0() {
   return (neuron0x336e6a0()*-0.196828);
}

double NNfunction_dLg::synapse0x337d570() {
   return (neuron0x336e8c0()*-0.265594);
}

double NNfunction_dLg::synapse0x337d5b0() {
   return (neuron0x336ec00()*0.00731193);
}

double NNfunction_dLg::synapse0x337d5f0() {
   return (neuron0x336ef40()*-0.0144387);
}

double NNfunction_dLg::synapse0x337d630() {
   return (neuron0x336f280()*0.0104747);
}

double NNfunction_dLg::synapse0x337d670() {
   return (neuron0x336f5c0()*-0.0211379);
}

double NNfunction_dLg::synapse0x337d6b0() {
   return (neuron0x336f900()*0.00197076);
}

double NNfunction_dLg::synapse0x337da30() {
   return (neuron0x336ad40()*0.000583661);
}

double NNfunction_dLg::synapse0x337da70() {
   return (neuron0x336b080()*-0.0120893);
}

double NNfunction_dLg::synapse0x337dab0() {
   return (neuron0x336b3c0()*0.708687);
}

double NNfunction_dLg::synapse0x337daf0() {
   return (neuron0x336b700()*-1.17824);
}

double NNfunction_dLg::synapse0x337db30() {
   return (neuron0x336ba40()*-0.0552213);
}

double NNfunction_dLg::synapse0x337db70() {
   return (neuron0x336bd80()*-0.0358949);
}

double NNfunction_dLg::synapse0x337dbb0() {
   return (neuron0x336c0c0()*0.0145913);
}

double NNfunction_dLg::synapse0x337dbf0() {
   return (neuron0x336c400()*-0.0206465);
}

double NNfunction_dLg::synapse0x337dc30() {
   return (neuron0x336c740()*0.0736094);
}

double NNfunction_dLg::synapse0x337dc70() {
   return (neuron0x336ca80()*0.038021);
}

double NNfunction_dLg::synapse0x337dcb0() {
   return (neuron0x336cdc0()*0.0041143);
}

double NNfunction_dLg::synapse0x337dcf0() {
   return (neuron0x336d100()*-0.621673);
}

double NNfunction_dLg::synapse0x337dd30() {
   return (neuron0x336d440()*0.0818229);
}

double NNfunction_dLg::synapse0x337dd70() {
   return (neuron0x336d780()*-0.00426421);
}

double NNfunction_dLg::synapse0x337ddb0() {
   return (neuron0x336dac0()*0.0740343);
}

double NNfunction_dLg::synapse0x337ddf0() {
   return (neuron0x336de00()*0.0743288);
}

double NNfunction_dLg::synapse0x337d880() {
   return (neuron0x336e140()*-0.0371156);
}

double NNfunction_dLg::synapse0x337d8c0() {
   return (neuron0x336e6a0()*0.0733955);
}

double NNfunction_dLg::synapse0x337df40() {
   return (neuron0x336e8c0()*0.0304895);
}

double NNfunction_dLg::synapse0x337df80() {
   return (neuron0x336ec00()*0.0356757);
}

double NNfunction_dLg::synapse0x337dfc0() {
   return (neuron0x336ef40()*0.0104234);
}

double NNfunction_dLg::synapse0x337e000() {
   return (neuron0x336f280()*-0.0313867);
}

double NNfunction_dLg::synapse0x337e040() {
   return (neuron0x336f5c0()*-0.0309383);
}

double NNfunction_dLg::synapse0x337e080() {
   return (neuron0x336f900()*0.0258485);
}

double NNfunction_dLg::synapse0x337e400() {
   return (neuron0x336ad40()*-0.0294355);
}

double NNfunction_dLg::synapse0x337e440() {
   return (neuron0x336b080()*0.302952);
}

double NNfunction_dLg::synapse0x337e480() {
   return (neuron0x336b3c0()*-0.0883375);
}

double NNfunction_dLg::synapse0x337e4c0() {
   return (neuron0x336b700()*-0.983409);
}

double NNfunction_dLg::synapse0x337e500() {
   return (neuron0x336ba40()*-0.189027);
}

double NNfunction_dLg::synapse0x337e540() {
   return (neuron0x336bd80()*0.147662);
}

double NNfunction_dLg::synapse0x337e580() {
   return (neuron0x336c0c0()*0.142651);
}

double NNfunction_dLg::synapse0x337e5c0() {
   return (neuron0x336c400()*-0.241832);
}

double NNfunction_dLg::synapse0x337e600() {
   return (neuron0x336c740()*-0.0664459);
}

double NNfunction_dLg::synapse0x33767c0() {
   return (neuron0x336ca80()*0.0779471);
}

double NNfunction_dLg::synapse0x3376800() {
   return (neuron0x336cdc0()*-0.375303);
}

double NNfunction_dLg::synapse0x3376840() {
   return (neuron0x336d100()*-0.0640842);
}

double NNfunction_dLg::synapse0x3376880() {
   return (neuron0x336d440()*-0.263386);
}

double NNfunction_dLg::synapse0x33768c0() {
   return (neuron0x336d780()*-0.373535);
}

double NNfunction_dLg::synapse0x3376900() {
   return (neuron0x336dac0()*-0.492373);
}

double NNfunction_dLg::synapse0x3376940() {
   return (neuron0x336de00()*0.20254);
}

double NNfunction_dLg::synapse0x337e250() {
   return (neuron0x336e140()*-0.508712);
}

double NNfunction_dLg::synapse0x337e290() {
   return (neuron0x336e6a0()*-0.218162);
}

double NNfunction_dLg::synapse0x3376a90() {
   return (neuron0x336e8c0()*-0.352304);
}

double NNfunction_dLg::synapse0x3376ad0() {
   return (neuron0x336ec00()*-0.305887);
}

double NNfunction_dLg::synapse0x3376b10() {
   return (neuron0x336ef40()*0.471118);
}

double NNfunction_dLg::synapse0x3376b50() {
   return (neuron0x336f280()*0.203471);
}

double NNfunction_dLg::synapse0x3376b90() {
   return (neuron0x336f5c0()*0.0324008);
}

double NNfunction_dLg::synapse0x3376bd0() {
   return (neuron0x336f900()*0.136833);
}

double NNfunction_dLg::synapse0x3376f50() {
   return (neuron0x336ad40()*0.000928262);
}

double NNfunction_dLg::synapse0x3376f90() {
   return (neuron0x336b080()*-0.00477183);
}

double NNfunction_dLg::synapse0x3376fd0() {
   return (neuron0x336b3c0()*-0.638379);
}

double NNfunction_dLg::synapse0x3377010() {
   return (neuron0x336b700()*0.0364768);
}

double NNfunction_dLg::synapse0x3377050() {
   return (neuron0x336ba40()*0.00570993);
}

double NNfunction_dLg::synapse0x3377090() {
   return (neuron0x336bd80()*0.0165932);
}

double NNfunction_dLg::synapse0x33770d0() {
   return (neuron0x336c0c0()*0.000108617);
}

double NNfunction_dLg::synapse0x3377110() {
   return (neuron0x336c400()*0.00871084);
}

double NNfunction_dLg::synapse0x3377150() {
   return (neuron0x336c740()*-0.00342602);
}

double NNfunction_dLg::synapse0x3377190() {
   return (neuron0x336ca80()*-0.00597799);
}

double NNfunction_dLg::synapse0x33771d0() {
   return (neuron0x336cdc0()*0.000333669);
}

double NNfunction_dLg::synapse0x3377210() {
   return (neuron0x336d100()*-0.40321);
}

double NNfunction_dLg::synapse0x3377250() {
   return (neuron0x336d440()*0.016586);
}

double NNfunction_dLg::synapse0x3377290() {
   return (neuron0x336d780()*-0.00158963);
}

double NNfunction_dLg::synapse0x33772d0() {
   return (neuron0x336dac0()*-0.00129293);
}

double NNfunction_dLg::synapse0x3377310() {
   return (neuron0x336de00()*-0.00560663);
}

double NNfunction_dLg::synapse0x3376da0() {
   return (neuron0x336e140()*-0.0155665);
}

double NNfunction_dLg::synapse0x3376de0() {
   return (neuron0x336e6a0()*-0.000624525);
}

double NNfunction_dLg::synapse0x3377460() {
   return (neuron0x336e8c0()*0.00552406);
}

double NNfunction_dLg::synapse0x33774a0() {
   return (neuron0x336ec00()*-0.00561777);
}

double NNfunction_dLg::synapse0x33774e0() {
   return (neuron0x336ef40()*-0.00246763);
}

double NNfunction_dLg::synapse0x3377520() {
   return (neuron0x336f280()*0.00760409);
}

double NNfunction_dLg::synapse0x3377560() {
   return (neuron0x336f5c0()*0.00564285);
}

double NNfunction_dLg::synapse0x33775a0() {
   return (neuron0x336f900()*-0.0075217);
}

double NNfunction_dLg::synapse0x3377770() {
   return (neuron0x336ad40()*0.418637);
}

double NNfunction_dLg::synapse0x3380800() {
   return (neuron0x336b080()*-0.206339);
}

double NNfunction_dLg::synapse0x3380840() {
   return (neuron0x336b3c0()*0.391696);
}

double NNfunction_dLg::synapse0x3380880() {
   return (neuron0x336b700()*0.164016);
}

double NNfunction_dLg::synapse0x33808c0() {
   return (neuron0x336ba40()*0.325719);
}

double NNfunction_dLg::synapse0x3380900() {
   return (neuron0x336bd80()*0.0433346);
}

double NNfunction_dLg::synapse0x3380940() {
   return (neuron0x336c0c0()*0.170733);
}

double NNfunction_dLg::synapse0x3380980() {
   return (neuron0x336c400()*-0.0365311);
}

double NNfunction_dLg::synapse0x33809c0() {
   return (neuron0x336c740()*0.0844599);
}

double NNfunction_dLg::synapse0x3380a00() {
   return (neuron0x336ca80()*-0.0387423);
}

double NNfunction_dLg::synapse0x3380a40() {
   return (neuron0x336cdc0()*0.125222);
}

double NNfunction_dLg::synapse0x3380a80() {
   return (neuron0x336d100()*0.0398375);
}

double NNfunction_dLg::synapse0x3380ac0() {
   return (neuron0x336d440()*0.315186);
}

double NNfunction_dLg::synapse0x3380b00() {
   return (neuron0x336d780()*-0.0496533);
}

double NNfunction_dLg::synapse0x3380b40() {
   return (neuron0x336dac0()*-0.383147);
}

double NNfunction_dLg::synapse0x3380b80() {
   return (neuron0x336de00()*0.44974);
}

double NNfunction_dLg::synapse0x3380650() {
   return (neuron0x336e140()*0.331034);
}

double NNfunction_dLg::synapse0x3380690() {
   return (neuron0x336e6a0()*0.281141);
}

double NNfunction_dLg::synapse0x3380cd0() {
   return (neuron0x336e8c0()*-0.203871);
}

double NNfunction_dLg::synapse0x3380d10() {
   return (neuron0x336ec00()*0.0685289);
}

double NNfunction_dLg::synapse0x3380d50() {
   return (neuron0x336ef40()*-0.232802);
}

double NNfunction_dLg::synapse0x3380d90() {
   return (neuron0x336f280()*-0.255516);
}

double NNfunction_dLg::synapse0x3380dd0() {
   return (neuron0x336f5c0()*0.320584);
}

double NNfunction_dLg::synapse0x3380e10() {
   return (neuron0x336f900()*0.0590325);
}

double NNfunction_dLg::synapse0x3381190() {
   return (neuron0x336ad40()*0.0185271);
}

double NNfunction_dLg::synapse0x33811d0() {
   return (neuron0x336b080()*-0.00502076);
}

double NNfunction_dLg::synapse0x3381210() {
   return (neuron0x336b3c0()*0.00337113);
}

double NNfunction_dLg::synapse0x3381250() {
   return (neuron0x336b700()*1.90887);
}

double NNfunction_dLg::synapse0x3381290() {
   return (neuron0x336ba40()*-0.0322484);
}

double NNfunction_dLg::synapse0x33812d0() {
   return (neuron0x336bd80()*-0.00400314);
}

double NNfunction_dLg::synapse0x3381310() {
   return (neuron0x336c0c0()*-0.00356309);
}

double NNfunction_dLg::synapse0x3381350() {
   return (neuron0x336c400()*-0.0191008);
}

double NNfunction_dLg::synapse0x3381390() {
   return (neuron0x336c740()*-0.00149197);
}

double NNfunction_dLg::synapse0x33813d0() {
   return (neuron0x336ca80()*0.0447822);
}

double NNfunction_dLg::synapse0x3381410() {
   return (neuron0x336cdc0()*-0.041953);
}

double NNfunction_dLg::synapse0x3381450() {
   return (neuron0x336d100()*0.311479);
}

double NNfunction_dLg::synapse0x3381490() {
   return (neuron0x336d440()*0.0447067);
}

double NNfunction_dLg::synapse0x33814d0() {
   return (neuron0x336d780()*0.00833007);
}

double NNfunction_dLg::synapse0x3381510() {
   return (neuron0x336dac0()*0.0194223);
}

double NNfunction_dLg::synapse0x3381550() {
   return (neuron0x336de00()*0.022458);
}

double NNfunction_dLg::synapse0x3380fe0() {
   return (neuron0x336e140()*0.00385805);
}

double NNfunction_dLg::synapse0x3381020() {
   return (neuron0x336e6a0()*0.00574068);
}

double NNfunction_dLg::synapse0x33816a0() {
   return (neuron0x336e8c0()*0.0231803);
}

double NNfunction_dLg::synapse0x33816e0() {
   return (neuron0x336ec00()*-0.00545778);
}

double NNfunction_dLg::synapse0x3381720() {
   return (neuron0x336ef40()*-0.0166577);
}

double NNfunction_dLg::synapse0x3381760() {
   return (neuron0x336f280()*-0.00619046);
}

double NNfunction_dLg::synapse0x33817a0() {
   return (neuron0x336f5c0()*0.0161842);
}

double NNfunction_dLg::synapse0x33817e0() {
   return (neuron0x336f900()*-0.0254914);
}

double NNfunction_dLg::synapse0x3381b60() {
   return (neuron0x336ad40()*0.0212973);
}

double NNfunction_dLg::synapse0x3381ba0() {
   return (neuron0x336b080()*-0.0532944);
}

double NNfunction_dLg::synapse0x3381be0() {
   return (neuron0x336b3c0()*-0.0893895);
}

double NNfunction_dLg::synapse0x3381c20() {
   return (neuron0x336b700()*-0.916448);
}

double NNfunction_dLg::synapse0x3381c60() {
   return (neuron0x336ba40()*-0.0100672);
}

double NNfunction_dLg::synapse0x3381ca0() {
   return (neuron0x336bd80()*0.0885144);
}

double NNfunction_dLg::synapse0x3381ce0() {
   return (neuron0x336c0c0()*-0.0300536);
}

double NNfunction_dLg::synapse0x3381d20() {
   return (neuron0x336c400()*-0.000725362);
}

double NNfunction_dLg::synapse0x3381d60() {
   return (neuron0x336c740()*0.00574844);
}

double NNfunction_dLg::synapse0x3381da0() {
   return (neuron0x336ca80()*0.0295116);
}

double NNfunction_dLg::synapse0x3381de0() {
   return (neuron0x336cdc0()*-0.0826495);
}

double NNfunction_dLg::synapse0x3381e20() {
   return (neuron0x336d100()*0.347638);
}

double NNfunction_dLg::synapse0x3381e60() {
   return (neuron0x336d440()*0.286955);
}

double NNfunction_dLg::synapse0x3381ea0() {
   return (neuron0x336d780()*0.0330861);
}

double NNfunction_dLg::synapse0x3381ee0() {
   return (neuron0x336dac0()*0.280342);
}

double NNfunction_dLg::synapse0x3381f20() {
   return (neuron0x336de00()*0.278028);
}

double NNfunction_dLg::synapse0x33819b0() {
   return (neuron0x336e140()*0.0442711);
}

double NNfunction_dLg::synapse0x33819f0() {
   return (neuron0x336e6a0()*0.180982);
}

double NNfunction_dLg::synapse0x3382070() {
   return (neuron0x336e8c0()*0.231289);
}

double NNfunction_dLg::synapse0x33820b0() {
   return (neuron0x336ec00()*-0.00851072);
}

double NNfunction_dLg::synapse0x33820f0() {
   return (neuron0x336ef40()*0.0371917);
}

double NNfunction_dLg::synapse0x3382130() {
   return (neuron0x336f280()*-0.000627726);
}

double NNfunction_dLg::synapse0x3382170() {
   return (neuron0x336f5c0()*0.0226415);
}

double NNfunction_dLg::synapse0x33821b0() {
   return (neuron0x336f900()*-0.0601222);
}

double NNfunction_dLg::synapse0x3382530() {
   return (neuron0x336ad40()*0.00126169);
}

double NNfunction_dLg::synapse0x3382570() {
   return (neuron0x336b080()*-0.00120931);
}

double NNfunction_dLg::synapse0x33825b0() {
   return (neuron0x336b3c0()*-0.188541);
}

double NNfunction_dLg::synapse0x33825f0() {
   return (neuron0x336b700()*0.0894206);
}

double NNfunction_dLg::synapse0x3382630() {
   return (neuron0x336ba40()*-0.00646659);
}

double NNfunction_dLg::synapse0x3382670() {
   return (neuron0x336bd80()*0.0154812);
}

double NNfunction_dLg::synapse0x33826b0() {
   return (neuron0x336c0c0()*0.00151409);
}

double NNfunction_dLg::synapse0x33826f0() {
   return (neuron0x336c400()*0.0042425);
}

double NNfunction_dLg::synapse0x3382730() {
   return (neuron0x336c740()*-0.0208283);
}

double NNfunction_dLg::synapse0x3382770() {
   return (neuron0x336ca80()*0.036507);
}

double NNfunction_dLg::synapse0x33827b0() {
   return (neuron0x336cdc0()*-0.0981029);
}

double NNfunction_dLg::synapse0x33827f0() {
   return (neuron0x336d100()*0.557312);
}

double NNfunction_dLg::synapse0x3382830() {
   return (neuron0x336d440()*0.0370222);
}

double NNfunction_dLg::synapse0x3382870() {
   return (neuron0x336d780()*0.215491);
}

double NNfunction_dLg::synapse0x33828b0() {
   return (neuron0x336dac0()*0.034108);
}

double NNfunction_dLg::synapse0x33828f0() {
   return (neuron0x336de00()*0.0337903);
}

double NNfunction_dLg::synapse0x3382380() {
   return (neuron0x336e140()*-0.00259645);
}

double NNfunction_dLg::synapse0x33823c0() {
   return (neuron0x336e6a0()*0.00669578);
}

double NNfunction_dLg::synapse0x3382a40() {
   return (neuron0x336e8c0()*0.041358);
}

double NNfunction_dLg::synapse0x3382a80() {
   return (neuron0x336ec00()*0.0409289);
}

double NNfunction_dLg::synapse0x3382ac0() {
   return (neuron0x336ef40()*-0.024412);
}

double NNfunction_dLg::synapse0x3382b00() {
   return (neuron0x336f280()*0.00572355);
}

double NNfunction_dLg::synapse0x3382b40() {
   return (neuron0x336f5c0()*0.0164804);
}

double NNfunction_dLg::synapse0x3382b80() {
   return (neuron0x336f900()*-0.0108077);
}

double NNfunction_dLg::synapse0x3382f00() {
   return (neuron0x336ad40()*0.001422);
}

double NNfunction_dLg::synapse0x3382f40() {
   return (neuron0x336b080()*-0.0168565);
}

double NNfunction_dLg::synapse0x3382f80() {
   return (neuron0x336b3c0()*0.00767791);
}

double NNfunction_dLg::synapse0x3382fc0() {
   return (neuron0x336b700()*3.67843);
}

double NNfunction_dLg::synapse0x3383000() {
   return (neuron0x336ba40()*-0.0132257);
}

double NNfunction_dLg::synapse0x3383040() {
   return (neuron0x336bd80()*0.0109676);
}

double NNfunction_dLg::synapse0x3383080() {
   return (neuron0x336c0c0()*-0.0361872);
}

double NNfunction_dLg::synapse0x33830c0() {
   return (neuron0x336c400()*-0.00930713);
}

double NNfunction_dLg::synapse0x3383100() {
   return (neuron0x336c740()*-0.0258694);
}

double NNfunction_dLg::synapse0x3383140() {
   return (neuron0x336ca80()*0.00257585);
}

double NNfunction_dLg::synapse0x3383180() {
   return (neuron0x336cdc0()*-0.0300213);
}

double NNfunction_dLg::synapse0x33831c0() {
   return (neuron0x336d100()*-0.140252);
}

double NNfunction_dLg::synapse0x3383200() {
   return (neuron0x336d440()*-0.06267);
}

double NNfunction_dLg::synapse0x3383240() {
   return (neuron0x336d780()*-0.0084345);
}

double NNfunction_dLg::synapse0x3383280() {
   return (neuron0x336dac0()*0.0831699);
}

double NNfunction_dLg::synapse0x33832c0() {
   return (neuron0x336de00()*-0.00652584);
}

double NNfunction_dLg::synapse0x3382d50() {
   return (neuron0x336e140()*-0.0373372);
}

double NNfunction_dLg::synapse0x3382d90() {
   return (neuron0x336e6a0()*0.0790044);
}

double NNfunction_dLg::synapse0x3383410() {
   return (neuron0x336e8c0()*-0.0684053);
}

double NNfunction_dLg::synapse0x3383450() {
   return (neuron0x336ec00()*-0.038657);
}

double NNfunction_dLg::synapse0x3383490() {
   return (neuron0x336ef40()*-0.0210441);
}

double NNfunction_dLg::synapse0x33834d0() {
   return (neuron0x336f280()*-0.00887978);
}

double NNfunction_dLg::synapse0x3383510() {
   return (neuron0x336f5c0()*-0.00190951);
}

double NNfunction_dLg::synapse0x3383550() {
   return (neuron0x336f900()*0.0123921);
}

double NNfunction_dLg::synapse0x33838d0() {
   return (neuron0x336ad40()*-0.0464887);
}

double NNfunction_dLg::synapse0x3383910() {
   return (neuron0x336b080()*0.0637656);
}

double NNfunction_dLg::synapse0x3383950() {
   return (neuron0x336b3c0()*-0.425249);
}

double NNfunction_dLg::synapse0x3383990() {
   return (neuron0x336b700()*-0.355683);
}

double NNfunction_dLg::synapse0x33839d0() {
   return (neuron0x336ba40()*0.0524415);
}

double NNfunction_dLg::synapse0x3383a10() {
   return (neuron0x336bd80()*0.100746);
}

double NNfunction_dLg::synapse0x3383a50() {
   return (neuron0x336c0c0()*-0.115689);
}

double NNfunction_dLg::synapse0x3383a90() {
   return (neuron0x336c400()*0.137542);
}

double NNfunction_dLg::synapse0x3383ad0() {
   return (neuron0x336c740()*-0.154069);
}

double NNfunction_dLg::synapse0x3383b10() {
   return (neuron0x336ca80()*-0.0471283);
}

double NNfunction_dLg::synapse0x3383b50() {
   return (neuron0x336cdc0()*-0.00835112);
}

double NNfunction_dLg::synapse0x3383b90() {
   return (neuron0x336d100()*-0.395807);
}

double NNfunction_dLg::synapse0x3383bd0() {
   return (neuron0x336d440()*-0.0030977);
}

double NNfunction_dLg::synapse0x3383c10() {
   return (neuron0x336d780()*-0.154331);
}

double NNfunction_dLg::synapse0x3383c50() {
   return (neuron0x336dac0()*0.0815991);
}

double NNfunction_dLg::synapse0x3383c90() {
   return (neuron0x336de00()*0.0458838);
}

double NNfunction_dLg::synapse0x3383720() {
   return (neuron0x336e140()*-0.159188);
}

double NNfunction_dLg::synapse0x3383760() {
   return (neuron0x336e6a0()*-0.0476873);
}

double NNfunction_dLg::synapse0x3383de0() {
   return (neuron0x336e8c0()*-0.0390042);
}

double NNfunction_dLg::synapse0x3383e20() {
   return (neuron0x336ec00()*-0.0746527);
}

double NNfunction_dLg::synapse0x3383e60() {
   return (neuron0x336ef40()*-0.177422);
}

double NNfunction_dLg::synapse0x3383ea0() {
   return (neuron0x336f280()*-0.0849159);
}

double NNfunction_dLg::synapse0x3383ee0() {
   return (neuron0x336f5c0()*0.0096224);
}

double NNfunction_dLg::synapse0x3383f20() {
   return (neuron0x336f900()*0.104768);
}

double NNfunction_dLg::synapse0x33842a0() {
   return (neuron0x336ad40()*-0.00155533);
}

double NNfunction_dLg::synapse0x33842e0() {
   return (neuron0x336b080()*-0.00764412);
}

double NNfunction_dLg::synapse0x3384320() {
   return (neuron0x336b3c0()*-0.552629);
}

double NNfunction_dLg::synapse0x3384360() {
   return (neuron0x336b700()*-0.0999224);
}

double NNfunction_dLg::synapse0x33843a0() {
   return (neuron0x336ba40()*0.00167668);
}

double NNfunction_dLg::synapse0x33843e0() {
   return (neuron0x336bd80()*-0.0163215);
}

double NNfunction_dLg::synapse0x3384420() {
   return (neuron0x336c0c0()*0.00756975);
}

double NNfunction_dLg::synapse0x3384460() {
   return (neuron0x336c400()*-0.00227907);
}

double NNfunction_dLg::synapse0x33844a0() {
   return (neuron0x336c740()*-0.00116402);
}

double NNfunction_dLg::synapse0x33844e0() {
   return (neuron0x336ca80()*0.00564226);
}

double NNfunction_dLg::synapse0x3384520() {
   return (neuron0x336cdc0()*-0.0230345);
}

double NNfunction_dLg::synapse0x3384560() {
   return (neuron0x336d100()*1.15242);
}

double NNfunction_dLg::synapse0x33845a0() {
   return (neuron0x336d440()*0.0354367);
}

double NNfunction_dLg::synapse0x33845e0() {
   return (neuron0x336d780()*-0.000815029);
}

double NNfunction_dLg::synapse0x3384620() {
   return (neuron0x336dac0()*0.00489745);
}

double NNfunction_dLg::synapse0x3384660() {
   return (neuron0x336de00()*0.0108122);
}

double NNfunction_dLg::synapse0x33840f0() {
   return (neuron0x336e140()*-0.0384256);
}

double NNfunction_dLg::synapse0x3384130() {
   return (neuron0x336e6a0()*0.0112018);
}

double NNfunction_dLg::synapse0x33847b0() {
   return (neuron0x336e8c0()*0.0312033);
}

double NNfunction_dLg::synapse0x33847f0() {
   return (neuron0x336ec00()*0.00727575);
}

double NNfunction_dLg::synapse0x3384830() {
   return (neuron0x336ef40()*0.00626746);
}

double NNfunction_dLg::synapse0x3384870() {
   return (neuron0x336f280()*0.0077651);
}

double NNfunction_dLg::synapse0x33848b0() {
   return (neuron0x336f5c0()*-0.00908298);
}

double NNfunction_dLg::synapse0x33848f0() {
   return (neuron0x336f900()*-0.00386542);
}

double NNfunction_dLg::synapse0x3384c70() {
   return (neuron0x336ad40()*0.0560839);
}

double NNfunction_dLg::synapse0x3384cb0() {
   return (neuron0x336b080()*0.030108);
}

double NNfunction_dLg::synapse0x3384cf0() {
   return (neuron0x336b3c0()*-0.0657239);
}

double NNfunction_dLg::synapse0x3384d30() {
   return (neuron0x336b700()*0.0103578);
}

double NNfunction_dLg::synapse0x3384d70() {
   return (neuron0x336ba40()*-0.017424);
}

double NNfunction_dLg::synapse0x3384db0() {
   return (neuron0x336bd80()*-0.0899716);
}

double NNfunction_dLg::synapse0x3384df0() {
   return (neuron0x336c0c0()*-0.00769691);
}

double NNfunction_dLg::synapse0x3384e30() {
   return (neuron0x336c400()*-0.0457618);
}

double NNfunction_dLg::synapse0x3384e70() {
   return (neuron0x336c740()*0.031816);
}

double NNfunction_dLg::synapse0x3384eb0() {
   return (neuron0x336ca80()*-0.0128583);
}

double NNfunction_dLg::synapse0x3384ef0() {
   return (neuron0x336cdc0()*0.0698466);
}

double NNfunction_dLg::synapse0x3384f30() {
   return (neuron0x336d100()*-0.245241);
}

double NNfunction_dLg::synapse0x3384f70() {
   return (neuron0x336d440()*-0.196026);
}

double NNfunction_dLg::synapse0x3384fb0() {
   return (neuron0x336d780()*-0.0596483);
}

double NNfunction_dLg::synapse0x3384ff0() {
   return (neuron0x336dac0()*-0.234398);
}

double NNfunction_dLg::synapse0x3385030() {
   return (neuron0x336de00()*-0.268672);
}

double NNfunction_dLg::synapse0x3384ac0() {
   return (neuron0x336e140()*-0.0413445);
}

double NNfunction_dLg::synapse0x3384b00() {
   return (neuron0x336e6a0()*0.150843);
}

double NNfunction_dLg::synapse0x3385180() {
   return (neuron0x336e8c0()*-0.0294443);
}

double NNfunction_dLg::synapse0x33851c0() {
   return (neuron0x336ec00()*-0.0526046);
}

double NNfunction_dLg::synapse0x3385200() {
   return (neuron0x336ef40()*-0.0339365);
}

double NNfunction_dLg::synapse0x3385240() {
   return (neuron0x336f280()*0.0137523);
}

double NNfunction_dLg::synapse0x3385280() {
   return (neuron0x336f5c0()*-0.00318122);
}

double NNfunction_dLg::synapse0x33852c0() {
   return (neuron0x336f900()*0.00928786);
}

double NNfunction_dLg::synapse0x3385640() {
   return (neuron0x336ad40()*-0.171849);
}

double NNfunction_dLg::synapse0x3379c10() {
   return (neuron0x336b080()*0.458366);
}

double NNfunction_dLg::synapse0x3379c50() {
   return (neuron0x336b3c0()*-0.32602);
}

double NNfunction_dLg::synapse0x3379c90() {
   return (neuron0x336b700()*-0.0986238);
}

double NNfunction_dLg::synapse0x3379ee0() {
   return (neuron0x336ba40()*-0.226899);
}

double NNfunction_dLg::synapse0x3379f20() {
   return (neuron0x336bd80()*-0.21678);
}

double NNfunction_dLg::synapse0x3379f60() {
   return (neuron0x336c0c0()*-0.121861);
}

double NNfunction_dLg::synapse0x337a1b0() {
   return (neuron0x336c400()*0.280443);
}

double NNfunction_dLg::synapse0x337a1f0() {
   return (neuron0x336c740()*0.00260399);
}

double NNfunction_dLg::synapse0x337a440() {
   return (neuron0x336ca80()*-0.303698);
}

double NNfunction_dLg::synapse0x337a480() {
   return (neuron0x336cdc0()*-0.238414);
}

double NNfunction_dLg::synapse0x337a4c0() {
   return (neuron0x336d100()*-0.167377);
}

double NNfunction_dLg::synapse0x337a710() {
   return (neuron0x336d440()*-0.124626);
}

double NNfunction_dLg::synapse0x337a750() {
   return (neuron0x336d780()*0.270593);
}

double NNfunction_dLg::synapse0x337a9a0() {
   return (neuron0x336dac0()*0.213971);
}

double NNfunction_dLg::synapse0x337a9e0() {
   return (neuron0x336de00()*0.216758);
}

double NNfunction_dLg::synapse0x3385490() {
   return (neuron0x336e140()*0.449489);
}

double NNfunction_dLg::synapse0x33854d0() {
   return (neuron0x336e6a0()*0.317082);
}

double NNfunction_dLg::synapse0x337ab30() {
   return (neuron0x336e8c0()*-0.111528);
}

double NNfunction_dLg::synapse0x337b040() {
   return (neuron0x336ec00()*0.485475);
}

double NNfunction_dLg::synapse0x337b080() {
   return (neuron0x336ef40()*-0.0422986);
}

double NNfunction_dLg::synapse0x337b0c0() {
   return (neuron0x336f280()*0.205695);
}

double NNfunction_dLg::synapse0x337b310() {
   return (neuron0x336f5c0()*0.283881);
}

double NNfunction_dLg::synapse0x337b350() {
   return (neuron0x336f900()*0.263895);
}

double NNfunction_dLg::synapse0x337ac00() {
   return (neuron0x336ad40()*-0.0255548);
}

double NNfunction_dLg::synapse0x337ac40() {
   return (neuron0x336b080()*-0.0312121);
}

double NNfunction_dLg::synapse0x337ac80() {
   return (neuron0x336b3c0()*-0.0103632);
}

double NNfunction_dLg::synapse0x337acc0() {
   return (neuron0x336b700()*-0.0796316);
}

double NNfunction_dLg::synapse0x337b640() {
   return (neuron0x336ba40()*-0.0853855);
}

double NNfunction_dLg::synapse0x3387990() {
   return (neuron0x336bd80()*0.0132028);
}

double NNfunction_dLg::synapse0x33879d0() {
   return (neuron0x336c0c0()*-0.0121742);
}

double NNfunction_dLg::synapse0x3387a10() {
   return (neuron0x336c400()*0.0109297);
}

double NNfunction_dLg::synapse0x3387a50() {
   return (neuron0x336c740()*0.0137512);
}

double NNfunction_dLg::synapse0x3387a90() {
   return (neuron0x336ca80()*-0.00748187);
}

double NNfunction_dLg::synapse0x3387ad0() {
   return (neuron0x336cdc0()*0.00502148);
}

double NNfunction_dLg::synapse0x3387b10() {
   return (neuron0x336d100()*-0.361842);
}

double NNfunction_dLg::synapse0x3387b50() {
   return (neuron0x336d440()*-0.256152);
}

double NNfunction_dLg::synapse0x3387b90() {
   return (neuron0x336d780()*0.00246814);
}

double NNfunction_dLg::synapse0x3387bd0() {
   return (neuron0x336dac0()*0.452035);
}

double NNfunction_dLg::synapse0x3387c10() {
   return (neuron0x336de00()*0.415035);
}

double NNfunction_dLg::synapse0x337b520() {
   return (neuron0x336e140()*0.028129);
}

double NNfunction_dLg::synapse0x337b560() {
   return (neuron0x336e6a0()*0.142733);
}

double NNfunction_dLg::synapse0x3387d60() {
   return (neuron0x336e8c0()*0.198331);
}

double NNfunction_dLg::synapse0x3387da0() {
   return (neuron0x336ec00()*-0.0528205);
}

double NNfunction_dLg::synapse0x3387de0() {
   return (neuron0x336ef40()*0.0480554);
}

double NNfunction_dLg::synapse0x3387e20() {
   return (neuron0x336f280()*-0.0131905);
}

double NNfunction_dLg::synapse0x3387e60() {
   return (neuron0x336f5c0()*-0.00699255);
}

double NNfunction_dLg::synapse0x3387ea0() {
   return (neuron0x336f900()*-0.0165081);
}

double NNfunction_dLg::synapse0x3388220() {
   return (neuron0x336ad40()*-0.0096935);
}

double NNfunction_dLg::synapse0x3388260() {
   return (neuron0x336b080()*0.00450968);
}

double NNfunction_dLg::synapse0x33882a0() {
   return (neuron0x336b3c0()*0.615235);
}

double NNfunction_dLg::synapse0x33882e0() {
   return (neuron0x336b700()*-0.112232);
}

double NNfunction_dLg::synapse0x3388320() {
   return (neuron0x336ba40()*-0.00604398);
}

double NNfunction_dLg::synapse0x3388360() {
   return (neuron0x336bd80()*-0.0133716);
}

double NNfunction_dLg::synapse0x33883a0() {
   return (neuron0x336c0c0()*0.00486515);
}

double NNfunction_dLg::synapse0x33883e0() {
   return (neuron0x336c400()*-0.00890723);
}

double NNfunction_dLg::synapse0x3388420() {
   return (neuron0x336c740()*0.00384951);
}

double NNfunction_dLg::synapse0x3388460() {
   return (neuron0x336ca80()*-0.0025514);
}

double NNfunction_dLg::synapse0x33884a0() {
   return (neuron0x336cdc0()*0.0015511);
}

double NNfunction_dLg::synapse0x33884e0() {
   return (neuron0x336d100()*1.47122);
}

double NNfunction_dLg::synapse0x3388520() {
   return (neuron0x336d440()*0.0322076);
}

double NNfunction_dLg::synapse0x3388560() {
   return (neuron0x336d780()*-0.00262647);
}

double NNfunction_dLg::synapse0x33885a0() {
   return (neuron0x336dac0()*0.0188738);
}

double NNfunction_dLg::synapse0x33885e0() {
   return (neuron0x336de00()*0.00180509);
}

double NNfunction_dLg::synapse0x3388070() {
   return (neuron0x336e140()*-0.0222089);
}

double NNfunction_dLg::synapse0x33880b0() {
   return (neuron0x336e6a0()*0.0300866);
}

double NNfunction_dLg::synapse0x3388730() {
   return (neuron0x336e8c0()*0.0183747);
}

double NNfunction_dLg::synapse0x3388770() {
   return (neuron0x336ec00()*0.0105199);
}

double NNfunction_dLg::synapse0x33887b0() {
   return (neuron0x336ef40()*0.0244367);
}

double NNfunction_dLg::synapse0x33887f0() {
   return (neuron0x336f280()*0.00971527);
}

double NNfunction_dLg::synapse0x3388830() {
   return (neuron0x336f5c0()*-0.0191929);
}

double NNfunction_dLg::synapse0x3388870() {
   return (neuron0x336f900()*-0.00151156);
}

double NNfunction_dLg::synapse0x3388bf0() {
   return (neuron0x336ad40()*-0.126144);
}

double NNfunction_dLg::synapse0x3388c30() {
   return (neuron0x336b080()*0.0110115);
}

double NNfunction_dLg::synapse0x3388c70() {
   return (neuron0x336b3c0()*0.164013);
}

double NNfunction_dLg::synapse0x3388cb0() {
   return (neuron0x336b700()*-0.209312);
}

double NNfunction_dLg::synapse0x3388cf0() {
   return (neuron0x336ba40()*-0.0478306);
}

double NNfunction_dLg::synapse0x3388d30() {
   return (neuron0x336bd80()*-0.0822229);
}

double NNfunction_dLg::synapse0x3388d70() {
   return (neuron0x336c0c0()*0.0307799);
}

double NNfunction_dLg::synapse0x3388db0() {
   return (neuron0x336c400()*0.00349357);
}

double NNfunction_dLg::synapse0x3388df0() {
   return (neuron0x336c740()*0.161728);
}

double NNfunction_dLg::synapse0x3388e30() {
   return (neuron0x336ca80()*0.157229);
}

double NNfunction_dLg::synapse0x3388e70() {
   return (neuron0x336cdc0()*0.0116604);
}

double NNfunction_dLg::synapse0x3388eb0() {
   return (neuron0x336d100()*-0.310656);
}

double NNfunction_dLg::synapse0x3388ef0() {
   return (neuron0x336d440()*0.0339949);
}

double NNfunction_dLg::synapse0x3388f30() {
   return (neuron0x336d780()*0.043099);
}

double NNfunction_dLg::synapse0x3388f70() {
   return (neuron0x336dac0()*0.00742466);
}

double NNfunction_dLg::synapse0x3388fb0() {
   return (neuron0x336de00()*-0.0393762);
}

double NNfunction_dLg::synapse0x3388a40() {
   return (neuron0x336e140()*-0.00107298);
}

double NNfunction_dLg::synapse0x3388a80() {
   return (neuron0x336e6a0()*-0.211623);
}

double NNfunction_dLg::synapse0x3389100() {
   return (neuron0x336e8c0()*0.0447563);
}

double NNfunction_dLg::synapse0x3389140() {
   return (neuron0x336ec00()*0.0447844);
}

double NNfunction_dLg::synapse0x3389180() {
   return (neuron0x336ef40()*0.0587903);
}

double NNfunction_dLg::synapse0x33891c0() {
   return (neuron0x336f280()*-0.00631863);
}

double NNfunction_dLg::synapse0x3389200() {
   return (neuron0x336f5c0()*0.0276304);
}

double NNfunction_dLg::synapse0x3389240() {
   return (neuron0x336f900()*-0.00282013);
}

double NNfunction_dLg::synapse0x33895c0() {
   return (neuron0x336ad40()*0.0835305);
}

double NNfunction_dLg::synapse0x3389600() {
   return (neuron0x336b080()*0.259554);
}

double NNfunction_dLg::synapse0x3389640() {
   return (neuron0x336b3c0()*0.00931192);
}

double NNfunction_dLg::synapse0x3389680() {
   return (neuron0x336b700()*-0.183773);
}

double NNfunction_dLg::synapse0x33896c0() {
   return (neuron0x336ba40()*-0.557485);
}

double NNfunction_dLg::synapse0x3389700() {
   return (neuron0x336bd80()*-0.185132);
}

double NNfunction_dLg::synapse0x3389740() {
   return (neuron0x336c0c0()*0.0598691);
}

double NNfunction_dLg::synapse0x3389780() {
   return (neuron0x336c400()*-0.227471);
}

double NNfunction_dLg::synapse0x33897c0() {
   return (neuron0x336c740()*-0.371232);
}

double NNfunction_dLg::synapse0x3389800() {
   return (neuron0x336ca80()*-0.0840399);
}

double NNfunction_dLg::synapse0x3389840() {
   return (neuron0x336cdc0()*-0.287696);
}

double NNfunction_dLg::synapse0x3389880() {
   return (neuron0x336d100()*-0.19586);
}

double NNfunction_dLg::synapse0x33898c0() {
   return (neuron0x336d440()*0.233557);
}

double NNfunction_dLg::synapse0x3389900() {
   return (neuron0x336d780()*-0.486572);
}

double NNfunction_dLg::synapse0x3389940() {
   return (neuron0x336dac0()*-0.412563);
}

double NNfunction_dLg::synapse0x3389980() {
   return (neuron0x336de00()*-0.236541);
}

double NNfunction_dLg::synapse0x3389410() {
   return (neuron0x336e140()*-0.647108);
}

double NNfunction_dLg::synapse0x3389450() {
   return (neuron0x336e6a0()*-0.35327);
}

double NNfunction_dLg::synapse0x3389ad0() {
   return (neuron0x336e8c0()*-0.179333);
}

double NNfunction_dLg::synapse0x3389b10() {
   return (neuron0x336ec00()*0.0807581);
}

double NNfunction_dLg::synapse0x3389b50() {
   return (neuron0x336ef40()*0.140056);
}

double NNfunction_dLg::synapse0x3389b90() {
   return (neuron0x336f280()*0.122472);
}

double NNfunction_dLg::synapse0x3389bd0() {
   return (neuron0x336f5c0()*-0.0892656);
}

double NNfunction_dLg::synapse0x3389c10() {
   return (neuron0x336f900()*-0.345277);
}

double NNfunction_dLg::synapse0x3389f90() {
   return (neuron0x336ad40()*0.073469);
}

double NNfunction_dLg::synapse0x3389fd0() {
   return (neuron0x336b080()*-0.185359);
}

double NNfunction_dLg::synapse0x338a010() {
   return (neuron0x336b3c0()*0.243454);
}

double NNfunction_dLg::synapse0x338a050() {
   return (neuron0x336b700()*-0.116772);
}

double NNfunction_dLg::synapse0x338a090() {
   return (neuron0x336ba40()*-0.184973);
}

double NNfunction_dLg::synapse0x338a0d0() {
   return (neuron0x336bd80()*-0.229619);
}

double NNfunction_dLg::synapse0x338a110() {
   return (neuron0x336c0c0()*0.0056658);
}

double NNfunction_dLg::synapse0x338a150() {
   return (neuron0x336c400()*-0.0811455);
}

double NNfunction_dLg::synapse0x338a190() {
   return (neuron0x336c740()*0.185733);
}

double NNfunction_dLg::synapse0x338a1d0() {
   return (neuron0x336ca80()*-0.0396386);
}

double NNfunction_dLg::synapse0x338a210() {
   return (neuron0x336cdc0()*0.120034);
}

double NNfunction_dLg::synapse0x338a250() {
   return (neuron0x336d100()*-0.323201);
}

double NNfunction_dLg::synapse0x338a290() {
   return (neuron0x336d440()*0.450523);
}

double NNfunction_dLg::synapse0x338a2d0() {
   return (neuron0x336d780()*0.125006);
}

double NNfunction_dLg::synapse0x338a310() {
   return (neuron0x336dac0()*-0.104728);
}

double NNfunction_dLg::synapse0x338a350() {
   return (neuron0x336de00()*-0.295266);
}

double NNfunction_dLg::synapse0x3389de0() {
   return (neuron0x336e140()*0.0769301);
}

double NNfunction_dLg::synapse0x3389e20() {
   return (neuron0x336e6a0()*-0.228524);
}

double NNfunction_dLg::synapse0x338a4a0() {
   return (neuron0x336e8c0()*0.128993);
}

double NNfunction_dLg::synapse0x338a4e0() {
   return (neuron0x336ec00()*0.0881662);
}

double NNfunction_dLg::synapse0x338a520() {
   return (neuron0x336ef40()*0.199651);
}

double NNfunction_dLg::synapse0x338a560() {
   return (neuron0x336f280()*0.113068);
}

double NNfunction_dLg::synapse0x338a5a0() {
   return (neuron0x336f5c0()*-0.235239);
}

double NNfunction_dLg::synapse0x338a5e0() {
   return (neuron0x336f900()*-0.0800622);
}

double NNfunction_dLg::synapse0x338a960() {
   return (neuron0x336ad40()*0.00253886);
}

double NNfunction_dLg::synapse0x338a9a0() {
   return (neuron0x336b080()*0.00213993);
}

double NNfunction_dLg::synapse0x338a9e0() {
   return (neuron0x336b3c0()*0.017647);
}

double NNfunction_dLg::synapse0x338aa20() {
   return (neuron0x336b700()*-14.9605);
}

double NNfunction_dLg::synapse0x338aa60() {
   return (neuron0x336ba40()*0.0065268);
}

double NNfunction_dLg::synapse0x338aaa0() {
   return (neuron0x336bd80()*0.00380392);
}

double NNfunction_dLg::synapse0x338aae0() {
   return (neuron0x336c0c0()*0.00449808);
}

double NNfunction_dLg::synapse0x338ab20() {
   return (neuron0x336c400()*0.00593231);
}

double NNfunction_dLg::synapse0x338ab60() {
   return (neuron0x336c740()*0.00391428);
}

double NNfunction_dLg::synapse0x338aba0() {
   return (neuron0x336ca80()*-0.000845161);
}

double NNfunction_dLg::synapse0x338abe0() {
   return (neuron0x336cdc0()*-0.010121);
}

double NNfunction_dLg::synapse0x338ac20() {
   return (neuron0x336d100()*-0.0468089);
}

double NNfunction_dLg::synapse0x338ac60() {
   return (neuron0x336d440()*0.00692269);
}

double NNfunction_dLg::synapse0x338aca0() {
   return (neuron0x336d780()*-0.0177874);
}

double NNfunction_dLg::synapse0x338ace0() {
   return (neuron0x336dac0()*0.0043218);
}

double NNfunction_dLg::synapse0x338ad20() {
   return (neuron0x336de00()*-0.014015);
}

double NNfunction_dLg::synapse0x338a7b0() {
   return (neuron0x336e140()*-0.0143016);
}

double NNfunction_dLg::synapse0x338a7f0() {
   return (neuron0x336e6a0()*0.00803886);
}

double NNfunction_dLg::synapse0x338ae70() {
   return (neuron0x336e8c0()*-0.0050304);
}

double NNfunction_dLg::synapse0x338aeb0() {
   return (neuron0x336ec00()*0.000330222);
}

double NNfunction_dLg::synapse0x338aef0() {
   return (neuron0x336ef40()*0.0106761);
}

double NNfunction_dLg::synapse0x338af30() {
   return (neuron0x336f280()*0.00681535);
}

double NNfunction_dLg::synapse0x338af70() {
   return (neuron0x336f5c0()*0.000511198);
}

double NNfunction_dLg::synapse0x338afb0() {
   return (neuron0x336f900()*0.00209101);
}

double NNfunction_dLg::synapse0x338b330() {
   return (neuron0x336ad40()*0.008769);
}

double NNfunction_dLg::synapse0x338b370() {
   return (neuron0x336b080()*0.00350751);
}

double NNfunction_dLg::synapse0x338b3b0() {
   return (neuron0x336b3c0()*-0.044341);
}

double NNfunction_dLg::synapse0x338b3f0() {
   return (neuron0x336b700()*0.143929);
}

double NNfunction_dLg::synapse0x338b430() {
   return (neuron0x336ba40()*0.00407624);
}

double NNfunction_dLg::synapse0x338b470() {
   return (neuron0x336bd80()*0.00142269);
}

double NNfunction_dLg::synapse0x338b4b0() {
   return (neuron0x336c0c0()*-0.00194831);
}

double NNfunction_dLg::synapse0x338b4f0() {
   return (neuron0x336c400()*-0.00111546);
}

double NNfunction_dLg::synapse0x338b530() {
   return (neuron0x336c740()*0.00487954);
}

double NNfunction_dLg::synapse0x338b570() {
   return (neuron0x336ca80()*0.00597808);
}

double NNfunction_dLg::synapse0x338b5b0() {
   return (neuron0x336cdc0()*0.00232914);
}

double NNfunction_dLg::synapse0x338b5f0() {
   return (neuron0x336d100()*-3.28);
}

double NNfunction_dLg::synapse0x338b630() {
   return (neuron0x336d440()*-0.00133486);
}

double NNfunction_dLg::synapse0x338b670() {
   return (neuron0x336d780()*-0.0112932);
}

double NNfunction_dLg::synapse0x338b6b0() {
   return (neuron0x336dac0()*-0.0128);
}

double NNfunction_dLg::synapse0x338b6f0() {
   return (neuron0x336de00()*-0.0104949);
}

double NNfunction_dLg::synapse0x338b180() {
   return (neuron0x336e140()*-0.00953861);
}

double NNfunction_dLg::synapse0x338b1c0() {
   return (neuron0x336e6a0()*-0.00278917);
}

double NNfunction_dLg::synapse0x338b840() {
   return (neuron0x336e8c0()*8.73208e-05);
}

double NNfunction_dLg::synapse0x338b880() {
   return (neuron0x336ec00()*-0.0061531);
}

double NNfunction_dLg::synapse0x338b8c0() {
   return (neuron0x336ef40()*0.00143868);
}

double NNfunction_dLg::synapse0x338b900() {
   return (neuron0x336f280()*-0.00416142);
}

double NNfunction_dLg::synapse0x338b940() {
   return (neuron0x336f5c0()*0.00428239);
}

double NNfunction_dLg::synapse0x338b980() {
   return (neuron0x336f900()*-0.00177389);
}

double NNfunction_dLg::synapse0x338bd00() {
   return (neuron0x336ad40()*0.00288929);
}

double NNfunction_dLg::synapse0x338bd40() {
   return (neuron0x336b080()*-0.000688979);
}

double NNfunction_dLg::synapse0x338bd80() {
   return (neuron0x336b3c0()*0.00086221);
}

double NNfunction_dLg::synapse0x338bdc0() {
   return (neuron0x336b700()*-6.46645);
}

double NNfunction_dLg::synapse0x338be00() {
   return (neuron0x336ba40()*0.0025057);
}

double NNfunction_dLg::synapse0x338be40() {
   return (neuron0x336bd80()*0.0039333);
}

double NNfunction_dLg::synapse0x338be80() {
   return (neuron0x336c0c0()*0.000516985);
}

double NNfunction_dLg::synapse0x338bec0() {
   return (neuron0x336c400()*0.00202613);
}

double NNfunction_dLg::synapse0x338bf00() {
   return (neuron0x336c740()*-0.00022924);
}

double NNfunction_dLg::synapse0x338bf40() {
   return (neuron0x336ca80()*0.00227036);
}

double NNfunction_dLg::synapse0x338bf80() {
   return (neuron0x336cdc0()*-0.00741874);
}

double NNfunction_dLg::synapse0x338bfc0() {
   return (neuron0x336d100()*0.5554);
}

double NNfunction_dLg::synapse0x338c000() {
   return (neuron0x336d440()*0.0207411);
}

double NNfunction_dLg::synapse0x338c040() {
   return (neuron0x336d780()*-0.0151617);
}

double NNfunction_dLg::synapse0x338c080() {
   return (neuron0x336dac0()*0.0191806);
}

double NNfunction_dLg::synapse0x338c0c0() {
   return (neuron0x336de00()*0.00093687);
}

double NNfunction_dLg::synapse0x338bb50() {
   return (neuron0x336e140()*-0.0133832);
}

double NNfunction_dLg::synapse0x338bb90() {
   return (neuron0x336e6a0()*0.0263695);
}

double NNfunction_dLg::synapse0x338c210() {
   return (neuron0x336e8c0()*0.00645006);
}

double NNfunction_dLg::synapse0x338c250() {
   return (neuron0x336ec00()*0.000154837);
}

double NNfunction_dLg::synapse0x338c290() {
   return (neuron0x336ef40()*0.0096745);
}

double NNfunction_dLg::synapse0x338c2d0() {
   return (neuron0x336f280()*0.00571026);
}

double NNfunction_dLg::synapse0x338c310() {
   return (neuron0x336f5c0()*-0.00073367);
}

double NNfunction_dLg::synapse0x338c350() {
   return (neuron0x336f900()*-0.00177094);
}

double NNfunction_dLg::synapse0x3374e00() {
   return (neuron0x336ad40()*-0.0121638);
}

double NNfunction_dLg::synapse0x3374e40() {
   return (neuron0x336b080()*0.00471457);
}

double NNfunction_dLg::synapse0x3374e80() {
   return (neuron0x336b3c0()*0.790029);
}

double NNfunction_dLg::synapse0x3374ec0() {
   return (neuron0x336b700()*-0.0126785);
}

double NNfunction_dLg::synapse0x3374f00() {
   return (neuron0x336ba40()*-0.004262);
}

double NNfunction_dLg::synapse0x3374f40() {
   return (neuron0x336bd80()*-0.00476316);
}

double NNfunction_dLg::synapse0x3374f80() {
   return (neuron0x336c0c0()*0.00385659);
}

double NNfunction_dLg::synapse0x3374fc0() {
   return (neuron0x336c400()*-0.0059874);
}

double NNfunction_dLg::synapse0x338cae0() {
   return (neuron0x336c740()*0.00284398);
}

double NNfunction_dLg::synapse0x338cb20() {
   return (neuron0x336ca80()*0.00396143);
}

double NNfunction_dLg::synapse0x338cb60() {
   return (neuron0x336cdc0()*-0.00330899);
}

double NNfunction_dLg::synapse0x338cba0() {
   return (neuron0x336d100()*0.0854908);
}

double NNfunction_dLg::synapse0x338cbe0() {
   return (neuron0x336d440()*-0.0037502);
}

double NNfunction_dLg::synapse0x338cc20() {
   return (neuron0x336d780()*0.006016);
}

double NNfunction_dLg::synapse0x338cc60() {
   return (neuron0x336dac0()*0.00705959);
}

double NNfunction_dLg::synapse0x338cca0() {
   return (neuron0x336de00()*0.0076477);
}

double NNfunction_dLg::synapse0x338c520() {
   return (neuron0x336e140()*0.0112119);
}

double NNfunction_dLg::synapse0x338c560() {
   return (neuron0x336e6a0()*0.00489575);
}

double NNfunction_dLg::synapse0x338cdf0() {
   return (neuron0x336e8c0()*0.00460131);
}

double NNfunction_dLg::synapse0x338ce30() {
   return (neuron0x336ec00()*0.00413946);
}

double NNfunction_dLg::synapse0x338ce70() {
   return (neuron0x336ef40()*0.00615134);
}

double NNfunction_dLg::synapse0x338ceb0() {
   return (neuron0x336f280()*0.00422765);
}

double NNfunction_dLg::synapse0x338cef0() {
   return (neuron0x336f5c0()*-0.0103947);
}

double NNfunction_dLg::synapse0x338cf30() {
   return (neuron0x336f900()*0.00113206);
}

double NNfunction_dLg::synapse0x338d2b0() {
   return (neuron0x336ad40()*0.009597);
}

double NNfunction_dLg::synapse0x338d2f0() {
   return (neuron0x336b080()*-0.0043646);
}

double NNfunction_dLg::synapse0x338d330() {
   return (neuron0x336b3c0()*-0.354758);
}

double NNfunction_dLg::synapse0x338d370() {
   return (neuron0x336b700()*-1.44023);
}

double NNfunction_dLg::synapse0x338d3b0() {
   return (neuron0x336ba40()*0.0250943);
}

double NNfunction_dLg::synapse0x338d3f0() {
   return (neuron0x336bd80()*0.00437729);
}

double NNfunction_dLg::synapse0x338d430() {
   return (neuron0x336c0c0()*0.00353214);
}

double NNfunction_dLg::synapse0x338d470() {
   return (neuron0x336c400()*0.000409721);
}

double NNfunction_dLg::synapse0x338d4b0() {
   return (neuron0x336c740()*0.00675448);
}

double NNfunction_dLg::synapse0x338d4f0() {
   return (neuron0x336ca80()*-0.00707392);
}

double NNfunction_dLg::synapse0x338d530() {
   return (neuron0x336cdc0()*-0.00839673);
}

double NNfunction_dLg::synapse0x338d570() {
   return (neuron0x336d100()*-0.0674527);
}

double NNfunction_dLg::synapse0x338d5b0() {
   return (neuron0x336d440()*-0.0179082);
}

double NNfunction_dLg::synapse0x338d5f0() {
   return (neuron0x336d780()*-0.0160938);
}

double NNfunction_dLg::synapse0x338d630() {
   return (neuron0x336dac0()*0.0239043);
}

double NNfunction_dLg::synapse0x338d670() {
   return (neuron0x336de00()*0.0331471);
}

double NNfunction_dLg::synapse0x338d100() {
   return (neuron0x336e140()*-0.0329784);
}

double NNfunction_dLg::synapse0x338d140() {
   return (neuron0x336e6a0()*0.0177955);
}

double NNfunction_dLg::synapse0x338d7c0() {
   return (neuron0x336e8c0()*0.0109309);
}

double NNfunction_dLg::synapse0x338d800() {
   return (neuron0x336ec00()*-0.0223333);
}

double NNfunction_dLg::synapse0x338d840() {
   return (neuron0x336ef40()*0.000537101);
}

double NNfunction_dLg::synapse0x338d880() {
   return (neuron0x336f280()*0.0462195);
}

double NNfunction_dLg::synapse0x338d8c0() {
   return (neuron0x336f5c0()*0.00804745);
}

double NNfunction_dLg::synapse0x338d900() {
   return (neuron0x336f900()*-0.0173752);
}

double NNfunction_dLg::synapse0x338dc80() {
   return (neuron0x336ad40()*-0.00266844);
}

double NNfunction_dLg::synapse0x338dcc0() {
   return (neuron0x336b080()*-0.00233902);
}

double NNfunction_dLg::synapse0x338dd00() {
   return (neuron0x336b3c0()*0.032915);
}

double NNfunction_dLg::synapse0x338dd40() {
   return (neuron0x336b700()*1.18889);
}

double NNfunction_dLg::synapse0x338dd80() {
   return (neuron0x336ba40()*-0.000498714);
}

double NNfunction_dLg::synapse0x338ddc0() {
   return (neuron0x336bd80()*0.000969919);
}

double NNfunction_dLg::synapse0x338de00() {
   return (neuron0x336c0c0()*-0.00264403);
}

double NNfunction_dLg::synapse0x338de40() {
   return (neuron0x336c400()*-0.000748337);
}

double NNfunction_dLg::synapse0x338de80() {
   return (neuron0x336c740()*-0.00303448);
}

double NNfunction_dLg::synapse0x338dec0() {
   return (neuron0x336ca80()*-0.00302668);
}

double NNfunction_dLg::synapse0x338df00() {
   return (neuron0x336cdc0()*0.00617056);
}

double NNfunction_dLg::synapse0x338df40() {
   return (neuron0x336d100()*0.703315);
}

double NNfunction_dLg::synapse0x338df80() {
   return (neuron0x336d440()*-0.0106066);
}

double NNfunction_dLg::synapse0x338dfc0() {
   return (neuron0x336d780()*-0.000164037);
}

double NNfunction_dLg::synapse0x338e000() {
   return (neuron0x336dac0()*-0.0126996);
}

double NNfunction_dLg::synapse0x338e040() {
   return (neuron0x336de00()*-0.00839369);
}

double NNfunction_dLg::synapse0x338dad0() {
   return (neuron0x336e140()*0.00805497);
}

double NNfunction_dLg::synapse0x338db10() {
   return (neuron0x336e6a0()*-0.0114038);
}

double NNfunction_dLg::synapse0x337e640() {
   return (neuron0x336e8c0()*-0.0134696);
}

double NNfunction_dLg::synapse0x337e680() {
   return (neuron0x336ec00()*0.000570403);
}

double NNfunction_dLg::synapse0x337e6c0() {
   return (neuron0x336ef40()*-0.00431384);
}

double NNfunction_dLg::synapse0x337e700() {
   return (neuron0x336f280()*-0.000749108);
}

double NNfunction_dLg::synapse0x337e740() {
   return (neuron0x336f5c0()*0.00137478);
}

double NNfunction_dLg::synapse0x337e780() {
   return (neuron0x336f900()*-0.00231671);
}

double NNfunction_dLg::synapse0x337eb00() {
   return (neuron0x336ad40()*-0.00282472);
}

double NNfunction_dLg::synapse0x337eb40() {
   return (neuron0x336b080()*-0.000270979);
}

double NNfunction_dLg::synapse0x337eb80() {
   return (neuron0x336b3c0()*0.0284328);
}

double NNfunction_dLg::synapse0x337ebc0() {
   return (neuron0x336b700()*0.0748115);
}

double NNfunction_dLg::synapse0x337ec00() {
   return (neuron0x336ba40()*0.000888609);
}

double NNfunction_dLg::synapse0x337ec40() {
   return (neuron0x336bd80()*0.000554686);
}

double NNfunction_dLg::synapse0x337ec80() {
   return (neuron0x336c0c0()*0.000385709);
}

double NNfunction_dLg::synapse0x337ecc0() {
   return (neuron0x336c400()*0.000159967);
}

double NNfunction_dLg::synapse0x337ed00() {
   return (neuron0x336c740()*-0.00484581);
}

double NNfunction_dLg::synapse0x337ed40() {
   return (neuron0x336ca80()*-0.00284747);
}

double NNfunction_dLg::synapse0x337ed80() {
   return (neuron0x336cdc0()*-0.00110636);
}

double NNfunction_dLg::synapse0x337edc0() {
   return (neuron0x336d100()*1.59091);
}

double NNfunction_dLg::synapse0x337ee00() {
   return (neuron0x336d440()*-0.0075692);
}

double NNfunction_dLg::synapse0x337ee40() {
   return (neuron0x336d780()*-0.00451502);
}

double NNfunction_dLg::synapse0x337ee80() {
   return (neuron0x336dac0()*0.00458001);
}

double NNfunction_dLg::synapse0x337eec0() {
   return (neuron0x336de00()*0.00327081);
}

double NNfunction_dLg::synapse0x337e950() {
   return (neuron0x336e140()*0.00288536);
}

double NNfunction_dLg::synapse0x337e990() {
   return (neuron0x336e6a0()*-0.00269159);
}

double NNfunction_dLg::synapse0x337f010() {
   return (neuron0x336e8c0()*-0.00754425);
}

double NNfunction_dLg::synapse0x337f050() {
   return (neuron0x336ec00()*0.00137342);
}

double NNfunction_dLg::synapse0x337f090() {
   return (neuron0x336ef40()*-0.00198073);
}

double NNfunction_dLg::synapse0x337f0d0() {
   return (neuron0x336f280()*0.000335114);
}

double NNfunction_dLg::synapse0x337f110() {
   return (neuron0x336f5c0()*-0.000538863);
}

double NNfunction_dLg::synapse0x337f150() {
   return (neuron0x336f900()*6.64706e-05);
}

double NNfunction_dLg::synapse0x337f4d0() {
   return (neuron0x336ad40()*-0.25325);
}

double NNfunction_dLg::synapse0x337f510() {
   return (neuron0x336b080()*0.186534);
}

double NNfunction_dLg::synapse0x337f550() {
   return (neuron0x336b3c0()*-0.178462);
}

double NNfunction_dLg::synapse0x337f590() {
   return (neuron0x336b700()*-0.486566);
}

double NNfunction_dLg::synapse0x337f5d0() {
   return (neuron0x336ba40()*-0.132837);
}

double NNfunction_dLg::synapse0x337f610() {
   return (neuron0x336bd80()*-0.22775);
}

double NNfunction_dLg::synapse0x337f650() {
   return (neuron0x336c0c0()*0.291245);
}

double NNfunction_dLg::synapse0x337f690() {
   return (neuron0x336c400()*0.467657);
}

double NNfunction_dLg::synapse0x337f6d0() {
   return (neuron0x336c740()*0.0736553);
}

double NNfunction_dLg::synapse0x337f710() {
   return (neuron0x336ca80()*-0.405485);
}

double NNfunction_dLg::synapse0x337f750() {
   return (neuron0x336cdc0()*-0.403001);
}

double NNfunction_dLg::synapse0x337f790() {
   return (neuron0x336d100()*-0.234716);
}

double NNfunction_dLg::synapse0x337f7d0() {
   return (neuron0x336d440()*-0.405501);
}

double NNfunction_dLg::synapse0x337f810() {
   return (neuron0x336d780()*-0.165113);
}

double NNfunction_dLg::synapse0x337f850() {
   return (neuron0x336dac0()*0.0384877);
}

double NNfunction_dLg::synapse0x337f890() {
   return (neuron0x336de00()*-0.243108);
}

double NNfunction_dLg::synapse0x337f320() {
   return (neuron0x336e140()*0.0753495);
}

double NNfunction_dLg::synapse0x337f360() {
   return (neuron0x336e6a0()*-0.173595);
}

double NNfunction_dLg::synapse0x337f9e0() {
   return (neuron0x336e8c0()*-0.170318);
}

double NNfunction_dLg::synapse0x337fa20() {
   return (neuron0x336ec00()*-0.190975);
}

double NNfunction_dLg::synapse0x337fa60() {
   return (neuron0x336ef40()*-0.428524);
}

double NNfunction_dLg::synapse0x337faa0() {
   return (neuron0x336f280()*-0.0716734);
}

double NNfunction_dLg::synapse0x337fae0() {
   return (neuron0x336f5c0()*0.178147);
}

double NNfunction_dLg::synapse0x337fb20() {
   return (neuron0x336f900()*-0.383181);
}

double NNfunction_dLg::synapse0x337fea0() {
   return (neuron0x336ad40()*-0.00428209);
}

double NNfunction_dLg::synapse0x337fee0() {
   return (neuron0x336b080()*0.004264);
}

double NNfunction_dLg::synapse0x337ff20() {
   return (neuron0x336b3c0()*-0.0889481);
}

double NNfunction_dLg::synapse0x337ff60() {
   return (neuron0x336b700()*0.690901);
}

double NNfunction_dLg::synapse0x337ffa0() {
   return (neuron0x336ba40()*-0.0138964);
}

double NNfunction_dLg::synapse0x337ffe0() {
   return (neuron0x336bd80()*-0.0171754);
}

double NNfunction_dLg::synapse0x3380020() {
   return (neuron0x336c0c0()*-0.00647445);
}

double NNfunction_dLg::synapse0x3380060() {
   return (neuron0x336c400()*-0.0133161);
}

double NNfunction_dLg::synapse0x33800a0() {
   return (neuron0x336c740()*0.0183603);
}

double NNfunction_dLg::synapse0x33800e0() {
   return (neuron0x336ca80()*0.00868648);
}

double NNfunction_dLg::synapse0x3380120() {
   return (neuron0x336cdc0()*0.00533381);
}

double NNfunction_dLg::synapse0x3380160() {
   return (neuron0x336d100()*0.158188);
}

double NNfunction_dLg::synapse0x33801a0() {
   return (neuron0x336d440()*-0.0579067);
}

double NNfunction_dLg::synapse0x33801e0() {
   return (neuron0x336d780()*0.0181203);
}

double NNfunction_dLg::synapse0x3380220() {
   return (neuron0x336dac0()*0.0146107);
}

double NNfunction_dLg::synapse0x3380260() {
   return (neuron0x336de00()*-0.016281);
}

double NNfunction_dLg::synapse0x337fcf0() {
   return (neuron0x336e140()*-0.0071068);
}

double NNfunction_dLg::synapse0x337fd30() {
   return (neuron0x336e6a0()*-0.001794);
}

double NNfunction_dLg::synapse0x33803b0() {
   return (neuron0x336e8c0()*-0.0193371);
}

double NNfunction_dLg::synapse0x33803f0() {
   return (neuron0x336ec00()*-0.00163839);
}

double NNfunction_dLg::synapse0x3380430() {
   return (neuron0x336ef40()*0.00905662);
}

double NNfunction_dLg::synapse0x3380470() {
   return (neuron0x336f280()*0.0010824);
}

double NNfunction_dLg::synapse0x33804b0() {
   return (neuron0x336f5c0()*-0.00751358);
}

double NNfunction_dLg::synapse0x33804f0() {
   return (neuron0x336f900()*-0.00350314);
}

double NNfunction_dLg::synapse0x33923c0() {
   return (neuron0x336ad40()*0.241921);
}

double NNfunction_dLg::synapse0x3392400() {
   return (neuron0x336b080()*-0.279773);
}

double NNfunction_dLg::synapse0x3392440() {
   return (neuron0x336b3c0()*-0.357067);
}

double NNfunction_dLg::synapse0x3392480() {
   return (neuron0x336b700()*0.222679);
}

double NNfunction_dLg::synapse0x33924c0() {
   return (neuron0x336ba40()*-0.438309);
}

double NNfunction_dLg::synapse0x3392500() {
   return (neuron0x336bd80()*-0.149189);
}

double NNfunction_dLg::synapse0x3392540() {
   return (neuron0x336c0c0()*0.232204);
}

double NNfunction_dLg::synapse0x3392580() {
   return (neuron0x336c400()*0.184376);
}

double NNfunction_dLg::synapse0x33925c0() {
   return (neuron0x336c740()*-0.116167);
}

double NNfunction_dLg::synapse0x3392600() {
   return (neuron0x336ca80()*-0.0875567);
}

double NNfunction_dLg::synapse0x3392640() {
   return (neuron0x336cdc0()*-0.0389318);
}

double NNfunction_dLg::synapse0x3392680() {
   return (neuron0x336d100()*-0.127096);
}

double NNfunction_dLg::synapse0x33926c0() {
   return (neuron0x336d440()*-0.334012);
}

double NNfunction_dLg::synapse0x3392700() {
   return (neuron0x336d780()*0.277923);
}

double NNfunction_dLg::synapse0x3392740() {
   return (neuron0x336dac0()*-0.134802);
}

double NNfunction_dLg::synapse0x3392780() {
   return (neuron0x336de00()*-0.165232);
}

double NNfunction_dLg::synapse0x3380530() {
   return (neuron0x336e140()*0.236389);
}

double NNfunction_dLg::synapse0x3380570() {
   return (neuron0x336e6a0()*-0.299644);
}

double NNfunction_dLg::synapse0x33928d0() {
   return (neuron0x336e8c0()*0.505426);
}

double NNfunction_dLg::synapse0x3392910() {
   return (neuron0x336ec00()*-0.184264);
}

double NNfunction_dLg::synapse0x3392950() {
   return (neuron0x336ef40()*0.20086);
}

double NNfunction_dLg::synapse0x3392990() {
   return (neuron0x336f280()*-0.46992);
}

double NNfunction_dLg::synapse0x33929d0() {
   return (neuron0x336f5c0()*0.360045);
}

double NNfunction_dLg::synapse0x3392a10() {
   return (neuron0x336f900()*-0.173606);
}

double NNfunction_dLg::synapse0x3392d90() {
   return (neuron0x336ad40()*-0.125495);
}

double NNfunction_dLg::synapse0x3392dd0() {
   return (neuron0x336b080()*-0.407967);
}

double NNfunction_dLg::synapse0x3392e10() {
   return (neuron0x336b3c0()*0.177166);
}

double NNfunction_dLg::synapse0x3392e50() {
   return (neuron0x336b700()*-0.661056);
}

double NNfunction_dLg::synapse0x3392e90() {
   return (neuron0x336ba40()*0.0653767);
}

double NNfunction_dLg::synapse0x3392ed0() {
   return (neuron0x336bd80()*0.323832);
}

double NNfunction_dLg::synapse0x3392f10() {
   return (neuron0x336c0c0()*-0.284863);
}

double NNfunction_dLg::synapse0x3392f50() {
   return (neuron0x336c400()*-0.00593965);
}

double NNfunction_dLg::synapse0x3392f90() {
   return (neuron0x336c740()*0.240765);
}

double NNfunction_dLg::synapse0x3392fd0() {
   return (neuron0x336ca80()*-0.379336);
}

double NNfunction_dLg::synapse0x3393010() {
   return (neuron0x336cdc0()*-0.0769072);
}

double NNfunction_dLg::synapse0x3393050() {
   return (neuron0x336d100()*-0.358857);
}

double NNfunction_dLg::synapse0x3393090() {
   return (neuron0x336d440()*0.146973);
}

double NNfunction_dLg::synapse0x33930d0() {
   return (neuron0x336d780()*-0.441775);
}

double NNfunction_dLg::synapse0x3393110() {
   return (neuron0x336dac0()*-0.231167);
}

double NNfunction_dLg::synapse0x3393150() {
   return (neuron0x336de00()*0.378517);
}

double NNfunction_dLg::synapse0x3392be0() {
   return (neuron0x336e140()*-0.0620335);
}

double NNfunction_dLg::synapse0x3392c20() {
   return (neuron0x336e6a0()*-0.174445);
}

double NNfunction_dLg::synapse0x33932a0() {
   return (neuron0x336e8c0()*-0.132595);
}

double NNfunction_dLg::synapse0x33932e0() {
   return (neuron0x336ec00()*-0.0681626);
}

double NNfunction_dLg::synapse0x3393320() {
   return (neuron0x336ef40()*0.0321308);
}

double NNfunction_dLg::synapse0x3393360() {
   return (neuron0x336f280()*0.175313);
}

double NNfunction_dLg::synapse0x33933a0() {
   return (neuron0x336f5c0()*-0.246756);
}

double NNfunction_dLg::synapse0x33933e0() {
   return (neuron0x336f900()*-0.379952);
}

double NNfunction_dLg::synapse0x3393760() {
   return (neuron0x336ad40()*-0.130535);
}

double NNfunction_dLg::synapse0x33937a0() {
   return (neuron0x336b080()*0.520134);
}

double NNfunction_dLg::synapse0x33937e0() {
   return (neuron0x336b3c0()*-0.214082);
}

double NNfunction_dLg::synapse0x3393820() {
   return (neuron0x336b700()*0.017599);
}

double NNfunction_dLg::synapse0x3393860() {
   return (neuron0x336ba40()*-0.444474);
}

double NNfunction_dLg::synapse0x33938a0() {
   return (neuron0x336bd80()*-0.146344);
}

double NNfunction_dLg::synapse0x33938e0() {
   return (neuron0x336c0c0()*0.431423);
}

double NNfunction_dLg::synapse0x3393920() {
   return (neuron0x336c400()*0.401525);
}

double NNfunction_dLg::synapse0x3393960() {
   return (neuron0x336c740()*-0.414956);
}

double NNfunction_dLg::synapse0x33939a0() {
   return (neuron0x336ca80()*-0.338577);
}

double NNfunction_dLg::synapse0x33939e0() {
   return (neuron0x336cdc0()*0.246246);
}

double NNfunction_dLg::synapse0x3393a20() {
   return (neuron0x336d100()*0.278078);
}

double NNfunction_dLg::synapse0x3393a60() {
   return (neuron0x336d440()*0.415709);
}

double NNfunction_dLg::synapse0x3393aa0() {
   return (neuron0x336d780()*0.260651);
}

double NNfunction_dLg::synapse0x3393ae0() {
   return (neuron0x336dac0()*-0.0195688);
}

double NNfunction_dLg::synapse0x3393b20() {
   return (neuron0x336de00()*-0.0673678);
}

double NNfunction_dLg::synapse0x33935b0() {
   return (neuron0x336e140()*0.134201);
}

double NNfunction_dLg::synapse0x33935f0() {
   return (neuron0x336e6a0()*0.20122);
}

double NNfunction_dLg::synapse0x3393c70() {
   return (neuron0x336e8c0()*0.169353);
}

double NNfunction_dLg::synapse0x3393cb0() {
   return (neuron0x336ec00()*0.382707);
}

double NNfunction_dLg::synapse0x3393cf0() {
   return (neuron0x336ef40()*-0.199433);
}

double NNfunction_dLg::synapse0x3393d30() {
   return (neuron0x336f280()*-0.372948);
}

double NNfunction_dLg::synapse0x3393d70() {
   return (neuron0x336f5c0()*-0.116261);
}

double NNfunction_dLg::synapse0x3393db0() {
   return (neuron0x336f900()*-0.0452036);
}

double NNfunction_dLg::synapse0x3394130() {
   return (neuron0x336ad40()*-0.0065757);
}

double NNfunction_dLg::synapse0x3394170() {
   return (neuron0x336b080()*-0.00414282);
}

double NNfunction_dLg::synapse0x33941b0() {
   return (neuron0x336b3c0()*-0.625849);
}

double NNfunction_dLg::synapse0x33941f0() {
   return (neuron0x336b700()*0.853962);
}

double NNfunction_dLg::synapse0x3394230() {
   return (neuron0x336ba40()*-0.0145019);
}

double NNfunction_dLg::synapse0x3394270() {
   return (neuron0x336bd80()*0.0218587);
}

double NNfunction_dLg::synapse0x33942b0() {
   return (neuron0x336c0c0()*-0.0189823);
}

double NNfunction_dLg::synapse0x33942f0() {
   return (neuron0x336c400()*0.00462524);
}

double NNfunction_dLg::synapse0x3394330() {
   return (neuron0x336c740()*-0.0148654);
}

double NNfunction_dLg::synapse0x3394370() {
   return (neuron0x336ca80()*-0.0226507);
}

double NNfunction_dLg::synapse0x33943b0() {
   return (neuron0x336cdc0()*0.0203114);
}

double NNfunction_dLg::synapse0x33943f0() {
   return (neuron0x336d100()*-0.358594);
}

double NNfunction_dLg::synapse0x3394430() {
   return (neuron0x336d440()*-0.0439575);
}

double NNfunction_dLg::synapse0x3394470() {
   return (neuron0x336d780()*0.00552018);
}

double NNfunction_dLg::synapse0x33944b0() {
   return (neuron0x336dac0()*-0.00400492);
}

double NNfunction_dLg::synapse0x33944f0() {
   return (neuron0x336de00()*-0.0361594);
}

double NNfunction_dLg::synapse0x3393f80() {
   return (neuron0x336e140()*0.0217205);
}

double NNfunction_dLg::synapse0x3393fc0() {
   return (neuron0x336e6a0()*-0.0111509);
}

double NNfunction_dLg::synapse0x3394640() {
   return (neuron0x336e8c0()*-0.0394856);
}

double NNfunction_dLg::synapse0x3394680() {
   return (neuron0x336ec00()*-0.0215634);
}

double NNfunction_dLg::synapse0x33946c0() {
   return (neuron0x336ef40()*-0.00387957);
}

double NNfunction_dLg::synapse0x3394700() {
   return (neuron0x336f280()*-0.0179916);
}

double NNfunction_dLg::synapse0x3394740() {
   return (neuron0x336f5c0()*0.00350299);
}

double NNfunction_dLg::synapse0x3394780() {
   return (neuron0x336f900()*-0.00267527);
}

double NNfunction_dLg::synapse0x312ab50() {
   return (neuron0x336fd70()*-0.0141586);
}

double NNfunction_dLg::synapse0x312ab90() {
   return (neuron0x33706c0()*-0.0504109);
}

double NNfunction_dLg::synapse0x3372230() {
   return (neuron0x33711a0()*0.229917);
}

double NNfunction_dLg::synapse0x3372270() {
   return (neuron0x3370c40()*-0.0393731);
}

double NNfunction_dLg::synapse0x3372c00() {
   return (neuron0x3371f80()*-0.884451);
}

double NNfunction_dLg::synapse0x3372c40() {
   return (neuron0x3372950()*0.189984);
}

double NNfunction_dLg::synapse0x33739d0() {
   return (neuron0x3373720()*1.88633);
}

double NNfunction_dLg::synapse0x3373a10() {
   return (neuron0x33740f0()*-0.486069);
}

double NNfunction_dLg::synapse0x33743a0() {
   return (neuron0x3374ac0()*-1.94751);
}

double NNfunction_dLg::synapse0x33743e0() {
   return (neuron0x33755a0()*-0.0510577);
}

double NNfunction_dLg::synapse0x3374d70() {
   return (neuron0x3375f70()*0.0126808);
}

double NNfunction_dLg::synapse0x3374db0() {
   return (neuron0x3373050()*0.0964155);
}

double NNfunction_dLg::synapse0x3375850() {
   return (neuron0x3377b20()*-1.53421);
}

double NNfunction_dLg::synapse0x3375890() {
   return (neuron0x33784f0()*0.0200674);
}

double NNfunction_dLg::synapse0x3376220() {
   return (neuron0x3378ec0()*0.348416);
}

double NNfunction_dLg::synapse0x3376260() {
   return (neuron0x3379890()*-0.202298);
}

double NNfunction_dLg::synapse0x3373300() {
   return (neuron0x337b6a0()*0.016626);
}

double NNfunction_dLg::synapse0x3373340() {
   return (neuron0x337b980()*0.0536545);
}

double NNfunction_dLg::synapse0x3377dd0() {
   return (neuron0x337c350()*0.934548);
}

double NNfunction_dLg::synapse0x3377e10() {
   return (neuron0x337cd20()*0.431627);
}

double NNfunction_dLg::synapse0x33787a0() {
   return (neuron0x337d6f0()*0.722154);
}

double NNfunction_dLg::synapse0x33787e0() {
   return (neuron0x337e0c0()*0.0605451);
}

double NNfunction_dLg::synapse0x3379170() {
   return (neuron0x3376c10()*0.701757);
}

double NNfunction_dLg::synapse0x33791b0() {
   return (neuron0x33775e0()*-0.0377073);
}

double NNfunction_dLg::synapse0x3379b40() {
   return (neuron0x3380e50()*-1.32831);
}

double NNfunction_dLg::synapse0x3379b80() {
   return (neuron0x3381820()*0.215261);
}

double NNfunction_dLg::synapse0x336dce0() {
   return (neuron0x33821f0()*-0.145601);
}

double NNfunction_dLg::synapse0x336dd20() {
   return (neuron0x3382bc0()*-2.7986);
}

double NNfunction_dLg::synapse0x337bc30() {
   return (neuron0x3383590()*0.104154);
}

double NNfunction_dLg::synapse0x337bc70() {
   return (neuron0x3383f60()*-0.365166);
}

double NNfunction_dLg::synapse0x337c600() {
   return (neuron0x3384930()*-0.0488521);
}

double NNfunction_dLg::synapse0x337c640() {
   return (neuron0x3385300()*-0.0737167);
}

double NNfunction_dLg::synapse0x337cfd0() {
   return (neuron0x337b390()*0.0485309);
}

double NNfunction_dLg::synapse0x337d010() {
   return (neuron0x3387ee0()*-0.943301);
}

double NNfunction_dLg::synapse0x337d9a0() {
   return (neuron0x33888b0()*-0.204372);
}

double NNfunction_dLg::synapse0x337d9e0() {
   return (neuron0x3389280()*0.00453893);
}

double NNfunction_dLg::synapse0x337e370() {
   return (neuron0x3389c50()*-0.213659);
}

double NNfunction_dLg::synapse0x337e3b0() {
   return (neuron0x338a620()*4.00682);
}

double NNfunction_dLg::synapse0x3376ec0() {
   return (neuron0x338aff0()*0.345642);
}

double NNfunction_dLg::synapse0x3376f00() {
   return (neuron0x338b9c0()*1.27529);
}

double NNfunction_dLg::synapse0x3380770() {
   return (neuron0x338c390()*-0.229956);
}

double NNfunction_dLg::synapse0x33807b0() {
   return (neuron0x338cf70()*0.159785);
}

double NNfunction_dLg::synapse0x3381100() {
   return (neuron0x338d940()*-1.71677);
}

double NNfunction_dLg::synapse0x3381140() {
   return (neuron0x337e7c0()*-0.606723);
}

double NNfunction_dLg::synapse0x3381ad0() {
   return (neuron0x337f190()*-0.0324839);
}

double NNfunction_dLg::synapse0x3381b10() {
   return (neuron0x337fb60()*-0.49182);
}

double NNfunction_dLg::synapse0x33824a0() {
   return (neuron0x33921a0()*0.0704597);
}

double NNfunction_dLg::synapse0x33824e0() {
   return (neuron0x3392a50()*-0.0555226);
}

double NNfunction_dLg::synapse0x3382e70() {
   return (neuron0x3393420()*0.101244);
}

double NNfunction_dLg::synapse0x3382eb0() {
   return (neuron0x3393df0()*-0.812573);
}

double NNfunction_dLg::synapse0x33855b0() {
   return (neuron0x336fd70()*-0.524162);
}

double NNfunction_dLg::synapse0x33855f0() {
   return (neuron0x33706c0()*-0.308171);
}

double NNfunction_dLg::synapse0x337ab70() {
   return (neuron0x33711a0()*-0.284423);
}

double NNfunction_dLg::synapse0x337abb0() {
   return (neuron0x3370c40()*-0.0602122);
}

double NNfunction_dLg::synapse0x3388190() {
   return (neuron0x3371f80()*-0.207988);
}

double NNfunction_dLg::synapse0x33881d0() {
   return (neuron0x3372950()*-0.147346);
}

double NNfunction_dLg::synapse0x3388b60() {
   return (neuron0x3373720()*-0.433058);
}

double NNfunction_dLg::synapse0x3388ba0() {
   return (neuron0x33740f0()*-0.0764153);
}

double NNfunction_dLg::synapse0x3389530() {
   return (neuron0x3374ac0()*-0.619404);
}

double NNfunction_dLg::synapse0x3389570() {
   return (neuron0x33755a0()*-0.57554);
}

double NNfunction_dLg::synapse0x3389f00() {
   return (neuron0x3375f70()*-0.0260081);
}

double NNfunction_dLg::synapse0x3389f40() {
   return (neuron0x3373050()*-0.452003);
}

double NNfunction_dLg::synapse0x338a8d0() {
   return (neuron0x3377b20()*-0.526228);
}

double NNfunction_dLg::synapse0x338a910() {
   return (neuron0x33784f0()*0.322432);
}

double NNfunction_dLg::synapse0x338b2a0() {
   return (neuron0x3378ec0()*-0.109273);
}

double NNfunction_dLg::synapse0x338b2e0() {
   return (neuron0x3379890()*-0.0872547);
}

double NNfunction_dLg::synapse0x338bc70() {
   return (neuron0x337b6a0()*-0.741426);
}

double NNfunction_dLg::synapse0x338bcb0() {
   return (neuron0x337b980()*-0.88198);
}

double NNfunction_dLg::synapse0x338c640() {
   return (neuron0x337c350()*0.171745);
}

double NNfunction_dLg::synapse0x338c680() {
   return (neuron0x337cd20()*0.0468441);
}

double NNfunction_dLg::synapse0x338d220() {
   return (neuron0x337d6f0()*-0.0983826);
}

double NNfunction_dLg::synapse0x338d260() {
   return (neuron0x337e0c0()*-0.588087);
}

double NNfunction_dLg::synapse0x338dbf0() {
   return (neuron0x3376c10()*-0.811218);
}

double NNfunction_dLg::synapse0x338dc30() {
   return (neuron0x33775e0()*-0.58315);
}

double NNfunction_dLg::synapse0x337ea70() {
   return (neuron0x3380e50()*-0.927511);
}

double NNfunction_dLg::synapse0x337eab0() {
   return (neuron0x3381820()*-0.271665);
}

double NNfunction_dLg::synapse0x337f440() {
   return (neuron0x33821f0()*-0.855709);
}

double NNfunction_dLg::synapse0x337f480() {
   return (neuron0x3382bc0()*-0.813945);
}

double NNfunction_dLg::synapse0x337fe10() {
   return (neuron0x3383590()*-0.259821);
}

double NNfunction_dLg::synapse0x337fe50() {
   return (neuron0x3383f60()*-0.583532);
}

double NNfunction_dLg::synapse0x3392330() {
   return (neuron0x3384930()*-0.631374);
}

double NNfunction_dLg::synapse0x3392370() {
   return (neuron0x3385300()*-0.779638);
}

double NNfunction_dLg::synapse0x3392d00() {
   return (neuron0x337b390()*-0.622705);
}

double NNfunction_dLg::synapse0x3392d40() {
   return (neuron0x3387ee0()*-0.742722);
}

double NNfunction_dLg::synapse0x33936d0() {
   return (neuron0x33888b0()*-0.62839);
}

double NNfunction_dLg::synapse0x3393710() {
   return (neuron0x3389280()*-1.17509);
}

double NNfunction_dLg::synapse0x33940a0() {
   return (neuron0x3389c50()*-0.583776);
}

double NNfunction_dLg::synapse0x33940e0() {
   return (neuron0x338a620()*-0.577425);
}

double NNfunction_dLg::synapse0x336ff90() {
   return (neuron0x338aff0()*-0.486135);
}

double NNfunction_dLg::synapse0x336ffd0() {
   return (neuron0x338b9c0()*-0.208881);
}

double NNfunction_dLg::synapse0x3383840() {
   return (neuron0x338c390()*-0.545287);
}

double NNfunction_dLg::synapse0x3383880() {
   return (neuron0x338cf70()*-0.270154);
}

double NNfunction_dLg::synapse0x33947c0() {
   return (neuron0x338d940()*-0.376168);
}

double NNfunction_dLg::synapse0x3394800() {
   return (neuron0x337e7c0()*-0.589115);
}

double NNfunction_dLg::synapse0x3394840() {
   return (neuron0x337f190()*-0.323294);
}

double NNfunction_dLg::synapse0x3394880() {
   return (neuron0x337fb60()*0.0165656);
}

double NNfunction_dLg::synapse0x339b730() {
   return (neuron0x33921a0()*-0.779623);
}

double NNfunction_dLg::synapse0x339b770() {
   return (neuron0x3392a50()*-0.581165);
}

double NNfunction_dLg::synapse0x339b7b0() {
   return (neuron0x3393420()*-0.801831);
}

double NNfunction_dLg::synapse0x339b7f0() {
   return (neuron0x3393df0()*-0.360551);
}

double NNfunction_dLg::synapse0x339bb70() {
   return (neuron0x336fd70()*0.00163499);
}

double NNfunction_dLg::synapse0x339bbb0() {
   return (neuron0x33706c0()*0.0335351);
}

double NNfunction_dLg::synapse0x339bbf0() {
   return (neuron0x33711a0()*-0.0205566);
}

double NNfunction_dLg::synapse0x339bc30() {
   return (neuron0x3370c40()*-0.00781366);
}

double NNfunction_dLg::synapse0x339bc70() {
   return (neuron0x3371f80()*2.15656);
}

double NNfunction_dLg::synapse0x339bcb0() {
   return (neuron0x3372950()*0.612499);
}

double NNfunction_dLg::synapse0x339bcf0() {
   return (neuron0x3373720()*0.455539);
}

double NNfunction_dLg::synapse0x339bd30() {
   return (neuron0x33740f0()*0.524291);
}

double NNfunction_dLg::synapse0x339bd70() {
   return (neuron0x3374ac0()*2.46478);
}

double NNfunction_dLg::synapse0x339bdb0() {
   return (neuron0x33755a0()*-0.245471);
}

double NNfunction_dLg::synapse0x339bdf0() {
   return (neuron0x3375f70()*0.000900366);
}

double NNfunction_dLg::synapse0x339be30() {
   return (neuron0x3373050()*0.0949317);
}

double NNfunction_dLg::synapse0x339be70() {
   return (neuron0x3377b20()*1.9107);
}

double NNfunction_dLg::synapse0x339beb0() {
   return (neuron0x33784f0()*-0.00706869);
}

double NNfunction_dLg::synapse0x339bef0() {
   return (neuron0x3378ec0()*-0.0156528);
}

double NNfunction_dLg::synapse0x339bf30() {
   return (neuron0x3379890()*-0.00353308);
}

double NNfunction_dLg::synapse0x339b9c0() {
   return (neuron0x337b6a0()*0.0608288);
}

double NNfunction_dLg::synapse0x339ba00() {
   return (neuron0x337b980()*0.00380979);
}

double NNfunction_dLg::synapse0x339c080() {
   return (neuron0x337c350()*0.84232);
}

double NNfunction_dLg::synapse0x339c0c0() {
   return (neuron0x337cd20()*0.278577);
}

double NNfunction_dLg::synapse0x339c100() {
   return (neuron0x337d6f0()*-0.0516092);
}

double NNfunction_dLg::synapse0x339c140() {
   return (neuron0x337e0c0()*0.00399194);
}

double NNfunction_dLg::synapse0x339c180() {
   return (neuron0x3376c10()*0.912957);
}

double NNfunction_dLg::synapse0x339c1c0() {
   return (neuron0x33775e0()*0.00895281);
}

double NNfunction_dLg::synapse0x339c200() {
   return (neuron0x3380e50()*-0.382397);
}

double NNfunction_dLg::synapse0x339c240() {
   return (neuron0x3381820()*-0.060815);
}

double NNfunction_dLg::synapse0x339c280() {
   return (neuron0x33821f0()*0.334891);
}

double NNfunction_dLg::synapse0x339c2c0() {
   return (neuron0x3382bc0()*-0.26027);
}

double NNfunction_dLg::synapse0x339c300() {
   return (neuron0x3383590()*-0.00706584);
}

double NNfunction_dLg::synapse0x339c340() {
   return (neuron0x3383f60()*-0.481626);
}

double NNfunction_dLg::synapse0x339c380() {
   return (neuron0x3384930()*0.191495);
}

double NNfunction_dLg::synapse0x339c3c0() {
   return (neuron0x3385300()*0.00612924);
}

double NNfunction_dLg::synapse0x339bf70() {
   return (neuron0x337b390()*0.107208);
}

double NNfunction_dLg::synapse0x339bfb0() {
   return (neuron0x3387ee0()*-0.441241);
}

double NNfunction_dLg::synapse0x339bff0() {
   return (neuron0x33888b0()*-0.00698058);
}

double NNfunction_dLg::synapse0x339c030() {
   return (neuron0x3389280()*-0.00524245);
}

double NNfunction_dLg::synapse0x339c610() {
   return (neuron0x3389c50()*0.0130968);
}

double NNfunction_dLg::synapse0x339c650() {
   return (neuron0x338a620()*-2.80886);
}

double NNfunction_dLg::synapse0x339c690() {
   return (neuron0x338aff0()*-0.810062);
}

double NNfunction_dLg::synapse0x339c6d0() {
   return (neuron0x338b9c0()*2.79304);
}

double NNfunction_dLg::synapse0x339c710() {
   return (neuron0x338c390()*0.758692);
}

double NNfunction_dLg::synapse0x339c750() {
   return (neuron0x338cf70()*-0.566459);
}

double NNfunction_dLg::synapse0x339c790() {
   return (neuron0x338d940()*-2.07434);
}

double NNfunction_dLg::synapse0x339c7d0() {
   return (neuron0x337e7c0()*1.71521);
}

double NNfunction_dLg::synapse0x339c810() {
   return (neuron0x337f190()*0.00535506);
}

double NNfunction_dLg::synapse0x339c850() {
   return (neuron0x337fb60()*-0.405491);
}

double NNfunction_dLg::synapse0x339c890() {
   return (neuron0x33921a0()*-0.00251838);
}

double NNfunction_dLg::synapse0x339c8d0() {
   return (neuron0x3392a50()*0.0025167);
}

double NNfunction_dLg::synapse0x339c910() {
   return (neuron0x3393420()*0.000947964);
}

double NNfunction_dLg::synapse0x339c950() {
   return (neuron0x3393df0()*0.346046);
}

double NNfunction_dLg::synapse0x339ccd0() {
   return (neuron0x336fd70()*0.00332102);
}

double NNfunction_dLg::synapse0x339cd10() {
   return (neuron0x33706c0()*0.00471198);
}

double NNfunction_dLg::synapse0x339cd50() {
   return (neuron0x33711a0()*-0.0138754);
}

double NNfunction_dLg::synapse0x339cd90() {
   return (neuron0x3370c40()*-0.00427252);
}

double NNfunction_dLg::synapse0x339cdd0() {
   return (neuron0x3371f80()*2.18729);
}

double NNfunction_dLg::synapse0x339ce10() {
   return (neuron0x3372950()*0.610424);
}

double NNfunction_dLg::synapse0x339ce50() {
   return (neuron0x3373720()*-0.164965);
}

double NNfunction_dLg::synapse0x339ce90() {
   return (neuron0x33740f0()*-0.532404);
}

double NNfunction_dLg::synapse0x339ced0() {
   return (neuron0x3374ac0()*0.536098);
}

double NNfunction_dLg::synapse0x339cf10() {
   return (neuron0x33755a0()*-0.558756);
}

double NNfunction_dLg::synapse0x339cf50() {
   return (neuron0x3375f70()*0.00367682);
}

double NNfunction_dLg::synapse0x339cf90() {
   return (neuron0x3373050()*0.0935018);
}

double NNfunction_dLg::synapse0x339cfd0() {
   return (neuron0x3377b20()*1.24709);
}

double NNfunction_dLg::synapse0x339d010() {
   return (neuron0x33784f0()*0.0079775);
}

double NNfunction_dLg::synapse0x339d050() {
   return (neuron0x3378ec0()*-0.0173083);
}

double NNfunction_dLg::synapse0x339d090() {
   return (neuron0x3379890()*0.00501126);
}

double NNfunction_dLg::synapse0x339cb20() {
   return (neuron0x337b6a0()*-0.0070788);
}

double NNfunction_dLg::synapse0x339cb60() {
   return (neuron0x337b980()*-0.0101623);
}

double NNfunction_dLg::synapse0x339d1e0() {
   return (neuron0x337c350()*0.162389);
}

double NNfunction_dLg::synapse0x339d220() {
   return (neuron0x337cd20()*-0.350086);
}

double NNfunction_dLg::synapse0x339d260() {
   return (neuron0x337d6f0()*0.188808);
}

double NNfunction_dLg::synapse0x339d2a0() {
   return (neuron0x337e0c0()*-0.0116284);
}

double NNfunction_dLg::synapse0x339d2e0() {
   return (neuron0x3376c10()*-0.0357581);
}

double NNfunction_dLg::synapse0x339d320() {
   return (neuron0x33775e0()*0.0128233);
}

double NNfunction_dLg::synapse0x339d360() {
   return (neuron0x3380e50()*-0.479191);
}

double NNfunction_dLg::synapse0x339d3a0() {
   return (neuron0x3381820()*-0.100298);
}

double NNfunction_dLg::synapse0x339d3e0() {
   return (neuron0x33821f0()*0.0825938);
}

double NNfunction_dLg::synapse0x339d420() {
   return (neuron0x3382bc0()*0.16202);
}

double NNfunction_dLg::synapse0x339d460() {
   return (neuron0x3383590()*-0.0121142);
}

double NNfunction_dLg::synapse0x339d4a0() {
   return (neuron0x3383f60()*-0.0416039);
}

double NNfunction_dLg::synapse0x339d4e0() {
   return (neuron0x3384930()*-0.160034);
}

double NNfunction_dLg::synapse0x339d520() {
   return (neuron0x3385300()*0.00824917);
}

double NNfunction_dLg::synapse0x339d0d0() {
   return (neuron0x337b390()*-0.0166704);
}

double NNfunction_dLg::synapse0x339d110() {
   return (neuron0x3387ee0()*-0.0434567);
}

double NNfunction_dLg::synapse0x339d150() {
   return (neuron0x33888b0()*-0.155004);
}

double NNfunction_dLg::synapse0x339d190() {
   return (neuron0x3389280()*-0.00771326);
}

double NNfunction_dLg::synapse0x339d770() {
   return (neuron0x3389c50()*0.00577847);
}

double NNfunction_dLg::synapse0x339d7b0() {
   return (neuron0x338a620()*-1.03678);
}

double NNfunction_dLg::synapse0x339d7f0() {
   return (neuron0x338aff0()*0.174209);
}

double NNfunction_dLg::synapse0x339d830() {
   return (neuron0x338b9c0()*-0.175563);
}

double NNfunction_dLg::synapse0x339d870() {
   return (neuron0x338c390()*0.296632);
}

double NNfunction_dLg::synapse0x339d8b0() {
   return (neuron0x338cf70()*0.297869);
}

double NNfunction_dLg::synapse0x339d8f0() {
   return (neuron0x338d940()*-1.19397);
}

double NNfunction_dLg::synapse0x339d930() {
   return (neuron0x337e7c0()*1.02189);
}

double NNfunction_dLg::synapse0x339d970() {
   return (neuron0x337f190()*-0.00231092);
}

double NNfunction_dLg::synapse0x339d9b0() {
   return (neuron0x337fb60()*1.09117);
}

double NNfunction_dLg::synapse0x339d9f0() {
   return (neuron0x33921a0()*-0.000792268);
}

double NNfunction_dLg::synapse0x339da30() {
   return (neuron0x3392a50()*-0.000254178);
}

double NNfunction_dLg::synapse0x339da70() {
   return (neuron0x3393420()*0.00177897);
}

double NNfunction_dLg::synapse0x339dab0() {
   return (neuron0x3393df0()*0.0246606);
}

double NNfunction_dLg::synapse0x339de30() {
   return (neuron0x336fd70()*-0.48793);
}

double NNfunction_dLg::synapse0x339de70() {
   return (neuron0x33706c0()*-0.304413);
}

double NNfunction_dLg::synapse0x339deb0() {
   return (neuron0x33711a0()*-0.636896);
}

double NNfunction_dLg::synapse0x339def0() {
   return (neuron0x3370c40()*-0.0532423);
}

double NNfunction_dLg::synapse0x339df30() {
   return (neuron0x3371f80()*0.220052);
}

double NNfunction_dLg::synapse0x339df70() {
   return (neuron0x3372950()*-0.418359);
}

double NNfunction_dLg::synapse0x339dfb0() {
   return (neuron0x3373720()*-0.280961);
}

double NNfunction_dLg::synapse0x339dff0() {
   return (neuron0x33740f0()*-0.118703);
}

double NNfunction_dLg::synapse0x339e030() {
   return (neuron0x3374ac0()*0.414496);
}

double NNfunction_dLg::synapse0x339e070() {
   return (neuron0x33755a0()*-0.405098);
}

double NNfunction_dLg::synapse0x339e0b0() {
   return (neuron0x3375f70()*0.0960669);
}

double NNfunction_dLg::synapse0x339e0f0() {
   return (neuron0x3373050()*0.0605165);
}

double NNfunction_dLg::synapse0x339e130() {
   return (neuron0x3377b20()*-0.527653);
}

double NNfunction_dLg::synapse0x339e170() {
   return (neuron0x33784f0()*0.0722799);
}

double NNfunction_dLg::synapse0x339e1b0() {
   return (neuron0x3378ec0()*-0.590525);
}

double NNfunction_dLg::synapse0x339e1f0() {
   return (neuron0x3379890()*-0.687221);
}

double NNfunction_dLg::synapse0x339dc80() {
   return (neuron0x337b6a0()*-0.330774);
}

double NNfunction_dLg::synapse0x339dcc0() {
   return (neuron0x337b980()*-0.486996);
}

double NNfunction_dLg::synapse0x339e340() {
   return (neuron0x337c350()*-0.134286);
}

double NNfunction_dLg::synapse0x339e380() {
   return (neuron0x337cd20()*-0.786291);
}

double NNfunction_dLg::synapse0x339e3c0() {
   return (neuron0x337d6f0()*-0.122793);
}

double NNfunction_dLg::synapse0x339e400() {
   return (neuron0x337e0c0()*-0.24099);
}

double NNfunction_dLg::synapse0x339e440() {
   return (neuron0x3376c10()*-0.849288);
}

double NNfunction_dLg::synapse0x339e480() {
   return (neuron0x33775e0()*-0.641435);
}

double NNfunction_dLg::synapse0x339e4c0() {
   return (neuron0x3380e50()*-0.738724);
}

double NNfunction_dLg::synapse0x339e500() {
   return (neuron0x3381820()*-0.317567);
}

double NNfunction_dLg::synapse0x339e540() {
   return (neuron0x33821f0()*-0.578727);
}

double NNfunction_dLg::synapse0x339e580() {
   return (neuron0x3382bc0()*-0.347571);
}

double NNfunction_dLg::synapse0x339e5c0() {
   return (neuron0x3383590()*-0.567759);
}

double NNfunction_dLg::synapse0x339e600() {
   return (neuron0x3383f60()*-0.545932);
}

double NNfunction_dLg::synapse0x339e640() {
   return (neuron0x3384930()*-0.53647);
}

double NNfunction_dLg::synapse0x339e680() {
   return (neuron0x3385300()*-0.714205);
}

double NNfunction_dLg::synapse0x339e230() {
   return (neuron0x337b390()*-0.623583);
}

double NNfunction_dLg::synapse0x339e270() {
   return (neuron0x3387ee0()*-0.413278);
}

double NNfunction_dLg::synapse0x339e2b0() {
   return (neuron0x33888b0()*-0.734812);
}

double NNfunction_dLg::synapse0x339e2f0() {
   return (neuron0x3389280()*-0.245585);
}

double NNfunction_dLg::synapse0x339e8d0() {
   return (neuron0x3389c50()*-0.216275);
}

double NNfunction_dLg::synapse0x339e910() {
   return (neuron0x338a620()*-0.191203);
}

double NNfunction_dLg::synapse0x339e950() {
   return (neuron0x338aff0()*-0.0453544);
}

double NNfunction_dLg::synapse0x339e990() {
   return (neuron0x338b9c0()*-0.567066);
}

double NNfunction_dLg::synapse0x339e9d0() {
   return (neuron0x338c390()*-0.602165);
}

double NNfunction_dLg::synapse0x339ea10() {
   return (neuron0x338cf70()*-0.309843);
}

double NNfunction_dLg::synapse0x339ea50() {
   return (neuron0x338d940()*-0.20128);
}

double NNfunction_dLg::synapse0x339ea90() {
   return (neuron0x337e7c0()*-0.386315);
}

double NNfunction_dLg::synapse0x339ead0() {
   return (neuron0x337f190()*-0.392804);
}

double NNfunction_dLg::synapse0x339eb10() {
   return (neuron0x337fb60()*0.119203);
}

double NNfunction_dLg::synapse0x339eb50() {
   return (neuron0x33921a0()*0.121172);
}

double NNfunction_dLg::synapse0x339eb90() {
   return (neuron0x3392a50()*-0.486846);
}

double NNfunction_dLg::synapse0x339ebd0() {
   return (neuron0x3393420()*0.0118937);
}

double NNfunction_dLg::synapse0x339ec10() {
   return (neuron0x3393df0()*-0.294237);
}

double NNfunction_dLg::synapse0x339ee70() {
   return (neuron0x339aff0()*-5.09917);
}

double NNfunction_dLg::synapse0x339eeb0() {
   return (neuron0x339b390()*-0.239681);
}

double NNfunction_dLg::synapse0x339eef0() {
   return (neuron0x339b830()*-9.95968);
}

double NNfunction_dLg::synapse0x339ef30() {
   return (neuron0x339c990()*-6.93072);
}

double NNfunction_dLg::synapse0x339ef70() {
   return (neuron0x339daf0()*0.889216);
}

